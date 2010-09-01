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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002c11d };

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
0x788c,	// (0x000339a9) Screen

0x7898,	// (0x000339b5) application_window_ParamLimits

0x7898,	// (0x000339b5) application_window

0x297c,	// (0x0002ea99) screen_g1

0x4574,	// (0x00030691) area_bottom_pane_ParamLimits

0x4574,	// (0x00030691) area_bottom_pane

0x4634,	// (0x00030751) area_top_pane_ParamLimits

0x4634,	// (0x00030751) area_top_pane

0x46d2,	// (0x000307ef) main_pane_ParamLimits

0x46d2,	// (0x000307ef) main_pane

0x78a8,	// (0x000339c5) misc_graphics

0x956e,	// (0x0003568b) battery_pane_ParamLimits

0x956e,	// (0x0003568b) battery_pane

0xa250,	// (0x0003636d) bg_status_flat_pane_g8

0xa258,	// (0x00036375) bg_status_flat_pane_g9

0x9636,	// (0x00035753) context_pane_ParamLimits

0x9636,	// (0x00035753) context_pane

0x974c,	// (0x00035869) navi_pane_ParamLimits

0x974c,	// (0x00035869) navi_pane

0x97d0,	// (0x000358ed) signal_pane_ParamLimits

0x97d0,	// (0x000358ed) signal_pane

0x0008,

0xf854,	// (0x0003b971) bg_status_flat_pane_g

0x983d,	// (0x0003595a) status_pane_g1_ParamLimits

0x983d,	// (0x0003595a) status_pane_g1

0x9851,	// (0x0003596e) status_pane_g2_ParamLimits

0x9851,	// (0x0003596e) status_pane_g2

0x985d,	// (0x0003597a) status_pane_g3_ParamLimits

0x985d,	// (0x0003597a) status_pane_g3

0x0004,

0xf77b,	// (0x0003b898) status_pane_g_ParamLimits

0xf77b,	// (0x0003b898) status_pane_g

0x9891,	// (0x000359ae) title_pane_ParamLimits

0x9891,	// (0x000359ae) title_pane

0x98ce,	// (0x000359eb) uni_indicator_pane_ParamLimits

0x98ce,	// (0x000359eb) uni_indicator_pane

0x949e,	// (0x000355bb) bg_list_pane_ParamLimits

0x949e,	// (0x000355bb) bg_list_pane

0x56ec,	// (0x00031809) find_pane

0x94be,	// (0x000355db) listscroll_app_pane_ParamLimits

0x94be,	// (0x000355db) listscroll_app_pane

0x94ca,	// (0x000355e7) listscroll_form_pane

0x44aa,	// (0x000305c7) listscroll_gen_pane_ParamLimits

0x44aa,	// (0x000305c7) listscroll_gen_pane

0x56f4,	// (0x00031811) listscroll_set_pane

0x8409,	// (0x00034526) main_idle_act_pane

0x919a,	// (0x000352b7) main_idle_trad_pane

0x919a,	// (0x000352b7) main_list_empty_pane

0x94be,	// (0x000355db) main_midp_pane

0x94e4,	// (0x00035601) main_pane_g1_ParamLimits

0x94e4,	// (0x00035601) main_pane_g1

0x570a,	// (0x00031827) popup_ai_message_window_ParamLimits

0x570a,	// (0x00031827) popup_ai_message_window

0x57b8,	// (0x000318d5) popup_fep_china_uni_window_ParamLimits

0x57b8,	// (0x000318d5) popup_fep_china_uni_window

0x5814,	// (0x00031931) popup_fep_japan_candidate_window_ParamLimits

0x5814,	// (0x00031931) popup_fep_japan_candidate_window

0x5834,	// (0x00031951) popup_fep_japan_predictive_window_ParamLimits

0x5834,	// (0x00031951) popup_fep_japan_predictive_window

0x5864,	// (0x00031981) popup_find_window

0x5871,	// (0x0003198e) popup_grid_graphic_window_ParamLimits

0x5871,	// (0x0003198e) popup_grid_graphic_window

0x589d,	// (0x000319ba) popup_large_graphic_colour_window

0x58c3,	// (0x000319e0) popup_menu_window_ParamLimits

0x58c3,	// (0x000319e0) popup_menu_window

0x5a7b,	// (0x00031b98) popup_note_image_window

0x5a67,	// (0x00031b84) popup_note_wait_window_ParamLimits

0x5a67,	// (0x00031b84) popup_note_wait_window

0x5a67,	// (0x00031b84) popup_note_window_ParamLimits

0x5a67,	// (0x00031b84) popup_note_window

0x5ad1,	// (0x00031bee) popup_query_code_window_ParamLimits

0x5ad1,	// (0x00031bee) popup_query_code_window

0x5ae5,	// (0x00031c02) popup_query_data_code_window_ParamLimits

0x5ae5,	// (0x00031c02) popup_query_data_code_window

0x5b02,	// (0x00031c1f) popup_query_data_window_ParamLimits

0x5b02,	// (0x00031c1f) popup_query_data_window

0x5b1e,	// (0x00031c3b) popup_query_sat_info_window_ParamLimits

0x5b1e,	// (0x00031c3b) popup_query_sat_info_window

0x5b57,	// (0x00031c74) popup_snote_single_graphic_window_ParamLimits

0x5b57,	// (0x00031c74) popup_snote_single_graphic_window

0x5b57,	// (0x00031c74) popup_snote_single_text_window_ParamLimits

0x5b57,	// (0x00031c74) popup_snote_single_text_window

0x5b6c,	// (0x00031c89) popup_sub_window_general

0x5c9c,	// (0x00031db9) popup_window_general_ParamLimits

0x5c9c,	// (0x00031db9) popup_window_general

0x94f2,	// (0x0003560f) power_save_pane

0x557e,	// (0x0003169b) control_pane_g1_ParamLimits

0x557e,	// (0x0003169b) control_pane_g1

0x55a5,	// (0x000316c2) control_pane_g2_ParamLimits

0x55a5,	// (0x000316c2) control_pane_g2

0x9461,	// (0x0003557e) control_pane_g3_ParamLimits

0x9461,	// (0x0003557e) control_pane_g3

0x0007,

0xf763,	// (0x0003b880) control_pane_g_ParamLimits

0xf763,	// (0x0003b880) control_pane_g

0x55ef,	// (0x0003170c) control_pane_t1_ParamLimits

0x55ef,	// (0x0003170c) control_pane_t1

0x5643,	// (0x00031760) control_pane_t2_ParamLimits

0x5643,	// (0x00031760) control_pane_t2

0x0002,

0xf774,	// (0x0003b891) control_pane_t_ParamLimits

0xf774,	// (0x0003b891) control_pane_t

0x9386,	// (0x000354a3) navi_navi_volume_pane_cp1

0x938e,	// (0x000354ab) status_small_icon_pane

0x9396,	// (0x000354b3) status_small_pane_g1_ParamLimits

0x9396,	// (0x000354b3) status_small_pane_g1

0x93ca,	// (0x000354e7) status_small_pane_g2_ParamLimits

0x93ca,	// (0x000354e7) status_small_pane_g2

0x93d6,	// (0x000354f3) status_small_pane_g3_ParamLimits

0x93d6,	// (0x000354f3) status_small_pane_g3

0x93e2,	// (0x000354ff) status_small_pane_g4_ParamLimits

0x93e2,	// (0x000354ff) status_small_pane_g4

0x93ee,	// (0x0003550b) status_small_pane_g5_ParamLimits

0x93ee,	// (0x0003550b) status_small_pane_g5

0x93fc,	// (0x00035519) status_small_pane_g6_ParamLimits

0x93fc,	// (0x00035519) status_small_pane_g6

0x0007,

0xf752,	// (0x0003b86f) status_small_pane_g_ParamLimits

0xf752,	// (0x0003b86f) status_small_pane_g

0x942b,	// (0x00035548) status_small_pane_t1

0x944d,	// (0x0003556a) status_small_wait_pane_ParamLimits

0x944d,	// (0x0003556a) status_small_wait_pane

0x8c09,	// (0x00034d26) aid_levels_signal_ParamLimits

0x8c09,	// (0x00034d26) aid_levels_signal

0x8c1b,	// (0x00034d38) signal_pane_g1_ParamLimits

0x8c1b,	// (0x00034d38) signal_pane_g1

0x8c30,	// (0x00034d4d) signal_pane_g2_ParamLimits

0x8c30,	// (0x00034d4d) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003b800) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003b800) signal_pane_g

0x8c6b,	// (0x00034d88) context_pane_g1

0x78b2,	// (0x000339cf) title_pane_g1

0x78e8,	// (0x00033a05) title_pane_t1

0x7950,	// (0x00033a6d) title_pane_t2

0x7976,	// (0x00033a93) title_pane_t3

0x0002,

0xf532,	// (0x0003b64f) title_pane_t

0x98e6,	// (0x00035a03) aid_levels_battery_ParamLimits

0x98e6,	// (0x00035a03) aid_levels_battery

0x98fa,	// (0x00035a17) battery_pane_g1_ParamLimits

0x98fa,	// (0x00035a17) battery_pane_g1

0x9910,	// (0x00035a2d) battery_pane_g2_ParamLimits

0x9910,	// (0x00035a2d) battery_pane_g2

0x0001,

0xf786,	// (0x0003b8a3) battery_pane_g_ParamLimits

0xf786,	// (0x0003b8a3) battery_pane_g

0xab86,	// (0x00036ca3) uni_indicator_pane_g1

0xab9c,	// (0x00036cb9) uni_indicator_pane_g2

0xabb2,	// (0x00036ccf) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003ba19) uni_indicator_pane_g

0x900c,	// (0x00035129) navi_icon_pane_ParamLimits

0x900c,	// (0x00035129) navi_icon_pane

0x8f4a,	// (0x00035067) navi_midp_pane

0x9028,	// (0x00035145) navi_navi_pane

0x9032,	// (0x0003514f) navi_text_pane_ParamLimits

0x9032,	// (0x0003514f) navi_text_pane

0x297c,	// (0x0002ea99) status_small_wait_pane_g1

0x7dcb,	// (0x00033ee8) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003ba14) status_small_wait_pane_g

0xa8ab,	// (0x000369c8) navi_navi_icon_text_pane

0xa8b3,	// (0x000369d0) navi_navi_pane_g1_ParamLimits

0xa8b3,	// (0x000369d0) navi_navi_pane_g1

0xa8c5,	// (0x000369e2) navi_navi_pane_g2_ParamLimits

0xa8c5,	// (0x000369e2) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003b9e2) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003b9e2) navi_navi_pane_g

0xa8d7,	// (0x000369f4) navi_navi_tabs_pane

0xa8e0,	// (0x000369fd) navi_navi_text_pane

0xa8ab,	// (0x000369c8) navi_navi_volume_pane

0xa887,	// (0x000369a4) navi_text_pane_t1

0xa87b,	// (0x00036998) navi_icon_pane_g1

0xa7ce,	// (0x000368eb) navi_navi_text_pane_t1

0x6079,	// (0x00032196) navi_navi_volume_pane_g1

0x6081,	// (0x0003219e) volume_small_pane

0xa734,	// (0x00036851) navi_navi_icon_text_pane_g1

0xa73c,	// (0x00036859) navi_navi_icon_text_pane_t1

0x9028,	// (0x00035145) navi_tabs_2_long_pane

0x9028,	// (0x00035145) navi_tabs_2_pane

0x9028,	// (0x00035145) navi_tabs_3_long_pane

0x9028,	// (0x00035145) navi_tabs_3_pane

0x9028,	// (0x00035145) navi_tabs_4_pane

0x6059,	// (0x00032176) tabs_2_active_pane_ParamLimits

0x6059,	// (0x00032176) tabs_2_active_pane

0x6069,	// (0x00032186) tabs_2_passive_pane_ParamLimits

0x6069,	// (0x00032186) tabs_2_passive_pane

0x6027,	// (0x00032144) tabs_3_active_pane_ParamLimits

0x6027,	// (0x00032144) tabs_3_active_pane

0x6037,	// (0x00032154) tabs_3_passive_pane_ParamLimits

0x6037,	// (0x00032154) tabs_3_passive_pane

0x6048,	// (0x00032165) tabs_3_passive_pane_cp_ParamLimits

0x6048,	// (0x00032165) tabs_3_passive_pane_cp

0x5fe3,	// (0x00032100) tabs_4_active_pane_ParamLimits

0x5fe3,	// (0x00032100) tabs_4_active_pane

0x5ff4,	// (0x00032111) tabs_4_passive_pane_ParamLimits

0x5ff4,	// (0x00032111) tabs_4_passive_pane

0x6005,	// (0x00032122) tabs_4_passive_pane_cp_ParamLimits

0x6005,	// (0x00032122) tabs_4_passive_pane_cp

0x6016,	// (0x00032133) tabs_4_passive_pane_cp2_ParamLimits

0x6016,	// (0x00032133) tabs_4_passive_pane_cp2

0x5fbf,	// (0x000320dc) tabs_2_long_active_pane_ParamLimits

0x5fbf,	// (0x000320dc) tabs_2_long_active_pane

0x5fd1,	// (0x000320ee) tabs_2_long_passive_pane_ParamLimits

0x5fd1,	// (0x000320ee) tabs_2_long_passive_pane

0x5f80,	// (0x0003209d) tabs_3_long_active_pane_ParamLimits

0x5f80,	// (0x0003209d) tabs_3_long_active_pane

0x5f93,	// (0x000320b0) tabs_3_long_passive_pane_ParamLimits

0x5f93,	// (0x000320b0) tabs_3_long_passive_pane

0x5fac,	// (0x000320c9) tabs_3_long_passive_pane_cp_ParamLimits

0x5fac,	// (0x000320c9) tabs_3_long_passive_pane_cp

0x5f26,	// (0x00032043) volume_small_pane_g1

0x5f2f,	// (0x0003204c) volume_small_pane_g2

0x5f38,	// (0x00032055) volume_small_pane_g3

0x5f41,	// (0x0003205e) volume_small_pane_g4

0x5f4a,	// (0x00032067) volume_small_pane_g5

0x5f53,	// (0x00032070) volume_small_pane_g6

0x5f5c,	// (0x00032079) volume_small_pane_g7

0x5f65,	// (0x00032082) volume_small_pane_g8

0x5f6e,	// (0x0003208b) volume_small_pane_g9

0x5f77,	// (0x00032094) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003b9ae) volume_small_pane_g

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp2_ParamLimits

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp2

0x7996,	// (0x00033ab3) tabs_3_active_pane_g1

0x799e,	// (0x00033abb) tabs_3_active_pane_t1

0x7988,	// (0x00033aa5) bg_passive_tab_pane_cp2_ParamLimits

0x7988,	// (0x00033aa5) bg_passive_tab_pane_cp2

0x7996,	// (0x00033ab3) tabs_3_passive_pane_g1

0x799e,	// (0x00033abb) tabs_3_passive_pane_t1

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp3_ParamLimits

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp3

0x79b0,	// (0x00033acd) tabs_4_active_pane_g1

0x79b8,	// (0x00033ad5) tabs_4_active_pane_t1

0x7988,	// (0x00033aa5) bg_passive_tab_pane_cp3_ParamLimits

0x7988,	// (0x00033aa5) bg_passive_tab_pane_cp3

0x79b0,	// (0x00033acd) tabs_4_1_passive_pane_g1

0x79b8,	// (0x00033ad5) tabs_4_1_passive_pane_t1

0x94be,	// (0x000355db) list_highlight_pane_cp2

0xadf9,	// (0x00036f16) list_set_pane_ParamLimits

0xadf9,	// (0x00036f16) list_set_pane

0xae9f,	// (0x00036fbc) main_pane_set_t1_ParamLimits

0xae9f,	// (0x00036fbc) main_pane_set_t1

0xaebf,	// (0x00036fdc) main_pane_set_t2_ParamLimits

0xaebf,	// (0x00036fdc) main_pane_set_t2

0xaed3,	// (0x00036ff0) main_pane_set_t3_ParamLimits

0xaed3,	// (0x00036ff0) main_pane_set_t3

0xaee5,	// (0x00037002) main_pane_set_t4_ParamLimits

0xaee5,	// (0x00037002) main_pane_set_t4

0x0003,

0xf961,	// (0x0003ba7e) main_pane_set_t_ParamLimits

0xf961,	// (0x0003ba7e) main_pane_set_t

0xaef7,	// (0x00037014) setting_code_pane

0xaf03,	// (0x00037020) setting_slider_graphic_pane

0xaf03,	// (0x00037020) setting_slider_pane

0xaf03,	// (0x00037020) setting_text_pane

0xaf03,	// (0x00037020) setting_volume_pane

0x4921,	// (0x00030a3e) volume_set_pane

0x7988,	// (0x00033aa5) bg_set_opt_pane_cp

0x4929,	// (0x00030a46) setting_slider_pane_t1

0x4942,	// (0x00030a5f) setting_slider_pane_t2

0x495c,	// (0x00030a79) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003b656) setting_slider_pane_t

0x4974,	// (0x00030a91) slider_set_pane

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp2

0x79ca,	// (0x00033ae7) setting_slider_graphic_pane_g1

0x498a,	// (0x00030aa7) setting_slider_graphic_pane_t1

0x499a,	// (0x00030ab7) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003b65d) setting_slider_graphic_pane_t

0x49aa,	// (0x00030ac7) slider_set_pane_cp

0x78a8,	// (0x000339c5) input_focus_pane_cp1

0xadb8,	// (0x00036ed5) list_set_text_pane

0x297c,	// (0x0002ea99) setting_text_pane_g1

0x78a8,	// (0x000339c5) input_focus_pane_cp2

0x297c,	// (0x0002ea99) setting_code_pane_g1

0x79d3,	// (0x00033af0) setting_code_pane_t1

0x391f,	// (0x0002fa3c) set_text_pane_t1_ParamLimits

0x391f,	// (0x0002fa3c) set_text_pane_t1

0x826d,	// (0x0003438a) set_opt_bg_pane_g1

0x8275,	// (0x00034392) set_opt_bg_pane_g2

0xad92,	// (0x00036eaf) set_opt_bg_pane_g3

0x8285,	// (0x000343a2) set_opt_bg_pane_g4

0x828d,	// (0x000343aa) set_opt_bg_pane_g5

0x8295,	// (0x000343b2) set_opt_bg_pane_g6

0xad9c,	// (0x00036eb9) set_opt_bg_pane_g7

0xada4,	// (0x00036ec1) set_opt_bg_pane_g8

0xadae,	// (0x00036ecb) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003ba6b) set_opt_bg_pane_g

0xad85,	// (0x00036ea2) slider_set_pane_g1

0x6116,	// (0x00032233) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003ba5c) slider_set_pane_g

0x608a,	// (0x000321a7) volume_set_pane_g1

0x6092,	// (0x000321af) volume_set_pane_g2

0x609a,	// (0x000321b7) volume_set_pane_g3

0x60a2,	// (0x000321bf) volume_set_pane_g4

0x60aa,	// (0x000321c7) volume_set_pane_g5

0x60b2,	// (0x000321cf) volume_set_pane_g6

0x60ba,	// (0x000321d7) volume_set_pane_g7

0x60c2,	// (0x000321df) volume_set_pane_g8

0x60ca,	// (0x000321e7) volume_set_pane_g9

0x60d2,	// (0x000321ef) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003ba34) volume_set_pane_g

0x79e1,	// (0x00033afe) indicator_pane_ParamLimits

0x79e1,	// (0x00033afe) indicator_pane

0x79ed,	// (0x00033b0a) main_idle_pane_g2_ParamLimits

0x79ed,	// (0x00033b0a) main_idle_pane_g2

0x7a15,	// (0x00033b32) main_pane_idle_g1_ParamLimits

0x7a15,	// (0x00033b32) main_pane_idle_g1

0x7a22,	// (0x00033b3f) popup_clock_digital_analogue_window_ParamLimits

0x7a22,	// (0x00033b3f) popup_clock_digital_analogue_window

0x7a39,	// (0x00033b56) soft_indicator_pane_ParamLimits

0x7a39,	// (0x00033b56) soft_indicator_pane

0x7a45,	// (0x00033b62) wallpaper_pane_ParamLimits

0x7a45,	// (0x00033b62) wallpaper_pane

0x297c,	// (0x0002ea99) wallpaper_pane_g1

0x7a59,	// (0x00033b76) indicator_pane_g1_ParamLimits

0x7a59,	// (0x00033b76) indicator_pane_g1

0xb1d3,	// (0x000372f0) navi_navi_icon_text_pane_srt_g1

0x7a74,	// (0x00033b91) soft_indicator_pane_t1

0x7a8e,	// (0x00033bab) aid_ps_area_pane

0x7a9f,	// (0x00033bbc) aid_ps_clock_pane

0x7aad,	// (0x00033bca) aid_ps_indicator_pane

0x7ab9,	// (0x00033bd6) indicator_ps_pane_ParamLimits

0x7ab9,	// (0x00033bd6) indicator_ps_pane

0x7ac8,	// (0x00033be5) power_save_pane_g1_ParamLimits

0x7ac8,	// (0x00033be5) power_save_pane_g1

0x7ad4,	// (0x00033bf1) power_save_pane_g2_ParamLimits

0x7ad4,	// (0x00033bf1) power_save_pane_g2

0x4528,	// (0x00030645) aid_navinavi_width_pane

0x7a8e,	// (0x00033bab) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003b662) power_save_pane_g_ParamLimits

0xf545,	// (0x0003b662) power_save_pane_g

0x7ae2,	// (0x00033bff) power_save_pane_t1_ParamLimits

0x7ae2,	// (0x00033bff) power_save_pane_t1

0x7a9f,	// (0x00033bbc) aid_ps_clock_pane_ParamLimits

0x7aad,	// (0x00033bca) aid_ps_indicator_pane_ParamLimits

0x7af4,	// (0x00033c11) power_save_pane_t4_ParamLimits

0x7af4,	// (0x00033c11) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003b667) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003b667) power_save_pane_t

0x7b1e,	// (0x00033c3b) power_save_t3_ParamLimits

0x7b1e,	// (0x00033c3b) power_save_t3

0x7b09,	// (0x00033c26) power_save_t2_ParamLimits

0x7b09,	// (0x00033c26) power_save_t2

0x7b33,	// (0x00033c50) indicator_ps_pane_g1

0x7b3c,	// (0x00033c59) ai_gene_pane_ParamLimits

0x7b3c,	// (0x00033c59) ai_gene_pane

0x7b48,	// (0x00033c65) ai_links_pane_ParamLimits

0x7b48,	// (0x00033c65) ai_links_pane

0x7b54,	// (0x00033c71) indicator_pane_cp1_ParamLimits

0x7b54,	// (0x00033c71) indicator_pane_cp1

0x7b60,	// (0x00033c7d) main_pane_idle_g1_cp_ParamLimits

0x7b60,	// (0x00033c7d) main_pane_idle_g1_cp

0x7b6c,	// (0x00033c89) popup_ai_links_title_window

0x7b75,	// (0x00033c92) soft_indicator_pane_cp1_ParamLimits

0x7b75,	// (0x00033c92) soft_indicator_pane_cp1

0xab74,	// (0x00036c91) ai_links_pane_g1

0xab7d,	// (0x00036c9a) grid_ai_links_pane

0xab57,	// (0x00036c74) ai_gene_pane_1

0xab62,	// (0x00036c7f) ai_gene_pane_2

0xab6b,	// (0x00036c88) list_highlight_pane_cp4

0xab3b,	// (0x00036c58) cell_ai_link_pane_ParamLimits

0xab3b,	// (0x00036c58) cell_ai_link_pane

0xab33,	// (0x00036c50) cell_ai_link_pane_g1

0x7dcb,	// (0x00033ee8) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003ba0f) cell_ai_link_pane_g

0x78a8,	// (0x000339c5) grid_highlight_cp2

0x78a8,	// (0x000339c5) bg_popup_sub_pane_cp1

0x7b8f,	// (0x00033cac) popup_ai_links_title_window_t1

0xaa81,	// (0x00036b9e) ai_gene_pane_1_g1_ParamLimits

0xaa81,	// (0x00036b9e) ai_gene_pane_1_g1

0xaa8d,	// (0x00036baa) ai_gene_pane_1_g2_ParamLimits

0xaa8d,	// (0x00036baa) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003ba05) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003ba05) ai_gene_pane_1_g

0xaa9a,	// (0x00036bb7) ai_gene_pane_1_t1_ParamLimits

0xaa9a,	// (0x00036bb7) ai_gene_pane_1_t1

0xaace,	// (0x00036beb) grid_ai_soft_ind_pane

0xaa6c,	// (0x00036b89) ai_gene_pane_2_t1_ParamLimits

0xaa6c,	// (0x00036b89) ai_gene_pane_2_t1

0x7b9e,	// (0x00033cbb) main_pane_empty_t1_ParamLimits

0x7b9e,	// (0x00033cbb) main_pane_empty_t1

0x7bb6,	// (0x00033cd3) main_pane_empty_t2_ParamLimits

0x7bb6,	// (0x00033cd3) main_pane_empty_t2

0x7bcb,	// (0x00033ce8) main_pane_empty_t3_ParamLimits

0x7bcb,	// (0x00033ce8) main_pane_empty_t3

0x7bdd,	// (0x00033cfa) main_pane_empty_t4_ParamLimits

0x7bdd,	// (0x00033cfa) main_pane_empty_t4

0x7bef,	// (0x00033d0c) main_pane_empty_t5_ParamLimits

0x7bef,	// (0x00033d0c) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003b66c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003b66c) main_pane_empty_t

0x8334,	// (0x00034451) bg_popup_window_pane_ParamLimits

0x8334,	// (0x00034451) bg_popup_window_pane

0xa7dc,	// (0x000368f9) find_popup_pane_cp2_ParamLimits

0xa7dc,	// (0x000368f9) find_popup_pane_cp2

0xa7e8,	// (0x00036905) heading_pane_ParamLimits

0xa7e8,	// (0x00036905) heading_pane

0x78a8,	// (0x000339c5) bg_popup_sub_pane

0xa756,	// (0x00036873) bg_popup_window_pane_g1_ParamLimits

0xa756,	// (0x00036873) bg_popup_window_pane_g1

0xa762,	// (0x0003687f) bg_popup_window_pane_g2_ParamLimits

0xa762,	// (0x0003687f) bg_popup_window_pane_g2

0xa76e,	// (0x0003688b) bg_popup_window_pane_g3_ParamLimits

0xa76e,	// (0x0003688b) bg_popup_window_pane_g3

0xa77a,	// (0x00036897) bg_popup_window_pane_g4_ParamLimits

0xa77a,	// (0x00036897) bg_popup_window_pane_g4

0xa786,	// (0x000368a3) bg_popup_window_pane_g5_ParamLimits

0xa786,	// (0x000368a3) bg_popup_window_pane_g5

0xa792,	// (0x000368af) bg_popup_window_pane_g6_ParamLimits

0xa792,	// (0x000368af) bg_popup_window_pane_g6

0xa79e,	// (0x000368bb) bg_popup_window_pane_g7_ParamLimits

0xa79e,	// (0x000368bb) bg_popup_window_pane_g7

0xa7aa,	// (0x000368c7) bg_popup_window_pane_g8_ParamLimits

0xa7aa,	// (0x000368c7) bg_popup_window_pane_g8

0xa7b6,	// (0x000368d3) bg_popup_window_pane_g9_ParamLimits

0xa7b6,	// (0x000368d3) bg_popup_window_pane_g9

0xa7c2,	// (0x000368df) bg_popup_window_pane_g10_ParamLimits

0xa7c2,	// (0x000368df) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003b9cd) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003b9cd) bg_popup_window_pane_g

0xa6eb,	// (0x00036808) bg_popup_heading_pane_ParamLimits

0xa6eb,	// (0x00036808) bg_popup_heading_pane

0x628c,	// (0x000323a9) tabs_4_passive_pane_cp_srt_ParamLimits

0x628c,	// (0x000323a9) tabs_4_passive_pane_cp_srt

0x629e,	// (0x000323bb) tabs_4_passive_pane_srt_ParamLimits

0xa6ff,	// (0x0003681c) heading_pane_g2

0x629e,	// (0x000323bb) tabs_4_passive_pane_srt

0x94be,	// (0x000355db) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94be,	// (0x000355db) bg_passive_tab_pane_cp3_srt

0xa707,	// (0x00036824) heading_pane_t1_ParamLimits

0xa707,	// (0x00036824) heading_pane_t1

0xa71e,	// (0x0003683b) heading_pane_t2_ParamLimits

0xa71e,	// (0x0003683b) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003b9c8) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003b9c8) heading_pane_t

0xa218,	// (0x00036335) bg_popup_heading_pane_g1

0xa2c7,	// (0x000363e4) bg_popup_heading_pane_g2

0xa2d1,	// (0x000363ee) bg_popup_heading_pane_g3

0xa2db,	// (0x000363f8) bg_popup_heading_pane_g4

0xa2e5,	// (0x00036402) bg_popup_heading_pane_g5

0xa2ef,	// (0x0003640c) bg_popup_heading_pane_g6

0xa2f7,	// (0x00036414) bg_popup_heading_pane_g7

0xa2ff,	// (0x0003641c) bg_popup_heading_pane_g8

0xa309,	// (0x00036426) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003b984) bg_popup_heading_pane_g

0x99e8,	// (0x00035b05) bg_popup_sub_pane_g1

0x99f8,	// (0x00035b15) bg_popup_sub_pane_g2

0x99f0,	// (0x00035b0d) bg_popup_sub_pane_g3

0x9a08,	// (0x00035b25) bg_popup_sub_pane_g4

0x9a00,	// (0x00035b1d) bg_popup_sub_pane_g5

0x9a10,	// (0x00035b2d) bg_popup_sub_pane_g6

0x9a18,	// (0x00035b35) bg_popup_sub_pane_g7

0x9a28,	// (0x00035b45) bg_popup_sub_pane_g8

0x9a20,	// (0x00035b3d) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003b95e) bg_popup_sub_pane_g

0x7c03,	// (0x00033d20) bg_popup_window_pane_cp5_ParamLimits

0x7c03,	// (0x00033d20) bg_popup_window_pane_cp5

0x7c1f,	// (0x00033d3c) popup_note_window_g1_ParamLimits

0x7c1f,	// (0x00033d3c) popup_note_window_g1

0x7c2b,	// (0x00033d48) popup_note_window_t1_ParamLimits

0x7c2b,	// (0x00033d48) popup_note_window_t1

0x7c41,	// (0x00033d5e) popup_note_window_t2_ParamLimits

0x7c41,	// (0x00033d5e) popup_note_window_t2

0x7c57,	// (0x00033d74) popup_note_window_t3_ParamLimits

0x7c57,	// (0x00033d74) popup_note_window_t3

0x7c6d,	// (0x00033d8a) popup_note_window_t4_ParamLimits

0x7c6d,	// (0x00033d8a) popup_note_window_t4

0x7c95,	// (0x00033db2) popup_note_window_t5_ParamLimits

0x7c95,	// (0x00033db2) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003b677) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003b677) popup_note_window_t

0x7cdf,	// (0x00033dfc) bg_popup_window_pane_cp6_ParamLimits

0x7cdf,	// (0x00033dfc) bg_popup_window_pane_cp6

0xa194,	// (0x000362b1) popup_note_image_window_g1_ParamLimits

0xa194,	// (0x000362b1) popup_note_image_window_g1

0xa1a0,	// (0x000362bd) popup_note_image_window_g2_ParamLimits

0xa1a0,	// (0x000362bd) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003b952) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003b952) popup_note_image_window_g

0xa1b9,	// (0x000362d6) popup_note_image_window_t1_ParamLimits

0xa1b9,	// (0x000362d6) popup_note_image_window_t1

0xa1d2,	// (0x000362ef) popup_note_image_window_t2_ParamLimits

0xa1d2,	// (0x000362ef) popup_note_image_window_t2

0xa1eb,	// (0x00036308) popup_note_image_window_t3_ParamLimits

0xa1eb,	// (0x00036308) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003b957) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003b957) popup_note_image_window_t

0xa055,	// (0x00036172) bg_popup_window_pane_cp7_ParamLimits

0xa055,	// (0x00036172) bg_popup_window_pane_cp7

0xa085,	// (0x000361a2) popup_note_wait_window_g1_ParamLimits

0xa085,	// (0x000361a2) popup_note_wait_window_g1

0xa091,	// (0x000361ae) popup_note_wait_window_g2_ParamLimits

0xa091,	// (0x000361ae) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003b940) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003b940) popup_note_wait_window_g

0xa0a9,	// (0x000361c6) popup_note_wait_window_t1_ParamLimits

0xa0a9,	// (0x000361c6) popup_note_wait_window_t1

0xa0d0,	// (0x000361ed) popup_note_wait_window_t2_ParamLimits

0xa0d0,	// (0x000361ed) popup_note_wait_window_t2

0xa0ed,	// (0x0003620a) popup_note_wait_window_t3_ParamLimits

0xa0ed,	// (0x0003620a) popup_note_wait_window_t3

0xa100,	// (0x0003621d) popup_note_wait_window_t4_ParamLimits

0xa100,	// (0x0003621d) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003b947) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003b947) popup_note_wait_window_t

0xa125,	// (0x00036242) wait_bar_pane_ParamLimits

0xa125,	// (0x00036242) wait_bar_pane

0x78a8,	// (0x000339c5) wait_anim_pane

0x78a8,	// (0x000339c5) wait_border_pane

0x297c,	// (0x0002ea99) wait_anim_pane_g1

0x297c,	// (0x0002ea99) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003b7fb) wait_anim_pane_g

0x9ff9,	// (0x00036116) wait_border_pane_g1

0xa004,	// (0x00036121) wait_border_pane_g2

0xa00d,	// (0x0003612a) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003b939) wait_border_pane_g

0x9e64,	// (0x00035f81) bg_popup_window_pane_cp16_ParamLimits

0x9e64,	// (0x00035f81) bg_popup_window_pane_cp16

0x9f64,	// (0x00036081) indicator_popup_pane_cp4_ParamLimits

0x9f64,	// (0x00036081) indicator_popup_pane_cp4

0x9f78,	// (0x00036095) popup_query_data_window_t1_ParamLimits

0x9f78,	// (0x00036095) popup_query_data_window_t1

0x9f8a,	// (0x000360a7) popup_query_data_window_t2_ParamLimits

0x9f8a,	// (0x000360a7) popup_query_data_window_t2

0x9fa3,	// (0x000360c0) popup_query_data_window_t3_ParamLimits

0x9fa3,	// (0x000360c0) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003b932) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003b932) popup_query_data_window_t

0x9fbd,	// (0x000360da) query_popup_data_pane_ParamLimits

0x9fbd,	// (0x000360da) query_popup_data_pane

0x9fd1,	// (0x000360ee) query_popup_data_pane_cp1_ParamLimits

0x9fd1,	// (0x000360ee) query_popup_data_pane_cp1

0x9e64,	// (0x00035f81) bg_popup_window_pane_cp10_ParamLimits

0x9e64,	// (0x00035f81) bg_popup_window_pane_cp10

0x9e96,	// (0x00035fb3) indicator_popup_pane_ParamLimits

0x9e96,	// (0x00035fb3) indicator_popup_pane

0x9eb8,	// (0x00035fd5) popup_query_code_window_t1_ParamLimits

0x9eb8,	// (0x00035fd5) popup_query_code_window_t1

0x9ed2,	// (0x00035fef) popup_query_code_window_t2_ParamLimits

0x9ed2,	// (0x00035fef) popup_query_code_window_t2

0x9f1b,	// (0x00036038) popup_query_code_window_t3_ParamLimits

0x9f1b,	// (0x00036038) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003b92b) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003b92b) popup_query_code_window_t

0x9f4a,	// (0x00036067) query_popup_pane_ParamLimits

0x9f4a,	// (0x00036067) query_popup_pane

0x7cdf,	// (0x00033dfc) bg_popup_window_pane_cp15_ParamLimits

0x7cdf,	// (0x00033dfc) bg_popup_window_pane_cp15

0x7cfd,	// (0x00033e1a) indicator_popup_pane_cp1_ParamLimits

0x7cfd,	// (0x00033e1a) indicator_popup_pane_cp1

0x7d10,	// (0x00033e2d) indicator_popup_pane_cp2_ParamLimits

0x7d10,	// (0x00033e2d) indicator_popup_pane_cp2

0x7d23,	// (0x00033e40) popup_query_data_code_window_g1_ParamLimits

0x7d23,	// (0x00033e40) popup_query_data_code_window_g1

0x7d36,	// (0x00033e53) popup_query_data_code_window_t1_ParamLimits

0x7d36,	// (0x00033e53) popup_query_data_code_window_t1

0x7d48,	// (0x00033e65) popup_query_data_code_window_t2_ParamLimits

0x7d48,	// (0x00033e65) popup_query_data_code_window_t2

0x7d5a,	// (0x00033e77) popup_query_data_code_window_t3_ParamLimits

0x7d5a,	// (0x00033e77) popup_query_data_code_window_t3

0x7d70,	// (0x00033e8d) popup_query_data_code_window_t4_ParamLimits

0x7d70,	// (0x00033e8d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003b682) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003b682) popup_query_data_code_window_t

0x5d40,	// (0x00031e5d) list_single_midp_graphic_pane_g3

0x7d88,	// (0x00033ea5) query_popup_data_pane_cp2_ParamLimits

0x7d9b,	// (0x00033eb8) query_popup_pane_cp2_ParamLimits

0x7d9b,	// (0x00033eb8) query_popup_pane_cp2

0x78a8,	// (0x000339c5) bg_popup_window_pane_cp11

0x9e48,	// (0x00035f65) heading_pane_cp5

0x9e50,	// (0x00035f6d) listscroll_popup_info_pane

0x78a8,	// (0x000339c5) input_focus_pane_cp3

0x7dae,	// (0x00033ecb) query_popup_pane_t1

0x7dbc,	// (0x00033ed9) list_popup_info_pane_ParamLimits

0x7dbc,	// (0x00033ed9) list_popup_info_pane

0x7dcb,	// (0x00033ee8) listscroll_popup_info_pane_g1

0x7dd3,	// (0x00033ef0) scroll_pane_cp7

0x7ddd,	// (0x00033efa) popup_info_list_pane_t1_ParamLimits

0x7ddd,	// (0x00033efa) popup_info_list_pane_t1

0x7df7,	// (0x00033f14) popup_info_list_pane_t2_ParamLimits

0x7df7,	// (0x00033f14) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003b68b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003b68b) popup_info_list_pane_t

0x78a8,	// (0x000339c5) bg_popup_window_pane_cp12

0xb1ed,	// (0x0003730a) find_popup_pane

0x7988,	// (0x00033aa5) bg_popup_window_pane_cp3

0x7e11,	// (0x00033f2e) heading_pane_cp3

0x7e20,	// (0x00033f3d) listscroll_popup_graphic_pane

0x78a8,	// (0x000339c5) bg_popup_window_pane_cp4

0x7e80,	// (0x00033f9d) heading_pane_cp4

0x7e8a,	// (0x00033fa7) listscroll_popup_colour_pane

0x7e92,	// (0x00033faf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7e92,	// (0x00033faf) cell_large_graphic_colour_none_popup_pane

0x7ea6,	// (0x00033fc3) grid_large_graphic_colour_popup_pane_ParamLimits

0x7ea6,	// (0x00033fc3) grid_large_graphic_colour_popup_pane

0x7eca,	// (0x00033fe7) listscroll_popup_colour_pane_g1_ParamLimits

0x7eca,	// (0x00033fe7) listscroll_popup_colour_pane_g1

0x7ee1,	// (0x00033ffe) listscroll_popup_colour_pane_g2_ParamLimits

0x7ee1,	// (0x00033ffe) listscroll_popup_colour_pane_g2

0x7ef8,	// (0x00034015) listscroll_popup_colour_pane_g3_ParamLimits

0x7ef8,	// (0x00034015) listscroll_popup_colour_pane_g3

0x7f08,	// (0x00034025) listscroll_popup_colour_pane_g4_ParamLimits

0x7f08,	// (0x00034025) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003b690) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003b690) listscroll_popup_colour_pane_g

0x7f18,	// (0x00034035) scroll_pane_cp6_ParamLimits

0x7f18,	// (0x00034035) scroll_pane_cp6

0x7f2a,	// (0x00034047) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f2a,	// (0x00034047) cell_large_graphic_colour_popup_pane

0x7f49,	// (0x00034066) cell_large_graphic_colour_none_popup_pane_t1

0x78a8,	// (0x000339c5) grid_highlight_pane_cp5

0x7f58,	// (0x00034075) cell_large_graphic_colour_popup_pane_g1

0x7f60,	// (0x0003407d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003b699) cell_large_graphic_colour_popup_pane_g

0x7f68,	// (0x00034085) cell_large_graphic_colour_popup_pane_g2_copy1

0x7f71,	// (0x0003408e) grid_highlight_pane_cp4

0x7f79,	// (0x00034096) bg_popup_window_pane_cp8_ParamLimits

0x7f79,	// (0x00034096) bg_popup_window_pane_cp8

0x7f94,	// (0x000340b1) popup_snote_single_text_window_g1_ParamLimits

0x7f94,	// (0x000340b1) popup_snote_single_text_window_g1

0x7fa6,	// (0x000340c3) popup_snote_single_text_window_t1_ParamLimits

0x7fa6,	// (0x000340c3) popup_snote_single_text_window_t1

0x7fb9,	// (0x000340d6) popup_snote_single_text_window_t2_ParamLimits

0x7fb9,	// (0x000340d6) popup_snote_single_text_window_t2

0x7fcc,	// (0x000340e9) popup_snote_single_text_window_t3_ParamLimits

0x7fcc,	// (0x000340e9) popup_snote_single_text_window_t3

0x8005,	// (0x00034122) popup_snote_single_text_window_t4_ParamLimits

0x8005,	// (0x00034122) popup_snote_single_text_window_t4

0x8039,	// (0x00034156) popup_snote_single_text_window_t5_ParamLimits

0x8039,	// (0x00034156) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003b69e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003b69e) popup_snote_single_text_window_t

0x8068,	// (0x00034185) bg_popup_window_pane_cp9_ParamLimits

0x8068,	// (0x00034185) bg_popup_window_pane_cp9

0x7f94,	// (0x000340b1) popup_snote_single_graphic_window_g1_ParamLimits

0x7f94,	// (0x000340b1) popup_snote_single_graphic_window_g1

0x8076,	// (0x00034193) popup_snote_single_graphic_window_g2_ParamLimits

0x8076,	// (0x00034193) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003b6a9) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003b6a9) popup_snote_single_graphic_window_g

0x8082,	// (0x0003419f) popup_snote_single_graphic_window_t1_ParamLimits

0x8082,	// (0x0003419f) popup_snote_single_graphic_window_t1

0x8095,	// (0x000341b2) popup_snote_single_graphic_window_t2_ParamLimits

0x8095,	// (0x000341b2) popup_snote_single_graphic_window_t2

0x80a8,	// (0x000341c5) popup_snote_single_graphic_window_t3_ParamLimits

0x80a8,	// (0x000341c5) popup_snote_single_graphic_window_t3

0x80e1,	// (0x000341fe) popup_snote_single_graphic_window_t4_ParamLimits

0x80e1,	// (0x000341fe) popup_snote_single_graphic_window_t4

0x8115,	// (0x00034232) popup_snote_single_graphic_window_t5_ParamLimits

0x8115,	// (0x00034232) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003b6ae) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003b6ae) popup_snote_single_graphic_window_t

0xb12f,	// (0x0003724c) grid_graphic_popup_pane_ParamLimits

0xb12f,	// (0x0003724c) grid_graphic_popup_pane

0xb159,	// (0x00037276) listscroll_popup_graphic_pane_g1_ParamLimits

0xb159,	// (0x00037276) listscroll_popup_graphic_pane_g1

0xb16d,	// (0x0003728a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb16d,	// (0x0003728a) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003baa8) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003baa8) listscroll_popup_graphic_pane_g

0xb181,	// (0x0003729e) scroll_pane_cp5

0xb0c0,	// (0x000371dd) cell_graphic_popup_pane_ParamLimits

0xb0c0,	// (0x000371dd) cell_graphic_popup_pane

0xb0a1,	// (0x000371be) cell_graphic_popup_pane_g1

0xb0a9,	// (0x000371c6) cell_graphic_popup_pane_g2

0x7f68,	// (0x00034085) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003baa1) cell_graphic_popup_pane_g

0xb0b2,	// (0x000371cf) cell_graphic_popup_pane_t2

0x7f71,	// (0x0003408e) grid_highlight_pane_cp3

0x8156,	// (0x00034273) list_gen_pane_ParamLimits

0x8156,	// (0x00034273) list_gen_pane

0x8188,	// (0x000342a5) scroll_pane

0xaff9,	// (0x00037116) bg_list_pane_g1_ParamLimits

0xaff9,	// (0x00037116) bg_list_pane_g1

0xb016,	// (0x00037133) bg_list_pane_g2_ParamLimits

0xb016,	// (0x00037133) bg_list_pane_g2

0xb02b,	// (0x00037148) bg_list_pane_g3_ParamLimits

0xb02b,	// (0x00037148) bg_list_pane_g3

0xb03f,	// (0x0003715c) bg_list_pane_g4_ParamLimits

0xb03f,	// (0x0003715c) bg_list_pane_g4

0xb053,	// (0x00037170) bg_list_pane_g5_ParamLimits

0xb053,	// (0x00037170) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003ba96) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003ba96) bg_list_pane_g

0x61be,	// (0x000322db) list_double2_graphic_large_graphic_pane_ParamLimits

0x61be,	// (0x000322db) list_double2_graphic_large_graphic_pane

0x61be,	// (0x000322db) list_double2_graphic_pane_ParamLimits

0x61be,	// (0x000322db) list_double2_graphic_pane

0x61be,	// (0x000322db) list_double2_large_graphic_pane_ParamLimits

0x61be,	// (0x000322db) list_double2_large_graphic_pane

0x61be,	// (0x000322db) list_double2_pane_ParamLimits

0x61be,	// (0x000322db) list_double2_pane

0x61be,	// (0x000322db) list_double_graphic_heading_pane_ParamLimits

0x61be,	// (0x000322db) list_double_graphic_heading_pane

0x61be,	// (0x000322db) list_double_graphic_pane_ParamLimits

0x61be,	// (0x000322db) list_double_graphic_pane

0x61be,	// (0x000322db) list_double_heading_pane_ParamLimits

0x61be,	// (0x000322db) list_double_heading_pane

0x61be,	// (0x000322db) list_double_large_graphic_pane_ParamLimits

0x61be,	// (0x000322db) list_double_large_graphic_pane

0x61be,	// (0x000322db) list_double_number_pane_ParamLimits

0x61be,	// (0x000322db) list_double_number_pane

0x61be,	// (0x000322db) list_double_pane_ParamLimits

0x61be,	// (0x000322db) list_double_pane

0x61be,	// (0x000322db) list_double_time_pane_ParamLimits

0x61be,	// (0x000322db) list_double_time_pane

0x61be,	// (0x000322db) list_setting_number_pane_ParamLimits

0x61be,	// (0x000322db) list_setting_number_pane

0x61be,	// (0x000322db) list_setting_pane_ParamLimits

0x61be,	// (0x000322db) list_setting_pane

0x620c,	// (0x00032329) list_single_2graphic_pane_ParamLimits

0x620c,	// (0x00032329) list_single_2graphic_pane

0x620c,	// (0x00032329) list_single_graphic_heading_pane_ParamLimits

0x620c,	// (0x00032329) list_single_graphic_heading_pane

0x620c,	// (0x00032329) list_single_graphic_pane_ParamLimits

0x620c,	// (0x00032329) list_single_graphic_pane

0x620c,	// (0x00032329) list_single_heading_pane_ParamLimits

0x620c,	// (0x00032329) list_single_heading_pane

0xafd7,	// (0x000370f4) list_single_large_graphic_pane_ParamLimits

0xafd7,	// (0x000370f4) list_single_large_graphic_pane

0x620c,	// (0x00032329) list_single_number_heading_pane_ParamLimits

0x620c,	// (0x00032329) list_single_number_heading_pane

0x620c,	// (0x00032329) list_single_number_pane_ParamLimits

0x620c,	// (0x00032329) list_single_number_pane

0x620c,	// (0x00032329) list_single_pane_ParamLimits

0x620c,	// (0x00032329) list_single_pane

0x78a8,	// (0x000339c5) list_highlight_pane_cp1

0x397f,	// (0x0002fa9c) list_single_pane_g1_ParamLimits

0x397f,	// (0x0002fa9c) list_single_pane_g1

0x49b2,	// (0x00030acf) list_single_pane_g2_ParamLimits

0x49b2,	// (0x00030acf) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003b6c0) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003b6c0) list_single_pane_g

0x61a8,	// (0x000322c5) list_single_pane_t1_ParamLimits

0x61a8,	// (0x000322c5) list_single_pane_t1

0x397f,	// (0x0002fa9c) list_single_number_pane_g1_ParamLimits

0x397f,	// (0x0002fa9c) list_single_number_pane_g1

0x49b2,	// (0x00030acf) list_single_number_pane_g2_ParamLimits

0x49b2,	// (0x00030acf) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003b6c0) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003b6c0) list_single_number_pane_g

0x60da,	// (0x000321f7) list_single_number_pane_t1_ParamLimits

0x60da,	// (0x000321f7) list_single_number_pane_t1

0x60f0,	// (0x0003220d) list_single_number_pane_t2_ParamLimits

0x60f0,	// (0x0003220d) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003ba57) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003ba57) list_single_number_pane_t

0x3973,	// (0x0002fa90) list_single_graphic_pane_g1_ParamLimits

0x3973,	// (0x0002fa90) list_single_graphic_pane_g1

0x397f,	// (0x0002fa9c) list_single_graphic_pane_g2_ParamLimits

0x397f,	// (0x0002fa9c) list_single_graphic_pane_g2

0x49b2,	// (0x00030acf) list_single_graphic_pane_g3_ParamLimits

0x49b2,	// (0x00030acf) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003b6b9) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003b6b9) list_single_graphic_pane_g

0x49be,	// (0x00030adb) list_single_graphic_pane_t1_ParamLimits

0x49be,	// (0x00030adb) list_single_graphic_pane_t1

0x397f,	// (0x0002fa9c) list_single_heading_pane_g1_ParamLimits

0x397f,	// (0x0002fa9c) list_single_heading_pane_g1

0x49b2,	// (0x00030acf) list_single_heading_pane_g2_ParamLimits

0x49b2,	// (0x00030acf) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003b6c0) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003b6c0) list_single_heading_pane_g

0x49d4,	// (0x00030af1) list_single_heading_pane_t1_ParamLimits

0x49d4,	// (0x00030af1) list_single_heading_pane_t1

0x49ea,	// (0x00030b07) list_single_heading_pane_t2_ParamLimits

0x49ea,	// (0x00030b07) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003b6c5) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003b6c5) list_single_heading_pane_t

0x397f,	// (0x0002fa9c) list_single_number_heading_pane_g1_ParamLimits

0x397f,	// (0x0002fa9c) list_single_number_heading_pane_g1

0x49b2,	// (0x00030acf) list_single_number_heading_pane_g2_ParamLimits

0x49b2,	// (0x00030acf) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003b6c0) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003b6c0) list_single_number_heading_pane_g

0x49d4,	// (0x00030af1) list_single_number_heading_pane_t1_ParamLimits

0x49d4,	// (0x00030af1) list_single_number_heading_pane_t1

0x49fc,	// (0x00030b19) list_single_number_heading_pane_t2_ParamLimits

0x49fc,	// (0x00030b19) list_single_number_heading_pane_t2

0x4a0e,	// (0x00030b2b) list_single_number_heading_pane_t3_ParamLimits

0x4a0e,	// (0x00030b2b) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003b6ca) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003b6ca) list_single_number_heading_pane_t

0x4a20,	// (0x00030b3d) list_single_graphic_heading_pane_g1_ParamLimits

0x4a20,	// (0x00030b3d) list_single_graphic_heading_pane_g1

0x4a2c,	// (0x00030b49) list_single_graphic_heading_pane_g4_ParamLimits

0x4a2c,	// (0x00030b49) list_single_graphic_heading_pane_g4

0x49b2,	// (0x00030acf) list_single_graphic_heading_pane_g5_ParamLimits

0x49b2,	// (0x00030acf) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003b6d1) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003b6d1) list_single_graphic_heading_pane_g

0x49d4,	// (0x00030af1) list_single_graphic_heading_pane_t1_ParamLimits

0x49d4,	// (0x00030af1) list_single_graphic_heading_pane_t1

0x4a3d,	// (0x00030b5a) list_single_graphic_heading_pane_t2_ParamLimits

0x4a3d,	// (0x00030b5a) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003b6d8) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003b6d8) list_single_graphic_heading_pane_t

0x4a4f,	// (0x00030b6c) list_single_large_graphic_pane_g1_ParamLimits

0x4a4f,	// (0x00030b6c) list_single_large_graphic_pane_g1

0x393a,	// (0x0002fa57) list_single_large_graphic_pane_g2_ParamLimits

0x393a,	// (0x0002fa57) list_single_large_graphic_pane_g2

0x3946,	// (0x0002fa63) list_single_large_graphic_pane_g3_ParamLimits

0x3946,	// (0x0002fa63) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003b6dd) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003b6dd) list_single_large_graphic_pane_g

0xa004,	// (0x00036121) wait_border_pane_g2_copy1

0x4a5b,	// (0x00030b78) list_single_large_graphic_pane_g4_cp2

0x4a63,	// (0x00030b80) list_single_large_graphic_pane_t1_ParamLimits

0x4a63,	// (0x00030b80) list_single_large_graphic_pane_t1

0x4a79,	// (0x00030b96) list_double_pane_g1_ParamLimits

0x4a79,	// (0x00030b96) list_double_pane_g1

0x3967,	// (0x0002fa84) list_double_pane_g2_ParamLimits

0x3967,	// (0x0002fa84) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003b6e4) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003b6e4) list_double_pane_g

0x4a85,	// (0x00030ba2) list_double_pane_t1_ParamLimits

0x4a85,	// (0x00030ba2) list_double_pane_t1

0x4a9b,	// (0x00030bb8) list_double_pane_t2_ParamLimits

0x4a9b,	// (0x00030bb8) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003b6e9) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003b6e9) list_double_pane_t

0x4aad,	// (0x00030bca) list_double2_pane_g1_ParamLimits

0x4aad,	// (0x00030bca) list_double2_pane_g1

0x4abe,	// (0x00030bdb) list_double2_pane_g2_ParamLimits

0x4abe,	// (0x00030bdb) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003b6ee) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003b6ee) list_double2_pane_g

0x4aca,	// (0x00030be7) list_double2_pane_t1_ParamLimits

0x4aca,	// (0x00030be7) list_double2_pane_t1

0x4ae0,	// (0x00030bfd) list_double2_pane_t2_ParamLimits

0x4ae0,	// (0x00030bfd) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003b6f3) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003b6f3) list_double2_pane_t

0x4a79,	// (0x00030b96) list_double_number_pane_g1_ParamLimits

0x4a79,	// (0x00030b96) list_double_number_pane_g1

0x3967,	// (0x0002fa84) list_double_number_pane_g2_ParamLimits

0x3967,	// (0x0002fa84) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003b6e4) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003b6e4) list_double_number_pane_g

0x4af2,	// (0x00030c0f) list_double_number_pane_t1_ParamLimits

0x4af2,	// (0x00030c0f) list_double_number_pane_t1

0x4b04,	// (0x00030c21) list_double_number_pane_t2_ParamLimits

0x4b04,	// (0x00030c21) list_double_number_pane_t2

0x4b1a,	// (0x00030c37) list_double_number_pane_t3_ParamLimits

0x4b1a,	// (0x00030c37) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003b6f8) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003b6f8) list_double_number_pane_t

0x4b2c,	// (0x00030c49) list_double_graphic_pane_g1_ParamLimits

0x4b2c,	// (0x00030c49) list_double_graphic_pane_g1

0x4b38,	// (0x00030c55) list_double_graphic_pane_g2_ParamLimits

0x4b38,	// (0x00030c55) list_double_graphic_pane_g2

0x4b47,	// (0x00030c64) list_double_graphic_pane_g3_ParamLimits

0x4b47,	// (0x00030c64) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003b6ff) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003b6ff) list_double_graphic_pane_g

0x4b5f,	// (0x00030c7c) list_double_graphic_pane_t1_ParamLimits

0x4b5f,	// (0x00030c7c) list_double_graphic_pane_t1

0x4b75,	// (0x00030c92) list_double_graphic_pane_t2_ParamLimits

0x4b75,	// (0x00030c92) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003b708) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003b708) list_double_graphic_pane_t

0x4b87,	// (0x00030ca4) list_double2_graphic_pane_g1_ParamLimits

0x4b87,	// (0x00030ca4) list_double2_graphic_pane_g1

0x4b93,	// (0x00030cb0) list_double2_graphic_pane_g2_ParamLimits

0x4b93,	// (0x00030cb0) list_double2_graphic_pane_g2

0x4abe,	// (0x00030bdb) list_double2_graphic_pane_g3_ParamLimits

0x4abe,	// (0x00030bdb) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003b70d) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003b70d) list_double2_graphic_pane_g

0x4b9f,	// (0x00030cbc) list_double2_graphic_pane_t1_ParamLimits

0x4b9f,	// (0x00030cbc) list_double2_graphic_pane_t1

0x4bb5,	// (0x00030cd2) list_double2_graphic_pane_t2_ParamLimits

0x4bb5,	// (0x00030cd2) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003b714) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003b714) list_double2_graphic_pane_t

0x4bc7,	// (0x00030ce4) list_double_large_graphic_pane_g1_ParamLimits

0x4bc7,	// (0x00030ce4) list_double_large_graphic_pane_g1

0x4be6,	// (0x00030d03) list_double_large_graphic_pane_g2_ParamLimits

0x4be6,	// (0x00030d03) list_double_large_graphic_pane_g2

0x3967,	// (0x0002fa84) list_double_large_graphic_pane_g3_ParamLimits

0x3967,	// (0x0002fa84) list_double_large_graphic_pane_g3

0x4bf7,	// (0x00030d14) list_double_large_graphic_pane_g4_ParamLimits

0x4bf7,	// (0x00030d14) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003b719) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003b719) list_double_large_graphic_pane_g

0x4c09,	// (0x00030d26) list_double_large_graphic_pane_t1_ParamLimits

0x4c09,	// (0x00030d26) list_double_large_graphic_pane_t1

0x4c22,	// (0x00030d3f) list_double_large_graphic_pane_t2_ParamLimits

0x4c22,	// (0x00030d3f) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003b724) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003b724) list_double_large_graphic_pane_t

0x4c34,	// (0x00030d51) list_double2_large_graphic_pane_g1_ParamLimits

0x4c34,	// (0x00030d51) list_double2_large_graphic_pane_g1

0x4aad,	// (0x00030bca) list_double2_large_graphic_pane_g2_ParamLimits

0x4aad,	// (0x00030bca) list_double2_large_graphic_pane_g2

0x4abe,	// (0x00030bdb) list_double2_large_graphic_pane_g3_ParamLimits

0x4abe,	// (0x00030bdb) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003b729) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003b729) list_double2_large_graphic_pane_g

0x4c40,	// (0x00030d5d) list_double2_large_graphic_pane_t1_ParamLimits

0x4c40,	// (0x00030d5d) list_double2_large_graphic_pane_t1

0x4c56,	// (0x00030d73) list_double2_large_graphic_pane_t2_ParamLimits

0x4c56,	// (0x00030d73) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003b730) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003b730) list_double2_large_graphic_pane_t

0x4c68,	// (0x00030d85) list_double_heading_pane_g1_ParamLimits

0x4c68,	// (0x00030d85) list_double_heading_pane_g1

0x4c79,	// (0x00030d96) list_double_heading_pane_g2_ParamLimits

0x4c79,	// (0x00030d96) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003b735) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003b735) list_double_heading_pane_g

0x4c85,	// (0x00030da2) list_double_heading_pane_t1_ParamLimits

0x4c85,	// (0x00030da2) list_double_heading_pane_t1

0x4ae0,	// (0x00030bfd) list_double_heading_pane_t2_ParamLimits

0x4ae0,	// (0x00030bfd) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003b73a) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003b73a) list_double_heading_pane_t

0x4c9b,	// (0x00030db8) list_double_graphic_heading_pane_g1_ParamLimits

0x4c9b,	// (0x00030db8) list_double_graphic_heading_pane_g1

0x4c68,	// (0x00030d85) list_double_graphic_heading_pane_g2_ParamLimits

0x4c68,	// (0x00030d85) list_double_graphic_heading_pane_g2

0x4c79,	// (0x00030d96) list_double_graphic_heading_pane_g3_ParamLimits

0x4c79,	// (0x00030d96) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003b73f) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003b73f) list_double_graphic_heading_pane_g

0x4ca7,	// (0x00030dc4) list_double_graphic_heading_pane_t1_ParamLimits

0x4ca7,	// (0x00030dc4) list_double_graphic_heading_pane_t1

0x4bb5,	// (0x00030cd2) list_double_graphic_heading_pane_t2_ParamLimits

0x4bb5,	// (0x00030cd2) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003b746) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003b746) list_double_graphic_heading_pane_t

0x4be6,	// (0x00030d03) list_double_time_pane_g1_ParamLimits

0x4be6,	// (0x00030d03) list_double_time_pane_g1

0x3967,	// (0x0002fa84) list_double_time_pane_g2_ParamLimits

0x3967,	// (0x0002fa84) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003b74b) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003b74b) list_double_time_pane_g

0x4cbd,	// (0x00030dda) list_double_time_pane_t1_ParamLimits

0x4cbd,	// (0x00030dda) list_double_time_pane_t1

0x4cd3,	// (0x00030df0) list_double_time_pane_t2_ParamLimits

0x4cd3,	// (0x00030df0) list_double_time_pane_t2

0x4ce5,	// (0x00030e02) list_double_time_pane_t3_ParamLimits

0x4ce5,	// (0x00030e02) list_double_time_pane_t3

0x4cf7,	// (0x00030e14) list_double_time_pane_t4_ParamLimits

0x4cf7,	// (0x00030e14) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003b750) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003b750) list_double_time_pane_t

0x4b93,	// (0x00030cb0) list_setting_pane_g1_ParamLimits

0x4b93,	// (0x00030cb0) list_setting_pane_g1

0x4abe,	// (0x00030bdb) list_setting_pane_g2_ParamLimits

0x4abe,	// (0x00030bdb) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003b759) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003b759) list_setting_pane_g

0x4d09,	// (0x00030e26) list_setting_pane_t1_ParamLimits

0x4d09,	// (0x00030e26) list_setting_pane_t1

0x4d23,	// (0x00030e40) list_setting_pane_t2_ParamLimits

0x4d23,	// (0x00030e40) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003b75e) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003b75e) list_setting_pane_t

0x4d62,	// (0x00030e7f) set_value_pane_cp_ParamLimits

0x4d62,	// (0x00030e7f) set_value_pane_cp

0x4d6e,	// (0x00030e8b) list_setting_number_pane_g1_ParamLimits

0x4d6e,	// (0x00030e8b) list_setting_number_pane_g1

0x4d7a,	// (0x00030e97) list_setting_number_pane_g2_ParamLimits

0x4d7a,	// (0x00030e97) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003b765) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003b765) list_setting_number_pane_g

0x4d86,	// (0x00030ea3) list_setting_number_pane_t1_ParamLimits

0x4d86,	// (0x00030ea3) list_setting_number_pane_t1

0x4d9f,	// (0x00030ebc) list_setting_number_pane_t2_ParamLimits

0x4d9f,	// (0x00030ebc) list_setting_number_pane_t2

0x4db9,	// (0x00030ed6) list_setting_number_pane_t3_ParamLimits

0x4db9,	// (0x00030ed6) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003b76a) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003b76a) list_setting_number_pane_t

0x4d62,	// (0x00030e7f) set_value_pane_ParamLimits

0x4d62,	// (0x00030e7f) set_value_pane

0x81bc,	// (0x000342d9) bg_set_opt_pane_ParamLimits

0x81bc,	// (0x000342d9) bg_set_opt_pane

0x4dfc,	// (0x00030f19) set_value_pane_t1

0x81dd,	// (0x000342fa) slider_set_pane_cp3

0x81e6,	// (0x00034303) volume_small_pane_cp

0x81ef,	// (0x0003430c) list_form_gen_pane

0x81f8,	// (0x00034315) scroll_pane_cp8

0x4e12,	// (0x00030f2f) form_field_data_pane_ParamLimits

0x4e12,	// (0x00030f2f) form_field_data_pane

0x4e32,	// (0x00030f4f) form_field_data_wide_pane_ParamLimits

0x4e32,	// (0x00030f4f) form_field_data_wide_pane

0x4e53,	// (0x00030f70) form_field_popup_pane_ParamLimits

0x4e53,	// (0x00030f70) form_field_popup_pane

0x4e73,	// (0x00030f90) form_field_popup_wide_pane_ParamLimits

0x4e73,	// (0x00030f90) form_field_popup_wide_pane

0x4e90,	// (0x00030fad) form_field_slider_pane_ParamLimits

0x4e90,	// (0x00030fad) form_field_slider_pane

0x4ea3,	// (0x00030fc0) form_field_slider_wide_pane_ParamLimits

0x4ea3,	// (0x00030fc0) form_field_slider_wide_pane

0x8209,	// (0x00034326) data_form_pane

0x4ec0,	// (0x00030fdd) form_field_data_pane_t1

0x8215,	// (0x00034332) input_focus_pane

0x4ed8,	// (0x00030ff5) data_form_wide_pane

0x4ef5,	// (0x00031012) form_field_data_wide_pane_t1

0x7f86,	// (0x000340a3) input_focus_pane_cp6

0x4f17,	// (0x00031034) form_field_popup_pane_t1

0x8215,	// (0x00034332) input_focus_pane_cp7

0x8243,	// (0x00034360) list_form_pane

0x4f37,	// (0x00031054) form_field_popup_wide_pane_t1

0x8215,	// (0x00034332) input_focus_pane_cp8

0x824f,	// (0x0003436c) list_form_wide_pane

0x4f54,	// (0x00031071) form_field_slider_pane_t1_ParamLimits

0x4f54,	// (0x00031071) form_field_slider_pane_t1

0x4f6a,	// (0x00031087) form_field_slider_pane_t2_ParamLimits

0x4f6a,	// (0x00031087) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003b77a) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003b77a) form_field_slider_pane_t

0x7c03,	// (0x00033d20) input_focus_pane_cp9_ParamLimits

0x7c03,	// (0x00033d20) input_focus_pane_cp9

0x4f7f,	// (0x0003109c) slider_cont_pane_ParamLimits

0x4f7f,	// (0x0003109c) slider_cont_pane

0x825b,	// (0x00034378) form_field_slider_wide_pane_t1_ParamLimits

0x825b,	// (0x00034378) form_field_slider_wide_pane_t1

0x4f93,	// (0x000310b0) form_field_slider_wide_pane_t2_ParamLimits

0x4f93,	// (0x000310b0) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003b77f) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003b77f) form_field_slider_wide_pane_t

0x7c03,	// (0x00033d20) input_focus_pane_cp10_ParamLimits

0x7c03,	// (0x00033d20) input_focus_pane_cp10

0x4fa5,	// (0x000310c2) slider_cont_pane_cp1_ParamLimits

0x4fa5,	// (0x000310c2) slider_cont_pane_cp1

0x4fb9,	// (0x000310d6) slider_form_pane_cp

0x826d,	// (0x0003438a) input_focus_pane_g1

0x8275,	// (0x00034392) input_focus_pane_g2

0x827d,	// (0x0003439a) input_focus_pane_g3

0x8285,	// (0x000343a2) input_focus_pane_g4

0x828d,	// (0x000343aa) input_focus_pane_g5

0x8295,	// (0x000343b2) input_focus_pane_g6

0x829d,	// (0x000343ba) input_focus_pane_g7

0x82a5,	// (0x000343c2) input_focus_pane_g8

0x82ad,	// (0x000343ca) input_focus_pane_g9

0x297c,	// (0x0002ea99) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003b784) input_focus_pane_g

0xa00d,	// (0x0003612a) wait_border_pane_g3_copy1

0x4fc1,	// (0x000310de) data_form_pane_t1

0x297c,	// (0x0002ea99) wait_anim_pane_g1_copy1

0x617a,	// (0x00032297) data_form_wide_pane_t1

0x4fdc,	// (0x000310f9) list_form_graphic_pane_cp_ParamLimits

0x4fdc,	// (0x000310f9) list_form_graphic_pane_cp

0xaf2d,	// (0x0003704a) slider_form_pane_g1

0xaf36,	// (0x00037053) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003ba87) slider_form_pane_g

0x4ff5,	// (0x00031112) list_form_graphic_pane_ParamLimits

0x4ff5,	// (0x00031112) list_form_graphic_pane

0x5011,	// (0x0003112e) list_form_graphic_pane_g1

0x5019,	// (0x00031136) list_form_graphic_pane_t1_ParamLimits

0x5019,	// (0x00031136) list_form_graphic_pane_t1

0x7988,	// (0x00033aa5) list_highlight_pane_cp5_ParamLimits

0x7988,	// (0x00033aa5) list_highlight_pane_cp5

0x502e,	// (0x0003114b) find_pane_g1

0x82b5,	// (0x000343d2) input_find_pane

0x5037,	// (0x00031154) input_find_pane_g1_ParamLimits

0x5037,	// (0x00031154) input_find_pane_g1

0x5043,	// (0x00031160) input_find_pane_t1_ParamLimits

0x5043,	// (0x00031160) input_find_pane_t1

0x5058,	// (0x00031175) input_find_pane_t2_ParamLimits

0x5058,	// (0x00031175) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003b799) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003b799) input_find_pane_t

0x82be,	// (0x000343db) input_focus_pane_cp5_ParamLimits

0x82be,	// (0x000343db) input_focus_pane_cp5

0x82dd,	// (0x000343fa) bg_popup_window_pane_cp2_ParamLimits

0x82dd,	// (0x000343fa) bg_popup_window_pane_cp2

0x82ea,	// (0x00034407) listscroll_menu_pane_ParamLimits

0x82ea,	// (0x00034407) listscroll_menu_pane

0x82f6,	// (0x00034413) popup_submenu_window_ParamLimits

0x82f6,	// (0x00034413) popup_submenu_window

0x8322,	// (0x0003443f) find_popup_pane_g1

0x832a,	// (0x00034447) input_popup_find_pane_cp

0x8334,	// (0x00034451) input_focus_pane_cp4_ParamLimits

0x8334,	// (0x00034451) input_focus_pane_cp4

0x834e,	// (0x0003446b) input_popup_find_pane_t1_ParamLimits

0x834e,	// (0x0003446b) input_popup_find_pane_t1

0x78a8,	// (0x000339c5) bg_popup_sub_pane_cp

0x837c,	// (0x00034499) listscroll_popup_sub_pane

0x8384,	// (0x000344a1) list_submenu_pane_ParamLimits

0x8384,	// (0x000344a1) list_submenu_pane

0x8395,	// (0x000344b2) scroll_pane_cp4

0x839d,	// (0x000344ba) list_single_popup_submenu_pane_ParamLimits

0x839d,	// (0x000344ba) list_single_popup_submenu_pane

0x83b1,	// (0x000344ce) list_single_popup_submenu_pane_g1

0x83b9,	// (0x000344d6) list_single_popup_submenu_pane_t1_ParamLimits

0x83b9,	// (0x000344d6) list_single_popup_submenu_pane_t1

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp1_ParamLimits

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp1

0x83ce,	// (0x000344eb) tabs_2_active_pane_g1

0x83d6,	// (0x000344f3) tabs_2_active_pane_t1

0x7988,	// (0x00033aa5) bg_passive_tab_pane_cp1_ParamLimits

0x7988,	// (0x00033aa5) bg_passive_tab_pane_cp1

0x83ce,	// (0x000344eb) tabs_2_passive_pane_g1

0x83d6,	// (0x000344f3) tabs_2_passive_pane_t1

0x83e8,	// (0x00034505) bg_active_tab_pane_cp4

0x83f6,	// (0x00034513) tabs_2_long_active_pane_t1

0x8409,	// (0x00034526) bg_passive_tab_pane_cp4

0x5d48,	// (0x00031e65) list_single_midp_graphic_pane_g4_ParamLimits

0x83e8,	// (0x00034505) bg_active_tab_pane_cp5

0x8415,	// (0x00034532) tabs_3_long_active_pane_t1

0x8409,	// (0x00034526) bg_passive_tab_pane_cp5

0x5d48,	// (0x00031e65) list_single_midp_graphic_pane_g4

0x7988,	// (0x00033aa5) bg_popup_window_pane_cp13_ParamLimits

0x7988,	// (0x00033aa5) bg_popup_window_pane_cp13

0x8430,	// (0x0003454d) listscroll_popup_fast_pane_ParamLimits

0x8430,	// (0x0003454d) listscroll_popup_fast_pane

0x843f,	// (0x0003455c) grid_popup_fast_pane_ParamLimits

0x843f,	// (0x0003455c) grid_popup_fast_pane

0x8451,	// (0x0003456e) scroll_pane_cp9_ParamLimits

0x8451,	// (0x0003456e) scroll_pane_cp9

0xc878,	// (0x00038995) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc878,	// (0x00038995) list_single_graphic_hl_pane_t1_cp2

0x8475,	// (0x00034592) input_focus_pane_cp20_ParamLimits

0x8475,	// (0x00034592) input_focus_pane_cp20

0x8483,	// (0x000345a0) query_popup_data_pane_t1_ParamLimits

0x8483,	// (0x000345a0) query_popup_data_pane_t1

0x8496,	// (0x000345b3) query_popup_data_pane_t2_ParamLimits

0x8496,	// (0x000345b3) query_popup_data_pane_t2

0x87b6,	// (0x000348d3) query_popup_data_pane_t3_ParamLimits

0x87b6,	// (0x000348d3) query_popup_data_pane_t3

0x87f7,	// (0x00034914) query_popup_data_pane_t4_ParamLimits

0x87f7,	// (0x00034914) query_popup_data_pane_t4

0x8833,	// (0x00034950) query_popup_data_pane_t5_ParamLimits

0x8833,	// (0x00034950) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003b79e) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003b79e) query_popup_data_pane_t

0x826d,	// (0x0003438a) bg_set_opt_pane_g1

0x8275,	// (0x00034392) bg_set_opt_pane_g2

0x827d,	// (0x0003439a) bg_set_opt_pane_g3

0x8285,	// (0x000343a2) bg_set_opt_pane_g4

0x828d,	// (0x000343aa) bg_set_opt_pane_g5

0x8295,	// (0x000343b2) bg_set_opt_pane_g6

0x829d,	// (0x000343ba) bg_set_opt_pane_g7

0x82a5,	// (0x000343c2) bg_set_opt_pane_g8

0x82ad,	// (0x000343ca) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003b7a9) bg_set_opt_pane_g

0x5394,	// (0x000314b1) control_top_pane_stacon_ParamLimits

0x5394,	// (0x000314b1) control_top_pane_stacon

0x53e7,	// (0x00031504) signal_pane_stacon_ParamLimits

0x53e7,	// (0x00031504) signal_pane_stacon

0x8e25,	// (0x00034f42) stacon_top_pane_g1_ParamLimits

0x8e25,	// (0x00034f42) stacon_top_pane_g1

0x540c,	// (0x00031529) title_pane_stacon_ParamLimits

0x540c,	// (0x00031529) title_pane_stacon

0x5436,	// (0x00031553) uni_indicator_pane_stacon_ParamLimits

0x5436,	// (0x00031553) uni_indicator_pane_stacon

0x544b,	// (0x00031568) battery_pane_stacon_ParamLimits

0x544b,	// (0x00031568) battery_pane_stacon

0x548f,	// (0x000315ac) control_bottom_pane_stacon_ParamLimits

0x548f,	// (0x000315ac) control_bottom_pane_stacon

0x54b2,	// (0x000315cf) navi_pane_stacon_ParamLimits

0x54b2,	// (0x000315cf) navi_pane_stacon

0x8e47,	// (0x00034f64) stacon_bottom_pane_g1_ParamLimits

0x8e47,	// (0x00034f64) stacon_bottom_pane_g1

0x506d,	// (0x0003118a) aid_levels_signal_lsc_ParamLimits

0x506d,	// (0x0003118a) aid_levels_signal_lsc

0x5083,	// (0x000311a0) signal_pane_stacon_g1_ParamLimits

0x5083,	// (0x000311a0) signal_pane_stacon_g1

0x5097,	// (0x000311b4) signal_pane_stacon_g2_ParamLimits

0x5097,	// (0x000311b4) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003b7bc) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003b7bc) signal_pane_stacon_g

0x50cc,	// (0x000311e9) title_pane_stacon_t1_ParamLimits

0x50cc,	// (0x000311e9) title_pane_stacon_t1

0x8877,	// (0x00034994) uni_indicator_pane_stacon_g1

0x8881,	// (0x0003499e) uni_indicator_pane_stacon_g2

0x888b,	// (0x000349a8) uni_indicator_pane_stacon_g3

0x8895,	// (0x000349b2) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003b7c8) uni_indicator_pane_stacon_g

0x50f1,	// (0x0003120e) control_top_pane_stacon_g1

0x50f9,	// (0x00031216) control_top_pane_stacon_t1_ParamLimits

0x50f9,	// (0x00031216) control_top_pane_stacon_t1

0x5130,	// (0x0003124d) aid_levels_battery_lsc_ParamLimits

0x5130,	// (0x0003124d) aid_levels_battery_lsc

0x5147,	// (0x00031264) battery_pane_stacon_g1_ParamLimits

0x5147,	// (0x00031264) battery_pane_stacon_g1

0x515a,	// (0x00031277) battery_pane_stacon_g2_ParamLimits

0x515a,	// (0x00031277) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003b7d1) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003b7d1) battery_pane_stacon_g

0x5198,	// (0x000312b5) navi_icon_pane_stacon

0x51ac,	// (0x000312c9) navi_navi_pane_stacon

0x5198,	// (0x000312b5) navi_text_pane_stacon

0x50f1,	// (0x0003120e) control_bottom_pane_stacon_g1

0x51c0,	// (0x000312dd) control_bottom_pane_stacon_t1_ParamLimits

0x51c0,	// (0x000312dd) control_bottom_pane_stacon_t1

0x88b9,	// (0x000349d6) grid_app_pane_ParamLimits

0x88b9,	// (0x000349d6) grid_app_pane

0x88db,	// (0x000349f8) scroll_pane_cp15_ParamLimits

0x88db,	// (0x000349f8) scroll_pane_cp15

0x88ee,	// (0x00034a0b) cell_app_pane_ParamLimits

0x88ee,	// (0x00034a0b) cell_app_pane

0x8916,	// (0x00034a33) cell_app_pane_g1_ParamLimits

0x8916,	// (0x00034a33) cell_app_pane_g1

0x893a,	// (0x00034a57) cell_app_pane_g2_ParamLimits

0x893a,	// (0x00034a57) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003b7d6) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003b7d6) cell_app_pane_g

0x8946,	// (0x00034a63) cell_app_pane_t1_ParamLimits

0x8946,	// (0x00034a63) cell_app_pane_t1

0x895d,	// (0x00034a7a) grid_highlight_pane_ParamLimits

0x895d,	// (0x00034a7a) grid_highlight_pane

0x826d,	// (0x0003438a) cell_highlight_pane_g1

0x8275,	// (0x00034392) cell_highlight_pane_g2

0x827d,	// (0x0003439a) cell_highlight_pane_g3

0x8285,	// (0x000343a2) cell_highlight_pane_g4

0x828d,	// (0x000343aa) cell_highlight_pane_g5

0x8295,	// (0x000343b2) cell_highlight_pane_g6

0x829d,	// (0x000343ba) cell_highlight_pane_g7

0x82a5,	// (0x000343c2) cell_highlight_pane_g8

0x82ad,	// (0x000343ca) cell_highlight_pane_g9

0x297c,	// (0x0002ea99) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003b784) cell_highlight_pane_g

0x896e,	// (0x00034a8b) bg_scroll_pane

0x520a,	// (0x00031327) scroll_handle_pane

0x89b5,	// (0x00034ad2) scroll_bg_pane_g1

0x89ca,	// (0x00034ae7) scroll_bg_pane_g2

0x89e2,	// (0x00034aff) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003b7db) scroll_bg_pane_g

0x89f7,	// (0x00034b14) scroll_handle_focus_pane_ParamLimits

0x89f7,	// (0x00034b14) scroll_handle_focus_pane

0x89b5,	// (0x00034ad2) scroll_handle_pane_g1

0x8a04,	// (0x00034b21) scroll_handle_pane_g2

0x89e2,	// (0x00034aff) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003b7e2) scroll_handle_pane_g

0x8334,	// (0x00034451) bg_popup_sub_pane_cp21_ParamLimits

0x8334,	// (0x00034451) bg_popup_sub_pane_cp21

0x8a18,	// (0x00034b35) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a18,	// (0x00034b35) popup_fep_japan_predictive_window_t1

0x8a32,	// (0x00034b4f) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a32,	// (0x00034b4f) popup_fep_japan_predictive_window_t2

0x8a65,	// (0x00034b82) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a65,	// (0x00034b82) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003b7e9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003b7e9) popup_fep_japan_predictive_window_t

0x78a8,	// (0x000339c5) bg_popup_sub_pane_cp23

0x8a9c,	// (0x00034bb9) listscroll_japin_cand_pane

0x8aa4,	// (0x00034bc1) popup_fep_japan_candidate_window_t1

0x8ab2,	// (0x00034bcf) candidate_pane_ParamLimits

0x8ab2,	// (0x00034bcf) candidate_pane

0x8ac4,	// (0x00034be1) scroll_pane_cp30

0x8acc,	// (0x00034be9) list_single_popup_jap_candidate_pane_ParamLimits

0x8acc,	// (0x00034be9) list_single_popup_jap_candidate_pane

0x78a8,	// (0x000339c5) list_highlight_pane_cp30

0x8ae1,	// (0x00034bfe) list_single_popup_jap_candidate_pane_t1

0x8af0,	// (0x00034c0d) level_1_signal

0x8b02,	// (0x00034c1f) level_2_signal

0x8b15,	// (0x00034c32) level_3_signal

0x8b28,	// (0x00034c45) level_4_signal

0x8b3b,	// (0x00034c58) level_5_signal

0x8b4e,	// (0x00034c6b) level_6_signal

0x8b61,	// (0x00034c7e) level_7_signal

0x8af0,	// (0x00034c0d) level_1_battery

0x8b02,	// (0x00034c1f) level_2_battery

0x8b15,	// (0x00034c32) level_3_battery

0x8b28,	// (0x00034c45) level_4_battery

0x8b3b,	// (0x00034c58) level_5_battery

0x8b4e,	// (0x00034c6b) level_6_battery

0x8b61,	// (0x00034c7e) level_7_battery

0x8b8c,	// (0x00034ca9) list_menu_pane_ParamLimits

0x8b8c,	// (0x00034ca9) list_menu_pane

0x8ba2,	// (0x00034cbf) scroll_pane_cp25_ParamLimits

0x8ba2,	// (0x00034cbf) scroll_pane_cp25

0x8bbb,	// (0x00034cd8) list_double2_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double2_graphic_pane_cp2

0x8bbb,	// (0x00034cd8) list_double2_large_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double2_large_graphic_pane_cp2

0x8bbb,	// (0x00034cd8) list_double2_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double2_pane_cp2

0x8bbb,	// (0x00034cd8) list_double_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double_graphic_pane_cp2

0x8bbb,	// (0x00034cd8) list_double_large_graphic_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double_large_graphic_pane_cp2

0x8bbb,	// (0x00034cd8) list_double_number_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double_number_pane_cp2

0x8bbb,	// (0x00034cd8) list_double_pane_cp2_ParamLimits

0x8bbb,	// (0x00034cd8) list_double_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_2graphic_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_2graphic_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_graphic_heading_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_graphic_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_graphic_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_heading_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_heading_pane_cp2

0x8bf8,	// (0x00034d15) list_single_large_graphic_pane_cp2_ParamLimits

0x8bf8,	// (0x00034d15) list_single_large_graphic_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_number_heading_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_number_heading_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_number_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_number_pane_cp2

0x8bdf,	// (0x00034cfc) list_single_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_pane_cp2

0x8c74,	// (0x00034d91) bg_popup_sub_pane_cp22

0x52bc,	// (0x000313d9) popup_side_volume_key_window_g1

0x52e6,	// (0x00031403) popup_side_volume_key_window_t1

0x5302,	// (0x0003141f) volume_small_pane_cp1

0x7c03,	// (0x00033d20) bg_popup_sub_pane_cp24_ParamLimits

0x7c03,	// (0x00033d20) bg_popup_sub_pane_cp24

0x8c8a,	// (0x00034da7) fep_china_uni_candidate_pane_ParamLimits

0x8c8a,	// (0x00034da7) fep_china_uni_candidate_pane

0x8c9e,	// (0x00034dbb) fep_china_uni_entry_pane

0x8cae,	// (0x00034dcb) popup_fep_china_uni_window_g1

0x8cca,	// (0x00034de7) fep_china_uni_entry_pane_g1

0x8cd2,	// (0x00034def) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003b81a) fep_china_uni_entry_pane_g

0x8cda,	// (0x00034df7) fep_entry_item_pane

0x8ce4,	// (0x00034e01) fep_candidate_item_pane

0x8cec,	// (0x00034e09) fep_china_uni_candidate_pane_g1

0x8cf4,	// (0x00034e11) fep_china_uni_candidate_pane_g2

0x8cfc,	// (0x00034e19) fep_china_uni_candidate_pane_g3

0x8d04,	// (0x00034e21) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003b81f) fep_china_uni_candidate_pane_g

0x297c,	// (0x0002ea99) fep_entry_item_pane_g1

0x8d0c,	// (0x00034e29) fep_entry_item_pane_t1_ParamLimits

0x8d0c,	// (0x00034e29) fep_entry_item_pane_t1

0x8d22,	// (0x00034e3f) fep_candidate_item_pane_t1_ParamLimits

0x8d22,	// (0x00034e3f) fep_candidate_item_pane_t1

0x8d37,	// (0x00034e54) fep_candidate_item_pane_t2_ParamLimits

0x8d37,	// (0x00034e54) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003b828) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003b828) fep_candidate_item_pane_t

0x7988,	// (0x00033aa5) list_highlight_pane_cp31_ParamLimits

0x7988,	// (0x00033aa5) list_highlight_pane_cp31

0x8d49,	// (0x00034e66) level_1_signal_lsc

0x8d52,	// (0x00034e6f) level_2_signal_lsc

0x8d5b,	// (0x00034e78) level_3_signal_lsc

0x8d64,	// (0x00034e81) level_4_signal_lsc

0x8d6d,	// (0x00034e8a) level_5_signal_lsc

0x8d76,	// (0x00034e93) level_6_signal_lsc

0x8d7f,	// (0x00034e9c) level_7_signal_lsc

0x8d7f,	// (0x00034e9c) level_1_battery_lsc

0x8d88,	// (0x00034ea5) level_2_battery_lsc

0x8d91,	// (0x00034eae) level_3_battery_lsc

0x8d9a,	// (0x00034eb7) level_4_battery_lsc

0x8da3,	// (0x00034ec0) level_5_battery_lsc

0x8dac,	// (0x00034ec9) level_6_battery_lsc

0x8d49,	// (0x00034e66) level_7_battery_lsc

0x8db5,	// (0x00034ed2) scroll_handle_focus_pane_g1

0x8dbe,	// (0x00034edb) scroll_handle_focus_pane_g2

0x8dc7,	// (0x00034ee4) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003b82d) scroll_handle_focus_pane_g

0x530a,	// (0x00031427) list_single_2graphic_pane_g1_ParamLimits

0x530a,	// (0x00031427) list_single_2graphic_pane_g1

0x4a2c,	// (0x00030b49) list_single_2graphic_pane_g2_ParamLimits

0x4a2c,	// (0x00030b49) list_single_2graphic_pane_g2

0x49b2,	// (0x00030acf) list_single_2graphic_pane_g3_ParamLimits

0x49b2,	// (0x00030acf) list_single_2graphic_pane_g3

0x5316,	// (0x00031433) list_single_2graphic_pane_g4_ParamLimits

0x5316,	// (0x00031433) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003b834) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003b834) list_single_2graphic_pane_g

0x5322,	// (0x0003143f) list_single_2graphic_pane_t1_ParamLimits

0x5322,	// (0x0003143f) list_single_2graphic_pane_t1

0x5350,	// (0x0003146d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5350,	// (0x0003146d) list_double2_graphic_large_graphic_pane_g1

0x4aad,	// (0x00030bca) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4aad,	// (0x00030bca) list_double2_graphic_large_graphic_pane_g2

0x4abe,	// (0x00030bdb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4abe,	// (0x00030bdb) list_double2_graphic_large_graphic_pane_g3

0x5360,	// (0x0003147d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5360,	// (0x0003147d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003b83d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003b83d) list_double2_graphic_large_graphic_pane_g

0x536c,	// (0x00031489) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x536c,	// (0x00031489) list_double2_graphic_large_graphic_pane_t1

0x5382,	// (0x0003149f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5382,	// (0x0003149f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003b846) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003b846) list_double2_graphic_large_graphic_pane_t

0x8f12,	// (0x0003502f) popup_fast_swap_window_ParamLimits

0x8f12,	// (0x0003502f) popup_fast_swap_window

0x8f2e,	// (0x0003504b) popup_side_volume_key_window

0x8f4a,	// (0x00035067) stacon_top_pane

0x8f54,	// (0x00035071) status_pane_ParamLimits

0x8f54,	// (0x00035071) status_pane

0x8f62,	// (0x0003507f) status_small_pane

0x78a8,	// (0x000339c5) control_pane

0x78a8,	// (0x000339c5) stacon_bottom_pane

0x81f8,	// (0x00034315) scroll_pane_cp121

0x81ef,	// (0x0003430c) set_content_pane

0x8dd0,	// (0x00034eed) bg_active_tab_pane_g1_cp1

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp1

0x8de2,	// (0x00034eff) bg_active_tab_pane_g3_cp1

0x8dd0,	// (0x00034eed) bg_passive_tab_pane_g1_cp1

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp1

0x8de2,	// (0x00034eff) bg_passive_tab_pane_g3_cp1

0x8deb,	// (0x00034f08) bg_active_tab_pane_g1_cp2

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp2

0x8df4,	// (0x00034f11) bg_active_tab_pane_g3_cp2

0x8deb,	// (0x00034f08) bg_passive_tab_pane_g1_cp2

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp2

0x8df4,	// (0x00034f11) bg_passive_tab_pane_g3_cp2

0x8dfd,	// (0x00034f1a) bg_active_tab_pane_g1_cp3

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp3

0x8e06,	// (0x00034f23) bg_active_tab_pane_g3_cp3

0x8dfd,	// (0x00034f1a) bg_passive_tab_pane_g1_cp3

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp3

0x8e06,	// (0x00034f23) bg_passive_tab_pane_g3_cp3

0x8e0f,	// (0x00034f2c) bg_active_tab_pane_g1_cp4

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp4

0x8e1a,	// (0x00034f37) bg_active_tab_pane_g3_cp4

0x8e0f,	// (0x00034f2c) bg_passive_tab_pane_g1_cp4

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp4

0x8e1a,	// (0x00034f37) bg_passive_tab_pane_g3_cp4

0x8e63,	// (0x00034f80) bg_active_tab_pane_g1_cp5

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp5

0x8e6c,	// (0x00034f89) bg_active_tab_pane_g3_cp5

0x8e63,	// (0x00034f80) bg_passive_tab_pane_g1_cp5

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp5

0x8e6c,	// (0x00034f89) bg_passive_tab_pane_g3_cp5

0x8e75,	// (0x00034f92) list_set_graphic_pane_ParamLimits

0x8e75,	// (0x00034f92) list_set_graphic_pane

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp4

0x8e95,	// (0x00034fb2) list_set_graphic_pane_g1_ParamLimits

0x8e95,	// (0x00034fb2) list_set_graphic_pane_g1

0x8ea1,	// (0x00034fbe) list_set_graphic_pane_g2_ParamLimits

0x8ea1,	// (0x00034fbe) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003b84b) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003b84b) list_set_graphic_pane_g

0x0009,

0xfab1,	// (0x0003bbce) volume_small_pane_cp_g

0x8ec5,	// (0x00034fe2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ec5,	// (0x00034fe2) list_double2_large_graphic_pane_g1_cp2

0x8ed1,	// (0x00034fee) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ed1,	// (0x00034fee) list_double2_large_graphic_pane_g2_cp2

0x8ee2,	// (0x00034fff) list_double2_large_graphic_pane_g3_cp2

0x8eea,	// (0x00035007) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8eea,	// (0x00035007) list_double2_large_graphic_pane_t1_cp2

0x8f00,	// (0x0003501d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f00,	// (0x0003501d) list_double2_large_graphic_pane_t2_cp2

0xaae0,	// (0x00036bfd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae0,	// (0x00036bfd) list_double_large_graphic_pane_g1_cp2

0xaaf1,	// (0x00036c0e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaf1,	// (0x00036c0e) list_double_large_graphic_pane_g2_cp2

0x907b,	// (0x00035198) list_double_large_graphic_pane_g3_cp2

0xab02,	// (0x00036c1f) list_double_large_graphic_pane_g4_cp

0xab0a,	// (0x00036c27) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab0a,	// (0x00036c27) list_double_large_graphic_pane_t1_cp2

0xab21,	// (0x00036c3e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab21,	// (0x00036c3e) list_double_large_graphic_pane_t2_cp2

0x8f6d,	// (0x0003508a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f6d,	// (0x0003508a) list_double2_graphic_pane_g1_cp2

0x8f7b,	// (0x00035098) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f7b,	// (0x00035098) list_double2_graphic_pane_g2_cp2

0x8f8c,	// (0x000350a9) list_double2_graphic_pane_g3_cp2

0x8f96,	// (0x000350b3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f96,	// (0x000350b3) list_double2_graphic_pane_t1_cp2

0x8fac,	// (0x000350c9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fac,	// (0x000350c9) list_double2_graphic_pane_t2_cp2

0x8fbe,	// (0x000350db) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fbe,	// (0x000350db) list_single_number_heading_pane_g1_cp2

0x8fca,	// (0x000350e7) list_single_number_heading_pane_g2_cp2

0x8fd2,	// (0x000350ef) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fd2,	// (0x000350ef) list_single_number_heading_pane_t1_cp2

0x8fe8,	// (0x00035105) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fe8,	// (0x00035105) list_single_number_heading_pane_t2_cp2

0x8ffa,	// (0x00035117) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8ffa,	// (0x00035117) list_single_number_heading_pane_t3_cp2

0x8fbe,	// (0x000350db) list_single_heading_pane_g1_cp2_ParamLimits

0x8fbe,	// (0x000350db) list_single_heading_pane_g1_cp2

0x8fca,	// (0x000350e7) list_single_heading_pane_g2_cp2

0x8fd2,	// (0x000350ef) list_single_heading_pane_t1_cp2_ParamLimits

0x8fd2,	// (0x000350ef) list_single_heading_pane_t1_cp2

0xa8e8,	// (0x00036a05) list_single_heading_pane_t2_cp2_ParamLimits

0xa8e8,	// (0x00036a05) list_single_heading_pane_t2_cp2

0xa830,	// (0x0003694d) list_double_graphic_pane_g1_cp2_ParamLimits

0xa830,	// (0x0003694d) list_double_graphic_pane_g1_cp2

0xa83c,	// (0x00036959) list_double_graphic_pane_g2_cp2_ParamLimits

0xa83c,	// (0x00036959) list_double_graphic_pane_g2_cp2

0xa84b,	// (0x00036968) list_double_graphic_pane_g3_cp2

0xa853,	// (0x00036970) list_double_graphic_pane_t1_cp2_ParamLimits

0xa853,	// (0x00036970) list_double_graphic_pane_t1_cp2

0xa869,	// (0x00036986) list_double_graphic_pane_t2_cp2_ParamLimits

0xa869,	// (0x00036986) list_double_graphic_pane_t2_cp2

0x906f,	// (0x0003518c) list_double_number_pane_g1_cp2_ParamLimits

0x906f,	// (0x0003518c) list_double_number_pane_g1_cp2

0x907b,	// (0x00035198) list_double_number_pane_g2_cp2

0xa7f4,	// (0x00036911) list_double_number_pane_t1_cp2_ParamLimits

0xa7f4,	// (0x00036911) list_double_number_pane_t1_cp2

0xa808,	// (0x00036925) list_double_number_pane_t2_cp2_ParamLimits

0xa808,	// (0x00036925) list_double_number_pane_t2_cp2

0xa81e,	// (0x0003693b) list_double_number_pane_t3_cp2_ParamLimits

0xa81e,	// (0x0003693b) list_double_number_pane_t3_cp2

0xa6dd,	// (0x000367fa) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6dd,	// (0x000367fa) list_single_graphic_pane_g1_cp2

0x90d3,	// (0x000351f0) list_single_graphic_pane_g2_cp2_ParamLimits

0x90d3,	// (0x000351f0) list_single_graphic_pane_g2_cp2

0x90df,	// (0x000351fc) list_single_graphic_pane_g3_cp2

0xa6b3,	// (0x000367d0) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6b3,	// (0x000367d0) list_single_graphic_pane_t1_cp2

0x90d3,	// (0x000351f0) list_single_number_pane_g1_cp2_ParamLimits

0x90d3,	// (0x000351f0) list_single_number_pane_g1_cp2

0x90df,	// (0x000351fc) list_single_number_pane_g2_cp2

0xa6b3,	// (0x000367d0) list_single_number_pane_t1_cp2_ParamLimits

0xa6b3,	// (0x000367d0) list_single_number_pane_t1_cp2

0xa6c9,	// (0x000367e6) list_single_number_pane_t2_cp2_ParamLimits

0xa6c9,	// (0x000367e6) list_single_number_pane_t2_cp2

0x8ed1,	// (0x00034fee) list_double2_pane_g1_cp2_ParamLimits

0x8ed1,	// (0x00034fee) list_double2_pane_g1_cp2

0x8ee2,	// (0x00034fff) list_double2_pane_g2_cp2

0x9047,	// (0x00035164) list_double2_pane_t1_cp2_ParamLimits

0x9047,	// (0x00035164) list_double2_pane_t1_cp2

0x905d,	// (0x0003517a) list_double2_pane_t2_cp2_ParamLimits

0x905d,	// (0x0003517a) list_double2_pane_t2_cp2

0x906f,	// (0x0003518c) list_double_pane_g1_cp2_ParamLimits

0x906f,	// (0x0003518c) list_double_pane_g1_cp2

0x907b,	// (0x00035198) list_double_pane_g2_cp2

0x9083,	// (0x000351a0) list_double_pane_t1_cp2_ParamLimits

0x9083,	// (0x000351a0) list_double_pane_t1_cp2

0x9099,	// (0x000351b6) list_double_pane_t2_cp2_ParamLimits

0x9099,	// (0x000351b6) list_double_pane_t2_cp2

0x90c3,	// (0x000351e0) list_single_pane_cp2_g3

0x90d3,	// (0x000351f0) list_single_pane_g1_cp2_ParamLimits

0x90d3,	// (0x000351f0) list_single_pane_g1_cp2

0x90df,	// (0x000351fc) list_single_pane_g2_cp2

0x90e7,	// (0x00035204) list_single_pane_t1_cp2_ParamLimits

0x90e7,	// (0x00035204) list_single_pane_t1_cp2

0x90ff,	// (0x0003521c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90ff,	// (0x0003521c) list_single_large_graphic_pane_g1_cp2

0x910b,	// (0x00035228) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x910b,	// (0x00035228) list_single_large_graphic_pane_g2_cp2

0x9117,	// (0x00035234) list_single_large_graphic_pane_g3_cp2

0x911f,	// (0x0003523c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x911f,	// (0x0003523c) list_single_large_graphic_pane_g4_cp1

0x9139,	// (0x00035256) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9139,	// (0x00035256) list_single_large_graphic_pane_t1_cp2

0xa67f,	// (0x0003679c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa67f,	// (0x0003679c) list_single_graphic_heading_pane_g1_cp2

0xa64c,	// (0x00036769) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa64c,	// (0x00036769) list_single_graphic_heading_pane_g4_cp2

0x90df,	// (0x000351fc) list_single_graphic_heading_pane_g5_cp2

0xa68b,	// (0x000367a8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa68b,	// (0x000367a8) list_single_graphic_heading_pane_t1_cp2

0xa6a1,	// (0x000367be) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6a1,	// (0x000367be) list_single_graphic_heading_pane_t2_cp2

0xa640,	// (0x0003675d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa640,	// (0x0003675d) list_single_2graphic_pane_g1_cp2

0xa64c,	// (0x00036769) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa64c,	// (0x00036769) list_single_2graphic_pane_g2_cp2

0x90df,	// (0x000351fc) list_single_2graphic_pane_g3_cp2

0xa65d,	// (0x0003677a) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa65d,	// (0x0003677a) list_single_2graphic_pane_g4_cp2

0xa669,	// (0x00036786) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa669,	// (0x00036786) list_single_2graphic_pane_t1_cp2

0x297c,	// (0x0002ea99) list_highlight_pane_g10_cp1

0xa218,	// (0x00036335) list_highlight_pane_g1_cp1

0xa220,	// (0x0003633d) list_highlight_pane_g2_cp1

0xa228,	// (0x00036345) list_highlight_pane_g3_cp1

0xa230,	// (0x0003634d) list_highlight_pane_g4_cp1

0xa238,	// (0x00036355) list_highlight_pane_g5_cp1

0xa240,	// (0x0003635d) list_highlight_pane_g6_cp1

0xa248,	// (0x00036365) list_highlight_pane_g7_cp1

0xa250,	// (0x0003636d) list_highlight_pane_g8_cp1

0xa258,	// (0x00036375) list_highlight_pane_g9_cp1

0xa138,	// (0x00036255) form_field_slider_pane_t3

0xa146,	// (0x00036263) form_field_slider_pane_t4

0xa154,	// (0x00036271) slider_form_pane_ParamLimits

0xa154,	// (0x00036271) slider_form_pane

0x78a8,	// (0x000339c5) control_abbreviations

0x78a8,	// (0x000339c5) control_conventions

0x78a8,	// (0x000339c5) control_definitions

0x78a8,	// (0x000339c5) format_table_attribute

0xa932,	// (0x00036a4f) bg_popup_preview_window_pane_g9

0x78a8,	// (0x000339c5) format_table_data2

0x78a8,	// (0x000339c5) format_table_data3

0x78a8,	// (0x000339c5) format_table_data_example

0x0008,

0x78a8,	// (0x000339c5) intro_purpose

0xf8ca,	// (0x0003b9e7) bg_popup_preview_window_pane_g

0x78a8,	// (0x000339c5) texts_category

0x78a8,	// (0x000339c5) texts_graphics

0x914f,	// (0x0003526c) text_digital

0x915e,	// (0x0003527b) text_primary

0x916d,	// (0x0003528a) text_primary_small

0x917c,	// (0x00035299) text_secondary

0x918b,	// (0x000352a8) text_title

0xb075,	// (0x00037192) bg_passive_tab_pane_g1_cp3_srt

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp3_srt

0xb07e,	// (0x0003719b) bg_passive_tab_pane_g3_cp3_srt

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp3_srt_ParamLimits

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp3_srt

0xb087,	// (0x000371a4) tabs_4_active_pane_srt_g1

0xb08f,	// (0x000371ac) tabs_4_active_pane_srt_t1_ParamLimits

0xb08f,	// (0x000371ac) tabs_4_active_pane_srt_t1

0xb075,	// (0x00037192) bg_active_tab_pane_g1_cp3_copy1

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp3_copy1

0xb07e,	// (0x0003719b) bg_active_tab_pane_g3_cp3_copy1

0x7988,	// (0x00033aa5) tabs_2_long_active_pane_srt_ParamLimits

0x7988,	// (0x00033aa5) tabs_2_long_active_pane_srt

0x7988,	// (0x00033aa5) tabs_2_long_passive_pane_srt_ParamLimits

0x7988,	// (0x00033aa5) tabs_2_long_passive_pane_srt

0x8409,	// (0x00034526) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8409,	// (0x00034526) bg_passive_tab_pane_cp4_srt

0xad60,	// (0x00036e7d) bg_passive_tab_pane_g1_cp4_srt

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp4_srt

0xad69,	// (0x00036e86) bg_passive_tab_pane_g3_cp4_srt

0x83e8,	// (0x00034505) bg_active_tab_pane_cp4_srt_ParamLimits

0x83e8,	// (0x00034505) bg_active_tab_pane_cp4_srt

0xad72,	// (0x00036e8f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad72,	// (0x00036e8f) tabs_2_long_active_pane_srt_t1

0xad60,	// (0x00036e7d) bg_active_tab_pane_g1_cp4_srt

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp4_srt

0xad69,	// (0x00036e86) bg_active_tab_pane_g3_cp4_srt

0x7c03,	// (0x00033d20) tabs_3_long_active_pane_srt_ParamLimits

0x7c03,	// (0x00033d20) tabs_3_long_active_pane_srt

0x7c03,	// (0x00033d20) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7c03,	// (0x00033d20) tabs_3_long_passive_pane_cp_srt

0x7c03,	// (0x00033d20) tabs_3_long_passive_pane_srt_ParamLimits

0x7c03,	// (0x00033d20) tabs_3_long_passive_pane_srt

0x8409,	// (0x00034526) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8409,	// (0x00034526) bg_passive_tab_pane_cp5_srt

0x8e63,	// (0x00034f80) bg_passive_tab_pane_g1_cp5_srt

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp5_srt

0x8e6c,	// (0x00034f89) bg_passive_tab_pane_g3_cp5_srt

0x83e8,	// (0x00034505) bg_active_tab_pane_cp5_srt_ParamLimits

0x83e8,	// (0x00034505) bg_active_tab_pane_cp5_srt

0xad4e,	// (0x00036e6b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad4e,	// (0x00036e6b) tabs_3_long_active_pane_srt_t1

0x8e63,	// (0x00034f80) bg_active_tab_pane_g1_cp5_srt

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp5_srt

0x8e6c,	// (0x00034f89) bg_active_tab_pane_g3_cp5_srt

0xad40,	// (0x00036e5d) navi_text_pane_srt_t1

0xad38,	// (0x00036e55) navi_icon_pane_srt_g1

0x9360,	// (0x0003547d) midp_editing_number_pane_srt

0x919a,	// (0x000352b7) midp_ticker_pane_srt

0x9368,	// (0x00035485) midp_ticker_pane_srt_g1

0x9370,	// (0x0003548d) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003b86a) midp_ticker_pane_srt_g

0x9378,	// (0x00035495) midp_ticker_pane_srt_t1

0xad29,	// (0x00036e46) midp_editing_number_pane_t1_copy1

0x91a2,	// (0x000352bf) listscroll_midp_pane

0x91a2,	// (0x000352bf) midp_form_pane

0x9212,	// (0x0003532f) midp_info_popup_window_ParamLimits

0x9212,	// (0x0003532f) midp_info_popup_window

0x8334,	// (0x00034451) bg_popup_sub_pane_cp50_ParamLimits

0x8334,	// (0x00034451) bg_popup_sub_pane_cp50

0x9e3c,	// (0x00035f59) listscroll_midp_info_pane_ParamLimits

0x9e3c,	// (0x00035f59) listscroll_midp_info_pane

0x9e1c,	// (0x00035f39) listscroll_form_midp_pane_ParamLimits

0x9e1c,	// (0x00035f39) listscroll_form_midp_pane

0x9e28,	// (0x00035f45) scroll_bar_cp050

0x9dfc,	// (0x00035f19) list_midp_pane

0xbafc,	// (0x00037c19) signal_pane_g2_cp

0x9d36,	// (0x00035e53) listscroll_midp_info_pane_t1_ParamLimits

0x9d36,	// (0x00035e53) listscroll_midp_info_pane_t1

0x9d4e,	// (0x00035e6b) listscroll_midp_info_pane_t2_ParamLimits

0x9d4e,	// (0x00035e6b) listscroll_midp_info_pane_t2

0x9d8c,	// (0x00035ea9) listscroll_midp_info_pane_t3_ParamLimits

0x9d8c,	// (0x00035ea9) listscroll_midp_info_pane_t3

0x9dc6,	// (0x00035ee3) listscroll_midp_info_pane_t4_ParamLimits

0x9dc6,	// (0x00035ee3) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003b922) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003b922) listscroll_midp_info_pane_t

0x8395,	// (0x000344b2) scroll_pane_cp21

0x9cd4,	// (0x00035df1) form_midp_field_choice_group_pane

0x9cdd,	// (0x00035dfa) form_midp_field_text_pane

0x9d1c,	// (0x00035e39) form_midp_field_time_pane

0x9d24,	// (0x00035e41) form_midp_gauge_slider_pane

0x9d2d,	// (0x00035e4a) form_midp_gauge_wait_pane

0x78a8,	// (0x000339c5) form_midp_image_pane

0x5ef4,	// (0x00032011) list_single_midp_pane_ParamLimits

0x5ef4,	// (0x00032011) list_single_midp_pane

0x9c8c,	// (0x00035da9) form_midp_field_text_pane_t1

0x9a5c,	// (0x00035b79) input_focus_pane_cp050

0x9cc3,	// (0x00035de0) list_midp_form_text_pane

0x9c5b,	// (0x00035d78) form_midp_field_choice_group_pane_t1

0x9c69,	// (0x00035d86) input_focus_pane_cp051

0x9c7d,	// (0x00035d9a) list_midp_choice_pane

0x78a8,	// (0x000339c5) status_idle_pane

0x9c3f,	// (0x00035d5c) form_midp_field_time_pane_t1

0x297c,	// (0x0002ea99) wait_anim_pane_g2_copy1

0x9c4d,	// (0x00035d6a) form_midp_field_time_pane_t2

0x0001,

0x92c0,	// (0x000353dd) aid_navinavi_width_2_pane

0xf800,	// (0x0003b91d) form_midp_field_time_pane_t

0x78a8,	// (0x000339c5) input_focus_pane_cp052

0x78a8,	// (0x000339c5) bg_input_focus_pane_cp040

0x9bff,	// (0x00035d1c) form_midp_gauge_slider_pane_t1

0x9c0d,	// (0x00035d2a) form_midp_gauge_slider_pane_t2

0x9c1b,	// (0x00035d38) form_midp_gauge_slider_pane_t3

0x9c29,	// (0x00035d46) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003b914) form_midp_gauge_slider_pane_t

0x9c37,	// (0x00035d54) form_midp_slider_pane

0x7988,	// (0x00033aa5) bg_input_focus_pane_cp041_ParamLimits

0x7988,	// (0x00033aa5) bg_input_focus_pane_cp041

0x9bcc,	// (0x00035ce9) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bcc,	// (0x00035ce9) form_midp_gauge_wait_pane_t1

0x9bde,	// (0x00035cfb) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bde,	// (0x00035cfb) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003b90f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003b90f) form_midp_gauge_wait_pane_t

0x9bf0,	// (0x00035d0d) form_midp_wait_pane_ParamLimits

0x9bf0,	// (0x00035d0d) form_midp_wait_pane

0x9b96,	// (0x00035cb3) form_midp_image_pane_g1

0x9b9f,	// (0x00035cbc) form_midp_image_pane_t1

0x9bae,	// (0x00035ccb) form_midp_image_pane_t2

0x9bbd,	// (0x00035cda) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003b908) form_midp_image_pane_t

0x9b8d,	// (0x00035caa) list_single_midp_pane_g1

0x5ee5,	// (0x00032002) list_single_midp_pane_t1

0x9b65,	// (0x00035c82) list_midp_form_item_pane_ParamLimits

0x9b65,	// (0x00035c82) list_midp_form_item_pane

0x9268,	// (0x00035385) list_midp_form_item_pane_t1

0x9277,	// (0x00035394) midp_ticker_pane_g1

0x9283,	// (0x000353a0) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003b850) midp_ticker_pane_g

0x928f,	// (0x000353ac) midp_ticker_pane_t1

0xaf7a,	// (0x00037097) midp_editing_number_pane_t1

0xaf58,	// (0x00037075) midp_editing_number_pane

0xaf67,	// (0x00037084) midp_ticker_pane

0xad19,	// (0x00036e36) ai_message_heading_pane

0x78a8,	// (0x000339c5) bg_popup_window_pane_cp14

0xad21,	// (0x00036e3e) listscroll_ai_message_pane

0xaca3,	// (0x00036dc0) ai_message_heading_pane_g1_ParamLimits

0xaca3,	// (0x00036dc0) ai_message_heading_pane_g1

0xacaf,	// (0x00036dcc) ai_message_heading_pane_g2_ParamLimits

0xacaf,	// (0x00036dcc) ai_message_heading_pane_g2

0xacbb,	// (0x00036dd8) ai_message_heading_pane_g3_ParamLimits

0xacbb,	// (0x00036dd8) ai_message_heading_pane_g3

0xacc7,	// (0x00036de4) ai_message_heading_pane_g4_ParamLimits

0xacc7,	// (0x00036de4) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003ba49) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003ba49) ai_message_heading_pane_g

0xacd3,	// (0x00036df0) ai_message_heading_pane_t1_ParamLimits

0xacd3,	// (0x00036df0) ai_message_heading_pane_t1

0xaced,	// (0x00036e0a) ai_message_heading_pane_t2_ParamLimits

0xaced,	// (0x00036e0a) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003ba52) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003ba52) ai_message_heading_pane_t

0xacff,	// (0x00036e1c) bg_popup_heading_pane_cp1_ParamLimits

0xacff,	// (0x00036e1c) bg_popup_heading_pane_cp1

0xac91,	// (0x00036dae) list_ai_message_pane_ParamLimits

0xac91,	// (0x00036dae) list_ai_message_pane

0x8395,	// (0x000344b2) scroll_pane_cp10

0xac2d,	// (0x00036d4a) list_ai_message_pane_g1

0xac35,	// (0x00036d52) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003ba26) list_ai_message_pane_g

0xac3d,	// (0x00036d5a) list_ai_message_pane_t1_ParamLimits

0xac3d,	// (0x00036d5a) list_ai_message_pane_t1

0xac52,	// (0x00036d6f) list_ai_message_pane_t2_ParamLimits

0xac52,	// (0x00036d6f) list_ai_message_pane_t2

0xac67,	// (0x00036d84) list_ai_message_pane_t3_ParamLimits

0xac67,	// (0x00036d84) list_ai_message_pane_t3

0xac7c,	// (0x00036d99) list_ai_message_pane_t4_ParamLimits

0xac7c,	// (0x00036d99) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003ba2b) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003ba2b) list_ai_message_pane_t

0xac18,	// (0x00036d35) cell_ai_soft_ind_pane_ParamLimits

0xac18,	// (0x00036d35) cell_ai_soft_ind_pane

0x92a1,	// (0x000353be) cell_ai_soft_ind_pane_g1_ParamLimits

0x92a1,	// (0x000353be) cell_ai_soft_ind_pane_g1

0x78a8,	// (0x000339c5) grid_highlight_cp1

0x92ae,	// (0x000353cb) text_secondary_cp56_ParamLimits

0x92ae,	// (0x000353cb) text_secondary_cp56

0xabed,	// (0x00036d0a) example_general_pane_ParamLimits

0xabed,	// (0x00036d0a) example_general_pane

0xabf9,	// (0x00036d16) example_parent_pane_g1_ParamLimits

0xabf9,	// (0x00036d16) example_parent_pane_g1

0xac05,	// (0x00036d22) example_parent_pane_t1_ParamLimits

0xac05,	// (0x00036d22) example_parent_pane_t1

0x5a89,	// (0x00031ba6) popup_preview_text_window_ParamLimits

0x5a89,	// (0x00031ba6) popup_preview_text_window

0x90cb,	// (0x000351e8) list_single_pane_cp2_g4

0x7cdf,	// (0x00033dfc) bg_popup_preview_window_pane_ParamLimits

0x7cdf,	// (0x00033dfc) bg_popup_preview_window_pane

0xa93a,	// (0x00036a57) popup_preview_text_window_t1_ParamLimits

0xa93a,	// (0x00036a57) popup_preview_text_window_t1

0xa958,	// (0x00036a75) popup_preview_text_window_t2_ParamLimits

0xa958,	// (0x00036a75) popup_preview_text_window_t2

0xa9a1,	// (0x00036abe) popup_preview_text_window_t3_ParamLimits

0xa9a1,	// (0x00036abe) popup_preview_text_window_t3

0xa9e6,	// (0x00036b03) popup_preview_text_window_t4_ParamLimits

0xa9e6,	// (0x00036b03) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003b9fa) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003b9fa) popup_preview_text_window_t

0xaa64,	// (0x00036b81) scroll_pane_cp11

0x99e8,	// (0x00035b05) bg_popup_preview_window_pane_g1

0xa8fa,	// (0x00036a17) bg_popup_preview_window_pane_g2

0xa902,	// (0x00036a1f) bg_popup_preview_window_pane_g3

0xa90a,	// (0x00036a27) bg_popup_preview_window_pane_g4

0xa912,	// (0x00036a2f) bg_popup_preview_window_pane_g5

0xa91a,	// (0x00036a37) bg_popup_preview_window_pane_g6

0xa922,	// (0x00036a3f) bg_popup_preview_window_pane_g7

0xa92a,	// (0x00036a47) bg_popup_preview_window_pane_g8

0x4534,	// (0x00030651) aid_popup_width_pane

0x5a67,	// (0x00031b84) popup_midp_note_alarm_window_ParamLimits

0x5a67,	// (0x00031b84) popup_midp_note_alarm_window

0x8209,	// (0x00034326) data_form_pane_ParamLimits

0x4eb6,	// (0x00030fd3) form_field_data_pane_g1

0x4ec0,	// (0x00030fdd) form_field_data_pane_t1_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_ParamLimits

0x4ed8,	// (0x00030ff5) data_form_wide_pane_ParamLimits

0x4ee9,	// (0x00031006) form_field_data_wide_pane_g1

0x4ef5,	// (0x00031012) form_field_data_wide_pane_t1_ParamLimits

0x7f86,	// (0x000340a3) input_focus_pane_cp6_ParamLimits

0x8342,	// (0x0003445f) input_popup_find_pane_g1_ParamLimits

0x8342,	// (0x0003445f) input_popup_find_pane_g1

0x516b,	// (0x00031288) aid_navi_side_left_pane

0x5180,	// (0x0003129d) aid_navi_side_right_pane

0xa313,	// (0x00036430) bg_popup_window_pane_cp30_ParamLimits

0xa313,	// (0x00036430) bg_popup_window_pane_cp30

0xa38d,	// (0x000364aa) popup_midp_note_alarm_window_g1_ParamLimits

0xa38d,	// (0x000364aa) popup_midp_note_alarm_window_g1

0xa3bd,	// (0x000364da) popup_midp_note_alarm_window_t1_ParamLimits

0xa3bd,	// (0x000364da) popup_midp_note_alarm_window_t1

0xa45e,	// (0x0003657b) popup_midp_note_alarm_window_t2_ParamLimits

0xa45e,	// (0x0003657b) popup_midp_note_alarm_window_t2

0xa50c,	// (0x00036629) popup_midp_note_alarm_window_t3_ParamLimits

0xa50c,	// (0x00036629) popup_midp_note_alarm_window_t3

0xa53e,	// (0x0003665b) popup_midp_note_alarm_window_t4_ParamLimits

0xa53e,	// (0x0003665b) popup_midp_note_alarm_window_t4

0xa564,	// (0x00036681) popup_midp_note_alarm_window_t5_ParamLimits

0xa564,	// (0x00036681) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003b997) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003b997) popup_midp_note_alarm_window_t

0xa610,	// (0x0003672d) wait_bar_pane_cp1_ParamLimits

0xa610,	// (0x0003672d) wait_bar_pane_cp1

0x78a8,	// (0x000339c5) wait_anim_pane_copy1

0x78a8,	// (0x000339c5) wait_border_pane_copy1

0x9ff9,	// (0x00036116) wait_border_pane_g1_copy1

0x4f0f,	// (0x0003102c) form_field_popup_pane_g1

0x4f17,	// (0x00031034) form_field_popup_pane_t1_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_cp7_ParamLimits

0x8243,	// (0x00034360) list_form_pane_ParamLimits

0x4f2f,	// (0x0003104c) form_field_popup_wide_pane_g1

0x4f37,	// (0x00031054) form_field_popup_wide_pane_t1_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_cp8_ParamLimits

0x824f,	// (0x0003436c) list_form_wide_pane_ParamLimits

0xb117,	// (0x00037234) aid_size_cell_graphic_pane

0x4fc1,	// (0x000310de) data_form_pane_t1_ParamLimits

0x617a,	// (0x00032297) data_form_wide_pane_t1_ParamLimits

0x95af,	// (0x000356cc) bg_status_flat_pane

0x78e8,	// (0x00033a05) title_pane_t1_ParamLimits

0x7950,	// (0x00033a6d) title_pane_t2_ParamLimits

0x7976,	// (0x00033a93) title_pane_t3_ParamLimits

0xf532,	// (0x0003b64f) title_pane_t_ParamLimits

0x8af0,	// (0x00034c0d) level_1_signal_ParamLimits

0x8b02,	// (0x00034c1f) level_2_signal_ParamLimits

0x8b15,	// (0x00034c32) level_3_signal_ParamLimits

0x8b28,	// (0x00034c45) level_4_signal_ParamLimits

0x8b3b,	// (0x00034c58) level_5_signal_ParamLimits

0x8b4e,	// (0x00034c6b) level_6_signal_ParamLimits

0x8b61,	// (0x00034c7e) level_7_signal_ParamLimits

0x8af0,	// (0x00034c0d) level_1_battery_ParamLimits

0x8b02,	// (0x00034c1f) level_2_battery_ParamLimits

0x8b15,	// (0x00034c32) level_3_battery_ParamLimits

0x8b28,	// (0x00034c45) level_4_battery_ParamLimits

0x8b3b,	// (0x00034c58) level_5_battery_ParamLimits

0x8b4e,	// (0x00034c6b) level_6_battery_ParamLimits

0x8b61,	// (0x00034c7e) level_7_battery_ParamLimits

0xa218,	// (0x00036335) bg_status_flat_pane_g1

0xa220,	// (0x0003633d) bg_status_flat_pane_g2

0xa228,	// (0x00036345) bg_status_flat_pane_g3

0xa230,	// (0x0003634d) bg_status_flat_pane_g4

0xa238,	// (0x00036355) bg_status_flat_pane_g5

0xa240,	// (0x0003635d) bg_status_flat_pane_g6

0xa248,	// (0x00036365) bg_status_flat_pane_g7

0x799e,	// (0x00033abb) tabs_3_active_pane_t1_ParamLimits

0x799e,	// (0x00033abb) tabs_3_passive_pane_t1_ParamLimits

0x79b8,	// (0x00033ad5) tabs_4_active_pane_t1_ParamLimits

0x79b8,	// (0x00033ad5) tabs_4_1_passive_pane_t1_ParamLimits

0x83d6,	// (0x000344f3) tabs_2_active_pane_t1_ParamLimits

0x83d6,	// (0x000344f3) tabs_2_passive_pane_t1_ParamLimits

0x83e8,	// (0x00034505) bg_active_tab_pane_cp4_ParamLimits

0x83f6,	// (0x00034513) tabs_2_long_active_pane_t1_ParamLimits

0x8409,	// (0x00034526) bg_passive_tab_pane_cp4_ParamLimits

0x5dbc,	// (0x00031ed9) list_single_midp_graphic_pane_t1_ParamLimits

0x83e8,	// (0x00034505) bg_active_tab_pane_cp5_ParamLimits

0x8415,	// (0x00034532) tabs_3_long_active_pane_t1_ParamLimits

0x8409,	// (0x00034526) bg_passive_tab_pane_cp5_ParamLimits

0x5dbc,	// (0x00031ed9) list_single_midp_graphic_pane_t1

0x95af,	// (0x000356cc) bg_status_flat_pane_ParamLimits

0x9678,	// (0x00035795) indicator_pane_cp2_ParamLimits

0x9678,	// (0x00035795) indicator_pane_cp2

0x97a3,	// (0x000358c0) navi_pane_srt_ParamLimits

0x97a3,	// (0x000358c0) navi_pane_srt

0x97c7,	// (0x000358e4) popup_clock_digital_analogue_window_cp1

0x7a65,	// (0x00033b82) indicator_pane_t1

0x919a,	// (0x000352b7) copy_highlight_pane

0x919a,	// (0x000352b7) cursor_graphics_pane

0x919a,	// (0x000352b7) graphic_within_text_pane

0x919a,	// (0x000352b7) link_highlight_pane

0xaa27,	// (0x00036b44) popup_preview_text_window_t5_ParamLimits

0xaa27,	// (0x00036b44) popup_preview_text_window_t5

0x92c8,	// (0x000353e5) cursor_digital_pane

0x92c8,	// (0x000353e5) cursor_primary_pane

0x92d9,	// (0x000353f6) cursor_primary_small_pane

0x92e1,	// (0x000353fe) cursor_secondary_pane

0x92e9,	// (0x00035406) cursor_title_pane

0x92c8,	// (0x000353e5) link_highlight_digital_pane

0x92d0,	// (0x000353ed) link_highlight_primary_pane

0x92d9,	// (0x000353f6) link_highlight_primary_small_pane

0x92e1,	// (0x000353fe) link_highlight_secondary_pane

0x92e9,	// (0x00035406) link_highlight_title_pane

0x92c8,	// (0x000353e5) copy_highlight_digital_pane

0x92c8,	// (0x000353e5) copy_highlight_primary_pane

0x92d9,	// (0x000353f6) copy_highlight_primary_small_pane

0x92e1,	// (0x000353fe) copy_highlight_secondary_pane

0x92e9,	// (0x00035406) copy_highlight_title_pane

0x92e1,	// (0x000353fe) graphic_text_digital_pane

0xa2b6,	// (0x000363d3) graphic_text_primary_pane

0xa2bf,	// (0x000363dc) graphic_text_primary_small_pane

0x92d9,	// (0x000353f6) graphic_text_secondary_pane

0x92c8,	// (0x000353e5) graphic_text_title_pane

0x92f1,	// (0x0003540e) cursor_primary_pane_g1

0xa2a8,	// (0x000363c5) cursor_text_primary_t1

0xa290,	// (0x000363ad) cursor_primary_small_pane_g1

0xa29a,	// (0x000363b7) cursor_text_primary_small_t1

0xa278,	// (0x00036395) cursor_primary_small_pane_g1_copy1

0xa282,	// (0x0003639f) cursor_text_primary_small_t1_copy1

0xa260,	// (0x0003637d) cursor_text_title_t1

0xa26e,	// (0x0003638b) cursor_title_pane_g1

0x92f1,	// (0x0003540e) cursor_digital_pane_g1

0x92fb,	// (0x00035418) cursor_text_digital_t1

0x9320,	// (0x0003543d) link_highlight_primary_pane_g1

0xa209,	// (0x00036326) link_highlight_primary_pane_t1

0x9309,	// (0x00035426) link_highlight_primary_small_pane_g1

0x9311,	// (0x0003542e) link_highlight_primary_small_pane_t1

0x9320,	// (0x0003543d) link_highlight_secondary_pane_g1

0x9328,	// (0x00035445) link_highlight_secondary_pane_t1

0xa17d,	// (0x0003629a) link_highlight_title_pane_g1

0xa185,	// (0x000362a2) link_highlight_title_pane_t1

0xa166,	// (0x00036283) link_highlight_digital_pane_g1

0xa16e,	// (0x0003628b) link_highlight_digital_pane_t1

0xa03e,	// (0x0003615b) copy_highlight_primary_pane_g1

0xa046,	// (0x00036163) copy_highlight_primary_pane_t1

0xa018,	// (0x00036135) copy_highlight_primary_small_pane_g1

0xa02f,	// (0x0003614c) copy_highlight_primary_small_pane_t1

0x9337,	// (0x00035454) copy_highlight_secondary_pane_g1

0x933f,	// (0x0003545c) copy_highlight_secondary_pane_t1

0xa018,	// (0x00036135) copy_highlight_title_pane_g1

0xa020,	// (0x0003613d) copy_highlight_title_pane_t1

0xa03e,	// (0x0003615b) copy_highlight_digital_pane_g1

0xb2e5,	// (0x00037402) copy_highlight_digital_pane_t1

0xb239,	// (0x00037356) graphic_text_primary_pane_g1

0xb2c9,	// (0x000373e6) graphic_text_primary_pane_t1

0xb2d7,	// (0x000373f4) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003bac6) graphic_text_primary_pane_t

0xb2a5,	// (0x000373c2) graphic_text_primary_small_pane_g1

0xb2ad,	// (0x000373ca) graphic_text_primary_small_pane_t1

0xb2bb,	// (0x000373d8) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003bac1) graphic_text_primary_small_pane_t

0xb281,	// (0x0003739e) graphic_text_secondary_pane_g1

0xb289,	// (0x000373a6) graphic_text_secondary_pane_t1

0xb297,	// (0x000373b4) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003babc) graphic_text_secondary_pane_t

0xb25d,	// (0x0003737a) graphic_text_title_pane_g1

0xb265,	// (0x00037382) graphic_text_title_pane_t1

0xb273,	// (0x00037390) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003bab7) graphic_text_title_pane_t

0xb239,	// (0x00037356) graphic_text_digital_pane_g1

0xb241,	// (0x0003735e) graphic_text_digital_pane_t1

0xb24f,	// (0x0003736c) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003bab2) graphic_text_digital_pane_t

0x7988,	// (0x00033aa5) navi_icon_pane_srt_ParamLimits

0x7988,	// (0x00033aa5) navi_icon_pane_srt

0x78a8,	// (0x000339c5) navi_midp_pane_srt

0x78a8,	// (0x000339c5) navi_navi_pane_srt

0x7988,	// (0x00033aa5) navi_text_pane_srt_ParamLimits

0x7988,	// (0x00033aa5) navi_text_pane_srt

0xb204,	// (0x00037321) navi_navi_icon_text_pane_srt

0xb20c,	// (0x00037329) navi_navi_pane_srt_g1_ParamLimits

0xb20c,	// (0x00037329) navi_navi_pane_srt_g1

0xb21e,	// (0x0003733b) navi_navi_pane_srt_g2_ParamLimits

0xb21e,	// (0x0003733b) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003baad) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003baad) navi_navi_pane_srt_g

0xb230,	// (0x0003734d) navi_navi_tabs_pane_srt

0xb204,	// (0x00037321) navi_navi_text_pane_srt

0xb204,	// (0x00037321) navi_navi_volume_pane_srt

0xb1f5,	// (0x00037312) navi_navi_text_pane_srt_t1

0x6303,	// (0x00032420) navi_navi_volume_pane_srt_g1

0x630b,	// (0x00032428) volume_small_pane_srt_ParamLimits

0x630b,	// (0x00032428) volume_small_pane_srt

0x54d5,	// (0x000315f2) volume_small_pane_srt_g1_ParamLimits

0x54d5,	// (0x000315f2) volume_small_pane_srt_g1

0x54e5,	// (0x00031602) volume_small_pane_srt_g2_ParamLimits

0x54e5,	// (0x00031602) volume_small_pane_srt_g2

0x54f6,	// (0x00031613) volume_small_pane_srt_g3_ParamLimits

0x54f6,	// (0x00031613) volume_small_pane_srt_g3

0x5507,	// (0x00031624) volume_small_pane_srt_g4_ParamLimits

0x5507,	// (0x00031624) volume_small_pane_srt_g4

0x5518,	// (0x00031635) volume_small_pane_srt_g5_ParamLimits

0x5518,	// (0x00031635) volume_small_pane_srt_g5

0x5529,	// (0x00031646) volume_small_pane_srt_g6_ParamLimits

0x5529,	// (0x00031646) volume_small_pane_srt_g6

0x553a,	// (0x00031657) volume_small_pane_srt_g7_ParamLimits

0x553a,	// (0x00031657) volume_small_pane_srt_g7

0x554b,	// (0x00031668) volume_small_pane_srt_g8_ParamLimits

0x554b,	// (0x00031668) volume_small_pane_srt_g8

0x555c,	// (0x00031679) volume_small_pane_srt_g9_ParamLimits

0x555c,	// (0x00031679) volume_small_pane_srt_g9

0x556d,	// (0x0003168a) volume_small_pane_srt_g10_ParamLimits

0x556d,	// (0x0003168a) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003b855) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003b855) volume_small_pane_srt_g

0x7d88,	// (0x00033ea5) query_popup_data_pane_cp2

0xb1db,	// (0x000372f8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1db,	// (0x000372f8) navi_navi_icon_text_pane_srt_t1

0xa2b6,	// (0x000363d3) navi_tabs_2_long_pane_srt

0xa2b6,	// (0x000363d3) navi_tabs_2_pane_srt

0xa2b6,	// (0x000363d3) navi_tabs_3_long_pane_srt

0xa2b6,	// (0x000363d3) navi_tabs_3_pane_srt

0xa2b6,	// (0x000363d3) navi_tabs_4_pane_srt

0x62e3,	// (0x00032400) tabs_2_active_pane_srt_ParamLimits

0x62e3,	// (0x00032400) tabs_2_active_pane_srt

0x62f3,	// (0x00032410) tabs_2_passive_pane_srt_ParamLimits

0x62f3,	// (0x00032410) tabs_2_passive_pane_srt

0x94be,	// (0x000355db) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94be,	// (0x000355db) bg_passive_tab_pane_cp1_srt

0xb1a7,	// (0x000372c4) bg_passive_tab_pane_g1_cp1_srt

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp1_srt

0xb1b0,	// (0x000372cd) bg_passive_tab_pane_g3_cp1_srt

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp1_srt_ParamLimits

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp1_srt

0xb1b9,	// (0x000372d6) tabs_2_active_pane_srt_g1

0xb1c1,	// (0x000372de) tabs_2_active_pane_srt_t1_ParamLimits

0xb1c1,	// (0x000372de) tabs_2_active_pane_srt_t1

0xb1a7,	// (0x000372c4) bg_active_tab_pane_g1_cp1_srt

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp1_srt

0xb1b0,	// (0x000372cd) bg_active_tab_pane_g3_cp1_srt

0x62b0,	// (0x000323cd) tabs_3_active_pane_srt_ParamLimits

0x62b0,	// (0x000323cd) tabs_3_active_pane_srt

0x62c1,	// (0x000323de) tabs_3_passive_pane_cp_srt_ParamLimits

0x62c1,	// (0x000323de) tabs_3_passive_pane_cp_srt

0x62d2,	// (0x000323ef) tabs_3_passive_pane_srt_ParamLimits

0x62d2,	// (0x000323ef) tabs_3_passive_pane_srt

0x94be,	// (0x000355db) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94be,	// (0x000355db) bg_passive_tab_pane_cp2_srt

0x934e,	// (0x0003546b) bg_passive_tab_pane_g1_cp2_srt

0x8dd9,	// (0x00034ef6) bg_passive_tab_pane_g2_cp2_srt

0x9357,	// (0x00035474) bg_passive_tab_pane_g3_cp2_srt

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp2_srt_ParamLimits

0x7988,	// (0x00033aa5) bg_active_tab_pane_cp2_srt

0xb18d,	// (0x000372aa) tabs_3_active_pane_srt_g1

0xb195,	// (0x000372b2) tabs_3_active_pane_srt_t1_ParamLimits

0xb195,	// (0x000372b2) tabs_3_active_pane_srt_t1

0x934e,	// (0x0003546b) bg_active_tab_pane_g1_cp2_srt

0x8dd9,	// (0x00034ef6) bg_active_tab_pane_g2_cp2_srt

0x9357,	// (0x00035474) bg_active_tab_pane_g3_cp2_srt

0x6268,	// (0x00032385) tabs_4_active_pane_srt_ParamLimits

0x6268,	// (0x00032385) tabs_4_active_pane_srt

0x627a,	// (0x00032397) tabs_4_passive_pane_cp2_srt_ParamLimits

0x627a,	// (0x00032397) tabs_4_passive_pane_cp2_srt

0x56dc,	// (0x000317f9) aid_size_cell_toolbar

0x8409,	// (0x00034526) main_idle_act_pane_ParamLimits

0x589d,	// (0x000319ba) popup_large_graphic_colour_window_ParamLimits

0x5c04,	// (0x00031d21) popup_toolbar_window_ParamLimits

0x5c04,	// (0x00031d21) popup_toolbar_window

0x61da,	// (0x000322f7) list_single_graphic_2heading_pane_ParamLimits

0x61da,	// (0x000322f7) list_single_graphic_2heading_pane

0x889f,	// (0x000349bc) aid_size_cell_apps_grid_lsc_pane

0x88b1,	// (0x000349ce) aid_size_cell_apps_grid_prt_pane

0x94be,	// (0x000355db) bg_wml_button_pane_cp1_ParamLimits

0x94be,	// (0x000355db) bg_wml_button_pane_cp1

0x9c8c,	// (0x00035da9) form_midp_field_text_pane_t1_ParamLimits

0x9a5c,	// (0x00035b79) input_focus_pane_cp050_ParamLimits

0x9cc3,	// (0x00035de0) list_midp_form_text_pane_ParamLimits

0x9c69,	// (0x00035d86) input_focus_pane_cp051_ParamLimits

0x9c7d,	// (0x00035d9a) list_midp_choice_pane_ParamLimits

0x9b15,	// (0x00035c32) list_single_2graphic_pane_cp3_ParamLimits

0x9b15,	// (0x00035c32) list_single_2graphic_pane_cp3

0x9b36,	// (0x00035c53) list_single_midp_graphic_pane_ParamLimits

0x9b36,	// (0x00035c53) list_single_midp_graphic_pane

0x44be,	// (0x000305db) list_single_graphic_2heading_pane_g1_ParamLimits

0x44be,	// (0x000305db) list_single_graphic_2heading_pane_g1

0x44ca,	// (0x000305e7) list_single_graphic_2heading_pane_g4_ParamLimits

0x44ca,	// (0x000305e7) list_single_graphic_2heading_pane_g4

0x44d6,	// (0x000305f3) list_single_graphic_2heading_pane_g5_ParamLimits

0x44d6,	// (0x000305f3) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003b8a8) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003b8a8) list_single_graphic_2heading_pane_g

0x44e2,	// (0x000305ff) list_single_graphic_2heading_pane_t1_ParamLimits

0x44e2,	// (0x000305ff) list_single_graphic_2heading_pane_t1

0x44f6,	// (0x00030613) list_single_graphic_2heading_pane_t2_ParamLimits

0x44f6,	// (0x00030613) list_single_graphic_2heading_pane_t2

0x4510,	// (0x0003062d) list_single_graphic_2heading_pane_t3_ParamLimits

0x4510,	// (0x0003062d) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003b8af) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003b8af) list_single_graphic_2heading_pane_t

0x9926,	// (0x00035a43) bg_popup_sub_pane_cp2

0x9950,	// (0x00035a6d) grid_toobar_pane

0x5cb1,	// (0x00031dce) cell_toolbar_pane_ParamLimits

0x5cb1,	// (0x00031dce) cell_toolbar_pane

0x998c,	// (0x00035aa9) cell_toolbar_pane_g1_ParamLimits

0x998c,	// (0x00035aa9) cell_toolbar_pane_g1

0x99a0,	// (0x00035abd) cell_toolbar_pane_g2_ParamLimits

0x99a0,	// (0x00035abd) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003b8bd) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003b8bd) cell_toolbar_pane_g

0x99c2,	// (0x00035adf) grid_highlight_pane_cp2_ParamLimits

0x99c2,	// (0x00035adf) grid_highlight_pane_cp2

0x99dc,	// (0x00035af9) toolbar_button_pane

0x99e8,	// (0x00035b05) toolbar_button_pane_g1

0x99f0,	// (0x00035b0d) toolbar_button_pane_g2

0x99f8,	// (0x00035b15) toolbar_button_pane_g3

0x9a00,	// (0x00035b1d) toolbar_button_pane_g4

0x9a08,	// (0x00035b25) toolbar_button_pane_g5

0x9a10,	// (0x00035b2d) toolbar_button_pane_g6

0x9a18,	// (0x00035b35) toolbar_button_pane_g7

0x9a20,	// (0x00035b3d) toolbar_button_pane_g8

0x9a28,	// (0x00035b45) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003b8c2) toolbar_button_pane_g

0x5d23,	// (0x00031e40) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d23,	// (0x00031e40) list_single_2graphic_pane_g1_cp3

0x5d2f,	// (0x00031e4c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d2f,	// (0x00031e4c) list_single_2graphic_pane_g2_cp3

0x5d40,	// (0x00031e5d) list_single_2graphic_pane_g3_cp3

0x5d48,	// (0x00031e65) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5d48,	// (0x00031e65) list_single_2graphic_pane_g4_cp3

0x5d54,	// (0x00031e71) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5d54,	// (0x00031e71) list_single_2graphic_pane_t1_cp3

0x5db0,	// (0x00031ecd) list_single_midp_graphic_pane_g2_ParamLimits

0x5db0,	// (0x00031ecd) list_single_midp_graphic_pane_g2

0x56e4,	// (0x00031801) aid_zoom_text_primary

0x44a2,	// (0x000305bf) aid_zoom_text_secondary

0x9408,	// (0x00035525) status_small_pane_g7_ParamLimits

0x9408,	// (0x00035525) status_small_pane_g7

0x942b,	// (0x00035548) status_small_pane_t1_ParamLimits

0x78bf,	// (0x000339dc) title_pane_g2

0x0003,

0xf529,	// (0x0003b646) title_pane_g

0x7e30,	// (0x00033f4d) aid_size_cell_colour_1_pane_ParamLimits

0x7e30,	// (0x00033f4d) aid_size_cell_colour_1_pane

0x7e44,	// (0x00033f61) aid_size_cell_colour_2_pane_ParamLimits

0x7e44,	// (0x00033f61) aid_size_cell_colour_2_pane

0x7e58,	// (0x00033f75) aid_size_cell_colour_3_pane_ParamLimits

0x7e58,	// (0x00033f75) aid_size_cell_colour_3_pane

0x7e6c,	// (0x00033f89) aid_size_cell_colour_4_pane_ParamLimits

0x7e6c,	// (0x00033f89) aid_size_cell_colour_4_pane

0x50a8,	// (0x000311c5) title_pane_stacon_g1_ParamLimits

0x50a8,	// (0x000311c5) title_pane_stacon_g1

0xa09d,	// (0x000361ba) popup_note_wait_window_g3_ParamLimits

0xa09d,	// (0x000361ba) popup_note_wait_window_g3

0xa113,	// (0x00036230) popup_note_wait_window_t5_ParamLimits

0xa113,	// (0x00036230) popup_note_wait_window_t5

0x78a8,	// (0x000339c5) main_feb_china_hwr_fs_writing_pane

0x577e,	// (0x0003189b) popup_feb_china_hwr_fs_window_ParamLimits

0x577e,	// (0x0003189b) popup_feb_china_hwr_fs_window

0x5e48,	// (0x00031f65) aid_size_cell_hwr_fs_ParamLimits

0x5e48,	// (0x00031f65) aid_size_cell_hwr_fs

0x9a5c,	// (0x00035b79) bg_popup_sub_pane_cp3_ParamLimits

0x9a5c,	// (0x00035b79) bg_popup_sub_pane_cp3

0x5e5d,	// (0x00031f7a) grid_hwr_fs_pane_ParamLimits

0x5e5d,	// (0x00031f7a) grid_hwr_fs_pane

0x5e75,	// (0x00031f92) linegrid_hwr_fs_pane_ParamLimits

0x5e75,	// (0x00031f92) linegrid_hwr_fs_pane

0x5e85,	// (0x00031fa2) cell_hwr_fs_pane_ParamLimits

0x5e85,	// (0x00031fa2) cell_hwr_fs_pane

0x9a68,	// (0x00035b85) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a68,	// (0x00035b85) linegrid_hwr_fs_pane_g1

0x9a74,	// (0x00035b91) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a74,	// (0x00035b91) linegrid_hwr_fs_pane_g2

0x9a86,	// (0x00035ba3) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a86,	// (0x00035ba3) linegrid_hwr_fs_pane_g3

0x5ea7,	// (0x00031fc4) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ea7,	// (0x00031fc4) linegrid_hwr_fs_pane_g4

0x5ec1,	// (0x00031fde) linegrid_hwr_fs_pane_g5_ParamLimits

0x5ec1,	// (0x00031fde) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003b8ed) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003b8ed) linegrid_hwr_fs_pane_g

0x9a92,	// (0x00035baf) cell_hwr_fs_pane_g1_ParamLimits

0x9a92,	// (0x00035baf) cell_hwr_fs_pane_g1

0x985d,	// (0x0003597a) cell_hwr_fs_pane_g2_ParamLimits

0x985d,	// (0x0003597a) cell_hwr_fs_pane_g2

0x9aa8,	// (0x00035bc5) cell_hwr_fs_pane_g3_ParamLimits

0x9aa8,	// (0x00035bc5) cell_hwr_fs_pane_g3

0x9ab5,	// (0x00035bd2) cell_hwr_fs_pane_g4_ParamLimits

0x9ab5,	// (0x00035bd2) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003b8f8) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003b8f8) cell_hwr_fs_pane_g

0x5ed7,	// (0x00031ff4) cell_hwr_fs_pane_t1

0x78a8,	// (0x000339c5) grid_highlight_pane_cp6

0x78a8,	// (0x000339c5) main_idle_act2_pane

0x837c,	// (0x00034499) aid_inside_area_popup_secondary

0xa74a,	// (0x00036867) aid_inside_area_window_primary_ParamLimits

0xa74a,	// (0x00036867) aid_inside_area_window_primary

0xb2f4,	// (0x00037411) ai2_news_ticker_pane

0xb2fc,	// (0x00037419) aid_size_cell_ai1_link_ParamLimits

0xb2fc,	// (0x00037419) aid_size_cell_ai1_link

0xb316,	// (0x00037433) popup_ai2_data_window_ParamLimits

0xb316,	// (0x00037433) popup_ai2_data_window

0xb32c,	// (0x00037449) popup_ai2_link_window_ParamLimits

0xb32c,	// (0x00037449) popup_ai2_link_window

0x9a5c,	// (0x00035b79) bg_popup_sub_pane_cp4_ParamLimits

0x9a5c,	// (0x00035b79) bg_popup_sub_pane_cp4

0xb340,	// (0x0003745d) grid_ai2_link_pane_ParamLimits

0xb340,	// (0x0003745d) grid_ai2_link_pane

0xb357,	// (0x00037474) popup_ai2_link_window_g1_ParamLimits

0xb357,	// (0x00037474) popup_ai2_link_window_g1

0xb363,	// (0x00037480) popup_ai2_link_window_g2_ParamLimits

0xb363,	// (0x00037480) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003bacb) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003bacb) popup_ai2_link_window_g

0xb372,	// (0x0003748f) ai2_mp_button_pane

0xb37a,	// (0x00037497) ai2_mp_volume_pane

0x9c69,	// (0x00035d86) bg_popup_sub_pane_cp5_ParamLimits

0x9c69,	// (0x00035d86) bg_popup_sub_pane_cp5

0xb382,	// (0x0003749f) heading_ai2_gene_pane_ParamLimits

0xb382,	// (0x0003749f) heading_ai2_gene_pane

0xb38e,	// (0x000374ab) list_ai2_gene_pane_ParamLimits

0xb38e,	// (0x000374ab) list_ai2_gene_pane

0xb3d6,	// (0x000374f3) cell_ai2_link_pane_ParamLimits

0xb3d6,	// (0x000374f3) cell_ai2_link_pane

0xb3ec,	// (0x00037509) cell_ai2_link_pane_g1

0x78a8,	// (0x000339c5) grid_highlight_pane_cp7

0x6320,	// (0x0003243d) ai2_mp_volume_pane_g1

0xb4bc,	// (0x000375d9) ai2_mp_volume_pane_g2

0xb431,	// (0x0003754e) list_ai2_gene_pane_t1

0xb4c4,	// (0x000375e1) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003bae4) ai2_mp_volume_pane_g

0x6328,	// (0x00032445) volume_small_pane_cp3

0xb4cc,	// (0x000375e9) aid_size_cell_ai2_button

0xb4d4,	// (0x000375f1) grid_ai2_button_pane

0xb4dd,	// (0x000375fa) cell_ai2_button_pane_ParamLimits

0xb4dd,	// (0x000375fa) cell_ai2_button_pane

0x297c,	// (0x0002ea99) cell_ai2_button_pane_g1

0x78a8,	// (0x000339c5) grid_highlight_pane_cp8

0xb47c,	// (0x00037599) ai2_gene_pane_t1_ParamLimits

0xb47c,	// (0x00037599) ai2_gene_pane_t1

0x56d2,	// (0x000317ef) aid_height_parent_landscape

0xadc0,	// (0x00036edd) aid_height_set_list

0xadd1,	// (0x00036eee) aid_size_parent

0xb117,	// (0x00037234) aid_size_cell_graphic_pane_ParamLimits

0xb39e,	// (0x000374bb) popup_ai2_data_window_g1_ParamLimits

0xb39e,	// (0x000374bb) popup_ai2_data_window_g1

0xb3aa,	// (0x000374c7) ai2_news_ticker_pane_g1

0xb3b2,	// (0x000374cf) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003bad0) ai2_news_ticker_pane_g

0xb3ba,	// (0x000374d7) ai2_news_ticker_pane_t1

0xb3c8,	// (0x000374e5) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003bad5) ai2_news_ticker_pane_t

0xb3f5,	// (0x00037512) heading_ai2_gene_pane_g1

0xb3fd,	// (0x0003751a) heading_ai2_gene_pane_t1_ParamLimits

0xb3fd,	// (0x0003751a) heading_ai2_gene_pane_t1

0xb412,	// (0x0003752f) list_highlight_pane_cp6

0xb41a,	// (0x00037537) ai2_gene_pane_ParamLimits

0xb41a,	// (0x00037537) ai2_gene_pane

0xb43f,	// (0x0003755c) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003bada) list_ai2_gene_pane_t

0xb44d,	// (0x0003756a) list_highlight_pane_cp8_ParamLimits

0xb44d,	// (0x0003756a) list_highlight_pane_cp8

0xb45e,	// (0x0003757b) ai2_gene_pane_g1_ParamLimits

0xb45e,	// (0x0003757b) ai2_gene_pane_g1

0xb470,	// (0x0003758d) ai2_gene_pane_g2_ParamLimits

0xb470,	// (0x0003758d) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003badf) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003badf) ai2_gene_pane_g

0x81ab,	// (0x000342c8) scroll_pane_cp12

0x568f,	// (0x000317ac) control_pane_t3_ParamLimits

0x568f,	// (0x000317ac) control_pane_t3

0x941c,	// (0x00035539) status_small_pane_g8_ParamLimits

0x941c,	// (0x00035539) status_small_pane_g8

0x5864,	// (0x00031981) popup_find_window_ParamLimits

0x5a7b,	// (0x00031b98) popup_note_image_window_ParamLimits

0x5ce1,	// (0x00031dfe) list_double2_graphic_pane_vc_g1_ParamLimits

0x5ce1,	// (0x00031dfe) list_double2_graphic_pane_vc_g1

0x5ced,	// (0x00031e0a) list_double2_graphic_pane_vc_g2_ParamLimits

0x5ced,	// (0x00031e0a) list_double2_graphic_pane_vc_g2

0x5cf9,	// (0x00031e16) list_double2_graphic_pane_vc_g3_ParamLimits

0x5cf9,	// (0x00031e16) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003b8b6) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003b8b6) list_double2_graphic_pane_vc_g

0x5d05,	// (0x00031e22) list_double2_graphic_pane_vc_t1_ParamLimits

0x5d05,	// (0x00031e22) list_double2_graphic_pane_vc_t1

0x5d70,	// (0x00031e8d) list_single_heading_pane_vc_g1_ParamLimits

0x5d70,	// (0x00031e8d) list_single_heading_pane_vc_g1

0x5d7c,	// (0x00031e99) list_single_heading_pane_vc_g2_ParamLimits

0x5d7c,	// (0x00031e99) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003b8d7) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003b8d7) list_single_heading_pane_vc_g

0x5d88,	// (0x00031ea5) list_single_heading_pane_vc_t1_ParamLimits

0x5d88,	// (0x00031ea5) list_single_heading_pane_vc_t1

0x5d9e,	// (0x00031ebb) list_single_heading_pane_vc_t2_ParamLimits

0x5d9e,	// (0x00031ebb) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003b8dc) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003b8dc) list_single_heading_pane_vc_t

0x5dd2,	// (0x00031eef) list_setting_number_pane_vc_g1_ParamLimits

0x5dd2,	// (0x00031eef) list_setting_number_pane_vc_g1

0x5dde,	// (0x00031efb) list_setting_number_pane_vc_g2_ParamLimits

0x5dde,	// (0x00031efb) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003b8e1) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003b8e1) list_setting_number_pane_vc_g

0x5dea,	// (0x00031f07) list_setting_number_pane_vc_t1_ParamLimits

0x5dea,	// (0x00031f07) list_setting_number_pane_vc_t1

0x5dfe,	// (0x00031f1b) list_setting_number_pane_vc_t2_ParamLimits

0x5dfe,	// (0x00031f1b) list_setting_number_pane_vc_t2

0x5e1a,	// (0x00031f37) list_setting_number_pane_vc_t3_ParamLimits

0x5e1a,	// (0x00031f37) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003b8e6) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003b8e6) list_setting_number_pane_vc_t

0x5e38,	// (0x00031f55) set_value_pane_vc_ParamLimits

0x5e38,	// (0x00031f55) set_value_pane_vc

0x61da,	// (0x000322f7) list_double2_graphic_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double2_graphic_pane_vc

0xaf89,	// (0x000370a6) list_double2_large_graphic_pane_vc_ParamLimits

0xaf89,	// (0x000370a6) list_double2_large_graphic_pane_vc

0x61da,	// (0x000322f7) list_double2_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double2_pane_vc

0x61da,	// (0x000322f7) list_double_graphic_heading_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double_graphic_heading_pane_vc

0x61da,	// (0x000322f7) list_double_graphic_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double_graphic_pane_vc

0x61da,	// (0x000322f7) list_double_heading_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double_heading_pane_vc

0xaf9b,	// (0x000370b8) list_double_large_graphic_pane_vc_ParamLimits

0xaf9b,	// (0x000370b8) list_double_large_graphic_pane_vc

0x61da,	// (0x000322f7) list_double_number_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double_number_pane_vc

0x61da,	// (0x000322f7) list_double_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double_pane_vc

0x61da,	// (0x000322f7) list_double_time_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_double_time_pane_vc

0x61da,	// (0x000322f7) list_setting_number_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_setting_number_pane_vc

0x61da,	// (0x000322f7) list_setting_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_setting_pane_vc

0x61da,	// (0x000322f7) list_single_graphic_heading_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_single_graphic_heading_pane_vc

0x61da,	// (0x000322f7) list_single_heading_pane_vc_ParamLimits

0x61da,	// (0x000322f7) list_single_heading_pane_vc

0x61ed,	// (0x0003230a) list_single_number_heading_pane_vc_ParamLimits

0x61ed,	// (0x0003230a) list_single_number_heading_pane_vc

0x6331,	// (0x0003244e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6331,	// (0x0003244e) list_double_graphic_heading_pane_vc_g1

0x5d70,	// (0x00031e8d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5d70,	// (0x00031e8d) list_double_graphic_heading_pane_vc_g2

0x5d7c,	// (0x00031e99) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5d7c,	// (0x00031e99) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003baeb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003baeb) list_double_graphic_heading_pane_vc_g

0x633d,	// (0x0003245a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x633d,	// (0x0003245a) list_double_graphic_heading_pane_vc_t1

0x6359,	// (0x00032476) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6359,	// (0x00032476) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003baf2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003baf2) list_double_graphic_heading_pane_vc_t

0x5dd2,	// (0x00031eef) list_setting_pane_vc_g1_ParamLimits

0x5dd2,	// (0x00031eef) list_setting_pane_vc_g1

0x5dde,	// (0x00031efb) list_setting_pane_vc_g2_ParamLimits

0x5dde,	// (0x00031efb) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003b8e1) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003b8e1) list_setting_pane_vc_g

0x6377,	// (0x00032494) list_setting_pane_vc_t1_ParamLimits

0x6377,	// (0x00032494) list_setting_pane_vc_t1

0x6393,	// (0x000324b0) list_setting_pane_vc_t2_ParamLimits

0x6393,	// (0x000324b0) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003bb20) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003bb20) list_setting_pane_vc_t

0x5e38,	// (0x00031f55) set_value_pane_cp_vc_ParamLimits

0x5e38,	// (0x00031f55) set_value_pane_cp_vc

0x5d70,	// (0x00031e8d) list_single_number_heading_pane_vc_g1_ParamLimits

0x5d70,	// (0x00031e8d) list_single_number_heading_pane_vc_g1

0x5d7c,	// (0x00031e99) list_single_number_heading_pane_vc_g2_ParamLimits

0x5d7c,	// (0x00031e99) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003b8d7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003b8d7) list_single_number_heading_pane_vc_g

0x63af,	// (0x000324cc) list_single_number_heading_pane_vc_t1_ParamLimits

0x63af,	// (0x000324cc) list_single_number_heading_pane_vc_t1

0x63c5,	// (0x000324e2) list_single_number_heading_pane_vc_t2_ParamLimits

0x63c5,	// (0x000324e2) list_single_number_heading_pane_vc_t2

0x63d7,	// (0x000324f4) list_single_number_heading_pane_vc_t3_ParamLimits

0x63d7,	// (0x000324f4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003bb25) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003bb25) list_single_number_heading_pane_vc_t

0x5ce1,	// (0x00031dfe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5ce1,	// (0x00031dfe) list_single_graphic_heading_pane_vc_g1

0x5d70,	// (0x00031e8d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5d70,	// (0x00031e8d) list_single_graphic_heading_pane_vc_g4

0x5d7c,	// (0x00031e99) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5d7c,	// (0x00031e99) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0f,	// (0x0003bb2c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0f,	// (0x0003bb2c) list_single_graphic_heading_pane_vc_g

0x63e9,	// (0x00032506) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x63e9,	// (0x00032506) list_single_graphic_heading_pane_vc_t1

0x63ff,	// (0x0003251c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x63ff,	// (0x0003251c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0003bb33) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0003bb33) list_single_graphic_heading_pane_vc_t

0x5d70,	// (0x00031e8d) list_double2_pane_vc_g1_ParamLimits

0x5d70,	// (0x00031e8d) list_double2_pane_vc_g1

0x5d7c,	// (0x00031e99) list_double2_pane_vc_g2_ParamLimits

0x5d7c,	// (0x00031e99) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003b8d7) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003b8d7) list_double2_pane_vc_g

0x6411,	// (0x0003252e) list_double2_pane_vc_t1_ParamLimits

0x6411,	// (0x0003252e) list_double2_pane_vc_t1

0x6427,	// (0x00032544) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6427,	// (0x00032544) list_double2_large_graphic_pane_vc_g1

0x393a,	// (0x0002fa57) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x393a,	// (0x0002fa57) list_double2_large_graphic_pane_vc_g2

0x3946,	// (0x0002fa63) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3946,	// (0x0002fa63) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1b,	// (0x0003bb38) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003bb38) list_double2_large_graphic_pane_vc_g

0x6433,	// (0x00032550) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6433,	// (0x00032550) list_double2_large_graphic_pane_vc_t1

0x6449,	// (0x00032566) list_double_time_pane_vc_g1_ParamLimits

0x6449,	// (0x00032566) list_double_time_pane_vc_g1

0x6455,	// (0x00032572) list_double_time_pane_vc_g2_ParamLimits

0x6455,	// (0x00032572) list_double_time_pane_vc_g2

0x0001,

0xfa22,	// (0x0003bb3f) list_double_time_pane_vc_g_ParamLimits

0xfa22,	// (0x0003bb3f) list_double_time_pane_vc_g

0x6461,	// (0x0003257e) list_double_time_pane_vc_t1_ParamLimits

0x6461,	// (0x0003257e) list_double_time_pane_vc_t1

0x6485,	// (0x000325a2) list_double_time_pane_vc_t2_ParamLimits

0x6485,	// (0x000325a2) list_double_time_pane_vc_t2

0x64cf,	// (0x000325ec) list_double_time_pane_vc_t3_ParamLimits

0x64cf,	// (0x000325ec) list_double_time_pane_vc_t3

0x64e1,	// (0x000325fe) list_double_time_pane_vc_t4_ParamLimits

0x64e1,	// (0x000325fe) list_double_time_pane_vc_t4

0x0003,

0xfa27,	// (0x0003bb44) list_double_time_pane_vc_t_ParamLimits

0xfa27,	// (0x0003bb44) list_double_time_pane_vc_t

0x5d70,	// (0x00031e8d) list_double_pane_vc_g1_ParamLimits

0x5d70,	// (0x00031e8d) list_double_pane_vc_g1

0x5d7c,	// (0x00031e99) list_double_pane_vc_g2_ParamLimits

0x5d7c,	// (0x00031e99) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003b8d7) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003b8d7) list_double_pane_vc_g

0x64f5,	// (0x00032612) list_double_pane_vc_t1_ParamLimits

0x64f5,	// (0x00032612) list_double_pane_vc_t1

0x6509,	// (0x00032626) list_double_pane_vc_t2_ParamLimits

0x6509,	// (0x00032626) list_double_pane_vc_t2

0x0001,

0xfa30,	// (0x0003bb4d) list_double_pane_vc_t_ParamLimits

0xfa30,	// (0x0003bb4d) list_double_pane_vc_t

0x5d70,	// (0x00031e8d) list_double_number_pane_vc_g1_ParamLimits

0x5d70,	// (0x00031e8d) list_double_number_pane_vc_g1

0x5d7c,	// (0x00031e99) list_double_number_pane_vc_g2_ParamLimits

0x5d7c,	// (0x00031e99) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003b8d7) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003b8d7) list_double_number_pane_vc_g

0x6521,	// (0x0003263e) list_double_number_pane_vc_t1_ParamLimits

0x6521,	// (0x0003263e) list_double_number_pane_vc_t1

0x6533,	// (0x00032650) list_double_number_pane_vc_t2_ParamLimits

0x6533,	// (0x00032650) list_double_number_pane_vc_t2

0x6547,	// (0x00032664) list_double_number_pane_vc_t3_ParamLimits

0x6547,	// (0x00032664) list_double_number_pane_vc_t3

0x0002,

0xfa35,	// (0x0003bb52) list_double_number_pane_vc_t_ParamLimits

0xfa35,	// (0x0003bb52) list_double_number_pane_vc_t

0x655f,	// (0x0003267c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x655f,	// (0x0003267c) list_double_large_graphic_pane_vc_g1

0x657b,	// (0x00032698) list_double_large_graphic_pane_vc_g2_ParamLimits

0x657b,	// (0x00032698) list_double_large_graphic_pane_vc_g2

0x658f,	// (0x000326ac) list_double_large_graphic_pane_vc_g3_ParamLimits

0x658f,	// (0x000326ac) list_double_large_graphic_pane_vc_g3

0x659e,	// (0x000326bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x659e,	// (0x000326bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3c,	// (0x0003bb59) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0003bb59) list_double_large_graphic_pane_vc_g

0x65ad,	// (0x000326ca) list_double_large_graphic_pane_vc_t1_ParamLimits

0x65ad,	// (0x000326ca) list_double_large_graphic_pane_vc_t1

0x65c9,	// (0x000326e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x65c9,	// (0x000326e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x0003bb62) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x0003bb62) list_double_large_graphic_pane_vc_t

0x5d70,	// (0x00031e8d) list_double_heading_pane_vc_g1_ParamLimits

0x5d70,	// (0x00031e8d) list_double_heading_pane_vc_g1

0x5d7c,	// (0x00031e99) list_double_heading_pane_vc_g2_ParamLimits

0x5d7c,	// (0x00031e99) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003b8d7) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003b8d7) list_double_heading_pane_vc_g

0x65eb,	// (0x00032708) list_double_heading_pane_vc_t1_ParamLimits

0x65eb,	// (0x00032708) list_double_heading_pane_vc_t1

0x65ff,	// (0x0003271c) list_double_heading_pane_vc_t2_ParamLimits

0x65ff,	// (0x0003271c) list_double_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0003bb67) list_double_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0003bb67) list_double_heading_pane_vc_t

0x6617,	// (0x00032734) list_double_graphic_pane_vc_g1_ParamLimits

0x6617,	// (0x00032734) list_double_graphic_pane_vc_g1

0x662a,	// (0x00032747) list_double_graphic_pane_vc_g2_ParamLimits

0x662a,	// (0x00032747) list_double_graphic_pane_vc_g2

0x5d70,	// (0x00031e8d) list_double_graphic_pane_vc_g3_ParamLimits

0x5d70,	// (0x00031e8d) list_double_graphic_pane_vc_g3

0x0003,

0xfa4f,	// (0x0003bb6c) list_double_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0003bb6c) list_double_graphic_pane_vc_g

0x6647,	// (0x00032764) list_double_graphic_pane_vc_t1_ParamLimits

0x6647,	// (0x00032764) list_double_graphic_pane_vc_t1

0x6671,	// (0x0003278e) list_double_graphic_pane_vc_t2_ParamLimits

0x6671,	// (0x0003278e) list_double_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x0003bb75) list_double_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x0003bb75) list_double_graphic_pane_vc_t

0x4540,	// (0x0003065d) aid_size_cell_fastswap

0x4548,	// (0x00030665) aid_size_cell_touch_ParamLimits

0x4548,	// (0x00030665) aid_size_cell_touch

0x47ad,	// (0x000308ca) popup_fast_swap_wide_window_ParamLimits

0x47ad,	// (0x000308ca) popup_fast_swap_wide_window

0x48c1,	// (0x000309de) touch_pane_ParamLimits

0x48c1,	// (0x000309de) touch_pane

0x8201,	// (0x0003431e) button_value_adjust_pane_cp2

0x4e0a,	// (0x00030f27) button_value_adjust_pane_cp4

0x4e2a,	// (0x00030f47) form_field_data_pane_cp2

0x4e49,	// (0x00030f66) form_field_data_wide_pane_cp2

0x896e,	// (0x00034a8b) bg_scroll_pane_ParamLimits

0x520a,	// (0x00031327) scroll_handle_pane_ParamLimits

0x521e,	// (0x0003133b) scroll_sc2_down_pane_ParamLimits

0x521e,	// (0x0003133b) scroll_sc2_down_pane

0x899f,	// (0x00034abc) scroll_sc2_up_pane_ParamLimits

0x899f,	// (0x00034abc) scroll_sc2_up_pane

0xbbd1,	// (0x00037cee) grid_wheel_folder_pane_g1_ParamLimits

0xbbd1,	// (0x00037cee) grid_wheel_folder_pane_g1

0x546d,	// (0x0003158a) clock_nsta_pane_cp2_ParamLimits

0x546d,	// (0x0003158a) clock_nsta_pane_cp2

0x91a2,	// (0x000352bf) listscroll_midp_pane_ParamLimits

0x91ae,	// (0x000352cb) midp_canvas_pane

0x9496,	// (0x000355b3) nsta_clock_indic_pane

0x94ca,	// (0x000355e7) listscroll_form_pane_vc

0x94d2,	// (0x000355ef) listscroll_set_pane_vc_ParamLimits

0x94d2,	// (0x000355ef) listscroll_set_pane_vc

0x95cb,	// (0x000356e8) clock_nsta_pane

0x9646,	// (0x00035763) indicator_nsta_pane

0x9926,	// (0x00035a43) bg_popup_sub_pane_cp2_ParamLimits

0x993a,	// (0x00035a57) find_pane_cp2_ParamLimits

0x993a,	// (0x00035a57) find_pane_cp2

0x9950,	// (0x00035a6d) grid_toobar_pane_ParamLimits

0x9a30,	// (0x00035b4d) list_form_gen_pane_vc_ParamLimits

0x9a30,	// (0x00035b4d) list_form_gen_pane_vc

0x9a46,	// (0x00035b63) scroll_pane_cp8_vc_ParamLimits

0x9a46,	// (0x00035b63) scroll_pane_cp8_vc

0x9ac2,	// (0x00035bdf) data_form_wide_pane_vc_ParamLimits

0x9ac2,	// (0x00035bdf) data_form_wide_pane_vc

0x9ace,	// (0x00035beb) form_field_data_wide_pane_vc_g1

0x9ad6,	// (0x00035bf3) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ad6,	// (0x00035bf3) form_field_data_wide_pane_vc_t1

0x8215,	// (0x00034332) input_focus_pane_cp6_vc_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_cp6_vc

0x9dfc,	// (0x00035f19) list_midp_pane_ParamLimits

0x9e08,	// (0x00035f25) scroll_pane_cp16_ParamLimits

0x9e08,	// (0x00035f25) scroll_pane_cp16

0x9e72,	// (0x00035f8f) button_value_adjust_pane_ParamLimits

0x9e72,	// (0x00035f8f) button_value_adjust_pane

0xade3,	// (0x00036f00) button_value_adjust_pane_cp6_ParamLimits

0xade3,	// (0x00036f00) button_value_adjust_pane_cp6

0xaf0d,	// (0x0003702a) settings_code_pane_cp_ParamLimits

0xaf0d,	// (0x0003702a) settings_code_pane_cp

0x297c,	// (0x0002ea99) cell_touch_pane_g1

0x297c,	// (0x0002ea99) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003b7fb) cell_touch_pane_g

0xb4ef,	// (0x0003760c) cell_touch_pane_cp_ParamLimits

0xb4ef,	// (0x0003760c) cell_touch_pane_cp

0xb4ff,	// (0x0003761c) cell_touch_pane_ParamLimits

0xb4ff,	// (0x0003761c) cell_touch_pane

0x297c,	// (0x0002ea99) scroll_sc2_down_pane_g1

0x297c,	// (0x0002ea99) scroll_sc2_up_pane_g1

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp4_vc

0xb511,	// (0x0003762e) list_set_graphic_pane_vc_g1_ParamLimits

0xb511,	// (0x0003762e) list_set_graphic_pane_vc_g1

0xb51d,	// (0x0003763a) list_set_graphic_pane_vc_g2_ParamLimits

0xb51d,	// (0x0003763a) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003baf7) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003baf7) list_set_graphic_pane_vc_g

0xb529,	// (0x00037646) text_primary_small_cp13_vc_ParamLimits

0xb529,	// (0x00037646) text_primary_small_cp13_vc

0xb54d,	// (0x0003766a) list_set_graphic_pane_vc_ParamLimits

0xb54d,	// (0x0003766a) list_set_graphic_pane_vc

0x78a8,	// (0x000339c5) input_focus_pane_cp2_vc

0x297c,	// (0x0002ea99) setting_code_pane_vc_g1

0x79d3,	// (0x00033af0) setting_code_pane_vc_t1

0xb560,	// (0x0003767d) set_text_pane_vc_t1_ParamLimits

0xb560,	// (0x0003767d) set_text_pane_vc_t1

0x78a8,	// (0x000339c5) input_focus_pane_cp1_vc

0xb57c,	// (0x00037699) list_set_text_pane_vc

0x297c,	// (0x0002ea99) setting_text_pane_vc_g1

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp2_vc

0x79ca,	// (0x00033ae7) setting_slider_graphic_pane_vc_g1

0xb586,	// (0x000376a3) setting_slider_graphic_pane_vc_t1

0xb596,	// (0x000376b3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003bafc) setting_slider_graphic_pane_vc_t

0xb5a6,	// (0x000376c3) slider_set_pane_cp_vc

0xb5ae,	// (0x000376cb) slider_set_pane_vc_g1

0xb5b7,	// (0x000376d4) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003bb01) slider_set_pane_vc_g

0x826d,	// (0x0003438a) set_opt_bg_pane_g1_copy1

0x8275,	// (0x00034392) set_opt_bg_pane_g2_copy1

0xb5e3,	// (0x00037700) set_opt_bg_pane_g3_copy1

0x8285,	// (0x000343a2) set_opt_bg_pane_g4_copy1

0x828d,	// (0x000343aa) set_opt_bg_pane_g5_copy1

0x8295,	// (0x000343b2) set_opt_bg_pane_g6_copy1

0xb5ed,	// (0x0003770a) set_opt_bg_pane_g7_copy1

0xb5f7,	// (0x00037714) set_opt_bg_pane_g8_copy1

0xb601,	// (0x0003771e) set_opt_bg_pane_g9_copy1

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp_vc

0xb60b,	// (0x00037728) setting_slider_pane_vc_t1

0xb61a,	// (0x00037737) setting_slider_pane_vc_t2

0xb62a,	// (0x00037747) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003bb10) setting_slider_pane_vc_t

0xb63a,	// (0x00037757) slider_set_pane_vc

0x5f26,	// (0x00032043) volume_set_pane_vc_g1

0x5f2f,	// (0x0003204c) volume_set_pane_vc_g2

0x5f38,	// (0x00032055) volume_set_pane_vc_g3

0x5f41,	// (0x0003205e) volume_set_pane_vc_g4

0x5f4a,	// (0x00032067) volume_set_pane_vc_g5

0x5f53,	// (0x00032070) volume_set_pane_vc_g6

0x5f5c,	// (0x00032079) volume_set_pane_vc_g7

0x5f65,	// (0x00032082) volume_set_pane_vc_g8

0x5f6e,	// (0x0003208b) volume_set_pane_vc_g9

0x5f77,	// (0x00032094) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003b9ae) volume_set_pane_vc_g

0xb642,	// (0x0003775f) volume_set_pane_vc

0xb64a,	// (0x00037767) button_value_adjust_pane_cp1_vc

0xb654,	// (0x00037771) list_highlight_pane_cp2_vc

0xb65d,	// (0x0003777a) list_set_pane_vc_ParamLimits

0xb65d,	// (0x0003777a) list_set_pane_vc

0xb6bb,	// (0x000377d8) main_pane_set_vc_t1_ParamLimits

0xb6bb,	// (0x000377d8) main_pane_set_vc_t1

0xb6d0,	// (0x000377ed) main_pane_set_vc_t2_ParamLimits

0xb6d0,	// (0x000377ed) main_pane_set_vc_t2

0xb6e2,	// (0x000377ff) main_pane_set_vc_t3_ParamLimits

0xb6e2,	// (0x000377ff) main_pane_set_vc_t3

0xb6f6,	// (0x00037813) main_pane_set_vc_t4_ParamLimits

0xb6f6,	// (0x00037813) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003bb17) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003bb17) main_pane_set_vc_t

0xb70a,	// (0x00037827) setting_code_pane_vc_ParamLimits

0xb70a,	// (0x00037827) setting_code_pane_vc

0xb71b,	// (0x00037838) setting_slider_graphic_pane_vc

0xb71b,	// (0x00037838) setting_slider_pane_vc

0xb71b,	// (0x00037838) setting_text_pane_vc

0xb71b,	// (0x00037838) setting_volume_pane_vc

0xb725,	// (0x00037842) scroll_pane_cp121_vc

0x81ef,	// (0x0003430c) set_content_pane_vc

0xb72d,	// (0x0003784a) button_value_adjust_pane_g1

0xb736,	// (0x00037853) button_value_adjust_pane_g2

0x0001,

0xfa5d,	// (0x0003bb7a) button_value_adjust_pane_g

0xb73f,	// (0x0003785c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb73f,	// (0x0003785c) form_field_slider_wide_pane_vc_t1

0xb753,	// (0x00037870) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb753,	// (0x00037870) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa62,	// (0x0003bb7f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa62,	// (0x0003bb7f) form_field_slider_wide_pane_vc_t

0x7c03,	// (0x00033d20) input_focus_pane_cp10_vc_ParamLimits

0x7c03,	// (0x00033d20) input_focus_pane_cp10_vc

0xb781,	// (0x0003789e) slider_cont_pane_cp1_vc_ParamLimits

0xb781,	// (0x0003789e) slider_cont_pane_cp1_vc

0xb793,	// (0x000378b0) slider_form_pane_g1_cp2

0xb5b7,	// (0x000376d4) slider_form_pane_g2_cp2

0xb7c0,	// (0x000378dd) form_field_slider_pane_vc_t3

0xb7ce,	// (0x000378eb) form_field_slider_pane_vc_t4

0xb7dc,	// (0x000378f9) slider_form_pane_vc_ParamLimits

0xb7dc,	// (0x000378f9) slider_form_pane_vc

0xb7e9,	// (0x00037906) form_field_slider_pane_vc_t1_ParamLimits

0xb7e9,	// (0x00037906) form_field_slider_pane_vc_t1

0xb753,	// (0x00037870) form_field_slider_pane_vc_t2_ParamLimits

0xb753,	// (0x00037870) form_field_slider_pane_vc_t2

0x0001,

0xfa74,	// (0x0003bb91) form_field_slider_pane_vc_t_ParamLimits

0xfa74,	// (0x0003bb91) form_field_slider_pane_vc_t

0x7c03,	// (0x00033d20) input_focus_pane_cp9_vc_ParamLimits

0x7c03,	// (0x00033d20) input_focus_pane_cp9_vc

0xb805,	// (0x00037922) slider_cont_pane_vc_ParamLimits

0xb805,	// (0x00037922) slider_cont_pane_vc

0xb819,	// (0x00037936) list_form_graphic_pane_cp_vc_ParamLimits

0xb819,	// (0x00037936) list_form_graphic_pane_cp_vc

0x9ace,	// (0x00035beb) form_field_popup_wide_pane_vc_g1

0xb82e,	// (0x0003794b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x0003794b) form_field_popup_wide_pane_vc_t1

0x8215,	// (0x00034332) input_focus_pane_cp8_vc_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_cp8_vc

0xb873,	// (0x00037990) list_form_wide_pane_vc_ParamLimits

0xb873,	// (0x00037990) list_form_wide_pane_vc

0xb87f,	// (0x0003799c) list_form_graphic_pane_vc_g1

0xb887,	// (0x000379a4) list_form_graphic_pane_vc_t1_ParamLimits

0xb887,	// (0x000379a4) list_form_graphic_pane_vc_t1

0x7988,	// (0x00033aa5) list_highlight_pane_cp5_vc_ParamLimits

0x7988,	// (0x00033aa5) list_highlight_pane_cp5_vc

0xb8a3,	// (0x000379c0) list_form_graphic_pane_vc_ParamLimits

0xb8a3,	// (0x000379c0) list_form_graphic_pane_vc

0x9ace,	// (0x00035beb) form_field_popup_pane_vc_g1

0xb8b9,	// (0x000379d6) form_field_popup_pane_vc_t1_ParamLimits

0xb8b9,	// (0x000379d6) form_field_popup_pane_vc_t1

0x8215,	// (0x00034332) input_focus_pane_cp7_vc_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_cp7_vc

0xb8d0,	// (0x000379ed) list_form_pane_vc_ParamLimits

0xb8d0,	// (0x000379ed) list_form_pane_vc

0xb8dc,	// (0x000379f9) data_form_pane_vc_t1_ParamLimits

0xb8dc,	// (0x000379f9) data_form_pane_vc_t1

0x826d,	// (0x0003438a) input_focus_pane_vc_g1

0x8275,	// (0x00034392) input_focus_pane_vc_g2

0x827d,	// (0x0003439a) input_focus_pane_vc_g3

0x8285,	// (0x000343a2) input_focus_pane_vc_g4

0x828d,	// (0x000343aa) input_focus_pane_vc_g5

0x8295,	// (0x000343b2) input_focus_pane_vc_g6

0x829d,	// (0x000343ba) input_focus_pane_vc_g7

0x82a5,	// (0x000343c2) input_focus_pane_vc_g8

0x82ad,	// (0x000343ca) input_focus_pane_vc_g9

0x297c,	// (0x0002ea99) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003b784) input_focus_pane_vc_g

0x9ac2,	// (0x00035bdf) data_form_pane_vc_ParamLimits

0x9ac2,	// (0x00035bdf) data_form_pane_vc

0x9ace,	// (0x00035beb) form_field_data_pane_vc_g1

0xb8f7,	// (0x00037a14) form_field_data_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00037a14) form_field_data_pane_vc_t1

0x8215,	// (0x00034332) input_focus_pane_vc_ParamLimits

0x8215,	// (0x00034332) input_focus_pane_vc

0xb911,	// (0x00037a2e) button_value_adjust_pane_cp3_vc

0xb919,	// (0x00037a36) button_value_adjust_pane_cp5_vc

0xb921,	// (0x00037a3e) form_field_data_pane_vc_ParamLimits

0xb921,	// (0x00037a3e) form_field_data_pane_vc

0xb938,	// (0x00037a55) form_field_data_pane_vc_cp2

0xb940,	// (0x00037a5d) form_field_data_wide_pane_vc_ParamLimits

0xb940,	// (0x00037a5d) form_field_data_wide_pane_vc

0xb956,	// (0x00037a73) form_field_data_wide_pane_vc_cp2

0xb95e,	// (0x00037a7b) form_field_popup_pane_vc_ParamLimits

0xb95e,	// (0x00037a7b) form_field_popup_pane_vc

0xb975,	// (0x00037a92) form_field_popup_wide_pane_vc_ParamLimits

0xb975,	// (0x00037a92) form_field_popup_wide_pane_vc

0xb98b,	// (0x00037aa8) form_field_slider_pane_vc_ParamLimits

0xb98b,	// (0x00037aa8) form_field_slider_pane_vc

0xb99e,	// (0x00037abb) form_field_slider_wide_pane_vc_ParamLimits

0xb99e,	// (0x00037abb) form_field_slider_wide_pane_vc

0xb9b1,	// (0x00037ace) grid_touch_1_pane_ParamLimits

0xb9b1,	// (0x00037ace) grid_touch_1_pane

0xb9bd,	// (0x00037ada) grid_touch_2_pane_ParamLimits

0xb9bd,	// (0x00037ada) grid_touch_2_pane

0x9461,	// (0x0003557e) touch_pane_g1_ParamLimits

0x9461,	// (0x0003557e) touch_pane_g1

0xb9d5,	// (0x00037af2) cell_app_pane_cp_wide_ParamLimits

0xb9d5,	// (0x00037af2) cell_app_pane_cp_wide

0xb9e6,	// (0x00037b03) grid_popup_fast_wide_pane_ParamLimits

0xb9e6,	// (0x00037b03) grid_popup_fast_wide_pane

0xb9fa,	// (0x00037b17) scroll_pane_cp19_ParamLimits

0xb9fa,	// (0x00037b17) scroll_pane_cp19

0x78a8,	// (0x000339c5) bg_popup_window_pane_cp20

0xba0e,	// (0x00037b2b) listscroll_popup_fast_wide_pane

0xba16,	// (0x00037b33) grid_indicator_nsta_pane

0xba28,	// (0x00037b45) clock_nsta_pane_g1

0xba31,	// (0x00037b4e) clock_nsta_pane_t1

0xba4d,	// (0x00037b6a) cell_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x00037b6a) cell_indicator_nsta_pane

0xba82,	// (0x00037b9f) cell_indicator_nsta_pane_g1

0xba90,	// (0x00037bad) cell_indicator_nsta_pane_g2

0x0001,

0xfa85,	// (0x0003bba2) cell_indicator_nsta_pane_g

0xbaa2,	// (0x00037bbf) clock_nsta_pane_cp

0xbaab,	// (0x00037bc8) indicator_nsta_pane_cp

0xbab5,	// (0x00037bd2) nsta_clock_indic_pane_g1

0x7a51,	// (0x00033b6e) grid_indicator_pane

0x8a94,	// (0x00034bb1) scroll_pane_cp29

0x53bc,	// (0x000314d9) indicator_nsta_pane_cp2_ParamLimits

0x53bc,	// (0x000314d9) indicator_nsta_pane_cp2

0x7988,	// (0x00033aa5) main_apps_wheel_pane

0x9cdd,	// (0x00035dfa) form_midp_field_text_pane_ParamLimits

0x9e28,	// (0x00035f45) scroll_bar_cp050_ParamLimits

0xbb0e,	// (0x00037c2b) cell_indicator_pane_ParamLimits

0xbb0e,	// (0x00037c2b) cell_indicator_pane

0xbb25,	// (0x00037c42) cell_indicator_pane_g1

0xbb2f,	// (0x00037c4c) grid_wheel_folder_pane_ParamLimits

0xbb2f,	// (0x00037c4c) grid_wheel_folder_pane

0xbb45,	// (0x00037c62) list_wheel_apps_pane_ParamLimits

0xbb45,	// (0x00037c62) list_wheel_apps_pane

0xbb56,	// (0x00037c73) main_apps_wheel_pane_g1_ParamLimits

0xbb56,	// (0x00037c73) main_apps_wheel_pane_g1

0xbb6a,	// (0x00037c87) main_apps_wheel_pane_g2_ParamLimits

0xbb6a,	// (0x00037c87) main_apps_wheel_pane_g2

0x0001,

0xfaa1,	// (0x0003bbbe) main_apps_wheel_pane_g_ParamLimits

0xfaa1,	// (0x0003bbbe) main_apps_wheel_pane_g

0xbb82,	// (0x00037c9f) main_apps_wheel_pane_t1_ParamLimits

0xbb82,	// (0x00037c9f) main_apps_wheel_pane_t1

0xbba5,	// (0x00037cc2) list_wheel_apps_pane_g1

0xbbad,	// (0x00037cca) list_wheel_apps_pane_g2

0xbbb5,	// (0x00037cd2) list_wheel_apps_pane_g3

0xbbbd,	// (0x00037cda) list_wheel_apps_pane_g4

0xbbc7,	// (0x00037ce4) list_wheel_apps_pane_g5

0x0004,

0xfaa6,	// (0x0003bbc3) list_wheel_apps_pane_g

0x901a,	// (0x00035137) navi_icon_text_pane

0x94fa,	// (0x00035617) aid_fill_nsta

0xbbea,	// (0x00037d07) navi_icon_text_pane_g1

0xbbf6,	// (0x00037d13) navi_icon_text_pane_t1

0x8ead,	// (0x00034fca) list_set_graphic_pane_t1_ParamLimits

0x8ead,	// (0x00034fca) list_set_graphic_pane_t1

0xa593,	// (0x000366b0) popup_midp_note_alarm_window_t6_ParamLimits

0xa593,	// (0x000366b0) popup_midp_note_alarm_window_t6

0xa5a5,	// (0x000366c2) popup_midp_note_alarm_window_t7_ParamLimits

0xa5a5,	// (0x000366c2) popup_midp_note_alarm_window_t7

0xa5b7,	// (0x000366d4) popup_midp_note_alarm_window_t8_ParamLimits

0xa5b7,	// (0x000366d4) popup_midp_note_alarm_window_t8

0xa5c9,	// (0x000366e6) popup_midp_note_alarm_window_t9_ParamLimits

0xa5c9,	// (0x000366e6) popup_midp_note_alarm_window_t9

0xa5db,	// (0x000366f8) popup_midp_note_alarm_window_t10_ParamLimits

0xa5db,	// (0x000366f8) popup_midp_note_alarm_window_t10

0xa5ed,	// (0x0003670a) popup_midp_note_alarm_window_t11_ParamLimits

0xa5ed,	// (0x0003670a) popup_midp_note_alarm_window_t11

0xa5ff,	// (0x0003671c) scroll_pane_cp17_ParamLimits

0xa5ff,	// (0x0003671c) scroll_pane_cp17

0x5f26,	// (0x00032043) volume_small_pane_cp_g1

0x669b,	// (0x000327b8) volume_small_pane_cp_g2

0x66a4,	// (0x000327c1) volume_small_pane_cp_g3

0x66ad,	// (0x000327ca) volume_small_pane_cp_g4

0x66b6,	// (0x000327d3) volume_small_pane_cp_g5

0x66bf,	// (0x000327dc) volume_small_pane_cp_g6

0x66c8,	// (0x000327e5) volume_small_pane_cp_g7

0x66d1,	// (0x000327ee) volume_small_pane_cp_g8

0x66da,	// (0x000327f7) volume_small_pane_cp_g9

0x66e3,	// (0x00032800) volume_small_pane_cp_g10

0x9277,	// (0x00035394) midp_ticker_pane_g1_ParamLimits

0x9283,	// (0x000353a0) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003b850) midp_ticker_pane_g_ParamLimits

0x928f,	// (0x000353ac) midp_ticker_pane_t1_ParamLimits

0x9510,	// (0x0003562d) aid_fill_nsta_2

0x9e14,	// (0x00035f31) list_form2_midp_pane

0xaf58,	// (0x00037075) midp_editing_number_pane_ParamLimits

0xaf67,	// (0x00037084) midp_ticker_pane_ParamLimits

0xbc08,	// (0x00037d25) form2_midp_field_pane

0xbc2c,	// (0x00037d49) scroll_pane_cp51

0xbc4c,	// (0x00037d69) form2_midp_button_pane_ParamLimits

0xbc4c,	// (0x00037d69) form2_midp_button_pane

0xbc5e,	// (0x00037d7b) form2_midp_content_pane_ParamLimits

0xbc5e,	// (0x00037d7b) form2_midp_content_pane

0xbc78,	// (0x00037d95) form2_midp_field_choice_group_pane

0xbc80,	// (0x00037d9d) form2_midp_field_pane_g1

0xbc88,	// (0x00037da5) form2_midp_field_pane_g2

0xbc90,	// (0x00037dad) form2_midp_field_pane_g3

0xbc98,	// (0x00037db5) form2_midp_field_pane_g4

0x0003,

0xfacb,	// (0x0003bbe8) form2_midp_field_pane_g

0xbca0,	// (0x00037dbd) form2_midp_gauge_slider_pane

0xbca8,	// (0x00037dc5) form2_midp_gauge_wait_pane

0xbcb0,	// (0x00037dcd) form2_midp_image_pane_ParamLimits

0xbcb0,	// (0x00037dcd) form2_midp_image_pane

0xbccb,	// (0x00037de8) form2_midp_label_pane_ParamLimits

0xbccb,	// (0x00037de8) form2_midp_label_pane

0xbce4,	// (0x00037e01) form2_midp_label_pane_cp_ParamLimits

0xbce4,	// (0x00037e01) form2_midp_label_pane_cp

0xbd05,	// (0x00037e22) form2_midp_string_pane_ParamLimits

0xbd05,	// (0x00037e22) form2_midp_string_pane

0x66ec,	// (0x00032809) form2_midp_text_pane_ParamLimits

0x66ec,	// (0x00032809) form2_midp_text_pane

0xbd17,	// (0x00037e34) form2_midp_time_pane

0xbd27,	// (0x00037e44) input_focus_pane_cp51_ParamLimits

0xbd27,	// (0x00037e44) input_focus_pane_cp51

0xbd3f,	// (0x00037e5c) form2_midp_label_pane_t1_ParamLimits

0xbd3f,	// (0x00037e5c) form2_midp_label_pane_t1

0x6707,	// (0x00032824) form2_mdip_text_pane_t1_ParamLimits

0x6707,	// (0x00032824) form2_mdip_text_pane_t1

0x6725,	// (0x00032842) form2_midp_time_pane_t1

0xbd88,	// (0x00037ea5) form2_midp_gauge_slider_pane_t1

0xbd9a,	// (0x00037eb7) form2_midp_gauge_slider_pane_t2

0xbdac,	// (0x00037ec9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad4,	// (0x0003bbf1) form2_midp_gauge_slider_pane_t

0xbdbe,	// (0x00037edb) form2_midp_slider_pane

0xbdca,	// (0x00037ee7) form2_midp_gauge_wait_pane_t1

0xbdd8,	// (0x00037ef5) form2_midp_wait_pane_ParamLimits

0xbdd8,	// (0x00037ef5) form2_midp_wait_pane

0xbe03,	// (0x00037f20) list_single_2graphic_pane_cp4_ParamLimits

0xbe03,	// (0x00037f20) list_single_2graphic_pane_cp4

0x9b36,	// (0x00035c53) list_single_midp_graphic_pane_cp_ParamLimits

0x9b36,	// (0x00035c53) list_single_midp_graphic_pane_cp

0x78a8,	// (0x000339c5) list_highlight_pane_cp20

0xbe27,	// (0x00037f44) list_single_2graphic_pane_g1_cp4

0xbe2f,	// (0x00037f4c) list_single_2graphic_pane_g2_cp4

0xbe37,	// (0x00037f54) list_single_2graphic_pane_t1_cp4

0x7988,	// (0x00033aa5) list_highlight_pane_cp21

0xbe46,	// (0x00037f63) list_single_midp_graphic_pane_g4_cp

0xbe55,	// (0x00037f72) list_single_midp_graphic_pane_t1_cp

0xbe6a,	// (0x00037f87) form2_mdip_string_pane_t1_ParamLimits

0xbe6a,	// (0x00037f87) form2_mdip_string_pane_t1

0x78a8,	// (0x000339c5) bg_wml_button_pane_cp2

0x297c,	// (0x0002ea99) form2_midp_image_pane_g1

0x3952,	// (0x0002fa6f) list_double_large_graphic_pane_g5_ParamLimits

0x3952,	// (0x0002fa6f) list_double_large_graphic_pane_g5

0x91a2,	// (0x000352bf) midp_form_pane_ParamLimits

0x7988,	// (0x00033aa5) main_apps_wheel_pane_ParamLimits

0x5aa1,	// (0x00031bbe) popup_preview_window_ParamLimits

0x5aa1,	// (0x00031bbe) popup_preview_window

0x5c5c,	// (0x00031d79) popup_touch_info_window_ParamLimits

0x5c5c,	// (0x00031d79) popup_touch_info_window

0x5c7a,	// (0x00031d97) popup_touch_menu_window_ParamLimits

0x5c7a,	// (0x00031d97) popup_touch_menu_window

0x2972,	// (0x0002ea8f) bg_popup_sub_pane_cp6

0xbf63,	// (0x00038080) list_touch_menu_pane

0xbf6b,	// (0x00038088) list_single_touch_menu_pane_ParamLimits

0xbf6b,	// (0x00038088) list_single_touch_menu_pane

0xbf81,	// (0x0003809e) list_single_touch_menu_pane_t1

0x7988,	// (0x00033aa5) bg_popup_sub_pane_cp7_ParamLimits

0x7988,	// (0x00033aa5) bg_popup_sub_pane_cp7

0xbf8f,	// (0x000380ac) heading_sub_pane

0xbf97,	// (0x000380b4) list_touch_info_pane_ParamLimits

0xbf97,	// (0x000380b4) list_touch_info_pane

0xbfa6,	// (0x000380c3) list_single_touch_info_pane_ParamLimits

0xbfa6,	// (0x000380c3) list_single_touch_info_pane

0xbfb8,	// (0x000380d5) list_single_touch_info_pane_t1

0xbfc6,	// (0x000380e3) list_single_touch_info_pane_t2

0x0001,

0xfae2,	// (0x0003bbff) list_single_touch_info_pane_t

0x919a,	// (0x000352b7) bg_popup_heading_pane_cp

0xbfd4,	// (0x000380f1) heading_sub_pane_t1

0x9a5c,	// (0x00035b79) bg_popup_preview_window_pane_cp_ParamLimits

0x9a5c,	// (0x00035b79) bg_popup_preview_window_pane_cp

0xbf8f,	// (0x000380ac) heading_preview_pane

0xbf97,	// (0x000380b4) list_preview_pane_ParamLimits

0xbf97,	// (0x000380b4) list_preview_pane

0xbfe2,	// (0x000380ff) popup_preview_window_g1

0xbfa6,	// (0x000380c3) list_single_preview_pane_ParamLimits

0xbfa6,	// (0x000380c3) list_single_preview_pane

0xbfea,	// (0x00038107) list_single_preview_pane_g1

0xbff2,	// (0x0003810f) list_single_preview_pane_t1

0xbfb8,	// (0x000380d5) list_single_preview_pane_t2

0x0001,

0xfae7,	// (0x0003bc04) list_single_preview_pane_t

0xc000,	// (0x0003811d) bg_popup_heading_pane_cp2_ParamLimits

0xc000,	// (0x0003811d) bg_popup_heading_pane_cp2

0xc016,	// (0x00038133) heading_preview_pane_g1

0xc01e,	// (0x0003813b) heading_preview_pane_t1_ParamLimits

0xc01e,	// (0x0003813b) heading_preview_pane_t1

0x7a74,	// (0x00033b91) soft_indicator_pane_t1_ParamLimits

0x8188,	// (0x000342a5) scroll_pane_ParamLimits

0x898d,	// (0x00034aaa) scroll_sc2_left_pane

0x8996,	// (0x00034ab3) scroll_sc2_right_pane

0x89b5,	// (0x00034ad2) scroll_bg_pane_g1_ParamLimits

0x89ca,	// (0x00034ae7) scroll_bg_pane_g2_ParamLimits

0x89e2,	// (0x00034aff) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003b7db) scroll_bg_pane_g_ParamLimits

0x89b5,	// (0x00034ad2) scroll_handle_pane_g1_ParamLimits

0x8a04,	// (0x00034b21) scroll_handle_pane_g2_ParamLimits

0x89e2,	// (0x00034aff) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003b7e2) scroll_handle_pane_g_ParamLimits

0x5720,	// (0x0003183d) popup_choice_list_window_ParamLimits

0x5720,	// (0x0003183d) popup_choice_list_window

0x9932,	// (0x00035a4f) choice_list_pane

0x99b4,	// (0x00035ad1) cell_toolbar_pane_t1

0x99dc,	// (0x00035af9) toolbar_button_pane_ParamLimits

0xaab9,	// (0x00036bd6) ai_gene_pane_1_t2_ParamLimits

0xaab9,	// (0x00036bd6) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003ba0a) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003ba0a) ai_gene_pane_1_t

0xc03b,	// (0x00038158) scroll_sc2_left_pane_g1

0xc03b,	// (0x00038158) scroll_sc2_right_pane_g1

0x94be,	// (0x000355db) bg_popup_sub_pane_cp10

0xc045,	// (0x00038162) list_choice_list_pane

0xc05e,	// (0x0003817b) list_single_choice_list_pane_ParamLimits

0xc05e,	// (0x0003817b) list_single_choice_list_pane

0xc071,	// (0x0003818e) list_single_choice_list_pane_g1

0x83b9,	// (0x000344d6) list_single_choice_list_pane_t1_ParamLimits

0x83b9,	// (0x000344d6) list_single_choice_list_pane_t1

0xc079,	// (0x00038196) choice_list_pane_g1

0xc081,	// (0x0003819e) choice_list_pane_t1

0x2972,	// (0x0002ea8f) input_focus_pane_cp11

0x886a,	// (0x00034987) title_pane_stacon_g2_ParamLimits

0x886a,	// (0x00034987) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003b7c1) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003b7c1) title_pane_stacon_g

0x919a,	// (0x000352b7) cursor_press_pane

0x57cc,	// (0x000318e9) popup_fep_hwr_window_ParamLimits

0x57cc,	// (0x000318e9) popup_fep_hwr_window

0x5846,	// (0x00031963) popup_fep_vkb_window_ParamLimits

0x5846,	// (0x00031963) popup_fep_vkb_window

0xc08f,	// (0x000381ac) cursor_press_pane_g1

0x0002,

0xfb10,	// (0x0003bc2d) fep_vkb_side_pane_g_ParamLimits

0x6771,	// (0x0003288e) fep_hwr_candidate_pane_ParamLimits

0x6771,	// (0x0003288e) fep_hwr_candidate_pane

0x679b,	// (0x000328b8) fep_hwr_side_pane_ParamLimits

0x679b,	// (0x000328b8) fep_hwr_side_pane

0x67bb,	// (0x000328d8) fep_hwr_top_pane_ParamLimits

0x67bb,	// (0x000328d8) fep_hwr_top_pane

0x67d3,	// (0x000328f0) fep_hwr_write_pane_ParamLimits

0x67d3,	// (0x000328f0) fep_hwr_write_pane

0xfb10,	// (0x0003bc2d) fep_vkb_side_pane_g

0xc097,	// (0x000381b4) fep_hwr_top_pane_g1

0xc0a9,	// (0x000381c6) fep_hwr_top_pane_g2

0x680d,	// (0x0003292a) fep_hwr_top_pane_g3

0x0002,

0xfaec,	// (0x0003bc09) fep_hwr_top_pane_g

0x6822,	// (0x0003293f) fep_hwr_top_text_pane

0x8b84,	// (0x00034ca1) fep_hwr_top_text_pane_g1

0xc0df,	// (0x000381fc) fep_hwr_top_text_pane_t1

0x6918,	// (0x00032a35) fep_hwr_candidate_pane_g1

0xc332,	// (0x0003844f) fep_vkb_keypad_pane_g3_ParamLimits

0xc332,	// (0x0003844f) fep_vkb_keypad_pane_g3

0xc35a,	// (0x00038477) fep_vkb_keypad_pane_g4_ParamLimits

0xc35a,	// (0x00038477) fep_vkb_keypad_pane_g4

0xc3c9,	// (0x000384e6) fep_vkb_bottom_pane_g2_ParamLimits

0xc3c9,	// (0x000384e6) fep_vkb_bottom_pane_g2

0x0001,

0xfb17,	// (0x0003bc34) fep_vkb_bottom_pane_g_ParamLimits

0xfb17,	// (0x0003bc34) fep_vkb_bottom_pane_g

0xc03b,	// (0x00038158) cell_vkb_side_pane_g2

0x0001,

0xfb21,	// (0x0003bc3e) cell_vkb_side_pane_g

0xc454,	// (0x00038571) cell_vkb_side_pane_t1

0xc462,	// (0x0003857f) cell_vkb_side_pane_t1_copy1

0xc03b,	// (0x00038158) bg_fep_vkb_candidate_pane_g2

0xc58e,	// (0x000386ab) cell_vkb_candidate_pane_ParamLimits

0xc0ed,	// (0x0003820a) aid_size_cell_vkb_ParamLimits

0xc0ed,	// (0x0003820a) aid_size_cell_vkb

0xc58e,	// (0x000386ab) cell_vkb_candidate_pane

0x693f,	// (0x00032a5c) bg_popup_fep_shadow_pane_g1

0xc17b,	// (0x00038298) fep_vkb_bottom_pane_ParamLimits

0xc17b,	// (0x00038298) fep_vkb_bottom_pane

0xc1b1,	// (0x000382ce) fep_vkb_candidate_pane_ParamLimits

0xc1b1,	// (0x000382ce) fep_vkb_candidate_pane

0xc1cd,	// (0x000382ea) fep_vkb_keypad_pane_ParamLimits

0xc1cd,	// (0x000382ea) fep_vkb_keypad_pane

0xc213,	// (0x00038330) fep_vkb_side_pane_ParamLimits

0xc213,	// (0x00038330) fep_vkb_side_pane

0xc24f,	// (0x0003836c) fep_vkb_top_pane_ParamLimits

0xc24f,	// (0x0003836c) fep_vkb_top_pane

0xc28b,	// (0x000383a8) fep_vkb_top_pane_g1_ParamLimits

0xc28b,	// (0x000383a8) fep_vkb_top_pane_g1

0xc29a,	// (0x000383b7) fep_vkb_top_pane_g2_ParamLimits

0xc29a,	// (0x000383b7) fep_vkb_top_pane_g2

0xc2a9,	// (0x000383c6) fep_vkb_top_pane_g3_ParamLimits

0xc2a9,	// (0x000383c6) fep_vkb_top_pane_g3

0x0003,

0xfb07,	// (0x0003bc24) fep_vkb_top_pane_g_ParamLimits

0xfb07,	// (0x0003bc24) fep_vkb_top_pane_g

0xc2c7,	// (0x000383e4) fep_vkb_top_text_pane_ParamLimits

0xc2c7,	// (0x000383e4) fep_vkb_top_text_pane

0xc2d8,	// (0x000383f5) fep_vkb_side_pane_g1_ParamLimits

0xc2d8,	// (0x000383f5) fep_vkb_side_pane_g1

0xc321,	// (0x0003843e) grid_vkb_side_pane_ParamLimits

0xc321,	// (0x0003843e) grid_vkb_side_pane

0x6947,	// (0x00032a64) bg_popup_fep_shadow_pane_g2

0x6950,	// (0x00032a6d) bg_popup_fep_shadow_pane_g3

0x6958,	// (0x00032a75) bg_popup_fep_shadow_pane_g4

0x6961,	// (0x00032a7e) bg_popup_fep_shadow_pane_g5

0x696b,	// (0x00032a88) bg_popup_fep_shadow_pane_g6

0x6973,	// (0x00032a90) bg_popup_fep_shadow_pane_g7

0x8285,	// (0x000343a2) bg_popup_fep_shadow_pane_g8

0xc378,	// (0x00038495) grid_vkb_keypad_number_pane_ParamLimits

0xc378,	// (0x00038495) grid_vkb_keypad_number_pane

0xc388,	// (0x000384a5) grid_vkb_keypad_pane_ParamLimits

0xc388,	// (0x000384a5) grid_vkb_keypad_pane

0xc3ae,	// (0x000384cb) fep_vkb_bottom_pane_g1_ParamLimits

0xc3ae,	// (0x000384cb) fep_vkb_bottom_pane_g1

0xc3d7,	// (0x000384f4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3d7,	// (0x000384f4) grid_vkb_keypad_bottom_left_pane

0xc3ec,	// (0x00038509) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3ec,	// (0x00038509) grid_vkb_keypad_bottom_right_pane

0xc401,	// (0x0003851e) fep_vkb_top_text_pane_g1

0xc41c,	// (0x00038539) fep_vkb_top_text_pane_t1

0xc431,	// (0x0003854e) cell_vkb_side_pane_ParamLimits

0xc431,	// (0x0003854e) cell_vkb_side_pane

0xc03b,	// (0x00038158) cell_vkb_side_pane_g1

0xc470,	// (0x0003858d) cell_vkb_keypad_pane_ParamLimits

0xc470,	// (0x0003858d) cell_vkb_keypad_pane

0xc4e5,	// (0x00038602) cell_vkb_keypad_pane_g1

0x0008,

0xfb34,	// (0x0003bc51) bg_popup_fep_shadow_pane_g

0x6985,	// (0x00032aa2) cell_hwr_side_pane_g1

0x6985,	// (0x00032aa2) cell_hwr_side_pane_g2

0xc4ef,	// (0x0003860c) cell_vkb_keypad_pane_t1

0xc4fd,	// (0x0003861a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4fd,	// (0x0003861a) cell_vkb_keypad_bottom_left_pane

0xc51a,	// (0x00038637) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc51a,	// (0x00038637) cell_vkb_keypad_bottom_right_pane

0xc03b,	// (0x00038158) cell_vkb_keypad_bottom_left_pane_g1

0xc03b,	// (0x00038158) cell_vkb_keypad_bottom_right_pane_g1

0xc553,	// (0x00038670) cell_vkb_keypad_number_pane_ParamLimits

0xc553,	// (0x00038670) cell_vkb_keypad_number_pane

0xc572,	// (0x0003868f) cell_vkb_keypad_number_pane_g1

0xc57c,	// (0x00038699) cell_vkb_keypad_number_pane_g2

0xc585,	// (0x000386a2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb26,	// (0x0003bc43) cell_vkb_keypad_number_pane_g

0xc4ef,	// (0x0003860c) cell_vkb_keypad_number_pane_t1

0xc5a9,	// (0x000386c6) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0003bc64) cell_hwr_side_pane_g

0xc5c2,	// (0x000386df) cell_hwr_side_pane_t1

0x698f,	// (0x00032aac) cell_hwr_side_pane_t1_copy1

0x699d,	// (0x00032aba) cell_hwr_candidate_pane_g1

0x69cc,	// (0x00032ae9) cell_hwr_candidate_pane_t1

0xc03b,	// (0x00038158) cell_vkb_candidate_pane_g2

0xc606,	// (0x00038723) cell_vkb_candidate_pane_t1

0x6738,	// (0x00032855) bg_popup_fep_shadow_pane_ParamLimits

0x6738,	// (0x00032855) bg_popup_fep_shadow_pane

0x67ed,	// (0x0003290a) bg_fep_hwr_top_pane_g4

0xc0bb,	// (0x000381d8) bg_hwr_side_pane_g1_ParamLimits

0xc0bb,	// (0x000381d8) bg_hwr_side_pane_g1

0x685e,	// (0x0003297b) cell_hwr_side_pane_ParamLimits

0x685e,	// (0x0003297b) cell_hwr_side_pane

0x6899,	// (0x000329b6) fep_hwr_write_pane_g1_ParamLimits

0x6899,	// (0x000329b6) fep_hwr_write_pane_g1

0x68a6,	// (0x000329c3) fep_hwr_write_pane_g2_ParamLimits

0x68a6,	// (0x000329c3) fep_hwr_write_pane_g2

0x68b3,	// (0x000329d0) fep_hwr_write_pane_g3_ParamLimits

0x68b3,	// (0x000329d0) fep_hwr_write_pane_g3

0x68c1,	// (0x000329de) fep_hwr_write_pane_g4_ParamLimits

0x68c1,	// (0x000329de) fep_hwr_write_pane_g4

0x0005,

0xfaf3,	// (0x0003bc10) fep_hwr_write_pane_g_ParamLimits

0xfaf3,	// (0x0003bc10) fep_hwr_write_pane_g

0x67ed,	// (0x0003290a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67ed,	// (0x0003290a) bg_fep_hwr_candidate_pane_g2

0x68d6,	// (0x000329f3) cell_hwr_candidate_pane_ParamLimits

0x68d6,	// (0x000329f3) cell_hwr_candidate_pane

0x6918,	// (0x00032a35) fep_hwr_candidate_pane_g1_ParamLimits

0xc11b,	// (0x00038238) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc11b,	// (0x00038238) bg_popup_fep_shadow_pane_cp2

0xc2b9,	// (0x000383d6) fep_vkb_top_pane_g4_ParamLimits

0xc2b9,	// (0x000383d6) fep_vkb_top_pane_g4

0xc2ff,	// (0x0003841c) fep_vkb_side_pane_g2_ParamLimits

0xc2ff,	// (0x0003841c) fep_vkb_side_pane_g2

0x4d37,	// (0x00030e54) list_setting_pane_t4_ParamLimits

0x4d37,	// (0x00030e54) list_setting_pane_t4

0x4dd1,	// (0x00030eee) list_setting_number_pane_t5_ParamLimits

0x4dd1,	// (0x00030eee) list_setting_number_pane_t5

0x8bcb,	// (0x00034ce8) list_double_heading_pane_cp2_ParamLimits

0x8bcb,	// (0x00034ce8) list_double_heading_pane_cp2

0x8223,	// (0x00034340) list_double_heading_pane_g1_cp2_ParamLimits

0x8223,	// (0x00034340) list_double_heading_pane_g1_cp2

0x822f,	// (0x0003434c) list_double_heading_pane_g2_cp2_ParamLimits

0x822f,	// (0x0003434c) list_double_heading_pane_g2_cp2

0xc614,	// (0x00038731) list_double_heading_pane_t1_cp2_ParamLimits

0xc614,	// (0x00038731) list_double_heading_pane_t1_cp2

0xc62a,	// (0x00038747) list_double_heading_pane_t2_cp2_ParamLimits

0xc62a,	// (0x00038747) list_double_heading_pane_t2_cp2

0x296a,	// (0x0002ea87) aid_value_unit2

0x4807,	// (0x00030924) popup_preview_fixed_window

0x7c11,	// (0x00033d2e) bg_popup_preview_window_pane_cp02

0xc63c,	// (0x00038759) list_preview_fixed_pane

0xc682,	// (0x0003879f) list_empty_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_empty_pane_fp

0xc682,	// (0x0003879f) list_single_cale_day_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_single_cale_day_pane_fp

0xc682,	// (0x0003879f) list_single_graphic_heading_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_single_graphic_heading_pane_fp

0xc682,	// (0x0003879f) list_single_graphic_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_single_graphic_pane_fp

0xc682,	// (0x0003879f) list_single_heading_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_single_heading_pane_fp

0xc682,	// (0x0003879f) list_single_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_single_pane_fp

0xc697,	// (0x000387b4) list_single_pane_fp_g1_ParamLimits

0xc697,	// (0x000387b4) list_single_pane_fp_g1

0x69ea,	// (0x00032b07) list_single_pane_fp_g2_ParamLimits

0x69ea,	// (0x00032b07) list_single_pane_fp_g2

0x69f6,	// (0x00032b13) list_single_pane_fp_g3_ParamLimits

0x69f6,	// (0x00032b13) list_single_pane_fp_g3

0xc6a3,	// (0x000387c0) list_single_pane_fp_g4_ParamLimits

0xc6a3,	// (0x000387c0) list_single_pane_fp_g4

0x0003,

0xfb5a,	// (0x0003bc77) list_single_pane_fp_g_ParamLimits

0xfb5a,	// (0x0003bc77) list_single_pane_fp_g

0x6a0a,	// (0x00032b27) list_single_pane_fp_t1_ParamLimits

0x6a0a,	// (0x00032b27) list_single_pane_fp_t1

0x6a21,	// (0x00032b3e) list_single_graphic_pane_fp_g1_ParamLimits

0x6a21,	// (0x00032b3e) list_single_graphic_pane_fp_g1

0xc697,	// (0x000387b4) list_single_graphic_pane_fp_g2_ParamLimits

0xc697,	// (0x000387b4) list_single_graphic_pane_fp_g2

0x69ea,	// (0x00032b07) list_single_graphic_pane_fp_g3_ParamLimits

0x69ea,	// (0x00032b07) list_single_graphic_pane_fp_g3

0x69f6,	// (0x00032b13) list_single_graphic_pane_fp_g4_ParamLimits

0x69f6,	// (0x00032b13) list_single_graphic_pane_fp_g4

0xc6a3,	// (0x000387c0) list_single_graphic_pane_fp_g5_ParamLimits

0xc6a3,	// (0x000387c0) list_single_graphic_pane_fp_g5

0x0004,

0xfb63,	// (0x0003bc80) list_single_graphic_pane_fp_g_ParamLimits

0xfb63,	// (0x0003bc80) list_single_graphic_pane_fp_g

0x6a2d,	// (0x00032b4a) list_single_graphic_pane_fp_t1_ParamLimits

0x6a2d,	// (0x00032b4a) list_single_graphic_pane_fp_t1

0x6a21,	// (0x00032b3e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6a21,	// (0x00032b3e) list_single_graphic_heading_pane_fp_g1

0xc697,	// (0x000387b4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc697,	// (0x000387b4) list_single_graphic_heading_pane_fp_g2

0x69ea,	// (0x00032b07) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x69ea,	// (0x00032b07) list_single_graphic_heading_pane_fp_g3

0x69f6,	// (0x00032b13) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x69f6,	// (0x00032b13) list_single_graphic_heading_pane_fp_g4

0xc6a3,	// (0x000387c0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6a3,	// (0x000387c0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb63,	// (0x0003bc80) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0003bc80) list_single_graphic_heading_pane_fp_g

0x6a43,	// (0x00032b60) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6a43,	// (0x00032b60) list_single_graphic_heading_pane_fp_t1

0x6a59,	// (0x00032b76) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6a59,	// (0x00032b76) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6e,	// (0x0003bc8b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6e,	// (0x0003bc8b) list_single_graphic_heading_pane_fp_t

0x6a6b,	// (0x00032b88) list_single_cale_day_pane_fp_g1_ParamLimits

0x6a6b,	// (0x00032b88) list_single_cale_day_pane_fp_g1

0xc6af,	// (0x000387cc) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6af,	// (0x000387cc) list_single_cale_day_pane_fp_g2

0x84dc,	// (0x000345f9) list_single_cale_day_pane_fp_g3_ParamLimits

0x84dc,	// (0x000345f9) list_single_cale_day_pane_fp_g3

0x8504,	// (0x00034621) list_single_cale_day_pane_fp_g4_ParamLimits

0x8504,	// (0x00034621) list_single_cale_day_pane_fp_g4

0x8528,	// (0x00034645) list_single_cale_day_pane_fp_g5_ParamLimits

0x8528,	// (0x00034645) list_single_cale_day_pane_fp_g5

0x0004,

0xfb73,	// (0x0003bc90) list_single_cale_day_pane_fp_g_ParamLimits

0xfb73,	// (0x0003bc90) list_single_cale_day_pane_fp_g

0x854c,	// (0x00034669) list_single_cale_day_pane_fp_t1_ParamLimits

0x854c,	// (0x00034669) list_single_cale_day_pane_fp_t1

0x8572,	// (0x0003468f) list_single_cale_day_pane_fp_t2_ParamLimits

0x8572,	// (0x0003468f) list_single_cale_day_pane_fp_t2

0x858b,	// (0x000346a8) list_single_cale_day_pane_fp_t3_ParamLimits

0x858b,	// (0x000346a8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7e,	// (0x0003bc9b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7e,	// (0x0003bc9b) list_single_cale_day_pane_fp_t

0xc697,	// (0x000387b4) list_empty_pane_fp_g1_ParamLimits

0xc697,	// (0x000387b4) list_empty_pane_fp_g1

0x85a4,	// (0x000346c1) list_empty_pane_fp_t1

0x85b2,	// (0x000346cf) list_empty_pane_fp_t2

0x0001,

0xfb85,	// (0x0003bca2) list_empty_pane_fp_t

0xc697,	// (0x000387b4) list_single_heading_pane_fp_g1_ParamLimits

0xc697,	// (0x000387b4) list_single_heading_pane_fp_g1

0x69ea,	// (0x00032b07) list_single_heading_pane_fp_g2_ParamLimits

0x69ea,	// (0x00032b07) list_single_heading_pane_fp_g2

0x69f6,	// (0x00032b13) list_single_heading_pane_fp_g3_ParamLimits

0x69f6,	// (0x00032b13) list_single_heading_pane_fp_g3

0x0002,

0xfb8a,	// (0x0003bca7) list_single_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003bca7) list_single_heading_pane_fp_g

0x85c0,	// (0x000346dd) list_single_heading_pane_fp_t1_ParamLimits

0x85c0,	// (0x000346dd) list_single_heading_pane_fp_t1

0x85d2,	// (0x000346ef) list_single_heading_pane_fp_t2_ParamLimits

0x85d2,	// (0x000346ef) list_single_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x0003bcae) list_single_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x0003bcae) list_single_heading_pane_fp_t

0x8427,	// (0x00034544) aid_size_cell_fast

0x7b81,	// (0x00033c9e) soft_indicator_pane_cp1_t1

0x8464,	// (0x00034581) cell_app_pane_cp2_ParamLimits

0x8464,	// (0x00034581) cell_app_pane_cp2

0x675a,	// (0x00032877) fep_hwr_candidate_drop_down_list_pane

0x6932,	// (0x00032a4f) fep_hwr_candidate_pane_g3_ParamLimits

0x6932,	// (0x00032a4f) fep_hwr_candidate_pane_g3

0x357d,	// (0x0002f69a) fep_hwr_candidate_pane_g4_ParamLimits

0x357d,	// (0x0002f69a) fep_hwr_candidate_pane_g4

0x0002,

0xfb00,	// (0x0003bc1d) fep_hwr_candidate_pane_g_ParamLimits

0xfb00,	// (0x0003bc1d) fep_hwr_candidate_pane_g

0xc1a0,	// (0x000382bd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1a0,	// (0x000382bd) fep_vkb_candidate_drop_down_list_pane

0xc5b1,	// (0x000386ce) fep_vkb_candidate_pane_g3

0xc5b9,	// (0x000386d6) fep_vkb_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0003bc4a) fep_vkb_candidate_pane_g

0x699d,	// (0x00032aba) cell_hwr_candidate_pane_g1_ParamLimits

0x69ab,	// (0x00032ac8) cell_hwr_candidate_pane_g3_ParamLimits

0x69ab,	// (0x00032ac8) cell_hwr_candidate_pane_g3

0xd393,	// (0x000394b0) cell_hwr_candidate_pane_g4_ParamLimits

0xd393,	// (0x000394b0) cell_hwr_candidate_pane_g4

0x0002,

0xfb4c,	// (0x0003bc69) cell_hwr_candidate_pane_g_ParamLimits

0xfb4c,	// (0x0003bc69) cell_hwr_candidate_pane_g

0xc5d0,	// (0x000386ed) cell_vkb_candidate_pane_g3_ParamLimits

0xc5d0,	// (0x000386ed) cell_vkb_candidate_pane_g3

0xc5eb,	// (0x00038708) cell_vkb_candidate_pane_g4_ParamLimits

0xc5eb,	// (0x00038708) cell_vkb_candidate_pane_g4

0xc6bb,	// (0x000387d8) cell_app_pane_cp2_g1_ParamLimits

0xc6bb,	// (0x000387d8) cell_app_pane_cp2_g1

0xc6d9,	// (0x000387f6) cell_app_pane_cp2_g2_ParamLimits

0xc6d9,	// (0x000387f6) cell_app_pane_cp2_g2

0x0001,

0xfb96,	// (0x0003bcb3) cell_app_pane_cp2_g_ParamLimits

0xfb96,	// (0x0003bcb3) cell_app_pane_cp2_g

0xc6e5,	// (0x00038802) cell_app_pane_cp2_t1_ParamLimits

0xc6e5,	// (0x00038802) cell_app_pane_cp2_t1

0x8215,	// (0x00034332) grid_highlight_pane_cp1_ParamLimits

0x8215,	// (0x00034332) grid_highlight_pane_cp1

0x6aa3,	// (0x00032bc0) cell_hwr_candidate_pane_cp1_ParamLimits

0x6aa3,	// (0x00032bc0) cell_hwr_candidate_pane_cp1

0x699d,	// (0x00032aba) fep_hwr_candidate_drop_down_list_pane_g1

0x6ac2,	// (0x00032bdf) fep_hwr_candidate_drop_down_list_pane_g2

0x6acf,	// (0x00032bec) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9b,	// (0x0003bcb8) fep_hwr_candidate_drop_down_list_pane_g

0x6adc,	// (0x00032bf9) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ae5,	// (0x00032c02) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ae5,	// (0x00032c02) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6af2,	// (0x00032c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6af2,	// (0x00032c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6aff,	// (0x00032c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6aff,	// (0x00032c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6b0c,	// (0x00032c29) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6b0c,	// (0x00032c29) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6b27,	// (0x00032c44) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b27,	// (0x00032c44) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b42,	// (0x00032c5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b42,	// (0x00032c5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b5d,	// (0x00032c7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b5d,	// (0x00032c7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b78,	// (0x00032c95) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b78,	// (0x00032c95) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x0003bcbf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x0003bcbf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6f7,	// (0x00038814) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6f7,	// (0x00038814) cell_vkb_candidate_pane_cp1

0xc2b9,	// (0x000383d6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2b9,	// (0x000383d6) fep_vkb_candidate_drop_down_list_pane_g1

0xc717,	// (0x00038834) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc717,	// (0x00038834) fep_vkb_candidate_drop_down_list_pane_g2

0xc724,	// (0x00038841) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc724,	// (0x00038841) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0003bcd0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0003bcd0) fep_vkb_candidate_drop_down_list_pane_g

0xc731,	// (0x0003884e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc731,	// (0x0003884e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc73e,	// (0x0003885b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc73e,	// (0x0003885b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc74b,	// (0x00038868) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc74b,	// (0x00038868) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc757,	// (0x00038874) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc757,	// (0x00038874) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc763,	// (0x00038880) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc763,	// (0x00038880) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc784,	// (0x000388a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc784,	// (0x000388a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7a5,	// (0x000388c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7a5,	// (0x000388c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7c6,	// (0x000388e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7c6,	// (0x000388e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7e7,	// (0x00038904) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7e7,	// (0x00038904) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0003bcd7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0003bcd7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x78b2,	// (0x000339cf) title_pane_g1_ParamLimits

0x78bf,	// (0x000339dc) title_pane_g2_ParamLimits

0xf529,	// (0x0003b646) title_pane_g_ParamLimits

0x8b74,	// (0x00034c91) aid_call2_pane

0x8b7c,	// (0x00034c99) aid_call_pane

0x8b84,	// (0x00034ca1) popup_clock_analogue_window_g1

0x8b84,	// (0x00034ca1) popup_clock_analogue_window_g2

0x5233,	// (0x00031350) popup_clock_analogue_window_g3

0x523c,	// (0x00031359) popup_clock_analogue_window_g4

0x297c,	// (0x0002ea99) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003b7f0) popup_clock_analogue_window_g

0x5244,	// (0x00031361) popup_clock_analogue_window_t1

0x5252,	// (0x0003136f) clock_digital_number_pane_ParamLimits

0x5252,	// (0x0003136f) clock_digital_number_pane

0x525e,	// (0x0003137b) clock_digital_number_pane_cp02_ParamLimits

0x525e,	// (0x0003137b) clock_digital_number_pane_cp02

0x526a,	// (0x00031387) clock_digital_number_pane_cp03_ParamLimits

0x526a,	// (0x00031387) clock_digital_number_pane_cp03

0x5276,	// (0x00031393) clock_digital_number_pane_cp04_ParamLimits

0x5276,	// (0x00031393) clock_digital_number_pane_cp04

0x5282,	// (0x0003139f) clock_digital_separator_pane_ParamLimits

0x5282,	// (0x0003139f) clock_digital_separator_pane

0x528e,	// (0x000313ab) popup_clock_digital_window_t1_ParamLimits

0x528e,	// (0x000313ab) popup_clock_digital_window_t1

0x297c,	// (0x0002ea99) clock_digital_number_pane_g1

0x297c,	// (0x0002ea99) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003b7fb) clock_digital_number_pane_g

0x297c,	// (0x0002ea99) clock_digital_separator_pane_g1

0x297c,	// (0x0002ea99) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003b7fb) clock_digital_separator_pane_g

0x94fa,	// (0x00035617) aid_fill_nsta_ParamLimits

0x9646,	// (0x00035763) indicator_nsta_pane_ParamLimits

0x97bf,	// (0x000358dc) popup_clock_analogue_window

0x97bf,	// (0x000358dc) popup_clock_digital_window

0xba16,	// (0x00037b33) grid_indicator_nsta_pane_ParamLimits

0xba3f,	// (0x00037b5c) clock_nsta_pane_t2

0x0001,

0xfa80,	// (0x0003bb9d) clock_nsta_pane_t

0x51f7,	// (0x00031314) aid_size_max_handle

0x5201,	// (0x0003131e) aid_size_min_handle

0x919a,	// (0x000352b7) editor_scroll_pane

0xc802,	// (0x0003891f) ex_editor_pane

0x8395,	// (0x000344b2) scroll_pane_cp13

0x81b4,	// (0x000342d1) scroll_pane_cp14

0x8bb3,	// (0x00034cd0) scroll_pane_cp36

0x8bdf,	// (0x00034cfc) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bdf,	// (0x00034cfc) list_single_graphic_hl_pane_cp2

0xafb9,	// (0x000370d6) list_single_graphic_hl_pane_ParamLimits

0xafb9,	// (0x000370d6) list_single_graphic_hl_pane

0x85e8,	// (0x00034705) aid_size_min_hl_cp1

0xc80a,	// (0x00038927) list_highlight_pane_cp34_ParamLimits

0xc80a,	// (0x00038927) list_highlight_pane_cp34

0xc81b,	// (0x00038938) list_single_graphic_hl_pane_g1_ParamLimits

0xc81b,	// (0x00038938) list_single_graphic_hl_pane_g1

0x85f1,	// (0x0003470e) list_single_graphic_hl_pane_g2_ParamLimits

0x85f1,	// (0x0003470e) list_single_graphic_hl_pane_g2

0x85f1,	// (0x0003470e) list_single_graphic_hl_pane_g3_ParamLimits

0x85f1,	// (0x0003470e) list_single_graphic_hl_pane_g3

0x85fd,	// (0x0003471a) list_single_graphic_hl_pane_g4_ParamLimits

0x85fd,	// (0x0003471a) list_single_graphic_hl_pane_g4

0x8609,	// (0x00034726) list_single_graphic_hl_pane_g5_ParamLimits

0x8609,	// (0x00034726) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x0003bce8) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x0003bce8) list_single_graphic_hl_pane_g

0x861d,	// (0x0003473a) list_single_graphic_hl_pane_t1_ParamLimits

0x861d,	// (0x0003473a) list_single_graphic_hl_pane_t1

0xc828,	// (0x00038945) aid_size_min_hl_cp2

0xc831,	// (0x0003894e) list_highlight_pane_cp34_cp2_ParamLimits

0xc831,	// (0x0003894e) list_highlight_pane_cp34_cp2

0xc81b,	// (0x00038938) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00038938) list_single_graphic_hl_pane_g1_cp2

0xc83e,	// (0x0003895b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc83e,	// (0x0003895b) list_single_graphic_hl_pane_g2_cp2

0xc84a,	// (0x00038967) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc84a,	// (0x00038967) list_single_graphic_hl_pane_g3_cp2

0xc858,	// (0x00038975) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc858,	// (0x00038975) list_single_graphic_hl_pane_g4_cp2

0xc864,	// (0x00038981) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc864,	// (0x00038981) list_single_graphic_hl_pane_g5_cp2

0x55cc,	// (0x000316e9) control_pane_g4_ParamLimits

0x55cc,	// (0x000316e9) control_pane_g4

0x94be,	// (0x000355db) bg_popup_sub_pane_cp10_ParamLimits

0xc045,	// (0x00038162) list_choice_list_pane_ParamLimits

0xc054,	// (0x00038171) scroll_pane_cp23

0x7c11,	// (0x00033d2e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc63c,	// (0x00038759) list_preview_fixed_pane_ParamLimits

0xc652,	// (0x0003876f) list_preview_fixed_pane_cp_ParamLimits

0xc652,	// (0x0003876f) list_preview_fixed_pane_cp

0xc65e,	// (0x0003877b) popup_preview_fixed_window_g1_ParamLimits

0xc65e,	// (0x0003877b) popup_preview_fixed_window_g1

0xc66a,	// (0x00038787) popup_preview_fixed_window_g2_ParamLimits

0xc66a,	// (0x00038787) popup_preview_fixed_window_g2

0x0002,

0xfb53,	// (0x0003bc70) popup_preview_fixed_window_g_ParamLimits

0xfb53,	// (0x0003bc70) popup_preview_fixed_window_g

0x516b,	// (0x00031288) aid_navi_side_left_pane_ParamLimits

0x5180,	// (0x0003129d) aid_navi_side_right_pane_ParamLimits

0x5198,	// (0x000312b5) navi_icon_pane_stacon_ParamLimits

0x51ac,	// (0x000312c9) navi_navi_pane_stacon_ParamLimits

0x5198,	// (0x000312b5) navi_text_pane_stacon_ParamLimits

0x46c8,	// (0x000307e5) main_text_info_pane

0xc88e,	// (0x000389ab) listscroll_text_info_pane

0xc896,	// (0x000389b3) list_text_info_pane_ParamLimits

0xc896,	// (0x000389b3) list_text_info_pane

0xc8a5,	// (0x000389c2) scroll_pane_cp24_ParamLimits

0xc8a5,	// (0x000389c2) scroll_pane_cp24

0xc8c3,	// (0x000389e0) list_text_info_pane_t1_ParamLimits

0xc8c3,	// (0x000389e0) list_text_info_pane_t1

0x573e,	// (0x0003185b) popup_fast_swap2_window_ParamLimits

0x573e,	// (0x0003185b) popup_fast_swap2_window

0xc8f4,	// (0x00038a11) aid_size_cell_fast2

0x2972,	// (0x0002ea8f) bg_popup_window_pane_cp17

0x9e48,	// (0x00035f65) heading_pane_cp2

0x9e50,	// (0x00035f6d) listscroll_fast2_pane

0xc8fe,	// (0x00038a1b) grid_fast2_pane

0xc908,	// (0x00038a25) listscroll_fast2_pane_g1

0xc910,	// (0x00038a2d) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x0003bcf3) listscroll_fast2_pane_g

0x8395,	// (0x000344b2) scroll_pane_cp26

0xc91a,	// (0x00038a37) cell_fast2_pane_ParamLimits

0xc91a,	// (0x00038a37) cell_fast2_pane

0xc92f,	// (0x00038a4c) cell_fast2_pane_g1

0xc938,	// (0x00038a55) cell_fast2_pane_g2

0xc941,	// (0x00038a5e) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x0003bcf8) cell_fast2_pane_g

0x7f71,	// (0x0003408e) grid_highlight_pane_cp9

0x56fc,	// (0x00031819) main_eswt_pane_ParamLimits

0x56fc,	// (0x00031819) main_eswt_pane

0xc8ba,	// (0x000389d7) list_single_text_info_pane

0xc949,	// (0x00038a66) eswt_ctrl_button_pane

0xc949,	// (0x00038a66) eswt_ctrl_canvas_pane

0xc951,	// (0x00038a6e) eswt_ctrl_combo_pane

0xc949,	// (0x00038a66) eswt_ctrl_default_pane

0xc949,	// (0x00038a66) eswt_ctrl_label_pane

0xc959,	// (0x00038a76) eswt_ctrl_wait_pane

0xc961,	// (0x00038a7e) eswt_shell_pane

0x2972,	// (0x0002ea8f) listscroll_eswt_app_pane

0xc981,	// (0x00038a9e) popup_eswt_tasktip_window_ParamLimits

0xc981,	// (0x00038a9e) popup_eswt_tasktip_window

0x9a5c,	// (0x00035b79) bg_popup_window_pane_cp18

0xc992,	// (0x00038aaf) eswt_control_pane_g1_ParamLimits

0xc992,	// (0x00038aaf) eswt_control_pane_g1

0xc99f,	// (0x00038abc) eswt_control_pane_g2_ParamLimits

0xc99f,	// (0x00038abc) eswt_control_pane_g2

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_ParamLimits

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_ParamLimits

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x0003bcff) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x0003bcff) eswt_control_pane_g

0x8215,	// (0x00034332) bg_button_pane_ParamLimits

0x8215,	// (0x00034332) bg_button_pane

0x7f86,	// (0x000340a3) common_borders_pane_copy2_ParamLimits

0x7f86,	// (0x000340a3) common_borders_pane_copy2

0xc9c6,	// (0x00038ae3) control_button_pane_g1_ParamLimits

0xc9c6,	// (0x00038ae3) control_button_pane_g1

0xc9d2,	// (0x00038aef) control_button_pane_g2_ParamLimits

0xc9d2,	// (0x00038aef) control_button_pane_g2

0xc9de,	// (0x00038afb) control_button_pane_g3_ParamLimits

0xc9de,	// (0x00038afb) control_button_pane_g3

0x0002,

0xfbeb,	// (0x0003bd08) control_button_pane_g_ParamLimits

0xfbeb,	// (0x0003bd08) control_button_pane_g

0xc9f2,	// (0x00038b0f) control_button_pane_t1

0xca00,	// (0x00038b1d) control_button_pane_t2

0x0001,

0xfbf2,	// (0x0003bd0f) control_button_pane_t

0x99e8,	// (0x00035b05) bg_button_pane_g1

0x99f8,	// (0x00035b15) bg_button_pane_g2

0x99f0,	// (0x00035b0d) bg_button_pane_g3

0x9a08,	// (0x00035b25) bg_button_pane_g4

0x9a00,	// (0x00035b1d) bg_button_pane_g5

0x9a10,	// (0x00035b2d) bg_button_pane_g6

0x9a18,	// (0x00035b35) bg_button_pane_g7

0x9a28,	// (0x00035b45) bg_button_pane_g8

0x9a20,	// (0x00035b3d) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003b95e) bg_button_pane_g

0xc000,	// (0x0003811d) common_borders_pane_ParamLimits

0xc000,	// (0x0003811d) common_borders_pane

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy1_ParamLimits

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy1

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy1_ParamLimits

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy1

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy1_ParamLimits

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy1

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy1_ParamLimits

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy1

0xc03b,	// (0x00038158) bg_eswt_ctrl_canvas_pane_g1

0xc000,	// (0x0003811d) common_borders_pane_cp2_ParamLimits

0xc000,	// (0x0003811d) common_borders_pane_cp2

0xc000,	// (0x0003811d) common_borders_pane_cp3_ParamLimits

0xc000,	// (0x0003811d) common_borders_pane_cp3

0xca0e,	// (0x00038b2b) separator_horizontal_pane

0xca16,	// (0x00038b33) separator_vertical_pane

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy2_ParamLimits

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy2

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy2_ParamLimits

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy2

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy2_ParamLimits

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy2

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy2_ParamLimits

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy2

0x2972,	// (0x0002ea8f) common_borders_pane_cp4

0xca1f,	// (0x00038b3c) separator_horizontal_pane_g1

0xca28,	// (0x00038b45) separator_horizontal_pane_g2

0xca31,	// (0x00038b4e) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x0003bd14) separator_horizontal_pane_g

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy3_ParamLimits

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy3

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy3_ParamLimits

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy3

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy3_ParamLimits

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy3

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy3_ParamLimits

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy3

0x2972,	// (0x0002ea8f) common_borders_pane_cp5

0xca3a,	// (0x00038b57) separator_vertical_pane_g1

0xca43,	// (0x00038b60) separator_vertical_pane_g2

0xca4c,	// (0x00038b69) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x0003bd1b) separator_vertical_pane_g

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy4_ParamLimits

0xc992,	// (0x00038aaf) eswt_control_pane_g1_copy4

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy4_ParamLimits

0xc99f,	// (0x00038abc) eswt_control_pane_g2_copy4

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy4_ParamLimits

0xc9ac,	// (0x00038ac9) eswt_control_pane_g3_copy4

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy4_ParamLimits

0xc9b9,	// (0x00038ad6) eswt_control_pane_g4_copy4

0xca55,	// (0x00038b72) eswt_ctrl_combo_button_pane

0xca5d,	// (0x00038b7a) eswt_ctrl_input_pane

0xca65,	// (0x00038b82) popup_choice_list_window_cp70

0xca6d,	// (0x00038b8a) eswt_ctrl_input_pane_t1

0x2972,	// (0x0002ea8f) input_focus_pane_cp70

0xc000,	// (0x0003811d) bg_button_pane_cp70_ParamLimits

0xc000,	// (0x0003811d) bg_button_pane_cp70

0xca7b,	// (0x00038b98) eswt_ctrl_combo_button_pane_g1

0xca83,	// (0x00038ba0) wait_bar_pane_cp70

0x9a5c,	// (0x00035b79) bg_popup_window_pane_cp70_ParamLimits

0x9a5c,	// (0x00035b79) bg_popup_window_pane_cp70

0xca8b,	// (0x00038ba8) popup_eswt_tasktip_window_t1

0xcaa1,	// (0x00038bbe) wait_bar_pane_cp71_ParamLimits

0xcaa1,	// (0x00038bbe) wait_bar_pane_cp71

0xcaad,	// (0x00038bca) grid_eswt_app_pane

0x898d,	// (0x00034aaa) scroll_pane_cp70

0xcab6,	// (0x00038bd3) cell_eswt_app_pane_ParamLimits

0xcab6,	// (0x00038bd3) cell_eswt_app_pane

0xcae6,	// (0x00038c03) cell_eswt_app_pane_g1_ParamLimits

0xcae6,	// (0x00038c03) cell_eswt_app_pane_g1

0xcb15,	// (0x00038c32) cell_eswt_app_pane_g2_ParamLimits

0xcb15,	// (0x00038c32) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x0003bd22) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x0003bd22) cell_eswt_app_pane_g

0xcb3e,	// (0x00038c5b) cell_eswt_app_pane_t1_ParamLimits

0xcb3e,	// (0x00038c5b) cell_eswt_app_pane_t1

0xcb70,	// (0x00038c8d) grid_highlight_pane_cp70_ParamLimits

0xcb70,	// (0x00038c8d) grid_highlight_pane_cp70

0x906f,	// (0x0003518c) set_content_pane_g1

0x9445,	// (0x00035562) status_small_volume_pane

0x6b93,	// (0x00032cb0) status_small_volume_pane_g1

0x6b9b,	// (0x00032cb8) volume_small2_pane

0x6ba4,	// (0x00032cc1) volume_small2_pane_g1

0x6bad,	// (0x00032cca) volume_small2_pane_g2

0x6bb6,	// (0x00032cd3) volume_small2_pane_g3

0x6bbf,	// (0x00032cdc) volume_small2_pane_g4

0x6bc8,	// (0x00032ce5) volume_small2_pane_g5

0x6bd1,	// (0x00032cee) volume_small2_pane_g6

0x6bda,	// (0x00032cf7) volume_small2_pane_g7

0x6be3,	// (0x00032d00) volume_small2_pane_g8

0x6bec,	// (0x00032d09) volume_small2_pane_g9

0x6bf5,	// (0x00032d12) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x0003bd27) volume_small2_pane_g

0xc401,	// (0x0003851e) fep_vkb_top_text_pane_g1_ParamLimits

0xc41c,	// (0x00038539) fep_vkb_top_text_pane_t1_ParamLimits

0xc676,	// (0x00038793) popup_preview_fixed_window_g3_ParamLimits

0xc676,	// (0x00038793) popup_preview_fixed_window_g3

0x5bef,	// (0x00031d0c) popup_toolbar_trans_pane

0xadc0,	// (0x00036edd) aid_height_set_list_ParamLimits

0xadd1,	// (0x00036eee) aid_size_parent_ParamLimits

0x94be,	// (0x000355db) list_highlight_pane_cp2_ParamLimits

0x906f,	// (0x0003518c) set_content_pane_g1_ParamLimits

0x624c,	// (0x00032369) list_single_image_pane_ParamLimits

0x624c,	// (0x00032369) list_single_image_pane

0xcb7c,	// (0x00038c99) aid_size_cell_image_ParamLimits

0xcb7c,	// (0x00038c99) aid_size_cell_image

0xcb89,	// (0x00038ca6) grid_single_image_pane_ParamLimits

0xcb89,	// (0x00038ca6) grid_single_image_pane

0xb541,	// (0x0003765e) list_single_image_pane_g1_ParamLimits

0xb541,	// (0x0003765e) list_single_image_pane_g1

0xcb95,	// (0x00038cb2) list_single_image_pane_g2_ParamLimits

0xcb95,	// (0x00038cb2) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x0003bd3c) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x0003bd3c) list_single_image_pane_g

0xcba9,	// (0x00038cc6) list_single_image_pane_t1_ParamLimits

0xcba9,	// (0x00038cc6) list_single_image_pane_t1

0xcbbf,	// (0x00038cdc) cell_image_list_pane_ParamLimits

0xcbbf,	// (0x00038cdc) cell_image_list_pane

0xcbd3,	// (0x00038cf0) cell_image_list_pane_g1

0xcbdc,	// (0x00038cf9) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x0003bd41) cell_image_list_pane_g

0xcbe5,	// (0x00038d02) aid_size_cell_tb_trans_pane

0x8215,	// (0x00034332) bg_tb_trans_pane

0xcbf7,	// (0x00038d14) grid_tb_trans_pane

0x99e8,	// (0x00035b05) bg_tb_trans_pane_g1

0x99f8,	// (0x00035b15) bg_tb_trans_pane_g2

0x99f0,	// (0x00035b0d) bg_tb_trans_pane_g3

0x9a08,	// (0x00035b25) bg_tb_trans_pane_g4

0x9a00,	// (0x00035b1d) bg_tb_trans_pane_g5

0x9a28,	// (0x00035b45) bg_tb_trans_pane_g6

0x9a20,	// (0x00035b3d) bg_tb_trans_pane_g7

0x9a10,	// (0x00035b2d) bg_tb_trans_pane_g8

0x9a18,	// (0x00035b35) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x0003bd46) bg_tb_trans_pane_g

0xcc0b,	// (0x00038d28) cell_toolbar_trans_pane_ParamLimits

0xcc0b,	// (0x00038d28) cell_toolbar_trans_pane

0xc03b,	// (0x00038158) cell_toolbar_trans_pane_g1

0xbc10,	// (0x00037d2d) list_form2_midp_pane_t1

0xbc1e,	// (0x00037d3b) list_form2_midp_pane_t2

0x0001,

0xfac6,	// (0x0003bbe3) list_form2_midp_pane_t

0xbc2c,	// (0x00037d49) scroll_pane_cp51_ParamLimits

0xbde8,	// (0x00037f05) form2_midp_wait_pane_g1

0xbdf1,	// (0x00037f0e) form2_midp_wait_pane_g2

0xbdfa,	// (0x00037f17) form2_midp_wait_pane_g3

0x0002,

0xfadb,	// (0x0003bbf8) form2_midp_wait_pane_g

0x7988,	// (0x00033aa5) list_highlight_pane_cp21_ParamLimits

0xbe46,	// (0x00037f63) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe55,	// (0x00037f72) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x61ed,	// (0x0003230a) list_single_2graphic_im_pane_ParamLimits

0x61ed,	// (0x0003230a) list_single_2graphic_im_pane

0xcc31,	// (0x00038d4e) list_single_2graphic_im_pane_g1_ParamLimits

0xcc31,	// (0x00038d4e) list_single_2graphic_im_pane_g1

0xcc42,	// (0x00038d5f) list_single_2graphic_im_pane_g2_ParamLimits

0xcc42,	// (0x00038d5f) list_single_2graphic_im_pane_g2

0xcc4e,	// (0x00038d6b) list_single_2graphic_im_pane_g3_ParamLimits

0xcc4e,	// (0x00038d6b) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x0003bd59) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x0003bd59) list_single_2graphic_im_pane_g

0xcc6e,	// (0x00038d8b) list_single_2graphic_im_pane_t1_ParamLimits

0xcc6e,	// (0x00038d8b) list_single_2graphic_im_pane_t1

0xc682,	// (0x0003879f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc682,	// (0x0003879f) list_single_graphic_2heading_pane_fp

0x6a21,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6a21,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_g1

0xc697,	// (0x000387b4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc697,	// (0x000387b4) list_single_graphic_2heading_pane_fp_g2

0x69ea,	// (0x00032b07) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x69ea,	// (0x00032b07) list_single_graphic_2heading_pane_fp_g3

0x69f6,	// (0x00032b13) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x69f6,	// (0x00032b13) list_single_graphic_2heading_pane_fp_g4

0xc6a3,	// (0x000387c0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6a3,	// (0x000387c0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb63,	// (0x0003bc80) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0003bc80) list_single_graphic_2heading_pane_fp_g

0x8633,	// (0x00034750) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8633,	// (0x00034750) list_single_graphic_2heading_pane_fp_t1

0x6a59,	// (0x00032b76) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6a59,	// (0x00032b76) list_single_graphic_2heading_pane_fp_t2

0x8649,	// (0x00034766) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8649,	// (0x00034766) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x0003bd62) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x0003bd62) list_single_graphic_2heading_pane_fp_t

0xc0c7,	// (0x000381e4) fep_hwr_write_pane_g5_ParamLimits

0xc0c7,	// (0x000381e4) fep_hwr_write_pane_g5

0xc0d3,	// (0x000381f0) fep_hwr_write_pane_g6_ParamLimits

0xc0d3,	// (0x000381f0) fep_hwr_write_pane_g6

0xc961,	// (0x00038a7e) eswt_shell_pane_ParamLimits

0x9a5c,	// (0x00035b79) bg_popup_window_pane_cp18_ParamLimits

0xad19,	// (0x00036e36) heading_pane_cp70

0xca8b,	// (0x00038ba8) popup_eswt_tasktip_window_t1_ParamLimits

0x954f,	// (0x0003566c) aid_touch_tab_arrow_left

0x955e,	// (0x0003567b) aid_touch_tab_arrow_right

0x78d0,	// (0x000339ed) title_pane_g3_ParamLimits

0x78d0,	// (0x000339ed) title_pane_g3

0x81d4,	// (0x000342f1) set_value_pane_g1

0x5bef,	// (0x00031d0c) popup_toolbar_trans_pane_ParamLimits

0xcbe5,	// (0x00038d02) aid_size_cell_tb_trans_pane_ParamLimits

0x8215,	// (0x00034332) bg_tb_trans_pane_ParamLimits

0xcbf7,	// (0x00038d14) grid_tb_trans_pane_ParamLimits

0x7c11,	// (0x00033d2e) cont_note_pane_ParamLimits

0x7c11,	// (0x00033d2e) cont_note_pane

0x7f86,	// (0x000340a3) cont_snote2_single_text_pane_ParamLimits

0x7f86,	// (0x000340a3) cont_snote2_single_text_pane

0x7f86,	// (0x000340a3) cont_snote2_single_graphic_pane_ParamLimits

0x7f86,	// (0x000340a3) cont_snote2_single_graphic_pane

0xa077,	// (0x00036194) cont_note_wait_pane_ParamLimits

0xa077,	// (0x00036194) cont_note_wait_pane

0xa077,	// (0x00036194) cont_note_image_pane_ParamLimits

0xa077,	// (0x00036194) cont_note_image_pane

0xcc9f,	// (0x00038dbc) popup_note2_window_g1_ParamLimits

0xcc9f,	// (0x00038dbc) popup_note2_window_g1

0xccd0,	// (0x00038ded) popup_note2_window_t1_ParamLimits

0xccd0,	// (0x00038ded) popup_note2_window_t1

0xcd15,	// (0x00038e32) popup_note2_window_t2_ParamLimits

0xcd15,	// (0x00038e32) popup_note2_window_t2

0xcd5a,	// (0x00038e77) popup_note2_window_t3_ParamLimits

0xcd5a,	// (0x00038e77) popup_note2_window_t3

0xcd9f,	// (0x00038ebc) popup_note2_window_t4_ParamLimits

0xcd9f,	// (0x00038ebc) popup_note2_window_t4

0x7c95,	// (0x00033db2) popup_note2_window_t5_ParamLimits

0x7c95,	// (0x00033db2) popup_note2_window_t5

0x0004,

0xfc51,	// (0x0003bd6e) popup_note2_window_t_ParamLimits

0xfc51,	// (0x0003bd6e) popup_note2_window_t

0xcdce,	// (0x00038eeb) popup_note2_image_window_g1_ParamLimits

0xcdce,	// (0x00038eeb) popup_note2_image_window_g1

0xcdda,	// (0x00038ef7) popup_note2_image_window_g2_ParamLimits

0xcdda,	// (0x00038ef7) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x0003bd79) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x0003bd79) popup_note2_image_window_g

0xcdec,	// (0x00038f09) popup_note2_image_window_t1_ParamLimits

0xcdec,	// (0x00038f09) popup_note2_image_window_t1

0xce04,	// (0x00038f21) popup_note2_image_window_t2_ParamLimits

0xce04,	// (0x00038f21) popup_note2_image_window_t2

0xce1c,	// (0x00038f39) popup_note2_image_window_t3_ParamLimits

0xce1c,	// (0x00038f39) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x0003bd7e) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x0003bd7e) popup_note2_image_window_t

0xa085,	// (0x000361a2) popup_note2_wait_window_g1_ParamLimits

0xa085,	// (0x000361a2) popup_note2_wait_window_g1

0xce38,	// (0x00038f55) popup_note2_wait_window_g2_ParamLimits

0xce38,	// (0x00038f55) popup_note2_wait_window_g2

0xa09d,	// (0x000361ba) popup_note2_wait_window_g3_ParamLimits

0xa09d,	// (0x000361ba) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x0003bd85) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x0003bd85) popup_note2_wait_window_g

0xce44,	// (0x00038f61) popup_note2_wait_window_t1_ParamLimits

0xce44,	// (0x00038f61) popup_note2_wait_window_t1

0xce62,	// (0x00038f7f) popup_note2_wait_window_t2_ParamLimits

0xce62,	// (0x00038f7f) popup_note2_wait_window_t2

0xce80,	// (0x00038f9d) popup_note2_wait_window_t3_ParamLimits

0xce80,	// (0x00038f9d) popup_note2_wait_window_t3

0xce92,	// (0x00038faf) popup_note2_wait_window_t4_ParamLimits

0xce92,	// (0x00038faf) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x0003bd8c) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x0003bd8c) popup_note2_wait_window_t

0xcea4,	// (0x00038fc1) wait_bar2_pane_ParamLimits

0xcea4,	// (0x00038fc1) wait_bar2_pane

0xcebc,	// (0x00038fd9) popup_snote2_single_text_window_g1_ParamLimits

0xcebc,	// (0x00038fd9) popup_snote2_single_text_window_g1

0xcee4,	// (0x00039001) popup_snote2_single_text_window_t1_ParamLimits

0xcee4,	// (0x00039001) popup_snote2_single_text_window_t1

0xcf30,	// (0x0003904d) popup_snote2_single_text_window_t2_ParamLimits

0xcf30,	// (0x0003904d) popup_snote2_single_text_window_t2

0xcf7c,	// (0x00039099) popup_snote2_single_text_window_t3_ParamLimits

0xcf7c,	// (0x00039099) popup_snote2_single_text_window_t3

0xcfbd,	// (0x000390da) popup_snote2_single_text_window_t4_ParamLimits

0xcfbd,	// (0x000390da) popup_snote2_single_text_window_t4

0xcff3,	// (0x00039110) popup_snote2_single_text_window_t5_ParamLimits

0xcff3,	// (0x00039110) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x0003bd95) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x0003bd95) popup_snote2_single_text_window_t

0xd01e,	// (0x0003913b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01e,	// (0x0003913b) popup_snote2_single_graphic_window_g1

0xd046,	// (0x00039163) popup_snote2_single_graphic_window_g2_ParamLimits

0xd046,	// (0x00039163) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x0003bda0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x0003bda0) popup_snote2_single_graphic_window_g

0xd06e,	// (0x0003918b) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06e,	// (0x0003918b) popup_snote2_single_graphic_window_t1

0xd0ba,	// (0x000391d7) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0ba,	// (0x000391d7) popup_snote2_single_graphic_window_t2

0xcf7c,	// (0x00039099) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf7c,	// (0x00039099) popup_snote2_single_graphic_window_t3

0xcfbd,	// (0x000390da) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfbd,	// (0x000390da) popup_snote2_single_graphic_window_t4

0xcff3,	// (0x00039110) popup_snote2_single_graphic_window_t5_ParamLimits

0xcff3,	// (0x00039110) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x0003bda5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x0003bda5) popup_snote2_single_graphic_window_t

0xbaed,	// (0x00037c0a) clock_nsta_pane_cp2_t1

0xbaed,	// (0x00037c0a) clock_nsta_pane_cp2_t2

0x0001,

0xfa9c,	// (0x0003bbb9) clock_nsta_pane_cp2_t

0x4ee9,	// (0x00031006) form_field_data_wide_pane_g1_ParamLimits

0x8223,	// (0x00034340) form_field_data_wide_pane_g2_ParamLimits

0x8223,	// (0x00034340) form_field_data_wide_pane_g2

0x822f,	// (0x0003434c) form_field_data_wide_pane_g3_ParamLimits

0x822f,	// (0x0003434c) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003b773) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003b773) form_field_data_wide_pane_g

0xb9c9,	// (0x00037ae6) grid_touch_3_pane_ParamLimits

0xb9c9,	// (0x00037ae6) grid_touch_3_pane

0xd106,	// (0x00039223) cell_touch_3_pane_ParamLimits

0xd106,	// (0x00039223) cell_touch_3_pane

0xc03b,	// (0x00038158) cell_touch_3_pane_g1

0xc03b,	// (0x00038158) cell_touch_3_pane_g2

0x0001,

0xfb21,	// (0x0003bc3e) cell_touch_3_pane_g

0x7ced,	// (0x00033e0a) cont_query_data_pane

0x7cf5,	// (0x00033e12) cont_query_data_pane_cp1

0xd134,	// (0x00039251) button_value_adjust_pane_cp7

0xd13c,	// (0x00039259) query_popup_pane_cp3

0x8c74,	// (0x00034d91) bg_popup_sub_pane_cp22_ParamLimits

0x52ad,	// (0x000313ca) navi_navi_volume_pane_cp2

0x52c8,	// (0x000313e5) popup_side_volume_key_window_g2

0x52d7,	// (0x000313f4) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003b809) popup_side_volume_key_window_g

0x52f4,	// (0x00031411) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003b810) popup_side_volume_key_window_t

0x8f2e,	// (0x0003504b) popup_side_volume_key_window_ParamLimits

0x4b53,	// (0x00030c70) list_double_graphic_pane_g4_ParamLimits

0x4b53,	// (0x00030c70) list_double_graphic_pane_g4

0x622c,	// (0x00032349) list_single_2heading_msg_pane_ParamLimits

0x622c,	// (0x00032349) list_single_2heading_msg_pane

0x8669,	// (0x00034786) list_single_2heading_msg_pane_g1_ParamLimits

0x8669,	// (0x00034786) list_single_2heading_msg_pane_g1

0x397f,	// (0x0002fa9c) list_single_2heading_msg_pane_g2_ParamLimits

0x397f,	// (0x0002fa9c) list_single_2heading_msg_pane_g2

0x8675,	// (0x00034792) list_single_2heading_msg_pane_g3_ParamLimits

0x8675,	// (0x00034792) list_single_2heading_msg_pane_g3

0x8681,	// (0x0003479e) list_single_2heading_msg_pane_g4_ParamLimits

0x8681,	// (0x0003479e) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x0003bdb0) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x0003bdb0) list_single_2heading_msg_pane_g

0x8699,	// (0x000347b6) list_single_2heading_msg_pane_t1_ParamLimits

0x8699,	// (0x000347b6) list_single_2heading_msg_pane_t1

0x86c1,	// (0x000347de) list_single_2heading_msg_pane_t2_ParamLimits

0x86c1,	// (0x000347de) list_single_2heading_msg_pane_t2

0x86f5,	// (0x00034812) list_single_2heading_msg_pane_t3_ParamLimits

0x86f5,	// (0x00034812) list_single_2heading_msg_pane_t3

0x872e,	// (0x0003484b) list_single_2heading_msg_pane_t4_ParamLimits

0x872e,	// (0x0003484b) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x0003bdb9) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x0003bdb9) list_single_2heading_msg_pane_t

0x78dc,	// (0x000339f9) title_pane_g4_ParamLimits

0x78dc,	// (0x000339f9) title_pane_g4

0x50bc,	// (0x000311d9) title_pane_stacon_g3_ParamLimits

0x50bc,	// (0x000311d9) title_pane_stacon_g3

0xcc62,	// (0x00038d7f) list_single_2graphic_im_pane_g4_ParamLimits

0xcc62,	// (0x00038d7f) list_single_2graphic_im_pane_g4

0xaad6,	// (0x00036bf3) popup_side_volume_key_window_cp

0xb308,	// (0x00037425) main_idle_act2_pane_t1

0x5d1b,	// (0x00031e38) toolbar_button_pane_g10

0x817e,	// (0x0003429b) popup_toolbar_window_cp1

0xbade,	// (0x00037bfb) clock_nsta_pane_cp_t1

0xbade,	// (0x00037bfb) clock_nsta_pane_cp_t2

0x0001,

0xfa97,	// (0x0003bbb4) clock_nsta_pane_cp_t

0x52ad,	// (0x000313ca) navi_navi_volume_pane_cp2_ParamLimits

0x52bc,	// (0x000313d9) popup_side_volume_key_window_g1_ParamLimits

0x52c8,	// (0x000313e5) popup_side_volume_key_window_g2_ParamLimits

0x52d7,	// (0x000313f4) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003b809) popup_side_volume_key_window_g_ParamLimits

0x6746,	// (0x00032863) fep_hwr_aid_pane

0x67ed,	// (0x0003290a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc097,	// (0x000381b4) fep_hwr_top_pane_g1_ParamLimits

0xc0a9,	// (0x000381c6) fep_hwr_top_pane_g2_ParamLimits

0x680d,	// (0x0003292a) fep_hwr_top_pane_g3_ParamLimits

0xfaec,	// (0x0003bc09) fep_hwr_top_pane_g_ParamLimits

0x6822,	// (0x0003293f) fep_hwr_top_text_pane_ParamLimits

0xa899,	// (0x000369b6) aid_touch_tab_arrow_arrow_2

0xa8a2,	// (0x000369bf) aid_touch_tab_arrow_left_2

0x675a,	// (0x00032877) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6791,	// (0x000328ae) fep_hwr_prediction_pane

0xc209,	// (0x00038326) fep_vkb_prediction_pane

0xc30d,	// (0x0003842a) fep_vkb_side_pane_g3_ParamLimits

0xc30d,	// (0x0003842a) fep_vkb_side_pane_g3

0x699d,	// (0x00032aba) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6ac2,	// (0x00032bdf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6acf,	// (0x00032bec) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9b,	// (0x0003bcb8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6bfe,	// (0x00032d1b) fep_hwr_prediction_pane_g1

0x6c08,	// (0x00032d25) fep_hwr_prediction_pane_g2

0x6c10,	// (0x00032d2d) fep_hwr_prediction_pane_g3

0x6c18,	// (0x00032d35) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x0003bdc2) fep_hwr_prediction_pane_g

0xd161,	// (0x0003927e) fep_vkb_prediction_pane_g1

0xd16b,	// (0x00039288) fep_vkb_prediction_pane_g2

0xd173,	// (0x00039290) fep_vkb_prediction_pane_g3

0xd17b,	// (0x00039298) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x0003bdcb) fep_vkb_prediction_pane_g

0x6122,	// (0x0003223f) slider_set_pane_g3

0x6136,	// (0x00032253) slider_set_pane_g4

0x614e,	// (0x0003226b) slider_set_pane_g5

0x6122,	// (0x0003223f) slider_set_pane_g6

0x6164,	// (0x00032281) slider_set_pane_g7

0xaf36,	// (0x00037053) slider_form_pane_g3

0xaf3f,	// (0x0003705c) slider_form_pane_g4

0xaf47,	// (0x00037064) slider_form_pane_g5

0xaf36,	// (0x00037053) slider_form_pane_g6

0xaf4f,	// (0x0003706c) slider_form_pane_g7

0xb5bf,	// (0x000376dc) slider_set_pane_vc_g3

0xb5c8,	// (0x000376e5) slider_set_pane_vc_g4

0xb5d1,	// (0x000376ee) slider_set_pane_vc_g5

0xb5bf,	// (0x000376dc) slider_set_pane_vc_g6

0xb5da,	// (0x000376f7) slider_set_pane_vc_g7

0xb79c,	// (0x000378b9) slider_form_pane_vc_g1

0xb7a5,	// (0x000378c2) slider_form_pane_vc_g2

0xb7ae,	// (0x000378cb) slider_form_pane_vc_g3

0xb79c,	// (0x000378b9) slider_form_pane_vc_g4

0xb7b7,	// (0x000378d4) slider_form_pane_vc_g5

0x0004,

0xfa69,	// (0x0003bb86) slider_form_pane_vc_g

0x46c8,	// (0x000307e5) main_idle_act3_pane

0xd183,	// (0x000392a0) ai3_links_pane

0xd18c,	// (0x000392a9) popup_ai3_data_window_ParamLimits

0xd18c,	// (0x000392a9) popup_ai3_data_window

0x2972,	// (0x0002ea8f) grid_ai3_links_pane

0xd1a6,	// (0x000392c3) cell_ai3_links_pane_ParamLimits

0xd1a6,	// (0x000392c3) cell_ai3_links_pane

0xd1be,	// (0x000392db) bg_popup_sub_pane_cp11

0xd1cb,	// (0x000392e8) cell_ai3_links_pane_g1

0x2972,	// (0x0002ea8f) bg_popup_sub_pane_cp12

0xd1f0,	// (0x0003930d) heading_ai3_data_pane

0xd1f8,	// (0x00039315) list_ai3_gene_pane

0xd204,	// (0x00039321) popup_ai3_data_window_g1

0xd20c,	// (0x00039329) heading_ai3_data_pane_g1

0xd214,	// (0x00039331) heading_ai3_data_pane_t1

0xd222,	// (0x0003933f) list_double_ai3_gene_pane_ParamLimits

0xd222,	// (0x0003933f) list_double_ai3_gene_pane

0xd22f,	// (0x0003934c) list_single_ai3_gene_pane_ParamLimits

0xd22f,	// (0x0003934c) list_single_ai3_gene_pane

0xc000,	// (0x0003811d) list_highlight_pane_cp7_ParamLimits

0xc000,	// (0x0003811d) list_highlight_pane_cp7

0xd23c,	// (0x00039359) list_single_a13_gene_pane_t1_ParamLimits

0xd23c,	// (0x00039359) list_single_a13_gene_pane_t1

0xd253,	// (0x00039370) list_single_ai3_gene_pane_g1

0xd25c,	// (0x00039379) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x0003bdd4) list_single_ai3_gene_pane_g

0xd264,	// (0x00039381) list_double_ai3_gene_pane_g1_ParamLimits

0xd264,	// (0x00039381) list_double_ai3_gene_pane_g1

0xd270,	// (0x0003938d) list_double_ai3_gene_pane_t1_ParamLimits

0xd270,	// (0x0003938d) list_double_ai3_gene_pane_t1

0xd28c,	// (0x000393a9) list_double_ai3_gene_pane_t2_ParamLimits

0xd28c,	// (0x000393a9) list_double_ai3_gene_pane_t2

0xd2a2,	// (0x000393bf) list_double_ai3_gene_pane_t3_ParamLimits

0xd2a2,	// (0x000393bf) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x0003bdd9) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x0003bdd9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x865f,	// (0x0003477c) aid_size_min_col_2

0xd14d,	// (0x0003926a) aid_size_min_msg_ParamLimits

0xd14d,	// (0x0003926a) aid_size_min_msg

0xc40d,	// (0x0003852a) fep_vkb_top_text_pane_g2_ParamLimits

0xc40d,	// (0x0003852a) fep_vkb_top_text_pane_g2

0x0001,

0xfb1c,	// (0x0003bc39) fep_vkb_top_text_pane_g_ParamLimits

0xfb1c,	// (0x0003bc39) fep_vkb_top_text_pane_g

0x46c8,	// (0x000307e5) main_hc_apps_shell_pane

0xd2bf,	// (0x000393dc) grid_hc_apps_pane_ParamLimits

0xd2bf,	// (0x000393dc) grid_hc_apps_pane

0xd2d1,	// (0x000393ee) list_hc_apps_pane

0xd2d9,	// (0x000393f6) scroll_pane_cp37_ParamLimits

0xd2d9,	// (0x000393f6) scroll_pane_cp37

0xd2e5,	// (0x00039402) cell_hc_apps_pane_ParamLimits

0xd2e5,	// (0x00039402) cell_hc_apps_pane

0xd3b4,	// (0x000394d1) cell_hc_apps_pane_g1_ParamLimits

0xd3b4,	// (0x000394d1) cell_hc_apps_pane_g1

0xd3e4,	// (0x00039501) cell_hc_apps_pane_g2_ParamLimits

0xd3e4,	// (0x00039501) cell_hc_apps_pane_g2

0xd400,	// (0x0003951d) cell_hc_apps_pane_g3_ParamLimits

0xd400,	// (0x0003951d) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x0003bde0) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x0003bde0) cell_hc_apps_pane_g

0xd422,	// (0x0003953f) cell_hc_apps_pane_t1_ParamLimits

0xd422,	// (0x0003953f) cell_hc_apps_pane_t1

0x7c11,	// (0x00033d2e) grid_highlight_pane_cp10_ParamLimits

0x7c11,	// (0x00033d2e) grid_highlight_pane_cp10

0xd462,	// (0x0003957f) list_single_hc_apps_pane_ParamLimits

0xd462,	// (0x0003957f) list_single_hc_apps_pane

0xd4be,	// (0x000395db) list_single_hc_apps_pane_g1

0x8753,	// (0x00034870) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x0003bde7) list_single_hc_apps_pane_g

0x876c,	// (0x00034889) list_single_hc_apps_pane_g2_copy1

0x8788,	// (0x000348a5) list_single_hc_apps_pane_t1

0x7988,	// (0x00033aa5) bg_set_opt_pane_cp_ParamLimits

0x4929,	// (0x00030a46) setting_slider_pane_t1_ParamLimits

0x4942,	// (0x00030a5f) setting_slider_pane_t2_ParamLimits

0x495c,	// (0x00030a79) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003b656) setting_slider_pane_t_ParamLimits

0x4974,	// (0x00030a91) slider_set_pane_ParamLimits

0x55e0,	// (0x000316fd) control_pane_g5_ParamLimits

0x55e0,	// (0x000316fd) control_pane_g5

0xad85,	// (0x00036ea2) slider_set_pane_g1_ParamLimits

0x6116,	// (0x00032233) slider_set_pane_g2_ParamLimits

0x6122,	// (0x0003223f) slider_set_pane_g3_ParamLimits

0x6136,	// (0x00032253) slider_set_pane_g4_ParamLimits

0x614e,	// (0x0003226b) slider_set_pane_g5_ParamLimits

0x6122,	// (0x0003223f) slider_set_pane_g6_ParamLimits

0x6164,	// (0x00032281) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003ba5c) slider_set_pane_g_ParamLimits

0x901a,	// (0x00035137) navi_icon_text_pane_ParamLimits

0x9510,	// (0x0003562d) aid_fill_nsta_2_ParamLimits

0x954f,	// (0x0003566c) aid_touch_tab_arrow_left_ParamLimits

0x955e,	// (0x0003567b) aid_touch_tab_arrow_right_ParamLimits

0x95cb,	// (0x000356e8) clock_nsta_pane_ParamLimits

0xa87b,	// (0x00036998) navi_icon_pane_g1_ParamLimits

0xa887,	// (0x000369a4) navi_text_pane_t1_ParamLimits

0xbbea,	// (0x00037d07) navi_icon_text_pane_g1_ParamLimits

0xbbf6,	// (0x00037d13) navi_icon_text_pane_t1_ParamLimits

0xd4be,	// (0x000395db) list_single_hc_apps_pane_g1_ParamLimits

0x8753,	// (0x00034870) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x0003bde7) list_single_hc_apps_pane_g_ParamLimits

0x876c,	// (0x00034889) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8788,	// (0x000348a5) list_single_hc_apps_pane_t1_ParamLimits

0x4833,	// (0x00030950) popup_toolbar2_fixed_window_ParamLimits

0x4833,	// (0x00030950) popup_toolbar2_fixed_window

0x5be5,	// (0x00031d02) popup_toolbar2_float_window

0x2972,	// (0x0002ea8f) bg_popup_sub_pane_cp27

0xd4d7,	// (0x000395f4) grid_toolbar2_float_pane

0x2972,	// (0x0002ea8f) bg_popup_sub_pane_cp26

0xd4d7,	// (0x000395f4) grid_toolbar2_fixed_pane

0xd4df,	// (0x000395fc) cell_toolbar2_fixed_pane_ParamLimits

0xd4df,	// (0x000395fc) cell_toolbar2_fixed_pane

0xd4ef,	// (0x0003960c) cell_toolbar2_fixed_pane_g1

0xd4f8,	// (0x00039615) toolbar2_fixed_button_pane

0x99e8,	// (0x00035b05) toolbar2_fixed_button_pane_g1

0x99f8,	// (0x00035b15) toolbar2_fixed_button_pane_g2

0x99f0,	// (0x00035b0d) toolbar2_fixed_button_pane_g3

0x9a08,	// (0x00035b25) toolbar2_fixed_button_pane_g4

0x9a00,	// (0x00035b1d) toolbar2_fixed_button_pane_g5

0x9a10,	// (0x00035b2d) toolbar2_fixed_button_pane_g6

0x9a18,	// (0x00035b35) toolbar2_fixed_button_pane_g7

0x9a28,	// (0x00035b45) toolbar2_fixed_button_pane_g8

0x9a20,	// (0x00035b3d) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003b95e) toolbar2_fixed_button_pane_g

0xd500,	// (0x0003961d) cell_toolbar2_float_pane_ParamLimits

0xd500,	// (0x0003961d) cell_toolbar2_float_pane

0xd511,	// (0x0003962e) cell_toolbar2_float_pane_g1

0xd4f8,	// (0x00039615) toolbar2_fixed_button_pane_cp

0xc169,	// (0x00038286) fep_vkb_accented_list_pane_ParamLimits

0xc169,	// (0x00038286) fep_vkb_accented_list_pane

0x697d,	// (0x00032a9a) bg_popup_fep_shadow_pane_g9

0x919a,	// (0x000352b7) bg_popup_fep_shadow_pane_cp3

0x837c,	// (0x00034499) list_accented_list_pane

0xd51a,	// (0x00039637) list_single_accented_list_pane_ParamLimits

0xd51a,	// (0x00039637) list_single_accented_list_pane

0x919a,	// (0x000352b7) list_highlight_pane_cp10

0xd52b,	// (0x00039648) list_single_accented_list_pane_t1

0x5b35,	// (0x00031c52) popup_slider_window_ParamLimits

0x5b35,	// (0x00031c52) popup_slider_window

0xd144,	// (0x00039261) aid_indentation_list_msg

0xd5ef,	// (0x0003970c) bg_popup_window_pane_cp19

0xd657,	// (0x00039774) popup_slider_window_g1

0xd673,	// (0x00039790) popup_slider_window_g2

0xd68f,	// (0x000397ac) popup_slider_window_g3

0x0005,

0xfccf,	// (0x0003bdec) popup_slider_window_g

0xd6f5,	// (0x00039812) popup_slider_window_t1

0xd769,	// (0x00039886) small_volume_slider_vertical_pane

0xc03b,	// (0x00038158) small_volume_slider_vertical_pane_g1

0xc03b,	// (0x00038158) small_volume_slider_vertical_pane_g2

0xd785,	// (0x000398a2) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x0003bdfe) small_volume_slider_vertical_pane_g

0x45eb,	// (0x00030708) area_side_right_pane_ParamLimits

0x45eb,	// (0x00030708) area_side_right_pane

0x6c20,	// (0x00032d3d) aid_size_side_button_ParamLimits

0x6c20,	// (0x00032d3d) aid_size_side_button

0x6c34,	// (0x00032d51) grid_sctrl_middle_pane_ParamLimits

0x6c34,	// (0x00032d51) grid_sctrl_middle_pane

0x6c53,	// (0x00032d70) sctrl_sk_bottom_pane

0x6c64,	// (0x00032d81) sctrl_sk_top_pane

0x6c76,	// (0x00032d93) aid_touch_sctrl_top

0x6c83,	// (0x00032da0) bg_sctrl_sk_pane_ParamLimits

0x6c83,	// (0x00032da0) bg_sctrl_sk_pane

0x6c91,	// (0x00032dae) sctrl_sk_top_pane_g1

0x6c9e,	// (0x00032dbb) sctrl_sk_top_pane_t1

0x6c76,	// (0x00032d93) aid_touch_sctrl_bottom

0x6c83,	// (0x00032da0) bg_sctrl_sk_pane_cp_ParamLimits

0x6c83,	// (0x00032da0) bg_sctrl_sk_pane_cp

0x6cb9,	// (0x00032dd6) sctrl_sk_bottom_pane_g1

0x6c9e,	// (0x00032dbb) sctrl_sk_bottom_pane_t1

0x6cc2,	// (0x00032ddf) cell_sctrl_middle_pane_ParamLimits

0x6cc2,	// (0x00032ddf) cell_sctrl_middle_pane

0x6cdd,	// (0x00032dfa) aid_touch_sctrl_middle_ParamLimits

0x6cdd,	// (0x00032dfa) aid_touch_sctrl_middle

0x6cef,	// (0x00032e0c) bg_sctrl_middle_pane_ParamLimits

0x6cef,	// (0x00032e0c) bg_sctrl_middle_pane

0x699d,	// (0x00032aba) cell_sctrl_middle_pane_g1_ParamLimits

0x699d,	// (0x00032aba) cell_sctrl_middle_pane_g1

0x6cfd,	// (0x00032e1a) cell_sctrl_middle_pane_g2_ParamLimits

0x6cfd,	// (0x00032e1a) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x0003be0a) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x0003be0a) cell_sctrl_middle_pane_g

0x99e8,	// (0x00035b05) bg_sctrl_middle_pane_g1

0x99f0,	// (0x00035b0d) bg_sctrl_middle_pane_g2

0x99f8,	// (0x00035b15) bg_sctrl_middle_pane_g3

0x9a00,	// (0x00035b1d) bg_sctrl_middle_pane_g4

0x9a08,	// (0x00035b25) bg_sctrl_middle_pane_g5

0x9a10,	// (0x00035b2d) bg_sctrl_middle_pane_g6

0x9a18,	// (0x00035b35) bg_sctrl_middle_pane_g7

0x9a20,	// (0x00035b3d) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x0003be0f) bg_sctrl_middle_pane_g

0x9a28,	// (0x00035b45) bg_sctrl_middle_pane_g8_copy1

0x99e8,	// (0x00035b05) bg_sctrl_sk_pane_g1

0x99f8,	// (0x00035b15) bg_sctrl_sk_pane_g2

0x99f0,	// (0x00035b0d) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003b95e) bg_sctrl_sk_pane_g

0x8144,	// (0x00034261) aid_size_touch_scroll_bar

0x9a08,	// (0x00035b25) bg_sctrl_sk_pane_g4

0x9a00,	// (0x00035b1d) bg_sctrl_sk_pane_g5

0x9a10,	// (0x00035b2d) bg_sctrl_sk_pane_g6

0x9a18,	// (0x00035b35) bg_sctrl_sk_pane_g7

0x9a28,	// (0x00035b45) bg_sctrl_sk_pane_g8

0x9a20,	// (0x00035b3d) bg_sctrl_sk_pane_g9

0x579c,	// (0x000318b9) popup_fep_china_hwr2_fs_candidate_window

0x57a6,	// (0x000318c3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x57a6,	// (0x000318c3) popup_fep_china_hwr2_fs_control_window

0x699d,	// (0x00032aba) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x0003be05) sctrl_sk_top_pane_g

0xd78e,	// (0x000398ab) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd78e,	// (0x000398ab) aid_fep_china_hwr2_fs_cell

0xd7a0,	// (0x000398bd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7a0,	// (0x000398bd) bg_popup_fep_shadow_pane_cp4

0xd7b7,	// (0x000398d4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7b7,	// (0x000398d4) bg_popup_fep_shadow_pane_cp5

0xd7c9,	// (0x000398e6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7c9,	// (0x000398e6) popup_fep_china_hwr2_fs_control_bar_grid

0xd7d9,	// (0x000398f6) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7e1,	// (0x000398fe) aid_fep_china_hwr2_fs_candi_cell

0x2972,	// (0x0002ea8f) bg_popup_fep_shadow_pane_cp6

0xd7eb,	// (0x00039908) popup_fep_china_hwr2_fs_candidate_grid

0xd7f5,	// (0x00039912) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7f5,	// (0x00039912) cell_fep_china_hwr2_fs_funtion_grid

0xc03b,	// (0x00038158) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd80d,	// (0x0003992a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd80d,	// (0x0003992a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd81b,	// (0x00039938) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd81b,	// (0x00039938) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x0003be20) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x0003be20) cell_fep_china_hwr2_fs_funtion_grid_g

0xd831,	// (0x0003994e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd831,	// (0x0003994e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd846,	// (0x00039963) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd846,	// (0x00039963) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x0003be25) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x0003be25) cell_fep_china_hwr2_fs_funtion_grid_t

0xd862,	// (0x0003997f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd86a,	// (0x00039987) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd872,	// (0x0003998f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x0003be2a) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd87a,	// (0x00039997) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd87a,	// (0x00039997) cell_fep_china_hwr2_fs_candidate_grid

0xd893,	// (0x000399b0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd89b,	// (0x000399b8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc03b,	// (0x00038158) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc03b,	// (0x00038158) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb21,	// (0x0003bc3e) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8a3,	// (0x000399c0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95de,	// (0x000356fb) clock_nsta_pane_cp_24_ParamLimits

0x95de,	// (0x000356fb) clock_nsta_pane_cp_24

0x965c,	// (0x00035779) indicator_nsta_pane_cp_24_ParamLimits

0x965c,	// (0x00035779) indicator_nsta_pane_cp_24

0xa6f7,	// (0x00036814) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003b9c3) heading_pane_g

0xb151,	// (0x0003726e) grid_sct_catagory_button_pane

0xb181,	// (0x0003729e) scroll_pane_cp5_ParamLimits

0xbc38,	// (0x00037d55) button_value_adjust_pane_cp5_ParamLimits

0xbc38,	// (0x00037d55) button_value_adjust_pane_cp5

0xbd17,	// (0x00037e34) form2_midp_time_pane_ParamLimits

0xd8b1,	// (0x000399ce) cell_sct_catagory_button_pane_ParamLimits

0xd8b1,	// (0x000399ce) cell_sct_catagory_button_pane

0xc000,	// (0x0003811d) bg_button_pane_cp01_ParamLimits

0xc000,	// (0x0003811d) bg_button_pane_cp01

0xc03b,	// (0x00038158) cell_sct_catagory_button_pane_g1

0x5b74,	// (0x00031c91) popup_tb_extension_window

0xd8c3,	// (0x000399e0) aid_size_cell_ext_ParamLimits

0xd8c3,	// (0x000399e0) aid_size_cell_ext

0x7c11,	// (0x00033d2e) bg_tb_trans_pane_cp1_ParamLimits

0x7c11,	// (0x00033d2e) bg_tb_trans_pane_cp1

0xd8e3,	// (0x00039a00) grid_tb_ext_pane_ParamLimits

0xd8e3,	// (0x00039a00) grid_tb_ext_pane

0xd911,	// (0x00039a2e) cell_tb_ext_pane_ParamLimits

0xd911,	// (0x00039a2e) cell_tb_ext_pane

0xd928,	// (0x00039a45) cell_tb_ext_pane_g1_ParamLimits

0xd928,	// (0x00039a45) cell_tb_ext_pane_g1

0xd945,	// (0x00039a62) cell_tb_ext_pane_t1

0x7c11,	// (0x00033d2e) list_highlight_pane_cp11_ParamLimits

0x7c11,	// (0x00033d2e) list_highlight_pane_cp11

0x4852,	// (0x0003096f) popup_uni_indicator_window_ParamLimits

0x4852,	// (0x0003096f) popup_uni_indicator_window

0x8215,	// (0x00034332) bg_popup_sub_pane_cp14

0xd960,	// (0x00039a7d) list_uniindi_pane

0xd96c,	// (0x00039a89) uniindi_top_pane

0x7c11,	// (0x00033d2e) bg_uniindi_top_pane

0xd98b,	// (0x00039aa8) uniindi_top_pane_g1

0xd9a1,	// (0x00039abe) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x0003be31) uniindi_top_pane_g

0xd9cb,	// (0x00039ae8) uniindi_top_pane_t1

0xd9f5,	// (0x00039b12) list_single_uniindi_pane_ParamLimits

0xd9f5,	// (0x00039b12) list_single_uniindi_pane

0xc03b,	// (0x00038158) bg_uniindi_top_pane_g1

0xda08,	// (0x00039b25) list_single_uniindi_pane_g1

0xda1b,	// (0x00039b38) list_single_uniindi_pane_t1

0x46c8,	// (0x000307e5) control_bg_pane

0xda40,	// (0x00039b5d) bg_sctrl_sk_pane_cp1

0xda49,	// (0x00039b66) bg_sctrl_sk_pane_cp2

0xda52,	// (0x00039b6f) control_bg_pane_g1

0xda5b,	// (0x00039b78) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x0003be3a) control_bg_pane_g

0xba82,	// (0x00037b9f) cell_indicator_nsta_pane_g1_ParamLimits

0xba90,	// (0x00037bad) cell_indicator_nsta_pane_g2_ParamLimits

0xfa85,	// (0x0003bba2) cell_indicator_nsta_pane_g_ParamLimits

0x6725,	// (0x00032842) form2_midp_time_pane_t1_ParamLimits

0x56fc,	// (0x00031819) main_idle_act4_pane_ParamLimits

0x56fc,	// (0x00031819) main_idle_act4_pane

0x5b74,	// (0x00031c91) popup_tb_extension_window_ParamLimits

0xd901,	// (0x00039a1e) tb_ext_find_pane_ParamLimits

0xd901,	// (0x00039a1e) tb_ext_find_pane

0xda64,	// (0x00039b81) ai_gene_pane_1_cp1

0x92e1,	// (0x000353fe) ai_gene_pane_2_cp1

0xda6c,	// (0x00039b89) list_single_idle_plugin_calendar_pane

0xda75,	// (0x00039b92) list_single_idle_plugin_notification_pane

0xda7e,	// (0x00039b9b) list_single_idle_plugin_player_pane

0xda87,	// (0x00039ba4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda87,	// (0x00039ba4) list_single_idle_plugin_shortcut_pane

0xdaa9,	// (0x00039bc6) main_idle_act4_pane_t1

0xdabb,	// (0x00039bd8) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x0003be3f) main_idle_act4_pane_t

0xdacd,	// (0x00039bea) middle_sk_idle_act4_pane_ParamLimits

0xdacd,	// (0x00039bea) middle_sk_idle_act4_pane

0xdae3,	// (0x00039c00) popup_clock_digital_analogue_window_cp2

0xdafd,	// (0x00039c1a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdafd,	// (0x00039c1a) shortcut_wheel_idle_act4_pane

0xc03b,	// (0x00038158) shortcut_wheel_idle_act4_pane_g1

0xc03b,	// (0x00038158) shortcut_wheel_idle_act4_pane_g2

0xc03b,	// (0x00038158) shortcut_wheel_idle_act4_pane_g3

0xc03b,	// (0x00038158) shortcut_wheel_idle_act4_pane_g4

0xc03b,	// (0x00038158) shortcut_wheel_idle_act4_pane_g5

0xdb11,	// (0x00039c2e) shortcut_wheel_idle_act4_pane_g6

0xdb19,	// (0x00039c36) shortcut_wheel_idle_act4_pane_g7

0xdb21,	// (0x00039c3e) shortcut_wheel_idle_act4_pane_g8

0xdb29,	// (0x00039c46) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x0003be44) shortcut_wheel_idle_act4_pane_g

0xc2b9,	// (0x000383d6) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2b9,	// (0x000383d6) middle_sk_idle_act4_pane_g1

0xdb8d,	// (0x00039caa) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb8d,	// (0x00039caa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x0003be67) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x0003be67) middle_sk_idle_act4_pane_g

0xdb99,	// (0x00039cb6) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb99,	// (0x00039cb6) middle_sk_idle_act4_pane_t1

0xdbb6,	// (0x00039cd3) grid_ai_shortcut_pane_ParamLimits

0xdbb6,	// (0x00039cd3) grid_ai_shortcut_pane

0xdbcf,	// (0x00039cec) list_highlight_pane_cp16_ParamLimits

0xdbcf,	// (0x00039cec) list_highlight_pane_cp16

0xdbdc,	// (0x00039cf9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbdc,	// (0x00039cf9) list_single_idle_plugin_shortcut_pane_g1

0xdbe8,	// (0x00039d05) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbe8,	// (0x00039d05) list_single_idle_plugin_shortcut_pane_g2

0xdc00,	// (0x00039d1d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc00,	// (0x00039d1d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x0003be6c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x0003be6c) list_single_idle_plugin_shortcut_pane_g

0xdc13,	// (0x00039d30) cell_ai_shortcut_pane_ParamLimits

0xdc13,	// (0x00039d30) cell_ai_shortcut_pane

0xdc37,	// (0x00039d54) cell_ai_shortcut_pane_g1_ParamLimits

0xdc37,	// (0x00039d54) cell_ai_shortcut_pane_g1

0xda64,	// (0x00039b81) ai_gene_pane_1_cp2

0xdc59,	// (0x00039d76) ai_gene_pane_2_cp2

0xdc61,	// (0x00039d7e) list_highlight_pane_cp15

0xdc6a,	// (0x00039d87) list_single_idle_plugin_calendar_pane_g1

0xdc61,	// (0x00039d7e) list_highlight_pane_cp17

0xdc72,	// (0x00039d8f) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc7a,	// (0x00039d97) list_single_idle_plugin_player_pane_g1

0xb3aa,	// (0x000374c7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x0003be73) list_single_idle_plugin_player_pane_g

0xdc82,	// (0x00039d9f) list_single_idle_plugin_player_pane_t1

0xdc90,	// (0x00039dad) list_single_idle_plugin_player_pane_t2

0xdc9e,	// (0x00039dbb) list_single_idle_plugin_player_pane_t3

0xdcac,	// (0x00039dc9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x0003be78) list_single_idle_plugin_player_pane_t

0xdcba,	// (0x00039dd7) wait_bar_pane_cp15

0xdcc2,	// (0x00039ddf) grid_ai_notification_pane

0xb3aa,	// (0x000374c7) list_single_idle_plugin_notification_pane_g1

0xdccb,	// (0x00039de8) cell_ai_notification_pane_ParamLimits

0xdccb,	// (0x00039de8) cell_ai_notification_pane

0xdcd8,	// (0x00039df5) cell_ai_notification_pane_g1

0xdce0,	// (0x00039dfd) cell_ai_notification_pane_t1

0xdcee,	// (0x00039e0b) tb_ext_find_button_pane

0xdcf6,	// (0x00039e13) tb_ext_find_pane_g1

0xdcfe,	// (0x00039e1b) tb_ext_find_pane_t1

0x8b84,	// (0x00034ca1) tb_ext_find_button_pane_g1

0xdd0c,	// (0x00039e29) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x0003be81) tb_ext_find_button_pane_g

0xdaa9,	// (0x00039bc6) main_idle_act4_pane_t1_ParamLimits

0xdabb,	// (0x00039bd8) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x0003be3f) main_idle_act4_pane_t_ParamLimits

0xdae3,	// (0x00039c00) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaf1,	// (0x00039c0e) sat_plugin_idle_act4_pane_ParamLimits

0xdaf1,	// (0x00039c0e) sat_plugin_idle_act4_pane

0xdd15,	// (0x00039e32) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd15,	// (0x00039e32) sat_plugin_idle_act4_pane_t1

0xdd28,	// (0x00039e45) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd28,	// (0x00039e45) sat_plugin_idle_act4_pane_t2

0xdd3b,	// (0x00039e58) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd3b,	// (0x00039e58) sat_plugin_idle_act4_pane_t3

0xdd4e,	// (0x00039e6b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd4e,	// (0x00039e6b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x0003be86) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x0003be86) sat_plugin_idle_act4_pane_t

0x478d,	// (0x000308aa) popup_battery_window_ParamLimits

0x478d,	// (0x000308aa) popup_battery_window

0x7c11,	// (0x00033d2e) bg_popup_sub_pane_cp25_ParamLimits

0x7c11,	// (0x00033d2e) bg_popup_sub_pane_cp25

0xdd61,	// (0x00039e7e) popup_battery_window_g1_ParamLimits

0xdd61,	// (0x00039e7e) popup_battery_window_g1

0xdd6d,	// (0x00039e8a) popup_battery_window_t1_ParamLimits

0xdd6d,	// (0x00039e8a) popup_battery_window_t1

0xdd7f,	// (0x00039e9c) popup_battery_window_t2_ParamLimits

0xdd7f,	// (0x00039e9c) popup_battery_window_t2

0x0001,

0xfd72,	// (0x0003be8f) popup_battery_window_t_ParamLimits

0xfd72,	// (0x0003be8f) popup_battery_window_t

0x91ae,	// (0x000352cb) midp_canvas_pane_ParamLimits

0x9225,	// (0x00035342) midp_keypad_pane_ParamLimits

0x9225,	// (0x00035342) midp_keypad_pane

0x94be,	// (0x000355db) main_midp_pane_ParamLimits

0xbafc,	// (0x00037c19) signal_pane_g2_cp_ParamLimits

0xdd9c,	// (0x00039eb9) aid_size_cell_midp_keypad_ParamLimits

0xdd9c,	// (0x00039eb9) aid_size_cell_midp_keypad

0xddb6,	// (0x00039ed3) midp_keyp_game_grid_pane_ParamLimits

0xddb6,	// (0x00039ed3) midp_keyp_game_grid_pane

0xddd6,	// (0x00039ef3) midp_keyp_rocker_pane_ParamLimits

0xddd6,	// (0x00039ef3) midp_keyp_rocker_pane

0xde0f,	// (0x00039f2c) midp_keyp_sk_left_pane_ParamLimits

0xde0f,	// (0x00039f2c) midp_keyp_sk_left_pane

0xde69,	// (0x00039f86) midp_keyp_sk_right_pane_ParamLimits

0xde69,	// (0x00039f86) midp_keyp_sk_right_pane

0x2972,	// (0x0002ea8f) bg_button_pane_cp03

0xdec3,	// (0x00039fe0) midp_keyp_sk_left_pane_g1

0x2972,	// (0x0002ea8f) bg_button_pane_cp04

0xdec3,	// (0x00039fe0) midp_keyp_sk_right_pane_g1

0xc03b,	// (0x00038158) midp_keyp_rocker_pane_g1

0xdecc,	// (0x00039fe9) keyp_game_cell_pane_ParamLimits

0xdecc,	// (0x00039fe9) keyp_game_cell_pane

0x2972,	// (0x0002ea8f) bg_button_pane_cp02

0xdedf,	// (0x00039ffc) keyp_game_cell_pane_g1

0x47d1,	// (0x000308ee) popup_fep_vkb2_window_ParamLimits

0x47d1,	// (0x000308ee) popup_fep_vkb2_window

0x6d1b,	// (0x00032e38) aid_size_cell_vkb2_ParamLimits

0x6d1b,	// (0x00032e38) aid_size_cell_vkb2

0x6d6f,	// (0x00032e8c) popup_fep_vkb2_window_g1_ParamLimits

0x6d6f,	// (0x00032e8c) popup_fep_vkb2_window_g1

0x6db7,	// (0x00032ed4) vkb2_area_bottom_pane_ParamLimits

0x6db7,	// (0x00032ed4) vkb2_area_bottom_pane

0x6e03,	// (0x00032f20) vkb2_area_keypad_pane_ParamLimits

0x6e03,	// (0x00032f20) vkb2_area_keypad_pane

0x6e45,	// (0x00032f62) vkb2_area_top_pane_ParamLimits

0x6e45,	// (0x00032f62) vkb2_area_top_pane

0x6ebf,	// (0x00032fdc) vkb2_top_entry_pane_ParamLimits

0x6ebf,	// (0x00032fdc) vkb2_top_entry_pane

0x6ee9,	// (0x00033006) vkb2_top_grid_left_pane_ParamLimits

0x6ee9,	// (0x00033006) vkb2_top_grid_left_pane

0x6f07,	// (0x00033024) vkb2_top_grid_right_pane_ParamLimits

0x6f07,	// (0x00033024) vkb2_top_grid_right_pane

0x6f25,	// (0x00033042) vkb2_cell_keypad_pane_ParamLimits

0x6f25,	// (0x00033042) vkb2_cell_keypad_pane

0x6ff6,	// (0x00033113) vkb2_area_bottom_grid_pane_ParamLimits

0x6ff6,	// (0x00033113) vkb2_area_bottom_grid_pane

0x701c,	// (0x00033139) vkb2_area_bottom_pane_g1_ParamLimits

0x701c,	// (0x00033139) vkb2_area_bottom_pane_g1

0x7040,	// (0x0003315d) vkb2_area_bottom_pane_g2_ParamLimits

0x7040,	// (0x0003315d) vkb2_area_bottom_pane_g2

0x706e,	// (0x0003318b) vkb2_area_bottom_pane_g3_ParamLimits

0x706e,	// (0x0003318b) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x0003be94) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x0003be94) vkb2_area_bottom_pane_g

0x70cf,	// (0x000331ec) vkb2_top_cell_left_pane_ParamLimits

0x70cf,	// (0x000331ec) vkb2_top_cell_left_pane

0xdef0,	// (0x0003a00d) vkb2_top_entry_pane_g1_ParamLimits

0xdef0,	// (0x0003a00d) vkb2_top_entry_pane_g1

0xdefe,	// (0x0003a01b) vkb2_top_entry_pane_t1_ParamLimits

0xdefe,	// (0x0003a01b) vkb2_top_entry_pane_t1

0xdf30,	// (0x0003a04d) vkb2_top_entry_pane_t2_ParamLimits

0xdf30,	// (0x0003a04d) vkb2_top_entry_pane_t2

0xdf62,	// (0x0003a07f) vkb2_top_entry_pane_t3_ParamLimits

0xdf62,	// (0x0003a07f) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x0003be9b) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x0003be9b) vkb2_top_entry_pane_t

0x711c,	// (0x00033239) vkb2_top_grid_right_pane_g1_ParamLimits

0x711c,	// (0x00033239) vkb2_top_grid_right_pane_g1

0x7132,	// (0x0003324f) vkb2_top_grid_right_pane_g2_ParamLimits

0x7132,	// (0x0003324f) vkb2_top_grid_right_pane_g2

0x714a,	// (0x00033267) vkb2_top_grid_right_pane_g3_ParamLimits

0x714a,	// (0x00033267) vkb2_top_grid_right_pane_g3

0x7162,	// (0x0003327f) vkb2_top_grid_right_pane_g4_ParamLimits

0x7162,	// (0x0003327f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x0003bea2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x0003bea2) vkb2_top_grid_right_pane_g

0x7178,	// (0x00033295) vkb2_top_cell_left_pane_g1

0x718f,	// (0x000332ac) vkb2_cell_keypad_pane_g1_ParamLimits

0x718f,	// (0x000332ac) vkb2_cell_keypad_pane_g1

0xdf86,	// (0x0003a0a3) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf86,	// (0x0003a0a3) vkb2_cell_keypad_pane_t1

0x719d,	// (0x000332ba) vkb2_cell_bottom_grid_pane_ParamLimits

0x719d,	// (0x000332ba) vkb2_cell_bottom_grid_pane

0x71d6,	// (0x000332f3) vkb2_cell_bottom_grid_pane_g1

0xdb31,	// (0x00039c4e) aid_call2_pane_cp02

0xdb39,	// (0x00039c56) aid_call_pane_cp02

0xdb41,	// (0x00039c5e) clock_digital_number_pane_cp10

0xdb49,	// (0x00039c66) clock_digital_number_pane_cp11

0xdb51,	// (0x00039c6e) clock_digital_number_pane_cp12

0xdb59,	// (0x00039c76) clock_digital_number_pane_cp13

0xdb61,	// (0x00039c7e) clock_digital_separator_pane_cp10

0x8b84,	// (0x00034ca1) popup_clock_digital_analogue_window_cp2_g1

0x8b84,	// (0x00034ca1) popup_clock_digital_analogue_window_cp2_g2

0xdb69,	// (0x00039c86) popup_clock_digital_analogue_window_cp2_g3

0x8b84,	// (0x00034ca1) popup_clock_digital_analogue_window_cp2_g4

0xdb69,	// (0x00039c86) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x0003be57) popup_clock_digital_analogue_window_cp2_g

0xdb71,	// (0x00039c8e) popup_clock_digital_analogue_window_cp2_t1

0xdb7f,	// (0x00039c9c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x0003be62) popup_clock_digital_analogue_window_cp2_t

0xc03b,	// (0x00038158) clock_digital_number_pane_cp10_g1

0xc03b,	// (0x00038158) clock_digital_number_pane_cp10_g2

0x0001,

0xfb21,	// (0x0003bc3e) clock_digital_number_pane_cp10_g

0xc03b,	// (0x00038158) clock_digital_separator_pane_cp10_g1

0xc03b,	// (0x00038158) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb21,	// (0x0003bc3e) clock_digital_separator_pane_cp10_g

0xd9ad,	// (0x00039aca) uniindi_top_pane_g3

0xd9be,	// (0x00039adb) uniindi_top_pane_g4

0x6fb0,	// (0x000330cd) vkb2_row_keypad_pane_ParamLimits

0x6fb0,	// (0x000330cd) vkb2_row_keypad_pane

0x71f2,	// (0x0003330f) vkb2_cell_t_keypad_pane_ParamLimits

0x71f2,	// (0x0003330f) vkb2_cell_t_keypad_pane

0x7202,	// (0x0003331f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7202,	// (0x0003331f) vkb2_cell_t_keypad_pane_cp08

0x7215,	// (0x00033332) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7215,	// (0x00033332) vkb2_cell_t_keypad_pane_cp09

0x7229,	// (0x00033346) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7229,	// (0x00033346) vkb2_cell_t_keypad_pane_cp01

0x723a,	// (0x00033357) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x723a,	// (0x00033357) vkb2_cell_t_keypad_pane_cp02

0x724b,	// (0x00033368) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x724b,	// (0x00033368) vkb2_cell_t_keypad_pane_cp03

0x725c,	// (0x00033379) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x725c,	// (0x00033379) vkb2_cell_t_keypad_pane_cp04

0x726d,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x726d,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp05

0x727e,	// (0x0003339b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x727e,	// (0x0003339b) vkb2_cell_t_keypad_pane_cp06

0x728f,	// (0x000333ac) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x728f,	// (0x000333ac) vkb2_cell_t_keypad_pane_cp07

0x72a0,	// (0x000333bd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x72a0,	// (0x000333bd) vkb2_cell_t_keypad_pane_cp10

0x699d,	// (0x00032aba) vkb2_cell_t_keypad_pane_g1

0xdf9d,	// (0x0003a0ba) vkb2_cell_t_keypad_pane_t1

0x46c8,	// (0x000307e5) popup_grid_graphic2_window

0xdfaf,	// (0x0003a0cc) aid_size_cell_graphic2_ParamLimits

0xdfaf,	// (0x0003a0cc) aid_size_cell_graphic2

0xdfe7,	// (0x0003a104) bg_popup_window_pane_cp21_ParamLimits

0xdfe7,	// (0x0003a104) bg_popup_window_pane_cp21

0xdff5,	// (0x0003a112) graphic2_pages_pane_ParamLimits

0xdff5,	// (0x0003a112) graphic2_pages_pane

0xe03b,	// (0x0003a158) grid_graphic2_control_pane_ParamLimits

0xe03b,	// (0x0003a158) grid_graphic2_control_pane

0xe079,	// (0x0003a196) grid_graphic2_pane_ParamLimits

0xe079,	// (0x0003a196) grid_graphic2_pane

0xe0ed,	// (0x0003a20a) cell_graphic2_pane

0x46c8,	// (0x000307e5) main_comp_mode_pane

0xd1f8,	// (0x00039315) list_ai3_gene_pane_ParamLimits

0xd5ef,	// (0x0003970c) bg_popup_window_pane_cp19_ParamLimits

0xd5fb,	// (0x00039718) bg_touch_area_indi_pane_ParamLimits

0xd5fb,	// (0x00039718) bg_touch_area_indi_pane

0xd611,	// (0x0003972e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd611,	// (0x0003972e) bg_touch_area_indi_pane_cp01

0xd627,	// (0x00039744) bg_touch_area_indi_pane_cp02_ParamLimits

0xd627,	// (0x00039744) bg_touch_area_indi_pane_cp02

0xd63d,	// (0x0003975a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd63d,	// (0x0003975a) bg_touch_area_indi_pane_cp03

0xd657,	// (0x00039774) popup_slider_window_g1_ParamLimits

0xd673,	// (0x00039790) popup_slider_window_g2_ParamLimits

0xd68f,	// (0x000397ac) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x0003bdec) popup_slider_window_g_ParamLimits

0xd6f5,	// (0x00039812) popup_slider_window_t1_ParamLimits

0xd769,	// (0x00039886) small_volume_slider_vertical_pane_ParamLimits

0xe0ed,	// (0x0003a20a) cell_graphic2_pane_ParamLimits

0xe13c,	// (0x0003a259) bg_button_pane_cp10_ParamLimits

0xe13c,	// (0x0003a259) bg_button_pane_cp10

0xe14f,	// (0x0003a26c) bg_button_pane_cp11_ParamLimits

0xe14f,	// (0x0003a26c) bg_button_pane_cp11

0xe162,	// (0x0003a27f) graphic2_pages_pane_g1_ParamLimits

0xe162,	// (0x0003a27f) graphic2_pages_pane_g1

0xe17d,	// (0x0003a29a) graphic2_pages_pane_g2_ParamLimits

0xe17d,	// (0x0003a29a) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x0003beb0) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x0003beb0) graphic2_pages_pane_g

0xe195,	// (0x0003a2b2) graphic2_pages_pane_t1_ParamLimits

0xe195,	// (0x0003a2b2) graphic2_pages_pane_t1

0xe1ad,	// (0x0003a2ca) cell_graphic2_control_pane_ParamLimits

0xe1ad,	// (0x0003a2ca) cell_graphic2_control_pane

0xe1cb,	// (0x0003a2e8) cell_graphic2_pane_g1_ParamLimits

0xe1cb,	// (0x0003a2e8) cell_graphic2_pane_g1

0xe1d8,	// (0x0003a2f5) cell_graphic2_pane_g2_ParamLimits

0xe1d8,	// (0x0003a2f5) cell_graphic2_pane_g2

0xe1e5,	// (0x0003a302) cell_graphic2_pane_g3_ParamLimits

0xe1e5,	// (0x0003a302) cell_graphic2_pane_g3

0xe1f2,	// (0x0003a30f) cell_graphic2_pane_g4_ParamLimits

0xe1f2,	// (0x0003a30f) cell_graphic2_pane_g4

0xe1ff,	// (0x0003a31c) cell_graphic2_pane_g5_ParamLimits

0xe1ff,	// (0x0003a31c) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x0003beb5) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x0003beb5) cell_graphic2_pane_g

0xe218,	// (0x0003a335) cell_graphic2_pane_t1_ParamLimits

0xe218,	// (0x0003a335) cell_graphic2_pane_t1

0x9a5c,	// (0x00035b79) grid_highlight_pane_cp11_ParamLimits

0x9a5c,	// (0x00035b79) grid_highlight_pane_cp11

0x7c11,	// (0x00033d2e) bg_button_pane_cp05

0xe24e,	// (0x0003a36b) cell_graphic2_control_pane_g1

0xc03b,	// (0x00038158) bg_touch_area_indi_pane_g1

0xe276,	// (0x0003a393) aid_cmod_rocker_key_size

0xe280,	// (0x0003a39d) aid_cmode_itu_key_size

0xe28a,	// (0x0003a3a7) main_cmode_video_pane

0xe294,	// (0x0003a3b1) main_comp_mode_itu_pane

0xe2a0,	// (0x0003a3bd) main_comp_mode_rocker_pane

0xe2ac,	// (0x0003a3c9) cell_cmode_rocker_pane_ParamLimits

0xe2ac,	// (0x0003a3c9) cell_cmode_rocker_pane

0xe2be,	// (0x0003a3db) cell_cmode_itu_pane_ParamLimits

0xe2be,	// (0x0003a3db) cell_cmode_itu_pane

0x8215,	// (0x00034332) bg_button_pane_cp06_ParamLimits

0x8215,	// (0x00034332) bg_button_pane_cp06

0xc2b9,	// (0x000383d6) cell_cmode_rocker_pane_g1_ParamLimits

0xc2b9,	// (0x000383d6) cell_cmode_rocker_pane_g1

0xd80d,	// (0x0003992a) cell_cmode_rocker_pane_g2_ParamLimits

0xd80d,	// (0x0003992a) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x0003bec5) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x0003bec5) cell_cmode_rocker_pane_g

0x2972,	// (0x0002ea8f) bg_button_pane_cp07

0xe2d3,	// (0x0003a3f0) cell_cmode_itu_pane_g1

0xe2dc,	// (0x0003a3f9) cell_cmode_itu_pane_t1

0xe2ea,	// (0x0003a407) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x0003beca) cell_cmode_itu_pane_t

0xda30,	// (0x00039b4d) aid_touch_ctrl_left

0xda38,	// (0x00039b55) aid_touch_ctrl_right

0x2972,	// (0x0002ea8f) compa_mode_pane

0xe2f8,	// (0x0003a415) aid_cmod_rocker_key_size_cp

0xe302,	// (0x0003a41f) aid_cmode_itu_key_size_cp

0xe30c,	// (0x0003a429) compa_mode_pane_g1

0xe314,	// (0x0003a431) compa_mode_pane_g2

0xe31c,	// (0x0003a439) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x0003becf) compa_mode_pane_g

0xe324,	// (0x0003a441) main_comp_mode_itu_pane_cp

0xe32c,	// (0x0003a449) main_comp_mode_rocker_pane_cp

0xe334,	// (0x0003a451) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x0003a451) cell_cmode_itu_pane_cp

0xe349,	// (0x0003a466) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x0003a466) cell_cmode_rocker_pane_cp

0x8215,	// (0x00034332) bg_button_pane_cp06_cp_ParamLimits

0x8215,	// (0x00034332) bg_button_pane_cp06_cp

0xc2b9,	// (0x000383d6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2b9,	// (0x000383d6) cell_cmode_rocker_pane_g1_cp

0xc03b,	// (0x00038158) cell_cmode_rocker_pane_g2_cp

0x2972,	// (0x0002ea8f) bg_button_pane_cp07_cp

0xaf36,	// (0x00037053) cell_cmode_itu_pane_g1_cp

0xe35b,	// (0x0003a478) cell_cmode_itu_pane_t1_cp

0xe35b,	// (0x0003a478) cell_cmode_itu_pane_t2_cp

0xaf23,	// (0x00037040) settings_code_pane_cp2

0x7988,	// (0x00033aa5) bg_popup_window_pane_cp3_ParamLimits

0x7e11,	// (0x00033f2e) heading_pane_cp3_ParamLimits

0x7e20,	// (0x00033f3d) listscroll_popup_graphic_pane_ParamLimits

0x6746,	// (0x00032863) fep_hwr_aid_pane_ParamLimits

0x6c76,	// (0x00032d93) aid_touch_sctrl_top_ParamLimits

0x6c91,	// (0x00032dae) sctrl_sk_top_pane_g1_ParamLimits

0x699d,	// (0x00032aba) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x0003be05) sctrl_sk_top_pane_g_ParamLimits

0x6c9e,	// (0x00032dbb) sctrl_sk_top_pane_t1_ParamLimits

0x6c76,	// (0x00032d93) aid_touch_sctrl_bottom_ParamLimits

0x6c9e,	// (0x00032dbb) sctrl_sk_bottom_pane_t1_ParamLimits

0xd979,	// (0x00039a96) aid_area_touch_clock

0x6e87,	// (0x00032fa4) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e87,	// (0x00032fa4) aid_vkb2_area_top_pane_cell

0x6fd2,	// (0x000330ef) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6fd2,	// (0x000330ef) aid_vkb2_area_bottom_pane_cell

0xdee8,	// (0x0003a005) popup_char_count_window

0xe369,	// (0x0003a486) popup_char_count_window_g1

0xe372,	// (0x0003a48f) popup_char_count_window_g2

0xe37b,	// (0x0003a498) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x0003bed6) popup_char_count_window_g

0xe384,	// (0x0003a4a1) popup_char_count_window_t1

0x6d4d,	// (0x00032e6a) popup_fep_char_preview_window_ParamLimits

0x6d4d,	// (0x00032e6a) popup_fep_char_preview_window

0x6ea5,	// (0x00032fc2) vkb2_top_candi_pane_ParamLimits

0x6ea5,	// (0x00032fc2) vkb2_top_candi_pane

0xe392,	// (0x0003a4af) cell_vkb2_top_candi_pane_ParamLimits

0xe392,	// (0x0003a4af) cell_vkb2_top_candi_pane

0x72b5,	// (0x000333d2) bg_popup_fep_char_preview_window_ParamLimits

0x72b5,	// (0x000333d2) bg_popup_fep_char_preview_window

0x72c3,	// (0x000333e0) popup_fep_char_preview_window_t1_ParamLimits

0x72c3,	// (0x000333e0) popup_fep_char_preview_window_t1

0xe3df,	// (0x0003a4fc) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0003a504) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0003a50c) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0003a514) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0003a51c) bg_popup_fep_char_preview_window_g5

0xe407,	// (0x0003a524) bg_popup_fep_char_preview_window_g6

0xe40f,	// (0x0003a52c) bg_popup_fep_char_preview_window_g7

0xe417,	// (0x0003a534) bg_popup_fep_char_preview_window_g8

0xe41f,	// (0x0003a53c) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x0003bedd) bg_popup_fep_char_preview_window_g

0x699d,	// (0x00032aba) cell_vkb2_top_candi_pane_g1_ParamLimits

0x699d,	// (0x00032aba) cell_vkb2_top_candi_pane_g1

0x69ab,	// (0x00032ac8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x69ab,	// (0x00032ac8) cell_vkb2_top_candi_pane_g2

0xd393,	// (0x000394b0) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd393,	// (0x000394b0) cell_vkb2_top_candi_pane_g3

0x7305,	// (0x00033422) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7305,	// (0x00033422) cell_vkb2_top_candi_pane_g4

0xc784,	// (0x000388a1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc784,	// (0x000388a1) cell_vkb2_top_candi_pane_g5

0x7326,	// (0x00033443) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7326,	// (0x00033443) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x0003bef2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x0003bef2) cell_vkb2_top_candi_pane_g

0x7334,	// (0x00033451) cell_vkb2_top_candi_pane_t1

0x6102,	// (0x0003221f) aid_size_touch_slider_mark_ParamLimits

0x6102,	// (0x0003221f) aid_size_touch_slider_mark

0xe02b,	// (0x0003a148) grid_graphic2_catg_pane_ParamLimits

0xe02b,	// (0x0003a148) grid_graphic2_catg_pane

0xe0c9,	// (0x0003a1e6) popup_grid_graphic2_window_t1_ParamLimits

0xe0c9,	// (0x0003a1e6) popup_grid_graphic2_window_t1

0xe0db,	// (0x0003a1f8) popup_grid_graphic2_window_t2_ParamLimits

0xe0db,	// (0x0003a1f8) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x0003beab) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x0003beab) popup_grid_graphic2_window_t

0x7c11,	// (0x00033d2e) bg_button_pane_cp05_ParamLimits

0xe24e,	// (0x0003a36b) cell_graphic2_control_pane_g1_ParamLimits

0xe427,	// (0x0003a544) cell_graphic2_catg_pane_ParamLimits

0xe427,	// (0x0003a544) cell_graphic2_catg_pane

0x2972,	// (0x0002ea8f) bg_button_pane_cp12

0xe439,	// (0x0003a556) cell_graphic2_catg_pane_g1

0xd945,	// (0x00039a62) cell_tb_ext_pane_t1_ParamLimits

0x70ef,	// (0x0003320c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70ef,	// (0x0003320c) vkb2_top_cell_right_narrow_pane

0x7107,	// (0x00033224) vkb2_top_cell_right_wide_pane_ParamLimits

0x7107,	// (0x00033224) vkb2_top_cell_right_wide_pane

0x6738,	// (0x00032855) bg_vkb2_func_pane_ParamLimits

0x6738,	// (0x00032855) bg_vkb2_func_pane

0x7178,	// (0x00033295) vkb2_top_cell_left_pane_g1_ParamLimits

0x6738,	// (0x00032855) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6738,	// (0x00032855) bg_vkb2_fuc_pane_cp03

0x71d6,	// (0x000332f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99f0,	// (0x00035b0d) bg_vkb2_func_pane_g1

0x99f8,	// (0x00035b15) bg_vkb2_func_pane_g2

0x9a08,	// (0x00035b25) bg_vkb2_func_pane_g3

0x9a00,	// (0x00035b1d) bg_vkb2_func_pane_g4

0x9a10,	// (0x00035b2d) bg_vkb2_func_pane_g5

0x9a18,	// (0x00035b35) bg_vkb2_func_pane_g6

0x9a20,	// (0x00035b3d) bg_vkb2_func_pane_g7

0x9a28,	// (0x00035b45) bg_vkb2_func_pane_g8

0x99e8,	// (0x00035b05) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x0003beff) bg_vkb2_func_pane_g

0x6738,	// (0x00032855) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6738,	// (0x00032855) bg_vkb2_fuc_pane_cp01

0x7178,	// (0x00033295) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7178,	// (0x00033295) vkb2_top_cell_right_wide_pane_g1

0x6738,	// (0x00032855) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6738,	// (0x00032855) bg_vkb2_fuc_pane_cp02

0x71d6,	// (0x000332f3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71d6,	// (0x000332f3) vkb2_top_cell_right_narrow_pane_g1

0xd569,	// (0x00039686) aid_touch_area_decrease_ParamLimits

0xd569,	// (0x00039686) aid_touch_area_decrease

0xd58d,	// (0x000396aa) aid_touch_area_increase_ParamLimits

0xd58d,	// (0x000396aa) aid_touch_area_increase

0xd5a5,	// (0x000396c2) aid_touch_area_mute_ParamLimits

0xd5a5,	// (0x000396c2) aid_touch_area_mute

0xd5c1,	// (0x000396de) aid_touch_area_slider_ParamLimits

0xd5c1,	// (0x000396de) aid_touch_area_slider

0xd6ab,	// (0x000397c8) popup_slider_window_g4_ParamLimits

0xd6ab,	// (0x000397c8) popup_slider_window_g4

0xd6c3,	// (0x000397e0) popup_slider_window_g5_ParamLimits

0xd6c3,	// (0x000397e0) popup_slider_window_g5

0xd6e5,	// (0x00039802) popup_slider_window_g6_ParamLimits

0xd6e5,	// (0x00039802) popup_slider_window_g6

0xd723,	// (0x00039840) popup_slider_window_t2_ParamLimits

0xd723,	// (0x00039840) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x0003bdf9) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x0003bdf9) popup_slider_window_t

0xd73b,	// (0x00039858) slider_pane_ParamLimits

0xd73b,	// (0x00039858) slider_pane

0xe442,	// (0x0003a55f) slider_pane_g1_ParamLimits

0xe442,	// (0x0003a55f) slider_pane_g1

0xe456,	// (0x0003a573) slider_pane_g2_ParamLimits

0xe456,	// (0x0003a573) slider_pane_g2

0xe46c,	// (0x0003a589) slider_pane_g3_ParamLimits

0xe46c,	// (0x0003a589) slider_pane_g3

0x0003,

0xfdf5,	// (0x0003bf12) slider_pane_g_ParamLimits

0xfdf5,	// (0x0003bf12) slider_pane_g

0x5bd0,	// (0x00031ced) popup_tb_float_extension_window_ParamLimits

0x5bd0,	// (0x00031ced) popup_tb_float_extension_window

0xe498,	// (0x0003a5b5) aid_size_cell_tb_float_ext

0x2972,	// (0x0002ea8f) bg_popup_sub_window_cp28

0xe4a4,	// (0x0003a5c1) grid_tb_float_ext_pane

0xe4ae,	// (0x0003a5cb) cell_tb_float_ext_pane_ParamLimits

0xe4ae,	// (0x0003a5cb) cell_tb_float_ext_pane

0xe4c8,	// (0x0003a5e5) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0003a5ee) grid_highlight_pane_cp12

0x6887,	// (0x000329a4) cell_last_hwr_side_pane_ParamLimits

0x6887,	// (0x000329a4) cell_last_hwr_side_pane

0xc03b,	// (0x00038158) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0003a5f7) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x0003bf1b) cell_last_hwr_side_pane_g

0x709e,	// (0x000331bb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x709e,	// (0x000331bb) vkb2_area_bottom_space_btn_pane

0x699d,	// (0x00032aba) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf9d,	// (0x0003a0ba) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7334,	// (0x00033451) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7353,	// (0x00033470) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7353,	// (0x00033470) vkb2_area_bottom_space_btn_pane_g1

0x738d,	// (0x000334aa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x738d,	// (0x000334aa) vkb2_area_bottom_space_btn_pane_g2

0x73c3,	// (0x000334e0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73c3,	// (0x000334e0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x0003bf20) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x0003bf20) vkb2_area_bottom_space_btn_pane_g

0x67fb,	// (0x00032918) cel_fep_hwr_func_pane_ParamLimits

0x67fb,	// (0x00032918) cel_fep_hwr_func_pane

0x6837,	// (0x00032954) cell_hwr_side_button_pane_ParamLimits

0x6837,	// (0x00032954) cell_hwr_side_button_pane

0xd979,	// (0x00039a96) aid_area_touch_clock_ParamLimits

0x7c11,	// (0x00033d2e) bg_uniindi_top_pane_ParamLimits

0xd98b,	// (0x00039aa8) uniindi_top_pane_g1_ParamLimits

0xd9a1,	// (0x00039abe) uniindi_top_pane_g2_ParamLimits

0xd9ad,	// (0x00039aca) uniindi_top_pane_g3_ParamLimits

0xd9be,	// (0x00039adb) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x0003be31) uniindi_top_pane_g_ParamLimits

0xd9cb,	// (0x00039ae8) uniindi_top_pane_t1_ParamLimits

0x7c11,	// (0x00033d2e) bg_vkb2_func_pane_cp01_ParamLimits

0x7c11,	// (0x00033d2e) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0003a600) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0003a600) cel_fep_hwr_func_pane_g1

0x7c11,	// (0x00033d2e) bg_vkb2_func_pane_cp02_ParamLimits

0x7c11,	// (0x00033d2e) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0003a600) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0003a600) cell_hwr_side_button_pane_g1

0x9869,	// (0x00035986) status_pane_g4_ParamLimits

0x9869,	// (0x00035986) status_pane_g4

0x9883,	// (0x000359a0) status_pane_t1

0xbd80,	// (0x00037e9d) form2_midp_gauge_slider_cont_pane

0xbd88,	// (0x00037ea5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd9a,	// (0x00037eb7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdac,	// (0x00037ec9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad4,	// (0x0003bbf1) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdbe,	// (0x00037edb) form2_midp_slider_pane_ParamLimits

0x6d0d,	// (0x00032e2a) aid_size_cell_func_vkb2_ParamLimits

0x6d0d,	// (0x00032e2a) aid_size_cell_func_vkb2

0xe484,	// (0x0003a5a1) slider_pane_g4_ParamLimits

0xe484,	// (0x0003a5a1) slider_pane_g4

0x740d,	// (0x0003352a) form2_midp_gauge_slider_pane_t2_cp01

0x741b,	// (0x00033538) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x741b,	// (0x00033538) form2_midp_gauge_slider_pane_t3_cp01

0x7438,	// (0x00033555) form2_midp_slider_pane_cp01

0x2972,	// (0x0002ea8f) navi_smil_pane

0xe51c,	// (0x0003a639) navi_smil_pane_g1

0xe524,	// (0x0003a641) navi_smil_pane_t1

0xe4f1,	// (0x0003a60e) form2_midp_slider_pane_g1

0xe4fa,	// (0x0003a617) form2_midp_slider_pane_g2

0xe502,	// (0x0003a61f) form2_midp_slider_pane_g3

0xe4f1,	// (0x0003a60e) form2_midp_slider_pane_g4

0xe50a,	// (0x0003a627) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x0003bf29) form2_midp_slider_pane_g

0x73fd,	// (0x0003351a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73fd,	// (0x0003351a) vkb2_area_bottom_space_btn_pane_g4

0x9698,	// (0x000357b5) lc0_navi_pane_ParamLimits

0x9698,	// (0x000357b5) lc0_navi_pane

0x970e,	// (0x0003582b) lc0_stat_indi_pane_ParamLimits

0x970e,	// (0x0003582b) lc0_stat_indi_pane

0x9725,	// (0x00035842) ls0_title_pane_ParamLimits

0x9725,	// (0x00035842) ls0_title_pane

0x8215,	// (0x00034332) bg_popup_sub_pane_cp14_ParamLimits

0xd960,	// (0x00039a7d) list_uniindi_pane_ParamLimits

0xd96c,	// (0x00039a89) uniindi_top_pane_ParamLimits

0xda08,	// (0x00039b25) list_single_uniindi_pane_g1_ParamLimits

0xda1b,	// (0x00039b38) list_single_uniindi_pane_t1_ParamLimits

0x7441,	// (0x0003355e) lc0_stat_clock_pane_ParamLimits

0x7441,	// (0x0003355e) lc0_stat_clock_pane

0xe532,	// (0x0003a64f) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0003a64f) lc0_stat_indi_pane_g1

0xe53f,	// (0x0003a65c) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0003a65c) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x0003bf34) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x0003bf34) lc0_stat_indi_pane_g

0x744e,	// (0x0003356b) lc0_uni_indicator_pane_ParamLimits

0x744e,	// (0x0003356b) lc0_uni_indicator_pane

0xe54c,	// (0x0003a669) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0003a669) ls0_title_pane_g1

0xe560,	// (0x0003a67d) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0003a67d) ls0_title_pane_t1

0x745b,	// (0x00033578) lc0_uni_indicator_pane_g1_ParamLimits

0x745b,	// (0x00033578) lc0_uni_indicator_pane_g1

0xe596,	// (0x0003a6b3) lc0_stat_clock_pane_t1

0x46c8,	// (0x000307e5) main_ai5_pane

0xe5a4,	// (0x0003a6c1) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0003a6c1) ai5_sk_pane

0xe5b1,	// (0x0003a6ce) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0003a6ce) cell_ai5_widget_pane

0xe67a,	// (0x0003a797) aid_size_cell_widget_grid

0xe690,	// (0x0003a7ad) bg_ai5_widget_pane_ParamLimits

0xe690,	// (0x0003a7ad) bg_ai5_widget_pane

0xe70c,	// (0x0003a829) cell_ai5_widget_pane_g2

0xe720,	// (0x0003a83d) cell_ai5_widget_pane_g3

0xe73a,	// (0x0003a857) cell_ai5_widget_pane_g4

0xe74a,	// (0x0003a867) cell_ai5_widget_pane_g5

0xe75a,	// (0x0003a877) cell_ai5_widget_pane_g6

0xe766,	// (0x0003a883) cell_ai5_widget_pane_g7

0xe7d2,	// (0x0003a8ef) cell_ai5_widget_pane_t1_ParamLimits

0xe7d2,	// (0x0003a8ef) cell_ai5_widget_pane_t1

0xe7ef,	// (0x0003a90c) cell_ai5_widget_pane_t2_ParamLimits

0xe7ef,	// (0x0003a90c) cell_ai5_widget_pane_t2

0xe807,	// (0x0003a924) cell_ai5_widget_pane_t3_ParamLimits

0xe807,	// (0x0003a924) cell_ai5_widget_pane_t3

0xe81f,	// (0x0003a93c) cell_ai5_widget_pane_t4_ParamLimits

0xe81f,	// (0x0003a93c) cell_ai5_widget_pane_t4

0xe845,	// (0x0003a962) cell_ai5_widget_pane_t5_ParamLimits

0xe845,	// (0x0003a962) cell_ai5_widget_pane_t5

0xe864,	// (0x0003a981) cell_ai5_widget_pane_t6_ParamLimits

0xe864,	// (0x0003a981) cell_ai5_widget_pane_t6

0xe876,	// (0x0003a993) cell_ai5_widget_pane_t7_ParamLimits

0xe876,	// (0x0003a993) cell_ai5_widget_pane_t7

0xe895,	// (0x0003a9b2) cell_ai5_widget_pane_t8_ParamLimits

0xe895,	// (0x0003a9b2) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x0003bf54) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x0003bf54) cell_ai5_widget_pane_t

0xe919,	// (0x0003aa36) grid_ai5_widget_pane

0x8215,	// (0x00034332) highlight_cell_ai5_widget_pane_ParamLimits

0x8215,	// (0x00034332) highlight_cell_ai5_widget_pane

0xe930,	// (0x0003aa4d) ai5_sk_left_pane

0xe93a,	// (0x0003aa57) ai5_sk_middle_pane

0xe944,	// (0x0003aa61) ai5_sk_right_pane

0xe94e,	// (0x0003aa6b) bg_ai5_widget_pane_g1_ParamLimits

0xe94e,	// (0x0003aa6b) bg_ai5_widget_pane_g1

0xe95a,	// (0x0003aa77) bg_ai5_widget_pane_g2_ParamLimits

0xe95a,	// (0x0003aa77) bg_ai5_widget_pane_g2

0xe966,	// (0x0003aa83) bg_ai5_widget_pane_g3_ParamLimits

0xe966,	// (0x0003aa83) bg_ai5_widget_pane_g3

0xe972,	// (0x0003aa8f) bg_ai5_widget_pane_g4_ParamLimits

0xe972,	// (0x0003aa8f) bg_ai5_widget_pane_g4

0xe97e,	// (0x0003aa9b) bg_ai5_widget_pane_g5_ParamLimits

0xe97e,	// (0x0003aa9b) bg_ai5_widget_pane_g5

0xe98a,	// (0x0003aaa7) bg_ai5_widget_pane_g6_ParamLimits

0xe98a,	// (0x0003aaa7) bg_ai5_widget_pane_g6

0xe996,	// (0x0003aab3) bg_ai5_widget_pane_g7_ParamLimits

0xe996,	// (0x0003aab3) bg_ai5_widget_pane_g7

0xe9a2,	// (0x0003aabf) bg_ai5_widget_pane_g8_ParamLimits

0xe9a2,	// (0x0003aabf) bg_ai5_widget_pane_g8

0xe9ae,	// (0x0003aacb) bg_ai5_widget_pane_g9_ParamLimits

0xe9ae,	// (0x0003aacb) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0003bf6d) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0003bf6d) bg_ai5_widget_pane_g

0xe9e0,	// (0x0003aafd) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9e0,	// (0x0003aafd) cell_shortcut_ai5_widget_pane

0x919a,	// (0x000352b7) bg_cell_shortcut_ai5_widget_pane

0xe9f1,	// (0x0003ab0e) cell_grid_ai5_widget_pane_g1

0x919a,	// (0x000352b7) highlight_cell_shortcut_ai5_widget_pane

0x99f0,	// (0x00035b0d) ai5_sk_left_pane_g1

0xe9fa,	// (0x0003ab17) ai5_sk_left_pane_g2

0xea02,	// (0x0003ab1f) ai5_sk_left_pane_g3

0xea0a,	// (0x0003ab27) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x0003bf80) ai5_sk_left_pane_g

0xea12,	// (0x0003ab2f) ai5_sk_left_pane_t1

0x99f8,	// (0x00035b15) ai5_sk_right_pane_g1

0xea20,	// (0x0003ab3d) ai5_sk_right_pane_g2

0xea28,	// (0x0003ab45) ai5_sk_right_pane_g3

0xea30,	// (0x0003ab4d) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x0003bf89) ai5_sk_right_pane_g

0xea38,	// (0x0003ab55) ai5_sk_right_pane_t1

0x99f8,	// (0x00035b15) ai5_sk_middle_pane_g1

0x99f0,	// (0x00035b0d) ai5_sk_middle_pane_g2

0x9a10,	// (0x00035b2d) ai5_sk_middle_pane_g3

0xea28,	// (0x0003ab45) ai5_sk_middle_pane_g4

0xea02,	// (0x0003ab1f) ai5_sk_middle_pane_g5

0xea46,	// (0x0003ab63) ai5_sk_middle_pane_g6

0xea4e,	// (0x0003ab6b) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x0003bf92) ai5_sk_middle_pane_g

0x951e,	// (0x0003563b) aid_touch_area_size_lc0_ParamLimits

0x951e,	// (0x0003563b) aid_touch_area_size_lc0

0x69cc,	// (0x00032ae9) cell_hwr_candidate_pane_t1_ParamLimits

0x953a,	// (0x00035657) aid_touch_navi_pane

0x9813,	// (0x00035930) status_dt_navi_pane_ParamLimits

0x9813,	// (0x00035930) status_dt_navi_pane

0x9820,	// (0x0003593d) status_dt_sta_pane_ParamLimits

0x9820,	// (0x0003593d) status_dt_sta_pane

0xea56,	// (0x0003ab73) dt_sta_controll_pane

0xea63,	// (0x0003ab80) dt_sta_indi_pane

0xea74,	// (0x0003ab91) dt_sta_title_pane

0x7c11,	// (0x00033d2e) bg_dt_sta_indi_pane_ParamLimits

0x7c11,	// (0x00033d2e) bg_dt_sta_indi_pane

0xea87,	// (0x0003aba4) dt_sta_battery_pane

0xea8f,	// (0x0003abac) dt_sta_indi_pane_g1

0xea98,	// (0x0003abb5) dt_sta_indi_pane_g2

0xeaa1,	// (0x0003abbe) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x0003bfa1) dt_sta_indi_pane_g

0xeaaa,	// (0x0003abc7) dt_sta_signal_pane

0x8215,	// (0x00034332) bg_dt_sta_title_pane_ParamLimits

0x8215,	// (0x00034332) bg_dt_sta_title_pane

0xeab3,	// (0x0003abd0) dt_sta_title_pane_g1

0xeabb,	// (0x0003abd8) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0003abd8) dt_sta_title_pane_t1

0x2972,	// (0x0002ea8f) bg_dt_sta_control_pane

0xead0,	// (0x0003abed) dt_sta_controll_pane_g1

0xead9,	// (0x0003abf6) bg_dt_sta_title_pane_g1

0xeae2,	// (0x0003abff) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0003ac08) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x0003bfa8) bg_dt_sta_title_pane_g

0xc03b,	// (0x00038158) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x0003ac11) dt_sta_signal_pane_g1

0xeafc,	// (0x0003ac19) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x0003bfaf) dt_sta_signal_pane_g

0xeb04,	// (0x0003ac21) dt_sta_battery_pane_g1

0xeb0d,	// (0x0003ac2a) dt_sta_battery_pane_t1

0xc03b,	// (0x00038158) bg_dt_sta_control_pane_g1

0x8c96,	// (0x00034db3) fep_china_uni_eep_pane

0x8c9e,	// (0x00034dbb) fep_china_uni_entry_pane_ParamLimits

0x8cae,	// (0x00034dcb) popup_fep_china_uni_window_g1_ParamLimits

0x8cbe,	// (0x00034ddb) popup_fep_china_uni_window_g2_ParamLimits

0x8cbe,	// (0x00034ddb) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003b815) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003b815) popup_fep_china_uni_window_g

0xeb1c,	// (0x0003ac39) fep_china_uni_eep_pane_g1

0xeb24,	// (0x0003ac41) fep_china_uni_eep_pane_t1

0xe513,	// (0x0003a630) aid_touch_area_size_smil_player

0x9690,	// (0x000357ad) lc0_clock_pane

0x9877,	// (0x00035994) status_pane_g5_ParamLimits

0x9877,	// (0x00035994) status_pane_g5

0x5895,	// (0x000319b2) popup_keymap_window

0x9835,	// (0x00035952) status_icon_pane

0xe720,	// (0x0003a83d) cell_ai5_widget_pane_g3_ParamLimits

0xe73a,	// (0x0003a857) cell_ai5_widget_pane_g4_ParamLimits

0xe74a,	// (0x0003a867) cell_ai5_widget_pane_g5_ParamLimits

0xe772,	// (0x0003a88f) cell_ai5_widget_pane_g8_ParamLimits

0xe772,	// (0x0003a88f) cell_ai5_widget_pane_g8

0xe786,	// (0x0003a8a3) cell_ai5_widget_pane_g9_ParamLimits

0xe786,	// (0x0003a8a3) cell_ai5_widget_pane_g9

0xe79a,	// (0x0003a8b7) cell_ai5_widget_pane_g10_ParamLimits

0xe79a,	// (0x0003a8b7) cell_ai5_widget_pane_g10

0xeb33,	// (0x0003ac50) status_icon_pane_g1

0x2972,	// (0x0002ea8f) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0003ac58) popup_keymap_window_t1

0x946f,	// (0x0003558c) control_pane_g6_ParamLimits

0x946f,	// (0x0003558c) control_pane_g6

0x947c,	// (0x00035599) control_pane_g7_ParamLimits

0x947c,	// (0x00035599) control_pane_g7

0x9489,	// (0x000355a6) control_pane_g8_ParamLimits

0x9489,	// (0x000355a6) control_pane_g8

0xea56,	// (0x0003ab73) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x0003ab80) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x0003ab91) dt_sta_title_pane_ParamLimits

0x814d,	// (0x0003426a) aid_size_touch_scroll_bar_cale

0x47a1,	// (0x000308be) popup_discreet_window_ParamLimits

0x47a1,	// (0x000308be) popup_discreet_window

0x4829,	// (0x00030946) popup_sk_window

0xa077,	// (0x00036194) bg_popup_sub_pane_cp28_ParamLimits

0xa077,	// (0x00036194) bg_popup_sub_pane_cp28

0xeb49,	// (0x0003ac66) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0003ac66) popup_discreet_window_g1

0xeb69,	// (0x0003ac86) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x0003ac86) popup_discreet_window_t1

0xeb87,	// (0x0003aca4) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x0003aca4) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x0003bfb4) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x0003bfb4) popup_discreet_window_t

0x746f,	// (0x0003358c) popup_sk_window_g1

0x7479,	// (0x00033596) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x0003bfbb) popup_sk_window_g

0x7481,	// (0x0003359e) popup_sk_window_t1

0x748f,	// (0x000335ac) popup_sk_window_t1_copy1

0xe70c,	// (0x0003a829) cell_ai5_widget_pane_g2_ParamLimits

0xe8a7,	// (0x0003a9c4) cell_ai5_widget_pane_t9_ParamLimits

0xe8a7,	// (0x0003a9c4) cell_ai5_widget_pane_t9

0x2972,	// (0x0002ea8f) main_fep_fshwr2_pane

0x749d,	// (0x000335ba) aid_fshwr2_btn_pane

0x74a9,	// (0x000335c6) aid_fshwr2_syb_pane

0x74bb,	// (0x000335d8) aid_fshwr2_txt_pane

0x74c7,	// (0x000335e4) fshwr2_func_candi_pane

0x74e3,	// (0x00033600) fshwr2_hwr_syb_pane

0x74fd,	// (0x0003361a) fshwr2_icf_pane

0x46c8,	// (0x000307e5) fshwr2_icf_bg_pane

0x752b,	// (0x00033648) fshwr2_icf_pane_t1_ParamLimits

0x752b,	// (0x00033648) fshwr2_icf_pane_t1

0x8b84,	// (0x00034ca1) fshwr2_func_candi_pane_g1

0xebd9,	// (0x0003acf6) fshwr2_func_candi_row_pane_ParamLimits

0xebd9,	// (0x0003acf6) fshwr2_func_candi_row_pane

0x7543,	// (0x00033660) cell_fshwr2_syb_pane_ParamLimits

0x7543,	// (0x00033660) cell_fshwr2_syb_pane

0x7566,	// (0x00033683) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7566,	// (0x00033683) fshwr2_hwr_syb_pane_g1

0x46c8,	// (0x000307e5) bg_popup_call_pane_cp01

0x7574,	// (0x00033691) fshwr2_func_candi_cell_pane_ParamLimits

0x7574,	// (0x00033691) fshwr2_func_candi_cell_pane

0xa6eb,	// (0x00036808) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6eb,	// (0x00036808) fshwr2_func_candi_cell_bg_pane

0x75bf,	// (0x000336dc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x75bf,	// (0x000336dc) fshwr2_func_candi_cell_pane_g1

0x75df,	// (0x000336fc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x75df,	// (0x000336fc) fshwr2_func_candi_cell_pane_t1

0x46c8,	// (0x000307e5) bg_button_pane_cp08

0x94be,	// (0x000355db) cell_fshwr2_syb_bg_pane

0x75f2,	// (0x0003370f) cell_fshwr2_syb_bg_pane_g1

0x7606,	// (0x00033723) cell_fshwr2_syb_bg_pane_t1

0x8215,	// (0x00034332) main_tmo_pane

0xab86,	// (0x00036ca3) uni_indicator_pane_g1_ParamLimits

0xab9c,	// (0x00036cb9) uni_indicator_pane_g2_ParamLimits

0xabb2,	// (0x00036ccf) uni_indicator_pane_g3_ParamLimits

0xabc5,	// (0x00036ce2) uni_indicator_pane_g4_ParamLimits

0xabc5,	// (0x00036ce2) uni_indicator_pane_g4

0xabd9,	// (0x00036cf6) uni_indicator_pane_g5_ParamLimits

0xabd9,	// (0x00036cf6) uni_indicator_pane_g5

0xabd9,	// (0x00036cf6) uni_indicator_pane_g6_ParamLimits

0xabd9,	// (0x00036cf6) uni_indicator_pane_g6

0xf8fc,	// (0x0003ba19) uni_indicator_pane_g_ParamLimits

0xd545,	// (0x00039662) popup_tmo_note_window_ParamLimits

0xd545,	// (0x00039662) popup_tmo_note_window

0x6cef,	// (0x00032e0c) fshwr2_bg_pane

0x75d0,	// (0x000336ed) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x75d0,	// (0x000336ed) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x0003bfc0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x0003bfc0) fshwr2_func_candi_cell_pane_g

0x6985,	// (0x00032aa2) bg_popup_window_pane_cp01

0x761c,	// (0x00033739) bg_popup_window_pane_g1_cp01

0xec00,	// (0x0003ad1d) bg_popup_window_pane_cp22_ParamLimits

0xec00,	// (0x0003ad1d) bg_popup_window_pane_cp22

0xec0e,	// (0x0003ad2b) listscroll_tmo_link_pane_ParamLimits

0xec0e,	// (0x0003ad2b) listscroll_tmo_link_pane

0xec4e,	// (0x0003ad6b) popup_tmo_note_window_g1_ParamLimits

0xec4e,	// (0x0003ad6b) popup_tmo_note_window_g1

0xec5b,	// (0x0003ad78) tmo_note_info_pane_ParamLimits

0xec5b,	// (0x0003ad78) tmo_note_info_pane

0xec75,	// (0x0003ad92) list_tmo_note_info_pane_g1_ParamLimits

0xec75,	// (0x0003ad92) list_tmo_note_info_pane_g1

0xec8c,	// (0x0003ada9) list_tmo_note_info_pane_g2_ParamLimits

0xec8c,	// (0x0003ada9) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x0003bfc5) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x0003bfc5) list_tmo_note_info_pane_g

0xeca8,	// (0x0003adc5) list_tmo_note_info_text_pane_ParamLimits

0xeca8,	// (0x0003adc5) list_tmo_note_info_text_pane

0xed29,	// (0x0003ae46) list_tmo_link_pane

0xed36,	// (0x0003ae53) scroll_pane_cp20

0xed43,	// (0x0003ae60) list_single_tmo_link_pane_ParamLimits

0xed43,	// (0x0003ae60) list_single_tmo_link_pane

0xed53,	// (0x0003ae70) list_single_tmo_link_pane_t1

0xed61,	// (0x0003ae7e) list_tmo_note_info_text_pane_t1_ParamLimits

0xed61,	// (0x0003ae7e) list_tmo_note_info_text_pane_t1

0x82d1,	// (0x000343ee) aid_size_touch_scroll_bar_cp01_ParamLimits

0x82d1,	// (0x000343ee) aid_size_touch_scroll_bar_cp01

0x4f4c,	// (0x00031069) aid_size_touch_slider_marker

0x4811,	// (0x0003092e) popup_settings_window_ParamLimits

0x4811,	// (0x0003092e) popup_settings_window

0x5718,	// (0x00031835) popup_candi_list_indi_window

0x953a,	// (0x00035657) aid_touch_navi_pane_ParamLimits

0x6c4a,	// (0x00032d67) rs_clock_indi_pane

0x6c53,	// (0x00032d70) sctrl_sk_bottom_pane_ParamLimits

0x6c64,	// (0x00032d81) sctrl_sk_top_pane_ParamLimits

0x6d67,	// (0x00032e84) popup_fep_tooltip_window

0xe67a,	// (0x0003a797) aid_size_cell_widget_grid_ParamLimits

0xe6f7,	// (0x0003a814) cell_ai5_widget_pane_g1_ParamLimits

0xe6f7,	// (0x0003a814) cell_ai5_widget_pane_g1

0xe75a,	// (0x0003a877) cell_ai5_widget_pane_g6_ParamLimits

0xe766,	// (0x0003a883) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x0003bf39) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x0003bf39) cell_ai5_widget_pane_g

0xe8d6,	// (0x0003a9f3) cell_ai5_widget_pane_t10_ParamLimits

0xe8d6,	// (0x0003a9f3) cell_ai5_widget_pane_t10

0xe919,	// (0x0003aa36) grid_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0003aad7) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ba,	// (0x0003aad7) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x0003acb9) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x0003acb9) popup_discreet_window_t3

0x7515,	// (0x00033632) popup_fshwr2_char_preview_window_ParamLimits

0x7515,	// (0x00033632) popup_fshwr2_char_preview_window

0xecc6,	// (0x0003ade3) tmo_note_info_pane_t1

0xecdb,	// (0x0003adf8) tmo_note_info_pane_t2

0xecf0,	// (0x0003ae0d) tmo_note_info_pane_t3

0xed05,	// (0x0003ae22) tmo_note_info_pane_t4

0xed17,	// (0x0003ae34) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x0003bfca) tmo_note_info_pane_t

0xed29,	// (0x0003ae46) list_tmo_link_pane_ParamLimits

0xed36,	// (0x0003ae53) scroll_pane_cp20_ParamLimits

0x46c8,	// (0x000307e5) bg_popup_fep_char_preview_window_cp01

0xed7a,	// (0x0003ae97) popup_fshwr2_char_preview_window_t1

0xed88,	// (0x0003aea5) popup_candi_list_indi_window_g1

0xed91,	// (0x0003aeae) bg_cell_contacts_ai5_widget_pane

0xed9d,	// (0x0003aeba) cell_contacts_ai5_widget_pane_g1

0xc6d9,	// (0x000387f6) cell_contacts_ai5_widget_pane_g2

0xedb2,	// (0x0003aecf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x0003bfd5) cell_contacts_ai5_widget_pane_g

0xedbe,	// (0x0003aedb) cell_contacts_ai5_widget_pane_t1

0x8215,	// (0x00034332) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee35,	// (0x0003af52) settings_container_pane

0x919a,	// (0x000352b7) listscroll_set_pane_copy1

0xb725,	// (0x00037842) scroll_pane_cp121_copy1

0x9e14,	// (0x00035f31) set_content_pane_copy1

0xee41,	// (0x0003af5e) aid_height_set_list_copy1_ParamLimits

0xee41,	// (0x0003af5e) aid_height_set_list_copy1

0xadd1,	// (0x00036eee) aid_size_parent_copy1_ParamLimits

0xadd1,	// (0x00036eee) aid_size_parent_copy1

0xee4d,	// (0x0003af6a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee4d,	// (0x0003af6a) button_value_adjust_pane_cp6_copy1

0x94be,	// (0x000355db) list_highlight_pane_cp2_copy1_ParamLimits

0x94be,	// (0x000355db) list_highlight_pane_cp2_copy1

0xee61,	// (0x0003af7e) list_set_pane_copy1_ParamLimits

0xee61,	// (0x0003af7e) list_set_pane_copy1

0xedd0,	// (0x0003aeed) main_pane_set_t1_copy1_ParamLimits

0xedd0,	// (0x0003aeed) main_pane_set_t1_copy1

0xee0a,	// (0x0003af27) main_pane_set_t2_copy1_ParamLimits

0xee0a,	// (0x0003af27) main_pane_set_t2_copy1

0xef0e,	// (0x0003b02b) main_pane_set_t3_copy1

0xef1c,	// (0x0003b039) main_pane_set_t4_copy1

0xee29,	// (0x0003af46) set_content_pane_g1_copy1_ParamLimits

0xee29,	// (0x0003af46) set_content_pane_g1_copy1

0xef2a,	// (0x0003b047) setting_code_pane_copy1

0xef32,	// (0x0003b04f) setting_slider_graphic_pane_copy1

0xef32,	// (0x0003b04f) setting_slider_pane_copy1

0xef3a,	// (0x0003b057) setting_text_pane_copy1

0xef3a,	// (0x0003b057) setting_volume_pane_copy1

0xef2a,	// (0x0003b047) settings_code_pane_cp2_copy1

0xef42,	// (0x0003b05f) settings_code_pane_cp_copy1_ParamLimits

0xef42,	// (0x0003b05f) settings_code_pane_cp_copy1

0x7625,	// (0x00033742) volume_set_pane_copy1

0xef56,	// (0x0003b073) volume_set_pane_g10_copy1

0xef5e,	// (0x0003b07b) volume_set_pane_g1_copy1

0xef66,	// (0x0003b083) volume_set_pane_g2_copy1

0xef6e,	// (0x0003b08b) volume_set_pane_g3_copy1

0xef76,	// (0x0003b093) volume_set_pane_g4_copy1

0xef7e,	// (0x0003b09b) volume_set_pane_g5_copy1

0xef86,	// (0x0003b0a3) volume_set_pane_g6_copy1

0xef8e,	// (0x0003b0ab) volume_set_pane_g7_copy1

0xef96,	// (0x0003b0b3) volume_set_pane_g8_copy1

0xef9e,	// (0x0003b0bb) volume_set_pane_g9_copy1

0x7988,	// (0x00033aa5) bg_set_opt_pane_cp_copy1_ParamLimits

0x7988,	// (0x00033aa5) bg_set_opt_pane_cp_copy1

0x762d,	// (0x0003374a) setting_slider_pane_t1_copy1_ParamLimits

0x762d,	// (0x0003374a) setting_slider_pane_t1_copy1

0x764c,	// (0x00033769) setting_slider_pane_t2_copy1_ParamLimits

0x764c,	// (0x00033769) setting_slider_pane_t2_copy1

0x7666,	// (0x00033783) setting_slider_pane_t3_copy1_ParamLimits

0x7666,	// (0x00033783) setting_slider_pane_t3_copy1

0x767e,	// (0x0003379b) slider_set_pane_copy1_ParamLimits

0x767e,	// (0x0003379b) slider_set_pane_copy1

0x826d,	// (0x0003438a) set_opt_bg_pane_g1_copy2

0x8275,	// (0x00034392) set_opt_bg_pane_g2_copy2

0xefa6,	// (0x0003b0c3) set_opt_bg_pane_g3_copy2

0x8285,	// (0x000343a2) set_opt_bg_pane_g4_copy2

0x828d,	// (0x000343aa) set_opt_bg_pane_g5_copy2

0x8295,	// (0x000343b2) set_opt_bg_pane_g6_copy2

0xefb0,	// (0x0003b0cd) set_opt_bg_pane_g7_copy2

0xefb8,	// (0x0003b0d5) set_opt_bg_pane_g8_copy2

0xefc2,	// (0x0003b0df) set_opt_bg_pane_g9_copy2

0x7694,	// (0x000337b1) aid_size_touch_slider_mark_copy1_ParamLimits

0x7694,	// (0x000337b1) aid_size_touch_slider_mark_copy1

0xefcc,	// (0x0003b0e9) slider_set_pane_g1_copy1

0x76a8,	// (0x000337c5) slider_set_pane_g2_copy1

0x6122,	// (0x0003223f) slider_set_pane_g3_copy1_ParamLimits

0x6122,	// (0x0003223f) slider_set_pane_g3_copy1

0x6136,	// (0x00032253) slider_set_pane_g4_copy1_ParamLimits

0x6136,	// (0x00032253) slider_set_pane_g4_copy1

0x614e,	// (0x0003226b) slider_set_pane_g5_copy1_ParamLimits

0x614e,	// (0x0003226b) slider_set_pane_g5_copy1

0x6122,	// (0x0003223f) slider_set_pane_g6_copy1_ParamLimits

0x6122,	// (0x0003223f) slider_set_pane_g6_copy1

0x76b0,	// (0x000337cd) slider_set_pane_g7_copy1_ParamLimits

0x76b0,	// (0x000337cd) slider_set_pane_g7_copy1

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp2_copy1

0xefd5,	// (0x0003b0f2) setting_slider_graphic_pane_g1_copy1

0xefde,	// (0x0003b0fb) setting_slider_graphic_pane_t1_copy1

0xefee,	// (0x0003b10b) setting_slider_graphic_pane_t2_copy1

0xeffe,	// (0x0003b11b) slider_set_pane_cp_copy1

0xf00e,	// (0x0003b12b) input_focus_pane_cp1_copy1

0xf017,	// (0x0003b134) list_set_text_pane_copy1

0xf01f,	// (0x0003b13c) setting_text_pane_g1_copy1

0x391f,	// (0x0002fa3c) set_text_pane_t1_copy1

0xf00e,	// (0x0003b12b) input_focus_pane_cp2_copy1

0xf01f,	// (0x0003b13c) setting_code_pane_g1_copy1

0xf028,	// (0x0003b145) setting_code_pane_t1_copy1

0xb54d,	// (0x0003766a) list_set_graphic_pane_copy1

0x78a8,	// (0x000339c5) bg_set_opt_pane_cp4_copy1

0x8e95,	// (0x00034fb2) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e95,	// (0x00034fb2) list_set_graphic_pane_g1_copy1

0xf036,	// (0x0003b153) list_set_graphic_pane_g2_copy1

0x8ead,	// (0x00034fca) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ead,	// (0x00034fca) list_set_graphic_pane_t1_copy1

0xc03b,	// (0x00038158) rs_clock_indi_pane_g1

0xf03e,	// (0x0003b15b) rs_clock_indi_pane_t1

0xf04c,	// (0x0003b169) rs_indi_pane

0xf054,	// (0x0003b171) rs_indi_pane_g1

0xf05d,	// (0x0003b17a) rs_indi_pane_g2

0xf066,	// (0x0003b183) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x0003bfdc) rs_indi_pane_g

0x919a,	// (0x000352b7) bg_popup_preview_window_pane_cp03

0xf06f,	// (0x0003b18c) popup_fep_tooltip_window_t1

0xccc3,	// (0x00038de0) popup_note2_window_g2_ParamLimits

0xccc3,	// (0x00038de0) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x0003bd69) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x0003bd69) popup_note2_window_g

0xd1be,	// (0x000392db) bg_popup_sub_pane_cp11_ParamLimits

0xd1cb,	// (0x000392e8) cell_ai3_links_pane_g1_ParamLimits

0xd1e2,	// (0x000392ff) cell_ai3_links_pane_t1

0x391f,	// (0x0002fa3c) set_text_pane_t1_copy1_ParamLimits

0x90ab,	// (0x000351c8) cell_graphic_popup_pane_cp2_ParamLimits

0x90ab,	// (0x000351c8) cell_graphic_popup_pane_cp2

0xf07d,	// (0x0003b19a) cell_graphic_popup_pane_g1_cp2

0x7f60,	// (0x0003407d) cell_graphic_popup_pane_g2_cp2

0xf085,	// (0x0003b1a2) cell_graphic_popup_pane_g3_cp2

0xf08d,	// (0x0003b1aa) cell_graphic_popup_pane_t2_cp2

0x7f71,	// (0x0003408e) grid_highlight_pane_cp3_cp2

0x889f,	// (0x000349bc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8215,	// (0x00034332) main_tmo_pane_ParamLimits

0xd539,	// (0x00039656) popup_tmo_big_image_note_window

0xe6e6,	// (0x0003a803) cell_ai5_widget_list_pane

0xe6ee,	// (0x0003a80b) cell_ai5_widget_lrg_icon_pane

0xecc6,	// (0x0003ade3) tmo_note_info_pane_t1_ParamLimits

0xecdb,	// (0x0003adf8) tmo_note_info_pane_t2_ParamLimits

0xecf0,	// (0x0003ae0d) tmo_note_info_pane_t3_ParamLimits

0xed05,	// (0x0003ae22) tmo_note_info_pane_t4_ParamLimits

0xed17,	// (0x0003ae34) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x0003bfca) tmo_note_info_pane_t_ParamLimits

0xee35,	// (0x0003af52) settings_container_pane_ParamLimits

0xf006,	// (0x0003b123) indicator_popup_pane_cp5

0xf006,	// (0x0003b123) indicator_popup_pane_cp6

0xb54d,	// (0x0003766a) list_set_graphic_pane_copy1_ParamLimits

0x2972,	// (0x0002ea8f) bg_popup_window_pane_cp23

0xf09b,	// (0x0003b1b8) popup_tmo_big_image_note_window_g1

0xf0a5,	// (0x0003b1c2) popup_tmo_big_image_note_window_t1

0xf0b5,	// (0x0003b1d2) popup_tmo_big_image_note_window_t2

0xf0c5,	// (0x0003b1e2) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x0003bfe3) popup_tmo_big_image_note_window_t

0xc03b,	// (0x00038158) cell_ai5_widget_lrg_icon_pane_g1

0xf0d5,	// (0x0003b1f2) cell_ai5_widget_lrg_icon_pane_t1

0xf0e3,	// (0x0003b200) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e3,	// (0x0003b200) cell_ai5_widget_list_row_pane

0xf0fa,	// (0x0003b217) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0fa,	// (0x0003b217) cell_ai5_widget_list_row_pane_g1

0xf107,	// (0x0003b224) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf107,	// (0x0003b224) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x0003b255) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x0003b255) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x0003bfea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x0003bfea) cell_ai5_widget_list_row_pane_t

0x46c8,	// (0x000307e5) main_fep_vtchi_ss_pane

0xf188,	// (0x0003b2a5) popup_fep_char_pre_window

0xf190,	// (0x0003b2ad) popup_fep_ituss_window

0xf1bc,	// (0x0003b2d9) popup_fep_vkbss_window

0x94be,	// (0x000355db) grid_vkbss_keypad_pane_ParamLimits

0x94be,	// (0x000355db) grid_vkbss_keypad_pane

0x94be,	// (0x000355db) ituss_keypad_pane

0x76d2,	// (0x000337ef) aid_vkbss_key_offset_ParamLimits

0x76d2,	// (0x000337ef) aid_vkbss_key_offset

0x76de,	// (0x000337fb) cell_vkbss_key_pane_ParamLimits

0x76de,	// (0x000337fb) cell_vkbss_key_pane

0xf1fc,	// (0x0003b319) bg_cell_vkbss_key_g1_ParamLimits

0xf1fc,	// (0x0003b319) bg_cell_vkbss_key_g1

0xf208,	// (0x0003b325) cell_vkbss_key_3p_pane_ParamLimits

0xf208,	// (0x0003b325) cell_vkbss_key_3p_pane

0xf23e,	// (0x0003b35b) cell_vkbss_key_g1_ParamLimits

0xf23e,	// (0x0003b35b) cell_vkbss_key_g1

0xf274,	// (0x0003b391) cell_vkbss_key_t1_ParamLimits

0xf274,	// (0x0003b391) cell_vkbss_key_t1

0x7736,	// (0x00033853) cell_ituss_key_pane_ParamLimits

0x7736,	// (0x00033853) cell_ituss_key_pane

0xf2d0,	// (0x0003b3ed) bg_cell_ituss_key_g1_ParamLimits

0xf2d0,	// (0x0003b3ed) bg_cell_ituss_key_g1

0xf2dc,	// (0x0003b3f9) cell_ituss_key_pane_g1_ParamLimits

0xf2dc,	// (0x0003b3f9) cell_ituss_key_pane_g1

0x7747,	// (0x00033864) cell_ituss_key_pane_g2_ParamLimits

0x7747,	// (0x00033864) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x0003bff1) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0003bff1) cell_ituss_key_pane_g

0x77cb,	// (0x000338e8) cell_ituss_key_t1_ParamLimits

0x77cb,	// (0x000338e8) cell_ituss_key_t1

0x7805,	// (0x00033922) cell_ituss_key_t2_ParamLimits

0x7805,	// (0x00033922) cell_ituss_key_t2

0x7836,	// (0x00033953) cell_ituss_key_t3_ParamLimits

0x7836,	// (0x00033953) cell_ituss_key_t3

0x7805,	// (0x00033922) cell_ituss_key_t4_ParamLimits

0x7805,	// (0x00033922) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0003bffe) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0003bffe) cell_ituss_key_t

0xf302,	// (0x0003b41f) cell_vkbss_key_3p_pane_g1

0xf30a,	// (0x0003b427) cell_vkbss_key_3p_pane_g2

0xf312,	// (0x0003b42f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0003c009) cell_vkbss_key_3p_pane_g

0x919a,	// (0x000352b7) bg_popup_fep_char_preview_window_cp02

0xf31a,	// (0x0003b437) popup_fep_char_pre_window_t1

0xe667,	// (0x0003a784) main_ai5_sk_pane

0xed91,	// (0x0003aeae) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed9d,	// (0x0003aeba) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6d9,	// (0x000387f6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedb2,	// (0x0003aecf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x0003bfd5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedbe,	// (0x0003aedb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8215,	// (0x00034332) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf328,	// (0x0003b445) main_ai5_sk_pane_g1

0x9eb0,	// (0x00035fcd) popup_query_code_window_g1

0xf1a6,	// (0x0003b2c3) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0003b2f0) popup_fep_vtchi_icf_pane

0x94be,	// (0x000355db) bg_icf_pane

0x94be,	// (0x000355db) list_vkb_icf_pane

0xf331,	// (0x0003b44e) bg_icf_pane_cp01

0x919a,	// (0x000352b7) vtchi_icf_list_pane

0xf3a4,	// (0x0003b4c1) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0003b4c1) list_vkb_icf_pane_t1

0xf3c5,	// (0x0003b4e2) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0003b4e2) vtchi_icf_list_pane_t1

0xf190,	// (0x0003b2ad) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0003b2f0) popup_fep_vtchi_icf_pane_ParamLimits

0x94be,	// (0x000355db) ituss_keypad_pane_ParamLimits

0x76c6,	// (0x000337e3) ituss_sks_pane

0x94be,	// (0x000355db) bg_icf_pane_ParamLimits

0xf160,	// (0x0003b27d) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0003b27d) icf_edit_indi_pane

0x94be,	// (0x000355db) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0003b44e) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x0003b298) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x0003b298) icf_edit_indi_pane_cp01

0xf344,	// (0x0003b461) vtchi_query_pane

0xe4e3,	// (0x0003a600) icf_edit_indi_pane_g1_ParamLimits

0xe4e3,	// (0x0003a600) icf_edit_indi_pane_g1

0xf43a,	// (0x0003b557) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0003b557) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0003c034) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0003c034) icf_edit_indi_pane_g

0xf44e,	// (0x0003b56b) icf_edit_indi_pane_t1

0xf3e3,	// (0x0003b500) bg_input_focus_pane_cp042

0x8144,	// (0x00034261) vtchi_button_pane

0xf3ec,	// (0x0003b509) vtchi_query_pane_t1

0xf3fa,	// (0x0003b517) vtchi_query_pane_t2

0xf408,	// (0x0003b525) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0003c023) vtchi_query_pane_t

0x46c8,	// (0x000307e5) bg_button_pane_cp13

0xf416,	// (0x0003b533) vtchi_button_pane_g1

0x7879,	// (0x00033996) ituss_sks_pane_g1

0x7884,	// (0x000339a1) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0003c02a) ituss_sks_pane_g

0xf41e,	// (0x0003b53b) ituss_sks_pane_t1

0xf42c,	// (0x0003b549) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0003c02f) ituss_sks_pane_t

0xbabd,	// (0x00037bda) indicator_nsta_pane_cp_g1

0xbac6,	// (0x00037be3) indicator_nsta_pane_cp_g2

0xbace,	// (0x00037beb) indicator_nsta_pane_cp_g3

0xbad6,	// (0x00037bf3) indicator_nsta_pane_cp_g4

0xbac6,	// (0x00037be3) indicator_nsta_pane_cp_g5

0xbace,	// (0x00037beb) indicator_nsta_pane_cp_g6

0x0005,

0xfa8a,	// (0x0003bba7) indicator_nsta_pane_cp_g

0xe23c,	// (0x0003a359) cell_graphic2_pane_t2_ParamLimits

0xe23c,	// (0x0003a359) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x0003bec0) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x0003bec0) cell_graphic2_pane_t

0xe268,	// (0x0003a385) cell_graphic2_control_pane_t1

0x8c45,	// (0x00034d62) signal_pane_g3_ParamLimits

0x8c45,	// (0x00034d62) signal_pane_g3

0x8c57,	// (0x00034d74) signal_pane_g4_ParamLimits

0x8c57,	// (0x00034d74) signal_pane_g4

0xf14a,	// (0x0003b267) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x0003b267) cell_ai5_widget_list_row_pane_t3

0xf2f0,	// (0x0003b40d) cell_ituss_key_pane_t1_ParamLimits

0xf2f0,	// (0x0003b40d) cell_ituss_key_pane_t1

0x9aed,	// (0x00035c0a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9aed,	// (0x00035c0a) form_field_data_wide_pane_vc_t2

0x9b01,	// (0x00035c1e) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b01,	// (0x00035c1e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003b901) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003b901) form_field_data_wide_pane_vc_t

0xb767,	// (0x00037884) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb767,	// (0x00037884) form_field_slider_wide_pane_vc_t3

0xb845,	// (0x00037962) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb845,	// (0x00037962) form_field_popup_wide_pane_vc_t2

0xb85c,	// (0x00037979) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb85c,	// (0x00037979) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa79,	// (0x0003bb96) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003bb96) form_field_popup_wide_pane_vc_t

0x749d,	// (0x000335ba) aid_fshwr2_btn_pane_ParamLimits

0x74a9,	// (0x000335c6) aid_fshwr2_syb_pane_ParamLimits

0x74bb,	// (0x000335d8) aid_fshwr2_txt_pane_ParamLimits

0x6cef,	// (0x00032e0c) fshwr2_bg_pane_ParamLimits

0x74c7,	// (0x000335e4) fshwr2_func_candi_pane_ParamLimits

0x74e3,	// (0x00033600) fshwr2_hwr_syb_pane_ParamLimits

0x74fd,	// (0x0003361a) fshwr2_icf_pane_ParamLimits

0x663b,	// (0x00032758) list_double_graphic_pane_vc_g4_ParamLimits

0x663b,	// (0x00032758) list_double_graphic_pane_vc_g4

0x7767,	// (0x00033884) cell_ituss_key_pane_g3_ParamLimits

0x7767,	// (0x00033884) cell_ituss_key_pane_g3

0x7867,	// (0x00033984) cell_ituss_key_t5_ParamLimits

0x7867,	// (0x00033984) cell_ituss_key_t5

0xf1bc,	// (0x0003b2d9) popup_fep_vkbss_window_ParamLimits

0xe671,	// (0x0003a78e) aid_cell_ai5_quarter

0xf44e,	// (0x0003b56b) icf_edit_indi_pane_t1_ParamLimits

0x7cb9,	// (0x00033dd6) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7cb9,	// (0x00033dd6) aid_tch_indicator_popup_pane_cp2

0x7ccc,	// (0x00033de9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7ccc,	// (0x00033de9) aid_tch_query_popup_data_pane_cp2

0x9e58,	// (0x00035f75) aid_tch_query_popup_pane_ParamLimits

0x9e58,	// (0x00035f75) aid_tch_query_popup_pane

0x9e58,	// (0x00035f75) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e58,	// (0x00035f75) aid_tch_query_popup_data_pane_cp1

0x94be,	// (0x000355db) cell_fshwr2_syb_bg_pane_ParamLimits

0x75f2,	// (0x0003370f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7606,	// (0x00033723) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x0003b2c3) popup_fep_vkb_icf_pane_ParamLimits

0x72fd,	// (0x0003341a) bg_popup_fep_char_preview_window_g10

0xe7ae,	// (0x0003a8cb) cell_ai5_widget_pane_g11_ParamLimits

0xe7ae,	// (0x0003a8cb) cell_ai5_widget_pane_g11

0xe7ba,	// (0x0003a8d7) cell_ai5_widget_pane_g12_ParamLimits

0xe7ba,	// (0x0003a8d7) cell_ai5_widget_pane_g12

0xe7c6,	// (0x0003a8e3) cell_ai5_widget_pane_g13_ParamLimits

0xe7c6,	// (0x0003a8e3) cell_ai5_widget_pane_g13

0xe8f5,	// (0x0003aa12) cell_ai5_widget_pane_t11_ParamLimits

0xe8f5,	// (0x0003aa12) cell_ai5_widget_pane_t11

0xe907,	// (0x0003aa24) cell_ai5_widget_pane_t12_ParamLimits

0xe907,	// (0x0003aa24) cell_ai5_widget_pane_t12

0x7773,	// (0x00033890) cell_ituss_key_pane_g4_ParamLimits

0x7773,	// (0x00033890) cell_ituss_key_pane_g4

0x778f,	// (0x000338ac) cell_ituss_key_pane_g5_ParamLimits

0x778f,	// (0x000338ac) cell_ituss_key_pane_g5

0x77ab,	// (0x000338c8) cell_ituss_key_pane_g6_ParamLimits

0x77ab,	// (0x000338c8) cell_ituss_key_pane_g6

0x99e8,	// (0x00035b05) bg_icf_pane_g1

0xf34c,	// (0x0003b469) bg_icf_pane_g2

0xf358,	// (0x0003b475) bg_icf_pane_g3

0xf362,	// (0x0003b47f) bg_icf_pane_g4

0xf36e,	// (0x0003b48b) bg_icf_pane_g5

0xf378,	// (0x0003b495) bg_icf_pane_g6

0xf384,	// (0x0003b4a1) bg_icf_pane_g7

0xf38e,	// (0x0003b4ab) bg_icf_pane_g8

0xf39a,	// (0x0003b4b7) bg_icf_pane_g9

0x0008,

0xfef3,	// (0x0003c010) bg_icf_pane_g

0xf1e9,	// (0x0003b306) popup_hyb_candi_window_ParamLimits

0xf1e9,	// (0x0003b306) popup_hyb_candi_window

0x9a5c,	// (0x00035b79) bg_popup_sub_pane_cp01_ParamLimits

0x9a5c,	// (0x00035b79) bg_popup_sub_pane_cp01

0xf467,	// (0x0003b584) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0003b584) entry_hyb_candi_pane

0xf476,	// (0x0003b593) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0003b593) grid_hyb_candi_pane

0xf48b,	// (0x0003b5a8) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0003b5a8) grid_hyb_phrase_pane

0xf49a,	// (0x0003b5b7) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0003b5b7) cell_hyb_candi_pane

0xf4bd,	// (0x0003b5da) cell_hyb_candi_scroll_pane

0x8b84,	// (0x00034ca1) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003b5e3) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003b5f1) cell_hyb_phrase_pane

0x8b84,	// (0x00034ca1) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003b5fa) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003b608) entry_hyb_candi_pane_t1

0x919a,	// (0x000352b7) input_focus_pane_cp06

0xf4f9,	// (0x0003b616) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003b61e) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003b626) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003b62e) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003b636) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003b63e) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

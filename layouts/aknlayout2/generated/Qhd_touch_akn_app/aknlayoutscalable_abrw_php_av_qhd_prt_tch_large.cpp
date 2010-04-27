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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004ac6c };

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
0x777f,	// (0x000523eb) Screen

0x7793,	// (0x000523ff) application_window_ParamLimits

0x7793,	// (0x000523ff) application_window

0x77ad,	// (0x00052419) screen_g1

0x48ca,	// (0x0004f536) area_bottom_pane_ParamLimits

0x48ca,	// (0x0004f536) area_bottom_pane

0x498a,	// (0x0004f5f6) area_top_pane_ParamLimits

0x498a,	// (0x0004f5f6) area_top_pane

0x4a28,	// (0x0004f694) main_pane_ParamLimits

0x4a28,	// (0x0004f694) main_pane

0x77b7,	// (0x00052423) misc_graphics

0x986d,	// (0x000544d9) battery_pane_ParamLimits

0x986d,	// (0x000544d9) battery_pane

0xa533,	// (0x0005519f) bg_status_flat_pane_g8

0xa53b,	// (0x000551a7) bg_status_flat_pane_g9

0x992f,	// (0x0005459b) context_pane_ParamLimits

0x992f,	// (0x0005459b) context_pane

0x9a45,	// (0x000546b1) navi_pane_ParamLimits

0x9a45,	// (0x000546b1) navi_pane

0x9ac9,	// (0x00054735) signal_pane_ParamLimits

0x9ac9,	// (0x00054735) signal_pane

0x0008,

0xf87e,	// (0x0005a4ea) bg_status_flat_pane_g

0x9b36,	// (0x000547a2) status_pane_g1_ParamLimits

0x9b36,	// (0x000547a2) status_pane_g1

0x9b4a,	// (0x000547b6) status_pane_g2_ParamLimits

0x9b4a,	// (0x000547b6) status_pane_g2

0x9b56,	// (0x000547c2) status_pane_g3_ParamLimits

0x9b56,	// (0x000547c2) status_pane_g3

0x0004,

0xf7a5,	// (0x0005a411) status_pane_g_ParamLimits

0xf7a5,	// (0x0005a411) status_pane_g

0x9b8a,	// (0x000547f6) title_pane_ParamLimits

0x9b8a,	// (0x000547f6) title_pane

0x9bc7,	// (0x00054833) uni_indicator_pane_ParamLimits

0x9bc7,	// (0x00054833) uni_indicator_pane

0x9791,	// (0x000543fd) bg_list_pane_ParamLimits

0x9791,	// (0x000543fd) bg_list_pane

0x7cae,	// (0x0005291a) find_pane

0x97b1,	// (0x0005441d) listscroll_app_pane_ParamLimits

0x97b1,	// (0x0005441d) listscroll_app_pane

0x97bd,	// (0x00054429) listscroll_form_pane

0x5a34,	// (0x000506a0) listscroll_gen_pane_ParamLimits

0x5a34,	// (0x000506a0) listscroll_gen_pane

0x5a48,	// (0x000506b4) listscroll_set_pane

0x89e7,	// (0x00053653) main_idle_act_pane

0x9499,	// (0x00054105) main_idle_trad_pane

0x9499,	// (0x00054105) main_list_empty_pane

0x97d7,	// (0x00054443) main_midp_pane

0x97e3,	// (0x0005444f) main_pane_g1_ParamLimits

0x97e3,	// (0x0005444f) main_pane_g1

0x5a5e,	// (0x000506ca) popup_ai_message_window_ParamLimits

0x5a5e,	// (0x000506ca) popup_ai_message_window

0x5b0c,	// (0x00050778) popup_fep_china_uni_window_ParamLimits

0x5b0c,	// (0x00050778) popup_fep_china_uni_window

0x5b68,	// (0x000507d4) popup_fep_japan_candidate_window_ParamLimits

0x5b68,	// (0x000507d4) popup_fep_japan_candidate_window

0x5b88,	// (0x000507f4) popup_fep_japan_predictive_window_ParamLimits

0x5b88,	// (0x000507f4) popup_fep_japan_predictive_window

0x5bb8,	// (0x00050824) popup_find_window

0x5bc5,	// (0x00050831) popup_grid_graphic_window_ParamLimits

0x5bc5,	// (0x00050831) popup_grid_graphic_window

0x5bef,	// (0x0005085b) popup_large_graphic_colour_window

0x5c15,	// (0x00050881) popup_menu_window_ParamLimits

0x5c15,	// (0x00050881) popup_menu_window

0x5dcd,	// (0x00050a39) popup_note_image_window

0x5db9,	// (0x00050a25) popup_note_wait_window_ParamLimits

0x5db9,	// (0x00050a25) popup_note_wait_window

0x5db9,	// (0x00050a25) popup_note_window_ParamLimits

0x5db9,	// (0x00050a25) popup_note_window

0x5e23,	// (0x00050a8f) popup_query_code_window_ParamLimits

0x5e23,	// (0x00050a8f) popup_query_code_window

0x5e37,	// (0x00050aa3) popup_query_data_code_window_ParamLimits

0x5e37,	// (0x00050aa3) popup_query_data_code_window

0x5e54,	// (0x00050ac0) popup_query_data_window_ParamLimits

0x5e54,	// (0x00050ac0) popup_query_data_window

0x5e70,	// (0x00050adc) popup_query_sat_info_window_ParamLimits

0x5e70,	// (0x00050adc) popup_query_sat_info_window

0x5ea9,	// (0x00050b15) popup_snote_single_graphic_window_ParamLimits

0x5ea9,	// (0x00050b15) popup_snote_single_graphic_window

0x5ea9,	// (0x00050b15) popup_snote_single_text_window_ParamLimits

0x5ea9,	// (0x00050b15) popup_snote_single_text_window

0x5ebe,	// (0x00050b2a) popup_sub_window_general

0x5fee,	// (0x00050c5a) popup_window_general_ParamLimits

0x5fee,	// (0x00050c5a) popup_window_general

0x97f1,	// (0x0005445d) power_save_pane

0x58d0,	// (0x0005053c) control_pane_g1_ParamLimits

0x58d0,	// (0x0005053c) control_pane_g1

0x58f7,	// (0x00050563) control_pane_g2_ParamLimits

0x58f7,	// (0x00050563) control_pane_g2

0x9754,	// (0x000543c0) control_pane_g3_ParamLimits

0x9754,	// (0x000543c0) control_pane_g3

0x0007,

0xf78d,	// (0x0005a3f9) control_pane_g_ParamLimits

0xf78d,	// (0x0005a3f9) control_pane_g

0x5941,	// (0x000505ad) control_pane_t1_ParamLimits

0x5941,	// (0x000505ad) control_pane_t1

0x598d,	// (0x000505f9) control_pane_t2_ParamLimits

0x598d,	// (0x000505f9) control_pane_t2

0x0002,

0xf79e,	// (0x0005a40a) control_pane_t_ParamLimits

0xf79e,	// (0x0005a40a) control_pane_t

0x9679,	// (0x000542e5) navi_navi_volume_pane_cp1

0x9681,	// (0x000542ed) status_small_icon_pane

0x9689,	// (0x000542f5) status_small_pane_g1_ParamLimits

0x9689,	// (0x000542f5) status_small_pane_g1

0x96bd,	// (0x00054329) status_small_pane_g2_ParamLimits

0x96bd,	// (0x00054329) status_small_pane_g2

0x96c9,	// (0x00054335) status_small_pane_g3_ParamLimits

0x96c9,	// (0x00054335) status_small_pane_g3

0x96d5,	// (0x00054341) status_small_pane_g4_ParamLimits

0x96d5,	// (0x00054341) status_small_pane_g4

0x96e1,	// (0x0005434d) status_small_pane_g5_ParamLimits

0x96e1,	// (0x0005434d) status_small_pane_g5

0x96ef,	// (0x0005435b) status_small_pane_g6_ParamLimits

0x96ef,	// (0x0005435b) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005a3e8) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005a3e8) status_small_pane_g

0x971e,	// (0x0005438a) status_small_pane_t1

0x9740,	// (0x000543ac) status_small_wait_pane_ParamLimits

0x9740,	// (0x000543ac) status_small_wait_pane

0x8f0b,	// (0x00053b77) aid_levels_signal_ParamLimits

0x8f0b,	// (0x00053b77) aid_levels_signal

0x8f1d,	// (0x00053b89) signal_pane_g1_ParamLimits

0x8f1d,	// (0x00053b89) signal_pane_g1

0x8f32,	// (0x00053b9e) signal_pane_g2_ParamLimits

0x8f32,	// (0x00053b9e) signal_pane_g2

0x0003,

0xf70d,	// (0x0005a379) signal_pane_g_ParamLimits

0xf70d,	// (0x0005a379) signal_pane_g

0x8f6d,	// (0x00053bd9) context_pane_g1

0x77c1,	// (0x0005242d) title_pane_g1

0x77f7,	// (0x00052463) title_pane_t1

0x785f,	// (0x000524cb) title_pane_t2

0x7885,	// (0x000524f1) title_pane_t3

0x0002,

0xf557,	// (0x0005a1c3) title_pane_t

0x9bdf,	// (0x0005484b) aid_levels_battery_ParamLimits

0x9bdf,	// (0x0005484b) aid_levels_battery

0x9bf3,	// (0x0005485f) battery_pane_g1_ParamLimits

0x9bf3,	// (0x0005485f) battery_pane_g1

0x9c09,	// (0x00054875) battery_pane_g2_ParamLimits

0x9c09,	// (0x00054875) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005a41c) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005a41c) battery_pane_g

0xae75,	// (0x00055ae1) uni_indicator_pane_g1

0xae8b,	// (0x00055af7) uni_indicator_pane_g2

0xaea1,	// (0x00055b0d) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0005a592) uni_indicator_pane_g

0x930b,	// (0x00053f77) navi_icon_pane_ParamLimits

0x930b,	// (0x00053f77) navi_icon_pane

0x9249,	// (0x00053eb5) navi_midp_pane

0x9327,	// (0x00053f93) navi_navi_pane

0x9331,	// (0x00053f9d) navi_text_pane_ParamLimits

0x9331,	// (0x00053f9d) navi_text_pane

0x77ad,	// (0x00052419) status_small_wait_pane_g1

0x83b1,	// (0x0005301d) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0005a58d) status_small_wait_pane_g

0xab9a,	// (0x00055806) navi_navi_icon_text_pane

0xaba2,	// (0x0005580e) navi_navi_pane_g1_ParamLimits

0xaba2,	// (0x0005580e) navi_navi_pane_g1

0xabb4,	// (0x00055820) navi_navi_pane_g2_ParamLimits

0xabb4,	// (0x00055820) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0005a55b) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0005a55b) navi_navi_pane_g

0xabc6,	// (0x00055832) navi_navi_tabs_pane

0xabcf,	// (0x0005583b) navi_navi_text_pane

0xab9a,	// (0x00055806) navi_navi_volume_pane

0xab76,	// (0x000557e2) navi_text_pane_t1

0xab6a,	// (0x000557d6) navi_icon_pane_g1

0xaabd,	// (0x00055729) navi_navi_text_pane_t1

0x6396,	// (0x00051002) navi_navi_volume_pane_g1

0x639e,	// (0x0005100a) volume_small_pane

0xaa23,	// (0x0005568f) navi_navi_icon_text_pane_g1

0xaa2b,	// (0x00055697) navi_navi_icon_text_pane_t1

0x9327,	// (0x00053f93) navi_tabs_2_long_pane

0x9327,	// (0x00053f93) navi_tabs_2_pane

0x9327,	// (0x00053f93) navi_tabs_3_long_pane

0x9327,	// (0x00053f93) navi_tabs_3_pane

0x9327,	// (0x00053f93) navi_tabs_4_pane

0x6376,	// (0x00050fe2) tabs_2_active_pane_ParamLimits

0x6376,	// (0x00050fe2) tabs_2_active_pane

0x6386,	// (0x00050ff2) tabs_2_passive_pane_ParamLimits

0x6386,	// (0x00050ff2) tabs_2_passive_pane

0x6344,	// (0x00050fb0) tabs_3_active_pane_ParamLimits

0x6344,	// (0x00050fb0) tabs_3_active_pane

0x6354,	// (0x00050fc0) tabs_3_passive_pane_ParamLimits

0x6354,	// (0x00050fc0) tabs_3_passive_pane

0x6365,	// (0x00050fd1) tabs_3_passive_pane_cp_ParamLimits

0x6365,	// (0x00050fd1) tabs_3_passive_pane_cp

0x6300,	// (0x00050f6c) tabs_4_active_pane_ParamLimits

0x6300,	// (0x00050f6c) tabs_4_active_pane

0x6311,	// (0x00050f7d) tabs_4_passive_pane_ParamLimits

0x6311,	// (0x00050f7d) tabs_4_passive_pane

0x6322,	// (0x00050f8e) tabs_4_passive_pane_cp_ParamLimits

0x6322,	// (0x00050f8e) tabs_4_passive_pane_cp

0x6333,	// (0x00050f9f) tabs_4_passive_pane_cp2_ParamLimits

0x6333,	// (0x00050f9f) tabs_4_passive_pane_cp2

0x62dc,	// (0x00050f48) tabs_2_long_active_pane_ParamLimits

0x62dc,	// (0x00050f48) tabs_2_long_active_pane

0x62ee,	// (0x00050f5a) tabs_2_long_passive_pane_ParamLimits

0x62ee,	// (0x00050f5a) tabs_2_long_passive_pane

0x629d,	// (0x00050f09) tabs_3_long_active_pane_ParamLimits

0x629d,	// (0x00050f09) tabs_3_long_active_pane

0x62b0,	// (0x00050f1c) tabs_3_long_passive_pane_ParamLimits

0x62b0,	// (0x00050f1c) tabs_3_long_passive_pane

0x62c9,	// (0x00050f35) tabs_3_long_passive_pane_cp_ParamLimits

0x62c9,	// (0x00050f35) tabs_3_long_passive_pane_cp

0x6243,	// (0x00050eaf) volume_small_pane_g1

0x624c,	// (0x00050eb8) volume_small_pane_g2

0x6255,	// (0x00050ec1) volume_small_pane_g3

0x625e,	// (0x00050eca) volume_small_pane_g4

0x6267,	// (0x00050ed3) volume_small_pane_g5

0x6270,	// (0x00050edc) volume_small_pane_g6

0x6279,	// (0x00050ee5) volume_small_pane_g7

0x6282,	// (0x00050eee) volume_small_pane_g8

0x628b,	// (0x00050ef7) volume_small_pane_g9

0x6294,	// (0x00050f00) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0005a527) volume_small_pane_g

0x7897,	// (0x00052503) bg_active_tab_pane_cp2_ParamLimits

0x7897,	// (0x00052503) bg_active_tab_pane_cp2

0x78a5,	// (0x00052511) tabs_3_active_pane_g1

0x78ad,	// (0x00052519) tabs_3_active_pane_t1

0x7897,	// (0x00052503) bg_passive_tab_pane_cp2_ParamLimits

0x7897,	// (0x00052503) bg_passive_tab_pane_cp2

0x78a5,	// (0x00052511) tabs_3_passive_pane_g1

0x78ad,	// (0x00052519) tabs_3_passive_pane_t1

0x7897,	// (0x00052503) bg_active_tab_pane_cp3_ParamLimits

0x7897,	// (0x00052503) bg_active_tab_pane_cp3

0x78bf,	// (0x0005252b) tabs_4_active_pane_g1

0x78c7,	// (0x00052533) tabs_4_active_pane_t1

0x7897,	// (0x00052503) bg_passive_tab_pane_cp3_ParamLimits

0x7897,	// (0x00052503) bg_passive_tab_pane_cp3

0x78bf,	// (0x0005252b) tabs_4_1_passive_pane_g1

0x78c7,	// (0x00052533) tabs_4_1_passive_pane_t1

0x97d7,	// (0x00054443) list_highlight_pane_cp2

0xb0e9,	// (0x00055d55) list_set_pane_ParamLimits

0xb0e9,	// (0x00055d55) list_set_pane

0xb18f,	// (0x00055dfb) main_pane_set_t1_ParamLimits

0xb18f,	// (0x00055dfb) main_pane_set_t1

0xb1af,	// (0x00055e1b) main_pane_set_t2_ParamLimits

0xb1af,	// (0x00055e1b) main_pane_set_t2

0xb1c3,	// (0x00055e2f) main_pane_set_t3_ParamLimits

0xb1c3,	// (0x00055e2f) main_pane_set_t3

0xb1d5,	// (0x00055e41) main_pane_set_t4_ParamLimits

0xb1d5,	// (0x00055e41) main_pane_set_t4

0x0003,

0xf98b,	// (0x0005a5f7) main_pane_set_t_ParamLimits

0xf98b,	// (0x0005a5f7) main_pane_set_t

0xb1e7,	// (0x00055e53) setting_code_pane

0xb1f3,	// (0x00055e5f) setting_slider_graphic_pane

0xb1f3,	// (0x00055e5f) setting_slider_pane

0xb1f3,	// (0x00055e5f) setting_text_pane

0xb1f3,	// (0x00055e5f) setting_volume_pane

0x4c77,	// (0x0004f8e3) volume_set_pane

0x7897,	// (0x00052503) bg_set_opt_pane_cp

0x4c7f,	// (0x0004f8eb) setting_slider_pane_t1

0x4c98,	// (0x0004f904) setting_slider_pane_t2

0x4cb2,	// (0x0004f91e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005a1ca) setting_slider_pane_t

0x4cca,	// (0x0004f936) slider_set_pane

0x77b7,	// (0x00052423) bg_set_opt_pane_cp2

0x78d9,	// (0x00052545) setting_slider_graphic_pane_g1

0x4ce0,	// (0x0004f94c) setting_slider_graphic_pane_t1

0x4cf0,	// (0x0004f95c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005a1d1) setting_slider_graphic_pane_t

0x4d00,	// (0x0004f96c) slider_set_pane_cp

0x77b7,	// (0x00052423) input_focus_pane_cp1

0xb0a8,	// (0x00055d14) list_set_text_pane

0x77ad,	// (0x00052419) setting_text_pane_g1

0x77b7,	// (0x00052423) input_focus_pane_cp2

0x77ad,	// (0x00052419) setting_code_pane_g1

0x78e2,	// (0x0005254e) setting_code_pane_t1

0x3e44,	// (0x0004eab0) set_text_pane_t1_ParamLimits

0x3e44,	// (0x0004eab0) set_text_pane_t1

0x885e,	// (0x000534ca) set_opt_bg_pane_g1

0x8866,	// (0x000534d2) set_opt_bg_pane_g2

0xb082,	// (0x00055cee) set_opt_bg_pane_g3

0x8876,	// (0x000534e2) set_opt_bg_pane_g4

0x887e,	// (0x000534ea) set_opt_bg_pane_g5

0x8886,	// (0x000534f2) set_opt_bg_pane_g6

0xb08c,	// (0x00055cf8) set_opt_bg_pane_g7

0xb094,	// (0x00055d00) set_opt_bg_pane_g8

0xb09e,	// (0x00055d0a) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0005a5e4) set_opt_bg_pane_g

0xb075,	// (0x00055ce1) slider_set_pane_g1

0x6433,	// (0x0005109f) slider_set_pane_g2

0x0006,

0xf969,	// (0x0005a5d5) slider_set_pane_g

0x63a7,	// (0x00051013) volume_set_pane_g1

0x63af,	// (0x0005101b) volume_set_pane_g2

0x63b7,	// (0x00051023) volume_set_pane_g3

0x63bf,	// (0x0005102b) volume_set_pane_g4

0x63c7,	// (0x00051033) volume_set_pane_g5

0x63cf,	// (0x0005103b) volume_set_pane_g6

0x63d7,	// (0x00051043) volume_set_pane_g7

0x63df,	// (0x0005104b) volume_set_pane_g8

0x63e7,	// (0x00051053) volume_set_pane_g9

0x63ef,	// (0x0005105b) volume_set_pane_g10

0x0009,

0xf941,	// (0x0005a5ad) volume_set_pane_g

0x78f0,	// (0x0005255c) indicator_pane_ParamLimits

0x78f0,	// (0x0005255c) indicator_pane

0x78fc,	// (0x00052568) main_idle_pane_g2_ParamLimits

0x78fc,	// (0x00052568) main_idle_pane_g2

0x7924,	// (0x00052590) main_pane_idle_g1_ParamLimits

0x7924,	// (0x00052590) main_pane_idle_g1

0x7931,	// (0x0005259d) popup_clock_digital_analogue_window_ParamLimits

0x7931,	// (0x0005259d) popup_clock_digital_analogue_window

0x7948,	// (0x000525b4) soft_indicator_pane_ParamLimits

0x7948,	// (0x000525b4) soft_indicator_pane

0x7954,	// (0x000525c0) wallpaper_pane_ParamLimits

0x7954,	// (0x000525c0) wallpaper_pane

0x77ad,	// (0x00052419) wallpaper_pane_g1

0x7968,	// (0x000525d4) indicator_pane_g1_ParamLimits

0x7968,	// (0x000525d4) indicator_pane_g1

0xb457,	// (0x000560c3) navi_navi_icon_text_pane_srt_g1

0x7983,	// (0x000525ef) soft_indicator_pane_t1

0x799d,	// (0x00052609) aid_ps_area_pane

0x79ae,	// (0x0005261a) aid_ps_clock_pane

0x79bc,	// (0x00052628) aid_ps_indicator_pane

0x79c8,	// (0x00052634) indicator_ps_pane_ParamLimits

0x79c8,	// (0x00052634) indicator_ps_pane

0x79d7,	// (0x00052643) power_save_pane_g1_ParamLimits

0x79d7,	// (0x00052643) power_save_pane_g1

0x79e3,	// (0x0005264f) power_save_pane_g2_ParamLimits

0x79e3,	// (0x0005264f) power_save_pane_g2

0x487e,	// (0x0004f4ea) aid_navinavi_width_pane

0x799d,	// (0x00052609) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005a1d6) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005a1d6) power_save_pane_g

0x79f1,	// (0x0005265d) power_save_pane_t1_ParamLimits

0x79f1,	// (0x0005265d) power_save_pane_t1

0x79ae,	// (0x0005261a) aid_ps_clock_pane_ParamLimits

0x79bc,	// (0x00052628) aid_ps_indicator_pane_ParamLimits

0x7a03,	// (0x0005266f) power_save_pane_t4_ParamLimits

0x7a03,	// (0x0005266f) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005a1db) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005a1db) power_save_pane_t

0x7a2d,	// (0x00052699) power_save_t3_ParamLimits

0x7a2d,	// (0x00052699) power_save_t3

0x7a18,	// (0x00052684) power_save_t2_ParamLimits

0x7a18,	// (0x00052684) power_save_t2

0x7a42,	// (0x000526ae) indicator_ps_pane_g1

0x7a4b,	// (0x000526b7) ai_gene_pane_ParamLimits

0x7a4b,	// (0x000526b7) ai_gene_pane

0x7a57,	// (0x000526c3) ai_links_pane_ParamLimits

0x7a57,	// (0x000526c3) ai_links_pane

0x7a63,	// (0x000526cf) indicator_pane_cp1_ParamLimits

0x7a63,	// (0x000526cf) indicator_pane_cp1

0x7a6f,	// (0x000526db) main_pane_idle_g1_cp_ParamLimits

0x7a6f,	// (0x000526db) main_pane_idle_g1_cp

0x7a7b,	// (0x000526e7) popup_ai_links_title_window

0x7a84,	// (0x000526f0) soft_indicator_pane_cp1_ParamLimits

0x7a84,	// (0x000526f0) soft_indicator_pane_cp1

0xae63,	// (0x00055acf) ai_links_pane_g1

0xae6c,	// (0x00055ad8) grid_ai_links_pane

0xae46,	// (0x00055ab2) ai_gene_pane_1

0xae51,	// (0x00055abd) ai_gene_pane_2

0xae5a,	// (0x00055ac6) list_highlight_pane_cp4

0xae2a,	// (0x00055a96) cell_ai_link_pane_ParamLimits

0xae2a,	// (0x00055a96) cell_ai_link_pane

0xae22,	// (0x00055a8e) cell_ai_link_pane_g1

0x83b1,	// (0x0005301d) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0005a588) cell_ai_link_pane_g

0x77b7,	// (0x00052423) grid_highlight_cp2

0x77b7,	// (0x00052423) bg_popup_sub_pane_cp1

0x7a9e,	// (0x0005270a) popup_ai_links_title_window_t1

0xad70,	// (0x000559dc) ai_gene_pane_1_g1_ParamLimits

0xad70,	// (0x000559dc) ai_gene_pane_1_g1

0xad7c,	// (0x000559e8) ai_gene_pane_1_g2_ParamLimits

0xad7c,	// (0x000559e8) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0005a57e) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0005a57e) ai_gene_pane_1_g

0xad89,	// (0x000559f5) ai_gene_pane_1_t1_ParamLimits

0xad89,	// (0x000559f5) ai_gene_pane_1_t1

0xadbd,	// (0x00055a29) grid_ai_soft_ind_pane

0xad5b,	// (0x000559c7) ai_gene_pane_2_t1_ParamLimits

0xad5b,	// (0x000559c7) ai_gene_pane_2_t1

0x7aad,	// (0x00052719) main_pane_empty_t1_ParamLimits

0x7aad,	// (0x00052719) main_pane_empty_t1

0x7ac5,	// (0x00052731) main_pane_empty_t2_ParamLimits

0x7ac5,	// (0x00052731) main_pane_empty_t2

0x7ada,	// (0x00052746) main_pane_empty_t3_ParamLimits

0x7ada,	// (0x00052746) main_pane_empty_t3

0x7aec,	// (0x00052758) main_pane_empty_t4_ParamLimits

0x7aec,	// (0x00052758) main_pane_empty_t4

0x7afe,	// (0x0005276a) main_pane_empty_t5_ParamLimits

0x7afe,	// (0x0005276a) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005a1e0) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005a1e0) main_pane_empty_t

0x88af,	// (0x0005351b) bg_popup_window_pane_ParamLimits

0x88af,	// (0x0005351b) bg_popup_window_pane

0xaacb,	// (0x00055737) find_popup_pane_cp2_ParamLimits

0xaacb,	// (0x00055737) find_popup_pane_cp2

0xaad7,	// (0x00055743) heading_pane_ParamLimits

0xaad7,	// (0x00055743) heading_pane

0x77b7,	// (0x00052423) bg_popup_sub_pane

0xaa45,	// (0x000556b1) bg_popup_window_pane_g1_ParamLimits

0xaa45,	// (0x000556b1) bg_popup_window_pane_g1

0xaa51,	// (0x000556bd) bg_popup_window_pane_g2_ParamLimits

0xaa51,	// (0x000556bd) bg_popup_window_pane_g2

0xaa5d,	// (0x000556c9) bg_popup_window_pane_g3_ParamLimits

0xaa5d,	// (0x000556c9) bg_popup_window_pane_g3

0xaa69,	// (0x000556d5) bg_popup_window_pane_g4_ParamLimits

0xaa69,	// (0x000556d5) bg_popup_window_pane_g4

0xaa75,	// (0x000556e1) bg_popup_window_pane_g5_ParamLimits

0xaa75,	// (0x000556e1) bg_popup_window_pane_g5

0xaa81,	// (0x000556ed) bg_popup_window_pane_g6_ParamLimits

0xaa81,	// (0x000556ed) bg_popup_window_pane_g6

0xaa8d,	// (0x000556f9) bg_popup_window_pane_g7_ParamLimits

0xaa8d,	// (0x000556f9) bg_popup_window_pane_g7

0xaa99,	// (0x00055705) bg_popup_window_pane_g8_ParamLimits

0xaa99,	// (0x00055705) bg_popup_window_pane_g8

0xaaa5,	// (0x00055711) bg_popup_window_pane_g9_ParamLimits

0xaaa5,	// (0x00055711) bg_popup_window_pane_g9

0xaab1,	// (0x0005571d) bg_popup_window_pane_g10_ParamLimits

0xaab1,	// (0x0005571d) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0005a546) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0005a546) bg_popup_window_pane_g

0xa9da,	// (0x00055646) bg_popup_heading_pane_ParamLimits

0xa9da,	// (0x00055646) bg_popup_heading_pane

0x6561,	// (0x000511cd) tabs_4_passive_pane_cp_srt_ParamLimits

0x6561,	// (0x000511cd) tabs_4_passive_pane_cp_srt

0x6573,	// (0x000511df) tabs_4_passive_pane_srt_ParamLimits

0xa9ee,	// (0x0005565a) heading_pane_g2

0x6573,	// (0x000511df) tabs_4_passive_pane_srt

0x97d7,	// (0x00054443) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97d7,	// (0x00054443) bg_passive_tab_pane_cp3_srt

0xa9f6,	// (0x00055662) heading_pane_t1_ParamLimits

0xa9f6,	// (0x00055662) heading_pane_t1

0xaa0d,	// (0x00055679) heading_pane_t2_ParamLimits

0xaa0d,	// (0x00055679) heading_pane_t2

0x0001,

0xf8d5,	// (0x0005a541) heading_pane_t_ParamLimits

0xf8d5,	// (0x0005a541) heading_pane_t

0xa4fb,	// (0x00055167) bg_popup_heading_pane_g1

0xa5b6,	// (0x00055222) bg_popup_heading_pane_g2

0xa5c0,	// (0x0005522c) bg_popup_heading_pane_g3

0xa5ca,	// (0x00055236) bg_popup_heading_pane_g4

0xa5d4,	// (0x00055240) bg_popup_heading_pane_g5

0xa5de,	// (0x0005524a) bg_popup_heading_pane_g6

0xa5e6,	// (0x00055252) bg_popup_heading_pane_g7

0xa5ee,	// (0x0005525a) bg_popup_heading_pane_g8

0xa5f8,	// (0x00055264) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0005a4fd) bg_popup_heading_pane_g

0x9ce1,	// (0x0005494d) bg_popup_sub_pane_g1

0x9cf1,	// (0x0005495d) bg_popup_sub_pane_g2

0x9ce9,	// (0x00054955) bg_popup_sub_pane_g3

0x9d01,	// (0x0005496d) bg_popup_sub_pane_g4

0x9cf9,	// (0x00054965) bg_popup_sub_pane_g5

0x9d09,	// (0x00054975) bg_popup_sub_pane_g6

0x9d11,	// (0x0005497d) bg_popup_sub_pane_g7

0x9d21,	// (0x0005498d) bg_popup_sub_pane_g8

0x9d19,	// (0x00054985) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0005a4d7) bg_popup_sub_pane_g

0x7b12,	// (0x0005277e) bg_popup_window_pane_cp5_ParamLimits

0x7b12,	// (0x0005277e) bg_popup_window_pane_cp5

0x7b2e,	// (0x0005279a) popup_note_window_g1_ParamLimits

0x7b2e,	// (0x0005279a) popup_note_window_g1

0x7b3a,	// (0x000527a6) popup_note_window_t1_ParamLimits

0x7b3a,	// (0x000527a6) popup_note_window_t1

0x7b50,	// (0x000527bc) popup_note_window_t2_ParamLimits

0x7b50,	// (0x000527bc) popup_note_window_t2

0x7b66,	// (0x000527d2) popup_note_window_t3_ParamLimits

0x7b66,	// (0x000527d2) popup_note_window_t3

0x7b7c,	// (0x000527e8) popup_note_window_t4_ParamLimits

0x7b7c,	// (0x000527e8) popup_note_window_t4

0x7ba4,	// (0x00052810) popup_note_window_t5_ParamLimits

0x7ba4,	// (0x00052810) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005a1eb) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005a1eb) popup_note_window_t

0x7bc8,	// (0x00052834) bg_popup_window_pane_cp6_ParamLimits

0x7bc8,	// (0x00052834) bg_popup_window_pane_cp6

0xa477,	// (0x000550e3) popup_note_image_window_g1_ParamLimits

0xa477,	// (0x000550e3) popup_note_image_window_g1

0xa483,	// (0x000550ef) popup_note_image_window_g2_ParamLimits

0xa483,	// (0x000550ef) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0005a4cb) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0005a4cb) popup_note_image_window_g

0xa49c,	// (0x00055108) popup_note_image_window_t1_ParamLimits

0xa49c,	// (0x00055108) popup_note_image_window_t1

0xa4b5,	// (0x00055121) popup_note_image_window_t2_ParamLimits

0xa4b5,	// (0x00055121) popup_note_image_window_t2

0xa4ce,	// (0x0005513a) popup_note_image_window_t3_ParamLimits

0xa4ce,	// (0x0005513a) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0005a4d0) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0005a4d0) popup_note_image_window_t

0xa338,	// (0x00054fa4) bg_popup_window_pane_cp7_ParamLimits

0xa338,	// (0x00054fa4) bg_popup_window_pane_cp7

0xa368,	// (0x00054fd4) popup_note_wait_window_g1_ParamLimits

0xa368,	// (0x00054fd4) popup_note_wait_window_g1

0xa374,	// (0x00054fe0) popup_note_wait_window_g2_ParamLimits

0xa374,	// (0x00054fe0) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0005a4b9) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0005a4b9) popup_note_wait_window_g

0xa38c,	// (0x00054ff8) popup_note_wait_window_t1_ParamLimits

0xa38c,	// (0x00054ff8) popup_note_wait_window_t1

0xa3b3,	// (0x0005501f) popup_note_wait_window_t2_ParamLimits

0xa3b3,	// (0x0005501f) popup_note_wait_window_t2

0xa3d0,	// (0x0005503c) popup_note_wait_window_t3_ParamLimits

0xa3d0,	// (0x0005503c) popup_note_wait_window_t3

0xa3e3,	// (0x0005504f) popup_note_wait_window_t4_ParamLimits

0xa3e3,	// (0x0005504f) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0005a4c0) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0005a4c0) popup_note_wait_window_t

0xa408,	// (0x00055074) wait_bar_pane_ParamLimits

0xa408,	// (0x00055074) wait_bar_pane

0x77b7,	// (0x00052423) wait_anim_pane

0x77b7,	// (0x00052423) wait_border_pane

0x77ad,	// (0x00052419) wait_anim_pane_g1

0x77ad,	// (0x00052419) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005a374) wait_anim_pane_g

0xa2dc,	// (0x00054f48) wait_border_pane_g1

0xa2e7,	// (0x00054f53) wait_border_pane_g2

0xa2f0,	// (0x00054f5c) wait_border_pane_g3

0x0002,

0xf846,	// (0x0005a4b2) wait_border_pane_g

0xa147,	// (0x00054db3) bg_popup_window_pane_cp16_ParamLimits

0xa147,	// (0x00054db3) bg_popup_window_pane_cp16

0xa247,	// (0x00054eb3) indicator_popup_pane_cp4_ParamLimits

0xa247,	// (0x00054eb3) indicator_popup_pane_cp4

0xa25b,	// (0x00054ec7) popup_query_data_window_t1_ParamLimits

0xa25b,	// (0x00054ec7) popup_query_data_window_t1

0xa26d,	// (0x00054ed9) popup_query_data_window_t2_ParamLimits

0xa26d,	// (0x00054ed9) popup_query_data_window_t2

0xa286,	// (0x00054ef2) popup_query_data_window_t3_ParamLimits

0xa286,	// (0x00054ef2) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0005a4ab) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0005a4ab) popup_query_data_window_t

0xa2a0,	// (0x00054f0c) query_popup_data_pane_ParamLimits

0xa2a0,	// (0x00054f0c) query_popup_data_pane

0xa2b4,	// (0x00054f20) query_popup_data_pane_cp1_ParamLimits

0xa2b4,	// (0x00054f20) query_popup_data_pane_cp1

0xa147,	// (0x00054db3) bg_popup_window_pane_cp10_ParamLimits

0xa147,	// (0x00054db3) bg_popup_window_pane_cp10

0xa179,	// (0x00054de5) indicator_popup_pane_ParamLimits

0xa179,	// (0x00054de5) indicator_popup_pane

0xa19b,	// (0x00054e07) popup_query_code_window_t1_ParamLimits

0xa19b,	// (0x00054e07) popup_query_code_window_t1

0xa1b5,	// (0x00054e21) popup_query_code_window_t2_ParamLimits

0xa1b5,	// (0x00054e21) popup_query_code_window_t2

0xa1fe,	// (0x00054e6a) popup_query_code_window_t3_ParamLimits

0xa1fe,	// (0x00054e6a) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0005a4a4) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0005a4a4) popup_query_code_window_t

0xa22d,	// (0x00054e99) query_popup_pane_ParamLimits

0xa22d,	// (0x00054e99) query_popup_pane

0x7bc8,	// (0x00052834) bg_popup_window_pane_cp15_ParamLimits

0x7bc8,	// (0x00052834) bg_popup_window_pane_cp15

0x82e3,	// (0x00052f4f) indicator_popup_pane_cp1_ParamLimits

0x82e3,	// (0x00052f4f) indicator_popup_pane_cp1

0x82f6,	// (0x00052f62) indicator_popup_pane_cp2_ParamLimits

0x82f6,	// (0x00052f62) indicator_popup_pane_cp2

0x8309,	// (0x00052f75) popup_query_data_code_window_g1_ParamLimits

0x8309,	// (0x00052f75) popup_query_data_code_window_g1

0x831c,	// (0x00052f88) popup_query_data_code_window_t1_ParamLimits

0x831c,	// (0x00052f88) popup_query_data_code_window_t1

0x832e,	// (0x00052f9a) popup_query_data_code_window_t2_ParamLimits

0x832e,	// (0x00052f9a) popup_query_data_code_window_t2

0x8340,	// (0x00052fac) popup_query_data_code_window_t3_ParamLimits

0x8340,	// (0x00052fac) popup_query_data_code_window_t3

0x8356,	// (0x00052fc2) popup_query_data_code_window_t4_ParamLimits

0x8356,	// (0x00052fc2) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005a1f6) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005a1f6) popup_query_data_code_window_t

0x607a,	// (0x00050ce6) list_single_midp_graphic_pane_g3

0x836e,	// (0x00052fda) query_popup_data_pane_cp2_ParamLimits

0x8381,	// (0x00052fed) query_popup_pane_cp2_ParamLimits

0x8381,	// (0x00052fed) query_popup_pane_cp2

0x77b7,	// (0x00052423) bg_popup_window_pane_cp11

0xa13f,	// (0x00054dab) heading_pane_cp5

0x846c,	// (0x000530d8) listscroll_popup_info_pane

0x77b7,	// (0x00052423) input_focus_pane_cp3

0x8394,	// (0x00053000) query_popup_pane_t1

0x83a2,	// (0x0005300e) list_popup_info_pane_ParamLimits

0x83a2,	// (0x0005300e) list_popup_info_pane

0x83b1,	// (0x0005301d) listscroll_popup_info_pane_g1

0x83b9,	// (0x00053025) scroll_pane_cp7

0x83c3,	// (0x0005302f) popup_info_list_pane_t1_ParamLimits

0x83c3,	// (0x0005302f) popup_info_list_pane_t1

0x83dd,	// (0x00053049) popup_info_list_pane_t2_ParamLimits

0x83dd,	// (0x00053049) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005a1ff) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005a1ff) popup_info_list_pane_t

0x77b7,	// (0x00052423) bg_popup_window_pane_cp12

0xb471,	// (0x000560dd) find_popup_pane

0x7897,	// (0x00052503) bg_popup_window_pane_cp3

0x83f7,	// (0x00053063) heading_pane_cp3

0x8403,	// (0x0005306f) listscroll_popup_graphic_pane

0x77b7,	// (0x00052423) bg_popup_window_pane_cp4

0x8462,	// (0x000530ce) heading_pane_cp4

0x846c,	// (0x000530d8) listscroll_popup_colour_pane

0x8474,	// (0x000530e0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8474,	// (0x000530e0) cell_large_graphic_colour_none_popup_pane

0x8488,	// (0x000530f4) grid_large_graphic_colour_popup_pane_ParamLimits

0x8488,	// (0x000530f4) grid_large_graphic_colour_popup_pane

0x84b4,	// (0x00053120) listscroll_popup_colour_pane_g1_ParamLimits

0x84b4,	// (0x00053120) listscroll_popup_colour_pane_g1

0x84cb,	// (0x00053137) listscroll_popup_colour_pane_g2_ParamLimits

0x84cb,	// (0x00053137) listscroll_popup_colour_pane_g2

0x84e2,	// (0x0005314e) listscroll_popup_colour_pane_g3_ParamLimits

0x84e2,	// (0x0005314e) listscroll_popup_colour_pane_g3

0x84f2,	// (0x0005315e) listscroll_popup_colour_pane_g4_ParamLimits

0x84f2,	// (0x0005315e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005a204) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005a204) listscroll_popup_colour_pane_g

0x8506,	// (0x00053172) scroll_pane_cp6_ParamLimits

0x8506,	// (0x00053172) scroll_pane_cp6

0x8518,	// (0x00053184) cell_large_graphic_colour_popup_pane_ParamLimits

0x8518,	// (0x00053184) cell_large_graphic_colour_popup_pane

0x8537,	// (0x000531a3) cell_large_graphic_colour_none_popup_pane_t1

0x77b7,	// (0x00052423) grid_highlight_pane_cp5

0x8546,	// (0x000531b2) cell_large_graphic_colour_popup_pane_g1

0x854e,	// (0x000531ba) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005a20d) cell_large_graphic_colour_popup_pane_g

0x8556,	// (0x000531c2) cell_large_graphic_colour_popup_pane_g2_copy1

0x855f,	// (0x000531cb) grid_highlight_pane_cp4

0x8567,	// (0x000531d3) bg_popup_window_pane_cp8_ParamLimits

0x8567,	// (0x000531d3) bg_popup_window_pane_cp8

0x8582,	// (0x000531ee) popup_snote_single_text_window_g1_ParamLimits

0x8582,	// (0x000531ee) popup_snote_single_text_window_g1

0x8594,	// (0x00053200) popup_snote_single_text_window_t1_ParamLimits

0x8594,	// (0x00053200) popup_snote_single_text_window_t1

0x85a7,	// (0x00053213) popup_snote_single_text_window_t2_ParamLimits

0x85a7,	// (0x00053213) popup_snote_single_text_window_t2

0x85ba,	// (0x00053226) popup_snote_single_text_window_t3_ParamLimits

0x85ba,	// (0x00053226) popup_snote_single_text_window_t3

0x85f3,	// (0x0005325f) popup_snote_single_text_window_t4_ParamLimits

0x85f3,	// (0x0005325f) popup_snote_single_text_window_t4

0x8627,	// (0x00053293) popup_snote_single_text_window_t5_ParamLimits

0x8627,	// (0x00053293) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005a212) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005a212) popup_snote_single_text_window_t

0x8656,	// (0x000532c2) bg_popup_window_pane_cp9_ParamLimits

0x8656,	// (0x000532c2) bg_popup_window_pane_cp9

0x8582,	// (0x000531ee) popup_snote_single_graphic_window_g1_ParamLimits

0x8582,	// (0x000531ee) popup_snote_single_graphic_window_g1

0x8664,	// (0x000532d0) popup_snote_single_graphic_window_g2_ParamLimits

0x8664,	// (0x000532d0) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005a21d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005a21d) popup_snote_single_graphic_window_g

0x8670,	// (0x000532dc) popup_snote_single_graphic_window_t1_ParamLimits

0x8670,	// (0x000532dc) popup_snote_single_graphic_window_t1

0x8683,	// (0x000532ef) popup_snote_single_graphic_window_t2_ParamLimits

0x8683,	// (0x000532ef) popup_snote_single_graphic_window_t2

0x8696,	// (0x00053302) popup_snote_single_graphic_window_t3_ParamLimits

0x8696,	// (0x00053302) popup_snote_single_graphic_window_t3

0x86cf,	// (0x0005333b) popup_snote_single_graphic_window_t4_ParamLimits

0x86cf,	// (0x0005333b) popup_snote_single_graphic_window_t4

0x8703,	// (0x0005336f) popup_snote_single_graphic_window_t5_ParamLimits

0x8703,	// (0x0005336f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005a222) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005a222) popup_snote_single_graphic_window_t

0xb3b5,	// (0x00056021) grid_graphic_popup_pane_ParamLimits

0xb3b5,	// (0x00056021) grid_graphic_popup_pane

0xb3dd,	// (0x00056049) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3dd,	// (0x00056049) listscroll_popup_graphic_pane_g1

0xb3f1,	// (0x0005605d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3f1,	// (0x0005605d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0005a621) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0005a621) listscroll_popup_graphic_pane_g

0xb405,	// (0x00056071) scroll_pane_cp5

0xb352,	// (0x00055fbe) cell_graphic_popup_pane_ParamLimits

0xb352,	// (0x00055fbe) cell_graphic_popup_pane

0xb333,	// (0x00055f9f) cell_graphic_popup_pane_g1

0xb33b,	// (0x00055fa7) cell_graphic_popup_pane_g2

0x8556,	// (0x000531c2) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0005a61a) cell_graphic_popup_pane_g

0xb344,	// (0x00055fb0) cell_graphic_popup_pane_t2

0x855f,	// (0x000531cb) grid_highlight_pane_cp3

0x8744,	// (0x000533b0) list_gen_pane_ParamLimits

0x8744,	// (0x000533b0) list_gen_pane

0x8776,	// (0x000533e2) scroll_pane

0xb28b,	// (0x00055ef7) bg_list_pane_g1_ParamLimits

0xb28b,	// (0x00055ef7) bg_list_pane_g1

0xb2a8,	// (0x00055f14) bg_list_pane_g2_ParamLimits

0xb2a8,	// (0x00055f14) bg_list_pane_g2

0xb2bd,	// (0x00055f29) bg_list_pane_g3_ParamLimits

0xb2bd,	// (0x00055f29) bg_list_pane_g3

0xb2d1,	// (0x00055f3d) bg_list_pane_g4_ParamLimits

0xb2d1,	// (0x00055f3d) bg_list_pane_g4

0xb2e5,	// (0x00055f51) bg_list_pane_g5_ParamLimits

0xb2e5,	// (0x00055f51) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0005a60f) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0005a60f) bg_list_pane_g

0x7cda,	// (0x00052946) list_double2_graphic_large_graphic_pane_ParamLimits

0x7cda,	// (0x00052946) list_double2_graphic_large_graphic_pane

0x7cda,	// (0x00052946) list_double2_graphic_pane_ParamLimits

0x7cda,	// (0x00052946) list_double2_graphic_pane

0x7cda,	// (0x00052946) list_double2_large_graphic_pane_ParamLimits

0x7cda,	// (0x00052946) list_double2_large_graphic_pane

0x7cda,	// (0x00052946) list_double2_pane_ParamLimits

0x7cda,	// (0x00052946) list_double2_pane

0x7cda,	// (0x00052946) list_double_graphic_heading_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_graphic_heading_pane

0x7cda,	// (0x00052946) list_double_graphic_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_graphic_pane

0x7cda,	// (0x00052946) list_double_heading_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_heading_pane

0x7cda,	// (0x00052946) list_double_large_graphic_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_large_graphic_pane

0x7cda,	// (0x00052946) list_double_number_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_number_pane

0x7cda,	// (0x00052946) list_double_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_pane

0x7cda,	// (0x00052946) list_double_time_pane_ParamLimits

0x7cda,	// (0x00052946) list_double_time_pane

0x7cda,	// (0x00052946) list_setting_number_pane_ParamLimits

0x7cda,	// (0x00052946) list_setting_number_pane

0x7cda,	// (0x00052946) list_setting_pane_ParamLimits

0x7cda,	// (0x00052946) list_setting_pane

0x7d13,	// (0x0005297f) list_single_2graphic_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_2graphic_pane

0x7d13,	// (0x0005297f) list_single_graphic_heading_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_graphic_heading_pane

0x7d13,	// (0x0005297f) list_single_graphic_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_graphic_pane

0x7d13,	// (0x0005297f) list_single_heading_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_heading_pane

0x7d51,	// (0x000529bd) list_single_large_graphic_pane_ParamLimits

0x7d51,	// (0x000529bd) list_single_large_graphic_pane

0x7d13,	// (0x0005297f) list_single_number_heading_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_number_heading_pane

0x7d13,	// (0x0005297f) list_single_number_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_number_pane

0x7d13,	// (0x0005297f) list_single_pane_ParamLimits

0x7d13,	// (0x0005297f) list_single_pane

0x77b7,	// (0x00052423) list_highlight_pane_cp1

0x7be6,	// (0x00052852) list_single_pane_g1_ParamLimits

0x7be6,	// (0x00052852) list_single_pane_g1

0x7bf2,	// (0x0005285e) list_single_pane_g2_ParamLimits

0x7bf2,	// (0x0005285e) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005a23e) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005a23e) list_single_pane_g

0x64c7,	// (0x00051133) list_single_pane_t1_ParamLimits

0x64c7,	// (0x00051133) list_single_pane_t1

0x7be6,	// (0x00052852) list_single_number_pane_g1_ParamLimits

0x7be6,	// (0x00052852) list_single_number_pane_g1

0x7bf2,	// (0x0005285e) list_single_number_pane_g2_ParamLimits

0x7bf2,	// (0x0005285e) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005a23e) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005a23e) list_single_number_pane_g

0x63f7,	// (0x00051063) list_single_number_pane_t1_ParamLimits

0x63f7,	// (0x00051063) list_single_number_pane_t1

0x640d,	// (0x00051079) list_single_number_pane_t2_ParamLimits

0x640d,	// (0x00051079) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0005a5d0) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0005a5d0) list_single_number_pane_t

0x4d08,	// (0x0004f974) list_single_graphic_pane_g1_ParamLimits

0x4d08,	// (0x0004f974) list_single_graphic_pane_g1

0x7be6,	// (0x00052852) list_single_graphic_pane_g2_ParamLimits

0x7be6,	// (0x00052852) list_single_graphic_pane_g2

0x7bf2,	// (0x0005285e) list_single_graphic_pane_g3_ParamLimits

0x7bf2,	// (0x0005285e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005a22d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005a22d) list_single_graphic_pane_g

0x4d14,	// (0x0004f980) list_single_graphic_pane_t1_ParamLimits

0x4d14,	// (0x0004f980) list_single_graphic_pane_t1

0x4d2a,	// (0x0004f996) list_single_heading_pane_g1_ParamLimits

0x4d2a,	// (0x0004f996) list_single_heading_pane_g1

0x7bf2,	// (0x0005285e) list_single_heading_pane_g2_ParamLimits

0x7bf2,	// (0x0005285e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005a234) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005a234) list_single_heading_pane_g

0x4d3d,	// (0x0004f9a9) list_single_heading_pane_t1_ParamLimits

0x4d3d,	// (0x0004f9a9) list_single_heading_pane_t1

0x7bfe,	// (0x0005286a) list_single_heading_pane_t2_ParamLimits

0x7bfe,	// (0x0005286a) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005a239) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005a239) list_single_heading_pane_t

0x7be6,	// (0x00052852) list_single_number_heading_pane_g1_ParamLimits

0x7be6,	// (0x00052852) list_single_number_heading_pane_g1

0x7bf2,	// (0x0005285e) list_single_number_heading_pane_g2_ParamLimits

0x7bf2,	// (0x0005285e) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005a23e) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005a23e) list_single_number_heading_pane_g

0x4d53,	// (0x0004f9bf) list_single_number_heading_pane_t1_ParamLimits

0x4d53,	// (0x0004f9bf) list_single_number_heading_pane_t1

0x4d69,	// (0x0004f9d5) list_single_number_heading_pane_t2_ParamLimits

0x4d69,	// (0x0004f9d5) list_single_number_heading_pane_t2

0x4d7b,	// (0x0004f9e7) list_single_number_heading_pane_t3_ParamLimits

0x4d7b,	// (0x0004f9e7) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005a243) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005a243) list_single_number_heading_pane_t

0x4d8d,	// (0x0004f9f9) list_single_graphic_heading_pane_g1_ParamLimits

0x4d8d,	// (0x0004f9f9) list_single_graphic_heading_pane_g1

0x7c10,	// (0x0005287c) list_single_graphic_heading_pane_g4_ParamLimits

0x7c10,	// (0x0005287c) list_single_graphic_heading_pane_g4

0x7bf2,	// (0x0005285e) list_single_graphic_heading_pane_g5_ParamLimits

0x7bf2,	// (0x0005285e) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005a24a) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005a24a) list_single_graphic_heading_pane_g

0x4d53,	// (0x0004f9bf) list_single_graphic_heading_pane_t1_ParamLimits

0x4d53,	// (0x0004f9bf) list_single_graphic_heading_pane_t1

0x4da5,	// (0x0004fa11) list_single_graphic_heading_pane_t2_ParamLimits

0x4da5,	// (0x0004fa11) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005a251) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005a251) list_single_graphic_heading_pane_t

0x7c21,	// (0x0005288d) list_single_large_graphic_pane_g1_ParamLimits

0x7c21,	// (0x0005288d) list_single_large_graphic_pane_g1

0x7c2d,	// (0x00052899) list_single_large_graphic_pane_g2_ParamLimits

0x7c2d,	// (0x00052899) list_single_large_graphic_pane_g2

0x7c39,	// (0x000528a5) list_single_large_graphic_pane_g3_ParamLimits

0x7c39,	// (0x000528a5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005a256) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005a256) list_single_large_graphic_pane_g

0xa2e7,	// (0x00054f53) wait_border_pane_g2_copy1

0x7c45,	// (0x000528b1) list_single_large_graphic_pane_g4_cp2

0x4dbb,	// (0x0004fa27) list_single_large_graphic_pane_t1_ParamLimits

0x4dbb,	// (0x0004fa27) list_single_large_graphic_pane_t1

0x87aa,	// (0x00053416) list_double_pane_g1_ParamLimits

0x87aa,	// (0x00053416) list_double_pane_g1

0x7c4d,	// (0x000528b9) list_double_pane_g2_ParamLimits

0x7c4d,	// (0x000528b9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005a25d) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005a25d) list_double_pane_g

0x4dd1,	// (0x0004fa3d) list_double_pane_t1_ParamLimits

0x4dd1,	// (0x0004fa3d) list_double_pane_t1

0x4de7,	// (0x0004fa53) list_double_pane_t2_ParamLimits

0x4de7,	// (0x0004fa53) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005a262) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005a262) list_double_pane_t

0x4df9,	// (0x0004fa65) list_double2_pane_g1_ParamLimits

0x4df9,	// (0x0004fa65) list_double2_pane_g1

0x4e0a,	// (0x0004fa76) list_double2_pane_g2_ParamLimits

0x4e0a,	// (0x0004fa76) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005a267) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005a267) list_double2_pane_g

0x4e16,	// (0x0004fa82) list_double2_pane_t1_ParamLimits

0x4e16,	// (0x0004fa82) list_double2_pane_t1

0x4e2c,	// (0x0004fa98) list_double2_pane_t2_ParamLimits

0x4e2c,	// (0x0004fa98) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005a26c) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005a26c) list_double2_pane_t

0x87aa,	// (0x00053416) list_double_number_pane_g1_ParamLimits

0x87aa,	// (0x00053416) list_double_number_pane_g1

0x7c4d,	// (0x000528b9) list_double_number_pane_g2_ParamLimits

0x7c4d,	// (0x000528b9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005a25d) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005a25d) list_double_number_pane_g

0x4e3e,	// (0x0004faaa) list_double_number_pane_t1_ParamLimits

0x4e3e,	// (0x0004faaa) list_double_number_pane_t1

0x4e50,	// (0x0004fabc) list_double_number_pane_t2_ParamLimits

0x4e50,	// (0x0004fabc) list_double_number_pane_t2

0x4e66,	// (0x0004fad2) list_double_number_pane_t3_ParamLimits

0x4e66,	// (0x0004fad2) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005a271) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005a271) list_double_number_pane_t

0x4e78,	// (0x0004fae4) list_double_graphic_pane_g1_ParamLimits

0x4e78,	// (0x0004fae4) list_double_graphic_pane_g1

0x4e84,	// (0x0004faf0) list_double_graphic_pane_g2_ParamLimits

0x4e84,	// (0x0004faf0) list_double_graphic_pane_g2

0x4e93,	// (0x0004faff) list_double_graphic_pane_g3_ParamLimits

0x4e93,	// (0x0004faff) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005a278) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005a278) list_double_graphic_pane_g

0x4eab,	// (0x0004fb17) list_double_graphic_pane_t1_ParamLimits

0x4eab,	// (0x0004fb17) list_double_graphic_pane_t1

0x4ec1,	// (0x0004fb2d) list_double_graphic_pane_t2_ParamLimits

0x4ec1,	// (0x0004fb2d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005a281) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005a281) list_double_graphic_pane_t

0x4ed3,	// (0x0004fb3f) list_double2_graphic_pane_g1_ParamLimits

0x4ed3,	// (0x0004fb3f) list_double2_graphic_pane_g1

0xa573,	// (0x000551df) list_double2_graphic_pane_g2_ParamLimits

0xa573,	// (0x000551df) list_double2_graphic_pane_g2

0x7c59,	// (0x000528c5) list_double2_graphic_pane_g3_ParamLimits

0x7c59,	// (0x000528c5) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005a286) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005a286) list_double2_graphic_pane_g

0x4edf,	// (0x0004fb4b) list_double2_graphic_pane_t1_ParamLimits

0x4edf,	// (0x0004fb4b) list_double2_graphic_pane_t1

0x4ef5,	// (0x0004fb61) list_double2_graphic_pane_t2_ParamLimits

0x4ef5,	// (0x0004fb61) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005a28d) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005a28d) list_double2_graphic_pane_t

0x4f07,	// (0x0004fb73) list_double_large_graphic_pane_g1_ParamLimits

0x4f07,	// (0x0004fb73) list_double_large_graphic_pane_g1

0x4f26,	// (0x0004fb92) list_double_large_graphic_pane_g2_ParamLimits

0x4f26,	// (0x0004fb92) list_double_large_graphic_pane_g2

0x7c4d,	// (0x000528b9) list_double_large_graphic_pane_g3_ParamLimits

0x7c4d,	// (0x000528b9) list_double_large_graphic_pane_g3

0x4f3c,	// (0x0004fba8) list_double_large_graphic_pane_g4_ParamLimits

0x4f3c,	// (0x0004fba8) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005a292) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005a292) list_double_large_graphic_pane_g

0x4f4d,	// (0x0004fbb9) list_double_large_graphic_pane_t1_ParamLimits

0x4f4d,	// (0x0004fbb9) list_double_large_graphic_pane_t1

0x4f66,	// (0x0004fbd2) list_double_large_graphic_pane_t2_ParamLimits

0x4f66,	// (0x0004fbd2) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005a29d) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005a29d) list_double_large_graphic_pane_t

0x7c7a,	// (0x000528e6) list_double2_large_graphic_pane_g1_ParamLimits

0x7c7a,	// (0x000528e6) list_double2_large_graphic_pane_g1

0x4f78,	// (0x0004fbe4) list_double2_large_graphic_pane_g2_ParamLimits

0x4f78,	// (0x0004fbe4) list_double2_large_graphic_pane_g2

0x7c59,	// (0x000528c5) list_double2_large_graphic_pane_g3_ParamLimits

0x7c59,	// (0x000528c5) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005a2a2) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005a2a2) list_double2_large_graphic_pane_g

0x4f89,	// (0x0004fbf5) list_double2_large_graphic_pane_t1_ParamLimits

0x4f89,	// (0x0004fbf5) list_double2_large_graphic_pane_t1

0x4f9f,	// (0x0004fc0b) list_double2_large_graphic_pane_t2_ParamLimits

0x4f9f,	// (0x0004fc0b) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005a2a9) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005a2a9) list_double2_large_graphic_pane_t

0x4fb1,	// (0x0004fc1d) list_double_heading_pane_g1_ParamLimits

0x4fb1,	// (0x0004fc1d) list_double_heading_pane_g1

0x7c86,	// (0x000528f2) list_double_heading_pane_g2_ParamLimits

0x7c86,	// (0x000528f2) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005a2ae) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005a2ae) list_double_heading_pane_g

0x4fc2,	// (0x0004fc2e) list_double_heading_pane_t1_ParamLimits

0x4fc2,	// (0x0004fc2e) list_double_heading_pane_t1

0x4e2c,	// (0x0004fa98) list_double_heading_pane_t2_ParamLimits

0x4e2c,	// (0x0004fa98) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005a2b3) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005a2b3) list_double_heading_pane_t

0x4fd8,	// (0x0004fc44) list_double_graphic_heading_pane_g1_ParamLimits

0x4fd8,	// (0x0004fc44) list_double_graphic_heading_pane_g1

0x4fb1,	// (0x0004fc1d) list_double_graphic_heading_pane_g2_ParamLimits

0x4fb1,	// (0x0004fc1d) list_double_graphic_heading_pane_g2

0x7c86,	// (0x000528f2) list_double_graphic_heading_pane_g3_ParamLimits

0x7c86,	// (0x000528f2) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005a2b8) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005a2b8) list_double_graphic_heading_pane_g

0x4fe4,	// (0x0004fc50) list_double_graphic_heading_pane_t1_ParamLimits

0x4fe4,	// (0x0004fc50) list_double_graphic_heading_pane_t1

0x4ef5,	// (0x0004fb61) list_double_graphic_heading_pane_t2_ParamLimits

0x4ef5,	// (0x0004fb61) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005a2bf) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005a2bf) list_double_graphic_heading_pane_t

0x4ffa,	// (0x0004fc66) list_double_time_pane_g1_ParamLimits

0x4ffa,	// (0x0004fc66) list_double_time_pane_g1

0x500b,	// (0x0004fc77) list_double_time_pane_g2_ParamLimits

0x500b,	// (0x0004fc77) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005a2c4) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005a2c4) list_double_time_pane_g

0x5017,	// (0x0004fc83) list_double_time_pane_t1_ParamLimits

0x5017,	// (0x0004fc83) list_double_time_pane_t1

0x502d,	// (0x0004fc99) list_double_time_pane_t2_ParamLimits

0x502d,	// (0x0004fc99) list_double_time_pane_t2

0x503f,	// (0x0004fcab) list_double_time_pane_t3_ParamLimits

0x503f,	// (0x0004fcab) list_double_time_pane_t3

0x5051,	// (0x0004fcbd) list_double_time_pane_t4_ParamLimits

0x5051,	// (0x0004fcbd) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005a2c9) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005a2c9) list_double_time_pane_t

0x5063,	// (0x0004fccf) list_setting_pane_g1_ParamLimits

0x5063,	// (0x0004fccf) list_setting_pane_g1

0x4e0a,	// (0x0004fa76) list_setting_pane_g2_ParamLimits

0x4e0a,	// (0x0004fa76) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005a2d2) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005a2d2) list_setting_pane_g

0x506f,	// (0x0004fcdb) list_setting_pane_t1_ParamLimits

0x506f,	// (0x0004fcdb) list_setting_pane_t1

0x5089,	// (0x0004fcf5) list_setting_pane_t2_ParamLimits

0x5089,	// (0x0004fcf5) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005a2d7) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005a2d7) list_setting_pane_t

0x50c8,	// (0x0004fd34) set_value_pane_cp_ParamLimits

0x50c8,	// (0x0004fd34) set_value_pane_cp

0x50d4,	// (0x0004fd40) list_setting_number_pane_g1_ParamLimits

0x50d4,	// (0x0004fd40) list_setting_number_pane_g1

0x50e0,	// (0x0004fd4c) list_setting_number_pane_g2_ParamLimits

0x50e0,	// (0x0004fd4c) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005a2de) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005a2de) list_setting_number_pane_g

0x50ec,	// (0x0004fd58) list_setting_number_pane_t1_ParamLimits

0x50ec,	// (0x0004fd58) list_setting_number_pane_t1

0x5105,	// (0x0004fd71) list_setting_number_pane_t2_ParamLimits

0x5105,	// (0x0004fd71) list_setting_number_pane_t2

0x511f,	// (0x0004fd8b) list_setting_number_pane_t3_ParamLimits

0x511f,	// (0x0004fd8b) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005a2e3) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005a2e3) list_setting_number_pane_t

0x50c8,	// (0x0004fd34) set_value_pane_ParamLimits

0x50c8,	// (0x0004fd34) set_value_pane

0x87b6,	// (0x00053422) bg_set_opt_pane_ParamLimits

0x87b6,	// (0x00053422) bg_set_opt_pane

0x5162,	// (0x0004fdce) set_value_pane_t1

0x87d7,	// (0x00053443) slider_set_pane_cp3

0x87e0,	// (0x0005344c) volume_small_pane_cp

0x87e9,	// (0x00053455) list_form_gen_pane

0x87f2,	// (0x0005345e) scroll_pane_cp8

0x5178,	// (0x0004fde4) form_field_data_pane_ParamLimits

0x5178,	// (0x0004fde4) form_field_data_pane

0x519c,	// (0x0004fe08) form_field_data_wide_pane_ParamLimits

0x519c,	// (0x0004fe08) form_field_data_wide_pane

0x51bf,	// (0x0004fe2b) form_field_popup_pane_ParamLimits

0x51bf,	// (0x0004fe2b) form_field_popup_pane

0x51df,	// (0x0004fe4b) form_field_popup_wide_pane_ParamLimits

0x51df,	// (0x0004fe4b) form_field_popup_wide_pane

0x51fe,	// (0x0004fe6a) form_field_slider_pane_ParamLimits

0x51fe,	// (0x0004fe6a) form_field_slider_pane

0x5211,	// (0x0004fe7d) form_field_slider_wide_pane_ParamLimits

0x5211,	// (0x0004fe7d) form_field_slider_wide_pane

0x8803,	// (0x0005346f) data_form_pane

0x522e,	// (0x0004fe9a) form_field_data_pane_t1

0x880f,	// (0x0005347b) input_focus_pane

0x5246,	// (0x0004feb2) data_form_wide_pane

0x5263,	// (0x0004fecf) form_field_data_wide_pane_t1

0x8574,	// (0x000531e0) input_focus_pane_cp6

0x5285,	// (0x0004fef1) form_field_popup_pane_t1

0x880f,	// (0x0005347b) input_focus_pane_cp7

0x8831,	// (0x0005349d) list_form_pane

0x52a5,	// (0x0004ff11) form_field_popup_wide_pane_t1

0x880f,	// (0x0005347b) input_focus_pane_cp8

0x883d,	// (0x000534a9) list_form_wide_pane

0x52c2,	// (0x0004ff2e) form_field_slider_pane_t1_ParamLimits

0x52c2,	// (0x0004ff2e) form_field_slider_pane_t1

0x52d8,	// (0x0004ff44) form_field_slider_pane_t2_ParamLimits

0x52d8,	// (0x0004ff44) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005a2f3) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005a2f3) form_field_slider_pane_t

0x7b12,	// (0x0005277e) input_focus_pane_cp9_ParamLimits

0x7b12,	// (0x0005277e) input_focus_pane_cp9

0x52ed,	// (0x0004ff59) slider_cont_pane_ParamLimits

0x52ed,	// (0x0004ff59) slider_cont_pane

0x884c,	// (0x000534b8) form_field_slider_wide_pane_t1_ParamLimits

0x884c,	// (0x000534b8) form_field_slider_wide_pane_t1

0x5301,	// (0x0004ff6d) form_field_slider_wide_pane_t2_ParamLimits

0x5301,	// (0x0004ff6d) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005a2f8) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005a2f8) form_field_slider_wide_pane_t

0x7b12,	// (0x0005277e) input_focus_pane_cp10_ParamLimits

0x7b12,	// (0x0005277e) input_focus_pane_cp10

0x5313,	// (0x0004ff7f) slider_cont_pane_cp1_ParamLimits

0x5313,	// (0x0004ff7f) slider_cont_pane_cp1

0x5327,	// (0x0004ff93) slider_form_pane_cp

0x885e,	// (0x000534ca) input_focus_pane_g1

0x8866,	// (0x000534d2) input_focus_pane_g2

0x886e,	// (0x000534da) input_focus_pane_g3

0x8876,	// (0x000534e2) input_focus_pane_g4

0x887e,	// (0x000534ea) input_focus_pane_g5

0x8886,	// (0x000534f2) input_focus_pane_g6

0x888e,	// (0x000534fa) input_focus_pane_g7

0x8896,	// (0x00053502) input_focus_pane_g8

0x889e,	// (0x0005350a) input_focus_pane_g9

0x77ad,	// (0x00052419) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005a2fd) input_focus_pane_g

0xa2f0,	// (0x00054f5c) wait_border_pane_g3_copy1

0x532f,	// (0x0004ff9b) data_form_pane_t1

0x77ad,	// (0x00052419) wait_anim_pane_g1_copy1

0x6497,	// (0x00051103) data_form_wide_pane_t1

0x534a,	// (0x0004ffb6) list_form_graphic_pane_cp_ParamLimits

0x534a,	// (0x0004ffb6) list_form_graphic_pane_cp

0xb21d,	// (0x00055e89) slider_form_pane_g1

0xb226,	// (0x00055e92) slider_form_pane_g2

0x0006,

0xf994,	// (0x0005a600) slider_form_pane_g

0x5363,	// (0x0004ffcf) list_form_graphic_pane_ParamLimits

0x5363,	// (0x0004ffcf) list_form_graphic_pane

0x537f,	// (0x0004ffeb) list_form_graphic_pane_g1

0x5387,	// (0x0004fff3) list_form_graphic_pane_t1_ParamLimits

0x5387,	// (0x0004fff3) list_form_graphic_pane_t1

0x7897,	// (0x00052503) list_highlight_pane_cp5_ParamLimits

0x7897,	// (0x00052503) list_highlight_pane_cp5

0x539c,	// (0x00050008) find_pane_g1

0x88a6,	// (0x00053512) input_find_pane

0x53a5,	// (0x00050011) input_find_pane_g1_ParamLimits

0x53a5,	// (0x00050011) input_find_pane_g1

0x53b1,	// (0x0005001d) input_find_pane_t1_ParamLimits

0x53b1,	// (0x0005001d) input_find_pane_t1

0x53c6,	// (0x00050032) input_find_pane_t2_ParamLimits

0x53c6,	// (0x00050032) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005a312) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005a312) input_find_pane_t

0x88af,	// (0x0005351b) input_focus_pane_cp5_ParamLimits

0x88af,	// (0x0005351b) input_focus_pane_cp5

0x88c9,	// (0x00053535) bg_popup_window_pane_cp2_ParamLimits

0x88c9,	// (0x00053535) bg_popup_window_pane_cp2

0x88d6,	// (0x00053542) listscroll_menu_pane_ParamLimits

0x88d6,	// (0x00053542) listscroll_menu_pane

0x88e2,	// (0x0005354e) popup_submenu_window_ParamLimits

0x88e2,	// (0x0005354e) popup_submenu_window

0x890e,	// (0x0005357a) find_popup_pane_g1

0x8916,	// (0x00053582) input_popup_find_pane_cp

0x88af,	// (0x0005351b) input_focus_pane_cp4_ParamLimits

0x88af,	// (0x0005351b) input_focus_pane_cp4

0x892c,	// (0x00053598) input_popup_find_pane_t1_ParamLimits

0x892c,	// (0x00053598) input_popup_find_pane_t1

0x77b7,	// (0x00052423) bg_popup_sub_pane_cp

0x895a,	// (0x000535c6) listscroll_popup_sub_pane

0x8962,	// (0x000535ce) list_submenu_pane_ParamLimits

0x8962,	// (0x000535ce) list_submenu_pane

0x8973,	// (0x000535df) scroll_pane_cp4

0x897b,	// (0x000535e7) list_single_popup_submenu_pane_ParamLimits

0x897b,	// (0x000535e7) list_single_popup_submenu_pane

0x898f,	// (0x000535fb) list_single_popup_submenu_pane_g1

0x8997,	// (0x00053603) list_single_popup_submenu_pane_t1_ParamLimits

0x8997,	// (0x00053603) list_single_popup_submenu_pane_t1

0x7897,	// (0x00052503) bg_active_tab_pane_cp1_ParamLimits

0x7897,	// (0x00052503) bg_active_tab_pane_cp1

0x89ac,	// (0x00053618) tabs_2_active_pane_g1

0x89b4,	// (0x00053620) tabs_2_active_pane_t1

0x7897,	// (0x00052503) bg_passive_tab_pane_cp1_ParamLimits

0x7897,	// (0x00052503) bg_passive_tab_pane_cp1

0x89ac,	// (0x00053618) tabs_2_passive_pane_g1

0x89b4,	// (0x00053620) tabs_2_passive_pane_t1

0x89c6,	// (0x00053632) bg_active_tab_pane_cp4

0x89d4,	// (0x00053640) tabs_2_long_active_pane_t1

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp4

0x6082,	// (0x00050cee) list_single_midp_graphic_pane_g4_ParamLimits

0x89c6,	// (0x00053632) bg_active_tab_pane_cp5

0x89f3,	// (0x0005365f) tabs_3_long_active_pane_t1

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp5

0x6082,	// (0x00050cee) list_single_midp_graphic_pane_g4

0x7897,	// (0x00052503) bg_popup_window_pane_cp13_ParamLimits

0x7897,	// (0x00052503) bg_popup_window_pane_cp13

0x8a0e,	// (0x0005367a) listscroll_popup_fast_pane_ParamLimits

0x8a0e,	// (0x0005367a) listscroll_popup_fast_pane

0x8a1d,	// (0x00053689) grid_popup_fast_pane_ParamLimits

0x8a1d,	// (0x00053689) grid_popup_fast_pane

0x8a2f,	// (0x0005369b) scroll_pane_cp9_ParamLimits

0x8a2f,	// (0x0005369b) scroll_pane_cp9

0xcae3,	// (0x0005774f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae3,	// (0x0005774f) list_single_graphic_hl_pane_t1_cp2

0x8a53,	// (0x000536bf) input_focus_pane_cp20_ParamLimits

0x8a53,	// (0x000536bf) input_focus_pane_cp20

0x8a61,	// (0x000536cd) query_popup_data_pane_t1_ParamLimits

0x8a61,	// (0x000536cd) query_popup_data_pane_t1

0x8a74,	// (0x000536e0) query_popup_data_pane_t2_ParamLimits

0x8a74,	// (0x000536e0) query_popup_data_pane_t2

0x8aba,	// (0x00053726) query_popup_data_pane_t3_ParamLimits

0x8aba,	// (0x00053726) query_popup_data_pane_t3

0x8afb,	// (0x00053767) query_popup_data_pane_t4_ParamLimits

0x8afb,	// (0x00053767) query_popup_data_pane_t4

0x8b37,	// (0x000537a3) query_popup_data_pane_t5_ParamLimits

0x8b37,	// (0x000537a3) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005a317) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005a317) query_popup_data_pane_t

0x885e,	// (0x000534ca) bg_set_opt_pane_g1

0x8866,	// (0x000534d2) bg_set_opt_pane_g2

0x886e,	// (0x000534da) bg_set_opt_pane_g3

0x8876,	// (0x000534e2) bg_set_opt_pane_g4

0x887e,	// (0x000534ea) bg_set_opt_pane_g5

0x8886,	// (0x000534f2) bg_set_opt_pane_g6

0x888e,	// (0x000534fa) bg_set_opt_pane_g7

0x8896,	// (0x00053502) bg_set_opt_pane_g8

0x889e,	// (0x0005350a) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005a322) bg_set_opt_pane_g

0x56e6,	// (0x00050352) control_top_pane_stacon_ParamLimits

0x56e6,	// (0x00050352) control_top_pane_stacon

0x5739,	// (0x000503a5) signal_pane_stacon_ParamLimits

0x5739,	// (0x000503a5) signal_pane_stacon

0x9127,	// (0x00053d93) stacon_top_pane_g1_ParamLimits

0x9127,	// (0x00053d93) stacon_top_pane_g1

0x575e,	// (0x000503ca) title_pane_stacon_ParamLimits

0x575e,	// (0x000503ca) title_pane_stacon

0x5788,	// (0x000503f4) uni_indicator_pane_stacon_ParamLimits

0x5788,	// (0x000503f4) uni_indicator_pane_stacon

0x579d,	// (0x00050409) battery_pane_stacon_ParamLimits

0x579d,	// (0x00050409) battery_pane_stacon

0x57e1,	// (0x0005044d) control_bottom_pane_stacon_ParamLimits

0x57e1,	// (0x0005044d) control_bottom_pane_stacon

0x5804,	// (0x00050470) navi_pane_stacon_ParamLimits

0x5804,	// (0x00050470) navi_pane_stacon

0x9149,	// (0x00053db5) stacon_bottom_pane_g1_ParamLimits

0x9149,	// (0x00053db5) stacon_bottom_pane_g1

0x53db,	// (0x00050047) aid_levels_signal_lsc_ParamLimits

0x53db,	// (0x00050047) aid_levels_signal_lsc

0x53f1,	// (0x0005005d) signal_pane_stacon_g1_ParamLimits

0x53f1,	// (0x0005005d) signal_pane_stacon_g1

0x5405,	// (0x00050071) signal_pane_stacon_g2_ParamLimits

0x5405,	// (0x00050071) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005a335) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005a335) signal_pane_stacon_g

0x543a,	// (0x000500a6) title_pane_stacon_t1_ParamLimits

0x543a,	// (0x000500a6) title_pane_stacon_t1

0x8b7b,	// (0x000537e7) uni_indicator_pane_stacon_g1

0x8b85,	// (0x000537f1) uni_indicator_pane_stacon_g2

0x8b8f,	// (0x000537fb) uni_indicator_pane_stacon_g3

0x8b99,	// (0x00053805) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005a341) uni_indicator_pane_stacon_g

0x545f,	// (0x000500cb) control_top_pane_stacon_g1

0x5467,	// (0x000500d3) control_top_pane_stacon_t1_ParamLimits

0x5467,	// (0x000500d3) control_top_pane_stacon_t1

0x549e,	// (0x0005010a) aid_levels_battery_lsc_ParamLimits

0x549e,	// (0x0005010a) aid_levels_battery_lsc

0x54b5,	// (0x00050121) battery_pane_stacon_g1_ParamLimits

0x54b5,	// (0x00050121) battery_pane_stacon_g1

0x54c8,	// (0x00050134) battery_pane_stacon_g2_ParamLimits

0x54c8,	// (0x00050134) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005a34a) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005a34a) battery_pane_stacon_g

0x5506,	// (0x00050172) navi_icon_pane_stacon

0x551a,	// (0x00050186) navi_navi_pane_stacon

0x5506,	// (0x00050172) navi_text_pane_stacon

0x545f,	// (0x000500cb) control_bottom_pane_stacon_g1

0x552e,	// (0x0005019a) control_bottom_pane_stacon_t1_ParamLimits

0x552e,	// (0x0005019a) control_bottom_pane_stacon_t1

0x8bbd,	// (0x00053829) grid_app_pane_ParamLimits

0x8bbd,	// (0x00053829) grid_app_pane

0x8be1,	// (0x0005384d) scroll_pane_cp15_ParamLimits

0x8be1,	// (0x0005384d) scroll_pane_cp15

0x8bf4,	// (0x00053860) cell_app_pane_ParamLimits

0x8bf4,	// (0x00053860) cell_app_pane

0x8c18,	// (0x00053884) cell_app_pane_g1_ParamLimits

0x8c18,	// (0x00053884) cell_app_pane_g1

0x8c3c,	// (0x000538a8) cell_app_pane_g2_ParamLimits

0x8c3c,	// (0x000538a8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005a34f) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005a34f) cell_app_pane_g

0x8c48,	// (0x000538b4) cell_app_pane_t1_ParamLimits

0x8c48,	// (0x000538b4) cell_app_pane_t1

0x8c5f,	// (0x000538cb) grid_highlight_pane_ParamLimits

0x8c5f,	// (0x000538cb) grid_highlight_pane

0x885e,	// (0x000534ca) cell_highlight_pane_g1

0x8866,	// (0x000534d2) cell_highlight_pane_g2

0x886e,	// (0x000534da) cell_highlight_pane_g3

0x8876,	// (0x000534e2) cell_highlight_pane_g4

0x887e,	// (0x000534ea) cell_highlight_pane_g5

0x8886,	// (0x000534f2) cell_highlight_pane_g6

0x888e,	// (0x000534fa) cell_highlight_pane_g7

0x8896,	// (0x00053502) cell_highlight_pane_g8

0x889e,	// (0x0005350a) cell_highlight_pane_g9

0x77ad,	// (0x00052419) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005a2fd) cell_highlight_pane_g

0x8c70,	// (0x000538dc) bg_scroll_pane

0x5578,	// (0x000501e4) scroll_handle_pane

0x8cb7,	// (0x00053923) scroll_bg_pane_g1

0x8ccc,	// (0x00053938) scroll_bg_pane_g2

0x8ce4,	// (0x00053950) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005a354) scroll_bg_pane_g

0x8cf9,	// (0x00053965) scroll_handle_focus_pane_ParamLimits

0x8cf9,	// (0x00053965) scroll_handle_focus_pane

0x8cb7,	// (0x00053923) scroll_handle_pane_g1

0x8d06,	// (0x00053972) scroll_handle_pane_g2

0x8ce4,	// (0x00053950) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005a35b) scroll_handle_pane_g

0x88af,	// (0x0005351b) bg_popup_sub_pane_cp21_ParamLimits

0x88af,	// (0x0005351b) bg_popup_sub_pane_cp21

0x8d1a,	// (0x00053986) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d1a,	// (0x00053986) popup_fep_japan_predictive_window_t1

0x8d34,	// (0x000539a0) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d34,	// (0x000539a0) popup_fep_japan_predictive_window_t2

0x8d67,	// (0x000539d3) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d67,	// (0x000539d3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005a362) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005a362) popup_fep_japan_predictive_window_t

0x77b7,	// (0x00052423) bg_popup_sub_pane_cp23

0x8d9e,	// (0x00053a0a) listscroll_japin_cand_pane

0x8da6,	// (0x00053a12) popup_fep_japan_candidate_window_t1

0x8db4,	// (0x00053a20) candidate_pane_ParamLimits

0x8db4,	// (0x00053a20) candidate_pane

0x8dc6,	// (0x00053a32) scroll_pane_cp30

0x8dce,	// (0x00053a3a) list_single_popup_jap_candidate_pane_ParamLimits

0x8dce,	// (0x00053a3a) list_single_popup_jap_candidate_pane

0x77b7,	// (0x00052423) list_highlight_pane_cp30

0x8de3,	// (0x00053a4f) list_single_popup_jap_candidate_pane_t1

0x8df2,	// (0x00053a5e) level_1_signal

0x8e04,	// (0x00053a70) level_2_signal

0x8e17,	// (0x00053a83) level_3_signal

0x8e2a,	// (0x00053a96) level_4_signal

0x8e3d,	// (0x00053aa9) level_5_signal

0x8e50,	// (0x00053abc) level_6_signal

0x8e63,	// (0x00053acf) level_7_signal

0x8df2,	// (0x00053a5e) level_1_battery

0x8e04,	// (0x00053a70) level_2_battery

0x8e17,	// (0x00053a83) level_3_battery

0x8e2a,	// (0x00053a96) level_4_battery

0x8e3d,	// (0x00053aa9) level_5_battery

0x8e50,	// (0x00053abc) level_6_battery

0x8e63,	// (0x00053acf) level_7_battery

0x8e8e,	// (0x00053afa) list_menu_pane_ParamLimits

0x8e8e,	// (0x00053afa) list_menu_pane

0x8ea4,	// (0x00053b10) scroll_pane_cp25_ParamLimits

0x8ea4,	// (0x00053b10) scroll_pane_cp25

0x8ebd,	// (0x00053b29) list_double2_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double2_graphic_pane_cp2

0x8ebd,	// (0x00053b29) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double2_large_graphic_pane_cp2

0x8ebd,	// (0x00053b29) list_double2_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double2_pane_cp2

0x8ebd,	// (0x00053b29) list_double_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double_graphic_pane_cp2

0x8ebd,	// (0x00053b29) list_double_large_graphic_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double_large_graphic_pane_cp2

0x8ebd,	// (0x00053b29) list_double_number_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double_number_pane_cp2

0x8ebd,	// (0x00053b29) list_double_pane_cp2_ParamLimits

0x8ebd,	// (0x00053b29) list_double_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_2graphic_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_2graphic_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_graphic_heading_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_graphic_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_graphic_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_heading_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_heading_pane_cp2

0x8efa,	// (0x00053b66) list_single_large_graphic_pane_cp2_ParamLimits

0x8efa,	// (0x00053b66) list_single_large_graphic_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_number_heading_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_number_heading_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_number_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_number_pane_cp2

0x8ee1,	// (0x00053b4d) list_single_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_pane_cp2

0x8f76,	// (0x00053be2) bg_popup_sub_pane_cp22

0x562a,	// (0x00050296) popup_side_volume_key_window_g1

0x5654,	// (0x000502c0) popup_side_volume_key_window_t1

0x5670,	// (0x000502dc) volume_small_pane_cp1

0x7b12,	// (0x0005277e) bg_popup_sub_pane_cp24_ParamLimits

0x7b12,	// (0x0005277e) bg_popup_sub_pane_cp24

0x8f8c,	// (0x00053bf8) fep_china_uni_candidate_pane_ParamLimits

0x8f8c,	// (0x00053bf8) fep_china_uni_candidate_pane

0x8fa0,	// (0x00053c0c) fep_china_uni_entry_pane

0x8fb0,	// (0x00053c1c) popup_fep_china_uni_window_g1

0x8fcc,	// (0x00053c38) fep_china_uni_entry_pane_g1

0x8fd4,	// (0x00053c40) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005a393) fep_china_uni_entry_pane_g

0x8fdc,	// (0x00053c48) fep_entry_item_pane

0x8fe6,	// (0x00053c52) fep_candidate_item_pane

0x8fee,	// (0x00053c5a) fep_china_uni_candidate_pane_g1

0x8ff6,	// (0x00053c62) fep_china_uni_candidate_pane_g2

0x8ffe,	// (0x00053c6a) fep_china_uni_candidate_pane_g3

0x9006,	// (0x00053c72) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005a398) fep_china_uni_candidate_pane_g

0x77ad,	// (0x00052419) fep_entry_item_pane_g1

0x900e,	// (0x00053c7a) fep_entry_item_pane_t1_ParamLimits

0x900e,	// (0x00053c7a) fep_entry_item_pane_t1

0x9024,	// (0x00053c90) fep_candidate_item_pane_t1_ParamLimits

0x9024,	// (0x00053c90) fep_candidate_item_pane_t1

0x9039,	// (0x00053ca5) fep_candidate_item_pane_t2_ParamLimits

0x9039,	// (0x00053ca5) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005a3a1) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005a3a1) fep_candidate_item_pane_t

0x7897,	// (0x00052503) list_highlight_pane_cp31_ParamLimits

0x7897,	// (0x00052503) list_highlight_pane_cp31

0x904b,	// (0x00053cb7) level_1_signal_lsc

0x9054,	// (0x00053cc0) level_2_signal_lsc

0x905d,	// (0x00053cc9) level_3_signal_lsc

0x9066,	// (0x00053cd2) level_4_signal_lsc

0x906f,	// (0x00053cdb) level_5_signal_lsc

0x9078,	// (0x00053ce4) level_6_signal_lsc

0x9081,	// (0x00053ced) level_7_signal_lsc

0x9081,	// (0x00053ced) level_1_battery_lsc

0x908a,	// (0x00053cf6) level_2_battery_lsc

0x9093,	// (0x00053cff) level_3_battery_lsc

0x909c,	// (0x00053d08) level_4_battery_lsc

0x90a5,	// (0x00053d11) level_5_battery_lsc

0x90ae,	// (0x00053d1a) level_6_battery_lsc

0x904b,	// (0x00053cb7) level_7_battery_lsc

0x90b7,	// (0x00053d23) scroll_handle_focus_pane_g1

0x90c0,	// (0x00053d2c) scroll_handle_focus_pane_g2

0x90c9,	// (0x00053d35) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005a3a6) scroll_handle_focus_pane_g

0x5678,	// (0x000502e4) list_single_2graphic_pane_g1_ParamLimits

0x5678,	// (0x000502e4) list_single_2graphic_pane_g1

0x7c10,	// (0x0005287c) list_single_2graphic_pane_g2_ParamLimits

0x7c10,	// (0x0005287c) list_single_2graphic_pane_g2

0x7bf2,	// (0x0005285e) list_single_2graphic_pane_g3_ParamLimits

0x7bf2,	// (0x0005285e) list_single_2graphic_pane_g3

0x5684,	// (0x000502f0) list_single_2graphic_pane_g4_ParamLimits

0x5684,	// (0x000502f0) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005a3ad) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005a3ad) list_single_2graphic_pane_g

0x5690,	// (0x000502fc) list_single_2graphic_pane_t1_ParamLimits

0x5690,	// (0x000502fc) list_single_2graphic_pane_t1

0x7c92,	// (0x000528fe) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7c92,	// (0x000528fe) list_double2_graphic_large_graphic_pane_g1

0x4f78,	// (0x0004fbe4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f78,	// (0x0004fbe4) list_double2_graphic_large_graphic_pane_g2

0x7c59,	// (0x000528c5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7c59,	// (0x000528c5) list_double2_graphic_large_graphic_pane_g3

0x7ca2,	// (0x0005290e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7ca2,	// (0x0005290e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005a3b6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005a3b6) list_double2_graphic_large_graphic_pane_g

0x56be,	// (0x0005032a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56be,	// (0x0005032a) list_double2_graphic_large_graphic_pane_t1

0x56d4,	// (0x00050340) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56d4,	// (0x00050340) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005a3bf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005a3bf) list_double2_graphic_large_graphic_pane_t

0x9211,	// (0x00053e7d) popup_fast_swap_window_ParamLimits

0x9211,	// (0x00053e7d) popup_fast_swap_window

0x922d,	// (0x00053e99) popup_side_volume_key_window

0x9249,	// (0x00053eb5) stacon_top_pane

0x9253,	// (0x00053ebf) status_pane_ParamLimits

0x9253,	// (0x00053ebf) status_pane

0x9261,	// (0x00053ecd) status_small_pane

0x77b7,	// (0x00052423) control_pane

0x77b7,	// (0x00052423) stacon_bottom_pane

0x87f2,	// (0x0005345e) scroll_pane_cp121

0x87e9,	// (0x00053455) set_content_pane

0x90d2,	// (0x00053d3e) bg_active_tab_pane_g1_cp1

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp1

0x90e4,	// (0x00053d50) bg_active_tab_pane_g3_cp1

0x90d2,	// (0x00053d3e) bg_passive_tab_pane_g1_cp1

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp1

0x90e4,	// (0x00053d50) bg_passive_tab_pane_g3_cp1

0x90ed,	// (0x00053d59) bg_active_tab_pane_g1_cp2

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp2

0x90f6,	// (0x00053d62) bg_active_tab_pane_g3_cp2

0x90ed,	// (0x00053d59) bg_passive_tab_pane_g1_cp2

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp2

0x90f6,	// (0x00053d62) bg_passive_tab_pane_g3_cp2

0x90ff,	// (0x00053d6b) bg_active_tab_pane_g1_cp3

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp3

0x9108,	// (0x00053d74) bg_active_tab_pane_g3_cp3

0x90ff,	// (0x00053d6b) bg_passive_tab_pane_g1_cp3

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp3

0x9108,	// (0x00053d74) bg_passive_tab_pane_g3_cp3

0x9111,	// (0x00053d7d) bg_active_tab_pane_g1_cp4

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp4

0x911c,	// (0x00053d88) bg_active_tab_pane_g3_cp4

0x9111,	// (0x00053d7d) bg_passive_tab_pane_g1_cp4

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp4

0x911c,	// (0x00053d88) bg_passive_tab_pane_g3_cp4

0x9165,	// (0x00053dd1) bg_active_tab_pane_g1_cp5

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp5

0x916e,	// (0x00053dda) bg_active_tab_pane_g3_cp5

0x9165,	// (0x00053dd1) bg_passive_tab_pane_g1_cp5

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp5

0x916e,	// (0x00053dda) bg_passive_tab_pane_g3_cp5

0x9177,	// (0x00053de3) list_set_graphic_pane_ParamLimits

0x9177,	// (0x00053de3) list_set_graphic_pane

0x77b7,	// (0x00052423) bg_set_opt_pane_cp4

0x9194,	// (0x00053e00) list_set_graphic_pane_g1_ParamLimits

0x9194,	// (0x00053e00) list_set_graphic_pane_g1

0x91a0,	// (0x00053e0c) list_set_graphic_pane_g2_ParamLimits

0x91a0,	// (0x00053e0c) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005a3c4) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005a3c4) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0005a739) volume_small_pane_cp_g

0x91c4,	// (0x00053e30) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91c4,	// (0x00053e30) list_double2_large_graphic_pane_g1_cp2

0x91d0,	// (0x00053e3c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d0,	// (0x00053e3c) list_double2_large_graphic_pane_g2_cp2

0x91e1,	// (0x00053e4d) list_double2_large_graphic_pane_g3_cp2

0x91e9,	// (0x00053e55) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91e9,	// (0x00053e55) list_double2_large_graphic_pane_t1_cp2

0x91ff,	// (0x00053e6b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91ff,	// (0x00053e6b) list_double2_large_graphic_pane_t2_cp2

0xadcf,	// (0x00055a3b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadcf,	// (0x00055a3b) list_double_large_graphic_pane_g1_cp2

0xade0,	// (0x00055a4c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xade0,	// (0x00055a4c) list_double_large_graphic_pane_g2_cp2

0x937a,	// (0x00053fe6) list_double_large_graphic_pane_g3_cp2

0xadf1,	// (0x00055a5d) list_double_large_graphic_pane_g4_cp

0xadf9,	// (0x00055a65) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadf9,	// (0x00055a65) list_double_large_graphic_pane_t1_cp2

0xae10,	// (0x00055a7c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae10,	// (0x00055a7c) list_double_large_graphic_pane_t2_cp2

0x926c,	// (0x00053ed8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x926c,	// (0x00053ed8) list_double2_graphic_pane_g1_cp2

0x927a,	// (0x00053ee6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x927a,	// (0x00053ee6) list_double2_graphic_pane_g2_cp2

0x928b,	// (0x00053ef7) list_double2_graphic_pane_g3_cp2

0x9295,	// (0x00053f01) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9295,	// (0x00053f01) list_double2_graphic_pane_t1_cp2

0x92ab,	// (0x00053f17) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92ab,	// (0x00053f17) list_double2_graphic_pane_t2_cp2

0x92bd,	// (0x00053f29) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92bd,	// (0x00053f29) list_single_number_heading_pane_g1_cp2

0x92c9,	// (0x00053f35) list_single_number_heading_pane_g2_cp2

0x92d1,	// (0x00053f3d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92d1,	// (0x00053f3d) list_single_number_heading_pane_t1_cp2

0x92e7,	// (0x00053f53) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92e7,	// (0x00053f53) list_single_number_heading_pane_t2_cp2

0x92f9,	// (0x00053f65) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92f9,	// (0x00053f65) list_single_number_heading_pane_t3_cp2

0x92bd,	// (0x00053f29) list_single_heading_pane_g1_cp2_ParamLimits

0x92bd,	// (0x00053f29) list_single_heading_pane_g1_cp2

0x92c9,	// (0x00053f35) list_single_heading_pane_g2_cp2

0x92d1,	// (0x00053f3d) list_single_heading_pane_t1_cp2_ParamLimits

0x92d1,	// (0x00053f3d) list_single_heading_pane_t1_cp2

0xabd7,	// (0x00055843) list_single_heading_pane_t2_cp2_ParamLimits

0xabd7,	// (0x00055843) list_single_heading_pane_t2_cp2

0xab1f,	// (0x0005578b) list_double_graphic_pane_g1_cp2_ParamLimits

0xab1f,	// (0x0005578b) list_double_graphic_pane_g1_cp2

0xab2b,	// (0x00055797) list_double_graphic_pane_g2_cp2_ParamLimits

0xab2b,	// (0x00055797) list_double_graphic_pane_g2_cp2

0xab3a,	// (0x000557a6) list_double_graphic_pane_g3_cp2

0xab42,	// (0x000557ae) list_double_graphic_pane_t1_cp2_ParamLimits

0xab42,	// (0x000557ae) list_double_graphic_pane_t1_cp2

0xab58,	// (0x000557c4) list_double_graphic_pane_t2_cp2_ParamLimits

0xab58,	// (0x000557c4) list_double_graphic_pane_t2_cp2

0x936e,	// (0x00053fda) list_double_number_pane_g1_cp2_ParamLimits

0x936e,	// (0x00053fda) list_double_number_pane_g1_cp2

0x937a,	// (0x00053fe6) list_double_number_pane_g2_cp2

0xaae3,	// (0x0005574f) list_double_number_pane_t1_cp2_ParamLimits

0xaae3,	// (0x0005574f) list_double_number_pane_t1_cp2

0xaaf7,	// (0x00055763) list_double_number_pane_t2_cp2_ParamLimits

0xaaf7,	// (0x00055763) list_double_number_pane_t2_cp2

0xab0d,	// (0x00055779) list_double_number_pane_t3_cp2_ParamLimits

0xab0d,	// (0x00055779) list_double_number_pane_t3_cp2

0xa9cc,	// (0x00055638) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9cc,	// (0x00055638) list_single_graphic_pane_g1_cp2

0x93d2,	// (0x0005403e) list_single_graphic_pane_g2_cp2_ParamLimits

0x93d2,	// (0x0005403e) list_single_graphic_pane_g2_cp2

0x93de,	// (0x0005404a) list_single_graphic_pane_g3_cp2

0xa9a2,	// (0x0005560e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9a2,	// (0x0005560e) list_single_graphic_pane_t1_cp2

0x93d2,	// (0x0005403e) list_single_number_pane_g1_cp2_ParamLimits

0x93d2,	// (0x0005403e) list_single_number_pane_g1_cp2

0x93de,	// (0x0005404a) list_single_number_pane_g2_cp2

0xa9a2,	// (0x0005560e) list_single_number_pane_t1_cp2_ParamLimits

0xa9a2,	// (0x0005560e) list_single_number_pane_t1_cp2

0xa9b8,	// (0x00055624) list_single_number_pane_t2_cp2_ParamLimits

0xa9b8,	// (0x00055624) list_single_number_pane_t2_cp2

0x91d0,	// (0x00053e3c) list_double2_pane_g1_cp2_ParamLimits

0x91d0,	// (0x00053e3c) list_double2_pane_g1_cp2

0x91e1,	// (0x00053e4d) list_double2_pane_g2_cp2

0x9346,	// (0x00053fb2) list_double2_pane_t1_cp2_ParamLimits

0x9346,	// (0x00053fb2) list_double2_pane_t1_cp2

0x935c,	// (0x00053fc8) list_double2_pane_t2_cp2_ParamLimits

0x935c,	// (0x00053fc8) list_double2_pane_t2_cp2

0x936e,	// (0x00053fda) list_double_pane_g1_cp2_ParamLimits

0x936e,	// (0x00053fda) list_double_pane_g1_cp2

0x937a,	// (0x00053fe6) list_double_pane_g2_cp2

0x9382,	// (0x00053fee) list_double_pane_t1_cp2_ParamLimits

0x9382,	// (0x00053fee) list_double_pane_t1_cp2

0x9398,	// (0x00054004) list_double_pane_t2_cp2_ParamLimits

0x9398,	// (0x00054004) list_double_pane_t2_cp2

0x93c2,	// (0x0005402e) list_single_pane_cp2_g3

0x93d2,	// (0x0005403e) list_single_pane_g1_cp2_ParamLimits

0x93d2,	// (0x0005403e) list_single_pane_g1_cp2

0x93de,	// (0x0005404a) list_single_pane_g2_cp2

0x93e6,	// (0x00054052) list_single_pane_t1_cp2_ParamLimits

0x93e6,	// (0x00054052) list_single_pane_t1_cp2

0x93fe,	// (0x0005406a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93fe,	// (0x0005406a) list_single_large_graphic_pane_g1_cp2

0x940a,	// (0x00054076) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x940a,	// (0x00054076) list_single_large_graphic_pane_g2_cp2

0x9416,	// (0x00054082) list_single_large_graphic_pane_g3_cp2

0x941e,	// (0x0005408a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x941e,	// (0x0005408a) list_single_large_graphic_pane_g4_cp1

0x9438,	// (0x000540a4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9438,	// (0x000540a4) list_single_large_graphic_pane_t1_cp2

0xa96e,	// (0x000555da) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa96e,	// (0x000555da) list_single_graphic_heading_pane_g1_cp2

0xa93b,	// (0x000555a7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa93b,	// (0x000555a7) list_single_graphic_heading_pane_g4_cp2

0x93de,	// (0x0005404a) list_single_graphic_heading_pane_g5_cp2

0xa97a,	// (0x000555e6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa97a,	// (0x000555e6) list_single_graphic_heading_pane_t1_cp2

0xa990,	// (0x000555fc) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa990,	// (0x000555fc) list_single_graphic_heading_pane_t2_cp2

0xa92f,	// (0x0005559b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa92f,	// (0x0005559b) list_single_2graphic_pane_g1_cp2

0xa93b,	// (0x000555a7) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa93b,	// (0x000555a7) list_single_2graphic_pane_g2_cp2

0x93de,	// (0x0005404a) list_single_2graphic_pane_g3_cp2

0xa94c,	// (0x000555b8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa94c,	// (0x000555b8) list_single_2graphic_pane_g4_cp2

0xa958,	// (0x000555c4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa958,	// (0x000555c4) list_single_2graphic_pane_t1_cp2

0x77ad,	// (0x00052419) list_highlight_pane_g10_cp1

0xa4fb,	// (0x00055167) list_highlight_pane_g1_cp1

0xa503,	// (0x0005516f) list_highlight_pane_g2_cp1

0xa50b,	// (0x00055177) list_highlight_pane_g3_cp1

0xa513,	// (0x0005517f) list_highlight_pane_g4_cp1

0xa51b,	// (0x00055187) list_highlight_pane_g5_cp1

0xa523,	// (0x0005518f) list_highlight_pane_g6_cp1

0xa52b,	// (0x00055197) list_highlight_pane_g7_cp1

0xa533,	// (0x0005519f) list_highlight_pane_g8_cp1

0xa53b,	// (0x000551a7) list_highlight_pane_g9_cp1

0xa41b,	// (0x00055087) form_field_slider_pane_t3

0xa429,	// (0x00055095) form_field_slider_pane_t4

0xa437,	// (0x000550a3) slider_form_pane_ParamLimits

0xa437,	// (0x000550a3) slider_form_pane

0x77b7,	// (0x00052423) control_abbreviations

0x77b7,	// (0x00052423) control_conventions

0x77b7,	// (0x00052423) control_definitions

0x77b7,	// (0x00052423) format_table_attribute

0xac21,	// (0x0005588d) bg_popup_preview_window_pane_g9

0x77b7,	// (0x00052423) format_table_data2

0x77b7,	// (0x00052423) format_table_data3

0x77b7,	// (0x00052423) format_table_data_example

0x0008,

0x77b7,	// (0x00052423) intro_purpose

0xf8f4,	// (0x0005a560) bg_popup_preview_window_pane_g

0x77b7,	// (0x00052423) texts_category

0x77b7,	// (0x00052423) texts_graphics

0x944e,	// (0x000540ba) text_digital

0x945d,	// (0x000540c9) text_primary

0x946c,	// (0x000540d8) text_primary_small

0x947b,	// (0x000540e7) text_secondary

0x948a,	// (0x000540f6) text_title

0xb307,	// (0x00055f73) bg_passive_tab_pane_g1_cp3_srt

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp3_srt

0xb310,	// (0x00055f7c) bg_passive_tab_pane_g3_cp3_srt

0x7897,	// (0x00052503) bg_active_tab_pane_cp3_srt_ParamLimits

0x7897,	// (0x00052503) bg_active_tab_pane_cp3_srt

0xb319,	// (0x00055f85) tabs_4_active_pane_srt_g1

0xb321,	// (0x00055f8d) tabs_4_active_pane_srt_t1_ParamLimits

0xb321,	// (0x00055f8d) tabs_4_active_pane_srt_t1

0xb307,	// (0x00055f73) bg_active_tab_pane_g1_cp3_copy1

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp3_copy1

0xb310,	// (0x00055f7c) bg_active_tab_pane_g3_cp3_copy1

0x7897,	// (0x00052503) tabs_2_long_active_pane_srt_ParamLimits

0x7897,	// (0x00052503) tabs_2_long_active_pane_srt

0x7897,	// (0x00052503) tabs_2_long_passive_pane_srt_ParamLimits

0x7897,	// (0x00052503) tabs_2_long_passive_pane_srt

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp4_srt

0xb050,	// (0x00055cbc) bg_passive_tab_pane_g1_cp4_srt

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp4_srt

0xb059,	// (0x00055cc5) bg_passive_tab_pane_g3_cp4_srt

0x89c6,	// (0x00053632) bg_active_tab_pane_cp4_srt_ParamLimits

0x89c6,	// (0x00053632) bg_active_tab_pane_cp4_srt

0xb062,	// (0x00055cce) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb062,	// (0x00055cce) tabs_2_long_active_pane_srt_t1

0xb050,	// (0x00055cbc) bg_active_tab_pane_g1_cp4_srt

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp4_srt

0xb059,	// (0x00055cc5) bg_active_tab_pane_g3_cp4_srt

0x7b12,	// (0x0005277e) tabs_3_long_active_pane_srt_ParamLimits

0x7b12,	// (0x0005277e) tabs_3_long_active_pane_srt

0x7b12,	// (0x0005277e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7b12,	// (0x0005277e) tabs_3_long_passive_pane_cp_srt

0x7b12,	// (0x0005277e) tabs_3_long_passive_pane_srt_ParamLimits

0x7b12,	// (0x0005277e) tabs_3_long_passive_pane_srt

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp5_srt

0x9165,	// (0x00053dd1) bg_passive_tab_pane_g1_cp5_srt

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp5_srt

0x916e,	// (0x00053dda) bg_passive_tab_pane_g3_cp5_srt

0x89c6,	// (0x00053632) bg_active_tab_pane_cp5_srt_ParamLimits

0x89c6,	// (0x00053632) bg_active_tab_pane_cp5_srt

0xb03e,	// (0x00055caa) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb03e,	// (0x00055caa) tabs_3_long_active_pane_srt_t1

0x9165,	// (0x00053dd1) bg_active_tab_pane_g1_cp5_srt

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp5_srt

0x916e,	// (0x00053dda) bg_active_tab_pane_g3_cp5_srt

0xb030,	// (0x00055c9c) navi_text_pane_srt_t1

0xb028,	// (0x00055c94) navi_icon_pane_srt_g1

0x9653,	// (0x000542bf) midp_editing_number_pane_srt

0x9499,	// (0x00054105) midp_ticker_pane_srt

0x965b,	// (0x000542c7) midp_ticker_pane_srt_g1

0x9663,	// (0x000542cf) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005a3e3) midp_ticker_pane_srt_g

0x966b,	// (0x000542d7) midp_ticker_pane_srt_t1

0xb019,	// (0x00055c85) midp_editing_number_pane_t1_copy1

0x89e7,	// (0x00053653) listscroll_midp_pane

0x89e7,	// (0x00053653) midp_form_pane

0x9505,	// (0x00054171) midp_info_popup_window_ParamLimits

0x9505,	// (0x00054171) midp_info_popup_window

0x88af,	// (0x0005351b) bg_popup_sub_pane_cp50_ParamLimits

0x88af,	// (0x0005351b) bg_popup_sub_pane_cp50

0xa133,	// (0x00054d9f) listscroll_midp_info_pane_ParamLimits

0xa133,	// (0x00054d9f) listscroll_midp_info_pane

0xa11b,	// (0x00054d87) listscroll_form_midp_pane_ParamLimits

0xa11b,	// (0x00054d87) listscroll_form_midp_pane

0xa127,	// (0x00054d93) scroll_bar_cp050

0xa0fb,	// (0x00054d67) list_midp_pane

0xbd5c,	// (0x000569c8) signal_pane_g2_cp

0xa035,	// (0x00054ca1) listscroll_midp_info_pane_t1_ParamLimits

0xa035,	// (0x00054ca1) listscroll_midp_info_pane_t1

0xa04d,	// (0x00054cb9) listscroll_midp_info_pane_t2_ParamLimits

0xa04d,	// (0x00054cb9) listscroll_midp_info_pane_t2

0xa08b,	// (0x00054cf7) listscroll_midp_info_pane_t3_ParamLimits

0xa08b,	// (0x00054cf7) listscroll_midp_info_pane_t3

0xa0c5,	// (0x00054d31) listscroll_midp_info_pane_t4_ParamLimits

0xa0c5,	// (0x00054d31) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0005a49b) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0005a49b) listscroll_midp_info_pane_t

0x8973,	// (0x000535df) scroll_pane_cp21

0x9fd3,	// (0x00054c3f) form_midp_field_choice_group_pane

0x9fdc,	// (0x00054c48) form_midp_field_text_pane

0xa01b,	// (0x00054c87) form_midp_field_time_pane

0xa023,	// (0x00054c8f) form_midp_gauge_slider_pane

0xa02c,	// (0x00054c98) form_midp_gauge_wait_pane

0x77b7,	// (0x00052423) form_midp_image_pane

0x6218,	// (0x00050e84) list_single_midp_pane_ParamLimits

0x6218,	// (0x00050e84) list_single_midp_pane

0x9f8b,	// (0x00054bf7) form_midp_field_text_pane_t1

0x9d55,	// (0x000549c1) input_focus_pane_cp050

0x9fc2,	// (0x00054c2e) list_midp_form_text_pane

0x9f5a,	// (0x00054bc6) form_midp_field_choice_group_pane_t1

0x9f68,	// (0x00054bd4) input_focus_pane_cp051

0x9f7c,	// (0x00054be8) list_midp_choice_pane

0x77b7,	// (0x00052423) status_idle_pane

0x9f3e,	// (0x00054baa) form_midp_field_time_pane_t1

0x77ad,	// (0x00052419) wait_anim_pane_g2_copy1

0x9f4c,	// (0x00054bb8) form_midp_field_time_pane_t2

0x0001,

0x95b3,	// (0x0005421f) aid_navinavi_width_2_pane

0xf82a,	// (0x0005a496) form_midp_field_time_pane_t

0x77b7,	// (0x00052423) input_focus_pane_cp052

0x77b7,	// (0x00052423) bg_input_focus_pane_cp040

0x9efe,	// (0x00054b6a) form_midp_gauge_slider_pane_t1

0x9f0c,	// (0x00054b78) form_midp_gauge_slider_pane_t2

0x9f1a,	// (0x00054b86) form_midp_gauge_slider_pane_t3

0x9f28,	// (0x00054b94) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005a48d) form_midp_gauge_slider_pane_t

0x9f36,	// (0x00054ba2) form_midp_slider_pane

0x7897,	// (0x00052503) bg_input_focus_pane_cp041_ParamLimits

0x7897,	// (0x00052503) bg_input_focus_pane_cp041

0x9ecb,	// (0x00054b37) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ecb,	// (0x00054b37) form_midp_gauge_wait_pane_t1

0x9edd,	// (0x00054b49) form_midp_gauge_wait_pane_t2_ParamLimits

0x9edd,	// (0x00054b49) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0005a488) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0005a488) form_midp_gauge_wait_pane_t

0x9eef,	// (0x00054b5b) form_midp_wait_pane_ParamLimits

0x9eef,	// (0x00054b5b) form_midp_wait_pane

0x9e95,	// (0x00054b01) form_midp_image_pane_g1

0x9e9e,	// (0x00054b0a) form_midp_image_pane_t1

0x9ead,	// (0x00054b19) form_midp_image_pane_t2

0x9ebc,	// (0x00054b28) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0005a481) form_midp_image_pane_t

0x9e8c,	// (0x00054af8) list_single_midp_pane_g1

0x6209,	// (0x00050e75) list_single_midp_pane_t1

0x9e64,	// (0x00054ad0) list_midp_form_item_pane_ParamLimits

0x9e64,	// (0x00054ad0) list_midp_form_item_pane

0x955b,	// (0x000541c7) list_midp_form_item_pane_t1

0x956a,	// (0x000541d6) midp_ticker_pane_g1

0x9576,	// (0x000541e2) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005a3c9) midp_ticker_pane_g

0x9582,	// (0x000541ee) midp_ticker_pane_t1

0xb26a,	// (0x00055ed6) midp_editing_number_pane_t1

0xb248,	// (0x00055eb4) midp_editing_number_pane

0xb257,	// (0x00055ec3) midp_ticker_pane

0xb009,	// (0x00055c75) ai_message_heading_pane

0x77b7,	// (0x00052423) bg_popup_window_pane_cp14

0xb011,	// (0x00055c7d) listscroll_ai_message_pane

0xaf93,	// (0x00055bff) ai_message_heading_pane_g1_ParamLimits

0xaf93,	// (0x00055bff) ai_message_heading_pane_g1

0xaf9f,	// (0x00055c0b) ai_message_heading_pane_g2_ParamLimits

0xaf9f,	// (0x00055c0b) ai_message_heading_pane_g2

0xafab,	// (0x00055c17) ai_message_heading_pane_g3_ParamLimits

0xafab,	// (0x00055c17) ai_message_heading_pane_g3

0xafb7,	// (0x00055c23) ai_message_heading_pane_g4_ParamLimits

0xafb7,	// (0x00055c23) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0005a5c2) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0005a5c2) ai_message_heading_pane_g

0xafc3,	// (0x00055c2f) ai_message_heading_pane_t1_ParamLimits

0xafc3,	// (0x00055c2f) ai_message_heading_pane_t1

0xafdd,	// (0x00055c49) ai_message_heading_pane_t2_ParamLimits

0xafdd,	// (0x00055c49) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0005a5cb) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0005a5cb) ai_message_heading_pane_t

0xafef,	// (0x00055c5b) bg_popup_heading_pane_cp1_ParamLimits

0xafef,	// (0x00055c5b) bg_popup_heading_pane_cp1

0xaf81,	// (0x00055bed) list_ai_message_pane_ParamLimits

0xaf81,	// (0x00055bed) list_ai_message_pane

0x8973,	// (0x000535df) scroll_pane_cp10

0xaf1d,	// (0x00055b89) list_ai_message_pane_g1

0xaf25,	// (0x00055b91) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0005a59f) list_ai_message_pane_g

0xaf2d,	// (0x00055b99) list_ai_message_pane_t1_ParamLimits

0xaf2d,	// (0x00055b99) list_ai_message_pane_t1

0xaf42,	// (0x00055bae) list_ai_message_pane_t2_ParamLimits

0xaf42,	// (0x00055bae) list_ai_message_pane_t2

0xaf57,	// (0x00055bc3) list_ai_message_pane_t3_ParamLimits

0xaf57,	// (0x00055bc3) list_ai_message_pane_t3

0xaf6c,	// (0x00055bd8) list_ai_message_pane_t4_ParamLimits

0xaf6c,	// (0x00055bd8) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0005a5a4) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0005a5a4) list_ai_message_pane_t

0xaf08,	// (0x00055b74) cell_ai_soft_ind_pane_ParamLimits

0xaf08,	// (0x00055b74) cell_ai_soft_ind_pane

0x9594,	// (0x00054200) cell_ai_soft_ind_pane_g1_ParamLimits

0x9594,	// (0x00054200) cell_ai_soft_ind_pane_g1

0x77b7,	// (0x00052423) grid_highlight_cp1

0x95a1,	// (0x0005420d) text_secondary_cp56_ParamLimits

0x95a1,	// (0x0005420d) text_secondary_cp56

0xaedd,	// (0x00055b49) example_general_pane_ParamLimits

0xaedd,	// (0x00055b49) example_general_pane

0xaee9,	// (0x00055b55) example_parent_pane_g1_ParamLimits

0xaee9,	// (0x00055b55) example_parent_pane_g1

0xaef5,	// (0x00055b61) example_parent_pane_t1_ParamLimits

0xaef5,	// (0x00055b61) example_parent_pane_t1

0x5ddb,	// (0x00050a47) popup_preview_text_window_ParamLimits

0x5ddb,	// (0x00050a47) popup_preview_text_window

0x93ca,	// (0x00054036) list_single_pane_cp2_g4

0x7bc8,	// (0x00052834) bg_popup_preview_window_pane_ParamLimits

0x7bc8,	// (0x00052834) bg_popup_preview_window_pane

0xac29,	// (0x00055895) popup_preview_text_window_t1_ParamLimits

0xac29,	// (0x00055895) popup_preview_text_window_t1

0xac47,	// (0x000558b3) popup_preview_text_window_t2_ParamLimits

0xac47,	// (0x000558b3) popup_preview_text_window_t2

0xac90,	// (0x000558fc) popup_preview_text_window_t3_ParamLimits

0xac90,	// (0x000558fc) popup_preview_text_window_t3

0xacd5,	// (0x00055941) popup_preview_text_window_t4_ParamLimits

0xacd5,	// (0x00055941) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0005a573) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0005a573) popup_preview_text_window_t

0xad53,	// (0x000559bf) scroll_pane_cp11

0x9ce1,	// (0x0005494d) bg_popup_preview_window_pane_g1

0xabe9,	// (0x00055855) bg_popup_preview_window_pane_g2

0xabf1,	// (0x0005585d) bg_popup_preview_window_pane_g3

0xabf9,	// (0x00055865) bg_popup_preview_window_pane_g4

0xac01,	// (0x0005586d) bg_popup_preview_window_pane_g5

0xac09,	// (0x00055875) bg_popup_preview_window_pane_g6

0xac11,	// (0x0005587d) bg_popup_preview_window_pane_g7

0xac19,	// (0x00055885) bg_popup_preview_window_pane_g8

0x488a,	// (0x0004f4f6) aid_popup_width_pane

0x5db9,	// (0x00050a25) popup_midp_note_alarm_window_ParamLimits

0x5db9,	// (0x00050a25) popup_midp_note_alarm_window

0x8803,	// (0x0005346f) data_form_pane_ParamLimits

0x5224,	// (0x0004fe90) form_field_data_pane_g1

0x522e,	// (0x0004fe9a) form_field_data_pane_t1_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_ParamLimits

0x5246,	// (0x0004feb2) data_form_wide_pane_ParamLimits

0x5257,	// (0x0004fec3) form_field_data_wide_pane_g1

0x5263,	// (0x0004fecf) form_field_data_wide_pane_t1_ParamLimits

0x8574,	// (0x000531e0) input_focus_pane_cp6_ParamLimits

0x8920,	// (0x0005358c) input_popup_find_pane_g1_ParamLimits

0x8920,	// (0x0005358c) input_popup_find_pane_g1

0x54d9,	// (0x00050145) aid_navi_side_left_pane

0x54ee,	// (0x0005015a) aid_navi_side_right_pane

0xa602,	// (0x0005526e) bg_popup_window_pane_cp30_ParamLimits

0xa602,	// (0x0005526e) bg_popup_window_pane_cp30

0xa67c,	// (0x000552e8) popup_midp_note_alarm_window_g1_ParamLimits

0xa67c,	// (0x000552e8) popup_midp_note_alarm_window_g1

0xa6ac,	// (0x00055318) popup_midp_note_alarm_window_t1_ParamLimits

0xa6ac,	// (0x00055318) popup_midp_note_alarm_window_t1

0xa74d,	// (0x000553b9) popup_midp_note_alarm_window_t2_ParamLimits

0xa74d,	// (0x000553b9) popup_midp_note_alarm_window_t2

0xa7fb,	// (0x00055467) popup_midp_note_alarm_window_t3_ParamLimits

0xa7fb,	// (0x00055467) popup_midp_note_alarm_window_t3

0xa82d,	// (0x00055499) popup_midp_note_alarm_window_t4_ParamLimits

0xa82d,	// (0x00055499) popup_midp_note_alarm_window_t4

0xa853,	// (0x000554bf) popup_midp_note_alarm_window_t5_ParamLimits

0xa853,	// (0x000554bf) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0005a510) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0005a510) popup_midp_note_alarm_window_t

0xa8ff,	// (0x0005556b) wait_bar_pane_cp1_ParamLimits

0xa8ff,	// (0x0005556b) wait_bar_pane_cp1

0x77b7,	// (0x00052423) wait_anim_pane_copy1

0x77b7,	// (0x00052423) wait_border_pane_copy1

0xa2dc,	// (0x00054f48) wait_border_pane_g1_copy1

0x527d,	// (0x0004fee9) form_field_popup_pane_g1

0x5285,	// (0x0004fef1) form_field_popup_pane_t1_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_cp7_ParamLimits

0x8831,	// (0x0005349d) list_form_pane_ParamLimits

0x529d,	// (0x0004ff09) form_field_popup_wide_pane_g1

0x52a5,	// (0x0004ff11) form_field_popup_wide_pane_t1_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_cp8_ParamLimits

0x883d,	// (0x000534a9) list_form_wide_pane_ParamLimits

0xb39f,	// (0x0005600b) aid_size_cell_graphic_pane

0x532f,	// (0x0004ff9b) data_form_pane_t1_ParamLimits

0x6497,	// (0x00051103) data_form_wide_pane_t1_ParamLimits

0x98ae,	// (0x0005451a) bg_status_flat_pane

0x77f7,	// (0x00052463) title_pane_t1_ParamLimits

0x785f,	// (0x000524cb) title_pane_t2_ParamLimits

0x7885,	// (0x000524f1) title_pane_t3_ParamLimits

0xf557,	// (0x0005a1c3) title_pane_t_ParamLimits

0x8df2,	// (0x00053a5e) level_1_signal_ParamLimits

0x8e04,	// (0x00053a70) level_2_signal_ParamLimits

0x8e17,	// (0x00053a83) level_3_signal_ParamLimits

0x8e2a,	// (0x00053a96) level_4_signal_ParamLimits

0x8e3d,	// (0x00053aa9) level_5_signal_ParamLimits

0x8e50,	// (0x00053abc) level_6_signal_ParamLimits

0x8e63,	// (0x00053acf) level_7_signal_ParamLimits

0x8df2,	// (0x00053a5e) level_1_battery_ParamLimits

0x8e04,	// (0x00053a70) level_2_battery_ParamLimits

0x8e17,	// (0x00053a83) level_3_battery_ParamLimits

0x8e2a,	// (0x00053a96) level_4_battery_ParamLimits

0x8e3d,	// (0x00053aa9) level_5_battery_ParamLimits

0x8e50,	// (0x00053abc) level_6_battery_ParamLimits

0x8e63,	// (0x00053acf) level_7_battery_ParamLimits

0xa4fb,	// (0x00055167) bg_status_flat_pane_g1

0xa503,	// (0x0005516f) bg_status_flat_pane_g2

0xa50b,	// (0x00055177) bg_status_flat_pane_g3

0xa513,	// (0x0005517f) bg_status_flat_pane_g4

0xa51b,	// (0x00055187) bg_status_flat_pane_g5

0xa523,	// (0x0005518f) bg_status_flat_pane_g6

0xa52b,	// (0x00055197) bg_status_flat_pane_g7

0x78ad,	// (0x00052519) tabs_3_active_pane_t1_ParamLimits

0x78ad,	// (0x00052519) tabs_3_passive_pane_t1_ParamLimits

0x78c7,	// (0x00052533) tabs_4_active_pane_t1_ParamLimits

0x78c7,	// (0x00052533) tabs_4_1_passive_pane_t1_ParamLimits

0x89b4,	// (0x00053620) tabs_2_active_pane_t1_ParamLimits

0x89b4,	// (0x00053620) tabs_2_passive_pane_t1_ParamLimits

0x89c6,	// (0x00053632) bg_active_tab_pane_cp4_ParamLimits

0x89d4,	// (0x00053640) tabs_2_long_active_pane_t1_ParamLimits

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp4_ParamLimits

0x60ea,	// (0x00050d56) list_single_midp_graphic_pane_t1_ParamLimits

0x89c6,	// (0x00053632) bg_active_tab_pane_cp5_ParamLimits

0x89f3,	// (0x0005365f) tabs_3_long_active_pane_t1_ParamLimits

0x89e7,	// (0x00053653) bg_passive_tab_pane_cp5_ParamLimits

0x60ea,	// (0x00050d56) list_single_midp_graphic_pane_t1

0x98ae,	// (0x0005451a) bg_status_flat_pane_ParamLimits

0x9971,	// (0x000545dd) indicator_pane_cp2_ParamLimits

0x9971,	// (0x000545dd) indicator_pane_cp2

0x9a9c,	// (0x00054708) navi_pane_srt_ParamLimits

0x9a9c,	// (0x00054708) navi_pane_srt

0x9ac0,	// (0x0005472c) popup_clock_digital_analogue_window_cp1

0x7974,	// (0x000525e0) indicator_pane_t1

0x9499,	// (0x00054105) copy_highlight_pane

0x9499,	// (0x00054105) cursor_graphics_pane

0x9499,	// (0x00054105) graphic_within_text_pane

0x9499,	// (0x00054105) link_highlight_pane

0xad16,	// (0x00055982) popup_preview_text_window_t5_ParamLimits

0xad16,	// (0x00055982) popup_preview_text_window_t5

0x95bb,	// (0x00054227) cursor_digital_pane

0x95bb,	// (0x00054227) cursor_primary_pane

0x95cc,	// (0x00054238) cursor_primary_small_pane

0x95d4,	// (0x00054240) cursor_secondary_pane

0x95dc,	// (0x00054248) cursor_title_pane

0x95bb,	// (0x00054227) link_highlight_digital_pane

0x95c3,	// (0x0005422f) link_highlight_primary_pane

0x95cc,	// (0x00054238) link_highlight_primary_small_pane

0x95d4,	// (0x00054240) link_highlight_secondary_pane

0x95dc,	// (0x00054248) link_highlight_title_pane

0x95bb,	// (0x00054227) copy_highlight_digital_pane

0x95bb,	// (0x00054227) copy_highlight_primary_pane

0x95cc,	// (0x00054238) copy_highlight_primary_small_pane

0x95d4,	// (0x00054240) copy_highlight_secondary_pane

0x95dc,	// (0x00054248) copy_highlight_title_pane

0x95d4,	// (0x00054240) graphic_text_digital_pane

0xa5a5,	// (0x00055211) graphic_text_primary_pane

0xa5ae,	// (0x0005521a) graphic_text_primary_small_pane

0x95cc,	// (0x00054238) graphic_text_secondary_pane

0x95bb,	// (0x00054227) graphic_text_title_pane

0x95e4,	// (0x00054250) cursor_primary_pane_g1

0xa597,	// (0x00055203) cursor_text_primary_t1

0xa57f,	// (0x000551eb) cursor_primary_small_pane_g1

0xa589,	// (0x000551f5) cursor_text_primary_small_t1

0xa55b,	// (0x000551c7) cursor_primary_small_pane_g1_copy1

0xa565,	// (0x000551d1) cursor_text_primary_small_t1_copy1

0xa543,	// (0x000551af) cursor_text_title_t1

0xa551,	// (0x000551bd) cursor_title_pane_g1

0x95e4,	// (0x00054250) cursor_digital_pane_g1

0x95ee,	// (0x0005425a) cursor_text_digital_t1

0x9613,	// (0x0005427f) link_highlight_primary_pane_g1

0xa4ec,	// (0x00055158) link_highlight_primary_pane_t1

0x95fc,	// (0x00054268) link_highlight_primary_small_pane_g1

0x9604,	// (0x00054270) link_highlight_primary_small_pane_t1

0x9613,	// (0x0005427f) link_highlight_secondary_pane_g1

0x961b,	// (0x00054287) link_highlight_secondary_pane_t1

0xa460,	// (0x000550cc) link_highlight_title_pane_g1

0xa468,	// (0x000550d4) link_highlight_title_pane_t1

0xa449,	// (0x000550b5) link_highlight_digital_pane_g1

0xa451,	// (0x000550bd) link_highlight_digital_pane_t1

0xa321,	// (0x00054f8d) copy_highlight_primary_pane_g1

0xa329,	// (0x00054f95) copy_highlight_primary_pane_t1

0xa2fb,	// (0x00054f67) copy_highlight_primary_small_pane_g1

0xa312,	// (0x00054f7e) copy_highlight_primary_small_pane_t1

0x962a,	// (0x00054296) copy_highlight_secondary_pane_g1

0x9632,	// (0x0005429e) copy_highlight_secondary_pane_t1

0xa2fb,	// (0x00054f67) copy_highlight_title_pane_g1

0xa303,	// (0x00054f6f) copy_highlight_title_pane_t1

0xa321,	// (0x00054f8d) copy_highlight_digital_pane_g1

0xb569,	// (0x000561d5) copy_highlight_digital_pane_t1

0xb4bd,	// (0x00056129) graphic_text_primary_pane_g1

0xb54d,	// (0x000561b9) graphic_text_primary_pane_t1

0xb55b,	// (0x000561c7) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0005a63f) graphic_text_primary_pane_t

0xb529,	// (0x00056195) graphic_text_primary_small_pane_g1

0xb531,	// (0x0005619d) graphic_text_primary_small_pane_t1

0xb53f,	// (0x000561ab) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0005a63a) graphic_text_primary_small_pane_t

0xb505,	// (0x00056171) graphic_text_secondary_pane_g1

0xb50d,	// (0x00056179) graphic_text_secondary_pane_t1

0xb51b,	// (0x00056187) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0005a635) graphic_text_secondary_pane_t

0xb4e1,	// (0x0005614d) graphic_text_title_pane_g1

0xb4e9,	// (0x00056155) graphic_text_title_pane_t1

0xb4f7,	// (0x00056163) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0005a630) graphic_text_title_pane_t

0xb4bd,	// (0x00056129) graphic_text_digital_pane_g1

0xb4c5,	// (0x00056131) graphic_text_digital_pane_t1

0xb4d3,	// (0x0005613f) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0005a62b) graphic_text_digital_pane_t

0x7897,	// (0x00052503) navi_icon_pane_srt_ParamLimits

0x7897,	// (0x00052503) navi_icon_pane_srt

0x77b7,	// (0x00052423) navi_midp_pane_srt

0x77b7,	// (0x00052423) navi_navi_pane_srt

0x7897,	// (0x00052503) navi_text_pane_srt_ParamLimits

0x7897,	// (0x00052503) navi_text_pane_srt

0xb488,	// (0x000560f4) navi_navi_icon_text_pane_srt

0xb490,	// (0x000560fc) navi_navi_pane_srt_g1_ParamLimits

0xb490,	// (0x000560fc) navi_navi_pane_srt_g1

0xb4a2,	// (0x0005610e) navi_navi_pane_srt_g2_ParamLimits

0xb4a2,	// (0x0005610e) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0005a626) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0005a626) navi_navi_pane_srt_g

0xb4b4,	// (0x00056120) navi_navi_tabs_pane_srt

0xb488,	// (0x000560f4) navi_navi_text_pane_srt

0xb488,	// (0x000560f4) navi_navi_volume_pane_srt

0xb479,	// (0x000560e5) navi_navi_text_pane_srt_t1

0x65d8,	// (0x00051244) navi_navi_volume_pane_srt_g1

0x65e0,	// (0x0005124c) volume_small_pane_srt_ParamLimits

0x65e0,	// (0x0005124c) volume_small_pane_srt

0x5827,	// (0x00050493) volume_small_pane_srt_g1_ParamLimits

0x5827,	// (0x00050493) volume_small_pane_srt_g1

0x5837,	// (0x000504a3) volume_small_pane_srt_g2_ParamLimits

0x5837,	// (0x000504a3) volume_small_pane_srt_g2

0x5848,	// (0x000504b4) volume_small_pane_srt_g3_ParamLimits

0x5848,	// (0x000504b4) volume_small_pane_srt_g3

0x5859,	// (0x000504c5) volume_small_pane_srt_g4_ParamLimits

0x5859,	// (0x000504c5) volume_small_pane_srt_g4

0x586a,	// (0x000504d6) volume_small_pane_srt_g5_ParamLimits

0x586a,	// (0x000504d6) volume_small_pane_srt_g5

0x587b,	// (0x000504e7) volume_small_pane_srt_g6_ParamLimits

0x587b,	// (0x000504e7) volume_small_pane_srt_g6

0x588c,	// (0x000504f8) volume_small_pane_srt_g7_ParamLimits

0x588c,	// (0x000504f8) volume_small_pane_srt_g7

0x589d,	// (0x00050509) volume_small_pane_srt_g8_ParamLimits

0x589d,	// (0x00050509) volume_small_pane_srt_g8

0x58ae,	// (0x0005051a) volume_small_pane_srt_g9_ParamLimits

0x58ae,	// (0x0005051a) volume_small_pane_srt_g9

0x58bf,	// (0x0005052b) volume_small_pane_srt_g10_ParamLimits

0x58bf,	// (0x0005052b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005a3ce) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005a3ce) volume_small_pane_srt_g

0x836e,	// (0x00052fda) query_popup_data_pane_cp2

0xb45f,	// (0x000560cb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45f,	// (0x000560cb) navi_navi_icon_text_pane_srt_t1

0xa5a5,	// (0x00055211) navi_tabs_2_long_pane_srt

0xa5a5,	// (0x00055211) navi_tabs_2_pane_srt

0xa5a5,	// (0x00055211) navi_tabs_3_long_pane_srt

0xa5a5,	// (0x00055211) navi_tabs_3_pane_srt

0xa5a5,	// (0x00055211) navi_tabs_4_pane_srt

0x65b8,	// (0x00051224) tabs_2_active_pane_srt_ParamLimits

0x65b8,	// (0x00051224) tabs_2_active_pane_srt

0x65c8,	// (0x00051234) tabs_2_passive_pane_srt_ParamLimits

0x65c8,	// (0x00051234) tabs_2_passive_pane_srt

0x97d7,	// (0x00054443) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97d7,	// (0x00054443) bg_passive_tab_pane_cp1_srt

0xb42b,	// (0x00056097) bg_passive_tab_pane_g1_cp1_srt

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp1_srt

0xb434,	// (0x000560a0) bg_passive_tab_pane_g3_cp1_srt

0x7897,	// (0x00052503) bg_active_tab_pane_cp1_srt_ParamLimits

0x7897,	// (0x00052503) bg_active_tab_pane_cp1_srt

0xb43d,	// (0x000560a9) tabs_2_active_pane_srt_g1

0xb445,	// (0x000560b1) tabs_2_active_pane_srt_t1_ParamLimits

0xb445,	// (0x000560b1) tabs_2_active_pane_srt_t1

0xb42b,	// (0x00056097) bg_active_tab_pane_g1_cp1_srt

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp1_srt

0xb434,	// (0x000560a0) bg_active_tab_pane_g3_cp1_srt

0x6585,	// (0x000511f1) tabs_3_active_pane_srt_ParamLimits

0x6585,	// (0x000511f1) tabs_3_active_pane_srt

0x6596,	// (0x00051202) tabs_3_passive_pane_cp_srt_ParamLimits

0x6596,	// (0x00051202) tabs_3_passive_pane_cp_srt

0x65a7,	// (0x00051213) tabs_3_passive_pane_srt_ParamLimits

0x65a7,	// (0x00051213) tabs_3_passive_pane_srt

0x97d7,	// (0x00054443) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97d7,	// (0x00054443) bg_passive_tab_pane_cp2_srt

0x9641,	// (0x000542ad) bg_passive_tab_pane_g1_cp2_srt

0x90db,	// (0x00053d47) bg_passive_tab_pane_g2_cp2_srt

0x964a,	// (0x000542b6) bg_passive_tab_pane_g3_cp2_srt

0x7897,	// (0x00052503) bg_active_tab_pane_cp2_srt_ParamLimits

0x7897,	// (0x00052503) bg_active_tab_pane_cp2_srt

0xb411,	// (0x0005607d) tabs_3_active_pane_srt_g1

0xb419,	// (0x00056085) tabs_3_active_pane_srt_t1_ParamLimits

0xb419,	// (0x00056085) tabs_3_active_pane_srt_t1

0x9641,	// (0x000542ad) bg_active_tab_pane_g1_cp2_srt

0x90db,	// (0x00053d47) bg_active_tab_pane_g2_cp2_srt

0x964a,	// (0x000542b6) bg_active_tab_pane_g3_cp2_srt

0x653d,	// (0x000511a9) tabs_4_active_pane_srt_ParamLimits

0x653d,	// (0x000511a9) tabs_4_active_pane_srt

0x654f,	// (0x000511bb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x654f,	// (0x000511bb) tabs_4_passive_pane_cp2_srt

0x5a24,	// (0x00050690) aid_size_cell_toolbar

0x89e7,	// (0x00053653) main_idle_act_pane_ParamLimits

0x5bef,	// (0x0005085b) popup_large_graphic_colour_window_ParamLimits

0x5f56,	// (0x00050bc2) popup_toolbar_window_ParamLimits

0x5f56,	// (0x00050bc2) popup_toolbar_window

0xb279,	// (0x00055ee5) list_single_graphic_2heading_pane_ParamLimits

0xb279,	// (0x00055ee5) list_single_graphic_2heading_pane

0x8ba3,	// (0x0005380f) aid_size_cell_apps_grid_lsc_pane

0x8bb5,	// (0x00053821) aid_size_cell_apps_grid_prt_pane

0x97d7,	// (0x00054443) bg_wml_button_pane_cp1_ParamLimits

0x97d7,	// (0x00054443) bg_wml_button_pane_cp1

0x9f8b,	// (0x00054bf7) form_midp_field_text_pane_t1_ParamLimits

0x9d55,	// (0x000549c1) input_focus_pane_cp050_ParamLimits

0x9fc2,	// (0x00054c2e) list_midp_form_text_pane_ParamLimits

0x9f68,	// (0x00054bd4) input_focus_pane_cp051_ParamLimits

0x9f7c,	// (0x00054be8) list_midp_choice_pane_ParamLimits

0x9e0e,	// (0x00054a7a) list_single_2graphic_pane_cp3_ParamLimits

0x9e0e,	// (0x00054a7a) list_single_2graphic_pane_cp3

0x9e32,	// (0x00054a9e) list_single_midp_graphic_pane_ParamLimits

0x9e32,	// (0x00054a9e) list_single_midp_graphic_pane

0x4812,	// (0x0004f47e) list_single_graphic_2heading_pane_g1_ParamLimits

0x4812,	// (0x0004f47e) list_single_graphic_2heading_pane_g1

0x481e,	// (0x0004f48a) list_single_graphic_2heading_pane_g4_ParamLimits

0x481e,	// (0x0004f48a) list_single_graphic_2heading_pane_g4

0x482a,	// (0x0004f496) list_single_graphic_2heading_pane_g5_ParamLimits

0x482a,	// (0x0004f496) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005a421) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005a421) list_single_graphic_2heading_pane_g

0x4836,	// (0x0004f4a2) list_single_graphic_2heading_pane_t1_ParamLimits

0x4836,	// (0x0004f4a2) list_single_graphic_2heading_pane_t1

0x484a,	// (0x0004f4b6) list_single_graphic_2heading_pane_t2_ParamLimits

0x484a,	// (0x0004f4b6) list_single_graphic_2heading_pane_t2

0x4866,	// (0x0004f4d2) list_single_graphic_2heading_pane_t3_ParamLimits

0x4866,	// (0x0004f4d2) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005a428) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005a428) list_single_graphic_2heading_pane_t

0x9c1f,	// (0x0005488b) bg_popup_sub_pane_cp2

0x9c49,	// (0x000548b5) grid_toobar_pane

0x6003,	// (0x00050c6f) cell_toolbar_pane_ParamLimits

0x6003,	// (0x00050c6f) cell_toolbar_pane

0x9c85,	// (0x000548f1) cell_toolbar_pane_g1_ParamLimits

0x9c85,	// (0x000548f1) cell_toolbar_pane_g1

0x9c99,	// (0x00054905) cell_toolbar_pane_g2_ParamLimits

0x9c99,	// (0x00054905) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005a436) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005a436) cell_toolbar_pane_g

0x9cbb,	// (0x00054927) grid_highlight_pane_cp2_ParamLimits

0x9cbb,	// (0x00054927) grid_highlight_pane_cp2

0x9cd5,	// (0x00054941) toolbar_button_pane

0x9ce1,	// (0x0005494d) toolbar_button_pane_g1

0x9ce9,	// (0x00054955) toolbar_button_pane_g2

0x9cf1,	// (0x0005495d) toolbar_button_pane_g3

0x9cf9,	// (0x00054965) toolbar_button_pane_g4

0x9d01,	// (0x0005496d) toolbar_button_pane_g5

0x9d09,	// (0x00054975) toolbar_button_pane_g6

0x9d11,	// (0x0005497d) toolbar_button_pane_g7

0x9d19,	// (0x00054985) toolbar_button_pane_g8

0x9d21,	// (0x0005498d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005a43b) toolbar_button_pane_g

0x605d,	// (0x00050cc9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x605d,	// (0x00050cc9) list_single_2graphic_pane_g1_cp3

0x6069,	// (0x00050cd5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6069,	// (0x00050cd5) list_single_2graphic_pane_g2_cp3

0x607a,	// (0x00050ce6) list_single_2graphic_pane_g3_cp3

0x6082,	// (0x00050cee) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6082,	// (0x00050cee) list_single_2graphic_pane_g4_cp3

0x608e,	// (0x00050cfa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x608e,	// (0x00050cfa) list_single_2graphic_pane_t1_cp3

0x60de,	// (0x00050d4a) list_single_midp_graphic_pane_g2_ParamLimits

0x60de,	// (0x00050d4a) list_single_midp_graphic_pane_g2

0x480a,	// (0x0004f476) aid_zoom_text_primary

0x5a2c,	// (0x00050698) aid_zoom_text_secondary

0x96fb,	// (0x00054367) status_small_pane_g7_ParamLimits

0x96fb,	// (0x00054367) status_small_pane_g7

0x971e,	// (0x0005438a) status_small_pane_t1_ParamLimits

0x77ce,	// (0x0005243a) title_pane_g2

0x0003,

0xf54e,	// (0x0005a1ba) title_pane_g

0x8412,	// (0x0005307e) aid_size_cell_colour_1_pane_ParamLimits

0x8412,	// (0x0005307e) aid_size_cell_colour_1_pane

0x8426,	// (0x00053092) aid_size_cell_colour_2_pane_ParamLimits

0x8426,	// (0x00053092) aid_size_cell_colour_2_pane

0x843a,	// (0x000530a6) aid_size_cell_colour_3_pane_ParamLimits

0x843a,	// (0x000530a6) aid_size_cell_colour_3_pane

0x844e,	// (0x000530ba) aid_size_cell_colour_4_pane_ParamLimits

0x844e,	// (0x000530ba) aid_size_cell_colour_4_pane

0x5416,	// (0x00050082) title_pane_stacon_g1_ParamLimits

0x5416,	// (0x00050082) title_pane_stacon_g1

0xa380,	// (0x00054fec) popup_note_wait_window_g3_ParamLimits

0xa380,	// (0x00054fec) popup_note_wait_window_g3

0xa3f6,	// (0x00055062) popup_note_wait_window_t5_ParamLimits

0xa3f6,	// (0x00055062) popup_note_wait_window_t5

0x77b7,	// (0x00052423) main_feb_china_hwr_fs_writing_pane

0x5ad2,	// (0x0005073e) popup_feb_china_hwr_fs_window_ParamLimits

0x5ad2,	// (0x0005073e) popup_feb_china_hwr_fs_window

0x616c,	// (0x00050dd8) aid_size_cell_hwr_fs_ParamLimits

0x616c,	// (0x00050dd8) aid_size_cell_hwr_fs

0x9d55,	// (0x000549c1) bg_popup_sub_pane_cp3_ParamLimits

0x9d55,	// (0x000549c1) bg_popup_sub_pane_cp3

0x6181,	// (0x00050ded) grid_hwr_fs_pane_ParamLimits

0x6181,	// (0x00050ded) grid_hwr_fs_pane

0x6199,	// (0x00050e05) linegrid_hwr_fs_pane_ParamLimits

0x6199,	// (0x00050e05) linegrid_hwr_fs_pane

0x61a9,	// (0x00050e15) cell_hwr_fs_pane_ParamLimits

0x61a9,	// (0x00050e15) cell_hwr_fs_pane

0x9d61,	// (0x000549cd) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d61,	// (0x000549cd) linegrid_hwr_fs_pane_g1

0x9d6d,	// (0x000549d9) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d6d,	// (0x000549d9) linegrid_hwr_fs_pane_g2

0x9d7f,	// (0x000549eb) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d7f,	// (0x000549eb) linegrid_hwr_fs_pane_g3

0x61cb,	// (0x00050e37) linegrid_hwr_fs_pane_g4_ParamLimits

0x61cb,	// (0x00050e37) linegrid_hwr_fs_pane_g4

0x61e5,	// (0x00050e51) linegrid_hwr_fs_pane_g5_ParamLimits

0x61e5,	// (0x00050e51) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0005a466) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0005a466) linegrid_hwr_fs_pane_g

0x9d8b,	// (0x000549f7) cell_hwr_fs_pane_g1_ParamLimits

0x9d8b,	// (0x000549f7) cell_hwr_fs_pane_g1

0x9b56,	// (0x000547c2) cell_hwr_fs_pane_g2_ParamLimits

0x9b56,	// (0x000547c2) cell_hwr_fs_pane_g2

0x9da1,	// (0x00054a0d) cell_hwr_fs_pane_g3_ParamLimits

0x9da1,	// (0x00054a0d) cell_hwr_fs_pane_g3

0x9dae,	// (0x00054a1a) cell_hwr_fs_pane_g4_ParamLimits

0x9dae,	// (0x00054a1a) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0005a471) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0005a471) cell_hwr_fs_pane_g

0x61fb,	// (0x00050e67) cell_hwr_fs_pane_t1

0x77b7,	// (0x00052423) grid_highlight_pane_cp6

0x77b7,	// (0x00052423) main_idle_act2_pane

0x895a,	// (0x000535c6) aid_inside_area_popup_secondary

0xaa39,	// (0x000556a5) aid_inside_area_window_primary_ParamLimits

0xaa39,	// (0x000556a5) aid_inside_area_window_primary

0xb578,	// (0x000561e4) ai2_news_ticker_pane

0xb580,	// (0x000561ec) aid_size_cell_ai1_link_ParamLimits

0xb580,	// (0x000561ec) aid_size_cell_ai1_link

0xb59a,	// (0x00056206) popup_ai2_data_window_ParamLimits

0xb59a,	// (0x00056206) popup_ai2_data_window

0xb5b0,	// (0x0005621c) popup_ai2_link_window_ParamLimits

0xb5b0,	// (0x0005621c) popup_ai2_link_window

0x9d55,	// (0x000549c1) bg_popup_sub_pane_cp4_ParamLimits

0x9d55,	// (0x000549c1) bg_popup_sub_pane_cp4

0xb5c4,	// (0x00056230) grid_ai2_link_pane_ParamLimits

0xb5c4,	// (0x00056230) grid_ai2_link_pane

0xb5db,	// (0x00056247) popup_ai2_link_window_g1_ParamLimits

0xb5db,	// (0x00056247) popup_ai2_link_window_g1

0xb5e7,	// (0x00056253) popup_ai2_link_window_g2_ParamLimits

0xb5e7,	// (0x00056253) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0005a644) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0005a644) popup_ai2_link_window_g

0xb5f6,	// (0x00056262) ai2_mp_button_pane

0xb5fe,	// (0x0005626a) ai2_mp_volume_pane

0x9f68,	// (0x00054bd4) bg_popup_sub_pane_cp5_ParamLimits

0x9f68,	// (0x00054bd4) bg_popup_sub_pane_cp5

0xb606,	// (0x00056272) heading_ai2_gene_pane_ParamLimits

0xb606,	// (0x00056272) heading_ai2_gene_pane

0xb612,	// (0x0005627e) list_ai2_gene_pane_ParamLimits

0xb612,	// (0x0005627e) list_ai2_gene_pane

0xb65a,	// (0x000562c6) cell_ai2_link_pane_ParamLimits

0xb65a,	// (0x000562c6) cell_ai2_link_pane

0xb670,	// (0x000562dc) cell_ai2_link_pane_g1

0x77b7,	// (0x00052423) grid_highlight_pane_cp7

0x65f5,	// (0x00051261) ai2_mp_volume_pane_g1

0xb740,	// (0x000563ac) ai2_mp_volume_pane_g2

0xb6b5,	// (0x00056321) list_ai2_gene_pane_t1

0xb748,	// (0x000563b4) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0005a65d) ai2_mp_volume_pane_g

0x65fd,	// (0x00051269) volume_small_pane_cp3

0xb750,	// (0x000563bc) aid_size_cell_ai2_button

0xb758,	// (0x000563c4) grid_ai2_button_pane

0xb761,	// (0x000563cd) cell_ai2_button_pane_ParamLimits

0xb761,	// (0x000563cd) cell_ai2_button_pane

0x77ad,	// (0x00052419) cell_ai2_button_pane_g1

0x77b7,	// (0x00052423) grid_highlight_pane_cp8

0xb700,	// (0x0005636c) ai2_gene_pane_t1_ParamLimits

0xb700,	// (0x0005636c) ai2_gene_pane_t1

0x5a1a,	// (0x00050686) aid_height_parent_landscape

0xb0b0,	// (0x00055d1c) aid_height_set_list

0xb0c1,	// (0x00055d2d) aid_size_parent

0xb39f,	// (0x0005600b) aid_size_cell_graphic_pane_ParamLimits

0xb622,	// (0x0005628e) popup_ai2_data_window_g1_ParamLimits

0xb622,	// (0x0005628e) popup_ai2_data_window_g1

0xb62e,	// (0x0005629a) ai2_news_ticker_pane_g1

0xb636,	// (0x000562a2) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0005a649) ai2_news_ticker_pane_g

0xb63e,	// (0x000562aa) ai2_news_ticker_pane_t1

0xb64c,	// (0x000562b8) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0005a64e) ai2_news_ticker_pane_t

0xb679,	// (0x000562e5) heading_ai2_gene_pane_g1

0xb681,	// (0x000562ed) heading_ai2_gene_pane_t1_ParamLimits

0xb681,	// (0x000562ed) heading_ai2_gene_pane_t1

0xb696,	// (0x00056302) list_highlight_pane_cp6

0xb69e,	// (0x0005630a) ai2_gene_pane_ParamLimits

0xb69e,	// (0x0005630a) ai2_gene_pane

0xb6c3,	// (0x0005632f) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0005a653) list_ai2_gene_pane_t

0xb6d1,	// (0x0005633d) list_highlight_pane_cp8_ParamLimits

0xb6d1,	// (0x0005633d) list_highlight_pane_cp8

0xb6e2,	// (0x0005634e) ai2_gene_pane_g1_ParamLimits

0xb6e2,	// (0x0005634e) ai2_gene_pane_g1

0xb6f4,	// (0x00056360) ai2_gene_pane_g2_ParamLimits

0xb6f4,	// (0x00056360) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0005a658) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0005a658) ai2_gene_pane_g

0x8799,	// (0x00053405) scroll_pane_cp12

0x59d9,	// (0x00050645) control_pane_t3_ParamLimits

0x59d9,	// (0x00050645) control_pane_t3

0x970f,	// (0x0005437b) status_small_pane_g8_ParamLimits

0x970f,	// (0x0005437b) status_small_pane_g8

0x5bb8,	// (0x00050824) popup_find_window_ParamLimits

0x5dcd,	// (0x00050a39) popup_note_image_window_ParamLimits

0x6033,	// (0x00050c9f) list_double2_graphic_pane_vc_g1_ParamLimits

0x6033,	// (0x00050c9f) list_double2_graphic_pane_vc_g1

0x93d2,	// (0x0005403e) list_double2_graphic_pane_vc_g2_ParamLimits

0x93d2,	// (0x0005403e) list_double2_graphic_pane_vc_g2

0x7cb6,	// (0x00052922) list_double2_graphic_pane_vc_g3_ParamLimits

0x7cb6,	// (0x00052922) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a42f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a42f) list_double2_graphic_pane_vc_g

0x603f,	// (0x00050cab) list_double2_graphic_pane_vc_t1_ParamLimits

0x603f,	// (0x00050cab) list_double2_graphic_pane_vc_t1

0x93d2,	// (0x0005403e) list_single_heading_pane_vc_g1_ParamLimits

0x93d2,	// (0x0005403e) list_single_heading_pane_vc_g1

0x7cb6,	// (0x00052922) list_single_heading_pane_vc_g2_ParamLimits

0x7cb6,	// (0x00052922) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a450) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a450) list_single_heading_pane_vc_g

0x60aa,	// (0x00050d16) list_single_heading_pane_vc_t1_ParamLimits

0x60aa,	// (0x00050d16) list_single_heading_pane_vc_t1

0x60c2,	// (0x00050d2e) list_single_heading_pane_vc_t2_ParamLimits

0x60c2,	// (0x00050d2e) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0005a455) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005a455) list_single_heading_pane_vc_t

0x7cc2,	// (0x0005292e) list_setting_number_pane_vc_g1_ParamLimits

0x7cc2,	// (0x0005292e) list_setting_number_pane_vc_g1

0x7cce,	// (0x0005293a) list_setting_number_pane_vc_g2_ParamLimits

0x7cce,	// (0x0005293a) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a45a) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a45a) list_setting_number_pane_vc_g

0x6100,	// (0x00050d6c) list_setting_number_pane_vc_t1_ParamLimits

0x6100,	// (0x00050d6c) list_setting_number_pane_vc_t1

0x6114,	// (0x00050d80) list_setting_number_pane_vc_t2_ParamLimits

0x6114,	// (0x00050d80) list_setting_number_pane_vc_t2

0x6130,	// (0x00050d9c) list_setting_number_pane_vc_t3_ParamLimits

0x6130,	// (0x00050d9c) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005a45f) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005a45f) list_setting_number_pane_vc_t

0x615c,	// (0x00050dc8) set_value_pane_vc_ParamLimits

0x615c,	// (0x00050dc8) set_value_pane_vc

0xb279,	// (0x00055ee5) list_double2_graphic_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double2_graphic_pane_vc

0x64dd,	// (0x00051149) list_double2_large_graphic_pane_vc_ParamLimits

0x64dd,	// (0x00051149) list_double2_large_graphic_pane_vc

0xb279,	// (0x00055ee5) list_double2_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double2_pane_vc

0xb279,	// (0x00055ee5) list_double_graphic_heading_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double_graphic_heading_pane_vc

0xb279,	// (0x00055ee5) list_double_graphic_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double_graphic_pane_vc

0xb279,	// (0x00055ee5) list_double_heading_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double_heading_pane_vc

0x64ee,	// (0x0005115a) list_double_large_graphic_pane_vc_ParamLimits

0x64ee,	// (0x0005115a) list_double_large_graphic_pane_vc

0xb279,	// (0x00055ee5) list_double_number_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double_number_pane_vc

0xb279,	// (0x00055ee5) list_double_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double_pane_vc

0xb279,	// (0x00055ee5) list_double_time_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_double_time_pane_vc

0xb279,	// (0x00055ee5) list_setting_number_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_setting_number_pane_vc

0xb279,	// (0x00055ee5) list_setting_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_setting_pane_vc

0xb279,	// (0x00055ee5) list_single_graphic_heading_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_single_graphic_heading_pane_vc

0xb279,	// (0x00055ee5) list_single_heading_pane_vc_ParamLimits

0xb279,	// (0x00055ee5) list_single_heading_pane_vc

0x7cf5,	// (0x00052961) list_single_number_heading_pane_vc_ParamLimits

0x7cf5,	// (0x00052961) list_single_number_heading_pane_vc

0x6033,	// (0x00050c9f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6033,	// (0x00050c9f) list_double_graphic_heading_pane_vc_g1

0x93d2,	// (0x0005403e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93d2,	// (0x0005403e) list_double_graphic_heading_pane_vc_g2

0x7cb6,	// (0x00052922) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7cb6,	// (0x00052922) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a42f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a42f) list_double_graphic_heading_pane_vc_g

0x6606,	// (0x00051272) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6606,	// (0x00051272) list_double_graphic_heading_pane_vc_t1

0x6622,	// (0x0005128e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6622,	// (0x0005128e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0005a664) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0005a664) list_double_graphic_heading_pane_vc_t

0x7cc2,	// (0x0005292e) list_setting_pane_vc_g1_ParamLimits

0x7cc2,	// (0x0005292e) list_setting_pane_vc_g1

0x7cce,	// (0x0005293a) list_setting_pane_vc_g2_ParamLimits

0x7cce,	// (0x0005293a) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a45a) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a45a) list_setting_pane_vc_g

0x6640,	// (0x000512ac) list_setting_pane_vc_t1_ParamLimits

0x6640,	// (0x000512ac) list_setting_pane_vc_t1

0x665c,	// (0x000512c8) list_setting_pane_vc_t2_ParamLimits

0x665c,	// (0x000512c8) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0005a692) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0005a692) list_setting_pane_vc_t

0x615c,	// (0x00050dc8) set_value_pane_cp_vc_ParamLimits

0x615c,	// (0x00050dc8) set_value_pane_cp_vc

0x93d2,	// (0x0005403e) list_single_number_heading_pane_vc_g1_ParamLimits

0x93d2,	// (0x0005403e) list_single_number_heading_pane_vc_g1

0x7cb6,	// (0x00052922) list_single_number_heading_pane_vc_g2_ParamLimits

0x7cb6,	// (0x00052922) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a450) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a450) list_single_number_heading_pane_vc_g

0x60aa,	// (0x00050d16) list_single_number_heading_pane_vc_t1_ParamLimits

0x60aa,	// (0x00050d16) list_single_number_heading_pane_vc_t1

0x6678,	// (0x000512e4) list_single_number_heading_pane_vc_t2_ParamLimits

0x6678,	// (0x000512e4) list_single_number_heading_pane_vc_t2

0x668c,	// (0x000512f8) list_single_number_heading_pane_vc_t3_ParamLimits

0x668c,	// (0x000512f8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0005a697) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0005a697) list_single_number_heading_pane_vc_t

0x6033,	// (0x00050c9f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6033,	// (0x00050c9f) list_single_graphic_heading_pane_vc_g1

0x93d2,	// (0x0005403e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93d2,	// (0x0005403e) list_single_graphic_heading_pane_vc_g4

0x7cb6,	// (0x00052922) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7cb6,	// (0x00052922) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005a42f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a42f) list_single_graphic_heading_pane_vc_g

0x60aa,	// (0x00050d16) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x60aa,	// (0x00050d16) list_single_graphic_heading_pane_vc_t1

0x669e,	// (0x0005130a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x669e,	// (0x0005130a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0005a69e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0005a69e) list_single_graphic_heading_pane_vc_t

0x93d2,	// (0x0005403e) list_double2_pane_vc_g1_ParamLimits

0x93d2,	// (0x0005403e) list_double2_pane_vc_g1

0x7cb6,	// (0x00052922) list_double2_pane_vc_g2_ParamLimits

0x7cb6,	// (0x00052922) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a450) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a450) list_double2_pane_vc_g

0x66b2,	// (0x0005131e) list_double2_pane_vc_t1_ParamLimits

0x66b2,	// (0x0005131e) list_double2_pane_vc_t1

0x66c8,	// (0x00051334) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x66c8,	// (0x00051334) list_double2_large_graphic_pane_vc_g1

0x66d4,	// (0x00051340) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x66d4,	// (0x00051340) list_double2_large_graphic_pane_vc_g2

0x66e0,	// (0x0005134c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x66e0,	// (0x0005134c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0005a6a3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0005a6a3) list_double2_large_graphic_pane_vc_g

0x66ec,	// (0x00051358) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x66ec,	// (0x00051358) list_double2_large_graphic_pane_vc_t1

0x7d70,	// (0x000529dc) list_double_time_pane_vc_g1_ParamLimits

0x7d70,	// (0x000529dc) list_double_time_pane_vc_g1

0x7d7c,	// (0x000529e8) list_double_time_pane_vc_g2_ParamLimits

0x7d7c,	// (0x000529e8) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0005a6aa) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0005a6aa) list_double_time_pane_vc_g

0x6702,	// (0x0005136e) list_double_time_pane_vc_t1_ParamLimits

0x6702,	// (0x0005136e) list_double_time_pane_vc_t1

0x6726,	// (0x00051392) list_double_time_pane_vc_t2_ParamLimits

0x6726,	// (0x00051392) list_double_time_pane_vc_t2

0x7d88,	// (0x000529f4) list_double_time_pane_vc_t3_ParamLimits

0x7d88,	// (0x000529f4) list_double_time_pane_vc_t3

0x7d9a,	// (0x00052a06) list_double_time_pane_vc_t4_ParamLimits

0x7d9a,	// (0x00052a06) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0005a6af) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0005a6af) list_double_time_pane_vc_t

0x93d2,	// (0x0005403e) list_double_pane_vc_g1_ParamLimits

0x93d2,	// (0x0005403e) list_double_pane_vc_g1

0x7cb6,	// (0x00052922) list_double_pane_vc_g2_ParamLimits

0x7cb6,	// (0x00052922) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a450) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a450) list_double_pane_vc_g

0x7dae,	// (0x00052a1a) list_double_pane_vc_t1_ParamLimits

0x7dae,	// (0x00052a1a) list_double_pane_vc_t1

0x7dc2,	// (0x00052a2e) list_double_pane_vc_t2_ParamLimits

0x7dc2,	// (0x00052a2e) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0005a6b8) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005a6b8) list_double_pane_vc_t

0x93d2,	// (0x0005403e) list_double_number_pane_vc_g1_ParamLimits

0x93d2,	// (0x0005403e) list_double_number_pane_vc_g1

0x7cb6,	// (0x00052922) list_double_number_pane_vc_g2_ParamLimits

0x7cb6,	// (0x00052922) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a450) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a450) list_double_number_pane_vc_g

0x7dda,	// (0x00052a46) list_double_number_pane_vc_t1_ParamLimits

0x7dda,	// (0x00052a46) list_double_number_pane_vc_t1

0x7dec,	// (0x00052a58) list_double_number_pane_vc_t2_ParamLimits

0x7dec,	// (0x00052a58) list_double_number_pane_vc_t2

0x7e00,	// (0x00052a6c) list_double_number_pane_vc_t3_ParamLimits

0x7e00,	// (0x00052a6c) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0005a6bd) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0005a6bd) list_double_number_pane_vc_t

0x7e18,	// (0x00052a84) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7e18,	// (0x00052a84) list_double_large_graphic_pane_vc_g1

0x7e3a,	// (0x00052aa6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7e3a,	// (0x00052aa6) list_double_large_graphic_pane_vc_g2

0x7e4e,	// (0x00052aba) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7e4e,	// (0x00052aba) list_double_large_graphic_pane_vc_g3

0x7e5d,	// (0x00052ac9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7e5d,	// (0x00052ac9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0005a6c4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0005a6c4) list_double_large_graphic_pane_vc_g

0x7e69,	// (0x00052ad5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7e69,	// (0x00052ad5) list_double_large_graphic_pane_vc_t1

0x7e85,	// (0x00052af1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7e85,	// (0x00052af1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0005a6cd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0005a6cd) list_double_large_graphic_pane_vc_t

0x93d2,	// (0x0005403e) list_double_heading_pane_vc_g1_ParamLimits

0x93d2,	// (0x0005403e) list_double_heading_pane_vc_g1

0x7cb6,	// (0x00052922) list_double_heading_pane_vc_g2_ParamLimits

0x7cb6,	// (0x00052922) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a450) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a450) list_double_heading_pane_vc_g

0x7ea7,	// (0x00052b13) list_double_heading_pane_vc_t1_ParamLimits

0x7ea7,	// (0x00052b13) list_double_heading_pane_vc_t1

0x60aa,	// (0x00050d16) list_double_heading_pane_vc_t2_ParamLimits

0x60aa,	// (0x00050d16) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0005a6d2) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0005a6d2) list_double_heading_pane_vc_t

0x7ebb,	// (0x00052b27) list_double_graphic_pane_vc_g1_ParamLimits

0x7ebb,	// (0x00052b27) list_double_graphic_pane_vc_g1

0x7ec7,	// (0x00052b33) list_double_graphic_pane_vc_g2_ParamLimits

0x7ec7,	// (0x00052b33) list_double_graphic_pane_vc_g2

0x93d2,	// (0x0005403e) list_double_graphic_pane_vc_g3_ParamLimits

0x93d2,	// (0x0005403e) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0005a6d7) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0005a6d7) list_double_graphic_pane_vc_g

0x7ee4,	// (0x00052b50) list_double_graphic_pane_vc_t1_ParamLimits

0x7ee4,	// (0x00052b50) list_double_graphic_pane_vc_t1

0x7f0e,	// (0x00052b7a) list_double_graphic_pane_vc_t2_ParamLimits

0x7f0e,	// (0x00052b7a) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0005a6e0) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0005a6e0) list_double_graphic_pane_vc_t

0x4896,	// (0x0004f502) aid_size_cell_fastswap

0x489e,	// (0x0004f50a) aid_size_cell_touch_ParamLimits

0x489e,	// (0x0004f50a) aid_size_cell_touch

0x4b03,	// (0x0004f76f) popup_fast_swap_wide_window_ParamLimits

0x4b03,	// (0x0004f76f) popup_fast_swap_wide_window

0x4c17,	// (0x0004f883) touch_pane_ParamLimits

0x4c17,	// (0x0004f883) touch_pane

0x87fb,	// (0x00053467) button_value_adjust_pane_cp2

0x5170,	// (0x0004fddc) button_value_adjust_pane_cp4

0x5194,	// (0x0004fe00) form_field_data_pane_cp2

0x51b5,	// (0x0004fe21) form_field_data_wide_pane_cp2

0x8c70,	// (0x000538dc) bg_scroll_pane_ParamLimits

0x5578,	// (0x000501e4) scroll_handle_pane_ParamLimits

0x558c,	// (0x000501f8) scroll_sc2_down_pane_ParamLimits

0x558c,	// (0x000501f8) scroll_sc2_down_pane

0x8ca1,	// (0x0005390d) scroll_sc2_up_pane_ParamLimits

0x8ca1,	// (0x0005390d) scroll_sc2_up_pane

0xbe31,	// (0x00056a9d) grid_wheel_folder_pane_g1_ParamLimits

0xbe31,	// (0x00056a9d) grid_wheel_folder_pane_g1

0x57bf,	// (0x0005042b) clock_nsta_pane_cp2_ParamLimits

0x57bf,	// (0x0005042b) clock_nsta_pane_cp2

0x89e7,	// (0x00053653) listscroll_midp_pane_ParamLimits

0x94a1,	// (0x0005410d) midp_canvas_pane

0x9789,	// (0x000543f5) nsta_clock_indic_pane

0x97bd,	// (0x00054429) listscroll_form_pane_vc

0x97c5,	// (0x00054431) listscroll_set_pane_vc_ParamLimits

0x97c5,	// (0x00054431) listscroll_set_pane_vc

0x98ca,	// (0x00054536) clock_nsta_pane

0x993f,	// (0x000545ab) indicator_nsta_pane

0x9c1f,	// (0x0005488b) bg_popup_sub_pane_cp2_ParamLimits

0x9c33,	// (0x0005489f) find_pane_cp2_ParamLimits

0x9c33,	// (0x0005489f) find_pane_cp2

0x9c49,	// (0x000548b5) grid_toobar_pane_ParamLimits

0x9d29,	// (0x00054995) list_form_gen_pane_vc_ParamLimits

0x9d29,	// (0x00054995) list_form_gen_pane_vc

0x9d3f,	// (0x000549ab) scroll_pane_cp8_vc_ParamLimits

0x9d3f,	// (0x000549ab) scroll_pane_cp8_vc

0x9dbb,	// (0x00054a27) data_form_wide_pane_vc_ParamLimits

0x9dbb,	// (0x00054a27) data_form_wide_pane_vc

0x9dc7,	// (0x00054a33) form_field_data_wide_pane_vc_g1

0x9dcf,	// (0x00054a3b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dcf,	// (0x00054a3b) form_field_data_wide_pane_vc_t1

0x880f,	// (0x0005347b) input_focus_pane_cp6_vc_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_cp6_vc

0xa0fb,	// (0x00054d67) list_midp_pane_ParamLimits

0xa107,	// (0x00054d73) scroll_pane_cp16_ParamLimits

0xa107,	// (0x00054d73) scroll_pane_cp16

0xa155,	// (0x00054dc1) button_value_adjust_pane_ParamLimits

0xa155,	// (0x00054dc1) button_value_adjust_pane

0xb0d3,	// (0x00055d3f) button_value_adjust_pane_cp6_ParamLimits

0xb0d3,	// (0x00055d3f) button_value_adjust_pane_cp6

0xb1fd,	// (0x00055e69) settings_code_pane_cp_ParamLimits

0xb1fd,	// (0x00055e69) settings_code_pane_cp

0x77ad,	// (0x00052419) cell_touch_pane_g1

0x77ad,	// (0x00052419) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005a374) cell_touch_pane_g

0xb773,	// (0x000563df) cell_touch_pane_cp_ParamLimits

0xb773,	// (0x000563df) cell_touch_pane_cp

0xb783,	// (0x000563ef) cell_touch_pane_ParamLimits

0xb783,	// (0x000563ef) cell_touch_pane

0x77ad,	// (0x00052419) scroll_sc2_down_pane_g1

0x77ad,	// (0x00052419) scroll_sc2_up_pane_g1

0x77b7,	// (0x00052423) bg_set_opt_pane_cp4_vc

0xb795,	// (0x00056401) list_set_graphic_pane_vc_g1_ParamLimits

0xb795,	// (0x00056401) list_set_graphic_pane_vc_g1

0xb7a1,	// (0x0005640d) list_set_graphic_pane_vc_g2_ParamLimits

0xb7a1,	// (0x0005640d) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0005a669) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0005a669) list_set_graphic_pane_vc_g

0xb7ad,	// (0x00056419) text_primary_small_cp13_vc_ParamLimits

0xb7ad,	// (0x00056419) text_primary_small_cp13_vc

0xb7c5,	// (0x00056431) list_set_graphic_pane_vc_ParamLimits

0xb7c5,	// (0x00056431) list_set_graphic_pane_vc

0x77b7,	// (0x00052423) input_focus_pane_cp2_vc

0x77ad,	// (0x00052419) setting_code_pane_vc_g1

0x78e2,	// (0x0005254e) setting_code_pane_vc_t1

0xb7d8,	// (0x00056444) set_text_pane_vc_t1_ParamLimits

0xb7d8,	// (0x00056444) set_text_pane_vc_t1

0x77b7,	// (0x00052423) input_focus_pane_cp1_vc

0xb7f4,	// (0x00056460) list_set_text_pane_vc

0x77ad,	// (0x00052419) setting_text_pane_vc_g1

0x77b7,	// (0x00052423) bg_set_opt_pane_cp2_vc

0x78d9,	// (0x00052545) setting_slider_graphic_pane_vc_g1

0xb7fe,	// (0x0005646a) setting_slider_graphic_pane_vc_t1

0xb80e,	// (0x0005647a) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0005a66e) setting_slider_graphic_pane_vc_t

0xb81e,	// (0x0005648a) slider_set_pane_cp_vc

0xb826,	// (0x00056492) slider_set_pane_vc_g1

0xb82f,	// (0x0005649b) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0005a673) slider_set_pane_vc_g

0x885e,	// (0x000534ca) set_opt_bg_pane_g1_copy1

0x8866,	// (0x000534d2) set_opt_bg_pane_g2_copy1

0xb85b,	// (0x000564c7) set_opt_bg_pane_g3_copy1

0x8876,	// (0x000534e2) set_opt_bg_pane_g4_copy1

0x887e,	// (0x000534ea) set_opt_bg_pane_g5_copy1

0x8886,	// (0x000534f2) set_opt_bg_pane_g6_copy1

0xb865,	// (0x000564d1) set_opt_bg_pane_g7_copy1

0xb86d,	// (0x000564d9) set_opt_bg_pane_g8_copy1

0xb877,	// (0x000564e3) set_opt_bg_pane_g9_copy1

0x77b7,	// (0x00052423) bg_set_opt_pane_cp_vc

0xb881,	// (0x000564ed) setting_slider_pane_vc_t1

0xb890,	// (0x000564fc) setting_slider_pane_vc_t2

0xb8a0,	// (0x0005650c) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0005a682) setting_slider_pane_vc_t

0xb8b0,	// (0x0005651c) slider_set_pane_vc

0x6243,	// (0x00050eaf) volume_set_pane_vc_g1

0x624c,	// (0x00050eb8) volume_set_pane_vc_g2

0x6255,	// (0x00050ec1) volume_set_pane_vc_g3

0x625e,	// (0x00050eca) volume_set_pane_vc_g4

0x6267,	// (0x00050ed3) volume_set_pane_vc_g5

0x6270,	// (0x00050edc) volume_set_pane_vc_g6

0x6279,	// (0x00050ee5) volume_set_pane_vc_g7

0x6282,	// (0x00050eee) volume_set_pane_vc_g8

0x628b,	// (0x00050ef7) volume_set_pane_vc_g9

0x6294,	// (0x00050f00) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0005a527) volume_set_pane_vc_g

0xb8b8,	// (0x00056524) volume_set_pane_vc

0xb8c0,	// (0x0005652c) button_value_adjust_pane_cp1_vc

0xb8ca,	// (0x00056536) list_highlight_pane_cp2_vc

0xb8d3,	// (0x0005653f) list_set_pane_vc_ParamLimits

0xb8d3,	// (0x0005653f) list_set_pane_vc

0xb931,	// (0x0005659d) main_pane_set_vc_t1_ParamLimits

0xb931,	// (0x0005659d) main_pane_set_vc_t1

0xb946,	// (0x000565b2) main_pane_set_vc_t2_ParamLimits

0xb946,	// (0x000565b2) main_pane_set_vc_t2

0xb958,	// (0x000565c4) main_pane_set_vc_t3_ParamLimits

0xb958,	// (0x000565c4) main_pane_set_vc_t3

0xb96c,	// (0x000565d8) main_pane_set_vc_t4_ParamLimits

0xb96c,	// (0x000565d8) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0005a689) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0005a689) main_pane_set_vc_t

0xb980,	// (0x000565ec) setting_code_pane_vc_ParamLimits

0xb980,	// (0x000565ec) setting_code_pane_vc

0xb991,	// (0x000565fd) setting_slider_graphic_pane_vc

0xb991,	// (0x000565fd) setting_slider_pane_vc

0xb991,	// (0x000565fd) setting_text_pane_vc

0xb991,	// (0x000565fd) setting_volume_pane_vc

0xb99b,	// (0x00056607) scroll_pane_cp121_vc

0x87e9,	// (0x00053455) set_content_pane_vc

0xb9a3,	// (0x0005660f) button_value_adjust_pane_g1

0xb9ac,	// (0x00056618) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0005a6e5) button_value_adjust_pane_g

0xb9b5,	// (0x00056621) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b5,	// (0x00056621) form_field_slider_wide_pane_vc_t1

0xb9c9,	// (0x00056635) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c9,	// (0x00056635) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0005a6ea) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0005a6ea) form_field_slider_wide_pane_vc_t

0x7b12,	// (0x0005277e) input_focus_pane_cp10_vc_ParamLimits

0x7b12,	// (0x0005277e) input_focus_pane_cp10_vc

0xb9f7,	// (0x00056663) slider_cont_pane_cp1_vc_ParamLimits

0xb9f7,	// (0x00056663) slider_cont_pane_cp1_vc

0xba09,	// (0x00056675) slider_form_pane_g1_cp2

0xb82f,	// (0x0005649b) slider_form_pane_g2_cp2

0xba36,	// (0x000566a2) form_field_slider_pane_vc_t3

0xba44,	// (0x000566b0) form_field_slider_pane_vc_t4

0xba52,	// (0x000566be) slider_form_pane_vc_ParamLimits

0xba52,	// (0x000566be) slider_form_pane_vc

0xba5f,	// (0x000566cb) form_field_slider_pane_vc_t1_ParamLimits

0xba5f,	// (0x000566cb) form_field_slider_pane_vc_t1

0xb9c9,	// (0x00056635) form_field_slider_pane_vc_t2_ParamLimits

0xb9c9,	// (0x00056635) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0005a6fc) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0005a6fc) form_field_slider_pane_vc_t

0x7b12,	// (0x0005277e) input_focus_pane_cp9_vc_ParamLimits

0x7b12,	// (0x0005277e) input_focus_pane_cp9_vc

0xba7b,	// (0x000566e7) slider_cont_pane_vc_ParamLimits

0xba7b,	// (0x000566e7) slider_cont_pane_vc

0xba8f,	// (0x000566fb) list_form_graphic_pane_cp_vc_ParamLimits

0xba8f,	// (0x000566fb) list_form_graphic_pane_cp_vc

0x9dc7,	// (0x00054a33) form_field_popup_wide_pane_vc_g1

0xbaa4,	// (0x00056710) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa4,	// (0x00056710) form_field_popup_wide_pane_vc_t1

0x880f,	// (0x0005347b) input_focus_pane_cp8_vc_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_cp8_vc

0xbae9,	// (0x00056755) list_form_wide_pane_vc_ParamLimits

0xbae9,	// (0x00056755) list_form_wide_pane_vc

0xbaf5,	// (0x00056761) list_form_graphic_pane_vc_g1

0xbafd,	// (0x00056769) list_form_graphic_pane_vc_t1_ParamLimits

0xbafd,	// (0x00056769) list_form_graphic_pane_vc_t1

0x7897,	// (0x00052503) list_highlight_pane_cp5_vc_ParamLimits

0x7897,	// (0x00052503) list_highlight_pane_cp5_vc

0xbb19,	// (0x00056785) list_form_graphic_pane_vc_ParamLimits

0xbb19,	// (0x00056785) list_form_graphic_pane_vc

0x9dc7,	// (0x00054a33) form_field_popup_pane_vc_g1

0xbb2f,	// (0x0005679b) form_field_popup_pane_vc_t1_ParamLimits

0xbb2f,	// (0x0005679b) form_field_popup_pane_vc_t1

0x880f,	// (0x0005347b) input_focus_pane_cp7_vc_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_cp7_vc

0xbb46,	// (0x000567b2) list_form_pane_vc_ParamLimits

0xbb46,	// (0x000567b2) list_form_pane_vc

0xbb52,	// (0x000567be) data_form_pane_vc_t1_ParamLimits

0xbb52,	// (0x000567be) data_form_pane_vc_t1

0x885e,	// (0x000534ca) input_focus_pane_vc_g1

0x8866,	// (0x000534d2) input_focus_pane_vc_g2

0x886e,	// (0x000534da) input_focus_pane_vc_g3

0x8876,	// (0x000534e2) input_focus_pane_vc_g4

0x887e,	// (0x000534ea) input_focus_pane_vc_g5

0x8886,	// (0x000534f2) input_focus_pane_vc_g6

0x888e,	// (0x000534fa) input_focus_pane_vc_g7

0x8896,	// (0x00053502) input_focus_pane_vc_g8

0x889e,	// (0x0005350a) input_focus_pane_vc_g9

0x77ad,	// (0x00052419) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005a2fd) input_focus_pane_vc_g

0x9dbb,	// (0x00054a27) data_form_pane_vc_ParamLimits

0x9dbb,	// (0x00054a27) data_form_pane_vc

0x9dc7,	// (0x00054a33) form_field_data_pane_vc_g1

0xbb6d,	// (0x000567d9) form_field_data_pane_vc_t1_ParamLimits

0xbb6d,	// (0x000567d9) form_field_data_pane_vc_t1

0x880f,	// (0x0005347b) input_focus_pane_vc_ParamLimits

0x880f,	// (0x0005347b) input_focus_pane_vc

0xbb87,	// (0x000567f3) button_value_adjust_pane_cp3_vc

0xbb8f,	// (0x000567fb) button_value_adjust_pane_cp5_vc

0xbb97,	// (0x00056803) form_field_data_pane_vc_ParamLimits

0xbb97,	// (0x00056803) form_field_data_pane_vc

0xbbae,	// (0x0005681a) form_field_data_pane_vc_cp2

0xbbb6,	// (0x00056822) form_field_data_wide_pane_vc_ParamLimits

0xbbb6,	// (0x00056822) form_field_data_wide_pane_vc

0xbbcc,	// (0x00056838) form_field_data_wide_pane_vc_cp2

0xbbd4,	// (0x00056840) form_field_popup_pane_vc_ParamLimits

0xbbd4,	// (0x00056840) form_field_popup_pane_vc

0xbbeb,	// (0x00056857) form_field_popup_wide_pane_vc_ParamLimits

0xbbeb,	// (0x00056857) form_field_popup_wide_pane_vc

0xbc01,	// (0x0005686d) form_field_slider_pane_vc_ParamLimits

0xbc01,	// (0x0005686d) form_field_slider_pane_vc

0xbc14,	// (0x00056880) form_field_slider_wide_pane_vc_ParamLimits

0xbc14,	// (0x00056880) form_field_slider_wide_pane_vc

0xbc27,	// (0x00056893) grid_touch_1_pane_ParamLimits

0xbc27,	// (0x00056893) grid_touch_1_pane

0xbc33,	// (0x0005689f) grid_touch_2_pane_ParamLimits

0xbc33,	// (0x0005689f) grid_touch_2_pane

0x9754,	// (0x000543c0) touch_pane_g1_ParamLimits

0x9754,	// (0x000543c0) touch_pane_g1

0xbc4b,	// (0x000568b7) cell_app_pane_cp_wide_ParamLimits

0xbc4b,	// (0x000568b7) cell_app_pane_cp_wide

0xbc5c,	// (0x000568c8) grid_popup_fast_wide_pane_ParamLimits

0xbc5c,	// (0x000568c8) grid_popup_fast_wide_pane

0xbc70,	// (0x000568dc) scroll_pane_cp19_ParamLimits

0xbc70,	// (0x000568dc) scroll_pane_cp19

0x77b7,	// (0x00052423) bg_popup_window_pane_cp20

0xbc84,	// (0x000568f0) listscroll_popup_fast_wide_pane

0x7897,	// (0x00052503) grid_indicator_nsta_pane

0xbc8c,	// (0x000568f8) clock_nsta_pane_g1

0xbc95,	// (0x00056901) clock_nsta_pane_t1

0xbcb1,	// (0x0005691d) cell_indicator_nsta_pane_ParamLimits

0xbcb1,	// (0x0005691d) cell_indicator_nsta_pane

0xbce2,	// (0x0005694e) cell_indicator_nsta_pane_g1

0xbcf0,	// (0x0005695c) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0005a70d) cell_indicator_nsta_pane_g

0xbcfd,	// (0x00056969) clock_nsta_pane_cp

0xbd05,	// (0x00056971) indicator_nsta_pane_cp

0xbd0d,	// (0x00056979) nsta_clock_indic_pane_g1

0x7960,	// (0x000525cc) grid_indicator_pane

0x8d96,	// (0x00053a02) scroll_pane_cp29

0x570e,	// (0x0005037a) indicator_nsta_pane_cp2_ParamLimits

0x570e,	// (0x0005037a) indicator_nsta_pane_cp2

0x7897,	// (0x00052503) main_apps_wheel_pane

0x9fdc,	// (0x00054c48) form_midp_field_text_pane_ParamLimits

0xa127,	// (0x00054d93) scroll_bar_cp050_ParamLimits

0xbd6e,	// (0x000569da) cell_indicator_pane_ParamLimits

0xbd6e,	// (0x000569da) cell_indicator_pane

0xbd85,	// (0x000569f1) cell_indicator_pane_g1

0xbd8f,	// (0x000569fb) grid_wheel_folder_pane_ParamLimits

0xbd8f,	// (0x000569fb) grid_wheel_folder_pane

0xbda5,	// (0x00056a11) list_wheel_apps_pane_ParamLimits

0xbda5,	// (0x00056a11) list_wheel_apps_pane

0xbdb6,	// (0x00056a22) main_apps_wheel_pane_g1_ParamLimits

0xbdb6,	// (0x00056a22) main_apps_wheel_pane_g1

0xbdca,	// (0x00056a36) main_apps_wheel_pane_g2_ParamLimits

0xbdca,	// (0x00056a36) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0005a729) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0005a729) main_apps_wheel_pane_g

0xbde2,	// (0x00056a4e) main_apps_wheel_pane_t1_ParamLimits

0xbde2,	// (0x00056a4e) main_apps_wheel_pane_t1

0xbe05,	// (0x00056a71) list_wheel_apps_pane_g1

0xbe0d,	// (0x00056a79) list_wheel_apps_pane_g2

0xbe15,	// (0x00056a81) list_wheel_apps_pane_g3

0xbe1d,	// (0x00056a89) list_wheel_apps_pane_g4

0xbe27,	// (0x00056a93) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0005a72e) list_wheel_apps_pane_g

0x9319,	// (0x00053f85) navi_icon_text_pane

0x97f9,	// (0x00054465) aid_fill_nsta

0xbe4a,	// (0x00056ab6) navi_icon_text_pane_g1

0xbe56,	// (0x00056ac2) navi_icon_text_pane_t1

0x91ac,	// (0x00053e18) list_set_graphic_pane_t1_ParamLimits

0x91ac,	// (0x00053e18) list_set_graphic_pane_t1

0xa882,	// (0x000554ee) popup_midp_note_alarm_window_t6_ParamLimits

0xa882,	// (0x000554ee) popup_midp_note_alarm_window_t6

0xa894,	// (0x00055500) popup_midp_note_alarm_window_t7_ParamLimits

0xa894,	// (0x00055500) popup_midp_note_alarm_window_t7

0xa8a6,	// (0x00055512) popup_midp_note_alarm_window_t8_ParamLimits

0xa8a6,	// (0x00055512) popup_midp_note_alarm_window_t8

0xa8b8,	// (0x00055524) popup_midp_note_alarm_window_t9_ParamLimits

0xa8b8,	// (0x00055524) popup_midp_note_alarm_window_t9

0xa8ca,	// (0x00055536) popup_midp_note_alarm_window_t10_ParamLimits

0xa8ca,	// (0x00055536) popup_midp_note_alarm_window_t10

0xa8dc,	// (0x00055548) popup_midp_note_alarm_window_t11_ParamLimits

0xa8dc,	// (0x00055548) popup_midp_note_alarm_window_t11

0xa8ee,	// (0x0005555a) scroll_pane_cp17_ParamLimits

0xa8ee,	// (0x0005555a) scroll_pane_cp17

0x6243,	// (0x00050eaf) volume_small_pane_cp_g1

0x6775,	// (0x000513e1) volume_small_pane_cp_g2

0x677e,	// (0x000513ea) volume_small_pane_cp_g3

0x6787,	// (0x000513f3) volume_small_pane_cp_g4

0x6790,	// (0x000513fc) volume_small_pane_cp_g5

0x6799,	// (0x00051405) volume_small_pane_cp_g6

0x67a2,	// (0x0005140e) volume_small_pane_cp_g7

0x67ab,	// (0x00051417) volume_small_pane_cp_g8

0x67b4,	// (0x00051420) volume_small_pane_cp_g9

0x67bd,	// (0x00051429) volume_small_pane_cp_g10

0x956a,	// (0x000541d6) midp_ticker_pane_g1_ParamLimits

0x9576,	// (0x000541e2) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005a3c9) midp_ticker_pane_g_ParamLimits

0x9582,	// (0x000541ee) midp_ticker_pane_t1_ParamLimits

0x980f,	// (0x0005447b) aid_fill_nsta_2

0xa113,	// (0x00054d7f) list_form2_midp_pane

0xb248,	// (0x00055eb4) midp_editing_number_pane_ParamLimits

0xb257,	// (0x00055ec3) midp_ticker_pane_ParamLimits

0xbe68,	// (0x00056ad4) form2_midp_field_pane

0xbe8c,	// (0x00056af8) scroll_pane_cp51

0xbeac,	// (0x00056b18) form2_midp_button_pane_ParamLimits

0xbeac,	// (0x00056b18) form2_midp_button_pane

0xbebe,	// (0x00056b2a) form2_midp_content_pane_ParamLimits

0xbebe,	// (0x00056b2a) form2_midp_content_pane

0xbed8,	// (0x00056b44) form2_midp_field_choice_group_pane

0xbee0,	// (0x00056b4c) form2_midp_field_pane_g1

0xbee8,	// (0x00056b54) form2_midp_field_pane_g2

0xbef0,	// (0x00056b5c) form2_midp_field_pane_g3

0xbef8,	// (0x00056b64) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0005a753) form2_midp_field_pane_g

0xbf00,	// (0x00056b6c) form2_midp_gauge_slider_pane

0xbf08,	// (0x00056b74) form2_midp_gauge_wait_pane

0xbf10,	// (0x00056b7c) form2_midp_image_pane_ParamLimits

0xbf10,	// (0x00056b7c) form2_midp_image_pane

0xbf2b,	// (0x00056b97) form2_midp_label_pane_ParamLimits

0xbf2b,	// (0x00056b97) form2_midp_label_pane

0xbf44,	// (0x00056bb0) form2_midp_label_pane_cp_ParamLimits

0xbf44,	// (0x00056bb0) form2_midp_label_pane_cp

0xbf65,	// (0x00056bd1) form2_midp_string_pane_ParamLimits

0xbf65,	// (0x00056bd1) form2_midp_string_pane

0x7f38,	// (0x00052ba4) form2_midp_text_pane_ParamLimits

0x7f38,	// (0x00052ba4) form2_midp_text_pane

0xbf77,	// (0x00056be3) form2_midp_time_pane

0xbf87,	// (0x00056bf3) input_focus_pane_cp51_ParamLimits

0xbf87,	// (0x00056bf3) input_focus_pane_cp51

0xbf9f,	// (0x00056c0b) form2_midp_label_pane_t1_ParamLimits

0xbf9f,	// (0x00056c0b) form2_midp_label_pane_t1

0x7f57,	// (0x00052bc3) form2_mdip_text_pane_t1_ParamLimits

0x7f57,	// (0x00052bc3) form2_mdip_text_pane_t1

0x7f75,	// (0x00052be1) form2_midp_time_pane_t1

0xbfe8,	// (0x00056c54) form2_midp_gauge_slider_pane_t1

0xbffa,	// (0x00056c66) form2_midp_gauge_slider_pane_t2

0xc00c,	// (0x00056c78) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0005a75c) form2_midp_gauge_slider_pane_t

0xc01e,	// (0x00056c8a) form2_midp_slider_pane

0xc02a,	// (0x00056c96) form2_midp_gauge_wait_pane_t1

0xc038,	// (0x00056ca4) form2_midp_wait_pane_ParamLimits

0xc038,	// (0x00056ca4) form2_midp_wait_pane

0x9e0e,	// (0x00054a7a) list_single_2graphic_pane_cp4_ParamLimits

0x9e0e,	// (0x00054a7a) list_single_2graphic_pane_cp4

0xc063,	// (0x00056ccf) list_single_midp_graphic_pane_cp_ParamLimits

0xc063,	// (0x00056ccf) list_single_midp_graphic_pane_cp

0x77b7,	// (0x00052423) list_highlight_pane_cp20

0xc092,	// (0x00056cfe) list_single_2graphic_pane_g1_cp4

0xc09a,	// (0x00056d06) list_single_2graphic_pane_g2_cp4

0xc0a2,	// (0x00056d0e) list_single_2graphic_pane_t1_cp4

0x7897,	// (0x00052503) list_highlight_pane_cp21

0xc0b1,	// (0x00056d1d) list_single_midp_graphic_pane_g4_cp

0xc0c0,	// (0x00056d2c) list_single_midp_graphic_pane_t1_cp

0xc0d5,	// (0x00056d41) form2_mdip_string_pane_t1_ParamLimits

0xc0d5,	// (0x00056d41) form2_mdip_string_pane_t1

0x77b7,	// (0x00052423) bg_wml_button_pane_cp2

0x77ad,	// (0x00052419) form2_midp_image_pane_g1

0x7c65,	// (0x000528d1) list_double_large_graphic_pane_g5_ParamLimits

0x7c65,	// (0x000528d1) list_double_large_graphic_pane_g5

0x89e7,	// (0x00053653) midp_form_pane_ParamLimits

0x7897,	// (0x00052503) main_apps_wheel_pane_ParamLimits

0x5df3,	// (0x00050a5f) popup_preview_window_ParamLimits

0x5df3,	// (0x00050a5f) popup_preview_window

0x5fae,	// (0x00050c1a) popup_touch_info_window_ParamLimits

0x5fae,	// (0x00050c1a) popup_touch_info_window

0x5fcc,	// (0x00050c38) popup_touch_menu_window_ParamLimits

0x5fcc,	// (0x00050c38) popup_touch_menu_window

0x77a3,	// (0x0005240f) bg_popup_sub_pane_cp6

0xc1ce,	// (0x00056e3a) list_touch_menu_pane

0xc1d6,	// (0x00056e42) list_single_touch_menu_pane_ParamLimits

0xc1d6,	// (0x00056e42) list_single_touch_menu_pane

0xc1ec,	// (0x00056e58) list_single_touch_menu_pane_t1

0x7897,	// (0x00052503) bg_popup_sub_pane_cp7_ParamLimits

0x7897,	// (0x00052503) bg_popup_sub_pane_cp7

0xc1fa,	// (0x00056e66) heading_sub_pane

0xc202,	// (0x00056e6e) list_touch_info_pane_ParamLimits

0xc202,	// (0x00056e6e) list_touch_info_pane

0xc211,	// (0x00056e7d) list_single_touch_info_pane_ParamLimits

0xc211,	// (0x00056e7d) list_single_touch_info_pane

0xc223,	// (0x00056e8f) list_single_touch_info_pane_t1

0xc231,	// (0x00056e9d) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0005a76a) list_single_touch_info_pane_t

0x9499,	// (0x00054105) bg_popup_heading_pane_cp

0xc23f,	// (0x00056eab) heading_sub_pane_t1

0x9d55,	// (0x000549c1) bg_popup_preview_window_pane_cp_ParamLimits

0x9d55,	// (0x000549c1) bg_popup_preview_window_pane_cp

0xc1fa,	// (0x00056e66) heading_preview_pane

0xc202,	// (0x00056e6e) list_preview_pane_ParamLimits

0xc202,	// (0x00056e6e) list_preview_pane

0xc24d,	// (0x00056eb9) popup_preview_window_g1

0xc211,	// (0x00056e7d) list_single_preview_pane_ParamLimits

0xc211,	// (0x00056e7d) list_single_preview_pane

0xc255,	// (0x00056ec1) list_single_preview_pane_g1

0xc25d,	// (0x00056ec9) list_single_preview_pane_t1

0xc223,	// (0x00056e8f) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0005a76f) list_single_preview_pane_t

0xc26b,	// (0x00056ed7) bg_popup_heading_pane_cp2_ParamLimits

0xc26b,	// (0x00056ed7) bg_popup_heading_pane_cp2

0xc281,	// (0x00056eed) heading_preview_pane_g1

0xc289,	// (0x00056ef5) heading_preview_pane_t1_ParamLimits

0xc289,	// (0x00056ef5) heading_preview_pane_t1

0x7983,	// (0x000525ef) soft_indicator_pane_t1_ParamLimits

0x8776,	// (0x000533e2) scroll_pane_ParamLimits

0x8c8f,	// (0x000538fb) scroll_sc2_left_pane

0x8c98,	// (0x00053904) scroll_sc2_right_pane

0x8cb7,	// (0x00053923) scroll_bg_pane_g1_ParamLimits

0x8ccc,	// (0x00053938) scroll_bg_pane_g2_ParamLimits

0x8ce4,	// (0x00053950) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005a354) scroll_bg_pane_g_ParamLimits

0x8cb7,	// (0x00053923) scroll_handle_pane_g1_ParamLimits

0x8d06,	// (0x00053972) scroll_handle_pane_g2_ParamLimits

0x8ce4,	// (0x00053950) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005a35b) scroll_handle_pane_g_ParamLimits

0x5a74,	// (0x000506e0) popup_choice_list_window_ParamLimits

0x5a74,	// (0x000506e0) popup_choice_list_window

0x9c2b,	// (0x00054897) choice_list_pane

0x9cad,	// (0x00054919) cell_toolbar_pane_t1

0x9cd5,	// (0x00054941) toolbar_button_pane_ParamLimits

0xada8,	// (0x00055a14) ai_gene_pane_1_t2_ParamLimits

0xada8,	// (0x00055a14) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0005a583) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0005a583) ai_gene_pane_1_t

0xc2a6,	// (0x00056f12) scroll_sc2_left_pane_g1

0xc2a6,	// (0x00056f12) scroll_sc2_right_pane_g1

0x97d7,	// (0x00054443) bg_popup_sub_pane_cp10

0xc2b0,	// (0x00056f1c) list_choice_list_pane

0xc2c9,	// (0x00056f35) list_single_choice_list_pane_ParamLimits

0xc2c9,	// (0x00056f35) list_single_choice_list_pane

0xc2dc,	// (0x00056f48) list_single_choice_list_pane_g1

0x8997,	// (0x00053603) list_single_choice_list_pane_t1_ParamLimits

0x8997,	// (0x00053603) list_single_choice_list_pane_t1

0xc2e4,	// (0x00056f50) choice_list_pane_g1

0xc2ec,	// (0x00056f58) choice_list_pane_t1

0x77a3,	// (0x0005240f) input_focus_pane_cp11

0x8b6e,	// (0x000537da) title_pane_stacon_g2_ParamLimits

0x8b6e,	// (0x000537da) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005a33a) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005a33a) title_pane_stacon_g

0x9499,	// (0x00054105) cursor_press_pane

0x5b20,	// (0x0005078c) popup_fep_hwr_window_ParamLimits

0x5b20,	// (0x0005078c) popup_fep_hwr_window

0x5b9a,	// (0x00050806) popup_fep_vkb_window_ParamLimits

0x5b9a,	// (0x00050806) popup_fep_vkb_window

0xc2fa,	// (0x00056f66) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0005a798) fep_vkb_side_pane_g_ParamLimits

0x67ff,	// (0x0005146b) fep_hwr_candidate_pane_ParamLimits

0x67ff,	// (0x0005146b) fep_hwr_candidate_pane

0x6829,	// (0x00051495) fep_hwr_side_pane_ParamLimits

0x6829,	// (0x00051495) fep_hwr_side_pane

0x6849,	// (0x000514b5) fep_hwr_top_pane_ParamLimits

0x6849,	// (0x000514b5) fep_hwr_top_pane

0x6861,	// (0x000514cd) fep_hwr_write_pane_ParamLimits

0x6861,	// (0x000514cd) fep_hwr_write_pane

0xfb2c,	// (0x0005a798) fep_vkb_side_pane_g

0xc302,	// (0x00056f6e) fep_hwr_top_pane_g1

0xc314,	// (0x00056f80) fep_hwr_top_pane_g2

0x689b,	// (0x00051507) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0005a774) fep_hwr_top_pane_g

0x68b0,	// (0x0005151c) fep_hwr_top_text_pane

0x8e86,	// (0x00053af2) fep_hwr_top_text_pane_g1

0xc34a,	// (0x00056fb6) fep_hwr_top_text_pane_t1

0x69a6,	// (0x00051612) fep_hwr_candidate_pane_g1

0xc59d,	// (0x00057209) fep_vkb_keypad_pane_g3_ParamLimits

0xc59d,	// (0x00057209) fep_vkb_keypad_pane_g3

0xc5c5,	// (0x00057231) fep_vkb_keypad_pane_g4_ParamLimits

0xc5c5,	// (0x00057231) fep_vkb_keypad_pane_g4

0xc634,	// (0x000572a0) fep_vkb_bottom_pane_g2_ParamLimits

0xc634,	// (0x000572a0) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0005a79f) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0005a79f) fep_vkb_bottom_pane_g

0xc2a6,	// (0x00056f12) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0005a7a9) cell_vkb_side_pane_g

0xc6bf,	// (0x0005732b) cell_vkb_side_pane_t1

0xc6cd,	// (0x00057339) cell_vkb_side_pane_t1_copy1

0xc2a6,	// (0x00056f12) bg_fep_vkb_candidate_pane_g2

0xc805,	// (0x00057471) cell_vkb_candidate_pane_ParamLimits

0xc358,	// (0x00056fc4) aid_size_cell_vkb_ParamLimits

0xc358,	// (0x00056fc4) aid_size_cell_vkb

0xc805,	// (0x00057471) cell_vkb_candidate_pane

0x69cd,	// (0x00051639) bg_popup_fep_shadow_pane_g1

0xc3e6,	// (0x00057052) fep_vkb_bottom_pane_ParamLimits

0xc3e6,	// (0x00057052) fep_vkb_bottom_pane

0xc41c,	// (0x00057088) fep_vkb_candidate_pane_ParamLimits

0xc41c,	// (0x00057088) fep_vkb_candidate_pane

0xc438,	// (0x000570a4) fep_vkb_keypad_pane_ParamLimits

0xc438,	// (0x000570a4) fep_vkb_keypad_pane

0xc47e,	// (0x000570ea) fep_vkb_side_pane_ParamLimits

0xc47e,	// (0x000570ea) fep_vkb_side_pane

0xc4ba,	// (0x00057126) fep_vkb_top_pane_ParamLimits

0xc4ba,	// (0x00057126) fep_vkb_top_pane

0xc4f6,	// (0x00057162) fep_vkb_top_pane_g1_ParamLimits

0xc4f6,	// (0x00057162) fep_vkb_top_pane_g1

0xc505,	// (0x00057171) fep_vkb_top_pane_g2_ParamLimits

0xc505,	// (0x00057171) fep_vkb_top_pane_g2

0xc514,	// (0x00057180) fep_vkb_top_pane_g3_ParamLimits

0xc514,	// (0x00057180) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0005a78f) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0005a78f) fep_vkb_top_pane_g

0xc532,	// (0x0005719e) fep_vkb_top_text_pane_ParamLimits

0xc532,	// (0x0005719e) fep_vkb_top_text_pane

0xc543,	// (0x000571af) fep_vkb_side_pane_g1_ParamLimits

0xc543,	// (0x000571af) fep_vkb_side_pane_g1

0xc58c,	// (0x000571f8) grid_vkb_side_pane_ParamLimits

0xc58c,	// (0x000571f8) grid_vkb_side_pane

0x69d5,	// (0x00051641) bg_popup_fep_shadow_pane_g2

0x69de,	// (0x0005164a) bg_popup_fep_shadow_pane_g3

0x69e6,	// (0x00051652) bg_popup_fep_shadow_pane_g4

0x69ef,	// (0x0005165b) bg_popup_fep_shadow_pane_g5

0x69f9,	// (0x00051665) bg_popup_fep_shadow_pane_g6

0x6a01,	// (0x0005166d) bg_popup_fep_shadow_pane_g7

0x8876,	// (0x000534e2) bg_popup_fep_shadow_pane_g8

0xc5e3,	// (0x0005724f) grid_vkb_keypad_number_pane_ParamLimits

0xc5e3,	// (0x0005724f) grid_vkb_keypad_number_pane

0xc5f3,	// (0x0005725f) grid_vkb_keypad_pane_ParamLimits

0xc5f3,	// (0x0005725f) grid_vkb_keypad_pane

0xc619,	// (0x00057285) fep_vkb_bottom_pane_g1_ParamLimits

0xc619,	// (0x00057285) fep_vkb_bottom_pane_g1

0xc642,	// (0x000572ae) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc642,	// (0x000572ae) grid_vkb_keypad_bottom_left_pane

0xc657,	// (0x000572c3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc657,	// (0x000572c3) grid_vkb_keypad_bottom_right_pane

0xc66c,	// (0x000572d8) fep_vkb_top_text_pane_g1

0xc687,	// (0x000572f3) fep_vkb_top_text_pane_t1

0xc69c,	// (0x00057308) cell_vkb_side_pane_ParamLimits

0xc69c,	// (0x00057308) cell_vkb_side_pane

0xc2a6,	// (0x00056f12) cell_vkb_side_pane_g1

0xc6db,	// (0x00057347) cell_vkb_keypad_pane_ParamLimits

0xc6db,	// (0x00057347) cell_vkb_keypad_pane

0xc750,	// (0x000573bc) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0005a7bc) bg_popup_fep_shadow_pane_g

0x6a13,	// (0x0005167f) cell_hwr_side_pane_g1

0x6a13,	// (0x0005167f) cell_hwr_side_pane_g2

0xc75a,	// (0x000573c6) cell_vkb_keypad_pane_t1

0xc768,	// (0x000573d4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc768,	// (0x000573d4) cell_vkb_keypad_bottom_left_pane

0xc785,	// (0x000573f1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc785,	// (0x000573f1) cell_vkb_keypad_bottom_right_pane

0xc2a6,	// (0x00056f12) cell_vkb_keypad_bottom_left_pane_g1

0xc2a6,	// (0x00056f12) cell_vkb_keypad_bottom_right_pane_g1

0xc7ca,	// (0x00057436) cell_vkb_keypad_number_pane_ParamLimits

0xc7ca,	// (0x00057436) cell_vkb_keypad_number_pane

0xc7e9,	// (0x00057455) cell_vkb_keypad_number_pane_g1

0xc7f3,	// (0x0005745f) cell_vkb_keypad_number_pane_g2

0xc7fc,	// (0x00057468) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0005a7ae) cell_vkb_keypad_number_pane_g

0xc75a,	// (0x000573c6) cell_vkb_keypad_number_pane_t1

0xc820,	// (0x0005748c) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x0005a7cf) cell_hwr_side_pane_g

0xc839,	// (0x000574a5) cell_hwr_side_pane_t1

0x6a1d,	// (0x00051689) cell_hwr_side_pane_t1_copy1

0x6a2b,	// (0x00051697) cell_hwr_candidate_pane_g1

0x6a5a,	// (0x000516c6) cell_hwr_candidate_pane_t1

0xc2a6,	// (0x00056f12) cell_vkb_candidate_pane_g2

0xc87d,	// (0x000574e9) cell_vkb_candidate_pane_t1

0x67c6,	// (0x00051432) bg_popup_fep_shadow_pane_ParamLimits

0x67c6,	// (0x00051432) bg_popup_fep_shadow_pane

0x687b,	// (0x000514e7) bg_fep_hwr_top_pane_g4

0xc326,	// (0x00056f92) bg_hwr_side_pane_g1_ParamLimits

0xc326,	// (0x00056f92) bg_hwr_side_pane_g1

0x68ec,	// (0x00051558) cell_hwr_side_pane_ParamLimits

0x68ec,	// (0x00051558) cell_hwr_side_pane

0x6927,	// (0x00051593) fep_hwr_write_pane_g1_ParamLimits

0x6927,	// (0x00051593) fep_hwr_write_pane_g1

0x6934,	// (0x000515a0) fep_hwr_write_pane_g2_ParamLimits

0x6934,	// (0x000515a0) fep_hwr_write_pane_g2

0x6941,	// (0x000515ad) fep_hwr_write_pane_g3_ParamLimits

0x6941,	// (0x000515ad) fep_hwr_write_pane_g3

0x694f,	// (0x000515bb) fep_hwr_write_pane_g4_ParamLimits

0x694f,	// (0x000515bb) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0005a77b) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0005a77b) fep_hwr_write_pane_g

0x687b,	// (0x000514e7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x687b,	// (0x000514e7) bg_fep_hwr_candidate_pane_g2

0x6964,	// (0x000515d0) cell_hwr_candidate_pane_ParamLimits

0x6964,	// (0x000515d0) cell_hwr_candidate_pane

0x69a6,	// (0x00051612) fep_hwr_candidate_pane_g1_ParamLimits

0xc386,	// (0x00056ff2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc386,	// (0x00056ff2) bg_popup_fep_shadow_pane_cp2

0xc524,	// (0x00057190) fep_vkb_top_pane_g4_ParamLimits

0xc524,	// (0x00057190) fep_vkb_top_pane_g4

0xc56a,	// (0x000571d6) fep_vkb_side_pane_g2_ParamLimits

0xc56a,	// (0x000571d6) fep_vkb_side_pane_g2

0x509d,	// (0x0004fd09) list_setting_pane_t4_ParamLimits

0x509d,	// (0x0004fd09) list_setting_pane_t4

0x5137,	// (0x0004fda3) list_setting_number_pane_t5_ParamLimits

0x5137,	// (0x0004fda3) list_setting_number_pane_t5

0x8ecd,	// (0x00053b39) list_double_heading_pane_cp2_ParamLimits

0x8ecd,	// (0x00053b39) list_double_heading_pane_cp2

0x87aa,	// (0x00053416) list_double_heading_pane_g1_cp2_ParamLimits

0x87aa,	// (0x00053416) list_double_heading_pane_g1_cp2

0x881d,	// (0x00053489) list_double_heading_pane_g2_cp2_ParamLimits

0x881d,	// (0x00053489) list_double_heading_pane_g2_cp2

0xc88b,	// (0x000574f7) list_double_heading_pane_t1_cp2_ParamLimits

0xc88b,	// (0x000574f7) list_double_heading_pane_t1_cp2

0xc8a1,	// (0x0005750d) list_double_heading_pane_t2_cp2_ParamLimits

0xc8a1,	// (0x0005750d) list_double_heading_pane_t2_cp2

0x778b,	// (0x000523f7) aid_value_unit2

0x4b5d,	// (0x0004f7c9) popup_preview_fixed_window

0x7b20,	// (0x0005278c) bg_popup_preview_window_pane_cp02

0xc8b3,	// (0x0005751f) list_preview_fixed_pane

0xc8f9,	// (0x00057565) list_empty_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_empty_pane_fp

0xc8f9,	// (0x00057565) list_single_cale_day_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_single_cale_day_pane_fp

0xc8f9,	// (0x00057565) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_single_graphic_heading_pane_fp

0xc8f9,	// (0x00057565) list_single_graphic_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_single_graphic_pane_fp

0xc8f9,	// (0x00057565) list_single_heading_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_single_heading_pane_fp

0xc8f9,	// (0x00057565) list_single_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_single_pane_fp

0xc90e,	// (0x0005757a) list_single_pane_fp_g1_ParamLimits

0xc90e,	// (0x0005757a) list_single_pane_fp_g1

0x87aa,	// (0x00053416) list_single_pane_fp_g2_ParamLimits

0x87aa,	// (0x00053416) list_single_pane_fp_g2

0x881d,	// (0x00053489) list_single_pane_fp_g3_ParamLimits

0x881d,	// (0x00053489) list_single_pane_fp_g3

0xc91a,	// (0x00057586) list_single_pane_fp_g4_ParamLimits

0xc91a,	// (0x00057586) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0005a7e2) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0005a7e2) list_single_pane_fp_g

0x7f88,	// (0x00052bf4) list_single_pane_fp_t1_ParamLimits

0x7f88,	// (0x00052bf4) list_single_pane_fp_t1

0x7f9f,	// (0x00052c0b) list_single_graphic_pane_fp_g1_ParamLimits

0x7f9f,	// (0x00052c0b) list_single_graphic_pane_fp_g1

0xc90e,	// (0x0005757a) list_single_graphic_pane_fp_g2_ParamLimits

0xc90e,	// (0x0005757a) list_single_graphic_pane_fp_g2

0x87aa,	// (0x00053416) list_single_graphic_pane_fp_g3_ParamLimits

0x87aa,	// (0x00053416) list_single_graphic_pane_fp_g3

0x881d,	// (0x00053489) list_single_graphic_pane_fp_g4_ParamLimits

0x881d,	// (0x00053489) list_single_graphic_pane_fp_g4

0xc91a,	// (0x00057586) list_single_graphic_pane_fp_g5_ParamLimits

0xc91a,	// (0x00057586) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a7eb) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a7eb) list_single_graphic_pane_fp_g

0x7fab,	// (0x00052c17) list_single_graphic_pane_fp_t1_ParamLimits

0x7fab,	// (0x00052c17) list_single_graphic_pane_fp_t1

0x7f9f,	// (0x00052c0b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7f9f,	// (0x00052c0b) list_single_graphic_heading_pane_fp_g1

0xc90e,	// (0x0005757a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x0005757a) list_single_graphic_heading_pane_fp_g2

0x87aa,	// (0x00053416) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87aa,	// (0x00053416) list_single_graphic_heading_pane_fp_g3

0x881d,	// (0x00053489) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x881d,	// (0x00053489) list_single_graphic_heading_pane_fp_g4

0xc91a,	// (0x00057586) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x00057586) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a7eb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a7eb) list_single_graphic_heading_pane_fp_g

0x7fc1,	// (0x00052c2d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7fc1,	// (0x00052c2d) list_single_graphic_heading_pane_fp_t1

0x7fd7,	// (0x00052c43) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7fd7,	// (0x00052c43) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0005a7f6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0005a7f6) list_single_graphic_heading_pane_fp_t

0x7fe9,	// (0x00052c55) list_single_cale_day_pane_fp_g1_ParamLimits

0x7fe9,	// (0x00052c55) list_single_cale_day_pane_fp_g1

0xc926,	// (0x00057592) list_single_cale_day_pane_fp_g2_ParamLimits

0xc926,	// (0x00057592) list_single_cale_day_pane_fp_g2

0x8021,	// (0x00052c8d) list_single_cale_day_pane_fp_g3_ParamLimits

0x8021,	// (0x00052c8d) list_single_cale_day_pane_fp_g3

0x8049,	// (0x00052cb5) list_single_cale_day_pane_fp_g4_ParamLimits

0x8049,	// (0x00052cb5) list_single_cale_day_pane_fp_g4

0x806d,	// (0x00052cd9) list_single_cale_day_pane_fp_g5_ParamLimits

0x806d,	// (0x00052cd9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0005a7fb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0005a7fb) list_single_cale_day_pane_fp_g

0x8091,	// (0x00052cfd) list_single_cale_day_pane_fp_t1_ParamLimits

0x8091,	// (0x00052cfd) list_single_cale_day_pane_fp_t1

0x80b7,	// (0x00052d23) list_single_cale_day_pane_fp_t2_ParamLimits

0x80b7,	// (0x00052d23) list_single_cale_day_pane_fp_t2

0x80d0,	// (0x00052d3c) list_single_cale_day_pane_fp_t3_ParamLimits

0x80d0,	// (0x00052d3c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0005a806) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0005a806) list_single_cale_day_pane_fp_t

0xc90e,	// (0x0005757a) list_empty_pane_fp_g1_ParamLimits

0xc90e,	// (0x0005757a) list_empty_pane_fp_g1

0x80e9,	// (0x00052d55) list_empty_pane_fp_t1

0x80f7,	// (0x00052d63) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0005a80d) list_empty_pane_fp_t

0xc90e,	// (0x0005757a) list_single_heading_pane_fp_g1_ParamLimits

0xc90e,	// (0x0005757a) list_single_heading_pane_fp_g1

0x87aa,	// (0x00053416) list_single_heading_pane_fp_g2_ParamLimits

0x87aa,	// (0x00053416) list_single_heading_pane_fp_g2

0x881d,	// (0x00053489) list_single_heading_pane_fp_g3_ParamLimits

0x881d,	// (0x00053489) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0005a812) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0005a812) list_single_heading_pane_fp_g

0x8105,	// (0x00052d71) list_single_heading_pane_fp_t1_ParamLimits

0x8105,	// (0x00052d71) list_single_heading_pane_fp_t1

0x8117,	// (0x00052d83) list_single_heading_pane_fp_t2_ParamLimits

0x8117,	// (0x00052d83) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0005a819) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0005a819) list_single_heading_pane_fp_t

0x8a05,	// (0x00053671) aid_size_cell_fast

0x7a90,	// (0x000526fc) soft_indicator_pane_cp1_t1

0x8a42,	// (0x000536ae) cell_app_pane_cp2_ParamLimits

0x8a42,	// (0x000536ae) cell_app_pane_cp2

0x67e8,	// (0x00051454) fep_hwr_candidate_drop_down_list_pane

0x69c0,	// (0x0005162c) fep_hwr_candidate_pane_g3_ParamLimits

0x69c0,	// (0x0005162c) fep_hwr_candidate_pane_g3

0x2e88,	// (0x0004daf4) fep_hwr_candidate_pane_g4_ParamLimits

0x2e88,	// (0x0004daf4) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0005a788) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0005a788) fep_hwr_candidate_pane_g

0xc40b,	// (0x00057077) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc40b,	// (0x00057077) fep_vkb_candidate_drop_down_list_pane

0xc828,	// (0x00057494) fep_vkb_candidate_pane_g3

0xc830,	// (0x0005749c) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005a7b5) fep_vkb_candidate_pane_g

0x6a2b,	// (0x00051697) cell_hwr_candidate_pane_g1_ParamLimits

0x6a39,	// (0x000516a5) cell_hwr_candidate_pane_g3_ParamLimits

0x6a39,	// (0x000516a5) cell_hwr_candidate_pane_g3

0xd371,	// (0x00057fdd) cell_hwr_candidate_pane_g4_ParamLimits

0xd371,	// (0x00057fdd) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0005a7d4) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0005a7d4) cell_hwr_candidate_pane_g

0xc847,	// (0x000574b3) cell_vkb_candidate_pane_g3_ParamLimits

0xc847,	// (0x000574b3) cell_vkb_candidate_pane_g3

0xc862,	// (0x000574ce) cell_vkb_candidate_pane_g4_ParamLimits

0xc862,	// (0x000574ce) cell_vkb_candidate_pane_g4

0xc932,	// (0x0005759e) cell_app_pane_cp2_g1_ParamLimits

0xc932,	// (0x0005759e) cell_app_pane_cp2_g1

0xc950,	// (0x000575bc) cell_app_pane_cp2_g2_ParamLimits

0xc950,	// (0x000575bc) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0005a81e) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0005a81e) cell_app_pane_cp2_g

0xc95c,	// (0x000575c8) cell_app_pane_cp2_t1_ParamLimits

0xc95c,	// (0x000575c8) cell_app_pane_cp2_t1

0x880f,	// (0x0005347b) grid_highlight_pane_cp1_ParamLimits

0x880f,	// (0x0005347b) grid_highlight_pane_cp1

0x6a78,	// (0x000516e4) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a78,	// (0x000516e4) cell_hwr_candidate_pane_cp1

0x6a2b,	// (0x00051697) fep_hwr_candidate_drop_down_list_pane_g1

0x6a97,	// (0x00051703) fep_hwr_candidate_drop_down_list_pane_g2

0x6aa4,	// (0x00051710) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0005a823) fep_hwr_candidate_drop_down_list_pane_g

0x6ab1,	// (0x0005171d) fep_hwr_candidate_drop_down_list_scroll_pane

0x6aba,	// (0x00051726) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6aba,	// (0x00051726) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ac7,	// (0x00051733) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ac7,	// (0x00051733) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6ad4,	// (0x00051740) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ad4,	// (0x00051740) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ae1,	// (0x0005174d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ae1,	// (0x0005174d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6afc,	// (0x00051768) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6afc,	// (0x00051768) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b17,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b17,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b32,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b32,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b4d,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b4d,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0005a82a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0005a82a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96e,	// (0x000575da) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96e,	// (0x000575da) cell_vkb_candidate_pane_cp1

0xc524,	// (0x00057190) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc524,	// (0x00057190) fep_vkb_candidate_drop_down_list_pane_g1

0xc98e,	// (0x000575fa) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98e,	// (0x000575fa) fep_vkb_candidate_drop_down_list_pane_g2

0xc99b,	// (0x00057607) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc99b,	// (0x00057607) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0005a83b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x0005a83b) fep_vkb_candidate_drop_down_list_pane_g

0xc9a8,	// (0x00057614) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a8,	// (0x00057614) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b5,	// (0x00057621) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b5,	// (0x00057621) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9c2,	// (0x0005762e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9c2,	// (0x0005762e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9ce,	// (0x0005763a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9ce,	// (0x0005763a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9da,	// (0x00057646) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9da,	// (0x00057646) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9fb,	// (0x00057667) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9fb,	// (0x00057667) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1c,	// (0x00057688) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1c,	// (0x00057688) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3d,	// (0x000576a9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3d,	// (0x000576a9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5e,	// (0x000576ca) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5e,	// (0x000576ca) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0005a842) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0005a842) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x77c1,	// (0x0005242d) title_pane_g1_ParamLimits

0x77ce,	// (0x0005243a) title_pane_g2_ParamLimits

0xf54e,	// (0x0005a1ba) title_pane_g_ParamLimits

0x8e76,	// (0x00053ae2) aid_call2_pane

0x8e7e,	// (0x00053aea) aid_call_pane

0x8e86,	// (0x00053af2) popup_clock_analogue_window_g1

0x8e86,	// (0x00053af2) popup_clock_analogue_window_g2

0x55a1,	// (0x0005020d) popup_clock_analogue_window_g3

0x55aa,	// (0x00050216) popup_clock_analogue_window_g4

0x77ad,	// (0x00052419) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005a369) popup_clock_analogue_window_g

0x55b2,	// (0x0005021e) popup_clock_analogue_window_t1

0x55c0,	// (0x0005022c) clock_digital_number_pane_ParamLimits

0x55c0,	// (0x0005022c) clock_digital_number_pane

0x55cc,	// (0x00050238) clock_digital_number_pane_cp02_ParamLimits

0x55cc,	// (0x00050238) clock_digital_number_pane_cp02

0x55d8,	// (0x00050244) clock_digital_number_pane_cp03_ParamLimits

0x55d8,	// (0x00050244) clock_digital_number_pane_cp03

0x55e4,	// (0x00050250) clock_digital_number_pane_cp04_ParamLimits

0x55e4,	// (0x00050250) clock_digital_number_pane_cp04

0x55f0,	// (0x0005025c) clock_digital_separator_pane_ParamLimits

0x55f0,	// (0x0005025c) clock_digital_separator_pane

0x55fc,	// (0x00050268) popup_clock_digital_window_t1_ParamLimits

0x55fc,	// (0x00050268) popup_clock_digital_window_t1

0x77ad,	// (0x00052419) clock_digital_number_pane_g1

0x77ad,	// (0x00052419) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005a374) clock_digital_number_pane_g

0x77ad,	// (0x00052419) clock_digital_separator_pane_g1

0x77ad,	// (0x00052419) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005a374) clock_digital_separator_pane_g

0x97f9,	// (0x00054465) aid_fill_nsta_ParamLimits

0x993f,	// (0x000545ab) indicator_nsta_pane_ParamLimits

0x9ab8,	// (0x00054724) popup_clock_analogue_window

0x9ab8,	// (0x00054724) popup_clock_digital_window

0x7897,	// (0x00052503) grid_indicator_nsta_pane_ParamLimits

0xbca3,	// (0x0005690f) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0005a708) clock_nsta_pane_t

0x5565,	// (0x000501d1) aid_size_max_handle

0x556f,	// (0x000501db) aid_size_min_handle

0x9499,	// (0x00054105) editor_scroll_pane

0xca79,	// (0x000576e5) ex_editor_pane

0x8973,	// (0x000535df) scroll_pane_cp13

0x87a2,	// (0x0005340e) scroll_pane_cp14

0x8eb5,	// (0x00053b21) scroll_pane_cp36

0x8ee1,	// (0x00053b4d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ee1,	// (0x00053b4d) list_single_graphic_hl_pane_cp2

0x650a,	// (0x00051176) list_single_graphic_hl_pane_ParamLimits

0x650a,	// (0x00051176) list_single_graphic_hl_pane

0x812d,	// (0x00052d99) aid_size_min_hl_cp1

0xca81,	// (0x000576ed) list_highlight_pane_cp34_ParamLimits

0xca81,	// (0x000576ed) list_highlight_pane_cp34

0xca92,	// (0x000576fe) list_single_graphic_hl_pane_g1_ParamLimits

0xca92,	// (0x000576fe) list_single_graphic_hl_pane_g1

0x8136,	// (0x00052da2) list_single_graphic_hl_pane_g2_ParamLimits

0x8136,	// (0x00052da2) list_single_graphic_hl_pane_g2

0x8136,	// (0x00052da2) list_single_graphic_hl_pane_g3_ParamLimits

0x8136,	// (0x00052da2) list_single_graphic_hl_pane_g3

0x940a,	// (0x00054076) list_single_graphic_hl_pane_g4_ParamLimits

0x940a,	// (0x00054076) list_single_graphic_hl_pane_g4

0x8142,	// (0x00052dae) list_single_graphic_hl_pane_g5_ParamLimits

0x8142,	// (0x00052dae) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x0005a853) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x0005a853) list_single_graphic_hl_pane_g

0x8156,	// (0x00052dc2) list_single_graphic_hl_pane_t1_ParamLimits

0x8156,	// (0x00052dc2) list_single_graphic_hl_pane_t1

0xca9f,	// (0x0005770b) aid_size_min_hl_cp2

0xcaa8,	// (0x00057714) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa8,	// (0x00057714) list_highlight_pane_cp34_cp2

0xca92,	// (0x000576fe) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca92,	// (0x000576fe) list_single_graphic_hl_pane_g1_cp2

0xcab5,	// (0x00057721) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab5,	// (0x00057721) list_single_graphic_hl_pane_g2_cp2

0xcac1,	// (0x0005772d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac1,	// (0x0005772d) list_single_graphic_hl_pane_g3_cp2

0xc7be,	// (0x0005742a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc7be,	// (0x0005742a) list_single_graphic_hl_pane_g4_cp2

0xcacf,	// (0x0005773b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacf,	// (0x0005773b) list_single_graphic_hl_pane_g5_cp2

0x591e,	// (0x0005058a) control_pane_g4_ParamLimits

0x591e,	// (0x0005058a) control_pane_g4

0x97d7,	// (0x00054443) bg_popup_sub_pane_cp10_ParamLimits

0xc2b0,	// (0x00056f1c) list_choice_list_pane_ParamLimits

0xc2bf,	// (0x00056f2b) scroll_pane_cp23

0x7b20,	// (0x0005278c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b3,	// (0x0005751f) list_preview_fixed_pane_ParamLimits

0xc8c9,	// (0x00057535) list_preview_fixed_pane_cp_ParamLimits

0xc8c9,	// (0x00057535) list_preview_fixed_pane_cp

0xc8d5,	// (0x00057541) popup_preview_fixed_window_g1_ParamLimits

0xc8d5,	// (0x00057541) popup_preview_fixed_window_g1

0xc8e1,	// (0x0005754d) popup_preview_fixed_window_g2_ParamLimits

0xc8e1,	// (0x0005754d) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0005a7db) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0005a7db) popup_preview_fixed_window_g

0x54d9,	// (0x00050145) aid_navi_side_left_pane_ParamLimits

0x54ee,	// (0x0005015a) aid_navi_side_right_pane_ParamLimits

0x5506,	// (0x00050172) navi_icon_pane_stacon_ParamLimits

0x551a,	// (0x00050186) navi_navi_pane_stacon_ParamLimits

0x5506,	// (0x00050172) navi_text_pane_stacon_ParamLimits

0x4a1e,	// (0x0004f68a) main_text_info_pane

0xcaf9,	// (0x00057765) listscroll_text_info_pane

0xcb01,	// (0x0005776d) list_text_info_pane_ParamLimits

0xcb01,	// (0x0005776d) list_text_info_pane

0xcb10,	// (0x0005777c) scroll_pane_cp24_ParamLimits

0xcb10,	// (0x0005777c) scroll_pane_cp24

0xcb2e,	// (0x0005779a) list_text_info_pane_t1_ParamLimits

0xcb2e,	// (0x0005779a) list_text_info_pane_t1

0x5a92,	// (0x000506fe) popup_fast_swap2_window_ParamLimits

0x5a92,	// (0x000506fe) popup_fast_swap2_window

0xcb5f,	// (0x000577cb) aid_size_cell_fast2

0x77a3,	// (0x0005240f) bg_popup_window_pane_cp17

0xa13f,	// (0x00054dab) heading_pane_cp2

0x846c,	// (0x000530d8) listscroll_fast2_pane

0xcb69,	// (0x000577d5) grid_fast2_pane

0xcb73,	// (0x000577df) listscroll_fast2_pane_g1

0xcb7b,	// (0x000577e7) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x0005a85e) listscroll_fast2_pane_g

0x8973,	// (0x000535df) scroll_pane_cp26

0xcb85,	// (0x000577f1) cell_fast2_pane_ParamLimits

0xcb85,	// (0x000577f1) cell_fast2_pane

0xcb9a,	// (0x00057806) cell_fast2_pane_g1

0xcba3,	// (0x0005780f) cell_fast2_pane_g2

0xcbac,	// (0x00057818) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x0005a863) cell_fast2_pane_g

0x855f,	// (0x000531cb) grid_highlight_pane_cp9

0x5a50,	// (0x000506bc) main_eswt_pane_ParamLimits

0x5a50,	// (0x000506bc) main_eswt_pane

0xcb25,	// (0x00057791) list_single_text_info_pane

0xcbb4,	// (0x00057820) eswt_ctrl_button_pane

0xcbb4,	// (0x00057820) eswt_ctrl_canvas_pane

0xcbbc,	// (0x00057828) eswt_ctrl_combo_pane

0xcbb4,	// (0x00057820) eswt_ctrl_default_pane

0xcbb4,	// (0x00057820) eswt_ctrl_label_pane

0xcbc4,	// (0x00057830) eswt_ctrl_wait_pane

0xcbcc,	// (0x00057838) eswt_shell_pane

0x77a3,	// (0x0005240f) listscroll_eswt_app_pane

0xcbec,	// (0x00057858) popup_eswt_tasktip_window_ParamLimits

0xcbec,	// (0x00057858) popup_eswt_tasktip_window

0x9d55,	// (0x000549c1) bg_popup_window_pane_cp18

0xcbfd,	// (0x00057869) eswt_control_pane_g1_ParamLimits

0xcbfd,	// (0x00057869) eswt_control_pane_g1

0xcc0a,	// (0x00057876) eswt_control_pane_g2_ParamLimits

0xcc0a,	// (0x00057876) eswt_control_pane_g2

0xcc17,	// (0x00057883) eswt_control_pane_g3_ParamLimits

0xcc17,	// (0x00057883) eswt_control_pane_g3

0xcc24,	// (0x00057890) eswt_control_pane_g4_ParamLimits

0xcc24,	// (0x00057890) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x0005a86a) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x0005a86a) eswt_control_pane_g

0x880f,	// (0x0005347b) bg_button_pane_ParamLimits

0x880f,	// (0x0005347b) bg_button_pane

0x8574,	// (0x000531e0) common_borders_pane_copy2_ParamLimits

0x8574,	// (0x000531e0) common_borders_pane_copy2

0xcc31,	// (0x0005789d) control_button_pane_g1_ParamLimits

0xcc31,	// (0x0005789d) control_button_pane_g1

0xcc3d,	// (0x000578a9) control_button_pane_g2_ParamLimits

0xcc3d,	// (0x000578a9) control_button_pane_g2

0xcc49,	// (0x000578b5) control_button_pane_g3_ParamLimits

0xcc49,	// (0x000578b5) control_button_pane_g3

0x0002,

0xfc07,	// (0x0005a873) control_button_pane_g_ParamLimits

0xfc07,	// (0x0005a873) control_button_pane_g

0xcc5d,	// (0x000578c9) control_button_pane_t1

0xcc6b,	// (0x000578d7) control_button_pane_t2

0x0001,

0xfc0e,	// (0x0005a87a) control_button_pane_t

0x9ce1,	// (0x0005494d) bg_button_pane_g1

0x9cf1,	// (0x0005495d) bg_button_pane_g2

0x9ce9,	// (0x00054955) bg_button_pane_g3

0x9d01,	// (0x0005496d) bg_button_pane_g4

0x9cf9,	// (0x00054965) bg_button_pane_g5

0x9d09,	// (0x00054975) bg_button_pane_g6

0x9d11,	// (0x0005497d) bg_button_pane_g7

0x9d21,	// (0x0005498d) bg_button_pane_g8

0x9d19,	// (0x00054985) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0005a4d7) bg_button_pane_g

0xc26b,	// (0x00056ed7) common_borders_pane_ParamLimits

0xc26b,	// (0x00056ed7) common_borders_pane

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy1_ParamLimits

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy1

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy1_ParamLimits

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy1

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy1_ParamLimits

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy1

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy1_ParamLimits

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy1

0xc2a6,	// (0x00056f12) bg_eswt_ctrl_canvas_pane_g1

0xc26b,	// (0x00056ed7) common_borders_pane_cp2_ParamLimits

0xc26b,	// (0x00056ed7) common_borders_pane_cp2

0xc26b,	// (0x00056ed7) common_borders_pane_cp3_ParamLimits

0xc26b,	// (0x00056ed7) common_borders_pane_cp3

0xcc79,	// (0x000578e5) separator_horizontal_pane

0xcc81,	// (0x000578ed) separator_vertical_pane

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy2_ParamLimits

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy2

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy2_ParamLimits

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy2

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy2_ParamLimits

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy2

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy2_ParamLimits

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy2

0x77a3,	// (0x0005240f) common_borders_pane_cp4

0xcc8a,	// (0x000578f6) separator_horizontal_pane_g1

0xcc93,	// (0x000578ff) separator_horizontal_pane_g2

0xcc9c,	// (0x00057908) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x0005a87f) separator_horizontal_pane_g

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy3_ParamLimits

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy3

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy3_ParamLimits

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy3

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy3_ParamLimits

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy3

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy3_ParamLimits

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy3

0x77a3,	// (0x0005240f) common_borders_pane_cp5

0xcca5,	// (0x00057911) separator_vertical_pane_g1

0xccae,	// (0x0005791a) separator_vertical_pane_g2

0xccb7,	// (0x00057923) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x0005a886) separator_vertical_pane_g

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy4_ParamLimits

0xcbfd,	// (0x00057869) eswt_control_pane_g1_copy4

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy4_ParamLimits

0xcc0a,	// (0x00057876) eswt_control_pane_g2_copy4

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy4_ParamLimits

0xcc17,	// (0x00057883) eswt_control_pane_g3_copy4

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy4_ParamLimits

0xcc24,	// (0x00057890) eswt_control_pane_g4_copy4

0xccc0,	// (0x0005792c) eswt_ctrl_combo_button_pane

0xccc8,	// (0x00057934) eswt_ctrl_input_pane

0xccd0,	// (0x0005793c) popup_choice_list_window_cp70

0xccd8,	// (0x00057944) eswt_ctrl_input_pane_t1

0x77a3,	// (0x0005240f) input_focus_pane_cp70

0xc26b,	// (0x00056ed7) bg_button_pane_cp70_ParamLimits

0xc26b,	// (0x00056ed7) bg_button_pane_cp70

0xcce6,	// (0x00057952) eswt_ctrl_combo_button_pane_g1

0xccee,	// (0x0005795a) wait_bar_pane_cp70

0x9d55,	// (0x000549c1) bg_popup_window_pane_cp70_ParamLimits

0x9d55,	// (0x000549c1) bg_popup_window_pane_cp70

0xccf6,	// (0x00057962) popup_eswt_tasktip_window_t1

0xcd0c,	// (0x00057978) wait_bar_pane_cp71_ParamLimits

0xcd0c,	// (0x00057978) wait_bar_pane_cp71

0xcd18,	// (0x00057984) grid_eswt_app_pane

0x8c8f,	// (0x000538fb) scroll_pane_cp70

0xcd21,	// (0x0005798d) cell_eswt_app_pane_ParamLimits

0xcd21,	// (0x0005798d) cell_eswt_app_pane

0xcd51,	// (0x000579bd) cell_eswt_app_pane_g1_ParamLimits

0xcd51,	// (0x000579bd) cell_eswt_app_pane_g1

0xcd80,	// (0x000579ec) cell_eswt_app_pane_g2_ParamLimits

0xcd80,	// (0x000579ec) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x0005a88d) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x0005a88d) cell_eswt_app_pane_g

0xcda9,	// (0x00057a15) cell_eswt_app_pane_t1_ParamLimits

0xcda9,	// (0x00057a15) cell_eswt_app_pane_t1

0xcddb,	// (0x00057a47) grid_highlight_pane_cp70_ParamLimits

0xcddb,	// (0x00057a47) grid_highlight_pane_cp70

0x936e,	// (0x00053fda) set_content_pane_g1

0x9738,	// (0x000543a4) status_small_volume_pane

0x6b68,	// (0x000517d4) status_small_volume_pane_g1

0x6b70,	// (0x000517dc) volume_small2_pane

0x6b79,	// (0x000517e5) volume_small2_pane_g1

0x6b82,	// (0x000517ee) volume_small2_pane_g2

0x6b8b,	// (0x000517f7) volume_small2_pane_g3

0x6b94,	// (0x00051800) volume_small2_pane_g4

0x6b9d,	// (0x00051809) volume_small2_pane_g5

0x6ba6,	// (0x00051812) volume_small2_pane_g6

0x6baf,	// (0x0005181b) volume_small2_pane_g7

0x6bb8,	// (0x00051824) volume_small2_pane_g8

0x6bc1,	// (0x0005182d) volume_small2_pane_g9

0x6bca,	// (0x00051836) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x0005a892) volume_small2_pane_g

0xc66c,	// (0x000572d8) fep_vkb_top_text_pane_g1_ParamLimits

0xc687,	// (0x000572f3) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ed,	// (0x00057559) popup_preview_fixed_window_g3_ParamLimits

0xc8ed,	// (0x00057559) popup_preview_fixed_window_g3

0x5f41,	// (0x00050bad) popup_toolbar_trans_pane

0xb0b0,	// (0x00055d1c) aid_height_set_list_ParamLimits

0xb0c1,	// (0x00055d2d) aid_size_parent_ParamLimits

0x97d7,	// (0x00054443) list_highlight_pane_cp2_ParamLimits

0x936e,	// (0x00053fda) set_content_pane_g1_ParamLimits

0x6525,	// (0x00051191) list_single_image_pane_ParamLimits

0x6525,	// (0x00051191) list_single_image_pane

0xcde7,	// (0x00057a53) aid_size_cell_image_ParamLimits

0xcde7,	// (0x00057a53) aid_size_cell_image

0xcdf4,	// (0x00057a60) grid_single_image_pane_ParamLimits

0xcdf4,	// (0x00057a60) grid_single_image_pane

0xa573,	// (0x000551df) list_single_image_pane_g1_ParamLimits

0xa573,	// (0x000551df) list_single_image_pane_g1

0xce00,	// (0x00057a6c) list_single_image_pane_g2_ParamLimits

0xce00,	// (0x00057a6c) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x0005a8a7) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x0005a8a7) list_single_image_pane_g

0xce14,	// (0x00057a80) list_single_image_pane_t1_ParamLimits

0xce14,	// (0x00057a80) list_single_image_pane_t1

0xce2a,	// (0x00057a96) cell_image_list_pane_ParamLimits

0xce2a,	// (0x00057a96) cell_image_list_pane

0xce3e,	// (0x00057aaa) cell_image_list_pane_g1

0xce47,	// (0x00057ab3) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x0005a8ac) cell_image_list_pane_g

0xce50,	// (0x00057abc) aid_size_cell_tb_trans_pane

0x880f,	// (0x0005347b) bg_tb_trans_pane

0xce62,	// (0x00057ace) grid_tb_trans_pane

0x9ce1,	// (0x0005494d) bg_tb_trans_pane_g1

0x9cf1,	// (0x0005495d) bg_tb_trans_pane_g2

0x9ce9,	// (0x00054955) bg_tb_trans_pane_g3

0x9d01,	// (0x0005496d) bg_tb_trans_pane_g4

0x9cf9,	// (0x00054965) bg_tb_trans_pane_g5

0x9d21,	// (0x0005498d) bg_tb_trans_pane_g6

0x9d19,	// (0x00054985) bg_tb_trans_pane_g7

0x9d09,	// (0x00054975) bg_tb_trans_pane_g8

0x9d11,	// (0x0005497d) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x0005a8b1) bg_tb_trans_pane_g

0xce76,	// (0x00057ae2) cell_toolbar_trans_pane_ParamLimits

0xce76,	// (0x00057ae2) cell_toolbar_trans_pane

0xc2a6,	// (0x00056f12) cell_toolbar_trans_pane_g1

0xbe70,	// (0x00056adc) list_form2_midp_pane_t1

0xbe7e,	// (0x00056aea) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0005a74e) list_form2_midp_pane_t

0xbe8c,	// (0x00056af8) scroll_pane_cp51_ParamLimits

0xc048,	// (0x00056cb4) form2_midp_wait_pane_g1

0xc051,	// (0x00056cbd) form2_midp_wait_pane_g2

0xc05a,	// (0x00056cc6) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0005a763) form2_midp_wait_pane_g

0x7897,	// (0x00052503) list_highlight_pane_cp21_ParamLimits

0xc0b1,	// (0x00056d1d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0c0,	// (0x00056d2c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7cf5,	// (0x00052961) list_single_2graphic_im_pane_ParamLimits

0x7cf5,	// (0x00052961) list_single_2graphic_im_pane

0xce9c,	// (0x00057b08) list_single_2graphic_im_pane_g1_ParamLimits

0xce9c,	// (0x00057b08) list_single_2graphic_im_pane_g1

0xcead,	// (0x00057b19) list_single_2graphic_im_pane_g2_ParamLimits

0xcead,	// (0x00057b19) list_single_2graphic_im_pane_g2

0xceb9,	// (0x00057b25) list_single_2graphic_im_pane_g3_ParamLimits

0xceb9,	// (0x00057b25) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x0005a8c4) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x0005a8c4) list_single_2graphic_im_pane_g

0xced9,	// (0x00057b45) list_single_2graphic_im_pane_t1_ParamLimits

0xced9,	// (0x00057b45) list_single_2graphic_im_pane_t1

0xc8f9,	// (0x00057565) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f9,	// (0x00057565) list_single_graphic_2heading_pane_fp

0x7f9f,	// (0x00052c0b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7f9f,	// (0x00052c0b) list_single_graphic_2heading_pane_fp_g1

0xc90e,	// (0x0005757a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90e,	// (0x0005757a) list_single_graphic_2heading_pane_fp_g2

0x87aa,	// (0x00053416) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87aa,	// (0x00053416) list_single_graphic_2heading_pane_fp_g3

0x881d,	// (0x00053489) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x881d,	// (0x00053489) list_single_graphic_2heading_pane_fp_g4

0xc91a,	// (0x00057586) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc91a,	// (0x00057586) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a7eb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a7eb) list_single_graphic_2heading_pane_fp_g

0x816c,	// (0x00052dd8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x816c,	// (0x00052dd8) list_single_graphic_2heading_pane_fp_t1

0x7fd7,	// (0x00052c43) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7fd7,	// (0x00052c43) list_single_graphic_2heading_pane_fp_t2

0x8182,	// (0x00052dee) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8182,	// (0x00052dee) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x0005a8cd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x0005a8cd) list_single_graphic_2heading_pane_fp_t

0xc332,	// (0x00056f9e) fep_hwr_write_pane_g5_ParamLimits

0xc332,	// (0x00056f9e) fep_hwr_write_pane_g5

0xc33e,	// (0x00056faa) fep_hwr_write_pane_g6_ParamLimits

0xc33e,	// (0x00056faa) fep_hwr_write_pane_g6

0xcbcc,	// (0x00057838) eswt_shell_pane_ParamLimits

0x9d55,	// (0x000549c1) bg_popup_window_pane_cp18_ParamLimits

0xb009,	// (0x00055c75) heading_pane_cp70

0xccf6,	// (0x00057962) popup_eswt_tasktip_window_t1_ParamLimits

0x984e,	// (0x000544ba) aid_touch_tab_arrow_left

0x985d,	// (0x000544c9) aid_touch_tab_arrow_right

0x77df,	// (0x0005244b) title_pane_g3_ParamLimits

0x77df,	// (0x0005244b) title_pane_g3

0x87ce,	// (0x0005343a) set_value_pane_g1

0x5f41,	// (0x00050bad) popup_toolbar_trans_pane_ParamLimits

0xce50,	// (0x00057abc) aid_size_cell_tb_trans_pane_ParamLimits

0x880f,	// (0x0005347b) bg_tb_trans_pane_ParamLimits

0xce62,	// (0x00057ace) grid_tb_trans_pane_ParamLimits

0x7b20,	// (0x0005278c) cont_note_pane_ParamLimits

0x7b20,	// (0x0005278c) cont_note_pane

0x8574,	// (0x000531e0) cont_snote2_single_text_pane_ParamLimits

0x8574,	// (0x000531e0) cont_snote2_single_text_pane

0x8574,	// (0x000531e0) cont_snote2_single_graphic_pane_ParamLimits

0x8574,	// (0x000531e0) cont_snote2_single_graphic_pane

0xa35a,	// (0x00054fc6) cont_note_wait_pane_ParamLimits

0xa35a,	// (0x00054fc6) cont_note_wait_pane

0xa35a,	// (0x00054fc6) cont_note_image_pane_ParamLimits

0xa35a,	// (0x00054fc6) cont_note_image_pane

0xcf0a,	// (0x00057b76) popup_note2_window_g1_ParamLimits

0xcf0a,	// (0x00057b76) popup_note2_window_g1

0xcf3b,	// (0x00057ba7) popup_note2_window_t1_ParamLimits

0xcf3b,	// (0x00057ba7) popup_note2_window_t1

0xcf80,	// (0x00057bec) popup_note2_window_t2_ParamLimits

0xcf80,	// (0x00057bec) popup_note2_window_t2

0xcfc5,	// (0x00057c31) popup_note2_window_t3_ParamLimits

0xcfc5,	// (0x00057c31) popup_note2_window_t3

0xd00a,	// (0x00057c76) popup_note2_window_t4_ParamLimits

0xd00a,	// (0x00057c76) popup_note2_window_t4

0x7ba4,	// (0x00052810) popup_note2_window_t5_ParamLimits

0x7ba4,	// (0x00052810) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x0005a8d9) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x0005a8d9) popup_note2_window_t

0xd039,	// (0x00057ca5) popup_note2_image_window_g1_ParamLimits

0xd039,	// (0x00057ca5) popup_note2_image_window_g1

0xd045,	// (0x00057cb1) popup_note2_image_window_g2_ParamLimits

0xd045,	// (0x00057cb1) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0005a8e4) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0005a8e4) popup_note2_image_window_g

0xd057,	// (0x00057cc3) popup_note2_image_window_t1_ParamLimits

0xd057,	// (0x00057cc3) popup_note2_image_window_t1

0xd06f,	// (0x00057cdb) popup_note2_image_window_t2_ParamLimits

0xd06f,	// (0x00057cdb) popup_note2_image_window_t2

0xd087,	// (0x00057cf3) popup_note2_image_window_t3_ParamLimits

0xd087,	// (0x00057cf3) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0005a8e9) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0005a8e9) popup_note2_image_window_t

0xa368,	// (0x00054fd4) popup_note2_wait_window_g1_ParamLimits

0xa368,	// (0x00054fd4) popup_note2_wait_window_g1

0xd0a3,	// (0x00057d0f) popup_note2_wait_window_g2_ParamLimits

0xd0a3,	// (0x00057d0f) popup_note2_wait_window_g2

0xa380,	// (0x00054fec) popup_note2_wait_window_g3_ParamLimits

0xa380,	// (0x00054fec) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x0005a8f0) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x0005a8f0) popup_note2_wait_window_g

0xd0af,	// (0x00057d1b) popup_note2_wait_window_t1_ParamLimits

0xd0af,	// (0x00057d1b) popup_note2_wait_window_t1

0xd0cd,	// (0x00057d39) popup_note2_wait_window_t2_ParamLimits

0xd0cd,	// (0x00057d39) popup_note2_wait_window_t2

0xd0eb,	// (0x00057d57) popup_note2_wait_window_t3_ParamLimits

0xd0eb,	// (0x00057d57) popup_note2_wait_window_t3

0xd0fd,	// (0x00057d69) popup_note2_wait_window_t4_ParamLimits

0xd0fd,	// (0x00057d69) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x0005a8f7) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x0005a8f7) popup_note2_wait_window_t

0xd10f,	// (0x00057d7b) wait_bar2_pane_ParamLimits

0xd10f,	// (0x00057d7b) wait_bar2_pane

0xd127,	// (0x00057d93) popup_snote2_single_text_window_g1_ParamLimits

0xd127,	// (0x00057d93) popup_snote2_single_text_window_g1

0xd14f,	// (0x00057dbb) popup_snote2_single_text_window_t1_ParamLimits

0xd14f,	// (0x00057dbb) popup_snote2_single_text_window_t1

0xd19b,	// (0x00057e07) popup_snote2_single_text_window_t2_ParamLimits

0xd19b,	// (0x00057e07) popup_snote2_single_text_window_t2

0xd1e7,	// (0x00057e53) popup_snote2_single_text_window_t3_ParamLimits

0xd1e7,	// (0x00057e53) popup_snote2_single_text_window_t3

0xd228,	// (0x00057e94) popup_snote2_single_text_window_t4_ParamLimits

0xd228,	// (0x00057e94) popup_snote2_single_text_window_t4

0xd25e,	// (0x00057eca) popup_snote2_single_text_window_t5_ParamLimits

0xd25e,	// (0x00057eca) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x0005a900) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x0005a900) popup_snote2_single_text_window_t

0xd289,	// (0x00057ef5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd289,	// (0x00057ef5) popup_snote2_single_graphic_window_g1

0xd2b1,	// (0x00057f1d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b1,	// (0x00057f1d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x0005a90b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x0005a90b) popup_snote2_single_graphic_window_g

0xd2d9,	// (0x00057f45) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d9,	// (0x00057f45) popup_snote2_single_graphic_window_t1

0xd325,	// (0x00057f91) popup_snote2_single_graphic_window_t2_ParamLimits

0xd325,	// (0x00057f91) popup_snote2_single_graphic_window_t2

0xd1e7,	// (0x00057e53) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e7,	// (0x00057e53) popup_snote2_single_graphic_window_t3

0xd228,	// (0x00057e94) popup_snote2_single_graphic_window_t4_ParamLimits

0xd228,	// (0x00057e94) popup_snote2_single_graphic_window_t4

0xd25e,	// (0x00057eca) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25e,	// (0x00057eca) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x0005a910) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x0005a910) popup_snote2_single_graphic_window_t

0xbd4d,	// (0x000569b9) clock_nsta_pane_cp2_t1

0xbd4d,	// (0x000569b9) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0005a724) clock_nsta_pane_cp2_t

0x5257,	// (0x0004fec3) form_field_data_wide_pane_g1_ParamLimits

0x87aa,	// (0x00053416) form_field_data_wide_pane_g2_ParamLimits

0x87aa,	// (0x00053416) form_field_data_wide_pane_g2

0x881d,	// (0x00053489) form_field_data_wide_pane_g3_ParamLimits

0x881d,	// (0x00053489) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005a2ec) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005a2ec) form_field_data_wide_pane_g

0xbc3f,	// (0x000568ab) grid_touch_3_pane_ParamLimits

0xbc3f,	// (0x000568ab) grid_touch_3_pane

0xd392,	// (0x00057ffe) cell_touch_3_pane_ParamLimits

0xd392,	// (0x00057ffe) cell_touch_3_pane

0xc2a6,	// (0x00056f12) cell_touch_3_pane_g1

0xc2a6,	// (0x00056f12) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0005a7a9) cell_touch_3_pane_g

0x7bd6,	// (0x00052842) cont_query_data_pane

0x7bde,	// (0x0005284a) cont_query_data_pane_cp1

0xd3c0,	// (0x0005802c) button_value_adjust_pane_cp7

0xd3c8,	// (0x00058034) query_popup_pane_cp3

0x8f76,	// (0x00053be2) bg_popup_sub_pane_cp22_ParamLimits

0x561b,	// (0x00050287) navi_navi_volume_pane_cp2

0x5636,	// (0x000502a2) popup_side_volume_key_window_g2

0x5645,	// (0x000502b1) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005a382) popup_side_volume_key_window_g

0x5662,	// (0x000502ce) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005a389) popup_side_volume_key_window_t

0x922d,	// (0x00053e99) popup_side_volume_key_window_ParamLimits

0x4e9f,	// (0x0004fb0b) list_double_graphic_pane_g4_ParamLimits

0x4e9f,	// (0x0004fb0b) list_double_graphic_pane_g4

0x7d32,	// (0x0005299e) list_single_2heading_msg_pane_ParamLimits

0x7d32,	// (0x0005299e) list_single_2heading_msg_pane

0x81a2,	// (0x00052e0e) list_single_2heading_msg_pane_g1_ParamLimits

0x81a2,	// (0x00052e0e) list_single_2heading_msg_pane_g1

0x93d2,	// (0x0005403e) list_single_2heading_msg_pane_g2_ParamLimits

0x93d2,	// (0x0005403e) list_single_2heading_msg_pane_g2

0x7d70,	// (0x000529dc) list_single_2heading_msg_pane_g3_ParamLimits

0x7d70,	// (0x000529dc) list_single_2heading_msg_pane_g3

0x81ae,	// (0x00052e1a) list_single_2heading_msg_pane_g4_ParamLimits

0x81ae,	// (0x00052e1a) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x0005a91b) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x0005a91b) list_single_2heading_msg_pane_g

0x81c6,	// (0x00052e32) list_single_2heading_msg_pane_t1_ParamLimits

0x81c6,	// (0x00052e32) list_single_2heading_msg_pane_t1

0x81ee,	// (0x00052e5a) list_single_2heading_msg_pane_t2_ParamLimits

0x81ee,	// (0x00052e5a) list_single_2heading_msg_pane_t2

0x8222,	// (0x00052e8e) list_single_2heading_msg_pane_t3_ParamLimits

0x8222,	// (0x00052e8e) list_single_2heading_msg_pane_t3

0x825b,	// (0x00052ec7) list_single_2heading_msg_pane_t4_ParamLimits

0x825b,	// (0x00052ec7) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x0005a924) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x0005a924) list_single_2heading_msg_pane_t

0x77eb,	// (0x00052457) title_pane_g4_ParamLimits

0x77eb,	// (0x00052457) title_pane_g4

0x542a,	// (0x00050096) title_pane_stacon_g3_ParamLimits

0x542a,	// (0x00050096) title_pane_stacon_g3

0xcecd,	// (0x00057b39) list_single_2graphic_im_pane_g4_ParamLimits

0xcecd,	// (0x00057b39) list_single_2graphic_im_pane_g4

0xadc5,	// (0x00055a31) popup_side_volume_key_window_cp

0xb58c,	// (0x000561f8) main_idle_act2_pane_t1

0x6055,	// (0x00050cc1) toolbar_button_pane_g10

0x876c,	// (0x000533d8) popup_toolbar_window_cp1

0xbd3e,	// (0x000569aa) clock_nsta_pane_cp_t1

0xbd3e,	// (0x000569aa) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0005a71f) clock_nsta_pane_cp_t

0x561b,	// (0x00050287) navi_navi_volume_pane_cp2_ParamLimits

0x562a,	// (0x00050296) popup_side_volume_key_window_g1_ParamLimits

0x5636,	// (0x000502a2) popup_side_volume_key_window_g2_ParamLimits

0x5645,	// (0x000502b1) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005a382) popup_side_volume_key_window_g_ParamLimits

0x67d4,	// (0x00051440) fep_hwr_aid_pane

0x687b,	// (0x000514e7) bg_fep_hwr_top_pane_g4_ParamLimits

0xc302,	// (0x00056f6e) fep_hwr_top_pane_g1_ParamLimits

0xc314,	// (0x00056f80) fep_hwr_top_pane_g2_ParamLimits

0x689b,	// (0x00051507) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0005a774) fep_hwr_top_pane_g_ParamLimits

0x68b0,	// (0x0005151c) fep_hwr_top_text_pane_ParamLimits

0xab88,	// (0x000557f4) aid_touch_tab_arrow_arrow_2

0xab91,	// (0x000557fd) aid_touch_tab_arrow_left_2

0x67e8,	// (0x00051454) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x681f,	// (0x0005148b) fep_hwr_prediction_pane

0xc474,	// (0x000570e0) fep_vkb_prediction_pane

0xc578,	// (0x000571e4) fep_vkb_side_pane_g3_ParamLimits

0xc578,	// (0x000571e4) fep_vkb_side_pane_g3

0x6a2b,	// (0x00051697) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6a97,	// (0x00051703) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6aa4,	// (0x00051710) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0005a823) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6bd3,	// (0x0005183f) fep_hwr_prediction_pane_g1

0x6bdd,	// (0x00051849) fep_hwr_prediction_pane_g2

0x6be5,	// (0x00051851) fep_hwr_prediction_pane_g3

0x6bed,	// (0x00051859) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x0005a92d) fep_hwr_prediction_pane_g

0xd3ed,	// (0x00058059) fep_vkb_prediction_pane_g1

0xd3f7,	// (0x00058063) fep_vkb_prediction_pane_g2

0xd3ff,	// (0x0005806b) fep_vkb_prediction_pane_g3

0xd407,	// (0x00058073) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0005a936) fep_vkb_prediction_pane_g

0x643f,	// (0x000510ab) slider_set_pane_g3

0x6453,	// (0x000510bf) slider_set_pane_g4

0x646b,	// (0x000510d7) slider_set_pane_g5

0x643f,	// (0x000510ab) slider_set_pane_g6

0x6481,	// (0x000510ed) slider_set_pane_g7

0xb226,	// (0x00055e92) slider_form_pane_g3

0xb22f,	// (0x00055e9b) slider_form_pane_g4

0xb237,	// (0x00055ea3) slider_form_pane_g5

0xb226,	// (0x00055e92) slider_form_pane_g6

0xb23f,	// (0x00055eab) slider_form_pane_g7

0xb837,	// (0x000564a3) slider_set_pane_vc_g3

0xb840,	// (0x000564ac) slider_set_pane_vc_g4

0xb849,	// (0x000564b5) slider_set_pane_vc_g5

0xb837,	// (0x000564a3) slider_set_pane_vc_g6

0xb852,	// (0x000564be) slider_set_pane_vc_g7

0xba12,	// (0x0005667e) slider_form_pane_vc_g1

0xba1b,	// (0x00056687) slider_form_pane_vc_g2

0xba24,	// (0x00056690) slider_form_pane_vc_g3

0xba12,	// (0x0005667e) slider_form_pane_vc_g4

0xba2d,	// (0x00056699) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0005a6f1) slider_form_pane_vc_g

0x4a1e,	// (0x0004f68a) main_idle_act3_pane

0xd40f,	// (0x0005807b) ai3_links_pane

0xd418,	// (0x00058084) popup_ai3_data_window_ParamLimits

0xd418,	// (0x00058084) popup_ai3_data_window

0x77a3,	// (0x0005240f) grid_ai3_links_pane

0xd432,	// (0x0005809e) cell_ai3_links_pane_ParamLimits

0xd432,	// (0x0005809e) cell_ai3_links_pane

0xd44a,	// (0x000580b6) bg_popup_sub_pane_cp11

0xd457,	// (0x000580c3) cell_ai3_links_pane_g1

0x77a3,	// (0x0005240f) bg_popup_sub_pane_cp12

0xd47c,	// (0x000580e8) heading_ai3_data_pane

0xd484,	// (0x000580f0) list_ai3_gene_pane

0xd490,	// (0x000580fc) popup_ai3_data_window_g1

0xd498,	// (0x00058104) heading_ai3_data_pane_g1

0xd4a0,	// (0x0005810c) heading_ai3_data_pane_t1

0xd4ae,	// (0x0005811a) list_double_ai3_gene_pane_ParamLimits

0xd4ae,	// (0x0005811a) list_double_ai3_gene_pane

0xd4bb,	// (0x00058127) list_single_ai3_gene_pane_ParamLimits

0xd4bb,	// (0x00058127) list_single_ai3_gene_pane

0xc26b,	// (0x00056ed7) list_highlight_pane_cp7_ParamLimits

0xc26b,	// (0x00056ed7) list_highlight_pane_cp7

0xd4c8,	// (0x00058134) list_single_a13_gene_pane_t1_ParamLimits

0xd4c8,	// (0x00058134) list_single_a13_gene_pane_t1

0xd4df,	// (0x0005814b) list_single_ai3_gene_pane_g1

0xd4e8,	// (0x00058154) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x0005a93f) list_single_ai3_gene_pane_g

0xd4f0,	// (0x0005815c) list_double_ai3_gene_pane_g1_ParamLimits

0xd4f0,	// (0x0005815c) list_double_ai3_gene_pane_g1

0xd4fc,	// (0x00058168) list_double_ai3_gene_pane_t1_ParamLimits

0xd4fc,	// (0x00058168) list_double_ai3_gene_pane_t1

0xd518,	// (0x00058184) list_double_ai3_gene_pane_t2_ParamLimits

0xd518,	// (0x00058184) list_double_ai3_gene_pane_t2

0xd52e,	// (0x0005819a) list_double_ai3_gene_pane_t3_ParamLimits

0xd52e,	// (0x0005819a) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x0005a944) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x0005a944) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8198,	// (0x00052e04) aid_size_min_col_2

0xd3d9,	// (0x00058045) aid_size_min_msg_ParamLimits

0xd3d9,	// (0x00058045) aid_size_min_msg

0xc678,	// (0x000572e4) fep_vkb_top_text_pane_g2_ParamLimits

0xc678,	// (0x000572e4) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0005a7a4) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0005a7a4) fep_vkb_top_text_pane_g

0x4a1e,	// (0x0004f68a) main_hc_apps_shell_pane

0xd54b,	// (0x000581b7) grid_hc_apps_pane_ParamLimits

0xd54b,	// (0x000581b7) grid_hc_apps_pane

0xd55a,	// (0x000581c6) list_hc_apps_pane

0xd562,	// (0x000581ce) scroll_pane_cp37_ParamLimits

0xd562,	// (0x000581ce) scroll_pane_cp37

0xd56e,	// (0x000581da) cell_hc_apps_pane_ParamLimits

0xd56e,	// (0x000581da) cell_hc_apps_pane

0xd61c,	// (0x00058288) cell_hc_apps_pane_g1_ParamLimits

0xd61c,	// (0x00058288) cell_hc_apps_pane_g1

0xd64d,	// (0x000582b9) cell_hc_apps_pane_g2_ParamLimits

0xd64d,	// (0x000582b9) cell_hc_apps_pane_g2

0xd669,	// (0x000582d5) cell_hc_apps_pane_g3_ParamLimits

0xd669,	// (0x000582d5) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x0005a94b) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x0005a94b) cell_hc_apps_pane_g

0xd68b,	// (0x000582f7) cell_hc_apps_pane_t1_ParamLimits

0xd68b,	// (0x000582f7) cell_hc_apps_pane_t1

0x7b20,	// (0x0005278c) grid_highlight_pane_cp10_ParamLimits

0x7b20,	// (0x0005278c) grid_highlight_pane_cp10

0xd6cb,	// (0x00058337) list_single_hc_apps_pane_ParamLimits

0xd6cb,	// (0x00058337) list_single_hc_apps_pane

0xd727,	// (0x00058393) list_single_hc_apps_pane_g1

0x8280,	// (0x00052eec) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0005a952) list_single_hc_apps_pane_g

0x8299,	// (0x00052f05) list_single_hc_apps_pane_g2_copy1

0x82b5,	// (0x00052f21) list_single_hc_apps_pane_t1

0x7897,	// (0x00052503) bg_set_opt_pane_cp_ParamLimits

0x4c7f,	// (0x0004f8eb) setting_slider_pane_t1_ParamLimits

0x4c98,	// (0x0004f904) setting_slider_pane_t2_ParamLimits

0x4cb2,	// (0x0004f91e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005a1ca) setting_slider_pane_t_ParamLimits

0x4cca,	// (0x0004f936) slider_set_pane_ParamLimits

0x5932,	// (0x0005059e) control_pane_g5_ParamLimits

0x5932,	// (0x0005059e) control_pane_g5

0xb075,	// (0x00055ce1) slider_set_pane_g1_ParamLimits

0x6433,	// (0x0005109f) slider_set_pane_g2_ParamLimits

0x643f,	// (0x000510ab) slider_set_pane_g3_ParamLimits

0x6453,	// (0x000510bf) slider_set_pane_g4_ParamLimits

0x646b,	// (0x000510d7) slider_set_pane_g5_ParamLimits

0x643f,	// (0x000510ab) slider_set_pane_g6_ParamLimits

0x6481,	// (0x000510ed) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0005a5d5) slider_set_pane_g_ParamLimits

0x9319,	// (0x00053f85) navi_icon_text_pane_ParamLimits

0x980f,	// (0x0005447b) aid_fill_nsta_2_ParamLimits

0x984e,	// (0x000544ba) aid_touch_tab_arrow_left_ParamLimits

0x985d,	// (0x000544c9) aid_touch_tab_arrow_right_ParamLimits

0x98ca,	// (0x00054536) clock_nsta_pane_ParamLimits

0xab6a,	// (0x000557d6) navi_icon_pane_g1_ParamLimits

0xab76,	// (0x000557e2) navi_text_pane_t1_ParamLimits

0xbe4a,	// (0x00056ab6) navi_icon_text_pane_g1_ParamLimits

0xbe56,	// (0x00056ac2) navi_icon_text_pane_t1_ParamLimits

0xd727,	// (0x00058393) list_single_hc_apps_pane_g1_ParamLimits

0x8280,	// (0x00052eec) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0005a952) list_single_hc_apps_pane_g_ParamLimits

0x8299,	// (0x00052f05) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x82b5,	// (0x00052f21) list_single_hc_apps_pane_t1_ParamLimits

0x4b89,	// (0x0004f7f5) popup_toolbar2_fixed_window_ParamLimits

0x4b89,	// (0x0004f7f5) popup_toolbar2_fixed_window

0x5f37,	// (0x00050ba3) popup_toolbar2_float_window

0x77a3,	// (0x0005240f) bg_popup_sub_pane_cp27

0xd740,	// (0x000583ac) grid_toolbar2_float_pane

0x77a3,	// (0x0005240f) bg_popup_sub_pane_cp26

0xd740,	// (0x000583ac) grid_toolbar2_fixed_pane

0xd748,	// (0x000583b4) cell_toolbar2_fixed_pane_ParamLimits

0xd748,	// (0x000583b4) cell_toolbar2_fixed_pane

0xd758,	// (0x000583c4) cell_toolbar2_fixed_pane_g1

0xd761,	// (0x000583cd) toolbar2_fixed_button_pane

0x9ce1,	// (0x0005494d) toolbar2_fixed_button_pane_g1

0x9cf1,	// (0x0005495d) toolbar2_fixed_button_pane_g2

0x9ce9,	// (0x00054955) toolbar2_fixed_button_pane_g3

0x9d01,	// (0x0005496d) toolbar2_fixed_button_pane_g4

0x9cf9,	// (0x00054965) toolbar2_fixed_button_pane_g5

0x9d09,	// (0x00054975) toolbar2_fixed_button_pane_g6

0x9d11,	// (0x0005497d) toolbar2_fixed_button_pane_g7

0x9d21,	// (0x0005498d) toolbar2_fixed_button_pane_g8

0x9d19,	// (0x00054985) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0005a4d7) toolbar2_fixed_button_pane_g

0xd769,	// (0x000583d5) cell_toolbar2_float_pane_ParamLimits

0xd769,	// (0x000583d5) cell_toolbar2_float_pane

0xd77a,	// (0x000583e6) cell_toolbar2_float_pane_g1

0xd761,	// (0x000583cd) toolbar2_fixed_button_pane_cp

0xc3d4,	// (0x00057040) fep_vkb_accented_list_pane_ParamLimits

0xc3d4,	// (0x00057040) fep_vkb_accented_list_pane

0x6a0b,	// (0x00051677) bg_popup_fep_shadow_pane_g9

0x9499,	// (0x00054105) bg_popup_fep_shadow_pane_cp3

0x895a,	// (0x000535c6) list_accented_list_pane

0xd783,	// (0x000583ef) list_single_accented_list_pane_ParamLimits

0xd783,	// (0x000583ef) list_single_accented_list_pane

0x9499,	// (0x00054105) list_highlight_pane_cp10

0xd794,	// (0x00058400) list_single_accented_list_pane_t1

0x5e87,	// (0x00050af3) popup_slider_window_ParamLimits

0x5e87,	// (0x00050af3) popup_slider_window

0xd3d0,	// (0x0005803c) aid_indentation_list_msg

0xd84e,	// (0x000584ba) bg_popup_window_pane_cp19

0xd8b8,	// (0x00058524) popup_slider_window_g1

0xd8d4,	// (0x00058540) popup_slider_window_g2

0xd8f0,	// (0x0005855c) popup_slider_window_g3

0x0005,

0xfceb,	// (0x0005a957) popup_slider_window_g

0xd94c,	// (0x000585b8) popup_slider_window_t1

0xd9c0,	// (0x0005862c) small_volume_slider_vertical_pane

0xc2a6,	// (0x00056f12) small_volume_slider_vertical_pane_g1

0xc2a6,	// (0x00056f12) small_volume_slider_vertical_pane_g2

0xd9dc,	// (0x00058648) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0005a969) small_volume_slider_vertical_pane_g

0x4941,	// (0x0004f5ad) area_side_right_pane_ParamLimits

0x4941,	// (0x0004f5ad) area_side_right_pane

0x6bf5,	// (0x00051861) aid_size_side_button_ParamLimits

0x6bf5,	// (0x00051861) aid_size_side_button

0x6c09,	// (0x00051875) grid_sctrl_middle_pane_ParamLimits

0x6c09,	// (0x00051875) grid_sctrl_middle_pane

0x6c28,	// (0x00051894) sctrl_sk_bottom_pane

0x6c39,	// (0x000518a5) sctrl_sk_top_pane

0x6c4b,	// (0x000518b7) aid_touch_sctrl_top

0x6c58,	// (0x000518c4) bg_sctrl_sk_pane_ParamLimits

0x6c58,	// (0x000518c4) bg_sctrl_sk_pane

0x6c66,	// (0x000518d2) sctrl_sk_top_pane_g1

0x6c73,	// (0x000518df) sctrl_sk_top_pane_t1

0x6c4b,	// (0x000518b7) aid_touch_sctrl_bottom

0x6c58,	// (0x000518c4) bg_sctrl_sk_pane_cp_ParamLimits

0x6c58,	// (0x000518c4) bg_sctrl_sk_pane_cp

0x6c8e,	// (0x000518fa) sctrl_sk_bottom_pane_g1

0x6c73,	// (0x000518df) sctrl_sk_bottom_pane_t1

0x6c97,	// (0x00051903) cell_sctrl_middle_pane_ParamLimits

0x6c97,	// (0x00051903) cell_sctrl_middle_pane

0x6cb2,	// (0x0005191e) aid_touch_sctrl_middle_ParamLimits

0x6cb2,	// (0x0005191e) aid_touch_sctrl_middle

0x6cc4,	// (0x00051930) bg_sctrl_middle_pane_ParamLimits

0x6cc4,	// (0x00051930) bg_sctrl_middle_pane

0x6a2b,	// (0x00051697) cell_sctrl_middle_pane_g1_ParamLimits

0x6a2b,	// (0x00051697) cell_sctrl_middle_pane_g1

0x6cd2,	// (0x0005193e) cell_sctrl_middle_pane_g2_ParamLimits

0x6cd2,	// (0x0005193e) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x0005a975) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x0005a975) cell_sctrl_middle_pane_g

0x9ce1,	// (0x0005494d) bg_sctrl_middle_pane_g1

0x9ce9,	// (0x00054955) bg_sctrl_middle_pane_g2

0x9cf1,	// (0x0005495d) bg_sctrl_middle_pane_g3

0x9cf9,	// (0x00054965) bg_sctrl_middle_pane_g4

0x9d01,	// (0x0005496d) bg_sctrl_middle_pane_g5

0x9d09,	// (0x00054975) bg_sctrl_middle_pane_g6

0x9d11,	// (0x0005497d) bg_sctrl_middle_pane_g7

0x9d19,	// (0x00054985) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0005a97a) bg_sctrl_middle_pane_g

0x9d21,	// (0x0005498d) bg_sctrl_middle_pane_g8_copy1

0x9ce1,	// (0x0005494d) bg_sctrl_sk_pane_g1

0x9cf1,	// (0x0005495d) bg_sctrl_sk_pane_g2

0x9ce9,	// (0x00054955) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0005a4d7) bg_sctrl_sk_pane_g

0x8732,	// (0x0005339e) aid_size_touch_scroll_bar

0x9d01,	// (0x0005496d) bg_sctrl_sk_pane_g4

0x9cf9,	// (0x00054965) bg_sctrl_sk_pane_g5

0x9d09,	// (0x00054975) bg_sctrl_sk_pane_g6

0x9d11,	// (0x0005497d) bg_sctrl_sk_pane_g7

0x9d21,	// (0x0005498d) bg_sctrl_sk_pane_g8

0x9d19,	// (0x00054985) bg_sctrl_sk_pane_g9

0x5af0,	// (0x0005075c) popup_fep_china_hwr2_fs_candidate_window

0x5afa,	// (0x00050766) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5afa,	// (0x00050766) popup_fep_china_hwr2_fs_control_window

0x6a2b,	// (0x00051697) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x0005a970) sctrl_sk_top_pane_g

0xd9e5,	// (0x00058651) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9e5,	// (0x00058651) aid_fep_china_hwr2_fs_cell

0xd9f7,	// (0x00058663) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9f7,	// (0x00058663) bg_popup_fep_shadow_pane_cp4

0xda0e,	// (0x0005867a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda0e,	// (0x0005867a) bg_popup_fep_shadow_pane_cp5

0xda20,	// (0x0005868c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda20,	// (0x0005868c) popup_fep_china_hwr2_fs_control_bar_grid

0xda30,	// (0x0005869c) popup_fep_china_hwr2_fs_control_funtion_grid

0xda38,	// (0x000586a4) aid_fep_china_hwr2_fs_candi_cell

0x77a3,	// (0x0005240f) bg_popup_fep_shadow_pane_cp6

0xda42,	// (0x000586ae) popup_fep_china_hwr2_fs_candidate_grid

0xda4c,	// (0x000586b8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda4c,	// (0x000586b8) cell_fep_china_hwr2_fs_funtion_grid

0xc2a6,	// (0x00056f12) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda64,	// (0x000586d0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda64,	// (0x000586d0) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda72,	// (0x000586de) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda72,	// (0x000586de) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x0005a98b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x0005a98b) cell_fep_china_hwr2_fs_funtion_grid_g

0xda88,	// (0x000586f4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda88,	// (0x000586f4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda9d,	// (0x00058709) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda9d,	// (0x00058709) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x0005a990) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x0005a990) cell_fep_china_hwr2_fs_funtion_grid_t

0xdab9,	// (0x00058725) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdac1,	// (0x0005872d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdac9,	// (0x00058735) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x0005a995) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdad1,	// (0x0005873d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdad1,	// (0x0005873d) cell_fep_china_hwr2_fs_candidate_grid

0xdaea,	// (0x00058756) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdaf2,	// (0x0005875e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2a6,	// (0x00056f12) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2a6,	// (0x00056f12) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0005a7a9) cell_fep_china_hwr2_fs_candidate_grid_g

0xdafa,	// (0x00058766) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d7,	// (0x00054543) clock_nsta_pane_cp_24_ParamLimits

0x98d7,	// (0x00054543) clock_nsta_pane_cp_24

0x9955,	// (0x000545c1) indicator_nsta_pane_cp_24_ParamLimits

0x9955,	// (0x000545c1) indicator_nsta_pane_cp_24

0xa9e6,	// (0x00055652) heading_pane_g1

0x0001,

0xf8d0,	// (0x0005a53c) heading_pane_g

0xb3d5,	// (0x00056041) grid_sct_catagory_button_pane

0xb405,	// (0x00056071) scroll_pane_cp5_ParamLimits

0xbe98,	// (0x00056b04) button_value_adjust_pane_cp5_ParamLimits

0xbe98,	// (0x00056b04) button_value_adjust_pane_cp5

0xbf77,	// (0x00056be3) form2_midp_time_pane_ParamLimits

0xdb08,	// (0x00058774) cell_sct_catagory_button_pane_ParamLimits

0xdb08,	// (0x00058774) cell_sct_catagory_button_pane

0xc26b,	// (0x00056ed7) bg_button_pane_cp01_ParamLimits

0xc26b,	// (0x00056ed7) bg_button_pane_cp01

0xc2a6,	// (0x00056f12) cell_sct_catagory_button_pane_g1

0x5ec6,	// (0x00050b32) popup_tb_extension_window

0xdb1a,	// (0x00058786) aid_size_cell_ext_ParamLimits

0xdb1a,	// (0x00058786) aid_size_cell_ext

0x7b20,	// (0x0005278c) bg_tb_trans_pane_cp1_ParamLimits

0x7b20,	// (0x0005278c) bg_tb_trans_pane_cp1

0xdb3a,	// (0x000587a6) grid_tb_ext_pane_ParamLimits

0xdb3a,	// (0x000587a6) grid_tb_ext_pane

0xdb68,	// (0x000587d4) cell_tb_ext_pane_ParamLimits

0xdb68,	// (0x000587d4) cell_tb_ext_pane

0xdb7f,	// (0x000587eb) cell_tb_ext_pane_g1_ParamLimits

0xdb7f,	// (0x000587eb) cell_tb_ext_pane_g1

0xdb9c,	// (0x00058808) cell_tb_ext_pane_t1

0x7b20,	// (0x0005278c) list_highlight_pane_cp11_ParamLimits

0x7b20,	// (0x0005278c) list_highlight_pane_cp11

0x4ba8,	// (0x0004f814) popup_uni_indicator_window_ParamLimits

0x4ba8,	// (0x0004f814) popup_uni_indicator_window

0x880f,	// (0x0005347b) bg_popup_sub_pane_cp14

0xdbb7,	// (0x00058823) list_uniindi_pane

0xdbc3,	// (0x0005882f) uniindi_top_pane

0x7b20,	// (0x0005278c) bg_uniindi_top_pane

0xdbe2,	// (0x0005884e) uniindi_top_pane_g1

0xdbf8,	// (0x00058864) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0005a99c) uniindi_top_pane_g

0xdc22,	// (0x0005888e) uniindi_top_pane_t1

0xdc4c,	// (0x000588b8) list_single_uniindi_pane_ParamLimits

0xdc4c,	// (0x000588b8) list_single_uniindi_pane

0xc2a6,	// (0x00056f12) bg_uniindi_top_pane_g1

0xdc5f,	// (0x000588cb) list_single_uniindi_pane_g1

0xdc72,	// (0x000588de) list_single_uniindi_pane_t1

0x4a1e,	// (0x0004f68a) control_bg_pane

0xdc97,	// (0x00058903) bg_sctrl_sk_pane_cp1

0xdca0,	// (0x0005890c) bg_sctrl_sk_pane_cp2

0xdca9,	// (0x00058915) control_bg_pane_g1

0xdcb2,	// (0x0005891e) control_bg_pane_g2

0x0001,

0xfd39,	// (0x0005a9a5) control_bg_pane_g

0xbce2,	// (0x0005694e) cell_indicator_nsta_pane_g1_ParamLimits

0xbcf0,	// (0x0005695c) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0005a70d) cell_indicator_nsta_pane_g_ParamLimits

0x7f75,	// (0x00052be1) form2_midp_time_pane_t1_ParamLimits

0x5a50,	// (0x000506bc) main_idle_act4_pane_ParamLimits

0x5a50,	// (0x000506bc) main_idle_act4_pane

0x5ec6,	// (0x00050b32) popup_tb_extension_window_ParamLimits

0xdb58,	// (0x000587c4) tb_ext_find_pane_ParamLimits

0xdb58,	// (0x000587c4) tb_ext_find_pane

0xdcbb,	// (0x00058927) ai_gene_pane_1_cp1

0x95d4,	// (0x00054240) ai_gene_pane_2_cp1

0xdcc3,	// (0x0005892f) list_single_idle_plugin_calendar_pane

0xdccc,	// (0x00058938) list_single_idle_plugin_notification_pane

0xdcd5,	// (0x00058941) list_single_idle_plugin_player_pane

0xdcde,	// (0x0005894a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcde,	// (0x0005894a) list_single_idle_plugin_shortcut_pane

0xdd00,	// (0x0005896c) main_idle_act4_pane_t1

0xdd12,	// (0x0005897e) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x0005a9aa) main_idle_act4_pane_t

0xdd24,	// (0x00058990) middle_sk_idle_act4_pane_ParamLimits

0xdd24,	// (0x00058990) middle_sk_idle_act4_pane

0xdd3a,	// (0x000589a6) popup_clock_digital_analogue_window_cp2

0xdd54,	// (0x000589c0) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd54,	// (0x000589c0) shortcut_wheel_idle_act4_pane

0xc2a6,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g1

0xc2a6,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g2

0xc2a6,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g3

0xc2a6,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g4

0xc2a6,	// (0x00056f12) shortcut_wheel_idle_act4_pane_g5

0xdd68,	// (0x000589d4) shortcut_wheel_idle_act4_pane_g6

0xdd70,	// (0x000589dc) shortcut_wheel_idle_act4_pane_g7

0xdd78,	// (0x000589e4) shortcut_wheel_idle_act4_pane_g8

0xdd80,	// (0x000589ec) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x0005a9af) shortcut_wheel_idle_act4_pane_g

0xc524,	// (0x00057190) middle_sk_idle_act4_pane_g1_ParamLimits

0xc524,	// (0x00057190) middle_sk_idle_act4_pane_g1

0xdde4,	// (0x00058a50) middle_sk_idle_act4_pane_g2_ParamLimits

0xdde4,	// (0x00058a50) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x0005a9d2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x0005a9d2) middle_sk_idle_act4_pane_g

0xddf0,	// (0x00058a5c) middle_sk_idle_act4_pane_t1_ParamLimits

0xddf0,	// (0x00058a5c) middle_sk_idle_act4_pane_t1

0xde0d,	// (0x00058a79) grid_ai_shortcut_pane_ParamLimits

0xde0d,	// (0x00058a79) grid_ai_shortcut_pane

0xde26,	// (0x00058a92) list_highlight_pane_cp16_ParamLimits

0xde26,	// (0x00058a92) list_highlight_pane_cp16

0xde33,	// (0x00058a9f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde33,	// (0x00058a9f) list_single_idle_plugin_shortcut_pane_g1

0xde3f,	// (0x00058aab) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde3f,	// (0x00058aab) list_single_idle_plugin_shortcut_pane_g2

0xde57,	// (0x00058ac3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde57,	// (0x00058ac3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x0005a9d7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x0005a9d7) list_single_idle_plugin_shortcut_pane_g

0xde6a,	// (0x00058ad6) cell_ai_shortcut_pane_ParamLimits

0xde6a,	// (0x00058ad6) cell_ai_shortcut_pane

0xde8e,	// (0x00058afa) cell_ai_shortcut_pane_g1_ParamLimits

0xde8e,	// (0x00058afa) cell_ai_shortcut_pane_g1

0xdcbb,	// (0x00058927) ai_gene_pane_1_cp2

0xdeb0,	// (0x00058b1c) ai_gene_pane_2_cp2

0xdeb8,	// (0x00058b24) list_highlight_pane_cp15

0xdec1,	// (0x00058b2d) list_single_idle_plugin_calendar_pane_g1

0xdeb8,	// (0x00058b24) list_highlight_pane_cp17

0xdec9,	// (0x00058b35) list_single_idle_plugin_calendar_pane_g1_copy1

0xded1,	// (0x00058b3d) list_single_idle_plugin_player_pane_g1

0xb62e,	// (0x0005629a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x0005a9de) list_single_idle_plugin_player_pane_g

0xded9,	// (0x00058b45) list_single_idle_plugin_player_pane_t1

0xdee7,	// (0x00058b53) list_single_idle_plugin_player_pane_t2

0xdef5,	// (0x00058b61) list_single_idle_plugin_player_pane_t3

0xdf03,	// (0x00058b6f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x0005a9e3) list_single_idle_plugin_player_pane_t

0xdf11,	// (0x00058b7d) wait_bar_pane_cp15

0xdf19,	// (0x00058b85) grid_ai_notification_pane

0xb62e,	// (0x0005629a) list_single_idle_plugin_notification_pane_g1

0xdf22,	// (0x00058b8e) cell_ai_notification_pane_ParamLimits

0xdf22,	// (0x00058b8e) cell_ai_notification_pane

0xdf2f,	// (0x00058b9b) cell_ai_notification_pane_g1

0xdf37,	// (0x00058ba3) cell_ai_notification_pane_t1

0xdf45,	// (0x00058bb1) tb_ext_find_button_pane

0xdf4d,	// (0x00058bb9) tb_ext_find_pane_g1

0xdf55,	// (0x00058bc1) tb_ext_find_pane_t1

0x8e86,	// (0x00053af2) tb_ext_find_button_pane_g1

0xdf63,	// (0x00058bcf) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x0005a9ec) tb_ext_find_button_pane_g

0xdd00,	// (0x0005896c) main_idle_act4_pane_t1_ParamLimits

0xdd12,	// (0x0005897e) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x0005a9aa) main_idle_act4_pane_t_ParamLimits

0xdd3a,	// (0x000589a6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd48,	// (0x000589b4) sat_plugin_idle_act4_pane_ParamLimits

0xdd48,	// (0x000589b4) sat_plugin_idle_act4_pane

0xdf6c,	// (0x00058bd8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf6c,	// (0x00058bd8) sat_plugin_idle_act4_pane_t1

0xdf7f,	// (0x00058beb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf7f,	// (0x00058beb) sat_plugin_idle_act4_pane_t2

0xdf92,	// (0x00058bfe) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf92,	// (0x00058bfe) sat_plugin_idle_act4_pane_t3

0xdfa5,	// (0x00058c11) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfa5,	// (0x00058c11) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x0005a9f1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x0005a9f1) sat_plugin_idle_act4_pane_t

0x4ae3,	// (0x0004f74f) popup_battery_window_ParamLimits

0x4ae3,	// (0x0004f74f) popup_battery_window

0x7b20,	// (0x0005278c) bg_popup_sub_pane_cp25_ParamLimits

0x7b20,	// (0x0005278c) bg_popup_sub_pane_cp25

0xdfb8,	// (0x00058c24) popup_battery_window_g1_ParamLimits

0xdfb8,	// (0x00058c24) popup_battery_window_g1

0xdfc4,	// (0x00058c30) popup_battery_window_t1_ParamLimits

0xdfc4,	// (0x00058c30) popup_battery_window_t1

0xdfd6,	// (0x00058c42) popup_battery_window_t2_ParamLimits

0xdfd6,	// (0x00058c42) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0005a9fa) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0005a9fa) popup_battery_window_t

0x94a1,	// (0x0005410d) midp_canvas_pane_ParamLimits

0x9518,	// (0x00054184) midp_keypad_pane_ParamLimits

0x9518,	// (0x00054184) midp_keypad_pane

0x97d7,	// (0x00054443) main_midp_pane_ParamLimits

0xbd5c,	// (0x000569c8) signal_pane_g2_cp_ParamLimits

0xdff3,	// (0x00058c5f) aid_size_cell_midp_keypad_ParamLimits

0xdff3,	// (0x00058c5f) aid_size_cell_midp_keypad

0xe00d,	// (0x00058c79) midp_keyp_game_grid_pane_ParamLimits

0xe00d,	// (0x00058c79) midp_keyp_game_grid_pane

0xe02d,	// (0x00058c99) midp_keyp_rocker_pane_ParamLimits

0xe02d,	// (0x00058c99) midp_keyp_rocker_pane

0xe066,	// (0x00058cd2) midp_keyp_sk_left_pane_ParamLimits

0xe066,	// (0x00058cd2) midp_keyp_sk_left_pane

0xe0c0,	// (0x00058d2c) midp_keyp_sk_right_pane_ParamLimits

0xe0c0,	// (0x00058d2c) midp_keyp_sk_right_pane

0x77a3,	// (0x0005240f) bg_button_pane_cp03

0xe11a,	// (0x00058d86) midp_keyp_sk_left_pane_g1

0x77a3,	// (0x0005240f) bg_button_pane_cp04

0xe11a,	// (0x00058d86) midp_keyp_sk_right_pane_g1

0xc2a6,	// (0x00056f12) midp_keyp_rocker_pane_g1

0xe123,	// (0x00058d8f) keyp_game_cell_pane_ParamLimits

0xe123,	// (0x00058d8f) keyp_game_cell_pane

0x77a3,	// (0x0005240f) bg_button_pane_cp02

0xe136,	// (0x00058da2) keyp_game_cell_pane_g1

0x4b27,	// (0x0004f793) popup_fep_vkb2_window_ParamLimits

0x4b27,	// (0x0004f793) popup_fep_vkb2_window

0x6cf0,	// (0x0005195c) aid_size_cell_vkb2_ParamLimits

0x6cf0,	// (0x0005195c) aid_size_cell_vkb2

0x6d44,	// (0x000519b0) popup_fep_vkb2_window_g1_ParamLimits

0x6d44,	// (0x000519b0) popup_fep_vkb2_window_g1

0x6d8c,	// (0x000519f8) vkb2_area_bottom_pane_ParamLimits

0x6d8c,	// (0x000519f8) vkb2_area_bottom_pane

0x6dd8,	// (0x00051a44) vkb2_area_keypad_pane_ParamLimits

0x6dd8,	// (0x00051a44) vkb2_area_keypad_pane

0x6e1a,	// (0x00051a86) vkb2_area_top_pane_ParamLimits

0x6e1a,	// (0x00051a86) vkb2_area_top_pane

0x6e94,	// (0x00051b00) vkb2_top_entry_pane_ParamLimits

0x6e94,	// (0x00051b00) vkb2_top_entry_pane

0x6ebe,	// (0x00051b2a) vkb2_top_grid_left_pane_ParamLimits

0x6ebe,	// (0x00051b2a) vkb2_top_grid_left_pane

0x6edc,	// (0x00051b48) vkb2_top_grid_right_pane_ParamLimits

0x6edc,	// (0x00051b48) vkb2_top_grid_right_pane

0x6efa,	// (0x00051b66) vkb2_cell_keypad_pane_ParamLimits

0x6efa,	// (0x00051b66) vkb2_cell_keypad_pane

0x6fcb,	// (0x00051c37) vkb2_area_bottom_grid_pane_ParamLimits

0x6fcb,	// (0x00051c37) vkb2_area_bottom_grid_pane

0x6ff1,	// (0x00051c5d) vkb2_area_bottom_pane_g1_ParamLimits

0x6ff1,	// (0x00051c5d) vkb2_area_bottom_pane_g1

0x7015,	// (0x00051c81) vkb2_area_bottom_pane_g2_ParamLimits

0x7015,	// (0x00051c81) vkb2_area_bottom_pane_g2

0x7043,	// (0x00051caf) vkb2_area_bottom_pane_g3_ParamLimits

0x7043,	// (0x00051caf) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x0005a9ff) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x0005a9ff) vkb2_area_bottom_pane_g

0x70a4,	// (0x00051d10) vkb2_top_cell_left_pane_ParamLimits

0x70a4,	// (0x00051d10) vkb2_top_cell_left_pane

0xe147,	// (0x00058db3) vkb2_top_entry_pane_g1_ParamLimits

0xe147,	// (0x00058db3) vkb2_top_entry_pane_g1

0xe155,	// (0x00058dc1) vkb2_top_entry_pane_t1_ParamLimits

0xe155,	// (0x00058dc1) vkb2_top_entry_pane_t1

0xe187,	// (0x00058df3) vkb2_top_entry_pane_t2_ParamLimits

0xe187,	// (0x00058df3) vkb2_top_entry_pane_t2

0xe1b9,	// (0x00058e25) vkb2_top_entry_pane_t3_ParamLimits

0xe1b9,	// (0x00058e25) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0005aa06) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0005aa06) vkb2_top_entry_pane_t

0x70f1,	// (0x00051d5d) vkb2_top_grid_right_pane_g1_ParamLimits

0x70f1,	// (0x00051d5d) vkb2_top_grid_right_pane_g1

0x7107,	// (0x00051d73) vkb2_top_grid_right_pane_g2_ParamLimits

0x7107,	// (0x00051d73) vkb2_top_grid_right_pane_g2

0x711f,	// (0x00051d8b) vkb2_top_grid_right_pane_g3_ParamLimits

0x711f,	// (0x00051d8b) vkb2_top_grid_right_pane_g3

0x7137,	// (0x00051da3) vkb2_top_grid_right_pane_g4_ParamLimits

0x7137,	// (0x00051da3) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x0005aa0d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x0005aa0d) vkb2_top_grid_right_pane_g

0x714d,	// (0x00051db9) vkb2_top_cell_left_pane_g1

0x7164,	// (0x00051dd0) vkb2_cell_keypad_pane_g1_ParamLimits

0x7164,	// (0x00051dd0) vkb2_cell_keypad_pane_g1

0xe1dd,	// (0x00058e49) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1dd,	// (0x00058e49) vkb2_cell_keypad_pane_t1

0x7172,	// (0x00051dde) vkb2_cell_bottom_grid_pane_ParamLimits

0x7172,	// (0x00051dde) vkb2_cell_bottom_grid_pane

0x71ab,	// (0x00051e17) vkb2_cell_bottom_grid_pane_g1

0xdd88,	// (0x000589f4) aid_call2_pane_cp02

0xdd90,	// (0x000589fc) aid_call_pane_cp02

0xdd98,	// (0x00058a04) clock_digital_number_pane_cp10

0xdda0,	// (0x00058a0c) clock_digital_number_pane_cp11

0xdda8,	// (0x00058a14) clock_digital_number_pane_cp12

0xddb0,	// (0x00058a1c) clock_digital_number_pane_cp13

0xddb8,	// (0x00058a24) clock_digital_separator_pane_cp10

0x8e86,	// (0x00053af2) popup_clock_digital_analogue_window_cp2_g1

0x8e86,	// (0x00053af2) popup_clock_digital_analogue_window_cp2_g2

0xddc0,	// (0x00058a2c) popup_clock_digital_analogue_window_cp2_g3

0x8e86,	// (0x00053af2) popup_clock_digital_analogue_window_cp2_g4

0xddc0,	// (0x00058a2c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x0005a9c2) popup_clock_digital_analogue_window_cp2_g

0xddc8,	// (0x00058a34) popup_clock_digital_analogue_window_cp2_t1

0xddd6,	// (0x00058a42) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x0005a9cd) popup_clock_digital_analogue_window_cp2_t

0xc2a6,	// (0x00056f12) clock_digital_number_pane_cp10_g1

0xc2a6,	// (0x00056f12) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a7a9) clock_digital_number_pane_cp10_g

0xc2a6,	// (0x00056f12) clock_digital_separator_pane_cp10_g1

0xc2a6,	// (0x00056f12) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a7a9) clock_digital_separator_pane_cp10_g

0xdc04,	// (0x00058870) uniindi_top_pane_g3

0xdc15,	// (0x00058881) uniindi_top_pane_g4

0x6f85,	// (0x00051bf1) vkb2_row_keypad_pane_ParamLimits

0x6f85,	// (0x00051bf1) vkb2_row_keypad_pane

0x71c7,	// (0x00051e33) vkb2_cell_t_keypad_pane_ParamLimits

0x71c7,	// (0x00051e33) vkb2_cell_t_keypad_pane

0x71d7,	// (0x00051e43) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71d7,	// (0x00051e43) vkb2_cell_t_keypad_pane_cp08

0x71ea,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71ea,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp09

0x71fe,	// (0x00051e6a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x71fe,	// (0x00051e6a) vkb2_cell_t_keypad_pane_cp01

0x720f,	// (0x00051e7b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x720f,	// (0x00051e7b) vkb2_cell_t_keypad_pane_cp02

0x7220,	// (0x00051e8c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7220,	// (0x00051e8c) vkb2_cell_t_keypad_pane_cp03

0x7231,	// (0x00051e9d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7231,	// (0x00051e9d) vkb2_cell_t_keypad_pane_cp04

0x7242,	// (0x00051eae) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7242,	// (0x00051eae) vkb2_cell_t_keypad_pane_cp05

0x7253,	// (0x00051ebf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7253,	// (0x00051ebf) vkb2_cell_t_keypad_pane_cp06

0x7264,	// (0x00051ed0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7264,	// (0x00051ed0) vkb2_cell_t_keypad_pane_cp07

0x7275,	// (0x00051ee1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7275,	// (0x00051ee1) vkb2_cell_t_keypad_pane_cp10

0x6a2b,	// (0x00051697) vkb2_cell_t_keypad_pane_g1

0xe1f4,	// (0x00058e60) vkb2_cell_t_keypad_pane_t1

0x4a1e,	// (0x0004f68a) popup_grid_graphic2_window

0xe206,	// (0x00058e72) aid_size_cell_graphic2_ParamLimits

0xe206,	// (0x00058e72) aid_size_cell_graphic2

0xe23e,	// (0x00058eaa) bg_popup_window_pane_cp21_ParamLimits

0xe23e,	// (0x00058eaa) bg_popup_window_pane_cp21

0xe24c,	// (0x00058eb8) graphic2_pages_pane_ParamLimits

0xe24c,	// (0x00058eb8) graphic2_pages_pane

0xe292,	// (0x00058efe) grid_graphic2_control_pane_ParamLimits

0xe292,	// (0x00058efe) grid_graphic2_control_pane

0xe2d0,	// (0x00058f3c) grid_graphic2_pane_ParamLimits

0xe2d0,	// (0x00058f3c) grid_graphic2_pane

0xe344,	// (0x00058fb0) cell_graphic2_pane

0x4a1e,	// (0x0004f68a) main_comp_mode_pane

0xd484,	// (0x000580f0) list_ai3_gene_pane_ParamLimits

0xd84e,	// (0x000584ba) bg_popup_window_pane_cp19_ParamLimits

0xd85a,	// (0x000584c6) bg_touch_area_indi_pane_ParamLimits

0xd85a,	// (0x000584c6) bg_touch_area_indi_pane

0xd870,	// (0x000584dc) bg_touch_area_indi_pane_cp01_ParamLimits

0xd870,	// (0x000584dc) bg_touch_area_indi_pane_cp01

0xd886,	// (0x000584f2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd886,	// (0x000584f2) bg_touch_area_indi_pane_cp02

0xd89e,	// (0x0005850a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd89e,	// (0x0005850a) bg_touch_area_indi_pane_cp03

0xd8b8,	// (0x00058524) popup_slider_window_g1_ParamLimits

0xd8d4,	// (0x00058540) popup_slider_window_g2_ParamLimits

0xd8f0,	// (0x0005855c) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x0005a957) popup_slider_window_g_ParamLimits

0xd94c,	// (0x000585b8) popup_slider_window_t1_ParamLimits

0xd9c0,	// (0x0005862c) small_volume_slider_vertical_pane_ParamLimits

0xe344,	// (0x00058fb0) cell_graphic2_pane_ParamLimits

0xe392,	// (0x00058ffe) bg_button_pane_cp10_ParamLimits

0xe392,	// (0x00058ffe) bg_button_pane_cp10

0xe3a5,	// (0x00059011) bg_button_pane_cp11_ParamLimits

0xe3a5,	// (0x00059011) bg_button_pane_cp11

0xe3b8,	// (0x00059024) graphic2_pages_pane_g1_ParamLimits

0xe3b8,	// (0x00059024) graphic2_pages_pane_g1

0xe3d3,	// (0x0005903f) graphic2_pages_pane_g2_ParamLimits

0xe3d3,	// (0x0005903f) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0005aa1b) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0005aa1b) graphic2_pages_pane_g

0xe3eb,	// (0x00059057) graphic2_pages_pane_t1_ParamLimits

0xe3eb,	// (0x00059057) graphic2_pages_pane_t1

0xe403,	// (0x0005906f) cell_graphic2_control_pane_ParamLimits

0xe403,	// (0x0005906f) cell_graphic2_control_pane

0xe424,	// (0x00059090) cell_graphic2_pane_g1_ParamLimits

0xe424,	// (0x00059090) cell_graphic2_pane_g1

0xe431,	// (0x0005909d) cell_graphic2_pane_g2_ParamLimits

0xe431,	// (0x0005909d) cell_graphic2_pane_g2

0xe43e,	// (0x000590aa) cell_graphic2_pane_g3_ParamLimits

0xe43e,	// (0x000590aa) cell_graphic2_pane_g3

0xe44b,	// (0x000590b7) cell_graphic2_pane_g4_ParamLimits

0xe44b,	// (0x000590b7) cell_graphic2_pane_g4

0xe458,	// (0x000590c4) cell_graphic2_pane_g5_ParamLimits

0xe458,	// (0x000590c4) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x0005aa20) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x0005aa20) cell_graphic2_pane_g

0xe473,	// (0x000590df) cell_graphic2_pane_t1_ParamLimits

0xe473,	// (0x000590df) cell_graphic2_pane_t1

0x9d55,	// (0x000549c1) grid_highlight_pane_cp11_ParamLimits

0x9d55,	// (0x000549c1) grid_highlight_pane_cp11

0x7b20,	// (0x0005278c) bg_button_pane_cp05

0xe49c,	// (0x00059108) cell_graphic2_control_pane_g1

0xc2a6,	// (0x00056f12) bg_touch_area_indi_pane_g1

0xe4c4,	// (0x00059130) aid_cmod_rocker_key_size

0xe4ce,	// (0x0005913a) aid_cmode_itu_key_size

0xe4d8,	// (0x00059144) main_cmode_video_pane

0xe4e2,	// (0x0005914e) main_comp_mode_itu_pane

0xe4ee,	// (0x0005915a) main_comp_mode_rocker_pane

0xe4fa,	// (0x00059166) cell_cmode_rocker_pane_ParamLimits

0xe4fa,	// (0x00059166) cell_cmode_rocker_pane

0xe50c,	// (0x00059178) cell_cmode_itu_pane_ParamLimits

0xe50c,	// (0x00059178) cell_cmode_itu_pane

0x880f,	// (0x0005347b) bg_button_pane_cp06_ParamLimits

0x880f,	// (0x0005347b) bg_button_pane_cp06

0xc524,	// (0x00057190) cell_cmode_rocker_pane_g1_ParamLimits

0xc524,	// (0x00057190) cell_cmode_rocker_pane_g1

0xda64,	// (0x000586d0) cell_cmode_rocker_pane_g2_ParamLimits

0xda64,	// (0x000586d0) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x0005aa30) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x0005aa30) cell_cmode_rocker_pane_g

0x77a3,	// (0x0005240f) bg_button_pane_cp07

0xe521,	// (0x0005918d) cell_cmode_itu_pane_g1

0xe52a,	// (0x00059196) cell_cmode_itu_pane_t1

0xe538,	// (0x000591a4) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005aa35) cell_cmode_itu_pane_t

0xdc87,	// (0x000588f3) aid_touch_ctrl_left

0xdc8f,	// (0x000588fb) aid_touch_ctrl_right

0x77a3,	// (0x0005240f) compa_mode_pane

0xe546,	// (0x000591b2) aid_cmod_rocker_key_size_cp

0xe550,	// (0x000591bc) aid_cmode_itu_key_size_cp

0xe55a,	// (0x000591c6) compa_mode_pane_g1

0xe562,	// (0x000591ce) compa_mode_pane_g2

0xe56a,	// (0x000591d6) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0005aa3a) compa_mode_pane_g

0xe572,	// (0x000591de) main_comp_mode_itu_pane_cp

0xe57a,	// (0x000591e6) main_comp_mode_rocker_pane_cp

0xe582,	// (0x000591ee) cell_cmode_itu_pane_cp_ParamLimits

0xe582,	// (0x000591ee) cell_cmode_itu_pane_cp

0xe597,	// (0x00059203) cell_cmode_rocker_pane_cp_ParamLimits

0xe597,	// (0x00059203) cell_cmode_rocker_pane_cp

0x880f,	// (0x0005347b) bg_button_pane_cp06_cp_ParamLimits

0x880f,	// (0x0005347b) bg_button_pane_cp06_cp

0xc524,	// (0x00057190) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc524,	// (0x00057190) cell_cmode_rocker_pane_g1_cp

0xc2a6,	// (0x00056f12) cell_cmode_rocker_pane_g2_cp

0x77a3,	// (0x0005240f) bg_button_pane_cp07_cp

0xb226,	// (0x00055e92) cell_cmode_itu_pane_g1_cp

0xe5a9,	// (0x00059215) cell_cmode_itu_pane_t1_cp

0xe5a9,	// (0x00059215) cell_cmode_itu_pane_t2_cp

0xb213,	// (0x00055e7f) settings_code_pane_cp2

0x7897,	// (0x00052503) bg_popup_window_pane_cp3_ParamLimits

0x83f7,	// (0x00053063) heading_pane_cp3_ParamLimits

0x8403,	// (0x0005306f) listscroll_popup_graphic_pane_ParamLimits

0x67d4,	// (0x00051440) fep_hwr_aid_pane_ParamLimits

0x6c4b,	// (0x000518b7) aid_touch_sctrl_top_ParamLimits

0x6c66,	// (0x000518d2) sctrl_sk_top_pane_g1_ParamLimits

0x6a2b,	// (0x00051697) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x0005a970) sctrl_sk_top_pane_g_ParamLimits

0x6c73,	// (0x000518df) sctrl_sk_top_pane_t1_ParamLimits

0x6c4b,	// (0x000518b7) aid_touch_sctrl_bottom_ParamLimits

0x6c73,	// (0x000518df) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbd0,	// (0x0005883c) aid_area_touch_clock

0x6e5c,	// (0x00051ac8) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e5c,	// (0x00051ac8) aid_vkb2_area_top_pane_cell

0x6fa7,	// (0x00051c13) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6fa7,	// (0x00051c13) aid_vkb2_area_bottom_pane_cell

0xe13f,	// (0x00058dab) popup_char_count_window

0xe5b7,	// (0x00059223) popup_char_count_window_g1

0xe5c0,	// (0x0005922c) popup_char_count_window_g2

0xe5c9,	// (0x00059235) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005aa41) popup_char_count_window_g

0xe5d2,	// (0x0005923e) popup_char_count_window_t1

0x6d22,	// (0x0005198e) popup_fep_char_preview_window_ParamLimits

0x6d22,	// (0x0005198e) popup_fep_char_preview_window

0x6e7a,	// (0x00051ae6) vkb2_top_candi_pane_ParamLimits

0x6e7a,	// (0x00051ae6) vkb2_top_candi_pane

0xe5e0,	// (0x0005924c) cell_vkb2_top_candi_pane_ParamLimits

0xe5e0,	// (0x0005924c) cell_vkb2_top_candi_pane

0x728a,	// (0x00051ef6) bg_popup_fep_char_preview_window_ParamLimits

0x728a,	// (0x00051ef6) bg_popup_fep_char_preview_window

0x7298,	// (0x00051f04) popup_fep_char_preview_window_t1_ParamLimits

0x7298,	// (0x00051f04) popup_fep_char_preview_window_t1

0xe62d,	// (0x00059299) bg_popup_fep_char_preview_window_g1

0xe635,	// (0x000592a1) bg_popup_fep_char_preview_window_g2

0xe63d,	// (0x000592a9) bg_popup_fep_char_preview_window_g3

0xe645,	// (0x000592b1) bg_popup_fep_char_preview_window_g4

0xe64d,	// (0x000592b9) bg_popup_fep_char_preview_window_g5

0x72d2,	// (0x00051f3e) bg_popup_fep_char_preview_window_g6

0xe655,	// (0x000592c1) bg_popup_fep_char_preview_window_g7

0xe65d,	// (0x000592c9) bg_popup_fep_char_preview_window_g8

0xe665,	// (0x000592d1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0005aa48) bg_popup_fep_char_preview_window_g

0x6a2b,	// (0x00051697) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a2b,	// (0x00051697) cell_vkb2_top_candi_pane_g1

0x6a39,	// (0x000516a5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6a39,	// (0x000516a5) cell_vkb2_top_candi_pane_g2

0xd371,	// (0x00057fdd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd371,	// (0x00057fdd) cell_vkb2_top_candi_pane_g3

0x72da,	// (0x00051f46) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72da,	// (0x00051f46) cell_vkb2_top_candi_pane_g4

0xc9fb,	// (0x00057667) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9fb,	// (0x00057667) cell_vkb2_top_candi_pane_g5

0x72fb,	// (0x00051f67) cell_vkb2_top_candi_pane_g6_ParamLimits

0x72fb,	// (0x00051f67) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0005aa5b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0005aa5b) cell_vkb2_top_candi_pane_g

0x7309,	// (0x00051f75) cell_vkb2_top_candi_pane_t1

0x641f,	// (0x0005108b) aid_size_touch_slider_mark_ParamLimits

0x641f,	// (0x0005108b) aid_size_touch_slider_mark

0xe282,	// (0x00058eee) grid_graphic2_catg_pane_ParamLimits

0xe282,	// (0x00058eee) grid_graphic2_catg_pane

0xe320,	// (0x00058f8c) popup_grid_graphic2_window_t1_ParamLimits

0xe320,	// (0x00058f8c) popup_grid_graphic2_window_t1

0xe332,	// (0x00058f9e) popup_grid_graphic2_window_t2_ParamLimits

0xe332,	// (0x00058f9e) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005aa16) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005aa16) popup_grid_graphic2_window_t

0x7b20,	// (0x0005278c) bg_button_pane_cp05_ParamLimits

0xe49c,	// (0x00059108) cell_graphic2_control_pane_g1_ParamLimits

0xe66d,	// (0x000592d9) cell_graphic2_catg_pane_ParamLimits

0xe66d,	// (0x000592d9) cell_graphic2_catg_pane

0x77a3,	// (0x0005240f) bg_button_pane_cp12

0xe67f,	// (0x000592eb) cell_graphic2_catg_pane_g1

0xdb9c,	// (0x00058808) cell_tb_ext_pane_t1_ParamLimits

0x70c4,	// (0x00051d30) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70c4,	// (0x00051d30) vkb2_top_cell_right_narrow_pane

0x70dc,	// (0x00051d48) vkb2_top_cell_right_wide_pane_ParamLimits

0x70dc,	// (0x00051d48) vkb2_top_cell_right_wide_pane

0x67c6,	// (0x00051432) bg_vkb2_func_pane_ParamLimits

0x67c6,	// (0x00051432) bg_vkb2_func_pane

0x714d,	// (0x00051db9) vkb2_top_cell_left_pane_g1_ParamLimits

0x67c6,	// (0x00051432) bg_vkb2_fuc_pane_cp03_ParamLimits

0x67c6,	// (0x00051432) bg_vkb2_fuc_pane_cp03

0x71ab,	// (0x00051e17) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ce9,	// (0x00054955) bg_vkb2_func_pane_g1

0x9cf1,	// (0x0005495d) bg_vkb2_func_pane_g2

0x9d01,	// (0x0005496d) bg_vkb2_func_pane_g3

0x9cf9,	// (0x00054965) bg_vkb2_func_pane_g4

0x9d09,	// (0x00054975) bg_vkb2_func_pane_g5

0x9d11,	// (0x0005497d) bg_vkb2_func_pane_g6

0x9d19,	// (0x00054985) bg_vkb2_func_pane_g7

0x9d21,	// (0x0005498d) bg_vkb2_func_pane_g8

0x9ce1,	// (0x0005494d) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0005aa68) bg_vkb2_func_pane_g

0x67c6,	// (0x00051432) bg_vkb2_fuc_pane_cp01_ParamLimits

0x67c6,	// (0x00051432) bg_vkb2_fuc_pane_cp01

0x714d,	// (0x00051db9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x714d,	// (0x00051db9) vkb2_top_cell_right_wide_pane_g1

0x67c6,	// (0x00051432) bg_vkb2_fuc_pane_cp02_ParamLimits

0x67c6,	// (0x00051432) bg_vkb2_fuc_pane_cp02

0x71ab,	// (0x00051e17) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71ab,	// (0x00051e17) vkb2_top_cell_right_narrow_pane_g1

0xd7d2,	// (0x0005843e) aid_touch_area_decrease_ParamLimits

0xd7d2,	// (0x0005843e) aid_touch_area_decrease

0xd7f0,	// (0x0005845c) aid_touch_area_increase_ParamLimits

0xd7f0,	// (0x0005845c) aid_touch_area_increase

0xd7fc,	// (0x00058468) aid_touch_area_mute_ParamLimits

0xd7fc,	// (0x00058468) aid_touch_area_mute

0xd820,	// (0x0005848c) aid_touch_area_slider_ParamLimits

0xd820,	// (0x0005848c) aid_touch_area_slider

0xd90c,	// (0x00058578) popup_slider_window_g4_ParamLimits

0xd90c,	// (0x00058578) popup_slider_window_g4

0xd918,	// (0x00058584) popup_slider_window_g5_ParamLimits

0xd918,	// (0x00058584) popup_slider_window_g5

0xd93a,	// (0x000585a6) popup_slider_window_g6_ParamLimits

0xd93a,	// (0x000585a6) popup_slider_window_g6

0xd97a,	// (0x000585e6) popup_slider_window_t2_ParamLimits

0xd97a,	// (0x000585e6) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x0005a964) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x0005a964) popup_slider_window_t

0xd992,	// (0x000585fe) slider_pane_ParamLimits

0xd992,	// (0x000585fe) slider_pane

0xe688,	// (0x000592f4) slider_pane_g1_ParamLimits

0xe688,	// (0x000592f4) slider_pane_g1

0xe69c,	// (0x00059308) slider_pane_g2_ParamLimits

0xe69c,	// (0x00059308) slider_pane_g2

0xe6b2,	// (0x0005931e) slider_pane_g3_ParamLimits

0xe6b2,	// (0x0005931e) slider_pane_g3

0x0003,

0xfe0f,	// (0x0005aa7b) slider_pane_g_ParamLimits

0xfe0f,	// (0x0005aa7b) slider_pane_g

0x5f22,	// (0x00050b8e) popup_tb_float_extension_window_ParamLimits

0x5f22,	// (0x00050b8e) popup_tb_float_extension_window

0xe6de,	// (0x0005934a) aid_size_cell_tb_float_ext

0x77a3,	// (0x0005240f) bg_popup_sub_window_cp28

0xe6ea,	// (0x00059356) grid_tb_float_ext_pane

0xe6f4,	// (0x00059360) cell_tb_float_ext_pane_ParamLimits

0xe6f4,	// (0x00059360) cell_tb_float_ext_pane

0xe70e,	// (0x0005937a) cell_tb_float_ext_pane_g1

0xe717,	// (0x00059383) grid_highlight_pane_cp12

0x6915,	// (0x00051581) cell_last_hwr_side_pane_ParamLimits

0x6915,	// (0x00051581) cell_last_hwr_side_pane

0xc2a6,	// (0x00056f12) cell_last_hwr_side_pane_g1

0xe720,	// (0x0005938c) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x0005aa84) cell_last_hwr_side_pane_g

0x7073,	// (0x00051cdf) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7073,	// (0x00051cdf) vkb2_area_bottom_space_btn_pane

0x6a2b,	// (0x00051697) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f4,	// (0x00058e60) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7309,	// (0x00051f75) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7328,	// (0x00051f94) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7328,	// (0x00051f94) vkb2_area_bottom_space_btn_pane_g1

0x7362,	// (0x00051fce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7362,	// (0x00051fce) vkb2_area_bottom_space_btn_pane_g2

0x7398,	// (0x00052004) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7398,	// (0x00052004) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0005aa89) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0005aa89) vkb2_area_bottom_space_btn_pane_g

0x6889,	// (0x000514f5) cel_fep_hwr_func_pane_ParamLimits

0x6889,	// (0x000514f5) cel_fep_hwr_func_pane

0x68c5,	// (0x00051531) cell_hwr_side_button_pane_ParamLimits

0x68c5,	// (0x00051531) cell_hwr_side_button_pane

0xdbd0,	// (0x0005883c) aid_area_touch_clock_ParamLimits

0x7b20,	// (0x0005278c) bg_uniindi_top_pane_ParamLimits

0xdbe2,	// (0x0005884e) uniindi_top_pane_g1_ParamLimits

0xdbf8,	// (0x00058864) uniindi_top_pane_g2_ParamLimits

0xdc04,	// (0x00058870) uniindi_top_pane_g3_ParamLimits

0xdc15,	// (0x00058881) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0005a99c) uniindi_top_pane_g_ParamLimits

0xdc22,	// (0x0005888e) uniindi_top_pane_t1_ParamLimits

0x7b20,	// (0x0005278c) bg_vkb2_func_pane_cp01_ParamLimits

0x7b20,	// (0x0005278c) bg_vkb2_func_pane_cp01

0xe729,	// (0x00059395) cel_fep_hwr_func_pane_g1_ParamLimits

0xe729,	// (0x00059395) cel_fep_hwr_func_pane_g1

0x7b20,	// (0x0005278c) bg_vkb2_func_pane_cp02_ParamLimits

0x7b20,	// (0x0005278c) bg_vkb2_func_pane_cp02

0xe729,	// (0x00059395) cell_hwr_side_button_pane_g1_ParamLimits

0xe729,	// (0x00059395) cell_hwr_side_button_pane_g1

0x9b62,	// (0x000547ce) status_pane_g4_ParamLimits

0x9b62,	// (0x000547ce) status_pane_g4

0x9b7c,	// (0x000547e8) status_pane_t1

0xbfe0,	// (0x00056c4c) form2_midp_gauge_slider_cont_pane

0xbfe8,	// (0x00056c54) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffa,	// (0x00056c66) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00c,	// (0x00056c78) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0005a75c) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01e,	// (0x00056c8a) form2_midp_slider_pane_ParamLimits

0x6ce2,	// (0x0005194e) aid_size_cell_func_vkb2_ParamLimits

0x6ce2,	// (0x0005194e) aid_size_cell_func_vkb2

0xe6ca,	// (0x00059336) slider_pane_g4_ParamLimits

0xe6ca,	// (0x00059336) slider_pane_g4

0x73e2,	// (0x0005204e) form2_midp_gauge_slider_pane_t2_cp01

0x73f0,	// (0x0005205c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x73f0,	// (0x0005205c) form2_midp_gauge_slider_pane_t3_cp01

0x740d,	// (0x00052079) form2_midp_slider_pane_cp01

0x77a3,	// (0x0005240f) navi_smil_pane

0xe762,	// (0x000593ce) navi_smil_pane_g1

0xe76a,	// (0x000593d6) navi_smil_pane_t1

0xe737,	// (0x000593a3) form2_midp_slider_pane_g1

0xe740,	// (0x000593ac) form2_midp_slider_pane_g2

0xe748,	// (0x000593b4) form2_midp_slider_pane_g3

0xe737,	// (0x000593a3) form2_midp_slider_pane_g4

0xe750,	// (0x000593bc) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x0005aa92) form2_midp_slider_pane_g

0x73d2,	// (0x0005203e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73d2,	// (0x0005203e) vkb2_area_bottom_space_btn_pane_g4

0x9991,	// (0x000545fd) lc0_navi_pane_ParamLimits

0x9991,	// (0x000545fd) lc0_navi_pane

0x9a07,	// (0x00054673) lc0_stat_indi_pane_ParamLimits

0x9a07,	// (0x00054673) lc0_stat_indi_pane

0x9a1e,	// (0x0005468a) ls0_title_pane_ParamLimits

0x9a1e,	// (0x0005468a) ls0_title_pane

0x880f,	// (0x0005347b) bg_popup_sub_pane_cp14_ParamLimits

0xdbb7,	// (0x00058823) list_uniindi_pane_ParamLimits

0xdbc3,	// (0x0005882f) uniindi_top_pane_ParamLimits

0xdc5f,	// (0x000588cb) list_single_uniindi_pane_g1_ParamLimits

0xdc72,	// (0x000588de) list_single_uniindi_pane_t1_ParamLimits

0x7416,	// (0x00052082) lc0_stat_clock_pane_ParamLimits

0x7416,	// (0x00052082) lc0_stat_clock_pane

0xe778,	// (0x000593e4) lc0_stat_indi_pane_g1_ParamLimits

0xe778,	// (0x000593e4) lc0_stat_indi_pane_g1

0xe785,	// (0x000593f1) lc0_stat_indi_pane_g2_ParamLimits

0xe785,	// (0x000593f1) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0005aa9d) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0005aa9d) lc0_stat_indi_pane_g

0x7423,	// (0x0005208f) lc0_uni_indicator_pane_ParamLimits

0x7423,	// (0x0005208f) lc0_uni_indicator_pane

0xe792,	// (0x000593fe) ls0_title_pane_g1_ParamLimits

0xe792,	// (0x000593fe) ls0_title_pane_g1

0xe7a6,	// (0x00059412) ls0_title_pane_t1_ParamLimits

0xe7a6,	// (0x00059412) ls0_title_pane_t1

0x7430,	// (0x0005209c) lc0_uni_indicator_pane_g1_ParamLimits

0x7430,	// (0x0005209c) lc0_uni_indicator_pane_g1

0xe7dc,	// (0x00059448) lc0_stat_clock_pane_t1

0x4a1e,	// (0x0004f68a) main_ai5_pane

0xe7ea,	// (0x00059456) ai5_sk_pane_ParamLimits

0xe7ea,	// (0x00059456) ai5_sk_pane

0xe7f7,	// (0x00059463) cell_ai5_widget_pane_ParamLimits

0xe7f7,	// (0x00059463) cell_ai5_widget_pane

0xe8ad,	// (0x00059519) aid_size_cell_widget_grid

0xe8c3,	// (0x0005952f) bg_ai5_widget_pane_ParamLimits

0xe8c3,	// (0x0005952f) bg_ai5_widget_pane

0xe937,	// (0x000595a3) cell_ai5_widget_pane_g2

0xe947,	// (0x000595b3) cell_ai5_widget_pane_g3

0xe95e,	// (0x000595ca) cell_ai5_widget_pane_g4

0xe96a,	// (0x000595d6) cell_ai5_widget_pane_g5

0xe976,	// (0x000595e2) cell_ai5_widget_pane_g6

0xe982,	// (0x000595ee) cell_ai5_widget_pane_g7

0xe9ca,	// (0x00059636) cell_ai5_widget_pane_t1_ParamLimits

0xe9ca,	// (0x00059636) cell_ai5_widget_pane_t1

0xe9e7,	// (0x00059653) cell_ai5_widget_pane_t2_ParamLimits

0xe9e7,	// (0x00059653) cell_ai5_widget_pane_t2

0xe9ff,	// (0x0005966b) cell_ai5_widget_pane_t3_ParamLimits

0xe9ff,	// (0x0005966b) cell_ai5_widget_pane_t3

0xea17,	// (0x00059683) cell_ai5_widget_pane_t4_ParamLimits

0xea17,	// (0x00059683) cell_ai5_widget_pane_t4

0xea34,	// (0x000596a0) cell_ai5_widget_pane_t5_ParamLimits

0xea34,	// (0x000596a0) cell_ai5_widget_pane_t5

0xea53,	// (0x000596bf) cell_ai5_widget_pane_t6_ParamLimits

0xea53,	// (0x000596bf) cell_ai5_widget_pane_t6

0xea65,	// (0x000596d1) cell_ai5_widget_pane_t7_ParamLimits

0xea65,	// (0x000596d1) cell_ai5_widget_pane_t7

0xea7e,	// (0x000596ea) cell_ai5_widget_pane_t8_ParamLimits

0xea7e,	// (0x000596ea) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x0005aab7) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x0005aab7) cell_ai5_widget_pane_t

0xead2,	// (0x0005973e) grid_ai5_widget_pane

0x880f,	// (0x0005347b) highlight_cell_ai5_widget_pane_ParamLimits

0x880f,	// (0x0005347b) highlight_cell_ai5_widget_pane

0xeae9,	// (0x00059755) ai5_sk_left_pane

0xeaf3,	// (0x0005975f) ai5_sk_middle_pane

0xeafd,	// (0x00059769) ai5_sk_right_pane

0xeb07,	// (0x00059773) bg_ai5_widget_pane_g1_ParamLimits

0xeb07,	// (0x00059773) bg_ai5_widget_pane_g1

0xeb13,	// (0x0005977f) bg_ai5_widget_pane_g2_ParamLimits

0xeb13,	// (0x0005977f) bg_ai5_widget_pane_g2

0xeb1f,	// (0x0005978b) bg_ai5_widget_pane_g3_ParamLimits

0xeb1f,	// (0x0005978b) bg_ai5_widget_pane_g3

0xeb2b,	// (0x00059797) bg_ai5_widget_pane_g4_ParamLimits

0xeb2b,	// (0x00059797) bg_ai5_widget_pane_g4

0xeb37,	// (0x000597a3) bg_ai5_widget_pane_g5_ParamLimits

0xeb37,	// (0x000597a3) bg_ai5_widget_pane_g5

0xeb43,	// (0x000597af) bg_ai5_widget_pane_g6_ParamLimits

0xeb43,	// (0x000597af) bg_ai5_widget_pane_g6

0xeb4f,	// (0x000597bb) bg_ai5_widget_pane_g7_ParamLimits

0xeb4f,	// (0x000597bb) bg_ai5_widget_pane_g7

0xeb5b,	// (0x000597c7) bg_ai5_widget_pane_g8_ParamLimits

0xeb5b,	// (0x000597c7) bg_ai5_widget_pane_g8

0xeb67,	// (0x000597d3) bg_ai5_widget_pane_g9_ParamLimits

0xeb67,	// (0x000597d3) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0005aacc) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0005aacc) bg_ai5_widget_pane_g

0xeb99,	// (0x00059805) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb99,	// (0x00059805) cell_shortcut_ai5_widget_pane

0x9499,	// (0x00054105) bg_cell_shortcut_ai5_widget_pane

0xebaa,	// (0x00059816) cell_grid_ai5_widget_pane_g1

0x9499,	// (0x00054105) highlight_cell_shortcut_ai5_widget_pane

0x9ce9,	// (0x00054955) ai5_sk_left_pane_g1

0xebb3,	// (0x0005981f) ai5_sk_left_pane_g2

0xebbb,	// (0x00059827) ai5_sk_left_pane_g3

0xebc3,	// (0x0005982f) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x0005aadf) ai5_sk_left_pane_g

0xebcb,	// (0x00059837) ai5_sk_left_pane_t1

0x9cf1,	// (0x0005495d) ai5_sk_right_pane_g1

0xebd9,	// (0x00059845) ai5_sk_right_pane_g2

0xebe1,	// (0x0005984d) ai5_sk_right_pane_g3

0xebe9,	// (0x00059855) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0005aae8) ai5_sk_right_pane_g

0xebf1,	// (0x0005985d) ai5_sk_right_pane_t1

0x9cf1,	// (0x0005495d) ai5_sk_middle_pane_g1

0x9ce9,	// (0x00054955) ai5_sk_middle_pane_g2

0x9d09,	// (0x00054975) ai5_sk_middle_pane_g3

0xebe1,	// (0x0005984d) ai5_sk_middle_pane_g4

0xebbb,	// (0x00059827) ai5_sk_middle_pane_g5

0xebff,	// (0x0005986b) ai5_sk_middle_pane_g6

0xec07,	// (0x00059873) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005aaf1) ai5_sk_middle_pane_g

0x981d,	// (0x00054489) aid_touch_area_size_lc0_ParamLimits

0x981d,	// (0x00054489) aid_touch_area_size_lc0

0x6a5a,	// (0x000516c6) cell_hwr_candidate_pane_t1_ParamLimits

0x9839,	// (0x000544a5) aid_touch_navi_pane

0x9b0c,	// (0x00054778) status_dt_navi_pane_ParamLimits

0x9b0c,	// (0x00054778) status_dt_navi_pane

0x9b19,	// (0x00054785) status_dt_sta_pane_ParamLimits

0x9b19,	// (0x00054785) status_dt_sta_pane

0xec0f,	// (0x0005987b) dt_sta_controll_pane

0xec1c,	// (0x00059888) dt_sta_indi_pane

0xec2d,	// (0x00059899) dt_sta_title_pane

0x7b20,	// (0x0005278c) bg_dt_sta_indi_pane_ParamLimits

0x7b20,	// (0x0005278c) bg_dt_sta_indi_pane

0xec40,	// (0x000598ac) dt_sta_battery_pane

0xec48,	// (0x000598b4) dt_sta_indi_pane_g1

0xec51,	// (0x000598bd) dt_sta_indi_pane_g2

0xec5a,	// (0x000598c6) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005ab00) dt_sta_indi_pane_g

0xec63,	// (0x000598cf) dt_sta_signal_pane

0x880f,	// (0x0005347b) bg_dt_sta_title_pane_ParamLimits

0x880f,	// (0x0005347b) bg_dt_sta_title_pane

0xec6c,	// (0x000598d8) dt_sta_title_pane_g1

0xec74,	// (0x000598e0) dt_sta_title_pane_t1_ParamLimits

0xec74,	// (0x000598e0) dt_sta_title_pane_t1

0x77a3,	// (0x0005240f) bg_dt_sta_control_pane

0xec89,	// (0x000598f5) dt_sta_controll_pane_g1

0xec92,	// (0x000598fe) bg_dt_sta_title_pane_g1

0xec9b,	// (0x00059907) bg_dt_sta_title_pane_g2

0xeca4,	// (0x00059910) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0005ab07) bg_dt_sta_title_pane_g

0xc2a6,	// (0x00056f12) bg_dt_sta_indi_pane_g1

0xecad,	// (0x00059919) dt_sta_signal_pane_g1

0xecb5,	// (0x00059921) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005ab0e) dt_sta_signal_pane_g

0xecbd,	// (0x00059929) dt_sta_battery_pane_g1

0xecc6,	// (0x00059932) dt_sta_battery_pane_t1

0xc2a6,	// (0x00056f12) bg_dt_sta_control_pane_g1

0x8f98,	// (0x00053c04) fep_china_uni_eep_pane

0x8fa0,	// (0x00053c0c) fep_china_uni_entry_pane_ParamLimits

0x8fb0,	// (0x00053c1c) popup_fep_china_uni_window_g1_ParamLimits

0x8fc0,	// (0x00053c2c) popup_fep_china_uni_window_g2_ParamLimits

0x8fc0,	// (0x00053c2c) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005a38e) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005a38e) popup_fep_china_uni_window_g

0xecd5,	// (0x00059941) fep_china_uni_eep_pane_g1

0xecdd,	// (0x00059949) fep_china_uni_eep_pane_t1

0xe759,	// (0x000593c5) aid_touch_area_size_smil_player

0x9989,	// (0x000545f5) lc0_clock_pane

0x9b70,	// (0x000547dc) status_pane_g5_ParamLimits

0x9b70,	// (0x000547dc) status_pane_g5

0x5be7,	// (0x00050853) popup_keymap_window

0x9b2e,	// (0x0005479a) status_icon_pane

0xe947,	// (0x000595b3) cell_ai5_widget_pane_g3_ParamLimits

0xe95e,	// (0x000595ca) cell_ai5_widget_pane_g4_ParamLimits

0xe96a,	// (0x000595d6) cell_ai5_widget_pane_g5_ParamLimits

0xe98e,	// (0x000595fa) cell_ai5_widget_pane_g8_ParamLimits

0xe98e,	// (0x000595fa) cell_ai5_widget_pane_g8

0xe9a2,	// (0x0005960e) cell_ai5_widget_pane_g9_ParamLimits

0xe9a2,	// (0x0005960e) cell_ai5_widget_pane_g9

0xe9b6,	// (0x00059622) cell_ai5_widget_pane_g10_ParamLimits

0xe9b6,	// (0x00059622) cell_ai5_widget_pane_g10

0xecec,	// (0x00059958) status_icon_pane_g1

0x77a3,	// (0x0005240f) bg_popup_sub_pane_cp13

0xecf4,	// (0x00059960) popup_keymap_window_t1

0x9762,	// (0x000543ce) control_pane_g6_ParamLimits

0x9762,	// (0x000543ce) control_pane_g6

0x976f,	// (0x000543db) control_pane_g7_ParamLimits

0x976f,	// (0x000543db) control_pane_g7

0x977c,	// (0x000543e8) control_pane_g8_ParamLimits

0x977c,	// (0x000543e8) control_pane_g8

0xec0f,	// (0x0005987b) dt_sta_controll_pane_ParamLimits

0xec1c,	// (0x00059888) dt_sta_indi_pane_ParamLimits

0xec2d,	// (0x00059899) dt_sta_title_pane_ParamLimits

0x873b,	// (0x000533a7) aid_size_touch_scroll_bar_cale

0x4af7,	// (0x0004f763) popup_discreet_window_ParamLimits

0x4af7,	// (0x0004f763) popup_discreet_window

0x4b7f,	// (0x0004f7eb) popup_sk_window

0xa35a,	// (0x00054fc6) bg_popup_sub_pane_cp28_ParamLimits

0xa35a,	// (0x00054fc6) bg_popup_sub_pane_cp28

0xed02,	// (0x0005996e) popup_discreet_window_g1_ParamLimits

0xed02,	// (0x0005996e) popup_discreet_window_g1

0xed22,	// (0x0005998e) popup_discreet_window_t1_ParamLimits

0xed22,	// (0x0005998e) popup_discreet_window_t1

0xed40,	// (0x000599ac) popup_discreet_window_t2_ParamLimits

0xed40,	// (0x000599ac) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005ab13) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005ab13) popup_discreet_window_t

0x7444,	// (0x000520b0) popup_sk_window_g1

0x744e,	// (0x000520ba) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0005ab1a) popup_sk_window_g

0x7458,	// (0x000520c4) popup_sk_window_t1

0x7466,	// (0x000520d2) popup_sk_window_t1_copy1

0xe937,	// (0x000595a3) cell_ai5_widget_pane_g2_ParamLimits

0xea90,	// (0x000596fc) cell_ai5_widget_pane_t9_ParamLimits

0xea90,	// (0x000596fc) cell_ai5_widget_pane_t9

0x77a3,	// (0x0005240f) main_fep_fshwr2_pane

0x7474,	// (0x000520e0) aid_fshwr2_btn_pane

0x7480,	// (0x000520ec) aid_fshwr2_syb_pane

0x748c,	// (0x000520f8) aid_fshwr2_txt_pane

0x7498,	// (0x00052104) fshwr2_func_candi_pane

0x74ad,	// (0x00052119) fshwr2_hwr_syb_pane

0x74bd,	// (0x00052129) fshwr2_icf_pane

0x4a1e,	// (0x0004f68a) fshwr2_icf_bg_pane

0x74e6,	// (0x00052152) fshwr2_icf_pane_t1_ParamLimits

0x74e6,	// (0x00052152) fshwr2_icf_pane_t1

0x8e86,	// (0x00053af2) fshwr2_func_candi_pane_g1

0xed92,	// (0x000599fe) fshwr2_func_candi_row_pane_ParamLimits

0xed92,	// (0x000599fe) fshwr2_func_candi_row_pane

0x74fe,	// (0x0005216a) cell_fshwr2_syb_pane_ParamLimits

0x74fe,	// (0x0005216a) cell_fshwr2_syb_pane

0x6a2b,	// (0x00051697) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a2b,	// (0x00051697) fshwr2_hwr_syb_pane_g1

0x4a1e,	// (0x0004f68a) bg_popup_call_pane_cp01

0x7514,	// (0x00052180) fshwr2_func_candi_cell_pane_ParamLimits

0x7514,	// (0x00052180) fshwr2_func_candi_cell_pane

0xeda2,	// (0x00059a0e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda2,	// (0x00059a0e) fshwr2_func_candi_cell_bg_pane

0x7549,	// (0x000521b5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7549,	// (0x000521b5) fshwr2_func_candi_cell_pane_g1

0x7571,	// (0x000521dd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7571,	// (0x000521dd) fshwr2_func_candi_cell_pane_t1

0x4a1e,	// (0x0004f68a) bg_button_pane_cp08

0xedae,	// (0x00059a1a) cell_fshwr2_syb_bg_pane

0x7584,	// (0x000521f0) cell_fshwr2_syb_bg_pane_g1

0x758c,	// (0x000521f8) cell_fshwr2_syb_bg_pane_t1

0x880f,	// (0x0005347b) main_tmo_pane

0xae75,	// (0x00055ae1) uni_indicator_pane_g1_ParamLimits

0xae8b,	// (0x00055af7) uni_indicator_pane_g2_ParamLimits

0xaea1,	// (0x00055b0d) uni_indicator_pane_g3_ParamLimits

0xaeb5,	// (0x00055b21) uni_indicator_pane_g4_ParamLimits

0xaeb5,	// (0x00055b21) uni_indicator_pane_g4

0xaec9,	// (0x00055b35) uni_indicator_pane_g5_ParamLimits

0xaec9,	// (0x00055b35) uni_indicator_pane_g5

0xaec9,	// (0x00055b35) uni_indicator_pane_g6_ParamLimits

0xaec9,	// (0x00055b35) uni_indicator_pane_g6

0xf926,	// (0x0005a592) uni_indicator_pane_g_ParamLimits

0xd7ae,	// (0x0005841a) popup_tmo_note_window_ParamLimits

0xd7ae,	// (0x0005841a) popup_tmo_note_window

0x6cc4,	// (0x00051930) fshwr2_bg_pane

0x7562,	// (0x000521ce) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7562,	// (0x000521ce) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005ab1f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005ab1f) fshwr2_func_candi_cell_pane_g

0x6a13,	// (0x0005167f) bg_popup_window_pane_cp01

0x759b,	// (0x00052207) bg_popup_window_pane_g1_cp01

0xedb6,	// (0x00059a22) bg_popup_window_pane_cp22_ParamLimits

0xedb6,	// (0x00059a22) bg_popup_window_pane_cp22

0xedc4,	// (0x00059a30) listscroll_tmo_link_pane_ParamLimits

0xedc4,	// (0x00059a30) listscroll_tmo_link_pane

0xee04,	// (0x00059a70) popup_tmo_note_window_g1_ParamLimits

0xee04,	// (0x00059a70) popup_tmo_note_window_g1

0xee11,	// (0x00059a7d) tmo_note_info_pane_ParamLimits

0xee11,	// (0x00059a7d) tmo_note_info_pane

0xee2b,	// (0x00059a97) list_tmo_note_info_pane_g1_ParamLimits

0xee2b,	// (0x00059a97) list_tmo_note_info_pane_g1

0xee42,	// (0x00059aae) list_tmo_note_info_pane_g2_ParamLimits

0xee42,	// (0x00059aae) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005ab24) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005ab24) list_tmo_note_info_pane_g

0xee5e,	// (0x00059aca) list_tmo_note_info_text_pane_ParamLimits

0xee5e,	// (0x00059aca) list_tmo_note_info_text_pane

0xeedf,	// (0x00059b4b) list_tmo_link_pane

0xeeec,	// (0x00059b58) scroll_pane_cp20

0xeef9,	// (0x00059b65) list_single_tmo_link_pane_ParamLimits

0xeef9,	// (0x00059b65) list_single_tmo_link_pane

0xef09,	// (0x00059b75) list_single_tmo_link_pane_t1

0xef17,	// (0x00059b83) list_tmo_note_info_text_pane_t1_ParamLimits

0xef17,	// (0x00059b83) list_tmo_note_info_text_pane_t1

0x88bd,	// (0x00053529) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88bd,	// (0x00053529) aid_size_touch_scroll_bar_cp01

0x52ba,	// (0x0004ff26) aid_size_touch_slider_marker

0x4b67,	// (0x0004f7d3) popup_settings_window_ParamLimits

0x4b67,	// (0x0004f7d3) popup_settings_window

0x5a6c,	// (0x000506d8) popup_candi_list_indi_window

0x9839,	// (0x000544a5) aid_touch_navi_pane_ParamLimits

0x6c1f,	// (0x0005188b) rs_clock_indi_pane

0x6c28,	// (0x00051894) sctrl_sk_bottom_pane_ParamLimits

0x6c39,	// (0x000518a5) sctrl_sk_top_pane_ParamLimits

0x6d3c,	// (0x000519a8) popup_fep_tooltip_window

0xe8ad,	// (0x00059519) aid_size_cell_widget_grid_ParamLimits

0xe922,	// (0x0005958e) cell_ai5_widget_pane_g1_ParamLimits

0xe922,	// (0x0005958e) cell_ai5_widget_pane_g1

0xe976,	// (0x000595e2) cell_ai5_widget_pane_g6_ParamLimits

0xe982,	// (0x000595ee) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x0005aaa2) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0005aaa2) cell_ai5_widget_pane_g

0xeab4,	// (0x00059720) cell_ai5_widget_pane_t10_ParamLimits

0xeab4,	// (0x00059720) cell_ai5_widget_pane_t10

0xead2,	// (0x0005973e) grid_ai5_widget_pane_ParamLimits

0xeb73,	// (0x000597df) cell_contacts_ai5_widget_pane_ParamLimits

0xeb73,	// (0x000597df) cell_contacts_ai5_widget_pane

0xed55,	// (0x000599c1) popup_discreet_window_t3_ParamLimits

0xed55,	// (0x000599c1) popup_discreet_window_t3

0x74d2,	// (0x0005213e) popup_fshwr2_char_preview_window_ParamLimits

0x74d2,	// (0x0005213e) popup_fshwr2_char_preview_window

0xee7c,	// (0x00059ae8) tmo_note_info_pane_t1

0xee91,	// (0x00059afd) tmo_note_info_pane_t2

0xeea6,	// (0x00059b12) tmo_note_info_pane_t3

0xeebb,	// (0x00059b27) tmo_note_info_pane_t4

0xeecd,	// (0x00059b39) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0005ab29) tmo_note_info_pane_t

0xeedf,	// (0x00059b4b) list_tmo_link_pane_ParamLimits

0xeeec,	// (0x00059b58) scroll_pane_cp20_ParamLimits

0x4a1e,	// (0x0004f68a) bg_popup_fep_char_preview_window_cp01

0xef30,	// (0x00059b9c) popup_fshwr2_char_preview_window_t1

0xef3e,	// (0x00059baa) popup_candi_list_indi_window_g1

0xef47,	// (0x00059bb3) bg_cell_contacts_ai5_widget_pane

0xef53,	// (0x00059bbf) cell_contacts_ai5_widget_pane_g1

0xc950,	// (0x000575bc) cell_contacts_ai5_widget_pane_g2

0xef68,	// (0x00059bd4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005ab34) cell_contacts_ai5_widget_pane_g

0xef74,	// (0x00059be0) cell_contacts_ai5_widget_pane_t1

0x880f,	// (0x0005347b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefeb,	// (0x00059c57) settings_container_pane

0x9499,	// (0x00054105) listscroll_set_pane_copy1

0xb99b,	// (0x00056607) scroll_pane_cp121_copy1

0xeff7,	// (0x00059c63) set_content_pane_copy1

0xefff,	// (0x00059c6b) aid_height_set_list_copy1_ParamLimits

0xefff,	// (0x00059c6b) aid_height_set_list_copy1

0xb0c1,	// (0x00055d2d) aid_size_parent_copy1_ParamLimits

0xb0c1,	// (0x00055d2d) aid_size_parent_copy1

0xf00b,	// (0x00059c77) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00b,	// (0x00059c77) button_value_adjust_pane_cp6_copy1

0x97d7,	// (0x00054443) list_highlight_pane_cp2_copy1_ParamLimits

0x97d7,	// (0x00054443) list_highlight_pane_cp2_copy1

0xf01f,	// (0x00059c8b) list_set_pane_copy1_ParamLimits

0xf01f,	// (0x00059c8b) list_set_pane_copy1

0xef86,	// (0x00059bf2) main_pane_set_t1_copy1_ParamLimits

0xef86,	// (0x00059bf2) main_pane_set_t1_copy1

0xefc0,	// (0x00059c2c) main_pane_set_t2_copy1_ParamLimits

0xefc0,	// (0x00059c2c) main_pane_set_t2_copy1

0xf0cc,	// (0x00059d38) main_pane_set_t3_copy1

0xf0da,	// (0x00059d46) main_pane_set_t4_copy1

0xefdf,	// (0x00059c4b) set_content_pane_g1_copy1_ParamLimits

0xefdf,	// (0x00059c4b) set_content_pane_g1_copy1

0xf0e8,	// (0x00059d54) setting_code_pane_copy1

0xf0f0,	// (0x00059d5c) setting_slider_graphic_pane_copy1

0xf0f0,	// (0x00059d5c) setting_slider_pane_copy1

0xf0f0,	// (0x00059d5c) setting_text_pane_copy1

0xf0f0,	// (0x00059d5c) setting_volume_pane_copy1

0xf0e8,	// (0x00059d54) settings_code_pane_cp2_copy1

0xf0f8,	// (0x00059d64) settings_code_pane_cp_copy1_ParamLimits

0xf0f8,	// (0x00059d64) settings_code_pane_cp_copy1

0x75a4,	// (0x00052210) volume_set_pane_copy1

0xf10c,	// (0x00059d78) volume_set_pane_g10_copy1

0xf114,	// (0x00059d80) volume_set_pane_g1_copy1

0xf11c,	// (0x00059d88) volume_set_pane_g2_copy1

0xf124,	// (0x00059d90) volume_set_pane_g3_copy1

0xf12c,	// (0x00059d98) volume_set_pane_g4_copy1

0xf134,	// (0x00059da0) volume_set_pane_g5_copy1

0xf13c,	// (0x00059da8) volume_set_pane_g6_copy1

0xf144,	// (0x00059db0) volume_set_pane_g7_copy1

0xf14c,	// (0x00059db8) volume_set_pane_g8_copy1

0xf154,	// (0x00059dc0) volume_set_pane_g9_copy1

0x7897,	// (0x00052503) bg_set_opt_pane_cp_copy1_ParamLimits

0x7897,	// (0x00052503) bg_set_opt_pane_cp_copy1

0x75ac,	// (0x00052218) setting_slider_pane_t1_copy1_ParamLimits

0x75ac,	// (0x00052218) setting_slider_pane_t1_copy1

0x75ca,	// (0x00052236) setting_slider_pane_t2_copy1_ParamLimits

0x75ca,	// (0x00052236) setting_slider_pane_t2_copy1

0x75e4,	// (0x00052250) setting_slider_pane_t3_copy1_ParamLimits

0x75e4,	// (0x00052250) setting_slider_pane_t3_copy1

0x75fc,	// (0x00052268) slider_set_pane_copy1_ParamLimits

0x75fc,	// (0x00052268) slider_set_pane_copy1

0x885e,	// (0x000534ca) set_opt_bg_pane_g1_copy2

0x8866,	// (0x000534d2) set_opt_bg_pane_g2_copy2

0xf15c,	// (0x00059dc8) set_opt_bg_pane_g3_copy2

0x8876,	// (0x000534e2) set_opt_bg_pane_g4_copy2

0x887e,	// (0x000534ea) set_opt_bg_pane_g5_copy2

0x8886,	// (0x000534f2) set_opt_bg_pane_g6_copy2

0xf166,	// (0x00059dd2) set_opt_bg_pane_g7_copy2

0xf16e,	// (0x00059dda) set_opt_bg_pane_g8_copy2

0xf178,	// (0x00059de4) set_opt_bg_pane_g9_copy2

0x7612,	// (0x0005227e) aid_size_touch_slider_mark_copy1_ParamLimits

0x7612,	// (0x0005227e) aid_size_touch_slider_mark_copy1

0xf182,	// (0x00059dee) slider_set_pane_g1_copy1

0x7626,	// (0x00052292) slider_set_pane_g2_copy1

0x643f,	// (0x000510ab) slider_set_pane_g3_copy1_ParamLimits

0x643f,	// (0x000510ab) slider_set_pane_g3_copy1

0x6453,	// (0x000510bf) slider_set_pane_g4_copy1_ParamLimits

0x6453,	// (0x000510bf) slider_set_pane_g4_copy1

0x646b,	// (0x000510d7) slider_set_pane_g5_copy1_ParamLimits

0x646b,	// (0x000510d7) slider_set_pane_g5_copy1

0x643f,	// (0x000510ab) slider_set_pane_g6_copy1_ParamLimits

0x643f,	// (0x000510ab) slider_set_pane_g6_copy1

0x762e,	// (0x0005229a) slider_set_pane_g7_copy1_ParamLimits

0x762e,	// (0x0005229a) slider_set_pane_g7_copy1

0x77b7,	// (0x00052423) bg_set_opt_pane_cp2_copy1

0xf18b,	// (0x00059df7) setting_slider_graphic_pane_g1_copy1

0xf194,	// (0x00059e00) setting_slider_graphic_pane_t1_copy1

0xf1a4,	// (0x00059e10) setting_slider_graphic_pane_t2_copy1

0xf1b4,	// (0x00059e20) slider_set_pane_cp_copy1

0xf1c4,	// (0x00059e30) input_focus_pane_cp1_copy1

0xf1cd,	// (0x00059e39) list_set_text_pane_copy1

0xf1d5,	// (0x00059e41) setting_text_pane_g1_copy1

0x3e44,	// (0x0004eab0) set_text_pane_t1_copy1

0xf1c4,	// (0x00059e30) input_focus_pane_cp2_copy1

0xf1d5,	// (0x00059e41) setting_code_pane_g1_copy1

0xf1de,	// (0x00059e4a) setting_code_pane_t1_copy1

0xf1ec,	// (0x00059e58) list_set_graphic_pane_copy1

0x77b7,	// (0x00052423) bg_set_opt_pane_cp4_copy1

0x9194,	// (0x00053e00) list_set_graphic_pane_g1_copy1_ParamLimits

0x9194,	// (0x00053e00) list_set_graphic_pane_g1_copy1

0xf1fe,	// (0x00059e6a) list_set_graphic_pane_g2_copy1

0x91ac,	// (0x00053e18) list_set_graphic_pane_t1_copy1_ParamLimits

0x91ac,	// (0x00053e18) list_set_graphic_pane_t1_copy1

0xc2a6,	// (0x00056f12) rs_clock_indi_pane_g1

0xf206,	// (0x00059e72) rs_clock_indi_pane_t1

0xf214,	// (0x00059e80) rs_indi_pane

0xf21c,	// (0x00059e88) rs_indi_pane_g1

0xf225,	// (0x00059e91) rs_indi_pane_g2

0xf22e,	// (0x00059e9a) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005ab3b) rs_indi_pane_g

0x9499,	// (0x00054105) bg_popup_preview_window_pane_cp03

0xf237,	// (0x00059ea3) popup_fep_tooltip_window_t1

0xcf2e,	// (0x00057b9a) popup_note2_window_g2_ParamLimits

0xcf2e,	// (0x00057b9a) popup_note2_window_g2

0x0001,

0xfc68,	// (0x0005a8d4) popup_note2_window_g_ParamLimits

0xfc68,	// (0x0005a8d4) popup_note2_window_g

0xd44a,	// (0x000580b6) bg_popup_sub_pane_cp11_ParamLimits

0xd457,	// (0x000580c3) cell_ai3_links_pane_g1_ParamLimits

0xd46e,	// (0x000580da) cell_ai3_links_pane_t1

0x3e44,	// (0x0004eab0) set_text_pane_t1_copy1_ParamLimits

0x93aa,	// (0x00054016) cell_graphic_popup_pane_cp2_ParamLimits

0x93aa,	// (0x00054016) cell_graphic_popup_pane_cp2

0xf245,	// (0x00059eb1) cell_graphic_popup_pane_g1_cp2

0x854e,	// (0x000531ba) cell_graphic_popup_pane_g2_cp2

0xf24d,	// (0x00059eb9) cell_graphic_popup_pane_g3_cp2

0xf255,	// (0x00059ec1) cell_graphic_popup_pane_t2_cp2

0x855f,	// (0x000531cb) grid_highlight_pane_cp3_cp2

0x8ba3,	// (0x0005380f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x880f,	// (0x0005347b) main_tmo_pane_ParamLimits

0xd7a2,	// (0x0005840e) popup_tmo_big_image_note_window

0xe911,	// (0x0005957d) cell_ai5_widget_list_pane

0xe919,	// (0x00059585) cell_ai5_widget_lrg_icon_pane

0xee7c,	// (0x00059ae8) tmo_note_info_pane_t1_ParamLimits

0xee91,	// (0x00059afd) tmo_note_info_pane_t2_ParamLimits

0xeea6,	// (0x00059b12) tmo_note_info_pane_t3_ParamLimits

0xeebb,	// (0x00059b27) tmo_note_info_pane_t4_ParamLimits

0xeecd,	// (0x00059b39) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0005ab29) tmo_note_info_pane_t_ParamLimits

0xefeb,	// (0x00059c57) settings_container_pane_ParamLimits

0xf1bc,	// (0x00059e28) indicator_popup_pane_cp5

0xf1bc,	// (0x00059e28) indicator_popup_pane_cp6

0xf1ec,	// (0x00059e58) list_set_graphic_pane_copy1_ParamLimits

0x77a3,	// (0x0005240f) bg_popup_window_pane_cp23

0xf263,	// (0x00059ecf) popup_tmo_big_image_note_window_g1

0xf26d,	// (0x00059ed9) popup_tmo_big_image_note_window_t1

0xf27d,	// (0x00059ee9) popup_tmo_big_image_note_window_t2

0xf28d,	// (0x00059ef9) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005ab42) popup_tmo_big_image_note_window_t

0xc2a6,	// (0x00056f12) cell_ai5_widget_lrg_icon_pane_g1

0xf29d,	// (0x00059f09) cell_ai5_widget_lrg_icon_pane_t1

0xf2ab,	// (0x00059f17) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ab,	// (0x00059f17) cell_ai5_widget_list_row_pane

0xf2c2,	// (0x00059f2e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c2,	// (0x00059f2e) cell_ai5_widget_list_row_pane_g1

0xf2cf,	// (0x00059f3b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cf,	// (0x00059f3b) cell_ai5_widget_list_row_pane_t1

0xf300,	// (0x00059f6c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf300,	// (0x00059f6c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005ab49) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005ab49) cell_ai5_widget_list_row_pane_t

0x4a1e,	// (0x0004f68a) main_fep_vtchi_ss_pane

0xf344,	// (0x00059fb0) popup_fep_char_pre_window

0xf34c,	// (0x00059fb8) popup_fep_ituss_window

0xf36d,	// (0x00059fd9) popup_fep_vkbss_window

0xf38c,	// (0x00059ff8) grid_vkbss_keypad_pane_ParamLimits

0xf38c,	// (0x00059ff8) grid_vkbss_keypad_pane

0xf39c,	// (0x0005a008) ituss_keypad_pane

0x7650,	// (0x000522bc) aid_vkbss_key_offset_ParamLimits

0x7650,	// (0x000522bc) aid_vkbss_key_offset

0x765c,	// (0x000522c8) cell_vkbss_key_pane_ParamLimits

0x765c,	// (0x000522c8) cell_vkbss_key_pane

0xf3ab,	// (0x0005a017) bg_cell_vkbss_key_g1_ParamLimits

0xf3ab,	// (0x0005a017) bg_cell_vkbss_key_g1

0xf3b7,	// (0x0005a023) cell_vkbss_key_3p_pane_ParamLimits

0xf3b7,	// (0x0005a023) cell_vkbss_key_3p_pane

0xf3d1,	// (0x0005a03d) cell_vkbss_key_g1_ParamLimits

0xf3d1,	// (0x0005a03d) cell_vkbss_key_g1

0xf3eb,	// (0x0005a057) cell_vkbss_key_t1_ParamLimits

0xf3eb,	// (0x0005a057) cell_vkbss_key_t1

0x7672,	// (0x000522de) cell_ituss_key_pane_ParamLimits

0x7672,	// (0x000522de) cell_ituss_key_pane

0xf416,	// (0x0005a082) bg_cell_ituss_key_g1_ParamLimits

0xf416,	// (0x0005a082) bg_cell_ituss_key_g1

0xf422,	// (0x0005a08e) cell_ituss_key_pane_g1_ParamLimits

0xf422,	// (0x0005a08e) cell_ituss_key_pane_g1

0x7683,	// (0x000522ef) cell_ituss_key_pane_g2_ParamLimits

0x7683,	// (0x000522ef) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005ab50) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005ab50) cell_ituss_key_pane_g

0x76af,	// (0x0005231b) cell_ituss_key_t1_ParamLimits

0x76af,	// (0x0005231b) cell_ituss_key_t1

0x76e9,	// (0x00052355) cell_ituss_key_t2_ParamLimits

0x76e9,	// (0x00052355) cell_ituss_key_t2

0x771a,	// (0x00052386) cell_ituss_key_t3_ParamLimits

0x771a,	// (0x00052386) cell_ituss_key_t3

0x76e9,	// (0x00052355) cell_ituss_key_t4_ParamLimits

0x76e9,	// (0x00052355) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005ab57) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005ab57) cell_ituss_key_t

0xf44e,	// (0x0005a0ba) cell_vkbss_key_3p_pane_g1

0xf456,	// (0x0005a0c2) cell_vkbss_key_3p_pane_g2

0xf45e,	// (0x0005a0ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005ab62) cell_vkbss_key_3p_pane_g

0x4a1e,	// (0x0004f68a) bg_popup_fep_char_preview_window_cp02

0x775d,	// (0x000523c9) popup_fep_char_pre_window_t1

0xe8a3,	// (0x0005950f) main_ai5_sk_pane

0xef47,	// (0x00059bb3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef53,	// (0x00059bbf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc950,	// (0x000575bc) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef68,	// (0x00059bd4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005ab34) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef74,	// (0x00059be0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x880f,	// (0x0005347b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf466,	// (0x0005a0d2) main_ai5_sk_pane_g1

0xa193,	// (0x00054dff) popup_query_code_window_g1

0xf362,	// (0x00059fce) popup_fep_vkb_icf_pane

0xf376,	// (0x00059fe2) popup_fep_vtchi_icf_pane

0xf46f,	// (0x0005a0db) bg_icf_pane

0xf47b,	// (0x0005a0e7) list_vkb_icf_pane

0xf487,	// (0x0005a0f3) bg_icf_pane_cp01

0xf49a,	// (0x0005a106) vtchi_icf_list_pane

0xf4aa,	// (0x0005a116) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0005a116) list_vkb_icf_pane_t1

0xf4c0,	// (0x0005a12c) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0005a12c) vtchi_icf_list_pane_t1

0xf34c,	// (0x00059fb8) popup_fep_ituss_window_ParamLimits

0xf376,	// (0x00059fe2) popup_fep_vtchi_icf_pane_ParamLimits

0xf39c,	// (0x0005a008) ituss_keypad_pane_ParamLimits

0x7644,	// (0x000522b0) ituss_sks_pane

0xf46f,	// (0x0005a0db) bg_icf_pane_ParamLimits

0xf328,	// (0x00059f94) icf_edit_indi_pane_ParamLimits

0xf328,	// (0x00059f94) icf_edit_indi_pane

0xf47b,	// (0x0005a0e7) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0005a0f3) bg_icf_pane_cp01_ParamLimits

0xf337,	// (0x00059fa3) icf_edit_indi_pane_cp01_ParamLimits

0xf337,	// (0x00059fa3) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0005a10e) vtchi_query_pane

0xc524,	// (0x00057190) icf_edit_indi_pane_g1_ParamLimits

0xc524,	// (0x00057190) icf_edit_indi_pane_g1

0xf531,	// (0x0005a19d) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0005a19d) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005ab7a) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005ab7a) icf_edit_indi_pane_g

0xf540,	// (0x0005a1ac) icf_edit_indi_pane_t1

0xf4da,	// (0x0005a146) bg_input_focus_pane_cp042

0x8732,	// (0x0005339e) vtchi_button_pane

0xf4e3,	// (0x0005a14f) vtchi_query_pane_t1

0xf4f1,	// (0x0005a15d) vtchi_query_pane_t2

0xf4ff,	// (0x0005a16b) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005ab69) vtchi_query_pane_t

0x4a1e,	// (0x0004f68a) bg_button_pane_cp13

0xf50d,	// (0x0005a179) vtchi_button_pane_g1

0x776c,	// (0x000523d8) ituss_sks_pane_g1

0x7777,	// (0x000523e3) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005ab70) ituss_sks_pane_g

0xf515,	// (0x0005a181) ituss_sks_pane_t1

0xf523,	// (0x0005a18f) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005ab75) ituss_sks_pane_t

0xbd15,	// (0x00056981) indicator_nsta_pane_cp_g1

0xbd1e,	// (0x0005698a) indicator_nsta_pane_cp_g2

0xbd26,	// (0x00056992) indicator_nsta_pane_cp_g3

0xbd2e,	// (0x0005699a) indicator_nsta_pane_cp_g4

0xbd36,	// (0x000569a2) indicator_nsta_pane_cp_g5

0xbd36,	// (0x000569a2) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0005a712) indicator_nsta_pane_cp_g

0xe489,	// (0x000590f5) cell_graphic2_pane_t2_ParamLimits

0xe489,	// (0x000590f5) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0005aa2b) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0005aa2b) cell_graphic2_pane_t

0xe4b6,	// (0x00059122) cell_graphic2_control_pane_t1

0x8f47,	// (0x00053bb3) signal_pane_g3_ParamLimits

0x8f47,	// (0x00053bb3) signal_pane_g3

0x8f59,	// (0x00053bc5) signal_pane_g4_ParamLimits

0x8f59,	// (0x00053bc5) signal_pane_g4

0xf312,	// (0x00059f7e) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf312,	// (0x00059f7e) cell_ai5_widget_list_row_pane_t3

0xf43c,	// (0x0005a0a8) cell_ituss_key_pane_t1_ParamLimits

0xf43c,	// (0x0005a0a8) cell_ituss_key_pane_t1

0x9de6,	// (0x00054a52) form_field_data_wide_pane_vc_t2_ParamLimits

0x9de6,	// (0x00054a52) form_field_data_wide_pane_vc_t2

0x9dfa,	// (0x00054a66) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dfa,	// (0x00054a66) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0005a47a) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0005a47a) form_field_data_wide_pane_vc_t

0xb9dd,	// (0x00056649) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9dd,	// (0x00056649) form_field_slider_wide_pane_vc_t3

0xbabb,	// (0x00056727) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbabb,	// (0x00056727) form_field_popup_wide_pane_vc_t2

0xbad2,	// (0x0005673e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbad2,	// (0x0005673e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0005a701) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0005a701) form_field_popup_wide_pane_vc_t

0x7474,	// (0x000520e0) aid_fshwr2_btn_pane_ParamLimits

0x7480,	// (0x000520ec) aid_fshwr2_syb_pane_ParamLimits

0x748c,	// (0x000520f8) aid_fshwr2_txt_pane_ParamLimits

0x6cc4,	// (0x00051930) fshwr2_bg_pane_ParamLimits

0x7498,	// (0x00052104) fshwr2_func_candi_pane_ParamLimits

0x74ad,	// (0x00052119) fshwr2_hwr_syb_pane_ParamLimits

0x74bd,	// (0x00052129) fshwr2_icf_pane_ParamLimits

0x7ed8,	// (0x00052b44) list_double_graphic_pane_vc_g4_ParamLimits

0x7ed8,	// (0x00052b44) list_double_graphic_pane_vc_g4

0x76a3,	// (0x0005230f) cell_ituss_key_pane_g3_ParamLimits

0x76a3,	// (0x0005230f) cell_ituss_key_pane_g3

0x774b,	// (0x000523b7) cell_ituss_key_t5_ParamLimits

0x774b,	// (0x000523b7) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

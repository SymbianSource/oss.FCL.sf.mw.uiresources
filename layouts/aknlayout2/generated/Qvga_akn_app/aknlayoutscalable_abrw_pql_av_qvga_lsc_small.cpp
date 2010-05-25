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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001fc6f };

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
0xe940,	// (0x0002e5af) Screen

0xe94a,	// (0x0002e5b9) application_window_ParamLimits

0xe94a,	// (0x0002e5b9) application_window

0x2523,	// (0x00022192) screen_g1

0xd100,	// (0x0002cd6f) area_bottom_pane_ParamLimits

0xd100,	// (0x0002cd6f) area_bottom_pane

0x628b,	// (0x00025efa) area_top_pane_ParamLimits

0x628b,	// (0x00025efa) area_top_pane

0x631f,	// (0x00025f8e) main_pane_ParamLimits

0x631f,	// (0x00025f8e) main_pane

0x252d,	// (0x0002219c) misc_graphics

0x03e3,	// (0x00020052) battery_pane_ParamLimits

0x03e3,	// (0x00020052) battery_pane

0x4083,	// (0x00023cf2) bg_status_flat_pane_g8

0x408b,	// (0x00023cfa) bg_status_flat_pane_g9

0x37f6,	// (0x00023465) context_pane_ParamLimits

0x37f6,	// (0x00023465) context_pane

0x054c,	// (0x000201bb) navi_pane_ParamLimits

0x054c,	// (0x000201bb) navi_pane

0x05c2,	// (0x00020231) signal_pane_ParamLimits

0x05c2,	// (0x00020231) signal_pane

0x0008,

0xf874,	// (0x0002f4e3) bg_status_flat_pane_g

0x064e,	// (0x000202bd) status_pane_g1_ParamLimits

0x064e,	// (0x000202bd) status_pane_g1

0x0664,	// (0x000202d3) status_pane_g2_ParamLimits

0x0664,	// (0x000202d3) status_pane_g2

0x387b,	// (0x000234ea) status_pane_g3_ParamLimits

0x387b,	// (0x000234ea) status_pane_g3

0x0004,

0xf7a0,	// (0x0002f40f) status_pane_g_ParamLimits

0xf7a0,	// (0x0002f40f) status_pane_g

0x0670,	// (0x000202df) title_pane_ParamLimits

0x0670,	// (0x000202df) title_pane

0x06cb,	// (0x0002033a) uni_indicator_pane_ParamLimits

0x06cb,	// (0x0002033a) uni_indicator_pane

0x373b,	// (0x000233aa) bg_list_pane_ParamLimits

0x373b,	// (0x000233aa) bg_list_pane

0xf546,	// (0x0002f1b5) find_pane

0xd475,	// (0x0002d0e4) listscroll_app_pane_ParamLimits

0xd475,	// (0x0002d0e4) listscroll_app_pane

0x375b,	// (0x000233ca) listscroll_form_pane

0xd485,	// (0x0002d0f4) listscroll_gen_pane_ParamLimits

0xd485,	// (0x0002d0f4) listscroll_gen_pane

0x7124,	// (0x00026d93) listscroll_set_pane

0x47cf,	// (0x0002443e) main_idle_act_pane

0x35c2,	// (0x00023231) main_idle_trad_pane

0x35c2,	// (0x00023231) main_list_empty_pane

0x2cad,	// (0x0002291c) main_midp_pane

0x3775,	// (0x000233e4) main_pane_g1_ParamLimits

0x3775,	// (0x000233e4) main_pane_g1

0xd499,	// (0x0002d108) popup_ai_message_window_ParamLimits

0xd499,	// (0x0002d108) popup_ai_message_window

0xd51e,	// (0x0002d18d) popup_fep_china_uni_window_ParamLimits

0xd51e,	// (0x0002d18d) popup_fep_china_uni_window

0x720e,	// (0x00026e7d) popup_fep_japan_candidate_window_ParamLimits

0x720e,	// (0x00026e7d) popup_fep_japan_candidate_window

0x722c,	// (0x00026e9b) popup_fep_japan_predictive_window_ParamLimits

0x722c,	// (0x00026e9b) popup_fep_japan_predictive_window

0xd55c,	// (0x0002d1cb) popup_find_window

0xd575,	// (0x0002d1e4) popup_grid_graphic_window_ParamLimits

0xd575,	// (0x0002d1e4) popup_grid_graphic_window

0x728b,	// (0x00026efa) popup_large_graphic_colour_window

0xd5f1,	// (0x0002d260) popup_menu_window_ParamLimits

0xd5f1,	// (0x0002d260) popup_menu_window

0xd74f,	// (0x0002d3be) popup_note_image_window

0xd717,	// (0x0002d386) popup_note_wait_window_ParamLimits

0xd717,	// (0x0002d386) popup_note_wait_window

0xd765,	// (0x0002d3d4) popup_note_window_ParamLimits

0xd765,	// (0x0002d3d4) popup_note_window

0xd7f9,	// (0x0002d468) popup_query_code_window_ParamLimits

0xd7f9,	// (0x0002d468) popup_query_code_window

0x745d,	// (0x000270cc) popup_query_data_code_window_ParamLimits

0x745d,	// (0x000270cc) popup_query_data_code_window

0xd831,	// (0x0002d4a0) popup_query_data_window_ParamLimits

0xd831,	// (0x0002d4a0) popup_query_data_window

0xd8a5,	// (0x0002d514) popup_query_sat_info_window_ParamLimits

0xd8a5,	// (0x0002d514) popup_query_sat_info_window

0xd932,	// (0x0002d5a1) popup_snote_single_graphic_window_ParamLimits

0xd932,	// (0x0002d5a1) popup_snote_single_graphic_window

0xd932,	// (0x0002d5a1) popup_snote_single_text_window_ParamLimits

0xd932,	// (0x0002d5a1) popup_snote_single_text_window

0x74cc,	// (0x0002713b) popup_sub_window_general

0x75da,	// (0x00027249) popup_window_general_ParamLimits

0x75da,	// (0x00027249) popup_window_general

0x3783,	// (0x000233f2) power_save_pane

0xd309,	// (0x0002cf78) control_pane_g1_ParamLimits

0xd309,	// (0x0002cf78) control_pane_g1

0xd330,	// (0x0002cf9f) control_pane_g2_ParamLimits

0xd330,	// (0x0002cf9f) control_pane_g2

0x3725,	// (0x00023394) control_pane_g3_ParamLimits

0x3725,	// (0x00023394) control_pane_g3

0x0007,

0xf788,	// (0x0002f3f7) control_pane_g_ParamLimits

0xf788,	// (0x0002f3f7) control_pane_g

0xd36b,	// (0x0002cfda) control_pane_t1_ParamLimits

0xd36b,	// (0x0002cfda) control_pane_t1

0xd3ce,	// (0x0002d03d) control_pane_t2_ParamLimits

0xd3ce,	// (0x0002d03d) control_pane_t2

0x0002,

0xf799,	// (0x0002f408) control_pane_t_ParamLimits

0xf799,	// (0x0002f408) control_pane_t

0xf47a,	// (0x0002f0e9) navi_navi_volume_pane_cp1

0xf482,	// (0x0002f0f1) status_small_icon_pane

0x36f1,	// (0x00023360) status_small_pane_g1_ParamLimits

0x36f1,	// (0x00023360) status_small_pane_g1

0xf48a,	// (0x0002f0f9) status_small_pane_g2_ParamLimits

0xf48a,	// (0x0002f0f9) status_small_pane_g2

0xf496,	// (0x0002f105) status_small_pane_g3_ParamLimits

0xf496,	// (0x0002f105) status_small_pane_g3

0xf4a2,	// (0x0002f111) status_small_pane_g4_ParamLimits

0xf4a2,	// (0x0002f111) status_small_pane_g4

0xf4ae,	// (0x0002f11d) status_small_pane_g5_ParamLimits

0xf4ae,	// (0x0002f11d) status_small_pane_g5

0xf4ba,	// (0x0002f129) status_small_pane_g6_ParamLimits

0xf4ba,	// (0x0002f129) status_small_pane_g6

0x0007,

0xf777,	// (0x0002f3e6) status_small_pane_g_ParamLimits

0xf777,	// (0x0002f3e6) status_small_pane_g

0xf4e9,	// (0x0002f158) status_small_pane_t1

0xf50b,	// (0x0002f17a) status_small_wait_pane_ParamLimits

0xf50b,	// (0x0002f17a) status_small_wait_pane

0xf353,	// (0x0002efc2) aid_levels_signal_ParamLimits

0xf353,	// (0x0002efc2) aid_levels_signal

0xf36b,	// (0x0002efda) signal_pane_g1_ParamLimits

0xf36b,	// (0x0002efda) signal_pane_g1

0xf386,	// (0x0002eff5) signal_pane_g2_ParamLimits

0xf386,	// (0x0002eff5) signal_pane_g2

0x0003,

0xf708,	// (0x0002f377) signal_pane_g_ParamLimits

0xf708,	// (0x0002f377) signal_pane_g

0x30d0,	// (0x00022d3f) context_pane_g1

0xeed9,	// (0x0002eb48) title_pane_g1

0xef10,	// (0x0002eb7f) title_pane_t1

0x2543,	// (0x000221b2) title_pane_t2

0x2569,	// (0x000221d8) title_pane_t3

0x0002,

0xf557,	// (0x0002f1c6) title_pane_t

0x06f1,	// (0x00020360) aid_levels_battery_ParamLimits

0x06f1,	// (0x00020360) aid_levels_battery

0x070d,	// (0x0002037c) battery_pane_g1_ParamLimits

0x070d,	// (0x0002037c) battery_pane_g1

0x072a,	// (0x00020399) battery_pane_g2_ParamLimits

0x072a,	// (0x00020399) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002f41a) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002f41a) battery_pane_g

0x0945,	// (0x000205b4) uni_indicator_pane_g1

0x095b,	// (0x000205ca) uni_indicator_pane_g2

0x0971,	// (0x000205e0) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002f58b) uni_indicator_pane_g

0x3436,	// (0x000230a5) navi_icon_pane_ParamLimits

0x3436,	// (0x000230a5) navi_icon_pane

0x3385,	// (0x00022ff4) navi_midp_pane

0x3452,	// (0x000230c1) navi_navi_pane

0x345c,	// (0x000230cb) navi_text_pane_ParamLimits

0x345c,	// (0x000230cb) navi_text_pane

0x2523,	// (0x00022192) status_small_wait_pane_g1

0x2860,	// (0x000224cf) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002f586) status_small_wait_pane_g

0x4624,	// (0x00024293) navi_navi_icon_text_pane

0x463e,	// (0x000242ad) navi_navi_pane_g1_ParamLimits

0x463e,	// (0x000242ad) navi_navi_pane_g1

0x462c,	// (0x0002429b) navi_navi_pane_g2_ParamLimits

0x462c,	// (0x0002429b) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002f554) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002f554) navi_navi_pane_g

0x4650,	// (0x000242bf) navi_navi_tabs_pane

0x4659,	// (0x000242c8) navi_navi_text_pane

0x4624,	// (0x00024293) navi_navi_volume_pane

0x4600,	// (0x0002426f) navi_text_pane_t1

0x45f4,	// (0x00024263) navi_icon_pane_g1

0x4549,	// (0x000241b8) navi_navi_text_pane_t1

0x7cb5,	// (0x00027924) navi_navi_volume_pane_g1

0x7cbd,	// (0x0002792c) volume_small_pane

0x4527,	// (0x00024196) navi_navi_icon_text_pane_g1

0x452f,	// (0x0002419e) navi_navi_icon_text_pane_t1

0x3452,	// (0x000230c1) navi_tabs_2_long_pane

0x3452,	// (0x000230c1) navi_tabs_2_pane

0x3452,	// (0x000230c1) navi_tabs_3_long_pane

0x3452,	// (0x000230c1) navi_tabs_3_pane

0x3452,	// (0x000230c1) navi_tabs_4_pane

0x7c1d,	// (0x0002788c) tabs_2_active_pane_ParamLimits

0x7c1d,	// (0x0002788c) tabs_2_active_pane

0x7c2d,	// (0x0002789c) tabs_2_passive_pane_ParamLimits

0x7c2d,	// (0x0002789c) tabs_2_passive_pane

0x7beb,	// (0x0002785a) tabs_3_active_pane_ParamLimits

0x7beb,	// (0x0002785a) tabs_3_active_pane

0x7bfb,	// (0x0002786a) tabs_3_passive_pane_ParamLimits

0x7bfb,	// (0x0002786a) tabs_3_passive_pane

0x7c0c,	// (0x0002787b) tabs_3_passive_pane_cp_ParamLimits

0x7c0c,	// (0x0002787b) tabs_3_passive_pane_cp

0x7ba7,	// (0x00027816) tabs_4_active_pane_ParamLimits

0x7ba7,	// (0x00027816) tabs_4_active_pane

0x7bb8,	// (0x00027827) tabs_4_passive_pane_ParamLimits

0x7bb8,	// (0x00027827) tabs_4_passive_pane

0x7bc9,	// (0x00027838) tabs_4_passive_pane_cp_ParamLimits

0x7bc9,	// (0x00027838) tabs_4_passive_pane_cp

0x7bda,	// (0x00027849) tabs_4_passive_pane_cp2_ParamLimits

0x7bda,	// (0x00027849) tabs_4_passive_pane_cp2

0x7b87,	// (0x000277f6) tabs_2_long_active_pane_ParamLimits

0x7b87,	// (0x000277f6) tabs_2_long_active_pane

0x7b97,	// (0x00027806) tabs_2_long_passive_pane_ParamLimits

0x7b97,	// (0x00027806) tabs_2_long_passive_pane

0x7b54,	// (0x000277c3) tabs_3_long_active_pane_ParamLimits

0x7b54,	// (0x000277c3) tabs_3_long_active_pane

0x7b65,	// (0x000277d4) tabs_3_long_passive_pane_ParamLimits

0x7b65,	// (0x000277d4) tabs_3_long_passive_pane

0x7b76,	// (0x000277e5) tabs_3_long_passive_pane_cp_ParamLimits

0x7b76,	// (0x000277e5) tabs_3_long_passive_pane_cp

0x7afa,	// (0x00027769) volume_small_pane_g1

0x7b03,	// (0x00027772) volume_small_pane_g2

0x7b0c,	// (0x0002777b) volume_small_pane_g3

0x7b15,	// (0x00027784) volume_small_pane_g4

0x7b1e,	// (0x0002778d) volume_small_pane_g5

0x7b27,	// (0x00027796) volume_small_pane_g6

0x7b30,	// (0x0002779f) volume_small_pane_g7

0x7b39,	// (0x000277a8) volume_small_pane_g8

0x7b42,	// (0x000277b1) volume_small_pane_g9

0x7b4b,	// (0x000277ba) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002f520) volume_small_pane_g

0x257b,	// (0x000221ea) bg_active_tab_pane_cp2_ParamLimits

0x257b,	// (0x000221ea) bg_active_tab_pane_cp2

0x2589,	// (0x000221f8) tabs_3_active_pane_g1

0xef9c,	// (0x0002ec0b) tabs_3_active_pane_t1

0x257b,	// (0x000221ea) bg_passive_tab_pane_cp2_ParamLimits

0x257b,	// (0x000221ea) bg_passive_tab_pane_cp2

0x2589,	// (0x000221f8) tabs_3_passive_pane_g1

0xef9c,	// (0x0002ec0b) tabs_3_passive_pane_t1

0x257b,	// (0x000221ea) bg_active_tab_pane_cp3_ParamLimits

0x257b,	// (0x000221ea) bg_active_tab_pane_cp3

0x2591,	// (0x00022200) tabs_4_active_pane_g1

0xefae,	// (0x0002ec1d) tabs_4_active_pane_t1

0x257b,	// (0x000221ea) bg_passive_tab_pane_cp3_ParamLimits

0x257b,	// (0x000221ea) bg_passive_tab_pane_cp3

0x2591,	// (0x00022200) tabs_4_1_passive_pane_g1

0xefae,	// (0x0002ec1d) tabs_4_1_passive_pane_t1

0x2cad,	// (0x0002291c) list_highlight_pane_cp2

0x0a5f,	// (0x000206ce) list_set_pane_ParamLimits

0x0a5f,	// (0x000206ce) list_set_pane

0x0aed,	// (0x0002075c) main_pane_set_t1_ParamLimits

0x0aed,	// (0x0002075c) main_pane_set_t1

0x0b0d,	// (0x0002077c) main_pane_set_t2_ParamLimits

0x0b0d,	// (0x0002077c) main_pane_set_t2

0x0b21,	// (0x00020790) main_pane_set_t3_ParamLimits

0x0b21,	// (0x00020790) main_pane_set_t3

0x0b33,	// (0x000207a2) main_pane_set_t4_ParamLimits

0x0b33,	// (0x000207a2) main_pane_set_t4

0x0003,

0xf981,	// (0x0002f5f0) main_pane_set_t_ParamLimits

0xf981,	// (0x0002f5f0) main_pane_set_t

0x0b45,	// (0x000207b4) setting_code_pane

0x0b4d,	// (0x000207bc) setting_slider_graphic_pane

0x0b4d,	// (0x000207bc) setting_slider_pane

0x0b4d,	// (0x000207bc) setting_text_pane

0x0b4d,	// (0x000207bc) setting_volume_pane

0xd2aa,	// (0x0002cf19) volume_set_pane

0x2599,	// (0x00022208) bg_set_opt_pane_cp

0x65de,	// (0x0002624d) setting_slider_pane_t1

0xd2b2,	// (0x0002cf21) setting_slider_pane_t2

0xd2cb,	// (0x0002cf3a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002f1cd) setting_slider_pane_t

0x6627,	// (0x00026296) slider_set_pane

0x252d,	// (0x0002219c) bg_set_opt_pane_cp2

0x25a7,	// (0x00022216) setting_slider_graphic_pane_g1

0xd2e2,	// (0x0002cf51) setting_slider_graphic_pane_t1

0xd2f1,	// (0x0002cf60) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002f1d4) setting_slider_graphic_pane_t

0x665b,	// (0x000262ca) slider_set_pane_cp

0x252d,	// (0x0002219c) input_focus_pane_cp1

0x4abc,	// (0x0002472b) list_set_text_pane

0x2523,	// (0x00022192) setting_text_pane_g1

0x252d,	// (0x0002219c) input_focus_pane_cp2

0x2523,	// (0x00022192) setting_code_pane_g1

0x25b0,	// (0x0002221f) setting_code_pane_t1

0x93ca,	// (0x00029039) set_text_pane_t1_ParamLimits

0x93ca,	// (0x00029039) set_text_pane_t1

0x2b9c,	// (0x0002280b) set_opt_bg_pane_g1

0x2ba4,	// (0x00022813) set_opt_bg_pane_g2

0x0a22,	// (0x00020691) set_opt_bg_pane_g3

0x2bb4,	// (0x00022823) set_opt_bg_pane_g4

0x2bbc,	// (0x0002282b) set_opt_bg_pane_g5

0x2bc4,	// (0x00022833) set_opt_bg_pane_g6

0x4ab4,	// (0x00024723) set_opt_bg_pane_g7

0x0a2a,	// (0x00020699) set_opt_bg_pane_g8

0x0a32,	// (0x000206a1) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002f5dd) set_opt_bg_pane_g

0x4aa7,	// (0x00024716) slider_set_pane_g1

0x7db6,	// (0x00027a25) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002f5ce) slider_set_pane_g

0x7d2d,	// (0x0002799c) volume_set_pane_g1

0xda99,	// (0x0002d708) volume_set_pane_g2

0xdaa1,	// (0x0002d710) volume_set_pane_g3

0xdaa9,	// (0x0002d718) volume_set_pane_g4

0xdab1,	// (0x0002d720) volume_set_pane_g5

0xdab9,	// (0x0002d728) volume_set_pane_g6

0xdac1,	// (0x0002d730) volume_set_pane_g7

0xdac9,	// (0x0002d738) volume_set_pane_g8

0xdad1,	// (0x0002d740) volume_set_pane_g9

0xdad9,	// (0x0002d748) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002f5a6) volume_set_pane_g

0xefc0,	// (0x0002ec2f) indicator_pane_ParamLimits

0xefc0,	// (0x0002ec2f) indicator_pane

0xefe8,	// (0x0002ec57) main_idle_pane_g2_ParamLimits

0xefe8,	// (0x0002ec57) main_idle_pane_g2

0xf016,	// (0x0002ec85) main_pane_idle_g1_ParamLimits

0xf016,	// (0x0002ec85) main_pane_idle_g1

0x25be,	// (0x0002222d) popup_clock_digital_analogue_window_ParamLimits

0x25be,	// (0x0002222d) popup_clock_digital_analogue_window

0xf03b,	// (0x0002ecaa) soft_indicator_pane_ParamLimits

0xf03b,	// (0x0002ecaa) soft_indicator_pane

0xf055,	// (0x0002ecc4) wallpaper_pane_ParamLimits

0xf055,	// (0x0002ecc4) wallpaper_pane

0x2523,	// (0x00022192) wallpaper_pane_g1

0xf067,	// (0x0002ecd6) indicator_pane_g1_ParamLimits

0xf067,	// (0x0002ecd6) indicator_pane_g1

0x4c24,	// (0x00024893) navi_navi_icon_text_pane_srt_g1

0x25ec,	// (0x0002225b) soft_indicator_pane_t1

0x2606,	// (0x00022275) aid_ps_area_pane

0xf080,	// (0x0002ecef) aid_ps_clock_pane

0x2617,	// (0x00022286) aid_ps_indicator_pane

0x2623,	// (0x00022292) indicator_ps_pane_ParamLimits

0x2623,	// (0x00022292) indicator_ps_pane

0x2632,	// (0x000222a1) power_save_pane_g1_ParamLimits

0x2632,	// (0x000222a1) power_save_pane_g1

0x263e,	// (0x000222ad) power_save_pane_g2_ParamLimits

0x263e,	// (0x000222ad) power_save_pane_g2

0x6187,	// (0x00025df6) aid_navinavi_width_pane

0x2606,	// (0x00022275) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002f1d9) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002f1d9) power_save_pane_g

0x264c,	// (0x000222bb) power_save_pane_t1_ParamLimits

0x264c,	// (0x000222bb) power_save_pane_t1

0xf080,	// (0x0002ecef) aid_ps_clock_pane_ParamLimits

0x2617,	// (0x00022286) aid_ps_indicator_pane_ParamLimits

0x265e,	// (0x000222cd) power_save_pane_t4_ParamLimits

0x265e,	// (0x000222cd) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002f1de) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002f1de) power_save_pane_t

0x2688,	// (0x000222f7) power_save_t3_ParamLimits

0x2688,	// (0x000222f7) power_save_t3

0x2673,	// (0x000222e2) power_save_t2_ParamLimits

0x2673,	// (0x000222e2) power_save_t2

0x269d,	// (0x0002230c) indicator_ps_pane_g1

0xf08c,	// (0x0002ecfb) ai_gene_pane_ParamLimits

0xf08c,	// (0x0002ecfb) ai_gene_pane

0xf0a3,	// (0x0002ed12) ai_links_pane_ParamLimits

0xf0a3,	// (0x0002ed12) ai_links_pane

0xf0bb,	// (0x0002ed2a) indicator_pane_cp1_ParamLimits

0xf0bb,	// (0x0002ed2a) indicator_pane_cp1

0xf0ca,	// (0x0002ed39) main_pane_idle_g1_cp_ParamLimits

0xf0ca,	// (0x0002ed39) main_pane_idle_g1_cp

0x26a6,	// (0x00022315) popup_ai_links_title_window

0xf0e2,	// (0x0002ed51) soft_indicator_pane_cp1_ParamLimits

0xf0e2,	// (0x0002ed51) soft_indicator_pane_cp1

0x490f,	// (0x0002457e) ai_links_pane_g1

0x4918,	// (0x00024587) grid_ai_links_pane

0x093c,	// (0x000205ab) ai_gene_pane_1

0x48fd,	// (0x0002456c) ai_gene_pane_2

0x4906,	// (0x00024575) list_highlight_pane_cp4

0x0922,	// (0x00020591) cell_ai_link_pane_ParamLimits

0x0922,	// (0x00020591) cell_ai_link_pane

0x48f5,	// (0x00024564) cell_ai_link_pane_g1

0x2860,	// (0x000224cf) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002f581) cell_ai_link_pane_g

0x252d,	// (0x0002219c) grid_highlight_cp2

0x252d,	// (0x0002219c) bg_popup_sub_pane_cp1

0x26bd,	// (0x0002232c) popup_ai_links_title_window_t1

0x4847,	// (0x000244b6) ai_gene_pane_1_g1_ParamLimits

0x4847,	// (0x000244b6) ai_gene_pane_1_g1

0x4853,	// (0x000244c2) ai_gene_pane_1_g2_ParamLimits

0x4853,	// (0x000244c2) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002f577) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002f577) ai_gene_pane_1_g

0x4860,	// (0x000244cf) ai_gene_pane_1_t1_ParamLimits

0x4860,	// (0x000244cf) ai_gene_pane_1_t1

0x4894,	// (0x00024503) grid_ai_soft_ind_pane

0x4832,	// (0x000244a1) ai_gene_pane_2_t1_ParamLimits

0x4832,	// (0x000244a1) ai_gene_pane_2_t1

0xf0f6,	// (0x0002ed65) main_pane_empty_t1_ParamLimits

0xf0f6,	// (0x0002ed65) main_pane_empty_t1

0xf10e,	// (0x0002ed7d) main_pane_empty_t2_ParamLimits

0xf10e,	// (0x0002ed7d) main_pane_empty_t2

0xf123,	// (0x0002ed92) main_pane_empty_t3_ParamLimits

0xf123,	// (0x0002ed92) main_pane_empty_t3

0xf135,	// (0x0002eda4) main_pane_empty_t4_ParamLimits

0xf135,	// (0x0002eda4) main_pane_empty_t4

0xf147,	// (0x0002edb6) main_pane_empty_t5_ParamLimits

0xf147,	// (0x0002edb6) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002f1e3) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002f1e3) main_pane_empty_t

0x2bed,	// (0x0002285c) bg_popup_window_pane_ParamLimits

0x2bed,	// (0x0002285c) bg_popup_window_pane

0x4557,	// (0x000241c6) find_popup_pane_cp2_ParamLimits

0x4557,	// (0x000241c6) find_popup_pane_cp2

0x4563,	// (0x000241d2) heading_pane_ParamLimits

0x4563,	// (0x000241d2) heading_pane

0x252d,	// (0x0002219c) bg_popup_sub_pane

0x08a3,	// (0x00020512) bg_popup_window_pane_g1_ParamLimits

0x08a3,	// (0x00020512) bg_popup_window_pane_g1

0x08b2,	// (0x00020521) bg_popup_window_pane_g2_ParamLimits

0x08b2,	// (0x00020521) bg_popup_window_pane_g2

0x08be,	// (0x0002052d) bg_popup_window_pane_g3_ParamLimits

0x08be,	// (0x0002052d) bg_popup_window_pane_g3

0x08ca,	// (0x00020539) bg_popup_window_pane_g4_ParamLimits

0x08ca,	// (0x00020539) bg_popup_window_pane_g4

0x08d9,	// (0x00020548) bg_popup_window_pane_g5_ParamLimits

0x08d9,	// (0x00020548) bg_popup_window_pane_g5

0x08e9,	// (0x00020558) bg_popup_window_pane_g6_ParamLimits

0x08e9,	// (0x00020558) bg_popup_window_pane_g6

0x08f5,	// (0x00020564) bg_popup_window_pane_g7_ParamLimits

0x08f5,	// (0x00020564) bg_popup_window_pane_g7

0x0904,	// (0x00020573) bg_popup_window_pane_g8_ParamLimits

0x0904,	// (0x00020573) bg_popup_window_pane_g8

0x0913,	// (0x00020582) bg_popup_window_pane_g9_ParamLimits

0x0913,	// (0x00020582) bg_popup_window_pane_g9

0x453d,	// (0x000241ac) bg_popup_window_pane_g10_ParamLimits

0x453d,	// (0x000241ac) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002f53f) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002f53f) bg_popup_window_pane_g

0x44de,	// (0x0002414d) bg_popup_heading_pane_ParamLimits

0x44de,	// (0x0002414d) bg_popup_heading_pane

0x80a9,	// (0x00027d18) tabs_4_passive_pane_cp_srt_ParamLimits

0x80a9,	// (0x00027d18) tabs_4_passive_pane_cp_srt

0x80bb,	// (0x00027d2a) tabs_4_passive_pane_srt_ParamLimits

0x44f2,	// (0x00024161) heading_pane_g2

0x80bb,	// (0x00027d2a) tabs_4_passive_pane_srt

0x39f9,	// (0x00023668) bg_passive_tab_pane_cp3_srt_ParamLimits

0x39f9,	// (0x00023668) bg_passive_tab_pane_cp3_srt

0x44fa,	// (0x00024169) heading_pane_t1_ParamLimits

0x44fa,	// (0x00024169) heading_pane_t1

0x4511,	// (0x00024180) heading_pane_t2_ParamLimits

0x4511,	// (0x00024180) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002f53a) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002f53a) heading_pane_t

0x404b,	// (0x00023cba) bg_popup_heading_pane_g1

0x40dc,	// (0x00023d4b) bg_popup_heading_pane_g2

0x40e4,	// (0x00023d53) bg_popup_heading_pane_g3

0x40ec,	// (0x00023d5b) bg_popup_heading_pane_g4

0x40f4,	// (0x00023d63) bg_popup_heading_pane_g5

0x40fc,	// (0x00023d6b) bg_popup_heading_pane_g6

0x4104,	// (0x00023d73) bg_popup_heading_pane_g7

0x410c,	// (0x00023d7b) bg_popup_heading_pane_g8

0x4114,	// (0x00023d83) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002f4f6) bg_popup_heading_pane_g

0x396d,	// (0x000235dc) bg_popup_sub_pane_g1

0x3975,	// (0x000235e4) bg_popup_sub_pane_g2

0x397d,	// (0x000235ec) bg_popup_sub_pane_g3

0x3985,	// (0x000235f4) bg_popup_sub_pane_g4

0x398d,	// (0x000235fc) bg_popup_sub_pane_g5

0x3995,	// (0x00023604) bg_popup_sub_pane_g6

0x399d,	// (0x0002360c) bg_popup_sub_pane_g7

0x39a5,	// (0x00023614) bg_popup_sub_pane_g8

0x39ad,	// (0x0002361c) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002f4d0) bg_popup_sub_pane_g

0x257b,	// (0x000221ea) bg_popup_window_pane_cp5_ParamLimits

0x257b,	// (0x000221ea) bg_popup_window_pane_cp5

0x26da,	// (0x00022349) popup_note_window_g1_ParamLimits

0x26da,	// (0x00022349) popup_note_window_g1

0x26e6,	// (0x00022355) popup_note_window_t1_ParamLimits

0x26e6,	// (0x00022355) popup_note_window_t1

0x26fc,	// (0x0002236b) popup_note_window_t2_ParamLimits

0x26fc,	// (0x0002236b) popup_note_window_t2

0x2712,	// (0x00022381) popup_note_window_t3_ParamLimits

0x2712,	// (0x00022381) popup_note_window_t3

0x2728,	// (0x00022397) popup_note_window_t4_ParamLimits

0x2728,	// (0x00022397) popup_note_window_t4

0x2750,	// (0x000223bf) popup_note_window_t5_ParamLimits

0x2750,	// (0x000223bf) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002f1ee) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002f1ee) popup_note_window_t

0x2774,	// (0x000223e3) bg_popup_window_pane_cp6_ParamLimits

0x2774,	// (0x000223e3) bg_popup_window_pane_cp6

0x3fc7,	// (0x00023c36) popup_note_image_window_g1_ParamLimits

0x3fc7,	// (0x00023c36) popup_note_image_window_g1

0x3fd3,	// (0x00023c42) popup_note_image_window_g2_ParamLimits

0x3fd3,	// (0x00023c42) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002f4c4) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002f4c4) popup_note_image_window_g

0x3fec,	// (0x00023c5b) popup_note_image_window_t1_ParamLimits

0x3fec,	// (0x00023c5b) popup_note_image_window_t1

0x4005,	// (0x00023c74) popup_note_image_window_t2_ParamLimits

0x4005,	// (0x00023c74) popup_note_image_window_t2

0x401e,	// (0x00023c8d) popup_note_image_window_t3_ParamLimits

0x401e,	// (0x00023c8d) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002f4c9) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002f4c9) popup_note_image_window_t

0x3eac,	// (0x00023b1b) bg_popup_window_pane_cp7_ParamLimits

0x3eac,	// (0x00023b1b) bg_popup_window_pane_cp7

0x3edc,	// (0x00023b4b) popup_note_wait_window_g1_ParamLimits

0x3edc,	// (0x00023b4b) popup_note_wait_window_g1

0x3ee8,	// (0x00023b57) popup_note_wait_window_g2_ParamLimits

0x3ee8,	// (0x00023b57) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002f4b2) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002f4b2) popup_note_wait_window_g

0x3f00,	// (0x00023b6f) popup_note_wait_window_t1_ParamLimits

0x3f00,	// (0x00023b6f) popup_note_wait_window_t1

0x3f27,	// (0x00023b96) popup_note_wait_window_t2_ParamLimits

0x3f27,	// (0x00023b96) popup_note_wait_window_t2

0x3f44,	// (0x00023bb3) popup_note_wait_window_t3_ParamLimits

0x3f44,	// (0x00023bb3) popup_note_wait_window_t3

0x3f57,	// (0x00023bc6) popup_note_wait_window_t4_ParamLimits

0x3f57,	// (0x00023bc6) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002f4b9) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002f4b9) popup_note_wait_window_t

0x3f7c,	// (0x00023beb) wait_bar_pane_ParamLimits

0x3f7c,	// (0x00023beb) wait_bar_pane

0x252d,	// (0x0002219c) wait_anim_pane

0x252d,	// (0x0002219c) wait_border_pane

0x2523,	// (0x00022192) wait_anim_pane_g1

0x2523,	// (0x00022192) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002f372) wait_anim_pane_g

0x3e5c,	// (0x00023acb) wait_border_pane_g1

0x3e65,	// (0x00023ad4) wait_border_pane_g2

0x3e6e,	// (0x00023add) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002f4ab) wait_border_pane_g

0x3ccc,	// (0x0002393b) bg_popup_window_pane_cp16_ParamLimits

0x3ccc,	// (0x0002393b) bg_popup_window_pane_cp16

0x3dcc,	// (0x00023a3b) indicator_popup_pane_cp4_ParamLimits

0x3dcc,	// (0x00023a3b) indicator_popup_pane_cp4

0x3de0,	// (0x00023a4f) popup_query_data_window_t1_ParamLimits

0x3de0,	// (0x00023a4f) popup_query_data_window_t1

0x3df2,	// (0x00023a61) popup_query_data_window_t2_ParamLimits

0x3df2,	// (0x00023a61) popup_query_data_window_t2

0x3e0b,	// (0x00023a7a) popup_query_data_window_t3_ParamLimits

0x3e0b,	// (0x00023a7a) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002f4a4) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002f4a4) popup_query_data_window_t

0x3e25,	// (0x00023a94) query_popup_data_pane_ParamLimits

0x3e25,	// (0x00023a94) query_popup_data_pane

0x3e39,	// (0x00023aa8) query_popup_data_pane_cp1_ParamLimits

0x3e39,	// (0x00023aa8) query_popup_data_pane_cp1

0x3ccc,	// (0x0002393b) bg_popup_window_pane_cp10_ParamLimits

0x3ccc,	// (0x0002393b) bg_popup_window_pane_cp10

0x3cfe,	// (0x0002396d) indicator_popup_pane_ParamLimits

0x3cfe,	// (0x0002396d) indicator_popup_pane

0x3d20,	// (0x0002398f) popup_query_code_window_t1_ParamLimits

0x3d20,	// (0x0002398f) popup_query_code_window_t1

0x3d3a,	// (0x000239a9) popup_query_code_window_t2_ParamLimits

0x3d3a,	// (0x000239a9) popup_query_code_window_t2

0x3d83,	// (0x000239f2) popup_query_code_window_t3_ParamLimits

0x3d83,	// (0x000239f2) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002f49d) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002f49d) popup_query_code_window_t

0x3db2,	// (0x00023a21) query_popup_pane_ParamLimits

0x3db2,	// (0x00023a21) query_popup_pane

0x2774,	// (0x000223e3) bg_popup_window_pane_cp15_ParamLimits

0x2774,	// (0x000223e3) bg_popup_window_pane_cp15

0x2792,	// (0x00022401) indicator_popup_pane_cp1_ParamLimits

0x2792,	// (0x00022401) indicator_popup_pane_cp1

0x27a5,	// (0x00022414) indicator_popup_pane_cp2_ParamLimits

0x27a5,	// (0x00022414) indicator_popup_pane_cp2

0x27b8,	// (0x00022427) popup_query_data_code_window_g1_ParamLimits

0x27b8,	// (0x00022427) popup_query_data_code_window_g1

0x27cb,	// (0x0002243a) popup_query_data_code_window_t1_ParamLimits

0x27cb,	// (0x0002243a) popup_query_data_code_window_t1

0x27dd,	// (0x0002244c) popup_query_data_code_window_t2_ParamLimits

0x27dd,	// (0x0002244c) popup_query_data_code_window_t2

0x27ef,	// (0x0002245e) popup_query_data_code_window_t3_ParamLimits

0x27ef,	// (0x0002245e) popup_query_data_code_window_t3

0x2805,	// (0x00022474) popup_query_data_code_window_t4_ParamLimits

0x2805,	// (0x00022474) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002f1f9) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002f1f9) popup_query_data_code_window_t

0x7930,	// (0x0002759f) list_single_midp_graphic_pane_g3

0x281d,	// (0x0002248c) query_popup_data_pane_cp2_ParamLimits

0x2830,	// (0x0002249f) query_popup_pane_cp2_ParamLimits

0x2830,	// (0x0002249f) query_popup_pane_cp2

0x252d,	// (0x0002219c) bg_popup_window_pane_cp11

0x3cc4,	// (0x00023933) heading_pane_cp5

0x28bf,	// (0x0002252e) listscroll_popup_info_pane

0x252d,	// (0x0002219c) input_focus_pane_cp3

0x2843,	// (0x000224b2) query_popup_pane_t1

0x2851,	// (0x000224c0) list_popup_info_pane_ParamLimits

0x2851,	// (0x000224c0) list_popup_info_pane

0x2860,	// (0x000224cf) listscroll_popup_info_pane_g1

0x2868,	// (0x000224d7) scroll_pane_cp7

0x2870,	// (0x000224df) popup_info_list_pane_t1_ParamLimits

0x2870,	// (0x000224df) popup_info_list_pane_t1

0x288a,	// (0x000224f9) popup_info_list_pane_t2_ParamLimits

0x288a,	// (0x000224f9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002f202) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002f202) popup_info_list_pane_t

0x252d,	// (0x0002219c) bg_popup_window_pane_cp12

0x4c3e,	// (0x000248ad) find_popup_pane

0x2599,	// (0x00022208) bg_popup_window_pane_cp3

0x28a4,	// (0x00022513) heading_pane_cp3

0x28b0,	// (0x0002251f) listscroll_popup_graphic_pane

0x252d,	// (0x0002219c) bg_popup_window_pane_cp4

0xf1a9,	// (0x0002ee18) heading_pane_cp4

0x28bf,	// (0x0002252e) listscroll_popup_colour_pane

0x28c7,	// (0x00022536) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x28c7,	// (0x00022536) cell_large_graphic_colour_none_popup_pane

0xf1b1,	// (0x0002ee20) grid_large_graphic_colour_popup_pane_ParamLimits

0xf1b1,	// (0x0002ee20) grid_large_graphic_colour_popup_pane

0x28d7,	// (0x00022546) listscroll_popup_colour_pane_g1_ParamLimits

0x28d7,	// (0x00022546) listscroll_popup_colour_pane_g1

0x28ee,	// (0x0002255d) listscroll_popup_colour_pane_g2_ParamLimits

0x28ee,	// (0x0002255d) listscroll_popup_colour_pane_g2

0x2905,	// (0x00022574) listscroll_popup_colour_pane_g3_ParamLimits

0x2905,	// (0x00022574) listscroll_popup_colour_pane_g3

0xf1cd,	// (0x0002ee3c) listscroll_popup_colour_pane_g4_ParamLimits

0xf1cd,	// (0x0002ee3c) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002f207) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002f207) listscroll_popup_colour_pane_g

0x2915,	// (0x00022584) scroll_pane_cp6_ParamLimits

0x2915,	// (0x00022584) scroll_pane_cp6

0xf1dc,	// (0x0002ee4b) cell_large_graphic_colour_popup_pane_ParamLimits

0xf1dc,	// (0x0002ee4b) cell_large_graphic_colour_popup_pane

0x2927,	// (0x00022596) cell_large_graphic_colour_none_popup_pane_t1

0x252d,	// (0x0002219c) grid_highlight_pane_cp5

0x2936,	// (0x000225a5) cell_large_graphic_colour_popup_pane_g1

0x293e,	// (0x000225ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002f210) cell_large_graphic_colour_popup_pane_g

0x2946,	// (0x000225b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x294f,	// (0x000225be) grid_highlight_pane_cp4

0x2957,	// (0x000225c6) bg_popup_window_pane_cp8_ParamLimits

0x2957,	// (0x000225c6) bg_popup_window_pane_cp8

0x2972,	// (0x000225e1) popup_snote_single_text_window_g1_ParamLimits

0x2972,	// (0x000225e1) popup_snote_single_text_window_g1

0x2984,	// (0x000225f3) popup_snote_single_text_window_t1_ParamLimits

0x2984,	// (0x000225f3) popup_snote_single_text_window_t1

0x2997,	// (0x00022606) popup_snote_single_text_window_t2_ParamLimits

0x2997,	// (0x00022606) popup_snote_single_text_window_t2

0x29aa,	// (0x00022619) popup_snote_single_text_window_t3_ParamLimits

0x29aa,	// (0x00022619) popup_snote_single_text_window_t3

0x29e3,	// (0x00022652) popup_snote_single_text_window_t4_ParamLimits

0x29e3,	// (0x00022652) popup_snote_single_text_window_t4

0x2a17,	// (0x00022686) popup_snote_single_text_window_t5_ParamLimits

0x2a17,	// (0x00022686) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002f215) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002f215) popup_snote_single_text_window_t

0x2a46,	// (0x000226b5) bg_popup_window_pane_cp9_ParamLimits

0x2a46,	// (0x000226b5) bg_popup_window_pane_cp9

0x2972,	// (0x000225e1) popup_snote_single_graphic_window_g1_ParamLimits

0x2972,	// (0x000225e1) popup_snote_single_graphic_window_g1

0x2a54,	// (0x000226c3) popup_snote_single_graphic_window_g2_ParamLimits

0x2a54,	// (0x000226c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002f220) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002f220) popup_snote_single_graphic_window_g

0x2a60,	// (0x000226cf) popup_snote_single_graphic_window_t1_ParamLimits

0x2a60,	// (0x000226cf) popup_snote_single_graphic_window_t1

0x2a73,	// (0x000226e2) popup_snote_single_graphic_window_t2_ParamLimits

0x2a73,	// (0x000226e2) popup_snote_single_graphic_window_t2

0x29aa,	// (0x00022619) popup_snote_single_graphic_window_t3_ParamLimits

0x29aa,	// (0x00022619) popup_snote_single_graphic_window_t3

0x29e3,	// (0x00022652) popup_snote_single_graphic_window_t4_ParamLimits

0x29e3,	// (0x00022652) popup_snote_single_graphic_window_t4

0x2a17,	// (0x00022686) popup_snote_single_graphic_window_t5_ParamLimits

0x2a17,	// (0x00022686) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002f225) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002f225) popup_snote_single_graphic_window_t

0x4bca,	// (0x00024839) grid_graphic_popup_pane_ParamLimits

0x4bca,	// (0x00024839) grid_graphic_popup_pane

0x4bee,	// (0x0002485d) listscroll_popup_graphic_pane_g1_ParamLimits

0x4bee,	// (0x0002485d) listscroll_popup_graphic_pane_g1

0x0c50,	// (0x000208bf) listscroll_popup_graphic_pane_g2_ParamLimits

0x0c50,	// (0x000208bf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002f61a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002f61a) listscroll_popup_graphic_pane_g

0x47e1,	// (0x00024450) scroll_pane_cp5

0x0c13,	// (0x00020882) cell_graphic_popup_pane_ParamLimits

0x0c13,	// (0x00020882) cell_graphic_popup_pane

0x4b95,	// (0x00024804) cell_graphic_popup_pane_g1

0x4b9d,	// (0x0002480c) cell_graphic_popup_pane_g2

0x2946,	// (0x000225b5) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002f613) cell_graphic_popup_pane_g

0x4ba6,	// (0x00024815) cell_graphic_popup_pane_t2

0x294f,	// (0x000225be) grid_highlight_pane_cp3

0x2a98,	// (0x00022707) list_gen_pane_ParamLimits

0x2a98,	// (0x00022707) list_gen_pane

0x2ac0,	// (0x0002272f) scroll_pane

0x0bd0,	// (0x0002083f) bg_list_pane_g1_ParamLimits

0x0bd0,	// (0x0002083f) bg_list_pane_g1

0x4b44,	// (0x000247b3) bg_list_pane_g2_ParamLimits

0x4b44,	// (0x000247b3) bg_list_pane_g2

0x4b57,	// (0x000247c6) bg_list_pane_g3_ParamLimits

0x4b57,	// (0x000247c6) bg_list_pane_g3

0x4b69,	// (0x000247d8) bg_list_pane_g4_ParamLimits

0x4b69,	// (0x000247d8) bg_list_pane_g4

0x0beb,	// (0x0002085a) bg_list_pane_g5_ParamLimits

0x0beb,	// (0x0002085a) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002f608) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002f608) bg_list_pane_g

0x0b7a,	// (0x000207e9) list_double2_graphic_large_graphic_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double2_graphic_large_graphic_pane

0x0b7a,	// (0x000207e9) list_double2_graphic_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double2_graphic_pane

0x0b7a,	// (0x000207e9) list_double2_large_graphic_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double2_large_graphic_pane

0x0b7a,	// (0x000207e9) list_double2_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double2_pane

0x0b7a,	// (0x000207e9) list_double_graphic_heading_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_graphic_heading_pane

0x0b7a,	// (0x000207e9) list_double_graphic_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_graphic_pane

0x0b7a,	// (0x000207e9) list_double_heading_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_heading_pane

0x0b7a,	// (0x000207e9) list_double_large_graphic_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_large_graphic_pane

0x0b7a,	// (0x000207e9) list_double_number_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_number_pane

0x0b7a,	// (0x000207e9) list_double_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_pane

0x0b7a,	// (0x000207e9) list_double_time_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_double_time_pane

0x0b7a,	// (0x000207e9) list_setting_number_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_setting_number_pane

0x0b7a,	// (0x000207e9) list_setting_pane_ParamLimits

0x0b7a,	// (0x000207e9) list_setting_pane

0x0b8b,	// (0x000207fa) list_single_2graphic_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_2graphic_pane

0x0b8b,	// (0x000207fa) list_single_graphic_heading_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_graphic_heading_pane

0x0b8b,	// (0x000207fa) list_single_graphic_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_graphic_pane

0x0b8b,	// (0x000207fa) list_single_heading_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_heading_pane

0x0b8b,	// (0x000207fa) list_single_large_graphic_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_large_graphic_pane

0x0b8b,	// (0x000207fa) list_single_number_heading_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_number_heading_pane

0x0b8b,	// (0x000207fa) list_single_number_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_number_pane

0x0b8b,	// (0x000207fa) list_single_pane_ParamLimits

0x0b8b,	// (0x000207fa) list_single_pane

0x252d,	// (0x0002219c) list_highlight_pane_cp1

0xb501,	// (0x0002b170) list_single_pane_g1_ParamLimits

0xb501,	// (0x0002b170) list_single_pane_g1

0xb50d,	// (0x0002b17c) list_single_pane_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002f237) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002f237) list_single_pane_g

0xb6ee,	// (0x0002b35d) list_single_pane_t1_ParamLimits

0xb6ee,	// (0x0002b35d) list_single_pane_t1

0xb501,	// (0x0002b170) list_single_number_pane_g1_ParamLimits

0xb501,	// (0x0002b170) list_single_number_pane_g1

0xb50d,	// (0x0002b17c) list_single_number_pane_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002f237) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002f237) list_single_number_pane_g

0xb519,	// (0x0002b188) list_single_number_pane_t1_ParamLimits

0xb519,	// (0x0002b188) list_single_number_pane_t1

0xec82,	// (0x0002e8f1) list_single_number_pane_t2_ParamLimits

0xec82,	// (0x0002e8f1) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002f5c9) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002f5c9) list_single_number_pane_t

0x93e4,	// (0x00029053) list_single_graphic_pane_g1_ParamLimits

0x93e4,	// (0x00029053) list_single_graphic_pane_g1

0xb501,	// (0x0002b170) list_single_graphic_pane_g2_ParamLimits

0xb501,	// (0x0002b170) list_single_graphic_pane_g2

0xb50d,	// (0x0002b17c) list_single_graphic_pane_g3_ParamLimits

0xb50d,	// (0x0002b17c) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002f230) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002f230) list_single_graphic_pane_g

0xe34d,	// (0x0002dfbc) list_single_graphic_pane_t1_ParamLimits

0xe34d,	// (0x0002dfbc) list_single_graphic_pane_t1

0xb501,	// (0x0002b170) list_single_heading_pane_g1_ParamLimits

0xb501,	// (0x0002b170) list_single_heading_pane_g1

0xb50d,	// (0x0002b17c) list_single_heading_pane_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002f237) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002f237) list_single_heading_pane_g

0xe363,	// (0x0002dfd2) list_single_heading_pane_t1_ParamLimits

0xe363,	// (0x0002dfd2) list_single_heading_pane_t1

0xe379,	// (0x0002dfe8) list_single_heading_pane_t2_ParamLimits

0xe379,	// (0x0002dfe8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002f23c) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002f23c) list_single_heading_pane_t

0xb501,	// (0x0002b170) list_single_number_heading_pane_g1_ParamLimits

0xb501,	// (0x0002b170) list_single_number_heading_pane_g1

0xb50d,	// (0x0002b17c) list_single_number_heading_pane_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002f237) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002f237) list_single_number_heading_pane_g

0xe363,	// (0x0002dfd2) list_single_number_heading_pane_t1_ParamLimits

0xe363,	// (0x0002dfd2) list_single_number_heading_pane_t1

0xb6b8,	// (0x0002b327) list_single_number_heading_pane_t2_ParamLimits

0xb6b8,	// (0x0002b327) list_single_number_heading_pane_t2

0xb6ca,	// (0x0002b339) list_single_number_heading_pane_t3_ParamLimits

0xb6ca,	// (0x0002b339) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002f241) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002f241) list_single_number_heading_pane_t

0x946a,	// (0x000290d9) list_single_graphic_heading_pane_g1_ParamLimits

0x946a,	// (0x000290d9) list_single_graphic_heading_pane_g1

0xe38b,	// (0x0002dffa) list_single_graphic_heading_pane_g4_ParamLimits

0xe38b,	// (0x0002dffa) list_single_graphic_heading_pane_g4

0xb50d,	// (0x0002b17c) list_single_graphic_heading_pane_g5_ParamLimits

0xb50d,	// (0x0002b17c) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002f248) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002f248) list_single_graphic_heading_pane_g

0xe363,	// (0x0002dfd2) list_single_graphic_heading_pane_t1_ParamLimits

0xe363,	// (0x0002dfd2) list_single_graphic_heading_pane_t1

0xe39c,	// (0x0002e00b) list_single_graphic_heading_pane_t2_ParamLimits

0xe39c,	// (0x0002e00b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002f24f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002f24f) list_single_graphic_heading_pane_t

0xb704,	// (0x0002b373) list_single_large_graphic_pane_g1_ParamLimits

0xb704,	// (0x0002b373) list_single_large_graphic_pane_g1

0xb501,	// (0x0002b170) list_single_large_graphic_pane_g2_ParamLimits

0xb501,	// (0x0002b170) list_single_large_graphic_pane_g2

0xb50d,	// (0x0002b17c) list_single_large_graphic_pane_g3_ParamLimits

0xb50d,	// (0x0002b17c) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002f254) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002f254) list_single_large_graphic_pane_g

0x3e65,	// (0x00023ad4) wait_border_pane_g2_copy1

0xe3ae,	// (0x0002e01d) list_single_large_graphic_pane_g4_cp2

0xb710,	// (0x0002b37f) list_single_large_graphic_pane_t1_ParamLimits

0xb710,	// (0x0002b37f) list_single_large_graphic_pane_t1

0xb96a,	// (0x0002b5d9) list_double_pane_g1_ParamLimits

0xb96a,	// (0x0002b5d9) list_double_pane_g1

0xe3b6,	// (0x0002e025) list_double_pane_g2_ParamLimits

0xe3b6,	// (0x0002e025) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002f25b) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002f25b) list_double_pane_g

0xe3c2,	// (0x0002e031) list_double_pane_t1_ParamLimits

0xe3c2,	// (0x0002e031) list_double_pane_t1

0xe3d8,	// (0x0002e047) list_double_pane_t2_ParamLimits

0xe3d8,	// (0x0002e047) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002f260) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002f260) list_double_pane_t

0xe3ea,	// (0x0002e059) list_double2_pane_g1_ParamLimits

0xe3ea,	// (0x0002e059) list_double2_pane_g1

0xe3fb,	// (0x0002e06a) list_double2_pane_g2_ParamLimits

0xe3fb,	// (0x0002e06a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002f265) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002f265) list_double2_pane_g

0xe407,	// (0x0002e076) list_double2_pane_t1_ParamLimits

0xe407,	// (0x0002e076) list_double2_pane_t1

0xe41d,	// (0x0002e08c) list_double2_pane_t2_ParamLimits

0xe41d,	// (0x0002e08c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002f26a) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002f26a) list_double2_pane_t

0xb96a,	// (0x0002b5d9) list_double_number_pane_g1_ParamLimits

0xb96a,	// (0x0002b5d9) list_double_number_pane_g1

0xe3b6,	// (0x0002e025) list_double_number_pane_g2_ParamLimits

0xe3b6,	// (0x0002e025) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002f25b) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002f25b) list_double_number_pane_g

0xe42f,	// (0x0002e09e) list_double_number_pane_t1_ParamLimits

0xe42f,	// (0x0002e09e) list_double_number_pane_t1

0xe441,	// (0x0002e0b0) list_double_number_pane_t2_ParamLimits

0xe441,	// (0x0002e0b0) list_double_number_pane_t2

0xe457,	// (0x0002e0c6) list_double_number_pane_t3_ParamLimits

0xe457,	// (0x0002e0c6) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002f26f) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002f26f) list_double_number_pane_t

0xe469,	// (0x0002e0d8) list_double_graphic_pane_g1_ParamLimits

0xe469,	// (0x0002e0d8) list_double_graphic_pane_g1

0xe475,	// (0x0002e0e4) list_double_graphic_pane_g2_ParamLimits

0xe475,	// (0x0002e0e4) list_double_graphic_pane_g2

0xe484,	// (0x0002e0f3) list_double_graphic_pane_g3_ParamLimits

0xe484,	// (0x0002e0f3) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002f276) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002f276) list_double_graphic_pane_g

0xe49c,	// (0x0002e10b) list_double_graphic_pane_t1_ParamLimits

0xe49c,	// (0x0002e10b) list_double_graphic_pane_t1

0xe4b2,	// (0x0002e121) list_double_graphic_pane_t2_ParamLimits

0xe4b2,	// (0x0002e121) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002f27f) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002f27f) list_double_graphic_pane_t

0xb0d0,	// (0x0002ad3f) list_double2_graphic_pane_g1_ParamLimits

0xb0d0,	// (0x0002ad3f) list_double2_graphic_pane_g1

0xb96a,	// (0x0002b5d9) list_double2_graphic_pane_g2_ParamLimits

0xb96a,	// (0x0002b5d9) list_double2_graphic_pane_g2

0xe3b6,	// (0x0002e025) list_double2_graphic_pane_g3_ParamLimits

0xe3b6,	// (0x0002e025) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002f284) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002f284) list_double2_graphic_pane_g

0xe4c4,	// (0x0002e133) list_double2_graphic_pane_t1_ParamLimits

0xe4c4,	// (0x0002e133) list_double2_graphic_pane_t1

0xe4da,	// (0x0002e149) list_double2_graphic_pane_t2_ParamLimits

0xe4da,	// (0x0002e149) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002f28b) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002f28b) list_double2_graphic_pane_t

0xe4ec,	// (0x0002e15b) list_double_large_graphic_pane_g1_ParamLimits

0xe4ec,	// (0x0002e15b) list_double_large_graphic_pane_g1

0xe50b,	// (0x0002e17a) list_double_large_graphic_pane_g2_ParamLimits

0xe50b,	// (0x0002e17a) list_double_large_graphic_pane_g2

0xe3b6,	// (0x0002e025) list_double_large_graphic_pane_g3_ParamLimits

0xe3b6,	// (0x0002e025) list_double_large_graphic_pane_g3

0xe51c,	// (0x0002e18b) list_double_large_graphic_pane_g4_ParamLimits

0xe51c,	// (0x0002e18b) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002f290) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002f290) list_double_large_graphic_pane_g

0xe52d,	// (0x0002e19c) list_double_large_graphic_pane_t1_ParamLimits

0xe52d,	// (0x0002e19c) list_double_large_graphic_pane_t1

0xe546,	// (0x0002e1b5) list_double_large_graphic_pane_t2_ParamLimits

0xe546,	// (0x0002e1b5) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002f29b) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002f29b) list_double_large_graphic_pane_t

0xe558,	// (0x0002e1c7) list_double2_large_graphic_pane_g1_ParamLimits

0xe558,	// (0x0002e1c7) list_double2_large_graphic_pane_g1

0xe3ea,	// (0x0002e059) list_double2_large_graphic_pane_g2_ParamLimits

0xe3ea,	// (0x0002e059) list_double2_large_graphic_pane_g2

0xe3fb,	// (0x0002e06a) list_double2_large_graphic_pane_g3_ParamLimits

0xe3fb,	// (0x0002e06a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002f2a0) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002f2a0) list_double2_large_graphic_pane_g

0xe564,	// (0x0002e1d3) list_double2_large_graphic_pane_t1_ParamLimits

0xe564,	// (0x0002e1d3) list_double2_large_graphic_pane_t1

0xe958,	// (0x0002e5c7) list_double2_large_graphic_pane_t2_ParamLimits

0xe958,	// (0x0002e5c7) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002f2a7) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002f2a7) list_double2_large_graphic_pane_t

0xe96a,	// (0x0002e5d9) list_double_heading_pane_g1_ParamLimits

0xe96a,	// (0x0002e5d9) list_double_heading_pane_g1

0x94e5,	// (0x00029154) list_double_heading_pane_g2_ParamLimits

0x94e5,	// (0x00029154) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002f2ac) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002f2ac) list_double_heading_pane_g

0xe97b,	// (0x0002e5ea) list_double_heading_pane_t1_ParamLimits

0xe97b,	// (0x0002e5ea) list_double_heading_pane_t1

0xe41d,	// (0x0002e08c) list_double_heading_pane_t2_ParamLimits

0xe41d,	// (0x0002e08c) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002f2b1) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002f2b1) list_double_heading_pane_t

0xb0d0,	// (0x0002ad3f) list_double_graphic_heading_pane_g1_ParamLimits

0xb0d0,	// (0x0002ad3f) list_double_graphic_heading_pane_g1

0xe96a,	// (0x0002e5d9) list_double_graphic_heading_pane_g2_ParamLimits

0xe96a,	// (0x0002e5d9) list_double_graphic_heading_pane_g2

0x94e5,	// (0x00029154) list_double_graphic_heading_pane_g3_ParamLimits

0x94e5,	// (0x00029154) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002f2b6) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002f2b6) list_double_graphic_heading_pane_g

0xe991,	// (0x0002e600) list_double_graphic_heading_pane_t1_ParamLimits

0xe991,	// (0x0002e600) list_double_graphic_heading_pane_t1

0xe4da,	// (0x0002e149) list_double_graphic_heading_pane_t2_ParamLimits

0xe4da,	// (0x0002e149) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002f2bd) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002f2bd) list_double_graphic_heading_pane_t

0xe50b,	// (0x0002e17a) list_double_time_pane_g1_ParamLimits

0xe50b,	// (0x0002e17a) list_double_time_pane_g1

0xe3b6,	// (0x0002e025) list_double_time_pane_g2_ParamLimits

0xe3b6,	// (0x0002e025) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002f2c2) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002f2c2) list_double_time_pane_g

0xe9a7,	// (0x0002e616) list_double_time_pane_t1_ParamLimits

0xe9a7,	// (0x0002e616) list_double_time_pane_t1

0xe9bd,	// (0x0002e62c) list_double_time_pane_t2_ParamLimits

0xe9bd,	// (0x0002e62c) list_double_time_pane_t2

0xe9cf,	// (0x0002e63e) list_double_time_pane_t3_ParamLimits

0xe9cf,	// (0x0002e63e) list_double_time_pane_t3

0xe9e1,	// (0x0002e650) list_double_time_pane_t4_ParamLimits

0xe9e1,	// (0x0002e650) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002f2c7) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002f2c7) list_double_time_pane_t

0xe9f3,	// (0x0002e662) list_setting_pane_g1_ParamLimits

0xe9f3,	// (0x0002e662) list_setting_pane_g1

0xe3fb,	// (0x0002e06a) list_setting_pane_g2_ParamLimits

0xe3fb,	// (0x0002e06a) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002f2d0) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002f2d0) list_setting_pane_g

0xe9ff,	// (0x0002e66e) list_setting_pane_t1_ParamLimits

0xe9ff,	// (0x0002e66e) list_setting_pane_t1

0xea19,	// (0x0002e688) list_setting_pane_t2_ParamLimits

0xea19,	// (0x0002e688) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002f2d5) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002f2d5) list_setting_pane_t

0xea56,	// (0x0002e6c5) set_value_pane_cp_ParamLimits

0xea56,	// (0x0002e6c5) set_value_pane_cp

0xea62,	// (0x0002e6d1) list_setting_number_pane_g1_ParamLimits

0xea62,	// (0x0002e6d1) list_setting_number_pane_g1

0xea6e,	// (0x0002e6dd) list_setting_number_pane_g2_ParamLimits

0xea6e,	// (0x0002e6dd) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002f2dc) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002f2dc) list_setting_number_pane_g

0xea7a,	// (0x0002e6e9) list_setting_number_pane_t1_ParamLimits

0xea7a,	// (0x0002e6e9) list_setting_number_pane_t1

0xea93,	// (0x0002e702) list_setting_number_pane_t2_ParamLimits

0xea93,	// (0x0002e702) list_setting_number_pane_t2

0xeaad,	// (0x0002e71c) list_setting_number_pane_t3_ParamLimits

0xeaad,	// (0x0002e71c) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002f2e1) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002f2e1) list_setting_number_pane_t

0xea56,	// (0x0002e6c5) set_value_pane_ParamLimits

0xea56,	// (0x0002e6c5) set_value_pane

0x2af4,	// (0x00022763) bg_set_opt_pane_ParamLimits

0x2af4,	// (0x00022763) bg_set_opt_pane

0xb237,	// (0x0002aea6) set_value_pane_t1

0x2b15,	// (0x00022784) slider_set_pane_cp3

0xf205,	// (0x0002ee74) volume_small_pane_cp

0x2b1e,	// (0x0002278d) list_form_gen_pane

0x2b27,	// (0x00022796) scroll_pane_cp8

0xeaf0,	// (0x0002e75f) form_field_data_pane_ParamLimits

0xeaf0,	// (0x0002e75f) form_field_data_pane

0xeb07,	// (0x0002e776) form_field_data_wide_pane_ParamLimits

0xeb07,	// (0x0002e776) form_field_data_wide_pane

0xb28c,	// (0x0002aefb) form_field_popup_pane_ParamLimits

0xb28c,	// (0x0002aefb) form_field_popup_pane

0xb2a4,	// (0x0002af13) form_field_popup_wide_pane_ParamLimits

0xb2a4,	// (0x0002af13) form_field_popup_wide_pane

0xb2bb,	// (0x0002af2a) form_field_slider_pane_ParamLimits

0xb2bb,	// (0x0002af2a) form_field_slider_pane

0xb2ce,	// (0x0002af3d) form_field_slider_wide_pane_ParamLimits

0xb2ce,	// (0x0002af3d) form_field_slider_wide_pane

0x2b38,	// (0x000227a7) data_form_pane

0xeb2f,	// (0x0002e79e) form_field_data_pane_t1

0x2b44,	// (0x000227b3) input_focus_pane

0xb301,	// (0x0002af70) data_form_wide_pane

0xb31e,	// (0x0002af8d) form_field_data_wide_pane_t1

0x2964,	// (0x000225d3) input_focus_pane_cp6

0xeb47,	// (0x0002e7b6) form_field_popup_pane_t1

0x2b44,	// (0x000227b3) input_focus_pane_cp7

0x2b72,	// (0x000227e1) list_form_pane

0xb360,	// (0x0002afcf) form_field_popup_wide_pane_t1

0x2b44,	// (0x000227b3) input_focus_pane_cp8

0x2b7e,	// (0x000227ed) list_form_wide_pane

0xeb67,	// (0x0002e7d6) form_field_slider_pane_t1_ParamLimits

0xeb67,	// (0x0002e7d6) form_field_slider_pane_t1

0xeb7d,	// (0x0002e7ec) form_field_slider_pane_t2_ParamLimits

0xeb7d,	// (0x0002e7ec) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002f2f1) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002f2f1) form_field_slider_pane_t

0x257b,	// (0x000221ea) input_focus_pane_cp9_ParamLimits

0x257b,	// (0x000221ea) input_focus_pane_cp9

0xeb92,	// (0x0002e801) slider_cont_pane_ParamLimits

0xeb92,	// (0x0002e801) slider_cont_pane

0x2b8a,	// (0x000227f9) form_field_slider_wide_pane_t1_ParamLimits

0x2b8a,	// (0x000227f9) form_field_slider_wide_pane_t1

0xb3b5,	// (0x0002b024) form_field_slider_wide_pane_t2_ParamLimits

0xb3b5,	// (0x0002b024) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002f2f6) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002f2f6) form_field_slider_wide_pane_t

0x257b,	// (0x000221ea) input_focus_pane_cp10_ParamLimits

0x257b,	// (0x000221ea) input_focus_pane_cp10

0xeba6,	// (0x0002e815) slider_cont_pane_cp1_ParamLimits

0xeba6,	// (0x0002e815) slider_cont_pane_cp1

0xebba,	// (0x0002e829) slider_form_pane_cp

0x2b9c,	// (0x0002280b) input_focus_pane_g1

0x2ba4,	// (0x00022813) input_focus_pane_g2

0x2bac,	// (0x0002281b) input_focus_pane_g3

0x2bb4,	// (0x00022823) input_focus_pane_g4

0x2bbc,	// (0x0002282b) input_focus_pane_g5

0x2bc4,	// (0x00022833) input_focus_pane_g6

0x2bcc,	// (0x0002283b) input_focus_pane_g7

0x2bd4,	// (0x00022843) input_focus_pane_g8

0x2bdc,	// (0x0002284b) input_focus_pane_g9

0x2523,	// (0x00022192) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002f2fb) input_focus_pane_g

0x3e6e,	// (0x00023add) wait_border_pane_g3_copy1

0xebc2,	// (0x0002e831) data_form_pane_t1

0x2523,	// (0x00022192) wait_anim_pane_g1_copy1

0xec94,	// (0x0002e903) data_form_wide_pane_t1

0xb3fd,	// (0x0002b06c) list_form_graphic_pane_cp_ParamLimits

0xb3fd,	// (0x0002b06c) list_form_graphic_pane_cp

0x4ac4,	// (0x00024733) slider_form_pane_g1

0x4acd,	// (0x0002473c) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002f5f9) slider_form_pane_g

0xb3fd,	// (0x0002b06c) list_form_graphic_pane_ParamLimits

0xb3fd,	// (0x0002b06c) list_form_graphic_pane

0xb40e,	// (0x0002b07d) list_form_graphic_pane_g1

0xb416,	// (0x0002b085) list_form_graphic_pane_t1_ParamLimits

0xb416,	// (0x0002b085) list_form_graphic_pane_t1

0x2599,	// (0x00022208) list_highlight_pane_cp5_ParamLimits

0x2599,	// (0x00022208) list_highlight_pane_cp5

0xebdb,	// (0x0002e84a) find_pane_g1

0x2be4,	// (0x00022853) input_find_pane

0xebe4,	// (0x0002e853) input_find_pane_g1_ParamLimits

0xebe4,	// (0x0002e853) input_find_pane_g1

0xb440,	// (0x0002b0af) input_find_pane_t1_ParamLimits

0xb440,	// (0x0002b0af) input_find_pane_t1

0xb455,	// (0x0002b0c4) input_find_pane_t2_ParamLimits

0xb455,	// (0x0002b0c4) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002f310) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002f310) input_find_pane_t

0x2bed,	// (0x0002285c) input_focus_pane_cp5_ParamLimits

0x2bed,	// (0x0002285c) input_focus_pane_cp5

0x2bfb,	// (0x0002286a) bg_popup_window_pane_cp2_ParamLimits

0x2bfb,	// (0x0002286a) bg_popup_window_pane_cp2

0x2c08,	// (0x00022877) listscroll_menu_pane_ParamLimits

0x2c08,	// (0x00022877) listscroll_menu_pane

0xf21a,	// (0x0002ee89) popup_submenu_window_ParamLimits

0xf21a,	// (0x0002ee89) popup_submenu_window

0x2c14,	// (0x00022883) find_popup_pane_g1

0x2c1c,	// (0x0002288b) input_popup_find_pane_cp

0x2bed,	// (0x0002285c) input_focus_pane_cp4_ParamLimits

0x2bed,	// (0x0002285c) input_focus_pane_cp4

0x2c26,	// (0x00022895) input_popup_find_pane_t1_ParamLimits

0x2c26,	// (0x00022895) input_popup_find_pane_t1

0x252d,	// (0x0002219c) bg_popup_sub_pane_cp

0x2c54,	// (0x000228c3) listscroll_popup_sub_pane

0x2c5c,	// (0x000228cb) list_submenu_pane_ParamLimits

0x2c5c,	// (0x000228cb) list_submenu_pane

0x2c6d,	// (0x000228dc) scroll_pane_cp4

0x2c75,	// (0x000228e4) list_single_popup_submenu_pane_ParamLimits

0x2c75,	// (0x000228e4) list_single_popup_submenu_pane

0x2c88,	// (0x000228f7) list_single_popup_submenu_pane_g1

0x2c90,	// (0x000228ff) list_single_popup_submenu_pane_t1_ParamLimits

0x2c90,	// (0x000228ff) list_single_popup_submenu_pane_t1

0x257b,	// (0x000221ea) bg_active_tab_pane_cp1_ParamLimits

0x257b,	// (0x000221ea) bg_active_tab_pane_cp1

0x2ca5,	// (0x00022914) tabs_2_active_pane_g1

0xf24a,	// (0x0002eeb9) tabs_2_active_pane_t1

0x257b,	// (0x000221ea) bg_passive_tab_pane_cp1_ParamLimits

0x257b,	// (0x000221ea) bg_passive_tab_pane_cp1

0x2ca5,	// (0x00022914) tabs_2_passive_pane_g1

0xf24a,	// (0x0002eeb9) tabs_2_passive_pane_t1

0x2599,	// (0x00022208) bg_active_tab_pane_cp4

0xf25c,	// (0x0002eecb) tabs_2_long_active_pane_t1

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp4

0x7938,	// (0x000275a7) list_single_midp_graphic_pane_g4_ParamLimits

0x2599,	// (0x00022208) bg_active_tab_pane_cp5

0xf26f,	// (0x0002eede) tabs_3_long_active_pane_t1

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp5

0x7938,	// (0x000275a7) list_single_midp_graphic_pane_g4

0x2599,	// (0x00022208) bg_popup_window_pane_cp13_ParamLimits

0x2599,	// (0x00022208) bg_popup_window_pane_cp13

0x2cc2,	// (0x00022931) listscroll_popup_fast_pane_ParamLimits

0x2cc2,	// (0x00022931) listscroll_popup_fast_pane

0x2cd1,	// (0x00022940) grid_popup_fast_pane_ParamLimits

0x2cd1,	// (0x00022940) grid_popup_fast_pane

0x2ce3,	// (0x00022952) scroll_pane_cp9_ParamLimits

0x2ce3,	// (0x00022952) scroll_pane_cp9

0x9d4e,	// (0x000299bd) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9d4e,	// (0x000299bd) list_single_graphic_hl_pane_t1_cp2

0x2d07,	// (0x00022976) input_focus_pane_cp20_ParamLimits

0x2d07,	// (0x00022976) input_focus_pane_cp20

0x2d15,	// (0x00022984) query_popup_data_pane_t1_ParamLimits

0x2d15,	// (0x00022984) query_popup_data_pane_t1

0x2d28,	// (0x00022997) query_popup_data_pane_t2_ParamLimits

0x2d28,	// (0x00022997) query_popup_data_pane_t2

0x2d6e,	// (0x000229dd) query_popup_data_pane_t3_ParamLimits

0x2d6e,	// (0x000229dd) query_popup_data_pane_t3

0x2daf,	// (0x00022a1e) query_popup_data_pane_t4_ParamLimits

0x2daf,	// (0x00022a1e) query_popup_data_pane_t4

0x2deb,	// (0x00022a5a) query_popup_data_pane_t5_ParamLimits

0x2deb,	// (0x00022a5a) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002f315) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002f315) query_popup_data_pane_t

0x2b9c,	// (0x0002280b) bg_set_opt_pane_g1

0x2ba4,	// (0x00022813) bg_set_opt_pane_g2

0x2bac,	// (0x0002281b) bg_set_opt_pane_g3

0x2bb4,	// (0x00022823) bg_set_opt_pane_g4

0x2bbc,	// (0x0002282b) bg_set_opt_pane_g5

0x2bc4,	// (0x00022833) bg_set_opt_pane_g6

0x2bcc,	// (0x0002283b) bg_set_opt_pane_g7

0x2bd4,	// (0x00022843) bg_set_opt_pane_g8

0x2bdc,	// (0x0002284b) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002f320) bg_set_opt_pane_g

0x6c37,	// (0x000268a6) control_top_pane_stacon_ParamLimits

0x6c37,	// (0x000268a6) control_top_pane_stacon

0x6c8a,	// (0x000268f9) signal_pane_stacon_ParamLimits

0x6c8a,	// (0x000268f9) signal_pane_stacon

0x3286,	// (0x00022ef5) stacon_top_pane_g1_ParamLimits

0x3286,	// (0x00022ef5) stacon_top_pane_g1

0x6caf,	// (0x0002691e) title_pane_stacon_ParamLimits

0x6caf,	// (0x0002691e) title_pane_stacon

0x6cd1,	// (0x00026940) uni_indicator_pane_stacon_ParamLimits

0x6cd1,	// (0x00026940) uni_indicator_pane_stacon

0x6ce6,	// (0x00026955) battery_pane_stacon_ParamLimits

0x6ce6,	// (0x00026955) battery_pane_stacon

0x6d26,	// (0x00026995) control_bottom_pane_stacon_ParamLimits

0x6d26,	// (0x00026995) control_bottom_pane_stacon

0x6d45,	// (0x000269b4) navi_pane_stacon_ParamLimits

0x6d45,	// (0x000269b4) navi_pane_stacon

0x32a8,	// (0x00022f17) stacon_bottom_pane_g1_ParamLimits

0x32a8,	// (0x00022f17) stacon_bottom_pane_g1

0x68a1,	// (0x00026510) aid_levels_signal_lsc_ParamLimits

0x68a1,	// (0x00026510) aid_levels_signal_lsc

0x68b8,	// (0x00026527) signal_pane_stacon_g1_ParamLimits

0x68b8,	// (0x00026527) signal_pane_stacon_g1

0x68cc,	// (0x0002653b) signal_pane_stacon_g2_ParamLimits

0x68cc,	// (0x0002653b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002f333) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002f333) signal_pane_stacon_g

0x6901,	// (0x00026570) title_pane_stacon_t1_ParamLimits

0x6901,	// (0x00026570) title_pane_stacon_t1

0x2e43,	// (0x00022ab2) uni_indicator_pane_stacon_g1

0x2e4d,	// (0x00022abc) uni_indicator_pane_stacon_g2

0x2e2f,	// (0x00022a9e) uni_indicator_pane_stacon_g3

0x2e39,	// (0x00022aa8) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002f33f) uni_indicator_pane_stacon_g

0x6926,	// (0x00026595) control_top_pane_stacon_g1

0x692e,	// (0x0002659d) control_top_pane_stacon_t1_ParamLimits

0x692e,	// (0x0002659d) control_top_pane_stacon_t1

0x6965,	// (0x000265d4) aid_levels_battery_lsc_ParamLimits

0x6965,	// (0x000265d4) aid_levels_battery_lsc

0x697d,	// (0x000265ec) battery_pane_stacon_g1_ParamLimits

0x697d,	// (0x000265ec) battery_pane_stacon_g1

0x6990,	// (0x000265ff) battery_pane_stacon_g2_ParamLimits

0x6990,	// (0x000265ff) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002f348) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002f348) battery_pane_stacon_g

0x69c6,	// (0x00026635) navi_icon_pane_stacon

0x69da,	// (0x00026649) navi_navi_pane_stacon

0x69c6,	// (0x00026635) navi_text_pane_stacon

0x6926,	// (0x00026595) control_bottom_pane_stacon_g1

0x69ee,	// (0x0002665d) control_bottom_pane_stacon_t1_ParamLimits

0x69ee,	// (0x0002665d) control_bottom_pane_stacon_t1

0xf281,	// (0x0002eef0) grid_app_pane_ParamLimits

0xf281,	// (0x0002eef0) grid_app_pane

0xf2af,	// (0x0002ef1e) scroll_pane_cp15_ParamLimits

0xf2af,	// (0x0002ef1e) scroll_pane_cp15

0xf2c2,	// (0x0002ef31) cell_app_pane_ParamLimits

0xf2c2,	// (0x0002ef31) cell_app_pane

0xf2fd,	// (0x0002ef6c) cell_app_pane_g1_ParamLimits

0xf2fd,	// (0x0002ef6c) cell_app_pane_g1

0x2e71,	// (0x00022ae0) cell_app_pane_g2_ParamLimits

0x2e71,	// (0x00022ae0) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002f34d) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002f34d) cell_app_pane_g

0xf321,	// (0x0002ef90) cell_app_pane_t1_ParamLimits

0xf321,	// (0x0002ef90) cell_app_pane_t1

0x2e7d,	// (0x00022aec) grid_highlight_pane_ParamLimits

0x2e7d,	// (0x00022aec) grid_highlight_pane

0x2b9c,	// (0x0002280b) cell_highlight_pane_g1

0x2ba4,	// (0x00022813) cell_highlight_pane_g2

0x2bac,	// (0x0002281b) cell_highlight_pane_g3

0x2bb4,	// (0x00022823) cell_highlight_pane_g4

0x2bbc,	// (0x0002282b) cell_highlight_pane_g5

0x2bc4,	// (0x00022833) cell_highlight_pane_g6

0x2bcc,	// (0x0002283b) cell_highlight_pane_g7

0x2bd4,	// (0x00022843) cell_highlight_pane_g8

0x2bdc,	// (0x0002284b) cell_highlight_pane_g9

0x2523,	// (0x00022192) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002f2fb) cell_highlight_pane_g

0x2e8e,	// (0x00022afd) bg_scroll_pane

0x6ac6,	// (0x00026735) scroll_handle_pane

0x2ed5,	// (0x00022b44) scroll_bg_pane_g1

0x2eea,	// (0x00022b59) scroll_bg_pane_g2

0x2f02,	// (0x00022b71) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002f352) scroll_bg_pane_g

0x2f17,	// (0x00022b86) scroll_handle_focus_pane_ParamLimits

0x2f17,	// (0x00022b86) scroll_handle_focus_pane

0x2ed5,	// (0x00022b44) scroll_handle_pane_g1

0x2f24,	// (0x00022b93) scroll_handle_pane_g2

0x2f02,	// (0x00022b71) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002f359) scroll_handle_pane_g

0x2bed,	// (0x0002285c) bg_popup_sub_pane_cp21_ParamLimits

0x2bed,	// (0x0002285c) bg_popup_sub_pane_cp21

0x2f38,	// (0x00022ba7) popup_fep_japan_predictive_window_t1_ParamLimits

0x2f38,	// (0x00022ba7) popup_fep_japan_predictive_window_t1

0x2f4f,	// (0x00022bbe) popup_fep_japan_predictive_window_t2_ParamLimits

0x2f4f,	// (0x00022bbe) popup_fep_japan_predictive_window_t2

0x2f82,	// (0x00022bf1) popup_fep_japan_predictive_window_t3_ParamLimits

0x2f82,	// (0x00022bf1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002f360) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002f360) popup_fep_japan_predictive_window_t

0x252d,	// (0x0002219c) bg_popup_sub_pane_cp23

0x2fb9,	// (0x00022c28) listscroll_japin_cand_pane

0x2fc1,	// (0x00022c30) popup_fep_japan_candidate_window_t1

0x2fcf,	// (0x00022c3e) candidate_pane_ParamLimits

0x2fcf,	// (0x00022c3e) candidate_pane

0x2fe1,	// (0x00022c50) scroll_pane_cp30

0x2fe9,	// (0x00022c58) list_single_popup_jap_candidate_pane_ParamLimits

0x2fe9,	// (0x00022c58) list_single_popup_jap_candidate_pane

0x252d,	// (0x0002219c) list_highlight_pane_cp30

0x2ffe,	// (0x00022c6d) list_single_popup_jap_candidate_pane_t1

0x300d,	// (0x00022c7c) level_1_signal

0x301a,	// (0x00022c89) level_2_signal

0x3027,	// (0x00022c96) level_3_signal

0x3034,	// (0x00022ca3) level_4_signal

0x3041,	// (0x00022cb0) level_5_signal

0x304e,	// (0x00022cbd) level_6_signal

0x305b,	// (0x00022cca) level_7_signal

0x300d,	// (0x00022c7c) level_1_battery

0x301a,	// (0x00022c89) level_2_battery

0x3027,	// (0x00022c96) level_3_battery

0x3034,	// (0x00022ca3) level_4_battery

0x3041,	// (0x00022cb0) level_5_battery

0x304e,	// (0x00022cbd) level_6_battery

0x305b,	// (0x00022cca) level_7_battery

0x3080,	// (0x00022cef) list_menu_pane_ParamLimits

0x3080,	// (0x00022cef) list_menu_pane

0x3096,	// (0x00022d05) scroll_pane_cp25_ParamLimits

0x3096,	// (0x00022d05) scroll_pane_cp25

0x30af,	// (0x00022d1e) list_double2_graphic_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double2_graphic_pane_cp2

0x30af,	// (0x00022d1e) list_double2_large_graphic_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double2_large_graphic_pane_cp2

0x30af,	// (0x00022d1e) list_double2_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double2_pane_cp2

0x30af,	// (0x00022d1e) list_double_graphic_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double_graphic_pane_cp2

0x30af,	// (0x00022d1e) list_double_large_graphic_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double_large_graphic_pane_cp2

0x30af,	// (0x00022d1e) list_double_number_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double_number_pane_cp2

0x30af,	// (0x00022d1e) list_double_pane_cp2_ParamLimits

0x30af,	// (0x00022d1e) list_double_pane_cp2

0xf342,	// (0x0002efb1) list_single_2graphic_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_2graphic_pane_cp2

0xf342,	// (0x0002efb1) list_single_graphic_heading_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_graphic_heading_pane_cp2

0xf342,	// (0x0002efb1) list_single_graphic_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_graphic_pane_cp2

0xf342,	// (0x0002efb1) list_single_heading_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_heading_pane_cp2

0x30bf,	// (0x00022d2e) list_single_large_graphic_pane_cp2_ParamLimits

0x30bf,	// (0x00022d2e) list_single_large_graphic_pane_cp2

0xf342,	// (0x0002efb1) list_single_number_heading_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_number_heading_pane_cp2

0xf342,	// (0x0002efb1) list_single_number_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_number_pane_cp2

0xf342,	// (0x0002efb1) list_single_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_pane_cp2

0x30d9,	// (0x00022d48) bg_popup_sub_pane_cp22

0x6bef,	// (0x0002685e) popup_side_volume_key_window_g1

0x6c13,	// (0x00026882) popup_side_volume_key_window_t1

0x6c2f,	// (0x0002689e) volume_small_pane_cp1

0x257b,	// (0x000221ea) bg_popup_sub_pane_cp24_ParamLimits

0x257b,	// (0x000221ea) bg_popup_sub_pane_cp24

0x30ef,	// (0x00022d5e) fep_china_uni_candidate_pane_ParamLimits

0x30ef,	// (0x00022d5e) fep_china_uni_candidate_pane

0x3103,	// (0x00022d72) fep_china_uni_entry_pane

0x3113,	// (0x00022d82) popup_fep_china_uni_window_g1

0x312f,	// (0x00022d9e) fep_china_uni_entry_pane_g1

0x3137,	// (0x00022da6) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002f391) fep_china_uni_entry_pane_g

0x313f,	// (0x00022dae) fep_entry_item_pane

0x3149,	// (0x00022db8) fep_candidate_item_pane

0x3151,	// (0x00022dc0) fep_china_uni_candidate_pane_g1

0x3159,	// (0x00022dc8) fep_china_uni_candidate_pane_g2

0x3161,	// (0x00022dd0) fep_china_uni_candidate_pane_g3

0x3169,	// (0x00022dd8) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002f396) fep_china_uni_candidate_pane_g

0x2523,	// (0x00022192) fep_entry_item_pane_g1

0x3171,	// (0x00022de0) fep_entry_item_pane_t1_ParamLimits

0x3171,	// (0x00022de0) fep_entry_item_pane_t1

0x3187,	// (0x00022df6) fep_candidate_item_pane_t1_ParamLimits

0x3187,	// (0x00022df6) fep_candidate_item_pane_t1

0x319c,	// (0x00022e0b) fep_candidate_item_pane_t2_ParamLimits

0x319c,	// (0x00022e0b) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002f39f) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002f39f) fep_candidate_item_pane_t

0x2599,	// (0x00022208) list_highlight_pane_cp31_ParamLimits

0x2599,	// (0x00022208) list_highlight_pane_cp31

0x31ae,	// (0x00022e1d) level_1_signal_lsc

0x31b7,	// (0x00022e26) level_2_signal_lsc

0x31c0,	// (0x00022e2f) level_3_signal_lsc

0x31c9,	// (0x00022e38) level_4_signal_lsc

0x31d2,	// (0x00022e41) level_5_signal_lsc

0x31db,	// (0x00022e4a) level_6_signal_lsc

0x31e4,	// (0x00022e53) level_7_signal_lsc

0x31e4,	// (0x00022e53) level_1_battery_lsc

0x31ed,	// (0x00022e5c) level_2_battery_lsc

0x31f6,	// (0x00022e65) level_3_battery_lsc

0x31ff,	// (0x00022e6e) level_4_battery_lsc

0x3208,	// (0x00022e77) level_5_battery_lsc

0x3211,	// (0x00022e80) level_6_battery_lsc

0x31ae,	// (0x00022e1d) level_7_battery_lsc

0x321a,	// (0x00022e89) scroll_handle_focus_pane_g1

0x3223,	// (0x00022e92) scroll_handle_focus_pane_g2

0x322c,	// (0x00022e9b) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002f3a4) scroll_handle_focus_pane_g

0xb46a,	// (0x0002b0d9) list_single_2graphic_pane_g1_ParamLimits

0xb46a,	// (0x0002b0d9) list_single_2graphic_pane_g1

0xe38b,	// (0x0002dffa) list_single_2graphic_pane_g2_ParamLimits

0xe38b,	// (0x0002dffa) list_single_2graphic_pane_g2

0xb50d,	// (0x0002b17c) list_single_2graphic_pane_g3_ParamLimits

0xb50d,	// (0x0002b17c) list_single_2graphic_pane_g3

0xebf0,	// (0x0002e85f) list_single_2graphic_pane_g4_ParamLimits

0xebf0,	// (0x0002e85f) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002f3ab) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002f3ab) list_single_2graphic_pane_g

0xebfc,	// (0x0002e86b) list_single_2graphic_pane_t1_ParamLimits

0xebfc,	// (0x0002e86b) list_single_2graphic_pane_t1

0xec2a,	// (0x0002e899) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xec2a,	// (0x0002e899) list_double2_graphic_large_graphic_pane_g1

0xe3ea,	// (0x0002e059) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe3ea,	// (0x0002e059) list_double2_graphic_large_graphic_pane_g2

0xe3fb,	// (0x0002e06a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe3fb,	// (0x0002e06a) list_double2_graphic_large_graphic_pane_g3

0xec3a,	// (0x0002e8a9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xec3a,	// (0x0002e8a9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002f3b4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002f3b4) list_double2_graphic_large_graphic_pane_g

0xec46,	// (0x0002e8b5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xec46,	// (0x0002e8b5) list_double2_graphic_large_graphic_pane_t1

0xec5c,	// (0x0002e8cb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xec5c,	// (0x0002e8cb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002f3bd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002f3bd) list_double2_graphic_large_graphic_pane_t

0x334f,	// (0x00022fbe) popup_fast_swap_window_ParamLimits

0x334f,	// (0x00022fbe) popup_fast_swap_window

0x336b,	// (0x00022fda) popup_side_volume_key_window

0x3385,	// (0x00022ff4) stacon_top_pane

0x338f,	// (0x00022ffe) status_pane_ParamLimits

0x338f,	// (0x00022ffe) status_pane

0xf3ce,	// (0x0002f03d) status_small_pane

0x252d,	// (0x0002219c) control_pane

0x252d,	// (0x0002219c) stacon_bottom_pane

0x2b27,	// (0x00022796) scroll_pane_cp121

0x2b1e,	// (0x0002278d) set_content_pane

0x3247,	// (0x00022eb6) bg_active_tab_pane_g1_cp1

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp1

0x3235,	// (0x00022ea4) bg_active_tab_pane_g3_cp1

0x3247,	// (0x00022eb6) bg_passive_tab_pane_g1_cp1

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp1

0x3235,	// (0x00022ea4) bg_passive_tab_pane_g3_cp1

0x3259,	// (0x00022ec8) bg_active_tab_pane_g1_cp2

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp2

0x3250,	// (0x00022ebf) bg_active_tab_pane_g3_cp2

0x3259,	// (0x00022ec8) bg_passive_tab_pane_g1_cp2

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp2

0x3250,	// (0x00022ebf) bg_passive_tab_pane_g3_cp2

0x326b,	// (0x00022eda) bg_active_tab_pane_g1_cp3

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp3

0x3262,	// (0x00022ed1) bg_active_tab_pane_g3_cp3

0x326b,	// (0x00022eda) bg_passive_tab_pane_g1_cp3

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp3

0x3262,	// (0x00022ed1) bg_passive_tab_pane_g3_cp3

0x327d,	// (0x00022eec) bg_active_tab_pane_g1_cp4

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp4

0x3274,	// (0x00022ee3) bg_active_tab_pane_g3_cp4

0x327d,	// (0x00022eec) bg_passive_tab_pane_g1_cp4

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp4

0x3274,	// (0x00022ee3) bg_passive_tab_pane_g3_cp4

0x32cd,	// (0x00022f3c) bg_active_tab_pane_g1_cp5

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp5

0x32c4,	// (0x00022f33) bg_active_tab_pane_g3_cp5

0x32cd,	// (0x00022f3c) bg_passive_tab_pane_g1_cp5

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp5

0x32c4,	// (0x00022f33) bg_passive_tab_pane_g3_cp5

0x47be,	// (0x0002442d) list_set_graphic_pane_ParamLimits

0x47be,	// (0x0002442d) list_set_graphic_pane

0x252d,	// (0x0002219c) bg_set_opt_pane_cp4

0x32d6,	// (0x00022f45) list_set_graphic_pane_g1_ParamLimits

0x32d6,	// (0x00022f45) list_set_graphic_pane_g1

0x32e2,	// (0x00022f51) list_set_graphic_pane_g2_ParamLimits

0x32e2,	// (0x00022f51) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002f3c2) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002f3c2) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0002f747) volume_small_pane_cp_g

0x3304,	// (0x00022f73) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3304,	// (0x00022f73) list_double2_large_graphic_pane_g1_cp2

0x3310,	// (0x00022f7f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3310,	// (0x00022f7f) list_double2_large_graphic_pane_g2_cp2

0x331f,	// (0x00022f8e) list_double2_large_graphic_pane_g3_cp2

0x3327,	// (0x00022f96) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3327,	// (0x00022f96) list_double2_large_graphic_pane_t1_cp2

0x333d,	// (0x00022fac) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x333d,	// (0x00022fac) list_double2_large_graphic_pane_t2_cp2

0x48a4,	// (0x00024513) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x48a4,	// (0x00024513) list_double_large_graphic_pane_g1_cp2

0x48b5,	// (0x00024524) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x48b5,	// (0x00024524) list_double_large_graphic_pane_g2_cp2

0x34a5,	// (0x00023114) list_double_large_graphic_pane_g3_cp2

0x48c4,	// (0x00024533) list_double_large_graphic_pane_g4_cp

0x48cc,	// (0x0002453b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x48cc,	// (0x0002453b) list_double_large_graphic_pane_t1_cp2

0x48e3,	// (0x00024552) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x48e3,	// (0x00024552) list_double_large_graphic_pane_t2_cp2

0x339d,	// (0x0002300c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x339d,	// (0x0002300c) list_double2_graphic_pane_g1_cp2

0x33a9,	// (0x00023018) list_double2_graphic_pane_g2_cp2_ParamLimits

0x33a9,	// (0x00023018) list_double2_graphic_pane_g2_cp2

0x33b8,	// (0x00023027) list_double2_graphic_pane_g3_cp2

0x33c0,	// (0x0002302f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x33c0,	// (0x0002302f) list_double2_graphic_pane_t1_cp2

0x33d6,	// (0x00023045) list_double2_graphic_pane_t2_cp2_ParamLimits

0x33d6,	// (0x00023045) list_double2_graphic_pane_t2_cp2

0x33e8,	// (0x00023057) list_single_number_heading_pane_g1_cp2_ParamLimits

0x33e8,	// (0x00023057) list_single_number_heading_pane_g1_cp2

0x33f4,	// (0x00023063) list_single_number_heading_pane_g2_cp2

0x33fc,	// (0x0002306b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x33fc,	// (0x0002306b) list_single_number_heading_pane_t1_cp2

0x3412,	// (0x00023081) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3412,	// (0x00023081) list_single_number_heading_pane_t2_cp2

0x3424,	// (0x00023093) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3424,	// (0x00023093) list_single_number_heading_pane_t3_cp2

0x33e8,	// (0x00023057) list_single_heading_pane_g1_cp2_ParamLimits

0x33e8,	// (0x00023057) list_single_heading_pane_g1_cp2

0x33f4,	// (0x00023063) list_single_heading_pane_g2_cp2

0x33fc,	// (0x0002306b) list_single_heading_pane_t1_cp2_ParamLimits

0x33fc,	// (0x0002306b) list_single_heading_pane_t1_cp2

0x4661,	// (0x000242d0) list_single_heading_pane_t2_cp2_ParamLimits

0x4661,	// (0x000242d0) list_single_heading_pane_t2_cp2

0x45a9,	// (0x00024218) list_double_graphic_pane_g1_cp2_ParamLimits

0x45a9,	// (0x00024218) list_double_graphic_pane_g1_cp2

0x45b5,	// (0x00024224) list_double_graphic_pane_g2_cp2_ParamLimits

0x45b5,	// (0x00024224) list_double_graphic_pane_g2_cp2

0x45c4,	// (0x00024233) list_double_graphic_pane_g3_cp2

0x45cc,	// (0x0002423b) list_double_graphic_pane_t1_cp2_ParamLimits

0x45cc,	// (0x0002423b) list_double_graphic_pane_t1_cp2

0x45e2,	// (0x00024251) list_double_graphic_pane_t2_cp2_ParamLimits

0x45e2,	// (0x00024251) list_double_graphic_pane_t2_cp2

0x3499,	// (0x00023108) list_double_number_pane_g1_cp2_ParamLimits

0x3499,	// (0x00023108) list_double_number_pane_g1_cp2

0x34a5,	// (0x00023114) list_double_number_pane_g2_cp2

0x456f,	// (0x000241de) list_double_number_pane_t1_cp2_ParamLimits

0x456f,	// (0x000241de) list_double_number_pane_t1_cp2

0x4581,	// (0x000241f0) list_double_number_pane_t2_cp2_ParamLimits

0x4581,	// (0x000241f0) list_double_number_pane_t2_cp2

0x4597,	// (0x00024206) list_double_number_pane_t3_cp2_ParamLimits

0x4597,	// (0x00024206) list_double_number_pane_t3_cp2

0x44d2,	// (0x00024141) list_single_graphic_pane_g1_cp2_ParamLimits

0x44d2,	// (0x00024141) list_single_graphic_pane_g1_cp2

0x34fb,	// (0x0002316a) list_single_graphic_pane_g2_cp2_ParamLimits

0x34fb,	// (0x0002316a) list_single_graphic_pane_g2_cp2

0x3507,	// (0x00023176) list_single_graphic_pane_g3_cp2

0x44aa,	// (0x00024119) list_single_graphic_pane_t1_cp2_ParamLimits

0x44aa,	// (0x00024119) list_single_graphic_pane_t1_cp2

0x34fb,	// (0x0002316a) list_single_number_pane_g1_cp2_ParamLimits

0x34fb,	// (0x0002316a) list_single_number_pane_g1_cp2

0x3507,	// (0x00023176) list_single_number_pane_g2_cp2

0x44aa,	// (0x00024119) list_single_number_pane_t1_cp2_ParamLimits

0x44aa,	// (0x00024119) list_single_number_pane_t1_cp2

0x44c0,	// (0x0002412f) list_single_number_pane_t2_cp2_ParamLimits

0x44c0,	// (0x0002412f) list_single_number_pane_t2_cp2

0x3310,	// (0x00022f7f) list_double2_pane_g1_cp2_ParamLimits

0x3310,	// (0x00022f7f) list_double2_pane_g1_cp2

0x331f,	// (0x00022f8e) list_double2_pane_g2_cp2

0x3471,	// (0x000230e0) list_double2_pane_t1_cp2_ParamLimits

0x3471,	// (0x000230e0) list_double2_pane_t1_cp2

0x3487,	// (0x000230f6) list_double2_pane_t2_cp2_ParamLimits

0x3487,	// (0x000230f6) list_double2_pane_t2_cp2

0x3499,	// (0x00023108) list_double_pane_g1_cp2_ParamLimits

0x3499,	// (0x00023108) list_double_pane_g1_cp2

0x34a5,	// (0x00023114) list_double_pane_g2_cp2

0x34ad,	// (0x0002311c) list_double_pane_t1_cp2_ParamLimits

0x34ad,	// (0x0002311c) list_double_pane_t1_cp2

0x34c3,	// (0x00023132) list_double_pane_t2_cp2_ParamLimits

0x34c3,	// (0x00023132) list_double_pane_t2_cp2

0x34eb,	// (0x0002315a) list_single_pane_cp2_g3

0x34fb,	// (0x0002316a) list_single_pane_g1_cp2_ParamLimits

0x34fb,	// (0x0002316a) list_single_pane_g1_cp2

0x3507,	// (0x00023176) list_single_pane_g2_cp2

0x350f,	// (0x0002317e) list_single_pane_t1_cp2_ParamLimits

0x350f,	// (0x0002317e) list_single_pane_t1_cp2

0x3527,	// (0x00023196) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3527,	// (0x00023196) list_single_large_graphic_pane_g1_cp2

0x3533,	// (0x000231a2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3533,	// (0x000231a2) list_single_large_graphic_pane_g2_cp2

0x353f,	// (0x000231ae) list_single_large_graphic_pane_g3_cp2

0x3547,	// (0x000231b6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3547,	// (0x000231b6) list_single_large_graphic_pane_g4_cp1

0x3561,	// (0x000231d0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3561,	// (0x000231d0) list_single_large_graphic_pane_t1_cp2

0x4476,	// (0x000240e5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4476,	// (0x000240e5) list_single_graphic_heading_pane_g1_cp2

0x4445,	// (0x000240b4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4445,	// (0x000240b4) list_single_graphic_heading_pane_g4_cp2

0x3507,	// (0x00023176) list_single_graphic_heading_pane_g5_cp2

0x4482,	// (0x000240f1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4482,	// (0x000240f1) list_single_graphic_heading_pane_t1_cp2

0x4498,	// (0x00024107) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4498,	// (0x00024107) list_single_graphic_heading_pane_t2_cp2

0x4439,	// (0x000240a8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4439,	// (0x000240a8) list_single_2graphic_pane_g1_cp2

0x4445,	// (0x000240b4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4445,	// (0x000240b4) list_single_2graphic_pane_g2_cp2

0x3507,	// (0x00023176) list_single_2graphic_pane_g3_cp2

0x4454,	// (0x000240c3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4454,	// (0x000240c3) list_single_2graphic_pane_g4_cp2

0x4460,	// (0x000240cf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4460,	// (0x000240cf) list_single_2graphic_pane_t1_cp2

0x2523,	// (0x00022192) list_highlight_pane_g10_cp1

0x404b,	// (0x00023cba) list_highlight_pane_g1_cp1

0x4053,	// (0x00023cc2) list_highlight_pane_g2_cp1

0x405b,	// (0x00023cca) list_highlight_pane_g3_cp1

0x4063,	// (0x00023cd2) list_highlight_pane_g4_cp1

0x406b,	// (0x00023cda) list_highlight_pane_g5_cp1

0x4073,	// (0x00023ce2) list_highlight_pane_g6_cp1

0x407b,	// (0x00023cea) list_highlight_pane_g7_cp1

0x4083,	// (0x00023cf2) list_highlight_pane_g8_cp1

0x408b,	// (0x00023cfa) list_highlight_pane_g9_cp1

0x085a,	// (0x000204c9) form_field_slider_pane_t3

0x0868,	// (0x000204d7) form_field_slider_pane_t4

0x3f8f,	// (0x00023bfe) slider_form_pane_ParamLimits

0x3f8f,	// (0x00023bfe) slider_form_pane

0x252d,	// (0x0002219c) control_abbreviations

0x252d,	// (0x0002219c) control_conventions

0x252d,	// (0x0002219c) control_definitions

0x252d,	// (0x0002219c) format_table_attribute

0x46ab,	// (0x0002431a) bg_popup_preview_window_pane_g9

0x252d,	// (0x0002219c) format_table_data2

0x252d,	// (0x0002219c) format_table_data3

0x252d,	// (0x0002219c) format_table_data_example

0x0008,

0x252d,	// (0x0002219c) intro_purpose

0xf8ea,	// (0x0002f559) bg_popup_preview_window_pane_g

0x252d,	// (0x0002219c) texts_category

0x252d,	// (0x0002219c) texts_graphics

0x3577,	// (0x000231e6) text_digital

0x3586,	// (0x000231f5) text_primary

0x3595,	// (0x00023204) text_primary_small

0x35a4,	// (0x00023213) text_secondary

0x35b3,	// (0x00023222) text_title

0x4b84,	// (0x000247f3) bg_passive_tab_pane_g1_cp3_srt

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp3_srt

0x4b7b,	// (0x000247ea) bg_passive_tab_pane_g3_cp3_srt

0x257b,	// (0x000221ea) bg_active_tab_pane_cp3_srt_ParamLimits

0x257b,	// (0x000221ea) bg_active_tab_pane_cp3_srt

0x4b8d,	// (0x000247fc) tabs_4_active_pane_srt_g1

0x0bfd,	// (0x0002086c) tabs_4_active_pane_srt_t1_ParamLimits

0x0bfd,	// (0x0002086c) tabs_4_active_pane_srt_t1

0x4b84,	// (0x000247f3) bg_active_tab_pane_g1_cp3_copy1

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp3_copy1

0x4b7b,	// (0x000247ea) bg_active_tab_pane_g3_cp3_copy1

0x2599,	// (0x00022208) tabs_2_long_active_pane_srt_ParamLimits

0x2599,	// (0x00022208) tabs_2_long_active_pane_srt

0x2599,	// (0x00022208) tabs_2_long_passive_pane_srt_ParamLimits

0x2599,	// (0x00022208) tabs_2_long_passive_pane_srt

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp4_srt

0x4a9e,	// (0x0002470d) bg_passive_tab_pane_g1_cp4_srt

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp4_srt

0x4a95,	// (0x00024704) bg_passive_tab_pane_g3_cp4_srt

0x2599,	// (0x00022208) bg_active_tab_pane_cp4_srt_ParamLimits

0x2599,	// (0x00022208) bg_active_tab_pane_cp4_srt

0x09f5,	// (0x00020664) tabs_2_long_active_pane_srt_t1_ParamLimits

0x09f5,	// (0x00020664) tabs_2_long_active_pane_srt_t1

0x4a9e,	// (0x0002470d) bg_active_tab_pane_g1_cp4_srt

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp4_srt

0x4a95,	// (0x00024704) bg_active_tab_pane_g3_cp4_srt

0x257b,	// (0x000221ea) tabs_3_long_active_pane_srt_ParamLimits

0x257b,	// (0x000221ea) tabs_3_long_active_pane_srt

0x257b,	// (0x000221ea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x257b,	// (0x000221ea) tabs_3_long_passive_pane_cp_srt

0x257b,	// (0x000221ea) tabs_3_long_passive_pane_srt_ParamLimits

0x257b,	// (0x000221ea) tabs_3_long_passive_pane_srt

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp5_srt

0x32cd,	// (0x00022f3c) bg_passive_tab_pane_g1_cp5_srt

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp5_srt

0x32c4,	// (0x00022f33) bg_passive_tab_pane_g3_cp5_srt

0x2599,	// (0x00022208) bg_active_tab_pane_cp5_srt_ParamLimits

0x2599,	// (0x00022208) bg_active_tab_pane_cp5_srt

0x09df,	// (0x0002064e) tabs_3_long_active_pane_srt_t1_ParamLimits

0x09df,	// (0x0002064e) tabs_3_long_active_pane_srt_t1

0x32cd,	// (0x00022f3c) bg_active_tab_pane_g1_cp5_srt

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp5_srt

0x32c4,	// (0x00022f33) bg_active_tab_pane_g3_cp5_srt

0x4a87,	// (0x000246f6) navi_text_pane_srt_t1

0x4a7f,	// (0x000246ee) navi_icon_pane_srt_g1

0x36cb,	// (0x0002333a) midp_editing_number_pane_srt

0x35c2,	// (0x00023231) midp_ticker_pane_srt

0x36d3,	// (0x00023342) midp_ticker_pane_srt_g1

0x36db,	// (0x0002334a) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002f3e1) midp_ticker_pane_srt_g

0x36e3,	// (0x00023352) midp_ticker_pane_srt_t1

0x4a70,	// (0x000246df) midp_editing_number_pane_t1_copy1

0xf3d7,	// (0x0002f046) listscroll_midp_pane

0xf3d7,	// (0x0002f046) midp_form_pane

0x35ca,	// (0x00023239) midp_info_popup_window_ParamLimits

0x35ca,	// (0x00023239) midp_info_popup_window

0x2bed,	// (0x0002285c) bg_popup_sub_pane_cp50_ParamLimits

0x2bed,	// (0x0002285c) bg_popup_sub_pane_cp50

0x3cb8,	// (0x00023927) listscroll_midp_info_pane_ParamLimits

0x3cb8,	// (0x00023927) listscroll_midp_info_pane

0x3c90,	// (0x000238ff) listscroll_form_midp_pane_ParamLimits

0x3c90,	// (0x000238ff) listscroll_form_midp_pane

0x3ca4,	// (0x00023913) scroll_bar_cp050

0x3c90,	// (0x000238ff) list_midp_pane

0x53f8,	// (0x00025067) signal_pane_g2_cp

0x3bca,	// (0x00023839) listscroll_midp_info_pane_t1_ParamLimits

0x3bca,	// (0x00023839) listscroll_midp_info_pane_t1

0x3be2,	// (0x00023851) listscroll_midp_info_pane_t2_ParamLimits

0x3be2,	// (0x00023851) listscroll_midp_info_pane_t2

0x3c20,	// (0x0002388f) listscroll_midp_info_pane_t3_ParamLimits

0x3c20,	// (0x0002388f) listscroll_midp_info_pane_t3

0x3c5a,	// (0x000238c9) listscroll_midp_info_pane_t4_ParamLimits

0x3c5a,	// (0x000238c9) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002f494) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002f494) listscroll_midp_info_pane_t

0x2c6d,	// (0x000228dc) scroll_pane_cp21

0x3b6e,	// (0x000237dd) form_midp_field_choice_group_pane

0x3b77,	// (0x000237e6) form_midp_field_text_pane

0x3bb0,	// (0x0002381f) form_midp_field_time_pane

0x3bb8,	// (0x00023827) form_midp_gauge_slider_pane

0x3bc1,	// (0x00023830) form_midp_gauge_wait_pane

0x252d,	// (0x0002219c) form_midp_image_pane

0xec6e,	// (0x0002e8dd) list_single_midp_pane_ParamLimits

0xec6e,	// (0x0002e8dd) list_single_midp_pane

0x083b,	// (0x000204aa) form_midp_field_text_pane_t1

0x39f9,	// (0x00023668) input_focus_pane_cp050

0x3b5d,	// (0x000237cc) list_midp_form_text_pane

0x3b2c,	// (0x0002379b) form_midp_field_choice_group_pane_t1

0x3b3a,	// (0x000237a9) input_focus_pane_cp051

0x3b4e,	// (0x000237bd) list_midp_choice_pane

0x252d,	// (0x0002219c) status_idle_pane

0x3b10,	// (0x0002377f) form_midp_field_time_pane_t1

0x2523,	// (0x00022192) wait_anim_pane_g2_copy1

0x3b1e,	// (0x0002378d) form_midp_field_time_pane_t2

0x0001,

0x3635,	// (0x000232a4) aid_navinavi_width_2_pane

0xf820,	// (0x0002f48f) form_midp_field_time_pane_t

0x252d,	// (0x0002219c) input_focus_pane_cp052

0x252d,	// (0x0002219c) bg_input_focus_pane_cp040

0x3aec,	// (0x0002375b) form_midp_gauge_slider_pane_t1

0x3afa,	// (0x00023769) form_midp_gauge_slider_pane_t2

0x081f,	// (0x0002048e) form_midp_gauge_slider_pane_t3

0x082d,	// (0x0002049c) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002f486) form_midp_gauge_slider_pane_t

0x3b08,	// (0x00023777) form_midp_slider_pane

0x2599,	// (0x00022208) bg_input_focus_pane_cp041_ParamLimits

0x2599,	// (0x00022208) bg_input_focus_pane_cp041

0x3abc,	// (0x0002372b) form_midp_gauge_wait_pane_t1_ParamLimits

0x3abc,	// (0x0002372b) form_midp_gauge_wait_pane_t1

0x3ace,	// (0x0002373d) form_midp_gauge_wait_pane_t2_ParamLimits

0x3ace,	// (0x0002373d) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002f481) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002f481) form_midp_gauge_wait_pane_t

0x3ae0,	// (0x0002374f) form_midp_wait_pane_ParamLimits

0x3ae0,	// (0x0002374f) form_midp_wait_pane

0x3a86,	// (0x000236f5) form_midp_image_pane_g1

0x3a8f,	// (0x000236fe) form_midp_image_pane_t1

0x3a9e,	// (0x0002370d) form_midp_image_pane_t2

0x3aad,	// (0x0002371c) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002f47a) form_midp_image_pane_t

0x3a7d,	// (0x000236ec) list_single_midp_pane_g1

0xb5ab,	// (0x0002b21a) list_single_midp_pane_t1

0x080d,	// (0x0002047c) list_midp_form_item_pane_ParamLimits

0x080d,	// (0x0002047c) list_midp_form_item_pane

0x35dd,	// (0x0002324c) list_midp_form_item_pane_t1

0x35ec,	// (0x0002325b) midp_ticker_pane_g1

0x35f8,	// (0x00023267) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002f3c7) midp_ticker_pane_g

0x3604,	// (0x00023273) midp_ticker_pane_t1

0x4b08,	// (0x00024777) midp_editing_number_pane_t1

0x4ae6,	// (0x00024755) midp_editing_number_pane

0x4af5,	// (0x00024764) midp_ticker_pane

0x4a60,	// (0x000246cf) ai_message_heading_pane

0x252d,	// (0x0002219c) bg_popup_window_pane_cp14

0x4a68,	// (0x000246d7) listscroll_ai_message_pane

0x49ea,	// (0x00024659) ai_message_heading_pane_g1_ParamLimits

0x49ea,	// (0x00024659) ai_message_heading_pane_g1

0x49f6,	// (0x00024665) ai_message_heading_pane_g2_ParamLimits

0x49f6,	// (0x00024665) ai_message_heading_pane_g2

0x4a02,	// (0x00024671) ai_message_heading_pane_g3_ParamLimits

0x4a02,	// (0x00024671) ai_message_heading_pane_g3

0x4a0e,	// (0x0002467d) ai_message_heading_pane_g4_ParamLimits

0x4a0e,	// (0x0002467d) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002f5bb) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002f5bb) ai_message_heading_pane_g

0x4a1a,	// (0x00024689) ai_message_heading_pane_t1_ParamLimits

0x4a1a,	// (0x00024689) ai_message_heading_pane_t1

0x4a34,	// (0x000246a3) ai_message_heading_pane_t2_ParamLimits

0x4a34,	// (0x000246a3) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002f5c4) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002f5c4) ai_message_heading_pane_t

0x4a46,	// (0x000246b5) bg_popup_heading_pane_cp1_ParamLimits

0x4a46,	// (0x000246b5) bg_popup_heading_pane_cp1

0x49d8,	// (0x00024647) list_ai_message_pane_ParamLimits

0x49d8,	// (0x00024647) list_ai_message_pane

0x2c6d,	// (0x000228dc) scroll_pane_cp10

0x4974,	// (0x000245e3) list_ai_message_pane_g1

0x497c,	// (0x000245eb) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002f598) list_ai_message_pane_g

0x4984,	// (0x000245f3) list_ai_message_pane_t1_ParamLimits

0x4984,	// (0x000245f3) list_ai_message_pane_t1

0x4999,	// (0x00024608) list_ai_message_pane_t2_ParamLimits

0x4999,	// (0x00024608) list_ai_message_pane_t2

0x49ae,	// (0x0002461d) list_ai_message_pane_t3_ParamLimits

0x49ae,	// (0x0002461d) list_ai_message_pane_t3

0x49c3,	// (0x00024632) list_ai_message_pane_t4_ParamLimits

0x49c3,	// (0x00024632) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002f59d) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002f59d) list_ai_message_pane_t

0x0984,	// (0x000205f3) cell_ai_soft_ind_pane_ParamLimits

0x0984,	// (0x000205f3) cell_ai_soft_ind_pane

0x3616,	// (0x00023285) cell_ai_soft_ind_pane_g1_ParamLimits

0x3616,	// (0x00023285) cell_ai_soft_ind_pane_g1

0x252d,	// (0x0002219c) grid_highlight_cp1

0x3623,	// (0x00023292) text_secondary_cp56_ParamLimits

0x3623,	// (0x00023292) text_secondary_cp56

0x4949,	// (0x000245b8) example_general_pane_ParamLimits

0x4949,	// (0x000245b8) example_general_pane

0x4955,	// (0x000245c4) example_parent_pane_g1_ParamLimits

0x4955,	// (0x000245c4) example_parent_pane_g1

0x4961,	// (0x000245d0) example_parent_pane_t1_ParamLimits

0x4961,	// (0x000245d0) example_parent_pane_t1

0xd795,	// (0x0002d404) popup_preview_text_window_ParamLimits

0xd795,	// (0x0002d404) popup_preview_text_window

0x34f3,	// (0x00023162) list_single_pane_cp2_g4

0x2774,	// (0x000223e3) bg_popup_preview_window_pane_ParamLimits

0x2774,	// (0x000223e3) bg_popup_preview_window_pane

0x46b3,	// (0x00024322) popup_preview_text_window_t1_ParamLimits

0x46b3,	// (0x00024322) popup_preview_text_window_t1

0x46d1,	// (0x00024340) popup_preview_text_window_t2_ParamLimits

0x46d1,	// (0x00024340) popup_preview_text_window_t2

0x471a,	// (0x00024389) popup_preview_text_window_t3_ParamLimits

0x471a,	// (0x00024389) popup_preview_text_window_t3

0x475f,	// (0x000243ce) popup_preview_text_window_t4_ParamLimits

0x475f,	// (0x000243ce) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002f56c) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002f56c) popup_preview_text_window_t

0x482a,	// (0x00024499) scroll_pane_cp11

0x396d,	// (0x000235dc) bg_popup_preview_window_pane_g1

0x4673,	// (0x000242e2) bg_popup_preview_window_pane_g2

0x467b,	// (0x000242ea) bg_popup_preview_window_pane_g3

0x4683,	// (0x000242f2) bg_popup_preview_window_pane_g4

0x468b,	// (0x000242fa) bg_popup_preview_window_pane_g5

0x4693,	// (0x00024302) bg_popup_preview_window_pane_g6

0x469b,	// (0x0002430a) bg_popup_preview_window_pane_g7

0x46a3,	// (0x00024312) bg_popup_preview_window_pane_g8

0x618f,	// (0x00025dfe) aid_popup_width_pane

0xd717,	// (0x0002d386) popup_midp_note_alarm_window_ParamLimits

0xd717,	// (0x0002d386) popup_midp_note_alarm_window

0x2b38,	// (0x000227a7) data_form_pane_ParamLimits

0xeb25,	// (0x0002e794) form_field_data_pane_g1

0xeb2f,	// (0x0002e79e) form_field_data_pane_t1_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_ParamLimits

0xb301,	// (0x0002af70) data_form_wide_pane_ParamLimits

0xb312,	// (0x0002af81) form_field_data_wide_pane_g1

0xb31e,	// (0x0002af8d) form_field_data_wide_pane_t1_ParamLimits

0x2964,	// (0x000225d3) input_focus_pane_cp6_ParamLimits

0xf23e,	// (0x0002eead) input_popup_find_pane_g1_ParamLimits

0xf23e,	// (0x0002eead) input_popup_find_pane_g1

0x69a1,	// (0x00026610) aid_navi_side_left_pane

0x69b2,	// (0x00026621) aid_navi_side_right_pane

0x411c,	// (0x00023d8b) bg_popup_window_pane_cp30_ParamLimits

0x411c,	// (0x00023d8b) bg_popup_window_pane_cp30

0x4196,	// (0x00023e05) popup_midp_note_alarm_window_g1_ParamLimits

0x4196,	// (0x00023e05) popup_midp_note_alarm_window_g1

0x41c6,	// (0x00023e35) popup_midp_note_alarm_window_t1_ParamLimits

0x41c6,	// (0x00023e35) popup_midp_note_alarm_window_t1

0x4267,	// (0x00023ed6) popup_midp_note_alarm_window_t2_ParamLimits

0x4267,	// (0x00023ed6) popup_midp_note_alarm_window_t2

0x4315,	// (0x00023f84) popup_midp_note_alarm_window_t3_ParamLimits

0x4315,	// (0x00023f84) popup_midp_note_alarm_window_t3

0x433d,	// (0x00023fac) popup_midp_note_alarm_window_t4_ParamLimits

0x433d,	// (0x00023fac) popup_midp_note_alarm_window_t4

0x435d,	// (0x00023fcc) popup_midp_note_alarm_window_t5_ParamLimits

0x435d,	// (0x00023fcc) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002f509) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002f509) popup_midp_note_alarm_window_t

0x4409,	// (0x00024078) wait_bar_pane_cp1_ParamLimits

0x4409,	// (0x00024078) wait_bar_pane_cp1

0x252d,	// (0x0002219c) wait_anim_pane_copy1

0x252d,	// (0x0002219c) wait_border_pane_copy1

0x3e5c,	// (0x00023acb) wait_border_pane_g1_copy1

0xb338,	// (0x0002afa7) form_field_popup_pane_g1

0xeb47,	// (0x0002e7b6) form_field_popup_pane_t1_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_cp7_ParamLimits

0x2b72,	// (0x000227e1) list_form_pane_ParamLimits

0xb358,	// (0x0002afc7) form_field_popup_wide_pane_g1

0xb360,	// (0x0002afcf) form_field_popup_wide_pane_t1_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_cp8_ParamLimits

0x2b7e,	// (0x000227ed) list_form_wide_pane_ParamLimits

0x4bb4,	// (0x00024823) aid_size_cell_graphic_pane

0xebc2,	// (0x0002e831) data_form_pane_t1_ParamLimits

0xec94,	// (0x0002e903) data_form_wide_pane_t1_ParamLimits

0x0440,	// (0x000200af) bg_status_flat_pane

0xef10,	// (0x0002eb7f) title_pane_t1_ParamLimits

0x2543,	// (0x000221b2) title_pane_t2_ParamLimits

0x2569,	// (0x000221d8) title_pane_t3_ParamLimits

0xf557,	// (0x0002f1c6) title_pane_t_ParamLimits

0x300d,	// (0x00022c7c) level_1_signal_ParamLimits

0x301a,	// (0x00022c89) level_2_signal_ParamLimits

0x3027,	// (0x00022c96) level_3_signal_ParamLimits

0x3034,	// (0x00022ca3) level_4_signal_ParamLimits

0x3041,	// (0x00022cb0) level_5_signal_ParamLimits

0x304e,	// (0x00022cbd) level_6_signal_ParamLimits

0x305b,	// (0x00022cca) level_7_signal_ParamLimits

0x300d,	// (0x00022c7c) level_1_battery_ParamLimits

0x301a,	// (0x00022c89) level_2_battery_ParamLimits

0x3027,	// (0x00022c96) level_3_battery_ParamLimits

0x3034,	// (0x00022ca3) level_4_battery_ParamLimits

0x3041,	// (0x00022cb0) level_5_battery_ParamLimits

0x304e,	// (0x00022cbd) level_6_battery_ParamLimits

0x305b,	// (0x00022cca) level_7_battery_ParamLimits

0x404b,	// (0x00023cba) bg_status_flat_pane_g1

0x4053,	// (0x00023cc2) bg_status_flat_pane_g2

0x405b,	// (0x00023cca) bg_status_flat_pane_g3

0x4063,	// (0x00023cd2) bg_status_flat_pane_g4

0x406b,	// (0x00023cda) bg_status_flat_pane_g5

0x4073,	// (0x00023ce2) bg_status_flat_pane_g6

0x407b,	// (0x00023cea) bg_status_flat_pane_g7

0xef9c,	// (0x0002ec0b) tabs_3_active_pane_t1_ParamLimits

0xef9c,	// (0x0002ec0b) tabs_3_passive_pane_t1_ParamLimits

0xefae,	// (0x0002ec1d) tabs_4_active_pane_t1_ParamLimits

0xefae,	// (0x0002ec1d) tabs_4_1_passive_pane_t1_ParamLimits

0xf24a,	// (0x0002eeb9) tabs_2_active_pane_t1_ParamLimits

0xf24a,	// (0x0002eeb9) tabs_2_passive_pane_t1_ParamLimits

0x2599,	// (0x00022208) bg_active_tab_pane_cp4_ParamLimits

0xf25c,	// (0x0002eecb) tabs_2_long_active_pane_t1_ParamLimits

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp4_ParamLimits

0x796a,	// (0x000275d9) list_single_midp_graphic_pane_t1_ParamLimits

0x2599,	// (0x00022208) bg_active_tab_pane_cp5_ParamLimits

0xf26f,	// (0x0002eede) tabs_3_long_active_pane_t1_ParamLimits

0x2cad,	// (0x0002291c) bg_passive_tab_pane_cp5_ParamLimits

0x796a,	// (0x000275d9) list_single_midp_graphic_pane_t1

0x0440,	// (0x000200af) bg_status_flat_pane_ParamLimits

0x3822,	// (0x00023491) indicator_pane_cp2_ParamLimits

0x3822,	// (0x00023491) indicator_pane_cp2

0x05b6,	// (0x00020225) navi_pane_srt_ParamLimits

0x05b6,	// (0x00020225) navi_pane_srt

0x386a,	// (0x000234d9) popup_clock_digital_analogue_window_cp1

0x25dd,	// (0x0002224c) indicator_pane_t1

0x35c2,	// (0x00023231) copy_highlight_pane

0x35c2,	// (0x00023231) cursor_graphics_pane

0x35c2,	// (0x00023231) graphic_within_text_pane

0x35c2,	// (0x00023231) link_highlight_pane

0x47ed,	// (0x0002445c) popup_preview_text_window_t5_ParamLimits

0x47ed,	// (0x0002445c) popup_preview_text_window_t5

0x363d,	// (0x000232ac) cursor_digital_pane

0x363d,	// (0x000232ac) cursor_primary_pane

0x364e,	// (0x000232bd) cursor_primary_small_pane

0x3656,	// (0x000232c5) cursor_secondary_pane

0x365e,	// (0x000232cd) cursor_title_pane

0x363d,	// (0x000232ac) link_highlight_digital_pane

0x3645,	// (0x000232b4) link_highlight_primary_pane

0x364e,	// (0x000232bd) link_highlight_primary_small_pane

0x3656,	// (0x000232c5) link_highlight_secondary_pane

0x365e,	// (0x000232cd) link_highlight_title_pane

0x363d,	// (0x000232ac) copy_highlight_digital_pane

0x363d,	// (0x000232ac) copy_highlight_primary_pane

0x364e,	// (0x000232bd) copy_highlight_primary_small_pane

0x3656,	// (0x000232c5) copy_highlight_secondary_pane

0x365e,	// (0x000232cd) copy_highlight_title_pane

0x3656,	// (0x000232c5) graphic_text_digital_pane

0x40cb,	// (0x00023d3a) graphic_text_primary_pane

0x40d4,	// (0x00023d43) graphic_text_primary_small_pane

0x364e,	// (0x000232bd) graphic_text_secondary_pane

0x363d,	// (0x000232ac) graphic_text_title_pane

0xf470,	// (0x0002f0df) cursor_primary_pane_g1

0x40bd,	// (0x00023d2c) cursor_text_primary_t1

0x088a,	// (0x000204f9) cursor_primary_small_pane_g1

0x40af,	// (0x00023d1e) cursor_text_primary_small_t1

0x0880,	// (0x000204ef) cursor_primary_small_pane_g1_copy1

0x40a1,	// (0x00023d10) cursor_text_primary_small_t1_copy1

0x4093,	// (0x00023d02) cursor_text_title_t1

0x0876,	// (0x000204e5) cursor_title_pane_g1

0xf470,	// (0x0002f0df) cursor_digital_pane_g1

0x3666,	// (0x000232d5) cursor_text_digital_t1

0x3674,	// (0x000232e3) link_highlight_primary_pane_g1

0x403c,	// (0x00023cab) link_highlight_primary_pane_t1

0x3674,	// (0x000232e3) link_highlight_primary_small_pane_g1

0x367c,	// (0x000232eb) link_highlight_primary_small_pane_t1

0x368b,	// (0x000232fa) link_highlight_secondary_pane_g1

0x3693,	// (0x00023302) link_highlight_secondary_pane_t1

0x3fa1,	// (0x00023c10) link_highlight_title_pane_g1

0x3fb8,	// (0x00023c27) link_highlight_title_pane_t1

0x3fa1,	// (0x00023c10) link_highlight_digital_pane_g1

0x3fa9,	// (0x00023c18) link_highlight_digital_pane_t1

0x3e77,	// (0x00023ae6) copy_highlight_primary_pane_g1

0x3e9d,	// (0x00023b0c) copy_highlight_primary_pane_t1

0x3e77,	// (0x00023ae6) copy_highlight_primary_small_pane_g1

0x3e8e,	// (0x00023afd) copy_highlight_primary_small_pane_t1

0x36a2,	// (0x00023311) copy_highlight_secondary_pane_g1

0x36aa,	// (0x00023319) copy_highlight_secondary_pane_t1

0x3e77,	// (0x00023ae6) copy_highlight_title_pane_g1

0x3e7f,	// (0x00023aee) copy_highlight_title_pane_t1

0x3e77,	// (0x00023ae6) copy_highlight_digital_pane_g1

0x4d36,	// (0x000249a5) copy_highlight_digital_pane_t1

0x4c8a,	// (0x000248f9) graphic_text_primary_pane_g1

0x4d1a,	// (0x00024989) graphic_text_primary_pane_t1

0x4d28,	// (0x00024997) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002f638) graphic_text_primary_pane_t

0x4cf6,	// (0x00024965) graphic_text_primary_small_pane_g1

0x4cfe,	// (0x0002496d) graphic_text_primary_small_pane_t1

0x4d0c,	// (0x0002497b) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002f633) graphic_text_primary_small_pane_t

0x4cd2,	// (0x00024941) graphic_text_secondary_pane_g1

0x4cda,	// (0x00024949) graphic_text_secondary_pane_t1

0x4ce8,	// (0x00024957) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002f62e) graphic_text_secondary_pane_t

0x4cae,	// (0x0002491d) graphic_text_title_pane_g1

0x4cb6,	// (0x00024925) graphic_text_title_pane_t1

0x4cc4,	// (0x00024933) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002f629) graphic_text_title_pane_t

0x4c8a,	// (0x000248f9) graphic_text_digital_pane_g1

0x4c92,	// (0x00024901) graphic_text_digital_pane_t1

0x4ca0,	// (0x0002490f) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002f624) graphic_text_digital_pane_t

0x2599,	// (0x00022208) navi_icon_pane_srt_ParamLimits

0x2599,	// (0x00022208) navi_icon_pane_srt

0x252d,	// (0x0002219c) navi_midp_pane_srt

0x252d,	// (0x0002219c) navi_navi_pane_srt

0x2599,	// (0x00022208) navi_text_pane_srt_ParamLimits

0x2599,	// (0x00022208) navi_text_pane_srt

0x4c55,	// (0x000248c4) navi_navi_icon_text_pane_srt

0x4c6f,	// (0x000248de) navi_navi_pane_srt_g1_ParamLimits

0x4c6f,	// (0x000248de) navi_navi_pane_srt_g1

0x4c5d,	// (0x000248cc) navi_navi_pane_srt_g2_ParamLimits

0x4c5d,	// (0x000248cc) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002f61f) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002f61f) navi_navi_pane_srt_g

0x4c81,	// (0x000248f0) navi_navi_tabs_pane_srt

0x4c55,	// (0x000248c4) navi_navi_text_pane_srt

0x4c55,	// (0x000248c4) navi_navi_volume_pane_srt

0x4c46,	// (0x000248b5) navi_navi_text_pane_srt_t1

0x8144,	// (0x00027db3) navi_navi_volume_pane_srt_g1

0x814c,	// (0x00027dbb) volume_small_pane_srt_ParamLimits

0x814c,	// (0x00027dbb) volume_small_pane_srt

0x6e1c,	// (0x00026a8b) volume_small_pane_srt_g1_ParamLimits

0x6e1c,	// (0x00026a8b) volume_small_pane_srt_g1

0x6e2c,	// (0x00026a9b) volume_small_pane_srt_g2_ParamLimits

0x6e2c,	// (0x00026a9b) volume_small_pane_srt_g2

0x6e3d,	// (0x00026aac) volume_small_pane_srt_g3_ParamLimits

0x6e3d,	// (0x00026aac) volume_small_pane_srt_g3

0x6e4e,	// (0x00026abd) volume_small_pane_srt_g4_ParamLimits

0x6e4e,	// (0x00026abd) volume_small_pane_srt_g4

0x6e5f,	// (0x00026ace) volume_small_pane_srt_g5_ParamLimits

0x6e5f,	// (0x00026ace) volume_small_pane_srt_g5

0x6e70,	// (0x00026adf) volume_small_pane_srt_g6_ParamLimits

0x6e70,	// (0x00026adf) volume_small_pane_srt_g6

0x6e81,	// (0x00026af0) volume_small_pane_srt_g7_ParamLimits

0x6e81,	// (0x00026af0) volume_small_pane_srt_g7

0x6e92,	// (0x00026b01) volume_small_pane_srt_g8_ParamLimits

0x6e92,	// (0x00026b01) volume_small_pane_srt_g8

0x6ea3,	// (0x00026b12) volume_small_pane_srt_g9_ParamLimits

0x6ea3,	// (0x00026b12) volume_small_pane_srt_g9

0x6eb4,	// (0x00026b23) volume_small_pane_srt_g10_ParamLimits

0x6eb4,	// (0x00026b23) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002f3cc) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002f3cc) volume_small_pane_srt_g

0x281d,	// (0x0002248c) query_popup_data_pane_cp2

0x4c2c,	// (0x0002489b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4c2c,	// (0x0002489b) navi_navi_icon_text_pane_srt_t1

0x40cb,	// (0x00023d3a) navi_tabs_2_long_pane_srt

0x40cb,	// (0x00023d3a) navi_tabs_2_pane_srt

0x40cb,	// (0x00023d3a) navi_tabs_3_long_pane_srt

0x40cb,	// (0x00023d3a) navi_tabs_3_pane_srt

0x40cb,	// (0x00023d3a) navi_tabs_4_pane_srt

0x8124,	// (0x00027d93) tabs_2_active_pane_srt_ParamLimits

0x8124,	// (0x00027d93) tabs_2_active_pane_srt

0x8134,	// (0x00027da3) tabs_2_passive_pane_srt_ParamLimits

0x8134,	// (0x00027da3) tabs_2_passive_pane_srt

0x39f9,	// (0x00023668) bg_passive_tab_pane_cp1_srt_ParamLimits

0x39f9,	// (0x00023668) bg_passive_tab_pane_cp1_srt

0x4c13,	// (0x00024882) bg_passive_tab_pane_g1_cp1_srt

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp1_srt

0x4c0a,	// (0x00024879) bg_passive_tab_pane_g3_cp1_srt

0x257b,	// (0x000221ea) bg_active_tab_pane_cp1_srt_ParamLimits

0x257b,	// (0x000221ea) bg_active_tab_pane_cp1_srt

0x4c1c,	// (0x0002488b) tabs_2_active_pane_srt_g1

0x0c7a,	// (0x000208e9) tabs_2_active_pane_srt_t1_ParamLimits

0x0c7a,	// (0x000208e9) tabs_2_active_pane_srt_t1

0x4c13,	// (0x00024882) bg_active_tab_pane_g1_cp1_srt

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp1_srt

0x4c0a,	// (0x00024879) bg_active_tab_pane_g3_cp1_srt

0x80df,	// (0x00027d4e) tabs_3_active_pane_srt_ParamLimits

0x80df,	// (0x00027d4e) tabs_3_active_pane_srt

0x80f0,	// (0x00027d5f) tabs_3_passive_pane_cp_srt_ParamLimits

0x80f0,	// (0x00027d5f) tabs_3_passive_pane_cp_srt

0x8101,	// (0x00027d70) tabs_3_passive_pane_srt_ParamLimits

0x8101,	// (0x00027d70) tabs_3_passive_pane_srt

0x39f9,	// (0x00023668) bg_passive_tab_pane_cp2_srt_ParamLimits

0x39f9,	// (0x00023668) bg_passive_tab_pane_cp2_srt

0x36c2,	// (0x00023331) bg_passive_tab_pane_g1_cp2_srt

0x323e,	// (0x00022ead) bg_passive_tab_pane_g2_cp2_srt

0x36b9,	// (0x00023328) bg_passive_tab_pane_g3_cp2_srt

0x257b,	// (0x000221ea) bg_active_tab_pane_cp2_srt_ParamLimits

0x257b,	// (0x000221ea) bg_active_tab_pane_cp2_srt

0x4c02,	// (0x00024871) tabs_3_active_pane_srt_g1

0x0c64,	// (0x000208d3) tabs_3_active_pane_srt_t1_ParamLimits

0x0c64,	// (0x000208d3) tabs_3_active_pane_srt_t1

0x36c2,	// (0x00023331) bg_active_tab_pane_g1_cp2_srt

0x323e,	// (0x00022ead) bg_active_tab_pane_g2_cp2_srt

0x36b9,	// (0x00023328) bg_active_tab_pane_g3_cp2_srt

0x8085,	// (0x00027cf4) tabs_4_active_pane_srt_ParamLimits

0x8085,	// (0x00027cf4) tabs_4_active_pane_srt

0x8097,	// (0x00027d06) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8097,	// (0x00027d06) tabs_4_passive_pane_cp2_srt

0x70ec,	// (0x00026d5b) aid_size_cell_toolbar

0x47cf,	// (0x0002443e) main_idle_act_pane_ParamLimits

0x728b,	// (0x00026efa) popup_large_graphic_colour_window_ParamLimits

0xd9e1,	// (0x0002d650) popup_toolbar_window_ParamLimits

0xd9e1,	// (0x0002d650) popup_toolbar_window

0x4b17,	// (0x00024786) list_single_graphic_2heading_pane_ParamLimits

0x4b17,	// (0x00024786) list_single_graphic_2heading_pane

0x2e57,	// (0x00022ac6) aid_size_cell_apps_grid_lsc_pane

0x2e69,	// (0x00022ad8) aid_size_cell_apps_grid_prt_pane

0x2cad,	// (0x0002291c) bg_wml_button_pane_cp1_ParamLimits

0x2cad,	// (0x0002291c) bg_wml_button_pane_cp1

0x083b,	// (0x000204aa) form_midp_field_text_pane_t1_ParamLimits

0x39f9,	// (0x00023668) input_focus_pane_cp050_ParamLimits

0x3b5d,	// (0x000237cc) list_midp_form_text_pane_ParamLimits

0x3b3a,	// (0x000237a9) input_focus_pane_cp051_ParamLimits

0x3b4e,	// (0x000237bd) list_midp_choice_pane_ParamLimits

0x07df,	// (0x0002044e) list_single_2graphic_pane_cp3_ParamLimits

0x07df,	// (0x0002044e) list_single_2graphic_pane_cp3

0x07f0,	// (0x0002045f) list_single_midp_graphic_pane_ParamLimits

0x07f0,	// (0x0002045f) list_single_midp_graphic_pane

0x6105,	// (0x00025d74) list_single_graphic_2heading_pane_g1_ParamLimits

0x6105,	// (0x00025d74) list_single_graphic_2heading_pane_g1

0x6111,	// (0x00025d80) list_single_graphic_2heading_pane_g4_ParamLimits

0x6111,	// (0x00025d80) list_single_graphic_2heading_pane_g4

0x611d,	// (0x00025d8c) list_single_graphic_2heading_pane_g5_ParamLimits

0x611d,	// (0x00025d8c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002f41f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002f41f) list_single_graphic_2heading_pane_g

0x6129,	// (0x00025d98) list_single_graphic_2heading_pane_t1_ParamLimits

0x6129,	// (0x00025d98) list_single_graphic_2heading_pane_t1

0x613d,	// (0x00025dac) list_single_graphic_2heading_pane_t2_ParamLimits

0x613d,	// (0x00025dac) list_single_graphic_2heading_pane_t2

0x6157,	// (0x00025dc6) list_single_graphic_2heading_pane_t3_ParamLimits

0x6157,	// (0x00025dc6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002f426) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002f426) list_single_graphic_2heading_pane_t

0x38ad,	// (0x0002351c) bg_popup_sub_pane_cp2

0x38d7,	// (0x00023546) grid_toobar_pane

0x78e3,	// (0x00027552) cell_toolbar_pane_ParamLimits

0x78e3,	// (0x00027552) cell_toolbar_pane

0x3911,	// (0x00023580) cell_toolbar_pane_g1_ParamLimits

0x3911,	// (0x00023580) cell_toolbar_pane_g1

0x3925,	// (0x00023594) cell_toolbar_pane_g2_ParamLimits

0x3925,	// (0x00023594) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0002f434) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0002f434) cell_toolbar_pane_g

0x3947,	// (0x000235b6) grid_highlight_pane_cp2_ParamLimits

0x3947,	// (0x000235b6) grid_highlight_pane_cp2

0x3961,	// (0x000235d0) toolbar_button_pane

0x396d,	// (0x000235dc) toolbar_button_pane_g1

0x397d,	// (0x000235ec) toolbar_button_pane_g2

0x3975,	// (0x000235e4) toolbar_button_pane_g3

0x398d,	// (0x000235fc) toolbar_button_pane_g4

0x3985,	// (0x000235f4) toolbar_button_pane_g5

0x3995,	// (0x00023604) toolbar_button_pane_g6

0x399d,	// (0x0002360c) toolbar_button_pane_g7

0x39ad,	// (0x0002361c) toolbar_button_pane_g8

0x39a5,	// (0x00023614) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0002f439) toolbar_button_pane_g

0x7915,	// (0x00027584) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7915,	// (0x00027584) list_single_2graphic_pane_g1_cp3

0xda2d,	// (0x0002d69c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xda2d,	// (0x0002d69c) list_single_2graphic_pane_g2_cp3

0x7930,	// (0x0002759f) list_single_2graphic_pane_g3_cp3

0x7938,	// (0x000275a7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7938,	// (0x000275a7) list_single_2graphic_pane_g4_cp3

0x7944,	// (0x000275b3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7944,	// (0x000275b3) list_single_2graphic_pane_t1_cp3

0x795e,	// (0x000275cd) list_single_midp_graphic_pane_g2_ParamLimits

0x795e,	// (0x000275cd) list_single_midp_graphic_pane_g2

0x70f4,	// (0x00026d63) aid_zoom_text_primary

0x60fd,	// (0x00025d6c) aid_zoom_text_secondary

0xf4c6,	// (0x0002f135) status_small_pane_g7_ParamLimits

0xf4c6,	// (0x0002f135) status_small_pane_g7

0xf4e9,	// (0x0002f158) status_small_pane_t1_ParamLimits

0xeeec,	// (0x0002eb5b) title_pane_g2

0x0003,

0xf54e,	// (0x0002f1bd) title_pane_g

0xf159,	// (0x0002edc8) aid_size_cell_colour_1_pane_ParamLimits

0xf159,	// (0x0002edc8) aid_size_cell_colour_1_pane

0xf16d,	// (0x0002eddc) aid_size_cell_colour_2_pane_ParamLimits

0xf16d,	// (0x0002eddc) aid_size_cell_colour_2_pane

0xf181,	// (0x0002edf0) aid_size_cell_colour_3_pane_ParamLimits

0xf181,	// (0x0002edf0) aid_size_cell_colour_3_pane

0xf195,	// (0x0002ee04) aid_size_cell_colour_4_pane_ParamLimits

0xf195,	// (0x0002ee04) aid_size_cell_colour_4_pane

0x68dd,	// (0x0002654c) title_pane_stacon_g1_ParamLimits

0x68dd,	// (0x0002654c) title_pane_stacon_g1

0x3ef4,	// (0x00023b63) popup_note_wait_window_g3_ParamLimits

0x3ef4,	// (0x00023b63) popup_note_wait_window_g3

0x3f6a,	// (0x00023bd9) popup_note_wait_window_t5_ParamLimits

0x3f6a,	// (0x00023bd9) popup_note_wait_window_t5

0x252d,	// (0x0002219c) main_feb_china_hwr_fs_writing_pane

0xd4e7,	// (0x0002d156) popup_feb_china_hwr_fs_window_ParamLimits

0xd4e7,	// (0x0002d156) popup_feb_china_hwr_fs_window

0xda3e,	// (0x0002d6ad) aid_size_cell_hwr_fs_ParamLimits

0xda3e,	// (0x0002d6ad) aid_size_cell_hwr_fs

0x39f9,	// (0x00023668) bg_popup_sub_pane_cp3_ParamLimits

0x39f9,	// (0x00023668) bg_popup_sub_pane_cp3

0xda53,	// (0x0002d6c2) grid_hwr_fs_pane_ParamLimits

0xda53,	// (0x0002d6c2) grid_hwr_fs_pane

0x79a9,	// (0x00027618) linegrid_hwr_fs_pane_ParamLimits

0x79a9,	// (0x00027618) linegrid_hwr_fs_pane

0xda6b,	// (0x0002d6da) cell_hwr_fs_pane_ParamLimits

0xda6b,	// (0x0002d6da) cell_hwr_fs_pane

0x3a05,	// (0x00023674) linegrid_hwr_fs_pane_g1_ParamLimits

0x3a05,	// (0x00023674) linegrid_hwr_fs_pane_g1

0x07a5,	// (0x00020414) linegrid_hwr_fs_pane_g2_ParamLimits

0x07a5,	// (0x00020414) linegrid_hwr_fs_pane_g2

0x3a11,	// (0x00023680) linegrid_hwr_fs_pane_g3_ParamLimits

0x3a11,	// (0x00023680) linegrid_hwr_fs_pane_g3

0x79e9,	// (0x00027658) linegrid_hwr_fs_pane_g4_ParamLimits

0x79e9,	// (0x00027658) linegrid_hwr_fs_pane_g4

0x7a03,	// (0x00027672) linegrid_hwr_fs_pane_g5_ParamLimits

0x7a03,	// (0x00027672) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002f45f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002f45f) linegrid_hwr_fs_pane_g

0x3a1d,	// (0x0002368c) cell_hwr_fs_pane_g1_ParamLimits

0x3a1d,	// (0x0002368c) cell_hwr_fs_pane_g1

0x387b,	// (0x000234ea) cell_hwr_fs_pane_g2_ParamLimits

0x387b,	// (0x000234ea) cell_hwr_fs_pane_g2

0x07b7,	// (0x00020426) cell_hwr_fs_pane_g3_ParamLimits

0x07b7,	// (0x00020426) cell_hwr_fs_pane_g3

0x07c4,	// (0x00020433) cell_hwr_fs_pane_g4_ParamLimits

0x07c4,	// (0x00020433) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002f46a) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002f46a) cell_hwr_fs_pane_g

0xda8b,	// (0x0002d6fa) cell_hwr_fs_pane_t1

0x252d,	// (0x0002219c) grid_highlight_pane_cp6

0x252d,	// (0x0002219c) main_idle_act2_pane

0x2c54,	// (0x000228c3) aid_inside_area_popup_secondary

0x0894,	// (0x00020503) aid_inside_area_window_primary_ParamLimits

0x0894,	// (0x00020503) aid_inside_area_window_primary

0x4d45,	// (0x000249b4) ai2_news_ticker_pane

0x4d4d,	// (0x000249bc) aid_size_cell_ai1_link_ParamLimits

0x4d4d,	// (0x000249bc) aid_size_cell_ai1_link

0x0c90,	// (0x000208ff) popup_ai2_data_window_ParamLimits

0x0c90,	// (0x000208ff) popup_ai2_data_window

0x4d67,	// (0x000249d6) popup_ai2_link_window_ParamLimits

0x4d67,	// (0x000249d6) popup_ai2_link_window

0x39f9,	// (0x00023668) bg_popup_sub_pane_cp4_ParamLimits

0x39f9,	// (0x00023668) bg_popup_sub_pane_cp4

0x4d7b,	// (0x000249ea) grid_ai2_link_pane_ParamLimits

0x4d7b,	// (0x000249ea) grid_ai2_link_pane

0x4d92,	// (0x00024a01) popup_ai2_link_window_g1_ParamLimits

0x4d92,	// (0x00024a01) popup_ai2_link_window_g1

0x4d9e,	// (0x00024a0d) popup_ai2_link_window_g2_ParamLimits

0x4d9e,	// (0x00024a0d) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002f63d) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002f63d) popup_ai2_link_window_g

0x4dad,	// (0x00024a1c) ai2_mp_button_pane

0x4db5,	// (0x00024a24) ai2_mp_volume_pane

0x3b3a,	// (0x000237a9) bg_popup_sub_pane_cp5_ParamLimits

0x3b3a,	// (0x000237a9) bg_popup_sub_pane_cp5

0x4dbd,	// (0x00024a2c) heading_ai2_gene_pane_ParamLimits

0x4dbd,	// (0x00024a2c) heading_ai2_gene_pane

0x4dc9,	// (0x00024a38) list_ai2_gene_pane_ParamLimits

0x4dc9,	// (0x00024a38) list_ai2_gene_pane

0x4e11,	// (0x00024a80) cell_ai2_link_pane_ParamLimits

0x4e11,	// (0x00024a80) cell_ai2_link_pane

0x4e27,	// (0x00024a96) cell_ai2_link_pane_g1

0x252d,	// (0x0002219c) grid_highlight_pane_cp7

0x81a7,	// (0x00027e16) ai2_mp_volume_pane_g1

0x4ecc,	// (0x00024b3b) ai2_mp_volume_pane_g2

0x0cb1,	// (0x00020920) list_ai2_gene_pane_t1

0x4ec4,	// (0x00024b33) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002f656) ai2_mp_volume_pane_g

0x81af,	// (0x00027e1e) volume_small_pane_cp3

0x4ed4,	// (0x00024b43) aid_size_cell_ai2_button

0x4edc,	// (0x00024b4b) grid_ai2_button_pane

0x4ee5,	// (0x00024b54) cell_ai2_button_pane_ParamLimits

0x4ee5,	// (0x00024b54) cell_ai2_button_pane

0x2523,	// (0x00022192) cell_ai2_button_pane_g1

0x252d,	// (0x0002219c) grid_highlight_pane_cp8

0x4e84,	// (0x00024af3) ai2_gene_pane_t1_ParamLimits

0x4e84,	// (0x00024af3) ai2_gene_pane_t1

0xd46d,	// (0x0002d0dc) aid_height_parent_landscape

0x0a3a,	// (0x000206a9) aid_height_set_list

0x47cf,	// (0x0002443e) aid_size_parent

0x4bb4,	// (0x00024823) aid_size_cell_graphic_pane_ParamLimits

0x4dd9,	// (0x00024a48) popup_ai2_data_window_g1_ParamLimits

0x4dd9,	// (0x00024a48) popup_ai2_data_window_g1

0x4de5,	// (0x00024a54) ai2_news_ticker_pane_g1

0x4ded,	// (0x00024a5c) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002f642) ai2_news_ticker_pane_g

0x4df5,	// (0x00024a64) ai2_news_ticker_pane_t1

0x4e03,	// (0x00024a72) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002f647) ai2_news_ticker_pane_t

0x4e30,	// (0x00024a9f) heading_ai2_gene_pane_g1

0x4e38,	// (0x00024aa7) heading_ai2_gene_pane_t1_ParamLimits

0x4e38,	// (0x00024aa7) heading_ai2_gene_pane_t1

0x4e4d,	// (0x00024abc) list_highlight_pane_cp6

0x0c9c,	// (0x0002090b) ai2_gene_pane_ParamLimits

0x0c9c,	// (0x0002090b) ai2_gene_pane

0x0cbf,	// (0x0002092e) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002f64c) list_ai2_gene_pane_t

0x4e55,	// (0x00024ac4) list_highlight_pane_cp8_ParamLimits

0x4e55,	// (0x00024ac4) list_highlight_pane_cp8

0x4e66,	// (0x00024ad5) ai2_gene_pane_g1_ParamLimits

0x4e66,	// (0x00024ad5) ai2_gene_pane_g1

0x4e78,	// (0x00024ae7) ai2_gene_pane_g2_ParamLimits

0x4e78,	// (0x00024ae7) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002f651) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002f651) ai2_gene_pane_g

0x2ae3,	// (0x00022752) scroll_pane_cp12

0xd42a,	// (0x0002d099) control_pane_t3_ParamLimits

0xd42a,	// (0x0002d099) control_pane_t3

0xf4da,	// (0x0002f149) status_small_pane_g8_ParamLimits

0xf4da,	// (0x0002f149) status_small_pane_g8

0xd55c,	// (0x0002d1cb) popup_find_window_ParamLimits

0xd74f,	// (0x0002d3be) popup_note_image_window_ParamLimits

0x946a,	// (0x000290d9) list_double2_graphic_pane_vc_g1_ParamLimits

0x946a,	// (0x000290d9) list_double2_graphic_pane_vc_g1

0xb501,	// (0x0002b170) list_double2_graphic_pane_vc_g2_ParamLimits

0xb501,	// (0x0002b170) list_double2_graphic_pane_vc_g2

0xb50d,	// (0x0002b17c) list_double2_graphic_pane_vc_g3_ParamLimits

0xb50d,	// (0x0002b17c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0002f42d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0002f42d) list_double2_graphic_pane_vc_g

0xb519,	// (0x0002b188) list_double2_graphic_pane_vc_t1_ParamLimits

0xb519,	// (0x0002b188) list_double2_graphic_pane_vc_t1

0xb501,	// (0x0002b170) list_single_heading_pane_vc_g1_ParamLimits

0xb501,	// (0x0002b170) list_single_heading_pane_vc_g1

0xb50d,	// (0x0002b17c) list_single_heading_pane_vc_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002f237) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002f237) list_single_heading_pane_vc_g

0xb52f,	// (0x0002b19e) list_single_heading_pane_vc_t1_ParamLimits

0xb52f,	// (0x0002b19e) list_single_heading_pane_vc_t1

0xb545,	// (0x0002b1b4) list_single_heading_pane_vc_t2_ParamLimits

0xb545,	// (0x0002b1b4) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002f44e) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002f44e) list_single_heading_pane_vc_t

0x39b5,	// (0x00023624) list_setting_number_pane_vc_g1_ParamLimits

0x39b5,	// (0x00023624) list_setting_number_pane_vc_g1

0x39c1,	// (0x00023630) list_setting_number_pane_vc_g2_ParamLimits

0x39c1,	// (0x00023630) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002f453) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002f453) list_setting_number_pane_vc_g

0xb557,	// (0x0002b1c6) list_setting_number_pane_vc_t1_ParamLimits

0xb557,	// (0x0002b1c6) list_setting_number_pane_vc_t1

0xb56b,	// (0x0002b1da) list_setting_number_pane_vc_t2_ParamLimits

0xb56b,	// (0x0002b1da) list_setting_number_pane_vc_t2

0xb583,	// (0x0002b1f2) list_setting_number_pane_vc_t3_ParamLimits

0xb583,	// (0x0002b1f2) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002f458) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002f458) list_setting_number_pane_vc_t

0xb59b,	// (0x0002b20a) set_value_pane_vc_ParamLimits

0xb59b,	// (0x0002b20a) set_value_pane_vc

0x4b17,	// (0x00024786) list_double2_graphic_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double2_graphic_pane_vc

0x4b17,	// (0x00024786) list_double2_large_graphic_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double2_large_graphic_pane_vc

0x4b17,	// (0x00024786) list_double2_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double2_pane_vc

0x4b17,	// (0x00024786) list_double_graphic_heading_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double_graphic_heading_pane_vc

0x4b17,	// (0x00024786) list_double_graphic_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double_graphic_pane_vc

0x4b17,	// (0x00024786) list_double_heading_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double_heading_pane_vc

0x4b28,	// (0x00024797) list_double_large_graphic_pane_vc_ParamLimits

0x4b28,	// (0x00024797) list_double_large_graphic_pane_vc

0x4b17,	// (0x00024786) list_double_number_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double_number_pane_vc

0x4b17,	// (0x00024786) list_double_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double_pane_vc

0x4b17,	// (0x00024786) list_double_time_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_double_time_pane_vc

0x4b17,	// (0x00024786) list_setting_number_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_setting_number_pane_vc

0x4b17,	// (0x00024786) list_setting_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_setting_pane_vc

0x4b17,	// (0x00024786) list_single_graphic_heading_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_single_graphic_heading_pane_vc

0x4b17,	// (0x00024786) list_single_heading_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_single_heading_pane_vc

0x4b17,	// (0x00024786) list_single_number_heading_pane_vc_ParamLimits

0x4b17,	// (0x00024786) list_single_number_heading_pane_vc

0xb63a,	// (0x0002b2a9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb63a,	// (0x0002b2a9) list_double_graphic_heading_pane_vc_g1

0xb501,	// (0x0002b170) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb501,	// (0x0002b170) list_double_graphic_heading_pane_vc_g2

0xb50d,	// (0x0002b17c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb50d,	// (0x0002b17c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0002f65d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002f65d) list_double_graphic_heading_pane_vc_g

0xb646,	// (0x0002b2b5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb646,	// (0x0002b2b5) list_double_graphic_heading_pane_vc_t1

0xb65c,	// (0x0002b2cb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb65c,	// (0x0002b2cb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002f664) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0002f664) list_double_graphic_heading_pane_vc_t

0x39b5,	// (0x00023624) list_setting_pane_vc_g1_ParamLimits

0x39b5,	// (0x00023624) list_setting_pane_vc_g1

0x39c1,	// (0x00023630) list_setting_pane_vc_g2_ParamLimits

0x39c1,	// (0x00023630) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002f453) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002f453) list_setting_pane_vc_g

0xb674,	// (0x0002b2e3) list_setting_pane_vc_t1_ParamLimits

0xb674,	// (0x0002b2e3) list_setting_pane_vc_t1

0xb68c,	// (0x0002b2fb) list_setting_pane_vc_t2_ParamLimits

0xb68c,	// (0x0002b2fb) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x0002f6a7) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x0002f6a7) list_setting_pane_vc_t

0xb59b,	// (0x0002b20a) set_value_pane_cp_vc_ParamLimits

0xb59b,	// (0x0002b20a) set_value_pane_cp_vc

0xb501,	// (0x0002b170) list_single_number_heading_pane_vc_g1_ParamLimits

0xb501,	// (0x0002b170) list_single_number_heading_pane_vc_g1

0xb50d,	// (0x0002b17c) list_single_number_heading_pane_vc_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002f237) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002f237) list_single_number_heading_pane_vc_g

0xb6a2,	// (0x0002b311) list_single_number_heading_pane_vc_t1_ParamLimits

0xb6a2,	// (0x0002b311) list_single_number_heading_pane_vc_t1

0xb6b8,	// (0x0002b327) list_single_number_heading_pane_vc_t2_ParamLimits

0xb6b8,	// (0x0002b327) list_single_number_heading_pane_vc_t2

0xb6ca,	// (0x0002b339) list_single_number_heading_pane_vc_t3_ParamLimits

0xb6ca,	// (0x0002b339) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x0002f6ac) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002f6ac) list_single_number_heading_pane_vc_t

0x946a,	// (0x000290d9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x946a,	// (0x000290d9) list_single_graphic_heading_pane_vc_g1

0xb501,	// (0x0002b170) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb501,	// (0x0002b170) list_single_graphic_heading_pane_vc_g4

0xb50d,	// (0x0002b17c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb50d,	// (0x0002b17c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0002f42d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0002f42d) list_single_graphic_heading_pane_vc_g

0xb6a2,	// (0x0002b311) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb6a2,	// (0x0002b311) list_single_graphic_heading_pane_vc_t1

0xb6dc,	// (0x0002b34b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb6dc,	// (0x0002b34b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x0002f6b3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x0002f6b3) list_single_graphic_heading_pane_vc_t

0xb501,	// (0x0002b170) list_double2_pane_vc_g1_ParamLimits

0xb501,	// (0x0002b170) list_double2_pane_vc_g1

0xb50d,	// (0x0002b17c) list_double2_pane_vc_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002f237) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002f237) list_double2_pane_vc_g

0xb6ee,	// (0x0002b35d) list_double2_pane_vc_t1_ParamLimits

0xb6ee,	// (0x0002b35d) list_double2_pane_vc_t1

0xb704,	// (0x0002b373) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb704,	// (0x0002b373) list_double2_large_graphic_pane_vc_g1

0xb501,	// (0x0002b170) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb501,	// (0x0002b170) list_double2_large_graphic_pane_vc_g2

0xb50d,	// (0x0002b17c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb50d,	// (0x0002b17c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002f254) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002f254) list_double2_large_graphic_pane_vc_g

0xb710,	// (0x0002b37f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb710,	// (0x0002b37f) list_double2_large_graphic_pane_vc_t1

0xb726,	// (0x0002b395) list_double_time_pane_vc_g1_ParamLimits

0xb726,	// (0x0002b395) list_double_time_pane_vc_g1

0xb732,	// (0x0002b3a1) list_double_time_pane_vc_g2_ParamLimits

0xb732,	// (0x0002b3a1) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0002f6b8) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0002f6b8) list_double_time_pane_vc_g

0xb73e,	// (0x0002b3ad) list_double_time_pane_vc_t1_ParamLimits

0xb73e,	// (0x0002b3ad) list_double_time_pane_vc_t1

0xb75c,	// (0x0002b3cb) list_double_time_pane_vc_t2_ParamLimits

0xb75c,	// (0x0002b3cb) list_double_time_pane_vc_t2

0xb79a,	// (0x0002b409) list_double_time_pane_vc_t3_ParamLimits

0xb79a,	// (0x0002b409) list_double_time_pane_vc_t3

0xb7ac,	// (0x0002b41b) list_double_time_pane_vc_t4_ParamLimits

0xb7ac,	// (0x0002b41b) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0002f6bd) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002f6bd) list_double_time_pane_vc_t

0xb501,	// (0x0002b170) list_double_pane_vc_g1_ParamLimits

0xb501,	// (0x0002b170) list_double_pane_vc_g1

0xb50d,	// (0x0002b17c) list_double_pane_vc_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002f237) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002f237) list_double_pane_vc_g

0xb7be,	// (0x0002b42d) list_double_pane_vc_t1_ParamLimits

0xb7be,	// (0x0002b42d) list_double_pane_vc_t1

0xb7d0,	// (0x0002b43f) list_double_pane_vc_t2_ParamLimits

0xb7d0,	// (0x0002b43f) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0002f6c6) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0002f6c6) list_double_pane_vc_t

0xb501,	// (0x0002b170) list_double_number_pane_vc_g1_ParamLimits

0xb501,	// (0x0002b170) list_double_number_pane_vc_g1

0xb50d,	// (0x0002b17c) list_double_number_pane_vc_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002f237) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002f237) list_double_number_pane_vc_g

0xb7e6,	// (0x0002b455) list_double_number_pane_vc_t1_ParamLimits

0xb7e6,	// (0x0002b455) list_double_number_pane_vc_t1

0xb7f8,	// (0x0002b467) list_double_number_pane_vc_t2_ParamLimits

0xb7f8,	// (0x0002b467) list_double_number_pane_vc_t2

0xb7d0,	// (0x0002b43f) list_double_number_pane_vc_t3_ParamLimits

0xb7d0,	// (0x0002b43f) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0002f6cb) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002f6cb) list_double_number_pane_vc_t

0xb80a,	// (0x0002b479) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb80a,	// (0x0002b479) list_double_large_graphic_pane_vc_g1

0xb826,	// (0x0002b495) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb826,	// (0x0002b495) list_double_large_graphic_pane_vc_g2

0xb83a,	// (0x0002b4a9) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb83a,	// (0x0002b4a9) list_double_large_graphic_pane_vc_g3

0xb849,	// (0x0002b4b8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb849,	// (0x0002b4b8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0002f6d2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0002f6d2) list_double_large_graphic_pane_vc_g

0xb855,	// (0x0002b4c4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb855,	// (0x0002b4c4) list_double_large_graphic_pane_vc_t1

0xb86f,	// (0x0002b4de) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb86f,	// (0x0002b4de) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0002f6db) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0002f6db) list_double_large_graphic_pane_vc_t

0xb501,	// (0x0002b170) list_double_heading_pane_vc_g1_ParamLimits

0xb501,	// (0x0002b170) list_double_heading_pane_vc_g1

0xb50d,	// (0x0002b17c) list_double_heading_pane_vc_g2_ParamLimits

0xb50d,	// (0x0002b17c) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002f237) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002f237) list_double_heading_pane_vc_g

0xb88f,	// (0x0002b4fe) list_double_heading_pane_vc_t1_ParamLimits

0xb88f,	// (0x0002b4fe) list_double_heading_pane_vc_t1

0xb8a1,	// (0x0002b510) list_double_heading_pane_vc_t2_ParamLimits

0xb8a1,	// (0x0002b510) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002f6e0) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002f6e0) list_double_heading_pane_vc_t

0xb8b7,	// (0x0002b526) list_double_graphic_pane_vc_g1_ParamLimits

0xb8b7,	// (0x0002b526) list_double_graphic_pane_vc_g1

0xb8ca,	// (0x0002b539) list_double_graphic_pane_vc_g2_ParamLimits

0xb8ca,	// (0x0002b539) list_double_graphic_pane_vc_g2

0xb501,	// (0x0002b170) list_double_graphic_pane_vc_g3_ParamLimits

0xb501,	// (0x0002b170) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0002f6e5) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002f6e5) list_double_graphic_pane_vc_g

0xb8e7,	// (0x0002b556) list_double_graphic_pane_vc_t1_ParamLimits

0xb8e7,	// (0x0002b556) list_double_graphic_pane_vc_t1

0xb905,	// (0x0002b574) list_double_graphic_pane_vc_t2_ParamLimits

0xb905,	// (0x0002b574) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0002f6ee) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002f6ee) list_double_graphic_pane_vc_t

0x6197,	// (0x00025e06) aid_size_cell_fastswap

0xd0d8,	// (0x0002cd47) aid_size_cell_touch_ParamLimits

0xd0d8,	// (0x0002cd47) aid_size_cell_touch

0x63fa,	// (0x00026069) popup_fast_swap_wide_window_ParamLimits

0x63fa,	// (0x00026069) popup_fast_swap_wide_window

0xd254,	// (0x0002cec3) touch_pane_ParamLimits

0xd254,	// (0x0002cec3) touch_pane

0x2b30,	// (0x0002279f) button_value_adjust_pane_cp2

0xb245,	// (0x0002aeb4) button_value_adjust_pane_cp4

0xb265,	// (0x0002aed4) form_field_data_pane_cp2

0xeb1d,	// (0x0002e78c) form_field_data_wide_pane_cp2

0x2e8e,	// (0x00022afd) bg_scroll_pane_ParamLimits

0x6ac6,	// (0x00026735) scroll_handle_pane_ParamLimits

0x6ada,	// (0x00026749) scroll_sc2_down_pane_ParamLimits

0x6ada,	// (0x00026749) scroll_sc2_down_pane

0x2ebf,	// (0x00022b2e) scroll_sc2_up_pane_ParamLimits

0x2ebf,	// (0x00022b2e) scroll_sc2_up_pane

0x0dd5,	// (0x00020a44) grid_wheel_folder_pane_g1_ParamLimits

0x0dd5,	// (0x00020a44) grid_wheel_folder_pane_g1

0x6d08,	// (0x00026977) clock_nsta_pane_cp2_ParamLimits

0x6d08,	// (0x00026977) clock_nsta_pane_cp2

0xf3d7,	// (0x0002f046) listscroll_midp_pane_ParamLimits

0xf3e3,	// (0x0002f052) midp_canvas_pane

0x3733,	// (0x000233a2) nsta_clock_indic_pane

0x375b,	// (0x000233ca) listscroll_form_pane_vc

0x3763,	// (0x000233d2) listscroll_set_pane_vc_ParamLimits

0x3763,	// (0x000233d2) listscroll_set_pane_vc

0x0468,	// (0x000200d7) clock_nsta_pane

0x0492,	// (0x00020101) indicator_nsta_pane

0x38ad,	// (0x0002351c) bg_popup_sub_pane_cp2_ParamLimits

0x38c1,	// (0x00023530) find_pane_cp2_ParamLimits

0x38c1,	// (0x00023530) find_pane_cp2

0x38d7,	// (0x00023546) grid_toobar_pane_ParamLimits

0x39cd,	// (0x0002363c) list_form_gen_pane_vc_ParamLimits

0x39cd,	// (0x0002363c) list_form_gen_pane_vc

0x39e3,	// (0x00023652) scroll_pane_cp8_vc_ParamLimits

0x39e3,	// (0x00023652) scroll_pane_cp8_vc

0x3a33,	// (0x000236a2) data_form_wide_pane_vc_ParamLimits

0x3a33,	// (0x000236a2) data_form_wide_pane_vc

0x3a3f,	// (0x000236ae) form_field_data_wide_pane_vc_g1

0x3a47,	// (0x000236b6) form_field_data_wide_pane_vc_t1_ParamLimits

0x3a47,	// (0x000236b6) form_field_data_wide_pane_vc_t1

0x2b44,	// (0x000227b3) input_focus_pane_cp6_vc_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_cp6_vc

0x3c90,	// (0x000238ff) list_midp_pane_ParamLimits

0x47e1,	// (0x00024450) scroll_pane_cp16_ParamLimits

0x47e1,	// (0x00024450) scroll_pane_cp16

0x3cda,	// (0x00023949) button_value_adjust_pane_ParamLimits

0x3cda,	// (0x00023949) button_value_adjust_pane

0x0a4b,	// (0x000206ba) button_value_adjust_pane_cp6_ParamLimits

0x0a4b,	// (0x000206ba) button_value_adjust_pane_cp6

0x0b55,	// (0x000207c4) settings_code_pane_cp_ParamLimits

0x0b55,	// (0x000207c4) settings_code_pane_cp

0x2523,	// (0x00022192) cell_touch_pane_g1

0x2523,	// (0x00022192) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002f372) cell_touch_pane_g

0x0ccd,	// (0x0002093c) cell_touch_pane_cp_ParamLimits

0x0ccd,	// (0x0002093c) cell_touch_pane_cp

0x0ce9,	// (0x00020958) cell_touch_pane_ParamLimits

0x0ce9,	// (0x00020958) cell_touch_pane

0x2523,	// (0x00022192) scroll_sc2_down_pane_g1

0x2523,	// (0x00022192) scroll_sc2_up_pane_g1

0x252d,	// (0x0002219c) bg_set_opt_pane_cp4_vc

0x4ef7,	// (0x00024b66) list_set_graphic_pane_vc_g1_ParamLimits

0x4ef7,	// (0x00024b66) list_set_graphic_pane_vc_g1

0x4f03,	// (0x00024b72) list_set_graphic_pane_vc_g2_ParamLimits

0x4f03,	// (0x00024b72) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0002f669) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002f669) list_set_graphic_pane_vc_g

0x4f0f,	// (0x00024b7e) text_primary_small_cp13_vc_ParamLimits

0x4f0f,	// (0x00024b7e) text_primary_small_cp13_vc

0x47be,	// (0x0002442d) list_set_graphic_pane_vc_ParamLimits

0x47be,	// (0x0002442d) list_set_graphic_pane_vc

0x252d,	// (0x0002219c) input_focus_pane_cp2_vc

0x2523,	// (0x00022192) setting_code_pane_vc_g1

0x25b0,	// (0x0002221f) setting_code_pane_vc_t1

0x4f27,	// (0x00024b96) set_text_pane_vc_t1_ParamLimits

0x4f27,	// (0x00024b96) set_text_pane_vc_t1

0x252d,	// (0x0002219c) input_focus_pane_cp1_vc

0x4f41,	// (0x00024bb0) list_set_text_pane_vc

0x2523,	// (0x00022192) setting_text_pane_vc_g1

0x252d,	// (0x0002219c) bg_set_opt_pane_cp2_vc

0x25a7,	// (0x00022216) setting_slider_graphic_pane_vc_g1

0x4f4b,	// (0x00024bba) setting_slider_graphic_pane_vc_t1

0x4f5a,	// (0x00024bc9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002f66e) setting_slider_graphic_pane_vc_t

0x4f69,	// (0x00024bd8) slider_set_pane_cp_vc

0x4f71,	// (0x00024be0) slider_set_pane_vc_g1

0x4f7a,	// (0x00024be9) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0002f673) slider_set_pane_vc_g

0x2b9c,	// (0x0002280b) set_opt_bg_pane_g1_copy1

0x2ba4,	// (0x00022813) set_opt_bg_pane_g2_copy1

0x4fa6,	// (0x00024c15) set_opt_bg_pane_g3_copy1

0x2bb4,	// (0x00022823) set_opt_bg_pane_g4_copy1

0x2bbc,	// (0x0002282b) set_opt_bg_pane_g5_copy1

0x2bc4,	// (0x00022833) set_opt_bg_pane_g6_copy1

0x4fae,	// (0x00024c1d) set_opt_bg_pane_g7_copy1

0x4fb6,	// (0x00024c25) set_opt_bg_pane_g8_copy1

0x4fbe,	// (0x00024c2d) set_opt_bg_pane_g9_copy1

0x252d,	// (0x0002219c) bg_set_opt_pane_cp_vc

0x4fc6,	// (0x00024c35) setting_slider_pane_vc_t1

0x4fd5,	// (0x00024c44) setting_slider_pane_vc_t2

0x4fe4,	// (0x00024c53) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0002f682) setting_slider_pane_vc_t

0x4ff3,	// (0x00024c62) slider_set_pane_vc

0x7afa,	// (0x00027769) volume_set_pane_vc_g1

0x81da,	// (0x00027e49) volume_set_pane_vc_g2

0x81e3,	// (0x00027e52) volume_set_pane_vc_g3

0x81ec,	// (0x00027e5b) volume_set_pane_vc_g4

0x81f5,	// (0x00027e64) volume_set_pane_vc_g5

0x81fe,	// (0x00027e6d) volume_set_pane_vc_g6

0x8207,	// (0x00027e76) volume_set_pane_vc_g7

0x8210,	// (0x00027e7f) volume_set_pane_vc_g8

0x8219,	// (0x00027e88) volume_set_pane_vc_g9

0x8222,	// (0x00027e91) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x0002f689) volume_set_pane_vc_g

0x4ffb,	// (0x00024c6a) volume_set_pane_vc

0x5003,	// (0x00024c72) button_value_adjust_pane_cp1_vc

0x500b,	// (0x00024c7a) list_highlight_pane_cp2_vc

0x5014,	// (0x00024c83) list_set_pane_vc_ParamLimits

0x5014,	// (0x00024c83) list_set_pane_vc

0x5066,	// (0x00024cd5) main_pane_set_vc_t1_ParamLimits

0x5066,	// (0x00024cd5) main_pane_set_vc_t1

0x507b,	// (0x00024cea) main_pane_set_vc_t2_ParamLimits

0x507b,	// (0x00024cea) main_pane_set_vc_t2

0x508d,	// (0x00024cfc) main_pane_set_vc_t3_ParamLimits

0x508d,	// (0x00024cfc) main_pane_set_vc_t3

0x509f,	// (0x00024d0e) main_pane_set_vc_t4_ParamLimits

0x509f,	// (0x00024d0e) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0002f69e) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0002f69e) main_pane_set_vc_t

0x50b1,	// (0x00024d20) setting_code_pane_vc_ParamLimits

0x50b1,	// (0x00024d20) setting_code_pane_vc

0x50c0,	// (0x00024d2f) setting_slider_graphic_pane_vc

0x50c0,	// (0x00024d2f) setting_slider_pane_vc

0x50c0,	// (0x00024d2f) setting_text_pane_vc

0x50c0,	// (0x00024d2f) setting_volume_pane_vc

0x50c8,	// (0x00024d37) scroll_pane_cp121_vc

0x2b1e,	// (0x0002278d) set_content_pane_vc

0x50d0,	// (0x00024d3f) button_value_adjust_pane_g1

0x50d9,	// (0x00024d48) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0002f6f3) button_value_adjust_pane_g

0x50e2,	// (0x00024d51) form_field_slider_wide_pane_vc_t1_ParamLimits

0x50e2,	// (0x00024d51) form_field_slider_wide_pane_vc_t1

0x50f4,	// (0x00024d63) form_field_slider_wide_pane_vc_t2_ParamLimits

0x50f4,	// (0x00024d63) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0002f6f8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002f6f8) form_field_slider_wide_pane_vc_t

0x257b,	// (0x000221ea) input_focus_pane_cp10_vc_ParamLimits

0x257b,	// (0x000221ea) input_focus_pane_cp10_vc

0x511c,	// (0x00024d8b) slider_cont_pane_cp1_vc_ParamLimits

0x511c,	// (0x00024d8b) slider_cont_pane_cp1_vc

0x512c,	// (0x00024d9b) slider_form_pane_g1_cp2

0x4f7a,	// (0x00024be9) slider_form_pane_g2_cp2

0x5159,	// (0x00024dc8) form_field_slider_pane_vc_t3

0x5167,	// (0x00024dd6) form_field_slider_pane_vc_t4

0x5175,	// (0x00024de4) slider_form_pane_vc_ParamLimits

0x5175,	// (0x00024de4) slider_form_pane_vc

0x5182,	// (0x00024df1) form_field_slider_pane_vc_t1_ParamLimits

0x5182,	// (0x00024df1) form_field_slider_pane_vc_t1

0x50f4,	// (0x00024d63) form_field_slider_pane_vc_t2_ParamLimits

0x50f4,	// (0x00024d63) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0002f70a) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0002f70a) form_field_slider_pane_vc_t

0x257b,	// (0x000221ea) input_focus_pane_cp9_vc_ParamLimits

0x257b,	// (0x000221ea) input_focus_pane_cp9_vc

0x5198,	// (0x00024e07) slider_cont_pane_vc_ParamLimits

0x5198,	// (0x00024e07) slider_cont_pane_vc

0x51aa,	// (0x00024e19) list_form_graphic_pane_cp_vc_ParamLimits

0x51aa,	// (0x00024e19) list_form_graphic_pane_cp_vc

0x3a3f,	// (0x000236ae) form_field_popup_wide_pane_vc_g1

0x51bf,	// (0x00024e2e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x51bf,	// (0x00024e2e) form_field_popup_wide_pane_vc_t1

0x2b44,	// (0x000227b3) input_focus_pane_cp8_vc_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_cp8_vc

0x51fe,	// (0x00024e6d) list_form_wide_pane_vc_ParamLimits

0x51fe,	// (0x00024e6d) list_form_wide_pane_vc

0x520a,	// (0x00024e79) list_form_graphic_pane_vc_g1

0x5212,	// (0x00024e81) list_form_graphic_pane_vc_t1_ParamLimits

0x5212,	// (0x00024e81) list_form_graphic_pane_vc_t1

0x2599,	// (0x00022208) list_highlight_pane_cp5_vc_ParamLimits

0x2599,	// (0x00022208) list_highlight_pane_cp5_vc

0x522e,	// (0x00024e9d) list_form_graphic_pane_vc_ParamLimits

0x522e,	// (0x00024e9d) list_form_graphic_pane_vc

0x3a3f,	// (0x000236ae) form_field_popup_pane_vc_g1

0x5244,	// (0x00024eb3) form_field_popup_pane_vc_t1_ParamLimits

0x5244,	// (0x00024eb3) form_field_popup_pane_vc_t1

0x2b44,	// (0x000227b3) input_focus_pane_cp7_vc_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_cp7_vc

0x5259,	// (0x00024ec8) list_form_pane_vc_ParamLimits

0x5259,	// (0x00024ec8) list_form_pane_vc

0x5265,	// (0x00024ed4) data_form_pane_vc_t1_ParamLimits

0x5265,	// (0x00024ed4) data_form_pane_vc_t1

0x2b9c,	// (0x0002280b) input_focus_pane_vc_g1

0x2ba4,	// (0x00022813) input_focus_pane_vc_g2

0x2bac,	// (0x0002281b) input_focus_pane_vc_g3

0x2bb4,	// (0x00022823) input_focus_pane_vc_g4

0x2bbc,	// (0x0002282b) input_focus_pane_vc_g5

0x2bc4,	// (0x00022833) input_focus_pane_vc_g6

0x2bcc,	// (0x0002283b) input_focus_pane_vc_g7

0x2bd4,	// (0x00022843) input_focus_pane_vc_g8

0x2bdc,	// (0x0002284b) input_focus_pane_vc_g9

0x2523,	// (0x00022192) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002f2fb) input_focus_pane_vc_g

0x3a33,	// (0x000236a2) data_form_pane_vc_ParamLimits

0x3a33,	// (0x000236a2) data_form_pane_vc

0x3a3f,	// (0x000236ae) form_field_data_pane_vc_g1

0x5280,	// (0x00024eef) form_field_data_pane_vc_t1_ParamLimits

0x5280,	// (0x00024eef) form_field_data_pane_vc_t1

0x2b44,	// (0x000227b3) input_focus_pane_vc_ParamLimits

0x2b44,	// (0x000227b3) input_focus_pane_vc

0x5296,	// (0x00024f05) button_value_adjust_pane_cp3_vc

0x529e,	// (0x00024f0d) button_value_adjust_pane_cp5_vc

0x52a6,	// (0x00024f15) form_field_data_pane_vc_ParamLimits

0x52a6,	// (0x00024f15) form_field_data_pane_vc

0x52bd,	// (0x00024f2c) form_field_data_pane_vc_cp2

0x52c5,	// (0x00024f34) form_field_data_wide_pane_vc_ParamLimits

0x52c5,	// (0x00024f34) form_field_data_wide_pane_vc

0x52db,	// (0x00024f4a) form_field_data_wide_pane_vc_cp2

0x52e3,	// (0x00024f52) form_field_popup_pane_vc_ParamLimits

0x52e3,	// (0x00024f52) form_field_popup_pane_vc

0x52fa,	// (0x00024f69) form_field_popup_wide_pane_vc_ParamLimits

0x52fa,	// (0x00024f69) form_field_popup_wide_pane_vc

0x5310,	// (0x00024f7f) form_field_slider_pane_vc_ParamLimits

0x5310,	// (0x00024f7f) form_field_slider_pane_vc

0x5323,	// (0x00024f92) form_field_slider_wide_pane_vc_ParamLimits

0x5323,	// (0x00024f92) form_field_slider_wide_pane_vc

0x0d07,	// (0x00020976) grid_touch_1_pane_ParamLimits

0x0d07,	// (0x00020976) grid_touch_1_pane

0x0d1b,	// (0x0002098a) grid_touch_2_pane_ParamLimits

0x0d1b,	// (0x0002098a) grid_touch_2_pane

0x5336,	// (0x00024fa5) touch_pane_g1_ParamLimits

0x5336,	// (0x00024fa5) touch_pane_g1

0x5344,	// (0x00024fb3) cell_app_pane_cp_wide_ParamLimits

0x5344,	// (0x00024fb3) cell_app_pane_cp_wide

0x5355,	// (0x00024fc4) grid_popup_fast_wide_pane_ParamLimits

0x5355,	// (0x00024fc4) grid_popup_fast_wide_pane

0x5369,	// (0x00024fd8) scroll_pane_cp19_ParamLimits

0x5369,	// (0x00024fd8) scroll_pane_cp19

0x252d,	// (0x0002219c) bg_popup_window_pane_cp20

0x537d,	// (0x00024fec) listscroll_popup_fast_wide_pane

0x3842,	// (0x000234b1) grid_indicator_nsta_pane

0x5385,	// (0x00024ff4) clock_nsta_pane_g1

0x538e,	// (0x00024ffd) clock_nsta_pane_t1

0x0d45,	// (0x000209b4) cell_indicator_nsta_pane_ParamLimits

0x0d45,	// (0x000209b4) cell_indicator_nsta_pane

0x5336,	// (0x00024fa5) cell_indicator_nsta_pane_g1

0x0d5c,	// (0x000209cb) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0002f71b) cell_indicator_nsta_pane_g

0x53aa,	// (0x00025019) clock_nsta_pane_cp

0x53b2,	// (0x00025021) indicator_nsta_pane_cp

0x53ba,	// (0x00025029) nsta_clock_indic_pane_g1

0x25d5,	// (0x00022244) grid_indicator_pane

0x2fb1,	// (0x00022c20) scroll_pane_cp29

0x6c5f,	// (0x000268ce) indicator_nsta_pane_cp2_ParamLimits

0x6c5f,	// (0x000268ce) indicator_nsta_pane_cp2

0x2599,	// (0x00022208) main_apps_wheel_pane

0x3b77,	// (0x000237e6) form_midp_field_text_pane_ParamLimits

0x3ca4,	// (0x00023913) scroll_bar_cp050_ParamLimits

0x540a,	// (0x00025079) cell_indicator_pane_ParamLimits

0x540a,	// (0x00025079) cell_indicator_pane

0x541e,	// (0x0002508d) cell_indicator_pane_g1

0x0d69,	// (0x000209d8) grid_wheel_folder_pane_ParamLimits

0x0d69,	// (0x000209d8) grid_wheel_folder_pane

0x0d77,	// (0x000209e6) list_wheel_apps_pane_ParamLimits

0x0d77,	// (0x000209e6) list_wheel_apps_pane

0x0d83,	// (0x000209f2) main_apps_wheel_pane_g1_ParamLimits

0x0d83,	// (0x000209f2) main_apps_wheel_pane_g1

0x0d8f,	// (0x000209fe) main_apps_wheel_pane_g2_ParamLimits

0x0d8f,	// (0x000209fe) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0002f737) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0002f737) main_apps_wheel_pane_g

0x0d9b,	// (0x00020a0a) main_apps_wheel_pane_t1_ParamLimits

0x0d9b,	// (0x00020a0a) main_apps_wheel_pane_t1

0x0dad,	// (0x00020a1c) list_wheel_apps_pane_g1

0x0db5,	// (0x00020a24) list_wheel_apps_pane_g2

0x0dbd,	// (0x00020a2c) list_wheel_apps_pane_g3

0x0dc5,	// (0x00020a34) list_wheel_apps_pane_g4

0x0dcd,	// (0x00020a3c) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0002f73c) list_wheel_apps_pane_g

0x3444,	// (0x000230b3) navi_icon_text_pane

0x0370,	// (0x0001ffdf) aid_fill_nsta

0x5428,	// (0x00025097) navi_icon_text_pane_g1

0x5434,	// (0x000250a3) navi_icon_text_pane_t1

0x32ee,	// (0x00022f5d) list_set_graphic_pane_t1_ParamLimits

0x32ee,	// (0x00022f5d) list_set_graphic_pane_t1

0x438c,	// (0x00023ffb) popup_midp_note_alarm_window_t6_ParamLimits

0x438c,	// (0x00023ffb) popup_midp_note_alarm_window_t6

0x439e,	// (0x0002400d) popup_midp_note_alarm_window_t7_ParamLimits

0x439e,	// (0x0002400d) popup_midp_note_alarm_window_t7

0x43b0,	// (0x0002401f) popup_midp_note_alarm_window_t8_ParamLimits

0x43b0,	// (0x0002401f) popup_midp_note_alarm_window_t8

0x43c2,	// (0x00024031) popup_midp_note_alarm_window_t9_ParamLimits

0x43c2,	// (0x00024031) popup_midp_note_alarm_window_t9

0x43d4,	// (0x00024043) popup_midp_note_alarm_window_t10_ParamLimits

0x43d4,	// (0x00024043) popup_midp_note_alarm_window_t10

0x43e6,	// (0x00024055) popup_midp_note_alarm_window_t11_ParamLimits

0x43e6,	// (0x00024055) popup_midp_note_alarm_window_t11

0x43f8,	// (0x00024067) scroll_pane_cp17_ParamLimits

0x43f8,	// (0x00024067) scroll_pane_cp17

0x7afa,	// (0x00027769) volume_small_pane_cp_g1

0x8332,	// (0x00027fa1) volume_small_pane_cp_g2

0x833b,	// (0x00027faa) volume_small_pane_cp_g3

0x8344,	// (0x00027fb3) volume_small_pane_cp_g4

0x834d,	// (0x00027fbc) volume_small_pane_cp_g5

0x8356,	// (0x00027fc5) volume_small_pane_cp_g6

0x835f,	// (0x00027fce) volume_small_pane_cp_g7

0x8368,	// (0x00027fd7) volume_small_pane_cp_g8

0x8371,	// (0x00027fe0) volume_small_pane_cp_g9

0x837a,	// (0x00027fe9) volume_small_pane_cp_g10

0x35ec,	// (0x0002325b) midp_ticker_pane_g1_ParamLimits

0x35f8,	// (0x00023267) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002f3c7) midp_ticker_pane_g_ParamLimits

0x3604,	// (0x00023273) midp_ticker_pane_t1_ParamLimits

0x038c,	// (0x0001fffb) aid_fill_nsta_2

0x3c9c,	// (0x0002390b) list_form2_midp_pane

0x4ae6,	// (0x00024755) midp_editing_number_pane_ParamLimits

0x4af5,	// (0x00024764) midp_ticker_pane_ParamLimits

0x5446,	// (0x000250b5) form2_midp_field_pane

0x544e,	// (0x000250bd) scroll_pane_cp51

0x546e,	// (0x000250dd) form2_midp_button_pane_ParamLimits

0x546e,	// (0x000250dd) form2_midp_button_pane

0x5480,	// (0x000250ef) form2_midp_content_pane_ParamLimits

0x5480,	// (0x000250ef) form2_midp_content_pane

0x549a,	// (0x00025109) form2_midp_field_choice_group_pane

0x54a2,	// (0x00025111) form2_midp_field_pane_g1

0x54aa,	// (0x00025119) form2_midp_field_pane_g2

0x54b2,	// (0x00025121) form2_midp_field_pane_g3

0x54ba,	// (0x00025129) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0002f761) form2_midp_field_pane_g

0x54c2,	// (0x00025131) form2_midp_gauge_slider_pane

0x54ca,	// (0x00025139) form2_midp_gauge_wait_pane

0x54d2,	// (0x00025141) form2_midp_image_pane_ParamLimits

0x54d2,	// (0x00025141) form2_midp_image_pane

0x0e02,	// (0x00020a71) form2_midp_label_pane_ParamLimits

0x0e02,	// (0x00020a71) form2_midp_label_pane

0x0e1b,	// (0x00020a8a) form2_midp_label_pane_cp_ParamLimits

0x0e1b,	// (0x00020a8a) form2_midp_label_pane_cp

0x54ed,	// (0x0002515c) form2_midp_string_pane_ParamLimits

0x54ed,	// (0x0002515c) form2_midp_string_pane

0xecbe,	// (0x0002e92d) form2_midp_text_pane_ParamLimits

0xecbe,	// (0x0002e92d) form2_midp_text_pane

0x54ff,	// (0x0002516e) form2_midp_time_pane

0x550f,	// (0x0002517e) input_focus_pane_cp51_ParamLimits

0x550f,	// (0x0002517e) input_focus_pane_cp51

0x0e3a,	// (0x00020aa9) form2_midp_label_pane_t1_ParamLimits

0x0e3a,	// (0x00020aa9) form2_midp_label_pane_t1

0xecd7,	// (0x0002e946) form2_mdip_text_pane_t1_ParamLimits

0xecd7,	// (0x0002e946) form2_mdip_text_pane_t1

0xb957,	// (0x0002b5c6) form2_midp_time_pane_t1

0x552f,	// (0x0002519e) form2_midp_gauge_slider_pane_t1

0x0e75,	// (0x00020ae4) form2_midp_gauge_slider_pane_t2

0x0e87,	// (0x00020af6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0002f76a) form2_midp_gauge_slider_pane_t

0x5541,	// (0x000251b0) form2_midp_slider_pane

0x554d,	// (0x000251bc) form2_midp_gauge_wait_pane_t1

0x555b,	// (0x000251ca) form2_midp_wait_pane_ParamLimits

0x555b,	// (0x000251ca) form2_midp_wait_pane

0x47a0,	// (0x0002440f) list_single_2graphic_pane_cp4_ParamLimits

0x47a0,	// (0x0002440f) list_single_2graphic_pane_cp4

0x07f0,	// (0x0002045f) list_single_midp_graphic_pane_cp_ParamLimits

0x07f0,	// (0x0002045f) list_single_midp_graphic_pane_cp

0x252d,	// (0x0002219c) list_highlight_pane_cp20

0x5586,	// (0x000251f5) list_single_2graphic_pane_g1_cp4

0x4e30,	// (0x00024a9f) list_single_2graphic_pane_g2_cp4

0x558e,	// (0x000251fd) list_single_2graphic_pane_t1_cp4

0x2599,	// (0x00022208) list_highlight_pane_cp21

0x559d,	// (0x0002520c) list_single_midp_graphic_pane_g4_cp

0x55ac,	// (0x0002521b) list_single_midp_graphic_pane_t1_cp

0x0e99,	// (0x00020b08) form2_mdip_string_pane_t1_ParamLimits

0x0e99,	// (0x00020b08) form2_mdip_string_pane_t1

0x252d,	// (0x0002219c) bg_wml_button_pane_cp2

0x2523,	// (0x00022192) form2_midp_image_pane_g1

0x9664,	// (0x000292d3) list_double_large_graphic_pane_g5_ParamLimits

0x9664,	// (0x000292d3) list_double_large_graphic_pane_g5

0xf3d7,	// (0x0002f046) midp_form_pane_ParamLimits

0x2599,	// (0x00022208) main_apps_wheel_pane_ParamLimits

0xd7c9,	// (0x0002d438) popup_preview_window_ParamLimits

0xd7c9,	// (0x0002d438) popup_preview_window

0x759c,	// (0x0002720b) popup_touch_info_window_ParamLimits

0x759c,	// (0x0002720b) popup_touch_info_window

0x75ba,	// (0x00027229) popup_touch_menu_window_ParamLimits

0x75ba,	// (0x00027229) popup_touch_menu_window

0x2519,	// (0x00022188) bg_popup_sub_pane_cp6

0x55c1,	// (0x00025230) list_touch_menu_pane

0x55c9,	// (0x00025238) list_single_touch_menu_pane_ParamLimits

0x55c9,	// (0x00025238) list_single_touch_menu_pane

0x55dd,	// (0x0002524c) list_single_touch_menu_pane_t1

0x2599,	// (0x00022208) bg_popup_sub_pane_cp7_ParamLimits

0x2599,	// (0x00022208) bg_popup_sub_pane_cp7

0x55eb,	// (0x0002525a) heading_sub_pane

0x55f3,	// (0x00025262) list_touch_info_pane_ParamLimits

0x55f3,	// (0x00025262) list_touch_info_pane

0x5602,	// (0x00025271) list_single_touch_info_pane_ParamLimits

0x5602,	// (0x00025271) list_single_touch_info_pane

0x5613,	// (0x00025282) list_single_touch_info_pane_t1

0x5621,	// (0x00025290) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0002f778) list_single_touch_info_pane_t

0x35c2,	// (0x00023231) bg_popup_heading_pane_cp

0x562f,	// (0x0002529e) heading_sub_pane_t1

0x39f9,	// (0x00023668) bg_popup_preview_window_pane_cp_ParamLimits

0x39f9,	// (0x00023668) bg_popup_preview_window_pane_cp

0x55eb,	// (0x0002525a) heading_preview_pane

0x55f3,	// (0x00025262) list_preview_pane_ParamLimits

0x55f3,	// (0x00025262) list_preview_pane

0x563d,	// (0x000252ac) popup_preview_window_g1

0x5602,	// (0x00025271) list_single_preview_pane_ParamLimits

0x5602,	// (0x00025271) list_single_preview_pane

0x5645,	// (0x000252b4) list_single_preview_pane_g1

0x564d,	// (0x000252bc) list_single_preview_pane_t1

0x5613,	// (0x00025282) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0002f77d) list_single_preview_pane_t

0x565b,	// (0x000252ca) bg_popup_heading_pane_cp2_ParamLimits

0x565b,	// (0x000252ca) bg_popup_heading_pane_cp2

0x5671,	// (0x000252e0) heading_preview_pane_g1

0x5679,	// (0x000252e8) heading_preview_pane_t1_ParamLimits

0x5679,	// (0x000252e8) heading_preview_pane_t1

0x25ec,	// (0x0002225b) soft_indicator_pane_t1_ParamLimits

0x2ac0,	// (0x0002272f) scroll_pane_ParamLimits

0x2eb6,	// (0x00022b25) scroll_sc2_left_pane

0x2ead,	// (0x00022b1c) scroll_sc2_right_pane

0x2ed5,	// (0x00022b44) scroll_bg_pane_g1_ParamLimits

0x2eea,	// (0x00022b59) scroll_bg_pane_g2_ParamLimits

0x2f02,	// (0x00022b71) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002f352) scroll_bg_pane_g_ParamLimits

0x2ed5,	// (0x00022b44) scroll_handle_pane_g1_ParamLimits

0x2f24,	// (0x00022b93) scroll_handle_pane_g2_ParamLimits

0x2f02,	// (0x00022b71) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002f359) scroll_handle_pane_g_ParamLimits

0x7146,	// (0x00026db5) popup_choice_list_window_ParamLimits

0x7146,	// (0x00026db5) popup_choice_list_window

0x38b9,	// (0x00023528) choice_list_pane

0x3939,	// (0x000235a8) cell_toolbar_pane_t1

0x3961,	// (0x000235d0) toolbar_button_pane_ParamLimits

0x487f,	// (0x000244ee) ai_gene_pane_1_t2_ParamLimits

0x487f,	// (0x000244ee) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002f57c) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002f57c) ai_gene_pane_1_t

0x5696,	// (0x00025305) scroll_sc2_left_pane_g1

0x5696,	// (0x00025305) scroll_sc2_right_pane_g1

0x2cad,	// (0x0002291c) bg_popup_sub_pane_cp10

0x56a0,	// (0x0002530f) list_choice_list_pane

0x56b7,	// (0x00025326) list_single_choice_list_pane_ParamLimits

0x56b7,	// (0x00025326) list_single_choice_list_pane

0x56cb,	// (0x0002533a) list_single_choice_list_pane_g1

0x2c90,	// (0x000228ff) list_single_choice_list_pane_t1_ParamLimits

0x2c90,	// (0x000228ff) list_single_choice_list_pane_t1

0x56d3,	// (0x00025342) choice_list_pane_g1

0x56db,	// (0x0002534a) choice_list_pane_t1

0x2519,	// (0x00022188) input_focus_pane_cp11

0x2e22,	// (0x00022a91) title_pane_stacon_g2_ParamLimits

0x2e22,	// (0x00022a91) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002f338) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002f338) title_pane_stacon_g

0x35c2,	// (0x00023231) cursor_press_pane

0xd530,	// (0x0002d19f) popup_fep_hwr_window_ParamLimits

0xd530,	// (0x0002d19f) popup_fep_hwr_window

0x723e,	// (0x00026ead) popup_fep_vkb_window_ParamLimits

0x723e,	// (0x00026ead) popup_fep_vkb_window

0x56e9,	// (0x00025358) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0002f7a6) fep_vkb_side_pane_g_ParamLimits

0x84ea,	// (0x00028159) fep_hwr_candidate_pane_ParamLimits

0x84ea,	// (0x00028159) fep_hwr_candidate_pane

0x8512,	// (0x00028181) fep_hwr_side_pane_ParamLimits

0x8512,	// (0x00028181) fep_hwr_side_pane

0x8532,	// (0x000281a1) fep_hwr_top_pane_ParamLimits

0x8532,	// (0x000281a1) fep_hwr_top_pane

0x854a,	// (0x000281b9) fep_hwr_write_pane_ParamLimits

0x854a,	// (0x000281b9) fep_hwr_write_pane

0xfb37,	// (0x0002f7a6) fep_vkb_side_pane_g

0x5703,	// (0x00025372) fep_hwr_top_pane_g1

0x56f1,	// (0x00025360) fep_hwr_top_pane_g2

0x8584,	// (0x000281f3) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0002f782) fep_hwr_top_pane_g

0x8599,	// (0x00028208) fep_hwr_top_text_pane

0x3078,	// (0x00022ce7) fep_hwr_top_text_pane_g1

0x5739,	// (0x000253a8) fep_hwr_top_text_pane_t1

0x8687,	// (0x000282f6) fep_hwr_candidate_pane_g1

0x98c4,	// (0x00029533) fep_vkb_keypad_pane_g3_ParamLimits

0x98c4,	// (0x00029533) fep_vkb_keypad_pane_g3

0x98e6,	// (0x00029555) fep_vkb_keypad_pane_g4_ParamLimits

0x98e6,	// (0x00029555) fep_vkb_keypad_pane_g4

0x9955,	// (0x000295c4) fep_vkb_bottom_pane_g2_ParamLimits

0x9955,	// (0x000295c4) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0002f7ad) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0002f7ad) fep_vkb_bottom_pane_g

0x5696,	// (0x00025305) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0002f7b7) cell_vkb_side_pane_g

0x9999,	// (0x00029608) cell_vkb_side_pane_t1

0x99a7,	// (0x00029616) cell_vkb_side_pane_t1_copy1

0x5696,	// (0x00025305) bg_fep_vkb_candidate_pane_g2

0x9a75,	// (0x000296e4) cell_vkb_candidate_pane_ParamLimits

0x9709,	// (0x00029378) aid_size_cell_vkb_ParamLimits

0x9709,	// (0x00029378) aid_size_cell_vkb

0x9a75,	// (0x000296e4) cell_vkb_candidate_pane

0x86ae,	// (0x0002831d) bg_popup_fep_shadow_pane_g1

0x9773,	// (0x000293e2) fep_vkb_bottom_pane_ParamLimits

0x9773,	// (0x000293e2) fep_vkb_bottom_pane

0x97b0,	// (0x0002941f) fep_vkb_candidate_pane_ParamLimits

0x97b0,	// (0x0002941f) fep_vkb_candidate_pane

0x97cc,	// (0x0002943b) fep_vkb_keypad_pane_ParamLimits

0x97cc,	// (0x0002943b) fep_vkb_keypad_pane

0x9800,	// (0x0002946f) fep_vkb_side_pane_ParamLimits

0x9800,	// (0x0002946f) fep_vkb_side_pane

0x982c,	// (0x0002949b) fep_vkb_top_pane_ParamLimits

0x982c,	// (0x0002949b) fep_vkb_top_pane

0x9858,	// (0x000294c7) fep_vkb_top_pane_g1_ParamLimits

0x9858,	// (0x000294c7) fep_vkb_top_pane_g1

0x9867,	// (0x000294d6) fep_vkb_top_pane_g2_ParamLimits

0x9867,	// (0x000294d6) fep_vkb_top_pane_g2

0x9876,	// (0x000294e5) fep_vkb_top_pane_g3_ParamLimits

0x9876,	// (0x000294e5) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0002f79d) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0002f79d) fep_vkb_top_pane_g

0x9894,	// (0x00029503) fep_vkb_top_text_pane_ParamLimits

0x9894,	// (0x00029503) fep_vkb_top_text_pane

0x0f57,	// (0x00020bc6) fep_vkb_side_pane_g1_ParamLimits

0x0f57,	// (0x00020bc6) fep_vkb_side_pane_g1

0x98b3,	// (0x00029522) grid_vkb_side_pane_ParamLimits

0x98b3,	// (0x00029522) grid_vkb_side_pane

0x86b6,	// (0x00028325) bg_popup_fep_shadow_pane_g2

0x86bf,	// (0x0002832e) bg_popup_fep_shadow_pane_g3

0x86c7,	// (0x00028336) bg_popup_fep_shadow_pane_g4

0x86d0,	// (0x0002833f) bg_popup_fep_shadow_pane_g5

0x86d8,	// (0x00028347) bg_popup_fep_shadow_pane_g6

0x86e0,	// (0x0002834f) bg_popup_fep_shadow_pane_g7

0x2bb4,	// (0x00022823) bg_popup_fep_shadow_pane_g8

0x9904,	// (0x00029573) grid_vkb_keypad_number_pane_ParamLimits

0x9904,	// (0x00029573) grid_vkb_keypad_number_pane

0x9914,	// (0x00029583) grid_vkb_keypad_pane_ParamLimits

0x9914,	// (0x00029583) grid_vkb_keypad_pane

0x993a,	// (0x000295a9) fep_vkb_bottom_pane_g1_ParamLimits

0x993a,	// (0x000295a9) fep_vkb_bottom_pane_g1

0x9963,	// (0x000295d2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x9963,	// (0x000295d2) grid_vkb_keypad_bottom_left_pane

0x9978,	// (0x000295e7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x9978,	// (0x000295e7) grid_vkb_keypad_bottom_right_pane

0x998d,	// (0x000295fc) fep_vkb_top_text_pane_g1

0x0f9e,	// (0x00020c0d) fep_vkb_top_text_pane_t1

0x0fb0,	// (0x00020c1f) cell_vkb_side_pane_ParamLimits

0x0fb0,	// (0x00020c1f) cell_vkb_side_pane

0x5696,	// (0x00025305) cell_vkb_side_pane_g1

0x99b5,	// (0x00029624) cell_vkb_keypad_pane_ParamLimits

0x99b5,	// (0x00029624) cell_vkb_keypad_pane

0x9a22,	// (0x00029691) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0002f7ca) bg_popup_fep_shadow_pane_g

0x86f0,	// (0x0002835f) cell_hwr_side_pane_g1

0x86f0,	// (0x0002835f) cell_hwr_side_pane_g2

0x9a2c,	// (0x0002969b) cell_vkb_keypad_pane_t1

0x0fc6,	// (0x00020c35) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x0fc6,	// (0x00020c35) cell_vkb_keypad_bottom_left_pane

0x0fdb,	// (0x00020c4a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x0fdb,	// (0x00020c4a) cell_vkb_keypad_bottom_right_pane

0x5696,	// (0x00025305) cell_vkb_keypad_bottom_left_pane_g1

0x5696,	// (0x00025305) cell_vkb_keypad_bottom_right_pane_g1

0x9a3a,	// (0x000296a9) cell_vkb_keypad_number_pane_ParamLimits

0x9a3a,	// (0x000296a9) cell_vkb_keypad_number_pane

0x9a59,	// (0x000296c8) cell_vkb_keypad_number_pane_g1

0x9a63,	// (0x000296d2) cell_vkb_keypad_number_pane_g2

0x9a6c,	// (0x000296db) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0002f7bc) cell_vkb_keypad_number_pane_g

0x9a2c,	// (0x0002969b) cell_vkb_keypad_number_pane_t1

0x9a8e,	// (0x000296fd) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0002f7dd) cell_hwr_side_pane_g

0x9aa7,	// (0x00029716) cell_hwr_side_pane_t1

0x86fa,	// (0x00028369) cell_hwr_side_pane_t1_copy1

0x8708,	// (0x00028377) cell_hwr_candidate_pane_g1

0x8737,	// (0x000283a6) cell_hwr_candidate_pane_t1

0x5696,	// (0x00025305) cell_vkb_candidate_pane_g2

0x9b0c,	// (0x0002977b) cell_vkb_candidate_pane_t1

0x84b5,	// (0x00028124) bg_popup_fep_shadow_pane_ParamLimits

0x84b5,	// (0x00028124) bg_popup_fep_shadow_pane

0x8564,	// (0x000281d3) bg_fep_hwr_top_pane_g4

0x5715,	// (0x00025384) bg_hwr_side_pane_g1_ParamLimits

0x5715,	// (0x00025384) bg_hwr_side_pane_g1

0xdb0f,	// (0x0002d77e) cell_hwr_side_pane_ParamLimits

0xdb0f,	// (0x0002d77e) cell_hwr_side_pane

0x8610,	// (0x0002827f) fep_hwr_write_pane_g1_ParamLimits

0x8610,	// (0x0002827f) fep_hwr_write_pane_g1

0x861d,	// (0x0002828c) fep_hwr_write_pane_g2_ParamLimits

0x861d,	// (0x0002828c) fep_hwr_write_pane_g2

0x862a,	// (0x00028299) fep_hwr_write_pane_g3_ParamLimits

0x862a,	// (0x00028299) fep_hwr_write_pane_g3

0xdb2f,	// (0x0002d79e) fep_hwr_write_pane_g4_ParamLimits

0xdb2f,	// (0x0002d79e) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0002f789) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0002f789) fep_hwr_write_pane_g

0x8564,	// (0x000281d3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x8564,	// (0x000281d3) bg_fep_hwr_candidate_pane_g2

0x864d,	// (0x000282bc) cell_hwr_candidate_pane_ParamLimits

0x864d,	// (0x000282bc) cell_hwr_candidate_pane

0x8687,	// (0x000282f6) fep_hwr_candidate_pane_g1_ParamLimits

0x9737,	// (0x000293a6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x9737,	// (0x000293a6) bg_popup_fep_shadow_pane_cp2

0x9886,	// (0x000294f5) fep_vkb_top_pane_g4_ParamLimits

0x9886,	// (0x000294f5) fep_vkb_top_pane_g4

0x98a5,	// (0x00029514) fep_vkb_side_pane_g2_ParamLimits

0x98a5,	// (0x00029514) fep_vkb_side_pane_g2

0xea2b,	// (0x0002e69a) list_setting_pane_t4_ParamLimits

0xea2b,	// (0x0002e69a) list_setting_pane_t4

0xeac5,	// (0x0002e734) list_setting_number_pane_t5_ParamLimits

0xeac5,	// (0x0002e734) list_setting_number_pane_t5

0xf333,	// (0x0002efa2) list_double_heading_pane_cp2_ParamLimits

0xf333,	// (0x0002efa2) list_double_heading_pane_cp2

0x2b52,	// (0x000227c1) list_double_heading_pane_g1_cp2_ParamLimits

0x2b52,	// (0x000227c1) list_double_heading_pane_g1_cp2

0x2b5e,	// (0x000227cd) list_double_heading_pane_g2_cp2_ParamLimits

0x2b5e,	// (0x000227cd) list_double_heading_pane_g2_cp2

0x9b1a,	// (0x00029789) list_double_heading_pane_t1_cp2_ParamLimits

0x9b1a,	// (0x00029789) list_double_heading_pane_t1_cp2

0x9b30,	// (0x0002979f) list_double_heading_pane_t2_cp2_ParamLimits

0x9b30,	// (0x0002979f) list_double_heading_pane_t2_cp2

0x2511,	// (0x00022180) aid_value_unit2

0x6436,	// (0x000260a5) popup_preview_fixed_window

0x26cc,	// (0x0002233b) bg_popup_preview_window_pane_cp02

0x9b42,	// (0x000297b1) list_preview_fixed_pane

0x9b88,	// (0x000297f7) list_empty_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_empty_pane_fp

0x9b88,	// (0x000297f7) list_single_cale_day_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_single_cale_day_pane_fp

0x9b88,	// (0x000297f7) list_single_graphic_heading_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_single_graphic_heading_pane_fp

0x9b88,	// (0x000297f7) list_single_graphic_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_single_graphic_pane_fp

0x9b88,	// (0x000297f7) list_single_heading_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_single_heading_pane_fp

0x9b88,	// (0x000297f7) list_single_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_single_pane_fp

0x9b9b,	// (0x0002980a) list_single_pane_fp_g1_ParamLimits

0x9b9b,	// (0x0002980a) list_single_pane_fp_g1

0xb96a,	// (0x0002b5d9) list_single_pane_fp_g2_ParamLimits

0xb96a,	// (0x0002b5d9) list_single_pane_fp_g2

0xb976,	// (0x0002b5e5) list_single_pane_fp_g3_ParamLimits

0xb976,	// (0x0002b5e5) list_single_pane_fp_g3

0x9ba7,	// (0x00029816) list_single_pane_fp_g4_ParamLimits

0x9ba7,	// (0x00029816) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0002f7f0) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0002f7f0) list_single_pane_fp_g

0xb98a,	// (0x0002b5f9) list_single_pane_fp_t1_ParamLimits

0xb98a,	// (0x0002b5f9) list_single_pane_fp_t1

0xb9a1,	// (0x0002b610) list_single_graphic_pane_fp_g1_ParamLimits

0xb9a1,	// (0x0002b610) list_single_graphic_pane_fp_g1

0x9b9b,	// (0x0002980a) list_single_graphic_pane_fp_g2_ParamLimits

0x9b9b,	// (0x0002980a) list_single_graphic_pane_fp_g2

0xb96a,	// (0x0002b5d9) list_single_graphic_pane_fp_g3_ParamLimits

0xb96a,	// (0x0002b5d9) list_single_graphic_pane_fp_g3

0xb976,	// (0x0002b5e5) list_single_graphic_pane_fp_g4_ParamLimits

0xb976,	// (0x0002b5e5) list_single_graphic_pane_fp_g4

0x9ba7,	// (0x00029816) list_single_graphic_pane_fp_g5_ParamLimits

0x9ba7,	// (0x00029816) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002f7f9) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002f7f9) list_single_graphic_pane_fp_g

0xb9ad,	// (0x0002b61c) list_single_graphic_pane_fp_t1_ParamLimits

0xb9ad,	// (0x0002b61c) list_single_graphic_pane_fp_t1

0xb9a1,	// (0x0002b610) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb9a1,	// (0x0002b610) list_single_graphic_heading_pane_fp_g1

0x9b9b,	// (0x0002980a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9b9b,	// (0x0002980a) list_single_graphic_heading_pane_fp_g2

0xb96a,	// (0x0002b5d9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb96a,	// (0x0002b5d9) list_single_graphic_heading_pane_fp_g3

0xb976,	// (0x0002b5e5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb976,	// (0x0002b5e5) list_single_graphic_heading_pane_fp_g4

0x9ba7,	// (0x00029816) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9ba7,	// (0x00029816) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002f7f9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002f7f9) list_single_graphic_heading_pane_fp_g

0xb9c3,	// (0x0002b632) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb9c3,	// (0x0002b632) list_single_graphic_heading_pane_fp_t1

0xb9d9,	// (0x0002b648) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb9d9,	// (0x0002b648) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0002f804) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0002f804) list_single_graphic_heading_pane_fp_t

0xb9eb,	// (0x0002b65a) list_single_cale_day_pane_fp_g1_ParamLimits

0xb9eb,	// (0x0002b65a) list_single_cale_day_pane_fp_g1

0x9bb3,	// (0x00029822) list_single_cale_day_pane_fp_g2_ParamLimits

0x9bb3,	// (0x00029822) list_single_cale_day_pane_fp_g2

0xba23,	// (0x0002b692) list_single_cale_day_pane_fp_g3_ParamLimits

0xba23,	// (0x0002b692) list_single_cale_day_pane_fp_g3

0xba4b,	// (0x0002b6ba) list_single_cale_day_pane_fp_g4_ParamLimits

0xba4b,	// (0x0002b6ba) list_single_cale_day_pane_fp_g4

0xba6f,	// (0x0002b6de) list_single_cale_day_pane_fp_g5_ParamLimits

0xba6f,	// (0x0002b6de) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002f809) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002f809) list_single_cale_day_pane_fp_g

0xba93,	// (0x0002b702) list_single_cale_day_pane_fp_t1_ParamLimits

0xba93,	// (0x0002b702) list_single_cale_day_pane_fp_t1

0xbab9,	// (0x0002b728) list_single_cale_day_pane_fp_t2_ParamLimits

0xbab9,	// (0x0002b728) list_single_cale_day_pane_fp_t2

0xbad2,	// (0x0002b741) list_single_cale_day_pane_fp_t3_ParamLimits

0xbad2,	// (0x0002b741) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0002f814) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0002f814) list_single_cale_day_pane_fp_t

0x9b9b,	// (0x0002980a) list_empty_pane_fp_g1_ParamLimits

0x9b9b,	// (0x0002980a) list_empty_pane_fp_g1

0xbaeb,	// (0x0002b75a) list_empty_pane_fp_t1

0xbaf9,	// (0x0002b768) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0002f81b) list_empty_pane_fp_t

0x9b9b,	// (0x0002980a) list_single_heading_pane_fp_g1_ParamLimits

0x9b9b,	// (0x0002980a) list_single_heading_pane_fp_g1

0xb96a,	// (0x0002b5d9) list_single_heading_pane_fp_g2_ParamLimits

0xb96a,	// (0x0002b5d9) list_single_heading_pane_fp_g2

0xb976,	// (0x0002b5e5) list_single_heading_pane_fp_g3_ParamLimits

0xb976,	// (0x0002b5e5) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0002f820) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002f820) list_single_heading_pane_fp_g

0xbb07,	// (0x0002b776) list_single_heading_pane_fp_t1_ParamLimits

0xbb07,	// (0x0002b776) list_single_heading_pane_fp_t1

0xbb19,	// (0x0002b788) list_single_heading_pane_fp_t2_ParamLimits

0xbb19,	// (0x0002b788) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0002f827) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0002f827) list_single_heading_pane_fp_t

0x2cb9,	// (0x00022928) aid_size_cell_fast

0x26af,	// (0x0002231e) soft_indicator_pane_cp1_t1

0x2cf6,	// (0x00022965) cell_app_pane_cp2_ParamLimits

0x2cf6,	// (0x00022965) cell_app_pane_cp2

0x84d7,	// (0x00028146) fep_hwr_candidate_drop_down_list_pane

0x86a1,	// (0x00028310) fep_hwr_candidate_pane_g3_ParamLimits

0x86a1,	// (0x00028310) fep_hwr_candidate_pane_g3

0x1fee,	// (0x00021c5d) fep_hwr_candidate_pane_g4_ParamLimits

0x1fee,	// (0x00021c5d) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0002f796) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0002f796) fep_hwr_candidate_pane_g

0x979f,	// (0x0002940e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x979f,	// (0x0002940e) fep_vkb_candidate_drop_down_list_pane

0x9a96,	// (0x00029705) fep_vkb_candidate_pane_g3

0x9a9e,	// (0x0002970d) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0002f7c3) fep_vkb_candidate_pane_g

0x8708,	// (0x00028377) cell_hwr_candidate_pane_g1_ParamLimits

0x8716,	// (0x00028385) cell_hwr_candidate_pane_g3_ParamLimits

0x8716,	// (0x00028385) cell_hwr_candidate_pane_g3

0x9ab5,	// (0x00029724) cell_hwr_candidate_pane_g4_ParamLimits

0x9ab5,	// (0x00029724) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002f7e2) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0002f7e2) cell_hwr_candidate_pane_g

0x9ad6,	// (0x00029745) cell_vkb_candidate_pane_g3_ParamLimits

0x9ad6,	// (0x00029745) cell_vkb_candidate_pane_g3

0x9af1,	// (0x00029760) cell_vkb_candidate_pane_g4_ParamLimits

0x9af1,	// (0x00029760) cell_vkb_candidate_pane_g4

0x9bbf,	// (0x0002982e) cell_app_pane_cp2_g1_ParamLimits

0x9bbf,	// (0x0002982e) cell_app_pane_cp2_g1

0x9bdd,	// (0x0002984c) cell_app_pane_cp2_g2_ParamLimits

0x9bdd,	// (0x0002984c) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0002f82c) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0002f82c) cell_app_pane_cp2_g

0x9be9,	// (0x00029858) cell_app_pane_cp2_t1_ParamLimits

0x9be9,	// (0x00029858) cell_app_pane_cp2_t1

0x2b44,	// (0x000227b3) grid_highlight_pane_cp1_ParamLimits

0x2b44,	// (0x000227b3) grid_highlight_pane_cp1

0x8754,	// (0x000283c3) cell_hwr_candidate_pane_cp1_ParamLimits

0x8754,	// (0x000283c3) cell_hwr_candidate_pane_cp1

0x8708,	// (0x00028377) fep_hwr_candidate_drop_down_list_pane_g1

0x8772,	// (0x000283e1) fep_hwr_candidate_drop_down_list_pane_g2

0x877f,	// (0x000283ee) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002f831) fep_hwr_candidate_drop_down_list_pane_g

0x878c,	// (0x000283fb) fep_hwr_candidate_drop_down_list_scroll_pane

0x8795,	// (0x00028404) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8795,	// (0x00028404) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x87a2,	// (0x00028411) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x87a2,	// (0x00028411) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x87af,	// (0x0002841e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x87af,	// (0x0002841e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x87bc,	// (0x0002842b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x87bc,	// (0x0002842b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x87d7,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x87d7,	// (0x00028446) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x87f2,	// (0x00028461) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x87f2,	// (0x00028461) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x880d,	// (0x0002847c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x880d,	// (0x0002847c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8828,	// (0x00028497) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8828,	// (0x00028497) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0002f838) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0002f838) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0ff6,	// (0x00020c65) cell_vkb_candidate_pane_cp1_ParamLimits

0x0ff6,	// (0x00020c65) cell_vkb_candidate_pane_cp1

0x9886,	// (0x000294f5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x9886,	// (0x000294f5) fep_vkb_candidate_drop_down_list_pane_g1

0x9bfb,	// (0x0002986a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x9bfb,	// (0x0002986a) fep_vkb_candidate_drop_down_list_pane_g2

0x9c08,	// (0x00029877) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9c08,	// (0x00029877) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0002f849) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0002f849) fep_vkb_candidate_drop_down_list_pane_g

0x9c15,	// (0x00029884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x9c15,	// (0x00029884) fep_vkb_candidate_drop_down_list_scroll_pane

0x9c22,	// (0x00029891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9c22,	// (0x00029891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x9c2f,	// (0x0002989e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9c2f,	// (0x0002989e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x9c3b,	// (0x000298aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9c3b,	// (0x000298aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x9c47,	// (0x000298b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9c47,	// (0x000298b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x9c68,	// (0x000298d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9c68,	// (0x000298d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x9c89,	// (0x000298f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9c89,	// (0x000298f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x9caa,	// (0x00029919) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9caa,	// (0x00029919) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9ccb,	// (0x0002993a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9ccb,	// (0x0002993a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0002f850) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0002f850) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xeed9,	// (0x0002eb48) title_pane_g1_ParamLimits

0xeeec,	// (0x0002eb5b) title_pane_g2_ParamLimits

0xf54e,	// (0x0002f1bd) title_pane_g_ParamLimits

0x3070,	// (0x00022cdf) aid_call2_pane

0x3068,	// (0x00022cd7) aid_call_pane

0x3078,	// (0x00022ce7) popup_clock_analogue_window_g1

0x3078,	// (0x00022ce7) popup_clock_analogue_window_g2

0x6aef,	// (0x0002675e) popup_clock_analogue_window_g3

0x6af8,	// (0x00026767) popup_clock_analogue_window_g4

0x2523,	// (0x00022192) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002f367) popup_clock_analogue_window_g

0x6b00,	// (0x0002676f) popup_clock_analogue_window_t1

0x6b33,	// (0x000267a2) clock_digital_number_pane_ParamLimits

0x6b33,	// (0x000267a2) clock_digital_number_pane

0x6b3f,	// (0x000267ae) clock_digital_number_pane_cp02_ParamLimits

0x6b3f,	// (0x000267ae) clock_digital_number_pane_cp02

0x6b4b,	// (0x000267ba) clock_digital_number_pane_cp03_ParamLimits

0x6b4b,	// (0x000267ba) clock_digital_number_pane_cp03

0x6b57,	// (0x000267c6) clock_digital_number_pane_cp04_ParamLimits

0x6b57,	// (0x000267c6) clock_digital_number_pane_cp04

0x6b63,	// (0x000267d2) clock_digital_separator_pane_ParamLimits

0x6b63,	// (0x000267d2) clock_digital_separator_pane

0x6b6f,	// (0x000267de) popup_clock_digital_window_t1_ParamLimits

0x6b6f,	// (0x000267de) popup_clock_digital_window_t1

0x2523,	// (0x00022192) clock_digital_number_pane_g1

0x2523,	// (0x00022192) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002f372) clock_digital_number_pane_g

0x2523,	// (0x00022192) clock_digital_separator_pane_g1

0x2523,	// (0x00022192) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002f372) clock_digital_separator_pane_g

0x0370,	// (0x0001ffdf) aid_fill_nsta_ParamLimits

0x0492,	// (0x00020101) indicator_nsta_pane_ParamLimits

0x3862,	// (0x000234d1) popup_clock_analogue_window

0x3862,	// (0x000234d1) popup_clock_digital_window

0x3842,	// (0x000234b1) grid_indicator_nsta_pane_ParamLimits

0x539c,	// (0x0002500b) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0002f716) clock_nsta_pane_t

0x6ab3,	// (0x00026722) aid_size_max_handle

0xd300,	// (0x0002cf6f) aid_size_min_handle

0x35c2,	// (0x00023231) editor_scroll_pane

0x9ce6,	// (0x00029955) ex_editor_pane

0x2c6d,	// (0x000228dc) scroll_pane_cp13

0x2aec,	// (0x0002275b) scroll_pane_cp14

0x30a7,	// (0x00022d16) scroll_pane_cp36

0xf342,	// (0x0002efb1) list_single_graphic_hl_pane_cp2_ParamLimits

0xf342,	// (0x0002efb1) list_single_graphic_hl_pane_cp2

0x0baf,	// (0x0002081e) list_single_graphic_hl_pane_ParamLimits

0x0baf,	// (0x0002081e) list_single_graphic_hl_pane

0xbb2f,	// (0x0002b79e) aid_size_min_hl_cp1

0x9cee,	// (0x0002995d) list_highlight_pane_cp34_ParamLimits

0x9cee,	// (0x0002995d) list_highlight_pane_cp34

0x9cff,	// (0x0002996e) list_single_graphic_hl_pane_g1_ParamLimits

0x9cff,	// (0x0002996e) list_single_graphic_hl_pane_g1

0xecf0,	// (0x0002e95f) list_single_graphic_hl_pane_g2_ParamLimits

0xecf0,	// (0x0002e95f) list_single_graphic_hl_pane_g2

0xecf0,	// (0x0002e95f) list_single_graphic_hl_pane_g3_ParamLimits

0xecf0,	// (0x0002e95f) list_single_graphic_hl_pane_g3

0xecfc,	// (0x0002e96b) list_single_graphic_hl_pane_g4_ParamLimits

0xecfc,	// (0x0002e96b) list_single_graphic_hl_pane_g4

0xed08,	// (0x0002e977) list_single_graphic_hl_pane_g5_ParamLimits

0xed08,	// (0x0002e977) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0002f861) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0002f861) list_single_graphic_hl_pane_g

0xed1c,	// (0x0002e98b) list_single_graphic_hl_pane_t1_ParamLimits

0xed1c,	// (0x0002e98b) list_single_graphic_hl_pane_t1

0x9d0c,	// (0x0002997b) aid_size_min_hl_cp2

0x9d15,	// (0x00029984) list_highlight_pane_cp34_cp2_ParamLimits

0x9d15,	// (0x00029984) list_highlight_pane_cp34_cp2

0x9cff,	// (0x0002996e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x9cff,	// (0x0002996e) list_single_graphic_hl_pane_g1_cp2

0x9d22,	// (0x00029991) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x9d22,	// (0x00029991) list_single_graphic_hl_pane_g2_cp2

0x9d2e,	// (0x0002999d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9d2e,	// (0x0002999d) list_single_graphic_hl_pane_g3_cp2

0x34fb,	// (0x0002316a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x34fb,	// (0x0002316a) list_single_graphic_hl_pane_g4_cp2

0x9d3a,	// (0x000299a9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x9d3a,	// (0x000299a9) list_single_graphic_hl_pane_g5_cp2

0xd357,	// (0x0002cfc6) control_pane_g4_ParamLimits

0xd357,	// (0x0002cfc6) control_pane_g4

0x2cad,	// (0x0002291c) bg_popup_sub_pane_cp10_ParamLimits

0x56a0,	// (0x0002530f) list_choice_list_pane_ParamLimits

0x56af,	// (0x0002531e) scroll_pane_cp23

0x26cc,	// (0x0002233b) bg_popup_preview_window_pane_cp02_ParamLimits

0x9b42,	// (0x000297b1) list_preview_fixed_pane_ParamLimits

0x9b58,	// (0x000297c7) list_preview_fixed_pane_cp_ParamLimits

0x9b58,	// (0x000297c7) list_preview_fixed_pane_cp

0x9b64,	// (0x000297d3) popup_preview_fixed_window_g1_ParamLimits

0x9b64,	// (0x000297d3) popup_preview_fixed_window_g1

0x9b70,	// (0x000297df) popup_preview_fixed_window_g2_ParamLimits

0x9b70,	// (0x000297df) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0002f7e9) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0002f7e9) popup_preview_fixed_window_g

0x69a1,	// (0x00026610) aid_navi_side_left_pane_ParamLimits

0x69b2,	// (0x00026621) aid_navi_side_right_pane_ParamLimits

0x69c6,	// (0x00026635) navi_icon_pane_stacon_ParamLimits

0x69da,	// (0x00026649) navi_navi_pane_stacon_ParamLimits

0x69c6,	// (0x00026635) navi_text_pane_stacon_ParamLimits

0x6315,	// (0x00025f84) main_text_info_pane

0x9d64,	// (0x000299d3) listscroll_text_info_pane

0x9d6c,	// (0x000299db) list_text_info_pane_ParamLimits

0x9d6c,	// (0x000299db) list_text_info_pane

0x9d7b,	// (0x000299ea) scroll_pane_cp24_ParamLimits

0x9d7b,	// (0x000299ea) scroll_pane_cp24

0x1016,	// (0x00020c85) list_text_info_pane_t1_ParamLimits

0x1016,	// (0x00020c85) list_text_info_pane_t1

0xd4af,	// (0x0002d11e) popup_fast_swap2_window_ParamLimits

0xd4af,	// (0x0002d11e) popup_fast_swap2_window

0x9d99,	// (0x00029a08) aid_size_cell_fast2

0x2519,	// (0x00022188) bg_popup_window_pane_cp17

0x3cc4,	// (0x00023933) heading_pane_cp2

0x28bf,	// (0x0002252e) listscroll_fast2_pane

0x9da3,	// (0x00029a12) grid_fast2_pane

0x9dab,	// (0x00029a1a) listscroll_fast2_pane_g1

0x9db3,	// (0x00029a22) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0002f86c) listscroll_fast2_pane_g

0x2c6d,	// (0x000228dc) scroll_pane_cp26

0x9dbb,	// (0x00029a2a) cell_fast2_pane_ParamLimits

0x9dbb,	// (0x00029a2a) cell_fast2_pane

0x9dd0,	// (0x00029a3f) cell_fast2_pane_g1

0x9dd9,	// (0x00029a48) cell_fast2_pane_g2

0x9de2,	// (0x00029a51) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0002f871) cell_fast2_pane_g

0x294f,	// (0x000225be) grid_highlight_pane_cp9

0x712c,	// (0x00026d9b) main_eswt_pane_ParamLimits

0x712c,	// (0x00026d9b) main_eswt_pane

0x9d90,	// (0x000299ff) list_single_text_info_pane

0x9dea,	// (0x00029a59) eswt_ctrl_button_pane

0x9dea,	// (0x00029a59) eswt_ctrl_canvas_pane

0x9df2,	// (0x00029a61) eswt_ctrl_combo_pane

0x9dea,	// (0x00029a59) eswt_ctrl_default_pane

0x9dea,	// (0x00029a59) eswt_ctrl_label_pane

0x9dfa,	// (0x00029a69) eswt_ctrl_wait_pane

0x9e02,	// (0x00029a71) eswt_shell_pane

0x2519,	// (0x00022188) listscroll_eswt_app_pane

0x9e1e,	// (0x00029a8d) popup_eswt_tasktip_window_ParamLimits

0x9e1e,	// (0x00029a8d) popup_eswt_tasktip_window

0x39f9,	// (0x00023668) bg_popup_window_pane_cp18

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_ParamLimits

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_ParamLimits

0x9e3c,	// (0x00029aab) eswt_control_pane_g2

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_ParamLimits

0x9e49,	// (0x00029ab8) eswt_control_pane_g3

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_ParamLimits

0x9e56,	// (0x00029ac5) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0002f878) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0002f878) eswt_control_pane_g

0x2b44,	// (0x000227b3) bg_button_pane_ParamLimits

0x2b44,	// (0x000227b3) bg_button_pane

0x2964,	// (0x000225d3) common_borders_pane_copy2_ParamLimits

0x2964,	// (0x000225d3) common_borders_pane_copy2

0x9e63,	// (0x00029ad2) control_button_pane_g1_ParamLimits

0x9e63,	// (0x00029ad2) control_button_pane_g1

0x9e6f,	// (0x00029ade) control_button_pane_g2_ParamLimits

0x9e6f,	// (0x00029ade) control_button_pane_g2

0x9e7b,	// (0x00029aea) control_button_pane_g3_ParamLimits

0x9e7b,	// (0x00029aea) control_button_pane_g3

0x0002,

0xfc12,	// (0x0002f881) control_button_pane_g_ParamLimits

0xfc12,	// (0x0002f881) control_button_pane_g

0x9e8f,	// (0x00029afe) control_button_pane_t1

0x9e9d,	// (0x00029b0c) control_button_pane_t2

0x0001,

0xfc19,	// (0x0002f888) control_button_pane_t

0x396d,	// (0x000235dc) bg_button_pane_g1

0x3975,	// (0x000235e4) bg_button_pane_g2

0x397d,	// (0x000235ec) bg_button_pane_g3

0x3985,	// (0x000235f4) bg_button_pane_g4

0x398d,	// (0x000235fc) bg_button_pane_g5

0x3995,	// (0x00023604) bg_button_pane_g6

0x399d,	// (0x0002360c) bg_button_pane_g7

0x39a5,	// (0x00023614) bg_button_pane_g8

0x39ad,	// (0x0002361c) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002f4d0) bg_button_pane_g

0x565b,	// (0x000252ca) common_borders_pane_ParamLimits

0x565b,	// (0x000252ca) common_borders_pane

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy1_ParamLimits

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy1

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy1_ParamLimits

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy1

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy1_ParamLimits

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy1

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy1_ParamLimits

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy1

0x5696,	// (0x00025305) bg_eswt_ctrl_canvas_pane_g1

0x565b,	// (0x000252ca) common_borders_pane_cp2_ParamLimits

0x565b,	// (0x000252ca) common_borders_pane_cp2

0x565b,	// (0x000252ca) common_borders_pane_cp3_ParamLimits

0x565b,	// (0x000252ca) common_borders_pane_cp3

0x9eab,	// (0x00029b1a) separator_horizontal_pane

0x9eb3,	// (0x00029b22) separator_vertical_pane

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy2_ParamLimits

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy2

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy2_ParamLimits

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy2

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy2_ParamLimits

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy2

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy2_ParamLimits

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy2

0x2519,	// (0x00022188) common_borders_pane_cp4

0x9ebc,	// (0x00029b2b) separator_horizontal_pane_g1

0x9ec5,	// (0x00029b34) separator_horizontal_pane_g2

0x9ece,	// (0x00029b3d) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0002f88d) separator_horizontal_pane_g

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy3_ParamLimits

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy3

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy3_ParamLimits

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy3

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy3_ParamLimits

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy3

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy3_ParamLimits

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy3

0x2519,	// (0x00022188) common_borders_pane_cp5

0x9ed7,	// (0x00029b46) separator_vertical_pane_g1

0x9ee0,	// (0x00029b4f) separator_vertical_pane_g2

0x9ee9,	// (0x00029b58) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0002f894) separator_vertical_pane_g

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy4_ParamLimits

0x9e2f,	// (0x00029a9e) eswt_control_pane_g1_copy4

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy4_ParamLimits

0x9e3c,	// (0x00029aab) eswt_control_pane_g2_copy4

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy4_ParamLimits

0x9e49,	// (0x00029ab8) eswt_control_pane_g3_copy4

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy4_ParamLimits

0x9e56,	// (0x00029ac5) eswt_control_pane_g4_copy4

0x102f,	// (0x00020c9e) eswt_ctrl_combo_button_pane

0x1037,	// (0x00020ca6) eswt_ctrl_input_pane

0x103f,	// (0x00020cae) popup_choice_list_window_cp70

0x1047,	// (0x00020cb6) eswt_ctrl_input_pane_t1

0x2519,	// (0x00022188) input_focus_pane_cp70

0x565b,	// (0x000252ca) bg_button_pane_cp70_ParamLimits

0x565b,	// (0x000252ca) bg_button_pane_cp70

0x1055,	// (0x00020cc4) eswt_ctrl_combo_button_pane_g1

0x9ef2,	// (0x00029b61) wait_bar_pane_cp70

0x39f9,	// (0x00023668) bg_popup_window_pane_cp70_ParamLimits

0x39f9,	// (0x00023668) bg_popup_window_pane_cp70

0x9efa,	// (0x00029b69) popup_eswt_tasktip_window_t1

0x9f10,	// (0x00029b7f) wait_bar_pane_cp71_ParamLimits

0x9f10,	// (0x00029b7f) wait_bar_pane_cp71

0x9f1c,	// (0x00029b8b) grid_eswt_app_pane

0x2eb6,	// (0x00022b25) scroll_pane_cp70

0x105d,	// (0x00020ccc) cell_eswt_app_pane_ParamLimits

0x105d,	// (0x00020ccc) cell_eswt_app_pane

0x1085,	// (0x00020cf4) cell_eswt_app_pane_g1_ParamLimits

0x1085,	// (0x00020cf4) cell_eswt_app_pane_g1

0x10b4,	// (0x00020d23) cell_eswt_app_pane_g2_ParamLimits

0x10b4,	// (0x00020d23) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0002f89b) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0002f89b) cell_eswt_app_pane_g

0x10dd,	// (0x00020d4c) cell_eswt_app_pane_t1_ParamLimits

0x10dd,	// (0x00020d4c) cell_eswt_app_pane_t1

0x9f25,	// (0x00029b94) grid_highlight_pane_cp70_ParamLimits

0x9f25,	// (0x00029b94) grid_highlight_pane_cp70

0x3499,	// (0x00023108) set_content_pane_g1

0xf503,	// (0x0002f172) status_small_volume_pane

0x8843,	// (0x000284b2) status_small_volume_pane_g1

0x884b,	// (0x000284ba) volume_small2_pane

0x8854,	// (0x000284c3) volume_small2_pane_g1

0x885d,	// (0x000284cc) volume_small2_pane_g2

0x8866,	// (0x000284d5) volume_small2_pane_g3

0x886f,	// (0x000284de) volume_small2_pane_g4

0x8878,	// (0x000284e7) volume_small2_pane_g5

0x8881,	// (0x000284f0) volume_small2_pane_g6

0x888a,	// (0x000284f9) volume_small2_pane_g7

0x8893,	// (0x00028502) volume_small2_pane_g8

0x889c,	// (0x0002850b) volume_small2_pane_g9

0x88a5,	// (0x00028514) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0002f8a0) volume_small2_pane_g

0x998d,	// (0x000295fc) fep_vkb_top_text_pane_g1_ParamLimits

0x0f9e,	// (0x00020c0d) fep_vkb_top_text_pane_t1_ParamLimits

0x9b7c,	// (0x000297eb) popup_preview_fixed_window_g3_ParamLimits

0x9b7c,	// (0x000297eb) popup_preview_fixed_window_g3

0xd9cc,	// (0x0002d63b) popup_toolbar_trans_pane

0x0a3a,	// (0x000206a9) aid_height_set_list_ParamLimits

0x47cf,	// (0x0002443e) aid_size_parent_ParamLimits

0x2cad,	// (0x0002291c) list_highlight_pane_cp2_ParamLimits

0x3499,	// (0x00023108) set_content_pane_g1_ParamLimits

0x0bbf,	// (0x0002082e) list_single_image_pane_ParamLimits

0x0bbf,	// (0x0002082e) list_single_image_pane

0x110f,	// (0x00020d7e) aid_size_cell_image_ParamLimits

0x110f,	// (0x00020d7e) aid_size_cell_image

0x111c,	// (0x00020d8b) grid_single_image_pane_ParamLimits

0x111c,	// (0x00020d8b) grid_single_image_pane

0x2b52,	// (0x000227c1) list_single_image_pane_g1_ParamLimits

0x2b52,	// (0x000227c1) list_single_image_pane_g1

0x2b5e,	// (0x000227cd) list_single_image_pane_g2_ParamLimits

0x2b5e,	// (0x000227cd) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0002f8b5) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0002f8b5) list_single_image_pane_g

0x9f31,	// (0x00029ba0) list_single_image_pane_t1_ParamLimits

0x9f31,	// (0x00029ba0) list_single_image_pane_t1

0x1128,	// (0x00020d97) cell_image_list_pane_ParamLimits

0x1128,	// (0x00020d97) cell_image_list_pane

0x113c,	// (0x00020dab) cell_image_list_pane_g1

0x1145,	// (0x00020db4) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0002f8ba) cell_image_list_pane_g

0x9f47,	// (0x00029bb6) aid_size_cell_tb_trans_pane

0x2b44,	// (0x000227b3) bg_tb_trans_pane

0x9f59,	// (0x00029bc8) grid_tb_trans_pane

0x396d,	// (0x000235dc) bg_tb_trans_pane_g1

0x3975,	// (0x000235e4) bg_tb_trans_pane_g2

0x397d,	// (0x000235ec) bg_tb_trans_pane_g3

0x3985,	// (0x000235f4) bg_tb_trans_pane_g4

0x398d,	// (0x000235fc) bg_tb_trans_pane_g5

0x39a5,	// (0x00023614) bg_tb_trans_pane_g6

0x39ad,	// (0x0002361c) bg_tb_trans_pane_g7

0x3995,	// (0x00023604) bg_tb_trans_pane_g8

0x399d,	// (0x0002360c) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0002f8bf) bg_tb_trans_pane_g

0x9f6d,	// (0x00029bdc) cell_toolbar_trans_pane_ParamLimits

0x9f6d,	// (0x00029bdc) cell_toolbar_trans_pane

0x5696,	// (0x00025305) cell_toolbar_trans_pane_g1

0x0de6,	// (0x00020a55) list_form2_midp_pane_t1

0x0df4,	// (0x00020a63) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0002f75c) list_form2_midp_pane_t

0x544e,	// (0x000250bd) scroll_pane_cp51_ParamLimits

0x556b,	// (0x000251da) form2_midp_wait_pane_g1

0x5574,	// (0x000251e3) form2_midp_wait_pane_g2

0x557d,	// (0x000251ec) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0002f771) form2_midp_wait_pane_g

0x2599,	// (0x00022208) list_highlight_pane_cp21_ParamLimits

0x559d,	// (0x0002520c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x55ac,	// (0x0002521b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4b17,	// (0x00024786) list_single_2graphic_im_pane_ParamLimits

0x4b17,	// (0x00024786) list_single_2graphic_im_pane

0x114e,	// (0x00020dbd) list_single_2graphic_im_pane_g1_ParamLimits

0x114e,	// (0x00020dbd) list_single_2graphic_im_pane_g1

0x9f93,	// (0x00029c02) list_single_2graphic_im_pane_g2_ParamLimits

0x9f93,	// (0x00029c02) list_single_2graphic_im_pane_g2

0x9f9f,	// (0x00029c0e) list_single_2graphic_im_pane_g3_ParamLimits

0x9f9f,	// (0x00029c0e) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0002f8d2) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0002f8d2) list_single_2graphic_im_pane_g

0x115f,	// (0x00020dce) list_single_2graphic_im_pane_t1_ParamLimits

0x115f,	// (0x00020dce) list_single_2graphic_im_pane_t1

0x9b88,	// (0x000297f7) list_single_graphic_2heading_pane_fp_ParamLimits

0x9b88,	// (0x000297f7) list_single_graphic_2heading_pane_fp

0xb9a1,	// (0x0002b610) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb9a1,	// (0x0002b610) list_single_graphic_2heading_pane_fp_g1

0x9b9b,	// (0x0002980a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9b9b,	// (0x0002980a) list_single_graphic_2heading_pane_fp_g2

0xb96a,	// (0x0002b5d9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb96a,	// (0x0002b5d9) list_single_graphic_2heading_pane_fp_g3

0xb976,	// (0x0002b5e5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb976,	// (0x0002b5e5) list_single_graphic_2heading_pane_fp_g4

0x9ba7,	// (0x00029816) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9ba7,	// (0x00029816) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002f7f9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002f7f9) list_single_graphic_2heading_pane_fp_g

0xbb7a,	// (0x0002b7e9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbb7a,	// (0x0002b7e9) list_single_graphic_2heading_pane_fp_t1

0xb9d9,	// (0x0002b648) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb9d9,	// (0x0002b648) list_single_graphic_2heading_pane_fp_t2

0xbb90,	// (0x0002b7ff) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbb90,	// (0x0002b7ff) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x0002f8db) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x0002f8db) list_single_graphic_2heading_pane_fp_t

0x5721,	// (0x00025390) fep_hwr_write_pane_g5_ParamLimits

0x5721,	// (0x00025390) fep_hwr_write_pane_g5

0x572d,	// (0x0002539c) fep_hwr_write_pane_g6_ParamLimits

0x572d,	// (0x0002539c) fep_hwr_write_pane_g6

0x9e02,	// (0x00029a71) eswt_shell_pane_ParamLimits

0x39f9,	// (0x00023668) bg_popup_window_pane_cp18_ParamLimits

0x4a60,	// (0x000246cf) heading_pane_cp70

0x9efa,	// (0x00029b69) popup_eswt_tasktip_window_t1_ParamLimits

0x03bb,	// (0x0002002a) aid_touch_tab_arrow_left

0x03cf,	// (0x0002003e) aid_touch_tab_arrow_right

0xef04,	// (0x0002eb73) title_pane_g3_ParamLimits

0xef04,	// (0x0002eb73) title_pane_g3

0x2b0c,	// (0x0002277b) set_value_pane_g1

0xd9cc,	// (0x0002d63b) popup_toolbar_trans_pane_ParamLimits

0x9f47,	// (0x00029bb6) aid_size_cell_tb_trans_pane_ParamLimits

0x2b44,	// (0x000227b3) bg_tb_trans_pane_ParamLimits

0x9f59,	// (0x00029bc8) grid_tb_trans_pane_ParamLimits

0x26cc,	// (0x0002233b) cont_note_pane_ParamLimits

0x26cc,	// (0x0002233b) cont_note_pane

0x2964,	// (0x000225d3) cont_snote2_single_text_pane_ParamLimits

0x2964,	// (0x000225d3) cont_snote2_single_text_pane

0x2964,	// (0x000225d3) cont_snote2_single_graphic_pane_ParamLimits

0x2964,	// (0x000225d3) cont_snote2_single_graphic_pane

0x3ece,	// (0x00023b3d) cont_note_wait_pane_ParamLimits

0x3ece,	// (0x00023b3d) cont_note_wait_pane

0x3ece,	// (0x00023b3d) cont_note_image_pane_ParamLimits

0x3ece,	// (0x00023b3d) cont_note_image_pane

0x9fbf,	// (0x00029c2e) popup_note2_window_g1_ParamLimits

0x9fbf,	// (0x00029c2e) popup_note2_window_g1

0x9ff0,	// (0x00029c5f) popup_note2_window_t1_ParamLimits

0x9ff0,	// (0x00029c5f) popup_note2_window_t1

0xa035,	// (0x00029ca4) popup_note2_window_t2_ParamLimits

0xa035,	// (0x00029ca4) popup_note2_window_t2

0xa07a,	// (0x00029ce9) popup_note2_window_t3_ParamLimits

0xa07a,	// (0x00029ce9) popup_note2_window_t3

0xa0bf,	// (0x00029d2e) popup_note2_window_t4_ParamLimits

0xa0bf,	// (0x00029d2e) popup_note2_window_t4

0x2750,	// (0x000223bf) popup_note2_window_t5_ParamLimits

0x2750,	// (0x000223bf) popup_note2_window_t5

0x0004,

0xfc78,	// (0x0002f8e7) popup_note2_window_t_ParamLimits

0xfc78,	// (0x0002f8e7) popup_note2_window_t

0xa0ee,	// (0x00029d5d) popup_note2_image_window_g1_ParamLimits

0xa0ee,	// (0x00029d5d) popup_note2_image_window_g1

0xa0fa,	// (0x00029d69) popup_note2_image_window_g2_ParamLimits

0xa0fa,	// (0x00029d69) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0002f8f2) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0002f8f2) popup_note2_image_window_g

0xa10c,	// (0x00029d7b) popup_note2_image_window_t1_ParamLimits

0xa10c,	// (0x00029d7b) popup_note2_image_window_t1

0xa124,	// (0x00029d93) popup_note2_image_window_t2_ParamLimits

0xa124,	// (0x00029d93) popup_note2_image_window_t2

0xa13c,	// (0x00029dab) popup_note2_image_window_t3_ParamLimits

0xa13c,	// (0x00029dab) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0002f8f7) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0002f8f7) popup_note2_image_window_t

0x3edc,	// (0x00023b4b) popup_note2_wait_window_g1_ParamLimits

0x3edc,	// (0x00023b4b) popup_note2_wait_window_g1

0x3ee8,	// (0x00023b57) popup_note2_wait_window_g2_ParamLimits

0x3ee8,	// (0x00023b57) popup_note2_wait_window_g2

0x3ef4,	// (0x00023b63) popup_note2_wait_window_g3_ParamLimits

0x3ef4,	// (0x00023b63) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x0002f4b2) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x0002f4b2) popup_note2_wait_window_g

0xa158,	// (0x00029dc7) popup_note2_wait_window_t1_ParamLimits

0xa158,	// (0x00029dc7) popup_note2_wait_window_t1

0xa176,	// (0x00029de5) popup_note2_wait_window_t2_ParamLimits

0xa176,	// (0x00029de5) popup_note2_wait_window_t2

0xa194,	// (0x00029e03) popup_note2_wait_window_t3_ParamLimits

0xa194,	// (0x00029e03) popup_note2_wait_window_t3

0xa1a6,	// (0x00029e15) popup_note2_wait_window_t4_ParamLimits

0xa1a6,	// (0x00029e15) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0002f8fe) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0002f8fe) popup_note2_wait_window_t

0xa1b8,	// (0x00029e27) wait_bar2_pane_ParamLimits

0xa1b8,	// (0x00029e27) wait_bar2_pane

0xa1d0,	// (0x00029e3f) popup_snote2_single_text_window_g1_ParamLimits

0xa1d0,	// (0x00029e3f) popup_snote2_single_text_window_g1

0xa1f8,	// (0x00029e67) popup_snote2_single_text_window_t1_ParamLimits

0xa1f8,	// (0x00029e67) popup_snote2_single_text_window_t1

0xa244,	// (0x00029eb3) popup_snote2_single_text_window_t2_ParamLimits

0xa244,	// (0x00029eb3) popup_snote2_single_text_window_t2

0xa290,	// (0x00029eff) popup_snote2_single_text_window_t3_ParamLimits

0xa290,	// (0x00029eff) popup_snote2_single_text_window_t3

0xa2d1,	// (0x00029f40) popup_snote2_single_text_window_t4_ParamLimits

0xa2d1,	// (0x00029f40) popup_snote2_single_text_window_t4

0xa307,	// (0x00029f76) popup_snote2_single_text_window_t5_ParamLimits

0xa307,	// (0x00029f76) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0002f907) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0002f907) popup_snote2_single_text_window_t

0xa332,	// (0x00029fa1) popup_snote2_single_graphic_window_g1_ParamLimits

0xa332,	// (0x00029fa1) popup_snote2_single_graphic_window_g1

0xa35a,	// (0x00029fc9) popup_snote2_single_graphic_window_g2_ParamLimits

0xa35a,	// (0x00029fc9) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0002f912) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0002f912) popup_snote2_single_graphic_window_g

0xa382,	// (0x00029ff1) popup_snote2_single_graphic_window_t1_ParamLimits

0xa382,	// (0x00029ff1) popup_snote2_single_graphic_window_t1

0xa3ce,	// (0x0002a03d) popup_snote2_single_graphic_window_t2_ParamLimits

0xa3ce,	// (0x0002a03d) popup_snote2_single_graphic_window_t2

0xa290,	// (0x00029eff) popup_snote2_single_graphic_window_t3_ParamLimits

0xa290,	// (0x00029eff) popup_snote2_single_graphic_window_t3

0xa2d1,	// (0x00029f40) popup_snote2_single_graphic_window_t4_ParamLimits

0xa2d1,	// (0x00029f40) popup_snote2_single_graphic_window_t4

0xa307,	// (0x00029f76) popup_snote2_single_graphic_window_t5_ParamLimits

0xa307,	// (0x00029f76) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0002f917) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0002f917) popup_snote2_single_graphic_window_t

0x53e9,	// (0x00025058) clock_nsta_pane_cp2_t1

0x53e9,	// (0x00025058) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0002f732) clock_nsta_pane_cp2_t

0xb312,	// (0x0002af81) form_field_data_wide_pane_g1_ParamLimits

0x2b52,	// (0x000227c1) form_field_data_wide_pane_g2_ParamLimits

0x2b52,	// (0x000227c1) form_field_data_wide_pane_g2

0x2b5e,	// (0x000227cd) form_field_data_wide_pane_g3_ParamLimits

0x2b5e,	// (0x000227cd) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002f2ea) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002f2ea) form_field_data_wide_pane_g

0x0d2f,	// (0x0002099e) grid_touch_3_pane_ParamLimits

0x0d2f,	// (0x0002099e) grid_touch_3_pane

0x1190,	// (0x00020dff) cell_touch_3_pane_ParamLimits

0x1190,	// (0x00020dff) cell_touch_3_pane

0x5696,	// (0x00025305) cell_touch_3_pane_g1

0x5696,	// (0x00025305) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0002f7b7) cell_touch_3_pane_g

0x2782,	// (0x000223f1) cont_query_data_pane

0x278a,	// (0x000223f9) cont_query_data_pane_cp1

0xa41a,	// (0x0002a089) button_value_adjust_pane_cp7

0xa422,	// (0x0002a091) query_popup_pane_cp3

0x30d9,	// (0x00022d48) bg_popup_sub_pane_cp22_ParamLimits

0x6be3,	// (0x00026852) navi_navi_volume_pane_cp2

0x6bfb,	// (0x0002686a) popup_side_volume_key_window_g2

0x6c07,	// (0x00026876) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002f380) popup_side_volume_key_window_g

0x6c21,	// (0x00026890) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002f387) popup_side_volume_key_window_t

0x336b,	// (0x00022fda) popup_side_volume_key_window_ParamLimits

0xe490,	// (0x0002e0ff) list_double_graphic_pane_g4_ParamLimits

0xe490,	// (0x0002e0ff) list_double_graphic_pane_g4

0x0b9d,	// (0x0002080c) list_single_2heading_msg_pane_ParamLimits

0x0b9d,	// (0x0002080c) list_single_2heading_msg_pane

0xed32,	// (0x0002e9a1) list_single_2heading_msg_pane_g1_ParamLimits

0xed32,	// (0x0002e9a1) list_single_2heading_msg_pane_g1

0xed3e,	// (0x0002e9ad) list_single_2heading_msg_pane_g2_ParamLimits

0xed3e,	// (0x0002e9ad) list_single_2heading_msg_pane_g2

0xed51,	// (0x0002e9c0) list_single_2heading_msg_pane_g3_ParamLimits

0xed51,	// (0x0002e9c0) list_single_2heading_msg_pane_g3

0xed5d,	// (0x0002e9cc) list_single_2heading_msg_pane_g4_ParamLimits

0xed5d,	// (0x0002e9cc) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0002f922) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0002f922) list_single_2heading_msg_pane_g

0xed75,	// (0x0002e9e4) list_single_2heading_msg_pane_t1_ParamLimits

0xed75,	// (0x0002e9e4) list_single_2heading_msg_pane_t1

0xed9d,	// (0x0002ea0c) list_single_2heading_msg_pane_t2_ParamLimits

0xed9d,	// (0x0002ea0c) list_single_2heading_msg_pane_t2

0xee08,	// (0x0002ea77) list_single_2heading_msg_pane_t3_ParamLimits

0xee08,	// (0x0002ea77) list_single_2heading_msg_pane_t3

0xbc73,	// (0x0002b8e2) list_single_2heading_msg_pane_t4_ParamLimits

0xbc73,	// (0x0002b8e2) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0002f92b) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0002f92b) list_single_2heading_msg_pane_t

0x2537,	// (0x000221a6) title_pane_g4_ParamLimits

0x2537,	// (0x000221a6) title_pane_g4

0x68f1,	// (0x00026560) title_pane_stacon_g3_ParamLimits

0x68f1,	// (0x00026560) title_pane_stacon_g3

0x9fb3,	// (0x00029c22) list_single_2graphic_im_pane_g4_ParamLimits

0x9fb3,	// (0x00029c22) list_single_2graphic_im_pane_g4

0x489c,	// (0x0002450b) popup_side_volume_key_window_cp

0x4d59,	// (0x000249c8) main_idle_act2_pane_t1

0x790d,	// (0x0002757c) toolbar_button_pane_g10

0xf1fb,	// (0x0002ee6a) popup_toolbar_window_cp1

0x53da,	// (0x00025049) clock_nsta_pane_cp_t1

0x53da,	// (0x00025049) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0002f72d) clock_nsta_pane_cp_t

0x6be3,	// (0x00026852) navi_navi_volume_pane_cp2_ParamLimits

0x6bef,	// (0x0002685e) popup_side_volume_key_window_g1_ParamLimits

0x6bfb,	// (0x0002686a) popup_side_volume_key_window_g2_ParamLimits

0x6c07,	// (0x00026876) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002f380) popup_side_volume_key_window_g_ParamLimits

0x84c3,	// (0x00028132) fep_hwr_aid_pane

0x8564,	// (0x000281d3) bg_fep_hwr_top_pane_g4_ParamLimits

0x5703,	// (0x00025372) fep_hwr_top_pane_g1_ParamLimits

0x56f1,	// (0x00025360) fep_hwr_top_pane_g2_ParamLimits

0x8584,	// (0x000281f3) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0002f782) fep_hwr_top_pane_g_ParamLimits

0x8599,	// (0x00028208) fep_hwr_top_text_pane_ParamLimits

0x461b,	// (0x0002428a) aid_touch_tab_arrow_arrow_2

0x4612,	// (0x00024281) aid_touch_tab_arrow_left_2

0x84d7,	// (0x00028146) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x850a,	// (0x00028179) fep_hwr_prediction_pane

0x97f8,	// (0x00029467) fep_vkb_prediction_pane

0x0f7e,	// (0x00020bed) fep_vkb_side_pane_g3_ParamLimits

0x0f7e,	// (0x00020bed) fep_vkb_side_pane_g3

0x8708,	// (0x00028377) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8772,	// (0x000283e1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x877f,	// (0x000283ee) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0002f831) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x88ae,	// (0x0002851d) fep_hwr_prediction_pane_g1

0x88b8,	// (0x00028527) fep_hwr_prediction_pane_g2

0x88c0,	// (0x0002852f) fep_hwr_prediction_pane_g3

0x88c8,	// (0x00028537) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0002f934) fep_hwr_prediction_pane_g

0xa433,	// (0x0002a0a2) fep_vkb_prediction_pane_g1

0xa43d,	// (0x0002a0ac) fep_vkb_prediction_pane_g2

0xa445,	// (0x0002a0b4) fep_vkb_prediction_pane_g3

0xa44d,	// (0x0002a0bc) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0002f93d) fep_vkb_prediction_pane_g

0x7dc2,	// (0x00027a31) slider_set_pane_g3

0x7dd6,	// (0x00027a45) slider_set_pane_g4

0x7dee,	// (0x00027a5d) slider_set_pane_g5

0x7dc2,	// (0x00027a31) slider_set_pane_g6

0xdae1,	// (0x0002d750) slider_set_pane_g7

0x4acd,	// (0x0002473c) slider_form_pane_g3

0x4ad6,	// (0x00024745) slider_form_pane_g4

0x4ade,	// (0x0002474d) slider_form_pane_g5

0x4acd,	// (0x0002473c) slider_form_pane_g6

0x0b71,	// (0x000207e0) slider_form_pane_g7

0x4f82,	// (0x00024bf1) slider_set_pane_vc_g3

0x4f8b,	// (0x00024bfa) slider_set_pane_vc_g4

0x4f94,	// (0x00024c03) slider_set_pane_vc_g5

0x4f82,	// (0x00024bf1) slider_set_pane_vc_g6

0x4f9d,	// (0x00024c0c) slider_set_pane_vc_g7

0x5135,	// (0x00024da4) slider_form_pane_vc_g1

0x513e,	// (0x00024dad) slider_form_pane_vc_g2

0x5147,	// (0x00024db6) slider_form_pane_vc_g3

0x5135,	// (0x00024da4) slider_form_pane_vc_g4

0x5150,	// (0x00024dbf) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0002f6ff) slider_form_pane_vc_g

0x6315,	// (0x00025f84) main_idle_act3_pane

0xa455,	// (0x0002a0c4) ai3_links_pane

0x11d6,	// (0x00020e45) popup_ai3_data_window_ParamLimits

0x11d6,	// (0x00020e45) popup_ai3_data_window

0x2519,	// (0x00022188) grid_ai3_links_pane

0x11ee,	// (0x00020e5d) cell_ai3_links_pane_ParamLimits

0x11ee,	// (0x00020e5d) cell_ai3_links_pane

0xa45e,	// (0x0002a0cd) bg_popup_sub_pane_cp11

0xa46b,	// (0x0002a0da) cell_ai3_links_pane_g1

0x2519,	// (0x00022188) bg_popup_sub_pane_cp12

0xa490,	// (0x0002a0ff) heading_ai3_data_pane

0xa498,	// (0x0002a107) list_ai3_gene_pane

0xa4a4,	// (0x0002a113) popup_ai3_data_window_g1

0xa4ac,	// (0x0002a11b) heading_ai3_data_pane_g1

0xa4b4,	// (0x0002a123) heading_ai3_data_pane_t1

0xa4c2,	// (0x0002a131) list_double_ai3_gene_pane_ParamLimits

0xa4c2,	// (0x0002a131) list_double_ai3_gene_pane

0xa4cf,	// (0x0002a13e) list_single_ai3_gene_pane_ParamLimits

0xa4cf,	// (0x0002a13e) list_single_ai3_gene_pane

0x565b,	// (0x000252ca) list_highlight_pane_cp7_ParamLimits

0x565b,	// (0x000252ca) list_highlight_pane_cp7

0xa4dc,	// (0x0002a14b) list_single_a13_gene_pane_t1_ParamLimits

0xa4dc,	// (0x0002a14b) list_single_a13_gene_pane_t1

0xa4f3,	// (0x0002a162) list_single_ai3_gene_pane_g1

0xa4fc,	// (0x0002a16b) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0002f946) list_single_ai3_gene_pane_g

0xa504,	// (0x0002a173) list_double_ai3_gene_pane_g1_ParamLimits

0xa504,	// (0x0002a173) list_double_ai3_gene_pane_g1

0xa510,	// (0x0002a17f) list_double_ai3_gene_pane_t1_ParamLimits

0xa510,	// (0x0002a17f) list_double_ai3_gene_pane_t1

0xa52c,	// (0x0002a19b) list_double_ai3_gene_pane_t2_ParamLimits

0xa52c,	// (0x0002a19b) list_double_ai3_gene_pane_t2

0xa542,	// (0x0002a1b1) list_double_ai3_gene_pane_t3_ParamLimits

0xa542,	// (0x0002a1b1) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0002f94b) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0002f94b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbba6,	// (0x0002b815) aid_size_min_col_2

0x11c2,	// (0x00020e31) aid_size_min_msg_ParamLimits

0x11c2,	// (0x00020e31) aid_size_min_msg

0x0f92,	// (0x00020c01) fep_vkb_top_text_pane_g2_ParamLimits

0x0f92,	// (0x00020c01) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0002f7b2) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0002f7b2) fep_vkb_top_text_pane_g

0x6315,	// (0x00025f84) main_hc_apps_shell_pane

0xa55f,	// (0x0002a1ce) grid_hc_apps_pane_ParamLimits

0xa55f,	// (0x0002a1ce) grid_hc_apps_pane

0xa56e,	// (0x0002a1dd) list_hc_apps_pane

0xa576,	// (0x0002a1e5) scroll_pane_cp37_ParamLimits

0xa576,	// (0x0002a1e5) scroll_pane_cp37

0x1204,	// (0x00020e73) cell_hc_apps_pane_ParamLimits

0x1204,	// (0x00020e73) cell_hc_apps_pane

0x129e,	// (0x00020f0d) cell_hc_apps_pane_g1_ParamLimits

0x129e,	// (0x00020f0d) cell_hc_apps_pane_g1

0xa582,	// (0x0002a1f1) cell_hc_apps_pane_g2_ParamLimits

0xa582,	// (0x0002a1f1) cell_hc_apps_pane_g2

0xa59e,	// (0x0002a20d) cell_hc_apps_pane_g3_ParamLimits

0xa59e,	// (0x0002a20d) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0002f952) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0002f952) cell_hc_apps_pane_g

0x12cb,	// (0x00020f3a) cell_hc_apps_pane_t1_ParamLimits

0x12cb,	// (0x00020f3a) cell_hc_apps_pane_t1

0x26cc,	// (0x0002233b) grid_highlight_pane_cp10_ParamLimits

0x26cc,	// (0x0002233b) grid_highlight_pane_cp10

0x1309,	// (0x00020f78) list_single_hc_apps_pane_ParamLimits

0x1309,	// (0x00020f78) list_single_hc_apps_pane

0x1334,	// (0x00020fa3) list_single_hc_apps_pane_g1

0xee76,	// (0x0002eae5) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0002f959) list_single_hc_apps_pane_g

0xee8f,	// (0x0002eafe) list_single_hc_apps_pane_g2_copy1

0xeeab,	// (0x0002eb1a) list_single_hc_apps_pane_t1

0x2599,	// (0x00022208) bg_set_opt_pane_cp_ParamLimits

0x65de,	// (0x0002624d) setting_slider_pane_t1_ParamLimits

0xd2b2,	// (0x0002cf21) setting_slider_pane_t2_ParamLimits

0xd2cb,	// (0x0002cf3a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002f1cd) setting_slider_pane_t_ParamLimits

0x6627,	// (0x00026296) slider_set_pane_ParamLimits

0x6fcc,	// (0x00026c3b) control_pane_g5_ParamLimits

0x6fcc,	// (0x00026c3b) control_pane_g5

0x4aa7,	// (0x00024716) slider_set_pane_g1_ParamLimits

0x7db6,	// (0x00027a25) slider_set_pane_g2_ParamLimits

0x7dc2,	// (0x00027a31) slider_set_pane_g3_ParamLimits

0x7dd6,	// (0x00027a45) slider_set_pane_g4_ParamLimits

0x7dee,	// (0x00027a5d) slider_set_pane_g5_ParamLimits

0x7dc2,	// (0x00027a31) slider_set_pane_g6_ParamLimits

0xdae1,	// (0x0002d750) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002f5ce) slider_set_pane_g_ParamLimits

0x3444,	// (0x000230b3) navi_icon_text_pane_ParamLimits

0x038c,	// (0x0001fffb) aid_fill_nsta_2_ParamLimits

0x03bb,	// (0x0002002a) aid_touch_tab_arrow_left_ParamLimits

0x03cf,	// (0x0002003e) aid_touch_tab_arrow_right_ParamLimits

0x0468,	// (0x000200d7) clock_nsta_pane_ParamLimits

0x45f4,	// (0x00024263) navi_icon_pane_g1_ParamLimits

0x4600,	// (0x0002426f) navi_text_pane_t1_ParamLimits

0x5428,	// (0x00025097) navi_icon_text_pane_g1_ParamLimits

0x5434,	// (0x000250a3) navi_icon_text_pane_t1_ParamLimits

0x1334,	// (0x00020fa3) list_single_hc_apps_pane_g1_ParamLimits

0xee76,	// (0x0002eae5) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0002f959) list_single_hc_apps_pane_g_ParamLimits

0xee8f,	// (0x0002eafe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeeab,	// (0x0002eb1a) list_single_hc_apps_pane_t1_ParamLimits

0xd1f8,	// (0x0002ce67) popup_toolbar2_fixed_window_ParamLimits

0xd1f8,	// (0x0002ce67) popup_toolbar2_fixed_window

0xd9c4,	// (0x0002d633) popup_toolbar2_float_window

0x2519,	// (0x00022188) bg_popup_sub_pane_cp27

0xa5c0,	// (0x0002a22f) grid_toolbar2_float_pane

0x2519,	// (0x00022188) bg_popup_sub_pane_cp26

0xa5c0,	// (0x0002a22f) grid_toolbar2_fixed_pane

0x134d,	// (0x00020fbc) cell_toolbar2_fixed_pane_ParamLimits

0x134d,	// (0x00020fbc) cell_toolbar2_fixed_pane

0x1368,	// (0x00020fd7) cell_toolbar2_fixed_pane_g1

0xa5c8,	// (0x0002a237) toolbar2_fixed_button_pane

0x396d,	// (0x000235dc) toolbar2_fixed_button_pane_g1

0x3975,	// (0x000235e4) toolbar2_fixed_button_pane_g2

0x397d,	// (0x000235ec) toolbar2_fixed_button_pane_g3

0x3985,	// (0x000235f4) toolbar2_fixed_button_pane_g4

0x398d,	// (0x000235fc) toolbar2_fixed_button_pane_g5

0x3995,	// (0x00023604) toolbar2_fixed_button_pane_g6

0x399d,	// (0x0002360c) toolbar2_fixed_button_pane_g7

0x39a5,	// (0x00023614) toolbar2_fixed_button_pane_g8

0x39ad,	// (0x0002361c) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002f4d0) toolbar2_fixed_button_pane_g

0xa5d0,	// (0x0002a23f) cell_toolbar2_float_pane_ParamLimits

0xa5d0,	// (0x0002a23f) cell_toolbar2_float_pane

0xa5e1,	// (0x0002a250) cell_toolbar2_float_pane_g1

0xa5c8,	// (0x0002a237) toolbar2_fixed_button_pane_cp

0x0f47,	// (0x00020bb6) fep_vkb_accented_list_pane_ParamLimits

0x0f47,	// (0x00020bb6) fep_vkb_accented_list_pane

0x86e8,	// (0x00028357) bg_popup_fep_shadow_pane_g9

0x35c2,	// (0x00023231) bg_popup_fep_shadow_pane_cp3

0x2c54,	// (0x000228c3) list_accented_list_pane

0xa5ea,	// (0x0002a259) list_single_accented_list_pane_ParamLimits

0xa5ea,	// (0x0002a259) list_single_accented_list_pane

0x35c2,	// (0x00023231) list_highlight_pane_cp10

0xa5fb,	// (0x0002a26a) list_single_accented_list_pane_t1

0xd90a,	// (0x0002d579) popup_slider_window_ParamLimits

0xd90a,	// (0x0002d579) popup_slider_window

0xa42a,	// (0x0002a099) aid_indentation_list_msg

0x1447,	// (0x000210b6) bg_popup_window_pane_cp19

0xa661,	// (0x0002a2d0) popup_slider_window_g1

0xa67d,	// (0x0002a2ec) popup_slider_window_g2

0xa699,	// (0x0002a308) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0002f95e) popup_slider_window_g

0xa6b5,	// (0x0002a324) popup_slider_window_t1

0xa6f9,	// (0x0002a368) small_volume_slider_vertical_pane

0x5696,	// (0x00025305) small_volume_slider_vertical_pane_g1

0x5696,	// (0x00025305) small_volume_slider_vertical_pane_g2

0xa715,	// (0x0002a384) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0002f970) small_volume_slider_vertical_pane_g

0xd17c,	// (0x0002cdeb) area_side_right_pane_ParamLimits

0xd17c,	// (0x0002cdeb) area_side_right_pane

0xdb44,	// (0x0002d7b3) aid_size_side_button_ParamLimits

0xdb44,	// (0x0002d7b3) aid_size_side_button

0xdb5d,	// (0x0002d7cc) grid_sctrl_middle_pane_ParamLimits

0xdb5d,	// (0x0002d7cc) grid_sctrl_middle_pane

0x88ff,	// (0x0002856e) sctrl_sk_bottom_pane

0x8910,	// (0x0002857f) sctrl_sk_top_pane

0x8922,	// (0x00028591) aid_touch_sctrl_top

0x892f,	// (0x0002859e) bg_sctrl_sk_pane_ParamLimits

0x892f,	// (0x0002859e) bg_sctrl_sk_pane

0x893d,	// (0x000285ac) sctrl_sk_top_pane_g1

0x894a,	// (0x000285b9) sctrl_sk_top_pane_t1

0x8922,	// (0x00028591) aid_touch_sctrl_bottom

0x892f,	// (0x0002859e) bg_sctrl_sk_pane_cp_ParamLimits

0x892f,	// (0x0002859e) bg_sctrl_sk_pane_cp

0x8965,	// (0x000285d4) sctrl_sk_bottom_pane_g1

0x894a,	// (0x000285b9) sctrl_sk_bottom_pane_t1

0xdb73,	// (0x0002d7e2) cell_sctrl_middle_pane_ParamLimits

0xdb73,	// (0x0002d7e2) cell_sctrl_middle_pane

0xdb84,	// (0x0002d7f3) aid_touch_sctrl_middle_ParamLimits

0xdb84,	// (0x0002d7f3) aid_touch_sctrl_middle

0xdb91,	// (0x0002d800) bg_sctrl_middle_pane_ParamLimits

0xdb91,	// (0x0002d800) bg_sctrl_middle_pane

0x8f68,	// (0x00028bd7) cell_sctrl_middle_pane_g1_ParamLimits

0x8f68,	// (0x00028bd7) cell_sctrl_middle_pane_g1

0xdb9f,	// (0x0002d80e) cell_sctrl_middle_pane_g2_ParamLimits

0xdb9f,	// (0x0002d80e) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0002f97c) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0002f97c) cell_sctrl_middle_pane_g

0x396d,	// (0x000235dc) bg_sctrl_middle_pane_g1

0x397d,	// (0x000235ec) bg_sctrl_middle_pane_g2

0x3975,	// (0x000235e4) bg_sctrl_middle_pane_g3

0x398d,	// (0x000235fc) bg_sctrl_middle_pane_g4

0x3985,	// (0x000235f4) bg_sctrl_middle_pane_g5

0x3995,	// (0x00023604) bg_sctrl_middle_pane_g6

0x399d,	// (0x0002360c) bg_sctrl_middle_pane_g7

0x39ad,	// (0x0002361c) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0002f981) bg_sctrl_middle_pane_g

0x39a5,	// (0x00023614) bg_sctrl_middle_pane_g8_copy1

0x396d,	// (0x000235dc) bg_sctrl_sk_pane_g1

0x3975,	// (0x000235e4) bg_sctrl_sk_pane_g2

0x397d,	// (0x000235ec) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002f4d0) bg_sctrl_sk_pane_g

0x2a86,	// (0x000226f5) aid_size_touch_scroll_bar

0x3985,	// (0x000235f4) bg_sctrl_sk_pane_g4

0x398d,	// (0x000235fc) bg_sctrl_sk_pane_g5

0x3995,	// (0x00023604) bg_sctrl_sk_pane_g6

0x399d,	// (0x0002360c) bg_sctrl_sk_pane_g7

0x39a5,	// (0x00023614) bg_sctrl_sk_pane_g8

0x39ad,	// (0x0002361c) bg_sctrl_sk_pane_g9

0x71b6,	// (0x00026e25) popup_fep_china_hwr2_fs_candidate_window

0xd502,	// (0x0002d171) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd502,	// (0x0002d171) popup_fep_china_hwr2_fs_control_window

0x8708,	// (0x00028377) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0002f977) sctrl_sk_top_pane_g

0x1566,	// (0x000211d5) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1566,	// (0x000211d5) aid_fep_china_hwr2_fs_cell

0x157a,	// (0x000211e9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x157a,	// (0x000211e9) bg_popup_fep_shadow_pane_cp4

0x1591,	// (0x00021200) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1591,	// (0x00021200) bg_popup_fep_shadow_pane_cp5

0x15a3,	// (0x00021212) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x15a3,	// (0x00021212) popup_fep_china_hwr2_fs_control_bar_grid

0x15b7,	// (0x00021226) popup_fep_china_hwr2_fs_control_funtion_grid

0xa71e,	// (0x0002a38d) aid_fep_china_hwr2_fs_candi_cell

0x2519,	// (0x00022188) bg_popup_fep_shadow_pane_cp6

0xa728,	// (0x0002a397) popup_fep_china_hwr2_fs_candidate_grid

0x15bf,	// (0x0002122e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x15bf,	// (0x0002122e) cell_fep_china_hwr2_fs_funtion_grid

0x5696,	// (0x00025305) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xa730,	// (0x0002a39f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xa730,	// (0x0002a39f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xa73e,	// (0x0002a3ad) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xa73e,	// (0x0002a3ad) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0002f992) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0002f992) cell_fep_china_hwr2_fs_funtion_grid_g

0x15d7,	// (0x00021246) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x15d7,	// (0x00021246) cell_fep_china_hwr2_fs_funtion_grid_t1

0x15ec,	// (0x0002125b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x15ec,	// (0x0002125b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0002f997) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0002f997) cell_fep_china_hwr2_fs_funtion_grid_t

0xa754,	// (0x0002a3c3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xa75c,	// (0x0002a3cb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xa764,	// (0x0002a3d3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0002f99c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xa76c,	// (0x0002a3db) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xa76c,	// (0x0002a3db) cell_fep_china_hwr2_fs_candidate_grid

0xa785,	// (0x0002a3f4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xa78d,	// (0x0002a3fc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5696,	// (0x00025305) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5696,	// (0x00025305) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0002f7b7) cell_fep_china_hwr2_fs_candidate_grid_g

0xa795,	// (0x0002a404) cell_fep_china_hwr2_fs_candidate_grid_t1

0x379e,	// (0x0002340d) clock_nsta_pane_cp_24_ParamLimits

0x379e,	// (0x0002340d) clock_nsta_pane_cp_24

0x3806,	// (0x00023475) indicator_nsta_pane_cp_24_ParamLimits

0x3806,	// (0x00023475) indicator_nsta_pane_cp_24

0x44ea,	// (0x00024159) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002f535) heading_pane_g

0x4be6,	// (0x00024855) grid_sct_catagory_button_pane

0x47e1,	// (0x00024450) scroll_pane_cp5_ParamLimits

0x545a,	// (0x000250c9) button_value_adjust_pane_cp5_ParamLimits

0x545a,	// (0x000250c9) button_value_adjust_pane_cp5

0x54ff,	// (0x0002516e) form2_midp_time_pane_ParamLimits

0xa7a3,	// (0x0002a412) cell_sct_catagory_button_pane_ParamLimits

0xa7a3,	// (0x0002a412) cell_sct_catagory_button_pane

0x565b,	// (0x000252ca) bg_button_pane_cp01_ParamLimits

0x565b,	// (0x000252ca) bg_button_pane_cp01

0x5696,	// (0x00025305) cell_sct_catagory_button_pane_g1

0xd979,	// (0x0002d5e8) popup_tb_extension_window

0x1608,	// (0x00021277) aid_size_cell_ext_ParamLimits

0x1608,	// (0x00021277) aid_size_cell_ext

0x2964,	// (0x000225d3) bg_tb_trans_pane_cp1_ParamLimits

0x2964,	// (0x000225d3) bg_tb_trans_pane_cp1

0x162a,	// (0x00021299) grid_tb_ext_pane_ParamLimits

0x162a,	// (0x00021299) grid_tb_ext_pane

0x165a,	// (0x000212c9) cell_tb_ext_pane_ParamLimits

0x165a,	// (0x000212c9) cell_tb_ext_pane

0x167e,	// (0x000212ed) cell_tb_ext_pane_g1_ParamLimits

0x167e,	// (0x000212ed) cell_tb_ext_pane_g1

0xa7b5,	// (0x0002a424) cell_tb_ext_pane_t1

0x26cc,	// (0x0002233b) list_highlight_pane_cp11_ParamLimits

0x26cc,	// (0x0002233b) list_highlight_pane_cp11

0xd20d,	// (0x0002ce7c) popup_uni_indicator_window_ParamLimits

0xd20d,	// (0x0002ce7c) popup_uni_indicator_window

0x2b44,	// (0x000227b3) bg_popup_sub_pane_cp14

0xa7d0,	// (0x0002a43f) list_uniindi_pane

0xa7dc,	// (0x0002a44b) uniindi_top_pane

0x26cc,	// (0x0002233b) bg_uniindi_top_pane

0xa7fb,	// (0x0002a46a) uniindi_top_pane_g1

0xa811,	// (0x0002a480) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0002f9a3) uniindi_top_pane_g

0xa83b,	// (0x0002a4aa) uniindi_top_pane_t1

0xa865,	// (0x0002a4d4) list_single_uniindi_pane_ParamLimits

0xa865,	// (0x0002a4d4) list_single_uniindi_pane

0x5696,	// (0x00025305) bg_uniindi_top_pane_g1

0xa877,	// (0x0002a4e6) list_single_uniindi_pane_g1

0xa88a,	// (0x0002a4f9) list_single_uniindi_pane_t1

0x6315,	// (0x00025f84) control_bg_pane

0xa8af,	// (0x0002a51e) bg_sctrl_sk_pane_cp1

0xa8b8,	// (0x0002a527) bg_sctrl_sk_pane_cp2

0xa8c1,	// (0x0002a530) control_bg_pane_g1

0xa8ca,	// (0x0002a539) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0002f9ac) control_bg_pane_g

0x5336,	// (0x00024fa5) cell_indicator_nsta_pane_g1_ParamLimits

0x0d5c,	// (0x000209cb) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0002f71b) cell_indicator_nsta_pane_g_ParamLimits

0xb957,	// (0x0002b5c6) form2_midp_time_pane_t1_ParamLimits

0x84b5,	// (0x00028124) main_idle_act4_pane_ParamLimits

0x84b5,	// (0x00028124) main_idle_act4_pane

0xd979,	// (0x0002d5e8) popup_tb_extension_window_ParamLimits

0x1646,	// (0x000212b5) tb_ext_find_pane_ParamLimits

0x1646,	// (0x000212b5) tb_ext_find_pane

0xa8d3,	// (0x0002a542) ai_gene_pane_1_cp1

0x3656,	// (0x000232c5) ai_gene_pane_2_cp1

0xa8db,	// (0x0002a54a) list_single_idle_plugin_calendar_pane

0xa8e4,	// (0x0002a553) list_single_idle_plugin_notification_pane

0xa8ed,	// (0x0002a55c) list_single_idle_plugin_player_pane

0x169b,	// (0x0002130a) list_single_idle_plugin_shortcut_pane_ParamLimits

0x169b,	// (0x0002130a) list_single_idle_plugin_shortcut_pane

0x16bb,	// (0x0002132a) main_idle_act4_pane_t1

0x16d1,	// (0x00021340) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0002f9b1) main_idle_act4_pane_t

0x16e7,	// (0x00021356) middle_sk_idle_act4_pane_ParamLimits

0x16e7,	// (0x00021356) middle_sk_idle_act4_pane

0x1703,	// (0x00021372) popup_clock_digital_analogue_window_cp2

0x1729,	// (0x00021398) shortcut_wheel_idle_act4_pane_ParamLimits

0x1729,	// (0x00021398) shortcut_wheel_idle_act4_pane

0x5696,	// (0x00025305) shortcut_wheel_idle_act4_pane_g1

0x5696,	// (0x00025305) shortcut_wheel_idle_act4_pane_g2

0x5696,	// (0x00025305) shortcut_wheel_idle_act4_pane_g3

0x5696,	// (0x00025305) shortcut_wheel_idle_act4_pane_g4

0x5696,	// (0x00025305) shortcut_wheel_idle_act4_pane_g5

0xa8f6,	// (0x0002a565) shortcut_wheel_idle_act4_pane_g6

0xa8fe,	// (0x0002a56d) shortcut_wheel_idle_act4_pane_g7

0xa906,	// (0x0002a575) shortcut_wheel_idle_act4_pane_g8

0xa90e,	// (0x0002a57d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0002f9b6) shortcut_wheel_idle_act4_pane_g

0xdbab,	// (0x0002d81a) middle_sk_idle_act4_pane_g1_ParamLimits

0xdbab,	// (0x0002d81a) middle_sk_idle_act4_pane_g1

0x17a4,	// (0x00021413) middle_sk_idle_act4_pane_g2_ParamLimits

0x17a4,	// (0x00021413) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0002f9d9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0002f9d9) middle_sk_idle_act4_pane_g

0x17bc,	// (0x0002142b) middle_sk_idle_act4_pane_t1_ParamLimits

0x17bc,	// (0x0002142b) middle_sk_idle_act4_pane_t1

0x17eb,	// (0x0002145a) grid_ai_shortcut_pane_ParamLimits

0x17eb,	// (0x0002145a) grid_ai_shortcut_pane

0x1808,	// (0x00021477) list_highlight_pane_cp16_ParamLimits

0x1808,	// (0x00021477) list_highlight_pane_cp16

0x1815,	// (0x00021484) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1815,	// (0x00021484) list_single_idle_plugin_shortcut_pane_g1

0x1821,	// (0x00021490) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1821,	// (0x00021490) list_single_idle_plugin_shortcut_pane_g2

0x183d,	// (0x000214ac) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x183d,	// (0x000214ac) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0002f9de) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0002f9de) list_single_idle_plugin_shortcut_pane_g

0x1852,	// (0x000214c1) cell_ai_shortcut_pane_ParamLimits

0x1852,	// (0x000214c1) cell_ai_shortcut_pane

0x1868,	// (0x000214d7) cell_ai_shortcut_pane_g1_ParamLimits

0x1868,	// (0x000214d7) cell_ai_shortcut_pane_g1

0xa8d3,	// (0x0002a542) ai_gene_pane_1_cp2

0xa916,	// (0x0002a585) ai_gene_pane_2_cp2

0xa91e,	// (0x0002a58d) list_highlight_pane_cp15

0xa927,	// (0x0002a596) list_single_idle_plugin_calendar_pane_g1

0xa91e,	// (0x0002a58d) list_highlight_pane_cp17

0xa92f,	// (0x0002a59e) list_single_idle_plugin_calendar_pane_g1_copy1

0xa937,	// (0x0002a5a6) list_single_idle_plugin_player_pane_g1

0x4de5,	// (0x00024a54) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0002f9e5) list_single_idle_plugin_player_pane_g

0xa93f,	// (0x0002a5ae) list_single_idle_plugin_player_pane_t1

0xa94d,	// (0x0002a5bc) list_single_idle_plugin_player_pane_t2

0xa95b,	// (0x0002a5ca) list_single_idle_plugin_player_pane_t3

0xa969,	// (0x0002a5d8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0002f9ea) list_single_idle_plugin_player_pane_t

0xa977,	// (0x0002a5e6) wait_bar_pane_cp15

0xa97f,	// (0x0002a5ee) grid_ai_notification_pane

0x4de5,	// (0x00024a54) list_single_idle_plugin_notification_pane_g1

0x188a,	// (0x000214f9) cell_ai_notification_pane_ParamLimits

0x188a,	// (0x000214f9) cell_ai_notification_pane

0xa988,	// (0x0002a5f7) cell_ai_notification_pane_g1

0xa990,	// (0x0002a5ff) cell_ai_notification_pane_t1

0x1897,	// (0x00021506) tb_ext_find_button_pane

0x189f,	// (0x0002150e) tb_ext_find_pane_g1

0x18a7,	// (0x00021516) tb_ext_find_pane_t1

0x3078,	// (0x00022ce7) tb_ext_find_button_pane_g1

0xa99e,	// (0x0002a60d) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0002f9f3) tb_ext_find_button_pane_g

0x16bb,	// (0x0002132a) main_idle_act4_pane_t1_ParamLimits

0x16d1,	// (0x00021340) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0002f9b1) main_idle_act4_pane_t_ParamLimits

0x1703,	// (0x00021372) popup_clock_digital_analogue_window_cp2_ParamLimits

0x1719,	// (0x00021388) sat_plugin_idle_act4_pane_ParamLimits

0x1719,	// (0x00021388) sat_plugin_idle_act4_pane

0x18b5,	// (0x00021524) sat_plugin_idle_act4_pane_t1_ParamLimits

0x18b5,	// (0x00021524) sat_plugin_idle_act4_pane_t1

0x18cd,	// (0x0002153c) sat_plugin_idle_act4_pane_t2_ParamLimits

0x18cd,	// (0x0002153c) sat_plugin_idle_act4_pane_t2

0x18e5,	// (0x00021554) sat_plugin_idle_act4_pane_t3_ParamLimits

0x18e5,	// (0x00021554) sat_plugin_idle_act4_pane_t3

0x18fd,	// (0x0002156c) sat_plugin_idle_act4_pane_t4_ParamLimits

0x18fd,	// (0x0002156c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0002f9f8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0002f9f8) sat_plugin_idle_act4_pane_t

0x63da,	// (0x00026049) popup_battery_window_ParamLimits

0x63da,	// (0x00026049) popup_battery_window

0x26cc,	// (0x0002233b) bg_popup_sub_pane_cp25_ParamLimits

0x26cc,	// (0x0002233b) bg_popup_sub_pane_cp25

0xa9a7,	// (0x0002a616) popup_battery_window_g1_ParamLimits

0xa9a7,	// (0x0002a616) popup_battery_window_g1

0xa9b3,	// (0x0002a622) popup_battery_window_t1_ParamLimits

0xa9b3,	// (0x0002a622) popup_battery_window_t1

0xa9c5,	// (0x0002a634) popup_battery_window_t2_ParamLimits

0xa9c5,	// (0x0002a634) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0002fa01) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0002fa01) popup_battery_window_t

0xf3e3,	// (0x0002f052) midp_canvas_pane_ParamLimits

0xf438,	// (0x0002f0a7) midp_keypad_pane_ParamLimits

0xf438,	// (0x0002f0a7) midp_keypad_pane

0x2cad,	// (0x0002291c) main_midp_pane_ParamLimits

0x53f8,	// (0x00025067) signal_pane_g2_cp_ParamLimits

0x1915,	// (0x00021584) aid_size_cell_midp_keypad_ParamLimits

0x1915,	// (0x00021584) aid_size_cell_midp_keypad

0x1932,	// (0x000215a1) midp_keyp_game_grid_pane_ParamLimits

0x1932,	// (0x000215a1) midp_keyp_game_grid_pane

0x1951,	// (0x000215c0) midp_keyp_rocker_pane_ParamLimits

0x1951,	// (0x000215c0) midp_keyp_rocker_pane

0x1992,	// (0x00021601) midp_keyp_sk_left_pane_ParamLimits

0x1992,	// (0x00021601) midp_keyp_sk_left_pane

0x19e4,	// (0x00021653) midp_keyp_sk_right_pane_ParamLimits

0x19e4,	// (0x00021653) midp_keyp_sk_right_pane

0x2519,	// (0x00022188) bg_button_pane_cp03

0x1a30,	// (0x0002169f) midp_keyp_sk_left_pane_g1

0x2519,	// (0x00022188) bg_button_pane_cp04

0x1a30,	// (0x0002169f) midp_keyp_sk_right_pane_g1

0x5696,	// (0x00025305) midp_keyp_rocker_pane_g1

0x1a39,	// (0x000216a8) keyp_game_cell_pane_ParamLimits

0x1a39,	// (0x000216a8) keyp_game_cell_pane

0x2519,	// (0x00022188) bg_button_pane_cp02

0x1a5b,	// (0x000216ca) keyp_game_cell_pane_g1

0xd1be,	// (0x0002ce2d) popup_fep_vkb2_window_ParamLimits

0xd1be,	// (0x0002ce2d) popup_fep_vkb2_window

0xdbb9,	// (0x0002d828) aid_size_cell_vkb2_ParamLimits

0xdbb9,	// (0x0002d828) aid_size_cell_vkb2

0xdbef,	// (0x0002d85e) popup_fep_vkb2_window_g1_ParamLimits

0xdbef,	// (0x0002d85e) popup_fep_vkb2_window_g1

0xdc3f,	// (0x0002d8ae) vkb2_area_bottom_pane_ParamLimits

0xdc3f,	// (0x0002d8ae) vkb2_area_bottom_pane

0xdc7d,	// (0x0002d8ec) vkb2_area_keypad_pane_ParamLimits

0xdc7d,	// (0x0002d8ec) vkb2_area_keypad_pane

0xdcbb,	// (0x0002d92a) vkb2_area_top_pane_ParamLimits

0xdcbb,	// (0x0002d92a) vkb2_area_top_pane

0xdd37,	// (0x0002d9a6) vkb2_top_entry_pane_ParamLimits

0xdd37,	// (0x0002d9a6) vkb2_top_entry_pane

0xdd64,	// (0x0002d9d3) vkb2_top_grid_left_pane_ParamLimits

0xdd64,	// (0x0002d9d3) vkb2_top_grid_left_pane

0xdd84,	// (0x0002d9f3) vkb2_top_grid_right_pane_ParamLimits

0xdd84,	// (0x0002d9f3) vkb2_top_grid_right_pane

0x8ba9,	// (0x00028818) vkb2_cell_keypad_pane_ParamLimits

0x8ba9,	// (0x00028818) vkb2_cell_keypad_pane

0xddca,	// (0x0002da39) vkb2_area_bottom_grid_pane_ParamLimits

0xddca,	// (0x0002da39) vkb2_area_bottom_grid_pane

0xddf0,	// (0x0002da5f) vkb2_area_bottom_pane_g1_ParamLimits

0xddf0,	// (0x0002da5f) vkb2_area_bottom_pane_g1

0xde16,	// (0x0002da85) vkb2_area_bottom_pane_g2_ParamLimits

0xde16,	// (0x0002da85) vkb2_area_bottom_pane_g2

0xde47,	// (0x0002dab6) vkb2_area_bottom_pane_g3_ParamLimits

0xde47,	// (0x0002dab6) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0002fa06) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0002fa06) vkb2_area_bottom_pane_g

0x8d21,	// (0x00028990) vkb2_top_cell_left_pane_ParamLimits

0x8d21,	// (0x00028990) vkb2_top_cell_left_pane

0x1d48,	// (0x000219b7) vkb2_top_entry_pane_g1_ParamLimits

0x1d48,	// (0x000219b7) vkb2_top_entry_pane_g1

0x1d56,	// (0x000219c5) vkb2_top_entry_pane_t1_ParamLimits

0x1d56,	// (0x000219c5) vkb2_top_entry_pane_t1

0xa9ea,	// (0x0002a659) vkb2_top_entry_pane_t2_ParamLimits

0xa9ea,	// (0x0002a659) vkb2_top_entry_pane_t2

0xaa1c,	// (0x0002a68b) vkb2_top_entry_pane_t3_ParamLimits

0xaa1c,	// (0x0002a68b) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0002fa0d) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0002fa0d) vkb2_top_entry_pane_t

0xde9d,	// (0x0002db0c) vkb2_top_grid_right_pane_g1_ParamLimits

0xde9d,	// (0x0002db0c) vkb2_top_grid_right_pane_g1

0x8d84,	// (0x000289f3) vkb2_top_grid_right_pane_g2_ParamLimits

0x8d84,	// (0x000289f3) vkb2_top_grid_right_pane_g2

0x8d9c,	// (0x00028a0b) vkb2_top_grid_right_pane_g3_ParamLimits

0x8d9c,	// (0x00028a0b) vkb2_top_grid_right_pane_g3

0xdeb3,	// (0x0002db22) vkb2_top_grid_right_pane_g4_ParamLimits

0xdeb3,	// (0x0002db22) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0002fa14) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0002fa14) vkb2_top_grid_right_pane_g

0x8dca,	// (0x00028a39) vkb2_top_cell_left_pane_g1

0x8de1,	// (0x00028a50) vkb2_cell_keypad_pane_g1_ParamLimits

0x8de1,	// (0x00028a50) vkb2_cell_keypad_pane_g1

0xaa40,	// (0x0002a6af) vkb2_cell_keypad_pane_t1_ParamLimits

0xaa40,	// (0x0002a6af) vkb2_cell_keypad_pane_t1

0x8def,	// (0x00028a5e) vkb2_cell_bottom_grid_pane_ParamLimits

0x8def,	// (0x00028a5e) vkb2_cell_bottom_grid_pane

0x8e28,	// (0x00028a97) vkb2_cell_bottom_grid_pane_g1

0x1748,	// (0x000213b7) aid_call2_pane_cp02

0x1750,	// (0x000213bf) aid_call_pane_cp02

0x1758,	// (0x000213c7) clock_digital_number_pane_cp10

0x1760,	// (0x000213cf) clock_digital_number_pane_cp11

0x1768,	// (0x000213d7) clock_digital_number_pane_cp12

0x1770,	// (0x000213df) clock_digital_number_pane_cp13

0x1778,	// (0x000213e7) clock_digital_separator_pane_cp10

0x3078,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g1

0x3078,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g2

0x1780,	// (0x000213ef) popup_clock_digital_analogue_window_cp2_g3

0x3078,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g4

0x1780,	// (0x000213ef) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0002f9c9) popup_clock_digital_analogue_window_cp2_g

0x1788,	// (0x000213f7) popup_clock_digital_analogue_window_cp2_t1

0x1796,	// (0x00021405) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0002f9d4) popup_clock_digital_analogue_window_cp2_t

0x5696,	// (0x00025305) clock_digital_number_pane_cp10_g1

0x5696,	// (0x00025305) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0002f7b7) clock_digital_number_pane_cp10_g

0x5696,	// (0x00025305) clock_digital_separator_pane_cp10_g1

0x5696,	// (0x00025305) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0002f7b7) clock_digital_separator_pane_cp10_g

0xa81d,	// (0x0002a48c) uniindi_top_pane_g3

0xa82e,	// (0x0002a49d) uniindi_top_pane_g4

0x8c14,	// (0x00028883) vkb2_row_keypad_pane_ParamLimits

0x8c14,	// (0x00028883) vkb2_row_keypad_pane

0x8e44,	// (0x00028ab3) vkb2_cell_t_keypad_pane_ParamLimits

0x8e44,	// (0x00028ab3) vkb2_cell_t_keypad_pane

0x8e51,	// (0x00028ac0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8e51,	// (0x00028ac0) vkb2_cell_t_keypad_pane_cp08

0x8e61,	// (0x00028ad0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e61,	// (0x00028ad0) vkb2_cell_t_keypad_pane_cp09

0x8e72,	// (0x00028ae1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8e72,	// (0x00028ae1) vkb2_cell_t_keypad_pane_cp01

0x8e82,	// (0x00028af1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8e82,	// (0x00028af1) vkb2_cell_t_keypad_pane_cp02

0x8e92,	// (0x00028b01) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8e92,	// (0x00028b01) vkb2_cell_t_keypad_pane_cp03

0x8ea2,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8ea2,	// (0x00028b11) vkb2_cell_t_keypad_pane_cp04

0x8eb2,	// (0x00028b21) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8eb2,	// (0x00028b21) vkb2_cell_t_keypad_pane_cp05

0x8ec2,	// (0x00028b31) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8ec2,	// (0x00028b31) vkb2_cell_t_keypad_pane_cp06

0x8ed2,	// (0x00028b41) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8ed2,	// (0x00028b41) vkb2_cell_t_keypad_pane_cp07

0x8ee2,	// (0x00028b51) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8ee2,	// (0x00028b51) vkb2_cell_t_keypad_pane_cp10

0x8708,	// (0x00028377) vkb2_cell_t_keypad_pane_g1

0xaa57,	// (0x0002a6c6) vkb2_cell_t_keypad_pane_t1

0x6315,	// (0x00025f84) popup_grid_graphic2_window

0x1dbb,	// (0x00021a2a) aid_size_cell_graphic2_ParamLimits

0x1dbb,	// (0x00021a2a) aid_size_cell_graphic2

0x1df9,	// (0x00021a68) bg_popup_window_pane_cp21_ParamLimits

0x1df9,	// (0x00021a68) bg_popup_window_pane_cp21

0x1e07,	// (0x00021a76) graphic2_pages_pane_ParamLimits

0x1e07,	// (0x00021a76) graphic2_pages_pane

0x1e50,	// (0x00021abf) grid_graphic2_control_pane_ParamLimits

0x1e50,	// (0x00021abf) grid_graphic2_control_pane

0x1e8e,	// (0x00021afd) grid_graphic2_pane_ParamLimits

0x1e8e,	// (0x00021afd) grid_graphic2_pane

0x1efd,	// (0x00021b6c) cell_graphic2_pane

0x6315,	// (0x00025f84) main_comp_mode_pane

0xa498,	// (0x0002a107) list_ai3_gene_pane_ParamLimits

0x1447,	// (0x000210b6) bg_popup_window_pane_cp19_ParamLimits

0xa609,	// (0x0002a278) bg_touch_area_indi_pane_ParamLimits

0xa609,	// (0x0002a278) bg_touch_area_indi_pane

0xa61f,	// (0x0002a28e) bg_touch_area_indi_pane_cp01_ParamLimits

0xa61f,	// (0x0002a28e) bg_touch_area_indi_pane_cp01

0xa635,	// (0x0002a2a4) bg_touch_area_indi_pane_cp02_ParamLimits

0xa635,	// (0x0002a2a4) bg_touch_area_indi_pane_cp02

0xa64b,	// (0x0002a2ba) bg_touch_area_indi_pane_cp03_ParamLimits

0xa64b,	// (0x0002a2ba) bg_touch_area_indi_pane_cp03

0xa661,	// (0x0002a2d0) popup_slider_window_g1_ParamLimits

0xa67d,	// (0x0002a2ec) popup_slider_window_g2_ParamLimits

0xa699,	// (0x0002a308) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0002f95e) popup_slider_window_g_ParamLimits

0xa6b5,	// (0x0002a324) popup_slider_window_t1_ParamLimits

0xa6f9,	// (0x0002a368) small_volume_slider_vertical_pane_ParamLimits

0x1efd,	// (0x00021b6c) cell_graphic2_pane_ParamLimits

0x1f46,	// (0x00021bb5) bg_button_pane_cp10_ParamLimits

0x1f46,	// (0x00021bb5) bg_button_pane_cp10

0x1f59,	// (0x00021bc8) bg_button_pane_cp11_ParamLimits

0x1f59,	// (0x00021bc8) bg_button_pane_cp11

0x1f6c,	// (0x00021bdb) graphic2_pages_pane_g1_ParamLimits

0x1f6c,	// (0x00021bdb) graphic2_pages_pane_g1

0x1f87,	// (0x00021bf6) graphic2_pages_pane_g2_ParamLimits

0x1f87,	// (0x00021bf6) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0002fa22) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0002fa22) graphic2_pages_pane_g

0x1f9f,	// (0x00021c0e) graphic2_pages_pane_t1_ParamLimits

0x1f9f,	// (0x00021c0e) graphic2_pages_pane_t1

0x1fb7,	// (0x00021c26) cell_graphic2_control_pane_ParamLimits

0x1fb7,	// (0x00021c26) cell_graphic2_control_pane

0x1fe1,	// (0x00021c50) cell_graphic2_pane_g1_ParamLimits

0x1fe1,	// (0x00021c50) cell_graphic2_pane_g1

0xdec9,	// (0x0002db38) cell_graphic2_pane_g2_ParamLimits

0xdec9,	// (0x0002db38) cell_graphic2_pane_g2

0x1fee,	// (0x00021c5d) cell_graphic2_pane_g3_ParamLimits

0x1fee,	// (0x00021c5d) cell_graphic2_pane_g3

0xded6,	// (0x0002db45) cell_graphic2_pane_g4_ParamLimits

0xded6,	// (0x0002db45) cell_graphic2_pane_g4

0x1ffb,	// (0x00021c6a) cell_graphic2_pane_g5_ParamLimits

0x1ffb,	// (0x00021c6a) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0002fa27) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0002fa27) cell_graphic2_pane_g

0x201b,	// (0x00021c8a) cell_graphic2_pane_t1_ParamLimits

0x201b,	// (0x00021c8a) cell_graphic2_pane_t1

0x44de,	// (0x0002414d) grid_highlight_pane_cp11_ParamLimits

0x44de,	// (0x0002414d) grid_highlight_pane_cp11

0x26cc,	// (0x0002233b) bg_button_pane_cp05

0x2063,	// (0x00021cd2) cell_graphic2_control_pane_g1

0x5696,	// (0x00025305) bg_touch_area_indi_pane_g1

0xaa69,	// (0x0002a6d8) aid_cmod_rocker_key_size

0xaa73,	// (0x0002a6e2) aid_cmode_itu_key_size

0xaa7d,	// (0x0002a6ec) main_cmode_video_pane

0xaa85,	// (0x0002a6f4) main_comp_mode_itu_pane

0xaa8f,	// (0x0002a6fe) main_comp_mode_rocker_pane

0xaa97,	// (0x0002a706) cell_cmode_rocker_pane_ParamLimits

0xaa97,	// (0x0002a706) cell_cmode_rocker_pane

0xaaa9,	// (0x0002a718) cell_cmode_itu_pane_ParamLimits

0xaaa9,	// (0x0002a718) cell_cmode_itu_pane

0x2b44,	// (0x000227b3) bg_button_pane_cp06_ParamLimits

0x2b44,	// (0x000227b3) bg_button_pane_cp06

0x9886,	// (0x000294f5) cell_cmode_rocker_pane_g1_ParamLimits

0x9886,	// (0x000294f5) cell_cmode_rocker_pane_g1

0xa730,	// (0x0002a39f) cell_cmode_rocker_pane_g2_ParamLimits

0xa730,	// (0x0002a39f) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0002fa37) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0002fa37) cell_cmode_rocker_pane_g

0x2519,	// (0x00022188) bg_button_pane_cp07

0xaabe,	// (0x0002a72d) cell_cmode_itu_pane_g1

0xaac7,	// (0x0002a736) cell_cmode_itu_pane_t1

0xaad5,	// (0x0002a744) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0002fa3c) cell_cmode_itu_pane_t

0xa89f,	// (0x0002a50e) aid_touch_ctrl_left

0xa8a7,	// (0x0002a516) aid_touch_ctrl_right

0x2519,	// (0x00022188) compa_mode_pane

0x208b,	// (0x00021cfa) aid_cmod_rocker_key_size_cp

0x2095,	// (0x00021d04) aid_cmode_itu_key_size_cp

0xaae3,	// (0x0002a752) compa_mode_pane_g1

0xaaeb,	// (0x0002a75a) compa_mode_pane_g2

0xaaf3,	// (0x0002a762) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0002fa41) compa_mode_pane_g

0x209f,	// (0x00021d0e) main_comp_mode_itu_pane_cp

0x20a7,	// (0x00021d16) main_comp_mode_rocker_pane_cp

0x20af,	// (0x00021d1e) cell_cmode_itu_pane_cp_ParamLimits

0x20af,	// (0x00021d1e) cell_cmode_itu_pane_cp

0x20c4,	// (0x00021d33) cell_cmode_rocker_pane_cp_ParamLimits

0x20c4,	// (0x00021d33) cell_cmode_rocker_pane_cp

0x2b44,	// (0x000227b3) bg_button_pane_cp06_cp_ParamLimits

0x2b44,	// (0x000227b3) bg_button_pane_cp06_cp

0x9886,	// (0x000294f5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x9886,	// (0x000294f5) cell_cmode_rocker_pane_g1_cp

0x5696,	// (0x00025305) cell_cmode_rocker_pane_g2_cp

0x2519,	// (0x00022188) bg_button_pane_cp07_cp

0x20d6,	// (0x00021d45) cell_cmode_itu_pane_g1_cp

0x20df,	// (0x00021d4e) cell_cmode_itu_pane_t1_cp

0x20df,	// (0x00021d4e) cell_cmode_itu_pane_t2_cp

0x0b69,	// (0x000207d8) settings_code_pane_cp2

0x2599,	// (0x00022208) bg_popup_window_pane_cp3_ParamLimits

0x28a4,	// (0x00022513) heading_pane_cp3_ParamLimits

0x28b0,	// (0x0002251f) listscroll_popup_graphic_pane_ParamLimits

0x84c3,	// (0x00028132) fep_hwr_aid_pane_ParamLimits

0x8922,	// (0x00028591) aid_touch_sctrl_top_ParamLimits

0x893d,	// (0x000285ac) sctrl_sk_top_pane_g1_ParamLimits

0x8708,	// (0x00028377) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0002f977) sctrl_sk_top_pane_g_ParamLimits

0x894a,	// (0x000285b9) sctrl_sk_top_pane_t1_ParamLimits

0x8922,	// (0x00028591) aid_touch_sctrl_bottom_ParamLimits

0x894a,	// (0x000285b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xa7e9,	// (0x0002a458) aid_area_touch_clock

0xdcf9,	// (0x0002d968) aid_vkb2_area_top_pane_cell_ParamLimits

0xdcf9,	// (0x0002d968) aid_vkb2_area_top_pane_cell

0xdda4,	// (0x0002da13) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdda4,	// (0x0002da13) aid_vkb2_area_bottom_pane_cell

0xa9e2,	// (0x0002a651) popup_char_count_window

0xaafb,	// (0x0002a76a) popup_char_count_window_g1

0xab04,	// (0x0002a773) popup_char_count_window_g2

0xab0d,	// (0x0002a77c) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0002fa48) popup_char_count_window_g

0xab16,	// (0x0002a785) popup_char_count_window_t1

0x89f9,	// (0x00028668) popup_fep_char_preview_window_ParamLimits

0x89f9,	// (0x00028668) popup_fep_char_preview_window

0xdd19,	// (0x0002d988) vkb2_top_candi_pane_ParamLimits

0xdd19,	// (0x0002d988) vkb2_top_candi_pane

0x20ed,	// (0x00021d5c) cell_vkb2_top_candi_pane_ParamLimits

0x20ed,	// (0x00021d5c) cell_vkb2_top_candi_pane

0x8ef7,	// (0x00028b66) bg_popup_fep_char_preview_window_ParamLimits

0x8ef7,	// (0x00028b66) bg_popup_fep_char_preview_window

0x8f05,	// (0x00028b74) popup_fep_char_preview_window_t1_ParamLimits

0x8f05,	// (0x00028b74) popup_fep_char_preview_window_t1

0xab24,	// (0x0002a793) bg_popup_fep_char_preview_window_g1

0xab2c,	// (0x0002a79b) bg_popup_fep_char_preview_window_g2

0xab34,	// (0x0002a7a3) bg_popup_fep_char_preview_window_g3

0xab3c,	// (0x0002a7ab) bg_popup_fep_char_preview_window_g4

0xab44,	// (0x0002a7b3) bg_popup_fep_char_preview_window_g5

0x8f3f,	// (0x00028bae) bg_popup_fep_char_preview_window_g6

0xab4c,	// (0x0002a7bb) bg_popup_fep_char_preview_window_g7

0xab54,	// (0x0002a7c3) bg_popup_fep_char_preview_window_g8

0xab5c,	// (0x0002a7cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0002fa4f) bg_popup_fep_char_preview_window_g

0x8708,	// (0x00028377) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8708,	// (0x00028377) cell_vkb2_top_candi_pane_g1

0x8716,	// (0x00028385) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8716,	// (0x00028385) cell_vkb2_top_candi_pane_g2

0x9ab5,	// (0x00029724) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9ab5,	// (0x00029724) cell_vkb2_top_candi_pane_g3

0x8f47,	// (0x00028bb6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8f47,	// (0x00028bb6) cell_vkb2_top_candi_pane_g4

0x9c68,	// (0x000298d7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9c68,	// (0x000298d7) cell_vkb2_top_candi_pane_g5

0x8f68,	// (0x00028bd7) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f68,	// (0x00028bd7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0002fa62) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0002fa62) cell_vkb2_top_candi_pane_g

0x8f76,	// (0x00028be5) cell_vkb2_top_candi_pane_t1

0x7da2,	// (0x00027a11) aid_size_touch_slider_mark_ParamLimits

0x7da2,	// (0x00027a11) aid_size_touch_slider_mark

0x1e3b,	// (0x00021aaa) grid_graphic2_catg_pane_ParamLimits

0x1e3b,	// (0x00021aaa) grid_graphic2_catg_pane

0x1ed2,	// (0x00021b41) popup_grid_graphic2_window_t1_ParamLimits

0x1ed2,	// (0x00021b41) popup_grid_graphic2_window_t1

0x1ee7,	// (0x00021b56) popup_grid_graphic2_window_t2_ParamLimits

0x1ee7,	// (0x00021b56) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0002fa1d) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0002fa1d) popup_grid_graphic2_window_t

0x26cc,	// (0x0002233b) bg_button_pane_cp05_ParamLimits

0x2063,	// (0x00021cd2) cell_graphic2_control_pane_g1_ParamLimits

0xa865,	// (0x0002a4d4) cell_graphic2_catg_pane_ParamLimits

0xa865,	// (0x0002a4d4) cell_graphic2_catg_pane

0x2519,	// (0x00022188) bg_button_pane_cp12

0x2137,	// (0x00021da6) cell_graphic2_catg_pane_g1

0xa7b5,	// (0x0002a424) cell_tb_ext_pane_t1_ParamLimits

0x8d41,	// (0x000289b0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8d41,	// (0x000289b0) vkb2_top_cell_right_narrow_pane

0x8d59,	// (0x000289c8) vkb2_top_cell_right_wide_pane_ParamLimits

0x8d59,	// (0x000289c8) vkb2_top_cell_right_wide_pane

0x84b5,	// (0x00028124) bg_vkb2_func_pane_ParamLimits

0x84b5,	// (0x00028124) bg_vkb2_func_pane

0x8dca,	// (0x00028a39) vkb2_top_cell_left_pane_g1_ParamLimits

0x84b5,	// (0x00028124) bg_vkb2_fuc_pane_cp03_ParamLimits

0x84b5,	// (0x00028124) bg_vkb2_fuc_pane_cp03

0x8e28,	// (0x00028a97) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x397d,	// (0x000235ec) bg_vkb2_func_pane_g1

0x3975,	// (0x000235e4) bg_vkb2_func_pane_g2

0x3985,	// (0x000235f4) bg_vkb2_func_pane_g3

0x398d,	// (0x000235fc) bg_vkb2_func_pane_g4

0x3995,	// (0x00023604) bg_vkb2_func_pane_g5

0x399d,	// (0x0002360c) bg_vkb2_func_pane_g6

0x39ad,	// (0x0002361c) bg_vkb2_func_pane_g7

0x39a5,	// (0x00023614) bg_vkb2_func_pane_g8

0x396d,	// (0x000235dc) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0002fa6f) bg_vkb2_func_pane_g

0x84b5,	// (0x00028124) bg_vkb2_fuc_pane_cp01_ParamLimits

0x84b5,	// (0x00028124) bg_vkb2_fuc_pane_cp01

0x8dca,	// (0x00028a39) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8dca,	// (0x00028a39) vkb2_top_cell_right_wide_pane_g1

0x84b5,	// (0x00028124) bg_vkb2_fuc_pane_cp02_ParamLimits

0x84b5,	// (0x00028124) bg_vkb2_fuc_pane_cp02

0x8e28,	// (0x00028a97) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8e28,	// (0x00028a97) vkb2_top_cell_right_narrow_pane_g1

0x1395,	// (0x00021004) aid_touch_area_decrease_ParamLimits

0x1395,	// (0x00021004) aid_touch_area_decrease

0x13c3,	// (0x00021032) aid_touch_area_increase_ParamLimits

0x13c3,	// (0x00021032) aid_touch_area_increase

0x13eb,	// (0x0002105a) aid_touch_area_mute_ParamLimits

0x13eb,	// (0x0002105a) aid_touch_area_mute

0x1413,	// (0x00021082) aid_touch_area_slider_ParamLimits

0x1413,	// (0x00021082) aid_touch_area_slider

0x1453,	// (0x000210c2) popup_slider_window_g4_ParamLimits

0x1453,	// (0x000210c2) popup_slider_window_g4

0x147b,	// (0x000210ea) popup_slider_window_g5_ParamLimits

0x147b,	// (0x000210ea) popup_slider_window_g5

0x14af,	// (0x0002111e) popup_slider_window_g6_ParamLimits

0x14af,	// (0x0002111e) popup_slider_window_g6

0xa6e1,	// (0x0002a350) popup_slider_window_t2_ParamLimits

0xa6e1,	// (0x0002a350) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0002f96b) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0002f96b) popup_slider_window_t

0x14cb,	// (0x0002113a) slider_pane_ParamLimits

0x14cb,	// (0x0002113a) slider_pane

0xab64,	// (0x0002a7d3) slider_pane_g1_ParamLimits

0xab64,	// (0x0002a7d3) slider_pane_g1

0xab78,	// (0x0002a7e7) slider_pane_g2_ParamLimits

0xab78,	// (0x0002a7e7) slider_pane_g2

0xab8e,	// (0x0002a7fd) slider_pane_g3_ParamLimits

0xab8e,	// (0x0002a7fd) slider_pane_g3

0x0003,

0xfe13,	// (0x0002fa82) slider_pane_g_ParamLimits

0xfe13,	// (0x0002fa82) slider_pane_g

0xd9b1,	// (0x0002d620) popup_tb_float_extension_window_ParamLimits

0xd9b1,	// (0x0002d620) popup_tb_float_extension_window

0xabba,	// (0x0002a829) aid_size_cell_tb_float_ext

0x2519,	// (0x00022188) bg_popup_sub_window_cp28

0xabc5,	// (0x0002a834) grid_tb_float_ext_pane

0xabcd,	// (0x0002a83c) cell_tb_float_ext_pane_ParamLimits

0xabcd,	// (0x0002a83c) cell_tb_float_ext_pane

0xabe5,	// (0x0002a854) cell_tb_float_ext_pane_g1

0xabee,	// (0x0002a85d) grid_highlight_pane_cp12

0xdb22,	// (0x0002d791) cell_last_hwr_side_pane_ParamLimits

0xdb22,	// (0x0002d791) cell_last_hwr_side_pane

0x5696,	// (0x00025305) cell_last_hwr_side_pane_g1

0xabf7,	// (0x0002a866) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0002fa8b) cell_last_hwr_side_pane_g

0xde78,	// (0x0002dae7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xde78,	// (0x0002dae7) vkb2_area_bottom_space_btn_pane

0x8708,	// (0x00028377) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xaa57,	// (0x0002a6c6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f76,	// (0x00028be5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8f94,	// (0x00028c03) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8f94,	// (0x00028c03) vkb2_area_bottom_space_btn_pane_g1

0x8fca,	// (0x00028c39) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8fca,	// (0x00028c39) vkb2_area_bottom_space_btn_pane_g2

0x9000,	// (0x00028c6f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9000,	// (0x00028c6f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0002fa90) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0002fa90) vkb2_area_bottom_space_btn_pane_g

0x8572,	// (0x000281e1) cel_fep_hwr_func_pane_ParamLimits

0x8572,	// (0x000281e1) cel_fep_hwr_func_pane

0xdaf7,	// (0x0002d766) cell_hwr_side_button_pane_ParamLimits

0xdaf7,	// (0x0002d766) cell_hwr_side_button_pane

0xa7e9,	// (0x0002a458) aid_area_touch_clock_ParamLimits

0x26cc,	// (0x0002233b) bg_uniindi_top_pane_ParamLimits

0xa7fb,	// (0x0002a46a) uniindi_top_pane_g1_ParamLimits

0xa811,	// (0x0002a480) uniindi_top_pane_g2_ParamLimits

0xa81d,	// (0x0002a48c) uniindi_top_pane_g3_ParamLimits

0xa82e,	// (0x0002a49d) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0002f9a3) uniindi_top_pane_g_ParamLimits

0xa83b,	// (0x0002a4aa) uniindi_top_pane_t1_ParamLimits

0x26cc,	// (0x0002233b) bg_vkb2_func_pane_cp01_ParamLimits

0x26cc,	// (0x0002233b) bg_vkb2_func_pane_cp01

0xac00,	// (0x0002a86f) cel_fep_hwr_func_pane_g1_ParamLimits

0xac00,	// (0x0002a86f) cel_fep_hwr_func_pane_g1

0x26cc,	// (0x0002233b) bg_vkb2_func_pane_cp02_ParamLimits

0x26cc,	// (0x0002233b) bg_vkb2_func_pane_cp02

0xac00,	// (0x0002a86f) cell_hwr_side_button_pane_g1_ParamLimits

0xac00,	// (0x0002a86f) cell_hwr_side_button_pane_g1

0x3887,	// (0x000234f6) status_pane_g4_ParamLimits

0x3887,	// (0x000234f6) status_pane_g4

0x389f,	// (0x0002350e) status_pane_t1

0x5527,	// (0x00025196) form2_midp_gauge_slider_cont_pane

0x552f,	// (0x0002519e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x0e75,	// (0x00020ae4) form2_midp_gauge_slider_pane_t2_ParamLimits

0x0e87,	// (0x00020af6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0002f76a) form2_midp_gauge_slider_pane_t_ParamLimits

0x5541,	// (0x000251b0) form2_midp_slider_pane_ParamLimits

0x89b9,	// (0x00028628) aid_size_cell_func_vkb2_ParamLimits

0x89b9,	// (0x00028628) aid_size_cell_func_vkb2

0xaba6,	// (0x0002a815) slider_pane_g4_ParamLimits

0xaba6,	// (0x0002a815) slider_pane_g4

0xdee3,	// (0x0002db52) form2_midp_gauge_slider_pane_t2_cp01

0xdef1,	// (0x0002db60) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdef1,	// (0x0002db60) form2_midp_gauge_slider_pane_t3_cp01

0x9071,	// (0x00028ce0) form2_midp_slider_pane_cp01

0x2519,	// (0x00022188) navi_smil_pane

0xac30,	// (0x0002a89f) navi_smil_pane_g1

0xac38,	// (0x0002a8a7) navi_smil_pane_t1

0xac0e,	// (0x0002a87d) form2_midp_slider_pane_g1

0xac17,	// (0x0002a886) form2_midp_slider_pane_g2

0xac1f,	// (0x0002a88e) form2_midp_slider_pane_g3

0xac0e,	// (0x0002a87d) form2_midp_slider_pane_g4

0x216b,	// (0x00021dda) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0002fa99) form2_midp_slider_pane_g

0x9036,	// (0x00028ca5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9036,	// (0x00028ca5) vkb2_area_bottom_space_btn_pane_g4

0x04b3,	// (0x00020122) lc0_navi_pane_ParamLimits

0x04b3,	// (0x00020122) lc0_navi_pane

0x051d,	// (0x0002018c) lc0_stat_indi_pane_ParamLimits

0x051d,	// (0x0002018c) lc0_stat_indi_pane

0x0532,	// (0x000201a1) ls0_title_pane_ParamLimits

0x0532,	// (0x000201a1) ls0_title_pane

0x2b44,	// (0x000227b3) bg_popup_sub_pane_cp14_ParamLimits

0xa7d0,	// (0x0002a43f) list_uniindi_pane_ParamLimits

0xa7dc,	// (0x0002a44b) uniindi_top_pane_ParamLimits

0xa877,	// (0x0002a4e6) list_single_uniindi_pane_g1_ParamLimits

0xa88a,	// (0x0002a4f9) list_single_uniindi_pane_t1_ParamLimits

0xdf0e,	// (0x0002db7d) lc0_stat_clock_pane_ParamLimits

0xdf0e,	// (0x0002db7d) lc0_stat_clock_pane

0x218e,	// (0x00021dfd) lc0_stat_indi_pane_g1_ParamLimits

0x218e,	// (0x00021dfd) lc0_stat_indi_pane_g1

0x2181,	// (0x00021df0) lc0_stat_indi_pane_g2_ParamLimits

0x2181,	// (0x00021df0) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0002faa4) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0002faa4) lc0_stat_indi_pane_g

0xdf1b,	// (0x0002db8a) lc0_uni_indicator_pane_ParamLimits

0xdf1b,	// (0x0002db8a) lc0_uni_indicator_pane

0xac46,	// (0x0002a8b5) ls0_title_pane_g1_ParamLimits

0xac46,	// (0x0002a8b5) ls0_title_pane_g1

0x21a8,	// (0x00021e17) ls0_title_pane_t1_ParamLimits

0x21a8,	// (0x00021e17) ls0_title_pane_t1

0xdf28,	// (0x0002db97) lc0_uni_indicator_pane_g1_ParamLimits

0xdf28,	// (0x0002db97) lc0_uni_indicator_pane_g1

0xac5a,	// (0x0002a8c9) lc0_stat_clock_pane_t1

0x6315,	// (0x00025f84) main_ai5_pane

0xac68,	// (0x0002a8d7) ai5_sk_pane_ParamLimits

0xac68,	// (0x0002a8d7) ai5_sk_pane

0x21eb,	// (0x00021e5a) cell_ai5_widget_pane_ParamLimits

0x21eb,	// (0x00021e5a) cell_ai5_widget_pane

0xac75,	// (0x0002a8e4) aid_size_cell_widget_grid

0xac83,	// (0x0002a8f2) bg_ai5_widget_pane_ParamLimits

0xac83,	// (0x0002a8f2) bg_ai5_widget_pane

0xacd7,	// (0x0002a946) cell_ai5_widget_pane_g2

0xace7,	// (0x0002a956) cell_ai5_widget_pane_g3

0xacfe,	// (0x0002a96d) cell_ai5_widget_pane_g4

0xad0a,	// (0x0002a979) cell_ai5_widget_pane_g5

0xad16,	// (0x0002a985) cell_ai5_widget_pane_g6

0xad22,	// (0x0002a991) cell_ai5_widget_pane_g7

0xad6a,	// (0x0002a9d9) cell_ai5_widget_pane_t1_ParamLimits

0xad6a,	// (0x0002a9d9) cell_ai5_widget_pane_t1

0xad87,	// (0x0002a9f6) cell_ai5_widget_pane_t2_ParamLimits

0xad87,	// (0x0002a9f6) cell_ai5_widget_pane_t2

0xad9f,	// (0x0002aa0e) cell_ai5_widget_pane_t3_ParamLimits

0xad9f,	// (0x0002aa0e) cell_ai5_widget_pane_t3

0xadb7,	// (0x0002aa26) cell_ai5_widget_pane_t4_ParamLimits

0xadb7,	// (0x0002aa26) cell_ai5_widget_pane_t4

0xadd4,	// (0x0002aa43) cell_ai5_widget_pane_t5_ParamLimits

0xadd4,	// (0x0002aa43) cell_ai5_widget_pane_t5

0xadf3,	// (0x0002aa62) cell_ai5_widget_pane_t6_ParamLimits

0xadf3,	// (0x0002aa62) cell_ai5_widget_pane_t6

0xae05,	// (0x0002aa74) cell_ai5_widget_pane_t7_ParamLimits

0xae05,	// (0x0002aa74) cell_ai5_widget_pane_t7

0xae1e,	// (0x0002aa8d) cell_ai5_widget_pane_t8_ParamLimits

0xae1e,	// (0x0002aa8d) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0002fabe) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0002fabe) cell_ai5_widget_pane_t

0xae72,	// (0x0002aae1) grid_ai5_widget_pane

0x2b44,	// (0x000227b3) highlight_cell_ai5_widget_pane_ParamLimits

0x2b44,	// (0x000227b3) highlight_cell_ai5_widget_pane

0x2249,	// (0x00021eb8) ai5_sk_left_pane

0x2253,	// (0x00021ec2) ai5_sk_middle_pane

0x225d,	// (0x00021ecc) ai5_sk_right_pane

0xae7e,	// (0x0002aaed) bg_ai5_widget_pane_g1_ParamLimits

0xae7e,	// (0x0002aaed) bg_ai5_widget_pane_g1

0xae8a,	// (0x0002aaf9) bg_ai5_widget_pane_g2_ParamLimits

0xae8a,	// (0x0002aaf9) bg_ai5_widget_pane_g2

0xae96,	// (0x0002ab05) bg_ai5_widget_pane_g3_ParamLimits

0xae96,	// (0x0002ab05) bg_ai5_widget_pane_g3

0xaea2,	// (0x0002ab11) bg_ai5_widget_pane_g4_ParamLimits

0xaea2,	// (0x0002ab11) bg_ai5_widget_pane_g4

0xaeae,	// (0x0002ab1d) bg_ai5_widget_pane_g5_ParamLimits

0xaeae,	// (0x0002ab1d) bg_ai5_widget_pane_g5

0xaeba,	// (0x0002ab29) bg_ai5_widget_pane_g6_ParamLimits

0xaeba,	// (0x0002ab29) bg_ai5_widget_pane_g6

0xaec6,	// (0x0002ab35) bg_ai5_widget_pane_g7_ParamLimits

0xaec6,	// (0x0002ab35) bg_ai5_widget_pane_g7

0xaed2,	// (0x0002ab41) bg_ai5_widget_pane_g8_ParamLimits

0xaed2,	// (0x0002ab41) bg_ai5_widget_pane_g8

0xaede,	// (0x0002ab4d) bg_ai5_widget_pane_g9_ParamLimits

0xaede,	// (0x0002ab4d) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0002fad3) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0002fad3) bg_ai5_widget_pane_g

0xaf10,	// (0x0002ab7f) cell_shortcut_ai5_widget_pane_ParamLimits

0xaf10,	// (0x0002ab7f) cell_shortcut_ai5_widget_pane

0x35c2,	// (0x00023231) bg_cell_shortcut_ai5_widget_pane

0xaf21,	// (0x0002ab90) cell_grid_ai5_widget_pane_g1

0x35c2,	// (0x00023231) highlight_cell_shortcut_ai5_widget_pane

0x397d,	// (0x000235ec) ai5_sk_left_pane_g1

0xaf2a,	// (0x0002ab99) ai5_sk_left_pane_g2

0xaf32,	// (0x0002aba1) ai5_sk_left_pane_g3

0xaf3a,	// (0x0002aba9) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0002fae6) ai5_sk_left_pane_g

0xaf42,	// (0x0002abb1) ai5_sk_left_pane_t1

0x3975,	// (0x000235e4) ai5_sk_right_pane_g1

0xaf50,	// (0x0002abbf) ai5_sk_right_pane_g2

0xaf58,	// (0x0002abc7) ai5_sk_right_pane_g3

0xaf60,	// (0x0002abcf) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0002faef) ai5_sk_right_pane_g

0xaf68,	// (0x0002abd7) ai5_sk_right_pane_t1

0x3975,	// (0x000235e4) ai5_sk_middle_pane_g1

0x397d,	// (0x000235ec) ai5_sk_middle_pane_g2

0x3995,	// (0x00023604) ai5_sk_middle_pane_g3

0xaf58,	// (0x0002abc7) ai5_sk_middle_pane_g4

0xaf32,	// (0x0002aba1) ai5_sk_middle_pane_g5

0xaf76,	// (0x0002abe5) ai5_sk_middle_pane_g6

0x2267,	// (0x00021ed6) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0002faf8) ai5_sk_middle_pane_g

0x03a5,	// (0x00020014) aid_touch_area_size_lc0_ParamLimits

0x03a5,	// (0x00020014) aid_touch_area_size_lc0

0x8737,	// (0x000283a6) cell_hwr_candidate_pane_t1_ParamLimits

0x378b,	// (0x000233fa) aid_touch_navi_pane

0x061f,	// (0x0002028e) status_dt_navi_pane_ParamLimits

0x061f,	// (0x0002028e) status_dt_navi_pane

0x0637,	// (0x000202a6) status_dt_sta_pane_ParamLimits

0x0637,	// (0x000202a6) status_dt_sta_pane

0x226f,	// (0x00021ede) dt_sta_controll_pane

0x227c,	// (0x00021eeb) dt_sta_indi_pane

0x2289,	// (0x00021ef8) dt_sta_title_pane

0x26cc,	// (0x0002233b) bg_dt_sta_indi_pane_ParamLimits

0x26cc,	// (0x0002233b) bg_dt_sta_indi_pane

0xaf7e,	// (0x0002abed) dt_sta_battery_pane

0xaf86,	// (0x0002abf5) dt_sta_indi_pane_g1

0xaf8f,	// (0x0002abfe) dt_sta_indi_pane_g2

0xaf98,	// (0x0002ac07) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0002fb07) dt_sta_indi_pane_g

0xafa1,	// (0x0002ac10) dt_sta_signal_pane

0x2b44,	// (0x000227b3) bg_dt_sta_title_pane_ParamLimits

0x2b44,	// (0x000227b3) bg_dt_sta_title_pane

0xafaa,	// (0x0002ac19) dt_sta_title_pane_g1

0xafb2,	// (0x0002ac21) dt_sta_title_pane_t1_ParamLimits

0xafb2,	// (0x0002ac21) dt_sta_title_pane_t1

0x2519,	// (0x00022188) bg_dt_sta_control_pane

0xafc7,	// (0x0002ac36) dt_sta_controll_pane_g1

0xafd0,	// (0x0002ac3f) bg_dt_sta_title_pane_g1

0xafd9,	// (0x0002ac48) bg_dt_sta_title_pane_g2

0xafe2,	// (0x0002ac51) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0002fb0e) bg_dt_sta_title_pane_g

0x5696,	// (0x00025305) bg_dt_sta_indi_pane_g1

0xafeb,	// (0x0002ac5a) dt_sta_signal_pane_g1

0xaff3,	// (0x0002ac62) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0002fb15) dt_sta_signal_pane_g

0xaffb,	// (0x0002ac6a) dt_sta_battery_pane_g1

0xb004,	// (0x0002ac73) dt_sta_battery_pane_t1

0x5696,	// (0x00025305) bg_dt_sta_control_pane_g1

0x30fb,	// (0x00022d6a) fep_china_uni_eep_pane

0x3103,	// (0x00022d72) fep_china_uni_entry_pane_ParamLimits

0x3113,	// (0x00022d82) popup_fep_china_uni_window_g1_ParamLimits

0x3123,	// (0x00022d92) popup_fep_china_uni_window_g2_ParamLimits

0x3123,	// (0x00022d92) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002f38c) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002f38c) popup_fep_china_uni_window_g

0xb013,	// (0x0002ac82) fep_china_uni_eep_pane_g1

0xb01b,	// (0x0002ac8a) fep_china_uni_eep_pane_t1

0xac27,	// (0x0002a896) aid_touch_area_size_smil_player

0x383a,	// (0x000234a9) lc0_clock_pane

0x3893,	// (0x00023502) status_pane_g5_ParamLimits

0x3893,	// (0x00023502) status_pane_g5

0xd5e9,	// (0x0002d258) popup_keymap_window

0x3873,	// (0x000234e2) status_icon_pane

0xace7,	// (0x0002a956) cell_ai5_widget_pane_g3_ParamLimits

0xacfe,	// (0x0002a96d) cell_ai5_widget_pane_g4_ParamLimits

0xad0a,	// (0x0002a979) cell_ai5_widget_pane_g5_ParamLimits

0xad2e,	// (0x0002a99d) cell_ai5_widget_pane_g8_ParamLimits

0xad2e,	// (0x0002a99d) cell_ai5_widget_pane_g8

0xad42,	// (0x0002a9b1) cell_ai5_widget_pane_g9_ParamLimits

0xad42,	// (0x0002a9b1) cell_ai5_widget_pane_g9

0xad56,	// (0x0002a9c5) cell_ai5_widget_pane_g10_ParamLimits

0xad56,	// (0x0002a9c5) cell_ai5_widget_pane_g10

0xb02a,	// (0x0002ac99) status_icon_pane_g1

0x2519,	// (0x00022188) bg_popup_sub_pane_cp13

0xb032,	// (0x0002aca1) popup_keymap_window_t1

0xf51f,	// (0x0002f18e) control_pane_g6_ParamLimits

0xf51f,	// (0x0002f18e) control_pane_g6

0xf52c,	// (0x0002f19b) control_pane_g7_ParamLimits

0xf52c,	// (0x0002f19b) control_pane_g7

0xf539,	// (0x0002f1a8) control_pane_g8_ParamLimits

0xf539,	// (0x0002f1a8) control_pane_g8

0x226f,	// (0x00021ede) dt_sta_controll_pane_ParamLimits

0x227c,	// (0x00021eeb) dt_sta_indi_pane_ParamLimits

0x2289,	// (0x00021ef8) dt_sta_title_pane_ParamLimits

0x2a8f,	// (0x000226fe) aid_size_touch_scroll_bar_cale

0x63ee,	// (0x0002605d) popup_discreet_window_ParamLimits

0x63ee,	// (0x0002605d) popup_discreet_window

0xd1f0,	// (0x0002ce5f) popup_sk_window

0x3ece,	// (0x00023b3d) bg_popup_sub_pane_cp28_ParamLimits

0x3ece,	// (0x00023b3d) bg_popup_sub_pane_cp28

0xb040,	// (0x0002acaf) popup_discreet_window_g1_ParamLimits

0xb040,	// (0x0002acaf) popup_discreet_window_g1

0xb060,	// (0x0002accf) popup_discreet_window_t1_ParamLimits

0xb060,	// (0x0002accf) popup_discreet_window_t1

0xb07e,	// (0x0002aced) popup_discreet_window_t2_ParamLimits

0xb07e,	// (0x0002aced) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0002fb1a) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0002fb1a) popup_discreet_window_t

0x90a6,	// (0x00028d15) popup_sk_window_g1

0x90b0,	// (0x00028d1f) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0002fb21) popup_sk_window_g

0x90b8,	// (0x00028d27) popup_sk_window_t1

0x90c6,	// (0x00028d35) popup_sk_window_t1_copy1

0xacd7,	// (0x0002a946) cell_ai5_widget_pane_g2_ParamLimits

0xae30,	// (0x0002aa9f) cell_ai5_widget_pane_t9_ParamLimits

0xae30,	// (0x0002aa9f) cell_ai5_widget_pane_t9

0x2519,	// (0x00022188) main_fep_fshwr2_pane

0xdf3d,	// (0x0002dbac) aid_fshwr2_btn_pane

0xdf4e,	// (0x0002dbbd) aid_fshwr2_syb_pane

0xdf5f,	// (0x0002dbce) aid_fshwr2_txt_pane

0xdf6b,	// (0x0002dbda) fshwr2_func_candi_pane

0xdf85,	// (0x0002dbf4) fshwr2_hwr_syb_pane

0xdf9a,	// (0x0002dc09) fshwr2_icf_pane

0x6315,	// (0x00025f84) fshwr2_icf_bg_pane

0xdfc0,	// (0x0002dc2f) fshwr2_icf_pane_t1_ParamLimits

0xdfc0,	// (0x0002dc2f) fshwr2_icf_pane_t1

0x3078,	// (0x00022ce7) fshwr2_func_candi_pane_g1

0x2335,	// (0x00021fa4) fshwr2_func_candi_row_pane_ParamLimits

0x2335,	// (0x00021fa4) fshwr2_func_candi_row_pane

0xdfd7,	// (0x0002dc46) cell_fshwr2_syb_pane_ParamLimits

0xdfd7,	// (0x0002dc46) cell_fshwr2_syb_pane

0x8708,	// (0x00028377) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8708,	// (0x00028377) fshwr2_hwr_syb_pane_g1

0x6315,	// (0x00025f84) bg_popup_call_pane_cp01

0xdfeb,	// (0x0002dc5a) fshwr2_func_candi_cell_pane_ParamLimits

0xdfeb,	// (0x0002dc5a) fshwr2_func_candi_cell_pane

0x23ab,	// (0x0002201a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x23ab,	// (0x0002201a) fshwr2_func_candi_cell_bg_pane

0xe02a,	// (0x0002dc99) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe02a,	// (0x0002dc99) fshwr2_func_candi_cell_pane_g1

0xe061,	// (0x0002dcd0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe061,	// (0x0002dcd0) fshwr2_func_candi_cell_pane_t1

0x6315,	// (0x00025f84) bg_button_pane_cp08

0x35c2,	// (0x00023231) cell_fshwr2_syb_bg_pane

0xe07c,	// (0x0002dceb) cell_fshwr2_syb_bg_pane_g1

0xe084,	// (0x0002dcf3) cell_fshwr2_syb_bg_pane_t1

0x2b44,	// (0x000227b3) main_tmo_pane

0x0945,	// (0x000205b4) uni_indicator_pane_g1_ParamLimits

0x095b,	// (0x000205ca) uni_indicator_pane_g2_ParamLimits

0x0971,	// (0x000205e0) uni_indicator_pane_g3_ParamLimits

0x4921,	// (0x00024590) uni_indicator_pane_g4_ParamLimits

0x4921,	// (0x00024590) uni_indicator_pane_g4

0x4935,	// (0x000245a4) uni_indicator_pane_g5_ParamLimits

0x4935,	// (0x000245a4) uni_indicator_pane_g5

0x4935,	// (0x000245a4) uni_indicator_pane_g6_ParamLimits

0x4935,	// (0x000245a4) uni_indicator_pane_g6

0xf91c,	// (0x0002f58b) uni_indicator_pane_g_ParamLimits

0x1379,	// (0x00020fe8) popup_tmo_note_window_ParamLimits

0x1379,	// (0x00020fe8) popup_tmo_note_window

0x899b,	// (0x0002860a) fshwr2_bg_pane

0xe052,	// (0x0002dcc1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe052,	// (0x0002dcc1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0002fb26) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0002fb26) fshwr2_func_candi_cell_pane_g

0x86f0,	// (0x0002835f) bg_popup_window_pane_cp01

0x91ef,	// (0x00028e5e) bg_popup_window_pane_g1_cp01

0xe093,	// (0x0002dd02) bg_popup_window_pane_cp22_ParamLimits

0xe093,	// (0x0002dd02) bg_popup_window_pane_cp22

0xe0a1,	// (0x0002dd10) listscroll_tmo_link_pane_ParamLimits

0xe0a1,	// (0x0002dd10) listscroll_tmo_link_pane

0xe0e1,	// (0x0002dd50) popup_tmo_note_window_g1_ParamLimits

0xe0e1,	// (0x0002dd50) popup_tmo_note_window_g1

0xe0ee,	// (0x0002dd5d) tmo_note_info_pane_ParamLimits

0xe0ee,	// (0x0002dd5d) tmo_note_info_pane

0x2420,	// (0x0002208f) list_tmo_note_info_pane_g1_ParamLimits

0x2420,	// (0x0002208f) list_tmo_note_info_pane_g1

0xe108,	// (0x0002dd77) list_tmo_note_info_pane_g2_ParamLimits

0xe108,	// (0x0002dd77) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0002fb2b) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0002fb2b) list_tmo_note_info_pane_g

0xe124,	// (0x0002dd93) list_tmo_note_info_text_pane_ParamLimits

0xe124,	// (0x0002dd93) list_tmo_note_info_text_pane

0xe166,	// (0x0002ddd5) list_tmo_link_pane

0xe173,	// (0x0002dde2) scroll_pane_cp20

0xe180,	// (0x0002ddef) list_single_tmo_link_pane_ParamLimits

0xe180,	// (0x0002ddef) list_single_tmo_link_pane

0xe190,	// (0x0002ddff) list_single_tmo_link_pane_t1

0xe19e,	// (0x0002de0d) list_tmo_note_info_text_pane_t1_ParamLimits

0xe19e,	// (0x0002de0d) list_tmo_note_info_text_pane_t1

0xf20e,	// (0x0002ee7d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xf20e,	// (0x0002ee7d) aid_size_touch_scroll_bar_cp01

0xeb5f,	// (0x0002e7ce) aid_size_touch_slider_marker

0xd1e4,	// (0x0002ce53) popup_settings_window_ParamLimits

0xd1e4,	// (0x0002ce53) popup_settings_window

0xb4f9,	// (0x0002b168) popup_candi_list_indi_window

0x378b,	// (0x000233fa) aid_touch_navi_pane_ParamLimits

0x88f6,	// (0x00028565) rs_clock_indi_pane

0x88ff,	// (0x0002856e) sctrl_sk_bottom_pane_ParamLimits

0x8910,	// (0x0002857f) sctrl_sk_top_pane_ParamLimits

0x8a13,	// (0x00028682) popup_fep_tooltip_window

0xac75,	// (0x0002a8e4) aid_size_cell_widget_grid_ParamLimits

0xacc2,	// (0x0002a931) cell_ai5_widget_pane_g1_ParamLimits

0xacc2,	// (0x0002a931) cell_ai5_widget_pane_g1

0xad16,	// (0x0002a985) cell_ai5_widget_pane_g6_ParamLimits

0xad22,	// (0x0002a991) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0002faa9) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0002faa9) cell_ai5_widget_pane_g

0xae54,	// (0x0002aac3) cell_ai5_widget_pane_t10_ParamLimits

0xae54,	// (0x0002aac3) cell_ai5_widget_pane_t10

0xae72,	// (0x0002aae1) grid_ai5_widget_pane_ParamLimits

0xaeea,	// (0x0002ab59) cell_contacts_ai5_widget_pane_ParamLimits

0xaeea,	// (0x0002ab59) cell_contacts_ai5_widget_pane

0xb093,	// (0x0002ad02) popup_discreet_window_t3_ParamLimits

0xb093,	// (0x0002ad02) popup_discreet_window_t3

0xdfae,	// (0x0002dc1d) popup_fshwr2_char_preview_window_ParamLimits

0xdfae,	// (0x0002dc1d) popup_fshwr2_char_preview_window

0x2437,	// (0x000220a6) tmo_note_info_pane_t1

0x244c,	// (0x000220bb) tmo_note_info_pane_t2

0x2461,	// (0x000220d0) tmo_note_info_pane_t3

0xe142,	// (0x0002ddb1) tmo_note_info_pane_t4

0xe154,	// (0x0002ddc3) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0002fb30) tmo_note_info_pane_t

0xe166,	// (0x0002ddd5) list_tmo_link_pane_ParamLimits

0xe173,	// (0x0002dde2) scroll_pane_cp20_ParamLimits

0x6315,	// (0x00025f84) bg_popup_fep_char_preview_window_cp01

0xe1b7,	// (0x0002de26) popup_fshwr2_char_preview_window_t1

0xe1c5,	// (0x0002de34) popup_candi_list_indi_window_g1

0xe1ce,	// (0x0002de3d) bg_cell_contacts_ai5_widget_pane

0xe1da,	// (0x0002de49) cell_contacts_ai5_widget_pane_g1

0xe1ef,	// (0x0002de5e) cell_contacts_ai5_widget_pane_g2

0xe1fb,	// (0x0002de6a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0002fb3b) cell_contacts_ai5_widget_pane_g

0xe207,	// (0x0002de76) cell_contacts_ai5_widget_pane_t1

0x2b44,	// (0x000227b3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe27c,	// (0x0002deeb) settings_container_pane

0x35c2,	// (0x00023231) listscroll_set_pane_copy1

0x50c8,	// (0x00024d37) scroll_pane_cp121_copy1

0x3c9c,	// (0x0002390b) set_content_pane_copy1

0xe288,	// (0x0002def7) aid_height_set_list_copy1_ParamLimits

0xe288,	// (0x0002def7) aid_height_set_list_copy1

0x47cf,	// (0x0002443e) aid_size_parent_copy1_ParamLimits

0x47cf,	// (0x0002443e) aid_size_parent_copy1

0xe294,	// (0x0002df03) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe294,	// (0x0002df03) button_value_adjust_pane_cp6_copy1

0x2cad,	// (0x0002291c) list_highlight_pane_cp2_copy1_ParamLimits

0x2cad,	// (0x0002291c) list_highlight_pane_cp2_copy1

0xe2a8,	// (0x0002df17) list_set_pane_copy1_ParamLimits

0xe2a8,	// (0x0002df17) list_set_pane_copy1

0xe219,	// (0x0002de88) main_pane_set_t1_copy1_ParamLimits

0xe219,	// (0x0002de88) main_pane_set_t1_copy1

0xe253,	// (0x0002dec2) main_pane_set_t2_copy1_ParamLimits

0xe253,	// (0x0002dec2) main_pane_set_t2_copy1

0xe57a,	// (0x0002e1e9) main_pane_set_t3_copy1

0xe588,	// (0x0002e1f7) main_pane_set_t4_copy1

0xe270,	// (0x0002dedf) set_content_pane_g1_copy1_ParamLimits

0xe270,	// (0x0002dedf) set_content_pane_g1_copy1

0xe596,	// (0x0002e205) setting_code_pane_copy1

0xe59e,	// (0x0002e20d) setting_slider_graphic_pane_copy1

0xe59e,	// (0x0002e20d) setting_slider_pane_copy1

0xe59e,	// (0x0002e20d) setting_text_pane_copy1

0xe59e,	// (0x0002e20d) setting_volume_pane_copy1

0xe596,	// (0x0002e205) settings_code_pane_cp2_copy1

0xe5a6,	// (0x0002e215) settings_code_pane_cp_copy1_ParamLimits

0xe5a6,	// (0x0002e215) settings_code_pane_cp_copy1

0x91f8,	// (0x00028e67) volume_set_pane_copy1

0xe5ba,	// (0x0002e229) volume_set_pane_g10_copy1

0xe5c2,	// (0x0002e231) volume_set_pane_g1_copy1

0xe5ca,	// (0x0002e239) volume_set_pane_g2_copy1

0xe5d2,	// (0x0002e241) volume_set_pane_g3_copy1

0xe5da,	// (0x0002e249) volume_set_pane_g4_copy1

0xe5e2,	// (0x0002e251) volume_set_pane_g5_copy1

0xe5ea,	// (0x0002e259) volume_set_pane_g6_copy1

0xe5f2,	// (0x0002e261) volume_set_pane_g7_copy1

0xe5fa,	// (0x0002e269) volume_set_pane_g8_copy1

0xe602,	// (0x0002e271) volume_set_pane_g9_copy1

0x2599,	// (0x00022208) bg_set_opt_pane_cp_copy1_ParamLimits

0x2599,	// (0x00022208) bg_set_opt_pane_cp_copy1

0x9200,	// (0x00028e6f) setting_slider_pane_t1_copy1_ParamLimits

0x9200,	// (0x00028e6f) setting_slider_pane_t1_copy1

0x921e,	// (0x00028e8d) setting_slider_pane_t2_copy1_ParamLimits

0x921e,	// (0x00028e8d) setting_slider_pane_t2_copy1

0x9237,	// (0x00028ea6) setting_slider_pane_t3_copy1_ParamLimits

0x9237,	// (0x00028ea6) setting_slider_pane_t3_copy1

0x924e,	// (0x00028ebd) slider_set_pane_copy1_ParamLimits

0x924e,	// (0x00028ebd) slider_set_pane_copy1

0x2b9c,	// (0x0002280b) set_opt_bg_pane_g1_copy2

0x2ba4,	// (0x00022813) set_opt_bg_pane_g2_copy2

0xe60a,	// (0x0002e279) set_opt_bg_pane_g3_copy2

0x2bb4,	// (0x00022823) set_opt_bg_pane_g4_copy2

0x2bbc,	// (0x0002282b) set_opt_bg_pane_g5_copy2

0x2bc4,	// (0x00022833) set_opt_bg_pane_g6_copy2

0xe612,	// (0x0002e281) set_opt_bg_pane_g7_copy2

0xe61a,	// (0x0002e289) set_opt_bg_pane_g8_copy2

0xe622,	// (0x0002e291) set_opt_bg_pane_g9_copy2

0x9264,	// (0x00028ed3) aid_size_touch_slider_mark_copy1_ParamLimits

0x9264,	// (0x00028ed3) aid_size_touch_slider_mark_copy1

0xe62a,	// (0x0002e299) slider_set_pane_g1_copy1

0x9278,	// (0x00028ee7) slider_set_pane_g2_copy1

0x7dc2,	// (0x00027a31) slider_set_pane_g3_copy1_ParamLimits

0x7dc2,	// (0x00027a31) slider_set_pane_g3_copy1

0x7dd6,	// (0x00027a45) slider_set_pane_g4_copy1_ParamLimits

0x7dd6,	// (0x00027a45) slider_set_pane_g4_copy1

0x7dee,	// (0x00027a5d) slider_set_pane_g5_copy1_ParamLimits

0x7dee,	// (0x00027a5d) slider_set_pane_g5_copy1

0x7dc2,	// (0x00027a31) slider_set_pane_g6_copy1_ParamLimits

0x7dc2,	// (0x00027a31) slider_set_pane_g6_copy1

0x9280,	// (0x00028eef) slider_set_pane_g7_copy1_ParamLimits

0x9280,	// (0x00028eef) slider_set_pane_g7_copy1

0x252d,	// (0x0002219c) bg_set_opt_pane_cp2_copy1

0xe633,	// (0x0002e2a2) setting_slider_graphic_pane_g1_copy1

0xe63c,	// (0x0002e2ab) setting_slider_graphic_pane_t1_copy1

0xe64b,	// (0x0002e2ba) setting_slider_graphic_pane_t2_copy1

0xe65a,	// (0x0002e2c9) slider_set_pane_cp_copy1

0xe66a,	// (0x0002e2d9) input_focus_pane_cp1_copy1

0xe673,	// (0x0002e2e2) list_set_text_pane_copy1

0xe67b,	// (0x0002e2ea) setting_text_pane_g1_copy1

0xbcfb,	// (0x0002b96a) set_text_pane_t1_copy1

0xe66a,	// (0x0002e2d9) input_focus_pane_cp2_copy1

0xe67b,	// (0x0002e2ea) setting_code_pane_g1_copy1

0xe684,	// (0x0002e2f3) setting_code_pane_t1_copy1

0x3850,	// (0x000234bf) list_set_graphic_pane_copy1

0x252d,	// (0x0002219c) bg_set_opt_pane_cp4_copy1

0x32d6,	// (0x00022f45) list_set_graphic_pane_g1_copy1_ParamLimits

0x32d6,	// (0x00022f45) list_set_graphic_pane_g1_copy1

0xe692,	// (0x0002e301) list_set_graphic_pane_g2_copy1

0x32ee,	// (0x00022f5d) list_set_graphic_pane_t1_copy1_ParamLimits

0x32ee,	// (0x00022f5d) list_set_graphic_pane_t1_copy1

0x5696,	// (0x00025305) rs_clock_indi_pane_g1

0xe69a,	// (0x0002e309) rs_clock_indi_pane_t1

0xe6a8,	// (0x0002e317) rs_indi_pane

0xe6b0,	// (0x0002e31f) rs_indi_pane_g1

0xe6b9,	// (0x0002e328) rs_indi_pane_g2

0xe6c2,	// (0x0002e331) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x0002fb42) rs_indi_pane_g

0x35c2,	// (0x00023231) bg_popup_preview_window_pane_cp03

0xe6cb,	// (0x0002e33a) popup_fep_tooltip_window_t1

0x9fe3,	// (0x00029c52) popup_note2_window_g2_ParamLimits

0x9fe3,	// (0x00029c52) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0002f8e2) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0002f8e2) popup_note2_window_g

0xa45e,	// (0x0002a0cd) bg_popup_sub_pane_cp11_ParamLimits

0xa46b,	// (0x0002a0da) cell_ai3_links_pane_g1_ParamLimits

0xa482,	// (0x0002a0f1) cell_ai3_links_pane_t1

0xbcfb,	// (0x0002b96a) set_text_pane_t1_copy1_ParamLimits

0x34d5,	// (0x00023144) cell_graphic_popup_pane_cp2_ParamLimits

0x34d5,	// (0x00023144) cell_graphic_popup_pane_cp2

0xe6d9,	// (0x0002e348) cell_graphic_popup_pane_g1_cp2

0x293e,	// (0x000225ad) cell_graphic_popup_pane_g2_cp2

0xe6e1,	// (0x0002e350) cell_graphic_popup_pane_g3_cp2

0xe6e9,	// (0x0002e358) cell_graphic_popup_pane_t2_cp2

0x294f,	// (0x000225be) grid_highlight_pane_cp3_cp2

0x2e57,	// (0x00022ac6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2b44,	// (0x000227b3) main_tmo_pane_ParamLimits

0x1371,	// (0x00020fe0) popup_tmo_big_image_note_window

0xacb1,	// (0x0002a920) cell_ai5_widget_list_pane

0xacb9,	// (0x0002a928) cell_ai5_widget_lrg_icon_pane

0x2437,	// (0x000220a6) tmo_note_info_pane_t1_ParamLimits

0x244c,	// (0x000220bb) tmo_note_info_pane_t2_ParamLimits

0x2461,	// (0x000220d0) tmo_note_info_pane_t3_ParamLimits

0xe142,	// (0x0002ddb1) tmo_note_info_pane_t4_ParamLimits

0xe154,	// (0x0002ddc3) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0002fb30) tmo_note_info_pane_t_ParamLimits

0xe27c,	// (0x0002deeb) settings_container_pane_ParamLimits

0xe662,	// (0x0002e2d1) indicator_popup_pane_cp5

0xe662,	// (0x0002e2d1) indicator_popup_pane_cp6

0x3850,	// (0x000234bf) list_set_graphic_pane_copy1_ParamLimits

0x2519,	// (0x00022188) bg_popup_window_pane_cp23

0xe6f7,	// (0x0002e366) popup_tmo_big_image_note_window_g1

0xe700,	// (0x0002e36f) popup_tmo_big_image_note_window_t1

0xe70e,	// (0x0002e37d) popup_tmo_big_image_note_window_t2

0xe71c,	// (0x0002e38b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x0002fb49) popup_tmo_big_image_note_window_t

0x5696,	// (0x00025305) cell_ai5_widget_lrg_icon_pane_g1

0xe72a,	// (0x0002e399) cell_ai5_widget_lrg_icon_pane_t1

0xe738,	// (0x0002e3a7) cell_ai5_widget_list_row_pane_ParamLimits

0xe738,	// (0x0002e3a7) cell_ai5_widget_list_row_pane

0xe74f,	// (0x0002e3be) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe74f,	// (0x0002e3be) cell_ai5_widget_list_row_pane_g1

0xe75c,	// (0x0002e3cb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe75c,	// (0x0002e3cb) cell_ai5_widget_list_row_pane_t1

0xe78a,	// (0x0002e3f9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe78a,	// (0x0002e3f9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x0002fb50) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x0002fb50) cell_ai5_widget_list_row_pane_t

0x6315,	// (0x00025f84) main_fep_vtchi_ss_pane

0xe7ce,	// (0x0002e43d) popup_fep_char_pre_window

0xe7d6,	// (0x0002e445) popup_fep_ituss_window

0x2476,	// (0x000220e5) popup_fep_vkbss_window

0x2483,	// (0x000220f2) grid_vkbss_keypad_pane_ParamLimits

0x2483,	// (0x000220f2) grid_vkbss_keypad_pane

0xe809,	// (0x0002e478) ituss_keypad_pane

0x92a0,	// (0x00028f0f) aid_vkbss_key_offset_ParamLimits

0x92a0,	// (0x00028f0f) aid_vkbss_key_offset

0xe337,	// (0x0002dfa6) cell_vkbss_key_pane_ParamLimits

0xe337,	// (0x0002dfa6) cell_vkbss_key_pane

0x47b2,	// (0x00024421) bg_cell_vkbss_key_g1_ParamLimits

0x47b2,	// (0x00024421) bg_cell_vkbss_key_g1

0x24a9,	// (0x00022118) cell_vkbss_key_3p_pane_ParamLimits

0x24a9,	// (0x00022118) cell_vkbss_key_3p_pane

0x24c3,	// (0x00022132) cell_vkbss_key_g1_ParamLimits

0x24c3,	// (0x00022132) cell_vkbss_key_g1

0x24dd,	// (0x0002214c) cell_vkbss_key_t1_ParamLimits

0x24dd,	// (0x0002214c) cell_vkbss_key_t1

0x92c2,	// (0x00028f31) cell_ituss_key_pane_ParamLimits

0x92c2,	// (0x00028f31) cell_ituss_key_pane

0xe818,	// (0x0002e487) bg_cell_ituss_key_g1_ParamLimits

0xe818,	// (0x0002e487) bg_cell_ituss_key_g1

0xe824,	// (0x0002e493) cell_ituss_key_pane_g1_ParamLimits

0xe824,	// (0x0002e493) cell_ituss_key_pane_g1

0x92d3,	// (0x00028f42) cell_ituss_key_pane_g2_ParamLimits

0x92d3,	// (0x00028f42) cell_ituss_key_pane_g2

0x0002,

0xfee8,	// (0x0002fb57) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0002fb57) cell_ituss_key_pane_g

0x92fb,	// (0x00028f6a) cell_ituss_key_t1_ParamLimits

0x92fb,	// (0x00028f6a) cell_ituss_key_t1

0x9335,	// (0x00028fa4) cell_ituss_key_t2_ParamLimits

0x9335,	// (0x00028fa4) cell_ituss_key_t2

0x9366,	// (0x00028fd5) cell_ituss_key_t3_ParamLimits

0x9366,	// (0x00028fd5) cell_ituss_key_t3

0x9335,	// (0x00028fa4) cell_ituss_key_t4_ParamLimits

0x9335,	// (0x00028fa4) cell_ituss_key_t4

0x0004,

0xfeef,	// (0x0002fb5e) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0002fb5e) cell_ituss_key_t

0xe84a,	// (0x0002e4b9) cell_vkbss_key_3p_pane_g1

0xe852,	// (0x0002e4c1) cell_vkbss_key_3p_pane_g2

0xe85a,	// (0x0002e4c9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0002fb69) cell_vkbss_key_3p_pane_g

0x6315,	// (0x00025f84) bg_popup_fep_char_preview_window_cp02

0x93a9,	// (0x00029018) popup_fep_char_pre_window_t1

0x223f,	// (0x00021eae) main_ai5_sk_pane

0xe1ce,	// (0x0002de3d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe1da,	// (0x0002de49) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe1ef,	// (0x0002de5e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe1fb,	// (0x0002de6a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0002fb3b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe207,	// (0x0002de76) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2b44,	// (0x000227b3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x2508,	// (0x00022177) main_ai5_sk_pane_g1

0x3d18,	// (0x00023987) popup_query_code_window_g1

0xe7e8,	// (0x0002e457) popup_fep_vkb_icf_pane

0xe7f3,	// (0x0002e462) popup_fep_vtchi_icf_pane

0xe862,	// (0x0002e4d1) bg_icf_pane

0xe86e,	// (0x0002e4dd) list_vkb_icf_pane

0xe87d,	// (0x0002e4ec) bg_icf_pane_cp01

0xe890,	// (0x0002e4ff) vtchi_icf_list_pane

0xe8a0,	// (0x0002e50f) list_vkb_icf_pane_t1_ParamLimits

0xe8a0,	// (0x0002e50f) list_vkb_icf_pane_t1

0xe8b5,	// (0x0002e524) vtchi_icf_list_pane_t1_ParamLimits

0xe8b5,	// (0x0002e524) vtchi_icf_list_pane_t1

0xe7d6,	// (0x0002e445) popup_fep_ituss_window_ParamLimits

0xe7f3,	// (0x0002e462) popup_fep_vtchi_icf_pane_ParamLimits

0xe809,	// (0x0002e478) ituss_keypad_pane_ParamLimits

0x9296,	// (0x00028f05) ituss_sks_pane

0xe862,	// (0x0002e4d1) bg_icf_pane_ParamLimits

0xe7b2,	// (0x0002e421) icf_edit_indi_pane_ParamLimits

0xe7b2,	// (0x0002e421) icf_edit_indi_pane

0xe86e,	// (0x0002e4dd) list_vkb_icf_pane_ParamLimits

0xe87d,	// (0x0002e4ec) bg_icf_pane_cp01_ParamLimits

0xe7c1,	// (0x0002e430) icf_edit_indi_pane_cp01_ParamLimits

0xe7c1,	// (0x0002e430) icf_edit_indi_pane_cp01

0xe898,	// (0x0002e507) vtchi_query_pane

0x9886,	// (0x000294f5) icf_edit_indi_pane_g1_ParamLimits

0x9886,	// (0x000294f5) icf_edit_indi_pane_g1

0xe923,	// (0x0002e592) icf_edit_indi_pane_g2_ParamLimits

0xe923,	// (0x0002e592) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0002fb81) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0002fb81) icf_edit_indi_pane_g

0xe932,	// (0x0002e5a1) icf_edit_indi_pane_t1

0xe8cc,	// (0x0002e53b) bg_input_focus_pane_cp042

0x2a86,	// (0x000226f5) vtchi_button_pane

0xe8d5,	// (0x0002e544) vtchi_query_pane_t1

0xe8e3,	// (0x0002e552) vtchi_query_pane_t2

0xe8f1,	// (0x0002e560) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0002fb70) vtchi_query_pane_t

0x6315,	// (0x00025f84) bg_button_pane_cp13

0xe8ff,	// (0x0002e56e) vtchi_button_pane_g1

0x93b8,	// (0x00029027) ituss_sks_pane_g1

0x93c2,	// (0x00029031) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0002fb77) ituss_sks_pane_g

0xe907,	// (0x0002e576) ituss_sks_pane_t1

0xe915,	// (0x0002e584) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0002fb7c) ituss_sks_pane_t

0x53c2,	// (0x00025031) indicator_nsta_pane_cp_g1

0x53ca,	// (0x00025039) indicator_nsta_pane_cp_g2

0x53d2,	// (0x00025041) indicator_nsta_pane_cp_g3

0x53c2,	// (0x00025031) indicator_nsta_pane_cp_g4

0x53ca,	// (0x00025039) indicator_nsta_pane_cp_g5

0x53d2,	// (0x00025041) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0002f720) indicator_nsta_pane_cp_g

0x2046,	// (0x00021cb5) cell_graphic2_pane_t2_ParamLimits

0x2046,	// (0x00021cb5) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0002fa32) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0002fa32) cell_graphic2_pane_t

0x207d,	// (0x00021cec) cell_graphic2_control_pane_t1

0xf3a2,	// (0x0002f011) signal_pane_g3_ParamLimits

0xf3a2,	// (0x0002f011) signal_pane_g3

0xf3b6,	// (0x0002f025) signal_pane_g4_ParamLimits

0xf3b6,	// (0x0002f025) signal_pane_g4

0xe79c,	// (0x0002e40b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe79c,	// (0x0002e40b) cell_ai5_widget_list_row_pane_t3

0xe838,	// (0x0002e4a7) cell_ituss_key_pane_t1_ParamLimits

0xe838,	// (0x0002e4a7) cell_ituss_key_pane_t1

0x3a59,	// (0x000236c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x3a59,	// (0x000236c8) form_field_data_wide_pane_vc_t2

0x3a6b,	// (0x000236da) form_field_data_wide_pane_vc_t3_ParamLimits

0x3a6b,	// (0x000236da) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002f473) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002f473) form_field_data_wide_pane_vc_t

0x5106,	// (0x00024d75) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5106,	// (0x00024d75) form_field_slider_wide_pane_vc_t3

0x51d4,	// (0x00024e43) form_field_popup_wide_pane_vc_t2_ParamLimits

0x51d4,	// (0x00024e43) form_field_popup_wide_pane_vc_t2

0x51e9,	// (0x00024e58) form_field_popup_wide_pane_vc_t3_ParamLimits

0x51e9,	// (0x00024e58) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0002f70f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002f70f) form_field_popup_wide_pane_vc_t

0xdf3d,	// (0x0002dbac) aid_fshwr2_btn_pane_ParamLimits

0xdf4e,	// (0x0002dbbd) aid_fshwr2_syb_pane_ParamLimits

0xdf5f,	// (0x0002dbce) aid_fshwr2_txt_pane_ParamLimits

0x899b,	// (0x0002860a) fshwr2_bg_pane_ParamLimits

0xdf6b,	// (0x0002dbda) fshwr2_func_candi_pane_ParamLimits

0xdf85,	// (0x0002dbf4) fshwr2_hwr_syb_pane_ParamLimits

0xdf9a,	// (0x0002dc09) fshwr2_icf_pane_ParamLimits

0xb8db,	// (0x0002b54a) list_double_graphic_pane_vc_g4_ParamLimits

0xb8db,	// (0x0002b54a) list_double_graphic_pane_vc_g4

0x92ef,	// (0x00028f5e) cell_ituss_key_pane_g3_ParamLimits

0x92ef,	// (0x00028f5e) cell_ituss_key_pane_g3

0x9397,	// (0x00029006) cell_ituss_key_t5_ParamLimits

0x9397,	// (0x00029006) cell_ituss_key_t5

0x2476,	// (0x000220e5) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

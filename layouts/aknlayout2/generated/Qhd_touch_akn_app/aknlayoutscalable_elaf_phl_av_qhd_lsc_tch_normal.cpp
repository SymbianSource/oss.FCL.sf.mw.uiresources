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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xafbd,	// (0x0000afbd) Screen

0xafc9,	// (0x0000afc9) application_window_ParamLimits

0xafc9,	// (0x0000afc9) application_window

0x002e,	// (0x0000002e) screen_g1

0xb001,	// (0x0000b001) area_bottom_pane_ParamLimits

0xb001,	// (0x0000b001) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc6bf,	// (0x0000c6bf) battery_pane_ParamLimits

0xc6bf,	// (0x0000c6bf) battery_pane

0x4050,	// (0x00004050) bg_status_flat_pane_g8

0x4058,	// (0x00004058) bg_status_flat_pane_g9

0x321a,	// (0x0000321a) context_pane_ParamLimits

0x321a,	// (0x0000321a) context_pane

0xc82a,	// (0x0000c82a) navi_pane_ParamLimits

0xc82a,	// (0x0000c82a) navi_pane

0xc8a1,	// (0x0000c8a1) signal_pane_ParamLimits

0xc8a1,	// (0x0000c8a1) signal_pane

0x0008,

0xa966,	// (0x0000a966) bg_status_flat_pane_g

0xc931,	// (0x0000c931) status_pane_g1_ParamLimits

0xc931,	// (0x0000c931) status_pane_g1

0xc947,	// (0x0000c947) status_pane_g2_ParamLimits

0xc947,	// (0x0000c947) status_pane_g2

0x343a,	// (0x0000343a) status_pane_g3_ParamLimits

0x343a,	// (0x0000343a) status_pane_g3

0x0004,

0xf18e,	// (0x0000f18e) status_pane_g_ParamLimits

0xf18e,	// (0x0000f18e) status_pane_g

0xc953,	// (0x0000c953) title_pane_ParamLimits

0xc953,	// (0x0000c953) title_pane

0xc9b4,	// (0x0000c9b4) uni_indicator_pane_ParamLimits

0xc9b4,	// (0x0000c9b4) uni_indicator_pane

0x2ac5,	// (0x00002ac5) bg_list_pane_ParamLimits

0x2ac5,	// (0x00002ac5) bg_list_pane

0xbf9b,	// (0x0000bf9b) find_pane

0xbfa3,	// (0x0000bfa3) listscroll_app_pane_ParamLimits

0xbfa3,	// (0x0000bfa3) listscroll_app_pane

0x2af9,	// (0x00002af9) listscroll_form_pane

0xbfaf,	// (0x0000bfaf) listscroll_gen_pane_ParamLimits

0xbfaf,	// (0x0000bfaf) listscroll_gen_pane

0x2af9,	// (0x00002af9) listscroll_set_pane

0x4e41,	// (0x00004e41) main_idle_act_pane

0x259f,	// (0x0000259f) main_idle_trad_pane

0x259f,	// (0x0000259f) main_list_empty_pane

0x2b27,	// (0x00002b27) main_midp_pane

0x2b33,	// (0x00002b33) main_pane_g1_ParamLimits

0x2b33,	// (0x00002b33) main_pane_g1

0xbfc3,	// (0x0000bfc3) popup_ai_message_window_ParamLimits

0xbfc3,	// (0x0000bfc3) popup_ai_message_window

0xc054,	// (0x0000c054) popup_fep_china_uni_window_ParamLimits

0xc054,	// (0x0000c054) popup_fep_china_uni_window

0x2c47,	// (0x00002c47) popup_fep_japan_candidate_window_ParamLimits

0x2c47,	// (0x00002c47) popup_fep_japan_candidate_window

0x2c67,	// (0x00002c67) popup_fep_japan_predictive_window_ParamLimits

0x2c67,	// (0x00002c67) popup_fep_japan_predictive_window

0xc0b0,	// (0x0000c0b0) popup_find_window

0xc0cd,	// (0x0000c0cd) popup_grid_graphic_window_ParamLimits

0xc0cd,	// (0x0000c0cd) popup_grid_graphic_window

0x2ccc,	// (0x00002ccc) popup_large_graphic_colour_window

0xc165,	// (0x0000c165) popup_menu_window_ParamLimits

0xc165,	// (0x0000c165) popup_menu_window

0xc31f,	// (0x0000c31f) popup_note_image_window

0xc2e5,	// (0x0000c2e5) popup_note_wait_window_ParamLimits

0xc2e5,	// (0x0000c2e5) popup_note_wait_window

0xc337,	// (0x0000c337) popup_note_window_ParamLimits

0xc337,	// (0x0000c337) popup_note_window

0xc3dd,	// (0x0000c3dd) popup_query_code_window_ParamLimits

0xc3dd,	// (0x0000c3dd) popup_query_code_window

0x2f14,	// (0x00002f14) popup_query_data_code_window_ParamLimits

0x2f14,	// (0x00002f14) popup_query_data_code_window

0xc417,	// (0x0000c417) popup_query_data_window_ParamLimits

0xc417,	// (0x0000c417) popup_query_data_window

0xc48d,	// (0x0000c48d) popup_query_sat_info_window_ParamLimits

0xc48d,	// (0x0000c48d) popup_query_sat_info_window

0xc524,	// (0x0000c524) popup_snote_single_graphic_window_ParamLimits

0xc524,	// (0x0000c524) popup_snote_single_graphic_window

0xc524,	// (0x0000c524) popup_snote_single_text_window_ParamLimits

0xc524,	// (0x0000c524) popup_snote_single_text_window

0x2f9b,	// (0x00002f9b) popup_sub_window_general

0x30cb,	// (0x000030cb) popup_window_general_ParamLimits

0x30cb,	// (0x000030cb) popup_window_general

0x30e0,	// (0x000030e0) power_save_pane

0xbe2c,	// (0x0000be2c) control_pane_g1_ParamLimits

0xbe2c,	// (0x0000be2c) control_pane_g1

0x293a,	// (0x0000293a) control_pane_g2_ParamLimits

0x293a,	// (0x0000293a) control_pane_g2

0x295d,	// (0x0000295d) control_pane_g3_ParamLimits

0x295d,	// (0x0000295d) control_pane_g3

0x0007,

0xf176,	// (0x0000f176) control_pane_g_ParamLimits

0xf176,	// (0x0000f176) control_pane_g

0xbe92,	// (0x0000be92) control_pane_t1_ParamLimits

0xbe92,	// (0x0000be92) control_pane_t1

0xbef0,	// (0x0000bef0) control_pane_t2_ParamLimits

0xbef0,	// (0x0000bef0) control_pane_t2

0x0002,

0xf187,	// (0x0000f187) control_pane_t_ParamLimits

0xf187,	// (0x0000f187) control_pane_t

0x2832,	// (0x00002832) navi_navi_volume_pane_cp1

0x283b,	// (0x0000283b) status_small_icon_pane

0x2843,	// (0x00002843) status_small_pane_g1_ParamLimits

0x2843,	// (0x00002843) status_small_pane_g1

0x2877,	// (0x00002877) status_small_pane_g2_ParamLimits

0x2877,	// (0x00002877) status_small_pane_g2

0x2883,	// (0x00002883) status_small_pane_g3_ParamLimits

0x2883,	// (0x00002883) status_small_pane_g3

0x288f,	// (0x0000288f) status_small_pane_g4_ParamLimits

0x288f,	// (0x0000288f) status_small_pane_g4

0x289b,	// (0x0000289b) status_small_pane_g5_ParamLimits

0x289b,	// (0x0000289b) status_small_pane_g5

0x28aa,	// (0x000028aa) status_small_pane_g6_ParamLimits

0x28aa,	// (0x000028aa) status_small_pane_g6

0x0007,

0xa872,	// (0x0000a872) status_small_pane_g_ParamLimits

0xa872,	// (0x0000a872) status_small_pane_g

0x28da,	// (0x000028da) status_small_pane_t1

0x28fd,	// (0x000028fd) status_small_wait_pane_ParamLimits

0x28fd,	// (0x000028fd) status_small_wait_pane

0xbc15,	// (0x0000bc15) aid_levels_signal_ParamLimits

0xbc15,	// (0x0000bc15) aid_levels_signal

0xbc2d,	// (0x0000bc2d) signal_pane_g1_ParamLimits

0xbc2d,	// (0x0000bc2d) signal_pane_g1

0xbc48,	// (0x0000bc48) signal_pane_g2_ParamLimits

0xbc48,	// (0x0000bc48) signal_pane_g2

0x0001,

0xf155,	// (0x0000f155) signal_pane_g_ParamLimits

0xf155,	// (0x0000f155) signal_pane_g

0x1e51,	// (0x00001e51) context_pane_g1

0xb17a,	// (0x0000b17a) title_pane_g1

0xb1af,	// (0x0000b1af) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf082,	// (0x0000f082) title_pane_t

0xc9dc,	// (0x0000c9dc) aid_levels_battery_ParamLimits

0xc9dc,	// (0x0000c9dc) aid_levels_battery

0xc9f8,	// (0x0000c9f8) battery_pane_g1_ParamLimits

0xc9f8,	// (0x0000c9f8) battery_pane_g1

0xca15,	// (0x0000ca15) battery_pane_g2_ParamLimits

0xca15,	// (0x0000ca15) battery_pane_g2

0x0001,

0xf199,	// (0x0000f199) battery_pane_g_ParamLimits

0xf199,	// (0x0000f199) battery_pane_g

0xcdf0,	// (0x0000cdf0) uni_indicator_pane_g1

0xce05,	// (0x0000ce05) uni_indicator_pane_g2

0xce1a,	// (0x0000ce1a) uni_indicator_pane_g3

0x0005,

0xf1e5,	// (0x0000f1e5) uni_indicator_pane_g

0x2411,	// (0x00002411) navi_icon_pane_ParamLimits

0x2411,	// (0x00002411) navi_icon_pane

0x235a,	// (0x0000235a) navi_midp_pane

0x242d,	// (0x0000242d) navi_navi_pane

0x2437,	// (0x00002437) navi_text_pane_ParamLimits

0x2437,	// (0x00002437) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xaa09,	// (0x0000aa09) status_small_wait_pane_g

0x4815,	// (0x00004815) navi_navi_icon_text_pane

0x481d,	// (0x0000481d) navi_navi_pane_g1_ParamLimits

0x481d,	// (0x0000481d) navi_navi_pane_g1

0x482f,	// (0x0000482f) navi_navi_pane_g2_ParamLimits

0x482f,	// (0x0000482f) navi_navi_pane_g2

0x0001,

0xa9d7,	// (0x0000a9d7) navi_navi_pane_g_ParamLimits

0xa9d7,	// (0x0000a9d7) navi_navi_pane_g

0x4841,	// (0x00004841) navi_navi_tabs_pane

0x484a,	// (0x0000484a) navi_navi_text_pane

0x4815,	// (0x00004815) navi_navi_volume_pane

0xcdb1,	// (0x0000cdb1) navi_text_pane_t1

0xcda5,	// (0x0000cda5) navi_icon_pane_g1

0x4732,	// (0x00004732) navi_navi_text_pane_t1

0xcd94,	// (0x0000cd94) navi_navi_volume_pane_g1

0xcd9c,	// (0x0000cd9c) volume_small_pane

0xccf0,	// (0x0000ccf0) navi_navi_icon_text_pane_g1

0xccf8,	// (0x0000ccf8) navi_navi_icon_text_pane_t1

0x242d,	// (0x0000242d) navi_tabs_2_long_pane

0x242d,	// (0x0000242d) navi_tabs_2_pane

0x242d,	// (0x0000242d) navi_tabs_3_long_pane

0x242d,	// (0x0000242d) navi_tabs_3_pane

0x242d,	// (0x0000242d) navi_tabs_4_pane

0xccd0,	// (0x0000ccd0) tabs_2_active_pane_ParamLimits

0xccd0,	// (0x0000ccd0) tabs_2_active_pane

0xcce0,	// (0x0000cce0) tabs_2_passive_pane_ParamLimits

0xcce0,	// (0x0000cce0) tabs_2_passive_pane

0xcc9e,	// (0x0000cc9e) tabs_3_active_pane_ParamLimits

0xcc9e,	// (0x0000cc9e) tabs_3_active_pane

0xccae,	// (0x0000ccae) tabs_3_passive_pane_ParamLimits

0xccae,	// (0x0000ccae) tabs_3_passive_pane

0xccbf,	// (0x0000ccbf) tabs_3_passive_pane_cp_ParamLimits

0xccbf,	// (0x0000ccbf) tabs_3_passive_pane_cp

0xcc5a,	// (0x0000cc5a) tabs_4_active_pane_ParamLimits

0xcc5a,	// (0x0000cc5a) tabs_4_active_pane

0xcc6b,	// (0x0000cc6b) tabs_4_passive_pane_ParamLimits

0xcc6b,	// (0x0000cc6b) tabs_4_passive_pane

0xcc7c,	// (0x0000cc7c) tabs_4_passive_pane_cp_ParamLimits

0xcc7c,	// (0x0000cc7c) tabs_4_passive_pane_cp

0xcc8d,	// (0x0000cc8d) tabs_4_passive_pane_cp2_ParamLimits

0xcc8d,	// (0x0000cc8d) tabs_4_passive_pane_cp2

0xcc3a,	// (0x0000cc3a) tabs_2_long_active_pane_ParamLimits

0xcc3a,	// (0x0000cc3a) tabs_2_long_active_pane

0xcc4a,	// (0x0000cc4a) tabs_2_long_passive_pane_ParamLimits

0xcc4a,	// (0x0000cc4a) tabs_2_long_passive_pane

0xcc07,	// (0x0000cc07) tabs_3_long_active_pane_ParamLimits

0xcc07,	// (0x0000cc07) tabs_3_long_active_pane

0xcc18,	// (0x0000cc18) tabs_3_long_passive_pane_ParamLimits

0xcc18,	// (0x0000cc18) tabs_3_long_passive_pane

0xcc29,	// (0x0000cc29) tabs_3_long_passive_pane_cp_ParamLimits

0xcc29,	// (0x0000cc29) tabs_3_long_passive_pane_cp

0x44b3,	// (0x000044b3) volume_small_pane_g1

0xcbb6,	// (0x0000cbb6) volume_small_pane_g2

0xcbbf,	// (0x0000cbbf) volume_small_pane_g3

0xcbc8,	// (0x0000cbc8) volume_small_pane_g4

0xcbd1,	// (0x0000cbd1) volume_small_pane_g5

0xcbda,	// (0x0000cbda) volume_small_pane_g6

0xcbe3,	// (0x0000cbe3) volume_small_pane_g7

0xcbec,	// (0x0000cbec) volume_small_pane_g8

0xcbf5,	// (0x0000cbf5) volume_small_pane_g9

0xcbfe,	// (0x0000cbfe) volume_small_pane_g10

0x0009,

0xf1bb,	// (0x0000f1bb) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb23b,	// (0x0000b23b) tabs_3_active_pane_g1

0xb243,	// (0x0000b243) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb23b,	// (0x0000b23b) tabs_3_passive_pane_g1

0xb243,	// (0x0000b243) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb255,	// (0x0000b255) tabs_4_active_pane_g1

0xb25d,	// (0x0000b25d) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb255,	// (0x0000b255) tabs_4_1_passive_pane_g1

0xb25d,	// (0x0000b25d) tabs_4_1_passive_pane_t1

0x2b27,	// (0x00002b27) list_highlight_pane_cp2

0xceb5,	// (0x0000ceb5) list_set_pane_ParamLimits

0xceb5,	// (0x0000ceb5) list_set_pane

0xcf4f,	// (0x0000cf4f) main_pane_set_t1_ParamLimits

0xcf4f,	// (0x0000cf4f) main_pane_set_t1

0xcf6f,	// (0x0000cf6f) main_pane_set_t2_ParamLimits

0xcf6f,	// (0x0000cf6f) main_pane_set_t2

0xcf83,	// (0x0000cf83) main_pane_set_t3_ParamLimits

0xcf83,	// (0x0000cf83) main_pane_set_t3

0xcf95,	// (0x0000cf95) main_pane_set_t4_ParamLimits

0xcf95,	// (0x0000cf95) main_pane_set_t4

0x0003,

0xf1f7,	// (0x0000f1f7) main_pane_set_t_ParamLimits

0xf1f7,	// (0x0000f1f7) main_pane_set_t

0xcfa7,	// (0x0000cfa7) setting_code_pane

0xcfb1,	// (0x0000cfb1) setting_slider_graphic_pane

0xcfb1,	// (0x0000cfb1) setting_slider_pane

0xcfb1,	// (0x0000cfb1) setting_text_pane

0xcfb1,	// (0x0000cfb1) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xa662,	// (0x0000a662) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xa669,	// (0x0000a669) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e28,	// (0x00004e28) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2

0x4e02,	// (0x00004e02) set_opt_bg_pane_g3

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6

0x4e0c,	// (0x00004e0c) set_opt_bg_pane_g7

0x4e14,	// (0x00004e14) set_opt_bg_pane_g8

0x4e1e,	// (0x00004e1e) set_opt_bg_pane_g9

0x0008,

0xaa60,	// (0x0000aa60) set_opt_bg_pane_g

0x4d91,	// (0x00004d91) slider_set_pane_g1

0x4d9e,	// (0x00004d9e) slider_set_pane_g2

0x0006,

0xaa51,	// (0x0000aa51) slider_set_pane_g

0x4c11,	// (0x00004c11) volume_set_pane_g1

0x4c19,	// (0x00004c19) volume_set_pane_g2

0x4c21,	// (0x00004c21) volume_set_pane_g3

0x4c29,	// (0x00004c29) volume_set_pane_g4

0x4c31,	// (0x00004c31) volume_set_pane_g5

0x4c39,	// (0x00004c39) volume_set_pane_g6

0x4c41,	// (0x00004c41) volume_set_pane_g7

0x4c49,	// (0x00004c49) volume_set_pane_g8

0x4c51,	// (0x00004c51) volume_set_pane_g9

0x4c59,	// (0x00004c59) volume_set_pane_g10

0x0009,

0xaa29,	// (0x0000aa29) volume_set_pane_g

0xb26f,	// (0x0000b26f) indicator_pane_ParamLimits

0xb26f,	// (0x0000b26f) indicator_pane

0xb297,	// (0x0000b297) main_idle_pane_g2_ParamLimits

0xb297,	// (0x0000b297) main_idle_pane_g2

0xb2cf,	// (0x0000b2cf) main_pane_idle_g1_ParamLimits

0xb2cf,	// (0x0000b2cf) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb2f6,	// (0x0000b2f6) soft_indicator_pane_ParamLimits

0xb2f6,	// (0x0000b2f6) soft_indicator_pane

0xb310,	// (0x0000b310) wallpaper_pane_ParamLimits

0xb310,	// (0x0000b310) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb322,	// (0x0000b322) indicator_pane_g1_ParamLimits

0xb322,	// (0x0000b322) indicator_pane_g1

0x536a,	// (0x0000536a) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb338,	// (0x0000b338) aid_ps_clock_pane

0x06cd,	// (0x000006cd) aid_ps_indicator_pane

0x06d9,	// (0x000006d9) indicator_ps_pane_ParamLimits

0x06d9,	// (0x000006d9) indicator_ps_pane

0x06e8,	// (0x000006e8) power_save_pane_g1_ParamLimits

0x06e8,	// (0x000006e8) power_save_pane_g1

0x06f4,	// (0x000006f4) power_save_pane_g2_ParamLimits

0x06f4,	// (0x000006f4) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06ae,	// (0x000006ae) aid_ps_area_pane_ParamLimits

0x0001,

0xa66e,	// (0x0000a66e) power_save_pane_g_ParamLimits

0xa66e,	// (0x0000a66e) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb338,	// (0x0000b338) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xa673,	// (0x0000a673) power_save_pane_t_ParamLimits

0xa673,	// (0x0000a673) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb346,	// (0x0000b346) ai_gene_pane_ParamLimits

0xb346,	// (0x0000b346) ai_gene_pane

0xb35d,	// (0x0000b35d) ai_links_pane_ParamLimits

0xb35d,	// (0x0000b35d) ai_links_pane

0xb375,	// (0x0000b375) indicator_pane_cp1_ParamLimits

0xb375,	// (0x0000b375) indicator_pane_cp1

0xb384,	// (0x0000b384) main_pane_idle_g1_cp_ParamLimits

0xb384,	// (0x0000b384) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb39c,	// (0x0000b39c) soft_indicator_pane_cp1_ParamLimits

0xb39c,	// (0x0000b39c) soft_indicator_pane_cp1

0x4ade,	// (0x00004ade) ai_links_pane_g1

0x4ae7,	// (0x00004ae7) grid_ai_links_pane

0xcde7,	// (0x0000cde7) ai_gene_pane_1

0x4acc,	// (0x00004acc) ai_gene_pane_2

0x4ad5,	// (0x00004ad5) list_highlight_pane_cp4

0xcdc3,	// (0x0000cdc3) cell_ai_link_pane_ParamLimits

0xcdc3,	// (0x0000cdc3) cell_ai_link_pane

0x4a9d,	// (0x00004a9d) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xaa04,	// (0x0000aa04) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x49eb,	// (0x000049eb) ai_gene_pane_1_g1_ParamLimits

0x49eb,	// (0x000049eb) ai_gene_pane_1_g1

0x49f7,	// (0x000049f7) ai_gene_pane_1_g2_ParamLimits

0x49f7,	// (0x000049f7) ai_gene_pane_1_g2

0x0001,

0xa9fa,	// (0x0000a9fa) ai_gene_pane_1_g_ParamLimits

0xa9fa,	// (0x0000a9fa) ai_gene_pane_1_g

0x4a04,	// (0x00004a04) ai_gene_pane_1_t1_ParamLimits

0x4a04,	// (0x00004a04) ai_gene_pane_1_t1

0x4a38,	// (0x00004a38) grid_ai_soft_ind_pane

0x49d6,	// (0x000049d6) ai_gene_pane_2_t1_ParamLimits

0x49d6,	// (0x000049d6) ai_gene_pane_2_t1

0xb3b0,	// (0x0000b3b0) main_pane_empty_t1_ParamLimits

0xb3b0,	// (0x0000b3b0) main_pane_empty_t1

0xb3c8,	// (0x0000b3c8) main_pane_empty_t2_ParamLimits

0xb3c8,	// (0x0000b3c8) main_pane_empty_t2

0xb3dd,	// (0x0000b3dd) main_pane_empty_t3_ParamLimits

0xb3dd,	// (0x0000b3dd) main_pane_empty_t3

0xb3ef,	// (0x0000b3ef) main_pane_empty_t4_ParamLimits

0xb3ef,	// (0x0000b3ef) main_pane_empty_t4

0xb401,	// (0x0000b401) main_pane_empty_t5_ParamLimits

0xb401,	// (0x0000b401) main_pane_empty_t5

0x0004,

0xf089,	// (0x0000f089) main_pane_empty_t_ParamLimits

0xf089,	// (0x0000f089) main_pane_empty_t

0x15aa,	// (0x000015aa) bg_popup_window_pane_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_window_pane

0x4740,	// (0x00004740) find_popup_pane_cp2_ParamLimits

0x4740,	// (0x00004740) find_popup_pane_cp2

0x474c,	// (0x0000474c) heading_pane_ParamLimits

0x474c,	// (0x0000474c) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcd15,	// (0x0000cd15) bg_popup_window_pane_g1_ParamLimits

0xcd15,	// (0x0000cd15) bg_popup_window_pane_g1

0xcd24,	// (0x0000cd24) bg_popup_window_pane_g2_ParamLimits

0xcd24,	// (0x0000cd24) bg_popup_window_pane_g2

0xcd30,	// (0x0000cd30) bg_popup_window_pane_g3_ParamLimits

0xcd30,	// (0x0000cd30) bg_popup_window_pane_g3

0xcd3c,	// (0x0000cd3c) bg_popup_window_pane_g4_ParamLimits

0xcd3c,	// (0x0000cd3c) bg_popup_window_pane_g4

0xcd4b,	// (0x0000cd4b) bg_popup_window_pane_g5_ParamLimits

0xcd4b,	// (0x0000cd4b) bg_popup_window_pane_g5

0xcd5b,	// (0x0000cd5b) bg_popup_window_pane_g6_ParamLimits

0xcd5b,	// (0x0000cd5b) bg_popup_window_pane_g6

0xcd67,	// (0x0000cd67) bg_popup_window_pane_g7_ParamLimits

0xcd67,	// (0x0000cd67) bg_popup_window_pane_g7

0xcd76,	// (0x0000cd76) bg_popup_window_pane_g8_ParamLimits

0xcd76,	// (0x0000cd76) bg_popup_window_pane_g8

0xcd85,	// (0x0000cd85) bg_popup_window_pane_g9_ParamLimits

0xcd85,	// (0x0000cd85) bg_popup_window_pane_g9

0x4715,	// (0x00004715) bg_popup_window_pane_g10_ParamLimits

0x4715,	// (0x00004715) bg_popup_window_pane_g10

0x0009,

0xf1d0,	// (0x0000f1d0) bg_popup_window_pane_g_ParamLimits

0xf1d0,	// (0x0000f1d0) bg_popup_window_pane_g

0x463e,	// (0x0000463e) bg_popup_heading_pane_ParamLimits

0x463e,	// (0x0000463e) bg_popup_heading_pane

0x52ad,	// (0x000052ad) tabs_4_passive_pane_cp_srt_ParamLimits

0x52ad,	// (0x000052ad) tabs_4_passive_pane_cp_srt

0x52bf,	// (0x000052bf) tabs_4_passive_pane_srt_ParamLimits

0x4652,	// (0x00004652) heading_pane_g2

0x52bf,	// (0x000052bf) tabs_4_passive_pane_srt

0x3805,	// (0x00003805) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3805,	// (0x00003805) bg_passive_tab_pane_cp3_srt

0x465a,	// (0x0000465a) heading_pane_t1_ParamLimits

0x465a,	// (0x0000465a) heading_pane_t1

0x4671,	// (0x00004671) heading_pane_t2_ParamLimits

0x4671,	// (0x00004671) heading_pane_t2

0x0001,

0xa9bd,	// (0x0000a9bd) heading_pane_t_ParamLimits

0xa9bd,	// (0x0000a9bd) heading_pane_t

0x4018,	// (0x00004018) bg_popup_heading_pane_g1

0x40c7,	// (0x000040c7) bg_popup_heading_pane_g2

0x40d1,	// (0x000040d1) bg_popup_heading_pane_g3

0x40db,	// (0x000040db) bg_popup_heading_pane_g4

0x40e5,	// (0x000040e5) bg_popup_heading_pane_g5

0x40ef,	// (0x000040ef) bg_popup_heading_pane_g6

0x40f7,	// (0x000040f7) bg_popup_heading_pane_g7

0x40ff,	// (0x000040ff) bg_popup_heading_pane_g8

0x4109,	// (0x00004109) bg_popup_heading_pane_g9

0x0008,

0xa979,	// (0x0000a979) bg_popup_heading_pane_g

0x3677,	// (0x00003677) bg_popup_sub_pane_g1

0x367f,	// (0x0000367f) bg_popup_sub_pane_g2

0x3687,	// (0x00003687) bg_popup_sub_pane_g3

0x368f,	// (0x0000368f) bg_popup_sub_pane_g4

0x3697,	// (0x00003697) bg_popup_sub_pane_g5

0x369f,	// (0x0000369f) bg_popup_sub_pane_g6

0x36a7,	// (0x000036a7) bg_popup_sub_pane_g7

0x36af,	// (0x000036af) bg_popup_sub_pane_g8

0x36b7,	// (0x000036b7) bg_popup_sub_pane_g9

0x0008,

0xa953,	// (0x0000a953) bg_popup_sub_pane_g

0x0823,	// (0x00000823) bg_popup_window_pane_cp5_ParamLimits

0x0823,	// (0x00000823) bg_popup_window_pane_cp5

0x083f,	// (0x0000083f) popup_note_window_g1_ParamLimits

0x083f,	// (0x0000083f) popup_note_window_g1

0x084b,	// (0x0000084b) popup_note_window_t1_ParamLimits

0x084b,	// (0x0000084b) popup_note_window_t1

0x0861,	// (0x00000861) popup_note_window_t2_ParamLimits

0x0861,	// (0x00000861) popup_note_window_t2

0x0877,	// (0x00000877) popup_note_window_t3_ParamLimits

0x0877,	// (0x00000877) popup_note_window_t3

0x088d,	// (0x0000088d) popup_note_window_t4_ParamLimits

0x088d,	// (0x0000088d) popup_note_window_t4

0x08b5,	// (0x000008b5) popup_note_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note_window_t5

0x0004,

0xa683,	// (0x0000a683) popup_note_window_t_ParamLimits

0xa683,	// (0x0000a683) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x3f94,	// (0x00003f94) popup_note_image_window_g1_ParamLimits

0x3f94,	// (0x00003f94) popup_note_image_window_g1

0x3fa0,	// (0x00003fa0) popup_note_image_window_g2_ParamLimits

0x3fa0,	// (0x00003fa0) popup_note_image_window_g2

0x0001,

0xa947,	// (0x0000a947) popup_note_image_window_g_ParamLimits

0xa947,	// (0x0000a947) popup_note_image_window_g

0x3fb9,	// (0x00003fb9) popup_note_image_window_t1_ParamLimits

0x3fb9,	// (0x00003fb9) popup_note_image_window_t1

0x3fd2,	// (0x00003fd2) popup_note_image_window_t2_ParamLimits

0x3fd2,	// (0x00003fd2) popup_note_image_window_t2

0x3feb,	// (0x00003feb) popup_note_image_window_t3_ParamLimits

0x3feb,	// (0x00003feb) popup_note_image_window_t3

0x0002,

0xa94c,	// (0x0000a94c) popup_note_image_window_t_ParamLimits

0xa94c,	// (0x0000a94c) popup_note_image_window_t

0x3e55,	// (0x00003e55) bg_popup_window_pane_cp7_ParamLimits

0x3e55,	// (0x00003e55) bg_popup_window_pane_cp7

0x3e85,	// (0x00003e85) popup_note_wait_window_g1_ParamLimits

0x3e85,	// (0x00003e85) popup_note_wait_window_g1

0x3e91,	// (0x00003e91) popup_note_wait_window_g2_ParamLimits

0x3e91,	// (0x00003e91) popup_note_wait_window_g2

0x0002,

0xa935,	// (0x0000a935) popup_note_wait_window_g_ParamLimits

0xa935,	// (0x0000a935) popup_note_wait_window_g

0x3ea9,	// (0x00003ea9) popup_note_wait_window_t1_ParamLimits

0x3ea9,	// (0x00003ea9) popup_note_wait_window_t1

0x3ed0,	// (0x00003ed0) popup_note_wait_window_t2_ParamLimits

0x3ed0,	// (0x00003ed0) popup_note_wait_window_t2

0x3eed,	// (0x00003eed) popup_note_wait_window_t3_ParamLimits

0x3eed,	// (0x00003eed) popup_note_wait_window_t3

0x3f00,	// (0x00003f00) popup_note_wait_window_t4_ParamLimits

0x3f00,	// (0x00003f00) popup_note_wait_window_t4

0x0004,

0xa93c,	// (0x0000a93c) popup_note_wait_window_t_ParamLimits

0xa93c,	// (0x0000a93c) popup_note_wait_window_t

0x3f25,	// (0x00003f25) wait_bar_pane_ParamLimits

0x3f25,	// (0x00003f25) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa802,	// (0x0000a802) wait_anim_pane_g

0x3df9,	// (0x00003df9) wait_border_pane_g1

0x3e04,	// (0x00003e04) wait_border_pane_g2

0x3e0d,	// (0x00003e0d) wait_border_pane_g3

0x0002,

0xa92e,	// (0x0000a92e) wait_border_pane_g

0x3d56,	// (0x00003d56) bg_popup_window_pane_cp16_ParamLimits

0x3d56,	// (0x00003d56) bg_popup_window_pane_cp16

0x3d64,	// (0x00003d64) indicator_popup_pane_cp4_ParamLimits

0x3d64,	// (0x00003d64) indicator_popup_pane_cp4

0x3d78,	// (0x00003d78) popup_query_data_window_t1_ParamLimits

0x3d78,	// (0x00003d78) popup_query_data_window_t1

0x3d8a,	// (0x00003d8a) popup_query_data_window_t2_ParamLimits

0x3d8a,	// (0x00003d8a) popup_query_data_window_t2

0x3da3,	// (0x00003da3) popup_query_data_window_t3_ParamLimits

0x3da3,	// (0x00003da3) popup_query_data_window_t3

0x0002,

0xa927,	// (0x0000a927) popup_query_data_window_t_ParamLimits

0xa927,	// (0x0000a927) popup_query_data_window_t

0x3dbd,	// (0x00003dbd) query_popup_data_pane_ParamLimits

0x3dbd,	// (0x00003dbd) query_popup_data_pane

0x3dd1,	// (0x00003dd1) query_popup_data_pane_cp1_ParamLimits

0x3dd1,	// (0x00003dd1) query_popup_data_pane_cp1

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp10_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp10

0x3cb9,	// (0x00003cb9) indicator_popup_pane_ParamLimits

0x3cb9,	// (0x00003cb9) indicator_popup_pane

0x0930,	// (0x00000930) popup_query_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_code_window_t1

0x3cd1,	// (0x00003cd1) popup_query_code_window_t2_ParamLimits

0x3cd1,	// (0x00003cd1) popup_query_code_window_t2

0x3d0f,	// (0x00003d0f) popup_query_code_window_t3_ParamLimits

0x3d0f,	// (0x00003d0f) popup_query_code_window_t3

0x0002,

0xa920,	// (0x0000a920) popup_query_code_window_t_ParamLimits

0xa920,	// (0x0000a920) popup_query_code_window_t

0x3d3e,	// (0x00003d3e) query_popup_pane_ParamLimits

0x3d3e,	// (0x00003d3e) query_popup_pane

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1_ParamLimits

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1

0x090a,	// (0x0000090a) indicator_popup_pane_cp2_ParamLimits

0x090a,	// (0x0000090a) indicator_popup_pane_cp2

0x091d,	// (0x0000091d) popup_query_data_code_window_g1_ParamLimits

0x091d,	// (0x0000091d) popup_query_data_code_window_g1

0x0930,	// (0x00000930) popup_query_data_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t1

0x0942,	// (0x00000942) popup_query_data_code_window_t2_ParamLimits

0x0942,	// (0x00000942) popup_query_data_code_window_t2

0x0954,	// (0x00000954) popup_query_data_code_window_t3_ParamLimits

0x0954,	// (0x00000954) popup_query_data_code_window_t3

0x096a,	// (0x0000096a) popup_query_data_code_window_t4_ParamLimits

0x096a,	// (0x0000096a) popup_query_data_code_window_t4

0x0003,

0xa68e,	// (0x0000a68e) popup_query_data_code_window_t_ParamLimits

0xa68e,	// (0x0000a68e) popup_query_data_code_window_t

0x36e4,	// (0x000036e4) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c8d,	// (0x00003c8d) heading_pane_cp5

0x0a7d,	// (0x00000a7d) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09a8,	// (0x000009a8) query_popup_pane_t1

0x09b6,	// (0x000009b6) list_popup_info_pane_ParamLimits

0x09b6,	// (0x000009b6) list_popup_info_pane

0x09c5,	// (0x000009c5) listscroll_popup_info_pane_g1

0x09cd,	// (0x000009cd) scroll_pane_cp7

0x09d7,	// (0x000009d7) popup_info_list_pane_t1_ParamLimits

0x09d7,	// (0x000009d7) popup_info_list_pane_t1

0x09f1,	// (0x000009f1) popup_info_list_pane_t2_ParamLimits

0x09f1,	// (0x000009f1) popup_info_list_pane_t2

0x0001,

0xa697,	// (0x0000a697) popup_info_list_pane_t_ParamLimits

0xa697,	// (0x0000a697) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53a1,	// (0x000053a1) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb463,	// (0x0000b463) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0xb46b,	// (0x0000b46b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb46b,	// (0x0000b46b) cell_large_graphic_colour_none_popup_pane

0xb47f,	// (0x0000b47f) grid_large_graphic_colour_popup_pane_ParamLimits

0xb47f,	// (0x0000b47f) grid_large_graphic_colour_popup_pane

0xb4a3,	// (0x0000b4a3) listscroll_popup_colour_pane_g1_ParamLimits

0xb4a3,	// (0x0000b4a3) listscroll_popup_colour_pane_g1

0xb4ba,	// (0x0000b4ba) listscroll_popup_colour_pane_g2_ParamLimits

0xb4ba,	// (0x0000b4ba) listscroll_popup_colour_pane_g2

0xb4d1,	// (0x0000b4d1) listscroll_popup_colour_pane_g3_ParamLimits

0xb4d1,	// (0x0000b4d1) listscroll_popup_colour_pane_g3

0xb4e1,	// (0x0000b4e1) listscroll_popup_colour_pane_g4_ParamLimits

0xb4e1,	// (0x0000b4e1) listscroll_popup_colour_pane_g4

0x0003,

0xf094,	// (0x0000f094) listscroll_popup_colour_pane_g_ParamLimits

0xf094,	// (0x0000f094) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb4f1,	// (0x0000b4f1) cell_large_graphic_colour_popup_pane_ParamLimits

0xb4f1,	// (0x0000b4f1) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa6a5,	// (0x0000a6a5) cell_large_graphic_colour_popup_pane_g

0x0b67,	// (0x00000b67) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b70,	// (0x00000b70) grid_highlight_pane_cp4

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8_ParamLimits

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1_ParamLimits

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2_ParamLimits

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3_ParamLimits

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4_ParamLimits

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5_ParamLimits

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5

0x0004,

0xa6aa,	// (0x0000a6aa) popup_snote_single_text_window_t_ParamLimits

0xa6aa,	// (0x0000a6aa) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xa6b5,	// (0x0000a6b5) popup_snote_single_graphic_window_g_ParamLimits

0xa6b5,	// (0x0000a6b5) popup_snote_single_graphic_window_g

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1_ParamLimits

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2_ParamLimits

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3_ParamLimits

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4_ParamLimits

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5_ParamLimits

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5

0x0004,

0xa6ba,	// (0x0000a6ba) popup_snote_single_graphic_window_t_ParamLimits

0xa6ba,	// (0x0000a6ba) popup_snote_single_graphic_window_t

0x522d,	// (0x0000522d) grid_graphic_popup_pane_ParamLimits

0x522d,	// (0x0000522d) grid_graphic_popup_pane

0x5255,	// (0x00005255) listscroll_popup_graphic_pane_g1_ParamLimits

0x5255,	// (0x00005255) listscroll_popup_graphic_pane_g1

0xd0ea,	// (0x0000d0ea) listscroll_popup_graphic_pane_g2_ParamLimits

0xd0ea,	// (0x0000d0ea) listscroll_popup_graphic_pane_g2

0x0001,

0xf21a,	// (0x0000f21a) listscroll_popup_graphic_pane_g_ParamLimits

0xf21a,	// (0x0000f21a) listscroll_popup_graphic_pane_g

0x527d,	// (0x0000527d) scroll_pane_cp5

0xd0ae,	// (0x0000d0ae) cell_graphic_popup_pane_ParamLimits

0xd0ae,	// (0x0000d0ae) cell_graphic_popup_pane

0x51b7,	// (0x000051b7) cell_graphic_popup_pane_g1

0x51bf,	// (0x000051bf) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xaa96,	// (0x0000aa96) cell_graphic_popup_pane_g

0x51c8,	// (0x000051c8) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd069,	// (0x0000d069) bg_list_pane_g1_ParamLimits

0xd069,	// (0x0000d069) bg_list_pane_g1

0x5134,	// (0x00005134) bg_list_pane_g2_ParamLimits

0x5134,	// (0x00005134) bg_list_pane_g2

0x5147,	// (0x00005147) bg_list_pane_g3_ParamLimits

0x5147,	// (0x00005147) bg_list_pane_g3

0x5159,	// (0x00005159) bg_list_pane_g4_ParamLimits

0x5159,	// (0x00005159) bg_list_pane_g4

0xd084,	// (0x0000d084) bg_list_pane_g5_ParamLimits

0xd084,	// (0x0000d084) bg_list_pane_g5

0x0004,

0xf20f,	// (0x0000f20f) bg_list_pane_g_ParamLimits

0xf20f,	// (0x0000f20f) bg_list_pane_g

0xd00f,	// (0x0000d00f) list_double2_graphic_large_graphic_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double2_graphic_large_graphic_pane

0xd00f,	// (0x0000d00f) list_double2_graphic_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double2_graphic_pane

0xd00f,	// (0x0000d00f) list_double2_large_graphic_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double2_large_graphic_pane

0xd00f,	// (0x0000d00f) list_double2_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double2_pane

0xd00f,	// (0x0000d00f) list_double_graphic_heading_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_graphic_heading_pane

0xd00f,	// (0x0000d00f) list_double_graphic_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_graphic_pane

0xd00f,	// (0x0000d00f) list_double_heading_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_heading_pane

0xd00f,	// (0x0000d00f) list_double_large_graphic_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_large_graphic_pane

0xd00f,	// (0x0000d00f) list_double_number_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_number_pane

0xd00f,	// (0x0000d00f) list_double_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_pane

0xd00f,	// (0x0000d00f) list_double_time_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_double_time_pane

0xd00f,	// (0x0000d00f) list_setting_number_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_setting_number_pane

0xd00f,	// (0x0000d00f) list_setting_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_setting_pane

0xd021,	// (0x0000d021) list_single_2graphic_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_2graphic_pane

0xd021,	// (0x0000d021) list_single_graphic_heading_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_graphic_heading_pane

0xd021,	// (0x0000d021) list_single_graphic_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_graphic_pane

0xd021,	// (0x0000d021) list_single_heading_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_heading_pane

0xd00f,	// (0x0000d00f) list_single_large_graphic_pane_ParamLimits

0xd00f,	// (0x0000d00f) list_single_large_graphic_pane

0xd021,	// (0x0000d021) list_single_number_heading_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_number_heading_pane

0xd021,	// (0x0000d021) list_single_number_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_number_pane

0xd021,	// (0x0000d021) list_single_pane_ParamLimits

0xd021,	// (0x0000d021) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x350f,	// (0x0000350f) list_single_pane_g1_ParamLimits

0x350f,	// (0x0000350f) list_single_pane_g1

0x351b,	// (0x0000351b) list_single_pane_g2_ParamLimits

0x351b,	// (0x0000351b) list_single_pane_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_single_pane_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_single_pane_g

0x596a,	// (0x0000596a) list_single_pane_t1_ParamLimits

0x596a,	// (0x0000596a) list_single_pane_t1

0x350f,	// (0x0000350f) list_single_number_pane_g1_ParamLimits

0x350f,	// (0x0000350f) list_single_number_pane_g1

0x351b,	// (0x0000351b) list_single_number_pane_g2_ParamLimits

0x351b,	// (0x0000351b) list_single_number_pane_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_single_number_pane_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_single_number_pane_g

0x3605,	// (0x00003605) list_single_number_pane_t1_ParamLimits

0x3605,	// (0x00003605) list_single_number_pane_t1

0xce51,	// (0x0000ce51) list_single_number_pane_t2_ParamLimits

0xce51,	// (0x0000ce51) list_single_number_pane_t2

0x0001,

0xf1f2,	// (0x0000f1f2) list_single_number_pane_t_ParamLimits

0xf1f2,	// (0x0000f1f2) list_single_number_pane_t

0x711b,	// (0x0000711b) list_single_graphic_pane_g1_ParamLimits

0x711b,	// (0x0000711b) list_single_graphic_pane_g1

0x350f,	// (0x0000350f) list_single_graphic_pane_g2_ParamLimits

0x350f,	// (0x0000350f) list_single_graphic_pane_g2

0x351b,	// (0x0000351b) list_single_graphic_pane_g3_ParamLimits

0x351b,	// (0x0000351b) list_single_graphic_pane_g3

0x0002,

0xf09d,	// (0x0000f09d) list_single_graphic_pane_g_ParamLimits

0xf09d,	// (0x0000f09d) list_single_graphic_pane_g

0xb51a,	// (0x0000b51a) list_single_graphic_pane_t1_ParamLimits

0xb51a,	// (0x0000b51a) list_single_graphic_pane_t1

0x350f,	// (0x0000350f) list_single_heading_pane_g1_ParamLimits

0x350f,	// (0x0000350f) list_single_heading_pane_g1

0x351b,	// (0x0000351b) list_single_heading_pane_g2_ParamLimits

0x351b,	// (0x0000351b) list_single_heading_pane_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_single_heading_pane_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_single_heading_pane_g

0xb530,	// (0x0000b530) list_single_heading_pane_t1_ParamLimits

0xb530,	// (0x0000b530) list_single_heading_pane_t1

0xb546,	// (0x0000b546) list_single_heading_pane_t2_ParamLimits

0xb546,	// (0x0000b546) list_single_heading_pane_t2

0x0001,

0xf0a4,	// (0x0000f0a4) list_single_heading_pane_t_ParamLimits

0xf0a4,	// (0x0000f0a4) list_single_heading_pane_t

0x350f,	// (0x0000350f) list_single_number_heading_pane_g1_ParamLimits

0x350f,	// (0x0000350f) list_single_number_heading_pane_g1

0x351b,	// (0x0000351b) list_single_number_heading_pane_g2_ParamLimits

0x351b,	// (0x0000351b) list_single_number_heading_pane_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_single_number_heading_pane_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_single_number_heading_pane_g

0xb530,	// (0x0000b530) list_single_number_heading_pane_t1_ParamLimits

0xb530,	// (0x0000b530) list_single_number_heading_pane_t1

0xb558,	// (0x0000b558) list_single_number_heading_pane_t2_ParamLimits

0xb558,	// (0x0000b558) list_single_number_heading_pane_t2

0x5944,	// (0x00005944) list_single_number_heading_pane_t3_ParamLimits

0x5944,	// (0x00005944) list_single_number_heading_pane_t3

0x0002,

0xf0a9,	// (0x0000f0a9) list_single_number_heading_pane_t_ParamLimits

0xf0a9,	// (0x0000f0a9) list_single_number_heading_pane_t

0x3503,	// (0x00003503) list_single_graphic_heading_pane_g1_ParamLimits

0x3503,	// (0x00003503) list_single_graphic_heading_pane_g1

0xb56a,	// (0x0000b56a) list_single_graphic_heading_pane_g4_ParamLimits

0xb56a,	// (0x0000b56a) list_single_graphic_heading_pane_g4

0x351b,	// (0x0000351b) list_single_graphic_heading_pane_g5_ParamLimits

0x351b,	// (0x0000351b) list_single_graphic_heading_pane_g5

0x0002,

0xf0b0,	// (0x0000f0b0) list_single_graphic_heading_pane_g_ParamLimits

0xf0b0,	// (0x0000f0b0) list_single_graphic_heading_pane_g

0xb530,	// (0x0000b530) list_single_graphic_heading_pane_t1_ParamLimits

0xb530,	// (0x0000b530) list_single_graphic_heading_pane_t1

0xb57b,	// (0x0000b57b) list_single_graphic_heading_pane_t2_ParamLimits

0xb57b,	// (0x0000b57b) list_single_graphic_heading_pane_t2

0x0001,

0xf0b7,	// (0x0000f0b7) list_single_graphic_heading_pane_t_ParamLimits

0xf0b7,	// (0x0000f0b7) list_single_graphic_heading_pane_t

0x5980,	// (0x00005980) list_single_large_graphic_pane_g1_ParamLimits

0x5980,	// (0x00005980) list_single_large_graphic_pane_g1

0x598c,	// (0x0000598c) list_single_large_graphic_pane_g2_ParamLimits

0x598c,	// (0x0000598c) list_single_large_graphic_pane_g2

0x5998,	// (0x00005998) list_single_large_graphic_pane_g3_ParamLimits

0x5998,	// (0x00005998) list_single_large_graphic_pane_g3

0x0002,

0xab26,	// (0x0000ab26) list_single_large_graphic_pane_g_ParamLimits

0xab26,	// (0x0000ab26) list_single_large_graphic_pane_g

0x3e04,	// (0x00003e04) wait_border_pane_g2_copy1

0xb58d,	// (0x0000b58d) list_single_large_graphic_pane_g4_cp2

0x59a4,	// (0x000059a4) list_single_large_graphic_pane_t1_ParamLimits

0x59a4,	// (0x000059a4) list_single_large_graphic_pane_t1

0x23c3,	// (0x000023c3) list_double_pane_g1_ParamLimits

0x23c3,	// (0x000023c3) list_double_pane_g1

0xb595,	// (0x0000b595) list_double_pane_g2_ParamLimits

0xb595,	// (0x0000b595) list_double_pane_g2

0x0001,

0xf0bc,	// (0x0000f0bc) list_double_pane_g_ParamLimits

0xf0bc,	// (0x0000f0bc) list_double_pane_g

0xb5a1,	// (0x0000b5a1) list_double_pane_t1_ParamLimits

0xb5a1,	// (0x0000b5a1) list_double_pane_t1

0xb5b7,	// (0x0000b5b7) list_double_pane_t2_ParamLimits

0xb5b7,	// (0x0000b5b7) list_double_pane_t2

0x0001,

0xf0c1,	// (0x0000f0c1) list_double_pane_t_ParamLimits

0xf0c1,	// (0x0000f0c1) list_double_pane_t

0xb5c9,	// (0x0000b5c9) list_double2_pane_g1_ParamLimits

0xb5c9,	// (0x0000b5c9) list_double2_pane_g1

0x10dc,	// (0x000010dc) list_double2_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_double2_pane_g2

0x0001,

0xf0c6,	// (0x0000f0c6) list_double2_pane_g_ParamLimits

0xf0c6,	// (0x0000f0c6) list_double2_pane_g

0xb5da,	// (0x0000b5da) list_double2_pane_t1_ParamLimits

0xb5da,	// (0x0000b5da) list_double2_pane_t1

0xb5f0,	// (0x0000b5f0) list_double2_pane_t2_ParamLimits

0xb5f0,	// (0x0000b5f0) list_double2_pane_t2

0x0001,

0xf0cb,	// (0x0000f0cb) list_double2_pane_t_ParamLimits

0xf0cb,	// (0x0000f0cb) list_double2_pane_t

0x23c3,	// (0x000023c3) list_double_number_pane_g1_ParamLimits

0x23c3,	// (0x000023c3) list_double_number_pane_g1

0xb595,	// (0x0000b595) list_double_number_pane_g2_ParamLimits

0xb595,	// (0x0000b595) list_double_number_pane_g2

0x0001,

0xf0bc,	// (0x0000f0bc) list_double_number_pane_g_ParamLimits

0xf0bc,	// (0x0000f0bc) list_double_number_pane_g

0xb602,	// (0x0000b602) list_double_number_pane_t1_ParamLimits

0xb602,	// (0x0000b602) list_double_number_pane_t1

0xb614,	// (0x0000b614) list_double_number_pane_t2_ParamLimits

0xb614,	// (0x0000b614) list_double_number_pane_t2

0xb62a,	// (0x0000b62a) list_double_number_pane_t3_ParamLimits

0xb62a,	// (0x0000b62a) list_double_number_pane_t3

0x0002,

0xf0d0,	// (0x0000f0d0) list_double_number_pane_t_ParamLimits

0xf0d0,	// (0x0000f0d0) list_double_number_pane_t

0xb63c,	// (0x0000b63c) list_double_graphic_pane_g1_ParamLimits

0xb63c,	// (0x0000b63c) list_double_graphic_pane_g1

0xb648,	// (0x0000b648) list_double_graphic_pane_g2_ParamLimits

0xb648,	// (0x0000b648) list_double_graphic_pane_g2

0xb657,	// (0x0000b657) list_double_graphic_pane_g3_ParamLimits

0xb657,	// (0x0000b657) list_double_graphic_pane_g3

0x0003,

0xf0d7,	// (0x0000f0d7) list_double_graphic_pane_g_ParamLimits

0xf0d7,	// (0x0000f0d7) list_double_graphic_pane_g

0xb66f,	// (0x0000b66f) list_double_graphic_pane_t1_ParamLimits

0xb66f,	// (0x0000b66f) list_double_graphic_pane_t1

0xb685,	// (0x0000b685) list_double_graphic_pane_t2_ParamLimits

0xb685,	// (0x0000b685) list_double_graphic_pane_t2

0x0001,

0xf0e0,	// (0x0000f0e0) list_double_graphic_pane_t_ParamLimits

0xf0e0,	// (0x0000f0e0) list_double_graphic_pane_t

0xb697,	// (0x0000b697) list_double2_graphic_pane_g1_ParamLimits

0xb697,	// (0x0000b697) list_double2_graphic_pane_g1

0xb6a3,	// (0x0000b6a3) list_double2_graphic_pane_g2_ParamLimits

0xb6a3,	// (0x0000b6a3) list_double2_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3

0x0002,

0xf0e5,	// (0x0000f0e5) list_double2_graphic_pane_g_ParamLimits

0xf0e5,	// (0x0000f0e5) list_double2_graphic_pane_g

0xb6af,	// (0x0000b6af) list_double2_graphic_pane_t1_ParamLimits

0xb6af,	// (0x0000b6af) list_double2_graphic_pane_t1

0xb6c5,	// (0x0000b6c5) list_double2_graphic_pane_t2_ParamLimits

0xb6c5,	// (0x0000b6c5) list_double2_graphic_pane_t2

0x0001,

0xf0ec,	// (0x0000f0ec) list_double2_graphic_pane_t_ParamLimits

0xf0ec,	// (0x0000f0ec) list_double2_graphic_pane_t

0xb6d7,	// (0x0000b6d7) list_double_large_graphic_pane_g1_ParamLimits

0xb6d7,	// (0x0000b6d7) list_double_large_graphic_pane_g1

0xb702,	// (0x0000b702) list_double_large_graphic_pane_g2_ParamLimits

0xb702,	// (0x0000b702) list_double_large_graphic_pane_g2

0xb595,	// (0x0000b595) list_double_large_graphic_pane_g3_ParamLimits

0xb595,	// (0x0000b595) list_double_large_graphic_pane_g3

0xb713,	// (0x0000b713) list_double_large_graphic_pane_g4_ParamLimits

0xb713,	// (0x0000b713) list_double_large_graphic_pane_g4

0x0004,

0xf0f1,	// (0x0000f0f1) list_double_large_graphic_pane_g_ParamLimits

0xf0f1,	// (0x0000f0f1) list_double_large_graphic_pane_g

0xb725,	// (0x0000b725) list_double_large_graphic_pane_t1_ParamLimits

0xb725,	// (0x0000b725) list_double_large_graphic_pane_t1

0xb73e,	// (0x0000b73e) list_double_large_graphic_pane_t2_ParamLimits

0xb73e,	// (0x0000b73e) list_double_large_graphic_pane_t2

0x0001,

0xf0fc,	// (0x0000f0fc) list_double_large_graphic_pane_t_ParamLimits

0xf0fc,	// (0x0000f0fc) list_double_large_graphic_pane_t

0xb750,	// (0x0000b750) list_double2_large_graphic_pane_g1_ParamLimits

0xb750,	// (0x0000b750) list_double2_large_graphic_pane_g1

0xb5c9,	// (0x0000b5c9) list_double2_large_graphic_pane_g2_ParamLimits

0xb5c9,	// (0x0000b5c9) list_double2_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3

0x0002,

0xf101,	// (0x0000f101) list_double2_large_graphic_pane_g_ParamLimits

0xf101,	// (0x0000f101) list_double2_large_graphic_pane_g

0xb75c,	// (0x0000b75c) list_double2_large_graphic_pane_t1_ParamLimits

0xb75c,	// (0x0000b75c) list_double2_large_graphic_pane_t1

0xb772,	// (0x0000b772) list_double2_large_graphic_pane_t2_ParamLimits

0xb772,	// (0x0000b772) list_double2_large_graphic_pane_t2

0x0001,

0xf108,	// (0x0000f108) list_double2_large_graphic_pane_t_ParamLimits

0xf108,	// (0x0000f108) list_double2_large_graphic_pane_t

0xb784,	// (0x0000b784) list_double_heading_pane_g1_ParamLimits

0xb784,	// (0x0000b784) list_double_heading_pane_g1

0xb795,	// (0x0000b795) list_double_heading_pane_g2_ParamLimits

0xb795,	// (0x0000b795) list_double_heading_pane_g2

0x0001,

0xf10d,	// (0x0000f10d) list_double_heading_pane_g_ParamLimits

0xf10d,	// (0x0000f10d) list_double_heading_pane_g

0xb7a1,	// (0x0000b7a1) list_double_heading_pane_t1_ParamLimits

0xb7a1,	// (0x0000b7a1) list_double_heading_pane_t1

0xb7b7,	// (0x0000b7b7) list_double_heading_pane_t2_ParamLimits

0xb7b7,	// (0x0000b7b7) list_double_heading_pane_t2

0x0001,

0xf112,	// (0x0000f112) list_double_heading_pane_t_ParamLimits

0xf112,	// (0x0000f112) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xb784,	// (0x0000b784) list_double_graphic_heading_pane_g2_ParamLimits

0xb784,	// (0x0000b784) list_double_graphic_heading_pane_g2

0xb795,	// (0x0000b795) list_double_graphic_heading_pane_g3_ParamLimits

0xb795,	// (0x0000b795) list_double_graphic_heading_pane_g3

0x0002,

0xf117,	// (0x0000f117) list_double_graphic_heading_pane_g_ParamLimits

0xf117,	// (0x0000f117) list_double_graphic_heading_pane_g

0xb7c9,	// (0x0000b7c9) list_double_graphic_heading_pane_t1_ParamLimits

0xb7c9,	// (0x0000b7c9) list_double_graphic_heading_pane_t1

0xb7df,	// (0x0000b7df) list_double_graphic_heading_pane_t2_ParamLimits

0xb7df,	// (0x0000b7df) list_double_graphic_heading_pane_t2

0x0001,

0xf11e,	// (0x0000f11e) list_double_graphic_heading_pane_t_ParamLimits

0xf11e,	// (0x0000f11e) list_double_graphic_heading_pane_t

0xb702,	// (0x0000b702) list_double_time_pane_g1_ParamLimits

0xb702,	// (0x0000b702) list_double_time_pane_g1

0xb595,	// (0x0000b595) list_double_time_pane_g2_ParamLimits

0xb595,	// (0x0000b595) list_double_time_pane_g2

0x0001,

0xf123,	// (0x0000f123) list_double_time_pane_g_ParamLimits

0xf123,	// (0x0000f123) list_double_time_pane_g

0xb7f1,	// (0x0000b7f1) list_double_time_pane_t1_ParamLimits

0xb7f1,	// (0x0000b7f1) list_double_time_pane_t1

0xb807,	// (0x0000b807) list_double_time_pane_t2_ParamLimits

0xb807,	// (0x0000b807) list_double_time_pane_t2

0xb819,	// (0x0000b819) list_double_time_pane_t3_ParamLimits

0xb819,	// (0x0000b819) list_double_time_pane_t3

0xb82b,	// (0x0000b82b) list_double_time_pane_t4_ParamLimits

0xb82b,	// (0x0000b82b) list_double_time_pane_t4

0x0003,

0xf128,	// (0x0000f128) list_double_time_pane_t_ParamLimits

0xf128,	// (0x0000f128) list_double_time_pane_t

0xb6a3,	// (0x0000b6a3) list_setting_pane_g1_ParamLimits

0xb6a3,	// (0x0000b6a3) list_setting_pane_g1

0x10dc,	// (0x000010dc) list_setting_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_pane_g2

0x0001,

0xf131,	// (0x0000f131) list_setting_pane_g_ParamLimits

0xf131,	// (0x0000f131) list_setting_pane_g

0xb83d,	// (0x0000b83d) list_setting_pane_t1_ParamLimits

0xb83d,	// (0x0000b83d) list_setting_pane_t1

0xb854,	// (0x0000b854) list_setting_pane_t2_ParamLimits

0xb854,	// (0x0000b854) list_setting_pane_t2

0x0002,

0xf136,	// (0x0000f136) list_setting_pane_t_ParamLimits

0xf136,	// (0x0000f136) list_setting_pane_t

0xb893,	// (0x0000b893) set_value_pane_cp_ParamLimits

0xb893,	// (0x0000b893) set_value_pane_cp

0xb6a3,	// (0x0000b6a3) list_setting_number_pane_g1_ParamLimits

0xb6a3,	// (0x0000b6a3) list_setting_number_pane_g1

0x10dc,	// (0x000010dc) list_setting_number_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_number_pane_g2

0x0001,

0xf131,	// (0x0000f131) list_setting_number_pane_g_ParamLimits

0xf131,	// (0x0000f131) list_setting_number_pane_g

0xb89f,	// (0x0000b89f) list_setting_number_pane_t1_ParamLimits

0xb89f,	// (0x0000b89f) list_setting_number_pane_t1

0xb8b3,	// (0x0000b8b3) list_setting_number_pane_t2_ParamLimits

0xb8b3,	// (0x0000b8b3) list_setting_number_pane_t2

0xb8ca,	// (0x0000b8ca) list_setting_number_pane_t3_ParamLimits

0xb8ca,	// (0x0000b8ca) list_setting_number_pane_t3

0x0003,

0xf13d,	// (0x0000f13d) list_setting_number_pane_t_ParamLimits

0xf13d,	// (0x0000f13d) list_setting_number_pane_t

0xb893,	// (0x0000b893) set_value_pane_ParamLimits

0xb893,	// (0x0000b893) set_value_pane

0x123c,	// (0x0000123c) bg_set_opt_pane_ParamLimits

0x123c,	// (0x0000123c) bg_set_opt_pane

0x125d,	// (0x0000125d) set_value_pane_t1

0x126b,	// (0x0000126b) slider_set_pane_cp3

0x1274,	// (0x00001274) volume_small_pane_cp

0x127d,	// (0x0000127d) list_form_gen_pane

0x1286,	// (0x00001286) scroll_pane_cp8

0xb90d,	// (0x0000b90d) form_field_data_pane_ParamLimits

0xb90d,	// (0x0000b90d) form_field_data_pane

0xb924,	// (0x0000b924) form_field_data_wide_pane_ParamLimits

0xb924,	// (0x0000b924) form_field_data_wide_pane

0xb944,	// (0x0000b944) form_field_popup_pane_ParamLimits

0xb944,	// (0x0000b944) form_field_popup_pane

0xb95c,	// (0x0000b95c) form_field_popup_wide_pane_ParamLimits

0xb95c,	// (0x0000b95c) form_field_popup_wide_pane

0x1321,	// (0x00001321) form_field_slider_pane_ParamLimits

0x1321,	// (0x00001321) form_field_slider_pane

0x1334,	// (0x00001334) form_field_slider_wide_pane_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane

0x1347,	// (0x00001347) data_form_pane

0xb97d,	// (0x0000b97d) form_field_data_pane_t1

0x1375,	// (0x00001375) input_focus_pane

0x1383,	// (0x00001383) data_form_wide_pane

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xb997,	// (0x0000b997) form_field_popup_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp7

0x13f5,	// (0x000013f5) list_form_pane

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp8

0x141e,	// (0x0000141e) list_form_wide_pane

0xb9b9,	// (0x0000b9b9) form_field_slider_pane_t1_ParamLimits

0xb9b9,	// (0x0000b9b9) form_field_slider_pane_t1

0xb9d1,	// (0x0000b9d1) form_field_slider_pane_t2_ParamLimits

0xb9d1,	// (0x0000b9d1) form_field_slider_pane_t2

0x0001,

0xf146,	// (0x0000f146) form_field_slider_pane_t_ParamLimits

0xf146,	// (0x0000f146) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xb9e6,	// (0x0000b9e6) slider_cont_pane_ParamLimits

0xb9e6,	// (0x0000b9e6) slider_cont_pane

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1_ParamLimits

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2

0x0001,

0xa786,	// (0x0000a786) form_field_slider_wide_pane_t_ParamLimits

0xa786,	// (0x0000a786) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xb9fa,	// (0x0000b9fa) slider_cont_pane_cp1_ParamLimits

0xb9fa,	// (0x0000b9fa) slider_cont_pane_cp1

0xba0e,	// (0x0000ba0e) slider_form_pane_cp

0x14ad,	// (0x000014ad) input_focus_pane_g1

0x14b5,	// (0x000014b5) input_focus_pane_g2

0x14bd,	// (0x000014bd) input_focus_pane_g3

0x14c5,	// (0x000014c5) input_focus_pane_g4

0x14cd,	// (0x000014cd) input_focus_pane_g5

0x14d5,	// (0x000014d5) input_focus_pane_g6

0x14dd,	// (0x000014dd) input_focus_pane_g7

0x14e5,	// (0x000014e5) input_focus_pane_g8

0x14ed,	// (0x000014ed) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xa78b,	// (0x0000a78b) input_focus_pane_g

0x3e0d,	// (0x00003e0d) wait_border_pane_g3_copy1

0xba16,	// (0x0000ba16) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xcfe4,	// (0x0000cfe4) data_form_wide_pane_t1

0xba30,	// (0x0000ba30) list_form_graphic_pane_cp_ParamLimits

0xba30,	// (0x0000ba30) list_form_graphic_pane_cp

0x4f9d,	// (0x00004f9d) slider_form_pane_g1

0x4fa6,	// (0x00004fa6) slider_form_pane_g2

0x0006,

0xf200,	// (0x0000f200) slider_form_pane_g

0xba41,	// (0x0000ba41) list_form_graphic_pane_ParamLimits

0xba41,	// (0x0000ba41) list_form_graphic_pane

0x1545,	// (0x00001545) list_form_graphic_pane_g1

0x154d,	// (0x0000154d) list_form_graphic_pane_t1_ParamLimits

0x154d,	// (0x0000154d) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xba53,	// (0x0000ba53) find_pane_g1

0x156b,	// (0x0000156b) input_find_pane

0xba5c,	// (0x0000ba5c) input_find_pane_g1_ParamLimits

0xba5c,	// (0x0000ba5c) input_find_pane_g1

0xba68,	// (0x0000ba68) input_find_pane_t1_ParamLimits

0xba68,	// (0x0000ba68) input_find_pane_t1

0xba7d,	// (0x0000ba7d) input_find_pane_t2_ParamLimits

0xba7d,	// (0x0000ba7d) input_find_pane_t2

0x0001,

0xf14b,	// (0x0000f14b) input_find_pane_t_ParamLimits

0xf14b,	// (0x0000f14b) input_find_pane_t

0x15aa,	// (0x000015aa) input_focus_pane_cp5_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp5

0xba9e,	// (0x0000ba9e) bg_popup_window_pane_cp2_ParamLimits

0xba9e,	// (0x0000ba9e) bg_popup_window_pane_cp2

0xbaab,	// (0x0000baab) listscroll_menu_pane_ParamLimits

0xbaab,	// (0x0000baab) listscroll_menu_pane

0xbab7,	// (0x0000bab7) popup_submenu_window_ParamLimits

0xbab7,	// (0x0000bab7) popup_submenu_window

0x1607,	// (0x00001607) find_popup_pane_g1

0x160f,	// (0x0000160f) input_popup_find_pane_cp

0x15aa,	// (0x000015aa) input_focus_pane_cp4_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp4

0x1625,	// (0x00001625) input_popup_find_pane_t1_ParamLimits

0x1625,	// (0x00001625) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1653,	// (0x00001653) listscroll_popup_sub_pane

0x165b,	// (0x0000165b) list_submenu_pane_ParamLimits

0x165b,	// (0x0000165b) list_submenu_pane

0x166c,	// (0x0000166c) scroll_pane_cp4

0x1674,	// (0x00001674) list_single_popup_submenu_pane_ParamLimits

0x1674,	// (0x00001674) list_single_popup_submenu_pane

0x1688,	// (0x00001688) list_single_popup_submenu_pane_g1

0x1690,	// (0x00001690) list_single_popup_submenu_pane_t1_ParamLimits

0x1690,	// (0x00001690) list_single_popup_submenu_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1

0xbaef,	// (0x0000baef) tabs_2_active_pane_g1

0xbaf7,	// (0x0000baf7) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbaef,	// (0x0000baef) tabs_2_passive_pane_g1

0xbaf7,	// (0x0000baf7) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbb09,	// (0x0000bb09) tabs_2_long_active_pane_t1

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp4

0x206e,	// (0x0000206e) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbb1c,	// (0x0000bb1c) tabs_3_long_active_pane_t1

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp5

0x206e,	// (0x0000206e) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x1707,	// (0x00001707) listscroll_popup_fast_pane_ParamLimits

0x1707,	// (0x00001707) listscroll_popup_fast_pane

0x1716,	// (0x00001716) grid_popup_fast_pane_ParamLimits

0x1716,	// (0x00001716) grid_popup_fast_pane

0x1728,	// (0x00001728) scroll_pane_cp9_ParamLimits

0x1728,	// (0x00001728) scroll_pane_cp9

0x7181,	// (0x00007181) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7181,	// (0x00007181) list_single_graphic_hl_pane_t1_cp2

0x174c,	// (0x0000174c) input_focus_pane_cp20_ParamLimits

0x174c,	// (0x0000174c) input_focus_pane_cp20

0x175a,	// (0x0000175a) query_popup_data_pane_t1_ParamLimits

0x175a,	// (0x0000175a) query_popup_data_pane_t1

0x176d,	// (0x0000176d) query_popup_data_pane_t2_ParamLimits

0x176d,	// (0x0000176d) query_popup_data_pane_t2

0x17b3,	// (0x000017b3) query_popup_data_pane_t3_ParamLimits

0x17b3,	// (0x000017b3) query_popup_data_pane_t3

0x17f4,	// (0x000017f4) query_popup_data_pane_t4_ParamLimits

0x17f4,	// (0x000017f4) query_popup_data_pane_t4

0x1830,	// (0x00001830) query_popup_data_pane_t5_ParamLimits

0x1830,	// (0x00001830) query_popup_data_pane_t5

0x0004,

0xa7a5,	// (0x0000a7a5) query_popup_data_pane_t_ParamLimits

0xa7a5,	// (0x0000a7a5) query_popup_data_pane_t

0x14ad,	// (0x000014ad) bg_set_opt_pane_g1

0x14b5,	// (0x000014b5) bg_set_opt_pane_g2

0x14bd,	// (0x000014bd) bg_set_opt_pane_g3

0x14c5,	// (0x000014c5) bg_set_opt_pane_g4

0x14cd,	// (0x000014cd) bg_set_opt_pane_g5

0x14d5,	// (0x000014d5) bg_set_opt_pane_g6

0x14dd,	// (0x000014dd) bg_set_opt_pane_g7

0x14e5,	// (0x000014e5) bg_set_opt_pane_g8

0x14ed,	// (0x000014ed) bg_set_opt_pane_g9

0x0008,

0xa7b0,	// (0x0000a7b0) bg_set_opt_pane_g

0x20f7,	// (0x000020f7) control_top_pane_stacon_ParamLimits

0x20f7,	// (0x000020f7) control_top_pane_stacon

0x214a,	// (0x0000214a) signal_pane_stacon_ParamLimits

0x214a,	// (0x0000214a) signal_pane_stacon

0x216f,	// (0x0000216f) stacon_top_pane_g1_ParamLimits

0x216f,	// (0x0000216f) stacon_top_pane_g1

0x2191,	// (0x00002191) title_pane_stacon_ParamLimits

0x2191,	// (0x00002191) title_pane_stacon

0x21bb,	// (0x000021bb) uni_indicator_pane_stacon_ParamLimits

0x21bb,	// (0x000021bb) uni_indicator_pane_stacon

0x21d0,	// (0x000021d0) battery_pane_stacon_ParamLimits

0x21d0,	// (0x000021d0) battery_pane_stacon

0x2214,	// (0x00002214) control_bottom_pane_stacon_ParamLimits

0x2214,	// (0x00002214) control_bottom_pane_stacon

0x2237,	// (0x00002237) navi_pane_stacon_ParamLimits

0x2237,	// (0x00002237) navi_pane_stacon

0x225a,	// (0x0000225a) stacon_bottom_pane_g1_ParamLimits

0x225a,	// (0x0000225a) stacon_bottom_pane_g1

0x1867,	// (0x00001867) aid_levels_signal_lsc_ParamLimits

0x1867,	// (0x00001867) aid_levels_signal_lsc

0x187e,	// (0x0000187e) signal_pane_stacon_g1_ParamLimits

0x187e,	// (0x0000187e) signal_pane_stacon_g1

0x1892,	// (0x00001892) signal_pane_stacon_g2_ParamLimits

0x1892,	// (0x00001892) signal_pane_stacon_g2

0x0001,

0xa7c3,	// (0x0000a7c3) signal_pane_stacon_g_ParamLimits

0xa7c3,	// (0x0000a7c3) signal_pane_stacon_g

0x18d4,	// (0x000018d4) title_pane_stacon_t1_ParamLimits

0x18d4,	// (0x000018d4) title_pane_stacon_t1

0x18f9,	// (0x000018f9) uni_indicator_pane_stacon_g1

0x1903,	// (0x00001903) uni_indicator_pane_stacon_g2

0x190d,	// (0x0000190d) uni_indicator_pane_stacon_g3

0x1917,	// (0x00001917) uni_indicator_pane_stacon_g4

0x0003,

0xa7cf,	// (0x0000a7cf) uni_indicator_pane_stacon_g

0x1921,	// (0x00001921) control_top_pane_stacon_g1

0x1929,	// (0x00001929) control_top_pane_stacon_t1_ParamLimits

0x1929,	// (0x00001929) control_top_pane_stacon_t1

0x1960,	// (0x00001960) aid_levels_battery_lsc_ParamLimits

0x1960,	// (0x00001960) aid_levels_battery_lsc

0x1978,	// (0x00001978) battery_pane_stacon_g1_ParamLimits

0x1978,	// (0x00001978) battery_pane_stacon_g1

0x198b,	// (0x0000198b) battery_pane_stacon_g2_ParamLimits

0x198b,	// (0x0000198b) battery_pane_stacon_g2

0x0001,

0xa7d8,	// (0x0000a7d8) battery_pane_stacon_g_ParamLimits

0xa7d8,	// (0x0000a7d8) battery_pane_stacon_g

0x19c9,	// (0x000019c9) navi_icon_pane_stacon

0x19dd,	// (0x000019dd) navi_navi_pane_stacon

0x19c9,	// (0x000019c9) navi_text_pane_stacon

0x1921,	// (0x00001921) control_bottom_pane_stacon_g1

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1_ParamLimits

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1

0xbb2e,	// (0x0000bb2e) grid_app_pane_ParamLimits

0xbb2e,	// (0x0000bb2e) grid_app_pane

0xbb66,	// (0x0000bb66) scroll_pane_cp15_ParamLimits

0xbb66,	// (0x0000bb66) scroll_pane_cp15

0xbb83,	// (0x0000bb83) cell_app_pane_ParamLimits

0xbb83,	// (0x0000bb83) cell_app_pane

0xbbc8,	// (0x0000bbc8) cell_app_pane_g1_ParamLimits

0xbbc8,	// (0x0000bbc8) cell_app_pane_g1

0x1ac3,	// (0x00001ac3) cell_app_pane_g2_ParamLimits

0x1ac3,	// (0x00001ac3) cell_app_pane_g2

0x0001,

0xf150,	// (0x0000f150) cell_app_pane_g_ParamLimits

0xf150,	// (0x0000f150) cell_app_pane_g

0x1acf,	// (0x00001acf) cell_app_pane_t1_ParamLimits

0x1acf,	// (0x00001acf) cell_app_pane_t1

0x1ae1,	// (0x00001ae1) grid_highlight_pane_ParamLimits

0x1ae1,	// (0x00001ae1) grid_highlight_pane

0x14ad,	// (0x000014ad) cell_highlight_pane_g1

0x14b5,	// (0x000014b5) cell_highlight_pane_g2

0x14bd,	// (0x000014bd) cell_highlight_pane_g3

0x14c5,	// (0x000014c5) cell_highlight_pane_g4

0x14cd,	// (0x000014cd) cell_highlight_pane_g5

0x14d5,	// (0x000014d5) cell_highlight_pane_g6

0x14dd,	// (0x000014dd) cell_highlight_pane_g7

0x14e5,	// (0x000014e5) cell_highlight_pane_g8

0x14ed,	// (0x000014ed) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xa78b,	// (0x0000a78b) cell_highlight_pane_g

0x1b05,	// (0x00001b05) bg_scroll_pane

0x1b24,	// (0x00001b24) scroll_handle_pane

0x1b75,	// (0x00001b75) scroll_bg_pane_g1

0x1b8a,	// (0x00001b8a) scroll_bg_pane_g2

0x1ba2,	// (0x00001ba2) scroll_bg_pane_g3

0x0002,

0xa7e2,	// (0x0000a7e2) scroll_bg_pane_g

0x1bb7,	// (0x00001bb7) scroll_handle_focus_pane_ParamLimits

0x1bb7,	// (0x00001bb7) scroll_handle_focus_pane

0x1b75,	// (0x00001b75) scroll_handle_pane_g1

0x1bc4,	// (0x00001bc4) scroll_handle_pane_g2

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g3

0x0002,

0xa7e9,	// (0x0000a7e9) scroll_handle_pane_g

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21

0x1bd8,	// (0x00001bd8) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bd8,	// (0x00001bd8) popup_fep_japan_predictive_window_t1

0x1bf2,	// (0x00001bf2) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bf2,	// (0x00001bf2) popup_fep_japan_predictive_window_t2

0x1c25,	// (0x00001c25) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c25,	// (0x00001c25) popup_fep_japan_predictive_window_t3

0x0002,

0xa7f0,	// (0x0000a7f0) popup_fep_japan_predictive_window_t_ParamLimits

0xa7f0,	// (0x0000a7f0) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c5c,	// (0x00001c5c) listscroll_japin_cand_pane

0x1c64,	// (0x00001c64) popup_fep_japan_candidate_window_t1

0x1c72,	// (0x00001c72) candidate_pane_ParamLimits

0x1c72,	// (0x00001c72) candidate_pane

0x1c84,	// (0x00001c84) scroll_pane_cp30

0x1c8c,	// (0x00001c8c) list_single_popup_jap_candidate_pane_ParamLimits

0x1c8c,	// (0x00001c8c) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1ca1,	// (0x00001ca1) list_single_popup_jap_candidate_pane_t1

0x1cb0,	// (0x00001cb0) level_1_signal

0x1cbd,	// (0x00001cbd) level_2_signal

0x1cca,	// (0x00001cca) level_3_signal

0x1cd7,	// (0x00001cd7) level_4_signal

0x1ce4,	// (0x00001ce4) level_5_signal

0x1cf1,	// (0x00001cf1) level_6_signal

0x1cfe,	// (0x00001cfe) level_7_signal

0x1cb0,	// (0x00001cb0) level_1_battery

0x1cbd,	// (0x00001cbd) level_2_battery

0x1cca,	// (0x00001cca) level_3_battery

0x1cd7,	// (0x00001cd7) level_4_battery

0x1ce4,	// (0x00001ce4) level_5_battery

0x1cf1,	// (0x00001cf1) level_6_battery

0x1cfe,	// (0x00001cfe) level_7_battery

0x1d42,	// (0x00001d42) list_menu_pane_ParamLimits

0x1d42,	// (0x00001d42) list_menu_pane

0x1d53,	// (0x00001d53) scroll_pane_cp25_ParamLimits

0x1d53,	// (0x00001d53) scroll_pane_cp25

0x1d6c,	// (0x00001d6c) list_double2_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double2_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double2_large_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double2_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double2_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_large_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_large_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_number_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_number_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_pane_cp2

0xbc04,	// (0x0000bc04) list_single_2graphic_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_2graphic_pane_cp2

0xbc04,	// (0x0000bc04) list_single_graphic_heading_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_graphic_heading_pane_cp2

0xbc04,	// (0x0000bc04) list_single_graphic_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_graphic_pane_cp2

0xbc04,	// (0x0000bc04) list_single_heading_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_heading_pane_cp2

0x1da9,	// (0x00001da9) list_single_large_graphic_pane_cp2_ParamLimits

0x1da9,	// (0x00001da9) list_single_large_graphic_pane_cp2

0xbc04,	// (0x0000bc04) list_single_number_heading_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_number_heading_pane_cp2

0xbc04,	// (0x0000bc04) list_single_number_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_number_pane_cp2

0xbc04,	// (0x0000bc04) list_single_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_pane_cp2

0x1e5a,	// (0x00001e5a) bg_popup_sub_pane_cp22

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_g1

0x1ea9,	// (0x00001ea9) popup_side_volume_key_window_t1

0x1ec5,	// (0x00001ec5) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1ecd,	// (0x00001ecd) fep_china_uni_candidate_pane_ParamLimits

0x1ecd,	// (0x00001ecd) fep_china_uni_candidate_pane

0x1ee1,	// (0x00001ee1) fep_china_uni_entry_pane

0x1ef1,	// (0x00001ef1) popup_fep_china_uni_window_g1

0x1f0d,	// (0x00001f0d) fep_china_uni_entry_pane_g1

0x1f15,	// (0x00001f15) fep_china_uni_entry_pane_g2

0x0001,

0xa81d,	// (0x0000a81d) fep_china_uni_entry_pane_g

0x1f1d,	// (0x00001f1d) fep_entry_item_pane

0x1f27,	// (0x00001f27) fep_candidate_item_pane

0x1f2f,	// (0x00001f2f) fep_china_uni_candidate_pane_g1

0x1f37,	// (0x00001f37) fep_china_uni_candidate_pane_g2

0x1f3f,	// (0x00001f3f) fep_china_uni_candidate_pane_g3

0x1f47,	// (0x00001f47) fep_china_uni_candidate_pane_g4

0x0003,

0xa822,	// (0x0000a822) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f4f,	// (0x00001f4f) fep_entry_item_pane_t1_ParamLimits

0x1f4f,	// (0x00001f4f) fep_entry_item_pane_t1

0x1f65,	// (0x00001f65) fep_candidate_item_pane_t1_ParamLimits

0x1f65,	// (0x00001f65) fep_candidate_item_pane_t1

0x1f7a,	// (0x00001f7a) fep_candidate_item_pane_t2_ParamLimits

0x1f7a,	// (0x00001f7a) fep_candidate_item_pane_t2

0x0001,

0xa82b,	// (0x0000a82b) fep_candidate_item_pane_t_ParamLimits

0xa82b,	// (0x0000a82b) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1f8c,	// (0x00001f8c) level_1_signal_lsc

0x1f95,	// (0x00001f95) level_2_signal_lsc

0x1f9e,	// (0x00001f9e) level_3_signal_lsc

0x1fa7,	// (0x00001fa7) level_4_signal_lsc

0x1fb0,	// (0x00001fb0) level_5_signal_lsc

0x1fb9,	// (0x00001fb9) level_6_signal_lsc

0x1fc2,	// (0x00001fc2) level_7_signal_lsc

0x1fc2,	// (0x00001fc2) level_1_battery_lsc

0x1fcb,	// (0x00001fcb) level_2_battery_lsc

0x1fd4,	// (0x00001fd4) level_3_battery_lsc

0x1fdd,	// (0x00001fdd) level_4_battery_lsc

0x1fe6,	// (0x00001fe6) level_5_battery_lsc

0x1fef,	// (0x00001fef) level_6_battery_lsc

0x1f8c,	// (0x00001f8c) level_7_battery_lsc

0x1ff8,	// (0x00001ff8) scroll_handle_focus_pane_g1

0x2001,	// (0x00002001) scroll_handle_focus_pane_g2

0x200a,	// (0x0000200a) scroll_handle_focus_pane_g3

0x0002,

0xa830,	// (0x0000a830) scroll_handle_focus_pane_g

0xbc64,	// (0x0000bc64) list_single_2graphic_pane_g1_ParamLimits

0xbc64,	// (0x0000bc64) list_single_2graphic_pane_g1

0xb56a,	// (0x0000b56a) list_single_2graphic_pane_g2_ParamLimits

0xb56a,	// (0x0000b56a) list_single_2graphic_pane_g2

0x351b,	// (0x0000351b) list_single_2graphic_pane_g3_ParamLimits

0x351b,	// (0x0000351b) list_single_2graphic_pane_g3

0xbc70,	// (0x0000bc70) list_single_2graphic_pane_g4_ParamLimits

0xbc70,	// (0x0000bc70) list_single_2graphic_pane_g4

0x0003,

0xf15a,	// (0x0000f15a) list_single_2graphic_pane_g_ParamLimits

0xf15a,	// (0x0000f15a) list_single_2graphic_pane_g

0xbc7c,	// (0x0000bc7c) list_single_2graphic_pane_t1_ParamLimits

0xbc7c,	// (0x0000bc7c) list_single_2graphic_pane_t1

0xbcaa,	// (0x0000bcaa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbcaa,	// (0x0000bcaa) list_double2_graphic_large_graphic_pane_g1

0xb5c9,	// (0x0000b5c9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5c9,	// (0x0000b5c9) list_double2_graphic_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3

0xbcbc,	// (0x0000bcbc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbcbc,	// (0x0000bcbc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf163,	// (0x0000f163) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf163,	// (0x0000f163) list_double2_graphic_large_graphic_pane_g

0xbcc8,	// (0x0000bcc8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbcc8,	// (0x0000bcc8) list_double2_graphic_large_graphic_pane_t1

0xbcde,	// (0x0000bcde) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbcde,	// (0x0000bcde) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf16c,	// (0x0000f16c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf16c,	// (0x0000f16c) list_double2_graphic_large_graphic_pane_t

0x2322,	// (0x00002322) popup_fast_swap_window_ParamLimits

0x2322,	// (0x00002322) popup_fast_swap_window

0x233e,	// (0x0000233e) popup_side_volume_key_window

0x235a,	// (0x0000235a) stacon_top_pane

0x2364,	// (0x00002364) status_pane_ParamLimits

0x2364,	// (0x00002364) status_pane

0x235a,	// (0x0000235a) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1286,	// (0x00001286) scroll_pane_cp121

0x127d,	// (0x0000127d) set_content_pane

0x20bd,	// (0x000020bd) bg_active_tab_pane_g1_cp1

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp1

0x20c6,	// (0x000020c6) bg_active_tab_pane_g3_cp1

0x20bd,	// (0x000020bd) bg_passive_tab_pane_g1_cp1

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp1

0x20c6,	// (0x000020c6) bg_passive_tab_pane_g3_cp1

0xbcf0,	// (0x0000bcf0) bg_active_tab_pane_g1_cp2

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp2

0xbcf9,	// (0x0000bcf9) bg_active_tab_pane_g3_cp2

0xbcf0,	// (0x0000bcf0) bg_passive_tab_pane_g1_cp2

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp2

0xbcf9,	// (0x0000bcf9) bg_passive_tab_pane_g3_cp2

0xbd02,	// (0x0000bd02) bg_active_tab_pane_g1_cp3

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp3

0xbd0b,	// (0x0000bd0b) bg_active_tab_pane_g3_cp3

0xbd02,	// (0x0000bd02) bg_passive_tab_pane_g1_cp3

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp3

0xbd0b,	// (0x0000bd0b) bg_passive_tab_pane_g3_cp3

0xbd14,	// (0x0000bd14) bg_active_tab_pane_g1_cp4

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp4

0xbd1d,	// (0x0000bd1d) bg_active_tab_pane_g3_cp4

0xbd14,	// (0x0000bd14) bg_passive_tab_pane_g1_cp4

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp4

0xbd1d,	// (0x0000bd1d) bg_passive_tab_pane_g3_cp4

0x2276,	// (0x00002276) bg_active_tab_pane_g1_cp5

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp5

0x227f,	// (0x0000227f) bg_active_tab_pane_g3_cp5

0x2276,	// (0x00002276) bg_passive_tab_pane_g1_cp5

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp5

0x227f,	// (0x0000227f) bg_passive_tab_pane_g3_cp5

0xbd26,	// (0x0000bd26) list_set_graphic_pane_ParamLimits

0xbd26,	// (0x0000bd26) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbd38,	// (0x0000bd38) list_set_graphic_pane_g1_ParamLimits

0xbd38,	// (0x0000bd38) list_set_graphic_pane_g1

0xbd44,	// (0x0000bd44) list_set_graphic_pane_g2_ParamLimits

0xbd44,	// (0x0000bd44) list_set_graphic_pane_g2

0x0001,

0xf171,	// (0x0000f171) list_set_graphic_pane_g_ParamLimits

0xf171,	// (0x0000f171) list_set_graphic_pane_g

0x0009,

0xaba4,	// (0x0000aba4) volume_small_pane_cp_g

0x22d5,	// (0x000022d5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22d5,	// (0x000022d5) list_double2_large_graphic_pane_g1_cp2

0x22e1,	// (0x000022e1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22e1,	// (0x000022e1) list_double2_large_graphic_pane_g2_cp2

0x22f2,	// (0x000022f2) list_double2_large_graphic_pane_g3_cp2

0x22fa,	// (0x000022fa) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22fa,	// (0x000022fa) list_double2_large_graphic_pane_t1_cp2

0x2310,	// (0x00002310) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2310,	// (0x00002310) list_double2_large_graphic_pane_t2_cp2

0x4a4a,	// (0x00004a4a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a4a,	// (0x00004a4a) list_double_large_graphic_pane_g1_cp2

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_g2_cp2

0x2480,	// (0x00002480) list_double_large_graphic_pane_g3_cp2

0x4a6c,	// (0x00004a6c) list_double_large_graphic_pane_g4_cp

0x4a74,	// (0x00004a74) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a74,	// (0x00004a74) list_double_large_graphic_pane_t1_cp2

0x4a8b,	// (0x00004a8b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a8b,	// (0x00004a8b) list_double_large_graphic_pane_t2_cp2

0x2372,	// (0x00002372) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_graphic_pane_g1_cp2

0x2380,	// (0x00002380) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2380,	// (0x00002380) list_double2_graphic_pane_g2_cp2

0x2391,	// (0x00002391) list_double2_graphic_pane_g3_cp2

0x239b,	// (0x0000239b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x239b,	// (0x0000239b) list_double2_graphic_pane_t1_cp2

0x23b1,	// (0x000023b1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b1,	// (0x000023b1) list_double2_graphic_pane_t2_cp2

0x23c3,	// (0x000023c3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_single_number_heading_pane_g1_cp2

0x23cf,	// (0x000023cf) list_single_number_heading_pane_g2_cp2

0x23d7,	// (0x000023d7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23d7,	// (0x000023d7) list_single_number_heading_pane_t1_cp2

0x23ed,	// (0x000023ed) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23ed,	// (0x000023ed) list_single_number_heading_pane_t2_cp2

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t3_cp2

0x23c3,	// (0x000023c3) list_single_heading_pane_g1_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_single_heading_pane_g1_cp2

0x23cf,	// (0x000023cf) list_single_heading_pane_g2_cp2

0x23d7,	// (0x000023d7) list_single_heading_pane_t1_cp2_ParamLimits

0x23d7,	// (0x000023d7) list_single_heading_pane_t1_cp2

0x4852,	// (0x00004852) list_single_heading_pane_t2_cp2_ParamLimits

0x4852,	// (0x00004852) list_single_heading_pane_t2_cp2

0x4794,	// (0x00004794) list_double_graphic_pane_g1_cp2_ParamLimits

0x4794,	// (0x00004794) list_double_graphic_pane_g1_cp2

0x47a0,	// (0x000047a0) list_double_graphic_pane_g2_cp2_ParamLimits

0x47a0,	// (0x000047a0) list_double_graphic_pane_g2_cp2

0x47af,	// (0x000047af) list_double_graphic_pane_g3_cp2

0x47b7,	// (0x000047b7) list_double_graphic_pane_t1_cp2_ParamLimits

0x47b7,	// (0x000047b7) list_double_graphic_pane_t1_cp2

0x47cd,	// (0x000047cd) list_double_graphic_pane_t2_cp2_ParamLimits

0x47cd,	// (0x000047cd) list_double_graphic_pane_t2_cp2

0x2474,	// (0x00002474) list_double_number_pane_g1_cp2_ParamLimits

0x2474,	// (0x00002474) list_double_number_pane_g1_cp2

0x2480,	// (0x00002480) list_double_number_pane_g2_cp2

0x4758,	// (0x00004758) list_double_number_pane_t1_cp2_ParamLimits

0x4758,	// (0x00004758) list_double_number_pane_t1_cp2

0x476c,	// (0x0000476c) list_double_number_pane_t2_cp2_ParamLimits

0x476c,	// (0x0000476c) list_double_number_pane_t2_cp2

0x4782,	// (0x00004782) list_double_number_pane_t3_cp2_ParamLimits

0x4782,	// (0x00004782) list_double_number_pane_t3_cp2

0x4630,	// (0x00004630) list_single_graphic_pane_g1_cp2_ParamLimits

0x4630,	// (0x00004630) list_single_graphic_pane_g1_cp2

0x24d8,	// (0x000024d8) list_single_graphic_pane_g2_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_graphic_pane_g2_cp2

0x24e4,	// (0x000024e4) list_single_graphic_pane_g3_cp2

0x4606,	// (0x00004606) list_single_graphic_pane_t1_cp2_ParamLimits

0x4606,	// (0x00004606) list_single_graphic_pane_t1_cp2

0x24d8,	// (0x000024d8) list_single_number_pane_g1_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_number_pane_g1_cp2

0x24e4,	// (0x000024e4) list_single_number_pane_g2_cp2

0x4606,	// (0x00004606) list_single_number_pane_t1_cp2_ParamLimits

0x4606,	// (0x00004606) list_single_number_pane_t1_cp2

0x461c,	// (0x0000461c) list_single_number_pane_t2_cp2_ParamLimits

0x461c,	// (0x0000461c) list_single_number_pane_t2_cp2

0x22e1,	// (0x000022e1) list_double2_pane_g1_cp2_ParamLimits

0x22e1,	// (0x000022e1) list_double2_pane_g1_cp2

0x22f2,	// (0x000022f2) list_double2_pane_g2_cp2

0x244c,	// (0x0000244c) list_double2_pane_t1_cp2_ParamLimits

0x244c,	// (0x0000244c) list_double2_pane_t1_cp2

0x2462,	// (0x00002462) list_double2_pane_t2_cp2_ParamLimits

0x2462,	// (0x00002462) list_double2_pane_t2_cp2

0x2474,	// (0x00002474) list_double_pane_g1_cp2_ParamLimits

0x2474,	// (0x00002474) list_double_pane_g1_cp2

0x2480,	// (0x00002480) list_double_pane_g2_cp2

0x2488,	// (0x00002488) list_double_pane_t1_cp2_ParamLimits

0x2488,	// (0x00002488) list_double_pane_t1_cp2

0x249e,	// (0x0000249e) list_double_pane_t2_cp2_ParamLimits

0x249e,	// (0x0000249e) list_double_pane_t2_cp2

0x24c8,	// (0x000024c8) list_single_pane_cp2_g3

0x24d8,	// (0x000024d8) list_single_pane_g1_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_pane_g1_cp2

0x24e4,	// (0x000024e4) list_single_pane_g2_cp2

0x24ec,	// (0x000024ec) list_single_pane_t1_cp2_ParamLimits

0x24ec,	// (0x000024ec) list_single_pane_t1_cp2

0x2504,	// (0x00002504) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2504,	// (0x00002504) list_single_large_graphic_pane_g1_cp2

0x2510,	// (0x00002510) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2510,	// (0x00002510) list_single_large_graphic_pane_g2_cp2

0x251c,	// (0x0000251c) list_single_large_graphic_pane_g3_cp2

0x2524,	// (0x00002524) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2524,	// (0x00002524) list_single_large_graphic_pane_g4_cp1

0x253e,	// (0x0000253e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x253e,	// (0x0000253e) list_single_large_graphic_pane_t1_cp2

0x447f,	// (0x0000447f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x447f,	// (0x0000447f) list_single_graphic_heading_pane_g1_cp2

0x444c,	// (0x0000444c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x444c,	// (0x0000444c) list_single_graphic_heading_pane_g4_cp2

0x24e4,	// (0x000024e4) list_single_graphic_heading_pane_g5_cp2

0x448b,	// (0x0000448b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x448b,	// (0x0000448b) list_single_graphic_heading_pane_t1_cp2

0x44a1,	// (0x000044a1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44a1,	// (0x000044a1) list_single_graphic_heading_pane_t2_cp2

0x4440,	// (0x00004440) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4440,	// (0x00004440) list_single_2graphic_pane_g1_cp2

0x444c,	// (0x0000444c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x444c,	// (0x0000444c) list_single_2graphic_pane_g2_cp2

0x24e4,	// (0x000024e4) list_single_2graphic_pane_g3_cp2

0x445d,	// (0x0000445d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x445d,	// (0x0000445d) list_single_2graphic_pane_g4_cp2

0x4469,	// (0x00004469) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4469,	// (0x00004469) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4018,	// (0x00004018) list_highlight_pane_g1_cp1

0x4020,	// (0x00004020) list_highlight_pane_g2_cp1

0x4028,	// (0x00004028) list_highlight_pane_g3_cp1

0x4030,	// (0x00004030) list_highlight_pane_g4_cp1

0x4038,	// (0x00004038) list_highlight_pane_g5_cp1

0x4040,	// (0x00004040) list_highlight_pane_g6_cp1

0x4048,	// (0x00004048) list_highlight_pane_g7_cp1

0x4050,	// (0x00004050) list_highlight_pane_g8_cp1

0x4058,	// (0x00004058) list_highlight_pane_g9_cp1

0xcb7c,	// (0x0000cb7c) form_field_slider_pane_t3

0xcb8a,	// (0x0000cb8a) form_field_slider_pane_t4

0x3f54,	// (0x00003f54) slider_form_pane_ParamLimits

0x3f54,	// (0x00003f54) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x489c,	// (0x0000489c) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xa9dc,	// (0x0000a9dc) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2554,	// (0x00002554) text_digital

0x2563,	// (0x00002563) text_primary

0x2572,	// (0x00002572) text_primary_small

0x2581,	// (0x00002581) text_secondary

0x2590,	// (0x00002590) text_title

0x518b,	// (0x0000518b) bg_passive_tab_pane_g1_cp3_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp3_srt

0x5194,	// (0x00005194) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x519d,	// (0x0000519d) tabs_4_active_pane_srt_g1

0xd098,	// (0x0000d098) tabs_4_active_pane_srt_t1_ParamLimits

0xd098,	// (0x0000d098) tabs_4_active_pane_srt_t1

0x518b,	// (0x0000518b) bg_active_tab_pane_g1_cp3_copy1

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp3_copy1

0x5194,	// (0x00005194) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp4_srt

0x4d58,	// (0x00004d58) bg_passive_tab_pane_g1_cp4_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp4_srt

0x4d61,	// (0x00004d61) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xce79,	// (0x0000ce79) tabs_2_long_active_pane_srt_t1_ParamLimits

0xce79,	// (0x0000ce79) tabs_2_long_active_pane_srt_t1

0x4d58,	// (0x00004d58) bg_active_tab_pane_g1_cp4_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp4_srt

0x4d61,	// (0x00004d61) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp5_srt

0x2276,	// (0x00002276) bg_passive_tab_pane_g1_cp5_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp5_srt

0x227f,	// (0x0000227f) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xce63,	// (0x0000ce63) tabs_3_long_active_pane_srt_t1_ParamLimits

0xce63,	// (0x0000ce63) tabs_3_long_active_pane_srt_t1

0x2276,	// (0x00002276) bg_active_tab_pane_g1_cp5_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp5_srt

0x227f,	// (0x0000227f) bg_active_tab_pane_g3_cp5_srt

0x4d38,	// (0x00004d38) navi_text_pane_srt_t1

0x4d30,	// (0x00004d30) navi_icon_pane_srt_g1

0x280c,	// (0x0000280c) midp_editing_number_pane_srt

0x259f,	// (0x0000259f) midp_ticker_pane_srt

0x2814,	// (0x00002814) midp_ticker_pane_srt_g1

0x281c,	// (0x0000281c) midp_ticker_pane_srt_g2

0x0001,

0xa86d,	// (0x0000a86d) midp_ticker_pane_srt_g

0x2824,	// (0x00002824) midp_ticker_pane_srt_t1

0x4d21,	// (0x00004d21) midp_editing_number_pane_t1_copy1

0xbd68,	// (0x0000bd68) listscroll_midp_pane

0xbd68,	// (0x0000bd68) midp_form_pane

0x2615,	// (0x00002615) midp_info_popup_window_ParamLimits

0x2615,	// (0x00002615) midp_info_popup_window

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50

0x3c81,	// (0x00003c81) listscroll_midp_info_pane_ParamLimits

0x3c81,	// (0x00003c81) listscroll_midp_info_pane

0x3c69,	// (0x00003c69) listscroll_form_midp_pane_ParamLimits

0x3c69,	// (0x00003c69) listscroll_form_midp_pane

0x3c75,	// (0x00003c75) scroll_bar_cp050

0xcb70,	// (0x0000cb70) list_midp_pane

0x5e43,	// (0x00005e43) signal_pane_g2_cp

0x3b83,	// (0x00003b83) listscroll_midp_info_pane_t1_ParamLimits

0x3b83,	// (0x00003b83) listscroll_midp_info_pane_t1

0x3b9b,	// (0x00003b9b) listscroll_midp_info_pane_t2_ParamLimits

0x3b9b,	// (0x00003b9b) listscroll_midp_info_pane_t2

0x3bd9,	// (0x00003bd9) listscroll_midp_info_pane_t3_ParamLimits

0x3bd9,	// (0x00003bd9) listscroll_midp_info_pane_t3

0x3c13,	// (0x00003c13) listscroll_midp_info_pane_t4_ParamLimits

0x3c13,	// (0x00003c13) listscroll_midp_info_pane_t4

0x0003,

0xa917,	// (0x0000a917) listscroll_midp_info_pane_t_ParamLimits

0xa917,	// (0x0000a917) listscroll_midp_info_pane_t

0x166c,	// (0x0000166c) scroll_pane_cp21

0x3b21,	// (0x00003b21) form_midp_field_choice_group_pane

0x3b2a,	// (0x00003b2a) form_midp_field_text_pane

0x3b69,	// (0x00003b69) form_midp_field_time_pane

0x3b71,	// (0x00003b71) form_midp_gauge_slider_pane

0x3b7a,	// (0x00003b7a) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcb57,	// (0x0000cb57) list_single_midp_pane_ParamLimits

0xcb57,	// (0x0000cb57) list_single_midp_pane

0xcb35,	// (0x0000cb35) form_midp_field_text_pane_t1

0x3805,	// (0x00003805) input_focus_pane_cp050

0x3ae1,	// (0x00003ae1) list_midp_form_text_pane

0x3a79,	// (0x00003a79) form_midp_field_choice_group_pane_t1

0x3a87,	// (0x00003a87) input_focus_pane_cp051

0x3a9b,	// (0x00003a9b) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a5d,	// (0x00003a5d) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a6b,	// (0x00003a6b) form_midp_field_time_pane_t2

0x0001,

0x26c3,	// (0x000026c3) aid_navinavi_width_2_pane

0xa912,	// (0x0000a912) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a1d,	// (0x00003a1d) form_midp_gauge_slider_pane_t1

0x3a2b,	// (0x00003a2b) form_midp_gauge_slider_pane_t2

0xcb19,	// (0x0000cb19) form_midp_gauge_slider_pane_t3

0xcb27,	// (0x0000cb27) form_midp_gauge_slider_pane_t4

0x0003,

0xf1b2,	// (0x0000f1b2) form_midp_gauge_slider_pane_t

0x3a55,	// (0x00003a55) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x39ea,	// (0x000039ea) form_midp_gauge_wait_pane_t1_ParamLimits

0x39ea,	// (0x000039ea) form_midp_gauge_wait_pane_t1

0x39fc,	// (0x000039fc) form_midp_gauge_wait_pane_t2_ParamLimits

0x39fc,	// (0x000039fc) form_midp_gauge_wait_pane_t2

0x0001,

0xa904,	// (0x0000a904) form_midp_gauge_wait_pane_t_ParamLimits

0xa904,	// (0x0000a904) form_midp_gauge_wait_pane_t

0x3a0e,	// (0x00003a0e) form_midp_wait_pane_ParamLimits

0x3a0e,	// (0x00003a0e) form_midp_wait_pane

0x39b4,	// (0x000039b4) form_midp_image_pane_g1

0x39bd,	// (0x000039bd) form_midp_image_pane_t1

0x39cc,	// (0x000039cc) form_midp_image_pane_t2

0x39db,	// (0x000039db) form_midp_image_pane_t3

0x0002,

0xa8fd,	// (0x0000a8fd) form_midp_image_pane_t

0x399c,	// (0x0000399c) list_single_midp_pane_g1

0x39a5,	// (0x000039a5) list_single_midp_pane_t1

0xcb04,	// (0x0000cb04) list_midp_form_item_pane_ParamLimits

0xcb04,	// (0x0000cb04) list_midp_form_item_pane

0x266b,	// (0x0000266b) list_midp_form_item_pane_t1

0x267a,	// (0x0000267a) midp_ticker_pane_g1

0x2686,	// (0x00002686) midp_ticker_pane_g2

0x0001,

0xa853,	// (0x0000a853) midp_ticker_pane_g

0xbe10,	// (0x0000be10) midp_ticker_pane_t1

0xd000,	// (0x0000d000) midp_editing_number_pane_t1

0x4ffb,	// (0x00004ffb) midp_editing_number_pane

0x500a,	// (0x0000500a) midp_ticker_pane

0x4ce9,	// (0x00004ce9) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cf1,	// (0x00004cf1) listscroll_ai_message_pane

0x4c73,	// (0x00004c73) ai_message_heading_pane_g1_ParamLimits

0x4c73,	// (0x00004c73) ai_message_heading_pane_g1

0x4c7f,	// (0x00004c7f) ai_message_heading_pane_g2_ParamLimits

0x4c7f,	// (0x00004c7f) ai_message_heading_pane_g2

0x4c8b,	// (0x00004c8b) ai_message_heading_pane_g3_ParamLimits

0x4c8b,	// (0x00004c8b) ai_message_heading_pane_g3

0x4c97,	// (0x00004c97) ai_message_heading_pane_g4_ParamLimits

0x4c97,	// (0x00004c97) ai_message_heading_pane_g4

0x0003,

0xaa3e,	// (0x0000aa3e) ai_message_heading_pane_g_ParamLimits

0xaa3e,	// (0x0000aa3e) ai_message_heading_pane_g

0x4ca3,	// (0x00004ca3) ai_message_heading_pane_t1_ParamLimits

0x4ca3,	// (0x00004ca3) ai_message_heading_pane_t1

0x4cbd,	// (0x00004cbd) ai_message_heading_pane_t2_ParamLimits

0x4cbd,	// (0x00004cbd) ai_message_heading_pane_t2

0x0001,

0xaa47,	// (0x0000aa47) ai_message_heading_pane_t_ParamLimits

0xaa47,	// (0x0000aa47) ai_message_heading_pane_t

0x4ccf,	// (0x00004ccf) bg_popup_heading_pane_cp1_ParamLimits

0x4ccf,	// (0x00004ccf) bg_popup_heading_pane_cp1

0x4c61,	// (0x00004c61) list_ai_message_pane_ParamLimits

0x4c61,	// (0x00004c61) list_ai_message_pane

0x166c,	// (0x0000166c) scroll_pane_cp10

0x4bad,	// (0x00004bad) list_ai_message_pane_g1

0x4bb5,	// (0x00004bb5) list_ai_message_pane_g2

0x0001,

0xaa1b,	// (0x0000aa1b) list_ai_message_pane_g

0x4bbd,	// (0x00004bbd) list_ai_message_pane_t1_ParamLimits

0x4bbd,	// (0x00004bbd) list_ai_message_pane_t1

0x4bd2,	// (0x00004bd2) list_ai_message_pane_t2_ParamLimits

0x4bd2,	// (0x00004bd2) list_ai_message_pane_t2

0x4be7,	// (0x00004be7) list_ai_message_pane_t3_ParamLimits

0x4be7,	// (0x00004be7) list_ai_message_pane_t3

0x4bfc,	// (0x00004bfc) list_ai_message_pane_t4_ParamLimits

0x4bfc,	// (0x00004bfc) list_ai_message_pane_t4

0x0003,

0xaa20,	// (0x0000aa20) list_ai_message_pane_t_ParamLimits

0xaa20,	// (0x0000aa20) list_ai_message_pane_t

0xce30,	// (0x0000ce30) cell_ai_soft_ind_pane_ParamLimits

0xce30,	// (0x0000ce30) cell_ai_soft_ind_pane

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1_ParamLimits

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26b1,	// (0x000026b1) text_secondary_cp56_ParamLimits

0x26b1,	// (0x000026b1) text_secondary_cp56

0x4b6d,	// (0x00004b6d) example_general_pane_ParamLimits

0x4b6d,	// (0x00004b6d) example_general_pane

0x4b79,	// (0x00004b79) example_parent_pane_g1_ParamLimits

0x4b79,	// (0x00004b79) example_parent_pane_g1

0x4b85,	// (0x00004b85) example_parent_pane_t1_ParamLimits

0x4b85,	// (0x00004b85) example_parent_pane_t1

0xc369,	// (0x0000c369) popup_preview_text_window_ParamLimits

0xc369,	// (0x0000c369) popup_preview_text_window

0x24d0,	// (0x000024d0) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x48a4,	// (0x000048a4) popup_preview_text_window_t1_ParamLimits

0x48a4,	// (0x000048a4) popup_preview_text_window_t1

0x48c2,	// (0x000048c2) popup_preview_text_window_t2_ParamLimits

0x48c2,	// (0x000048c2) popup_preview_text_window_t2

0x490b,	// (0x0000490b) popup_preview_text_window_t3_ParamLimits

0x490b,	// (0x0000490b) popup_preview_text_window_t3

0x4950,	// (0x00004950) popup_preview_text_window_t4_ParamLimits

0x4950,	// (0x00004950) popup_preview_text_window_t4

0x0004,

0xa9ef,	// (0x0000a9ef) popup_preview_text_window_t_ParamLimits

0xa9ef,	// (0x0000a9ef) popup_preview_text_window_t

0x49ce,	// (0x000049ce) scroll_pane_cp11

0x3677,	// (0x00003677) bg_popup_preview_window_pane_g1

0x4864,	// (0x00004864) bg_popup_preview_window_pane_g2

0x486c,	// (0x0000486c) bg_popup_preview_window_pane_g3

0x4874,	// (0x00004874) bg_popup_preview_window_pane_g4

0x487c,	// (0x0000487c) bg_popup_preview_window_pane_g5

0x4884,	// (0x00004884) bg_popup_preview_window_pane_g6

0x488c,	// (0x0000488c) bg_popup_preview_window_pane_g7

0x4894,	// (0x00004894) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc2e5,	// (0x0000c2e5) popup_midp_note_alarm_window_ParamLimits

0xc2e5,	// (0x0000c2e5) popup_midp_note_alarm_window

0x1347,	// (0x00001347) data_form_pane_ParamLimits

0xb973,	// (0x0000b973) form_field_data_pane_g1

0xb97d,	// (0x0000b97d) form_field_data_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_ParamLimits

0x1383,	// (0x00001383) data_form_wide_pane_ParamLimits

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbae1,	// (0x0000bae1) input_popup_find_pane_g1_ParamLimits

0xbae1,	// (0x0000bae1) input_popup_find_pane_g1

0x199c,	// (0x0000199c) aid_navi_side_left_pane

0x19b1,	// (0x000019b1) aid_navi_side_right_pane

0x4113,	// (0x00004113) bg_popup_window_pane_cp30_ParamLimits

0x4113,	// (0x00004113) bg_popup_window_pane_cp30

0x418d,	// (0x0000418d) popup_midp_note_alarm_window_g1_ParamLimits

0x418d,	// (0x0000418d) popup_midp_note_alarm_window_g1

0x41bd,	// (0x000041bd) popup_midp_note_alarm_window_t1_ParamLimits

0x41bd,	// (0x000041bd) popup_midp_note_alarm_window_t1

0x425e,	// (0x0000425e) popup_midp_note_alarm_window_t2_ParamLimits

0x425e,	// (0x0000425e) popup_midp_note_alarm_window_t2

0x430c,	// (0x0000430c) popup_midp_note_alarm_window_t3_ParamLimits

0x430c,	// (0x0000430c) popup_midp_note_alarm_window_t3

0x433e,	// (0x0000433e) popup_midp_note_alarm_window_t4_ParamLimits

0x433e,	// (0x0000433e) popup_midp_note_alarm_window_t4

0x4364,	// (0x00004364) popup_midp_note_alarm_window_t5_ParamLimits

0x4364,	// (0x00004364) popup_midp_note_alarm_window_t5

0x000a,

0xa98c,	// (0x0000a98c) popup_midp_note_alarm_window_t_ParamLimits

0xa98c,	// (0x0000a98c) popup_midp_note_alarm_window_t

0x4410,	// (0x00004410) wait_bar_pane_cp1_ParamLimits

0x4410,	// (0x00004410) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3df9,	// (0x00003df9) wait_border_pane_g1_copy1

0x13d5,	// (0x000013d5) form_field_popup_pane_g1

0xb997,	// (0x0000b997) form_field_popup_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_ParamLimits

0x13f5,	// (0x000013f5) list_form_pane_ParamLimits

0x1401,	// (0x00001401) form_field_popup_wide_pane_g1

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_ParamLimits

0x141e,	// (0x0000141e) list_form_wide_pane_ParamLimits

0x5217,	// (0x00005217) aid_size_cell_graphic_pane

0xba16,	// (0x0000ba16) data_form_pane_t1_ParamLimits

0xcfe4,	// (0x0000cfe4) data_form_wide_pane_t1_ParamLimits

0xc71e,	// (0x0000c71e) bg_status_flat_pane

0xb1af,	// (0x0000b1af) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf082,	// (0x0000f082) title_pane_t_ParamLimits

0x1cb0,	// (0x00001cb0) level_1_signal_ParamLimits

0x1cbd,	// (0x00001cbd) level_2_signal_ParamLimits

0x1cca,	// (0x00001cca) level_3_signal_ParamLimits

0x1cd7,	// (0x00001cd7) level_4_signal_ParamLimits

0x1ce4,	// (0x00001ce4) level_5_signal_ParamLimits

0x1cf1,	// (0x00001cf1) level_6_signal_ParamLimits

0x1cfe,	// (0x00001cfe) level_7_signal_ParamLimits

0x1cb0,	// (0x00001cb0) level_1_battery_ParamLimits

0x1cbd,	// (0x00001cbd) level_2_battery_ParamLimits

0x1cca,	// (0x00001cca) level_3_battery_ParamLimits

0x1cd7,	// (0x00001cd7) level_4_battery_ParamLimits

0x1ce4,	// (0x00001ce4) level_5_battery_ParamLimits

0x1cf1,	// (0x00001cf1) level_6_battery_ParamLimits

0x1cfe,	// (0x00001cfe) level_7_battery_ParamLimits

0x4018,	// (0x00004018) bg_status_flat_pane_g1

0x4020,	// (0x00004020) bg_status_flat_pane_g2

0x4028,	// (0x00004028) bg_status_flat_pane_g3

0x4030,	// (0x00004030) bg_status_flat_pane_g4

0x4038,	// (0x00004038) bg_status_flat_pane_g5

0x4040,	// (0x00004040) bg_status_flat_pane_g6

0x4048,	// (0x00004048) bg_status_flat_pane_g7

0xb243,	// (0x0000b243) tabs_3_active_pane_t1_ParamLimits

0xb243,	// (0x0000b243) tabs_3_passive_pane_t1_ParamLimits

0xb25d,	// (0x0000b25d) tabs_4_active_pane_t1_ParamLimits

0xb25d,	// (0x0000b25d) tabs_4_1_passive_pane_t1_ParamLimits

0xbaf7,	// (0x0000baf7) tabs_2_active_pane_t1_ParamLimits

0xbaf7,	// (0x0000baf7) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbb09,	// (0x0000bb09) tabs_2_long_active_pane_t1_ParamLimits

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp4_ParamLimits

0x3732,	// (0x00003732) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbb1c,	// (0x0000bb1c) tabs_3_long_active_pane_t1_ParamLimits

0x2b27,	// (0x00002b27) bg_passive_tab_pane_cp5_ParamLimits

0x3732,	// (0x00003732) list_single_midp_graphic_pane_t1

0xc71e,	// (0x0000c71e) bg_status_flat_pane_ParamLimits

0x325c,	// (0x0000325c) indicator_pane_cp2_ParamLimits

0x325c,	// (0x0000325c) indicator_pane_cp2

0xc895,	// (0x0000c895) navi_pane_srt_ParamLimits

0xc895,	// (0x0000c895) navi_pane_srt

0x33a4,	// (0x000033a4) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x259f,	// (0x0000259f) copy_highlight_pane

0x259f,	// (0x0000259f) cursor_graphics_pane

0x259f,	// (0x0000259f) graphic_within_text_pane

0x259f,	// (0x0000259f) link_highlight_pane

0x4991,	// (0x00004991) popup_preview_text_window_t5_ParamLimits

0x4991,	// (0x00004991) popup_preview_text_window_t5

0x26cb,	// (0x000026cb) cursor_digital_pane

0x26cb,	// (0x000026cb) cursor_primary_pane

0x26dc,	// (0x000026dc) cursor_primary_small_pane

0x26e4,	// (0x000026e4) cursor_secondary_pane

0x26ec,	// (0x000026ec) cursor_title_pane

0x26cb,	// (0x000026cb) link_highlight_digital_pane

0x26d3,	// (0x000026d3) link_highlight_primary_pane

0x26dc,	// (0x000026dc) link_highlight_primary_small_pane

0x26e4,	// (0x000026e4) link_highlight_secondary_pane

0x26ec,	// (0x000026ec) link_highlight_title_pane

0x26cb,	// (0x000026cb) copy_highlight_digital_pane

0x26cb,	// (0x000026cb) copy_highlight_primary_pane

0x26dc,	// (0x000026dc) copy_highlight_primary_small_pane

0x26e4,	// (0x000026e4) copy_highlight_secondary_pane

0x26ec,	// (0x000026ec) copy_highlight_title_pane

0x26e4,	// (0x000026e4) graphic_text_digital_pane

0x40b6,	// (0x000040b6) graphic_text_primary_pane

0x40bf,	// (0x000040bf) graphic_text_primary_small_pane

0x26dc,	// (0x000026dc) graphic_text_secondary_pane

0x26cb,	// (0x000026cb) graphic_text_title_pane

0xbe22,	// (0x0000be22) cursor_primary_pane_g1

0x40a8,	// (0x000040a8) cursor_text_primary_t1

0xcbac,	// (0x0000cbac) cursor_primary_small_pane_g1

0x409a,	// (0x0000409a) cursor_text_primary_small_t1

0xcba2,	// (0x0000cba2) cursor_primary_small_pane_g1_copy1

0x4082,	// (0x00004082) cursor_text_primary_small_t1_copy1

0x4060,	// (0x00004060) cursor_text_title_t1

0xcb98,	// (0x0000cb98) cursor_title_pane_g1

0xbe22,	// (0x0000be22) cursor_digital_pane_g1

0x26fe,	// (0x000026fe) cursor_text_digital_t1

0x2723,	// (0x00002723) link_highlight_primary_pane_g1

0x4009,	// (0x00004009) link_highlight_primary_pane_t1

0x270c,	// (0x0000270c) link_highlight_primary_small_pane_g1

0x2714,	// (0x00002714) link_highlight_primary_small_pane_t1

0x2723,	// (0x00002723) link_highlight_secondary_pane_g1

0x272b,	// (0x0000272b) link_highlight_secondary_pane_t1

0x3f7d,	// (0x00003f7d) link_highlight_title_pane_g1

0x3f85,	// (0x00003f85) link_highlight_title_pane_t1

0x3f66,	// (0x00003f66) link_highlight_digital_pane_g1

0x3f6e,	// (0x00003f6e) link_highlight_digital_pane_t1

0x3e3e,	// (0x00003e3e) copy_highlight_primary_pane_g1

0x3e46,	// (0x00003e46) copy_highlight_primary_pane_t1

0x3e18,	// (0x00003e18) copy_highlight_primary_small_pane_g1

0x3e2f,	// (0x00003e2f) copy_highlight_primary_small_pane_t1

0x273a,	// (0x0000273a) copy_highlight_secondary_pane_g1

0x2742,	// (0x00002742) copy_highlight_secondary_pane_t1

0x3e18,	// (0x00003e18) copy_highlight_title_pane_g1

0x3e20,	// (0x00003e20) copy_highlight_title_pane_t1

0x3e3e,	// (0x00003e3e) copy_highlight_digital_pane_g1

0x5499,	// (0x00005499) copy_highlight_digital_pane_t1

0x53ed,	// (0x000053ed) graphic_text_primary_pane_g1

0x547d,	// (0x0000547d) graphic_text_primary_pane_t1

0x548b,	// (0x0000548b) graphic_text_primary_pane_t2

0x0001,

0xaabb,	// (0x0000aabb) graphic_text_primary_pane_t

0x5459,	// (0x00005459) graphic_text_primary_small_pane_g1

0x5461,	// (0x00005461) graphic_text_primary_small_pane_t1

0x546f,	// (0x0000546f) graphic_text_primary_small_pane_t2

0x0001,

0xaab6,	// (0x0000aab6) graphic_text_primary_small_pane_t

0x5435,	// (0x00005435) graphic_text_secondary_pane_g1

0x543d,	// (0x0000543d) graphic_text_secondary_pane_t1

0x544b,	// (0x0000544b) graphic_text_secondary_pane_t2

0x0001,

0xaab1,	// (0x0000aab1) graphic_text_secondary_pane_t

0x5411,	// (0x00005411) graphic_text_title_pane_g1

0x5419,	// (0x00005419) graphic_text_title_pane_t1

0x5427,	// (0x00005427) graphic_text_title_pane_t2

0x0001,

0xaaac,	// (0x0000aaac) graphic_text_title_pane_t

0x53ed,	// (0x000053ed) graphic_text_digital_pane_g1

0x53f5,	// (0x000053f5) graphic_text_digital_pane_t1

0x5403,	// (0x00005403) graphic_text_digital_pane_t2

0x0001,

0xaaa7,	// (0x0000aaa7) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x53b8,	// (0x000053b8) navi_navi_icon_text_pane_srt

0x53c0,	// (0x000053c0) navi_navi_pane_srt_g1_ParamLimits

0x53c0,	// (0x000053c0) navi_navi_pane_srt_g1

0x53d2,	// (0x000053d2) navi_navi_pane_srt_g2_ParamLimits

0x53d2,	// (0x000053d2) navi_navi_pane_srt_g2

0x0001,

0xaaa2,	// (0x0000aaa2) navi_navi_pane_srt_g_ParamLimits

0xaaa2,	// (0x0000aaa2) navi_navi_pane_srt_g

0x53e4,	// (0x000053e4) navi_navi_tabs_pane_srt

0x53b8,	// (0x000053b8) navi_navi_text_pane_srt

0x53b8,	// (0x000053b8) navi_navi_volume_pane_srt

0x53a9,	// (0x000053a9) navi_navi_text_pane_srt_t1

0x5384,	// (0x00005384) navi_navi_volume_pane_srt_g1

0x538c,	// (0x0000538c) volume_small_pane_srt_ParamLimits

0x538c,	// (0x0000538c) volume_small_pane_srt

0x2751,	// (0x00002751) volume_small_pane_srt_g1_ParamLimits

0x2751,	// (0x00002751) volume_small_pane_srt_g1

0x2761,	// (0x00002761) volume_small_pane_srt_g2_ParamLimits

0x2761,	// (0x00002761) volume_small_pane_srt_g2

0x2772,	// (0x00002772) volume_small_pane_srt_g3_ParamLimits

0x2772,	// (0x00002772) volume_small_pane_srt_g3

0x2783,	// (0x00002783) volume_small_pane_srt_g4_ParamLimits

0x2783,	// (0x00002783) volume_small_pane_srt_g4

0x2794,	// (0x00002794) volume_small_pane_srt_g5_ParamLimits

0x2794,	// (0x00002794) volume_small_pane_srt_g5

0x27a5,	// (0x000027a5) volume_small_pane_srt_g6_ParamLimits

0x27a5,	// (0x000027a5) volume_small_pane_srt_g6

0x27b6,	// (0x000027b6) volume_small_pane_srt_g7_ParamLimits

0x27b6,	// (0x000027b6) volume_small_pane_srt_g7

0x27c7,	// (0x000027c7) volume_small_pane_srt_g8_ParamLimits

0x27c7,	// (0x000027c7) volume_small_pane_srt_g8

0x27d8,	// (0x000027d8) volume_small_pane_srt_g9_ParamLimits

0x27d8,	// (0x000027d8) volume_small_pane_srt_g9

0x27e9,	// (0x000027e9) volume_small_pane_srt_g10_ParamLimits

0x27e9,	// (0x000027e9) volume_small_pane_srt_g10

0x0009,

0xa858,	// (0x0000a858) volume_small_pane_srt_g_ParamLimits

0xa858,	// (0x0000a858) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x5372,	// (0x00005372) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5372,	// (0x00005372) navi_navi_icon_text_pane_srt_t1

0x40b6,	// (0x000040b6) navi_tabs_2_long_pane_srt

0x40b6,	// (0x000040b6) navi_tabs_2_pane_srt

0x40b6,	// (0x000040b6) navi_tabs_3_long_pane_srt

0x40b6,	// (0x000040b6) navi_tabs_3_pane_srt

0x40b6,	// (0x000040b6) navi_tabs_4_pane_srt

0x534a,	// (0x0000534a) tabs_2_active_pane_srt_ParamLimits

0x534a,	// (0x0000534a) tabs_2_active_pane_srt

0x535a,	// (0x0000535a) tabs_2_passive_pane_srt_ParamLimits

0x535a,	// (0x0000535a) tabs_2_passive_pane_srt

0x3805,	// (0x00003805) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3805,	// (0x00003805) bg_passive_tab_pane_cp1_srt

0x531e,	// (0x0000531e) bg_passive_tab_pane_g1_cp1_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp1_srt

0x5327,	// (0x00005327) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x5330,	// (0x00005330) tabs_2_active_pane_srt_g1

0xd114,	// (0x0000d114) tabs_2_active_pane_srt_t1_ParamLimits

0xd114,	// (0x0000d114) tabs_2_active_pane_srt_t1

0x531e,	// (0x0000531e) bg_active_tab_pane_g1_cp1_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp1_srt

0x5327,	// (0x00005327) bg_active_tab_pane_g3_cp1_srt

0x52eb,	// (0x000052eb) tabs_3_active_pane_srt_ParamLimits

0x52eb,	// (0x000052eb) tabs_3_active_pane_srt

0x52fc,	// (0x000052fc) tabs_3_passive_pane_cp_srt_ParamLimits

0x52fc,	// (0x000052fc) tabs_3_passive_pane_cp_srt

0x530d,	// (0x0000530d) tabs_3_passive_pane_srt_ParamLimits

0x530d,	// (0x0000530d) tabs_3_passive_pane_srt

0x3805,	// (0x00003805) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3805,	// (0x00003805) bg_passive_tab_pane_cp2_srt

0x27fa,	// (0x000027fa) bg_passive_tab_pane_g1_cp2_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp2_srt

0x2803,	// (0x00002803) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x52d1,	// (0x000052d1) tabs_3_active_pane_srt_g1

0xd0fe,	// (0x0000d0fe) tabs_3_active_pane_srt_t1_ParamLimits

0xd0fe,	// (0x0000d0fe) tabs_3_active_pane_srt_t1

0x27fa,	// (0x000027fa) bg_active_tab_pane_g1_cp2_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp2_srt

0x2803,	// (0x00002803) bg_active_tab_pane_g3_cp2_srt

0x5289,	// (0x00005289) tabs_4_active_pane_srt_ParamLimits

0x5289,	// (0x00005289) tabs_4_active_pane_srt

0x529b,	// (0x0000529b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x529b,	// (0x0000529b) tabs_4_passive_pane_cp2_srt

0x2aad,	// (0x00002aad) aid_size_cell_toolbar

0x4e41,	// (0x00004e41) main_idle_act_pane_ParamLimits

0x2ccc,	// (0x00002ccc) popup_large_graphic_colour_window_ParamLimits

0xc5e9,	// (0x0000c5e9) popup_toolbar_window_ParamLimits

0xc5e9,	// (0x0000c5e9) popup_toolbar_window

0x5047,	// (0x00005047) list_single_graphic_2heading_pane_ParamLimits

0x5047,	// (0x00005047) list_single_graphic_2heading_pane

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_prt_pane

0x2b27,	// (0x00002b27) bg_wml_button_pane_cp1_ParamLimits

0x2b27,	// (0x00002b27) bg_wml_button_pane_cp1

0xcb35,	// (0x0000cb35) form_midp_field_text_pane_t1_ParamLimits

0x3805,	// (0x00003805) input_focus_pane_cp050_ParamLimits

0x3ae1,	// (0x00003ae1) list_midp_form_text_pane_ParamLimits

0x3a87,	// (0x00003a87) input_focus_pane_cp051_ParamLimits

0x3a9b,	// (0x00003a9b) list_midp_choice_pane_ParamLimits

0xcad0,	// (0x0000cad0) list_single_2graphic_pane_cp3_ParamLimits

0xcad0,	// (0x0000cad0) list_single_2graphic_pane_cp3

0xcae4,	// (0x0000cae4) list_single_midp_graphic_pane_ParamLimits

0xcae4,	// (0x0000cae4) list_single_midp_graphic_pane

0x3503,	// (0x00003503) list_single_graphic_2heading_pane_g1_ParamLimits

0x3503,	// (0x00003503) list_single_graphic_2heading_pane_g1

0x350f,	// (0x0000350f) list_single_graphic_2heading_pane_g4_ParamLimits

0x350f,	// (0x0000350f) list_single_graphic_2heading_pane_g4

0x351b,	// (0x0000351b) list_single_graphic_2heading_pane_g5_ParamLimits

0x351b,	// (0x0000351b) list_single_graphic_2heading_pane_g5

0x0002,

0xa8ab,	// (0x0000a8ab) list_single_graphic_2heading_pane_g_ParamLimits

0xa8ab,	// (0x0000a8ab) list_single_graphic_2heading_pane_g

0x3527,	// (0x00003527) list_single_graphic_2heading_pane_t1_ParamLimits

0x3527,	// (0x00003527) list_single_graphic_2heading_pane_t1

0x353b,	// (0x0000353b) list_single_graphic_2heading_pane_t2_ParamLimits

0x353b,	// (0x0000353b) list_single_graphic_2heading_pane_t2

0x3557,	// (0x00003557) list_single_graphic_2heading_pane_t3_ParamLimits

0x3557,	// (0x00003557) list_single_graphic_2heading_pane_t3

0x0002,

0xa8b2,	// (0x0000a8b2) list_single_graphic_2heading_pane_t_ParamLimits

0xa8b2,	// (0x0000a8b2) list_single_graphic_2heading_pane_t

0x356f,	// (0x0000356f) bg_popup_sub_pane_cp2

0x3599,	// (0x00003599) grid_toobar_pane

0x35d5,	// (0x000035d5) cell_toolbar_pane_ParamLimits

0x35d5,	// (0x000035d5) cell_toolbar_pane

0x361b,	// (0x0000361b) cell_toolbar_pane_g1_ParamLimits

0x361b,	// (0x0000361b) cell_toolbar_pane_g1

0x362f,	// (0x0000362f) cell_toolbar_pane_g2_ParamLimits

0x362f,	// (0x0000362f) cell_toolbar_pane_g2

0x0001,

0xa8b9,	// (0x0000a8b9) cell_toolbar_pane_g_ParamLimits

0xa8b9,	// (0x0000a8b9) cell_toolbar_pane_g

0x3651,	// (0x00003651) grid_highlight_pane_cp2_ParamLimits

0x3651,	// (0x00003651) grid_highlight_pane_cp2

0x366b,	// (0x0000366b) toolbar_button_pane

0x3677,	// (0x00003677) toolbar_button_pane_g1

0x367f,	// (0x0000367f) toolbar_button_pane_g2

0x3687,	// (0x00003687) toolbar_button_pane_g3

0x368f,	// (0x0000368f) toolbar_button_pane_g4

0x3697,	// (0x00003697) toolbar_button_pane_g5

0x369f,	// (0x0000369f) toolbar_button_pane_g6

0x36a7,	// (0x000036a7) toolbar_button_pane_g7

0x36af,	// (0x000036af) toolbar_button_pane_g8

0x36b7,	// (0x000036b7) toolbar_button_pane_g9

0x0009,

0xa8be,	// (0x0000a8be) toolbar_button_pane_g

0x36c7,	// (0x000036c7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x36c7,	// (0x000036c7) list_single_2graphic_pane_g1_cp3

0xca32,	// (0x0000ca32) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca32,	// (0x0000ca32) list_single_2graphic_pane_g2_cp3

0x36e4,	// (0x000036e4) list_single_2graphic_pane_g3_cp3

0x206e,	// (0x0000206e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x206e,	// (0x0000206e) list_single_2graphic_pane_g4_cp3

0x36ec,	// (0x000036ec) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36ec,	// (0x000036ec) list_single_2graphic_pane_t1_cp3

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2

0x2ab5,	// (0x00002ab5) aid_zoom_text_primary

0x2abd,	// (0x00002abd) aid_zoom_text_secondary

0x28b7,	// (0x000028b7) status_small_pane_g7_ParamLimits

0x28b7,	// (0x000028b7) status_small_pane_g7

0x28da,	// (0x000028da) status_small_pane_t1_ParamLimits

0xb18b,	// (0x0000b18b) title_pane_g2

0x0003,

0xf079,	// (0x0000f079) title_pane_g

0xb413,	// (0x0000b413) aid_size_cell_colour_1_pane_ParamLimits

0xb413,	// (0x0000b413) aid_size_cell_colour_1_pane

0xb427,	// (0x0000b427) aid_size_cell_colour_2_pane_ParamLimits

0xb427,	// (0x0000b427) aid_size_cell_colour_2_pane

0xb43b,	// (0x0000b43b) aid_size_cell_colour_3_pane_ParamLimits

0xb43b,	// (0x0000b43b) aid_size_cell_colour_3_pane

0xb44f,	// (0x0000b44f) aid_size_cell_colour_4_pane_ParamLimits

0xb44f,	// (0x0000b44f) aid_size_cell_colour_4_pane

0x18a3,	// (0x000018a3) title_pane_stacon_g1_ParamLimits

0x18a3,	// (0x000018a3) title_pane_stacon_g1

0x3e9d,	// (0x00003e9d) popup_note_wait_window_g3_ParamLimits

0x3e9d,	// (0x00003e9d) popup_note_wait_window_g3

0x3f13,	// (0x00003f13) popup_note_wait_window_t5_ParamLimits

0x3f13,	// (0x00003f13) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc01b,	// (0x0000c01b) popup_feb_china_hwr_fs_window_ParamLimits

0xc01b,	// (0x0000c01b) popup_feb_china_hwr_fs_window

0xca43,	// (0x0000ca43) aid_size_cell_hwr_fs_ParamLimits

0xca43,	// (0x0000ca43) aid_size_cell_hwr_fs

0x3805,	// (0x00003805) bg_popup_sub_pane_cp3_ParamLimits

0x3805,	// (0x00003805) bg_popup_sub_pane_cp3

0xca58,	// (0x0000ca58) grid_hwr_fs_pane_ParamLimits

0xca58,	// (0x0000ca58) grid_hwr_fs_pane

0x3829,	// (0x00003829) linegrid_hwr_fs_pane_ParamLimits

0x3829,	// (0x00003829) linegrid_hwr_fs_pane

0xca70,	// (0x0000ca70) cell_hwr_fs_pane_ParamLimits

0xca70,	// (0x0000ca70) cell_hwr_fs_pane

0x385b,	// (0x0000385b) linegrid_hwr_fs_pane_g1_ParamLimits

0x385b,	// (0x0000385b) linegrid_hwr_fs_pane_g1

0xca96,	// (0x0000ca96) linegrid_hwr_fs_pane_g2_ParamLimits

0xca96,	// (0x0000ca96) linegrid_hwr_fs_pane_g2

0x3879,	// (0x00003879) linegrid_hwr_fs_pane_g3_ParamLimits

0x3879,	// (0x00003879) linegrid_hwr_fs_pane_g3

0x3885,	// (0x00003885) linegrid_hwr_fs_pane_g4_ParamLimits

0x3885,	// (0x00003885) linegrid_hwr_fs_pane_g4

0x389f,	// (0x0000389f) linegrid_hwr_fs_pane_g5_ParamLimits

0x389f,	// (0x0000389f) linegrid_hwr_fs_pane_g5

0x0004,

0xf19e,	// (0x0000f19e) linegrid_hwr_fs_pane_g_ParamLimits

0xf19e,	// (0x0000f19e) linegrid_hwr_fs_pane_g

0x38b5,	// (0x000038b5) cell_hwr_fs_pane_g1_ParamLimits

0x38b5,	// (0x000038b5) cell_hwr_fs_pane_g1

0x343a,	// (0x0000343a) cell_hwr_fs_pane_g2_ParamLimits

0x343a,	// (0x0000343a) cell_hwr_fs_pane_g2

0xcaa8,	// (0x0000caa8) cell_hwr_fs_pane_g3_ParamLimits

0xcaa8,	// (0x0000caa8) cell_hwr_fs_pane_g3

0xcab5,	// (0x0000cab5) cell_hwr_fs_pane_g4_ParamLimits

0xcab5,	// (0x0000cab5) cell_hwr_fs_pane_g4

0x0003,

0xf1a9,	// (0x0000f1a9) cell_hwr_fs_pane_g_ParamLimits

0xf1a9,	// (0x0000f1a9) cell_hwr_fs_pane_g

0xcac2,	// (0x0000cac2) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1653,	// (0x00001653) aid_inside_area_popup_secondary

0xcd06,	// (0x0000cd06) aid_inside_area_window_primary_ParamLimits

0xcd06,	// (0x0000cd06) aid_inside_area_window_primary

0x54a8,	// (0x000054a8) ai2_news_ticker_pane

0x54b0,	// (0x000054b0) aid_size_cell_ai1_link_ParamLimits

0x54b0,	// (0x000054b0) aid_size_cell_ai1_link

0xd12a,	// (0x0000d12a) popup_ai2_data_window_ParamLimits

0xd12a,	// (0x0000d12a) popup_ai2_data_window

0x54e0,	// (0x000054e0) popup_ai2_link_window_ParamLimits

0x54e0,	// (0x000054e0) popup_ai2_link_window

0x3805,	// (0x00003805) bg_popup_sub_pane_cp4_ParamLimits

0x3805,	// (0x00003805) bg_popup_sub_pane_cp4

0x54f4,	// (0x000054f4) grid_ai2_link_pane_ParamLimits

0x54f4,	// (0x000054f4) grid_ai2_link_pane

0x550b,	// (0x0000550b) popup_ai2_link_window_g1_ParamLimits

0x550b,	// (0x0000550b) popup_ai2_link_window_g1

0x5517,	// (0x00005517) popup_ai2_link_window_g2_ParamLimits

0x5517,	// (0x00005517) popup_ai2_link_window_g2

0x0001,

0xaac0,	// (0x0000aac0) popup_ai2_link_window_g_ParamLimits

0xaac0,	// (0x0000aac0) popup_ai2_link_window_g

0x5526,	// (0x00005526) ai2_mp_button_pane

0x552e,	// (0x0000552e) ai2_mp_volume_pane

0x3a87,	// (0x00003a87) bg_popup_sub_pane_cp5_ParamLimits

0x3a87,	// (0x00003a87) bg_popup_sub_pane_cp5

0x5536,	// (0x00005536) heading_ai2_gene_pane_ParamLimits

0x5536,	// (0x00005536) heading_ai2_gene_pane

0x5542,	// (0x00005542) list_ai2_gene_pane_ParamLimits

0x5542,	// (0x00005542) list_ai2_gene_pane

0x558a,	// (0x0000558a) cell_ai2_link_pane_ParamLimits

0x558a,	// (0x0000558a) cell_ai2_link_pane

0x55a0,	// (0x000055a0) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5670,	// (0x00005670) ai2_mp_volume_pane_g1

0x5678,	// (0x00005678) ai2_mp_volume_pane_g2

0xd154,	// (0x0000d154) list_ai2_gene_pane_t1

0x5680,	// (0x00005680) ai2_mp_volume_pane_g3

0x0002,

0xaad9,	// (0x0000aad9) ai2_mp_volume_pane_g

0x5688,	// (0x00005688) volume_small_pane_cp3

0x5691,	// (0x00005691) aid_size_cell_ai2_button

0x5699,	// (0x00005699) grid_ai2_button_pane

0x56a2,	// (0x000056a2) cell_ai2_button_pane_ParamLimits

0x56a2,	// (0x000056a2) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5630,	// (0x00005630) ai2_gene_pane_t1_ParamLimits

0x5630,	// (0x00005630) ai2_gene_pane_t1

0xbf91,	// (0x0000bf91) aid_height_parent_landscape

0xce90,	// (0x0000ce90) aid_height_set_list

0x4e41,	// (0x00004e41) aid_size_parent

0x5217,	// (0x00005217) aid_size_cell_graphic_pane_ParamLimits

0x5552,	// (0x00005552) popup_ai2_data_window_g1_ParamLimits

0x5552,	// (0x00005552) popup_ai2_data_window_g1

0x555e,	// (0x0000555e) ai2_news_ticker_pane_g1

0x5566,	// (0x00005566) ai2_news_ticker_pane_g2

0x0001,

0xaac5,	// (0x0000aac5) ai2_news_ticker_pane_g

0x556e,	// (0x0000556e) ai2_news_ticker_pane_t1

0x557c,	// (0x0000557c) ai2_news_ticker_pane_t2

0x0001,

0xaaca,	// (0x0000aaca) ai2_news_ticker_pane_t

0x55a9,	// (0x000055a9) heading_ai2_gene_pane_g1

0x55b1,	// (0x000055b1) heading_ai2_gene_pane_t1_ParamLimits

0x55b1,	// (0x000055b1) heading_ai2_gene_pane_t1

0x55c6,	// (0x000055c6) list_highlight_pane_cp6

0xd13e,	// (0x0000d13e) ai2_gene_pane_ParamLimits

0xd13e,	// (0x0000d13e) ai2_gene_pane

0xd162,	// (0x0000d162) list_ai2_gene_pane_t2

0x0001,

0xf21f,	// (0x0000f21f) list_ai2_gene_pane_t

0x5601,	// (0x00005601) list_highlight_pane_cp8_ParamLimits

0x5601,	// (0x00005601) list_highlight_pane_cp8

0x5612,	// (0x00005612) ai2_gene_pane_g1_ParamLimits

0x5612,	// (0x00005612) ai2_gene_pane_g1

0x5624,	// (0x00005624) ai2_gene_pane_g2_ParamLimits

0x5624,	// (0x00005624) ai2_gene_pane_g2

0x0001,

0xaad4,	// (0x0000aad4) ai2_gene_pane_g_ParamLimits

0xaad4,	// (0x0000aad4) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xbf4e,	// (0x0000bf4e) control_pane_t3_ParamLimits

0xbf4e,	// (0x0000bf4e) control_pane_t3

0x28cb,	// (0x000028cb) status_small_pane_g8_ParamLimits

0x28cb,	// (0x000028cb) status_small_pane_g8

0xc0b0,	// (0x0000c0b0) popup_find_window_ParamLimits

0xc31f,	// (0x0000c31f) popup_note_image_window_ParamLimits

0x3503,	// (0x00003503) list_double2_graphic_pane_vc_g1_ParamLimits

0x3503,	// (0x00003503) list_double2_graphic_pane_vc_g1

0x350f,	// (0x0000350f) list_double2_graphic_pane_vc_g2_ParamLimits

0x350f,	// (0x0000350f) list_double2_graphic_pane_vc_g2

0x351b,	// (0x0000351b) list_double2_graphic_pane_vc_g3_ParamLimits

0x351b,	// (0x0000351b) list_double2_graphic_pane_vc_g3

0x0002,

0xa8ab,	// (0x0000a8ab) list_double2_graphic_pane_vc_g_ParamLimits

0xa8ab,	// (0x0000a8ab) list_double2_graphic_pane_vc_g

0x3605,	// (0x00003605) list_double2_graphic_pane_vc_t1_ParamLimits

0x3605,	// (0x00003605) list_double2_graphic_pane_vc_t1

0x350f,	// (0x0000350f) list_single_heading_pane_vc_g1_ParamLimits

0x350f,	// (0x0000350f) list_single_heading_pane_vc_g1

0x351b,	// (0x0000351b) list_single_heading_pane_vc_g2_ParamLimits

0x351b,	// (0x0000351b) list_single_heading_pane_vc_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_single_heading_pane_vc_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_single_heading_pane_vc_g

0x3708,	// (0x00003708) list_single_heading_pane_vc_t1_ParamLimits

0x3708,	// (0x00003708) list_single_heading_pane_vc_t1

0x371e,	// (0x0000371e) list_single_heading_pane_vc_t2_ParamLimits

0x371e,	// (0x0000371e) list_single_heading_pane_vc_t2

0x0001,

0xa8d8,	// (0x0000a8d8) list_single_heading_pane_vc_t_ParamLimits

0xa8d8,	// (0x0000a8d8) list_single_heading_pane_vc_t

0x3748,	// (0x00003748) list_setting_number_pane_vc_g1_ParamLimits

0x3748,	// (0x00003748) list_setting_number_pane_vc_g1

0x3754,	// (0x00003754) list_setting_number_pane_vc_g2_ParamLimits

0x3754,	// (0x00003754) list_setting_number_pane_vc_g2

0x0001,

0xa8dd,	// (0x0000a8dd) list_setting_number_pane_vc_g_ParamLimits

0xa8dd,	// (0x0000a8dd) list_setting_number_pane_vc_g

0x3760,	// (0x00003760) list_setting_number_pane_vc_t1_ParamLimits

0x3760,	// (0x00003760) list_setting_number_pane_vc_t1

0x3774,	// (0x00003774) list_setting_number_pane_vc_t2_ParamLimits

0x3774,	// (0x00003774) list_setting_number_pane_vc_t2

0x3790,	// (0x00003790) list_setting_number_pane_vc_t3_ParamLimits

0x3790,	// (0x00003790) list_setting_number_pane_vc_t3

0x0002,

0xa8e2,	// (0x0000a8e2) list_setting_number_pane_vc_t_ParamLimits

0xa8e2,	// (0x0000a8e2) list_setting_number_pane_vc_t

0x37b6,	// (0x000037b6) set_value_pane_vc_ParamLimits

0x37b6,	// (0x000037b6) set_value_pane_vc

0x5047,	// (0x00005047) list_double2_graphic_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double2_graphic_pane_vc

0x5059,	// (0x00005059) list_double2_large_graphic_pane_vc_ParamLimits

0x5059,	// (0x00005059) list_double2_large_graphic_pane_vc

0x5047,	// (0x00005047) list_double2_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double2_pane_vc

0x5047,	// (0x00005047) list_double_graphic_heading_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double_graphic_heading_pane_vc

0x5047,	// (0x00005047) list_double_graphic_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double_graphic_pane_vc

0x5047,	// (0x00005047) list_double_heading_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double_heading_pane_vc

0x5059,	// (0x00005059) list_double_large_graphic_pane_vc_ParamLimits

0x5059,	// (0x00005059) list_double_large_graphic_pane_vc

0x5047,	// (0x00005047) list_double_number_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double_number_pane_vc

0x5047,	// (0x00005047) list_double_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double_pane_vc

0x5047,	// (0x00005047) list_double_time_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_double_time_pane_vc

0x5047,	// (0x00005047) list_setting_number_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_setting_number_pane_vc

0x5047,	// (0x00005047) list_setting_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_setting_pane_vc

0x5047,	// (0x00005047) list_single_graphic_heading_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_single_graphic_heading_pane_vc

0x5047,	// (0x00005047) list_single_heading_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_single_heading_pane_vc

0x5047,	// (0x00005047) list_single_number_heading_pane_vc_ParamLimits

0x5047,	// (0x00005047) list_single_number_heading_pane_vc

0x56d6,	// (0x000056d6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56d6,	// (0x000056d6) list_double_graphic_heading_pane_vc_g1

0x350f,	// (0x0000350f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x350f,	// (0x0000350f) list_double_graphic_heading_pane_vc_g2

0x351b,	// (0x0000351b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x351b,	// (0x0000351b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaae0,	// (0x0000aae0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaae0,	// (0x0000aae0) list_double_graphic_heading_pane_vc_g

0x56e2,	// (0x000056e2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56e2,	// (0x000056e2) list_double_graphic_heading_pane_vc_t1

0x3708,	// (0x00003708) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3708,	// (0x00003708) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaae7,	// (0x0000aae7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaae7,	// (0x0000aae7) list_double_graphic_heading_pane_vc_t

0x3748,	// (0x00003748) list_setting_pane_vc_g1_ParamLimits

0x3748,	// (0x00003748) list_setting_pane_vc_g1

0x3754,	// (0x00003754) list_setting_pane_vc_g2_ParamLimits

0x3754,	// (0x00003754) list_setting_pane_vc_g2

0x0001,

0xa8dd,	// (0x0000a8dd) list_setting_pane_vc_g_ParamLimits

0xa8dd,	// (0x0000a8dd) list_setting_pane_vc_g

0x58fa,	// (0x000058fa) list_setting_pane_vc_t1_ParamLimits

0x58fa,	// (0x000058fa) list_setting_pane_vc_t1

0x590e,	// (0x0000590e) list_setting_pane_vc_t2_ParamLimits

0x590e,	// (0x0000590e) list_setting_pane_vc_t2

0x0001,

0xab15,	// (0x0000ab15) list_setting_pane_vc_t_ParamLimits

0xab15,	// (0x0000ab15) list_setting_pane_vc_t

0x37b6,	// (0x000037b6) set_value_pane_cp_vc_ParamLimits

0x37b6,	// (0x000037b6) set_value_pane_cp_vc

0x350f,	// (0x0000350f) list_single_number_heading_pane_vc_g1_ParamLimits

0x350f,	// (0x0000350f) list_single_number_heading_pane_vc_g1

0x351b,	// (0x0000351b) list_single_number_heading_pane_vc_g2_ParamLimits

0x351b,	// (0x0000351b) list_single_number_heading_pane_vc_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_single_number_heading_pane_vc_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_single_number_heading_pane_vc_g

0x3708,	// (0x00003708) list_single_number_heading_pane_vc_t1_ParamLimits

0x3708,	// (0x00003708) list_single_number_heading_pane_vc_t1

0x5930,	// (0x00005930) list_single_number_heading_pane_vc_t2_ParamLimits

0x5930,	// (0x00005930) list_single_number_heading_pane_vc_t2

0x5944,	// (0x00005944) list_single_number_heading_pane_vc_t3_ParamLimits

0x5944,	// (0x00005944) list_single_number_heading_pane_vc_t3

0x0002,

0xab1a,	// (0x0000ab1a) list_single_number_heading_pane_vc_t_ParamLimits

0xab1a,	// (0x0000ab1a) list_single_number_heading_pane_vc_t

0x3503,	// (0x00003503) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3503,	// (0x00003503) list_single_graphic_heading_pane_vc_g1

0x350f,	// (0x0000350f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x350f,	// (0x0000350f) list_single_graphic_heading_pane_vc_g4

0x351b,	// (0x0000351b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x351b,	// (0x0000351b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa8ab,	// (0x0000a8ab) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa8ab,	// (0x0000a8ab) list_single_graphic_heading_pane_vc_g

0x3708,	// (0x00003708) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3708,	// (0x00003708) list_single_graphic_heading_pane_vc_t1

0x5956,	// (0x00005956) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5956,	// (0x00005956) list_single_graphic_heading_pane_vc_t2

0x0001,

0xab21,	// (0x0000ab21) list_single_graphic_heading_pane_vc_t_ParamLimits

0xab21,	// (0x0000ab21) list_single_graphic_heading_pane_vc_t

0x350f,	// (0x0000350f) list_double2_pane_vc_g1_ParamLimits

0x350f,	// (0x0000350f) list_double2_pane_vc_g1

0x351b,	// (0x0000351b) list_double2_pane_vc_g2_ParamLimits

0x351b,	// (0x0000351b) list_double2_pane_vc_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_double2_pane_vc_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_double2_pane_vc_g

0x596a,	// (0x0000596a) list_double2_pane_vc_t1_ParamLimits

0x596a,	// (0x0000596a) list_double2_pane_vc_t1

0x5980,	// (0x00005980) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5980,	// (0x00005980) list_double2_large_graphic_pane_vc_g1

0x598c,	// (0x0000598c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x598c,	// (0x0000598c) list_double2_large_graphic_pane_vc_g2

0x5998,	// (0x00005998) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5998,	// (0x00005998) list_double2_large_graphic_pane_vc_g3

0x0002,

0xab26,	// (0x0000ab26) list_double2_large_graphic_pane_vc_g_ParamLimits

0xab26,	// (0x0000ab26) list_double2_large_graphic_pane_vc_g

0x59a4,	// (0x000059a4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59a4,	// (0x000059a4) list_double2_large_graphic_pane_vc_t1

0x59ba,	// (0x000059ba) list_double_time_pane_vc_g1_ParamLimits

0x59ba,	// (0x000059ba) list_double_time_pane_vc_g1

0x59c6,	// (0x000059c6) list_double_time_pane_vc_g2_ParamLimits

0x59c6,	// (0x000059c6) list_double_time_pane_vc_g2

0x0001,

0xab2d,	// (0x0000ab2d) list_double_time_pane_vc_g_ParamLimits

0xab2d,	// (0x0000ab2d) list_double_time_pane_vc_g

0x59d2,	// (0x000059d2) list_double_time_pane_vc_t1_ParamLimits

0x59d2,	// (0x000059d2) list_double_time_pane_vc_t1

0x59eb,	// (0x000059eb) list_double_time_pane_vc_t2_ParamLimits

0x59eb,	// (0x000059eb) list_double_time_pane_vc_t2

0x5a06,	// (0x00005a06) list_double_time_pane_vc_t3_ParamLimits

0x5a06,	// (0x00005a06) list_double_time_pane_vc_t3

0x5a1e,	// (0x00005a1e) list_double_time_pane_vc_t4_ParamLimits

0x5a1e,	// (0x00005a1e) list_double_time_pane_vc_t4

0x0003,

0xab32,	// (0x0000ab32) list_double_time_pane_vc_t_ParamLimits

0xab32,	// (0x0000ab32) list_double_time_pane_vc_t

0x350f,	// (0x0000350f) list_double_pane_vc_g1_ParamLimits

0x350f,	// (0x0000350f) list_double_pane_vc_g1

0x351b,	// (0x0000351b) list_double_pane_vc_g2_ParamLimits

0x351b,	// (0x0000351b) list_double_pane_vc_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_double_pane_vc_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_double_pane_vc_g

0x5a32,	// (0x00005a32) list_double_pane_vc_t1_ParamLimits

0x5a32,	// (0x00005a32) list_double_pane_vc_t1

0x5a44,	// (0x00005a44) list_double_pane_vc_t2_ParamLimits

0x5a44,	// (0x00005a44) list_double_pane_vc_t2

0x0001,

0xab3b,	// (0x0000ab3b) list_double_pane_vc_t_ParamLimits

0xab3b,	// (0x0000ab3b) list_double_pane_vc_t

0x350f,	// (0x0000350f) list_double_number_pane_vc_g1_ParamLimits

0x350f,	// (0x0000350f) list_double_number_pane_vc_g1

0x351b,	// (0x0000351b) list_double_number_pane_vc_g2_ParamLimits

0x351b,	// (0x0000351b) list_double_number_pane_vc_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_double_number_pane_vc_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_double_number_pane_vc_g

0x5a5c,	// (0x00005a5c) list_double_number_pane_vc_t1_ParamLimits

0x5a5c,	// (0x00005a5c) list_double_number_pane_vc_t1

0x5a70,	// (0x00005a70) list_double_number_pane_vc_t2_ParamLimits

0x5a70,	// (0x00005a70) list_double_number_pane_vc_t2

0x5a44,	// (0x00005a44) list_double_number_pane_vc_t3_ParamLimits

0x5a44,	// (0x00005a44) list_double_number_pane_vc_t3

0x0002,

0xab40,	// (0x0000ab40) list_double_number_pane_vc_t_ParamLimits

0xab40,	// (0x0000ab40) list_double_number_pane_vc_t

0x5a82,	// (0x00005a82) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a82,	// (0x00005a82) list_double_large_graphic_pane_vc_g1

0x5a8e,	// (0x00005a8e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a8e,	// (0x00005a8e) list_double_large_graphic_pane_vc_g2

0x5998,	// (0x00005998) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5998,	// (0x00005998) list_double_large_graphic_pane_vc_g3

0x5a9d,	// (0x00005a9d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a9d,	// (0x00005a9d) list_double_large_graphic_pane_vc_g4

0x0003,

0xab47,	// (0x0000ab47) list_double_large_graphic_pane_vc_g_ParamLimits

0xab47,	// (0x0000ab47) list_double_large_graphic_pane_vc_g

0x5aa9,	// (0x00005aa9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5aa9,	// (0x00005aa9) list_double_large_graphic_pane_vc_t1

0x5abb,	// (0x00005abb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5abb,	// (0x00005abb) list_double_large_graphic_pane_vc_t2

0x0001,

0xab50,	// (0x0000ab50) list_double_large_graphic_pane_vc_t_ParamLimits

0xab50,	// (0x0000ab50) list_double_large_graphic_pane_vc_t

0x350f,	// (0x0000350f) list_double_heading_pane_vc_g1_ParamLimits

0x350f,	// (0x0000350f) list_double_heading_pane_vc_g1

0x351b,	// (0x0000351b) list_double_heading_pane_vc_g2_ParamLimits

0x351b,	// (0x0000351b) list_double_heading_pane_vc_g2

0x0001,

0xa8d3,	// (0x0000a8d3) list_double_heading_pane_vc_g_ParamLimits

0xa8d3,	// (0x0000a8d3) list_double_heading_pane_vc_g

0x5ad4,	// (0x00005ad4) list_double_heading_pane_vc_t1_ParamLimits

0x5ad4,	// (0x00005ad4) list_double_heading_pane_vc_t1

0x3708,	// (0x00003708) list_double_heading_pane_vc_t2_ParamLimits

0x3708,	// (0x00003708) list_double_heading_pane_vc_t2

0x0001,

0xab55,	// (0x0000ab55) list_double_heading_pane_vc_t_ParamLimits

0xab55,	// (0x0000ab55) list_double_heading_pane_vc_t

0x3503,	// (0x00003503) list_double_graphic_pane_vc_g1_ParamLimits

0x3503,	// (0x00003503) list_double_graphic_pane_vc_g1

0x5ae8,	// (0x00005ae8) list_double_graphic_pane_vc_g2_ParamLimits

0x5ae8,	// (0x00005ae8) list_double_graphic_pane_vc_g2

0x5af7,	// (0x00005af7) list_double_graphic_pane_vc_g3_ParamLimits

0x5af7,	// (0x00005af7) list_double_graphic_pane_vc_g3

0x0002,

0xab5a,	// (0x0000ab5a) list_double_graphic_pane_vc_g_ParamLimits

0xab5a,	// (0x0000ab5a) list_double_graphic_pane_vc_g

0x5b03,	// (0x00005b03) list_double_graphic_pane_vc_t1_ParamLimits

0x5b03,	// (0x00005b03) list_double_graphic_pane_vc_t1

0x5a44,	// (0x00005a44) list_double_graphic_pane_vc_t2_ParamLimits

0x5a44,	// (0x00005a44) list_double_graphic_pane_vc_t2

0x0001,

0xab61,	// (0x0000ab61) list_double_graphic_pane_vc_t_ParamLimits

0xab61,	// (0x0000ab61) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xafd9,	// (0x0000afd9) aid_size_cell_touch_ParamLimits

0xafd9,	// (0x0000afd9) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb124,	// (0x0000b124) touch_pane_ParamLimits

0xb124,	// (0x0000b124) touch_pane

0x128f,	// (0x0000128f) button_value_adjust_pane_cp2

0x1297,	// (0x00001297) button_value_adjust_pane_cp4

0x12b9,	// (0x000012b9) form_field_data_pane_cp2

0xb93a,	// (0x0000b93a) form_field_data_wide_pane_cp2

0x1b05,	// (0x00001b05) bg_scroll_pane_ParamLimits

0x1b24,	// (0x00001b24) scroll_handle_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_sc2_down_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_sc2_down_pane

0x1b5f,	// (0x00001b5f) scroll_sc2_up_pane_ParamLimits

0x1b5f,	// (0x00001b5f) scroll_sc2_up_pane

0xd28d,	// (0x0000d28d) grid_wheel_folder_pane_g1_ParamLimits

0xd28d,	// (0x0000d28d) grid_wheel_folder_pane_g1

0x21f2,	// (0x000021f2) clock_nsta_pane_cp2_ParamLimits

0x21f2,	// (0x000021f2) clock_nsta_pane_cp2

0xbd68,	// (0x0000bd68) listscroll_midp_pane_ParamLimits

0xbd79,	// (0x0000bd79) midp_canvas_pane

0x2a9b,	// (0x00002a9b) nsta_clock_indic_pane

0x2af9,	// (0x00002af9) listscroll_form_pane_vc

0x2b15,	// (0x00002b15) listscroll_set_pane_vc_ParamLimits

0x2b15,	// (0x00002b15) listscroll_set_pane_vc

0xc746,	// (0x0000c746) clock_nsta_pane

0xc770,	// (0x0000c770) indicator_nsta_pane

0x356f,	// (0x0000356f) bg_popup_sub_pane_cp2_ParamLimits

0x3583,	// (0x00003583) find_pane_cp2_ParamLimits

0x3583,	// (0x00003583) find_pane_cp2

0x3599,	// (0x00003599) grid_toobar_pane_ParamLimits

0x37c4,	// (0x000037c4) list_form_gen_pane_vc_ParamLimits

0x37c4,	// (0x000037c4) list_form_gen_pane_vc

0x37da,	// (0x000037da) scroll_pane_cp8_vc_ParamLimits

0x37da,	// (0x000037da) scroll_pane_cp8_vc

0x38f3,	// (0x000038f3) data_form_wide_pane_vc_ParamLimits

0x38f3,	// (0x000038f3) data_form_wide_pane_vc

0x38ff,	// (0x000038ff) form_field_data_wide_pane_vc_g1

0x3907,	// (0x00003907) form_field_data_wide_pane_vc_t1_ParamLimits

0x3907,	// (0x00003907) form_field_data_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp6_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp6_vc

0xcb70,	// (0x0000cb70) list_midp_pane_ParamLimits

0x527d,	// (0x0000527d) scroll_pane_cp16_ParamLimits

0x527d,	// (0x0000527d) scroll_pane_cp16

0x3c95,	// (0x00003c95) button_value_adjust_pane_ParamLimits

0x3c95,	// (0x00003c95) button_value_adjust_pane

0xcea1,	// (0x0000cea1) button_value_adjust_pane_cp6_ParamLimits

0xcea1,	// (0x0000cea1) button_value_adjust_pane_cp6

0xcfbb,	// (0x0000cfbb) settings_code_pane_cp_ParamLimits

0xcfbb,	// (0x0000cfbb) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa802,	// (0x0000a802) cell_touch_pane_g

0xd170,	// (0x0000d170) cell_touch_pane_cp_ParamLimits

0xd170,	// (0x0000d170) cell_touch_pane_cp

0xd18c,	// (0x0000d18c) cell_touch_pane_ParamLimits

0xd18c,	// (0x0000d18c) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x56f6,	// (0x000056f6) list_set_graphic_pane_vc_g1_ParamLimits

0x56f6,	// (0x000056f6) list_set_graphic_pane_vc_g1

0x5702,	// (0x00005702) list_set_graphic_pane_vc_g2_ParamLimits

0x5702,	// (0x00005702) list_set_graphic_pane_vc_g2

0x0001,

0xaaec,	// (0x0000aaec) list_set_graphic_pane_vc_g_ParamLimits

0xaaec,	// (0x0000aaec) list_set_graphic_pane_vc_g

0x570e,	// (0x0000570e) text_primary_small_cp13_vc_ParamLimits

0x570e,	// (0x0000570e) text_primary_small_cp13_vc

0x5726,	// (0x00005726) list_set_graphic_pane_vc_ParamLimits

0x5726,	// (0x00005726) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x573a,	// (0x0000573a) setting_code_pane_vc_t1

0x5748,	// (0x00005748) set_text_pane_vc_t1_ParamLimits

0x5748,	// (0x00005748) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5763,	// (0x00005763) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x576d,	// (0x0000576d) setting_slider_graphic_pane_vc_g1

0x5775,	// (0x00005775) setting_slider_graphic_pane_vc_t1

0x5783,	// (0x00005783) setting_slider_graphic_pane_vc_t2

0x0001,

0xaaf1,	// (0x0000aaf1) setting_slider_graphic_pane_vc_t

0x5791,	// (0x00005791) slider_set_pane_cp_vc

0x5799,	// (0x00005799) slider_set_pane_vc_g1

0x57a2,	// (0x000057a2) slider_set_pane_vc_g2

0x0006,

0xaaf6,	// (0x0000aaf6) slider_set_pane_vc_g

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy1

0x57ce,	// (0x000057ce) set_opt_bg_pane_g3_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy1

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy1

0x57d8,	// (0x000057d8) set_opt_bg_pane_g7_copy1

0x57e0,	// (0x000057e0) set_opt_bg_pane_g8_copy1

0x57ea,	// (0x000057ea) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57f4,	// (0x000057f4) setting_slider_pane_vc_t1

0x5775,	// (0x00005775) setting_slider_pane_vc_t2

0x5783,	// (0x00005783) setting_slider_pane_vc_t3

0x0002,

0xab05,	// (0x0000ab05) setting_slider_pane_vc_t

0x5791,	// (0x00005791) slider_set_pane_vc

0x44b3,	// (0x000044b3) volume_set_pane_vc_g1

0x44bc,	// (0x000044bc) volume_set_pane_vc_g2

0x44c5,	// (0x000044c5) volume_set_pane_vc_g3

0x44ce,	// (0x000044ce) volume_set_pane_vc_g4

0x44d7,	// (0x000044d7) volume_set_pane_vc_g5

0x44e0,	// (0x000044e0) volume_set_pane_vc_g6

0x44e9,	// (0x000044e9) volume_set_pane_vc_g7

0x44f2,	// (0x000044f2) volume_set_pane_vc_g8

0x44fb,	// (0x000044fb) volume_set_pane_vc_g9

0x4504,	// (0x00004504) volume_set_pane_vc_g10

0x0009,

0xa9a3,	// (0x0000a9a3) volume_set_pane_vc_g

0x5803,	// (0x00005803) volume_set_pane_vc

0x580b,	// (0x0000580b) button_value_adjust_pane_cp1_vc

0x5815,	// (0x00005815) list_highlight_pane_cp2_vc

0x581e,	// (0x0000581e) list_set_pane_vc_ParamLimits

0x581e,	// (0x0000581e) list_set_pane_vc

0x5888,	// (0x00005888) main_pane_set_vc_t1_ParamLimits

0x5888,	// (0x00005888) main_pane_set_vc_t1

0x589d,	// (0x0000589d) main_pane_set_vc_t2_ParamLimits

0x589d,	// (0x0000589d) main_pane_set_vc_t2

0x58af,	// (0x000058af) main_pane_set_vc_t3_ParamLimits

0x58af,	// (0x000058af) main_pane_set_vc_t3

0x58c3,	// (0x000058c3) main_pane_set_vc_t4_ParamLimits

0x58c3,	// (0x000058c3) main_pane_set_vc_t4

0x0003,

0xab0c,	// (0x0000ab0c) main_pane_set_vc_t_ParamLimits

0xab0c,	// (0x0000ab0c) main_pane_set_vc_t

0x58d7,	// (0x000058d7) setting_code_pane_vc_ParamLimits

0x58d7,	// (0x000058d7) setting_code_pane_vc

0x58e8,	// (0x000058e8) setting_slider_graphic_pane_vc

0x58e8,	// (0x000058e8) setting_slider_pane_vc

0x58e8,	// (0x000058e8) setting_text_pane_vc

0x58e8,	// (0x000058e8) setting_volume_pane_vc

0x58f2,	// (0x000058f2) scroll_pane_cp121_vc

0x127d,	// (0x0000127d) set_content_pane_vc

0x5b15,	// (0x00005b15) button_value_adjust_pane_g1

0x5b1e,	// (0x00005b1e) button_value_adjust_pane_g2

0x0001,

0xab66,	// (0x0000ab66) button_value_adjust_pane_g

0x5b27,	// (0x00005b27) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b27,	// (0x00005b27) form_field_slider_wide_pane_vc_t1

0x5b3b,	// (0x00005b3b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b3b,	// (0x00005b3b) form_field_slider_wide_pane_vc_t2

0x0001,

0xab6b,	// (0x0000ab6b) form_field_slider_wide_pane_vc_t_ParamLimits

0xab6b,	// (0x0000ab6b) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5b4d,	// (0x00005b4d) slider_cont_pane_cp1_vc_ParamLimits

0x5b4d,	// (0x00005b4d) slider_cont_pane_cp1_vc

0x5799,	// (0x00005799) slider_form_pane_g1_cp2

0x57a2,	// (0x000057a2) slider_form_pane_g2_cp2

0x5b66,	// (0x00005b66) form_field_slider_pane_vc_t3

0x5b74,	// (0x00005b74) form_field_slider_pane_vc_t4

0x5b82,	// (0x00005b82) slider_form_pane_vc_ParamLimits

0x5b82,	// (0x00005b82) slider_form_pane_vc

0x5b8f,	// (0x00005b8f) form_field_slider_pane_vc_t1_ParamLimits

0x5b8f,	// (0x00005b8f) form_field_slider_pane_vc_t1

0x5b3b,	// (0x00005b3b) form_field_slider_pane_vc_t2_ParamLimits

0x5b3b,	// (0x00005b3b) form_field_slider_pane_vc_t2

0x0001,

0xab7b,	// (0x0000ab7b) form_field_slider_pane_vc_t_ParamLimits

0xab7b,	// (0x0000ab7b) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5bab,	// (0x00005bab) slider_cont_pane_vc_ParamLimits

0x5bab,	// (0x00005bab) slider_cont_pane_vc

0x5bbd,	// (0x00005bbd) list_form_graphic_pane_cp_vc_ParamLimits

0x5bbd,	// (0x00005bbd) list_form_graphic_pane_cp_vc

0x38ff,	// (0x000038ff) form_field_popup_wide_pane_vc_g1

0x5bd2,	// (0x00005bd2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bd2,	// (0x00005bd2) form_field_popup_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp8_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_vc

0x5be9,	// (0x00005be9) list_form_wide_pane_vc_ParamLimits

0x5be9,	// (0x00005be9) list_form_wide_pane_vc

0x5bf5,	// (0x00005bf5) list_form_graphic_pane_vc_g1

0x5bfd,	// (0x00005bfd) list_form_graphic_pane_vc_t1_ParamLimits

0x5bfd,	// (0x00005bfd) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5c19,	// (0x00005c19) list_form_graphic_pane_vc_ParamLimits

0x5c19,	// (0x00005c19) list_form_graphic_pane_vc

0x38ff,	// (0x000038ff) form_field_popup_pane_vc_g1

0x5c2f,	// (0x00005c2f) form_field_popup_pane_vc_t1_ParamLimits

0x5c2f,	// (0x00005c2f) form_field_popup_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp7_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_vc

0x5c46,	// (0x00005c46) list_form_pane_vc_ParamLimits

0x5c46,	// (0x00005c46) list_form_pane_vc

0x5c52,	// (0x00005c52) data_form_pane_vc_t1_ParamLimits

0x5c52,	// (0x00005c52) data_form_pane_vc_t1

0x14ad,	// (0x000014ad) input_focus_pane_vc_g1

0x14b5,	// (0x000014b5) input_focus_pane_vc_g2

0x14bd,	// (0x000014bd) input_focus_pane_vc_g3

0x14c5,	// (0x000014c5) input_focus_pane_vc_g4

0x14cd,	// (0x000014cd) input_focus_pane_vc_g5

0x14d5,	// (0x000014d5) input_focus_pane_vc_g6

0x14dd,	// (0x000014dd) input_focus_pane_vc_g7

0x14e5,	// (0x000014e5) input_focus_pane_vc_g8

0x14ed,	// (0x000014ed) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xa78b,	// (0x0000a78b) input_focus_pane_vc_g

0x38f3,	// (0x000038f3) data_form_pane_vc_ParamLimits

0x38f3,	// (0x000038f3) data_form_pane_vc

0x38ff,	// (0x000038ff) form_field_data_pane_vc_g1

0x5c6d,	// (0x00005c6d) form_field_data_pane_vc_t1_ParamLimits

0x5c6d,	// (0x00005c6d) form_field_data_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_vc

0x5c87,	// (0x00005c87) button_value_adjust_pane_cp3_vc

0x5c8f,	// (0x00005c8f) button_value_adjust_pane_cp5_vc

0x5c97,	// (0x00005c97) form_field_data_pane_vc_ParamLimits

0x5c97,	// (0x00005c97) form_field_data_pane_vc

0x5cae,	// (0x00005cae) form_field_data_pane_vc_cp2

0x5cb6,	// (0x00005cb6) form_field_data_wide_pane_vc_ParamLimits

0x5cb6,	// (0x00005cb6) form_field_data_wide_pane_vc

0x5ccc,	// (0x00005ccc) form_field_data_wide_pane_vc_cp2

0x5cd4,	// (0x00005cd4) form_field_popup_pane_vc_ParamLimits

0x5cd4,	// (0x00005cd4) form_field_popup_pane_vc

0x5ceb,	// (0x00005ceb) form_field_popup_wide_pane_vc_ParamLimits

0x5ceb,	// (0x00005ceb) form_field_popup_wide_pane_vc

0x5d01,	// (0x00005d01) form_field_slider_pane_vc_ParamLimits

0x5d01,	// (0x00005d01) form_field_slider_pane_vc

0x5d14,	// (0x00005d14) form_field_slider_wide_pane_vc_ParamLimits

0x5d14,	// (0x00005d14) form_field_slider_wide_pane_vc

0xd1aa,	// (0x0000d1aa) grid_touch_1_pane_ParamLimits

0xd1aa,	// (0x0000d1aa) grid_touch_1_pane

0xd1be,	// (0x0000d1be) grid_touch_2_pane_ParamLimits

0xd1be,	// (0x0000d1be) grid_touch_2_pane

0x5de9,	// (0x00005de9) touch_pane_g1_ParamLimits

0x5de9,	// (0x00005de9) touch_pane_g1

0x5d4b,	// (0x00005d4b) cell_app_pane_cp_wide_ParamLimits

0x5d4b,	// (0x00005d4b) cell_app_pane_cp_wide

0x5d5c,	// (0x00005d5c) grid_popup_fast_wide_pane_ParamLimits

0x5d5c,	// (0x00005d5c) grid_popup_fast_wide_pane

0x5d70,	// (0x00005d70) scroll_pane_cp19_ParamLimits

0x5d70,	// (0x00005d70) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5d84,	// (0x00005d84) listscroll_popup_fast_wide_pane

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane

0x5d8c,	// (0x00005d8c) clock_nsta_pane_g1

0x5d95,	// (0x00005d95) clock_nsta_pane_t1

0xd1e8,	// (0x0000d1e8) cell_indicator_nsta_pane_ParamLimits

0xd1e8,	// (0x0000d1e8) cell_indicator_nsta_pane

0x5de9,	// (0x00005de9) cell_indicator_nsta_pane_g1

0xd201,	// (0x0000d201) cell_indicator_nsta_pane_g2

0x0001,

0xf224,	// (0x0000f224) cell_indicator_nsta_pane_g

0x5e0d,	// (0x00005e0d) clock_nsta_pane_cp

0x5e15,	// (0x00005e15) indicator_nsta_pane_cp

0x5e1d,	// (0x00005e1d) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c54,	// (0x00001c54) scroll_pane_cp29

0x211f,	// (0x0000211f) indicator_nsta_pane_cp2_ParamLimits

0x211f,	// (0x0000211f) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3b2a,	// (0x00003b2a) form_midp_field_text_pane_ParamLimits

0x3c75,	// (0x00003c75) scroll_bar_cp050_ParamLimits

0x5e55,	// (0x00005e55) cell_indicator_pane_ParamLimits

0x5e55,	// (0x00005e55) cell_indicator_pane

0x5e6c,	// (0x00005e6c) cell_indicator_pane_g1

0xd217,	// (0x0000d217) grid_wheel_folder_pane_ParamLimits

0xd217,	// (0x0000d217) grid_wheel_folder_pane

0xd225,	// (0x0000d225) list_wheel_apps_pane_ParamLimits

0xd225,	// (0x0000d225) list_wheel_apps_pane

0xd233,	// (0x0000d233) main_apps_wheel_pane_g1_ParamLimits

0xd233,	// (0x0000d233) main_apps_wheel_pane_g1

0xd23f,	// (0x0000d23f) main_apps_wheel_pane_g2_ParamLimits

0xd23f,	// (0x0000d23f) main_apps_wheel_pane_g2

0x0001,

0xf229,	// (0x0000f229) main_apps_wheel_pane_g_ParamLimits

0xf229,	// (0x0000f229) main_apps_wheel_pane_g

0xd24d,	// (0x0000d24d) main_apps_wheel_pane_t1_ParamLimits

0xd24d,	// (0x0000d24d) main_apps_wheel_pane_t1

0xd261,	// (0x0000d261) list_wheel_apps_pane_g1

0xd269,	// (0x0000d269) list_wheel_apps_pane_g2

0xd271,	// (0x0000d271) list_wheel_apps_pane_g3

0xd279,	// (0x0000d279) list_wheel_apps_pane_g4

0xd283,	// (0x0000d283) list_wheel_apps_pane_g5

0x0004,

0xf22e,	// (0x0000f22e) list_wheel_apps_pane_g

0x241f,	// (0x0000241f) navi_icon_text_pane

0xc641,	// (0x0000c641) aid_fill_nsta

0xd29a,	// (0x0000d29a) navi_icon_text_pane_g1

0xd2a6,	// (0x0000d2a6) navi_icon_text_pane_t1

0xbd50,	// (0x0000bd50) list_set_graphic_pane_t1_ParamLimits

0xbd50,	// (0x0000bd50) list_set_graphic_pane_t1

0x4393,	// (0x00004393) popup_midp_note_alarm_window_t6_ParamLimits

0x4393,	// (0x00004393) popup_midp_note_alarm_window_t6

0x43a5,	// (0x000043a5) popup_midp_note_alarm_window_t7_ParamLimits

0x43a5,	// (0x000043a5) popup_midp_note_alarm_window_t7

0x43b7,	// (0x000043b7) popup_midp_note_alarm_window_t8_ParamLimits

0x43b7,	// (0x000043b7) popup_midp_note_alarm_window_t8

0x43c9,	// (0x000043c9) popup_midp_note_alarm_window_t9_ParamLimits

0x43c9,	// (0x000043c9) popup_midp_note_alarm_window_t9

0x43db,	// (0x000043db) popup_midp_note_alarm_window_t10_ParamLimits

0x43db,	// (0x000043db) popup_midp_note_alarm_window_t10

0x43ed,	// (0x000043ed) popup_midp_note_alarm_window_t11_ParamLimits

0x43ed,	// (0x000043ed) popup_midp_note_alarm_window_t11

0x43ff,	// (0x000043ff) scroll_pane_cp17_ParamLimits

0x43ff,	// (0x000043ff) scroll_pane_cp17

0x44b3,	// (0x000044b3) volume_small_pane_cp_g1

0x5f53,	// (0x00005f53) volume_small_pane_cp_g2

0x5f5c,	// (0x00005f5c) volume_small_pane_cp_g3

0x5f65,	// (0x00005f65) volume_small_pane_cp_g4

0x5f6e,	// (0x00005f6e) volume_small_pane_cp_g5

0x5f77,	// (0x00005f77) volume_small_pane_cp_g6

0x5f80,	// (0x00005f80) volume_small_pane_cp_g7

0x5f89,	// (0x00005f89) volume_small_pane_cp_g8

0x5f92,	// (0x00005f92) volume_small_pane_cp_g9

0x5f9b,	// (0x00005f9b) volume_small_pane_cp_g10

0x267a,	// (0x0000267a) midp_ticker_pane_g1_ParamLimits

0x2686,	// (0x00002686) midp_ticker_pane_g2_ParamLimits

0xa853,	// (0x0000a853) midp_ticker_pane_g_ParamLimits

0xbe10,	// (0x0000be10) midp_ticker_pane_t1_ParamLimits

0xc661,	// (0x0000c661) aid_fill_nsta_2

0x3c61,	// (0x00003c61) list_form2_midp_pane

0x4ffb,	// (0x00004ffb) midp_editing_number_pane_ParamLimits

0x500a,	// (0x0000500a) midp_ticker_pane_ParamLimits

0x5fa4,	// (0x00005fa4) form2_midp_field_pane

0x5fc8,	// (0x00005fc8) scroll_pane_cp51

0x5fe8,	// (0x00005fe8) form2_midp_button_pane_ParamLimits

0x5fe8,	// (0x00005fe8) form2_midp_button_pane

0x5ffa,	// (0x00005ffa) form2_midp_content_pane_ParamLimits

0x5ffa,	// (0x00005ffa) form2_midp_content_pane

0x6014,	// (0x00006014) form2_midp_field_choice_group_pane

0x601c,	// (0x0000601c) form2_midp_field_pane_g1

0x6024,	// (0x00006024) form2_midp_field_pane_g2

0x602c,	// (0x0000602c) form2_midp_field_pane_g3

0x6034,	// (0x00006034) form2_midp_field_pane_g4

0x0003,

0xabbe,	// (0x0000abbe) form2_midp_field_pane_g

0x603c,	// (0x0000603c) form2_midp_gauge_slider_pane

0x6044,	// (0x00006044) form2_midp_gauge_wait_pane

0x604c,	// (0x0000604c) form2_midp_image_pane_ParamLimits

0x604c,	// (0x0000604c) form2_midp_image_pane

0x6067,	// (0x00006067) form2_midp_label_pane_ParamLimits

0x6067,	// (0x00006067) form2_midp_label_pane

0xd2d4,	// (0x0000d2d4) form2_midp_label_pane_cp_ParamLimits

0xd2d4,	// (0x0000d2d4) form2_midp_label_pane_cp

0x60a1,	// (0x000060a1) form2_midp_string_pane_ParamLimits

0x60a1,	// (0x000060a1) form2_midp_string_pane

0xd2f5,	// (0x0000d2f5) form2_midp_text_pane_ParamLimits

0xd2f5,	// (0x0000d2f5) form2_midp_text_pane

0x60d0,	// (0x000060d0) form2_midp_time_pane

0x60e0,	// (0x000060e0) input_focus_pane_cp51_ParamLimits

0x60e0,	// (0x000060e0) input_focus_pane_cp51

0x60f8,	// (0x000060f8) form2_midp_label_pane_t1_ParamLimits

0x60f8,	// (0x000060f8) form2_midp_label_pane_t1

0xd312,	// (0x0000d312) form2_mdip_text_pane_t1_ParamLimits

0xd312,	// (0x0000d312) form2_mdip_text_pane_t1

0x6158,	// (0x00006158) form2_midp_time_pane_t1

0x6173,	// (0x00006173) form2_midp_gauge_slider_pane_t1

0xd32e,	// (0x0000d32e) form2_midp_gauge_slider_pane_t2

0xd340,	// (0x0000d340) form2_midp_gauge_slider_pane_t3

0x0002,

0xf23e,	// (0x0000f23e) form2_midp_gauge_slider_pane_t

0x61a9,	// (0x000061a9) form2_midp_slider_pane

0x61b5,	// (0x000061b5) form2_midp_gauge_wait_pane_t1

0x61c3,	// (0x000061c3) form2_midp_wait_pane_ParamLimits

0x61c3,	// (0x000061c3) form2_midp_wait_pane

0xd352,	// (0x0000d352) list_single_2graphic_pane_cp4_ParamLimits

0xd352,	// (0x0000d352) list_single_2graphic_pane_cp4

0xcae4,	// (0x0000cae4) list_single_midp_graphic_pane_cp_ParamLimits

0xcae4,	// (0x0000cae4) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x621d,	// (0x0000621d) list_single_2graphic_pane_g1_cp4

0x6225,	// (0x00006225) list_single_2graphic_pane_g2_cp4

0x622d,	// (0x0000622d) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x623c,	// (0x0000623c) list_single_midp_graphic_pane_g4_cp

0x624b,	// (0x0000624b) list_single_midp_graphic_pane_t1_cp

0xd367,	// (0x0000d367) form2_mdip_string_pane_t1_ParamLimits

0xd367,	// (0x0000d367) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0xbd68,	// (0x0000bd68) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc39d,	// (0x0000c39d) popup_preview_window_ParamLimits

0xc39d,	// (0x0000c39d) popup_preview_window

0x308b,	// (0x0000308b) popup_touch_info_window_ParamLimits

0x308b,	// (0x0000308b) popup_touch_info_window

0x30a9,	// (0x000030a9) popup_touch_menu_window_ParamLimits

0x30a9,	// (0x000030a9) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6359,	// (0x00006359) list_touch_menu_pane

0x6361,	// (0x00006361) list_single_touch_menu_pane_ParamLimits

0x6361,	// (0x00006361) list_single_touch_menu_pane

0x6378,	// (0x00006378) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x6386,	// (0x00006386) heading_sub_pane

0x638e,	// (0x0000638e) list_touch_info_pane_ParamLimits

0x638e,	// (0x0000638e) list_touch_info_pane

0x639d,	// (0x0000639d) list_single_touch_info_pane_ParamLimits

0x639d,	// (0x0000639d) list_single_touch_info_pane

0x63af,	// (0x000063af) list_single_touch_info_pane_t1

0x63bd,	// (0x000063bd) list_single_touch_info_pane_t2

0x0001,

0xabd5,	// (0x0000abd5) list_single_touch_info_pane_t

0x259f,	// (0x0000259f) bg_popup_heading_pane_cp

0x63cb,	// (0x000063cb) heading_sub_pane_t1

0x3805,	// (0x00003805) bg_popup_preview_window_pane_cp_ParamLimits

0x3805,	// (0x00003805) bg_popup_preview_window_pane_cp

0x6386,	// (0x00006386) heading_preview_pane

0x638e,	// (0x0000638e) list_preview_pane_ParamLimits

0x638e,	// (0x0000638e) list_preview_pane

0x63d9,	// (0x000063d9) popup_preview_window_g1

0x639d,	// (0x0000639d) list_single_preview_pane_ParamLimits

0x639d,	// (0x0000639d) list_single_preview_pane

0x63e1,	// (0x000063e1) list_single_preview_pane_g1

0x63e9,	// (0x000063e9) list_single_preview_pane_t1

0x63af,	// (0x000063af) list_single_preview_pane_t2

0x0001,

0xabda,	// (0x0000abda) list_single_preview_pane_t

0x63f7,	// (0x000063f7) bg_popup_heading_pane_cp2_ParamLimits

0x63f7,	// (0x000063f7) bg_popup_heading_pane_cp2

0x640d,	// (0x0000640d) heading_preview_pane_g1

0x6415,	// (0x00006415) heading_preview_pane_t1_ParamLimits

0x6415,	// (0x00006415) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b4d,	// (0x00001b4d) scroll_sc2_left_pane

0x1b56,	// (0x00001b56) scroll_sc2_right_pane

0x1b75,	// (0x00001b75) scroll_bg_pane_g1_ParamLimits

0x1b8a,	// (0x00001b8a) scroll_bg_pane_g2_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_bg_pane_g3_ParamLimits

0xa7e2,	// (0x0000a7e2) scroll_bg_pane_g_ParamLimits

0x1b75,	// (0x00001b75) scroll_handle_pane_g1_ParamLimits

0x1bc4,	// (0x00001bc4) scroll_handle_pane_g2_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g3_ParamLimits

0xa7e9,	// (0x0000a7e9) scroll_handle_pane_g_ParamLimits

0x2b57,	// (0x00002b57) popup_choice_list_window_ParamLimits

0x2b57,	// (0x00002b57) popup_choice_list_window

0x357b,	// (0x0000357b) choice_list_pane

0x3643,	// (0x00003643) cell_toolbar_pane_t1

0x366b,	// (0x0000366b) toolbar_button_pane_ParamLimits

0x4a23,	// (0x00004a23) ai_gene_pane_1_t2_ParamLimits

0x4a23,	// (0x00004a23) ai_gene_pane_1_t2

0x0001,

0xa9ff,	// (0x0000a9ff) ai_gene_pane_1_t_ParamLimits

0xa9ff,	// (0x0000a9ff) ai_gene_pane_1_t

0x6432,	// (0x00006432) scroll_sc2_left_pane_g1

0x6432,	// (0x00006432) scroll_sc2_right_pane_g1

0x2b27,	// (0x00002b27) bg_popup_sub_pane_cp10

0x643c,	// (0x0000643c) list_choice_list_pane

0x6453,	// (0x00006453) list_single_choice_list_pane_ParamLimits

0x6453,	// (0x00006453) list_single_choice_list_pane

0x6467,	// (0x00006467) list_single_choice_list_pane_g1

0x646f,	// (0x0000646f) list_single_choice_list_pane_t1_ParamLimits

0x646f,	// (0x0000646f) list_single_choice_list_pane_t1

0x6484,	// (0x00006484) choice_list_pane_g1

0x648c,	// (0x0000648c) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18b7,	// (0x000018b7) title_pane_stacon_g2_ParamLimits

0x18b7,	// (0x000018b7) title_pane_stacon_g2

0x0002,

0xa7c8,	// (0x0000a7c8) title_pane_stacon_g_ParamLimits

0xa7c8,	// (0x0000a7c8) title_pane_stacon_g

0x259f,	// (0x0000259f) cursor_press_pane

0xc068,	// (0x0000c068) popup_fep_hwr_window_ParamLimits

0xc068,	// (0x0000c068) popup_fep_hwr_window

0x2c79,	// (0x00002c79) popup_fep_vkb_window_ParamLimits

0x2c79,	// (0x00002c79) popup_fep_vkb_window

0x649a,	// (0x0000649a) cursor_press_pane_g1

0x0002,

0xf252,	// (0x0000f252) fep_vkb_side_pane_g_ParamLimits

0x64db,	// (0x000064db) fep_hwr_candidate_pane_ParamLimits

0x64db,	// (0x000064db) fep_hwr_candidate_pane

0x6505,	// (0x00006505) fep_hwr_side_pane_ParamLimits

0x6505,	// (0x00006505) fep_hwr_side_pane

0x6525,	// (0x00006525) fep_hwr_top_pane_ParamLimits

0x6525,	// (0x00006525) fep_hwr_top_pane

0x653d,	// (0x0000653d) fep_hwr_write_pane_ParamLimits

0x653d,	// (0x0000653d) fep_hwr_write_pane

0xf252,	// (0x0000f252) fep_vkb_side_pane_g

0x6577,	// (0x00006577) fep_hwr_top_pane_g1

0x6589,	// (0x00006589) fep_hwr_top_pane_g2

0x659b,	// (0x0000659b) fep_hwr_top_pane_g3

0x0002,

0xabdf,	// (0x0000abdf) fep_hwr_top_pane_g

0x65b0,	// (0x000065b0) fep_hwr_top_text_pane

0x1d1b,	// (0x00001d1b) fep_hwr_top_text_pane_g1

0x6688,	// (0x00006688) fep_hwr_top_text_pane_t1

0x66d8,	// (0x000066d8) fep_hwr_candidate_pane_g1

0x6951,	// (0x00006951) fep_vkb_keypad_pane_g3_ParamLimits

0x6951,	// (0x00006951) fep_vkb_keypad_pane_g3

0x6979,	// (0x00006979) fep_vkb_keypad_pane_g4_ParamLimits

0x6979,	// (0x00006979) fep_vkb_keypad_pane_g4

0x69e8,	// (0x000069e8) fep_vkb_bottom_pane_g2_ParamLimits

0x69e8,	// (0x000069e8) fep_vkb_bottom_pane_g2

0x0001,

0xac0a,	// (0x0000ac0a) fep_vkb_bottom_pane_g_ParamLimits

0xac0a,	// (0x0000ac0a) fep_vkb_bottom_pane_g

0x6432,	// (0x00006432) cell_vkb_side_pane_g2

0x0001,

0xac14,	// (0x0000ac14) cell_vkb_side_pane_g

0x6a73,	// (0x00006a73) cell_vkb_side_pane_t1

0x6a81,	// (0x00006a81) cell_vkb_side_pane_t1_copy1

0x6432,	// (0x00006432) bg_fep_vkb_candidate_pane_g2

0x6bad,	// (0x00006bad) cell_vkb_candidate_pane_ParamLimits

0x670c,	// (0x0000670c) aid_size_cell_vkb_ParamLimits

0x670c,	// (0x0000670c) aid_size_cell_vkb

0x6bad,	// (0x00006bad) cell_vkb_candidate_pane

0x6be1,	// (0x00006be1) bg_popup_fep_shadow_pane_g1

0xd442,	// (0x0000d442) fep_vkb_bottom_pane_ParamLimits

0xd442,	// (0x0000d442) fep_vkb_bottom_pane

0x67d0,	// (0x000067d0) fep_vkb_candidate_pane_ParamLimits

0x67d0,	// (0x000067d0) fep_vkb_candidate_pane

0xd467,	// (0x0000d467) fep_vkb_keypad_pane_ParamLimits

0xd467,	// (0x0000d467) fep_vkb_keypad_pane

0xd4a3,	// (0x0000d4a3) fep_vkb_side_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) fep_vkb_side_pane

0xd4df,	// (0x0000d4df) fep_vkb_top_pane_ParamLimits

0xd4df,	// (0x0000d4df) fep_vkb_top_pane

0x68aa,	// (0x000068aa) fep_vkb_top_pane_g1_ParamLimits

0x68aa,	// (0x000068aa) fep_vkb_top_pane_g1

0x68b9,	// (0x000068b9) fep_vkb_top_pane_g2_ParamLimits

0x68b9,	// (0x000068b9) fep_vkb_top_pane_g2

0x68c8,	// (0x000068c8) fep_vkb_top_pane_g3_ParamLimits

0x68c8,	// (0x000068c8) fep_vkb_top_pane_g3

0x0003,

0xabfa,	// (0x0000abfa) fep_vkb_top_pane_g_ParamLimits

0xabfa,	// (0x0000abfa) fep_vkb_top_pane_g

0x68e6,	// (0x000068e6) fep_vkb_top_text_pane_ParamLimits

0x68e6,	// (0x000068e6) fep_vkb_top_text_pane

0xd51b,	// (0x0000d51b) fep_vkb_side_pane_g1_ParamLimits

0xd51b,	// (0x0000d51b) fep_vkb_side_pane_g1

0x6940,	// (0x00006940) grid_vkb_side_pane_ParamLimits

0x6940,	// (0x00006940) grid_vkb_side_pane

0x6be9,	// (0x00006be9) bg_popup_fep_shadow_pane_g2

0x6bf2,	// (0x00006bf2) bg_popup_fep_shadow_pane_g3

0x6bfa,	// (0x00006bfa) bg_popup_fep_shadow_pane_g4

0x6c03,	// (0x00006c03) bg_popup_fep_shadow_pane_g5

0x6c0d,	// (0x00006c0d) bg_popup_fep_shadow_pane_g6

0x6c15,	// (0x00006c15) bg_popup_fep_shadow_pane_g7

0x14cd,	// (0x000014cd) bg_popup_fep_shadow_pane_g8

0x6997,	// (0x00006997) grid_vkb_keypad_number_pane_ParamLimits

0x6997,	// (0x00006997) grid_vkb_keypad_number_pane

0x69a7,	// (0x000069a7) grid_vkb_keypad_pane_ParamLimits

0x69a7,	// (0x000069a7) grid_vkb_keypad_pane

0x69cd,	// (0x000069cd) fep_vkb_bottom_pane_g1_ParamLimits

0x69cd,	// (0x000069cd) fep_vkb_bottom_pane_g1

0x69f6,	// (0x000069f6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x69f6,	// (0x000069f6) grid_vkb_keypad_bottom_left_pane

0x6a0b,	// (0x00006a0b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a0b,	// (0x00006a0b) grid_vkb_keypad_bottom_right_pane

0x6a20,	// (0x00006a20) fep_vkb_top_text_pane_g1

0xd562,	// (0x0000d562) fep_vkb_top_text_pane_t1

0xd574,	// (0x0000d574) cell_vkb_side_pane_ParamLimits

0xd574,	// (0x0000d574) cell_vkb_side_pane

0x6432,	// (0x00006432) cell_vkb_side_pane_g1

0x6a8f,	// (0x00006a8f) cell_vkb_keypad_pane_ParamLimits

0x6a8f,	// (0x00006a8f) cell_vkb_keypad_pane

0x6b04,	// (0x00006b04) cell_vkb_keypad_pane_g1

0x0008,

0xac27,	// (0x0000ac27) bg_popup_fep_shadow_pane_g

0x6432,	// (0x00006432) cell_hwr_side_pane_g1

0x6432,	// (0x00006432) cell_hwr_side_pane_g2

0x6b0e,	// (0x00006b0e) cell_vkb_keypad_pane_t1

0xd58a,	// (0x0000d58a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd58a,	// (0x0000d58a) cell_vkb_keypad_bottom_left_pane

0xd59f,	// (0x0000d59f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd59f,	// (0x0000d59f) cell_vkb_keypad_bottom_right_pane

0x6432,	// (0x00006432) cell_vkb_keypad_bottom_left_pane_g1

0x6432,	// (0x00006432) cell_vkb_keypad_bottom_right_pane_g1

0x6b72,	// (0x00006b72) cell_vkb_keypad_number_pane_ParamLimits

0x6b72,	// (0x00006b72) cell_vkb_keypad_number_pane

0x6b91,	// (0x00006b91) cell_vkb_keypad_number_pane_g1

0x6b9b,	// (0x00006b9b) cell_vkb_keypad_number_pane_g2

0x6ba4,	// (0x00006ba4) cell_vkb_keypad_number_pane_g3

0x0002,

0xac19,	// (0x0000ac19) cell_vkb_keypad_number_pane_g

0x6b0e,	// (0x00006b0e) cell_vkb_keypad_number_pane_t1

0x6bc8,	// (0x00006bc8) fep_vkb_candidate_pane_g1

0x0001,

0xac14,	// (0x0000ac14) cell_hwr_side_pane_g

0x6c27,	// (0x00006c27) cell_hwr_side_pane_t1

0x6c35,	// (0x00006c35) cell_hwr_side_pane_t1_copy1

0x68d8,	// (0x000068d8) cell_hwr_candidate_pane_g1

0x6c85,	// (0x00006c85) cell_hwr_candidate_pane_t1

0x6432,	// (0x00006432) cell_vkb_candidate_pane_g2

0x6cd9,	// (0x00006cd9) cell_vkb_candidate_pane_t1

0x64a2,	// (0x000064a2) bg_popup_fep_shadow_pane_ParamLimits

0x64a2,	// (0x000064a2) bg_popup_fep_shadow_pane

0x6557,	// (0x00006557) bg_fep_hwr_top_pane_g4

0x65c5,	// (0x000065c5) bg_hwr_side_pane_g1_ParamLimits

0x65c5,	// (0x000065c5) bg_hwr_side_pane_g1

0xd3fb,	// (0x0000d3fb) cell_hwr_side_pane_ParamLimits

0xd3fb,	// (0x0000d3fb) cell_hwr_side_pane

0x6633,	// (0x00006633) fep_hwr_write_pane_g1_ParamLimits

0x6633,	// (0x00006633) fep_hwr_write_pane_g1

0x6640,	// (0x00006640) fep_hwr_write_pane_g2_ParamLimits

0x6640,	// (0x00006640) fep_hwr_write_pane_g2

0x664d,	// (0x0000664d) fep_hwr_write_pane_g3_ParamLimits

0x664d,	// (0x0000664d) fep_hwr_write_pane_g3

0xd41b,	// (0x0000d41b) fep_hwr_write_pane_g4_ParamLimits

0xd41b,	// (0x0000d41b) fep_hwr_write_pane_g4

0x0005,

0xf245,	// (0x0000f245) fep_hwr_write_pane_g_ParamLimits

0xf245,	// (0x0000f245) fep_hwr_write_pane_g

0x6557,	// (0x00006557) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6557,	// (0x00006557) bg_fep_hwr_candidate_pane_g2

0x6696,	// (0x00006696) cell_hwr_candidate_pane_ParamLimits

0x6696,	// (0x00006696) cell_hwr_candidate_pane

0x66d8,	// (0x000066d8) fep_hwr_candidate_pane_g1_ParamLimits

0x673a,	// (0x0000673a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x673a,	// (0x0000673a) bg_popup_fep_shadow_pane_cp2

0x68d8,	// (0x000068d8) fep_vkb_top_pane_g4_ParamLimits

0x68d8,	// (0x000068d8) fep_vkb_top_pane_g4

0x691e,	// (0x0000691e) fep_vkb_side_pane_g2_ParamLimits

0x691e,	// (0x0000691e) fep_vkb_side_pane_g2

0xb868,	// (0x0000b868) list_setting_pane_t4_ParamLimits

0xb868,	// (0x0000b868) list_setting_pane_t4

0xb8e2,	// (0x0000b8e2) list_setting_number_pane_t5_ParamLimits

0xb8e2,	// (0x0000b8e2) list_setting_number_pane_t5

0xbbf5,	// (0x0000bbf5) list_double_heading_pane_cp2_ParamLimits

0xbbf5,	// (0x0000bbf5) list_double_heading_pane_cp2

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2_ParamLimits

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2_ParamLimits

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2

0x6ce7,	// (0x00006ce7) list_double_heading_pane_t1_cp2_ParamLimits

0x6ce7,	// (0x00006ce7) list_double_heading_pane_t1_cp2

0x6cfd,	// (0x00006cfd) list_double_heading_pane_t2_cp2_ParamLimits

0x6cfd,	// (0x00006cfd) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6d0f,	// (0x00006d0f) list_preview_fixed_pane

0x6d55,	// (0x00006d55) list_empty_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_empty_pane_fp

0x6d55,	// (0x00006d55) list_single_cale_day_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_single_cale_day_pane_fp

0x6d55,	// (0x00006d55) list_single_graphic_heading_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_single_graphic_heading_pane_fp

0x6d55,	// (0x00006d55) list_single_graphic_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_single_graphic_pane_fp

0x6d55,	// (0x00006d55) list_single_heading_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_single_heading_pane_fp

0x6d55,	// (0x00006d55) list_single_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_single_pane_fp

0x6d6a,	// (0x00006d6a) list_single_pane_fp_g1_ParamLimits

0x6d6a,	// (0x00006d6a) list_single_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2

0x6d76,	// (0x00006d76) list_single_pane_fp_g3_ParamLimits

0x6d76,	// (0x00006d76) list_single_pane_fp_g3

0x6d8a,	// (0x00006d8a) list_single_pane_fp_g4_ParamLimits

0x6d8a,	// (0x00006d8a) list_single_pane_fp_g4

0x0003,

0xac48,	// (0x0000ac48) list_single_pane_fp_g_ParamLimits

0xac48,	// (0x0000ac48) list_single_pane_fp_g

0x6d96,	// (0x00006d96) list_single_pane_fp_t1_ParamLimits

0x6d96,	// (0x00006d96) list_single_pane_fp_t1

0x6dad,	// (0x00006dad) list_single_graphic_pane_fp_g1_ParamLimits

0x6dad,	// (0x00006dad) list_single_graphic_pane_fp_g1

0x6d6a,	// (0x00006d6a) list_single_graphic_pane_fp_g2_ParamLimits

0x6d6a,	// (0x00006d6a) list_single_graphic_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3

0x6d76,	// (0x00006d76) list_single_graphic_pane_fp_g4_ParamLimits

0x6d76,	// (0x00006d76) list_single_graphic_pane_fp_g4

0x6d8a,	// (0x00006d8a) list_single_graphic_pane_fp_g5_ParamLimits

0x6d8a,	// (0x00006d8a) list_single_graphic_pane_fp_g5

0x0004,

0xac51,	// (0x0000ac51) list_single_graphic_pane_fp_g_ParamLimits

0xac51,	// (0x0000ac51) list_single_graphic_pane_fp_g

0x6db9,	// (0x00006db9) list_single_graphic_pane_fp_t1_ParamLimits

0x6db9,	// (0x00006db9) list_single_graphic_pane_fp_t1

0x6dad,	// (0x00006dad) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6dad,	// (0x00006dad) list_single_graphic_heading_pane_fp_g1

0x6d6a,	// (0x00006d6a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6d6a,	// (0x00006d6a) list_single_graphic_heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3

0x6d76,	// (0x00006d76) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6d76,	// (0x00006d76) list_single_graphic_heading_pane_fp_g4

0x6d8a,	// (0x00006d8a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6d8a,	// (0x00006d8a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xac51,	// (0x0000ac51) list_single_graphic_heading_pane_fp_g_ParamLimits

0xac51,	// (0x0000ac51) list_single_graphic_heading_pane_fp_g

0x6dcf,	// (0x00006dcf) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_graphic_heading_pane_fp_t1

0x6de5,	// (0x00006de5) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6de5,	// (0x00006de5) list_single_graphic_heading_pane_fp_t2

0x0001,

0xac5c,	// (0x0000ac5c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xac5c,	// (0x0000ac5c) list_single_graphic_heading_pane_fp_t

0x6df7,	// (0x00006df7) list_single_cale_day_pane_fp_g1_ParamLimits

0x6df7,	// (0x00006df7) list_single_cale_day_pane_fp_g1

0x6e2f,	// (0x00006e2f) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e2f,	// (0x00006e2f) list_single_cale_day_pane_fp_g2

0x6e3b,	// (0x00006e3b) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e3b,	// (0x00006e3b) list_single_cale_day_pane_fp_g3

0x6e63,	// (0x00006e63) list_single_cale_day_pane_fp_g4_ParamLimits

0x6e63,	// (0x00006e63) list_single_cale_day_pane_fp_g4

0x6e87,	// (0x00006e87) list_single_cale_day_pane_fp_g5_ParamLimits

0x6e87,	// (0x00006e87) list_single_cale_day_pane_fp_g5

0x0004,

0xac61,	// (0x0000ac61) list_single_cale_day_pane_fp_g_ParamLimits

0xac61,	// (0x0000ac61) list_single_cale_day_pane_fp_g

0x6eab,	// (0x00006eab) list_single_cale_day_pane_fp_t1_ParamLimits

0x6eab,	// (0x00006eab) list_single_cale_day_pane_fp_t1

0x6ed1,	// (0x00006ed1) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ed1,	// (0x00006ed1) list_single_cale_day_pane_fp_t2

0x6eea,	// (0x00006eea) list_single_cale_day_pane_fp_t3_ParamLimits

0x6eea,	// (0x00006eea) list_single_cale_day_pane_fp_t3

0x0002,

0xac6c,	// (0x0000ac6c) list_single_cale_day_pane_fp_t_ParamLimits

0xac6c,	// (0x0000ac6c) list_single_cale_day_pane_fp_t

0x6d6a,	// (0x00006d6a) list_empty_pane_fp_g1_ParamLimits

0x6d6a,	// (0x00006d6a) list_empty_pane_fp_g1

0x6f03,	// (0x00006f03) list_empty_pane_fp_t1

0x6f11,	// (0x00006f11) list_empty_pane_fp_t2

0x0001,

0xac73,	// (0x0000ac73) list_empty_pane_fp_t

0x6d6a,	// (0x00006d6a) list_single_heading_pane_fp_g1_ParamLimits

0x6d6a,	// (0x00006d6a) list_single_heading_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2

0x6d76,	// (0x00006d76) list_single_heading_pane_fp_g3_ParamLimits

0x6d76,	// (0x00006d76) list_single_heading_pane_fp_g3

0x0002,

0xac78,	// (0x0000ac78) list_single_heading_pane_fp_g_ParamLimits

0xac78,	// (0x0000ac78) list_single_heading_pane_fp_g

0x6f1f,	// (0x00006f1f) list_single_heading_pane_fp_t1_ParamLimits

0x6f1f,	// (0x00006f1f) list_single_heading_pane_fp_t1

0x6f31,	// (0x00006f31) list_single_heading_pane_fp_t2_ParamLimits

0x6f31,	// (0x00006f31) list_single_heading_pane_fp_t2

0x0001,

0xac7f,	// (0x0000ac7f) list_single_heading_pane_fp_t_ParamLimits

0xac7f,	// (0x0000ac7f) list_single_heading_pane_fp_t

0x16fe,	// (0x000016fe) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x173b,	// (0x0000173b) cell_app_pane_cp2_ParamLimits

0x173b,	// (0x0000173b) cell_app_pane_cp2

0x64c4,	// (0x000064c4) fep_hwr_candidate_drop_down_list_pane

0x66f2,	// (0x000066f2) fep_hwr_candidate_pane_g3_ParamLimits

0x66f2,	// (0x000066f2) fep_hwr_candidate_pane_g3

0x66ff,	// (0x000066ff) fep_hwr_candidate_pane_g4_ParamLimits

0x66ff,	// (0x000066ff) fep_hwr_candidate_pane_g4

0x0002,

0xabf3,	// (0x0000abf3) fep_hwr_candidate_pane_g_ParamLimits

0xabf3,	// (0x0000abf3) fep_hwr_candidate_pane_g

0x67bf,	// (0x000067bf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x67bf,	// (0x000067bf) fep_vkb_candidate_drop_down_list_pane

0x6bd0,	// (0x00006bd0) fep_vkb_candidate_pane_g3

0x6bd8,	// (0x00006bd8) fep_vkb_candidate_pane_g4

0x0002,

0xac20,	// (0x0000ac20) fep_vkb_candidate_pane_g

0x68d8,	// (0x000068d8) cell_hwr_candidate_pane_g1_ParamLimits

0x6c43,	// (0x00006c43) cell_hwr_candidate_pane_g3_ParamLimits

0x6c43,	// (0x00006c43) cell_hwr_candidate_pane_g3

0x6c64,	// (0x00006c64) cell_hwr_candidate_pane_g4_ParamLimits

0x6c64,	// (0x00006c64) cell_hwr_candidate_pane_g4

0x0002,

0xac3a,	// (0x0000ac3a) cell_hwr_candidate_pane_g_ParamLimits

0xac3a,	// (0x0000ac3a) cell_hwr_candidate_pane_g

0x6ca3,	// (0x00006ca3) cell_vkb_candidate_pane_g3_ParamLimits

0x6ca3,	// (0x00006ca3) cell_vkb_candidate_pane_g3

0x6cbe,	// (0x00006cbe) cell_vkb_candidate_pane_g4_ParamLimits

0x6cbe,	// (0x00006cbe) cell_vkb_candidate_pane_g4

0x6f47,	// (0x00006f47) cell_app_pane_cp2_g1_ParamLimits

0x6f47,	// (0x00006f47) cell_app_pane_cp2_g1

0x6f65,	// (0x00006f65) cell_app_pane_cp2_g2_ParamLimits

0x6f65,	// (0x00006f65) cell_app_pane_cp2_g2

0x0001,

0xac84,	// (0x0000ac84) cell_app_pane_cp2_g_ParamLimits

0xac84,	// (0x0000ac84) cell_app_pane_cp2_g

0x6f71,	// (0x00006f71) cell_app_pane_cp2_t1_ParamLimits

0x6f71,	// (0x00006f71) cell_app_pane_cp2_t1

0x1375,	// (0x00001375) grid_highlight_pane_cp1_ParamLimits

0x1375,	// (0x00001375) grid_highlight_pane_cp1

0x6f83,	// (0x00006f83) cell_hwr_candidate_pane_cp1_ParamLimits

0x6f83,	// (0x00006f83) cell_hwr_candidate_pane_cp1

0x68d8,	// (0x000068d8) fep_hwr_candidate_drop_down_list_pane_g1

0x6fa2,	// (0x00006fa2) fep_hwr_candidate_drop_down_list_pane_g2

0x6faf,	// (0x00006faf) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xac89,	// (0x0000ac89) fep_hwr_candidate_drop_down_list_pane_g

0x6fbc,	// (0x00006fbc) fep_hwr_candidate_drop_down_list_scroll_pane

0x6fc5,	// (0x00006fc5) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6fc5,	// (0x00006fc5) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6fd2,	// (0x00006fd2) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6fd2,	// (0x00006fd2) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6fdf,	// (0x00006fdf) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6fdf,	// (0x00006fdf) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ca3,	// (0x00006ca3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ca3,	// (0x00006ca3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6cbe,	// (0x00006cbe) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cbe,	// (0x00006cbe) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6fec,	// (0x00006fec) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6fec,	// (0x00006fec) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7007,	// (0x00007007) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7007,	// (0x00007007) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7022,	// (0x00007022) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7022,	// (0x00007022) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xac90,	// (0x0000ac90) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xac90,	// (0x0000ac90) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x703d,	// (0x0000703d) cell_vkb_candidate_pane_cp1_ParamLimits

0x703d,	// (0x0000703d) cell_vkb_candidate_pane_cp1

0x68d8,	// (0x000068d8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x68d8,	// (0x000068d8) fep_vkb_candidate_drop_down_list_pane_g1

0x6fa2,	// (0x00006fa2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6fa2,	// (0x00006fa2) fep_vkb_candidate_drop_down_list_pane_g2

0x6faf,	// (0x00006faf) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6faf,	// (0x00006faf) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xac89,	// (0x0000ac89) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xac89,	// (0x0000ac89) fep_vkb_candidate_drop_down_list_pane_g

0x705d,	// (0x0000705d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x705d,	// (0x0000705d) fep_vkb_candidate_drop_down_list_scroll_pane

0x706a,	// (0x0000706a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x706a,	// (0x0000706a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7077,	// (0x00007077) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7077,	// (0x00007077) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7083,	// (0x00007083) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7083,	// (0x00007083) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6c43,	// (0x00006c43) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c43,	// (0x00006c43) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6c64,	// (0x00006c64) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c64,	// (0x00006c64) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x708f,	// (0x0000708f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x708f,	// (0x0000708f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x70b0,	// (0x000070b0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70b0,	// (0x000070b0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x70d1,	// (0x000070d1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70d1,	// (0x000070d1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaca1,	// (0x0000aca1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaca1,	// (0x0000aca1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb17a,	// (0x0000b17a) title_pane_g1_ParamLimits

0xb18b,	// (0x0000b18b) title_pane_g2_ParamLimits

0xf079,	// (0x0000f079) title_pane_g_ParamLimits

0x1d0b,	// (0x00001d0b) aid_call2_pane

0x1d13,	// (0x00001d13) aid_call_pane

0x1d1b,	// (0x00001d1b) popup_clock_analogue_window_g1

0x1d1b,	// (0x00001d1b) popup_clock_analogue_window_g2

0x1d23,	// (0x00001d23) popup_clock_analogue_window_g3

0x1d2c,	// (0x00001d2c) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa7f7,	// (0x0000a7f7) popup_clock_analogue_window_g

0x1d34,	// (0x00001d34) popup_clock_analogue_window_t1

0x1dba,	// (0x00001dba) clock_digital_number_pane_ParamLimits

0x1dba,	// (0x00001dba) clock_digital_number_pane

0x1dc6,	// (0x00001dc6) clock_digital_number_pane_cp02_ParamLimits

0x1dc6,	// (0x00001dc6) clock_digital_number_pane_cp02

0x1dd2,	// (0x00001dd2) clock_digital_number_pane_cp03_ParamLimits

0x1dd2,	// (0x00001dd2) clock_digital_number_pane_cp03

0x1dde,	// (0x00001dde) clock_digital_number_pane_cp04_ParamLimits

0x1dde,	// (0x00001dde) clock_digital_number_pane_cp04

0x1dea,	// (0x00001dea) clock_digital_separator_pane_ParamLimits

0x1dea,	// (0x00001dea) clock_digital_separator_pane

0x1df6,	// (0x00001df6) popup_clock_digital_window_t1_ParamLimits

0x1df6,	// (0x00001df6) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xa802,	// (0x0000a802) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa802,	// (0x0000a802) clock_digital_separator_pane_g

0xc641,	// (0x0000c641) aid_fill_nsta_ParamLimits

0xc770,	// (0x0000c770) indicator_nsta_pane_ParamLimits

0x339c,	// (0x0000339c) popup_clock_analogue_window

0x339c,	// (0x0000339c) popup_clock_digital_window

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane_ParamLimits

0x5da3,	// (0x00005da3) clock_nsta_pane_t2

0x0001,

0xab80,	// (0x0000ab80) clock_nsta_pane_t

0x1af2,	// (0x00001af2) aid_size_max_handle

0xbbec,	// (0x0000bbec) aid_size_min_handle

0x259f,	// (0x0000259f) editor_scroll_pane

0x70ec,	// (0x000070ec) ex_editor_pane

0x166c,	// (0x0000166c) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1d64,	// (0x00001d64) scroll_pane_cp36

0xbc04,	// (0x0000bc04) list_single_graphic_hl_pane_cp2_ParamLimits

0xbc04,	// (0x0000bc04) list_single_graphic_hl_pane_cp2

0xd047,	// (0x0000d047) list_single_graphic_hl_pane_ParamLimits

0xd047,	// (0x0000d047) list_single_graphic_hl_pane

0x70f4,	// (0x000070f4) aid_size_min_hl_cp1

0x70fd,	// (0x000070fd) list_highlight_pane_cp34_ParamLimits

0x70fd,	// (0x000070fd) list_highlight_pane_cp34

0x710e,	// (0x0000710e) list_single_graphic_hl_pane_g1_ParamLimits

0x710e,	// (0x0000710e) list_single_graphic_hl_pane_g1

0xd5ba,	// (0x0000d5ba) list_single_graphic_hl_pane_g2_ParamLimits

0xd5ba,	// (0x0000d5ba) list_single_graphic_hl_pane_g2

0xd5ba,	// (0x0000d5ba) list_single_graphic_hl_pane_g3_ParamLimits

0xd5ba,	// (0x0000d5ba) list_single_graphic_hl_pane_g3

0x2510,	// (0x00002510) list_single_graphic_hl_pane_g4_ParamLimits

0x2510,	// (0x00002510) list_single_graphic_hl_pane_g4

0xd5c6,	// (0x0000d5c6) list_single_graphic_hl_pane_g5_ParamLimits

0xd5c6,	// (0x0000d5c6) list_single_graphic_hl_pane_g5

0x0004,

0xf25e,	// (0x0000f25e) list_single_graphic_hl_pane_g_ParamLimits

0xf25e,	// (0x0000f25e) list_single_graphic_hl_pane_g

0xd5da,	// (0x0000d5da) list_single_graphic_hl_pane_t1_ParamLimits

0xd5da,	// (0x0000d5da) list_single_graphic_hl_pane_t1

0x7151,	// (0x00007151) aid_size_min_hl_cp2

0x715a,	// (0x0000715a) list_highlight_pane_cp34_cp2_ParamLimits

0x715a,	// (0x0000715a) list_highlight_pane_cp34_cp2

0x710e,	// (0x0000710e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x710e,	// (0x0000710e) list_single_graphic_hl_pane_g1_cp2

0x7167,	// (0x00007167) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7167,	// (0x00007167) list_single_graphic_hl_pane_g2_cp2

0x7173,	// (0x00007173) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7173,	// (0x00007173) list_single_graphic_hl_pane_g3_cp2

0x350f,	// (0x0000350f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x350f,	// (0x0000350f) list_single_graphic_hl_pane_g4_cp2

0x7127,	// (0x00007127) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7127,	// (0x00007127) list_single_graphic_hl_pane_g5_cp2

0xbe55,	// (0x0000be55) control_pane_g4_ParamLimits

0xbe55,	// (0x0000be55) control_pane_g4

0x2b27,	// (0x00002b27) bg_popup_sub_pane_cp10_ParamLimits

0x643c,	// (0x0000643c) list_choice_list_pane_ParamLimits

0x644b,	// (0x0000644b) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d0f,	// (0x00006d0f) list_preview_fixed_pane_ParamLimits

0x6d25,	// (0x00006d25) list_preview_fixed_pane_cp_ParamLimits

0x6d25,	// (0x00006d25) list_preview_fixed_pane_cp

0x6d31,	// (0x00006d31) popup_preview_fixed_window_g1_ParamLimits

0x6d31,	// (0x00006d31) popup_preview_fixed_window_g1

0x6d3d,	// (0x00006d3d) popup_preview_fixed_window_g2_ParamLimits

0x6d3d,	// (0x00006d3d) popup_preview_fixed_window_g2

0x0002,

0xac41,	// (0x0000ac41) popup_preview_fixed_window_g_ParamLimits

0xac41,	// (0x0000ac41) popup_preview_fixed_window_g

0x199c,	// (0x0000199c) aid_navi_side_left_pane_ParamLimits

0x19b1,	// (0x000019b1) aid_navi_side_right_pane_ParamLimits

0x19c9,	// (0x000019c9) navi_icon_pane_stacon_ParamLimits

0x19dd,	// (0x000019dd) navi_navi_pane_stacon_ParamLimits

0x19c9,	// (0x000019c9) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x7197,	// (0x00007197) listscroll_text_info_pane

0x719f,	// (0x0000719f) list_text_info_pane_ParamLimits

0x719f,	// (0x0000719f) list_text_info_pane

0x71ae,	// (0x000071ae) scroll_pane_cp24_ParamLimits

0x71ae,	// (0x000071ae) scroll_pane_cp24

0xd5f0,	// (0x0000d5f0) list_text_info_pane_t1_ParamLimits

0xd5f0,	// (0x0000d5f0) list_text_info_pane_t1

0xbfdb,	// (0x0000bfdb) popup_fast_swap2_window_ParamLimits

0xbfdb,	// (0x0000bfdb) popup_fast_swap2_window

0x71fd,	// (0x000071fd) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c8d,	// (0x00003c8d) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x7207,	// (0x00007207) grid_fast2_pane

0x7211,	// (0x00007211) listscroll_fast2_pane_g1

0x7219,	// (0x00007219) listscroll_fast2_pane_g2

0x0001,

0xacbd,	// (0x0000acbd) listscroll_fast2_pane_g

0x166c,	// (0x0000166c) scroll_pane_cp26

0x7223,	// (0x00007223) cell_fast2_pane_ParamLimits

0x7223,	// (0x00007223) cell_fast2_pane

0x7238,	// (0x00007238) cell_fast2_pane_g1

0x7241,	// (0x00007241) cell_fast2_pane_g2

0x724a,	// (0x0000724a) cell_fast2_pane_g3

0x0002,

0xacc2,	// (0x0000acc2) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x71c3,	// (0x000071c3) list_single_text_info_pane

0x7252,	// (0x00007252) eswt_ctrl_button_pane

0x7252,	// (0x00007252) eswt_ctrl_canvas_pane

0x725a,	// (0x0000725a) eswt_ctrl_combo_pane

0x7252,	// (0x00007252) eswt_ctrl_default_pane

0x7252,	// (0x00007252) eswt_ctrl_label_pane

0x7262,	// (0x00007262) eswt_ctrl_wait_pane

0x726a,	// (0x0000726a) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x728a,	// (0x0000728a) popup_eswt_tasktip_window_ParamLimits

0x728a,	// (0x0000728a) popup_eswt_tasktip_window

0x3805,	// (0x00003805) bg_popup_window_pane_cp18

0x729b,	// (0x0000729b) eswt_control_pane_g1_ParamLimits

0x729b,	// (0x0000729b) eswt_control_pane_g1

0x72a8,	// (0x000072a8) eswt_control_pane_g2_ParamLimits

0x72a8,	// (0x000072a8) eswt_control_pane_g2

0x72b5,	// (0x000072b5) eswt_control_pane_g3_ParamLimits

0x72b5,	// (0x000072b5) eswt_control_pane_g3

0x72c2,	// (0x000072c2) eswt_control_pane_g4_ParamLimits

0x72c2,	// (0x000072c2) eswt_control_pane_g4

0x0003,

0xacc9,	// (0x0000acc9) eswt_control_pane_g_ParamLimits

0xacc9,	// (0x0000acc9) eswt_control_pane_g

0x1375,	// (0x00001375) bg_button_pane_ParamLimits

0x1375,	// (0x00001375) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x72cf,	// (0x000072cf) control_button_pane_g1_ParamLimits

0x72cf,	// (0x000072cf) control_button_pane_g1

0x72db,	// (0x000072db) control_button_pane_g2_ParamLimits

0x72db,	// (0x000072db) control_button_pane_g2

0x72e7,	// (0x000072e7) control_button_pane_g3_ParamLimits

0x72e7,	// (0x000072e7) control_button_pane_g3

0x0002,

0xacd2,	// (0x0000acd2) control_button_pane_g_ParamLimits

0xacd2,	// (0x0000acd2) control_button_pane_g

0x72fb,	// (0x000072fb) control_button_pane_t1

0x7309,	// (0x00007309) control_button_pane_t2

0x0001,

0xacd9,	// (0x0000acd9) control_button_pane_t

0x3677,	// (0x00003677) bg_button_pane_g1

0x367f,	// (0x0000367f) bg_button_pane_g2

0x3687,	// (0x00003687) bg_button_pane_g3

0x368f,	// (0x0000368f) bg_button_pane_g4

0x3697,	// (0x00003697) bg_button_pane_g5

0x369f,	// (0x0000369f) bg_button_pane_g6

0x36a7,	// (0x000036a7) bg_button_pane_g7

0x36af,	// (0x000036af) bg_button_pane_g8

0x36b7,	// (0x000036b7) bg_button_pane_g9

0x0008,

0xa953,	// (0x0000a953) bg_button_pane_g

0x63f7,	// (0x000063f7) common_borders_pane_ParamLimits

0x63f7,	// (0x000063f7) common_borders_pane

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy1_ParamLimits

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy1

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy1_ParamLimits

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy1

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy1_ParamLimits

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy1

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy1_ParamLimits

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy1

0x6432,	// (0x00006432) bg_eswt_ctrl_canvas_pane_g1

0x63f7,	// (0x000063f7) common_borders_pane_cp2_ParamLimits

0x63f7,	// (0x000063f7) common_borders_pane_cp2

0x63f7,	// (0x000063f7) common_borders_pane_cp3_ParamLimits

0x63f7,	// (0x000063f7) common_borders_pane_cp3

0x7317,	// (0x00007317) separator_horizontal_pane

0x731f,	// (0x0000731f) separator_vertical_pane

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy2_ParamLimits

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy2

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy2_ParamLimits

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy2

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy2_ParamLimits

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy2

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy2_ParamLimits

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7328,	// (0x00007328) separator_horizontal_pane_g1

0x7331,	// (0x00007331) separator_horizontal_pane_g2

0x733a,	// (0x0000733a) separator_horizontal_pane_g3

0x0002,

0xacde,	// (0x0000acde) separator_horizontal_pane_g

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy3_ParamLimits

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy3

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy3_ParamLimits

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy3

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy3_ParamLimits

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy3

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy3_ParamLimits

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7343,	// (0x00007343) separator_vertical_pane_g1

0x734c,	// (0x0000734c) separator_vertical_pane_g2

0x7355,	// (0x00007355) separator_vertical_pane_g3

0x0002,

0xace5,	// (0x0000ace5) separator_vertical_pane_g

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy4_ParamLimits

0x729b,	// (0x0000729b) eswt_control_pane_g1_copy4

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy4_ParamLimits

0x72a8,	// (0x000072a8) eswt_control_pane_g2_copy4

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy4_ParamLimits

0x72b5,	// (0x000072b5) eswt_control_pane_g3_copy4

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy4_ParamLimits

0x72c2,	// (0x000072c2) eswt_control_pane_g4_copy4

0xd60b,	// (0x0000d60b) eswt_ctrl_combo_button_pane

0xd613,	// (0x0000d613) eswt_ctrl_input_pane

0xd61b,	// (0x0000d61b) popup_choice_list_window_cp70

0xd623,	// (0x0000d623) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x63f7,	// (0x000063f7) bg_button_pane_cp70_ParamLimits

0x63f7,	// (0x000063f7) bg_button_pane_cp70

0xd631,	// (0x0000d631) eswt_ctrl_combo_button_pane_g1

0x738c,	// (0x0000738c) wait_bar_pane_cp70

0x3805,	// (0x00003805) bg_popup_window_pane_cp70_ParamLimits

0x3805,	// (0x00003805) bg_popup_window_pane_cp70

0x7394,	// (0x00007394) popup_eswt_tasktip_window_t1

0x73aa,	// (0x000073aa) wait_bar_pane_cp71_ParamLimits

0x73aa,	// (0x000073aa) wait_bar_pane_cp71

0x73b6,	// (0x000073b6) grid_eswt_app_pane

0x1b56,	// (0x00001b56) scroll_pane_cp70

0xd639,	// (0x0000d639) cell_eswt_app_pane_ParamLimits

0xd639,	// (0x0000d639) cell_eswt_app_pane

0xd663,	// (0x0000d663) cell_eswt_app_pane_g1_ParamLimits

0xd663,	// (0x0000d663) cell_eswt_app_pane_g1

0xd692,	// (0x0000d692) cell_eswt_app_pane_g2_ParamLimits

0xd692,	// (0x0000d692) cell_eswt_app_pane_g2

0x0001,

0xf269,	// (0x0000f269) cell_eswt_app_pane_g_ParamLimits

0xf269,	// (0x0000f269) cell_eswt_app_pane_g

0xd6bb,	// (0x0000d6bb) cell_eswt_app_pane_t1_ParamLimits

0xd6bb,	// (0x0000d6bb) cell_eswt_app_pane_t1

0x7479,	// (0x00007479) grid_highlight_pane_cp70_ParamLimits

0x7479,	// (0x00007479) grid_highlight_pane_cp70

0x2474,	// (0x00002474) set_content_pane_g1

0x28f4,	// (0x000028f4) status_small_volume_pane

0x7485,	// (0x00007485) status_small_volume_pane_g1

0x748d,	// (0x0000748d) volume_small2_pane

0x7496,	// (0x00007496) volume_small2_pane_g1

0x749f,	// (0x0000749f) volume_small2_pane_g2

0x74a8,	// (0x000074a8) volume_small2_pane_g3

0x74b1,	// (0x000074b1) volume_small2_pane_g4

0x74ba,	// (0x000074ba) volume_small2_pane_g5

0x74c3,	// (0x000074c3) volume_small2_pane_g6

0x74cc,	// (0x000074cc) volume_small2_pane_g7

0x74d5,	// (0x000074d5) volume_small2_pane_g8

0x74de,	// (0x000074de) volume_small2_pane_g9

0x74e7,	// (0x000074e7) volume_small2_pane_g10

0x0009,

0xacf1,	// (0x0000acf1) volume_small2_pane_g

0x6a20,	// (0x00006a20) fep_vkb_top_text_pane_g1_ParamLimits

0xd562,	// (0x0000d562) fep_vkb_top_text_pane_t1_ParamLimits

0x6d49,	// (0x00006d49) popup_preview_fixed_window_g3_ParamLimits

0x6d49,	// (0x00006d49) popup_preview_fixed_window_g3

0xc5d4,	// (0x0000c5d4) popup_toolbar_trans_pane

0xce90,	// (0x0000ce90) aid_height_set_list_ParamLimits

0x4e41,	// (0x00004e41) aid_size_parent_ParamLimits

0x2b27,	// (0x00002b27) list_highlight_pane_cp2_ParamLimits

0x2474,	// (0x00002474) set_content_pane_g1_ParamLimits

0xd058,	// (0x0000d058) list_single_image_pane_ParamLimits

0xd058,	// (0x0000d058) list_single_image_pane

0x74f0,	// (0x000074f0) aid_size_cell_image_ParamLimits

0x74f0,	// (0x000074f0) aid_size_cell_image

0xd6ed,	// (0x0000d6ed) grid_single_image_pane_ParamLimits

0xd6ed,	// (0x0000d6ed) grid_single_image_pane

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1

0x6d76,	// (0x00006d76) list_single_image_pane_g2_ParamLimits

0x6d76,	// (0x00006d76) list_single_image_pane_g2

0x0001,

0xad06,	// (0x0000ad06) list_single_image_pane_g_ParamLimits

0xad06,	// (0x0000ad06) list_single_image_pane_g

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1

0xd6fb,	// (0x0000d6fb) cell_image_list_pane_ParamLimits

0xd6fb,	// (0x0000d6fb) cell_image_list_pane

0x751e,	// (0x0000751e) cell_image_list_pane_g1

0x7527,	// (0x00007527) cell_image_list_pane_g2

0x0001,

0xad0b,	// (0x0000ad0b) cell_image_list_pane_g

0x7530,	// (0x00007530) aid_size_cell_tb_trans_pane

0x1375,	// (0x00001375) bg_tb_trans_pane

0x7542,	// (0x00007542) grid_tb_trans_pane

0x3677,	// (0x00003677) bg_tb_trans_pane_g1

0x367f,	// (0x0000367f) bg_tb_trans_pane_g2

0x3687,	// (0x00003687) bg_tb_trans_pane_g3

0x368f,	// (0x0000368f) bg_tb_trans_pane_g4

0x3697,	// (0x00003697) bg_tb_trans_pane_g5

0x36af,	// (0x000036af) bg_tb_trans_pane_g6

0x36b7,	// (0x000036b7) bg_tb_trans_pane_g7

0x369f,	// (0x0000369f) bg_tb_trans_pane_g8

0x36a7,	// (0x000036a7) bg_tb_trans_pane_g9

0x0008,

0xad10,	// (0x0000ad10) bg_tb_trans_pane_g

0x7556,	// (0x00007556) cell_toolbar_trans_pane_ParamLimits

0x7556,	// (0x00007556) cell_toolbar_trans_pane

0x6432,	// (0x00006432) cell_toolbar_trans_pane_g1

0xd2b8,	// (0x0000d2b8) list_form2_midp_pane_t1

0xd2c6,	// (0x0000d2c6) list_form2_midp_pane_t2

0x0001,

0xf239,	// (0x0000f239) list_form2_midp_pane_t

0x5fc8,	// (0x00005fc8) scroll_pane_cp51_ParamLimits

0x61d3,	// (0x000061d3) form2_midp_wait_pane_g1

0x61dc,	// (0x000061dc) form2_midp_wait_pane_g2

0x61e5,	// (0x000061e5) form2_midp_wait_pane_g3

0x0002,

0xabce,	// (0x0000abce) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x623c,	// (0x0000623c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x624b,	// (0x0000624b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5047,	// (0x00005047) list_single_2graphic_im_pane_ParamLimits

0x5047,	// (0x00005047) list_single_2graphic_im_pane

0xd711,	// (0x0000d711) list_single_2graphic_im_pane_g1_ParamLimits

0xd711,	// (0x0000d711) list_single_2graphic_im_pane_g1

0xd722,	// (0x0000d722) list_single_2graphic_im_pane_g2_ParamLimits

0xd722,	// (0x0000d722) list_single_2graphic_im_pane_g2

0xd72e,	// (0x0000d72e) list_single_2graphic_im_pane_g3_ParamLimits

0xd72e,	// (0x0000d72e) list_single_2graphic_im_pane_g3

0x0003,

0xf26e,	// (0x0000f26e) list_single_2graphic_im_pane_g_ParamLimits

0xf26e,	// (0x0000f26e) list_single_2graphic_im_pane_g

0xd742,	// (0x0000d742) list_single_2graphic_im_pane_t1_ParamLimits

0xd742,	// (0x0000d742) list_single_2graphic_im_pane_t1

0x6d55,	// (0x00006d55) list_single_graphic_2heading_pane_fp_ParamLimits

0x6d55,	// (0x00006d55) list_single_graphic_2heading_pane_fp

0x6dad,	// (0x00006dad) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6dad,	// (0x00006dad) list_single_graphic_2heading_pane_fp_g1

0x6d6a,	// (0x00006d6a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6d6a,	// (0x00006d6a) list_single_graphic_2heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3

0x6d76,	// (0x00006d76) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6d76,	// (0x00006d76) list_single_graphic_2heading_pane_fp_g4

0x6d8a,	// (0x00006d8a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6d8a,	// (0x00006d8a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xac51,	// (0x0000ac51) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xac51,	// (0x0000ac51) list_single_graphic_2heading_pane_fp_g

0x75ea,	// (0x000075ea) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x75ea,	// (0x000075ea) list_single_graphic_2heading_pane_fp_t1

0x6de5,	// (0x00006de5) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6de5,	// (0x00006de5) list_single_graphic_2heading_pane_fp_t2

0x7600,	// (0x00007600) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7600,	// (0x00007600) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xad2c,	// (0x0000ad2c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xad2c,	// (0x0000ad2c) list_single_graphic_2heading_pane_fp_t

0x6670,	// (0x00006670) fep_hwr_write_pane_g5_ParamLimits

0x6670,	// (0x00006670) fep_hwr_write_pane_g5

0x667c,	// (0x0000667c) fep_hwr_write_pane_g6_ParamLimits

0x667c,	// (0x0000667c) fep_hwr_write_pane_g6

0x726a,	// (0x0000726a) eswt_shell_pane_ParamLimits

0x3805,	// (0x00003805) bg_popup_window_pane_cp18_ParamLimits

0x4ce9,	// (0x00004ce9) heading_pane_cp70

0x7394,	// (0x00007394) popup_eswt_tasktip_window_t1_ParamLimits

0xc695,	// (0x0000c695) aid_touch_tab_arrow_left

0xc6ab,	// (0x0000c6ab) aid_touch_tab_arrow_right

0xb1a3,	// (0x0000b1a3) title_pane_g3_ParamLimits

0xb1a3,	// (0x0000b1a3) title_pane_g3

0x1254,	// (0x00001254) set_value_pane_g1

0xc5d4,	// (0x0000c5d4) popup_toolbar_trans_pane_ParamLimits

0x7530,	// (0x00007530) aid_size_cell_tb_trans_pane_ParamLimits

0x1375,	// (0x00001375) bg_tb_trans_pane_ParamLimits

0x7542,	// (0x00007542) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3e77,	// (0x00003e77) cont_note_wait_pane_ParamLimits

0x3e77,	// (0x00003e77) cont_note_wait_pane

0x3e77,	// (0x00003e77) cont_note_image_pane_ParamLimits

0x3e77,	// (0x00003e77) cont_note_image_pane

0x7616,	// (0x00007616) popup_note2_window_g1_ParamLimits

0x7616,	// (0x00007616) popup_note2_window_g1

0x7647,	// (0x00007647) popup_note2_window_t1_ParamLimits

0x7647,	// (0x00007647) popup_note2_window_t1

0x768c,	// (0x0000768c) popup_note2_window_t2_ParamLimits

0x768c,	// (0x0000768c) popup_note2_window_t2

0x76d1,	// (0x000076d1) popup_note2_window_t3_ParamLimits

0x76d1,	// (0x000076d1) popup_note2_window_t3

0x7716,	// (0x00007716) popup_note2_window_t4_ParamLimits

0x7716,	// (0x00007716) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xad38,	// (0x0000ad38) popup_note2_window_t_ParamLimits

0xad38,	// (0x0000ad38) popup_note2_window_t

0x7745,	// (0x00007745) popup_note2_image_window_g1_ParamLimits

0x7745,	// (0x00007745) popup_note2_image_window_g1

0x7751,	// (0x00007751) popup_note2_image_window_g2_ParamLimits

0x7751,	// (0x00007751) popup_note2_image_window_g2

0x0001,

0xad43,	// (0x0000ad43) popup_note2_image_window_g_ParamLimits

0xad43,	// (0x0000ad43) popup_note2_image_window_g

0x7763,	// (0x00007763) popup_note2_image_window_t1_ParamLimits

0x7763,	// (0x00007763) popup_note2_image_window_t1

0x777b,	// (0x0000777b) popup_note2_image_window_t2_ParamLimits

0x777b,	// (0x0000777b) popup_note2_image_window_t2

0x7793,	// (0x00007793) popup_note2_image_window_t3_ParamLimits

0x7793,	// (0x00007793) popup_note2_image_window_t3

0x0002,

0xad48,	// (0x0000ad48) popup_note2_image_window_t_ParamLimits

0xad48,	// (0x0000ad48) popup_note2_image_window_t

0x3e85,	// (0x00003e85) popup_note2_wait_window_g1_ParamLimits

0x3e85,	// (0x00003e85) popup_note2_wait_window_g1

0x77af,	// (0x000077af) popup_note2_wait_window_g2_ParamLimits

0x77af,	// (0x000077af) popup_note2_wait_window_g2

0x3e9d,	// (0x00003e9d) popup_note2_wait_window_g3_ParamLimits

0x3e9d,	// (0x00003e9d) popup_note2_wait_window_g3

0x0002,

0xad4f,	// (0x0000ad4f) popup_note2_wait_window_g_ParamLimits

0xad4f,	// (0x0000ad4f) popup_note2_wait_window_g

0x77bb,	// (0x000077bb) popup_note2_wait_window_t1_ParamLimits

0x77bb,	// (0x000077bb) popup_note2_wait_window_t1

0x77d9,	// (0x000077d9) popup_note2_wait_window_t2_ParamLimits

0x77d9,	// (0x000077d9) popup_note2_wait_window_t2

0x77f7,	// (0x000077f7) popup_note2_wait_window_t3_ParamLimits

0x77f7,	// (0x000077f7) popup_note2_wait_window_t3

0x7809,	// (0x00007809) popup_note2_wait_window_t4_ParamLimits

0x7809,	// (0x00007809) popup_note2_wait_window_t4

0x0003,

0xad56,	// (0x0000ad56) popup_note2_wait_window_t_ParamLimits

0xad56,	// (0x0000ad56) popup_note2_wait_window_t

0x781b,	// (0x0000781b) wait_bar2_pane_ParamLimits

0x781b,	// (0x0000781b) wait_bar2_pane

0x7833,	// (0x00007833) popup_snote2_single_text_window_g1_ParamLimits

0x7833,	// (0x00007833) popup_snote2_single_text_window_g1

0x785b,	// (0x0000785b) popup_snote2_single_text_window_t1_ParamLimits

0x785b,	// (0x0000785b) popup_snote2_single_text_window_t1

0x78a7,	// (0x000078a7) popup_snote2_single_text_window_t2_ParamLimits

0x78a7,	// (0x000078a7) popup_snote2_single_text_window_t2

0x78f3,	// (0x000078f3) popup_snote2_single_text_window_t3_ParamLimits

0x78f3,	// (0x000078f3) popup_snote2_single_text_window_t3

0x7934,	// (0x00007934) popup_snote2_single_text_window_t4_ParamLimits

0x7934,	// (0x00007934) popup_snote2_single_text_window_t4

0x796a,	// (0x0000796a) popup_snote2_single_text_window_t5_ParamLimits

0x796a,	// (0x0000796a) popup_snote2_single_text_window_t5

0x0004,

0xad5f,	// (0x0000ad5f) popup_snote2_single_text_window_t_ParamLimits

0xad5f,	// (0x0000ad5f) popup_snote2_single_text_window_t

0x7995,	// (0x00007995) popup_snote2_single_graphic_window_g1_ParamLimits

0x7995,	// (0x00007995) popup_snote2_single_graphic_window_g1

0x79bd,	// (0x000079bd) popup_snote2_single_graphic_window_g2_ParamLimits

0x79bd,	// (0x000079bd) popup_snote2_single_graphic_window_g2

0x0001,

0xad6a,	// (0x0000ad6a) popup_snote2_single_graphic_window_g_ParamLimits

0xad6a,	// (0x0000ad6a) popup_snote2_single_graphic_window_g

0x79e5,	// (0x000079e5) popup_snote2_single_graphic_window_t1_ParamLimits

0x79e5,	// (0x000079e5) popup_snote2_single_graphic_window_t1

0x7a31,	// (0x00007a31) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a31,	// (0x00007a31) popup_snote2_single_graphic_window_t2

0x78f3,	// (0x000078f3) popup_snote2_single_graphic_window_t3_ParamLimits

0x78f3,	// (0x000078f3) popup_snote2_single_graphic_window_t3

0x7934,	// (0x00007934) popup_snote2_single_graphic_window_t4_ParamLimits

0x7934,	// (0x00007934) popup_snote2_single_graphic_window_t4

0x796a,	// (0x0000796a) popup_snote2_single_graphic_window_t5_ParamLimits

0x796a,	// (0x0000796a) popup_snote2_single_graphic_window_t5

0x0004,

0xad6f,	// (0x0000ad6f) popup_snote2_single_graphic_window_t_ParamLimits

0xad6f,	// (0x0000ad6f) popup_snote2_single_graphic_window_t

0x5e34,	// (0x00005e34) clock_nsta_pane_cp2_t1

0x5e34,	// (0x00005e34) clock_nsta_pane_cp2_t2

0x0001,

0xab8f,	// (0x0000ab8f) clock_nsta_pane_cp2_t

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3_ParamLimits

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3

0x0002,

0xa77a,	// (0x0000a77a) form_field_data_wide_pane_g_ParamLimits

0xa77a,	// (0x0000a77a) form_field_data_wide_pane_g

0xd1d2,	// (0x0000d1d2) grid_touch_3_pane_ParamLimits

0xd1d2,	// (0x0000d1d2) grid_touch_3_pane

0xd773,	// (0x0000d773) cell_touch_3_pane_ParamLimits

0xd773,	// (0x0000d773) cell_touch_3_pane

0x6432,	// (0x00006432) cell_touch_3_pane_g1

0x6432,	// (0x00006432) cell_touch_3_pane_g2

0x0001,

0xac14,	// (0x0000ac14) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7aab,	// (0x00007aab) button_value_adjust_pane_cp7

0x7ab3,	// (0x00007ab3) query_popup_pane_cp3

0x1e5a,	// (0x00001e5a) bg_popup_sub_pane_cp22_ParamLimits

0x1e70,	// (0x00001e70) navi_navi_volume_pane_cp2

0x1e8b,	// (0x00001e8b) popup_side_volume_key_window_g2

0x1e9a,	// (0x00001e9a) popup_side_volume_key_window_g3

0x0002,

0xa80c,	// (0x0000a80c) popup_side_volume_key_window_g

0x1eb7,	// (0x00001eb7) popup_side_volume_key_window_t2

0x0001,

0xa813,	// (0x0000a813) popup_side_volume_key_window_t

0x233e,	// (0x0000233e) popup_side_volume_key_window_ParamLimits

0xb663,	// (0x0000b663) list_double_graphic_pane_g4_ParamLimits

0xb663,	// (0x0000b663) list_double_graphic_pane_g4

0xd034,	// (0x0000d034) list_single_2heading_msg_pane_ParamLimits

0xd034,	// (0x0000d034) list_single_2heading_msg_pane

0xd7bc,	// (0x0000d7bc) list_single_2heading_msg_pane_g1_ParamLimits

0xd7bc,	// (0x0000d7bc) list_single_2heading_msg_pane_g1

0xd7c8,	// (0x0000d7c8) list_single_2heading_msg_pane_g2_ParamLimits

0xd7c8,	// (0x0000d7c8) list_single_2heading_msg_pane_g2

0xd7db,	// (0x0000d7db) list_single_2heading_msg_pane_g3_ParamLimits

0xd7db,	// (0x0000d7db) list_single_2heading_msg_pane_g3

0xd7e7,	// (0x0000d7e7) list_single_2heading_msg_pane_g4_ParamLimits

0xd7e7,	// (0x0000d7e7) list_single_2heading_msg_pane_g4

0x0003,

0xf277,	// (0x0000f277) list_single_2heading_msg_pane_g_ParamLimits

0xf277,	// (0x0000f277) list_single_2heading_msg_pane_g

0xd7ff,	// (0x0000d7ff) list_single_2heading_msg_pane_t1_ParamLimits

0xd7ff,	// (0x0000d7ff) list_single_2heading_msg_pane_t1

0xd827,	// (0x0000d827) list_single_2heading_msg_pane_t2_ParamLimits

0xd827,	// (0x0000d827) list_single_2heading_msg_pane_t2

0xd892,	// (0x0000d892) list_single_2heading_msg_pane_t3_ParamLimits

0xd892,	// (0x0000d892) list_single_2heading_msg_pane_t3

0x7ba2,	// (0x00007ba2) list_single_2heading_msg_pane_t4_ParamLimits

0x7ba2,	// (0x00007ba2) list_single_2heading_msg_pane_t4

0x0003,

0xf280,	// (0x0000f280) list_single_2heading_msg_pane_t_ParamLimits

0xf280,	// (0x0000f280) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18c4,	// (0x000018c4) title_pane_stacon_g3_ParamLimits

0x18c4,	// (0x000018c4) title_pane_stacon_g3

0x75ad,	// (0x000075ad) list_single_2graphic_im_pane_g4_ParamLimits

0x75ad,	// (0x000075ad) list_single_2graphic_im_pane_g4

0x4a40,	// (0x00004a40) popup_side_volume_key_window_cp

0x54bc,	// (0x000054bc) main_idle_act2_pane_t1

0x36bf,	// (0x000036bf) toolbar_button_pane_g10

0xb510,	// (0x0000b510) popup_toolbar_window_cp1

0x5e25,	// (0x00005e25) clock_nsta_pane_cp_t1

0x5e25,	// (0x00005e25) clock_nsta_pane_cp_t2

0x0001,

0xab8a,	// (0x0000ab8a) clock_nsta_pane_cp_t

0x1e70,	// (0x00001e70) navi_navi_volume_pane_cp2_ParamLimits

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_g1_ParamLimits

0x1e8b,	// (0x00001e8b) popup_side_volume_key_window_g2_ParamLimits

0x1e9a,	// (0x00001e9a) popup_side_volume_key_window_g3_ParamLimits

0xa80c,	// (0x0000a80c) popup_side_volume_key_window_g_ParamLimits

0x64b0,	// (0x000064b0) fep_hwr_aid_pane

0x6557,	// (0x00006557) bg_fep_hwr_top_pane_g4_ParamLimits

0x6577,	// (0x00006577) fep_hwr_top_pane_g1_ParamLimits

0x6589,	// (0x00006589) fep_hwr_top_pane_g2_ParamLimits

0x659b,	// (0x0000659b) fep_hwr_top_pane_g3_ParamLimits

0xabdf,	// (0x0000abdf) fep_hwr_top_pane_g_ParamLimits

0x65b0,	// (0x000065b0) fep_hwr_top_text_pane_ParamLimits

0x4803,	// (0x00004803) aid_touch_tab_arrow_arrow_2

0x480c,	// (0x0000480c) aid_touch_tab_arrow_left_2

0x64c4,	// (0x000064c4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x64fb,	// (0x000064fb) fep_hwr_prediction_pane

0x6828,	// (0x00006828) fep_vkb_prediction_pane

0xd542,	// (0x0000d542) fep_vkb_side_pane_g3_ParamLimits

0xd542,	// (0x0000d542) fep_vkb_side_pane_g3

0x68d8,	// (0x000068d8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6fa2,	// (0x00006fa2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6faf,	// (0x00006faf) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xac89,	// (0x0000ac89) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7bc7,	// (0x00007bc7) fep_hwr_prediction_pane_g1

0x7bd1,	// (0x00007bd1) fep_hwr_prediction_pane_g2

0x7bd9,	// (0x00007bd9) fep_hwr_prediction_pane_g3

0x7be1,	// (0x00007be1) fep_hwr_prediction_pane_g4

0x0003,

0xad8c,	// (0x0000ad8c) fep_hwr_prediction_pane_g

0x7bc7,	// (0x00007bc7) fep_vkb_prediction_pane_g1

0x7be9,	// (0x00007be9) fep_vkb_prediction_pane_g2

0x7bf1,	// (0x00007bf1) fep_vkb_prediction_pane_g3

0x7bf9,	// (0x00007bf9) fep_vkb_prediction_pane_g4

0x0003,

0xad95,	// (0x0000ad95) fep_vkb_prediction_pane_g

0x4daa,	// (0x00004daa) slider_set_pane_g3

0x4dbe,	// (0x00004dbe) slider_set_pane_g4

0x4dd6,	// (0x00004dd6) slider_set_pane_g5

0x4daa,	// (0x00004daa) slider_set_pane_g6

0x4dec,	// (0x00004dec) slider_set_pane_g7

0x4fa6,	// (0x00004fa6) slider_form_pane_g3

0x4faf,	// (0x00004faf) slider_form_pane_g4

0x4fb7,	// (0x00004fb7) slider_form_pane_g5

0x4fa6,	// (0x00004fa6) slider_form_pane_g6

0xcfdb,	// (0x0000cfdb) slider_form_pane_g7

0x57aa,	// (0x000057aa) slider_set_pane_vc_g3

0x57b3,	// (0x000057b3) slider_set_pane_vc_g4

0x57bc,	// (0x000057bc) slider_set_pane_vc_g5

0x57aa,	// (0x000057aa) slider_set_pane_vc_g6

0x57c5,	// (0x000057c5) slider_set_pane_vc_g7

0x57aa,	// (0x000057aa) slider_form_pane_vc_g1

0x57b3,	// (0x000057b3) slider_form_pane_vc_g2

0x57bc,	// (0x000057bc) slider_form_pane_vc_g3

0x57aa,	// (0x000057aa) slider_form_pane_vc_g4

0x5b5d,	// (0x00005b5d) slider_form_pane_vc_g5

0x0004,

0xab70,	// (0x0000ab70) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c01,	// (0x00007c01) ai3_links_pane

0xd900,	// (0x0000d900) popup_ai3_data_window_ParamLimits

0xd900,	// (0x0000d900) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xd91a,	// (0x0000d91a) cell_ai3_links_pane_ParamLimits

0xd91a,	// (0x0000d91a) cell_ai3_links_pane

0x7c3c,	// (0x00007c3c) bg_popup_sub_pane_cp11

0x7c49,	// (0x00007c49) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7c6e,	// (0x00007c6e) heading_ai3_data_pane

0x7c76,	// (0x00007c76) list_ai3_gene_pane

0x7c82,	// (0x00007c82) popup_ai3_data_window_g1

0x7c8a,	// (0x00007c8a) heading_ai3_data_pane_g1

0x7c92,	// (0x00007c92) heading_ai3_data_pane_t1

0x7ca0,	// (0x00007ca0) list_double_ai3_gene_pane_ParamLimits

0x7ca0,	// (0x00007ca0) list_double_ai3_gene_pane

0x7cad,	// (0x00007cad) list_single_ai3_gene_pane_ParamLimits

0x7cad,	// (0x00007cad) list_single_ai3_gene_pane

0x63f7,	// (0x000063f7) list_highlight_pane_cp7_ParamLimits

0x63f7,	// (0x000063f7) list_highlight_pane_cp7

0x7cba,	// (0x00007cba) list_single_a13_gene_pane_t1_ParamLimits

0x7cba,	// (0x00007cba) list_single_a13_gene_pane_t1

0x7cd1,	// (0x00007cd1) list_single_ai3_gene_pane_g1

0x7cda,	// (0x00007cda) list_single_ai3_gene_pane_g2

0x0001,

0xad9e,	// (0x0000ad9e) list_single_ai3_gene_pane_g

0x7ce2,	// (0x00007ce2) list_double_ai3_gene_pane_g1_ParamLimits

0x7ce2,	// (0x00007ce2) list_double_ai3_gene_pane_g1

0x7cee,	// (0x00007cee) list_double_ai3_gene_pane_t1_ParamLimits

0x7cee,	// (0x00007cee) list_double_ai3_gene_pane_t1

0x7d0a,	// (0x00007d0a) list_double_ai3_gene_pane_t2_ParamLimits

0x7d0a,	// (0x00007d0a) list_double_ai3_gene_pane_t2

0x7d20,	// (0x00007d20) list_double_ai3_gene_pane_t3_ParamLimits

0x7d20,	// (0x00007d20) list_double_ai3_gene_pane_t3

0x0002,

0xada3,	// (0x0000ada3) list_double_ai3_gene_pane_t_ParamLimits

0xada3,	// (0x0000ada3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7ac4,	// (0x00007ac4) aid_size_min_col_2

0xd7a6,	// (0x0000d7a6) aid_size_min_msg_ParamLimits

0xd7a6,	// (0x0000d7a6) aid_size_min_msg

0xd556,	// (0x0000d556) fep_vkb_top_text_pane_g2_ParamLimits

0xd556,	// (0x0000d556) fep_vkb_top_text_pane_g2

0x0001,

0xf259,	// (0x0000f259) fep_vkb_top_text_pane_g_ParamLimits

0xf259,	// (0x0000f259) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7d3d,	// (0x00007d3d) grid_hc_apps_pane_ParamLimits

0x7d3d,	// (0x00007d3d) grid_hc_apps_pane

0x7d4c,	// (0x00007d4c) list_hc_apps_pane

0x7d54,	// (0x00007d54) scroll_pane_cp37_ParamLimits

0x7d54,	// (0x00007d54) scroll_pane_cp37

0xd934,	// (0x0000d934) cell_hc_apps_pane_ParamLimits

0xd934,	// (0x0000d934) cell_hc_apps_pane

0xd9f2,	// (0x0000d9f2) cell_hc_apps_pane_g1_ParamLimits

0xd9f2,	// (0x0000d9f2) cell_hc_apps_pane_g1

0x7e3f,	// (0x00007e3f) cell_hc_apps_pane_g2_ParamLimits

0x7e3f,	// (0x00007e3f) cell_hc_apps_pane_g2

0x7e5b,	// (0x00007e5b) cell_hc_apps_pane_g3_ParamLimits

0x7e5b,	// (0x00007e5b) cell_hc_apps_pane_g3

0x0002,

0xf289,	// (0x0000f289) cell_hc_apps_pane_g_ParamLimits

0xf289,	// (0x0000f289) cell_hc_apps_pane_g

0xda1f,	// (0x0000da1f) cell_hc_apps_pane_t1_ParamLimits

0xda1f,	// (0x0000da1f) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xda5d,	// (0x0000da5d) list_single_hc_apps_pane_ParamLimits

0xda5d,	// (0x0000da5d) list_single_hc_apps_pane

0xda8a,	// (0x0000da8a) list_single_hc_apps_pane_g1

0xdaa3,	// (0x0000daa3) list_single_hc_apps_pane_g2

0x0001,

0xf290,	// (0x0000f290) list_single_hc_apps_pane_g

0xdabc,	// (0x0000dabc) list_single_hc_apps_pane_g2_copy1

0x7f67,	// (0x00007f67) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xa662,	// (0x0000a662) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x2980,	// (0x00002980) control_pane_g5_ParamLimits

0x2980,	// (0x00002980) control_pane_g5

0x4d91,	// (0x00004d91) slider_set_pane_g1_ParamLimits

0x4d9e,	// (0x00004d9e) slider_set_pane_g2_ParamLimits

0x4daa,	// (0x00004daa) slider_set_pane_g3_ParamLimits

0x4dbe,	// (0x00004dbe) slider_set_pane_g4_ParamLimits

0x4dd6,	// (0x00004dd6) slider_set_pane_g5_ParamLimits

0x4daa,	// (0x00004daa) slider_set_pane_g6_ParamLimits

0x4dec,	// (0x00004dec) slider_set_pane_g7_ParamLimits

0xaa51,	// (0x0000aa51) slider_set_pane_g_ParamLimits

0x241f,	// (0x0000241f) navi_icon_text_pane_ParamLimits

0xc661,	// (0x0000c661) aid_fill_nsta_2_ParamLimits

0xc695,	// (0x0000c695) aid_touch_tab_arrow_left_ParamLimits

0xc6ab,	// (0x0000c6ab) aid_touch_tab_arrow_right_ParamLimits

0xc746,	// (0x0000c746) clock_nsta_pane_ParamLimits

0xcda5,	// (0x0000cda5) navi_icon_pane_g1_ParamLimits

0xcdb1,	// (0x0000cdb1) navi_text_pane_t1_ParamLimits

0xd29a,	// (0x0000d29a) navi_icon_text_pane_g1_ParamLimits

0xd2a6,	// (0x0000d2a6) navi_icon_text_pane_t1_ParamLimits

0xda8a,	// (0x0000da8a) list_single_hc_apps_pane_g1_ParamLimits

0xdaa3,	// (0x0000daa3) list_single_hc_apps_pane_g2_ParamLimits

0xf290,	// (0x0000f290) list_single_hc_apps_pane_g_ParamLimits

0xdabc,	// (0x0000dabc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f67,	// (0x00007f67) list_single_hc_apps_pane_t1_ParamLimits

0xb10f,	// (0x0000b10f) popup_toolbar2_fixed_window_ParamLimits

0xb10f,	// (0x0000b10f) popup_toolbar2_fixed_window

0xc5ca,	// (0x0000c5ca) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x7f95,	// (0x00007f95) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x7f95,	// (0x00007f95) grid_toolbar2_fixed_pane

0xdad8,	// (0x0000dad8) cell_toolbar2_fixed_pane_ParamLimits

0xdad8,	// (0x0000dad8) cell_toolbar2_fixed_pane

0xdaf3,	// (0x0000daf3) cell_toolbar2_fixed_pane_g1

0x7fb6,	// (0x00007fb6) toolbar2_fixed_button_pane

0x3677,	// (0x00003677) toolbar2_fixed_button_pane_g1

0x367f,	// (0x0000367f) toolbar2_fixed_button_pane_g2

0x3687,	// (0x00003687) toolbar2_fixed_button_pane_g3

0x368f,	// (0x0000368f) toolbar2_fixed_button_pane_g4

0x3697,	// (0x00003697) toolbar2_fixed_button_pane_g5

0x369f,	// (0x0000369f) toolbar2_fixed_button_pane_g6

0x36a7,	// (0x000036a7) toolbar2_fixed_button_pane_g7

0x36af,	// (0x000036af) toolbar2_fixed_button_pane_g8

0x36b7,	// (0x000036b7) toolbar2_fixed_button_pane_g9

0x0008,

0xa953,	// (0x0000a953) toolbar2_fixed_button_pane_g

0x7fbe,	// (0x00007fbe) cell_toolbar2_float_pane_ParamLimits

0x7fbe,	// (0x00007fbe) cell_toolbar2_float_pane

0x7fcf,	// (0x00007fcf) cell_toolbar2_float_pane_g1

0x7fb6,	// (0x00007fb6) toolbar2_fixed_button_pane_cp

0xd430,	// (0x0000d430) fep_vkb_accented_list_pane_ParamLimits

0xd430,	// (0x0000d430) fep_vkb_accented_list_pane

0x6c1f,	// (0x00006c1f) bg_popup_fep_shadow_pane_g9

0x259f,	// (0x0000259f) bg_popup_fep_shadow_pane_cp3

0x1653,	// (0x00001653) list_accented_list_pane

0x7fd8,	// (0x00007fd8) list_single_accented_list_pane_ParamLimits

0x7fd8,	// (0x00007fd8) list_single_accented_list_pane

0x259f,	// (0x0000259f) list_highlight_pane_cp10

0x7fe9,	// (0x00007fe9) list_single_accented_list_pane_t1

0xc4f4,	// (0x0000c4f4) popup_slider_window_ParamLimits

0xc4f4,	// (0x0000c4f4) popup_slider_window

0x7abb,	// (0x00007abb) aid_indentation_list_msg

0xdbec,	// (0x0000dbec) bg_popup_window_pane_cp19

0x810d,	// (0x0000810d) popup_slider_window_g1

0x8129,	// (0x00008129) popup_slider_window_g2

0x8145,	// (0x00008145) popup_slider_window_g3

0x0005,

0xf295,	// (0x0000f295) popup_slider_window_g

0x81a1,	// (0x000081a1) popup_slider_window_t1

0x8215,	// (0x00008215) small_volume_slider_vertical_pane

0x6432,	// (0x00006432) small_volume_slider_vertical_pane_g1

0x6432,	// (0x00006432) small_volume_slider_vertical_pane_g2

0x8231,	// (0x00008231) small_volume_slider_vertical_pane_g3

0x0002,

0xadc8,	// (0x0000adc8) small_volume_slider_vertical_pane_g

0xb07d,	// (0x0000b07d) area_side_right_pane_ParamLimits

0xb07d,	// (0x0000b07d) area_side_right_pane

0xdca4,	// (0x0000dca4) aid_size_side_button_ParamLimits

0xdca4,	// (0x0000dca4) aid_size_side_button

0xdcbd,	// (0x0000dcbd) grid_sctrl_middle_pane_ParamLimits

0xdcbd,	// (0x0000dcbd) grid_sctrl_middle_pane

0x826e,	// (0x0000826e) sctrl_sk_bottom_pane

0x827f,	// (0x0000827f) sctrl_sk_top_pane

0x8291,	// (0x00008291) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x829e,	// (0x0000829e) sctrl_sk_top_pane_g1

0x82ab,	// (0x000082ab) sctrl_sk_top_pane_t1

0x8291,	// (0x00008291) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x82c6,	// (0x000082c6) sctrl_sk_bottom_pane_g1

0x82ab,	// (0x000082ab) sctrl_sk_bottom_pane_t1

0xdcd7,	// (0x0000dcd7) cell_sctrl_middle_pane_ParamLimits

0xdcd7,	// (0x0000dcd7) cell_sctrl_middle_pane

0xdce8,	// (0x0000dce8) aid_touch_sctrl_middle_ParamLimits

0xdce8,	// (0x0000dce8) aid_touch_sctrl_middle

0xdcf5,	// (0x0000dcf5) bg_sctrl_middle_pane_ParamLimits

0xdcf5,	// (0x0000dcf5) bg_sctrl_middle_pane

0x838e,	// (0x0000838e) cell_sctrl_middle_pane_g1_ParamLimits

0x838e,	// (0x0000838e) cell_sctrl_middle_pane_g1

0xdd03,	// (0x0000dd03) cell_sctrl_middle_pane_g2_ParamLimits

0xdd03,	// (0x0000dd03) cell_sctrl_middle_pane_g2

0x0001,

0xf2a2,	// (0x0000f2a2) cell_sctrl_middle_pane_g_ParamLimits

0xf2a2,	// (0x0000f2a2) cell_sctrl_middle_pane_g

0x3677,	// (0x00003677) bg_sctrl_middle_pane_g1

0x367f,	// (0x0000367f) bg_sctrl_middle_pane_g2

0x3687,	// (0x00003687) bg_sctrl_middle_pane_g3

0x368f,	// (0x0000368f) bg_sctrl_middle_pane_g4

0x3697,	// (0x00003697) bg_sctrl_middle_pane_g5

0x369f,	// (0x0000369f) bg_sctrl_middle_pane_g6

0x36a7,	// (0x000036a7) bg_sctrl_middle_pane_g7

0x36af,	// (0x000036af) bg_sctrl_middle_pane_g8

0x0007,

0xadd9,	// (0x0000add9) bg_sctrl_middle_pane_g

0x36b7,	// (0x000036b7) bg_sctrl_middle_pane_g8_copy1

0x3677,	// (0x00003677) bg_sctrl_sk_pane_g1

0x367f,	// (0x0000367f) bg_sctrl_sk_pane_g2

0x3687,	// (0x00003687) bg_sctrl_sk_pane_g3

0x0008,

0xa953,	// (0x0000a953) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x368f,	// (0x0000368f) bg_sctrl_sk_pane_g4

0x3697,	// (0x00003697) bg_sctrl_sk_pane_g5

0x369f,	// (0x0000369f) bg_sctrl_sk_pane_g6

0x36a7,	// (0x000036a7) bg_sctrl_sk_pane_g7

0x36af,	// (0x000036af) bg_sctrl_sk_pane_g8

0x36b7,	// (0x000036b7) bg_sctrl_sk_pane_g9

0x2bcf,	// (0x00002bcf) popup_fep_china_hwr2_fs_candidate_window

0xc038,	// (0x0000c038) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc038,	// (0x0000c038) popup_fep_china_hwr2_fs_control_window

0x68d8,	// (0x000068d8) sctrl_sk_top_pane_g2

0x0001,

0xadcf,	// (0x0000adcf) sctrl_sk_top_pane_g

0xdd0f,	// (0x0000dd0f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdd0f,	// (0x0000dd0f) aid_fep_china_hwr2_fs_cell

0xdd23,	// (0x0000dd23) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdd23,	// (0x0000dd23) bg_popup_fep_shadow_pane_cp4

0xdd3a,	// (0x0000dd3a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd3a,	// (0x0000dd3a) bg_popup_fep_shadow_pane_cp5

0xdd4c,	// (0x0000dd4c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd4c,	// (0x0000dd4c) popup_fep_china_hwr2_fs_control_bar_grid

0xdd60,	// (0x0000dd60) popup_fep_china_hwr2_fs_control_funtion_grid

0x8362,	// (0x00008362) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x836c,	// (0x0000836c) popup_fep_china_hwr2_fs_candidate_grid

0xdd68,	// (0x0000dd68) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdd68,	// (0x0000dd68) cell_fep_china_hwr2_fs_funtion_grid

0x6432,	// (0x00006432) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x838e,	// (0x0000838e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x838e,	// (0x0000838e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x839c,	// (0x0000839c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x839c,	// (0x0000839c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xadea,	// (0x0000adea) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xadea,	// (0x0000adea) cell_fep_china_hwr2_fs_funtion_grid_g

0xdd80,	// (0x0000dd80) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdd80,	// (0x0000dd80) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdd95,	// (0x0000dd95) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdd95,	// (0x0000dd95) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf2a7,	// (0x0000f2a7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf2a7,	// (0x0000f2a7) cell_fep_china_hwr2_fs_funtion_grid_t

0x83e3,	// (0x000083e3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x83eb,	// (0x000083eb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x83f3,	// (0x000083f3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xadf4,	// (0x0000adf4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x83fb,	// (0x000083fb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x83fb,	// (0x000083fb) cell_fep_china_hwr2_fs_candidate_grid

0x8414,	// (0x00008414) popup_fep_china_hwr2_fs_candidate_grid_g20

0x841c,	// (0x0000841c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6432,	// (0x00006432) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6432,	// (0x00006432) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xac14,	// (0x0000ac14) cell_fep_china_hwr2_fs_candidate_grid_g

0x8424,	// (0x00008424) cell_fep_china_hwr2_fs_candidate_grid_t1

0x31c2,	// (0x000031c2) clock_nsta_pane_cp_24_ParamLimits

0x31c2,	// (0x000031c2) clock_nsta_pane_cp_24

0x3240,	// (0x00003240) indicator_nsta_pane_cp_24_ParamLimits

0x3240,	// (0x00003240) indicator_nsta_pane_cp_24

0x464a,	// (0x0000464a) heading_pane_g1

0x0001,

0xa9b8,	// (0x0000a9b8) heading_pane_g

0x524d,	// (0x0000524d) grid_sct_catagory_button_pane

0x527d,	// (0x0000527d) scroll_pane_cp5_ParamLimits

0x5fd4,	// (0x00005fd4) button_value_adjust_pane_cp5_ParamLimits

0x5fd4,	// (0x00005fd4) button_value_adjust_pane_cp5

0x60d0,	// (0x000060d0) form2_midp_time_pane_ParamLimits

0x8432,	// (0x00008432) cell_sct_catagory_button_pane_ParamLimits

0x8432,	// (0x00008432) cell_sct_catagory_button_pane

0x63f7,	// (0x000063f7) bg_button_pane_cp01_ParamLimits

0x63f7,	// (0x000063f7) bg_button_pane_cp01

0x6432,	// (0x00006432) cell_sct_catagory_button_pane_g1

0xc56d,	// (0x0000c56d) popup_tb_extension_window

0xddb1,	// (0x0000ddb1) aid_size_cell_ext_ParamLimits

0xddb1,	// (0x0000ddb1) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xddd7,	// (0x0000ddd7) grid_tb_ext_pane_ParamLimits

0xddd7,	// (0x0000ddd7) grid_tb_ext_pane

0xde12,	// (0x0000de12) cell_tb_ext_pane_ParamLimits

0xde12,	// (0x0000de12) cell_tb_ext_pane

0xde3a,	// (0x0000de3a) cell_tb_ext_pane_g1_ParamLimits

0xde3a,	// (0x0000de3a) cell_tb_ext_pane_g1

0x84c6,	// (0x000084c6) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14

0x84e1,	// (0x000084e1) list_uniindi_pane

0x84ed,	// (0x000084ed) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x850c,	// (0x0000850c) uniindi_top_pane_g1

0x8522,	// (0x00008522) uniindi_top_pane_g2

0x0003,

0xadfb,	// (0x0000adfb) uniindi_top_pane_g

0x854c,	// (0x0000854c) uniindi_top_pane_t1

0x8576,	// (0x00008576) list_single_uniindi_pane_ParamLimits

0x8576,	// (0x00008576) list_single_uniindi_pane

0x6432,	// (0x00006432) bg_uniindi_top_pane_g1

0x8589,	// (0x00008589) list_single_uniindi_pane_g1

0x859c,	// (0x0000859c) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x85c1,	// (0x000085c1) bg_sctrl_sk_pane_cp1

0x85ca,	// (0x000085ca) bg_sctrl_sk_pane_cp2

0x85d3,	// (0x000085d3) control_bg_pane_g1

0x85dc,	// (0x000085dc) control_bg_pane_g2

0x0001,

0xae04,	// (0x0000ae04) control_bg_pane_g

0x5de9,	// (0x00005de9) cell_indicator_nsta_pane_g1_ParamLimits

0xd201,	// (0x0000d201) cell_indicator_nsta_pane_g2_ParamLimits

0xf224,	// (0x0000f224) cell_indicator_nsta_pane_g_ParamLimits

0x6158,	// (0x00006158) form2_midp_time_pane_t1_ParamLimits

0x64a2,	// (0x000064a2) main_idle_act4_pane_ParamLimits

0x64a2,	// (0x000064a2) main_idle_act4_pane

0xc56d,	// (0x0000c56d) popup_tb_extension_window_ParamLimits

0xddf9,	// (0x0000ddf9) tb_ext_find_pane_ParamLimits

0xddf9,	// (0x0000ddf9) tb_ext_find_pane

0x85e5,	// (0x000085e5) ai_gene_pane_1_cp1

0x26e4,	// (0x000026e4) ai_gene_pane_2_cp1

0x85ed,	// (0x000085ed) list_single_idle_plugin_calendar_pane

0x85f6,	// (0x000085f6) list_single_idle_plugin_notification_pane

0x85ff,	// (0x000085ff) list_single_idle_plugin_player_pane

0xde57,	// (0x0000de57) list_single_idle_plugin_shortcut_pane_ParamLimits

0xde57,	// (0x0000de57) list_single_idle_plugin_shortcut_pane

0xde7f,	// (0x0000de7f) main_idle_act4_pane_t1

0xde95,	// (0x0000de95) main_idle_act4_pane_t2

0x0001,

0xf2ac,	// (0x0000f2ac) main_idle_act4_pane_t

0xdeab,	// (0x0000deab) middle_sk_idle_act4_pane_ParamLimits

0xdeab,	// (0x0000deab) middle_sk_idle_act4_pane

0xdec7,	// (0x0000dec7) popup_clock_digital_analogue_window_cp2

0xdeef,	// (0x0000deef) shortcut_wheel_idle_act4_pane_ParamLimits

0xdeef,	// (0x0000deef) shortcut_wheel_idle_act4_pane

0x6432,	// (0x00006432) shortcut_wheel_idle_act4_pane_g1

0x6432,	// (0x00006432) shortcut_wheel_idle_act4_pane_g2

0x6432,	// (0x00006432) shortcut_wheel_idle_act4_pane_g3

0x6432,	// (0x00006432) shortcut_wheel_idle_act4_pane_g4

0x6432,	// (0x00006432) shortcut_wheel_idle_act4_pane_g5

0x8692,	// (0x00008692) shortcut_wheel_idle_act4_pane_g6

0x869a,	// (0x0000869a) shortcut_wheel_idle_act4_pane_g7

0x86a2,	// (0x000086a2) shortcut_wheel_idle_act4_pane_g8

0x86aa,	// (0x000086aa) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xae0e,	// (0x0000ae0e) shortcut_wheel_idle_act4_pane_g

0x6557,	// (0x00006557) middle_sk_idle_act4_pane_g1_ParamLimits

0x6557,	// (0x00006557) middle_sk_idle_act4_pane_g1

0xdf6c,	// (0x0000df6c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdf6c,	// (0x0000df6c) middle_sk_idle_act4_pane_g2

0x0001,

0xf2c1,	// (0x0000f2c1) middle_sk_idle_act4_pane_g_ParamLimits

0xf2c1,	// (0x0000f2c1) middle_sk_idle_act4_pane_g

0xdf84,	// (0x0000df84) middle_sk_idle_act4_pane_t1_ParamLimits

0xdf84,	// (0x0000df84) middle_sk_idle_act4_pane_t1

0xdfb3,	// (0x0000dfb3) grid_ai_shortcut_pane_ParamLimits

0xdfb3,	// (0x0000dfb3) grid_ai_shortcut_pane

0xdfd0,	// (0x0000dfd0) list_highlight_pane_cp16_ParamLimits

0xdfd0,	// (0x0000dfd0) list_highlight_pane_cp16

0xdfdd,	// (0x0000dfdd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdfdd,	// (0x0000dfdd) list_single_idle_plugin_shortcut_pane_g1

0xdfe9,	// (0x0000dfe9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdfe9,	// (0x0000dfe9) list_single_idle_plugin_shortcut_pane_g2

0xe005,	// (0x0000e005) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe005,	// (0x0000e005) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf2c6,	// (0x0000f2c6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf2c6,	// (0x0000f2c6) list_single_idle_plugin_shortcut_pane_g

0xe01a,	// (0x0000e01a) cell_ai_shortcut_pane_ParamLimits

0xe01a,	// (0x0000e01a) cell_ai_shortcut_pane

0xe030,	// (0x0000e030) cell_ai_shortcut_pane_g1_ParamLimits

0xe030,	// (0x0000e030) cell_ai_shortcut_pane_g1

0x85e5,	// (0x000085e5) ai_gene_pane_1_cp2

0x87da,	// (0x000087da) ai_gene_pane_2_cp2

0x87e2,	// (0x000087e2) list_highlight_pane_cp15

0x87eb,	// (0x000087eb) list_single_idle_plugin_calendar_pane_g1

0x87e2,	// (0x000087e2) list_highlight_pane_cp17

0x87f3,	// (0x000087f3) list_single_idle_plugin_calendar_pane_g1_copy1

0x87fb,	// (0x000087fb) list_single_idle_plugin_player_pane_g1

0x555e,	// (0x0000555e) list_single_idle_plugin_player_pane_g2

0x0001,

0xae3d,	// (0x0000ae3d) list_single_idle_plugin_player_pane_g

0x8803,	// (0x00008803) list_single_idle_plugin_player_pane_t1

0x8811,	// (0x00008811) list_single_idle_plugin_player_pane_t2

0x881f,	// (0x0000881f) list_single_idle_plugin_player_pane_t3

0x882d,	// (0x0000882d) list_single_idle_plugin_player_pane_t4

0x0003,

0xae42,	// (0x0000ae42) list_single_idle_plugin_player_pane_t

0x883b,	// (0x0000883b) wait_bar_pane_cp15

0x8843,	// (0x00008843) grid_ai_notification_pane

0x555e,	// (0x0000555e) list_single_idle_plugin_notification_pane_g1

0xe052,	// (0x0000e052) cell_ai_notification_pane_ParamLimits

0xe052,	// (0x0000e052) cell_ai_notification_pane

0x8859,	// (0x00008859) cell_ai_notification_pane_g1

0x8861,	// (0x00008861) cell_ai_notification_pane_t1

0xe05f,	// (0x0000e05f) tb_ext_find_button_pane

0xe067,	// (0x0000e067) tb_ext_find_pane_g1

0xe06f,	// (0x0000e06f) tb_ext_find_pane_t1

0x1d1b,	// (0x00001d1b) tb_ext_find_button_pane_g1

0x888d,	// (0x0000888d) tb_ext_find_button_pane_g2

0x0001,

0xae4b,	// (0x0000ae4b) tb_ext_find_button_pane_g

0xde7f,	// (0x0000de7f) main_idle_act4_pane_t1_ParamLimits

0xde95,	// (0x0000de95) main_idle_act4_pane_t2_ParamLimits

0xf2ac,	// (0x0000f2ac) main_idle_act4_pane_t_ParamLimits

0xdec7,	// (0x0000dec7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdedf,	// (0x0000dedf) sat_plugin_idle_act4_pane_ParamLimits

0xdedf,	// (0x0000dedf) sat_plugin_idle_act4_pane

0xe07d,	// (0x0000e07d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe07d,	// (0x0000e07d) sat_plugin_idle_act4_pane_t1

0xe095,	// (0x0000e095) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe095,	// (0x0000e095) sat_plugin_idle_act4_pane_t2

0xe0ad,	// (0x0000e0ad) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe0ad,	// (0x0000e0ad) sat_plugin_idle_act4_pane_t3

0xe0c5,	// (0x0000e0c5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe0c5,	// (0x0000e0c5) sat_plugin_idle_act4_pane_t4

0x0003,

0xf2cd,	// (0x0000f2cd) sat_plugin_idle_act4_pane_t_ParamLimits

0xf2cd,	// (0x0000f2cd) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x88e2,	// (0x000088e2) popup_battery_window_g1_ParamLimits

0x88e2,	// (0x000088e2) popup_battery_window_g1

0x88ee,	// (0x000088ee) popup_battery_window_t1_ParamLimits

0x88ee,	// (0x000088ee) popup_battery_window_t1

0x8900,	// (0x00008900) popup_battery_window_t2_ParamLimits

0x8900,	// (0x00008900) popup_battery_window_t2

0x0001,

0xae59,	// (0x0000ae59) popup_battery_window_t_ParamLimits

0xae59,	// (0x0000ae59) popup_battery_window_t

0xbd79,	// (0x0000bd79) midp_canvas_pane_ParamLimits

0xbdd4,	// (0x0000bdd4) midp_keypad_pane_ParamLimits

0xbdd4,	// (0x0000bdd4) midp_keypad_pane

0x2b27,	// (0x00002b27) main_midp_pane_ParamLimits

0x5e43,	// (0x00005e43) signal_pane_g2_cp_ParamLimits

0xe0dd,	// (0x0000e0dd) aid_size_cell_midp_keypad_ParamLimits

0xe0dd,	// (0x0000e0dd) aid_size_cell_midp_keypad

0xe0fb,	// (0x0000e0fb) midp_keyp_game_grid_pane_ParamLimits

0xe0fb,	// (0x0000e0fb) midp_keyp_game_grid_pane

0xe122,	// (0x0000e122) midp_keyp_rocker_pane_ParamLimits

0xe122,	// (0x0000e122) midp_keyp_rocker_pane

0xe17b,	// (0x0000e17b) midp_keyp_sk_left_pane_ParamLimits

0xe17b,	// (0x0000e17b) midp_keyp_sk_left_pane

0xe1cf,	// (0x0000e1cf) midp_keyp_sk_right_pane_ParamLimits

0xe1cf,	// (0x0000e1cf) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe223,	// (0x0000e223) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe223,	// (0x0000e223) midp_keyp_sk_right_pane_g1

0x6432,	// (0x00006432) midp_keyp_rocker_pane_g1

0xe22c,	// (0x0000e22c) keyp_game_cell_pane_ParamLimits

0xe22c,	// (0x0000e22c) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe250,	// (0x0000e250) keyp_game_cell_pane_g1

0xb0bf,	// (0x0000b0bf) popup_fep_vkb2_window_ParamLimits

0xb0bf,	// (0x0000b0bf) popup_fep_vkb2_window

0xe259,	// (0x0000e259) aid_size_cell_vkb2_ParamLimits

0xe259,	// (0x0000e259) aid_size_cell_vkb2

0xe28f,	// (0x0000e28f) popup_fep_vkb2_window_g1_ParamLimits

0xe28f,	// (0x0000e28f) popup_fep_vkb2_window_g1

0xe2df,	// (0x0000e2df) vkb2_area_bottom_pane_ParamLimits

0xe2df,	// (0x0000e2df) vkb2_area_bottom_pane

0xe333,	// (0x0000e333) vkb2_area_keypad_pane_ParamLimits

0xe333,	// (0x0000e333) vkb2_area_keypad_pane

0xe37b,	// (0x0000e37b) vkb2_area_top_pane_ParamLimits

0xe37b,	// (0x0000e37b) vkb2_area_top_pane

0xe401,	// (0x0000e401) vkb2_top_entry_pane_ParamLimits

0xe401,	// (0x0000e401) vkb2_top_entry_pane

0xe42e,	// (0x0000e42e) vkb2_top_grid_left_pane_ParamLimits

0xe42e,	// (0x0000e42e) vkb2_top_grid_left_pane

0xe44e,	// (0x0000e44e) vkb2_top_grid_right_pane_ParamLimits

0xe44e,	// (0x0000e44e) vkb2_top_grid_right_pane

0x8c81,	// (0x00008c81) vkb2_cell_keypad_pane_ParamLimits

0x8c81,	// (0x00008c81) vkb2_cell_keypad_pane

0xe494,	// (0x0000e494) vkb2_area_bottom_grid_pane_ParamLimits

0xe494,	// (0x0000e494) vkb2_area_bottom_grid_pane

0xe4be,	// (0x0000e4be) vkb2_area_bottom_pane_g1_ParamLimits

0xe4be,	// (0x0000e4be) vkb2_area_bottom_pane_g1

0xe4e4,	// (0x0000e4e4) vkb2_area_bottom_pane_g2_ParamLimits

0xe4e4,	// (0x0000e4e4) vkb2_area_bottom_pane_g2

0xe515,	// (0x0000e515) vkb2_area_bottom_pane_g3_ParamLimits

0xe515,	// (0x0000e515) vkb2_area_bottom_pane_g3

0x0002,

0xf2d6,	// (0x0000f2d6) vkb2_area_bottom_pane_g_ParamLimits

0xf2d6,	// (0x0000f2d6) vkb2_area_bottom_pane_g

0x8e2b,	// (0x00008e2b) vkb2_top_cell_left_pane_ParamLimits

0x8e2b,	// (0x00008e2b) vkb2_top_cell_left_pane

0xe57f,	// (0x0000e57f) vkb2_top_entry_pane_g1_ParamLimits

0xe57f,	// (0x0000e57f) vkb2_top_entry_pane_g1

0xe58d,	// (0x0000e58d) vkb2_top_entry_pane_t1_ParamLimits

0xe58d,	// (0x0000e58d) vkb2_top_entry_pane_t1

0x8e93,	// (0x00008e93) vkb2_top_entry_pane_t2_ParamLimits

0x8e93,	// (0x00008e93) vkb2_top_entry_pane_t2

0x8ec5,	// (0x00008ec5) vkb2_top_entry_pane_t3_ParamLimits

0x8ec5,	// (0x00008ec5) vkb2_top_entry_pane_t3

0x0002,

0xf2dd,	// (0x0000f2dd) vkb2_top_entry_pane_t_ParamLimits

0xf2dd,	// (0x0000f2dd) vkb2_top_entry_pane_t

0xe5c6,	// (0x0000e5c6) vkb2_top_grid_right_pane_g1_ParamLimits

0xe5c6,	// (0x0000e5c6) vkb2_top_grid_right_pane_g1

0x8f2c,	// (0x00008f2c) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f2c,	// (0x00008f2c) vkb2_top_grid_right_pane_g2

0x8f44,	// (0x00008f44) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f44,	// (0x00008f44) vkb2_top_grid_right_pane_g3

0xe5dc,	// (0x0000e5dc) vkb2_top_grid_right_pane_g4_ParamLimits

0xe5dc,	// (0x0000e5dc) vkb2_top_grid_right_pane_g4

0x0003,

0xf2e4,	// (0x0000f2e4) vkb2_top_grid_right_pane_g_ParamLimits

0xf2e4,	// (0x0000f2e4) vkb2_top_grid_right_pane_g

0x8f72,	// (0x00008f72) vkb2_top_cell_left_pane_g1

0x8f89,	// (0x00008f89) vkb2_cell_keypad_pane_g1_ParamLimits

0x8f89,	// (0x00008f89) vkb2_cell_keypad_pane_g1

0x8f97,	// (0x00008f97) vkb2_cell_keypad_pane_t1_ParamLimits

0x8f97,	// (0x00008f97) vkb2_cell_keypad_pane_t1

0x8fae,	// (0x00008fae) vkb2_cell_bottom_grid_pane_ParamLimits

0x8fae,	// (0x00008fae) vkb2_cell_bottom_grid_pane

0x8fe7,	// (0x00008fe7) vkb2_cell_bottom_grid_pane_g1

0xdf10,	// (0x0000df10) aid_call2_pane_cp02

0xdf18,	// (0x0000df18) aid_call_pane_cp02

0xdf20,	// (0x0000df20) clock_digital_number_pane_cp10

0xdf28,	// (0x0000df28) clock_digital_number_pane_cp11

0xdf30,	// (0x0000df30) clock_digital_number_pane_cp12

0xdf38,	// (0x0000df38) clock_digital_number_pane_cp13

0xdf40,	// (0x0000df40) clock_digital_separator_pane_cp10

0x1d1b,	// (0x00001d1b) popup_clock_digital_analogue_window_cp2_g1

0x1d1b,	// (0x00001d1b) popup_clock_digital_analogue_window_cp2_g2

0xdf48,	// (0x0000df48) popup_clock_digital_analogue_window_cp2_g3

0x1d1b,	// (0x00001d1b) popup_clock_digital_analogue_window_cp2_g4

0xdf48,	// (0x0000df48) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf2b1,	// (0x0000f2b1) popup_clock_digital_analogue_window_cp2_g

0xdf50,	// (0x0000df50) popup_clock_digital_analogue_window_cp2_t1

0xdf5e,	// (0x0000df5e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf2bc,	// (0x0000f2bc) popup_clock_digital_analogue_window_cp2_t

0x6432,	// (0x00006432) clock_digital_number_pane_cp10_g1

0x6432,	// (0x00006432) clock_digital_number_pane_cp10_g2

0x0001,

0xac14,	// (0x0000ac14) clock_digital_number_pane_cp10_g

0x6432,	// (0x00006432) clock_digital_separator_pane_cp10_g1

0x6432,	// (0x00006432) clock_digital_separator_pane_cp10_g2

0x0001,

0xac14,	// (0x0000ac14) clock_digital_separator_pane_cp10_g

0x852e,	// (0x0000852e) uniindi_top_pane_g3

0x853f,	// (0x0000853f) uniindi_top_pane_g4

0x8d0c,	// (0x00008d0c) vkb2_row_keypad_pane_ParamLimits

0x8d0c,	// (0x00008d0c) vkb2_row_keypad_pane

0x9003,	// (0x00009003) vkb2_cell_t_keypad_pane_ParamLimits

0x9003,	// (0x00009003) vkb2_cell_t_keypad_pane

0x9013,	// (0x00009013) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9013,	// (0x00009013) vkb2_cell_t_keypad_pane_cp08

0x9026,	// (0x00009026) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9026,	// (0x00009026) vkb2_cell_t_keypad_pane_cp09

0x903a,	// (0x0000903a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x903a,	// (0x0000903a) vkb2_cell_t_keypad_pane_cp01

0x904b,	// (0x0000904b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x904b,	// (0x0000904b) vkb2_cell_t_keypad_pane_cp02

0x905c,	// (0x0000905c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x905c,	// (0x0000905c) vkb2_cell_t_keypad_pane_cp03

0x906d,	// (0x0000906d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x906d,	// (0x0000906d) vkb2_cell_t_keypad_pane_cp04

0x907e,	// (0x0000907e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x907e,	// (0x0000907e) vkb2_cell_t_keypad_pane_cp05

0x908f,	// (0x0000908f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x908f,	// (0x0000908f) vkb2_cell_t_keypad_pane_cp06

0x90a0,	// (0x000090a0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x90a0,	// (0x000090a0) vkb2_cell_t_keypad_pane_cp07

0x90b1,	// (0x000090b1) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x90b1,	// (0x000090b1) vkb2_cell_t_keypad_pane_cp10

0x68d8,	// (0x000068d8) vkb2_cell_t_keypad_pane_g1

0x90c6,	// (0x000090c6) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe5f2,	// (0x0000e5f2) aid_size_cell_graphic2_ParamLimits

0xe5f2,	// (0x0000e5f2) aid_size_cell_graphic2

0x3e77,	// (0x00003e77) bg_popup_window_pane_cp21_ParamLimits

0x3e77,	// (0x00003e77) bg_popup_window_pane_cp21

0xe624,	// (0x0000e624) graphic2_pages_pane_ParamLimits

0xe624,	// (0x0000e624) graphic2_pages_pane

0xe67a,	// (0x0000e67a) grid_graphic2_control_pane_ParamLimits

0xe67a,	// (0x0000e67a) grid_graphic2_control_pane

0xe6ae,	// (0x0000e6ae) grid_graphic2_pane_ParamLimits

0xe6ae,	// (0x0000e6ae) grid_graphic2_pane

0xe721,	// (0x0000e721) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7c76,	// (0x00007c76) list_ai3_gene_pane_ParamLimits

0xdbec,	// (0x0000dbec) bg_popup_window_pane_cp19_ParamLimits

0x80af,	// (0x000080af) bg_touch_area_indi_pane_ParamLimits

0x80af,	// (0x000080af) bg_touch_area_indi_pane

0x80c5,	// (0x000080c5) bg_touch_area_indi_pane_cp01_ParamLimits

0x80c5,	// (0x000080c5) bg_touch_area_indi_pane_cp01

0x80db,	// (0x000080db) bg_touch_area_indi_pane_cp02_ParamLimits

0x80db,	// (0x000080db) bg_touch_area_indi_pane_cp02

0x80f3,	// (0x000080f3) bg_touch_area_indi_pane_cp03_ParamLimits

0x80f3,	// (0x000080f3) bg_touch_area_indi_pane_cp03

0x810d,	// (0x0000810d) popup_slider_window_g1_ParamLimits

0x8129,	// (0x00008129) popup_slider_window_g2_ParamLimits

0x8145,	// (0x00008145) popup_slider_window_g3_ParamLimits

0xf295,	// (0x0000f295) popup_slider_window_g_ParamLimits

0x81a1,	// (0x000081a1) popup_slider_window_t1_ParamLimits

0x8215,	// (0x00008215) small_volume_slider_vertical_pane_ParamLimits

0xe721,	// (0x0000e721) cell_graphic2_pane_ParamLimits

0xe77c,	// (0x0000e77c) bg_button_pane_cp10_ParamLimits

0xe77c,	// (0x0000e77c) bg_button_pane_cp10

0xe78f,	// (0x0000e78f) bg_button_pane_cp11_ParamLimits

0xe78f,	// (0x0000e78f) bg_button_pane_cp11

0xe7a2,	// (0x0000e7a2) graphic2_pages_pane_g1_ParamLimits

0xe7a2,	// (0x0000e7a2) graphic2_pages_pane_g1

0xe7bd,	// (0x0000e7bd) graphic2_pages_pane_g2_ParamLimits

0xe7bd,	// (0x0000e7bd) graphic2_pages_pane_g2

0x0001,

0xf2f2,	// (0x0000f2f2) graphic2_pages_pane_g_ParamLimits

0xf2f2,	// (0x0000f2f2) graphic2_pages_pane_g

0xe7d5,	// (0x0000e7d5) graphic2_pages_pane_t1_ParamLimits

0xe7d5,	// (0x0000e7d5) graphic2_pages_pane_t1

0xe7ed,	// (0x0000e7ed) cell_graphic2_control_pane_ParamLimits

0xe7ed,	// (0x0000e7ed) cell_graphic2_control_pane

0xe807,	// (0x0000e807) cell_graphic2_pane_g1_ParamLimits

0xe807,	// (0x0000e807) cell_graphic2_pane_g1

0x66f2,	// (0x000066f2) cell_graphic2_pane_g2_ParamLimits

0x66f2,	// (0x000066f2) cell_graphic2_pane_g2

0xe814,	// (0x0000e814) cell_graphic2_pane_g3_ParamLimits

0xe814,	// (0x0000e814) cell_graphic2_pane_g3

0x66ff,	// (0x000066ff) cell_graphic2_pane_g4_ParamLimits

0x66ff,	// (0x000066ff) cell_graphic2_pane_g4

0xe821,	// (0x0000e821) cell_graphic2_pane_g5_ParamLimits

0xe821,	// (0x0000e821) cell_graphic2_pane_g5

0x0004,

0xf2f7,	// (0x0000f2f7) cell_graphic2_pane_g_ParamLimits

0xf2f7,	// (0x0000f2f7) cell_graphic2_pane_g

0xe841,	// (0x0000e841) cell_graphic2_pane_t1_ParamLimits

0xe841,	// (0x0000e841) cell_graphic2_pane_t1

0x463e,	// (0x0000463e) grid_highlight_pane_cp11_ParamLimits

0x463e,	// (0x0000463e) grid_highlight_pane_cp11

0x1375,	// (0x00001375) bg_button_pane_cp05

0xe858,	// (0x0000e858) cell_graphic2_control_pane_g1

0x6432,	// (0x00006432) bg_touch_area_indi_pane_g1

0x9324,	// (0x00009324) aid_cmod_rocker_key_size

0x932e,	// (0x0000932e) aid_cmode_itu_key_size

0x9338,	// (0x00009338) main_cmode_video_pane

0x9342,	// (0x00009342) main_comp_mode_itu_pane

0x934e,	// (0x0000934e) main_comp_mode_rocker_pane

0x935a,	// (0x0000935a) cell_cmode_rocker_pane_ParamLimits

0x935a,	// (0x0000935a) cell_cmode_rocker_pane

0x936c,	// (0x0000936c) cell_cmode_itu_pane_ParamLimits

0x936c,	// (0x0000936c) cell_cmode_itu_pane

0x1375,	// (0x00001375) bg_button_pane_cp06_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06

0x68d8,	// (0x000068d8) cell_cmode_rocker_pane_g1_ParamLimits

0x68d8,	// (0x000068d8) cell_cmode_rocker_pane_g1

0x838e,	// (0x0000838e) cell_cmode_rocker_pane_g2_ParamLimits

0x838e,	// (0x0000838e) cell_cmode_rocker_pane_g2

0x0001,

0xae8a,	// (0x0000ae8a) cell_cmode_rocker_pane_g_ParamLimits

0xae8a,	// (0x0000ae8a) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9381,	// (0x00009381) cell_cmode_itu_pane_g1

0x938a,	// (0x0000938a) cell_cmode_itu_pane_t1

0x9398,	// (0x00009398) cell_cmode_itu_pane_t2

0x0001,

0xae8f,	// (0x0000ae8f) cell_cmode_itu_pane_t

0x85b1,	// (0x000085b1) aid_touch_ctrl_left

0x85b9,	// (0x000085b9) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xe865,	// (0x0000e865) aid_cmod_rocker_key_size_cp

0xe86f,	// (0x0000e86f) aid_cmode_itu_key_size_cp

0x93ba,	// (0x000093ba) compa_mode_pane_g1

0x93c2,	// (0x000093c2) compa_mode_pane_g2

0x93ca,	// (0x000093ca) compa_mode_pane_g3

0x0002,

0xae94,	// (0x0000ae94) compa_mode_pane_g

0xe879,	// (0x0000e879) main_comp_mode_itu_pane_cp

0xe881,	// (0x0000e881) main_comp_mode_rocker_pane_cp

0xe889,	// (0x0000e889) cell_cmode_itu_pane_cp_ParamLimits

0xe889,	// (0x0000e889) cell_cmode_itu_pane_cp

0xe89e,	// (0x0000e89e) cell_cmode_rocker_pane_cp_ParamLimits

0xe89e,	// (0x0000e89e) cell_cmode_rocker_pane_cp

0x1375,	// (0x00001375) bg_button_pane_cp06_cp_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06_cp

0x68d8,	// (0x000068d8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x68d8,	// (0x000068d8) cell_cmode_rocker_pane_g1_cp

0x6432,	// (0x00006432) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xe8b0,	// (0x0000e8b0) cell_cmode_itu_pane_g1_cp

0xe8b9,	// (0x0000e8b9) cell_cmode_itu_pane_t1_cp

0xe8b9,	// (0x0000e8b9) cell_cmode_itu_pane_t2_cp

0xcfd1,	// (0x0000cfd1) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x64b0,	// (0x000064b0) fep_hwr_aid_pane_ParamLimits

0x8291,	// (0x00008291) aid_touch_sctrl_top_ParamLimits

0x829e,	// (0x0000829e) sctrl_sk_top_pane_g1_ParamLimits

0x68d8,	// (0x000068d8) sctrl_sk_top_pane_g2_ParamLimits

0xadcf,	// (0x0000adcf) sctrl_sk_top_pane_g_ParamLimits

0x82ab,	// (0x000082ab) sctrl_sk_top_pane_t1_ParamLimits

0x8291,	// (0x00008291) aid_touch_sctrl_bottom_ParamLimits

0x82ab,	// (0x000082ab) sctrl_sk_bottom_pane_t1_ParamLimits

0x84fa,	// (0x000084fa) aid_area_touch_clock

0xe3c3,	// (0x0000e3c3) aid_vkb2_area_top_pane_cell_ParamLimits

0xe3c3,	// (0x0000e3c3) aid_vkb2_area_top_pane_cell

0xe46e,	// (0x0000e46e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe46e,	// (0x0000e46e) aid_vkb2_area_bottom_pane_cell

0x8e4b,	// (0x00008e4b) popup_char_count_window

0x9417,	// (0x00009417) popup_char_count_window_g1

0x9420,	// (0x00009420) popup_char_count_window_g2

0x9429,	// (0x00009429) popup_char_count_window_g3

0x0002,

0xae9b,	// (0x0000ae9b) popup_char_count_window_g

0x9432,	// (0x00009432) popup_char_count_window_t1

0x8aa9,	// (0x00008aa9) popup_fep_char_preview_window_ParamLimits

0x8aa9,	// (0x00008aa9) popup_fep_char_preview_window

0xe3e3,	// (0x0000e3e3) vkb2_top_candi_pane_ParamLimits

0xe3e3,	// (0x0000e3e3) vkb2_top_candi_pane

0xe8c7,	// (0x0000e8c7) cell_vkb2_top_candi_pane_ParamLimits

0xe8c7,	// (0x0000e8c7) cell_vkb2_top_candi_pane

0x3e77,	// (0x00003e77) bg_popup_fep_char_preview_window_ParamLimits

0x3e77,	// (0x00003e77) bg_popup_fep_char_preview_window

0x948d,	// (0x0000948d) popup_fep_char_preview_window_t1_ParamLimits

0x948d,	// (0x0000948d) popup_fep_char_preview_window_t1

0x94c7,	// (0x000094c7) bg_popup_fep_char_preview_window_g1

0x94cf,	// (0x000094cf) bg_popup_fep_char_preview_window_g2

0x94d7,	// (0x000094d7) bg_popup_fep_char_preview_window_g3

0x94df,	// (0x000094df) bg_popup_fep_char_preview_window_g4

0x94e7,	// (0x000094e7) bg_popup_fep_char_preview_window_g5

0x94ef,	// (0x000094ef) bg_popup_fep_char_preview_window_g6

0x94f7,	// (0x000094f7) bg_popup_fep_char_preview_window_g7

0x94ff,	// (0x000094ff) bg_popup_fep_char_preview_window_g8

0x9507,	// (0x00009507) bg_popup_fep_char_preview_window_g9

0x0008,

0xaea2,	// (0x0000aea2) bg_popup_fep_char_preview_window_g

0x68d8,	// (0x000068d8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x68d8,	// (0x000068d8) cell_vkb2_top_candi_pane_g1

0x6c43,	// (0x00006c43) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c43,	// (0x00006c43) cell_vkb2_top_candi_pane_g2

0x6c64,	// (0x00006c64) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6c64,	// (0x00006c64) cell_vkb2_top_candi_pane_g3

0x950f,	// (0x0000950f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x950f,	// (0x0000950f) cell_vkb2_top_candi_pane_g4

0x9530,	// (0x00009530) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9530,	// (0x00009530) cell_vkb2_top_candi_pane_g5

0x838e,	// (0x0000838e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x838e,	// (0x0000838e) cell_vkb2_top_candi_pane_g6

0x0005,

0xaeb5,	// (0x0000aeb5) cell_vkb2_top_candi_pane_g_ParamLimits

0xaeb5,	// (0x0000aeb5) cell_vkb2_top_candi_pane_g

0x9551,	// (0x00009551) cell_vkb2_top_candi_pane_t1

0x4d7d,	// (0x00004d7d) aid_size_touch_slider_mark_ParamLimits

0x4d7d,	// (0x00004d7d) aid_size_touch_slider_mark

0xe660,	// (0x0000e660) grid_graphic2_catg_pane_ParamLimits

0xe660,	// (0x0000e660) grid_graphic2_catg_pane

0xe6f4,	// (0x0000e6f4) popup_grid_graphic2_window_t1_ParamLimits

0xe6f4,	// (0x0000e6f4) popup_grid_graphic2_window_t1

0xe70a,	// (0x0000e70a) popup_grid_graphic2_window_t2_ParamLimits

0xe70a,	// (0x0000e70a) popup_grid_graphic2_window_t2

0x0001,

0xf2ed,	// (0x0000f2ed) popup_grid_graphic2_window_t_ParamLimits

0xf2ed,	// (0x0000f2ed) popup_grid_graphic2_window_t

0x1375,	// (0x00001375) bg_button_pane_cp05_ParamLimits

0xe858,	// (0x0000e858) cell_graphic2_control_pane_g1_ParamLimits

0xe92d,	// (0x0000e92d) cell_graphic2_catg_pane_ParamLimits

0xe92d,	// (0x0000e92d) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xe93f,	// (0x0000e93f) cell_graphic2_catg_pane_g1

0x84c6,	// (0x000084c6) cell_tb_ext_pane_t1_ParamLimits

0x8ee9,	// (0x00008ee9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ee9,	// (0x00008ee9) vkb2_top_cell_right_narrow_pane

0x8f01,	// (0x00008f01) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f01,	// (0x00008f01) vkb2_top_cell_right_wide_pane

0x64a2,	// (0x000064a2) bg_vkb2_func_pane_ParamLimits

0x64a2,	// (0x000064a2) bg_vkb2_func_pane

0x8f72,	// (0x00008f72) vkb2_top_cell_left_pane_g1_ParamLimits

0x64a2,	// (0x000064a2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64a2,	// (0x000064a2) bg_vkb2_fuc_pane_cp03

0x8fe7,	// (0x00008fe7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x367f,	// (0x0000367f) bg_vkb2_func_pane_g1

0x3687,	// (0x00003687) bg_vkb2_func_pane_g2

0x3697,	// (0x00003697) bg_vkb2_func_pane_g3

0x368f,	// (0x0000368f) bg_vkb2_func_pane_g4

0x369f,	// (0x0000369f) bg_vkb2_func_pane_g5

0x36a7,	// (0x000036a7) bg_vkb2_func_pane_g6

0x36af,	// (0x000036af) bg_vkb2_func_pane_g7

0x36b7,	// (0x000036b7) bg_vkb2_func_pane_g8

0x3677,	// (0x00003677) bg_vkb2_func_pane_g9

0x0008,

0xaec2,	// (0x0000aec2) bg_vkb2_func_pane_g

0x64a2,	// (0x000064a2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64a2,	// (0x000064a2) bg_vkb2_fuc_pane_cp01

0x8f72,	// (0x00008f72) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8f72,	// (0x00008f72) vkb2_top_cell_right_wide_pane_g1

0x64a2,	// (0x000064a2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64a2,	// (0x000064a2) bg_vkb2_fuc_pane_cp02

0x8fe7,	// (0x00008fe7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8fe7,	// (0x00008fe7) vkb2_top_cell_right_narrow_pane_g1

0xdb2c,	// (0x0000db2c) aid_touch_area_decrease_ParamLimits

0xdb2c,	// (0x0000db2c) aid_touch_area_decrease

0xdb60,	// (0x0000db60) aid_touch_area_increase_ParamLimits

0xdb60,	// (0x0000db60) aid_touch_area_increase

0xdb88,	// (0x0000db88) aid_touch_area_mute_ParamLimits

0xdb88,	// (0x0000db88) aid_touch_area_mute

0xdbb8,	// (0x0000dbb8) aid_touch_area_slider_ParamLimits

0xdbb8,	// (0x0000dbb8) aid_touch_area_slider

0xdbf8,	// (0x0000dbf8) popup_slider_window_g4_ParamLimits

0xdbf8,	// (0x0000dbf8) popup_slider_window_g4

0xdc20,	// (0x0000dc20) popup_slider_window_g5_ParamLimits

0xdc20,	// (0x0000dc20) popup_slider_window_g5

0xdc54,	// (0x0000dc54) popup_slider_window_g6_ParamLimits

0xdc54,	// (0x0000dc54) popup_slider_window_g6

0x81cf,	// (0x000081cf) popup_slider_window_t2_ParamLimits

0x81cf,	// (0x000081cf) popup_slider_window_t2

0x0001,

0xadc3,	// (0x0000adc3) popup_slider_window_t_ParamLimits

0xadc3,	// (0x0000adc3) popup_slider_window_t

0xdc70,	// (0x0000dc70) slider_pane_ParamLimits

0xdc70,	// (0x0000dc70) slider_pane

0x958b,	// (0x0000958b) slider_pane_g1_ParamLimits

0x958b,	// (0x0000958b) slider_pane_g1

0x959f,	// (0x0000959f) slider_pane_g2_ParamLimits

0x959f,	// (0x0000959f) slider_pane_g2

0x95b5,	// (0x000095b5) slider_pane_g3_ParamLimits

0x95b5,	// (0x000095b5) slider_pane_g3

0x0003,

0xaed5,	// (0x0000aed5) slider_pane_g_ParamLimits

0xaed5,	// (0x0000aed5) slider_pane_g

0xc5b5,	// (0x0000c5b5) popup_tb_float_extension_window_ParamLimits

0xc5b5,	// (0x0000c5b5) popup_tb_float_extension_window

0x95e1,	// (0x000095e1) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x95ed,	// (0x000095ed) grid_tb_float_ext_pane

0x95f7,	// (0x000095f7) cell_tb_float_ext_pane_ParamLimits

0x95f7,	// (0x000095f7) cell_tb_float_ext_pane

0x9611,	// (0x00009611) cell_tb_float_ext_pane_g1

0x961a,	// (0x0000961a) grid_highlight_pane_cp12

0xd40e,	// (0x0000d40e) cell_last_hwr_side_pane_ParamLimits

0xd40e,	// (0x0000d40e) cell_last_hwr_side_pane

0x6432,	// (0x00006432) cell_last_hwr_side_pane_g1

0x9623,	// (0x00009623) cell_last_hwr_side_pane_g2

0x0001,

0xaede,	// (0x0000aede) cell_last_hwr_side_pane_g

0xe54a,	// (0x0000e54a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe54a,	// (0x0000e54a) vkb2_area_bottom_space_btn_pane

0x68d8,	// (0x000068d8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x90c6,	// (0x000090c6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9551,	// (0x00009551) cell_vkb2_top_candi_pane_t1_ParamLimits

0x962c,	// (0x0000962c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x962c,	// (0x0000962c) vkb2_area_bottom_space_btn_pane_g1

0x9666,	// (0x00009666) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9666,	// (0x00009666) vkb2_area_bottom_space_btn_pane_g2

0x969c,	// (0x0000969c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x969c,	// (0x0000969c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xaee3,	// (0x0000aee3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xaee3,	// (0x0000aee3) vkb2_area_bottom_space_btn_pane_g

0x6565,	// (0x00006565) cel_fep_hwr_func_pane_ParamLimits

0x6565,	// (0x00006565) cel_fep_hwr_func_pane

0xd3e3,	// (0x0000d3e3) cell_hwr_side_button_pane_ParamLimits

0xd3e3,	// (0x0000d3e3) cell_hwr_side_button_pane

0x84fa,	// (0x000084fa) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x850c,	// (0x0000850c) uniindi_top_pane_g1_ParamLimits

0x8522,	// (0x00008522) uniindi_top_pane_g2_ParamLimits

0x852e,	// (0x0000852e) uniindi_top_pane_g3_ParamLimits

0x853f,	// (0x0000853f) uniindi_top_pane_g4_ParamLimits

0xadfb,	// (0x0000adfb) uniindi_top_pane_g_ParamLimits

0x854c,	// (0x0000854c) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x96e6,	// (0x000096e6) cel_fep_hwr_func_pane_g1_ParamLimits

0x96e6,	// (0x000096e6) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x96e6,	// (0x000096e6) cell_hwr_side_button_pane_g1_ParamLimits

0x96e6,	// (0x000096e6) cell_hwr_side_button_pane_g1

0x3446,	// (0x00003446) status_pane_g4_ParamLimits

0x3446,	// (0x00003446) status_pane_g4

0x3460,	// (0x00003460) status_pane_t1

0x616b,	// (0x0000616b) form2_midp_gauge_slider_cont_pane

0x6173,	// (0x00006173) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd32e,	// (0x0000d32e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd340,	// (0x0000d340) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf23e,	// (0x0000f23e) form2_midp_gauge_slider_pane_t_ParamLimits

0x61a9,	// (0x000061a9) form2_midp_slider_pane_ParamLimits

0x8a69,	// (0x00008a69) aid_size_cell_func_vkb2_ParamLimits

0x8a69,	// (0x00008a69) aid_size_cell_func_vkb2

0x95cd,	// (0x000095cd) slider_pane_g4_ParamLimits

0x95cd,	// (0x000095cd) slider_pane_g4

0xe948,	// (0x0000e948) form2_midp_gauge_slider_pane_t2_cp01

0xe956,	// (0x0000e956) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe956,	// (0x0000e956) form2_midp_gauge_slider_pane_t3_cp01

0x971f,	// (0x0000971f) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9753,	// (0x00009753) navi_smil_pane_g1

0x975b,	// (0x0000975b) navi_smil_pane_t1

0x9728,	// (0x00009728) form2_midp_slider_pane_g1

0x9731,	// (0x00009731) form2_midp_slider_pane_g2

0x9739,	// (0x00009739) form2_midp_slider_pane_g3

0x9728,	// (0x00009728) form2_midp_slider_pane_g4

0xe973,	// (0x0000e973) form2_midp_slider_pane_g5

0x0004,

0xf302,	// (0x0000f302) form2_midp_slider_pane_g

0x96d6,	// (0x000096d6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x96d6,	// (0x000096d6) vkb2_area_bottom_space_btn_pane_g4

0xc791,	// (0x0000c791) lc0_navi_pane_ParamLimits

0xc791,	// (0x0000c791) lc0_navi_pane

0xc7fb,	// (0x0000c7fb) lc0_stat_indi_pane_ParamLimits

0xc7fb,	// (0x0000c7fb) lc0_stat_indi_pane

0xc810,	// (0x0000c810) ls0_title_pane_ParamLimits

0xc810,	// (0x0000c810) ls0_title_pane

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14_ParamLimits

0x84e1,	// (0x000084e1) list_uniindi_pane_ParamLimits

0x84ed,	// (0x000084ed) uniindi_top_pane_ParamLimits

0x8589,	// (0x00008589) list_single_uniindi_pane_g1_ParamLimits

0x859c,	// (0x0000859c) list_single_uniindi_pane_t1_ParamLimits

0xe97c,	// (0x0000e97c) lc0_stat_clock_pane_ParamLimits

0xe97c,	// (0x0000e97c) lc0_stat_clock_pane

0xe989,	// (0x0000e989) lc0_stat_indi_pane_g1_ParamLimits

0xe989,	// (0x0000e989) lc0_stat_indi_pane_g1

0xe996,	// (0x0000e996) lc0_stat_indi_pane_g2_ParamLimits

0xe996,	// (0x0000e996) lc0_stat_indi_pane_g2

0x0001,

0xf30d,	// (0x0000f30d) lc0_stat_indi_pane_g_ParamLimits

0xf30d,	// (0x0000f30d) lc0_stat_indi_pane_g

0xe9a3,	// (0x0000e9a3) lc0_uni_indicator_pane_ParamLimits

0xe9a3,	// (0x0000e9a3) lc0_uni_indicator_pane

0x979d,	// (0x0000979d) ls0_title_pane_g1_ParamLimits

0x979d,	// (0x0000979d) ls0_title_pane_g1

0xe9b0,	// (0x0000e9b0) ls0_title_pane_t1_ParamLimits

0xe9b0,	// (0x0000e9b0) ls0_title_pane_t1

0xe9de,	// (0x0000e9de) lc0_uni_indicator_pane_g1_ParamLimits

0xe9de,	// (0x0000e9de) lc0_uni_indicator_pane_g1

0x97fb,	// (0x000097fb) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9809,	// (0x00009809) ai5_sk_pane_ParamLimits

0x9809,	// (0x00009809) ai5_sk_pane

0xea05,	// (0x0000ea05) cell_ai5_widget_pane_ParamLimits

0xea05,	// (0x0000ea05) cell_ai5_widget_pane

0x9898,	// (0x00009898) aid_size_cell_widget_grid

0x98ac,	// (0x000098ac) bg_ai5_widget_pane_ParamLimits

0x98ac,	// (0x000098ac) bg_ai5_widget_pane

0xea8e,	// (0x0000ea8e) cell_ai5_widget_pane_g2

0xea9e,	// (0x0000ea9e) cell_ai5_widget_pane_g3

0xeab2,	// (0x0000eab2) cell_ai5_widget_pane_g4

0xeabe,	// (0x0000eabe) cell_ai5_widget_pane_g5

0xeaca,	// (0x0000eaca) cell_ai5_widget_pane_g6

0xead6,	// (0x0000ead6) cell_ai5_widget_pane_g7

0xeb1e,	// (0x0000eb1e) cell_ai5_widget_pane_t1_ParamLimits

0xeb1e,	// (0x0000eb1e) cell_ai5_widget_pane_t1

0xeb3b,	// (0x0000eb3b) cell_ai5_widget_pane_t2_ParamLimits

0xeb3b,	// (0x0000eb3b) cell_ai5_widget_pane_t2

0xeb53,	// (0x0000eb53) cell_ai5_widget_pane_t3_ParamLimits

0xeb53,	// (0x0000eb53) cell_ai5_widget_pane_t3

0xeb6b,	// (0x0000eb6b) cell_ai5_widget_pane_t4_ParamLimits

0xeb6b,	// (0x0000eb6b) cell_ai5_widget_pane_t4

0xeb85,	// (0x0000eb85) cell_ai5_widget_pane_t5_ParamLimits

0xeb85,	// (0x0000eb85) cell_ai5_widget_pane_t5

0x99ea,	// (0x000099ea) cell_ai5_widget_pane_t6_ParamLimits

0x99ea,	// (0x000099ea) cell_ai5_widget_pane_t6

0x99fc,	// (0x000099fc) cell_ai5_widget_pane_t7_ParamLimits

0x99fc,	// (0x000099fc) cell_ai5_widget_pane_t7

0xeba4,	// (0x0000eba4) cell_ai5_widget_pane_t8_ParamLimits

0xeba4,	// (0x0000eba4) cell_ai5_widget_pane_t8

0x0009,

0xf327,	// (0x0000f327) cell_ai5_widget_pane_t_ParamLimits

0xf327,	// (0x0000f327) cell_ai5_widget_pane_t

0xebec,	// (0x0000ebec) grid_ai5_widget_pane

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane_ParamLimits

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane

0xec04,	// (0x0000ec04) ai5_sk_left_pane

0xec0e,	// (0x0000ec0e) ai5_sk_middle_pane

0xec18,	// (0x0000ec18) ai5_sk_right_pane

0x9a93,	// (0x00009a93) bg_ai5_widget_pane_g1_ParamLimits

0x9a93,	// (0x00009a93) bg_ai5_widget_pane_g1

0x9a9f,	// (0x00009a9f) bg_ai5_widget_pane_g2_ParamLimits

0x9a9f,	// (0x00009a9f) bg_ai5_widget_pane_g2

0x9aab,	// (0x00009aab) bg_ai5_widget_pane_g3_ParamLimits

0x9aab,	// (0x00009aab) bg_ai5_widget_pane_g3

0x9ab7,	// (0x00009ab7) bg_ai5_widget_pane_g4_ParamLimits

0x9ab7,	// (0x00009ab7) bg_ai5_widget_pane_g4

0x9ac3,	// (0x00009ac3) bg_ai5_widget_pane_g5_ParamLimits

0x9ac3,	// (0x00009ac3) bg_ai5_widget_pane_g5

0x9acf,	// (0x00009acf) bg_ai5_widget_pane_g6_ParamLimits

0x9acf,	// (0x00009acf) bg_ai5_widget_pane_g6

0x9adb,	// (0x00009adb) bg_ai5_widget_pane_g7_ParamLimits

0x9adb,	// (0x00009adb) bg_ai5_widget_pane_g7

0x9ae7,	// (0x00009ae7) bg_ai5_widget_pane_g8_ParamLimits

0x9ae7,	// (0x00009ae7) bg_ai5_widget_pane_g8

0x9af3,	// (0x00009af3) bg_ai5_widget_pane_g9_ParamLimits

0x9af3,	// (0x00009af3) bg_ai5_widget_pane_g9

0x0008,

0xaf26,	// (0x0000af26) bg_ai5_widget_pane_g_ParamLimits

0xaf26,	// (0x0000af26) bg_ai5_widget_pane_g

0x9b26,	// (0x00009b26) cell_shortcut_ai5_widget_pane_ParamLimits

0x9b26,	// (0x00009b26) cell_shortcut_ai5_widget_pane

0x0671,	// (0x00000671) bg_cell_shortcut_ai5_widget_pane

0x9b37,	// (0x00009b37) cell_grid_ai5_widget_pane_g1

0x9b40,	// (0x00009b40) highlight_cell_shortcut_ai5_widget_pane

0x3687,	// (0x00003687) ai5_sk_left_pane_g1

0x9b48,	// (0x00009b48) ai5_sk_left_pane_g2

0x9b50,	// (0x00009b50) ai5_sk_left_pane_g3

0x9b58,	// (0x00009b58) ai5_sk_left_pane_g4

0x0003,

0xaf39,	// (0x0000af39) ai5_sk_left_pane_g

0x9b60,	// (0x00009b60) ai5_sk_left_pane_t1

0x367f,	// (0x0000367f) ai5_sk_right_pane_g1

0x9b6e,	// (0x00009b6e) ai5_sk_right_pane_g2

0x9b76,	// (0x00009b76) ai5_sk_right_pane_g3

0x9b7e,	// (0x00009b7e) ai5_sk_right_pane_g4

0x0003,

0xaf42,	// (0x0000af42) ai5_sk_right_pane_g

0x9b86,	// (0x00009b86) ai5_sk_right_pane_t1

0x367f,	// (0x0000367f) ai5_sk_middle_pane_g1

0x3687,	// (0x00003687) ai5_sk_middle_pane_g2

0x369f,	// (0x0000369f) ai5_sk_middle_pane_g3

0x9b76,	// (0x00009b76) ai5_sk_middle_pane_g4

0x9b50,	// (0x00009b50) ai5_sk_middle_pane_g5

0x9b94,	// (0x00009b94) ai5_sk_middle_pane_g6

0xec22,	// (0x0000ec22) ai5_sk_middle_pane_g7

0x0006,

0xf33c,	// (0x0000f33c) ai5_sk_middle_pane_g

0xc67d,	// (0x0000c67d) aid_touch_area_size_lc0_ParamLimits

0xc67d,	// (0x0000c67d) aid_touch_area_size_lc0

0x6c85,	// (0x00006c85) cell_hwr_candidate_pane_t1_ParamLimits

0x3128,	// (0x00003128) aid_touch_navi_pane

0xc902,	// (0x0000c902) status_dt_navi_pane_ParamLimits

0xc902,	// (0x0000c902) status_dt_navi_pane

0xc91a,	// (0x0000c91a) status_dt_sta_pane_ParamLimits

0xc91a,	// (0x0000c91a) status_dt_sta_pane

0xec2a,	// (0x0000ec2a) dt_sta_controll_pane

0xec37,	// (0x0000ec37) dt_sta_indi_pane

0xec44,	// (0x0000ec44) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0x9bd5,	// (0x00009bd5) dt_sta_battery_pane

0xec56,	// (0x0000ec56) dt_sta_indi_pane_g1

0xec5f,	// (0x0000ec5f) dt_sta_indi_pane_g2

0xec68,	// (0x0000ec68) dt_sta_indi_pane_g3

0x0002,

0xf34b,	// (0x0000f34b) dt_sta_indi_pane_g

0xec71,	// (0x0000ec71) dt_sta_signal_pane

0x1375,	// (0x00001375) bg_dt_sta_title_pane_ParamLimits

0x1375,	// (0x00001375) bg_dt_sta_title_pane

0x47af,	// (0x000047af) dt_sta_title_pane_g1

0xec7a,	// (0x0000ec7a) dt_sta_title_pane_t1_ParamLimits

0xec7a,	// (0x0000ec7a) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xec8f,	// (0x0000ec8f) dt_sta_controll_pane_g1

0xec98,	// (0x0000ec98) bg_dt_sta_title_pane_g1

0xeca1,	// (0x0000eca1) bg_dt_sta_title_pane_g2

0xecaa,	// (0x0000ecaa) bg_dt_sta_title_pane_g3

0x0002,

0xf352,	// (0x0000f352) bg_dt_sta_title_pane_g

0x6432,	// (0x00006432) bg_dt_sta_indi_pane_g1

0x9c42,	// (0x00009c42) dt_sta_signal_pane_g1

0x9c4a,	// (0x00009c4a) dt_sta_signal_pane_g2

0x0001,

0xaf68,	// (0x0000af68) dt_sta_signal_pane_g

0x9c52,	// (0x00009c52) dt_sta_battery_pane_g1

0x9c5b,	// (0x00009c5b) dt_sta_battery_pane_t1

0x6432,	// (0x00006432) bg_dt_sta_control_pane_g1

0x1ed9,	// (0x00001ed9) fep_china_uni_eep_pane

0x1ee1,	// (0x00001ee1) fep_china_uni_entry_pane_ParamLimits

0x1ef1,	// (0x00001ef1) popup_fep_china_uni_window_g1_ParamLimits

0x1f01,	// (0x00001f01) popup_fep_china_uni_window_g2_ParamLimits

0x1f01,	// (0x00001f01) popup_fep_china_uni_window_g2

0x0001,

0xa818,	// (0x0000a818) popup_fep_china_uni_window_g_ParamLimits

0xa818,	// (0x0000a818) popup_fep_china_uni_window_g

0x9c6a,	// (0x00009c6a) fep_china_uni_eep_pane_g1

0x9c72,	// (0x00009c72) fep_china_uni_eep_pane_t1

0x974a,	// (0x0000974a) aid_touch_area_size_smil_player

0x3274,	// (0x00003274) lc0_clock_pane

0x3454,	// (0x00003454) status_pane_g5_ParamLimits

0x3454,	// (0x00003454) status_pane_g5

0xc15b,	// (0x0000c15b) popup_keymap_window

0x3412,	// (0x00003412) status_icon_pane

0xea9e,	// (0x0000ea9e) cell_ai5_widget_pane_g3_ParamLimits

0xeab2,	// (0x0000eab2) cell_ai5_widget_pane_g4_ParamLimits

0xeabe,	// (0x0000eabe) cell_ai5_widget_pane_g5_ParamLimits

0xeae2,	// (0x0000eae2) cell_ai5_widget_pane_g8_ParamLimits

0xeae2,	// (0x0000eae2) cell_ai5_widget_pane_g8

0xeaf6,	// (0x0000eaf6) cell_ai5_widget_pane_g9_ParamLimits

0xeaf6,	// (0x0000eaf6) cell_ai5_widget_pane_g9

0xeb0a,	// (0x0000eb0a) cell_ai5_widget_pane_g10_ParamLimits

0xeb0a,	// (0x0000eb0a) cell_ai5_widget_pane_g10

0x9c81,	// (0x00009c81) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9c89,	// (0x00009c89) popup_keymap_window_t1

0xbe6b,	// (0x0000be6b) control_pane_g6_ParamLimits

0xbe6b,	// (0x0000be6b) control_pane_g6

0xbe78,	// (0x0000be78) control_pane_g7_ParamLimits

0xbe78,	// (0x0000be78) control_pane_g7

0xbe85,	// (0x0000be85) control_pane_g8_ParamLimits

0xbe85,	// (0x0000be85) control_pane_g8

0xec2a,	// (0x0000ec2a) dt_sta_controll_pane_ParamLimits

0xec37,	// (0x0000ec37) dt_sta_indi_pane_ParamLimits

0xec44,	// (0x0000ec44) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb105,	// (0x0000b105) popup_sk_window

0x3e77,	// (0x00003e77) bg_popup_sub_pane_cp28_ParamLimits

0x3e77,	// (0x00003e77) bg_popup_sub_pane_cp28

0x9c97,	// (0x00009c97) popup_discreet_window_g1_ParamLimits

0x9c97,	// (0x00009c97) popup_discreet_window_g1

0x9cb7,	// (0x00009cb7) popup_discreet_window_t1_ParamLimits

0x9cb7,	// (0x00009cb7) popup_discreet_window_t1

0x9cd5,	// (0x00009cd5) popup_discreet_window_t2_ParamLimits

0x9cd5,	// (0x00009cd5) popup_discreet_window_t2

0x0002,

0xaf6d,	// (0x0000af6d) popup_discreet_window_t_ParamLimits

0xaf6d,	// (0x0000af6d) popup_discreet_window_t

0x9d27,	// (0x00009d27) popup_sk_window_g1

0x9d31,	// (0x00009d31) popup_sk_window_g2

0x0001,

0xaf74,	// (0x0000af74) popup_sk_window_g

0x9d3b,	// (0x00009d3b) popup_sk_window_t1

0x9d49,	// (0x00009d49) popup_sk_window_t1_copy1

0xea8e,	// (0x0000ea8e) cell_ai5_widget_pane_g2_ParamLimits

0xebb6,	// (0x0000ebb6) cell_ai5_widget_pane_t9_ParamLimits

0xebb6,	// (0x0000ebb6) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xecb3,	// (0x0000ecb3) aid_fshwr2_btn_pane

0xecbb,	// (0x0000ecbb) aid_fshwr2_syb_pane

0xecc3,	// (0x0000ecc3) aid_fshwr2_txt_pane

0xeccb,	// (0x0000eccb) fshwr2_func_candi_pane

0xecd5,	// (0x0000ecd5) fshwr2_hwr_syb_pane

0xece3,	// (0x0000ece3) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xeced,	// (0x0000eced) fshwr2_icf_pane_t1_ParamLimits

0xeced,	// (0x0000eced) fshwr2_icf_pane_t1

0x6432,	// (0x00006432) fshwr2_func_candi_pane_g1

0x9dbc,	// (0x00009dbc) fshwr2_func_candi_row_pane_ParamLimits

0x9dbc,	// (0x00009dbc) fshwr2_func_candi_row_pane

0xed05,	// (0x0000ed05) cell_fshwr2_syb_pane_ParamLimits

0xed05,	// (0x0000ed05) cell_fshwr2_syb_pane

0x68d8,	// (0x000068d8) fshwr2_hwr_syb_pane_g1_ParamLimits

0x68d8,	// (0x000068d8) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9de7,	// (0x00009de7) fshwr2_func_candi_cell_pane_ParamLimits

0x9de7,	// (0x00009de7) fshwr2_func_candi_cell_pane

0x9e18,	// (0x00009e18) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9e18,	// (0x00009e18) fshwr2_func_candi_cell_bg_pane

0x9e32,	// (0x00009e32) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9e32,	// (0x00009e32) fshwr2_func_candi_cell_pane_g1

0x9e5a,	// (0x00009e5a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e5a,	// (0x00009e5a) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x259f,	// (0x0000259f) cell_fshwr2_syb_bg_pane

0xed1f,	// (0x0000ed1f) cell_fshwr2_syb_bg_pane_g1

0xed27,	// (0x0000ed27) cell_fshwr2_syb_bg_pane_t1

0x1375,	// (0x00001375) main_tmo_pane

0xcdf0,	// (0x0000cdf0) uni_indicator_pane_g1_ParamLimits

0xce05,	// (0x0000ce05) uni_indicator_pane_g2_ParamLimits

0xce1a,	// (0x0000ce1a) uni_indicator_pane_g3_ParamLimits

0x4b31,	// (0x00004b31) uni_indicator_pane_g4_ParamLimits

0x4b31,	// (0x00004b31) uni_indicator_pane_g4

0x4b45,	// (0x00004b45) uni_indicator_pane_g5_ParamLimits

0x4b45,	// (0x00004b45) uni_indicator_pane_g5

0x4b59,	// (0x00004b59) uni_indicator_pane_g6_ParamLimits

0x4b59,	// (0x00004b59) uni_indicator_pane_g6

0xf1e5,	// (0x0000f1e5) uni_indicator_pane_g_ParamLimits

0xdb08,	// (0x0000db08) popup_tmo_note_window_ParamLimits

0xdb08,	// (0x0000db08) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9e4b,	// (0x00009e4b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e4b,	// (0x00009e4b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xaf79,	// (0x0000af79) fshwr2_func_candi_cell_pane_g_ParamLimits

0xaf79,	// (0x0000af79) fshwr2_func_candi_cell_pane_g

0x6432,	// (0x00006432) bg_popup_window_pane_cp01

0x9e84,	// (0x00009e84) bg_popup_window_pane_g1_cp01

0x9e8d,	// (0x00009e8d) bg_popup_window_pane_cp22_ParamLimits

0x9e8d,	// (0x00009e8d) bg_popup_window_pane_cp22

0x9e9b,	// (0x00009e9b) listscroll_tmo_link_pane_ParamLimits

0x9e9b,	// (0x00009e9b) listscroll_tmo_link_pane

0x9edb,	// (0x00009edb) popup_tmo_note_window_g1_ParamLimits

0x9edb,	// (0x00009edb) popup_tmo_note_window_g1

0x9ee8,	// (0x00009ee8) tmo_note_info_pane_ParamLimits

0x9ee8,	// (0x00009ee8) tmo_note_info_pane

0xed36,	// (0x0000ed36) list_tmo_note_info_pane_g1_ParamLimits

0xed36,	// (0x0000ed36) list_tmo_note_info_pane_g1

0x9f19,	// (0x00009f19) list_tmo_note_info_pane_g2_ParamLimits

0x9f19,	// (0x00009f19) list_tmo_note_info_pane_g2

0x0001,

0xf359,	// (0x0000f359) list_tmo_note_info_pane_g_ParamLimits

0xf359,	// (0x0000f359) list_tmo_note_info_pane_g

0x9f35,	// (0x00009f35) list_tmo_note_info_text_pane_ParamLimits

0x9f35,	// (0x00009f35) list_tmo_note_info_text_pane

0x9fb6,	// (0x00009fb6) list_tmo_link_pane

0x9fc3,	// (0x00009fc3) scroll_pane_cp20

0x9fd0,	// (0x00009fd0) list_single_tmo_link_pane_ParamLimits

0x9fd0,	// (0x00009fd0) list_single_tmo_link_pane

0x9fe0,	// (0x00009fe0) list_single_tmo_link_pane_t1

0x9fee,	// (0x00009fee) list_tmo_note_info_text_pane_t1_ParamLimits

0x9fee,	// (0x00009fee) list_tmo_note_info_text_pane_t1

0xba92,	// (0x0000ba92) aid_size_touch_scroll_bar_cp01_ParamLimits

0xba92,	// (0x0000ba92) aid_size_touch_scroll_bar_cp01

0xb9b1,	// (0x0000b9b1) aid_size_touch_slider_marker

0xb0f5,	// (0x0000b0f5) popup_settings_window_ParamLimits

0xb0f5,	// (0x0000b0f5) popup_settings_window

0x2b4f,	// (0x00002b4f) popup_candi_list_indi_window

0x3128,	// (0x00003128) aid_touch_navi_pane_ParamLimits

0x8265,	// (0x00008265) rs_clock_indi_pane

0x826e,	// (0x0000826e) sctrl_sk_bottom_pane_ParamLimits

0x827f,	// (0x0000827f) sctrl_sk_top_pane_ParamLimits

0x8ac3,	// (0x00008ac3) popup_fep_tooltip_window

0x9898,	// (0x00009898) aid_size_cell_widget_grid_ParamLimits

0xea82,	// (0x0000ea82) cell_ai5_widget_pane_g1_ParamLimits

0xea82,	// (0x0000ea82) cell_ai5_widget_pane_g1

0xeaca,	// (0x0000eaca) cell_ai5_widget_pane_g6_ParamLimits

0xead6,	// (0x0000ead6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf312,	// (0x0000f312) cell_ai5_widget_pane_g_ParamLimits

0xf312,	// (0x0000f312) cell_ai5_widget_pane_g

0xebda,	// (0x0000ebda) cell_ai5_widget_pane_t10_ParamLimits

0xebda,	// (0x0000ebda) cell_ai5_widget_pane_t10

0xebec,	// (0x0000ebec) grid_ai5_widget_pane_ParamLimits

0x9aff,	// (0x00009aff) cell_contacts_ai5_widget_pane_ParamLimits

0x9aff,	// (0x00009aff) cell_contacts_ai5_widget_pane

0x9cea,	// (0x00009cea) popup_discreet_window_t3_ParamLimits

0x9cea,	// (0x00009cea) popup_discreet_window_t3

0x9d91,	// (0x00009d91) popup_fshwr2_char_preview_window_ParamLimits

0x9d91,	// (0x00009d91) popup_fshwr2_char_preview_window

0xed4d,	// (0x0000ed4d) tmo_note_info_pane_t1

0xed62,	// (0x0000ed62) tmo_note_info_pane_t2

0xed79,	// (0x0000ed79) tmo_note_info_pane_t3

0x9f92,	// (0x00009f92) tmo_note_info_pane_t4

0x9fa4,	// (0x00009fa4) tmo_note_info_pane_t5

0x0004,

0xf35e,	// (0x0000f35e) tmo_note_info_pane_t

0x9fb6,	// (0x00009fb6) list_tmo_link_pane_ParamLimits

0x9fc3,	// (0x00009fc3) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa007,	// (0x0000a007) popup_fshwr2_char_preview_window_t1

0xa015,	// (0x0000a015) popup_candi_list_indi_window_g1

0xa01e,	// (0x0000a01e) bg_cell_contacts_ai5_widget_pane

0xa02a,	// (0x0000a02a) cell_contacts_ai5_widget_pane_g1

0xa03e,	// (0x0000a03e) cell_contacts_ai5_widget_pane_g2

0xa04d,	// (0x0000a04d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xaf8e,	// (0x0000af8e) cell_contacts_ai5_widget_pane_g

0xa060,	// (0x0000a060) cell_contacts_ai5_widget_pane_t1

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedf3,	// (0x0000edf3) settings_container_pane

0x259f,	// (0x0000259f) listscroll_set_pane_copy1

0x58f2,	// (0x000058f2) scroll_pane_cp121_copy1

0xa0e6,	// (0x0000a0e6) set_content_pane_copy1

0xedff,	// (0x0000edff) aid_height_set_list_copy1_ParamLimits

0xedff,	// (0x0000edff) aid_height_set_list_copy1

0x4e41,	// (0x00004e41) aid_size_parent_copy1_ParamLimits

0x4e41,	// (0x00004e41) aid_size_parent_copy1

0xee0b,	// (0x0000ee0b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee0b,	// (0x0000ee0b) button_value_adjust_pane_cp6_copy1

0x2b27,	// (0x00002b27) list_highlight_pane_cp2_copy1_ParamLimits

0x2b27,	// (0x00002b27) list_highlight_pane_cp2_copy1

0xee1f,	// (0x0000ee1f) list_set_pane_copy1_ParamLimits

0xee1f,	// (0x0000ee1f) list_set_pane_copy1

0xed8e,	// (0x0000ed8e) main_pane_set_t1_copy1_ParamLimits

0xed8e,	// (0x0000ed8e) main_pane_set_t1_copy1

0xedc8,	// (0x0000edc8) main_pane_set_t2_copy1_ParamLimits

0xedc8,	// (0x0000edc8) main_pane_set_t2_copy1

0xeecc,	// (0x0000eecc) main_pane_set_t3_copy1

0xeeda,	// (0x0000eeda) main_pane_set_t4_copy1

0xede7,	// (0x0000ede7) set_content_pane_g1_copy1_ParamLimits

0xede7,	// (0x0000ede7) set_content_pane_g1_copy1

0xeee8,	// (0x0000eee8) setting_code_pane_copy1

0xa1e1,	// (0x0000a1e1) setting_slider_graphic_pane_copy1

0xa1e1,	// (0x0000a1e1) setting_slider_pane_copy1

0xa1eb,	// (0x0000a1eb) setting_text_pane_copy1

0xa1f5,	// (0x0000a1f5) setting_volume_pane_copy1

0xeef2,	// (0x0000eef2) settings_code_pane_cp2_copy1

0xeefa,	// (0x0000eefa) settings_code_pane_cp_copy1_ParamLimits

0xeefa,	// (0x0000eefa) settings_code_pane_cp_copy1

0xef0e,	// (0x0000ef0e) volume_set_pane_copy1

0xef16,	// (0x0000ef16) volume_set_pane_g10_copy1

0xef1e,	// (0x0000ef1e) volume_set_pane_g1_copy1

0xef26,	// (0x0000ef26) volume_set_pane_g2_copy1

0xef2e,	// (0x0000ef2e) volume_set_pane_g3_copy1

0xef36,	// (0x0000ef36) volume_set_pane_g4_copy1

0xef3e,	// (0x0000ef3e) volume_set_pane_g5_copy1

0xef46,	// (0x0000ef46) volume_set_pane_g6_copy1

0xef4e,	// (0x0000ef4e) volume_set_pane_g7_copy1

0xef56,	// (0x0000ef56) volume_set_pane_g8_copy1

0xef5e,	// (0x0000ef5e) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa272,	// (0x0000a272) setting_slider_pane_t1_copy1_ParamLimits

0xa272,	// (0x0000a272) setting_slider_pane_t1_copy1

0xef66,	// (0x0000ef66) setting_slider_pane_t2_copy1_ParamLimits

0xef66,	// (0x0000ef66) setting_slider_pane_t2_copy1

0xef80,	// (0x0000ef80) setting_slider_pane_t3_copy1_ParamLimits

0xef80,	// (0x0000ef80) setting_slider_pane_t3_copy1

0xef98,	// (0x0000ef98) slider_set_pane_copy1_ParamLimits

0xef98,	// (0x0000ef98) slider_set_pane_copy1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy2

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy2

0xa2d8,	// (0x0000a2d8) set_opt_bg_pane_g3_copy2

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy2

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy2

0xefae,	// (0x0000efae) set_opt_bg_pane_g7_copy2

0xa2ea,	// (0x0000a2ea) set_opt_bg_pane_g8_copy2

0xa2f4,	// (0x0000a2f4) set_opt_bg_pane_g9_copy2

0xa2fe,	// (0x0000a2fe) aid_size_touch_slider_mark_copy1_ParamLimits

0xa2fe,	// (0x0000a2fe) aid_size_touch_slider_mark_copy1

0xa312,	// (0x0000a312) slider_set_pane_g1_copy1

0xa31b,	// (0x0000a31b) slider_set_pane_g2_copy1

0x4daa,	// (0x00004daa) slider_set_pane_g3_copy1_ParamLimits

0x4daa,	// (0x00004daa) slider_set_pane_g3_copy1

0x4dbe,	// (0x00004dbe) slider_set_pane_g4_copy1_ParamLimits

0x4dbe,	// (0x00004dbe) slider_set_pane_g4_copy1

0x4dd6,	// (0x00004dd6) slider_set_pane_g5_copy1_ParamLimits

0x4dd6,	// (0x00004dd6) slider_set_pane_g5_copy1

0x4daa,	// (0x00004daa) slider_set_pane_g6_copy1_ParamLimits

0x4daa,	// (0x00004daa) slider_set_pane_g6_copy1

0xefb6,	// (0x0000efb6) slider_set_pane_g7_copy1_ParamLimits

0xefb6,	// (0x0000efb6) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa339,	// (0x0000a339) setting_slider_graphic_pane_g1_copy1

0xefcc,	// (0x0000efcc) setting_slider_graphic_pane_t1_copy1

0xefdc,	// (0x0000efdc) setting_slider_graphic_pane_t2_copy1

0xefec,	// (0x0000efec) slider_set_pane_cp_copy1

0xa372,	// (0x0000a372) input_focus_pane_cp1_copy1

0xa37b,	// (0x0000a37b) list_set_text_pane_copy1

0xa383,	// (0x0000a383) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa372,	// (0x0000a372) input_focus_pane_cp2_copy1

0xa383,	// (0x0000a383) setting_code_pane_g1_copy1

0xeff4,	// (0x0000eff4) setting_code_pane_t1_copy1

0xbd26,	// (0x0000bd26) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbd38,	// (0x0000bd38) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd38,	// (0x0000bd38) list_set_graphic_pane_g1_copy1

0xf002,	// (0x0000f002) list_set_graphic_pane_g2_copy1

0xbd50,	// (0x0000bd50) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd50,	// (0x0000bd50) list_set_graphic_pane_t1_copy1

0x6432,	// (0x00006432) rs_clock_indi_pane_g1

0xa3b4,	// (0x0000a3b4) rs_clock_indi_pane_t1

0x9bd5,	// (0x00009bd5) rs_indi_pane

0xa3c2,	// (0x0000a3c2) rs_indi_pane_g1

0xa3cb,	// (0x0000a3cb) rs_indi_pane_g2

0xa3d4,	// (0x0000a3d4) rs_indi_pane_g3

0x0002,

0xaf95,	// (0x0000af95) rs_indi_pane_g

0x259f,	// (0x0000259f) bg_popup_preview_window_pane_cp03

0xa3dd,	// (0x0000a3dd) popup_fep_tooltip_window_t1

0x763a,	// (0x0000763a) popup_note2_window_g2_ParamLimits

0x763a,	// (0x0000763a) popup_note2_window_g2

0x0001,

0xad33,	// (0x0000ad33) popup_note2_window_g_ParamLimits

0xad33,	// (0x0000ad33) popup_note2_window_g

0x7c3c,	// (0x00007c3c) bg_popup_sub_pane_cp11_ParamLimits

0x7c49,	// (0x00007c49) cell_ai3_links_pane_g1_ParamLimits

0x7c60,	// (0x00007c60) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0x24b0,	// (0x000024b0) cell_graphic_popup_pane_cp2_ParamLimits

0x24b0,	// (0x000024b0) cell_graphic_popup_pane_cp2

0xa3eb,	// (0x0000a3eb) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa3f3,	// (0x0000a3f3) cell_graphic_popup_pane_g3_cp2

0xa3fb,	// (0x0000a3fb) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1375,	// (0x00001375) main_tmo_pane_ParamLimits

0xdafc,	// (0x0000dafc) popup_tmo_big_image_note_window

0xea72,	// (0x0000ea72) cell_ai5_widget_list_pane

0xea7a,	// (0x0000ea7a) cell_ai5_widget_lrg_icon_pane

0xed4d,	// (0x0000ed4d) tmo_note_info_pane_t1_ParamLimits

0xed62,	// (0x0000ed62) tmo_note_info_pane_t2_ParamLimits

0xed79,	// (0x0000ed79) tmo_note_info_pane_t3_ParamLimits

0x9f92,	// (0x00009f92) tmo_note_info_pane_t4_ParamLimits

0x9fa4,	// (0x00009fa4) tmo_note_info_pane_t5_ParamLimits

0xf35e,	// (0x0000f35e) tmo_note_info_pane_t_ParamLimits

0xedf3,	// (0x0000edf3) settings_container_pane_ParamLimits

0xa36a,	// (0x0000a36a) indicator_popup_pane_cp5

0xa36a,	// (0x0000a36a) indicator_popup_pane_cp6

0xbd26,	// (0x0000bd26) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa409,	// (0x0000a409) popup_tmo_big_image_note_window_g1

0xa413,	// (0x0000a413) popup_tmo_big_image_note_window_t1

0xa423,	// (0x0000a423) popup_tmo_big_image_note_window_t2

0xa433,	// (0x0000a433) popup_tmo_big_image_note_window_t3

0x0002,

0xaf9c,	// (0x0000af9c) popup_tmo_big_image_note_window_t

0xf00a,	// (0x0000f00a) cell_ai5_widget_lrg_icon_pane_g1

0xf012,	// (0x0000f012) cell_ai5_widget_lrg_icon_pane_t1

0xf020,	// (0x0000f020) cell_ai5_widget_list_row_pane_ParamLimits

0xf020,	// (0x0000f020) cell_ai5_widget_list_row_pane

0xf039,	// (0x0000f039) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf039,	// (0x0000f039) cell_ai5_widget_list_row_pane_g1

0xf046,	// (0x0000f046) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf046,	// (0x0000f046) cell_ai5_widget_list_row_pane_t1

0xf05e,	// (0x0000f05e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf05e,	// (0x0000f05e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf369,	// (0x0000f369) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf369,	// (0x0000f369) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa4a9,	// (0x0000a4a9) popup_fep_char_pre_window

0xa4b1,	// (0x0000a4b1) popup_fep_ituss_window

0xa4bc,	// (0x0000a4bc) popup_fep_vkbss_window

0xa4c5,	// (0x0000a4c5) grid_vkbss_keypad_pane_ParamLimits

0xa4c5,	// (0x0000a4c5) grid_vkbss_keypad_pane

0xa4d5,	// (0x0000a4d5) ituss_keypad_pane

0xa4dd,	// (0x0000a4dd) aid_vkbss_key_offset_ParamLimits

0xa4dd,	// (0x0000a4dd) aid_vkbss_key_offset

0xa4ec,	// (0x0000a4ec) cell_vkbss_key_pane_ParamLimits

0xa4ec,	// (0x0000a4ec) cell_vkbss_key_pane

0xa502,	// (0x0000a502) bg_cell_vkbss_key_g1_ParamLimits

0xa502,	// (0x0000a502) bg_cell_vkbss_key_g1

0xa50e,	// (0x0000a50e) cell_vkbss_key_3p_pane_ParamLimits

0xa50e,	// (0x0000a50e) cell_vkbss_key_3p_pane

0xa528,	// (0x0000a528) cell_vkbss_key_g1_ParamLimits

0xa528,	// (0x0000a528) cell_vkbss_key_g1

0xa542,	// (0x0000a542) cell_vkbss_key_t1_ParamLimits

0xa542,	// (0x0000a542) cell_vkbss_key_t1

0xa56d,	// (0x0000a56d) cell_ituss_key_pane_ParamLimits

0xa56d,	// (0x0000a56d) cell_ituss_key_pane

0xa57c,	// (0x0000a57c) bg_cell_ituss_key_g1_ParamLimits

0xa57c,	// (0x0000a57c) bg_cell_ituss_key_g1

0xa588,	// (0x0000a588) cell_ituss_key_pane_g1_ParamLimits

0xa588,	// (0x0000a588) cell_ituss_key_pane_g1

0xa594,	// (0x0000a594) cell_ituss_key_pane_g2_ParamLimits

0xa594,	// (0x0000a594) cell_ituss_key_pane_g2

0x0001,

0xafa8,	// (0x0000afa8) cell_ituss_key_pane_g_ParamLimits

0xafa8,	// (0x0000afa8) cell_ituss_key_pane_g

0xa5a7,	// (0x0000a5a7) cell_ituss_key_t1_ParamLimits

0xa5a7,	// (0x0000a5a7) cell_ituss_key_t1

0xa5c5,	// (0x0000a5c5) cell_ituss_key_t2_ParamLimits

0xa5c5,	// (0x0000a5c5) cell_ituss_key_t2

0xa5e4,	// (0x0000a5e4) cell_ituss_key_t3_ParamLimits

0xa5e4,	// (0x0000a5e4) cell_ituss_key_t3

0xa603,	// (0x0000a603) cell_ituss_key_t4_ParamLimits

0xa603,	// (0x0000a603) cell_ituss_key_t4

0x0003,

0xafad,	// (0x0000afad) cell_ituss_key_t_ParamLimits

0xafad,	// (0x0000afad) cell_ituss_key_t

0xa622,	// (0x0000a622) cell_vkbss_key_3p_pane_g1

0xa62a,	// (0x0000a62a) cell_vkbss_key_3p_pane_g2

0xa632,	// (0x0000a632) cell_vkbss_key_3p_pane_g3

0x0002,

0xafb6,	// (0x0000afb6) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa63a,	// (0x0000a63a) popup_fep_char_pre_window_t1

0xea68,	// (0x0000ea68) main_ai5_sk_pane

0xa01e,	// (0x0000a01e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa02a,	// (0x0000a02a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa03e,	// (0x0000a03e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa04d,	// (0x0000a04d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xaf8e,	// (0x0000af8e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa060,	// (0x0000a060) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf070,	// (0x0000f070) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

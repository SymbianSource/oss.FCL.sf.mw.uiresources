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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f405 };

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
0xb327,	// (0x0003a72c) Screen

0xb333,	// (0x0003a738) application_window_ParamLimits

0xb333,	// (0x0003a738) application_window

0x23a1,	// (0x000317a6) screen_g1

0xb36b,	// (0x0003a770) area_bottom_pane_ParamLimits

0xb36b,	// (0x0003a770) area_bottom_pane

0x005f,	// (0x0002f464) area_top_pane_ParamLimits

0x005f,	// (0x0002f464) area_top_pane

0x00fd,	// (0x0002f502) main_pane_ParamLimits

0x00fd,	// (0x0002f502) main_pane

0x23ab,	// (0x000317b0) misc_graphics

0xd2e3,	// (0x0003c6e8) battery_pane_ParamLimits

0xd2e3,	// (0x0003c6e8) battery_pane

0x5744,	// (0x00034b49) bg_status_flat_pane_g8

0x574c,	// (0x00034b51) bg_status_flat_pane_g9

0x4af3,	// (0x00033ef8) context_pane_ParamLimits

0x4af3,	// (0x00033ef8) context_pane

0xd44e,	// (0x0003c853) navi_pane_ParamLimits

0xd44e,	// (0x0003c853) navi_pane

0xd4c5,	// (0x0003c8ca) signal_pane_ParamLimits

0xd4c5,	// (0x0003c8ca) signal_pane

0x0008,

0xf885,	// (0x0003ec8a) bg_status_flat_pane_g

0xd555,	// (0x0003c95a) status_pane_g1_ParamLimits

0xd555,	// (0x0003c95a) status_pane_g1

0xd56b,	// (0x0003c970) status_pane_g2_ParamLimits

0xd56b,	// (0x0003c970) status_pane_g2

0x4d13,	// (0x00034118) status_pane_g3_ParamLimits

0x4d13,	// (0x00034118) status_pane_g3

0x0004,

0xf7b8,	// (0x0003ebbd) status_pane_g_ParamLimits

0xf7b8,	// (0x0003ebbd) status_pane_g

0xd577,	// (0x0003c97c) title_pane_ParamLimits

0xd577,	// (0x0003c97c) title_pane

0xd5d8,	// (0x0003c9dd) uni_indicator_pane_ParamLimits

0xd5d8,	// (0x0003c9dd) uni_indicator_pane

0x43c2,	// (0x000337c7) bg_list_pane_ParamLimits

0x43c2,	// (0x000337c7) bg_list_pane

0xcbb1,	// (0x0003bfb6) find_pane

0xcbb9,	// (0x0003bfbe) listscroll_app_pane_ParamLimits

0xcbb9,	// (0x0003bfbe) listscroll_app_pane

0x43ee,	// (0x000337f3) listscroll_form_pane

0xcbc5,	// (0x0003bfca) listscroll_gen_pane_ParamLimits

0xcbc5,	// (0x0003bfca) listscroll_gen_pane

0x43ee,	// (0x000337f3) listscroll_set_pane

0x62ed,	// (0x000356f2) main_idle_act_pane

0x40a2,	// (0x000334a7) main_idle_trad_pane

0x40a2,	// (0x000334a7) main_list_empty_pane

0x4408,	// (0x0003380d) main_midp_pane

0x4414,	// (0x00033819) main_pane_g1_ParamLimits

0x4414,	// (0x00033819) main_pane_g1

0xcbe7,	// (0x0003bfec) popup_ai_message_window_ParamLimits

0xcbe7,	// (0x0003bfec) popup_ai_message_window

0xcc78,	// (0x0003c07d) popup_fep_china_uni_window_ParamLimits

0xcc78,	// (0x0003c07d) popup_fep_china_uni_window

0x4520,	// (0x00033925) popup_fep_japan_candidate_window_ParamLimits

0x4520,	// (0x00033925) popup_fep_japan_candidate_window

0x4540,	// (0x00033945) popup_fep_japan_predictive_window_ParamLimits

0x4540,	// (0x00033945) popup_fep_japan_predictive_window

0xccd4,	// (0x0003c0d9) popup_find_window

0xccf1,	// (0x0003c0f6) popup_grid_graphic_window_ParamLimits

0xccf1,	// (0x0003c0f6) popup_grid_graphic_window

0x45a5,	// (0x000339aa) popup_large_graphic_colour_window

0xcd89,	// (0x0003c18e) popup_menu_window_ParamLimits

0xcd89,	// (0x0003c18e) popup_menu_window

0xcf43,	// (0x0003c348) popup_note_image_window

0xcf09,	// (0x0003c30e) popup_note_wait_window_ParamLimits

0xcf09,	// (0x0003c30e) popup_note_wait_window

0xcf5b,	// (0x0003c360) popup_note_window_ParamLimits

0xcf5b,	// (0x0003c360) popup_note_window

0xd001,	// (0x0003c406) popup_query_code_window_ParamLimits

0xd001,	// (0x0003c406) popup_query_code_window

0x47ed,	// (0x00033bf2) popup_query_data_code_window_ParamLimits

0x47ed,	// (0x00033bf2) popup_query_data_code_window

0xd03b,	// (0x0003c440) popup_query_data_window_ParamLimits

0xd03b,	// (0x0003c440) popup_query_data_window

0xd0b1,	// (0x0003c4b6) popup_query_sat_info_window_ParamLimits

0xd0b1,	// (0x0003c4b6) popup_query_sat_info_window

0xd148,	// (0x0003c54d) popup_snote_single_graphic_window_ParamLimits

0xd148,	// (0x0003c54d) popup_snote_single_graphic_window

0xd148,	// (0x0003c54d) popup_snote_single_text_window_ParamLimits

0xd148,	// (0x0003c54d) popup_snote_single_text_window

0x4874,	// (0x00033c79) popup_sub_window_general

0x49a4,	// (0x00033da9) popup_window_general_ParamLimits

0x49a4,	// (0x00033da9) popup_window_general

0x49b9,	// (0x00033dbe) power_save_pane

0xbad9,	// (0x0003aede) control_pane_g1_ParamLimits

0xbad9,	// (0x0003aede) control_pane_g1

0xbb02,	// (0x0003af07) control_pane_g2_ParamLimits

0xbb02,	// (0x0003af07) control_pane_g2

0x436b,	// (0x00033770) control_pane_g3_ParamLimits

0x436b,	// (0x00033770) control_pane_g3

0x0007,

0xf7a0,	// (0x0003eba5) control_pane_g_ParamLimits

0xf7a0,	// (0x0003eba5) control_pane_g

0xbb3d,	// (0x0003af42) control_pane_t1_ParamLimits

0xbb3d,	// (0x0003af42) control_pane_t1

0xbb9b,	// (0x0003afa0) control_pane_t2_ParamLimits

0xbb9b,	// (0x0003afa0) control_pane_t2

0x0002,

0xf7b1,	// (0x0003ebb6) control_pane_t_ParamLimits

0xf7b1,	// (0x0003ebb6) control_pane_t

0x428c,	// (0x00033691) navi_navi_volume_pane_cp1

0x4295,	// (0x0003369a) status_small_icon_pane

0x429d,	// (0x000336a2) status_small_pane_g1_ParamLimits

0x429d,	// (0x000336a2) status_small_pane_g1

0x42d1,	// (0x000336d6) status_small_pane_g2_ParamLimits

0x42d1,	// (0x000336d6) status_small_pane_g2

0x42dd,	// (0x000336e2) status_small_pane_g3_ParamLimits

0x42dd,	// (0x000336e2) status_small_pane_g3

0x42e9,	// (0x000336ee) status_small_pane_g4_ParamLimits

0x42e9,	// (0x000336ee) status_small_pane_g4

0x42f5,	// (0x000336fa) status_small_pane_g5_ParamLimits

0x42f5,	// (0x000336fa) status_small_pane_g5

0x4304,	// (0x00033709) status_small_pane_g6_ParamLimits

0x4304,	// (0x00033709) status_small_pane_g6

0x0007,

0xf78f,	// (0x0003eb94) status_small_pane_g_ParamLimits

0xf78f,	// (0x0003eb94) status_small_pane_g

0x4334,	// (0x00033739) status_small_pane_t1

0x4357,	// (0x0003375c) status_small_wait_pane_ParamLimits

0x4357,	// (0x0003375c) status_small_wait_pane

0xca07,	// (0x0003be0c) aid_levels_signal_ParamLimits

0xca07,	// (0x0003be0c) aid_levels_signal

0xca1f,	// (0x0003be24) signal_pane_g1_ParamLimits

0xca1f,	// (0x0003be24) signal_pane_g1

0xca3a,	// (0x0003be3f) signal_pane_g2_ParamLimits

0xca3a,	// (0x0003be3f) signal_pane_g2

0x0001,

0xf724,	// (0x0003eb29) signal_pane_g_ParamLimits

0xf724,	// (0x0003eb29) signal_pane_g

0x3b5f,	// (0x00032f64) context_pane_g1

0xb4e4,	// (0x0003a8e9) title_pane_g1

0xc514,	// (0x0003b919) title_pane_t1

0x2453,	// (0x00031858) title_pane_t2

0x2479,	// (0x0003187e) title_pane_t3

0x0002,

0xf573,	// (0x0003e978) title_pane_t

0xd600,	// (0x0003ca05) aid_levels_battery_ParamLimits

0xd600,	// (0x0003ca05) aid_levels_battery

0xd61c,	// (0x0003ca21) battery_pane_g1_ParamLimits

0xd61c,	// (0x0003ca21) battery_pane_g1

0xd639,	// (0x0003ca3e) battery_pane_g2_ParamLimits

0xd639,	// (0x0003ca3e) battery_pane_g2

0x0001,

0xf7c3,	// (0x0003ebc8) battery_pane_g_ParamLimits

0xf7c3,	// (0x0003ebc8) battery_pane_g

0xd83e,	// (0x0003cc43) uni_indicator_pane_g1

0xd853,	// (0x0003cc58) uni_indicator_pane_g2

0xd868,	// (0x0003cc6d) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0003ed32) uni_indicator_pane_g

0x3ef2,	// (0x000332f7) navi_icon_pane_ParamLimits

0x3ef2,	// (0x000332f7) navi_icon_pane

0x3e3b,	// (0x00033240) navi_midp_pane

0x3f0e,	// (0x00033313) navi_navi_pane

0x3f18,	// (0x0003331d) navi_text_pane_ParamLimits

0x3f18,	// (0x0003331d) navi_text_pane

0x23a1,	// (0x000317a6) status_small_wait_pane_g1

0x2fee,	// (0x000323f3) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0003ed2d) status_small_wait_pane_g

0x5db1,	// (0x000351b6) navi_navi_icon_text_pane

0x5db9,	// (0x000351be) navi_navi_pane_g1_ParamLimits

0x5db9,	// (0x000351be) navi_navi_pane_g1

0x5dcb,	// (0x000351d0) navi_navi_pane_g2_ParamLimits

0x5dcb,	// (0x000351d0) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0003ecfb) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0003ecfb) navi_navi_pane_g

0x5ddd,	// (0x000351e2) navi_navi_tabs_pane

0x5de6,	// (0x000351eb) navi_navi_text_pane

0x5db1,	// (0x000351b6) navi_navi_volume_pane

0xd7ff,	// (0x0003cc04) navi_text_pane_t1

0xd7f3,	// (0x0003cbf8) navi_icon_pane_g1

0x5cc2,	// (0x000350c7) navi_navi_text_pane_t1

0xbe00,	// (0x0003b205) navi_navi_volume_pane_g1

0xbe08,	// (0x0003b20d) volume_small_pane

0xd74f,	// (0x0003cb54) navi_navi_icon_text_pane_g1

0xd757,	// (0x0003cb5c) navi_navi_icon_text_pane_t1

0x3f0e,	// (0x00033313) navi_tabs_2_long_pane

0x3f0e,	// (0x00033313) navi_tabs_2_pane

0x3f0e,	// (0x00033313) navi_tabs_3_long_pane

0x3f0e,	// (0x00033313) navi_tabs_3_pane

0x3f0e,	// (0x00033313) navi_tabs_4_pane

0xbde0,	// (0x0003b1e5) tabs_2_active_pane_ParamLimits

0xbde0,	// (0x0003b1e5) tabs_2_active_pane

0xbdf0,	// (0x0003b1f5) tabs_2_passive_pane_ParamLimits

0xbdf0,	// (0x0003b1f5) tabs_2_passive_pane

0xbdae,	// (0x0003b1b3) tabs_3_active_pane_ParamLimits

0xbdae,	// (0x0003b1b3) tabs_3_active_pane

0xbdbe,	// (0x0003b1c3) tabs_3_passive_pane_ParamLimits

0xbdbe,	// (0x0003b1c3) tabs_3_passive_pane

0xbdcf,	// (0x0003b1d4) tabs_3_passive_pane_cp_ParamLimits

0xbdcf,	// (0x0003b1d4) tabs_3_passive_pane_cp

0xbd6a,	// (0x0003b16f) tabs_4_active_pane_ParamLimits

0xbd6a,	// (0x0003b16f) tabs_4_active_pane

0xbd7b,	// (0x0003b180) tabs_4_passive_pane_ParamLimits

0xbd7b,	// (0x0003b180) tabs_4_passive_pane

0xbd8c,	// (0x0003b191) tabs_4_passive_pane_cp_ParamLimits

0xbd8c,	// (0x0003b191) tabs_4_passive_pane_cp

0xbd9d,	// (0x0003b1a2) tabs_4_passive_pane_cp2_ParamLimits

0xbd9d,	// (0x0003b1a2) tabs_4_passive_pane_cp2

0xbd4a,	// (0x0003b14f) tabs_2_long_active_pane_ParamLimits

0xbd4a,	// (0x0003b14f) tabs_2_long_active_pane

0xbd5a,	// (0x0003b15f) tabs_2_long_passive_pane_ParamLimits

0xbd5a,	// (0x0003b15f) tabs_2_long_passive_pane

0xbd17,	// (0x0003b11c) tabs_3_long_active_pane_ParamLimits

0xbd17,	// (0x0003b11c) tabs_3_long_active_pane

0xbd28,	// (0x0003b12d) tabs_3_long_passive_pane_ParamLimits

0xbd28,	// (0x0003b12d) tabs_3_long_passive_pane

0xbd39,	// (0x0003b13e) tabs_3_long_passive_pane_cp_ParamLimits

0xbd39,	// (0x0003b13e) tabs_3_long_passive_pane_cp

0x1368,	// (0x0003076d) volume_small_pane_g1

0xbcc6,	// (0x0003b0cb) volume_small_pane_g2

0xbccf,	// (0x0003b0d4) volume_small_pane_g3

0xbcd8,	// (0x0003b0dd) volume_small_pane_g4

0xbce1,	// (0x0003b0e6) volume_small_pane_g5

0xbcea,	// (0x0003b0ef) volume_small_pane_g6

0xbcf3,	// (0x0003b0f8) volume_small_pane_g7

0xbcfc,	// (0x0003b101) volume_small_pane_g8

0xbd05,	// (0x0003b10a) volume_small_pane_g9

0xbd0e,	// (0x0003b113) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0003ecc7) volume_small_pane_g

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp2_ParamLimits

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp2

0xc5a0,	// (0x0003b9a5) tabs_3_active_pane_g1

0xc5a8,	// (0x0003b9ad) tabs_3_active_pane_t1

0x2e4c,	// (0x00032251) bg_passive_tab_pane_cp2_ParamLimits

0x2e4c,	// (0x00032251) bg_passive_tab_pane_cp2

0xc5a0,	// (0x0003b9a5) tabs_3_passive_pane_g1

0xc5a8,	// (0x0003b9ad) tabs_3_passive_pane_t1

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp3_ParamLimits

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp3

0xc5ba,	// (0x0003b9bf) tabs_4_active_pane_g1

0xc5c2,	// (0x0003b9c7) tabs_4_active_pane_t1

0x2e4c,	// (0x00032251) bg_passive_tab_pane_cp3_ParamLimits

0x2e4c,	// (0x00032251) bg_passive_tab_pane_cp3

0xc5ba,	// (0x0003b9bf) tabs_4_1_passive_pane_g1

0xc5c2,	// (0x0003b9c7) tabs_4_1_passive_pane_t1

0x4408,	// (0x0003380d) list_highlight_pane_cp2

0xd919,	// (0x0003cd1e) list_set_pane_ParamLimits

0xd919,	// (0x0003cd1e) list_set_pane

0xd9b3,	// (0x0003cdb8) main_pane_set_t1_ParamLimits

0xd9b3,	// (0x0003cdb8) main_pane_set_t1

0xd9d3,	// (0x0003cdd8) main_pane_set_t2_ParamLimits

0xd9d3,	// (0x0003cdd8) main_pane_set_t2

0xd9e7,	// (0x0003cdec) main_pane_set_t3_ParamLimits

0xd9e7,	// (0x0003cdec) main_pane_set_t3

0xd9f9,	// (0x0003cdfe) main_pane_set_t4_ParamLimits

0xd9f9,	// (0x0003cdfe) main_pane_set_t4

0x0003,

0xf992,	// (0x0003ed97) main_pane_set_t_ParamLimits

0xf992,	// (0x0003ed97) main_pane_set_t

0xda0b,	// (0x0003ce10) setting_code_pane

0xda15,	// (0x0003ce1a) setting_slider_graphic_pane

0xda15,	// (0x0003ce1a) setting_slider_pane

0xda15,	// (0x0003ce1a) setting_text_pane

0xda15,	// (0x0003ce1a) setting_volume_pane

0x0342,	// (0x0002f747) volume_set_pane

0x248b,	// (0x00031890) bg_set_opt_pane_cp

0x034a,	// (0x0002f74f) setting_slider_pane_t1

0x0363,	// (0x0002f768) setting_slider_pane_t2

0x037d,	// (0x0002f782) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003e97f) setting_slider_pane_t

0x0395,	// (0x0002f79a) slider_set_pane

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp2

0x24cd,	// (0x000318d2) setting_slider_graphic_pane_g1

0x03ab,	// (0x0002f7b0) setting_slider_graphic_pane_t1

0x03bb,	// (0x0002f7c0) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003e986) setting_slider_graphic_pane_t

0x03cb,	// (0x0002f7d0) slider_set_pane_cp

0x23ab,	// (0x000317b0) input_focus_pane_cp1

0x62d4,	// (0x000356d9) list_set_text_pane

0x23a1,	// (0x000317a6) setting_text_pane_g1

0x23ab,	// (0x000317b0) input_focus_pane_cp2

0x23a1,	// (0x000317a6) setting_code_pane_g1

0x24d6,	// (0x000318db) setting_code_pane_t1

0x03d3,	// (0x0002f7d8) set_text_pane_t1_ParamLimits

0x03d3,	// (0x0002f7d8) set_text_pane_t1

0x34a4,	// (0x000328a9) set_opt_bg_pane_g1

0x34ac,	// (0x000328b1) set_opt_bg_pane_g2

0x62ae,	// (0x000356b3) set_opt_bg_pane_g3

0x34bc,	// (0x000328c1) set_opt_bg_pane_g4

0x34c4,	// (0x000328c9) set_opt_bg_pane_g5

0x34cc,	// (0x000328d1) set_opt_bg_pane_g6

0x62b8,	// (0x000356bd) set_opt_bg_pane_g7

0x62c0,	// (0x000356c5) set_opt_bg_pane_g8

0x62ca,	// (0x000356cf) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0003ed84) set_opt_bg_pane_g

0x62a1,	// (0x000356a6) slider_set_pane_g1

0x1530,	// (0x00030935) slider_set_pane_g2

0x0006,

0xf970,	// (0x0003ed75) slider_set_pane_g

0x14cc,	// (0x000308d1) volume_set_pane_g1

0x14d4,	// (0x000308d9) volume_set_pane_g2

0x14dc,	// (0x000308e1) volume_set_pane_g3

0x14e4,	// (0x000308e9) volume_set_pane_g4

0x14ec,	// (0x000308f1) volume_set_pane_g5

0x14f4,	// (0x000308f9) volume_set_pane_g6

0x14fc,	// (0x00030901) volume_set_pane_g7

0x1504,	// (0x00030909) volume_set_pane_g8

0x150c,	// (0x00030911) volume_set_pane_g9

0x1514,	// (0x00030919) volume_set_pane_g10

0x0009,

0xf948,	// (0x0003ed4d) volume_set_pane_g

0xc5d4,	// (0x0003b9d9) indicator_pane_ParamLimits

0xc5d4,	// (0x0003b9d9) indicator_pane

0xc5fc,	// (0x0003ba01) main_idle_pane_g2_ParamLimits

0xc5fc,	// (0x0003ba01) main_idle_pane_g2

0xc634,	// (0x0003ba39) main_pane_idle_g1_ParamLimits

0xc634,	// (0x0003ba39) main_pane_idle_g1

0x2525,	// (0x0003192a) popup_clock_digital_analogue_window_ParamLimits

0x2525,	// (0x0003192a) popup_clock_digital_analogue_window

0xc65b,	// (0x0003ba60) soft_indicator_pane_ParamLimits

0xc65b,	// (0x0003ba60) soft_indicator_pane

0xc675,	// (0x0003ba7a) wallpaper_pane_ParamLimits

0xc675,	// (0x0003ba7a) wallpaper_pane

0x23a1,	// (0x000317a6) wallpaper_pane_g1

0xc687,	// (0x0003ba8c) indicator_pane_g1_ParamLimits

0xc687,	// (0x0003ba8c) indicator_pane_g1

0x66a4,	// (0x00035aa9) navi_navi_icon_text_pane_srt_g1

0x2577,	// (0x0003197c) soft_indicator_pane_t1

0x2591,	// (0x00031996) aid_ps_area_pane

0xc69d,	// (0x0003baa2) aid_ps_clock_pane

0x25b0,	// (0x000319b5) aid_ps_indicator_pane

0x25bc,	// (0x000319c1) indicator_ps_pane_ParamLimits

0x25bc,	// (0x000319c1) indicator_ps_pane

0x2d11,	// (0x00032116) power_save_pane_g1_ParamLimits

0x2d11,	// (0x00032116) power_save_pane_g1

0x2d1d,	// (0x00032122) power_save_pane_g2_ParamLimits

0x2d1d,	// (0x00032122) power_save_pane_g2

0xf4de,	// (0x0003e8e3) aid_navinavi_width_pane

0x2591,	// (0x00031996) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003e98b) power_save_pane_g_ParamLimits

0xf586,	// (0x0003e98b) power_save_pane_g

0x2d2b,	// (0x00032130) power_save_pane_t1_ParamLimits

0x2d2b,	// (0x00032130) power_save_pane_t1

0xc69d,	// (0x0003baa2) aid_ps_clock_pane_ParamLimits

0x25b0,	// (0x000319b5) aid_ps_indicator_pane_ParamLimits

0x2d3d,	// (0x00032142) power_save_pane_t4_ParamLimits

0x2d3d,	// (0x00032142) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003e990) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003e990) power_save_pane_t

0x2d67,	// (0x0003216c) power_save_t3_ParamLimits

0x2d67,	// (0x0003216c) power_save_t3

0x2d52,	// (0x00032157) power_save_t2_ParamLimits

0x2d52,	// (0x00032157) power_save_t2

0x2d7c,	// (0x00032181) indicator_ps_pane_g1

0xc6ab,	// (0x0003bab0) ai_gene_pane_ParamLimits

0xc6ab,	// (0x0003bab0) ai_gene_pane

0xc6c2,	// (0x0003bac7) ai_links_pane_ParamLimits

0xc6c2,	// (0x0003bac7) ai_links_pane

0xc6da,	// (0x0003badf) indicator_pane_cp1_ParamLimits

0xc6da,	// (0x0003badf) indicator_pane_cp1

0xc6e9,	// (0x0003baee) main_pane_idle_g1_cp_ParamLimits

0xc6e9,	// (0x0003baee) main_pane_idle_g1_cp

0x2db5,	// (0x000321ba) popup_ai_links_title_window

0xc701,	// (0x0003bb06) soft_indicator_pane_cp1_ParamLimits

0xc701,	// (0x0003bb06) soft_indicator_pane_cp1

0x607a,	// (0x0003547f) ai_links_pane_g1

0x6083,	// (0x00035488) grid_ai_links_pane

0xd835,	// (0x0003cc3a) ai_gene_pane_1

0x6068,	// (0x0003546d) ai_gene_pane_2

0x6071,	// (0x00035476) list_highlight_pane_cp4

0xd811,	// (0x0003cc16) cell_ai_link_pane_ParamLimits

0xd811,	// (0x0003cc16) cell_ai_link_pane

0x6039,	// (0x0003543e) cell_ai_link_pane_g1

0x2fee,	// (0x000323f3) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0003ed28) cell_ai_link_pane_g

0x23ab,	// (0x000317b0) grid_highlight_cp2

0x23ab,	// (0x000317b0) bg_popup_sub_pane_cp1

0x2dd8,	// (0x000321dd) popup_ai_links_title_window_t1

0x5f87,	// (0x0003538c) ai_gene_pane_1_g1_ParamLimits

0x5f87,	// (0x0003538c) ai_gene_pane_1_g1

0x5f93,	// (0x00035398) ai_gene_pane_1_g2_ParamLimits

0x5f93,	// (0x00035398) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0003ed1e) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0003ed1e) ai_gene_pane_1_g

0x5fa0,	// (0x000353a5) ai_gene_pane_1_t1_ParamLimits

0x5fa0,	// (0x000353a5) ai_gene_pane_1_t1

0x5fd4,	// (0x000353d9) grid_ai_soft_ind_pane

0x5f72,	// (0x00035377) ai_gene_pane_2_t1_ParamLimits

0x5f72,	// (0x00035377) ai_gene_pane_2_t1

0xc715,	// (0x0003bb1a) main_pane_empty_t1_ParamLimits

0xc715,	// (0x0003bb1a) main_pane_empty_t1

0xc72d,	// (0x0003bb32) main_pane_empty_t2_ParamLimits

0xc72d,	// (0x0003bb32) main_pane_empty_t2

0xc742,	// (0x0003bb47) main_pane_empty_t3_ParamLimits

0xc742,	// (0x0003bb47) main_pane_empty_t3

0xc754,	// (0x0003bb59) main_pane_empty_t4_ParamLimits

0xc754,	// (0x0003bb59) main_pane_empty_t4

0xc766,	// (0x0003bb6b) main_pane_empty_t5_ParamLimits

0xc766,	// (0x0003bb6b) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003e995) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003e995) main_pane_empty_t

0x34f5,	// (0x000328fa) bg_popup_window_pane_ParamLimits

0x34f5,	// (0x000328fa) bg_popup_window_pane

0x5cd0,	// (0x000350d5) find_popup_pane_cp2_ParamLimits

0x5cd0,	// (0x000350d5) find_popup_pane_cp2

0x5cdc,	// (0x000350e1) heading_pane_ParamLimits

0x5cdc,	// (0x000350e1) heading_pane

0x23ab,	// (0x000317b0) bg_popup_sub_pane

0xd774,	// (0x0003cb79) bg_popup_window_pane_g1_ParamLimits

0xd774,	// (0x0003cb79) bg_popup_window_pane_g1

0xd783,	// (0x0003cb88) bg_popup_window_pane_g2_ParamLimits

0xd783,	// (0x0003cb88) bg_popup_window_pane_g2

0xd78f,	// (0x0003cb94) bg_popup_window_pane_g3_ParamLimits

0xd78f,	// (0x0003cb94) bg_popup_window_pane_g3

0xd79b,	// (0x0003cba0) bg_popup_window_pane_g4_ParamLimits

0xd79b,	// (0x0003cba0) bg_popup_window_pane_g4

0xd7aa,	// (0x0003cbaf) bg_popup_window_pane_g5_ParamLimits

0xd7aa,	// (0x0003cbaf) bg_popup_window_pane_g5

0xd7ba,	// (0x0003cbbf) bg_popup_window_pane_g6_ParamLimits

0xd7ba,	// (0x0003cbbf) bg_popup_window_pane_g6

0xd7c6,	// (0x0003cbcb) bg_popup_window_pane_g7_ParamLimits

0xd7c6,	// (0x0003cbcb) bg_popup_window_pane_g7

0xd7d5,	// (0x0003cbda) bg_popup_window_pane_g8_ParamLimits

0xd7d5,	// (0x0003cbda) bg_popup_window_pane_g8

0xd7e4,	// (0x0003cbe9) bg_popup_window_pane_g9_ParamLimits

0xd7e4,	// (0x0003cbe9) bg_popup_window_pane_g9

0x5cb6,	// (0x000350bb) bg_popup_window_pane_g10_ParamLimits

0x5cb6,	// (0x000350bb) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0003ece6) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0003ece6) bg_popup_window_pane_g

0x5bdf,	// (0x00034fe4) bg_popup_heading_pane_ParamLimits

0x5bdf,	// (0x00034fe4) bg_popup_heading_pane

0x15b8,	// (0x000309bd) tabs_4_passive_pane_cp_srt_ParamLimits

0x15b8,	// (0x000309bd) tabs_4_passive_pane_cp_srt

0x15ca,	// (0x000309cf) tabs_4_passive_pane_srt_ParamLimits

0x5bf3,	// (0x00034ff8) heading_pane_g2

0x15ca,	// (0x000309cf) tabs_4_passive_pane_srt

0x4f8e,	// (0x00034393) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f8e,	// (0x00034393) bg_passive_tab_pane_cp3_srt

0x5bfb,	// (0x00035000) heading_pane_t1_ParamLimits

0x5bfb,	// (0x00035000) heading_pane_t1

0x5c12,	// (0x00035017) heading_pane_t2_ParamLimits

0x5c12,	// (0x00035017) heading_pane_t2

0x0001,

0xf8dc,	// (0x0003ece1) heading_pane_t_ParamLimits

0xf8dc,	// (0x0003ece1) heading_pane_t

0x570c,	// (0x00034b11) bg_popup_heading_pane_g1

0x57bb,	// (0x00034bc0) bg_popup_heading_pane_g2

0x57c5,	// (0x00034bca) bg_popup_heading_pane_g3

0x57cf,	// (0x00034bd4) bg_popup_heading_pane_g4

0x57d9,	// (0x00034bde) bg_popup_heading_pane_g5

0x57e3,	// (0x00034be8) bg_popup_heading_pane_g6

0x57eb,	// (0x00034bf0) bg_popup_heading_pane_g7

0x57f3,	// (0x00034bf8) bg_popup_heading_pane_g8

0x57fd,	// (0x00034c02) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0003ec9d) bg_popup_heading_pane_g

0x4e9e,	// (0x000342a3) bg_popup_sub_pane_g1

0x4eae,	// (0x000342b3) bg_popup_sub_pane_g2

0x4ea6,	// (0x000342ab) bg_popup_sub_pane_g3

0x4ebe,	// (0x000342c3) bg_popup_sub_pane_g4

0x4eb6,	// (0x000342bb) bg_popup_sub_pane_g5

0x4ec6,	// (0x000342cb) bg_popup_sub_pane_g6

0x4ece,	// (0x000342d3) bg_popup_sub_pane_g7

0x4ede,	// (0x000342e3) bg_popup_sub_pane_g8

0x4ed6,	// (0x000342db) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0003ec77) bg_popup_sub_pane_g

0x2e4c,	// (0x00032251) bg_popup_window_pane_cp5_ParamLimits

0x2e4c,	// (0x00032251) bg_popup_window_pane_cp5

0x2e68,	// (0x0003226d) popup_note_window_g1_ParamLimits

0x2e68,	// (0x0003226d) popup_note_window_g1

0x2e74,	// (0x00032279) popup_note_window_t1_ParamLimits

0x2e74,	// (0x00032279) popup_note_window_t1

0x2e8a,	// (0x0003228f) popup_note_window_t2_ParamLimits

0x2e8a,	// (0x0003228f) popup_note_window_t2

0x2ea0,	// (0x000322a5) popup_note_window_t3_ParamLimits

0x2ea0,	// (0x000322a5) popup_note_window_t3

0x2eb6,	// (0x000322bb) popup_note_window_t4_ParamLimits

0x2eb6,	// (0x000322bb) popup_note_window_t4

0x2ede,	// (0x000322e3) popup_note_window_t5_ParamLimits

0x2ede,	// (0x000322e3) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003e9a0) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003e9a0) popup_note_window_t

0x2f02,	// (0x00032307) bg_popup_window_pane_cp6_ParamLimits

0x2f02,	// (0x00032307) bg_popup_window_pane_cp6

0x5688,	// (0x00034a8d) popup_note_image_window_g1_ParamLimits

0x5688,	// (0x00034a8d) popup_note_image_window_g1

0x5694,	// (0x00034a99) popup_note_image_window_g2_ParamLimits

0x5694,	// (0x00034a99) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0003ec6b) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0003ec6b) popup_note_image_window_g

0x56ad,	// (0x00034ab2) popup_note_image_window_t1_ParamLimits

0x56ad,	// (0x00034ab2) popup_note_image_window_t1

0x56c6,	// (0x00034acb) popup_note_image_window_t2_ParamLimits

0x56c6,	// (0x00034acb) popup_note_image_window_t2

0x56df,	// (0x00034ae4) popup_note_image_window_t3_ParamLimits

0x56df,	// (0x00034ae4) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0003ec70) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0003ec70) popup_note_image_window_t

0x5549,	// (0x0003494e) bg_popup_window_pane_cp7_ParamLimits

0x5549,	// (0x0003494e) bg_popup_window_pane_cp7

0x5579,	// (0x0003497e) popup_note_wait_window_g1_ParamLimits

0x5579,	// (0x0003497e) popup_note_wait_window_g1

0x5585,	// (0x0003498a) popup_note_wait_window_g2_ParamLimits

0x5585,	// (0x0003498a) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0003ec59) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0003ec59) popup_note_wait_window_g

0x559d,	// (0x000349a2) popup_note_wait_window_t1_ParamLimits

0x559d,	// (0x000349a2) popup_note_wait_window_t1

0x55c4,	// (0x000349c9) popup_note_wait_window_t2_ParamLimits

0x55c4,	// (0x000349c9) popup_note_wait_window_t2

0x55e1,	// (0x000349e6) popup_note_wait_window_t3_ParamLimits

0x55e1,	// (0x000349e6) popup_note_wait_window_t3

0x55f4,	// (0x000349f9) popup_note_wait_window_t4_ParamLimits

0x55f4,	// (0x000349f9) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0003ec60) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0003ec60) popup_note_wait_window_t

0x5619,	// (0x00034a1e) wait_bar_pane_ParamLimits

0x5619,	// (0x00034a1e) wait_bar_pane

0x23ab,	// (0x000317b0) wait_anim_pane

0x23ab,	// (0x000317b0) wait_border_pane

0x23a1,	// (0x000317a6) wait_anim_pane_g1

0x23a1,	// (0x000317a6) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0003eb24) wait_anim_pane_g

0x54ed,	// (0x000348f2) wait_border_pane_g1

0x54f8,	// (0x000348fd) wait_border_pane_g2

0x5501,	// (0x00034906) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0003ec52) wait_border_pane_g

0x5358,	// (0x0003475d) bg_popup_window_pane_cp16_ParamLimits

0x5358,	// (0x0003475d) bg_popup_window_pane_cp16

0x5458,	// (0x0003485d) indicator_popup_pane_cp4_ParamLimits

0x5458,	// (0x0003485d) indicator_popup_pane_cp4

0x546c,	// (0x00034871) popup_query_data_window_t1_ParamLimits

0x546c,	// (0x00034871) popup_query_data_window_t1

0x547e,	// (0x00034883) popup_query_data_window_t2_ParamLimits

0x547e,	// (0x00034883) popup_query_data_window_t2

0x5497,	// (0x0003489c) popup_query_data_window_t3_ParamLimits

0x5497,	// (0x0003489c) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0003ec4b) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0003ec4b) popup_query_data_window_t

0x54b1,	// (0x000348b6) query_popup_data_pane_ParamLimits

0x54b1,	// (0x000348b6) query_popup_data_pane

0x54c5,	// (0x000348ca) query_popup_data_pane_cp1_ParamLimits

0x54c5,	// (0x000348ca) query_popup_data_pane_cp1

0x5358,	// (0x0003475d) bg_popup_window_pane_cp10_ParamLimits

0x5358,	// (0x0003475d) bg_popup_window_pane_cp10

0x538a,	// (0x0003478f) indicator_popup_pane_ParamLimits

0x538a,	// (0x0003478f) indicator_popup_pane

0x53ac,	// (0x000347b1) popup_query_code_window_t1_ParamLimits

0x53ac,	// (0x000347b1) popup_query_code_window_t1

0x53c6,	// (0x000347cb) popup_query_code_window_t2_ParamLimits

0x53c6,	// (0x000347cb) popup_query_code_window_t2

0x540f,	// (0x00034814) popup_query_code_window_t3_ParamLimits

0x540f,	// (0x00034814) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0003ec44) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0003ec44) popup_query_code_window_t

0x543e,	// (0x00034843) query_popup_pane_ParamLimits

0x543e,	// (0x00034843) query_popup_pane

0x2f02,	// (0x00032307) bg_popup_window_pane_cp15_ParamLimits

0x2f02,	// (0x00032307) bg_popup_window_pane_cp15

0x2f20,	// (0x00032325) indicator_popup_pane_cp1_ParamLimits

0x2f20,	// (0x00032325) indicator_popup_pane_cp1

0x2f33,	// (0x00032338) indicator_popup_pane_cp2_ParamLimits

0x2f33,	// (0x00032338) indicator_popup_pane_cp2

0x2f46,	// (0x0003234b) popup_query_data_code_window_g1_ParamLimits

0x2f46,	// (0x0003234b) popup_query_data_code_window_g1

0x2f59,	// (0x0003235e) popup_query_data_code_window_t1_ParamLimits

0x2f59,	// (0x0003235e) popup_query_data_code_window_t1

0x2f6b,	// (0x00032370) popup_query_data_code_window_t2_ParamLimits

0x2f6b,	// (0x00032370) popup_query_data_code_window_t2

0x2f7d,	// (0x00032382) popup_query_data_code_window_t3_ParamLimits

0x2f7d,	// (0x00032382) popup_query_data_code_window_t3

0x2f93,	// (0x00032398) popup_query_data_code_window_t4_ParamLimits

0x2f93,	// (0x00032398) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003e9ab) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003e9ab) popup_query_data_code_window_t

0x1228,	// (0x0003062d) list_single_midp_graphic_pane_g3

0x2fab,	// (0x000323b0) query_popup_data_pane_cp2_ParamLimits

0x2fbe,	// (0x000323c3) query_popup_pane_cp2_ParamLimits

0x2fbe,	// (0x000323c3) query_popup_pane_cp2

0x23ab,	// (0x000317b0) bg_popup_window_pane_cp11

0x5350,	// (0x00034755) heading_pane_cp5

0x30a6,	// (0x000324ab) listscroll_popup_info_pane

0x23ab,	// (0x000317b0) input_focus_pane_cp3

0x2fd1,	// (0x000323d6) query_popup_pane_t1

0x2fdf,	// (0x000323e4) list_popup_info_pane_ParamLimits

0x2fdf,	// (0x000323e4) list_popup_info_pane

0x2fee,	// (0x000323f3) listscroll_popup_info_pane_g1

0x2ff6,	// (0x000323fb) scroll_pane_cp7

0x3000,	// (0x00032405) popup_info_list_pane_t1_ParamLimits

0x3000,	// (0x00032405) popup_info_list_pane_t1

0x301a,	// (0x0003241f) popup_info_list_pane_t2_ParamLimits

0x301a,	// (0x0003241f) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003e9b4) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003e9b4) popup_info_list_pane_t

0x23ab,	// (0x000317b0) bg_popup_window_pane_cp12

0x66be,	// (0x00035ac3) find_popup_pane

0x248b,	// (0x00031890) bg_popup_window_pane_cp3

0x3034,	// (0x00032439) heading_pane_cp3

0x3040,	// (0x00032445) listscroll_popup_graphic_pane

0x23ab,	// (0x000317b0) bg_popup_window_pane_cp4

0xc7c8,	// (0x0003bbcd) heading_pane_cp4

0x30a6,	// (0x000324ab) listscroll_popup_colour_pane

0xc7d0,	// (0x0003bbd5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc7d0,	// (0x0003bbd5) cell_large_graphic_colour_none_popup_pane

0xc7e4,	// (0x0003bbe9) grid_large_graphic_colour_popup_pane_ParamLimits

0xc7e4,	// (0x0003bbe9) grid_large_graphic_colour_popup_pane

0xc808,	// (0x0003bc0d) listscroll_popup_colour_pane_g1_ParamLimits

0xc808,	// (0x0003bc0d) listscroll_popup_colour_pane_g1

0xc81f,	// (0x0003bc24) listscroll_popup_colour_pane_g2_ParamLimits

0xc81f,	// (0x0003bc24) listscroll_popup_colour_pane_g2

0xc836,	// (0x0003bc3b) listscroll_popup_colour_pane_g3_ParamLimits

0xc836,	// (0x0003bc3b) listscroll_popup_colour_pane_g3

0xc846,	// (0x0003bc4b) listscroll_popup_colour_pane_g4_ParamLimits

0xc846,	// (0x0003bc4b) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003e9b9) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003e9b9) listscroll_popup_colour_pane_g

0x3140,	// (0x00032545) scroll_pane_cp6_ParamLimits

0x3140,	// (0x00032545) scroll_pane_cp6

0xc856,	// (0x0003bc5b) cell_large_graphic_colour_popup_pane_ParamLimits

0xc856,	// (0x0003bc5b) cell_large_graphic_colour_popup_pane

0x3171,	// (0x00032576) cell_large_graphic_colour_none_popup_pane_t1

0x23ab,	// (0x000317b0) grid_highlight_pane_cp5

0x3180,	// (0x00032585) cell_large_graphic_colour_popup_pane_g1

0x3188,	// (0x0003258d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003e9c2) cell_large_graphic_colour_popup_pane_g

0x3190,	// (0x00032595) cell_large_graphic_colour_popup_pane_g2_copy1

0x3199,	// (0x0003259e) grid_highlight_pane_cp4

0x31a1,	// (0x000325a6) bg_popup_window_pane_cp8_ParamLimits

0x31a1,	// (0x000325a6) bg_popup_window_pane_cp8

0x31bc,	// (0x000325c1) popup_snote_single_text_window_g1_ParamLimits

0x31bc,	// (0x000325c1) popup_snote_single_text_window_g1

0x31ce,	// (0x000325d3) popup_snote_single_text_window_t1_ParamLimits

0x31ce,	// (0x000325d3) popup_snote_single_text_window_t1

0x31e1,	// (0x000325e6) popup_snote_single_text_window_t2_ParamLimits

0x31e1,	// (0x000325e6) popup_snote_single_text_window_t2

0x31f4,	// (0x000325f9) popup_snote_single_text_window_t3_ParamLimits

0x31f4,	// (0x000325f9) popup_snote_single_text_window_t3

0x322d,	// (0x00032632) popup_snote_single_text_window_t4_ParamLimits

0x322d,	// (0x00032632) popup_snote_single_text_window_t4

0x3261,	// (0x00032666) popup_snote_single_text_window_t5_ParamLimits

0x3261,	// (0x00032666) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003e9c7) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003e9c7) popup_snote_single_text_window_t

0x3290,	// (0x00032695) bg_popup_window_pane_cp9_ParamLimits

0x3290,	// (0x00032695) bg_popup_window_pane_cp9

0x31bc,	// (0x000325c1) popup_snote_single_graphic_window_g1_ParamLimits

0x31bc,	// (0x000325c1) popup_snote_single_graphic_window_g1

0x329e,	// (0x000326a3) popup_snote_single_graphic_window_g2_ParamLimits

0x329e,	// (0x000326a3) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003e9d2) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003e9d2) popup_snote_single_graphic_window_g

0x32aa,	// (0x000326af) popup_snote_single_graphic_window_t1_ParamLimits

0x32aa,	// (0x000326af) popup_snote_single_graphic_window_t1

0x32bd,	// (0x000326c2) popup_snote_single_graphic_window_t2_ParamLimits

0x32bd,	// (0x000326c2) popup_snote_single_graphic_window_t2

0x32d0,	// (0x000326d5) popup_snote_single_graphic_window_t3_ParamLimits

0x32d0,	// (0x000326d5) popup_snote_single_graphic_window_t3

0x3309,	// (0x0003270e) popup_snote_single_graphic_window_t4_ParamLimits

0x3309,	// (0x0003270e) popup_snote_single_graphic_window_t4

0x333d,	// (0x00032742) popup_snote_single_graphic_window_t5_ParamLimits

0x333d,	// (0x00032742) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003e9d7) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003e9d7) popup_snote_single_graphic_window_t

0x6602,	// (0x00035a07) grid_graphic_popup_pane_ParamLimits

0x6602,	// (0x00035a07) grid_graphic_popup_pane

0x662a,	// (0x00035a2f) listscroll_popup_graphic_pane_g1_ParamLimits

0x662a,	// (0x00035a2f) listscroll_popup_graphic_pane_g1

0xdb21,	// (0x0003cf26) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb21,	// (0x0003cf26) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0003edc1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0003edc1) listscroll_popup_graphic_pane_g

0x6652,	// (0x00035a57) scroll_pane_cp5

0xdae5,	// (0x0003ceea) cell_graphic_popup_pane_ParamLimits

0xdae5,	// (0x0003ceea) cell_graphic_popup_pane

0x658c,	// (0x00035991) cell_graphic_popup_pane_g1

0x6594,	// (0x00035999) cell_graphic_popup_pane_g2

0x3190,	// (0x00032595) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0003edba) cell_graphic_popup_pane_g

0x659d,	// (0x000359a2) cell_graphic_popup_pane_t2

0x3199,	// (0x0003259e) grid_highlight_pane_cp3

0x337e,	// (0x00032783) list_gen_pane_ParamLimits

0x337e,	// (0x00032783) list_gen_pane

0x33b0,	// (0x000327b5) scroll_pane

0xdaa0,	// (0x0003cea5) bg_list_pane_g1_ParamLimits

0xdaa0,	// (0x0003cea5) bg_list_pane_g1

0x6509,	// (0x0003590e) bg_list_pane_g2_ParamLimits

0x6509,	// (0x0003590e) bg_list_pane_g2

0x651c,	// (0x00035921) bg_list_pane_g3_ParamLimits

0x651c,	// (0x00035921) bg_list_pane_g3

0x652e,	// (0x00035933) bg_list_pane_g4_ParamLimits

0x652e,	// (0x00035933) bg_list_pane_g4

0xdabb,	// (0x0003cec0) bg_list_pane_g5_ParamLimits

0xdabb,	// (0x0003cec0) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0003edaf) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0003edaf) bg_list_pane_g

0xda57,	// (0x0003ce5c) list_double2_graphic_large_graphic_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double2_graphic_large_graphic_pane

0xda57,	// (0x0003ce5c) list_double2_graphic_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double2_graphic_pane

0xda57,	// (0x0003ce5c) list_double2_large_graphic_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double2_large_graphic_pane

0xda57,	// (0x0003ce5c) list_double2_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double2_pane

0xda57,	// (0x0003ce5c) list_double_graphic_heading_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_graphic_heading_pane

0xda57,	// (0x0003ce5c) list_double_graphic_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_graphic_pane

0xda57,	// (0x0003ce5c) list_double_heading_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_heading_pane

0xda57,	// (0x0003ce5c) list_double_large_graphic_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_large_graphic_pane

0xda57,	// (0x0003ce5c) list_double_number_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_number_pane

0xda57,	// (0x0003ce5c) list_double_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_pane

0xda57,	// (0x0003ce5c) list_double_time_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_double_time_pane

0xda57,	// (0x0003ce5c) list_setting_number_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_setting_number_pane

0xda57,	// (0x0003ce5c) list_setting_pane_ParamLimits

0xda57,	// (0x0003ce5c) list_setting_pane

0xda69,	// (0x0003ce6e) list_single_2graphic_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_2graphic_pane

0xda69,	// (0x0003ce6e) list_single_graphic_heading_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_graphic_heading_pane

0xda69,	// (0x0003ce6e) list_single_graphic_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_graphic_pane

0xda69,	// (0x0003ce6e) list_single_heading_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_heading_pane

0xda69,	// (0x0003ce6e) list_single_large_graphic_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_large_graphic_pane

0xda69,	// (0x0003ce6e) list_single_number_heading_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_number_heading_pane

0xda69,	// (0x0003ce6e) list_single_number_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_number_pane

0xda69,	// (0x0003ce6e) list_single_pane_ParamLimits

0xda69,	// (0x0003ce6e) list_single_pane

0x23ab,	// (0x000317b0) list_highlight_pane_cp1

0x1258,	// (0x0003065d) list_single_pane_g1_ParamLimits

0x1258,	// (0x0003065d) list_single_pane_g1

0x1264,	// (0x00030669) list_single_pane_g2_ParamLimits

0x1264,	// (0x00030669) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_single_pane_g

0x277b,	// (0x00031b80) list_single_pane_t1_ParamLimits

0x277b,	// (0x00031b80) list_single_pane_t1

0x1258,	// (0x0003065d) list_single_number_pane_g1_ParamLimits

0x1258,	// (0x0003065d) list_single_number_pane_g1

0x1264,	// (0x00030669) list_single_number_pane_g2_ParamLimits

0x1264,	// (0x00030669) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_single_number_pane_g

0x11ed,	// (0x000305f2) list_single_number_pane_t1_ParamLimits

0x11ed,	// (0x000305f2) list_single_number_pane_t1

0xbe11,	// (0x0003b216) list_single_number_pane_t2_ParamLimits

0xbe11,	// (0x0003b216) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0003ed70) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0003ed70) list_single_number_pane_t

0x2b58,	// (0x00031f5d) list_single_graphic_pane_g1_ParamLimits

0x2b58,	// (0x00031f5d) list_single_graphic_pane_g1

0x1258,	// (0x0003065d) list_single_graphic_pane_g2_ParamLimits

0x1258,	// (0x0003065d) list_single_graphic_pane_g2

0x1264,	// (0x00030669) list_single_graphic_pane_g3_ParamLimits

0x1264,	// (0x00030669) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003e9e2) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003e9e2) list_single_graphic_pane_g

0xb4f5,	// (0x0003a8fa) list_single_graphic_pane_t1_ParamLimits

0xb4f5,	// (0x0003a8fa) list_single_graphic_pane_t1

0x1258,	// (0x0003065d) list_single_heading_pane_g1_ParamLimits

0x1258,	// (0x0003065d) list_single_heading_pane_g1

0x1264,	// (0x00030669) list_single_heading_pane_g2_ParamLimits

0x1264,	// (0x00030669) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_single_heading_pane_g

0x279d,	// (0x00031ba2) list_single_heading_pane_t1_ParamLimits

0x279d,	// (0x00031ba2) list_single_heading_pane_t1

0xb50b,	// (0x0003a910) list_single_heading_pane_t2_ParamLimits

0xb50b,	// (0x0003a910) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003e9ee) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003e9ee) list_single_heading_pane_t

0x1258,	// (0x0003065d) list_single_number_heading_pane_g1_ParamLimits

0x1258,	// (0x0003065d) list_single_number_heading_pane_g1

0x1264,	// (0x00030669) list_single_number_heading_pane_g2_ParamLimits

0x1264,	// (0x00030669) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_single_number_heading_pane_g

0x279d,	// (0x00031ba2) list_single_number_heading_pane_t1_ParamLimits

0x279d,	// (0x00031ba2) list_single_number_heading_pane_t1

0xb51d,	// (0x0003a922) list_single_number_heading_pane_t2_ParamLimits

0xb51d,	// (0x0003a922) list_single_number_heading_pane_t2

0x2755,	// (0x00031b5a) list_single_number_heading_pane_t3_ParamLimits

0x2755,	// (0x00031b5a) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0003e9f3) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0003e9f3) list_single_number_heading_pane_t

0x11c9,	// (0x000305ce) list_single_graphic_heading_pane_g1_ParamLimits

0x11c9,	// (0x000305ce) list_single_graphic_heading_pane_g1

0xb52f,	// (0x0003a934) list_single_graphic_heading_pane_g4_ParamLimits

0xb52f,	// (0x0003a934) list_single_graphic_heading_pane_g4

0x1264,	// (0x00030669) list_single_graphic_heading_pane_g5_ParamLimits

0x1264,	// (0x00030669) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0003e9fa) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0003e9fa) list_single_graphic_heading_pane_g

0x279d,	// (0x00031ba2) list_single_graphic_heading_pane_t1_ParamLimits

0x279d,	// (0x00031ba2) list_single_graphic_heading_pane_t1

0xb540,	// (0x0003a945) list_single_graphic_heading_pane_t2_ParamLimits

0xb540,	// (0x0003a945) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0003ea01) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0003ea01) list_single_graphic_heading_pane_t

0x2791,	// (0x00031b96) list_single_large_graphic_pane_g1_ParamLimits

0x2791,	// (0x00031b96) list_single_large_graphic_pane_g1

0x1258,	// (0x0003065d) list_single_large_graphic_pane_g2_ParamLimits

0x1258,	// (0x0003065d) list_single_large_graphic_pane_g2

0x1264,	// (0x00030669) list_single_large_graphic_pane_g3_ParamLimits

0x1264,	// (0x00030669) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0003ea06) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003ea06) list_single_large_graphic_pane_g

0x54f8,	// (0x000348fd) wait_border_pane_g2_copy1

0xb552,	// (0x0003a957) list_single_large_graphic_pane_g4_cp2

0x279d,	// (0x00031ba2) list_single_large_graphic_pane_t1_ParamLimits

0x279d,	// (0x00031ba2) list_single_large_graphic_pane_t1

0x298a,	// (0x00031d8f) list_double_pane_g1_ParamLimits

0x298a,	// (0x00031d8f) list_double_pane_g1

0xb55a,	// (0x0003a95f) list_double_pane_g2_ParamLimits

0xb55a,	// (0x0003a95f) list_double_pane_g2

0x0001,

0xf608,	// (0x0003ea0d) list_double_pane_g_ParamLimits

0xf608,	// (0x0003ea0d) list_double_pane_g

0xb566,	// (0x0003a96b) list_double_pane_t1_ParamLimits

0xb566,	// (0x0003a96b) list_double_pane_t1

0xb57c,	// (0x0003a981) list_double_pane_t2_ParamLimits

0xb57c,	// (0x0003a981) list_double_pane_t2

0x0001,

0xf60d,	// (0x0003ea12) list_double_pane_t_ParamLimits

0xf60d,	// (0x0003ea12) list_double_pane_t

0xb58e,	// (0x0003a993) list_double2_pane_g1_ParamLimits

0xb58e,	// (0x0003a993) list_double2_pane_g1

0x072b,	// (0x0002fb30) list_double2_pane_g2_ParamLimits

0x072b,	// (0x0002fb30) list_double2_pane_g2

0x0001,

0xf612,	// (0x0003ea17) list_double2_pane_g_ParamLimits

0xf612,	// (0x0003ea17) list_double2_pane_g

0xb59f,	// (0x0003a9a4) list_double2_pane_t1_ParamLimits

0xb59f,	// (0x0003a9a4) list_double2_pane_t1

0xb5b5,	// (0x0003a9ba) list_double2_pane_t2_ParamLimits

0xb5b5,	// (0x0003a9ba) list_double2_pane_t2

0x0001,

0xf617,	// (0x0003ea1c) list_double2_pane_t_ParamLimits

0xf617,	// (0x0003ea1c) list_double2_pane_t

0x298a,	// (0x00031d8f) list_double_number_pane_g1_ParamLimits

0x298a,	// (0x00031d8f) list_double_number_pane_g1

0xb55a,	// (0x0003a95f) list_double_number_pane_g2_ParamLimits

0xb55a,	// (0x0003a95f) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0003ea0d) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0003ea0d) list_double_number_pane_g

0xb5c7,	// (0x0003a9cc) list_double_number_pane_t1_ParamLimits

0xb5c7,	// (0x0003a9cc) list_double_number_pane_t1

0xb5d9,	// (0x0003a9de) list_double_number_pane_t2_ParamLimits

0xb5d9,	// (0x0003a9de) list_double_number_pane_t2

0xb5ef,	// (0x0003a9f4) list_double_number_pane_t3_ParamLimits

0xb5ef,	// (0x0003a9f4) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0003ea21) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0003ea21) list_double_number_pane_t

0xb601,	// (0x0003aa06) list_double_graphic_pane_g1_ParamLimits

0xb601,	// (0x0003aa06) list_double_graphic_pane_g1

0xb60d,	// (0x0003aa12) list_double_graphic_pane_g2_ParamLimits

0xb60d,	// (0x0003aa12) list_double_graphic_pane_g2

0xb61c,	// (0x0003aa21) list_double_graphic_pane_g3_ParamLimits

0xb61c,	// (0x0003aa21) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0003ea28) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0003ea28) list_double_graphic_pane_g

0xb634,	// (0x0003aa39) list_double_graphic_pane_t1_ParamLimits

0xb634,	// (0x0003aa39) list_double_graphic_pane_t1

0xb64a,	// (0x0003aa4f) list_double_graphic_pane_t2_ParamLimits

0xb64a,	// (0x0003aa4f) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003ea31) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003ea31) list_double_graphic_pane_t

0xb65c,	// (0x0003aa61) list_double2_graphic_pane_g1_ParamLimits

0xb65c,	// (0x0003aa61) list_double2_graphic_pane_g1

0xb668,	// (0x0003aa6d) list_double2_graphic_pane_g2_ParamLimits

0xb668,	// (0x0003aa6d) list_double2_graphic_pane_g2

0x072b,	// (0x0002fb30) list_double2_graphic_pane_g3_ParamLimits

0x072b,	// (0x0002fb30) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0003ea36) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0003ea36) list_double2_graphic_pane_g

0xb674,	// (0x0003aa79) list_double2_graphic_pane_t1_ParamLimits

0xb674,	// (0x0003aa79) list_double2_graphic_pane_t1

0xb68a,	// (0x0003aa8f) list_double2_graphic_pane_t2_ParamLimits

0xb68a,	// (0x0003aa8f) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0003ea3d) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0003ea3d) list_double2_graphic_pane_t

0xb69c,	// (0x0003aaa1) list_double_large_graphic_pane_g1_ParamLimits

0xb69c,	// (0x0003aaa1) list_double_large_graphic_pane_g1

0xb6c7,	// (0x0003aacc) list_double_large_graphic_pane_g2_ParamLimits

0xb6c7,	// (0x0003aacc) list_double_large_graphic_pane_g2

0xb55a,	// (0x0003a95f) list_double_large_graphic_pane_g3_ParamLimits

0xb55a,	// (0x0003a95f) list_double_large_graphic_pane_g3

0xb6d8,	// (0x0003aadd) list_double_large_graphic_pane_g4_ParamLimits

0xb6d8,	// (0x0003aadd) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0003ea42) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0003ea42) list_double_large_graphic_pane_g

0xb6ea,	// (0x0003aaef) list_double_large_graphic_pane_t1_ParamLimits

0xb6ea,	// (0x0003aaef) list_double_large_graphic_pane_t1

0xb703,	// (0x0003ab08) list_double_large_graphic_pane_t2_ParamLimits

0xb703,	// (0x0003ab08) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0003ea4d) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0003ea4d) list_double_large_graphic_pane_t

0xb715,	// (0x0003ab1a) list_double2_large_graphic_pane_g1_ParamLimits

0xb715,	// (0x0003ab1a) list_double2_large_graphic_pane_g1

0xb58e,	// (0x0003a993) list_double2_large_graphic_pane_g2_ParamLimits

0xb58e,	// (0x0003a993) list_double2_large_graphic_pane_g2

0x072b,	// (0x0002fb30) list_double2_large_graphic_pane_g3_ParamLimits

0x072b,	// (0x0002fb30) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0003ea52) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0003ea52) list_double2_large_graphic_pane_g

0xb721,	// (0x0003ab26) list_double2_large_graphic_pane_t1_ParamLimits

0xb721,	// (0x0003ab26) list_double2_large_graphic_pane_t1

0xb737,	// (0x0003ab3c) list_double2_large_graphic_pane_t2_ParamLimits

0xb737,	// (0x0003ab3c) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0003ea59) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0003ea59) list_double2_large_graphic_pane_t

0xb749,	// (0x0003ab4e) list_double_heading_pane_g1_ParamLimits

0xb749,	// (0x0003ab4e) list_double_heading_pane_g1

0x0536,	// (0x0002f93b) list_double_heading_pane_g2_ParamLimits

0x0536,	// (0x0002f93b) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0003ea5e) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0003ea5e) list_double_heading_pane_g

0xb75a,	// (0x0003ab5f) list_double_heading_pane_t1_ParamLimits

0xb75a,	// (0x0003ab5f) list_double_heading_pane_t1

0xb5b5,	// (0x0003a9ba) list_double_heading_pane_t2_ParamLimits

0xb5b5,	// (0x0003a9ba) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0003ea63) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0003ea63) list_double_heading_pane_t

0xb601,	// (0x0003aa06) list_double_graphic_heading_pane_g1_ParamLimits

0xb601,	// (0x0003aa06) list_double_graphic_heading_pane_g1

0xb749,	// (0x0003ab4e) list_double_graphic_heading_pane_g2_ParamLimits

0xb749,	// (0x0003ab4e) list_double_graphic_heading_pane_g2

0x0536,	// (0x0002f93b) list_double_graphic_heading_pane_g3_ParamLimits

0x0536,	// (0x0002f93b) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0003ea68) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0003ea68) list_double_graphic_heading_pane_g

0xb770,	// (0x0003ab75) list_double_graphic_heading_pane_t1_ParamLimits

0xb770,	// (0x0003ab75) list_double_graphic_heading_pane_t1

0xb68a,	// (0x0003aa8f) list_double_graphic_heading_pane_t2_ParamLimits

0xb68a,	// (0x0003aa8f) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0003ea6f) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0003ea6f) list_double_graphic_heading_pane_t

0xb6c7,	// (0x0003aacc) list_double_time_pane_g1_ParamLimits

0xb6c7,	// (0x0003aacc) list_double_time_pane_g1

0xb55a,	// (0x0003a95f) list_double_time_pane_g2_ParamLimits

0xb55a,	// (0x0003a95f) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0003ea74) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0003ea74) list_double_time_pane_g

0xb786,	// (0x0003ab8b) list_double_time_pane_t1_ParamLimits

0xb786,	// (0x0003ab8b) list_double_time_pane_t1

0xb79c,	// (0x0003aba1) list_double_time_pane_t2_ParamLimits

0xb79c,	// (0x0003aba1) list_double_time_pane_t2

0xb7ae,	// (0x0003abb3) list_double_time_pane_t3_ParamLimits

0xb7ae,	// (0x0003abb3) list_double_time_pane_t3

0xb7c0,	// (0x0003abc5) list_double_time_pane_t4_ParamLimits

0xb7c0,	// (0x0003abc5) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0003ea79) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0003ea79) list_double_time_pane_t

0xb7d2,	// (0x0003abd7) list_setting_pane_g1_ParamLimits

0xb7d2,	// (0x0003abd7) list_setting_pane_g1

0xb7de,	// (0x0003abe3) list_setting_pane_g2_ParamLimits

0xb7de,	// (0x0003abe3) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0003ea82) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0003ea82) list_setting_pane_g

0xb7ea,	// (0x0003abef) list_setting_pane_t1_ParamLimits

0xb7ea,	// (0x0003abef) list_setting_pane_t1

0xb804,	// (0x0003ac09) list_setting_pane_t2_ParamLimits

0xb804,	// (0x0003ac09) list_setting_pane_t2

0x0002,

0xf682,	// (0x0003ea87) list_setting_pane_t_ParamLimits

0xf682,	// (0x0003ea87) list_setting_pane_t

0xb843,	// (0x0003ac48) set_value_pane_cp_ParamLimits

0xb843,	// (0x0003ac48) set_value_pane_cp

0xb84f,	// (0x0003ac54) list_setting_number_pane_g1_ParamLimits

0xb84f,	// (0x0003ac54) list_setting_number_pane_g1

0xb85b,	// (0x0003ac60) list_setting_number_pane_g2_ParamLimits

0xb85b,	// (0x0003ac60) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0003ea8e) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0003ea8e) list_setting_number_pane_g

0xb867,	// (0x0003ac6c) list_setting_number_pane_t1_ParamLimits

0xb867,	// (0x0003ac6c) list_setting_number_pane_t1

0xb880,	// (0x0003ac85) list_setting_number_pane_t2_ParamLimits

0xb880,	// (0x0003ac85) list_setting_number_pane_t2

0xb89a,	// (0x0003ac9f) list_setting_number_pane_t3_ParamLimits

0xb89a,	// (0x0003ac9f) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0003ea93) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0003ea93) list_setting_number_pane_t

0xb843,	// (0x0003ac48) set_value_pane_ParamLimits

0xb843,	// (0x0003ac48) set_value_pane

0x33e4,	// (0x000327e9) bg_set_opt_pane_ParamLimits

0x33e4,	// (0x000327e9) bg_set_opt_pane

0x08b4,	// (0x0002fcb9) set_value_pane_t1

0x3405,	// (0x0003280a) slider_set_pane_cp3

0x340e,	// (0x00032813) volume_small_pane_cp

0x3417,	// (0x0003281c) list_form_gen_pane

0x3420,	// (0x00032825) scroll_pane_cp8

0xb8dd,	// (0x0003ace2) form_field_data_pane_ParamLimits

0xb8dd,	// (0x0003ace2) form_field_data_pane

0xb8f4,	// (0x0003acf9) form_field_data_wide_pane_ParamLimits

0xb8f4,	// (0x0003acf9) form_field_data_wide_pane

0xb914,	// (0x0003ad19) form_field_popup_pane_ParamLimits

0xb914,	// (0x0003ad19) form_field_popup_pane

0xb92c,	// (0x0003ad31) form_field_popup_wide_pane_ParamLimits

0xb92c,	// (0x0003ad31) form_field_popup_wide_pane

0x0948,	// (0x0002fd4d) form_field_slider_pane_ParamLimits

0x0948,	// (0x0002fd4d) form_field_slider_pane

0x095b,	// (0x0002fd60) form_field_slider_wide_pane_ParamLimits

0x095b,	// (0x0002fd60) form_field_slider_wide_pane

0x3431,	// (0x00032836) data_form_pane

0xb94d,	// (0x0003ad52) form_field_data_pane_t1

0x343d,	// (0x00032842) input_focus_pane

0x344b,	// (0x00032850) data_form_wide_pane

0x099c,	// (0x0002fda1) form_field_data_wide_pane_t1

0x31ae,	// (0x000325b3) input_focus_pane_cp6

0xb967,	// (0x0003ad6c) form_field_popup_pane_t1

0x343d,	// (0x00032842) input_focus_pane_cp7

0x3477,	// (0x0003287c) list_form_pane

0x09de,	// (0x0002fde3) form_field_popup_wide_pane_t1

0x343d,	// (0x00032842) input_focus_pane_cp8

0x3483,	// (0x00032888) list_form_wide_pane

0xb989,	// (0x0003ad8e) form_field_slider_pane_t1_ParamLimits

0xb989,	// (0x0003ad8e) form_field_slider_pane_t1

0xb9a1,	// (0x0003ada6) form_field_slider_pane_t2_ParamLimits

0xb9a1,	// (0x0003ada6) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0003eaa3) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0003eaa3) form_field_slider_pane_t

0x2e4c,	// (0x00032251) input_focus_pane_cp9_ParamLimits

0x2e4c,	// (0x00032251) input_focus_pane_cp9

0xb9b6,	// (0x0003adbb) slider_cont_pane_ParamLimits

0xb9b6,	// (0x0003adbb) slider_cont_pane

0x3492,	// (0x00032897) form_field_slider_wide_pane_t1_ParamLimits

0x3492,	// (0x00032897) form_field_slider_wide_pane_t1

0x0a3a,	// (0x0002fe3f) form_field_slider_wide_pane_t2_ParamLimits

0x0a3a,	// (0x0002fe3f) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0003eaa8) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0003eaa8) form_field_slider_wide_pane_t

0x2e4c,	// (0x00032251) input_focus_pane_cp10_ParamLimits

0x2e4c,	// (0x00032251) input_focus_pane_cp10

0xb9ca,	// (0x0003adcf) slider_cont_pane_cp1_ParamLimits

0xb9ca,	// (0x0003adcf) slider_cont_pane_cp1

0xb9de,	// (0x0003ade3) slider_form_pane_cp

0x34a4,	// (0x000328a9) input_focus_pane_g1

0x34ac,	// (0x000328b1) input_focus_pane_g2

0x34b4,	// (0x000328b9) input_focus_pane_g3

0x34bc,	// (0x000328c1) input_focus_pane_g4

0x34c4,	// (0x000328c9) input_focus_pane_g5

0x34cc,	// (0x000328d1) input_focus_pane_g6

0x34d4,	// (0x000328d9) input_focus_pane_g7

0x34dc,	// (0x000328e1) input_focus_pane_g8

0x34e4,	// (0x000328e9) input_focus_pane_g9

0x23a1,	// (0x000317a6) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0003eaad) input_focus_pane_g

0x5501,	// (0x00034906) wait_border_pane_g3_copy1

0xb9e6,	// (0x0003adeb) data_form_pane_t1

0x23a1,	// (0x000317a6) wait_anim_pane_g1_copy1

0xbe23,	// (0x0003b228) data_form_wide_pane_t1

0xc87f,	// (0x0003bc84) list_form_graphic_pane_cp_ParamLimits

0xc87f,	// (0x0003bc84) list_form_graphic_pane_cp

0x6449,	// (0x0003584e) slider_form_pane_g1

0x6452,	// (0x00035857) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0003eda0) slider_form_pane_g

0xc87f,	// (0x0003bc84) list_form_graphic_pane_ParamLimits

0xc87f,	// (0x0003bc84) list_form_graphic_pane

0x0ab8,	// (0x0002febd) list_form_graphic_pane_g1

0x0ac0,	// (0x0002fec5) list_form_graphic_pane_t1_ParamLimits

0x0ac0,	// (0x0002fec5) list_form_graphic_pane_t1

0x248b,	// (0x00031890) list_highlight_pane_cp5_ParamLimits

0x248b,	// (0x00031890) list_highlight_pane_cp5

0xba00,	// (0x0003ae05) find_pane_g1

0x34ec,	// (0x000328f1) input_find_pane

0xba09,	// (0x0003ae0e) input_find_pane_g1_ParamLimits

0xba09,	// (0x0003ae0e) input_find_pane_g1

0xba15,	// (0x0003ae1a) input_find_pane_t1_ParamLimits

0xba15,	// (0x0003ae1a) input_find_pane_t1

0xba2a,	// (0x0003ae2f) input_find_pane_t2_ParamLimits

0xba2a,	// (0x0003ae2f) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0003eac2) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0003eac2) input_find_pane_t

0x34f5,	// (0x000328fa) input_focus_pane_cp5_ParamLimits

0x34f5,	// (0x000328fa) input_focus_pane_cp5

0xc89d,	// (0x0003bca2) bg_popup_window_pane_cp2_ParamLimits

0xc89d,	// (0x0003bca2) bg_popup_window_pane_cp2

0xc8aa,	// (0x0003bcaf) listscroll_menu_pane_ParamLimits

0xc8aa,	// (0x0003bcaf) listscroll_menu_pane

0xc8b6,	// (0x0003bcbb) popup_submenu_window_ParamLimits

0xc8b6,	// (0x0003bcbb) popup_submenu_window

0x3552,	// (0x00032957) find_popup_pane_g1

0x355a,	// (0x0003295f) input_popup_find_pane_cp

0x34f5,	// (0x000328fa) input_focus_pane_cp4_ParamLimits

0x34f5,	// (0x000328fa) input_focus_pane_cp4

0x3570,	// (0x00032975) input_popup_find_pane_t1_ParamLimits

0x3570,	// (0x00032975) input_popup_find_pane_t1

0x23ab,	// (0x000317b0) bg_popup_sub_pane_cp

0x359e,	// (0x000329a3) listscroll_popup_sub_pane

0x35a6,	// (0x000329ab) list_submenu_pane_ParamLimits

0x35a6,	// (0x000329ab) list_submenu_pane

0x35b7,	// (0x000329bc) scroll_pane_cp4

0x35bf,	// (0x000329c4) list_single_popup_submenu_pane_ParamLimits

0x35bf,	// (0x000329c4) list_single_popup_submenu_pane

0x35d3,	// (0x000329d8) list_single_popup_submenu_pane_g1

0x35db,	// (0x000329e0) list_single_popup_submenu_pane_t1_ParamLimits

0x35db,	// (0x000329e0) list_single_popup_submenu_pane_t1

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp1_ParamLimits

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp1

0xc8ee,	// (0x0003bcf3) tabs_2_active_pane_g1

0xc8f6,	// (0x0003bcfb) tabs_2_active_pane_t1

0x2e4c,	// (0x00032251) bg_passive_tab_pane_cp1_ParamLimits

0x2e4c,	// (0x00032251) bg_passive_tab_pane_cp1

0xc8ee,	// (0x0003bcf3) tabs_2_passive_pane_g1

0xc8f6,	// (0x0003bcfb) tabs_2_passive_pane_t1

0x248b,	// (0x00031890) bg_active_tab_pane_cp4

0xc908,	// (0x0003bd0d) tabs_2_long_active_pane_t1

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp4

0x1230,	// (0x00030635) list_single_midp_graphic_pane_g4_ParamLimits

0x248b,	// (0x00031890) bg_active_tab_pane_cp5

0xc91b,	// (0x0003bd20) tabs_3_long_active_pane_t1

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp5

0x1230,	// (0x00030635) list_single_midp_graphic_pane_g4

0x248b,	// (0x00031890) bg_popup_window_pane_cp13_ParamLimits

0x248b,	// (0x00031890) bg_popup_window_pane_cp13

0x3652,	// (0x00032a57) listscroll_popup_fast_pane_ParamLimits

0x3652,	// (0x00032a57) listscroll_popup_fast_pane

0x3661,	// (0x00032a66) grid_popup_fast_pane_ParamLimits

0x3661,	// (0x00032a66) grid_popup_fast_pane

0x3673,	// (0x00032a78) scroll_pane_cp9_ParamLimits

0x3673,	// (0x00032a78) scroll_pane_cp9

0x7d10,	// (0x00037115) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d10,	// (0x00037115) list_single_graphic_hl_pane_t1_cp2

0x3697,	// (0x00032a9c) input_focus_pane_cp20_ParamLimits

0x3697,	// (0x00032a9c) input_focus_pane_cp20

0x36a5,	// (0x00032aaa) query_popup_data_pane_t1_ParamLimits

0x36a5,	// (0x00032aaa) query_popup_data_pane_t1

0x36b8,	// (0x00032abd) query_popup_data_pane_t2_ParamLimits

0x36b8,	// (0x00032abd) query_popup_data_pane_t2

0x36fe,	// (0x00032b03) query_popup_data_pane_t3_ParamLimits

0x36fe,	// (0x00032b03) query_popup_data_pane_t3

0x373f,	// (0x00032b44) query_popup_data_pane_t4_ParamLimits

0x373f,	// (0x00032b44) query_popup_data_pane_t4

0x377b,	// (0x00032b80) query_popup_data_pane_t5_ParamLimits

0x377b,	// (0x00032b80) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0003eac7) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0003eac7) query_popup_data_pane_t

0x34a4,	// (0x000328a9) bg_set_opt_pane_g1

0x34ac,	// (0x000328b1) bg_set_opt_pane_g2

0x34b4,	// (0x000328b9) bg_set_opt_pane_g3

0x34bc,	// (0x000328c1) bg_set_opt_pane_g4

0x34c4,	// (0x000328c9) bg_set_opt_pane_g5

0x34cc,	// (0x000328d1) bg_set_opt_pane_g6

0x34d4,	// (0x000328d9) bg_set_opt_pane_g7

0x34dc,	// (0x000328e1) bg_set_opt_pane_g8

0x34e4,	// (0x000328e9) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0003ead2) bg_set_opt_pane_g

0x0e3d,	// (0x00030242) control_top_pane_stacon_ParamLimits

0x0e3d,	// (0x00030242) control_top_pane_stacon

0x0e90,	// (0x00030295) signal_pane_stacon_ParamLimits

0x0e90,	// (0x00030295) signal_pane_stacon

0x3d19,	// (0x0003311e) stacon_top_pane_g1_ParamLimits

0x3d19,	// (0x0003311e) stacon_top_pane_g1

0x0eb5,	// (0x000302ba) title_pane_stacon_ParamLimits

0x0eb5,	// (0x000302ba) title_pane_stacon

0x0edf,	// (0x000302e4) uni_indicator_pane_stacon_ParamLimits

0x0edf,	// (0x000302e4) uni_indicator_pane_stacon

0x0ef4,	// (0x000302f9) battery_pane_stacon_ParamLimits

0x0ef4,	// (0x000302f9) battery_pane_stacon

0x0f38,	// (0x0003033d) control_bottom_pane_stacon_ParamLimits

0x0f38,	// (0x0003033d) control_bottom_pane_stacon

0x0f5b,	// (0x00030360) navi_pane_stacon_ParamLimits

0x0f5b,	// (0x00030360) navi_pane_stacon

0x3d3b,	// (0x00033140) stacon_bottom_pane_g1_ParamLimits

0x3d3b,	// (0x00033140) stacon_bottom_pane_g1

0x0b14,	// (0x0002ff19) aid_levels_signal_lsc_ParamLimits

0x0b14,	// (0x0002ff19) aid_levels_signal_lsc

0x0b2b,	// (0x0002ff30) signal_pane_stacon_g1_ParamLimits

0x0b2b,	// (0x0002ff30) signal_pane_stacon_g1

0x0b3f,	// (0x0002ff44) signal_pane_stacon_g2_ParamLimits

0x0b3f,	// (0x0002ff44) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0003eae5) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0003eae5) signal_pane_stacon_g

0x0b74,	// (0x0002ff79) title_pane_stacon_t1_ParamLimits

0x0b74,	// (0x0002ff79) title_pane_stacon_t1

0x37bf,	// (0x00032bc4) uni_indicator_pane_stacon_g1

0x37c9,	// (0x00032bce) uni_indicator_pane_stacon_g2

0x37d3,	// (0x00032bd8) uni_indicator_pane_stacon_g3

0x37dd,	// (0x00032be2) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0003eaf1) uni_indicator_pane_stacon_g

0x0b99,	// (0x0002ff9e) control_top_pane_stacon_g1

0x0ba1,	// (0x0002ffa6) control_top_pane_stacon_t1_ParamLimits

0x0ba1,	// (0x0002ffa6) control_top_pane_stacon_t1

0x0bd8,	// (0x0002ffdd) aid_levels_battery_lsc_ParamLimits

0x0bd8,	// (0x0002ffdd) aid_levels_battery_lsc

0x0bf0,	// (0x0002fff5) battery_pane_stacon_g1_ParamLimits

0x0bf0,	// (0x0002fff5) battery_pane_stacon_g1

0x0c03,	// (0x00030008) battery_pane_stacon_g2_ParamLimits

0x0c03,	// (0x00030008) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0003eafa) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0003eafa) battery_pane_stacon_g

0x0c41,	// (0x00030046) navi_icon_pane_stacon

0x0c55,	// (0x0003005a) navi_navi_pane_stacon

0x0c41,	// (0x00030046) navi_text_pane_stacon

0x0b99,	// (0x0002ff9e) control_bottom_pane_stacon_g1

0x0c69,	// (0x0003006e) control_bottom_pane_stacon_t1_ParamLimits

0x0c69,	// (0x0003006e) control_bottom_pane_stacon_t1

0xc92d,	// (0x0003bd32) grid_app_pane_ParamLimits

0xc92d,	// (0x0003bd32) grid_app_pane

0xc965,	// (0x0003bd6a) scroll_pane_cp15_ParamLimits

0xc965,	// (0x0003bd6a) scroll_pane_cp15

0xc97e,	// (0x0003bd83) cell_app_pane_ParamLimits

0xc97e,	// (0x0003bd83) cell_app_pane

0xc9c3,	// (0x0003bdc8) cell_app_pane_g1_ParamLimits

0xc9c3,	// (0x0003bdc8) cell_app_pane_g1

0x3882,	// (0x00032c87) cell_app_pane_g2_ParamLimits

0x3882,	// (0x00032c87) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0003eaff) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0003eaff) cell_app_pane_g

0x388e,	// (0x00032c93) cell_app_pane_t1_ParamLimits

0x388e,	// (0x00032c93) cell_app_pane_t1

0x38a5,	// (0x00032caa) grid_highlight_pane_ParamLimits

0x38a5,	// (0x00032caa) grid_highlight_pane

0x34a4,	// (0x000328a9) cell_highlight_pane_g1

0x34ac,	// (0x000328b1) cell_highlight_pane_g2

0x34b4,	// (0x000328b9) cell_highlight_pane_g3

0x34bc,	// (0x000328c1) cell_highlight_pane_g4

0x34c4,	// (0x000328c9) cell_highlight_pane_g5

0x34cc,	// (0x000328d1) cell_highlight_pane_g6

0x34d4,	// (0x000328d9) cell_highlight_pane_g7

0x34dc,	// (0x000328e1) cell_highlight_pane_g8

0x34e4,	// (0x000328e9) cell_highlight_pane_g9

0x23a1,	// (0x000317a6) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0003eaad) cell_highlight_pane_g

0x38b6,	// (0x00032cbb) bg_scroll_pane

0x0cb3,	// (0x000300b8) scroll_handle_pane

0x38fd,	// (0x00032d02) scroll_bg_pane_g1

0x3912,	// (0x00032d17) scroll_bg_pane_g2

0x392a,	// (0x00032d2f) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0003eb04) scroll_bg_pane_g

0x393f,	// (0x00032d44) scroll_handle_focus_pane_ParamLimits

0x393f,	// (0x00032d44) scroll_handle_focus_pane

0x38fd,	// (0x00032d02) scroll_handle_pane_g1

0x394c,	// (0x00032d51) scroll_handle_pane_g2

0x392a,	// (0x00032d2f) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0003eb0b) scroll_handle_pane_g

0x34f5,	// (0x000328fa) bg_popup_sub_pane_cp21_ParamLimits

0x34f5,	// (0x000328fa) bg_popup_sub_pane_cp21

0x3960,	// (0x00032d65) popup_fep_japan_predictive_window_t1_ParamLimits

0x3960,	// (0x00032d65) popup_fep_japan_predictive_window_t1

0x397a,	// (0x00032d7f) popup_fep_japan_predictive_window_t2_ParamLimits

0x397a,	// (0x00032d7f) popup_fep_japan_predictive_window_t2

0x39ad,	// (0x00032db2) popup_fep_japan_predictive_window_t3_ParamLimits

0x39ad,	// (0x00032db2) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0003eb12) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0003eb12) popup_fep_japan_predictive_window_t

0x23ab,	// (0x000317b0) bg_popup_sub_pane_cp23

0x39e4,	// (0x00032de9) listscroll_japin_cand_pane

0x39ec,	// (0x00032df1) popup_fep_japan_candidate_window_t1

0x39fa,	// (0x00032dff) candidate_pane_ParamLimits

0x39fa,	// (0x00032dff) candidate_pane

0x3a0c,	// (0x00032e11) scroll_pane_cp30

0x3a14,	// (0x00032e19) list_single_popup_jap_candidate_pane_ParamLimits

0x3a14,	// (0x00032e19) list_single_popup_jap_candidate_pane

0x23ab,	// (0x000317b0) list_highlight_pane_cp30

0x3a29,	// (0x00032e2e) list_single_popup_jap_candidate_pane_t1

0x3a38,	// (0x00032e3d) level_1_signal

0x3a45,	// (0x00032e4a) level_2_signal

0x3a52,	// (0x00032e57) level_3_signal

0x3a5f,	// (0x00032e64) level_4_signal

0x3a6c,	// (0x00032e71) level_5_signal

0x3a79,	// (0x00032e7e) level_6_signal

0x3a86,	// (0x00032e8b) level_7_signal

0x3a38,	// (0x00032e3d) level_1_battery

0x3a45,	// (0x00032e4a) level_2_battery

0x3a52,	// (0x00032e57) level_3_battery

0x3a5f,	// (0x00032e64) level_4_battery

0x3a6c,	// (0x00032e71) level_5_battery

0x3a79,	// (0x00032e7e) level_6_battery

0x3a86,	// (0x00032e8b) level_7_battery

0x3aab,	// (0x00032eb0) list_menu_pane_ParamLimits

0x3aab,	// (0x00032eb0) list_menu_pane

0x3abc,	// (0x00032ec1) scroll_pane_cp25_ParamLimits

0x3abc,	// (0x00032ec1) scroll_pane_cp25

0x3ad5,	// (0x00032eda) list_double2_graphic_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double2_graphic_pane_cp2

0x3ad5,	// (0x00032eda) list_double2_large_graphic_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double2_large_graphic_pane_cp2

0x3ad5,	// (0x00032eda) list_double2_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double2_pane_cp2

0x3ad5,	// (0x00032eda) list_double_graphic_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double_graphic_pane_cp2

0x3ad5,	// (0x00032eda) list_double_large_graphic_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double_large_graphic_pane_cp2

0x3ad5,	// (0x00032eda) list_double_number_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double_number_pane_cp2

0x3ad5,	// (0x00032eda) list_double_pane_cp2_ParamLimits

0x3ad5,	// (0x00032eda) list_double_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_2graphic_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_2graphic_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_graphic_heading_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_graphic_heading_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_graphic_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_graphic_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_heading_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_heading_pane_cp2

0x3b12,	// (0x00032f17) list_single_large_graphic_pane_cp2_ParamLimits

0x3b12,	// (0x00032f17) list_single_large_graphic_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_number_heading_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_number_heading_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_number_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_number_pane_cp2

0xc9f6,	// (0x0003bdfb) list_single_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_pane_cp2

0x3b68,	// (0x00032f6d) bg_popup_sub_pane_cp22

0x0d65,	// (0x0003016a) popup_side_volume_key_window_g1

0x0d8f,	// (0x00030194) popup_side_volume_key_window_t1

0x0dab,	// (0x000301b0) volume_small_pane_cp1

0x2e4c,	// (0x00032251) bg_popup_sub_pane_cp24_ParamLimits

0x2e4c,	// (0x00032251) bg_popup_sub_pane_cp24

0x3b7e,	// (0x00032f83) fep_china_uni_candidate_pane_ParamLimits

0x3b7e,	// (0x00032f83) fep_china_uni_candidate_pane

0x3b92,	// (0x00032f97) fep_china_uni_entry_pane

0x3ba2,	// (0x00032fa7) popup_fep_china_uni_window_g1

0x3bbe,	// (0x00032fc3) fep_china_uni_entry_pane_g1

0x3bc6,	// (0x00032fcb) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0003eb3f) fep_china_uni_entry_pane_g

0x3bce,	// (0x00032fd3) fep_entry_item_pane

0x3bd8,	// (0x00032fdd) fep_candidate_item_pane

0x3be0,	// (0x00032fe5) fep_china_uni_candidate_pane_g1

0x3be8,	// (0x00032fed) fep_china_uni_candidate_pane_g2

0x3bf0,	// (0x00032ff5) fep_china_uni_candidate_pane_g3

0x3bf8,	// (0x00032ffd) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0003eb44) fep_china_uni_candidate_pane_g

0x23a1,	// (0x000317a6) fep_entry_item_pane_g1

0x3c00,	// (0x00033005) fep_entry_item_pane_t1_ParamLimits

0x3c00,	// (0x00033005) fep_entry_item_pane_t1

0x3c16,	// (0x0003301b) fep_candidate_item_pane_t1_ParamLimits

0x3c16,	// (0x0003301b) fep_candidate_item_pane_t1

0x3c2b,	// (0x00033030) fep_candidate_item_pane_t2_ParamLimits

0x3c2b,	// (0x00033030) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0003eb4d) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0003eb4d) fep_candidate_item_pane_t

0x248b,	// (0x00031890) list_highlight_pane_cp31_ParamLimits

0x248b,	// (0x00031890) list_highlight_pane_cp31

0x3c3d,	// (0x00033042) level_1_signal_lsc

0x3c46,	// (0x0003304b) level_2_signal_lsc

0x3c4f,	// (0x00033054) level_3_signal_lsc

0x3c58,	// (0x0003305d) level_4_signal_lsc

0x3c61,	// (0x00033066) level_5_signal_lsc

0x3c6a,	// (0x0003306f) level_6_signal_lsc

0x3c73,	// (0x00033078) level_7_signal_lsc

0x3c73,	// (0x00033078) level_1_battery_lsc

0x3c7c,	// (0x00033081) level_2_battery_lsc

0x3c85,	// (0x0003308a) level_3_battery_lsc

0x3c8e,	// (0x00033093) level_4_battery_lsc

0x3c97,	// (0x0003309c) level_5_battery_lsc

0x3ca0,	// (0x000330a5) level_6_battery_lsc

0x3c3d,	// (0x00033042) level_7_battery_lsc

0x3ca9,	// (0x000330ae) scroll_handle_focus_pane_g1

0x3cb2,	// (0x000330b7) scroll_handle_focus_pane_g2

0x3cbb,	// (0x000330c0) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0003eb52) scroll_handle_focus_pane_g

0xba48,	// (0x0003ae4d) list_single_2graphic_pane_g1_ParamLimits

0xba48,	// (0x0003ae4d) list_single_2graphic_pane_g1

0xb52f,	// (0x0003a934) list_single_2graphic_pane_g2_ParamLimits

0xb52f,	// (0x0003a934) list_single_2graphic_pane_g2

0x1264,	// (0x00030669) list_single_2graphic_pane_g3_ParamLimits

0x1264,	// (0x00030669) list_single_2graphic_pane_g3

0xba54,	// (0x0003ae59) list_single_2graphic_pane_g4_ParamLimits

0xba54,	// (0x0003ae59) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0003eb59) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0003eb59) list_single_2graphic_pane_g

0xba65,	// (0x0003ae6a) list_single_2graphic_pane_t1_ParamLimits

0xba65,	// (0x0003ae6a) list_single_2graphic_pane_t1

0xba93,	// (0x0003ae98) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba93,	// (0x0003ae98) list_double2_graphic_large_graphic_pane_g1

0xb58e,	// (0x0003a993) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb58e,	// (0x0003a993) list_double2_graphic_large_graphic_pane_g2

0x072b,	// (0x0002fb30) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x072b,	// (0x0002fb30) list_double2_graphic_large_graphic_pane_g3

0xbaa5,	// (0x0003aeaa) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbaa5,	// (0x0003aeaa) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0003eb62) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0003eb62) list_double2_graphic_large_graphic_pane_g

0xbab1,	// (0x0003aeb6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbab1,	// (0x0003aeb6) list_double2_graphic_large_graphic_pane_t1

0xbac7,	// (0x0003aecc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbac7,	// (0x0003aecc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0003eb6b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0003eb6b) list_double2_graphic_large_graphic_pane_t

0x3e03,	// (0x00033208) popup_fast_swap_window_ParamLimits

0x3e03,	// (0x00033208) popup_fast_swap_window

0x3e1f,	// (0x00033224) popup_side_volume_key_window

0x3e3b,	// (0x00033240) stacon_top_pane

0x3e45,	// (0x0003324a) status_pane_ParamLimits

0x3e45,	// (0x0003324a) status_pane

0x3e3b,	// (0x00033240) status_small_pane

0x23ab,	// (0x000317b0) control_pane

0x23ab,	// (0x000317b0) stacon_bottom_pane

0x3420,	// (0x00032825) scroll_pane_cp121

0x3417,	// (0x0003281c) set_content_pane

0x3cdf,	// (0x000330e4) bg_active_tab_pane_g1_cp1

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp1

0x3ce8,	// (0x000330ed) bg_active_tab_pane_g3_cp1

0x3cdf,	// (0x000330e4) bg_passive_tab_pane_g1_cp1

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp1

0x3ce8,	// (0x000330ed) bg_passive_tab_pane_g3_cp1

0xca56,	// (0x0003be5b) bg_active_tab_pane_g1_cp2

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp2

0xca5f,	// (0x0003be64) bg_active_tab_pane_g3_cp2

0xca56,	// (0x0003be5b) bg_passive_tab_pane_g1_cp2

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp2

0xca5f,	// (0x0003be64) bg_passive_tab_pane_g3_cp2

0xca68,	// (0x0003be6d) bg_active_tab_pane_g1_cp3

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp3

0xca71,	// (0x0003be76) bg_active_tab_pane_g3_cp3

0xca68,	// (0x0003be6d) bg_passive_tab_pane_g1_cp3

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp3

0xca71,	// (0x0003be76) bg_passive_tab_pane_g3_cp3

0xca7a,	// (0x0003be7f) bg_active_tab_pane_g1_cp4

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp4

0xca83,	// (0x0003be88) bg_active_tab_pane_g3_cp4

0xca7a,	// (0x0003be7f) bg_passive_tab_pane_g1_cp4

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp4

0xca83,	// (0x0003be88) bg_passive_tab_pane_g3_cp4

0x3d57,	// (0x0003315c) bg_active_tab_pane_g1_cp5

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp5

0x3d60,	// (0x00033165) bg_active_tab_pane_g3_cp5

0x3d57,	// (0x0003315c) bg_passive_tab_pane_g1_cp5

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp5

0x3d60,	// (0x00033165) bg_passive_tab_pane_g3_cp5

0xc87f,	// (0x0003bc84) list_set_graphic_pane_ParamLimits

0xc87f,	// (0x0003bc84) list_set_graphic_pane

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp4

0xca8c,	// (0x0003be91) list_set_graphic_pane_g1_ParamLimits

0xca8c,	// (0x0003be91) list_set_graphic_pane_g1

0xca98,	// (0x0003be9d) list_set_graphic_pane_g2_ParamLimits

0xca98,	// (0x0003be9d) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0003eb70) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0003eb70) list_set_graphic_pane_g

0x0009,

0xfae5,	// (0x0003eeea) volume_small_pane_cp_g

0x3db6,	// (0x000331bb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3db6,	// (0x000331bb) list_double2_large_graphic_pane_g1_cp2

0x3dc2,	// (0x000331c7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3dc2,	// (0x000331c7) list_double2_large_graphic_pane_g2_cp2

0x3dd3,	// (0x000331d8) list_double2_large_graphic_pane_g3_cp2

0x3ddb,	// (0x000331e0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3ddb,	// (0x000331e0) list_double2_large_graphic_pane_t1_cp2

0x3df1,	// (0x000331f6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3df1,	// (0x000331f6) list_double2_large_graphic_pane_t2_cp2

0x5fe6,	// (0x000353eb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5fe6,	// (0x000353eb) list_double_large_graphic_pane_g1_cp2

0x5ff7,	// (0x000353fc) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5ff7,	// (0x000353fc) list_double_large_graphic_pane_g2_cp2

0x3f61,	// (0x00033366) list_double_large_graphic_pane_g3_cp2

0x6008,	// (0x0003540d) list_double_large_graphic_pane_g4_cp

0x6010,	// (0x00035415) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6010,	// (0x00035415) list_double_large_graphic_pane_t1_cp2

0x6027,	// (0x0003542c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6027,	// (0x0003542c) list_double_large_graphic_pane_t2_cp2

0x3e53,	// (0x00033258) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3e53,	// (0x00033258) list_double2_graphic_pane_g1_cp2

0x3e61,	// (0x00033266) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3e61,	// (0x00033266) list_double2_graphic_pane_g2_cp2

0x3e72,	// (0x00033277) list_double2_graphic_pane_g3_cp2

0x3e7c,	// (0x00033281) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e7c,	// (0x00033281) list_double2_graphic_pane_t1_cp2

0x3e92,	// (0x00033297) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e92,	// (0x00033297) list_double2_graphic_pane_t2_cp2

0x3ea4,	// (0x000332a9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3ea4,	// (0x000332a9) list_single_number_heading_pane_g1_cp2

0x3eb0,	// (0x000332b5) list_single_number_heading_pane_g2_cp2

0x3eb8,	// (0x000332bd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3eb8,	// (0x000332bd) list_single_number_heading_pane_t1_cp2

0x3ece,	// (0x000332d3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3ece,	// (0x000332d3) list_single_number_heading_pane_t2_cp2

0x3ee0,	// (0x000332e5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3ee0,	// (0x000332e5) list_single_number_heading_pane_t3_cp2

0x3ea4,	// (0x000332a9) list_single_heading_pane_g1_cp2_ParamLimits

0x3ea4,	// (0x000332a9) list_single_heading_pane_g1_cp2

0x3eb0,	// (0x000332b5) list_single_heading_pane_g2_cp2

0x3eb8,	// (0x000332bd) list_single_heading_pane_t1_cp2_ParamLimits

0x3eb8,	// (0x000332bd) list_single_heading_pane_t1_cp2

0x5dee,	// (0x000351f3) list_single_heading_pane_t2_cp2_ParamLimits

0x5dee,	// (0x000351f3) list_single_heading_pane_t2_cp2

0x5d30,	// (0x00035135) list_double_graphic_pane_g1_cp2_ParamLimits

0x5d30,	// (0x00035135) list_double_graphic_pane_g1_cp2

0x5d3c,	// (0x00035141) list_double_graphic_pane_g2_cp2_ParamLimits

0x5d3c,	// (0x00035141) list_double_graphic_pane_g2_cp2

0x5d4b,	// (0x00035150) list_double_graphic_pane_g3_cp2

0x5d53,	// (0x00035158) list_double_graphic_pane_t1_cp2_ParamLimits

0x5d53,	// (0x00035158) list_double_graphic_pane_t1_cp2

0x5d69,	// (0x0003516e) list_double_graphic_pane_t2_cp2_ParamLimits

0x5d69,	// (0x0003516e) list_double_graphic_pane_t2_cp2

0x3f55,	// (0x0003335a) list_double_number_pane_g1_cp2_ParamLimits

0x3f55,	// (0x0003335a) list_double_number_pane_g1_cp2

0x3f61,	// (0x00033366) list_double_number_pane_g2_cp2

0x5cf4,	// (0x000350f9) list_double_number_pane_t1_cp2_ParamLimits

0x5cf4,	// (0x000350f9) list_double_number_pane_t1_cp2

0x5d08,	// (0x0003510d) list_double_number_pane_t2_cp2_ParamLimits

0x5d08,	// (0x0003510d) list_double_number_pane_t2_cp2

0x5d1e,	// (0x00035123) list_double_number_pane_t3_cp2_ParamLimits

0x5d1e,	// (0x00035123) list_double_number_pane_t3_cp2

0x5bd1,	// (0x00034fd6) list_single_graphic_pane_g1_cp2_ParamLimits

0x5bd1,	// (0x00034fd6) list_single_graphic_pane_g1_cp2

0x3fb9,	// (0x000333be) list_single_graphic_pane_g2_cp2_ParamLimits

0x3fb9,	// (0x000333be) list_single_graphic_pane_g2_cp2

0x3fc5,	// (0x000333ca) list_single_graphic_pane_g3_cp2

0x5ba7,	// (0x00034fac) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ba7,	// (0x00034fac) list_single_graphic_pane_t1_cp2

0x3fb9,	// (0x000333be) list_single_number_pane_g1_cp2_ParamLimits

0x3fb9,	// (0x000333be) list_single_number_pane_g1_cp2

0x3fc5,	// (0x000333ca) list_single_number_pane_g2_cp2

0x5ba7,	// (0x00034fac) list_single_number_pane_t1_cp2_ParamLimits

0x5ba7,	// (0x00034fac) list_single_number_pane_t1_cp2

0x5bbd,	// (0x00034fc2) list_single_number_pane_t2_cp2_ParamLimits

0x5bbd,	// (0x00034fc2) list_single_number_pane_t2_cp2

0x3dc2,	// (0x000331c7) list_double2_pane_g1_cp2_ParamLimits

0x3dc2,	// (0x000331c7) list_double2_pane_g1_cp2

0x3dd3,	// (0x000331d8) list_double2_pane_g2_cp2

0x3f2d,	// (0x00033332) list_double2_pane_t1_cp2_ParamLimits

0x3f2d,	// (0x00033332) list_double2_pane_t1_cp2

0x3f43,	// (0x00033348) list_double2_pane_t2_cp2_ParamLimits

0x3f43,	// (0x00033348) list_double2_pane_t2_cp2

0x3f55,	// (0x0003335a) list_double_pane_g1_cp2_ParamLimits

0x3f55,	// (0x0003335a) list_double_pane_g1_cp2

0x3f61,	// (0x00033366) list_double_pane_g2_cp2

0x3f69,	// (0x0003336e) list_double_pane_t1_cp2_ParamLimits

0x3f69,	// (0x0003336e) list_double_pane_t1_cp2

0x3f7f,	// (0x00033384) list_double_pane_t2_cp2_ParamLimits

0x3f7f,	// (0x00033384) list_double_pane_t2_cp2

0x3fa9,	// (0x000333ae) list_single_pane_cp2_g3

0x3fb9,	// (0x000333be) list_single_pane_g1_cp2_ParamLimits

0x3fb9,	// (0x000333be) list_single_pane_g1_cp2

0x3fc5,	// (0x000333ca) list_single_pane_g2_cp2

0x3fcd,	// (0x000333d2) list_single_pane_t1_cp2_ParamLimits

0x3fcd,	// (0x000333d2) list_single_pane_t1_cp2

0x3fe5,	// (0x000333ea) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3fe5,	// (0x000333ea) list_single_large_graphic_pane_g1_cp2

0x3ff1,	// (0x000333f6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3ff1,	// (0x000333f6) list_single_large_graphic_pane_g2_cp2

0x3ffd,	// (0x00033402) list_single_large_graphic_pane_g3_cp2

0x4005,	// (0x0003340a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4005,	// (0x0003340a) list_single_large_graphic_pane_g4_cp1

0x4041,	// (0x00033446) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4041,	// (0x00033446) list_single_large_graphic_pane_t1_cp2

0x5b73,	// (0x00034f78) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5b73,	// (0x00034f78) list_single_graphic_heading_pane_g1_cp2

0x5b40,	// (0x00034f45) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5b40,	// (0x00034f45) list_single_graphic_heading_pane_g4_cp2

0x3fc5,	// (0x000333ca) list_single_graphic_heading_pane_g5_cp2

0x5b7f,	// (0x00034f84) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b7f,	// (0x00034f84) list_single_graphic_heading_pane_t1_cp2

0x5b95,	// (0x00034f9a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5b95,	// (0x00034f9a) list_single_graphic_heading_pane_t2_cp2

0x5b34,	// (0x00034f39) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5b34,	// (0x00034f39) list_single_2graphic_pane_g1_cp2

0x5b40,	// (0x00034f45) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5b40,	// (0x00034f45) list_single_2graphic_pane_g2_cp2

0x3fc5,	// (0x000333ca) list_single_2graphic_pane_g3_cp2

0x5b51,	// (0x00034f56) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5b51,	// (0x00034f56) list_single_2graphic_pane_g4_cp2

0x5b5d,	// (0x00034f62) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5b5d,	// (0x00034f62) list_single_2graphic_pane_t1_cp2

0x23a1,	// (0x000317a6) list_highlight_pane_g10_cp1

0x570c,	// (0x00034b11) list_highlight_pane_g1_cp1

0x5714,	// (0x00034b19) list_highlight_pane_g2_cp1

0x571c,	// (0x00034b21) list_highlight_pane_g3_cp1

0x5724,	// (0x00034b29) list_highlight_pane_g4_cp1

0x572c,	// (0x00034b31) list_highlight_pane_g5_cp1

0x5734,	// (0x00034b39) list_highlight_pane_g6_cp1

0x573c,	// (0x00034b41) list_highlight_pane_g7_cp1

0x5744,	// (0x00034b49) list_highlight_pane_g8_cp1

0x574c,	// (0x00034b51) list_highlight_pane_g9_cp1

0xd715,	// (0x0003cb1a) form_field_slider_pane_t3

0xd723,	// (0x0003cb28) form_field_slider_pane_t4

0x5648,	// (0x00034a4d) slider_form_pane_ParamLimits

0x5648,	// (0x00034a4d) slider_form_pane

0x23ab,	// (0x000317b0) control_abbreviations

0x23ab,	// (0x000317b0) control_conventions

0x23ab,	// (0x000317b0) control_definitions

0x23ab,	// (0x000317b0) format_table_attribute

0x5e38,	// (0x0003523d) bg_popup_preview_window_pane_g9

0x23ab,	// (0x000317b0) format_table_data2

0x23ab,	// (0x000317b0) format_table_data3

0x23ab,	// (0x000317b0) format_table_data_example

0x0008,

0x23ab,	// (0x000317b0) intro_purpose

0xf8fb,	// (0x0003ed00) bg_popup_preview_window_pane_g

0x23ab,	// (0x000317b0) texts_category

0x23ab,	// (0x000317b0) texts_graphics

0x4057,	// (0x0003345c) text_digital

0x4066,	// (0x0003346b) text_primary

0x4075,	// (0x0003347a) text_primary_small

0x4084,	// (0x00033489) text_secondary

0x4093,	// (0x00033498) text_title

0x6560,	// (0x00035965) bg_passive_tab_pane_g1_cp3_srt

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp3_srt

0x6569,	// (0x0003596e) bg_passive_tab_pane_g3_cp3_srt

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp3_srt_ParamLimits

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp3_srt

0x6572,	// (0x00035977) tabs_4_active_pane_srt_g1

0xdacf,	// (0x0003ced4) tabs_4_active_pane_srt_t1_ParamLimits

0xdacf,	// (0x0003ced4) tabs_4_active_pane_srt_t1

0x6560,	// (0x00035965) bg_active_tab_pane_g1_cp3_copy1

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp3_copy1

0x6569,	// (0x0003596e) bg_active_tab_pane_g3_cp3_copy1

0x248b,	// (0x00031890) tabs_2_long_active_pane_srt_ParamLimits

0x248b,	// (0x00031890) tabs_2_long_active_pane_srt

0x248b,	// (0x00031890) tabs_2_long_passive_pane_srt_ParamLimits

0x248b,	// (0x00031890) tabs_2_long_passive_pane_srt

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp4_srt

0x627c,	// (0x00035681) bg_passive_tab_pane_g1_cp4_srt

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp4_srt

0x6285,	// (0x0003568a) bg_passive_tab_pane_g3_cp4_srt

0x248b,	// (0x00031890) bg_active_tab_pane_cp4_srt_ParamLimits

0x248b,	// (0x00031890) bg_active_tab_pane_cp4_srt

0xd8b5,	// (0x0003ccba) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd8b5,	// (0x0003ccba) tabs_2_long_active_pane_srt_t1

0x627c,	// (0x00035681) bg_active_tab_pane_g1_cp4_srt

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp4_srt

0x6285,	// (0x0003568a) bg_active_tab_pane_g3_cp4_srt

0x2e4c,	// (0x00032251) tabs_3_long_active_pane_srt_ParamLimits

0x2e4c,	// (0x00032251) tabs_3_long_active_pane_srt

0x2e4c,	// (0x00032251) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2e4c,	// (0x00032251) tabs_3_long_passive_pane_cp_srt

0x2e4c,	// (0x00032251) tabs_3_long_passive_pane_srt_ParamLimits

0x2e4c,	// (0x00032251) tabs_3_long_passive_pane_srt

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp5_srt

0x3d57,	// (0x0003315c) bg_passive_tab_pane_g1_cp5_srt

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp5_srt

0x3d60,	// (0x00033165) bg_passive_tab_pane_g3_cp5_srt

0x248b,	// (0x00031890) bg_active_tab_pane_cp5_srt_ParamLimits

0x248b,	// (0x00031890) bg_active_tab_pane_cp5_srt

0xd89f,	// (0x0003cca4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd89f,	// (0x0003cca4) tabs_3_long_active_pane_srt_t1

0x3d57,	// (0x0003315c) bg_active_tab_pane_g1_cp5_srt

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp5_srt

0x3d60,	// (0x00033165) bg_active_tab_pane_g3_cp5_srt

0x625c,	// (0x00035661) navi_text_pane_srt_t1

0x6254,	// (0x00035659) navi_icon_pane_srt_g1

0x4266,	// (0x0003366b) midp_editing_number_pane_srt

0x40a2,	// (0x000334a7) midp_ticker_pane_srt

0x426e,	// (0x00033673) midp_ticker_pane_srt_g1

0x4276,	// (0x0003367b) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003eb8f) midp_ticker_pane_srt_g

0x427e,	// (0x00033683) midp_ticker_pane_srt_t1

0x6245,	// (0x0003564a) midp_editing_number_pane_t1_copy1

0xcabc,	// (0x0003bec1) listscroll_midp_pane

0xcabc,	// (0x0003bec1) midp_form_pane

0x4118,	// (0x0003351d) midp_info_popup_window_ParamLimits

0x4118,	// (0x0003351d) midp_info_popup_window

0x34f5,	// (0x000328fa) bg_popup_sub_pane_cp50_ParamLimits

0x34f5,	// (0x000328fa) bg_popup_sub_pane_cp50

0x5344,	// (0x00034749) listscroll_midp_info_pane_ParamLimits

0x5344,	// (0x00034749) listscroll_midp_info_pane

0x532c,	// (0x00034731) listscroll_form_midp_pane_ParamLimits

0x532c,	// (0x00034731) listscroll_form_midp_pane

0x5338,	// (0x0003473d) scroll_bar_cp050

0xd709,	// (0x0003cb0e) list_midp_pane

0x6f7c,	// (0x00036381) signal_pane_g2_cp

0x5246,	// (0x0003464b) listscroll_midp_info_pane_t1_ParamLimits

0x5246,	// (0x0003464b) listscroll_midp_info_pane_t1

0x525e,	// (0x00034663) listscroll_midp_info_pane_t2_ParamLimits

0x525e,	// (0x00034663) listscroll_midp_info_pane_t2

0x529c,	// (0x000346a1) listscroll_midp_info_pane_t3_ParamLimits

0x529c,	// (0x000346a1) listscroll_midp_info_pane_t3

0x52d6,	// (0x000346db) listscroll_midp_info_pane_t4_ParamLimits

0x52d6,	// (0x000346db) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0003ec3b) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0003ec3b) listscroll_midp_info_pane_t

0x35b7,	// (0x000329bc) scroll_pane_cp21

0x51e4,	// (0x000345e9) form_midp_field_choice_group_pane

0x51ed,	// (0x000345f2) form_midp_field_text_pane

0x522c,	// (0x00034631) form_midp_field_time_pane

0x5234,	// (0x00034639) form_midp_gauge_slider_pane

0x523d,	// (0x00034642) form_midp_gauge_wait_pane

0x23ab,	// (0x000317b0) form_midp_image_pane

0xbcac,	// (0x0003b0b1) list_single_midp_pane_ParamLimits

0xbcac,	// (0x0003b0b1) list_single_midp_pane

0xd6e7,	// (0x0003caec) form_midp_field_text_pane_t1

0x4f8e,	// (0x00034393) input_focus_pane_cp050

0x51d3,	// (0x000345d8) list_midp_form_text_pane

0x516b,	// (0x00034570) form_midp_field_choice_group_pane_t1

0x5179,	// (0x0003457e) input_focus_pane_cp051

0x518d,	// (0x00034592) list_midp_choice_pane

0x23ab,	// (0x000317b0) status_idle_pane

0x514f,	// (0x00034554) form_midp_field_time_pane_t1

0x23a1,	// (0x000317a6) wait_anim_pane_g2_copy1

0x515d,	// (0x00034562) form_midp_field_time_pane_t2

0x0001,

0x41c6,	// (0x000335cb) aid_navinavi_width_2_pane

0xf831,	// (0x0003ec36) form_midp_field_time_pane_t

0x23ab,	// (0x000317b0) input_focus_pane_cp052

0x23ab,	// (0x000317b0) bg_input_focus_pane_cp040

0x510f,	// (0x00034514) form_midp_gauge_slider_pane_t1

0x511d,	// (0x00034522) form_midp_gauge_slider_pane_t2

0xd6cb,	// (0x0003cad0) form_midp_gauge_slider_pane_t3

0xd6d9,	// (0x0003cade) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0003ec2d) form_midp_gauge_slider_pane_t

0x5147,	// (0x0003454c) form_midp_slider_pane

0x248b,	// (0x00031890) bg_input_focus_pane_cp041_ParamLimits

0x248b,	// (0x00031890) bg_input_focus_pane_cp041

0x50dc,	// (0x000344e1) form_midp_gauge_wait_pane_t1_ParamLimits

0x50dc,	// (0x000344e1) form_midp_gauge_wait_pane_t1

0x50ee,	// (0x000344f3) form_midp_gauge_wait_pane_t2_ParamLimits

0x50ee,	// (0x000344f3) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0003ec28) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0003ec28) form_midp_gauge_wait_pane_t

0x5100,	// (0x00034505) form_midp_wait_pane_ParamLimits

0x5100,	// (0x00034505) form_midp_wait_pane

0x50a6,	// (0x000344ab) form_midp_image_pane_g1

0x50af,	// (0x000344b4) form_midp_image_pane_t1

0x50be,	// (0x000344c3) form_midp_image_pane_t2

0x50cd,	// (0x000344d2) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0003ec21) form_midp_image_pane_t

0x509d,	// (0x000344a2) list_single_midp_pane_g1

0x1359,	// (0x0003075e) list_single_midp_pane_t1

0xd6b6,	// (0x0003cabb) list_midp_form_item_pane_ParamLimits

0xd6b6,	// (0x0003cabb) list_midp_form_item_pane

0x416e,	// (0x00033573) list_midp_form_item_pane_t1

0x417d,	// (0x00033582) midp_ticker_pane_g1

0x4189,	// (0x0003358e) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0003eb75) midp_ticker_pane_g

0xcb64,	// (0x0003bf69) midp_ticker_pane_t1

0xda48,	// (0x0003ce4d) midp_editing_number_pane_t1

0x6474,	// (0x00035879) midp_editing_number_pane

0x6483,	// (0x00035888) midp_ticker_pane

0x6235,	// (0x0003563a) ai_message_heading_pane

0x23ab,	// (0x000317b0) bg_popup_window_pane_cp14

0x623d,	// (0x00035642) listscroll_ai_message_pane

0x61bf,	// (0x000355c4) ai_message_heading_pane_g1_ParamLimits

0x61bf,	// (0x000355c4) ai_message_heading_pane_g1

0x61cb,	// (0x000355d0) ai_message_heading_pane_g2_ParamLimits

0x61cb,	// (0x000355d0) ai_message_heading_pane_g2

0x61d7,	// (0x000355dc) ai_message_heading_pane_g3_ParamLimits

0x61d7,	// (0x000355dc) ai_message_heading_pane_g3

0x61e3,	// (0x000355e8) ai_message_heading_pane_g4_ParamLimits

0x61e3,	// (0x000355e8) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0003ed62) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0003ed62) ai_message_heading_pane_g

0x61ef,	// (0x000355f4) ai_message_heading_pane_t1_ParamLimits

0x61ef,	// (0x000355f4) ai_message_heading_pane_t1

0x6209,	// (0x0003560e) ai_message_heading_pane_t2_ParamLimits

0x6209,	// (0x0003560e) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0003ed6b) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0003ed6b) ai_message_heading_pane_t

0x621b,	// (0x00035620) bg_popup_heading_pane_cp1_ParamLimits

0x621b,	// (0x00035620) bg_popup_heading_pane_cp1

0x61ad,	// (0x000355b2) list_ai_message_pane_ParamLimits

0x61ad,	// (0x000355b2) list_ai_message_pane

0x35b7,	// (0x000329bc) scroll_pane_cp10

0x6149,	// (0x0003554e) list_ai_message_pane_g1

0x6151,	// (0x00035556) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0003ed3f) list_ai_message_pane_g

0x6159,	// (0x0003555e) list_ai_message_pane_t1_ParamLimits

0x6159,	// (0x0003555e) list_ai_message_pane_t1

0x616e,	// (0x00035573) list_ai_message_pane_t2_ParamLimits

0x616e,	// (0x00035573) list_ai_message_pane_t2

0x6183,	// (0x00035588) list_ai_message_pane_t3_ParamLimits

0x6183,	// (0x00035588) list_ai_message_pane_t3

0x6198,	// (0x0003559d) list_ai_message_pane_t4_ParamLimits

0x6198,	// (0x0003559d) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0003ed44) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0003ed44) list_ai_message_pane_t

0xd87e,	// (0x0003cc83) cell_ai_soft_ind_pane_ParamLimits

0xd87e,	// (0x0003cc83) cell_ai_soft_ind_pane

0x41a7,	// (0x000335ac) cell_ai_soft_ind_pane_g1_ParamLimits

0x41a7,	// (0x000335ac) cell_ai_soft_ind_pane_g1

0x23ab,	// (0x000317b0) grid_highlight_cp1

0x41b4,	// (0x000335b9) text_secondary_cp56_ParamLimits

0x41b4,	// (0x000335b9) text_secondary_cp56

0x6109,	// (0x0003550e) example_general_pane_ParamLimits

0x6109,	// (0x0003550e) example_general_pane

0x6115,	// (0x0003551a) example_parent_pane_g1_ParamLimits

0x6115,	// (0x0003551a) example_parent_pane_g1

0x6121,	// (0x00035526) example_parent_pane_t1_ParamLimits

0x6121,	// (0x00035526) example_parent_pane_t1

0xcf8d,	// (0x0003c392) popup_preview_text_window_ParamLimits

0xcf8d,	// (0x0003c392) popup_preview_text_window

0x3fb1,	// (0x000333b6) list_single_pane_cp2_g4

0x2f02,	// (0x00032307) bg_popup_preview_window_pane_ParamLimits

0x2f02,	// (0x00032307) bg_popup_preview_window_pane

0x5e40,	// (0x00035245) popup_preview_text_window_t1_ParamLimits

0x5e40,	// (0x00035245) popup_preview_text_window_t1

0x5e5e,	// (0x00035263) popup_preview_text_window_t2_ParamLimits

0x5e5e,	// (0x00035263) popup_preview_text_window_t2

0x5ea7,	// (0x000352ac) popup_preview_text_window_t3_ParamLimits

0x5ea7,	// (0x000352ac) popup_preview_text_window_t3

0x5eec,	// (0x000352f1) popup_preview_text_window_t4_ParamLimits

0x5eec,	// (0x000352f1) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0003ed13) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0003ed13) popup_preview_text_window_t

0x5f6a,	// (0x0003536f) scroll_pane_cp11

0x4e9e,	// (0x000342a3) bg_popup_preview_window_pane_g1

0x5e00,	// (0x00035205) bg_popup_preview_window_pane_g2

0x5e08,	// (0x0003520d) bg_popup_preview_window_pane_g3

0x5e10,	// (0x00035215) bg_popup_preview_window_pane_g4

0x5e18,	// (0x0003521d) bg_popup_preview_window_pane_g5

0x5e20,	// (0x00035225) bg_popup_preview_window_pane_g6

0x5e28,	// (0x0003522d) bg_popup_preview_window_pane_g7

0x5e30,	// (0x00035235) bg_popup_preview_window_pane_g8

0xf4ea,	// (0x0003e8ef) aid_popup_width_pane

0xcf09,	// (0x0003c30e) popup_midp_note_alarm_window_ParamLimits

0xcf09,	// (0x0003c30e) popup_midp_note_alarm_window

0x3431,	// (0x00032836) data_form_pane_ParamLimits

0xb943,	// (0x0003ad48) form_field_data_pane_g1

0xb94d,	// (0x0003ad52) form_field_data_pane_t1_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_ParamLimits

0x344b,	// (0x00032850) data_form_wide_pane_ParamLimits

0x0990,	// (0x0002fd95) form_field_data_wide_pane_g1

0x099c,	// (0x0002fda1) form_field_data_wide_pane_t1_ParamLimits

0x31ae,	// (0x000325b3) input_focus_pane_cp6_ParamLimits

0xc8e0,	// (0x0003bce5) input_popup_find_pane_g1_ParamLimits

0xc8e0,	// (0x0003bce5) input_popup_find_pane_g1

0x0c14,	// (0x00030019) aid_navi_side_left_pane

0x0c29,	// (0x0003002e) aid_navi_side_right_pane

0x5807,	// (0x00034c0c) bg_popup_window_pane_cp30_ParamLimits

0x5807,	// (0x00034c0c) bg_popup_window_pane_cp30

0x5881,	// (0x00034c86) popup_midp_note_alarm_window_g1_ParamLimits

0x5881,	// (0x00034c86) popup_midp_note_alarm_window_g1

0x58b1,	// (0x00034cb6) popup_midp_note_alarm_window_t1_ParamLimits

0x58b1,	// (0x00034cb6) popup_midp_note_alarm_window_t1

0x5952,	// (0x00034d57) popup_midp_note_alarm_window_t2_ParamLimits

0x5952,	// (0x00034d57) popup_midp_note_alarm_window_t2

0x5a00,	// (0x00034e05) popup_midp_note_alarm_window_t3_ParamLimits

0x5a00,	// (0x00034e05) popup_midp_note_alarm_window_t3

0x5a32,	// (0x00034e37) popup_midp_note_alarm_window_t4_ParamLimits

0x5a32,	// (0x00034e37) popup_midp_note_alarm_window_t4

0x5a58,	// (0x00034e5d) popup_midp_note_alarm_window_t5_ParamLimits

0x5a58,	// (0x00034e5d) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0003ecb0) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0003ecb0) popup_midp_note_alarm_window_t

0x5b04,	// (0x00034f09) wait_bar_pane_cp1_ParamLimits

0x5b04,	// (0x00034f09) wait_bar_pane_cp1

0x23ab,	// (0x000317b0) wait_anim_pane_copy1

0x23ab,	// (0x000317b0) wait_border_pane_copy1

0x54ed,	// (0x000348f2) wait_border_pane_g1_copy1

0x09b6,	// (0x0002fdbb) form_field_popup_pane_g1

0xb967,	// (0x0003ad6c) form_field_popup_pane_t1_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_cp7_ParamLimits

0x3477,	// (0x0003287c) list_form_pane_ParamLimits

0x09d6,	// (0x0002fddb) form_field_popup_wide_pane_g1

0x09de,	// (0x0002fde3) form_field_popup_wide_pane_t1_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_cp8_ParamLimits

0x3483,	// (0x00032888) list_form_wide_pane_ParamLimits

0x65ec,	// (0x000359f1) aid_size_cell_graphic_pane

0xb9e6,	// (0x0003adeb) data_form_pane_t1_ParamLimits

0xbe23,	// (0x0003b228) data_form_wide_pane_t1_ParamLimits

0xd342,	// (0x0003c747) bg_status_flat_pane

0xc514,	// (0x0003b919) title_pane_t1_ParamLimits

0x2453,	// (0x00031858) title_pane_t2_ParamLimits

0x2479,	// (0x0003187e) title_pane_t3_ParamLimits

0xf573,	// (0x0003e978) title_pane_t_ParamLimits

0x3a38,	// (0x00032e3d) level_1_signal_ParamLimits

0x3a45,	// (0x00032e4a) level_2_signal_ParamLimits

0x3a52,	// (0x00032e57) level_3_signal_ParamLimits

0x3a5f,	// (0x00032e64) level_4_signal_ParamLimits

0x3a6c,	// (0x00032e71) level_5_signal_ParamLimits

0x3a79,	// (0x00032e7e) level_6_signal_ParamLimits

0x3a86,	// (0x00032e8b) level_7_signal_ParamLimits

0x3a38,	// (0x00032e3d) level_1_battery_ParamLimits

0x3a45,	// (0x00032e4a) level_2_battery_ParamLimits

0x3a52,	// (0x00032e57) level_3_battery_ParamLimits

0x3a5f,	// (0x00032e64) level_4_battery_ParamLimits

0x3a6c,	// (0x00032e71) level_5_battery_ParamLimits

0x3a79,	// (0x00032e7e) level_6_battery_ParamLimits

0x3a86,	// (0x00032e8b) level_7_battery_ParamLimits

0x570c,	// (0x00034b11) bg_status_flat_pane_g1

0x5714,	// (0x00034b19) bg_status_flat_pane_g2

0x571c,	// (0x00034b21) bg_status_flat_pane_g3

0x5724,	// (0x00034b29) bg_status_flat_pane_g4

0x572c,	// (0x00034b31) bg_status_flat_pane_g5

0x5734,	// (0x00034b39) bg_status_flat_pane_g6

0x573c,	// (0x00034b41) bg_status_flat_pane_g7

0xc5a8,	// (0x0003b9ad) tabs_3_active_pane_t1_ParamLimits

0xc5a8,	// (0x0003b9ad) tabs_3_passive_pane_t1_ParamLimits

0xc5c2,	// (0x0003b9c7) tabs_4_active_pane_t1_ParamLimits

0xc5c2,	// (0x0003b9c7) tabs_4_1_passive_pane_t1_ParamLimits

0xc8f6,	// (0x0003bcfb) tabs_2_active_pane_t1_ParamLimits

0xc8f6,	// (0x0003bcfb) tabs_2_passive_pane_t1_ParamLimits

0x248b,	// (0x00031890) bg_active_tab_pane_cp4_ParamLimits

0xc908,	// (0x0003bd0d) tabs_2_long_active_pane_t1_ParamLimits

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp4_ParamLimits

0x12a6,	// (0x000306ab) list_single_midp_graphic_pane_t1_ParamLimits

0x248b,	// (0x00031890) bg_active_tab_pane_cp5_ParamLimits

0xc91b,	// (0x0003bd20) tabs_3_long_active_pane_t1_ParamLimits

0x4408,	// (0x0003380d) bg_passive_tab_pane_cp5_ParamLimits

0x12a6,	// (0x000306ab) list_single_midp_graphic_pane_t1

0xd342,	// (0x0003c747) bg_status_flat_pane_ParamLimits

0x4b35,	// (0x00033f3a) indicator_pane_cp2_ParamLimits

0x4b35,	// (0x00033f3a) indicator_pane_cp2

0xd4b9,	// (0x0003c8be) navi_pane_srt_ParamLimits

0xd4b9,	// (0x0003c8be) navi_pane_srt

0x4c7d,	// (0x00034082) popup_clock_digital_analogue_window_cp1

0x2568,	// (0x0003196d) indicator_pane_t1

0x40a2,	// (0x000334a7) copy_highlight_pane

0x40a2,	// (0x000334a7) cursor_graphics_pane

0x40a2,	// (0x000334a7) graphic_within_text_pane

0x40a2,	// (0x000334a7) link_highlight_pane

0x5f2d,	// (0x00035332) popup_preview_text_window_t5_ParamLimits

0x5f2d,	// (0x00035332) popup_preview_text_window_t5

0x41ce,	// (0x000335d3) cursor_digital_pane

0x41ce,	// (0x000335d3) cursor_primary_pane

0x41df,	// (0x000335e4) cursor_primary_small_pane

0x41e7,	// (0x000335ec) cursor_secondary_pane

0x41ef,	// (0x000335f4) cursor_title_pane

0x41ce,	// (0x000335d3) link_highlight_digital_pane

0x41d6,	// (0x000335db) link_highlight_primary_pane

0x41df,	// (0x000335e4) link_highlight_primary_small_pane

0x41e7,	// (0x000335ec) link_highlight_secondary_pane

0x41ef,	// (0x000335f4) link_highlight_title_pane

0x41ce,	// (0x000335d3) copy_highlight_digital_pane

0x41ce,	// (0x000335d3) copy_highlight_primary_pane

0x41df,	// (0x000335e4) copy_highlight_primary_small_pane

0x41e7,	// (0x000335ec) copy_highlight_secondary_pane

0x41ef,	// (0x000335f4) copy_highlight_title_pane

0x41e7,	// (0x000335ec) graphic_text_digital_pane

0x57aa,	// (0x00034baf) graphic_text_primary_pane

0x57b3,	// (0x00034bb8) graphic_text_primary_small_pane

0x41df,	// (0x000335e4) graphic_text_secondary_pane

0x41ce,	// (0x000335d3) graphic_text_title_pane

0xcb76,	// (0x0003bf7b) cursor_primary_pane_g1

0x579c,	// (0x00034ba1) cursor_text_primary_t1

0xd745,	// (0x0003cb4a) cursor_primary_small_pane_g1

0x578e,	// (0x00034b93) cursor_text_primary_small_t1

0xd73b,	// (0x0003cb40) cursor_primary_small_pane_g1_copy1

0x5776,	// (0x00034b7b) cursor_text_primary_small_t1_copy1

0x5754,	// (0x00034b59) cursor_text_title_t1

0xd731,	// (0x0003cb36) cursor_title_pane_g1

0xcb76,	// (0x0003bf7b) cursor_digital_pane_g1

0x4201,	// (0x00033606) cursor_text_digital_t1

0x4226,	// (0x0003362b) link_highlight_primary_pane_g1

0x56fd,	// (0x00034b02) link_highlight_primary_pane_t1

0x420f,	// (0x00033614) link_highlight_primary_small_pane_g1

0x4217,	// (0x0003361c) link_highlight_primary_small_pane_t1

0x4226,	// (0x0003362b) link_highlight_secondary_pane_g1

0x422e,	// (0x00033633) link_highlight_secondary_pane_t1

0x5671,	// (0x00034a76) link_highlight_title_pane_g1

0x5679,	// (0x00034a7e) link_highlight_title_pane_t1

0x565a,	// (0x00034a5f) link_highlight_digital_pane_g1

0x5662,	// (0x00034a67) link_highlight_digital_pane_t1

0x5532,	// (0x00034937) copy_highlight_primary_pane_g1

0x553a,	// (0x0003493f) copy_highlight_primary_pane_t1

0x550c,	// (0x00034911) copy_highlight_primary_small_pane_g1

0x5523,	// (0x00034928) copy_highlight_primary_small_pane_t1

0x423d,	// (0x00033642) copy_highlight_secondary_pane_g1

0x4245,	// (0x0003364a) copy_highlight_secondary_pane_t1

0x550c,	// (0x00034911) copy_highlight_title_pane_g1

0x5514,	// (0x00034919) copy_highlight_title_pane_t1

0x5532,	// (0x00034937) copy_highlight_digital_pane_g1

0x67b6,	// (0x00035bbb) copy_highlight_digital_pane_t1

0x670a,	// (0x00035b0f) graphic_text_primary_pane_g1

0x679a,	// (0x00035b9f) graphic_text_primary_pane_t1

0x67a8,	// (0x00035bad) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0003eddf) graphic_text_primary_pane_t

0x6776,	// (0x00035b7b) graphic_text_primary_small_pane_g1

0x677e,	// (0x00035b83) graphic_text_primary_small_pane_t1

0x678c,	// (0x00035b91) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0003edda) graphic_text_primary_small_pane_t

0x6752,	// (0x00035b57) graphic_text_secondary_pane_g1

0x675a,	// (0x00035b5f) graphic_text_secondary_pane_t1

0x6768,	// (0x00035b6d) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0003edd5) graphic_text_secondary_pane_t

0x672e,	// (0x00035b33) graphic_text_title_pane_g1

0x6736,	// (0x00035b3b) graphic_text_title_pane_t1

0x6744,	// (0x00035b49) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0003edd0) graphic_text_title_pane_t

0x670a,	// (0x00035b0f) graphic_text_digital_pane_g1

0x6712,	// (0x00035b17) graphic_text_digital_pane_t1

0x6720,	// (0x00035b25) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0003edcb) graphic_text_digital_pane_t

0x248b,	// (0x00031890) navi_icon_pane_srt_ParamLimits

0x248b,	// (0x00031890) navi_icon_pane_srt

0x23ab,	// (0x000317b0) navi_midp_pane_srt

0x23ab,	// (0x000317b0) navi_navi_pane_srt

0x248b,	// (0x00031890) navi_text_pane_srt_ParamLimits

0x248b,	// (0x00031890) navi_text_pane_srt

0x66d5,	// (0x00035ada) navi_navi_icon_text_pane_srt

0x66dd,	// (0x00035ae2) navi_navi_pane_srt_g1_ParamLimits

0x66dd,	// (0x00035ae2) navi_navi_pane_srt_g1

0x66ef,	// (0x00035af4) navi_navi_pane_srt_g2_ParamLimits

0x66ef,	// (0x00035af4) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0003edc6) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0003edc6) navi_navi_pane_srt_g

0x6701,	// (0x00035b06) navi_navi_tabs_pane_srt

0x66d5,	// (0x00035ada) navi_navi_text_pane_srt

0x66d5,	// (0x00035ada) navi_navi_volume_pane_srt

0x66c6,	// (0x00035acb) navi_navi_text_pane_srt_t1

0x162f,	// (0x00030a34) navi_navi_volume_pane_srt_g1

0x1637,	// (0x00030a3c) volume_small_pane_srt_ParamLimits

0x1637,	// (0x00030a3c) volume_small_pane_srt

0x0f7e,	// (0x00030383) volume_small_pane_srt_g1_ParamLimits

0x0f7e,	// (0x00030383) volume_small_pane_srt_g1

0x0f8e,	// (0x00030393) volume_small_pane_srt_g2_ParamLimits

0x0f8e,	// (0x00030393) volume_small_pane_srt_g2

0x0f9f,	// (0x000303a4) volume_small_pane_srt_g3_ParamLimits

0x0f9f,	// (0x000303a4) volume_small_pane_srt_g3

0x0fb0,	// (0x000303b5) volume_small_pane_srt_g4_ParamLimits

0x0fb0,	// (0x000303b5) volume_small_pane_srt_g4

0x0fc1,	// (0x000303c6) volume_small_pane_srt_g5_ParamLimits

0x0fc1,	// (0x000303c6) volume_small_pane_srt_g5

0x0fd2,	// (0x000303d7) volume_small_pane_srt_g6_ParamLimits

0x0fd2,	// (0x000303d7) volume_small_pane_srt_g6

0x0fe3,	// (0x000303e8) volume_small_pane_srt_g7_ParamLimits

0x0fe3,	// (0x000303e8) volume_small_pane_srt_g7

0x0ff4,	// (0x000303f9) volume_small_pane_srt_g8_ParamLimits

0x0ff4,	// (0x000303f9) volume_small_pane_srt_g8

0x1005,	// (0x0003040a) volume_small_pane_srt_g9_ParamLimits

0x1005,	// (0x0003040a) volume_small_pane_srt_g9

0x1016,	// (0x0003041b) volume_small_pane_srt_g10_ParamLimits

0x1016,	// (0x0003041b) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003eb7a) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003eb7a) volume_small_pane_srt_g

0x2fab,	// (0x000323b0) query_popup_data_pane_cp2

0x66ac,	// (0x00035ab1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x66ac,	// (0x00035ab1) navi_navi_icon_text_pane_srt_t1

0x57aa,	// (0x00034baf) navi_tabs_2_long_pane_srt

0x57aa,	// (0x00034baf) navi_tabs_2_pane_srt

0x57aa,	// (0x00034baf) navi_tabs_3_long_pane_srt

0x57aa,	// (0x00034baf) navi_tabs_3_pane_srt

0x57aa,	// (0x00034baf) navi_tabs_4_pane_srt

0x160f,	// (0x00030a14) tabs_2_active_pane_srt_ParamLimits

0x160f,	// (0x00030a14) tabs_2_active_pane_srt

0x161f,	// (0x00030a24) tabs_2_passive_pane_srt_ParamLimits

0x161f,	// (0x00030a24) tabs_2_passive_pane_srt

0x4f8e,	// (0x00034393) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f8e,	// (0x00034393) bg_passive_tab_pane_cp1_srt

0x6681,	// (0x00035a86) bg_passive_tab_pane_g1_cp1_srt

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp1_srt

0x6678,	// (0x00035a7d) bg_passive_tab_pane_g3_cp1_srt

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp1_srt_ParamLimits

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp1_srt

0x668a,	// (0x00035a8f) tabs_2_active_pane_srt_g1

0xdb4b,	// (0x0003cf50) tabs_2_active_pane_srt_t1_ParamLimits

0xdb4b,	// (0x0003cf50) tabs_2_active_pane_srt_t1

0x6681,	// (0x00035a86) bg_active_tab_pane_g1_cp1_srt

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp1_srt

0x6678,	// (0x00035a7d) bg_active_tab_pane_g3_cp1_srt

0x15dc,	// (0x000309e1) tabs_3_active_pane_srt_ParamLimits

0x15dc,	// (0x000309e1) tabs_3_active_pane_srt

0x15ed,	// (0x000309f2) tabs_3_passive_pane_cp_srt_ParamLimits

0x15ed,	// (0x000309f2) tabs_3_passive_pane_cp_srt

0x15fe,	// (0x00030a03) tabs_3_passive_pane_srt_ParamLimits

0x15fe,	// (0x00030a03) tabs_3_passive_pane_srt

0x4f8e,	// (0x00034393) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f8e,	// (0x00034393) bg_passive_tab_pane_cp2_srt

0x4254,	// (0x00033659) bg_passive_tab_pane_g1_cp2_srt

0x3ccd,	// (0x000330d2) bg_passive_tab_pane_g2_cp2_srt

0x425d,	// (0x00033662) bg_passive_tab_pane_g3_cp2_srt

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp2_srt_ParamLimits

0x2e4c,	// (0x00032251) bg_active_tab_pane_cp2_srt

0x665e,	// (0x00035a63) tabs_3_active_pane_srt_g1

0xdb35,	// (0x0003cf3a) tabs_3_active_pane_srt_t1_ParamLimits

0xdb35,	// (0x0003cf3a) tabs_3_active_pane_srt_t1

0x4254,	// (0x00033659) bg_active_tab_pane_g1_cp2_srt

0x3ccd,	// (0x000330d2) bg_active_tab_pane_g2_cp2_srt

0x425d,	// (0x00033662) bg_active_tab_pane_g3_cp2_srt

0x1594,	// (0x00030999) tabs_4_active_pane_srt_ParamLimits

0x1594,	// (0x00030999) tabs_4_active_pane_srt

0x15a6,	// (0x000309ab) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15a6,	// (0x000309ab) tabs_4_passive_pane_cp2_srt

0x43b2,	// (0x000337b7) aid_size_cell_toolbar

0x62ed,	// (0x000356f2) main_idle_act_pane_ParamLimits

0x45a5,	// (0x000339aa) popup_large_graphic_colour_window_ParamLimits

0xd20d,	// (0x0003c612) popup_toolbar_window_ParamLimits

0xd20d,	// (0x0003c612) popup_toolbar_window

0x64c0,	// (0x000358c5) list_single_graphic_2heading_pane_ParamLimits

0x64c0,	// (0x000358c5) list_single_graphic_2heading_pane

0x37e7,	// (0x00032bec) aid_size_cell_apps_grid_lsc_pane

0x37f9,	// (0x00032bfe) aid_size_cell_apps_grid_prt_pane

0x4408,	// (0x0003380d) bg_wml_button_pane_cp1_ParamLimits

0x4408,	// (0x0003380d) bg_wml_button_pane_cp1

0xd6e7,	// (0x0003caec) form_midp_field_text_pane_t1_ParamLimits

0x4f8e,	// (0x00034393) input_focus_pane_cp050_ParamLimits

0x51d3,	// (0x000345d8) list_midp_form_text_pane_ParamLimits

0x5179,	// (0x0003457e) input_focus_pane_cp051_ParamLimits

0x518d,	// (0x00034592) list_midp_choice_pane_ParamLimits

0xd682,	// (0x0003ca87) list_single_2graphic_pane_cp3_ParamLimits

0xd682,	// (0x0003ca87) list_single_2graphic_pane_cp3

0xd696,	// (0x0003ca9b) list_single_midp_graphic_pane_ParamLimits

0xd696,	// (0x0003ca9b) list_single_midp_graphic_pane

0xf4fe,	// (0x0003e903) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4fe,	// (0x0003e903) list_single_graphic_2heading_pane_g1

0xf50a,	// (0x0003e90f) list_single_graphic_2heading_pane_g4_ParamLimits

0xf50a,	// (0x0003e90f) list_single_graphic_2heading_pane_g4

0xf516,	// (0x0003e91b) list_single_graphic_2heading_pane_g5_ParamLimits

0xf516,	// (0x0003e91b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0003ebcd) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0003ebcd) list_single_graphic_2heading_pane_g

0xf522,	// (0x0003e927) list_single_graphic_2heading_pane_t1_ParamLimits

0xf522,	// (0x0003e927) list_single_graphic_2heading_pane_t1

0xf536,	// (0x0003e93b) list_single_graphic_2heading_pane_t2_ParamLimits

0xf536,	// (0x0003e93b) list_single_graphic_2heading_pane_t2

0xf552,	// (0x0003e957) list_single_graphic_2heading_pane_t3_ParamLimits

0xf552,	// (0x0003e957) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0003ebd4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0003ebd4) list_single_graphic_2heading_pane_t

0x4ddc,	// (0x000341e1) bg_popup_sub_pane_cp2

0x4e06,	// (0x0003420b) grid_toobar_pane

0x1199,	// (0x0003059e) cell_toolbar_pane_ParamLimits

0x1199,	// (0x0003059e) cell_toolbar_pane

0x4e42,	// (0x00034247) cell_toolbar_pane_g1_ParamLimits

0x4e42,	// (0x00034247) cell_toolbar_pane_g1

0x4e56,	// (0x0003425b) cell_toolbar_pane_g2_ParamLimits

0x4e56,	// (0x0003425b) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0003ebe2) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0003ebe2) cell_toolbar_pane_g

0x4e78,	// (0x0003427d) grid_highlight_pane_cp2_ParamLimits

0x4e78,	// (0x0003427d) grid_highlight_pane_cp2

0x4e92,	// (0x00034297) toolbar_button_pane

0x4e9e,	// (0x000342a3) toolbar_button_pane_g1

0x4ea6,	// (0x000342ab) toolbar_button_pane_g2

0x4eae,	// (0x000342b3) toolbar_button_pane_g3

0x4eb6,	// (0x000342bb) toolbar_button_pane_g4

0x4ebe,	// (0x000342c3) toolbar_button_pane_g5

0x4ec6,	// (0x000342cb) toolbar_button_pane_g6

0x4ece,	// (0x000342d3) toolbar_button_pane_g7

0x4ed6,	// (0x000342db) toolbar_button_pane_g8

0x4ede,	// (0x000342e3) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0003ebe7) toolbar_button_pane_g

0x120b,	// (0x00030610) list_single_2graphic_pane_g1_cp3_ParamLimits

0x120b,	// (0x00030610) list_single_2graphic_pane_g1_cp3

0xbc3a,	// (0x0003b03f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc3a,	// (0x0003b03f) list_single_2graphic_pane_g2_cp3

0x1228,	// (0x0003062d) list_single_2graphic_pane_g3_cp3

0x1230,	// (0x00030635) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1230,	// (0x00030635) list_single_2graphic_pane_g4_cp3

0x123c,	// (0x00030641) list_single_2graphic_pane_t1_cp3_ParamLimits

0x123c,	// (0x00030641) list_single_2graphic_pane_t1_cp3

0x129a,	// (0x0003069f) list_single_midp_graphic_pane_g2_ParamLimits

0x129a,	// (0x0003069f) list_single_midp_graphic_pane_g2

0x43ba,	// (0x000337bf) aid_zoom_text_primary

0x116d,	// (0x00030572) aid_zoom_text_secondary

0x4311,	// (0x00033716) status_small_pane_g7_ParamLimits

0x4311,	// (0x00033716) status_small_pane_g7

0x4334,	// (0x00033739) status_small_pane_t1_ParamLimits

0xc4f0,	// (0x0003b8f5) title_pane_g2

0x0003,

0xf56a,	// (0x0003e96f) title_pane_g

0xc778,	// (0x0003bb7d) aid_size_cell_colour_1_pane_ParamLimits

0xc778,	// (0x0003bb7d) aid_size_cell_colour_1_pane

0xc78c,	// (0x0003bb91) aid_size_cell_colour_2_pane_ParamLimits

0xc78c,	// (0x0003bb91) aid_size_cell_colour_2_pane

0xc7a0,	// (0x0003bba5) aid_size_cell_colour_3_pane_ParamLimits

0xc7a0,	// (0x0003bba5) aid_size_cell_colour_3_pane

0xc7b4,	// (0x0003bbb9) aid_size_cell_colour_4_pane_ParamLimits

0xc7b4,	// (0x0003bbb9) aid_size_cell_colour_4_pane

0x0b50,	// (0x0002ff55) title_pane_stacon_g1_ParamLimits

0x0b50,	// (0x0002ff55) title_pane_stacon_g1

0x5591,	// (0x00034996) popup_note_wait_window_g3_ParamLimits

0x5591,	// (0x00034996) popup_note_wait_window_g3

0x5607,	// (0x00034a0c) popup_note_wait_window_t5_ParamLimits

0x5607,	// (0x00034a0c) popup_note_wait_window_t5

0x23ab,	// (0x000317b0) main_feb_china_hwr_fs_writing_pane

0xcc3f,	// (0x0003c044) popup_feb_china_hwr_fs_window_ParamLimits

0xcc3f,	// (0x0003c044) popup_feb_china_hwr_fs_window

0xbc4b,	// (0x0003b050) aid_size_cell_hwr_fs_ParamLimits

0xbc4b,	// (0x0003b050) aid_size_cell_hwr_fs

0x4f8e,	// (0x00034393) bg_popup_sub_pane_cp3_ParamLimits

0x4f8e,	// (0x00034393) bg_popup_sub_pane_cp3

0xbc60,	// (0x0003b065) grid_hwr_fs_pane_ParamLimits

0xbc60,	// (0x0003b065) grid_hwr_fs_pane

0x12e9,	// (0x000306ee) linegrid_hwr_fs_pane_ParamLimits

0x12e9,	// (0x000306ee) linegrid_hwr_fs_pane

0xbc78,	// (0x0003b07d) cell_hwr_fs_pane_ParamLimits

0xbc78,	// (0x0003b07d) cell_hwr_fs_pane

0x4f9a,	// (0x0003439f) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f9a,	// (0x0003439f) linegrid_hwr_fs_pane_g1

0xd656,	// (0x0003ca5b) linegrid_hwr_fs_pane_g2_ParamLimits

0xd656,	// (0x0003ca5b) linegrid_hwr_fs_pane_g2

0x4fb8,	// (0x000343bd) linegrid_hwr_fs_pane_g3_ParamLimits

0x4fb8,	// (0x000343bd) linegrid_hwr_fs_pane_g3

0x131b,	// (0x00030720) linegrid_hwr_fs_pane_g4_ParamLimits

0x131b,	// (0x00030720) linegrid_hwr_fs_pane_g4

0x1335,	// (0x0003073a) linegrid_hwr_fs_pane_g5_ParamLimits

0x1335,	// (0x0003073a) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0003ec0d) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0003ec0d) linegrid_hwr_fs_pane_g

0x4fc4,	// (0x000343c9) cell_hwr_fs_pane_g1_ParamLimits

0x4fc4,	// (0x000343c9) cell_hwr_fs_pane_g1

0x4d13,	// (0x00034118) cell_hwr_fs_pane_g2_ParamLimits

0x4d13,	// (0x00034118) cell_hwr_fs_pane_g2

0xd668,	// (0x0003ca6d) cell_hwr_fs_pane_g3_ParamLimits

0xd668,	// (0x0003ca6d) cell_hwr_fs_pane_g3

0xd675,	// (0x0003ca7a) cell_hwr_fs_pane_g4_ParamLimits

0xd675,	// (0x0003ca7a) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0003ec18) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0003ec18) cell_hwr_fs_pane_g

0xbc9e,	// (0x0003b0a3) cell_hwr_fs_pane_t1

0x23ab,	// (0x000317b0) grid_highlight_pane_cp6

0x23ab,	// (0x000317b0) main_idle_act2_pane

0x359e,	// (0x000329a3) aid_inside_area_popup_secondary

0xd765,	// (0x0003cb6a) aid_inside_area_window_primary_ParamLimits

0xd765,	// (0x0003cb6a) aid_inside_area_window_primary

0x67c5,	// (0x00035bca) ai2_news_ticker_pane

0x67cd,	// (0x00035bd2) aid_size_cell_ai1_link_ParamLimits

0x67cd,	// (0x00035bd2) aid_size_cell_ai1_link

0xdb61,	// (0x0003cf66) popup_ai2_data_window_ParamLimits

0xdb61,	// (0x0003cf66) popup_ai2_data_window

0x67fd,	// (0x00035c02) popup_ai2_link_window_ParamLimits

0x67fd,	// (0x00035c02) popup_ai2_link_window

0x4f8e,	// (0x00034393) bg_popup_sub_pane_cp4_ParamLimits

0x4f8e,	// (0x00034393) bg_popup_sub_pane_cp4

0x6811,	// (0x00035c16) grid_ai2_link_pane_ParamLimits

0x6811,	// (0x00035c16) grid_ai2_link_pane

0x6828,	// (0x00035c2d) popup_ai2_link_window_g1_ParamLimits

0x6828,	// (0x00035c2d) popup_ai2_link_window_g1

0x6834,	// (0x00035c39) popup_ai2_link_window_g2_ParamLimits

0x6834,	// (0x00035c39) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0003ede4) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0003ede4) popup_ai2_link_window_g

0x6843,	// (0x00035c48) ai2_mp_button_pane

0x684b,	// (0x00035c50) ai2_mp_volume_pane

0x5179,	// (0x0003457e) bg_popup_sub_pane_cp5_ParamLimits

0x5179,	// (0x0003457e) bg_popup_sub_pane_cp5

0x6853,	// (0x00035c58) heading_ai2_gene_pane_ParamLimits

0x6853,	// (0x00035c58) heading_ai2_gene_pane

0x685f,	// (0x00035c64) list_ai2_gene_pane_ParamLimits

0x685f,	// (0x00035c64) list_ai2_gene_pane

0x68a7,	// (0x00035cac) cell_ai2_link_pane_ParamLimits

0x68a7,	// (0x00035cac) cell_ai2_link_pane

0x68bd,	// (0x00035cc2) cell_ai2_link_pane_g1

0x23ab,	// (0x000317b0) grid_highlight_pane_cp7

0x164c,	// (0x00030a51) ai2_mp_volume_pane_g1

0x698d,	// (0x00035d92) ai2_mp_volume_pane_g2

0xdb8b,	// (0x0003cf90) list_ai2_gene_pane_t1

0x6995,	// (0x00035d9a) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0003edfd) ai2_mp_volume_pane_g

0x1654,	// (0x00030a59) volume_small_pane_cp3

0x699d,	// (0x00035da2) aid_size_cell_ai2_button

0x69a5,	// (0x00035daa) grid_ai2_button_pane

0x69ae,	// (0x00035db3) cell_ai2_button_pane_ParamLimits

0x69ae,	// (0x00035db3) cell_ai2_button_pane

0x23a1,	// (0x000317a6) cell_ai2_button_pane_g1

0x23ab,	// (0x000317b0) grid_highlight_pane_cp8

0x694d,	// (0x00035d52) ai2_gene_pane_t1_ParamLimits

0x694d,	// (0x00035d52) ai2_gene_pane_t1

0xcba7,	// (0x0003bfac) aid_height_parent_landscape

0xd8cc,	// (0x0003ccd1) aid_height_set_list

0x62ed,	// (0x000356f2) aid_size_parent

0x65ec,	// (0x000359f1) aid_size_cell_graphic_pane_ParamLimits

0x686f,	// (0x00035c74) popup_ai2_data_window_g1_ParamLimits

0x686f,	// (0x00035c74) popup_ai2_data_window_g1

0x687b,	// (0x00035c80) ai2_news_ticker_pane_g1

0x6883,	// (0x00035c88) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0003ede9) ai2_news_ticker_pane_g

0x688b,	// (0x00035c90) ai2_news_ticker_pane_t1

0x6899,	// (0x00035c9e) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0003edee) ai2_news_ticker_pane_t

0x68c6,	// (0x00035ccb) heading_ai2_gene_pane_g1

0x68ce,	// (0x00035cd3) heading_ai2_gene_pane_t1_ParamLimits

0x68ce,	// (0x00035cd3) heading_ai2_gene_pane_t1

0x68e3,	// (0x00035ce8) list_highlight_pane_cp6

0xdb75,	// (0x0003cf7a) ai2_gene_pane_ParamLimits

0xdb75,	// (0x0003cf7a) ai2_gene_pane

0xdb99,	// (0x0003cf9e) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0003edf3) list_ai2_gene_pane_t

0x691e,	// (0x00035d23) list_highlight_pane_cp8_ParamLimits

0x691e,	// (0x00035d23) list_highlight_pane_cp8

0x692f,	// (0x00035d34) ai2_gene_pane_g1_ParamLimits

0x692f,	// (0x00035d34) ai2_gene_pane_g1

0x6941,	// (0x00035d46) ai2_gene_pane_g2_ParamLimits

0x6941,	// (0x00035d46) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0003edf8) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0003edf8) ai2_gene_pane_g

0x33d3,	// (0x000327d8) scroll_pane_cp12

0xbbf9,	// (0x0003affe) control_pane_t3_ParamLimits

0xbbf9,	// (0x0003affe) control_pane_t3

0x4325,	// (0x0003372a) status_small_pane_g8_ParamLimits

0x4325,	// (0x0003372a) status_small_pane_g8

0xccd4,	// (0x0003c0d9) popup_find_window_ParamLimits

0xcf43,	// (0x0003c348) popup_note_image_window_ParamLimits

0x11c9,	// (0x000305ce) list_double2_graphic_pane_vc_g1_ParamLimits

0x11c9,	// (0x000305ce) list_double2_graphic_pane_vc_g1

0x11d5,	// (0x000305da) list_double2_graphic_pane_vc_g2_ParamLimits

0x11d5,	// (0x000305da) list_double2_graphic_pane_vc_g2

0x11e1,	// (0x000305e6) list_double2_graphic_pane_vc_g3_ParamLimits

0x11e1,	// (0x000305e6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003ebdb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003ebdb) list_double2_graphic_pane_vc_g

0x11ed,	// (0x000305f2) list_double2_graphic_pane_vc_t1_ParamLimits

0x11ed,	// (0x000305f2) list_double2_graphic_pane_vc_t1

0x1258,	// (0x0003065d) list_single_heading_pane_vc_g1_ParamLimits

0x1258,	// (0x0003065d) list_single_heading_pane_vc_g1

0x1264,	// (0x00030669) list_single_heading_pane_vc_g2_ParamLimits

0x1264,	// (0x00030669) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_single_heading_pane_vc_g

0x1270,	// (0x00030675) list_single_heading_pane_vc_t1_ParamLimits

0x1270,	// (0x00030675) list_single_heading_pane_vc_t1

0x1286,	// (0x0003068b) list_single_heading_pane_vc_t2_ParamLimits

0x1286,	// (0x0003068b) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0003ebfc) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0003ebfc) list_single_heading_pane_vc_t

0x4ee6,	// (0x000342eb) list_setting_number_pane_vc_g1_ParamLimits

0x4ee6,	// (0x000342eb) list_setting_number_pane_vc_g1

0x4ef2,	// (0x000342f7) list_setting_number_pane_vc_g2_ParamLimits

0x4ef2,	// (0x000342f7) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003ec01) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003ec01) list_setting_number_pane_vc_g

0x4efe,	// (0x00034303) list_setting_number_pane_vc_t1_ParamLimits

0x4efe,	// (0x00034303) list_setting_number_pane_vc_t1

0x4f12,	// (0x00034317) list_setting_number_pane_vc_t2_ParamLimits

0x4f12,	// (0x00034317) list_setting_number_pane_vc_t2

0x4f2e,	// (0x00034333) list_setting_number_pane_vc_t3_ParamLimits

0x4f2e,	// (0x00034333) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0003ec06) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0003ec06) list_setting_number_pane_vc_t

0x4f54,	// (0x00034359) set_value_pane_vc_ParamLimits

0x4f54,	// (0x00034359) set_value_pane_vc

0x64c0,	// (0x000358c5) list_double2_graphic_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double2_graphic_pane_vc

0x64c0,	// (0x000358c5) list_double2_large_graphic_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double2_large_graphic_pane_vc

0x64c0,	// (0x000358c5) list_double2_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double2_pane_vc

0x64c0,	// (0x000358c5) list_double_graphic_heading_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_graphic_heading_pane_vc

0x64c0,	// (0x000358c5) list_double_graphic_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_graphic_pane_vc

0x64c0,	// (0x000358c5) list_double_heading_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_heading_pane_vc

0x64c0,	// (0x000358c5) list_double_large_graphic_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_large_graphic_pane_vc

0x64c0,	// (0x000358c5) list_double_number_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_number_pane_vc

0x64c0,	// (0x000358c5) list_double_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_pane_vc

0x64c0,	// (0x000358c5) list_double_time_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_double_time_pane_vc

0x64c0,	// (0x000358c5) list_setting_number_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_setting_number_pane_vc

0x64c0,	// (0x000358c5) list_setting_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_setting_pane_vc

0x64c0,	// (0x000358c5) list_single_graphic_heading_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_single_graphic_heading_pane_vc

0x64c0,	// (0x000358c5) list_single_heading_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_single_heading_pane_vc

0x64c0,	// (0x000358c5) list_single_number_heading_pane_vc_ParamLimits

0x64c0,	// (0x000358c5) list_single_number_heading_pane_vc

0x2721,	// (0x00031b26) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2721,	// (0x00031b26) list_double_graphic_heading_pane_vc_g1

0x1258,	// (0x0003065d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1258,	// (0x0003065d) list_double_graphic_heading_pane_vc_g2

0x1264,	// (0x00030669) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1264,	// (0x00030669) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0003ee04) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0003ee04) list_double_graphic_heading_pane_vc_g

0x272d,	// (0x00031b32) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x272d,	// (0x00031b32) list_double_graphic_heading_pane_vc_t1

0x1270,	// (0x00030675) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1270,	// (0x00030675) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0003ee0b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0003ee0b) list_double_graphic_heading_pane_vc_t

0x4ee6,	// (0x000342eb) list_setting_pane_vc_g1_ParamLimits

0x4ee6,	// (0x000342eb) list_setting_pane_vc_g1

0x4ef2,	// (0x000342f7) list_setting_pane_vc_g2_ParamLimits

0x4ef2,	// (0x000342f7) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003ec01) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003ec01) list_setting_pane_vc_g

0x6be6,	// (0x00035feb) list_setting_pane_vc_t1_ParamLimits

0x6be6,	// (0x00035feb) list_setting_pane_vc_t1

0x6bfa,	// (0x00035fff) list_setting_pane_vc_t2_ParamLimits

0x6bfa,	// (0x00035fff) list_setting_pane_vc_t2

0x0001,

0xfa49,	// (0x0003ee4e) list_setting_pane_vc_t_ParamLimits

0xfa49,	// (0x0003ee4e) list_setting_pane_vc_t

0x4f54,	// (0x00034359) set_value_pane_cp_vc_ParamLimits

0x4f54,	// (0x00034359) set_value_pane_cp_vc

0x1258,	// (0x0003065d) list_single_number_heading_pane_vc_g1_ParamLimits

0x1258,	// (0x0003065d) list_single_number_heading_pane_vc_g1

0x1264,	// (0x00030669) list_single_number_heading_pane_vc_g2_ParamLimits

0x1264,	// (0x00030669) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_single_number_heading_pane_vc_g

0x1270,	// (0x00030675) list_single_number_heading_pane_vc_t1_ParamLimits

0x1270,	// (0x00030675) list_single_number_heading_pane_vc_t1

0x2741,	// (0x00031b46) list_single_number_heading_pane_vc_t2_ParamLimits

0x2741,	// (0x00031b46) list_single_number_heading_pane_vc_t2

0x2755,	// (0x00031b5a) list_single_number_heading_pane_vc_t3_ParamLimits

0x2755,	// (0x00031b5a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4e,	// (0x0003ee53) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003ee53) list_single_number_heading_pane_vc_t

0x11c9,	// (0x000305ce) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x11c9,	// (0x000305ce) list_single_graphic_heading_pane_vc_g1

0x1258,	// (0x0003065d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1258,	// (0x0003065d) list_single_graphic_heading_pane_vc_g4

0x1264,	// (0x00030669) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1264,	// (0x00030669) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa55,	// (0x0003ee5a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa55,	// (0x0003ee5a) list_single_graphic_heading_pane_vc_g

0x1270,	// (0x00030675) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1270,	// (0x00030675) list_single_graphic_heading_pane_vc_t1

0x2767,	// (0x00031b6c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2767,	// (0x00031b6c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003ee61) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003ee61) list_single_graphic_heading_pane_vc_t

0x1258,	// (0x0003065d) list_double2_pane_vc_g1_ParamLimits

0x1258,	// (0x0003065d) list_double2_pane_vc_g1

0x1264,	// (0x00030669) list_double2_pane_vc_g2_ParamLimits

0x1264,	// (0x00030669) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_double2_pane_vc_g

0x277b,	// (0x00031b80) list_double2_pane_vc_t1_ParamLimits

0x277b,	// (0x00031b80) list_double2_pane_vc_t1

0x2791,	// (0x00031b96) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2791,	// (0x00031b96) list_double2_large_graphic_pane_vc_g1

0x1258,	// (0x0003065d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1258,	// (0x0003065d) list_double2_large_graphic_pane_vc_g2

0x1264,	// (0x00030669) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1264,	// (0x00030669) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0003ea06) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0003ea06) list_double2_large_graphic_pane_vc_g

0x279d,	// (0x00031ba2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x279d,	// (0x00031ba2) list_double2_large_graphic_pane_vc_t1

0x27b3,	// (0x00031bb8) list_double_time_pane_vc_g1_ParamLimits

0x27b3,	// (0x00031bb8) list_double_time_pane_vc_g1

0x27bf,	// (0x00031bc4) list_double_time_pane_vc_g2_ParamLimits

0x27bf,	// (0x00031bc4) list_double_time_pane_vc_g2

0x0001,

0xfa61,	// (0x0003ee66) list_double_time_pane_vc_g_ParamLimits

0xfa61,	// (0x0003ee66) list_double_time_pane_vc_g

0x27cb,	// (0x00031bd0) list_double_time_pane_vc_t1_ParamLimits

0x27cb,	// (0x00031bd0) list_double_time_pane_vc_t1

0x27e4,	// (0x00031be9) list_double_time_pane_vc_t2_ParamLimits

0x27e4,	// (0x00031be9) list_double_time_pane_vc_t2

0x281f,	// (0x00031c24) list_double_time_pane_vc_t3_ParamLimits

0x281f,	// (0x00031c24) list_double_time_pane_vc_t3

0x2837,	// (0x00031c3c) list_double_time_pane_vc_t4_ParamLimits

0x2837,	// (0x00031c3c) list_double_time_pane_vc_t4

0x0003,

0xfa66,	// (0x0003ee6b) list_double_time_pane_vc_t_ParamLimits

0xfa66,	// (0x0003ee6b) list_double_time_pane_vc_t

0x1258,	// (0x0003065d) list_double_pane_vc_g1_ParamLimits

0x1258,	// (0x0003065d) list_double_pane_vc_g1

0x1264,	// (0x00030669) list_double_pane_vc_g2_ParamLimits

0x1264,	// (0x00030669) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_double_pane_vc_g

0x284b,	// (0x00031c50) list_double_pane_vc_t1_ParamLimits

0x284b,	// (0x00031c50) list_double_pane_vc_t1

0x285d,	// (0x00031c62) list_double_pane_vc_t2_ParamLimits

0x285d,	// (0x00031c62) list_double_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003ee74) list_double_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003ee74) list_double_pane_vc_t

0x1258,	// (0x0003065d) list_double_number_pane_vc_g1_ParamLimits

0x1258,	// (0x0003065d) list_double_number_pane_vc_g1

0x1264,	// (0x00030669) list_double_number_pane_vc_g2_ParamLimits

0x1264,	// (0x00030669) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_double_number_pane_vc_g

0x2875,	// (0x00031c7a) list_double_number_pane_vc_t1_ParamLimits

0x2875,	// (0x00031c7a) list_double_number_pane_vc_t1

0x2889,	// (0x00031c8e) list_double_number_pane_vc_t2_ParamLimits

0x2889,	// (0x00031c8e) list_double_number_pane_vc_t2

0x285d,	// (0x00031c62) list_double_number_pane_vc_t3_ParamLimits

0x285d,	// (0x00031c62) list_double_number_pane_vc_t3

0x0002,

0xfa74,	// (0x0003ee79) list_double_number_pane_vc_t_ParamLimits

0xfa74,	// (0x0003ee79) list_double_number_pane_vc_t

0x289b,	// (0x00031ca0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x289b,	// (0x00031ca0) list_double_large_graphic_pane_vc_g1

0x28a7,	// (0x00031cac) list_double_large_graphic_pane_vc_g2_ParamLimits

0x28a7,	// (0x00031cac) list_double_large_graphic_pane_vc_g2

0x1264,	// (0x00030669) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1264,	// (0x00030669) list_double_large_graphic_pane_vc_g3

0x28b6,	// (0x00031cbb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x28b6,	// (0x00031cbb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7b,	// (0x0003ee80) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0003ee80) list_double_large_graphic_pane_vc_g

0x28c2,	// (0x00031cc7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x28c2,	// (0x00031cc7) list_double_large_graphic_pane_vc_t1

0x28d4,	// (0x00031cd9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x28d4,	// (0x00031cd9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0003ee89) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0003ee89) list_double_large_graphic_pane_vc_t

0x1258,	// (0x0003065d) list_double_heading_pane_vc_g1_ParamLimits

0x1258,	// (0x0003065d) list_double_heading_pane_vc_g1

0x1264,	// (0x00030669) list_double_heading_pane_vc_g2_ParamLimits

0x1264,	// (0x00030669) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0003e9e9) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0003e9e9) list_double_heading_pane_vc_g

0x28ed,	// (0x00031cf2) list_double_heading_pane_vc_t1_ParamLimits

0x28ed,	// (0x00031cf2) list_double_heading_pane_vc_t1

0x1270,	// (0x00030675) list_double_heading_pane_vc_t2_ParamLimits

0x1270,	// (0x00030675) list_double_heading_pane_vc_t2

0x0001,

0xfa89,	// (0x0003ee8e) list_double_heading_pane_vc_t_ParamLimits

0xfa89,	// (0x0003ee8e) list_double_heading_pane_vc_t

0x2901,	// (0x00031d06) list_double_graphic_pane_vc_g1_ParamLimits

0x2901,	// (0x00031d06) list_double_graphic_pane_vc_g1

0x2911,	// (0x00031d16) list_double_graphic_pane_vc_g2_ParamLimits

0x2911,	// (0x00031d16) list_double_graphic_pane_vc_g2

0x2920,	// (0x00031d25) list_double_graphic_pane_vc_g3_ParamLimits

0x2920,	// (0x00031d25) list_double_graphic_pane_vc_g3

0x0002,

0xfa8e,	// (0x0003ee93) list_double_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x0003ee93) list_double_graphic_pane_vc_g

0x292c,	// (0x00031d31) list_double_graphic_pane_vc_t1_ParamLimits

0x292c,	// (0x00031d31) list_double_graphic_pane_vc_t1

0x285d,	// (0x00031c62) list_double_graphic_pane_vc_t2_ParamLimits

0x285d,	// (0x00031c62) list_double_graphic_pane_vc_t2

0x0001,

0xfa95,	// (0x0003ee9a) list_double_graphic_pane_vc_t_ParamLimits

0xfa95,	// (0x0003ee9a) list_double_graphic_pane_vc_t

0xf4f6,	// (0x0003e8fb) aid_size_cell_fastswap

0xb343,	// (0x0003a748) aid_size_cell_touch_ParamLimits

0xb343,	// (0x0003a748) aid_size_cell_touch

0x01d8,	// (0x0002f5dd) popup_fast_swap_wide_window_ParamLimits

0x01d8,	// (0x0002f5dd) popup_fast_swap_wide_window

0xb48e,	// (0x0003a893) touch_pane_ParamLimits

0xb48e,	// (0x0003a893) touch_pane

0x3429,	// (0x0003282e) button_value_adjust_pane_cp2

0x08c2,	// (0x0002fcc7) button_value_adjust_pane_cp4

0x08e2,	// (0x0002fce7) form_field_data_pane_cp2

0xb90a,	// (0x0003ad0f) form_field_data_wide_pane_cp2

0x38b6,	// (0x00032cbb) bg_scroll_pane_ParamLimits

0x0cb3,	// (0x000300b8) scroll_handle_pane_ParamLimits

0x0cc7,	// (0x000300cc) scroll_sc2_down_pane_ParamLimits

0x0cc7,	// (0x000300cc) scroll_sc2_down_pane

0x38e7,	// (0x00032cec) scroll_sc2_up_pane_ParamLimits

0x38e7,	// (0x00032cec) scroll_sc2_up_pane

0xdcc4,	// (0x0003d0c9) grid_wheel_folder_pane_g1_ParamLimits

0xdcc4,	// (0x0003d0c9) grid_wheel_folder_pane_g1

0x0f16,	// (0x0003031b) clock_nsta_pane_cp2_ParamLimits

0x0f16,	// (0x0003031b) clock_nsta_pane_cp2

0xcabc,	// (0x0003bec1) listscroll_midp_pane_ParamLimits

0xcacd,	// (0x0003bed2) midp_canvas_pane

0x43a0,	// (0x000337a5) nsta_clock_indic_pane

0x43ee,	// (0x000337f3) listscroll_form_pane_vc

0x43f6,	// (0x000337fb) listscroll_set_pane_vc_ParamLimits

0x43f6,	// (0x000337fb) listscroll_set_pane_vc

0xd36a,	// (0x0003c76f) clock_nsta_pane

0xd394,	// (0x0003c799) indicator_nsta_pane

0x4ddc,	// (0x000341e1) bg_popup_sub_pane_cp2_ParamLimits

0x4df0,	// (0x000341f5) find_pane_cp2_ParamLimits

0x4df0,	// (0x000341f5) find_pane_cp2

0x4e06,	// (0x0003420b) grid_toobar_pane_ParamLimits

0x4f62,	// (0x00034367) list_form_gen_pane_vc_ParamLimits

0x4f62,	// (0x00034367) list_form_gen_pane_vc

0x4f78,	// (0x0003437d) scroll_pane_cp8_vc_ParamLimits

0x4f78,	// (0x0003437d) scroll_pane_cp8_vc

0x4ff4,	// (0x000343f9) data_form_wide_pane_vc_ParamLimits

0x4ff4,	// (0x000343f9) data_form_wide_pane_vc

0x5000,	// (0x00034405) form_field_data_wide_pane_vc_g1

0x5008,	// (0x0003440d) form_field_data_wide_pane_vc_t1_ParamLimits

0x5008,	// (0x0003440d) form_field_data_wide_pane_vc_t1

0x343d,	// (0x00032842) input_focus_pane_cp6_vc_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_cp6_vc

0xd709,	// (0x0003cb0e) list_midp_pane_ParamLimits

0x6652,	// (0x00035a57) scroll_pane_cp16_ParamLimits

0x6652,	// (0x00035a57) scroll_pane_cp16

0x5366,	// (0x0003476b) button_value_adjust_pane_ParamLimits

0x5366,	// (0x0003476b) button_value_adjust_pane

0xd8dd,	// (0x0003cce2) button_value_adjust_pane_cp6_ParamLimits

0xd8dd,	// (0x0003cce2) button_value_adjust_pane_cp6

0xda1f,	// (0x0003ce24) settings_code_pane_cp_ParamLimits

0xda1f,	// (0x0003ce24) settings_code_pane_cp

0x23a1,	// (0x000317a6) cell_touch_pane_g1

0x23a1,	// (0x000317a6) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0003eb24) cell_touch_pane_g

0xdba7,	// (0x0003cfac) cell_touch_pane_cp_ParamLimits

0xdba7,	// (0x0003cfac) cell_touch_pane_cp

0xdbc3,	// (0x0003cfc8) cell_touch_pane_ParamLimits

0xdbc3,	// (0x0003cfc8) cell_touch_pane

0x23a1,	// (0x000317a6) scroll_sc2_down_pane_g1

0x23a1,	// (0x000317a6) scroll_sc2_up_pane_g1

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp4_vc

0x69e2,	// (0x00035de7) list_set_graphic_pane_vc_g1_ParamLimits

0x69e2,	// (0x00035de7) list_set_graphic_pane_vc_g1

0x69ee,	// (0x00035df3) list_set_graphic_pane_vc_g2_ParamLimits

0x69ee,	// (0x00035df3) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0003ee10) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0003ee10) list_set_graphic_pane_vc_g

0x69fa,	// (0x00035dff) text_primary_small_cp13_vc_ParamLimits

0x69fa,	// (0x00035dff) text_primary_small_cp13_vc

0x6a12,	// (0x00035e17) list_set_graphic_pane_vc_ParamLimits

0x6a12,	// (0x00035e17) list_set_graphic_pane_vc

0x23ab,	// (0x000317b0) input_focus_pane_cp2_vc

0x23a1,	// (0x000317a6) setting_code_pane_vc_g1

0x6a26,	// (0x00035e2b) setting_code_pane_vc_t1

0x6a34,	// (0x00035e39) set_text_pane_vc_t1_ParamLimits

0x6a34,	// (0x00035e39) set_text_pane_vc_t1

0x23ab,	// (0x000317b0) input_focus_pane_cp1_vc

0x6a4f,	// (0x00035e54) list_set_text_pane_vc

0x23a1,	// (0x000317a6) setting_text_pane_vc_g1

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp2_vc

0x6a59,	// (0x00035e5e) setting_slider_graphic_pane_vc_g1

0x6a61,	// (0x00035e66) setting_slider_graphic_pane_vc_t1

0x6a6f,	// (0x00035e74) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0003ee15) setting_slider_graphic_pane_vc_t

0x6a7d,	// (0x00035e82) slider_set_pane_cp_vc

0x6a85,	// (0x00035e8a) slider_set_pane_vc_g1

0x6a8e,	// (0x00035e93) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0003ee1a) slider_set_pane_vc_g

0x34a4,	// (0x000328a9) set_opt_bg_pane_g1_copy1

0x34ac,	// (0x000328b1) set_opt_bg_pane_g2_copy1

0x6aba,	// (0x00035ebf) set_opt_bg_pane_g3_copy1

0x34bc,	// (0x000328c1) set_opt_bg_pane_g4_copy1

0x34c4,	// (0x000328c9) set_opt_bg_pane_g5_copy1

0x34cc,	// (0x000328d1) set_opt_bg_pane_g6_copy1

0x6ac4,	// (0x00035ec9) set_opt_bg_pane_g7_copy1

0x6acc,	// (0x00035ed1) set_opt_bg_pane_g8_copy1

0x6ad6,	// (0x00035edb) set_opt_bg_pane_g9_copy1

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp_vc

0x6ae0,	// (0x00035ee5) setting_slider_pane_vc_t1

0x6a61,	// (0x00035e66) setting_slider_pane_vc_t2

0x6a6f,	// (0x00035e74) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0003ee29) setting_slider_pane_vc_t

0x6a7d,	// (0x00035e82) slider_set_pane_vc

0x1368,	// (0x0003076d) volume_set_pane_vc_g1

0x1371,	// (0x00030776) volume_set_pane_vc_g2

0x137a,	// (0x0003077f) volume_set_pane_vc_g3

0x1383,	// (0x00030788) volume_set_pane_vc_g4

0x138c,	// (0x00030791) volume_set_pane_vc_g5

0x1395,	// (0x0003079a) volume_set_pane_vc_g6

0x139e,	// (0x000307a3) volume_set_pane_vc_g7

0x13a7,	// (0x000307ac) volume_set_pane_vc_g8

0x13b0,	// (0x000307b5) volume_set_pane_vc_g9

0x13b9,	// (0x000307be) volume_set_pane_vc_g10

0x0009,

0xfa2b,	// (0x0003ee30) volume_set_pane_vc_g

0x6aef,	// (0x00035ef4) volume_set_pane_vc

0x6af7,	// (0x00035efc) button_value_adjust_pane_cp1_vc

0x6b01,	// (0x00035f06) list_highlight_pane_cp2_vc

0x6b0a,	// (0x00035f0f) list_set_pane_vc_ParamLimits

0x6b0a,	// (0x00035f0f) list_set_pane_vc

0x6b74,	// (0x00035f79) main_pane_set_vc_t1_ParamLimits

0x6b74,	// (0x00035f79) main_pane_set_vc_t1

0x6b89,	// (0x00035f8e) main_pane_set_vc_t2_ParamLimits

0x6b89,	// (0x00035f8e) main_pane_set_vc_t2

0x6b9b,	// (0x00035fa0) main_pane_set_vc_t3_ParamLimits

0x6b9b,	// (0x00035fa0) main_pane_set_vc_t3

0x6baf,	// (0x00035fb4) main_pane_set_vc_t4_ParamLimits

0x6baf,	// (0x00035fb4) main_pane_set_vc_t4

0x0003,

0xfa40,	// (0x0003ee45) main_pane_set_vc_t_ParamLimits

0xfa40,	// (0x0003ee45) main_pane_set_vc_t

0x6bc3,	// (0x00035fc8) setting_code_pane_vc_ParamLimits

0x6bc3,	// (0x00035fc8) setting_code_pane_vc

0x6bd4,	// (0x00035fd9) setting_slider_graphic_pane_vc

0x6bd4,	// (0x00035fd9) setting_slider_pane_vc

0x6bd4,	// (0x00035fd9) setting_text_pane_vc

0x6bd4,	// (0x00035fd9) setting_volume_pane_vc

0x6bde,	// (0x00035fe3) scroll_pane_cp121_vc

0x3417,	// (0x0003281c) set_content_pane_vc

0x6c1c,	// (0x00036021) button_value_adjust_pane_g1

0x6c25,	// (0x0003602a) button_value_adjust_pane_g2

0x0001,

0xfa9a,	// (0x0003ee9f) button_value_adjust_pane_g

0x6c2e,	// (0x00036033) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c2e,	// (0x00036033) form_field_slider_wide_pane_vc_t1

0x6c42,	// (0x00036047) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c42,	// (0x00036047) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003eea4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003eea4) form_field_slider_wide_pane_vc_t

0x2e4c,	// (0x00032251) input_focus_pane_cp10_vc_ParamLimits

0x2e4c,	// (0x00032251) input_focus_pane_cp10_vc

0x6c54,	// (0x00036059) slider_cont_pane_cp1_vc_ParamLimits

0x6c54,	// (0x00036059) slider_cont_pane_cp1_vc

0x6a85,	// (0x00035e8a) slider_form_pane_g1_cp2

0x6a8e,	// (0x00035e93) slider_form_pane_g2_cp2

0x6c6d,	// (0x00036072) form_field_slider_pane_vc_t3

0x6c7b,	// (0x00036080) form_field_slider_pane_vc_t4

0x6c89,	// (0x0003608e) slider_form_pane_vc_ParamLimits

0x6c89,	// (0x0003608e) slider_form_pane_vc

0x6c96,	// (0x0003609b) form_field_slider_pane_vc_t1_ParamLimits

0x6c96,	// (0x0003609b) form_field_slider_pane_vc_t1

0x6c42,	// (0x00036047) form_field_slider_pane_vc_t2_ParamLimits

0x6c42,	// (0x00036047) form_field_slider_pane_vc_t2

0x0001,

0xfaaf,	// (0x0003eeb4) form_field_slider_pane_vc_t_ParamLimits

0xfaaf,	// (0x0003eeb4) form_field_slider_pane_vc_t

0x2e4c,	// (0x00032251) input_focus_pane_cp9_vc_ParamLimits

0x2e4c,	// (0x00032251) input_focus_pane_cp9_vc

0x6cb2,	// (0x000360b7) slider_cont_pane_vc_ParamLimits

0x6cb2,	// (0x000360b7) slider_cont_pane_vc

0x6cc4,	// (0x000360c9) list_form_graphic_pane_cp_vc_ParamLimits

0x6cc4,	// (0x000360c9) list_form_graphic_pane_cp_vc

0x5000,	// (0x00034405) form_field_popup_wide_pane_vc_g1

0x6cd9,	// (0x000360de) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6cd9,	// (0x000360de) form_field_popup_wide_pane_vc_t1

0x343d,	// (0x00032842) input_focus_pane_cp8_vc_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_cp8_vc

0x6cf0,	// (0x000360f5) list_form_wide_pane_vc_ParamLimits

0x6cf0,	// (0x000360f5) list_form_wide_pane_vc

0x6cfc,	// (0x00036101) list_form_graphic_pane_vc_g1

0x6d04,	// (0x00036109) list_form_graphic_pane_vc_t1_ParamLimits

0x6d04,	// (0x00036109) list_form_graphic_pane_vc_t1

0x248b,	// (0x00031890) list_highlight_pane_cp5_vc_ParamLimits

0x248b,	// (0x00031890) list_highlight_pane_cp5_vc

0x6d20,	// (0x00036125) list_form_graphic_pane_vc_ParamLimits

0x6d20,	// (0x00036125) list_form_graphic_pane_vc

0x5000,	// (0x00034405) form_field_popup_pane_vc_g1

0x6d36,	// (0x0003613b) form_field_popup_pane_vc_t1_ParamLimits

0x6d36,	// (0x0003613b) form_field_popup_pane_vc_t1

0x343d,	// (0x00032842) input_focus_pane_cp7_vc_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_cp7_vc

0x6d4d,	// (0x00036152) list_form_pane_vc_ParamLimits

0x6d4d,	// (0x00036152) list_form_pane_vc

0x6d59,	// (0x0003615e) data_form_pane_vc_t1_ParamLimits

0x6d59,	// (0x0003615e) data_form_pane_vc_t1

0x34a4,	// (0x000328a9) input_focus_pane_vc_g1

0x34ac,	// (0x000328b1) input_focus_pane_vc_g2

0x34b4,	// (0x000328b9) input_focus_pane_vc_g3

0x34bc,	// (0x000328c1) input_focus_pane_vc_g4

0x34c4,	// (0x000328c9) input_focus_pane_vc_g5

0x34cc,	// (0x000328d1) input_focus_pane_vc_g6

0x34d4,	// (0x000328d9) input_focus_pane_vc_g7

0x34dc,	// (0x000328e1) input_focus_pane_vc_g8

0x34e4,	// (0x000328e9) input_focus_pane_vc_g9

0x23a1,	// (0x000317a6) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0003eaad) input_focus_pane_vc_g

0x4ff4,	// (0x000343f9) data_form_pane_vc_ParamLimits

0x4ff4,	// (0x000343f9) data_form_pane_vc

0x5000,	// (0x00034405) form_field_data_pane_vc_g1

0x6d74,	// (0x00036179) form_field_data_pane_vc_t1_ParamLimits

0x6d74,	// (0x00036179) form_field_data_pane_vc_t1

0x343d,	// (0x00032842) input_focus_pane_vc_ParamLimits

0x343d,	// (0x00032842) input_focus_pane_vc

0x6d8e,	// (0x00036193) button_value_adjust_pane_cp3_vc

0x6d96,	// (0x0003619b) button_value_adjust_pane_cp5_vc

0x6d9e,	// (0x000361a3) form_field_data_pane_vc_ParamLimits

0x6d9e,	// (0x000361a3) form_field_data_pane_vc

0x6db5,	// (0x000361ba) form_field_data_pane_vc_cp2

0x6dbd,	// (0x000361c2) form_field_data_wide_pane_vc_ParamLimits

0x6dbd,	// (0x000361c2) form_field_data_wide_pane_vc

0x6dd3,	// (0x000361d8) form_field_data_wide_pane_vc_cp2

0x6ddb,	// (0x000361e0) form_field_popup_pane_vc_ParamLimits

0x6ddb,	// (0x000361e0) form_field_popup_pane_vc

0x6df2,	// (0x000361f7) form_field_popup_wide_pane_vc_ParamLimits

0x6df2,	// (0x000361f7) form_field_popup_wide_pane_vc

0x6e08,	// (0x0003620d) form_field_slider_pane_vc_ParamLimits

0x6e08,	// (0x0003620d) form_field_slider_pane_vc

0x6e1b,	// (0x00036220) form_field_slider_wide_pane_vc_ParamLimits

0x6e1b,	// (0x00036220) form_field_slider_wide_pane_vc

0xdbe1,	// (0x0003cfe6) grid_touch_1_pane_ParamLimits

0xdbe1,	// (0x0003cfe6) grid_touch_1_pane

0xdbf5,	// (0x0003cffa) grid_touch_2_pane_ParamLimits

0xdbf5,	// (0x0003cffa) grid_touch_2_pane

0x6ef0,	// (0x000362f5) touch_pane_g1_ParamLimits

0x6ef0,	// (0x000362f5) touch_pane_g1

0x6e52,	// (0x00036257) cell_app_pane_cp_wide_ParamLimits

0x6e52,	// (0x00036257) cell_app_pane_cp_wide

0x6e63,	// (0x00036268) grid_popup_fast_wide_pane_ParamLimits

0x6e63,	// (0x00036268) grid_popup_fast_wide_pane

0x6e77,	// (0x0003627c) scroll_pane_cp19_ParamLimits

0x6e77,	// (0x0003627c) scroll_pane_cp19

0x23ab,	// (0x000317b0) bg_popup_window_pane_cp20

0x6e8b,	// (0x00036290) listscroll_popup_fast_wide_pane

0x360a,	// (0x00032a0f) grid_indicator_nsta_pane

0x6e93,	// (0x00036298) clock_nsta_pane_g1

0x6e9c,	// (0x000362a1) clock_nsta_pane_t1

0xdc1f,	// (0x0003d024) cell_indicator_nsta_pane_ParamLimits

0xdc1f,	// (0x0003d024) cell_indicator_nsta_pane

0x6ef0,	// (0x000362f5) cell_indicator_nsta_pane_g1

0xdc38,	// (0x0003d03d) cell_indicator_nsta_pane_g2

0x0001,

0xfab9,	// (0x0003eebe) cell_indicator_nsta_pane_g

0x6f14,	// (0x00036319) clock_nsta_pane_cp

0x6f1c,	// (0x00036321) indicator_nsta_pane_cp

0x6f25,	// (0x0003632a) nsta_clock_indic_pane_g1

0x2554,	// (0x00031959) grid_indicator_pane

0x39dc,	// (0x00032de1) scroll_pane_cp29

0x0e65,	// (0x0003026a) indicator_nsta_pane_cp2_ParamLimits

0x0e65,	// (0x0003026a) indicator_nsta_pane_cp2

0x248b,	// (0x00031890) main_apps_wheel_pane

0x51ed,	// (0x000345f2) form_midp_field_text_pane_ParamLimits

0x5338,	// (0x0003473d) scroll_bar_cp050_ParamLimits

0x6f8e,	// (0x00036393) cell_indicator_pane_ParamLimits

0x6f8e,	// (0x00036393) cell_indicator_pane

0x6fa5,	// (0x000363aa) cell_indicator_pane_g1

0xdc4e,	// (0x0003d053) grid_wheel_folder_pane_ParamLimits

0xdc4e,	// (0x0003d053) grid_wheel_folder_pane

0xdc5c,	// (0x0003d061) list_wheel_apps_pane_ParamLimits

0xdc5c,	// (0x0003d061) list_wheel_apps_pane

0xdc6a,	// (0x0003d06f) main_apps_wheel_pane_g1_ParamLimits

0xdc6a,	// (0x0003d06f) main_apps_wheel_pane_g1

0xdc76,	// (0x0003d07b) main_apps_wheel_pane_g2_ParamLimits

0xdc76,	// (0x0003d07b) main_apps_wheel_pane_g2

0x0001,

0xfad5,	// (0x0003eeda) main_apps_wheel_pane_g_ParamLimits

0xfad5,	// (0x0003eeda) main_apps_wheel_pane_g

0xdc84,	// (0x0003d089) main_apps_wheel_pane_t1_ParamLimits

0xdc84,	// (0x0003d089) main_apps_wheel_pane_t1

0xdc98,	// (0x0003d09d) list_wheel_apps_pane_g1

0xdca0,	// (0x0003d0a5) list_wheel_apps_pane_g2

0xdca8,	// (0x0003d0ad) list_wheel_apps_pane_g3

0xdcb0,	// (0x0003d0b5) list_wheel_apps_pane_g4

0xdcba,	// (0x0003d0bf) list_wheel_apps_pane_g5

0x0004,

0xfada,	// (0x0003eedf) list_wheel_apps_pane_g

0x3f00,	// (0x00033305) navi_icon_text_pane

0xd265,	// (0x0003c66a) aid_fill_nsta

0xdcd1,	// (0x0003d0d6) navi_icon_text_pane_g1

0xdcdd,	// (0x0003d0e2) navi_icon_text_pane_t1

0xcaa4,	// (0x0003bea9) list_set_graphic_pane_t1_ParamLimits

0xcaa4,	// (0x0003bea9) list_set_graphic_pane_t1

0x5a87,	// (0x00034e8c) popup_midp_note_alarm_window_t6_ParamLimits

0x5a87,	// (0x00034e8c) popup_midp_note_alarm_window_t6

0x5a99,	// (0x00034e9e) popup_midp_note_alarm_window_t7_ParamLimits

0x5a99,	// (0x00034e9e) popup_midp_note_alarm_window_t7

0x5aab,	// (0x00034eb0) popup_midp_note_alarm_window_t8_ParamLimits

0x5aab,	// (0x00034eb0) popup_midp_note_alarm_window_t8

0x5abd,	// (0x00034ec2) popup_midp_note_alarm_window_t9_ParamLimits

0x5abd,	// (0x00034ec2) popup_midp_note_alarm_window_t9

0x5acf,	// (0x00034ed4) popup_midp_note_alarm_window_t10_ParamLimits

0x5acf,	// (0x00034ed4) popup_midp_note_alarm_window_t10

0x5ae1,	// (0x00034ee6) popup_midp_note_alarm_window_t11_ParamLimits

0x5ae1,	// (0x00034ee6) popup_midp_note_alarm_window_t11

0x5af3,	// (0x00034ef8) scroll_pane_cp17_ParamLimits

0x5af3,	// (0x00034ef8) scroll_pane_cp17

0x1368,	// (0x0003076d) volume_small_pane_cp_g1

0x165d,	// (0x00030a62) volume_small_pane_cp_g2

0x1666,	// (0x00030a6b) volume_small_pane_cp_g3

0x166f,	// (0x00030a74) volume_small_pane_cp_g4

0x1678,	// (0x00030a7d) volume_small_pane_cp_g5

0x1681,	// (0x00030a86) volume_small_pane_cp_g6

0x168a,	// (0x00030a8f) volume_small_pane_cp_g7

0x1693,	// (0x00030a98) volume_small_pane_cp_g8

0x169c,	// (0x00030aa1) volume_small_pane_cp_g9

0x16a5,	// (0x00030aaa) volume_small_pane_cp_g10

0x417d,	// (0x00033582) midp_ticker_pane_g1_ParamLimits

0x4189,	// (0x0003358e) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0003eb75) midp_ticker_pane_g_ParamLimits

0xcb64,	// (0x0003bf69) midp_ticker_pane_t1_ParamLimits

0xd285,	// (0x0003c68a) aid_fill_nsta_2

0x5324,	// (0x00034729) list_form2_midp_pane

0x6474,	// (0x00035879) midp_editing_number_pane_ParamLimits

0x6483,	// (0x00035888) midp_ticker_pane_ParamLimits

0x708c,	// (0x00036491) form2_midp_field_pane

0x70b0,	// (0x000364b5) scroll_pane_cp51

0x70d0,	// (0x000364d5) form2_midp_button_pane_ParamLimits

0x70d0,	// (0x000364d5) form2_midp_button_pane

0x70e2,	// (0x000364e7) form2_midp_content_pane_ParamLimits

0x70e2,	// (0x000364e7) form2_midp_content_pane

0x70fc,	// (0x00036501) form2_midp_field_choice_group_pane

0x7104,	// (0x00036509) form2_midp_field_pane_g1

0x710c,	// (0x00036511) form2_midp_field_pane_g2

0x7114,	// (0x00036519) form2_midp_field_pane_g3

0x711c,	// (0x00036521) form2_midp_field_pane_g4

0x0003,

0xfaff,	// (0x0003ef04) form2_midp_field_pane_g

0x7124,	// (0x00036529) form2_midp_gauge_slider_pane

0x712c,	// (0x00036531) form2_midp_gauge_wait_pane

0x7134,	// (0x00036539) form2_midp_image_pane_ParamLimits

0x7134,	// (0x00036539) form2_midp_image_pane

0x714f,	// (0x00036554) form2_midp_label_pane_ParamLimits

0x714f,	// (0x00036554) form2_midp_label_pane

0xdd0b,	// (0x0003d110) form2_midp_label_pane_cp_ParamLimits

0xdd0b,	// (0x0003d110) form2_midp_label_pane_cp

0x7189,	// (0x0003658e) form2_midp_string_pane_ParamLimits

0x7189,	// (0x0003658e) form2_midp_string_pane

0x293e,	// (0x00031d43) form2_midp_text_pane_ParamLimits

0x293e,	// (0x00031d43) form2_midp_text_pane

0x719b,	// (0x000365a0) form2_midp_time_pane

0x71ab,	// (0x000365b0) input_focus_pane_cp51_ParamLimits

0x71ab,	// (0x000365b0) input_focus_pane_cp51

0x71c3,	// (0x000365c8) form2_midp_label_pane_t1_ParamLimits

0x71c3,	// (0x000365c8) form2_midp_label_pane_t1

0x2959,	// (0x00031d5e) form2_mdip_text_pane_t1_ParamLimits

0x2959,	// (0x00031d5e) form2_mdip_text_pane_t1

0x2977,	// (0x00031d7c) form2_midp_time_pane_t1

0x720c,	// (0x00036611) form2_midp_gauge_slider_pane_t1

0xdd2c,	// (0x0003d131) form2_midp_gauge_slider_pane_t2

0xdd3e,	// (0x0003d143) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb08,	// (0x0003ef0d) form2_midp_gauge_slider_pane_t

0x7242,	// (0x00036647) form2_midp_slider_pane

0x724e,	// (0x00036653) form2_midp_gauge_wait_pane_t1

0x725c,	// (0x00036661) form2_midp_wait_pane_ParamLimits

0x725c,	// (0x00036661) form2_midp_wait_pane

0xdd50,	// (0x0003d155) list_single_2graphic_pane_cp4_ParamLimits

0xdd50,	// (0x0003d155) list_single_2graphic_pane_cp4

0xd696,	// (0x0003ca9b) list_single_midp_graphic_pane_cp_ParamLimits

0xd696,	// (0x0003ca9b) list_single_midp_graphic_pane_cp

0x23ab,	// (0x000317b0) list_highlight_pane_cp20

0x72b6,	// (0x000366bb) list_single_2graphic_pane_g1_cp4

0x72be,	// (0x000366c3) list_single_2graphic_pane_g2_cp4

0x72c6,	// (0x000366cb) list_single_2graphic_pane_t1_cp4

0x248b,	// (0x00031890) list_highlight_pane_cp21

0x72d5,	// (0x000366da) list_single_midp_graphic_pane_g4_cp

0x72e4,	// (0x000366e9) list_single_midp_graphic_pane_t1_cp

0xdd65,	// (0x0003d16a) form2_mdip_string_pane_t1_ParamLimits

0xdd65,	// (0x0003d16a) form2_mdip_string_pane_t1

0x23ab,	// (0x000317b0) bg_wml_button_pane_cp2

0x23a1,	// (0x000317a6) form2_midp_image_pane_g1

0x0695,	// (0x0002fa9a) list_double_large_graphic_pane_g5_ParamLimits

0x0695,	// (0x0002fa9a) list_double_large_graphic_pane_g5

0xcabc,	// (0x0003bec1) midp_form_pane_ParamLimits

0x248b,	// (0x00031890) main_apps_wheel_pane_ParamLimits

0xcfc1,	// (0x0003c3c6) popup_preview_window_ParamLimits

0xcfc1,	// (0x0003c3c6) popup_preview_window

0x4964,	// (0x00033d69) popup_touch_info_window_ParamLimits

0x4964,	// (0x00033d69) popup_touch_info_window

0x4982,	// (0x00033d87) popup_touch_menu_window_ParamLimits

0x4982,	// (0x00033d87) popup_touch_menu_window

0x2397,	// (0x0003179c) bg_popup_sub_pane_cp6

0x73f2,	// (0x000367f7) list_touch_menu_pane

0x73fa,	// (0x000367ff) list_single_touch_menu_pane_ParamLimits

0x73fa,	// (0x000367ff) list_single_touch_menu_pane

0x7411,	// (0x00036816) list_single_touch_menu_pane_t1

0x248b,	// (0x00031890) bg_popup_sub_pane_cp7_ParamLimits

0x248b,	// (0x00031890) bg_popup_sub_pane_cp7

0x741f,	// (0x00036824) heading_sub_pane

0x7427,	// (0x0003682c) list_touch_info_pane_ParamLimits

0x7427,	// (0x0003682c) list_touch_info_pane

0x7436,	// (0x0003683b) list_single_touch_info_pane_ParamLimits

0x7436,	// (0x0003683b) list_single_touch_info_pane

0x7448,	// (0x0003684d) list_single_touch_info_pane_t1

0x7456,	// (0x0003685b) list_single_touch_info_pane_t2

0x0001,

0xfb16,	// (0x0003ef1b) list_single_touch_info_pane_t

0x40a2,	// (0x000334a7) bg_popup_heading_pane_cp

0x7464,	// (0x00036869) heading_sub_pane_t1

0x4f8e,	// (0x00034393) bg_popup_preview_window_pane_cp_ParamLimits

0x4f8e,	// (0x00034393) bg_popup_preview_window_pane_cp

0x741f,	// (0x00036824) heading_preview_pane

0x7427,	// (0x0003682c) list_preview_pane_ParamLimits

0x7427,	// (0x0003682c) list_preview_pane

0x7472,	// (0x00036877) popup_preview_window_g1

0x7436,	// (0x0003683b) list_single_preview_pane_ParamLimits

0x7436,	// (0x0003683b) list_single_preview_pane

0x747a,	// (0x0003687f) list_single_preview_pane_g1

0x7482,	// (0x00036887) list_single_preview_pane_t1

0x7448,	// (0x0003684d) list_single_preview_pane_t2

0x0001,

0xfb1b,	// (0x0003ef20) list_single_preview_pane_t

0x7490,	// (0x00036895) bg_popup_heading_pane_cp2_ParamLimits

0x7490,	// (0x00036895) bg_popup_heading_pane_cp2

0x74a6,	// (0x000368ab) heading_preview_pane_g1

0x74ae,	// (0x000368b3) heading_preview_pane_t1_ParamLimits

0x74ae,	// (0x000368b3) heading_preview_pane_t1

0x2577,	// (0x0003197c) soft_indicator_pane_t1_ParamLimits

0x33b0,	// (0x000327b5) scroll_pane_ParamLimits

0x38d5,	// (0x00032cda) scroll_sc2_left_pane

0x38de,	// (0x00032ce3) scroll_sc2_right_pane

0x38fd,	// (0x00032d02) scroll_bg_pane_g1_ParamLimits

0x3912,	// (0x00032d17) scroll_bg_pane_g2_ParamLimits

0x392a,	// (0x00032d2f) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0003eb04) scroll_bg_pane_g_ParamLimits

0x38fd,	// (0x00032d02) scroll_handle_pane_g1_ParamLimits

0x394c,	// (0x00032d51) scroll_handle_pane_g2_ParamLimits

0x392a,	// (0x00032d2f) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0003eb0b) scroll_handle_pane_g_ParamLimits

0x4430,	// (0x00033835) popup_choice_list_window_ParamLimits

0x4430,	// (0x00033835) popup_choice_list_window

0x4de8,	// (0x000341ed) choice_list_pane

0x4e6a,	// (0x0003426f) cell_toolbar_pane_t1

0x4e92,	// (0x00034297) toolbar_button_pane_ParamLimits

0x5fbf,	// (0x000353c4) ai_gene_pane_1_t2_ParamLimits

0x5fbf,	// (0x000353c4) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0003ed23) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0003ed23) ai_gene_pane_1_t

0x74cb,	// (0x000368d0) scroll_sc2_left_pane_g1

0x74cb,	// (0x000368d0) scroll_sc2_right_pane_g1

0x4408,	// (0x0003380d) bg_popup_sub_pane_cp10

0x74d5,	// (0x000368da) list_choice_list_pane

0x74ec,	// (0x000368f1) list_single_choice_list_pane_ParamLimits

0x74ec,	// (0x000368f1) list_single_choice_list_pane

0x7500,	// (0x00036905) list_single_choice_list_pane_g1

0x7508,	// (0x0003690d) list_single_choice_list_pane_t1_ParamLimits

0x7508,	// (0x0003690d) list_single_choice_list_pane_t1

0x751d,	// (0x00036922) choice_list_pane_g1

0x7525,	// (0x0003692a) choice_list_pane_t1

0x2397,	// (0x0003179c) input_focus_pane_cp11

0x37b2,	// (0x00032bb7) title_pane_stacon_g2_ParamLimits

0x37b2,	// (0x00032bb7) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0003eaea) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003eaea) title_pane_stacon_g

0x40a2,	// (0x000334a7) cursor_press_pane

0xcc8c,	// (0x0003c091) popup_fep_hwr_window_ParamLimits

0xcc8c,	// (0x0003c091) popup_fep_hwr_window

0x4552,	// (0x00033957) popup_fep_vkb_window_ParamLimits

0x4552,	// (0x00033957) popup_fep_vkb_window

0x7533,	// (0x00036938) cursor_press_pane_g1

0x0002,

0xfb44,	// (0x0003ef49) fep_vkb_side_pane_g_ParamLimits

0x16e7,	// (0x00030aec) fep_hwr_candidate_pane_ParamLimits

0x16e7,	// (0x00030aec) fep_hwr_candidate_pane

0x1711,	// (0x00030b16) fep_hwr_side_pane_ParamLimits

0x1711,	// (0x00030b16) fep_hwr_side_pane

0x1731,	// (0x00030b36) fep_hwr_top_pane_ParamLimits

0x1731,	// (0x00030b36) fep_hwr_top_pane

0x1749,	// (0x00030b4e) fep_hwr_write_pane_ParamLimits

0x1749,	// (0x00030b4e) fep_hwr_write_pane

0xfb44,	// (0x0003ef49) fep_vkb_side_pane_g

0x753b,	// (0x00036940) fep_hwr_top_pane_g1

0x754d,	// (0x00036952) fep_hwr_top_pane_g2

0x1783,	// (0x00030b88) fep_hwr_top_pane_g3

0x0002,

0xfb20,	// (0x0003ef25) fep_hwr_top_pane_g

0x1798,	// (0x00030b9d) fep_hwr_top_text_pane

0x3aa3,	// (0x00032ea8) fep_hwr_top_text_pane_g1

0x7583,	// (0x00036988) fep_hwr_top_text_pane_t1

0x188e,	// (0x00030c93) fep_hwr_candidate_pane_g1

0x77d6,	// (0x00036bdb) fep_vkb_keypad_pane_g3_ParamLimits

0x77d6,	// (0x00036bdb) fep_vkb_keypad_pane_g3

0x77fe,	// (0x00036c03) fep_vkb_keypad_pane_g4_ParamLimits

0x77fe,	// (0x00036c03) fep_vkb_keypad_pane_g4

0x786d,	// (0x00036c72) fep_vkb_bottom_pane_g2_ParamLimits

0x786d,	// (0x00036c72) fep_vkb_bottom_pane_g2

0x0001,

0xfb4b,	// (0x0003ef50) fep_vkb_bottom_pane_g_ParamLimits

0xfb4b,	// (0x0003ef50) fep_vkb_bottom_pane_g

0x74cb,	// (0x000368d0) cell_vkb_side_pane_g2

0x0001,

0xfb55,	// (0x0003ef5a) cell_vkb_side_pane_g

0x78f8,	// (0x00036cfd) cell_vkb_side_pane_t1

0x7906,	// (0x00036d0b) cell_vkb_side_pane_t1_copy1

0x74cb,	// (0x000368d0) bg_fep_vkb_candidate_pane_g2

0x7a32,	// (0x00036e37) cell_vkb_candidate_pane_ParamLimits

0x7591,	// (0x00036996) aid_size_cell_vkb_ParamLimits

0x7591,	// (0x00036996) aid_size_cell_vkb

0x7a32,	// (0x00036e37) cell_vkb_candidate_pane

0x18b5,	// (0x00030cba) bg_popup_fep_shadow_pane_g1

0xddf3,	// (0x0003d1f8) fep_vkb_bottom_pane_ParamLimits

0xddf3,	// (0x0003d1f8) fep_vkb_bottom_pane

0x7655,	// (0x00036a5a) fep_vkb_candidate_pane_ParamLimits

0x7655,	// (0x00036a5a) fep_vkb_candidate_pane

0xde18,	// (0x0003d21d) fep_vkb_keypad_pane_ParamLimits

0xde18,	// (0x0003d21d) fep_vkb_keypad_pane

0xde54,	// (0x0003d259) fep_vkb_side_pane_ParamLimits

0xde54,	// (0x0003d259) fep_vkb_side_pane

0xde90,	// (0x0003d295) fep_vkb_top_pane_ParamLimits

0xde90,	// (0x0003d295) fep_vkb_top_pane

0x772f,	// (0x00036b34) fep_vkb_top_pane_g1_ParamLimits

0x772f,	// (0x00036b34) fep_vkb_top_pane_g1

0x773e,	// (0x00036b43) fep_vkb_top_pane_g2_ParamLimits

0x773e,	// (0x00036b43) fep_vkb_top_pane_g2

0x774d,	// (0x00036b52) fep_vkb_top_pane_g3_ParamLimits

0x774d,	// (0x00036b52) fep_vkb_top_pane_g3

0x0003,

0xfb3b,	// (0x0003ef40) fep_vkb_top_pane_g_ParamLimits

0xfb3b,	// (0x0003ef40) fep_vkb_top_pane_g

0x776b,	// (0x00036b70) fep_vkb_top_text_pane_ParamLimits

0x776b,	// (0x00036b70) fep_vkb_top_text_pane

0xdecc,	// (0x0003d2d1) fep_vkb_side_pane_g1_ParamLimits

0xdecc,	// (0x0003d2d1) fep_vkb_side_pane_g1

0x77c5,	// (0x00036bca) grid_vkb_side_pane_ParamLimits

0x77c5,	// (0x00036bca) grid_vkb_side_pane

0x18bd,	// (0x00030cc2) bg_popup_fep_shadow_pane_g2

0x18c6,	// (0x00030ccb) bg_popup_fep_shadow_pane_g3

0x18ce,	// (0x00030cd3) bg_popup_fep_shadow_pane_g4

0x18d7,	// (0x00030cdc) bg_popup_fep_shadow_pane_g5

0x18e1,	// (0x00030ce6) bg_popup_fep_shadow_pane_g6

0x18e9,	// (0x00030cee) bg_popup_fep_shadow_pane_g7

0x34bc,	// (0x000328c1) bg_popup_fep_shadow_pane_g8

0x781c,	// (0x00036c21) grid_vkb_keypad_number_pane_ParamLimits

0x781c,	// (0x00036c21) grid_vkb_keypad_number_pane

0x782c,	// (0x00036c31) grid_vkb_keypad_pane_ParamLimits

0x782c,	// (0x00036c31) grid_vkb_keypad_pane

0x7852,	// (0x00036c57) fep_vkb_bottom_pane_g1_ParamLimits

0x7852,	// (0x00036c57) fep_vkb_bottom_pane_g1

0x787b,	// (0x00036c80) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x787b,	// (0x00036c80) grid_vkb_keypad_bottom_left_pane

0x7890,	// (0x00036c95) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7890,	// (0x00036c95) grid_vkb_keypad_bottom_right_pane

0x78a5,	// (0x00036caa) fep_vkb_top_text_pane_g1

0xdf13,	// (0x0003d318) fep_vkb_top_text_pane_t1

0xdf25,	// (0x0003d32a) cell_vkb_side_pane_ParamLimits

0xdf25,	// (0x0003d32a) cell_vkb_side_pane

0x74cb,	// (0x000368d0) cell_vkb_side_pane_g1

0x7914,	// (0x00036d19) cell_vkb_keypad_pane_ParamLimits

0x7914,	// (0x00036d19) cell_vkb_keypad_pane

0x7989,	// (0x00036d8e) cell_vkb_keypad_pane_g1

0x0008,

0xfb68,	// (0x0003ef6d) bg_popup_fep_shadow_pane_g

0x18fb,	// (0x00030d00) cell_hwr_side_pane_g1

0x18fb,	// (0x00030d00) cell_hwr_side_pane_g2

0x7993,	// (0x00036d98) cell_vkb_keypad_pane_t1

0xdf3b,	// (0x0003d340) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf3b,	// (0x0003d340) cell_vkb_keypad_bottom_left_pane

0xdf50,	// (0x0003d355) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf50,	// (0x0003d355) cell_vkb_keypad_bottom_right_pane

0x74cb,	// (0x000368d0) cell_vkb_keypad_bottom_left_pane_g1

0x74cb,	// (0x000368d0) cell_vkb_keypad_bottom_right_pane_g1

0x79f7,	// (0x00036dfc) cell_vkb_keypad_number_pane_ParamLimits

0x79f7,	// (0x00036dfc) cell_vkb_keypad_number_pane

0x7a16,	// (0x00036e1b) cell_vkb_keypad_number_pane_g1

0x7a20,	// (0x00036e25) cell_vkb_keypad_number_pane_g2

0x7a29,	// (0x00036e2e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5a,	// (0x0003ef5f) cell_vkb_keypad_number_pane_g

0x7993,	// (0x00036d98) cell_vkb_keypad_number_pane_t1

0x7a4d,	// (0x00036e52) fep_vkb_candidate_pane_g1

0x0001,

0xfb7b,	// (0x0003ef80) cell_hwr_side_pane_g

0x7a66,	// (0x00036e6b) cell_hwr_side_pane_t1

0x1905,	// (0x00030d0a) cell_hwr_side_pane_t1_copy1

0x1913,	// (0x00030d18) cell_hwr_candidate_pane_g1

0x1942,	// (0x00030d47) cell_hwr_candidate_pane_t1

0x74cb,	// (0x000368d0) cell_vkb_candidate_pane_g2

0x7aaa,	// (0x00036eaf) cell_vkb_candidate_pane_t1

0x16ae,	// (0x00030ab3) bg_popup_fep_shadow_pane_ParamLimits

0x16ae,	// (0x00030ab3) bg_popup_fep_shadow_pane

0x1763,	// (0x00030b68) bg_fep_hwr_top_pane_g4

0x755f,	// (0x00036964) bg_hwr_side_pane_g1_ParamLimits

0x755f,	// (0x00036964) bg_hwr_side_pane_g1

0xbe79,	// (0x0003b27e) cell_hwr_side_pane_ParamLimits

0xbe79,	// (0x0003b27e) cell_hwr_side_pane

0x180f,	// (0x00030c14) fep_hwr_write_pane_g1_ParamLimits

0x180f,	// (0x00030c14) fep_hwr_write_pane_g1

0x181c,	// (0x00030c21) fep_hwr_write_pane_g2_ParamLimits

0x181c,	// (0x00030c21) fep_hwr_write_pane_g2

0x1829,	// (0x00030c2e) fep_hwr_write_pane_g3_ParamLimits

0x1829,	// (0x00030c2e) fep_hwr_write_pane_g3

0xbe99,	// (0x0003b29e) fep_hwr_write_pane_g4_ParamLimits

0xbe99,	// (0x0003b29e) fep_hwr_write_pane_g4

0x0005,

0xfb27,	// (0x0003ef2c) fep_hwr_write_pane_g_ParamLimits

0xfb27,	// (0x0003ef2c) fep_hwr_write_pane_g

0x1763,	// (0x00030b68) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1763,	// (0x00030b68) bg_fep_hwr_candidate_pane_g2

0x184c,	// (0x00030c51) cell_hwr_candidate_pane_ParamLimits

0x184c,	// (0x00030c51) cell_hwr_candidate_pane

0x188e,	// (0x00030c93) fep_hwr_candidate_pane_g1_ParamLimits

0x75bf,	// (0x000369c4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x75bf,	// (0x000369c4) bg_popup_fep_shadow_pane_cp2

0x775d,	// (0x00036b62) fep_vkb_top_pane_g4_ParamLimits

0x775d,	// (0x00036b62) fep_vkb_top_pane_g4

0x77a3,	// (0x00036ba8) fep_vkb_side_pane_g2_ParamLimits

0x77a3,	// (0x00036ba8) fep_vkb_side_pane_g2

0xb818,	// (0x0003ac1d) list_setting_pane_t4_ParamLimits

0xb818,	// (0x0003ac1d) list_setting_pane_t4

0xb8b2,	// (0x0003acb7) list_setting_number_pane_t5_ParamLimits

0xb8b2,	// (0x0003acb7) list_setting_number_pane_t5

0xc9e7,	// (0x0003bdec) list_double_heading_pane_cp2_ParamLimits

0xc9e7,	// (0x0003bdec) list_double_heading_pane_cp2

0x3457,	// (0x0003285c) list_double_heading_pane_g1_cp2_ParamLimits

0x3457,	// (0x0003285c) list_double_heading_pane_g1_cp2

0x3463,	// (0x00032868) list_double_heading_pane_g2_cp2_ParamLimits

0x3463,	// (0x00032868) list_double_heading_pane_g2_cp2

0x7ab8,	// (0x00036ebd) list_double_heading_pane_t1_cp2_ParamLimits

0x7ab8,	// (0x00036ebd) list_double_heading_pane_t1_cp2

0x7ace,	// (0x00036ed3) list_double_heading_pane_t2_cp2_ParamLimits

0x7ace,	// (0x00036ed3) list_double_heading_pane_t2_cp2

0x237f,	// (0x00031784) aid_value_unit2

0x0232,	// (0x0002f637) popup_preview_fixed_window

0x2e5a,	// (0x0003225f) bg_popup_preview_window_pane_cp02

0x7ae0,	// (0x00036ee5) list_preview_fixed_pane

0x7b26,	// (0x00036f2b) list_empty_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_empty_pane_fp

0x7b26,	// (0x00036f2b) list_single_cale_day_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_single_cale_day_pane_fp

0x7b26,	// (0x00036f2b) list_single_graphic_heading_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_single_graphic_heading_pane_fp

0x7b26,	// (0x00036f2b) list_single_graphic_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_single_graphic_pane_fp

0x7b26,	// (0x00036f2b) list_single_heading_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_single_heading_pane_fp

0x7b26,	// (0x00036f2b) list_single_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_single_pane_fp

0x7b3b,	// (0x00036f40) list_single_pane_fp_g1_ParamLimits

0x7b3b,	// (0x00036f40) list_single_pane_fp_g1

0x298a,	// (0x00031d8f) list_single_pane_fp_g2_ParamLimits

0x298a,	// (0x00031d8f) list_single_pane_fp_g2

0x2996,	// (0x00031d9b) list_single_pane_fp_g3_ParamLimits

0x2996,	// (0x00031d9b) list_single_pane_fp_g3

0x7b47,	// (0x00036f4c) list_single_pane_fp_g4_ParamLimits

0x7b47,	// (0x00036f4c) list_single_pane_fp_g4

0x0003,

0xfb8e,	// (0x0003ef93) list_single_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003ef93) list_single_pane_fp_g

0x29aa,	// (0x00031daf) list_single_pane_fp_t1_ParamLimits

0x29aa,	// (0x00031daf) list_single_pane_fp_t1

0x29c1,	// (0x00031dc6) list_single_graphic_pane_fp_g1_ParamLimits

0x29c1,	// (0x00031dc6) list_single_graphic_pane_fp_g1

0x7b3b,	// (0x00036f40) list_single_graphic_pane_fp_g2_ParamLimits

0x7b3b,	// (0x00036f40) list_single_graphic_pane_fp_g2

0x298a,	// (0x00031d8f) list_single_graphic_pane_fp_g3_ParamLimits

0x298a,	// (0x00031d8f) list_single_graphic_pane_fp_g3

0x2996,	// (0x00031d9b) list_single_graphic_pane_fp_g4_ParamLimits

0x2996,	// (0x00031d9b) list_single_graphic_pane_fp_g4

0x7b47,	// (0x00036f4c) list_single_graphic_pane_fp_g5_ParamLimits

0x7b47,	// (0x00036f4c) list_single_graphic_pane_fp_g5

0x0004,

0xfb97,	// (0x0003ef9c) list_single_graphic_pane_fp_g_ParamLimits

0xfb97,	// (0x0003ef9c) list_single_graphic_pane_fp_g

0x29cd,	// (0x00031dd2) list_single_graphic_pane_fp_t1_ParamLimits

0x29cd,	// (0x00031dd2) list_single_graphic_pane_fp_t1

0x29c1,	// (0x00031dc6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x29c1,	// (0x00031dc6) list_single_graphic_heading_pane_fp_g1

0x7b3b,	// (0x00036f40) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b3b,	// (0x00036f40) list_single_graphic_heading_pane_fp_g2

0x298a,	// (0x00031d8f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x298a,	// (0x00031d8f) list_single_graphic_heading_pane_fp_g3

0x2996,	// (0x00031d9b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2996,	// (0x00031d9b) list_single_graphic_heading_pane_fp_g4

0x7b47,	// (0x00036f4c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b47,	// (0x00036f4c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb97,	// (0x0003ef9c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb97,	// (0x0003ef9c) list_single_graphic_heading_pane_fp_g

0x29e3,	// (0x00031de8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x29e3,	// (0x00031de8) list_single_graphic_heading_pane_fp_t1

0x29f9,	// (0x00031dfe) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x29f9,	// (0x00031dfe) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba2,	// (0x0003efa7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba2,	// (0x0003efa7) list_single_graphic_heading_pane_fp_t

0x2a0b,	// (0x00031e10) list_single_cale_day_pane_fp_g1_ParamLimits

0x2a0b,	// (0x00031e10) list_single_cale_day_pane_fp_g1

0x7b53,	// (0x00036f58) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b53,	// (0x00036f58) list_single_cale_day_pane_fp_g2

0x2a43,	// (0x00031e48) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a43,	// (0x00031e48) list_single_cale_day_pane_fp_g3

0x2a6b,	// (0x00031e70) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a6b,	// (0x00031e70) list_single_cale_day_pane_fp_g4

0x2a8f,	// (0x00031e94) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a8f,	// (0x00031e94) list_single_cale_day_pane_fp_g5

0x0004,

0xfba7,	// (0x0003efac) list_single_cale_day_pane_fp_g_ParamLimits

0xfba7,	// (0x0003efac) list_single_cale_day_pane_fp_g

0x2ab3,	// (0x00031eb8) list_single_cale_day_pane_fp_t1_ParamLimits

0x2ab3,	// (0x00031eb8) list_single_cale_day_pane_fp_t1

0x2ad9,	// (0x00031ede) list_single_cale_day_pane_fp_t2_ParamLimits

0x2ad9,	// (0x00031ede) list_single_cale_day_pane_fp_t2

0x2af2,	// (0x00031ef7) list_single_cale_day_pane_fp_t3_ParamLimits

0x2af2,	// (0x00031ef7) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb2,	// (0x0003efb7) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb2,	// (0x0003efb7) list_single_cale_day_pane_fp_t

0x7b3b,	// (0x00036f40) list_empty_pane_fp_g1_ParamLimits

0x7b3b,	// (0x00036f40) list_empty_pane_fp_g1

0x2b0b,	// (0x00031f10) list_empty_pane_fp_t1

0x2b19,	// (0x00031f1e) list_empty_pane_fp_t2

0x0001,

0xfbb9,	// (0x0003efbe) list_empty_pane_fp_t

0x7b3b,	// (0x00036f40) list_single_heading_pane_fp_g1_ParamLimits

0x7b3b,	// (0x00036f40) list_single_heading_pane_fp_g1

0x298a,	// (0x00031d8f) list_single_heading_pane_fp_g2_ParamLimits

0x298a,	// (0x00031d8f) list_single_heading_pane_fp_g2

0x2996,	// (0x00031d9b) list_single_heading_pane_fp_g3_ParamLimits

0x2996,	// (0x00031d9b) list_single_heading_pane_fp_g3

0x0002,

0xfbbe,	// (0x0003efc3) list_single_heading_pane_fp_g_ParamLimits

0xfbbe,	// (0x0003efc3) list_single_heading_pane_fp_g

0x2b27,	// (0x00031f2c) list_single_heading_pane_fp_t1_ParamLimits

0x2b27,	// (0x00031f2c) list_single_heading_pane_fp_t1

0x2b39,	// (0x00031f3e) list_single_heading_pane_fp_t2_ParamLimits

0x2b39,	// (0x00031f3e) list_single_heading_pane_fp_t2

0x0001,

0xfbc5,	// (0x0003efca) list_single_heading_pane_fp_t_ParamLimits

0xfbc5,	// (0x0003efca) list_single_heading_pane_fp_t

0x3649,	// (0x00032a4e) aid_size_cell_fast

0x2dca,	// (0x000321cf) soft_indicator_pane_cp1_t1

0x3686,	// (0x00032a8b) cell_app_pane_cp2_ParamLimits

0x3686,	// (0x00032a8b) cell_app_pane_cp2

0x16d0,	// (0x00030ad5) fep_hwr_candidate_drop_down_list_pane

0x18a8,	// (0x00030cad) fep_hwr_candidate_pane_g3_ParamLimits

0x18a8,	// (0x00030cad) fep_hwr_candidate_pane_g3

0xe32e,	// (0x0003d733) fep_hwr_candidate_pane_g4_ParamLimits

0xe32e,	// (0x0003d733) fep_hwr_candidate_pane_g4

0x0002,

0xfb34,	// (0x0003ef39) fep_hwr_candidate_pane_g_ParamLimits

0xfb34,	// (0x0003ef39) fep_hwr_candidate_pane_g

0x7644,	// (0x00036a49) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7644,	// (0x00036a49) fep_vkb_candidate_drop_down_list_pane

0x7a55,	// (0x00036e5a) fep_vkb_candidate_pane_g3

0x7a5d,	// (0x00036e62) fep_vkb_candidate_pane_g4

0x0002,

0xfb61,	// (0x0003ef66) fep_vkb_candidate_pane_g

0x1913,	// (0x00030d18) cell_hwr_candidate_pane_g1_ParamLimits

0x1921,	// (0x00030d26) cell_hwr_candidate_pane_g3_ParamLimits

0x1921,	// (0x00030d26) cell_hwr_candidate_pane_g3

0x9680,	// (0x00038a85) cell_hwr_candidate_pane_g4_ParamLimits

0x9680,	// (0x00038a85) cell_hwr_candidate_pane_g4

0x0002,

0xfb80,	// (0x0003ef85) cell_hwr_candidate_pane_g_ParamLimits

0xfb80,	// (0x0003ef85) cell_hwr_candidate_pane_g

0x7a74,	// (0x00036e79) cell_vkb_candidate_pane_g3_ParamLimits

0x7a74,	// (0x00036e79) cell_vkb_candidate_pane_g3

0x7a8f,	// (0x00036e94) cell_vkb_candidate_pane_g4_ParamLimits

0x7a8f,	// (0x00036e94) cell_vkb_candidate_pane_g4

0x7b5f,	// (0x00036f64) cell_app_pane_cp2_g1_ParamLimits

0x7b5f,	// (0x00036f64) cell_app_pane_cp2_g1

0x7b7d,	// (0x00036f82) cell_app_pane_cp2_g2_ParamLimits

0x7b7d,	// (0x00036f82) cell_app_pane_cp2_g2

0x0001,

0xfbca,	// (0x0003efcf) cell_app_pane_cp2_g_ParamLimits

0xfbca,	// (0x0003efcf) cell_app_pane_cp2_g

0x7b89,	// (0x00036f8e) cell_app_pane_cp2_t1_ParamLimits

0x7b89,	// (0x00036f8e) cell_app_pane_cp2_t1

0x343d,	// (0x00032842) grid_highlight_pane_cp1_ParamLimits

0x343d,	// (0x00032842) grid_highlight_pane_cp1

0x1960,	// (0x00030d65) cell_hwr_candidate_pane_cp1_ParamLimits

0x1960,	// (0x00030d65) cell_hwr_candidate_pane_cp1

0x1913,	// (0x00030d18) fep_hwr_candidate_drop_down_list_pane_g1

0x197f,	// (0x00030d84) fep_hwr_candidate_drop_down_list_pane_g2

0x198c,	// (0x00030d91) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0003efd4) fep_hwr_candidate_drop_down_list_pane_g

0x1999,	// (0x00030d9e) fep_hwr_candidate_drop_down_list_scroll_pane

0x19a2,	// (0x00030da7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x19a2,	// (0x00030da7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x19af,	// (0x00030db4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x19af,	// (0x00030db4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x19bc,	// (0x00030dc1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x19bc,	// (0x00030dc1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x19c9,	// (0x00030dce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x19c9,	// (0x00030dce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x19e4,	// (0x00030de9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x19e4,	// (0x00030de9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x19ff,	// (0x00030e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x19ff,	// (0x00030e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a1a,	// (0x00030e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a1a,	// (0x00030e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1a35,	// (0x00030e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1a35,	// (0x00030e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0003efdb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0003efdb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7b9b,	// (0x00036fa0) cell_vkb_candidate_pane_cp1_ParamLimits

0x7b9b,	// (0x00036fa0) cell_vkb_candidate_pane_cp1

0x775d,	// (0x00036b62) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x775d,	// (0x00036b62) fep_vkb_candidate_drop_down_list_pane_g1

0x7bbb,	// (0x00036fc0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7bbb,	// (0x00036fc0) fep_vkb_candidate_drop_down_list_pane_g2

0x7bc8,	// (0x00036fcd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7bc8,	// (0x00036fcd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe7,	// (0x0003efec) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe7,	// (0x0003efec) fep_vkb_candidate_drop_down_list_pane_g

0x7bd5,	// (0x00036fda) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bd5,	// (0x00036fda) fep_vkb_candidate_drop_down_list_scroll_pane

0x7be2,	// (0x00036fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7be2,	// (0x00036fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7bef,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7bef,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7bfb,	// (0x00037000) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7bfb,	// (0x00037000) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c07,	// (0x0003700c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c07,	// (0x0003700c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c28,	// (0x0003702d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c28,	// (0x0003702d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c49,	// (0x0003704e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c49,	// (0x0003704e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c6a,	// (0x0003706f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c6a,	// (0x0003706f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c8b,	// (0x00037090) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c8b,	// (0x00037090) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbee,	// (0x0003eff3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbee,	// (0x0003eff3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb4e4,	// (0x0003a8e9) title_pane_g1_ParamLimits

0xc4f0,	// (0x0003b8f5) title_pane_g2_ParamLimits

0xf56a,	// (0x0003e96f) title_pane_g_ParamLimits

0x3a93,	// (0x00032e98) aid_call2_pane

0x3a9b,	// (0x00032ea0) aid_call_pane

0x3aa3,	// (0x00032ea8) popup_clock_analogue_window_g1

0x3aa3,	// (0x00032ea8) popup_clock_analogue_window_g2

0x0cdc,	// (0x000300e1) popup_clock_analogue_window_g3

0x0ce5,	// (0x000300ea) popup_clock_analogue_window_g4

0x23a1,	// (0x000317a6) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0003eb19) popup_clock_analogue_window_g

0x0ced,	// (0x000300f2) popup_clock_analogue_window_t1

0x0cfb,	// (0x00030100) clock_digital_number_pane_ParamLimits

0x0cfb,	// (0x00030100) clock_digital_number_pane

0x0d07,	// (0x0003010c) clock_digital_number_pane_cp02_ParamLimits

0x0d07,	// (0x0003010c) clock_digital_number_pane_cp02

0x0d13,	// (0x00030118) clock_digital_number_pane_cp03_ParamLimits

0x0d13,	// (0x00030118) clock_digital_number_pane_cp03

0x0d1f,	// (0x00030124) clock_digital_number_pane_cp04_ParamLimits

0x0d1f,	// (0x00030124) clock_digital_number_pane_cp04

0x0d2b,	// (0x00030130) clock_digital_separator_pane_ParamLimits

0x0d2b,	// (0x00030130) clock_digital_separator_pane

0x0d37,	// (0x0003013c) popup_clock_digital_window_t1_ParamLimits

0x0d37,	// (0x0003013c) popup_clock_digital_window_t1

0x23a1,	// (0x000317a6) clock_digital_number_pane_g1

0x23a1,	// (0x000317a6) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0003eb24) clock_digital_number_pane_g

0x23a1,	// (0x000317a6) clock_digital_separator_pane_g1

0x23a1,	// (0x000317a6) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0003eb24) clock_digital_separator_pane_g

0xd265,	// (0x0003c66a) aid_fill_nsta_ParamLimits

0xd394,	// (0x0003c799) indicator_nsta_pane_ParamLimits

0x4c75,	// (0x0003407a) popup_clock_analogue_window

0x4c75,	// (0x0003407a) popup_clock_digital_window

0x360a,	// (0x00032a0f) grid_indicator_nsta_pane_ParamLimits

0x6eaa,	// (0x000362af) clock_nsta_pane_t2

0x0001,

0xfab4,	// (0x0003eeb9) clock_nsta_pane_t

0x0ca0,	// (0x000300a5) aid_size_max_handle

0xba3f,	// (0x0003ae44) aid_size_min_handle

0x40a2,	// (0x000334a7) editor_scroll_pane

0x7ca6,	// (0x000370ab) ex_editor_pane

0x35b7,	// (0x000329bc) scroll_pane_cp13

0x33dc,	// (0x000327e1) scroll_pane_cp14

0x3acd,	// (0x00032ed2) scroll_pane_cp36

0xc9f6,	// (0x0003bdfb) list_single_graphic_hl_pane_cp2_ParamLimits

0xc9f6,	// (0x0003bdfb) list_single_graphic_hl_pane_cp2

0xbe4f,	// (0x0003b254) list_single_graphic_hl_pane_ParamLimits

0xbe4f,	// (0x0003b254) list_single_graphic_hl_pane

0x2b4f,	// (0x00031f54) aid_size_min_hl_cp1

0x7cae,	// (0x000370b3) list_highlight_pane_cp34_ParamLimits

0x7cae,	// (0x000370b3) list_highlight_pane_cp34

0x7cbf,	// (0x000370c4) list_single_graphic_hl_pane_g1_ParamLimits

0x7cbf,	// (0x000370c4) list_single_graphic_hl_pane_g1

0xbeae,	// (0x0003b2b3) list_single_graphic_hl_pane_g2_ParamLimits

0xbeae,	// (0x0003b2b3) list_single_graphic_hl_pane_g2

0xbeae,	// (0x0003b2b3) list_single_graphic_hl_pane_g3_ParamLimits

0xbeae,	// (0x0003b2b3) list_single_graphic_hl_pane_g3

0xbeba,	// (0x0003b2bf) list_single_graphic_hl_pane_g4_ParamLimits

0xbeba,	// (0x0003b2bf) list_single_graphic_hl_pane_g4

0xbec6,	// (0x0003b2cb) list_single_graphic_hl_pane_g5_ParamLimits

0xbec6,	// (0x0003b2cb) list_single_graphic_hl_pane_g5

0x0004,

0xfbff,	// (0x0003f004) list_single_graphic_hl_pane_g_ParamLimits

0xfbff,	// (0x0003f004) list_single_graphic_hl_pane_g

0xbeda,	// (0x0003b2df) list_single_graphic_hl_pane_t1_ParamLimits

0xbeda,	// (0x0003b2df) list_single_graphic_hl_pane_t1

0x7ccc,	// (0x000370d1) aid_size_min_hl_cp2

0x7cd5,	// (0x000370da) list_highlight_pane_cp34_cp2_ParamLimits

0x7cd5,	// (0x000370da) list_highlight_pane_cp34_cp2

0x7cbf,	// (0x000370c4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7cbf,	// (0x000370c4) list_single_graphic_hl_pane_g1_cp2

0x7ce2,	// (0x000370e7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7ce2,	// (0x000370e7) list_single_graphic_hl_pane_g2_cp2

0x7cee,	// (0x000370f3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7cee,	// (0x000370f3) list_single_graphic_hl_pane_g3_cp2

0x5ce8,	// (0x000350ed) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5ce8,	// (0x000350ed) list_single_graphic_hl_pane_g4_cp2

0x7cfc,	// (0x00037101) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7cfc,	// (0x00037101) list_single_graphic_hl_pane_g5_cp2

0xbb27,	// (0x0003af2c) control_pane_g4_ParamLimits

0xbb27,	// (0x0003af2c) control_pane_g4

0x4408,	// (0x0003380d) bg_popup_sub_pane_cp10_ParamLimits

0x74d5,	// (0x000368da) list_choice_list_pane_ParamLimits

0x74e4,	// (0x000368e9) scroll_pane_cp23

0x2e5a,	// (0x0003225f) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ae0,	// (0x00036ee5) list_preview_fixed_pane_ParamLimits

0x7af6,	// (0x00036efb) list_preview_fixed_pane_cp_ParamLimits

0x7af6,	// (0x00036efb) list_preview_fixed_pane_cp

0x7b02,	// (0x00036f07) popup_preview_fixed_window_g1_ParamLimits

0x7b02,	// (0x00036f07) popup_preview_fixed_window_g1

0x7b0e,	// (0x00036f13) popup_preview_fixed_window_g2_ParamLimits

0x7b0e,	// (0x00036f13) popup_preview_fixed_window_g2

0x0002,

0xfb87,	// (0x0003ef8c) popup_preview_fixed_window_g_ParamLimits

0xfb87,	// (0x0003ef8c) popup_preview_fixed_window_g

0x0c14,	// (0x00030019) aid_navi_side_left_pane_ParamLimits

0x0c29,	// (0x0003002e) aid_navi_side_right_pane_ParamLimits

0x0c41,	// (0x00030046) navi_icon_pane_stacon_ParamLimits

0x0c55,	// (0x0003005a) navi_navi_pane_stacon_ParamLimits

0x0c41,	// (0x00030046) navi_text_pane_stacon_ParamLimits

0x2397,	// (0x0003179c) main_text_info_pane

0x7d26,	// (0x0003712b) listscroll_text_info_pane

0x7d2e,	// (0x00037133) list_text_info_pane_ParamLimits

0x7d2e,	// (0x00037133) list_text_info_pane

0x7d3d,	// (0x00037142) scroll_pane_cp24_ParamLimits

0x7d3d,	// (0x00037142) scroll_pane_cp24

0xdf6b,	// (0x0003d370) list_text_info_pane_t1_ParamLimits

0xdf6b,	// (0x0003d370) list_text_info_pane_t1

0xcbff,	// (0x0003c004) popup_fast_swap2_window_ParamLimits

0xcbff,	// (0x0003c004) popup_fast_swap2_window

0x7d8c,	// (0x00037191) aid_size_cell_fast2

0x2397,	// (0x0003179c) bg_popup_window_pane_cp17

0x5350,	// (0x00034755) heading_pane_cp2

0x30a6,	// (0x000324ab) listscroll_fast2_pane

0x7d96,	// (0x0003719b) grid_fast2_pane

0x7da0,	// (0x000371a5) listscroll_fast2_pane_g1

0x7da8,	// (0x000371ad) listscroll_fast2_pane_g2

0x0001,

0xfc0a,	// (0x0003f00f) listscroll_fast2_pane_g

0x35b7,	// (0x000329bc) scroll_pane_cp26

0x7db2,	// (0x000371b7) cell_fast2_pane_ParamLimits

0x7db2,	// (0x000371b7) cell_fast2_pane

0x7dc7,	// (0x000371cc) cell_fast2_pane_g1

0x7dd0,	// (0x000371d5) cell_fast2_pane_g2

0x7dd9,	// (0x000371de) cell_fast2_pane_g3

0x0002,

0xfc0f,	// (0x0003f014) cell_fast2_pane_g

0x3199,	// (0x0003259e) grid_highlight_pane_cp9

0x31ae,	// (0x000325b3) main_eswt_pane_ParamLimits

0x31ae,	// (0x000325b3) main_eswt_pane

0x7d52,	// (0x00037157) list_single_text_info_pane

0x7de1,	// (0x000371e6) eswt_ctrl_button_pane

0x7de1,	// (0x000371e6) eswt_ctrl_canvas_pane

0x7de9,	// (0x000371ee) eswt_ctrl_combo_pane

0x7de1,	// (0x000371e6) eswt_ctrl_default_pane

0x7de1,	// (0x000371e6) eswt_ctrl_label_pane

0x7df1,	// (0x000371f6) eswt_ctrl_wait_pane

0x7df9,	// (0x000371fe) eswt_shell_pane

0x2397,	// (0x0003179c) listscroll_eswt_app_pane

0x7e19,	// (0x0003721e) popup_eswt_tasktip_window_ParamLimits

0x7e19,	// (0x0003721e) popup_eswt_tasktip_window

0x4f8e,	// (0x00034393) bg_popup_window_pane_cp18

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_ParamLimits

0x7e2a,	// (0x0003722f) eswt_control_pane_g1

0x7e37,	// (0x0003723c) eswt_control_pane_g2_ParamLimits

0x7e37,	// (0x0003723c) eswt_control_pane_g2

0x7e44,	// (0x00037249) eswt_control_pane_g3_ParamLimits

0x7e44,	// (0x00037249) eswt_control_pane_g3

0x7e51,	// (0x00037256) eswt_control_pane_g4_ParamLimits

0x7e51,	// (0x00037256) eswt_control_pane_g4

0x0003,

0xfc16,	// (0x0003f01b) eswt_control_pane_g_ParamLimits

0xfc16,	// (0x0003f01b) eswt_control_pane_g

0x343d,	// (0x00032842) bg_button_pane_ParamLimits

0x343d,	// (0x00032842) bg_button_pane

0x31ae,	// (0x000325b3) common_borders_pane_copy2_ParamLimits

0x31ae,	// (0x000325b3) common_borders_pane_copy2

0x7e5e,	// (0x00037263) control_button_pane_g1_ParamLimits

0x7e5e,	// (0x00037263) control_button_pane_g1

0x7e6a,	// (0x0003726f) control_button_pane_g2_ParamLimits

0x7e6a,	// (0x0003726f) control_button_pane_g2

0x7e76,	// (0x0003727b) control_button_pane_g3_ParamLimits

0x7e76,	// (0x0003727b) control_button_pane_g3

0x0002,

0xfc1f,	// (0x0003f024) control_button_pane_g_ParamLimits

0xfc1f,	// (0x0003f024) control_button_pane_g

0x7e8a,	// (0x0003728f) control_button_pane_t1

0x7e98,	// (0x0003729d) control_button_pane_t2

0x0001,

0xfc26,	// (0x0003f02b) control_button_pane_t

0x4e9e,	// (0x000342a3) bg_button_pane_g1

0x4eae,	// (0x000342b3) bg_button_pane_g2

0x4ea6,	// (0x000342ab) bg_button_pane_g3

0x4ebe,	// (0x000342c3) bg_button_pane_g4

0x4eb6,	// (0x000342bb) bg_button_pane_g5

0x4ec6,	// (0x000342cb) bg_button_pane_g6

0x4ece,	// (0x000342d3) bg_button_pane_g7

0x4ede,	// (0x000342e3) bg_button_pane_g8

0x4ed6,	// (0x000342db) bg_button_pane_g9

0x0008,

0xf872,	// (0x0003ec77) bg_button_pane_g

0x7490,	// (0x00036895) common_borders_pane_ParamLimits

0x7490,	// (0x00036895) common_borders_pane

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy1_ParamLimits

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy1

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy1_ParamLimits

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy1

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy1_ParamLimits

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy1

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy1_ParamLimits

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy1

0x74cb,	// (0x000368d0) bg_eswt_ctrl_canvas_pane_g1

0x7490,	// (0x00036895) common_borders_pane_cp2_ParamLimits

0x7490,	// (0x00036895) common_borders_pane_cp2

0x7490,	// (0x00036895) common_borders_pane_cp3_ParamLimits

0x7490,	// (0x00036895) common_borders_pane_cp3

0x7ea6,	// (0x000372ab) separator_horizontal_pane

0x7eae,	// (0x000372b3) separator_vertical_pane

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy2_ParamLimits

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy2

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy2_ParamLimits

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy2

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy2_ParamLimits

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy2

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy2_ParamLimits

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy2

0x2397,	// (0x0003179c) common_borders_pane_cp4

0x7eb7,	// (0x000372bc) separator_horizontal_pane_g1

0x7ec0,	// (0x000372c5) separator_horizontal_pane_g2

0x7ec9,	// (0x000372ce) separator_horizontal_pane_g3

0x0002,

0xfc2b,	// (0x0003f030) separator_horizontal_pane_g

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy3_ParamLimits

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy3

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy3_ParamLimits

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy3

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy3_ParamLimits

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy3

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy3_ParamLimits

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy3

0x2397,	// (0x0003179c) common_borders_pane_cp5

0x7ed2,	// (0x000372d7) separator_vertical_pane_g1

0x7edb,	// (0x000372e0) separator_vertical_pane_g2

0x7ee4,	// (0x000372e9) separator_vertical_pane_g3

0x0002,

0xfc32,	// (0x0003f037) separator_vertical_pane_g

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy4_ParamLimits

0x7e2a,	// (0x0003722f) eswt_control_pane_g1_copy4

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy4_ParamLimits

0x7e37,	// (0x0003723c) eswt_control_pane_g2_copy4

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy4_ParamLimits

0x7e44,	// (0x00037249) eswt_control_pane_g3_copy4

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy4_ParamLimits

0x7e51,	// (0x00037256) eswt_control_pane_g4_copy4

0xdf86,	// (0x0003d38b) eswt_ctrl_combo_button_pane

0xdf8e,	// (0x0003d393) eswt_ctrl_input_pane

0xdf96,	// (0x0003d39b) popup_choice_list_window_cp70

0xdf9e,	// (0x0003d3a3) eswt_ctrl_input_pane_t1

0x2397,	// (0x0003179c) input_focus_pane_cp70

0x7490,	// (0x00036895) bg_button_pane_cp70_ParamLimits

0x7490,	// (0x00036895) bg_button_pane_cp70

0xdfac,	// (0x0003d3b1) eswt_ctrl_combo_button_pane_g1

0x7f1b,	// (0x00037320) wait_bar_pane_cp70

0x4f8e,	// (0x00034393) bg_popup_window_pane_cp70_ParamLimits

0x4f8e,	// (0x00034393) bg_popup_window_pane_cp70

0x7f23,	// (0x00037328) popup_eswt_tasktip_window_t1

0x7f39,	// (0x0003733e) wait_bar_pane_cp71_ParamLimits

0x7f39,	// (0x0003733e) wait_bar_pane_cp71

0x7f45,	// (0x0003734a) grid_eswt_app_pane

0x38d5,	// (0x00032cda) scroll_pane_cp70

0xdfb4,	// (0x0003d3b9) cell_eswt_app_pane_ParamLimits

0xdfb4,	// (0x0003d3b9) cell_eswt_app_pane

0xdfde,	// (0x0003d3e3) cell_eswt_app_pane_g1_ParamLimits

0xdfde,	// (0x0003d3e3) cell_eswt_app_pane_g1

0xe00d,	// (0x0003d412) cell_eswt_app_pane_g2_ParamLimits

0xe00d,	// (0x0003d412) cell_eswt_app_pane_g2

0x0001,

0xfc39,	// (0x0003f03e) cell_eswt_app_pane_g_ParamLimits

0xfc39,	// (0x0003f03e) cell_eswt_app_pane_g

0xe036,	// (0x0003d43b) cell_eswt_app_pane_t1_ParamLimits

0xe036,	// (0x0003d43b) cell_eswt_app_pane_t1

0x8008,	// (0x0003740d) grid_highlight_pane_cp70_ParamLimits

0x8008,	// (0x0003740d) grid_highlight_pane_cp70

0x3f55,	// (0x0003335a) set_content_pane_g1

0x434e,	// (0x00033753) status_small_volume_pane

0x1a50,	// (0x00030e55) status_small_volume_pane_g1

0x1a58,	// (0x00030e5d) volume_small2_pane

0x1a61,	// (0x00030e66) volume_small2_pane_g1

0x1a6a,	// (0x00030e6f) volume_small2_pane_g2

0x1a73,	// (0x00030e78) volume_small2_pane_g3

0x1a7c,	// (0x00030e81) volume_small2_pane_g4

0x1a85,	// (0x00030e8a) volume_small2_pane_g5

0x1a8e,	// (0x00030e93) volume_small2_pane_g6

0x1a97,	// (0x00030e9c) volume_small2_pane_g7

0x1aa0,	// (0x00030ea5) volume_small2_pane_g8

0x1aa9,	// (0x00030eae) volume_small2_pane_g9

0x1ab2,	// (0x00030eb7) volume_small2_pane_g10

0x0009,

0xfc3e,	// (0x0003f043) volume_small2_pane_g

0x78a5,	// (0x00036caa) fep_vkb_top_text_pane_g1_ParamLimits

0xdf13,	// (0x0003d318) fep_vkb_top_text_pane_t1_ParamLimits

0x7b1a,	// (0x00036f1f) popup_preview_fixed_window_g3_ParamLimits

0x7b1a,	// (0x00036f1f) popup_preview_fixed_window_g3

0xd1f8,	// (0x0003c5fd) popup_toolbar_trans_pane

0xd8cc,	// (0x0003ccd1) aid_height_set_list_ParamLimits

0x62ed,	// (0x000356f2) aid_size_parent_ParamLimits

0x4408,	// (0x0003380d) list_highlight_pane_cp2_ParamLimits

0x3f55,	// (0x0003335a) set_content_pane_g1_ParamLimits

0xda8f,	// (0x0003ce94) list_single_image_pane_ParamLimits

0xda8f,	// (0x0003ce94) list_single_image_pane

0x8014,	// (0x00037419) aid_size_cell_image_ParamLimits

0x8014,	// (0x00037419) aid_size_cell_image

0xe068,	// (0x0003d46d) grid_single_image_pane_ParamLimits

0xe068,	// (0x0003d46d) grid_single_image_pane

0x401f,	// (0x00033424) list_single_image_pane_g1_ParamLimits

0x401f,	// (0x00033424) list_single_image_pane_g1

0x802f,	// (0x00037434) list_single_image_pane_g2_ParamLimits

0x802f,	// (0x00037434) list_single_image_pane_g2

0x0001,

0xfc53,	// (0x0003f058) list_single_image_pane_g_ParamLimits

0xfc53,	// (0x0003f058) list_single_image_pane_g

0x402b,	// (0x00033430) list_single_image_pane_t1_ParamLimits

0x402b,	// (0x00033430) list_single_image_pane_t1

0xe076,	// (0x0003d47b) cell_image_list_pane_ParamLimits

0xe076,	// (0x0003d47b) cell_image_list_pane

0x8056,	// (0x0003745b) cell_image_list_pane_g1

0x805f,	// (0x00037464) cell_image_list_pane_g2

0x0001,

0xfc58,	// (0x0003f05d) cell_image_list_pane_g

0x8068,	// (0x0003746d) aid_size_cell_tb_trans_pane

0x343d,	// (0x00032842) bg_tb_trans_pane

0x807a,	// (0x0003747f) grid_tb_trans_pane

0x4e9e,	// (0x000342a3) bg_tb_trans_pane_g1

0x4eae,	// (0x000342b3) bg_tb_trans_pane_g2

0x4ea6,	// (0x000342ab) bg_tb_trans_pane_g3

0x4ebe,	// (0x000342c3) bg_tb_trans_pane_g4

0x4eb6,	// (0x000342bb) bg_tb_trans_pane_g5

0x4ede,	// (0x000342e3) bg_tb_trans_pane_g6

0x4ed6,	// (0x000342db) bg_tb_trans_pane_g7

0x4ec6,	// (0x000342cb) bg_tb_trans_pane_g8

0x4ece,	// (0x000342d3) bg_tb_trans_pane_g9

0x0008,

0xfc5d,	// (0x0003f062) bg_tb_trans_pane_g

0x808e,	// (0x00037493) cell_toolbar_trans_pane_ParamLimits

0x808e,	// (0x00037493) cell_toolbar_trans_pane

0x74cb,	// (0x000368d0) cell_toolbar_trans_pane_g1

0xdcef,	// (0x0003d0f4) list_form2_midp_pane_t1

0xdcfd,	// (0x0003d102) list_form2_midp_pane_t2

0x0001,

0xfafa,	// (0x0003eeff) list_form2_midp_pane_t

0x70b0,	// (0x000364b5) scroll_pane_cp51_ParamLimits

0x726c,	// (0x00036671) form2_midp_wait_pane_g1

0x7275,	// (0x0003667a) form2_midp_wait_pane_g2

0x727e,	// (0x00036683) form2_midp_wait_pane_g3

0x0002,

0xfb0f,	// (0x0003ef14) form2_midp_wait_pane_g

0x248b,	// (0x00031890) list_highlight_pane_cp21_ParamLimits

0x72d5,	// (0x000366da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x72e4,	// (0x000366e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x64c0,	// (0x000358c5) list_single_2graphic_im_pane_ParamLimits

0x64c0,	// (0x000358c5) list_single_2graphic_im_pane

0xe08c,	// (0x0003d491) list_single_2graphic_im_pane_g1_ParamLimits

0xe08c,	// (0x0003d491) list_single_2graphic_im_pane_g1

0xe09d,	// (0x0003d4a2) list_single_2graphic_im_pane_g2_ParamLimits

0xe09d,	// (0x0003d4a2) list_single_2graphic_im_pane_g2

0xe0a9,	// (0x0003d4ae) list_single_2graphic_im_pane_g3_ParamLimits

0xe0a9,	// (0x0003d4ae) list_single_2graphic_im_pane_g3

0x0003,

0xfc70,	// (0x0003f075) list_single_2graphic_im_pane_g_ParamLimits

0xfc70,	// (0x0003f075) list_single_2graphic_im_pane_g

0xe0bd,	// (0x0003d4c2) list_single_2graphic_im_pane_t1_ParamLimits

0xe0bd,	// (0x0003d4c2) list_single_2graphic_im_pane_t1

0x7b26,	// (0x00036f2b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b26,	// (0x00036f2b) list_single_graphic_2heading_pane_fp

0x29c1,	// (0x00031dc6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x29c1,	// (0x00031dc6) list_single_graphic_2heading_pane_fp_g1

0x7b3b,	// (0x00036f40) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b3b,	// (0x00036f40) list_single_graphic_2heading_pane_fp_g2

0x298a,	// (0x00031d8f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x298a,	// (0x00031d8f) list_single_graphic_2heading_pane_fp_g3

0x2996,	// (0x00031d9b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2996,	// (0x00031d9b) list_single_graphic_2heading_pane_fp_g4

0x7b47,	// (0x00036f4c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b47,	// (0x00036f4c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb97,	// (0x0003ef9c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb97,	// (0x0003ef9c) list_single_graphic_2heading_pane_fp_g

0x2b8e,	// (0x00031f93) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b8e,	// (0x00031f93) list_single_graphic_2heading_pane_fp_t1

0x29f9,	// (0x00031dfe) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x29f9,	// (0x00031dfe) list_single_graphic_2heading_pane_fp_t2

0x2ba4,	// (0x00031fa9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2ba4,	// (0x00031fa9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc79,	// (0x0003f07e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc79,	// (0x0003f07e) list_single_graphic_2heading_pane_fp_t

0x756b,	// (0x00036970) fep_hwr_write_pane_g5_ParamLimits

0x756b,	// (0x00036970) fep_hwr_write_pane_g5

0x7577,	// (0x0003697c) fep_hwr_write_pane_g6_ParamLimits

0x7577,	// (0x0003697c) fep_hwr_write_pane_g6

0x7df9,	// (0x000371fe) eswt_shell_pane_ParamLimits

0x4f8e,	// (0x00034393) bg_popup_window_pane_cp18_ParamLimits

0x6235,	// (0x0003563a) heading_pane_cp70

0x7f23,	// (0x00037328) popup_eswt_tasktip_window_t1_ParamLimits

0xd2b9,	// (0x0003c6be) aid_touch_tab_arrow_left

0xd2cf,	// (0x0003c6d4) aid_touch_tab_arrow_right

0xc508,	// (0x0003b90d) title_pane_g3_ParamLimits

0xc508,	// (0x0003b90d) title_pane_g3

0x33fc,	// (0x00032801) set_value_pane_g1

0xd1f8,	// (0x0003c5fd) popup_toolbar_trans_pane_ParamLimits

0x8068,	// (0x0003746d) aid_size_cell_tb_trans_pane_ParamLimits

0x343d,	// (0x00032842) bg_tb_trans_pane_ParamLimits

0x807a,	// (0x0003747f) grid_tb_trans_pane_ParamLimits

0x2e5a,	// (0x0003225f) cont_note_pane_ParamLimits

0x2e5a,	// (0x0003225f) cont_note_pane

0x31ae,	// (0x000325b3) cont_snote2_single_text_pane_ParamLimits

0x31ae,	// (0x000325b3) cont_snote2_single_text_pane

0x31ae,	// (0x000325b3) cont_snote2_single_graphic_pane_ParamLimits

0x31ae,	// (0x000325b3) cont_snote2_single_graphic_pane

0x556b,	// (0x00034970) cont_note_wait_pane_ParamLimits

0x556b,	// (0x00034970) cont_note_wait_pane

0x556b,	// (0x00034970) cont_note_image_pane_ParamLimits

0x556b,	// (0x00034970) cont_note_image_pane

0x8122,	// (0x00037527) popup_note2_window_g1_ParamLimits

0x8122,	// (0x00037527) popup_note2_window_g1

0x8153,	// (0x00037558) popup_note2_window_t1_ParamLimits

0x8153,	// (0x00037558) popup_note2_window_t1

0x8198,	// (0x0003759d) popup_note2_window_t2_ParamLimits

0x8198,	// (0x0003759d) popup_note2_window_t2

0x81dd,	// (0x000375e2) popup_note2_window_t3_ParamLimits

0x81dd,	// (0x000375e2) popup_note2_window_t3

0x8222,	// (0x00037627) popup_note2_window_t4_ParamLimits

0x8222,	// (0x00037627) popup_note2_window_t4

0x2ede,	// (0x000322e3) popup_note2_window_t5_ParamLimits

0x2ede,	// (0x000322e3) popup_note2_window_t5

0x0004,

0xfc85,	// (0x0003f08a) popup_note2_window_t_ParamLimits

0xfc85,	// (0x0003f08a) popup_note2_window_t

0x8251,	// (0x00037656) popup_note2_image_window_g1_ParamLimits

0x8251,	// (0x00037656) popup_note2_image_window_g1

0x825d,	// (0x00037662) popup_note2_image_window_g2_ParamLimits

0x825d,	// (0x00037662) popup_note2_image_window_g2

0x0001,

0xfc90,	// (0x0003f095) popup_note2_image_window_g_ParamLimits

0xfc90,	// (0x0003f095) popup_note2_image_window_g

0x826f,	// (0x00037674) popup_note2_image_window_t1_ParamLimits

0x826f,	// (0x00037674) popup_note2_image_window_t1

0x8287,	// (0x0003768c) popup_note2_image_window_t2_ParamLimits

0x8287,	// (0x0003768c) popup_note2_image_window_t2

0x829f,	// (0x000376a4) popup_note2_image_window_t3_ParamLimits

0x829f,	// (0x000376a4) popup_note2_image_window_t3

0x0002,

0xfc95,	// (0x0003f09a) popup_note2_image_window_t_ParamLimits

0xfc95,	// (0x0003f09a) popup_note2_image_window_t

0x5579,	// (0x0003497e) popup_note2_wait_window_g1_ParamLimits

0x5579,	// (0x0003497e) popup_note2_wait_window_g1

0x82bb,	// (0x000376c0) popup_note2_wait_window_g2_ParamLimits

0x82bb,	// (0x000376c0) popup_note2_wait_window_g2

0x5591,	// (0x00034996) popup_note2_wait_window_g3_ParamLimits

0x5591,	// (0x00034996) popup_note2_wait_window_g3

0x0002,

0xfc9c,	// (0x0003f0a1) popup_note2_wait_window_g_ParamLimits

0xfc9c,	// (0x0003f0a1) popup_note2_wait_window_g

0x82c7,	// (0x000376cc) popup_note2_wait_window_t1_ParamLimits

0x82c7,	// (0x000376cc) popup_note2_wait_window_t1

0x82e5,	// (0x000376ea) popup_note2_wait_window_t2_ParamLimits

0x82e5,	// (0x000376ea) popup_note2_wait_window_t2

0x8303,	// (0x00037708) popup_note2_wait_window_t3_ParamLimits

0x8303,	// (0x00037708) popup_note2_wait_window_t3

0x8315,	// (0x0003771a) popup_note2_wait_window_t4_ParamLimits

0x8315,	// (0x0003771a) popup_note2_wait_window_t4

0x0003,

0xfca3,	// (0x0003f0a8) popup_note2_wait_window_t_ParamLimits

0xfca3,	// (0x0003f0a8) popup_note2_wait_window_t

0x8327,	// (0x0003772c) wait_bar2_pane_ParamLimits

0x8327,	// (0x0003772c) wait_bar2_pane

0x833f,	// (0x00037744) popup_snote2_single_text_window_g1_ParamLimits

0x833f,	// (0x00037744) popup_snote2_single_text_window_g1

0x8367,	// (0x0003776c) popup_snote2_single_text_window_t1_ParamLimits

0x8367,	// (0x0003776c) popup_snote2_single_text_window_t1

0x83b3,	// (0x000377b8) popup_snote2_single_text_window_t2_ParamLimits

0x83b3,	// (0x000377b8) popup_snote2_single_text_window_t2

0x83ff,	// (0x00037804) popup_snote2_single_text_window_t3_ParamLimits

0x83ff,	// (0x00037804) popup_snote2_single_text_window_t3

0x8440,	// (0x00037845) popup_snote2_single_text_window_t4_ParamLimits

0x8440,	// (0x00037845) popup_snote2_single_text_window_t4

0x8476,	// (0x0003787b) popup_snote2_single_text_window_t5_ParamLimits

0x8476,	// (0x0003787b) popup_snote2_single_text_window_t5

0x0004,

0xfcac,	// (0x0003f0b1) popup_snote2_single_text_window_t_ParamLimits

0xfcac,	// (0x0003f0b1) popup_snote2_single_text_window_t

0x84a1,	// (0x000378a6) popup_snote2_single_graphic_window_g1_ParamLimits

0x84a1,	// (0x000378a6) popup_snote2_single_graphic_window_g1

0x84c9,	// (0x000378ce) popup_snote2_single_graphic_window_g2_ParamLimits

0x84c9,	// (0x000378ce) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb7,	// (0x0003f0bc) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb7,	// (0x0003f0bc) popup_snote2_single_graphic_window_g

0x84f1,	// (0x000378f6) popup_snote2_single_graphic_window_t1_ParamLimits

0x84f1,	// (0x000378f6) popup_snote2_single_graphic_window_t1

0x853d,	// (0x00037942) popup_snote2_single_graphic_window_t2_ParamLimits

0x853d,	// (0x00037942) popup_snote2_single_graphic_window_t2

0x83ff,	// (0x00037804) popup_snote2_single_graphic_window_t3_ParamLimits

0x83ff,	// (0x00037804) popup_snote2_single_graphic_window_t3

0x8440,	// (0x00037845) popup_snote2_single_graphic_window_t4_ParamLimits

0x8440,	// (0x00037845) popup_snote2_single_graphic_window_t4

0x8476,	// (0x0003787b) popup_snote2_single_graphic_window_t5_ParamLimits

0x8476,	// (0x0003787b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbc,	// (0x0003f0c1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbc,	// (0x0003f0c1) popup_snote2_single_graphic_window_t

0x6f6d,	// (0x00036372) clock_nsta_pane_cp2_t1

0x6f6d,	// (0x00036372) clock_nsta_pane_cp2_t2

0x0001,

0xfad0,	// (0x0003eed5) clock_nsta_pane_cp2_t

0x0990,	// (0x0002fd95) form_field_data_wide_pane_g1_ParamLimits

0x3457,	// (0x0003285c) form_field_data_wide_pane_g2_ParamLimits

0x3457,	// (0x0003285c) form_field_data_wide_pane_g2

0x3463,	// (0x00032868) form_field_data_wide_pane_g3_ParamLimits

0x3463,	// (0x00032868) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0003ea9c) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0003ea9c) form_field_data_wide_pane_g

0xdc09,	// (0x0003d00e) grid_touch_3_pane_ParamLimits

0xdc09,	// (0x0003d00e) grid_touch_3_pane

0xe0ee,	// (0x0003d4f3) cell_touch_3_pane_ParamLimits

0xe0ee,	// (0x0003d4f3) cell_touch_3_pane

0x74cb,	// (0x000368d0) cell_touch_3_pane_g1

0x74cb,	// (0x000368d0) cell_touch_3_pane_g2

0x0001,

0xfb55,	// (0x0003ef5a) cell_touch_3_pane_g

0x2f10,	// (0x00032315) cont_query_data_pane

0x2f18,	// (0x0003231d) cont_query_data_pane_cp1

0x85b7,	// (0x000379bc) button_value_adjust_pane_cp7

0x85bf,	// (0x000379c4) query_popup_pane_cp3

0x3b68,	// (0x00032f6d) bg_popup_sub_pane_cp22_ParamLimits

0x0d56,	// (0x0003015b) navi_navi_volume_pane_cp2

0x0d71,	// (0x00030176) popup_side_volume_key_window_g2

0x0d80,	// (0x00030185) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0003eb2e) popup_side_volume_key_window_g

0x0d9d,	// (0x000301a2) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0003eb35) popup_side_volume_key_window_t

0x3e1f,	// (0x00033224) popup_side_volume_key_window_ParamLimits

0xb628,	// (0x0003aa2d) list_double_graphic_pane_g4_ParamLimits

0xb628,	// (0x0003aa2d) list_double_graphic_pane_g4

0xda7c,	// (0x0003ce81) list_single_2heading_msg_pane_ParamLimits

0xda7c,	// (0x0003ce81) list_single_2heading_msg_pane

0xbef0,	// (0x0003b2f5) list_single_2heading_msg_pane_g1_ParamLimits

0xbef0,	// (0x0003b2f5) list_single_2heading_msg_pane_g1

0xbefc,	// (0x0003b301) list_single_2heading_msg_pane_g2_ParamLimits

0xbefc,	// (0x0003b301) list_single_2heading_msg_pane_g2

0xbf0f,	// (0x0003b314) list_single_2heading_msg_pane_g3_ParamLimits

0xbf0f,	// (0x0003b314) list_single_2heading_msg_pane_g3

0xbf1b,	// (0x0003b320) list_single_2heading_msg_pane_g4_ParamLimits

0xbf1b,	// (0x0003b320) list_single_2heading_msg_pane_g4

0x0003,

0xfcc7,	// (0x0003f0cc) list_single_2heading_msg_pane_g_ParamLimits

0xfcc7,	// (0x0003f0cc) list_single_2heading_msg_pane_g

0xbf33,	// (0x0003b338) list_single_2heading_msg_pane_t1_ParamLimits

0xbf33,	// (0x0003b338) list_single_2heading_msg_pane_t1

0xbf5b,	// (0x0003b360) list_single_2heading_msg_pane_t2_ParamLimits

0xbf5b,	// (0x0003b360) list_single_2heading_msg_pane_t2

0xbfc6,	// (0x0003b3cb) list_single_2heading_msg_pane_t3_ParamLimits

0xbfc6,	// (0x0003b3cb) list_single_2heading_msg_pane_t3

0x2c89,	// (0x0003208e) list_single_2heading_msg_pane_t4_ParamLimits

0x2c89,	// (0x0003208e) list_single_2heading_msg_pane_t4

0x0003,

0xfcd0,	// (0x0003f0d5) list_single_2heading_msg_pane_t_ParamLimits

0xfcd0,	// (0x0003f0d5) list_single_2heading_msg_pane_t

0x23df,	// (0x000317e4) title_pane_g4_ParamLimits

0x23df,	// (0x000317e4) title_pane_g4

0x0b64,	// (0x0002ff69) title_pane_stacon_g3_ParamLimits

0x0b64,	// (0x0002ff69) title_pane_stacon_g3

0x80e5,	// (0x000374ea) list_single_2graphic_im_pane_g4_ParamLimits

0x80e5,	// (0x000374ea) list_single_2graphic_im_pane_g4

0x5fdc,	// (0x000353e1) popup_side_volume_key_window_cp

0x67d9,	// (0x00035bde) main_idle_act2_pane_t1

0x1203,	// (0x00030608) toolbar_button_pane_g10

0xc875,	// (0x0003bc7a) popup_toolbar_window_cp1

0x6f5e,	// (0x00036363) clock_nsta_pane_cp_t1

0x6f5e,	// (0x00036363) clock_nsta_pane_cp_t2

0x0001,

0xfacb,	// (0x0003eed0) clock_nsta_pane_cp_t

0x0d56,	// (0x0003015b) navi_navi_volume_pane_cp2_ParamLimits

0x0d65,	// (0x0003016a) popup_side_volume_key_window_g1_ParamLimits

0x0d71,	// (0x00030176) popup_side_volume_key_window_g2_ParamLimits

0x0d80,	// (0x00030185) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0003eb2e) popup_side_volume_key_window_g_ParamLimits

0x16bc,	// (0x00030ac1) fep_hwr_aid_pane

0x1763,	// (0x00030b68) bg_fep_hwr_top_pane_g4_ParamLimits

0x753b,	// (0x00036940) fep_hwr_top_pane_g1_ParamLimits

0x754d,	// (0x00036952) fep_hwr_top_pane_g2_ParamLimits

0x1783,	// (0x00030b88) fep_hwr_top_pane_g3_ParamLimits

0xfb20,	// (0x0003ef25) fep_hwr_top_pane_g_ParamLimits

0x1798,	// (0x00030b9d) fep_hwr_top_text_pane_ParamLimits

0x5d9f,	// (0x000351a4) aid_touch_tab_arrow_arrow_2

0x5da8,	// (0x000351ad) aid_touch_tab_arrow_left_2

0x16d0,	// (0x00030ad5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1707,	// (0x00030b0c) fep_hwr_prediction_pane

0x76ad,	// (0x00036ab2) fep_vkb_prediction_pane

0xdef3,	// (0x0003d2f8) fep_vkb_side_pane_g3_ParamLimits

0xdef3,	// (0x0003d2f8) fep_vkb_side_pane_g3

0x1913,	// (0x00030d18) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x197f,	// (0x00030d84) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x198c,	// (0x00030d91) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcf,	// (0x0003efd4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1abb,	// (0x00030ec0) fep_hwr_prediction_pane_g1

0x1ac5,	// (0x00030eca) fep_hwr_prediction_pane_g2

0x1acd,	// (0x00030ed2) fep_hwr_prediction_pane_g3

0x1ad5,	// (0x00030eda) fep_hwr_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0003f0de) fep_hwr_prediction_pane_g

0x85e4,	// (0x000379e9) fep_vkb_prediction_pane_g1

0x85ee,	// (0x000379f3) fep_vkb_prediction_pane_g2

0x85f6,	// (0x000379fb) fep_vkb_prediction_pane_g3

0x85fe,	// (0x00037a03) fep_vkb_prediction_pane_g4

0x0003,

0xfce2,	// (0x0003f0e7) fep_vkb_prediction_pane_g

0x153c,	// (0x00030941) slider_set_pane_g3

0x1550,	// (0x00030955) slider_set_pane_g4

0x1568,	// (0x0003096d) slider_set_pane_g5

0x153c,	// (0x00030941) slider_set_pane_g6

0x157e,	// (0x00030983) slider_set_pane_g7

0x6452,	// (0x00035857) slider_form_pane_g3

0x645b,	// (0x00035860) slider_form_pane_g4

0x6463,	// (0x00035868) slider_form_pane_g5

0x6452,	// (0x00035857) slider_form_pane_g6

0xda3f,	// (0x0003ce44) slider_form_pane_g7

0x6a96,	// (0x00035e9b) slider_set_pane_vc_g3

0x6a9f,	// (0x00035ea4) slider_set_pane_vc_g4

0x6aa8,	// (0x00035ead) slider_set_pane_vc_g5

0x6a96,	// (0x00035e9b) slider_set_pane_vc_g6

0x6ab1,	// (0x00035eb6) slider_set_pane_vc_g7

0x6a96,	// (0x00035e9b) slider_form_pane_vc_g1

0x6a9f,	// (0x00035ea4) slider_form_pane_vc_g2

0x6aa8,	// (0x00035ead) slider_form_pane_vc_g3

0x6a96,	// (0x00035e9b) slider_form_pane_vc_g4

0x6c64,	// (0x00036069) slider_form_pane_vc_g5

0x0004,

0xfaa4,	// (0x0003eea9) slider_form_pane_vc_g

0x2397,	// (0x0003179c) main_idle_act3_pane

0x8606,	// (0x00037a0b) ai3_links_pane

0xe137,	// (0x0003d53c) popup_ai3_data_window_ParamLimits

0xe137,	// (0x0003d53c) popup_ai3_data_window

0x2397,	// (0x0003179c) grid_ai3_links_pane

0xe151,	// (0x0003d556) cell_ai3_links_pane_ParamLimits

0xe151,	// (0x0003d556) cell_ai3_links_pane

0x8641,	// (0x00037a46) bg_popup_sub_pane_cp11

0x864e,	// (0x00037a53) cell_ai3_links_pane_g1

0x2397,	// (0x0003179c) bg_popup_sub_pane_cp12

0x8673,	// (0x00037a78) heading_ai3_data_pane

0x867b,	// (0x00037a80) list_ai3_gene_pane

0x8687,	// (0x00037a8c) popup_ai3_data_window_g1

0x868f,	// (0x00037a94) heading_ai3_data_pane_g1

0x8697,	// (0x00037a9c) heading_ai3_data_pane_t1

0x86a5,	// (0x00037aaa) list_double_ai3_gene_pane_ParamLimits

0x86a5,	// (0x00037aaa) list_double_ai3_gene_pane

0x86b2,	// (0x00037ab7) list_single_ai3_gene_pane_ParamLimits

0x86b2,	// (0x00037ab7) list_single_ai3_gene_pane

0x7490,	// (0x00036895) list_highlight_pane_cp7_ParamLimits

0x7490,	// (0x00036895) list_highlight_pane_cp7

0x86bf,	// (0x00037ac4) list_single_a13_gene_pane_t1_ParamLimits

0x86bf,	// (0x00037ac4) list_single_a13_gene_pane_t1

0x86d6,	// (0x00037adb) list_single_ai3_gene_pane_g1

0x86df,	// (0x00037ae4) list_single_ai3_gene_pane_g2

0x0001,

0xfceb,	// (0x0003f0f0) list_single_ai3_gene_pane_g

0x86e7,	// (0x00037aec) list_double_ai3_gene_pane_g1_ParamLimits

0x86e7,	// (0x00037aec) list_double_ai3_gene_pane_g1

0x86f3,	// (0x00037af8) list_double_ai3_gene_pane_t1_ParamLimits

0x86f3,	// (0x00037af8) list_double_ai3_gene_pane_t1

0x870f,	// (0x00037b14) list_double_ai3_gene_pane_t2_ParamLimits

0x870f,	// (0x00037b14) list_double_ai3_gene_pane_t2

0x8725,	// (0x00037b2a) list_double_ai3_gene_pane_t3_ParamLimits

0x8725,	// (0x00037b2a) list_double_ai3_gene_pane_t3

0x0002,

0xfcf0,	// (0x0003f0f5) list_double_ai3_gene_pane_t_ParamLimits

0xfcf0,	// (0x0003f0f5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2bba,	// (0x00031fbf) aid_size_min_col_2

0xe121,	// (0x0003d526) aid_size_min_msg_ParamLimits

0xe121,	// (0x0003d526) aid_size_min_msg

0xdf07,	// (0x0003d30c) fep_vkb_top_text_pane_g2_ParamLimits

0xdf07,	// (0x0003d30c) fep_vkb_top_text_pane_g2

0x0001,

0xfb50,	// (0x0003ef55) fep_vkb_top_text_pane_g_ParamLimits

0xfb50,	// (0x0003ef55) fep_vkb_top_text_pane_g

0x2397,	// (0x0003179c) main_hc_apps_shell_pane

0x8742,	// (0x00037b47) grid_hc_apps_pane_ParamLimits

0x8742,	// (0x00037b47) grid_hc_apps_pane

0x8751,	// (0x00037b56) list_hc_apps_pane

0x8759,	// (0x00037b5e) scroll_pane_cp37_ParamLimits

0x8759,	// (0x00037b5e) scroll_pane_cp37

0xe16b,	// (0x0003d570) cell_hc_apps_pane_ParamLimits

0xe16b,	// (0x0003d570) cell_hc_apps_pane

0xe229,	// (0x0003d62e) cell_hc_apps_pane_g1_ParamLimits

0xe229,	// (0x0003d62e) cell_hc_apps_pane_g1

0x8844,	// (0x00037c49) cell_hc_apps_pane_g2_ParamLimits

0x8844,	// (0x00037c49) cell_hc_apps_pane_g2

0x8860,	// (0x00037c65) cell_hc_apps_pane_g3_ParamLimits

0x8860,	// (0x00037c65) cell_hc_apps_pane_g3

0x0002,

0xfcf7,	// (0x0003f0fc) cell_hc_apps_pane_g_ParamLimits

0xfcf7,	// (0x0003f0fc) cell_hc_apps_pane_g

0xe256,	// (0x0003d65b) cell_hc_apps_pane_t1_ParamLimits

0xe256,	// (0x0003d65b) cell_hc_apps_pane_t1

0x2e5a,	// (0x0003225f) grid_highlight_pane_cp10_ParamLimits

0x2e5a,	// (0x0003225f) grid_highlight_pane_cp10

0xe294,	// (0x0003d699) list_single_hc_apps_pane_ParamLimits

0xe294,	// (0x0003d699) list_single_hc_apps_pane

0xe2c1,	// (0x0003d6c6) list_single_hc_apps_pane_g1

0xc034,	// (0x0003b439) list_single_hc_apps_pane_g2

0x0001,

0xfcfe,	// (0x0003f103) list_single_hc_apps_pane_g

0xc04d,	// (0x0003b452) list_single_hc_apps_pane_g2_copy1

0xc069,	// (0x0003b46e) list_single_hc_apps_pane_t1

0x248b,	// (0x00031890) bg_set_opt_pane_cp_ParamLimits

0x034a,	// (0x0002f74f) setting_slider_pane_t1_ParamLimits

0x0363,	// (0x0002f768) setting_slider_pane_t2_ParamLimits

0x037d,	// (0x0002f782) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003e97f) setting_slider_pane_t_ParamLimits

0x0395,	// (0x0002f79a) slider_set_pane_ParamLimits

0x1085,	// (0x0003048a) control_pane_g5_ParamLimits

0x1085,	// (0x0003048a) control_pane_g5

0x62a1,	// (0x000356a6) slider_set_pane_g1_ParamLimits

0x1530,	// (0x00030935) slider_set_pane_g2_ParamLimits

0x153c,	// (0x00030941) slider_set_pane_g3_ParamLimits

0x1550,	// (0x00030955) slider_set_pane_g4_ParamLimits

0x1568,	// (0x0003096d) slider_set_pane_g5_ParamLimits

0x153c,	// (0x00030941) slider_set_pane_g6_ParamLimits

0x157e,	// (0x00030983) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0003ed75) slider_set_pane_g_ParamLimits

0x3f00,	// (0x00033305) navi_icon_text_pane_ParamLimits

0xd285,	// (0x0003c68a) aid_fill_nsta_2_ParamLimits

0xd2b9,	// (0x0003c6be) aid_touch_tab_arrow_left_ParamLimits

0xd2cf,	// (0x0003c6d4) aid_touch_tab_arrow_right_ParamLimits

0xd36a,	// (0x0003c76f) clock_nsta_pane_ParamLimits

0xd7f3,	// (0x0003cbf8) navi_icon_pane_g1_ParamLimits

0xd7ff,	// (0x0003cc04) navi_text_pane_t1_ParamLimits

0xdcd1,	// (0x0003d0d6) navi_icon_text_pane_g1_ParamLimits

0xdcdd,	// (0x0003d0e2) navi_icon_text_pane_t1_ParamLimits

0xe2c1,	// (0x0003d6c6) list_single_hc_apps_pane_g1_ParamLimits

0xc034,	// (0x0003b439) list_single_hc_apps_pane_g2_ParamLimits

0xfcfe,	// (0x0003f103) list_single_hc_apps_pane_g_ParamLimits

0xc04d,	// (0x0003b452) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc069,	// (0x0003b46e) list_single_hc_apps_pane_t1_ParamLimits

0xb479,	// (0x0003a87e) popup_toolbar2_fixed_window_ParamLimits

0xb479,	// (0x0003a87e) popup_toolbar2_fixed_window

0xd1ee,	// (0x0003c5f3) popup_toolbar2_float_window

0x2397,	// (0x0003179c) bg_popup_sub_pane_cp27

0x8937,	// (0x00037d3c) grid_toolbar2_float_pane

0x2397,	// (0x0003179c) bg_popup_sub_pane_cp26

0x8937,	// (0x00037d3c) grid_toolbar2_fixed_pane

0xe2da,	// (0x0003d6df) cell_toolbar2_fixed_pane_ParamLimits

0xe2da,	// (0x0003d6df) cell_toolbar2_fixed_pane

0xe2f5,	// (0x0003d6fa) cell_toolbar2_fixed_pane_g1

0x8958,	// (0x00037d5d) toolbar2_fixed_button_pane

0x4e9e,	// (0x000342a3) toolbar2_fixed_button_pane_g1

0x4eae,	// (0x000342b3) toolbar2_fixed_button_pane_g2

0x4ea6,	// (0x000342ab) toolbar2_fixed_button_pane_g3

0x4ebe,	// (0x000342c3) toolbar2_fixed_button_pane_g4

0x4eb6,	// (0x000342bb) toolbar2_fixed_button_pane_g5

0x4ec6,	// (0x000342cb) toolbar2_fixed_button_pane_g6

0x4ece,	// (0x000342d3) toolbar2_fixed_button_pane_g7

0x4ede,	// (0x000342e3) toolbar2_fixed_button_pane_g8

0x4ed6,	// (0x000342db) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0003ec77) toolbar2_fixed_button_pane_g

0x8960,	// (0x00037d65) cell_toolbar2_float_pane_ParamLimits

0x8960,	// (0x00037d65) cell_toolbar2_float_pane

0x8971,	// (0x00037d76) cell_toolbar2_float_pane_g1

0x8958,	// (0x00037d5d) toolbar2_fixed_button_pane_cp

0xdde1,	// (0x0003d1e6) fep_vkb_accented_list_pane_ParamLimits

0xdde1,	// (0x0003d1e6) fep_vkb_accented_list_pane

0x18f3,	// (0x00030cf8) bg_popup_fep_shadow_pane_g9

0x40a2,	// (0x000334a7) bg_popup_fep_shadow_pane_cp3

0x359e,	// (0x000329a3) list_accented_list_pane

0x897a,	// (0x00037d7f) list_single_accented_list_pane_ParamLimits

0x897a,	// (0x00037d7f) list_single_accented_list_pane

0x40a2,	// (0x000334a7) list_highlight_pane_cp10

0x898b,	// (0x00037d90) list_single_accented_list_pane_t1

0xd118,	// (0x0003c51d) popup_slider_window_ParamLimits

0xd118,	// (0x0003c51d) popup_slider_window

0x85c7,	// (0x000379cc) aid_indentation_list_msg

0xe3fb,	// (0x0003d800) bg_popup_window_pane_cp19

0x8aaf,	// (0x00037eb4) popup_slider_window_g1

0x8acb,	// (0x00037ed0) popup_slider_window_g2

0x8ae7,	// (0x00037eec) popup_slider_window_g3

0x0005,

0xfd03,	// (0x0003f108) popup_slider_window_g

0x8b43,	// (0x00037f48) popup_slider_window_t1

0x8bb7,	// (0x00037fbc) small_volume_slider_vertical_pane

0x74cb,	// (0x000368d0) small_volume_slider_vertical_pane_g1

0x74cb,	// (0x000368d0) small_volume_slider_vertical_pane_g2

0x8bd3,	// (0x00037fd8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd15,	// (0x0003f11a) small_volume_slider_vertical_pane_g

0xb3e7,	// (0x0003a7ec) area_side_right_pane_ParamLimits

0xb3e7,	// (0x0003a7ec) area_side_right_pane

0xc097,	// (0x0003b49c) aid_size_side_button_ParamLimits

0xc097,	// (0x0003b49c) aid_size_side_button

0xc0b0,	// (0x0003b4b5) grid_sctrl_middle_pane_ParamLimits

0xc0b0,	// (0x0003b4b5) grid_sctrl_middle_pane

0x1b11,	// (0x00030f16) sctrl_sk_bottom_pane

0x1b22,	// (0x00030f27) sctrl_sk_top_pane

0x1b34,	// (0x00030f39) aid_touch_sctrl_top

0x1b41,	// (0x00030f46) bg_sctrl_sk_pane_ParamLimits

0x1b41,	// (0x00030f46) bg_sctrl_sk_pane

0x1b4f,	// (0x00030f54) sctrl_sk_top_pane_g1

0x1b5c,	// (0x00030f61) sctrl_sk_top_pane_t1

0x1b34,	// (0x00030f39) aid_touch_sctrl_bottom

0x1b41,	// (0x00030f46) bg_sctrl_sk_pane_cp_ParamLimits

0x1b41,	// (0x00030f46) bg_sctrl_sk_pane_cp

0x1b77,	// (0x00030f7c) sctrl_sk_bottom_pane_g1

0x1b5c,	// (0x00030f61) sctrl_sk_bottom_pane_t1

0xc0ca,	// (0x0003b4cf) cell_sctrl_middle_pane_ParamLimits

0xc0ca,	// (0x0003b4cf) cell_sctrl_middle_pane

0xc0db,	// (0x0003b4e0) aid_touch_sctrl_middle_ParamLimits

0xc0db,	// (0x0003b4e0) aid_touch_sctrl_middle

0xc0e8,	// (0x0003b4ed) bg_sctrl_middle_pane_ParamLimits

0xc0e8,	// (0x0003b4ed) bg_sctrl_middle_pane

0x21e4,	// (0x000315e9) cell_sctrl_middle_pane_g1_ParamLimits

0x21e4,	// (0x000315e9) cell_sctrl_middle_pane_g1

0xc0f6,	// (0x0003b4fb) cell_sctrl_middle_pane_g2_ParamLimits

0xc0f6,	// (0x0003b4fb) cell_sctrl_middle_pane_g2

0x0001,

0xfd21,	// (0x0003f126) cell_sctrl_middle_pane_g_ParamLimits

0xfd21,	// (0x0003f126) cell_sctrl_middle_pane_g

0x4e9e,	// (0x000342a3) bg_sctrl_middle_pane_g1

0x4ea6,	// (0x000342ab) bg_sctrl_middle_pane_g2

0x4eae,	// (0x000342b3) bg_sctrl_middle_pane_g3

0x4eb6,	// (0x000342bb) bg_sctrl_middle_pane_g4

0x4ebe,	// (0x000342c3) bg_sctrl_middle_pane_g5

0x4ec6,	// (0x000342cb) bg_sctrl_middle_pane_g6

0x4ece,	// (0x000342d3) bg_sctrl_middle_pane_g7

0x4ed6,	// (0x000342db) bg_sctrl_middle_pane_g8

0x0007,

0xfd26,	// (0x0003f12b) bg_sctrl_middle_pane_g

0x4ede,	// (0x000342e3) bg_sctrl_middle_pane_g8_copy1

0x4e9e,	// (0x000342a3) bg_sctrl_sk_pane_g1

0x4eae,	// (0x000342b3) bg_sctrl_sk_pane_g2

0x4ea6,	// (0x000342ab) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0003ec77) bg_sctrl_sk_pane_g

0x336c,	// (0x00032771) aid_size_touch_scroll_bar

0x4ebe,	// (0x000342c3) bg_sctrl_sk_pane_g4

0x4eb6,	// (0x000342bb) bg_sctrl_sk_pane_g5

0x4ec6,	// (0x000342cb) bg_sctrl_sk_pane_g6

0x4ece,	// (0x000342d3) bg_sctrl_sk_pane_g7

0x4ede,	// (0x000342e3) bg_sctrl_sk_pane_g8

0x4ed6,	// (0x000342db) bg_sctrl_sk_pane_g9

0x44a8,	// (0x000338ad) popup_fep_china_hwr2_fs_candidate_window

0xcc5c,	// (0x0003c061) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcc5c,	// (0x0003c061) popup_fep_china_hwr2_fs_control_window

0x1913,	// (0x00030d18) sctrl_sk_top_pane_g2

0x0001,

0xfd1c,	// (0x0003f121) sctrl_sk_top_pane_g

0xe4b3,	// (0x0003d8b8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4b3,	// (0x0003d8b8) aid_fep_china_hwr2_fs_cell

0xe4c7,	// (0x0003d8cc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4c7,	// (0x0003d8cc) bg_popup_fep_shadow_pane_cp4

0xe4de,	// (0x0003d8e3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4de,	// (0x0003d8e3) bg_popup_fep_shadow_pane_cp5

0xe4f0,	// (0x0003d8f5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe4f0,	// (0x0003d8f5) popup_fep_china_hwr2_fs_control_bar_grid

0xe504,	// (0x0003d909) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c2f,	// (0x00038034) aid_fep_china_hwr2_fs_candi_cell

0x2397,	// (0x0003179c) bg_popup_fep_shadow_pane_cp6

0x8c39,	// (0x0003803e) popup_fep_china_hwr2_fs_candidate_grid

0xe50c,	// (0x0003d911) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe50c,	// (0x0003d911) cell_fep_china_hwr2_fs_funtion_grid

0x74cb,	// (0x000368d0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c5b,	// (0x00038060) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c5b,	// (0x00038060) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c69,	// (0x0003806e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c69,	// (0x0003806e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd37,	// (0x0003f13c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd37,	// (0x0003f13c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe524,	// (0x0003d929) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe524,	// (0x0003d929) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe539,	// (0x0003d93e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe539,	// (0x0003d93e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3c,	// (0x0003f141) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3c,	// (0x0003f141) cell_fep_china_hwr2_fs_funtion_grid_t

0x8cb0,	// (0x000380b5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8cb8,	// (0x000380bd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8cc0,	// (0x000380c5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd41,	// (0x0003f146) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8cc8,	// (0x000380cd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8cc8,	// (0x000380cd) cell_fep_china_hwr2_fs_candidate_grid

0x8ce1,	// (0x000380e6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ce9,	// (0x000380ee) popup_fep_china_hwr2_fs_candidate_grid_g21

0x74cb,	// (0x000368d0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x74cb,	// (0x000368d0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb55,	// (0x0003ef5a) cell_fep_china_hwr2_fs_candidate_grid_g

0x8cf1,	// (0x000380f6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4a9b,	// (0x00033ea0) clock_nsta_pane_cp_24_ParamLimits

0x4a9b,	// (0x00033ea0) clock_nsta_pane_cp_24

0x4b19,	// (0x00033f1e) indicator_nsta_pane_cp_24_ParamLimits

0x4b19,	// (0x00033f1e) indicator_nsta_pane_cp_24

0x5beb,	// (0x00034ff0) heading_pane_g1

0x0001,

0xf8d7,	// (0x0003ecdc) heading_pane_g

0x6622,	// (0x00035a27) grid_sct_catagory_button_pane

0x6652,	// (0x00035a57) scroll_pane_cp5_ParamLimits

0x70bc,	// (0x000364c1) button_value_adjust_pane_cp5_ParamLimits

0x70bc,	// (0x000364c1) button_value_adjust_pane_cp5

0x719b,	// (0x000365a0) form2_midp_time_pane_ParamLimits

0x8cff,	// (0x00038104) cell_sct_catagory_button_pane_ParamLimits

0x8cff,	// (0x00038104) cell_sct_catagory_button_pane

0x7490,	// (0x00036895) bg_button_pane_cp01_ParamLimits

0x7490,	// (0x00036895) bg_button_pane_cp01

0x74cb,	// (0x000368d0) cell_sct_catagory_button_pane_g1

0xd191,	// (0x0003c596) popup_tb_extension_window

0xe555,	// (0x0003d95a) aid_size_cell_ext_ParamLimits

0xe555,	// (0x0003d95a) aid_size_cell_ext

0x31ae,	// (0x000325b3) bg_tb_trans_pane_cp1_ParamLimits

0x31ae,	// (0x000325b3) bg_tb_trans_pane_cp1

0xe57b,	// (0x0003d980) grid_tb_ext_pane_ParamLimits

0xe57b,	// (0x0003d980) grid_tb_ext_pane

0xe5b6,	// (0x0003d9bb) cell_tb_ext_pane_ParamLimits

0xe5b6,	// (0x0003d9bb) cell_tb_ext_pane

0xe5de,	// (0x0003d9e3) cell_tb_ext_pane_g1_ParamLimits

0xe5de,	// (0x0003d9e3) cell_tb_ext_pane_g1

0x8d93,	// (0x00038198) cell_tb_ext_pane_t1

0x2e5a,	// (0x0003225f) list_highlight_pane_cp11_ParamLimits

0x2e5a,	// (0x0003225f) list_highlight_pane_cp11

0x027d,	// (0x0002f682) popup_uni_indicator_window_ParamLimits

0x027d,	// (0x0002f682) popup_uni_indicator_window

0x343d,	// (0x00032842) bg_popup_sub_pane_cp14

0x8dae,	// (0x000381b3) list_uniindi_pane

0x8dba,	// (0x000381bf) uniindi_top_pane

0x2e5a,	// (0x0003225f) bg_uniindi_top_pane

0x8dd9,	// (0x000381de) uniindi_top_pane_g1

0x8def,	// (0x000381f4) uniindi_top_pane_g2

0x0003,

0xfd48,	// (0x0003f14d) uniindi_top_pane_g

0x8e19,	// (0x0003821e) uniindi_top_pane_t1

0x8e43,	// (0x00038248) list_single_uniindi_pane_ParamLimits

0x8e43,	// (0x00038248) list_single_uniindi_pane

0x74cb,	// (0x000368d0) bg_uniindi_top_pane_g1

0x8e56,	// (0x0003825b) list_single_uniindi_pane_g1

0x8e69,	// (0x0003826e) list_single_uniindi_pane_t1

0x00f3,	// (0x0002f4f8) control_bg_pane

0x8e8e,	// (0x00038293) bg_sctrl_sk_pane_cp1

0x8e97,	// (0x0003829c) bg_sctrl_sk_pane_cp2

0x8ea0,	// (0x000382a5) control_bg_pane_g1

0x8ea9,	// (0x000382ae) control_bg_pane_g2

0x0001,

0xfd51,	// (0x0003f156) control_bg_pane_g

0x6ef0,	// (0x000362f5) cell_indicator_nsta_pane_g1_ParamLimits

0xdc38,	// (0x0003d03d) cell_indicator_nsta_pane_g2_ParamLimits

0xfab9,	// (0x0003eebe) cell_indicator_nsta_pane_g_ParamLimits

0x2977,	// (0x00031d7c) form2_midp_time_pane_t1_ParamLimits

0xcbd9,	// (0x0003bfde) main_idle_act4_pane_ParamLimits

0xcbd9,	// (0x0003bfde) main_idle_act4_pane

0xd191,	// (0x0003c596) popup_tb_extension_window_ParamLimits

0xe59d,	// (0x0003d9a2) tb_ext_find_pane_ParamLimits

0xe59d,	// (0x0003d9a2) tb_ext_find_pane

0x8eb2,	// (0x000382b7) ai_gene_pane_1_cp1

0x41e7,	// (0x000335ec) ai_gene_pane_2_cp1

0x8eba,	// (0x000382bf) list_single_idle_plugin_calendar_pane

0x8ec3,	// (0x000382c8) list_single_idle_plugin_notification_pane

0x8ecc,	// (0x000382d1) list_single_idle_plugin_player_pane

0xe5fb,	// (0x0003da00) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5fb,	// (0x0003da00) list_single_idle_plugin_shortcut_pane

0xe623,	// (0x0003da28) main_idle_act4_pane_t1

0xe639,	// (0x0003da3e) main_idle_act4_pane_t2

0x0001,

0xfd56,	// (0x0003f15b) main_idle_act4_pane_t

0xe64f,	// (0x0003da54) middle_sk_idle_act4_pane_ParamLimits

0xe64f,	// (0x0003da54) middle_sk_idle_act4_pane

0xe66b,	// (0x0003da70) popup_clock_digital_analogue_window_cp2

0xe693,	// (0x0003da98) shortcut_wheel_idle_act4_pane_ParamLimits

0xe693,	// (0x0003da98) shortcut_wheel_idle_act4_pane

0x74cb,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g1

0x74cb,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g2

0x74cb,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g3

0x74cb,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g4

0x74cb,	// (0x000368d0) shortcut_wheel_idle_act4_pane_g5

0x8f5f,	// (0x00038364) shortcut_wheel_idle_act4_pane_g6

0x8f67,	// (0x0003836c) shortcut_wheel_idle_act4_pane_g7

0x8f6f,	// (0x00038374) shortcut_wheel_idle_act4_pane_g8

0x8f77,	// (0x0003837c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5b,	// (0x0003f160) shortcut_wheel_idle_act4_pane_g

0xd8f1,	// (0x0003ccf6) middle_sk_idle_act4_pane_g1_ParamLimits

0xd8f1,	// (0x0003ccf6) middle_sk_idle_act4_pane_g1

0xe710,	// (0x0003db15) middle_sk_idle_act4_pane_g2_ParamLimits

0xe710,	// (0x0003db15) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7e,	// (0x0003f183) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7e,	// (0x0003f183) middle_sk_idle_act4_pane_g

0xe728,	// (0x0003db2d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe728,	// (0x0003db2d) middle_sk_idle_act4_pane_t1

0xe757,	// (0x0003db5c) grid_ai_shortcut_pane_ParamLimits

0xe757,	// (0x0003db5c) grid_ai_shortcut_pane

0xe774,	// (0x0003db79) list_highlight_pane_cp16_ParamLimits

0xe774,	// (0x0003db79) list_highlight_pane_cp16

0xe781,	// (0x0003db86) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe781,	// (0x0003db86) list_single_idle_plugin_shortcut_pane_g1

0xe78d,	// (0x0003db92) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe78d,	// (0x0003db92) list_single_idle_plugin_shortcut_pane_g2

0xe7a9,	// (0x0003dbae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7a9,	// (0x0003dbae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd83,	// (0x0003f188) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd83,	// (0x0003f188) list_single_idle_plugin_shortcut_pane_g

0xe7be,	// (0x0003dbc3) cell_ai_shortcut_pane_ParamLimits

0xe7be,	// (0x0003dbc3) cell_ai_shortcut_pane

0xe7d4,	// (0x0003dbd9) cell_ai_shortcut_pane_g1_ParamLimits

0xe7d4,	// (0x0003dbd9) cell_ai_shortcut_pane_g1

0x8eb2,	// (0x000382b7) ai_gene_pane_1_cp2

0x90a7,	// (0x000384ac) ai_gene_pane_2_cp2

0x90af,	// (0x000384b4) list_highlight_pane_cp15

0x90b8,	// (0x000384bd) list_single_idle_plugin_calendar_pane_g1

0x90af,	// (0x000384b4) list_highlight_pane_cp17

0x90c0,	// (0x000384c5) list_single_idle_plugin_calendar_pane_g1_copy1

0x90c8,	// (0x000384cd) list_single_idle_plugin_player_pane_g1

0x687b,	// (0x00035c80) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8a,	// (0x0003f18f) list_single_idle_plugin_player_pane_g

0x90d0,	// (0x000384d5) list_single_idle_plugin_player_pane_t1

0x90de,	// (0x000384e3) list_single_idle_plugin_player_pane_t2

0x90ec,	// (0x000384f1) list_single_idle_plugin_player_pane_t3

0x90fa,	// (0x000384ff) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8f,	// (0x0003f194) list_single_idle_plugin_player_pane_t

0x9108,	// (0x0003850d) wait_bar_pane_cp15

0x9110,	// (0x00038515) grid_ai_notification_pane

0x687b,	// (0x00035c80) list_single_idle_plugin_notification_pane_g1

0xe7f6,	// (0x0003dbfb) cell_ai_notification_pane_ParamLimits

0xe7f6,	// (0x0003dbfb) cell_ai_notification_pane

0x9126,	// (0x0003852b) cell_ai_notification_pane_g1

0x912e,	// (0x00038533) cell_ai_notification_pane_t1

0xe803,	// (0x0003dc08) tb_ext_find_button_pane

0xe80b,	// (0x0003dc10) tb_ext_find_pane_g1

0xe813,	// (0x0003dc18) tb_ext_find_pane_t1

0x3aa3,	// (0x00032ea8) tb_ext_find_button_pane_g1

0x915a,	// (0x0003855f) tb_ext_find_button_pane_g2

0x0001,

0xfd98,	// (0x0003f19d) tb_ext_find_button_pane_g

0xe623,	// (0x0003da28) main_idle_act4_pane_t1_ParamLimits

0xe639,	// (0x0003da3e) main_idle_act4_pane_t2_ParamLimits

0xfd56,	// (0x0003f15b) main_idle_act4_pane_t_ParamLimits

0xe66b,	// (0x0003da70) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe683,	// (0x0003da88) sat_plugin_idle_act4_pane_ParamLimits

0xe683,	// (0x0003da88) sat_plugin_idle_act4_pane

0xe821,	// (0x0003dc26) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe821,	// (0x0003dc26) sat_plugin_idle_act4_pane_t1

0xe839,	// (0x0003dc3e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe839,	// (0x0003dc3e) sat_plugin_idle_act4_pane_t2

0xe851,	// (0x0003dc56) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe851,	// (0x0003dc56) sat_plugin_idle_act4_pane_t3

0xe869,	// (0x0003dc6e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe869,	// (0x0003dc6e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9d,	// (0x0003f1a2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9d,	// (0x0003f1a2) sat_plugin_idle_act4_pane_t

0x01b8,	// (0x0002f5bd) popup_battery_window_ParamLimits

0x01b8,	// (0x0002f5bd) popup_battery_window

0x2e5a,	// (0x0003225f) bg_popup_sub_pane_cp25_ParamLimits

0x2e5a,	// (0x0003225f) bg_popup_sub_pane_cp25

0x91af,	// (0x000385b4) popup_battery_window_g1_ParamLimits

0x91af,	// (0x000385b4) popup_battery_window_g1

0x91bb,	// (0x000385c0) popup_battery_window_t1_ParamLimits

0x91bb,	// (0x000385c0) popup_battery_window_t1

0x91cd,	// (0x000385d2) popup_battery_window_t2_ParamLimits

0x91cd,	// (0x000385d2) popup_battery_window_t2

0x0001,

0xfda6,	// (0x0003f1ab) popup_battery_window_t_ParamLimits

0xfda6,	// (0x0003f1ab) popup_battery_window_t

0xcacd,	// (0x0003bed2) midp_canvas_pane_ParamLimits

0xcb28,	// (0x0003bf2d) midp_keypad_pane_ParamLimits

0xcb28,	// (0x0003bf2d) midp_keypad_pane

0x4408,	// (0x0003380d) main_midp_pane_ParamLimits

0x6f7c,	// (0x00036381) signal_pane_g2_cp_ParamLimits

0xe881,	// (0x0003dc86) aid_size_cell_midp_keypad_ParamLimits

0xe881,	// (0x0003dc86) aid_size_cell_midp_keypad

0xe89f,	// (0x0003dca4) midp_keyp_game_grid_pane_ParamLimits

0xe89f,	// (0x0003dca4) midp_keyp_game_grid_pane

0xe8c6,	// (0x0003dccb) midp_keyp_rocker_pane_ParamLimits

0xe8c6,	// (0x0003dccb) midp_keyp_rocker_pane

0xe91f,	// (0x0003dd24) midp_keyp_sk_left_pane_ParamLimits

0xe91f,	// (0x0003dd24) midp_keyp_sk_left_pane

0xe973,	// (0x0003dd78) midp_keyp_sk_right_pane_ParamLimits

0xe973,	// (0x0003dd78) midp_keyp_sk_right_pane

0x2397,	// (0x0003179c) bg_button_pane_cp03

0xe9c7,	// (0x0003ddcc) midp_keyp_sk_left_pane_g1

0x2397,	// (0x0003179c) bg_button_pane_cp04

0xe9c7,	// (0x0003ddcc) midp_keyp_sk_right_pane_g1

0x74cb,	// (0x000368d0) midp_keyp_rocker_pane_g1

0xe9d0,	// (0x0003ddd5) keyp_game_cell_pane_ParamLimits

0xe9d0,	// (0x0003ddd5) keyp_game_cell_pane

0x2397,	// (0x0003179c) bg_button_pane_cp02

0xe9f4,	// (0x0003ddf9) keyp_game_cell_pane_g1

0xb429,	// (0x0003a82e) popup_fep_vkb2_window_ParamLimits

0xb429,	// (0x0003a82e) popup_fep_vkb2_window

0xc102,	// (0x0003b507) aid_size_cell_vkb2_ParamLimits

0xc102,	// (0x0003b507) aid_size_cell_vkb2

0xc138,	// (0x0003b53d) popup_fep_vkb2_window_g1_ParamLimits

0xc138,	// (0x0003b53d) popup_fep_vkb2_window_g1

0xc188,	// (0x0003b58d) vkb2_area_bottom_pane_ParamLimits

0xc188,	// (0x0003b58d) vkb2_area_bottom_pane

0xc1dc,	// (0x0003b5e1) vkb2_area_keypad_pane_ParamLimits

0xc1dc,	// (0x0003b5e1) vkb2_area_keypad_pane

0xc224,	// (0x0003b629) vkb2_area_top_pane_ParamLimits

0xc224,	// (0x0003b629) vkb2_area_top_pane

0xc2aa,	// (0x0003b6af) vkb2_top_entry_pane_ParamLimits

0xc2aa,	// (0x0003b6af) vkb2_top_entry_pane

0xc2d7,	// (0x0003b6dc) vkb2_top_grid_left_pane_ParamLimits

0xc2d7,	// (0x0003b6dc) vkb2_top_grid_left_pane

0xc2f7,	// (0x0003b6fc) vkb2_top_grid_right_pane_ParamLimits

0xc2f7,	// (0x0003b6fc) vkb2_top_grid_right_pane

0x1de3,	// (0x000311e8) vkb2_cell_keypad_pane_ParamLimits

0x1de3,	// (0x000311e8) vkb2_cell_keypad_pane

0xc33d,	// (0x0003b742) vkb2_area_bottom_grid_pane_ParamLimits

0xc33d,	// (0x0003b742) vkb2_area_bottom_grid_pane

0xc367,	// (0x0003b76c) vkb2_area_bottom_pane_g1_ParamLimits

0xc367,	// (0x0003b76c) vkb2_area_bottom_pane_g1

0xc38d,	// (0x0003b792) vkb2_area_bottom_pane_g2_ParamLimits

0xc38d,	// (0x0003b792) vkb2_area_bottom_pane_g2

0xc3be,	// (0x0003b7c3) vkb2_area_bottom_pane_g3_ParamLimits

0xc3be,	// (0x0003b7c3) vkb2_area_bottom_pane_g3

0x0002,

0xfdab,	// (0x0003f1b0) vkb2_area_bottom_pane_g_ParamLimits

0xfdab,	// (0x0003f1b0) vkb2_area_bottom_pane_g

0x1f8d,	// (0x00031392) vkb2_top_cell_left_pane_ParamLimits

0x1f8d,	// (0x00031392) vkb2_top_cell_left_pane

0xe9fd,	// (0x0003de02) vkb2_top_entry_pane_g1_ParamLimits

0xe9fd,	// (0x0003de02) vkb2_top_entry_pane_g1

0xea0b,	// (0x0003de10) vkb2_top_entry_pane_t1_ParamLimits

0xea0b,	// (0x0003de10) vkb2_top_entry_pane_t1

0x937e,	// (0x00038783) vkb2_top_entry_pane_t2_ParamLimits

0x937e,	// (0x00038783) vkb2_top_entry_pane_t2

0x93b0,	// (0x000387b5) vkb2_top_entry_pane_t3_ParamLimits

0x93b0,	// (0x000387b5) vkb2_top_entry_pane_t3

0x0002,

0xfdb2,	// (0x0003f1b7) vkb2_top_entry_pane_t_ParamLimits

0xfdb2,	// (0x0003f1b7) vkb2_top_entry_pane_t

0xc428,	// (0x0003b82d) vkb2_top_grid_right_pane_g1_ParamLimits

0xc428,	// (0x0003b82d) vkb2_top_grid_right_pane_g1

0x1ff0,	// (0x000313f5) vkb2_top_grid_right_pane_g2_ParamLimits

0x1ff0,	// (0x000313f5) vkb2_top_grid_right_pane_g2

0x2008,	// (0x0003140d) vkb2_top_grid_right_pane_g3_ParamLimits

0x2008,	// (0x0003140d) vkb2_top_grid_right_pane_g3

0xc43e,	// (0x0003b843) vkb2_top_grid_right_pane_g4_ParamLimits

0xc43e,	// (0x0003b843) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb9,	// (0x0003f1be) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb9,	// (0x0003f1be) vkb2_top_grid_right_pane_g

0x2036,	// (0x0003143b) vkb2_top_cell_left_pane_g1

0x204d,	// (0x00031452) vkb2_cell_keypad_pane_g1_ParamLimits

0x204d,	// (0x00031452) vkb2_cell_keypad_pane_g1

0x93d4,	// (0x000387d9) vkb2_cell_keypad_pane_t1_ParamLimits

0x93d4,	// (0x000387d9) vkb2_cell_keypad_pane_t1

0x205b,	// (0x00031460) vkb2_cell_bottom_grid_pane_ParamLimits

0x205b,	// (0x00031460) vkb2_cell_bottom_grid_pane

0x2094,	// (0x00031499) vkb2_cell_bottom_grid_pane_g1

0xe6b4,	// (0x0003dab9) aid_call2_pane_cp02

0xe6bc,	// (0x0003dac1) aid_call_pane_cp02

0xe6c4,	// (0x0003dac9) clock_digital_number_pane_cp10

0xe6cc,	// (0x0003dad1) clock_digital_number_pane_cp11

0xe6d4,	// (0x0003dad9) clock_digital_number_pane_cp12

0xe6dc,	// (0x0003dae1) clock_digital_number_pane_cp13

0xe6e4,	// (0x0003dae9) clock_digital_separator_pane_cp10

0x3aa3,	// (0x00032ea8) popup_clock_digital_analogue_window_cp2_g1

0x3aa3,	// (0x00032ea8) popup_clock_digital_analogue_window_cp2_g2

0xe6ec,	// (0x0003daf1) popup_clock_digital_analogue_window_cp2_g3

0x3aa3,	// (0x00032ea8) popup_clock_digital_analogue_window_cp2_g4

0xe6ec,	// (0x0003daf1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6e,	// (0x0003f173) popup_clock_digital_analogue_window_cp2_g

0xe6f4,	// (0x0003daf9) popup_clock_digital_analogue_window_cp2_t1

0xe702,	// (0x0003db07) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd79,	// (0x0003f17e) popup_clock_digital_analogue_window_cp2_t

0x74cb,	// (0x000368d0) clock_digital_number_pane_cp10_g1

0x74cb,	// (0x000368d0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb55,	// (0x0003ef5a) clock_digital_number_pane_cp10_g

0x74cb,	// (0x000368d0) clock_digital_separator_pane_cp10_g1

0x74cb,	// (0x000368d0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb55,	// (0x0003ef5a) clock_digital_separator_pane_cp10_g

0x8dfb,	// (0x00038200) uniindi_top_pane_g3

0x8e0c,	// (0x00038211) uniindi_top_pane_g4

0x1e6e,	// (0x00031273) vkb2_row_keypad_pane_ParamLimits

0x1e6e,	// (0x00031273) vkb2_row_keypad_pane

0x20b0,	// (0x000314b5) vkb2_cell_t_keypad_pane_ParamLimits

0x20b0,	// (0x000314b5) vkb2_cell_t_keypad_pane

0x20c0,	// (0x000314c5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x20c0,	// (0x000314c5) vkb2_cell_t_keypad_pane_cp08

0x20d3,	// (0x000314d8) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x20d3,	// (0x000314d8) vkb2_cell_t_keypad_pane_cp09

0x20e7,	// (0x000314ec) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x20e7,	// (0x000314ec) vkb2_cell_t_keypad_pane_cp01

0x20f8,	// (0x000314fd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x20f8,	// (0x000314fd) vkb2_cell_t_keypad_pane_cp02

0x2109,	// (0x0003150e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2109,	// (0x0003150e) vkb2_cell_t_keypad_pane_cp03

0x211a,	// (0x0003151f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x211a,	// (0x0003151f) vkb2_cell_t_keypad_pane_cp04

0x212b,	// (0x00031530) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x212b,	// (0x00031530) vkb2_cell_t_keypad_pane_cp05

0x213c,	// (0x00031541) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x213c,	// (0x00031541) vkb2_cell_t_keypad_pane_cp06

0x214d,	// (0x00031552) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x214d,	// (0x00031552) vkb2_cell_t_keypad_pane_cp07

0x215e,	// (0x00031563) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x215e,	// (0x00031563) vkb2_cell_t_keypad_pane_cp10

0x1913,	// (0x00030d18) vkb2_cell_t_keypad_pane_g1

0x93eb,	// (0x000387f0) vkb2_cell_t_keypad_pane_t1

0x00f3,	// (0x0002f4f8) popup_grid_graphic2_window

0xea44,	// (0x0003de49) aid_size_cell_graphic2_ParamLimits

0xea44,	// (0x0003de49) aid_size_cell_graphic2

0xea82,	// (0x0003de87) bg_popup_window_pane_cp21_ParamLimits

0xea82,	// (0x0003de87) bg_popup_window_pane_cp21

0xea90,	// (0x0003de95) graphic2_pages_pane_ParamLimits

0xea90,	// (0x0003de95) graphic2_pages_pane

0xeae6,	// (0x0003deeb) grid_graphic2_control_pane_ParamLimits

0xeae6,	// (0x0003deeb) grid_graphic2_control_pane

0xeb2e,	// (0x0003df33) grid_graphic2_pane_ParamLimits

0xeb2e,	// (0x0003df33) grid_graphic2_pane

0xebb5,	// (0x0003dfba) cell_graphic2_pane

0x2397,	// (0x0003179c) main_comp_mode_pane

0x867b,	// (0x00037a80) list_ai3_gene_pane_ParamLimits

0xe3fb,	// (0x0003d800) bg_popup_window_pane_cp19_ParamLimits

0x8a51,	// (0x00037e56) bg_touch_area_indi_pane_ParamLimits

0x8a51,	// (0x00037e56) bg_touch_area_indi_pane

0x8a67,	// (0x00037e6c) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a67,	// (0x00037e6c) bg_touch_area_indi_pane_cp01

0x8a7d,	// (0x00037e82) bg_touch_area_indi_pane_cp02_ParamLimits

0x8a7d,	// (0x00037e82) bg_touch_area_indi_pane_cp02

0x8a95,	// (0x00037e9a) bg_touch_area_indi_pane_cp03_ParamLimits

0x8a95,	// (0x00037e9a) bg_touch_area_indi_pane_cp03

0x8aaf,	// (0x00037eb4) popup_slider_window_g1_ParamLimits

0x8acb,	// (0x00037ed0) popup_slider_window_g2_ParamLimits

0x8ae7,	// (0x00037eec) popup_slider_window_g3_ParamLimits

0xfd03,	// (0x0003f108) popup_slider_window_g_ParamLimits

0x8b43,	// (0x00037f48) popup_slider_window_t1_ParamLimits

0x8bb7,	// (0x00037fbc) small_volume_slider_vertical_pane_ParamLimits

0xebb5,	// (0x0003dfba) cell_graphic2_pane_ParamLimits

0xec12,	// (0x0003e017) bg_button_pane_cp10_ParamLimits

0xec12,	// (0x0003e017) bg_button_pane_cp10

0xec25,	// (0x0003e02a) bg_button_pane_cp11_ParamLimits

0xec25,	// (0x0003e02a) bg_button_pane_cp11

0xec38,	// (0x0003e03d) graphic2_pages_pane_g1_ParamLimits

0xec38,	// (0x0003e03d) graphic2_pages_pane_g1

0xec53,	// (0x0003e058) graphic2_pages_pane_g2_ParamLimits

0xec53,	// (0x0003e058) graphic2_pages_pane_g2

0x0001,

0xfdc7,	// (0x0003f1cc) graphic2_pages_pane_g_ParamLimits

0xfdc7,	// (0x0003f1cc) graphic2_pages_pane_g

0xec6b,	// (0x0003e070) graphic2_pages_pane_t1_ParamLimits

0xec6b,	// (0x0003e070) graphic2_pages_pane_t1

0xec83,	// (0x0003e088) cell_graphic2_control_pane_ParamLimits

0xec83,	// (0x0003e088) cell_graphic2_control_pane

0xecb5,	// (0x0003e0ba) cell_graphic2_pane_g1_ParamLimits

0xecb5,	// (0x0003e0ba) cell_graphic2_pane_g1

0xd8ff,	// (0x0003cd04) cell_graphic2_pane_g2_ParamLimits

0xd8ff,	// (0x0003cd04) cell_graphic2_pane_g2

0xe32e,	// (0x0003d733) cell_graphic2_pane_g3_ParamLimits

0xe32e,	// (0x0003d733) cell_graphic2_pane_g3

0xd90c,	// (0x0003cd11) cell_graphic2_pane_g4_ParamLimits

0xd90c,	// (0x0003cd11) cell_graphic2_pane_g4

0xecc2,	// (0x0003e0c7) cell_graphic2_pane_g5_ParamLimits

0xecc2,	// (0x0003e0c7) cell_graphic2_pane_g5

0x0004,

0xfdcc,	// (0x0003f1d1) cell_graphic2_pane_g_ParamLimits

0xfdcc,	// (0x0003f1d1) cell_graphic2_pane_g

0xece2,	// (0x0003e0e7) cell_graphic2_pane_t1_ParamLimits

0xece2,	// (0x0003e0e7) cell_graphic2_pane_t1

0x5bdf,	// (0x00034fe4) grid_highlight_pane_cp11_ParamLimits

0x5bdf,	// (0x00034fe4) grid_highlight_pane_cp11

0x2e5a,	// (0x0003225f) bg_button_pane_cp05

0xed17,	// (0x0003e11c) cell_graphic2_control_pane_g1

0x74cb,	// (0x000368d0) bg_touch_area_indi_pane_g1

0x96dc,	// (0x00038ae1) aid_cmod_rocker_key_size

0x96e6,	// (0x00038aeb) aid_cmode_itu_key_size

0x96f0,	// (0x00038af5) main_cmode_video_pane

0x96fa,	// (0x00038aff) main_comp_mode_itu_pane

0x9706,	// (0x00038b0b) main_comp_mode_rocker_pane

0x9712,	// (0x00038b17) cell_cmode_rocker_pane_ParamLimits

0x9712,	// (0x00038b17) cell_cmode_rocker_pane

0x9724,	// (0x00038b29) cell_cmode_itu_pane_ParamLimits

0x9724,	// (0x00038b29) cell_cmode_itu_pane

0x343d,	// (0x00032842) bg_button_pane_cp06_ParamLimits

0x343d,	// (0x00032842) bg_button_pane_cp06

0x775d,	// (0x00036b62) cell_cmode_rocker_pane_g1_ParamLimits

0x775d,	// (0x00036b62) cell_cmode_rocker_pane_g1

0x8c5b,	// (0x00038060) cell_cmode_rocker_pane_g2_ParamLimits

0x8c5b,	// (0x00038060) cell_cmode_rocker_pane_g2

0x0001,

0xfddc,	// (0x0003f1e1) cell_cmode_rocker_pane_g_ParamLimits

0xfddc,	// (0x0003f1e1) cell_cmode_rocker_pane_g

0x2397,	// (0x0003179c) bg_button_pane_cp07

0x9739,	// (0x00038b3e) cell_cmode_itu_pane_g1

0x9742,	// (0x00038b47) cell_cmode_itu_pane_t1

0x9750,	// (0x00038b55) cell_cmode_itu_pane_t2

0x0001,

0xfde1,	// (0x0003f1e6) cell_cmode_itu_pane_t

0x8e7e,	// (0x00038283) aid_touch_ctrl_left

0x8e86,	// (0x0003828b) aid_touch_ctrl_right

0x2397,	// (0x0003179c) compa_mode_pane

0xed3d,	// (0x0003e142) aid_cmod_rocker_key_size_cp

0xed47,	// (0x0003e14c) aid_cmode_itu_key_size_cp

0x9772,	// (0x00038b77) compa_mode_pane_g1

0x977a,	// (0x00038b7f) compa_mode_pane_g2

0x9782,	// (0x00038b87) compa_mode_pane_g3

0x0002,

0xfde6,	// (0x0003f1eb) compa_mode_pane_g

0xed51,	// (0x0003e156) main_comp_mode_itu_pane_cp

0xed59,	// (0x0003e15e) main_comp_mode_rocker_pane_cp

0xed61,	// (0x0003e166) cell_cmode_itu_pane_cp_ParamLimits

0xed61,	// (0x0003e166) cell_cmode_itu_pane_cp

0xed76,	// (0x0003e17b) cell_cmode_rocker_pane_cp_ParamLimits

0xed76,	// (0x0003e17b) cell_cmode_rocker_pane_cp

0x343d,	// (0x00032842) bg_button_pane_cp06_cp_ParamLimits

0x343d,	// (0x00032842) bg_button_pane_cp06_cp

0x775d,	// (0x00036b62) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x775d,	// (0x00036b62) cell_cmode_rocker_pane_g1_cp

0x74cb,	// (0x000368d0) cell_cmode_rocker_pane_g2_cp

0x2397,	// (0x0003179c) bg_button_pane_cp07_cp

0xed88,	// (0x0003e18d) cell_cmode_itu_pane_g1_cp

0xed91,	// (0x0003e196) cell_cmode_itu_pane_t1_cp

0xed91,	// (0x0003e196) cell_cmode_itu_pane_t2_cp

0xda35,	// (0x0003ce3a) settings_code_pane_cp2

0x248b,	// (0x00031890) bg_popup_window_pane_cp3_ParamLimits

0x3034,	// (0x00032439) heading_pane_cp3_ParamLimits

0x3040,	// (0x00032445) listscroll_popup_graphic_pane_ParamLimits

0x16bc,	// (0x00030ac1) fep_hwr_aid_pane_ParamLimits

0x1b34,	// (0x00030f39) aid_touch_sctrl_top_ParamLimits

0x1b4f,	// (0x00030f54) sctrl_sk_top_pane_g1_ParamLimits

0x1913,	// (0x00030d18) sctrl_sk_top_pane_g2_ParamLimits

0xfd1c,	// (0x0003f121) sctrl_sk_top_pane_g_ParamLimits

0x1b5c,	// (0x00030f61) sctrl_sk_top_pane_t1_ParamLimits

0x1b34,	// (0x00030f39) aid_touch_sctrl_bottom_ParamLimits

0x1b5c,	// (0x00030f61) sctrl_sk_bottom_pane_t1_ParamLimits

0x8dc7,	// (0x000381cc) aid_area_touch_clock

0xc26c,	// (0x0003b671) aid_vkb2_area_top_pane_cell_ParamLimits

0xc26c,	// (0x0003b671) aid_vkb2_area_top_pane_cell

0xc317,	// (0x0003b71c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc317,	// (0x0003b71c) aid_vkb2_area_bottom_pane_cell

0x9336,	// (0x0003873b) popup_char_count_window

0x97cf,	// (0x00038bd4) popup_char_count_window_g1

0x97d8,	// (0x00038bdd) popup_char_count_window_g2

0x97e1,	// (0x00038be6) popup_char_count_window_g3

0x0002,

0xfded,	// (0x0003f1f2) popup_char_count_window_g

0x97ea,	// (0x00038bef) popup_char_count_window_t1

0x1c0b,	// (0x00031010) popup_fep_char_preview_window_ParamLimits

0x1c0b,	// (0x00031010) popup_fep_char_preview_window

0xc28c,	// (0x0003b691) vkb2_top_candi_pane_ParamLimits

0xc28c,	// (0x0003b691) vkb2_top_candi_pane

0xed9f,	// (0x0003e1a4) cell_vkb2_top_candi_pane_ParamLimits

0xed9f,	// (0x0003e1a4) cell_vkb2_top_candi_pane

0x2173,	// (0x00031578) bg_popup_fep_char_preview_window_ParamLimits

0x2173,	// (0x00031578) bg_popup_fep_char_preview_window

0x2181,	// (0x00031586) popup_fep_char_preview_window_t1_ParamLimits

0x2181,	// (0x00031586) popup_fep_char_preview_window_t1

0x9845,	// (0x00038c4a) bg_popup_fep_char_preview_window_g1

0x984d,	// (0x00038c52) bg_popup_fep_char_preview_window_g2

0x9855,	// (0x00038c5a) bg_popup_fep_char_preview_window_g3

0x985d,	// (0x00038c62) bg_popup_fep_char_preview_window_g4

0x9865,	// (0x00038c6a) bg_popup_fep_char_preview_window_g5

0x21bb,	// (0x000315c0) bg_popup_fep_char_preview_window_g6

0x986d,	// (0x00038c72) bg_popup_fep_char_preview_window_g7

0x9875,	// (0x00038c7a) bg_popup_fep_char_preview_window_g8

0x987d,	// (0x00038c82) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf4,	// (0x0003f1f9) bg_popup_fep_char_preview_window_g

0x1913,	// (0x00030d18) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1913,	// (0x00030d18) cell_vkb2_top_candi_pane_g1

0x1921,	// (0x00030d26) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1921,	// (0x00030d26) cell_vkb2_top_candi_pane_g2

0x9680,	// (0x00038a85) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9680,	// (0x00038a85) cell_vkb2_top_candi_pane_g3

0x21c3,	// (0x000315c8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x21c3,	// (0x000315c8) cell_vkb2_top_candi_pane_g4

0x7c28,	// (0x0003702d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c28,	// (0x0003702d) cell_vkb2_top_candi_pane_g5

0x21e4,	// (0x000315e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x21e4,	// (0x000315e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe07,	// (0x0003f20c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe07,	// (0x0003f20c) cell_vkb2_top_candi_pane_g

0x21f2,	// (0x000315f7) cell_vkb2_top_candi_pane_t1

0x151c,	// (0x00030921) aid_size_touch_slider_mark_ParamLimits

0x151c,	// (0x00030921) aid_size_touch_slider_mark

0xeacc,	// (0x0003ded1) grid_graphic2_catg_pane_ParamLimits

0xeacc,	// (0x0003ded1) grid_graphic2_catg_pane

0xeb88,	// (0x0003df8d) popup_grid_graphic2_window_t1_ParamLimits

0xeb88,	// (0x0003df8d) popup_grid_graphic2_window_t1

0xeb9e,	// (0x0003dfa3) popup_grid_graphic2_window_t2_ParamLimits

0xeb9e,	// (0x0003dfa3) popup_grid_graphic2_window_t2

0x0001,

0xfdc2,	// (0x0003f1c7) popup_grid_graphic2_window_t_ParamLimits

0xfdc2,	// (0x0003f1c7) popup_grid_graphic2_window_t

0x2e5a,	// (0x0003225f) bg_button_pane_cp05_ParamLimits

0xed17,	// (0x0003e11c) cell_graphic2_control_pane_g1_ParamLimits

0xee05,	// (0x0003e20a) cell_graphic2_catg_pane_ParamLimits

0xee05,	// (0x0003e20a) cell_graphic2_catg_pane

0x2397,	// (0x0003179c) bg_button_pane_cp12

0xee17,	// (0x0003e21c) cell_graphic2_catg_pane_g1

0x8d93,	// (0x00038198) cell_tb_ext_pane_t1_ParamLimits

0x1fad,	// (0x000313b2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1fad,	// (0x000313b2) vkb2_top_cell_right_narrow_pane

0x1fc5,	// (0x000313ca) vkb2_top_cell_right_wide_pane_ParamLimits

0x1fc5,	// (0x000313ca) vkb2_top_cell_right_wide_pane

0x16ae,	// (0x00030ab3) bg_vkb2_func_pane_ParamLimits

0x16ae,	// (0x00030ab3) bg_vkb2_func_pane

0x2036,	// (0x0003143b) vkb2_top_cell_left_pane_g1_ParamLimits

0x16ae,	// (0x00030ab3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x16ae,	// (0x00030ab3) bg_vkb2_fuc_pane_cp03

0x2094,	// (0x00031499) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ea6,	// (0x000342ab) bg_vkb2_func_pane_g1

0x4eae,	// (0x000342b3) bg_vkb2_func_pane_g2

0x4ebe,	// (0x000342c3) bg_vkb2_func_pane_g3

0x4eb6,	// (0x000342bb) bg_vkb2_func_pane_g4

0x4ec6,	// (0x000342cb) bg_vkb2_func_pane_g5

0x4ece,	// (0x000342d3) bg_vkb2_func_pane_g6

0x4ed6,	// (0x000342db) bg_vkb2_func_pane_g7

0x4ede,	// (0x000342e3) bg_vkb2_func_pane_g8

0x4e9e,	// (0x000342a3) bg_vkb2_func_pane_g9

0x0008,

0xfe14,	// (0x0003f219) bg_vkb2_func_pane_g

0x16ae,	// (0x00030ab3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x16ae,	// (0x00030ab3) bg_vkb2_fuc_pane_cp01

0x2036,	// (0x0003143b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2036,	// (0x0003143b) vkb2_top_cell_right_wide_pane_g1

0x16ae,	// (0x00030ab3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x16ae,	// (0x00030ab3) bg_vkb2_fuc_pane_cp02

0x2094,	// (0x00031499) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2094,	// (0x00031499) vkb2_top_cell_right_narrow_pane_g1

0xe33b,	// (0x0003d740) aid_touch_area_decrease_ParamLimits

0xe33b,	// (0x0003d740) aid_touch_area_decrease

0xe36f,	// (0x0003d774) aid_touch_area_increase_ParamLimits

0xe36f,	// (0x0003d774) aid_touch_area_increase

0xe397,	// (0x0003d79c) aid_touch_area_mute_ParamLimits

0xe397,	// (0x0003d79c) aid_touch_area_mute

0xe3c7,	// (0x0003d7cc) aid_touch_area_slider_ParamLimits

0xe3c7,	// (0x0003d7cc) aid_touch_area_slider

0xe407,	// (0x0003d80c) popup_slider_window_g4_ParamLimits

0xe407,	// (0x0003d80c) popup_slider_window_g4

0xe42f,	// (0x0003d834) popup_slider_window_g5_ParamLimits

0xe42f,	// (0x0003d834) popup_slider_window_g5

0xe463,	// (0x0003d868) popup_slider_window_g6_ParamLimits

0xe463,	// (0x0003d868) popup_slider_window_g6

0x8b71,	// (0x00037f76) popup_slider_window_t2_ParamLimits

0x8b71,	// (0x00037f76) popup_slider_window_t2

0x0001,

0xfd10,	// (0x0003f115) popup_slider_window_t_ParamLimits

0xfd10,	// (0x0003f115) popup_slider_window_t

0xe47f,	// (0x0003d884) slider_pane_ParamLimits

0xe47f,	// (0x0003d884) slider_pane

0x98a0,	// (0x00038ca5) slider_pane_g1_ParamLimits

0x98a0,	// (0x00038ca5) slider_pane_g1

0x98b4,	// (0x00038cb9) slider_pane_g2_ParamLimits

0x98b4,	// (0x00038cb9) slider_pane_g2

0x98ca,	// (0x00038ccf) slider_pane_g3_ParamLimits

0x98ca,	// (0x00038ccf) slider_pane_g3

0x0003,

0xfe27,	// (0x0003f22c) slider_pane_g_ParamLimits

0xfe27,	// (0x0003f22c) slider_pane_g

0xd1d9,	// (0x0003c5de) popup_tb_float_extension_window_ParamLimits

0xd1d9,	// (0x0003c5de) popup_tb_float_extension_window

0x98f6,	// (0x00038cfb) aid_size_cell_tb_float_ext

0x2397,	// (0x0003179c) bg_popup_sub_window_cp28

0x9902,	// (0x00038d07) grid_tb_float_ext_pane

0x990c,	// (0x00038d11) cell_tb_float_ext_pane_ParamLimits

0x990c,	// (0x00038d11) cell_tb_float_ext_pane

0x9926,	// (0x00038d2b) cell_tb_float_ext_pane_g1

0x992f,	// (0x00038d34) grid_highlight_pane_cp12

0xbe8c,	// (0x0003b291) cell_last_hwr_side_pane_ParamLimits

0xbe8c,	// (0x0003b291) cell_last_hwr_side_pane

0x74cb,	// (0x000368d0) cell_last_hwr_side_pane_g1

0x9938,	// (0x00038d3d) cell_last_hwr_side_pane_g2

0x0001,

0xfe30,	// (0x0003f235) cell_last_hwr_side_pane_g

0xc3f3,	// (0x0003b7f8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc3f3,	// (0x0003b7f8) vkb2_area_bottom_space_btn_pane

0x1913,	// (0x00030d18) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x93eb,	// (0x000387f0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x21f2,	// (0x000315f7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2211,	// (0x00031616) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2211,	// (0x00031616) vkb2_area_bottom_space_btn_pane_g1

0x224b,	// (0x00031650) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x224b,	// (0x00031650) vkb2_area_bottom_space_btn_pane_g2

0x2281,	// (0x00031686) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2281,	// (0x00031686) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe35,	// (0x0003f23a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe35,	// (0x0003f23a) vkb2_area_bottom_space_btn_pane_g

0x1771,	// (0x00030b76) cel_fep_hwr_func_pane_ParamLimits

0x1771,	// (0x00030b76) cel_fep_hwr_func_pane

0xbe61,	// (0x0003b266) cell_hwr_side_button_pane_ParamLimits

0xbe61,	// (0x0003b266) cell_hwr_side_button_pane

0x8dc7,	// (0x000381cc) aid_area_touch_clock_ParamLimits

0x2e5a,	// (0x0003225f) bg_uniindi_top_pane_ParamLimits

0x8dd9,	// (0x000381de) uniindi_top_pane_g1_ParamLimits

0x8def,	// (0x000381f4) uniindi_top_pane_g2_ParamLimits

0x8dfb,	// (0x00038200) uniindi_top_pane_g3_ParamLimits

0x8e0c,	// (0x00038211) uniindi_top_pane_g4_ParamLimits

0xfd48,	// (0x0003f14d) uniindi_top_pane_g_ParamLimits

0x8e19,	// (0x0003821e) uniindi_top_pane_t1_ParamLimits

0x2e5a,	// (0x0003225f) bg_vkb2_func_pane_cp01_ParamLimits

0x2e5a,	// (0x0003225f) bg_vkb2_func_pane_cp01

0x9941,	// (0x00038d46) cel_fep_hwr_func_pane_g1_ParamLimits

0x9941,	// (0x00038d46) cel_fep_hwr_func_pane_g1

0x2e5a,	// (0x0003225f) bg_vkb2_func_pane_cp02_ParamLimits

0x2e5a,	// (0x0003225f) bg_vkb2_func_pane_cp02

0x9941,	// (0x00038d46) cell_hwr_side_button_pane_g1_ParamLimits

0x9941,	// (0x00038d46) cell_hwr_side_button_pane_g1

0x4d1f,	// (0x00034124) status_pane_g4_ParamLimits

0x4d1f,	// (0x00034124) status_pane_g4

0x4d39,	// (0x0003413e) status_pane_t1

0x7204,	// (0x00036609) form2_midp_gauge_slider_cont_pane

0x720c,	// (0x00036611) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd2c,	// (0x0003d131) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd3e,	// (0x0003d143) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb08,	// (0x0003ef0d) form2_midp_gauge_slider_pane_t_ParamLimits

0x7242,	// (0x00036647) form2_midp_slider_pane_ParamLimits

0x1bcb,	// (0x00030fd0) aid_size_cell_func_vkb2_ParamLimits

0x1bcb,	// (0x00030fd0) aid_size_cell_func_vkb2

0x98e2,	// (0x00038ce7) slider_pane_g4_ParamLimits

0x98e2,	// (0x00038ce7) slider_pane_g4

0xc454,	// (0x0003b859) form2_midp_gauge_slider_pane_t2_cp01

0xc462,	// (0x0003b867) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc462,	// (0x0003b867) form2_midp_gauge_slider_pane_t3_cp01

0x22f6,	// (0x000316fb) form2_midp_slider_pane_cp01

0x2397,	// (0x0003179c) navi_smil_pane

0x997a,	// (0x00038d7f) navi_smil_pane_g1

0x9982,	// (0x00038d87) navi_smil_pane_t1

0x994f,	// (0x00038d54) form2_midp_slider_pane_g1

0x9958,	// (0x00038d5d) form2_midp_slider_pane_g2

0x9960,	// (0x00038d65) form2_midp_slider_pane_g3

0x994f,	// (0x00038d54) form2_midp_slider_pane_g4

0xee20,	// (0x0003e225) form2_midp_slider_pane_g5

0x0004,

0xfe3e,	// (0x0003f243) form2_midp_slider_pane_g

0x22bb,	// (0x000316c0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x22bb,	// (0x000316c0) vkb2_area_bottom_space_btn_pane_g4

0xd3b5,	// (0x0003c7ba) lc0_navi_pane_ParamLimits

0xd3b5,	// (0x0003c7ba) lc0_navi_pane

0xd41f,	// (0x0003c824) lc0_stat_indi_pane_ParamLimits

0xd41f,	// (0x0003c824) lc0_stat_indi_pane

0xd434,	// (0x0003c839) ls0_title_pane_ParamLimits

0xd434,	// (0x0003c839) ls0_title_pane

0x343d,	// (0x00032842) bg_popup_sub_pane_cp14_ParamLimits

0x8dae,	// (0x000381b3) list_uniindi_pane_ParamLimits

0x8dba,	// (0x000381bf) uniindi_top_pane_ParamLimits

0x8e56,	// (0x0003825b) list_single_uniindi_pane_g1_ParamLimits

0x8e69,	// (0x0003826e) list_single_uniindi_pane_t1_ParamLimits

0xc47f,	// (0x0003b884) lc0_stat_clock_pane_ParamLimits

0xc47f,	// (0x0003b884) lc0_stat_clock_pane

0xee29,	// (0x0003e22e) lc0_stat_indi_pane_g1_ParamLimits

0xee29,	// (0x0003e22e) lc0_stat_indi_pane_g1

0xee36,	// (0x0003e23b) lc0_stat_indi_pane_g2_ParamLimits

0xee36,	// (0x0003e23b) lc0_stat_indi_pane_g2

0x0001,

0xfe49,	// (0x0003f24e) lc0_stat_indi_pane_g_ParamLimits

0xfe49,	// (0x0003f24e) lc0_stat_indi_pane_g

0xc48c,	// (0x0003b891) lc0_uni_indicator_pane_ParamLimits

0xc48c,	// (0x0003b891) lc0_uni_indicator_pane

0x99aa,	// (0x00038daf) ls0_title_pane_g1_ParamLimits

0x99aa,	// (0x00038daf) ls0_title_pane_g1

0xee43,	// (0x0003e248) ls0_title_pane_t1_ParamLimits

0xee43,	// (0x0003e248) ls0_title_pane_t1

0xc499,	// (0x0003b89e) lc0_uni_indicator_pane_g1_ParamLimits

0xc499,	// (0x0003b89e) lc0_uni_indicator_pane_g1

0x99f4,	// (0x00038df9) lc0_stat_clock_pane_t1

0x2397,	// (0x0003179c) main_ai5_pane

0x9a02,	// (0x00038e07) ai5_sk_pane_ParamLimits

0x9a02,	// (0x00038e07) ai5_sk_pane

0xee71,	// (0x0003e276) cell_ai5_widget_pane_ParamLimits

0xee71,	// (0x0003e276) cell_ai5_widget_pane

0x9a91,	// (0x00038e96) aid_size_cell_widget_grid

0x9aa5,	// (0x00038eaa) bg_ai5_widget_pane_ParamLimits

0x9aa5,	// (0x00038eaa) bg_ai5_widget_pane

0xeefa,	// (0x0003e2ff) cell_ai5_widget_pane_g2

0xef0a,	// (0x0003e30f) cell_ai5_widget_pane_g3

0xef29,	// (0x0003e32e) cell_ai5_widget_pane_g4

0xef35,	// (0x0003e33a) cell_ai5_widget_pane_g5

0xef41,	// (0x0003e346) cell_ai5_widget_pane_g6

0xef4d,	// (0x0003e352) cell_ai5_widget_pane_g7

0xef95,	// (0x0003e39a) cell_ai5_widget_pane_t1_ParamLimits

0xef95,	// (0x0003e39a) cell_ai5_widget_pane_t1

0xefb2,	// (0x0003e3b7) cell_ai5_widget_pane_t2_ParamLimits

0xefb2,	// (0x0003e3b7) cell_ai5_widget_pane_t2

0xefca,	// (0x0003e3cf) cell_ai5_widget_pane_t3_ParamLimits

0xefca,	// (0x0003e3cf) cell_ai5_widget_pane_t3

0xefe2,	// (0x0003e3e7) cell_ai5_widget_pane_t4_ParamLimits

0xefe2,	// (0x0003e3e7) cell_ai5_widget_pane_t4

0xeffc,	// (0x0003e401) cell_ai5_widget_pane_t5_ParamLimits

0xeffc,	// (0x0003e401) cell_ai5_widget_pane_t5

0x9bee,	// (0x00038ff3) cell_ai5_widget_pane_t6_ParamLimits

0x9bee,	// (0x00038ff3) cell_ai5_widget_pane_t6

0x9c00,	// (0x00039005) cell_ai5_widget_pane_t7_ParamLimits

0x9c00,	// (0x00039005) cell_ai5_widget_pane_t7

0xf01b,	// (0x0003e420) cell_ai5_widget_pane_t8_ParamLimits

0xf01b,	// (0x0003e420) cell_ai5_widget_pane_t8

0x0009,

0xfe63,	// (0x0003f268) cell_ai5_widget_pane_t_ParamLimits

0xfe63,	// (0x0003f268) cell_ai5_widget_pane_t

0xf067,	// (0x0003e46c) grid_ai5_widget_pane

0x343d,	// (0x00032842) highlight_cell_ai5_widget_pane_ParamLimits

0x343d,	// (0x00032842) highlight_cell_ai5_widget_pane

0xf07f,	// (0x0003e484) ai5_sk_left_pane

0xf089,	// (0x0003e48e) ai5_sk_middle_pane

0xf093,	// (0x0003e498) ai5_sk_right_pane

0x9c9b,	// (0x000390a0) bg_ai5_widget_pane_g1_ParamLimits

0x9c9b,	// (0x000390a0) bg_ai5_widget_pane_g1

0x9ca7,	// (0x000390ac) bg_ai5_widget_pane_g2_ParamLimits

0x9ca7,	// (0x000390ac) bg_ai5_widget_pane_g2

0x9cb3,	// (0x000390b8) bg_ai5_widget_pane_g3_ParamLimits

0x9cb3,	// (0x000390b8) bg_ai5_widget_pane_g3

0x9cbf,	// (0x000390c4) bg_ai5_widget_pane_g4_ParamLimits

0x9cbf,	// (0x000390c4) bg_ai5_widget_pane_g4

0x9ccb,	// (0x000390d0) bg_ai5_widget_pane_g5_ParamLimits

0x9ccb,	// (0x000390d0) bg_ai5_widget_pane_g5

0x9cd7,	// (0x000390dc) bg_ai5_widget_pane_g6_ParamLimits

0x9cd7,	// (0x000390dc) bg_ai5_widget_pane_g6

0x9ce3,	// (0x000390e8) bg_ai5_widget_pane_g7_ParamLimits

0x9ce3,	// (0x000390e8) bg_ai5_widget_pane_g7

0x9cef,	// (0x000390f4) bg_ai5_widget_pane_g8_ParamLimits

0x9cef,	// (0x000390f4) bg_ai5_widget_pane_g8

0x9cfb,	// (0x00039100) bg_ai5_widget_pane_g9_ParamLimits

0x9cfb,	// (0x00039100) bg_ai5_widget_pane_g9

0x0008,

0xfe78,	// (0x0003f27d) bg_ai5_widget_pane_g_ParamLimits

0xfe78,	// (0x0003f27d) bg_ai5_widget_pane_g

0x9d2e,	// (0x00039133) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d2e,	// (0x00039133) cell_shortcut_ai5_widget_pane

0x2554,	// (0x00031959) bg_cell_shortcut_ai5_widget_pane

0x9d3f,	// (0x00039144) cell_grid_ai5_widget_pane_g1

0x9d48,	// (0x0003914d) highlight_cell_shortcut_ai5_widget_pane

0x4ea6,	// (0x000342ab) ai5_sk_left_pane_g1

0x9d50,	// (0x00039155) ai5_sk_left_pane_g2

0x9d58,	// (0x0003915d) ai5_sk_left_pane_g3

0x9d60,	// (0x00039165) ai5_sk_left_pane_g4

0x0003,

0xfe8b,	// (0x0003f290) ai5_sk_left_pane_g

0x9d68,	// (0x0003916d) ai5_sk_left_pane_t1

0x4eae,	// (0x000342b3) ai5_sk_right_pane_g1

0x9d76,	// (0x0003917b) ai5_sk_right_pane_g2

0x9d7e,	// (0x00039183) ai5_sk_right_pane_g3

0x9d86,	// (0x0003918b) ai5_sk_right_pane_g4

0x0003,

0xfe94,	// (0x0003f299) ai5_sk_right_pane_g

0x9d8e,	// (0x00039193) ai5_sk_right_pane_t1

0x4eae,	// (0x000342b3) ai5_sk_middle_pane_g1

0x4ea6,	// (0x000342ab) ai5_sk_middle_pane_g2

0x4ec6,	// (0x000342cb) ai5_sk_middle_pane_g3

0x9d7e,	// (0x00039183) ai5_sk_middle_pane_g4

0x9d58,	// (0x0003915d) ai5_sk_middle_pane_g5

0x9d9c,	// (0x000391a1) ai5_sk_middle_pane_g6

0xf09d,	// (0x0003e4a2) ai5_sk_middle_pane_g7

0x0006,

0xfe9d,	// (0x0003f2a2) ai5_sk_middle_pane_g

0xd2a1,	// (0x0003c6a6) aid_touch_area_size_lc0_ParamLimits

0xd2a1,	// (0x0003c6a6) aid_touch_area_size_lc0

0x1942,	// (0x00030d47) cell_hwr_candidate_pane_t1_ParamLimits

0x4a01,	// (0x00033e06) aid_touch_navi_pane

0xd526,	// (0x0003c92b) status_dt_navi_pane_ParamLimits

0xd526,	// (0x0003c92b) status_dt_navi_pane

0xd53e,	// (0x0003c943) status_dt_sta_pane_ParamLimits

0xd53e,	// (0x0003c943) status_dt_sta_pane

0xf0a5,	// (0x0003e4aa) dt_sta_controll_pane

0xf0b2,	// (0x0003e4b7) dt_sta_indi_pane

0xf0bf,	// (0x0003e4c4) dt_sta_title_pane

0x2e5a,	// (0x0003225f) bg_dt_sta_indi_pane_ParamLimits

0x2e5a,	// (0x0003225f) bg_dt_sta_indi_pane

0x9ddd,	// (0x000391e2) dt_sta_battery_pane

0xf0d1,	// (0x0003e4d6) dt_sta_indi_pane_g1

0xf0da,	// (0x0003e4df) dt_sta_indi_pane_g2

0xf0e3,	// (0x0003e4e8) dt_sta_indi_pane_g3

0x0002,

0xfeac,	// (0x0003f2b1) dt_sta_indi_pane_g

0xf0ec,	// (0x0003e4f1) dt_sta_signal_pane

0x343d,	// (0x00032842) bg_dt_sta_title_pane_ParamLimits

0x343d,	// (0x00032842) bg_dt_sta_title_pane

0x5d4b,	// (0x00035150) dt_sta_title_pane_g1

0xf0f5,	// (0x0003e4fa) dt_sta_title_pane_t1_ParamLimits

0xf0f5,	// (0x0003e4fa) dt_sta_title_pane_t1

0x2397,	// (0x0003179c) bg_dt_sta_control_pane

0xf10a,	// (0x0003e50f) dt_sta_controll_pane_g1

0xf113,	// (0x0003e518) bg_dt_sta_title_pane_g1

0xf11c,	// (0x0003e521) bg_dt_sta_title_pane_g2

0xf125,	// (0x0003e52a) bg_dt_sta_title_pane_g3

0x0002,

0xfeb3,	// (0x0003f2b8) bg_dt_sta_title_pane_g

0x74cb,	// (0x000368d0) bg_dt_sta_indi_pane_g1

0x9e4a,	// (0x0003924f) dt_sta_signal_pane_g1

0x9e52,	// (0x00039257) dt_sta_signal_pane_g2

0x0001,

0xfeba,	// (0x0003f2bf) dt_sta_signal_pane_g

0x9e5a,	// (0x0003925f) dt_sta_battery_pane_g1

0x9e63,	// (0x00039268) dt_sta_battery_pane_t1

0x74cb,	// (0x000368d0) bg_dt_sta_control_pane_g1

0x3b8a,	// (0x00032f8f) fep_china_uni_eep_pane

0x3b92,	// (0x00032f97) fep_china_uni_entry_pane_ParamLimits

0x3ba2,	// (0x00032fa7) popup_fep_china_uni_window_g1_ParamLimits

0x3bb2,	// (0x00032fb7) popup_fep_china_uni_window_g2_ParamLimits

0x3bb2,	// (0x00032fb7) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0003eb3a) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0003eb3a) popup_fep_china_uni_window_g

0x9e72,	// (0x00039277) fep_china_uni_eep_pane_g1

0x9e7a,	// (0x0003927f) fep_china_uni_eep_pane_t1

0x9971,	// (0x00038d76) aid_touch_area_size_smil_player

0x4b4d,	// (0x00033f52) lc0_clock_pane

0x4d2d,	// (0x00034132) status_pane_g5_ParamLimits

0x4d2d,	// (0x00034132) status_pane_g5

0xcd7f,	// (0x0003c184) popup_keymap_window

0x4ceb,	// (0x000340f0) status_icon_pane

0xef0a,	// (0x0003e30f) cell_ai5_widget_pane_g3_ParamLimits

0xef29,	// (0x0003e32e) cell_ai5_widget_pane_g4_ParamLimits

0xef35,	// (0x0003e33a) cell_ai5_widget_pane_g5_ParamLimits

0xef59,	// (0x0003e35e) cell_ai5_widget_pane_g8_ParamLimits

0xef59,	// (0x0003e35e) cell_ai5_widget_pane_g8

0xef6d,	// (0x0003e372) cell_ai5_widget_pane_g9_ParamLimits

0xef6d,	// (0x0003e372) cell_ai5_widget_pane_g9

0xef81,	// (0x0003e386) cell_ai5_widget_pane_g10_ParamLimits

0xef81,	// (0x0003e386) cell_ai5_widget_pane_g10

0x9e89,	// (0x0003928e) status_icon_pane_g1

0x2397,	// (0x0003179c) bg_popup_sub_pane_cp13

0x9e91,	// (0x00039296) popup_keymap_window_t1

0xcb80,	// (0x0003bf85) control_pane_g6_ParamLimits

0xcb80,	// (0x0003bf85) control_pane_g6

0xcb8d,	// (0x0003bf92) control_pane_g7_ParamLimits

0xcb8d,	// (0x0003bf92) control_pane_g7

0xcb9a,	// (0x0003bf9f) control_pane_g8_ParamLimits

0xcb9a,	// (0x0003bf9f) control_pane_g8

0xf0a5,	// (0x0003e4aa) dt_sta_controll_pane_ParamLimits

0xf0b2,	// (0x0003e4b7) dt_sta_indi_pane_ParamLimits

0xf0bf,	// (0x0003e4c4) dt_sta_title_pane_ParamLimits

0x3375,	// (0x0003277a) aid_size_touch_scroll_bar_cale

0x01cc,	// (0x0002f5d1) popup_discreet_window_ParamLimits

0x01cc,	// (0x0002f5d1) popup_discreet_window

0xb46f,	// (0x0003a874) popup_sk_window

0x556b,	// (0x00034970) bg_popup_sub_pane_cp28_ParamLimits

0x556b,	// (0x00034970) bg_popup_sub_pane_cp28

0x9e9f,	// (0x000392a4) popup_discreet_window_g1_ParamLimits

0x9e9f,	// (0x000392a4) popup_discreet_window_g1

0x9ebf,	// (0x000392c4) popup_discreet_window_t1_ParamLimits

0x9ebf,	// (0x000392c4) popup_discreet_window_t1

0x9edd,	// (0x000392e2) popup_discreet_window_t2_ParamLimits

0x9edd,	// (0x000392e2) popup_discreet_window_t2

0x0002,

0xfebf,	// (0x0003f2c4) popup_discreet_window_t_ParamLimits

0xfebf,	// (0x0003f2c4) popup_discreet_window_t

0x232d,	// (0x00031732) popup_sk_window_g1

0x2337,	// (0x0003173c) popup_sk_window_g2

0x0001,

0xfec6,	// (0x0003f2cb) popup_sk_window_g

0x9f2f,	// (0x00039334) popup_sk_window_t1

0x9f3d,	// (0x00039342) popup_sk_window_t1_copy1

0xeefa,	// (0x0003e2ff) cell_ai5_widget_pane_g2_ParamLimits

0xf02d,	// (0x0003e432) cell_ai5_widget_pane_t9_ParamLimits

0xf02d,	// (0x0003e432) cell_ai5_widget_pane_t9

0x2397,	// (0x0003179c) main_fep_fshwr2_pane

0xf12e,	// (0x0003e533) aid_fshwr2_btn_pane

0xf136,	// (0x0003e53b) aid_fshwr2_syb_pane

0xf13e,	// (0x0003e543) aid_fshwr2_txt_pane

0xf146,	// (0x0003e54b) fshwr2_func_candi_pane

0xf150,	// (0x0003e555) fshwr2_hwr_syb_pane

0xf15e,	// (0x0003e563) fshwr2_icf_pane

0x2397,	// (0x0003179c) fshwr2_icf_bg_pane

0xf168,	// (0x0003e56d) fshwr2_icf_pane_t1_ParamLimits

0xf168,	// (0x0003e56d) fshwr2_icf_pane_t1

0x74cb,	// (0x000368d0) fshwr2_func_candi_pane_g1

0x9fb0,	// (0x000393b5) fshwr2_func_candi_row_pane_ParamLimits

0x9fb0,	// (0x000393b5) fshwr2_func_candi_row_pane

0xf180,	// (0x0003e585) cell_fshwr2_syb_pane_ParamLimits

0xf180,	// (0x0003e585) cell_fshwr2_syb_pane

0x775d,	// (0x00036b62) fshwr2_hwr_syb_pane_g1_ParamLimits

0x775d,	// (0x00036b62) fshwr2_hwr_syb_pane_g1

0x2397,	// (0x0003179c) bg_popup_call_pane_cp01

0x9fdb,	// (0x000393e0) fshwr2_func_candi_cell_pane_ParamLimits

0x9fdb,	// (0x000393e0) fshwr2_func_candi_cell_pane

0xa00c,	// (0x00039411) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa00c,	// (0x00039411) fshwr2_func_candi_cell_bg_pane

0xa026,	// (0x0003942b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa026,	// (0x0003942b) fshwr2_func_candi_cell_pane_g1

0xa04e,	// (0x00039453) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa04e,	// (0x00039453) fshwr2_func_candi_cell_pane_t1

0x2397,	// (0x0003179c) bg_button_pane_cp08

0x40a2,	// (0x000334a7) cell_fshwr2_syb_bg_pane

0xf19a,	// (0x0003e59f) cell_fshwr2_syb_bg_pane_g1

0xf1a2,	// (0x0003e5a7) cell_fshwr2_syb_bg_pane_t1

0x343d,	// (0x00032842) main_tmo_pane

0xd83e,	// (0x0003cc43) uni_indicator_pane_g1_ParamLimits

0xd853,	// (0x0003cc58) uni_indicator_pane_g2_ParamLimits

0xd868,	// (0x0003cc6d) uni_indicator_pane_g3_ParamLimits

0x60cd,	// (0x000354d2) uni_indicator_pane_g4_ParamLimits

0x60cd,	// (0x000354d2) uni_indicator_pane_g4

0x60e1,	// (0x000354e6) uni_indicator_pane_g5_ParamLimits

0x60e1,	// (0x000354e6) uni_indicator_pane_g5

0x60f5,	// (0x000354fa) uni_indicator_pane_g6_ParamLimits

0x60f5,	// (0x000354fa) uni_indicator_pane_g6

0xf92d,	// (0x0003ed32) uni_indicator_pane_g_ParamLimits

0xe30a,	// (0x0003d70f) popup_tmo_note_window_ParamLimits

0xe30a,	// (0x0003d70f) popup_tmo_note_window

0x2397,	// (0x0003179c) fshwr2_bg_pane

0xa03f,	// (0x00039444) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa03f,	// (0x00039444) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecb,	// (0x0003f2d0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecb,	// (0x0003f2d0) fshwr2_func_candi_cell_pane_g

0x74cb,	// (0x000368d0) bg_popup_window_pane_cp01

0xa078,	// (0x0003947d) bg_popup_window_pane_g1_cp01

0xa081,	// (0x00039486) bg_popup_window_pane_cp22_ParamLimits

0xa081,	// (0x00039486) bg_popup_window_pane_cp22

0xa08f,	// (0x00039494) listscroll_tmo_link_pane_ParamLimits

0xa08f,	// (0x00039494) listscroll_tmo_link_pane

0xa0cf,	// (0x000394d4) popup_tmo_note_window_g1_ParamLimits

0xa0cf,	// (0x000394d4) popup_tmo_note_window_g1

0xa0dc,	// (0x000394e1) tmo_note_info_pane_ParamLimits

0xa0dc,	// (0x000394e1) tmo_note_info_pane

0xf1b1,	// (0x0003e5b6) list_tmo_note_info_pane_g1_ParamLimits

0xf1b1,	// (0x0003e5b6) list_tmo_note_info_pane_g1

0xa10d,	// (0x00039512) list_tmo_note_info_pane_g2_ParamLimits

0xa10d,	// (0x00039512) list_tmo_note_info_pane_g2

0x0001,

0xfed0,	// (0x0003f2d5) list_tmo_note_info_pane_g_ParamLimits

0xfed0,	// (0x0003f2d5) list_tmo_note_info_pane_g

0xa129,	// (0x0003952e) list_tmo_note_info_text_pane_ParamLimits

0xa129,	// (0x0003952e) list_tmo_note_info_text_pane

0xa1aa,	// (0x000395af) list_tmo_link_pane

0xa1b7,	// (0x000395bc) scroll_pane_cp20

0xa1c4,	// (0x000395c9) list_single_tmo_link_pane_ParamLimits

0xa1c4,	// (0x000395c9) list_single_tmo_link_pane

0xa1d4,	// (0x000395d9) list_single_tmo_link_pane_t1

0xa1e2,	// (0x000395e7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1e2,	// (0x000395e7) list_tmo_note_info_text_pane_t1

0xc891,	// (0x0003bc96) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc891,	// (0x0003bc96) aid_size_touch_scroll_bar_cp01

0xb981,	// (0x0003ad86) aid_size_touch_slider_marker

0xb45f,	// (0x0003a864) popup_settings_window_ParamLimits

0xb45f,	// (0x0003a864) popup_settings_window

0x1191,	// (0x00030596) popup_candi_list_indi_window

0x4a01,	// (0x00033e06) aid_touch_navi_pane_ParamLimits

0x1b08,	// (0x00030f0d) rs_clock_indi_pane

0x1b11,	// (0x00030f16) sctrl_sk_bottom_pane_ParamLimits

0x1b22,	// (0x00030f27) sctrl_sk_top_pane_ParamLimits

0x1c25,	// (0x0003102a) popup_fep_tooltip_window

0x9a91,	// (0x00038e96) aid_size_cell_widget_grid_ParamLimits

0xeeee,	// (0x0003e2f3) cell_ai5_widget_pane_g1_ParamLimits

0xeeee,	// (0x0003e2f3) cell_ai5_widget_pane_g1

0xef41,	// (0x0003e346) cell_ai5_widget_pane_g6_ParamLimits

0xef4d,	// (0x0003e352) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4e,	// (0x0003f253) cell_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0003f253) cell_ai5_widget_pane_g

0xf051,	// (0x0003e456) cell_ai5_widget_pane_t10_ParamLimits

0xf051,	// (0x0003e456) cell_ai5_widget_pane_t10

0xf067,	// (0x0003e46c) grid_ai5_widget_pane_ParamLimits

0x9d07,	// (0x0003910c) cell_contacts_ai5_widget_pane_ParamLimits

0x9d07,	// (0x0003910c) cell_contacts_ai5_widget_pane

0x9ef2,	// (0x000392f7) popup_discreet_window_t3_ParamLimits

0x9ef2,	// (0x000392f7) popup_discreet_window_t3

0x9f85,	// (0x0003938a) popup_fshwr2_char_preview_window_ParamLimits

0x9f85,	// (0x0003938a) popup_fshwr2_char_preview_window

0xf1c8,	// (0x0003e5cd) tmo_note_info_pane_t1

0xf1dd,	// (0x0003e5e2) tmo_note_info_pane_t2

0xf1f4,	// (0x0003e5f9) tmo_note_info_pane_t3

0xa186,	// (0x0003958b) tmo_note_info_pane_t4

0xa198,	// (0x0003959d) tmo_note_info_pane_t5

0x0004,

0xfed5,	// (0x0003f2da) tmo_note_info_pane_t

0xa1aa,	// (0x000395af) list_tmo_link_pane_ParamLimits

0xa1b7,	// (0x000395bc) scroll_pane_cp20_ParamLimits

0x2397,	// (0x0003179c) bg_popup_fep_char_preview_window_cp01

0xa1fb,	// (0x00039600) popup_fshwr2_char_preview_window_t1

0xa209,	// (0x0003960e) popup_candi_list_indi_window_g1

0xa212,	// (0x00039617) bg_cell_contacts_ai5_widget_pane

0xa21e,	// (0x00039623) cell_contacts_ai5_widget_pane_g1

0xa232,	// (0x00039637) cell_contacts_ai5_widget_pane_g2

0xa241,	// (0x00039646) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee0,	// (0x0003f2e5) cell_contacts_ai5_widget_pane_g

0xa254,	// (0x00039659) cell_contacts_ai5_widget_pane_t1

0x343d,	// (0x00032842) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf26e,	// (0x0003e673) settings_container_pane

0x40a2,	// (0x000334a7) listscroll_set_pane_copy1

0x6bde,	// (0x00035fe3) scroll_pane_cp121_copy1

0xa2da,	// (0x000396df) set_content_pane_copy1

0xf27a,	// (0x0003e67f) aid_height_set_list_copy1_ParamLimits

0xf27a,	// (0x0003e67f) aid_height_set_list_copy1

0x62ed,	// (0x000356f2) aid_size_parent_copy1_ParamLimits

0x62ed,	// (0x000356f2) aid_size_parent_copy1

0xf286,	// (0x0003e68b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf286,	// (0x0003e68b) button_value_adjust_pane_cp6_copy1

0x4408,	// (0x0003380d) list_highlight_pane_cp2_copy1_ParamLimits

0x4408,	// (0x0003380d) list_highlight_pane_cp2_copy1

0xf29a,	// (0x0003e69f) list_set_pane_copy1_ParamLimits

0xf29a,	// (0x0003e69f) list_set_pane_copy1

0xf209,	// (0x0003e60e) main_pane_set_t1_copy1_ParamLimits

0xf209,	// (0x0003e60e) main_pane_set_t1_copy1

0xf243,	// (0x0003e648) main_pane_set_t2_copy1_ParamLimits

0xf243,	// (0x0003e648) main_pane_set_t2_copy1

0xf347,	// (0x0003e74c) main_pane_set_t3_copy1

0xf355,	// (0x0003e75a) main_pane_set_t4_copy1

0xf262,	// (0x0003e667) set_content_pane_g1_copy1_ParamLimits

0xf262,	// (0x0003e667) set_content_pane_g1_copy1

0xf363,	// (0x0003e768) setting_code_pane_copy1

0xa3d5,	// (0x000397da) setting_slider_graphic_pane_copy1

0xa3d5,	// (0x000397da) setting_slider_pane_copy1

0xa3d5,	// (0x000397da) setting_text_pane_copy1

0xa3df,	// (0x000397e4) setting_volume_pane_copy1

0xf36d,	// (0x0003e772) settings_code_pane_cp2_copy1

0xf375,	// (0x0003e77a) settings_code_pane_cp_copy1_ParamLimits

0xf375,	// (0x0003e77a) settings_code_pane_cp_copy1

0xf389,	// (0x0003e78e) volume_set_pane_copy1

0xf391,	// (0x0003e796) volume_set_pane_g10_copy1

0xf399,	// (0x0003e79e) volume_set_pane_g1_copy1

0xf3a1,	// (0x0003e7a6) volume_set_pane_g2_copy1

0xf3a9,	// (0x0003e7ae) volume_set_pane_g3_copy1

0xf3b1,	// (0x0003e7b6) volume_set_pane_g4_copy1

0xf3b9,	// (0x0003e7be) volume_set_pane_g5_copy1

0xf3c1,	// (0x0003e7c6) volume_set_pane_g6_copy1

0xf3c9,	// (0x0003e7ce) volume_set_pane_g7_copy1

0xf3d1,	// (0x0003e7d6) volume_set_pane_g8_copy1

0xf3d9,	// (0x0003e7de) volume_set_pane_g9_copy1

0x248b,	// (0x00031890) bg_set_opt_pane_cp_copy1_ParamLimits

0x248b,	// (0x00031890) bg_set_opt_pane_cp_copy1

0xa45c,	// (0x00039861) setting_slider_pane_t1_copy1_ParamLimits

0xa45c,	// (0x00039861) setting_slider_pane_t1_copy1

0xf3e1,	// (0x0003e7e6) setting_slider_pane_t2_copy1_ParamLimits

0xf3e1,	// (0x0003e7e6) setting_slider_pane_t2_copy1

0xf3fb,	// (0x0003e800) setting_slider_pane_t3_copy1_ParamLimits

0xf3fb,	// (0x0003e800) setting_slider_pane_t3_copy1

0xf413,	// (0x0003e818) slider_set_pane_copy1_ParamLimits

0xf413,	// (0x0003e818) slider_set_pane_copy1

0x34a4,	// (0x000328a9) set_opt_bg_pane_g1_copy2

0x34ac,	// (0x000328b1) set_opt_bg_pane_g2_copy2

0xa4c2,	// (0x000398c7) set_opt_bg_pane_g3_copy2

0x34bc,	// (0x000328c1) set_opt_bg_pane_g4_copy2

0x34c4,	// (0x000328c9) set_opt_bg_pane_g5_copy2

0x34cc,	// (0x000328d1) set_opt_bg_pane_g6_copy2

0xf429,	// (0x0003e82e) set_opt_bg_pane_g7_copy2

0xa4d4,	// (0x000398d9) set_opt_bg_pane_g8_copy2

0xa4de,	// (0x000398e3) set_opt_bg_pane_g9_copy2

0x2341,	// (0x00031746) aid_size_touch_slider_mark_copy1_ParamLimits

0x2341,	// (0x00031746) aid_size_touch_slider_mark_copy1

0xa4e8,	// (0x000398ed) slider_set_pane_g1_copy1

0x2355,	// (0x0003175a) slider_set_pane_g2_copy1

0x153c,	// (0x00030941) slider_set_pane_g3_copy1_ParamLimits

0x153c,	// (0x00030941) slider_set_pane_g3_copy1

0x1550,	// (0x00030955) slider_set_pane_g4_copy1_ParamLimits

0x1550,	// (0x00030955) slider_set_pane_g4_copy1

0x1568,	// (0x0003096d) slider_set_pane_g5_copy1_ParamLimits

0x1568,	// (0x0003096d) slider_set_pane_g5_copy1

0x153c,	// (0x00030941) slider_set_pane_g6_copy1_ParamLimits

0x153c,	// (0x00030941) slider_set_pane_g6_copy1

0xc4c0,	// (0x0003b8c5) slider_set_pane_g7_copy1_ParamLimits

0xc4c0,	// (0x0003b8c5) slider_set_pane_g7_copy1

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp2_copy1

0xa4f1,	// (0x000398f6) setting_slider_graphic_pane_g1_copy1

0xf431,	// (0x0003e836) setting_slider_graphic_pane_t1_copy1

0xf441,	// (0x0003e846) setting_slider_graphic_pane_t2_copy1

0xf451,	// (0x0003e856) slider_set_pane_cp_copy1

0xa52a,	// (0x0003992f) input_focus_pane_cp1_copy1

0xa533,	// (0x00039938) list_set_text_pane_copy1

0xa53b,	// (0x00039940) setting_text_pane_g1_copy1

0xc4d6,	// (0x0003b8db) set_text_pane_t1_copy1

0xa52a,	// (0x0003992f) input_focus_pane_cp2_copy1

0xa53b,	// (0x00039940) setting_code_pane_g1_copy1

0xf459,	// (0x0003e85e) setting_code_pane_t1_copy1

0xc87f,	// (0x0003bc84) list_set_graphic_pane_copy1

0x23ab,	// (0x000317b0) bg_set_opt_pane_cp4_copy1

0xca8c,	// (0x0003be91) list_set_graphic_pane_g1_copy1_ParamLimits

0xca8c,	// (0x0003be91) list_set_graphic_pane_g1_copy1

0xf467,	// (0x0003e86c) list_set_graphic_pane_g2_copy1

0xcaa4,	// (0x0003bea9) list_set_graphic_pane_t1_copy1_ParamLimits

0xcaa4,	// (0x0003bea9) list_set_graphic_pane_t1_copy1

0x74cb,	// (0x000368d0) rs_clock_indi_pane_g1

0xa56c,	// (0x00039971) rs_clock_indi_pane_t1

0x9ddd,	// (0x000391e2) rs_indi_pane

0xa57a,	// (0x0003997f) rs_indi_pane_g1

0xa583,	// (0x00039988) rs_indi_pane_g2

0xa58c,	// (0x00039991) rs_indi_pane_g3

0x0002,

0xfee7,	// (0x0003f2ec) rs_indi_pane_g

0x40a2,	// (0x000334a7) bg_popup_preview_window_pane_cp03

0xa595,	// (0x0003999a) popup_fep_tooltip_window_t1

0x8146,	// (0x0003754b) popup_note2_window_g2_ParamLimits

0x8146,	// (0x0003754b) popup_note2_window_g2

0x0001,

0xfc80,	// (0x0003f085) popup_note2_window_g_ParamLimits

0xfc80,	// (0x0003f085) popup_note2_window_g

0x8641,	// (0x00037a46) bg_popup_sub_pane_cp11_ParamLimits

0x864e,	// (0x00037a53) cell_ai3_links_pane_g1_ParamLimits

0x8665,	// (0x00037a6a) cell_ai3_links_pane_t1

0xc4d6,	// (0x0003b8db) set_text_pane_t1_copy1_ParamLimits

0x3f91,	// (0x00033396) cell_graphic_popup_pane_cp2_ParamLimits

0x3f91,	// (0x00033396) cell_graphic_popup_pane_cp2

0xa5a3,	// (0x000399a8) cell_graphic_popup_pane_g1_cp2

0x3188,	// (0x0003258d) cell_graphic_popup_pane_g2_cp2

0xa5ab,	// (0x000399b0) cell_graphic_popup_pane_g3_cp2

0xa5b3,	// (0x000399b8) cell_graphic_popup_pane_t2_cp2

0x3199,	// (0x0003259e) grid_highlight_pane_cp3_cp2

0x37e7,	// (0x00032bec) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x343d,	// (0x00032842) main_tmo_pane_ParamLimits

0xe2fe,	// (0x0003d703) popup_tmo_big_image_note_window

0xeede,	// (0x0003e2e3) cell_ai5_widget_list_pane

0xeee6,	// (0x0003e2eb) cell_ai5_widget_lrg_icon_pane

0xf1c8,	// (0x0003e5cd) tmo_note_info_pane_t1_ParamLimits

0xf1dd,	// (0x0003e5e2) tmo_note_info_pane_t2_ParamLimits

0xf1f4,	// (0x0003e5f9) tmo_note_info_pane_t3_ParamLimits

0xa186,	// (0x0003958b) tmo_note_info_pane_t4_ParamLimits

0xa198,	// (0x0003959d) tmo_note_info_pane_t5_ParamLimits

0xfed5,	// (0x0003f2da) tmo_note_info_pane_t_ParamLimits

0xf26e,	// (0x0003e673) settings_container_pane_ParamLimits

0xa522,	// (0x00039927) indicator_popup_pane_cp5

0xa522,	// (0x00039927) indicator_popup_pane_cp6

0xc87f,	// (0x0003bc84) list_set_graphic_pane_copy1_ParamLimits

0x2397,	// (0x0003179c) bg_popup_window_pane_cp23

0xa5c1,	// (0x000399c6) popup_tmo_big_image_note_window_g1

0xa5cb,	// (0x000399d0) popup_tmo_big_image_note_window_t1

0xa5db,	// (0x000399e0) popup_tmo_big_image_note_window_t2

0xa5eb,	// (0x000399f0) popup_tmo_big_image_note_window_t3

0x0002,

0xfeee,	// (0x0003f2f3) popup_tmo_big_image_note_window_t

0xf46f,	// (0x0003e874) cell_ai5_widget_lrg_icon_pane_g1

0xf477,	// (0x0003e87c) cell_ai5_widget_lrg_icon_pane_t1

0xf485,	// (0x0003e88a) cell_ai5_widget_list_row_pane_ParamLimits

0xf485,	// (0x0003e88a) cell_ai5_widget_list_row_pane

0xf49e,	// (0x0003e8a3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf49e,	// (0x0003e8a3) cell_ai5_widget_list_row_pane_g1

0xf4ab,	// (0x0003e8b0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf4ab,	// (0x0003e8b0) cell_ai5_widget_list_row_pane_t1

0xf4c3,	// (0x0003e8c8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf4c3,	// (0x0003e8c8) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef5,	// (0x0003f2fa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef5,	// (0x0003f2fa) cell_ai5_widget_list_row_pane_t

0x00f3,	// (0x0002f4f8) main_fep_vtchi_ss_pane

0xa661,	// (0x00039a66) popup_fep_char_pre_window

0xa669,	// (0x00039a6e) popup_fep_ituss_window

0xa68a,	// (0x00039a8f) popup_fep_vkbss_window

0xa6a9,	// (0x00039aae) grid_vkbss_keypad_pane_ParamLimits

0xa6a9,	// (0x00039aae) grid_vkbss_keypad_pane

0xa6b9,	// (0x00039abe) ituss_keypad_pane

0xa6d2,	// (0x00039ad7) aid_vkbss_key_offset_ParamLimits

0xa6d2,	// (0x00039ad7) aid_vkbss_key_offset

0xa6de,	// (0x00039ae3) cell_vkbss_key_pane_ParamLimits

0xa6de,	// (0x00039ae3) cell_vkbss_key_pane

0xa6f4,	// (0x00039af9) bg_cell_vkbss_key_g1_ParamLimits

0xa6f4,	// (0x00039af9) bg_cell_vkbss_key_g1

0xa700,	// (0x00039b05) cell_vkbss_key_3p_pane_ParamLimits

0xa700,	// (0x00039b05) cell_vkbss_key_3p_pane

0xa71a,	// (0x00039b1f) cell_vkbss_key_g1_ParamLimits

0xa71a,	// (0x00039b1f) cell_vkbss_key_g1

0xa734,	// (0x00039b39) cell_vkbss_key_t1_ParamLimits

0xa734,	// (0x00039b39) cell_vkbss_key_t1

0xa75f,	// (0x00039b64) cell_ituss_key_pane_ParamLimits

0xa75f,	// (0x00039b64) cell_ituss_key_pane

0xa76f,	// (0x00039b74) bg_cell_ituss_key_g1_ParamLimits

0xa76f,	// (0x00039b74) bg_cell_ituss_key_g1

0xa77b,	// (0x00039b80) cell_ituss_key_pane_g1_ParamLimits

0xa77b,	// (0x00039b80) cell_ituss_key_pane_g1

0xa787,	// (0x00039b8c) cell_ituss_key_pane_g2_ParamLimits

0xa787,	// (0x00039b8c) cell_ituss_key_pane_g2

0x0001,

0xfefa,	// (0x0003f2ff) cell_ituss_key_pane_g_ParamLimits

0xfefa,	// (0x0003f2ff) cell_ituss_key_pane_g

0xa7a0,	// (0x00039ba5) cell_ituss_key_t1_ParamLimits

0xa7a0,	// (0x00039ba5) cell_ituss_key_t1

0xa7ce,	// (0x00039bd3) cell_ituss_key_t2_ParamLimits

0xa7ce,	// (0x00039bd3) cell_ituss_key_t2

0xa7ff,	// (0x00039c04) cell_ituss_key_t3_ParamLimits

0xa7ff,	// (0x00039c04) cell_ituss_key_t3

0xa830,	// (0x00039c35) cell_ituss_key_t4_ParamLimits

0xa830,	// (0x00039c35) cell_ituss_key_t4

0x0003,

0xfeff,	// (0x0003f304) cell_ituss_key_t_ParamLimits

0xfeff,	// (0x0003f304) cell_ituss_key_t

0xa861,	// (0x00039c66) cell_vkbss_key_3p_pane_g1

0xa869,	// (0x00039c6e) cell_vkbss_key_3p_pane_g2

0xa871,	// (0x00039c76) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x0003f30d) cell_vkbss_key_3p_pane_g

0x2397,	// (0x0003179c) bg_popup_fep_char_preview_window_cp02

0xa879,	// (0x00039c7e) popup_fep_char_pre_window_t1

0xeed4,	// (0x0003e2d9) main_ai5_sk_pane

0xa212,	// (0x00039617) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa21e,	// (0x00039623) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa232,	// (0x00039637) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa241,	// (0x00039646) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee0,	// (0x0003f2e5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa254,	// (0x00039659) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x343d,	// (0x00032842) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4d5,	// (0x0003e8da) main_ai5_sk_pane_g1

0x53a4,	// (0x000347a9) popup_query_code_window_g1

0xa67f,	// (0x00039a84) popup_fep_vkb_icf_pane

0xa693,	// (0x00039a98) popup_fep_vtchi_icf_pane

0x343d,	// (0x00032842) bg_icf_pane

0xa8a0,	// (0x00039ca5) list_vkb_icf_pane

0x343d,	// (0x00032842) bg_icf_pane_cp01

0xa8b8,	// (0x00039cbd) vtchi_icf_list_pane

0xa8c8,	// (0x00039ccd) list_vkb_icf_pane_t1_ParamLimits

0xa8c8,	// (0x00039ccd) list_vkb_icf_pane_t1

0xa8df,	// (0x00039ce4) vtchi_icf_list_pane_t1_ParamLimits

0xa8df,	// (0x00039ce4) vtchi_icf_list_pane_t1

0xa669,	// (0x00039a6e) popup_fep_ituss_window_ParamLimits

0xa693,	// (0x00039a98) popup_fep_vtchi_icf_pane_ParamLimits

0xa6b9,	// (0x00039abe) ituss_keypad_pane_ParamLimits

0xa6c9,	// (0x00039ace) ituss_sks_pane

0x343d,	// (0x00032842) bg_icf_pane_ParamLimits

0xa891,	// (0x00039c96) icf_edit_indi_pane_ParamLimits

0xa891,	// (0x00039c96) icf_edit_indi_pane

0xa8a0,	// (0x00039ca5) list_vkb_icf_pane_ParamLimits

0x343d,	// (0x00032842) bg_icf_pane_cp01_ParamLimits

0xa8ac,	// (0x00039cb1) icf_edit_indi_pane_cp01_ParamLimits

0xa8ac,	// (0x00039cb1) icf_edit_indi_pane_cp01

0xa8c0,	// (0x00039cc5) vtchi_query_pane

0x775d,	// (0x00036b62) icf_edit_indi_pane_g1_ParamLimits

0x775d,	// (0x00036b62) icf_edit_indi_pane_g1

0xa8fb,	// (0x00039d00) icf_edit_indi_pane_g2_ParamLimits

0xa8fb,	// (0x00039d00) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x0003f314) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x0003f314) icf_edit_indi_pane_g

0xa907,	// (0x00039d0c) icf_edit_indi_pane_t1

0xa915,	// (0x00039d1a) bg_input_focus_pane_cp042

0x336c,	// (0x00032771) vtchi_button_pane

0xa91e,	// (0x00039d23) vtchi_query_pane_t1

0xa92c,	// (0x00039d31) vtchi_query_pane_t2

0xa93a,	// (0x00039d3f) vtchi_query_pane_t3

0x0002,

0xff14,	// (0x0003f319) vtchi_query_pane_t

0x2397,	// (0x0003179c) bg_button_pane_cp13

0xa948,	// (0x00039d4d) vtchi_button_pane_g1

0x8ea0,	// (0x000382a5) ituss_sks_pane_g1

0xa950,	// (0x00039d55) ituss_sks_pane_g2

0x0001,

0xff1b,	// (0x0003f320) ituss_sks_pane_g

0xa959,	// (0x00039d5e) ituss_sks_pane_t1

0xa967,	// (0x00039d6c) ituss_sks_pane_t2

0x0001,

0xff20,	// (0x0003f325) ituss_sks_pane_t

0x6f2d,	// (0x00036332) indicator_nsta_pane_cp_g1

0x6f36,	// (0x0003633b) indicator_nsta_pane_cp_g2

0x6f3e,	// (0x00036343) indicator_nsta_pane_cp_g3

0x6f46,	// (0x0003634b) indicator_nsta_pane_cp_g4

0x6f4e,	// (0x00036353) indicator_nsta_pane_cp_g5

0x6f56,	// (0x0003635b) indicator_nsta_pane_cp_g6

0x0005,

0xfabe,	// (0x0003eec3) indicator_nsta_pane_cp_g

0xecf9,	// (0x0003e0fe) cell_graphic2_pane_t2_ParamLimits

0xecf9,	// (0x0003e0fe) cell_graphic2_pane_t2

0x0001,

0xfdd7,	// (0x0003f1dc) cell_graphic2_pane_t_ParamLimits

0xfdd7,	// (0x0003f1dc) cell_graphic2_pane_t

0xed2f,	// (0x0003e134) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002cc34 };

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
0xa0cf,	// (0x00036d03) Screen

0xa0d9,	// (0x00036d0d) application_window_ParamLimits

0xa0d9,	// (0x00036d0d) application_window

0x326b,	// (0x0002fe9f) screen_g1

0xa122,	// (0x00036d56) area_bottom_pane_ParamLimits

0xa122,	// (0x00036d56) area_bottom_pane

0x3340,	// (0x0002ff74) area_top_pane_ParamLimits

0x3340,	// (0x0002ff74) area_top_pane

0xa1da,	// (0x00036e0e) main_pane_ParamLimits

0xa1da,	// (0x00036e0e) main_pane

0x33b8,	// (0x0002ffec) misc_graphics

0xb323,	// (0x00037f57) battery_pane_ParamLimits

0xb323,	// (0x00037f57) battery_pane

0x8432,	// (0x00035066) bg_status_flat_pane_g8

0x843a,	// (0x0003506e) bg_status_flat_pane_g9

0x7a48,	// (0x0003467c) context_pane_ParamLimits

0x7a48,	// (0x0003467c) context_pane

0xb455,	// (0x00038089) navi_pane_ParamLimits

0xb455,	// (0x00038089) navi_pane

0xb4c1,	// (0x000380f5) signal_pane_ParamLimits

0xb4c1,	// (0x000380f5) signal_pane

0x0008,

0xf8b2,	// (0x0003c4e6) bg_status_flat_pane_g

0xb522,	// (0x00038156) status_pane_g1_ParamLimits

0xb522,	// (0x00038156) status_pane_g1

0xb52e,	// (0x00038162) status_pane_g2_ParamLimits

0xb52e,	// (0x00038162) status_pane_g2

0x7aae,	// (0x000346e2) status_pane_g3_ParamLimits

0x7aae,	// (0x000346e2) status_pane_g3

0x0004,

0xf7e5,	// (0x0003c419) status_pane_g_ParamLimits

0xf7e5,	// (0x0003c419) status_pane_g

0xb53a,	// (0x0003816e) title_pane_ParamLimits

0xb53a,	// (0x0003816e) title_pane

0xb577,	// (0x000381ab) uni_indicator_pane_ParamLimits

0xb577,	// (0x000381ab) uni_indicator_pane

0x78aa,	// (0x000344de) bg_list_pane_ParamLimits

0x78aa,	// (0x000344de) bg_list_pane

0xecf1,	// (0x0003b925) find_pane

0xaf2f,	// (0x00037b63) listscroll_app_pane_ParamLimits

0xaf2f,	// (0x00037b63) listscroll_app_pane

0x78ca,	// (0x000344fe) listscroll_form_pane

0xecf9,	// (0x0003b92d) listscroll_gen_pane_ParamLimits

0xecf9,	// (0x0003b92d) listscroll_gen_pane

0x78ca,	// (0x000344fe) listscroll_set_pane

0xa746,	// (0x0003737a) main_idle_act_pane

0x7688,	// (0x000342bc) main_idle_trad_pane

0x7688,	// (0x000342bc) main_list_empty_pane

0x6e5d,	// (0x00033a91) main_midp_pane

0x78e4,	// (0x00034518) main_pane_g1_ParamLimits

0x78e4,	// (0x00034518) main_pane_g1

0xaf3b,	// (0x00037b6f) popup_ai_message_window_ParamLimits

0xaf3b,	// (0x00037b6f) popup_ai_message_window

0xafaf,	// (0x00037be3) popup_fep_china_uni_window_ParamLimits

0xafaf,	// (0x00037be3) popup_fep_china_uni_window

0x7914,	// (0x00034548) popup_fep_japan_candidate_window_ParamLimits

0x7914,	// (0x00034548) popup_fep_japan_candidate_window

0x7932,	// (0x00034566) popup_fep_japan_predictive_window_ParamLimits

0x7932,	// (0x00034566) popup_fep_japan_predictive_window

0xafed,	// (0x00037c21) popup_find_window

0xaffa,	// (0x00037c2e) popup_grid_graphic_window_ParamLimits

0xaffa,	// (0x00037c2e) popup_grid_graphic_window

0x795e,	// (0x00034592) popup_large_graphic_colour_window

0xb018,	// (0x00037c4c) popup_menu_window_ParamLimits

0xb018,	// (0x00037c4c) popup_menu_window

0xb150,	// (0x00037d84) popup_note_image_window

0xb13e,	// (0x00037d72) popup_note_wait_window_ParamLimits

0xb13e,	// (0x00037d72) popup_note_wait_window

0xb13e,	// (0x00037d72) popup_note_window_ParamLimits

0xb13e,	// (0x00037d72) popup_note_window

0xb1a4,	// (0x00037dd8) popup_query_code_window_ParamLimits

0xb1a4,	// (0x00037dd8) popup_query_code_window

0x797d,	// (0x000345b1) popup_query_data_code_window_ParamLimits

0x797d,	// (0x000345b1) popup_query_data_code_window

0xb1b6,	// (0x00037dea) popup_query_data_window_ParamLimits

0xb1b6,	// (0x00037dea) popup_query_data_window

0xb1cc,	// (0x00037e00) popup_query_sat_info_window_ParamLimits

0xb1cc,	// (0x00037e00) popup_query_sat_info_window

0xb1fd,	// (0x00037e31) popup_snote_single_graphic_window_ParamLimits

0xb1fd,	// (0x00037e31) popup_snote_single_graphic_window

0xb1fd,	// (0x00037e31) popup_snote_single_text_window_ParamLimits

0xb1fd,	// (0x00037e31) popup_snote_single_text_window

0x7992,	// (0x000345c6) popup_sub_window_general

0x79d4,	// (0x00034608) popup_window_general_ParamLimits

0x79d4,	// (0x00034608) popup_window_general

0x79e7,	// (0x0003461b) power_save_pane

0xadbc,	// (0x000379f0) control_pane_g1_ParamLimits

0xadbc,	// (0x000379f0) control_pane_g1

0xaddd,	// (0x00037a11) control_pane_g2_ParamLimits

0xaddd,	// (0x00037a11) control_pane_g2

0x7894,	// (0x000344c8) control_pane_g3_ParamLimits

0x7894,	// (0x000344c8) control_pane_g3

0x0007,

0xf7cd,	// (0x0003c401) control_pane_g_ParamLimits

0xf7cd,	// (0x0003c401) control_pane_g

0xae3e,	// (0x00037a72) control_pane_t1_ParamLimits

0xae3e,	// (0x00037a72) control_pane_t1

0xae90,	// (0x00037ac4) control_pane_t2_ParamLimits

0xae90,	// (0x00037ac4) control_pane_t2

0x0002,

0xf7de,	// (0x0003c412) control_pane_t_ParamLimits

0xf7de,	// (0x0003c412) control_pane_t

0x77b7,	// (0x000343eb) navi_navi_volume_pane_cp1

0x77c0,	// (0x000343f4) status_small_icon_pane

0x77c8,	// (0x000343fc) status_small_pane_g1_ParamLimits

0x77c8,	// (0x000343fc) status_small_pane_g1

0x77fc,	// (0x00034430) status_small_pane_g2_ParamLimits

0x77fc,	// (0x00034430) status_small_pane_g2

0x7808,	// (0x0003443c) status_small_pane_g3_ParamLimits

0x7808,	// (0x0003443c) status_small_pane_g3

0x7814,	// (0x00034448) status_small_pane_g4_ParamLimits

0x7814,	// (0x00034448) status_small_pane_g4

0x7820,	// (0x00034454) status_small_pane_g5_ParamLimits

0x7820,	// (0x00034454) status_small_pane_g5

0x782d,	// (0x00034461) status_small_pane_g6_ParamLimits

0x782d,	// (0x00034461) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0003c3f0) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0003c3f0) status_small_pane_g

0x785d,	// (0x00034491) status_small_pane_t1

0x7880,	// (0x000344b4) status_small_wait_pane_ParamLimits

0x7880,	// (0x000344b4) status_small_wait_pane

0xaa4a,	// (0x0003767e) aid_levels_signal_ParamLimits

0xaa4a,	// (0x0003767e) aid_levels_signal

0xaa5b,	// (0x0003768f) signal_pane_g1_ParamLimits

0xaa5b,	// (0x0003768f) signal_pane_g1

0xaa71,	// (0x000376a5) signal_pane_g2_ParamLimits

0xaa71,	// (0x000376a5) signal_pane_g2

0x0001,

0xf751,	// (0x0003c385) signal_pane_g_ParamLimits

0xf751,	// (0x0003c385) signal_pane_g

0x722d,	// (0x00033e61) context_pane_g1

0xa3d9,	// (0x0003700d) title_pane_g1

0xa403,	// (0x00037037) title_pane_t1

0x3542,	// (0x00030176) title_pane_t2

0x3568,	// (0x0003019c) title_pane_t3

0x0002,

0xf59b,	// (0x0003c1cf) title_pane_t

0xb58d,	// (0x000381c1) aid_levels_battery_ParamLimits

0xb58d,	// (0x000381c1) aid_levels_battery

0xb5a0,	// (0x000381d4) battery_pane_g1_ParamLimits

0xb5a0,	// (0x000381d4) battery_pane_g1

0xb5b5,	// (0x000381e9) battery_pane_g2_ParamLimits

0xb5b5,	// (0x000381e9) battery_pane_g2

0x0001,

0xf7f0,	// (0x0003c424) battery_pane_g_ParamLimits

0xf7f0,	// (0x0003c424) battery_pane_g

0xba03,	// (0x00038637) uni_indicator_pane_g1

0xba18,	// (0x0003864c) uni_indicator_pane_g2

0xba2e,	// (0x00038662) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0003c58e) uni_indicator_pane_g

0x6d81,	// (0x000339b5) navi_icon_pane_ParamLimits

0x6d81,	// (0x000339b5) navi_icon_pane

0x33b8,	// (0x0002ffec) navi_midp_pane

0x33b8,	// (0x0002ffec) navi_navi_pane

0x6d81,	// (0x000339b5) navi_text_pane_ParamLimits

0x6d81,	// (0x000339b5) navi_text_pane

0x326b,	// (0x0002fe9f) status_small_wait_pane_g1

0x3aad,	// (0x000306e1) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0003c589) status_small_wait_pane_g

0x8ef3,	// (0x00035b27) navi_navi_icon_text_pane

0x8f0d,	// (0x00035b41) navi_navi_pane_g1_ParamLimits

0x8f0d,	// (0x00035b41) navi_navi_pane_g1

0x8efb,	// (0x00035b2f) navi_navi_pane_g2_ParamLimits

0x8efb,	// (0x00035b2f) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0003c557) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0003c557) navi_navi_pane_g

0x8f1f,	// (0x00035b53) navi_navi_tabs_pane

0x8ef3,	// (0x00035b27) navi_navi_text_pane

0x8ef3,	// (0x00035b27) navi_navi_volume_pane

0x8978,	// (0x000355ac) navi_text_pane_t1

0x896c,	// (0x000355a0) navi_icon_pane_g1

0x88c0,	// (0x000354f4) navi_navi_text_pane_t1

0xb9cd,	// (0x00038601) navi_navi_volume_pane_g1

0xb9d5,	// (0x00038609) volume_small_pane

0xb93f,	// (0x00038573) navi_navi_icon_text_pane_g1

0xb947,	// (0x0003857b) navi_navi_icon_text_pane_t1

0x847a,	// (0x000350ae) navi_tabs_2_long_pane

0x847a,	// (0x000350ae) navi_tabs_2_pane

0x847a,	// (0x000350ae) navi_tabs_3_long_pane

0x847a,	// (0x000350ae) navi_tabs_3_pane

0x847a,	// (0x000350ae) navi_tabs_4_pane

0xb91f,	// (0x00038553) tabs_2_active_pane_ParamLimits

0xb91f,	// (0x00038553) tabs_2_active_pane

0xb92f,	// (0x00038563) tabs_2_passive_pane_ParamLimits

0xb92f,	// (0x00038563) tabs_2_passive_pane

0xb8ed,	// (0x00038521) tabs_3_active_pane_ParamLimits

0xb8ed,	// (0x00038521) tabs_3_active_pane

0xb8fd,	// (0x00038531) tabs_3_passive_pane_ParamLimits

0xb8fd,	// (0x00038531) tabs_3_passive_pane

0xb90e,	// (0x00038542) tabs_3_passive_pane_cp_ParamLimits

0xb90e,	// (0x00038542) tabs_3_passive_pane_cp

0xb8a9,	// (0x000384dd) tabs_4_active_pane_ParamLimits

0xb8a9,	// (0x000384dd) tabs_4_active_pane

0xb8ba,	// (0x000384ee) tabs_4_passive_pane_ParamLimits

0xb8ba,	// (0x000384ee) tabs_4_passive_pane

0xb8cb,	// (0x000384ff) tabs_4_passive_pane_cp_ParamLimits

0xb8cb,	// (0x000384ff) tabs_4_passive_pane_cp

0xb8dc,	// (0x00038510) tabs_4_passive_pane_cp2_ParamLimits

0xb8dc,	// (0x00038510) tabs_4_passive_pane_cp2

0xb889,	// (0x000384bd) tabs_2_long_active_pane_ParamLimits

0xb889,	// (0x000384bd) tabs_2_long_active_pane

0xb899,	// (0x000384cd) tabs_2_long_passive_pane_ParamLimits

0xb899,	// (0x000384cd) tabs_2_long_passive_pane

0xb854,	// (0x00038488) tabs_3_long_active_pane_ParamLimits

0xb854,	// (0x00038488) tabs_3_long_active_pane

0xb865,	// (0x00038499) tabs_3_long_passive_pane_ParamLimits

0xb865,	// (0x00038499) tabs_3_long_passive_pane

0xb878,	// (0x000384ac) tabs_3_long_passive_pane_cp_ParamLimits

0xb878,	// (0x000384ac) tabs_3_long_passive_pane_cp

0xb7fa,	// (0x0003842e) volume_small_pane_g1

0xb803,	// (0x00038437) volume_small_pane_g2

0xb80c,	// (0x00038440) volume_small_pane_g3

0xb815,	// (0x00038449) volume_small_pane_g4

0xb81e,	// (0x00038452) volume_small_pane_g5

0xb827,	// (0x0003845b) volume_small_pane_g6

0xb830,	// (0x00038464) volume_small_pane_g7

0xb839,	// (0x0003846d) volume_small_pane_g8

0xb842,	// (0x00038476) volume_small_pane_g9

0xb84b,	// (0x0003847f) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0003c523) volume_small_pane_g

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp2_ParamLimits

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp2

0x3588,	// (0x000301bc) tabs_3_active_pane_g1

0xa46b,	// (0x0003709f) tabs_3_active_pane_t1

0x35c4,	// (0x000301f8) bg_passive_tab_pane_cp2_ParamLimits

0x35c4,	// (0x000301f8) bg_passive_tab_pane_cp2

0x3588,	// (0x000301bc) tabs_3_passive_pane_g1

0xa46b,	// (0x0003709f) tabs_3_passive_pane_t1

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp3_ParamLimits

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp3

0xa47d,	// (0x000370b1) tabs_4_active_pane_g1

0xa485,	// (0x000370b9) tabs_4_active_pane_t1

0x35c4,	// (0x000301f8) bg_passive_tab_pane_cp3_ParamLimits

0x35c4,	// (0x000301f8) bg_passive_tab_pane_cp3

0xa47d,	// (0x000370b1) tabs_4_1_passive_pane_g1

0xa485,	// (0x000370b9) tabs_4_1_passive_pane_t1

0x6e5d,	// (0x00033a91) list_highlight_pane_cp2

0xbb4c,	// (0x00038780) list_set_pane_ParamLimits

0xbb4c,	// (0x00038780) list_set_pane

0xbbda,	// (0x0003880e) main_pane_set_t1_ParamLimits

0xbbda,	// (0x0003880e) main_pane_set_t1

0xbbfa,	// (0x0003882e) main_pane_set_t2_ParamLimits

0xbbfa,	// (0x0003882e) main_pane_set_t2

0xbc0c,	// (0x00038840) main_pane_set_t3_ParamLimits

0xbc0c,	// (0x00038840) main_pane_set_t3

0xbc1e,	// (0x00038852) main_pane_set_t4_ParamLimits

0xbc1e,	// (0x00038852) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0003c5f3) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0003c5f3) main_pane_set_t

0xbc30,	// (0x00038864) setting_code_pane

0xbc38,	// (0x0003886c) setting_slider_graphic_pane

0xbc38,	// (0x0003886c) setting_slider_pane

0xbc38,	// (0x0003886c) setting_text_pane

0xbc38,	// (0x0003886c) setting_volume_pane

0xa497,	// (0x000370cb) volume_set_pane

0x35c4,	// (0x000301f8) bg_set_opt_pane_cp

0xa49f,	// (0x000370d3) setting_slider_pane_t1

0xa4b5,	// (0x000370e9) setting_slider_pane_t2

0xa4ce,	// (0x00037102) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003c1d6) setting_slider_pane_t

0xa4e5,	// (0x00037119) slider_set_pane

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp2

0x362e,	// (0x00030262) setting_slider_graphic_pane_g1

0xa4fb,	// (0x0003712f) setting_slider_graphic_pane_t1

0xa50a,	// (0x0003713e) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003c1dd) setting_slider_graphic_pane_t

0xa519,	// (0x0003714d) slider_set_pane_cp

0x33b8,	// (0x0002ffec) input_focus_pane_cp1

0x8dc8,	// (0x000359fc) list_set_text_pane

0x326b,	// (0x0002fe9f) setting_text_pane_g1

0x33b8,	// (0x0002ffec) input_focus_pane_cp2

0x326b,	// (0x0002fe9f) setting_code_pane_g1

0x365d,	// (0x00030291) setting_code_pane_t1

0xe5da,	// (0x0003b20e) set_text_pane_t1_ParamLimits

0xe5da,	// (0x0003b20e) set_text_pane_t1

0x6d30,	// (0x00033964) set_opt_bg_pane_g1

0x6d38,	// (0x0003396c) set_opt_bg_pane_g2

0xbb0c,	// (0x00038740) set_opt_bg_pane_g3

0x6d48,	// (0x0003397c) set_opt_bg_pane_g4

0x6d50,	// (0x00033984) set_opt_bg_pane_g5

0x6d58,	// (0x0003398c) set_opt_bg_pane_g6

0xbb14,	// (0x00038748) set_opt_bg_pane_g7

0xbb1c,	// (0x00038750) set_opt_bg_pane_g8

0xbb24,	// (0x00038758) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0003c5e0) set_opt_bg_pane_g

0x8dbb,	// (0x000359ef) slider_set_pane_g1

0xbaa8,	// (0x000386dc) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0003c5d1) slider_set_pane_g

0xba44,	// (0x00038678) volume_set_pane_g1

0xba4c,	// (0x00038680) volume_set_pane_g2

0xba54,	// (0x00038688) volume_set_pane_g3

0xba5c,	// (0x00038690) volume_set_pane_g4

0xba64,	// (0x00038698) volume_set_pane_g5

0xba6c,	// (0x000386a0) volume_set_pane_g6

0xba74,	// (0x000386a8) volume_set_pane_g7

0xba7c,	// (0x000386b0) volume_set_pane_g8

0xba84,	// (0x000386b8) volume_set_pane_g9

0xba8c,	// (0x000386c0) volume_set_pane_g10

0x0009,

0xf975,	// (0x0003c5a9) volume_set_pane_g

0xa521,	// (0x00037155) indicator_pane_ParamLimits

0xa521,	// (0x00037155) indicator_pane

0xa52d,	// (0x00037161) main_idle_pane_g2_ParamLimits

0xa52d,	// (0x00037161) main_idle_pane_g2

0xa551,	// (0x00037185) main_pane_idle_g1_ParamLimits

0xa551,	// (0x00037185) main_pane_idle_g1

0x36e8,	// (0x0003031c) popup_clock_digital_analogue_window_ParamLimits

0x36e8,	// (0x0003031c) popup_clock_digital_analogue_window

0xa55e,	// (0x00037192) soft_indicator_pane_ParamLimits

0xa55e,	// (0x00037192) soft_indicator_pane

0xa56a,	// (0x0003719e) wallpaper_pane_ParamLimits

0xa56a,	// (0x0003719e) wallpaper_pane

0x326b,	// (0x0002fe9f) wallpaper_pane_g1

0xa576,	// (0x000371aa) indicator_pane_g1_ParamLimits

0xa576,	// (0x000371aa) indicator_pane_g1

0x8ec2,	// (0x00035af6) navi_navi_icon_text_pane_srt_g1

0x375b,	// (0x0003038f) soft_indicator_pane_t1

0x3775,	// (0x000303a9) aid_ps_area_pane

0xa582,	// (0x000371b6) aid_ps_clock_pane

0x3792,	// (0x000303c6) aid_ps_indicator_pane

0x379e,	// (0x000303d2) indicator_ps_pane_ParamLimits

0x379e,	// (0x000303d2) indicator_ps_pane

0x37ad,	// (0x000303e1) power_save_pane_g1_ParamLimits

0x37ad,	// (0x000303e1) power_save_pane_g1

0x37b9,	// (0x000303ed) power_save_pane_g2_ParamLimits

0x37b9,	// (0x000303ed) power_save_pane_g2

0xa0e7,	// (0x00036d1b) aid_navinavi_width_pane

0x3775,	// (0x000303a9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003c1e2) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003c1e2) power_save_pane_g

0x37c7,	// (0x000303fb) power_save_pane_t1_ParamLimits

0x37c7,	// (0x000303fb) power_save_pane_t1

0xa582,	// (0x000371b6) aid_ps_clock_pane_ParamLimits

0x3792,	// (0x000303c6) aid_ps_indicator_pane_ParamLimits

0x37d9,	// (0x0003040d) power_save_pane_t4_ParamLimits

0x37d9,	// (0x0003040d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003c1e7) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003c1e7) power_save_pane_t

0x3803,	// (0x00030437) power_save_t3_ParamLimits

0x3803,	// (0x00030437) power_save_t3

0x37ee,	// (0x00030422) power_save_t2_ParamLimits

0x37ee,	// (0x00030422) power_save_t2

0x3818,	// (0x0003044c) indicator_ps_pane_g1

0xa58e,	// (0x000371c2) ai_gene_pane_ParamLimits

0xa58e,	// (0x000371c2) ai_gene_pane

0xa59a,	// (0x000371ce) ai_links_pane_ParamLimits

0xa59a,	// (0x000371ce) ai_links_pane

0xa5a6,	// (0x000371da) indicator_pane_cp1_ParamLimits

0xa5a6,	// (0x000371da) indicator_pane_cp1

0xa5b2,	// (0x000371e6) main_pane_idle_g1_cp_ParamLimits

0xa5b2,	// (0x000371e6) main_pane_idle_g1_cp

0x3871,	// (0x000304a5) popup_ai_links_title_window

0xa5be,	// (0x000371f2) soft_indicator_pane_cp1_ParamLimits

0xa5be,	// (0x000371f2) soft_indicator_pane_cp1

0x8bfd,	// (0x00035831) ai_links_pane_g1

0x8c06,	// (0x0003583a) grid_ai_links_pane

0xb9fa,	// (0x0003862e) ai_gene_pane_1

0x8beb,	// (0x0003581f) ai_gene_pane_2

0x8bf4,	// (0x00035828) list_highlight_pane_cp4

0xb9de,	// (0x00038612) cell_ai_link_pane_ParamLimits

0xb9de,	// (0x00038612) cell_ai_link_pane

0x8be3,	// (0x00035817) cell_ai_link_pane_g1

0x3aad,	// (0x000306e1) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0003c584) cell_ai_link_pane_g

0x33b8,	// (0x0002ffec) grid_highlight_cp2

0x33b8,	// (0x0002ffec) bg_popup_sub_pane_cp1

0x389c,	// (0x000304d0) popup_ai_links_title_window_t1

0x8b35,	// (0x00035769) ai_gene_pane_1_g1_ParamLimits

0x8b35,	// (0x00035769) ai_gene_pane_1_g1

0x8b41,	// (0x00035775) ai_gene_pane_1_g2_ParamLimits

0x8b41,	// (0x00035775) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0003c57a) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0003c57a) ai_gene_pane_1_g

0x8b4e,	// (0x00035782) ai_gene_pane_1_t1_ParamLimits

0x8b4e,	// (0x00035782) ai_gene_pane_1_t1

0x8b82,	// (0x000357b6) grid_ai_soft_ind_pane

0x8b20,	// (0x00035754) ai_gene_pane_2_t1_ParamLimits

0x8b20,	// (0x00035754) ai_gene_pane_2_t1

0xa5ca,	// (0x000371fe) main_pane_empty_t1_ParamLimits

0xa5ca,	// (0x000371fe) main_pane_empty_t1

0xa5e7,	// (0x0003721b) main_pane_empty_t2_ParamLimits

0xa5e7,	// (0x0003721b) main_pane_empty_t2

0xa5ff,	// (0x00037233) main_pane_empty_t3_ParamLimits

0xa5ff,	// (0x00037233) main_pane_empty_t3

0xa612,	// (0x00037246) main_pane_empty_t4_ParamLimits

0xa612,	// (0x00037246) main_pane_empty_t4

0xa625,	// (0x00037259) main_pane_empty_t5_ParamLimits

0xa625,	// (0x00037259) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003c1ec) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003c1ec) main_pane_empty_t

0x6d81,	// (0x000339b5) bg_popup_window_pane_ParamLimits

0x6d81,	// (0x000339b5) bg_popup_window_pane

0x88cf,	// (0x00035503) find_popup_pane_cp2_ParamLimits

0x88cf,	// (0x00035503) find_popup_pane_cp2

0x88db,	// (0x0003550f) heading_pane_ParamLimits

0x88db,	// (0x0003550f) heading_pane

0x33b8,	// (0x0002ffec) bg_popup_sub_pane

0xb961,	// (0x00038595) bg_popup_window_pane_g1_ParamLimits

0xb961,	// (0x00038595) bg_popup_window_pane_g1

0xb96d,	// (0x000385a1) bg_popup_window_pane_g2_ParamLimits

0xb96d,	// (0x000385a1) bg_popup_window_pane_g2

0xb979,	// (0x000385ad) bg_popup_window_pane_g3_ParamLimits

0xb979,	// (0x000385ad) bg_popup_window_pane_g3

0xb985,	// (0x000385b9) bg_popup_window_pane_g4_ParamLimits

0xb985,	// (0x000385b9) bg_popup_window_pane_g4

0xb991,	// (0x000385c5) bg_popup_window_pane_g5_ParamLimits

0xb991,	// (0x000385c5) bg_popup_window_pane_g5

0xb99d,	// (0x000385d1) bg_popup_window_pane_g6_ParamLimits

0xb99d,	// (0x000385d1) bg_popup_window_pane_g6

0xb9a9,	// (0x000385dd) bg_popup_window_pane_g7_ParamLimits

0xb9a9,	// (0x000385dd) bg_popup_window_pane_g7

0xb9b5,	// (0x000385e9) bg_popup_window_pane_g8_ParamLimits

0xb9b5,	// (0x000385e9) bg_popup_window_pane_g8

0xb9c1,	// (0x000385f5) bg_popup_window_pane_g9_ParamLimits

0xb9c1,	// (0x000385f5) bg_popup_window_pane_g9

0x88b4,	// (0x000354e8) bg_popup_window_pane_g10_ParamLimits

0x88b4,	// (0x000354e8) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0003c542) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0003c542) bg_popup_window_pane_g

0x886b,	// (0x0003549f) bg_popup_heading_pane_ParamLimits

0x886b,	// (0x0003549f) bg_popup_heading_pane

0xbd6e,	// (0x000389a2) tabs_4_passive_pane_cp_srt_ParamLimits

0xbd6e,	// (0x000389a2) tabs_4_passive_pane_cp_srt

0xbd80,	// (0x000389b4) tabs_4_passive_pane_srt_ParamLimits

0x887f,	// (0x000354b3) heading_pane_g2

0xbd80,	// (0x000389b4) tabs_4_passive_pane_srt

0x6e5d,	// (0x00033a91) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6e5d,	// (0x00033a91) bg_passive_tab_pane_cp3_srt

0x8887,	// (0x000354bb) heading_pane_t1_ParamLimits

0x8887,	// (0x000354bb) heading_pane_t1

0x889e,	// (0x000354d2) heading_pane_t2_ParamLimits

0x889e,	// (0x000354d2) heading_pane_t2

0x0001,

0xf909,	// (0x0003c53d) heading_pane_t_ParamLimits

0xf909,	// (0x0003c53d) heading_pane_t

0x83fa,	// (0x0003502e) bg_popup_heading_pane_g1

0x848b,	// (0x000350bf) bg_popup_heading_pane_g2

0x8493,	// (0x000350c7) bg_popup_heading_pane_g3

0x849b,	// (0x000350cf) bg_popup_heading_pane_g4

0x84a3,	// (0x000350d7) bg_popup_heading_pane_g5

0x84ab,	// (0x000350df) bg_popup_heading_pane_g6

0x84b3,	// (0x000350e7) bg_popup_heading_pane_g7

0x84bb,	// (0x000350ef) bg_popup_heading_pane_g8

0x84c3,	// (0x000350f7) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0003c4f9) bg_popup_heading_pane_g

0x7b96,	// (0x000347ca) bg_popup_sub_pane_g1

0x7b9e,	// (0x000347d2) bg_popup_sub_pane_g2

0x7ba6,	// (0x000347da) bg_popup_sub_pane_g3

0x7bae,	// (0x000347e2) bg_popup_sub_pane_g4

0x7bb6,	// (0x000347ea) bg_popup_sub_pane_g5

0x7bbe,	// (0x000347f2) bg_popup_sub_pane_g6

0x7bc6,	// (0x000347fa) bg_popup_sub_pane_g7

0x7bce,	// (0x00034802) bg_popup_sub_pane_g8

0x7bd6,	// (0x0003480a) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0003c4d3) bg_popup_sub_pane_g

0x357a,	// (0x000301ae) bg_popup_window_pane_cp5_ParamLimits

0x357a,	// (0x000301ae) bg_popup_window_pane_cp5

0x3927,	// (0x0003055b) popup_note_window_g1_ParamLimits

0x3927,	// (0x0003055b) popup_note_window_g1

0x3933,	// (0x00030567) popup_note_window_t1_ParamLimits

0x3933,	// (0x00030567) popup_note_window_t1

0x3949,	// (0x0003057d) popup_note_window_t2_ParamLimits

0x3949,	// (0x0003057d) popup_note_window_t2

0x395f,	// (0x00030593) popup_note_window_t3_ParamLimits

0x395f,	// (0x00030593) popup_note_window_t3

0x3975,	// (0x000305a9) popup_note_window_t4_ParamLimits

0x3975,	// (0x000305a9) popup_note_window_t4

0x399d,	// (0x000305d1) popup_note_window_t5_ParamLimits

0x399d,	// (0x000305d1) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003c1f7) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003c1f7) popup_note_window_t

0x39c1,	// (0x000305f5) bg_popup_window_pane_cp6_ParamLimits

0x39c1,	// (0x000305f5) bg_popup_window_pane_cp6

0x8376,	// (0x00034faa) popup_note_image_window_g1_ParamLimits

0x8376,	// (0x00034faa) popup_note_image_window_g1

0x8382,	// (0x00034fb6) popup_note_image_window_g2_ParamLimits

0x8382,	// (0x00034fb6) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0003c4c7) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0003c4c7) popup_note_image_window_g

0x839b,	// (0x00034fcf) popup_note_image_window_t1_ParamLimits

0x839b,	// (0x00034fcf) popup_note_image_window_t1

0x83b4,	// (0x00034fe8) popup_note_image_window_t2_ParamLimits

0x83b4,	// (0x00034fe8) popup_note_image_window_t2

0x83cd,	// (0x00035001) popup_note_image_window_t3_ParamLimits

0x83cd,	// (0x00035001) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0003c4cc) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0003c4cc) popup_note_image_window_t

0x8261,	// (0x00034e95) bg_popup_window_pane_cp7_ParamLimits

0x8261,	// (0x00034e95) bg_popup_window_pane_cp7

0x8291,	// (0x00034ec5) popup_note_wait_window_g1_ParamLimits

0x8291,	// (0x00034ec5) popup_note_wait_window_g1

0x829d,	// (0x00034ed1) popup_note_wait_window_g2_ParamLimits

0x829d,	// (0x00034ed1) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0003c4b5) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0003c4b5) popup_note_wait_window_g

0x82b5,	// (0x00034ee9) popup_note_wait_window_t1_ParamLimits

0x82b5,	// (0x00034ee9) popup_note_wait_window_t1

0x82dc,	// (0x00034f10) popup_note_wait_window_t2_ParamLimits

0x82dc,	// (0x00034f10) popup_note_wait_window_t2

0x82f9,	// (0x00034f2d) popup_note_wait_window_t3_ParamLimits

0x82f9,	// (0x00034f2d) popup_note_wait_window_t3

0x830c,	// (0x00034f40) popup_note_wait_window_t4_ParamLimits

0x830c,	// (0x00034f40) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0003c4bc) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0003c4bc) popup_note_wait_window_t

0x8331,	// (0x00034f65) wait_bar_pane_ParamLimits

0x8331,	// (0x00034f65) wait_bar_pane

0x33b8,	// (0x0002ffec) wait_anim_pane

0x33b8,	// (0x0002ffec) wait_border_pane

0x326b,	// (0x0002fe9f) wait_anim_pane_g1

0x326b,	// (0x0002fe9f) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0003c380) wait_anim_pane_g

0x8211,	// (0x00034e45) wait_border_pane_g1

0x821a,	// (0x00034e4e) wait_border_pane_g2

0x8223,	// (0x00034e57) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0003c4ae) wait_border_pane_g

0x8173,	// (0x00034da7) bg_popup_window_pane_cp16_ParamLimits

0x8173,	// (0x00034da7) bg_popup_window_pane_cp16

0x8181,	// (0x00034db5) indicator_popup_pane_cp4_ParamLimits

0x8181,	// (0x00034db5) indicator_popup_pane_cp4

0x8195,	// (0x00034dc9) popup_query_data_window_t1_ParamLimits

0x8195,	// (0x00034dc9) popup_query_data_window_t1

0x81a7,	// (0x00034ddb) popup_query_data_window_t2_ParamLimits

0x81a7,	// (0x00034ddb) popup_query_data_window_t2

0x81c0,	// (0x00034df4) popup_query_data_window_t3_ParamLimits

0x81c0,	// (0x00034df4) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0003c4a7) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0003c4a7) popup_query_data_window_t

0x81da,	// (0x00034e0e) query_popup_data_pane_ParamLimits

0x81da,	// (0x00034e0e) query_popup_data_pane

0x81ee,	// (0x00034e22) query_popup_data_pane_cp1_ParamLimits

0x81ee,	// (0x00034e22) query_popup_data_pane_cp1

0x39c1,	// (0x000305f5) bg_popup_window_pane_cp10_ParamLimits

0x39c1,	// (0x000305f5) bg_popup_window_pane_cp10

0x80d6,	// (0x00034d0a) indicator_popup_pane_ParamLimits

0x80d6,	// (0x00034d0a) indicator_popup_pane

0x3a18,	// (0x0003064c) popup_query_code_window_t1_ParamLimits

0x3a18,	// (0x0003064c) popup_query_code_window_t1

0x80ee,	// (0x00034d22) popup_query_code_window_t2_ParamLimits

0x80ee,	// (0x00034d22) popup_query_code_window_t2

0x812c,	// (0x00034d60) popup_query_code_window_t3_ParamLimits

0x812c,	// (0x00034d60) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0003c4a0) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0003c4a0) popup_query_code_window_t

0x815b,	// (0x00034d8f) query_popup_pane_ParamLimits

0x815b,	// (0x00034d8f) query_popup_pane

0x39c1,	// (0x000305f5) bg_popup_window_pane_cp15_ParamLimits

0x39c1,	// (0x000305f5) bg_popup_window_pane_cp15

0x39df,	// (0x00030613) indicator_popup_pane_cp1_ParamLimits

0x39df,	// (0x00030613) indicator_popup_pane_cp1

0x39f2,	// (0x00030626) indicator_popup_pane_cp2_ParamLimits

0x39f2,	// (0x00030626) indicator_popup_pane_cp2

0x3a05,	// (0x00030639) popup_query_data_code_window_g1_ParamLimits

0x3a05,	// (0x00030639) popup_query_data_code_window_g1

0x3a18,	// (0x0003064c) popup_query_data_code_window_t1_ParamLimits

0x3a18,	// (0x0003064c) popup_query_data_code_window_t1

0x3a2a,	// (0x0003065e) popup_query_data_code_window_t2_ParamLimits

0x3a2a,	// (0x0003065e) popup_query_data_code_window_t2

0x3a3c,	// (0x00030670) popup_query_data_code_window_t3_ParamLimits

0x3a3c,	// (0x00030670) popup_query_data_code_window_t3

0x3a52,	// (0x00030686) popup_query_data_code_window_t4_ParamLimits

0x3a52,	// (0x00030686) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003c202) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003c202) popup_query_data_code_window_t

0xb614,	// (0x00038248) list_single_midp_graphic_pane_g3

0x3a6a,	// (0x0003069e) query_popup_data_pane_cp2_ParamLimits

0x3a7d,	// (0x000306b1) query_popup_pane_cp2_ParamLimits

0x3a7d,	// (0x000306b1) query_popup_pane_cp2

0x33b8,	// (0x0002ffec) bg_popup_window_pane_cp11

0x80aa,	// (0x00034cde) heading_pane_cp5

0x3b61,	// (0x00030795) listscroll_popup_info_pane

0x33b8,	// (0x0002ffec) input_focus_pane_cp3

0x3a90,	// (0x000306c4) query_popup_pane_t1

0x3a9e,	// (0x000306d2) list_popup_info_pane_ParamLimits

0x3a9e,	// (0x000306d2) list_popup_info_pane

0x3aad,	// (0x000306e1) listscroll_popup_info_pane_g1

0x3ab5,	// (0x000306e9) scroll_pane_cp7

0x3abd,	// (0x000306f1) popup_info_list_pane_t1_ParamLimits

0x3abd,	// (0x000306f1) popup_info_list_pane_t1

0x3ad7,	// (0x0003070b) popup_info_list_pane_t2_ParamLimits

0x3ad7,	// (0x0003070b) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003c20b) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003c20b) popup_info_list_pane_t

0x33b8,	// (0x0002ffec) bg_popup_window_pane_cp12

0x8edc,	// (0x00035b10) find_popup_pane

0x35c4,	// (0x000301f8) bg_popup_window_pane_cp3

0x3af1,	// (0x00030725) heading_pane_cp3

0x3afd,	// (0x00030731) listscroll_popup_graphic_pane

0x33b8,	// (0x0002ffec) bg_popup_window_pane_cp4

0xa688,	// (0x000372bc) heading_pane_cp4

0x3b61,	// (0x00030795) listscroll_popup_colour_pane

0x3b69,	// (0x0003079d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b69,	// (0x0003079d) cell_large_graphic_colour_none_popup_pane

0xa690,	// (0x000372c4) grid_large_graphic_colour_popup_pane_ParamLimits

0xa690,	// (0x000372c4) grid_large_graphic_colour_popup_pane

0xa6ac,	// (0x000372e0) listscroll_popup_colour_pane_g1_ParamLimits

0xa6ac,	// (0x000372e0) listscroll_popup_colour_pane_g1

0xa6c3,	// (0x000372f7) listscroll_popup_colour_pane_g2_ParamLimits

0xa6c3,	// (0x000372f7) listscroll_popup_colour_pane_g2

0x3bc0,	// (0x000307f4) listscroll_popup_colour_pane_g3_ParamLimits

0x3bc0,	// (0x000307f4) listscroll_popup_colour_pane_g3

0xa6d7,	// (0x0003730b) listscroll_popup_colour_pane_g4_ParamLimits

0xa6d7,	// (0x0003730b) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003c210) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003c210) listscroll_popup_colour_pane_g

0x3bdf,	// (0x00030813) scroll_pane_cp6_ParamLimits

0x3bdf,	// (0x00030813) scroll_pane_cp6

0xa6e6,	// (0x0003731a) cell_large_graphic_colour_popup_pane_ParamLimits

0xa6e6,	// (0x0003731a) cell_large_graphic_colour_popup_pane

0x3c10,	// (0x00030844) cell_large_graphic_colour_none_popup_pane_t1

0x33b8,	// (0x0002ffec) grid_highlight_pane_cp5

0x3c1f,	// (0x00030853) cell_large_graphic_colour_popup_pane_g1

0x3c27,	// (0x0003085b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003c219) cell_large_graphic_colour_popup_pane_g

0x3c2f,	// (0x00030863) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c38,	// (0x0003086c) grid_highlight_pane_cp4

0x3c40,	// (0x00030874) bg_popup_window_pane_cp8_ParamLimits

0x3c40,	// (0x00030874) bg_popup_window_pane_cp8

0x3c5b,	// (0x0003088f) popup_snote_single_text_window_g1_ParamLimits

0x3c5b,	// (0x0003088f) popup_snote_single_text_window_g1

0x3c6d,	// (0x000308a1) popup_snote_single_text_window_t1_ParamLimits

0x3c6d,	// (0x000308a1) popup_snote_single_text_window_t1

0x3c80,	// (0x000308b4) popup_snote_single_text_window_t2_ParamLimits

0x3c80,	// (0x000308b4) popup_snote_single_text_window_t2

0x3c93,	// (0x000308c7) popup_snote_single_text_window_t3_ParamLimits

0x3c93,	// (0x000308c7) popup_snote_single_text_window_t3

0x3ccc,	// (0x00030900) popup_snote_single_text_window_t4_ParamLimits

0x3ccc,	// (0x00030900) popup_snote_single_text_window_t4

0x3d00,	// (0x00030934) popup_snote_single_text_window_t5_ParamLimits

0x3d00,	// (0x00030934) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003c21e) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003c21e) popup_snote_single_text_window_t

0x3d2f,	// (0x00030963) bg_popup_window_pane_cp9_ParamLimits

0x3d2f,	// (0x00030963) bg_popup_window_pane_cp9

0x3c5b,	// (0x0003088f) popup_snote_single_graphic_window_g1_ParamLimits

0x3c5b,	// (0x0003088f) popup_snote_single_graphic_window_g1

0x3d3d,	// (0x00030971) popup_snote_single_graphic_window_g2_ParamLimits

0x3d3d,	// (0x00030971) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003c229) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003c229) popup_snote_single_graphic_window_g

0x3d49,	// (0x0003097d) popup_snote_single_graphic_window_t1_ParamLimits

0x3d49,	// (0x0003097d) popup_snote_single_graphic_window_t1

0x3d5c,	// (0x00030990) popup_snote_single_graphic_window_t2_ParamLimits

0x3d5c,	// (0x00030990) popup_snote_single_graphic_window_t2

0x3c93,	// (0x000308c7) popup_snote_single_graphic_window_t3_ParamLimits

0x3c93,	// (0x000308c7) popup_snote_single_graphic_window_t3

0x3ccc,	// (0x00030900) popup_snote_single_graphic_window_t4_ParamLimits

0x3ccc,	// (0x00030900) popup_snote_single_graphic_window_t4

0x3d00,	// (0x00030934) popup_snote_single_graphic_window_t5_ParamLimits

0x3d00,	// (0x00030934) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003c22e) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003c22e) popup_snote_single_graphic_window_t

0xbcff,	// (0x00038933) grid_graphic_popup_pane_ParamLimits

0xbcff,	// (0x00038933) grid_graphic_popup_pane

0xbd22,	// (0x00038956) listscroll_popup_graphic_pane_g1_ParamLimits

0xbd22,	// (0x00038956) listscroll_popup_graphic_pane_g1

0xbd36,	// (0x0003896a) listscroll_popup_graphic_pane_g2_ParamLimits

0xbd36,	// (0x0003896a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0003c61d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0003c61d) listscroll_popup_graphic_pane_g

0x8072,	// (0x00034ca6) scroll_pane_cp5

0xbcb8,	// (0x000388ec) cell_graphic_popup_pane_ParamLimits

0xbcb8,	// (0x000388ec) cell_graphic_popup_pane

0x8e85,	// (0x00035ab9) cell_graphic_popup_pane_g1

0x8e8d,	// (0x00035ac1) cell_graphic_popup_pane_g2

0x3c2f,	// (0x00030863) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0003c616) cell_graphic_popup_pane_g

0x8e96,	// (0x00035aca) cell_graphic_popup_pane_t2

0x3c38,	// (0x0003086c) grid_highlight_pane_cp3

0x3d81,	// (0x000309b5) list_gen_pane_ParamLimits

0x3d81,	// (0x000309b5) list_gen_pane

0x3db2,	// (0x000309e6) scroll_pane

0xbc89,	// (0x000388bd) bg_list_pane_g1_ParamLimits

0xbc89,	// (0x000388bd) bg_list_pane_g1

0x8e3c,	// (0x00035a70) bg_list_pane_g2_ParamLimits

0x8e3c,	// (0x00035a70) bg_list_pane_g2

0x8e4f,	// (0x00035a83) bg_list_pane_g3_ParamLimits

0x8e4f,	// (0x00035a83) bg_list_pane_g3

0x8e61,	// (0x00035a95) bg_list_pane_g4_ParamLimits

0x8e61,	// (0x00035a95) bg_list_pane_g4

0xbca0,	// (0x000388d4) bg_list_pane_g5_ParamLimits

0xbca0,	// (0x000388d4) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0003c60b) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0003c60b) bg_list_pane_g

0xbc65,	// (0x00038899) list_double2_graphic_large_graphic_pane_ParamLimits

0xbc65,	// (0x00038899) list_double2_graphic_large_graphic_pane

0xbc65,	// (0x00038899) list_double2_graphic_pane_ParamLimits

0xbc65,	// (0x00038899) list_double2_graphic_pane

0xbc65,	// (0x00038899) list_double2_large_graphic_pane_ParamLimits

0xbc65,	// (0x00038899) list_double2_large_graphic_pane

0xbc65,	// (0x00038899) list_double2_pane_ParamLimits

0xbc65,	// (0x00038899) list_double2_pane

0xbc65,	// (0x00038899) list_double_graphic_heading_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_graphic_heading_pane

0xbc65,	// (0x00038899) list_double_graphic_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_graphic_pane

0xbc65,	// (0x00038899) list_double_heading_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_heading_pane

0xbc65,	// (0x00038899) list_double_large_graphic_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_large_graphic_pane

0xbc65,	// (0x00038899) list_double_number_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_number_pane

0xbc65,	// (0x00038899) list_double_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_pane

0xbc65,	// (0x00038899) list_double_time_pane_ParamLimits

0xbc65,	// (0x00038899) list_double_time_pane

0xbc65,	// (0x00038899) list_setting_number_pane_ParamLimits

0xbc65,	// (0x00038899) list_setting_number_pane

0xbc65,	// (0x00038899) list_setting_pane_ParamLimits

0xbc65,	// (0x00038899) list_setting_pane

0xedcf,	// (0x0003ba03) list_single_2graphic_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_2graphic_pane

0xedcf,	// (0x0003ba03) list_single_graphic_heading_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_graphic_heading_pane

0xedcf,	// (0x0003ba03) list_single_graphic_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_graphic_pane

0xedcf,	// (0x0003ba03) list_single_heading_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_heading_pane

0xf4c5,	// (0x0003c0f9) list_single_large_graphic_pane_ParamLimits

0xf4c5,	// (0x0003c0f9) list_single_large_graphic_pane

0xedcf,	// (0x0003ba03) list_single_number_heading_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_number_heading_pane

0xedcf,	// (0x0003ba03) list_single_number_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_number_pane

0xedcf,	// (0x0003ba03) list_single_pane_ParamLimits

0xedcf,	// (0x0003ba03) list_single_pane

0x33b8,	// (0x0002ffec) list_highlight_pane_cp1

0xf3cc,	// (0x0003c000) list_single_pane_g1_ParamLimits

0xf3cc,	// (0x0003c000) list_single_pane_g1

0xf3d8,	// (0x0003c00c) list_single_pane_g2_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_pane_g2

0x0001,

0xf616,	// (0x0003c24a) list_single_pane_g_ParamLimits

0xf616,	// (0x0003c24a) list_single_pane_g

0xeda5,	// (0x0003b9d9) list_single_pane_t1_ParamLimits

0xeda5,	// (0x0003b9d9) list_single_pane_t1

0xf3cc,	// (0x0003c000) list_single_number_pane_g1_ParamLimits

0xf3cc,	// (0x0003c000) list_single_number_pane_g1

0xf3d8,	// (0x0003c00c) list_single_number_pane_g2_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003c24a) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003c24a) list_single_number_pane_g

0xe601,	// (0x0003b235) list_single_number_pane_t1_ParamLimits

0xe601,	// (0x0003b235) list_single_number_pane_t1

0xed64,	// (0x0003b998) list_single_number_pane_t2_ParamLimits

0xed64,	// (0x0003b998) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0003c5cc) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0003c5cc) list_single_number_pane_t

0xe5f5,	// (0x0003b229) list_single_graphic_pane_g1_ParamLimits

0xe5f5,	// (0x0003b229) list_single_graphic_pane_g1

0xf3cc,	// (0x0003c000) list_single_graphic_pane_g2_ParamLimits

0xf3cc,	// (0x0003c000) list_single_graphic_pane_g2

0xf3d8,	// (0x0003c00c) list_single_graphic_pane_g3_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003c239) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003c239) list_single_graphic_pane_g

0xe601,	// (0x0003b235) list_single_graphic_pane_t1_ParamLimits

0xe601,	// (0x0003b235) list_single_graphic_pane_t1

0xe617,	// (0x0003b24b) list_single_heading_pane_g1_ParamLimits

0xe617,	// (0x0003b24b) list_single_heading_pane_g1

0xf3d8,	// (0x0003c00c) list_single_heading_pane_g2_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003c240) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003c240) list_single_heading_pane_g

0xe62a,	// (0x0003b25e) list_single_heading_pane_t1_ParamLimits

0xe62a,	// (0x0003b25e) list_single_heading_pane_t1

0xe640,	// (0x0003b274) list_single_heading_pane_t2_ParamLimits

0xe640,	// (0x0003b274) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003c245) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003c245) list_single_heading_pane_t

0xf3cc,	// (0x0003c000) list_single_number_heading_pane_g1_ParamLimits

0xf3cc,	// (0x0003c000) list_single_number_heading_pane_g1

0xf3d8,	// (0x0003c00c) list_single_number_heading_pane_g2_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003c24a) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003c24a) list_single_number_heading_pane_g

0xe652,	// (0x0003b286) list_single_number_heading_pane_t1_ParamLimits

0xe652,	// (0x0003b286) list_single_number_heading_pane_t1

0xe668,	// (0x0003b29c) list_single_number_heading_pane_t2_ParamLimits

0xe668,	// (0x0003b29c) list_single_number_heading_pane_t2

0xe67a,	// (0x0003b2ae) list_single_number_heading_pane_t3_ParamLimits

0xe67a,	// (0x0003b2ae) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003c24f) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003c24f) list_single_number_heading_pane_t

0xe68c,	// (0x0003b2c0) list_single_graphic_heading_pane_g1_ParamLimits

0xe68c,	// (0x0003b2c0) list_single_graphic_heading_pane_g1

0xf3e4,	// (0x0003c018) list_single_graphic_heading_pane_g4_ParamLimits

0xf3e4,	// (0x0003c018) list_single_graphic_heading_pane_g4

0xf3d8,	// (0x0003c00c) list_single_graphic_heading_pane_g5_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0003c256) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003c256) list_single_graphic_heading_pane_g

0xe652,	// (0x0003b286) list_single_graphic_heading_pane_t1_ParamLimits

0xe652,	// (0x0003b286) list_single_graphic_heading_pane_t1

0xe6a0,	// (0x0003b2d4) list_single_graphic_heading_pane_t2_ParamLimits

0xe6a0,	// (0x0003b2d4) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003c25d) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003c25d) list_single_graphic_heading_pane_t

0xf3f3,	// (0x0003c027) list_single_large_graphic_pane_g1_ParamLimits

0xf3f3,	// (0x0003c027) list_single_large_graphic_pane_g1

0xf3ff,	// (0x0003c033) list_single_large_graphic_pane_g2_ParamLimits

0xf3ff,	// (0x0003c033) list_single_large_graphic_pane_g2

0xf40b,	// (0x0003c03f) list_single_large_graphic_pane_g3_ParamLimits

0xf40b,	// (0x0003c03f) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0003c262) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0003c262) list_single_large_graphic_pane_g

0x821a,	// (0x00034e4e) wait_border_pane_g2_copy1

0xf417,	// (0x0003c04b) list_single_large_graphic_pane_g4_cp2

0xe6b8,	// (0x0003b2ec) list_single_large_graphic_pane_t1_ParamLimits

0xe6b8,	// (0x0003b2ec) list_single_large_graphic_pane_t1

0xf41f,	// (0x0003c053) list_double_pane_g1_ParamLimits

0xf41f,	// (0x0003c053) list_double_pane_g1

0xf42b,	// (0x0003c05f) list_double_pane_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_double_pane_g2

0x0001,

0xf635,	// (0x0003c269) list_double_pane_g_ParamLimits

0xf635,	// (0x0003c269) list_double_pane_g

0xe6ce,	// (0x0003b302) list_double_pane_t1_ParamLimits

0xe6ce,	// (0x0003b302) list_double_pane_t1

0xe6e4,	// (0x0003b318) list_double_pane_t2_ParamLimits

0xe6e4,	// (0x0003b318) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003c26e) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003c26e) list_double_pane_t

0xe6f6,	// (0x0003b32a) list_double2_pane_g1_ParamLimits

0xe6f6,	// (0x0003b32a) list_double2_pane_g1

0xe705,	// (0x0003b339) list_double2_pane_g2_ParamLimits

0xe705,	// (0x0003b339) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0003c273) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0003c273) list_double2_pane_g

0xe711,	// (0x0003b345) list_double2_pane_t1_ParamLimits

0xe711,	// (0x0003b345) list_double2_pane_t1

0xe727,	// (0x0003b35b) list_double2_pane_t2_ParamLimits

0xe727,	// (0x0003b35b) list_double2_pane_t2

0x0001,

0xf644,	// (0x0003c278) list_double2_pane_t_ParamLimits

0xf644,	// (0x0003c278) list_double2_pane_t

0xf41f,	// (0x0003c053) list_double_number_pane_g1_ParamLimits

0xf41f,	// (0x0003c053) list_double_number_pane_g1

0xf42b,	// (0x0003c05f) list_double_number_pane_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0003c269) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0003c269) list_double_number_pane_g

0xe739,	// (0x0003b36d) list_double_number_pane_t1_ParamLimits

0xe739,	// (0x0003b36d) list_double_number_pane_t1

0xe74b,	// (0x0003b37f) list_double_number_pane_t2_ParamLimits

0xe74b,	// (0x0003b37f) list_double_number_pane_t2

0xe761,	// (0x0003b395) list_double_number_pane_t3_ParamLimits

0xe761,	// (0x0003b395) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003c27d) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003c27d) list_double_number_pane_t

0xe773,	// (0x0003b3a7) list_double_graphic_pane_g1_ParamLimits

0xe773,	// (0x0003b3a7) list_double_graphic_pane_g1

0xf437,	// (0x0003c06b) list_double_graphic_pane_g2_ParamLimits

0xf437,	// (0x0003c06b) list_double_graphic_pane_g2

0xf446,	// (0x0003c07a) list_double_graphic_pane_g3_ParamLimits

0xf446,	// (0x0003c07a) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0003c284) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0003c284) list_double_graphic_pane_g

0xe77f,	// (0x0003b3b3) list_double_graphic_pane_t1_ParamLimits

0xe77f,	// (0x0003b3b3) list_double_graphic_pane_t1

0xe795,	// (0x0003b3c9) list_double_graphic_pane_t2_ParamLimits

0xe795,	// (0x0003b3c9) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003c28d) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003c28d) list_double_graphic_pane_t

0xe7a7,	// (0x0003b3db) list_double2_graphic_pane_g1_ParamLimits

0xe7a7,	// (0x0003b3db) list_double2_graphic_pane_g1

0x3e55,	// (0x00030a89) list_double2_graphic_pane_g2_ParamLimits

0x3e55,	// (0x00030a89) list_double2_graphic_pane_g2

0xf45e,	// (0x0003c092) list_double2_graphic_pane_g3_ParamLimits

0xf45e,	// (0x0003c092) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0003c292) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0003c292) list_double2_graphic_pane_g

0xe7b3,	// (0x0003b3e7) list_double2_graphic_pane_t1_ParamLimits

0xe7b3,	// (0x0003b3e7) list_double2_graphic_pane_t1

0xe7c9,	// (0x0003b3fd) list_double2_graphic_pane_t2_ParamLimits

0xe7c9,	// (0x0003b3fd) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0003c299) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0003c299) list_double2_graphic_pane_t

0xe7db,	// (0x0003b40f) list_double_large_graphic_pane_g1_ParamLimits

0xe7db,	// (0x0003b40f) list_double_large_graphic_pane_g1

0xe7f8,	// (0x0003b42c) list_double_large_graphic_pane_g2_ParamLimits

0xe7f8,	// (0x0003b42c) list_double_large_graphic_pane_g2

0xf42b,	// (0x0003c05f) list_double_large_graphic_pane_g3_ParamLimits

0xf42b,	// (0x0003c05f) list_double_large_graphic_pane_g3

0xe80c,	// (0x0003b440) list_double_large_graphic_pane_g4_ParamLimits

0xe80c,	// (0x0003b440) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003c29e) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003c29e) list_double_large_graphic_pane_g

0xe81d,	// (0x0003b451) list_double_large_graphic_pane_t1_ParamLimits

0xe81d,	// (0x0003b451) list_double_large_graphic_pane_t1

0xe836,	// (0x0003b46a) list_double_large_graphic_pane_t2_ParamLimits

0xe836,	// (0x0003b46a) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0003c2a9) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0003c2a9) list_double_large_graphic_pane_t

0xf47f,	// (0x0003c0b3) list_double2_large_graphic_pane_g1_ParamLimits

0xf47f,	// (0x0003c0b3) list_double2_large_graphic_pane_g1

0xf48b,	// (0x0003c0bf) list_double2_large_graphic_pane_g2_ParamLimits

0xf48b,	// (0x0003c0bf) list_double2_large_graphic_pane_g2

0xf45e,	// (0x0003c092) list_double2_large_graphic_pane_g3_ParamLimits

0xf45e,	// (0x0003c092) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003c2ae) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003c2ae) list_double2_large_graphic_pane_g

0xe848,	// (0x0003b47c) list_double2_large_graphic_pane_t1_ParamLimits

0xe848,	// (0x0003b47c) list_double2_large_graphic_pane_t1

0xe85e,	// (0x0003b492) list_double2_large_graphic_pane_t2_ParamLimits

0xe85e,	// (0x0003b492) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0003c2b5) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0003c2b5) list_double2_large_graphic_pane_t

0xe870,	// (0x0003b4a4) list_double_heading_pane_g1_ParamLimits

0xe870,	// (0x0003b4a4) list_double_heading_pane_g1

0xe87f,	// (0x0003b4b3) list_double_heading_pane_g2_ParamLimits

0xe87f,	// (0x0003b4b3) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003c2ba) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003c2ba) list_double_heading_pane_g

0xe88b,	// (0x0003b4bf) list_double_heading_pane_t1_ParamLimits

0xe88b,	// (0x0003b4bf) list_double_heading_pane_t1

0xe727,	// (0x0003b35b) list_double_heading_pane_t2_ParamLimits

0xe727,	// (0x0003b35b) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003c2bf) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003c2bf) list_double_heading_pane_t

0xe8a1,	// (0x0003b4d5) list_double_graphic_heading_pane_g1_ParamLimits

0xe8a1,	// (0x0003b4d5) list_double_graphic_heading_pane_g1

0xe870,	// (0x0003b4a4) list_double_graphic_heading_pane_g2_ParamLimits

0xe870,	// (0x0003b4a4) list_double_graphic_heading_pane_g2

0xe87f,	// (0x0003b4b3) list_double_graphic_heading_pane_g3_ParamLimits

0xe87f,	// (0x0003b4b3) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0003c2c4) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0003c2c4) list_double_graphic_heading_pane_g

0xe8ad,	// (0x0003b4e1) list_double_graphic_heading_pane_t1_ParamLimits

0xe8ad,	// (0x0003b4e1) list_double_graphic_heading_pane_t1

0xe7c9,	// (0x0003b3fd) list_double_graphic_heading_pane_t2_ParamLimits

0xe7c9,	// (0x0003b3fd) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003c2cb) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003c2cb) list_double_graphic_heading_pane_t

0xe8c3,	// (0x0003b4f7) list_double_time_pane_g1_ParamLimits

0xe8c3,	// (0x0003b4f7) list_double_time_pane_g1

0xe8d2,	// (0x0003b506) list_double_time_pane_g2_ParamLimits

0xe8d2,	// (0x0003b506) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0003c2d0) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0003c2d0) list_double_time_pane_g

0xe8de,	// (0x0003b512) list_double_time_pane_t1_ParamLimits

0xe8de,	// (0x0003b512) list_double_time_pane_t1

0xe8f4,	// (0x0003b528) list_double_time_pane_t2_ParamLimits

0xe8f4,	// (0x0003b528) list_double_time_pane_t2

0xe906,	// (0x0003b53a) list_double_time_pane_t3_ParamLimits

0xe906,	// (0x0003b53a) list_double_time_pane_t3

0xe918,	// (0x0003b54c) list_double_time_pane_t4_ParamLimits

0xe918,	// (0x0003b54c) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0003c2d5) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0003c2d5) list_double_time_pane_t

0xe92a,	// (0x0003b55e) list_setting_pane_g1_ParamLimits

0xe92a,	// (0x0003b55e) list_setting_pane_g1

0xe705,	// (0x0003b339) list_setting_pane_g2_ParamLimits

0xe705,	// (0x0003b339) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003c2de) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003c2de) list_setting_pane_g

0xe936,	// (0x0003b56a) list_setting_pane_t1_ParamLimits

0xe936,	// (0x0003b56a) list_setting_pane_t1

0xe950,	// (0x0003b584) list_setting_pane_t2_ParamLimits

0xe950,	// (0x0003b584) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0003c2e3) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0003c2e3) list_setting_pane_t

0xe98d,	// (0x0003b5c1) set_value_pane_cp_ParamLimits

0xe98d,	// (0x0003b5c1) set_value_pane_cp

0xe999,	// (0x0003b5cd) list_setting_number_pane_g1_ParamLimits

0xe999,	// (0x0003b5cd) list_setting_number_pane_g1

0xe9a5,	// (0x0003b5d9) list_setting_number_pane_g2_ParamLimits

0xe9a5,	// (0x0003b5d9) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0003c2ea) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0003c2ea) list_setting_number_pane_g

0xe9b1,	// (0x0003b5e5) list_setting_number_pane_t1_ParamLimits

0xe9b1,	// (0x0003b5e5) list_setting_number_pane_t1

0xe9c8,	// (0x0003b5fc) list_setting_number_pane_t2_ParamLimits

0xe9c8,	// (0x0003b5fc) list_setting_number_pane_t2

0xe9e2,	// (0x0003b616) list_setting_number_pane_t3_ParamLimits

0xe9e2,	// (0x0003b616) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0003c2ef) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0003c2ef) list_setting_number_pane_t

0xe98d,	// (0x0003b5c1) set_value_pane_ParamLimits

0xe98d,	// (0x0003b5c1) set_value_pane

0x6c99,	// (0x000338cd) bg_set_opt_pane_ParamLimits

0x6c99,	// (0x000338cd) bg_set_opt_pane

0xea23,	// (0x0003b657) set_value_pane_t1

0x6cba,	// (0x000338ee) slider_set_pane_cp3

0x6cc3,	// (0x000338f7) volume_small_pane_cp

0x6ccc,	// (0x00033900) list_form_gen_pane

0x3dd6,	// (0x00030a0a) scroll_pane_cp8

0xea41,	// (0x0003b675) form_field_data_pane_ParamLimits

0xea41,	// (0x0003b675) form_field_data_pane

0xea61,	// (0x0003b695) form_field_data_wide_pane_ParamLimits

0xea61,	// (0x0003b695) form_field_data_wide_pane

0xea80,	// (0x0003b6b4) form_field_popup_pane_ParamLimits

0xea80,	// (0x0003b6b4) form_field_popup_pane

0xea98,	// (0x0003b6cc) form_field_popup_wide_pane_ParamLimits

0xea98,	// (0x0003b6cc) form_field_popup_wide_pane

0xeaaf,	// (0x0003b6e3) form_field_slider_pane_ParamLimits

0xeaaf,	// (0x0003b6e3) form_field_slider_pane

0xeac2,	// (0x0003b6f6) form_field_slider_wide_pane_ParamLimits

0xeac2,	// (0x0003b6f6) form_field_slider_wide_pane

0x6cd5,	// (0x00033909) data_form_pane

0xeadd,	// (0x0003b711) form_field_data_pane_t1

0x6ce1,	// (0x00033915) input_focus_pane

0x6cef,	// (0x00033923) data_form_wide_pane

0xeb01,	// (0x0003b735) form_field_data_wide_pane_t1

0x3c4d,	// (0x00030881) input_focus_pane_cp6

0xeb23,	// (0x0003b757) form_field_popup_pane_t1

0x6ce1,	// (0x00033915) input_focus_pane_cp7

0x6cd5,	// (0x00033909) list_form_pane

0xeb43,	// (0x0003b777) form_field_popup_wide_pane_t1

0x6ce1,	// (0x00033915) input_focus_pane_cp8

0x6d0f,	// (0x00033943) list_form_wide_pane

0xeb60,	// (0x0003b794) form_field_slider_pane_t1_ParamLimits

0xeb60,	// (0x0003b794) form_field_slider_pane_t1

0xeb76,	// (0x0003b7aa) form_field_slider_pane_t2_ParamLimits

0xeb76,	// (0x0003b7aa) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0003c2ff) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0003c2ff) form_field_slider_pane_t

0x357a,	// (0x000301ae) input_focus_pane_cp9_ParamLimits

0x357a,	// (0x000301ae) input_focus_pane_cp9

0xeb8b,	// (0x0003b7bf) slider_cont_pane_ParamLimits

0xeb8b,	// (0x0003b7bf) slider_cont_pane

0x6d1e,	// (0x00033952) form_field_slider_wide_pane_t1_ParamLimits

0x6d1e,	// (0x00033952) form_field_slider_wide_pane_t1

0xeb9f,	// (0x0003b7d3) form_field_slider_wide_pane_t2_ParamLimits

0xeb9f,	// (0x0003b7d3) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0003c304) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0003c304) form_field_slider_wide_pane_t

0x357a,	// (0x000301ae) input_focus_pane_cp10_ParamLimits

0x357a,	// (0x000301ae) input_focus_pane_cp10

0xebb1,	// (0x0003b7e5) slider_cont_pane_cp1_ParamLimits

0xebb1,	// (0x0003b7e5) slider_cont_pane_cp1

0xebc7,	// (0x0003b7fb) slider_form_pane_cp

0x6d30,	// (0x00033964) input_focus_pane_g1

0x6d38,	// (0x0003396c) input_focus_pane_g2

0x6d40,	// (0x00033974) input_focus_pane_g3

0x6d48,	// (0x0003397c) input_focus_pane_g4

0x6d50,	// (0x00033984) input_focus_pane_g5

0x6d58,	// (0x0003398c) input_focus_pane_g6

0x6d60,	// (0x00033994) input_focus_pane_g7

0x6d68,	// (0x0003399c) input_focus_pane_g8

0x6d70,	// (0x000339a4) input_focus_pane_g9

0x326b,	// (0x0002fe9f) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0003c309) input_focus_pane_g

0x8223,	// (0x00034e57) wait_border_pane_g3_copy1

0xebcf,	// (0x0003b803) data_form_pane_t1

0x326b,	// (0x0002fe9f) wait_anim_pane_g1_copy1

0xed76,	// (0x0003b9aa) data_form_wide_pane_t1

0xebe9,	// (0x0003b81d) list_form_graphic_pane_cp_ParamLimits

0xebe9,	// (0x0003b81d) list_form_graphic_pane_cp

0x8de2,	// (0x00035a16) slider_form_pane_g1

0x8deb,	// (0x00035a1f) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0003c5fc) slider_form_pane_g

0xebfd,	// (0x0003b831) list_form_graphic_pane_ParamLimits

0xebfd,	// (0x0003b831) list_form_graphic_pane

0xec13,	// (0x0003b847) list_form_graphic_pane_g1

0xec1b,	// (0x0003b84f) list_form_graphic_pane_t1_ParamLimits

0xec1b,	// (0x0003b84f) list_form_graphic_pane_t1

0x35c4,	// (0x000301f8) list_highlight_pane_cp5_ParamLimits

0x35c4,	// (0x000301f8) list_highlight_pane_cp5

0xec30,	// (0x0003b864) find_pane_g1

0x6d78,	// (0x000339ac) input_find_pane

0xec39,	// (0x0003b86d) input_find_pane_g1_ParamLimits

0xec39,	// (0x0003b86d) input_find_pane_g1

0xec45,	// (0x0003b879) input_find_pane_t1_ParamLimits

0xec45,	// (0x0003b879) input_find_pane_t1

0xec5a,	// (0x0003b88e) input_find_pane_t2_ParamLimits

0xec5a,	// (0x0003b88e) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0003c31e) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0003c31e) input_find_pane_t

0x6d81,	// (0x000339b5) input_focus_pane_cp5_ParamLimits

0x6d81,	// (0x000339b5) input_focus_pane_cp5

0x357a,	// (0x000301ae) bg_popup_window_pane_cp2_ParamLimits

0x357a,	// (0x000301ae) bg_popup_window_pane_cp2

0x6d9b,	// (0x000339cf) listscroll_menu_pane_ParamLimits

0x6d9b,	// (0x000339cf) listscroll_menu_pane

0x6da7,	// (0x000339db) popup_submenu_window_ParamLimits

0x6da7,	// (0x000339db) popup_submenu_window

0x6dcb,	// (0x000339ff) find_popup_pane_g1

0x6dd3,	// (0x00033a07) input_popup_find_pane_cp

0x6d81,	// (0x000339b5) input_focus_pane_cp4_ParamLimits

0x6d81,	// (0x000339b5) input_focus_pane_cp4

0x6ddd,	// (0x00033a11) input_popup_find_pane_t1_ParamLimits

0x6ddd,	// (0x00033a11) input_popup_find_pane_t1

0x33b8,	// (0x0002ffec) bg_popup_sub_pane_cp

0x6e0b,	// (0x00033a3f) listscroll_popup_sub_pane

0x6e13,	// (0x00033a47) list_submenu_pane_ParamLimits

0x6e13,	// (0x00033a47) list_submenu_pane

0x6e24,	// (0x00033a58) scroll_pane_cp4

0x6e2c,	// (0x00033a60) list_single_popup_submenu_pane_ParamLimits

0x6e2c,	// (0x00033a60) list_single_popup_submenu_pane

0x6e40,	// (0x00033a74) list_single_popup_submenu_pane_g1

0x6e48,	// (0x00033a7c) list_single_popup_submenu_pane_t1_ParamLimits

0x6e48,	// (0x00033a7c) list_single_popup_submenu_pane_t1

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp1_ParamLimits

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp1

0xa719,	// (0x0003734d) tabs_2_active_pane_g1

0xa721,	// (0x00037355) tabs_2_active_pane_t1

0x35c4,	// (0x000301f8) bg_passive_tab_pane_cp1_ParamLimits

0x35c4,	// (0x000301f8) bg_passive_tab_pane_cp1

0xa719,	// (0x0003734d) tabs_2_passive_pane_g1

0xa721,	// (0x00037355) tabs_2_passive_pane_t1

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp4

0xa733,	// (0x00037367) tabs_2_long_active_pane_t1

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp4

0xb61c,	// (0x00038250) list_single_midp_graphic_pane_g4_ParamLimits

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp5

0xa752,	// (0x00037386) tabs_3_long_active_pane_t1

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp5

0xb61c,	// (0x00038250) list_single_midp_graphic_pane_g4

0x35c4,	// (0x000301f8) bg_popup_window_pane_cp13_ParamLimits

0x35c4,	// (0x000301f8) bg_popup_window_pane_cp13

0x6e72,	// (0x00033aa6) listscroll_popup_fast_pane_ParamLimits

0x6e72,	// (0x00033aa6) listscroll_popup_fast_pane

0x6e81,	// (0x00033ab5) grid_popup_fast_pane_ParamLimits

0x6e81,	// (0x00033ab5) grid_popup_fast_pane

0x6e93,	// (0x00033ac7) scroll_pane_cp9_ParamLimits

0x6e93,	// (0x00033ac7) scroll_pane_cp9

0xd7ac,	// (0x0003a3e0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xd7ac,	// (0x0003a3e0) list_single_graphic_hl_pane_t1_cp2

0x6eb7,	// (0x00033aeb) input_focus_pane_cp20_ParamLimits

0x6eb7,	// (0x00033aeb) input_focus_pane_cp20

0x6ec5,	// (0x00033af9) query_popup_data_pane_t1_ParamLimits

0x6ec5,	// (0x00033af9) query_popup_data_pane_t1

0x6ed8,	// (0x00033b0c) query_popup_data_pane_t2_ParamLimits

0x6ed8,	// (0x00033b0c) query_popup_data_pane_t2

0x6f1e,	// (0x00033b52) query_popup_data_pane_t3_ParamLimits

0x6f1e,	// (0x00033b52) query_popup_data_pane_t3

0x6f5f,	// (0x00033b93) query_popup_data_pane_t4_ParamLimits

0x6f5f,	// (0x00033b93) query_popup_data_pane_t4

0x6f9b,	// (0x00033bcf) query_popup_data_pane_t5_ParamLimits

0x6f9b,	// (0x00033bcf) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0003c323) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0003c323) query_popup_data_pane_t

0x6d30,	// (0x00033964) bg_set_opt_pane_g1

0x6d38,	// (0x0003396c) bg_set_opt_pane_g2

0x6d40,	// (0x00033974) bg_set_opt_pane_g3

0x6d48,	// (0x0003397c) bg_set_opt_pane_g4

0x6d50,	// (0x00033984) bg_set_opt_pane_g5

0x6d58,	// (0x0003398c) bg_set_opt_pane_g6

0x6d60,	// (0x00033994) bg_set_opt_pane_g7

0x6d68,	// (0x0003399c) bg_set_opt_pane_g8

0x6d70,	// (0x000339a4) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0003c32e) bg_set_opt_pane_g

0xab23,	// (0x00037757) control_top_pane_stacon_ParamLimits

0xab23,	// (0x00037757) control_top_pane_stacon

0xab76,	// (0x000377aa) signal_pane_stacon_ParamLimits

0xab76,	// (0x000377aa) signal_pane_stacon

0x739b,	// (0x00033fcf) stacon_top_pane_g1_ParamLimits

0x739b,	// (0x00033fcf) stacon_top_pane_g1

0xab9b,	// (0x000377cf) title_pane_stacon_ParamLimits

0xab9b,	// (0x000377cf) title_pane_stacon

0xabbd,	// (0x000377f1) uni_indicator_pane_stacon_ParamLimits

0xabbd,	// (0x000377f1) uni_indicator_pane_stacon

0xabd2,	// (0x00037806) battery_pane_stacon_ParamLimits

0xabd2,	// (0x00037806) battery_pane_stacon

0xac12,	// (0x00037846) control_bottom_pane_stacon_ParamLimits

0xac12,	// (0x00037846) control_bottom_pane_stacon

0xac31,	// (0x00037865) navi_pane_stacon_ParamLimits

0xac31,	// (0x00037865) navi_pane_stacon

0x73bd,	// (0x00033ff1) stacon_bottom_pane_g1_ParamLimits

0x73bd,	// (0x00033ff1) stacon_bottom_pane_g1

0x6fd2,	// (0x00033c06) aid_levels_signal_lsc_ParamLimits

0x6fd2,	// (0x00033c06) aid_levels_signal_lsc

0xa764,	// (0x00037398) signal_pane_stacon_g1_ParamLimits

0xa764,	// (0x00037398) signal_pane_stacon_g1

0xa770,	// (0x000373a4) signal_pane_stacon_g2_ParamLimits

0xa770,	// (0x000373a4) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0003c341) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003c341) signal_pane_stacon_g

0xa7a4,	// (0x000373d8) title_pane_stacon_t1_ParamLimits

0xa7a4,	// (0x000373d8) title_pane_stacon_t1

0x7000,	// (0x00033c34) uni_indicator_pane_stacon_g1

0x700a,	// (0x00033c3e) uni_indicator_pane_stacon_g2

0x6fec,	// (0x00033c20) uni_indicator_pane_stacon_g3

0x6ff6,	// (0x00033c2a) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003c34d) uni_indicator_pane_stacon_g

0xa7c9,	// (0x000373fd) control_top_pane_stacon_g1

0xa7d1,	// (0x00037405) control_top_pane_stacon_t1_ParamLimits

0xa7d1,	// (0x00037405) control_top_pane_stacon_t1

0x7014,	// (0x00033c48) aid_levels_battery_lsc_ParamLimits

0x7014,	// (0x00033c48) aid_levels_battery_lsc

0xa802,	// (0x00037436) battery_pane_stacon_g1_ParamLimits

0xa802,	// (0x00037436) battery_pane_stacon_g1

0xa80e,	// (0x00037442) battery_pane_stacon_g2_ParamLimits

0xa80e,	// (0x00037442) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0003c356) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0003c356) battery_pane_stacon_g

0xa83d,	// (0x00037471) navi_icon_pane_stacon

0xa84d,	// (0x00037481) navi_navi_pane_stacon

0xa83d,	// (0x00037471) navi_text_pane_stacon

0xa7c9,	// (0x000373fd) control_bottom_pane_stacon_g1

0xa85d,	// (0x00037491) control_bottom_pane_stacon_t1_ParamLimits

0xa85d,	// (0x00037491) control_bottom_pane_stacon_t1

0xa88e,	// (0x000374c2) grid_app_pane_ParamLimits

0xa88e,	// (0x000374c2) grid_app_pane

0xa8aa,	// (0x000374de) scroll_pane_cp15_ParamLimits

0xa8aa,	// (0x000374de) scroll_pane_cp15

0xa8bd,	// (0x000374f1) cell_app_pane_ParamLimits

0xa8bd,	// (0x000374f1) cell_app_pane

0xa8df,	// (0x00037513) cell_app_pane_g1_ParamLimits

0xa8df,	// (0x00037513) cell_app_pane_g1

0x703c,	// (0x00033c70) cell_app_pane_g2_ParamLimits

0x703c,	// (0x00033c70) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003c35b) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003c35b) cell_app_pane_g

0x7048,	// (0x00033c7c) cell_app_pane_t1_ParamLimits

0x7048,	// (0x00033c7c) cell_app_pane_t1

0x705a,	// (0x00033c8e) grid_highlight_pane_ParamLimits

0x705a,	// (0x00033c8e) grid_highlight_pane

0x6d30,	// (0x00033964) cell_highlight_pane_g1

0x6d38,	// (0x0003396c) cell_highlight_pane_g2

0x6d40,	// (0x00033974) cell_highlight_pane_g3

0x6d48,	// (0x0003397c) cell_highlight_pane_g4

0x6d50,	// (0x00033984) cell_highlight_pane_g5

0x6d58,	// (0x0003398c) cell_highlight_pane_g6

0x6d60,	// (0x00033994) cell_highlight_pane_g7

0x6d68,	// (0x0003399c) cell_highlight_pane_g8

0x6d70,	// (0x000339a4) cell_highlight_pane_g9

0x326b,	// (0x0002fe9f) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0003c309) cell_highlight_pane_g

0x706b,	// (0x00033c9f) bg_scroll_pane

0xa916,	// (0x0003754a) scroll_handle_pane

0x70b2,	// (0x00033ce6) scroll_bg_pane_g1

0x70c7,	// (0x00033cfb) scroll_bg_pane_g2

0x70df,	// (0x00033d13) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0003c360) scroll_bg_pane_g

0x70f4,	// (0x00033d28) scroll_handle_focus_pane_ParamLimits

0x70f4,	// (0x00033d28) scroll_handle_focus_pane

0x70b2,	// (0x00033ce6) scroll_handle_pane_g1

0x7101,	// (0x00033d35) scroll_handle_pane_g2

0x70df,	// (0x00033d13) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0003c367) scroll_handle_pane_g

0x6d81,	// (0x000339b5) bg_popup_sub_pane_cp21_ParamLimits

0x6d81,	// (0x000339b5) bg_popup_sub_pane_cp21

0x7115,	// (0x00033d49) popup_fep_japan_predictive_window_t1_ParamLimits

0x7115,	// (0x00033d49) popup_fep_japan_predictive_window_t1

0x712c,	// (0x00033d60) popup_fep_japan_predictive_window_t2_ParamLimits

0x712c,	// (0x00033d60) popup_fep_japan_predictive_window_t2

0x715f,	// (0x00033d93) popup_fep_japan_predictive_window_t3_ParamLimits

0x715f,	// (0x00033d93) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003c36e) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003c36e) popup_fep_japan_predictive_window_t

0x33b8,	// (0x0002ffec) bg_popup_sub_pane_cp23

0x7196,	// (0x00033dca) listscroll_japin_cand_pane

0x719e,	// (0x00033dd2) popup_fep_japan_candidate_window_t1

0x71ac,	// (0x00033de0) candidate_pane_ParamLimits

0x71ac,	// (0x00033de0) candidate_pane

0x71bf,	// (0x00033df3) scroll_pane_cp30

0x71c7,	// (0x00033dfb) list_single_popup_jap_candidate_pane_ParamLimits

0x71c7,	// (0x00033dfb) list_single_popup_jap_candidate_pane

0x33b8,	// (0x0002ffec) list_highlight_pane_cp30

0x71dc,	// (0x00033e10) list_single_popup_jap_candidate_pane_t1

0xa93f,	// (0x00037573) level_1_signal

0xa94c,	// (0x00037580) level_2_signal

0xa959,	// (0x0003758d) level_3_signal

0xa966,	// (0x0003759a) level_4_signal

0xa973,	// (0x000375a7) level_5_signal

0xa980,	// (0x000375b4) level_6_signal

0xa98d,	// (0x000375c1) level_7_signal

0xa93f,	// (0x00037573) level_1_battery

0xa94c,	// (0x00037580) level_2_battery

0xa959,	// (0x0003758d) level_3_battery

0xa966,	// (0x0003759a) level_4_battery

0xa973,	// (0x000375a7) level_5_battery

0xa980,	// (0x000375b4) level_6_battery

0xa98d,	// (0x000375c1) level_7_battery

0x7203,	// (0x00033e37) list_menu_pane_ParamLimits

0x7203,	// (0x00033e37) list_menu_pane

0x7214,	// (0x00033e48) scroll_pane_cp25_ParamLimits

0x7214,	// (0x00033e48) scroll_pane_cp25

0xa9b9,	// (0x000375ed) list_double2_graphic_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double2_graphic_pane_cp2

0xa9b9,	// (0x000375ed) list_double2_large_graphic_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double2_large_graphic_pane_cp2

0xa9b9,	// (0x000375ed) list_double2_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double2_pane_cp2

0xa9b9,	// (0x000375ed) list_double_graphic_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double_graphic_pane_cp2

0xa9b9,	// (0x000375ed) list_double_large_graphic_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double_large_graphic_pane_cp2

0xa9b9,	// (0x000375ed) list_double_number_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double_number_pane_cp2

0xa9b9,	// (0x000375ed) list_double_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double_pane_cp2

0xa9c9,	// (0x000375fd) list_single_2graphic_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_2graphic_pane_cp2

0xa9c9,	// (0x000375fd) list_single_graphic_heading_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_graphic_heading_pane_cp2

0xa9c9,	// (0x000375fd) list_single_graphic_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_graphic_pane_cp2

0xa9c9,	// (0x000375fd) list_single_heading_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_heading_pane_cp2

0xa9de,	// (0x00037612) list_single_large_graphic_pane_cp2_ParamLimits

0xa9de,	// (0x00037612) list_single_large_graphic_pane_cp2

0xa9c9,	// (0x000375fd) list_single_number_heading_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_number_heading_pane_cp2

0xa9c9,	// (0x000375fd) list_single_number_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_number_pane_cp2

0xa9c9,	// (0x000375fd) list_single_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_pane_cp2

0x7236,	// (0x00033e6a) bg_popup_sub_pane_cp22

0xaa93,	// (0x000376c7) popup_side_volume_key_window_g1

0xaab7,	// (0x000376eb) popup_side_volume_key_window_t1

0xaad3,	// (0x00037707) volume_small_pane_cp1

0x357a,	// (0x000301ae) bg_popup_sub_pane_cp24_ParamLimits

0x357a,	// (0x000301ae) bg_popup_sub_pane_cp24

0x724c,	// (0x00033e80) fep_china_uni_candidate_pane_ParamLimits

0x724c,	// (0x00033e80) fep_china_uni_candidate_pane

0x7260,	// (0x00033e94) fep_china_uni_entry_pane

0x7270,	// (0x00033ea4) popup_fep_china_uni_window_g1

0x728c,	// (0x00033ec0) fep_china_uni_entry_pane_g1

0x7294,	// (0x00033ec8) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003c39b) fep_china_uni_entry_pane_g

0x729c,	// (0x00033ed0) fep_entry_item_pane

0x72a6,	// (0x00033eda) fep_candidate_item_pane

0x72ae,	// (0x00033ee2) fep_china_uni_candidate_pane_g1

0x72b6,	// (0x00033eea) fep_china_uni_candidate_pane_g2

0x72be,	// (0x00033ef2) fep_china_uni_candidate_pane_g3

0x72c6,	// (0x00033efa) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0003c3a0) fep_china_uni_candidate_pane_g

0x326b,	// (0x0002fe9f) fep_entry_item_pane_g1

0x72ce,	// (0x00033f02) fep_entry_item_pane_t1_ParamLimits

0x72ce,	// (0x00033f02) fep_entry_item_pane_t1

0x72e4,	// (0x00033f18) fep_candidate_item_pane_t1_ParamLimits

0x72e4,	// (0x00033f18) fep_candidate_item_pane_t1

0x72f9,	// (0x00033f2d) fep_candidate_item_pane_t2_ParamLimits

0x72f9,	// (0x00033f2d) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0003c3a9) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0003c3a9) fep_candidate_item_pane_t

0x35c4,	// (0x000301f8) list_highlight_pane_cp31_ParamLimits

0x35c4,	// (0x000301f8) list_highlight_pane_cp31

0x730b,	// (0x00033f3f) level_1_signal_lsc

0x7314,	// (0x00033f48) level_2_signal_lsc

0x731d,	// (0x00033f51) level_3_signal_lsc

0x7326,	// (0x00033f5a) level_4_signal_lsc

0x732f,	// (0x00033f63) level_5_signal_lsc

0x7338,	// (0x00033f6c) level_6_signal_lsc

0x7341,	// (0x00033f75) level_7_signal_lsc

0x7341,	// (0x00033f75) level_1_battery_lsc

0x734a,	// (0x00033f7e) level_2_battery_lsc

0x7353,	// (0x00033f87) level_3_battery_lsc

0x735c,	// (0x00033f90) level_4_battery_lsc

0x7365,	// (0x00033f99) level_5_battery_lsc

0x736e,	// (0x00033fa2) level_6_battery_lsc

0x730b,	// (0x00033f3f) level_7_battery_lsc

0x7377,	// (0x00033fab) scroll_handle_focus_pane_g1

0x7380,	// (0x00033fb4) scroll_handle_focus_pane_g2

0x7389,	// (0x00033fbd) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003c3ae) scroll_handle_focus_pane_g

0xec6f,	// (0x0003b8a3) list_single_2graphic_pane_g1_ParamLimits

0xec6f,	// (0x0003b8a3) list_single_2graphic_pane_g1

0xf3e4,	// (0x0003c018) list_single_2graphic_pane_g2_ParamLimits

0xf3e4,	// (0x0003c018) list_single_2graphic_pane_g2

0xf3d8,	// (0x0003c00c) list_single_2graphic_pane_g3_ParamLimits

0xf3d8,	// (0x0003c00c) list_single_2graphic_pane_g3

0xec7b,	// (0x0003b8af) list_single_2graphic_pane_g4_ParamLimits

0xec7b,	// (0x0003b8af) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0003c3b5) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0003c3b5) list_single_2graphic_pane_g

0xec87,	// (0x0003b8bb) list_single_2graphic_pane_t1_ParamLimits

0xec87,	// (0x0003b8bb) list_single_2graphic_pane_t1

0xf49a,	// (0x0003c0ce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf49a,	// (0x0003c0ce) list_double2_graphic_large_graphic_pane_g1

0xf48b,	// (0x0003c0bf) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xf48b,	// (0x0003c0bf) list_double2_graphic_large_graphic_pane_g2

0xf45e,	// (0x0003c092) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xf45e,	// (0x0003c092) list_double2_graphic_large_graphic_pane_g3

0xecb5,	// (0x0003b8e9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xecb5,	// (0x0003b8e9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003c3be) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003c3be) list_double2_graphic_large_graphic_pane_g

0xecc1,	// (0x0003b8f5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xecc1,	// (0x0003b8f5) list_double2_graphic_large_graphic_pane_t1

0xecd7,	// (0x0003b90b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xecd7,	// (0x0003b90b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0003c3c7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0003c3c7) list_double2_graphic_large_graphic_pane_t

0x7464,	// (0x00034098) popup_fast_swap_window_ParamLimits

0x7464,	// (0x00034098) popup_fast_swap_window

0x7480,	// (0x000340b4) popup_side_volume_key_window

0x749a,	// (0x000340ce) stacon_top_pane

0x74a4,	// (0x000340d8) status_pane_ParamLimits

0x74a4,	// (0x000340d8) status_pane

0x749a,	// (0x000340ce) status_small_pane

0x33b8,	// (0x0002ffec) control_pane

0x33b8,	// (0x0002ffec) stacon_bottom_pane

0x3dd6,	// (0x00030a0a) scroll_pane_cp121

0x6ccc,	// (0x00033900) set_content_pane

0xaadb,	// (0x0003770f) bg_active_tab_pane_g1_cp1

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp1

0xaae4,	// (0x00037718) bg_active_tab_pane_g3_cp1

0xaadb,	// (0x0003770f) bg_passive_tab_pane_g1_cp1

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp1

0xaae4,	// (0x00037718) bg_passive_tab_pane_g3_cp1

0xaaed,	// (0x00037721) bg_active_tab_pane_g1_cp2

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp2

0xaaf6,	// (0x0003772a) bg_active_tab_pane_g3_cp2

0xaaed,	// (0x00037721) bg_passive_tab_pane_g1_cp2

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp2

0xaaf6,	// (0x0003772a) bg_passive_tab_pane_g3_cp2

0xaaff,	// (0x00037733) bg_active_tab_pane_g1_cp3

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp3

0xab08,	// (0x0003773c) bg_active_tab_pane_g3_cp3

0xaaff,	// (0x00037733) bg_passive_tab_pane_g1_cp3

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp3

0xab08,	// (0x0003773c) bg_passive_tab_pane_g3_cp3

0xab11,	// (0x00037745) bg_active_tab_pane_g1_cp4

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp4

0xab1a,	// (0x0003774e) bg_active_tab_pane_g3_cp4

0xab11,	// (0x00037745) bg_passive_tab_pane_g1_cp4

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp4

0xab1a,	// (0x0003774e) bg_passive_tab_pane_g3_cp4

0x73e2,	// (0x00034016) bg_active_tab_pane_g1_cp5

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp5

0x73d9,	// (0x0003400d) bg_active_tab_pane_g3_cp5

0x73e2,	// (0x00034016) bg_passive_tab_pane_g1_cp5

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp5

0x73d9,	// (0x0003400d) bg_passive_tab_pane_g3_cp5

0xac50,	// (0x00037884) list_set_graphic_pane_ParamLimits

0xac50,	// (0x00037884) list_set_graphic_pane

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp4

0x73eb,	// (0x0003401f) list_set_graphic_pane_g1_ParamLimits

0x73eb,	// (0x0003401f) list_set_graphic_pane_g1

0x73f7,	// (0x0003402b) list_set_graphic_pane_g2_ParamLimits

0x73f7,	// (0x0003402b) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003c3cc) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003c3cc) list_set_graphic_pane_g

0x0009,

0xfaf2,	// (0x0003c726) volume_small_pane_cp_g

0x7419,	// (0x0003404d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7419,	// (0x0003404d) list_double2_large_graphic_pane_g1_cp2

0x7425,	// (0x00034059) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7425,	// (0x00034059) list_double2_large_graphic_pane_g2_cp2

0x7434,	// (0x00034068) list_double2_large_graphic_pane_g3_cp2

0x743c,	// (0x00034070) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x743c,	// (0x00034070) list_double2_large_graphic_pane_t1_cp2

0x7452,	// (0x00034086) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7452,	// (0x00034086) list_double2_large_graphic_pane_t2_cp2

0x8b92,	// (0x000357c6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x8b92,	// (0x000357c6) list_double_large_graphic_pane_g1_cp2

0x8ba3,	// (0x000357d7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x8ba3,	// (0x000357d7) list_double_large_graphic_pane_g2_cp2

0x757f,	// (0x000341b3) list_double_large_graphic_pane_g3_cp2

0x8bb2,	// (0x000357e6) list_double_large_graphic_pane_g4_cp

0x8bba,	// (0x000357ee) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8bba,	// (0x000357ee) list_double_large_graphic_pane_t1_cp2

0x8bd1,	// (0x00035805) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x8bd1,	// (0x00035805) list_double_large_graphic_pane_t2_cp2

0x74b2,	// (0x000340e6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x74b2,	// (0x000340e6) list_double2_graphic_pane_g1_cp2

0x74be,	// (0x000340f2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x74be,	// (0x000340f2) list_double2_graphic_pane_g2_cp2

0x74cd,	// (0x00034101) list_double2_graphic_pane_g3_cp2

0x74d5,	// (0x00034109) list_double2_graphic_pane_t1_cp2_ParamLimits

0x74d5,	// (0x00034109) list_double2_graphic_pane_t1_cp2

0x74eb,	// (0x0003411f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x74eb,	// (0x0003411f) list_double2_graphic_pane_t2_cp2

0x74fd,	// (0x00034131) list_single_number_heading_pane_g1_cp2_ParamLimits

0x74fd,	// (0x00034131) list_single_number_heading_pane_g1_cp2

0x7509,	// (0x0003413d) list_single_number_heading_pane_g2_cp2

0x7511,	// (0x00034145) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7511,	// (0x00034145) list_single_number_heading_pane_t1_cp2

0x7527,	// (0x0003415b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7527,	// (0x0003415b) list_single_number_heading_pane_t2_cp2

0x7539,	// (0x0003416d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7539,	// (0x0003416d) list_single_number_heading_pane_t3_cp2

0x74fd,	// (0x00034131) list_single_heading_pane_g1_cp2_ParamLimits

0x74fd,	// (0x00034131) list_single_heading_pane_g1_cp2

0x7509,	// (0x0003413d) list_single_heading_pane_g2_cp2

0x7511,	// (0x00034145) list_single_heading_pane_t1_cp2_ParamLimits

0x7511,	// (0x00034145) list_single_heading_pane_t1_cp2

0x899c,	// (0x000355d0) list_single_heading_pane_t2_cp2_ParamLimits

0x899c,	// (0x000355d0) list_single_heading_pane_t2_cp2

0x8921,	// (0x00035555) list_double_graphic_pane_g1_cp2_ParamLimits

0x8921,	// (0x00035555) list_double_graphic_pane_g1_cp2

0x892d,	// (0x00035561) list_double_graphic_pane_g2_cp2_ParamLimits

0x892d,	// (0x00035561) list_double_graphic_pane_g2_cp2

0x893c,	// (0x00035570) list_double_graphic_pane_g3_cp2

0x8944,	// (0x00035578) list_double_graphic_pane_t1_cp2_ParamLimits

0x8944,	// (0x00035578) list_double_graphic_pane_t1_cp2

0x895a,	// (0x0003558e) list_double_graphic_pane_t2_cp2_ParamLimits

0x895a,	// (0x0003558e) list_double_graphic_pane_t2_cp2

0x7573,	// (0x000341a7) list_double_number_pane_g1_cp2_ParamLimits

0x7573,	// (0x000341a7) list_double_number_pane_g1_cp2

0x757f,	// (0x000341b3) list_double_number_pane_g2_cp2

0x88e7,	// (0x0003551b) list_double_number_pane_t1_cp2_ParamLimits

0x88e7,	// (0x0003551b) list_double_number_pane_t1_cp2

0x88f9,	// (0x0003552d) list_double_number_pane_t2_cp2_ParamLimits

0x88f9,	// (0x0003552d) list_double_number_pane_t2_cp2

0x890f,	// (0x00035543) list_double_number_pane_t3_cp2_ParamLimits

0x890f,	// (0x00035543) list_double_number_pane_t3_cp2

0x885f,	// (0x00035493) list_single_graphic_pane_g1_cp2_ParamLimits

0x885f,	// (0x00035493) list_single_graphic_pane_g1_cp2

0x74fd,	// (0x00034131) list_single_graphic_pane_g2_cp2_ParamLimits

0x74fd,	// (0x00034131) list_single_graphic_pane_g2_cp2

0x7509,	// (0x0003413d) list_single_graphic_pane_g3_cp2

0x8837,	// (0x0003546b) list_single_graphic_pane_t1_cp2_ParamLimits

0x8837,	// (0x0003546b) list_single_graphic_pane_t1_cp2

0x74fd,	// (0x00034131) list_single_number_pane_g1_cp2_ParamLimits

0x74fd,	// (0x00034131) list_single_number_pane_g1_cp2

0x7509,	// (0x0003413d) list_single_number_pane_g2_cp2

0x8837,	// (0x0003546b) list_single_number_pane_t1_cp2_ParamLimits

0x8837,	// (0x0003546b) list_single_number_pane_t1_cp2

0x884d,	// (0x00035481) list_single_number_pane_t2_cp2_ParamLimits

0x884d,	// (0x00035481) list_single_number_pane_t2_cp2

0x7425,	// (0x00034059) list_double2_pane_g1_cp2_ParamLimits

0x7425,	// (0x00034059) list_double2_pane_g1_cp2

0x7434,	// (0x00034068) list_double2_pane_g2_cp2

0x754b,	// (0x0003417f) list_double2_pane_t1_cp2_ParamLimits

0x754b,	// (0x0003417f) list_double2_pane_t1_cp2

0x7561,	// (0x00034195) list_double2_pane_t2_cp2_ParamLimits

0x7561,	// (0x00034195) list_double2_pane_t2_cp2

0x7573,	// (0x000341a7) list_double_pane_g1_cp2_ParamLimits

0x7573,	// (0x000341a7) list_double_pane_g1_cp2

0x757f,	// (0x000341b3) list_double_pane_g2_cp2

0x7587,	// (0x000341bb) list_double_pane_t1_cp2_ParamLimits

0x7587,	// (0x000341bb) list_double_pane_t1_cp2

0x759d,	// (0x000341d1) list_double_pane_t2_cp2_ParamLimits

0x759d,	// (0x000341d1) list_double_pane_t2_cp2

0x75c5,	// (0x000341f9) list_single_pane_cp2_g3

0x74fd,	// (0x00034131) list_single_pane_g1_cp2_ParamLimits

0x74fd,	// (0x00034131) list_single_pane_g1_cp2

0x7509,	// (0x0003413d) list_single_pane_g2_cp2

0x75d5,	// (0x00034209) list_single_pane_t1_cp2_ParamLimits

0x75d5,	// (0x00034209) list_single_pane_t1_cp2

0x75ed,	// (0x00034221) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x75ed,	// (0x00034221) list_single_large_graphic_pane_g1_cp2

0x75f9,	// (0x0003422d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x75f9,	// (0x0003422d) list_single_large_graphic_pane_g2_cp2

0x7605,	// (0x00034239) list_single_large_graphic_pane_g3_cp2

0x760d,	// (0x00034241) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x760d,	// (0x00034241) list_single_large_graphic_pane_g4_cp1

0x7627,	// (0x0003425b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7627,	// (0x0003425b) list_single_large_graphic_pane_t1_cp2

0x8819,	// (0x0003544d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x8819,	// (0x0003544d) list_single_graphic_heading_pane_g1_cp2

0x87f4,	// (0x00035428) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x87f4,	// (0x00035428) list_single_graphic_heading_pane_g4_cp2

0x7509,	// (0x0003413d) list_single_graphic_heading_pane_g5_cp2

0x7511,	// (0x00034145) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x7511,	// (0x00034145) list_single_graphic_heading_pane_t1_cp2

0x8825,	// (0x00035459) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x8825,	// (0x00035459) list_single_graphic_heading_pane_t2_cp2

0x87e8,	// (0x0003541c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x87e8,	// (0x0003541c) list_single_2graphic_pane_g1_cp2

0x87f4,	// (0x00035428) list_single_2graphic_pane_g2_cp2_ParamLimits

0x87f4,	// (0x00035428) list_single_2graphic_pane_g2_cp2

0x7509,	// (0x0003413d) list_single_2graphic_pane_g3_cp2

0x7e0b,	// (0x00034a3f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x7e0b,	// (0x00034a3f) list_single_2graphic_pane_g4_cp2

0x8803,	// (0x00035437) list_single_2graphic_pane_t1_cp2_ParamLimits

0x8803,	// (0x00035437) list_single_2graphic_pane_t1_cp2

0x326b,	// (0x0002fe9f) list_highlight_pane_g10_cp1

0x83fa,	// (0x0003502e) list_highlight_pane_g1_cp1

0x8402,	// (0x00035036) list_highlight_pane_g2_cp1

0x840a,	// (0x0003503e) list_highlight_pane_g3_cp1

0x8412,	// (0x00035046) list_highlight_pane_g4_cp1

0x841a,	// (0x0003504e) list_highlight_pane_g5_cp1

0x8422,	// (0x00035056) list_highlight_pane_g6_cp1

0x842a,	// (0x0003505e) list_highlight_pane_g7_cp1

0x8432,	// (0x00035066) list_highlight_pane_g8_cp1

0x843a,	// (0x0003506e) list_highlight_pane_g9_cp1

0xb7c6,	// (0x000383fa) form_field_slider_pane_t3

0xb7d4,	// (0x00038408) form_field_slider_pane_t4

0x8344,	// (0x00034f78) slider_form_pane_ParamLimits

0x8344,	// (0x00034f78) slider_form_pane

0x33b8,	// (0x0002ffec) control_abbreviations

0x33b8,	// (0x0002ffec) control_conventions

0x33b8,	// (0x0002ffec) control_definitions

0x33b8,	// (0x0002ffec) format_table_attribute

0x89e6,	// (0x0003561a) bg_popup_preview_window_pane_g9

0x33b8,	// (0x0002ffec) format_table_data2

0x33b8,	// (0x0002ffec) format_table_data3

0x33b8,	// (0x0002ffec) format_table_data_example

0x0008,

0x33b8,	// (0x0002ffec) intro_purpose

0xf928,	// (0x0003c55c) bg_popup_preview_window_pane_g

0x33b8,	// (0x0002ffec) texts_category

0x33b8,	// (0x0002ffec) texts_graphics

0x763d,	// (0x00034271) text_digital

0x764c,	// (0x00034280) text_primary

0x765b,	// (0x0003428f) text_primary_small

0x766a,	// (0x0003429e) text_secondary

0x7679,	// (0x000342ad) text_title

0x8e7c,	// (0x00035ab0) bg_passive_tab_pane_g1_cp3_srt

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp3_srt

0x8e73,	// (0x00035aa7) bg_passive_tab_pane_g3_cp3_srt

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp3_srt_ParamLimits

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp3_srt

0x7de9,	// (0x00034a1d) tabs_4_active_pane_srt_g1

0xa485,	// (0x000370b9) tabs_4_active_pane_srt_t1_ParamLimits

0xa485,	// (0x000370b9) tabs_4_active_pane_srt_t1

0x8e7c,	// (0x00035ab0) bg_active_tab_pane_g1_cp3_copy1

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp3_copy1

0x8e73,	// (0x00035aa7) bg_active_tab_pane_g3_cp3_copy1

0x35c4,	// (0x000301f8) tabs_2_long_active_pane_srt_ParamLimits

0x35c4,	// (0x000301f8) tabs_2_long_active_pane_srt

0x35c4,	// (0x000301f8) tabs_2_long_passive_pane_srt_ParamLimits

0x35c4,	// (0x000301f8) tabs_2_long_passive_pane_srt

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp4_srt

0x8db2,	// (0x000359e6) bg_passive_tab_pane_g1_cp4_srt

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp4_srt

0x8da9,	// (0x000359dd) bg_passive_tab_pane_g3_cp4_srt

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp4_srt_ParamLimits

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp4_srt

0xa733,	// (0x00037367) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa733,	// (0x00037367) tabs_2_long_active_pane_srt_t1

0x8db2,	// (0x000359e6) bg_active_tab_pane_g1_cp4_srt

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp4_srt

0x8da9,	// (0x000359dd) bg_active_tab_pane_g3_cp4_srt

0x357a,	// (0x000301ae) tabs_3_long_active_pane_srt_ParamLimits

0x357a,	// (0x000301ae) tabs_3_long_active_pane_srt

0x357a,	// (0x000301ae) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x357a,	// (0x000301ae) tabs_3_long_passive_pane_cp_srt

0x357a,	// (0x000301ae) tabs_3_long_passive_pane_srt_ParamLimits

0x357a,	// (0x000301ae) tabs_3_long_passive_pane_srt

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp5_srt

0x73e2,	// (0x00034016) bg_passive_tab_pane_g1_cp5_srt

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp5_srt

0x73d9,	// (0x0003400d) bg_passive_tab_pane_g3_cp5_srt

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp5_srt_ParamLimits

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp5_srt

0xa752,	// (0x00037386) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa752,	// (0x00037386) tabs_3_long_active_pane_srt_t1

0x73e2,	// (0x00034016) bg_active_tab_pane_g1_cp5_srt

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp5_srt

0x73d9,	// (0x0003400d) bg_active_tab_pane_g3_cp5_srt

0x8d9b,	// (0x000359cf) navi_text_pane_srt_t1

0x8d93,	// (0x000359c7) navi_icon_pane_srt_g1

0x7791,	// (0x000343c5) midp_editing_number_pane_srt

0x7688,	// (0x000342bc) midp_ticker_pane_srt

0x7799,	// (0x000343cd) midp_ticker_pane_srt_g1

0x77a1,	// (0x000343d5) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0003c3eb) midp_ticker_pane_srt_g

0x77a9,	// (0x000343dd) midp_ticker_pane_srt_t1

0x8d84,	// (0x000359b8) midp_editing_number_pane_t1_copy1

0xac66,	// (0x0003789a) listscroll_midp_pane

0xac66,	// (0x0003789a) midp_form_pane

0x7690,	// (0x000342c4) midp_info_popup_window_ParamLimits

0x7690,	// (0x000342c4) midp_info_popup_window

0x6d81,	// (0x000339b5) bg_popup_sub_pane_cp50_ParamLimits

0x6d81,	// (0x000339b5) bg_popup_sub_pane_cp50

0x809e,	// (0x00034cd2) listscroll_midp_info_pane_ParamLimits

0x809e,	// (0x00034cd2) listscroll_midp_info_pane

0x8086,	// (0x00034cba) listscroll_form_midp_pane_ParamLimits

0x8086,	// (0x00034cba) listscroll_form_midp_pane

0x8092,	// (0x00034cc6) scroll_bar_cp050

0xb7ae,	// (0x000383e2) list_midp_pane

0x96c3,	// (0x000362f7) signal_pane_g2_cp

0x7fac,	// (0x00034be0) listscroll_midp_info_pane_t1_ParamLimits

0x7fac,	// (0x00034be0) listscroll_midp_info_pane_t1

0x7fc4,	// (0x00034bf8) listscroll_midp_info_pane_t2_ParamLimits

0x7fc4,	// (0x00034bf8) listscroll_midp_info_pane_t2

0x8002,	// (0x00034c36) listscroll_midp_info_pane_t3_ParamLimits

0x8002,	// (0x00034c36) listscroll_midp_info_pane_t3

0x803c,	// (0x00034c70) listscroll_midp_info_pane_t4_ParamLimits

0x803c,	// (0x00034c70) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0003c497) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0003c497) listscroll_midp_info_pane_t

0x6e24,	// (0x00033a58) scroll_pane_cp21

0x7f50,	// (0x00034b84) form_midp_field_choice_group_pane

0x7f59,	// (0x00034b8d) form_midp_field_text_pane

0x7f92,	// (0x00034bc6) form_midp_field_time_pane

0x7f9a,	// (0x00034bce) form_midp_gauge_slider_pane

0x7fa3,	// (0x00034bd7) form_midp_gauge_wait_pane

0x33b8,	// (0x0002ffec) form_midp_image_pane

0xed4d,	// (0x0003b981) list_single_midp_pane_ParamLimits

0xed4d,	// (0x0003b981) list_single_midp_pane

0xb78b,	// (0x000383bf) form_midp_field_text_pane_t1

0x7c84,	// (0x000348b8) input_focus_pane_cp050

0x7f3f,	// (0x00034b73) list_midp_form_text_pane

0x7f0e,	// (0x00034b42) form_midp_field_choice_group_pane_t1

0x7f1c,	// (0x00034b50) input_focus_pane_cp051

0x7f30,	// (0x00034b64) list_midp_choice_pane

0x33b8,	// (0x0002ffec) status_idle_pane

0x7ef2,	// (0x00034b26) form_midp_field_time_pane_t1

0x326b,	// (0x0002fe9f) wait_anim_pane_g2_copy1

0x7f00,	// (0x00034b34) form_midp_field_time_pane_t2

0x0001,

0x76fb,	// (0x0003432f) aid_navinavi_width_2_pane

0xf85e,	// (0x0003c492) form_midp_field_time_pane_t

0x33b8,	// (0x0002ffec) input_focus_pane_cp052

0x33b8,	// (0x0002ffec) bg_input_focus_pane_cp040

0x7ece,	// (0x00034b02) form_midp_gauge_slider_pane_t1

0x7edc,	// (0x00034b10) form_midp_gauge_slider_pane_t2

0xb76f,	// (0x000383a3) form_midp_gauge_slider_pane_t3

0xb77d,	// (0x000383b1) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0003c489) form_midp_gauge_slider_pane_t

0x7eea,	// (0x00034b1e) form_midp_slider_pane

0x35c4,	// (0x000301f8) bg_input_focus_pane_cp041_ParamLimits

0x35c4,	// (0x000301f8) bg_input_focus_pane_cp041

0x7e9e,	// (0x00034ad2) form_midp_gauge_wait_pane_t1_ParamLimits

0x7e9e,	// (0x00034ad2) form_midp_gauge_wait_pane_t1

0x7eb0,	// (0x00034ae4) form_midp_gauge_wait_pane_t2_ParamLimits

0x7eb0,	// (0x00034ae4) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0003c484) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0003c484) form_midp_gauge_wait_pane_t

0x7ec2,	// (0x00034af6) form_midp_wait_pane_ParamLimits

0x7ec2,	// (0x00034af6) form_midp_wait_pane

0x7e68,	// (0x00034a9c) form_midp_image_pane_g1

0x7e71,	// (0x00034aa5) form_midp_image_pane_t1

0x7e80,	// (0x00034ab4) form_midp_image_pane_t2

0x7e8f,	// (0x00034ac3) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0003c47d) form_midp_image_pane_t

0x7e5f,	// (0x00034a93) list_single_midp_pane_g1

0xed3e,	// (0x0003b972) list_single_midp_pane_t1

0xb759,	// (0x0003838d) list_midp_form_item_pane_ParamLimits

0xb759,	// (0x0003838d) list_midp_form_item_pane

0x76a3,	// (0x000342d7) list_midp_form_item_pane_t1

0x76b2,	// (0x000342e6) midp_ticker_pane_g1

0x76be,	// (0x000342f2) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0003c3d1) midp_ticker_pane_g

0x76ca,	// (0x000342fe) midp_ticker_pane_t1

0x8d84,	// (0x000359b8) midp_editing_number_pane_t1

0x8e0c,	// (0x00035a40) midp_editing_number_pane

0x8e18,	// (0x00035a4c) midp_ticker_pane

0x8d74,	// (0x000359a8) ai_message_heading_pane

0x33b8,	// (0x0002ffec) bg_popup_window_pane_cp14

0x8d7c,	// (0x000359b0) listscroll_ai_message_pane

0x8cfe,	// (0x00035932) ai_message_heading_pane_g1_ParamLimits

0x8cfe,	// (0x00035932) ai_message_heading_pane_g1

0x8d0a,	// (0x0003593e) ai_message_heading_pane_g2_ParamLimits

0x8d0a,	// (0x0003593e) ai_message_heading_pane_g2

0x8d16,	// (0x0003594a) ai_message_heading_pane_g3_ParamLimits

0x8d16,	// (0x0003594a) ai_message_heading_pane_g3

0x8d22,	// (0x00035956) ai_message_heading_pane_g4_ParamLimits

0x8d22,	// (0x00035956) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0003c5be) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0003c5be) ai_message_heading_pane_g

0x8d2e,	// (0x00035962) ai_message_heading_pane_t1_ParamLimits

0x8d2e,	// (0x00035962) ai_message_heading_pane_t1

0x8d48,	// (0x0003597c) ai_message_heading_pane_t2_ParamLimits

0x8d48,	// (0x0003597c) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0003c5c7) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0003c5c7) ai_message_heading_pane_t

0x8d5a,	// (0x0003598e) bg_popup_heading_pane_cp1_ParamLimits

0x8d5a,	// (0x0003598e) bg_popup_heading_pane_cp1

0x8cec,	// (0x00035920) list_ai_message_pane_ParamLimits

0x8cec,	// (0x00035920) list_ai_message_pane

0x6e24,	// (0x00033a58) scroll_pane_cp10

0x8c88,	// (0x000358bc) list_ai_message_pane_g1

0x8c90,	// (0x000358c4) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0003c59b) list_ai_message_pane_g

0x8c98,	// (0x000358cc) list_ai_message_pane_t1_ParamLimits

0x8c98,	// (0x000358cc) list_ai_message_pane_t1

0x8cad,	// (0x000358e1) list_ai_message_pane_t2_ParamLimits

0x8cad,	// (0x000358e1) list_ai_message_pane_t2

0x8cc2,	// (0x000358f6) list_ai_message_pane_t3_ParamLimits

0x8cc2,	// (0x000358f6) list_ai_message_pane_t3

0x8cd7,	// (0x0003590b) list_ai_message_pane_t4_ParamLimits

0x8cd7,	// (0x0003590b) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0003c5a0) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0003c5a0) list_ai_message_pane_t

0x8c76,	// (0x000358aa) cell_ai_soft_ind_pane_ParamLimits

0x8c76,	// (0x000358aa) cell_ai_soft_ind_pane

0x76dc,	// (0x00034310) cell_ai_soft_ind_pane_g1_ParamLimits

0x76dc,	// (0x00034310) cell_ai_soft_ind_pane_g1

0x33b8,	// (0x0002ffec) grid_highlight_cp1

0x76e9,	// (0x0003431d) text_secondary_cp56_ParamLimits

0x76e9,	// (0x0003431d) text_secondary_cp56

0x8c4b,	// (0x0003587f) example_general_pane_ParamLimits

0x8c4b,	// (0x0003587f) example_general_pane

0x8c57,	// (0x0003588b) example_parent_pane_g1_ParamLimits

0x8c57,	// (0x0003588b) example_parent_pane_g1

0x8c63,	// (0x00035897) example_parent_pane_t1_ParamLimits

0x8c63,	// (0x00035897) example_parent_pane_t1

0xb15c,	// (0x00037d90) popup_preview_text_window_ParamLimits

0xb15c,	// (0x00037d90) popup_preview_text_window

0x75cd,	// (0x00034201) list_single_pane_cp2_g4

0x39c1,	// (0x000305f5) bg_popup_preview_window_pane_ParamLimits

0x39c1,	// (0x000305f5) bg_popup_preview_window_pane

0x89ee,	// (0x00035622) popup_preview_text_window_t1_ParamLimits

0x89ee,	// (0x00035622) popup_preview_text_window_t1

0x8a0c,	// (0x00035640) popup_preview_text_window_t2_ParamLimits

0x8a0c,	// (0x00035640) popup_preview_text_window_t2

0x8a55,	// (0x00035689) popup_preview_text_window_t3_ParamLimits

0x8a55,	// (0x00035689) popup_preview_text_window_t3

0x8a9a,	// (0x000356ce) popup_preview_text_window_t4_ParamLimits

0x8a9a,	// (0x000356ce) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0003c56f) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0003c56f) popup_preview_text_window_t

0x8b18,	// (0x0003574c) scroll_pane_cp11

0x7b96,	// (0x000347ca) bg_popup_preview_window_pane_g1

0x89ae,	// (0x000355e2) bg_popup_preview_window_pane_g2

0x89b6,	// (0x000355ea) bg_popup_preview_window_pane_g3

0x89be,	// (0x000355f2) bg_popup_preview_window_pane_g4

0x89c6,	// (0x000355fa) bg_popup_preview_window_pane_g5

0x89ce,	// (0x00035602) bg_popup_preview_window_pane_g6

0x89d6,	// (0x0003560a) bg_popup_preview_window_pane_g7

0x89de,	// (0x00035612) bg_popup_preview_window_pane_g8

0xa0ef,	// (0x00036d23) aid_popup_width_pane

0xb13e,	// (0x00037d72) popup_midp_note_alarm_window_ParamLimits

0xb13e,	// (0x00037d72) popup_midp_note_alarm_window

0x6cd5,	// (0x00033909) data_form_pane_ParamLimits

0xead5,	// (0x0003b709) form_field_data_pane_g1

0xeadd,	// (0x0003b711) form_field_data_pane_t1_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_ParamLimits

0x6cef,	// (0x00033923) data_form_wide_pane_ParamLimits

0xeaf5,	// (0x0003b729) form_field_data_wide_pane_g1

0xeb01,	// (0x0003b735) form_field_data_wide_pane_t1_ParamLimits

0x3c4d,	// (0x00030881) input_focus_pane_cp6_ParamLimits

0xa70d,	// (0x00037341) input_popup_find_pane_g1_ParamLimits

0xa70d,	// (0x00037341) input_popup_find_pane_g1

0xa81e,	// (0x00037452) aid_navi_side_left_pane

0xa82e,	// (0x00037462) aid_navi_side_right_pane

0x84cb,	// (0x000350ff) bg_popup_window_pane_cp30_ParamLimits

0x84cb,	// (0x000350ff) bg_popup_window_pane_cp30

0x8545,	// (0x00035179) popup_midp_note_alarm_window_g1_ParamLimits

0x8545,	// (0x00035179) popup_midp_note_alarm_window_g1

0x8575,	// (0x000351a9) popup_midp_note_alarm_window_t1_ParamLimits

0x8575,	// (0x000351a9) popup_midp_note_alarm_window_t1

0x8616,	// (0x0003524a) popup_midp_note_alarm_window_t2_ParamLimits

0x8616,	// (0x0003524a) popup_midp_note_alarm_window_t2

0x86c4,	// (0x000352f8) popup_midp_note_alarm_window_t3_ParamLimits

0x86c4,	// (0x000352f8) popup_midp_note_alarm_window_t3

0x86ec,	// (0x00035320) popup_midp_note_alarm_window_t4_ParamLimits

0x86ec,	// (0x00035320) popup_midp_note_alarm_window_t4

0x870c,	// (0x00035340) popup_midp_note_alarm_window_t5_ParamLimits

0x870c,	// (0x00035340) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0003c50c) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0003c50c) popup_midp_note_alarm_window_t

0x87b8,	// (0x000353ec) wait_bar_pane_cp1_ParamLimits

0x87b8,	// (0x000353ec) wait_bar_pane_cp1

0x33b8,	// (0x0002ffec) wait_anim_pane_copy1

0x33b8,	// (0x0002ffec) wait_border_pane_copy1

0x8211,	// (0x00034e45) wait_border_pane_g1_copy1

0xeb1b,	// (0x0003b74f) form_field_popup_pane_g1

0xeb23,	// (0x0003b757) form_field_popup_pane_t1_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_cp7_ParamLimits

0x6cd5,	// (0x00033909) list_form_pane_ParamLimits

0xeb3b,	// (0x0003b76f) form_field_popup_wide_pane_g1

0xeb43,	// (0x0003b777) form_field_popup_wide_pane_t1_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_cp8_ParamLimits

0x6d0f,	// (0x00033943) list_form_wide_pane_ParamLimits

0x8ea4,	// (0x00035ad8) aid_size_cell_graphic_pane

0xebcf,	// (0x0003b803) data_form_pane_t1_ParamLimits

0xed76,	// (0x0003b9aa) data_form_wide_pane_t1_ParamLimits

0xb362,	// (0x00037f96) bg_status_flat_pane

0xa403,	// (0x00037037) title_pane_t1_ParamLimits

0x3542,	// (0x00030176) title_pane_t2_ParamLimits

0x3568,	// (0x0003019c) title_pane_t3_ParamLimits

0xf59b,	// (0x0003c1cf) title_pane_t_ParamLimits

0xa93f,	// (0x00037573) level_1_signal_ParamLimits

0xa94c,	// (0x00037580) level_2_signal_ParamLimits

0xa959,	// (0x0003758d) level_3_signal_ParamLimits

0xa966,	// (0x0003759a) level_4_signal_ParamLimits

0xa973,	// (0x000375a7) level_5_signal_ParamLimits

0xa980,	// (0x000375b4) level_6_signal_ParamLimits

0xa98d,	// (0x000375c1) level_7_signal_ParamLimits

0xa93f,	// (0x00037573) level_1_battery_ParamLimits

0xa94c,	// (0x00037580) level_2_battery_ParamLimits

0xa959,	// (0x0003758d) level_3_battery_ParamLimits

0xa966,	// (0x0003759a) level_4_battery_ParamLimits

0xa973,	// (0x000375a7) level_5_battery_ParamLimits

0xa980,	// (0x000375b4) level_6_battery_ParamLimits

0xa98d,	// (0x000375c1) level_7_battery_ParamLimits

0x83fa,	// (0x0003502e) bg_status_flat_pane_g1

0x8402,	// (0x00035036) bg_status_flat_pane_g2

0x840a,	// (0x0003503e) bg_status_flat_pane_g3

0x8412,	// (0x00035046) bg_status_flat_pane_g4

0x841a,	// (0x0003504e) bg_status_flat_pane_g5

0x8422,	// (0x00035056) bg_status_flat_pane_g6

0x842a,	// (0x0003505e) bg_status_flat_pane_g7

0xa46b,	// (0x0003709f) tabs_3_active_pane_t1_ParamLimits

0xa46b,	// (0x0003709f) tabs_3_passive_pane_t1_ParamLimits

0xa485,	// (0x000370b9) tabs_4_active_pane_t1_ParamLimits

0xa485,	// (0x000370b9) tabs_4_1_passive_pane_t1_ParamLimits

0xa721,	// (0x00037355) tabs_2_active_pane_t1_ParamLimits

0xa721,	// (0x00037355) tabs_2_passive_pane_t1_ParamLimits

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp4_ParamLimits

0xa733,	// (0x00037367) tabs_2_long_active_pane_t1_ParamLimits

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp4_ParamLimits

0xb64e,	// (0x00038282) list_single_midp_graphic_pane_t1_ParamLimits

0x7cac,	// (0x000348e0) bg_active_tab_pane_cp5_ParamLimits

0xa752,	// (0x00037386) tabs_3_long_active_pane_t1_ParamLimits

0xa746,	// (0x0003737a) bg_passive_tab_pane_cp5_ParamLimits

0xb64e,	// (0x00038282) list_single_midp_graphic_pane_t1

0xb362,	// (0x00037f96) bg_status_flat_pane_ParamLimits

0x7a75,	// (0x000346a9) indicator_pane_cp2_ParamLimits

0x7a75,	// (0x000346a9) indicator_pane_cp2

0xb4a5,	// (0x000380d9) navi_pane_srt_ParamLimits

0xb4a5,	// (0x000380d9) navi_pane_srt

0x7a9d,	// (0x000346d1) popup_clock_digital_analogue_window_cp1

0x374c,	// (0x00030380) indicator_pane_t1

0x7688,	// (0x000342bc) copy_highlight_pane

0x7688,	// (0x000342bc) cursor_graphics_pane

0x7688,	// (0x000342bc) graphic_within_text_pane

0x7688,	// (0x000342bc) link_highlight_pane

0x8adb,	// (0x0003570f) popup_preview_text_window_t5_ParamLimits

0x8adb,	// (0x0003570f) popup_preview_text_window_t5

0x7703,	// (0x00034337) cursor_digital_pane

0x7703,	// (0x00034337) cursor_primary_pane

0x7714,	// (0x00034348) cursor_primary_small_pane

0x771c,	// (0x00034350) cursor_secondary_pane

0x7724,	// (0x00034358) cursor_title_pane

0x7703,	// (0x00034337) link_highlight_digital_pane

0x770b,	// (0x0003433f) link_highlight_primary_pane

0x7714,	// (0x00034348) link_highlight_primary_small_pane

0x771c,	// (0x00034350) link_highlight_secondary_pane

0x7724,	// (0x00034358) link_highlight_title_pane

0x7703,	// (0x00034337) copy_highlight_digital_pane

0x7703,	// (0x00034337) copy_highlight_primary_pane

0x7714,	// (0x00034348) copy_highlight_primary_small_pane

0x771c,	// (0x00034350) copy_highlight_secondary_pane

0x7724,	// (0x00034358) copy_highlight_title_pane

0x771c,	// (0x00034350) graphic_text_digital_pane

0x847a,	// (0x000350ae) graphic_text_primary_pane

0x8483,	// (0x000350b7) graphic_text_primary_small_pane

0x7714,	// (0x00034348) graphic_text_secondary_pane

0x7703,	// (0x00034337) graphic_text_title_pane

0xad0b,	// (0x0003793f) cursor_primary_pane_g1

0x846c,	// (0x000350a0) cursor_text_primary_t1

0xb7f2,	// (0x00038426) cursor_primary_small_pane_g1

0x845e,	// (0x00035092) cursor_text_primary_small_t1

0xb7ea,	// (0x0003841e) cursor_primary_small_pane_g1_copy1

0x8450,	// (0x00035084) cursor_text_primary_small_t1_copy1

0x8442,	// (0x00035076) cursor_text_title_t1

0xb7e2,	// (0x00038416) cursor_title_pane_g1

0xad0b,	// (0x0003793f) cursor_digital_pane_g1

0x772c,	// (0x00034360) cursor_text_digital_t1

0x773a,	// (0x0003436e) link_highlight_primary_pane_g1

0x83eb,	// (0x0003501f) link_highlight_primary_pane_t1

0x773a,	// (0x0003436e) link_highlight_primary_small_pane_g1

0x7742,	// (0x00034376) link_highlight_primary_small_pane_t1

0x7751,	// (0x00034385) link_highlight_secondary_pane_g1

0x7759,	// (0x0003438d) link_highlight_secondary_pane_t1

0x8350,	// (0x00034f84) link_highlight_title_pane_g1

0x8367,	// (0x00034f9b) link_highlight_title_pane_t1

0x8350,	// (0x00034f84) link_highlight_digital_pane_g1

0x8358,	// (0x00034f8c) link_highlight_digital_pane_t1

0x822c,	// (0x00034e60) copy_highlight_primary_pane_g1

0x8252,	// (0x00034e86) copy_highlight_primary_pane_t1

0x822c,	// (0x00034e60) copy_highlight_primary_small_pane_g1

0x8243,	// (0x00034e77) copy_highlight_primary_small_pane_t1

0x7768,	// (0x0003439c) copy_highlight_secondary_pane_g1

0x7770,	// (0x000343a4) copy_highlight_secondary_pane_t1

0x822c,	// (0x00034e60) copy_highlight_title_pane_g1

0x8234,	// (0x00034e68) copy_highlight_title_pane_t1

0x822c,	// (0x00034e60) copy_highlight_digital_pane_g1

0x902a,	// (0x00035c5e) copy_highlight_digital_pane_t1

0x8f28,	// (0x00035b5c) graphic_text_primary_pane_g1

0x900e,	// (0x00035c42) graphic_text_primary_pane_t1

0x901c,	// (0x00035c50) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0003c636) graphic_text_primary_pane_t

0x8fea,	// (0x00035c1e) graphic_text_primary_small_pane_g1

0x8ff2,	// (0x00035c26) graphic_text_primary_small_pane_t1

0x9000,	// (0x00035c34) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0003c631) graphic_text_primary_small_pane_t

0x8fc6,	// (0x00035bfa) graphic_text_secondary_pane_g1

0x8fce,	// (0x00035c02) graphic_text_secondary_pane_t1

0x8fdc,	// (0x00035c10) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0003c62c) graphic_text_secondary_pane_t

0x8fa2,	// (0x00035bd6) graphic_text_title_pane_g1

0x8faa,	// (0x00035bde) graphic_text_title_pane_t1

0x8fb8,	// (0x00035bec) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0003c627) graphic_text_title_pane_t

0x8f28,	// (0x00035b5c) graphic_text_digital_pane_g1

0x8f30,	// (0x00035b64) graphic_text_digital_pane_t1

0x8f94,	// (0x00035bc8) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0003c622) graphic_text_digital_pane_t

0x35c4,	// (0x000301f8) navi_icon_pane_srt_ParamLimits

0x35c4,	// (0x000301f8) navi_icon_pane_srt

0x33b8,	// (0x0002ffec) navi_midp_pane_srt

0x33b8,	// (0x0002ffec) navi_navi_pane_srt

0x35c4,	// (0x000301f8) navi_text_pane_srt_ParamLimits

0x35c4,	// (0x000301f8) navi_text_pane_srt

0x8ef3,	// (0x00035b27) navi_navi_icon_text_pane_srt

0x8f0d,	// (0x00035b41) navi_navi_pane_srt_g1_ParamLimits

0x8f0d,	// (0x00035b41) navi_navi_pane_srt_g1

0x8efb,	// (0x00035b2f) navi_navi_pane_srt_g2_ParamLimits

0x8efb,	// (0x00035b2f) navi_navi_pane_srt_g2

0x0001,

0xf923,	// (0x0003c557) navi_navi_pane_srt_g_ParamLimits

0xf923,	// (0x0003c557) navi_navi_pane_srt_g

0x8f1f,	// (0x00035b53) navi_navi_tabs_pane_srt

0x8ef3,	// (0x00035b27) navi_navi_text_pane_srt

0x8ef3,	// (0x00035b27) navi_navi_volume_pane_srt

0x8ee4,	// (0x00035b18) navi_navi_text_pane_srt_t1

0xbde5,	// (0x00038a19) navi_navi_volume_pane_srt_g1

0xbded,	// (0x00038a21) volume_small_pane_srt_ParamLimits

0xbded,	// (0x00038a21) volume_small_pane_srt

0xad13,	// (0x00037947) volume_small_pane_srt_g1_ParamLimits

0xad13,	// (0x00037947) volume_small_pane_srt_g1

0xad23,	// (0x00037957) volume_small_pane_srt_g2_ParamLimits

0xad23,	// (0x00037957) volume_small_pane_srt_g2

0xad34,	// (0x00037968) volume_small_pane_srt_g3_ParamLimits

0xad34,	// (0x00037968) volume_small_pane_srt_g3

0xad45,	// (0x00037979) volume_small_pane_srt_g4_ParamLimits

0xad45,	// (0x00037979) volume_small_pane_srt_g4

0xad56,	// (0x0003798a) volume_small_pane_srt_g5_ParamLimits

0xad56,	// (0x0003798a) volume_small_pane_srt_g5

0xad67,	// (0x0003799b) volume_small_pane_srt_g6_ParamLimits

0xad67,	// (0x0003799b) volume_small_pane_srt_g6

0xad78,	// (0x000379ac) volume_small_pane_srt_g7_ParamLimits

0xad78,	// (0x000379ac) volume_small_pane_srt_g7

0xad89,	// (0x000379bd) volume_small_pane_srt_g8_ParamLimits

0xad89,	// (0x000379bd) volume_small_pane_srt_g8

0xad9a,	// (0x000379ce) volume_small_pane_srt_g9_ParamLimits

0xad9a,	// (0x000379ce) volume_small_pane_srt_g9

0xadab,	// (0x000379df) volume_small_pane_srt_g10_ParamLimits

0xadab,	// (0x000379df) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0003c3d6) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0003c3d6) volume_small_pane_srt_g

0x3a6a,	// (0x0003069e) query_popup_data_pane_cp2

0x8eca,	// (0x00035afe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8eca,	// (0x00035afe) navi_navi_icon_text_pane_srt_t1

0x847a,	// (0x000350ae) navi_tabs_2_long_pane_srt

0x847a,	// (0x000350ae) navi_tabs_2_pane_srt

0x847a,	// (0x000350ae) navi_tabs_3_long_pane_srt

0x847a,	// (0x000350ae) navi_tabs_3_pane_srt

0x847a,	// (0x000350ae) navi_tabs_4_pane_srt

0xbdc5,	// (0x000389f9) tabs_2_active_pane_srt_ParamLimits

0xbdc5,	// (0x000389f9) tabs_2_active_pane_srt

0xbdd5,	// (0x00038a09) tabs_2_passive_pane_srt_ParamLimits

0xbdd5,	// (0x00038a09) tabs_2_passive_pane_srt

0x6e5d,	// (0x00033a91) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6e5d,	// (0x00033a91) bg_passive_tab_pane_cp1_srt

0x7e02,	// (0x00034a36) bg_passive_tab_pane_g1_cp1_srt

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp1_srt

0x7df9,	// (0x00034a2d) bg_passive_tab_pane_g3_cp1_srt

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp1_srt_ParamLimits

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp1_srt

0x7df1,	// (0x00034a25) tabs_2_active_pane_srt_g1

0xa721,	// (0x00037355) tabs_2_active_pane_srt_t1_ParamLimits

0xa721,	// (0x00037355) tabs_2_active_pane_srt_t1

0x7e02,	// (0x00034a36) bg_active_tab_pane_g1_cp1_srt

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp1_srt

0x7df9,	// (0x00034a2d) bg_active_tab_pane_g3_cp1_srt

0xbd92,	// (0x000389c6) tabs_3_active_pane_srt_ParamLimits

0xbd92,	// (0x000389c6) tabs_3_active_pane_srt

0xbda3,	// (0x000389d7) tabs_3_passive_pane_cp_srt_ParamLimits

0xbda3,	// (0x000389d7) tabs_3_passive_pane_cp_srt

0xbdb4,	// (0x000389e8) tabs_3_passive_pane_srt_ParamLimits

0xbdb4,	// (0x000389e8) tabs_3_passive_pane_srt

0x6e5d,	// (0x00033a91) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6e5d,	// (0x00033a91) bg_passive_tab_pane_cp2_srt

0x7788,	// (0x000343bc) bg_passive_tab_pane_g1_cp2_srt

0x7392,	// (0x00033fc6) bg_passive_tab_pane_g2_cp2_srt

0x777f,	// (0x000343b3) bg_passive_tab_pane_g3_cp2_srt

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp2_srt_ParamLimits

0x35c4,	// (0x000301f8) bg_active_tab_pane_cp2_srt

0x8eba,	// (0x00035aee) tabs_3_active_pane_srt_g1

0xa46b,	// (0x0003709f) tabs_3_active_pane_srt_t1_ParamLimits

0xa46b,	// (0x0003709f) tabs_3_active_pane_srt_t1

0x7788,	// (0x000343bc) bg_active_tab_pane_g1_cp2_srt

0x7392,	// (0x00033fc6) bg_active_tab_pane_g2_cp2_srt

0x777f,	// (0x000343b3) bg_active_tab_pane_g3_cp2_srt

0xbd4a,	// (0x0003897e) tabs_4_active_pane_srt_ParamLimits

0xbd4a,	// (0x0003897e) tabs_4_active_pane_srt

0xbd5c,	// (0x00038990) tabs_4_passive_pane_cp2_srt_ParamLimits

0xbd5c,	// (0x00038990) tabs_4_passive_pane_cp2_srt

0x78a2,	// (0x000344d6) aid_size_cell_toolbar

0xa746,	// (0x0003737a) main_idle_act_pane_ParamLimits

0x795e,	// (0x00034592) popup_large_graphic_colour_window_ParamLimits

0xb290,	// (0x00037ec4) popup_toolbar_window_ParamLimits

0xb290,	// (0x00037ec4) popup_toolbar_window

0xf4b2,	// (0x0003c0e6) list_single_graphic_2heading_pane_ParamLimits

0xf4b2,	// (0x0003c0e6) list_single_graphic_2heading_pane

0x7022,	// (0x00033c56) aid_size_cell_apps_grid_lsc_pane

0x7034,	// (0x00033c68) aid_size_cell_apps_grid_prt_pane

0x6e5d,	// (0x00033a91) bg_wml_button_pane_cp1_ParamLimits

0x6e5d,	// (0x00033a91) bg_wml_button_pane_cp1

0xb78b,	// (0x000383bf) form_midp_field_text_pane_t1_ParamLimits

0x7c84,	// (0x000348b8) input_focus_pane_cp050_ParamLimits

0x7f3f,	// (0x00034b73) list_midp_form_text_pane_ParamLimits

0x7f1c,	// (0x00034b50) input_focus_pane_cp051_ParamLimits

0x7f30,	// (0x00034b64) list_midp_choice_pane_ParamLimits

0xb725,	// (0x00038359) list_single_2graphic_pane_cp3_ParamLimits

0xb725,	// (0x00038359) list_single_2graphic_pane_cp3

0xb739,	// (0x0003836d) list_single_midp_graphic_pane_ParamLimits

0xb739,	// (0x0003836d) list_single_midp_graphic_pane

0xa065,	// (0x00036c99) list_single_graphic_2heading_pane_g1_ParamLimits

0xa065,	// (0x00036c99) list_single_graphic_2heading_pane_g1

0xa071,	// (0x00036ca5) list_single_graphic_2heading_pane_g4_ParamLimits

0xa071,	// (0x00036ca5) list_single_graphic_2heading_pane_g4

0xa07d,	// (0x00036cb1) list_single_graphic_2heading_pane_g5_ParamLimits

0xa07d,	// (0x00036cb1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0003c429) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0003c429) list_single_graphic_2heading_pane_g

0xa089,	// (0x00036cbd) list_single_graphic_2heading_pane_t1_ParamLimits

0xa089,	// (0x00036cbd) list_single_graphic_2heading_pane_t1

0xa09d,	// (0x00036cd1) list_single_graphic_2heading_pane_t2_ParamLimits

0xa09d,	// (0x00036cd1) list_single_graphic_2heading_pane_t2

0xa0b7,	// (0x00036ceb) list_single_graphic_2heading_pane_t3_ParamLimits

0xa0b7,	// (0x00036ceb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0003c430) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0003c430) list_single_graphic_2heading_pane_t

0x7ae0,	// (0x00034714) bg_popup_sub_pane_cp2

0x7b06,	// (0x0003473a) grid_toobar_pane

0xb5ca,	// (0x000381fe) cell_toolbar_pane_ParamLimits

0xb5ca,	// (0x000381fe) cell_toolbar_pane

0x7b3c,	// (0x00034770) cell_toolbar_pane_g1_ParamLimits

0x7b3c,	// (0x00034770) cell_toolbar_pane_g1

0x7b4e,	// (0x00034782) cell_toolbar_pane_g2_ParamLimits

0x7b4e,	// (0x00034782) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0003c43e) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0003c43e) cell_toolbar_pane_g

0x7b70,	// (0x000347a4) grid_highlight_pane_cp2_ParamLimits

0x7b70,	// (0x000347a4) grid_highlight_pane_cp2

0x7b8a,	// (0x000347be) toolbar_button_pane

0x7b96,	// (0x000347ca) toolbar_button_pane_g1

0x7ba6,	// (0x000347da) toolbar_button_pane_g2

0x7b9e,	// (0x000347d2) toolbar_button_pane_g3

0x7bb6,	// (0x000347ea) toolbar_button_pane_g4

0x7bae,	// (0x000347e2) toolbar_button_pane_g5

0x7bbe,	// (0x000347f2) toolbar_button_pane_g6

0x7bc6,	// (0x000347fa) toolbar_button_pane_g7

0x7bd6,	// (0x0003480a) toolbar_button_pane_g8

0x7bce,	// (0x00034802) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0003c443) toolbar_button_pane_g

0xb5f9,	// (0x0003822d) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb5f9,	// (0x0003822d) list_single_2graphic_pane_g1_cp3

0xb605,	// (0x00038239) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb605,	// (0x00038239) list_single_2graphic_pane_g2_cp3

0xb614,	// (0x00038248) list_single_2graphic_pane_g3_cp3

0xb61c,	// (0x00038250) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb61c,	// (0x00038250) list_single_2graphic_pane_g4_cp3

0xb628,	// (0x0003825c) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb628,	// (0x0003825c) list_single_2graphic_pane_t1_cp3

0xb642,	// (0x00038276) list_single_midp_graphic_pane_g2_ParamLimits

0xb642,	// (0x00038276) list_single_midp_graphic_pane_g2

0xece9,	// (0x0003b91d) aid_zoom_text_primary

0xf4aa,	// (0x0003c0de) aid_zoom_text_secondary

0x783a,	// (0x0003446e) status_small_pane_g7_ParamLimits

0x783a,	// (0x0003446e) status_small_pane_g7

0x785d,	// (0x00034491) status_small_pane_t1_ParamLimits

0xa3e6,	// (0x0003701a) title_pane_g2

0x0003,

0xf592,	// (0x0003c1c6) title_pane_g

0xa638,	// (0x0003726c) aid_size_cell_colour_1_pane_ParamLimits

0xa638,	// (0x0003726c) aid_size_cell_colour_1_pane

0xa64c,	// (0x00037280) aid_size_cell_colour_2_pane_ParamLimits

0xa64c,	// (0x00037280) aid_size_cell_colour_2_pane

0xa660,	// (0x00037294) aid_size_cell_colour_3_pane_ParamLimits

0xa660,	// (0x00037294) aid_size_cell_colour_3_pane

0xa674,	// (0x000372a8) aid_size_cell_colour_4_pane_ParamLimits

0xa674,	// (0x000372a8) aid_size_cell_colour_4_pane

0xa780,	// (0x000373b4) title_pane_stacon_g1_ParamLimits

0xa780,	// (0x000373b4) title_pane_stacon_g1

0x82a9,	// (0x00034edd) popup_note_wait_window_g3_ParamLimits

0x82a9,	// (0x00034edd) popup_note_wait_window_g3

0x831f,	// (0x00034f53) popup_note_wait_window_t5_ParamLimits

0x831f,	// (0x00034f53) popup_note_wait_window_t5

0x33b8,	// (0x0002ffec) main_feb_china_hwr_fs_writing_pane

0xaf7f,	// (0x00037bb3) popup_feb_china_hwr_fs_window_ParamLimits

0xaf7f,	// (0x00037bb3) popup_feb_china_hwr_fs_window

0xb664,	// (0x00038298) aid_size_cell_hwr_fs_ParamLimits

0xb664,	// (0x00038298) aid_size_cell_hwr_fs

0x7c84,	// (0x000348b8) bg_popup_sub_pane_cp3_ParamLimits

0x7c84,	// (0x000348b8) bg_popup_sub_pane_cp3

0xb679,	// (0x000382ad) grid_hwr_fs_pane_ParamLimits

0xb679,	// (0x000382ad) grid_hwr_fs_pane

0xb68d,	// (0x000382c1) linegrid_hwr_fs_pane_ParamLimits

0xb68d,	// (0x000382c1) linegrid_hwr_fs_pane

0xb69d,	// (0x000382d1) cell_hwr_fs_pane_ParamLimits

0xb69d,	// (0x000382d1) cell_hwr_fs_pane

0x7c90,	// (0x000348c4) linegrid_hwr_fs_pane_g1_ParamLimits

0x7c90,	// (0x000348c4) linegrid_hwr_fs_pane_g1

0xb6bb,	// (0x000382ef) linegrid_hwr_fs_pane_g2_ParamLimits

0xb6bb,	// (0x000382ef) linegrid_hwr_fs_pane_g2

0x7e17,	// (0x00034a4b) linegrid_hwr_fs_pane_g3_ParamLimits

0x7e17,	// (0x00034a4b) linegrid_hwr_fs_pane_g3

0xb6cd,	// (0x00038301) linegrid_hwr_fs_pane_g4_ParamLimits

0xb6cd,	// (0x00038301) linegrid_hwr_fs_pane_g4

0xb6e7,	// (0x0003831b) linegrid_hwr_fs_pane_g5_ParamLimits

0xb6e7,	// (0x0003831b) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0003c469) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0003c469) linegrid_hwr_fs_pane_g

0x7e23,	// (0x00034a57) cell_hwr_fs_pane_g1_ParamLimits

0x7e23,	// (0x00034a57) cell_hwr_fs_pane_g1

0x7aae,	// (0x000346e2) cell_hwr_fs_pane_g2_ParamLimits

0x7aae,	// (0x000346e2) cell_hwr_fs_pane_g2

0xb6fd,	// (0x00038331) cell_hwr_fs_pane_g3_ParamLimits

0xb6fd,	// (0x00038331) cell_hwr_fs_pane_g3

0xb70a,	// (0x0003833e) cell_hwr_fs_pane_g4_ParamLimits

0xb70a,	// (0x0003833e) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0003c474) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0003c474) cell_hwr_fs_pane_g

0xb717,	// (0x0003834b) cell_hwr_fs_pane_t1

0x33b8,	// (0x0002ffec) grid_highlight_pane_cp6

0x33b8,	// (0x0002ffec) main_idle_act2_pane

0x6e0b,	// (0x00033a3f) aid_inside_area_popup_secondary

0xb955,	// (0x00038589) aid_inside_area_window_primary_ParamLimits

0xb955,	// (0x00038589) aid_inside_area_window_primary

0x9039,	// (0x00035c6d) ai2_news_ticker_pane

0x9041,	// (0x00035c75) aid_size_cell_ai1_link_ParamLimits

0x9041,	// (0x00035c75) aid_size_cell_ai1_link

0xbe02,	// (0x00038a36) popup_ai2_data_window_ParamLimits

0xbe02,	// (0x00038a36) popup_ai2_data_window

0x905b,	// (0x00035c8f) popup_ai2_link_window_ParamLimits

0x905b,	// (0x00035c8f) popup_ai2_link_window

0x7c84,	// (0x000348b8) bg_popup_sub_pane_cp4_ParamLimits

0x7c84,	// (0x000348b8) bg_popup_sub_pane_cp4

0x906f,	// (0x00035ca3) grid_ai2_link_pane_ParamLimits

0x906f,	// (0x00035ca3) grid_ai2_link_pane

0x9086,	// (0x00035cba) popup_ai2_link_window_g1_ParamLimits

0x9086,	// (0x00035cba) popup_ai2_link_window_g1

0x9092,	// (0x00035cc6) popup_ai2_link_window_g2_ParamLimits

0x9092,	// (0x00035cc6) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0003c63b) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0003c63b) popup_ai2_link_window_g

0x90a1,	// (0x00035cd5) ai2_mp_button_pane

0x90a9,	// (0x00035cdd) ai2_mp_volume_pane

0x7f1c,	// (0x00034b50) bg_popup_sub_pane_cp5_ParamLimits

0x7f1c,	// (0x00034b50) bg_popup_sub_pane_cp5

0x90b1,	// (0x00035ce5) heading_ai2_gene_pane_ParamLimits

0x90b1,	// (0x00035ce5) heading_ai2_gene_pane

0x90bd,	// (0x00035cf1) list_ai2_gene_pane_ParamLimits

0x90bd,	// (0x00035cf1) list_ai2_gene_pane

0x9105,	// (0x00035d39) cell_ai2_link_pane_ParamLimits

0x9105,	// (0x00035d39) cell_ai2_link_pane

0x911b,	// (0x00035d4f) cell_ai2_link_pane_g1

0x33b8,	// (0x0002ffec) grid_highlight_pane_cp7

0xbe49,	// (0x00038a7d) ai2_mp_volume_pane_g1

0x91b8,	// (0x00035dec) ai2_mp_volume_pane_g2

0xbe2d,	// (0x00038a61) list_ai2_gene_pane_t1

0x91b0,	// (0x00035de4) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0003c654) ai2_mp_volume_pane_g

0xbe51,	// (0x00038a85) volume_small_pane_cp3

0x91c0,	// (0x00035df4) aid_size_cell_ai2_button

0x91c8,	// (0x00035dfc) grid_ai2_button_pane

0x91d1,	// (0x00035e05) cell_ai2_button_pane_ParamLimits

0x91d1,	// (0x00035e05) cell_ai2_button_pane

0x326b,	// (0x0002fe9f) cell_ai2_button_pane_g1

0x33b8,	// (0x0002ffec) grid_highlight_pane_cp8

0x9170,	// (0x00035da4) ai2_gene_pane_t1_ParamLimits

0x9170,	// (0x00035da4) ai2_gene_pane_t1

0xaf25,	// (0x00037b59) aid_height_parent_landscape

0xbb2c,	// (0x00038760) aid_height_set_list

0x8dd0,	// (0x00035a04) aid_size_parent

0x8ea4,	// (0x00035ad8) aid_size_cell_graphic_pane_ParamLimits

0x90cd,	// (0x00035d01) popup_ai2_data_window_g1_ParamLimits

0x90cd,	// (0x00035d01) popup_ai2_data_window_g1

0x90d9,	// (0x00035d0d) ai2_news_ticker_pane_g1

0x90e1,	// (0x00035d15) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0003c640) ai2_news_ticker_pane_g

0x90e9,	// (0x00035d1d) ai2_news_ticker_pane_t1

0x90f7,	// (0x00035d2b) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0003c645) ai2_news_ticker_pane_t

0x8e85,	// (0x00035ab9) heading_ai2_gene_pane_g1

0x9124,	// (0x00035d58) heading_ai2_gene_pane_t1_ParamLimits

0x9124,	// (0x00035d58) heading_ai2_gene_pane_t1

0x9139,	// (0x00035d6d) list_highlight_pane_cp6

0xbe16,	// (0x00038a4a) ai2_gene_pane_ParamLimits

0xbe16,	// (0x00038a4a) ai2_gene_pane

0xbe3b,	// (0x00038a6f) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x0003c64a) list_ai2_gene_pane_t

0x9141,	// (0x00035d75) list_highlight_pane_cp8_ParamLimits

0x9141,	// (0x00035d75) list_highlight_pane_cp8

0x9152,	// (0x00035d86) ai2_gene_pane_g1_ParamLimits

0x9152,	// (0x00035d86) ai2_gene_pane_g1

0x9164,	// (0x00035d98) ai2_gene_pane_g2_ParamLimits

0x9164,	// (0x00035d98) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x0003c64f) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x0003c64f) ai2_gene_pane_g

0x3dd6,	// (0x00030a0a) scroll_pane_cp12

0xaedc,	// (0x00037b10) control_pane_t3_ParamLimits

0xaedc,	// (0x00037b10) control_pane_t3

0x784e,	// (0x00034482) status_small_pane_g8_ParamLimits

0x784e,	// (0x00034482) status_small_pane_g8

0xafed,	// (0x00037c21) popup_find_window_ParamLimits

0xb150,	// (0x00037d84) popup_note_image_window_ParamLimits

0xe773,	// (0x0003b3a7) list_double2_graphic_pane_vc_g1_ParamLimits

0xe773,	// (0x0003b3a7) list_double2_graphic_pane_vc_g1

0xf41f,	// (0x0003c053) list_double2_graphic_pane_vc_g2_ParamLimits

0xf41f,	// (0x0003c053) list_double2_graphic_pane_vc_g2

0xf42b,	// (0x0003c05f) list_double2_graphic_pane_vc_g3_ParamLimits

0xf42b,	// (0x0003c05f) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0003c437) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0003c437) list_double2_graphic_pane_vc_g

0xe74b,	// (0x0003b37f) list_double2_graphic_pane_vc_t1_ParamLimits

0xe74b,	// (0x0003b37f) list_double2_graphic_pane_vc_t1

0xf41f,	// (0x0003c053) list_single_heading_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c053) list_single_heading_pane_vc_g1

0xf42b,	// (0x0003c05f) list_single_heading_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_single_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0003c269) list_single_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0003c269) list_single_heading_pane_vc_g

0xed16,	// (0x0003b94a) list_single_heading_pane_vc_t1_ParamLimits

0xed16,	// (0x0003b94a) list_single_heading_pane_vc_t1

0xed2c,	// (0x0003b960) list_single_heading_pane_vc_t2_ParamLimits

0xed2c,	// (0x0003b960) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0003c458) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0003c458) list_single_heading_pane_vc_t

0x7bde,	// (0x00034812) list_setting_number_pane_vc_g1_ParamLimits

0x7bde,	// (0x00034812) list_setting_number_pane_vc_g1

0x7bea,	// (0x0003481e) list_setting_number_pane_vc_g2_ParamLimits

0x7bea,	// (0x0003481e) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0003c45d) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0003c45d) list_setting_number_pane_vc_g

0x7bf6,	// (0x0003482a) list_setting_number_pane_vc_t1_ParamLimits

0x7bf6,	// (0x0003482a) list_setting_number_pane_vc_t1

0x7c0a,	// (0x0003483e) list_setting_number_pane_vc_t2_ParamLimits

0x7c0a,	// (0x0003483e) list_setting_number_pane_vc_t2

0x7c26,	// (0x0003485a) list_setting_number_pane_vc_t3_ParamLimits

0x7c26,	// (0x0003485a) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0003c462) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0003c462) list_setting_number_pane_vc_t

0x7c4c,	// (0x00034880) set_value_pane_vc_ParamLimits

0x7c4c,	// (0x00034880) set_value_pane_vc

0xf4b2,	// (0x0003c0e6) list_double2_graphic_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double2_graphic_pane_vc

0x8e2b,	// (0x00035a5f) list_double2_large_graphic_pane_vc_ParamLimits

0x8e2b,	// (0x00035a5f) list_double2_large_graphic_pane_vc

0xf4b2,	// (0x0003c0e6) list_double2_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double2_pane_vc

0xf4b2,	// (0x0003c0e6) list_double_graphic_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double_graphic_heading_pane_vc

0xf4b2,	// (0x0003c0e6) list_double_graphic_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double_graphic_pane_vc

0xf4b2,	// (0x0003c0e6) list_double_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double_heading_pane_vc

0x8e2b,	// (0x00035a5f) list_double_large_graphic_pane_vc_ParamLimits

0x8e2b,	// (0x00035a5f) list_double_large_graphic_pane_vc

0xf4b2,	// (0x0003c0e6) list_double_number_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double_number_pane_vc

0xf4b2,	// (0x0003c0e6) list_double_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double_pane_vc

0xf4b2,	// (0x0003c0e6) list_double_time_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_double_time_pane_vc

0xf4b2,	// (0x0003c0e6) list_setting_number_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_setting_number_pane_vc

0xf4b2,	// (0x0003c0e6) list_setting_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_setting_pane_vc

0xf4b2,	// (0x0003c0e6) list_single_graphic_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_single_graphic_heading_pane_vc

0xf4b2,	// (0x0003c0e6) list_single_heading_pane_vc_ParamLimits

0xf4b2,	// (0x0003c0e6) list_single_heading_pane_vc

0xedbb,	// (0x0003b9ef) list_single_number_heading_pane_vc_ParamLimits

0xedbb,	// (0x0003b9ef) list_single_number_heading_pane_vc

0xe773,	// (0x0003b3a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe773,	// (0x0003b3a7) list_double_graphic_heading_pane_vc_g1

0xf41f,	// (0x0003c053) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf41f,	// (0x0003c053) list_double_graphic_heading_pane_vc_g2

0xf42b,	// (0x0003c05f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf42b,	// (0x0003c05f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0003c437) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c437) list_double_graphic_heading_pane_vc_g

0xee0e,	// (0x0003ba42) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xee0e,	// (0x0003ba42) list_double_graphic_heading_pane_vc_t1

0xed16,	// (0x0003b94a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xed16,	// (0x0003b94a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0003c65b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0003c65b) list_double_graphic_heading_pane_vc_t

0x7bde,	// (0x00034812) list_setting_pane_vc_g1_ParamLimits

0x7bde,	// (0x00034812) list_setting_pane_vc_g1

0x7bea,	// (0x0003481e) list_setting_pane_vc_g2_ParamLimits

0x7bea,	// (0x0003481e) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0003c45d) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0003c45d) list_setting_pane_vc_g

0x93c0,	// (0x00035ff4) list_setting_pane_vc_t1_ParamLimits

0x93c0,	// (0x00035ff4) list_setting_pane_vc_t1

0x93d4,	// (0x00036008) list_setting_pane_vc_t2_ParamLimits

0x93d4,	// (0x00036008) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x0003c69e) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x0003c69e) list_setting_pane_vc_t

0x7c4c,	// (0x00034880) set_value_pane_cp_vc_ParamLimits

0x7c4c,	// (0x00034880) set_value_pane_cp_vc

0xf41f,	// (0x0003c053) list_single_number_heading_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c053) list_single_number_heading_pane_vc_g1

0xf42b,	// (0x0003c05f) list_single_number_heading_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_single_number_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0003c269) list_single_number_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0003c269) list_single_number_heading_pane_vc_g

0xed16,	// (0x0003b94a) list_single_number_heading_pane_vc_t1_ParamLimits

0xed16,	// (0x0003b94a) list_single_number_heading_pane_vc_t1

0xee20,	// (0x0003ba54) list_single_number_heading_pane_vc_t2_ParamLimits

0xee20,	// (0x0003ba54) list_single_number_heading_pane_vc_t2

0xee32,	// (0x0003ba66) list_single_number_heading_pane_vc_t3_ParamLimits

0xee32,	// (0x0003ba66) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x0003c6a3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003c6a3) list_single_number_heading_pane_vc_t

0xe773,	// (0x0003b3a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe773,	// (0x0003b3a7) list_single_graphic_heading_pane_vc_g1

0xf41f,	// (0x0003c053) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf41f,	// (0x0003c053) list_single_graphic_heading_pane_vc_g4

0xf42b,	// (0x0003c05f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xf42b,	// (0x0003c05f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0003c437) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0003c437) list_single_graphic_heading_pane_vc_g

0xed16,	// (0x0003b94a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed16,	// (0x0003b94a) list_single_graphic_heading_pane_vc_t1

0xee44,	// (0x0003ba78) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee44,	// (0x0003ba78) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0003c6aa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0003c6aa) list_single_graphic_heading_pane_vc_t

0xf41f,	// (0x0003c053) list_double2_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c053) list_double2_pane_vc_g1

0xf42b,	// (0x0003c05f) list_double2_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_double2_pane_vc_g2

0x0001,

0xf635,	// (0x0003c269) list_double2_pane_vc_g_ParamLimits

0xf635,	// (0x0003c269) list_double2_pane_vc_g

0xe6ce,	// (0x0003b302) list_double2_pane_vc_t1_ParamLimits

0xe6ce,	// (0x0003b302) list_double2_pane_vc_t1

0xf3f3,	// (0x0003c027) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xf3f3,	// (0x0003c027) list_double2_large_graphic_pane_vc_g1

0xf3ff,	// (0x0003c033) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf3ff,	// (0x0003c033) list_double2_large_graphic_pane_vc_g2

0xf40b,	// (0x0003c03f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf40b,	// (0x0003c03f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0003c262) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0003c262) list_double2_large_graphic_pane_vc_g

0xe6b8,	// (0x0003b2ec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe6b8,	// (0x0003b2ec) list_double2_large_graphic_pane_vc_t1

0xf4db,	// (0x0003c10f) list_double_time_pane_vc_g1_ParamLimits

0xf4db,	// (0x0003c10f) list_double_time_pane_vc_g1

0xf4e7,	// (0x0003c11b) list_double_time_pane_vc_g2_ParamLimits

0xf4e7,	// (0x0003c11b) list_double_time_pane_vc_g2

0x0001,

0xfa7b,	// (0x0003c6af) list_double_time_pane_vc_g_ParamLimits

0xfa7b,	// (0x0003c6af) list_double_time_pane_vc_g

0xee56,	// (0x0003ba8a) list_double_time_pane_vc_t1_ParamLimits

0xee56,	// (0x0003ba8a) list_double_time_pane_vc_t1

0xee6f,	// (0x0003baa3) list_double_time_pane_vc_t2_ParamLimits

0xee6f,	// (0x0003baa3) list_double_time_pane_vc_t2

0xeea8,	// (0x0003badc) list_double_time_pane_vc_t3_ParamLimits

0xeea8,	// (0x0003badc) list_double_time_pane_vc_t3

0xeec0,	// (0x0003baf4) list_double_time_pane_vc_t4_ParamLimits

0xeec0,	// (0x0003baf4) list_double_time_pane_vc_t4

0x0003,

0xfa80,	// (0x0003c6b4) list_double_time_pane_vc_t_ParamLimits

0xfa80,	// (0x0003c6b4) list_double_time_pane_vc_t

0xf41f,	// (0x0003c053) list_double_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c053) list_double_pane_vc_g1

0xf42b,	// (0x0003c05f) list_double_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_double_pane_vc_g2

0x0001,

0xf635,	// (0x0003c269) list_double_pane_vc_g_ParamLimits

0xf635,	// (0x0003c269) list_double_pane_vc_g

0xeed2,	// (0x0003bb06) list_double_pane_vc_t1_ParamLimits

0xeed2,	// (0x0003bb06) list_double_pane_vc_t1

0xeee4,	// (0x0003bb18) list_double_pane_vc_t2_ParamLimits

0xeee4,	// (0x0003bb18) list_double_pane_vc_t2

0x0001,

0xfa89,	// (0x0003c6bd) list_double_pane_vc_t_ParamLimits

0xfa89,	// (0x0003c6bd) list_double_pane_vc_t

0xf41f,	// (0x0003c053) list_double_number_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c053) list_double_number_pane_vc_g1

0xf42b,	// (0x0003c05f) list_double_number_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_double_number_pane_vc_g2

0x0001,

0xf635,	// (0x0003c269) list_double_number_pane_vc_g_ParamLimits

0xf635,	// (0x0003c269) list_double_number_pane_vc_g

0xeefa,	// (0x0003bb2e) list_double_number_pane_vc_t1_ParamLimits

0xeefa,	// (0x0003bb2e) list_double_number_pane_vc_t1

0xef0e,	// (0x0003bb42) list_double_number_pane_vc_t2_ParamLimits

0xef0e,	// (0x0003bb42) list_double_number_pane_vc_t2

0xeee4,	// (0x0003bb18) list_double_number_pane_vc_t3_ParamLimits

0xeee4,	// (0x0003bb18) list_double_number_pane_vc_t3

0x0002,

0xfa8e,	// (0x0003c6c2) list_double_number_pane_vc_t_ParamLimits

0xfa8e,	// (0x0003c6c2) list_double_number_pane_vc_t

0xf4f3,	// (0x0003c127) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf4f3,	// (0x0003c127) list_double_large_graphic_pane_vc_g1

0xf4ff,	// (0x0003c133) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf4ff,	// (0x0003c133) list_double_large_graphic_pane_vc_g2

0xf40b,	// (0x0003c03f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xf40b,	// (0x0003c03f) list_double_large_graphic_pane_vc_g3

0xef20,	// (0x0003bb54) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef20,	// (0x0003bb54) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa95,	// (0x0003c6c9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa95,	// (0x0003c6c9) list_double_large_graphic_pane_vc_g

0xef2c,	// (0x0003bb60) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef2c,	// (0x0003bb60) list_double_large_graphic_pane_vc_t1

0xef3e,	// (0x0003bb72) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef3e,	// (0x0003bb72) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x0003c6d2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x0003c6d2) list_double_large_graphic_pane_vc_t

0xf41f,	// (0x0003c053) list_double_heading_pane_vc_g1_ParamLimits

0xf41f,	// (0x0003c053) list_double_heading_pane_vc_g1

0xf42b,	// (0x0003c05f) list_double_heading_pane_vc_g2_ParamLimits

0xf42b,	// (0x0003c05f) list_double_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0003c269) list_double_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0003c269) list_double_heading_pane_vc_g

0xef55,	// (0x0003bb89) list_double_heading_pane_vc_t1_ParamLimits

0xef55,	// (0x0003bb89) list_double_heading_pane_vc_t1

0xed16,	// (0x0003b94a) list_double_heading_pane_vc_t2_ParamLimits

0xed16,	// (0x0003b94a) list_double_heading_pane_vc_t2

0x0001,

0xfaa3,	// (0x0003c6d7) list_double_heading_pane_vc_t_ParamLimits

0xfaa3,	// (0x0003c6d7) list_double_heading_pane_vc_t

0xe773,	// (0x0003b3a7) list_double_graphic_pane_vc_g1_ParamLimits

0xe773,	// (0x0003b3a7) list_double_graphic_pane_vc_g1

0xf437,	// (0x0003c06b) list_double_graphic_pane_vc_g2_ParamLimits

0xf437,	// (0x0003c06b) list_double_graphic_pane_vc_g2

0xf446,	// (0x0003c07a) list_double_graphic_pane_vc_g3_ParamLimits

0xf446,	// (0x0003c07a) list_double_graphic_pane_vc_g3

0x0002,

0xfaa8,	// (0x0003c6dc) list_double_graphic_pane_vc_g_ParamLimits

0xfaa8,	// (0x0003c6dc) list_double_graphic_pane_vc_g

0xef67,	// (0x0003bb9b) list_double_graphic_pane_vc_t1_ParamLimits

0xef67,	// (0x0003bb9b) list_double_graphic_pane_vc_t1

0xeee4,	// (0x0003bb18) list_double_graphic_pane_vc_t2_ParamLimits

0xeee4,	// (0x0003bb18) list_double_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0003c6e3) list_double_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0003c6e3) list_double_graphic_pane_vc_t

0xa0f7,	// (0x00036d2b) aid_size_cell_fastswap

0xa0ff,	// (0x00036d33) aid_size_cell_touch_ParamLimits

0xa0ff,	// (0x00036d33) aid_size_cell_touch

0xa2b3,	// (0x00036ee7) popup_fast_swap_wide_window_ParamLimits

0xa2b3,	// (0x00036ee7) popup_fast_swap_wide_window

0xa379,	// (0x00036fad) touch_pane_ParamLimits

0xa379,	// (0x00036fad) touch_pane

0xea31,	// (0x0003b665) button_value_adjust_pane_cp2

0xea39,	// (0x0003b66d) button_value_adjust_pane_cp4

0xea59,	// (0x0003b68d) form_field_data_pane_cp2

0xea78,	// (0x0003b6ac) form_field_data_wide_pane_cp2

0x706b,	// (0x00033c9f) bg_scroll_pane_ParamLimits

0xa916,	// (0x0003754a) scroll_handle_pane_ParamLimits

0xa92a,	// (0x0003755e) scroll_sc2_down_pane_ParamLimits

0xa92a,	// (0x0003755e) scroll_sc2_down_pane

0x709c,	// (0x00033cd0) scroll_sc2_up_pane_ParamLimits

0x709c,	// (0x00033cd0) scroll_sc2_up_pane

0xbfce,	// (0x00038c02) grid_wheel_folder_pane_g1_ParamLimits

0xbfce,	// (0x00038c02) grid_wheel_folder_pane_g1

0xabf4,	// (0x00037828) clock_nsta_pane_cp2_ParamLimits

0xabf4,	// (0x00037828) clock_nsta_pane_cp2

0xac66,	// (0x0003789a) listscroll_midp_pane_ParamLimits

0xac72,	// (0x000378a6) midp_canvas_pane

0xaf1d,	// (0x00037b51) nsta_clock_indic_pane

0x78ca,	// (0x000344fe) listscroll_form_pane_vc

0x78d2,	// (0x00034506) listscroll_set_pane_vc_ParamLimits

0x78d2,	// (0x00034506) listscroll_set_pane_vc

0xb37e,	// (0x00037fb2) clock_nsta_pane

0xb38b,	// (0x00037fbf) indicator_nsta_pane

0x7ae0,	// (0x00034714) bg_popup_sub_pane_cp2_ParamLimits

0x7af4,	// (0x00034728) find_pane_cp2_ParamLimits

0x7af4,	// (0x00034728) find_pane_cp2

0x7b06,	// (0x0003473a) grid_toobar_pane_ParamLimits

0x7c58,	// (0x0003488c) list_form_gen_pane_vc_ParamLimits

0x7c58,	// (0x0003488c) list_form_gen_pane_vc

0x7c6e,	// (0x000348a2) scroll_pane_cp8_vc_ParamLimits

0x7c6e,	// (0x000348a2) scroll_pane_cp8_vc

0x7e39,	// (0x00034a6d) data_form_wide_pane_vc_ParamLimits

0x7e39,	// (0x00034a6d) data_form_wide_pane_vc

0x7e45,	// (0x00034a79) form_field_data_wide_pane_vc_g1

0x7e4d,	// (0x00034a81) form_field_data_wide_pane_vc_t1_ParamLimits

0x7e4d,	// (0x00034a81) form_field_data_wide_pane_vc_t1

0x6ce1,	// (0x00033915) input_focus_pane_cp6_vc_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_cp6_vc

0xb7ae,	// (0x000383e2) list_midp_pane_ParamLimits

0xb7ba,	// (0x000383ee) scroll_pane_cp16_ParamLimits

0xb7ba,	// (0x000383ee) scroll_pane_cp16

0x80b2,	// (0x00034ce6) button_value_adjust_pane_ParamLimits

0x80b2,	// (0x00034ce6) button_value_adjust_pane

0xbb38,	// (0x0003876c) button_value_adjust_pane_cp6_ParamLimits

0xbb38,	// (0x0003876c) button_value_adjust_pane_cp6

0xbc40,	// (0x00038874) settings_code_pane_cp_ParamLimits

0xbc40,	// (0x00038874) settings_code_pane_cp

0x326b,	// (0x0002fe9f) cell_touch_pane_g1

0x326b,	// (0x0002fe9f) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0003c380) cell_touch_pane_g

0xbe5a,	// (0x00038a8e) cell_touch_pane_cp_ParamLimits

0xbe5a,	// (0x00038a8e) cell_touch_pane_cp

0xbe6a,	// (0x00038a9e) cell_touch_pane_ParamLimits

0xbe6a,	// (0x00038a9e) cell_touch_pane

0x326b,	// (0x0002fe9f) scroll_sc2_down_pane_g1

0x326b,	// (0x0002fe9f) scroll_sc2_up_pane_g1

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp4_vc

0x91e3,	// (0x00035e17) list_set_graphic_pane_vc_g1_ParamLimits

0x91e3,	// (0x00035e17) list_set_graphic_pane_vc_g1

0x91ef,	// (0x00035e23) list_set_graphic_pane_vc_g2_ParamLimits

0x91ef,	// (0x00035e23) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x0003c660) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x0003c660) list_set_graphic_pane_vc_g

0x91fb,	// (0x00035e2f) text_primary_small_cp13_vc_ParamLimits

0x91fb,	// (0x00035e2f) text_primary_small_cp13_vc

0x9213,	// (0x00035e47) list_set_graphic_pane_vc_ParamLimits

0x9213,	// (0x00035e47) list_set_graphic_pane_vc

0x33b8,	// (0x0002ffec) input_focus_pane_cp2_vc

0x326b,	// (0x0002fe9f) setting_code_pane_vc_g1

0x9226,	// (0x00035e5a) setting_code_pane_vc_t1

0x9234,	// (0x00035e68) set_text_pane_vc_t1_ParamLimits

0x9234,	// (0x00035e68) set_text_pane_vc_t1

0x33b8,	// (0x0002ffec) input_focus_pane_cp1_vc

0x924f,	// (0x00035e83) list_set_text_pane_vc

0x326b,	// (0x0002fe9f) setting_text_pane_vc_g1

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp2_vc

0x9259,	// (0x00035e8d) setting_slider_graphic_pane_vc_g1

0x9261,	// (0x00035e95) setting_slider_graphic_pane_vc_t1

0x926f,	// (0x00035ea3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0003c665) setting_slider_graphic_pane_vc_t

0x927d,	// (0x00035eb1) slider_set_pane_cp_vc

0x9285,	// (0x00035eb9) slider_set_pane_vc_g1

0x928e,	// (0x00035ec2) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x0003c66a) slider_set_pane_vc_g

0x6d30,	// (0x00033964) set_opt_bg_pane_g1_copy1

0x6d38,	// (0x0003396c) set_opt_bg_pane_g2_copy1

0x92ba,	// (0x00035eee) set_opt_bg_pane_g3_copy1

0x6d48,	// (0x0003397c) set_opt_bg_pane_g4_copy1

0x6d50,	// (0x00033984) set_opt_bg_pane_g5_copy1

0x6d58,	// (0x0003398c) set_opt_bg_pane_g6_copy1

0x92c2,	// (0x00035ef6) set_opt_bg_pane_g7_copy1

0x92ca,	// (0x00035efe) set_opt_bg_pane_g8_copy1

0x92d2,	// (0x00035f06) set_opt_bg_pane_g9_copy1

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp_vc

0x92da,	// (0x00035f0e) setting_slider_pane_vc_t1

0x9261,	// (0x00035e95) setting_slider_pane_vc_t2

0x926f,	// (0x00035ea3) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x0003c679) setting_slider_pane_vc_t

0x927d,	// (0x00035eb1) slider_set_pane_vc

0xb7fa,	// (0x0003842e) volume_set_pane_vc_g1

0xbe7c,	// (0x00038ab0) volume_set_pane_vc_g2

0xbe85,	// (0x00038ab9) volume_set_pane_vc_g3

0xbe8e,	// (0x00038ac2) volume_set_pane_vc_g4

0xbe97,	// (0x00038acb) volume_set_pane_vc_g5

0xbea0,	// (0x00038ad4) volume_set_pane_vc_g6

0xbea9,	// (0x00038add) volume_set_pane_vc_g7

0xbeb2,	// (0x00038ae6) volume_set_pane_vc_g8

0xbebb,	// (0x00038aef) volume_set_pane_vc_g9

0xbec4,	// (0x00038af8) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x0003c680) volume_set_pane_vc_g

0x92e9,	// (0x00035f1d) volume_set_pane_vc

0x92f1,	// (0x00035f25) button_value_adjust_pane_cp1_vc

0x92fb,	// (0x00035f2f) list_highlight_pane_cp2_vc

0x9304,	// (0x00035f38) list_set_pane_vc_ParamLimits

0x9304,	// (0x00035f38) list_set_pane_vc

0x9356,	// (0x00035f8a) main_pane_set_vc_t1_ParamLimits

0x9356,	// (0x00035f8a) main_pane_set_vc_t1

0x936b,	// (0x00035f9f) main_pane_set_vc_t2_ParamLimits

0x936b,	// (0x00035f9f) main_pane_set_vc_t2

0x937d,	// (0x00035fb1) main_pane_set_vc_t3_ParamLimits

0x937d,	// (0x00035fb1) main_pane_set_vc_t3

0x938f,	// (0x00035fc3) main_pane_set_vc_t4_ParamLimits

0x938f,	// (0x00035fc3) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x0003c695) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x0003c695) main_pane_set_vc_t

0x93a1,	// (0x00035fd5) setting_code_pane_vc_ParamLimits

0x93a1,	// (0x00035fd5) setting_code_pane_vc

0x93b0,	// (0x00035fe4) setting_slider_graphic_pane_vc

0x93b0,	// (0x00035fe4) setting_slider_pane_vc

0x93b0,	// (0x00035fe4) setting_text_pane_vc

0x93b0,	// (0x00035fe4) setting_volume_pane_vc

0x93b8,	// (0x00035fec) scroll_pane_cp121_vc

0x6ccc,	// (0x00033900) set_content_pane_vc

0x93f6,	// (0x0003602a) button_value_adjust_pane_g1

0x93ff,	// (0x00036033) button_value_adjust_pane_g2

0x0001,

0xfab4,	// (0x0003c6e8) button_value_adjust_pane_g

0x9408,	// (0x0003603c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x9408,	// (0x0003603c) form_field_slider_wide_pane_vc_t1

0x941e,	// (0x00036052) form_field_slider_wide_pane_vc_t2_ParamLimits

0x941e,	// (0x00036052) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab9,	// (0x0003c6ed) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab9,	// (0x0003c6ed) form_field_slider_wide_pane_vc_t

0x357a,	// (0x000301ae) input_focus_pane_cp10_vc_ParamLimits

0x357a,	// (0x000301ae) input_focus_pane_cp10_vc

0x9433,	// (0x00036067) slider_cont_pane_cp1_vc_ParamLimits

0x9433,	// (0x00036067) slider_cont_pane_cp1_vc

0x9285,	// (0x00035eb9) slider_form_pane_g1_cp2

0x928e,	// (0x00035ec2) slider_form_pane_g2_cp2

0x944e,	// (0x00036082) form_field_slider_pane_vc_t3

0x945c,	// (0x00036090) form_field_slider_pane_vc_t4

0x946a,	// (0x0003609e) slider_form_pane_vc_ParamLimits

0x946a,	// (0x0003609e) slider_form_pane_vc

0x9477,	// (0x000360ab) form_field_slider_pane_vc_t1_ParamLimits

0x9477,	// (0x000360ab) form_field_slider_pane_vc_t1

0x948d,	// (0x000360c1) form_field_slider_pane_vc_t2_ParamLimits

0x948d,	// (0x000360c1) form_field_slider_pane_vc_t2

0x0001,

0xfac9,	// (0x0003c6fd) form_field_slider_pane_vc_t_ParamLimits

0xfac9,	// (0x0003c6fd) form_field_slider_pane_vc_t

0x357a,	// (0x000301ae) input_focus_pane_cp9_vc_ParamLimits

0x357a,	// (0x000301ae) input_focus_pane_cp9_vc

0x949f,	// (0x000360d3) slider_cont_pane_vc_ParamLimits

0x949f,	// (0x000360d3) slider_cont_pane_vc

0x94b1,	// (0x000360e5) list_form_graphic_pane_cp_vc_ParamLimits

0x94b1,	// (0x000360e5) list_form_graphic_pane_cp_vc

0x7e45,	// (0x00034a79) form_field_popup_wide_pane_vc_g1

0x94c6,	// (0x000360fa) form_field_popup_wide_pane_vc_t1_ParamLimits

0x94c6,	// (0x000360fa) form_field_popup_wide_pane_vc_t1

0x6ce1,	// (0x00033915) input_focus_pane_cp8_vc_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_cp8_vc

0x94db,	// (0x0003610f) list_form_wide_pane_vc_ParamLimits

0x94db,	// (0x0003610f) list_form_wide_pane_vc

0x94e7,	// (0x0003611b) list_form_graphic_pane_vc_g1

0x94ef,	// (0x00036123) list_form_graphic_pane_vc_t1_ParamLimits

0x94ef,	// (0x00036123) list_form_graphic_pane_vc_t1

0x35c4,	// (0x000301f8) list_highlight_pane_cp5_vc_ParamLimits

0x35c4,	// (0x000301f8) list_highlight_pane_cp5_vc

0x950b,	// (0x0003613f) list_form_graphic_pane_vc_ParamLimits

0x950b,	// (0x0003613f) list_form_graphic_pane_vc

0x7e45,	// (0x00034a79) form_field_popup_pane_vc_g1

0x9521,	// (0x00036155) form_field_popup_pane_vc_t1_ParamLimits

0x9521,	// (0x00036155) form_field_popup_pane_vc_t1

0x6ce1,	// (0x00033915) input_focus_pane_cp7_vc_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_cp7_vc

0x9536,	// (0x0003616a) list_form_pane_vc_ParamLimits

0x9536,	// (0x0003616a) list_form_pane_vc

0x9542,	// (0x00036176) data_form_pane_vc_t1_ParamLimits

0x9542,	// (0x00036176) data_form_pane_vc_t1

0x6d30,	// (0x00033964) input_focus_pane_vc_g1

0x6d38,	// (0x0003396c) input_focus_pane_vc_g2

0x6d40,	// (0x00033974) input_focus_pane_vc_g3

0x6d48,	// (0x0003397c) input_focus_pane_vc_g4

0x6d50,	// (0x00033984) input_focus_pane_vc_g5

0x6d58,	// (0x0003398c) input_focus_pane_vc_g6

0x6d60,	// (0x00033994) input_focus_pane_vc_g7

0x6d68,	// (0x0003399c) input_focus_pane_vc_g8

0x6d70,	// (0x000339a4) input_focus_pane_vc_g9

0x326b,	// (0x0002fe9f) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0003c309) input_focus_pane_vc_g

0x7e39,	// (0x00034a6d) data_form_pane_vc_ParamLimits

0x7e39,	// (0x00034a6d) data_form_pane_vc

0x7e45,	// (0x00034a79) form_field_data_pane_vc_g1

0x955d,	// (0x00036191) form_field_data_pane_vc_t1_ParamLimits

0x955d,	// (0x00036191) form_field_data_pane_vc_t1

0x6ce1,	// (0x00033915) input_focus_pane_vc_ParamLimits

0x6ce1,	// (0x00033915) input_focus_pane_vc

0x7c9c,	// (0x000348d0) button_value_adjust_pane_cp3_vc

0x9573,	// (0x000361a7) button_value_adjust_pane_cp5_vc

0x957b,	// (0x000361af) form_field_data_pane_vc_ParamLimits

0x957b,	// (0x000361af) form_field_data_pane_vc

0x7ca4,	// (0x000348d8) form_field_data_pane_vc_cp2

0x9592,	// (0x000361c6) form_field_data_wide_pane_vc_ParamLimits

0x9592,	// (0x000361c6) form_field_data_wide_pane_vc

0x95a8,	// (0x000361dc) form_field_data_wide_pane_vc_cp2

0x95b0,	// (0x000361e4) form_field_popup_pane_vc_ParamLimits

0x95b0,	// (0x000361e4) form_field_popup_pane_vc

0x95c7,	// (0x000361fb) form_field_popup_wide_pane_vc_ParamLimits

0x95c7,	// (0x000361fb) form_field_popup_wide_pane_vc

0x95f3,	// (0x00036227) form_field_slider_pane_vc_ParamLimits

0x95f3,	// (0x00036227) form_field_slider_pane_vc

0x9606,	// (0x0003623a) form_field_slider_wide_pane_vc_ParamLimits

0x9606,	// (0x0003623a) form_field_slider_wide_pane_vc

0xbecd,	// (0x00038b01) grid_touch_1_pane_ParamLimits

0xbecd,	// (0x00038b01) grid_touch_1_pane

0xbed9,	// (0x00038b0d) grid_touch_2_pane_ParamLimits

0xbed9,	// (0x00038b0d) grid_touch_2_pane

0x7894,	// (0x000344c8) touch_pane_g1_ParamLimits

0x7894,	// (0x000344c8) touch_pane_g1

0x9627,	// (0x0003625b) cell_app_pane_cp_wide_ParamLimits

0x9627,	// (0x0003625b) cell_app_pane_cp_wide

0x9637,	// (0x0003626b) grid_popup_fast_wide_pane_ParamLimits

0x9637,	// (0x0003626b) grid_popup_fast_wide_pane

0x964b,	// (0x0003627f) scroll_pane_cp19_ParamLimits

0x964b,	// (0x0003627f) scroll_pane_cp19

0x33b8,	// (0x0002ffec) bg_popup_window_pane_cp20

0x965f,	// (0x00036293) listscroll_popup_fast_wide_pane

0x35c4,	// (0x000301f8) grid_indicator_nsta_pane

0x9667,	// (0x0003629b) clock_nsta_pane_g1

0x9670,	// (0x000362a4) clock_nsta_pane_t1

0xbef1,	// (0x00038b25) cell_indicator_nsta_pane_ParamLimits

0xbef1,	// (0x00038b25) cell_indicator_nsta_pane

0x9619,	// (0x0003624d) cell_indicator_nsta_pane_g1

0xbf29,	// (0x00038b5d) cell_indicator_nsta_pane_g2

0x0001,

0xfad3,	// (0x0003c707) cell_indicator_nsta_pane_g

0x968c,	// (0x000362c0) clock_nsta_pane_cp

0x9694,	// (0x000362c8) indicator_nsta_pane_cp

0x969d,	// (0x000362d1) nsta_clock_indic_pane_g1

0x372b,	// (0x0003035f) grid_indicator_pane

0x718e,	// (0x00033dc2) scroll_pane_cp29

0xab4b,	// (0x0003777f) indicator_nsta_pane_cp2_ParamLimits

0xab4b,	// (0x0003777f) indicator_nsta_pane_cp2

0x35c4,	// (0x000301f8) main_apps_wheel_pane

0x7f59,	// (0x00034b8d) form_midp_field_text_pane_ParamLimits

0x8092,	// (0x00034cc6) scroll_bar_cp050_ParamLimits

0x96d5,	// (0x00036309) cell_indicator_pane_ParamLimits

0x96d5,	// (0x00036309) cell_indicator_pane

0x96eb,	// (0x0003631f) cell_indicator_pane_g1

0xbf3e,	// (0x00038b72) grid_wheel_folder_pane_ParamLimits

0xbf3e,	// (0x00038b72) grid_wheel_folder_pane

0xbf50,	// (0x00038b84) list_wheel_apps_pane_ParamLimits

0xbf50,	// (0x00038b84) list_wheel_apps_pane

0xbf5f,	// (0x00038b93) main_apps_wheel_pane_g1_ParamLimits

0xbf5f,	// (0x00038b93) main_apps_wheel_pane_g1

0xbf73,	// (0x00038ba7) main_apps_wheel_pane_g2_ParamLimits

0xbf73,	// (0x00038ba7) main_apps_wheel_pane_g2

0x0001,

0xfae2,	// (0x0003c716) main_apps_wheel_pane_g_ParamLimits

0xfae2,	// (0x0003c716) main_apps_wheel_pane_g

0xbf87,	// (0x00038bbb) main_apps_wheel_pane_t1_ParamLimits

0xbf87,	// (0x00038bbb) main_apps_wheel_pane_t1

0xbfa6,	// (0x00038bda) list_wheel_apps_pane_g1

0xbfae,	// (0x00038be2) list_wheel_apps_pane_g2

0xbfb6,	// (0x00038bea) list_wheel_apps_pane_g3

0xbfbe,	// (0x00038bf2) list_wheel_apps_pane_g4

0xbfc6,	// (0x00038bfa) list_wheel_apps_pane_g5

0x0004,

0xfae7,	// (0x0003c71b) list_wheel_apps_pane_g

0x35c4,	// (0x000301f8) navi_icon_text_pane

0xb2d2,	// (0x00037f06) aid_fill_nsta

0xbfe5,	// (0x00038c19) navi_icon_text_pane_g1

0xbff1,	// (0x00038c25) navi_icon_text_pane_t1

0x7403,	// (0x00034037) list_set_graphic_pane_t1_ParamLimits

0x7403,	// (0x00034037) list_set_graphic_pane_t1

0x873b,	// (0x0003536f) popup_midp_note_alarm_window_t6_ParamLimits

0x873b,	// (0x0003536f) popup_midp_note_alarm_window_t6

0x874d,	// (0x00035381) popup_midp_note_alarm_window_t7_ParamLimits

0x874d,	// (0x00035381) popup_midp_note_alarm_window_t7

0x875f,	// (0x00035393) popup_midp_note_alarm_window_t8_ParamLimits

0x875f,	// (0x00035393) popup_midp_note_alarm_window_t8

0x8771,	// (0x000353a5) popup_midp_note_alarm_window_t9_ParamLimits

0x8771,	// (0x000353a5) popup_midp_note_alarm_window_t9

0x8783,	// (0x000353b7) popup_midp_note_alarm_window_t10_ParamLimits

0x8783,	// (0x000353b7) popup_midp_note_alarm_window_t10

0x8795,	// (0x000353c9) popup_midp_note_alarm_window_t11_ParamLimits

0x8795,	// (0x000353c9) popup_midp_note_alarm_window_t11

0x87a7,	// (0x000353db) scroll_pane_cp17_ParamLimits

0x87a7,	// (0x000353db) scroll_pane_cp17

0xb7fa,	// (0x0003842e) volume_small_pane_cp_g1

0xc003,	// (0x00038c37) volume_small_pane_cp_g2

0xc00c,	// (0x00038c40) volume_small_pane_cp_g3

0xc015,	// (0x00038c49) volume_small_pane_cp_g4

0xb827,	// (0x0003845b) volume_small_pane_cp_g5

0xc01e,	// (0x00038c52) volume_small_pane_cp_g6

0xc027,	// (0x00038c5b) volume_small_pane_cp_g7

0xc030,	// (0x00038c64) volume_small_pane_cp_g8

0xc039,	// (0x00038c6d) volume_small_pane_cp_g9

0xc042,	// (0x00038c76) volume_small_pane_cp_g10

0x76b2,	// (0x000342e6) midp_ticker_pane_g1_ParamLimits

0x76be,	// (0x000342f2) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0003c3d1) midp_ticker_pane_g_ParamLimits

0x76ca,	// (0x000342fe) midp_ticker_pane_t1_ParamLimits

0xb2e2,	// (0x00037f16) aid_fill_nsta_2

0x807e,	// (0x00034cb2) list_form2_midp_pane

0x8e0c,	// (0x00035a40) midp_editing_number_pane_ParamLimits

0x8e18,	// (0x00035a4c) midp_ticker_pane_ParamLimits

0xc04b,	// (0x00038c7f) form2_midp_field_pane

0xcc70,	// (0x000398a4) scroll_pane_cp51

0xcc90,	// (0x000398c4) form2_midp_button_pane_ParamLimits

0xcc90,	// (0x000398c4) form2_midp_button_pane

0xcca2,	// (0x000398d6) form2_midp_content_pane_ParamLimits

0xcca2,	// (0x000398d6) form2_midp_content_pane

0xccbc,	// (0x000398f0) form2_midp_field_choice_group_pane

0xccc4,	// (0x000398f8) form2_midp_field_pane_g1

0xcccc,	// (0x00039900) form2_midp_field_pane_g2

0xccd4,	// (0x00039908) form2_midp_field_pane_g3

0xccdc,	// (0x00039910) form2_midp_field_pane_g4

0x0003,

0xfb0c,	// (0x0003c740) form2_midp_field_pane_g

0xcce4,	// (0x00039918) form2_midp_gauge_slider_pane

0xccec,	// (0x00039920) form2_midp_gauge_wait_pane

0xccf4,	// (0x00039928) form2_midp_image_pane_ParamLimits

0xccf4,	// (0x00039928) form2_midp_image_pane

0xcd0f,	// (0x00039943) form2_midp_label_pane_ParamLimits

0xcd0f,	// (0x00039943) form2_midp_label_pane

0xcd28,	// (0x0003995c) form2_midp_label_pane_cp_ParamLimits

0xcd28,	// (0x0003995c) form2_midp_label_pane_cp

0xcd47,	// (0x0003997b) form2_midp_string_pane_ParamLimits

0xcd47,	// (0x0003997b) form2_midp_string_pane

0xef79,	// (0x0003bbad) form2_midp_text_pane_ParamLimits

0xef79,	// (0x0003bbad) form2_midp_text_pane

0xcd59,	// (0x0003998d) form2_midp_time_pane

0xcd69,	// (0x0003999d) input_focus_pane_cp51_ParamLimits

0xcd69,	// (0x0003999d) input_focus_pane_cp51

0xcd81,	// (0x000399b5) form2_midp_label_pane_t1_ParamLimits

0xcd81,	// (0x000399b5) form2_midp_label_pane_t1

0xef92,	// (0x0003bbc6) form2_mdip_text_pane_t1_ParamLimits

0xef92,	// (0x0003bbc6) form2_mdip_text_pane_t1

0xefad,	// (0x0003bbe1) form2_midp_time_pane_t1

0xcdc9,	// (0x000399fd) form2_midp_gauge_slider_pane_t1

0xcddb,	// (0x00039a0f) form2_midp_gauge_slider_pane_t2

0xcded,	// (0x00039a21) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb15,	// (0x0003c749) form2_midp_gauge_slider_pane_t

0xcdff,	// (0x00039a33) form2_midp_slider_pane

0xce0b,	// (0x00039a3f) form2_midp_gauge_wait_pane_t1

0xce19,	// (0x00039a4d) form2_midp_wait_pane_ParamLimits

0xce19,	// (0x00039a4d) form2_midp_wait_pane

0xa9c9,	// (0x000375fd) list_single_2graphic_pane_cp4_ParamLimits

0xa9c9,	// (0x000375fd) list_single_2graphic_pane_cp4

0xb739,	// (0x0003836d) list_single_midp_graphic_pane_cp_ParamLimits

0xb739,	// (0x0003836d) list_single_midp_graphic_pane_cp

0x33b8,	// (0x0002ffec) list_highlight_pane_cp20

0xce44,	// (0x00039a78) list_single_2graphic_pane_g1_cp4

0x8e85,	// (0x00035ab9) list_single_2graphic_pane_g2_cp4

0xce4c,	// (0x00039a80) list_single_2graphic_pane_t1_cp4

0x35c4,	// (0x000301f8) list_highlight_pane_cp21

0xce5b,	// (0x00039a8f) list_single_midp_graphic_pane_g4_cp

0xce6a,	// (0x00039a9e) list_single_midp_graphic_pane_t1_cp

0xce7f,	// (0x00039ab3) form2_mdip_string_pane_t1_ParamLimits

0xce7f,	// (0x00039ab3) form2_mdip_string_pane_t1

0x33b8,	// (0x0002ffec) bg_wml_button_pane_cp2

0x326b,	// (0x0002fe9f) form2_midp_image_pane_g1

0xf46a,	// (0x0003c09e) list_double_large_graphic_pane_g5_ParamLimits

0xf46a,	// (0x0003c09e) list_double_large_graphic_pane_g5

0xac66,	// (0x0003789a) midp_form_pane_ParamLimits

0x35c4,	// (0x000301f8) main_apps_wheel_pane_ParamLimits

0xb174,	// (0x00037da8) popup_preview_window_ParamLimits

0xb174,	// (0x00037da8) popup_preview_window

0x799a,	// (0x000345ce) popup_touch_info_window_ParamLimits

0x799a,	// (0x000345ce) popup_touch_info_window

0x79b8,	// (0x000345ec) popup_touch_menu_window_ParamLimits

0x79b8,	// (0x000345ec) popup_touch_menu_window

0x3261,	// (0x0002fe95) bg_popup_sub_pane_cp6

0xcef7,	// (0x00039b2b) list_touch_menu_pane

0xceff,	// (0x00039b33) list_single_touch_menu_pane_ParamLimits

0xceff,	// (0x00039b33) list_single_touch_menu_pane

0xcf16,	// (0x00039b4a) list_single_touch_menu_pane_t1

0x35c4,	// (0x000301f8) bg_popup_sub_pane_cp7_ParamLimits

0x35c4,	// (0x000301f8) bg_popup_sub_pane_cp7

0xcf24,	// (0x00039b58) heading_sub_pane

0xcf2c,	// (0x00039b60) list_touch_info_pane_ParamLimits

0xcf2c,	// (0x00039b60) list_touch_info_pane

0xcf3b,	// (0x00039b6f) list_single_touch_info_pane_ParamLimits

0xcf3b,	// (0x00039b6f) list_single_touch_info_pane

0xcf4c,	// (0x00039b80) list_single_touch_info_pane_t1

0xcf5a,	// (0x00039b8e) list_single_touch_info_pane_t2

0x0001,

0xfb23,	// (0x0003c757) list_single_touch_info_pane_t

0x7688,	// (0x000342bc) bg_popup_heading_pane_cp

0xcf68,	// (0x00039b9c) heading_sub_pane_t1

0x7c84,	// (0x000348b8) bg_popup_preview_window_pane_cp_ParamLimits

0x7c84,	// (0x000348b8) bg_popup_preview_window_pane_cp

0xcf24,	// (0x00039b58) heading_preview_pane

0xcf2c,	// (0x00039b60) list_preview_pane_ParamLimits

0xcf2c,	// (0x00039b60) list_preview_pane

0xcf76,	// (0x00039baa) popup_preview_window_g1

0xcf3b,	// (0x00039b6f) list_single_preview_pane_ParamLimits

0xcf3b,	// (0x00039b6f) list_single_preview_pane

0xcf7e,	// (0x00039bb2) list_single_preview_pane_g1

0xcf86,	// (0x00039bba) list_single_preview_pane_t1

0xcf4c,	// (0x00039b80) list_single_preview_pane_t2

0x0001,

0xfb28,	// (0x0003c75c) list_single_preview_pane_t

0xcf94,	// (0x00039bc8) bg_popup_heading_pane_cp2_ParamLimits

0xcf94,	// (0x00039bc8) bg_popup_heading_pane_cp2

0xcfaa,	// (0x00039bde) heading_preview_pane_g1

0xcfb2,	// (0x00039be6) heading_preview_pane_t1_ParamLimits

0xcfb2,	// (0x00039be6) heading_preview_pane_t1

0x375b,	// (0x0003038f) soft_indicator_pane_t1_ParamLimits

0x3db2,	// (0x000309e6) scroll_pane_ParamLimits

0x7093,	// (0x00033cc7) scroll_sc2_left_pane

0x708a,	// (0x00033cbe) scroll_sc2_right_pane

0x70b2,	// (0x00033ce6) scroll_bg_pane_g1_ParamLimits

0x70c7,	// (0x00033cfb) scroll_bg_pane_g2_ParamLimits

0x70df,	// (0x00033d13) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0003c360) scroll_bg_pane_g_ParamLimits

0x70b2,	// (0x00033ce6) scroll_handle_pane_g1_ParamLimits

0x7101,	// (0x00033d35) scroll_handle_pane_g2_ParamLimits

0x70df,	// (0x00033d13) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0003c367) scroll_handle_pane_g_ParamLimits

0x78f2,	// (0x00034526) popup_choice_list_window_ParamLimits

0x78f2,	// (0x00034526) popup_choice_list_window

0x7aec,	// (0x00034720) choice_list_pane

0x7b62,	// (0x00034796) cell_toolbar_pane_t1

0x7b8a,	// (0x000347be) toolbar_button_pane_ParamLimits

0x8b6d,	// (0x000357a1) ai_gene_pane_1_t2_ParamLimits

0x8b6d,	// (0x000357a1) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0003c57f) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0003c57f) ai_gene_pane_1_t

0xcfcf,	// (0x00039c03) scroll_sc2_left_pane_g1

0xcfcf,	// (0x00039c03) scroll_sc2_right_pane_g1

0x6e5d,	// (0x00033a91) bg_popup_sub_pane_cp10

0xcfd9,	// (0x00039c0d) list_choice_list_pane

0xcff0,	// (0x00039c24) list_single_choice_list_pane_ParamLimits

0xcff0,	// (0x00039c24) list_single_choice_list_pane

0xd004,	// (0x00039c38) list_single_choice_list_pane_g1

0x6e48,	// (0x00033a7c) list_single_choice_list_pane_t1_ParamLimits

0x6e48,	// (0x00033a7c) list_single_choice_list_pane_t1

0xd00c,	// (0x00039c40) choice_list_pane_g1

0xd014,	// (0x00039c48) choice_list_pane_t1

0x3261,	// (0x0002fe95) input_focus_pane_cp11

0x6fdf,	// (0x00033c13) title_pane_stacon_g2_ParamLimits

0x6fdf,	// (0x00033c13) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0003c346) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0003c346) title_pane_stacon_g

0x7688,	// (0x000342bc) cursor_press_pane

0xafc1,	// (0x00037bf5) popup_fep_hwr_window_ParamLimits

0xafc1,	// (0x00037bf5) popup_fep_hwr_window

0x7944,	// (0x00034578) popup_fep_vkb_window_ParamLimits

0x7944,	// (0x00034578) popup_fep_vkb_window

0xd022,	// (0x00039c56) cursor_press_pane_g1

0x0002,

0xfb51,	// (0x0003c785) fep_vkb_side_pane_g_ParamLimits

0xc096,	// (0x00038cca) fep_hwr_candidate_pane_ParamLimits

0xc096,	// (0x00038cca) fep_hwr_candidate_pane

0xc0be,	// (0x00038cf2) fep_hwr_side_pane_ParamLimits

0xc0be,	// (0x00038cf2) fep_hwr_side_pane

0xc0de,	// (0x00038d12) fep_hwr_top_pane_ParamLimits

0xc0de,	// (0x00038d12) fep_hwr_top_pane

0xc0f6,	// (0x00038d2a) fep_hwr_write_pane_ParamLimits

0xc0f6,	// (0x00038d2a) fep_hwr_write_pane

0xfb51,	// (0x0003c785) fep_vkb_side_pane_g

0xd02a,	// (0x00039c5e) fep_hwr_top_pane_g1

0xd03c,	// (0x00039c70) fep_hwr_top_pane_g2

0xc130,	// (0x00038d64) fep_hwr_top_pane_g3

0x0002,

0xfb2d,	// (0x0003c761) fep_hwr_top_pane_g

0xc145,	// (0x00038d79) fep_hwr_top_text_pane

0x71fb,	// (0x00033e2f) fep_hwr_top_text_pane_g1

0xd072,	// (0x00039ca6) fep_hwr_top_text_pane_t1

0xc233,	// (0x00038e67) fep_hwr_candidate_pane_g1

0xd282,	// (0x00039eb6) fep_vkb_keypad_pane_g3_ParamLimits

0xd282,	// (0x00039eb6) fep_vkb_keypad_pane_g3

0xd2a4,	// (0x00039ed8) fep_vkb_keypad_pane_g4_ParamLimits

0xd2a4,	// (0x00039ed8) fep_vkb_keypad_pane_g4

0xd313,	// (0x00039f47) fep_vkb_bottom_pane_g2_ParamLimits

0xd313,	// (0x00039f47) fep_vkb_bottom_pane_g2

0x0001,

0xfb58,	// (0x0003c78c) fep_vkb_bottom_pane_g_ParamLimits

0xfb58,	// (0x0003c78c) fep_vkb_bottom_pane_g

0xcfcf,	// (0x00039c03) cell_vkb_side_pane_g2

0x0001,

0xfb62,	// (0x0003c796) cell_vkb_side_pane_g

0xd39e,	// (0x00039fd2) cell_vkb_side_pane_t1

0xd3ac,	// (0x00039fe0) cell_vkb_side_pane_t1_copy1

0xcfcf,	// (0x00039c03) bg_fep_vkb_candidate_pane_g2

0xd4d0,	// (0x0003a104) cell_vkb_candidate_pane_ParamLimits

0xd080,	// (0x00039cb4) aid_size_cell_vkb_ParamLimits

0xd080,	// (0x00039cb4) aid_size_cell_vkb

0xd4d0,	// (0x0003a104) cell_vkb_candidate_pane

0xc25a,	// (0x00038e8e) bg_popup_fep_shadow_pane_g1

0xd0f6,	// (0x00039d2a) fep_vkb_bottom_pane_ParamLimits

0xd0f6,	// (0x00039d2a) fep_vkb_bottom_pane

0xd133,	// (0x00039d67) fep_vkb_candidate_pane_ParamLimits

0xd133,	// (0x00039d67) fep_vkb_candidate_pane

0xd14f,	// (0x00039d83) fep_vkb_keypad_pane_ParamLimits

0xd14f,	// (0x00039d83) fep_vkb_keypad_pane

0xd183,	// (0x00039db7) fep_vkb_side_pane_ParamLimits

0xd183,	// (0x00039db7) fep_vkb_side_pane

0xd1af,	// (0x00039de3) fep_vkb_top_pane_ParamLimits

0xd1af,	// (0x00039de3) fep_vkb_top_pane

0xd1db,	// (0x00039e0f) fep_vkb_top_pane_g1_ParamLimits

0xd1db,	// (0x00039e0f) fep_vkb_top_pane_g1

0xd1ea,	// (0x00039e1e) fep_vkb_top_pane_g2_ParamLimits

0xd1ea,	// (0x00039e1e) fep_vkb_top_pane_g2

0xd1f9,	// (0x00039e2d) fep_vkb_top_pane_g3_ParamLimits

0xd1f9,	// (0x00039e2d) fep_vkb_top_pane_g3

0x0003,

0xfb48,	// (0x0003c77c) fep_vkb_top_pane_g_ParamLimits

0xfb48,	// (0x0003c77c) fep_vkb_top_pane_g

0xd217,	// (0x00039e4b) fep_vkb_top_text_pane_ParamLimits

0xd217,	// (0x00039e4b) fep_vkb_top_text_pane

0xd228,	// (0x00039e5c) fep_vkb_side_pane_g1_ParamLimits

0xd228,	// (0x00039e5c) fep_vkb_side_pane_g1

0xd271,	// (0x00039ea5) grid_vkb_side_pane_ParamLimits

0xd271,	// (0x00039ea5) grid_vkb_side_pane

0xc262,	// (0x00038e96) bg_popup_fep_shadow_pane_g2

0xc26b,	// (0x00038e9f) bg_popup_fep_shadow_pane_g3

0xc273,	// (0x00038ea7) bg_popup_fep_shadow_pane_g4

0xc27c,	// (0x00038eb0) bg_popup_fep_shadow_pane_g5

0xc284,	// (0x00038eb8) bg_popup_fep_shadow_pane_g6

0xc28c,	// (0x00038ec0) bg_popup_fep_shadow_pane_g7

0x6d48,	// (0x0003397c) bg_popup_fep_shadow_pane_g8

0xd2c2,	// (0x00039ef6) grid_vkb_keypad_number_pane_ParamLimits

0xd2c2,	// (0x00039ef6) grid_vkb_keypad_number_pane

0xd2d2,	// (0x00039f06) grid_vkb_keypad_pane_ParamLimits

0xd2d2,	// (0x00039f06) grid_vkb_keypad_pane

0xd2f8,	// (0x00039f2c) fep_vkb_bottom_pane_g1_ParamLimits

0xd2f8,	// (0x00039f2c) fep_vkb_bottom_pane_g1

0xd321,	// (0x00039f55) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd321,	// (0x00039f55) grid_vkb_keypad_bottom_left_pane

0xd336,	// (0x00039f6a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd336,	// (0x00039f6a) grid_vkb_keypad_bottom_right_pane

0xd34b,	// (0x00039f7f) fep_vkb_top_text_pane_g1

0xd366,	// (0x00039f9a) fep_vkb_top_text_pane_t1

0xd37b,	// (0x00039faf) cell_vkb_side_pane_ParamLimits

0xd37b,	// (0x00039faf) cell_vkb_side_pane

0xcfcf,	// (0x00039c03) cell_vkb_side_pane_g1

0xd3ba,	// (0x00039fee) cell_vkb_keypad_pane_ParamLimits

0xd3ba,	// (0x00039fee) cell_vkb_keypad_pane

0xd427,	// (0x0003a05b) cell_vkb_keypad_pane_g1

0x0008,

0xfb75,	// (0x0003c7a9) bg_popup_fep_shadow_pane_g

0xc29c,	// (0x00038ed0) cell_hwr_side_pane_g1

0xc29c,	// (0x00038ed0) cell_hwr_side_pane_g2

0xd431,	// (0x0003a065) cell_vkb_keypad_pane_t1

0xd43f,	// (0x0003a073) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd43f,	// (0x0003a073) cell_vkb_keypad_bottom_left_pane

0xd45c,	// (0x0003a090) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd45c,	// (0x0003a090) cell_vkb_keypad_bottom_right_pane

0xcfcf,	// (0x00039c03) cell_vkb_keypad_bottom_left_pane_g1

0xcfcf,	// (0x00039c03) cell_vkb_keypad_bottom_right_pane_g1

0xd495,	// (0x0003a0c9) cell_vkb_keypad_number_pane_ParamLimits

0xd495,	// (0x0003a0c9) cell_vkb_keypad_number_pane

0xd4b4,	// (0x0003a0e8) cell_vkb_keypad_number_pane_g1

0xd4be,	// (0x0003a0f2) cell_vkb_keypad_number_pane_g2

0xd4c7,	// (0x0003a0fb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb67,	// (0x0003c79b) cell_vkb_keypad_number_pane_g

0xd431,	// (0x0003a065) cell_vkb_keypad_number_pane_t1

0xd4e9,	// (0x0003a11d) fep_vkb_candidate_pane_g1

0x0001,

0xfb88,	// (0x0003c7bc) cell_hwr_side_pane_g

0xd502,	// (0x0003a136) cell_hwr_side_pane_t1

0xc2a6,	// (0x00038eda) cell_hwr_side_pane_t1_copy1

0xc2b4,	// (0x00038ee8) cell_hwr_candidate_pane_g1

0xc2e3,	// (0x00038f17) cell_hwr_candidate_pane_t1

0xcfcf,	// (0x00039c03) cell_vkb_candidate_pane_g2

0xd546,	// (0x0003a17a) cell_vkb_candidate_pane_t1

0xc061,	// (0x00038c95) bg_popup_fep_shadow_pane_ParamLimits

0xc061,	// (0x00038c95) bg_popup_fep_shadow_pane

0xc110,	// (0x00038d44) bg_fep_hwr_top_pane_g4

0xd04e,	// (0x00039c82) bg_hwr_side_pane_g1_ParamLimits

0xd04e,	// (0x00039c82) bg_hwr_side_pane_g1

0xc181,	// (0x00038db5) cell_hwr_side_pane_ParamLimits

0xc181,	// (0x00038db5) cell_hwr_side_pane

0xc1bc,	// (0x00038df0) fep_hwr_write_pane_g1_ParamLimits

0xc1bc,	// (0x00038df0) fep_hwr_write_pane_g1

0xc1c9,	// (0x00038dfd) fep_hwr_write_pane_g2_ParamLimits

0xc1c9,	// (0x00038dfd) fep_hwr_write_pane_g2

0xc1d6,	// (0x00038e0a) fep_hwr_write_pane_g3_ParamLimits

0xc1d6,	// (0x00038e0a) fep_hwr_write_pane_g3

0xc1e4,	// (0x00038e18) fep_hwr_write_pane_g4_ParamLimits

0xc1e4,	// (0x00038e18) fep_hwr_write_pane_g4

0x0005,

0xfb34,	// (0x0003c768) fep_hwr_write_pane_g_ParamLimits

0xfb34,	// (0x0003c768) fep_hwr_write_pane_g

0xc110,	// (0x00038d44) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc110,	// (0x00038d44) bg_fep_hwr_candidate_pane_g2

0xc1f9,	// (0x00038e2d) cell_hwr_candidate_pane_ParamLimits

0xc1f9,	// (0x00038e2d) cell_hwr_candidate_pane

0xc233,	// (0x00038e67) fep_hwr_candidate_pane_g1_ParamLimits

0xd0ae,	// (0x00039ce2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd0ae,	// (0x00039ce2) bg_popup_fep_shadow_pane_cp2

0xd209,	// (0x00039e3d) fep_vkb_top_pane_g4_ParamLimits

0xd209,	// (0x00039e3d) fep_vkb_top_pane_g4

0xd24f,	// (0x00039e83) fep_vkb_side_pane_g2_ParamLimits

0xd24f,	// (0x00039e83) fep_vkb_side_pane_g2

0xe962,	// (0x0003b596) list_setting_pane_t4_ParamLimits

0xe962,	// (0x0003b596) list_setting_pane_t4

0xe9f8,	// (0x0003b62c) list_setting_number_pane_t5_ParamLimits

0xe9f8,	// (0x0003b62c) list_setting_number_pane_t5

0xa9b9,	// (0x000375ed) list_double_heading_pane_cp2_ParamLimits

0xa9b9,	// (0x000375ed) list_double_heading_pane_cp2

0x74fd,	// (0x00034131) list_double_heading_pane_g1_cp2_ParamLimits

0x74fd,	// (0x00034131) list_double_heading_pane_g1_cp2

0xd554,	// (0x0003a188) list_double_heading_pane_g2_cp2_ParamLimits

0xd554,	// (0x0003a188) list_double_heading_pane_g2_cp2

0xd568,	// (0x0003a19c) list_double_heading_pane_t1_cp2_ParamLimits

0xd568,	// (0x0003a19c) list_double_heading_pane_t1_cp2

0xd57e,	// (0x0003a1b2) list_double_heading_pane_t2_cp2_ParamLimits

0xd57e,	// (0x0003a1b2) list_double_heading_pane_t2_cp2

0x324b,	// (0x0002fe7f) aid_value_unit2

0xa2ef,	// (0x00036f23) popup_preview_fixed_window

0x3919,	// (0x0003054d) bg_popup_preview_window_pane_cp02

0xd590,	// (0x0003a1c4) list_preview_fixed_pane

0xd5d6,	// (0x0003a20a) list_empty_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_empty_pane_fp

0xd5d6,	// (0x0003a20a) list_single_cale_day_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_single_cale_day_pane_fp

0xd5d6,	// (0x0003a20a) list_single_graphic_heading_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_single_graphic_heading_pane_fp

0xd5d6,	// (0x0003a20a) list_single_graphic_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_single_graphic_pane_fp

0xd5d6,	// (0x0003a20a) list_single_heading_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_single_heading_pane_fp

0xd5d6,	// (0x0003a20a) list_single_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_single_pane_fp

0xd5ea,	// (0x0003a21e) list_single_pane_fp_g1_ParamLimits

0xd5ea,	// (0x0003a21e) list_single_pane_fp_g1

0xf41f,	// (0x0003c053) list_single_pane_fp_g2_ParamLimits

0xf41f,	// (0x0003c053) list_single_pane_fp_g2

0xf50e,	// (0x0003c142) list_single_pane_fp_g3_ParamLimits

0xf50e,	// (0x0003c142) list_single_pane_fp_g3

0xd5f6,	// (0x0003a22a) list_single_pane_fp_g4_ParamLimits

0xd5f6,	// (0x0003a22a) list_single_pane_fp_g4

0x0003,

0xfb9b,	// (0x0003c7cf) list_single_pane_fp_g_ParamLimits

0xfb9b,	// (0x0003c7cf) list_single_pane_fp_g

0xefe1,	// (0x0003bc15) list_single_pane_fp_t1_ParamLimits

0xefe1,	// (0x0003bc15) list_single_pane_fp_t1

0xeff8,	// (0x0003bc2c) list_single_graphic_pane_fp_g1_ParamLimits

0xeff8,	// (0x0003bc2c) list_single_graphic_pane_fp_g1

0xd5ea,	// (0x0003a21e) list_single_graphic_pane_fp_g2_ParamLimits

0xd5ea,	// (0x0003a21e) list_single_graphic_pane_fp_g2

0xf41f,	// (0x0003c053) list_single_graphic_pane_fp_g3_ParamLimits

0xf41f,	// (0x0003c053) list_single_graphic_pane_fp_g3

0xf50e,	// (0x0003c142) list_single_graphic_pane_fp_g4_ParamLimits

0xf50e,	// (0x0003c142) list_single_graphic_pane_fp_g4

0xd5f6,	// (0x0003a22a) list_single_graphic_pane_fp_g5_ParamLimits

0xd5f6,	// (0x0003a22a) list_single_graphic_pane_fp_g5

0x0004,

0xfba4,	// (0x0003c7d8) list_single_graphic_pane_fp_g_ParamLimits

0xfba4,	// (0x0003c7d8) list_single_graphic_pane_fp_g

0xf004,	// (0x0003bc38) list_single_graphic_pane_fp_t1_ParamLimits

0xf004,	// (0x0003bc38) list_single_graphic_pane_fp_t1

0xeff8,	// (0x0003bc2c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeff8,	// (0x0003bc2c) list_single_graphic_heading_pane_fp_g1

0xd5ea,	// (0x0003a21e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xd5ea,	// (0x0003a21e) list_single_graphic_heading_pane_fp_g2

0xf41f,	// (0x0003c053) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf41f,	// (0x0003c053) list_single_graphic_heading_pane_fp_g3

0xf50e,	// (0x0003c142) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf50e,	// (0x0003c142) list_single_graphic_heading_pane_fp_g4

0xd5f6,	// (0x0003a22a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xd5f6,	// (0x0003a22a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003c7d8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003c7d8) list_single_graphic_heading_pane_fp_g

0xf01a,	// (0x0003bc4e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf01a,	// (0x0003bc4e) list_single_graphic_heading_pane_fp_t1

0xf030,	// (0x0003bc64) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf030,	// (0x0003bc64) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0003c7e3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0003c7e3) list_single_graphic_heading_pane_fp_t

0xf042,	// (0x0003bc76) list_single_cale_day_pane_fp_g1_ParamLimits

0xf042,	// (0x0003bc76) list_single_cale_day_pane_fp_g1

0xd602,	// (0x0003a236) list_single_cale_day_pane_fp_g2_ParamLimits

0xd602,	// (0x0003a236) list_single_cale_day_pane_fp_g2

0xf522,	// (0x0003c156) list_single_cale_day_pane_fp_g3_ParamLimits

0xf522,	// (0x0003c156) list_single_cale_day_pane_fp_g3

0xf54a,	// (0x0003c17e) list_single_cale_day_pane_fp_g4_ParamLimits

0xf54a,	// (0x0003c17e) list_single_cale_day_pane_fp_g4

0xf56e,	// (0x0003c1a2) list_single_cale_day_pane_fp_g5_ParamLimits

0xf56e,	// (0x0003c1a2) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb4,	// (0x0003c7e8) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb4,	// (0x0003c7e8) list_single_cale_day_pane_fp_g

0xf07a,	// (0x0003bcae) list_single_cale_day_pane_fp_t1_ParamLimits

0xf07a,	// (0x0003bcae) list_single_cale_day_pane_fp_t1

0xf0a0,	// (0x0003bcd4) list_single_cale_day_pane_fp_t2_ParamLimits

0xf0a0,	// (0x0003bcd4) list_single_cale_day_pane_fp_t2

0xf0b9,	// (0x0003bced) list_single_cale_day_pane_fp_t3_ParamLimits

0xf0b9,	// (0x0003bced) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbf,	// (0x0003c7f3) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbf,	// (0x0003c7f3) list_single_cale_day_pane_fp_t

0xd5ea,	// (0x0003a21e) list_empty_pane_fp_g1_ParamLimits

0xd5ea,	// (0x0003a21e) list_empty_pane_fp_g1

0xf0d2,	// (0x0003bd06) list_empty_pane_fp_t1

0xf0e0,	// (0x0003bd14) list_empty_pane_fp_t2

0x0001,

0xfbc6,	// (0x0003c7fa) list_empty_pane_fp_t

0xd5ea,	// (0x0003a21e) list_single_heading_pane_fp_g1_ParamLimits

0xd5ea,	// (0x0003a21e) list_single_heading_pane_fp_g1

0xf41f,	// (0x0003c053) list_single_heading_pane_fp_g2_ParamLimits

0xf41f,	// (0x0003c053) list_single_heading_pane_fp_g2

0xf50e,	// (0x0003c142) list_single_heading_pane_fp_g3_ParamLimits

0xf50e,	// (0x0003c142) list_single_heading_pane_fp_g3

0x0002,

0xfbcb,	// (0x0003c7ff) list_single_heading_pane_fp_g_ParamLimits

0xfbcb,	// (0x0003c7ff) list_single_heading_pane_fp_g

0xf0ee,	// (0x0003bd22) list_single_heading_pane_fp_t1_ParamLimits

0xf0ee,	// (0x0003bd22) list_single_heading_pane_fp_t1

0xf100,	// (0x0003bd34) list_single_heading_pane_fp_t2_ParamLimits

0xf100,	// (0x0003bd34) list_single_heading_pane_fp_t2

0x0001,

0xfbd2,	// (0x0003c806) list_single_heading_pane_fp_t_ParamLimits

0xfbd2,	// (0x0003c806) list_single_heading_pane_fp_t

0x6e69,	// (0x00033a9d) aid_size_cell_fast

0x388e,	// (0x000304c2) soft_indicator_pane_cp1_t1

0x6ea6,	// (0x00033ada) cell_app_pane_cp2_ParamLimits

0x6ea6,	// (0x00033ada) cell_app_pane_cp2

0xc083,	// (0x00038cb7) fep_hwr_candidate_drop_down_list_pane

0xc24d,	// (0x00038e81) fep_hwr_candidate_pane_g3_ParamLimits

0xc24d,	// (0x00038e81) fep_hwr_candidate_pane_g3

0x6608,	// (0x0003323c) fep_hwr_candidate_pane_g4_ParamLimits

0x6608,	// (0x0003323c) fep_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x0003c775) fep_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x0003c775) fep_hwr_candidate_pane_g

0xd122,	// (0x00039d56) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd122,	// (0x00039d56) fep_vkb_candidate_drop_down_list_pane

0xd4f1,	// (0x0003a125) fep_vkb_candidate_pane_g3

0xd4f9,	// (0x0003a12d) fep_vkb_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0003c7a2) fep_vkb_candidate_pane_g

0xc2b4,	// (0x00038ee8) cell_hwr_candidate_pane_g1_ParamLimits

0xc2c2,	// (0x00038ef6) cell_hwr_candidate_pane_g3_ParamLimits

0xc2c2,	// (0x00038ef6) cell_hwr_candidate_pane_g3

0xefc0,	// (0x0003bbf4) cell_hwr_candidate_pane_g4_ParamLimits

0xefc0,	// (0x0003bbf4) cell_hwr_candidate_pane_g4

0x0002,

0xfb8d,	// (0x0003c7c1) cell_hwr_candidate_pane_g_ParamLimits

0xfb8d,	// (0x0003c7c1) cell_hwr_candidate_pane_g

0xd510,	// (0x0003a144) cell_vkb_candidate_pane_g3_ParamLimits

0xd510,	// (0x0003a144) cell_vkb_candidate_pane_g3

0xd52b,	// (0x0003a15f) cell_vkb_candidate_pane_g4_ParamLimits

0xd52b,	// (0x0003a15f) cell_vkb_candidate_pane_g4

0xd60e,	// (0x0003a242) cell_app_pane_cp2_g1_ParamLimits

0xd60e,	// (0x0003a242) cell_app_pane_cp2_g1

0xd62c,	// (0x0003a260) cell_app_pane_cp2_g2_ParamLimits

0xd62c,	// (0x0003a260) cell_app_pane_cp2_g2

0x0001,

0xfbd7,	// (0x0003c80b) cell_app_pane_cp2_g_ParamLimits

0xfbd7,	// (0x0003c80b) cell_app_pane_cp2_g

0xd638,	// (0x0003a26c) cell_app_pane_cp2_t1_ParamLimits

0xd638,	// (0x0003a26c) cell_app_pane_cp2_t1

0x6ce1,	// (0x00033915) grid_highlight_pane_cp1_ParamLimits

0x6ce1,	// (0x00033915) grid_highlight_pane_cp1

0xc300,	// (0x00038f34) cell_hwr_candidate_pane_cp1_ParamLimits

0xc300,	// (0x00038f34) cell_hwr_candidate_pane_cp1

0xc2b4,	// (0x00038ee8) fep_hwr_candidate_drop_down_list_pane_g1

0xc31e,	// (0x00038f52) fep_hwr_candidate_drop_down_list_pane_g2

0xc32b,	// (0x00038f5f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0003c810) fep_hwr_candidate_drop_down_list_pane_g

0xc338,	// (0x00038f6c) fep_hwr_candidate_drop_down_list_scroll_pane

0xc341,	// (0x00038f75) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc341,	// (0x00038f75) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc34e,	// (0x00038f82) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc34e,	// (0x00038f82) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc35b,	// (0x00038f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc35b,	// (0x00038f8f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc368,	// (0x00038f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc368,	// (0x00038f9c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc383,	// (0x00038fb7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc383,	// (0x00038fb7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc39e,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc39e,	// (0x00038fd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc3b9,	// (0x00038fed) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3b9,	// (0x00038fed) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc3d4,	// (0x00039008) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3d4,	// (0x00039008) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0003c817) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0003c817) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd64a,	// (0x0003a27e) cell_vkb_candidate_pane_cp1_ParamLimits

0xd64a,	// (0x0003a27e) cell_vkb_candidate_pane_cp1

0xd209,	// (0x00039e3d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd209,	// (0x00039e3d) fep_vkb_candidate_drop_down_list_pane_g1

0xd66d,	// (0x0003a2a1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xd66d,	// (0x0003a2a1) fep_vkb_candidate_drop_down_list_pane_g2

0xd67a,	// (0x0003a2ae) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xd67a,	// (0x0003a2ae) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf4,	// (0x0003c828) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf4,	// (0x0003c828) fep_vkb_candidate_drop_down_list_pane_g

0xd687,	// (0x0003a2bb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xd687,	// (0x0003a2bb) fep_vkb_candidate_drop_down_list_scroll_pane

0xd694,	// (0x0003a2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd694,	// (0x0003a2c8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xd6a1,	// (0x0003a2d5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd6a1,	// (0x0003a2d5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xd6ad,	// (0x0003a2e1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd6ad,	// (0x0003a2e1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xd6b9,	// (0x0003a2ed) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xd6b9,	// (0x0003a2ed) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xd6da,	// (0x0003a30e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xd6da,	// (0x0003a30e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xd6fb,	// (0x0003a32f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd6fb,	// (0x0003a32f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xd71c,	// (0x0003a350) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd71c,	// (0x0003a350) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xd73d,	// (0x0003a371) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd73d,	// (0x0003a371) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfb,	// (0x0003c82f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfb,	// (0x0003c82f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa3d9,	// (0x0003700d) title_pane_g1_ParamLimits

0xa3e6,	// (0x0003701a) title_pane_g2_ParamLimits

0xf592,	// (0x0003c1c6) title_pane_g_ParamLimits

0x71f3,	// (0x00033e27) aid_call2_pane

0x71eb,	// (0x00033e1f) aid_call_pane

0x71fb,	// (0x00033e2f) popup_clock_analogue_window_g1

0x71fb,	// (0x00033e2f) popup_clock_analogue_window_g2

0xa99a,	// (0x000375ce) popup_clock_analogue_window_g3

0xa9a3,	// (0x000375d7) popup_clock_analogue_window_g4

0x326b,	// (0x0002fe9f) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0003c375) popup_clock_analogue_window_g

0xa9ab,	// (0x000375df) popup_clock_analogue_window_t1

0xa9ef,	// (0x00037623) clock_digital_number_pane_ParamLimits

0xa9ef,	// (0x00037623) clock_digital_number_pane

0xa9fb,	// (0x0003762f) clock_digital_number_pane_cp02_ParamLimits

0xa9fb,	// (0x0003762f) clock_digital_number_pane_cp02

0xaa07,	// (0x0003763b) clock_digital_number_pane_cp03_ParamLimits

0xaa07,	// (0x0003763b) clock_digital_number_pane_cp03

0xaa13,	// (0x00037647) clock_digital_number_pane_cp04_ParamLimits

0xaa13,	// (0x00037647) clock_digital_number_pane_cp04

0xaa1f,	// (0x00037653) clock_digital_separator_pane_ParamLimits

0xaa1f,	// (0x00037653) clock_digital_separator_pane

0xaa2b,	// (0x0003765f) popup_clock_digital_window_t1_ParamLimits

0xaa2b,	// (0x0003765f) popup_clock_digital_window_t1

0x326b,	// (0x0002fe9f) clock_digital_number_pane_g1

0x326b,	// (0x0002fe9f) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0003c380) clock_digital_number_pane_g

0x326b,	// (0x0002fe9f) clock_digital_separator_pane_g1

0x326b,	// (0x0002fe9f) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0003c380) clock_digital_separator_pane_g

0xb2d2,	// (0x00037f06) aid_fill_nsta_ParamLimits

0xb38b,	// (0x00037fbf) indicator_nsta_pane_ParamLimits

0x7a95,	// (0x000346c9) popup_clock_analogue_window

0x7a95,	// (0x000346c9) popup_clock_digital_window

0x35c4,	// (0x000301f8) grid_indicator_nsta_pane_ParamLimits

0x967e,	// (0x000362b2) clock_nsta_pane_t2

0x0001,

0xface,	// (0x0003c702) clock_nsta_pane_t

0xa903,	// (0x00037537) aid_size_max_handle

0xa90d,	// (0x00037541) aid_size_min_handle

0x7688,	// (0x000342bc) editor_scroll_pane

0xd758,	// (0x0003a38c) ex_editor_pane

0x6e24,	// (0x00033a58) scroll_pane_cp13

0x3ddf,	// (0x00030a13) scroll_pane_cp14

0x7225,	// (0x00033e59) scroll_pane_cp36

0xa9c9,	// (0x000375fd) list_single_graphic_hl_pane_cp2_ParamLimits

0xa9c9,	// (0x000375fd) list_single_graphic_hl_pane_cp2

0xedfa,	// (0x0003ba2e) list_single_graphic_hl_pane_ParamLimits

0xedfa,	// (0x0003ba2e) list_single_graphic_hl_pane

0xf116,	// (0x0003bd4a) aid_size_min_hl_cp1

0xd760,	// (0x0003a394) list_highlight_pane_cp34_ParamLimits

0xd760,	// (0x0003a394) list_highlight_pane_cp34

0xd771,	// (0x0003a3a5) list_single_graphic_hl_pane_g1_ParamLimits

0xd771,	// (0x0003a3a5) list_single_graphic_hl_pane_g1

0xf11f,	// (0x0003bd53) list_single_graphic_hl_pane_g2_ParamLimits

0xf11f,	// (0x0003bd53) list_single_graphic_hl_pane_g2

0xf11f,	// (0x0003bd53) list_single_graphic_hl_pane_g3_ParamLimits

0xf11f,	// (0x0003bd53) list_single_graphic_hl_pane_g3

0xf41f,	// (0x0003c053) list_single_graphic_hl_pane_g4_ParamLimits

0xf41f,	// (0x0003c053) list_single_graphic_hl_pane_g4

0xf50e,	// (0x0003c142) list_single_graphic_hl_pane_g5_ParamLimits

0xf50e,	// (0x0003c142) list_single_graphic_hl_pane_g5

0x0004,

0xfc0c,	// (0x0003c840) list_single_graphic_hl_pane_g_ParamLimits

0xfc0c,	// (0x0003c840) list_single_graphic_hl_pane_g

0xe77f,	// (0x0003b3b3) list_single_graphic_hl_pane_t1_ParamLimits

0xe77f,	// (0x0003b3b3) list_single_graphic_hl_pane_t1

0xd77e,	// (0x0003a3b2) aid_size_min_hl_cp2

0xd787,	// (0x0003a3bb) list_highlight_pane_cp34_cp2_ParamLimits

0xd787,	// (0x0003a3bb) list_highlight_pane_cp34_cp2

0xd771,	// (0x0003a3a5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xd771,	// (0x0003a3a5) list_single_graphic_hl_pane_g1_cp2

0xd794,	// (0x0003a3c8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xd794,	// (0x0003a3c8) list_single_graphic_hl_pane_g2_cp2

0xd7a0,	// (0x0003a3d4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd7a0,	// (0x0003a3d4) list_single_graphic_hl_pane_g3_cp2

0x74fd,	// (0x00034131) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x74fd,	// (0x00034131) list_single_graphic_hl_pane_g4_cp2

0xd554,	// (0x0003a188) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xd554,	// (0x0003a188) list_single_graphic_hl_pane_g5_cp2

0xadfe,	// (0x00037a32) control_pane_g4_ParamLimits

0xadfe,	// (0x00037a32) control_pane_g4

0x6e5d,	// (0x00033a91) bg_popup_sub_pane_cp10_ParamLimits

0xcfd9,	// (0x00039c0d) list_choice_list_pane_ParamLimits

0xcfe8,	// (0x00039c1c) scroll_pane_cp23

0x3919,	// (0x0003054d) bg_popup_preview_window_pane_cp02_ParamLimits

0xd590,	// (0x0003a1c4) list_preview_fixed_pane_ParamLimits

0xd5a6,	// (0x0003a1da) list_preview_fixed_pane_cp_ParamLimits

0xd5a6,	// (0x0003a1da) list_preview_fixed_pane_cp

0xd5b2,	// (0x0003a1e6) popup_preview_fixed_window_g1_ParamLimits

0xd5b2,	// (0x0003a1e6) popup_preview_fixed_window_g1

0xd5be,	// (0x0003a1f2) popup_preview_fixed_window_g2_ParamLimits

0xd5be,	// (0x0003a1f2) popup_preview_fixed_window_g2

0x0002,

0xfb94,	// (0x0003c7c8) popup_preview_fixed_window_g_ParamLimits

0xfb94,	// (0x0003c7c8) popup_preview_fixed_window_g

0xa81e,	// (0x00037452) aid_navi_side_left_pane_ParamLimits

0xa82e,	// (0x00037462) aid_navi_side_right_pane_ParamLimits

0xa83d,	// (0x00037471) navi_icon_pane_stacon_ParamLimits

0xa84d,	// (0x00037481) navi_navi_pane_stacon_ParamLimits

0xa83d,	// (0x00037471) navi_text_pane_stacon_ParamLimits

0x3261,	// (0x0002fe95) main_text_info_pane

0xd7c2,	// (0x0003a3f6) listscroll_text_info_pane

0xd7ca,	// (0x0003a3fe) list_text_info_pane_ParamLimits

0xd7ca,	// (0x0003a3fe) list_text_info_pane

0xd7d9,	// (0x0003a40d) scroll_pane_cp24_ParamLimits

0xd7d9,	// (0x0003a40d) scroll_pane_cp24

0xd7f7,	// (0x0003a42b) list_text_info_pane_t1_ParamLimits

0xd7f7,	// (0x0003a42b) list_text_info_pane_t1

0xaf47,	// (0x00037b7b) popup_fast_swap2_window_ParamLimits

0xaf47,	// (0x00037b7b) popup_fast_swap2_window

0xd814,	// (0x0003a448) aid_size_cell_fast2

0x3261,	// (0x0002fe95) bg_popup_window_pane_cp17

0x80aa,	// (0x00034cde) heading_pane_cp2

0x3b61,	// (0x00030795) listscroll_fast2_pane

0xd81e,	// (0x0003a452) grid_fast2_pane

0xd826,	// (0x0003a45a) listscroll_fast2_pane_g1

0xd82e,	// (0x0003a462) listscroll_fast2_pane_g2

0x0001,

0xfc17,	// (0x0003c84b) listscroll_fast2_pane_g

0x6e24,	// (0x00033a58) scroll_pane_cp26

0xd836,	// (0x0003a46a) cell_fast2_pane_ParamLimits

0xd836,	// (0x0003a46a) cell_fast2_pane

0xd84c,	// (0x0003a480) cell_fast2_pane_g1

0xd855,	// (0x0003a489) cell_fast2_pane_g2

0xd85e,	// (0x0003a492) cell_fast2_pane_g3

0x0002,

0xfc1c,	// (0x0003c850) cell_fast2_pane_g

0x3c38,	// (0x0003086c) grid_highlight_pane_cp9

0x3c4d,	// (0x00030881) main_eswt_pane_ParamLimits

0x3c4d,	// (0x00030881) main_eswt_pane

0xd7ee,	// (0x0003a422) list_single_text_info_pane

0xd866,	// (0x0003a49a) eswt_ctrl_button_pane

0xd866,	// (0x0003a49a) eswt_ctrl_canvas_pane

0xd86e,	// (0x0003a4a2) eswt_ctrl_combo_pane

0xd866,	// (0x0003a49a) eswt_ctrl_default_pane

0xd866,	// (0x0003a49a) eswt_ctrl_label_pane

0xd876,	// (0x0003a4aa) eswt_ctrl_wait_pane

0xd87e,	// (0x0003a4b2) eswt_shell_pane

0x3261,	// (0x0002fe95) listscroll_eswt_app_pane

0xd89a,	// (0x0003a4ce) popup_eswt_tasktip_window_ParamLimits

0xd89a,	// (0x0003a4ce) popup_eswt_tasktip_window

0x7c84,	// (0x000348b8) bg_popup_window_pane_cp18

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_ParamLimits

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_ParamLimits

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_ParamLimits

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_ParamLimits

0xd8d2,	// (0x0003a506) eswt_control_pane_g4

0x0003,

0xfc23,	// (0x0003c857) eswt_control_pane_g_ParamLimits

0xfc23,	// (0x0003c857) eswt_control_pane_g

0x6ce1,	// (0x00033915) bg_button_pane_ParamLimits

0x6ce1,	// (0x00033915) bg_button_pane

0x3c4d,	// (0x00030881) common_borders_pane_copy2_ParamLimits

0x3c4d,	// (0x00030881) common_borders_pane_copy2

0xd8df,	// (0x0003a513) control_button_pane_g1_ParamLimits

0xd8df,	// (0x0003a513) control_button_pane_g1

0xd8eb,	// (0x0003a51f) control_button_pane_g2_ParamLimits

0xd8eb,	// (0x0003a51f) control_button_pane_g2

0xd8f7,	// (0x0003a52b) control_button_pane_g3_ParamLimits

0xd8f7,	// (0x0003a52b) control_button_pane_g3

0x0002,

0xfc2c,	// (0x0003c860) control_button_pane_g_ParamLimits

0xfc2c,	// (0x0003c860) control_button_pane_g

0xd90b,	// (0x0003a53f) control_button_pane_t1

0xd919,	// (0x0003a54d) control_button_pane_t2

0x0001,

0xfc33,	// (0x0003c867) control_button_pane_t

0x7b96,	// (0x000347ca) bg_button_pane_g1

0x7b9e,	// (0x000347d2) bg_button_pane_g2

0x7ba6,	// (0x000347da) bg_button_pane_g3

0x7bae,	// (0x000347e2) bg_button_pane_g4

0x7bb6,	// (0x000347ea) bg_button_pane_g5

0x7bbe,	// (0x000347f2) bg_button_pane_g6

0x7bc6,	// (0x000347fa) bg_button_pane_g7

0x7bce,	// (0x00034802) bg_button_pane_g8

0x7bd6,	// (0x0003480a) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0003c4d3) bg_button_pane_g

0xcf94,	// (0x00039bc8) common_borders_pane_ParamLimits

0xcf94,	// (0x00039bc8) common_borders_pane

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy1_ParamLimits

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy1

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy1_ParamLimits

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy1

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy1_ParamLimits

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy1

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy1_ParamLimits

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy1

0xcfcf,	// (0x00039c03) bg_eswt_ctrl_canvas_pane_g1

0xcf94,	// (0x00039bc8) common_borders_pane_cp2_ParamLimits

0xcf94,	// (0x00039bc8) common_borders_pane_cp2

0xcf94,	// (0x00039bc8) common_borders_pane_cp3_ParamLimits

0xcf94,	// (0x00039bc8) common_borders_pane_cp3

0xd927,	// (0x0003a55b) separator_horizontal_pane

0x708a,	// (0x00033cbe) separator_vertical_pane

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy2_ParamLimits

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy2

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy2_ParamLimits

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy2

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy2_ParamLimits

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy2

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy2_ParamLimits

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy2

0x3261,	// (0x0002fe95) common_borders_pane_cp4

0xd92f,	// (0x0003a563) separator_horizontal_pane_g1

0xd938,	// (0x0003a56c) separator_horizontal_pane_g2

0xd941,	// (0x0003a575) separator_horizontal_pane_g3

0x0002,

0xfc38,	// (0x0003c86c) separator_horizontal_pane_g

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy3_ParamLimits

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy3

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy3_ParamLimits

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy3

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy3_ParamLimits

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy3

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy3_ParamLimits

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy3

0x3261,	// (0x0002fe95) common_borders_pane_cp5

0xd94a,	// (0x0003a57e) separator_vertical_pane_g1

0xd953,	// (0x0003a587) separator_vertical_pane_g2

0xd95c,	// (0x0003a590) separator_vertical_pane_g3

0x0002,

0xfc3f,	// (0x0003c873) separator_vertical_pane_g

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy4_ParamLimits

0xd8ab,	// (0x0003a4df) eswt_control_pane_g1_copy4

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy4_ParamLimits

0xd8b8,	// (0x0003a4ec) eswt_control_pane_g2_copy4

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy4_ParamLimits

0xd8c5,	// (0x0003a4f9) eswt_control_pane_g3_copy4

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy4_ParamLimits

0xd8d2,	// (0x0003a506) eswt_control_pane_g4_copy4

0xd965,	// (0x0003a599) eswt_ctrl_combo_button_pane

0xd96d,	// (0x0003a5a1) eswt_ctrl_input_pane

0xd975,	// (0x0003a5a9) popup_choice_list_window_cp70

0xd97d,	// (0x0003a5b1) eswt_ctrl_input_pane_t1

0x3261,	// (0x0002fe95) input_focus_pane_cp70

0xcf94,	// (0x00039bc8) bg_button_pane_cp70_ParamLimits

0xcf94,	// (0x00039bc8) bg_button_pane_cp70

0xd98b,	// (0x0003a5bf) eswt_ctrl_combo_button_pane_g1

0xd993,	// (0x0003a5c7) wait_bar_pane_cp70

0x7c84,	// (0x000348b8) bg_popup_window_pane_cp70_ParamLimits

0x7c84,	// (0x000348b8) bg_popup_window_pane_cp70

0xd99b,	// (0x0003a5cf) popup_eswt_tasktip_window_t1

0xd9b1,	// (0x0003a5e5) wait_bar_pane_cp71_ParamLimits

0xd9b1,	// (0x0003a5e5) wait_bar_pane_cp71

0xd9bd,	// (0x0003a5f1) grid_eswt_app_pane

0x7093,	// (0x00033cc7) scroll_pane_cp70

0xd9c6,	// (0x0003a5fa) cell_eswt_app_pane_ParamLimits

0xd9c6,	// (0x0003a5fa) cell_eswt_app_pane

0xd9ee,	// (0x0003a622) cell_eswt_app_pane_g1_ParamLimits

0xd9ee,	// (0x0003a622) cell_eswt_app_pane_g1

0xda1d,	// (0x0003a651) cell_eswt_app_pane_g2_ParamLimits

0xda1d,	// (0x0003a651) cell_eswt_app_pane_g2

0x0001,

0xfc46,	// (0x0003c87a) cell_eswt_app_pane_g_ParamLimits

0xfc46,	// (0x0003c87a) cell_eswt_app_pane_g

0xda46,	// (0x0003a67a) cell_eswt_app_pane_t1_ParamLimits

0xda46,	// (0x0003a67a) cell_eswt_app_pane_t1

0xda78,	// (0x0003a6ac) grid_highlight_pane_cp70_ParamLimits

0xda78,	// (0x0003a6ac) grid_highlight_pane_cp70

0x3e55,	// (0x00030a89) set_content_pane_g1

0x7877,	// (0x000344ab) status_small_volume_pane

0xc3ef,	// (0x00039023) status_small_volume_pane_g1

0xc3f7,	// (0x0003902b) volume_small2_pane

0xc400,	// (0x00039034) volume_small2_pane_g1

0xc409,	// (0x0003903d) volume_small2_pane_g2

0xc412,	// (0x00039046) volume_small2_pane_g3

0xc41b,	// (0x0003904f) volume_small2_pane_g4

0xc424,	// (0x00039058) volume_small2_pane_g5

0xc42d,	// (0x00039061) volume_small2_pane_g6

0xc436,	// (0x0003906a) volume_small2_pane_g7

0xc43f,	// (0x00039073) volume_small2_pane_g8

0xc448,	// (0x0003907c) volume_small2_pane_g9

0xc451,	// (0x00039085) volume_small2_pane_g10

0x0009,

0xfc4b,	// (0x0003c87f) volume_small2_pane_g

0xd34b,	// (0x00039f7f) fep_vkb_top_text_pane_g1_ParamLimits

0xd366,	// (0x00039f9a) fep_vkb_top_text_pane_t1_ParamLimits

0xd5ca,	// (0x0003a1fe) popup_preview_fixed_window_g3_ParamLimits

0xd5ca,	// (0x0003a1fe) popup_preview_fixed_window_g3

0xb27b,	// (0x00037eaf) popup_toolbar_trans_pane

0xbb2c,	// (0x00038760) aid_height_set_list_ParamLimits

0x8dd0,	// (0x00035a04) aid_size_parent_ParamLimits

0x6e5d,	// (0x00033a91) list_highlight_pane_cp2_ParamLimits

0x3e55,	// (0x00030a89) set_content_pane_g1_ParamLimits

0xbc77,	// (0x000388ab) list_single_image_pane_ParamLimits

0xbc77,	// (0x000388ab) list_single_image_pane

0x001f,	// (0x0002cc53) aid_size_cell_image_ParamLimits

0x001f,	// (0x0002cc53) aid_size_cell_image

0x002c,	// (0x0002cc60) grid_single_image_pane_ParamLimits

0x002c,	// (0x0002cc60) grid_single_image_pane

0x3e55,	// (0x00030a89) list_single_image_pane_g1_ParamLimits

0x3e55,	// (0x00030a89) list_single_image_pane_g1

0x6cfb,	// (0x0003392f) list_single_image_pane_g2_ParamLimits

0x6cfb,	// (0x0003392f) list_single_image_pane_g2

0x0001,

0xfc60,	// (0x0003c894) list_single_image_pane_g_ParamLimits

0xfc60,	// (0x0003c894) list_single_image_pane_g

0x95dd,	// (0x00036211) list_single_image_pane_t1_ParamLimits

0x95dd,	// (0x00036211) list_single_image_pane_t1

0x0038,	// (0x0002cc6c) cell_image_list_pane_ParamLimits

0x0038,	// (0x0002cc6c) cell_image_list_pane

0x004b,	// (0x0002cc7f) cell_image_list_pane_g1

0x0054,	// (0x0002cc88) cell_image_list_pane_g2

0x0001,

0xfc65,	// (0x0003c899) cell_image_list_pane_g

0xda84,	// (0x0003a6b8) aid_size_cell_tb_trans_pane

0x6ce1,	// (0x00033915) bg_tb_trans_pane

0xda96,	// (0x0003a6ca) grid_tb_trans_pane

0x7b96,	// (0x000347ca) bg_tb_trans_pane_g1

0x7b9e,	// (0x000347d2) bg_tb_trans_pane_g2

0x7ba6,	// (0x000347da) bg_tb_trans_pane_g3

0x7bae,	// (0x000347e2) bg_tb_trans_pane_g4

0x7bb6,	// (0x000347ea) bg_tb_trans_pane_g5

0x7bce,	// (0x00034802) bg_tb_trans_pane_g6

0x7bd6,	// (0x0003480a) bg_tb_trans_pane_g7

0x7bbe,	// (0x000347f2) bg_tb_trans_pane_g8

0x7bc6,	// (0x000347fa) bg_tb_trans_pane_g9

0x0008,

0xfc6a,	// (0x0003c89e) bg_tb_trans_pane_g

0xdaaa,	// (0x0003a6de) cell_toolbar_trans_pane_ParamLimits

0xdaaa,	// (0x0003a6de) cell_toolbar_trans_pane

0xcfcf,	// (0x00039c03) cell_toolbar_trans_pane_g1

0xc053,	// (0x00038c87) list_form2_midp_pane_t1

0xcc62,	// (0x00039896) list_form2_midp_pane_t2

0x0001,

0xfb07,	// (0x0003c73b) list_form2_midp_pane_t

0xcc70,	// (0x000398a4) scroll_pane_cp51_ParamLimits

0xce29,	// (0x00039a5d) form2_midp_wait_pane_g1

0xce32,	// (0x00039a66) form2_midp_wait_pane_g2

0xce3b,	// (0x00039a6f) form2_midp_wait_pane_g3

0x0002,

0xfb1c,	// (0x0003c750) form2_midp_wait_pane_g

0x35c4,	// (0x000301f8) list_highlight_pane_cp21_ParamLimits

0xce5b,	// (0x00039a8f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xce6a,	// (0x00039a9e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xedbb,	// (0x0003b9ef) list_single_2graphic_im_pane_ParamLimits

0xedbb,	// (0x0003b9ef) list_single_2graphic_im_pane

0x005d,	// (0x0002cc91) list_single_2graphic_im_pane_g1_ParamLimits

0x005d,	// (0x0002cc91) list_single_2graphic_im_pane_g1

0x006e,	// (0x0002cca2) list_single_2graphic_im_pane_g2_ParamLimits

0x006e,	// (0x0002cca2) list_single_2graphic_im_pane_g2

0x007a,	// (0x0002ccae) list_single_2graphic_im_pane_g3_ParamLimits

0x007a,	// (0x0002ccae) list_single_2graphic_im_pane_g3

0x0003,

0xfc7d,	// (0x0003c8b1) list_single_2graphic_im_pane_g_ParamLimits

0xfc7d,	// (0x0003c8b1) list_single_2graphic_im_pane_g

0x008e,	// (0x0002ccc2) list_single_2graphic_im_pane_t1_ParamLimits

0x008e,	// (0x0002ccc2) list_single_2graphic_im_pane_t1

0xd5d6,	// (0x0003a20a) list_single_graphic_2heading_pane_fp_ParamLimits

0xd5d6,	// (0x0003a20a) list_single_graphic_2heading_pane_fp

0xeff8,	// (0x0003bc2c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeff8,	// (0x0003bc2c) list_single_graphic_2heading_pane_fp_g1

0xd5ea,	// (0x0003a21e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xd5ea,	// (0x0003a21e) list_single_graphic_2heading_pane_fp_g2

0xf41f,	// (0x0003c053) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf41f,	// (0x0003c053) list_single_graphic_2heading_pane_fp_g3

0xf50e,	// (0x0003c142) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf50e,	// (0x0003c142) list_single_graphic_2heading_pane_fp_g4

0xd5f6,	// (0x0003a22a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xd5f6,	// (0x0003a22a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba4,	// (0x0003c7d8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0003c7d8) list_single_graphic_2heading_pane_fp_g

0xf12b,	// (0x0003bd5f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf12b,	// (0x0003bd5f) list_single_graphic_2heading_pane_fp_t1

0xf030,	// (0x0003bc64) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf030,	// (0x0003bc64) list_single_graphic_2heading_pane_fp_t2

0xf141,	// (0x0003bd75) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf141,	// (0x0003bd75) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc86,	// (0x0003c8ba) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc86,	// (0x0003c8ba) list_single_graphic_2heading_pane_fp_t

0xd05a,	// (0x00039c8e) fep_hwr_write_pane_g5_ParamLimits

0xd05a,	// (0x00039c8e) fep_hwr_write_pane_g5

0xd066,	// (0x00039c9a) fep_hwr_write_pane_g6_ParamLimits

0xd066,	// (0x00039c9a) fep_hwr_write_pane_g6

0xd87e,	// (0x0003a4b2) eswt_shell_pane_ParamLimits

0x7c84,	// (0x000348b8) bg_popup_window_pane_cp18_ParamLimits

0x8d74,	// (0x000359a8) heading_pane_cp70

0xd99b,	// (0x0003a5cf) popup_eswt_tasktip_window_t1_ParamLimits

0xb308,	// (0x00037f3c) aid_touch_tab_arrow_left

0xb314,	// (0x00037f48) aid_touch_tab_arrow_right

0xa3f7,	// (0x0003702b) title_pane_g3_ParamLimits

0xa3f7,	// (0x0003702b) title_pane_g3

0x6cb1,	// (0x000338e5) set_value_pane_g1

0xb27b,	// (0x00037eaf) popup_toolbar_trans_pane_ParamLimits

0xda84,	// (0x0003a6b8) aid_size_cell_tb_trans_pane_ParamLimits

0x6ce1,	// (0x00033915) bg_tb_trans_pane_ParamLimits

0xda96,	// (0x0003a6ca) grid_tb_trans_pane_ParamLimits

0x3919,	// (0x0003054d) cont_note_pane_ParamLimits

0x3919,	// (0x0003054d) cont_note_pane

0x3c4d,	// (0x00030881) cont_snote2_single_text_pane_ParamLimits

0x3c4d,	// (0x00030881) cont_snote2_single_text_pane

0x3c4d,	// (0x00030881) cont_snote2_single_graphic_pane_ParamLimits

0x3c4d,	// (0x00030881) cont_snote2_single_graphic_pane

0x8283,	// (0x00034eb7) cont_note_wait_pane_ParamLimits

0x8283,	// (0x00034eb7) cont_note_wait_pane

0x8283,	// (0x00034eb7) cont_note_image_pane_ParamLimits

0x8283,	// (0x00034eb7) cont_note_image_pane

0xdadc,	// (0x0003a710) popup_note2_window_g1_ParamLimits

0xdadc,	// (0x0003a710) popup_note2_window_g1

0xdb0d,	// (0x0003a741) popup_note2_window_t1_ParamLimits

0xdb0d,	// (0x0003a741) popup_note2_window_t1

0xdb52,	// (0x0003a786) popup_note2_window_t2_ParamLimits

0xdb52,	// (0x0003a786) popup_note2_window_t2

0xdb97,	// (0x0003a7cb) popup_note2_window_t3_ParamLimits

0xdb97,	// (0x0003a7cb) popup_note2_window_t3

0xdbdc,	// (0x0003a810) popup_note2_window_t4_ParamLimits

0xdbdc,	// (0x0003a810) popup_note2_window_t4

0x399d,	// (0x000305d1) popup_note2_window_t5_ParamLimits

0x399d,	// (0x000305d1) popup_note2_window_t5

0x0004,

0xfc92,	// (0x0003c8c6) popup_note2_window_t_ParamLimits

0xfc92,	// (0x0003c8c6) popup_note2_window_t

0xdc0b,	// (0x0003a83f) popup_note2_image_window_g1_ParamLimits

0xdc0b,	// (0x0003a83f) popup_note2_image_window_g1

0xdc17,	// (0x0003a84b) popup_note2_image_window_g2_ParamLimits

0xdc17,	// (0x0003a84b) popup_note2_image_window_g2

0x0001,

0xfc9d,	// (0x0003c8d1) popup_note2_image_window_g_ParamLimits

0xfc9d,	// (0x0003c8d1) popup_note2_image_window_g

0xdc29,	// (0x0003a85d) popup_note2_image_window_t1_ParamLimits

0xdc29,	// (0x0003a85d) popup_note2_image_window_t1

0xdc41,	// (0x0003a875) popup_note2_image_window_t2_ParamLimits

0xdc41,	// (0x0003a875) popup_note2_image_window_t2

0xdc59,	// (0x0003a88d) popup_note2_image_window_t3_ParamLimits

0xdc59,	// (0x0003a88d) popup_note2_image_window_t3

0x0002,

0xfca2,	// (0x0003c8d6) popup_note2_image_window_t_ParamLimits

0xfca2,	// (0x0003c8d6) popup_note2_image_window_t

0x8291,	// (0x00034ec5) popup_note2_wait_window_g1_ParamLimits

0x8291,	// (0x00034ec5) popup_note2_wait_window_g1

0x829d,	// (0x00034ed1) popup_note2_wait_window_g2_ParamLimits

0x829d,	// (0x00034ed1) popup_note2_wait_window_g2

0x82a9,	// (0x00034edd) popup_note2_wait_window_g3_ParamLimits

0x82a9,	// (0x00034edd) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x0003c4b5) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x0003c4b5) popup_note2_wait_window_g

0xdc75,	// (0x0003a8a9) popup_note2_wait_window_t1_ParamLimits

0xdc75,	// (0x0003a8a9) popup_note2_wait_window_t1

0xdc93,	// (0x0003a8c7) popup_note2_wait_window_t2_ParamLimits

0xdc93,	// (0x0003a8c7) popup_note2_wait_window_t2

0xdcb1,	// (0x0003a8e5) popup_note2_wait_window_t3_ParamLimits

0xdcb1,	// (0x0003a8e5) popup_note2_wait_window_t3

0xdcc3,	// (0x0003a8f7) popup_note2_wait_window_t4_ParamLimits

0xdcc3,	// (0x0003a8f7) popup_note2_wait_window_t4

0x0003,

0xfca9,	// (0x0003c8dd) popup_note2_wait_window_t_ParamLimits

0xfca9,	// (0x0003c8dd) popup_note2_wait_window_t

0xdcd5,	// (0x0003a909) wait_bar2_pane_ParamLimits

0xdcd5,	// (0x0003a909) wait_bar2_pane

0xdced,	// (0x0003a921) popup_snote2_single_text_window_g1_ParamLimits

0xdced,	// (0x0003a921) popup_snote2_single_text_window_g1

0xdd15,	// (0x0003a949) popup_snote2_single_text_window_t1_ParamLimits

0xdd15,	// (0x0003a949) popup_snote2_single_text_window_t1

0xdd61,	// (0x0003a995) popup_snote2_single_text_window_t2_ParamLimits

0xdd61,	// (0x0003a995) popup_snote2_single_text_window_t2

0xddad,	// (0x0003a9e1) popup_snote2_single_text_window_t3_ParamLimits

0xddad,	// (0x0003a9e1) popup_snote2_single_text_window_t3

0xddee,	// (0x0003aa22) popup_snote2_single_text_window_t4_ParamLimits

0xddee,	// (0x0003aa22) popup_snote2_single_text_window_t4

0xde24,	// (0x0003aa58) popup_snote2_single_text_window_t5_ParamLimits

0xde24,	// (0x0003aa58) popup_snote2_single_text_window_t5

0x0004,

0xfcb2,	// (0x0003c8e6) popup_snote2_single_text_window_t_ParamLimits

0xfcb2,	// (0x0003c8e6) popup_snote2_single_text_window_t

0xde4f,	// (0x0003aa83) popup_snote2_single_graphic_window_g1_ParamLimits

0xde4f,	// (0x0003aa83) popup_snote2_single_graphic_window_g1

0xde77,	// (0x0003aaab) popup_snote2_single_graphic_window_g2_ParamLimits

0xde77,	// (0x0003aaab) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbd,	// (0x0003c8f1) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbd,	// (0x0003c8f1) popup_snote2_single_graphic_window_g

0xde9f,	// (0x0003aad3) popup_snote2_single_graphic_window_t1_ParamLimits

0xde9f,	// (0x0003aad3) popup_snote2_single_graphic_window_t1

0xdeeb,	// (0x0003ab1f) popup_snote2_single_graphic_window_t2_ParamLimits

0xdeeb,	// (0x0003ab1f) popup_snote2_single_graphic_window_t2

0xddad,	// (0x0003a9e1) popup_snote2_single_graphic_window_t3_ParamLimits

0xddad,	// (0x0003a9e1) popup_snote2_single_graphic_window_t3

0xddee,	// (0x0003aa22) popup_snote2_single_graphic_window_t4_ParamLimits

0xddee,	// (0x0003aa22) popup_snote2_single_graphic_window_t4

0xde24,	// (0x0003aa58) popup_snote2_single_graphic_window_t5_ParamLimits

0xde24,	// (0x0003aa58) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc2,	// (0x0003c8f6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc2,	// (0x0003c8f6) popup_snote2_single_graphic_window_t

0x96b4,	// (0x000362e8) clock_nsta_pane_cp2_t1

0x96b4,	// (0x000362e8) clock_nsta_pane_cp2_t2

0x0001,

0xfadd,	// (0x0003c711) clock_nsta_pane_cp2_t

0xeaf5,	// (0x0003b729) form_field_data_wide_pane_g1_ParamLimits

0x3e55,	// (0x00030a89) form_field_data_wide_pane_g2_ParamLimits

0x3e55,	// (0x00030a89) form_field_data_wide_pane_g2

0x6cfb,	// (0x0003392f) form_field_data_wide_pane_g3_ParamLimits

0x6cfb,	// (0x0003392f) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0003c2f8) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0003c2f8) form_field_data_wide_pane_g

0xbee5,	// (0x00038b19) grid_touch_3_pane_ParamLimits

0xbee5,	// (0x00038b19) grid_touch_3_pane

0x00bf,	// (0x0002ccf3) cell_touch_3_pane_ParamLimits

0x00bf,	// (0x0002ccf3) cell_touch_3_pane

0xcfcf,	// (0x00039c03) cell_touch_3_pane_g1

0xcfcf,	// (0x00039c03) cell_touch_3_pane_g2

0x0001,

0xfb62,	// (0x0003c796) cell_touch_3_pane_g

0x39cf,	// (0x00030603) cont_query_data_pane

0x39d7,	// (0x0003060b) cont_query_data_pane_cp1

0xdf37,	// (0x0003ab6b) button_value_adjust_pane_cp7

0xdf3f,	// (0x0003ab73) query_popup_pane_cp3

0x7236,	// (0x00033e6a) bg_popup_sub_pane_cp22_ParamLimits

0xaa87,	// (0x000376bb) navi_navi_volume_pane_cp2

0xaa9f,	// (0x000376d3) popup_side_volume_key_window_g2

0xaaab,	// (0x000376df) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003c38a) popup_side_volume_key_window_g

0xaac5,	// (0x000376f9) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0003c391) popup_side_volume_key_window_t

0x7480,	// (0x000340b4) popup_side_volume_key_window_ParamLimits

0xf452,	// (0x0003c086) list_double_graphic_pane_g4_ParamLimits

0xf452,	// (0x0003c086) list_double_graphic_pane_g4

0xede4,	// (0x0003ba18) list_single_2heading_msg_pane_ParamLimits

0xede4,	// (0x0003ba18) list_single_2heading_msg_pane

0xf15f,	// (0x0003bd93) list_single_2heading_msg_pane_g1_ParamLimits

0xf15f,	// (0x0003bd93) list_single_2heading_msg_pane_g1

0x74fd,	// (0x00034131) list_single_2heading_msg_pane_g2_ParamLimits

0x74fd,	// (0x00034131) list_single_2heading_msg_pane_g2

0xf16b,	// (0x0003bd9f) list_single_2heading_msg_pane_g3_ParamLimits

0xf16b,	// (0x0003bd9f) list_single_2heading_msg_pane_g3

0xf177,	// (0x0003bdab) list_single_2heading_msg_pane_g4_ParamLimits

0xf177,	// (0x0003bdab) list_single_2heading_msg_pane_g4

0x0003,

0xfccd,	// (0x0003c901) list_single_2heading_msg_pane_g_ParamLimits

0xfccd,	// (0x0003c901) list_single_2heading_msg_pane_g

0xf18f,	// (0x0003bdc3) list_single_2heading_msg_pane_t1_ParamLimits

0xf18f,	// (0x0003bdc3) list_single_2heading_msg_pane_t1

0xf1b7,	// (0x0003bdeb) list_single_2heading_msg_pane_t2_ParamLimits

0xf1b7,	// (0x0003bdeb) list_single_2heading_msg_pane_t2

0xf1e6,	// (0x0003be1a) list_single_2heading_msg_pane_t3_ParamLimits

0xf1e6,	// (0x0003be1a) list_single_2heading_msg_pane_t3

0xf21f,	// (0x0003be53) list_single_2heading_msg_pane_t4_ParamLimits

0xf21f,	// (0x0003be53) list_single_2heading_msg_pane_t4

0x0003,

0xfcd6,	// (0x0003c90a) list_single_2heading_msg_pane_t_ParamLimits

0xfcd6,	// (0x0003c90a) list_single_2heading_msg_pane_t

0x34a9,	// (0x000300dd) title_pane_g4_ParamLimits

0x34a9,	// (0x000300dd) title_pane_g4

0xa794,	// (0x000373c8) title_pane_stacon_g3_ParamLimits

0xa794,	// (0x000373c8) title_pane_stacon_g3

0xdad0,	// (0x0003a704) list_single_2graphic_im_pane_g4_ParamLimits

0xdad0,	// (0x0003a704) list_single_2graphic_im_pane_g4

0x8b8a,	// (0x000357be) popup_side_volume_key_window_cp

0x904d,	// (0x00035c81) main_idle_act2_pane_t1

0xb5f1,	// (0x00038225) toolbar_button_pane_g10

0xa705,	// (0x00037339) popup_toolbar_window_cp1

0x96a5,	// (0x000362d9) clock_nsta_pane_cp_t1

0x96a5,	// (0x000362d9) clock_nsta_pane_cp_t2

0x0001,

0xfad8,	// (0x0003c70c) clock_nsta_pane_cp_t

0xaa87,	// (0x000376bb) navi_navi_volume_pane_cp2_ParamLimits

0xaa93,	// (0x000376c7) popup_side_volume_key_window_g1_ParamLimits

0xaa9f,	// (0x000376d3) popup_side_volume_key_window_g2_ParamLimits

0xaaab,	// (0x000376df) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003c38a) popup_side_volume_key_window_g_ParamLimits

0xc06f,	// (0x00038ca3) fep_hwr_aid_pane

0xc110,	// (0x00038d44) bg_fep_hwr_top_pane_g4_ParamLimits

0xd02a,	// (0x00039c5e) fep_hwr_top_pane_g1_ParamLimits

0xd03c,	// (0x00039c70) fep_hwr_top_pane_g2_ParamLimits

0xc130,	// (0x00038d64) fep_hwr_top_pane_g3_ParamLimits

0xfb2d,	// (0x0003c761) fep_hwr_top_pane_g_ParamLimits

0xc145,	// (0x00038d79) fep_hwr_top_text_pane_ParamLimits

0x8993,	// (0x000355c7) aid_touch_tab_arrow_arrow_2

0x898a,	// (0x000355be) aid_touch_tab_arrow_left_2

0xc083,	// (0x00038cb7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xc0b6,	// (0x00038cea) fep_hwr_prediction_pane

0xd17b,	// (0x00039daf) fep_vkb_prediction_pane

0xd25d,	// (0x00039e91) fep_vkb_side_pane_g3_ParamLimits

0xd25d,	// (0x00039e91) fep_vkb_side_pane_g3

0xc2b4,	// (0x00038ee8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc31e,	// (0x00038f52) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc32b,	// (0x00038f5f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbdc,	// (0x0003c810) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc45a,	// (0x0003908e) fep_hwr_prediction_pane_g1

0xc464,	// (0x00039098) fep_hwr_prediction_pane_g2

0xc46c,	// (0x000390a0) fep_hwr_prediction_pane_g3

0xc474,	// (0x000390a8) fep_hwr_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0003c913) fep_hwr_prediction_pane_g

0xdf50,	// (0x0003ab84) fep_vkb_prediction_pane_g1

0xdf5a,	// (0x0003ab8e) fep_vkb_prediction_pane_g2

0xdf62,	// (0x0003ab96) fep_vkb_prediction_pane_g3

0xdf6a,	// (0x0003ab9e) fep_vkb_prediction_pane_g4

0x0003,

0xfce8,	// (0x0003c91c) fep_vkb_prediction_pane_g

0xbab4,	// (0x000386e8) slider_set_pane_g3

0xbac8,	// (0x000386fc) slider_set_pane_g4

0xbae0,	// (0x00038714) slider_set_pane_g5

0xbab4,	// (0x000386e8) slider_set_pane_g6

0xbaf6,	// (0x0003872a) slider_set_pane_g7

0x8df3,	// (0x00035a27) slider_form_pane_g3

0x8dfc,	// (0x00035a30) slider_form_pane_g4

0x8e04,	// (0x00035a38) slider_form_pane_g5

0x8df3,	// (0x00035a27) slider_form_pane_g6

0xbc5c,	// (0x00038890) slider_form_pane_g7

0x9296,	// (0x00035eca) slider_set_pane_vc_g3

0x929f,	// (0x00035ed3) slider_set_pane_vc_g4

0x92a8,	// (0x00035edc) slider_set_pane_vc_g5

0x9296,	// (0x00035eca) slider_set_pane_vc_g6

0x92b1,	// (0x00035ee5) slider_set_pane_vc_g7

0x9296,	// (0x00035eca) slider_form_pane_vc_g1

0x929f,	// (0x00035ed3) slider_form_pane_vc_g2

0x92a8,	// (0x00035edc) slider_form_pane_vc_g3

0x9296,	// (0x00035eca) slider_form_pane_vc_g4

0x9445,	// (0x00036079) slider_form_pane_vc_g5

0x0004,

0xfabe,	// (0x0003c6f2) slider_form_pane_vc_g

0x3261,	// (0x0002fe95) main_idle_act3_pane

0xdf72,	// (0x0003aba6) ai3_links_pane

0x0118,	// (0x0002cd4c) popup_ai3_data_window_ParamLimits

0x0118,	// (0x0002cd4c) popup_ai3_data_window

0x3261,	// (0x0002fe95) grid_ai3_links_pane

0x0130,	// (0x0002cd64) cell_ai3_links_pane_ParamLimits

0x0130,	// (0x0002cd64) cell_ai3_links_pane

0xdf7b,	// (0x0003abaf) bg_popup_sub_pane_cp11

0xdf88,	// (0x0003abbc) cell_ai3_links_pane_g1

0x3261,	// (0x0002fe95) bg_popup_sub_pane_cp12

0xdfad,	// (0x0003abe1) heading_ai3_data_pane

0xdfb5,	// (0x0003abe9) list_ai3_gene_pane

0xdfc1,	// (0x0003abf5) popup_ai3_data_window_g1

0xdfc9,	// (0x0003abfd) heading_ai3_data_pane_g1

0xdfd1,	// (0x0003ac05) heading_ai3_data_pane_t1

0xdfdf,	// (0x0003ac13) list_double_ai3_gene_pane_ParamLimits

0xdfdf,	// (0x0003ac13) list_double_ai3_gene_pane

0xdfec,	// (0x0003ac20) list_single_ai3_gene_pane_ParamLimits

0xdfec,	// (0x0003ac20) list_single_ai3_gene_pane

0xcf94,	// (0x00039bc8) list_highlight_pane_cp7_ParamLimits

0xcf94,	// (0x00039bc8) list_highlight_pane_cp7

0xdff9,	// (0x0003ac2d) list_single_a13_gene_pane_t1_ParamLimits

0xdff9,	// (0x0003ac2d) list_single_a13_gene_pane_t1

0xe010,	// (0x0003ac44) list_single_ai3_gene_pane_g1

0xe019,	// (0x0003ac4d) list_single_ai3_gene_pane_g2

0x0001,

0xfcf1,	// (0x0003c925) list_single_ai3_gene_pane_g

0xe021,	// (0x0003ac55) list_double_ai3_gene_pane_g1_ParamLimits

0xe021,	// (0x0003ac55) list_double_ai3_gene_pane_g1

0xe02d,	// (0x0003ac61) list_double_ai3_gene_pane_t1_ParamLimits

0xe02d,	// (0x0003ac61) list_double_ai3_gene_pane_t1

0xe049,	// (0x0003ac7d) list_double_ai3_gene_pane_t2_ParamLimits

0xe049,	// (0x0003ac7d) list_double_ai3_gene_pane_t2

0xe05e,	// (0x0003ac92) list_double_ai3_gene_pane_t3_ParamLimits

0xe05e,	// (0x0003ac92) list_double_ai3_gene_pane_t3

0x0002,

0xfcf6,	// (0x0003c92a) list_double_ai3_gene_pane_t_ParamLimits

0xfcf6,	// (0x0003c92a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf157,	// (0x0003bd8b) aid_size_min_col_2

0x00ec,	// (0x0002cd20) aid_size_min_msg_ParamLimits

0x00ec,	// (0x0002cd20) aid_size_min_msg

0xd357,	// (0x00039f8b) fep_vkb_top_text_pane_g2_ParamLimits

0xd357,	// (0x00039f8b) fep_vkb_top_text_pane_g2

0x0001,

0xfb5d,	// (0x0003c791) fep_vkb_top_text_pane_g_ParamLimits

0xfb5d,	// (0x0003c791) fep_vkb_top_text_pane_g

0x3261,	// (0x0002fe95) main_hc_apps_shell_pane

0xe07b,	// (0x0003acaf) grid_hc_apps_pane_ParamLimits

0xe07b,	// (0x0003acaf) grid_hc_apps_pane

0xe08a,	// (0x0003acbe) list_hc_apps_pane

0xe092,	// (0x0003acc6) scroll_pane_cp37_ParamLimits

0xe092,	// (0x0003acc6) scroll_pane_cp37

0x0144,	// (0x0002cd78) cell_hc_apps_pane_ParamLimits

0x0144,	// (0x0002cd78) cell_hc_apps_pane

0x01d2,	// (0x0002ce06) cell_hc_apps_pane_g1_ParamLimits

0x01d2,	// (0x0002ce06) cell_hc_apps_pane_g1

0xe09e,	// (0x0003acd2) cell_hc_apps_pane_g2_ParamLimits

0xe09e,	// (0x0003acd2) cell_hc_apps_pane_g2

0xe0ba,	// (0x0003acee) cell_hc_apps_pane_g3_ParamLimits

0xe0ba,	// (0x0003acee) cell_hc_apps_pane_g3

0x0002,

0xfcfd,	// (0x0003c931) cell_hc_apps_pane_g_ParamLimits

0xfcfd,	// (0x0003c931) cell_hc_apps_pane_g

0x01ff,	// (0x0002ce33) cell_hc_apps_pane_t1_ParamLimits

0x01ff,	// (0x0002ce33) cell_hc_apps_pane_t1

0x3919,	// (0x0003054d) grid_highlight_pane_cp10_ParamLimits

0x3919,	// (0x0003054d) grid_highlight_pane_cp10

0x023d,	// (0x0002ce71) list_single_hc_apps_pane_ParamLimits

0x023d,	// (0x0002ce71) list_single_hc_apps_pane

0x026d,	// (0x0002cea1) list_single_hc_apps_pane_g1

0x0286,	// (0x0002ceba) list_single_hc_apps_pane_g2

0x0001,

0xfd04,	// (0x0003c938) list_single_hc_apps_pane_g

0x029f,	// (0x0002ced3) list_single_hc_apps_pane_g2_copy1

0xf244,	// (0x0003be78) list_single_hc_apps_pane_t1

0x35c4,	// (0x000301f8) bg_set_opt_pane_cp_ParamLimits

0xa49f,	// (0x000370d3) setting_slider_pane_t1_ParamLimits

0xa4b5,	// (0x000370e9) setting_slider_pane_t2_ParamLimits

0xa4ce,	// (0x00037102) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003c1d6) setting_slider_pane_t_ParamLimits

0xa4e5,	// (0x00037119) slider_set_pane_ParamLimits

0xae0a,	// (0x00037a3e) control_pane_g5_ParamLimits

0xae0a,	// (0x00037a3e) control_pane_g5

0x8dbb,	// (0x000359ef) slider_set_pane_g1_ParamLimits

0xbaa8,	// (0x000386dc) slider_set_pane_g2_ParamLimits

0xbab4,	// (0x000386e8) slider_set_pane_g3_ParamLimits

0xbac8,	// (0x000386fc) slider_set_pane_g4_ParamLimits

0xbae0,	// (0x00038714) slider_set_pane_g5_ParamLimits

0xbab4,	// (0x000386e8) slider_set_pane_g6_ParamLimits

0xbaf6,	// (0x0003872a) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0003c5d1) slider_set_pane_g_ParamLimits

0x35c4,	// (0x000301f8) navi_icon_text_pane_ParamLimits

0xb2e2,	// (0x00037f16) aid_fill_nsta_2_ParamLimits

0xb308,	// (0x00037f3c) aid_touch_tab_arrow_left_ParamLimits

0xb314,	// (0x00037f48) aid_touch_tab_arrow_right_ParamLimits

0xb37e,	// (0x00037fb2) clock_nsta_pane_ParamLimits

0x896c,	// (0x000355a0) navi_icon_pane_g1_ParamLimits

0x8978,	// (0x000355ac) navi_text_pane_t1_ParamLimits

0xbfe5,	// (0x00038c19) navi_icon_text_pane_g1_ParamLimits

0xbff1,	// (0x00038c25) navi_icon_text_pane_t1_ParamLimits

0x026d,	// (0x0002cea1) list_single_hc_apps_pane_g1_ParamLimits

0x0286,	// (0x0002ceba) list_single_hc_apps_pane_g2_ParamLimits

0xfd04,	// (0x0003c938) list_single_hc_apps_pane_g_ParamLimits

0x029f,	// (0x0002ced3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf244,	// (0x0003be78) list_single_hc_apps_pane_t1_ParamLimits

0xa313,	// (0x00036f47) popup_toolbar2_fixed_window_ParamLimits

0xa313,	// (0x00036f47) popup_toolbar2_fixed_window

0xb273,	// (0x00037ea7) popup_toolbar2_float_window

0x3261,	// (0x0002fe95) bg_popup_sub_pane_cp27

0xe0dc,	// (0x0003ad10) grid_toolbar2_float_pane

0x3261,	// (0x0002fe95) bg_popup_sub_pane_cp26

0xe0dc,	// (0x0003ad10) grid_toolbar2_fixed_pane

0x02bb,	// (0x0002ceef) cell_toolbar2_fixed_pane_ParamLimits

0x02bb,	// (0x0002ceef) cell_toolbar2_fixed_pane

0x02cc,	// (0x0002cf00) cell_toolbar2_fixed_pane_g1

0xe0e4,	// (0x0003ad18) toolbar2_fixed_button_pane

0x7b96,	// (0x000347ca) toolbar2_fixed_button_pane_g1

0x7b9e,	// (0x000347d2) toolbar2_fixed_button_pane_g2

0x7ba6,	// (0x000347da) toolbar2_fixed_button_pane_g3

0x7bae,	// (0x000347e2) toolbar2_fixed_button_pane_g4

0x7bb6,	// (0x000347ea) toolbar2_fixed_button_pane_g5

0x7bbe,	// (0x000347f2) toolbar2_fixed_button_pane_g6

0x7bc6,	// (0x000347fa) toolbar2_fixed_button_pane_g7

0x7bce,	// (0x00034802) toolbar2_fixed_button_pane_g8

0x7bd6,	// (0x0003480a) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0003c4d3) toolbar2_fixed_button_pane_g

0xe0ec,	// (0x0003ad20) cell_toolbar2_float_pane_ParamLimits

0xe0ec,	// (0x0003ad20) cell_toolbar2_float_pane

0xe0fd,	// (0x0003ad31) cell_toolbar2_float_pane_g1

0xe0e4,	// (0x0003ad18) toolbar2_fixed_button_pane_cp

0xd0ea,	// (0x00039d1e) fep_vkb_accented_list_pane_ParamLimits

0xd0ea,	// (0x00039d1e) fep_vkb_accented_list_pane

0xc294,	// (0x00038ec8) bg_popup_fep_shadow_pane_g9

0x7688,	// (0x000342bc) bg_popup_fep_shadow_pane_cp3

0x6e0b,	// (0x00033a3f) list_accented_list_pane

0xe106,	// (0x0003ad3a) list_single_accented_list_pane_ParamLimits

0xe106,	// (0x0003ad3a) list_single_accented_list_pane

0x7688,	// (0x000342bc) list_highlight_pane_cp10

0xe117,	// (0x0003ad4b) list_single_accented_list_pane_t1

0xb1e1,	// (0x00037e15) popup_slider_window_ParamLimits

0xb1e1,	// (0x00037e15) popup_slider_window

0xdf47,	// (0x0003ab7b) aid_indentation_list_msg

0x0367,	// (0x0002cf9b) bg_popup_window_pane_cp19

0xe17d,	// (0x0003adb1) popup_slider_window_g1

0xe199,	// (0x0003adcd) popup_slider_window_g2

0xe1b5,	// (0x0003ade9) popup_slider_window_g3

0x0005,

0xfd09,	// (0x0003c93d) popup_slider_window_g

0xe1d1,	// (0x0003ae05) popup_slider_window_t1

0xe215,	// (0x0003ae49) small_volume_slider_vertical_pane

0xcfcf,	// (0x00039c03) small_volume_slider_vertical_pane_g1

0xcfcf,	// (0x00039c03) small_volume_slider_vertical_pane_g2

0xe231,	// (0x0003ae65) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1b,	// (0x0003c94f) small_volume_slider_vertical_pane_g

0xa187,	// (0x00036dbb) area_side_right_pane_ParamLimits

0xa187,	// (0x00036dbb) area_side_right_pane

0xc47c,	// (0x000390b0) aid_size_side_button_ParamLimits

0xc47c,	// (0x000390b0) aid_size_side_button

0xc490,	// (0x000390c4) grid_sctrl_middle_pane_ParamLimits

0xc490,	// (0x000390c4) grid_sctrl_middle_pane

0xc4ac,	// (0x000390e0) sctrl_sk_bottom_pane

0xc4bd,	// (0x000390f1) sctrl_sk_top_pane

0xc4cf,	// (0x00039103) aid_touch_sctrl_top

0xc4dc,	// (0x00039110) bg_sctrl_sk_pane_ParamLimits

0xc4dc,	// (0x00039110) bg_sctrl_sk_pane

0xc4ea,	// (0x0003911e) sctrl_sk_top_pane_g1

0xc4f7,	// (0x0003912b) sctrl_sk_top_pane_t1

0xc4cf,	// (0x00039103) aid_touch_sctrl_bottom

0xc4dc,	// (0x00039110) bg_sctrl_sk_pane_cp_ParamLimits

0xc4dc,	// (0x00039110) bg_sctrl_sk_pane_cp

0xc512,	// (0x00039146) sctrl_sk_bottom_pane_g1

0xc4f7,	// (0x0003912b) sctrl_sk_bottom_pane_t1

0xc51b,	// (0x0003914f) cell_sctrl_middle_pane_ParamLimits

0xc51b,	// (0x0003914f) cell_sctrl_middle_pane

0xc536,	// (0x0003916a) aid_touch_sctrl_middle_ParamLimits

0xc536,	// (0x0003916a) aid_touch_sctrl_middle

0xc547,	// (0x0003917b) bg_sctrl_middle_pane_ParamLimits

0xc547,	// (0x0003917b) bg_sctrl_middle_pane

0xc2b4,	// (0x00038ee8) cell_sctrl_middle_pane_g1_ParamLimits

0xc2b4,	// (0x00038ee8) cell_sctrl_middle_pane_g1

0xc555,	// (0x00039189) cell_sctrl_middle_pane_g2_ParamLimits

0xc555,	// (0x00039189) cell_sctrl_middle_pane_g2

0x0001,

0xfd27,	// (0x0003c95b) cell_sctrl_middle_pane_g_ParamLimits

0xfd27,	// (0x0003c95b) cell_sctrl_middle_pane_g

0x7b96,	// (0x000347ca) bg_sctrl_middle_pane_g1

0x7ba6,	// (0x000347da) bg_sctrl_middle_pane_g2

0x7b9e,	// (0x000347d2) bg_sctrl_middle_pane_g3

0x7bb6,	// (0x000347ea) bg_sctrl_middle_pane_g4

0x7bae,	// (0x000347e2) bg_sctrl_middle_pane_g5

0x7bbe,	// (0x000347f2) bg_sctrl_middle_pane_g6

0x7bc6,	// (0x000347fa) bg_sctrl_middle_pane_g7

0x7bd6,	// (0x0003480a) bg_sctrl_middle_pane_g8

0x0007,

0xfd2c,	// (0x0003c960) bg_sctrl_middle_pane_g

0x7bce,	// (0x00034802) bg_sctrl_middle_pane_g8_copy1

0x7b96,	// (0x000347ca) bg_sctrl_sk_pane_g1

0x7b9e,	// (0x000347d2) bg_sctrl_sk_pane_g2

0x7ba6,	// (0x000347da) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0003c4d3) bg_sctrl_sk_pane_g

0x3d6f,	// (0x000309a3) aid_size_touch_scroll_bar

0x7bae,	// (0x000347e2) bg_sctrl_sk_pane_g4

0x7bb6,	// (0x000347ea) bg_sctrl_sk_pane_g5

0x7bbe,	// (0x000347f2) bg_sctrl_sk_pane_g6

0x7bc6,	// (0x000347fa) bg_sctrl_sk_pane_g7

0x7bce,	// (0x00034802) bg_sctrl_sk_pane_g8

0x7bd6,	// (0x0003480a) bg_sctrl_sk_pane_g9

0x790c,	// (0x00034540) popup_fep_china_hwr2_fs_candidate_window

0xaf9d,	// (0x00037bd1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaf9d,	// (0x00037bd1) popup_fep_china_hwr2_fs_control_window

0xc2b4,	// (0x00038ee8) sctrl_sk_top_pane_g2

0x0001,

0xfd22,	// (0x0003c956) sctrl_sk_top_pane_g

0x04b4,	// (0x0002d0e8) aid_fep_china_hwr2_fs_cell_ParamLimits

0x04b4,	// (0x0002d0e8) aid_fep_china_hwr2_fs_cell

0x04c5,	// (0x0002d0f9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x04c5,	// (0x0002d0f9) bg_popup_fep_shadow_pane_cp4

0x04dc,	// (0x0002d110) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x04dc,	// (0x0002d110) bg_popup_fep_shadow_pane_cp5

0x04ee,	// (0x0002d122) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x04ee,	// (0x0002d122) popup_fep_china_hwr2_fs_control_bar_grid

0x04fe,	// (0x0002d132) popup_fep_china_hwr2_fs_control_funtion_grid

0xe23a,	// (0x0003ae6e) aid_fep_china_hwr2_fs_candi_cell

0x3261,	// (0x0002fe95) bg_popup_fep_shadow_pane_cp6

0xe244,	// (0x0003ae78) popup_fep_china_hwr2_fs_candidate_grid

0x0506,	// (0x0002d13a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0506,	// (0x0002d13a) cell_fep_china_hwr2_fs_funtion_grid

0xcfcf,	// (0x00039c03) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xe24c,	// (0x0003ae80) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xe24c,	// (0x0003ae80) cell_fep_china_hwr2_fs_funtion_grid_g1

0xe25a,	// (0x0003ae8e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xe25a,	// (0x0003ae8e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3d,	// (0x0003c971) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3d,	// (0x0003c971) cell_fep_china_hwr2_fs_funtion_grid_g

0x051e,	// (0x0002d152) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x051e,	// (0x0002d152) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0533,	// (0x0002d167) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0533,	// (0x0002d167) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd42,	// (0x0003c976) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd42,	// (0x0003c976) cell_fep_china_hwr2_fs_funtion_grid_t

0xe270,	// (0x0003aea4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xe278,	// (0x0003aeac) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xe280,	// (0x0003aeb4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd47,	// (0x0003c97b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xe288,	// (0x0003aebc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xe288,	// (0x0003aebc) cell_fep_china_hwr2_fs_candidate_grid

0xe2a1,	// (0x0003aed5) popup_fep_china_hwr2_fs_candidate_grid_g20

0xe2a9,	// (0x0003aedd) popup_fep_china_hwr2_fs_candidate_grid_g21

0xcfcf,	// (0x00039c03) cell_fep_china_hwr2_fs_candidate_grid_g1

0xcfcf,	// (0x00039c03) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb62,	// (0x0003c796) cell_fep_china_hwr2_fs_candidate_grid_g

0xe2b1,	// (0x0003aee5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x79fb,	// (0x0003462f) clock_nsta_pane_cp_24_ParamLimits

0x79fb,	// (0x0003462f) clock_nsta_pane_cp_24

0x7a58,	// (0x0003468c) indicator_nsta_pane_cp_24_ParamLimits

0x7a58,	// (0x0003468c) indicator_nsta_pane_cp_24

0x8877,	// (0x000354ab) heading_pane_g1

0x0001,

0xf904,	// (0x0003c538) heading_pane_g

0xbd1a,	// (0x0003894e) grid_sct_catagory_button_pane

0x8072,	// (0x00034ca6) scroll_pane_cp5_ParamLimits

0xcc7c,	// (0x000398b0) button_value_adjust_pane_cp5_ParamLimits

0xcc7c,	// (0x000398b0) button_value_adjust_pane_cp5

0xcd59,	// (0x0003998d) form2_midp_time_pane_ParamLimits

0xe2bf,	// (0x0003aef3) cell_sct_catagory_button_pane_ParamLimits

0xe2bf,	// (0x0003aef3) cell_sct_catagory_button_pane

0xcf94,	// (0x00039bc8) bg_button_pane_cp01_ParamLimits

0xcf94,	// (0x00039bc8) bg_button_pane_cp01

0xcfcf,	// (0x00039c03) cell_sct_catagory_button_pane_g1

0xb210,	// (0x00037e44) popup_tb_extension_window

0x054f,	// (0x0002d183) aid_size_cell_ext_ParamLimits

0x054f,	// (0x0002d183) aid_size_cell_ext

0x3919,	// (0x0003054d) bg_tb_trans_pane_cp1_ParamLimits

0x3919,	// (0x0003054d) bg_tb_trans_pane_cp1

0x056f,	// (0x0002d1a3) grid_tb_ext_pane_ParamLimits

0x056f,	// (0x0002d1a3) grid_tb_ext_pane

0x0595,	// (0x0002d1c9) cell_tb_ext_pane_ParamLimits

0x0595,	// (0x0002d1c9) cell_tb_ext_pane

0x05aa,	// (0x0002d1de) cell_tb_ext_pane_g1_ParamLimits

0x05aa,	// (0x0002d1de) cell_tb_ext_pane_g1

0xe2d1,	// (0x0003af05) cell_tb_ext_pane_t1

0x3919,	// (0x0003054d) list_highlight_pane_cp11_ParamLimits

0x3919,	// (0x0003054d) list_highlight_pane_cp11

0xa332,	// (0x00036f66) popup_uni_indicator_window_ParamLimits

0xa332,	// (0x00036f66) popup_uni_indicator_window

0x6ce1,	// (0x00033915) bg_popup_sub_pane_cp14

0xe2ec,	// (0x0003af20) list_uniindi_pane

0xe2f8,	// (0x0003af2c) uniindi_top_pane

0x3919,	// (0x0003054d) bg_uniindi_top_pane

0xe317,	// (0x0003af4b) uniindi_top_pane_g1

0xe32d,	// (0x0003af61) uniindi_top_pane_g2

0x0003,

0xfd4e,	// (0x0003c982) uniindi_top_pane_g

0xe357,	// (0x0003af8b) uniindi_top_pane_t1

0xe381,	// (0x0003afb5) list_single_uniindi_pane_ParamLimits

0xe381,	// (0x0003afb5) list_single_uniindi_pane

0xcfcf,	// (0x00039c03) bg_uniindi_top_pane_g1

0xe393,	// (0x0003afc7) list_single_uniindi_pane_g1

0xe3a6,	// (0x0003afda) list_single_uniindi_pane_t1

0xa1d0,	// (0x00036e04) control_bg_pane

0xe3cb,	// (0x0003afff) bg_sctrl_sk_pane_cp1

0xe3d4,	// (0x0003b008) bg_sctrl_sk_pane_cp2

0xe3dd,	// (0x0003b011) control_bg_pane_g1

0xe3e6,	// (0x0003b01a) control_bg_pane_g2

0x0001,

0xfd57,	// (0x0003c98b) control_bg_pane_g

0x9619,	// (0x0003624d) cell_indicator_nsta_pane_g1_ParamLimits

0xbf29,	// (0x00038b5d) cell_indicator_nsta_pane_g2_ParamLimits

0xfad3,	// (0x0003c707) cell_indicator_nsta_pane_g_ParamLimits

0xefad,	// (0x0003bbe1) form2_midp_time_pane_t1_ParamLimits

0x3c4d,	// (0x00030881) main_idle_act4_pane_ParamLimits

0x3c4d,	// (0x00030881) main_idle_act4_pane

0xb210,	// (0x00037e44) popup_tb_extension_window_ParamLimits

0x0589,	// (0x0002d1bd) tb_ext_find_pane_ParamLimits

0x0589,	// (0x0002d1bd) tb_ext_find_pane

0xe3ef,	// (0x0003b023) ai_gene_pane_1_cp1

0x771c,	// (0x00034350) ai_gene_pane_2_cp1

0xe3f7,	// (0x0003b02b) list_single_idle_plugin_calendar_pane

0xe400,	// (0x0003b034) list_single_idle_plugin_notification_pane

0xe409,	// (0x0003b03d) list_single_idle_plugin_player_pane

0x05c7,	// (0x0002d1fb) list_single_idle_plugin_shortcut_pane_ParamLimits

0x05c7,	// (0x0002d1fb) list_single_idle_plugin_shortcut_pane

0x05e9,	// (0x0002d21d) main_idle_act4_pane_t1

0x05fb,	// (0x0002d22f) main_idle_act4_pane_t2

0x0001,

0xfd5c,	// (0x0003c990) main_idle_act4_pane_t

0x060d,	// (0x0002d241) middle_sk_idle_act4_pane_ParamLimits

0x060d,	// (0x0002d241) middle_sk_idle_act4_pane

0x0623,	// (0x0002d257) popup_clock_digital_analogue_window_cp2

0x063d,	// (0x0002d271) shortcut_wheel_idle_act4_pane_ParamLimits

0x063d,	// (0x0002d271) shortcut_wheel_idle_act4_pane

0xcfcf,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g1

0xcfcf,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g2

0xcfcf,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g3

0xcfcf,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g4

0xcfcf,	// (0x00039c03) shortcut_wheel_idle_act4_pane_g5

0xe412,	// (0x0003b046) shortcut_wheel_idle_act4_pane_g6

0xe41a,	// (0x0003b04e) shortcut_wheel_idle_act4_pane_g7

0xe422,	// (0x0003b056) shortcut_wheel_idle_act4_pane_g8

0xe42a,	// (0x0003b05e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd61,	// (0x0003c995) shortcut_wheel_idle_act4_pane_g

0xd209,	// (0x00039e3d) middle_sk_idle_act4_pane_g1_ParamLimits

0xd209,	// (0x00039e3d) middle_sk_idle_act4_pane_g1

0x06ad,	// (0x0002d2e1) middle_sk_idle_act4_pane_g2_ParamLimits

0x06ad,	// (0x0002d2e1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd84,	// (0x0003c9b8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd84,	// (0x0003c9b8) middle_sk_idle_act4_pane_g

0x06b9,	// (0x0002d2ed) middle_sk_idle_act4_pane_t1_ParamLimits

0x06b9,	// (0x0002d2ed) middle_sk_idle_act4_pane_t1

0x06d6,	// (0x0002d30a) grid_ai_shortcut_pane_ParamLimits

0x06d6,	// (0x0002d30a) grid_ai_shortcut_pane

0x06ef,	// (0x0002d323) list_highlight_pane_cp16_ParamLimits

0x06ef,	// (0x0002d323) list_highlight_pane_cp16

0x06fc,	// (0x0002d330) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x06fc,	// (0x0002d330) list_single_idle_plugin_shortcut_pane_g1

0x0708,	// (0x0002d33c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x0708,	// (0x0002d33c) list_single_idle_plugin_shortcut_pane_g2

0x0720,	// (0x0002d354) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x0720,	// (0x0002d354) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd89,	// (0x0003c9bd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd89,	// (0x0003c9bd) list_single_idle_plugin_shortcut_pane_g

0x0733,	// (0x0002d367) cell_ai_shortcut_pane_ParamLimits

0x0733,	// (0x0002d367) cell_ai_shortcut_pane

0x0754,	// (0x0002d388) cell_ai_shortcut_pane_g1_ParamLimits

0x0754,	// (0x0002d388) cell_ai_shortcut_pane_g1

0xe3ef,	// (0x0003b023) ai_gene_pane_1_cp2

0xe432,	// (0x0003b066) ai_gene_pane_2_cp2

0xe43a,	// (0x0003b06e) list_highlight_pane_cp15

0xe443,	// (0x0003b077) list_single_idle_plugin_calendar_pane_g1

0xe43a,	// (0x0003b06e) list_highlight_pane_cp17

0xe44b,	// (0x0003b07f) list_single_idle_plugin_calendar_pane_g1_copy1

0xe453,	// (0x0003b087) list_single_idle_plugin_player_pane_g1

0x90d9,	// (0x00035d0d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd90,	// (0x0003c9c4) list_single_idle_plugin_player_pane_g

0xe45b,	// (0x0003b08f) list_single_idle_plugin_player_pane_t1

0xe469,	// (0x0003b09d) list_single_idle_plugin_player_pane_t2

0xe477,	// (0x0003b0ab) list_single_idle_plugin_player_pane_t3

0xe485,	// (0x0003b0b9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd95,	// (0x0003c9c9) list_single_idle_plugin_player_pane_t

0xe493,	// (0x0003b0c7) wait_bar_pane_cp15

0xe49b,	// (0x0003b0cf) grid_ai_notification_pane

0x90d9,	// (0x00035d0d) list_single_idle_plugin_notification_pane_g1

0x0776,	// (0x0002d3aa) cell_ai_notification_pane_ParamLimits

0x0776,	// (0x0002d3aa) cell_ai_notification_pane

0xe4a4,	// (0x0003b0d8) cell_ai_notification_pane_g1

0xe4ac,	// (0x0003b0e0) cell_ai_notification_pane_t1

0x0783,	// (0x0002d3b7) tb_ext_find_button_pane

0x078b,	// (0x0002d3bf) tb_ext_find_pane_g1

0x0793,	// (0x0002d3c7) tb_ext_find_pane_t1

0x71fb,	// (0x00033e2f) tb_ext_find_button_pane_g1

0xe4ba,	// (0x0003b0ee) tb_ext_find_button_pane_g2

0x0001,

0xfd9e,	// (0x0003c9d2) tb_ext_find_button_pane_g

0x05e9,	// (0x0002d21d) main_idle_act4_pane_t1_ParamLimits

0x05fb,	// (0x0002d22f) main_idle_act4_pane_t2_ParamLimits

0xfd5c,	// (0x0003c990) main_idle_act4_pane_t_ParamLimits

0x0623,	// (0x0002d257) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0631,	// (0x0002d265) sat_plugin_idle_act4_pane_ParamLimits

0x0631,	// (0x0002d265) sat_plugin_idle_act4_pane

0x07a1,	// (0x0002d3d5) sat_plugin_idle_act4_pane_t1_ParamLimits

0x07a1,	// (0x0002d3d5) sat_plugin_idle_act4_pane_t1

0x07b4,	// (0x0002d3e8) sat_plugin_idle_act4_pane_t2_ParamLimits

0x07b4,	// (0x0002d3e8) sat_plugin_idle_act4_pane_t2

0x07c7,	// (0x0002d3fb) sat_plugin_idle_act4_pane_t3_ParamLimits

0x07c7,	// (0x0002d3fb) sat_plugin_idle_act4_pane_t3

0x07da,	// (0x0002d40e) sat_plugin_idle_act4_pane_t4_ParamLimits

0x07da,	// (0x0002d40e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda3,	// (0x0003c9d7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda3,	// (0x0003c9d7) sat_plugin_idle_act4_pane_t

0xa293,	// (0x00036ec7) popup_battery_window_ParamLimits

0xa293,	// (0x00036ec7) popup_battery_window

0x3919,	// (0x0003054d) bg_popup_sub_pane_cp25_ParamLimits

0x3919,	// (0x0003054d) bg_popup_sub_pane_cp25

0xe4c3,	// (0x0003b0f7) popup_battery_window_g1_ParamLimits

0xe4c3,	// (0x0003b0f7) popup_battery_window_g1

0xe4cf,	// (0x0003b103) popup_battery_window_t1_ParamLimits

0xe4cf,	// (0x0003b103) popup_battery_window_t1

0xe4e1,	// (0x0003b115) popup_battery_window_t2_ParamLimits

0xe4e1,	// (0x0003b115) popup_battery_window_t2

0x0001,

0xfdac,	// (0x0003c9e0) popup_battery_window_t_ParamLimits

0xfdac,	// (0x0003c9e0) popup_battery_window_t

0xac72,	// (0x000378a6) midp_canvas_pane_ParamLimits

0xacce,	// (0x00037902) midp_keypad_pane_ParamLimits

0xacce,	// (0x00037902) midp_keypad_pane

0x6e5d,	// (0x00033a91) main_midp_pane_ParamLimits

0x96c3,	// (0x000362f7) signal_pane_g2_cp_ParamLimits

0x07ed,	// (0x0002d421) aid_size_cell_midp_keypad_ParamLimits

0x07ed,	// (0x0002d421) aid_size_cell_midp_keypad

0x0807,	// (0x0002d43b) midp_keyp_game_grid_pane_ParamLimits

0x0807,	// (0x0002d43b) midp_keyp_game_grid_pane

0x0821,	// (0x0002d455) midp_keyp_rocker_pane_ParamLimits

0x0821,	// (0x0002d455) midp_keyp_rocker_pane

0x084e,	// (0x0002d482) midp_keyp_sk_left_pane_ParamLimits

0x084e,	// (0x0002d482) midp_keyp_sk_left_pane

0x08a6,	// (0x0002d4da) midp_keyp_sk_right_pane_ParamLimits

0x08a6,	// (0x0002d4da) midp_keyp_sk_right_pane

0x3261,	// (0x0002fe95) bg_button_pane_cp03

0x08f8,	// (0x0002d52c) midp_keyp_sk_left_pane_g1

0x3261,	// (0x0002fe95) bg_button_pane_cp04

0x08f8,	// (0x0002d52c) midp_keyp_sk_right_pane_g1

0xcfcf,	// (0x00039c03) midp_keyp_rocker_pane_g1

0x0901,	// (0x0002d535) keyp_game_cell_pane_ParamLimits

0x0901,	// (0x0002d535) keyp_game_cell_pane

0x3261,	// (0x0002fe95) bg_button_pane_cp02

0x0912,	// (0x0002d546) keyp_game_cell_pane_g1

0xa2c9,	// (0x00036efd) popup_fep_vkb2_window_ParamLimits

0xa2c9,	// (0x00036efd) popup_fep_vkb2_window

0xc579,	// (0x000391ad) aid_size_cell_vkb2_ParamLimits

0xc579,	// (0x000391ad) aid_size_cell_vkb2

0xc5cd,	// (0x00039201) popup_fep_vkb2_window_g1_ParamLimits

0xc5cd,	// (0x00039201) popup_fep_vkb2_window_g1

0xc615,	// (0x00039249) vkb2_area_bottom_pane_ParamLimits

0xc615,	// (0x00039249) vkb2_area_bottom_pane

0xc64d,	// (0x00039281) vkb2_area_keypad_pane_ParamLimits

0xc64d,	// (0x00039281) vkb2_area_keypad_pane

0xc685,	// (0x000392b9) vkb2_area_top_pane_ParamLimits

0xc685,	// (0x000392b9) vkb2_area_top_pane

0xc6f5,	// (0x00039329) vkb2_top_entry_pane_ParamLimits

0xc6f5,	// (0x00039329) vkb2_top_entry_pane

0xc71f,	// (0x00039353) vkb2_top_grid_left_pane_ParamLimits

0xc71f,	// (0x00039353) vkb2_top_grid_left_pane

0xc73d,	// (0x00039371) vkb2_top_grid_right_pane_ParamLimits

0xc73d,	// (0x00039371) vkb2_top_grid_right_pane

0xc75b,	// (0x0003938f) vkb2_cell_keypad_pane_ParamLimits

0xc75b,	// (0x0003938f) vkb2_cell_keypad_pane

0xc80c,	// (0x00039440) vkb2_area_bottom_grid_pane_ParamLimits

0xc80c,	// (0x00039440) vkb2_area_bottom_grid_pane

0xc830,	// (0x00039464) vkb2_area_bottom_pane_g1_ParamLimits

0xc830,	// (0x00039464) vkb2_area_bottom_pane_g1

0xc854,	// (0x00039488) vkb2_area_bottom_pane_g2_ParamLimits

0xc854,	// (0x00039488) vkb2_area_bottom_pane_g2

0xc882,	// (0x000394b6) vkb2_area_bottom_pane_g3_ParamLimits

0xc882,	// (0x000394b6) vkb2_area_bottom_pane_g3

0x0002,

0xfdb1,	// (0x0003c9e5) vkb2_area_bottom_pane_g_ParamLimits

0xfdb1,	// (0x0003c9e5) vkb2_area_bottom_pane_g

0xc8d3,	// (0x00039507) vkb2_top_cell_left_pane_ParamLimits

0xc8d3,	// (0x00039507) vkb2_top_cell_left_pane

0x0ca3,	// (0x0002d8d7) vkb2_top_entry_pane_g1_ParamLimits

0x0ca3,	// (0x0002d8d7) vkb2_top_entry_pane_g1

0x0cb1,	// (0x0002d8e5) vkb2_top_entry_pane_t1_ParamLimits

0x0cb1,	// (0x0002d8e5) vkb2_top_entry_pane_t1

0xe506,	// (0x0003b13a) vkb2_top_entry_pane_t2_ParamLimits

0xe506,	// (0x0003b13a) vkb2_top_entry_pane_t2

0xe538,	// (0x0003b16c) vkb2_top_entry_pane_t3_ParamLimits

0xe538,	// (0x0003b16c) vkb2_top_entry_pane_t3

0x0002,

0xfdb8,	// (0x0003c9ec) vkb2_top_entry_pane_t_ParamLimits

0xfdb8,	// (0x0003c9ec) vkb2_top_entry_pane_t

0xc920,	// (0x00039554) vkb2_top_grid_right_pane_g1_ParamLimits

0xc920,	// (0x00039554) vkb2_top_grid_right_pane_g1

0xc936,	// (0x0003956a) vkb2_top_grid_right_pane_g2_ParamLimits

0xc936,	// (0x0003956a) vkb2_top_grid_right_pane_g2

0xc94e,	// (0x00039582) vkb2_top_grid_right_pane_g3_ParamLimits

0xc94e,	// (0x00039582) vkb2_top_grid_right_pane_g3

0xc966,	// (0x0003959a) vkb2_top_grid_right_pane_g4_ParamLimits

0xc966,	// (0x0003959a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbf,	// (0x0003c9f3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbf,	// (0x0003c9f3) vkb2_top_grid_right_pane_g

0xc97c,	// (0x000395b0) vkb2_top_cell_left_pane_g1

0xc993,	// (0x000395c7) vkb2_cell_keypad_pane_g1_ParamLimits

0xc993,	// (0x000395c7) vkb2_cell_keypad_pane_g1

0xe54e,	// (0x0003b182) vkb2_cell_keypad_pane_t1_ParamLimits

0xe54e,	// (0x0003b182) vkb2_cell_keypad_pane_t1

0xc9a1,	// (0x000395d5) vkb2_cell_bottom_grid_pane_ParamLimits

0xc9a1,	// (0x000395d5) vkb2_cell_bottom_grid_pane

0xc9da,	// (0x0003960e) vkb2_cell_bottom_grid_pane_g1

0x0651,	// (0x0002d285) aid_call2_pane_cp02

0x0659,	// (0x0002d28d) aid_call_pane_cp02

0x0661,	// (0x0002d295) clock_digital_number_pane_cp10

0x0669,	// (0x0002d29d) clock_digital_number_pane_cp11

0x0671,	// (0x0002d2a5) clock_digital_number_pane_cp12

0x0679,	// (0x0002d2ad) clock_digital_number_pane_cp13

0x0681,	// (0x0002d2b5) clock_digital_separator_pane_cp10

0x71fb,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g1

0x71fb,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g2

0x0689,	// (0x0002d2bd) popup_clock_digital_analogue_window_cp2_g3

0x71fb,	// (0x00033e2f) popup_clock_digital_analogue_window_cp2_g4

0x0689,	// (0x0002d2bd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd74,	// (0x0003c9a8) popup_clock_digital_analogue_window_cp2_g

0x0691,	// (0x0002d2c5) popup_clock_digital_analogue_window_cp2_t1

0x069f,	// (0x0002d2d3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7f,	// (0x0003c9b3) popup_clock_digital_analogue_window_cp2_t

0xcfcf,	// (0x00039c03) clock_digital_number_pane_cp10_g1

0xcfcf,	// (0x00039c03) clock_digital_number_pane_cp10_g2

0x0001,

0xfb62,	// (0x0003c796) clock_digital_number_pane_cp10_g

0xcfcf,	// (0x00039c03) clock_digital_separator_pane_cp10_g1

0xcfcf,	// (0x00039c03) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb62,	// (0x0003c796) clock_digital_separator_pane_cp10_g

0xe339,	// (0x0003af6d) uniindi_top_pane_g3

0xe34a,	// (0x0003af7e) uniindi_top_pane_g4

0xc7c6,	// (0x000393fa) vkb2_row_keypad_pane_ParamLimits

0xc7c6,	// (0x000393fa) vkb2_row_keypad_pane

0xc9f6,	// (0x0003962a) vkb2_cell_t_keypad_pane_ParamLimits

0xc9f6,	// (0x0003962a) vkb2_cell_t_keypad_pane

0xca03,	// (0x00039637) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xca03,	// (0x00039637) vkb2_cell_t_keypad_pane_cp08

0xca13,	// (0x00039647) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xca13,	// (0x00039647) vkb2_cell_t_keypad_pane_cp09

0xca24,	// (0x00039658) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xca24,	// (0x00039658) vkb2_cell_t_keypad_pane_cp01

0xca34,	// (0x00039668) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xca34,	// (0x00039668) vkb2_cell_t_keypad_pane_cp02

0xca44,	// (0x00039678) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xca44,	// (0x00039678) vkb2_cell_t_keypad_pane_cp03

0xca54,	// (0x00039688) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xca54,	// (0x00039688) vkb2_cell_t_keypad_pane_cp04

0xca64,	// (0x00039698) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xca64,	// (0x00039698) vkb2_cell_t_keypad_pane_cp05

0xca74,	// (0x000396a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xca74,	// (0x000396a8) vkb2_cell_t_keypad_pane_cp06

0xca84,	// (0x000396b8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xca84,	// (0x000396b8) vkb2_cell_t_keypad_pane_cp07

0xca94,	// (0x000396c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xca94,	// (0x000396c8) vkb2_cell_t_keypad_pane_cp10

0xc2b4,	// (0x00038ee8) vkb2_cell_t_keypad_pane_g1

0xe565,	// (0x0003b199) vkb2_cell_t_keypad_pane_t1

0xa1d0,	// (0x00036e04) popup_grid_graphic2_window

0x0e99,	// (0x0002dacd) aid_size_cell_graphic2_ParamLimits

0x0e99,	// (0x0002dacd) aid_size_cell_graphic2

0xe577,	// (0x0003b1ab) bg_popup_window_pane_cp21_ParamLimits

0xe577,	// (0x0003b1ab) bg_popup_window_pane_cp21

0x0ec5,	// (0x0002daf9) graphic2_pages_pane_ParamLimits

0x0ec5,	// (0x0002daf9) graphic2_pages_pane

0x0eff,	// (0x0002db33) grid_graphic2_control_pane_ParamLimits

0x0eff,	// (0x0002db33) grid_graphic2_control_pane

0x0f27,	// (0x0002db5b) grid_graphic2_pane_ParamLimits

0x0f27,	// (0x0002db5b) grid_graphic2_pane

0x0f77,	// (0x0002dbab) cell_graphic2_pane

0x3261,	// (0x0002fe95) main_comp_mode_pane

0xdfb5,	// (0x0003abe9) list_ai3_gene_pane_ParamLimits

0x0367,	// (0x0002cf9b) bg_popup_window_pane_cp19_ParamLimits

0xe125,	// (0x0003ad59) bg_touch_area_indi_pane_ParamLimits

0xe125,	// (0x0003ad59) bg_touch_area_indi_pane

0xe13b,	// (0x0003ad6f) bg_touch_area_indi_pane_cp01_ParamLimits

0xe13b,	// (0x0003ad6f) bg_touch_area_indi_pane_cp01

0xe151,	// (0x0003ad85) bg_touch_area_indi_pane_cp02_ParamLimits

0xe151,	// (0x0003ad85) bg_touch_area_indi_pane_cp02

0xe167,	// (0x0003ad9b) bg_touch_area_indi_pane_cp03_ParamLimits

0xe167,	// (0x0003ad9b) bg_touch_area_indi_pane_cp03

0xe17d,	// (0x0003adb1) popup_slider_window_g1_ParamLimits

0xe199,	// (0x0003adcd) popup_slider_window_g2_ParamLimits

0xe1b5,	// (0x0003ade9) popup_slider_window_g3_ParamLimits

0xfd09,	// (0x0003c93d) popup_slider_window_g_ParamLimits

0xe1d1,	// (0x0003ae05) popup_slider_window_t1_ParamLimits

0xe215,	// (0x0003ae49) small_volume_slider_vertical_pane_ParamLimits

0x0f77,	// (0x0002dbab) cell_graphic2_pane_ParamLimits

0x0fb4,	// (0x0002dbe8) bg_button_pane_cp10_ParamLimits

0x0fb4,	// (0x0002dbe8) bg_button_pane_cp10

0x0fc5,	// (0x0002dbf9) bg_button_pane_cp11_ParamLimits

0x0fc5,	// (0x0002dbf9) bg_button_pane_cp11

0x0fd6,	// (0x0002dc0a) graphic2_pages_pane_g1_ParamLimits

0x0fd6,	// (0x0002dc0a) graphic2_pages_pane_g1

0x0fe9,	// (0x0002dc1d) graphic2_pages_pane_g2_ParamLimits

0x0fe9,	// (0x0002dc1d) graphic2_pages_pane_g2

0x0001,

0xfdcd,	// (0x0003ca01) graphic2_pages_pane_g_ParamLimits

0xfdcd,	// (0x0003ca01) graphic2_pages_pane_g

0x0fff,	// (0x0002dc33) graphic2_pages_pane_t1_ParamLimits

0x0fff,	// (0x0002dc33) graphic2_pages_pane_t1

0x1015,	// (0x0002dc49) cell_graphic2_control_pane_ParamLimits

0x1015,	// (0x0002dc49) cell_graphic2_control_pane

0x102f,	// (0x0002dc63) cell_graphic2_pane_g1_ParamLimits

0x102f,	// (0x0002dc63) cell_graphic2_pane_g1

0x103c,	// (0x0002dc70) cell_graphic2_pane_g2_ParamLimits

0x103c,	// (0x0002dc70) cell_graphic2_pane_g2

0x1049,	// (0x0002dc7d) cell_graphic2_pane_g3_ParamLimits

0x1049,	// (0x0002dc7d) cell_graphic2_pane_g3

0x1056,	// (0x0002dc8a) cell_graphic2_pane_g4_ParamLimits

0x1056,	// (0x0002dc8a) cell_graphic2_pane_g4

0x1063,	// (0x0002dc97) cell_graphic2_pane_g5_ParamLimits

0x1063,	// (0x0002dc97) cell_graphic2_pane_g5

0x0004,

0xfdd2,	// (0x0003ca06) cell_graphic2_pane_g_ParamLimits

0xfdd2,	// (0x0003ca06) cell_graphic2_pane_g

0x107e,	// (0x0002dcb2) cell_graphic2_pane_t1_ParamLimits

0x107e,	// (0x0002dcb2) cell_graphic2_pane_t1

0x7c84,	// (0x000348b8) grid_highlight_pane_cp11_ParamLimits

0x7c84,	// (0x000348b8) grid_highlight_pane_cp11

0x6ce1,	// (0x00033915) bg_button_pane_cp05

0x1094,	// (0x0002dcc8) cell_graphic2_control_pane_g1

0xcfcf,	// (0x00039c03) bg_touch_area_indi_pane_g1

0xe585,	// (0x0003b1b9) aid_cmod_rocker_key_size

0xe58f,	// (0x0003b1c3) aid_cmode_itu_key_size

0xe599,	// (0x0003b1cd) main_cmode_video_pane

0xe5a1,	// (0x0003b1d5) main_comp_mode_itu_pane

0xe5ab,	// (0x0003b1df) main_comp_mode_rocker_pane

0xe5b3,	// (0x0003b1e7) cell_cmode_rocker_pane_ParamLimits

0xe5b3,	// (0x0003b1e7) cell_cmode_rocker_pane

0xe5c5,	// (0x0003b1f9) cell_cmode_itu_pane_ParamLimits

0xe5c5,	// (0x0003b1f9) cell_cmode_itu_pane

0x6ce1,	// (0x00033915) bg_button_pane_cp06_ParamLimits

0x6ce1,	// (0x00033915) bg_button_pane_cp06

0xd209,	// (0x00039e3d) cell_cmode_rocker_pane_g1_ParamLimits

0xd209,	// (0x00039e3d) cell_cmode_rocker_pane_g1

0xe24c,	// (0x0003ae80) cell_cmode_rocker_pane_g2_ParamLimits

0xe24c,	// (0x0003ae80) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x0003ca11) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x0003ca11) cell_cmode_rocker_pane_g

0x3261,	// (0x0002fe95) bg_button_pane_cp07

0xf272,	// (0x0003bea6) cell_cmode_itu_pane_g1

0xf27b,	// (0x0003beaf) cell_cmode_itu_pane_t1

0xf289,	// (0x0003bebd) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x0003ca16) cell_cmode_itu_pane_t

0xe3bb,	// (0x0003afef) aid_touch_ctrl_left

0xe3c3,	// (0x0003aff7) aid_touch_ctrl_right

0x3261,	// (0x0002fe95) compa_mode_pane

0x10a1,	// (0x0002dcd5) aid_cmod_rocker_key_size_cp

0x10ab,	// (0x0002dcdf) aid_cmode_itu_key_size_cp

0xf297,	// (0x0003becb) compa_mode_pane_g1

0xf29f,	// (0x0003bed3) compa_mode_pane_g2

0xf2a7,	// (0x0003bedb) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x0003ca1b) compa_mode_pane_g

0x10b5,	// (0x0002dce9) main_comp_mode_itu_pane_cp

0x10bd,	// (0x0002dcf1) main_comp_mode_rocker_pane_cp

0x10c5,	// (0x0002dcf9) cell_cmode_itu_pane_cp_ParamLimits

0x10c5,	// (0x0002dcf9) cell_cmode_itu_pane_cp

0x10da,	// (0x0002dd0e) cell_cmode_rocker_pane_cp_ParamLimits

0x10da,	// (0x0002dd0e) cell_cmode_rocker_pane_cp

0x6ce1,	// (0x00033915) bg_button_pane_cp06_cp_ParamLimits

0x6ce1,	// (0x00033915) bg_button_pane_cp06_cp

0xd209,	// (0x00039e3d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd209,	// (0x00039e3d) cell_cmode_rocker_pane_g1_cp

0xcfcf,	// (0x00039c03) cell_cmode_rocker_pane_g2_cp

0x3261,	// (0x0002fe95) bg_button_pane_cp07_cp

0x10ec,	// (0x0002dd20) cell_cmode_itu_pane_g1_cp

0x10f5,	// (0x0002dd29) cell_cmode_itu_pane_t1_cp

0x1103,	// (0x0002dd37) cell_cmode_itu_pane_t2_cp

0xbc54,	// (0x00038888) settings_code_pane_cp2

0x35c4,	// (0x000301f8) bg_popup_window_pane_cp3_ParamLimits

0x3af1,	// (0x00030725) heading_pane_cp3_ParamLimits

0x3afd,	// (0x00030731) listscroll_popup_graphic_pane_ParamLimits

0xc06f,	// (0x00038ca3) fep_hwr_aid_pane_ParamLimits

0xc4cf,	// (0x00039103) aid_touch_sctrl_top_ParamLimits

0xc4ea,	// (0x0003911e) sctrl_sk_top_pane_g1_ParamLimits

0xc2b4,	// (0x00038ee8) sctrl_sk_top_pane_g2_ParamLimits

0xfd22,	// (0x0003c956) sctrl_sk_top_pane_g_ParamLimits

0xc4f7,	// (0x0003912b) sctrl_sk_top_pane_t1_ParamLimits

0xc4cf,	// (0x00039103) aid_touch_sctrl_bottom_ParamLimits

0xc4f7,	// (0x0003912b) sctrl_sk_bottom_pane_t1_ParamLimits

0xe305,	// (0x0003af39) aid_area_touch_clock

0xc6bd,	// (0x000392f1) aid_vkb2_area_top_pane_cell_ParamLimits

0xc6bd,	// (0x000392f1) aid_vkb2_area_top_pane_cell

0xc7e8,	// (0x0003941c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc7e8,	// (0x0003941c) aid_vkb2_area_bottom_pane_cell

0xe4fe,	// (0x0003b132) popup_char_count_window

0xf2af,	// (0x0003bee3) popup_char_count_window_g1

0xf2b8,	// (0x0003beec) popup_char_count_window_g2

0xf2c1,	// (0x0003bef5) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x0003ca22) popup_char_count_window_g

0xf2ca,	// (0x0003befe) popup_char_count_window_t1

0xc5ab,	// (0x000391df) popup_fep_char_preview_window_ParamLimits

0xc5ab,	// (0x000391df) popup_fep_char_preview_window

0xc6db,	// (0x0003930f) vkb2_top_candi_pane_ParamLimits

0xc6db,	// (0x0003930f) vkb2_top_candi_pane

0x1111,	// (0x0002dd45) cell_vkb2_top_candi_pane_ParamLimits

0x1111,	// (0x0002dd45) cell_vkb2_top_candi_pane

0xcaa9,	// (0x000396dd) bg_popup_fep_char_preview_window_ParamLimits

0xcaa9,	// (0x000396dd) bg_popup_fep_char_preview_window

0xcab7,	// (0x000396eb) popup_fep_char_preview_window_t1_ParamLimits

0xcab7,	// (0x000396eb) popup_fep_char_preview_window_t1

0xf2d8,	// (0x0003bf0c) bg_popup_fep_char_preview_window_g1

0xf2e0,	// (0x0003bf14) bg_popup_fep_char_preview_window_g2

0xf2e8,	// (0x0003bf1c) bg_popup_fep_char_preview_window_g3

0xf2f0,	// (0x0003bf24) bg_popup_fep_char_preview_window_g4

0xf2f8,	// (0x0003bf2c) bg_popup_fep_char_preview_window_g5

0xcaf1,	// (0x00039725) bg_popup_fep_char_preview_window_g6

0xf300,	// (0x0003bf34) bg_popup_fep_char_preview_window_g7

0xf308,	// (0x0003bf3c) bg_popup_fep_char_preview_window_g8

0xf310,	// (0x0003bf44) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x0003ca29) bg_popup_fep_char_preview_window_g

0xc2b4,	// (0x00038ee8) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2b4,	// (0x00038ee8) cell_vkb2_top_candi_pane_g1

0xc2c2,	// (0x00038ef6) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc2c2,	// (0x00038ef6) cell_vkb2_top_candi_pane_g2

0xefc0,	// (0x0003bbf4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xefc0,	// (0x0003bbf4) cell_vkb2_top_candi_pane_g3

0xcaf9,	// (0x0003972d) cell_vkb2_top_candi_pane_g4_ParamLimits

0xcaf9,	// (0x0003972d) cell_vkb2_top_candi_pane_g4

0xd6da,	// (0x0003a30e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xd6da,	// (0x0003a30e) cell_vkb2_top_candi_pane_g5

0xcb1a,	// (0x0003974e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcb1a,	// (0x0003974e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x0003ca3c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x0003ca3c) cell_vkb2_top_candi_pane_g

0xcb28,	// (0x0003975c) cell_vkb2_top_candi_pane_t1

0xba94,	// (0x000386c8) aid_size_touch_slider_mark_ParamLimits

0xba94,	// (0x000386c8) aid_size_touch_slider_mark

0x0ef3,	// (0x0002db27) grid_graphic2_catg_pane_ParamLimits

0x0ef3,	// (0x0002db27) grid_graphic2_catg_pane

0x0f53,	// (0x0002db87) popup_grid_graphic2_window_t1_ParamLimits

0x0f53,	// (0x0002db87) popup_grid_graphic2_window_t1

0x0f65,	// (0x0002db99) popup_grid_graphic2_window_t2_ParamLimits

0x0f65,	// (0x0002db99) popup_grid_graphic2_window_t2

0x0001,

0xfdc8,	// (0x0003c9fc) popup_grid_graphic2_window_t_ParamLimits

0xfdc8,	// (0x0003c9fc) popup_grid_graphic2_window_t

0x6ce1,	// (0x00033915) bg_button_pane_cp05_ParamLimits

0x1094,	// (0x0002dcc8) cell_graphic2_control_pane_g1_ParamLimits

0x11c3,	// (0x0002ddf7) cell_graphic2_catg_pane_ParamLimits

0x11c3,	// (0x0002ddf7) cell_graphic2_catg_pane

0x3261,	// (0x0002fe95) bg_button_pane_cp12

0x11d5,	// (0x0002de09) cell_graphic2_catg_pane_g1

0xe2d1,	// (0x0003af05) cell_tb_ext_pane_t1_ParamLimits

0xc8f3,	// (0x00039527) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc8f3,	// (0x00039527) vkb2_top_cell_right_narrow_pane

0xc90b,	// (0x0003953f) vkb2_top_cell_right_wide_pane_ParamLimits

0xc90b,	// (0x0003953f) vkb2_top_cell_right_wide_pane

0xc061,	// (0x00038c95) bg_vkb2_func_pane_ParamLimits

0xc061,	// (0x00038c95) bg_vkb2_func_pane

0xc97c,	// (0x000395b0) vkb2_top_cell_left_pane_g1_ParamLimits

0xc061,	// (0x00038c95) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc061,	// (0x00038c95) bg_vkb2_fuc_pane_cp03

0xc9da,	// (0x0003960e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7ba6,	// (0x000347da) bg_vkb2_func_pane_g1

0x7b9e,	// (0x000347d2) bg_vkb2_func_pane_g2

0x7bae,	// (0x000347e2) bg_vkb2_func_pane_g3

0x7bb6,	// (0x000347ea) bg_vkb2_func_pane_g4

0x7bbe,	// (0x000347f2) bg_vkb2_func_pane_g5

0x7bc6,	// (0x000347fa) bg_vkb2_func_pane_g6

0x7bd6,	// (0x0003480a) bg_vkb2_func_pane_g7

0x7bce,	// (0x00034802) bg_vkb2_func_pane_g8

0x7b96,	// (0x000347ca) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x0003ca49) bg_vkb2_func_pane_g

0xc061,	// (0x00038c95) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc061,	// (0x00038c95) bg_vkb2_fuc_pane_cp01

0xc97c,	// (0x000395b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc97c,	// (0x000395b0) vkb2_top_cell_right_wide_pane_g1

0xc061,	// (0x00038c95) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc061,	// (0x00038c95) bg_vkb2_fuc_pane_cp02

0xc9da,	// (0x0003960e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc9da,	// (0x0003960e) vkb2_top_cell_right_narrow_pane_g1

0x02f9,	// (0x0002cf2d) aid_touch_area_decrease_ParamLimits

0x02f9,	// (0x0002cf2d) aid_touch_area_decrease

0x0311,	// (0x0002cf45) aid_touch_area_increase_ParamLimits

0x0311,	// (0x0002cf45) aid_touch_area_increase

0x031d,	// (0x0002cf51) aid_touch_area_mute_ParamLimits

0x031d,	// (0x0002cf51) aid_touch_area_mute

0x0339,	// (0x0002cf6d) aid_touch_area_slider_ParamLimits

0x0339,	// (0x0002cf6d) aid_touch_area_slider

0x0373,	// (0x0002cfa7) popup_slider_window_g4_ParamLimits

0x0373,	// (0x0002cfa7) popup_slider_window_g4

0x037f,	// (0x0002cfb3) popup_slider_window_g5_ParamLimits

0x037f,	// (0x0002cfb3) popup_slider_window_g5

0x03a1,	// (0x0002cfd5) popup_slider_window_g6_ParamLimits

0x03a1,	// (0x0002cfd5) popup_slider_window_g6

0xe1fd,	// (0x0003ae31) popup_slider_window_t2_ParamLimits

0xe1fd,	// (0x0003ae31) popup_slider_window_t2

0x0001,

0xfd16,	// (0x0003c94a) popup_slider_window_t_ParamLimits

0xfd16,	// (0x0003c94a) popup_slider_window_t

0x03b3,	// (0x0002cfe7) slider_pane_ParamLimits

0x03b3,	// (0x0002cfe7) slider_pane

0xf318,	// (0x0003bf4c) slider_pane_g1_ParamLimits

0xf318,	// (0x0003bf4c) slider_pane_g1

0xf32c,	// (0x0003bf60) slider_pane_g2_ParamLimits

0xf32c,	// (0x0003bf60) slider_pane_g2

0xf342,	// (0x0003bf76) slider_pane_g3_ParamLimits

0xf342,	// (0x0003bf76) slider_pane_g3

0x0003,

0xfe28,	// (0x0003ca5c) slider_pane_g_ParamLimits

0xfe28,	// (0x0003ca5c) slider_pane_g

0xb260,	// (0x00037e94) popup_tb_float_extension_window_ParamLimits

0xb260,	// (0x00037e94) popup_tb_float_extension_window

0xf36e,	// (0x0003bfa2) aid_size_cell_tb_float_ext

0x3261,	// (0x0002fe95) bg_popup_sub_window_cp28

0xf379,	// (0x0003bfad) grid_tb_float_ext_pane

0xf381,	// (0x0003bfb5) cell_tb_float_ext_pane_ParamLimits

0xf381,	// (0x0003bfb5) cell_tb_float_ext_pane

0xf399,	// (0x0003bfcd) cell_tb_float_ext_pane_g1

0xf3a2,	// (0x0003bfd6) grid_highlight_pane_cp12

0xc1aa,	// (0x00038dde) cell_last_hwr_side_pane_ParamLimits

0xc1aa,	// (0x00038dde) cell_last_hwr_side_pane

0xcfcf,	// (0x00039c03) cell_last_hwr_side_pane_g1

0xf3ab,	// (0x0003bfdf) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x0003ca65) cell_last_hwr_side_pane_g

0xc8b0,	// (0x000394e4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc8b0,	// (0x000394e4) vkb2_area_bottom_space_btn_pane

0xc2b4,	// (0x00038ee8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe565,	// (0x0003b199) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xcb28,	// (0x0003975c) cell_vkb2_top_candi_pane_t1_ParamLimits

0xcb3e,	// (0x00039772) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xcb3e,	// (0x00039772) vkb2_area_bottom_space_btn_pane_g1

0xcb74,	// (0x000397a8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xcb74,	// (0x000397a8) vkb2_area_bottom_space_btn_pane_g2

0xcbaa,	// (0x000397de) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xcbaa,	// (0x000397de) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x0003ca6a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x0003ca6a) vkb2_area_bottom_space_btn_pane_g

0xc11e,	// (0x00038d52) cel_fep_hwr_func_pane_ParamLimits

0xc11e,	// (0x00038d52) cel_fep_hwr_func_pane

0xc15a,	// (0x00038d8e) cell_hwr_side_button_pane_ParamLimits

0xc15a,	// (0x00038d8e) cell_hwr_side_button_pane

0xe305,	// (0x0003af39) aid_area_touch_clock_ParamLimits

0x3919,	// (0x0003054d) bg_uniindi_top_pane_ParamLimits

0xe317,	// (0x0003af4b) uniindi_top_pane_g1_ParamLimits

0xe32d,	// (0x0003af61) uniindi_top_pane_g2_ParamLimits

0xe339,	// (0x0003af6d) uniindi_top_pane_g3_ParamLimits

0xe34a,	// (0x0003af7e) uniindi_top_pane_g4_ParamLimits

0xfd4e,	// (0x0003c982) uniindi_top_pane_g_ParamLimits

0xe357,	// (0x0003af8b) uniindi_top_pane_t1_ParamLimits

0x3919,	// (0x0003054d) bg_vkb2_func_pane_cp01_ParamLimits

0x3919,	// (0x0003054d) bg_vkb2_func_pane_cp01

0x1290,	// (0x0002dec4) cel_fep_hwr_func_pane_g1_ParamLimits

0x1290,	// (0x0002dec4) cel_fep_hwr_func_pane_g1

0x3919,	// (0x0003054d) bg_vkb2_func_pane_cp02_ParamLimits

0x3919,	// (0x0003054d) bg_vkb2_func_pane_cp02

0x1290,	// (0x0002dec4) cell_hwr_side_button_pane_g1_ParamLimits

0x1290,	// (0x0002dec4) cell_hwr_side_button_pane_g1

0x7aba,	// (0x000346ee) status_pane_g4_ParamLimits

0x7aba,	// (0x000346ee) status_pane_g4

0x7ad2,	// (0x00034706) status_pane_t1

0xcdc1,	// (0x000399f5) form2_midp_gauge_slider_cont_pane

0xcdc9,	// (0x000399fd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcddb,	// (0x00039a0f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcded,	// (0x00039a21) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb15,	// (0x0003c749) form2_midp_gauge_slider_pane_t_ParamLimits

0xcdff,	// (0x00039a33) form2_midp_slider_pane_ParamLimits

0xc56b,	// (0x0003919f) aid_size_cell_func_vkb2_ParamLimits

0xc56b,	// (0x0003919f) aid_size_cell_func_vkb2

0xf35a,	// (0x0003bf8e) slider_pane_g4_ParamLimits

0xf35a,	// (0x0003bf8e) slider_pane_g4

0xcbf0,	// (0x00039824) form2_midp_gauge_slider_pane_t2_cp01

0xcbfe,	// (0x00039832) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcbfe,	// (0x00039832) form2_midp_gauge_slider_pane_t3_cp01

0xcc1b,	// (0x0003984f) form2_midp_slider_pane_cp01

0x3261,	// (0x0002fe95) navi_smil_pane

0x12fd,	// (0x0002df31) navi_smil_pane_g1

0x1305,	// (0x0002df39) navi_smil_pane_t1

0x12d2,	// (0x0002df06) form2_midp_slider_pane_g1

0x12db,	// (0x0002df0f) form2_midp_slider_pane_g2

0x12e3,	// (0x0002df17) form2_midp_slider_pane_g3

0x12d2,	// (0x0002df06) form2_midp_slider_pane_g4

0x12eb,	// (0x0002df1f) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x0003ca73) form2_midp_slider_pane_g

0xcbe0,	// (0x00039814) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xcbe0,	// (0x00039814) vkb2_area_bottom_space_btn_pane_g4

0xb3a1,	// (0x00037fd5) lc0_navi_pane_ParamLimits

0xb3a1,	// (0x00037fd5) lc0_navi_pane

0xb417,	// (0x0003804b) lc0_stat_indi_pane_ParamLimits

0xb417,	// (0x0003804b) lc0_stat_indi_pane

0xb42e,	// (0x00038062) ls0_title_pane_ParamLimits

0xb42e,	// (0x00038062) ls0_title_pane

0x6ce1,	// (0x00033915) bg_popup_sub_pane_cp14_ParamLimits

0xe2ec,	// (0x0003af20) list_uniindi_pane_ParamLimits

0xe2f8,	// (0x0003af2c) uniindi_top_pane_ParamLimits

0xe393,	// (0x0003afc7) list_single_uniindi_pane_g1_ParamLimits

0xe3a6,	// (0x0003afda) list_single_uniindi_pane_t1_ParamLimits

0xcc24,	// (0x00039858) lc0_stat_clock_pane_ParamLimits

0xcc24,	// (0x00039858) lc0_stat_clock_pane

0x132d,	// (0x0002df61) lc0_stat_indi_pane_g1_ParamLimits

0x132d,	// (0x0002df61) lc0_stat_indi_pane_g1

0x1320,	// (0x0002df54) lc0_stat_indi_pane_g2_ParamLimits

0x1320,	// (0x0002df54) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x0003ca7e) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x0003ca7e) lc0_stat_indi_pane_g

0xcc31,	// (0x00039865) lc0_uni_indicator_pane_ParamLimits

0xcc31,	// (0x00039865) lc0_uni_indicator_pane

0x1347,	// (0x0002df7b) ls0_title_pane_g1_ParamLimits

0x1347,	// (0x0002df7b) ls0_title_pane_g1

0x135b,	// (0x0002df8f) ls0_title_pane_t1_ParamLimits

0x135b,	// (0x0002df8f) ls0_title_pane_t1

0xcc3e,	// (0x00039872) lc0_uni_indicator_pane_g1_ParamLimits

0xcc3e,	// (0x00039872) lc0_uni_indicator_pane_g1

0x13a3,	// (0x0002dfd7) lc0_stat_clock_pane_t1

0x3261,	// (0x0002fe95) main_ai5_pane

0x13b1,	// (0x0002dfe5) ai5_sk_pane_ParamLimits

0x13b1,	// (0x0002dfe5) ai5_sk_pane

0x13be,	// (0x0002dff2) cell_ai5_widget_pane_ParamLimits

0x13be,	// (0x0002dff2) cell_ai5_widget_pane

0x1419,	// (0x0002e04d) aid_size_cell_widget_grid

0x142b,	// (0x0002e05f) bg_ai5_widget_pane_ParamLimits

0x142b,	// (0x0002e05f) bg_ai5_widget_pane

0x1453,	// (0x0002e087) cell_ai5_widget_pane_g2

0x1463,	// (0x0002e097) cell_ai5_widget_pane_g3

0x1477,	// (0x0002e0ab) cell_ai5_widget_pane_g4

0x1483,	// (0x0002e0b7) cell_ai5_widget_pane_g5

0x148f,	// (0x0002e0c3) cell_ai5_widget_pane_g6

0x149b,	// (0x0002e0cf) cell_ai5_widget_pane_g7

0x14e3,	// (0x0002e117) cell_ai5_widget_pane_t1_ParamLimits

0x14e3,	// (0x0002e117) cell_ai5_widget_pane_t1

0x1500,	// (0x0002e134) cell_ai5_widget_pane_t2_ParamLimits

0x1500,	// (0x0002e134) cell_ai5_widget_pane_t2

0x1518,	// (0x0002e14c) cell_ai5_widget_pane_t3_ParamLimits

0x1518,	// (0x0002e14c) cell_ai5_widget_pane_t3

0x1530,	// (0x0002e164) cell_ai5_widget_pane_t4_ParamLimits

0x1530,	// (0x0002e164) cell_ai5_widget_pane_t4

0x154a,	// (0x0002e17e) cell_ai5_widget_pane_t5_ParamLimits

0x154a,	// (0x0002e17e) cell_ai5_widget_pane_t5

0x1569,	// (0x0002e19d) cell_ai5_widget_pane_t6_ParamLimits

0x1569,	// (0x0002e19d) cell_ai5_widget_pane_t6

0x157b,	// (0x0002e1af) cell_ai5_widget_pane_t7_ParamLimits

0x157b,	// (0x0002e1af) cell_ai5_widget_pane_t7

0x1594,	// (0x0002e1c8) cell_ai5_widget_pane_t8_ParamLimits

0x1594,	// (0x0002e1c8) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x0003ca98) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x0003ca98) cell_ai5_widget_pane_t

0x15dc,	// (0x0002e210) grid_ai5_widget_pane

0x6ce1,	// (0x00033915) highlight_cell_ai5_widget_pane_ParamLimits

0x6ce1,	// (0x00033915) highlight_cell_ai5_widget_pane

0x15f2,	// (0x0002e226) ai5_sk_left_pane

0x15fc,	// (0x0002e230) ai5_sk_middle_pane

0x1606,	// (0x0002e23a) ai5_sk_right_pane

0x1610,	// (0x0002e244) bg_ai5_widget_pane_g1_ParamLimits

0x1610,	// (0x0002e244) bg_ai5_widget_pane_g1

0x161c,	// (0x0002e250) bg_ai5_widget_pane_g2_ParamLimits

0x161c,	// (0x0002e250) bg_ai5_widget_pane_g2

0x1628,	// (0x0002e25c) bg_ai5_widget_pane_g3_ParamLimits

0x1628,	// (0x0002e25c) bg_ai5_widget_pane_g3

0x1634,	// (0x0002e268) bg_ai5_widget_pane_g4_ParamLimits

0x1634,	// (0x0002e268) bg_ai5_widget_pane_g4

0x1640,	// (0x0002e274) bg_ai5_widget_pane_g5_ParamLimits

0x1640,	// (0x0002e274) bg_ai5_widget_pane_g5

0x164c,	// (0x0002e280) bg_ai5_widget_pane_g6_ParamLimits

0x164c,	// (0x0002e280) bg_ai5_widget_pane_g6

0x1658,	// (0x0002e28c) bg_ai5_widget_pane_g7_ParamLimits

0x1658,	// (0x0002e28c) bg_ai5_widget_pane_g7

0x1664,	// (0x0002e298) bg_ai5_widget_pane_g8_ParamLimits

0x1664,	// (0x0002e298) bg_ai5_widget_pane_g8

0x1670,	// (0x0002e2a4) bg_ai5_widget_pane_g9_ParamLimits

0x1670,	// (0x0002e2a4) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x0003caad) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x0003caad) bg_ai5_widget_pane_g

0x1698,	// (0x0002e2cc) cell_shortcut_ai5_widget_pane_ParamLimits

0x1698,	// (0x0002e2cc) cell_shortcut_ai5_widget_pane

0x372b,	// (0x0003035f) bg_cell_shortcut_ai5_widget_pane

0x16aa,	// (0x0002e2de) cell_grid_ai5_widget_pane_g1

0x16b3,	// (0x0002e2e7) highlight_cell_shortcut_ai5_widget_pane

0x7ba6,	// (0x000347da) ai5_sk_left_pane_g1

0x16bb,	// (0x0002e2ef) ai5_sk_left_pane_g2

0x16c3,	// (0x0002e2f7) ai5_sk_left_pane_g3

0x16cb,	// (0x0002e2ff) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x0003cac0) ai5_sk_left_pane_g

0x16d3,	// (0x0002e307) ai5_sk_left_pane_t1

0x7b9e,	// (0x000347d2) ai5_sk_right_pane_g1

0x16e1,	// (0x0002e315) ai5_sk_right_pane_g2

0x16e9,	// (0x0002e31d) ai5_sk_right_pane_g3

0x16f1,	// (0x0002e325) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x0003cac9) ai5_sk_right_pane_g

0x16f9,	// (0x0002e32d) ai5_sk_right_pane_t1

0x7b9e,	// (0x000347d2) ai5_sk_middle_pane_g1

0x7ba6,	// (0x000347da) ai5_sk_middle_pane_g2

0x7bbe,	// (0x000347f2) ai5_sk_middle_pane_g3

0x16e9,	// (0x0002e31d) ai5_sk_middle_pane_g4

0x16c3,	// (0x0002e2f7) ai5_sk_middle_pane_g5

0x1707,	// (0x0002e33b) ai5_sk_middle_pane_g6

0x170f,	// (0x0002e343) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0003cad2) ai5_sk_middle_pane_g

0xb2ee,	// (0x00037f22) aid_touch_area_size_lc0_ParamLimits

0xb2ee,	// (0x00037f22) aid_touch_area_size_lc0

0xc2e3,	// (0x00038f17) cell_hwr_candidate_pane_t1_ParamLimits

0x79ef,	// (0x00034623) aid_touch_navi_pane

0xb500,	// (0x00038134) status_dt_navi_pane_ParamLimits

0xb500,	// (0x00038134) status_dt_navi_pane

0xb50d,	// (0x00038141) status_dt_sta_pane_ParamLimits

0xb50d,	// (0x00038141) status_dt_sta_pane

0x1717,	// (0x0002e34b) dt_sta_controll_pane

0x1724,	// (0x0002e358) dt_sta_indi_pane

0x1735,	// (0x0002e369) dt_sta_title_pane

0x3919,	// (0x0003054d) bg_dt_sta_indi_pane_ParamLimits

0x3919,	// (0x0003054d) bg_dt_sta_indi_pane

0x1748,	// (0x0002e37c) dt_sta_battery_pane

0x1750,	// (0x0002e384) dt_sta_indi_pane_g1

0x1759,	// (0x0002e38d) dt_sta_indi_pane_g2

0x1762,	// (0x0002e396) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x0003cae1) dt_sta_indi_pane_g

0x176b,	// (0x0002e39f) dt_sta_signal_pane

0x6ce1,	// (0x00033915) bg_dt_sta_title_pane_ParamLimits

0x6ce1,	// (0x00033915) bg_dt_sta_title_pane

0x1774,	// (0x0002e3a8) dt_sta_title_pane_g1

0x177c,	// (0x0002e3b0) dt_sta_title_pane_t1_ParamLimits

0x177c,	// (0x0002e3b0) dt_sta_title_pane_t1

0x3261,	// (0x0002fe95) bg_dt_sta_control_pane

0x1791,	// (0x0002e3c5) dt_sta_controll_pane_g1

0x179a,	// (0x0002e3ce) bg_dt_sta_title_pane_g1

0x17a3,	// (0x0002e3d7) bg_dt_sta_title_pane_g2

0x17ac,	// (0x0002e3e0) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x0003cae8) bg_dt_sta_title_pane_g

0xcfcf,	// (0x00039c03) bg_dt_sta_indi_pane_g1

0x17b5,	// (0x0002e3e9) dt_sta_signal_pane_g1

0x17bd,	// (0x0002e3f1) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x0003caef) dt_sta_signal_pane_g

0x17c5,	// (0x0002e3f9) dt_sta_battery_pane_g1

0x17ce,	// (0x0002e402) dt_sta_battery_pane_t1

0xcfcf,	// (0x00039c03) bg_dt_sta_control_pane_g1

0x7258,	// (0x00033e8c) fep_china_uni_eep_pane

0x7260,	// (0x00033e94) fep_china_uni_entry_pane_ParamLimits

0x7270,	// (0x00033ea4) popup_fep_china_uni_window_g1_ParamLimits

0x7280,	// (0x00033eb4) popup_fep_china_uni_window_g2_ParamLimits

0x7280,	// (0x00033eb4) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0003c396) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0003c396) popup_fep_china_uni_window_g

0x17dd,	// (0x0002e411) fep_china_uni_eep_pane_g1

0x17e5,	// (0x0002e419) fep_china_uni_eep_pane_t1

0x12f4,	// (0x0002df28) aid_touch_area_size_smil_player

0x7a8d,	// (0x000346c1) lc0_clock_pane

0x7ac6,	// (0x000346fa) status_pane_g5_ParamLimits

0x7ac6,	// (0x000346fa) status_pane_g5

0xb010,	// (0x00037c44) popup_keymap_window

0x7aa6,	// (0x000346da) status_icon_pane

0x1463,	// (0x0002e097) cell_ai5_widget_pane_g3_ParamLimits

0x1477,	// (0x0002e0ab) cell_ai5_widget_pane_g4_ParamLimits

0x1483,	// (0x0002e0b7) cell_ai5_widget_pane_g5_ParamLimits

0x14a7,	// (0x0002e0db) cell_ai5_widget_pane_g8_ParamLimits

0x14a7,	// (0x0002e0db) cell_ai5_widget_pane_g8

0x14bb,	// (0x0002e0ef) cell_ai5_widget_pane_g9_ParamLimits

0x14bb,	// (0x0002e0ef) cell_ai5_widget_pane_g9

0x14cf,	// (0x0002e103) cell_ai5_widget_pane_g10_ParamLimits

0x14cf,	// (0x0002e103) cell_ai5_widget_pane_g10

0x17f4,	// (0x0002e428) status_icon_pane_g1

0x3261,	// (0x0002fe95) bg_popup_sub_pane_cp13

0x17fc,	// (0x0002e430) popup_keymap_window_t1

0xae17,	// (0x00037a4b) control_pane_g6_ParamLimits

0xae17,	// (0x00037a4b) control_pane_g6

0xae24,	// (0x00037a58) control_pane_g7_ParamLimits

0xae24,	// (0x00037a58) control_pane_g7

0xae31,	// (0x00037a65) control_pane_g8_ParamLimits

0xae31,	// (0x00037a65) control_pane_g8

0x1717,	// (0x0002e34b) dt_sta_controll_pane_ParamLimits

0x1724,	// (0x0002e358) dt_sta_indi_pane_ParamLimits

0x1735,	// (0x0002e369) dt_sta_title_pane_ParamLimits

0x3d78,	// (0x000309ac) aid_size_touch_scroll_bar_cale

0xa2a7,	// (0x00036edb) popup_discreet_window_ParamLimits

0xa2a7,	// (0x00036edb) popup_discreet_window

0xa30b,	// (0x00036f3f) popup_sk_window

0x8283,	// (0x00034eb7) bg_popup_sub_pane_cp28_ParamLimits

0x8283,	// (0x00034eb7) bg_popup_sub_pane_cp28

0x180a,	// (0x0002e43e) popup_discreet_window_g1_ParamLimits

0x180a,	// (0x0002e43e) popup_discreet_window_g1

0x182a,	// (0x0002e45e) popup_discreet_window_t1_ParamLimits

0x182a,	// (0x0002e45e) popup_discreet_window_t1

0x1848,	// (0x0002e47c) popup_discreet_window_t2_ParamLimits

0x1848,	// (0x0002e47c) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0003caf4) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0003caf4) popup_discreet_window_t

0xcc50,	// (0x00039884) popup_sk_window_g1

0xcc59,	// (0x0003988d) popup_sk_window_g2

0x0001,

0xfec7,	// (0x0003cafb) popup_sk_window_g

0x18ba,	// (0x0002e4ee) popup_sk_window_t1

0x18ac,	// (0x0002e4e0) popup_sk_window_t1_copy1

0x1453,	// (0x0002e087) cell_ai5_widget_pane_g2_ParamLimits

0x15a6,	// (0x0002e1da) cell_ai5_widget_pane_t9_ParamLimits

0x15a6,	// (0x0002e1da) cell_ai5_widget_pane_t9

0x3261,	// (0x0002fe95) main_fep_fshwr2_pane

0x18c8,	// (0x0002e4fc) aid_fshwr2_btn_pane

0x18d0,	// (0x0002e504) aid_fshwr2_syb_pane

0x18d8,	// (0x0002e50c) aid_fshwr2_txt_pane

0x18e0,	// (0x0002e514) fshwr2_func_candi_pane

0x18e8,	// (0x0002e51c) fshwr2_hwr_syb_pane

0x18f0,	// (0x0002e524) fshwr2_icf_pane

0x3261,	// (0x0002fe95) fshwr2_icf_bg_pane

0x190a,	// (0x0002e53e) fshwr2_icf_pane_t1_ParamLimits

0x190a,	// (0x0002e53e) fshwr2_icf_pane_t1

0xcfcf,	// (0x00039c03) fshwr2_func_candi_pane_g1

0x1921,	// (0x0002e555) fshwr2_func_candi_row_pane_ParamLimits

0x1921,	// (0x0002e555) fshwr2_func_candi_row_pane

0x1932,	// (0x0002e566) cell_fshwr2_syb_pane_ParamLimits

0x1932,	// (0x0002e566) cell_fshwr2_syb_pane

0xd209,	// (0x00039e3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xd209,	// (0x00039e3d) fshwr2_hwr_syb_pane_g1

0x3261,	// (0x0002fe95) bg_popup_call_pane_cp01

0x1949,	// (0x0002e57d) fshwr2_func_candi_cell_pane_ParamLimits

0x1949,	// (0x0002e57d) fshwr2_func_candi_cell_pane

0x1974,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1974,	// (0x0002e5a8) fshwr2_func_candi_cell_bg_pane

0x198e,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x198e,	// (0x0002e5c2) fshwr2_func_candi_cell_pane_g1

0x19ae,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x19ae,	// (0x0002e5e2) fshwr2_func_candi_cell_pane_t1

0x3261,	// (0x0002fe95) bg_button_pane_cp08

0x7688,	// (0x000342bc) cell_fshwr2_syb_bg_pane

0x19c1,	// (0x0002e5f5) cell_fshwr2_syb_bg_pane_g1

0x19c9,	// (0x0002e5fd) cell_fshwr2_syb_bg_pane_t1

0x6ce1,	// (0x00033915) main_tmo_pane

0xba03,	// (0x00038637) uni_indicator_pane_g1_ParamLimits

0xba18,	// (0x0003864c) uni_indicator_pane_g2_ParamLimits

0xba2e,	// (0x00038662) uni_indicator_pane_g3_ParamLimits

0x8c0f,	// (0x00035843) uni_indicator_pane_g4_ParamLimits

0x8c0f,	// (0x00035843) uni_indicator_pane_g4

0x8c23,	// (0x00035857) uni_indicator_pane_g5_ParamLimits

0x8c23,	// (0x00035857) uni_indicator_pane_g5

0x8c37,	// (0x0003586b) uni_indicator_pane_g6_ParamLimits

0x8c37,	// (0x0003586b) uni_indicator_pane_g6

0xf95a,	// (0x0003c58e) uni_indicator_pane_g_ParamLimits

0x02dd,	// (0x0002cf11) popup_tmo_note_window_ParamLimits

0x02dd,	// (0x0002cf11) popup_tmo_note_window

0x3261,	// (0x0002fe95) fshwr2_bg_pane

0x199f,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x199f,	// (0x0002e5d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x0003cb00) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x0003cb00) fshwr2_func_candi_cell_pane_g

0xcfcf,	// (0x00039c03) bg_popup_window_pane_cp01

0x19d8,	// (0x0002e60c) bg_popup_window_pane_g1_cp01

0x19e1,	// (0x0002e615) bg_popup_window_pane_cp22_ParamLimits

0x19e1,	// (0x0002e615) bg_popup_window_pane_cp22

0x19ef,	// (0x0002e623) listscroll_tmo_link_pane_ParamLimits

0x19ef,	// (0x0002e623) listscroll_tmo_link_pane

0x1a2f,	// (0x0002e663) popup_tmo_note_window_g1_ParamLimits

0x1a2f,	// (0x0002e663) popup_tmo_note_window_g1

0x1a3c,	// (0x0002e670) tmo_note_info_pane_ParamLimits

0x1a3c,	// (0x0002e670) tmo_note_info_pane

0x1a56,	// (0x0002e68a) list_tmo_note_info_pane_g1_ParamLimits

0x1a56,	// (0x0002e68a) list_tmo_note_info_pane_g1

0x1a6d,	// (0x0002e6a1) list_tmo_note_info_pane_g2_ParamLimits

0x1a6d,	// (0x0002e6a1) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x0003cb05) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x0003cb05) list_tmo_note_info_pane_g

0x1a89,	// (0x0002e6bd) list_tmo_note_info_text_pane_ParamLimits

0x1a89,	// (0x0002e6bd) list_tmo_note_info_text_pane

0x1b0a,	// (0x0002e73e) list_tmo_link_pane

0x1b17,	// (0x0002e74b) scroll_pane_cp20

0x1b24,	// (0x0002e758) list_single_tmo_link_pane_ParamLimits

0x1b24,	// (0x0002e758) list_single_tmo_link_pane

0x1b34,	// (0x0002e768) list_single_tmo_link_pane_t1

0x1b42,	// (0x0002e776) list_tmo_note_info_text_pane_t1_ParamLimits

0x1b42,	// (0x0002e776) list_tmo_note_info_text_pane_t1

0x6d8f,	// (0x000339c3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6d8f,	// (0x000339c3) aid_size_touch_scroll_bar_cp01

0xeb58,	// (0x0003b78c) aid_size_touch_slider_marker

0xa2f7,	// (0x00036f2b) popup_settings_window_ParamLimits

0xa2f7,	// (0x00036f2b) popup_settings_window

0xed0e,	// (0x0003b942) popup_candi_list_indi_window

0x79ef,	// (0x00034623) aid_touch_navi_pane_ParamLimits

0xc4a3,	// (0x000390d7) rs_clock_indi_pane

0xc4ac,	// (0x000390e0) sctrl_sk_bottom_pane_ParamLimits

0xc4bd,	// (0x000390f1) sctrl_sk_top_pane_ParamLimits

0xc5c5,	// (0x000391f9) popup_fep_tooltip_window

0x1419,	// (0x0002e04d) aid_size_cell_widget_grid_ParamLimits

0x1447,	// (0x0002e07b) cell_ai5_widget_pane_g1_ParamLimits

0x1447,	// (0x0002e07b) cell_ai5_widget_pane_g1

0x148f,	// (0x0002e0c3) cell_ai5_widget_pane_g6_ParamLimits

0x149b,	// (0x0002e0cf) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x0003ca83) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003ca83) cell_ai5_widget_pane_g

0x15ca,	// (0x0002e1fe) cell_ai5_widget_pane_t10_ParamLimits

0x15ca,	// (0x0002e1fe) cell_ai5_widget_pane_t10

0x15dc,	// (0x0002e210) grid_ai5_widget_pane_ParamLimits

0x167c,	// (0x0002e2b0) cell_contacts_ai5_widget_pane_ParamLimits

0x167c,	// (0x0002e2b0) cell_contacts_ai5_widget_pane

0x185d,	// (0x0002e491) popup_discreet_window_t3_ParamLimits

0x185d,	// (0x0002e491) popup_discreet_window_t3

0x18f8,	// (0x0002e52c) popup_fshwr2_char_preview_window_ParamLimits

0x18f8,	// (0x0002e52c) popup_fshwr2_char_preview_window

0x1aa7,	// (0x0002e6db) tmo_note_info_pane_t1

0x1abc,	// (0x0002e6f0) tmo_note_info_pane_t2

0x1ad1,	// (0x0002e705) tmo_note_info_pane_t3

0x1ae6,	// (0x0002e71a) tmo_note_info_pane_t4

0x1af8,	// (0x0002e72c) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x0003cb0a) tmo_note_info_pane_t

0x1b0a,	// (0x0002e73e) list_tmo_link_pane_ParamLimits

0x1b17,	// (0x0002e74b) scroll_pane_cp20_ParamLimits

0x3261,	// (0x0002fe95) bg_popup_fep_char_preview_window_cp01

0x1b5b,	// (0x0002e78f) popup_fshwr2_char_preview_window_t1

0x1b69,	// (0x0002e79d) popup_candi_list_indi_window_g1

0x1b72,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane

0x1b7e,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1

0x1b92,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2

0x1ba1,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x0003cb15) cell_contacts_ai5_widget_pane_g

0x1bb4,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1

0x6ce1,	// (0x00033915) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1c2c,	// (0x0002e860) settings_container_pane

0x7688,	// (0x000342bc) listscroll_set_pane_copy1

0x93b8,	// (0x00035fec) scroll_pane_cp121_copy1

0x1c38,	// (0x0002e86c) set_content_pane_copy1

0x1c40,	// (0x0002e874) aid_height_set_list_copy1_ParamLimits

0x1c40,	// (0x0002e874) aid_height_set_list_copy1

0x8dd0,	// (0x00035a04) aid_size_parent_copy1_ParamLimits

0x8dd0,	// (0x00035a04) aid_size_parent_copy1

0x1c4c,	// (0x0002e880) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1c4c,	// (0x0002e880) button_value_adjust_pane_cp6_copy1

0x6e5d,	// (0x00033a91) list_highlight_pane_cp2_copy1_ParamLimits

0x6e5d,	// (0x00033a91) list_highlight_pane_cp2_copy1

0x1c60,	// (0x0002e894) list_set_pane_copy1_ParamLimits

0x1c60,	// (0x0002e894) list_set_pane_copy1

0x1bc9,	// (0x0002e7fd) main_pane_set_t1_copy1_ParamLimits

0x1bc9,	// (0x0002e7fd) main_pane_set_t1_copy1

0x1c03,	// (0x0002e837) main_pane_set_t2_copy1_ParamLimits

0x1c03,	// (0x0002e837) main_pane_set_t2_copy1

0x1cee,	// (0x0002e922) main_pane_set_t3_copy1

0x1cfc,	// (0x0002e930) main_pane_set_t4_copy1

0x1c20,	// (0x0002e854) set_content_pane_g1_copy1_ParamLimits

0x1c20,	// (0x0002e854) set_content_pane_g1_copy1

0x1d0a,	// (0x0002e93e) setting_code_pane_copy1

0x1d12,	// (0x0002e946) setting_slider_graphic_pane_copy1

0x1d12,	// (0x0002e946) setting_slider_pane_copy1

0x1d1a,	// (0x0002e94e) setting_text_pane_copy1

0x1d12,	// (0x0002e946) setting_volume_pane_copy1

0x1d22,	// (0x0002e956) settings_code_pane_cp2_copy1

0x1d2a,	// (0x0002e95e) settings_code_pane_cp_copy1_ParamLimits

0x1d2a,	// (0x0002e95e) settings_code_pane_cp_copy1

0x1d3e,	// (0x0002e972) volume_set_pane_copy1

0x1d46,	// (0x0002e97a) volume_set_pane_g10_copy1

0x1d4e,	// (0x0002e982) volume_set_pane_g1_copy1

0x1d56,	// (0x0002e98a) volume_set_pane_g2_copy1

0x1d5e,	// (0x0002e992) volume_set_pane_g3_copy1

0x1d66,	// (0x0002e99a) volume_set_pane_g4_copy1

0x1d6e,	// (0x0002e9a2) volume_set_pane_g5_copy1

0x1d76,	// (0x0002e9aa) volume_set_pane_g6_copy1

0x1d7e,	// (0x0002e9b2) volume_set_pane_g7_copy1

0x1d86,	// (0x0002e9ba) volume_set_pane_g8_copy1

0x1d8e,	// (0x0002e9c2) volume_set_pane_g9_copy1

0x35c4,	// (0x000301f8) bg_set_opt_pane_cp_copy1_ParamLimits

0x35c4,	// (0x000301f8) bg_set_opt_pane_cp_copy1

0x35d2,	// (0x00030206) setting_slider_pane_t1_copy1_ParamLimits

0x35d2,	// (0x00030206) setting_slider_pane_t1_copy1

0x1d96,	// (0x0002e9ca) setting_slider_pane_t2_copy1_ParamLimits

0x1d96,	// (0x0002e9ca) setting_slider_pane_t2_copy1

0x1daf,	// (0x0002e9e3) setting_slider_pane_t3_copy1_ParamLimits

0x1daf,	// (0x0002e9e3) setting_slider_pane_t3_copy1

0x3618,	// (0x0003024c) slider_set_pane_copy1_ParamLimits

0x3618,	// (0x0003024c) slider_set_pane_copy1

0x6d30,	// (0x00033964) set_opt_bg_pane_g1_copy2

0x6d38,	// (0x0003396c) set_opt_bg_pane_g2_copy2

0x1dc6,	// (0x0002e9fa) set_opt_bg_pane_g3_copy2

0x6d48,	// (0x0003397c) set_opt_bg_pane_g4_copy2

0x6d50,	// (0x00033984) set_opt_bg_pane_g5_copy2

0x6d58,	// (0x0003398c) set_opt_bg_pane_g6_copy2

0x1dce,	// (0x0002ea02) set_opt_bg_pane_g7_copy2

0x1dd6,	// (0x0002ea0a) set_opt_bg_pane_g8_copy2

0x1dde,	// (0x0002ea12) set_opt_bg_pane_g9_copy2

0x8f3e,	// (0x00035b72) aid_size_touch_slider_mark_copy1_ParamLimits

0x8f3e,	// (0x00035b72) aid_size_touch_slider_mark_copy1

0x8de2,	// (0x00035a16) slider_set_pane_g1_copy1

0x8deb,	// (0x00035a1f) slider_set_pane_g2_copy1

0x8f52,	// (0x00035b86) slider_set_pane_g3_copy1_ParamLimits

0x8f52,	// (0x00035b86) slider_set_pane_g3_copy1

0x8f66,	// (0x00035b9a) slider_set_pane_g4_copy1_ParamLimits

0x8f66,	// (0x00035b9a) slider_set_pane_g4_copy1

0x8f7e,	// (0x00035bb2) slider_set_pane_g5_copy1_ParamLimits

0x8f7e,	// (0x00035bb2) slider_set_pane_g5_copy1

0x8f52,	// (0x00035b86) slider_set_pane_g6_copy1_ParamLimits

0x8f52,	// (0x00035b86) slider_set_pane_g6_copy1

0x1de6,	// (0x0002ea1a) slider_set_pane_g7_copy1_ParamLimits

0x1de6,	// (0x0002ea1a) slider_set_pane_g7_copy1

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp2_copy1

0x362e,	// (0x00030262) setting_slider_graphic_pane_g1_copy1

0x1dfc,	// (0x0002ea30) setting_slider_graphic_pane_t1_copy1

0x1e0b,	// (0x0002ea3f) setting_slider_graphic_pane_t2_copy1

0x1e1a,	// (0x0002ea4e) slider_set_pane_cp_copy1

0x1e2a,	// (0x0002ea5e) input_focus_pane_cp1_copy1

0x1e33,	// (0x0002ea67) list_set_text_pane_copy1

0x1e3b,	// (0x0002ea6f) setting_text_pane_g1_copy1

0xf3b4,	// (0x0003bfe8) set_text_pane_t1_copy1

0x1e2a,	// (0x0002ea5e) input_focus_pane_cp2_copy1

0x1e3b,	// (0x0002ea6f) setting_code_pane_g1_copy1

0x1e44,	// (0x0002ea78) setting_code_pane_t1_copy1

0x1e52,	// (0x0002ea86) list_set_graphic_pane_copy1

0x33b8,	// (0x0002ffec) bg_set_opt_pane_cp4_copy1

0x1e66,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1_ParamLimits

0x1e66,	// (0x0002ea9a) list_set_graphic_pane_g1_copy1

0x1e72,	// (0x0002eaa6) list_set_graphic_pane_g2_copy1

0x7403,	// (0x00034037) list_set_graphic_pane_t1_copy1_ParamLimits

0x7403,	// (0x00034037) list_set_graphic_pane_t1_copy1

0xcfcf,	// (0x00039c03) rs_clock_indi_pane_g1

0x1e7a,	// (0x0002eaae) rs_clock_indi_pane_t1

0x1e88,	// (0x0002eabc) rs_indi_pane

0x1e90,	// (0x0002eac4) rs_indi_pane_g1

0x1e99,	// (0x0002eacd) rs_indi_pane_g2

0x1b69,	// (0x0002e79d) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x0003cb1c) rs_indi_pane_g

0x7688,	// (0x000342bc) bg_popup_preview_window_pane_cp03

0x1ea2,	// (0x0002ead6) popup_fep_tooltip_window_t1

0xdb00,	// (0x0003a734) popup_note2_window_g2_ParamLimits

0xdb00,	// (0x0003a734) popup_note2_window_g2

0x0001,

0xfc8d,	// (0x0003c8c1) popup_note2_window_g_ParamLimits

0xfc8d,	// (0x0003c8c1) popup_note2_window_g

0xdf7b,	// (0x0003abaf) bg_popup_sub_pane_cp11_ParamLimits

0xdf88,	// (0x0003abbc) cell_ai3_links_pane_g1_ParamLimits

0xdf9f,	// (0x0003abd3) cell_ai3_links_pane_t1

0xf3b4,	// (0x0003bfe8) set_text_pane_t1_copy1_ParamLimits

0x75af,	// (0x000341e3) cell_graphic_popup_pane_cp2_ParamLimits

0x75af,	// (0x000341e3) cell_graphic_popup_pane_cp2

0x1eb0,	// (0x0002eae4) cell_graphic_popup_pane_g1_cp2

0x3c27,	// (0x0003085b) cell_graphic_popup_pane_g2_cp2

0x1eb8,	// (0x0002eaec) cell_graphic_popup_pane_g3_cp2

0x1ec0,	// (0x0002eaf4) cell_graphic_popup_pane_t2_cp2

0x3c38,	// (0x0003086c) grid_highlight_pane_cp3_cp2

0x7022,	// (0x00033c56) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6ce1,	// (0x00033915) main_tmo_pane_ParamLimits

0x02d5,	// (0x0002cf09) popup_tmo_big_image_note_window

0x1437,	// (0x0002e06b) cell_ai5_widget_list_pane

0x143f,	// (0x0002e073) cell_ai5_widget_lrg_icon_pane

0x1aa7,	// (0x0002e6db) tmo_note_info_pane_t1_ParamLimits

0x1abc,	// (0x0002e6f0) tmo_note_info_pane_t2_ParamLimits

0x1ad1,	// (0x0002e705) tmo_note_info_pane_t3_ParamLimits

0x1ae6,	// (0x0002e71a) tmo_note_info_pane_t4_ParamLimits

0x1af8,	// (0x0002e72c) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x0003cb0a) tmo_note_info_pane_t_ParamLimits

0x1c2c,	// (0x0002e860) settings_container_pane_ParamLimits

0x1e22,	// (0x0002ea56) indicator_popup_pane_cp5

0x1e22,	// (0x0002ea56) indicator_popup_pane_cp6

0x1e52,	// (0x0002ea86) list_set_graphic_pane_copy1_ParamLimits

0x3261,	// (0x0002fe95) bg_popup_window_pane_cp23

0x1ece,	// (0x0002eb02) popup_tmo_big_image_note_window_g1

0x1ed7,	// (0x0002eb0b) popup_tmo_big_image_note_window_t1

0x1ee5,	// (0x0002eb19) popup_tmo_big_image_note_window_t2

0x1ef3,	// (0x0002eb27) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0003cb23) popup_tmo_big_image_note_window_t

0x1f01,	// (0x0002eb35) cell_ai5_widget_lrg_icon_pane_g1

0x1f09,	// (0x0002eb3d) cell_ai5_widget_lrg_icon_pane_t1

0x1f17,	// (0x0002eb4b) cell_ai5_widget_list_row_pane_ParamLimits

0x1f17,	// (0x0002eb4b) cell_ai5_widget_list_row_pane

0x1f30,	// (0x0002eb64) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1f30,	// (0x0002eb64) cell_ai5_widget_list_row_pane_g1

0x1f3d,	// (0x0002eb71) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1f3d,	// (0x0002eb71) cell_ai5_widget_list_row_pane_t1

0x1f55,	// (0x0002eb89) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1f55,	// (0x0002eb89) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef6,	// (0x0003cb2a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x0003cb2a) cell_ai5_widget_list_row_pane_t

0xa1d0,	// (0x00036e04) main_fep_vtchi_ss_pane

0x1f67,	// (0x0002eb9b) popup_fep_char_pre_window

0x1f6f,	// (0x0002eba3) popup_fep_ituss_window

0x1f78,	// (0x0002ebac) popup_fep_vkbss_window

0x1f81,	// (0x0002ebb5) grid_vkbss_keypad_pane_ParamLimits

0x1f81,	// (0x0002ebb5) grid_vkbss_keypad_pane

0x1f91,	// (0x0002ebc5) ituss_keypad_pane

0x1f99,	// (0x0002ebcd) aid_vkbss_key_offset_ParamLimits

0x1f99,	// (0x0002ebcd) aid_vkbss_key_offset

0x1fa8,	// (0x0002ebdc) cell_vkbss_key_pane_ParamLimits

0x1fa8,	// (0x0002ebdc) cell_vkbss_key_pane

0x1fbe,	// (0x0002ebf2) bg_cell_vkbss_key_g1_ParamLimits

0x1fbe,	// (0x0002ebf2) bg_cell_vkbss_key_g1

0x1fca,	// (0x0002ebfe) cell_vkbss_key_3p_pane_ParamLimits

0x1fca,	// (0x0002ebfe) cell_vkbss_key_3p_pane

0x1fde,	// (0x0002ec12) cell_vkbss_key_g1_ParamLimits

0x1fde,	// (0x0002ec12) cell_vkbss_key_g1

0x1ff2,	// (0x0002ec26) cell_vkbss_key_t1_ParamLimits

0x1ff2,	// (0x0002ec26) cell_vkbss_key_t1

0x201d,	// (0x0002ec51) cell_ituss_key_pane_ParamLimits

0x201d,	// (0x0002ec51) cell_ituss_key_pane

0x202c,	// (0x0002ec60) bg_cell_ituss_key_g1_ParamLimits

0x202c,	// (0x0002ec60) bg_cell_ituss_key_g1

0x2038,	// (0x0002ec6c) cell_ituss_key_pane_g1_ParamLimits

0x2038,	// (0x0002ec6c) cell_ituss_key_pane_g1

0x2044,	// (0x0002ec78) cell_ituss_key_pane_g2_ParamLimits

0x2044,	// (0x0002ec78) cell_ituss_key_pane_g2

0x0001,

0xfefb,	// (0x0003cb2f) cell_ituss_key_pane_g_ParamLimits

0xfefb,	// (0x0003cb2f) cell_ituss_key_pane_g

0x2057,	// (0x0002ec8b) cell_ituss_key_t1_ParamLimits

0x2057,	// (0x0002ec8b) cell_ituss_key_t1

0x2075,	// (0x0002eca9) cell_ituss_key_t2_ParamLimits

0x2075,	// (0x0002eca9) cell_ituss_key_t2

0x2094,	// (0x0002ecc8) cell_ituss_key_t3_ParamLimits

0x2094,	// (0x0002ecc8) cell_ituss_key_t3

0x20b3,	// (0x0002ece7) cell_ituss_key_t4_ParamLimits

0x20b3,	// (0x0002ece7) cell_ituss_key_t4

0x0003,

0xff00,	// (0x0003cb34) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0003cb34) cell_ituss_key_t

0x20d2,	// (0x0002ed06) cell_vkbss_key_3p_pane_g1

0x20da,	// (0x0002ed0e) cell_vkbss_key_3p_pane_g2

0x20e2,	// (0x0002ed16) cell_vkbss_key_3p_pane_g3

0x0002,

0xff09,	// (0x0003cb3d) cell_vkbss_key_3p_pane_g

0x3261,	// (0x0002fe95) bg_popup_fep_char_preview_window_cp02

0x20ea,	// (0x0002ed1e) popup_fep_char_pre_window_t1

0x140f,	// (0x0002e043) main_ai5_sk_pane

0x1b72,	// (0x0002e7a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1b7e,	// (0x0002e7b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1b92,	// (0x0002e7c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1ba1,	// (0x0002e7d5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x0003cb15) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1bb4,	// (0x0002e7e8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6ce1,	// (0x00033915) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x20f9,	// (0x0002ed2d) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large

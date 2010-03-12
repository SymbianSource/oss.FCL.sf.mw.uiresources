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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005986f };

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
0x9dde,	// (0x0006364d) Screen

0x9dea,	// (0x00063659) application_window_ParamLimits

0x9dea,	// (0x00063659) application_window

0x5355,	// (0x0005ebc4) screen_g1

0x9e22,	// (0x00063691) area_bottom_pane_ParamLimits

0x9e22,	// (0x00063691) area_bottom_pane

0xeda4,	// (0x00068613) area_top_pane_ParamLimits

0xeda4,	// (0x00068613) area_top_pane

0xee42,	// (0x000686b1) main_pane_ParamLimits

0xee42,	// (0x000686b1) main_pane

0x535f,	// (0x0005ebce) misc_graphics

0xb76b,	// (0x00064fda) battery_pane_ParamLimits

0xb76b,	// (0x00064fda) battery_pane

0x2df8,	// (0x0005c667) bg_status_flat_pane_g8

0x2e00,	// (0x0005c66f) bg_status_flat_pane_g9

0x216e,	// (0x0005b9dd) context_pane_ParamLimits

0x216e,	// (0x0005b9dd) context_pane

0xc16b,	// (0x000659da) navi_pane_ParamLimits

0xc16b,	// (0x000659da) navi_pane

0xc1f5,	// (0x00065a64) signal_pane_ParamLimits

0xc1f5,	// (0x00065a64) signal_pane

0x0008,

0xf87f,	// (0x000690ee) bg_status_flat_pane_g

0xc285,	// (0x00065af4) status_pane_g1_ParamLimits

0xc285,	// (0x00065af4) status_pane_g1

0xc29b,	// (0x00065b0a) status_pane_g2_ParamLimits

0xc29b,	// (0x00065b0a) status_pane_g2

0x23af,	// (0x0005bc1e) status_pane_g3_ParamLimits

0x23af,	// (0x0005bc1e) status_pane_g3

0x0004,

0xf7ab,	// (0x0006901a) status_pane_g_ParamLimits

0xf7ab,	// (0x0006901a) status_pane_g

0xc2a7,	// (0x00065b16) title_pane_ParamLimits

0xc2a7,	// (0x00065b16) title_pane

0xc30a,	// (0x00065b79) uni_indicator_pane_ParamLimits

0xc30a,	// (0x00065b79) uni_indicator_pane

0x1fc0,	// (0x0005b82f) bg_list_pane_ParamLimits

0x1fc0,	// (0x0005b82f) bg_list_pane

0xaf9f,	// (0x0006480e) find_pane

0xafa7,	// (0x00064816) listscroll_app_pane_ParamLimits

0xafa7,	// (0x00064816) listscroll_app_pane

0x1ff4,	// (0x0005b863) listscroll_form_pane

0xafb3,	// (0x00064822) listscroll_gen_pane_ParamLimits

0xafb3,	// (0x00064822) listscroll_gen_pane

0x1ff4,	// (0x0005b863) listscroll_set_pane

0x3b65,	// (0x0005d3d4) main_idle_act_pane

0x1cc2,	// (0x0005b531) main_idle_trad_pane

0x1cc2,	// (0x0005b531) main_list_empty_pane

0x200e,	// (0x0005b87d) main_midp_pane

0x201a,	// (0x0005b889) main_pane_g1_ParamLimits

0x201a,	// (0x0005b889) main_pane_g1

0xafc7,	// (0x00064836) popup_ai_message_window_ParamLimits

0xafc7,	// (0x00064836) popup_ai_message_window

0xb067,	// (0x000648d6) popup_fep_china_uni_window_ParamLimits

0xb067,	// (0x000648d6) popup_fep_china_uni_window

0x0273,	// (0x00059ae2) popup_fep_japan_candidate_window_ParamLimits

0x0273,	// (0x00059ae2) popup_fep_japan_candidate_window

0x029d,	// (0x00059b0c) popup_fep_japan_predictive_window_ParamLimits

0x029d,	// (0x00059b0c) popup_fep_japan_predictive_window

0xb0c7,	// (0x00064936) popup_find_window

0xb0e4,	// (0x00064953) popup_grid_graphic_window_ParamLimits

0xb0e4,	// (0x00064953) popup_grid_graphic_window

0x030e,	// (0x00059b7d) popup_large_graphic_colour_window

0xb188,	// (0x000649f7) popup_menu_window_ParamLimits

0xb188,	// (0x000649f7) popup_menu_window

0xb378,	// (0x00064be7) popup_note_image_window

0xb338,	// (0x00064ba7) popup_note_wait_window_ParamLimits

0xb338,	// (0x00064ba7) popup_note_wait_window

0xb390,	// (0x00064bff) popup_note_window_ParamLimits

0xb390,	// (0x00064bff) popup_note_window

0xb43e,	// (0x00064cad) popup_query_code_window_ParamLimits

0xb43e,	// (0x00064cad) popup_query_code_window

0x057a,	// (0x00059de9) popup_query_data_code_window_ParamLimits

0x057a,	// (0x00059de9) popup_query_data_code_window

0xb47e,	// (0x00064ced) popup_query_data_window_ParamLimits

0xb47e,	// (0x00064ced) popup_query_data_window

0xb512,	// (0x00064d81) popup_query_sat_info_window_ParamLimits

0xb512,	// (0x00064d81) popup_query_sat_info_window

0xb5bd,	// (0x00064e2c) popup_snote_single_graphic_window_ParamLimits

0xb5bd,	// (0x00064e2c) popup_snote_single_graphic_window

0xb5bd,	// (0x00064e2c) popup_snote_single_text_window_ParamLimits

0xb5bd,	// (0x00064e2c) popup_snote_single_text_window

0x0615,	// (0x00059e84) popup_sub_window_general

0x075b,	// (0x00059fca) popup_window_general_ParamLimits

0x075b,	// (0x00059fca) popup_window_general

0x2028,	// (0x0005b897) power_save_pane

0xae0d,	// (0x0006467c) control_pane_g1_ParamLimits

0xae0d,	// (0x0006467c) control_pane_g1

0xae36,	// (0x000646a5) control_pane_g2_ParamLimits

0xae36,	// (0x000646a5) control_pane_g2

0x1f83,	// (0x0005b7f2) control_pane_g3_ParamLimits

0x1f83,	// (0x0005b7f2) control_pane_g3

0x0007,

0xf793,	// (0x00069002) control_pane_g_ParamLimits

0xf793,	// (0x00069002) control_pane_g

0xae98,	// (0x00064707) control_pane_t1_ParamLimits

0xae98,	// (0x00064707) control_pane_t1

0xaef6,	// (0x00064765) control_pane_t2_ParamLimits

0xaef6,	// (0x00064765) control_pane_t2

0x0002,

0xf7a4,	// (0x00069013) control_pane_t_ParamLimits

0xf7a4,	// (0x00069013) control_pane_t

0x1ea4,	// (0x0005b713) navi_navi_volume_pane_cp1

0x1ead,	// (0x0005b71c) status_small_icon_pane

0x1eb5,	// (0x0005b724) status_small_pane_g1_ParamLimits

0x1eb5,	// (0x0005b724) status_small_pane_g1

0x1ee9,	// (0x0005b758) status_small_pane_g2_ParamLimits

0x1ee9,	// (0x0005b758) status_small_pane_g2

0x1ef5,	// (0x0005b764) status_small_pane_g3_ParamLimits

0x1ef5,	// (0x0005b764) status_small_pane_g3

0x1f01,	// (0x0005b770) status_small_pane_g4_ParamLimits

0x1f01,	// (0x0005b770) status_small_pane_g4

0x1f0d,	// (0x0005b77c) status_small_pane_g5_ParamLimits

0x1f0d,	// (0x0005b77c) status_small_pane_g5

0x1f1c,	// (0x0005b78b) status_small_pane_g6_ParamLimits

0x1f1c,	// (0x0005b78b) status_small_pane_g6

0x0007,

0xf782,	// (0x00068ff1) status_small_pane_g_ParamLimits

0xf782,	// (0x00068ff1) status_small_pane_g

0x1f4c,	// (0x0005b7bb) status_small_pane_t1

0x1f6f,	// (0x0005b7de) status_small_wait_pane_ParamLimits

0x1f6f,	// (0x0005b7de) status_small_wait_pane

0xab52,	// (0x000643c1) aid_levels_signal_ParamLimits

0xab52,	// (0x000643c1) aid_levels_signal

0xab6a,	// (0x000643d9) signal_pane_g1_ParamLimits

0xab6a,	// (0x000643d9) signal_pane_g1

0xab85,	// (0x000643f4) signal_pane_g2_ParamLimits

0xab85,	// (0x000643f4) signal_pane_g2

0x0003,

0xf713,	// (0x00068f82) signal_pane_g_ParamLimits

0xf713,	// (0x00068f82) signal_pane_g

0xdec8,	// (0x00067737) context_pane_g1

0x9f9f,	// (0x0006380e) title_pane_g1

0x9fd6,	// (0x00063845) title_pane_t1

0x5375,	// (0x0005ebe4) title_pane_t2

0x539b,	// (0x0005ec0a) title_pane_t3

0x0002,

0xf55d,	// (0x00068dcc) title_pane_t

0xc332,	// (0x00065ba1) aid_levels_battery_ParamLimits

0xc332,	// (0x00065ba1) aid_levels_battery

0xc34e,	// (0x00065bbd) battery_pane_g1_ParamLimits

0xc34e,	// (0x00065bbd) battery_pane_g1

0xc36b,	// (0x00065bda) battery_pane_g2_ParamLimits

0xc36b,	// (0x00065bda) battery_pane_g2

0x0001,

0xf7b6,	// (0x00069025) battery_pane_g_ParamLimits

0xf7b6,	// (0x00069025) battery_pane_g

0xc621,	// (0x00065e90) uni_indicator_pane_g1

0xc636,	// (0x00065ea5) uni_indicator_pane_g2

0xc64b,	// (0x00065eba) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00069196) uni_indicator_pane_g

0x1b30,	// (0x0005b39f) navi_icon_pane_ParamLimits

0x1b30,	// (0x0005b39f) navi_icon_pane

0xe0fa,	// (0x00067969) navi_midp_pane

0x1b4c,	// (0x0005b3bb) navi_navi_pane

0x1b56,	// (0x0005b3c5) navi_text_pane_ParamLimits

0x1b56,	// (0x0005b3c5) navi_text_pane

0x5355,	// (0x0005ebc4) status_small_wait_pane_g1

0x8bc7,	// (0x00062436) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00069191) status_small_wait_pane_g

0xc588,	// (0x00065df7) navi_navi_icon_text_pane

0xc590,	// (0x00065dff) navi_navi_pane_g1_ParamLimits

0xc590,	// (0x00065dff) navi_navi_pane_g1

0xc5a2,	// (0x00065e11) navi_navi_pane_g2_ParamLimits

0xc5a2,	// (0x00065e11) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0006915f) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0006915f) navi_navi_pane_g

0x3487,	// (0x0005ccf6) navi_navi_tabs_pane

0xc5b4,	// (0x00065e23) navi_navi_text_pane

0xc588,	// (0x00065df7) navi_navi_volume_pane

0xc576,	// (0x00065de5) navi_text_pane_t1

0xc56a,	// (0x00065dd9) navi_icon_pane_g1

0x3378,	// (0x0005cbe7) navi_navi_text_pane_t1

0xba21,	// (0x00065290) navi_navi_volume_pane_g1

0xba29,	// (0x00065298) volume_small_pane

0xc4b2,	// (0x00065d21) navi_navi_icon_text_pane_g1

0xc4ba,	// (0x00065d29) navi_navi_icon_text_pane_t1

0x1b4c,	// (0x0005b3bb) navi_tabs_2_long_pane

0x1b4c,	// (0x0005b3bb) navi_tabs_2_pane

0x1b4c,	// (0x0005b3bb) navi_tabs_3_long_pane

0x1b4c,	// (0x0005b3bb) navi_tabs_3_pane

0x1b4c,	// (0x0005b3bb) navi_tabs_4_pane

0xba01,	// (0x00065270) tabs_2_active_pane_ParamLimits

0xba01,	// (0x00065270) tabs_2_active_pane

0xba11,	// (0x00065280) tabs_2_passive_pane_ParamLimits

0xba11,	// (0x00065280) tabs_2_passive_pane

0xb9cf,	// (0x0006523e) tabs_3_active_pane_ParamLimits

0xb9cf,	// (0x0006523e) tabs_3_active_pane

0xb9df,	// (0x0006524e) tabs_3_passive_pane_ParamLimits

0xb9df,	// (0x0006524e) tabs_3_passive_pane

0xb9f0,	// (0x0006525f) tabs_3_passive_pane_cp_ParamLimits

0xb9f0,	// (0x0006525f) tabs_3_passive_pane_cp

0xb98b,	// (0x000651fa) tabs_4_active_pane_ParamLimits

0xb98b,	// (0x000651fa) tabs_4_active_pane

0xb99c,	// (0x0006520b) tabs_4_passive_pane_ParamLimits

0xb99c,	// (0x0006520b) tabs_4_passive_pane

0xb9ad,	// (0x0006521c) tabs_4_passive_pane_cp_ParamLimits

0xb9ad,	// (0x0006521c) tabs_4_passive_pane_cp

0xb9be,	// (0x0006522d) tabs_4_passive_pane_cp2_ParamLimits

0xb9be,	// (0x0006522d) tabs_4_passive_pane_cp2

0xb967,	// (0x000651d6) tabs_2_long_active_pane_ParamLimits

0xb967,	// (0x000651d6) tabs_2_long_active_pane

0xb979,	// (0x000651e8) tabs_2_long_passive_pane_ParamLimits

0xb979,	// (0x000651e8) tabs_2_long_passive_pane

0xb91c,	// (0x0006518b) tabs_3_long_active_pane_ParamLimits

0xb91c,	// (0x0006518b) tabs_3_long_active_pane

0xb935,	// (0x000651a4) tabs_3_long_passive_pane_ParamLimits

0xb935,	// (0x000651a4) tabs_3_long_passive_pane

0xb94e,	// (0x000651bd) tabs_3_long_passive_pane_cp_ParamLimits

0xb94e,	// (0x000651bd) tabs_3_long_passive_pane_cp

0x08dc,	// (0x0005a14b) volume_small_pane_g1

0xb8cb,	// (0x0006513a) volume_small_pane_g2

0xb8d4,	// (0x00065143) volume_small_pane_g3

0xb8dd,	// (0x0006514c) volume_small_pane_g4

0xb8e6,	// (0x00065155) volume_small_pane_g5

0xb8ef,	// (0x0006515e) volume_small_pane_g6

0xb8f8,	// (0x00065167) volume_small_pane_g7

0xb901,	// (0x00065170) volume_small_pane_g8

0xb90a,	// (0x00065179) volume_small_pane_g9

0xb913,	// (0x00065182) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0006912b) volume_small_pane_g

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp2_ParamLimits

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp2

0xa062,	// (0x000638d1) tabs_3_active_pane_g1

0xa06a,	// (0x000638d9) tabs_3_active_pane_t1

0x54e0,	// (0x0005ed4f) bg_passive_tab_pane_cp2_ParamLimits

0x54e0,	// (0x0005ed4f) bg_passive_tab_pane_cp2

0xa062,	// (0x000638d1) tabs_3_passive_pane_g1

0xa06a,	// (0x000638d9) tabs_3_passive_pane_t1

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp3_ParamLimits

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp3

0xa07c,	// (0x000638eb) tabs_4_active_pane_g1

0xa084,	// (0x000638f3) tabs_4_active_pane_t1

0x54e0,	// (0x0005ed4f) bg_passive_tab_pane_cp3_ParamLimits

0x54e0,	// (0x0005ed4f) bg_passive_tab_pane_cp3

0xa07c,	// (0x000638eb) tabs_4_1_passive_pane_g1

0xa084,	// (0x000638f3) tabs_4_1_passive_pane_t1

0x200e,	// (0x0005b87d) list_highlight_pane_cp2

0xc709,	// (0x00065f78) list_set_pane_ParamLimits

0xc709,	// (0x00065f78) list_set_pane

0xc7d1,	// (0x00066040) main_pane_set_t1_ParamLimits

0xc7d1,	// (0x00066040) main_pane_set_t1

0xc7f1,	// (0x00066060) main_pane_set_t2_ParamLimits

0xc7f1,	// (0x00066060) main_pane_set_t2

0xc805,	// (0x00066074) main_pane_set_t3_ParamLimits

0xc805,	// (0x00066074) main_pane_set_t3

0xc819,	// (0x00066088) main_pane_set_t4_ParamLimits

0xc819,	// (0x00066088) main_pane_set_t4

0x0003,

0xf98c,	// (0x000691fb) main_pane_set_t_ParamLimits

0xf98c,	// (0x000691fb) main_pane_set_t

0xc82d,	// (0x0006609c) setting_code_pane

0x3cb9,	// (0x0005d528) setting_slider_graphic_pane

0x3cb9,	// (0x0005d528) setting_slider_pane

0x3cb9,	// (0x0005d528) setting_text_pane

0x3cb9,	// (0x0005d528) setting_volume_pane

0xefbe,	// (0x0006882d) volume_set_pane

0x53ad,	// (0x0005ec1c) bg_set_opt_pane_cp

0xefc8,	// (0x00068837) setting_slider_pane_t1

0xefe1,	// (0x00068850) setting_slider_pane_t2

0xeffb,	// (0x0006886a) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00068dd3) setting_slider_pane_t

0xf013,	// (0x00068882) slider_set_pane

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp2

0x53bb,	// (0x0005ec2a) setting_slider_graphic_pane_g1

0xf029,	// (0x00068898) setting_slider_graphic_pane_t1

0xf039,	// (0x000688a8) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00068dda) setting_slider_graphic_pane_t

0xf049,	// (0x000688b8) slider_set_pane_cp

0x535f,	// (0x0005ebce) input_focus_pane_cp1

0x3b4c,	// (0x0005d3bb) list_set_text_pane

0x5355,	// (0x0005ebc4) setting_text_pane_g1

0x535f,	// (0x0005ebce) input_focus_pane_cp2

0x5355,	// (0x0005ebc4) setting_code_pane_g1

0x53c4,	// (0x0005ec33) setting_code_pane_t1

0xdd1a,	// (0x00067589) set_text_pane_t1_ParamLimits

0xdd1a,	// (0x00067589) set_text_pane_t1

0x8f68,	// (0x000627d7) set_opt_bg_pane_g1

0x8f70,	// (0x000627df) set_opt_bg_pane_g2

0x3b24,	// (0x0005d393) set_opt_bg_pane_g3

0x8f80,	// (0x000627ef) set_opt_bg_pane_g4

0x8f88,	// (0x000627f7) set_opt_bg_pane_g5

0x8f90,	// (0x000627ff) set_opt_bg_pane_g6

0x3b2e,	// (0x0005d39d) set_opt_bg_pane_g7

0x3b38,	// (0x0005d3a7) set_opt_bg_pane_g8

0x3b42,	// (0x0005d3b1) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x000691e8) set_opt_bg_pane_g

0x3b17,	// (0x0005d386) slider_set_pane_g1

0x0ae8,	// (0x0005a357) slider_set_pane_g2

0x0006,

0xf96a,	// (0x000691d9) slider_set_pane_g

0x0a48,	// (0x0005a2b7) volume_set_pane_g1

0x0a52,	// (0x0005a2c1) volume_set_pane_g2

0x0a5c,	// (0x0005a2cb) volume_set_pane_g3

0x0a66,	// (0x0005a2d5) volume_set_pane_g4

0x0a70,	// (0x0005a2df) volume_set_pane_g5

0x0a7a,	// (0x0005a2e9) volume_set_pane_g6

0x0a84,	// (0x0005a2f3) volume_set_pane_g7

0x0a8e,	// (0x0005a2fd) volume_set_pane_g8

0x0a98,	// (0x0005a307) volume_set_pane_g9

0x0aa2,	// (0x0005a311) volume_set_pane_g10

0x0009,

0xf942,	// (0x000691b1) volume_set_pane_g

0xa096,	// (0x00063905) indicator_pane_ParamLimits

0xa096,	// (0x00063905) indicator_pane

0xa0c2,	// (0x00063931) main_idle_pane_g2_ParamLimits

0xa0c2,	// (0x00063931) main_idle_pane_g2

0xa0fa,	// (0x00063969) main_pane_idle_g1_ParamLimits

0xa0fa,	// (0x00063969) main_pane_idle_g1

0x53d2,	// (0x0005ec41) popup_clock_digital_analogue_window_ParamLimits

0x53d2,	// (0x0005ec41) popup_clock_digital_analogue_window

0xa128,	// (0x00063997) soft_indicator_pane_ParamLimits

0xa128,	// (0x00063997) soft_indicator_pane

0xa144,	// (0x000639b3) wallpaper_pane_ParamLimits

0xa144,	// (0x000639b3) wallpaper_pane

0x5355,	// (0x0005ebc4) wallpaper_pane_g1

0xa156,	// (0x000639c5) indicator_pane_g1_ParamLimits

0xa156,	// (0x000639c5) indicator_pane_g1

0x3f69,	// (0x0005d7d8) navi_navi_icon_text_pane_srt_g1

0x5400,	// (0x0005ec6f) soft_indicator_pane_t1

0x541a,	// (0x0005ec89) aid_ps_area_pane

0xa16f,	// (0x000639de) aid_ps_clock_pane

0x542b,	// (0x0005ec9a) aid_ps_indicator_pane

0x5437,	// (0x0005eca6) indicator_ps_pane_ParamLimits

0x5437,	// (0x0005eca6) indicator_ps_pane

0x5446,	// (0x0005ecb5) power_save_pane_g1_ParamLimits

0x5446,	// (0x0005ecb5) power_save_pane_g1

0x5452,	// (0x0005ecc1) power_save_pane_g2_ParamLimits

0x5452,	// (0x0005ecc1) power_save_pane_g2

0xed84,	// (0x000685f3) aid_navinavi_width_pane

0x541a,	// (0x0005ec89) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00068ddf) power_save_pane_g_ParamLimits

0xf570,	// (0x00068ddf) power_save_pane_g

0x5460,	// (0x0005eccf) power_save_pane_t1_ParamLimits

0x5460,	// (0x0005eccf) power_save_pane_t1

0xa16f,	// (0x000639de) aid_ps_clock_pane_ParamLimits

0x542b,	// (0x0005ec9a) aid_ps_indicator_pane_ParamLimits

0x5472,	// (0x0005ece1) power_save_pane_t4_ParamLimits

0x5472,	// (0x0005ece1) power_save_pane_t4

0x0001,

0xf575,	// (0x00068de4) power_save_pane_t_ParamLimits

0xf575,	// (0x00068de4) power_save_pane_t

0x549c,	// (0x0005ed0b) power_save_t3_ParamLimits

0x549c,	// (0x0005ed0b) power_save_t3

0x5487,	// (0x0005ecf6) power_save_t2_ParamLimits

0x5487,	// (0x0005ecf6) power_save_t2

0x54b1,	// (0x0005ed20) indicator_ps_pane_g1

0xa17d,	// (0x000639ec) ai_gene_pane_ParamLimits

0xa17d,	// (0x000639ec) ai_gene_pane

0xa194,	// (0x00063a03) ai_links_pane_ParamLimits

0xa194,	// (0x00063a03) ai_links_pane

0xa1ac,	// (0x00063a1b) indicator_pane_cp1_ParamLimits

0xa1ac,	// (0x00063a1b) indicator_pane_cp1

0xa1bb,	// (0x00063a2a) main_pane_idle_g1_cp_ParamLimits

0xa1bb,	// (0x00063a2a) main_pane_idle_g1_cp

0x54ba,	// (0x0005ed29) popup_ai_links_title_window

0xa1d3,	// (0x00063a42) soft_indicator_pane_cp1_ParamLimits

0xa1d3,	// (0x00063a42) soft_indicator_pane_cp1

0x38ea,	// (0x0005d159) ai_links_pane_g1

0x38f3,	// (0x0005d162) grid_ai_links_pane

0xc618,	// (0x00065e87) ai_gene_pane_1

0x38d8,	// (0x0005d147) ai_gene_pane_2

0x38e1,	// (0x0005d150) list_highlight_pane_cp4

0xc5f4,	// (0x00065e63) cell_ai_link_pane_ParamLimits

0xc5f4,	// (0x00065e63) cell_ai_link_pane

0x38a7,	// (0x0005d116) cell_ai_link_pane_g1

0x8bc7,	// (0x00062436) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0006918c) cell_ai_link_pane_g

0x535f,	// (0x0005ebce) grid_highlight_cp2

0x535f,	// (0x0005ebce) bg_popup_sub_pane_cp1

0x54d1,	// (0x0005ed40) popup_ai_links_title_window_t1

0x37f3,	// (0x0005d062) ai_gene_pane_1_g1_ParamLimits

0x37f3,	// (0x0005d062) ai_gene_pane_1_g1

0x37ff,	// (0x0005d06e) ai_gene_pane_1_g2_ParamLimits

0x37ff,	// (0x0005d06e) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00069182) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00069182) ai_gene_pane_1_g

0x380c,	// (0x0005d07b) ai_gene_pane_1_t1_ParamLimits

0x380c,	// (0x0005d07b) ai_gene_pane_1_t1

0x3840,	// (0x0005d0af) grid_ai_soft_ind_pane

0x37de,	// (0x0005d04d) ai_gene_pane_2_t1_ParamLimits

0x37de,	// (0x0005d04d) ai_gene_pane_2_t1

0xa1e7,	// (0x00063a56) main_pane_empty_t1_ParamLimits

0xa1e7,	// (0x00063a56) main_pane_empty_t1

0xa1ff,	// (0x00063a6e) main_pane_empty_t2_ParamLimits

0xa1ff,	// (0x00063a6e) main_pane_empty_t2

0xa214,	// (0x00063a83) main_pane_empty_t3_ParamLimits

0xa214,	// (0x00063a83) main_pane_empty_t3

0xa226,	// (0x00063a95) main_pane_empty_t4_ParamLimits

0xa226,	// (0x00063a95) main_pane_empty_t4

0xa238,	// (0x00063aa7) main_pane_empty_t5_ParamLimits

0xa238,	// (0x00063aa7) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00068de9) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00068de9) main_pane_empty_t

0x8fb9,	// (0x00062828) bg_popup_window_pane_ParamLimits

0x8fb9,	// (0x00062828) bg_popup_window_pane

0x3386,	// (0x0005cbf5) find_popup_pane_cp2_ParamLimits

0x3386,	// (0x0005cbf5) find_popup_pane_cp2

0x3392,	// (0x0005cc01) heading_pane_ParamLimits

0x3392,	// (0x0005cc01) heading_pane

0x535f,	// (0x0005ebce) bg_popup_sub_pane

0xc4d7,	// (0x00065d46) bg_popup_window_pane_g1_ParamLimits

0xc4d7,	// (0x00065d46) bg_popup_window_pane_g1

0xc4e6,	// (0x00065d55) bg_popup_window_pane_g2_ParamLimits

0xc4e6,	// (0x00065d55) bg_popup_window_pane_g2

0xc4f2,	// (0x00065d61) bg_popup_window_pane_g3_ParamLimits

0xc4f2,	// (0x00065d61) bg_popup_window_pane_g3

0xc4fe,	// (0x00065d6d) bg_popup_window_pane_g4_ParamLimits

0xc4fe,	// (0x00065d6d) bg_popup_window_pane_g4

0xc50d,	// (0x00065d7c) bg_popup_window_pane_g5_ParamLimits

0xc50d,	// (0x00065d7c) bg_popup_window_pane_g5

0xc51d,	// (0x00065d8c) bg_popup_window_pane_g6_ParamLimits

0xc51d,	// (0x00065d8c) bg_popup_window_pane_g6

0xc529,	// (0x00065d98) bg_popup_window_pane_g7_ParamLimits

0xc529,	// (0x00065d98) bg_popup_window_pane_g7

0xc538,	// (0x00065da7) bg_popup_window_pane_g8_ParamLimits

0xc538,	// (0x00065da7) bg_popup_window_pane_g8

0xc547,	// (0x00065db6) bg_popup_window_pane_g9_ParamLimits

0xc547,	// (0x00065db6) bg_popup_window_pane_g9

0x336c,	// (0x0005cbdb) bg_popup_window_pane_g10_ParamLimits

0x336c,	// (0x0005cbdb) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0006914a) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0006914a) bg_popup_window_pane_g

0x3295,	// (0x0005cb04) bg_popup_heading_pane_ParamLimits

0x3295,	// (0x0005cb04) bg_popup_heading_pane

0x0bbc,	// (0x0005a42b) tabs_4_passive_pane_cp_srt_ParamLimits

0x0bbc,	// (0x0005a42b) tabs_4_passive_pane_cp_srt

0x0bce,	// (0x0005a43d) tabs_4_passive_pane_srt_ParamLimits

0x32a9,	// (0x0005cb18) heading_pane_g2

0x0bce,	// (0x0005a43d) tabs_4_passive_pane_srt

0x2642,	// (0x0005beb1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2642,	// (0x0005beb1) bg_passive_tab_pane_cp3_srt

0x32b1,	// (0x0005cb20) heading_pane_t1_ParamLimits

0x32b1,	// (0x0005cb20) heading_pane_t1

0x32c8,	// (0x0005cb37) heading_pane_t2_ParamLimits

0x32c8,	// (0x0005cb37) heading_pane_t2

0x0001,

0xf8d6,	// (0x00069145) heading_pane_t_ParamLimits

0xf8d6,	// (0x00069145) heading_pane_t

0x2dc0,	// (0x0005c62f) bg_popup_heading_pane_g1

0x2e6f,	// (0x0005c6de) bg_popup_heading_pane_g2

0x2e79,	// (0x0005c6e8) bg_popup_heading_pane_g3

0x2e83,	// (0x0005c6f2) bg_popup_heading_pane_g4

0x2e8d,	// (0x0005c6fc) bg_popup_heading_pane_g5

0x2e97,	// (0x0005c706) bg_popup_heading_pane_g6

0x2e9f,	// (0x0005c70e) bg_popup_heading_pane_g7

0x2ea7,	// (0x0005c716) bg_popup_heading_pane_g8

0x2eb1,	// (0x0005c720) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00069101) bg_popup_heading_pane_g

0x2546,	// (0x0005bdb5) bg_popup_sub_pane_g1

0x2556,	// (0x0005bdc5) bg_popup_sub_pane_g2

0x254e,	// (0x0005bdbd) bg_popup_sub_pane_g3

0x2566,	// (0x0005bdd5) bg_popup_sub_pane_g4

0x255e,	// (0x0005bdcd) bg_popup_sub_pane_g5

0x256e,	// (0x0005bddd) bg_popup_sub_pane_g6

0x2576,	// (0x0005bde5) bg_popup_sub_pane_g7

0x2586,	// (0x0005bdf5) bg_popup_sub_pane_g8

0x257e,	// (0x0005bded) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x000690db) bg_popup_sub_pane_g

0x54e0,	// (0x0005ed4f) bg_popup_window_pane_cp5_ParamLimits

0x54e0,	// (0x0005ed4f) bg_popup_window_pane_cp5

0x54fc,	// (0x0005ed6b) popup_note_window_g1_ParamLimits

0x54fc,	// (0x0005ed6b) popup_note_window_g1

0x5508,	// (0x0005ed77) popup_note_window_t1_ParamLimits

0x5508,	// (0x0005ed77) popup_note_window_t1

0x551e,	// (0x0005ed8d) popup_note_window_t2_ParamLimits

0x551e,	// (0x0005ed8d) popup_note_window_t2

0x5534,	// (0x0005eda3) popup_note_window_t3_ParamLimits

0x5534,	// (0x0005eda3) popup_note_window_t3

0x554a,	// (0x0005edb9) popup_note_window_t4_ParamLimits

0x554a,	// (0x0005edb9) popup_note_window_t4

0x5572,	// (0x0005ede1) popup_note_window_t5_ParamLimits

0x5572,	// (0x0005ede1) popup_note_window_t5

0x0004,

0xf585,	// (0x00068df4) popup_note_window_t_ParamLimits

0xf585,	// (0x00068df4) popup_note_window_t

0x5596,	// (0x0005ee05) bg_popup_window_pane_cp6_ParamLimits

0x5596,	// (0x0005ee05) bg_popup_window_pane_cp6

0x2d3c,	// (0x0005c5ab) popup_note_image_window_g1_ParamLimits

0x2d3c,	// (0x0005c5ab) popup_note_image_window_g1

0x2d48,	// (0x0005c5b7) popup_note_image_window_g2_ParamLimits

0x2d48,	// (0x0005c5b7) popup_note_image_window_g2

0x0001,

0xf860,	// (0x000690cf) popup_note_image_window_g_ParamLimits

0xf860,	// (0x000690cf) popup_note_image_window_g

0x2d61,	// (0x0005c5d0) popup_note_image_window_t1_ParamLimits

0x2d61,	// (0x0005c5d0) popup_note_image_window_t1

0x2d7a,	// (0x0005c5e9) popup_note_image_window_t2_ParamLimits

0x2d7a,	// (0x0005c5e9) popup_note_image_window_t2

0x2d93,	// (0x0005c602) popup_note_image_window_t3_ParamLimits

0x2d93,	// (0x0005c602) popup_note_image_window_t3

0x0002,

0xf865,	// (0x000690d4) popup_note_image_window_t_ParamLimits

0xf865,	// (0x000690d4) popup_note_image_window_t

0x2bfc,	// (0x0005c46b) bg_popup_window_pane_cp7_ParamLimits

0x2bfc,	// (0x0005c46b) bg_popup_window_pane_cp7

0x2c2c,	// (0x0005c49b) popup_note_wait_window_g1_ParamLimits

0x2c2c,	// (0x0005c49b) popup_note_wait_window_g1

0x2c38,	// (0x0005c4a7) popup_note_wait_window_g2_ParamLimits

0x2c38,	// (0x0005c4a7) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x000690bd) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x000690bd) popup_note_wait_window_g

0x2c50,	// (0x0005c4bf) popup_note_wait_window_t1_ParamLimits

0x2c50,	// (0x0005c4bf) popup_note_wait_window_t1

0x2c77,	// (0x0005c4e6) popup_note_wait_window_t2_ParamLimits

0x2c77,	// (0x0005c4e6) popup_note_wait_window_t2

0x2c95,	// (0x0005c504) popup_note_wait_window_t3_ParamLimits

0x2c95,	// (0x0005c504) popup_note_wait_window_t3

0x2ca8,	// (0x0005c517) popup_note_wait_window_t4_ParamLimits

0x2ca8,	// (0x0005c517) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x000690c4) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x000690c4) popup_note_wait_window_t

0x2ccd,	// (0x0005c53c) wait_bar_pane_ParamLimits

0x2ccd,	// (0x0005c53c) wait_bar_pane

0x535f,	// (0x0005ebce) wait_anim_pane

0x535f,	// (0x0005ebce) wait_border_pane

0x5355,	// (0x0005ebc4) wait_anim_pane_g1

0x5355,	// (0x0005ebc4) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00068f7d) wait_anim_pane_g

0x2ba0,	// (0x0005c40f) wait_border_pane_g1

0x2bab,	// (0x0005c41a) wait_border_pane_g2

0x2bb4,	// (0x0005c423) wait_border_pane_g3

0x0002,

0xf847,	// (0x000690b6) wait_border_pane_g

0x2a0a,	// (0x0005c279) bg_popup_window_pane_cp16_ParamLimits

0x2a0a,	// (0x0005c279) bg_popup_window_pane_cp16

0x2b0a,	// (0x0005c379) indicator_popup_pane_cp4_ParamLimits

0x2b0a,	// (0x0005c379) indicator_popup_pane_cp4

0x2b1e,	// (0x0005c38d) popup_query_data_window_t1_ParamLimits

0x2b1e,	// (0x0005c38d) popup_query_data_window_t1

0x2b30,	// (0x0005c39f) popup_query_data_window_t2_ParamLimits

0x2b30,	// (0x0005c39f) popup_query_data_window_t2

0x2b49,	// (0x0005c3b8) popup_query_data_window_t3_ParamLimits

0x2b49,	// (0x0005c3b8) popup_query_data_window_t3

0x0002,

0xf840,	// (0x000690af) popup_query_data_window_t_ParamLimits

0xf840,	// (0x000690af) popup_query_data_window_t

0x2b63,	// (0x0005c3d2) query_popup_data_pane_ParamLimits

0x2b63,	// (0x0005c3d2) query_popup_data_pane

0x2b77,	// (0x0005c3e6) query_popup_data_pane_cp1_ParamLimits

0x2b77,	// (0x0005c3e6) query_popup_data_pane_cp1

0x2a0a,	// (0x0005c279) bg_popup_window_pane_cp10_ParamLimits

0x2a0a,	// (0x0005c279) bg_popup_window_pane_cp10

0x2a3c,	// (0x0005c2ab) indicator_popup_pane_ParamLimits

0x2a3c,	// (0x0005c2ab) indicator_popup_pane

0x2a5e,	// (0x0005c2cd) popup_query_code_window_t1_ParamLimits

0x2a5e,	// (0x0005c2cd) popup_query_code_window_t1

0x2a78,	// (0x0005c2e7) popup_query_code_window_t2_ParamLimits

0x2a78,	// (0x0005c2e7) popup_query_code_window_t2

0x2ac1,	// (0x0005c330) popup_query_code_window_t3_ParamLimits

0x2ac1,	// (0x0005c330) popup_query_code_window_t3

0x0002,

0xf839,	// (0x000690a8) popup_query_code_window_t_ParamLimits

0xf839,	// (0x000690a8) popup_query_code_window_t

0x2af0,	// (0x0005c35f) query_popup_pane_ParamLimits

0x2af0,	// (0x0005c35f) query_popup_pane

0x5596,	// (0x0005ee05) bg_popup_window_pane_cp15_ParamLimits

0x5596,	// (0x0005ee05) bg_popup_window_pane_cp15

0x55b6,	// (0x0005ee25) indicator_popup_pane_cp1_ParamLimits

0x55b6,	// (0x0005ee25) indicator_popup_pane_cp1

0x55c9,	// (0x0005ee38) indicator_popup_pane_cp2_ParamLimits

0x55c9,	// (0x0005ee38) indicator_popup_pane_cp2

0x55e4,	// (0x0005ee53) popup_query_data_code_window_g1_ParamLimits

0x55e4,	// (0x0005ee53) popup_query_data_code_window_g1

0x55f7,	// (0x0005ee66) popup_query_data_code_window_t1_ParamLimits

0x55f7,	// (0x0005ee66) popup_query_data_code_window_t1

0x5609,	// (0x0005ee78) popup_query_data_code_window_t2_ParamLimits

0x5609,	// (0x0005ee78) popup_query_data_code_window_t2

0x561b,	// (0x0005ee8a) popup_query_data_code_window_t3_ParamLimits

0x561b,	// (0x0005ee8a) popup_query_data_code_window_t3

0x8b62,	// (0x000623d1) popup_query_data_code_window_t4_ParamLimits

0x8b62,	// (0x000623d1) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00068dff) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00068dff) popup_query_data_code_window_t

0x07c9,	// (0x0005a038) list_single_midp_graphic_pane_g3

0x8b7c,	// (0x000623eb) query_popup_data_pane_cp2_ParamLimits

0x8b8f,	// (0x000623fe) query_popup_pane_cp2_ParamLimits

0x8b8f,	// (0x000623fe) query_popup_pane_cp2

0x535f,	// (0x0005ebce) bg_popup_window_pane_cp11

0x2a02,	// (0x0005c271) heading_pane_cp5

0x8c25,	// (0x00062494) listscroll_popup_info_pane

0x535f,	// (0x0005ebce) input_focus_pane_cp3

0x8baa,	// (0x00062419) query_popup_pane_t1

0x8bb8,	// (0x00062427) list_popup_info_pane_ParamLimits

0x8bb8,	// (0x00062427) list_popup_info_pane

0x8bc7,	// (0x00062436) listscroll_popup_info_pane_g1

0x8bcf,	// (0x0006243e) scroll_pane_cp7

0x8bd9,	// (0x00062448) popup_info_list_pane_t1_ParamLimits

0x8bd9,	// (0x00062448) popup_info_list_pane_t1

0x8bf3,	// (0x00062462) popup_info_list_pane_t2_ParamLimits

0x8bf3,	// (0x00062462) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00068e08) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00068e08) popup_info_list_pane_t

0x535f,	// (0x0005ebce) bg_popup_window_pane_cp12

0x3f83,	// (0x0005d7f2) find_popup_pane

0x53ad,	// (0x0005ec1c) bg_popup_window_pane_cp3

0x8c0d,	// (0x0006247c) heading_pane_cp3

0x8c19,	// (0x00062488) listscroll_popup_graphic_pane

0x535f,	// (0x0005ebce) bg_popup_window_pane_cp4

0xa29a,	// (0x00063b09) heading_pane_cp4

0x8c25,	// (0x00062494) listscroll_popup_colour_pane

0xa2a4,	// (0x00063b13) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa2a4,	// (0x00063b13) cell_large_graphic_colour_none_popup_pane

0xa2b8,	// (0x00063b27) grid_large_graphic_colour_popup_pane_ParamLimits

0xa2b8,	// (0x00063b27) grid_large_graphic_colour_popup_pane

0xa2dc,	// (0x00063b4b) listscroll_popup_colour_pane_g1_ParamLimits

0xa2dc,	// (0x00063b4b) listscroll_popup_colour_pane_g1

0xa2f3,	// (0x00063b62) listscroll_popup_colour_pane_g2_ParamLimits

0xa2f3,	// (0x00063b62) listscroll_popup_colour_pane_g2

0xa30a,	// (0x00063b79) listscroll_popup_colour_pane_g3_ParamLimits

0xa30a,	// (0x00063b79) listscroll_popup_colour_pane_g3

0xa31a,	// (0x00063b89) listscroll_popup_colour_pane_g4_ParamLimits

0xa31a,	// (0x00063b89) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00068e0d) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00068e0d) listscroll_popup_colour_pane_g

0x8c2d,	// (0x0006249c) scroll_pane_cp6_ParamLimits

0x8c2d,	// (0x0006249c) scroll_pane_cp6

0xa32a,	// (0x00063b99) cell_large_graphic_colour_popup_pane_ParamLimits

0xa32a,	// (0x00063b99) cell_large_graphic_colour_popup_pane

0x8c3f,	// (0x000624ae) cell_large_graphic_colour_none_popup_pane_t1

0x535f,	// (0x0005ebce) grid_highlight_pane_cp5

0x8c4e,	// (0x000624bd) cell_large_graphic_colour_popup_pane_g1

0x8c56,	// (0x000624c5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00068e16) cell_large_graphic_colour_popup_pane_g

0x8c5e,	// (0x000624cd) cell_large_graphic_colour_popup_pane_g2_copy1

0x8c67,	// (0x000624d6) grid_highlight_pane_cp4

0x8c6f,	// (0x000624de) bg_popup_window_pane_cp8_ParamLimits

0x8c6f,	// (0x000624de) bg_popup_window_pane_cp8

0x8c8a,	// (0x000624f9) popup_snote_single_text_window_g1_ParamLimits

0x8c8a,	// (0x000624f9) popup_snote_single_text_window_g1

0x8c9c,	// (0x0006250b) popup_snote_single_text_window_t1_ParamLimits

0x8c9c,	// (0x0006250b) popup_snote_single_text_window_t1

0x8caf,	// (0x0006251e) popup_snote_single_text_window_t2_ParamLimits

0x8caf,	// (0x0006251e) popup_snote_single_text_window_t2

0x8cc2,	// (0x00062531) popup_snote_single_text_window_t3_ParamLimits

0x8cc2,	// (0x00062531) popup_snote_single_text_window_t3

0x8cfb,	// (0x0006256a) popup_snote_single_text_window_t4_ParamLimits

0x8cfb,	// (0x0006256a) popup_snote_single_text_window_t4

0x8d2f,	// (0x0006259e) popup_snote_single_text_window_t5_ParamLimits

0x8d2f,	// (0x0006259e) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00068e1b) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00068e1b) popup_snote_single_text_window_t

0x8d5e,	// (0x000625cd) bg_popup_window_pane_cp9_ParamLimits

0x8d5e,	// (0x000625cd) bg_popup_window_pane_cp9

0x8c8a,	// (0x000624f9) popup_snote_single_graphic_window_g1_ParamLimits

0x8c8a,	// (0x000624f9) popup_snote_single_graphic_window_g1

0x8d6c,	// (0x000625db) popup_snote_single_graphic_window_g2_ParamLimits

0x8d6c,	// (0x000625db) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00068e26) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00068e26) popup_snote_single_graphic_window_g

0x8d78,	// (0x000625e7) popup_snote_single_graphic_window_t1_ParamLimits

0x8d78,	// (0x000625e7) popup_snote_single_graphic_window_t1

0x8d8b,	// (0x000625fa) popup_snote_single_graphic_window_t2_ParamLimits

0x8d8b,	// (0x000625fa) popup_snote_single_graphic_window_t2

0x8d9e,	// (0x0006260d) popup_snote_single_graphic_window_t3_ParamLimits

0x8d9e,	// (0x0006260d) popup_snote_single_graphic_window_t3

0x8dd7,	// (0x00062646) popup_snote_single_graphic_window_t4_ParamLimits

0x8dd7,	// (0x00062646) popup_snote_single_graphic_window_t4

0x8e0b,	// (0x0006267a) popup_snote_single_graphic_window_t5_ParamLimits

0x8e0b,	// (0x0006267a) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00068e2b) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00068e2b) popup_snote_single_graphic_window_t

0x3ec1,	// (0x0005d730) grid_graphic_popup_pane_ParamLimits

0x3ec1,	// (0x0005d730) grid_graphic_popup_pane

0x3eef,	// (0x0005d75e) listscroll_popup_graphic_pane_g1_ParamLimits

0x3eef,	// (0x0005d75e) listscroll_popup_graphic_pane_g1

0xc943,	// (0x000661b2) listscroll_popup_graphic_pane_g2_ParamLimits

0xc943,	// (0x000661b2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x00069225) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x00069225) listscroll_popup_graphic_pane_g

0x3f17,	// (0x0005d786) scroll_pane_cp5

0xc902,	// (0x00066171) cell_graphic_popup_pane_ParamLimits

0xc902,	// (0x00066171) cell_graphic_popup_pane

0x3e4a,	// (0x0005d6b9) cell_graphic_popup_pane_g1

0x3e52,	// (0x0005d6c1) cell_graphic_popup_pane_g2

0x8c5e,	// (0x000624cd) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0006921e) cell_graphic_popup_pane_g

0x3e5b,	// (0x0005d6ca) cell_graphic_popup_pane_t2

0x8c67,	// (0x000624d6) grid_highlight_pane_cp3

0x8e4c,	// (0x000626bb) list_gen_pane_ParamLimits

0x8e4c,	// (0x000626bb) list_gen_pane

0x8e74,	// (0x000626e3) scroll_pane

0xc8bd,	// (0x0006612c) bg_list_pane_g1_ParamLimits

0xc8bd,	// (0x0006612c) bg_list_pane_g1

0x3dc7,	// (0x0005d636) bg_list_pane_g2_ParamLimits

0x3dc7,	// (0x0005d636) bg_list_pane_g2

0x3dda,	// (0x0005d649) bg_list_pane_g3_ParamLimits

0x3dda,	// (0x0005d649) bg_list_pane_g3

0x3dec,	// (0x0005d65b) bg_list_pane_g4_ParamLimits

0x3dec,	// (0x0005d65b) bg_list_pane_g4

0xc8d8,	// (0x00066147) bg_list_pane_g5_ParamLimits

0xc8d8,	// (0x00066147) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x00069213) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x00069213) bg_list_pane_g

0xc86b,	// (0x000660da) list_double2_graphic_large_graphic_pane_ParamLimits

0xc86b,	// (0x000660da) list_double2_graphic_large_graphic_pane

0xc86b,	// (0x000660da) list_double2_graphic_pane_ParamLimits

0xc86b,	// (0x000660da) list_double2_graphic_pane

0xc86b,	// (0x000660da) list_double2_large_graphic_pane_ParamLimits

0xc86b,	// (0x000660da) list_double2_large_graphic_pane

0xc86b,	// (0x000660da) list_double2_pane_ParamLimits

0xc86b,	// (0x000660da) list_double2_pane

0xc86b,	// (0x000660da) list_double_graphic_heading_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_graphic_heading_pane

0xc86b,	// (0x000660da) list_double_graphic_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_graphic_pane

0xc86b,	// (0x000660da) list_double_heading_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_heading_pane

0xc86b,	// (0x000660da) list_double_large_graphic_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_large_graphic_pane

0xc86b,	// (0x000660da) list_double_number_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_number_pane

0xc86b,	// (0x000660da) list_double_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_pane

0xc86b,	// (0x000660da) list_double_time_pane_ParamLimits

0xc86b,	// (0x000660da) list_double_time_pane

0xc86b,	// (0x000660da) list_setting_number_pane_ParamLimits

0xc86b,	// (0x000660da) list_setting_number_pane

0xc86b,	// (0x000660da) list_setting_pane_ParamLimits

0xc86b,	// (0x000660da) list_setting_pane

0xc87f,	// (0x000660ee) list_single_2graphic_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_2graphic_pane

0xc87f,	// (0x000660ee) list_single_graphic_heading_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_graphic_heading_pane

0xc87f,	// (0x000660ee) list_single_graphic_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_graphic_pane

0xc87f,	// (0x000660ee) list_single_heading_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_heading_pane

0xc87f,	// (0x000660ee) list_single_large_graphic_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_large_graphic_pane

0xc87f,	// (0x000660ee) list_single_number_heading_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_number_heading_pane

0xc87f,	// (0x000660ee) list_single_number_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_number_pane

0xc87f,	// (0x000660ee) list_single_pane_ParamLimits

0xc87f,	// (0x000660ee) list_single_pane

0x535f,	// (0x0005ebce) list_highlight_pane_cp1

0x1c33,	// (0x0005b4a2) list_single_pane_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_pane_g1

0x24de,	// (0x0005bd4d) list_single_pane_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00068e47) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00068e47) list_single_pane_g

0xe1a9,	// (0x00067a18) list_single_pane_t1_ParamLimits

0xe1a9,	// (0x00067a18) list_single_pane_t1

0x1c33,	// (0x0005b4a2) list_single_number_pane_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_number_pane_g1

0x24de,	// (0x0005bd4d) list_single_number_pane_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00068e47) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00068e47) list_single_number_pane_g

0xe15a,	// (0x000679c9) list_single_number_pane_t1_ParamLimits

0xe15a,	// (0x000679c9) list_single_number_pane_t1

0xba32,	// (0x000652a1) list_single_number_pane_t2_ParamLimits

0xba32,	// (0x000652a1) list_single_number_pane_t2

0x0001,

0xf965,	// (0x000691d4) list_single_number_pane_t_ParamLimits

0xf965,	// (0x000691d4) list_single_number_pane_t

0xa355,	// (0x00063bc4) list_single_graphic_pane_g1_ParamLimits

0xa355,	// (0x00063bc4) list_single_graphic_pane_g1

0x1c33,	// (0x0005b4a2) list_single_graphic_pane_g2_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_graphic_pane_g2

0x24de,	// (0x0005bd4d) list_single_graphic_pane_g3_ParamLimits

0x24de,	// (0x0005bd4d) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00068e36) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00068e36) list_single_graphic_pane_g

0xa361,	// (0x00063bd0) list_single_graphic_pane_t1_ParamLimits

0xa361,	// (0x00063bd0) list_single_graphic_pane_t1

0xa377,	// (0x00063be6) list_single_heading_pane_g1_ParamLimits

0xa377,	// (0x00063be6) list_single_heading_pane_g1

0x24de,	// (0x0005bd4d) list_single_heading_pane_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00068e3d) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00068e3d) list_single_heading_pane_g

0xa38a,	// (0x00063bf9) list_single_heading_pane_t1_ParamLimits

0xa38a,	// (0x00063bf9) list_single_heading_pane_t1

0xa3a0,	// (0x00063c0f) list_single_heading_pane_t2_ParamLimits

0xa3a0,	// (0x00063c0f) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00068e42) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00068e42) list_single_heading_pane_t

0x1c33,	// (0x0005b4a2) list_single_number_heading_pane_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_number_heading_pane_g1

0x24de,	// (0x0005bd4d) list_single_number_heading_pane_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00068e47) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00068e47) list_single_number_heading_pane_g

0xdd33,	// (0x000675a2) list_single_number_heading_pane_t1_ParamLimits

0xdd33,	// (0x000675a2) list_single_number_heading_pane_t1

0xa3b2,	// (0x00063c21) list_single_number_heading_pane_t2_ParamLimits

0xa3b2,	// (0x00063c21) list_single_number_heading_pane_t2

0xdd49,	// (0x000675b8) list_single_number_heading_pane_t3_ParamLimits

0xdd49,	// (0x000675b8) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00068e4c) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00068e4c) list_single_number_heading_pane_t

0xa3c4,	// (0x00063c33) list_single_graphic_heading_pane_g1_ParamLimits

0xa3c4,	// (0x00063c33) list_single_graphic_heading_pane_g1

0xa3dc,	// (0x00063c4b) list_single_graphic_heading_pane_g4_ParamLimits

0xa3dc,	// (0x00063c4b) list_single_graphic_heading_pane_g4

0x24de,	// (0x0005bd4d) list_single_graphic_heading_pane_g5_ParamLimits

0x24de,	// (0x0005bd4d) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00068e53) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00068e53) list_single_graphic_heading_pane_g

0xdd33,	// (0x000675a2) list_single_graphic_heading_pane_t1_ParamLimits

0xdd33,	// (0x000675a2) list_single_graphic_heading_pane_t1

0xa3ed,	// (0x00063c5c) list_single_graphic_heading_pane_t2_ParamLimits

0xa3ed,	// (0x00063c5c) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00068e5a) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00068e5a) list_single_graphic_heading_pane_t

0x35b7,	// (0x0005ce26) list_single_large_graphic_pane_g1_ParamLimits

0x35b7,	// (0x0005ce26) list_single_large_graphic_pane_g1

0x1c33,	// (0x0005b4a2) list_single_large_graphic_pane_g2_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_large_graphic_pane_g2

0x24de,	// (0x0005bd4d) list_single_large_graphic_pane_g3_ParamLimits

0x24de,	// (0x0005bd4d) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00068e5f) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00068e5f) list_single_large_graphic_pane_g

0x2bab,	// (0x0005c41a) wait_border_pane_g2_copy1

0xa405,	// (0x00063c74) list_single_large_graphic_pane_g4_cp2

0xdd33,	// (0x000675a2) list_single_large_graphic_pane_t1_ParamLimits

0xdd33,	// (0x000675a2) list_single_large_graphic_pane_t1

0x8f1b,	// (0x0006278a) list_double_pane_g1_ParamLimits

0x8f1b,	// (0x0006278a) list_double_pane_g1

0xa40d,	// (0x00063c7c) list_double_pane_g2_ParamLimits

0xa40d,	// (0x00063c7c) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00068e66) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00068e66) list_double_pane_g

0xa419,	// (0x00063c88) list_double_pane_t1_ParamLimits

0xa419,	// (0x00063c88) list_double_pane_t1

0xa42f,	// (0x00063c9e) list_double_pane_t2_ParamLimits

0xa42f,	// (0x00063c9e) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00068e6b) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00068e6b) list_double_pane_t

0xa441,	// (0x00063cb0) list_double2_pane_g1_ParamLimits

0xa441,	// (0x00063cb0) list_double2_pane_g1

0xa452,	// (0x00063cc1) list_double2_pane_g2_ParamLimits

0xa452,	// (0x00063cc1) list_double2_pane_g2

0x0001,

0xf601,	// (0x00068e70) list_double2_pane_g_ParamLimits

0xf601,	// (0x00068e70) list_double2_pane_g

0xa45e,	// (0x00063ccd) list_double2_pane_t1_ParamLimits

0xa45e,	// (0x00063ccd) list_double2_pane_t1

0xa474,	// (0x00063ce3) list_double2_pane_t2_ParamLimits

0xa474,	// (0x00063ce3) list_double2_pane_t2

0x0001,

0xf606,	// (0x00068e75) list_double2_pane_t_ParamLimits

0xf606,	// (0x00068e75) list_double2_pane_t

0x8f1b,	// (0x0006278a) list_double_number_pane_g1_ParamLimits

0x8f1b,	// (0x0006278a) list_double_number_pane_g1

0xa40d,	// (0x00063c7c) list_double_number_pane_g2_ParamLimits

0xa40d,	// (0x00063c7c) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00068e66) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00068e66) list_double_number_pane_g

0xa486,	// (0x00063cf5) list_double_number_pane_t1_ParamLimits

0xa486,	// (0x00063cf5) list_double_number_pane_t1

0xa498,	// (0x00063d07) list_double_number_pane_t2_ParamLimits

0xa498,	// (0x00063d07) list_double_number_pane_t2

0xa4ae,	// (0x00063d1d) list_double_number_pane_t3_ParamLimits

0xa4ae,	// (0x00063d1d) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00068e7a) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00068e7a) list_double_number_pane_t

0xa4c0,	// (0x00063d2f) list_double_graphic_pane_g1_ParamLimits

0xa4c0,	// (0x00063d2f) list_double_graphic_pane_g1

0xa4cc,	// (0x00063d3b) list_double_graphic_pane_g2_ParamLimits

0xa4cc,	// (0x00063d3b) list_double_graphic_pane_g2

0xa4db,	// (0x00063d4a) list_double_graphic_pane_g3_ParamLimits

0xa4db,	// (0x00063d4a) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00068e81) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00068e81) list_double_graphic_pane_g

0xa4f3,	// (0x00063d62) list_double_graphic_pane_t1_ParamLimits

0xa4f3,	// (0x00063d62) list_double_graphic_pane_t1

0xa509,	// (0x00063d78) list_double_graphic_pane_t2_ParamLimits

0xa509,	// (0x00063d78) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00068e8a) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00068e8a) list_double_graphic_pane_t

0xa51b,	// (0x00063d8a) list_double2_graphic_pane_g1_ParamLimits

0xa51b,	// (0x00063d8a) list_double2_graphic_pane_g1

0xa527,	// (0x00063d96) list_double2_graphic_pane_g2_ParamLimits

0xa527,	// (0x00063d96) list_double2_graphic_pane_g2

0xa533,	// (0x00063da2) list_double2_graphic_pane_g3_ParamLimits

0xa533,	// (0x00063da2) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00068e8f) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00068e8f) list_double2_graphic_pane_g

0xa53f,	// (0x00063dae) list_double2_graphic_pane_t1_ParamLimits

0xa53f,	// (0x00063dae) list_double2_graphic_pane_t1

0xa555,	// (0x00063dc4) list_double2_graphic_pane_t2_ParamLimits

0xa555,	// (0x00063dc4) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00068e96) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00068e96) list_double2_graphic_pane_t

0xa567,	// (0x00063dd6) list_double_large_graphic_pane_g1_ParamLimits

0xa567,	// (0x00063dd6) list_double_large_graphic_pane_g1

0xa592,	// (0x00063e01) list_double_large_graphic_pane_g2_ParamLimits

0xa592,	// (0x00063e01) list_double_large_graphic_pane_g2

0xa40d,	// (0x00063c7c) list_double_large_graphic_pane_g3_ParamLimits

0xa40d,	// (0x00063c7c) list_double_large_graphic_pane_g3

0xa5a8,	// (0x00063e17) list_double_large_graphic_pane_g4_ParamLimits

0xa5a8,	// (0x00063e17) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00068e9b) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00068e9b) list_double_large_graphic_pane_g

0xa5bb,	// (0x00063e2a) list_double_large_graphic_pane_t1_ParamLimits

0xa5bb,	// (0x00063e2a) list_double_large_graphic_pane_t1

0xa5d4,	// (0x00063e43) list_double_large_graphic_pane_t2_ParamLimits

0xa5d4,	// (0x00063e43) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00068ea6) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00068ea6) list_double_large_graphic_pane_t

0xa5e6,	// (0x00063e55) list_double2_large_graphic_pane_g1_ParamLimits

0xa5e6,	// (0x00063e55) list_double2_large_graphic_pane_g1

0xa5f2,	// (0x00063e61) list_double2_large_graphic_pane_g2_ParamLimits

0xa5f2,	// (0x00063e61) list_double2_large_graphic_pane_g2

0xa533,	// (0x00063da2) list_double2_large_graphic_pane_g3_ParamLimits

0xa533,	// (0x00063da2) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00068eab) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00068eab) list_double2_large_graphic_pane_g

0xa603,	// (0x00063e72) list_double2_large_graphic_pane_t1_ParamLimits

0xa603,	// (0x00063e72) list_double2_large_graphic_pane_t1

0xa619,	// (0x00063e88) list_double2_large_graphic_pane_t2_ParamLimits

0xa619,	// (0x00063e88) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00068eb2) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00068eb2) list_double2_large_graphic_pane_t

0xa62b,	// (0x00063e9a) list_double_heading_pane_g1_ParamLimits

0xa62b,	// (0x00063e9a) list_double_heading_pane_g1

0xa63c,	// (0x00063eab) list_double_heading_pane_g2_ParamLimits

0xa63c,	// (0x00063eab) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00068eb7) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00068eb7) list_double_heading_pane_g

0xa648,	// (0x00063eb7) list_double_heading_pane_t1_ParamLimits

0xa648,	// (0x00063eb7) list_double_heading_pane_t1

0xa474,	// (0x00063ce3) list_double_heading_pane_t2_ParamLimits

0xa474,	// (0x00063ce3) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00068ebc) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00068ebc) list_double_heading_pane_t

0xa65e,	// (0x00063ecd) list_double_graphic_heading_pane_g1_ParamLimits

0xa65e,	// (0x00063ecd) list_double_graphic_heading_pane_g1

0xa62b,	// (0x00063e9a) list_double_graphic_heading_pane_g2_ParamLimits

0xa62b,	// (0x00063e9a) list_double_graphic_heading_pane_g2

0xa63c,	// (0x00063eab) list_double_graphic_heading_pane_g3_ParamLimits

0xa63c,	// (0x00063eab) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00068ec1) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00068ec1) list_double_graphic_heading_pane_g

0xa66a,	// (0x00063ed9) list_double_graphic_heading_pane_t1_ParamLimits

0xa66a,	// (0x00063ed9) list_double_graphic_heading_pane_t1

0xa555,	// (0x00063dc4) list_double_graphic_heading_pane_t2_ParamLimits

0xa555,	// (0x00063dc4) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00068ec8) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00068ec8) list_double_graphic_heading_pane_t

0xa680,	// (0x00063eef) list_double_time_pane_g1_ParamLimits

0xa680,	// (0x00063eef) list_double_time_pane_g1

0xa691,	// (0x00063f00) list_double_time_pane_g2_ParamLimits

0xa691,	// (0x00063f00) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00068ecd) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00068ecd) list_double_time_pane_g

0xa69d,	// (0x00063f0c) list_double_time_pane_t1_ParamLimits

0xa69d,	// (0x00063f0c) list_double_time_pane_t1

0xa6b3,	// (0x00063f22) list_double_time_pane_t2_ParamLimits

0xa6b3,	// (0x00063f22) list_double_time_pane_t2

0xa6c5,	// (0x00063f34) list_double_time_pane_t3_ParamLimits

0xa6c5,	// (0x00063f34) list_double_time_pane_t3

0xa6d7,	// (0x00063f46) list_double_time_pane_t4_ParamLimits

0xa6d7,	// (0x00063f46) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00068ed2) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00068ed2) list_double_time_pane_t

0xa6e9,	// (0x00063f58) list_setting_pane_g1_ParamLimits

0xa6e9,	// (0x00063f58) list_setting_pane_g1

0xa452,	// (0x00063cc1) list_setting_pane_g2_ParamLimits

0xa452,	// (0x00063cc1) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00068edb) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00068edb) list_setting_pane_g

0xa6f5,	// (0x00063f64) list_setting_pane_t1_ParamLimits

0xa6f5,	// (0x00063f64) list_setting_pane_t1

0xa70f,	// (0x00063f7e) list_setting_pane_t2_ParamLimits

0xa70f,	// (0x00063f7e) list_setting_pane_t2

0x0002,

0xf671,	// (0x00068ee0) list_setting_pane_t_ParamLimits

0xf671,	// (0x00068ee0) list_setting_pane_t

0xa74e,	// (0x00063fbd) set_value_pane_cp_ParamLimits

0xa74e,	// (0x00063fbd) set_value_pane_cp

0xa75c,	// (0x00063fcb) list_setting_number_pane_g1_ParamLimits

0xa75c,	// (0x00063fcb) list_setting_number_pane_g1

0xa768,	// (0x00063fd7) list_setting_number_pane_g2_ParamLimits

0xa768,	// (0x00063fd7) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00068ee7) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00068ee7) list_setting_number_pane_g

0xa774,	// (0x00063fe3) list_setting_number_pane_t1_ParamLimits

0xa774,	// (0x00063fe3) list_setting_number_pane_t1

0xa78d,	// (0x00063ffc) list_setting_number_pane_t2_ParamLimits

0xa78d,	// (0x00063ffc) list_setting_number_pane_t2

0xa7a7,	// (0x00064016) list_setting_number_pane_t3_ParamLimits

0xa7a7,	// (0x00064016) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x00068eec) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x00068eec) list_setting_number_pane_t

0xa74e,	// (0x00063fbd) set_value_pane_ParamLimits

0xa74e,	// (0x00063fbd) set_value_pane

0x8ea8,	// (0x00062717) bg_set_opt_pane_ParamLimits

0x8ea8,	// (0x00062717) bg_set_opt_pane

0xdd70,	// (0x000675df) set_value_pane_t1

0x8ec9,	// (0x00062738) slider_set_pane_cp3

0x8ed2,	// (0x00062741) volume_small_pane_cp

0x8edb,	// (0x0006274a) list_form_gen_pane

0x8ee4,	// (0x00062753) scroll_pane_cp8

0xa7ea,	// (0x00064059) form_field_data_pane_ParamLimits

0xa7ea,	// (0x00064059) form_field_data_pane

0xa807,	// (0x00064076) form_field_data_wide_pane_ParamLimits

0xa807,	// (0x00064076) form_field_data_wide_pane

0xa82b,	// (0x0006409a) form_field_popup_pane_ParamLimits

0xa82b,	// (0x0006409a) form_field_popup_pane

0xdd8e,	// (0x000675fd) form_field_popup_wide_pane_ParamLimits

0xdd8e,	// (0x000675fd) form_field_popup_wide_pane

0xddaf,	// (0x0006761e) form_field_slider_pane_ParamLimits

0xddaf,	// (0x0006761e) form_field_slider_pane

0xddc2,	// (0x00067631) form_field_slider_wide_pane_ParamLimits

0xddc2,	// (0x00067631) form_field_slider_wide_pane

0x8ef5,	// (0x00062764) data_form_pane

0xa857,	// (0x000640c6) form_field_data_pane_t1

0x8f01,	// (0x00062770) input_focus_pane

0x8f0f,	// (0x0006277e) data_form_wide_pane

0xdde1,	// (0x00067650) form_field_data_wide_pane_t1

0x8c7c,	// (0x000624eb) input_focus_pane_cp6

0xa871,	// (0x000640e0) form_field_popup_pane_t1

0x8f01,	// (0x00062770) input_focus_pane_cp7

0x8f3b,	// (0x000627aa) list_form_pane

0xde0b,	// (0x0006767a) form_field_popup_wide_pane_t1

0x8f01,	// (0x00062770) input_focus_pane_cp8

0x8f47,	// (0x000627b6) list_form_wide_pane

0xa893,	// (0x00064102) form_field_slider_pane_t1_ParamLimits

0xa893,	// (0x00064102) form_field_slider_pane_t1

0xa8ab,	// (0x0006411a) form_field_slider_pane_t2_ParamLimits

0xa8ab,	// (0x0006411a) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x00068efc) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x00068efc) form_field_slider_pane_t

0x54e0,	// (0x0005ed4f) input_focus_pane_cp9_ParamLimits

0x54e0,	// (0x0005ed4f) input_focus_pane_cp9

0xa8c0,	// (0x0006412f) slider_cont_pane_ParamLimits

0xa8c0,	// (0x0006412f) slider_cont_pane

0x8f56,	// (0x000627c5) form_field_slider_wide_pane_t1_ParamLimits

0x8f56,	// (0x000627c5) form_field_slider_wide_pane_t1

0xde20,	// (0x0006768f) form_field_slider_wide_pane_t2_ParamLimits

0xde20,	// (0x0006768f) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00068f01) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00068f01) form_field_slider_wide_pane_t

0x54e0,	// (0x0005ed4f) input_focus_pane_cp10_ParamLimits

0x54e0,	// (0x0005ed4f) input_focus_pane_cp10

0xa8d4,	// (0x00064143) slider_cont_pane_cp1_ParamLimits

0xa8d4,	// (0x00064143) slider_cont_pane_cp1

0xa8e8,	// (0x00064157) slider_form_pane_cp

0x8f68,	// (0x000627d7) input_focus_pane_g1

0x8f70,	// (0x000627df) input_focus_pane_g2

0x8f78,	// (0x000627e7) input_focus_pane_g3

0x8f80,	// (0x000627ef) input_focus_pane_g4

0x8f88,	// (0x000627f7) input_focus_pane_g5

0x8f90,	// (0x000627ff) input_focus_pane_g6

0x8f98,	// (0x00062807) input_focus_pane_g7

0x8fa0,	// (0x0006280f) input_focus_pane_g8

0x8fa8,	// (0x00062817) input_focus_pane_g9

0x5355,	// (0x0005ebc4) input_focus_pane_g10

0x0009,

0xf697,	// (0x00068f06) input_focus_pane_g

0x2bb4,	// (0x0005c423) wait_border_pane_g3_copy1

0xa8f0,	// (0x0006415f) data_form_pane_t1

0x5355,	// (0x0005ebc4) wait_anim_pane_g1_copy1

0xba44,	// (0x000652b3) data_form_wide_pane_t1

0xde32,	// (0x000676a1) list_form_graphic_pane_cp_ParamLimits

0xde32,	// (0x000676a1) list_form_graphic_pane_cp

0x3ce1,	// (0x0005d550) slider_form_pane_g1

0x3cea,	// (0x0005d559) slider_form_pane_g2

0x0006,

0xf995,	// (0x00069204) slider_form_pane_g

0xa90c,	// (0x0006417b) list_form_graphic_pane_ParamLimits

0xa90c,	// (0x0006417b) list_form_graphic_pane

0xde44,	// (0x000676b3) list_form_graphic_pane_g1

0xde4c,	// (0x000676bb) list_form_graphic_pane_t1_ParamLimits

0xde4c,	// (0x000676bb) list_form_graphic_pane_t1

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp5_ParamLimits

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp5

0xa91d,	// (0x0006418c) find_pane_g1

0x8fb0,	// (0x0006281f) input_find_pane

0xa926,	// (0x00064195) input_find_pane_g1_ParamLimits

0xa926,	// (0x00064195) input_find_pane_g1

0xa932,	// (0x000641a1) input_find_pane_t1_ParamLimits

0xa932,	// (0x000641a1) input_find_pane_t1

0xa947,	// (0x000641b6) input_find_pane_t2_ParamLimits

0xa947,	// (0x000641b6) input_find_pane_t2

0x0001,

0xf6ac,	// (0x00068f1b) input_find_pane_t_ParamLimits

0xf6ac,	// (0x00068f1b) input_find_pane_t

0x8fb9,	// (0x00062828) input_focus_pane_cp5_ParamLimits

0x8fb9,	// (0x00062828) input_focus_pane_cp5

0x9000,	// (0x0006286f) bg_popup_window_pane_cp2_ParamLimits

0x9000,	// (0x0006286f) bg_popup_window_pane_cp2

0x900d,	// (0x0006287c) listscroll_menu_pane_ParamLimits

0x900d,	// (0x0006287c) listscroll_menu_pane

0xa968,	// (0x000641d7) popup_submenu_window_ParamLimits

0xa968,	// (0x000641d7) popup_submenu_window

0x9019,	// (0x00062888) find_popup_pane_g1

0x9021,	// (0x00062890) input_popup_find_pane_cp

0x8fb9,	// (0x00062828) input_focus_pane_cp4_ParamLimits

0x8fb9,	// (0x00062828) input_focus_pane_cp4

0x902b,	// (0x0006289a) input_popup_find_pane_t1_ParamLimits

0x902b,	// (0x0006289a) input_popup_find_pane_t1

0x535f,	// (0x0005ebce) bg_popup_sub_pane_cp

0x9059,	// (0x000628c8) listscroll_popup_sub_pane

0x9061,	// (0x000628d0) list_submenu_pane_ParamLimits

0x9061,	// (0x000628d0) list_submenu_pane

0x9072,	// (0x000628e1) scroll_pane_cp4

0x907a,	// (0x000628e9) list_single_popup_submenu_pane_ParamLimits

0x907a,	// (0x000628e9) list_single_popup_submenu_pane

0x908f,	// (0x000628fe) list_single_popup_submenu_pane_g1

0x9097,	// (0x00062906) list_single_popup_submenu_pane_t1_ParamLimits

0x9097,	// (0x00062906) list_single_popup_submenu_pane_t1

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp1_ParamLimits

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp1

0xa9a6,	// (0x00064215) tabs_2_active_pane_g1

0xa9ae,	// (0x0006421d) tabs_2_active_pane_t1

0x54e0,	// (0x0005ed4f) bg_passive_tab_pane_cp1_ParamLimits

0x54e0,	// (0x0005ed4f) bg_passive_tab_pane_cp1

0xa9a6,	// (0x00064215) tabs_2_passive_pane_g1

0xa9ae,	// (0x0006421d) tabs_2_passive_pane_t1

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp4

0xa9c0,	// (0x0006422f) tabs_2_long_active_pane_t1

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp4

0x07d1,	// (0x0005a040) list_single_midp_graphic_pane_g4_ParamLimits

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp5

0xa9d3,	// (0x00064242) tabs_3_long_active_pane_t1

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp5

0x07d1,	// (0x0005a040) list_single_midp_graphic_pane_g4

0x53ad,	// (0x0005ec1c) bg_popup_window_pane_cp13_ParamLimits

0x53ad,	// (0x0005ec1c) bg_popup_window_pane_cp13

0x90b5,	// (0x00062924) listscroll_popup_fast_pane_ParamLimits

0x90b5,	// (0x00062924) listscroll_popup_fast_pane

0x90c4,	// (0x00062933) grid_popup_fast_pane_ParamLimits

0x90c4,	// (0x00062933) grid_popup_fast_pane

0x90d6,	// (0x00062945) scroll_pane_cp9_ParamLimits

0x90d6,	// (0x00062945) scroll_pane_cp9

0x595a,	// (0x0005f1c9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x595a,	// (0x0005f1c9) list_single_graphic_hl_pane_t1_cp2

0x90fa,	// (0x00062969) input_focus_pane_cp20_ParamLimits

0x90fa,	// (0x00062969) input_focus_pane_cp20

0x9108,	// (0x00062977) query_popup_data_pane_t1_ParamLimits

0x9108,	// (0x00062977) query_popup_data_pane_t1

0x911b,	// (0x0006298a) query_popup_data_pane_t2_ParamLimits

0x911b,	// (0x0006298a) query_popup_data_pane_t2

0x9161,	// (0x000629d0) query_popup_data_pane_t3_ParamLimits

0x9161,	// (0x000629d0) query_popup_data_pane_t3

0x91a2,	// (0x00062a11) query_popup_data_pane_t4_ParamLimits

0x91a2,	// (0x00062a11) query_popup_data_pane_t4

0x91de,	// (0x00062a4d) query_popup_data_pane_t5_ParamLimits

0x91de,	// (0x00062a4d) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x00068f20) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x00068f20) query_popup_data_pane_t

0x8f68,	// (0x000627d7) bg_set_opt_pane_g1

0x8f70,	// (0x000627df) bg_set_opt_pane_g2

0x8f78,	// (0x000627e7) bg_set_opt_pane_g3

0x8f80,	// (0x000627ef) bg_set_opt_pane_g4

0x8f88,	// (0x000627f7) bg_set_opt_pane_g5

0x8f90,	// (0x000627ff) bg_set_opt_pane_g6

0x8f98,	// (0x00062807) bg_set_opt_pane_g7

0x8fa0,	// (0x0006280f) bg_set_opt_pane_g8

0x8fa8,	// (0x00062817) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x00068f2b) bg_set_opt_pane_g

0xf367,	// (0x00068bd6) control_top_pane_stacon_ParamLimits

0xf367,	// (0x00068bd6) control_top_pane_stacon

0xf3ba,	// (0x00068c29) signal_pane_stacon_ParamLimits

0xf3ba,	// (0x00068c29) signal_pane_stacon

0xe03e,	// (0x000678ad) stacon_top_pane_g1_ParamLimits

0xe03e,	// (0x000678ad) stacon_top_pane_g1

0xf3df,	// (0x00068c4e) title_pane_stacon_ParamLimits

0xf3df,	// (0x00068c4e) title_pane_stacon

0xf409,	// (0x00068c78) uni_indicator_pane_stacon_ParamLimits

0xf409,	// (0x00068c78) uni_indicator_pane_stacon

0xf421,	// (0x00068c90) battery_pane_stacon_ParamLimits

0xf421,	// (0x00068c90) battery_pane_stacon

0xf465,	// (0x00068cd4) control_bottom_pane_stacon_ParamLimits

0xf465,	// (0x00068cd4) control_bottom_pane_stacon

0xf488,	// (0x00068cf7) navi_pane_stacon_ParamLimits

0xf488,	// (0x00068cf7) navi_pane_stacon

0xe060,	// (0x000678cf) stacon_bottom_pane_g1_ParamLimits

0xe060,	// (0x000678cf) stacon_bottom_pane_g1

0xf0cd,	// (0x0006893c) aid_levels_signal_lsc_ParamLimits

0xf0cd,	// (0x0006893c) aid_levels_signal_lsc

0xf0e4,	// (0x00068953) signal_pane_stacon_g1_ParamLimits

0xf0e4,	// (0x00068953) signal_pane_stacon_g1

0xf0f8,	// (0x00068967) signal_pane_stacon_g2_ParamLimits

0xf0f8,	// (0x00068967) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00068f3e) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00068f3e) signal_pane_stacon_g

0xf12d,	// (0x0006899c) title_pane_stacon_t1_ParamLimits

0xf12d,	// (0x0006899c) title_pane_stacon_t1

0x9222,	// (0x00062a91) uni_indicator_pane_stacon_g1

0x922c,	// (0x00062a9b) uni_indicator_pane_stacon_g2

0x9236,	// (0x00062aa5) uni_indicator_pane_stacon_g3

0x9240,	// (0x00062aaf) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00068f4a) uni_indicator_pane_stacon_g

0xf152,	// (0x000689c1) control_top_pane_stacon_g1

0xf15a,	// (0x000689c9) control_top_pane_stacon_t1_ParamLimits

0xf15a,	// (0x000689c9) control_top_pane_stacon_t1

0xf191,	// (0x00068a00) aid_levels_battery_lsc_ParamLimits

0xf191,	// (0x00068a00) aid_levels_battery_lsc

0xf1a9,	// (0x00068a18) battery_pane_stacon_g1_ParamLimits

0xf1a9,	// (0x00068a18) battery_pane_stacon_g1

0xf1bc,	// (0x00068a2b) battery_pane_stacon_g2_ParamLimits

0xf1bc,	// (0x00068a2b) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x00068f53) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x00068f53) battery_pane_stacon_g

0xf1fa,	// (0x00068a69) navi_icon_pane_stacon

0xf20e,	// (0x00068a7d) navi_navi_pane_stacon

0xf1fa,	// (0x00068a69) navi_text_pane_stacon

0xf152,	// (0x000689c1) control_bottom_pane_stacon_g1

0xf224,	// (0x00068a93) control_bottom_pane_stacon_t1_ParamLimits

0xf224,	// (0x00068a93) control_bottom_pane_stacon_t1

0xa9e5,	// (0x00064254) grid_app_pane_ParamLimits

0xa9e5,	// (0x00064254) grid_app_pane

0xaa1d,	// (0x0006428c) scroll_pane_cp15_ParamLimits

0xaa1d,	// (0x0006428c) scroll_pane_cp15

0xaa36,	// (0x000642a5) cell_app_pane_ParamLimits

0xaa36,	// (0x000642a5) cell_app_pane

0xaa77,	// (0x000642e6) cell_app_pane_g1_ParamLimits

0xaa77,	// (0x000642e6) cell_app_pane_g1

0x9264,	// (0x00062ad3) cell_app_pane_g2_ParamLimits

0x9264,	// (0x00062ad3) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x00068f58) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x00068f58) cell_app_pane_g

0x9270,	// (0x00062adf) cell_app_pane_t1_ParamLimits

0x9270,	// (0x00062adf) cell_app_pane_t1

0x9282,	// (0x00062af1) grid_highlight_pane_ParamLimits

0x9282,	// (0x00062af1) grid_highlight_pane

0x8f68,	// (0x000627d7) cell_highlight_pane_g1

0x8f70,	// (0x000627df) cell_highlight_pane_g2

0x8f78,	// (0x000627e7) cell_highlight_pane_g3

0x8f80,	// (0x000627ef) cell_highlight_pane_g4

0x8f88,	// (0x000627f7) cell_highlight_pane_g5

0x8f90,	// (0x000627ff) cell_highlight_pane_g6

0x8f98,	// (0x00062807) cell_highlight_pane_g7

0x8fa0,	// (0x0006280f) cell_highlight_pane_g8

0x8fa8,	// (0x00062817) cell_highlight_pane_g9

0x5355,	// (0x0005ebc4) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00068f06) cell_highlight_pane_g

0x9293,	// (0x00062b02) bg_scroll_pane

0xf265,	// (0x00068ad4) scroll_handle_pane

0x92da,	// (0x00062b49) scroll_bg_pane_g1

0x92ef,	// (0x00062b5e) scroll_bg_pane_g2

0x9307,	// (0x00062b76) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00068f5d) scroll_bg_pane_g

0x931c,	// (0x00062b8b) scroll_handle_focus_pane_ParamLimits

0x931c,	// (0x00062b8b) scroll_handle_focus_pane

0x92da,	// (0x00062b49) scroll_handle_pane_g1

0x9329,	// (0x00062b98) scroll_handle_pane_g2

0x9307,	// (0x00062b76) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00068f64) scroll_handle_pane_g

0x8fb9,	// (0x00062828) bg_popup_sub_pane_cp21_ParamLimits

0x8fb9,	// (0x00062828) bg_popup_sub_pane_cp21

0x933d,	// (0x00062bac) popup_fep_japan_predictive_window_t1_ParamLimits

0x933d,	// (0x00062bac) popup_fep_japan_predictive_window_t1

0x9354,	// (0x00062bc3) popup_fep_japan_predictive_window_t2_ParamLimits

0x9354,	// (0x00062bc3) popup_fep_japan_predictive_window_t2

0x9387,	// (0x00062bf6) popup_fep_japan_predictive_window_t3_ParamLimits

0x9387,	// (0x00062bf6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00068f6b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00068f6b) popup_fep_japan_predictive_window_t

0x535f,	// (0x0005ebce) bg_popup_sub_pane_cp23

0x93be,	// (0x00062c2d) listscroll_japin_cand_pane

0x93c6,	// (0x00062c35) popup_fep_japan_candidate_window_t1

0x93d4,	// (0x00062c43) candidate_pane_ParamLimits

0x93d4,	// (0x00062c43) candidate_pane

0x93e6,	// (0x00062c55) scroll_pane_cp30

0x93f0,	// (0x00062c5f) list_single_popup_jap_candidate_pane_ParamLimits

0x93f0,	// (0x00062c5f) list_single_popup_jap_candidate_pane

0x535f,	// (0x0005ebce) list_highlight_pane_cp30

0x9404,	// (0x00062c73) list_single_popup_jap_candidate_pane_t1

0xaaa4,	// (0x00064313) level_1_signal

0xaab6,	// (0x00064325) level_2_signal

0xaac9,	// (0x00064338) level_3_signal

0xaadc,	// (0x0006434b) level_4_signal

0xaaef,	// (0x0006435e) level_5_signal

0xab02,	// (0x00064371) level_6_signal

0xab15,	// (0x00064384) level_7_signal

0xaaa4,	// (0x00064313) level_1_battery

0xaab6,	// (0x00064325) level_2_battery

0xaac9,	// (0x00064338) level_3_battery

0xaadc,	// (0x0006434b) level_4_battery

0xaaef,	// (0x0006435e) level_5_battery

0xab02,	// (0x00064371) level_6_battery

0xab15,	// (0x00064384) level_7_battery

0xde79,	// (0x000676e8) list_menu_pane_ParamLimits

0xde79,	// (0x000676e8) list_menu_pane

0xde8f,	// (0x000676fe) scroll_pane_cp25_ParamLimits

0xde8f,	// (0x000676fe) scroll_pane_cp25

0xdea8,	// (0x00067717) list_double2_graphic_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double2_graphic_pane_cp2

0xdea8,	// (0x00067717) list_double2_large_graphic_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double2_large_graphic_pane_cp2

0xdea8,	// (0x00067717) list_double2_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double2_pane_cp2

0xdea8,	// (0x00067717) list_double_graphic_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double_graphic_pane_cp2

0xdea8,	// (0x00067717) list_double_large_graphic_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double_large_graphic_pane_cp2

0xdea8,	// (0x00067717) list_double_number_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double_number_pane_cp2

0xdea8,	// (0x00067717) list_double_pane_cp2_ParamLimits

0xdea8,	// (0x00067717) list_double_pane_cp2

0xab3b,	// (0x000643aa) list_single_2graphic_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_2graphic_pane_cp2

0xab3b,	// (0x000643aa) list_single_graphic_heading_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_graphic_heading_pane_cp2

0xab3b,	// (0x000643aa) list_single_graphic_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_graphic_pane_cp2

0xab3b,	// (0x000643aa) list_single_heading_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_heading_pane_cp2

0xdeb8,	// (0x00067727) list_single_large_graphic_pane_cp2_ParamLimits

0xdeb8,	// (0x00067727) list_single_large_graphic_pane_cp2

0xab3b,	// (0x000643aa) list_single_number_heading_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_number_heading_pane_cp2

0xab3b,	// (0x000643aa) list_single_number_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_number_pane_cp2

0xab3b,	// (0x000643aa) list_single_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_pane_cp2

0xded1,	// (0x00067740) bg_popup_sub_pane_cp22

0xf317,	// (0x00068b86) popup_side_volume_key_window_g1

0xf341,	// (0x00068bb0) popup_side_volume_key_window_t1

0xf35f,	// (0x00068bce) volume_small_pane_cp1

0x54e0,	// (0x0005ed4f) bg_popup_sub_pane_cp24_ParamLimits

0x54e0,	// (0x0005ed4f) bg_popup_sub_pane_cp24

0xdee7,	// (0x00067756) fep_china_uni_candidate_pane_ParamLimits

0xdee7,	// (0x00067756) fep_china_uni_candidate_pane

0xdefb,	// (0x0006776a) fep_china_uni_entry_pane

0xdf0b,	// (0x0006777a) popup_fep_china_uni_window_g1

0xdf27,	// (0x00067796) fep_china_uni_entry_pane_g1

0xdf31,	// (0x000677a0) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00068f9c) fep_china_uni_entry_pane_g

0xdf3b,	// (0x000677aa) fep_entry_item_pane

0xdf45,	// (0x000677b4) fep_candidate_item_pane

0xdf4d,	// (0x000677bc) fep_china_uni_candidate_pane_g1

0xdf57,	// (0x000677c6) fep_china_uni_candidate_pane_g2

0xdf5f,	// (0x000677ce) fep_china_uni_candidate_pane_g3

0xdf67,	// (0x000677d6) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00068fa1) fep_china_uni_candidate_pane_g

0x5355,	// (0x0005ebc4) fep_entry_item_pane_g1

0xdf71,	// (0x000677e0) fep_entry_item_pane_t1_ParamLimits

0xdf71,	// (0x000677e0) fep_entry_item_pane_t1

0xdf87,	// (0x000677f6) fep_candidate_item_pane_t1_ParamLimits

0xdf87,	// (0x000677f6) fep_candidate_item_pane_t1

0xdf9c,	// (0x0006780b) fep_candidate_item_pane_t2_ParamLimits

0xdf9c,	// (0x0006780b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00068faa) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00068faa) fep_candidate_item_pane_t

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp31_ParamLimits

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp31

0xdfae,	// (0x0006781d) level_1_signal_lsc

0xdfb7,	// (0x00067826) level_2_signal_lsc

0xdfc0,	// (0x0006782f) level_3_signal_lsc

0xdfc9,	// (0x00067838) level_4_signal_lsc

0xdfd2,	// (0x00067841) level_5_signal_lsc

0xdfdb,	// (0x0006784a) level_6_signal_lsc

0xdfe4,	// (0x00067853) level_7_signal_lsc

0xdfe4,	// (0x00067853) level_1_battery_lsc

0xdfed,	// (0x0006785c) level_2_battery_lsc

0xdff6,	// (0x00067865) level_3_battery_lsc

0xdfff,	// (0x0006786e) level_4_battery_lsc

0xe008,	// (0x00067877) level_5_battery_lsc

0xe011,	// (0x00067880) level_6_battery_lsc

0xdfae,	// (0x0006781d) level_7_battery_lsc

0xe01a,	// (0x00067889) scroll_handle_focus_pane_g1

0xe023,	// (0x00067892) scroll_handle_focus_pane_g2

0xe02c,	// (0x0006789b) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00068faf) scroll_handle_focus_pane_g

0xabcd,	// (0x0006443c) list_single_2graphic_pane_g1_ParamLimits

0xabcd,	// (0x0006443c) list_single_2graphic_pane_g1

0xa3dc,	// (0x00063c4b) list_single_2graphic_pane_g2_ParamLimits

0xa3dc,	// (0x00063c4b) list_single_2graphic_pane_g2

0x24de,	// (0x0005bd4d) list_single_2graphic_pane_g3_ParamLimits

0x24de,	// (0x0005bd4d) list_single_2graphic_pane_g3

0xabd9,	// (0x00064448) list_single_2graphic_pane_g4_ParamLimits

0xabd9,	// (0x00064448) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00068fb6) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00068fb6) list_single_2graphic_pane_g

0xabea,	// (0x00064459) list_single_2graphic_pane_t1_ParamLimits

0xabea,	// (0x00064459) list_single_2graphic_pane_t1

0xac18,	// (0x00064487) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xac18,	// (0x00064487) list_double2_graphic_large_graphic_pane_g1

0xa5f2,	// (0x00063e61) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa5f2,	// (0x00063e61) list_double2_graphic_large_graphic_pane_g2

0xa533,	// (0x00063da2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa533,	// (0x00063da2) list_double2_graphic_large_graphic_pane_g3

0xac2a,	// (0x00064499) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xac2a,	// (0x00064499) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x00068fbf) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x00068fbf) list_double2_graphic_large_graphic_pane_g

0xac36,	// (0x000644a5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xac36,	// (0x000644a5) list_double2_graphic_large_graphic_pane_t1

0xac4c,	// (0x000644bb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xac4c,	// (0x000644bb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00068fc8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00068fc8) list_double2_graphic_large_graphic_pane_t

0xe0be,	// (0x0006792d) popup_fast_swap_window_ParamLimits

0xe0be,	// (0x0006792d) popup_fast_swap_window

0xe0dc,	// (0x0006794b) popup_side_volume_key_window

0xe0fa,	// (0x00067969) stacon_top_pane

0xe104,	// (0x00067973) status_pane_ParamLimits

0xe104,	// (0x00067973) status_pane

0xe0fa,	// (0x00067969) status_small_pane

0x535f,	// (0x0005ebce) control_pane

0x535f,	// (0x0005ebce) stacon_bottom_pane

0x8ee4,	// (0x00062753) scroll_pane_cp121

0x8edb,	// (0x0006274a) set_content_pane

0xac5e,	// (0x000644cd) bg_active_tab_pane_g1_cp1

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp1

0xac67,	// (0x000644d6) bg_active_tab_pane_g3_cp1

0xac5e,	// (0x000644cd) bg_passive_tab_pane_g1_cp1

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp1

0xac67,	// (0x000644d6) bg_passive_tab_pane_g3_cp1

0xac70,	// (0x000644df) bg_active_tab_pane_g1_cp2

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp2

0xac79,	// (0x000644e8) bg_active_tab_pane_g3_cp2

0xac70,	// (0x000644df) bg_passive_tab_pane_g1_cp2

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp2

0xac79,	// (0x000644e8) bg_passive_tab_pane_g3_cp2

0xac82,	// (0x000644f1) bg_active_tab_pane_g1_cp3

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp3

0xac8b,	// (0x000644fa) bg_active_tab_pane_g3_cp3

0xac82,	// (0x000644f1) bg_passive_tab_pane_g1_cp3

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp3

0xac8b,	// (0x000644fa) bg_passive_tab_pane_g3_cp3

0xac94,	// (0x00064503) bg_active_tab_pane_g1_cp4

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp4

0xac9d,	// (0x0006450c) bg_active_tab_pane_g3_cp4

0xac94,	// (0x00064503) bg_passive_tab_pane_g1_cp4

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp4

0xac9d,	// (0x0006450c) bg_passive_tab_pane_g3_cp4

0xe07c,	// (0x000678eb) bg_active_tab_pane_g1_cp5

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp5

0xe085,	// (0x000678f4) bg_active_tab_pane_g3_cp5

0xe07c,	// (0x000678eb) bg_passive_tab_pane_g1_cp5

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp5

0xe085,	// (0x000678f4) bg_passive_tab_pane_g3_cp5

0x42e5,	// (0x0005db54) list_set_graphic_pane_ParamLimits

0x42e5,	// (0x0005db54) list_set_graphic_pane

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp4

0xaca6,	// (0x00064515) list_set_graphic_pane_g1_ParamLimits

0xaca6,	// (0x00064515) list_set_graphic_pane_g1

0xacb2,	// (0x00064521) list_set_graphic_pane_g2_ParamLimits

0xacb2,	// (0x00064521) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00068fcd) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00068fcd) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00069355) volume_small_pane_cp_g

0xacd6,	// (0x00064545) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xacd6,	// (0x00064545) list_double2_large_graphic_pane_g1_cp2

0xace4,	// (0x00064553) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xace4,	// (0x00064553) list_double2_large_graphic_pane_g2_cp2

0xe08e,	// (0x000678fd) list_double2_large_graphic_pane_g3_cp2

0xe096,	// (0x00067905) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe096,	// (0x00067905) list_double2_large_graphic_pane_t1_cp2

0xe0ac,	// (0x0006791b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe0ac,	// (0x0006791b) list_double2_large_graphic_pane_t2_cp2

0xc5d0,	// (0x00065e3f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc5d0,	// (0x00065e3f) list_double_large_graphic_pane_g1_cp2

0xc5e3,	// (0x00065e52) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc5e3,	// (0x00065e52) list_double_large_graphic_pane_g2_cp2

0x1b9f,	// (0x0005b40e) list_double_large_graphic_pane_g3_cp2

0x3876,	// (0x0005d0e5) list_double_large_graphic_pane_g4_cp

0x387e,	// (0x0005d0ed) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x387e,	// (0x0005d0ed) list_double_large_graphic_pane_t1_cp2

0x3895,	// (0x0005d104) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3895,	// (0x0005d104) list_double_large_graphic_pane_t2_cp2

0xacf5,	// (0x00064564) list_double2_graphic_pane_g1_cp2_ParamLimits

0xacf5,	// (0x00064564) list_double2_graphic_pane_g1_cp2

0xad03,	// (0x00064572) list_double2_graphic_pane_g2_cp2_ParamLimits

0xad03,	// (0x00064572) list_double2_graphic_pane_g2_cp2

0xad14,	// (0x00064583) list_double2_graphic_pane_g3_cp2

0xe112,	// (0x00067981) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe112,	// (0x00067981) list_double2_graphic_pane_t1_cp2

0xe128,	// (0x00067997) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe128,	// (0x00067997) list_double2_graphic_pane_t2_cp2

0xe13a,	// (0x000679a9) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe13a,	// (0x000679a9) list_single_number_heading_pane_g1_cp2

0x1aec,	// (0x0005b35b) list_single_number_heading_pane_g2_cp2

0x1af4,	// (0x0005b363) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1af4,	// (0x0005b363) list_single_number_heading_pane_t1_cp2

0xad1e,	// (0x0006458d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xad1e,	// (0x0006458d) list_single_number_heading_pane_t2_cp2

0x1b1e,	// (0x0005b38d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1b1e,	// (0x0005b38d) list_single_number_heading_pane_t3_cp2

0xe13a,	// (0x000679a9) list_single_heading_pane_g1_cp2_ParamLimits

0xe13a,	// (0x000679a9) list_single_heading_pane_g1_cp2

0x1aec,	// (0x0005b35b) list_single_heading_pane_g2_cp2

0x1af4,	// (0x0005b363) list_single_heading_pane_t1_cp2_ParamLimits

0x1af4,	// (0x0005b363) list_single_heading_pane_t1_cp2

0xc5bc,	// (0x00065e2b) list_single_heading_pane_t2_cp2_ParamLimits

0xc5bc,	// (0x00065e2b) list_single_heading_pane_t2_cp2

0x33da,	// (0x0005cc49) list_double_graphic_pane_g1_cp2_ParamLimits

0x33da,	// (0x0005cc49) list_double_graphic_pane_g1_cp2

0x33e6,	// (0x0005cc55) list_double_graphic_pane_g2_cp2_ParamLimits

0x33e6,	// (0x0005cc55) list_double_graphic_pane_g2_cp2

0x33f5,	// (0x0005cc64) list_double_graphic_pane_g3_cp2

0x33fd,	// (0x0005cc6c) list_double_graphic_pane_t1_cp2_ParamLimits

0x33fd,	// (0x0005cc6c) list_double_graphic_pane_t1_cp2

0x3413,	// (0x0005cc82) list_double_graphic_pane_t2_cp2_ParamLimits

0x3413,	// (0x0005cc82) list_double_graphic_pane_t2_cp2

0x1b93,	// (0x0005b402) list_double_number_pane_g1_cp2_ParamLimits

0x1b93,	// (0x0005b402) list_double_number_pane_g1_cp2

0x1b9f,	// (0x0005b40e) list_double_number_pane_g2_cp2

0xc556,	// (0x00065dc5) list_double_number_pane_t1_cp2_ParamLimits

0xc556,	// (0x00065dc5) list_double_number_pane_t1_cp2

0x33b2,	// (0x0005cc21) list_double_number_pane_t2_cp2_ParamLimits

0x33b2,	// (0x0005cc21) list_double_number_pane_t2_cp2

0x33c8,	// (0x0005cc37) list_double_number_pane_t3_cp2_ParamLimits

0x33c8,	// (0x0005cc37) list_double_number_pane_t3_cp2

0xc4a4,	// (0x00065d13) list_single_graphic_pane_g1_cp2_ParamLimits

0xc4a4,	// (0x00065d13) list_single_graphic_pane_g1_cp2

0x1bf9,	// (0x0005b468) list_single_graphic_pane_g2_cp2_ParamLimits

0x1bf9,	// (0x0005b468) list_single_graphic_pane_g2_cp2

0x1c05,	// (0x0005b474) list_single_graphic_pane_g3_cp2

0x325d,	// (0x0005cacc) list_single_graphic_pane_t1_cp2_ParamLimits

0x325d,	// (0x0005cacc) list_single_graphic_pane_t1_cp2

0x1bf9,	// (0x0005b468) list_single_number_pane_g1_cp2_ParamLimits

0x1bf9,	// (0x0005b468) list_single_number_pane_g1_cp2

0x1c05,	// (0x0005b474) list_single_number_pane_g2_cp2

0x325d,	// (0x0005cacc) list_single_number_pane_t1_cp2_ParamLimits

0x325d,	// (0x0005cacc) list_single_number_pane_t1_cp2

0xc490,	// (0x00065cff) list_single_number_pane_t2_cp2_ParamLimits

0xc490,	// (0x00065cff) list_single_number_pane_t2_cp2

0xace4,	// (0x00064553) list_double2_pane_g1_cp2_ParamLimits

0xace4,	// (0x00064553) list_double2_pane_g1_cp2

0xe08e,	// (0x000678fd) list_double2_pane_g2_cp2

0x1b6b,	// (0x0005b3da) list_double2_pane_t1_cp2_ParamLimits

0x1b6b,	// (0x0005b3da) list_double2_pane_t1_cp2

0x1b81,	// (0x0005b3f0) list_double2_pane_t2_cp2_ParamLimits

0x1b81,	// (0x0005b3f0) list_double2_pane_t2_cp2

0x1b93,	// (0x0005b402) list_double_pane_g1_cp2_ParamLimits

0x1b93,	// (0x0005b402) list_double_pane_g1_cp2

0x1b9f,	// (0x0005b40e) list_double_pane_g2_cp2

0x1ba7,	// (0x0005b416) list_double_pane_t1_cp2_ParamLimits

0x1ba7,	// (0x0005b416) list_double_pane_t1_cp2

0x1bbd,	// (0x0005b42c) list_double_pane_t2_cp2_ParamLimits

0x1bbd,	// (0x0005b42c) list_double_pane_t2_cp2

0x1be9,	// (0x0005b458) list_single_pane_cp2_g3

0x1bf9,	// (0x0005b468) list_single_pane_g1_cp2_ParamLimits

0x1bf9,	// (0x0005b468) list_single_pane_g1_cp2

0x1c05,	// (0x0005b474) list_single_pane_g2_cp2

0x1c0d,	// (0x0005b47c) list_single_pane_t1_cp2_ParamLimits

0x1c0d,	// (0x0005b47c) list_single_pane_t1_cp2

0xad4c,	// (0x000645bb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xad4c,	// (0x000645bb) list_single_large_graphic_pane_g1_cp2

0x1c33,	// (0x0005b4a2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_large_graphic_pane_g2_cp2

0x1c3f,	// (0x0005b4ae) list_single_large_graphic_pane_g3_cp2

0x1c47,	// (0x0005b4b6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1c47,	// (0x0005b4b6) list_single_large_graphic_pane_g4_cp1

0x1c61,	// (0x0005b4d0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1c61,	// (0x0005b4d0) list_single_large_graphic_pane_t1_cp2

0x3227,	// (0x0005ca96) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3227,	// (0x0005ca96) list_single_graphic_heading_pane_g1_cp2

0xc46b,	// (0x00065cda) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc46b,	// (0x00065cda) list_single_graphic_heading_pane_g4_cp2

0x1c05,	// (0x0005b474) list_single_graphic_heading_pane_g5_cp2

0x3233,	// (0x0005caa2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3233,	// (0x0005caa2) list_single_graphic_heading_pane_t1_cp2

0xc47c,	// (0x00065ceb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc47c,	// (0x00065ceb) list_single_graphic_heading_pane_t2_cp2

0x31e8,	// (0x0005ca57) list_single_2graphic_pane_g1_cp2_ParamLimits

0x31e8,	// (0x0005ca57) list_single_2graphic_pane_g1_cp2

0xc46b,	// (0x00065cda) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc46b,	// (0x00065cda) list_single_2graphic_pane_g2_cp2

0x1c05,	// (0x0005b474) list_single_2graphic_pane_g3_cp2

0x3205,	// (0x0005ca74) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3205,	// (0x0005ca74) list_single_2graphic_pane_g4_cp2

0x3211,	// (0x0005ca80) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3211,	// (0x0005ca80) list_single_2graphic_pane_t1_cp2

0x5355,	// (0x0005ebc4) list_highlight_pane_g10_cp1

0x2dc0,	// (0x0005c62f) list_highlight_pane_g1_cp1

0x2dc8,	// (0x0005c637) list_highlight_pane_g2_cp1

0x2dd0,	// (0x0005c63f) list_highlight_pane_g3_cp1

0x2dd8,	// (0x0005c647) list_highlight_pane_g4_cp1

0x2de0,	// (0x0005c64f) list_highlight_pane_g5_cp1

0x2de8,	// (0x0005c657) list_highlight_pane_g6_cp1

0x2df0,	// (0x0005c65f) list_highlight_pane_g7_cp1

0x2df8,	// (0x0005c667) list_highlight_pane_g8_cp1

0x2e00,	// (0x0005c66f) list_highlight_pane_g9_cp1

0xc431,	// (0x00065ca0) form_field_slider_pane_t3

0xc43f,	// (0x00065cae) form_field_slider_pane_t4

0x2cfc,	// (0x0005c56b) slider_form_pane_ParamLimits

0x2cfc,	// (0x0005c56b) slider_form_pane

0x535f,	// (0x0005ebce) control_abbreviations

0x535f,	// (0x0005ebce) control_conventions

0x535f,	// (0x0005ebce) control_definitions

0x535f,	// (0x0005ebce) format_table_attribute

0x34ee,	// (0x0005cd5d) bg_popup_preview_window_pane_g9

0x535f,	// (0x0005ebce) format_table_data2

0x535f,	// (0x0005ebce) format_table_data3

0x535f,	// (0x0005ebce) format_table_data_example

0x0008,

0x535f,	// (0x0005ebce) intro_purpose

0xf8f5,	// (0x00069164) bg_popup_preview_window_pane_g

0x535f,	// (0x0005ebce) texts_category

0x535f,	// (0x0005ebce) texts_graphics

0x1c77,	// (0x0005b4e6) text_digital

0x1c86,	// (0x0005b4f5) text_primary

0x1c95,	// (0x0005b504) text_primary_small

0x1ca4,	// (0x0005b513) text_secondary

0x1cb3,	// (0x0005b522) text_title

0x3e1e,	// (0x0005d68d) bg_passive_tab_pane_g1_cp3_srt

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp3_srt

0x3e27,	// (0x0005d696) bg_passive_tab_pane_g3_cp3_srt

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp3_srt_ParamLimits

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp3_srt

0x3e30,	// (0x0005d69f) tabs_4_active_pane_srt_g1

0xc8ec,	// (0x0006615b) tabs_4_active_pane_srt_t1_ParamLimits

0xc8ec,	// (0x0006615b) tabs_4_active_pane_srt_t1

0x3e1e,	// (0x0005d68d) bg_active_tab_pane_g1_cp3_copy1

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp3_copy1

0x3e27,	// (0x0005d696) bg_active_tab_pane_g3_cp3_copy1

0x53ad,	// (0x0005ec1c) tabs_2_long_active_pane_srt_ParamLimits

0x53ad,	// (0x0005ec1c) tabs_2_long_active_pane_srt

0x53ad,	// (0x0005ec1c) tabs_2_long_passive_pane_srt_ParamLimits

0x53ad,	// (0x0005ec1c) tabs_2_long_passive_pane_srt

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp4_srt

0x3af2,	// (0x0005d361) bg_passive_tab_pane_g1_cp4_srt

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp4_srt

0x3afb,	// (0x0005d36a) bg_passive_tab_pane_g3_cp4_srt

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp4_srt_ParamLimits

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp4_srt

0xc6cd,	// (0x00065f3c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc6cd,	// (0x00065f3c) tabs_2_long_active_pane_srt_t1

0x3af2,	// (0x0005d361) bg_active_tab_pane_g1_cp4_srt

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp4_srt

0x3afb,	// (0x0005d36a) bg_active_tab_pane_g3_cp4_srt

0x54e0,	// (0x0005ed4f) tabs_3_long_active_pane_srt_ParamLimits

0x54e0,	// (0x0005ed4f) tabs_3_long_active_pane_srt

0x54e0,	// (0x0005ed4f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x54e0,	// (0x0005ed4f) tabs_3_long_passive_pane_cp_srt

0x54e0,	// (0x0005ed4f) tabs_3_long_passive_pane_srt_ParamLimits

0x54e0,	// (0x0005ed4f) tabs_3_long_passive_pane_srt

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp5_srt

0xe07c,	// (0x000678eb) bg_passive_tab_pane_g1_cp5_srt

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp5_srt

0xe085,	// (0x000678f4) bg_passive_tab_pane_g3_cp5_srt

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp5_srt_ParamLimits

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp5_srt

0xc6b7,	// (0x00065f26) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc6b7,	// (0x00065f26) tabs_3_long_active_pane_srt_t1

0xe07c,	// (0x000678eb) bg_active_tab_pane_g1_cp5_srt

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp5_srt

0xe085,	// (0x000678f4) bg_active_tab_pane_g3_cp5_srt

0x3ad2,	// (0x0005d341) navi_text_pane_srt_t1

0x3aca,	// (0x0005d339) navi_icon_pane_srt_g1

0x1e7e,	// (0x0005b6ed) midp_editing_number_pane_srt

0x1cc2,	// (0x0005b531) midp_ticker_pane_srt

0x1e86,	// (0x0005b6f5) midp_ticker_pane_srt_g1

0x1e8e,	// (0x0005b6fd) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x00068fec) midp_ticker_pane_srt_g

0x1e96,	// (0x0005b705) midp_ticker_pane_srt_t1

0x3abb,	// (0x0005d32a) midp_editing_number_pane_t1_copy1

0x200e,	// (0x0005b87d) listscroll_midp_pane

0x200e,	// (0x0005b87d) midp_form_pane

0x1d2c,	// (0x0005b59b) midp_info_popup_window_ParamLimits

0x1d2c,	// (0x0005b59b) midp_info_popup_window

0x8fb9,	// (0x00062828) bg_popup_sub_pane_cp50_ParamLimits

0x8fb9,	// (0x00062828) bg_popup_sub_pane_cp50

0x29f6,	// (0x0005c265) listscroll_midp_info_pane_ParamLimits

0x29f6,	// (0x0005c265) listscroll_midp_info_pane

0x29de,	// (0x0005c24d) listscroll_form_midp_pane_ParamLimits

0x29de,	// (0x0005c24d) listscroll_form_midp_pane

0x29ea,	// (0x0005c259) scroll_bar_cp050

0xc425,	// (0x00065c94) list_midp_pane

0x4903,	// (0x0005e172) signal_pane_g2_cp

0x28f8,	// (0x0005c167) listscroll_midp_info_pane_t1_ParamLimits

0x28f8,	// (0x0005c167) listscroll_midp_info_pane_t1

0x2910,	// (0x0005c17f) listscroll_midp_info_pane_t2_ParamLimits

0x2910,	// (0x0005c17f) listscroll_midp_info_pane_t2

0x294e,	// (0x0005c1bd) listscroll_midp_info_pane_t3_ParamLimits

0x294e,	// (0x0005c1bd) listscroll_midp_info_pane_t3

0x2988,	// (0x0005c1f7) listscroll_midp_info_pane_t4_ParamLimits

0x2988,	// (0x0005c1f7) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0006909f) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0006909f) listscroll_midp_info_pane_t

0x9072,	// (0x000628e1) scroll_pane_cp21

0x2892,	// (0x0005c101) form_midp_field_choice_group_pane

0x289b,	// (0x0005c10a) form_midp_field_text_pane

0x28de,	// (0x0005c14d) form_midp_field_time_pane

0x28e6,	// (0x0005c155) form_midp_gauge_slider_pane

0x28ef,	// (0x0005c15e) form_midp_gauge_wait_pane

0x535f,	// (0x0005ebce) form_midp_image_pane

0xb8af,	// (0x0006511e) list_single_midp_pane_ParamLimits

0xb8af,	// (0x0006511e) list_single_midp_pane

0xc3fd,	// (0x00065c6c) form_midp_field_text_pane_t1

0x2642,	// (0x0005beb1) input_focus_pane_cp050

0x2881,	// (0x0005c0f0) list_midp_form_text_pane

0x2825,	// (0x0005c094) form_midp_field_choice_group_pane_t1

0x2833,	// (0x0005c0a2) input_focus_pane_cp051

0x2847,	// (0x0005c0b6) list_midp_choice_pane

0x535f,	// (0x0005ebce) status_idle_pane

0x2809,	// (0x0005c078) form_midp_field_time_pane_t1

0x5355,	// (0x0005ebc4) wait_anim_pane_g2_copy1

0x2817,	// (0x0005c086) form_midp_field_time_pane_t2

0x0001,

0x1ddc,	// (0x0005b64b) aid_navinavi_width_2_pane

0xf82b,	// (0x0006909a) form_midp_field_time_pane_t

0x535f,	// (0x0005ebce) input_focus_pane_cp052

0x535f,	// (0x0005ebce) bg_input_focus_pane_cp040

0x27c9,	// (0x0005c038) form_midp_gauge_slider_pane_t1

0x27d7,	// (0x0005c046) form_midp_gauge_slider_pane_t2

0xc3e1,	// (0x00065c50) form_midp_gauge_slider_pane_t3

0xc3ef,	// (0x00065c5e) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00069091) form_midp_gauge_slider_pane_t

0x2801,	// (0x0005c070) form_midp_slider_pane

0x53ad,	// (0x0005ec1c) bg_input_focus_pane_cp041_ParamLimits

0x53ad,	// (0x0005ec1c) bg_input_focus_pane_cp041

0x2796,	// (0x0005c005) form_midp_gauge_wait_pane_t1_ParamLimits

0x2796,	// (0x0005c005) form_midp_gauge_wait_pane_t1

0x27a8,	// (0x0005c017) form_midp_gauge_wait_pane_t2_ParamLimits

0x27a8,	// (0x0005c017) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0006908c) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0006908c) form_midp_gauge_wait_pane_t

0x27ba,	// (0x0005c029) form_midp_wait_pane_ParamLimits

0x27ba,	// (0x0005c029) form_midp_wait_pane

0x275e,	// (0x0005bfcd) form_midp_image_pane_g1

0x2767,	// (0x0005bfd6) form_midp_image_pane_t1

0x2776,	// (0x0005bfe5) form_midp_image_pane_t2

0x2785,	// (0x0005bff4) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00069085) form_midp_image_pane_t

0x2755,	// (0x0005bfc4) list_single_midp_pane_g1

0xe19a,	// (0x00067a09) list_single_midp_pane_t1

0xc3ca,	// (0x00065c39) list_midp_form_item_pane_ParamLimits

0xc3ca,	// (0x00065c39) list_midp_form_item_pane

0x1d84,	// (0x0005b5f3) list_midp_form_item_pane_t1

0x1d93,	// (0x0005b602) midp_ticker_pane_g1

0x1d9f,	// (0x0005b60e) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00068fd2) midp_ticker_pane_g

0xadf1,	// (0x00064660) midp_ticker_pane_t1

0xc85c,	// (0x000660cb) midp_editing_number_pane_t1

0x3d0c,	// (0x0005d57b) midp_editing_number_pane

0x3d1b,	// (0x0005d58a) midp_ticker_pane

0x3aab,	// (0x0005d31a) ai_message_heading_pane

0x535f,	// (0x0005ebce) bg_popup_window_pane_cp14

0x3ab3,	// (0x0005d322) listscroll_ai_message_pane

0x3a31,	// (0x0005d2a0) ai_message_heading_pane_g1_ParamLimits

0x3a31,	// (0x0005d2a0) ai_message_heading_pane_g1

0x3a3d,	// (0x0005d2ac) ai_message_heading_pane_g2_ParamLimits

0x3a3d,	// (0x0005d2ac) ai_message_heading_pane_g2

0x3a4b,	// (0x0005d2ba) ai_message_heading_pane_g3_ParamLimits

0x3a4b,	// (0x0005d2ba) ai_message_heading_pane_g3

0x3a57,	// (0x0005d2c6) ai_message_heading_pane_g4_ParamLimits

0x3a57,	// (0x0005d2c6) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x000691c6) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x000691c6) ai_message_heading_pane_g

0x3a63,	// (0x0005d2d2) ai_message_heading_pane_t1_ParamLimits

0x3a63,	// (0x0005d2d2) ai_message_heading_pane_t1

0x3a7d,	// (0x0005d2ec) ai_message_heading_pane_t2_ParamLimits

0x3a7d,	// (0x0005d2ec) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x000691cf) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x000691cf) ai_message_heading_pane_t

0x3a91,	// (0x0005d300) bg_popup_heading_pane_cp1_ParamLimits

0x3a91,	// (0x0005d300) bg_popup_heading_pane_cp1

0x3a1f,	// (0x0005d28e) list_ai_message_pane_ParamLimits

0x3a1f,	// (0x0005d28e) list_ai_message_pane

0x9072,	// (0x000628e1) scroll_pane_cp10

0x39bb,	// (0x0005d22a) list_ai_message_pane_g1

0x39c3,	// (0x0005d232) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x000691a3) list_ai_message_pane_g

0x39cb,	// (0x0005d23a) list_ai_message_pane_t1_ParamLimits

0x39cb,	// (0x0005d23a) list_ai_message_pane_t1

0x39e0,	// (0x0005d24f) list_ai_message_pane_t2_ParamLimits

0x39e0,	// (0x0005d24f) list_ai_message_pane_t2

0x39f5,	// (0x0005d264) list_ai_message_pane_t3_ParamLimits

0x39f5,	// (0x0005d264) list_ai_message_pane_t3

0x3a0a,	// (0x0005d279) list_ai_message_pane_t4_ParamLimits

0x3a0a,	// (0x0005d279) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x000691a8) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x000691a8) list_ai_message_pane_t

0xc69d,	// (0x00065f0c) cell_ai_soft_ind_pane_ParamLimits

0xc69d,	// (0x00065f0c) cell_ai_soft_ind_pane

0x1dbd,	// (0x0005b62c) cell_ai_soft_ind_pane_g1_ParamLimits

0x1dbd,	// (0x0005b62c) cell_ai_soft_ind_pane_g1

0x535f,	// (0x0005ebce) grid_highlight_cp1

0x1dca,	// (0x0005b639) text_secondary_cp56_ParamLimits

0x1dca,	// (0x0005b639) text_secondary_cp56

0x3979,	// (0x0005d1e8) example_general_pane_ParamLimits

0x3979,	// (0x0005d1e8) example_general_pane

0x3985,	// (0x0005d1f4) example_parent_pane_g1_ParamLimits

0x3985,	// (0x0005d1f4) example_parent_pane_g1

0x3991,	// (0x0005d200) example_parent_pane_t1_ParamLimits

0x3991,	// (0x0005d200) example_parent_pane_t1

0xb3c8,	// (0x00064c37) popup_preview_text_window_ParamLimits

0xb3c8,	// (0x00064c37) popup_preview_text_window

0x1bf1,	// (0x0005b460) list_single_pane_cp2_g4

0x5596,	// (0x0005ee05) bg_popup_preview_window_pane_ParamLimits

0x5596,	// (0x0005ee05) bg_popup_preview_window_pane

0x34f8,	// (0x0005cd67) popup_preview_text_window_t1_ParamLimits

0x34f8,	// (0x0005cd67) popup_preview_text_window_t1

0x3516,	// (0x0005cd85) popup_preview_text_window_t2_ParamLimits

0x3516,	// (0x0005cd85) popup_preview_text_window_t2

0x3713,	// (0x0005cf82) popup_preview_text_window_t3_ParamLimits

0x3713,	// (0x0005cf82) popup_preview_text_window_t3

0x3758,	// (0x0005cfc7) popup_preview_text_window_t4_ParamLimits

0x3758,	// (0x0005cfc7) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00069177) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00069177) popup_preview_text_window_t

0x37d6,	// (0x0005d045) scroll_pane_cp11

0x2546,	// (0x0005bdb5) bg_popup_preview_window_pane_g1

0x34ac,	// (0x0005cd1b) bg_popup_preview_window_pane_g2

0x34b6,	// (0x0005cd25) bg_popup_preview_window_pane_g3

0x34c0,	// (0x0005cd2f) bg_popup_preview_window_pane_g4

0x34ca,	// (0x0005cd39) bg_popup_preview_window_pane_g5

0x34d4,	// (0x0005cd43) bg_popup_preview_window_pane_g6

0x34dc,	// (0x0005cd4b) bg_popup_preview_window_pane_g7

0x34e4,	// (0x0005cd53) bg_popup_preview_window_pane_g8

0xed90,	// (0x000685ff) aid_popup_width_pane

0xb338,	// (0x00064ba7) popup_midp_note_alarm_window_ParamLimits

0xb338,	// (0x00064ba7) popup_midp_note_alarm_window

0x8ef5,	// (0x00062764) data_form_pane_ParamLimits

0xa84d,	// (0x000640bc) form_field_data_pane_g1

0xa857,	// (0x000640c6) form_field_data_pane_t1_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_ParamLimits

0x8f0f,	// (0x0006277e) data_form_wide_pane_ParamLimits

0xddd5,	// (0x00067644) form_field_data_wide_pane_g1

0xdde1,	// (0x00067650) form_field_data_wide_pane_t1_ParamLimits

0x8c7c,	// (0x000624eb) input_focus_pane_cp6_ParamLimits

0xa998,	// (0x00064207) input_popup_find_pane_g1_ParamLimits

0xa998,	// (0x00064207) input_popup_find_pane_g1

0xf1cd,	// (0x00068a3c) aid_navi_side_left_pane

0xf1e2,	// (0x00068a51) aid_navi_side_right_pane

0x2ebb,	// (0x0005c72a) bg_popup_window_pane_cp30_ParamLimits

0x2ebb,	// (0x0005c72a) bg_popup_window_pane_cp30

0x2f35,	// (0x0005c7a4) popup_midp_note_alarm_window_g1_ParamLimits

0x2f35,	// (0x0005c7a4) popup_midp_note_alarm_window_g1

0x2f65,	// (0x0005c7d4) popup_midp_note_alarm_window_t1_ParamLimits

0x2f65,	// (0x0005c7d4) popup_midp_note_alarm_window_t1

0x3006,	// (0x0005c875) popup_midp_note_alarm_window_t2_ParamLimits

0x3006,	// (0x0005c875) popup_midp_note_alarm_window_t2

0x30b4,	// (0x0005c923) popup_midp_note_alarm_window_t3_ParamLimits

0x30b4,	// (0x0005c923) popup_midp_note_alarm_window_t3

0x30e6,	// (0x0005c955) popup_midp_note_alarm_window_t4_ParamLimits

0x30e6,	// (0x0005c955) popup_midp_note_alarm_window_t4

0x310c,	// (0x0005c97b) popup_midp_note_alarm_window_t5_ParamLimits

0x310c,	// (0x0005c97b) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x00069114) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x00069114) popup_midp_note_alarm_window_t

0x31b8,	// (0x0005ca27) wait_bar_pane_cp1_ParamLimits

0x31b8,	// (0x0005ca27) wait_bar_pane_cp1

0x535f,	// (0x0005ebce) wait_anim_pane_copy1

0x535f,	// (0x0005ebce) wait_border_pane_copy1

0x2ba0,	// (0x0005c40f) wait_border_pane_g1_copy1

0xddfb,	// (0x0006766a) form_field_popup_pane_g1

0xa871,	// (0x000640e0) form_field_popup_pane_t1_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_cp7_ParamLimits

0x8f3b,	// (0x000627aa) list_form_pane_ParamLimits

0xde03,	// (0x00067672) form_field_popup_wide_pane_g1

0xde0b,	// (0x0006767a) form_field_popup_wide_pane_t1_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_cp8_ParamLimits

0x8f47,	// (0x000627b6) list_form_wide_pane_ParamLimits

0x3eab,	// (0x0005d71a) aid_size_cell_graphic_pane

0xa8f0,	// (0x0006415f) data_form_pane_t1_ParamLimits

0xba44,	// (0x000652b3) data_form_wide_pane_t1_ParamLimits

0xb7ca,	// (0x00065039) bg_status_flat_pane

0x9fd6,	// (0x00063845) title_pane_t1_ParamLimits

0x5375,	// (0x0005ebe4) title_pane_t2_ParamLimits

0x539b,	// (0x0005ec0a) title_pane_t3_ParamLimits

0xf55d,	// (0x00068dcc) title_pane_t_ParamLimits

0xaaa4,	// (0x00064313) level_1_signal_ParamLimits

0xaab6,	// (0x00064325) level_2_signal_ParamLimits

0xaac9,	// (0x00064338) level_3_signal_ParamLimits

0xaadc,	// (0x0006434b) level_4_signal_ParamLimits

0xaaef,	// (0x0006435e) level_5_signal_ParamLimits

0xab02,	// (0x00064371) level_6_signal_ParamLimits

0xab15,	// (0x00064384) level_7_signal_ParamLimits

0xaaa4,	// (0x00064313) level_1_battery_ParamLimits

0xaab6,	// (0x00064325) level_2_battery_ParamLimits

0xaac9,	// (0x00064338) level_3_battery_ParamLimits

0xaadc,	// (0x0006434b) level_4_battery_ParamLimits

0xaaef,	// (0x0006435e) level_5_battery_ParamLimits

0xab02,	// (0x00064371) level_6_battery_ParamLimits

0xab15,	// (0x00064384) level_7_battery_ParamLimits

0x2dc0,	// (0x0005c62f) bg_status_flat_pane_g1

0x2dc8,	// (0x0005c637) bg_status_flat_pane_g2

0x2dd0,	// (0x0005c63f) bg_status_flat_pane_g3

0x2dd8,	// (0x0005c647) bg_status_flat_pane_g4

0x2de0,	// (0x0005c64f) bg_status_flat_pane_g5

0x2de8,	// (0x0005c657) bg_status_flat_pane_g6

0x2df0,	// (0x0005c65f) bg_status_flat_pane_g7

0xa06a,	// (0x000638d9) tabs_3_active_pane_t1_ParamLimits

0xa06a,	// (0x000638d9) tabs_3_passive_pane_t1_ParamLimits

0xa084,	// (0x000638f3) tabs_4_active_pane_t1_ParamLimits

0xa084,	// (0x000638f3) tabs_4_1_passive_pane_t1_ParamLimits

0xa9ae,	// (0x0006421d) tabs_2_active_pane_t1_ParamLimits

0xa9ae,	// (0x0006421d) tabs_2_passive_pane_t1_ParamLimits

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp4_ParamLimits

0xa9c0,	// (0x0006422f) tabs_2_long_active_pane_t1_ParamLimits

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp4_ParamLimits

0x0804,	// (0x0005a073) list_single_midp_graphic_pane_t1_ParamLimits

0x53ad,	// (0x0005ec1c) bg_active_tab_pane_cp5_ParamLimits

0xa9d3,	// (0x00064242) tabs_3_long_active_pane_t1_ParamLimits

0x200e,	// (0x0005b87d) bg_passive_tab_pane_cp5_ParamLimits

0x0804,	// (0x0005a073) list_single_midp_graphic_pane_t1

0xb7ca,	// (0x00065039) bg_status_flat_pane_ParamLimits

0x21b2,	// (0x0005ba21) indicator_pane_cp2_ParamLimits

0x21b2,	// (0x0005ba21) indicator_pane_cp2

0xc1e9,	// (0x00065a58) navi_pane_srt_ParamLimits

0xc1e9,	// (0x00065a58) navi_pane_srt

0x2319,	// (0x0005bb88) popup_clock_digital_analogue_window_cp1

0x53f1,	// (0x0005ec60) indicator_pane_t1

0x1cc2,	// (0x0005b531) copy_highlight_pane

0x1cc2,	// (0x0005b531) cursor_graphics_pane

0x1cc2,	// (0x0005b531) graphic_within_text_pane

0x1cc2,	// (0x0005b531) link_highlight_pane

0x3799,	// (0x0005d008) popup_preview_text_window_t5_ParamLimits

0x3799,	// (0x0005d008) popup_preview_text_window_t5

0x1de6,	// (0x0005b655) cursor_digital_pane

0x1de6,	// (0x0005b655) cursor_primary_pane

0x1df7,	// (0x0005b666) cursor_primary_small_pane

0x1dff,	// (0x0005b66e) cursor_secondary_pane

0x1e07,	// (0x0005b676) cursor_title_pane

0x1de6,	// (0x0005b655) link_highlight_digital_pane

0x1dee,	// (0x0005b65d) link_highlight_primary_pane

0x1df7,	// (0x0005b666) link_highlight_primary_small_pane

0x1dff,	// (0x0005b66e) link_highlight_secondary_pane

0x1e07,	// (0x0005b676) link_highlight_title_pane

0x1de6,	// (0x0005b655) copy_highlight_digital_pane

0x1de6,	// (0x0005b655) copy_highlight_primary_pane

0x1df7,	// (0x0005b666) copy_highlight_primary_small_pane

0x1dff,	// (0x0005b66e) copy_highlight_secondary_pane

0x1e07,	// (0x0005b676) copy_highlight_title_pane

0x1dff,	// (0x0005b66e) graphic_text_digital_pane

0x2e5e,	// (0x0005c6cd) graphic_text_primary_pane

0x2e67,	// (0x0005c6d6) graphic_text_primary_small_pane

0x1df7,	// (0x0005b666) graphic_text_secondary_pane

0x1de6,	// (0x0005b655) graphic_text_title_pane

0xae03,	// (0x00064672) cursor_primary_pane_g1

0x2e50,	// (0x0005c6bf) cursor_text_primary_t1

0xc461,	// (0x00065cd0) cursor_primary_small_pane_g1

0x2e42,	// (0x0005c6b1) cursor_text_primary_small_t1

0xc457,	// (0x00065cc6) cursor_primary_small_pane_g1_copy1

0x2e2a,	// (0x0005c699) cursor_text_primary_small_t1_copy1

0x2e08,	// (0x0005c677) cursor_text_title_t1

0xc44d,	// (0x00065cbc) cursor_title_pane_g1

0xae03,	// (0x00064672) cursor_digital_pane_g1

0x1e19,	// (0x0005b688) cursor_text_digital_t1

0x1e27,	// (0x0005b696) link_highlight_primary_pane_g1

0x2db1,	// (0x0005c620) link_highlight_primary_pane_t1

0x1e27,	// (0x0005b696) link_highlight_primary_small_pane_g1

0x1e2f,	// (0x0005b69e) link_highlight_primary_small_pane_t1

0x1e3e,	// (0x0005b6ad) link_highlight_secondary_pane_g1

0x1e46,	// (0x0005b6b5) link_highlight_secondary_pane_t1

0x2d25,	// (0x0005c594) link_highlight_title_pane_g1

0x2d2d,	// (0x0005c59c) link_highlight_title_pane_t1

0x2d0e,	// (0x0005c57d) link_highlight_digital_pane_g1

0x2d16,	// (0x0005c585) link_highlight_digital_pane_t1

0x2bd6,	// (0x0005c445) copy_highlight_primary_pane_g1

0x2bed,	// (0x0005c45c) copy_highlight_primary_pane_t1

0x2bd6,	// (0x0005c445) copy_highlight_primary_small_pane_g1

0x2bde,	// (0x0005c44d) copy_highlight_primary_small_pane_t1

0x1e55,	// (0x0005b6c4) copy_highlight_secondary_pane_g1

0x1e5d,	// (0x0005b6cc) copy_highlight_secondary_pane_t1

0x2bbf,	// (0x0005c42e) copy_highlight_title_pane_g1

0x2bc7,	// (0x0005c436) copy_highlight_title_pane_t1

0x2bd6,	// (0x0005c445) copy_highlight_digital_pane_g1

0x407b,	// (0x0005d8ea) copy_highlight_digital_pane_t1

0x3fcf,	// (0x0005d83e) graphic_text_primary_pane_g1

0x405f,	// (0x0005d8ce) graphic_text_primary_pane_t1

0x406d,	// (0x0005d8dc) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x00069243) graphic_text_primary_pane_t

0x403b,	// (0x0005d8aa) graphic_text_primary_small_pane_g1

0x4043,	// (0x0005d8b2) graphic_text_primary_small_pane_t1

0x4051,	// (0x0005d8c0) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0006923e) graphic_text_primary_small_pane_t

0x4017,	// (0x0005d886) graphic_text_secondary_pane_g1

0x401f,	// (0x0005d88e) graphic_text_secondary_pane_t1

0x402d,	// (0x0005d89c) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x00069239) graphic_text_secondary_pane_t

0x3ff3,	// (0x0005d862) graphic_text_title_pane_g1

0x3ffb,	// (0x0005d86a) graphic_text_title_pane_t1

0x4009,	// (0x0005d878) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x00069234) graphic_text_title_pane_t

0x3fcf,	// (0x0005d83e) graphic_text_digital_pane_g1

0x3fd7,	// (0x0005d846) graphic_text_digital_pane_t1

0x3fe5,	// (0x0005d854) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0006922f) graphic_text_digital_pane_t

0x53ad,	// (0x0005ec1c) navi_icon_pane_srt_ParamLimits

0x53ad,	// (0x0005ec1c) navi_icon_pane_srt

0x535f,	// (0x0005ebce) navi_midp_pane_srt

0x535f,	// (0x0005ebce) navi_navi_pane_srt

0x53ad,	// (0x0005ec1c) navi_text_pane_srt_ParamLimits

0x53ad,	// (0x0005ec1c) navi_text_pane_srt

0x3f9a,	// (0x0005d809) navi_navi_icon_text_pane_srt

0x3fa2,	// (0x0005d811) navi_navi_pane_srt_g1_ParamLimits

0x3fa2,	// (0x0005d811) navi_navi_pane_srt_g1

0x3fb4,	// (0x0005d823) navi_navi_pane_srt_g2_ParamLimits

0x3fb4,	// (0x0005d823) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0006922a) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0006922a) navi_navi_pane_srt_g

0x3fc6,	// (0x0005d835) navi_navi_tabs_pane_srt

0x3f9a,	// (0x0005d809) navi_navi_text_pane_srt

0x3f9a,	// (0x0005d809) navi_navi_volume_pane_srt

0x3f8b,	// (0x0005d7fa) navi_navi_text_pane_srt_t1

0x0c33,	// (0x0005a4a2) navi_navi_volume_pane_srt_g1

0x0c3b,	// (0x0005a4aa) volume_small_pane_srt_ParamLimits

0x0c3b,	// (0x0005a4aa) volume_small_pane_srt

0xf4ab,	// (0x00068d1a) volume_small_pane_srt_g1_ParamLimits

0xf4ab,	// (0x00068d1a) volume_small_pane_srt_g1

0xf4bb,	// (0x00068d2a) volume_small_pane_srt_g2_ParamLimits

0xf4bb,	// (0x00068d2a) volume_small_pane_srt_g2

0xf4cc,	// (0x00068d3b) volume_small_pane_srt_g3_ParamLimits

0xf4cc,	// (0x00068d3b) volume_small_pane_srt_g3

0xf4dd,	// (0x00068d4c) volume_small_pane_srt_g4_ParamLimits

0xf4dd,	// (0x00068d4c) volume_small_pane_srt_g4

0xf4ee,	// (0x00068d5d) volume_small_pane_srt_g5_ParamLimits

0xf4ee,	// (0x00068d5d) volume_small_pane_srt_g5

0xf4ff,	// (0x00068d6e) volume_small_pane_srt_g6_ParamLimits

0xf4ff,	// (0x00068d6e) volume_small_pane_srt_g6

0xf510,	// (0x00068d7f) volume_small_pane_srt_g7_ParamLimits

0xf510,	// (0x00068d7f) volume_small_pane_srt_g7

0xf521,	// (0x00068d90) volume_small_pane_srt_g8_ParamLimits

0xf521,	// (0x00068d90) volume_small_pane_srt_g8

0xf532,	// (0x00068da1) volume_small_pane_srt_g9_ParamLimits

0xf532,	// (0x00068da1) volume_small_pane_srt_g9

0xf543,	// (0x00068db2) volume_small_pane_srt_g10_ParamLimits

0xf543,	// (0x00068db2) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00068fd7) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00068fd7) volume_small_pane_srt_g

0x8b7c,	// (0x000623eb) query_popup_data_pane_cp2

0x3f71,	// (0x0005d7e0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3f71,	// (0x0005d7e0) navi_navi_icon_text_pane_srt_t1

0x2e5e,	// (0x0005c6cd) navi_tabs_2_long_pane_srt

0x2e5e,	// (0x0005c6cd) navi_tabs_2_pane_srt

0x2e5e,	// (0x0005c6cd) navi_tabs_3_long_pane_srt

0x2e5e,	// (0x0005c6cd) navi_tabs_3_pane_srt

0x2e5e,	// (0x0005c6cd) navi_tabs_4_pane_srt

0x0c13,	// (0x0005a482) tabs_2_active_pane_srt_ParamLimits

0x0c13,	// (0x0005a482) tabs_2_active_pane_srt

0x0c23,	// (0x0005a492) tabs_2_passive_pane_srt_ParamLimits

0x0c23,	// (0x0005a492) tabs_2_passive_pane_srt

0x2642,	// (0x0005beb1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2642,	// (0x0005beb1) bg_passive_tab_pane_cp1_srt

0x3f3d,	// (0x0005d7ac) bg_passive_tab_pane_g1_cp1_srt

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp1_srt

0x3f46,	// (0x0005d7b5) bg_passive_tab_pane_g3_cp1_srt

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp1_srt_ParamLimits

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp1_srt

0x3f4f,	// (0x0005d7be) tabs_2_active_pane_srt_g1

0xc96d,	// (0x000661dc) tabs_2_active_pane_srt_t1_ParamLimits

0xc96d,	// (0x000661dc) tabs_2_active_pane_srt_t1

0x3f3d,	// (0x0005d7ac) bg_active_tab_pane_g1_cp1_srt

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp1_srt

0x3f46,	// (0x0005d7b5) bg_active_tab_pane_g3_cp1_srt

0x0be0,	// (0x0005a44f) tabs_3_active_pane_srt_ParamLimits

0x0be0,	// (0x0005a44f) tabs_3_active_pane_srt

0x0bf1,	// (0x0005a460) tabs_3_passive_pane_cp_srt_ParamLimits

0x0bf1,	// (0x0005a460) tabs_3_passive_pane_cp_srt

0x0c02,	// (0x0005a471) tabs_3_passive_pane_srt_ParamLimits

0x0c02,	// (0x0005a471) tabs_3_passive_pane_srt

0x2642,	// (0x0005beb1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2642,	// (0x0005beb1) bg_passive_tab_pane_cp2_srt

0x1e6c,	// (0x0005b6db) bg_passive_tab_pane_g1_cp2_srt

0xe035,	// (0x000678a4) bg_passive_tab_pane_g2_cp2_srt

0x1e75,	// (0x0005b6e4) bg_passive_tab_pane_g3_cp2_srt

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp2_srt_ParamLimits

0x54e0,	// (0x0005ed4f) bg_active_tab_pane_cp2_srt

0x3f23,	// (0x0005d792) tabs_3_active_pane_srt_g1

0xc957,	// (0x000661c6) tabs_3_active_pane_srt_t1_ParamLimits

0xc957,	// (0x000661c6) tabs_3_active_pane_srt_t1

0x1e6c,	// (0x0005b6db) bg_active_tab_pane_g1_cp2_srt

0xe035,	// (0x000678a4) bg_active_tab_pane_g2_cp2_srt

0x1e75,	// (0x0005b6e4) bg_active_tab_pane_g3_cp2_srt

0x0b98,	// (0x0005a407) tabs_4_active_pane_srt_ParamLimits

0x0b98,	// (0x0005a407) tabs_4_active_pane_srt

0x0baa,	// (0x0005a419) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0baa,	// (0x0005a419) tabs_4_passive_pane_cp2_srt

0x0135,	// (0x000599a4) aid_size_cell_toolbar

0x3b65,	// (0x0005d3d4) main_idle_act_pane_ParamLimits

0x030e,	// (0x00059b7d) popup_large_graphic_colour_window_ParamLimits

0xb68e,	// (0x00064efd) popup_toolbar_window_ParamLimits

0xb68e,	// (0x00064efd) popup_toolbar_window

0x3d3d,	// (0x0005d5ac) list_single_graphic_2heading_pane_ParamLimits

0x3d3d,	// (0x0005d5ac) list_single_graphic_2heading_pane

0x924a,	// (0x00062ab9) aid_size_cell_apps_grid_lsc_pane

0x925c,	// (0x00062acb) aid_size_cell_apps_grid_prt_pane

0x200e,	// (0x0005b87d) bg_wml_button_pane_cp1_ParamLimits

0x200e,	// (0x0005b87d) bg_wml_button_pane_cp1

0xc3fd,	// (0x00065c6c) form_midp_field_text_pane_t1_ParamLimits

0x2642,	// (0x0005beb1) input_focus_pane_cp050_ParamLimits

0x2881,	// (0x0005c0f0) list_midp_form_text_pane_ParamLimits

0x2833,	// (0x0005c0a2) input_focus_pane_cp051_ParamLimits

0x2847,	// (0x0005c0b6) list_midp_choice_pane_ParamLimits

0xc3b4,	// (0x00065c23) list_single_2graphic_pane_cp3_ParamLimits

0xc3b4,	// (0x00065c23) list_single_2graphic_pane_cp3

0x4c2c,	// (0x0005e49b) list_single_midp_graphic_pane_ParamLimits

0x4c2c,	// (0x0005e49b) list_single_midp_graphic_pane

0xf061,	// (0x000688d0) list_single_graphic_2heading_pane_g1_ParamLimits

0xf061,	// (0x000688d0) list_single_graphic_2heading_pane_g1

0xf06d,	// (0x000688dc) list_single_graphic_2heading_pane_g4_ParamLimits

0xf06d,	// (0x000688dc) list_single_graphic_2heading_pane_g4

0xf079,	// (0x000688e8) list_single_graphic_2heading_pane_g5_ParamLimits

0xf079,	// (0x000688e8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0006902a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0006902a) list_single_graphic_2heading_pane_g

0xf085,	// (0x000688f4) list_single_graphic_2heading_pane_t1_ParamLimits

0xf085,	// (0x000688f4) list_single_graphic_2heading_pane_t1

0xf099,	// (0x00068908) list_single_graphic_2heading_pane_t2_ParamLimits

0xf099,	// (0x00068908) list_single_graphic_2heading_pane_t2

0xf0b5,	// (0x00068924) list_single_graphic_2heading_pane_t3_ParamLimits

0xf0b5,	// (0x00068924) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00069031) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00069031) list_single_graphic_2heading_pane_t

0x2478,	// (0x0005bce7) bg_popup_sub_pane_cp2

0x24a2,	// (0x0005bd11) grid_toobar_pane

0x0774,	// (0x00059fe3) cell_toolbar_pane_ParamLimits

0x0774,	// (0x00059fe3) cell_toolbar_pane

0x24ea,	// (0x0005bd59) cell_toolbar_pane_g1_ParamLimits

0x24ea,	// (0x0005bd59) cell_toolbar_pane_g1

0x24fe,	// (0x0005bd6d) cell_toolbar_pane_g2_ParamLimits

0x24fe,	// (0x0005bd6d) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0006903f) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0006903f) cell_toolbar_pane_g

0x2520,	// (0x0005bd8f) grid_highlight_pane_cp2_ParamLimits

0x2520,	// (0x0005bd8f) grid_highlight_pane_cp2

0x253a,	// (0x0005bda9) toolbar_button_pane

0x2546,	// (0x0005bdb5) toolbar_button_pane_g1

0x254e,	// (0x0005bdbd) toolbar_button_pane_g2

0x2556,	// (0x0005bdc5) toolbar_button_pane_g3

0x255e,	// (0x0005bdcd) toolbar_button_pane_g4

0x2566,	// (0x0005bdd5) toolbar_button_pane_g5

0x256e,	// (0x0005bddd) toolbar_button_pane_g6

0x2576,	// (0x0005bde5) toolbar_button_pane_g7

0x257e,	// (0x0005bded) toolbar_button_pane_g8

0x2586,	// (0x0005bdf5) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00069044) toolbar_button_pane_g

0x07ac,	// (0x0005a01b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x07ac,	// (0x0005a01b) list_single_2graphic_pane_g1_cp3

0xb83d,	// (0x000650ac) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb83d,	// (0x000650ac) list_single_2graphic_pane_g2_cp3

0x07c9,	// (0x0005a038) list_single_2graphic_pane_g3_cp3

0x07d1,	// (0x0005a040) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07d1,	// (0x0005a040) list_single_2graphic_pane_g4_cp3

0x07dd,	// (0x0005a04c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x07dd,	// (0x0005a04c) list_single_2graphic_pane_t1_cp3

0x07f8,	// (0x0005a067) list_single_midp_graphic_pane_g2_ParamLimits

0x07f8,	// (0x0005a067) list_single_midp_graphic_pane_g2

0xf051,	// (0x000688c0) aid_zoom_text_primary

0xf059,	// (0x000688c8) aid_zoom_text_secondary

0x1f29,	// (0x0005b798) status_small_pane_g7_ParamLimits

0x1f29,	// (0x0005b798) status_small_pane_g7

0x1f4c,	// (0x0005b7bb) status_small_pane_t1_ParamLimits

0x9fb2,	// (0x00063821) title_pane_g2

0x0003,

0xf554,	// (0x00068dc3) title_pane_g

0xa24a,	// (0x00063ab9) aid_size_cell_colour_1_pane_ParamLimits

0xa24a,	// (0x00063ab9) aid_size_cell_colour_1_pane

0xa25e,	// (0x00063acd) aid_size_cell_colour_2_pane_ParamLimits

0xa25e,	// (0x00063acd) aid_size_cell_colour_2_pane

0xa272,	// (0x00063ae1) aid_size_cell_colour_3_pane_ParamLimits

0xa272,	// (0x00063ae1) aid_size_cell_colour_3_pane

0xa286,	// (0x00063af5) aid_size_cell_colour_4_pane_ParamLimits

0xa286,	// (0x00063af5) aid_size_cell_colour_4_pane

0xf109,	// (0x00068978) title_pane_stacon_g1_ParamLimits

0xf109,	// (0x00068978) title_pane_stacon_g1

0x2c44,	// (0x0005c4b3) popup_note_wait_window_g3_ParamLimits

0x2c44,	// (0x0005c4b3) popup_note_wait_window_g3

0x2cbb,	// (0x0005c52a) popup_note_wait_window_t5_ParamLimits

0x2cbb,	// (0x0005c52a) popup_note_wait_window_t5

0x535f,	// (0x0005ebce) main_feb_china_hwr_fs_writing_pane

0xb025,	// (0x00064894) popup_feb_china_hwr_fs_window_ParamLimits

0xb025,	// (0x00064894) popup_feb_china_hwr_fs_window

0xb84e,	// (0x000650bd) aid_size_cell_hwr_fs_ParamLimits

0xb84e,	// (0x000650bd) aid_size_cell_hwr_fs

0x2642,	// (0x0005beb1) bg_popup_sub_pane_cp3_ParamLimits

0x2642,	// (0x0005beb1) bg_popup_sub_pane_cp3

0xb863,	// (0x000650d2) grid_hwr_fs_pane_ParamLimits

0xb863,	// (0x000650d2) grid_hwr_fs_pane

0x0847,	// (0x0005a0b6) linegrid_hwr_fs_pane_ParamLimits

0x0847,	// (0x0005a0b6) linegrid_hwr_fs_pane

0xb87b,	// (0x000650ea) cell_hwr_fs_pane_ParamLimits

0xb87b,	// (0x000650ea) cell_hwr_fs_pane

0x264e,	// (0x0005bebd) linegrid_hwr_fs_pane_g1_ParamLimits

0x264e,	// (0x0005bebd) linegrid_hwr_fs_pane_g1

0xc388,	// (0x00065bf7) linegrid_hwr_fs_pane_g2_ParamLimits

0xc388,	// (0x00065bf7) linegrid_hwr_fs_pane_g2

0x266c,	// (0x0005bedb) linegrid_hwr_fs_pane_g3_ParamLimits

0x266c,	// (0x0005bedb) linegrid_hwr_fs_pane_g3

0x087b,	// (0x0005a0ea) linegrid_hwr_fs_pane_g4_ParamLimits

0x087b,	// (0x0005a0ea) linegrid_hwr_fs_pane_g4

0x0899,	// (0x0005a108) linegrid_hwr_fs_pane_g5_ParamLimits

0x0899,	// (0x0005a108) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0006906a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0006906a) linegrid_hwr_fs_pane_g

0x2678,	// (0x0005bee7) cell_hwr_fs_pane_g1_ParamLimits

0x2678,	// (0x0005bee7) cell_hwr_fs_pane_g1

0x23af,	// (0x0005bc1e) cell_hwr_fs_pane_g2_ParamLimits

0x23af,	// (0x0005bc1e) cell_hwr_fs_pane_g2

0xc39a,	// (0x00065c09) cell_hwr_fs_pane_g3_ParamLimits

0xc39a,	// (0x00065c09) cell_hwr_fs_pane_g3

0xc3a7,	// (0x00065c16) cell_hwr_fs_pane_g4_ParamLimits

0xc3a7,	// (0x00065c16) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00069075) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00069075) cell_hwr_fs_pane_g

0xb8a1,	// (0x00065110) cell_hwr_fs_pane_t1

0x535f,	// (0x0005ebce) grid_highlight_pane_cp6

0x535f,	// (0x0005ebce) main_idle_act2_pane

0x9059,	// (0x000628c8) aid_inside_area_popup_secondary

0xc4c8,	// (0x00065d37) aid_inside_area_window_primary_ParamLimits

0xc4c8,	// (0x00065d37) aid_inside_area_window_primary

0x408a,	// (0x0005d8f9) ai2_news_ticker_pane

0x4092,	// (0x0005d901) aid_size_cell_ai1_link_ParamLimits

0x4092,	// (0x0005d901) aid_size_cell_ai1_link

0x40ac,	// (0x0005d91b) popup_ai2_data_window_ParamLimits

0x40ac,	// (0x0005d91b) popup_ai2_data_window

0x40ca,	// (0x0005d939) popup_ai2_link_window_ParamLimits

0x40ca,	// (0x0005d939) popup_ai2_link_window

0x2642,	// (0x0005beb1) bg_popup_sub_pane_cp4_ParamLimits

0x2642,	// (0x0005beb1) bg_popup_sub_pane_cp4

0x40e0,	// (0x0005d94f) grid_ai2_link_pane_ParamLimits

0x40e0,	// (0x0005d94f) grid_ai2_link_pane

0x40f7,	// (0x0005d966) popup_ai2_link_window_g1_ParamLimits

0x40f7,	// (0x0005d966) popup_ai2_link_window_g1

0x4103,	// (0x0005d972) popup_ai2_link_window_g2_ParamLimits

0x4103,	// (0x0005d972) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x00069248) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x00069248) popup_ai2_link_window_g

0x4114,	// (0x0005d983) ai2_mp_button_pane

0x411c,	// (0x0005d98b) ai2_mp_volume_pane

0x2833,	// (0x0005c0a2) bg_popup_sub_pane_cp5_ParamLimits

0x2833,	// (0x0005c0a2) bg_popup_sub_pane_cp5

0x4124,	// (0x0005d993) heading_ai2_gene_pane_ParamLimits

0x4124,	// (0x0005d993) heading_ai2_gene_pane

0x4130,	// (0x0005d99f) list_ai2_gene_pane_ParamLimits

0x4130,	// (0x0005d99f) list_ai2_gene_pane

0x4178,	// (0x0005d9e7) cell_ai2_link_pane_ParamLimits

0x4178,	// (0x0005d9e7) cell_ai2_link_pane

0x418e,	// (0x0005d9fd) cell_ai2_link_pane_g1

0x535f,	// (0x0005ebce) grid_highlight_pane_cp7

0x0c50,	// (0x0005a4bf) ai2_mp_volume_pane_g1

0x4261,	// (0x0005dad0) ai2_mp_volume_pane_g2

0x41d6,	// (0x0005da45) list_ai2_gene_pane_t1

0x4269,	// (0x0005dad8) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x00069261) ai2_mp_volume_pane_g

0x0c58,	// (0x0005a4c7) volume_small_pane_cp3

0x4271,	// (0x0005dae0) aid_size_cell_ai2_button

0x4279,	// (0x0005dae8) grid_ai2_button_pane

0x4282,	// (0x0005daf1) cell_ai2_button_pane_ParamLimits

0x4282,	// (0x0005daf1) cell_ai2_button_pane

0x5355,	// (0x0005ebc4) cell_ai2_button_pane_g1

0x535f,	// (0x0005ebce) grid_highlight_pane_cp8

0x4221,	// (0x0005da90) ai2_gene_pane_t1_ParamLimits

0x4221,	// (0x0005da90) ai2_gene_pane_t1

0xaf95,	// (0x00064804) aid_height_parent_landscape

0xc6e4,	// (0x00065f53) aid_height_set_list

0x3b65,	// (0x0005d3d4) aid_size_parent

0x3eab,	// (0x0005d71a) aid_size_cell_graphic_pane_ParamLimits

0x4140,	// (0x0005d9af) popup_ai2_data_window_g1_ParamLimits

0x4140,	// (0x0005d9af) popup_ai2_data_window_g1

0x414c,	// (0x0005d9bb) ai2_news_ticker_pane_g1

0x4154,	// (0x0005d9c3) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0006924d) ai2_news_ticker_pane_g

0x415c,	// (0x0005d9cb) ai2_news_ticker_pane_t1

0x416a,	// (0x0005d9d9) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x00069252) ai2_news_ticker_pane_t

0x4197,	// (0x0005da06) heading_ai2_gene_pane_g1

0x419f,	// (0x0005da0e) heading_ai2_gene_pane_t1_ParamLimits

0x419f,	// (0x0005da0e) heading_ai2_gene_pane_t1

0x41b4,	// (0x0005da23) list_highlight_pane_cp6

0x41bc,	// (0x0005da2b) ai2_gene_pane_ParamLimits

0x41bc,	// (0x0005da2b) ai2_gene_pane

0x41e4,	// (0x0005da53) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x00069257) list_ai2_gene_pane_t

0x41f2,	// (0x0005da61) list_highlight_pane_cp8_ParamLimits

0x41f2,	// (0x0005da61) list_highlight_pane_cp8

0x4203,	// (0x0005da72) ai2_gene_pane_g1_ParamLimits

0x4203,	// (0x0005da72) ai2_gene_pane_g1

0x4215,	// (0x0005da84) ai2_gene_pane_g2_ParamLimits

0x4215,	// (0x0005da84) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0006925c) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0006925c) ai2_gene_pane_g

0x8e97,	// (0x00062706) scroll_pane_cp12

0xaf54,	// (0x000647c3) control_pane_t3_ParamLimits

0xaf54,	// (0x000647c3) control_pane_t3

0x1f3d,	// (0x0005b7ac) status_small_pane_g8_ParamLimits

0x1f3d,	// (0x0005b7ac) status_small_pane_g8

0xb0c7,	// (0x00064936) popup_find_window_ParamLimits

0xb378,	// (0x00064be7) popup_note_image_window_ParamLimits

0xe14e,	// (0x000679bd) list_double2_graphic_pane_vc_g1_ParamLimits

0xe14e,	// (0x000679bd) list_double2_graphic_pane_vc_g1

0x1c33,	// (0x0005b4a2) list_double2_graphic_pane_vc_g2_ParamLimits

0x1c33,	// (0x0005b4a2) list_double2_graphic_pane_vc_g2

0x24de,	// (0x0005bd4d) list_double2_graphic_pane_vc_g3_ParamLimits

0x24de,	// (0x0005bd4d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x00069038) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x00069038) list_double2_graphic_pane_vc_g

0xe15a,	// (0x000679c9) list_double2_graphic_pane_vc_t1_ParamLimits

0xe15a,	// (0x000679c9) list_double2_graphic_pane_vc_t1

0x1c33,	// (0x0005b4a2) list_single_heading_pane_vc_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_heading_pane_vc_g1

0x24de,	// (0x0005bd4d) list_single_heading_pane_vc_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00068e47) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00068e47) list_single_heading_pane_vc_g

0xe170,	// (0x000679df) list_single_heading_pane_vc_t1_ParamLimits

0xe170,	// (0x000679df) list_single_heading_pane_vc_t1

0xe188,	// (0x000679f7) list_single_heading_pane_vc_t2_ParamLimits

0xe188,	// (0x000679f7) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x00069059) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x00069059) list_single_heading_pane_vc_t

0x258e,	// (0x0005bdfd) list_setting_number_pane_vc_g1_ParamLimits

0x258e,	// (0x0005bdfd) list_setting_number_pane_vc_g1

0x259a,	// (0x0005be09) list_setting_number_pane_vc_g2_ParamLimits

0x259a,	// (0x0005be09) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0006905e) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0006905e) list_setting_number_pane_vc_g

0x25a6,	// (0x0005be15) list_setting_number_pane_vc_t1_ParamLimits

0x25a6,	// (0x0005be15) list_setting_number_pane_vc_t1

0x25ba,	// (0x0005be29) list_setting_number_pane_vc_t2_ParamLimits

0x25ba,	// (0x0005be29) list_setting_number_pane_vc_t2

0x25d6,	// (0x0005be45) list_setting_number_pane_vc_t3_ParamLimits

0x25d6,	// (0x0005be45) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x00069063) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x00069063) list_setting_number_pane_vc_t

0x2604,	// (0x0005be73) set_value_pane_vc_ParamLimits

0x2604,	// (0x0005be73) set_value_pane_vc

0x3d3d,	// (0x0005d5ac) list_double2_graphic_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double2_graphic_pane_vc

0x3d3d,	// (0x0005d5ac) list_double2_large_graphic_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double2_large_graphic_pane_vc

0x3d3d,	// (0x0005d5ac) list_double2_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double2_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_graphic_heading_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_graphic_heading_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_graphic_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_graphic_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_heading_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_heading_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_large_graphic_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_large_graphic_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_number_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_number_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_pane_vc

0x3d3d,	// (0x0005d5ac) list_double_time_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_double_time_pane_vc

0x3d3d,	// (0x0005d5ac) list_setting_number_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_setting_number_pane_vc

0x3d3d,	// (0x0005d5ac) list_setting_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_setting_pane_vc

0x3d3d,	// (0x0005d5ac) list_single_graphic_heading_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_single_graphic_heading_pane_vc

0x3d3d,	// (0x0005d5ac) list_single_heading_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_single_heading_pane_vc

0x3d3d,	// (0x0005d5ac) list_single_number_heading_pane_vc_ParamLimits

0x3d3d,	// (0x0005d5ac) list_single_number_heading_pane_vc

0xe14e,	// (0x000679bd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe14e,	// (0x000679bd) list_double_graphic_heading_pane_vc_g1

0x359f,	// (0x0005ce0e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x359f,	// (0x0005ce0e) list_double_graphic_heading_pane_vc_g2

0x35ab,	// (0x0005ce1a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x35ab,	// (0x0005ce1a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x00069268) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x00069268) list_double_graphic_heading_pane_vc_g

0xe1bf,	// (0x00067a2e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe1bf,	// (0x00067a2e) list_double_graphic_heading_pane_vc_t1

0xe170,	// (0x000679df) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe170,	// (0x000679df) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0006926f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0006926f) list_double_graphic_heading_pane_vc_t

0x258e,	// (0x0005bdfd) list_setting_pane_vc_g1_ParamLimits

0x258e,	// (0x0005bdfd) list_setting_pane_vc_g1

0x259a,	// (0x0005be09) list_setting_pane_vc_g2_ParamLimits

0x259a,	// (0x0005be09) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0006905e) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0006905e) list_setting_pane_vc_g

0x44e9,	// (0x0005dd58) list_setting_pane_vc_t1_ParamLimits

0x44e9,	// (0x0005dd58) list_setting_pane_vc_t1

0x4505,	// (0x0005dd74) list_setting_pane_vc_t2_ParamLimits

0x4505,	// (0x0005dd74) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x000692b2) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x000692b2) list_setting_pane_vc_t

0x2604,	// (0x0005be73) set_value_pane_cp_vc_ParamLimits

0x2604,	// (0x0005be73) set_value_pane_cp_vc

0x1c33,	// (0x0005b4a2) list_single_number_heading_pane_vc_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_number_heading_pane_vc_g1

0x24de,	// (0x0005bd4d) list_single_number_heading_pane_vc_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00068e47) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00068e47) list_single_number_heading_pane_vc_g

0xe170,	// (0x000679df) list_single_number_heading_pane_vc_t1_ParamLimits

0xe170,	// (0x000679df) list_single_number_heading_pane_vc_t1

0xe1d1,	// (0x00067a40) list_single_number_heading_pane_vc_t2_ParamLimits

0xe1d1,	// (0x00067a40) list_single_number_heading_pane_vc_t2

0xdd49,	// (0x000675b8) list_single_number_heading_pane_vc_t3_ParamLimits

0xdd49,	// (0x000675b8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x000692b7) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x000692b7) list_single_number_heading_pane_vc_t

0xe14e,	// (0x000679bd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe14e,	// (0x000679bd) list_single_graphic_heading_pane_vc_g1

0x1c33,	// (0x0005b4a2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1c33,	// (0x0005b4a2) list_single_graphic_heading_pane_vc_g4

0x24de,	// (0x0005bd4d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x24de,	// (0x0005bd4d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x00069038) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00069038) list_single_graphic_heading_pane_vc_g

0xe170,	// (0x000679df) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe170,	// (0x000679df) list_single_graphic_heading_pane_vc_t1

0xe1e3,	// (0x00067a52) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe1e3,	// (0x00067a52) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x000692be) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x000692be) list_single_graphic_heading_pane_vc_t

0x1c33,	// (0x0005b4a2) list_double2_pane_vc_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_double2_pane_vc_g1

0x24de,	// (0x0005bd4d) list_double2_pane_vc_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x00068e47) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x00068e47) list_double2_pane_vc_g

0xe1a9,	// (0x00067a18) list_double2_pane_vc_t1_ParamLimits

0xe1a9,	// (0x00067a18) list_double2_pane_vc_t1

0x35b7,	// (0x0005ce26) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x35b7,	// (0x0005ce26) list_double2_large_graphic_pane_vc_g1

0x1c33,	// (0x0005b4a2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1c33,	// (0x0005b4a2) list_double2_large_graphic_pane_vc_g2

0x24de,	// (0x0005bd4d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x24de,	// (0x0005bd4d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00068e5f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00068e5f) list_double2_large_graphic_pane_vc_g

0xdd33,	// (0x000675a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdd33,	// (0x000675a2) list_double2_large_graphic_pane_vc_t1

0x35c3,	// (0x0005ce32) list_double_time_pane_vc_g1_ParamLimits

0x35c3,	// (0x0005ce32) list_double_time_pane_vc_g1

0x35cf,	// (0x0005ce3e) list_double_time_pane_vc_g2_ParamLimits

0x35cf,	// (0x0005ce3e) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x000692c3) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x000692c3) list_double_time_pane_vc_g

0xe1f5,	// (0x00067a64) list_double_time_pane_vc_t1_ParamLimits

0xe1f5,	// (0x00067a64) list_double_time_pane_vc_t1

0xe21f,	// (0x00067a8e) list_double_time_pane_vc_t2_ParamLimits

0xe21f,	// (0x00067a8e) list_double_time_pane_vc_t2

0xe268,	// (0x00067ad7) list_double_time_pane_vc_t3_ParamLimits

0xe268,	// (0x00067ad7) list_double_time_pane_vc_t3

0xe27a,	// (0x00067ae9) list_double_time_pane_vc_t4_ParamLimits

0xe27a,	// (0x00067ae9) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x000692c8) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x000692c8) list_double_time_pane_vc_t

0x1c33,	// (0x0005b4a2) list_double_pane_vc_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_double_pane_vc_g1

0x24de,	// (0x0005bd4d) list_double_pane_vc_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x00068e47) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x00068e47) list_double_pane_vc_g

0xe29f,	// (0x00067b0e) list_double_pane_vc_t1_ParamLimits

0xe29f,	// (0x00067b0e) list_double_pane_vc_t1

0xe2b3,	// (0x00067b22) list_double_pane_vc_t2_ParamLimits

0xe2b3,	// (0x00067b22) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x000692d1) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x000692d1) list_double_pane_vc_t

0x1c33,	// (0x0005b4a2) list_double_number_pane_vc_g1_ParamLimits

0x1c33,	// (0x0005b4a2) list_double_number_pane_vc_g1

0x24de,	// (0x0005bd4d) list_double_number_pane_vc_g2_ParamLimits

0x24de,	// (0x0005bd4d) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x00068e47) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x00068e47) list_double_number_pane_vc_g

0xe2c9,	// (0x00067b38) list_double_number_pane_vc_t1_ParamLimits

0xe2c9,	// (0x00067b38) list_double_number_pane_vc_t1

0xe2dd,	// (0x00067b4c) list_double_number_pane_vc_t2_ParamLimits

0xe2dd,	// (0x00067b4c) list_double_number_pane_vc_t2

0xe2b3,	// (0x00067b22) list_double_number_pane_vc_t3_ParamLimits

0xe2b3,	// (0x00067b22) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x000692d6) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x000692d6) list_double_number_pane_vc_t

0x35db,	// (0x0005ce4a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x35db,	// (0x0005ce4a) list_double_large_graphic_pane_vc_g1

0x35ec,	// (0x0005ce5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x35ec,	// (0x0005ce5b) list_double_large_graphic_pane_vc_g2

0x24de,	// (0x0005bd4d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x24de,	// (0x0005bd4d) list_double_large_graphic_pane_vc_g3

0xe2f1,	// (0x00067b60) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe2f1,	// (0x00067b60) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x000692dd) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x000692dd) list_double_large_graphic_pane_vc_g

0xe2fd,	// (0x00067b6c) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe2fd,	// (0x00067b6c) list_double_large_graphic_pane_vc_t1

0xe316,	// (0x00067b85) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe316,	// (0x00067b85) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x000692e6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x000692e6) list_double_large_graphic_pane_vc_t

0x359f,	// (0x0005ce0e) list_double_heading_pane_vc_g1_ParamLimits

0x359f,	// (0x0005ce0e) list_double_heading_pane_vc_g1

0x35ab,	// (0x0005ce1a) list_double_heading_pane_vc_g2_ParamLimits

0x35ab,	// (0x0005ce1a) list_double_heading_pane_vc_g2

0x0001,

0xfa7c,	// (0x000692eb) list_double_heading_pane_vc_g_ParamLimits

0xfa7c,	// (0x000692eb) list_double_heading_pane_vc_g

0xe32d,	// (0x00067b9c) list_double_heading_pane_vc_t1_ParamLimits

0xe32d,	// (0x00067b9c) list_double_heading_pane_vc_t1

0xe170,	// (0x000679df) list_double_heading_pane_vc_t2_ParamLimits

0xe170,	// (0x000679df) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x000692f0) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x000692f0) list_double_heading_pane_vc_t

0xe14e,	// (0x000679bd) list_double_graphic_pane_vc_g1_ParamLimits

0xe14e,	// (0x000679bd) list_double_graphic_pane_vc_g1

0x35fb,	// (0x0005ce6a) list_double_graphic_pane_vc_g2_ParamLimits

0x35fb,	// (0x0005ce6a) list_double_graphic_pane_vc_g2

0x360a,	// (0x0005ce79) list_double_graphic_pane_vc_g3_ParamLimits

0x360a,	// (0x0005ce79) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x000692f5) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x000692f5) list_double_graphic_pane_vc_g

0xe33f,	// (0x00067bae) list_double_graphic_pane_vc_t1_ParamLimits

0xe33f,	// (0x00067bae) list_double_graphic_pane_vc_t1

0xe2b3,	// (0x00067b22) list_double_graphic_pane_vc_t2_ParamLimits

0xe2b3,	// (0x00067b22) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x000692fc) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x000692fc) list_double_graphic_pane_vc_t

0xed9c,	// (0x0006860b) aid_size_cell_fastswap

0x9dfa,	// (0x00063669) aid_size_cell_touch_ParamLimits

0x9dfa,	// (0x00063669) aid_size_cell_touch

0xef23,	// (0x00068792) popup_fast_swap_wide_window_ParamLimits

0xef23,	// (0x00068792) popup_fast_swap_wide_window

0x9f49,	// (0x000637b8) touch_pane_ParamLimits

0x9f49,	// (0x000637b8) touch_pane

0x8eed,	// (0x0006275c) button_value_adjust_pane_cp2

0xdd7e,	// (0x000675ed) button_value_adjust_pane_cp4

0xdd86,	// (0x000675f5) form_field_data_pane_cp2

0xa821,	// (0x00064090) form_field_data_wide_pane_cp2

0x9293,	// (0x00062b02) bg_scroll_pane_ParamLimits

0xf265,	// (0x00068ad4) scroll_handle_pane_ParamLimits

0xf279,	// (0x00068ae8) scroll_sc2_down_pane_ParamLimits

0xf279,	// (0x00068ae8) scroll_sc2_down_pane

0x92c4,	// (0x00062b33) scroll_sc2_up_pane_ParamLimits

0x92c4,	// (0x00062b33) scroll_sc2_up_pane

0xcabc,	// (0x0006632b) grid_wheel_folder_pane_g1_ParamLimits

0xcabc,	// (0x0006632b) grid_wheel_folder_pane_g1

0xf443,	// (0x00068cb2) clock_nsta_pane_cp2_ParamLimits

0xf443,	// (0x00068cb2) clock_nsta_pane_cp2

0x200e,	// (0x0005b87d) listscroll_midp_pane_ParamLimits

0xad5a,	// (0x000645c9) midp_canvas_pane

0x1fb8,	// (0x0005b827) nsta_clock_indic_pane

0x1ff4,	// (0x0005b863) listscroll_form_pane_vc

0x1ffc,	// (0x0005b86b) listscroll_set_pane_vc_ParamLimits

0x1ffc,	// (0x0005b86b) listscroll_set_pane_vc

0xb7f2,	// (0x00065061) clock_nsta_pane

0xb81c,	// (0x0006508b) indicator_nsta_pane

0x2478,	// (0x0005bce7) bg_popup_sub_pane_cp2_ParamLimits

0x248c,	// (0x0005bcfb) find_pane_cp2_ParamLimits

0x248c,	// (0x0005bcfb) find_pane_cp2

0x24a2,	// (0x0005bd11) grid_toobar_pane_ParamLimits

0x2616,	// (0x0005be85) list_form_gen_pane_vc_ParamLimits

0x2616,	// (0x0005be85) list_form_gen_pane_vc

0x262c,	// (0x0005be9b) scroll_pane_cp8_vc_ParamLimits

0x262c,	// (0x0005be9b) scroll_pane_cp8_vc

0x26a8,	// (0x0005bf17) data_form_wide_pane_vc_ParamLimits

0x26a8,	// (0x0005bf17) data_form_wide_pane_vc

0x26b4,	// (0x0005bf23) form_field_data_wide_pane_vc_g1

0x26bc,	// (0x0005bf2b) form_field_data_wide_pane_vc_t1_ParamLimits

0x26bc,	// (0x0005bf2b) form_field_data_wide_pane_vc_t1

0x8f01,	// (0x00062770) input_focus_pane_cp6_vc_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_cp6_vc

0xc425,	// (0x00065c94) list_midp_pane_ParamLimits

0x3f17,	// (0x0005d786) scroll_pane_cp16_ParamLimits

0x3f17,	// (0x0005d786) scroll_pane_cp16

0x2a18,	// (0x0005c287) button_value_adjust_pane_ParamLimits

0x2a18,	// (0x0005c287) button_value_adjust_pane

0xc6f5,	// (0x00065f64) button_value_adjust_pane_cp6_ParamLimits

0xc6f5,	// (0x00065f64) button_value_adjust_pane_cp6

0xc837,	// (0x000660a6) settings_code_pane_cp_ParamLimits

0xc837,	// (0x000660a6) settings_code_pane_cp

0x5355,	// (0x0005ebc4) cell_touch_pane_g1

0x5355,	// (0x0005ebc4) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00068f7d) cell_touch_pane_g

0xc983,	// (0x000661f2) cell_touch_pane_cp_ParamLimits

0xc983,	// (0x000661f2) cell_touch_pane_cp

0xc99f,	// (0x0006620e) cell_touch_pane_ParamLimits

0xc99f,	// (0x0006620e) cell_touch_pane

0x5355,	// (0x0005ebc4) scroll_sc2_down_pane_g1

0x5355,	// (0x0005ebc4) scroll_sc2_up_pane_g1

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp4_vc

0x42b5,	// (0x0005db24) list_set_graphic_pane_vc_g1_ParamLimits

0x42b5,	// (0x0005db24) list_set_graphic_pane_vc_g1

0x42c1,	// (0x0005db30) list_set_graphic_pane_vc_g2_ParamLimits

0x42c1,	// (0x0005db30) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x00069274) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x00069274) list_set_graphic_pane_vc_g

0x42cd,	// (0x0005db3c) text_primary_small_cp13_vc_ParamLimits

0x42cd,	// (0x0005db3c) text_primary_small_cp13_vc

0x42e5,	// (0x0005db54) list_set_graphic_pane_vc_ParamLimits

0x42e5,	// (0x0005db54) list_set_graphic_pane_vc

0x535f,	// (0x0005ebce) input_focus_pane_cp2_vc

0x5355,	// (0x0005ebc4) setting_code_pane_vc_g1

0x53c4,	// (0x0005ec33) setting_code_pane_vc_t1

0x42fa,	// (0x0005db69) set_text_pane_vc_t1_ParamLimits

0x42fa,	// (0x0005db69) set_text_pane_vc_t1

0x535f,	// (0x0005ebce) input_focus_pane_cp1_vc

0x4318,	// (0x0005db87) list_set_text_pane_vc

0x5355,	// (0x0005ebc4) setting_text_pane_vc_g1

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp2_vc

0x53bb,	// (0x0005ec2a) setting_slider_graphic_pane_vc_g1

0x4322,	// (0x0005db91) setting_slider_graphic_pane_vc_t1

0x4334,	// (0x0005dba3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x00069279) setting_slider_graphic_pane_vc_t

0x4346,	// (0x0005dbb5) slider_set_pane_cp_vc

0x4350,	// (0x0005dbbf) slider_set_pane_vc_g1

0x4359,	// (0x0005dbc8) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0006927e) slider_set_pane_vc_g

0x8f68,	// (0x000627d7) set_opt_bg_pane_g1_copy1

0x8f70,	// (0x000627df) set_opt_bg_pane_g2_copy1

0x4385,	// (0x0005dbf4) set_opt_bg_pane_g3_copy1

0x8f80,	// (0x000627ef) set_opt_bg_pane_g4_copy1

0x8f88,	// (0x000627f7) set_opt_bg_pane_g5_copy1

0x8f90,	// (0x000627ff) set_opt_bg_pane_g6_copy1

0x438f,	// (0x0005dbfe) set_opt_bg_pane_g7_copy1

0x4399,	// (0x0005dc08) set_opt_bg_pane_g8_copy1

0x43a3,	// (0x0005dc12) set_opt_bg_pane_g9_copy1

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp_vc

0x43ad,	// (0x0005dc1c) setting_slider_pane_vc_t1

0x43bc,	// (0x0005dc2b) setting_slider_pane_vc_t2

0x43ce,	// (0x0005dc3d) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0006928d) setting_slider_pane_vc_t

0x43e0,	// (0x0005dc4f) slider_set_pane_vc

0x08dc,	// (0x0005a14b) volume_set_pane_vc_g1

0x08e5,	// (0x0005a154) volume_set_pane_vc_g2

0x08ee,	// (0x0005a15d) volume_set_pane_vc_g3

0x08f7,	// (0x0005a166) volume_set_pane_vc_g4

0x0900,	// (0x0005a16f) volume_set_pane_vc_g5

0x0909,	// (0x0005a178) volume_set_pane_vc_g6

0x0912,	// (0x0005a181) volume_set_pane_vc_g7

0x091b,	// (0x0005a18a) volume_set_pane_vc_g8

0x0924,	// (0x0005a193) volume_set_pane_vc_g9

0x092d,	// (0x0005a19c) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x00069294) volume_set_pane_vc_g

0x43ea,	// (0x0005dc59) volume_set_pane_vc

0x43f4,	// (0x0005dc63) button_value_adjust_pane_cp1_vc

0x43fe,	// (0x0005dc6d) list_highlight_pane_cp2_vc

0x4407,	// (0x0005dc76) list_set_pane_vc_ParamLimits

0x4407,	// (0x0005dc76) list_set_pane_vc

0x4477,	// (0x0005dce6) main_pane_set_vc_t1_ParamLimits

0x4477,	// (0x0005dce6) main_pane_set_vc_t1

0x448c,	// (0x0005dcfb) main_pane_set_vc_t2_ParamLimits

0x448c,	// (0x0005dcfb) main_pane_set_vc_t2

0x449e,	// (0x0005dd0d) main_pane_set_vc_t3_ParamLimits

0x449e,	// (0x0005dd0d) main_pane_set_vc_t3

0x44b2,	// (0x0005dd21) main_pane_set_vc_t4_ParamLimits

0x44b2,	// (0x0005dd21) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x000692a9) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x000692a9) main_pane_set_vc_t

0x44c6,	// (0x0005dd35) setting_code_pane_vc_ParamLimits

0x44c6,	// (0x0005dd35) setting_code_pane_vc

0x44d7,	// (0x0005dd46) setting_slider_graphic_pane_vc

0x44d7,	// (0x0005dd46) setting_slider_pane_vc

0x44d7,	// (0x0005dd46) setting_text_pane_vc

0x44d7,	// (0x0005dd46) setting_volume_pane_vc

0x44e1,	// (0x0005dd50) scroll_pane_cp121_vc

0x8edb,	// (0x0006274a) set_content_pane_vc

0x4521,	// (0x0005dd90) button_value_adjust_pane_g1

0x452a,	// (0x0005dd99) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00069301) button_value_adjust_pane_g

0x4533,	// (0x0005dda2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4533,	// (0x0005dda2) form_field_slider_wide_pane_vc_t1

0x4547,	// (0x0005ddb6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4547,	// (0x0005ddb6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00069306) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00069306) form_field_slider_wide_pane_vc_t

0x54e0,	// (0x0005ed4f) input_focus_pane_cp10_vc_ParamLimits

0x54e0,	// (0x0005ed4f) input_focus_pane_cp10_vc

0x4575,	// (0x0005dde4) slider_cont_pane_cp1_vc_ParamLimits

0x4575,	// (0x0005dde4) slider_cont_pane_cp1_vc

0x4585,	// (0x0005ddf4) slider_form_pane_g1_cp2

0x4359,	// (0x0005dbc8) slider_form_pane_g2_cp2

0x45b2,	// (0x0005de21) form_field_slider_pane_vc_t3

0x45c0,	// (0x0005de2f) form_field_slider_pane_vc_t4

0x45ce,	// (0x0005de3d) slider_form_pane_vc_ParamLimits

0x45ce,	// (0x0005de3d) slider_form_pane_vc

0x45db,	// (0x0005de4a) form_field_slider_pane_vc_t1_ParamLimits

0x45db,	// (0x0005de4a) form_field_slider_pane_vc_t1

0x4547,	// (0x0005ddb6) form_field_slider_pane_vc_t2_ParamLimits

0x4547,	// (0x0005ddb6) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00069318) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00069318) form_field_slider_pane_vc_t

0x54e0,	// (0x0005ed4f) input_focus_pane_cp9_vc_ParamLimits

0x54e0,	// (0x0005ed4f) input_focus_pane_cp9_vc

0x45f7,	// (0x0005de66) slider_cont_pane_vc_ParamLimits

0x45f7,	// (0x0005de66) slider_cont_pane_vc

0x4609,	// (0x0005de78) list_form_graphic_pane_cp_vc_ParamLimits

0x4609,	// (0x0005de78) list_form_graphic_pane_cp_vc

0x26b4,	// (0x0005bf23) form_field_popup_wide_pane_vc_g1

0x461e,	// (0x0005de8d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x461e,	// (0x0005de8d) form_field_popup_wide_pane_vc_t1

0x8f01,	// (0x00062770) input_focus_pane_cp8_vc_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_cp8_vc

0x4663,	// (0x0005ded2) list_form_wide_pane_vc_ParamLimits

0x4663,	// (0x0005ded2) list_form_wide_pane_vc

0x466f,	// (0x0005dede) list_form_graphic_pane_vc_g1

0x4677,	// (0x0005dee6) list_form_graphic_pane_vc_t1_ParamLimits

0x4677,	// (0x0005dee6) list_form_graphic_pane_vc_t1

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp5_vc_ParamLimits

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp5_vc

0x4693,	// (0x0005df02) list_form_graphic_pane_vc_ParamLimits

0x4693,	// (0x0005df02) list_form_graphic_pane_vc

0x26b4,	// (0x0005bf23) form_field_popup_pane_vc_g1

0x46a9,	// (0x0005df18) form_field_popup_pane_vc_t1_ParamLimits

0x46a9,	// (0x0005df18) form_field_popup_pane_vc_t1

0x8f01,	// (0x00062770) input_focus_pane_cp7_vc_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_cp7_vc

0x46c0,	// (0x0005df2f) list_form_pane_vc_ParamLimits

0x46c0,	// (0x0005df2f) list_form_pane_vc

0x46cc,	// (0x0005df3b) data_form_pane_vc_t1_ParamLimits

0x46cc,	// (0x0005df3b) data_form_pane_vc_t1

0x8f68,	// (0x000627d7) input_focus_pane_vc_g1

0x8f70,	// (0x000627df) input_focus_pane_vc_g2

0x8f78,	// (0x000627e7) input_focus_pane_vc_g3

0x8f80,	// (0x000627ef) input_focus_pane_vc_g4

0x8f88,	// (0x000627f7) input_focus_pane_vc_g5

0x8f90,	// (0x000627ff) input_focus_pane_vc_g6

0x8f98,	// (0x00062807) input_focus_pane_vc_g7

0x8fa0,	// (0x0006280f) input_focus_pane_vc_g8

0x8fa8,	// (0x00062817) input_focus_pane_vc_g9

0x5355,	// (0x0005ebc4) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00068f06) input_focus_pane_vc_g

0x26a8,	// (0x0005bf17) data_form_pane_vc_ParamLimits

0x26a8,	// (0x0005bf17) data_form_pane_vc

0x26b4,	// (0x0005bf23) form_field_data_pane_vc_g1

0x46e9,	// (0x0005df58) form_field_data_pane_vc_t1_ParamLimits

0x46e9,	// (0x0005df58) form_field_data_pane_vc_t1

0x8f01,	// (0x00062770) input_focus_pane_vc_ParamLimits

0x8f01,	// (0x00062770) input_focus_pane_vc

0x4703,	// (0x0005df72) button_value_adjust_pane_cp3_vc

0x470b,	// (0x0005df7a) button_value_adjust_pane_cp5_vc

0x4713,	// (0x0005df82) form_field_data_pane_vc_ParamLimits

0x4713,	// (0x0005df82) form_field_data_pane_vc

0x472e,	// (0x0005df9d) form_field_data_pane_vc_cp2

0x4736,	// (0x0005dfa5) form_field_data_wide_pane_vc_ParamLimits

0x4736,	// (0x0005dfa5) form_field_data_wide_pane_vc

0x4750,	// (0x0005dfbf) form_field_data_wide_pane_vc_cp2

0x4758,	// (0x0005dfc7) form_field_popup_pane_vc_ParamLimits

0x4758,	// (0x0005dfc7) form_field_popup_pane_vc

0x4773,	// (0x0005dfe2) form_field_popup_wide_pane_vc_ParamLimits

0x4773,	// (0x0005dfe2) form_field_popup_wide_pane_vc

0x478d,	// (0x0005dffc) form_field_slider_pane_vc_ParamLimits

0x478d,	// (0x0005dffc) form_field_slider_pane_vc

0x47a0,	// (0x0005e00f) form_field_slider_wide_pane_vc_ParamLimits

0x47a0,	// (0x0005e00f) form_field_slider_wide_pane_vc

0xc9bd,	// (0x0006622c) grid_touch_1_pane_ParamLimits

0xc9bd,	// (0x0006622c) grid_touch_1_pane

0xc9d1,	// (0x00066240) grid_touch_2_pane_ParamLimits

0xc9d1,	// (0x00066240) grid_touch_2_pane

0x4877,	// (0x0005e0e6) touch_pane_g1_ParamLimits

0x4877,	// (0x0005e0e6) touch_pane_g1

0x47d9,	// (0x0005e048) cell_app_pane_cp_wide_ParamLimits

0x47d9,	// (0x0005e048) cell_app_pane_cp_wide

0x47ea,	// (0x0005e059) grid_popup_fast_wide_pane_ParamLimits

0x47ea,	// (0x0005e059) grid_popup_fast_wide_pane

0x47fe,	// (0x0005e06d) scroll_pane_cp19_ParamLimits

0x47fe,	// (0x0005e06d) scroll_pane_cp19

0x535f,	// (0x0005ebce) bg_popup_window_pane_cp20

0x4812,	// (0x0005e081) listscroll_popup_fast_wide_pane

0xc9fd,	// (0x0006626c) grid_indicator_nsta_pane

0x481a,	// (0x0005e089) clock_nsta_pane_g1

0x4823,	// (0x0005e092) clock_nsta_pane_t1

0xca0b,	// (0x0006627a) cell_indicator_nsta_pane_ParamLimits

0xca0b,	// (0x0006627a) cell_indicator_nsta_pane

0x4877,	// (0x0005e0e6) cell_indicator_nsta_pane_g1

0xca28,	// (0x00066297) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00069329) cell_indicator_nsta_pane_g

0x489b,	// (0x0005e10a) clock_nsta_pane_cp

0x48a3,	// (0x0005e112) indicator_nsta_pane_cp

0x48ac,	// (0x0005e11b) nsta_clock_indic_pane_g1

0x53e9,	// (0x0005ec58) grid_indicator_pane

0x93b6,	// (0x00062c25) scroll_pane_cp29

0xf38f,	// (0x00068bfe) indicator_nsta_pane_cp2_ParamLimits

0xf38f,	// (0x00068bfe) indicator_nsta_pane_cp2

0x53ad,	// (0x0005ec1c) main_apps_wheel_pane

0x289b,	// (0x0005c10a) form_midp_field_text_pane_ParamLimits

0x29ea,	// (0x0005c259) scroll_bar_cp050_ParamLimits

0x4915,	// (0x0005e184) cell_indicator_pane_ParamLimits

0x4915,	// (0x0005e184) cell_indicator_pane

0x492d,	// (0x0005e19c) cell_indicator_pane_g1

0xca3e,	// (0x000662ad) grid_wheel_folder_pane_ParamLimits

0xca3e,	// (0x000662ad) grid_wheel_folder_pane

0xca4c,	// (0x000662bb) list_wheel_apps_pane_ParamLimits

0xca4c,	// (0x000662bb) list_wheel_apps_pane

0xca5a,	// (0x000662c9) main_apps_wheel_pane_g1_ParamLimits

0xca5a,	// (0x000662c9) main_apps_wheel_pane_g1

0xca6a,	// (0x000662d9) main_apps_wheel_pane_g2_ParamLimits

0xca6a,	// (0x000662d9) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00069345) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00069345) main_apps_wheel_pane_g

0xca7a,	// (0x000662e9) main_apps_wheel_pane_t1_ParamLimits

0xca7a,	// (0x000662e9) main_apps_wheel_pane_t1

0xca92,	// (0x00066301) list_wheel_apps_pane_g1

0xca9a,	// (0x00066309) list_wheel_apps_pane_g2

0xcaa2,	// (0x00066311) list_wheel_apps_pane_g3

0xcaaa,	// (0x00066319) list_wheel_apps_pane_g4

0xcab2,	// (0x00066321) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0006934a) list_wheel_apps_pane_g

0x1b3e,	// (0x0005b3ad) navi_icon_text_pane

0xb6e6,	// (0x00064f55) aid_fill_nsta

0xcacf,	// (0x0006633e) navi_icon_text_pane_g1

0xcadb,	// (0x0006634a) navi_icon_text_pane_t1

0xacbe,	// (0x0006452d) list_set_graphic_pane_t1_ParamLimits

0xacbe,	// (0x0006452d) list_set_graphic_pane_t1

0x313b,	// (0x0005c9aa) popup_midp_note_alarm_window_t6_ParamLimits

0x313b,	// (0x0005c9aa) popup_midp_note_alarm_window_t6

0x314d,	// (0x0005c9bc) popup_midp_note_alarm_window_t7_ParamLimits

0x314d,	// (0x0005c9bc) popup_midp_note_alarm_window_t7

0x315f,	// (0x0005c9ce) popup_midp_note_alarm_window_t8_ParamLimits

0x315f,	// (0x0005c9ce) popup_midp_note_alarm_window_t8

0x3171,	// (0x0005c9e0) popup_midp_note_alarm_window_t9_ParamLimits

0x3171,	// (0x0005c9e0) popup_midp_note_alarm_window_t9

0x3183,	// (0x0005c9f2) popup_midp_note_alarm_window_t10_ParamLimits

0x3183,	// (0x0005c9f2) popup_midp_note_alarm_window_t10

0x3195,	// (0x0005ca04) popup_midp_note_alarm_window_t11_ParamLimits

0x3195,	// (0x0005ca04) popup_midp_note_alarm_window_t11

0x31a7,	// (0x0005ca16) scroll_pane_cp17_ParamLimits

0x31a7,	// (0x0005ca16) scroll_pane_cp17

0x08dc,	// (0x0005a14b) volume_small_pane_cp_g1

0x0c61,	// (0x0005a4d0) volume_small_pane_cp_g2

0x0c6a,	// (0x0005a4d9) volume_small_pane_cp_g3

0x0c73,	// (0x0005a4e2) volume_small_pane_cp_g4

0x0c7c,	// (0x0005a4eb) volume_small_pane_cp_g5

0x0c85,	// (0x0005a4f4) volume_small_pane_cp_g6

0x0c8e,	// (0x0005a4fd) volume_small_pane_cp_g7

0x0c97,	// (0x0005a506) volume_small_pane_cp_g8

0x0ca0,	// (0x0005a50f) volume_small_pane_cp_g9

0x0ca9,	// (0x0005a518) volume_small_pane_cp_g10

0x1d93,	// (0x0005b602) midp_ticker_pane_g1_ParamLimits

0x1d9f,	// (0x0005b60e) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00068fd2) midp_ticker_pane_g_ParamLimits

0xadf1,	// (0x00064660) midp_ticker_pane_t1_ParamLimits

0xb70a,	// (0x00064f79) aid_fill_nsta_2

0x29d6,	// (0x0005c245) list_form2_midp_pane

0x3d0c,	// (0x0005d57b) midp_editing_number_pane_ParamLimits

0x3d1b,	// (0x0005d58a) midp_ticker_pane_ParamLimits

0x4a26,	// (0x0005e295) form2_midp_field_pane

0x4a4a,	// (0x0005e2b9) scroll_pane_cp51

0x4a6a,	// (0x0005e2d9) form2_midp_button_pane_ParamLimits

0x4a6a,	// (0x0005e2d9) form2_midp_button_pane

0x4a7c,	// (0x0005e2eb) form2_midp_content_pane_ParamLimits

0x4a7c,	// (0x0005e2eb) form2_midp_content_pane

0x4a96,	// (0x0005e305) form2_midp_field_choice_group_pane

0x4a9e,	// (0x0005e30d) form2_midp_field_pane_g1

0x4aa6,	// (0x0005e315) form2_midp_field_pane_g2

0x4aae,	// (0x0005e31d) form2_midp_field_pane_g3

0x4ab6,	// (0x0005e325) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0006936f) form2_midp_field_pane_g

0x4abe,	// (0x0005e32d) form2_midp_gauge_slider_pane

0x4ac6,	// (0x0005e335) form2_midp_gauge_wait_pane

0x4ace,	// (0x0005e33d) form2_midp_image_pane_ParamLimits

0x4ace,	// (0x0005e33d) form2_midp_image_pane

0x4ae9,	// (0x0005e358) form2_midp_label_pane_ParamLimits

0x4ae9,	// (0x0005e358) form2_midp_label_pane

0xcb09,	// (0x00066378) form2_midp_label_pane_cp_ParamLimits

0xcb09,	// (0x00066378) form2_midp_label_pane_cp

0x4b29,	// (0x0005e398) form2_midp_string_pane_ParamLimits

0x4b29,	// (0x0005e398) form2_midp_string_pane

0xe353,	// (0x00067bc2) form2_midp_text_pane_ParamLimits

0xe353,	// (0x00067bc2) form2_midp_text_pane

0x4b3b,	// (0x0005e3aa) form2_midp_time_pane

0x4b4b,	// (0x0005e3ba) input_focus_pane_cp51_ParamLimits

0x4b4b,	// (0x0005e3ba) input_focus_pane_cp51

0x4b63,	// (0x0005e3d2) form2_midp_label_pane_t1_ParamLimits

0x4b63,	// (0x0005e3d2) form2_midp_label_pane_t1

0xe376,	// (0x00067be5) form2_mdip_text_pane_t1_ParamLimits

0xe376,	// (0x00067be5) form2_mdip_text_pane_t1

0xe395,	// (0x00067c04) form2_midp_time_pane_t1

0x4bb1,	// (0x0005e420) form2_midp_gauge_slider_pane_t1

0xcb2a,	// (0x00066399) form2_midp_gauge_slider_pane_t2

0xcb3c,	// (0x000663ab) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00069378) form2_midp_gauge_slider_pane_t

0x4be7,	// (0x0005e456) form2_midp_slider_pane

0x4bf3,	// (0x0005e462) form2_midp_gauge_wait_pane_t1

0x4c01,	// (0x0005e470) form2_midp_wait_pane_ParamLimits

0x4c01,	// (0x0005e470) form2_midp_wait_pane

0x26fb,	// (0x0005bf6a) list_single_2graphic_pane_cp4_ParamLimits

0x26fb,	// (0x0005bf6a) list_single_2graphic_pane_cp4

0x4c2c,	// (0x0005e49b) list_single_midp_graphic_pane_cp_ParamLimits

0x4c2c,	// (0x0005e49b) list_single_midp_graphic_pane_cp

0x535f,	// (0x0005ebce) list_highlight_pane_cp20

0x4c50,	// (0x0005e4bf) list_single_2graphic_pane_g1_cp4

0x4197,	// (0x0005da06) list_single_2graphic_pane_g2_cp4

0x4c58,	// (0x0005e4c7) list_single_2graphic_pane_t1_cp4

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp21

0x4c67,	// (0x0005e4d6) list_single_midp_graphic_pane_g4_cp

0x4c76,	// (0x0005e4e5) list_single_midp_graphic_pane_t1_cp

0xcb4e,	// (0x000663bd) form2_mdip_string_pane_t1_ParamLimits

0xcb4e,	// (0x000663bd) form2_mdip_string_pane_t1

0x535f,	// (0x0005ebce) bg_wml_button_pane_cp2

0x5355,	// (0x0005ebc4) form2_midp_image_pane_g1

0xdd5b,	// (0x000675ca) list_double_large_graphic_pane_g5_ParamLimits

0xdd5b,	// (0x000675ca) list_double_large_graphic_pane_g5

0x200e,	// (0x0005b87d) midp_form_pane_ParamLimits

0x53ad,	// (0x0005ec1c) main_apps_wheel_pane_ParamLimits

0xb3fe,	// (0x00064c6d) popup_preview_window_ParamLimits

0xb3fe,	// (0x00064c6d) popup_preview_window

0x070d,	// (0x00059f7c) popup_touch_info_window_ParamLimits

0x070d,	// (0x00059f7c) popup_touch_info_window

0x072f,	// (0x00059f9e) popup_touch_menu_window_ParamLimits

0x072f,	// (0x00059f9e) popup_touch_menu_window

0x534b,	// (0x0005ebba) bg_popup_sub_pane_cp6

0x4d30,	// (0x0005e59f) list_touch_menu_pane

0x4d38,	// (0x0005e5a7) list_single_touch_menu_pane_ParamLimits

0x4d38,	// (0x0005e5a7) list_single_touch_menu_pane

0x4d50,	// (0x0005e5bf) list_single_touch_menu_pane_t1

0x53ad,	// (0x0005ec1c) bg_popup_sub_pane_cp7_ParamLimits

0x53ad,	// (0x0005ec1c) bg_popup_sub_pane_cp7

0x4d5e,	// (0x0005e5cd) heading_sub_pane

0x4d66,	// (0x0005e5d5) list_touch_info_pane_ParamLimits

0x4d66,	// (0x0005e5d5) list_touch_info_pane

0x4d75,	// (0x0005e5e4) list_single_touch_info_pane_ParamLimits

0x4d75,	// (0x0005e5e4) list_single_touch_info_pane

0x4d87,	// (0x0005e5f6) list_single_touch_info_pane_t1

0x4d95,	// (0x0005e604) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00069386) list_single_touch_info_pane_t

0x1cc2,	// (0x0005b531) bg_popup_heading_pane_cp

0x4da3,	// (0x0005e612) heading_sub_pane_t1

0x2642,	// (0x0005beb1) bg_popup_preview_window_pane_cp_ParamLimits

0x2642,	// (0x0005beb1) bg_popup_preview_window_pane_cp

0x4d5e,	// (0x0005e5cd) heading_preview_pane

0x4d66,	// (0x0005e5d5) list_preview_pane_ParamLimits

0x4d66,	// (0x0005e5d5) list_preview_pane

0x4db1,	// (0x0005e620) popup_preview_window_g1

0x4d75,	// (0x0005e5e4) list_single_preview_pane_ParamLimits

0x4d75,	// (0x0005e5e4) list_single_preview_pane

0x4db9,	// (0x0005e628) list_single_preview_pane_g1

0x4dc1,	// (0x0005e630) list_single_preview_pane_t1

0x4d87,	// (0x0005e5f6) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x0006938b) list_single_preview_pane_t

0x4dcf,	// (0x0005e63e) bg_popup_heading_pane_cp2_ParamLimits

0x4dcf,	// (0x0005e63e) bg_popup_heading_pane_cp2

0x4de5,	// (0x0005e654) heading_preview_pane_g1

0x4ded,	// (0x0005e65c) heading_preview_pane_t1_ParamLimits

0x4ded,	// (0x0005e65c) heading_preview_pane_t1

0x5400,	// (0x0005ec6f) soft_indicator_pane_t1_ParamLimits

0x8e74,	// (0x000626e3) scroll_pane_ParamLimits

0x92b2,	// (0x00062b21) scroll_sc2_left_pane

0x92bb,	// (0x00062b2a) scroll_sc2_right_pane

0x92da,	// (0x00062b49) scroll_bg_pane_g1_ParamLimits

0x92ef,	// (0x00062b5e) scroll_bg_pane_g2_ParamLimits

0x9307,	// (0x00062b76) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00068f5d) scroll_bg_pane_g_ParamLimits

0x92da,	// (0x00062b49) scroll_handle_pane_g1_ParamLimits

0x9329,	// (0x00062b98) scroll_handle_pane_g2_ParamLimits

0x9307,	// (0x00062b76) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00068f64) scroll_handle_pane_g_ParamLimits

0x016d,	// (0x000599dc) popup_choice_list_window_ParamLimits

0x016d,	// (0x000599dc) popup_choice_list_window

0x2484,	// (0x0005bcf3) choice_list_pane

0x2512,	// (0x0005bd81) cell_toolbar_pane_t1

0x253a,	// (0x0005bda9) toolbar_button_pane_ParamLimits

0x382b,	// (0x0005d09a) ai_gene_pane_1_t2_ParamLimits

0x382b,	// (0x0005d09a) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00069187) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00069187) ai_gene_pane_1_t

0x4e0a,	// (0x0005e679) scroll_sc2_left_pane_g1

0x4e0a,	// (0x0005e679) scroll_sc2_right_pane_g1

0x200e,	// (0x0005b87d) bg_popup_sub_pane_cp10

0x4e14,	// (0x0005e683) list_choice_list_pane

0x4e2d,	// (0x0005e69c) list_single_choice_list_pane_ParamLimits

0x4e2d,	// (0x0005e69c) list_single_choice_list_pane

0x4e45,	// (0x0005e6b4) list_single_choice_list_pane_g1

0x9097,	// (0x00062906) list_single_choice_list_pane_t1_ParamLimits

0x9097,	// (0x00062906) list_single_choice_list_pane_t1

0x4e4d,	// (0x0005e6bc) choice_list_pane_g1

0x4e55,	// (0x0005e6c4) choice_list_pane_t1

0x534b,	// (0x0005ebba) input_focus_pane_cp11

0x9215,	// (0x00062a84) title_pane_stacon_g2_ParamLimits

0x9215,	// (0x00062a84) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x00068f43) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00068f43) title_pane_stacon_g

0x1cc2,	// (0x0005b531) cursor_press_pane

0xb07b,	// (0x000648ea) popup_fep_hwr_window_ParamLimits

0xb07b,	// (0x000648ea) popup_fep_hwr_window

0x02b1,	// (0x00059b20) popup_fep_vkb_window_ParamLimits

0x02b1,	// (0x00059b20) popup_fep_vkb_window

0x4e63,	// (0x0005e6d2) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x000693b4) fep_vkb_side_pane_g_ParamLimits

0x0ceb,	// (0x0005a55a) fep_hwr_candidate_pane_ParamLimits

0x0ceb,	// (0x0005a55a) fep_hwr_candidate_pane

0x0d15,	// (0x0005a584) fep_hwr_side_pane_ParamLimits

0x0d15,	// (0x0005a584) fep_hwr_side_pane

0x0d37,	// (0x0005a5a6) fep_hwr_top_pane_ParamLimits

0x0d37,	// (0x0005a5a6) fep_hwr_top_pane

0x0d4f,	// (0x0005a5be) fep_hwr_write_pane_ParamLimits

0x0d4f,	// (0x0005a5be) fep_hwr_write_pane

0xfb45,	// (0x000693b4) fep_vkb_side_pane_g

0x4e6b,	// (0x0005e6da) fep_hwr_top_pane_g1

0x4e7d,	// (0x0005e6ec) fep_hwr_top_pane_g2

0x0d89,	// (0x0005a5f8) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00069390) fep_hwr_top_pane_g

0x0d9e,	// (0x0005a60d) fep_hwr_top_text_pane

0xde71,	// (0x000676e0) fep_hwr_top_text_pane_g1

0x4eb3,	// (0x0005e722) fep_hwr_top_text_pane_t1

0x0ea8,	// (0x0005a717) fep_hwr_candidate_pane_g1

0x50fe,	// (0x0005e96d) fep_vkb_keypad_pane_g3_ParamLimits

0x50fe,	// (0x0005e96d) fep_vkb_keypad_pane_g3

0x512a,	// (0x0005e999) fep_vkb_keypad_pane_g4_ParamLimits

0x512a,	// (0x0005e999) fep_vkb_keypad_pane_g4

0x51a1,	// (0x0005ea10) fep_vkb_bottom_pane_g2_ParamLimits

0x51a1,	// (0x0005ea10) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x000693bb) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x000693bb) fep_vkb_bottom_pane_g

0x4e0a,	// (0x0005e679) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x000693c5) cell_vkb_side_pane_g

0x522c,	// (0x0005ea9b) cell_vkb_side_pane_t1

0x523a,	// (0x0005eaa9) cell_vkb_side_pane_t1_copy1

0x4e0a,	// (0x0005e679) bg_fep_vkb_candidate_pane_g2

0x566c,	// (0x0005eedb) cell_vkb_candidate_pane_ParamLimits

0x4ec1,	// (0x0005e730) aid_size_cell_vkb_ParamLimits

0x4ec1,	// (0x0005e730) aid_size_cell_vkb

0x566c,	// (0x0005eedb) cell_vkb_candidate_pane

0x0ecf,	// (0x0005a73e) bg_popup_fep_shadow_pane_g1

0xcc03,	// (0x00066472) fep_vkb_bottom_pane_ParamLimits

0xcc03,	// (0x00066472) fep_vkb_bottom_pane

0x4f90,	// (0x0005e7ff) fep_vkb_candidate_pane_ParamLimits

0x4f90,	// (0x0005e7ff) fep_vkb_candidate_pane

0xcc2f,	// (0x0006649e) fep_vkb_keypad_pane_ParamLimits

0xcc2f,	// (0x0006649e) fep_vkb_keypad_pane

0xcc56,	// (0x000664c5) fep_vkb_side_pane_ParamLimits

0xcc56,	// (0x000664c5) fep_vkb_side_pane

0xcc92,	// (0x00066501) fep_vkb_top_pane_ParamLimits

0xcc92,	// (0x00066501) fep_vkb_top_pane

0x5057,	// (0x0005e8c6) fep_vkb_top_pane_g1_ParamLimits

0x5057,	// (0x0005e8c6) fep_vkb_top_pane_g1

0x5066,	// (0x0005e8d5) fep_vkb_top_pane_g2_ParamLimits

0x5066,	// (0x0005e8d5) fep_vkb_top_pane_g2

0x5075,	// (0x0005e8e4) fep_vkb_top_pane_g3_ParamLimits

0x5075,	// (0x0005e8e4) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x000693ab) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x000693ab) fep_vkb_top_pane_g

0x5093,	// (0x0005e902) fep_vkb_top_text_pane_ParamLimits

0x5093,	// (0x0005e902) fep_vkb_top_text_pane

0xccce,	// (0x0006653d) fep_vkb_side_pane_g1_ParamLimits

0xccce,	// (0x0006653d) fep_vkb_side_pane_g1

0x50ed,	// (0x0005e95c) grid_vkb_side_pane_ParamLimits

0x50ed,	// (0x0005e95c) grid_vkb_side_pane

0x0ed7,	// (0x0005a746) bg_popup_fep_shadow_pane_g2

0x0ee0,	// (0x0005a74f) bg_popup_fep_shadow_pane_g3

0x0ee8,	// (0x0005a757) bg_popup_fep_shadow_pane_g4

0x0ef1,	// (0x0005a760) bg_popup_fep_shadow_pane_g5

0x0efb,	// (0x0005a76a) bg_popup_fep_shadow_pane_g6

0x0f03,	// (0x0005a772) bg_popup_fep_shadow_pane_g7

0x8f80,	// (0x000627ef) bg_popup_fep_shadow_pane_g8

0x514c,	// (0x0005e9bb) grid_vkb_keypad_number_pane_ParamLimits

0x514c,	// (0x0005e9bb) grid_vkb_keypad_number_pane

0x5160,	// (0x0005e9cf) grid_vkb_keypad_pane_ParamLimits

0x5160,	// (0x0005e9cf) grid_vkb_keypad_pane

0x5186,	// (0x0005e9f5) fep_vkb_bottom_pane_g1_ParamLimits

0x5186,	// (0x0005e9f5) fep_vkb_bottom_pane_g1

0x51af,	// (0x0005ea1e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x51af,	// (0x0005ea1e) grid_vkb_keypad_bottom_left_pane

0x51c4,	// (0x0005ea33) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x51c4,	// (0x0005ea33) grid_vkb_keypad_bottom_right_pane

0x51d9,	// (0x0005ea48) fep_vkb_top_text_pane_g1

0xcd15,	// (0x00066584) fep_vkb_top_text_pane_t1

0xcd27,	// (0x00066596) cell_vkb_side_pane_ParamLimits

0xcd27,	// (0x00066596) cell_vkb_side_pane

0x4e0a,	// (0x0005e679) cell_vkb_side_pane_g1

0x5248,	// (0x0005eab7) cell_vkb_keypad_pane_ParamLimits

0x5248,	// (0x0005eab7) cell_vkb_keypad_pane

0x52d5,	// (0x0005eb44) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x000693d8) bg_popup_fep_shadow_pane_g

0x0f15,	// (0x0005a784) cell_hwr_side_pane_g1

0x0f15,	// (0x0005a784) cell_hwr_side_pane_g2

0x52df,	// (0x0005eb4e) cell_vkb_keypad_pane_t1

0xcd3d,	// (0x000665ac) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd3d,	// (0x000665ac) cell_vkb_keypad_bottom_left_pane

0xcd52,	// (0x000665c1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd52,	// (0x000665c1) cell_vkb_keypad_bottom_right_pane

0x4e0a,	// (0x0005e679) cell_vkb_keypad_bottom_left_pane_g1

0x4e0a,	// (0x0005e679) cell_vkb_keypad_bottom_right_pane_g1

0x5631,	// (0x0005eea0) cell_vkb_keypad_number_pane_ParamLimits

0x5631,	// (0x0005eea0) cell_vkb_keypad_number_pane

0x5650,	// (0x0005eebf) cell_vkb_keypad_number_pane_g1

0x565a,	// (0x0005eec9) cell_vkb_keypad_number_pane_g2

0x5663,	// (0x0005eed2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x000693ca) cell_vkb_keypad_number_pane_g

0x52df,	// (0x0005eb4e) cell_vkb_keypad_number_pane_t1

0x568d,	// (0x0005eefc) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x000693eb) cell_hwr_side_pane_g

0x56a6,	// (0x0005ef15) cell_hwr_side_pane_t1

0x0f1f,	// (0x0005a78e) cell_hwr_side_pane_t1_copy1

0x0f2d,	// (0x0005a79c) cell_hwr_candidate_pane_g1

0x0f5c,	// (0x0005a7cb) cell_hwr_candidate_pane_t1

0x4e0a,	// (0x0005e679) cell_vkb_candidate_pane_g2

0x56ea,	// (0x0005ef59) cell_vkb_candidate_pane_t1

0x0cb2,	// (0x0005a521) bg_popup_fep_shadow_pane_ParamLimits

0x0cb2,	// (0x0005a521) bg_popup_fep_shadow_pane

0x0d69,	// (0x0005a5d8) bg_fep_hwr_top_pane_g4

0x4e8f,	// (0x0005e6fe) bg_hwr_side_pane_g1_ParamLimits

0x4e8f,	// (0x0005e6fe) bg_hwr_side_pane_g1

0xba9d,	// (0x0006530c) cell_hwr_side_pane_ParamLimits

0xba9d,	// (0x0006530c) cell_hwr_side_pane

0x0e19,	// (0x0005a688) fep_hwr_write_pane_g1_ParamLimits

0x0e19,	// (0x0005a688) fep_hwr_write_pane_g1

0x0e26,	// (0x0005a695) fep_hwr_write_pane_g2_ParamLimits

0x0e26,	// (0x0005a695) fep_hwr_write_pane_g2

0x0e33,	// (0x0005a6a2) fep_hwr_write_pane_g3_ParamLimits

0x0e33,	// (0x0005a6a2) fep_hwr_write_pane_g3

0xbabd,	// (0x0006532c) fep_hwr_write_pane_g4_ParamLimits

0xbabd,	// (0x0006532c) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00069397) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00069397) fep_hwr_write_pane_g

0x0d69,	// (0x0005a5d8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d69,	// (0x0005a5d8) bg_fep_hwr_candidate_pane_g2

0x0e56,	// (0x0005a6c5) cell_hwr_candidate_pane_ParamLimits

0x0e56,	// (0x0005a6c5) cell_hwr_candidate_pane

0x0ea8,	// (0x0005a717) fep_hwr_candidate_pane_g1_ParamLimits

0x4eef,	// (0x0005e75e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4eef,	// (0x0005e75e) bg_popup_fep_shadow_pane_cp2

0x5085,	// (0x0005e8f4) fep_vkb_top_pane_g4_ParamLimits

0x5085,	// (0x0005e8f4) fep_vkb_top_pane_g4

0x50cb,	// (0x0005e93a) fep_vkb_side_pane_g2_ParamLimits

0x50cb,	// (0x0005e93a) fep_vkb_side_pane_g2

0xa723,	// (0x00063f92) list_setting_pane_t4_ParamLimits

0xa723,	// (0x00063f92) list_setting_pane_t4

0xa7bf,	// (0x0006402e) list_setting_number_pane_t5_ParamLimits

0xa7bf,	// (0x0006402e) list_setting_number_pane_t5

0xab28,	// (0x00064397) list_double_heading_pane_cp2_ParamLimits

0xab28,	// (0x00064397) list_double_heading_pane_cp2

0x8f1b,	// (0x0006278a) list_double_heading_pane_g1_cp2_ParamLimits

0x8f1b,	// (0x0006278a) list_double_heading_pane_g1_cp2

0x8f27,	// (0x00062796) list_double_heading_pane_g2_cp2_ParamLimits

0x8f27,	// (0x00062796) list_double_heading_pane_g2_cp2

0x56f8,	// (0x0005ef67) list_double_heading_pane_t1_cp2_ParamLimits

0x56f8,	// (0x0005ef67) list_double_heading_pane_t1_cp2

0x570e,	// (0x0005ef7d) list_double_heading_pane_t2_cp2_ParamLimits

0x570e,	// (0x0005ef7d) list_double_heading_pane_t2_cp2

0x5343,	// (0x0005ebb2) aid_value_unit2

0xef47,	// (0x000687b6) popup_preview_fixed_window

0x54ee,	// (0x0005ed5d) bg_popup_preview_window_pane_cp02

0x5720,	// (0x0005ef8f) list_preview_fixed_pane

0x5766,	// (0x0005efd5) list_empty_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_empty_pane_fp

0x5766,	// (0x0005efd5) list_single_cale_day_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_single_cale_day_pane_fp

0x5766,	// (0x0005efd5) list_single_graphic_heading_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_single_graphic_heading_pane_fp

0x5766,	// (0x0005efd5) list_single_graphic_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_single_graphic_pane_fp

0x5766,	// (0x0005efd5) list_single_heading_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_single_heading_pane_fp

0x5766,	// (0x0005efd5) list_single_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_single_pane_fp

0x577f,	// (0x0005efee) list_single_pane_fp_g1_ParamLimits

0x577f,	// (0x0005efee) list_single_pane_fp_g1

0xe3a8,	// (0x00067c17) list_single_pane_fp_g2_ParamLimits

0xe3a8,	// (0x00067c17) list_single_pane_fp_g2

0x3616,	// (0x0005ce85) list_single_pane_fp_g3_ParamLimits

0x3616,	// (0x0005ce85) list_single_pane_fp_g3

0x578b,	// (0x0005effa) list_single_pane_fp_g4_ParamLimits

0x578b,	// (0x0005effa) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x000693fe) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x000693fe) list_single_pane_fp_g

0xe3b4,	// (0x00067c23) list_single_pane_fp_t1_ParamLimits

0xe3b4,	// (0x00067c23) list_single_pane_fp_t1

0xe3cb,	// (0x00067c3a) list_single_graphic_pane_fp_g1_ParamLimits

0xe3cb,	// (0x00067c3a) list_single_graphic_pane_fp_g1

0x577f,	// (0x0005efee) list_single_graphic_pane_fp_g2_ParamLimits

0x577f,	// (0x0005efee) list_single_graphic_pane_fp_g2

0xe3a8,	// (0x00067c17) list_single_graphic_pane_fp_g3_ParamLimits

0xe3a8,	// (0x00067c17) list_single_graphic_pane_fp_g3

0x3616,	// (0x0005ce85) list_single_graphic_pane_fp_g4_ParamLimits

0x3616,	// (0x0005ce85) list_single_graphic_pane_fp_g4

0x578b,	// (0x0005effa) list_single_graphic_pane_fp_g5_ParamLimits

0x578b,	// (0x0005effa) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00069407) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00069407) list_single_graphic_pane_fp_g

0xe3d7,	// (0x00067c46) list_single_graphic_pane_fp_t1_ParamLimits

0xe3d7,	// (0x00067c46) list_single_graphic_pane_fp_t1

0xe3cb,	// (0x00067c3a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe3cb,	// (0x00067c3a) list_single_graphic_heading_pane_fp_g1

0x577f,	// (0x0005efee) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x577f,	// (0x0005efee) list_single_graphic_heading_pane_fp_g2

0xe3a8,	// (0x00067c17) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe3a8,	// (0x00067c17) list_single_graphic_heading_pane_fp_g3

0x3616,	// (0x0005ce85) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3616,	// (0x0005ce85) list_single_graphic_heading_pane_fp_g4

0x578b,	// (0x0005effa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x578b,	// (0x0005effa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00069407) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00069407) list_single_graphic_heading_pane_fp_g

0xe3ed,	// (0x00067c5c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe3ed,	// (0x00067c5c) list_single_graphic_heading_pane_fp_t1

0xe403,	// (0x00067c72) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe403,	// (0x00067c72) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00069412) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00069412) list_single_graphic_heading_pane_fp_t

0xe415,	// (0x00067c84) list_single_cale_day_pane_fp_g1_ParamLimits

0xe415,	// (0x00067c84) list_single_cale_day_pane_fp_g1

0x5797,	// (0x0005f006) list_single_cale_day_pane_fp_g2_ParamLimits

0x5797,	// (0x0005f006) list_single_cale_day_pane_fp_g2

0x362a,	// (0x0005ce99) list_single_cale_day_pane_fp_g3_ParamLimits

0x362a,	// (0x0005ce99) list_single_cale_day_pane_fp_g3

0x3652,	// (0x0005cec1) list_single_cale_day_pane_fp_g4_ParamLimits

0x3652,	// (0x0005cec1) list_single_cale_day_pane_fp_g4

0x3676,	// (0x0005cee5) list_single_cale_day_pane_fp_g5_ParamLimits

0x3676,	// (0x0005cee5) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00069417) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00069417) list_single_cale_day_pane_fp_g

0xe44d,	// (0x00067cbc) list_single_cale_day_pane_fp_t1_ParamLimits

0xe44d,	// (0x00067cbc) list_single_cale_day_pane_fp_t1

0xe473,	// (0x00067ce2) list_single_cale_day_pane_fp_t2_ParamLimits

0xe473,	// (0x00067ce2) list_single_cale_day_pane_fp_t2

0xe48c,	// (0x00067cfb) list_single_cale_day_pane_fp_t3_ParamLimits

0xe48c,	// (0x00067cfb) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00069422) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00069422) list_single_cale_day_pane_fp_t

0x577f,	// (0x0005efee) list_empty_pane_fp_g1_ParamLimits

0x577f,	// (0x0005efee) list_empty_pane_fp_g1

0xe4a5,	// (0x00067d14) list_empty_pane_fp_t1

0xe4b3,	// (0x00067d22) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00069429) list_empty_pane_fp_t

0x577f,	// (0x0005efee) list_single_heading_pane_fp_g1_ParamLimits

0x577f,	// (0x0005efee) list_single_heading_pane_fp_g1

0xe3a8,	// (0x00067c17) list_single_heading_pane_fp_g2_ParamLimits

0xe3a8,	// (0x00067c17) list_single_heading_pane_fp_g2

0x3616,	// (0x0005ce85) list_single_heading_pane_fp_g3_ParamLimits

0x3616,	// (0x0005ce85) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x0006942e) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x0006942e) list_single_heading_pane_fp_g

0xe4c1,	// (0x00067d30) list_single_heading_pane_fp_t1_ParamLimits

0xe4c1,	// (0x00067d30) list_single_heading_pane_fp_t1

0xe4d3,	// (0x00067d42) list_single_heading_pane_fp_t2_ParamLimits

0xe4d3,	// (0x00067d42) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00069435) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00069435) list_single_heading_pane_fp_t

0x90ac,	// (0x0006291b) aid_size_cell_fast

0x54c3,	// (0x0005ed32) soft_indicator_pane_cp1_t1

0x90e9,	// (0x00062958) cell_app_pane_cp2_ParamLimits

0x90e9,	// (0x00062958) cell_app_pane_cp2

0x0cd4,	// (0x0005a543) fep_hwr_candidate_drop_down_list_pane

0x0ec2,	// (0x0005a731) fep_hwr_candidate_pane_g3_ParamLimits

0x0ec2,	// (0x0005a731) fep_hwr_candidate_pane_g3

0xcbe4,	// (0x00066453) fep_hwr_candidate_pane_g4_ParamLimits

0xcbe4,	// (0x00066453) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000693a4) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000693a4) fep_hwr_candidate_pane_g

0x4f7f,	// (0x0005e7ee) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4f7f,	// (0x0005e7ee) fep_vkb_candidate_drop_down_list_pane

0x5695,	// (0x0005ef04) fep_vkb_candidate_pane_g3

0x569d,	// (0x0005ef0c) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x000693d1) fep_vkb_candidate_pane_g

0x0f2d,	// (0x0005a79c) cell_hwr_candidate_pane_g1_ParamLimits

0x0f3b,	// (0x0005a7aa) cell_hwr_candidate_pane_g3_ParamLimits

0x0f3b,	// (0x0005a7aa) cell_hwr_candidate_pane_g3

0x6f52,	// (0x000607c1) cell_hwr_candidate_pane_g4_ParamLimits

0x6f52,	// (0x000607c1) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x000693f0) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x000693f0) cell_hwr_candidate_pane_g

0x56b4,	// (0x0005ef23) cell_vkb_candidate_pane_g3_ParamLimits

0x56b4,	// (0x0005ef23) cell_vkb_candidate_pane_g3

0x56cf,	// (0x0005ef3e) cell_vkb_candidate_pane_g4_ParamLimits

0x56cf,	// (0x0005ef3e) cell_vkb_candidate_pane_g4

0x57a3,	// (0x0005f012) cell_app_pane_cp2_g1_ParamLimits

0x57a3,	// (0x0005f012) cell_app_pane_cp2_g1

0x57c1,	// (0x0005f030) cell_app_pane_cp2_g2_ParamLimits

0x57c1,	// (0x0005f030) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x0006943a) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x0006943a) cell_app_pane_cp2_g

0x57cd,	// (0x0005f03c) cell_app_pane_cp2_t1_ParamLimits

0x57cd,	// (0x0005f03c) cell_app_pane_cp2_t1

0x8f01,	// (0x00062770) grid_highlight_pane_cp1_ParamLimits

0x8f01,	// (0x00062770) grid_highlight_pane_cp1

0x0f7a,	// (0x0005a7e9) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f7a,	// (0x0005a7e9) cell_hwr_candidate_pane_cp1

0x0f2d,	// (0x0005a79c) fep_hwr_candidate_drop_down_list_pane_g1

0x0f9e,	// (0x0005a80d) fep_hwr_candidate_drop_down_list_pane_g2

0x0fab,	// (0x0005a81a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0006943f) fep_hwr_candidate_drop_down_list_pane_g

0x0fb8,	// (0x0005a827) fep_hwr_candidate_drop_down_list_scroll_pane

0x0fc1,	// (0x0005a830) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0fc1,	// (0x0005a830) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0fce,	// (0x0005a83d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0fce,	// (0x0005a83d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0fdb,	// (0x0005a84a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0fdb,	// (0x0005a84a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0fe8,	// (0x0005a857) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0fe8,	// (0x0005a857) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1003,	// (0x0005a872) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1003,	// (0x0005a872) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x101e,	// (0x0005a88d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x101e,	// (0x0005a88d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1039,	// (0x0005a8a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1039,	// (0x0005a8a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1054,	// (0x0005a8c3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1054,	// (0x0005a8c3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00069446) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00069446) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x57df,	// (0x0005f04e) cell_vkb_candidate_pane_cp1_ParamLimits

0x57df,	// (0x0005f04e) cell_vkb_candidate_pane_cp1

0x5085,	// (0x0005e8f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5085,	// (0x0005e8f4) fep_vkb_candidate_drop_down_list_pane_g1

0x5805,	// (0x0005f074) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5805,	// (0x0005f074) fep_vkb_candidate_drop_down_list_pane_g2

0x5812,	// (0x0005f081) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5812,	// (0x0005f081) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00069457) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x00069457) fep_vkb_candidate_drop_down_list_pane_g

0x581f,	// (0x0005f08e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x581f,	// (0x0005f08e) fep_vkb_candidate_drop_down_list_scroll_pane

0x582c,	// (0x0005f09b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x582c,	// (0x0005f09b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5839,	// (0x0005f0a8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5839,	// (0x0005f0a8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5845,	// (0x0005f0b4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5845,	// (0x0005f0b4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5851,	// (0x0005f0c0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5851,	// (0x0005f0c0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5872,	// (0x0005f0e1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5872,	// (0x0005f0e1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5893,	// (0x0005f102) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5893,	// (0x0005f102) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x58b4,	// (0x0005f123) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x58b4,	// (0x0005f123) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x58d5,	// (0x0005f144) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x58d5,	// (0x0005f144) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0006945e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0006945e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9f9f,	// (0x0006380e) title_pane_g1_ParamLimits

0x9fb2,	// (0x00063821) title_pane_g2_ParamLimits

0xf554,	// (0x00068dc3) title_pane_g_ParamLimits

0xde61,	// (0x000676d0) aid_call2_pane

0xde69,	// (0x000676d8) aid_call_pane

0xde71,	// (0x000676e0) popup_clock_analogue_window_g1

0xde71,	// (0x000676e0) popup_clock_analogue_window_g2

0xf28e,	// (0x00068afd) popup_clock_analogue_window_g3

0xf297,	// (0x00068b06) popup_clock_analogue_window_g4

0x5355,	// (0x0005ebc4) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00068f72) popup_clock_analogue_window_g

0xf29f,	// (0x00068b0e) popup_clock_analogue_window_t1

0xf2ad,	// (0x00068b1c) clock_digital_number_pane_ParamLimits

0xf2ad,	// (0x00068b1c) clock_digital_number_pane

0xf2b9,	// (0x00068b28) clock_digital_number_pane_cp02_ParamLimits

0xf2b9,	// (0x00068b28) clock_digital_number_pane_cp02

0xf2c5,	// (0x00068b34) clock_digital_number_pane_cp03_ParamLimits

0xf2c5,	// (0x00068b34) clock_digital_number_pane_cp03

0xf2d1,	// (0x00068b40) clock_digital_number_pane_cp04_ParamLimits

0xf2d1,	// (0x00068b40) clock_digital_number_pane_cp04

0xf2dd,	// (0x00068b4c) clock_digital_separator_pane_ParamLimits

0xf2dd,	// (0x00068b4c) clock_digital_separator_pane

0xf2e9,	// (0x00068b58) popup_clock_digital_window_t1_ParamLimits

0xf2e9,	// (0x00068b58) popup_clock_digital_window_t1

0x5355,	// (0x0005ebc4) clock_digital_number_pane_g1

0x5355,	// (0x0005ebc4) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00068f7d) clock_digital_number_pane_g

0x5355,	// (0x0005ebc4) clock_digital_separator_pane_g1

0x5355,	// (0x0005ebc4) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00068f7d) clock_digital_separator_pane_g

0xb6e6,	// (0x00064f55) aid_fill_nsta_ParamLimits

0xb81c,	// (0x0006508b) indicator_nsta_pane_ParamLimits

0x2311,	// (0x0005bb80) popup_clock_analogue_window

0x2311,	// (0x0005bb80) popup_clock_digital_window

0xc9fd,	// (0x0006626c) grid_indicator_nsta_pane_ParamLimits

0x4831,	// (0x0005e0a0) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00069324) clock_nsta_pane_t

0xf25b,	// (0x00068aca) aid_size_max_handle

0xaa9b,	// (0x0006430a) aid_size_min_handle

0x1cc2,	// (0x0005b531) editor_scroll_pane

0x58f0,	// (0x0005f15f) ex_editor_pane

0x9072,	// (0x000628e1) scroll_pane_cp13

0x8ea0,	// (0x0006270f) scroll_pane_cp14

0xdea0,	// (0x0006770f) scroll_pane_cp36

0xab3b,	// (0x000643aa) list_single_graphic_hl_pane_cp2_ParamLimits

0xab3b,	// (0x000643aa) list_single_graphic_hl_pane_cp2

0xc8a9,	// (0x00066118) list_single_graphic_hl_pane_ParamLimits

0xc8a9,	// (0x00066118) list_single_graphic_hl_pane

0xe4e9,	// (0x00067d58) aid_size_min_hl_cp1

0x58f8,	// (0x0005f167) list_highlight_pane_cp34_ParamLimits

0x58f8,	// (0x0005f167) list_highlight_pane_cp34

0x5909,	// (0x0005f178) list_single_graphic_hl_pane_g1_ParamLimits

0x5909,	// (0x0005f178) list_single_graphic_hl_pane_g1

0xbad2,	// (0x00065341) list_single_graphic_hl_pane_g2_ParamLimits

0xbad2,	// (0x00065341) list_single_graphic_hl_pane_g2

0xbad2,	// (0x00065341) list_single_graphic_hl_pane_g3_ParamLimits

0xbad2,	// (0x00065341) list_single_graphic_hl_pane_g3

0xcd6d,	// (0x000665dc) list_single_graphic_hl_pane_g4_ParamLimits

0xcd6d,	// (0x000665dc) list_single_graphic_hl_pane_g4

0x5946,	// (0x0005f1b5) list_single_graphic_hl_pane_g5_ParamLimits

0x5946,	// (0x0005f1b5) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x0006946f) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x0006946f) list_single_graphic_hl_pane_g

0xbade,	// (0x0006534d) list_single_graphic_hl_pane_t1_ParamLimits

0xbade,	// (0x0006534d) list_single_graphic_hl_pane_t1

0x5916,	// (0x0005f185) aid_size_min_hl_cp2

0x591f,	// (0x0005f18e) list_highlight_pane_cp34_cp2_ParamLimits

0x591f,	// (0x0005f18e) list_highlight_pane_cp34_cp2

0x5909,	// (0x0005f178) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5909,	// (0x0005f178) list_single_graphic_hl_pane_g1_cp2

0x592c,	// (0x0005f19b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x592c,	// (0x0005f19b) list_single_graphic_hl_pane_g2_cp2

0xcd79,	// (0x000665e8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcd79,	// (0x000665e8) list_single_graphic_hl_pane_g3_cp2

0xcd6d,	// (0x000665dc) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcd6d,	// (0x000665dc) list_single_graphic_hl_pane_g4_cp2

0x5946,	// (0x0005f1b5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5946,	// (0x0005f1b5) list_single_graphic_hl_pane_g5_cp2

0xae5b,	// (0x000646ca) control_pane_g4_ParamLimits

0xae5b,	// (0x000646ca) control_pane_g4

0x200e,	// (0x0005b87d) bg_popup_sub_pane_cp10_ParamLimits

0x4e14,	// (0x0005e683) list_choice_list_pane_ParamLimits

0x4e23,	// (0x0005e692) scroll_pane_cp23

0x54ee,	// (0x0005ed5d) bg_popup_preview_window_pane_cp02_ParamLimits

0x5720,	// (0x0005ef8f) list_preview_fixed_pane_ParamLimits

0x5736,	// (0x0005efa5) list_preview_fixed_pane_cp_ParamLimits

0x5736,	// (0x0005efa5) list_preview_fixed_pane_cp

0x5742,	// (0x0005efb1) popup_preview_fixed_window_g1_ParamLimits

0x5742,	// (0x0005efb1) popup_preview_fixed_window_g1

0x574e,	// (0x0005efbd) popup_preview_fixed_window_g2_ParamLimits

0x574e,	// (0x0005efbd) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x000693f7) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x000693f7) popup_preview_fixed_window_g

0xf1cd,	// (0x00068a3c) aid_navi_side_left_pane_ParamLimits

0xf1e2,	// (0x00068a51) aid_navi_side_right_pane_ParamLimits

0xf1fa,	// (0x00068a69) navi_icon_pane_stacon_ParamLimits

0xf20e,	// (0x00068a7d) navi_navi_pane_stacon_ParamLimits

0xf1fa,	// (0x00068a69) navi_text_pane_stacon_ParamLimits

0xee38,	// (0x000686a7) main_text_info_pane

0x5970,	// (0x0005f1df) listscroll_text_info_pane

0x5978,	// (0x0005f1e7) list_text_info_pane_ParamLimits

0x5978,	// (0x0005f1e7) list_text_info_pane

0x5987,	// (0x0005f1f6) scroll_pane_cp24_ParamLimits

0x5987,	// (0x0005f1f6) scroll_pane_cp24

0xcd87,	// (0x000665f6) list_text_info_pane_t1_ParamLimits

0xcd87,	// (0x000665f6) list_text_info_pane_t1

0xafdf,	// (0x0006484e) popup_fast_swap2_window_ParamLimits

0xafdf,	// (0x0006484e) popup_fast_swap2_window

0x59ca,	// (0x0005f239) aid_size_cell_fast2

0x534b,	// (0x0005ebba) bg_popup_window_pane_cp17

0x2a02,	// (0x0005c271) heading_pane_cp2

0x8c25,	// (0x00062494) listscroll_fast2_pane

0x59d4,	// (0x0005f243) grid_fast2_pane

0x59de,	// (0x0005f24d) listscroll_fast2_pane_g1

0x59e8,	// (0x0005f257) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x0006947a) listscroll_fast2_pane_g

0x9072,	// (0x000628e1) scroll_pane_cp26

0x59f2,	// (0x0005f261) cell_fast2_pane_ParamLimits

0x59f2,	// (0x0005f261) cell_fast2_pane

0x5a09,	// (0x0005f278) cell_fast2_pane_g1

0x5a12,	// (0x0005f281) cell_fast2_pane_g2

0x5a1b,	// (0x0005f28a) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x0006947f) cell_fast2_pane_g

0x8c67,	// (0x000624d6) grid_highlight_pane_cp9

0x0151,	// (0x000599c0) main_eswt_pane_ParamLimits

0x0151,	// (0x000599c0) main_eswt_pane

0x599c,	// (0x0005f20b) list_single_text_info_pane

0x5a23,	// (0x0005f292) eswt_ctrl_button_pane

0x5a23,	// (0x0005f292) eswt_ctrl_canvas_pane

0x5a2b,	// (0x0005f29a) eswt_ctrl_combo_pane

0x5a23,	// (0x0005f292) eswt_ctrl_default_pane

0x5a23,	// (0x0005f292) eswt_ctrl_label_pane

0x5a33,	// (0x0005f2a2) eswt_ctrl_wait_pane

0x5a3b,	// (0x0005f2aa) eswt_shell_pane

0x534b,	// (0x0005ebba) listscroll_eswt_app_pane

0x5a5b,	// (0x0005f2ca) popup_eswt_tasktip_window_ParamLimits

0x5a5b,	// (0x0005f2ca) popup_eswt_tasktip_window

0x2642,	// (0x0005beb1) bg_popup_window_pane_cp18

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_ParamLimits

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_ParamLimits

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_ParamLimits

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3

0x5a93,	// (0x0005f302) eswt_control_pane_g4_ParamLimits

0x5a93,	// (0x0005f302) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x00069486) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x00069486) eswt_control_pane_g

0x8f01,	// (0x00062770) bg_button_pane_ParamLimits

0x8f01,	// (0x00062770) bg_button_pane

0x8c7c,	// (0x000624eb) common_borders_pane_copy2_ParamLimits

0x8c7c,	// (0x000624eb) common_borders_pane_copy2

0x5aa0,	// (0x0005f30f) control_button_pane_g1_ParamLimits

0x5aa0,	// (0x0005f30f) control_button_pane_g1

0x5aac,	// (0x0005f31b) control_button_pane_g2_ParamLimits

0x5aac,	// (0x0005f31b) control_button_pane_g2

0x5ab8,	// (0x0005f327) control_button_pane_g3_ParamLimits

0x5ab8,	// (0x0005f327) control_button_pane_g3

0x0002,

0xfc20,	// (0x0006948f) control_button_pane_g_ParamLimits

0xfc20,	// (0x0006948f) control_button_pane_g

0x5acc,	// (0x0005f33b) control_button_pane_t1

0x5ada,	// (0x0005f349) control_button_pane_t2

0x0001,

0xfc27,	// (0x00069496) control_button_pane_t

0x2546,	// (0x0005bdb5) bg_button_pane_g1

0x2556,	// (0x0005bdc5) bg_button_pane_g2

0x254e,	// (0x0005bdbd) bg_button_pane_g3

0x2566,	// (0x0005bdd5) bg_button_pane_g4

0x255e,	// (0x0005bdcd) bg_button_pane_g5

0x256e,	// (0x0005bddd) bg_button_pane_g6

0x2576,	// (0x0005bde5) bg_button_pane_g7

0x2586,	// (0x0005bdf5) bg_button_pane_g8

0x257e,	// (0x0005bded) bg_button_pane_g9

0x0008,

0xf86c,	// (0x000690db) bg_button_pane_g

0x4dcf,	// (0x0005e63e) common_borders_pane_ParamLimits

0x4dcf,	// (0x0005e63e) common_borders_pane

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy1_ParamLimits

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy1

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy1_ParamLimits

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy1

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy1_ParamLimits

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy1

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy1_ParamLimits

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy1

0x4e0a,	// (0x0005e679) bg_eswt_ctrl_canvas_pane_g1

0x4dcf,	// (0x0005e63e) common_borders_pane_cp2_ParamLimits

0x4dcf,	// (0x0005e63e) common_borders_pane_cp2

0x4dcf,	// (0x0005e63e) common_borders_pane_cp3_ParamLimits

0x4dcf,	// (0x0005e63e) common_borders_pane_cp3

0x5ae8,	// (0x0005f357) separator_horizontal_pane

0x5af0,	// (0x0005f35f) separator_vertical_pane

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy2_ParamLimits

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy2

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy2_ParamLimits

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy2

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy2_ParamLimits

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy2

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy2_ParamLimits

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy2

0x534b,	// (0x0005ebba) common_borders_pane_cp4

0x5af9,	// (0x0005f368) separator_horizontal_pane_g1

0x5b02,	// (0x0005f371) separator_horizontal_pane_g2

0x5b0b,	// (0x0005f37a) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x0006949b) separator_horizontal_pane_g

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy3_ParamLimits

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy3

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy3_ParamLimits

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy3

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy3_ParamLimits

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy3

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy3_ParamLimits

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy3

0x534b,	// (0x0005ebba) common_borders_pane_cp5

0x5b14,	// (0x0005f383) separator_vertical_pane_g1

0x5b1d,	// (0x0005f38c) separator_vertical_pane_g2

0x5b26,	// (0x0005f395) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x000694a2) separator_vertical_pane_g

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy4_ParamLimits

0x5a6c,	// (0x0005f2db) eswt_control_pane_g1_copy4

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy4_ParamLimits

0x5a79,	// (0x0005f2e8) eswt_control_pane_g2_copy4

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy4_ParamLimits

0x5a86,	// (0x0005f2f5) eswt_control_pane_g3_copy4

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy4_ParamLimits

0x5a93,	// (0x0005f302) eswt_control_pane_g4_copy4

0xcda9,	// (0x00066618) eswt_ctrl_combo_button_pane

0xcdb1,	// (0x00066620) eswt_ctrl_input_pane

0xcdb9,	// (0x00066628) popup_choice_list_window_cp70

0xcdc1,	// (0x00066630) eswt_ctrl_input_pane_t1

0x534b,	// (0x0005ebba) input_focus_pane_cp70

0x4dcf,	// (0x0005e63e) bg_button_pane_cp70_ParamLimits

0x4dcf,	// (0x0005e63e) bg_button_pane_cp70

0xcdcf,	// (0x0006663e) eswt_ctrl_combo_button_pane_g1

0x5b5d,	// (0x0005f3cc) wait_bar_pane_cp70

0x2642,	// (0x0005beb1) bg_popup_window_pane_cp70_ParamLimits

0x2642,	// (0x0005beb1) bg_popup_window_pane_cp70

0x5b65,	// (0x0005f3d4) popup_eswt_tasktip_window_t1

0x5b7b,	// (0x0005f3ea) wait_bar_pane_cp71_ParamLimits

0x5b7b,	// (0x0005f3ea) wait_bar_pane_cp71

0x5b87,	// (0x0005f3f6) grid_eswt_app_pane

0x92b2,	// (0x00062b21) scroll_pane_cp70

0xcdd7,	// (0x00066646) cell_eswt_app_pane_ParamLimits

0xcdd7,	// (0x00066646) cell_eswt_app_pane

0xce09,	// (0x00066678) cell_eswt_app_pane_g1_ParamLimits

0xce09,	// (0x00066678) cell_eswt_app_pane_g1

0xce38,	// (0x000666a7) cell_eswt_app_pane_g2_ParamLimits

0xce38,	// (0x000666a7) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x000694a9) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x000694a9) cell_eswt_app_pane_g

0xce61,	// (0x000666d0) cell_eswt_app_pane_t1_ParamLimits

0xce61,	// (0x000666d0) cell_eswt_app_pane_t1

0x5c4c,	// (0x0005f4bb) grid_highlight_pane_cp70_ParamLimits

0x5c4c,	// (0x0005f4bb) grid_highlight_pane_cp70

0x1b93,	// (0x0005b402) set_content_pane_g1

0x1f66,	// (0x0005b7d5) status_small_volume_pane

0x1091,	// (0x0005a900) status_small_volume_pane_g1

0x1099,	// (0x0005a908) volume_small2_pane

0x10a2,	// (0x0005a911) volume_small2_pane_g1

0x10ab,	// (0x0005a91a) volume_small2_pane_g2

0x10b4,	// (0x0005a923) volume_small2_pane_g3

0x10bd,	// (0x0005a92c) volume_small2_pane_g4

0x10c6,	// (0x0005a935) volume_small2_pane_g5

0x10cf,	// (0x0005a93e) volume_small2_pane_g6

0x10d8,	// (0x0005a947) volume_small2_pane_g7

0x10e1,	// (0x0005a950) volume_small2_pane_g8

0x10ea,	// (0x0005a959) volume_small2_pane_g9

0x10f3,	// (0x0005a962) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x000694ae) volume_small2_pane_g

0x51d9,	// (0x0005ea48) fep_vkb_top_text_pane_g1_ParamLimits

0xcd15,	// (0x00066584) fep_vkb_top_text_pane_t1_ParamLimits

0x575a,	// (0x0005efc9) popup_preview_fixed_window_g3_ParamLimits

0x575a,	// (0x0005efc9) popup_preview_fixed_window_g3

0xb679,	// (0x00064ee8) popup_toolbar_trans_pane

0xc6e4,	// (0x00065f53) aid_height_set_list_ParamLimits

0x3b65,	// (0x0005d3d4) aid_size_parent_ParamLimits

0x200e,	// (0x0005b87d) list_highlight_pane_cp2_ParamLimits

0x1b93,	// (0x0005b402) set_content_pane_g1_ParamLimits

0xba74,	// (0x000652e3) list_single_image_pane_ParamLimits

0xba74,	// (0x000652e3) list_single_image_pane

0xce93,	// (0x00066702) aid_size_cell_image_ParamLimits

0xce93,	// (0x00066702) aid_size_cell_image

0xcea0,	// (0x0006670f) grid_single_image_pane_ParamLimits

0xcea0,	// (0x0006670f) grid_single_image_pane

0x8f1b,	// (0x0006278a) list_single_image_pane_g1_ParamLimits

0x8f1b,	// (0x0006278a) list_single_image_pane_g1

0x8f27,	// (0x00062796) list_single_image_pane_g2_ParamLimits

0x8f27,	// (0x00062796) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x000694c3) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x000694c3) list_single_image_pane_g

0x5c73,	// (0x0005f4e2) list_single_image_pane_t1_ParamLimits

0x5c73,	// (0x0005f4e2) list_single_image_pane_t1

0xceae,	// (0x0006671d) cell_image_list_pane_ParamLimits

0xceae,	// (0x0006671d) cell_image_list_pane

0xcec2,	// (0x00066731) cell_image_list_pane_g1

0xcecb,	// (0x0006673a) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x000694c8) cell_image_list_pane_g

0x5cb1,	// (0x0005f520) aid_size_cell_tb_trans_pane

0x8f01,	// (0x00062770) bg_tb_trans_pane

0x5cc3,	// (0x0005f532) grid_tb_trans_pane

0x2546,	// (0x0005bdb5) bg_tb_trans_pane_g1

0x2556,	// (0x0005bdc5) bg_tb_trans_pane_g2

0x254e,	// (0x0005bdbd) bg_tb_trans_pane_g3

0x2566,	// (0x0005bdd5) bg_tb_trans_pane_g4

0x255e,	// (0x0005bdcd) bg_tb_trans_pane_g5

0x2586,	// (0x0005bdf5) bg_tb_trans_pane_g6

0x257e,	// (0x0005bded) bg_tb_trans_pane_g7

0x256e,	// (0x0005bddd) bg_tb_trans_pane_g8

0x2576,	// (0x0005bde5) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x000694cd) bg_tb_trans_pane_g

0x5cd7,	// (0x0005f546) cell_toolbar_trans_pane_ParamLimits

0x5cd7,	// (0x0005f546) cell_toolbar_trans_pane

0x4e0a,	// (0x0005e679) cell_toolbar_trans_pane_g1

0xcaed,	// (0x0006635c) list_form2_midp_pane_t1

0xcafb,	// (0x0006636a) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x0006936a) list_form2_midp_pane_t

0x4a4a,	// (0x0005e2b9) scroll_pane_cp51_ParamLimits

0x4c11,	// (0x0005e480) form2_midp_wait_pane_g1

0x4c1a,	// (0x0005e489) form2_midp_wait_pane_g2

0x4c23,	// (0x0005e492) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0006937f) form2_midp_wait_pane_g

0x53ad,	// (0x0005ec1c) list_highlight_pane_cp21_ParamLimits

0x4c67,	// (0x0005e4d6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4c76,	// (0x0005e4e5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3d3d,	// (0x0005d5ac) list_single_2graphic_im_pane_ParamLimits

0x3d3d,	// (0x0005d5ac) list_single_2graphic_im_pane

0xced4,	// (0x00066743) list_single_2graphic_im_pane_g1_ParamLimits

0xced4,	// (0x00066743) list_single_2graphic_im_pane_g1

0xcee5,	// (0x00066754) list_single_2graphic_im_pane_g2_ParamLimits

0xcee5,	// (0x00066754) list_single_2graphic_im_pane_g2

0xcef1,	// (0x00066760) list_single_2graphic_im_pane_g3_ParamLimits

0xcef1,	// (0x00066760) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x000694e0) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x000694e0) list_single_2graphic_im_pane_g

0xcf05,	// (0x00066774) list_single_2graphic_im_pane_t1_ParamLimits

0xcf05,	// (0x00066774) list_single_2graphic_im_pane_t1

0x5766,	// (0x0005efd5) list_single_graphic_2heading_pane_fp_ParamLimits

0x5766,	// (0x0005efd5) list_single_graphic_2heading_pane_fp

0xe3cb,	// (0x00067c3a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe3cb,	// (0x00067c3a) list_single_graphic_2heading_pane_fp_g1

0x577f,	// (0x0005efee) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x577f,	// (0x0005efee) list_single_graphic_2heading_pane_fp_g2

0xe3a8,	// (0x00067c17) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe3a8,	// (0x00067c17) list_single_graphic_2heading_pane_fp_g3

0x3616,	// (0x0005ce85) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3616,	// (0x0005ce85) list_single_graphic_2heading_pane_fp_g4

0x578b,	// (0x0005effa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x578b,	// (0x0005effa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00069407) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00069407) list_single_graphic_2heading_pane_fp_g

0xe4f2,	// (0x00067d61) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe4f2,	// (0x00067d61) list_single_graphic_2heading_pane_fp_t1

0xe403,	// (0x00067c72) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe403,	// (0x00067c72) list_single_graphic_2heading_pane_fp_t2

0xe508,	// (0x00067d77) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe508,	// (0x00067d77) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x000694e9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x000694e9) list_single_graphic_2heading_pane_fp_t

0x4e9b,	// (0x0005e70a) fep_hwr_write_pane_g5_ParamLimits

0x4e9b,	// (0x0005e70a) fep_hwr_write_pane_g5

0x4ea7,	// (0x0005e716) fep_hwr_write_pane_g6_ParamLimits

0x4ea7,	// (0x0005e716) fep_hwr_write_pane_g6

0x5a3b,	// (0x0005f2aa) eswt_shell_pane_ParamLimits

0x2642,	// (0x0005beb1) bg_popup_window_pane_cp18_ParamLimits

0x3aab,	// (0x0005d31a) heading_pane_cp70

0x5b65,	// (0x0005f3d4) popup_eswt_tasktip_window_t1_ParamLimits

0xb743,	// (0x00064fb2) aid_touch_tab_arrow_left

0xb757,	// (0x00064fc6) aid_touch_tab_arrow_right

0x9fca,	// (0x00063839) title_pane_g3_ParamLimits

0x9fca,	// (0x00063839) title_pane_g3

0x8ec0,	// (0x0006272f) set_value_pane_g1

0xb679,	// (0x00064ee8) popup_toolbar_trans_pane_ParamLimits

0x5cb1,	// (0x0005f520) aid_size_cell_tb_trans_pane_ParamLimits

0x8f01,	// (0x00062770) bg_tb_trans_pane_ParamLimits

0x5cc3,	// (0x0005f532) grid_tb_trans_pane_ParamLimits

0x54ee,	// (0x0005ed5d) cont_note_pane_ParamLimits

0x54ee,	// (0x0005ed5d) cont_note_pane

0x8c7c,	// (0x000624eb) cont_snote2_single_text_pane_ParamLimits

0x8c7c,	// (0x000624eb) cont_snote2_single_text_pane

0x8c7c,	// (0x000624eb) cont_snote2_single_graphic_pane_ParamLimits

0x8c7c,	// (0x000624eb) cont_snote2_single_graphic_pane

0x2c1e,	// (0x0005c48d) cont_note_wait_pane_ParamLimits

0x2c1e,	// (0x0005c48d) cont_note_wait_pane

0x2c1e,	// (0x0005c48d) cont_note_image_pane_ParamLimits

0x2c1e,	// (0x0005c48d) cont_note_image_pane

0x5d6b,	// (0x0005f5da) popup_note2_window_g1_ParamLimits

0x5d6b,	// (0x0005f5da) popup_note2_window_g1

0x5d9c,	// (0x0005f60b) popup_note2_window_t1_ParamLimits

0x5d9c,	// (0x0005f60b) popup_note2_window_t1

0x5de1,	// (0x0005f650) popup_note2_window_t2_ParamLimits

0x5de1,	// (0x0005f650) popup_note2_window_t2

0x5e26,	// (0x0005f695) popup_note2_window_t3_ParamLimits

0x5e26,	// (0x0005f695) popup_note2_window_t3

0x5e6b,	// (0x0005f6da) popup_note2_window_t4_ParamLimits

0x5e6b,	// (0x0005f6da) popup_note2_window_t4

0x5572,	// (0x0005ede1) popup_note2_window_t5_ParamLimits

0x5572,	// (0x0005ede1) popup_note2_window_t5

0x0004,

0xfc86,	// (0x000694f5) popup_note2_window_t_ParamLimits

0xfc86,	// (0x000694f5) popup_note2_window_t

0x5e9a,	// (0x0005f709) popup_note2_image_window_g1_ParamLimits

0x5e9a,	// (0x0005f709) popup_note2_image_window_g1

0x5ea6,	// (0x0005f715) popup_note2_image_window_g2_ParamLimits

0x5ea6,	// (0x0005f715) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x00069500) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x00069500) popup_note2_image_window_g

0x5eb8,	// (0x0005f727) popup_note2_image_window_t1_ParamLimits

0x5eb8,	// (0x0005f727) popup_note2_image_window_t1

0x5ed0,	// (0x0005f73f) popup_note2_image_window_t2_ParamLimits

0x5ed0,	// (0x0005f73f) popup_note2_image_window_t2

0x5ee8,	// (0x0005f757) popup_note2_image_window_t3_ParamLimits

0x5ee8,	// (0x0005f757) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x00069505) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x00069505) popup_note2_image_window_t

0x2c2c,	// (0x0005c49b) popup_note2_wait_window_g1_ParamLimits

0x2c2c,	// (0x0005c49b) popup_note2_wait_window_g1

0x5f04,	// (0x0005f773) popup_note2_wait_window_g2_ParamLimits

0x5f04,	// (0x0005f773) popup_note2_wait_window_g2

0x2c44,	// (0x0005c4b3) popup_note2_wait_window_g3_ParamLimits

0x2c44,	// (0x0005c4b3) popup_note2_wait_window_g3

0x0002,

0xfc9d,	// (0x0006950c) popup_note2_wait_window_g_ParamLimits

0xfc9d,	// (0x0006950c) popup_note2_wait_window_g

0x5f10,	// (0x0005f77f) popup_note2_wait_window_t1_ParamLimits

0x5f10,	// (0x0005f77f) popup_note2_wait_window_t1

0x5f2e,	// (0x0005f79d) popup_note2_wait_window_t2_ParamLimits

0x5f2e,	// (0x0005f79d) popup_note2_wait_window_t2

0x5f4c,	// (0x0005f7bb) popup_note2_wait_window_t3_ParamLimits

0x5f4c,	// (0x0005f7bb) popup_note2_wait_window_t3

0x5f5e,	// (0x0005f7cd) popup_note2_wait_window_t4_ParamLimits

0x5f5e,	// (0x0005f7cd) popup_note2_wait_window_t4

0x0003,

0xfca4,	// (0x00069513) popup_note2_wait_window_t_ParamLimits

0xfca4,	// (0x00069513) popup_note2_wait_window_t

0x5f70,	// (0x0005f7df) wait_bar2_pane_ParamLimits

0x5f70,	// (0x0005f7df) wait_bar2_pane

0x5f88,	// (0x0005f7f7) popup_snote2_single_text_window_g1_ParamLimits

0x5f88,	// (0x0005f7f7) popup_snote2_single_text_window_g1

0x5fb0,	// (0x0005f81f) popup_snote2_single_text_window_t1_ParamLimits

0x5fb0,	// (0x0005f81f) popup_snote2_single_text_window_t1

0x5ffc,	// (0x0005f86b) popup_snote2_single_text_window_t2_ParamLimits

0x5ffc,	// (0x0005f86b) popup_snote2_single_text_window_t2

0x6048,	// (0x0005f8b7) popup_snote2_single_text_window_t3_ParamLimits

0x6048,	// (0x0005f8b7) popup_snote2_single_text_window_t3

0x6089,	// (0x0005f8f8) popup_snote2_single_text_window_t4_ParamLimits

0x6089,	// (0x0005f8f8) popup_snote2_single_text_window_t4

0x60bf,	// (0x0005f92e) popup_snote2_single_text_window_t5_ParamLimits

0x60bf,	// (0x0005f92e) popup_snote2_single_text_window_t5

0x0004,

0xfcad,	// (0x0006951c) popup_snote2_single_text_window_t_ParamLimits

0xfcad,	// (0x0006951c) popup_snote2_single_text_window_t

0x60ea,	// (0x0005f959) popup_snote2_single_graphic_window_g1_ParamLimits

0x60ea,	// (0x0005f959) popup_snote2_single_graphic_window_g1

0x6112,	// (0x0005f981) popup_snote2_single_graphic_window_g2_ParamLimits

0x6112,	// (0x0005f981) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb8,	// (0x00069527) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb8,	// (0x00069527) popup_snote2_single_graphic_window_g

0x613a,	// (0x0005f9a9) popup_snote2_single_graphic_window_t1_ParamLimits

0x613a,	// (0x0005f9a9) popup_snote2_single_graphic_window_t1

0x6186,	// (0x0005f9f5) popup_snote2_single_graphic_window_t2_ParamLimits

0x6186,	// (0x0005f9f5) popup_snote2_single_graphic_window_t2

0x6048,	// (0x0005f8b7) popup_snote2_single_graphic_window_t3_ParamLimits

0x6048,	// (0x0005f8b7) popup_snote2_single_graphic_window_t3

0x6089,	// (0x0005f8f8) popup_snote2_single_graphic_window_t4_ParamLimits

0x6089,	// (0x0005f8f8) popup_snote2_single_graphic_window_t4

0x60bf,	// (0x0005f92e) popup_snote2_single_graphic_window_t5_ParamLimits

0x60bf,	// (0x0005f92e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbd,	// (0x0006952c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbd,	// (0x0006952c) popup_snote2_single_graphic_window_t

0x48f4,	// (0x0005e163) clock_nsta_pane_cp2_t1

0x48f4,	// (0x0005e163) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00069340) clock_nsta_pane_cp2_t

0xddd5,	// (0x00067644) form_field_data_wide_pane_g1_ParamLimits

0x8f1b,	// (0x0006278a) form_field_data_wide_pane_g2_ParamLimits

0x8f1b,	// (0x0006278a) form_field_data_wide_pane_g2

0x8f27,	// (0x00062796) form_field_data_wide_pane_g3_ParamLimits

0x8f27,	// (0x00062796) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00068ef5) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00068ef5) form_field_data_wide_pane_g

0xc9e7,	// (0x00066256) grid_touch_3_pane_ParamLimits

0xc9e7,	// (0x00066256) grid_touch_3_pane

0xcf36,	// (0x000667a5) cell_touch_3_pane_ParamLimits

0xcf36,	// (0x000667a5) cell_touch_3_pane

0x4e0a,	// (0x0005e679) cell_touch_3_pane_g1

0x4e0a,	// (0x0005e679) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x000693c5) cell_touch_3_pane_g

0x55a4,	// (0x0005ee13) cont_query_data_pane

0x55ac,	// (0x0005ee1b) cont_query_data_pane_cp1

0x6205,	// (0x0005fa74) button_value_adjust_pane_cp7

0x620d,	// (0x0005fa7c) query_popup_pane_cp3

0xded1,	// (0x00067740) bg_popup_sub_pane_cp22_ParamLimits

0xf308,	// (0x00068b77) navi_navi_volume_pane_cp2

0xf323,	// (0x00068b92) popup_side_volume_key_window_g2

0xf332,	// (0x00068ba1) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00068f8b) popup_side_volume_key_window_g

0xf34f,	// (0x00068bbe) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00068f92) popup_side_volume_key_window_t

0xe0dc,	// (0x0006794b) popup_side_volume_key_window_ParamLimits

0xa4e7,	// (0x00063d56) list_double_graphic_pane_g4_ParamLimits

0xa4e7,	// (0x00063d56) list_double_graphic_pane_g4

0xc894,	// (0x00066103) list_single_2heading_msg_pane_ParamLimits

0xc894,	// (0x00066103) list_single_2heading_msg_pane

0xcf80,	// (0x000667ef) list_single_2heading_msg_pane_g1_ParamLimits

0xcf80,	// (0x000667ef) list_single_2heading_msg_pane_g1

0xcf8c,	// (0x000667fb) list_single_2heading_msg_pane_g2_ParamLimits

0xcf8c,	// (0x000667fb) list_single_2heading_msg_pane_g2

0xcf9f,	// (0x0006680e) list_single_2heading_msg_pane_g3_ParamLimits

0xcf9f,	// (0x0006680e) list_single_2heading_msg_pane_g3

0xcfab,	// (0x0006681a) list_single_2heading_msg_pane_g4_ParamLimits

0xcfab,	// (0x0006681a) list_single_2heading_msg_pane_g4

0x0003,

0xfcc8,	// (0x00069537) list_single_2heading_msg_pane_g_ParamLimits

0xfcc8,	// (0x00069537) list_single_2heading_msg_pane_g

0xbaf4,	// (0x00065363) list_single_2heading_msg_pane_t1_ParamLimits

0xbaf4,	// (0x00065363) list_single_2heading_msg_pane_t1

0xbb1c,	// (0x0006538b) list_single_2heading_msg_pane_t2_ParamLimits

0xbb1c,	// (0x0006538b) list_single_2heading_msg_pane_t2

0xbb87,	// (0x000653f6) list_single_2heading_msg_pane_t3_ParamLimits

0xbb87,	// (0x000653f6) list_single_2heading_msg_pane_t3

0xe528,	// (0x00067d97) list_single_2heading_msg_pane_t4_ParamLimits

0xe528,	// (0x00067d97) list_single_2heading_msg_pane_t4

0x0003,

0xfcd1,	// (0x00069540) list_single_2heading_msg_pane_t_ParamLimits

0xfcd1,	// (0x00069540) list_single_2heading_msg_pane_t

0x5369,	// (0x0005ebd8) title_pane_g4_ParamLimits

0x5369,	// (0x0005ebd8) title_pane_g4

0xf11d,	// (0x0006898c) title_pane_stacon_g3_ParamLimits

0xf11d,	// (0x0006898c) title_pane_stacon_g3

0x5d2e,	// (0x0005f59d) list_single_2graphic_im_pane_g4_ParamLimits

0x5d2e,	// (0x0005f59d) list_single_2graphic_im_pane_g4

0x3848,	// (0x0005d0b7) popup_side_volume_key_window_cp

0x409e,	// (0x0005d90d) main_idle_act2_pane_t1

0x07a4,	// (0x0005a013) toolbar_button_pane_g10

0xa34b,	// (0x00063bba) popup_toolbar_window_cp1

0x48e5,	// (0x0005e154) clock_nsta_pane_cp_t1

0x48e5,	// (0x0005e154) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x0006933b) clock_nsta_pane_cp_t

0xf308,	// (0x00068b77) navi_navi_volume_pane_cp2_ParamLimits

0xf317,	// (0x00068b86) popup_side_volume_key_window_g1_ParamLimits

0xf323,	// (0x00068b92) popup_side_volume_key_window_g2_ParamLimits

0xf332,	// (0x00068ba1) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00068f8b) popup_side_volume_key_window_g_ParamLimits

0x0cc0,	// (0x0005a52f) fep_hwr_aid_pane

0x0d69,	// (0x0005a5d8) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e6b,	// (0x0005e6da) fep_hwr_top_pane_g1_ParamLimits

0x4e7d,	// (0x0005e6ec) fep_hwr_top_pane_g2_ParamLimits

0x0d89,	// (0x0005a5f8) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00069390) fep_hwr_top_pane_g_ParamLimits

0x0d9e,	// (0x0005a60d) fep_hwr_top_text_pane_ParamLimits

0x3449,	// (0x0005ccb8) aid_touch_tab_arrow_arrow_2

0x3452,	// (0x0005ccc1) aid_touch_tab_arrow_left_2

0x0cd4,	// (0x0005a543) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d0b,	// (0x0005a57a) fep_hwr_prediction_pane

0x4fd3,	// (0x0005e842) fep_vkb_prediction_pane

0xccf5,	// (0x00066564) fep_vkb_side_pane_g3_ParamLimits

0xccf5,	// (0x00066564) fep_vkb_side_pane_g3

0x0f2d,	// (0x0005a79c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f9e,	// (0x0005a80d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0fab,	// (0x0005a81a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x0006943f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x118c,	// (0x0005a9fb) fep_hwr_prediction_pane_g1

0x1196,	// (0x0005aa05) fep_hwr_prediction_pane_g2

0x119e,	// (0x0005aa0d) fep_hwr_prediction_pane_g3

0x11a6,	// (0x0005aa15) fep_hwr_prediction_pane_g4

0x0003,

0xfcda,	// (0x00069549) fep_hwr_prediction_pane_g

0x6234,	// (0x0005faa3) fep_vkb_prediction_pane_g1

0x623e,	// (0x0005faad) fep_vkb_prediction_pane_g2

0x6246,	// (0x0005fab5) fep_vkb_prediction_pane_g3

0x624e,	// (0x0005fabd) fep_vkb_prediction_pane_g4

0x0003,

0xfce3,	// (0x00069552) fep_vkb_prediction_pane_g

0x0af4,	// (0x0005a363) slider_set_pane_g3

0x0b08,	// (0x0005a377) slider_set_pane_g4

0x0b20,	// (0x0005a38f) slider_set_pane_g5

0x0af4,	// (0x0005a363) slider_set_pane_g6

0x0b36,	// (0x0005a3a5) slider_set_pane_g7

0x3cea,	// (0x0005d559) slider_form_pane_g3

0x3cf3,	// (0x0005d562) slider_form_pane_g4

0x3cfb,	// (0x0005d56a) slider_form_pane_g5

0x3cea,	// (0x0005d559) slider_form_pane_g6

0xc853,	// (0x000660c2) slider_form_pane_g7

0x4361,	// (0x0005dbd0) slider_set_pane_vc_g3

0x436a,	// (0x0005dbd9) slider_set_pane_vc_g4

0x4373,	// (0x0005dbe2) slider_set_pane_vc_g5

0x4361,	// (0x0005dbd0) slider_set_pane_vc_g6

0x437c,	// (0x0005dbeb) slider_set_pane_vc_g7

0x458e,	// (0x0005ddfd) slider_form_pane_vc_g1

0x4597,	// (0x0005de06) slider_form_pane_vc_g2

0x45a0,	// (0x0005de0f) slider_form_pane_vc_g3

0x458e,	// (0x0005ddfd) slider_form_pane_vc_g4

0x45a9,	// (0x0005de18) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0006930d) slider_form_pane_vc_g

0xee38,	// (0x000686a7) main_idle_act3_pane

0x6256,	// (0x0005fac5) ai3_links_pane

0xcfc3,	// (0x00066832) popup_ai3_data_window_ParamLimits

0xcfc3,	// (0x00066832) popup_ai3_data_window

0x534b,	// (0x0005ebba) grid_ai3_links_pane

0xcfe1,	// (0x00066850) cell_ai3_links_pane_ParamLimits

0xcfe1,	// (0x00066850) cell_ai3_links_pane

0x6297,	// (0x0005fb06) bg_popup_sub_pane_cp11

0x62a4,	// (0x0005fb13) cell_ai3_links_pane_g1

0x534b,	// (0x0005ebba) bg_popup_sub_pane_cp12

0x62c9,	// (0x0005fb38) heading_ai3_data_pane

0x62d1,	// (0x0005fb40) list_ai3_gene_pane

0x62dd,	// (0x0005fb4c) popup_ai3_data_window_g1

0x62e5,	// (0x0005fb54) heading_ai3_data_pane_g1

0x62ed,	// (0x0005fb5c) heading_ai3_data_pane_t1

0x62fb,	// (0x0005fb6a) list_double_ai3_gene_pane_ParamLimits

0x62fb,	// (0x0005fb6a) list_double_ai3_gene_pane

0x6308,	// (0x0005fb77) list_single_ai3_gene_pane_ParamLimits

0x6308,	// (0x0005fb77) list_single_ai3_gene_pane

0x4dcf,	// (0x0005e63e) list_highlight_pane_cp7_ParamLimits

0x4dcf,	// (0x0005e63e) list_highlight_pane_cp7

0x6315,	// (0x0005fb84) list_single_a13_gene_pane_t1_ParamLimits

0x6315,	// (0x0005fb84) list_single_a13_gene_pane_t1

0x632c,	// (0x0005fb9b) list_single_ai3_gene_pane_g1

0x6335,	// (0x0005fba4) list_single_ai3_gene_pane_g2

0x0001,

0xfcec,	// (0x0006955b) list_single_ai3_gene_pane_g

0x633d,	// (0x0005fbac) list_double_ai3_gene_pane_g1_ParamLimits

0x633d,	// (0x0005fbac) list_double_ai3_gene_pane_g1

0x6349,	// (0x0005fbb8) list_double_ai3_gene_pane_t1_ParamLimits

0x6349,	// (0x0005fbb8) list_double_ai3_gene_pane_t1

0x6365,	// (0x0005fbd4) list_double_ai3_gene_pane_t2_ParamLimits

0x6365,	// (0x0005fbd4) list_double_ai3_gene_pane_t2

0x637a,	// (0x0005fbe9) list_double_ai3_gene_pane_t3_ParamLimits

0x637a,	// (0x0005fbe9) list_double_ai3_gene_pane_t3

0x0002,

0xfcf1,	// (0x00069560) list_double_ai3_gene_pane_t_ParamLimits

0xfcf1,	// (0x00069560) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe51e,	// (0x00067d8d) aid_size_min_col_2

0xcf6a,	// (0x000667d9) aid_size_min_msg_ParamLimits

0xcf6a,	// (0x000667d9) aid_size_min_msg

0xcd09,	// (0x00066578) fep_vkb_top_text_pane_g2_ParamLimits

0xcd09,	// (0x00066578) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x000693c0) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x000693c0) fep_vkb_top_text_pane_g

0xee38,	// (0x000686a7) main_hc_apps_shell_pane

0x6397,	// (0x0005fc06) grid_hc_apps_pane_ParamLimits

0x6397,	// (0x0005fc06) grid_hc_apps_pane

0x63a6,	// (0x0005fc15) list_hc_apps_pane

0x63ae,	// (0x0005fc1d) scroll_pane_cp37_ParamLimits

0x63ae,	// (0x0005fc1d) scroll_pane_cp37

0xcffb,	// (0x0006686a) cell_hc_apps_pane_ParamLimits

0xcffb,	// (0x0006686a) cell_hc_apps_pane

0xd0c5,	// (0x00066934) cell_hc_apps_pane_g1_ParamLimits

0xd0c5,	// (0x00066934) cell_hc_apps_pane_g1

0x64a3,	// (0x0005fd12) cell_hc_apps_pane_g2_ParamLimits

0x64a3,	// (0x0005fd12) cell_hc_apps_pane_g2

0x64bf,	// (0x0005fd2e) cell_hc_apps_pane_g3_ParamLimits

0x64bf,	// (0x0005fd2e) cell_hc_apps_pane_g3

0x0002,

0xfcf8,	// (0x00069567) cell_hc_apps_pane_g_ParamLimits

0xfcf8,	// (0x00069567) cell_hc_apps_pane_g

0xd0f2,	// (0x00066961) cell_hc_apps_pane_t1_ParamLimits

0xd0f2,	// (0x00066961) cell_hc_apps_pane_t1

0x54ee,	// (0x0005ed5d) grid_highlight_pane_cp10_ParamLimits

0x54ee,	// (0x0005ed5d) grid_highlight_pane_cp10

0xd132,	// (0x000669a1) list_single_hc_apps_pane_ParamLimits

0xd132,	// (0x000669a1) list_single_hc_apps_pane

0xd16c,	// (0x000669db) list_single_hc_apps_pane_g1

0xd185,	// (0x000669f4) list_single_hc_apps_pane_g2

0x0001,

0xfcff,	// (0x0006956e) list_single_hc_apps_pane_g

0xd19e,	// (0x00066a0d) list_single_hc_apps_pane_g2_copy1

0xbbf5,	// (0x00065464) list_single_hc_apps_pane_t1

0x53ad,	// (0x0005ec1c) bg_set_opt_pane_cp_ParamLimits

0xefc8,	// (0x00068837) setting_slider_pane_t1_ParamLimits

0xefe1,	// (0x00068850) setting_slider_pane_t2_ParamLimits

0xeffb,	// (0x0006886a) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00068dd3) setting_slider_pane_t_ParamLimits

0xf013,	// (0x00068882) slider_set_pane_ParamLimits

0x0043,	// (0x000598b2) control_pane_g5_ParamLimits

0x0043,	// (0x000598b2) control_pane_g5

0x3b17,	// (0x0005d386) slider_set_pane_g1_ParamLimits

0x0ae8,	// (0x0005a357) slider_set_pane_g2_ParamLimits

0x0af4,	// (0x0005a363) slider_set_pane_g3_ParamLimits

0x0b08,	// (0x0005a377) slider_set_pane_g4_ParamLimits

0x0b20,	// (0x0005a38f) slider_set_pane_g5_ParamLimits

0x0af4,	// (0x0005a363) slider_set_pane_g6_ParamLimits

0x0b36,	// (0x0005a3a5) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x000691d9) slider_set_pane_g_ParamLimits

0x1b3e,	// (0x0005b3ad) navi_icon_text_pane_ParamLimits

0xb70a,	// (0x00064f79) aid_fill_nsta_2_ParamLimits

0xb743,	// (0x00064fb2) aid_touch_tab_arrow_left_ParamLimits

0xb757,	// (0x00064fc6) aid_touch_tab_arrow_right_ParamLimits

0xb7f2,	// (0x00065061) clock_nsta_pane_ParamLimits

0xc56a,	// (0x00065dd9) navi_icon_pane_g1_ParamLimits

0xc576,	// (0x00065de5) navi_text_pane_t1_ParamLimits

0xcacf,	// (0x0006633e) navi_icon_text_pane_g1_ParamLimits

0xcadb,	// (0x0006634a) navi_icon_text_pane_t1_ParamLimits

0xd16c,	// (0x000669db) list_single_hc_apps_pane_g1_ParamLimits

0xd185,	// (0x000669f4) list_single_hc_apps_pane_g2_ParamLimits

0xfcff,	// (0x0006956e) list_single_hc_apps_pane_g_ParamLimits

0xd19e,	// (0x00066a0d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbbf5,	// (0x00065464) list_single_hc_apps_pane_t1_ParamLimits

0x9f34,	// (0x000637a3) popup_toolbar2_fixed_window_ParamLimits

0x9f34,	// (0x000637a3) popup_toolbar2_fixed_window

0xb66f,	// (0x00064ede) popup_toolbar2_float_window

0x534b,	// (0x0005ebba) bg_popup_sub_pane_cp27

0x6579,	// (0x0005fde8) grid_toolbar2_float_pane

0x534b,	// (0x0005ebba) bg_popup_sub_pane_cp26

0x6579,	// (0x0005fde8) grid_toolbar2_fixed_pane

0xd1ba,	// (0x00066a29) cell_toolbar2_fixed_pane_ParamLimits

0xd1ba,	// (0x00066a29) cell_toolbar2_fixed_pane

0xd1d7,	// (0x00066a46) cell_toolbar2_fixed_pane_g1

0x659a,	// (0x0005fe09) toolbar2_fixed_button_pane

0x2546,	// (0x0005bdb5) toolbar2_fixed_button_pane_g1

0x2556,	// (0x0005bdc5) toolbar2_fixed_button_pane_g2

0x254e,	// (0x0005bdbd) toolbar2_fixed_button_pane_g3

0x2566,	// (0x0005bdd5) toolbar2_fixed_button_pane_g4

0x255e,	// (0x0005bdcd) toolbar2_fixed_button_pane_g5

0x256e,	// (0x0005bddd) toolbar2_fixed_button_pane_g6

0x2576,	// (0x0005bde5) toolbar2_fixed_button_pane_g7

0x2586,	// (0x0005bdf5) toolbar2_fixed_button_pane_g8

0x257e,	// (0x0005bded) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x000690db) toolbar2_fixed_button_pane_g

0x65a2,	// (0x0005fe11) cell_toolbar2_float_pane_ParamLimits

0x65a2,	// (0x0005fe11) cell_toolbar2_float_pane

0x65b3,	// (0x0005fe22) cell_toolbar2_float_pane_g1

0x659a,	// (0x0005fe09) toolbar2_fixed_button_pane_cp

0xcbf1,	// (0x00066460) fep_vkb_accented_list_pane_ParamLimits

0xcbf1,	// (0x00066460) fep_vkb_accented_list_pane

0x0f0d,	// (0x0005a77c) bg_popup_fep_shadow_pane_g9

0x1cc2,	// (0x0005b531) bg_popup_fep_shadow_pane_cp3

0x9059,	// (0x000628c8) list_accented_list_pane

0x65bc,	// (0x0005fe2b) list_single_accented_list_pane_ParamLimits

0x65bc,	// (0x0005fe2b) list_single_accented_list_pane

0x1cc2,	// (0x0005b531) list_highlight_pane_cp10

0x65cd,	// (0x0005fe3c) list_single_accented_list_pane_t1

0xb58b,	// (0x00064dfa) popup_slider_window_ParamLimits

0xb58b,	// (0x00064dfa) popup_slider_window

0x6215,	// (0x0005fa84) aid_indentation_list_msg

0xd2e2,	// (0x00066b51) bg_popup_window_pane_cp19

0x6707,	// (0x0005ff76) popup_slider_window_g1

0x6723,	// (0x0005ff92) popup_slider_window_g2

0x673f,	// (0x0005ffae) popup_slider_window_g3

0x0005,

0xfd04,	// (0x00069573) popup_slider_window_g

0x679b,	// (0x0006000a) popup_slider_window_t1

0x680f,	// (0x0006007e) small_volume_slider_vertical_pane

0x4e0a,	// (0x0005e679) small_volume_slider_vertical_pane_g1

0x4e0a,	// (0x0005e679) small_volume_slider_vertical_pane_g2

0x682b,	// (0x0006009a) small_volume_slider_vertical_pane_g3

0x0002,

0xfd16,	// (0x00069585) small_volume_slider_vertical_pane_g

0x9e9e,	// (0x0006370d) area_side_right_pane_ParamLimits

0x9e9e,	// (0x0006370d) area_side_right_pane

0xbc23,	// (0x00065492) aid_size_side_button_ParamLimits

0xbc23,	// (0x00065492) aid_size_side_button

0xbc3c,	// (0x000654ab) grid_sctrl_middle_pane_ParamLimits

0xbc3c,	// (0x000654ab) grid_sctrl_middle_pane

0x1210,	// (0x0005aa7f) sctrl_sk_bottom_pane

0x1221,	// (0x0005aa90) sctrl_sk_top_pane

0x1233,	// (0x0005aaa2) aid_touch_sctrl_top

0x1240,	// (0x0005aaaf) bg_sctrl_sk_pane_ParamLimits

0x1240,	// (0x0005aaaf) bg_sctrl_sk_pane

0x124e,	// (0x0005aabd) sctrl_sk_top_pane_g1

0x125b,	// (0x0005aaca) sctrl_sk_top_pane_t1

0x1233,	// (0x0005aaa2) aid_touch_sctrl_bottom

0x1240,	// (0x0005aaaf) bg_sctrl_sk_pane_cp_ParamLimits

0x1240,	// (0x0005aaaf) bg_sctrl_sk_pane_cp

0x1276,	// (0x0005aae5) sctrl_sk_bottom_pane_g1

0x125b,	// (0x0005aaca) sctrl_sk_bottom_pane_t1

0xbc56,	// (0x000654c5) cell_sctrl_middle_pane_ParamLimits

0xbc56,	// (0x000654c5) cell_sctrl_middle_pane

0xbc69,	// (0x000654d8) aid_touch_sctrl_middle_ParamLimits

0xbc69,	// (0x000654d8) aid_touch_sctrl_middle

0xbc76,	// (0x000654e5) bg_sctrl_middle_pane_ParamLimits

0xbc76,	// (0x000654e5) bg_sctrl_middle_pane

0x18f9,	// (0x0005b168) cell_sctrl_middle_pane_g1_ParamLimits

0x18f9,	// (0x0005b168) cell_sctrl_middle_pane_g1

0xbc84,	// (0x000654f3) cell_sctrl_middle_pane_g2_ParamLimits

0xbc84,	// (0x000654f3) cell_sctrl_middle_pane_g2

0x0001,

0xfd22,	// (0x00069591) cell_sctrl_middle_pane_g_ParamLimits

0xfd22,	// (0x00069591) cell_sctrl_middle_pane_g

0x2546,	// (0x0005bdb5) bg_sctrl_middle_pane_g1

0x254e,	// (0x0005bdbd) bg_sctrl_middle_pane_g2

0x2556,	// (0x0005bdc5) bg_sctrl_middle_pane_g3

0x255e,	// (0x0005bdcd) bg_sctrl_middle_pane_g4

0x2566,	// (0x0005bdd5) bg_sctrl_middle_pane_g5

0x256e,	// (0x0005bddd) bg_sctrl_middle_pane_g6

0x2576,	// (0x0005bde5) bg_sctrl_middle_pane_g7

0x257e,	// (0x0005bded) bg_sctrl_middle_pane_g8

0x0007,

0xfd27,	// (0x00069596) bg_sctrl_middle_pane_g

0x2586,	// (0x0005bdf5) bg_sctrl_middle_pane_g8_copy1

0x2546,	// (0x0005bdb5) bg_sctrl_sk_pane_g1

0x2556,	// (0x0005bdc5) bg_sctrl_sk_pane_g2

0x254e,	// (0x0005bdbd) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x000690db) bg_sctrl_sk_pane_g

0x8e3a,	// (0x000626a9) aid_size_touch_scroll_bar

0x2566,	// (0x0005bdd5) bg_sctrl_sk_pane_g4

0x255e,	// (0x0005bdcd) bg_sctrl_sk_pane_g5

0x256e,	// (0x0005bddd) bg_sctrl_sk_pane_g6

0x2576,	// (0x0005bde5) bg_sctrl_sk_pane_g7

0x2586,	// (0x0005bdf5) bg_sctrl_sk_pane_g8

0x257e,	// (0x0005bded) bg_sctrl_sk_pane_g9

0x01f3,	// (0x00059a62) popup_fep_china_hwr2_fs_candidate_window

0xb043,	// (0x000648b2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb043,	// (0x000648b2) popup_fep_china_hwr2_fs_control_window

0x0f2d,	// (0x0005a79c) sctrl_sk_top_pane_g2

0x0001,

0xfd1d,	// (0x0006958c) sctrl_sk_top_pane_g

0xd39a,	// (0x00066c09) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd39a,	// (0x00066c09) aid_fep_china_hwr2_fs_cell

0xd3b0,	// (0x00066c1f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd3b0,	// (0x00066c1f) bg_popup_fep_shadow_pane_cp4

0xd3c7,	// (0x00066c36) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd3c7,	// (0x00066c36) bg_popup_fep_shadow_pane_cp5

0xd3d9,	// (0x00066c48) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd3d9,	// (0x00066c48) popup_fep_china_hwr2_fs_control_bar_grid

0xd3ed,	// (0x00066c5c) popup_fep_china_hwr2_fs_control_funtion_grid

0x688a,	// (0x000600f9) aid_fep_china_hwr2_fs_candi_cell

0x534b,	// (0x0005ebba) bg_popup_fep_shadow_pane_cp6

0x6894,	// (0x00060103) popup_fep_china_hwr2_fs_candidate_grid

0xd3f5,	// (0x00066c64) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3f5,	// (0x00066c64) cell_fep_china_hwr2_fs_funtion_grid

0x4e0a,	// (0x0005e679) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x68b6,	// (0x00060125) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x68b6,	// (0x00060125) cell_fep_china_hwr2_fs_funtion_grid_g1

0x68c4,	// (0x00060133) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x68c4,	// (0x00060133) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd38,	// (0x000695a7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd38,	// (0x000695a7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd40d,	// (0x00066c7c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd40d,	// (0x00066c7c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd422,	// (0x00066c91) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd422,	// (0x00066c91) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3d,	// (0x000695ac) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3d,	// (0x000695ac) cell_fep_china_hwr2_fs_funtion_grid_t

0x690b,	// (0x0006017a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6913,	// (0x00060182) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x691b,	// (0x0006018a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd42,	// (0x000695b1) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6923,	// (0x00060192) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6923,	// (0x00060192) cell_fep_china_hwr2_fs_candidate_grid

0x6942,	// (0x000601b1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x694a,	// (0x000601b9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4e0a,	// (0x0005e679) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4e0a,	// (0x0005e679) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x000693c5) cell_fep_china_hwr2_fs_candidate_grid_g

0x6952,	// (0x000601c1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2116,	// (0x0005b985) clock_nsta_pane_cp_24_ParamLimits

0x2116,	// (0x0005b985) clock_nsta_pane_cp_24

0x2196,	// (0x0005ba05) indicator_nsta_pane_cp_24_ParamLimits

0x2196,	// (0x0005ba05) indicator_nsta_pane_cp_24

0x32a1,	// (0x0005cb10) heading_pane_g1

0x0001,

0xf8d1,	// (0x00069140) heading_pane_g

0x3ee5,	// (0x0005d754) grid_sct_catagory_button_pane

0x3f17,	// (0x0005d786) scroll_pane_cp5_ParamLimits

0x4a56,	// (0x0005e2c5) button_value_adjust_pane_cp5_ParamLimits

0x4a56,	// (0x0005e2c5) button_value_adjust_pane_cp5

0x4b3b,	// (0x0005e3aa) form2_midp_time_pane_ParamLimits

0x6960,	// (0x000601cf) cell_sct_catagory_button_pane_ParamLimits

0x6960,	// (0x000601cf) cell_sct_catagory_button_pane

0x4dcf,	// (0x0005e63e) bg_button_pane_cp01_ParamLimits

0x4dcf,	// (0x0005e63e) bg_button_pane_cp01

0x4e0a,	// (0x0005e679) cell_sct_catagory_button_pane_g1

0xb60c,	// (0x00064e7b) popup_tb_extension_window

0xd43e,	// (0x00066cad) aid_size_cell_ext_ParamLimits

0xd43e,	// (0x00066cad) aid_size_cell_ext

0x8c7c,	// (0x000624eb) bg_tb_trans_pane_cp1_ParamLimits

0x8c7c,	// (0x000624eb) bg_tb_trans_pane_cp1

0xd464,	// (0x00066cd3) grid_tb_ext_pane_ParamLimits

0xd464,	// (0x00066cd3) grid_tb_ext_pane

0xd4a4,	// (0x00066d13) cell_tb_ext_pane_ParamLimits

0xd4a4,	// (0x00066d13) cell_tb_ext_pane

0xd4cc,	// (0x00066d3b) cell_tb_ext_pane_g1_ParamLimits

0xd4cc,	// (0x00066d3b) cell_tb_ext_pane_g1

0x69f6,	// (0x00060265) cell_tb_ext_pane_t1

0x54ee,	// (0x0005ed5d) list_highlight_pane_cp11_ParamLimits

0x54ee,	// (0x0005ed5d) list_highlight_pane_cp11

0xef51,	// (0x000687c0) popup_uni_indicator_window_ParamLimits

0xef51,	// (0x000687c0) popup_uni_indicator_window

0x8f01,	// (0x00062770) bg_popup_sub_pane_cp14

0x6a11,	// (0x00060280) list_uniindi_pane

0x6a1d,	// (0x0006028c) uniindi_top_pane

0x54ee,	// (0x0005ed5d) bg_uniindi_top_pane

0x6a3e,	// (0x000602ad) uniindi_top_pane_g1

0x6a54,	// (0x000602c3) uniindi_top_pane_g2

0x0003,

0xfd49,	// (0x000695b8) uniindi_top_pane_g

0x6a7e,	// (0x000602ed) uniindi_top_pane_t1

0x6aaa,	// (0x00060319) list_single_uniindi_pane_ParamLimits

0x6aaa,	// (0x00060319) list_single_uniindi_pane

0x4e0a,	// (0x0005e679) bg_uniindi_top_pane_g1

0x6abc,	// (0x0006032b) list_single_uniindi_pane_g1

0x6acf,	// (0x0006033e) list_single_uniindi_pane_t1

0xee38,	// (0x000686a7) control_bg_pane

0x6af4,	// (0x00060363) bg_sctrl_sk_pane_cp1

0x6afd,	// (0x0006036c) bg_sctrl_sk_pane_cp2

0x6b06,	// (0x00060375) control_bg_pane_g1

0x6b0f,	// (0x0006037e) control_bg_pane_g2

0x0001,

0xfd52,	// (0x000695c1) control_bg_pane_g

0x4877,	// (0x0005e0e6) cell_indicator_nsta_pane_g1_ParamLimits

0xca28,	// (0x00066297) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00069329) cell_indicator_nsta_pane_g_ParamLimits

0xe395,	// (0x00067c04) form2_midp_time_pane_t1_ParamLimits

0x0cb2,	// (0x0005a521) main_idle_act4_pane_ParamLimits

0x0cb2,	// (0x0005a521) main_idle_act4_pane

0xb60c,	// (0x00064e7b) popup_tb_extension_window_ParamLimits

0xd48c,	// (0x00066cfb) tb_ext_find_pane_ParamLimits

0xd48c,	// (0x00066cfb) tb_ext_find_pane

0x6b18,	// (0x00060387) ai_gene_pane_1_cp1

0x1dff,	// (0x0005b66e) ai_gene_pane_2_cp1

0x6b20,	// (0x0006038f) list_single_idle_plugin_calendar_pane

0x6b29,	// (0x00060398) list_single_idle_plugin_notification_pane

0x6b32,	// (0x000603a1) list_single_idle_plugin_player_pane

0xd4e9,	// (0x00066d58) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4e9,	// (0x00066d58) list_single_idle_plugin_shortcut_pane

0xd511,	// (0x00066d80) main_idle_act4_pane_t1

0xd529,	// (0x00066d98) main_idle_act4_pane_t2

0x0001,

0xfd57,	// (0x000695c6) main_idle_act4_pane_t

0xd541,	// (0x00066db0) middle_sk_idle_act4_pane_ParamLimits

0xd541,	// (0x00066db0) middle_sk_idle_act4_pane

0xd55d,	// (0x00066dcc) popup_clock_digital_analogue_window_cp2

0xd584,	// (0x00066df3) shortcut_wheel_idle_act4_pane_ParamLimits

0xd584,	// (0x00066df3) shortcut_wheel_idle_act4_pane

0x4e0a,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g1

0x4e0a,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g2

0x4e0a,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g3

0x4e0a,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g4

0x4e0a,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g5

0x6bc5,	// (0x00060434) shortcut_wheel_idle_act4_pane_g6

0x6bcd,	// (0x0006043c) shortcut_wheel_idle_act4_pane_g7

0x6bd5,	// (0x00060444) shortcut_wheel_idle_act4_pane_g8

0x6bdd,	// (0x0006044c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5c,	// (0x000695cb) shortcut_wheel_idle_act4_pane_g

0xd601,	// (0x00066e70) middle_sk_idle_act4_pane_g1_ParamLimits

0xd601,	// (0x00066e70) middle_sk_idle_act4_pane_g1

0xd60f,	// (0x00066e7e) middle_sk_idle_act4_pane_g2_ParamLimits

0xd60f,	// (0x00066e7e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7f,	// (0x000695ee) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7f,	// (0x000695ee) middle_sk_idle_act4_pane_g

0xd627,	// (0x00066e96) middle_sk_idle_act4_pane_t1_ParamLimits

0xd627,	// (0x00066e96) middle_sk_idle_act4_pane_t1

0xd656,	// (0x00066ec5) grid_ai_shortcut_pane_ParamLimits

0xd656,	// (0x00066ec5) grid_ai_shortcut_pane

0xd673,	// (0x00066ee2) list_highlight_pane_cp16_ParamLimits

0xd673,	// (0x00066ee2) list_highlight_pane_cp16

0xd680,	// (0x00066eef) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd680,	// (0x00066eef) list_single_idle_plugin_shortcut_pane_g1

0xd68c,	// (0x00066efb) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd68c,	// (0x00066efb) list_single_idle_plugin_shortcut_pane_g2

0xd6aa,	// (0x00066f19) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6aa,	// (0x00066f19) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd84,	// (0x000695f3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd84,	// (0x000695f3) list_single_idle_plugin_shortcut_pane_g

0xd6bf,	// (0x00066f2e) cell_ai_shortcut_pane_ParamLimits

0xd6bf,	// (0x00066f2e) cell_ai_shortcut_pane

0xd6d5,	// (0x00066f44) cell_ai_shortcut_pane_g1_ParamLimits

0xd6d5,	// (0x00066f44) cell_ai_shortcut_pane_g1

0x6b18,	// (0x00060387) ai_gene_pane_1_cp2

0x6d0e,	// (0x0006057d) ai_gene_pane_2_cp2

0x6d16,	// (0x00060585) list_highlight_pane_cp15

0x6d1f,	// (0x0006058e) list_single_idle_plugin_calendar_pane_g1

0x6d16,	// (0x00060585) list_highlight_pane_cp17

0x6d27,	// (0x00060596) list_single_idle_plugin_calendar_pane_g1_copy1

0x6d2f,	// (0x0006059e) list_single_idle_plugin_player_pane_g1

0x414c,	// (0x0005d9bb) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8b,	// (0x000695fa) list_single_idle_plugin_player_pane_g

0x6d37,	// (0x000605a6) list_single_idle_plugin_player_pane_t1

0x6d45,	// (0x000605b4) list_single_idle_plugin_player_pane_t2

0x6d53,	// (0x000605c2) list_single_idle_plugin_player_pane_t3

0x6d61,	// (0x000605d0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd90,	// (0x000695ff) list_single_idle_plugin_player_pane_t

0x6d6f,	// (0x000605de) wait_bar_pane_cp15

0x6d77,	// (0x000605e6) grid_ai_notification_pane

0x414c,	// (0x0005d9bb) list_single_idle_plugin_notification_pane_g1

0xd6f7,	// (0x00066f66) cell_ai_notification_pane_ParamLimits

0xd6f7,	// (0x00066f66) cell_ai_notification_pane

0x6d8d,	// (0x000605fc) cell_ai_notification_pane_g1

0x6d95,	// (0x00060604) cell_ai_notification_pane_t1

0xd704,	// (0x00066f73) tb_ext_find_button_pane

0xd70c,	// (0x00066f7b) tb_ext_find_pane_g1

0xd714,	// (0x00066f83) tb_ext_find_pane_t1

0xde71,	// (0x000676e0) tb_ext_find_button_pane_g1

0x6dc1,	// (0x00060630) tb_ext_find_button_pane_g2

0x0001,

0xfd99,	// (0x00069608) tb_ext_find_button_pane_g

0xd511,	// (0x00066d80) main_idle_act4_pane_t1_ParamLimits

0xd529,	// (0x00066d98) main_idle_act4_pane_t2_ParamLimits

0xfd57,	// (0x000695c6) main_idle_act4_pane_t_ParamLimits

0xd55d,	// (0x00066dcc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd574,	// (0x00066de3) sat_plugin_idle_act4_pane_ParamLimits

0xd574,	// (0x00066de3) sat_plugin_idle_act4_pane

0xd722,	// (0x00066f91) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd722,	// (0x00066f91) sat_plugin_idle_act4_pane_t1

0xd73a,	// (0x00066fa9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd73a,	// (0x00066fa9) sat_plugin_idle_act4_pane_t2

0xd752,	// (0x00066fc1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd752,	// (0x00066fc1) sat_plugin_idle_act4_pane_t3

0xd76a,	// (0x00066fd9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd76a,	// (0x00066fd9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9e,	// (0x0006960d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9e,	// (0x0006960d) sat_plugin_idle_act4_pane_t

0xeefd,	// (0x0006876c) popup_battery_window_ParamLimits

0xeefd,	// (0x0006876c) popup_battery_window

0x54ee,	// (0x0005ed5d) bg_popup_sub_pane_cp25_ParamLimits

0x54ee,	// (0x0005ed5d) bg_popup_sub_pane_cp25

0x6e16,	// (0x00060685) popup_battery_window_g1_ParamLimits

0x6e16,	// (0x00060685) popup_battery_window_g1

0x6e22,	// (0x00060691) popup_battery_window_t1_ParamLimits

0x6e22,	// (0x00060691) popup_battery_window_t1

0x6e34,	// (0x000606a3) popup_battery_window_t2_ParamLimits

0x6e34,	// (0x000606a3) popup_battery_window_t2

0x0001,

0xfda7,	// (0x00069616) popup_battery_window_t_ParamLimits

0xfda7,	// (0x00069616) popup_battery_window_t

0xad5a,	// (0x000645c9) midp_canvas_pane_ParamLimits

0xadb5,	// (0x00064624) midp_keypad_pane_ParamLimits

0xadb5,	// (0x00064624) midp_keypad_pane

0x200e,	// (0x0005b87d) main_midp_pane_ParamLimits

0x4903,	// (0x0005e172) signal_pane_g2_cp_ParamLimits

0xd782,	// (0x00066ff1) aid_size_cell_midp_keypad_ParamLimits

0xd782,	// (0x00066ff1) aid_size_cell_midp_keypad

0xd7a0,	// (0x0006700f) midp_keyp_game_grid_pane_ParamLimits

0xd7a0,	// (0x0006700f) midp_keyp_game_grid_pane

0xd7c7,	// (0x00067036) midp_keyp_rocker_pane_ParamLimits

0xd7c7,	// (0x00067036) midp_keyp_rocker_pane

0xd806,	// (0x00067075) midp_keyp_sk_left_pane_ParamLimits

0xd806,	// (0x00067075) midp_keyp_sk_left_pane

0xd85a,	// (0x000670c9) midp_keyp_sk_right_pane_ParamLimits

0xd85a,	// (0x000670c9) midp_keyp_sk_right_pane

0x534b,	// (0x0005ebba) bg_button_pane_cp03

0xd8ae,	// (0x0006711d) midp_keyp_sk_left_pane_g1

0x534b,	// (0x0005ebba) bg_button_pane_cp04

0xd8ae,	// (0x0006711d) midp_keyp_sk_right_pane_g1

0x4e0a,	// (0x0005e679) midp_keyp_rocker_pane_g1

0xd8b7,	// (0x00067126) keyp_game_cell_pane_ParamLimits

0xd8b7,	// (0x00067126) keyp_game_cell_pane

0x534b,	// (0x0005ebba) bg_button_pane_cp02

0xd8dd,	// (0x0006714c) keyp_game_cell_pane_g1

0x9ee0,	// (0x0006374f) popup_fep_vkb2_window_ParamLimits

0x9ee0,	// (0x0006374f) popup_fep_vkb2_window

0xbc90,	// (0x000654ff) aid_size_cell_vkb2_ParamLimits

0xbc90,	// (0x000654ff) aid_size_cell_vkb2

0xbcc6,	// (0x00065535) popup_fep_vkb2_window_g1_ParamLimits

0xbcc6,	// (0x00065535) popup_fep_vkb2_window_g1

0xbd16,	// (0x00065585) vkb2_area_bottom_pane_ParamLimits

0xbd16,	// (0x00065585) vkb2_area_bottom_pane

0xbd72,	// (0x000655e1) vkb2_area_keypad_pane_ParamLimits

0xbd72,	// (0x000655e1) vkb2_area_keypad_pane

0xbdc0,	// (0x0006562f) vkb2_area_top_pane_ParamLimits

0xbdc0,	// (0x0006562f) vkb2_area_top_pane

0xbe46,	// (0x000656b5) vkb2_top_entry_pane_ParamLimits

0xbe46,	// (0x000656b5) vkb2_top_entry_pane

0xbe73,	// (0x000656e2) vkb2_top_grid_left_pane_ParamLimits

0xbe73,	// (0x000656e2) vkb2_top_grid_left_pane

0xbe93,	// (0x00065702) vkb2_top_grid_right_pane_ParamLimits

0xbe93,	// (0x00065702) vkb2_top_grid_right_pane

0x14f0,	// (0x0005ad5f) vkb2_cell_keypad_pane_ParamLimits

0x14f0,	// (0x0005ad5f) vkb2_cell_keypad_pane

0xbed9,	// (0x00065748) vkb2_area_bottom_grid_pane_ParamLimits

0xbed9,	// (0x00065748) vkb2_area_bottom_grid_pane

0xbf03,	// (0x00065772) vkb2_area_bottom_pane_g1_ParamLimits

0xbf03,	// (0x00065772) vkb2_area_bottom_pane_g1

0xbf29,	// (0x00065798) vkb2_area_bottom_pane_g2_ParamLimits

0xbf29,	// (0x00065798) vkb2_area_bottom_pane_g2

0xbf5a,	// (0x000657c9) vkb2_area_bottom_pane_g3_ParamLimits

0xbf5a,	// (0x000657c9) vkb2_area_bottom_pane_g3

0x0002,

0xfdac,	// (0x0006961b) vkb2_area_bottom_pane_g_ParamLimits

0xfdac,	// (0x0006961b) vkb2_area_bottom_pane_g

0x169a,	// (0x0005af09) vkb2_top_cell_left_pane_ParamLimits

0x169a,	// (0x0005af09) vkb2_top_cell_left_pane

0xd8e6,	// (0x00067155) vkb2_top_entry_pane_g1_ParamLimits

0xd8e6,	// (0x00067155) vkb2_top_entry_pane_g1

0xd8f4,	// (0x00067163) vkb2_top_entry_pane_t1_ParamLimits

0xd8f4,	// (0x00067163) vkb2_top_entry_pane_t1

0x703a,	// (0x000608a9) vkb2_top_entry_pane_t2_ParamLimits

0x703a,	// (0x000608a9) vkb2_top_entry_pane_t2

0x706c,	// (0x000608db) vkb2_top_entry_pane_t3_ParamLimits

0x706c,	// (0x000608db) vkb2_top_entry_pane_t3

0x0002,

0xfdb3,	// (0x00069622) vkb2_top_entry_pane_t_ParamLimits

0xfdb3,	// (0x00069622) vkb2_top_entry_pane_t

0xbfc4,	// (0x00065833) vkb2_top_grid_right_pane_g1_ParamLimits

0xbfc4,	// (0x00065833) vkb2_top_grid_right_pane_g1

0x16fd,	// (0x0005af6c) vkb2_top_grid_right_pane_g2_ParamLimits

0x16fd,	// (0x0005af6c) vkb2_top_grid_right_pane_g2

0x1715,	// (0x0005af84) vkb2_top_grid_right_pane_g3_ParamLimits

0x1715,	// (0x0005af84) vkb2_top_grid_right_pane_g3

0xbfda,	// (0x00065849) vkb2_top_grid_right_pane_g4_ParamLimits

0xbfda,	// (0x00065849) vkb2_top_grid_right_pane_g4

0x0003,

0xfdba,	// (0x00069629) vkb2_top_grid_right_pane_g_ParamLimits

0xfdba,	// (0x00069629) vkb2_top_grid_right_pane_g

0x1743,	// (0x0005afb2) vkb2_top_cell_left_pane_g1

0x175a,	// (0x0005afc9) vkb2_cell_keypad_pane_g1_ParamLimits

0x175a,	// (0x0005afc9) vkb2_cell_keypad_pane_g1

0x7090,	// (0x000608ff) vkb2_cell_keypad_pane_t1_ParamLimits

0x7090,	// (0x000608ff) vkb2_cell_keypad_pane_t1

0x1768,	// (0x0005afd7) vkb2_cell_bottom_grid_pane_ParamLimits

0x1768,	// (0x0005afd7) vkb2_cell_bottom_grid_pane

0x17a1,	// (0x0005b010) vkb2_cell_bottom_grid_pane_g1

0xd5a5,	// (0x00066e14) aid_call2_pane_cp02

0xd5ad,	// (0x00066e1c) aid_call_pane_cp02

0xd5b5,	// (0x00066e24) clock_digital_number_pane_cp10

0xd5bd,	// (0x00066e2c) clock_digital_number_pane_cp11

0xd5c5,	// (0x00066e34) clock_digital_number_pane_cp12

0xd5cd,	// (0x00066e3c) clock_digital_number_pane_cp13

0xd5d5,	// (0x00066e44) clock_digital_separator_pane_cp10

0xde71,	// (0x000676e0) popup_clock_digital_analogue_window_cp2_g1

0xde71,	// (0x000676e0) popup_clock_digital_analogue_window_cp2_g2

0xd5dd,	// (0x00066e4c) popup_clock_digital_analogue_window_cp2_g3

0xde71,	// (0x000676e0) popup_clock_digital_analogue_window_cp2_g4

0xd5dd,	// (0x00066e4c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6f,	// (0x000695de) popup_clock_digital_analogue_window_cp2_g

0xd5e5,	// (0x00066e54) popup_clock_digital_analogue_window_cp2_t1

0xd5f3,	// (0x00066e62) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7a,	// (0x000695e9) popup_clock_digital_analogue_window_cp2_t

0x4e0a,	// (0x0005e679) clock_digital_number_pane_cp10_g1

0x4e0a,	// (0x0005e679) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x000693c5) clock_digital_number_pane_cp10_g

0x4e0a,	// (0x0005e679) clock_digital_separator_pane_cp10_g1

0x4e0a,	// (0x0005e679) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x000693c5) clock_digital_separator_pane_cp10_g

0x6a60,	// (0x000602cf) uniindi_top_pane_g3

0x6a71,	// (0x000602e0) uniindi_top_pane_g4

0x157b,	// (0x0005adea) vkb2_row_keypad_pane_ParamLimits

0x157b,	// (0x0005adea) vkb2_row_keypad_pane

0x17bd,	// (0x0005b02c) vkb2_cell_t_keypad_pane_ParamLimits

0x17bd,	// (0x0005b02c) vkb2_cell_t_keypad_pane

0x17cd,	// (0x0005b03c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17cd,	// (0x0005b03c) vkb2_cell_t_keypad_pane_cp08

0x17e2,	// (0x0005b051) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17e2,	// (0x0005b051) vkb2_cell_t_keypad_pane_cp09

0x17f6,	// (0x0005b065) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17f6,	// (0x0005b065) vkb2_cell_t_keypad_pane_cp01

0x1807,	// (0x0005b076) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1807,	// (0x0005b076) vkb2_cell_t_keypad_pane_cp02

0x1818,	// (0x0005b087) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1818,	// (0x0005b087) vkb2_cell_t_keypad_pane_cp03

0x1829,	// (0x0005b098) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1829,	// (0x0005b098) vkb2_cell_t_keypad_pane_cp04

0x183a,	// (0x0005b0a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x183a,	// (0x0005b0a9) vkb2_cell_t_keypad_pane_cp05

0x184b,	// (0x0005b0ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x184b,	// (0x0005b0ba) vkb2_cell_t_keypad_pane_cp06

0x185e,	// (0x0005b0cd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x185e,	// (0x0005b0cd) vkb2_cell_t_keypad_pane_cp07

0x1873,	// (0x0005b0e2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1873,	// (0x0005b0e2) vkb2_cell_t_keypad_pane_cp10

0x0f2d,	// (0x0005a79c) vkb2_cell_t_keypad_pane_g1

0x70a7,	// (0x00060916) vkb2_cell_t_keypad_pane_t1

0xee38,	// (0x000686a7) popup_grid_graphic2_window

0xd92d,	// (0x0006719c) aid_size_cell_graphic2_ParamLimits

0xd92d,	// (0x0006719c) aid_size_cell_graphic2

0xd96b,	// (0x000671da) bg_popup_window_pane_cp21_ParamLimits

0xd96b,	// (0x000671da) bg_popup_window_pane_cp21

0xd979,	// (0x000671e8) graphic2_pages_pane_ParamLimits

0xd979,	// (0x000671e8) graphic2_pages_pane

0xd9d1,	// (0x00067240) grid_graphic2_control_pane_ParamLimits

0xd9d1,	// (0x00067240) grid_graphic2_control_pane

0xda19,	// (0x00067288) grid_graphic2_pane_ParamLimits

0xda19,	// (0x00067288) grid_graphic2_pane

0xdaa4,	// (0x00067313) cell_graphic2_pane

0xee38,	// (0x000686a7) main_comp_mode_pane

0x62d1,	// (0x0005fb40) list_ai3_gene_pane_ParamLimits

0xd2e2,	// (0x00066b51) bg_popup_window_pane_cp19_ParamLimits

0x66a5,	// (0x0005ff14) bg_touch_area_indi_pane_ParamLimits

0x66a5,	// (0x0005ff14) bg_touch_area_indi_pane

0x66bb,	// (0x0005ff2a) bg_touch_area_indi_pane_cp01_ParamLimits

0x66bb,	// (0x0005ff2a) bg_touch_area_indi_pane_cp01

0x66d3,	// (0x0005ff42) bg_touch_area_indi_pane_cp02_ParamLimits

0x66d3,	// (0x0005ff42) bg_touch_area_indi_pane_cp02

0x66ed,	// (0x0005ff5c) bg_touch_area_indi_pane_cp03_ParamLimits

0x66ed,	// (0x0005ff5c) bg_touch_area_indi_pane_cp03

0x6707,	// (0x0005ff76) popup_slider_window_g1_ParamLimits

0x6723,	// (0x0005ff92) popup_slider_window_g2_ParamLimits

0x673f,	// (0x0005ffae) popup_slider_window_g3_ParamLimits

0xfd04,	// (0x00069573) popup_slider_window_g_ParamLimits

0x679b,	// (0x0006000a) popup_slider_window_t1_ParamLimits

0x680f,	// (0x0006007e) small_volume_slider_vertical_pane_ParamLimits

0xdaa4,	// (0x00067313) cell_graphic2_pane_ParamLimits

0xdb07,	// (0x00067376) bg_button_pane_cp10_ParamLimits

0xdb07,	// (0x00067376) bg_button_pane_cp10

0xdb1a,	// (0x00067389) bg_button_pane_cp11_ParamLimits

0xdb1a,	// (0x00067389) bg_button_pane_cp11

0xdb2d,	// (0x0006739c) graphic2_pages_pane_g1_ParamLimits

0xdb2d,	// (0x0006739c) graphic2_pages_pane_g1

0xdb48,	// (0x000673b7) graphic2_pages_pane_g2_ParamLimits

0xdb48,	// (0x000673b7) graphic2_pages_pane_g2

0x0001,

0xfdc8,	// (0x00069637) graphic2_pages_pane_g_ParamLimits

0xfdc8,	// (0x00069637) graphic2_pages_pane_g

0xdb60,	// (0x000673cf) graphic2_pages_pane_t1_ParamLimits

0xdb60,	// (0x000673cf) graphic2_pages_pane_t1

0xdb78,	// (0x000673e7) cell_graphic2_control_pane_ParamLimits

0xdb78,	// (0x000673e7) cell_graphic2_control_pane

0xdbac,	// (0x0006741b) cell_graphic2_pane_g1_ParamLimits

0xdbac,	// (0x0006741b) cell_graphic2_pane_g1

0xdbb9,	// (0x00067428) cell_graphic2_pane_g2_ParamLimits

0xdbb9,	// (0x00067428) cell_graphic2_pane_g2

0xcbe4,	// (0x00066453) cell_graphic2_pane_g3_ParamLimits

0xcbe4,	// (0x00066453) cell_graphic2_pane_g3

0xdbc6,	// (0x00067435) cell_graphic2_pane_g4_ParamLimits

0xdbc6,	// (0x00067435) cell_graphic2_pane_g4

0xdbd3,	// (0x00067442) cell_graphic2_pane_g5_ParamLimits

0xdbd3,	// (0x00067442) cell_graphic2_pane_g5

0x0004,

0xfdcd,	// (0x0006963c) cell_graphic2_pane_g_ParamLimits

0xfdcd,	// (0x0006963c) cell_graphic2_pane_g

0xdbf3,	// (0x00067462) cell_graphic2_pane_t1_ParamLimits

0xdbf3,	// (0x00067462) cell_graphic2_pane_t1

0x3295,	// (0x0005cb04) grid_highlight_pane_cp11_ParamLimits

0x3295,	// (0x0005cb04) grid_highlight_pane_cp11

0x54ee,	// (0x0005ed5d) bg_button_pane_cp05

0xdc28,	// (0x00067497) cell_graphic2_control_pane_g1

0x4e0a,	// (0x0005e679) bg_touch_area_indi_pane_g1

0x7381,	// (0x00060bf0) aid_cmod_rocker_key_size

0x738b,	// (0x00060bfa) aid_cmode_itu_key_size

0x7395,	// (0x00060c04) main_cmode_video_pane

0x739f,	// (0x00060c0e) main_comp_mode_itu_pane

0x73ab,	// (0x00060c1a) main_comp_mode_rocker_pane

0x73b7,	// (0x00060c26) cell_cmode_rocker_pane_ParamLimits

0x73b7,	// (0x00060c26) cell_cmode_rocker_pane

0x73cb,	// (0x00060c3a) cell_cmode_itu_pane_ParamLimits

0x73cb,	// (0x00060c3a) cell_cmode_itu_pane

0x8f01,	// (0x00062770) bg_button_pane_cp06_ParamLimits

0x8f01,	// (0x00062770) bg_button_pane_cp06

0x5085,	// (0x0005e8f4) cell_cmode_rocker_pane_g1_ParamLimits

0x5085,	// (0x0005e8f4) cell_cmode_rocker_pane_g1

0x68b6,	// (0x00060125) cell_cmode_rocker_pane_g2_ParamLimits

0x68b6,	// (0x00060125) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x0006964c) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x0006964c) cell_cmode_rocker_pane_g

0x534b,	// (0x0005ebba) bg_button_pane_cp07

0x73e2,	// (0x00060c51) cell_cmode_itu_pane_g1

0x73eb,	// (0x00060c5a) cell_cmode_itu_pane_t1

0x73f9,	// (0x00060c68) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x00069651) cell_cmode_itu_pane_t

0x6ae4,	// (0x00060353) aid_touch_ctrl_left

0x6aec,	// (0x0006035b) aid_touch_ctrl_right

0x534b,	// (0x0005ebba) compa_mode_pane

0xdc4e,	// (0x000674bd) aid_cmod_rocker_key_size_cp

0xdc58,	// (0x000674c7) aid_cmode_itu_key_size_cp

0x741b,	// (0x00060c8a) compa_mode_pane_g1

0x7423,	// (0x00060c92) compa_mode_pane_g2

0x742b,	// (0x00060c9a) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x00069656) compa_mode_pane_g

0xdc62,	// (0x000674d1) main_comp_mode_itu_pane_cp

0xdc6a,	// (0x000674d9) main_comp_mode_rocker_pane_cp

0xdc72,	// (0x000674e1) cell_cmode_itu_pane_cp_ParamLimits

0xdc72,	// (0x000674e1) cell_cmode_itu_pane_cp

0xdc87,	// (0x000674f6) cell_cmode_rocker_pane_cp_ParamLimits

0xdc87,	// (0x000674f6) cell_cmode_rocker_pane_cp

0x8f01,	// (0x00062770) bg_button_pane_cp06_cp_ParamLimits

0x8f01,	// (0x00062770) bg_button_pane_cp06_cp

0x5085,	// (0x0005e8f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5085,	// (0x0005e8f4) cell_cmode_rocker_pane_g1_cp

0x4e0a,	// (0x0005e679) cell_cmode_rocker_pane_g2_cp

0x534b,	// (0x0005ebba) bg_button_pane_cp07_cp

0xdc99,	// (0x00067508) cell_cmode_itu_pane_g1_cp

0xdca2,	// (0x00067511) cell_cmode_itu_pane_t1_cp

0xdca2,	// (0x00067511) cell_cmode_itu_pane_t2_cp

0xc84b,	// (0x000660ba) settings_code_pane_cp2

0x53ad,	// (0x0005ec1c) bg_popup_window_pane_cp3_ParamLimits

0x8c0d,	// (0x0006247c) heading_pane_cp3_ParamLimits

0x8c19,	// (0x00062488) listscroll_popup_graphic_pane_ParamLimits

0x0cc0,	// (0x0005a52f) fep_hwr_aid_pane_ParamLimits

0x1233,	// (0x0005aaa2) aid_touch_sctrl_top_ParamLimits

0x124e,	// (0x0005aabd) sctrl_sk_top_pane_g1_ParamLimits

0x0f2d,	// (0x0005a79c) sctrl_sk_top_pane_g2_ParamLimits

0xfd1d,	// (0x0006958c) sctrl_sk_top_pane_g_ParamLimits

0x125b,	// (0x0005aaca) sctrl_sk_top_pane_t1_ParamLimits

0x1233,	// (0x0005aaa2) aid_touch_sctrl_bottom_ParamLimits

0x125b,	// (0x0005aaca) sctrl_sk_bottom_pane_t1_ParamLimits

0x6a2a,	// (0x00060299) aid_area_touch_clock

0xbe08,	// (0x00065677) aid_vkb2_area_top_pane_cell_ParamLimits

0xbe08,	// (0x00065677) aid_vkb2_area_top_pane_cell

0xbeb3,	// (0x00065722) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbeb3,	// (0x00065722) aid_vkb2_area_bottom_pane_cell

0x6ff2,	// (0x00060861) popup_char_count_window

0x7481,	// (0x00060cf0) popup_char_count_window_g1

0x748a,	// (0x00060cf9) popup_char_count_window_g2

0x7493,	// (0x00060d02) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x0006965d) popup_char_count_window_g

0x749c,	// (0x00060d0b) popup_char_count_window_t1

0x130c,	// (0x0005ab7b) popup_fep_char_preview_window_ParamLimits

0x130c,	// (0x0005ab7b) popup_fep_char_preview_window

0xbe28,	// (0x00065697) vkb2_top_candi_pane_ParamLimits

0xbe28,	// (0x00065697) vkb2_top_candi_pane

0xdcb0,	// (0x0006751f) cell_vkb2_top_candi_pane_ParamLimits

0xdcb0,	// (0x0006751f) cell_vkb2_top_candi_pane

0x1888,	// (0x0005b0f7) bg_popup_fep_char_preview_window_ParamLimits

0x1888,	// (0x0005b0f7) bg_popup_fep_char_preview_window

0x1896,	// (0x0005b105) popup_fep_char_preview_window_t1_ParamLimits

0x1896,	// (0x0005b105) popup_fep_char_preview_window_t1

0x74fb,	// (0x00060d6a) bg_popup_fep_char_preview_window_g1

0x7503,	// (0x00060d72) bg_popup_fep_char_preview_window_g2

0x750b,	// (0x00060d7a) bg_popup_fep_char_preview_window_g3

0x7513,	// (0x00060d82) bg_popup_fep_char_preview_window_g4

0x751b,	// (0x00060d8a) bg_popup_fep_char_preview_window_g5

0x18d0,	// (0x0005b13f) bg_popup_fep_char_preview_window_g6

0x7523,	// (0x00060d92) bg_popup_fep_char_preview_window_g7

0x752b,	// (0x00060d9a) bg_popup_fep_char_preview_window_g8

0x7533,	// (0x00060da2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x00069664) bg_popup_fep_char_preview_window_g

0x0f2d,	// (0x0005a79c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f2d,	// (0x0005a79c) cell_vkb2_top_candi_pane_g1

0x0f3b,	// (0x0005a7aa) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f3b,	// (0x0005a7aa) cell_vkb2_top_candi_pane_g2

0x6f52,	// (0x000607c1) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6f52,	// (0x000607c1) cell_vkb2_top_candi_pane_g3

0x18d8,	// (0x0005b147) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18d8,	// (0x0005b147) cell_vkb2_top_candi_pane_g4

0x5872,	// (0x0005f0e1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5872,	// (0x0005f0e1) cell_vkb2_top_candi_pane_g5

0x18f9,	// (0x0005b168) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18f9,	// (0x0005b168) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x00069677) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x00069677) cell_vkb2_top_candi_pane_g

0x1907,	// (0x0005b176) cell_vkb2_top_candi_pane_t1

0x0ad4,	// (0x0005a343) aid_size_touch_slider_mark_ParamLimits

0x0ad4,	// (0x0005a343) aid_size_touch_slider_mark

0xd9b5,	// (0x00067224) grid_graphic2_catg_pane_ParamLimits

0xd9b5,	// (0x00067224) grid_graphic2_catg_pane

0xda73,	// (0x000672e2) popup_grid_graphic2_window_t1_ParamLimits

0xda73,	// (0x000672e2) popup_grid_graphic2_window_t1

0xda89,	// (0x000672f8) popup_grid_graphic2_window_t2_ParamLimits

0xda89,	// (0x000672f8) popup_grid_graphic2_window_t2

0x0001,

0xfdc3,	// (0x00069632) popup_grid_graphic2_window_t_ParamLimits

0xfdc3,	// (0x00069632) popup_grid_graphic2_window_t

0x54ee,	// (0x0005ed5d) bg_button_pane_cp05_ParamLimits

0xdc28,	// (0x00067497) cell_graphic2_control_pane_g1_ParamLimits

0xe54d,	// (0x00067dbc) cell_graphic2_catg_pane_ParamLimits

0xe54d,	// (0x00067dbc) cell_graphic2_catg_pane

0x534b,	// (0x0005ebba) bg_button_pane_cp12

0xe55f,	// (0x00067dce) cell_graphic2_catg_pane_g1

0x69f6,	// (0x00060265) cell_tb_ext_pane_t1_ParamLimits

0x16ba,	// (0x0005af29) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16ba,	// (0x0005af29) vkb2_top_cell_right_narrow_pane

0x16d2,	// (0x0005af41) vkb2_top_cell_right_wide_pane_ParamLimits

0x16d2,	// (0x0005af41) vkb2_top_cell_right_wide_pane

0x0cb2,	// (0x0005a521) bg_vkb2_func_pane_ParamLimits

0x0cb2,	// (0x0005a521) bg_vkb2_func_pane

0x1743,	// (0x0005afb2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0cb2,	// (0x0005a521) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0cb2,	// (0x0005a521) bg_vkb2_fuc_pane_cp03

0x17a1,	// (0x0005b010) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x254e,	// (0x0005bdbd) bg_vkb2_func_pane_g1

0x2556,	// (0x0005bdc5) bg_vkb2_func_pane_g2

0x2566,	// (0x0005bdd5) bg_vkb2_func_pane_g3

0x255e,	// (0x0005bdcd) bg_vkb2_func_pane_g4

0x256e,	// (0x0005bddd) bg_vkb2_func_pane_g5

0x2576,	// (0x0005bde5) bg_vkb2_func_pane_g6

0x257e,	// (0x0005bded) bg_vkb2_func_pane_g7

0x2586,	// (0x0005bdf5) bg_vkb2_func_pane_g8

0x2546,	// (0x0005bdb5) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x00069684) bg_vkb2_func_pane_g

0x0cb2,	// (0x0005a521) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0cb2,	// (0x0005a521) bg_vkb2_fuc_pane_cp01

0x1743,	// (0x0005afb2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1743,	// (0x0005afb2) vkb2_top_cell_right_wide_pane_g1

0x0cb2,	// (0x0005a521) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0cb2,	// (0x0005a521) bg_vkb2_fuc_pane_cp02

0x17a1,	// (0x0005b010) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17a1,	// (0x0005b010) vkb2_top_cell_right_narrow_pane_g1

0xd21c,	// (0x00066a8b) aid_touch_area_decrease_ParamLimits

0xd21c,	// (0x00066a8b) aid_touch_area_decrease

0xd256,	// (0x00066ac5) aid_touch_area_increase_ParamLimits

0xd256,	// (0x00066ac5) aid_touch_area_increase

0xd27e,	// (0x00066aed) aid_touch_area_mute_ParamLimits

0xd27e,	// (0x00066aed) aid_touch_area_mute

0xd2ae,	// (0x00066b1d) aid_touch_area_slider_ParamLimits

0xd2ae,	// (0x00066b1d) aid_touch_area_slider

0xd2ee,	// (0x00066b5d) popup_slider_window_g4_ParamLimits

0xd2ee,	// (0x00066b5d) popup_slider_window_g4

0xd316,	// (0x00066b85) popup_slider_window_g5_ParamLimits

0xd316,	// (0x00066b85) popup_slider_window_g5

0xd34a,	// (0x00066bb9) popup_slider_window_g6_ParamLimits

0xd34a,	// (0x00066bb9) popup_slider_window_g6

0x67c9,	// (0x00060038) popup_slider_window_t2_ParamLimits

0x67c9,	// (0x00060038) popup_slider_window_t2

0x0001,

0xfd11,	// (0x00069580) popup_slider_window_t_ParamLimits

0xfd11,	// (0x00069580) popup_slider_window_t

0xd366,	// (0x00066bd5) slider_pane_ParamLimits

0xd366,	// (0x00066bd5) slider_pane

0x7556,	// (0x00060dc5) slider_pane_g1_ParamLimits

0x7556,	// (0x00060dc5) slider_pane_g1

0x756a,	// (0x00060dd9) slider_pane_g2_ParamLimits

0x756a,	// (0x00060dd9) slider_pane_g2

0x7580,	// (0x00060def) slider_pane_g3_ParamLimits

0x7580,	// (0x00060def) slider_pane_g3

0x0003,

0xfe28,	// (0x00069697) slider_pane_g_ParamLimits

0xfe28,	// (0x00069697) slider_pane_g

0xb658,	// (0x00064ec7) popup_tb_float_extension_window_ParamLimits

0xb658,	// (0x00064ec7) popup_tb_float_extension_window

0x75ac,	// (0x00060e1b) aid_size_cell_tb_float_ext

0x534b,	// (0x0005ebba) bg_popup_sub_window_cp28

0x75b8,	// (0x00060e27) grid_tb_float_ext_pane

0x75c4,	// (0x00060e33) cell_tb_float_ext_pane_ParamLimits

0x75c4,	// (0x00060e33) cell_tb_float_ext_pane

0x75e0,	// (0x00060e4f) cell_tb_float_ext_pane_g1

0x75e9,	// (0x00060e58) grid_highlight_pane_cp12

0xbab0,	// (0x0006531f) cell_last_hwr_side_pane_ParamLimits

0xbab0,	// (0x0006531f) cell_last_hwr_side_pane

0x4e0a,	// (0x0005e679) cell_last_hwr_side_pane_g1

0x75f2,	// (0x00060e61) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x000696a0) cell_last_hwr_side_pane_g

0xbf8f,	// (0x000657fe) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf8f,	// (0x000657fe) vkb2_area_bottom_space_btn_pane

0x0f2d,	// (0x0005a79c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x70a7,	// (0x00060916) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1907,	// (0x0005b176) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1925,	// (0x0005b194) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1925,	// (0x0005b194) vkb2_area_bottom_space_btn_pane_g1

0x195f,	// (0x0005b1ce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x195f,	// (0x0005b1ce) vkb2_area_bottom_space_btn_pane_g2

0x1995,	// (0x0005b204) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1995,	// (0x0005b204) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x000696a5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x000696a5) vkb2_area_bottom_space_btn_pane_g

0x0d77,	// (0x0005a5e6) cel_fep_hwr_func_pane_ParamLimits

0x0d77,	// (0x0005a5e6) cel_fep_hwr_func_pane

0xba85,	// (0x000652f4) cell_hwr_side_button_pane_ParamLimits

0xba85,	// (0x000652f4) cell_hwr_side_button_pane

0x6a2a,	// (0x00060299) aid_area_touch_clock_ParamLimits

0x54ee,	// (0x0005ed5d) bg_uniindi_top_pane_ParamLimits

0x6a3e,	// (0x000602ad) uniindi_top_pane_g1_ParamLimits

0x6a54,	// (0x000602c3) uniindi_top_pane_g2_ParamLimits

0x6a60,	// (0x000602cf) uniindi_top_pane_g3_ParamLimits

0x6a71,	// (0x000602e0) uniindi_top_pane_g4_ParamLimits

0xfd49,	// (0x000695b8) uniindi_top_pane_g_ParamLimits

0x6a7e,	// (0x000602ed) uniindi_top_pane_t1_ParamLimits

0x54ee,	// (0x0005ed5d) bg_vkb2_func_pane_cp01_ParamLimits

0x54ee,	// (0x0005ed5d) bg_vkb2_func_pane_cp01

0x75fb,	// (0x00060e6a) cel_fep_hwr_func_pane_g1_ParamLimits

0x75fb,	// (0x00060e6a) cel_fep_hwr_func_pane_g1

0x54ee,	// (0x0005ed5d) bg_vkb2_func_pane_cp02_ParamLimits

0x54ee,	// (0x0005ed5d) bg_vkb2_func_pane_cp02

0x75fb,	// (0x00060e6a) cell_hwr_side_button_pane_g1_ParamLimits

0x75fb,	// (0x00060e6a) cell_hwr_side_button_pane_g1

0x23bb,	// (0x0005bc2a) status_pane_g4_ParamLimits

0x23bb,	// (0x0005bc2a) status_pane_g4

0x23d5,	// (0x0005bc44) status_pane_t1

0x4ba9,	// (0x0005e418) form2_midp_gauge_slider_cont_pane

0x4bb1,	// (0x0005e420) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb2a,	// (0x00066399) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb3c,	// (0x000663ab) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00069378) form2_midp_gauge_slider_pane_t_ParamLimits

0x4be7,	// (0x0005e456) form2_midp_slider_pane_ParamLimits

0x12cc,	// (0x0005ab3b) aid_size_cell_func_vkb2_ParamLimits

0x12cc,	// (0x0005ab3b) aid_size_cell_func_vkb2

0x7598,	// (0x00060e07) slider_pane_g4_ParamLimits

0x7598,	// (0x00060e07) slider_pane_g4

0xbff0,	// (0x0006585f) form2_midp_gauge_slider_pane_t2_cp01

0xbffe,	// (0x0006586d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbffe,	// (0x0006586d) form2_midp_gauge_slider_pane_t3_cp01

0x1a0a,	// (0x0005b279) form2_midp_slider_pane_cp01

0x534b,	// (0x0005ebba) navi_smil_pane

0x7634,	// (0x00060ea3) navi_smil_pane_g1

0x763c,	// (0x00060eab) navi_smil_pane_t1

0x7609,	// (0x00060e78) form2_midp_slider_pane_g1

0x7612,	// (0x00060e81) form2_midp_slider_pane_g2

0x761a,	// (0x00060e89) form2_midp_slider_pane_g3

0x7609,	// (0x00060e78) form2_midp_slider_pane_g4

0xe568,	// (0x00067dd7) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x000696ae) form2_midp_slider_pane_g

0x19cf,	// (0x0005b23e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19cf,	// (0x0005b23e) vkb2_area_bottom_space_btn_pane_g4

0xc0c6,	// (0x00065935) lc0_navi_pane_ParamLimits

0xc0c6,	// (0x00065935) lc0_navi_pane

0xc136,	// (0x000659a5) lc0_stat_indi_pane_ParamLimits

0xc136,	// (0x000659a5) lc0_stat_indi_pane

0xc14b,	// (0x000659ba) ls0_title_pane_ParamLimits

0xc14b,	// (0x000659ba) ls0_title_pane

0x8f01,	// (0x00062770) bg_popup_sub_pane_cp14_ParamLimits

0x6a11,	// (0x00060280) list_uniindi_pane_ParamLimits

0x6a1d,	// (0x0006028c) uniindi_top_pane_ParamLimits

0x6abc,	// (0x0006032b) list_single_uniindi_pane_g1_ParamLimits

0x6acf,	// (0x0006033e) list_single_uniindi_pane_t1_ParamLimits

0xc01b,	// (0x0006588a) lc0_stat_clock_pane_ParamLimits

0xc01b,	// (0x0006588a) lc0_stat_clock_pane

0xe571,	// (0x00067de0) lc0_stat_indi_pane_g1_ParamLimits

0xe571,	// (0x00067de0) lc0_stat_indi_pane_g1

0xe57e,	// (0x00067ded) lc0_stat_indi_pane_g2_ParamLimits

0xe57e,	// (0x00067ded) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x000696b9) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x000696b9) lc0_stat_indi_pane_g

0xc028,	// (0x00065897) lc0_uni_indicator_pane_ParamLimits

0xc028,	// (0x00065897) lc0_uni_indicator_pane

0xe58b,	// (0x00067dfa) ls0_title_pane_g1_ParamLimits

0xe58b,	// (0x00067dfa) ls0_title_pane_g1

0xe59f,	// (0x00067e0e) ls0_title_pane_t1_ParamLimits

0xe59f,	// (0x00067e0e) ls0_title_pane_t1

0xc035,	// (0x000658a4) lc0_uni_indicator_pane_g1_ParamLimits

0xc035,	// (0x000658a4) lc0_uni_indicator_pane_g1

0x76ae,	// (0x00060f1d) lc0_stat_clock_pane_t1

0xee38,	// (0x000686a7) main_ai5_pane

0x76bc,	// (0x00060f2b) ai5_sk_pane_ParamLimits

0x76bc,	// (0x00060f2b) ai5_sk_pane

0xe5cd,	// (0x00067e3c) cell_ai5_widget_pane_ParamLimits

0xe5cd,	// (0x00067e3c) cell_ai5_widget_pane

0x7c65,	// (0x000614d4) aid_size_cell_widget_grid

0x7c7b,	// (0x000614ea) bg_ai5_widget_pane_ParamLimits

0x7c7b,	// (0x000614ea) bg_ai5_widget_pane

0x7ce5,	// (0x00061554) cell_ai5_widget_pane_g2

0x7cf5,	// (0x00061564) cell_ai5_widget_pane_g3

0x7d14,	// (0x00061583) cell_ai5_widget_pane_g4

0x7d20,	// (0x0006158f) cell_ai5_widget_pane_g5

0xe924,	// (0x00068193) cell_ai5_widget_pane_g6

0xe930,	// (0x0006819f) cell_ai5_widget_pane_g7

0x7d80,	// (0x000615ef) cell_ai5_widget_pane_t1_ParamLimits

0x7d80,	// (0x000615ef) cell_ai5_widget_pane_t1

0x7d9d,	// (0x0006160c) cell_ai5_widget_pane_t2_ParamLimits

0x7d9d,	// (0x0006160c) cell_ai5_widget_pane_t2

0x7db5,	// (0x00061624) cell_ai5_widget_pane_t3_ParamLimits

0x7db5,	// (0x00061624) cell_ai5_widget_pane_t3

0x7dcd,	// (0x0006163c) cell_ai5_widget_pane_t4_ParamLimits

0x7dcd,	// (0x0006163c) cell_ai5_widget_pane_t4

0x7de7,	// (0x00061656) cell_ai5_widget_pane_t5_ParamLimits

0x7de7,	// (0x00061656) cell_ai5_widget_pane_t5

0x7e06,	// (0x00061675) cell_ai5_widget_pane_t6_ParamLimits

0x7e06,	// (0x00061675) cell_ai5_widget_pane_t6

0x7e18,	// (0x00061687) cell_ai5_widget_pane_t7_ParamLimits

0x7e18,	// (0x00061687) cell_ai5_widget_pane_t7

0x7e31,	// (0x000616a0) cell_ai5_widget_pane_t8_ParamLimits

0x7e31,	// (0x000616a0) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x000696d3) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x000696d3) cell_ai5_widget_pane_t

0x7e7d,	// (0x000616ec) grid_ai5_widget_pane

0x8f01,	// (0x00062770) highlight_cell_ai5_widget_pane_ParamLimits

0x8f01,	// (0x00062770) highlight_cell_ai5_widget_pane

0xe93c,	// (0x000681ab) ai5_sk_left_pane

0xe946,	// (0x000681b5) ai5_sk_middle_pane

0xe950,	// (0x000681bf) ai5_sk_right_pane

0x7eb3,	// (0x00061722) bg_ai5_widget_pane_g1_ParamLimits

0x7eb3,	// (0x00061722) bg_ai5_widget_pane_g1

0x7ebf,	// (0x0006172e) bg_ai5_widget_pane_g2_ParamLimits

0x7ebf,	// (0x0006172e) bg_ai5_widget_pane_g2

0x7ecb,	// (0x0006173a) bg_ai5_widget_pane_g3_ParamLimits

0x7ecb,	// (0x0006173a) bg_ai5_widget_pane_g3

0x7ed7,	// (0x00061746) bg_ai5_widget_pane_g4_ParamLimits

0x7ed7,	// (0x00061746) bg_ai5_widget_pane_g4

0x7ee3,	// (0x00061752) bg_ai5_widget_pane_g5_ParamLimits

0x7ee3,	// (0x00061752) bg_ai5_widget_pane_g5

0x7eef,	// (0x0006175e) bg_ai5_widget_pane_g6_ParamLimits

0x7eef,	// (0x0006175e) bg_ai5_widget_pane_g6

0x7efb,	// (0x0006176a) bg_ai5_widget_pane_g7_ParamLimits

0x7efb,	// (0x0006176a) bg_ai5_widget_pane_g7

0x7f07,	// (0x00061776) bg_ai5_widget_pane_g8_ParamLimits

0x7f07,	// (0x00061776) bg_ai5_widget_pane_g8

0x7f13,	// (0x00061782) bg_ai5_widget_pane_g9_ParamLimits

0x7f13,	// (0x00061782) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x000696e8) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x000696e8) bg_ai5_widget_pane_g

0x7f3b,	// (0x000617aa) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f3b,	// (0x000617aa) cell_shortcut_ai5_widget_pane

0x53e9,	// (0x0005ec58) bg_cell_shortcut_ai5_widget_pane

0x7f4e,	// (0x000617bd) cell_grid_ai5_widget_pane_g1

0x7f57,	// (0x000617c6) highlight_cell_shortcut_ai5_widget_pane

0x254e,	// (0x0005bdbd) ai5_sk_left_pane_g1

0x7f5f,	// (0x000617ce) ai5_sk_left_pane_g2

0x7f67,	// (0x000617d6) ai5_sk_left_pane_g3

0x7f6f,	// (0x000617de) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x000696fb) ai5_sk_left_pane_g

0x7f77,	// (0x000617e6) ai5_sk_left_pane_t1

0x2556,	// (0x0005bdc5) ai5_sk_right_pane_g1

0x7f85,	// (0x000617f4) ai5_sk_right_pane_g2

0x7f8d,	// (0x000617fc) ai5_sk_right_pane_g3

0x7f95,	// (0x00061804) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x00069704) ai5_sk_right_pane_g

0x7f9d,	// (0x0006180c) ai5_sk_right_pane_t1

0x2556,	// (0x0005bdc5) ai5_sk_middle_pane_g1

0x254e,	// (0x0005bdbd) ai5_sk_middle_pane_g2

0x256e,	// (0x0005bddd) ai5_sk_middle_pane_g3

0x7f8d,	// (0x000617fc) ai5_sk_middle_pane_g4

0x7f67,	// (0x000617d6) ai5_sk_middle_pane_g5

0x7fab,	// (0x0006181a) ai5_sk_middle_pane_g6

0xe976,	// (0x000681e5) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x0006970d) ai5_sk_middle_pane_g

0xb729,	// (0x00064f98) aid_touch_area_size_lc0_ParamLimits

0xb729,	// (0x00064f98) aid_touch_area_size_lc0

0x0f5c,	// (0x0005a7cb) cell_hwr_candidate_pane_t1_ParamLimits

0x2072,	// (0x0005b8e1) aid_touch_navi_pane

0xc256,	// (0x00065ac5) status_dt_navi_pane_ParamLimits

0xc256,	// (0x00065ac5) status_dt_navi_pane

0xc26e,	// (0x00065add) status_dt_sta_pane_ParamLimits

0xc26e,	// (0x00065add) status_dt_sta_pane

0xe97e,	// (0x000681ed) dt_sta_controll_pane

0xe98b,	// (0x000681fa) dt_sta_indi_pane

0xe998,	// (0x00068207) dt_sta_title_pane

0x54ee,	// (0x0005ed5d) bg_dt_sta_indi_pane_ParamLimits

0x54ee,	// (0x0005ed5d) bg_dt_sta_indi_pane

0xe9aa,	// (0x00068219) dt_sta_battery_pane

0xe9b2,	// (0x00068221) dt_sta_indi_pane_g1

0xe9bb,	// (0x0006822a) dt_sta_indi_pane_g2

0xe9c4,	// (0x00068233) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x0006971c) dt_sta_indi_pane_g

0xe9cd,	// (0x0006823c) dt_sta_signal_pane

0x8f01,	// (0x00062770) bg_dt_sta_title_pane_ParamLimits

0x8f01,	// (0x00062770) bg_dt_sta_title_pane

0xe9d6,	// (0x00068245) dt_sta_title_pane_g1

0xe9de,	// (0x0006824d) dt_sta_title_pane_t1_ParamLimits

0xe9de,	// (0x0006824d) dt_sta_title_pane_t1

0x534b,	// (0x0005ebba) bg_dt_sta_control_pane

0xe9f3,	// (0x00068262) dt_sta_controll_pane_g1

0xe9fc,	// (0x0006826b) bg_dt_sta_title_pane_g1

0xea05,	// (0x00068274) bg_dt_sta_title_pane_g2

0xea0e,	// (0x0006827d) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x00069723) bg_dt_sta_title_pane_g

0x4e0a,	// (0x0005e679) bg_dt_sta_indi_pane_g1

0x8059,	// (0x000618c8) dt_sta_signal_pane_g1

0x8061,	// (0x000618d0) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x0006972a) dt_sta_signal_pane_g

0x8069,	// (0x000618d8) dt_sta_battery_pane_g1

0x8072,	// (0x000618e1) dt_sta_battery_pane_t1

0x4e0a,	// (0x0005e679) bg_dt_sta_control_pane_g1

0xdef3,	// (0x00067762) fep_china_uni_eep_pane

0xdefb,	// (0x0006776a) fep_china_uni_entry_pane_ParamLimits

0xdf0b,	// (0x0006777a) popup_fep_china_uni_window_g1_ParamLimits

0xdf1b,	// (0x0006778a) popup_fep_china_uni_window_g2_ParamLimits

0xdf1b,	// (0x0006778a) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00068f97) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00068f97) popup_fep_china_uni_window_g

0x8081,	// (0x000618f0) fep_china_uni_eep_pane_g1

0x8089,	// (0x000618f8) fep_china_uni_eep_pane_t1

0x762b,	// (0x00060e9a) aid_touch_area_size_smil_player

0x21ca,	// (0x0005ba39) lc0_clock_pane

0x23c9,	// (0x0005bc38) status_pane_g5_ParamLimits

0x23c9,	// (0x0005bc38) status_pane_g5

0xb17e,	// (0x000649ed) popup_keymap_window

0x2387,	// (0x0005bbf6) status_icon_pane

0x7cf5,	// (0x00061564) cell_ai5_widget_pane_g3_ParamLimits

0x7d14,	// (0x00061583) cell_ai5_widget_pane_g4_ParamLimits

0x7d20,	// (0x0006158f) cell_ai5_widget_pane_g5_ParamLimits

0x7d44,	// (0x000615b3) cell_ai5_widget_pane_g8_ParamLimits

0x7d44,	// (0x000615b3) cell_ai5_widget_pane_g8

0x7d58,	// (0x000615c7) cell_ai5_widget_pane_g9_ParamLimits

0x7d58,	// (0x000615c7) cell_ai5_widget_pane_g9

0x7d6c,	// (0x000615db) cell_ai5_widget_pane_g10_ParamLimits

0x7d6c,	// (0x000615db) cell_ai5_widget_pane_g10

0x8098,	// (0x00061907) status_icon_pane_g1

0x534b,	// (0x0005ebba) bg_popup_sub_pane_cp13

0x80a0,	// (0x0006190f) popup_keymap_window_t1

0xae71,	// (0x000646e0) control_pane_g6_ParamLimits

0xae71,	// (0x000646e0) control_pane_g6

0xae7e,	// (0x000646ed) control_pane_g7_ParamLimits

0xae7e,	// (0x000646ed) control_pane_g7

0xae8b,	// (0x000646fa) control_pane_g8_ParamLimits

0xae8b,	// (0x000646fa) control_pane_g8

0xe97e,	// (0x000681ed) dt_sta_controll_pane_ParamLimits

0xe98b,	// (0x000681fa) dt_sta_indi_pane_ParamLimits

0xe998,	// (0x00068207) dt_sta_title_pane_ParamLimits

0x8e43,	// (0x000626b2) aid_size_touch_scroll_bar_cale

0xef15,	// (0x00068784) popup_discreet_window_ParamLimits

0xef15,	// (0x00068784) popup_discreet_window

0x9f2a,	// (0x00063799) popup_sk_window

0x2c1e,	// (0x0005c48d) bg_popup_sub_pane_cp28_ParamLimits

0x2c1e,	// (0x0005c48d) bg_popup_sub_pane_cp28

0x80ae,	// (0x0006191d) popup_discreet_window_g1_ParamLimits

0x80ae,	// (0x0006191d) popup_discreet_window_g1

0x80ce,	// (0x0006193d) popup_discreet_window_t1_ParamLimits

0x80ce,	// (0x0006193d) popup_discreet_window_t1

0x80ec,	// (0x0006195b) popup_discreet_window_t2_ParamLimits

0x80ec,	// (0x0006195b) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x0006972f) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x0006972f) popup_discreet_window_t

0x1a40,	// (0x0005b2af) popup_sk_window_g1

0x1a4a,	// (0x0005b2b9) popup_sk_window_g2

0x0001,

0xfec7,	// (0x00069736) popup_sk_window_g

0x1a54,	// (0x0005b2c3) popup_sk_window_t1

0x1a64,	// (0x0005b2d3) popup_sk_window_t1_copy1

0x7ce5,	// (0x00061554) cell_ai5_widget_pane_g2_ParamLimits

0x7e43,	// (0x000616b2) cell_ai5_widget_pane_t9_ParamLimits

0x7e43,	// (0x000616b2) cell_ai5_widget_pane_t9

0x534b,	// (0x0005ebba) main_fep_fshwr2_pane

0xc054,	// (0x000658c3) aid_fshwr2_btn_pane

0xc063,	// (0x000658d2) aid_fshwr2_syb_pane

0xc075,	// (0x000658e4) aid_fshwr2_txt_pane

0xc084,	// (0x000658f3) fshwr2_func_candi_pane

0xc095,	// (0x00065904) fshwr2_hwr_syb_pane

0xc0b0,	// (0x0006591f) fshwr2_icf_pane

0x534b,	// (0x0005ebba) fshwr2_icf_bg_pane

0xea17,	// (0x00068286) fshwr2_icf_pane_t1_ParamLimits

0xea17,	// (0x00068286) fshwr2_icf_pane_t1

0x4e0a,	// (0x0005e679) fshwr2_func_candi_pane_g1

0x8155,	// (0x000619c4) fshwr2_func_candi_row_pane_ParamLimits

0x8155,	// (0x000619c4) fshwr2_func_candi_row_pane

0xea2f,	// (0x0006829e) cell_fshwr2_syb_pane_ParamLimits

0xea2f,	// (0x0006829e) cell_fshwr2_syb_pane

0x5085,	// (0x0005e8f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5085,	// (0x0005e8f4) fshwr2_hwr_syb_pane_g1

0x534b,	// (0x0005ebba) bg_popup_call_pane_cp01

0x8180,	// (0x000619ef) fshwr2_func_candi_cell_pane_ParamLimits

0x8180,	// (0x000619ef) fshwr2_func_candi_cell_pane

0x81b2,	// (0x00061a21) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x81b2,	// (0x00061a21) fshwr2_func_candi_cell_bg_pane

0x81cc,	// (0x00061a3b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x81cc,	// (0x00061a3b) fshwr2_func_candi_cell_pane_g1

0x81ec,	// (0x00061a5b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x81ec,	// (0x00061a5b) fshwr2_func_candi_cell_pane_t1

0x534b,	// (0x0005ebba) bg_button_pane_cp08

0x1cc2,	// (0x0005b531) cell_fshwr2_syb_bg_pane

0xea48,	// (0x000682b7) cell_fshwr2_syb_bg_pane_g1

0xea50,	// (0x000682bf) cell_fshwr2_syb_bg_pane_t1

0x8f01,	// (0x00062770) main_tmo_pane

0xc621,	// (0x00065e90) uni_indicator_pane_g1_ParamLimits

0xc636,	// (0x00065ea5) uni_indicator_pane_g2_ParamLimits

0xc64b,	// (0x00065eba) uni_indicator_pane_g3_ParamLimits

0xc661,	// (0x00065ed0) uni_indicator_pane_g4_ParamLimits

0xc661,	// (0x00065ed0) uni_indicator_pane_g4

0xc675,	// (0x00065ee4) uni_indicator_pane_g5_ParamLimits

0xc675,	// (0x00065ee4) uni_indicator_pane_g5

0xc689,	// (0x00065ef8) uni_indicator_pane_g6_ParamLimits

0xc689,	// (0x00065ef8) uni_indicator_pane_g6

0xf927,	// (0x00069196) uni_indicator_pane_g_ParamLimits

0xd1ec,	// (0x00066a5b) popup_tmo_note_window_ParamLimits

0xd1ec,	// (0x00066a5b) popup_tmo_note_window

0x12ae,	// (0x0005ab1d) fshwr2_bg_pane

0x81dd,	// (0x00061a4c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x81dd,	// (0x00061a4c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x0006973b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x0006973b) fshwr2_func_candi_cell_pane_g

0x4e0a,	// (0x0005e679) bg_popup_window_pane_cp01

0x8216,	// (0x00061a85) bg_popup_window_pane_g1_cp01

0x821f,	// (0x00061a8e) bg_popup_window_pane_cp22_ParamLimits

0x821f,	// (0x00061a8e) bg_popup_window_pane_cp22

0x822d,	// (0x00061a9c) listscroll_tmo_link_pane_ParamLimits

0x822d,	// (0x00061a9c) listscroll_tmo_link_pane

0x826d,	// (0x00061adc) popup_tmo_note_window_g1_ParamLimits

0x826d,	// (0x00061adc) popup_tmo_note_window_g1

0x827a,	// (0x00061ae9) tmo_note_info_pane_ParamLimits

0x827a,	// (0x00061ae9) tmo_note_info_pane

0xea5f,	// (0x000682ce) list_tmo_note_info_pane_g1_ParamLimits

0xea5f,	// (0x000682ce) list_tmo_note_info_pane_g1

0x82ab,	// (0x00061b1a) list_tmo_note_info_pane_g2_ParamLimits

0x82ab,	// (0x00061b1a) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x00069740) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x00069740) list_tmo_note_info_pane_g

0x82c7,	// (0x00061b36) list_tmo_note_info_text_pane_ParamLimits

0x82c7,	// (0x00061b36) list_tmo_note_info_text_pane

0x834c,	// (0x00061bbb) list_tmo_link_pane

0x8359,	// (0x00061bc8) scroll_pane_cp20

0x8366,	// (0x00061bd5) list_single_tmo_link_pane_ParamLimits

0x8366,	// (0x00061bd5) list_single_tmo_link_pane

0x8376,	// (0x00061be5) list_single_tmo_link_pane_t1

0x8384,	// (0x00061bf3) list_tmo_note_info_text_pane_t1_ParamLimits

0x8384,	// (0x00061bf3) list_tmo_note_info_text_pane_t1

0xa95c,	// (0x000641cb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa95c,	// (0x000641cb) aid_size_touch_scroll_bar_cp01

0xa88b,	// (0x000640fa) aid_size_touch_slider_marker

0x9f1a,	// (0x00063789) popup_settings_window_ParamLimits

0x9f1a,	// (0x00063789) popup_settings_window

0xe146,	// (0x000679b5) popup_candi_list_indi_window

0x2072,	// (0x0005b8e1) aid_touch_navi_pane_ParamLimits

0x1207,	// (0x0005aa76) rs_clock_indi_pane

0x1210,	// (0x0005aa7f) sctrl_sk_bottom_pane_ParamLimits

0x1221,	// (0x0005aa90) sctrl_sk_top_pane_ParamLimits

0x1326,	// (0x0005ab95) popup_fep_tooltip_window

0x7c65,	// (0x000614d4) aid_size_cell_widget_grid_ParamLimits

0x7cd9,	// (0x00061548) cell_ai5_widget_pane_g1_ParamLimits

0x7cd9,	// (0x00061548) cell_ai5_widget_pane_g1

0xe924,	// (0x00068193) cell_ai5_widget_pane_g6_ParamLimits

0xe930,	// (0x0006819f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x000696be) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x000696be) cell_ai5_widget_pane_g

0x7e67,	// (0x000616d6) cell_ai5_widget_pane_t10_ParamLimits

0x7e67,	// (0x000616d6) cell_ai5_widget_pane_t10

0x7e7d,	// (0x000616ec) grid_ai5_widget_pane_ParamLimits

0xe95a,	// (0x000681c9) cell_contacts_ai5_widget_pane_ParamLimits

0xe95a,	// (0x000681c9) cell_contacts_ai5_widget_pane

0x8101,	// (0x00061970) popup_discreet_window_t3_ParamLimits

0x8101,	// (0x00061970) popup_discreet_window_t3

0x1ad4,	// (0x0005b343) popup_fshwr2_char_preview_window_ParamLimits

0x1ad4,	// (0x0005b343) popup_fshwr2_char_preview_window

0xea76,	// (0x000682e5) tmo_note_info_pane_t1

0xea8b,	// (0x000682fa) tmo_note_info_pane_t2

0xeaa4,	// (0x00068313) tmo_note_info_pane_t3

0x8328,	// (0x00061b97) tmo_note_info_pane_t4

0x833a,	// (0x00061ba9) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x00069745) tmo_note_info_pane_t

0x834c,	// (0x00061bbb) list_tmo_link_pane_ParamLimits

0x8359,	// (0x00061bc8) scroll_pane_cp20_ParamLimits

0x534b,	// (0x0005ebba) bg_popup_fep_char_preview_window_cp01

0x839d,	// (0x00061c0c) popup_fshwr2_char_preview_window_t1

0x83ab,	// (0x00061c1a) popup_candi_list_indi_window_g1

0x83b4,	// (0x00061c23) bg_cell_contacts_ai5_widget_pane

0x83c0,	// (0x00061c2f) cell_contacts_ai5_widget_pane_g1

0x83d0,	// (0x00061c3f) cell_contacts_ai5_widget_pane_g2

0x83dc,	// (0x00061c4b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x00069750) cell_contacts_ai5_widget_pane_g

0x83e8,	// (0x00061c57) cell_contacts_ai5_widget_pane_t1

0x8f01,	// (0x00062770) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeb1e,	// (0x0006838d) settings_container_pane

0x1cc2,	// (0x0005b531) listscroll_set_pane_copy1

0x44e1,	// (0x0005dd50) scroll_pane_cp121_copy1

0x846e,	// (0x00061cdd) set_content_pane_copy1

0xeb2a,	// (0x00068399) aid_height_set_list_copy1_ParamLimits

0xeb2a,	// (0x00068399) aid_height_set_list_copy1

0x3b65,	// (0x0005d3d4) aid_size_parent_copy1_ParamLimits

0x3b65,	// (0x0005d3d4) aid_size_parent_copy1

0xeb36,	// (0x000683a5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb36,	// (0x000683a5) button_value_adjust_pane_cp6_copy1

0x200e,	// (0x0005b87d) list_highlight_pane_cp2_copy1_ParamLimits

0x200e,	// (0x0005b87d) list_highlight_pane_cp2_copy1

0xeb4a,	// (0x000683b9) list_set_pane_copy1_ParamLimits

0xeb4a,	// (0x000683b9) list_set_pane_copy1

0xeab9,	// (0x00068328) main_pane_set_t1_copy1_ParamLimits

0xeab9,	// (0x00068328) main_pane_set_t1_copy1

0xeaf3,	// (0x00068362) main_pane_set_t2_copy1_ParamLimits

0xeaf3,	// (0x00068362) main_pane_set_t2_copy1

0xec11,	// (0x00068480) main_pane_set_t3_copy1

0xec1f,	// (0x0006848e) main_pane_set_t4_copy1

0xeb12,	// (0x00068381) set_content_pane_g1_copy1_ParamLimits

0xeb12,	// (0x00068381) set_content_pane_g1_copy1

0xec2d,	// (0x0006849c) setting_code_pane_copy1

0x8581,	// (0x00061df0) setting_slider_graphic_pane_copy1

0x8581,	// (0x00061df0) setting_slider_pane_copy1

0x8581,	// (0x00061df0) setting_text_pane_copy1

0x8581,	// (0x00061df0) setting_volume_pane_copy1

0xec2d,	// (0x0006849c) settings_code_pane_cp2_copy1

0xec35,	// (0x000684a4) settings_code_pane_cp_copy1_ParamLimits

0xec35,	// (0x000684a4) settings_code_pane_cp_copy1

0xec49,	// (0x000684b8) volume_set_pane_copy1

0xec55,	// (0x000684c4) volume_set_pane_g10_copy1

0xec61,	// (0x000684d0) volume_set_pane_g1_copy1

0xec6b,	// (0x000684da) volume_set_pane_g2_copy1

0xec75,	// (0x000684e4) volume_set_pane_g3_copy1

0xec7f,	// (0x000684ee) volume_set_pane_g4_copy1

0xec89,	// (0x000684f8) volume_set_pane_g5_copy1

0xec93,	// (0x00068502) volume_set_pane_g6_copy1

0xec9d,	// (0x0006850c) volume_set_pane_g7_copy1

0xeca7,	// (0x00068516) volume_set_pane_g8_copy1

0xecb1,	// (0x00068520) volume_set_pane_g9_copy1

0x53ad,	// (0x0005ec1c) bg_set_opt_pane_cp_copy1_ParamLimits

0x53ad,	// (0x0005ec1c) bg_set_opt_pane_cp_copy1

0x860f,	// (0x00061e7e) setting_slider_pane_t1_copy1_ParamLimits

0x860f,	// (0x00061e7e) setting_slider_pane_t1_copy1

0xecbb,	// (0x0006852a) setting_slider_pane_t2_copy1_ParamLimits

0xecbb,	// (0x0006852a) setting_slider_pane_t2_copy1

0xecd5,	// (0x00068544) setting_slider_pane_t3_copy1_ParamLimits

0xecd5,	// (0x00068544) setting_slider_pane_t3_copy1

0xeced,	// (0x0006855c) slider_set_pane_copy1_ParamLimits

0xeced,	// (0x0006855c) slider_set_pane_copy1

0x8f68,	// (0x000627d7) set_opt_bg_pane_g1_copy2

0x8f70,	// (0x000627df) set_opt_bg_pane_g2_copy2

0x8675,	// (0x00061ee4) set_opt_bg_pane_g3_copy2

0x8f80,	// (0x000627ef) set_opt_bg_pane_g4_copy2

0x8f88,	// (0x000627f7) set_opt_bg_pane_g5_copy2

0x8f90,	// (0x000627ff) set_opt_bg_pane_g6_copy2

0xed03,	// (0x00068572) set_opt_bg_pane_g7_copy2

0x8689,	// (0x00061ef8) set_opt_bg_pane_g8_copy2

0x8693,	// (0x00061f02) set_opt_bg_pane_g9_copy2

0x869d,	// (0x00061f0c) aid_size_touch_slider_mark_copy1_ParamLimits

0x869d,	// (0x00061f0c) aid_size_touch_slider_mark_copy1

0x86b1,	// (0x00061f20) slider_set_pane_g1_copy1

0x86ba,	// (0x00061f29) slider_set_pane_g2_copy1

0x6f10,	// (0x0006077f) slider_set_pane_g3_copy1_ParamLimits

0x6f10,	// (0x0006077f) slider_set_pane_g3_copy1

0x6f24,	// (0x00060793) slider_set_pane_g4_copy1_ParamLimits

0x6f24,	// (0x00060793) slider_set_pane_g4_copy1

0x6f3c,	// (0x000607ab) slider_set_pane_g5_copy1_ParamLimits

0x6f3c,	// (0x000607ab) slider_set_pane_g5_copy1

0x6f10,	// (0x0006077f) slider_set_pane_g6_copy1_ParamLimits

0x6f10,	// (0x0006077f) slider_set_pane_g6_copy1

0xed0d,	// (0x0006857c) slider_set_pane_g7_copy1_ParamLimits

0xed0d,	// (0x0006857c) slider_set_pane_g7_copy1

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp2_copy1

0x86d8,	// (0x00061f47) setting_slider_graphic_pane_g1_copy1

0xed23,	// (0x00068592) setting_slider_graphic_pane_t1_copy1

0xed33,	// (0x000685a2) setting_slider_graphic_pane_t2_copy1

0xed43,	// (0x000685b2) slider_set_pane_cp_copy1

0x8711,	// (0x00061f80) input_focus_pane_cp1_copy1

0x871a,	// (0x00061f89) list_set_text_pane_copy1

0x8722,	// (0x00061f91) setting_text_pane_g1_copy1

0xdd1a,	// (0x00067589) set_text_pane_t1_copy1

0x8711,	// (0x00061f80) input_focus_pane_cp2_copy1

0x8722,	// (0x00061f91) setting_code_pane_g1_copy1

0xed4b,	// (0x000685ba) setting_code_pane_t1_copy1

0xed59,	// (0x000685c8) list_set_graphic_pane_copy1

0x535f,	// (0x0005ebce) bg_set_opt_pane_cp4_copy1

0xaca6,	// (0x00064515) list_set_graphic_pane_g1_copy1_ParamLimits

0xaca6,	// (0x00064515) list_set_graphic_pane_g1_copy1

0xed6b,	// (0x000685da) list_set_graphic_pane_g2_copy1

0xacbe,	// (0x0006452d) list_set_graphic_pane_t1_copy1_ParamLimits

0xacbe,	// (0x0006452d) list_set_graphic_pane_t1_copy1

0x4e0a,	// (0x0005e679) rs_clock_indi_pane_g1

0x8753,	// (0x00061fc2) rs_clock_indi_pane_t1

0x8761,	// (0x00061fd0) rs_indi_pane

0x8769,	// (0x00061fd8) rs_indi_pane_g1

0x8772,	// (0x00061fe1) rs_indi_pane_g2

0x877b,	// (0x00061fea) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x00069757) rs_indi_pane_g

0x1cc2,	// (0x0005b531) bg_popup_preview_window_pane_cp03

0x8784,	// (0x00061ff3) popup_fep_tooltip_window_t1

0x5d8f,	// (0x0005f5fe) popup_note2_window_g2_ParamLimits

0x5d8f,	// (0x0005f5fe) popup_note2_window_g2

0x0001,

0xfc81,	// (0x000694f0) popup_note2_window_g_ParamLimits

0xfc81,	// (0x000694f0) popup_note2_window_g

0x6297,	// (0x0005fb06) bg_popup_sub_pane_cp11_ParamLimits

0x62a4,	// (0x0005fb13) cell_ai3_links_pane_g1_ParamLimits

0x62bb,	// (0x0005fb2a) cell_ai3_links_pane_t1

0xdd1a,	// (0x00067589) set_text_pane_t1_copy1_ParamLimits

0xad32,	// (0x000645a1) cell_graphic_popup_pane_cp2_ParamLimits

0xad32,	// (0x000645a1) cell_graphic_popup_pane_cp2

0xed73,	// (0x000685e2) cell_graphic_popup_pane_g1_cp2

0x8c56,	// (0x000624c5) cell_graphic_popup_pane_g2_cp2

0x879a,	// (0x00062009) cell_graphic_popup_pane_g3_cp2

0x87a2,	// (0x00062011) cell_graphic_popup_pane_t2_cp2

0x8c67,	// (0x000624d6) grid_highlight_pane_cp3_cp2

0x924a,	// (0x00062ab9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8f01,	// (0x00062770) main_tmo_pane_ParamLimits

0xd1e0,	// (0x00066a4f) popup_tmo_big_image_note_window

0x7cc9,	// (0x00061538) cell_ai5_widget_list_pane

0x7cd1,	// (0x00061540) cell_ai5_widget_lrg_icon_pane

0xea76,	// (0x000682e5) tmo_note_info_pane_t1_ParamLimits

0xea8b,	// (0x000682fa) tmo_note_info_pane_t2_ParamLimits

0xeaa4,	// (0x00068313) tmo_note_info_pane_t3_ParamLimits

0x8328,	// (0x00061b97) tmo_note_info_pane_t4_ParamLimits

0x833a,	// (0x00061ba9) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x00069745) tmo_note_info_pane_t_ParamLimits

0xeb1e,	// (0x0006838d) settings_container_pane_ParamLimits

0x8709,	// (0x00061f78) indicator_popup_pane_cp5

0x8709,	// (0x00061f78) indicator_popup_pane_cp6

0xed59,	// (0x000685c8) list_set_graphic_pane_copy1_ParamLimits

0x534b,	// (0x0005ebba) bg_popup_window_pane_cp23

0x87b0,	// (0x0006201f) popup_tmo_big_image_note_window_g1

0x87bc,	// (0x0006202b) popup_tmo_big_image_note_window_t1

0x87cc,	// (0x0006203b) popup_tmo_big_image_note_window_t2

0x87dc,	// (0x0006204b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x0006975e) popup_tmo_big_image_note_window_t

0x87ec,	// (0x0006205b) cell_ai5_widget_lrg_icon_pane_g1

0x87f4,	// (0x00062063) cell_ai5_widget_lrg_icon_pane_t1

0x8802,	// (0x00062071) cell_ai5_widget_list_row_pane_ParamLimits

0x8802,	// (0x00062071) cell_ai5_widget_list_row_pane

0x881b,	// (0x0006208a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x881b,	// (0x0006208a) cell_ai5_widget_list_row_pane_g1

0x8828,	// (0x00062097) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8828,	// (0x00062097) cell_ai5_widget_list_row_pane_t1

0x8840,	// (0x000620af) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8840,	// (0x000620af) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef6,	// (0x00069765) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x00069765) cell_ai5_widget_list_row_pane_t

0xee38,	// (0x000686a7) main_fep_vtchi_ss_pane

0x8877,	// (0x000620e6) popup_fep_char_pre_window

0x887f,	// (0x000620ee) popup_fep_ituss_window

0x88a0,	// (0x0006210f) popup_fep_vkbss_window

0x88c1,	// (0x00062130) grid_vkbss_keypad_pane_ParamLimits

0x88c1,	// (0x00062130) grid_vkbss_keypad_pane

0x88d1,	// (0x00062140) ituss_keypad_pane

0x88ed,	// (0x0006215c) aid_vkbss_key_offset_ParamLimits

0x88ed,	// (0x0006215c) aid_vkbss_key_offset

0x88f9,	// (0x00062168) cell_vkbss_key_pane_ParamLimits

0x88f9,	// (0x00062168) cell_vkbss_key_pane

0x890f,	// (0x0006217e) bg_cell_vkbss_key_g1_ParamLimits

0x890f,	// (0x0006217e) bg_cell_vkbss_key_g1

0x891b,	// (0x0006218a) cell_vkbss_key_3p_pane_ParamLimits

0x891b,	// (0x0006218a) cell_vkbss_key_3p_pane

0x8935,	// (0x000621a4) cell_vkbss_key_g1_ParamLimits

0x8935,	// (0x000621a4) cell_vkbss_key_g1

0x894f,	// (0x000621be) cell_vkbss_key_t1_ParamLimits

0x894f,	// (0x000621be) cell_vkbss_key_t1

0x897a,	// (0x000621e9) cell_ituss_key_pane_ParamLimits

0x897a,	// (0x000621e9) cell_ituss_key_pane

0x898b,	// (0x000621fa) bg_cell_ituss_key_g1_ParamLimits

0x898b,	// (0x000621fa) bg_cell_ituss_key_g1

0x8997,	// (0x00062206) cell_ituss_key_pane_g1_ParamLimits

0x8997,	// (0x00062206) cell_ituss_key_pane_g1

0x89ab,	// (0x0006221a) cell_ituss_key_pane_g2_ParamLimits

0x89ab,	// (0x0006221a) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x0006976c) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x0006976c) cell_ituss_key_pane_g

0x89d6,	// (0x00062245) cell_ituss_key_t1_ParamLimits

0x89d6,	// (0x00062245) cell_ituss_key_t1

0x8a04,	// (0x00062273) cell_ituss_key_t2_ParamLimits

0x8a04,	// (0x00062273) cell_ituss_key_t2

0x8a35,	// (0x000622a4) cell_ituss_key_t3_ParamLimits

0x8a35,	// (0x000622a4) cell_ituss_key_t3

0x8a66,	// (0x000622d5) cell_ituss_key_t4_ParamLimits

0x8a66,	// (0x000622d5) cell_ituss_key_t4

0x0003,

0xff02,	// (0x00069771) cell_ituss_key_t_ParamLimits

0xff02,	// (0x00069771) cell_ituss_key_t

0x8a97,	// (0x00062306) cell_vkbss_key_3p_pane_g1

0x8a9f,	// (0x0006230e) cell_vkbss_key_3p_pane_g2

0x8aa7,	// (0x00062316) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x0006977a) cell_vkbss_key_3p_pane_g

0x534b,	// (0x0005ebba) bg_popup_fep_char_preview_window_cp02

0x8aaf,	// (0x0006231e) popup_fep_char_pre_window_t1

0xe91a,	// (0x00068189) main_ai5_sk_pane

0x83b4,	// (0x00061c23) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x83c0,	// (0x00061c2f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x83d0,	// (0x00061c3f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x83dc,	// (0x00061c4b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x00069750) cell_contacts_ai5_widget_pane_g_ParamLimits

0x83e8,	// (0x00061c57) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8f01,	// (0x00062770) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed7b,	// (0x000685ea) main_ai5_sk_pane_g1

0x2a56,	// (0x0005c2c5) popup_query_code_window_g1

0x8895,	// (0x00062104) popup_fep_vkb_icf_pane

0x88ab,	// (0x0006211a) popup_fep_vtchi_icf_pane

0x8f01,	// (0x00062770) bg_icf_pane

0x8ac7,	// (0x00062336) list_vkb_icf_pane

0x8f01,	// (0x00062770) bg_icf_pane_cp01

0x8ad3,	// (0x00062342) vtchi_icf_list_pane

0x8ae4,	// (0x00062353) list_vkb_icf_pane_t1_ParamLimits

0x8ae4,	// (0x00062353) list_vkb_icf_pane_t1

0x8afb,	// (0x0006236a) vtchi_icf_list_pane_t1_ParamLimits

0x8afb,	// (0x0006236a) vtchi_icf_list_pane_t1

0x887f,	// (0x000620ee) popup_fep_ituss_window_ParamLimits

0x88ab,	// (0x0006211a) popup_fep_vtchi_icf_pane_ParamLimits

0x88d1,	// (0x00062140) ituss_keypad_pane_ParamLimits

0x88e1,	// (0x00062150) ituss_sks_pane

0x8f01,	// (0x00062770) bg_icf_pane_ParamLimits

0x8868,	// (0x000620d7) icf_edit_indi_pane_ParamLimits

0x8868,	// (0x000620d7) icf_edit_indi_pane

0x8ac7,	// (0x00062336) list_vkb_icf_pane_ParamLimits

0x8f01,	// (0x00062770) bg_icf_pane_cp01_ParamLimits

0x8868,	// (0x000620d7) icf_edit_indi_pane_cp01_ParamLimits

0x8868,	// (0x000620d7) icf_edit_indi_pane_cp01

0x8adb,	// (0x0006234a) vtchi_query_pane

0x5085,	// (0x0005e8f4) icf_edit_indi_pane_g1_ParamLimits

0x5085,	// (0x0005e8f4) icf_edit_indi_pane_g1

0x8fe3,	// (0x00062852) icf_edit_indi_pane_g2_ParamLimits

0x8fe3,	// (0x00062852) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x00069792) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x00069792) icf_edit_indi_pane_g

0x8ff2,	// (0x00062861) icf_edit_indi_pane_t1

0x8b14,	// (0x00062383) bg_input_focus_pane_cp042

0x8e3a,	// (0x000626a9) vtchi_button_pane

0x8b1d,	// (0x0006238c) vtchi_query_pane_t1

0x8b2b,	// (0x0006239a) vtchi_query_pane_t2

0x8b39,	// (0x000623a8) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x00069781) vtchi_query_pane_t

0x534b,	// (0x0005ebba) bg_button_pane_cp13

0x8b47,	// (0x000623b6) vtchi_button_pane_g1

0x8b4f,	// (0x000623be) ituss_sks_pane_g1

0x8b5a,	// (0x000623c9) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x00069788) ituss_sks_pane_g

0x8fc7,	// (0x00062836) ituss_sks_pane_t1

0x8fd5,	// (0x00062844) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006978d) ituss_sks_pane_t

0x48b4,	// (0x0005e123) indicator_nsta_pane_cp_g1

0x48bd,	// (0x0005e12c) indicator_nsta_pane_cp_g2

0x48c5,	// (0x0005e134) indicator_nsta_pane_cp_g3

0x48cd,	// (0x0005e13c) indicator_nsta_pane_cp_g4

0x48d5,	// (0x0005e144) indicator_nsta_pane_cp_g5

0x48dd,	// (0x0005e14c) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x0006932e) indicator_nsta_pane_cp_g

0xdc0a,	// (0x00067479) cell_graphic2_pane_t2_ParamLimits

0xdc0a,	// (0x00067479) cell_graphic2_pane_t2

0x0001,

0xfdd8,	// (0x00069647) cell_graphic2_pane_t_ParamLimits

0xfdd8,	// (0x00069647) cell_graphic2_pane_t

0xdc40,	// (0x000674af) cell_graphic2_control_pane_t1

0xaba1,	// (0x00064410) signal_pane_g3_ParamLimits

0xaba1,	// (0x00064410) signal_pane_g3

0xabb5,	// (0x00064424) signal_pane_g4_ParamLimits

0xabb5,	// (0x00064424) signal_pane_g4

0x8852,	// (0x000620c1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8852,	// (0x000620c1) cell_ai5_widget_list_row_pane_t3

0x89c4,	// (0x00062233) cell_ituss_key_pane_t1_ParamLimits

0x89c4,	// (0x00062233) cell_ituss_key_pane_t1

0x26d3,	// (0x0005bf42) form_field_data_wide_pane_vc_t2_ParamLimits

0x26d3,	// (0x0005bf42) form_field_data_wide_pane_vc_t2

0x26e7,	// (0x0005bf56) form_field_data_wide_pane_vc_t3_ParamLimits

0x26e7,	// (0x0005bf56) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0006907e) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0006907e) form_field_data_wide_pane_vc_t

0x4559,	// (0x0005ddc8) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4559,	// (0x0005ddc8) form_field_slider_wide_pane_vc_t3

0x4635,	// (0x0005dea4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4635,	// (0x0005dea4) form_field_popup_wide_pane_vc_t2

0x464c,	// (0x0005debb) form_field_popup_wide_pane_vc_t3_ParamLimits

0x464c,	// (0x0005debb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x0006931d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x0006931d) form_field_popup_wide_pane_vc_t

0xc054,	// (0x000658c3) aid_fshwr2_btn_pane_ParamLimits

0xc063,	// (0x000658d2) aid_fshwr2_syb_pane_ParamLimits

0xc075,	// (0x000658e4) aid_fshwr2_txt_pane_ParamLimits

0x12ae,	// (0x0005ab1d) fshwr2_bg_pane_ParamLimits

0xc084,	// (0x000658f3) fshwr2_func_candi_pane_ParamLimits

0xc095,	// (0x00065904) fshwr2_hwr_syb_pane_ParamLimits

0xc0b0,	// (0x0006591f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000b8a1 };

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
0xeb0f,	// (0x0001a3b0) Screen

0xeb19,	// (0x0001a3ba) application_window_ParamLimits

0xeb19,	// (0x0001a3ba) application_window

0x576b,	// (0x0001100c) screen_g1

0xeb27,	// (0x0001a3c8) area_bottom_pane_ParamLimits

0xeb27,	// (0x0001a3c8) area_bottom_pane

0x57da,	// (0x0001107b) area_top_pane_ParamLimits

0x57da,	// (0x0001107b) area_top_pane

0x359e,	// (0x0000ee3f) main_pane_ParamLimits

0x359e,	// (0x0000ee3f) main_pane

0x5852,	// (0x000110f3) misc_graphics

0x0a7c,	// (0x0000c31d) battery_pane_ParamLimits

0x0a7c,	// (0x0000c31d) battery_pane

0x8529,	// (0x00013dca) bg_status_flat_pane_g8

0x8531,	// (0x00013dd2) bg_status_flat_pane_g9

0x78bf,	// (0x00013160) context_pane_ParamLimits

0x78bf,	// (0x00013160) context_pane

0x0bd6,	// (0x0000c477) navi_pane_ParamLimits

0x0bd6,	// (0x0000c477) navi_pane

0x0c4b,	// (0x0000c4ec) signal_pane_ParamLimits

0x0c4b,	// (0x0000c4ec) signal_pane

0x0008,

0xf843,	// (0x0001b0e4) bg_status_flat_pane_g

0x0cd7,	// (0x0000c578) status_pane_g1_ParamLimits

0x0cd7,	// (0x0000c578) status_pane_g1

0x0ce3,	// (0x0000c584) status_pane_g2_ParamLimits

0x0ce3,	// (0x0000c584) status_pane_g2

0x7ad4,	// (0x00013375) status_pane_g3_ParamLimits

0x7ad4,	// (0x00013375) status_pane_g3

0x0004,

0xf776,	// (0x0001b017) status_pane_g_ParamLimits

0xf776,	// (0x0001b017) status_pane_g

0x0cef,	// (0x0000c590) title_pane_ParamLimits

0x0cef,	// (0x0000c590) title_pane

0x0d4a,	// (0x0000c5eb) uni_indicator_pane_ParamLimits

0x0d4a,	// (0x0000c5eb) uni_indicator_pane

0x771a,	// (0x00012fbb) bg_list_pane_ParamLimits

0x771a,	// (0x00012fbb) bg_list_pane

0x0440,	// (0x0000bce1) find_pane

0xd1f2,	// (0x00018a93) listscroll_app_pane_ParamLimits

0xd1f2,	// (0x00018a93) listscroll_app_pane

0x774e,	// (0x00012fef) listscroll_form_pane

0x0458,	// (0x0000bcf9) listscroll_gen_pane_ParamLimits

0x0458,	// (0x0000bcf9) listscroll_gen_pane

0x3da1,	// (0x0000f642) listscroll_set_pane

0xd202,	// (0x00018aa3) main_idle_act_pane

0x742e,	// (0x00012ccf) main_idle_trad_pane

0x742e,	// (0x00012ccf) main_list_empty_pane

0x777d,	// (0x0001301e) main_midp_pane

0x7789,	// (0x0001302a) main_pane_g1_ParamLimits

0x7789,	// (0x0001302a) main_pane_g1

0xd215,	// (0x00018ab6) popup_ai_message_window_ParamLimits

0xd215,	// (0x00018ab6) popup_ai_message_window

0xd299,	// (0x00018b3a) popup_fep_china_uni_window_ParamLimits

0xd299,	// (0x00018b3a) popup_fep_china_uni_window

0x3e8b,	// (0x0000f72c) popup_fep_japan_candidate_window_ParamLimits

0x3e8b,	// (0x0000f72c) popup_fep_japan_candidate_window

0x3ea9,	// (0x0000f74a) popup_fep_japan_predictive_window_ParamLimits

0x3ea9,	// (0x0000f74a) popup_fep_japan_predictive_window

0xd2d7,	// (0x00018b78) popup_find_window

0xd2f0,	// (0x00018b91) popup_grid_graphic_window_ParamLimits

0xd2f0,	// (0x00018b91) popup_grid_graphic_window

0x3f00,	// (0x0000f7a1) popup_large_graphic_colour_window

0xd36c,	// (0x00018c0d) popup_menu_window_ParamLimits

0xd36c,	// (0x00018c0d) popup_menu_window

0xd4ca,	// (0x00018d6b) popup_note_image_window

0xd492,	// (0x00018d33) popup_note_wait_window_ParamLimits

0xd492,	// (0x00018d33) popup_note_wait_window

0xd4e0,	// (0x00018d81) popup_note_window_ParamLimits

0xd4e0,	// (0x00018d81) popup_note_window

0xd574,	// (0x00018e15) popup_query_code_window_ParamLimits

0xd574,	// (0x00018e15) popup_query_code_window

0x40c0,	// (0x0000f961) popup_query_data_code_window_ParamLimits

0x40c0,	// (0x0000f961) popup_query_data_code_window

0xd5ac,	// (0x00018e4d) popup_query_data_window_ParamLimits

0xd5ac,	// (0x00018e4d) popup_query_data_window

0xd620,	// (0x00018ec1) popup_query_sat_info_window_ParamLimits

0xd620,	// (0x00018ec1) popup_query_sat_info_window

0xd6ad,	// (0x00018f4e) popup_snote_single_graphic_window_ParamLimits

0xd6ad,	// (0x00018f4e) popup_snote_single_graphic_window

0xd6ad,	// (0x00018f4e) popup_snote_single_text_window_ParamLimits

0xd6ad,	// (0x00018f4e) popup_snote_single_text_window

0x412f,	// (0x0000f9d0) popup_sub_window_general

0x4233,	// (0x0000fad4) popup_window_general_ParamLimits

0x4233,	// (0x0000fad4) popup_window_general

0x779f,	// (0x00013040) power_save_pane

0xd0bf,	// (0x00018960) control_pane_g1_ParamLimits

0xd0bf,	// (0x00018960) control_pane_g1

0x3c52,	// (0x0000f4f3) control_pane_g2_ParamLimits

0x3c52,	// (0x0000f4f3) control_pane_g2

0x76e5,	// (0x00012f86) control_pane_g3_ParamLimits

0x76e5,	// (0x00012f86) control_pane_g3

0x0007,

0xf75e,	// (0x0001afff) control_pane_g_ParamLimits

0xf75e,	// (0x0001afff) control_pane_g

0xd0f4,	// (0x00018995) control_pane_t1_ParamLimits

0xd0f4,	// (0x00018995) control_pane_t1

0xd152,	// (0x000189f3) control_pane_t2_ParamLimits

0xd152,	// (0x000189f3) control_pane_t2

0x0002,

0xf76f,	// (0x0001b010) control_pane_t_ParamLimits

0xf76f,	// (0x0001b010) control_pane_t

0x760c,	// (0x00012ead) navi_navi_volume_pane_cp1

0x7614,	// (0x00012eb5) status_small_icon_pane

0x761c,	// (0x00012ebd) status_small_pane_g1_ParamLimits

0x761c,	// (0x00012ebd) status_small_pane_g1

0x7650,	// (0x00012ef1) status_small_pane_g2_ParamLimits

0x7650,	// (0x00012ef1) status_small_pane_g2

0x765c,	// (0x00012efd) status_small_pane_g3_ParamLimits

0x765c,	// (0x00012efd) status_small_pane_g3

0x02b0,	// (0x0000bb51) status_small_pane_g4_ParamLimits

0x02b0,	// (0x0000bb51) status_small_pane_g4

0x02bc,	// (0x0000bb5d) status_small_pane_g5_ParamLimits

0x02bc,	// (0x0000bb5d) status_small_pane_g5

0x7680,	// (0x00012f21) status_small_pane_g6_ParamLimits

0x7680,	// (0x00012f21) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001afee) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001afee) status_small_pane_g

0x76af,	// (0x00012f50) status_small_pane_t1

0x02d2,	// (0x0000bb73) status_small_wait_pane_ParamLimits

0x02d2,	// (0x0000bb73) status_small_wait_pane

0x00d5,	// (0x0000b976) aid_levels_signal_ParamLimits

0x00d5,	// (0x0000b976) aid_levels_signal

0x00e9,	// (0x0000b98a) signal_pane_g1_ParamLimits

0x00e9,	// (0x0000b98a) signal_pane_g1

0x0103,	// (0x0000b9a4) signal_pane_g2_ParamLimits

0x0103,	// (0x0000b9a4) signal_pane_g2

0x0003,

0xf6de,	// (0x0001af7f) signal_pane_g_ParamLimits

0xf6de,	// (0x0001af7f) signal_pane_g

0x6ee3,	// (0x00012784) context_pane_g1

0xec23,	// (0x0001a4c4) title_pane_g1

0xec65,	// (0x0001a506) title_pane_t1

0x58fa,	// (0x0001119b) title_pane_t2

0x5920,	// (0x000111c1) title_pane_t3

0x0002,

0xf532,	// (0x0001add3) title_pane_t

0x0d70,	// (0x0000c611) aid_levels_battery_ParamLimits

0x0d70,	// (0x0000c611) aid_levels_battery

0x0d88,	// (0x0000c629) battery_pane_g1_ParamLimits

0x0d88,	// (0x0000c629) battery_pane_g1

0x0da3,	// (0x0000c644) battery_pane_g2_ParamLimits

0x0da3,	// (0x0000c644) battery_pane_g2

0x0001,

0xf781,	// (0x0001b022) battery_pane_g_ParamLimits

0xf781,	// (0x0001b022) battery_pane_g

0x10c1,	// (0x0000c962) uni_indicator_pane_g1

0x10d5,	// (0x0000c976) uni_indicator_pane_g2

0x10ea,	// (0x0000c98b) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x0001b18c) uni_indicator_pane_g

0x68a7,	// (0x00012148) navi_icon_pane_ParamLimits

0x68a7,	// (0x00012148) navi_icon_pane

0x5852,	// (0x000110f3) navi_midp_pane

0x5852,	// (0x000110f3) navi_navi_pane

0x68a7,	// (0x00012148) navi_text_pane_ParamLimits

0x68a7,	// (0x00012148) navi_text_pane

0x576b,	// (0x0001100c) status_small_wait_pane_g1

0x5d94,	// (0x00011635) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0001b187) status_small_wait_pane_g

0x1067,	// (0x0000c908) navi_navi_icon_text_pane

0x1081,	// (0x0000c922) navi_navi_pane_g1_ParamLimits

0x1081,	// (0x0000c922) navi_navi_pane_g1

0x106f,	// (0x0000c910) navi_navi_pane_g2_ParamLimits

0x106f,	// (0x0000c910) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x0001b155) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x0001b155) navi_navi_pane_g

0x1093,	// (0x0000c934) navi_navi_tabs_pane

0x1067,	// (0x0000c908) navi_navi_text_pane

0x1067,	// (0x0000c908) navi_navi_volume_pane

0x8b21,	// (0x000143c2) navi_text_pane_t1

0x8b15,	// (0x000143b6) navi_icon_pane_g1

0x8a69,	// (0x0001430a) navi_navi_text_pane_t1

0x4518,	// (0x0000fdb9) navi_navi_volume_pane_g1

0xd8fb,	// (0x0001919c) volume_small_pane

0x0fba,	// (0x0000c85b) navi_navi_icon_text_pane_g1

0x0fc2,	// (0x0000c863) navi_navi_icon_text_pane_t1

0x8589,	// (0x00013e2a) navi_tabs_2_long_pane

0x8589,	// (0x00013e2a) navi_tabs_2_pane

0x8589,	// (0x00013e2a) navi_tabs_3_long_pane

0x8589,	// (0x00013e2a) navi_tabs_3_pane

0x8589,	// (0x00013e2a) navi_tabs_4_pane

0xd8db,	// (0x0001917c) tabs_2_active_pane_ParamLimits

0xd8db,	// (0x0001917c) tabs_2_active_pane

0xd8eb,	// (0x0001918c) tabs_2_passive_pane_ParamLimits

0xd8eb,	// (0x0001918c) tabs_2_passive_pane

0xd8a9,	// (0x0001914a) tabs_3_active_pane_ParamLimits

0xd8a9,	// (0x0001914a) tabs_3_active_pane

0xd8b9,	// (0x0001915a) tabs_3_passive_pane_ParamLimits

0xd8b9,	// (0x0001915a) tabs_3_passive_pane

0xd8ca,	// (0x0001916b) tabs_3_passive_pane_cp_ParamLimits

0xd8ca,	// (0x0001916b) tabs_3_passive_pane_cp

0xd865,	// (0x00019106) tabs_4_active_pane_ParamLimits

0xd865,	// (0x00019106) tabs_4_active_pane

0xd876,	// (0x00019117) tabs_4_passive_pane_ParamLimits

0xd876,	// (0x00019117) tabs_4_passive_pane

0xd887,	// (0x00019128) tabs_4_passive_pane_cp_ParamLimits

0xd887,	// (0x00019128) tabs_4_passive_pane_cp

0xd898,	// (0x00019139) tabs_4_passive_pane_cp2_ParamLimits

0xd898,	// (0x00019139) tabs_4_passive_pane_cp2

0xd845,	// (0x000190e6) tabs_2_long_active_pane_ParamLimits

0xd845,	// (0x000190e6) tabs_2_long_active_pane

0xd855,	// (0x000190f6) tabs_2_long_passive_pane_ParamLimits

0xd855,	// (0x000190f6) tabs_2_long_passive_pane

0xd80e,	// (0x000190af) tabs_3_long_active_pane_ParamLimits

0xd80e,	// (0x000190af) tabs_3_long_active_pane

0xd821,	// (0x000190c2) tabs_3_long_passive_pane_ParamLimits

0xd821,	// (0x000190c2) tabs_3_long_passive_pane

0xd832,	// (0x000190d3) tabs_3_long_passive_pane_cp_ParamLimits

0xd832,	// (0x000190d3) tabs_3_long_passive_pane_cp

0x43d3,	// (0x0000fc74) volume_small_pane_g1

0x43dc,	// (0x0000fc7d) volume_small_pane_g2

0x43e5,	// (0x0000fc86) volume_small_pane_g3

0x43ee,	// (0x0000fc8f) volume_small_pane_g4

0x43f7,	// (0x0000fc98) volume_small_pane_g5

0x4400,	// (0x0000fca1) volume_small_pane_g6

0x4409,	// (0x0000fcaa) volume_small_pane_g7

0x4412,	// (0x0000fcb3) volume_small_pane_g8

0x441b,	// (0x0000fcbc) volume_small_pane_g9

0x4424,	// (0x0000fcc5) volume_small_pane_g10

0x0009,

0xf880,	// (0x0001b121) volume_small_pane_g

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp2_ParamLimits

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp2

0x5940,	// (0x000111e1) tabs_3_active_pane_g1

0xecf2,	// (0x0001a593) tabs_3_active_pane_t1

0x5bcc,	// (0x0001146d) bg_passive_tab_pane_cp2_ParamLimits

0x5bcc,	// (0x0001146d) bg_passive_tab_pane_cp2

0x5940,	// (0x000111e1) tabs_3_passive_pane_g1

0xecf2,	// (0x0001a593) tabs_3_passive_pane_t1

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp3_ParamLimits

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp3

0x933d,	// (0x00014bde) tabs_4_active_pane_g1

0xed08,	// (0x0001a5a9) tabs_4_active_pane_t1

0x5bcc,	// (0x0001146d) bg_passive_tab_pane_cp3_ParamLimits

0x5bcc,	// (0x0001146d) bg_passive_tab_pane_cp3

0x933d,	// (0x00014bde) tabs_4_1_passive_pane_g1

0xed08,	// (0x0001a5a9) tabs_4_1_passive_pane_t1

0x777d,	// (0x0001301e) list_highlight_pane_cp2

0x11ab,	// (0x0000ca4c) list_set_pane_ParamLimits

0x11ab,	// (0x0000ca4c) list_set_pane

0x1239,	// (0x0000cada) main_pane_set_t1_ParamLimits

0x1239,	// (0x0000cada) main_pane_set_t1

0x1259,	// (0x0000cafa) main_pane_set_t2_ParamLimits

0x1259,	// (0x0000cafa) main_pane_set_t2

0x126d,	// (0x0000cb0e) main_pane_set_t3_ParamLimits

0x126d,	// (0x0000cb0e) main_pane_set_t3

0x127f,	// (0x0000cb20) main_pane_set_t4_ParamLimits

0x127f,	// (0x0000cb20) main_pane_set_t4

0x0003,

0xf950,	// (0x0001b1f1) main_pane_set_t_ParamLimits

0xf950,	// (0x0001b1f1) main_pane_set_t

0x1291,	// (0x0000cb32) setting_code_pane

0x1299,	// (0x0000cb3a) setting_slider_graphic_pane

0x1299,	// (0x0000cb3a) setting_slider_pane

0x1299,	// (0x0000cb3a) setting_text_pane

0x1299,	// (0x0000cb3a) setting_volume_pane

0xd058,	// (0x000188f9) volume_set_pane

0x5932,	// (0x000111d3) bg_set_opt_pane_cp

0x37a5,	// (0x0000f046) setting_slider_pane_t1

0xd060,	// (0x00018901) setting_slider_pane_t2

0xd079,	// (0x0001891a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001adda) setting_slider_pane_t

0x37eb,	// (0x0000f08c) slider_set_pane

0x5852,	// (0x000110f3) bg_set_opt_pane_cp2

0x5974,	// (0x00011215) setting_slider_graphic_pane_g1

0xd090,	// (0x00018931) setting_slider_graphic_pane_t1

0xd09f,	// (0x00018940) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001ade1) setting_slider_graphic_pane_t

0xd0ae,	// (0x0001894f) slider_set_pane_cp

0x5852,	// (0x000110f3) input_focus_pane_cp1

0x9027,	// (0x000148c8) list_set_text_pane

0x576b,	// (0x0001100c) setting_text_pane_g1

0x5852,	// (0x000110f3) input_focus_pane_cp2

0x576b,	// (0x0001100c) setting_code_pane_g1

0x597d,	// (0x0001121e) setting_code_pane_t1

0xed1e,	// (0x0001a5bf) set_text_pane_t1_ParamLimits

0xed1e,	// (0x0001a5bf) set_text_pane_t1

0x6754,	// (0x00011ff5) set_opt_bg_pane_g1

0x675c,	// (0x00011ffd) set_opt_bg_pane_g2

0x1177,	// (0x0000ca18) set_opt_bg_pane_g3

0x676c,	// (0x0001200d) set_opt_bg_pane_g4

0x6774,	// (0x00012015) set_opt_bg_pane_g5

0x677c,	// (0x0001201d) set_opt_bg_pane_g6

0x117f,	// (0x0000ca20) set_opt_bg_pane_g7

0x1187,	// (0x0000ca28) set_opt_bg_pane_g8

0x118f,	// (0x0000ca30) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0001b1de) set_opt_bg_pane_g

0x8ffa,	// (0x0001489b) slider_set_pane_g1

0x458d,	// (0x0000fe2e) slider_set_pane_g2

0x0006,

0xf92e,	// (0x0001b1cf) slider_set_pane_g

0xd904,	// (0x000191a5) volume_set_pane_g1

0xd90c,	// (0x000191ad) volume_set_pane_g2

0xd914,	// (0x000191b5) volume_set_pane_g3

0xd91c,	// (0x000191bd) volume_set_pane_g4

0xd924,	// (0x000191c5) volume_set_pane_g5

0xd92c,	// (0x000191cd) volume_set_pane_g6

0xd934,	// (0x000191d5) volume_set_pane_g7

0xd93c,	// (0x000191dd) volume_set_pane_g8

0xd944,	// (0x000191e5) volume_set_pane_g9

0xd94c,	// (0x000191ed) volume_set_pane_g10

0x0009,

0xf906,	// (0x0001b1a7) volume_set_pane_g

0xed38,	// (0x0001a5d9) indicator_pane_ParamLimits

0xed38,	// (0x0001a5d9) indicator_pane

0xed60,	// (0x0001a601) main_idle_pane_g2_ParamLimits

0xed60,	// (0x0001a601) main_idle_pane_g2

0xed90,	// (0x0001a631) main_pane_idle_g1_ParamLimits

0xed90,	// (0x0001a631) main_pane_idle_g1

0x59e4,	// (0x00011285) popup_clock_digital_analogue_window_ParamLimits

0x59e4,	// (0x00011285) popup_clock_digital_analogue_window

0xedb5,	// (0x0001a656) soft_indicator_pane_ParamLimits

0xedb5,	// (0x0001a656) soft_indicator_pane

0xedcf,	// (0x0001a670) wallpaper_pane_ParamLimits

0xedcf,	// (0x0001a670) wallpaper_pane

0x576b,	// (0x0001100c) wallpaper_pane_g1

0xede1,	// (0x0001a682) indicator_pane_g1_ParamLimits

0xede1,	// (0x0001a682) indicator_pane_g1

0x9439,	// (0x00014cda) navi_navi_icon_text_pane_srt_g1

0x5a36,	// (0x000112d7) soft_indicator_pane_t1

0x5a50,	// (0x000112f1) aid_ps_area_pane

0xedfa,	// (0x0001a69b) aid_ps_clock_pane

0x5a6d,	// (0x0001130e) aid_ps_indicator_pane

0x5a79,	// (0x0001131a) indicator_ps_pane_ParamLimits

0x5a79,	// (0x0001131a) indicator_ps_pane

0x5a88,	// (0x00011329) power_save_pane_g1_ParamLimits

0x5a88,	// (0x00011329) power_save_pane_g1

0x5a94,	// (0x00011335) power_save_pane_g2_ParamLimits

0x5a94,	// (0x00011335) power_save_pane_g2

0x3510,	// (0x0000edb1) aid_navinavi_width_pane

0x5a50,	// (0x000112f1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001ade6) power_save_pane_g_ParamLimits

0xf545,	// (0x0001ade6) power_save_pane_g

0x5aa2,	// (0x00011343) power_save_pane_t1_ParamLimits

0x5aa2,	// (0x00011343) power_save_pane_t1

0xedfa,	// (0x0001a69b) aid_ps_clock_pane_ParamLimits

0x5a6d,	// (0x0001130e) aid_ps_indicator_pane_ParamLimits

0x5ab4,	// (0x00011355) power_save_pane_t4_ParamLimits

0x5ab4,	// (0x00011355) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001adeb) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001adeb) power_save_pane_t

0x5ade,	// (0x0001137f) power_save_t3_ParamLimits

0x5ade,	// (0x0001137f) power_save_t3

0x5ac9,	// (0x0001136a) power_save_t2_ParamLimits

0x5ac9,	// (0x0001136a) power_save_t2

0x5af3,	// (0x00011394) indicator_ps_pane_g1

0xee06,	// (0x0001a6a7) ai_gene_pane_ParamLimits

0xee06,	// (0x0001a6a7) ai_gene_pane

0xee1d,	// (0x0001a6be) ai_links_pane_ParamLimits

0xee1d,	// (0x0001a6be) ai_links_pane

0xee2f,	// (0x0001a6d0) indicator_pane_cp1_ParamLimits

0xee2f,	// (0x0001a6d0) indicator_pane_cp1

0xee3e,	// (0x0001a6df) main_pane_idle_g1_cp_ParamLimits

0xee3e,	// (0x0001a6df) main_pane_idle_g1_cp

0x5b2c,	// (0x000113cd) popup_ai_links_title_window

0xee56,	// (0x0001a6f7) soft_indicator_pane_cp1_ParamLimits

0xee56,	// (0x0001a6f7) soft_indicator_pane_cp1

0x8e00,	// (0x000146a1) ai_links_pane_g1

0x8e09,	// (0x000146aa) grid_ai_links_pane

0x10b8,	// (0x0000c959) ai_gene_pane_1

0x8dee,	// (0x0001468f) ai_gene_pane_2

0x8df7,	// (0x00014698) list_highlight_pane_cp4

0x109c,	// (0x0000c93d) cell_ai_link_pane_ParamLimits

0x109c,	// (0x0000c93d) cell_ai_link_pane

0x8dc1,	// (0x00014662) cell_ai_link_pane_g1

0x5d94,	// (0x00011635) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x0001b182) cell_ai_link_pane_g

0x5852,	// (0x000110f3) grid_highlight_cp2

0x5852,	// (0x000110f3) bg_popup_sub_pane_cp1

0x5b4f,	// (0x000113f0) popup_ai_links_title_window_t1

0x8d13,	// (0x000145b4) ai_gene_pane_1_g1_ParamLimits

0x8d13,	// (0x000145b4) ai_gene_pane_1_g1

0x8d1f,	// (0x000145c0) ai_gene_pane_1_g2_ParamLimits

0x8d1f,	// (0x000145c0) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x0001b178) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x0001b178) ai_gene_pane_1_g

0x8d2c,	// (0x000145cd) ai_gene_pane_1_t1_ParamLimits

0x8d2c,	// (0x000145cd) ai_gene_pane_1_t1

0x8d60,	// (0x00014601) grid_ai_soft_ind_pane

0x8cfe,	// (0x0001459f) ai_gene_pane_2_t1_ParamLimits

0x8cfe,	// (0x0001459f) ai_gene_pane_2_t1

0xee6a,	// (0x0001a70b) main_pane_empty_t1_ParamLimits

0xee6a,	// (0x0001a70b) main_pane_empty_t1

0xee87,	// (0x0001a728) main_pane_empty_t2_ParamLimits

0xee87,	// (0x0001a728) main_pane_empty_t2

0xee9f,	// (0x0001a740) main_pane_empty_t3_ParamLimits

0xee9f,	// (0x0001a740) main_pane_empty_t3

0xeeb2,	// (0x0001a753) main_pane_empty_t4_ParamLimits

0xeeb2,	// (0x0001a753) main_pane_empty_t4

0xeec5,	// (0x0001a766) main_pane_empty_t5_ParamLimits

0xeec5,	// (0x0001a766) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001adf0) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001adf0) main_pane_empty_t

0x68a7,	// (0x00012148) bg_popup_window_pane_ParamLimits

0x68a7,	// (0x00012148) bg_popup_window_pane

0x8a78,	// (0x00014319) find_popup_pane_cp2_ParamLimits

0x8a78,	// (0x00014319) find_popup_pane_cp2

0x8a84,	// (0x00014325) heading_pane_ParamLimits

0x8a84,	// (0x00014325) heading_pane

0x5852,	// (0x000110f3) bg_popup_sub_pane

0x0fdf,	// (0x0000c880) bg_popup_window_pane_g1_ParamLimits

0x0fdf,	// (0x0000c880) bg_popup_window_pane_g1

0x0fee,	// (0x0000c88f) bg_popup_window_pane_g2_ParamLimits

0x0fee,	// (0x0000c88f) bg_popup_window_pane_g2

0x0ffa,	// (0x0000c89b) bg_popup_window_pane_g3_ParamLimits

0x0ffa,	// (0x0000c89b) bg_popup_window_pane_g3

0x1006,	// (0x0000c8a7) bg_popup_window_pane_g4_ParamLimits

0x1006,	// (0x0000c8a7) bg_popup_window_pane_g4

0x1015,	// (0x0000c8b6) bg_popup_window_pane_g5_ParamLimits

0x1015,	// (0x0000c8b6) bg_popup_window_pane_g5

0x1025,	// (0x0000c8c6) bg_popup_window_pane_g6_ParamLimits

0x1025,	// (0x0000c8c6) bg_popup_window_pane_g6

0x1031,	// (0x0000c8d2) bg_popup_window_pane_g7_ParamLimits

0x1031,	// (0x0000c8d2) bg_popup_window_pane_g7

0x1040,	// (0x0000c8e1) bg_popup_window_pane_g8_ParamLimits

0x1040,	// (0x0000c8e1) bg_popup_window_pane_g8

0x104f,	// (0x0000c8f0) bg_popup_window_pane_g9_ParamLimits

0x104f,	// (0x0000c8f0) bg_popup_window_pane_g9

0x8a5d,	// (0x000142fe) bg_popup_window_pane_g10_ParamLimits

0x8a5d,	// (0x000142fe) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x0001b140) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x0001b140) bg_popup_window_pane_g

0x8986,	// (0x00014227) bg_popup_heading_pane_ParamLimits

0x8986,	// (0x00014227) bg_popup_heading_pane

0x4615,	// (0x0000feb6) tabs_4_passive_pane_cp_srt_ParamLimits

0x4615,	// (0x0000feb6) tabs_4_passive_pane_cp_srt

0x4627,	// (0x0000fec8) tabs_4_passive_pane_srt_ParamLimits

0x899a,	// (0x0001423b) heading_pane_g2

0x4627,	// (0x0000fec8) tabs_4_passive_pane_srt

0x7d92,	// (0x00013633) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7d92,	// (0x00013633) bg_passive_tab_pane_cp3_srt

0x89a2,	// (0x00014243) heading_pane_t1_ParamLimits

0x89a2,	// (0x00014243) heading_pane_t1

0x89b9,	// (0x0001425a) heading_pane_t2_ParamLimits

0x89b9,	// (0x0001425a) heading_pane_t2

0x0001,

0xf89a,	// (0x0001b13b) heading_pane_t_ParamLimits

0xf89a,	// (0x0001b13b) heading_pane_t

0x84f1,	// (0x00013d92) bg_popup_heading_pane_g1

0x859a,	// (0x00013e3b) bg_popup_heading_pane_g2

0x85a2,	// (0x00013e43) bg_popup_heading_pane_g3

0x85aa,	// (0x00013e4b) bg_popup_heading_pane_g4

0x85b2,	// (0x00013e53) bg_popup_heading_pane_g5

0x85ba,	// (0x00013e5b) bg_popup_heading_pane_g6

0x85c2,	// (0x00013e63) bg_popup_heading_pane_g7

0x85ca,	// (0x00013e6b) bg_popup_heading_pane_g8

0x85d2,	// (0x00013e73) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x0001b0f7) bg_popup_heading_pane_g

0x7c7a,	// (0x0001351b) bg_popup_sub_pane_g1

0x7c8a,	// (0x0001352b) bg_popup_sub_pane_g2

0x7c82,	// (0x00013523) bg_popup_sub_pane_g3

0x7c9a,	// (0x0001353b) bg_popup_sub_pane_g4

0x7c92,	// (0x00013533) bg_popup_sub_pane_g5

0x7ca2,	// (0x00013543) bg_popup_sub_pane_g6

0x7caa,	// (0x0001354b) bg_popup_sub_pane_g7

0x7cba,	// (0x0001355b) bg_popup_sub_pane_g8

0x7cb2,	// (0x00013553) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x0001b0d1) bg_popup_sub_pane_g

0x5bcc,	// (0x0001146d) bg_popup_window_pane_cp5_ParamLimits

0x5bcc,	// (0x0001146d) bg_popup_window_pane_cp5

0x5be8,	// (0x00011489) popup_note_window_g1_ParamLimits

0x5be8,	// (0x00011489) popup_note_window_g1

0x5bf4,	// (0x00011495) popup_note_window_t1_ParamLimits

0x5bf4,	// (0x00011495) popup_note_window_t1

0x5c0a,	// (0x000114ab) popup_note_window_t2_ParamLimits

0x5c0a,	// (0x000114ab) popup_note_window_t2

0x5c20,	// (0x000114c1) popup_note_window_t3_ParamLimits

0x5c20,	// (0x000114c1) popup_note_window_t3

0x5c36,	// (0x000114d7) popup_note_window_t4_ParamLimits

0x5c36,	// (0x000114d7) popup_note_window_t4

0x5c5e,	// (0x000114ff) popup_note_window_t5_ParamLimits

0x5c5e,	// (0x000114ff) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001adfb) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001adfb) popup_note_window_t

0x5ca8,	// (0x00011549) bg_popup_window_pane_cp6_ParamLimits

0x5ca8,	// (0x00011549) bg_popup_window_pane_cp6

0x846d,	// (0x00013d0e) popup_note_image_window_g1_ParamLimits

0x846d,	// (0x00013d0e) popup_note_image_window_g1

0x8479,	// (0x00013d1a) popup_note_image_window_g2_ParamLimits

0x8479,	// (0x00013d1a) popup_note_image_window_g2

0x0001,

0xf824,	// (0x0001b0c5) popup_note_image_window_g_ParamLimits

0xf824,	// (0x0001b0c5) popup_note_image_window_g

0x8492,	// (0x00013d33) popup_note_image_window_t1_ParamLimits

0x8492,	// (0x00013d33) popup_note_image_window_t1

0x84ab,	// (0x00013d4c) popup_note_image_window_t2_ParamLimits

0x84ab,	// (0x00013d4c) popup_note_image_window_t2

0x84c4,	// (0x00013d65) popup_note_image_window_t3_ParamLimits

0x84c4,	// (0x00013d65) popup_note_image_window_t3

0x0002,

0xf829,	// (0x0001b0ca) popup_note_image_window_t_ParamLimits

0xf829,	// (0x0001b0ca) popup_note_image_window_t

0x833c,	// (0x00013bdd) bg_popup_window_pane_cp7_ParamLimits

0x833c,	// (0x00013bdd) bg_popup_window_pane_cp7

0x836c,	// (0x00013c0d) popup_note_wait_window_g1_ParamLimits

0x836c,	// (0x00013c0d) popup_note_wait_window_g1

0x8378,	// (0x00013c19) popup_note_wait_window_g2_ParamLimits

0x8378,	// (0x00013c19) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x0001b0b3) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x0001b0b3) popup_note_wait_window_g

0x8390,	// (0x00013c31) popup_note_wait_window_t1_ParamLimits

0x8390,	// (0x00013c31) popup_note_wait_window_t1

0x83b7,	// (0x00013c58) popup_note_wait_window_t2_ParamLimits

0x83b7,	// (0x00013c58) popup_note_wait_window_t2

0x83d4,	// (0x00013c75) popup_note_wait_window_t3_ParamLimits

0x83d4,	// (0x00013c75) popup_note_wait_window_t3

0x83e7,	// (0x00013c88) popup_note_wait_window_t4_ParamLimits

0x83e7,	// (0x00013c88) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x0001b0ba) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x0001b0ba) popup_note_wait_window_t

0x840c,	// (0x00013cad) wait_bar_pane_ParamLimits

0x840c,	// (0x00013cad) wait_bar_pane

0x5852,	// (0x000110f3) wait_anim_pane

0x5852,	// (0x000110f3) wait_border_pane

0x576b,	// (0x0001100c) wait_anim_pane_g1

0x576b,	// (0x0001100c) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001af7a) wait_anim_pane_g

0x82ec,	// (0x00013b8d) wait_border_pane_g1

0x82f5,	// (0x00013b96) wait_border_pane_g2

0x82fe,	// (0x00013b9f) wait_border_pane_g3

0x0002,

0xf80b,	// (0x0001b0ac) wait_border_pane_g

0x815c,	// (0x000139fd) bg_popup_window_pane_cp16_ParamLimits

0x815c,	// (0x000139fd) bg_popup_window_pane_cp16

0x825c,	// (0x00013afd) indicator_popup_pane_cp4_ParamLimits

0x825c,	// (0x00013afd) indicator_popup_pane_cp4

0x8270,	// (0x00013b11) popup_query_data_window_t1_ParamLimits

0x8270,	// (0x00013b11) popup_query_data_window_t1

0x8282,	// (0x00013b23) popup_query_data_window_t2_ParamLimits

0x8282,	// (0x00013b23) popup_query_data_window_t2

0x829b,	// (0x00013b3c) popup_query_data_window_t3_ParamLimits

0x829b,	// (0x00013b3c) popup_query_data_window_t3

0x0002,

0xf804,	// (0x0001b0a5) popup_query_data_window_t_ParamLimits

0xf804,	// (0x0001b0a5) popup_query_data_window_t

0x82b5,	// (0x00013b56) query_popup_data_pane_ParamLimits

0x82b5,	// (0x00013b56) query_popup_data_pane

0x82c9,	// (0x00013b6a) query_popup_data_pane_cp1_ParamLimits

0x82c9,	// (0x00013b6a) query_popup_data_pane_cp1

0x815c,	// (0x000139fd) bg_popup_window_pane_cp10_ParamLimits

0x815c,	// (0x000139fd) bg_popup_window_pane_cp10

0x818e,	// (0x00013a2f) indicator_popup_pane_ParamLimits

0x818e,	// (0x00013a2f) indicator_popup_pane

0x81b0,	// (0x00013a51) popup_query_code_window_t1_ParamLimits

0x81b0,	// (0x00013a51) popup_query_code_window_t1

0x81ca,	// (0x00013a6b) popup_query_code_window_t2_ParamLimits

0x81ca,	// (0x00013a6b) popup_query_code_window_t2

0x8213,	// (0x00013ab4) popup_query_code_window_t3_ParamLimits

0x8213,	// (0x00013ab4) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x0001b09e) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x0001b09e) popup_query_code_window_t

0x8242,	// (0x00013ae3) query_popup_pane_ParamLimits

0x8242,	// (0x00013ae3) query_popup_pane

0x5ca8,	// (0x00011549) bg_popup_window_pane_cp15_ParamLimits

0x5ca8,	// (0x00011549) bg_popup_window_pane_cp15

0x5cc6,	// (0x00011567) indicator_popup_pane_cp1_ParamLimits

0x5cc6,	// (0x00011567) indicator_popup_pane_cp1

0x5cd9,	// (0x0001157a) indicator_popup_pane_cp2_ParamLimits

0x5cd9,	// (0x0001157a) indicator_popup_pane_cp2

0x5cec,	// (0x0001158d) popup_query_data_code_window_g1_ParamLimits

0x5cec,	// (0x0001158d) popup_query_data_code_window_g1

0x5cff,	// (0x000115a0) popup_query_data_code_window_t1_ParamLimits

0x5cff,	// (0x000115a0) popup_query_data_code_window_t1

0x5d11,	// (0x000115b2) popup_query_data_code_window_t2_ParamLimits

0x5d11,	// (0x000115b2) popup_query_data_code_window_t2

0x5d23,	// (0x000115c4) popup_query_data_code_window_t3_ParamLimits

0x5d23,	// (0x000115c4) popup_query_data_code_window_t3

0x5d39,	// (0x000115da) popup_query_data_code_window_t4_ParamLimits

0x5d39,	// (0x000115da) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001ae06) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001ae06) popup_query_data_code_window_t

0x42fa,	// (0x0000fb9b) list_single_midp_graphic_pane_g3

0x5d51,	// (0x000115f2) query_popup_data_pane_cp2_ParamLimits

0x5d64,	// (0x00011605) query_popup_pane_cp2_ParamLimits

0x5d64,	// (0x00011605) query_popup_pane_cp2

0x5852,	// (0x000110f3) bg_popup_window_pane_cp11

0x8140,	// (0x000139e1) heading_pane_cp5

0x8148,	// (0x000139e9) listscroll_popup_info_pane

0x5852,	// (0x000110f3) input_focus_pane_cp3

0x5d77,	// (0x00011618) query_popup_pane_t1

0x5d85,	// (0x00011626) list_popup_info_pane_ParamLimits

0x5d85,	// (0x00011626) list_popup_info_pane

0x5d94,	// (0x00011635) listscroll_popup_info_pane_g1

0x5d9c,	// (0x0001163d) scroll_pane_cp7

0x5da4,	// (0x00011645) popup_info_list_pane_t1_ParamLimits

0x5da4,	// (0x00011645) popup_info_list_pane_t1

0x5dbe,	// (0x0001165f) popup_info_list_pane_t2_ParamLimits

0x5dbe,	// (0x0001165f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001ae0f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001ae0f) popup_info_list_pane_t

0x5852,	// (0x000110f3) bg_popup_window_pane_cp12

0x9453,	// (0x00014cf4) find_popup_pane

0x5932,	// (0x000111d3) bg_popup_window_pane_cp3

0x5dd8,	// (0x00011679) heading_pane_cp3

0x5de7,	// (0x00011688) listscroll_popup_graphic_pane

0x5852,	// (0x000110f3) bg_popup_window_pane_cp4

0xef28,	// (0x0001a7c9) heading_pane_cp4

0x5e4e,	// (0x000116ef) listscroll_popup_colour_pane

0x5e56,	// (0x000116f7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5e56,	// (0x000116f7) cell_large_graphic_colour_none_popup_pane

0xef30,	// (0x0001a7d1) grid_large_graphic_colour_popup_pane_ParamLimits

0xef30,	// (0x0001a7d1) grid_large_graphic_colour_popup_pane

0x5e82,	// (0x00011723) listscroll_popup_colour_pane_g1_ParamLimits

0x5e82,	// (0x00011723) listscroll_popup_colour_pane_g1

0x5e99,	// (0x0001173a) listscroll_popup_colour_pane_g2_ParamLimits

0x5e99,	// (0x0001173a) listscroll_popup_colour_pane_g2

0x5eb0,	// (0x00011751) listscroll_popup_colour_pane_g3_ParamLimits

0x5eb0,	// (0x00011751) listscroll_popup_colour_pane_g3

0xef4c,	// (0x0001a7ed) listscroll_popup_colour_pane_g4_ParamLimits

0xef4c,	// (0x0001a7ed) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001ae14) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001ae14) listscroll_popup_colour_pane_g

0x5ecf,	// (0x00011770) scroll_pane_cp6_ParamLimits

0x5ecf,	// (0x00011770) scroll_pane_cp6

0xef5b,	// (0x0001a7fc) cell_large_graphic_colour_popup_pane_ParamLimits

0xef5b,	// (0x0001a7fc) cell_large_graphic_colour_popup_pane

0x5f00,	// (0x000117a1) cell_large_graphic_colour_none_popup_pane_t1

0x5852,	// (0x000110f3) grid_highlight_pane_cp5

0x5f0f,	// (0x000117b0) cell_large_graphic_colour_popup_pane_g1

0x5f17,	// (0x000117b8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001ae1d) cell_large_graphic_colour_popup_pane_g

0x5f1f,	// (0x000117c0) cell_large_graphic_colour_popup_pane_g2_copy1

0x5f28,	// (0x000117c9) grid_highlight_pane_cp4

0x5f30,	// (0x000117d1) bg_popup_window_pane_cp8_ParamLimits

0x5f30,	// (0x000117d1) bg_popup_window_pane_cp8

0x5f4b,	// (0x000117ec) popup_snote_single_text_window_g1_ParamLimits

0x5f4b,	// (0x000117ec) popup_snote_single_text_window_g1

0x5f5d,	// (0x000117fe) popup_snote_single_text_window_t1_ParamLimits

0x5f5d,	// (0x000117fe) popup_snote_single_text_window_t1

0x5f70,	// (0x00011811) popup_snote_single_text_window_t2_ParamLimits

0x5f70,	// (0x00011811) popup_snote_single_text_window_t2

0x5f83,	// (0x00011824) popup_snote_single_text_window_t3_ParamLimits

0x5f83,	// (0x00011824) popup_snote_single_text_window_t3

0x5fbc,	// (0x0001185d) popup_snote_single_text_window_t4_ParamLimits

0x5fbc,	// (0x0001185d) popup_snote_single_text_window_t4

0x5ff0,	// (0x00011891) popup_snote_single_text_window_t5_ParamLimits

0x5ff0,	// (0x00011891) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001ae22) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001ae22) popup_snote_single_text_window_t

0x601f,	// (0x000118c0) bg_popup_window_pane_cp9_ParamLimits

0x601f,	// (0x000118c0) bg_popup_window_pane_cp9

0x5f4b,	// (0x000117ec) popup_snote_single_graphic_window_g1_ParamLimits

0x5f4b,	// (0x000117ec) popup_snote_single_graphic_window_g1

0x602d,	// (0x000118ce) popup_snote_single_graphic_window_g2_ParamLimits

0x602d,	// (0x000118ce) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001ae2d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001ae2d) popup_snote_single_graphic_window_g

0x6039,	// (0x000118da) popup_snote_single_graphic_window_t1_ParamLimits

0x6039,	// (0x000118da) popup_snote_single_graphic_window_t1

0x604c,	// (0x000118ed) popup_snote_single_graphic_window_t2_ParamLimits

0x604c,	// (0x000118ed) popup_snote_single_graphic_window_t2

0x5f83,	// (0x00011824) popup_snote_single_graphic_window_t3_ParamLimits

0x5f83,	// (0x00011824) popup_snote_single_graphic_window_t3

0x5fbc,	// (0x0001185d) popup_snote_single_graphic_window_t4_ParamLimits

0x5fbc,	// (0x0001185d) popup_snote_single_graphic_window_t4

0x5ff0,	// (0x00011891) popup_snote_single_graphic_window_t5_ParamLimits

0x5ff0,	// (0x00011891) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001ae32) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001ae32) popup_snote_single_graphic_window_t

0x13b0,	// (0x0000cc51) grid_graphic_popup_pane_ParamLimits

0x13b0,	// (0x0000cc51) grid_graphic_popup_pane

0x13d3,	// (0x0000cc74) listscroll_popup_graphic_pane_g1_ParamLimits

0x13d3,	// (0x0000cc74) listscroll_popup_graphic_pane_g1

0x13e7,	// (0x0000cc88) listscroll_popup_graphic_pane_g2_ParamLimits

0x13e7,	// (0x0000cc88) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x0001b21b) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x0001b21b) listscroll_popup_graphic_pane_g

0x940b,	// (0x00014cac) scroll_pane_cp5

0x136c,	// (0x0000cc0d) cell_graphic_popup_pane_ParamLimits

0x136c,	// (0x0000cc0d) cell_graphic_popup_pane

0x9345,	// (0x00014be6) cell_graphic_popup_pane_g1

0x934d,	// (0x00014bee) cell_graphic_popup_pane_g2

0x5f1f,	// (0x000117c0) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x0001b214) cell_graphic_popup_pane_g

0x9356,	// (0x00014bf7) cell_graphic_popup_pane_t2

0x5f28,	// (0x000117c9) grid_highlight_pane_cp3

0x6071,	// (0x00011912) list_gen_pane_ParamLimits

0x6071,	// (0x00011912) list_gen_pane

0x60a2,	// (0x00011943) scroll_pane

0x133f,	// (0x0000cbe0) bg_list_pane_g1_ParamLimits

0x133f,	// (0x0000cbe0) bg_list_pane_g1

0x92dc,	// (0x00014b7d) bg_list_pane_g2_ParamLimits

0x92dc,	// (0x00014b7d) bg_list_pane_g2

0x92ef,	// (0x00014b90) bg_list_pane_g3_ParamLimits

0x92ef,	// (0x00014b90) bg_list_pane_g3

0x9301,	// (0x00014ba2) bg_list_pane_g4_ParamLimits

0x9301,	// (0x00014ba2) bg_list_pane_g4

0x135a,	// (0x0000cbfb) bg_list_pane_g5_ParamLimits

0x135a,	// (0x0000cbfb) bg_list_pane_g5

0x0004,

0xf968,	// (0x0001b209) bg_list_pane_g_ParamLimits

0xf968,	// (0x0001b209) bg_list_pane_g

0x12df,	// (0x0000cb80) list_double2_graphic_large_graphic_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double2_graphic_large_graphic_pane

0x12df,	// (0x0000cb80) list_double2_graphic_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double2_graphic_pane

0x12df,	// (0x0000cb80) list_double2_large_graphic_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double2_large_graphic_pane

0x12df,	// (0x0000cb80) list_double2_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double2_pane

0x12df,	// (0x0000cb80) list_double_graphic_heading_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_graphic_heading_pane

0x12df,	// (0x0000cb80) list_double_graphic_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_graphic_pane

0x12df,	// (0x0000cb80) list_double_heading_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_heading_pane

0x12df,	// (0x0000cb80) list_double_large_graphic_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_large_graphic_pane

0x12df,	// (0x0000cb80) list_double_number_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_number_pane

0x12df,	// (0x0000cb80) list_double_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_pane

0x12df,	// (0x0000cb80) list_double_time_pane_ParamLimits

0x12df,	// (0x0000cb80) list_double_time_pane

0x12df,	// (0x0000cb80) list_setting_number_pane_ParamLimits

0x12df,	// (0x0000cb80) list_setting_number_pane

0x12df,	// (0x0000cb80) list_setting_pane_ParamLimits

0x12df,	// (0x0000cb80) list_setting_pane

0x12f0,	// (0x0000cb91) list_single_2graphic_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_2graphic_pane

0x12f0,	// (0x0000cb91) list_single_graphic_heading_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_graphic_heading_pane

0x12f0,	// (0x0000cb91) list_single_graphic_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_graphic_pane

0x12f0,	// (0x0000cb91) list_single_heading_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_heading_pane

0x132d,	// (0x0000cbce) list_single_large_graphic_pane_ParamLimits

0x132d,	// (0x0000cbce) list_single_large_graphic_pane

0x12f0,	// (0x0000cb91) list_single_number_heading_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_number_heading_pane

0x12f0,	// (0x0000cb91) list_single_number_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_number_pane

0x12f0,	// (0x0000cb91) list_single_pane_ParamLimits

0x12f0,	// (0x0000cb91) list_single_pane

0x5852,	// (0x000110f3) list_highlight_pane_cp1

0x729c,	// (0x00012b3d) list_single_pane_g1_ParamLimits

0x729c,	// (0x00012b3d) list_single_pane_g1

0x7bfe,	// (0x0001349f) list_single_pane_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_single_pane_g

0x99a5,	// (0x00015246) list_single_pane_t1_ParamLimits

0x99a5,	// (0x00015246) list_single_pane_t1

0x729c,	// (0x00012b3d) list_single_number_pane_g1_ParamLimits

0x729c,	// (0x00012b3d) list_single_number_pane_g1

0x7bfe,	// (0x0001349f) list_single_number_pane_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_single_number_pane_g

0x7c0a,	// (0x000134ab) list_single_number_pane_t1_ParamLimits

0x7c0a,	// (0x000134ab) list_single_number_pane_t1

0x114f,	// (0x0000c9f0) list_single_number_pane_t2_ParamLimits

0x114f,	// (0x0000c9f0) list_single_number_pane_t2

0x0001,

0xf929,	// (0x0001b1ca) list_single_number_pane_t_ParamLimits

0xf929,	// (0x0001b1ca) list_single_number_pane_t

0x7bf2,	// (0x00013493) list_single_graphic_pane_g1_ParamLimits

0x7bf2,	// (0x00013493) list_single_graphic_pane_g1

0x729c,	// (0x00012b3d) list_single_graphic_pane_g2_ParamLimits

0x729c,	// (0x00012b3d) list_single_graphic_pane_g2

0x7bfe,	// (0x0001349f) list_single_graphic_pane_g3_ParamLimits

0x7bfe,	// (0x0001349f) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001ae3d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001ae3d) list_single_graphic_pane_g

0x7c0a,	// (0x000134ab) list_single_graphic_pane_t1_ParamLimits

0x7c0a,	// (0x000134ab) list_single_graphic_pane_t1

0x729c,	// (0x00012b3d) list_single_heading_pane_g1_ParamLimits

0x729c,	// (0x00012b3d) list_single_heading_pane_g1

0x7bfe,	// (0x0001349f) list_single_heading_pane_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_single_heading_pane_g

0xef82,	// (0x0001a823) list_single_heading_pane_t1_ParamLimits

0xef82,	// (0x0001a823) list_single_heading_pane_t1

0xef98,	// (0x0001a839) list_single_heading_pane_t2_ParamLimits

0xef98,	// (0x0001a839) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001ae49) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001ae49) list_single_heading_pane_t

0x729c,	// (0x00012b3d) list_single_number_heading_pane_g1_ParamLimits

0x729c,	// (0x00012b3d) list_single_number_heading_pane_g1

0x7bfe,	// (0x0001349f) list_single_number_heading_pane_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_single_number_heading_pane_g

0xef82,	// (0x0001a823) list_single_number_heading_pane_t1_ParamLimits

0xef82,	// (0x0001a823) list_single_number_heading_pane_t1

0xefaa,	// (0x0001a84b) list_single_number_heading_pane_t2_ParamLimits

0xefaa,	// (0x0001a84b) list_single_number_heading_pane_t2

0x72d8,	// (0x00012b79) list_single_number_heading_pane_t3_ParamLimits

0x72d8,	// (0x00012b79) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001ae4e) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001ae4e) list_single_number_heading_pane_t

0x7bf2,	// (0x00013493) list_single_graphic_heading_pane_g1_ParamLimits

0x7bf2,	// (0x00013493) list_single_graphic_heading_pane_g1

0xefbc,	// (0x0001a85d) list_single_graphic_heading_pane_g4_ParamLimits

0xefbc,	// (0x0001a85d) list_single_graphic_heading_pane_g4

0x7bfe,	// (0x0001349f) list_single_graphic_heading_pane_g5_ParamLimits

0x7bfe,	// (0x0001349f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001ae55) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001ae55) list_single_graphic_heading_pane_g

0xef82,	// (0x0001a823) list_single_graphic_heading_pane_t1_ParamLimits

0xef82,	// (0x0001a823) list_single_graphic_heading_pane_t1

0xefcd,	// (0x0001a86e) list_single_graphic_heading_pane_t2_ParamLimits

0xefcd,	// (0x0001a86e) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001ae5c) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001ae5c) list_single_graphic_heading_pane_t

0x617e,	// (0x00011a1f) list_single_large_graphic_pane_g1_ParamLimits

0x617e,	// (0x00011a1f) list_single_large_graphic_pane_g1

0x618a,	// (0x00011a2b) list_single_large_graphic_pane_g2_ParamLimits

0x618a,	// (0x00011a2b) list_single_large_graphic_pane_g2

0x6196,	// (0x00011a37) list_single_large_graphic_pane_g3_ParamLimits

0x6196,	// (0x00011a37) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001ae61) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001ae61) list_single_large_graphic_pane_g

0x82f5,	// (0x00013b96) wait_border_pane_g2_copy1

0x61a2,	// (0x00011a43) list_single_large_graphic_pane_g4_cp2

0x61aa,	// (0x00011a4b) list_single_large_graphic_pane_t1_ParamLimits

0x61aa,	// (0x00011a4b) list_single_large_graphic_pane_t1

0x7312,	// (0x00012bb3) list_double_pane_g1_ParamLimits

0x7312,	// (0x00012bb3) list_double_pane_g1

0xefdf,	// (0x0001a880) list_double_pane_g2_ParamLimits

0xefdf,	// (0x0001a880) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001ae68) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001ae68) list_double_pane_g

0xefeb,	// (0x0001a88c) list_double_pane_t1_ParamLimits

0xefeb,	// (0x0001a88c) list_double_pane_t1

0xf001,	// (0x0001a8a2) list_double_pane_t2_ParamLimits

0xf001,	// (0x0001a8a2) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001ae6d) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001ae6d) list_double_pane_t

0xf013,	// (0x0001a8b4) list_double2_pane_g1_ParamLimits

0xf013,	// (0x0001a8b4) list_double2_pane_g1

0x61cc,	// (0x00011a6d) list_double2_pane_g2_ParamLimits

0x61cc,	// (0x00011a6d) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001ae72) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001ae72) list_double2_pane_g

0x61d8,	// (0x00011a79) list_double2_pane_t1_ParamLimits

0x61d8,	// (0x00011a79) list_double2_pane_t1

0xf024,	// (0x0001a8c5) list_double2_pane_t2_ParamLimits

0xf024,	// (0x0001a8c5) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001ae77) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001ae77) list_double2_pane_t

0x7312,	// (0x00012bb3) list_double_number_pane_g1_ParamLimits

0x7312,	// (0x00012bb3) list_double_number_pane_g1

0xefdf,	// (0x0001a880) list_double_number_pane_g2_ParamLimits

0xefdf,	// (0x0001a880) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001ae68) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001ae68) list_double_number_pane_g

0xf036,	// (0x0001a8d7) list_double_number_pane_t1_ParamLimits

0xf036,	// (0x0001a8d7) list_double_number_pane_t1

0xf048,	// (0x0001a8e9) list_double_number_pane_t2_ParamLimits

0xf048,	// (0x0001a8e9) list_double_number_pane_t2

0xf05e,	// (0x0001a8ff) list_double_number_pane_t3_ParamLimits

0xf05e,	// (0x0001a8ff) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001ae7c) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001ae7c) list_double_number_pane_t

0xf070,	// (0x0001a911) list_double_graphic_pane_g1_ParamLimits

0xf070,	// (0x0001a911) list_double_graphic_pane_g1

0x8ad6,	// (0x00014377) list_double_graphic_pane_g2_ParamLimits

0x8ad6,	// (0x00014377) list_double_graphic_pane_g2

0xf07c,	// (0x0001a91d) list_double_graphic_pane_g3_ParamLimits

0xf07c,	// (0x0001a91d) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001ae83) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001ae83) list_double_graphic_pane_g

0xf094,	// (0x0001a935) list_double_graphic_pane_t1_ParamLimits

0xf094,	// (0x0001a935) list_double_graphic_pane_t1

0xf0aa,	// (0x0001a94b) list_double_graphic_pane_t2_ParamLimits

0xf0aa,	// (0x0001a94b) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001ae8c) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001ae8c) list_double_graphic_pane_t

0x627d,	// (0x00011b1e) list_double2_graphic_pane_g1_ParamLimits

0x627d,	// (0x00011b1e) list_double2_graphic_pane_g1

0x61c0,	// (0x00011a61) list_double2_graphic_pane_g2_ParamLimits

0x61c0,	// (0x00011a61) list_double2_graphic_pane_g2

0x61cc,	// (0x00011a6d) list_double2_graphic_pane_g3_ParamLimits

0x61cc,	// (0x00011a6d) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001ae91) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001ae91) list_double2_graphic_pane_g

0x6255,	// (0x00011af6) list_double2_graphic_pane_t1_ParamLimits

0x6255,	// (0x00011af6) list_double2_graphic_pane_t1

0xf0bc,	// (0x0001a95d) list_double2_graphic_pane_t2_ParamLimits

0xf0bc,	// (0x0001a95d) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001ae98) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001ae98) list_double2_graphic_pane_t

0xf0ce,	// (0x0001a96f) list_double_large_graphic_pane_g1_ParamLimits

0xf0ce,	// (0x0001a96f) list_double_large_graphic_pane_g1

0xf0f7,	// (0x0001a998) list_double_large_graphic_pane_g2_ParamLimits

0xf0f7,	// (0x0001a998) list_double_large_graphic_pane_g2

0xefdf,	// (0x0001a880) list_double_large_graphic_pane_g3_ParamLimits

0xefdf,	// (0x0001a880) list_double_large_graphic_pane_g3

0xf108,	// (0x0001a9a9) list_double_large_graphic_pane_g4_ParamLimits

0xf108,	// (0x0001a9a9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001ae9d) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001ae9d) list_double_large_graphic_pane_g

0xf119,	// (0x0001a9ba) list_double_large_graphic_pane_t1_ParamLimits

0xf119,	// (0x0001a9ba) list_double_large_graphic_pane_t1

0xf132,	// (0x0001a9d3) list_double_large_graphic_pane_t2_ParamLimits

0xf132,	// (0x0001a9d3) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001aea8) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001aea8) list_double_large_graphic_pane_t

0xf144,	// (0x0001a9e5) list_double2_large_graphic_pane_g1_ParamLimits

0xf144,	// (0x0001a9e5) list_double2_large_graphic_pane_g1

0xf013,	// (0x0001a8b4) list_double2_large_graphic_pane_g2_ParamLimits

0xf013,	// (0x0001a8b4) list_double2_large_graphic_pane_g2

0x61cc,	// (0x00011a6d) list_double2_large_graphic_pane_g3_ParamLimits

0x61cc,	// (0x00011a6d) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001aead) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001aead) list_double2_large_graphic_pane_g

0x6401,	// (0x00011ca2) list_double2_large_graphic_pane_t1_ParamLimits

0x6401,	// (0x00011ca2) list_double2_large_graphic_pane_t1

0xf150,	// (0x0001a9f1) list_double2_large_graphic_pane_t2_ParamLimits

0xf150,	// (0x0001a9f1) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001aeb4) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001aeb4) list_double2_large_graphic_pane_t

0xf162,	// (0x0001aa03) list_double_heading_pane_g1_ParamLimits

0xf162,	// (0x0001aa03) list_double_heading_pane_g1

0xf173,	// (0x0001aa14) list_double_heading_pane_g2_ParamLimits

0xf173,	// (0x0001aa14) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001aeb9) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001aeb9) list_double_heading_pane_g

0xf17f,	// (0x0001aa20) list_double_heading_pane_t1_ParamLimits

0xf17f,	// (0x0001aa20) list_double_heading_pane_t1

0xf024,	// (0x0001a8c5) list_double_heading_pane_t2_ParamLimits

0xf024,	// (0x0001a8c5) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001aebe) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001aebe) list_double_heading_pane_t

0x62d8,	// (0x00011b79) list_double_graphic_heading_pane_g1_ParamLimits

0x62d8,	// (0x00011b79) list_double_graphic_heading_pane_g1

0xf162,	// (0x0001aa03) list_double_graphic_heading_pane_g2_ParamLimits

0xf162,	// (0x0001aa03) list_double_graphic_heading_pane_g2

0xf173,	// (0x0001aa14) list_double_graphic_heading_pane_g3_ParamLimits

0xf173,	// (0x0001aa14) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001aec3) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001aec3) list_double_graphic_heading_pane_g

0xf195,	// (0x0001aa36) list_double_graphic_heading_pane_t1_ParamLimits

0xf195,	// (0x0001aa36) list_double_graphic_heading_pane_t1

0xf0bc,	// (0x0001a95d) list_double_graphic_heading_pane_t2_ParamLimits

0xf0bc,	// (0x0001a95d) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001aeca) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001aeca) list_double_graphic_heading_pane_t

0xf0f7,	// (0x0001a998) list_double_time_pane_g1_ParamLimits

0xf0f7,	// (0x0001a998) list_double_time_pane_g1

0xefdf,	// (0x0001a880) list_double_time_pane_g2_ParamLimits

0xefdf,	// (0x0001a880) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001aecf) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001aecf) list_double_time_pane_g

0xf1ab,	// (0x0001aa4c) list_double_time_pane_t1_ParamLimits

0xf1ab,	// (0x0001aa4c) list_double_time_pane_t1

0xf1c1,	// (0x0001aa62) list_double_time_pane_t2_ParamLimits

0xf1c1,	// (0x0001aa62) list_double_time_pane_t2

0xf1d3,	// (0x0001aa74) list_double_time_pane_t3_ParamLimits

0xf1d3,	// (0x0001aa74) list_double_time_pane_t3

0xf1e5,	// (0x0001aa86) list_double_time_pane_t4_ParamLimits

0xf1e5,	// (0x0001aa86) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001aed4) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001aed4) list_double_time_pane_t

0x61c0,	// (0x00011a61) list_setting_pane_g1_ParamLimits

0x61c0,	// (0x00011a61) list_setting_pane_g1

0x61cc,	// (0x00011a6d) list_setting_pane_g2_ParamLimits

0x61cc,	// (0x00011a6d) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001aedd) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001aedd) list_setting_pane_g

0xf1f7,	// (0x0001aa98) list_setting_pane_t1_ParamLimits

0xf1f7,	// (0x0001aa98) list_setting_pane_t1

0xf20e,	// (0x0001aaaf) list_setting_pane_t2_ParamLimits

0xf20e,	// (0x0001aaaf) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001aee2) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001aee2) list_setting_pane_t

0xf24b,	// (0x0001aaec) set_value_pane_cp_ParamLimits

0xf24b,	// (0x0001aaec) set_value_pane_cp

0x61c0,	// (0x00011a61) list_setting_number_pane_g1_ParamLimits

0x61c0,	// (0x00011a61) list_setting_number_pane_g1

0x61cc,	// (0x00011a6d) list_setting_number_pane_g2_ParamLimits

0x61cc,	// (0x00011a6d) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001aedd) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001aedd) list_setting_number_pane_g

0xf257,	// (0x0001aaf8) list_setting_number_pane_t1_ParamLimits

0xf257,	// (0x0001aaf8) list_setting_number_pane_t1

0xf26b,	// (0x0001ab0c) list_setting_number_pane_t2_ParamLimits

0xf26b,	// (0x0001ab0c) list_setting_number_pane_t2

0xf282,	// (0x0001ab23) list_setting_number_pane_t3_ParamLimits

0xf282,	// (0x0001ab23) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001aee9) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001aee9) list_setting_number_pane_t

0xf24b,	// (0x0001aaec) set_value_pane_ParamLimits

0xf24b,	// (0x0001aaec) set_value_pane

0x6517,	// (0x00011db8) bg_set_opt_pane_ParamLimits

0x6517,	// (0x00011db8) bg_set_opt_pane

0x6538,	// (0x00011dd9) set_value_pane_t1

0x6546,	// (0x00011de7) slider_set_pane_cp3

0x654f,	// (0x00011df0) volume_small_pane_cp

0x6558,	// (0x00011df9) list_form_gen_pane

0x60c6,	// (0x00011967) scroll_pane_cp8

0x9d6e,	// (0x0001560f) form_field_data_pane_ParamLimits

0x9d6e,	// (0x0001560f) form_field_data_pane

0xf2c5,	// (0x0001ab66) form_field_data_wide_pane_ParamLimits

0xf2c5,	// (0x0001ab66) form_field_data_wide_pane

0xf2e5,	// (0x0001ab86) form_field_popup_pane_ParamLimits

0xf2e5,	// (0x0001ab86) form_field_popup_pane

0xf2fd,	// (0x0001ab9e) form_field_popup_wide_pane_ParamLimits

0xf2fd,	// (0x0001ab9e) form_field_popup_wide_pane

0x65df,	// (0x00011e80) form_field_slider_pane_ParamLimits

0x65df,	// (0x00011e80) form_field_slider_pane

0x65f2,	// (0x00011e93) form_field_slider_wide_pane_ParamLimits

0x65f2,	// (0x00011e93) form_field_slider_wide_pane

0x6605,	// (0x00011ea6) data_form_pane

0xf31e,	// (0x0001abbf) form_field_data_pane_t1

0x6631,	// (0x00011ed2) input_focus_pane

0x663f,	// (0x00011ee0) data_form_wide_pane

0x666b,	// (0x00011f0c) form_field_data_wide_pane_t1

0x5f3d,	// (0x000117de) input_focus_pane_cp6

0xf336,	// (0x0001abd7) form_field_popup_pane_t1

0x6631,	// (0x00011ed2) input_focus_pane_cp7

0x6605,	// (0x00011ea6) list_form_pane

0x66aa,	// (0x00011f4b) form_field_popup_wide_pane_t1

0x6631,	// (0x00011ed2) input_focus_pane_cp8

0x66bf,	// (0x00011f60) list_form_wide_pane

0xf356,	// (0x0001abf7) form_field_slider_pane_t1_ParamLimits

0xf356,	// (0x0001abf7) form_field_slider_pane_t1

0xf36c,	// (0x0001ac0d) form_field_slider_pane_t2_ParamLimits

0xf36c,	// (0x0001ac0d) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001aef9) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001aef9) form_field_slider_pane_t

0x5bcc,	// (0x0001146d) input_focus_pane_cp9_ParamLimits

0x5bcc,	// (0x0001146d) input_focus_pane_cp9

0xf381,	// (0x0001ac22) slider_cont_pane_ParamLimits

0xf381,	// (0x0001ac22) slider_cont_pane

0x6712,	// (0x00011fb3) form_field_slider_wide_pane_t1_ParamLimits

0x6712,	// (0x00011fb3) form_field_slider_wide_pane_t1

0x6724,	// (0x00011fc5) form_field_slider_wide_pane_t2_ParamLimits

0x6724,	// (0x00011fc5) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001aefe) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001aefe) form_field_slider_wide_pane_t

0x5bcc,	// (0x0001146d) input_focus_pane_cp10_ParamLimits

0x5bcc,	// (0x0001146d) input_focus_pane_cp10

0xf395,	// (0x0001ac36) slider_cont_pane_cp1_ParamLimits

0xf395,	// (0x0001ac36) slider_cont_pane_cp1

0xf3ab,	// (0x0001ac4c) slider_form_pane_cp

0x6754,	// (0x00011ff5) input_focus_pane_g1

0x675c,	// (0x00011ffd) input_focus_pane_g2

0x6764,	// (0x00012005) input_focus_pane_g3

0x676c,	// (0x0001200d) input_focus_pane_g4

0x6774,	// (0x00012015) input_focus_pane_g5

0x677c,	// (0x0001201d) input_focus_pane_g6

0x6784,	// (0x00012025) input_focus_pane_g7

0x678c,	// (0x0001202d) input_focus_pane_g8

0x6794,	// (0x00012035) input_focus_pane_g9

0x576b,	// (0x0001100c) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001af03) input_focus_pane_g

0x82fe,	// (0x00013b9f) wait_border_pane_g3_copy1

0xf3b3,	// (0x0001ac54) data_form_pane_t1

0x576b,	// (0x0001100c) wait_anim_pane_g1_copy1

0x12c6,	// (0x0000cb67) data_form_wide_pane_t1

0xf3cc,	// (0x0001ac6d) list_form_graphic_pane_cp_ParamLimits

0xf3cc,	// (0x0001ac6d) list_form_graphic_pane_cp

0x9171,	// (0x00014a12) slider_form_pane_g1

0x917a,	// (0x00014a1b) slider_form_pane_g2

0x0006,

0xf959,	// (0x0001b1fa) slider_form_pane_g

0x67b6,	// (0x00012057) list_form_graphic_pane_ParamLimits

0x67b6,	// (0x00012057) list_form_graphic_pane

0x67e1,	// (0x00012082) list_form_graphic_pane_g1

0x67e9,	// (0x0001208a) list_form_graphic_pane_t1_ParamLimits

0x67e9,	// (0x0001208a) list_form_graphic_pane_t1

0x5932,	// (0x000111d3) list_highlight_pane_cp5_ParamLimits

0x5932,	// (0x000111d3) list_highlight_pane_cp5

0xf3e0,	// (0x0001ac81) find_pane_g1

0x6807,	// (0x000120a8) input_find_pane

0xf3eb,	// (0x0001ac8c) input_find_pane_g1_ParamLimits

0xf3eb,	// (0x0001ac8c) input_find_pane_g1

0xf3f7,	// (0x0001ac98) input_find_pane_t1_ParamLimits

0xf3f7,	// (0x0001ac98) input_find_pane_t1

0xf40c,	// (0x0001acad) input_find_pane_t2_ParamLimits

0xf40c,	// (0x0001acad) input_find_pane_t2

0x0001,

0xf677,	// (0x0001af18) input_find_pane_t_ParamLimits

0xf677,	// (0x0001af18) input_find_pane_t

0x6846,	// (0x000120e7) input_focus_pane_cp5_ParamLimits

0x6846,	// (0x000120e7) input_focus_pane_cp5

0x5bcc,	// (0x0001146d) bg_popup_window_pane_cp2_ParamLimits

0x5bcc,	// (0x0001146d) bg_popup_window_pane_cp2

0x6865,	// (0x00012106) listscroll_menu_pane_ParamLimits

0x6865,	// (0x00012106) listscroll_menu_pane

0x6871,	// (0x00012112) popup_submenu_window_ParamLimits

0x6871,	// (0x00012112) popup_submenu_window

0x6895,	// (0x00012136) find_popup_pane_g1

0x689d,	// (0x0001213e) input_popup_find_pane_cp

0x68a7,	// (0x00012148) input_focus_pane_cp4_ParamLimits

0x68a7,	// (0x00012148) input_focus_pane_cp4

0x68c1,	// (0x00012162) input_popup_find_pane_t1_ParamLimits

0x68c1,	// (0x00012162) input_popup_find_pane_t1

0x5852,	// (0x000110f3) bg_popup_sub_pane_cp

0x68ef,	// (0x00012190) listscroll_popup_sub_pane

0x68f7,	// (0x00012198) list_submenu_pane_ParamLimits

0x68f7,	// (0x00012198) list_submenu_pane

0x6908,	// (0x000121a9) scroll_pane_cp4

0x6910,	// (0x000121b1) list_single_popup_submenu_pane_ParamLimits

0x6910,	// (0x000121b1) list_single_popup_submenu_pane

0x6922,	// (0x000121c3) list_single_popup_submenu_pane_g1

0x692a,	// (0x000121cb) list_single_popup_submenu_pane_t1_ParamLimits

0x692a,	// (0x000121cb) list_single_popup_submenu_pane_t1

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp1_ParamLimits

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp1

0x9431,	// (0x00014cd2) tabs_2_active_pane_g1

0xf42d,	// (0x0001acce) tabs_2_active_pane_t1

0x5bcc,	// (0x0001146d) bg_passive_tab_pane_cp1_ParamLimits

0x5bcc,	// (0x0001146d) bg_passive_tab_pane_cp1

0x9431,	// (0x00014cd2) tabs_2_passive_pane_g1

0xf42d,	// (0x0001acce) tabs_2_passive_pane_t1

0x5932,	// (0x000111d3) bg_active_tab_pane_cp4

0xf443,	// (0x0001ace4) tabs_2_long_active_pane_t1

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp4

0x4302,	// (0x0000fba3) list_single_midp_graphic_pane_g4_ParamLimits

0x5932,	// (0x000111d3) bg_active_tab_pane_cp5

0xf45a,	// (0x0001acfb) tabs_3_long_active_pane_t1

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp5

0x4302,	// (0x0000fba3) list_single_midp_graphic_pane_g4

0x5932,	// (0x000111d3) bg_popup_window_pane_cp13_ParamLimits

0x5932,	// (0x000111d3) bg_popup_window_pane_cp13

0x69a1,	// (0x00012242) listscroll_popup_fast_pane_ParamLimits

0x69a1,	// (0x00012242) listscroll_popup_fast_pane

0x69b0,	// (0x00012251) grid_popup_fast_pane_ParamLimits

0x69b0,	// (0x00012251) grid_popup_fast_pane

0x69c2,	// (0x00012263) scroll_pane_cp9_ParamLimits

0x69c2,	// (0x00012263) scroll_pane_cp9

0xadc9,	// (0x0001666a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xadc9,	// (0x0001666a) list_single_graphic_hl_pane_t1_cp2

0x69e6,	// (0x00012287) input_focus_pane_cp20_ParamLimits

0x69e6,	// (0x00012287) input_focus_pane_cp20

0x69f4,	// (0x00012295) query_popup_data_pane_t1_ParamLimits

0x69f4,	// (0x00012295) query_popup_data_pane_t1

0x6a07,	// (0x000122a8) query_popup_data_pane_t2_ParamLimits

0x6a07,	// (0x000122a8) query_popup_data_pane_t2

0x6a4d,	// (0x000122ee) query_popup_data_pane_t3_ParamLimits

0x6a4d,	// (0x000122ee) query_popup_data_pane_t3

0x6a8e,	// (0x0001232f) query_popup_data_pane_t4_ParamLimits

0x6a8e,	// (0x0001232f) query_popup_data_pane_t4

0x6aca,	// (0x0001236b) query_popup_data_pane_t5_ParamLimits

0x6aca,	// (0x0001236b) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001af1d) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001af1d) query_popup_data_pane_t

0x6754,	// (0x00011ff5) bg_set_opt_pane_g1

0x675c,	// (0x00011ffd) bg_set_opt_pane_g2

0x6764,	// (0x00012005) bg_set_opt_pane_g3

0x676c,	// (0x0001200d) bg_set_opt_pane_g4

0x6774,	// (0x00012015) bg_set_opt_pane_g5

0x677c,	// (0x0001201d) bg_set_opt_pane_g6

0x6784,	// (0x00012025) bg_set_opt_pane_g7

0x678c,	// (0x0001202d) bg_set_opt_pane_g8

0x6794,	// (0x00012035) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001af28) bg_set_opt_pane_g

0x3a5b,	// (0x0000f2fc) control_top_pane_stacon_ParamLimits

0x3a5b,	// (0x0000f2fc) control_top_pane_stacon

0x3aae,	// (0x0000f34f) signal_pane_stacon_ParamLimits

0x3aae,	// (0x0000f34f) signal_pane_stacon

0x7123,	// (0x000129c4) stacon_top_pane_g1_ParamLimits

0x7123,	// (0x000129c4) stacon_top_pane_g1

0x3ad3,	// (0x0000f374) title_pane_stacon_ParamLimits

0x3ad3,	// (0x0000f374) title_pane_stacon

0x3af5,	// (0x0000f396) uni_indicator_pane_stacon_ParamLimits

0x3af5,	// (0x0000f396) uni_indicator_pane_stacon

0x3b0a,	// (0x0000f3ab) battery_pane_stacon_ParamLimits

0x3b0a,	// (0x0000f3ab) battery_pane_stacon

0x3b4a,	// (0x0000f3eb) control_bottom_pane_stacon_ParamLimits

0x3b4a,	// (0x0000f3eb) control_bottom_pane_stacon

0x3b69,	// (0x0000f40a) navi_pane_stacon_ParamLimits

0x3b69,	// (0x0000f40a) navi_pane_stacon

0x7145,	// (0x000129e6) stacon_bottom_pane_g1_ParamLimits

0x7145,	// (0x000129e6) stacon_bottom_pane_g1

0x6b01,	// (0x000123a2) aid_levels_signal_lsc_ParamLimits

0x6b01,	// (0x000123a2) aid_levels_signal_lsc

0x3827,	// (0x0000f0c8) signal_pane_stacon_g1_ParamLimits

0x3827,	// (0x0000f0c8) signal_pane_stacon_g1

0x3833,	// (0x0000f0d4) signal_pane_stacon_g2_ParamLimits

0x3833,	// (0x0000f0d4) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001af3b) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001af3b) signal_pane_stacon_g

0x3867,	// (0x0000f108) title_pane_stacon_t1_ParamLimits

0x3867,	// (0x0000f108) title_pane_stacon_t1

0x6b1b,	// (0x000123bc) uni_indicator_pane_stacon_g1

0x6b25,	// (0x000123c6) uni_indicator_pane_stacon_g2

0x6b2f,	// (0x000123d0) uni_indicator_pane_stacon_g3

0x6b39,	// (0x000123da) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001af47) uni_indicator_pane_stacon_g

0x388c,	// (0x0000f12d) control_top_pane_stacon_g1

0x3894,	// (0x0000f135) control_top_pane_stacon_t1_ParamLimits

0x3894,	// (0x0000f135) control_top_pane_stacon_t1

0x6b43,	// (0x000123e4) aid_levels_battery_lsc_ParamLimits

0x6b43,	// (0x000123e4) aid_levels_battery_lsc

0x38c5,	// (0x0000f166) battery_pane_stacon_g1_ParamLimits

0x38c5,	// (0x0000f166) battery_pane_stacon_g1

0x38d1,	// (0x0000f172) battery_pane_stacon_g2_ParamLimits

0x38d1,	// (0x0000f172) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001af50) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001af50) battery_pane_stacon_g

0x3900,	// (0x0000f1a1) navi_icon_pane_stacon

0x3910,	// (0x0000f1b1) navi_navi_pane_stacon

0x3900,	// (0x0000f1a1) navi_text_pane_stacon

0x388c,	// (0x0000f12d) control_bottom_pane_stacon_g1

0x3920,	// (0x0000f1c1) control_bottom_pane_stacon_t1_ParamLimits

0x3920,	// (0x0000f1c1) control_bottom_pane_stacon_t1

0xf470,	// (0x0001ad11) grid_app_pane_ParamLimits

0xf470,	// (0x0001ad11) grid_app_pane

0xf49e,	// (0x0001ad3f) scroll_pane_cp15_ParamLimits

0xf49e,	// (0x0001ad3f) scroll_pane_cp15

0xf4b1,	// (0x0001ad52) cell_app_pane_ParamLimits

0xf4b1,	// (0x0001ad52) cell_app_pane

0xf4ee,	// (0x0001ad8f) cell_app_pane_g1_ParamLimits

0xf4ee,	// (0x0001ad8f) cell_app_pane_g1

0x6be0,	// (0x00012481) cell_app_pane_g2_ParamLimits

0x6be0,	// (0x00012481) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001af55) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001af55) cell_app_pane_g

0xf512,	// (0x0001adb3) cell_app_pane_t1_ParamLimits

0xf512,	// (0x0001adb3) cell_app_pane_t1

0x6c03,	// (0x000124a4) grid_highlight_pane_ParamLimits

0x6c03,	// (0x000124a4) grid_highlight_pane

0x6754,	// (0x00011ff5) cell_highlight_pane_g1

0x675c,	// (0x00011ffd) cell_highlight_pane_g2

0x6764,	// (0x00012005) cell_highlight_pane_g3

0x676c,	// (0x0001200d) cell_highlight_pane_g4

0x6774,	// (0x00012015) cell_highlight_pane_g5

0x677c,	// (0x0001201d) cell_highlight_pane_g6

0x6784,	// (0x00012025) cell_highlight_pane_g7

0x678c,	// (0x0001202d) cell_highlight_pane_g8

0x6794,	// (0x00012035) cell_highlight_pane_g9

0x576b,	// (0x0001100c) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001af03) cell_highlight_pane_g

0x6c14,	// (0x000124b5) bg_scroll_pane

0x3964,	// (0x0000f205) scroll_handle_pane

0x6c5b,	// (0x000124fc) scroll_bg_pane_g1

0x6c70,	// (0x00012511) scroll_bg_pane_g2

0x6c88,	// (0x00012529) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001af5a) scroll_bg_pane_g

0x6c9d,	// (0x0001253e) scroll_handle_focus_pane_ParamLimits

0x6c9d,	// (0x0001253e) scroll_handle_focus_pane

0x6c5b,	// (0x000124fc) scroll_handle_pane_g1

0x6caa,	// (0x0001254b) scroll_handle_pane_g2

0x6c88,	// (0x00012529) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001af61) scroll_handle_pane_g

0x68a7,	// (0x00012148) bg_popup_sub_pane_cp21_ParamLimits

0x68a7,	// (0x00012148) bg_popup_sub_pane_cp21

0x6cbe,	// (0x0001255f) popup_fep_japan_predictive_window_t1_ParamLimits

0x6cbe,	// (0x0001255f) popup_fep_japan_predictive_window_t1

0x6cd5,	// (0x00012576) popup_fep_japan_predictive_window_t2_ParamLimits

0x6cd5,	// (0x00012576) popup_fep_japan_predictive_window_t2

0x6d08,	// (0x000125a9) popup_fep_japan_predictive_window_t3_ParamLimits

0x6d08,	// (0x000125a9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001af68) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001af68) popup_fep_japan_predictive_window_t

0x5852,	// (0x000110f3) bg_popup_sub_pane_cp23

0x6d3f,	// (0x000125e0) listscroll_japin_cand_pane

0x6d47,	// (0x000125e8) popup_fep_japan_candidate_window_t1

0x6d55,	// (0x000125f6) candidate_pane_ParamLimits

0x6d55,	// (0x000125f6) candidate_pane

0x6d68,	// (0x00012609) scroll_pane_cp30

0x6d70,	// (0x00012611) list_single_popup_jap_candidate_pane_ParamLimits

0x6d70,	// (0x00012611) list_single_popup_jap_candidate_pane

0x5852,	// (0x000110f3) list_highlight_pane_cp30

0x6d85,	// (0x00012626) list_single_popup_jap_candidate_pane_t1

0x0004,	// (0x0000b8a5) level_1_signal

0x0016,	// (0x0000b8b7) level_2_signal

0x0029,	// (0x0000b8ca) level_3_signal

0x003c,	// (0x0000b8dd) level_4_signal

0x004f,	// (0x0000b8f0) level_5_signal

0x0062,	// (0x0000b903) level_6_signal

0x0075,	// (0x0000b916) level_7_signal

0x0004,	// (0x0000b8a5) level_1_battery

0x0016,	// (0x0000b8b7) level_2_battery

0x0029,	// (0x0000b8ca) level_3_battery

0x003c,	// (0x0000b8dd) level_4_battery

0x004f,	// (0x0000b8f0) level_5_battery

0x0062,	// (0x0000b903) level_6_battery

0x0075,	// (0x0000b916) level_7_battery

0x6e07,	// (0x000126a8) list_menu_pane_ParamLimits

0x6e07,	// (0x000126a8) list_menu_pane

0x6e1d,	// (0x000126be) scroll_pane_cp25_ParamLimits

0x6e1d,	// (0x000126be) scroll_pane_cp25

0x0088,	// (0x0000b929) list_double2_graphic_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double2_graphic_pane_cp2

0x0088,	// (0x0000b929) list_double2_large_graphic_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double2_large_graphic_pane_cp2

0x0088,	// (0x0000b929) list_double2_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double2_pane_cp2

0x0088,	// (0x0000b929) list_double_graphic_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double_graphic_pane_cp2

0x0088,	// (0x0000b929) list_double_large_graphic_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double_large_graphic_pane_cp2

0x0088,	// (0x0000b929) list_double_number_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double_number_pane_cp2

0x0088,	// (0x0000b929) list_double_pane_cp2_ParamLimits

0x0088,	// (0x0000b929) list_double_pane_cp2

0x00a3,	// (0x0000b944) list_single_2graphic_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_2graphic_pane_cp2

0x00a3,	// (0x0000b944) list_single_graphic_heading_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_graphic_heading_pane_cp2

0x00a3,	// (0x0000b944) list_single_graphic_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_graphic_pane_cp2

0x00a3,	// (0x0000b944) list_single_heading_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_heading_pane_cp2

0x00b4,	// (0x0000b955) list_single_large_graphic_pane_cp2_ParamLimits

0x00b4,	// (0x0000b955) list_single_large_graphic_pane_cp2

0x00a3,	// (0x0000b944) list_single_number_heading_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_number_heading_pane_cp2

0x00a3,	// (0x0000b944) list_single_number_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_number_pane_cp2

0x00c4,	// (0x0000b965) list_single_pane_cp2_ParamLimits

0x00c4,	// (0x0000b965) list_single_pane_cp2

0x6eec,	// (0x0001278d) bg_popup_sub_pane_cp22

0x3a13,	// (0x0000f2b4) popup_side_volume_key_window_g1

0x3a37,	// (0x0000f2d8) popup_side_volume_key_window_t1

0x3a53,	// (0x0000f2f4) volume_small_pane_cp1

0x5bcc,	// (0x0001146d) bg_popup_sub_pane_cp24_ParamLimits

0x5bcc,	// (0x0001146d) bg_popup_sub_pane_cp24

0x6f02,	// (0x000127a3) fep_china_uni_candidate_pane_ParamLimits

0x6f02,	// (0x000127a3) fep_china_uni_candidate_pane

0x6f16,	// (0x000127b7) fep_china_uni_entry_pane

0x6f26,	// (0x000127c7) popup_fep_china_uni_window_g1

0x6f42,	// (0x000127e3) fep_china_uni_entry_pane_g1

0x6f4a,	// (0x000127eb) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001af99) fep_china_uni_entry_pane_g

0x6f52,	// (0x000127f3) fep_entry_item_pane

0x6f5c,	// (0x000127fd) fep_candidate_item_pane

0x6f64,	// (0x00012805) fep_china_uni_candidate_pane_g1

0x6f6c,	// (0x0001280d) fep_china_uni_candidate_pane_g2

0x6f74,	// (0x00012815) fep_china_uni_candidate_pane_g3

0x6f7c,	// (0x0001281d) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001af9e) fep_china_uni_candidate_pane_g

0x576b,	// (0x0001100c) fep_entry_item_pane_g1

0x6f84,	// (0x00012825) fep_entry_item_pane_t1_ParamLimits

0x6f84,	// (0x00012825) fep_entry_item_pane_t1

0x6f9a,	// (0x0001283b) fep_candidate_item_pane_t1_ParamLimits

0x6f9a,	// (0x0001283b) fep_candidate_item_pane_t1

0x6faf,	// (0x00012850) fep_candidate_item_pane_t2_ParamLimits

0x6faf,	// (0x00012850) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001afa7) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001afa7) fep_candidate_item_pane_t

0x5932,	// (0x000111d3) list_highlight_pane_cp31_ParamLimits

0x5932,	// (0x000111d3) list_highlight_pane_cp31

0x6fc1,	// (0x00012862) level_1_signal_lsc

0x6fca,	// (0x0001286b) level_2_signal_lsc

0x6fd3,	// (0x00012874) level_3_signal_lsc

0x6fdc,	// (0x0001287d) level_4_signal_lsc

0x6fe5,	// (0x00012886) level_5_signal_lsc

0x6fee,	// (0x0001288f) level_6_signal_lsc

0x6ff7,	// (0x00012898) level_7_signal_lsc

0x6ff7,	// (0x00012898) level_1_battery_lsc

0x7000,	// (0x000128a1) level_2_battery_lsc

0x7009,	// (0x000128aa) level_3_battery_lsc

0x7012,	// (0x000128b3) level_4_battery_lsc

0x701b,	// (0x000128bc) level_5_battery_lsc

0x7024,	// (0x000128c5) level_6_battery_lsc

0x6fc1,	// (0x00012862) level_7_battery_lsc

0x702d,	// (0x000128ce) scroll_handle_focus_pane_g1

0x7036,	// (0x000128d7) scroll_handle_focus_pane_g2

0x703f,	// (0x000128e0) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001afac) scroll_handle_focus_pane_g

0x014a,	// (0x0000b9eb) list_single_2graphic_pane_g1_ParamLimits

0x014a,	// (0x0000b9eb) list_single_2graphic_pane_g1

0xefbc,	// (0x0001a85d) list_single_2graphic_pane_g2_ParamLimits

0xefbc,	// (0x0001a85d) list_single_2graphic_pane_g2

0x7bfe,	// (0x0001349f) list_single_2graphic_pane_g3_ParamLimits

0x7bfe,	// (0x0001349f) list_single_2graphic_pane_g3

0x0156,	// (0x0000b9f7) list_single_2graphic_pane_g4_ParamLimits

0x0156,	// (0x0000b9f7) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001afb3) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001afb3) list_single_2graphic_pane_g

0x0162,	// (0x0000ba03) list_single_2graphic_pane_t1_ParamLimits

0x0162,	// (0x0000ba03) list_single_2graphic_pane_t1

0x0190,	// (0x0000ba31) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0190,	// (0x0000ba31) list_double2_graphic_large_graphic_pane_g1

0xf013,	// (0x0001a8b4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xf013,	// (0x0001a8b4) list_double2_graphic_large_graphic_pane_g2

0x61cc,	// (0x00011a6d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x61cc,	// (0x00011a6d) list_double2_graphic_large_graphic_pane_g3

0x01a0,	// (0x0000ba41) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x01a0,	// (0x0000ba41) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001afbc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001afbc) list_double2_graphic_large_graphic_pane_g

0x01ac,	// (0x0000ba4d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x01ac,	// (0x0000ba4d) list_double2_graphic_large_graphic_pane_t1

0x01c2,	// (0x0000ba63) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x01c2,	// (0x0000ba63) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001afc5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001afc5) list_double2_graphic_large_graphic_pane_t

0x7203,	// (0x00012aa4) popup_fast_swap_window_ParamLimits

0x7203,	// (0x00012aa4) popup_fast_swap_window

0x721f,	// (0x00012ac0) popup_side_volume_key_window

0x7239,	// (0x00012ada) stacon_top_pane

0x7243,	// (0x00012ae4) status_pane_ParamLimits

0x7243,	// (0x00012ae4) status_pane

0x5761,	// (0x00011002) status_small_pane

0x5852,	// (0x000110f3) control_pane

0x5852,	// (0x000110f3) stacon_bottom_pane

0x60c6,	// (0x00011967) scroll_pane_cp121

0x6558,	// (0x00011df9) set_content_pane

0x941f,	// (0x00014cc0) bg_active_tab_pane_g1_cp1

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp1

0x9428,	// (0x00014cc9) bg_active_tab_pane_g3_cp1

0x941f,	// (0x00014cc0) bg_passive_tab_pane_g1_cp1

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp1

0x9428,	// (0x00014cc9) bg_passive_tab_pane_g3_cp1

0x01dd,	// (0x0000ba7e) bg_active_tab_pane_g1_cp2

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp2

0x01d4,	// (0x0000ba75) bg_active_tab_pane_g3_cp2

0x01dd,	// (0x0000ba7e) bg_passive_tab_pane_g1_cp2

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp2

0x01d4,	// (0x0000ba75) bg_passive_tab_pane_g3_cp2

0x01ef,	// (0x0000ba90) bg_active_tab_pane_g1_cp3

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp3

0x01e6,	// (0x0000ba87) bg_active_tab_pane_g3_cp3

0x01ef,	// (0x0000ba90) bg_passive_tab_pane_g1_cp3

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp3

0x01e6,	// (0x0000ba87) bg_passive_tab_pane_g3_cp3

0x0201,	// (0x0000baa2) bg_active_tab_pane_g1_cp4

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp4

0x01f8,	// (0x0000ba99) bg_active_tab_pane_g3_cp4

0x0201,	// (0x0000baa2) bg_passive_tab_pane_g1_cp4

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp4

0x01f8,	// (0x0000ba99) bg_passive_tab_pane_g3_cp4

0x7161,	// (0x00012a02) bg_active_tab_pane_g1_cp5

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp5

0x716a,	// (0x00012a0b) bg_active_tab_pane_g3_cp5

0x7161,	// (0x00012a02) bg_passive_tab_pane_g1_cp5

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp5

0x716a,	// (0x00012a0b) bg_passive_tab_pane_g3_cp5

0xdf81,	// (0x00019822) list_set_graphic_pane_ParamLimits

0xdf81,	// (0x00019822) list_set_graphic_pane

0x5852,	// (0x000110f3) bg_set_opt_pane_cp4

0x718a,	// (0x00012a2b) list_set_graphic_pane_g1_ParamLimits

0x718a,	// (0x00012a2b) list_set_graphic_pane_g1

0x7196,	// (0x00012a37) list_set_graphic_pane_g2_ParamLimits

0x7196,	// (0x00012a37) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001afca) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001afca) list_set_graphic_pane_g

0x0009,

0xfaa0,	// (0x0001b341) volume_small_pane_cp_g

0x71b8,	// (0x00012a59) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x71b8,	// (0x00012a59) list_double2_large_graphic_pane_g1_cp2

0x71c4,	// (0x00012a65) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x71c4,	// (0x00012a65) list_double2_large_graphic_pane_g2_cp2

0x71d3,	// (0x00012a74) list_double2_large_graphic_pane_g3_cp2

0x71db,	// (0x00012a7c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x71db,	// (0x00012a7c) list_double2_large_graphic_pane_t1_cp2

0x71f1,	// (0x00012a92) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x71f1,	// (0x00012a92) list_double2_large_graphic_pane_t2_cp2

0x8d70,	// (0x00014611) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x8d70,	// (0x00014611) list_double_large_graphic_pane_g1_cp2

0x8d81,	// (0x00014622) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x8d81,	// (0x00014622) list_double_large_graphic_pane_g2_cp2

0x731e,	// (0x00012bbf) list_double_large_graphic_pane_g3_cp2

0x8d90,	// (0x00014631) list_double_large_graphic_pane_g4_cp

0x8d98,	// (0x00014639) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8d98,	// (0x00014639) list_double_large_graphic_pane_t1_cp2

0x8daf,	// (0x00014650) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x8daf,	// (0x00014650) list_double_large_graphic_pane_t2_cp2

0x7251,	// (0x00012af2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7251,	// (0x00012af2) list_double2_graphic_pane_g1_cp2

0x725d,	// (0x00012afe) list_double2_graphic_pane_g2_cp2_ParamLimits

0x725d,	// (0x00012afe) list_double2_graphic_pane_g2_cp2

0x726c,	// (0x00012b0d) list_double2_graphic_pane_g3_cp2

0x7274,	// (0x00012b15) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7274,	// (0x00012b15) list_double2_graphic_pane_t1_cp2

0x728a,	// (0x00012b2b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x728a,	// (0x00012b2b) list_double2_graphic_pane_t2_cp2

0x729c,	// (0x00012b3d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_single_number_heading_pane_g1_cp2

0x72a8,	// (0x00012b49) list_single_number_heading_pane_g2_cp2

0x72b0,	// (0x00012b51) list_single_number_heading_pane_t1_cp2_ParamLimits

0x72b0,	// (0x00012b51) list_single_number_heading_pane_t1_cp2

0x72c6,	// (0x00012b67) list_single_number_heading_pane_t2_cp2_ParamLimits

0x72c6,	// (0x00012b67) list_single_number_heading_pane_t2_cp2

0x72d8,	// (0x00012b79) list_single_number_heading_pane_t3_cp2_ParamLimits

0x72d8,	// (0x00012b79) list_single_number_heading_pane_t3_cp2

0x729c,	// (0x00012b3d) list_single_heading_pane_g1_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_single_heading_pane_g1_cp2

0x72a8,	// (0x00012b49) list_single_heading_pane_g2_cp2

0x72b0,	// (0x00012b51) list_single_heading_pane_t1_cp2_ParamLimits

0x72b0,	// (0x00012b51) list_single_heading_pane_t1_cp2

0x8b7a,	// (0x0001441b) list_single_heading_pane_t2_cp2_ParamLimits

0x8b7a,	// (0x0001441b) list_single_heading_pane_t2_cp2

0x8aca,	// (0x0001436b) list_double_graphic_pane_g1_cp2_ParamLimits

0x8aca,	// (0x0001436b) list_double_graphic_pane_g1_cp2

0x8ad6,	// (0x00014377) list_double_graphic_pane_g2_cp2_ParamLimits

0x8ad6,	// (0x00014377) list_double_graphic_pane_g2_cp2

0x8ae5,	// (0x00014386) list_double_graphic_pane_g3_cp2

0x8aed,	// (0x0001438e) list_double_graphic_pane_t1_cp2_ParamLimits

0x8aed,	// (0x0001438e) list_double_graphic_pane_t1_cp2

0x8b03,	// (0x000143a4) list_double_graphic_pane_t2_cp2_ParamLimits

0x8b03,	// (0x000143a4) list_double_graphic_pane_t2_cp2

0x7312,	// (0x00012bb3) list_double_number_pane_g1_cp2_ParamLimits

0x7312,	// (0x00012bb3) list_double_number_pane_g1_cp2

0x731e,	// (0x00012bbf) list_double_number_pane_g2_cp2

0x8a90,	// (0x00014331) list_double_number_pane_t1_cp2_ParamLimits

0x8a90,	// (0x00014331) list_double_number_pane_t1_cp2

0x8aa2,	// (0x00014343) list_double_number_pane_t2_cp2_ParamLimits

0x8aa2,	// (0x00014343) list_double_number_pane_t2_cp2

0x8ab8,	// (0x00014359) list_double_number_pane_t3_cp2_ParamLimits

0x8ab8,	// (0x00014359) list_double_number_pane_t3_cp2

0x897a,	// (0x0001421b) list_single_graphic_pane_g1_cp2_ParamLimits

0x897a,	// (0x0001421b) list_single_graphic_pane_g1_cp2

0x729c,	// (0x00012b3d) list_single_graphic_pane_g2_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_single_graphic_pane_g2_cp2

0x72a8,	// (0x00012b49) list_single_graphic_pane_g3_cp2

0x8952,	// (0x000141f3) list_single_graphic_pane_t1_cp2_ParamLimits

0x8952,	// (0x000141f3) list_single_graphic_pane_t1_cp2

0x729c,	// (0x00012b3d) list_single_number_pane_g1_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_single_number_pane_g1_cp2

0x72a8,	// (0x00012b49) list_single_number_pane_g2_cp2

0x8952,	// (0x000141f3) list_single_number_pane_t1_cp2_ParamLimits

0x8952,	// (0x000141f3) list_single_number_pane_t1_cp2

0x8968,	// (0x00014209) list_single_number_pane_t2_cp2_ParamLimits

0x8968,	// (0x00014209) list_single_number_pane_t2_cp2

0x71c4,	// (0x00012a65) list_double2_pane_g1_cp2_ParamLimits

0x71c4,	// (0x00012a65) list_double2_pane_g1_cp2

0x71d3,	// (0x00012a74) list_double2_pane_g2_cp2

0x72ea,	// (0x00012b8b) list_double2_pane_t1_cp2_ParamLimits

0x72ea,	// (0x00012b8b) list_double2_pane_t1_cp2

0x7300,	// (0x00012ba1) list_double2_pane_t2_cp2_ParamLimits

0x7300,	// (0x00012ba1) list_double2_pane_t2_cp2

0x7312,	// (0x00012bb3) list_double_pane_g1_cp2_ParamLimits

0x7312,	// (0x00012bb3) list_double_pane_g1_cp2

0x731e,	// (0x00012bbf) list_double_pane_g2_cp2

0x7326,	// (0x00012bc7) list_double_pane_t1_cp2_ParamLimits

0x7326,	// (0x00012bc7) list_double_pane_t1_cp2

0x733c,	// (0x00012bdd) list_double_pane_t2_cp2_ParamLimits

0x733c,	// (0x00012bdd) list_double_pane_t2_cp2

0x736b,	// (0x00012c0c) list_single_pane_cp2_g3

0x729c,	// (0x00012b3d) list_single_pane_g1_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_single_pane_g1_cp2

0x72a8,	// (0x00012b49) list_single_pane_g2_cp2

0x737b,	// (0x00012c1c) list_single_pane_t1_cp2_ParamLimits

0x737b,	// (0x00012c1c) list_single_pane_t1_cp2

0x7393,	// (0x00012c34) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7393,	// (0x00012c34) list_single_large_graphic_pane_g1_cp2

0x739f,	// (0x00012c40) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x739f,	// (0x00012c40) list_single_large_graphic_pane_g2_cp2

0x73ab,	// (0x00012c4c) list_single_large_graphic_pane_g3_cp2

0x73b3,	// (0x00012c54) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x73b3,	// (0x00012c54) list_single_large_graphic_pane_g4_cp1

0x73cd,	// (0x00012c6e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x73cd,	// (0x00012c6e) list_single_large_graphic_pane_t1_cp2

0x87df,	// (0x00014080) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x87df,	// (0x00014080) list_single_graphic_heading_pane_g1_cp2

0x891b,	// (0x000141bc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x891b,	// (0x000141bc) list_single_graphic_heading_pane_g4_cp2

0x72a8,	// (0x00012b49) list_single_graphic_heading_pane_g5_cp2

0x72b0,	// (0x00012b51) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x72b0,	// (0x00012b51) list_single_graphic_heading_pane_t1_cp2

0x8940,	// (0x000141e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x8940,	// (0x000141e1) list_single_graphic_heading_pane_t2_cp2

0x890f,	// (0x000141b0) list_single_2graphic_pane_g1_cp2_ParamLimits

0x890f,	// (0x000141b0) list_single_2graphic_pane_g1_cp2

0x891b,	// (0x000141bc) list_single_2graphic_pane_g2_cp2_ParamLimits

0x891b,	// (0x000141bc) list_single_2graphic_pane_g2_cp2

0x72a8,	// (0x00012b49) list_single_2graphic_pane_g3_cp2

0x87d3,	// (0x00014074) list_single_2graphic_pane_g4_cp2_ParamLimits

0x87d3,	// (0x00014074) list_single_2graphic_pane_g4_cp2

0x892a,	// (0x000141cb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x892a,	// (0x000141cb) list_single_2graphic_pane_t1_cp2

0x576b,	// (0x0001100c) list_highlight_pane_g10_cp1

0x84f1,	// (0x00013d92) list_highlight_pane_g1_cp1

0x84f9,	// (0x00013d9a) list_highlight_pane_g2_cp1

0x8501,	// (0x00013da2) list_highlight_pane_g3_cp1

0x8509,	// (0x00013daa) list_highlight_pane_g4_cp1

0x8511,	// (0x00013db2) list_highlight_pane_g5_cp1

0x8519,	// (0x00013dba) list_highlight_pane_g6_cp1

0x8521,	// (0x00013dc2) list_highlight_pane_g7_cp1

0x8529,	// (0x00013dca) list_highlight_pane_g8_cp1

0x8531,	// (0x00013dd2) list_highlight_pane_g9_cp1

0x0e93,	// (0x0000c734) form_field_slider_pane_t3

0x0ea1,	// (0x0000c742) form_field_slider_pane_t4

0x843b,	// (0x00013cdc) slider_form_pane_ParamLimits

0x843b,	// (0x00013cdc) slider_form_pane

0x5852,	// (0x000110f3) control_abbreviations

0x5852,	// (0x000110f3) control_conventions

0x5852,	// (0x000110f3) control_definitions

0x5852,	// (0x000110f3) format_table_attribute

0x8bc4,	// (0x00014465) bg_popup_preview_window_pane_g9

0x5852,	// (0x000110f3) format_table_data2

0x5852,	// (0x000110f3) format_table_data3

0x5852,	// (0x000110f3) format_table_data_example

0x0008,

0x5852,	// (0x000110f3) intro_purpose

0xf8b9,	// (0x0001b15a) bg_popup_preview_window_pane_g

0x5852,	// (0x000110f3) texts_category

0x5852,	// (0x000110f3) texts_graphics

0x73e3,	// (0x00012c84) text_digital

0x73f2,	// (0x00012c93) text_primary

0x7401,	// (0x00012ca2) text_primary_small

0x7410,	// (0x00012cb1) text_secondary

0x741f,	// (0x00012cc0) text_title

0x932b,	// (0x00014bcc) bg_passive_tab_pane_g1_cp3_srt

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp3_srt

0x9334,	// (0x00014bd5) bg_passive_tab_pane_g3_cp3_srt

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp3_srt_ParamLimits

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp3_srt

0x933d,	// (0x00014bde) tabs_4_active_pane_srt_g1

0xed08,	// (0x0001a5a9) tabs_4_active_pane_srt_t1_ParamLimits

0xed08,	// (0x0001a5a9) tabs_4_active_pane_srt_t1

0x932b,	// (0x00014bcc) bg_active_tab_pane_g1_cp3_copy1

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp3_copy1

0x9334,	// (0x00014bd5) bg_active_tab_pane_g3_cp3_copy1

0x5932,	// (0x000111d3) tabs_2_long_active_pane_srt_ParamLimits

0x5932,	// (0x000111d3) tabs_2_long_active_pane_srt

0x5932,	// (0x000111d3) tabs_2_long_passive_pane_srt_ParamLimits

0x5932,	// (0x000111d3) tabs_2_long_passive_pane_srt

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp4_srt

0x8fe8,	// (0x00014889) bg_passive_tab_pane_g1_cp4_srt

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp4_srt

0x8ff1,	// (0x00014892) bg_passive_tab_pane_g3_cp4_srt

0x5932,	// (0x000111d3) bg_active_tab_pane_cp4_srt_ParamLimits

0x5932,	// (0x000111d3) bg_active_tab_pane_cp4_srt

0xf443,	// (0x0001ace4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xf443,	// (0x0001ace4) tabs_2_long_active_pane_srt_t1

0x8fe8,	// (0x00014889) bg_active_tab_pane_g1_cp4_srt

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp4_srt

0x8ff1,	// (0x00014892) bg_active_tab_pane_g3_cp4_srt

0x5bcc,	// (0x0001146d) tabs_3_long_active_pane_srt_ParamLimits

0x5bcc,	// (0x0001146d) tabs_3_long_active_pane_srt

0x5bcc,	// (0x0001146d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x5bcc,	// (0x0001146d) tabs_3_long_passive_pane_cp_srt

0x5bcc,	// (0x0001146d) tabs_3_long_passive_pane_srt_ParamLimits

0x5bcc,	// (0x0001146d) tabs_3_long_passive_pane_srt

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp5_srt

0x7161,	// (0x00012a02) bg_passive_tab_pane_g1_cp5_srt

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp5_srt

0x716a,	// (0x00012a0b) bg_passive_tab_pane_g3_cp5_srt

0x5932,	// (0x000111d3) bg_active_tab_pane_cp5_srt_ParamLimits

0x5932,	// (0x000111d3) bg_active_tab_pane_cp5_srt

0xf45a,	// (0x0001acfb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xf45a,	// (0x0001acfb) tabs_3_long_active_pane_srt_t1

0x7161,	// (0x00012a02) bg_active_tab_pane_g1_cp5_srt

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp5_srt

0x716a,	// (0x00012a0b) bg_active_tab_pane_g3_cp5_srt

0x8fda,	// (0x0001487b) navi_text_pane_srt_t1

0x8fd2,	// (0x00014873) navi_icon_pane_srt_g1

0x75e6,	// (0x00012e87) midp_editing_number_pane_srt

0x742e,	// (0x00012ccf) midp_ticker_pane_srt

0x75ee,	// (0x00012e8f) midp_ticker_pane_srt_g1

0x75f6,	// (0x00012e97) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001afe9) midp_ticker_pane_srt_g

0x75fe,	// (0x00012e9f) midp_ticker_pane_srt_t1

0x8fc3,	// (0x00014864) midp_editing_number_pane_t1_copy1

0x020a,	// (0x0000baab) listscroll_midp_pane

0x020a,	// (0x0000baab) midp_form_pane

0x749e,	// (0x00012d3f) midp_info_popup_window_ParamLimits

0x749e,	// (0x00012d3f) midp_info_popup_window

0x68a7,	// (0x00012148) bg_popup_sub_pane_cp50_ParamLimits

0x68a7,	// (0x00012148) bg_popup_sub_pane_cp50

0x8134,	// (0x000139d5) listscroll_midp_info_pane_ParamLimits

0x8134,	// (0x000139d5) listscroll_midp_info_pane

0x811c,	// (0x000139bd) listscroll_form_midp_pane_ParamLimits

0x811c,	// (0x000139bd) listscroll_form_midp_pane

0x8128,	// (0x000139c9) scroll_bar_cp050

0x0e87,	// (0x0000c728) list_midp_pane

0x9f48,	// (0x000157e9) signal_pane_g2_cp

0x8036,	// (0x000138d7) listscroll_midp_info_pane_t1_ParamLimits

0x8036,	// (0x000138d7) listscroll_midp_info_pane_t1

0x804e,	// (0x000138ef) listscroll_midp_info_pane_t2_ParamLimits

0x804e,	// (0x000138ef) listscroll_midp_info_pane_t2

0x808c,	// (0x0001392d) listscroll_midp_info_pane_t3_ParamLimits

0x808c,	// (0x0001392d) listscroll_midp_info_pane_t3

0x80c6,	// (0x00013967) listscroll_midp_info_pane_t4_ParamLimits

0x80c6,	// (0x00013967) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x0001b095) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x0001b095) listscroll_midp_info_pane_t

0x6908,	// (0x000121a9) scroll_pane_cp21

0x7fda,	// (0x0001387b) form_midp_field_choice_group_pane

0x7fe3,	// (0x00013884) form_midp_field_text_pane

0x801c,	// (0x000138bd) form_midp_field_time_pane

0x8024,	// (0x000138c5) form_midp_gauge_slider_pane

0x802d,	// (0x000138ce) form_midp_gauge_wait_pane

0x5852,	// (0x000110f3) form_midp_image_pane

0x0e71,	// (0x0000c712) list_single_midp_pane_ParamLimits

0x0e71,	// (0x0000c712) list_single_midp_pane

0x7f93,	// (0x00013834) form_midp_field_text_pane_t1

0x7d92,	// (0x00013633) input_focus_pane_cp050

0x7fb4,	// (0x00013855) list_midp_form_text_pane

0x7f62,	// (0x00013803) form_midp_field_choice_group_pane_t1

0x7f70,	// (0x00013811) input_focus_pane_cp051

0x7f84,	// (0x00013825) list_midp_choice_pane

0x5852,	// (0x000110f3) status_idle_pane

0x7f46,	// (0x000137e7) form_midp_field_time_pane_t1

0x576b,	// (0x0001100c) wait_anim_pane_g2_copy1

0x7f54,	// (0x000137f5) form_midp_field_time_pane_t2

0x0001,

0x7548,	// (0x00012de9) aid_navinavi_width_2_pane

0xf7ef,	// (0x0001b090) form_midp_field_time_pane_t

0x5852,	// (0x000110f3) input_focus_pane_cp052

0x5852,	// (0x000110f3) bg_input_focus_pane_cp040

0x7f06,	// (0x000137a7) form_midp_gauge_slider_pane_t1

0x7f14,	// (0x000137b5) form_midp_gauge_slider_pane_t2

0x0e55,	// (0x0000c6f6) form_midp_gauge_slider_pane_t3

0x0e63,	// (0x0000c704) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x0001b087) form_midp_gauge_slider_pane_t

0x7f3e,	// (0x000137df) form_midp_slider_pane

0x5932,	// (0x000111d3) bg_input_focus_pane_cp041_ParamLimits

0x5932,	// (0x000111d3) bg_input_focus_pane_cp041

0x7ed6,	// (0x00013777) form_midp_gauge_wait_pane_t1_ParamLimits

0x7ed6,	// (0x00013777) form_midp_gauge_wait_pane_t1

0x7ee8,	// (0x00013789) form_midp_gauge_wait_pane_t2_ParamLimits

0x7ee8,	// (0x00013789) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x0001b082) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x0001b082) form_midp_gauge_wait_pane_t

0x7efa,	// (0x0001379b) form_midp_wait_pane_ParamLimits

0x7efa,	// (0x0001379b) form_midp_wait_pane

0x7ea0,	// (0x00013741) form_midp_image_pane_g1

0x7ea9,	// (0x0001374a) form_midp_image_pane_t1

0x7eb8,	// (0x00013759) form_midp_image_pane_t2

0x7ec7,	// (0x00013768) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x0001b07b) form_midp_image_pane_t

0x7e88,	// (0x00013729) list_single_midp_pane_g1

0x7e91,	// (0x00013732) list_single_midp_pane_t1

0x7e74,	// (0x00013715) list_midp_form_item_pane_ParamLimits

0x7e74,	// (0x00013715) list_midp_form_item_pane

0x74f0,	// (0x00012d91) list_midp_form_item_pane_t1

0x74ff,	// (0x00012da0) midp_ticker_pane_g1

0x750b,	// (0x00012dac) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001afcf) midp_ticker_pane_g

0x7517,	// (0x00012db8) midp_ticker_pane_t1

0x8fc3,	// (0x00014864) midp_editing_number_pane_t1

0x91d4,	// (0x00014a75) midp_editing_number_pane

0x91e0,	// (0x00014a81) midp_ticker_pane

0x8fa1,	// (0x00014842) ai_message_heading_pane

0x5852,	// (0x000110f3) bg_popup_window_pane_cp14

0x8fa9,	// (0x0001484a) listscroll_ai_message_pane

0x8f2b,	// (0x000147cc) ai_message_heading_pane_g1_ParamLimits

0x8f2b,	// (0x000147cc) ai_message_heading_pane_g1

0x8f37,	// (0x000147d8) ai_message_heading_pane_g2_ParamLimits

0x8f37,	// (0x000147d8) ai_message_heading_pane_g2

0x8f43,	// (0x000147e4) ai_message_heading_pane_g3_ParamLimits

0x8f43,	// (0x000147e4) ai_message_heading_pane_g3

0x8f4f,	// (0x000147f0) ai_message_heading_pane_g4_ParamLimits

0x8f4f,	// (0x000147f0) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x0001b1bc) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x0001b1bc) ai_message_heading_pane_g

0x8f5b,	// (0x000147fc) ai_message_heading_pane_t1_ParamLimits

0x8f5b,	// (0x000147fc) ai_message_heading_pane_t1

0x8f75,	// (0x00014816) ai_message_heading_pane_t2_ParamLimits

0x8f75,	// (0x00014816) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x0001b1c5) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x0001b1c5) ai_message_heading_pane_t

0x8f87,	// (0x00014828) bg_popup_heading_pane_cp1_ParamLimits

0x8f87,	// (0x00014828) bg_popup_heading_pane_cp1

0x8f19,	// (0x000147ba) list_ai_message_pane_ParamLimits

0x8f19,	// (0x000147ba) list_ai_message_pane

0x6908,	// (0x000121a9) scroll_pane_cp10

0x8eb5,	// (0x00014756) list_ai_message_pane_g1

0x8ebd,	// (0x0001475e) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x0001b199) list_ai_message_pane_g

0x8ec5,	// (0x00014766) list_ai_message_pane_t1_ParamLimits

0x8ec5,	// (0x00014766) list_ai_message_pane_t1

0x8eda,	// (0x0001477b) list_ai_message_pane_t2_ParamLimits

0x8eda,	// (0x0001477b) list_ai_message_pane_t2

0x8eef,	// (0x00014790) list_ai_message_pane_t3_ParamLimits

0x8eef,	// (0x00014790) list_ai_message_pane_t3

0x8f04,	// (0x000147a5) list_ai_message_pane_t4_ParamLimits

0x8f04,	// (0x000147a5) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x0001b19e) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x0001b19e) list_ai_message_pane_t

0x8ea3,	// (0x00014744) cell_ai_soft_ind_pane_ParamLimits

0x8ea3,	// (0x00014744) cell_ai_soft_ind_pane

0x7529,	// (0x00012dca) cell_ai_soft_ind_pane_g1_ParamLimits

0x7529,	// (0x00012dca) cell_ai_soft_ind_pane_g1

0x5852,	// (0x000110f3) grid_highlight_cp1

0x7536,	// (0x00012dd7) text_secondary_cp56_ParamLimits

0x7536,	// (0x00012dd7) text_secondary_cp56

0x8e78,	// (0x00014719) example_general_pane_ParamLimits

0x8e78,	// (0x00014719) example_general_pane

0x8e84,	// (0x00014725) example_parent_pane_g1_ParamLimits

0x8e84,	// (0x00014725) example_parent_pane_g1

0x8e90,	// (0x00014731) example_parent_pane_t1_ParamLimits

0x8e90,	// (0x00014731) example_parent_pane_t1

0xd510,	// (0x00018db1) popup_preview_text_window_ParamLimits

0xd510,	// (0x00018db1) popup_preview_text_window

0x7373,	// (0x00012c14) list_single_pane_cp2_g4

0x5ca8,	// (0x00011549) bg_popup_preview_window_pane_ParamLimits

0x5ca8,	// (0x00011549) bg_popup_preview_window_pane

0x8bcc,	// (0x0001446d) popup_preview_text_window_t1_ParamLimits

0x8bcc,	// (0x0001446d) popup_preview_text_window_t1

0x8bea,	// (0x0001448b) popup_preview_text_window_t2_ParamLimits

0x8bea,	// (0x0001448b) popup_preview_text_window_t2

0x8c33,	// (0x000144d4) popup_preview_text_window_t3_ParamLimits

0x8c33,	// (0x000144d4) popup_preview_text_window_t3

0x8c78,	// (0x00014519) popup_preview_text_window_t4_ParamLimits

0x8c78,	// (0x00014519) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x0001b16d) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x0001b16d) popup_preview_text_window_t

0x8cf6,	// (0x00014597) scroll_pane_cp11

0x7c7a,	// (0x0001351b) bg_popup_preview_window_pane_g1

0x8b8c,	// (0x0001442d) bg_popup_preview_window_pane_g2

0x8b94,	// (0x00014435) bg_popup_preview_window_pane_g3

0x8b9c,	// (0x0001443d) bg_popup_preview_window_pane_g4

0x8ba4,	// (0x00014445) bg_popup_preview_window_pane_g5

0x8bac,	// (0x0001444d) bg_popup_preview_window_pane_g6

0x8bb4,	// (0x00014455) bg_popup_preview_window_pane_g7

0x8bbc,	// (0x0001445d) bg_popup_preview_window_pane_g8

0x3518,	// (0x0000edb9) aid_popup_width_pane

0xd492,	// (0x00018d33) popup_midp_note_alarm_window_ParamLimits

0xd492,	// (0x00018d33) popup_midp_note_alarm_window

0x6605,	// (0x00011ea6) data_form_pane_ParamLimits

0xf314,	// (0x0001abb5) form_field_data_pane_g1

0xf31e,	// (0x0001abbf) form_field_data_pane_t1_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_ParamLimits

0x663f,	// (0x00011ee0) data_form_wide_pane_ParamLimits

0x664b,	// (0x00011eec) form_field_data_wide_pane_g1

0x666b,	// (0x00011f0c) form_field_data_wide_pane_t1_ParamLimits

0x5f3d,	// (0x000117de) input_focus_pane_cp6_ParamLimits

0xf421,	// (0x0001acc2) input_popup_find_pane_g1_ParamLimits

0xf421,	// (0x0001acc2) input_popup_find_pane_g1

0x38e1,	// (0x0000f182) aid_navi_side_left_pane

0x38f1,	// (0x0000f192) aid_navi_side_right_pane

0x85da,	// (0x00013e7b) bg_popup_window_pane_cp30_ParamLimits

0x85da,	// (0x00013e7b) bg_popup_window_pane_cp30

0x8654,	// (0x00013ef5) popup_midp_note_alarm_window_g1_ParamLimits

0x8654,	// (0x00013ef5) popup_midp_note_alarm_window_g1

0x8684,	// (0x00013f25) popup_midp_note_alarm_window_t1_ParamLimits

0x8684,	// (0x00013f25) popup_midp_note_alarm_window_t1

0x8725,	// (0x00013fc6) popup_midp_note_alarm_window_t2_ParamLimits

0x8725,	// (0x00013fc6) popup_midp_note_alarm_window_t2

0x87eb,	// (0x0001408c) popup_midp_note_alarm_window_t3_ParamLimits

0x87eb,	// (0x0001408c) popup_midp_note_alarm_window_t3

0x8813,	// (0x000140b4) popup_midp_note_alarm_window_t4_ParamLimits

0x8813,	// (0x000140b4) popup_midp_note_alarm_window_t4

0x8833,	// (0x000140d4) popup_midp_note_alarm_window_t5_ParamLimits

0x8833,	// (0x000140d4) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x0001b10a) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x0001b10a) popup_midp_note_alarm_window_t

0x88df,	// (0x00014180) wait_bar_pane_cp1_ParamLimits

0x88df,	// (0x00014180) wait_bar_pane_cp1

0x5852,	// (0x000110f3) wait_anim_pane_copy1

0x5852,	// (0x000110f3) wait_border_pane_copy1

0x82ec,	// (0x00013b8d) wait_border_pane_g1_copy1

0x6682,	// (0x00011f23) form_field_popup_pane_g1

0xf336,	// (0x0001abd7) form_field_popup_pane_t1_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_cp7_ParamLimits

0x6605,	// (0x00011ea6) list_form_pane_ParamLimits

0x66a2,	// (0x00011f43) form_field_popup_wide_pane_g1

0x66aa,	// (0x00011f4b) form_field_popup_wide_pane_t1_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_cp8_ParamLimits

0x66bf,	// (0x00011f60) list_form_wide_pane_ParamLimits

0x93aa,	// (0x00014c4b) aid_size_cell_graphic_pane

0xf3b3,	// (0x0001ac54) data_form_pane_t1_ParamLimits

0x12c6,	// (0x0000cb67) data_form_wide_pane_t1_ParamLimits

0x0ad9,	// (0x0000c37a) bg_status_flat_pane

0xec65,	// (0x0001a506) title_pane_t1_ParamLimits

0x58fa,	// (0x0001119b) title_pane_t2_ParamLimits

0x5920,	// (0x000111c1) title_pane_t3_ParamLimits

0xf532,	// (0x0001add3) title_pane_t_ParamLimits

0x0004,	// (0x0000b8a5) level_1_signal_ParamLimits

0x0016,	// (0x0000b8b7) level_2_signal_ParamLimits

0x0029,	// (0x0000b8ca) level_3_signal_ParamLimits

0x003c,	// (0x0000b8dd) level_4_signal_ParamLimits

0x004f,	// (0x0000b8f0) level_5_signal_ParamLimits

0x0062,	// (0x0000b903) level_6_signal_ParamLimits

0x0075,	// (0x0000b916) level_7_signal_ParamLimits

0x0004,	// (0x0000b8a5) level_1_battery_ParamLimits

0x0016,	// (0x0000b8b7) level_2_battery_ParamLimits

0x0029,	// (0x0000b8ca) level_3_battery_ParamLimits

0x003c,	// (0x0000b8dd) level_4_battery_ParamLimits

0x004f,	// (0x0000b8f0) level_5_battery_ParamLimits

0x0062,	// (0x0000b903) level_6_battery_ParamLimits

0x0075,	// (0x0000b916) level_7_battery_ParamLimits

0x84f1,	// (0x00013d92) bg_status_flat_pane_g1

0x84f9,	// (0x00013d9a) bg_status_flat_pane_g2

0x8501,	// (0x00013da2) bg_status_flat_pane_g3

0x8509,	// (0x00013daa) bg_status_flat_pane_g4

0x8511,	// (0x00013db2) bg_status_flat_pane_g5

0x8519,	// (0x00013dba) bg_status_flat_pane_g6

0x8521,	// (0x00013dc2) bg_status_flat_pane_g7

0xecf2,	// (0x0001a593) tabs_3_active_pane_t1_ParamLimits

0xecf2,	// (0x0001a593) tabs_3_passive_pane_t1_ParamLimits

0xed08,	// (0x0001a5a9) tabs_4_active_pane_t1_ParamLimits

0xed08,	// (0x0001a5a9) tabs_4_1_passive_pane_t1_ParamLimits

0xf42d,	// (0x0001acce) tabs_2_active_pane_t1_ParamLimits

0xf42d,	// (0x0001acce) tabs_2_passive_pane_t1_ParamLimits

0x5932,	// (0x000111d3) bg_active_tab_pane_cp4_ParamLimits

0xf443,	// (0x0001ace4) tabs_2_long_active_pane_t1_ParamLimits

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp4_ParamLimits

0x4328,	// (0x0000fbc9) list_single_midp_graphic_pane_t1_ParamLimits

0x5932,	// (0x000111d3) bg_active_tab_pane_cp5_ParamLimits

0xf45a,	// (0x0001acfb) tabs_3_long_active_pane_t1_ParamLimits

0x777d,	// (0x0001301e) bg_passive_tab_pane_cp5_ParamLimits

0x4328,	// (0x0000fbc9) list_single_midp_graphic_pane_t1

0x0ad9,	// (0x0000c37a) bg_status_flat_pane_ParamLimits

0x7902,	// (0x000131a3) indicator_pane_cp2_ParamLimits

0x7902,	// (0x000131a3) indicator_pane_cp2

0x0c3f,	// (0x0000c4e0) navi_pane_srt_ParamLimits

0x0c3f,	// (0x0000c4e0) navi_pane_srt

0x7a4a,	// (0x000132eb) popup_clock_digital_analogue_window_cp1

0x5a27,	// (0x000112c8) indicator_pane_t1

0x742e,	// (0x00012ccf) copy_highlight_pane

0x742e,	// (0x00012ccf) cursor_graphics_pane

0x742e,	// (0x00012ccf) graphic_within_text_pane

0x742e,	// (0x00012ccf) link_highlight_pane

0x8cb9,	// (0x0001455a) popup_preview_text_window_t5_ParamLimits

0x8cb9,	// (0x0001455a) popup_preview_text_window_t5

0x7550,	// (0x00012df1) cursor_digital_pane

0x7550,	// (0x00012df1) cursor_primary_pane

0x7561,	// (0x00012e02) cursor_primary_small_pane

0x7569,	// (0x00012e0a) cursor_secondary_pane

0x7571,	// (0x00012e12) cursor_title_pane

0x7550,	// (0x00012df1) link_highlight_digital_pane

0x7558,	// (0x00012df9) link_highlight_primary_pane

0x7561,	// (0x00012e02) link_highlight_primary_small_pane

0x7569,	// (0x00012e0a) link_highlight_secondary_pane

0x7571,	// (0x00012e12) link_highlight_title_pane

0x7550,	// (0x00012df1) copy_highlight_digital_pane

0x7550,	// (0x00012df1) copy_highlight_primary_pane

0x7561,	// (0x00012e02) copy_highlight_primary_small_pane

0x7569,	// (0x00012e0a) copy_highlight_secondary_pane

0x7571,	// (0x00012e12) copy_highlight_title_pane

0x7569,	// (0x00012e0a) graphic_text_digital_pane

0x8589,	// (0x00013e2a) graphic_text_primary_pane

0x8592,	// (0x00013e33) graphic_text_primary_small_pane

0x7561,	// (0x00012e02) graphic_text_secondary_pane

0x7550,	// (0x00012df1) graphic_text_title_pane

0x02a6,	// (0x0000bb47) cursor_primary_pane_g1

0x857b,	// (0x00013e1c) cursor_text_primary_t1

0x0ec3,	// (0x0000c764) cursor_primary_small_pane_g1

0x856d,	// (0x00013e0e) cursor_text_primary_small_t1

0x0eb9,	// (0x0000c75a) cursor_primary_small_pane_g1_copy1

0x8557,	// (0x00013df8) cursor_text_primary_small_t1_copy1

0x8539,	// (0x00013dda) cursor_text_title_t1

0x0eaf,	// (0x0000c750) cursor_title_pane_g1

0x02a6,	// (0x0000bb47) cursor_digital_pane_g1

0x7581,	// (0x00012e22) cursor_text_digital_t1

0x758f,	// (0x00012e30) link_highlight_primary_pane_g1

0x84e2,	// (0x00013d83) link_highlight_primary_pane_t1

0x758f,	// (0x00012e30) link_highlight_primary_small_pane_g1

0x7597,	// (0x00012e38) link_highlight_primary_small_pane_t1

0x75a6,	// (0x00012e47) link_highlight_secondary_pane_g1

0x75ae,	// (0x00012e4f) link_highlight_secondary_pane_t1

0x8447,	// (0x00013ce8) link_highlight_title_pane_g1

0x845e,	// (0x00013cff) link_highlight_title_pane_t1

0x8447,	// (0x00013ce8) link_highlight_digital_pane_g1

0x844f,	// (0x00013cf0) link_highlight_digital_pane_t1

0x8307,	// (0x00013ba8) copy_highlight_primary_pane_g1

0x832d,	// (0x00013bce) copy_highlight_primary_pane_t1

0x8307,	// (0x00013ba8) copy_highlight_primary_small_pane_g1

0x831e,	// (0x00013bbf) copy_highlight_primary_small_pane_t1

0x75bd,	// (0x00012e5e) copy_highlight_secondary_pane_g1

0x75c5,	// (0x00012e66) copy_highlight_secondary_pane_t1

0x8307,	// (0x00013ba8) copy_highlight_title_pane_g1

0x830f,	// (0x00013bb0) copy_highlight_title_pane_t1

0x8307,	// (0x00013ba8) copy_highlight_digital_pane_g1

0x9516,	// (0x00014db7) copy_highlight_digital_pane_t1

0x946a,	// (0x00014d0b) graphic_text_primary_pane_g1

0x94fa,	// (0x00014d9b) graphic_text_primary_pane_t1

0x9508,	// (0x00014da9) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x0001b239) graphic_text_primary_pane_t

0x94d6,	// (0x00014d77) graphic_text_primary_small_pane_g1

0x94de,	// (0x00014d7f) graphic_text_primary_small_pane_t1

0x94ec,	// (0x00014d8d) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x0001b234) graphic_text_primary_small_pane_t

0x94b2,	// (0x00014d53) graphic_text_secondary_pane_g1

0x94ba,	// (0x00014d5b) graphic_text_secondary_pane_t1

0x94c8,	// (0x00014d69) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x0001b22f) graphic_text_secondary_pane_t

0x948e,	// (0x00014d2f) graphic_text_title_pane_g1

0x9496,	// (0x00014d37) graphic_text_title_pane_t1

0x94a4,	// (0x00014d45) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x0001b22a) graphic_text_title_pane_t

0x946a,	// (0x00014d0b) graphic_text_digital_pane_g1

0x9472,	// (0x00014d13) graphic_text_digital_pane_t1

0x9480,	// (0x00014d21) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x0001b225) graphic_text_digital_pane_t

0x5932,	// (0x000111d3) navi_icon_pane_srt_ParamLimits

0x5932,	// (0x000111d3) navi_icon_pane_srt

0x5852,	// (0x000110f3) navi_midp_pane_srt

0x5852,	// (0x000110f3) navi_navi_pane_srt

0x5932,	// (0x000111d3) navi_text_pane_srt_ParamLimits

0x5932,	// (0x000111d3) navi_text_pane_srt

0x8b45,	// (0x000143e6) navi_navi_icon_text_pane_srt

0x8b4d,	// (0x000143ee) navi_navi_pane_srt_g1_ParamLimits

0x8b4d,	// (0x000143ee) navi_navi_pane_srt_g1

0x8b5f,	// (0x00014400) navi_navi_pane_srt_g2_ParamLimits

0x8b5f,	// (0x00014400) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x0001b220) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x0001b220) navi_navi_pane_srt_g

0x8b71,	// (0x00014412) navi_navi_tabs_pane_srt

0x8b45,	// (0x000143e6) navi_navi_text_pane_srt

0x8b45,	// (0x000143e6) navi_navi_volume_pane_srt

0x945b,	// (0x00014cfc) navi_navi_text_pane_srt_t1

0x468c,	// (0x0000ff2d) navi_navi_volume_pane_srt_g1

0x4694,	// (0x0000ff35) volume_small_pane_srt_ParamLimits

0x4694,	// (0x0000ff35) volume_small_pane_srt

0x3b88,	// (0x0000f429) volume_small_pane_srt_g1_ParamLimits

0x3b88,	// (0x0000f429) volume_small_pane_srt_g1

0x3b98,	// (0x0000f439) volume_small_pane_srt_g2_ParamLimits

0x3b98,	// (0x0000f439) volume_small_pane_srt_g2

0x3ba9,	// (0x0000f44a) volume_small_pane_srt_g3_ParamLimits

0x3ba9,	// (0x0000f44a) volume_small_pane_srt_g3

0x3bba,	// (0x0000f45b) volume_small_pane_srt_g4_ParamLimits

0x3bba,	// (0x0000f45b) volume_small_pane_srt_g4

0x3bcb,	// (0x0000f46c) volume_small_pane_srt_g5_ParamLimits

0x3bcb,	// (0x0000f46c) volume_small_pane_srt_g5

0x3bdc,	// (0x0000f47d) volume_small_pane_srt_g6_ParamLimits

0x3bdc,	// (0x0000f47d) volume_small_pane_srt_g6

0x3bed,	// (0x0000f48e) volume_small_pane_srt_g7_ParamLimits

0x3bed,	// (0x0000f48e) volume_small_pane_srt_g7

0x3bfe,	// (0x0000f49f) volume_small_pane_srt_g8_ParamLimits

0x3bfe,	// (0x0000f49f) volume_small_pane_srt_g8

0x3c0f,	// (0x0000f4b0) volume_small_pane_srt_g9_ParamLimits

0x3c0f,	// (0x0000f4b0) volume_small_pane_srt_g9

0x3c20,	// (0x0000f4c1) volume_small_pane_srt_g10_ParamLimits

0x3c20,	// (0x0000f4c1) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001afd4) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001afd4) volume_small_pane_srt_g

0x5d51,	// (0x000115f2) query_popup_data_pane_cp2

0x9441,	// (0x00014ce2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9441,	// (0x00014ce2) navi_navi_icon_text_pane_srt_t1

0x8589,	// (0x00013e2a) navi_tabs_2_long_pane_srt

0x8589,	// (0x00013e2a) navi_tabs_2_pane_srt

0x8589,	// (0x00013e2a) navi_tabs_3_long_pane_srt

0x8589,	// (0x00013e2a) navi_tabs_3_pane_srt

0x8589,	// (0x00013e2a) navi_tabs_4_pane_srt

0x466c,	// (0x0000ff0d) tabs_2_active_pane_srt_ParamLimits

0x466c,	// (0x0000ff0d) tabs_2_active_pane_srt

0x467c,	// (0x0000ff1d) tabs_2_passive_pane_srt_ParamLimits

0x467c,	// (0x0000ff1d) tabs_2_passive_pane_srt

0x7d92,	// (0x00013633) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7d92,	// (0x00013633) bg_passive_tab_pane_cp1_srt

0x941f,	// (0x00014cc0) bg_passive_tab_pane_g1_cp1_srt

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp1_srt

0x9428,	// (0x00014cc9) bg_passive_tab_pane_g3_cp1_srt

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp1_srt_ParamLimits

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp1_srt

0x9431,	// (0x00014cd2) tabs_2_active_pane_srt_g1

0xf42d,	// (0x0001acce) tabs_2_active_pane_srt_t1_ParamLimits

0xf42d,	// (0x0001acce) tabs_2_active_pane_srt_t1

0x941f,	// (0x00014cc0) bg_active_tab_pane_g1_cp1_srt

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp1_srt

0x9428,	// (0x00014cc9) bg_active_tab_pane_g3_cp1_srt

0x4639,	// (0x0000feda) tabs_3_active_pane_srt_ParamLimits

0x4639,	// (0x0000feda) tabs_3_active_pane_srt

0x464a,	// (0x0000feeb) tabs_3_passive_pane_cp_srt_ParamLimits

0x464a,	// (0x0000feeb) tabs_3_passive_pane_cp_srt

0x465b,	// (0x0000fefc) tabs_3_passive_pane_srt_ParamLimits

0x465b,	// (0x0000fefc) tabs_3_passive_pane_srt

0x7d92,	// (0x00013633) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7d92,	// (0x00013633) bg_passive_tab_pane_cp2_srt

0x75d4,	// (0x00012e75) bg_passive_tab_pane_g1_cp2_srt

0x70db,	// (0x0001297c) bg_passive_tab_pane_g2_cp2_srt

0x75dd,	// (0x00012e7e) bg_passive_tab_pane_g3_cp2_srt

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp2_srt_ParamLimits

0x5bcc,	// (0x0001146d) bg_active_tab_pane_cp2_srt

0x9417,	// (0x00014cb8) tabs_3_active_pane_srt_g1

0xecf2,	// (0x0001a593) tabs_3_active_pane_srt_t1_ParamLimits

0xecf2,	// (0x0001a593) tabs_3_active_pane_srt_t1

0x75d4,	// (0x00012e75) bg_active_tab_pane_g1_cp2_srt

0x70db,	// (0x0001297c) bg_active_tab_pane_g2_cp2_srt

0x75dd,	// (0x00012e7e) bg_active_tab_pane_g3_cp2_srt

0x45f1,	// (0x0000fe92) tabs_4_active_pane_srt_ParamLimits

0x45f1,	// (0x0000fe92) tabs_4_active_pane_srt

0x4603,	// (0x0000fea4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4603,	// (0x0000fea4) tabs_4_passive_pane_cp2_srt

0x3d89,	// (0x0000f62a) aid_size_cell_toolbar

0xd202,	// (0x00018aa3) main_idle_act_pane_ParamLimits

0x3f00,	// (0x0000f7a1) popup_large_graphic_colour_window_ParamLimits

0xd760,	// (0x00019001) popup_toolbar_window_ParamLimits

0xd760,	// (0x00019001) popup_toolbar_window

0x9205,	// (0x00014aa6) list_single_graphic_2heading_pane_ParamLimits

0x9205,	// (0x00014aa6) list_single_graphic_2heading_pane

0x6b51,	// (0x000123f2) aid_size_cell_apps_grid_lsc_pane

0x6b63,	// (0x00012404) aid_size_cell_apps_grid_prt_pane

0x777d,	// (0x0001301e) bg_wml_button_pane_cp1_ParamLimits

0x777d,	// (0x0001301e) bg_wml_button_pane_cp1

0x7f93,	// (0x00013834) form_midp_field_text_pane_t1_ParamLimits

0x7d92,	// (0x00013633) input_focus_pane_cp050_ParamLimits

0x7fb4,	// (0x00013855) list_midp_form_text_pane_ParamLimits

0x7f70,	// (0x00013811) input_focus_pane_cp051_ParamLimits

0x7f84,	// (0x00013825) list_midp_choice_pane_ParamLimits

0x7e42,	// (0x000136e3) list_single_2graphic_pane_cp3_ParamLimits

0x7e42,	// (0x000136e3) list_single_2graphic_pane_cp3

0x7e55,	// (0x000136f6) list_single_midp_graphic_pane_ParamLimits

0x7e55,	// (0x000136f6) list_single_midp_graphic_pane

0x4246,	// (0x0000fae7) list_single_graphic_2heading_pane_g1_ParamLimits

0x4246,	// (0x0000fae7) list_single_graphic_2heading_pane_g1

0x4252,	// (0x0000faf3) list_single_graphic_2heading_pane_g4_ParamLimits

0x4252,	// (0x0000faf3) list_single_graphic_2heading_pane_g4

0x425e,	// (0x0000faff) list_single_graphic_2heading_pane_g5_ParamLimits

0x425e,	// (0x0000faff) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001b027) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001b027) list_single_graphic_2heading_pane_g

0x426a,	// (0x0000fb0b) list_single_graphic_2heading_pane_t1_ParamLimits

0x426a,	// (0x0000fb0b) list_single_graphic_2heading_pane_t1

0x427e,	// (0x0000fb1f) list_single_graphic_2heading_pane_t2_ParamLimits

0x427e,	// (0x0000fb1f) list_single_graphic_2heading_pane_t2

0x4298,	// (0x0000fb39) list_single_graphic_2heading_pane_t3_ParamLimits

0x4298,	// (0x0000fb39) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001b02e) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001b02e) list_single_graphic_2heading_pane_t

0x7b96,	// (0x00013437) bg_popup_sub_pane_cp2

0x7bbc,	// (0x0001345d) grid_toobar_pane

0x42b0,	// (0x0000fb51) cell_toolbar_pane_ParamLimits

0x42b0,	// (0x0000fb51) cell_toolbar_pane

0x7c20,	// (0x000134c1) cell_toolbar_pane_g1_ParamLimits

0x7c20,	// (0x000134c1) cell_toolbar_pane_g1

0x7c32,	// (0x000134d3) cell_toolbar_pane_g2_ParamLimits

0x7c32,	// (0x000134d3) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x0001b035) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x0001b035) cell_toolbar_pane_g

0x7c54,	// (0x000134f5) grid_highlight_pane_cp2_ParamLimits

0x7c54,	// (0x000134f5) grid_highlight_pane_cp2

0x7c6e,	// (0x0001350f) toolbar_button_pane

0x7c7a,	// (0x0001351b) toolbar_button_pane_g1

0x7c82,	// (0x00013523) toolbar_button_pane_g2

0x7c8a,	// (0x0001352b) toolbar_button_pane_g3

0x7c92,	// (0x00013533) toolbar_button_pane_g4

0x7c9a,	// (0x0001353b) toolbar_button_pane_g5

0x7ca2,	// (0x00013543) toolbar_button_pane_g6

0x7caa,	// (0x0001354b) toolbar_button_pane_g7

0x7cb2,	// (0x00013553) toolbar_button_pane_g8

0x7cba,	// (0x0001355b) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x0001b03a) toolbar_button_pane_g

0x42df,	// (0x0000fb80) list_single_2graphic_pane_g1_cp3_ParamLimits

0x42df,	// (0x0000fb80) list_single_2graphic_pane_g1_cp3

0xd7a2,	// (0x00019043) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd7a2,	// (0x00019043) list_single_2graphic_pane_g2_cp3

0x42fa,	// (0x0000fb9b) list_single_2graphic_pane_g3_cp3

0x4302,	// (0x0000fba3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4302,	// (0x0000fba3) list_single_2graphic_pane_g4_cp3

0x430e,	// (0x0000fbaf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x430e,	// (0x0000fbaf) list_single_2graphic_pane_t1_cp3

0x4252,	// (0x0000faf3) list_single_midp_graphic_pane_g2_ParamLimits

0x4252,	// (0x0000faf3) list_single_midp_graphic_pane_g2

0x3d91,	// (0x0000f632) aid_zoom_text_primary

0x3d99,	// (0x0000f63a) aid_zoom_text_secondary

0x768c,	// (0x00012f2d) status_small_pane_g7_ParamLimits

0x768c,	// (0x00012f2d) status_small_pane_g7

0x76af,	// (0x00012f50) status_small_pane_t1_ParamLimits

0xec3a,	// (0x0001a4db) title_pane_g2

0x0003,

0xf529,	// (0x0001adca) title_pane_g

0xeed8,	// (0x0001a779) aid_size_cell_colour_1_pane_ParamLimits

0xeed8,	// (0x0001a779) aid_size_cell_colour_1_pane

0xeeec,	// (0x0001a78d) aid_size_cell_colour_2_pane_ParamLimits

0xeeec,	// (0x0001a78d) aid_size_cell_colour_2_pane

0xef00,	// (0x0001a7a1) aid_size_cell_colour_3_pane_ParamLimits

0xef00,	// (0x0001a7a1) aid_size_cell_colour_3_pane

0xef14,	// (0x0001a7b5) aid_size_cell_colour_4_pane_ParamLimits

0xef14,	// (0x0001a7b5) aid_size_cell_colour_4_pane

0x3843,	// (0x0000f0e4) title_pane_stacon_g1_ParamLimits

0x3843,	// (0x0000f0e4) title_pane_stacon_g1

0x8384,	// (0x00013c25) popup_note_wait_window_g3_ParamLimits

0x8384,	// (0x00013c25) popup_note_wait_window_g3

0x83fa,	// (0x00013c9b) popup_note_wait_window_t5_ParamLimits

0x83fa,	// (0x00013c9b) popup_note_wait_window_t5

0x5852,	// (0x000110f3) main_feb_china_hwr_fs_writing_pane

0xd263,	// (0x00018b04) popup_feb_china_hwr_fs_window_ParamLimits

0xd263,	// (0x00018b04) popup_feb_china_hwr_fs_window

0xd7b3,	// (0x00019054) aid_size_cell_hwr_fs_ParamLimits

0xd7b3,	// (0x00019054) aid_size_cell_hwr_fs

0x7d92,	// (0x00013633) bg_popup_sub_pane_cp3_ParamLimits

0x7d92,	// (0x00013633) bg_popup_sub_pane_cp3

0xd7c8,	// (0x00019069) grid_hwr_fs_pane_ParamLimits

0xd7c8,	// (0x00019069) grid_hwr_fs_pane

0x4367,	// (0x0000fc08) linegrid_hwr_fs_pane_ParamLimits

0x4367,	// (0x0000fc08) linegrid_hwr_fs_pane

0xd7e0,	// (0x00019081) cell_hwr_fs_pane_ParamLimits

0xd7e0,	// (0x00019081) cell_hwr_fs_pane

0x7d9e,	// (0x0001363f) linegrid_hwr_fs_pane_g1_ParamLimits

0x7d9e,	// (0x0001363f) linegrid_hwr_fs_pane_g1

0x0e1b,	// (0x0000c6bc) linegrid_hwr_fs_pane_g2_ParamLimits

0x0e1b,	// (0x0000c6bc) linegrid_hwr_fs_pane_g2

0x7dbc,	// (0x0001365d) linegrid_hwr_fs_pane_g3_ParamLimits

0x7dbc,	// (0x0001365d) linegrid_hwr_fs_pane_g3

0x4395,	// (0x0000fc36) linegrid_hwr_fs_pane_g4_ParamLimits

0x4395,	// (0x0000fc36) linegrid_hwr_fs_pane_g4

0x43af,	// (0x0000fc50) linegrid_hwr_fs_pane_g5_ParamLimits

0x43af,	// (0x0000fc50) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x0001b060) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x0001b060) linegrid_hwr_fs_pane_g

0x7dc8,	// (0x00013669) cell_hwr_fs_pane_g1_ParamLimits

0x7dc8,	// (0x00013669) cell_hwr_fs_pane_g1

0x7ad4,	// (0x00013375) cell_hwr_fs_pane_g2_ParamLimits

0x7ad4,	// (0x00013375) cell_hwr_fs_pane_g2

0x0e2d,	// (0x0000c6ce) cell_hwr_fs_pane_g3_ParamLimits

0x0e2d,	// (0x0000c6ce) cell_hwr_fs_pane_g3

0x0e3a,	// (0x0000c6db) cell_hwr_fs_pane_g4_ParamLimits

0x0e3a,	// (0x0000c6db) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x0001b06b) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x0001b06b) cell_hwr_fs_pane_g

0xd800,	// (0x000190a1) cell_hwr_fs_pane_t1

0x5852,	// (0x000110f3) grid_highlight_pane_cp6

0x5852,	// (0x000110f3) main_idle_act2_pane

0x68ef,	// (0x00012190) aid_inside_area_popup_secondary

0x0fd0,	// (0x0000c871) aid_inside_area_window_primary_ParamLimits

0x0fd0,	// (0x0000c871) aid_inside_area_window_primary

0x9525,	// (0x00014dc6) ai2_news_ticker_pane

0x952d,	// (0x00014dce) aid_size_cell_ai1_link_ParamLimits

0x952d,	// (0x00014dce) aid_size_cell_ai1_link

0x13fb,	// (0x0000cc9c) popup_ai2_data_window_ParamLimits

0x13fb,	// (0x0000cc9c) popup_ai2_data_window

0x955b,	// (0x00014dfc) popup_ai2_link_window_ParamLimits

0x955b,	// (0x00014dfc) popup_ai2_link_window

0x7d92,	// (0x00013633) bg_popup_sub_pane_cp4_ParamLimits

0x7d92,	// (0x00013633) bg_popup_sub_pane_cp4

0x956f,	// (0x00014e10) grid_ai2_link_pane_ParamLimits

0x956f,	// (0x00014e10) grid_ai2_link_pane

0x9586,	// (0x00014e27) popup_ai2_link_window_g1_ParamLimits

0x9586,	// (0x00014e27) popup_ai2_link_window_g1

0x9592,	// (0x00014e33) popup_ai2_link_window_g2_ParamLimits

0x9592,	// (0x00014e33) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0001b23e) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0001b23e) popup_ai2_link_window_g

0x95a1,	// (0x00014e42) ai2_mp_button_pane

0x95a9,	// (0x00014e4a) ai2_mp_volume_pane

0x7f70,	// (0x00013811) bg_popup_sub_pane_cp5_ParamLimits

0x7f70,	// (0x00013811) bg_popup_sub_pane_cp5

0x95b1,	// (0x00014e52) heading_ai2_gene_pane_ParamLimits

0x95b1,	// (0x00014e52) heading_ai2_gene_pane

0x95bd,	// (0x00014e5e) list_ai2_gene_pane_ParamLimits

0x95bd,	// (0x00014e5e) list_ai2_gene_pane

0x9605,	// (0x00014ea6) cell_ai2_link_pane_ParamLimits

0x9605,	// (0x00014ea6) cell_ai2_link_pane

0x961b,	// (0x00014ebc) cell_ai2_link_pane_g1

0x5852,	// (0x000110f3) grid_highlight_pane_cp7

0x46a9,	// (0x0000ff4a) ai2_mp_volume_pane_g1

0x96eb,	// (0x00014f8c) ai2_mp_volume_pane_g2

0x1425,	// (0x0000ccc6) list_ai2_gene_pane_t1

0x96f3,	// (0x00014f94) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x0001b257) ai2_mp_volume_pane_g

0x46b1,	// (0x0000ff52) volume_small_pane_cp3

0x96fb,	// (0x00014f9c) aid_size_cell_ai2_button

0x9703,	// (0x00014fa4) grid_ai2_button_pane

0x970c,	// (0x00014fad) cell_ai2_button_pane_ParamLimits

0x970c,	// (0x00014fad) cell_ai2_button_pane

0x576b,	// (0x0001100c) cell_ai2_button_pane_g1

0x5852,	// (0x000110f3) grid_highlight_pane_cp8

0x96ab,	// (0x00014f4c) ai2_gene_pane_t1_ParamLimits

0x96ab,	// (0x00014f4c) ai2_gene_pane_t1

0xd1ea,	// (0x00018a8b) aid_height_parent_landscape

0x902f,	// (0x000148d0) aid_height_set_list

0x903b,	// (0x000148dc) aid_size_parent

0x93aa,	// (0x00014c4b) aid_size_cell_graphic_pane_ParamLimits

0x95cd,	// (0x00014e6e) popup_ai2_data_window_g1_ParamLimits

0x95cd,	// (0x00014e6e) popup_ai2_data_window_g1

0x95d9,	// (0x00014e7a) ai2_news_ticker_pane_g1

0x95e1,	// (0x00014e82) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x0001b243) ai2_news_ticker_pane_g

0x95e9,	// (0x00014e8a) ai2_news_ticker_pane_t1

0x95f7,	// (0x00014e98) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x0001b248) ai2_news_ticker_pane_t

0x9624,	// (0x00014ec5) heading_ai2_gene_pane_g1

0x962c,	// (0x00014ecd) heading_ai2_gene_pane_t1_ParamLimits

0x962c,	// (0x00014ecd) heading_ai2_gene_pane_t1

0x9641,	// (0x00014ee2) list_highlight_pane_cp6

0x140f,	// (0x0000ccb0) ai2_gene_pane_ParamLimits

0x140f,	// (0x0000ccb0) ai2_gene_pane

0x1433,	// (0x0000ccd4) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0001b24d) list_ai2_gene_pane_t

0x967c,	// (0x00014f1d) list_highlight_pane_cp8_ParamLimits

0x967c,	// (0x00014f1d) list_highlight_pane_cp8

0x968d,	// (0x00014f2e) ai2_gene_pane_g1_ParamLimits

0x968d,	// (0x00014f2e) ai2_gene_pane_g1

0x969f,	// (0x00014f40) ai2_gene_pane_g2_ParamLimits

0x969f,	// (0x00014f40) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0001b252) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0001b252) ai2_gene_pane_g

0x60c6,	// (0x00011967) scroll_pane_cp12

0xd1a9,	// (0x00018a4a) control_pane_t3_ParamLimits

0xd1a9,	// (0x00018a4a) control_pane_t3

0x76a0,	// (0x00012f41) status_small_pane_g8_ParamLimits

0x76a0,	// (0x00012f41) status_small_pane_g8

0xd2d7,	// (0x00018b78) popup_find_window_ParamLimits

0xd4ca,	// (0x00018d6b) popup_note_image_window_ParamLimits

0x7bf2,	// (0x00013493) list_double2_graphic_pane_vc_g1_ParamLimits

0x7bf2,	// (0x00013493) list_double2_graphic_pane_vc_g1

0x729c,	// (0x00012b3d) list_double2_graphic_pane_vc_g2_ParamLimits

0x729c,	// (0x00012b3d) list_double2_graphic_pane_vc_g2

0x7bfe,	// (0x0001349f) list_double2_graphic_pane_vc_g3_ParamLimits

0x7bfe,	// (0x0001349f) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0001ae3d) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0001ae3d) list_double2_graphic_pane_vc_g

0x7c0a,	// (0x000134ab) list_double2_graphic_pane_vc_t1_ParamLimits

0x7c0a,	// (0x000134ab) list_double2_graphic_pane_vc_t1

0x729c,	// (0x00012b3d) list_single_heading_pane_vc_g1_ParamLimits

0x729c,	// (0x00012b3d) list_single_heading_pane_vc_g1

0x7bfe,	// (0x0001349f) list_single_heading_pane_vc_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_single_heading_pane_vc_g

0x7cc2,	// (0x00013563) list_single_heading_pane_vc_t1_ParamLimits

0x7cc2,	// (0x00013563) list_single_heading_pane_vc_t1

0x7cd8,	// (0x00013579) list_single_heading_pane_vc_t2_ParamLimits

0x7cd8,	// (0x00013579) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x0001b04f) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x0001b04f) list_single_heading_pane_vc_t

0x7cea,	// (0x0001358b) list_setting_number_pane_vc_g1_ParamLimits

0x7cea,	// (0x0001358b) list_setting_number_pane_vc_g1

0x7cf6,	// (0x00013597) list_setting_number_pane_vc_g2_ParamLimits

0x7cf6,	// (0x00013597) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001b054) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001b054) list_setting_number_pane_vc_g

0x7d02,	// (0x000135a3) list_setting_number_pane_vc_t1_ParamLimits

0x7d02,	// (0x000135a3) list_setting_number_pane_vc_t1

0x7d16,	// (0x000135b7) list_setting_number_pane_vc_t2_ParamLimits

0x7d16,	// (0x000135b7) list_setting_number_pane_vc_t2

0x7d32,	// (0x000135d3) list_setting_number_pane_vc_t3_ParamLimits

0x7d32,	// (0x000135d3) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x0001b059) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x0001b059) list_setting_number_pane_vc_t

0x7d5a,	// (0x000135fb) set_value_pane_vc_ParamLimits

0x7d5a,	// (0x000135fb) set_value_pane_vc

0x9205,	// (0x00014aa6) list_double2_graphic_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double2_graphic_pane_vc

0x9219,	// (0x00014aba) list_double2_large_graphic_pane_vc_ParamLimits

0x9219,	// (0x00014aba) list_double2_large_graphic_pane_vc

0x9205,	// (0x00014aa6) list_double2_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double2_pane_vc

0x9205,	// (0x00014aa6) list_double_graphic_heading_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double_graphic_heading_pane_vc

0x9205,	// (0x00014aa6) list_double_graphic_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double_graphic_pane_vc

0x9205,	// (0x00014aa6) list_double_heading_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double_heading_pane_vc

0x922a,	// (0x00014acb) list_double_large_graphic_pane_vc_ParamLimits

0x922a,	// (0x00014acb) list_double_large_graphic_pane_vc

0x9205,	// (0x00014aa6) list_double_number_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double_number_pane_vc

0x9205,	// (0x00014aa6) list_double_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double_pane_vc

0x9205,	// (0x00014aa6) list_double_time_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_double_time_pane_vc

0x9205,	// (0x00014aa6) list_setting_number_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_setting_number_pane_vc

0x9205,	// (0x00014aa6) list_setting_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_setting_pane_vc

0x9205,	// (0x00014aa6) list_single_graphic_heading_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_single_graphic_heading_pane_vc

0x9205,	// (0x00014aa6) list_single_heading_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_single_heading_pane_vc

0x9205,	// (0x00014aa6) list_single_number_heading_pane_vc_ParamLimits

0x9205,	// (0x00014aa6) list_single_number_heading_pane_vc

0x7bf2,	// (0x00013493) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7bf2,	// (0x00013493) list_double_graphic_heading_pane_vc_g1

0x729c,	// (0x00012b3d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x729c,	// (0x00012b3d) list_double_graphic_heading_pane_vc_g2

0x7bfe,	// (0x0001349f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7bfe,	// (0x0001349f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0001ae3d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0001ae3d) list_double_graphic_heading_pane_vc_g

0x9740,	// (0x00014fe1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9740,	// (0x00014fe1) list_double_graphic_heading_pane_vc_t1

0x9756,	// (0x00014ff7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9756,	// (0x00014ff7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bd,	// (0x0001b25e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bd,	// (0x0001b25e) list_double_graphic_heading_pane_vc_t

0x7cea,	// (0x0001358b) list_setting_pane_vc_g1_ParamLimits

0x7cea,	// (0x0001358b) list_setting_pane_vc_g1

0x7cf6,	// (0x00013597) list_setting_pane_vc_g2_ParamLimits

0x7cf6,	// (0x00013597) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001b054) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001b054) list_setting_pane_vc_g

0x994b,	// (0x000151ec) list_setting_pane_vc_t1_ParamLimits

0x994b,	// (0x000151ec) list_setting_pane_vc_t1

0x995f,	// (0x00015200) list_setting_pane_vc_t2_ParamLimits

0x995f,	// (0x00015200) list_setting_pane_vc_t2

0x0001,

0xfa00,	// (0x0001b2a1) list_setting_pane_vc_t_ParamLimits

0xfa00,	// (0x0001b2a1) list_setting_pane_vc_t

0x7d5a,	// (0x000135fb) set_value_pane_cp_vc_ParamLimits

0x7d5a,	// (0x000135fb) set_value_pane_cp_vc

0x729c,	// (0x00012b3d) list_single_number_heading_pane_vc_g1_ParamLimits

0x729c,	// (0x00012b3d) list_single_number_heading_pane_vc_g1

0x7bfe,	// (0x0001349f) list_single_number_heading_pane_vc_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_single_number_heading_pane_vc_g

0x7cc2,	// (0x00013563) list_single_number_heading_pane_vc_t1_ParamLimits

0x7cc2,	// (0x00013563) list_single_number_heading_pane_vc_t1

0x9981,	// (0x00015222) list_single_number_heading_pane_vc_t2_ParamLimits

0x9981,	// (0x00015222) list_single_number_heading_pane_vc_t2

0x72d8,	// (0x00012b79) list_single_number_heading_pane_vc_t3_ParamLimits

0x72d8,	// (0x00012b79) list_single_number_heading_pane_vc_t3

0x0002,

0xfa05,	// (0x0001b2a6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001b2a6) list_single_number_heading_pane_vc_t

0x7bf2,	// (0x00013493) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7bf2,	// (0x00013493) list_single_graphic_heading_pane_vc_g1

0x729c,	// (0x00012b3d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x729c,	// (0x00012b3d) list_single_graphic_heading_pane_vc_g4

0x7bfe,	// (0x0001349f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7bfe,	// (0x0001349f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0001ae3d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0001ae3d) list_single_graphic_heading_pane_vc_g

0x7cc2,	// (0x00013563) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7cc2,	// (0x00013563) list_single_graphic_heading_pane_vc_t1

0x9993,	// (0x00015234) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x9993,	// (0x00015234) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0c,	// (0x0001b2ad) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x0001b2ad) list_single_graphic_heading_pane_vc_t

0x729c,	// (0x00012b3d) list_double2_pane_vc_g1_ParamLimits

0x729c,	// (0x00012b3d) list_double2_pane_vc_g1

0x7bfe,	// (0x0001349f) list_double2_pane_vc_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_double2_pane_vc_g

0x99a5,	// (0x00015246) list_double2_pane_vc_t1_ParamLimits

0x99a5,	// (0x00015246) list_double2_pane_vc_t1

0x617e,	// (0x00011a1f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x617e,	// (0x00011a1f) list_double2_large_graphic_pane_vc_g1

0x618a,	// (0x00011a2b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x618a,	// (0x00011a2b) list_double2_large_graphic_pane_vc_g2

0x6196,	// (0x00011a37) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6196,	// (0x00011a37) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001ae61) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001ae61) list_double2_large_graphic_pane_vc_g

0x61aa,	// (0x00011a4b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x61aa,	// (0x00011a4b) list_double2_large_graphic_pane_vc_t1

0x99bb,	// (0x0001525c) list_double_time_pane_vc_g1_ParamLimits

0x99bb,	// (0x0001525c) list_double_time_pane_vc_g1

0x99c7,	// (0x00015268) list_double_time_pane_vc_g2_ParamLimits

0x99c7,	// (0x00015268) list_double_time_pane_vc_g2

0x0001,

0xfa11,	// (0x0001b2b2) list_double_time_pane_vc_g_ParamLimits

0xfa11,	// (0x0001b2b2) list_double_time_pane_vc_g

0x99d3,	// (0x00015274) list_double_time_pane_vc_t1_ParamLimits

0x99d3,	// (0x00015274) list_double_time_pane_vc_t1

0x99f1,	// (0x00015292) list_double_time_pane_vc_t2_ParamLimits

0x99f1,	// (0x00015292) list_double_time_pane_vc_t2

0x9a15,	// (0x000152b6) list_double_time_pane_vc_t3_ParamLimits

0x9a15,	// (0x000152b6) list_double_time_pane_vc_t3

0x9a27,	// (0x000152c8) list_double_time_pane_vc_t4_ParamLimits

0x9a27,	// (0x000152c8) list_double_time_pane_vc_t4

0x0003,

0xfa16,	// (0x0001b2b7) list_double_time_pane_vc_t_ParamLimits

0xfa16,	// (0x0001b2b7) list_double_time_pane_vc_t

0x729c,	// (0x00012b3d) list_double_pane_vc_g1_ParamLimits

0x729c,	// (0x00012b3d) list_double_pane_vc_g1

0x7bfe,	// (0x0001349f) list_double_pane_vc_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_double_pane_vc_g

0x9a39,	// (0x000152da) list_double_pane_vc_t1_ParamLimits

0x9a39,	// (0x000152da) list_double_pane_vc_t1

0x9a4b,	// (0x000152ec) list_double_pane_vc_t2_ParamLimits

0x9a4b,	// (0x000152ec) list_double_pane_vc_t2

0x0001,

0xfa1f,	// (0x0001b2c0) list_double_pane_vc_t_ParamLimits

0xfa1f,	// (0x0001b2c0) list_double_pane_vc_t

0x729c,	// (0x00012b3d) list_double_number_pane_vc_g1_ParamLimits

0x729c,	// (0x00012b3d) list_double_number_pane_vc_g1

0x7bfe,	// (0x0001349f) list_double_number_pane_vc_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_double_number_pane_vc_g

0x9a61,	// (0x00015302) list_double_number_pane_vc_t1_ParamLimits

0x9a61,	// (0x00015302) list_double_number_pane_vc_t1

0x9a75,	// (0x00015316) list_double_number_pane_vc_t2_ParamLimits

0x9a75,	// (0x00015316) list_double_number_pane_vc_t2

0x9a87,	// (0x00015328) list_double_number_pane_vc_t3_ParamLimits

0x9a87,	// (0x00015328) list_double_number_pane_vc_t3

0x0002,

0xfa24,	// (0x0001b2c5) list_double_number_pane_vc_t_ParamLimits

0xfa24,	// (0x0001b2c5) list_double_number_pane_vc_t

0x9a9d,	// (0x0001533e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9a9d,	// (0x0001533e) list_double_large_graphic_pane_vc_g1

0x9ac5,	// (0x00015366) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9ac5,	// (0x00015366) list_double_large_graphic_pane_vc_g2

0x9ad9,	// (0x0001537a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9ad9,	// (0x0001537a) list_double_large_graphic_pane_vc_g3

0x9ae8,	// (0x00015389) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9ae8,	// (0x00015389) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2b,	// (0x0001b2cc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0001b2cc) list_double_large_graphic_pane_vc_g

0x9af8,	// (0x00015399) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9af8,	// (0x00015399) list_double_large_graphic_pane_vc_t1

0x9b12,	// (0x000153b3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9b12,	// (0x000153b3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa34,	// (0x0001b2d5) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa34,	// (0x0001b2d5) list_double_large_graphic_pane_vc_t

0x729c,	// (0x00012b3d) list_double_heading_pane_vc_g1_ParamLimits

0x729c,	// (0x00012b3d) list_double_heading_pane_vc_g1

0x7bfe,	// (0x0001349f) list_double_heading_pane_vc_g2_ParamLimits

0x7bfe,	// (0x0001349f) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001ae44) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001ae44) list_double_heading_pane_vc_g

0x9b32,	// (0x000153d3) list_double_heading_pane_vc_t1_ParamLimits

0x9b32,	// (0x000153d3) list_double_heading_pane_vc_t1

0x7cc2,	// (0x00013563) list_double_heading_pane_vc_t2_ParamLimits

0x7cc2,	// (0x00013563) list_double_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x0001b2da) list_double_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001b2da) list_double_heading_pane_vc_t

0x9b44,	// (0x000153e5) list_double_graphic_pane_vc_g1_ParamLimits

0x9b44,	// (0x000153e5) list_double_graphic_pane_vc_g1

0x9b50,	// (0x000153f1) list_double_graphic_pane_vc_g2_ParamLimits

0x9b50,	// (0x000153f1) list_double_graphic_pane_vc_g2

0x729c,	// (0x00012b3d) list_double_graphic_pane_vc_g3_ParamLimits

0x729c,	// (0x00012b3d) list_double_graphic_pane_vc_g3

0x0003,

0xfa3e,	// (0x0001b2df) list_double_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x0001b2df) list_double_graphic_pane_vc_g

0x9b6d,	// (0x0001540e) list_double_graphic_pane_vc_t1_ParamLimits

0x9b6d,	// (0x0001540e) list_double_graphic_pane_vc_t1

0x9b8b,	// (0x0001542c) list_double_graphic_pane_vc_t2_ParamLimits

0x9b8b,	// (0x0001542c) list_double_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x0001b2e8) list_double_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x0001b2e8) list_double_graphic_pane_vc_t

0x3520,	// (0x0000edc1) aid_size_cell_fastswap

0xcf0a,	// (0x000187ab) aid_size_cell_touch_ParamLimits

0xcf0a,	// (0x000187ab) aid_size_cell_touch

0x3677,	// (0x0000ef18) popup_fast_swap_wide_window_ParamLimits

0x3677,	// (0x0000ef18) popup_fast_swap_wide_window

0xd002,	// (0x000188a3) touch_pane_ParamLimits

0xd002,	// (0x000188a3) touch_pane

0x6561,	// (0x00011e02) button_value_adjust_pane_cp2

0x6569,	// (0x00011e0a) button_value_adjust_pane_cp4

0x6589,	// (0x00011e2a) form_field_data_pane_cp2

0xf2db,	// (0x0001ab7c) form_field_data_wide_pane_cp2

0x6c14,	// (0x000124b5) bg_scroll_pane_ParamLimits

0x3964,	// (0x0000f205) scroll_handle_pane_ParamLimits

0x3978,	// (0x0000f219) scroll_sc2_down_pane_ParamLimits

0x3978,	// (0x0000f219) scroll_sc2_down_pane

0x6c45,	// (0x000124e6) scroll_sc2_up_pane_ParamLimits

0x6c45,	// (0x000124e6) scroll_sc2_up_pane

0x1555,	// (0x0000cdf6) grid_wheel_folder_pane_g1_ParamLimits

0x1555,	// (0x0000cdf6) grid_wheel_folder_pane_g1

0x3b2c,	// (0x0000f3cd) clock_nsta_pane_cp2_ParamLimits

0x3b2c,	// (0x0000f3cd) clock_nsta_pane_cp2

0x020a,	// (0x0000baab) listscroll_midp_pane_ParamLimits

0x0219,	// (0x0000baba) midp_canvas_pane

0x3d77,	// (0x0000f618) nsta_clock_indic_pane

0x774e,	// (0x00012fef) listscroll_form_pane_vc

0x776b,	// (0x0001300c) listscroll_set_pane_vc_ParamLimits

0x776b,	// (0x0001300c) listscroll_set_pane_vc

0x0b01,	// (0x0000c3a2) clock_nsta_pane

0x0b24,	// (0x0000c3c5) indicator_nsta_pane

0x7b96,	// (0x00013437) bg_popup_sub_pane_cp2_ParamLimits

0x7baa,	// (0x0001344b) find_pane_cp2_ParamLimits

0x7baa,	// (0x0001344b) find_pane_cp2

0x7bbc,	// (0x0001345d) grid_toobar_pane_ParamLimits

0x7d66,	// (0x00013607) list_form_gen_pane_vc_ParamLimits

0x7d66,	// (0x00013607) list_form_gen_pane_vc

0x7d7c,	// (0x0001361d) scroll_pane_cp8_vc_ParamLimits

0x7d7c,	// (0x0001361d) scroll_pane_cp8_vc

0x7df8,	// (0x00013699) data_form_wide_pane_vc_ParamLimits

0x7df8,	// (0x00013699) data_form_wide_pane_vc

0x7e04,	// (0x000136a5) form_field_data_wide_pane_vc_g1

0x7e0c,	// (0x000136ad) form_field_data_wide_pane_vc_t1_ParamLimits

0x7e0c,	// (0x000136ad) form_field_data_wide_pane_vc_t1

0x6631,	// (0x00011ed2) input_focus_pane_cp6_vc_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_cp6_vc

0x0e87,	// (0x0000c728) list_midp_pane_ParamLimits

0x940b,	// (0x00014cac) scroll_pane_cp16_ParamLimits

0x940b,	// (0x00014cac) scroll_pane_cp16

0x816a,	// (0x00013a0b) button_value_adjust_pane_ParamLimits

0x816a,	// (0x00013a0b) button_value_adjust_pane

0x1197,	// (0x0000ca38) button_value_adjust_pane_cp6_ParamLimits

0x1197,	// (0x0000ca38) button_value_adjust_pane_cp6

0x12a1,	// (0x0000cb42) settings_code_pane_cp_ParamLimits

0x12a1,	// (0x0000cb42) settings_code_pane_cp

0x576b,	// (0x0001100c) cell_touch_pane_g1

0x576b,	// (0x0001100c) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001af7a) cell_touch_pane_g

0x1441,	// (0x0000cce2) cell_touch_pane_cp_ParamLimits

0x1441,	// (0x0000cce2) cell_touch_pane_cp

0x145d,	// (0x0000ccfe) cell_touch_pane_ParamLimits

0x145d,	// (0x0000ccfe) cell_touch_pane

0x576b,	// (0x0001100c) scroll_sc2_down_pane_g1

0x576b,	// (0x0001100c) scroll_sc2_up_pane_g1

0x5852,	// (0x000110f3) bg_set_opt_pane_cp4_vc

0x976e,	// (0x0001500f) list_set_graphic_pane_vc_g1_ParamLimits

0x976e,	// (0x0001500f) list_set_graphic_pane_vc_g1

0x977a,	// (0x0001501b) list_set_graphic_pane_vc_g2_ParamLimits

0x977a,	// (0x0001501b) list_set_graphic_pane_vc_g2

0x0001,

0xf9c2,	// (0x0001b263) list_set_graphic_pane_vc_g_ParamLimits

0xf9c2,	// (0x0001b263) list_set_graphic_pane_vc_g

0x9786,	// (0x00015027) text_primary_small_cp13_vc_ParamLimits

0x9786,	// (0x00015027) text_primary_small_cp13_vc

0x979e,	// (0x0001503f) list_set_graphic_pane_vc_ParamLimits

0x979e,	// (0x0001503f) list_set_graphic_pane_vc

0x5852,	// (0x000110f3) input_focus_pane_cp2_vc

0x576b,	// (0x0001100c) setting_code_pane_vc_g1

0x97b1,	// (0x00015052) setting_code_pane_vc_t1

0x97bf,	// (0x00015060) set_text_pane_vc_t1_ParamLimits

0x97bf,	// (0x00015060) set_text_pane_vc_t1

0x5852,	// (0x000110f3) input_focus_pane_cp1_vc

0x97da,	// (0x0001507b) list_set_text_pane_vc

0x576b,	// (0x0001100c) setting_text_pane_vc_g1

0x5852,	// (0x000110f3) bg_set_opt_pane_cp2_vc

0x97e4,	// (0x00015085) setting_slider_graphic_pane_vc_g1

0x97ec,	// (0x0001508d) setting_slider_graphic_pane_vc_t1

0x97fa,	// (0x0001509b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c7,	// (0x0001b268) setting_slider_graphic_pane_vc_t

0x9808,	// (0x000150a9) slider_set_pane_cp_vc

0x9810,	// (0x000150b1) slider_set_pane_vc_g1

0x9819,	// (0x000150ba) slider_set_pane_vc_g2

0x0006,

0xf9cc,	// (0x0001b26d) slider_set_pane_vc_g

0x6754,	// (0x00011ff5) set_opt_bg_pane_g1_copy1

0x675c,	// (0x00011ffd) set_opt_bg_pane_g2_copy1

0x9845,	// (0x000150e6) set_opt_bg_pane_g3_copy1

0x676c,	// (0x0001200d) set_opt_bg_pane_g4_copy1

0x6774,	// (0x00012015) set_opt_bg_pane_g5_copy1

0x677c,	// (0x0001201d) set_opt_bg_pane_g6_copy1

0x984d,	// (0x000150ee) set_opt_bg_pane_g7_copy1

0x9855,	// (0x000150f6) set_opt_bg_pane_g8_copy1

0x985d,	// (0x000150fe) set_opt_bg_pane_g9_copy1

0x5852,	// (0x000110f3) bg_set_opt_pane_cp_vc

0x9865,	// (0x00015106) setting_slider_pane_vc_t1

0x97ec,	// (0x0001508d) setting_slider_pane_vc_t2

0x97fa,	// (0x0001509b) setting_slider_pane_vc_t3

0x0002,

0xf9db,	// (0x0001b27c) setting_slider_pane_vc_t

0x9808,	// (0x000150a9) slider_set_pane_vc

0x43d3,	// (0x0000fc74) volume_set_pane_vc_g1

0x46ba,	// (0x0000ff5b) volume_set_pane_vc_g2

0x46c3,	// (0x0000ff64) volume_set_pane_vc_g3

0x46cc,	// (0x0000ff6d) volume_set_pane_vc_g4

0x46d5,	// (0x0000ff76) volume_set_pane_vc_g5

0x46de,	// (0x0000ff7f) volume_set_pane_vc_g6

0x46e7,	// (0x0000ff88) volume_set_pane_vc_g7

0x46f0,	// (0x0000ff91) volume_set_pane_vc_g8

0x46f9,	// (0x0000ff9a) volume_set_pane_vc_g9

0x4702,	// (0x0000ffa3) volume_set_pane_vc_g10

0x0009,

0xf9e2,	// (0x0001b283) volume_set_pane_vc_g

0x9874,	// (0x00015115) volume_set_pane_vc

0x987c,	// (0x0001511d) button_value_adjust_pane_cp1_vc

0x9886,	// (0x00015127) list_highlight_pane_cp2_vc

0x988f,	// (0x00015130) list_set_pane_vc_ParamLimits

0x988f,	// (0x00015130) list_set_pane_vc

0x98e1,	// (0x00015182) main_pane_set_vc_t1_ParamLimits

0x98e1,	// (0x00015182) main_pane_set_vc_t1

0x98f6,	// (0x00015197) main_pane_set_vc_t2_ParamLimits

0x98f6,	// (0x00015197) main_pane_set_vc_t2

0x9908,	// (0x000151a9) main_pane_set_vc_t3_ParamLimits

0x9908,	// (0x000151a9) main_pane_set_vc_t3

0x991a,	// (0x000151bb) main_pane_set_vc_t4_ParamLimits

0x991a,	// (0x000151bb) main_pane_set_vc_t4

0x0003,

0xf9f7,	// (0x0001b298) main_pane_set_vc_t_ParamLimits

0xf9f7,	// (0x0001b298) main_pane_set_vc_t

0x992c,	// (0x000151cd) setting_code_pane_vc_ParamLimits

0x992c,	// (0x000151cd) setting_code_pane_vc

0x993b,	// (0x000151dc) setting_slider_graphic_pane_vc

0x993b,	// (0x000151dc) setting_slider_pane_vc

0x993b,	// (0x000151dc) setting_text_pane_vc

0x993b,	// (0x000151dc) setting_volume_pane_vc

0x9943,	// (0x000151e4) scroll_pane_cp121_vc

0x6558,	// (0x00011df9) set_content_pane_vc

0x9ba9,	// (0x0001544a) button_value_adjust_pane_g1

0x9bb2,	// (0x00015453) button_value_adjust_pane_g2

0x0001,

0xfa4c,	// (0x0001b2ed) button_value_adjust_pane_g

0x9bbb,	// (0x0001545c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x9bbb,	// (0x0001545c) form_field_slider_wide_pane_vc_t1

0x9bd1,	// (0x00015472) form_field_slider_wide_pane_vc_t2_ParamLimits

0x9bd1,	// (0x00015472) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa51,	// (0x0001b2f2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa51,	// (0x0001b2f2) form_field_slider_wide_pane_vc_t

0x5bcc,	// (0x0001146d) input_focus_pane_cp10_vc_ParamLimits

0x5bcc,	// (0x0001146d) input_focus_pane_cp10_vc

0x9bfc,	// (0x0001549d) slider_cont_pane_cp1_vc_ParamLimits

0x9bfc,	// (0x0001549d) slider_cont_pane_cp1_vc

0x9810,	// (0x000150b1) slider_form_pane_g1_cp2

0x9819,	// (0x000150ba) slider_form_pane_g2_cp2

0x9c17,	// (0x000154b8) form_field_slider_pane_vc_t3

0x9c25,	// (0x000154c6) form_field_slider_pane_vc_t4

0x9c33,	// (0x000154d4) slider_form_pane_vc_ParamLimits

0x9c33,	// (0x000154d4) slider_form_pane_vc

0x9c40,	// (0x000154e1) form_field_slider_pane_vc_t1_ParamLimits

0x9c40,	// (0x000154e1) form_field_slider_pane_vc_t1

0x9c56,	// (0x000154f7) form_field_slider_pane_vc_t2_ParamLimits

0x9c56,	// (0x000154f7) form_field_slider_pane_vc_t2

0x0001,

0xfa63,	// (0x0001b304) form_field_slider_pane_vc_t_ParamLimits

0xfa63,	// (0x0001b304) form_field_slider_pane_vc_t

0x5bcc,	// (0x0001146d) input_focus_pane_cp9_vc_ParamLimits

0x5bcc,	// (0x0001146d) input_focus_pane_cp9_vc

0x9c68,	// (0x00015509) slider_cont_pane_vc_ParamLimits

0x9c68,	// (0x00015509) slider_cont_pane_vc

0x9c7a,	// (0x0001551b) list_form_graphic_pane_cp_vc_ParamLimits

0x9c7a,	// (0x0001551b) list_form_graphic_pane_cp_vc

0x7e04,	// (0x000136a5) form_field_popup_wide_pane_vc_g1

0x9c8f,	// (0x00015530) form_field_popup_wide_pane_vc_t1_ParamLimits

0x9c8f,	// (0x00015530) form_field_popup_wide_pane_vc_t1

0x6631,	// (0x00011ed2) input_focus_pane_cp8_vc_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_cp8_vc

0x9cce,	// (0x0001556f) list_form_wide_pane_vc_ParamLimits

0x9cce,	// (0x0001556f) list_form_wide_pane_vc

0x9cda,	// (0x0001557b) list_form_graphic_pane_vc_g1

0x9ce2,	// (0x00015583) list_form_graphic_pane_vc_t1_ParamLimits

0x9ce2,	// (0x00015583) list_form_graphic_pane_vc_t1

0x5932,	// (0x000111d3) list_highlight_pane_cp5_vc_ParamLimits

0x5932,	// (0x000111d3) list_highlight_pane_cp5_vc

0x9cfe,	// (0x0001559f) list_form_graphic_pane_vc_ParamLimits

0x9cfe,	// (0x0001559f) list_form_graphic_pane_vc

0x7e04,	// (0x000136a5) form_field_popup_pane_vc_g1

0x9d14,	// (0x000155b5) form_field_popup_pane_vc_t1_ParamLimits

0x9d14,	// (0x000155b5) form_field_popup_pane_vc_t1

0x6631,	// (0x00011ed2) input_focus_pane_cp7_vc_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_cp7_vc

0x9d29,	// (0x000155ca) list_form_pane_vc_ParamLimits

0x9d29,	// (0x000155ca) list_form_pane_vc

0x9d35,	// (0x000155d6) data_form_pane_vc_t1_ParamLimits

0x9d35,	// (0x000155d6) data_form_pane_vc_t1

0x6754,	// (0x00011ff5) input_focus_pane_vc_g1

0x675c,	// (0x00011ffd) input_focus_pane_vc_g2

0x6764,	// (0x00012005) input_focus_pane_vc_g3

0x676c,	// (0x0001200d) input_focus_pane_vc_g4

0x6774,	// (0x00012015) input_focus_pane_vc_g5

0x677c,	// (0x0001201d) input_focus_pane_vc_g6

0x6784,	// (0x00012025) input_focus_pane_vc_g7

0x678c,	// (0x0001202d) input_focus_pane_vc_g8

0x6794,	// (0x00012035) input_focus_pane_vc_g9

0x576b,	// (0x0001100c) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001af03) input_focus_pane_vc_g

0x7df8,	// (0x00013699) data_form_pane_vc_ParamLimits

0x7df8,	// (0x00013699) data_form_pane_vc

0x7e04,	// (0x000136a5) form_field_data_pane_vc_g1

0x9d50,	// (0x000155f1) form_field_data_pane_vc_t1_ParamLimits

0x9d50,	// (0x000155f1) form_field_data_pane_vc_t1

0x6631,	// (0x00011ed2) input_focus_pane_vc_ParamLimits

0x6631,	// (0x00011ed2) input_focus_pane_vc

0x6561,	// (0x00011e02) button_value_adjust_pane_cp3_vc

0x9d66,	// (0x00015607) button_value_adjust_pane_cp5_vc

0x9d6e,	// (0x0001560f) form_field_data_pane_vc_ParamLimits

0x9d6e,	// (0x0001560f) form_field_data_pane_vc

0x6589,	// (0x00011e2a) form_field_data_pane_vc_cp2

0x9d85,	// (0x00015626) form_field_data_wide_pane_vc_ParamLimits

0x9d85,	// (0x00015626) form_field_data_wide_pane_vc

0x9d9b,	// (0x0001563c) form_field_data_wide_pane_vc_cp2

0x9da3,	// (0x00015644) form_field_popup_pane_vc_ParamLimits

0x9da3,	// (0x00015644) form_field_popup_pane_vc

0x9dba,	// (0x0001565b) form_field_popup_wide_pane_vc_ParamLimits

0x9dba,	// (0x0001565b) form_field_popup_wide_pane_vc

0x9dd0,	// (0x00015671) form_field_slider_pane_vc_ParamLimits

0x9dd0,	// (0x00015671) form_field_slider_pane_vc

0x9de3,	// (0x00015684) form_field_slider_wide_pane_vc_ParamLimits

0x9de3,	// (0x00015684) form_field_slider_wide_pane_vc

0x147b,	// (0x0000cd1c) grid_touch_1_pane_ParamLimits

0x147b,	// (0x0000cd1c) grid_touch_1_pane

0x148f,	// (0x0000cd30) grid_touch_2_pane_ParamLimits

0x148f,	// (0x0000cd30) grid_touch_2_pane

0x9ec2,	// (0x00015763) touch_pane_g1_ParamLimits

0x9ec2,	// (0x00015763) touch_pane_g1

0x9e1a,	// (0x000156bb) cell_app_pane_cp_wide_ParamLimits

0x9e1a,	// (0x000156bb) cell_app_pane_cp_wide

0x9e2a,	// (0x000156cb) grid_popup_fast_wide_pane_ParamLimits

0x9e2a,	// (0x000156cb) grid_popup_fast_wide_pane

0x9e3e,	// (0x000156df) scroll_pane_cp19_ParamLimits

0x9e3e,	// (0x000156df) scroll_pane_cp19

0x5852,	// (0x000110f3) bg_popup_window_pane_cp20

0x9e52,	// (0x000156f3) listscroll_popup_fast_wide_pane

0x14b9,	// (0x0000cd5a) grid_indicator_nsta_pane

0x9e6c,	// (0x0001570d) clock_nsta_pane_g1

0x9e75,	// (0x00015716) clock_nsta_pane_t1

0x14c5,	// (0x0000cd66) cell_indicator_nsta_pane_ParamLimits

0x14c5,	// (0x0000cd66) cell_indicator_nsta_pane

0x9ec2,	// (0x00015763) cell_indicator_nsta_pane_g1

0x14dc,	// (0x0000cd7d) cell_indicator_nsta_pane_g2

0x0001,

0xfa74,	// (0x0001b315) cell_indicator_nsta_pane_g

0x9ee0,	// (0x00015781) clock_nsta_pane_cp

0x9ee8,	// (0x00015789) indicator_nsta_pane_cp

0x9ef1,	// (0x00015792) nsta_clock_indic_pane_g1

0x5a13,	// (0x000112b4) grid_indicator_pane

0x6d37,	// (0x000125d8) scroll_pane_cp29

0x3a83,	// (0x0000f324) indicator_nsta_pane_cp2_ParamLimits

0x3a83,	// (0x0000f324) indicator_nsta_pane_cp2

0x5932,	// (0x000111d3) main_apps_wheel_pane

0x7fe3,	// (0x00013884) form_midp_field_text_pane_ParamLimits

0x8128,	// (0x000139c9) scroll_bar_cp050_ParamLimits

0x9f5a,	// (0x000157fb) cell_indicator_pane_ParamLimits

0x9f5a,	// (0x000157fb) cell_indicator_pane

0x9f70,	// (0x00015811) cell_indicator_pane_g1

0x14e9,	// (0x0000cd8a) grid_wheel_folder_pane_ParamLimits

0x14e9,	// (0x0000cd8a) grid_wheel_folder_pane

0x14f7,	// (0x0000cd98) list_wheel_apps_pane_ParamLimits

0x14f7,	// (0x0000cd98) list_wheel_apps_pane

0x1503,	// (0x0000cda4) main_apps_wheel_pane_g1_ParamLimits

0x1503,	// (0x0000cda4) main_apps_wheel_pane_g1

0x150f,	// (0x0000cdb0) main_apps_wheel_pane_g2_ParamLimits

0x150f,	// (0x0000cdb0) main_apps_wheel_pane_g2

0x0001,

0xfa90,	// (0x0001b331) main_apps_wheel_pane_g_ParamLimits

0xfa90,	// (0x0001b331) main_apps_wheel_pane_g

0x151b,	// (0x0000cdbc) main_apps_wheel_pane_t1_ParamLimits

0x151b,	// (0x0000cdbc) main_apps_wheel_pane_t1

0x152d,	// (0x0000cdce) list_wheel_apps_pane_g1

0x1535,	// (0x0000cdd6) list_wheel_apps_pane_g2

0x153d,	// (0x0000cdde) list_wheel_apps_pane_g3

0x1545,	// (0x0000cde6) list_wheel_apps_pane_g4

0x154d,	// (0x0000cdee) list_wheel_apps_pane_g5

0x0004,

0xfa95,	// (0x0001b336) list_wheel_apps_pane_g

0x5932,	// (0x000111d3) navi_icon_text_pane

0x0a0d,	// (0x0000c2ae) aid_fill_nsta

0xa021,	// (0x000158c2) navi_icon_text_pane_g1

0xa02d,	// (0x000158ce) navi_icon_text_pane_t1

0x71a2,	// (0x00012a43) list_set_graphic_pane_t1_ParamLimits

0x71a2,	// (0x00012a43) list_set_graphic_pane_t1

0x8862,	// (0x00014103) popup_midp_note_alarm_window_t6_ParamLimits

0x8862,	// (0x00014103) popup_midp_note_alarm_window_t6

0x8874,	// (0x00014115) popup_midp_note_alarm_window_t7_ParamLimits

0x8874,	// (0x00014115) popup_midp_note_alarm_window_t7

0x8886,	// (0x00014127) popup_midp_note_alarm_window_t8_ParamLimits

0x8886,	// (0x00014127) popup_midp_note_alarm_window_t8

0x8898,	// (0x00014139) popup_midp_note_alarm_window_t9_ParamLimits

0x8898,	// (0x00014139) popup_midp_note_alarm_window_t9

0x88aa,	// (0x0001414b) popup_midp_note_alarm_window_t10_ParamLimits

0x88aa,	// (0x0001414b) popup_midp_note_alarm_window_t10

0x88bc,	// (0x0001415d) popup_midp_note_alarm_window_t11_ParamLimits

0x88bc,	// (0x0001415d) popup_midp_note_alarm_window_t11

0x88ce,	// (0x0001416f) scroll_pane_cp17_ParamLimits

0x88ce,	// (0x0001416f) scroll_pane_cp17

0x43d3,	// (0x0000fc74) volume_small_pane_cp_g1

0x470b,	// (0x0000ffac) volume_small_pane_cp_g2

0x4714,	// (0x0000ffb5) volume_small_pane_cp_g3

0x471d,	// (0x0000ffbe) volume_small_pane_cp_g4

0x4400,	// (0x0000fca1) volume_small_pane_cp_g5

0x4726,	// (0x0000ffc7) volume_small_pane_cp_g6

0x472f,	// (0x0000ffd0) volume_small_pane_cp_g7

0x4738,	// (0x0000ffd9) volume_small_pane_cp_g8

0x4741,	// (0x0000ffe2) volume_small_pane_cp_g9

0x474a,	// (0x0000ffeb) volume_small_pane_cp_g10

0x74ff,	// (0x00012da0) midp_ticker_pane_g1_ParamLimits

0x750b,	// (0x00012dac) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001afcf) midp_ticker_pane_g_ParamLimits

0x7517,	// (0x00012db8) midp_ticker_pane_t1_ParamLimits

0x0a23,	// (0x0000c2c4) aid_fill_nsta_2

0x8114,	// (0x000139b5) list_form2_midp_pane

0x91d4,	// (0x00014a75) midp_editing_number_pane_ParamLimits

0x91e0,	// (0x00014a81) midp_ticker_pane_ParamLimits

0xa03f,	// (0x000158e0) form2_midp_field_pane

0xa063,	// (0x00015904) scroll_pane_cp51

0xa083,	// (0x00015924) form2_midp_button_pane_ParamLimits

0xa083,	// (0x00015924) form2_midp_button_pane

0xa095,	// (0x00015936) form2_midp_content_pane_ParamLimits

0xa095,	// (0x00015936) form2_midp_content_pane

0xa0af,	// (0x00015950) form2_midp_field_choice_group_pane

0xa0b7,	// (0x00015958) form2_midp_field_pane_g1

0xa0bf,	// (0x00015960) form2_midp_field_pane_g2

0xa0c7,	// (0x00015968) form2_midp_field_pane_g3

0xa0cf,	// (0x00015970) form2_midp_field_pane_g4

0x0003,

0xfaba,	// (0x0001b35b) form2_midp_field_pane_g

0xa0d7,	// (0x00015978) form2_midp_gauge_slider_pane

0xa0df,	// (0x00015980) form2_midp_gauge_wait_pane

0xa0e7,	// (0x00015988) form2_midp_image_pane_ParamLimits

0xa0e7,	// (0x00015988) form2_midp_image_pane

0xa102,	// (0x000159a3) form2_midp_label_pane_ParamLimits

0xa102,	// (0x000159a3) form2_midp_label_pane

0x1582,	// (0x0000ce23) form2_midp_label_pane_cp_ParamLimits

0x1582,	// (0x0000ce23) form2_midp_label_pane_cp

0xa13a,	// (0x000159db) form2_midp_string_pane_ParamLimits

0xa13a,	// (0x000159db) form2_midp_string_pane

0xa14c,	// (0x000159ed) form2_midp_text_pane_ParamLimits

0xa14c,	// (0x000159ed) form2_midp_text_pane

0xa165,	// (0x00015a06) form2_midp_time_pane

0xa175,	// (0x00015a16) input_focus_pane_cp51_ParamLimits

0xa175,	// (0x00015a16) input_focus_pane_cp51

0xa18d,	// (0x00015a2e) form2_midp_label_pane_t1_ParamLimits

0xa18d,	// (0x00015a2e) form2_midp_label_pane_t1

0x679c,	// (0x0001203d) form2_mdip_text_pane_t1_ParamLimits

0x679c,	// (0x0001203d) form2_mdip_text_pane_t1

0xa1cd,	// (0x00015a6e) form2_midp_time_pane_t1

0xa1e8,	// (0x00015a89) form2_midp_gauge_slider_pane_t1

0x15a1,	// (0x0000ce42) form2_midp_gauge_slider_pane_t2

0x15b3,	// (0x0000ce54) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac3,	// (0x0001b364) form2_midp_gauge_slider_pane_t

0xa21e,	// (0x00015abf) form2_midp_slider_pane

0xa22a,	// (0x00015acb) form2_midp_gauge_wait_pane_t1

0xa238,	// (0x00015ad9) form2_midp_wait_pane_ParamLimits

0xa238,	// (0x00015ad9) form2_midp_wait_pane

0x7e42,	// (0x000136e3) list_single_2graphic_pane_cp4_ParamLimits

0x7e42,	// (0x000136e3) list_single_2graphic_pane_cp4

0xa263,	// (0x00015b04) list_single_midp_graphic_pane_cp_ParamLimits

0xa263,	// (0x00015b04) list_single_midp_graphic_pane_cp

0x5852,	// (0x000110f3) list_highlight_pane_cp20

0xa281,	// (0x00015b22) list_single_2graphic_pane_g1_cp4

0x9624,	// (0x00014ec5) list_single_2graphic_pane_g2_cp4

0xa289,	// (0x00015b2a) list_single_2graphic_pane_t1_cp4

0x5932,	// (0x000111d3) list_highlight_pane_cp21

0xa298,	// (0x00015b39) list_single_midp_graphic_pane_g4_cp

0xa2a7,	// (0x00015b48) list_single_midp_graphic_pane_t1_cp

0xa2bc,	// (0x00015b5d) form2_mdip_string_pane_t1_ParamLimits

0xa2bc,	// (0x00015b5d) form2_mdip_string_pane_t1

0x5852,	// (0x000110f3) bg_wml_button_pane_cp2

0x576b,	// (0x0001100c) form2_midp_image_pane_g1

0x6361,	// (0x00011c02) list_double_large_graphic_pane_g5_ParamLimits

0x6361,	// (0x00011c02) list_double_large_graphic_pane_g5

0x020a,	// (0x0000baab) midp_form_pane_ParamLimits

0x5932,	// (0x000111d3) main_apps_wheel_pane_ParamLimits

0xd544,	// (0x00018de5) popup_preview_window_ParamLimits

0xd544,	// (0x00018de5) popup_preview_window

0x41f9,	// (0x0000fa9a) popup_touch_info_window_ParamLimits

0x41f9,	// (0x0000fa9a) popup_touch_info_window

0x4217,	// (0x0000fab8) popup_touch_menu_window_ParamLimits

0x4217,	// (0x0000fab8) popup_touch_menu_window

0x5761,	// (0x00011002) bg_popup_sub_pane_cp6

0xa326,	// (0x00015bc7) list_touch_menu_pane

0xa32e,	// (0x00015bcf) list_single_touch_menu_pane_ParamLimits

0xa32e,	// (0x00015bcf) list_single_touch_menu_pane

0xa345,	// (0x00015be6) list_single_touch_menu_pane_t1

0x5932,	// (0x000111d3) bg_popup_sub_pane_cp7_ParamLimits

0x5932,	// (0x000111d3) bg_popup_sub_pane_cp7

0xa353,	// (0x00015bf4) heading_sub_pane

0xa35b,	// (0x00015bfc) list_touch_info_pane_ParamLimits

0xa35b,	// (0x00015bfc) list_touch_info_pane

0xa36a,	// (0x00015c0b) list_single_touch_info_pane_ParamLimits

0xa36a,	// (0x00015c0b) list_single_touch_info_pane

0xa37b,	// (0x00015c1c) list_single_touch_info_pane_t1

0xa389,	// (0x00015c2a) list_single_touch_info_pane_t2

0x0001,

0xfad1,	// (0x0001b372) list_single_touch_info_pane_t

0x742e,	// (0x00012ccf) bg_popup_heading_pane_cp

0xa397,	// (0x00015c38) heading_sub_pane_t1

0x7d92,	// (0x00013633) bg_popup_preview_window_pane_cp_ParamLimits

0x7d92,	// (0x00013633) bg_popup_preview_window_pane_cp

0xa353,	// (0x00015bf4) heading_preview_pane

0xa35b,	// (0x00015bfc) list_preview_pane_ParamLimits

0xa35b,	// (0x00015bfc) list_preview_pane

0xa3a5,	// (0x00015c46) popup_preview_window_g1

0xa36a,	// (0x00015c0b) list_single_preview_pane_ParamLimits

0xa36a,	// (0x00015c0b) list_single_preview_pane

0xa3ad,	// (0x00015c4e) list_single_preview_pane_g1

0xa3b5,	// (0x00015c56) list_single_preview_pane_t1

0xa37b,	// (0x00015c1c) list_single_preview_pane_t2

0x0001,

0xfad6,	// (0x0001b377) list_single_preview_pane_t

0xa3c3,	// (0x00015c64) bg_popup_heading_pane_cp2_ParamLimits

0xa3c3,	// (0x00015c64) bg_popup_heading_pane_cp2

0xa3d9,	// (0x00015c7a) heading_preview_pane_g1

0xa3e1,	// (0x00015c82) heading_preview_pane_t1_ParamLimits

0xa3e1,	// (0x00015c82) heading_preview_pane_t1

0x5a36,	// (0x000112d7) soft_indicator_pane_t1_ParamLimits

0x60a2,	// (0x00011943) scroll_pane_ParamLimits

0x6c33,	// (0x000124d4) scroll_sc2_left_pane

0x6c3c,	// (0x000124dd) scroll_sc2_right_pane

0x6c5b,	// (0x000124fc) scroll_bg_pane_g1_ParamLimits

0x6c70,	// (0x00012511) scroll_bg_pane_g2_ParamLimits

0x6c88,	// (0x00012529) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001af5a) scroll_bg_pane_g_ParamLimits

0x6c5b,	// (0x000124fc) scroll_handle_pane_g1_ParamLimits

0x6caa,	// (0x0001254b) scroll_handle_pane_g2_ParamLimits

0x6c88,	// (0x00012529) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001af61) scroll_handle_pane_g_ParamLimits

0x3dc3,	// (0x0000f664) popup_choice_list_window_ParamLimits

0x3dc3,	// (0x0000f664) popup_choice_list_window

0x7ba2,	// (0x00013443) choice_list_pane

0x7c46,	// (0x000134e7) cell_toolbar_pane_t1

0x7c6e,	// (0x0001350f) toolbar_button_pane_ParamLimits

0x8d4b,	// (0x000145ec) ai_gene_pane_1_t2_ParamLimits

0x8d4b,	// (0x000145ec) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x0001b17d) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x0001b17d) ai_gene_pane_1_t

0xa3fe,	// (0x00015c9f) scroll_sc2_left_pane_g1

0xa3fe,	// (0x00015c9f) scroll_sc2_right_pane_g1

0x777d,	// (0x0001301e) bg_popup_sub_pane_cp10

0xa408,	// (0x00015ca9) list_choice_list_pane

0xa41f,	// (0x00015cc0) list_single_choice_list_pane_ParamLimits

0xa41f,	// (0x00015cc0) list_single_choice_list_pane

0xa431,	// (0x00015cd2) list_single_choice_list_pane_g1

0x692a,	// (0x000121cb) list_single_choice_list_pane_t1_ParamLimits

0x692a,	// (0x000121cb) list_single_choice_list_pane_t1

0xa439,	// (0x00015cda) choice_list_pane_g1

0xa441,	// (0x00015ce2) choice_list_pane_t1

0x5761,	// (0x00011002) input_focus_pane_cp11

0x6b0e,	// (0x000123af) title_pane_stacon_g2_ParamLimits

0x6b0e,	// (0x000123af) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001af40) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001af40) title_pane_stacon_g

0x742e,	// (0x00012ccf) cursor_press_pane

0xd2ab,	// (0x00018b4c) popup_fep_hwr_window_ParamLimits

0xd2ab,	// (0x00018b4c) popup_fep_hwr_window

0x3ebb,	// (0x0000f75c) popup_fep_vkb_window_ParamLimits

0x3ebb,	// (0x0000f75c) popup_fep_vkb_window

0xa44f,	// (0x00015cf0) cursor_press_pane_g1

0x0002,

0xfaff,	// (0x0001b3a0) fep_vkb_side_pane_g_ParamLimits

0x4788,	// (0x00010029) fep_hwr_candidate_pane_ParamLimits

0x4788,	// (0x00010029) fep_hwr_candidate_pane

0x47b0,	// (0x00010051) fep_hwr_side_pane_ParamLimits

0x47b0,	// (0x00010051) fep_hwr_side_pane

0x47d0,	// (0x00010071) fep_hwr_top_pane_ParamLimits

0x47d0,	// (0x00010071) fep_hwr_top_pane

0x47e8,	// (0x00010089) fep_hwr_write_pane_ParamLimits

0x47e8,	// (0x00010089) fep_hwr_write_pane

0xfaff,	// (0x0001b3a0) fep_vkb_side_pane_g

0xa457,	// (0x00015cf8) fep_hwr_top_pane_g1

0xa469,	// (0x00015d0a) fep_hwr_top_pane_g2

0x4822,	// (0x000100c3) fep_hwr_top_pane_g3

0x0002,

0xfadb,	// (0x0001b37c) fep_hwr_top_pane_g

0x4837,	// (0x000100d8) fep_hwr_top_text_pane

0x6dff,	// (0x000126a0) fep_hwr_top_text_pane_g1

0xa49f,	// (0x00015d40) fep_hwr_top_text_pane_t1

0x4925,	// (0x000101c6) fep_hwr_candidate_pane_g1

0xa6af,	// (0x00015f50) fep_vkb_keypad_pane_g3_ParamLimits

0xa6af,	// (0x00015f50) fep_vkb_keypad_pane_g3

0xa6d1,	// (0x00015f72) fep_vkb_keypad_pane_g4_ParamLimits

0xa6d1,	// (0x00015f72) fep_vkb_keypad_pane_g4

0xa740,	// (0x00015fe1) fep_vkb_bottom_pane_g2_ParamLimits

0xa740,	// (0x00015fe1) fep_vkb_bottom_pane_g2

0x0001,

0xfb06,	// (0x0001b3a7) fep_vkb_bottom_pane_g_ParamLimits

0xfb06,	// (0x0001b3a7) fep_vkb_bottom_pane_g

0xa3fe,	// (0x00015c9f) cell_vkb_side_pane_g2

0x0001,

0xfb10,	// (0x0001b3b1) cell_vkb_side_pane_g

0xa7cb,	// (0x0001606c) cell_vkb_side_pane_t1

0xa7d9,	// (0x0001607a) cell_vkb_side_pane_t1_copy1

0xa3fe,	// (0x00015c9f) bg_fep_vkb_candidate_pane_g2

0xa8fd,	// (0x0001619e) cell_vkb_candidate_pane_ParamLimits

0xa4ad,	// (0x00015d4e) aid_size_cell_vkb_ParamLimits

0xa4ad,	// (0x00015d4e) aid_size_cell_vkb

0xa8fd,	// (0x0001619e) cell_vkb_candidate_pane

0x494c,	// (0x000101ed) bg_popup_fep_shadow_pane_g1

0xa523,	// (0x00015dc4) fep_vkb_bottom_pane_ParamLimits

0xa523,	// (0x00015dc4) fep_vkb_bottom_pane

0xa560,	// (0x00015e01) fep_vkb_candidate_pane_ParamLimits

0xa560,	// (0x00015e01) fep_vkb_candidate_pane

0xa57c,	// (0x00015e1d) fep_vkb_keypad_pane_ParamLimits

0xa57c,	// (0x00015e1d) fep_vkb_keypad_pane

0xa5b0,	// (0x00015e51) fep_vkb_side_pane_ParamLimits

0xa5b0,	// (0x00015e51) fep_vkb_side_pane

0xa5dc,	// (0x00015e7d) fep_vkb_top_pane_ParamLimits

0xa5dc,	// (0x00015e7d) fep_vkb_top_pane

0xa608,	// (0x00015ea9) fep_vkb_top_pane_g1_ParamLimits

0xa608,	// (0x00015ea9) fep_vkb_top_pane_g1

0xa617,	// (0x00015eb8) fep_vkb_top_pane_g2_ParamLimits

0xa617,	// (0x00015eb8) fep_vkb_top_pane_g2

0xa626,	// (0x00015ec7) fep_vkb_top_pane_g3_ParamLimits

0xa626,	// (0x00015ec7) fep_vkb_top_pane_g3

0x0003,

0xfaf6,	// (0x0001b397) fep_vkb_top_pane_g_ParamLimits

0xfaf6,	// (0x0001b397) fep_vkb_top_pane_g

0xa644,	// (0x00015ee5) fep_vkb_top_text_pane_ParamLimits

0xa644,	// (0x00015ee5) fep_vkb_top_text_pane

0x1622,	// (0x0000cec3) fep_vkb_side_pane_g1_ParamLimits

0x1622,	// (0x0000cec3) fep_vkb_side_pane_g1

0xa69e,	// (0x00015f3f) grid_vkb_side_pane_ParamLimits

0xa69e,	// (0x00015f3f) grid_vkb_side_pane

0x4954,	// (0x000101f5) bg_popup_fep_shadow_pane_g2

0x495d,	// (0x000101fe) bg_popup_fep_shadow_pane_g3

0x4965,	// (0x00010206) bg_popup_fep_shadow_pane_g4

0x496e,	// (0x0001020f) bg_popup_fep_shadow_pane_g5

0x4976,	// (0x00010217) bg_popup_fep_shadow_pane_g6

0x497e,	// (0x0001021f) bg_popup_fep_shadow_pane_g7

0x676c,	// (0x0001200d) bg_popup_fep_shadow_pane_g8

0xa6ef,	// (0x00015f90) grid_vkb_keypad_number_pane_ParamLimits

0xa6ef,	// (0x00015f90) grid_vkb_keypad_number_pane

0xa6ff,	// (0x00015fa0) grid_vkb_keypad_pane_ParamLimits

0xa6ff,	// (0x00015fa0) grid_vkb_keypad_pane

0xa725,	// (0x00015fc6) fep_vkb_bottom_pane_g1_ParamLimits

0xa725,	// (0x00015fc6) fep_vkb_bottom_pane_g1

0xa74e,	// (0x00015fef) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xa74e,	// (0x00015fef) grid_vkb_keypad_bottom_left_pane

0xa763,	// (0x00016004) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xa763,	// (0x00016004) grid_vkb_keypad_bottom_right_pane

0xa778,	// (0x00016019) fep_vkb_top_text_pane_g1

0x1669,	// (0x0000cf0a) fep_vkb_top_text_pane_t1

0x167b,	// (0x0000cf1c) cell_vkb_side_pane_ParamLimits

0x167b,	// (0x0000cf1c) cell_vkb_side_pane

0xa3fe,	// (0x00015c9f) cell_vkb_side_pane_g1

0xa7e7,	// (0x00016088) cell_vkb_keypad_pane_ParamLimits

0xa7e7,	// (0x00016088) cell_vkb_keypad_pane

0xa854,	// (0x000160f5) cell_vkb_keypad_pane_g1

0x0008,

0xfb23,	// (0x0001b3c4) bg_popup_fep_shadow_pane_g

0x498e,	// (0x0001022f) cell_hwr_side_pane_g1

0x498e,	// (0x0001022f) cell_hwr_side_pane_g2

0xa85e,	// (0x000160ff) cell_vkb_keypad_pane_t1

0x1691,	// (0x0000cf32) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x1691,	// (0x0000cf32) cell_vkb_keypad_bottom_left_pane

0x16a6,	// (0x0000cf47) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x16a6,	// (0x0000cf47) cell_vkb_keypad_bottom_right_pane

0xa3fe,	// (0x00015c9f) cell_vkb_keypad_bottom_left_pane_g1

0xa3fe,	// (0x00015c9f) cell_vkb_keypad_bottom_right_pane_g1

0xa8c2,	// (0x00016163) cell_vkb_keypad_number_pane_ParamLimits

0xa8c2,	// (0x00016163) cell_vkb_keypad_number_pane

0xa8e1,	// (0x00016182) cell_vkb_keypad_number_pane_g1

0xa8eb,	// (0x0001618c) cell_vkb_keypad_number_pane_g2

0xa8f4,	// (0x00016195) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb15,	// (0x0001b3b6) cell_vkb_keypad_number_pane_g

0xa85e,	// (0x000160ff) cell_vkb_keypad_number_pane_t1

0xa916,	// (0x000161b7) fep_vkb_candidate_pane_g1

0x0001,

0xfb36,	// (0x0001b3d7) cell_hwr_side_pane_g

0xa92f,	// (0x000161d0) cell_hwr_side_pane_t1

0x4998,	// (0x00010239) cell_hwr_side_pane_t1_copy1

0x49a6,	// (0x00010247) cell_hwr_candidate_pane_g1

0x49d5,	// (0x00010276) cell_hwr_candidate_pane_t1

0xa3fe,	// (0x00015c9f) cell_vkb_candidate_pane_g2

0xa973,	// (0x00016214) cell_vkb_candidate_pane_t1

0x4753,	// (0x0000fff4) bg_popup_fep_shadow_pane_ParamLimits

0x4753,	// (0x0000fff4) bg_popup_fep_shadow_pane

0x4802,	// (0x000100a3) bg_fep_hwr_top_pane_g4

0xa47b,	// (0x00015d1c) bg_hwr_side_pane_g1_ParamLimits

0xa47b,	// (0x00015d1c) bg_hwr_side_pane_g1

0xd982,	// (0x00019223) cell_hwr_side_pane_ParamLimits

0xd982,	// (0x00019223) cell_hwr_side_pane

0x48ae,	// (0x0001014f) fep_hwr_write_pane_g1_ParamLimits

0x48ae,	// (0x0001014f) fep_hwr_write_pane_g1

0x48bb,	// (0x0001015c) fep_hwr_write_pane_g2_ParamLimits

0x48bb,	// (0x0001015c) fep_hwr_write_pane_g2

0x48c8,	// (0x00010169) fep_hwr_write_pane_g3_ParamLimits

0x48c8,	// (0x00010169) fep_hwr_write_pane_g3

0xd9a2,	// (0x00019243) fep_hwr_write_pane_g4_ParamLimits

0xd9a2,	// (0x00019243) fep_hwr_write_pane_g4

0x0005,

0xfae2,	// (0x0001b383) fep_hwr_write_pane_g_ParamLimits

0xfae2,	// (0x0001b383) fep_hwr_write_pane_g

0x4802,	// (0x000100a3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4802,	// (0x000100a3) bg_fep_hwr_candidate_pane_g2

0x48eb,	// (0x0001018c) cell_hwr_candidate_pane_ParamLimits

0x48eb,	// (0x0001018c) cell_hwr_candidate_pane

0x4925,	// (0x000101c6) fep_hwr_candidate_pane_g1_ParamLimits

0xa4db,	// (0x00015d7c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xa4db,	// (0x00015d7c) bg_popup_fep_shadow_pane_cp2

0xa636,	// (0x00015ed7) fep_vkb_top_pane_g4_ParamLimits

0xa636,	// (0x00015ed7) fep_vkb_top_pane_g4

0xa67c,	// (0x00015f1d) fep_vkb_side_pane_g2_ParamLimits

0xa67c,	// (0x00015f1d) fep_vkb_side_pane_g2

0xf220,	// (0x0001aac1) list_setting_pane_t4_ParamLimits

0xf220,	// (0x0001aac1) list_setting_pane_t4

0xf29a,	// (0x0001ab3b) list_setting_number_pane_t5_ParamLimits

0xf29a,	// (0x0001ab3b) list_setting_number_pane_t5

0x0097,	// (0x0000b938) list_double_heading_pane_cp2_ParamLimits

0x0097,	// (0x0000b938) list_double_heading_pane_cp2

0x729c,	// (0x00012b3d) list_double_heading_pane_g1_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_double_heading_pane_g1_cp2

0xa981,	// (0x00016222) list_double_heading_pane_g2_cp2_ParamLimits

0xa981,	// (0x00016222) list_double_heading_pane_g2_cp2

0xa995,	// (0x00016236) list_double_heading_pane_t1_cp2_ParamLimits

0xa995,	// (0x00016236) list_double_heading_pane_t1_cp2

0xa9ab,	// (0x0001624c) list_double_heading_pane_t2_cp2_ParamLimits

0xa9ab,	// (0x0001624c) list_double_heading_pane_t2_cp2

0x574b,	// (0x00010fec) aid_value_unit2

0x36b3,	// (0x0000ef54) popup_preview_fixed_window

0x5bda,	// (0x0001147b) bg_popup_preview_window_pane_cp02

0xa9bd,	// (0x0001625e) list_preview_fixed_pane

0xaa03,	// (0x000162a4) list_empty_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_empty_pane_fp

0xaa03,	// (0x000162a4) list_single_cale_day_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_single_cale_day_pane_fp

0xaa03,	// (0x000162a4) list_single_graphic_heading_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_single_graphic_heading_pane_fp

0xaa03,	// (0x000162a4) list_single_graphic_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_single_graphic_pane_fp

0xaa03,	// (0x000162a4) list_single_heading_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_single_heading_pane_fp

0xaa03,	// (0x000162a4) list_single_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_single_pane_fp

0xaa59,	// (0x000162fa) list_single_pane_fp_g1_ParamLimits

0xaa59,	// (0x000162fa) list_single_pane_fp_g1

0xaa65,	// (0x00016306) list_single_pane_fp_g2_ParamLimits

0xaa65,	// (0x00016306) list_single_pane_fp_g2

0xaa71,	// (0x00016312) list_single_pane_fp_g3_ParamLimits

0xaa71,	// (0x00016312) list_single_pane_fp_g3

0xaa85,	// (0x00016326) list_single_pane_fp_g4_ParamLimits

0xaa85,	// (0x00016326) list_single_pane_fp_g4

0x0003,

0xfb49,	// (0x0001b3ea) list_single_pane_fp_g_ParamLimits

0xfb49,	// (0x0001b3ea) list_single_pane_fp_g

0xaa91,	// (0x00016332) list_single_pane_fp_t1_ParamLimits

0xaa91,	// (0x00016332) list_single_pane_fp_t1

0xaaa8,	// (0x00016349) list_single_graphic_pane_fp_g1_ParamLimits

0xaaa8,	// (0x00016349) list_single_graphic_pane_fp_g1

0xaa59,	// (0x000162fa) list_single_graphic_pane_fp_g2_ParamLimits

0xaa59,	// (0x000162fa) list_single_graphic_pane_fp_g2

0xaa65,	// (0x00016306) list_single_graphic_pane_fp_g3_ParamLimits

0xaa65,	// (0x00016306) list_single_graphic_pane_fp_g3

0xaa71,	// (0x00016312) list_single_graphic_pane_fp_g4_ParamLimits

0xaa71,	// (0x00016312) list_single_graphic_pane_fp_g4

0xaa85,	// (0x00016326) list_single_graphic_pane_fp_g5_ParamLimits

0xaa85,	// (0x00016326) list_single_graphic_pane_fp_g5

0x0004,

0xfb52,	// (0x0001b3f3) list_single_graphic_pane_fp_g_ParamLimits

0xfb52,	// (0x0001b3f3) list_single_graphic_pane_fp_g

0xaab4,	// (0x00016355) list_single_graphic_pane_fp_t1_ParamLimits

0xaab4,	// (0x00016355) list_single_graphic_pane_fp_t1

0xaaa8,	// (0x00016349) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xaaa8,	// (0x00016349) list_single_graphic_heading_pane_fp_g1

0xaa59,	// (0x000162fa) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xaa59,	// (0x000162fa) list_single_graphic_heading_pane_fp_g2

0xaa65,	// (0x00016306) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xaa65,	// (0x00016306) list_single_graphic_heading_pane_fp_g3

0xaa71,	// (0x00016312) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xaa71,	// (0x00016312) list_single_graphic_heading_pane_fp_g4

0xaa85,	// (0x00016326) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xaa85,	// (0x00016326) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb52,	// (0x0001b3f3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb52,	// (0x0001b3f3) list_single_graphic_heading_pane_fp_g

0xaaca,	// (0x0001636b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xaaca,	// (0x0001636b) list_single_graphic_heading_pane_fp_t1

0xaae0,	// (0x00016381) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xaae0,	// (0x00016381) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5d,	// (0x0001b3fe) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5d,	// (0x0001b3fe) list_single_graphic_heading_pane_fp_t

0xaaf2,	// (0x00016393) list_single_cale_day_pane_fp_g1_ParamLimits

0xaaf2,	// (0x00016393) list_single_cale_day_pane_fp_g1

0xab2a,	// (0x000163cb) list_single_cale_day_pane_fp_g2_ParamLimits

0xab2a,	// (0x000163cb) list_single_cale_day_pane_fp_g2

0xab36,	// (0x000163d7) list_single_cale_day_pane_fp_g3_ParamLimits

0xab36,	// (0x000163d7) list_single_cale_day_pane_fp_g3

0xab5e,	// (0x000163ff) list_single_cale_day_pane_fp_g4_ParamLimits

0xab5e,	// (0x000163ff) list_single_cale_day_pane_fp_g4

0xab82,	// (0x00016423) list_single_cale_day_pane_fp_g5_ParamLimits

0xab82,	// (0x00016423) list_single_cale_day_pane_fp_g5

0x0004,

0xfb62,	// (0x0001b403) list_single_cale_day_pane_fp_g_ParamLimits

0xfb62,	// (0x0001b403) list_single_cale_day_pane_fp_g

0xaba6,	// (0x00016447) list_single_cale_day_pane_fp_t1_ParamLimits

0xaba6,	// (0x00016447) list_single_cale_day_pane_fp_t1

0xabcc,	// (0x0001646d) list_single_cale_day_pane_fp_t2_ParamLimits

0xabcc,	// (0x0001646d) list_single_cale_day_pane_fp_t2

0xabe5,	// (0x00016486) list_single_cale_day_pane_fp_t3_ParamLimits

0xabe5,	// (0x00016486) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6d,	// (0x0001b40e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6d,	// (0x0001b40e) list_single_cale_day_pane_fp_t

0xaa59,	// (0x000162fa) list_empty_pane_fp_g1_ParamLimits

0xaa59,	// (0x000162fa) list_empty_pane_fp_g1

0xabfe,	// (0x0001649f) list_empty_pane_fp_t1

0xac0c,	// (0x000164ad) list_empty_pane_fp_t2

0x0001,

0xfb74,	// (0x0001b415) list_empty_pane_fp_t

0xaa59,	// (0x000162fa) list_single_heading_pane_fp_g1_ParamLimits

0xaa59,	// (0x000162fa) list_single_heading_pane_fp_g1

0xaa65,	// (0x00016306) list_single_heading_pane_fp_g2_ParamLimits

0xaa65,	// (0x00016306) list_single_heading_pane_fp_g2

0xaa71,	// (0x00016312) list_single_heading_pane_fp_g3_ParamLimits

0xaa71,	// (0x00016312) list_single_heading_pane_fp_g3

0x0002,

0xfb79,	// (0x0001b41a) list_single_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x0001b41a) list_single_heading_pane_fp_g

0xac1a,	// (0x000164bb) list_single_heading_pane_fp_t1_ParamLimits

0xac1a,	// (0x000164bb) list_single_heading_pane_fp_t1

0xac2c,	// (0x000164cd) list_single_heading_pane_fp_t2_ParamLimits

0xac2c,	// (0x000164cd) list_single_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001b421) list_single_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001b421) list_single_heading_pane_fp_t

0x6998,	// (0x00012239) aid_size_cell_fast

0x5b41,	// (0x000113e2) soft_indicator_pane_cp1_t1

0x69d5,	// (0x00012276) cell_app_pane_cp2_ParamLimits

0x69d5,	// (0x00012276) cell_app_pane_cp2

0x4775,	// (0x00010016) fep_hwr_candidate_drop_down_list_pane

0x493f,	// (0x000101e0) fep_hwr_candidate_pane_g3_ParamLimits

0x493f,	// (0x000101e0) fep_hwr_candidate_pane_g3

0x28f3,	// (0x0000e194) fep_hwr_candidate_pane_g4_ParamLimits

0x28f3,	// (0x0000e194) fep_hwr_candidate_pane_g4

0x0002,

0xfaef,	// (0x0001b390) fep_hwr_candidate_pane_g_ParamLimits

0xfaef,	// (0x0001b390) fep_hwr_candidate_pane_g

0xa54f,	// (0x00015df0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xa54f,	// (0x00015df0) fep_vkb_candidate_drop_down_list_pane

0xa91e,	// (0x000161bf) fep_vkb_candidate_pane_g3

0xa926,	// (0x000161c7) fep_vkb_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0001b3bd) fep_vkb_candidate_pane_g

0x49a6,	// (0x00010247) cell_hwr_candidate_pane_g1_ParamLimits

0x49b4,	// (0x00010255) cell_hwr_candidate_pane_g3_ParamLimits

0x49b4,	// (0x00010255) cell_hwr_candidate_pane_g3

0xdf96,	// (0x00019837) cell_hwr_candidate_pane_g4_ParamLimits

0xdf96,	// (0x00019837) cell_hwr_candidate_pane_g4

0x0002,

0xfb3b,	// (0x0001b3dc) cell_hwr_candidate_pane_g_ParamLimits

0xfb3b,	// (0x0001b3dc) cell_hwr_candidate_pane_g

0xa93d,	// (0x000161de) cell_vkb_candidate_pane_g3_ParamLimits

0xa93d,	// (0x000161de) cell_vkb_candidate_pane_g3

0xa958,	// (0x000161f9) cell_vkb_candidate_pane_g4_ParamLimits

0xa958,	// (0x000161f9) cell_vkb_candidate_pane_g4

0xac42,	// (0x000164e3) cell_app_pane_cp2_g1_ParamLimits

0xac42,	// (0x000164e3) cell_app_pane_cp2_g1

0xac60,	// (0x00016501) cell_app_pane_cp2_g2_ParamLimits

0xac60,	// (0x00016501) cell_app_pane_cp2_g2

0x0001,

0xfb85,	// (0x0001b426) cell_app_pane_cp2_g_ParamLimits

0xfb85,	// (0x0001b426) cell_app_pane_cp2_g

0xac6c,	// (0x0001650d) cell_app_pane_cp2_t1_ParamLimits

0xac6c,	// (0x0001650d) cell_app_pane_cp2_t1

0x6631,	// (0x00011ed2) grid_highlight_pane_cp1_ParamLimits

0x6631,	// (0x00011ed2) grid_highlight_pane_cp1

0x49f2,	// (0x00010293) cell_hwr_candidate_pane_cp1_ParamLimits

0x49f2,	// (0x00010293) cell_hwr_candidate_pane_cp1

0x49a6,	// (0x00010247) fep_hwr_candidate_drop_down_list_pane_g1

0x4a10,	// (0x000102b1) fep_hwr_candidate_drop_down_list_pane_g2

0x4a1d,	// (0x000102be) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8a,	// (0x0001b42b) fep_hwr_candidate_drop_down_list_pane_g

0x4a2a,	// (0x000102cb) fep_hwr_candidate_drop_down_list_scroll_pane

0x4a33,	// (0x000102d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4a33,	// (0x000102d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4a40,	// (0x000102e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4a40,	// (0x000102e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4a4d,	// (0x000102ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4a4d,	// (0x000102ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4a5a,	// (0x000102fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a5a,	// (0x000102fb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4a75,	// (0x00010316) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4a75,	// (0x00010316) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4a90,	// (0x00010331) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4a90,	// (0x00010331) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4aab,	// (0x0001034c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4aab,	// (0x0001034c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4ac6,	// (0x00010367) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4ac6,	// (0x00010367) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb91,	// (0x0001b432) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb91,	// (0x0001b432) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x16c1,	// (0x0000cf62) cell_vkb_candidate_pane_cp1_ParamLimits

0x16c1,	// (0x0000cf62) cell_vkb_candidate_pane_cp1

0xa636,	// (0x00015ed7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xa636,	// (0x00015ed7) fep_vkb_candidate_drop_down_list_pane_g1

0xaca1,	// (0x00016542) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xaca1,	// (0x00016542) fep_vkb_candidate_drop_down_list_pane_g2

0xacae,	// (0x0001654f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xacae,	// (0x0001654f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x0001b443) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba2,	// (0x0001b443) fep_vkb_candidate_drop_down_list_pane_g

0xacbb,	// (0x0001655c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xacbb,	// (0x0001655c) fep_vkb_candidate_drop_down_list_scroll_pane

0xacc8,	// (0x00016569) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xacc8,	// (0x00016569) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xacd5,	// (0x00016576) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xacd5,	// (0x00016576) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xace1,	// (0x00016582) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xace1,	// (0x00016582) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xaa17,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xaa17,	// (0x000162b8) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xaa38,	// (0x000162d9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xaa38,	// (0x000162d9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xaced,	// (0x0001658e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xaced,	// (0x0001658e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xad0e,	// (0x000165af) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xad0e,	// (0x000165af) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xad2f,	// (0x000165d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xad2f,	// (0x000165d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x0001b44a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x0001b44a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xec23,	// (0x0001a4c4) title_pane_g1_ParamLimits

0xec3a,	// (0x0001a4db) title_pane_g2_ParamLimits

0xf529,	// (0x0001adca) title_pane_g_ParamLimits

0x6def,	// (0x00012690) aid_call2_pane

0x6df7,	// (0x00012698) aid_call_pane

0x6dff,	// (0x000126a0) popup_clock_analogue_window_g1

0x6dff,	// (0x000126a0) popup_clock_analogue_window_g2

0x398d,	// (0x0000f22e) popup_clock_analogue_window_g3

0x3996,	// (0x0000f237) popup_clock_analogue_window_g4

0x576b,	// (0x0001100c) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001af6f) popup_clock_analogue_window_g

0x399e,	// (0x0000f23f) popup_clock_analogue_window_t1

0x39ac,	// (0x0000f24d) clock_digital_number_pane_ParamLimits

0x39ac,	// (0x0000f24d) clock_digital_number_pane

0x39b8,	// (0x0000f259) clock_digital_number_pane_cp02_ParamLimits

0x39b8,	// (0x0000f259) clock_digital_number_pane_cp02

0x39c4,	// (0x0000f265) clock_digital_number_pane_cp03_ParamLimits

0x39c4,	// (0x0000f265) clock_digital_number_pane_cp03

0x39d0,	// (0x0000f271) clock_digital_number_pane_cp04_ParamLimits

0x39d0,	// (0x0000f271) clock_digital_number_pane_cp04

0x39dc,	// (0x0000f27d) clock_digital_separator_pane_ParamLimits

0x39dc,	// (0x0000f27d) clock_digital_separator_pane

0x39e8,	// (0x0000f289) popup_clock_digital_window_t1_ParamLimits

0x39e8,	// (0x0000f289) popup_clock_digital_window_t1

0x576b,	// (0x0001100c) clock_digital_number_pane_g1

0x576b,	// (0x0001100c) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001af7a) clock_digital_number_pane_g

0x576b,	// (0x0001100c) clock_digital_separator_pane_g1

0x576b,	// (0x0001100c) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001af7a) clock_digital_separator_pane_g

0x0a0d,	// (0x0000c2ae) aid_fill_nsta_ParamLimits

0x0b24,	// (0x0000c3c5) indicator_nsta_pane_ParamLimits

0x7a42,	// (0x000132e3) popup_clock_analogue_window

0x7a42,	// (0x000132e3) popup_clock_digital_window

0x14b9,	// (0x0000cd5a) grid_indicator_nsta_pane_ParamLimits

0x9e83,	// (0x00015724) clock_nsta_pane_t2

0x0001,

0xfa6f,	// (0x0001b310) clock_nsta_pane_t

0x3951,	// (0x0000f1f2) aid_size_max_handle

0xd0b6,	// (0x00018957) aid_size_min_handle

0x742e,	// (0x00012ccf) editor_scroll_pane

0xad4a,	// (0x000165eb) ex_editor_pane

0x6908,	// (0x000121a9) scroll_pane_cp13

0x60cf,	// (0x00011970) scroll_pane_cp14

0x6e2e,	// (0x000126cf) scroll_pane_cp36

0x00a3,	// (0x0000b944) list_single_graphic_hl_pane_cp2_ParamLimits

0x00a3,	// (0x0000b944) list_single_graphic_hl_pane_cp2

0x131a,	// (0x0000cbbb) list_single_graphic_hl_pane_ParamLimits

0x131a,	// (0x0000cbbb) list_single_graphic_hl_pane

0xad52,	// (0x000165f3) aid_size_min_hl_cp1

0xad5b,	// (0x000165fc) list_highlight_pane_cp34_ParamLimits

0xad5b,	// (0x000165fc) list_highlight_pane_cp34

0xad6c,	// (0x0001660d) list_single_graphic_hl_pane_g1_ParamLimits

0xad6c,	// (0x0001660d) list_single_graphic_hl_pane_g1

0x16e1,	// (0x0000cf82) list_single_graphic_hl_pane_g2_ParamLimits

0x16e1,	// (0x0000cf82) list_single_graphic_hl_pane_g2

0x16e1,	// (0x0000cf82) list_single_graphic_hl_pane_g3_ParamLimits

0x16e1,	// (0x0000cf82) list_single_graphic_hl_pane_g3

0x60e3,	// (0x00011984) list_single_graphic_hl_pane_g4_ParamLimits

0x60e3,	// (0x00011984) list_single_graphic_hl_pane_g4

0x6657,	// (0x00011ef8) list_single_graphic_hl_pane_g5_ParamLimits

0x6657,	// (0x00011ef8) list_single_graphic_hl_pane_g5

0x0004,

0xfbba,	// (0x0001b45b) list_single_graphic_hl_pane_g_ParamLimits

0xfbba,	// (0x0001b45b) list_single_graphic_hl_pane_g

0x16ed,	// (0x0000cf8e) list_single_graphic_hl_pane_t1_ParamLimits

0x16ed,	// (0x0000cf8e) list_single_graphic_hl_pane_t1

0xad9b,	// (0x0001663c) aid_size_min_hl_cp2

0xada4,	// (0x00016645) list_highlight_pane_cp34_cp2_ParamLimits

0xada4,	// (0x00016645) list_highlight_pane_cp34_cp2

0xad6c,	// (0x0001660d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xad6c,	// (0x0001660d) list_single_graphic_hl_pane_g1_cp2

0xadb1,	// (0x00016652) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xadb1,	// (0x00016652) list_single_graphic_hl_pane_g2_cp2

0xadbd,	// (0x0001665e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xadbd,	// (0x0001665e) list_single_graphic_hl_pane_g3_cp2

0x729c,	// (0x00012b3d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x729c,	// (0x00012b3d) list_single_graphic_hl_pane_g4_cp2

0xa981,	// (0x00016222) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xa981,	// (0x00016222) list_single_graphic_hl_pane_g5_cp2

0xd0e0,	// (0x00018981) control_pane_g4_ParamLimits

0xd0e0,	// (0x00018981) control_pane_g4

0x777d,	// (0x0001301e) bg_popup_sub_pane_cp10_ParamLimits

0xa408,	// (0x00015ca9) list_choice_list_pane_ParamLimits

0xa417,	// (0x00015cb8) scroll_pane_cp23

0x5bda,	// (0x0001147b) bg_popup_preview_window_pane_cp02_ParamLimits

0xa9bd,	// (0x0001625e) list_preview_fixed_pane_ParamLimits

0xa9d3,	// (0x00016274) list_preview_fixed_pane_cp_ParamLimits

0xa9d3,	// (0x00016274) list_preview_fixed_pane_cp

0xa9df,	// (0x00016280) popup_preview_fixed_window_g1_ParamLimits

0xa9df,	// (0x00016280) popup_preview_fixed_window_g1

0xa9eb,	// (0x0001628c) popup_preview_fixed_window_g2_ParamLimits

0xa9eb,	// (0x0001628c) popup_preview_fixed_window_g2

0x0002,

0xfb42,	// (0x0001b3e3) popup_preview_fixed_window_g_ParamLimits

0xfb42,	// (0x0001b3e3) popup_preview_fixed_window_g

0x38e1,	// (0x0000f182) aid_navi_side_left_pane_ParamLimits

0x38f1,	// (0x0000f192) aid_navi_side_right_pane_ParamLimits

0x3900,	// (0x0000f1a1) navi_icon_pane_stacon_ParamLimits

0x3910,	// (0x0000f1b1) navi_navi_pane_stacon_ParamLimits

0x3900,	// (0x0000f1a1) navi_text_pane_stacon_ParamLimits

0x3594,	// (0x0000ee35) main_text_info_pane

0xaddf,	// (0x00016680) listscroll_text_info_pane

0xade7,	// (0x00016688) list_text_info_pane_ParamLimits

0xade7,	// (0x00016688) list_text_info_pane

0xadf6,	// (0x00016697) scroll_pane_cp24_ParamLimits

0xadf6,	// (0x00016697) scroll_pane_cp24

0x1703,	// (0x0000cfa4) list_text_info_pane_t1_ParamLimits

0x1703,	// (0x0000cfa4) list_text_info_pane_t1

0xd22b,	// (0x00018acc) popup_fast_swap2_window_ParamLimits

0xd22b,	// (0x00018acc) popup_fast_swap2_window

0xae31,	// (0x000166d2) aid_size_cell_fast2

0x5761,	// (0x00011002) bg_popup_window_pane_cp17

0x8140,	// (0x000139e1) heading_pane_cp2

0x8148,	// (0x000139e9) listscroll_fast2_pane

0xae3b,	// (0x000166dc) grid_fast2_pane

0xae43,	// (0x000166e4) listscroll_fast2_pane_g1

0xae4b,	// (0x000166ec) listscroll_fast2_pane_g2

0x0001,

0xfbc5,	// (0x0001b466) listscroll_fast2_pane_g

0x6908,	// (0x000121a9) scroll_pane_cp26

0xae53,	// (0x000166f4) cell_fast2_pane_ParamLimits

0xae53,	// (0x000166f4) cell_fast2_pane

0xae69,	// (0x0001670a) cell_fast2_pane_g1

0xae72,	// (0x00016713) cell_fast2_pane_g2

0xae7b,	// (0x0001671c) cell_fast2_pane_g3

0x0002,

0xfbca,	// (0x0001b46b) cell_fast2_pane_g

0x5f28,	// (0x000117c9) grid_highlight_pane_cp9

0x3da9,	// (0x0000f64a) main_eswt_pane_ParamLimits

0x3da9,	// (0x0000f64a) main_eswt_pane

0xae0b,	// (0x000166ac) list_single_text_info_pane

0xae83,	// (0x00016724) eswt_ctrl_button_pane

0xae83,	// (0x00016724) eswt_ctrl_canvas_pane

0xae8b,	// (0x0001672c) eswt_ctrl_combo_pane

0xae83,	// (0x00016724) eswt_ctrl_default_pane

0xae83,	// (0x00016724) eswt_ctrl_label_pane

0xae93,	// (0x00016734) eswt_ctrl_wait_pane

0xae9b,	// (0x0001673c) eswt_shell_pane

0x5761,	// (0x00011002) listscroll_eswt_app_pane

0xaeb7,	// (0x00016758) popup_eswt_tasktip_window_ParamLimits

0xaeb7,	// (0x00016758) popup_eswt_tasktip_window

0x7d92,	// (0x00013633) bg_popup_window_pane_cp18

0xaec8,	// (0x00016769) eswt_control_pane_g1_ParamLimits

0xaec8,	// (0x00016769) eswt_control_pane_g1

0xaed5,	// (0x00016776) eswt_control_pane_g2_ParamLimits

0xaed5,	// (0x00016776) eswt_control_pane_g2

0xaee2,	// (0x00016783) eswt_control_pane_g3_ParamLimits

0xaee2,	// (0x00016783) eswt_control_pane_g3

0xaeef,	// (0x00016790) eswt_control_pane_g4_ParamLimits

0xaeef,	// (0x00016790) eswt_control_pane_g4

0x0003,

0xfbd1,	// (0x0001b472) eswt_control_pane_g_ParamLimits

0xfbd1,	// (0x0001b472) eswt_control_pane_g

0x6631,	// (0x00011ed2) bg_button_pane_ParamLimits

0x6631,	// (0x00011ed2) bg_button_pane

0x5f3d,	// (0x000117de) common_borders_pane_copy2_ParamLimits

0x5f3d,	// (0x000117de) common_borders_pane_copy2

0xaefc,	// (0x0001679d) control_button_pane_g1_ParamLimits

0xaefc,	// (0x0001679d) control_button_pane_g1

0xaf08,	// (0x000167a9) control_button_pane_g2_ParamLimits

0xaf08,	// (0x000167a9) control_button_pane_g2

0xaf14,	// (0x000167b5) control_button_pane_g3_ParamLimits

0xaf14,	// (0x000167b5) control_button_pane_g3

0x0002,

0xfbda,	// (0x0001b47b) control_button_pane_g_ParamLimits

0xfbda,	// (0x0001b47b) control_button_pane_g

0xaf28,	// (0x000167c9) control_button_pane_t1

0xaf36,	// (0x000167d7) control_button_pane_t2

0x0001,

0xfbe1,	// (0x0001b482) control_button_pane_t

0x7c7a,	// (0x0001351b) bg_button_pane_g1

0x7c8a,	// (0x0001352b) bg_button_pane_g2

0x7c82,	// (0x00013523) bg_button_pane_g3

0x7c9a,	// (0x0001353b) bg_button_pane_g4

0x7c92,	// (0x00013533) bg_button_pane_g5

0x7ca2,	// (0x00013543) bg_button_pane_g6

0x7caa,	// (0x0001354b) bg_button_pane_g7

0x7cba,	// (0x0001355b) bg_button_pane_g8

0x7cb2,	// (0x00013553) bg_button_pane_g9

0x0008,

0xf830,	// (0x0001b0d1) bg_button_pane_g

0xa3c3,	// (0x00015c64) common_borders_pane_ParamLimits

0xa3c3,	// (0x00015c64) common_borders_pane

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy1_ParamLimits

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy1

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy1_ParamLimits

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy1

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy1_ParamLimits

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy1

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy1_ParamLimits

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy1

0xa3fe,	// (0x00015c9f) bg_eswt_ctrl_canvas_pane_g1

0xa3c3,	// (0x00015c64) common_borders_pane_cp2_ParamLimits

0xa3c3,	// (0x00015c64) common_borders_pane_cp2

0xa3c3,	// (0x00015c64) common_borders_pane_cp3_ParamLimits

0xa3c3,	// (0x00015c64) common_borders_pane_cp3

0xaf44,	// (0x000167e5) separator_horizontal_pane

0x6c3c,	// (0x000124dd) separator_vertical_pane

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy2_ParamLimits

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy2

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy2_ParamLimits

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy2

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy2_ParamLimits

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy2

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy2_ParamLimits

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy2

0x5761,	// (0x00011002) common_borders_pane_cp4

0xaf4c,	// (0x000167ed) separator_horizontal_pane_g1

0xaf55,	// (0x000167f6) separator_horizontal_pane_g2

0xaf5e,	// (0x000167ff) separator_horizontal_pane_g3

0x0002,

0xfbe6,	// (0x0001b487) separator_horizontal_pane_g

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy3_ParamLimits

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy3

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy3_ParamLimits

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy3

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy3_ParamLimits

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy3

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy3_ParamLimits

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy3

0x5761,	// (0x00011002) common_borders_pane_cp5

0xaf67,	// (0x00016808) separator_vertical_pane_g1

0xaf70,	// (0x00016811) separator_vertical_pane_g2

0xaf79,	// (0x0001681a) separator_vertical_pane_g3

0x0002,

0xfbed,	// (0x0001b48e) separator_vertical_pane_g

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy4_ParamLimits

0xaec8,	// (0x00016769) eswt_control_pane_g1_copy4

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy4_ParamLimits

0xaed5,	// (0x00016776) eswt_control_pane_g2_copy4

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy4_ParamLimits

0xaee2,	// (0x00016783) eswt_control_pane_g3_copy4

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy4_ParamLimits

0xaeef,	// (0x00016790) eswt_control_pane_g4_copy4

0x171e,	// (0x0000cfbf) eswt_ctrl_combo_button_pane

0x1726,	// (0x0000cfc7) eswt_ctrl_input_pane

0x172e,	// (0x0000cfcf) popup_choice_list_window_cp70

0x1736,	// (0x0000cfd7) eswt_ctrl_input_pane_t1

0x5761,	// (0x00011002) input_focus_pane_cp70

0xa3c3,	// (0x00015c64) bg_button_pane_cp70_ParamLimits

0xa3c3,	// (0x00015c64) bg_button_pane_cp70

0x95e1,	// (0x00014e82) eswt_ctrl_combo_button_pane_g1

0xafb0,	// (0x00016851) wait_bar_pane_cp70

0x7d92,	// (0x00013633) bg_popup_window_pane_cp70_ParamLimits

0x7d92,	// (0x00013633) bg_popup_window_pane_cp70

0xafb8,	// (0x00016859) popup_eswt_tasktip_window_t1

0xafce,	// (0x0001686f) wait_bar_pane_cp71_ParamLimits

0xafce,	// (0x0001686f) wait_bar_pane_cp71

0xafda,	// (0x0001687b) grid_eswt_app_pane

0x6c33,	// (0x000124d4) scroll_pane_cp70

0x1744,	// (0x0000cfe5) cell_eswt_app_pane_ParamLimits

0x1744,	// (0x0000cfe5) cell_eswt_app_pane

0x176c,	// (0x0000d00d) cell_eswt_app_pane_g1_ParamLimits

0x176c,	// (0x0000d00d) cell_eswt_app_pane_g1

0x179b,	// (0x0000d03c) cell_eswt_app_pane_g2_ParamLimits

0x179b,	// (0x0000d03c) cell_eswt_app_pane_g2

0x0001,

0xfbf4,	// (0x0001b495) cell_eswt_app_pane_g_ParamLimits

0xfbf4,	// (0x0001b495) cell_eswt_app_pane_g

0x17c4,	// (0x0000d065) cell_eswt_app_pane_t1_ParamLimits

0x17c4,	// (0x0000d065) cell_eswt_app_pane_t1

0xb095,	// (0x00016936) grid_highlight_pane_cp70_ParamLimits

0xb095,	// (0x00016936) grid_highlight_pane_cp70

0x60e3,	// (0x00011984) set_content_pane_g1

0x02ca,	// (0x0000bb6b) status_small_volume_pane

0xd9b7,	// (0x00019258) status_small_volume_pane_g1

0xd9bf,	// (0x00019260) volume_small2_pane

0xd9c8,	// (0x00019269) volume_small2_pane_g1

0xd9d1,	// (0x00019272) volume_small2_pane_g2

0xd9da,	// (0x0001927b) volume_small2_pane_g3

0xd9e3,	// (0x00019284) volume_small2_pane_g4

0xd9ec,	// (0x0001928d) volume_small2_pane_g5

0xd9f5,	// (0x00019296) volume_small2_pane_g6

0xd9fe,	// (0x0001929f) volume_small2_pane_g7

0xda07,	// (0x000192a8) volume_small2_pane_g8

0xda10,	// (0x000192b1) volume_small2_pane_g9

0xda19,	// (0x000192ba) volume_small2_pane_g10

0x0009,

0xfbf9,	// (0x0001b49a) volume_small2_pane_g

0xa778,	// (0x00016019) fep_vkb_top_text_pane_g1_ParamLimits

0x1669,	// (0x0000cf0a) fep_vkb_top_text_pane_t1_ParamLimits

0xa9f7,	// (0x00016298) popup_preview_fixed_window_g3_ParamLimits

0xa9f7,	// (0x00016298) popup_preview_fixed_window_g3

0xd74b,	// (0x00018fec) popup_toolbar_trans_pane

0x902f,	// (0x000148d0) aid_height_set_list_ParamLimits

0x903b,	// (0x000148dc) aid_size_parent_ParamLimits

0x777d,	// (0x0001301e) list_highlight_pane_cp2_ParamLimits

0x60e3,	// (0x00011984) set_content_pane_g1_ParamLimits

0x69d5,	// (0x00012276) list_single_image_pane_ParamLimits

0x69d5,	// (0x00012276) list_single_image_pane

0x1861,	// (0x0000d102) aid_size_cell_image_ParamLimits

0x1861,	// (0x0000d102) aid_size_cell_image

0x186e,	// (0x0000d10f) grid_single_image_pane_ParamLimits

0x186e,	// (0x0000d10f) grid_single_image_pane

0x60e3,	// (0x00011984) list_single_image_pane_g1_ParamLimits

0x60e3,	// (0x00011984) list_single_image_pane_g1

0x6657,	// (0x00011ef8) list_single_image_pane_g2_ParamLimits

0x6657,	// (0x00011ef8) list_single_image_pane_g2

0x0001,

0xfc0e,	// (0x0001b4af) list_single_image_pane_g_ParamLimits

0xfc0e,	// (0x0001b4af) list_single_image_pane_g

0x91be,	// (0x00014a5f) list_single_image_pane_t1_ParamLimits

0x91be,	// (0x00014a5f) list_single_image_pane_t1

0x187c,	// (0x0000d11d) cell_image_list_pane_ParamLimits

0x187c,	// (0x0000d11d) cell_image_list_pane

0x1890,	// (0x0000d131) cell_image_list_pane_g1

0x1899,	// (0x0000d13a) cell_image_list_pane_g2

0x0001,

0xfc13,	// (0x0001b4b4) cell_image_list_pane_g

0xb0df,	// (0x00016980) aid_size_cell_tb_trans_pane

0x6631,	// (0x00011ed2) bg_tb_trans_pane

0xb0f1,	// (0x00016992) grid_tb_trans_pane

0x7c7a,	// (0x0001351b) bg_tb_trans_pane_g1

0x7c8a,	// (0x0001352b) bg_tb_trans_pane_g2

0x7c82,	// (0x00013523) bg_tb_trans_pane_g3

0x7c9a,	// (0x0001353b) bg_tb_trans_pane_g4

0x7c92,	// (0x00013533) bg_tb_trans_pane_g5

0x7cba,	// (0x0001355b) bg_tb_trans_pane_g6

0x7cb2,	// (0x00013553) bg_tb_trans_pane_g7

0x7ca2,	// (0x00013543) bg_tb_trans_pane_g8

0x7caa,	// (0x0001354b) bg_tb_trans_pane_g9

0x0008,

0xfc18,	// (0x0001b4b9) bg_tb_trans_pane_g

0xb105,	// (0x000169a6) cell_toolbar_trans_pane_ParamLimits

0xb105,	// (0x000169a6) cell_toolbar_trans_pane

0xa3fe,	// (0x00015c9f) cell_toolbar_trans_pane_g1

0x1566,	// (0x0000ce07) list_form2_midp_pane_t1

0x1574,	// (0x0000ce15) list_form2_midp_pane_t2

0x0001,

0xfab5,	// (0x0001b356) list_form2_midp_pane_t

0xa063,	// (0x00015904) scroll_pane_cp51_ParamLimits

0xa248,	// (0x00015ae9) form2_midp_wait_pane_g1

0xa251,	// (0x00015af2) form2_midp_wait_pane_g2

0xa25a,	// (0x00015afb) form2_midp_wait_pane_g3

0x0002,

0xfaca,	// (0x0001b36b) form2_midp_wait_pane_g

0x5932,	// (0x000111d3) list_highlight_pane_cp21_ParamLimits

0xa298,	// (0x00015b39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xa2a7,	// (0x00015b48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9205,	// (0x00014aa6) list_single_2graphic_im_pane_ParamLimits

0x9205,	// (0x00014aa6) list_single_2graphic_im_pane

0x18a2,	// (0x0000d143) list_single_2graphic_im_pane_g1_ParamLimits

0x18a2,	// (0x0000d143) list_single_2graphic_im_pane_g1

0x18b3,	// (0x0000d154) list_single_2graphic_im_pane_g2_ParamLimits

0x18b3,	// (0x0000d154) list_single_2graphic_im_pane_g2

0x18bf,	// (0x0000d160) list_single_2graphic_im_pane_g3_ParamLimits

0x18bf,	// (0x0000d160) list_single_2graphic_im_pane_g3

0x0003,

0xfc2b,	// (0x0001b4cc) list_single_2graphic_im_pane_g_ParamLimits

0xfc2b,	// (0x0001b4cc) list_single_2graphic_im_pane_g

0x18d3,	// (0x0000d174) list_single_2graphic_im_pane_t1_ParamLimits

0x18d3,	// (0x0000d174) list_single_2graphic_im_pane_t1

0xaa03,	// (0x000162a4) list_single_graphic_2heading_pane_fp_ParamLimits

0xaa03,	// (0x000162a4) list_single_graphic_2heading_pane_fp

0xaaa8,	// (0x00016349) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xaaa8,	// (0x00016349) list_single_graphic_2heading_pane_fp_g1

0xaa59,	// (0x000162fa) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xaa59,	// (0x000162fa) list_single_graphic_2heading_pane_fp_g2

0xaa65,	// (0x00016306) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xaa65,	// (0x00016306) list_single_graphic_2heading_pane_fp_g3

0xaa71,	// (0x00016312) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xaa71,	// (0x00016312) list_single_graphic_2heading_pane_fp_g4

0xaa85,	// (0x00016326) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xaa85,	// (0x00016326) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb52,	// (0x0001b3f3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb52,	// (0x0001b3f3) list_single_graphic_2heading_pane_fp_g

0xb199,	// (0x00016a3a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xb199,	// (0x00016a3a) list_single_graphic_2heading_pane_fp_t1

0xaae0,	// (0x00016381) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xaae0,	// (0x00016381) list_single_graphic_2heading_pane_fp_t2

0xb1af,	// (0x00016a50) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xb1af,	// (0x00016a50) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc34,	// (0x0001b4d5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc34,	// (0x0001b4d5) list_single_graphic_2heading_pane_fp_t

0xa487,	// (0x00015d28) fep_hwr_write_pane_g5_ParamLimits

0xa487,	// (0x00015d28) fep_hwr_write_pane_g5

0xa493,	// (0x00015d34) fep_hwr_write_pane_g6_ParamLimits

0xa493,	// (0x00015d34) fep_hwr_write_pane_g6

0xae9b,	// (0x0001673c) eswt_shell_pane_ParamLimits

0x7d92,	// (0x00013633) bg_popup_window_pane_cp18_ParamLimits

0x8fa1,	// (0x00014842) heading_pane_cp70

0xafb8,	// (0x00016859) popup_eswt_tasktip_window_t1_ParamLimits

0x0a51,	// (0x0000c2f2) aid_touch_tab_arrow_left

0x0a65,	// (0x0000c306) aid_touch_tab_arrow_right

0xec59,	// (0x0001a4fa) title_pane_g3_ParamLimits

0xec59,	// (0x0001a4fa) title_pane_g3

0x652f,	// (0x00011dd0) set_value_pane_g1

0xd74b,	// (0x00018fec) popup_toolbar_trans_pane_ParamLimits

0xb0df,	// (0x00016980) aid_size_cell_tb_trans_pane_ParamLimits

0x6631,	// (0x00011ed2) bg_tb_trans_pane_ParamLimits

0xb0f1,	// (0x00016992) grid_tb_trans_pane_ParamLimits

0x5bda,	// (0x0001147b) cont_note_pane_ParamLimits

0x5bda,	// (0x0001147b) cont_note_pane

0x5f3d,	// (0x000117de) cont_snote2_single_text_pane_ParamLimits

0x5f3d,	// (0x000117de) cont_snote2_single_text_pane

0x5f3d,	// (0x000117de) cont_snote2_single_graphic_pane_ParamLimits

0x5f3d,	// (0x000117de) cont_snote2_single_graphic_pane

0x835e,	// (0x00013bff) cont_note_wait_pane_ParamLimits

0x835e,	// (0x00013bff) cont_note_wait_pane

0x835e,	// (0x00013bff) cont_note_image_pane_ParamLimits

0x835e,	// (0x00013bff) cont_note_image_pane

0xb1c5,	// (0x00016a66) popup_note2_window_g1_ParamLimits

0xb1c5,	// (0x00016a66) popup_note2_window_g1

0xb1f6,	// (0x00016a97) popup_note2_window_t1_ParamLimits

0xb1f6,	// (0x00016a97) popup_note2_window_t1

0xb23b,	// (0x00016adc) popup_note2_window_t2_ParamLimits

0xb23b,	// (0x00016adc) popup_note2_window_t2

0xb280,	// (0x00016b21) popup_note2_window_t3_ParamLimits

0xb280,	// (0x00016b21) popup_note2_window_t3

0xb2c5,	// (0x00016b66) popup_note2_window_t4_ParamLimits

0xb2c5,	// (0x00016b66) popup_note2_window_t4

0x5c5e,	// (0x000114ff) popup_note2_window_t5_ParamLimits

0x5c5e,	// (0x000114ff) popup_note2_window_t5

0x0004,

0xfc40,	// (0x0001b4e1) popup_note2_window_t_ParamLimits

0xfc40,	// (0x0001b4e1) popup_note2_window_t

0xb2f4,	// (0x00016b95) popup_note2_image_window_g1_ParamLimits

0xb2f4,	// (0x00016b95) popup_note2_image_window_g1

0xb300,	// (0x00016ba1) popup_note2_image_window_g2_ParamLimits

0xb300,	// (0x00016ba1) popup_note2_image_window_g2

0x0001,

0xfc4b,	// (0x0001b4ec) popup_note2_image_window_g_ParamLimits

0xfc4b,	// (0x0001b4ec) popup_note2_image_window_g

0xb312,	// (0x00016bb3) popup_note2_image_window_t1_ParamLimits

0xb312,	// (0x00016bb3) popup_note2_image_window_t1

0xb32a,	// (0x00016bcb) popup_note2_image_window_t2_ParamLimits

0xb32a,	// (0x00016bcb) popup_note2_image_window_t2

0xb342,	// (0x00016be3) popup_note2_image_window_t3_ParamLimits

0xb342,	// (0x00016be3) popup_note2_image_window_t3

0x0002,

0xfc50,	// (0x0001b4f1) popup_note2_image_window_t_ParamLimits

0xfc50,	// (0x0001b4f1) popup_note2_image_window_t

0x836c,	// (0x00013c0d) popup_note2_wait_window_g1_ParamLimits

0x836c,	// (0x00013c0d) popup_note2_wait_window_g1

0x8378,	// (0x00013c19) popup_note2_wait_window_g2_ParamLimits

0x8378,	// (0x00013c19) popup_note2_wait_window_g2

0x8384,	// (0x00013c25) popup_note2_wait_window_g3_ParamLimits

0x8384,	// (0x00013c25) popup_note2_wait_window_g3

0x0002,

0xf812,	// (0x0001b0b3) popup_note2_wait_window_g_ParamLimits

0xf812,	// (0x0001b0b3) popup_note2_wait_window_g

0xb35e,	// (0x00016bff) popup_note2_wait_window_t1_ParamLimits

0xb35e,	// (0x00016bff) popup_note2_wait_window_t1

0xb37c,	// (0x00016c1d) popup_note2_wait_window_t2_ParamLimits

0xb37c,	// (0x00016c1d) popup_note2_wait_window_t2

0xb39a,	// (0x00016c3b) popup_note2_wait_window_t3_ParamLimits

0xb39a,	// (0x00016c3b) popup_note2_wait_window_t3

0xb3ac,	// (0x00016c4d) popup_note2_wait_window_t4_ParamLimits

0xb3ac,	// (0x00016c4d) popup_note2_wait_window_t4

0x0003,

0xfc57,	// (0x0001b4f8) popup_note2_wait_window_t_ParamLimits

0xfc57,	// (0x0001b4f8) popup_note2_wait_window_t

0xb3be,	// (0x00016c5f) wait_bar2_pane_ParamLimits

0xb3be,	// (0x00016c5f) wait_bar2_pane

0xb3d6,	// (0x00016c77) popup_snote2_single_text_window_g1_ParamLimits

0xb3d6,	// (0x00016c77) popup_snote2_single_text_window_g1

0xb3fe,	// (0x00016c9f) popup_snote2_single_text_window_t1_ParamLimits

0xb3fe,	// (0x00016c9f) popup_snote2_single_text_window_t1

0xb44a,	// (0x00016ceb) popup_snote2_single_text_window_t2_ParamLimits

0xb44a,	// (0x00016ceb) popup_snote2_single_text_window_t2

0xb496,	// (0x00016d37) popup_snote2_single_text_window_t3_ParamLimits

0xb496,	// (0x00016d37) popup_snote2_single_text_window_t3

0xb4d7,	// (0x00016d78) popup_snote2_single_text_window_t4_ParamLimits

0xb4d7,	// (0x00016d78) popup_snote2_single_text_window_t4

0xb50d,	// (0x00016dae) popup_snote2_single_text_window_t5_ParamLimits

0xb50d,	// (0x00016dae) popup_snote2_single_text_window_t5

0x0004,

0xfc60,	// (0x0001b501) popup_snote2_single_text_window_t_ParamLimits

0xfc60,	// (0x0001b501) popup_snote2_single_text_window_t

0xb538,	// (0x00016dd9) popup_snote2_single_graphic_window_g1_ParamLimits

0xb538,	// (0x00016dd9) popup_snote2_single_graphic_window_g1

0xb560,	// (0x00016e01) popup_snote2_single_graphic_window_g2_ParamLimits

0xb560,	// (0x00016e01) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6b,	// (0x0001b50c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6b,	// (0x0001b50c) popup_snote2_single_graphic_window_g

0xb588,	// (0x00016e29) popup_snote2_single_graphic_window_t1_ParamLimits

0xb588,	// (0x00016e29) popup_snote2_single_graphic_window_t1

0xb5d4,	// (0x00016e75) popup_snote2_single_graphic_window_t2_ParamLimits

0xb5d4,	// (0x00016e75) popup_snote2_single_graphic_window_t2

0xb496,	// (0x00016d37) popup_snote2_single_graphic_window_t3_ParamLimits

0xb496,	// (0x00016d37) popup_snote2_single_graphic_window_t3

0xb4d7,	// (0x00016d78) popup_snote2_single_graphic_window_t4_ParamLimits

0xb4d7,	// (0x00016d78) popup_snote2_single_graphic_window_t4

0xb50d,	// (0x00016dae) popup_snote2_single_graphic_window_t5_ParamLimits

0xb50d,	// (0x00016dae) popup_snote2_single_graphic_window_t5

0x0004,

0xfc70,	// (0x0001b511) popup_snote2_single_graphic_window_t_ParamLimits

0xfc70,	// (0x0001b511) popup_snote2_single_graphic_window_t

0x9f39,	// (0x000157da) clock_nsta_pane_cp2_t1

0x9f39,	// (0x000157da) clock_nsta_pane_cp2_t2

0x0001,

0xfa8b,	// (0x0001b32c) clock_nsta_pane_cp2_t

0x664b,	// (0x00011eec) form_field_data_wide_pane_g1_ParamLimits

0x60e3,	// (0x00011984) form_field_data_wide_pane_g2_ParamLimits

0x60e3,	// (0x00011984) form_field_data_wide_pane_g2

0x6657,	// (0x00011ef8) form_field_data_wide_pane_g3_ParamLimits

0x6657,	// (0x00011ef8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001aef2) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001aef2) form_field_data_wide_pane_g

0x14a3,	// (0x0000cd44) grid_touch_3_pane_ParamLimits

0x14a3,	// (0x0000cd44) grid_touch_3_pane

0x1904,	// (0x0000d1a5) cell_touch_3_pane_ParamLimits

0x1904,	// (0x0000d1a5) cell_touch_3_pane

0xa3fe,	// (0x00015c9f) cell_touch_3_pane_g1

0xa3fe,	// (0x00015c9f) cell_touch_3_pane_g2

0x0001,

0xfb10,	// (0x0001b3b1) cell_touch_3_pane_g

0x5cb6,	// (0x00011557) cont_query_data_pane

0x5cbe,	// (0x0001155f) cont_query_data_pane_cp1

0xb64d,	// (0x00016eee) button_value_adjust_pane_cp7

0xb655,	// (0x00016ef6) query_popup_pane_cp3

0x6eec,	// (0x0001278d) bg_popup_sub_pane_cp22_ParamLimits

0x3a07,	// (0x0000f2a8) navi_navi_volume_pane_cp2

0x3a1f,	// (0x0000f2c0) popup_side_volume_key_window_g2

0x3a2b,	// (0x0000f2cc) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001af88) popup_side_volume_key_window_g

0x3a45,	// (0x0000f2e6) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001af8f) popup_side_volume_key_window_t

0x721f,	// (0x00012ac0) popup_side_volume_key_window_ParamLimits

0xf088,	// (0x0001a929) list_double_graphic_pane_g4_ParamLimits

0xf088,	// (0x0001a929) list_double_graphic_pane_g4

0x1305,	// (0x0000cba6) list_single_2heading_msg_pane_ParamLimits

0x1305,	// (0x0000cba6) list_single_2heading_msg_pane

0x194b,	// (0x0000d1ec) list_single_2heading_msg_pane_g1_ParamLimits

0x194b,	// (0x0000d1ec) list_single_2heading_msg_pane_g1

0x1957,	// (0x0000d1f8) list_single_2heading_msg_pane_g2_ParamLimits

0x1957,	// (0x0000d1f8) list_single_2heading_msg_pane_g2

0x196a,	// (0x0000d20b) list_single_2heading_msg_pane_g3_ParamLimits

0x196a,	// (0x0000d20b) list_single_2heading_msg_pane_g3

0x1976,	// (0x0000d217) list_single_2heading_msg_pane_g4_ParamLimits

0x1976,	// (0x0000d217) list_single_2heading_msg_pane_g4

0x0003,

0xfc7b,	// (0x0001b51c) list_single_2heading_msg_pane_g_ParamLimits

0xfc7b,	// (0x0001b51c) list_single_2heading_msg_pane_g

0xb6be,	// (0x00016f5f) list_single_2heading_msg_pane_t1_ParamLimits

0xb6be,	// (0x00016f5f) list_single_2heading_msg_pane_t1

0x198e,	// (0x0000d22f) list_single_2heading_msg_pane_t2_ParamLimits

0x198e,	// (0x0000d22f) list_single_2heading_msg_pane_t2

0x19f9,	// (0x0000d29a) list_single_2heading_msg_pane_t3_ParamLimits

0x19f9,	// (0x0000d29a) list_single_2heading_msg_pane_t3

0xb74e,	// (0x00016fef) list_single_2heading_msg_pane_t4_ParamLimits

0xb74e,	// (0x00016fef) list_single_2heading_msg_pane_t4

0x0003,

0xfc84,	// (0x0001b525) list_single_2heading_msg_pane_t_ParamLimits

0xfc84,	// (0x0001b525) list_single_2heading_msg_pane_t

0x5886,	// (0x00011127) title_pane_g4_ParamLimits

0x5886,	// (0x00011127) title_pane_g4

0x3857,	// (0x0000f0f8) title_pane_stacon_g3_ParamLimits

0x3857,	// (0x0000f0f8) title_pane_stacon_g3

0xb15c,	// (0x000169fd) list_single_2graphic_im_pane_g4_ParamLimits

0xb15c,	// (0x000169fd) list_single_2graphic_im_pane_g4

0x8d68,	// (0x00014609) popup_side_volume_key_window_cp

0x9539,	// (0x00014dda) main_idle_act2_pane_t1

0x42d7,	// (0x0000fb78) toolbar_button_pane_g10

0xef7a,	// (0x0001a81b) popup_toolbar_window_cp1

0x9f2a,	// (0x000157cb) clock_nsta_pane_cp_t1

0x9f2a,	// (0x000157cb) clock_nsta_pane_cp_t2

0x0001,

0xfa86,	// (0x0001b327) clock_nsta_pane_cp_t

0x3a07,	// (0x0000f2a8) navi_navi_volume_pane_cp2_ParamLimits

0x3a13,	// (0x0000f2b4) popup_side_volume_key_window_g1_ParamLimits

0x3a1f,	// (0x0000f2c0) popup_side_volume_key_window_g2_ParamLimits

0x3a2b,	// (0x0000f2cc) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001af88) popup_side_volume_key_window_g_ParamLimits

0x4761,	// (0x00010002) fep_hwr_aid_pane

0x4802,	// (0x000100a3) bg_fep_hwr_top_pane_g4_ParamLimits

0xa457,	// (0x00015cf8) fep_hwr_top_pane_g1_ParamLimits

0xa469,	// (0x00015d0a) fep_hwr_top_pane_g2_ParamLimits

0x4822,	// (0x000100c3) fep_hwr_top_pane_g3_ParamLimits

0xfadb,	// (0x0001b37c) fep_hwr_top_pane_g_ParamLimits

0x4837,	// (0x000100d8) fep_hwr_top_text_pane_ParamLimits

0x8b33,	// (0x000143d4) aid_touch_tab_arrow_arrow_2

0x8b3c,	// (0x000143dd) aid_touch_tab_arrow_left_2

0x4775,	// (0x00010016) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x47a8,	// (0x00010049) fep_hwr_prediction_pane

0xa5a8,	// (0x00015e49) fep_vkb_prediction_pane

0x1649,	// (0x0000ceea) fep_vkb_side_pane_g3_ParamLimits

0x1649,	// (0x0000ceea) fep_vkb_side_pane_g3

0x49a6,	// (0x00010247) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4a10,	// (0x000102b1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4a1d,	// (0x000102be) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8a,	// (0x0001b42b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x4b4c,	// (0x000103ed) fep_hwr_prediction_pane_g1

0x4b56,	// (0x000103f7) fep_hwr_prediction_pane_g2

0x4b5e,	// (0x000103ff) fep_hwr_prediction_pane_g3

0x4b66,	// (0x00010407) fep_hwr_prediction_pane_g4

0x0003,

0xfc8d,	// (0x0001b52e) fep_hwr_prediction_pane_g

0xb773,	// (0x00017014) fep_vkb_prediction_pane_g1

0xb77d,	// (0x0001701e) fep_vkb_prediction_pane_g2

0xb785,	// (0x00017026) fep_vkb_prediction_pane_g3

0xb78d,	// (0x0001702e) fep_vkb_prediction_pane_g4

0x0003,

0xfc96,	// (0x0001b537) fep_vkb_prediction_pane_g

0x4599,	// (0x0000fe3a) slider_set_pane_g3

0x45ad,	// (0x0000fe4e) slider_set_pane_g4

0x45c5,	// (0x0000fe66) slider_set_pane_g5

0x4599,	// (0x0000fe3a) slider_set_pane_g6

0xd954,	// (0x000191f5) slider_set_pane_g7

0x9182,	// (0x00014a23) slider_form_pane_g3

0x918b,	// (0x00014a2c) slider_form_pane_g4

0x9193,	// (0x00014a34) slider_form_pane_g5

0x9182,	// (0x00014a23) slider_form_pane_g6

0x12bd,	// (0x0000cb5e) slider_form_pane_g7

0x9821,	// (0x000150c2) slider_set_pane_vc_g3

0x982a,	// (0x000150cb) slider_set_pane_vc_g4

0x9833,	// (0x000150d4) slider_set_pane_vc_g5

0x9821,	// (0x000150c2) slider_set_pane_vc_g6

0x983c,	// (0x000150dd) slider_set_pane_vc_g7

0x9821,	// (0x000150c2) slider_form_pane_vc_g1

0x982a,	// (0x000150cb) slider_form_pane_vc_g2

0x9833,	// (0x000150d4) slider_form_pane_vc_g3

0x9821,	// (0x000150c2) slider_form_pane_vc_g4

0x9c0e,	// (0x000154af) slider_form_pane_vc_g5

0x0004,

0xfa58,	// (0x0001b2f9) slider_form_pane_vc_g

0x3594,	// (0x0000ee35) main_idle_act3_pane

0xb795,	// (0x00017036) ai3_links_pane

0x1a67,	// (0x0000d308) popup_ai3_data_window_ParamLimits

0x1a67,	// (0x0000d308) popup_ai3_data_window

0x5761,	// (0x00011002) grid_ai3_links_pane

0x1a7f,	// (0x0000d320) cell_ai3_links_pane_ParamLimits

0x1a7f,	// (0x0000d320) cell_ai3_links_pane

0xb7ca,	// (0x0001706b) bg_popup_sub_pane_cp11

0xb7d7,	// (0x00017078) cell_ai3_links_pane_g1

0x5761,	// (0x00011002) bg_popup_sub_pane_cp12

0xb7fc,	// (0x0001709d) heading_ai3_data_pane

0xb804,	// (0x000170a5) list_ai3_gene_pane

0xb810,	// (0x000170b1) popup_ai3_data_window_g1

0xb818,	// (0x000170b9) heading_ai3_data_pane_g1

0xb820,	// (0x000170c1) heading_ai3_data_pane_t1

0xb82e,	// (0x000170cf) list_double_ai3_gene_pane_ParamLimits

0xb82e,	// (0x000170cf) list_double_ai3_gene_pane

0xb83b,	// (0x000170dc) list_single_ai3_gene_pane_ParamLimits

0xb83b,	// (0x000170dc) list_single_ai3_gene_pane

0xa3c3,	// (0x00015c64) list_highlight_pane_cp7_ParamLimits

0xa3c3,	// (0x00015c64) list_highlight_pane_cp7

0xb848,	// (0x000170e9) list_single_a13_gene_pane_t1_ParamLimits

0xb848,	// (0x000170e9) list_single_a13_gene_pane_t1

0xb85f,	// (0x00017100) list_single_ai3_gene_pane_g1

0xb868,	// (0x00017109) list_single_ai3_gene_pane_g2

0x0001,

0xfc9f,	// (0x0001b540) list_single_ai3_gene_pane_g

0xb870,	// (0x00017111) list_double_ai3_gene_pane_g1_ParamLimits

0xb870,	// (0x00017111) list_double_ai3_gene_pane_g1

0xb87c,	// (0x0001711d) list_double_ai3_gene_pane_t1_ParamLimits

0xb87c,	// (0x0001711d) list_double_ai3_gene_pane_t1

0xb898,	// (0x00017139) list_double_ai3_gene_pane_t2_ParamLimits

0xb898,	// (0x00017139) list_double_ai3_gene_pane_t2

0xb8ad,	// (0x0001714e) list_double_ai3_gene_pane_t3_ParamLimits

0xb8ad,	// (0x0001714e) list_double_ai3_gene_pane_t3

0x0002,

0xfca4,	// (0x0001b545) list_double_ai3_gene_pane_t_ParamLimits

0xfca4,	// (0x0001b545) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb666,	// (0x00016f07) aid_size_min_col_2

0x1937,	// (0x0000d1d8) aid_size_min_msg_ParamLimits

0x1937,	// (0x0000d1d8) aid_size_min_msg

0x165d,	// (0x0000cefe) fep_vkb_top_text_pane_g2_ParamLimits

0x165d,	// (0x0000cefe) fep_vkb_top_text_pane_g2

0x0001,

0xfb0b,	// (0x0001b3ac) fep_vkb_top_text_pane_g_ParamLimits

0xfb0b,	// (0x0001b3ac) fep_vkb_top_text_pane_g

0x3594,	// (0x0000ee35) main_hc_apps_shell_pane

0xb8ca,	// (0x0001716b) grid_hc_apps_pane_ParamLimits

0xb8ca,	// (0x0001716b) grid_hc_apps_pane

0xb8dc,	// (0x0001717d) list_hc_apps_pane

0xb8e4,	// (0x00017185) scroll_pane_cp37_ParamLimits

0xb8e4,	// (0x00017185) scroll_pane_cp37

0x1a95,	// (0x0000d336) cell_hc_apps_pane_ParamLimits

0x1a95,	// (0x0000d336) cell_hc_apps_pane

0x1b2f,	// (0x0000d3d0) cell_hc_apps_pane_g1_ParamLimits

0x1b2f,	// (0x0000d3d0) cell_hc_apps_pane_g1

0xb9aa,	// (0x0001724b) cell_hc_apps_pane_g2_ParamLimits

0xb9aa,	// (0x0001724b) cell_hc_apps_pane_g2

0xb9c6,	// (0x00017267) cell_hc_apps_pane_g3_ParamLimits

0xb9c6,	// (0x00017267) cell_hc_apps_pane_g3

0x0002,

0xfcab,	// (0x0001b54c) cell_hc_apps_pane_g_ParamLimits

0xfcab,	// (0x0001b54c) cell_hc_apps_pane_g

0x1b5b,	// (0x0000d3fc) cell_hc_apps_pane_t1_ParamLimits

0x1b5b,	// (0x0000d3fc) cell_hc_apps_pane_t1

0x5bda,	// (0x0001147b) grid_highlight_pane_cp10_ParamLimits

0x5bda,	// (0x0001147b) grid_highlight_pane_cp10

0x1b99,	// (0x0000d43a) list_single_hc_apps_pane_ParamLimits

0x1b99,	// (0x0000d43a) list_single_hc_apps_pane

0x1bc5,	// (0x0000d466) list_single_hc_apps_pane_g1

0x1bde,	// (0x0000d47f) list_single_hc_apps_pane_g2

0x0001,

0xfcb2,	// (0x0001b553) list_single_hc_apps_pane_g

0x1bf7,	// (0x0000d498) list_single_hc_apps_pane_g2_copy1

0x1c13,	// (0x0000d4b4) list_single_hc_apps_pane_t1

0x5932,	// (0x000111d3) bg_set_opt_pane_cp_ParamLimits

0x37a5,	// (0x0000f046) setting_slider_pane_t1_ParamLimits

0xd060,	// (0x00018901) setting_slider_pane_t2_ParamLimits

0xd079,	// (0x0001891a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001adda) setting_slider_pane_t_ParamLimits

0x37eb,	// (0x0000f08c) slider_set_pane_ParamLimits

0x3c87,	// (0x0000f528) control_pane_g5_ParamLimits

0x3c87,	// (0x0000f528) control_pane_g5

0x8ffa,	// (0x0001489b) slider_set_pane_g1_ParamLimits

0x458d,	// (0x0000fe2e) slider_set_pane_g2_ParamLimits

0x4599,	// (0x0000fe3a) slider_set_pane_g3_ParamLimits

0x45ad,	// (0x0000fe4e) slider_set_pane_g4_ParamLimits

0x45c5,	// (0x0000fe66) slider_set_pane_g5_ParamLimits

0x4599,	// (0x0000fe3a) slider_set_pane_g6_ParamLimits

0xd954,	// (0x000191f5) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x0001b1cf) slider_set_pane_g_ParamLimits

0x5932,	// (0x000111d3) navi_icon_text_pane_ParamLimits

0x0a23,	// (0x0000c2c4) aid_fill_nsta_2_ParamLimits

0x0a51,	// (0x0000c2f2) aid_touch_tab_arrow_left_ParamLimits

0x0a65,	// (0x0000c306) aid_touch_tab_arrow_right_ParamLimits

0x0b01,	// (0x0000c3a2) clock_nsta_pane_ParamLimits

0x8b15,	// (0x000143b6) navi_icon_pane_g1_ParamLimits

0x8b21,	// (0x000143c2) navi_text_pane_t1_ParamLimits

0xa021,	// (0x000158c2) navi_icon_text_pane_g1_ParamLimits

0xa02d,	// (0x000158ce) navi_icon_text_pane_t1_ParamLimits

0x1bc5,	// (0x0000d466) list_single_hc_apps_pane_g1_ParamLimits

0x1bde,	// (0x0000d47f) list_single_hc_apps_pane_g2_ParamLimits

0xfcb2,	// (0x0001b553) list_single_hc_apps_pane_g_ParamLimits

0x1bf7,	// (0x0000d498) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1c13,	// (0x0000d4b4) list_single_hc_apps_pane_t1_ParamLimits

0xcfa6,	// (0x00018847) popup_toolbar2_fixed_window_ParamLimits

0xcfa6,	// (0x00018847) popup_toolbar2_fixed_window

0xd743,	// (0x00018fe4) popup_toolbar2_float_window

0x5761,	// (0x00011002) bg_popup_sub_pane_cp27

0xbad2,	// (0x00017373) grid_toolbar2_float_pane

0x5761,	// (0x00011002) bg_popup_sub_pane_cp26

0xbad2,	// (0x00017373) grid_toolbar2_fixed_pane

0x1c41,	// (0x0000d4e2) cell_toolbar2_fixed_pane_ParamLimits

0x1c41,	// (0x0000d4e2) cell_toolbar2_fixed_pane

0x1c5c,	// (0x0000d4fd) cell_toolbar2_fixed_pane_g1

0xbaf4,	// (0x00017395) toolbar2_fixed_button_pane

0x7c7a,	// (0x0001351b) toolbar2_fixed_button_pane_g1

0x7c8a,	// (0x0001352b) toolbar2_fixed_button_pane_g2

0x7c82,	// (0x00013523) toolbar2_fixed_button_pane_g3

0x7c9a,	// (0x0001353b) toolbar2_fixed_button_pane_g4

0x7c92,	// (0x00013533) toolbar2_fixed_button_pane_g5

0x7ca2,	// (0x00013543) toolbar2_fixed_button_pane_g6

0x7caa,	// (0x0001354b) toolbar2_fixed_button_pane_g7

0x7cba,	// (0x0001355b) toolbar2_fixed_button_pane_g8

0x7cb2,	// (0x00013553) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x0001b0d1) toolbar2_fixed_button_pane_g

0xbafc,	// (0x0001739d) cell_toolbar2_float_pane_ParamLimits

0xbafc,	// (0x0001739d) cell_toolbar2_float_pane

0xbb0d,	// (0x000173ae) cell_toolbar2_float_pane_g1

0xbaf4,	// (0x00017395) toolbar2_fixed_button_pane_cp

0x1612,	// (0x0000ceb3) fep_vkb_accented_list_pane_ParamLimits

0x1612,	// (0x0000ceb3) fep_vkb_accented_list_pane

0x4986,	// (0x00010227) bg_popup_fep_shadow_pane_g9

0x742e,	// (0x00012ccf) bg_popup_fep_shadow_pane_cp3

0x68ef,	// (0x00012190) list_accented_list_pane

0xbb16,	// (0x000173b7) list_single_accented_list_pane_ParamLimits

0xbb16,	// (0x000173b7) list_single_accented_list_pane

0x742e,	// (0x00012ccf) list_highlight_pane_cp10

0xbb27,	// (0x000173c8) list_single_accented_list_pane_t1

0xd685,	// (0x00018f26) popup_slider_window_ParamLimits

0xd685,	// (0x00018f26) popup_slider_window

0xb65d,	// (0x00016efe) aid_indentation_list_msg

0x1d3b,	// (0x0000d5dc) bg_popup_window_pane_cp19

0xbc2b,	// (0x000174cc) popup_slider_window_g1

0xbc47,	// (0x000174e8) popup_slider_window_g2

0xbc63,	// (0x00017504) popup_slider_window_g3

0x0005,

0xfcb7,	// (0x0001b558) popup_slider_window_g

0xbcbf,	// (0x00017560) popup_slider_window_t1

0xbd31,	// (0x000175d2) small_volume_slider_vertical_pane

0xa3fe,	// (0x00015c9f) small_volume_slider_vertical_pane_g1

0xa3fe,	// (0x00015c9f) small_volume_slider_vertical_pane_g2

0xbd4d,	// (0x000175ee) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc9,	// (0x0001b56a) small_volume_slider_vertical_pane_g

0xcf2a,	// (0x000187cb) area_side_right_pane_ParamLimits

0xcf2a,	// (0x000187cb) area_side_right_pane

0xda22,	// (0x000192c3) aid_size_side_button_ParamLimits

0xda22,	// (0x000192c3) aid_size_side_button

0xda3b,	// (0x000192dc) grid_sctrl_middle_pane_ParamLimits

0xda3b,	// (0x000192dc) grid_sctrl_middle_pane

0x4b9e,	// (0x0001043f) sctrl_sk_bottom_pane

0x4baf,	// (0x00010450) sctrl_sk_top_pane

0x4bc1,	// (0x00010462) aid_touch_sctrl_top

0x4bce,	// (0x0001046f) bg_sctrl_sk_pane_ParamLimits

0x4bce,	// (0x0001046f) bg_sctrl_sk_pane

0x4bdc,	// (0x0001047d) sctrl_sk_top_pane_g1

0x4be9,	// (0x0001048a) sctrl_sk_top_pane_t1

0x4bc1,	// (0x00010462) aid_touch_sctrl_bottom

0x4bce,	// (0x0001046f) bg_sctrl_sk_pane_cp_ParamLimits

0x4bce,	// (0x0001046f) bg_sctrl_sk_pane_cp

0x4c04,	// (0x000104a5) sctrl_sk_bottom_pane_g1

0x4be9,	// (0x0001048a) sctrl_sk_bottom_pane_t1

0xda51,	// (0x000192f2) cell_sctrl_middle_pane_ParamLimits

0xda51,	// (0x000192f2) cell_sctrl_middle_pane

0xda62,	// (0x00019303) aid_touch_sctrl_middle_ParamLimits

0xda62,	// (0x00019303) aid_touch_sctrl_middle

0xda6f,	// (0x00019310) bg_sctrl_middle_pane_ParamLimits

0xda6f,	// (0x00019310) bg_sctrl_middle_pane

0x520b,	// (0x00010aac) cell_sctrl_middle_pane_g1_ParamLimits

0x520b,	// (0x00010aac) cell_sctrl_middle_pane_g1

0xda7d,	// (0x0001931e) cell_sctrl_middle_pane_g2_ParamLimits

0xda7d,	// (0x0001931e) cell_sctrl_middle_pane_g2

0x0001,

0xfcd5,	// (0x0001b576) cell_sctrl_middle_pane_g_ParamLimits

0xfcd5,	// (0x0001b576) cell_sctrl_middle_pane_g

0x7c7a,	// (0x0001351b) bg_sctrl_middle_pane_g1

0x7c82,	// (0x00013523) bg_sctrl_middle_pane_g2

0x7c8a,	// (0x0001352b) bg_sctrl_middle_pane_g3

0x7c92,	// (0x00013533) bg_sctrl_middle_pane_g4

0x7c9a,	// (0x0001353b) bg_sctrl_middle_pane_g5

0x7ca2,	// (0x00013543) bg_sctrl_middle_pane_g6

0x7caa,	// (0x0001354b) bg_sctrl_middle_pane_g7

0x7cb2,	// (0x00013553) bg_sctrl_middle_pane_g8

0x0007,

0xfcda,	// (0x0001b57b) bg_sctrl_middle_pane_g

0x7cba,	// (0x0001355b) bg_sctrl_middle_pane_g8_copy1

0x7c7a,	// (0x0001351b) bg_sctrl_sk_pane_g1

0x7c8a,	// (0x0001352b) bg_sctrl_sk_pane_g2

0x7c82,	// (0x00013523) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x0001b0d1) bg_sctrl_sk_pane_g

0x605f,	// (0x00011900) aid_size_touch_scroll_bar

0x7c9a,	// (0x0001353b) bg_sctrl_sk_pane_g4

0x7c92,	// (0x00013533) bg_sctrl_sk_pane_g5

0x7ca2,	// (0x00013543) bg_sctrl_sk_pane_g6

0x7caa,	// (0x0001354b) bg_sctrl_sk_pane_g7

0x7cba,	// (0x0001355b) bg_sctrl_sk_pane_g8

0x7cb2,	// (0x00013553) bg_sctrl_sk_pane_g9

0x3e33,	// (0x0000f6d4) popup_fep_china_hwr2_fs_candidate_window

0xd280,	// (0x00018b21) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd280,	// (0x00018b21) popup_fep_china_hwr2_fs_control_window

0x49a6,	// (0x00010247) sctrl_sk_top_pane_g2

0x0001,

0xfcd0,	// (0x0001b571) sctrl_sk_top_pane_g

0x1e5b,	// (0x0000d6fc) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1e5b,	// (0x0000d6fc) aid_fep_china_hwr2_fs_cell

0x1e6f,	// (0x0000d710) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x1e6f,	// (0x0000d710) bg_popup_fep_shadow_pane_cp4

0x1e86,	// (0x0000d727) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1e86,	// (0x0000d727) bg_popup_fep_shadow_pane_cp5

0x1e98,	// (0x0000d739) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x1e98,	// (0x0000d739) popup_fep_china_hwr2_fs_control_bar_grid

0x1eac,	// (0x0000d74d) popup_fep_china_hwr2_fs_control_funtion_grid

0xbda8,	// (0x00017649) aid_fep_china_hwr2_fs_candi_cell

0x5761,	// (0x00011002) bg_popup_fep_shadow_pane_cp6

0xbdb2,	// (0x00017653) popup_fep_china_hwr2_fs_candidate_grid

0x1eb4,	// (0x0000d755) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x1eb4,	// (0x0000d755) cell_fep_china_hwr2_fs_funtion_grid

0xa3fe,	// (0x00015c9f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xbdd2,	// (0x00017673) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xbdd2,	// (0x00017673) cell_fep_china_hwr2_fs_funtion_grid_g1

0xbde0,	// (0x00017681) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xbde0,	// (0x00017681) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfceb,	// (0x0001b58c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfceb,	// (0x0001b58c) cell_fep_china_hwr2_fs_funtion_grid_g

0x1ecc,	// (0x0000d76d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1ecc,	// (0x0000d76d) cell_fep_china_hwr2_fs_funtion_grid_t1

0x1ee1,	// (0x0000d782) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x1ee1,	// (0x0000d782) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf0,	// (0x0001b591) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf0,	// (0x0001b591) cell_fep_china_hwr2_fs_funtion_grid_t

0xbe27,	// (0x000176c8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xbe2f,	// (0x000176d0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xbe37,	// (0x000176d8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf5,	// (0x0001b596) popup_fep_china_hwr2_fs_control_bar_grid_g

0xbe3f,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xbe3f,	// (0x000176e0) cell_fep_china_hwr2_fs_candidate_grid

0xbe58,	// (0x000176f9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xbe60,	// (0x00017701) popup_fep_china_hwr2_fs_candidate_grid_g21

0xa3fe,	// (0x00015c9f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xa3fe,	// (0x00015c9f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb10,	// (0x0001b3b1) cell_fep_china_hwr2_fs_candidate_grid_g

0xbe68,	// (0x00017709) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7872,	// (0x00013113) clock_nsta_pane_cp_24_ParamLimits

0x7872,	// (0x00013113) clock_nsta_pane_cp_24

0x78e5,	// (0x00013186) indicator_nsta_pane_cp_24_ParamLimits

0x78e5,	// (0x00013186) indicator_nsta_pane_cp_24

0x8992,	// (0x00014233) heading_pane_g1

0x0001,

0xf895,	// (0x0001b136) heading_pane_g

0x13cb,	// (0x0000cc6c) grid_sct_catagory_button_pane

0x940b,	// (0x00014cac) scroll_pane_cp5_ParamLimits

0xa06f,	// (0x00015910) button_value_adjust_pane_cp5_ParamLimits

0xa06f,	// (0x00015910) button_value_adjust_pane_cp5

0xa165,	// (0x00015a06) form2_midp_time_pane_ParamLimits

0xbe76,	// (0x00017717) cell_sct_catagory_button_pane_ParamLimits

0xbe76,	// (0x00017717) cell_sct_catagory_button_pane

0xa3c3,	// (0x00015c64) bg_button_pane_cp01_ParamLimits

0xa3c3,	// (0x00015c64) bg_button_pane_cp01

0xa3fe,	// (0x00015c9f) cell_sct_catagory_button_pane_g1

0xd6f4,	// (0x00018f95) popup_tb_extension_window

0x1efd,	// (0x0000d79e) aid_size_cell_ext_ParamLimits

0x1efd,	// (0x0000d79e) aid_size_cell_ext

0x5f3d,	// (0x000117de) bg_tb_trans_pane_cp1_ParamLimits

0x5f3d,	// (0x000117de) bg_tb_trans_pane_cp1

0x1f23,	// (0x0000d7c4) grid_tb_ext_pane_ParamLimits

0x1f23,	// (0x0000d7c4) grid_tb_ext_pane

0x1f59,	// (0x0000d7fa) cell_tb_ext_pane_ParamLimits

0x1f59,	// (0x0000d7fa) cell_tb_ext_pane

0x1f7d,	// (0x0000d81e) cell_tb_ext_pane_g1_ParamLimits

0x1f7d,	// (0x0000d81e) cell_tb_ext_pane_g1

0xbf00,	// (0x000177a1) cell_tb_ext_pane_t1

0x5bda,	// (0x0001147b) list_highlight_pane_cp11_ParamLimits

0x5bda,	// (0x0001147b) list_highlight_pane_cp11

0xcfbb,	// (0x0001885c) popup_uni_indicator_window_ParamLimits

0xcfbb,	// (0x0001885c) popup_uni_indicator_window

0x6631,	// (0x00011ed2) bg_popup_sub_pane_cp14

0xbf1b,	// (0x000177bc) list_uniindi_pane

0xbf27,	// (0x000177c8) uniindi_top_pane

0x5bda,	// (0x0001147b) bg_uniindi_top_pane

0xbf46,	// (0x000177e7) uniindi_top_pane_g1

0xbf5c,	// (0x000177fd) uniindi_top_pane_g2

0x0003,

0xfcfc,	// (0x0001b59d) uniindi_top_pane_g

0xbf86,	// (0x00017827) uniindi_top_pane_t1

0xbfb0,	// (0x00017851) list_single_uniindi_pane_ParamLimits

0xbfb0,	// (0x00017851) list_single_uniindi_pane

0xa3fe,	// (0x00015c9f) bg_uniindi_top_pane_g1

0xbfc2,	// (0x00017863) list_single_uniindi_pane_g1

0xbfd5,	// (0x00017876) list_single_uniindi_pane_t1

0x3594,	// (0x0000ee35) control_bg_pane

0xbffa,	// (0x0001789b) bg_sctrl_sk_pane_cp1

0xc003,	// (0x000178a4) bg_sctrl_sk_pane_cp2

0xc00c,	// (0x000178ad) control_bg_pane_g1

0xc015,	// (0x000178b6) control_bg_pane_g2

0x0001,

0xfd05,	// (0x0001b5a6) control_bg_pane_g

0x9ec2,	// (0x00015763) cell_indicator_nsta_pane_g1_ParamLimits

0x14dc,	// (0x0000cd7d) cell_indicator_nsta_pane_g2_ParamLimits

0xfa74,	// (0x0001b315) cell_indicator_nsta_pane_g_ParamLimits

0xa1cd,	// (0x00015a6e) form2_midp_time_pane_t1_ParamLimits

0x4753,	// (0x0000fff4) main_idle_act4_pane_ParamLimits

0x4753,	// (0x0000fff4) main_idle_act4_pane

0xd6f4,	// (0x00018f95) popup_tb_extension_window_ParamLimits

0x1f43,	// (0x0000d7e4) tb_ext_find_pane_ParamLimits

0x1f43,	// (0x0000d7e4) tb_ext_find_pane

0xc01e,	// (0x000178bf) ai_gene_pane_1_cp1

0x7569,	// (0x00012e0a) ai_gene_pane_2_cp1

0xc026,	// (0x000178c7) list_single_idle_plugin_calendar_pane

0xc02f,	// (0x000178d0) list_single_idle_plugin_notification_pane

0xc038,	// (0x000178d9) list_single_idle_plugin_player_pane

0x1f9a,	// (0x0000d83b) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1f9a,	// (0x0000d83b) list_single_idle_plugin_shortcut_pane

0x1fc2,	// (0x0000d863) main_idle_act4_pane_t1

0x1fd8,	// (0x0000d879) main_idle_act4_pane_t2

0x0001,

0xfd0a,	// (0x0001b5ab) main_idle_act4_pane_t

0x1fee,	// (0x0000d88f) middle_sk_idle_act4_pane_ParamLimits

0x1fee,	// (0x0000d88f) middle_sk_idle_act4_pane

0x200a,	// (0x0000d8ab) popup_clock_digital_analogue_window_cp2

0x2030,	// (0x0000d8d1) shortcut_wheel_idle_act4_pane_ParamLimits

0x2030,	// (0x0000d8d1) shortcut_wheel_idle_act4_pane

0xa3fe,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g1

0xa3fe,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g2

0xa3fe,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g3

0xa3fe,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g4

0xa3fe,	// (0x00015c9f) shortcut_wheel_idle_act4_pane_g5

0xc0cb,	// (0x0001796c) shortcut_wheel_idle_act4_pane_g6

0xc0d3,	// (0x00017974) shortcut_wheel_idle_act4_pane_g7

0xc0db,	// (0x0001797c) shortcut_wheel_idle_act4_pane_g8

0xc0e3,	// (0x00017984) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0f,	// (0x0001b5b0) shortcut_wheel_idle_act4_pane_g

0xdfb7,	// (0x00019858) middle_sk_idle_act4_pane_g1_ParamLimits

0xdfb7,	// (0x00019858) middle_sk_idle_act4_pane_g1

0x20ab,	// (0x0000d94c) middle_sk_idle_act4_pane_g2_ParamLimits

0x20ab,	// (0x0000d94c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd32,	// (0x0001b5d3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd32,	// (0x0001b5d3) middle_sk_idle_act4_pane_g

0x20c3,	// (0x0000d964) middle_sk_idle_act4_pane_t1_ParamLimits

0x20c3,	// (0x0000d964) middle_sk_idle_act4_pane_t1

0x20f2,	// (0x0000d993) grid_ai_shortcut_pane_ParamLimits

0x20f2,	// (0x0000d993) grid_ai_shortcut_pane

0x210f,	// (0x0000d9b0) list_highlight_pane_cp16_ParamLimits

0x210f,	// (0x0000d9b0) list_highlight_pane_cp16

0x211c,	// (0x0000d9bd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x211c,	// (0x0000d9bd) list_single_idle_plugin_shortcut_pane_g1

0x2128,	// (0x0000d9c9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2128,	// (0x0000d9c9) list_single_idle_plugin_shortcut_pane_g2

0x2144,	// (0x0000d9e5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2144,	// (0x0000d9e5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd37,	// (0x0001b5d8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd37,	// (0x0001b5d8) list_single_idle_plugin_shortcut_pane_g

0x2159,	// (0x0000d9fa) cell_ai_shortcut_pane_ParamLimits

0x2159,	// (0x0000d9fa) cell_ai_shortcut_pane

0x216f,	// (0x0000da10) cell_ai_shortcut_pane_g1_ParamLimits

0x216f,	// (0x0000da10) cell_ai_shortcut_pane_g1

0xc01e,	// (0x000178bf) ai_gene_pane_1_cp2

0xc210,	// (0x00017ab1) ai_gene_pane_2_cp2

0xc218,	// (0x00017ab9) list_highlight_pane_cp15

0xc221,	// (0x00017ac2) list_single_idle_plugin_calendar_pane_g1

0xc218,	// (0x00017ab9) list_highlight_pane_cp17

0xc229,	// (0x00017aca) list_single_idle_plugin_calendar_pane_g1_copy1

0xc231,	// (0x00017ad2) list_single_idle_plugin_player_pane_g1

0x95d9,	// (0x00014e7a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3e,	// (0x0001b5df) list_single_idle_plugin_player_pane_g

0xc239,	// (0x00017ada) list_single_idle_plugin_player_pane_t1

0xc247,	// (0x00017ae8) list_single_idle_plugin_player_pane_t2

0xc255,	// (0x00017af6) list_single_idle_plugin_player_pane_t3

0xc263,	// (0x00017b04) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd43,	// (0x0001b5e4) list_single_idle_plugin_player_pane_t

0xc271,	// (0x00017b12) wait_bar_pane_cp15

0xc279,	// (0x00017b1a) grid_ai_notification_pane

0x95d9,	// (0x00014e7a) list_single_idle_plugin_notification_pane_g1

0x2191,	// (0x0000da32) cell_ai_notification_pane_ParamLimits

0x2191,	// (0x0000da32) cell_ai_notification_pane

0xc28f,	// (0x00017b30) cell_ai_notification_pane_g1

0xc297,	// (0x00017b38) cell_ai_notification_pane_t1

0x219e,	// (0x0000da3f) tb_ext_find_button_pane

0x21a6,	// (0x0000da47) tb_ext_find_pane_g1

0x21ae,	// (0x0000da4f) tb_ext_find_pane_t1

0x6dff,	// (0x000126a0) tb_ext_find_button_pane_g1

0xc2c3,	// (0x00017b64) tb_ext_find_button_pane_g2

0x0001,

0xfd4c,	// (0x0001b5ed) tb_ext_find_button_pane_g

0x1fc2,	// (0x0000d863) main_idle_act4_pane_t1_ParamLimits

0x1fd8,	// (0x0000d879) main_idle_act4_pane_t2_ParamLimits

0xfd0a,	// (0x0001b5ab) main_idle_act4_pane_t_ParamLimits

0x200a,	// (0x0000d8ab) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2020,	// (0x0000d8c1) sat_plugin_idle_act4_pane_ParamLimits

0x2020,	// (0x0000d8c1) sat_plugin_idle_act4_pane

0x21bc,	// (0x0000da5d) sat_plugin_idle_act4_pane_t1_ParamLimits

0x21bc,	// (0x0000da5d) sat_plugin_idle_act4_pane_t1

0x21d4,	// (0x0000da75) sat_plugin_idle_act4_pane_t2_ParamLimits

0x21d4,	// (0x0000da75) sat_plugin_idle_act4_pane_t2

0x21ec,	// (0x0000da8d) sat_plugin_idle_act4_pane_t3_ParamLimits

0x21ec,	// (0x0000da8d) sat_plugin_idle_act4_pane_t3

0x2204,	// (0x0000daa5) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2204,	// (0x0000daa5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd51,	// (0x0001b5f2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd51,	// (0x0001b5f2) sat_plugin_idle_act4_pane_t

0x3657,	// (0x0000eef8) popup_battery_window_ParamLimits

0x3657,	// (0x0000eef8) popup_battery_window

0x5bda,	// (0x0001147b) bg_popup_sub_pane_cp25_ParamLimits

0x5bda,	// (0x0001147b) bg_popup_sub_pane_cp25

0xc318,	// (0x00017bb9) popup_battery_window_g1_ParamLimits

0xc318,	// (0x00017bb9) popup_battery_window_g1

0xc324,	// (0x00017bc5) popup_battery_window_t1_ParamLimits

0xc324,	// (0x00017bc5) popup_battery_window_t1

0xc336,	// (0x00017bd7) popup_battery_window_t2_ParamLimits

0xc336,	// (0x00017bd7) popup_battery_window_t2

0x0001,

0xfd5a,	// (0x0001b5fb) popup_battery_window_t_ParamLimits

0xfd5a,	// (0x0001b5fb) popup_battery_window_t

0x0219,	// (0x0000baba) midp_canvas_pane_ParamLimits

0x026e,	// (0x0000bb0f) midp_keypad_pane_ParamLimits

0x026e,	// (0x0000bb0f) midp_keypad_pane

0x777d,	// (0x0001301e) main_midp_pane_ParamLimits

0x9f48,	// (0x000157e9) signal_pane_g2_cp_ParamLimits

0x221c,	// (0x0000dabd) aid_size_cell_midp_keypad_ParamLimits

0x221c,	// (0x0000dabd) aid_size_cell_midp_keypad

0x223a,	// (0x0000dadb) midp_keyp_game_grid_pane_ParamLimits

0x223a,	// (0x0000dadb) midp_keyp_game_grid_pane

0x2259,	// (0x0000dafa) midp_keyp_rocker_pane_ParamLimits

0x2259,	// (0x0000dafa) midp_keyp_rocker_pane

0x229a,	// (0x0000db3b) midp_keyp_sk_left_pane_ParamLimits

0x229a,	// (0x0000db3b) midp_keyp_sk_left_pane

0x22ec,	// (0x0000db8d) midp_keyp_sk_right_pane_ParamLimits

0x22ec,	// (0x0000db8d) midp_keyp_sk_right_pane

0x5761,	// (0x00011002) bg_button_pane_cp03

0x2338,	// (0x0000dbd9) midp_keyp_sk_left_pane_g1

0x5761,	// (0x00011002) bg_button_pane_cp04

0x2338,	// (0x0000dbd9) midp_keyp_sk_right_pane_g1

0xa3fe,	// (0x00015c9f) midp_keyp_rocker_pane_g1

0x2341,	// (0x0000dbe2) keyp_game_cell_pane_ParamLimits

0x2341,	// (0x0000dbe2) keyp_game_cell_pane

0x5761,	// (0x00011002) bg_button_pane_cp02

0x2363,	// (0x0000dc04) keyp_game_cell_pane_g1

0xcf6c,	// (0x0001880d) popup_fep_vkb2_window_ParamLimits

0xcf6c,	// (0x0001880d) popup_fep_vkb2_window

0xda8a,	// (0x0001932b) aid_size_cell_vkb2_ParamLimits

0xda8a,	// (0x0001932b) aid_size_cell_vkb2

0xdab6,	// (0x00019357) popup_fep_vkb2_window_g1_ParamLimits

0xdab6,	// (0x00019357) popup_fep_vkb2_window_g1

0xdb06,	// (0x000193a7) vkb2_area_bottom_pane_ParamLimits

0xdb06,	// (0x000193a7) vkb2_area_bottom_pane

0xdb44,	// (0x000193e5) vkb2_area_keypad_pane_ParamLimits

0xdb44,	// (0x000193e5) vkb2_area_keypad_pane

0xdb82,	// (0x00019423) vkb2_area_top_pane_ParamLimits

0xdb82,	// (0x00019423) vkb2_area_top_pane

0xdc04,	// (0x000194a5) vkb2_top_entry_pane_ParamLimits

0xdc04,	// (0x000194a5) vkb2_top_entry_pane

0xdc31,	// (0x000194d2) vkb2_top_grid_left_pane_ParamLimits

0xdc31,	// (0x000194d2) vkb2_top_grid_left_pane

0xdc52,	// (0x000194f3) vkb2_top_grid_right_pane_ParamLimits

0xdc52,	// (0x000194f3) vkb2_top_grid_right_pane

0x4e4c,	// (0x000106ed) vkb2_cell_keypad_pane_ParamLimits

0x4e4c,	// (0x000106ed) vkb2_cell_keypad_pane

0xdc9a,	// (0x0001953b) vkb2_area_bottom_grid_pane_ParamLimits

0xdc9a,	// (0x0001953b) vkb2_area_bottom_grid_pane

0xdcc0,	// (0x00019561) vkb2_area_bottom_pane_g1_ParamLimits

0xdcc0,	// (0x00019561) vkb2_area_bottom_pane_g1

0xdce6,	// (0x00019587) vkb2_area_bottom_pane_g2_ParamLimits

0xdce6,	// (0x00019587) vkb2_area_bottom_pane_g2

0xdd17,	// (0x000195b8) vkb2_area_bottom_pane_g3_ParamLimits

0xdd17,	// (0x000195b8) vkb2_area_bottom_pane_g3

0x0002,

0xfd5f,	// (0x0001b600) vkb2_area_bottom_pane_g_ParamLimits

0xfd5f,	// (0x0001b600) vkb2_area_bottom_pane_g

0x4fc4,	// (0x00010865) vkb2_top_cell_left_pane_ParamLimits

0x4fc4,	// (0x00010865) vkb2_top_cell_left_pane

0x264f,	// (0x0000def0) vkb2_top_entry_pane_g1_ParamLimits

0x264f,	// (0x0000def0) vkb2_top_entry_pane_g1

0x265d,	// (0x0000defe) vkb2_top_entry_pane_t1_ParamLimits

0x265d,	// (0x0000defe) vkb2_top_entry_pane_t1

0xc4c9,	// (0x00017d6a) vkb2_top_entry_pane_t2_ParamLimits

0xc4c9,	// (0x00017d6a) vkb2_top_entry_pane_t2

0xc4fb,	// (0x00017d9c) vkb2_top_entry_pane_t3_ParamLimits

0xc4fb,	// (0x00017d9c) vkb2_top_entry_pane_t3

0x0002,

0xfd66,	// (0x0001b607) vkb2_top_entry_pane_t_ParamLimits

0xfd66,	// (0x0001b607) vkb2_top_entry_pane_t

0xdd6d,	// (0x0001960e) vkb2_top_grid_right_pane_g1_ParamLimits

0xdd6d,	// (0x0001960e) vkb2_top_grid_right_pane_g1

0x5027,	// (0x000108c8) vkb2_top_grid_right_pane_g2_ParamLimits

0x5027,	// (0x000108c8) vkb2_top_grid_right_pane_g2

0x503f,	// (0x000108e0) vkb2_top_grid_right_pane_g3_ParamLimits

0x503f,	// (0x000108e0) vkb2_top_grid_right_pane_g3

0xdd83,	// (0x00019624) vkb2_top_grid_right_pane_g4_ParamLimits

0xdd83,	// (0x00019624) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6d,	// (0x0001b60e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6d,	// (0x0001b60e) vkb2_top_grid_right_pane_g

0x506d,	// (0x0001090e) vkb2_top_cell_left_pane_g1

0x5084,	// (0x00010925) vkb2_cell_keypad_pane_g1_ParamLimits

0x5084,	// (0x00010925) vkb2_cell_keypad_pane_g1

0xc511,	// (0x00017db2) vkb2_cell_keypad_pane_t1_ParamLimits

0xc511,	// (0x00017db2) vkb2_cell_keypad_pane_t1

0x5092,	// (0x00010933) vkb2_cell_bottom_grid_pane_ParamLimits

0x5092,	// (0x00010933) vkb2_cell_bottom_grid_pane

0x50cb,	// (0x0001096c) vkb2_cell_bottom_grid_pane_g1

0x204f,	// (0x0000d8f0) aid_call2_pane_cp02

0x2057,	// (0x0000d8f8) aid_call_pane_cp02

0x205f,	// (0x0000d900) clock_digital_number_pane_cp10

0x2067,	// (0x0000d908) clock_digital_number_pane_cp11

0x206f,	// (0x0000d910) clock_digital_number_pane_cp12

0x2077,	// (0x0000d918) clock_digital_number_pane_cp13

0x207f,	// (0x0000d920) clock_digital_separator_pane_cp10

0x6dff,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g1

0x6dff,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g2

0x2087,	// (0x0000d928) popup_clock_digital_analogue_window_cp2_g3

0x6dff,	// (0x000126a0) popup_clock_digital_analogue_window_cp2_g4

0x2087,	// (0x0000d928) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd22,	// (0x0001b5c3) popup_clock_digital_analogue_window_cp2_g

0x208f,	// (0x0000d930) popup_clock_digital_analogue_window_cp2_t1

0x209d,	// (0x0000d93e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2d,	// (0x0001b5ce) popup_clock_digital_analogue_window_cp2_t

0xa3fe,	// (0x00015c9f) clock_digital_number_pane_cp10_g1

0xa3fe,	// (0x00015c9f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb10,	// (0x0001b3b1) clock_digital_number_pane_cp10_g

0xa3fe,	// (0x00015c9f) clock_digital_separator_pane_cp10_g1

0xa3fe,	// (0x00015c9f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb10,	// (0x0001b3b1) clock_digital_separator_pane_cp10_g

0xbf68,	// (0x00017809) uniindi_top_pane_g3

0xbf79,	// (0x0001781a) uniindi_top_pane_g4

0x4eb7,	// (0x00010758) vkb2_row_keypad_pane_ParamLimits

0x4eb7,	// (0x00010758) vkb2_row_keypad_pane

0x50e7,	// (0x00010988) vkb2_cell_t_keypad_pane_ParamLimits

0x50e7,	// (0x00010988) vkb2_cell_t_keypad_pane

0x50f4,	// (0x00010995) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x50f4,	// (0x00010995) vkb2_cell_t_keypad_pane_cp08

0x5104,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5104,	// (0x000109a5) vkb2_cell_t_keypad_pane_cp09

0x5115,	// (0x000109b6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5115,	// (0x000109b6) vkb2_cell_t_keypad_pane_cp01

0x5125,	// (0x000109c6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5125,	// (0x000109c6) vkb2_cell_t_keypad_pane_cp02

0x5135,	// (0x000109d6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5135,	// (0x000109d6) vkb2_cell_t_keypad_pane_cp03

0x5145,	// (0x000109e6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5145,	// (0x000109e6) vkb2_cell_t_keypad_pane_cp04

0x5155,	// (0x000109f6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5155,	// (0x000109f6) vkb2_cell_t_keypad_pane_cp05

0x5165,	// (0x00010a06) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5165,	// (0x00010a06) vkb2_cell_t_keypad_pane_cp06

0x5175,	// (0x00010a16) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5175,	// (0x00010a16) vkb2_cell_t_keypad_pane_cp07

0x5185,	// (0x00010a26) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5185,	// (0x00010a26) vkb2_cell_t_keypad_pane_cp10

0x49a6,	// (0x00010247) vkb2_cell_t_keypad_pane_g1

0xdfc5,	// (0x00019866) vkb2_cell_t_keypad_pane_t1

0x3594,	// (0x0000ee35) popup_grid_graphic2_window

0x26c2,	// (0x0000df63) aid_size_cell_graphic2_ParamLimits

0x26c2,	// (0x0000df63) aid_size_cell_graphic2

0x2700,	// (0x0000dfa1) bg_popup_window_pane_cp21_ParamLimits

0x2700,	// (0x0000dfa1) bg_popup_window_pane_cp21

0x270e,	// (0x0000dfaf) graphic2_pages_pane_ParamLimits

0x270e,	// (0x0000dfaf) graphic2_pages_pane

0x2757,	// (0x0000dff8) grid_graphic2_control_pane_ParamLimits

0x2757,	// (0x0000dff8) grid_graphic2_control_pane

0x2795,	// (0x0000e036) grid_graphic2_pane_ParamLimits

0x2795,	// (0x0000e036) grid_graphic2_pane

0x2804,	// (0x0000e0a5) cell_graphic2_pane

0x3594,	// (0x0000ee35) main_comp_mode_pane

0xb804,	// (0x000170a5) list_ai3_gene_pane_ParamLimits

0x1d3b,	// (0x0000d5dc) bg_popup_window_pane_cp19_ParamLimits

0xbbd3,	// (0x00017474) bg_touch_area_indi_pane_ParamLimits

0xbbd3,	// (0x00017474) bg_touch_area_indi_pane

0xbbe9,	// (0x0001748a) bg_touch_area_indi_pane_cp01_ParamLimits

0xbbe9,	// (0x0001748a) bg_touch_area_indi_pane_cp01

0xbbff,	// (0x000174a0) bg_touch_area_indi_pane_cp02_ParamLimits

0xbbff,	// (0x000174a0) bg_touch_area_indi_pane_cp02

0xbc15,	// (0x000174b6) bg_touch_area_indi_pane_cp03_ParamLimits

0xbc15,	// (0x000174b6) bg_touch_area_indi_pane_cp03

0xbc2b,	// (0x000174cc) popup_slider_window_g1_ParamLimits

0xbc47,	// (0x000174e8) popup_slider_window_g2_ParamLimits

0xbc63,	// (0x00017504) popup_slider_window_g3_ParamLimits

0xfcb7,	// (0x0001b558) popup_slider_window_g_ParamLimits

0xbcbf,	// (0x00017560) popup_slider_window_t1_ParamLimits

0xbd31,	// (0x000175d2) small_volume_slider_vertical_pane_ParamLimits

0x2804,	// (0x0000e0a5) cell_graphic2_pane_ParamLimits

0x284f,	// (0x0000e0f0) bg_button_pane_cp10_ParamLimits

0x284f,	// (0x0000e0f0) bg_button_pane_cp10

0x2860,	// (0x0000e101) bg_button_pane_cp11_ParamLimits

0x2860,	// (0x0000e101) bg_button_pane_cp11

0x2871,	// (0x0000e112) graphic2_pages_pane_g1_ParamLimits

0x2871,	// (0x0000e112) graphic2_pages_pane_g1

0x288c,	// (0x0000e12d) graphic2_pages_pane_g2_ParamLimits

0x288c,	// (0x0000e12d) graphic2_pages_pane_g2

0x0001,

0xfd7b,	// (0x0001b61c) graphic2_pages_pane_g_ParamLimits

0xfd7b,	// (0x0001b61c) graphic2_pages_pane_g

0x28a4,	// (0x0000e145) graphic2_pages_pane_t1_ParamLimits

0x28a4,	// (0x0000e145) graphic2_pages_pane_t1

0x28bc,	// (0x0000e15d) cell_graphic2_control_pane_ParamLimits

0x28bc,	// (0x0000e15d) cell_graphic2_control_pane

0x28e6,	// (0x0000e187) cell_graphic2_pane_g1_ParamLimits

0x28e6,	// (0x0000e187) cell_graphic2_pane_g1

0xdfd7,	// (0x00019878) cell_graphic2_pane_g2_ParamLimits

0xdfd7,	// (0x00019878) cell_graphic2_pane_g2

0x28f3,	// (0x0000e194) cell_graphic2_pane_g3_ParamLimits

0x28f3,	// (0x0000e194) cell_graphic2_pane_g3

0xdfe4,	// (0x00019885) cell_graphic2_pane_g4_ParamLimits

0xdfe4,	// (0x00019885) cell_graphic2_pane_g4

0x2900,	// (0x0000e1a1) cell_graphic2_pane_g5_ParamLimits

0x2900,	// (0x0000e1a1) cell_graphic2_pane_g5

0x0004,

0xfd80,	// (0x0001b621) cell_graphic2_pane_g_ParamLimits

0xfd80,	// (0x0001b621) cell_graphic2_pane_g

0x291d,	// (0x0000e1be) cell_graphic2_pane_t1_ParamLimits

0x291d,	// (0x0000e1be) cell_graphic2_pane_t1

0x8986,	// (0x00014227) grid_highlight_pane_cp11_ParamLimits

0x8986,	// (0x00014227) grid_highlight_pane_cp11

0x5bda,	// (0x0001147b) bg_button_pane_cp05

0x2952,	// (0x0000e1f3) cell_graphic2_control_pane_g1

0xa3fe,	// (0x00015c9f) bg_touch_area_indi_pane_g1

0xdff1,	// (0x00019892) aid_cmod_rocker_key_size

0xdffb,	// (0x0001989c) aid_cmode_itu_key_size

0xe005,	// (0x000198a6) main_cmode_video_pane

0xe00d,	// (0x000198ae) main_comp_mode_itu_pane

0xe017,	// (0x000198b8) main_comp_mode_rocker_pane

0xe01f,	// (0x000198c0) cell_cmode_rocker_pane_ParamLimits

0xe01f,	// (0x000198c0) cell_cmode_rocker_pane

0xe031,	// (0x000198d2) cell_cmode_itu_pane_ParamLimits

0xe031,	// (0x000198d2) cell_cmode_itu_pane

0x6631,	// (0x00011ed2) bg_button_pane_cp06_ParamLimits

0x6631,	// (0x00011ed2) bg_button_pane_cp06

0xa636,	// (0x00015ed7) cell_cmode_rocker_pane_g1_ParamLimits

0xa636,	// (0x00015ed7) cell_cmode_rocker_pane_g1

0xbdd2,	// (0x00017673) cell_cmode_rocker_pane_g2_ParamLimits

0xbdd2,	// (0x00017673) cell_cmode_rocker_pane_g2

0x0001,

0xfd90,	// (0x0001b631) cell_cmode_rocker_pane_g_ParamLimits

0xfd90,	// (0x0001b631) cell_cmode_rocker_pane_g

0x5761,	// (0x00011002) bg_button_pane_cp07

0xe046,	// (0x000198e7) cell_cmode_itu_pane_g1

0xe04f,	// (0x000198f0) cell_cmode_itu_pane_t1

0xe05d,	// (0x000198fe) cell_cmode_itu_pane_t2

0x0001,

0xfd95,	// (0x0001b636) cell_cmode_itu_pane_t

0xbfea,	// (0x0001788b) aid_touch_ctrl_left

0xbff2,	// (0x00017893) aid_touch_ctrl_right

0x5761,	// (0x00011002) compa_mode_pane

0x297a,	// (0x0000e21b) aid_cmod_rocker_key_size_cp

0x2984,	// (0x0000e225) aid_cmode_itu_key_size_cp

0xe06b,	// (0x0001990c) compa_mode_pane_g1

0xe073,	// (0x00019914) compa_mode_pane_g2

0xe07b,	// (0x0001991c) compa_mode_pane_g3

0x0002,

0xfd9a,	// (0x0001b63b) compa_mode_pane_g

0x298e,	// (0x0000e22f) main_comp_mode_itu_pane_cp

0x2998,	// (0x0000e239) main_comp_mode_rocker_pane_cp

0x29a2,	// (0x0000e243) cell_cmode_itu_pane_cp_ParamLimits

0x29a2,	// (0x0000e243) cell_cmode_itu_pane_cp

0x29b7,	// (0x0000e258) cell_cmode_rocker_pane_cp_ParamLimits

0x29b7,	// (0x0000e258) cell_cmode_rocker_pane_cp

0x6631,	// (0x00011ed2) bg_button_pane_cp06_cp_ParamLimits

0x6631,	// (0x00011ed2) bg_button_pane_cp06_cp

0xa636,	// (0x00015ed7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xa636,	// (0x00015ed7) cell_cmode_rocker_pane_g1_cp

0xa3fe,	// (0x00015c9f) cell_cmode_rocker_pane_g2_cp

0x5761,	// (0x00011002) bg_button_pane_cp07_cp

0x29c9,	// (0x0000e26a) cell_cmode_itu_pane_g1_cp

0x29d2,	// (0x0000e273) cell_cmode_itu_pane_t1_cp

0x29e0,	// (0x0000e281) cell_cmode_itu_pane_t2_cp

0x12b5,	// (0x0000cb56) settings_code_pane_cp2

0x5932,	// (0x000111d3) bg_popup_window_pane_cp3_ParamLimits

0x5dd8,	// (0x00011679) heading_pane_cp3_ParamLimits

0x5de7,	// (0x00011688) listscroll_popup_graphic_pane_ParamLimits

0x4761,	// (0x00010002) fep_hwr_aid_pane_ParamLimits

0x4bc1,	// (0x00010462) aid_touch_sctrl_top_ParamLimits

0x4bdc,	// (0x0001047d) sctrl_sk_top_pane_g1_ParamLimits

0x49a6,	// (0x00010247) sctrl_sk_top_pane_g2_ParamLimits

0xfcd0,	// (0x0001b571) sctrl_sk_top_pane_g_ParamLimits

0x4be9,	// (0x0001048a) sctrl_sk_top_pane_t1_ParamLimits

0x4bc1,	// (0x00010462) aid_touch_sctrl_bottom_ParamLimits

0x4be9,	// (0x0001048a) sctrl_sk_bottom_pane_t1_ParamLimits

0xbf34,	// (0x000177d5) aid_area_touch_clock

0xdbc4,	// (0x00019465) aid_vkb2_area_top_pane_cell_ParamLimits

0xdbc4,	// (0x00019465) aid_vkb2_area_top_pane_cell

0xdc73,	// (0x00019514) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdc73,	// (0x00019514) aid_vkb2_area_bottom_pane_cell

0xc481,	// (0x00017d22) popup_char_count_window

0xe083,	// (0x00019924) popup_char_count_window_g1

0xe08c,	// (0x0001992d) popup_char_count_window_g2

0xe095,	// (0x00019936) popup_char_count_window_g3

0x0002,

0xfda1,	// (0x0001b642) popup_char_count_window_g

0xe09e,	// (0x0001993f) popup_char_count_window_t1

0x4c95,	// (0x00010536) popup_fep_char_preview_window_ParamLimits

0x4c95,	// (0x00010536) popup_fep_char_preview_window

0xdbe4,	// (0x00019485) vkb2_top_candi_pane_ParamLimits

0xdbe4,	// (0x00019485) vkb2_top_candi_pane

0x29ee,	// (0x0000e28f) cell_vkb2_top_candi_pane_ParamLimits

0x29ee,	// (0x0000e28f) cell_vkb2_top_candi_pane

0x519a,	// (0x00010a3b) bg_popup_fep_char_preview_window_ParamLimits

0x519a,	// (0x00010a3b) bg_popup_fep_char_preview_window

0x51a8,	// (0x00010a49) popup_fep_char_preview_window_t1_ParamLimits

0x51a8,	// (0x00010a49) popup_fep_char_preview_window_t1

0xe0ac,	// (0x0001994d) bg_popup_fep_char_preview_window_g1

0xe0b4,	// (0x00019955) bg_popup_fep_char_preview_window_g2

0xe0bc,	// (0x0001995d) bg_popup_fep_char_preview_window_g3

0xe0c4,	// (0x00019965) bg_popup_fep_char_preview_window_g4

0xe0cc,	// (0x0001996d) bg_popup_fep_char_preview_window_g5

0xe0d4,	// (0x00019975) bg_popup_fep_char_preview_window_g6

0xe0dc,	// (0x0001997d) bg_popup_fep_char_preview_window_g7

0xe0e4,	// (0x00019985) bg_popup_fep_char_preview_window_g8

0xe0ec,	// (0x0001998d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda8,	// (0x0001b649) bg_popup_fep_char_preview_window_g

0x49a6,	// (0x00010247) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49a6,	// (0x00010247) cell_vkb2_top_candi_pane_g1

0x49b4,	// (0x00010255) cell_vkb2_top_candi_pane_g2_ParamLimits

0x49b4,	// (0x00010255) cell_vkb2_top_candi_pane_g2

0xdf96,	// (0x00019837) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf96,	// (0x00019837) cell_vkb2_top_candi_pane_g3

0x51ea,	// (0x00010a8b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x51ea,	// (0x00010a8b) cell_vkb2_top_candi_pane_g4

0xaa38,	// (0x000162d9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xaa38,	// (0x000162d9) cell_vkb2_top_candi_pane_g5

0x520b,	// (0x00010aac) cell_vkb2_top_candi_pane_g6_ParamLimits

0x520b,	// (0x00010aac) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbd,	// (0x0001b65e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbd,	// (0x0001b65e) cell_vkb2_top_candi_pane_g

0x5219,	// (0x00010aba) cell_vkb2_top_candi_pane_t1

0x4579,	// (0x0000fe1a) aid_size_touch_slider_mark_ParamLimits

0x4579,	// (0x0000fe1a) aid_size_touch_slider_mark

0x2742,	// (0x0000dfe3) grid_graphic2_catg_pane_ParamLimits

0x2742,	// (0x0000dfe3) grid_graphic2_catg_pane

0x27d9,	// (0x0000e07a) popup_grid_graphic2_window_t1_ParamLimits

0x27d9,	// (0x0000e07a) popup_grid_graphic2_window_t1

0x27ee,	// (0x0000e08f) popup_grid_graphic2_window_t2_ParamLimits

0x27ee,	// (0x0000e08f) popup_grid_graphic2_window_t2

0x0001,

0xfd76,	// (0x0001b617) popup_grid_graphic2_window_t_ParamLimits

0xfd76,	// (0x0001b617) popup_grid_graphic2_window_t

0x5bda,	// (0x0001147b) bg_button_pane_cp05_ParamLimits

0x2952,	// (0x0000e1f3) cell_graphic2_control_pane_g1_ParamLimits

0xbfb0,	// (0x00017851) cell_graphic2_catg_pane_ParamLimits

0xbfb0,	// (0x00017851) cell_graphic2_catg_pane

0x5761,	// (0x00011002) bg_button_pane_cp12

0x2a3a,	// (0x0000e2db) cell_graphic2_catg_pane_g1

0xbf00,	// (0x000177a1) cell_tb_ext_pane_t1_ParamLimits

0x4fe4,	// (0x00010885) vkb2_top_cell_right_narrow_pane_ParamLimits

0x4fe4,	// (0x00010885) vkb2_top_cell_right_narrow_pane

0x4ffc,	// (0x0001089d) vkb2_top_cell_right_wide_pane_ParamLimits

0x4ffc,	// (0x0001089d) vkb2_top_cell_right_wide_pane

0x4753,	// (0x0000fff4) bg_vkb2_func_pane_ParamLimits

0x4753,	// (0x0000fff4) bg_vkb2_func_pane

0x506d,	// (0x0001090e) vkb2_top_cell_left_pane_g1_ParamLimits

0x4753,	// (0x0000fff4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4753,	// (0x0000fff4) bg_vkb2_fuc_pane_cp03

0x50cb,	// (0x0001096c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7c82,	// (0x00013523) bg_vkb2_func_pane_g1

0x7c8a,	// (0x0001352b) bg_vkb2_func_pane_g2

0x7c9a,	// (0x0001353b) bg_vkb2_func_pane_g3

0x7c92,	// (0x00013533) bg_vkb2_func_pane_g4

0x7ca2,	// (0x00013543) bg_vkb2_func_pane_g5

0x7caa,	// (0x0001354b) bg_vkb2_func_pane_g6

0x7cb2,	// (0x00013553) bg_vkb2_func_pane_g7

0x7cba,	// (0x0001355b) bg_vkb2_func_pane_g8

0x7c7a,	// (0x0001351b) bg_vkb2_func_pane_g9

0x0008,

0xfdca,	// (0x0001b66b) bg_vkb2_func_pane_g

0x4753,	// (0x0000fff4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4753,	// (0x0000fff4) bg_vkb2_fuc_pane_cp01

0x506d,	// (0x0001090e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x506d,	// (0x0001090e) vkb2_top_cell_right_wide_pane_g1

0x4753,	// (0x0000fff4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4753,	// (0x0000fff4) bg_vkb2_fuc_pane_cp02

0x50cb,	// (0x0001096c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x50cb,	// (0x0001096c) vkb2_top_cell_right_narrow_pane_g1

0x1c89,	// (0x0000d52a) aid_touch_area_decrease_ParamLimits

0x1c89,	// (0x0000d52a) aid_touch_area_decrease

0x1cb7,	// (0x0000d558) aid_touch_area_increase_ParamLimits

0x1cb7,	// (0x0000d558) aid_touch_area_increase

0x1cdf,	// (0x0000d580) aid_touch_area_mute_ParamLimits

0x1cdf,	// (0x0000d580) aid_touch_area_mute

0x1d07,	// (0x0000d5a8) aid_touch_area_slider_ParamLimits

0x1d07,	// (0x0000d5a8) aid_touch_area_slider

0x1d47,	// (0x0000d5e8) popup_slider_window_g4_ParamLimits

0x1d47,	// (0x0000d5e8) popup_slider_window_g4

0x1d6f,	// (0x0000d610) popup_slider_window_g5_ParamLimits

0x1d6f,	// (0x0000d610) popup_slider_window_g5

0x1da3,	// (0x0000d644) popup_slider_window_g6_ParamLimits

0x1da3,	// (0x0000d644) popup_slider_window_g6

0xbceb,	// (0x0001758c) popup_slider_window_t2_ParamLimits

0xbceb,	// (0x0001758c) popup_slider_window_t2

0x0001,

0xfcc4,	// (0x0001b565) popup_slider_window_t_ParamLimits

0xfcc4,	// (0x0001b565) popup_slider_window_t

0x1dbf,	// (0x0000d660) slider_pane_ParamLimits

0x1dbf,	// (0x0000d660) slider_pane

0xe0f4,	// (0x00019995) slider_pane_g1_ParamLimits

0xe0f4,	// (0x00019995) slider_pane_g1

0xe108,	// (0x000199a9) slider_pane_g2_ParamLimits

0xe108,	// (0x000199a9) slider_pane_g2

0xe11e,	// (0x000199bf) slider_pane_g3_ParamLimits

0xe11e,	// (0x000199bf) slider_pane_g3

0x0003,

0xfddd,	// (0x0001b67e) slider_pane_g_ParamLimits

0xfddd,	// (0x0001b67e) slider_pane_g

0xd730,	// (0x00018fd1) popup_tb_float_extension_window_ParamLimits

0xd730,	// (0x00018fd1) popup_tb_float_extension_window

0xe14a,	// (0x000199eb) aid_size_cell_tb_float_ext

0x5761,	// (0x00011002) bg_popup_sub_window_cp28

0xe155,	// (0x000199f6) grid_tb_float_ext_pane

0xe15d,	// (0x000199fe) cell_tb_float_ext_pane_ParamLimits

0xe15d,	// (0x000199fe) cell_tb_float_ext_pane

0xe175,	// (0x00019a16) cell_tb_float_ext_pane_g1

0xe17e,	// (0x00019a1f) grid_highlight_pane_cp12

0xd995,	// (0x00019236) cell_last_hwr_side_pane_ParamLimits

0xd995,	// (0x00019236) cell_last_hwr_side_pane

0xa3fe,	// (0x00015c9f) cell_last_hwr_side_pane_g1

0xe187,	// (0x00019a28) cell_last_hwr_side_pane_g2

0x0001,

0xfde6,	// (0x0001b687) cell_last_hwr_side_pane_g

0xdd48,	// (0x000195e9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdd48,	// (0x000195e9) vkb2_area_bottom_space_btn_pane

0x49a6,	// (0x00010247) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfc5,	// (0x00019866) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5219,	// (0x00010aba) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5230,	// (0x00010ad1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5230,	// (0x00010ad1) vkb2_area_bottom_space_btn_pane_g1

0x5266,	// (0x00010b07) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5266,	// (0x00010b07) vkb2_area_bottom_space_btn_pane_g2

0x529c,	// (0x00010b3d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x529c,	// (0x00010b3d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdeb,	// (0x0001b68c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdeb,	// (0x0001b68c) vkb2_area_bottom_space_btn_pane_g

0x4810,	// (0x000100b1) cel_fep_hwr_func_pane_ParamLimits

0x4810,	// (0x000100b1) cel_fep_hwr_func_pane

0xd96a,	// (0x0001920b) cell_hwr_side_button_pane_ParamLimits

0xd96a,	// (0x0001920b) cell_hwr_side_button_pane

0xbf34,	// (0x000177d5) aid_area_touch_clock_ParamLimits

0x5bda,	// (0x0001147b) bg_uniindi_top_pane_ParamLimits

0xbf46,	// (0x000177e7) uniindi_top_pane_g1_ParamLimits

0xbf5c,	// (0x000177fd) uniindi_top_pane_g2_ParamLimits

0xbf68,	// (0x00017809) uniindi_top_pane_g3_ParamLimits

0xbf79,	// (0x0001781a) uniindi_top_pane_g4_ParamLimits

0xfcfc,	// (0x0001b59d) uniindi_top_pane_g_ParamLimits

0xbf86,	// (0x00017827) uniindi_top_pane_t1_ParamLimits

0x5bda,	// (0x0001147b) bg_vkb2_func_pane_cp01_ParamLimits

0x5bda,	// (0x0001147b) bg_vkb2_func_pane_cp01

0xe190,	// (0x00019a31) cel_fep_hwr_func_pane_g1_ParamLimits

0xe190,	// (0x00019a31) cel_fep_hwr_func_pane_g1

0x5bda,	// (0x0001147b) bg_vkb2_func_pane_cp02_ParamLimits

0x5bda,	// (0x0001147b) bg_vkb2_func_pane_cp02

0xe190,	// (0x00019a31) cell_hwr_side_button_pane_g1_ParamLimits

0xe190,	// (0x00019a31) cell_hwr_side_button_pane_g1

0x7ae0,	// (0x00013381) status_pane_g4_ParamLimits

0x7ae0,	// (0x00013381) status_pane_g4

0x7af8,	// (0x00013399) status_pane_t1

0xa1e0,	// (0x00015a81) form2_midp_gauge_slider_cont_pane

0xa1e8,	// (0x00015a89) form2_midp_gauge_slider_pane_t1_ParamLimits

0x15a1,	// (0x0000ce42) form2_midp_gauge_slider_pane_t2_ParamLimits

0x15b3,	// (0x0000ce54) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac3,	// (0x0001b364) form2_midp_gauge_slider_pane_t_ParamLimits

0xa21e,	// (0x00015abf) form2_midp_slider_pane_ParamLimits

0x4c5d,	// (0x000104fe) aid_size_cell_func_vkb2_ParamLimits

0x4c5d,	// (0x000104fe) aid_size_cell_func_vkb2

0xe136,	// (0x000199d7) slider_pane_g4_ParamLimits

0xe136,	// (0x000199d7) slider_pane_g4

0xdda1,	// (0x00019642) form2_midp_gauge_slider_pane_t2_cp01

0xddaf,	// (0x00019650) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xddaf,	// (0x00019650) form2_midp_gauge_slider_pane_t3_cp01

0x530d,	// (0x00010bae) form2_midp_slider_pane_cp01

0x5761,	// (0x00011002) navi_smil_pane

0xe1c0,	// (0x00019a61) navi_smil_pane_g1

0xe1c8,	// (0x00019a69) navi_smil_pane_t1

0xe19e,	// (0x00019a3f) form2_midp_slider_pane_g1

0xe1a7,	// (0x00019a48) form2_midp_slider_pane_g2

0xe1af,	// (0x00019a50) form2_midp_slider_pane_g3

0xe19e,	// (0x00019a3f) form2_midp_slider_pane_g4

0x2a6e,	// (0x0000e30f) form2_midp_slider_pane_g5

0x0004,

0xfdf4,	// (0x0001b695) form2_midp_slider_pane_g

0x52d2,	// (0x00010b73) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x52d2,	// (0x00010b73) vkb2_area_bottom_space_btn_pane_g4

0x0b3d,	// (0x0000c3de) lc0_navi_pane_ParamLimits

0x0b3d,	// (0x0000c3de) lc0_navi_pane

0x0ba7,	// (0x0000c448) lc0_stat_indi_pane_ParamLimits

0x0ba7,	// (0x0000c448) lc0_stat_indi_pane

0x0bbc,	// (0x0000c45d) ls0_title_pane_ParamLimits

0x0bbc,	// (0x0000c45d) ls0_title_pane

0x6631,	// (0x00011ed2) bg_popup_sub_pane_cp14_ParamLimits

0xbf1b,	// (0x000177bc) list_uniindi_pane_ParamLimits

0xbf27,	// (0x000177c8) uniindi_top_pane_ParamLimits

0xbfc2,	// (0x00017863) list_single_uniindi_pane_g1_ParamLimits

0xbfd5,	// (0x00017876) list_single_uniindi_pane_t1_ParamLimits

0xddcc,	// (0x0001966d) lc0_stat_clock_pane_ParamLimits

0xddcc,	// (0x0001966d) lc0_stat_clock_pane

0x2a91,	// (0x0000e332) lc0_stat_indi_pane_g1_ParamLimits

0x2a91,	// (0x0000e332) lc0_stat_indi_pane_g1

0x2a84,	// (0x0000e325) lc0_stat_indi_pane_g2_ParamLimits

0x2a84,	// (0x0000e325) lc0_stat_indi_pane_g2

0x0001,

0xfdff,	// (0x0001b6a0) lc0_stat_indi_pane_g_ParamLimits

0xfdff,	// (0x0001b6a0) lc0_stat_indi_pane_g

0xddd9,	// (0x0001967a) lc0_uni_indicator_pane_ParamLimits

0xddd9,	// (0x0001967a) lc0_uni_indicator_pane

0xe1d6,	// (0x00019a77) ls0_title_pane_g1_ParamLimits

0xe1d6,	// (0x00019a77) ls0_title_pane_g1

0x2aab,	// (0x0000e34c) ls0_title_pane_t1_ParamLimits

0x2aab,	// (0x0000e34c) ls0_title_pane_t1

0xdde6,	// (0x00019687) lc0_uni_indicator_pane_g1_ParamLimits

0xdde6,	// (0x00019687) lc0_uni_indicator_pane_g1

0xe1ea,	// (0x00019a8b) lc0_stat_clock_pane_t1

0x3594,	// (0x0000ee35) main_ai5_pane

0xe1f8,	// (0x00019a99) ai5_sk_pane_ParamLimits

0xe1f8,	// (0x00019a99) ai5_sk_pane

0x2aee,	// (0x0000e38f) cell_ai5_widget_pane_ParamLimits

0x2aee,	// (0x0000e38f) cell_ai5_widget_pane

0xe205,	// (0x00019aa6) aid_size_cell_widget_grid

0xe212,	// (0x00019ab3) bg_ai5_widget_pane_ParamLimits

0xe212,	// (0x00019ab3) bg_ai5_widget_pane

0x2b7b,	// (0x0000e41c) cell_ai5_widget_pane_g2

0x2b8f,	// (0x0000e430) cell_ai5_widget_pane_g3

0x2ba9,	// (0x0000e44a) cell_ai5_widget_pane_g4

0x2bb9,	// (0x0000e45a) cell_ai5_widget_pane_g5

0x2bc9,	// (0x0000e46a) cell_ai5_widget_pane_g6

0x2bd5,	// (0x0000e476) cell_ai5_widget_pane_g7

0x2c41,	// (0x0000e4e2) cell_ai5_widget_pane_t1_ParamLimits

0x2c41,	// (0x0000e4e2) cell_ai5_widget_pane_t1

0x2c5e,	// (0x0000e4ff) cell_ai5_widget_pane_t2_ParamLimits

0x2c5e,	// (0x0000e4ff) cell_ai5_widget_pane_t2

0x2c76,	// (0x0000e517) cell_ai5_widget_pane_t3_ParamLimits

0x2c76,	// (0x0000e517) cell_ai5_widget_pane_t3

0x2c8e,	// (0x0000e52f) cell_ai5_widget_pane_t4_ParamLimits

0x2c8e,	// (0x0000e52f) cell_ai5_widget_pane_t4

0x2cb4,	// (0x0000e555) cell_ai5_widget_pane_t5_ParamLimits

0x2cb4,	// (0x0000e555) cell_ai5_widget_pane_t5

0xe24c,	// (0x00019aed) cell_ai5_widget_pane_t6_ParamLimits

0xe24c,	// (0x00019aed) cell_ai5_widget_pane_t6

0xe25e,	// (0x00019aff) cell_ai5_widget_pane_t7_ParamLimits

0xe25e,	// (0x00019aff) cell_ai5_widget_pane_t7

0x2cd3,	// (0x0000e574) cell_ai5_widget_pane_t8_ParamLimits

0x2cd3,	// (0x0000e574) cell_ai5_widget_pane_t8

0x000b,

0xfe1f,	// (0x0001b6c0) cell_ai5_widget_pane_t_ParamLimits

0xfe1f,	// (0x0001b6c0) cell_ai5_widget_pane_t

0x2d57,	// (0x0000e5f8) grid_ai5_widget_pane

0x6631,	// (0x00011ed2) highlight_cell_ai5_widget_pane_ParamLimits

0x6631,	// (0x00011ed2) highlight_cell_ai5_widget_pane

0x2d63,	// (0x0000e604) ai5_sk_left_pane

0x2d6d,	// (0x0000e60e) ai5_sk_middle_pane

0x2d77,	// (0x0000e618) ai5_sk_right_pane

0xe27d,	// (0x00019b1e) bg_ai5_widget_pane_g1_ParamLimits

0xe27d,	// (0x00019b1e) bg_ai5_widget_pane_g1

0xe289,	// (0x00019b2a) bg_ai5_widget_pane_g2_ParamLimits

0xe289,	// (0x00019b2a) bg_ai5_widget_pane_g2

0xe295,	// (0x00019b36) bg_ai5_widget_pane_g3_ParamLimits

0xe295,	// (0x00019b36) bg_ai5_widget_pane_g3

0xe2a1,	// (0x00019b42) bg_ai5_widget_pane_g4_ParamLimits

0xe2a1,	// (0x00019b42) bg_ai5_widget_pane_g4

0xe2ad,	// (0x00019b4e) bg_ai5_widget_pane_g5_ParamLimits

0xe2ad,	// (0x00019b4e) bg_ai5_widget_pane_g5

0xe2b9,	// (0x00019b5a) bg_ai5_widget_pane_g6_ParamLimits

0xe2b9,	// (0x00019b5a) bg_ai5_widget_pane_g6

0xe2c5,	// (0x00019b66) bg_ai5_widget_pane_g7_ParamLimits

0xe2c5,	// (0x00019b66) bg_ai5_widget_pane_g7

0xe2d1,	// (0x00019b72) bg_ai5_widget_pane_g8_ParamLimits

0xe2d1,	// (0x00019b72) bg_ai5_widget_pane_g8

0xe2dd,	// (0x00019b7e) bg_ai5_widget_pane_g9_ParamLimits

0xe2dd,	// (0x00019b7e) bg_ai5_widget_pane_g9

0x0008,

0xfe38,	// (0x0001b6d9) bg_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001b6d9) bg_ai5_widget_pane_g

0xe30d,	// (0x00019bae) cell_shortcut_ai5_widget_pane_ParamLimits

0xe30d,	// (0x00019bae) cell_shortcut_ai5_widget_pane

0xe31e,	// (0x00019bbf) bg_cell_shortcut_ai5_widget_pane

0x5d94,	// (0x00011635) cell_grid_ai5_widget_pane_g1

0x742e,	// (0x00012ccf) highlight_cell_shortcut_ai5_widget_pane

0x7c82,	// (0x00013523) ai5_sk_left_pane_g1

0xe326,	// (0x00019bc7) ai5_sk_left_pane_g2

0xe32e,	// (0x00019bcf) ai5_sk_left_pane_g3

0xe336,	// (0x00019bd7) ai5_sk_left_pane_g4

0x0003,

0xfe4b,	// (0x0001b6ec) ai5_sk_left_pane_g

0xe33e,	// (0x00019bdf) ai5_sk_left_pane_t1

0x7c8a,	// (0x0001352b) ai5_sk_right_pane_g1

0xe34c,	// (0x00019bed) ai5_sk_right_pane_g2

0xe354,	// (0x00019bf5) ai5_sk_right_pane_g3

0xe35c,	// (0x00019bfd) ai5_sk_right_pane_g4

0x0003,

0xfe54,	// (0x0001b6f5) ai5_sk_right_pane_g

0xe364,	// (0x00019c05) ai5_sk_right_pane_t1

0x7c8a,	// (0x0001352b) ai5_sk_middle_pane_g1

0x7c82,	// (0x00013523) ai5_sk_middle_pane_g2

0x7ca2,	// (0x00013543) ai5_sk_middle_pane_g3

0xe354,	// (0x00019bf5) ai5_sk_middle_pane_g4

0xe32e,	// (0x00019bcf) ai5_sk_middle_pane_g5

0xe372,	// (0x00019c13) ai5_sk_middle_pane_g6

0x2d81,	// (0x0000e622) ai5_sk_middle_pane_g7

0x0006,

0xfe5d,	// (0x0001b6fe) ai5_sk_middle_pane_g

0x0a3b,	// (0x0000c2dc) aid_touch_area_size_lc0_ParamLimits

0x0a3b,	// (0x0000c2dc) aid_touch_area_size_lc0

0x49d5,	// (0x00010276) cell_hwr_candidate_pane_t1_ParamLimits

0x77dd,	// (0x0001307e) aid_touch_navi_pane

0x0ca8,	// (0x0000c549) status_dt_navi_pane_ParamLimits

0x0ca8,	// (0x0000c549) status_dt_navi_pane

0x0cc0,	// (0x0000c561) status_dt_sta_pane_ParamLimits

0x0cc0,	// (0x0000c561) status_dt_sta_pane

0x2d89,	// (0x0000e62a) dt_sta_controll_pane

0x2d96,	// (0x0000e637) dt_sta_indi_pane

0x2da3,	// (0x0000e644) dt_sta_title_pane

0x5bda,	// (0x0001147b) bg_dt_sta_indi_pane_ParamLimits

0x5bda,	// (0x0001147b) bg_dt_sta_indi_pane

0x2db5,	// (0x0000e656) dt_sta_battery_pane

0x2dbd,	// (0x0000e65e) dt_sta_indi_pane_g1

0x2dc6,	// (0x0000e667) dt_sta_indi_pane_g2

0x2dcf,	// (0x0000e670) dt_sta_indi_pane_g3

0x0002,

0xfe6c,	// (0x0001b70d) dt_sta_indi_pane_g

0x2dd8,	// (0x0000e679) dt_sta_signal_pane

0x6631,	// (0x00011ed2) bg_dt_sta_title_pane_ParamLimits

0x6631,	// (0x00011ed2) bg_dt_sta_title_pane

0x2de1,	// (0x0000e682) dt_sta_title_pane_g1

0x2de9,	// (0x0000e68a) dt_sta_title_pane_t1_ParamLimits

0x2de9,	// (0x0000e68a) dt_sta_title_pane_t1

0x5761,	// (0x00011002) bg_dt_sta_control_pane

0x2dfe,	// (0x0000e69f) dt_sta_controll_pane_g1

0x2e07,	// (0x0000e6a8) bg_dt_sta_title_pane_g1

0x2e10,	// (0x0000e6b1) bg_dt_sta_title_pane_g2

0x2e19,	// (0x0000e6ba) bg_dt_sta_title_pane_g3

0x0002,

0xfe73,	// (0x0001b714) bg_dt_sta_title_pane_g

0xa3fe,	// (0x00015c9f) bg_dt_sta_indi_pane_g1

0x2e22,	// (0x0000e6c3) dt_sta_signal_pane_g1

0x2e2a,	// (0x0000e6cb) dt_sta_signal_pane_g2

0x0001,

0xfe7a,	// (0x0001b71b) dt_sta_signal_pane_g

0xe37a,	// (0x00019c1b) dt_sta_battery_pane_g1

0xe383,	// (0x00019c24) dt_sta_battery_pane_t1

0xa3fe,	// (0x00015c9f) bg_dt_sta_control_pane_g1

0x6f0e,	// (0x000127af) fep_china_uni_eep_pane

0x6f16,	// (0x000127b7) fep_china_uni_entry_pane_ParamLimits

0x6f26,	// (0x000127c7) popup_fep_china_uni_window_g1_ParamLimits

0x6f36,	// (0x000127d7) popup_fep_china_uni_window_g2_ParamLimits

0x6f36,	// (0x000127d7) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001af94) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001af94) popup_fep_china_uni_window_g

0xe392,	// (0x00019c33) fep_china_uni_eep_pane_g1

0xe39a,	// (0x00019c3b) fep_china_uni_eep_pane_t1

0xe1b7,	// (0x00019a58) aid_touch_area_size_smil_player

0x791a,	// (0x000131bb) lc0_clock_pane

0x7aec,	// (0x0001338d) status_pane_g5_ParamLimits

0x7aec,	// (0x0001338d) status_pane_g5

0xd364,	// (0x00018c05) popup_keymap_window

0x7ab4,	// (0x00013355) status_icon_pane

0x2b8f,	// (0x0000e430) cell_ai5_widget_pane_g3_ParamLimits

0x2ba9,	// (0x0000e44a) cell_ai5_widget_pane_g4_ParamLimits

0x2bb9,	// (0x0000e45a) cell_ai5_widget_pane_g5_ParamLimits

0x2be1,	// (0x0000e482) cell_ai5_widget_pane_g8_ParamLimits

0x2be1,	// (0x0000e482) cell_ai5_widget_pane_g8

0x2bf5,	// (0x0000e496) cell_ai5_widget_pane_g9_ParamLimits

0x2bf5,	// (0x0000e496) cell_ai5_widget_pane_g9

0x2c09,	// (0x0000e4aa) cell_ai5_widget_pane_g10_ParamLimits

0x2c09,	// (0x0000e4aa) cell_ai5_widget_pane_g10

0xe3a9,	// (0x00019c4a) status_icon_pane_g1

0x5761,	// (0x00011002) bg_popup_sub_pane_cp13

0xe3b1,	// (0x00019c52) popup_keymap_window_t1

0x0335,	// (0x0000bbd6) control_pane_g6_ParamLimits

0x0335,	// (0x0000bbd6) control_pane_g6

0x0328,	// (0x0000bbc9) control_pane_g7_ParamLimits

0x0328,	// (0x0000bbc9) control_pane_g7

0x031b,	// (0x0000bbbc) control_pane_g8_ParamLimits

0x031b,	// (0x0000bbbc) control_pane_g8

0x2d89,	// (0x0000e62a) dt_sta_controll_pane_ParamLimits

0x2d96,	// (0x0000e637) dt_sta_indi_pane_ParamLimits

0x2da3,	// (0x0000e644) dt_sta_title_pane_ParamLimits

0x6068,	// (0x00011909) aid_size_touch_scroll_bar_cale

0x366b,	// (0x0000ef0c) popup_discreet_window_ParamLimits

0x366b,	// (0x0000ef0c) popup_discreet_window

0xcf9e,	// (0x0001883f) popup_sk_window

0x835e,	// (0x00013bff) bg_popup_sub_pane_cp28_ParamLimits

0x835e,	// (0x00013bff) bg_popup_sub_pane_cp28

0xe3bf,	// (0x00019c60) popup_discreet_window_g1_ParamLimits

0xe3bf,	// (0x00019c60) popup_discreet_window_g1

0xe3df,	// (0x00019c80) popup_discreet_window_t1_ParamLimits

0xe3df,	// (0x00019c80) popup_discreet_window_t1

0xe3fd,	// (0x00019c9e) popup_discreet_window_t2_ParamLimits

0xe3fd,	// (0x00019c9e) popup_discreet_window_t2

0x0002,

0xfe7f,	// (0x0001b720) popup_discreet_window_t_ParamLimits

0xfe7f,	// (0x0001b720) popup_discreet_window_t

0x5342,	// (0x00010be3) popup_sk_window_g1

0x534b,	// (0x00010bec) popup_sk_window_g2

0x0001,

0xfe86,	// (0x0001b727) popup_sk_window_g

0x5354,	// (0x00010bf5) popup_sk_window_t1

0x5362,	// (0x00010c03) popup_sk_window_t1_copy1

0x2b7b,	// (0x0000e41c) cell_ai5_widget_pane_g2_ParamLimits

0x2ce5,	// (0x0000e586) cell_ai5_widget_pane_t9_ParamLimits

0x2ce5,	// (0x0000e586) cell_ai5_widget_pane_t9

0x5761,	// (0x00011002) main_fep_fshwr2_pane

0xddfb,	// (0x0001969c) aid_fshwr2_btn_pane

0xde0f,	// (0x000196b0) aid_fshwr2_syb_pane

0xde23,	// (0x000196c4) aid_fshwr2_txt_pane

0xde33,	// (0x000196d4) fshwr2_func_candi_pane

0xde4b,	// (0x000196ec) fshwr2_hwr_syb_pane

0xde63,	// (0x00019704) fshwr2_icf_pane

0x3594,	// (0x0000ee35) fshwr2_icf_bg_pane

0xde8d,	// (0x0001972e) fshwr2_icf_pane_t1_ParamLimits

0xde8d,	// (0x0001972e) fshwr2_icf_pane_t1

0x6dff,	// (0x000126a0) fshwr2_func_candi_pane_g1

0x2edb,	// (0x0000e77c) fshwr2_func_candi_row_pane_ParamLimits

0x2edb,	// (0x0000e77c) fshwr2_func_candi_row_pane

0xdea4,	// (0x00019745) cell_fshwr2_syb_pane_ParamLimits

0xdea4,	// (0x00019745) cell_fshwr2_syb_pane

0x542d,	// (0x00010cce) fshwr2_hwr_syb_pane_g1_ParamLimits

0x542d,	// (0x00010cce) fshwr2_hwr_syb_pane_g1

0x3594,	// (0x0000ee35) bg_popup_call_pane_cp01

0xdec6,	// (0x00019767) fshwr2_func_candi_cell_pane_ParamLimits

0xdec6,	// (0x00019767) fshwr2_func_candi_cell_pane

0x8150,	// (0x000139f1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x8150,	// (0x000139f1) fshwr2_func_candi_cell_bg_pane

0xdf05,	// (0x000197a6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdf05,	// (0x000197a6) fshwr2_func_candi_cell_pane_g1

0xdf3c,	// (0x000197dd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdf3c,	// (0x000197dd) fshwr2_func_candi_cell_pane_t1

0x3594,	// (0x0000ee35) bg_button_pane_cp08

0x777d,	// (0x0001301e) cell_fshwr2_syb_bg_pane

0xdf57,	// (0x000197f8) cell_fshwr2_syb_bg_pane_g1

0xdf6b,	// (0x0001980c) cell_fshwr2_syb_bg_pane_t1

0x6631,	// (0x00011ed2) main_tmo_pane

0x10c1,	// (0x0000c962) uni_indicator_pane_g1_ParamLimits

0x10d5,	// (0x0000c976) uni_indicator_pane_g2_ParamLimits

0x10ea,	// (0x0000c98b) uni_indicator_pane_g3_ParamLimits

0x8e50,	// (0x000146f1) uni_indicator_pane_g4_ParamLimits

0x8e50,	// (0x000146f1) uni_indicator_pane_g4

0x8e64,	// (0x00014705) uni_indicator_pane_g5_ParamLimits

0x8e64,	// (0x00014705) uni_indicator_pane_g5

0x8e64,	// (0x00014705) uni_indicator_pane_g6_ParamLimits

0x8e64,	// (0x00014705) uni_indicator_pane_g6

0xf8eb,	// (0x0001b18c) uni_indicator_pane_g_ParamLimits

0x1c6d,	// (0x0000d50e) popup_tmo_note_window_ParamLimits

0x1c6d,	// (0x0000d50e) popup_tmo_note_window

0x4c39,	// (0x000104da) fshwr2_bg_pane

0xdf2d,	// (0x000197ce) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdf2d,	// (0x000197ce) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8b,	// (0x0001b72c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8b,	// (0x0001b72c) fshwr2_func_candi_cell_pane_g

0x498e,	// (0x0001022f) bg_popup_window_pane_cp01

0x54e2,	// (0x00010d83) bg_popup_window_pane_g1_cp01

0xe44f,	// (0x00019cf0) bg_popup_window_pane_cp22_ParamLimits

0xe44f,	// (0x00019cf0) bg_popup_window_pane_cp22

0xe45d,	// (0x00019cfe) listscroll_tmo_link_pane_ParamLimits

0xe45d,	// (0x00019cfe) listscroll_tmo_link_pane

0xe49d,	// (0x00019d3e) popup_tmo_note_window_g1_ParamLimits

0xe49d,	// (0x00019d3e) popup_tmo_note_window_g1

0xe4aa,	// (0x00019d4b) tmo_note_info_pane_ParamLimits

0xe4aa,	// (0x00019d4b) tmo_note_info_pane

0x2fdb,	// (0x0000e87c) list_tmo_note_info_pane_g1_ParamLimits

0x2fdb,	// (0x0000e87c) list_tmo_note_info_pane_g1

0xe4c4,	// (0x00019d65) list_tmo_note_info_pane_g2_ParamLimits

0xe4c4,	// (0x00019d65) list_tmo_note_info_pane_g2

0x0001,

0xfe90,	// (0x0001b731) list_tmo_note_info_pane_g_ParamLimits

0xfe90,	// (0x0001b731) list_tmo_note_info_pane_g

0xe4e0,	// (0x00019d81) list_tmo_note_info_text_pane_ParamLimits

0xe4e0,	// (0x00019d81) list_tmo_note_info_text_pane

0xe522,	// (0x00019dc3) list_tmo_link_pane

0xe52f,	// (0x00019dd0) scroll_pane_cp20

0xe53c,	// (0x00019ddd) list_single_tmo_link_pane_ParamLimits

0xe53c,	// (0x00019ddd) list_single_tmo_link_pane

0xe54c,	// (0x00019ded) list_single_tmo_link_pane_t1

0xe55a,	// (0x00019dfb) list_tmo_note_info_text_pane_t1_ParamLimits

0xe55a,	// (0x00019dfb) list_tmo_note_info_text_pane_t1

0x6859,	// (0x000120fa) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6859,	// (0x000120fa) aid_size_touch_scroll_bar_cp01

0xf34e,	// (0x0001abef) aid_size_touch_slider_marker

0xcf92,	// (0x00018833) popup_settings_window_ParamLimits

0xcf92,	// (0x00018833) popup_settings_window

0x7797,	// (0x00013038) popup_candi_list_indi_window

0x77dd,	// (0x0001307e) aid_touch_navi_pane_ParamLimits

0x4b95,	// (0x00010436) rs_clock_indi_pane

0x4b9e,	// (0x0001043f) sctrl_sk_bottom_pane_ParamLimits

0x4baf,	// (0x00010450) sctrl_sk_top_pane_ParamLimits

0x4caf,	// (0x00010550) popup_fep_tooltip_window

0xe205,	// (0x00019aa6) aid_size_cell_widget_grid_ParamLimits

0x2b67,	// (0x0000e408) cell_ai5_widget_pane_g1_ParamLimits

0x2b67,	// (0x0000e408) cell_ai5_widget_pane_g1

0x2bc9,	// (0x0000e46a) cell_ai5_widget_pane_g6_ParamLimits

0x2bd5,	// (0x0000e476) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe04,	// (0x0001b6a5) cell_ai5_widget_pane_g_ParamLimits

0xfe04,	// (0x0001b6a5) cell_ai5_widget_pane_g

0x2d14,	// (0x0000e5b5) cell_ai5_widget_pane_t10_ParamLimits

0x2d14,	// (0x0000e5b5) cell_ai5_widget_pane_t10

0x2d57,	// (0x0000e5f8) grid_ai5_widget_pane_ParamLimits

0xe2e9,	// (0x00019b8a) cell_contacts_ai5_widget_pane_ParamLimits

0xe2e9,	// (0x00019b8a) cell_contacts_ai5_widget_pane

0xe412,	// (0x00019cb3) popup_discreet_window_t3_ParamLimits

0xe412,	// (0x00019cb3) popup_discreet_window_t3

0xde7b,	// (0x0001971c) popup_fshwr2_char_preview_window_ParamLimits

0xde7b,	// (0x0001971c) popup_fshwr2_char_preview_window

0x2ff2,	// (0x0000e893) tmo_note_info_pane_t1

0x3007,	// (0x0000e8a8) tmo_note_info_pane_t2

0x301c,	// (0x0000e8bd) tmo_note_info_pane_t3

0xe4fe,	// (0x00019d9f) tmo_note_info_pane_t4

0xe510,	// (0x00019db1) tmo_note_info_pane_t5

0x0004,

0xfe95,	// (0x0001b736) tmo_note_info_pane_t

0xe522,	// (0x00019dc3) list_tmo_link_pane_ParamLimits

0xe52f,	// (0x00019dd0) scroll_pane_cp20_ParamLimits

0x3594,	// (0x0000ee35) bg_popup_fep_char_preview_window_cp01

0xe573,	// (0x00019e14) popup_fshwr2_char_preview_window_t1

0xe581,	// (0x00019e22) popup_candi_list_indi_window_g1

0xe58a,	// (0x00019e2b) bg_cell_contacts_ai5_widget_pane

0xe596,	// (0x00019e37) cell_contacts_ai5_widget_pane_g1

0xe5ab,	// (0x00019e4c) cell_contacts_ai5_widget_pane_g2

0xe5b7,	// (0x00019e58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea0,	// (0x0001b741) cell_contacts_ai5_widget_pane_g

0xe5c3,	// (0x00019e64) cell_contacts_ai5_widget_pane_t1

0x6631,	// (0x00011ed2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe638,	// (0x00019ed9) settings_container_pane

0x742e,	// (0x00012ccf) listscroll_set_pane_copy1

0x9943,	// (0x000151e4) scroll_pane_cp121_copy1

0xe644,	// (0x00019ee5) set_content_pane_copy1

0xe64c,	// (0x00019eed) aid_height_set_list_copy1_ParamLimits

0xe64c,	// (0x00019eed) aid_height_set_list_copy1

0x903b,	// (0x000148dc) aid_size_parent_copy1_ParamLimits

0x903b,	// (0x000148dc) aid_size_parent_copy1

0xe658,	// (0x00019ef9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe658,	// (0x00019ef9) button_value_adjust_pane_cp6_copy1

0x777d,	// (0x0001301e) list_highlight_pane_cp2_copy1_ParamLimits

0x777d,	// (0x0001301e) list_highlight_pane_cp2_copy1

0xe66c,	// (0x00019f0d) list_set_pane_copy1_ParamLimits

0xe66c,	// (0x00019f0d) list_set_pane_copy1

0xe5d5,	// (0x00019e76) main_pane_set_t1_copy1_ParamLimits

0xe5d5,	// (0x00019e76) main_pane_set_t1_copy1

0xe60f,	// (0x00019eb0) main_pane_set_t2_copy1_ParamLimits

0xe60f,	// (0x00019eb0) main_pane_set_t2_copy1

0xe6fa,	// (0x00019f9b) main_pane_set_t3_copy1

0xe708,	// (0x00019fa9) main_pane_set_t4_copy1

0xe62c,	// (0x00019ecd) set_content_pane_g1_copy1_ParamLimits

0xe62c,	// (0x00019ecd) set_content_pane_g1_copy1

0xe716,	// (0x00019fb7) setting_code_pane_copy1

0xe71e,	// (0x00019fbf) setting_slider_graphic_pane_copy1

0xe71e,	// (0x00019fbf) setting_slider_pane_copy1

0xe71e,	// (0x00019fbf) setting_text_pane_copy1

0xe71e,	// (0x00019fbf) setting_volume_pane_copy1

0xe726,	// (0x00019fc7) settings_code_pane_cp2_copy1

0xe72e,	// (0x00019fcf) settings_code_pane_cp_copy1_ParamLimits

0xe72e,	// (0x00019fcf) settings_code_pane_cp_copy1

0x54eb,	// (0x00010d8c) volume_set_pane_copy1

0xe742,	// (0x00019fe3) volume_set_pane_g10_copy1

0xe74a,	// (0x00019feb) volume_set_pane_g1_copy1

0xe752,	// (0x00019ff3) volume_set_pane_g2_copy1

0xe75a,	// (0x00019ffb) volume_set_pane_g3_copy1

0xe762,	// (0x0001a003) volume_set_pane_g4_copy1

0xe76a,	// (0x0001a00b) volume_set_pane_g5_copy1

0xe772,	// (0x0001a013) volume_set_pane_g6_copy1

0xe77a,	// (0x0001a01b) volume_set_pane_g7_copy1

0xe782,	// (0x0001a023) volume_set_pane_g8_copy1

0xe78a,	// (0x0001a02b) volume_set_pane_g9_copy1

0x5932,	// (0x000111d3) bg_set_opt_pane_cp_copy1_ParamLimits

0x5932,	// (0x000111d3) bg_set_opt_pane_cp_copy1

0x54f3,	// (0x00010d94) setting_slider_pane_t1_copy1_ParamLimits

0x54f3,	// (0x00010d94) setting_slider_pane_t1_copy1

0x550a,	// (0x00010dab) setting_slider_pane_t2_copy1_ParamLimits

0x550a,	// (0x00010dab) setting_slider_pane_t2_copy1

0x5523,	// (0x00010dc4) setting_slider_pane_t3_copy1_ParamLimits

0x5523,	// (0x00010dc4) setting_slider_pane_t3_copy1

0x37eb,	// (0x0000f08c) slider_set_pane_copy1_ParamLimits

0x37eb,	// (0x0000f08c) slider_set_pane_copy1

0x6754,	// (0x00011ff5) set_opt_bg_pane_g1_copy2

0x675c,	// (0x00011ffd) set_opt_bg_pane_g2_copy2

0xe792,	// (0x0001a033) set_opt_bg_pane_g3_copy2

0x676c,	// (0x0001200d) set_opt_bg_pane_g4_copy2

0x6774,	// (0x00012015) set_opt_bg_pane_g5_copy2

0x677c,	// (0x0001201d) set_opt_bg_pane_g6_copy2

0xe79a,	// (0x0001a03b) set_opt_bg_pane_g7_copy2

0xe7a2,	// (0x0001a043) set_opt_bg_pane_g8_copy2

0xe7aa,	// (0x0001a04b) set_opt_bg_pane_g9_copy2

0x4579,	// (0x0000fe1a) aid_size_touch_slider_mark_copy1_ParamLimits

0x4579,	// (0x0000fe1a) aid_size_touch_slider_mark_copy1

0x9171,	// (0x00014a12) slider_set_pane_g1_copy1

0x9193,	// (0x00014a34) slider_set_pane_g2_copy1

0x4599,	// (0x0000fe3a) slider_set_pane_g3_copy1_ParamLimits

0x4599,	// (0x0000fe3a) slider_set_pane_g3_copy1

0x45ad,	// (0x0000fe4e) slider_set_pane_g4_copy1_ParamLimits

0x45ad,	// (0x0000fe4e) slider_set_pane_g4_copy1

0x45c5,	// (0x0000fe66) slider_set_pane_g5_copy1_ParamLimits

0x45c5,	// (0x0000fe66) slider_set_pane_g5_copy1

0x4599,	// (0x0000fe3a) slider_set_pane_g6_copy1_ParamLimits

0x4599,	// (0x0000fe3a) slider_set_pane_g6_copy1

0x553a,	// (0x00010ddb) slider_set_pane_g7_copy1_ParamLimits

0x553a,	// (0x00010ddb) slider_set_pane_g7_copy1

0x5852,	// (0x000110f3) bg_set_opt_pane_cp2_copy1

0x5974,	// (0x00011215) setting_slider_graphic_pane_g1_copy1

0x5550,	// (0x00010df1) setting_slider_graphic_pane_t1_copy1

0x555f,	// (0x00010e00) setting_slider_graphic_pane_t2_copy1

0x556e,	// (0x00010e0f) slider_set_pane_cp_copy1

0xe7ba,	// (0x0001a05b) input_focus_pane_cp1_copy1

0xe7c3,	// (0x0001a064) list_set_text_pane_copy1

0xe7cb,	// (0x0001a06c) setting_text_pane_g1_copy1

0xe7d4,	// (0x0001a075) set_text_pane_t1_copy1

0xe7ba,	// (0x0001a05b) input_focus_pane_cp2_copy1

0xe7cb,	// (0x0001a06c) setting_code_pane_g1_copy1

0xe7ed,	// (0x0001a08e) setting_code_pane_t1_copy1

0xdf81,	// (0x00019822) list_set_graphic_pane_copy1

0x5852,	// (0x000110f3) bg_set_opt_pane_cp4_copy1

0x718a,	// (0x00012a2b) list_set_graphic_pane_g1_copy1_ParamLimits

0x718a,	// (0x00012a2b) list_set_graphic_pane_g1_copy1

0xe7fb,	// (0x0001a09c) list_set_graphic_pane_g2_copy1

0x71a2,	// (0x00012a43) list_set_graphic_pane_t1_copy1_ParamLimits

0x71a2,	// (0x00012a43) list_set_graphic_pane_t1_copy1

0xa3fe,	// (0x00015c9f) rs_clock_indi_pane_g1

0xe803,	// (0x0001a0a4) rs_clock_indi_pane_t1

0xe811,	// (0x0001a0b2) rs_indi_pane

0xe819,	// (0x0001a0ba) rs_indi_pane_g1

0xe822,	// (0x0001a0c3) rs_indi_pane_g2

0xe581,	// (0x00019e22) rs_indi_pane_g3

0x0002,

0xfea7,	// (0x0001b748) rs_indi_pane_g

0x742e,	// (0x00012ccf) bg_popup_preview_window_pane_cp03

0xe82b,	// (0x0001a0cc) popup_fep_tooltip_window_t1

0xb1e9,	// (0x00016a8a) popup_note2_window_g2_ParamLimits

0xb1e9,	// (0x00016a8a) popup_note2_window_g2

0x0001,

0xfc3b,	// (0x0001b4dc) popup_note2_window_g_ParamLimits

0xfc3b,	// (0x0001b4dc) popup_note2_window_g

0xb7ca,	// (0x0001706b) bg_popup_sub_pane_cp11_ParamLimits

0xb7d7,	// (0x00017078) cell_ai3_links_pane_g1_ParamLimits

0xb7ee,	// (0x0001708f) cell_ai3_links_pane_t1

0xe7d4,	// (0x0001a075) set_text_pane_t1_copy1_ParamLimits

0x734e,	// (0x00012bef) cell_graphic_popup_pane_cp2_ParamLimits

0x734e,	// (0x00012bef) cell_graphic_popup_pane_cp2

0xe839,	// (0x0001a0da) cell_graphic_popup_pane_g1_cp2

0x5f17,	// (0x000117b8) cell_graphic_popup_pane_g2_cp2

0xe841,	// (0x0001a0e2) cell_graphic_popup_pane_g3_cp2

0xe849,	// (0x0001a0ea) cell_graphic_popup_pane_t2_cp2

0x5f28,	// (0x000117c9) grid_highlight_pane_cp3_cp2

0x6b51,	// (0x000123f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6631,	// (0x00011ed2) main_tmo_pane_ParamLimits

0x1c65,	// (0x0000d506) popup_tmo_big_image_note_window

0xe244,	// (0x00019ae5) cell_ai5_widget_list_pane

0x2b5e,	// (0x0000e3ff) cell_ai5_widget_lrg_icon_pane

0x2ff2,	// (0x0000e893) tmo_note_info_pane_t1_ParamLimits

0x3007,	// (0x0000e8a8) tmo_note_info_pane_t2_ParamLimits

0x301c,	// (0x0000e8bd) tmo_note_info_pane_t3_ParamLimits

0xe4fe,	// (0x00019d9f) tmo_note_info_pane_t4_ParamLimits

0xe510,	// (0x00019db1) tmo_note_info_pane_t5_ParamLimits

0xfe95,	// (0x0001b736) tmo_note_info_pane_t_ParamLimits

0xe638,	// (0x00019ed9) settings_container_pane_ParamLimits

0xe7b2,	// (0x0001a053) indicator_popup_pane_cp5

0xe7b2,	// (0x0001a053) indicator_popup_pane_cp6

0xdf81,	// (0x00019822) list_set_graphic_pane_copy1_ParamLimits

0x5761,	// (0x00011002) bg_popup_window_pane_cp23

0xe857,	// (0x0001a0f8) popup_tmo_big_image_note_window_g1

0xe860,	// (0x0001a101) popup_tmo_big_image_note_window_t1

0xe86e,	// (0x0001a10f) popup_tmo_big_image_note_window_t2

0xe87c,	// (0x0001a11d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeae,	// (0x0001b74f) popup_tmo_big_image_note_window_t

0xa3fe,	// (0x00015c9f) cell_ai5_widget_lrg_icon_pane_g1

0xe88a,	// (0x0001a12b) cell_ai5_widget_lrg_icon_pane_t1

0x3031,	// (0x0000e8d2) cell_ai5_widget_list_row_pane_ParamLimits

0x3031,	// (0x0000e8d2) cell_ai5_widget_list_row_pane

0x3048,	// (0x0000e8e9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3048,	// (0x0000e8e9) cell_ai5_widget_list_row_pane_g1

0x3055,	// (0x0000e8f6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3055,	// (0x0000e8f6) cell_ai5_widget_list_row_pane_t1

0x3086,	// (0x0000e927) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3086,	// (0x0000e927) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb5,	// (0x0001b756) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb5,	// (0x0001b756) cell_ai5_widget_list_row_pane_t

0x3594,	// (0x0000ee35) main_fep_vtchi_ss_pane

0xe8a5,	// (0x0001a146) popup_fep_char_pre_window

0xe8ad,	// (0x0001a14e) popup_fep_ituss_window

0x30d7,	// (0x0000e978) popup_fep_vkbss_window

0xe8e8,	// (0x0001a189) grid_vkbss_keypad_pane_ParamLimits

0xe8e8,	// (0x0001a189) grid_vkbss_keypad_pane

0xe8f8,	// (0x0001a199) ituss_keypad_pane

0x557e,	// (0x00010e1f) aid_vkbss_key_offset_ParamLimits

0x557e,	// (0x00010e1f) aid_vkbss_key_offset

0x558a,	// (0x00010e2b) cell_vkbss_key_pane_ParamLimits

0x558a,	// (0x00010e2b) cell_vkbss_key_pane

0xe904,	// (0x0001a1a5) bg_cell_vkbss_key_g1_ParamLimits

0xe904,	// (0x0001a1a5) bg_cell_vkbss_key_g1

0xe910,	// (0x0001a1b1) cell_vkbss_key_3p_pane_ParamLimits

0xe910,	// (0x0001a1b1) cell_vkbss_key_3p_pane

0xe946,	// (0x0001a1e7) cell_vkbss_key_g1_ParamLimits

0xe946,	// (0x0001a1e7) cell_vkbss_key_g1

0xe97c,	// (0x0001a21d) cell_vkbss_key_t1_ParamLimits

0xe97c,	// (0x0001a21d) cell_vkbss_key_t1

0x55be,	// (0x00010e5f) cell_ituss_key_pane_ParamLimits

0x55be,	// (0x00010e5f) cell_ituss_key_pane

0xe9ec,	// (0x0001a28d) bg_cell_ituss_key_g1_ParamLimits

0xe9ec,	// (0x0001a28d) bg_cell_ituss_key_g1

0xe9f8,	// (0x0001a299) cell_ituss_key_pane_g1_ParamLimits

0xe9f8,	// (0x0001a299) cell_ituss_key_pane_g1

0x55cf,	// (0x00010e70) cell_ituss_key_pane_g2_ParamLimits

0x55cf,	// (0x00010e70) cell_ituss_key_pane_g2

0x0005,

0xfebc,	// (0x0001b75d) cell_ituss_key_pane_g_ParamLimits

0xfebc,	// (0x0001b75d) cell_ituss_key_pane_g

0x5653,	// (0x00010ef4) cell_ituss_key_t1_ParamLimits

0x5653,	// (0x00010ef4) cell_ituss_key_t1

0x5689,	// (0x00010f2a) cell_ituss_key_t2_ParamLimits

0x5689,	// (0x00010f2a) cell_ituss_key_t2

0x56bb,	// (0x00010f5c) cell_ituss_key_t3_ParamLimits

0x56bb,	// (0x00010f5c) cell_ituss_key_t3

0x56ec,	// (0x00010f8d) cell_ituss_key_t4_ParamLimits

0x56ec,	// (0x00010f8d) cell_ituss_key_t4

0x0004,

0xfec9,	// (0x0001b76a) cell_ituss_key_t_ParamLimits

0xfec9,	// (0x0001b76a) cell_ituss_key_t

0xea1e,	// (0x0001a2bf) cell_vkbss_key_3p_pane_g1

0xea26,	// (0x0001a2c7) cell_vkbss_key_3p_pane_g2

0xea2e,	// (0x0001a2cf) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed4,	// (0x0001b775) cell_vkbss_key_3p_pane_g

0x742e,	// (0x00012ccf) bg_popup_fep_char_preview_window_cp02

0xea36,	// (0x0001a2d7) popup_fep_char_pre_window_t1

0x2b4b,	// (0x0000e3ec) main_ai5_sk_pane

0xe58a,	// (0x00019e2b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe596,	// (0x00019e37) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe5ab,	// (0x00019e4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe5b7,	// (0x00019e58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea0,	// (0x0001b741) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe5c3,	// (0x00019e64) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6631,	// (0x00011ed2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x30e4,	// (0x0000e985) main_ai5_sk_pane_g1

0x81a8,	// (0x00013a49) popup_query_code_window_g1

0x30c9,	// (0x0000e96a) popup_fep_vkb_icf_pane

0xe8bf,	// (0x0001a160) popup_fep_vtchi_icf_pane

0xea44,	// (0x0001a2e5) bg_icf_pane

0xea44,	// (0x0001a2e5) list_vkb_icf_pane

0xea50,	// (0x0001a2f1) bg_icf_pane_cp01

0xea63,	// (0x0001a304) vtchi_icf_list_pane

0x3139,	// (0x0000e9da) list_vkb_icf_pane_t1_ParamLimits

0x3139,	// (0x0000e9da) list_vkb_icf_pane_t1

0xea73,	// (0x0001a314) vtchi_icf_list_pane_t1_ParamLimits

0xea73,	// (0x0001a314) vtchi_icf_list_pane_t1

0xe8ad,	// (0x0001a14e) popup_fep_ituss_window_ParamLimits

0xe8bf,	// (0x0001a160) popup_fep_vtchi_icf_pane_ParamLimits

0xe8f8,	// (0x0001a199) ituss_keypad_pane_ParamLimits

0x5576,	// (0x00010e17) ituss_sks_pane

0xea44,	// (0x0001a2e5) bg_icf_pane_ParamLimits

0x30ae,	// (0x0000e94f) icf_edit_indi_pane_ParamLimits

0x30ae,	// (0x0000e94f) icf_edit_indi_pane

0xea44,	// (0x0001a2e5) list_vkb_icf_pane_ParamLimits

0xea50,	// (0x0001a2f1) bg_icf_pane_cp01_ParamLimits

0xe898,	// (0x0001a139) icf_edit_indi_pane_cp01_ParamLimits

0xe898,	// (0x0001a139) icf_edit_indi_pane_cp01

0xea6b,	// (0x0001a30c) vtchi_query_pane

0xe190,	// (0x00019a31) icf_edit_indi_pane_g1_ParamLimits

0xe190,	// (0x00019a31) icf_edit_indi_pane_g1

0x3150,	// (0x0000e9f1) icf_edit_indi_pane_g2_ParamLimits

0x3150,	// (0x0000e9f1) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0001b7a0) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0001b7a0) icf_edit_indi_pane_g

0x3162,	// (0x0000ea03) icf_edit_indi_pane_t1

0xea8b,	// (0x0001a32c) bg_input_focus_pane_cp042

0xea94,	// (0x0001a335) vtchi_button_pane

0xea9d,	// (0x0001a33e) vtchi_query_pane_t1

0xeaab,	// (0x0001a34c) vtchi_query_pane_t2

0xeab9,	// (0x0001a35a) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0001b78f) vtchi_query_pane_t

0x3594,	// (0x0000ee35) bg_button_pane_cp13

0xeac7,	// (0x0001a368) vtchi_button_pane_g1

0x572f,	// (0x00010fd0) ituss_sks_pane_g1

0x5738,	// (0x00010fd9) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0001b796) ituss_sks_pane_g

0xeacf,	// (0x0001a370) ituss_sks_pane_t1

0xeadd,	// (0x0001a37e) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0001b79b) ituss_sks_pane_t

0x9ef9,	// (0x0001579a) indicator_nsta_pane_cp_g1

0x9f02,	// (0x000157a3) indicator_nsta_pane_cp_g2

0x9f0a,	// (0x000157ab) indicator_nsta_pane_cp_g3

0x9f12,	// (0x000157b3) indicator_nsta_pane_cp_g4

0x9f1a,	// (0x000157bb) indicator_nsta_pane_cp_g5

0x9f22,	// (0x000157c3) indicator_nsta_pane_cp_g6

0x0005,

0xfa79,	// (0x0001b31a) indicator_nsta_pane_cp_g

0x2934,	// (0x0000e1d5) cell_graphic2_pane_t2_ParamLimits

0x2934,	// (0x0000e1d5) cell_graphic2_pane_t2

0x0001,

0xfd8b,	// (0x0001b62c) cell_graphic2_pane_t_ParamLimits

0xfd8b,	// (0x0001b62c) cell_graphic2_pane_t

0x296c,	// (0x0000e20d) cell_graphic2_control_pane_t1

0x011e,	// (0x0000b9bf) signal_pane_g3_ParamLimits

0x011e,	// (0x0000b9bf) signal_pane_g3

0x0132,	// (0x0000b9d3) signal_pane_g4_ParamLimits

0x0132,	// (0x0000b9d3) signal_pane_g4

0x3098,	// (0x0000e939) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3098,	// (0x0000e939) cell_ai5_widget_list_row_pane_t3

0xea0c,	// (0x0001a2ad) cell_ituss_key_pane_t1_ParamLimits

0xea0c,	// (0x0001a2ad) cell_ituss_key_pane_t1

0x7e1e,	// (0x000136bf) form_field_data_wide_pane_vc_t2_ParamLimits

0x7e1e,	// (0x000136bf) form_field_data_wide_pane_vc_t2

0x7e30,	// (0x000136d1) form_field_data_wide_pane_vc_t3_ParamLimits

0x7e30,	// (0x000136d1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x0001b074) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x0001b074) form_field_data_wide_pane_vc_t

0x9be6,	// (0x00015487) form_field_slider_wide_pane_vc_t3_ParamLimits

0x9be6,	// (0x00015487) form_field_slider_wide_pane_vc_t3

0x9ca4,	// (0x00015545) form_field_popup_wide_pane_vc_t2_ParamLimits

0x9ca4,	// (0x00015545) form_field_popup_wide_pane_vc_t2

0x9cb9,	// (0x0001555a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x9cb9,	// (0x0001555a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa68,	// (0x0001b309) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa68,	// (0x0001b309) form_field_popup_wide_pane_vc_t

0xddfb,	// (0x0001969c) aid_fshwr2_btn_pane_ParamLimits

0xde0f,	// (0x000196b0) aid_fshwr2_syb_pane_ParamLimits

0xde23,	// (0x000196c4) aid_fshwr2_txt_pane_ParamLimits

0x4c39,	// (0x000104da) fshwr2_bg_pane_ParamLimits

0xde33,	// (0x000196d4) fshwr2_func_candi_pane_ParamLimits

0xde4b,	// (0x000196ec) fshwr2_hwr_syb_pane_ParamLimits

0xde63,	// (0x00019704) fshwr2_icf_pane_ParamLimits

0x9b61,	// (0x00015402) list_double_graphic_pane_vc_g4_ParamLimits

0x9b61,	// (0x00015402) list_double_graphic_pane_vc_g4

0x55ef,	// (0x00010e90) cell_ituss_key_pane_g3_ParamLimits

0x55ef,	// (0x00010e90) cell_ituss_key_pane_g3

0x571d,	// (0x00010fbe) cell_ituss_key_t5_ParamLimits

0x571d,	// (0x00010fbe) cell_ituss_key_t5

0x30d7,	// (0x0000e978) popup_fep_vkbss_window_ParamLimits

0x2b55,	// (0x0000e3f6) aid_cell_ai5_quarter

0x3162,	// (0x0000ea03) icf_edit_indi_pane_t1_ParamLimits

0x5c82,	// (0x00011523) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5c82,	// (0x00011523) aid_tch_indicator_popup_pane_cp2

0x5c95,	// (0x00011536) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x5c95,	// (0x00011536) aid_tch_query_popup_data_pane_cp2

0x8150,	// (0x000139f1) aid_tch_query_popup_pane_ParamLimits

0x8150,	// (0x000139f1) aid_tch_query_popup_pane

0x8150,	// (0x000139f1) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8150,	// (0x000139f1) aid_tch_query_popup_data_pane_cp1

0x777d,	// (0x0001301e) cell_fshwr2_syb_bg_pane_ParamLimits

0xdf57,	// (0x000197f8) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xdf6b,	// (0x0001980c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x30c9,	// (0x0000e96a) popup_fep_vkb_icf_pane_ParamLimits

0xdd99,	// (0x0001963a) bg_popup_fep_char_preview_window_g10

0x2c1d,	// (0x0000e4be) cell_ai5_widget_pane_g11_ParamLimits

0x2c1d,	// (0x0000e4be) cell_ai5_widget_pane_g11

0x2c29,	// (0x0000e4ca) cell_ai5_widget_pane_g12_ParamLimits

0x2c29,	// (0x0000e4ca) cell_ai5_widget_pane_g12

0x2c35,	// (0x0000e4d6) cell_ai5_widget_pane_g13_ParamLimits

0x2c35,	// (0x0000e4d6) cell_ai5_widget_pane_g13

0x2d33,	// (0x0000e5d4) cell_ai5_widget_pane_t11_ParamLimits

0x2d33,	// (0x0000e5d4) cell_ai5_widget_pane_t11

0x2d45,	// (0x0000e5e6) cell_ai5_widget_pane_t12_ParamLimits

0x2d45,	// (0x0000e5e6) cell_ai5_widget_pane_t12

0x55fb,	// (0x00010e9c) cell_ituss_key_pane_g4_ParamLimits

0x55fb,	// (0x00010e9c) cell_ituss_key_pane_g4

0x5617,	// (0x00010eb8) cell_ituss_key_pane_g5_ParamLimits

0x5617,	// (0x00010eb8) cell_ituss_key_pane_g5

0x5633,	// (0x00010ed4) cell_ituss_key_pane_g6_ParamLimits

0x5633,	// (0x00010ed4) cell_ituss_key_pane_g6

0x7c7a,	// (0x0001351b) bg_icf_pane_g1

0x30ed,	// (0x0000e98e) bg_icf_pane_g2

0x30f7,	// (0x0000e998) bg_icf_pane_g3

0x30ff,	// (0x0000e9a0) bg_icf_pane_g4

0x3109,	// (0x0000e9aa) bg_icf_pane_g5

0x3113,	// (0x0000e9b4) bg_icf_pane_g6

0x311d,	// (0x0000e9be) bg_icf_pane_g7

0x3125,	// (0x0000e9c6) bg_icf_pane_g8

0x312f,	// (0x0000e9d0) bg_icf_pane_g9

0x0008,

0xfedb,	// (0x0001b77c) bg_icf_pane_g

0xe8d5,	// (0x0001a176) popup_hyb_candi_window_ParamLimits

0xe8d5,	// (0x0001a176) popup_hyb_candi_window

0x7d92,	// (0x00013633) bg_popup_sub_pane_cp01_ParamLimits

0x7d92,	// (0x00013633) bg_popup_sub_pane_cp01

0xeaeb,	// (0x0001a38c) entry_hyb_candi_pane_ParamLimits

0xeaeb,	// (0x0001a38c) entry_hyb_candi_pane

0xeafa,	// (0x0001a39b) grid_hyb_candi_pane_ParamLimits

0xeafa,	// (0x0001a39b) grid_hyb_candi_pane

0xeb90,	// (0x0001a431) grid_hyb_phrase_pane_ParamLimits

0xeb90,	// (0x0001a431) grid_hyb_phrase_pane

0xeb9f,	// (0x0001a440) cell_hyb_candi_pane_ParamLimits

0xeb9f,	// (0x0001a440) cell_hyb_candi_pane

0xebb7,	// (0x0001a458) cell_hyb_candi_scroll_pane

0x6dff,	// (0x000126a0) cell_hyb_candi_pane_g1

0xebc0,	// (0x0001a461) cell_hyb_candi_pane_t1

0xebce,	// (0x0001a46f) cell_hyb_phrase_pane

0x6dff,	// (0x000126a0) cell_hyb_phrase_pane_g1

0xebd7,	// (0x0001a478) cell_hyb_phrase_pane_t1

0xebe5,	// (0x0001a486) entry_hyb_candi_pane_t1

0x742e,	// (0x00012ccf) input_focus_pane_cp06

0xebf3,	// (0x0001a494) cell_hyb_candi_scroll_pane_g1

0xebfb,	// (0x0001a49c) cell_hyb_candi_scroll_pane_g1_aid

0xec03,	// (0x0001a4a4) cell_hyb_candi_scroll_pane_g2

0xec0b,	// (0x0001a4ac) cell_hyb_candi_scroll_pane_g2_aid

0xec13,	// (0x0001a4b4) cell_hyb_candi_scroll_pane_g3

0xec1b,	// (0x0001a4bc) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal

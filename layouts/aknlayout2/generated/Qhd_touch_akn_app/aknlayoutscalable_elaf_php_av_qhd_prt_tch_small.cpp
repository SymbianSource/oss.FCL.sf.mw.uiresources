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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001ad0c };

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
0x7e24,	// (0x00022b30) Screen

0x7e38,	// (0x00022b44) application_window_ParamLimits

0x7e38,	// (0x00022b44) application_window

0x7e52,	// (0x00022b5e) screen_g1

0x5b11,	// (0x0002081d) area_bottom_pane_ParamLimits

0x5b11,	// (0x0002081d) area_bottom_pane

0x5bd1,	// (0x000208dd) area_top_pane_ParamLimits

0x5bd1,	// (0x000208dd) area_top_pane

0x5c65,	// (0x00020971) main_pane_ParamLimits

0x5c65,	// (0x00020971) main_pane

0x7e5c,	// (0x00022b68) misc_graphics

0x9815,	// (0x00024521) battery_pane_ParamLimits

0x9815,	// (0x00024521) battery_pane

0xa4e7,	// (0x000251f3) bg_status_flat_pane_g8

0xa4ef,	// (0x000251fb) bg_status_flat_pane_g9

0x98d7,	// (0x000245e3) context_pane_ParamLimits

0x98d7,	// (0x000245e3) context_pane

0x99ed,	// (0x000246f9) navi_pane_ParamLimits

0x99ed,	// (0x000246f9) navi_pane

0x9a71,	// (0x0002477d) signal_pane_ParamLimits

0x9a71,	// (0x0002477d) signal_pane

0x0008,

0xf872,	// (0x0002a57e) bg_status_flat_pane_g

0x9ade,	// (0x000247ea) status_pane_g1_ParamLimits

0x9ade,	// (0x000247ea) status_pane_g1

0x9af2,	// (0x000247fe) status_pane_g2_ParamLimits

0x9af2,	// (0x000247fe) status_pane_g2

0x9afe,	// (0x0002480a) status_pane_g3_ParamLimits

0x9afe,	// (0x0002480a) status_pane_g3

0x0004,

0xf7a0,	// (0x0002a4ac) status_pane_g_ParamLimits

0xf7a0,	// (0x0002a4ac) status_pane_g

0x9b32,	// (0x0002483e) title_pane_ParamLimits

0x9b32,	// (0x0002483e) title_pane

0x9b6f,	// (0x0002487b) uni_indicator_pane_ParamLimits

0x9b6f,	// (0x0002487b) uni_indicator_pane

0x9739,	// (0x00024445) bg_list_pane_ParamLimits

0x9739,	// (0x00024445) bg_list_pane

0x512f,	// (0x0001fe3b) find_pane

0x9759,	// (0x00024465) listscroll_app_pane_ParamLimits

0x9759,	// (0x00024465) listscroll_app_pane

0x9765,	// (0x00024471) listscroll_form_pane

0x5137,	// (0x0001fe43) listscroll_gen_pane_ParamLimits

0x5137,	// (0x0001fe43) listscroll_gen_pane

0x6530,	// (0x0002123c) listscroll_set_pane

0x898f,	// (0x0002369b) main_idle_act_pane

0x9441,	// (0x0002414d) main_idle_trad_pane

0x9441,	// (0x0002414d) main_list_empty_pane

0x977f,	// (0x0002448b) main_midp_pane

0x978b,	// (0x00024497) main_pane_g1_ParamLimits

0x978b,	// (0x00024497) main_pane_g1

0x6538,	// (0x00021244) popup_ai_message_window_ParamLimits

0x6538,	// (0x00021244) popup_ai_message_window

0x65de,	// (0x000212ea) popup_fep_china_uni_window_ParamLimits

0x65de,	// (0x000212ea) popup_fep_china_uni_window

0x663a,	// (0x00021346) popup_fep_japan_candidate_window_ParamLimits

0x663a,	// (0x00021346) popup_fep_japan_candidate_window

0x665a,	// (0x00021366) popup_fep_japan_predictive_window_ParamLimits

0x665a,	// (0x00021366) popup_fep_japan_predictive_window

0x668a,	// (0x00021396) popup_find_window

0x6697,	// (0x000213a3) popup_grid_graphic_window_ParamLimits

0x6697,	// (0x000213a3) popup_grid_graphic_window

0x66c1,	// (0x000213cd) popup_large_graphic_colour_window

0x66e7,	// (0x000213f3) popup_menu_window_ParamLimits

0x66e7,	// (0x000213f3) popup_menu_window

0x689f,	// (0x000215ab) popup_note_image_window

0x688b,	// (0x00021597) popup_note_wait_window_ParamLimits

0x688b,	// (0x00021597) popup_note_wait_window

0x688b,	// (0x00021597) popup_note_window_ParamLimits

0x688b,	// (0x00021597) popup_note_window

0x68f5,	// (0x00021601) popup_query_code_window_ParamLimits

0x68f5,	// (0x00021601) popup_query_code_window

0x6909,	// (0x00021615) popup_query_data_code_window_ParamLimits

0x6909,	// (0x00021615) popup_query_data_code_window

0x6926,	// (0x00021632) popup_query_data_window_ParamLimits

0x6926,	// (0x00021632) popup_query_data_window

0x6942,	// (0x0002164e) popup_query_sat_info_window_ParamLimits

0x6942,	// (0x0002164e) popup_query_sat_info_window

0x697b,	// (0x00021687) popup_snote_single_graphic_window_ParamLimits

0x697b,	// (0x00021687) popup_snote_single_graphic_window

0x697b,	// (0x00021687) popup_snote_single_text_window_ParamLimits

0x697b,	// (0x00021687) popup_snote_single_text_window

0x6990,	// (0x0002169c) popup_sub_window_general

0x6ac0,	// (0x000217cc) popup_window_general_ParamLimits

0x6ac0,	// (0x000217cc) popup_window_general

0x9799,	// (0x000244a5) power_save_pane

0x63cc,	// (0x000210d8) control_pane_g1_ParamLimits

0x63cc,	// (0x000210d8) control_pane_g1

0x63f3,	// (0x000210ff) control_pane_g2_ParamLimits

0x63f3,	// (0x000210ff) control_pane_g2

0x96fc,	// (0x00024408) control_pane_g3_ParamLimits

0x96fc,	// (0x00024408) control_pane_g3

0x0007,

0xf788,	// (0x0002a494) control_pane_g_ParamLimits

0xf788,	// (0x0002a494) control_pane_g

0x643d,	// (0x00021149) control_pane_t1_ParamLimits

0x643d,	// (0x00021149) control_pane_t1

0x6489,	// (0x00021195) control_pane_t2_ParamLimits

0x6489,	// (0x00021195) control_pane_t2

0x0002,

0xf799,	// (0x0002a4a5) control_pane_t_ParamLimits

0xf799,	// (0x0002a4a5) control_pane_t

0x9621,	// (0x0002432d) navi_navi_volume_pane_cp1

0x9629,	// (0x00024335) status_small_icon_pane

0x9631,	// (0x0002433d) status_small_pane_g1_ParamLimits

0x9631,	// (0x0002433d) status_small_pane_g1

0x9665,	// (0x00024371) status_small_pane_g2_ParamLimits

0x9665,	// (0x00024371) status_small_pane_g2

0x9671,	// (0x0002437d) status_small_pane_g3_ParamLimits

0x9671,	// (0x0002437d) status_small_pane_g3

0x967d,	// (0x00024389) status_small_pane_g4_ParamLimits

0x967d,	// (0x00024389) status_small_pane_g4

0x9689,	// (0x00024395) status_small_pane_g5_ParamLimits

0x9689,	// (0x00024395) status_small_pane_g5

0x9697,	// (0x000243a3) status_small_pane_g6_ParamLimits

0x9697,	// (0x000243a3) status_small_pane_g6

0x0007,

0xf777,	// (0x0002a483) status_small_pane_g_ParamLimits

0xf777,	// (0x0002a483) status_small_pane_g

0x96c6,	// (0x000243d2) status_small_pane_t1

0x96e8,	// (0x000243f4) status_small_wait_pane_ParamLimits

0x96e8,	// (0x000243f4) status_small_wait_pane

0x8eb3,	// (0x00023bbf) aid_levels_signal_ParamLimits

0x8eb3,	// (0x00023bbf) aid_levels_signal

0x8ec5,	// (0x00023bd1) signal_pane_g1_ParamLimits

0x8ec5,	// (0x00023bd1) signal_pane_g1

0x8eda,	// (0x00023be6) signal_pane_g2_ParamLimits

0x8eda,	// (0x00023be6) signal_pane_g2

0x0003,

0xf708,	// (0x0002a414) signal_pane_g_ParamLimits

0xf708,	// (0x0002a414) signal_pane_g

0x8f15,	// (0x00023c21) context_pane_g1

0x7e66,	// (0x00022b72) title_pane_g1

0x7e9c,	// (0x00022ba8) title_pane_t1

0x7f04,	// (0x00022c10) title_pane_t2

0x7f2a,	// (0x00022c36) title_pane_t3

0x0002,

0xf557,	// (0x0002a263) title_pane_t

0x9b87,	// (0x00024893) aid_levels_battery_ParamLimits

0x9b87,	// (0x00024893) aid_levels_battery

0x9b9b,	// (0x000248a7) battery_pane_g1_ParamLimits

0x9b9b,	// (0x000248a7) battery_pane_g1

0x9bb1,	// (0x000248bd) battery_pane_g2_ParamLimits

0x9bb1,	// (0x000248bd) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002a4b7) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002a4b7) battery_pane_g

0xae1d,	// (0x00025b29) uni_indicator_pane_g1

0xae33,	// (0x00025b3f) uni_indicator_pane_g2

0xae49,	// (0x00025b55) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a626) uni_indicator_pane_g

0x92b3,	// (0x00023fbf) navi_icon_pane_ParamLimits

0x92b3,	// (0x00023fbf) navi_icon_pane

0x91f1,	// (0x00023efd) navi_midp_pane

0x92cf,	// (0x00023fdb) navi_navi_pane

0x92d9,	// (0x00023fe5) navi_text_pane_ParamLimits

0x92d9,	// (0x00023fe5) navi_text_pane

0x7e52,	// (0x00022b5e) status_small_wait_pane_g1

0x8359,	// (0x00023065) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a621) status_small_wait_pane_g

0xab42,	// (0x0002584e) navi_navi_icon_text_pane

0xab4a,	// (0x00025856) navi_navi_pane_g1_ParamLimits

0xab4a,	// (0x00025856) navi_navi_pane_g1

0xab5c,	// (0x00025868) navi_navi_pane_g2_ParamLimits

0xab5c,	// (0x00025868) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a5ef) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a5ef) navi_navi_pane_g

0xab6e,	// (0x0002587a) navi_navi_tabs_pane

0xab77,	// (0x00025883) navi_navi_text_pane

0xab42,	// (0x0002584e) navi_navi_volume_pane

0xab1e,	// (0x0002582a) navi_text_pane_t1

0xab12,	// (0x0002581e) navi_icon_pane_g1

0xaa65,	// (0x00025771) navi_navi_text_pane_t1

0x6d4a,	// (0x00021a56) navi_navi_volume_pane_g1

0x6d52,	// (0x00021a5e) volume_small_pane

0xa9cb,	// (0x000256d7) navi_navi_icon_text_pane_g1

0xa9d3,	// (0x000256df) navi_navi_icon_text_pane_t1

0x92cf,	// (0x00023fdb) navi_tabs_2_long_pane

0x92cf,	// (0x00023fdb) navi_tabs_2_pane

0x92cf,	// (0x00023fdb) navi_tabs_3_long_pane

0x92cf,	// (0x00023fdb) navi_tabs_3_pane

0x92cf,	// (0x00023fdb) navi_tabs_4_pane

0x6d2a,	// (0x00021a36) tabs_2_active_pane_ParamLimits

0x6d2a,	// (0x00021a36) tabs_2_active_pane

0x6d3a,	// (0x00021a46) tabs_2_passive_pane_ParamLimits

0x6d3a,	// (0x00021a46) tabs_2_passive_pane

0x6cf8,	// (0x00021a04) tabs_3_active_pane_ParamLimits

0x6cf8,	// (0x00021a04) tabs_3_active_pane

0x6d08,	// (0x00021a14) tabs_3_passive_pane_ParamLimits

0x6d08,	// (0x00021a14) tabs_3_passive_pane

0x6d19,	// (0x00021a25) tabs_3_passive_pane_cp_ParamLimits

0x6d19,	// (0x00021a25) tabs_3_passive_pane_cp

0x6cb4,	// (0x000219c0) tabs_4_active_pane_ParamLimits

0x6cb4,	// (0x000219c0) tabs_4_active_pane

0x6cc5,	// (0x000219d1) tabs_4_passive_pane_ParamLimits

0x6cc5,	// (0x000219d1) tabs_4_passive_pane

0x6cd6,	// (0x000219e2) tabs_4_passive_pane_cp_ParamLimits

0x6cd6,	// (0x000219e2) tabs_4_passive_pane_cp

0x6ce7,	// (0x000219f3) tabs_4_passive_pane_cp2_ParamLimits

0x6ce7,	// (0x000219f3) tabs_4_passive_pane_cp2

0x6c90,	// (0x0002199c) tabs_2_long_active_pane_ParamLimits

0x6c90,	// (0x0002199c) tabs_2_long_active_pane

0x6ca2,	// (0x000219ae) tabs_2_long_passive_pane_ParamLimits

0x6ca2,	// (0x000219ae) tabs_2_long_passive_pane

0x6c51,	// (0x0002195d) tabs_3_long_active_pane_ParamLimits

0x6c51,	// (0x0002195d) tabs_3_long_active_pane

0x6c64,	// (0x00021970) tabs_3_long_passive_pane_ParamLimits

0x6c64,	// (0x00021970) tabs_3_long_passive_pane

0x6c7d,	// (0x00021989) tabs_3_long_passive_pane_cp_ParamLimits

0x6c7d,	// (0x00021989) tabs_3_long_passive_pane_cp

0x6bf7,	// (0x00021903) volume_small_pane_g1

0x6c00,	// (0x0002190c) volume_small_pane_g2

0x6c09,	// (0x00021915) volume_small_pane_g3

0x6c12,	// (0x0002191e) volume_small_pane_g4

0x6c1b,	// (0x00021927) volume_small_pane_g5

0x6c24,	// (0x00021930) volume_small_pane_g6

0x6c2d,	// (0x00021939) volume_small_pane_g7

0x6c36,	// (0x00021942) volume_small_pane_g8

0x6c3f,	// (0x0002194b) volume_small_pane_g9

0x6c48,	// (0x00021954) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a5bb) volume_small_pane_g

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp2_ParamLimits

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp2

0x7f4a,	// (0x00022c56) tabs_3_active_pane_g1

0x7f52,	// (0x00022c5e) tabs_3_active_pane_t1

0x7f3c,	// (0x00022c48) bg_passive_tab_pane_cp2_ParamLimits

0x7f3c,	// (0x00022c48) bg_passive_tab_pane_cp2

0x7f4a,	// (0x00022c56) tabs_3_passive_pane_g1

0x7f52,	// (0x00022c5e) tabs_3_passive_pane_t1

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp3_ParamLimits

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp3

0x7f64,	// (0x00022c70) tabs_4_active_pane_g1

0x7f6c,	// (0x00022c78) tabs_4_active_pane_t1

0x7f3c,	// (0x00022c48) bg_passive_tab_pane_cp3_ParamLimits

0x7f3c,	// (0x00022c48) bg_passive_tab_pane_cp3

0x7f64,	// (0x00022c70) tabs_4_1_passive_pane_g1

0x7f6c,	// (0x00022c78) tabs_4_1_passive_pane_t1

0x977f,	// (0x0002448b) list_highlight_pane_cp2

0xb091,	// (0x00025d9d) list_set_pane_ParamLimits

0xb091,	// (0x00025d9d) list_set_pane

0xb137,	// (0x00025e43) main_pane_set_t1_ParamLimits

0xb137,	// (0x00025e43) main_pane_set_t1

0xb157,	// (0x00025e63) main_pane_set_t2_ParamLimits

0xb157,	// (0x00025e63) main_pane_set_t2

0xb16b,	// (0x00025e77) main_pane_set_t3_ParamLimits

0xb16b,	// (0x00025e77) main_pane_set_t3

0xb17d,	// (0x00025e89) main_pane_set_t4_ParamLimits

0xb17d,	// (0x00025e89) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a68b) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a68b) main_pane_set_t

0xb18f,	// (0x00025e9b) setting_code_pane

0xb19b,	// (0x00025ea7) setting_slider_graphic_pane

0xb19b,	// (0x00025ea7) setting_slider_pane

0xb19b,	// (0x00025ea7) setting_text_pane

0xb19b,	// (0x00025ea7) setting_volume_pane

0x5eb4,	// (0x00020bc0) volume_set_pane

0x7f3c,	// (0x00022c48) bg_set_opt_pane_cp

0x5ebc,	// (0x00020bc8) setting_slider_pane_t1

0x5ed5,	// (0x00020be1) setting_slider_pane_t2

0x5eef,	// (0x00020bfb) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002a26a) setting_slider_pane_t

0x5f07,	// (0x00020c13) slider_set_pane

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp2

0x7f7e,	// (0x00022c8a) setting_slider_graphic_pane_g1

0x5f1d,	// (0x00020c29) setting_slider_graphic_pane_t1

0x5f2d,	// (0x00020c39) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002a271) setting_slider_graphic_pane_t

0x5f3d,	// (0x00020c49) slider_set_pane_cp

0x7e5c,	// (0x00022b68) input_focus_pane_cp1

0xb050,	// (0x00025d5c) list_set_text_pane

0x7e52,	// (0x00022b5e) setting_text_pane_g1

0x7e5c,	// (0x00022b68) input_focus_pane_cp2

0x7e52,	// (0x00022b5e) setting_code_pane_g1

0x7f87,	// (0x00022c93) setting_code_pane_t1

0x4982,	// (0x0001f68e) set_text_pane_t1_ParamLimits

0x4982,	// (0x0001f68e) set_text_pane_t1

0x8806,	// (0x00023512) set_opt_bg_pane_g1

0x880e,	// (0x0002351a) set_opt_bg_pane_g2

0xb02a,	// (0x00025d36) set_opt_bg_pane_g3

0x881e,	// (0x0002352a) set_opt_bg_pane_g4

0x8826,	// (0x00023532) set_opt_bg_pane_g5

0x882e,	// (0x0002353a) set_opt_bg_pane_g6

0xb034,	// (0x00025d40) set_opt_bg_pane_g7

0xb03c,	// (0x00025d48) set_opt_bg_pane_g8

0xb046,	// (0x00025d52) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a678) set_opt_bg_pane_g

0xb01d,	// (0x00025d29) slider_set_pane_g1

0x6dbf,	// (0x00021acb) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a669) slider_set_pane_g

0x6d5b,	// (0x00021a67) volume_set_pane_g1

0x6d63,	// (0x00021a6f) volume_set_pane_g2

0x6d6b,	// (0x00021a77) volume_set_pane_g3

0x6d73,	// (0x00021a7f) volume_set_pane_g4

0x6d7b,	// (0x00021a87) volume_set_pane_g5

0x6d83,	// (0x00021a8f) volume_set_pane_g6

0x6d8b,	// (0x00021a97) volume_set_pane_g7

0x6d93,	// (0x00021a9f) volume_set_pane_g8

0x6d9b,	// (0x00021aa7) volume_set_pane_g9

0x6da3,	// (0x00021aaf) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a641) volume_set_pane_g

0x7f95,	// (0x00022ca1) indicator_pane_ParamLimits

0x7f95,	// (0x00022ca1) indicator_pane

0x7fa1,	// (0x00022cad) main_idle_pane_g2_ParamLimits

0x7fa1,	// (0x00022cad) main_idle_pane_g2

0x7fc9,	// (0x00022cd5) main_pane_idle_g1_ParamLimits

0x7fc9,	// (0x00022cd5) main_pane_idle_g1

0x7fd6,	// (0x00022ce2) popup_clock_digital_analogue_window_ParamLimits

0x7fd6,	// (0x00022ce2) popup_clock_digital_analogue_window

0x7fed,	// (0x00022cf9) soft_indicator_pane_ParamLimits

0x7fed,	// (0x00022cf9) soft_indicator_pane

0x7ff9,	// (0x00022d05) wallpaper_pane_ParamLimits

0x7ff9,	// (0x00022d05) wallpaper_pane

0x7e52,	// (0x00022b5e) wallpaper_pane_g1

0x800d,	// (0x00022d19) indicator_pane_g1_ParamLimits

0x800d,	// (0x00022d19) indicator_pane_g1

0xb454,	// (0x00026160) navi_navi_icon_text_pane_srt_g1

0x8028,	// (0x00022d34) soft_indicator_pane_t1

0x8042,	// (0x00022d4e) aid_ps_area_pane

0x8053,	// (0x00022d5f) aid_ps_clock_pane

0x8061,	// (0x00022d6d) aid_ps_indicator_pane

0x806d,	// (0x00022d79) indicator_ps_pane_ParamLimits

0x806d,	// (0x00022d79) indicator_ps_pane

0x807c,	// (0x00022d88) power_save_pane_g1_ParamLimits

0x807c,	// (0x00022d88) power_save_pane_g1

0x8088,	// (0x00022d94) power_save_pane_g2_ParamLimits

0x8088,	// (0x00022d94) power_save_pane_g2

0x5ac5,	// (0x000207d1) aid_navinavi_width_pane

0x8042,	// (0x00022d4e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002a276) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002a276) power_save_pane_g

0x8096,	// (0x00022da2) power_save_pane_t1_ParamLimits

0x8096,	// (0x00022da2) power_save_pane_t1

0x8053,	// (0x00022d5f) aid_ps_clock_pane_ParamLimits

0x8061,	// (0x00022d6d) aid_ps_indicator_pane_ParamLimits

0x80a8,	// (0x00022db4) power_save_pane_t4_ParamLimits

0x80a8,	// (0x00022db4) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002a27b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002a27b) power_save_pane_t

0x80d2,	// (0x00022dde) power_save_t3_ParamLimits

0x80d2,	// (0x00022dde) power_save_t3

0x80bd,	// (0x00022dc9) power_save_t2_ParamLimits

0x80bd,	// (0x00022dc9) power_save_t2

0x80e7,	// (0x00022df3) indicator_ps_pane_g1

0x80f0,	// (0x00022dfc) ai_gene_pane_ParamLimits

0x80f0,	// (0x00022dfc) ai_gene_pane

0x80fc,	// (0x00022e08) ai_links_pane_ParamLimits

0x80fc,	// (0x00022e08) ai_links_pane

0x8108,	// (0x00022e14) indicator_pane_cp1_ParamLimits

0x8108,	// (0x00022e14) indicator_pane_cp1

0x8114,	// (0x00022e20) main_pane_idle_g1_cp_ParamLimits

0x8114,	// (0x00022e20) main_pane_idle_g1_cp

0x8120,	// (0x00022e2c) popup_ai_links_title_window

0x8129,	// (0x00022e35) soft_indicator_pane_cp1_ParamLimits

0x8129,	// (0x00022e35) soft_indicator_pane_cp1

0xae0b,	// (0x00025b17) ai_links_pane_g1

0xae14,	// (0x00025b20) grid_ai_links_pane

0xadee,	// (0x00025afa) ai_gene_pane_1

0xadf9,	// (0x00025b05) ai_gene_pane_2

0xae02,	// (0x00025b0e) list_highlight_pane_cp4

0xadd2,	// (0x00025ade) cell_ai_link_pane_ParamLimits

0xadd2,	// (0x00025ade) cell_ai_link_pane

0xadca,	// (0x00025ad6) cell_ai_link_pane_g1

0x8359,	// (0x00023065) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a61c) cell_ai_link_pane_g

0x7e5c,	// (0x00022b68) grid_highlight_cp2

0x7e5c,	// (0x00022b68) bg_popup_sub_pane_cp1

0x8143,	// (0x00022e4f) popup_ai_links_title_window_t1

0xad18,	// (0x00025a24) ai_gene_pane_1_g1_ParamLimits

0xad18,	// (0x00025a24) ai_gene_pane_1_g1

0xad24,	// (0x00025a30) ai_gene_pane_1_g2_ParamLimits

0xad24,	// (0x00025a30) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a612) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a612) ai_gene_pane_1_g

0xad31,	// (0x00025a3d) ai_gene_pane_1_t1_ParamLimits

0xad31,	// (0x00025a3d) ai_gene_pane_1_t1

0xad65,	// (0x00025a71) grid_ai_soft_ind_pane

0xad03,	// (0x00025a0f) ai_gene_pane_2_t1_ParamLimits

0xad03,	// (0x00025a0f) ai_gene_pane_2_t1

0x8152,	// (0x00022e5e) main_pane_empty_t1_ParamLimits

0x8152,	// (0x00022e5e) main_pane_empty_t1

0x816a,	// (0x00022e76) main_pane_empty_t2_ParamLimits

0x816a,	// (0x00022e76) main_pane_empty_t2

0x817f,	// (0x00022e8b) main_pane_empty_t3_ParamLimits

0x817f,	// (0x00022e8b) main_pane_empty_t3

0x8191,	// (0x00022e9d) main_pane_empty_t4_ParamLimits

0x8191,	// (0x00022e9d) main_pane_empty_t4

0x81a3,	// (0x00022eaf) main_pane_empty_t5_ParamLimits

0x81a3,	// (0x00022eaf) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002a280) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002a280) main_pane_empty_t

0x8857,	// (0x00023563) bg_popup_window_pane_ParamLimits

0x8857,	// (0x00023563) bg_popup_window_pane

0xaa73,	// (0x0002577f) find_popup_pane_cp2_ParamLimits

0xaa73,	// (0x0002577f) find_popup_pane_cp2

0xaa7f,	// (0x0002578b) heading_pane_ParamLimits

0xaa7f,	// (0x0002578b) heading_pane

0x7e5c,	// (0x00022b68) bg_popup_sub_pane

0xa9ed,	// (0x000256f9) bg_popup_window_pane_g1_ParamLimits

0xa9ed,	// (0x000256f9) bg_popup_window_pane_g1

0xa9f9,	// (0x00025705) bg_popup_window_pane_g2_ParamLimits

0xa9f9,	// (0x00025705) bg_popup_window_pane_g2

0xaa05,	// (0x00025711) bg_popup_window_pane_g3_ParamLimits

0xaa05,	// (0x00025711) bg_popup_window_pane_g3

0xaa11,	// (0x0002571d) bg_popup_window_pane_g4_ParamLimits

0xaa11,	// (0x0002571d) bg_popup_window_pane_g4

0xaa1d,	// (0x00025729) bg_popup_window_pane_g5_ParamLimits

0xaa1d,	// (0x00025729) bg_popup_window_pane_g5

0xaa29,	// (0x00025735) bg_popup_window_pane_g6_ParamLimits

0xaa29,	// (0x00025735) bg_popup_window_pane_g6

0xaa35,	// (0x00025741) bg_popup_window_pane_g7_ParamLimits

0xaa35,	// (0x00025741) bg_popup_window_pane_g7

0xaa41,	// (0x0002574d) bg_popup_window_pane_g8_ParamLimits

0xaa41,	// (0x0002574d) bg_popup_window_pane_g8

0xaa4d,	// (0x00025759) bg_popup_window_pane_g9_ParamLimits

0xaa4d,	// (0x00025759) bg_popup_window_pane_g9

0xaa59,	// (0x00025765) bg_popup_window_pane_g10_ParamLimits

0xaa59,	// (0x00025765) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a5da) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a5da) bg_popup_window_pane_g

0xa982,	// (0x0002568e) bg_popup_heading_pane_ParamLimits

0xa982,	// (0x0002568e) bg_popup_heading_pane

0x6e47,	// (0x00021b53) tabs_4_passive_pane_cp_srt_ParamLimits

0x6e47,	// (0x00021b53) tabs_4_passive_pane_cp_srt

0x6e59,	// (0x00021b65) tabs_4_passive_pane_srt_ParamLimits

0xa996,	// (0x000256a2) heading_pane_g2

0x6e59,	// (0x00021b65) tabs_4_passive_pane_srt

0x977f,	// (0x0002448b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x977f,	// (0x0002448b) bg_passive_tab_pane_cp3_srt

0xa99e,	// (0x000256aa) heading_pane_t1_ParamLimits

0xa99e,	// (0x000256aa) heading_pane_t1

0xa9b5,	// (0x000256c1) heading_pane_t2_ParamLimits

0xa9b5,	// (0x000256c1) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a5d5) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a5d5) heading_pane_t

0xa4af,	// (0x000251bb) bg_popup_heading_pane_g1

0xa55e,	// (0x0002526a) bg_popup_heading_pane_g2

0xa568,	// (0x00025274) bg_popup_heading_pane_g3

0xa572,	// (0x0002527e) bg_popup_heading_pane_g4

0xa57c,	// (0x00025288) bg_popup_heading_pane_g5

0xa586,	// (0x00025292) bg_popup_heading_pane_g6

0xa58e,	// (0x0002529a) bg_popup_heading_pane_g7

0xa596,	// (0x000252a2) bg_popup_heading_pane_g8

0xa5a0,	// (0x000252ac) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a591) bg_popup_heading_pane_g

0x9c89,	// (0x00024995) bg_popup_sub_pane_g1

0x9c91,	// (0x0002499d) bg_popup_sub_pane_g2

0x9c99,	// (0x000249a5) bg_popup_sub_pane_g3

0x9ca1,	// (0x000249ad) bg_popup_sub_pane_g4

0x9ca9,	// (0x000249b5) bg_popup_sub_pane_g5

0x9cb1,	// (0x000249bd) bg_popup_sub_pane_g6

0x9cb9,	// (0x000249c5) bg_popup_sub_pane_g7

0x9cc1,	// (0x000249cd) bg_popup_sub_pane_g8

0x9cc9,	// (0x000249d5) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a56b) bg_popup_sub_pane_g

0x81b7,	// (0x00022ec3) bg_popup_window_pane_cp5_ParamLimits

0x81b7,	// (0x00022ec3) bg_popup_window_pane_cp5

0x81d3,	// (0x00022edf) popup_note_window_g1_ParamLimits

0x81d3,	// (0x00022edf) popup_note_window_g1

0x81df,	// (0x00022eeb) popup_note_window_t1_ParamLimits

0x81df,	// (0x00022eeb) popup_note_window_t1

0x81f5,	// (0x00022f01) popup_note_window_t2_ParamLimits

0x81f5,	// (0x00022f01) popup_note_window_t2

0x820b,	// (0x00022f17) popup_note_window_t3_ParamLimits

0x820b,	// (0x00022f17) popup_note_window_t3

0x8221,	// (0x00022f2d) popup_note_window_t4_ParamLimits

0x8221,	// (0x00022f2d) popup_note_window_t4

0x8249,	// (0x00022f55) popup_note_window_t5_ParamLimits

0x8249,	// (0x00022f55) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002a28b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002a28b) popup_note_window_t

0x826d,	// (0x00022f79) bg_popup_window_pane_cp6_ParamLimits

0x826d,	// (0x00022f79) bg_popup_window_pane_cp6

0xa42b,	// (0x00025137) popup_note_image_window_g1_ParamLimits

0xa42b,	// (0x00025137) popup_note_image_window_g1

0xa437,	// (0x00025143) popup_note_image_window_g2_ParamLimits

0xa437,	// (0x00025143) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a55f) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a55f) popup_note_image_window_g

0xa450,	// (0x0002515c) popup_note_image_window_t1_ParamLimits

0xa450,	// (0x0002515c) popup_note_image_window_t1

0xa469,	// (0x00025175) popup_note_image_window_t2_ParamLimits

0xa469,	// (0x00025175) popup_note_image_window_t2

0xa482,	// (0x0002518e) popup_note_image_window_t3_ParamLimits

0xa482,	// (0x0002518e) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a564) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a564) popup_note_image_window_t

0xa2ec,	// (0x00024ff8) bg_popup_window_pane_cp7_ParamLimits

0xa2ec,	// (0x00024ff8) bg_popup_window_pane_cp7

0xa31c,	// (0x00025028) popup_note_wait_window_g1_ParamLimits

0xa31c,	// (0x00025028) popup_note_wait_window_g1

0xa328,	// (0x00025034) popup_note_wait_window_g2_ParamLimits

0xa328,	// (0x00025034) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a54d) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a54d) popup_note_wait_window_g

0xa340,	// (0x0002504c) popup_note_wait_window_t1_ParamLimits

0xa340,	// (0x0002504c) popup_note_wait_window_t1

0xa367,	// (0x00025073) popup_note_wait_window_t2_ParamLimits

0xa367,	// (0x00025073) popup_note_wait_window_t2

0xa384,	// (0x00025090) popup_note_wait_window_t3_ParamLimits

0xa384,	// (0x00025090) popup_note_wait_window_t3

0xa397,	// (0x000250a3) popup_note_wait_window_t4_ParamLimits

0xa397,	// (0x000250a3) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a554) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a554) popup_note_wait_window_t

0xa3bc,	// (0x000250c8) wait_bar_pane_ParamLimits

0xa3bc,	// (0x000250c8) wait_bar_pane

0x7e5c,	// (0x00022b68) wait_anim_pane

0x7e5c,	// (0x00022b68) wait_border_pane

0x7e52,	// (0x00022b5e) wait_anim_pane_g1

0x7e52,	// (0x00022b5e) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002a40f) wait_anim_pane_g

0xa290,	// (0x00024f9c) wait_border_pane_g1

0xa29b,	// (0x00024fa7) wait_border_pane_g2

0xa2a4,	// (0x00024fb0) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a546) wait_border_pane_g

0xa0ef,	// (0x00024dfb) bg_popup_window_pane_cp16_ParamLimits

0xa0ef,	// (0x00024dfb) bg_popup_window_pane_cp16

0xa1fb,	// (0x00024f07) indicator_popup_pane_cp4_ParamLimits

0xa1fb,	// (0x00024f07) indicator_popup_pane_cp4

0xa20f,	// (0x00024f1b) popup_query_data_window_t1_ParamLimits

0xa20f,	// (0x00024f1b) popup_query_data_window_t1

0xa221,	// (0x00024f2d) popup_query_data_window_t2_ParamLimits

0xa221,	// (0x00024f2d) popup_query_data_window_t2

0xa23a,	// (0x00024f46) popup_query_data_window_t3_ParamLimits

0xa23a,	// (0x00024f46) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a53f) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a53f) popup_query_data_window_t

0xa254,	// (0x00024f60) query_popup_data_pane_ParamLimits

0xa254,	// (0x00024f60) query_popup_data_pane

0xa268,	// (0x00024f74) query_popup_data_pane_cp1_ParamLimits

0xa268,	// (0x00024f74) query_popup_data_pane_cp1

0xa0ef,	// (0x00024dfb) bg_popup_window_pane_cp10_ParamLimits

0xa0ef,	// (0x00024dfb) bg_popup_window_pane_cp10

0xa121,	// (0x00024e2d) indicator_popup_pane_ParamLimits

0xa121,	// (0x00024e2d) indicator_popup_pane

0xa143,	// (0x00024e4f) popup_query_code_window_t1_ParamLimits

0xa143,	// (0x00024e4f) popup_query_code_window_t1

0xa15d,	// (0x00024e69) popup_query_code_window_t2_ParamLimits

0xa15d,	// (0x00024e69) popup_query_code_window_t2

0xa1b2,	// (0x00024ebe) popup_query_code_window_t3_ParamLimits

0xa1b2,	// (0x00024ebe) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a538) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a538) popup_query_code_window_t

0xa1e1,	// (0x00024eed) query_popup_pane_ParamLimits

0xa1e1,	// (0x00024eed) query_popup_pane

0x826d,	// (0x00022f79) bg_popup_window_pane_cp15_ParamLimits

0x826d,	// (0x00022f79) bg_popup_window_pane_cp15

0x828b,	// (0x00022f97) indicator_popup_pane_cp1_ParamLimits

0x828b,	// (0x00022f97) indicator_popup_pane_cp1

0x829e,	// (0x00022faa) indicator_popup_pane_cp2_ParamLimits

0x829e,	// (0x00022faa) indicator_popup_pane_cp2

0x82b1,	// (0x00022fbd) popup_query_data_code_window_g1_ParamLimits

0x82b1,	// (0x00022fbd) popup_query_data_code_window_g1

0x82c4,	// (0x00022fd0) popup_query_data_code_window_t1_ParamLimits

0x82c4,	// (0x00022fd0) popup_query_data_code_window_t1

0x82d6,	// (0x00022fe2) popup_query_data_code_window_t2_ParamLimits

0x82d6,	// (0x00022fe2) popup_query_data_code_window_t2

0x82e8,	// (0x00022ff4) popup_query_data_code_window_t3_ParamLimits

0x82e8,	// (0x00022ff4) popup_query_data_code_window_t3

0x82fe,	// (0x0002300a) popup_query_data_code_window_t4_ParamLimits

0x82fe,	// (0x0002300a) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002a296) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002a296) popup_query_data_code_window_t

0x6b2a,	// (0x00021836) list_single_midp_graphic_pane_g3

0x8316,	// (0x00023022) query_popup_data_pane_cp2_ParamLimits

0x8329,	// (0x00023035) query_popup_pane_cp2_ParamLimits

0x8329,	// (0x00023035) query_popup_pane_cp2

0x7e5c,	// (0x00022b68) bg_popup_window_pane_cp11

0xa0e7,	// (0x00024df3) heading_pane_cp5

0x8414,	// (0x00023120) listscroll_popup_info_pane

0x7e5c,	// (0x00022b68) input_focus_pane_cp3

0x833c,	// (0x00023048) query_popup_pane_t1

0x834a,	// (0x00023056) list_popup_info_pane_ParamLimits

0x834a,	// (0x00023056) list_popup_info_pane

0x8359,	// (0x00023065) listscroll_popup_info_pane_g1

0x8361,	// (0x0002306d) scroll_pane_cp7

0x836b,	// (0x00023077) popup_info_list_pane_t1_ParamLimits

0x836b,	// (0x00023077) popup_info_list_pane_t1

0x8385,	// (0x00023091) popup_info_list_pane_t2_ParamLimits

0x8385,	// (0x00023091) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002a29f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002a29f) popup_info_list_pane_t

0x7e5c,	// (0x00022b68) bg_popup_window_pane_cp12

0xb46e,	// (0x0002617a) find_popup_pane

0x7f3c,	// (0x00022c48) bg_popup_window_pane_cp3

0x839f,	// (0x000230ab) heading_pane_cp3

0x83ab,	// (0x000230b7) listscroll_popup_graphic_pane

0x7e5c,	// (0x00022b68) bg_popup_window_pane_cp4

0x840a,	// (0x00023116) heading_pane_cp4

0x8414,	// (0x00023120) listscroll_popup_colour_pane

0x841c,	// (0x00023128) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x841c,	// (0x00023128) cell_large_graphic_colour_none_popup_pane

0x8430,	// (0x0002313c) grid_large_graphic_colour_popup_pane_ParamLimits

0x8430,	// (0x0002313c) grid_large_graphic_colour_popup_pane

0x845c,	// (0x00023168) listscroll_popup_colour_pane_g1_ParamLimits

0x845c,	// (0x00023168) listscroll_popup_colour_pane_g1

0x8473,	// (0x0002317f) listscroll_popup_colour_pane_g2_ParamLimits

0x8473,	// (0x0002317f) listscroll_popup_colour_pane_g2

0x848a,	// (0x00023196) listscroll_popup_colour_pane_g3_ParamLimits

0x848a,	// (0x00023196) listscroll_popup_colour_pane_g3

0x849a,	// (0x000231a6) listscroll_popup_colour_pane_g4_ParamLimits

0x849a,	// (0x000231a6) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002a2a4) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002a2a4) listscroll_popup_colour_pane_g

0x84ae,	// (0x000231ba) scroll_pane_cp6_ParamLimits

0x84ae,	// (0x000231ba) scroll_pane_cp6

0x84c0,	// (0x000231cc) cell_large_graphic_colour_popup_pane_ParamLimits

0x84c0,	// (0x000231cc) cell_large_graphic_colour_popup_pane

0x84df,	// (0x000231eb) cell_large_graphic_colour_none_popup_pane_t1

0x7e5c,	// (0x00022b68) grid_highlight_pane_cp5

0x84ee,	// (0x000231fa) cell_large_graphic_colour_popup_pane_g1

0x84f6,	// (0x00023202) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002a2ad) cell_large_graphic_colour_popup_pane_g

0x84fe,	// (0x0002320a) cell_large_graphic_colour_popup_pane_g2_copy1

0x8507,	// (0x00023213) grid_highlight_pane_cp4

0x850f,	// (0x0002321b) bg_popup_window_pane_cp8_ParamLimits

0x850f,	// (0x0002321b) bg_popup_window_pane_cp8

0x852a,	// (0x00023236) popup_snote_single_text_window_g1_ParamLimits

0x852a,	// (0x00023236) popup_snote_single_text_window_g1

0x853c,	// (0x00023248) popup_snote_single_text_window_t1_ParamLimits

0x853c,	// (0x00023248) popup_snote_single_text_window_t1

0x854f,	// (0x0002325b) popup_snote_single_text_window_t2_ParamLimits

0x854f,	// (0x0002325b) popup_snote_single_text_window_t2

0x8562,	// (0x0002326e) popup_snote_single_text_window_t3_ParamLimits

0x8562,	// (0x0002326e) popup_snote_single_text_window_t3

0x859b,	// (0x000232a7) popup_snote_single_text_window_t4_ParamLimits

0x859b,	// (0x000232a7) popup_snote_single_text_window_t4

0x85cf,	// (0x000232db) popup_snote_single_text_window_t5_ParamLimits

0x85cf,	// (0x000232db) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002a2b2) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002a2b2) popup_snote_single_text_window_t

0x85fe,	// (0x0002330a) bg_popup_window_pane_cp9_ParamLimits

0x85fe,	// (0x0002330a) bg_popup_window_pane_cp9

0x852a,	// (0x00023236) popup_snote_single_graphic_window_g1_ParamLimits

0x852a,	// (0x00023236) popup_snote_single_graphic_window_g1

0x860c,	// (0x00023318) popup_snote_single_graphic_window_g2_ParamLimits

0x860c,	// (0x00023318) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002a2bd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002a2bd) popup_snote_single_graphic_window_g

0x8618,	// (0x00023324) popup_snote_single_graphic_window_t1_ParamLimits

0x8618,	// (0x00023324) popup_snote_single_graphic_window_t1

0x862b,	// (0x00023337) popup_snote_single_graphic_window_t2_ParamLimits

0x862b,	// (0x00023337) popup_snote_single_graphic_window_t2

0x863e,	// (0x0002334a) popup_snote_single_graphic_window_t3_ParamLimits

0x863e,	// (0x0002334a) popup_snote_single_graphic_window_t3

0x8677,	// (0x00023383) popup_snote_single_graphic_window_t4_ParamLimits

0x8677,	// (0x00023383) popup_snote_single_graphic_window_t4

0x86ab,	// (0x000233b7) popup_snote_single_graphic_window_t5_ParamLimits

0x86ab,	// (0x000233b7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002a2c2) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002a2c2) popup_snote_single_graphic_window_t

0xb3b2,	// (0x000260be) grid_graphic_popup_pane_ParamLimits

0xb3b2,	// (0x000260be) grid_graphic_popup_pane

0xb3da,	// (0x000260e6) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3da,	// (0x000260e6) listscroll_popup_graphic_pane_g1

0xb3ee,	// (0x000260fa) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3ee,	// (0x000260fa) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a6b5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a6b5) listscroll_popup_graphic_pane_g

0xb402,	// (0x0002610e) scroll_pane_cp5

0xb34f,	// (0x0002605b) cell_graphic_popup_pane_ParamLimits

0xb34f,	// (0x0002605b) cell_graphic_popup_pane

0xb330,	// (0x0002603c) cell_graphic_popup_pane_g1

0xb338,	// (0x00026044) cell_graphic_popup_pane_g2

0x84fe,	// (0x0002320a) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a6ae) cell_graphic_popup_pane_g

0xb341,	// (0x0002604d) cell_graphic_popup_pane_t2

0x8507,	// (0x00023213) grid_highlight_pane_cp3

0x86ec,	// (0x000233f8) list_gen_pane_ParamLimits

0x86ec,	// (0x000233f8) list_gen_pane

0x871e,	// (0x0002342a) scroll_pane

0xb288,	// (0x00025f94) bg_list_pane_g1_ParamLimits

0xb288,	// (0x00025f94) bg_list_pane_g1

0xb2a5,	// (0x00025fb1) bg_list_pane_g2_ParamLimits

0xb2a5,	// (0x00025fb1) bg_list_pane_g2

0xb2ba,	// (0x00025fc6) bg_list_pane_g3_ParamLimits

0xb2ba,	// (0x00025fc6) bg_list_pane_g3

0xb2ce,	// (0x00025fda) bg_list_pane_g4_ParamLimits

0xb2ce,	// (0x00025fda) bg_list_pane_g4

0xb2e2,	// (0x00025fee) bg_list_pane_g5_ParamLimits

0xb2e2,	// (0x00025fee) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a6a3) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a6a3) bg_list_pane_g

0x532a,	// (0x00020036) list_double2_graphic_large_graphic_pane_ParamLimits

0x532a,	// (0x00020036) list_double2_graphic_large_graphic_pane

0x532a,	// (0x00020036) list_double2_graphic_pane_ParamLimits

0x532a,	// (0x00020036) list_double2_graphic_pane

0x532a,	// (0x00020036) list_double2_large_graphic_pane_ParamLimits

0x532a,	// (0x00020036) list_double2_large_graphic_pane

0x532a,	// (0x00020036) list_double2_pane_ParamLimits

0x532a,	// (0x00020036) list_double2_pane

0x532a,	// (0x00020036) list_double_graphic_heading_pane_ParamLimits

0x532a,	// (0x00020036) list_double_graphic_heading_pane

0x532a,	// (0x00020036) list_double_graphic_pane_ParamLimits

0x532a,	// (0x00020036) list_double_graphic_pane

0x532a,	// (0x00020036) list_double_heading_pane_ParamLimits

0x532a,	// (0x00020036) list_double_heading_pane

0x532a,	// (0x00020036) list_double_large_graphic_pane_ParamLimits

0x532a,	// (0x00020036) list_double_large_graphic_pane

0x532a,	// (0x00020036) list_double_number_pane_ParamLimits

0x532a,	// (0x00020036) list_double_number_pane

0x532a,	// (0x00020036) list_double_pane_ParamLimits

0x532a,	// (0x00020036) list_double_pane

0x532a,	// (0x00020036) list_double_time_pane_ParamLimits

0x532a,	// (0x00020036) list_double_time_pane

0x532a,	// (0x00020036) list_setting_number_pane_ParamLimits

0x532a,	// (0x00020036) list_setting_number_pane

0x532a,	// (0x00020036) list_setting_pane_ParamLimits

0x532a,	// (0x00020036) list_setting_pane

0x5365,	// (0x00020071) list_single_2graphic_pane_ParamLimits

0x5365,	// (0x00020071) list_single_2graphic_pane

0x5365,	// (0x00020071) list_single_graphic_heading_pane_ParamLimits

0x5365,	// (0x00020071) list_single_graphic_heading_pane

0x5365,	// (0x00020071) list_single_graphic_pane_ParamLimits

0x5365,	// (0x00020071) list_single_graphic_pane

0x5365,	// (0x00020071) list_single_heading_pane_ParamLimits

0x5365,	// (0x00020071) list_single_heading_pane

0x53a5,	// (0x000200b1) list_single_large_graphic_pane_ParamLimits

0x53a5,	// (0x000200b1) list_single_large_graphic_pane

0x5365,	// (0x00020071) list_single_number_heading_pane_ParamLimits

0x5365,	// (0x00020071) list_single_number_heading_pane

0x5365,	// (0x00020071) list_single_number_pane_ParamLimits

0x5365,	// (0x00020071) list_single_number_pane

0x5365,	// (0x00020071) list_single_pane_ParamLimits

0x5365,	// (0x00020071) list_single_pane

0x7e5c,	// (0x00022b68) list_highlight_pane_cp1

0x49a9,	// (0x0001f6b5) list_single_pane_g1_ParamLimits

0x49a9,	// (0x0001f6b5) list_single_pane_g1

0x49b5,	// (0x0001f6c1) list_single_pane_g2_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002a2d4) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002a2d4) list_single_pane_g

0x5314,	// (0x00020020) list_single_pane_t1_ParamLimits

0x5314,	// (0x00020020) list_single_pane_t1

0x49a9,	// (0x0001f6b5) list_single_number_pane_g1_ParamLimits

0x49a9,	// (0x0001f6b5) list_single_number_pane_g1

0x49b5,	// (0x0001f6c1) list_single_number_pane_g2_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002a2d4) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002a2d4) list_single_number_pane_g

0x52be,	// (0x0001ffca) list_single_number_pane_t1_ParamLimits

0x52be,	// (0x0001ffca) list_single_number_pane_t1

0x52d4,	// (0x0001ffe0) list_single_number_pane_t2_ParamLimits

0x52d4,	// (0x0001ffe0) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a664) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a664) list_single_number_pane_t

0x499d,	// (0x0001f6a9) list_single_graphic_pane_g1_ParamLimits

0x499d,	// (0x0001f6a9) list_single_graphic_pane_g1

0x49a9,	// (0x0001f6b5) list_single_graphic_pane_g2_ParamLimits

0x49a9,	// (0x0001f6b5) list_single_graphic_pane_g2

0x49b5,	// (0x0001f6c1) list_single_graphic_pane_g3_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002a2cd) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002a2cd) list_single_graphic_pane_g

0x49c1,	// (0x0001f6cd) list_single_graphic_pane_t1_ParamLimits

0x49c1,	// (0x0001f6cd) list_single_graphic_pane_t1

0x49a9,	// (0x0001f6b5) list_single_heading_pane_g1_ParamLimits

0x49a9,	// (0x0001f6b5) list_single_heading_pane_g1

0x49b5,	// (0x0001f6c1) list_single_heading_pane_g2_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a2d4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a2d4) list_single_heading_pane_g

0x49d7,	// (0x0001f6e3) list_single_heading_pane_t1_ParamLimits

0x49d7,	// (0x0001f6e3) list_single_heading_pane_t1

0x49ed,	// (0x0001f6f9) list_single_heading_pane_t2_ParamLimits

0x49ed,	// (0x0001f6f9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002a2d9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002a2d9) list_single_heading_pane_t

0x49a9,	// (0x0001f6b5) list_single_number_heading_pane_g1_ParamLimits

0x49a9,	// (0x0001f6b5) list_single_number_heading_pane_g1

0x49b5,	// (0x0001f6c1) list_single_number_heading_pane_g2_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002a2d4) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002a2d4) list_single_number_heading_pane_g

0x49d7,	// (0x0001f6e3) list_single_number_heading_pane_t1_ParamLimits

0x49d7,	// (0x0001f6e3) list_single_number_heading_pane_t1

0x49ff,	// (0x0001f70b) list_single_number_heading_pane_t2_ParamLimits

0x49ff,	// (0x0001f70b) list_single_number_heading_pane_t2

0x4a11,	// (0x0001f71d) list_single_number_heading_pane_t3_ParamLimits

0x4a11,	// (0x0001f71d) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002a2de) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002a2de) list_single_number_heading_pane_t

0x4a23,	// (0x0001f72f) list_single_graphic_heading_pane_g1_ParamLimits

0x4a23,	// (0x0001f72f) list_single_graphic_heading_pane_g1

0x4a2f,	// (0x0001f73b) list_single_graphic_heading_pane_g4_ParamLimits

0x4a2f,	// (0x0001f73b) list_single_graphic_heading_pane_g4

0x49b5,	// (0x0001f6c1) list_single_graphic_heading_pane_g5_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002a2e5) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002a2e5) list_single_graphic_heading_pane_g

0x49d7,	// (0x0001f6e3) list_single_graphic_heading_pane_t1_ParamLimits

0x49d7,	// (0x0001f6e3) list_single_graphic_heading_pane_t1

0x4a40,	// (0x0001f74c) list_single_graphic_heading_pane_t2_ParamLimits

0x4a40,	// (0x0001f74c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002a2ec) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002a2ec) list_single_graphic_heading_pane_t

0x4a52,	// (0x0001f75e) list_single_large_graphic_pane_g1_ParamLimits

0x4a52,	// (0x0001f75e) list_single_large_graphic_pane_g1

0x4a5e,	// (0x0001f76a) list_single_large_graphic_pane_g2_ParamLimits

0x4a5e,	// (0x0001f76a) list_single_large_graphic_pane_g2

0x4a6a,	// (0x0001f776) list_single_large_graphic_pane_g3_ParamLimits

0x4a6a,	// (0x0001f776) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002a2f1) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002a2f1) list_single_large_graphic_pane_g

0xa29b,	// (0x00024fa7) wait_border_pane_g2_copy1

0x4a76,	// (0x0001f782) list_single_large_graphic_pane_g4_cp2

0x4a7e,	// (0x0001f78a) list_single_large_graphic_pane_t1_ParamLimits

0x4a7e,	// (0x0001f78a) list_single_large_graphic_pane_t1

0x4a94,	// (0x0001f7a0) list_double_pane_g1_ParamLimits

0x4a94,	// (0x0001f7a0) list_double_pane_g1

0x4aa0,	// (0x0001f7ac) list_double_pane_g2_ParamLimits

0x4aa0,	// (0x0001f7ac) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002a2f8) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002a2f8) list_double_pane_g

0x4aac,	// (0x0001f7b8) list_double_pane_t1_ParamLimits

0x4aac,	// (0x0001f7b8) list_double_pane_t1

0x4ac2,	// (0x0001f7ce) list_double_pane_t2_ParamLimits

0x4ac2,	// (0x0001f7ce) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002a2fd) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002a2fd) list_double_pane_t

0x4ad4,	// (0x0001f7e0) list_double2_pane_g1_ParamLimits

0x4ad4,	// (0x0001f7e0) list_double2_pane_g1

0x4ae5,	// (0x0001f7f1) list_double2_pane_g2_ParamLimits

0x4ae5,	// (0x0001f7f1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002a302) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002a302) list_double2_pane_g

0x4af1,	// (0x0001f7fd) list_double2_pane_t1_ParamLimits

0x4af1,	// (0x0001f7fd) list_double2_pane_t1

0x4b07,	// (0x0001f813) list_double2_pane_t2_ParamLimits

0x4b07,	// (0x0001f813) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002a307) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002a307) list_double2_pane_t

0x4a94,	// (0x0001f7a0) list_double_number_pane_g1_ParamLimits

0x4a94,	// (0x0001f7a0) list_double_number_pane_g1

0x4aa0,	// (0x0001f7ac) list_double_number_pane_g2_ParamLimits

0x4aa0,	// (0x0001f7ac) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002a2f8) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002a2f8) list_double_number_pane_g

0x4b19,	// (0x0001f825) list_double_number_pane_t1_ParamLimits

0x4b19,	// (0x0001f825) list_double_number_pane_t1

0x4b2b,	// (0x0001f837) list_double_number_pane_t2_ParamLimits

0x4b2b,	// (0x0001f837) list_double_number_pane_t2

0x4b41,	// (0x0001f84d) list_double_number_pane_t3_ParamLimits

0x4b41,	// (0x0001f84d) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002a30c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002a30c) list_double_number_pane_t

0x4b53,	// (0x0001f85f) list_double_graphic_pane_g1_ParamLimits

0x4b53,	// (0x0001f85f) list_double_graphic_pane_g1

0x4b5f,	// (0x0001f86b) list_double_graphic_pane_g2_ParamLimits

0x4b5f,	// (0x0001f86b) list_double_graphic_pane_g2

0x4b6e,	// (0x0001f87a) list_double_graphic_pane_g3_ParamLimits

0x4b6e,	// (0x0001f87a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002a313) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002a313) list_double_graphic_pane_g

0x4b86,	// (0x0001f892) list_double_graphic_pane_t1_ParamLimits

0x4b86,	// (0x0001f892) list_double_graphic_pane_t1

0x4b9c,	// (0x0001f8a8) list_double_graphic_pane_t2_ParamLimits

0x4b9c,	// (0x0001f8a8) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002a31c) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002a31c) list_double_graphic_pane_t

0x4bae,	// (0x0001f8ba) list_double2_graphic_pane_g1_ParamLimits

0x4bae,	// (0x0001f8ba) list_double2_graphic_pane_g1

0x4bba,	// (0x0001f8c6) list_double2_graphic_pane_g2_ParamLimits

0x4bba,	// (0x0001f8c6) list_double2_graphic_pane_g2

0x4ae5,	// (0x0001f7f1) list_double2_graphic_pane_g3_ParamLimits

0x4ae5,	// (0x0001f7f1) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002a321) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002a321) list_double2_graphic_pane_g

0x4bc6,	// (0x0001f8d2) list_double2_graphic_pane_t1_ParamLimits

0x4bc6,	// (0x0001f8d2) list_double2_graphic_pane_t1

0x4bdc,	// (0x0001f8e8) list_double2_graphic_pane_t2_ParamLimits

0x4bdc,	// (0x0001f8e8) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002a328) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002a328) list_double2_graphic_pane_t

0x4bee,	// (0x0001f8fa) list_double_large_graphic_pane_g1_ParamLimits

0x4bee,	// (0x0001f8fa) list_double_large_graphic_pane_g1

0x4c01,	// (0x0001f90d) list_double_large_graphic_pane_g2_ParamLimits

0x4c01,	// (0x0001f90d) list_double_large_graphic_pane_g2

0x4aa0,	// (0x0001f7ac) list_double_large_graphic_pane_g3_ParamLimits

0x4aa0,	// (0x0001f7ac) list_double_large_graphic_pane_g3

0x4c12,	// (0x0001f91e) list_double_large_graphic_pane_g4_ParamLimits

0x4c12,	// (0x0001f91e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002a32d) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002a32d) list_double_large_graphic_pane_g

0x4c39,	// (0x0001f945) list_double_large_graphic_pane_t1_ParamLimits

0x4c39,	// (0x0001f945) list_double_large_graphic_pane_t1

0x4c52,	// (0x0001f95e) list_double_large_graphic_pane_t2_ParamLimits

0x4c52,	// (0x0001f95e) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002a338) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002a338) list_double_large_graphic_pane_t

0x4c64,	// (0x0001f970) list_double2_large_graphic_pane_g1_ParamLimits

0x4c64,	// (0x0001f970) list_double2_large_graphic_pane_g1

0x4ad4,	// (0x0001f7e0) list_double2_large_graphic_pane_g2_ParamLimits

0x4ad4,	// (0x0001f7e0) list_double2_large_graphic_pane_g2

0x4ae5,	// (0x0001f7f1) list_double2_large_graphic_pane_g3_ParamLimits

0x4ae5,	// (0x0001f7f1) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002a33d) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002a33d) list_double2_large_graphic_pane_g

0x4c70,	// (0x0001f97c) list_double2_large_graphic_pane_t1_ParamLimits

0x4c70,	// (0x0001f97c) list_double2_large_graphic_pane_t1

0x4c86,	// (0x0001f992) list_double2_large_graphic_pane_t2_ParamLimits

0x4c86,	// (0x0001f992) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002a344) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002a344) list_double2_large_graphic_pane_t

0x4c98,	// (0x0001f9a4) list_double_heading_pane_g1_ParamLimits

0x4c98,	// (0x0001f9a4) list_double_heading_pane_g1

0x4ca9,	// (0x0001f9b5) list_double_heading_pane_g2_ParamLimits

0x4ca9,	// (0x0001f9b5) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002a349) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002a349) list_double_heading_pane_g

0x4cb5,	// (0x0001f9c1) list_double_heading_pane_t1_ParamLimits

0x4cb5,	// (0x0001f9c1) list_double_heading_pane_t1

0x4b07,	// (0x0001f813) list_double_heading_pane_t2_ParamLimits

0x4b07,	// (0x0001f813) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002a34e) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002a34e) list_double_heading_pane_t

0x4ccb,	// (0x0001f9d7) list_double_graphic_heading_pane_g1_ParamLimits

0x4ccb,	// (0x0001f9d7) list_double_graphic_heading_pane_g1

0x4c98,	// (0x0001f9a4) list_double_graphic_heading_pane_g2_ParamLimits

0x4c98,	// (0x0001f9a4) list_double_graphic_heading_pane_g2

0x4ca9,	// (0x0001f9b5) list_double_graphic_heading_pane_g3_ParamLimits

0x4ca9,	// (0x0001f9b5) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002a353) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002a353) list_double_graphic_heading_pane_g

0x4cd7,	// (0x0001f9e3) list_double_graphic_heading_pane_t1_ParamLimits

0x4cd7,	// (0x0001f9e3) list_double_graphic_heading_pane_t1

0x4bdc,	// (0x0001f8e8) list_double_graphic_heading_pane_t2_ParamLimits

0x4bdc,	// (0x0001f8e8) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002a35a) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002a35a) list_double_graphic_heading_pane_t

0x4c01,	// (0x0001f90d) list_double_time_pane_g1_ParamLimits

0x4c01,	// (0x0001f90d) list_double_time_pane_g1

0x4aa0,	// (0x0001f7ac) list_double_time_pane_g2_ParamLimits

0x4aa0,	// (0x0001f7ac) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002a35f) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002a35f) list_double_time_pane_g

0x4ced,	// (0x0001f9f9) list_double_time_pane_t1_ParamLimits

0x4ced,	// (0x0001f9f9) list_double_time_pane_t1

0x4d03,	// (0x0001fa0f) list_double_time_pane_t2_ParamLimits

0x4d03,	// (0x0001fa0f) list_double_time_pane_t2

0x4d15,	// (0x0001fa21) list_double_time_pane_t3_ParamLimits

0x4d15,	// (0x0001fa21) list_double_time_pane_t3

0x4d27,	// (0x0001fa33) list_double_time_pane_t4_ParamLimits

0x4d27,	// (0x0001fa33) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002a364) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002a364) list_double_time_pane_t

0x4bba,	// (0x0001f8c6) list_setting_pane_g1_ParamLimits

0x4bba,	// (0x0001f8c6) list_setting_pane_g1

0x4ae5,	// (0x0001f7f1) list_setting_pane_g2_ParamLimits

0x4ae5,	// (0x0001f7f1) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002a36d) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002a36d) list_setting_pane_g

0x4d39,	// (0x0001fa45) list_setting_pane_t1_ParamLimits

0x4d39,	// (0x0001fa45) list_setting_pane_t1

0x4d53,	// (0x0001fa5f) list_setting_pane_t2_ParamLimits

0x4d53,	// (0x0001fa5f) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002a372) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002a372) list_setting_pane_t

0x4d92,	// (0x0001fa9e) set_value_pane_cp_ParamLimits

0x4d92,	// (0x0001fa9e) set_value_pane_cp

0x4d9e,	// (0x0001faaa) list_setting_number_pane_g1_ParamLimits

0x4d9e,	// (0x0001faaa) list_setting_number_pane_g1

0x4daa,	// (0x0001fab6) list_setting_number_pane_g2_ParamLimits

0x4daa,	// (0x0001fab6) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002a379) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002a379) list_setting_number_pane_g

0x4db6,	// (0x0001fac2) list_setting_number_pane_t1_ParamLimits

0x4db6,	// (0x0001fac2) list_setting_number_pane_t1

0x4dcf,	// (0x0001fadb) list_setting_number_pane_t2_ParamLimits

0x4dcf,	// (0x0001fadb) list_setting_number_pane_t2

0x4de9,	// (0x0001faf5) list_setting_number_pane_t3_ParamLimits

0x4de9,	// (0x0001faf5) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002a37e) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002a37e) list_setting_number_pane_t

0x4d92,	// (0x0001fa9e) set_value_pane_ParamLimits

0x4d92,	// (0x0001fa9e) set_value_pane

0x8752,	// (0x0002345e) bg_set_opt_pane_ParamLimits

0x8752,	// (0x0002345e) bg_set_opt_pane

0x4e2c,	// (0x0001fb38) set_value_pane_t1

0x8773,	// (0x0002347f) slider_set_pane_cp3

0x877c,	// (0x00023488) volume_small_pane_cp

0x8785,	// (0x00023491) list_form_gen_pane

0x878e,	// (0x0002349a) scroll_pane_cp8

0x4e42,	// (0x0001fb4e) form_field_data_pane_ParamLimits

0x4e42,	// (0x0001fb4e) form_field_data_pane

0x4e62,	// (0x0001fb6e) form_field_data_wide_pane_ParamLimits

0x4e62,	// (0x0001fb6e) form_field_data_wide_pane

0x4e83,	// (0x0001fb8f) form_field_popup_pane_ParamLimits

0x4e83,	// (0x0001fb8f) form_field_popup_pane

0x4ea3,	// (0x0001fbaf) form_field_popup_wide_pane_ParamLimits

0x4ea3,	// (0x0001fbaf) form_field_popup_wide_pane

0x4ec0,	// (0x0001fbcc) form_field_slider_pane_ParamLimits

0x4ec0,	// (0x0001fbcc) form_field_slider_pane

0x4ed3,	// (0x0001fbdf) form_field_slider_wide_pane_ParamLimits

0x4ed3,	// (0x0001fbdf) form_field_slider_wide_pane

0x879f,	// (0x000234ab) data_form_pane

0x4ef0,	// (0x0001fbfc) form_field_data_pane_t1

0x87ab,	// (0x000234b7) input_focus_pane

0x4f08,	// (0x0001fc14) data_form_wide_pane

0x4f25,	// (0x0001fc31) form_field_data_wide_pane_t1

0x851c,	// (0x00023228) input_focus_pane_cp6

0x4f47,	// (0x0001fc53) form_field_popup_pane_t1

0x87ab,	// (0x000234b7) input_focus_pane_cp7

0x87d9,	// (0x000234e5) list_form_pane

0x4f67,	// (0x0001fc73) form_field_popup_wide_pane_t1

0x87ab,	// (0x000234b7) input_focus_pane_cp8

0x87e5,	// (0x000234f1) list_form_wide_pane

0x4f84,	// (0x0001fc90) form_field_slider_pane_t1_ParamLimits

0x4f84,	// (0x0001fc90) form_field_slider_pane_t1

0x4f9a,	// (0x0001fca6) form_field_slider_pane_t2_ParamLimits

0x4f9a,	// (0x0001fca6) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002a38e) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002a38e) form_field_slider_pane_t

0x81b7,	// (0x00022ec3) input_focus_pane_cp9_ParamLimits

0x81b7,	// (0x00022ec3) input_focus_pane_cp9

0x4faf,	// (0x0001fcbb) slider_cont_pane_ParamLimits

0x4faf,	// (0x0001fcbb) slider_cont_pane

0x87f4,	// (0x00023500) form_field_slider_wide_pane_t1_ParamLimits

0x87f4,	// (0x00023500) form_field_slider_wide_pane_t1

0x4fc3,	// (0x0001fccf) form_field_slider_wide_pane_t2_ParamLimits

0x4fc3,	// (0x0001fccf) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002a393) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002a393) form_field_slider_wide_pane_t

0x81b7,	// (0x00022ec3) input_focus_pane_cp10_ParamLimits

0x81b7,	// (0x00022ec3) input_focus_pane_cp10

0x4fd5,	// (0x0001fce1) slider_cont_pane_cp1_ParamLimits

0x4fd5,	// (0x0001fce1) slider_cont_pane_cp1

0x4fe9,	// (0x0001fcf5) slider_form_pane_cp

0x8806,	// (0x00023512) input_focus_pane_g1

0x880e,	// (0x0002351a) input_focus_pane_g2

0x8816,	// (0x00023522) input_focus_pane_g3

0x881e,	// (0x0002352a) input_focus_pane_g4

0x8826,	// (0x00023532) input_focus_pane_g5

0x882e,	// (0x0002353a) input_focus_pane_g6

0x8836,	// (0x00023542) input_focus_pane_g7

0x883e,	// (0x0002354a) input_focus_pane_g8

0x8846,	// (0x00023552) input_focus_pane_g9

0x7e52,	// (0x00022b5e) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002a398) input_focus_pane_g

0xa2a4,	// (0x00024fb0) wait_border_pane_g3_copy1

0x4ff1,	// (0x0001fcfd) data_form_pane_t1

0x7e52,	// (0x00022b5e) wait_anim_pane_g1_copy1

0x52e6,	// (0x0001fff2) data_form_wide_pane_t1

0x500c,	// (0x0001fd18) list_form_graphic_pane_cp_ParamLimits

0x500c,	// (0x0001fd18) list_form_graphic_pane_cp

0xb1c5,	// (0x00025ed1) slider_form_pane_g1

0xb1ce,	// (0x00025eda) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a694) slider_form_pane_g

0x5025,	// (0x0001fd31) list_form_graphic_pane_ParamLimits

0x5025,	// (0x0001fd31) list_form_graphic_pane

0x5041,	// (0x0001fd4d) list_form_graphic_pane_g1

0x5049,	// (0x0001fd55) list_form_graphic_pane_t1_ParamLimits

0x5049,	// (0x0001fd55) list_form_graphic_pane_t1

0x7f3c,	// (0x00022c48) list_highlight_pane_cp5_ParamLimits

0x7f3c,	// (0x00022c48) list_highlight_pane_cp5

0x505e,	// (0x0001fd6a) find_pane_g1

0x884e,	// (0x0002355a) input_find_pane

0x5067,	// (0x0001fd73) input_find_pane_g1_ParamLimits

0x5067,	// (0x0001fd73) input_find_pane_g1

0x5073,	// (0x0001fd7f) input_find_pane_t1_ParamLimits

0x5073,	// (0x0001fd7f) input_find_pane_t1

0x5088,	// (0x0001fd94) input_find_pane_t2_ParamLimits

0x5088,	// (0x0001fd94) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002a3ad) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002a3ad) input_find_pane_t

0x8857,	// (0x00023563) input_focus_pane_cp5_ParamLimits

0x8857,	// (0x00023563) input_focus_pane_cp5

0x8871,	// (0x0002357d) bg_popup_window_pane_cp2_ParamLimits

0x8871,	// (0x0002357d) bg_popup_window_pane_cp2

0x887e,	// (0x0002358a) listscroll_menu_pane_ParamLimits

0x887e,	// (0x0002358a) listscroll_menu_pane

0x888a,	// (0x00023596) popup_submenu_window_ParamLimits

0x888a,	// (0x00023596) popup_submenu_window

0x88b6,	// (0x000235c2) find_popup_pane_g1

0x88be,	// (0x000235ca) input_popup_find_pane_cp

0x8857,	// (0x00023563) input_focus_pane_cp4_ParamLimits

0x8857,	// (0x00023563) input_focus_pane_cp4

0x88d4,	// (0x000235e0) input_popup_find_pane_t1_ParamLimits

0x88d4,	// (0x000235e0) input_popup_find_pane_t1

0x7e5c,	// (0x00022b68) bg_popup_sub_pane_cp

0x8902,	// (0x0002360e) listscroll_popup_sub_pane

0x890a,	// (0x00023616) list_submenu_pane_ParamLimits

0x890a,	// (0x00023616) list_submenu_pane

0x891b,	// (0x00023627) scroll_pane_cp4

0x8923,	// (0x0002362f) list_single_popup_submenu_pane_ParamLimits

0x8923,	// (0x0002362f) list_single_popup_submenu_pane

0x8937,	// (0x00023643) list_single_popup_submenu_pane_g1

0x893f,	// (0x0002364b) list_single_popup_submenu_pane_t1_ParamLimits

0x893f,	// (0x0002364b) list_single_popup_submenu_pane_t1

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp1_ParamLimits

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp1

0x8954,	// (0x00023660) tabs_2_active_pane_g1

0x895c,	// (0x00023668) tabs_2_active_pane_t1

0x7f3c,	// (0x00022c48) bg_passive_tab_pane_cp1_ParamLimits

0x7f3c,	// (0x00022c48) bg_passive_tab_pane_cp1

0x8954,	// (0x00023660) tabs_2_passive_pane_g1

0x895c,	// (0x00023668) tabs_2_passive_pane_t1

0x896e,	// (0x0002367a) bg_active_tab_pane_cp4

0x897c,	// (0x00023688) tabs_2_long_active_pane_t1

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp4

0x6b32,	// (0x0002183e) list_single_midp_graphic_pane_g4_ParamLimits

0x896e,	// (0x0002367a) bg_active_tab_pane_cp5

0x899b,	// (0x000236a7) tabs_3_long_active_pane_t1

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp5

0x6b32,	// (0x0002183e) list_single_midp_graphic_pane_g4

0x7f3c,	// (0x00022c48) bg_popup_window_pane_cp13_ParamLimits

0x7f3c,	// (0x00022c48) bg_popup_window_pane_cp13

0x89b6,	// (0x000236c2) listscroll_popup_fast_pane_ParamLimits

0x89b6,	// (0x000236c2) listscroll_popup_fast_pane

0x89c5,	// (0x000236d1) grid_popup_fast_pane_ParamLimits

0x89c5,	// (0x000236d1) grid_popup_fast_pane

0x89d7,	// (0x000236e3) scroll_pane_cp9_ParamLimits

0x89d7,	// (0x000236e3) scroll_pane_cp9

0xcae0,	// (0x000277ec) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x000277ec) list_single_graphic_hl_pane_t1_cp2

0x89fb,	// (0x00023707) input_focus_pane_cp20_ParamLimits

0x89fb,	// (0x00023707) input_focus_pane_cp20

0x8a09,	// (0x00023715) query_popup_data_pane_t1_ParamLimits

0x8a09,	// (0x00023715) query_popup_data_pane_t1

0x8a1c,	// (0x00023728) query_popup_data_pane_t2_ParamLimits

0x8a1c,	// (0x00023728) query_popup_data_pane_t2

0x8a62,	// (0x0002376e) query_popup_data_pane_t3_ParamLimits

0x8a62,	// (0x0002376e) query_popup_data_pane_t3

0x8aa3,	// (0x000237af) query_popup_data_pane_t4_ParamLimits

0x8aa3,	// (0x000237af) query_popup_data_pane_t4

0x8adf,	// (0x000237eb) query_popup_data_pane_t5_ParamLimits

0x8adf,	// (0x000237eb) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002a3b2) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002a3b2) query_popup_data_pane_t

0x8806,	// (0x00023512) bg_set_opt_pane_g1

0x880e,	// (0x0002351a) bg_set_opt_pane_g2

0x8816,	// (0x00023522) bg_set_opt_pane_g3

0x881e,	// (0x0002352a) bg_set_opt_pane_g4

0x8826,	// (0x00023532) bg_set_opt_pane_g5

0x882e,	// (0x0002353a) bg_set_opt_pane_g6

0x8836,	// (0x00023542) bg_set_opt_pane_g7

0x883e,	// (0x0002354a) bg_set_opt_pane_g8

0x8846,	// (0x00023552) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002a3bd) bg_set_opt_pane_g

0x61e2,	// (0x00020eee) control_top_pane_stacon_ParamLimits

0x61e2,	// (0x00020eee) control_top_pane_stacon

0x6235,	// (0x00020f41) signal_pane_stacon_ParamLimits

0x6235,	// (0x00020f41) signal_pane_stacon

0x90cf,	// (0x00023ddb) stacon_top_pane_g1_ParamLimits

0x90cf,	// (0x00023ddb) stacon_top_pane_g1

0x625a,	// (0x00020f66) title_pane_stacon_ParamLimits

0x625a,	// (0x00020f66) title_pane_stacon

0x6284,	// (0x00020f90) uni_indicator_pane_stacon_ParamLimits

0x6284,	// (0x00020f90) uni_indicator_pane_stacon

0x6299,	// (0x00020fa5) battery_pane_stacon_ParamLimits

0x6299,	// (0x00020fa5) battery_pane_stacon

0x62dd,	// (0x00020fe9) control_bottom_pane_stacon_ParamLimits

0x62dd,	// (0x00020fe9) control_bottom_pane_stacon

0x6300,	// (0x0002100c) navi_pane_stacon_ParamLimits

0x6300,	// (0x0002100c) navi_pane_stacon

0x90f1,	// (0x00023dfd) stacon_bottom_pane_g1_ParamLimits

0x90f1,	// (0x00023dfd) stacon_bottom_pane_g1

0x5f45,	// (0x00020c51) aid_levels_signal_lsc_ParamLimits

0x5f45,	// (0x00020c51) aid_levels_signal_lsc

0x5f5b,	// (0x00020c67) signal_pane_stacon_g1_ParamLimits

0x5f5b,	// (0x00020c67) signal_pane_stacon_g1

0x5f6f,	// (0x00020c7b) signal_pane_stacon_g2_ParamLimits

0x5f6f,	// (0x00020c7b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002a3d0) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002a3d0) signal_pane_stacon_g

0x5fa4,	// (0x00020cb0) title_pane_stacon_t1_ParamLimits

0x5fa4,	// (0x00020cb0) title_pane_stacon_t1

0x8b23,	// (0x0002382f) uni_indicator_pane_stacon_g1

0x8b2d,	// (0x00023839) uni_indicator_pane_stacon_g2

0x8b37,	// (0x00023843) uni_indicator_pane_stacon_g3

0x8b41,	// (0x0002384d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002a3dc) uni_indicator_pane_stacon_g

0x5fc9,	// (0x00020cd5) control_top_pane_stacon_g1

0x5fd1,	// (0x00020cdd) control_top_pane_stacon_t1_ParamLimits

0x5fd1,	// (0x00020cdd) control_top_pane_stacon_t1

0x6008,	// (0x00020d14) aid_levels_battery_lsc_ParamLimits

0x6008,	// (0x00020d14) aid_levels_battery_lsc

0x601f,	// (0x00020d2b) battery_pane_stacon_g1_ParamLimits

0x601f,	// (0x00020d2b) battery_pane_stacon_g1

0x6032,	// (0x00020d3e) battery_pane_stacon_g2_ParamLimits

0x6032,	// (0x00020d3e) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002a3e5) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002a3e5) battery_pane_stacon_g

0x6070,	// (0x00020d7c) navi_icon_pane_stacon

0x6084,	// (0x00020d90) navi_navi_pane_stacon

0x6070,	// (0x00020d7c) navi_text_pane_stacon

0x5fc9,	// (0x00020cd5) control_bottom_pane_stacon_g1

0x6098,	// (0x00020da4) control_bottom_pane_stacon_t1_ParamLimits

0x6098,	// (0x00020da4) control_bottom_pane_stacon_t1

0x8b65,	// (0x00023871) grid_app_pane_ParamLimits

0x8b65,	// (0x00023871) grid_app_pane

0x8b89,	// (0x00023895) scroll_pane_cp15_ParamLimits

0x8b89,	// (0x00023895) scroll_pane_cp15

0x8b9c,	// (0x000238a8) cell_app_pane_ParamLimits

0x8b9c,	// (0x000238a8) cell_app_pane

0x8bc0,	// (0x000238cc) cell_app_pane_g1_ParamLimits

0x8bc0,	// (0x000238cc) cell_app_pane_g1

0x8be4,	// (0x000238f0) cell_app_pane_g2_ParamLimits

0x8be4,	// (0x000238f0) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002a3ea) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002a3ea) cell_app_pane_g

0x8bf0,	// (0x000238fc) cell_app_pane_t1_ParamLimits

0x8bf0,	// (0x000238fc) cell_app_pane_t1

0x8c07,	// (0x00023913) grid_highlight_pane_ParamLimits

0x8c07,	// (0x00023913) grid_highlight_pane

0x8806,	// (0x00023512) cell_highlight_pane_g1

0x880e,	// (0x0002351a) cell_highlight_pane_g2

0x8816,	// (0x00023522) cell_highlight_pane_g3

0x881e,	// (0x0002352a) cell_highlight_pane_g4

0x8826,	// (0x00023532) cell_highlight_pane_g5

0x882e,	// (0x0002353a) cell_highlight_pane_g6

0x8836,	// (0x00023542) cell_highlight_pane_g7

0x883e,	// (0x0002354a) cell_highlight_pane_g8

0x8846,	// (0x00023552) cell_highlight_pane_g9

0x7e52,	// (0x00022b5e) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002a398) cell_highlight_pane_g

0x8c18,	// (0x00023924) bg_scroll_pane

0x60e2,	// (0x00020dee) scroll_handle_pane

0x8c5f,	// (0x0002396b) scroll_bg_pane_g1

0x8c74,	// (0x00023980) scroll_bg_pane_g2

0x8c8c,	// (0x00023998) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002a3ef) scroll_bg_pane_g

0x8ca1,	// (0x000239ad) scroll_handle_focus_pane_ParamLimits

0x8ca1,	// (0x000239ad) scroll_handle_focus_pane

0x8c5f,	// (0x0002396b) scroll_handle_pane_g1

0x8cae,	// (0x000239ba) scroll_handle_pane_g2

0x8c8c,	// (0x00023998) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002a3f6) scroll_handle_pane_g

0x8857,	// (0x00023563) bg_popup_sub_pane_cp21_ParamLimits

0x8857,	// (0x00023563) bg_popup_sub_pane_cp21

0x8cc2,	// (0x000239ce) popup_fep_japan_predictive_window_t1_ParamLimits

0x8cc2,	// (0x000239ce) popup_fep_japan_predictive_window_t1

0x8cdc,	// (0x000239e8) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cdc,	// (0x000239e8) popup_fep_japan_predictive_window_t2

0x8d0f,	// (0x00023a1b) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d0f,	// (0x00023a1b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002a3fd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002a3fd) popup_fep_japan_predictive_window_t

0x7e5c,	// (0x00022b68) bg_popup_sub_pane_cp23

0x8d46,	// (0x00023a52) listscroll_japin_cand_pane

0x8d4e,	// (0x00023a5a) popup_fep_japan_candidate_window_t1

0x8d5c,	// (0x00023a68) candidate_pane_ParamLimits

0x8d5c,	// (0x00023a68) candidate_pane

0x8d6e,	// (0x00023a7a) scroll_pane_cp30

0x8d76,	// (0x00023a82) list_single_popup_jap_candidate_pane_ParamLimits

0x8d76,	// (0x00023a82) list_single_popup_jap_candidate_pane

0x7e5c,	// (0x00022b68) list_highlight_pane_cp30

0x8d8b,	// (0x00023a97) list_single_popup_jap_candidate_pane_t1

0x8d9a,	// (0x00023aa6) level_1_signal

0x8dac,	// (0x00023ab8) level_2_signal

0x8dbf,	// (0x00023acb) level_3_signal

0x8dd2,	// (0x00023ade) level_4_signal

0x8de5,	// (0x00023af1) level_5_signal

0x8df8,	// (0x00023b04) level_6_signal

0x8e0b,	// (0x00023b17) level_7_signal

0x8d9a,	// (0x00023aa6) level_1_battery

0x8dac,	// (0x00023ab8) level_2_battery

0x8dbf,	// (0x00023acb) level_3_battery

0x8dd2,	// (0x00023ade) level_4_battery

0x8de5,	// (0x00023af1) level_5_battery

0x8df8,	// (0x00023b04) level_6_battery

0x8e0b,	// (0x00023b17) level_7_battery

0x8e36,	// (0x00023b42) list_menu_pane_ParamLimits

0x8e36,	// (0x00023b42) list_menu_pane

0x8e4c,	// (0x00023b58) scroll_pane_cp25_ParamLimits

0x8e4c,	// (0x00023b58) scroll_pane_cp25

0x8e65,	// (0x00023b71) list_double2_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double2_graphic_pane_cp2

0x8e65,	// (0x00023b71) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double2_large_graphic_pane_cp2

0x8e65,	// (0x00023b71) list_double2_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double2_pane_cp2

0x8e65,	// (0x00023b71) list_double_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double_graphic_pane_cp2

0x8e65,	// (0x00023b71) list_double_large_graphic_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double_large_graphic_pane_cp2

0x8e65,	// (0x00023b71) list_double_number_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double_number_pane_cp2

0x8e65,	// (0x00023b71) list_double_pane_cp2_ParamLimits

0x8e65,	// (0x00023b71) list_double_pane_cp2

0x8e89,	// (0x00023b95) list_single_2graphic_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_2graphic_pane_cp2

0x8e89,	// (0x00023b95) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_graphic_heading_pane_cp2

0x8e89,	// (0x00023b95) list_single_graphic_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_graphic_pane_cp2

0x8e89,	// (0x00023b95) list_single_heading_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_heading_pane_cp2

0x8ea2,	// (0x00023bae) list_single_large_graphic_pane_cp2_ParamLimits

0x8ea2,	// (0x00023bae) list_single_large_graphic_pane_cp2

0x8e89,	// (0x00023b95) list_single_number_heading_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_number_heading_pane_cp2

0x8e89,	// (0x00023b95) list_single_number_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_number_pane_cp2

0x8e89,	// (0x00023b95) list_single_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_pane_cp2

0x8f1e,	// (0x00023c2a) bg_popup_sub_pane_cp22

0x6194,	// (0x00020ea0) popup_side_volume_key_window_g1

0x61be,	// (0x00020eca) popup_side_volume_key_window_t1

0x61da,	// (0x00020ee6) volume_small_pane_cp1

0x81b7,	// (0x00022ec3) bg_popup_sub_pane_cp24_ParamLimits

0x81b7,	// (0x00022ec3) bg_popup_sub_pane_cp24

0x8f34,	// (0x00023c40) fep_china_uni_candidate_pane_ParamLimits

0x8f34,	// (0x00023c40) fep_china_uni_candidate_pane

0x8f48,	// (0x00023c54) fep_china_uni_entry_pane

0x8f58,	// (0x00023c64) popup_fep_china_uni_window_g1

0x8f74,	// (0x00023c80) fep_china_uni_entry_pane_g1

0x8f7c,	// (0x00023c88) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002a42e) fep_china_uni_entry_pane_g

0x8f84,	// (0x00023c90) fep_entry_item_pane

0x8f8e,	// (0x00023c9a) fep_candidate_item_pane

0x8f96,	// (0x00023ca2) fep_china_uni_candidate_pane_g1

0x8f9e,	// (0x00023caa) fep_china_uni_candidate_pane_g2

0x8fa6,	// (0x00023cb2) fep_china_uni_candidate_pane_g3

0x8fae,	// (0x00023cba) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002a433) fep_china_uni_candidate_pane_g

0x7e52,	// (0x00022b5e) fep_entry_item_pane_g1

0x8fb6,	// (0x00023cc2) fep_entry_item_pane_t1_ParamLimits

0x8fb6,	// (0x00023cc2) fep_entry_item_pane_t1

0x8fcc,	// (0x00023cd8) fep_candidate_item_pane_t1_ParamLimits

0x8fcc,	// (0x00023cd8) fep_candidate_item_pane_t1

0x8fe1,	// (0x00023ced) fep_candidate_item_pane_t2_ParamLimits

0x8fe1,	// (0x00023ced) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002a43c) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002a43c) fep_candidate_item_pane_t

0x7f3c,	// (0x00022c48) list_highlight_pane_cp31_ParamLimits

0x7f3c,	// (0x00022c48) list_highlight_pane_cp31

0x8ff3,	// (0x00023cff) level_1_signal_lsc

0x8ffc,	// (0x00023d08) level_2_signal_lsc

0x9005,	// (0x00023d11) level_3_signal_lsc

0x900e,	// (0x00023d1a) level_4_signal_lsc

0x9017,	// (0x00023d23) level_5_signal_lsc

0x9020,	// (0x00023d2c) level_6_signal_lsc

0x9029,	// (0x00023d35) level_7_signal_lsc

0x9029,	// (0x00023d35) level_1_battery_lsc

0x9032,	// (0x00023d3e) level_2_battery_lsc

0x903b,	// (0x00023d47) level_3_battery_lsc

0x9044,	// (0x00023d50) level_4_battery_lsc

0x904d,	// (0x00023d59) level_5_battery_lsc

0x9056,	// (0x00023d62) level_6_battery_lsc

0x8ff3,	// (0x00023cff) level_7_battery_lsc

0x905f,	// (0x00023d6b) scroll_handle_focus_pane_g1

0x9068,	// (0x00023d74) scroll_handle_focus_pane_g2

0x9071,	// (0x00023d7d) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002a441) scroll_handle_focus_pane_g

0x509d,	// (0x0001fda9) list_single_2graphic_pane_g1_ParamLimits

0x509d,	// (0x0001fda9) list_single_2graphic_pane_g1

0x4a2f,	// (0x0001f73b) list_single_2graphic_pane_g2_ParamLimits

0x4a2f,	// (0x0001f73b) list_single_2graphic_pane_g2

0x49b5,	// (0x0001f6c1) list_single_2graphic_pane_g3_ParamLimits

0x49b5,	// (0x0001f6c1) list_single_2graphic_pane_g3

0x50a9,	// (0x0001fdb5) list_single_2graphic_pane_g4_ParamLimits

0x50a9,	// (0x0001fdb5) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002a448) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002a448) list_single_2graphic_pane_g

0x50b5,	// (0x0001fdc1) list_single_2graphic_pane_t1_ParamLimits

0x50b5,	// (0x0001fdc1) list_single_2graphic_pane_t1

0x50e3,	// (0x0001fdef) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x50e3,	// (0x0001fdef) list_double2_graphic_large_graphic_pane_g1

0x4ad4,	// (0x0001f7e0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ad4,	// (0x0001f7e0) list_double2_graphic_large_graphic_pane_g2

0x4ae5,	// (0x0001f7f1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ae5,	// (0x0001f7f1) list_double2_graphic_large_graphic_pane_g3

0x50f3,	// (0x0001fdff) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x50f3,	// (0x0001fdff) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002a451) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002a451) list_double2_graphic_large_graphic_pane_g

0x50ff,	// (0x0001fe0b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x50ff,	// (0x0001fe0b) list_double2_graphic_large_graphic_pane_t1

0x5115,	// (0x0001fe21) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5115,	// (0x0001fe21) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002a45a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002a45a) list_double2_graphic_large_graphic_pane_t

0x91b9,	// (0x00023ec5) popup_fast_swap_window_ParamLimits

0x91b9,	// (0x00023ec5) popup_fast_swap_window

0x91d5,	// (0x00023ee1) popup_side_volume_key_window

0x91f1,	// (0x00023efd) stacon_top_pane

0x91fb,	// (0x00023f07) status_pane_ParamLimits

0x91fb,	// (0x00023f07) status_pane

0x9209,	// (0x00023f15) status_small_pane

0x7e5c,	// (0x00022b68) control_pane

0x7e5c,	// (0x00022b68) stacon_bottom_pane

0x878e,	// (0x0002349a) scroll_pane_cp121

0x8785,	// (0x00023491) set_content_pane

0x907a,	// (0x00023d86) bg_active_tab_pane_g1_cp1

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp1

0x908c,	// (0x00023d98) bg_active_tab_pane_g3_cp1

0x907a,	// (0x00023d86) bg_passive_tab_pane_g1_cp1

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp1

0x908c,	// (0x00023d98) bg_passive_tab_pane_g3_cp1

0x9095,	// (0x00023da1) bg_active_tab_pane_g1_cp2

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp2

0x909e,	// (0x00023daa) bg_active_tab_pane_g3_cp2

0x9095,	// (0x00023da1) bg_passive_tab_pane_g1_cp2

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp2

0x909e,	// (0x00023daa) bg_passive_tab_pane_g3_cp2

0x90a7,	// (0x00023db3) bg_active_tab_pane_g1_cp3

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp3

0x90b0,	// (0x00023dbc) bg_active_tab_pane_g3_cp3

0x90a7,	// (0x00023db3) bg_passive_tab_pane_g1_cp3

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp3

0x90b0,	// (0x00023dbc) bg_passive_tab_pane_g3_cp3

0x90b9,	// (0x00023dc5) bg_active_tab_pane_g1_cp4

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp4

0x90c4,	// (0x00023dd0) bg_active_tab_pane_g3_cp4

0x90b9,	// (0x00023dc5) bg_passive_tab_pane_g1_cp4

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp4

0x90c4,	// (0x00023dd0) bg_passive_tab_pane_g3_cp4

0x910d,	// (0x00023e19) bg_active_tab_pane_g1_cp5

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp5

0x9116,	// (0x00023e22) bg_active_tab_pane_g3_cp5

0x910d,	// (0x00023e19) bg_passive_tab_pane_g1_cp5

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp5

0x9116,	// (0x00023e22) bg_passive_tab_pane_g3_cp5

0x911f,	// (0x00023e2b) list_set_graphic_pane_ParamLimits

0x911f,	// (0x00023e2b) list_set_graphic_pane

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp4

0x913c,	// (0x00023e48) list_set_graphic_pane_g1_ParamLimits

0x913c,	// (0x00023e48) list_set_graphic_pane_g1

0x9148,	// (0x00023e54) list_set_graphic_pane_g2_ParamLimits

0x9148,	// (0x00023e54) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002a45f) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002a45f) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0002a7cd) volume_small_pane_cp_g

0x916c,	// (0x00023e78) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x916c,	// (0x00023e78) list_double2_large_graphic_pane_g1_cp2

0x9178,	// (0x00023e84) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9178,	// (0x00023e84) list_double2_large_graphic_pane_g2_cp2

0x9189,	// (0x00023e95) list_double2_large_graphic_pane_g3_cp2

0x9191,	// (0x00023e9d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9191,	// (0x00023e9d) list_double2_large_graphic_pane_t1_cp2

0x91a7,	// (0x00023eb3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91a7,	// (0x00023eb3) list_double2_large_graphic_pane_t2_cp2

0xad77,	// (0x00025a83) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad77,	// (0x00025a83) list_double_large_graphic_pane_g1_cp2

0xad88,	// (0x00025a94) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad88,	// (0x00025a94) list_double_large_graphic_pane_g2_cp2

0x9322,	// (0x0002402e) list_double_large_graphic_pane_g3_cp2

0xad99,	// (0x00025aa5) list_double_large_graphic_pane_g4_cp

0xada1,	// (0x00025aad) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xada1,	// (0x00025aad) list_double_large_graphic_pane_t1_cp2

0xadb8,	// (0x00025ac4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadb8,	// (0x00025ac4) list_double_large_graphic_pane_t2_cp2

0x9214,	// (0x00023f20) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9214,	// (0x00023f20) list_double2_graphic_pane_g1_cp2

0x9222,	// (0x00023f2e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9222,	// (0x00023f2e) list_double2_graphic_pane_g2_cp2

0x9233,	// (0x00023f3f) list_double2_graphic_pane_g3_cp2

0x923d,	// (0x00023f49) list_double2_graphic_pane_t1_cp2_ParamLimits

0x923d,	// (0x00023f49) list_double2_graphic_pane_t1_cp2

0x9253,	// (0x00023f5f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9253,	// (0x00023f5f) list_double2_graphic_pane_t2_cp2

0x9265,	// (0x00023f71) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9265,	// (0x00023f71) list_single_number_heading_pane_g1_cp2

0x9271,	// (0x00023f7d) list_single_number_heading_pane_g2_cp2

0x9279,	// (0x00023f85) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9279,	// (0x00023f85) list_single_number_heading_pane_t1_cp2

0x928f,	// (0x00023f9b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x928f,	// (0x00023f9b) list_single_number_heading_pane_t2_cp2

0x92a1,	// (0x00023fad) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92a1,	// (0x00023fad) list_single_number_heading_pane_t3_cp2

0x9265,	// (0x00023f71) list_single_heading_pane_g1_cp2_ParamLimits

0x9265,	// (0x00023f71) list_single_heading_pane_g1_cp2

0x9271,	// (0x00023f7d) list_single_heading_pane_g2_cp2

0x9279,	// (0x00023f85) list_single_heading_pane_t1_cp2_ParamLimits

0x9279,	// (0x00023f85) list_single_heading_pane_t1_cp2

0xab7f,	// (0x0002588b) list_single_heading_pane_t2_cp2_ParamLimits

0xab7f,	// (0x0002588b) list_single_heading_pane_t2_cp2

0xaac7,	// (0x000257d3) list_double_graphic_pane_g1_cp2_ParamLimits

0xaac7,	// (0x000257d3) list_double_graphic_pane_g1_cp2

0xaad3,	// (0x000257df) list_double_graphic_pane_g2_cp2_ParamLimits

0xaad3,	// (0x000257df) list_double_graphic_pane_g2_cp2

0xaae2,	// (0x000257ee) list_double_graphic_pane_g3_cp2

0xaaea,	// (0x000257f6) list_double_graphic_pane_t1_cp2_ParamLimits

0xaaea,	// (0x000257f6) list_double_graphic_pane_t1_cp2

0xab00,	// (0x0002580c) list_double_graphic_pane_t2_cp2_ParamLimits

0xab00,	// (0x0002580c) list_double_graphic_pane_t2_cp2

0x9316,	// (0x00024022) list_double_number_pane_g1_cp2_ParamLimits

0x9316,	// (0x00024022) list_double_number_pane_g1_cp2

0x9322,	// (0x0002402e) list_double_number_pane_g2_cp2

0xaa8b,	// (0x00025797) list_double_number_pane_t1_cp2_ParamLimits

0xaa8b,	// (0x00025797) list_double_number_pane_t1_cp2

0xaa9f,	// (0x000257ab) list_double_number_pane_t2_cp2_ParamLimits

0xaa9f,	// (0x000257ab) list_double_number_pane_t2_cp2

0xaab5,	// (0x000257c1) list_double_number_pane_t3_cp2_ParamLimits

0xaab5,	// (0x000257c1) list_double_number_pane_t3_cp2

0xa974,	// (0x00025680) list_single_graphic_pane_g1_cp2_ParamLimits

0xa974,	// (0x00025680) list_single_graphic_pane_g1_cp2

0x937a,	// (0x00024086) list_single_graphic_pane_g2_cp2_ParamLimits

0x937a,	// (0x00024086) list_single_graphic_pane_g2_cp2

0x9386,	// (0x00024092) list_single_graphic_pane_g3_cp2

0xa94a,	// (0x00025656) list_single_graphic_pane_t1_cp2_ParamLimits

0xa94a,	// (0x00025656) list_single_graphic_pane_t1_cp2

0x937a,	// (0x00024086) list_single_number_pane_g1_cp2_ParamLimits

0x937a,	// (0x00024086) list_single_number_pane_g1_cp2

0x9386,	// (0x00024092) list_single_number_pane_g2_cp2

0xa94a,	// (0x00025656) list_single_number_pane_t1_cp2_ParamLimits

0xa94a,	// (0x00025656) list_single_number_pane_t1_cp2

0xa960,	// (0x0002566c) list_single_number_pane_t2_cp2_ParamLimits

0xa960,	// (0x0002566c) list_single_number_pane_t2_cp2

0x9178,	// (0x00023e84) list_double2_pane_g1_cp2_ParamLimits

0x9178,	// (0x00023e84) list_double2_pane_g1_cp2

0x9189,	// (0x00023e95) list_double2_pane_g2_cp2

0x92ee,	// (0x00023ffa) list_double2_pane_t1_cp2_ParamLimits

0x92ee,	// (0x00023ffa) list_double2_pane_t1_cp2

0x9304,	// (0x00024010) list_double2_pane_t2_cp2_ParamLimits

0x9304,	// (0x00024010) list_double2_pane_t2_cp2

0x9316,	// (0x00024022) list_double_pane_g1_cp2_ParamLimits

0x9316,	// (0x00024022) list_double_pane_g1_cp2

0x9322,	// (0x0002402e) list_double_pane_g2_cp2

0x932a,	// (0x00024036) list_double_pane_t1_cp2_ParamLimits

0x932a,	// (0x00024036) list_double_pane_t1_cp2

0x9340,	// (0x0002404c) list_double_pane_t2_cp2_ParamLimits

0x9340,	// (0x0002404c) list_double_pane_t2_cp2

0x936a,	// (0x00024076) list_single_pane_cp2_g3

0x937a,	// (0x00024086) list_single_pane_g1_cp2_ParamLimits

0x937a,	// (0x00024086) list_single_pane_g1_cp2

0x9386,	// (0x00024092) list_single_pane_g2_cp2

0x938e,	// (0x0002409a) list_single_pane_t1_cp2_ParamLimits

0x938e,	// (0x0002409a) list_single_pane_t1_cp2

0x93a6,	// (0x000240b2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93a6,	// (0x000240b2) list_single_large_graphic_pane_g1_cp2

0x93b2,	// (0x000240be) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93b2,	// (0x000240be) list_single_large_graphic_pane_g2_cp2

0x93be,	// (0x000240ca) list_single_large_graphic_pane_g3_cp2

0x93c6,	// (0x000240d2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93c6,	// (0x000240d2) list_single_large_graphic_pane_g4_cp1

0x93e0,	// (0x000240ec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93e0,	// (0x000240ec) list_single_large_graphic_pane_t1_cp2

0xa916,	// (0x00025622) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa916,	// (0x00025622) list_single_graphic_heading_pane_g1_cp2

0xa8e3,	// (0x000255ef) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8e3,	// (0x000255ef) list_single_graphic_heading_pane_g4_cp2

0x9386,	// (0x00024092) list_single_graphic_heading_pane_g5_cp2

0xa922,	// (0x0002562e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa922,	// (0x0002562e) list_single_graphic_heading_pane_t1_cp2

0xa938,	// (0x00025644) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa938,	// (0x00025644) list_single_graphic_heading_pane_t2_cp2

0xa8d7,	// (0x000255e3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8d7,	// (0x000255e3) list_single_2graphic_pane_g1_cp2

0xa8e3,	// (0x000255ef) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8e3,	// (0x000255ef) list_single_2graphic_pane_g2_cp2

0x9386,	// (0x00024092) list_single_2graphic_pane_g3_cp2

0xa8f4,	// (0x00025600) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8f4,	// (0x00025600) list_single_2graphic_pane_g4_cp2

0xa900,	// (0x0002560c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa900,	// (0x0002560c) list_single_2graphic_pane_t1_cp2

0x7e52,	// (0x00022b5e) list_highlight_pane_g10_cp1

0xa4af,	// (0x000251bb) list_highlight_pane_g1_cp1

0xa4b7,	// (0x000251c3) list_highlight_pane_g2_cp1

0xa4bf,	// (0x000251cb) list_highlight_pane_g3_cp1

0xa4c7,	// (0x000251d3) list_highlight_pane_g4_cp1

0xa4cf,	// (0x000251db) list_highlight_pane_g5_cp1

0xa4d7,	// (0x000251e3) list_highlight_pane_g6_cp1

0xa4df,	// (0x000251eb) list_highlight_pane_g7_cp1

0xa4e7,	// (0x000251f3) list_highlight_pane_g8_cp1

0xa4ef,	// (0x000251fb) list_highlight_pane_g9_cp1

0xa3cf,	// (0x000250db) form_field_slider_pane_t3

0xa3dd,	// (0x000250e9) form_field_slider_pane_t4

0xa3eb,	// (0x000250f7) slider_form_pane_ParamLimits

0xa3eb,	// (0x000250f7) slider_form_pane

0x7e5c,	// (0x00022b68) control_abbreviations

0x7e5c,	// (0x00022b68) control_conventions

0x7e5c,	// (0x00022b68) control_definitions

0x7e5c,	// (0x00022b68) format_table_attribute

0xabc9,	// (0x000258d5) bg_popup_preview_window_pane_g9

0x7e5c,	// (0x00022b68) format_table_data2

0x7e5c,	// (0x00022b68) format_table_data3

0x7e5c,	// (0x00022b68) format_table_data_example

0x0008,

0x7e5c,	// (0x00022b68) intro_purpose

0xf8e8,	// (0x0002a5f4) bg_popup_preview_window_pane_g

0x7e5c,	// (0x00022b68) texts_category

0x7e5c,	// (0x00022b68) texts_graphics

0x93f6,	// (0x00024102) text_digital

0x9405,	// (0x00024111) text_primary

0x9414,	// (0x00024120) text_primary_small

0x9423,	// (0x0002412f) text_secondary

0x9432,	// (0x0002413e) text_title

0xb304,	// (0x00026010) bg_passive_tab_pane_g1_cp3_srt

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp3_srt

0xb30d,	// (0x00026019) bg_passive_tab_pane_g3_cp3_srt

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp3_srt

0xb316,	// (0x00026022) tabs_4_active_pane_srt_g1

0xb31e,	// (0x0002602a) tabs_4_active_pane_srt_t1_ParamLimits

0xb31e,	// (0x0002602a) tabs_4_active_pane_srt_t1

0xb304,	// (0x00026010) bg_active_tab_pane_g1_cp3_copy1

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp3_copy1

0xb30d,	// (0x00026019) bg_active_tab_pane_g3_cp3_copy1

0x7f3c,	// (0x00022c48) tabs_2_long_active_pane_srt_ParamLimits

0x7f3c,	// (0x00022c48) tabs_2_long_active_pane_srt

0x7f3c,	// (0x00022c48) tabs_2_long_passive_pane_srt_ParamLimits

0x7f3c,	// (0x00022c48) tabs_2_long_passive_pane_srt

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp4_srt

0xaff8,	// (0x00025d04) bg_passive_tab_pane_g1_cp4_srt

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp4_srt

0xb001,	// (0x00025d0d) bg_passive_tab_pane_g3_cp4_srt

0x896e,	// (0x0002367a) bg_active_tab_pane_cp4_srt_ParamLimits

0x896e,	// (0x0002367a) bg_active_tab_pane_cp4_srt

0xb00a,	// (0x00025d16) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb00a,	// (0x00025d16) tabs_2_long_active_pane_srt_t1

0xaff8,	// (0x00025d04) bg_active_tab_pane_g1_cp4_srt

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp4_srt

0xb001,	// (0x00025d0d) bg_active_tab_pane_g3_cp4_srt

0x81b7,	// (0x00022ec3) tabs_3_long_active_pane_srt_ParamLimits

0x81b7,	// (0x00022ec3) tabs_3_long_active_pane_srt

0x81b7,	// (0x00022ec3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81b7,	// (0x00022ec3) tabs_3_long_passive_pane_cp_srt

0x81b7,	// (0x00022ec3) tabs_3_long_passive_pane_srt_ParamLimits

0x81b7,	// (0x00022ec3) tabs_3_long_passive_pane_srt

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp5_srt

0x910d,	// (0x00023e19) bg_passive_tab_pane_g1_cp5_srt

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp5_srt

0x9116,	// (0x00023e22) bg_passive_tab_pane_g3_cp5_srt

0x896e,	// (0x0002367a) bg_active_tab_pane_cp5_srt_ParamLimits

0x896e,	// (0x0002367a) bg_active_tab_pane_cp5_srt

0xafe6,	// (0x00025cf2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafe6,	// (0x00025cf2) tabs_3_long_active_pane_srt_t1

0x910d,	// (0x00023e19) bg_active_tab_pane_g1_cp5_srt

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp5_srt

0x9116,	// (0x00023e22) bg_active_tab_pane_g3_cp5_srt

0xafd8,	// (0x00025ce4) navi_text_pane_srt_t1

0xafd0,	// (0x00025cdc) navi_icon_pane_srt_g1

0x95fb,	// (0x00024307) midp_editing_number_pane_srt

0x9441,	// (0x0002414d) midp_ticker_pane_srt

0x9603,	// (0x0002430f) midp_ticker_pane_srt_g1

0x960b,	// (0x00024317) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002a47e) midp_ticker_pane_srt_g

0x9613,	// (0x0002431f) midp_ticker_pane_srt_t1

0xafc1,	// (0x00025ccd) midp_editing_number_pane_t1_copy1

0x898f,	// (0x0002369b) listscroll_midp_pane

0x898f,	// (0x0002369b) midp_form_pane

0x94ad,	// (0x000241b9) midp_info_popup_window_ParamLimits

0x94ad,	// (0x000241b9) midp_info_popup_window

0x8857,	// (0x00023563) bg_popup_sub_pane_cp50_ParamLimits

0x8857,	// (0x00023563) bg_popup_sub_pane_cp50

0xa0db,	// (0x00024de7) listscroll_midp_info_pane_ParamLimits

0xa0db,	// (0x00024de7) listscroll_midp_info_pane

0xa0c3,	// (0x00024dcf) listscroll_form_midp_pane_ParamLimits

0xa0c3,	// (0x00024dcf) listscroll_form_midp_pane

0xa0cf,	// (0x00024ddb) scroll_bar_cp050

0xa0a3,	// (0x00024daf) list_midp_pane

0xbd59,	// (0x00026a65) signal_pane_g2_cp

0x9fdd,	// (0x00024ce9) listscroll_midp_info_pane_t1_ParamLimits

0x9fdd,	// (0x00024ce9) listscroll_midp_info_pane_t1

0x9ff5,	// (0x00024d01) listscroll_midp_info_pane_t2_ParamLimits

0x9ff5,	// (0x00024d01) listscroll_midp_info_pane_t2

0xa033,	// (0x00024d3f) listscroll_midp_info_pane_t3_ParamLimits

0xa033,	// (0x00024d3f) listscroll_midp_info_pane_t3

0xa06d,	// (0x00024d79) listscroll_midp_info_pane_t4_ParamLimits

0xa06d,	// (0x00024d79) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a52f) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a52f) listscroll_midp_info_pane_t

0x891b,	// (0x00023627) scroll_pane_cp21

0x9f7b,	// (0x00024c87) form_midp_field_choice_group_pane

0x9f84,	// (0x00024c90) form_midp_field_text_pane

0x9fc3,	// (0x00024ccf) form_midp_field_time_pane

0x9fcb,	// (0x00024cd7) form_midp_gauge_slider_pane

0x9fd4,	// (0x00024ce0) form_midp_gauge_wait_pane

0x7e5c,	// (0x00022b68) form_midp_image_pane

0x528c,	// (0x0001ff98) list_single_midp_pane_ParamLimits

0x528c,	// (0x0001ff98) list_single_midp_pane

0x9f33,	// (0x00024c3f) form_midp_field_text_pane_t1

0x9cfd,	// (0x00024a09) input_focus_pane_cp050

0x9f6a,	// (0x00024c76) list_midp_form_text_pane

0x9f02,	// (0x00024c0e) form_midp_field_choice_group_pane_t1

0x9f10,	// (0x00024c1c) input_focus_pane_cp051

0x9f24,	// (0x00024c30) list_midp_choice_pane

0x7e5c,	// (0x00022b68) status_idle_pane

0x9ee6,	// (0x00024bf2) form_midp_field_time_pane_t1

0x7e52,	// (0x00022b5e) wait_anim_pane_g2_copy1

0x9ef4,	// (0x00024c00) form_midp_field_time_pane_t2

0x0001,

0x955b,	// (0x00024267) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a52a) form_midp_field_time_pane_t

0x7e5c,	// (0x00022b68) input_focus_pane_cp052

0x7e5c,	// (0x00022b68) bg_input_focus_pane_cp040

0x9ea6,	// (0x00024bb2) form_midp_gauge_slider_pane_t1

0x9eb4,	// (0x00024bc0) form_midp_gauge_slider_pane_t2

0x9ec2,	// (0x00024bce) form_midp_gauge_slider_pane_t3

0x9ed0,	// (0x00024bdc) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a521) form_midp_gauge_slider_pane_t

0x9ede,	// (0x00024bea) form_midp_slider_pane

0x7f3c,	// (0x00022c48) bg_input_focus_pane_cp041_ParamLimits

0x7f3c,	// (0x00022c48) bg_input_focus_pane_cp041

0x9e73,	// (0x00024b7f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e73,	// (0x00024b7f) form_midp_gauge_wait_pane_t1

0x9e85,	// (0x00024b91) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e85,	// (0x00024b91) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a51c) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a51c) form_midp_gauge_wait_pane_t

0x9e97,	// (0x00024ba3) form_midp_wait_pane_ParamLimits

0x9e97,	// (0x00024ba3) form_midp_wait_pane

0x9e3d,	// (0x00024b49) form_midp_image_pane_g1

0x9e46,	// (0x00024b52) form_midp_image_pane_t1

0x9e55,	// (0x00024b61) form_midp_image_pane_t2

0x9e64,	// (0x00024b70) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a515) form_midp_image_pane_t

0x9e34,	// (0x00024b40) list_single_midp_pane_g1

0x527d,	// (0x0001ff89) list_single_midp_pane_t1

0x9e0c,	// (0x00024b18) list_midp_form_item_pane_ParamLimits

0x9e0c,	// (0x00024b18) list_midp_form_item_pane

0x9503,	// (0x0002420f) list_midp_form_item_pane_t1

0x9512,	// (0x0002421e) midp_ticker_pane_g1

0x951e,	// (0x0002422a) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002a464) midp_ticker_pane_g

0x952a,	// (0x00024236) midp_ticker_pane_t1

0xb212,	// (0x00025f1e) midp_editing_number_pane_t1

0xb1f0,	// (0x00025efc) midp_editing_number_pane

0xb1ff,	// (0x00025f0b) midp_ticker_pane

0xafb1,	// (0x00025cbd) ai_message_heading_pane

0x7e5c,	// (0x00022b68) bg_popup_window_pane_cp14

0xafb9,	// (0x00025cc5) listscroll_ai_message_pane

0xaf3b,	// (0x00025c47) ai_message_heading_pane_g1_ParamLimits

0xaf3b,	// (0x00025c47) ai_message_heading_pane_g1

0xaf47,	// (0x00025c53) ai_message_heading_pane_g2_ParamLimits

0xaf47,	// (0x00025c53) ai_message_heading_pane_g2

0xaf53,	// (0x00025c5f) ai_message_heading_pane_g3_ParamLimits

0xaf53,	// (0x00025c5f) ai_message_heading_pane_g3

0xaf5f,	// (0x00025c6b) ai_message_heading_pane_g4_ParamLimits

0xaf5f,	// (0x00025c6b) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a656) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a656) ai_message_heading_pane_g

0xaf6b,	// (0x00025c77) ai_message_heading_pane_t1_ParamLimits

0xaf6b,	// (0x00025c77) ai_message_heading_pane_t1

0xaf85,	// (0x00025c91) ai_message_heading_pane_t2_ParamLimits

0xaf85,	// (0x00025c91) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a65f) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a65f) ai_message_heading_pane_t

0xaf97,	// (0x00025ca3) bg_popup_heading_pane_cp1_ParamLimits

0xaf97,	// (0x00025ca3) bg_popup_heading_pane_cp1

0xaf29,	// (0x00025c35) list_ai_message_pane_ParamLimits

0xaf29,	// (0x00025c35) list_ai_message_pane

0x891b,	// (0x00023627) scroll_pane_cp10

0xaec5,	// (0x00025bd1) list_ai_message_pane_g1

0xaecd,	// (0x00025bd9) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a633) list_ai_message_pane_g

0xaed5,	// (0x00025be1) list_ai_message_pane_t1_ParamLimits

0xaed5,	// (0x00025be1) list_ai_message_pane_t1

0xaeea,	// (0x00025bf6) list_ai_message_pane_t2_ParamLimits

0xaeea,	// (0x00025bf6) list_ai_message_pane_t2

0xaeff,	// (0x00025c0b) list_ai_message_pane_t3_ParamLimits

0xaeff,	// (0x00025c0b) list_ai_message_pane_t3

0xaf14,	// (0x00025c20) list_ai_message_pane_t4_ParamLimits

0xaf14,	// (0x00025c20) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a638) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a638) list_ai_message_pane_t

0xaeb0,	// (0x00025bbc) cell_ai_soft_ind_pane_ParamLimits

0xaeb0,	// (0x00025bbc) cell_ai_soft_ind_pane

0x953c,	// (0x00024248) cell_ai_soft_ind_pane_g1_ParamLimits

0x953c,	// (0x00024248) cell_ai_soft_ind_pane_g1

0x7e5c,	// (0x00022b68) grid_highlight_cp1

0x9549,	// (0x00024255) text_secondary_cp56_ParamLimits

0x9549,	// (0x00024255) text_secondary_cp56

0xae85,	// (0x00025b91) example_general_pane_ParamLimits

0xae85,	// (0x00025b91) example_general_pane

0xae91,	// (0x00025b9d) example_parent_pane_g1_ParamLimits

0xae91,	// (0x00025b9d) example_parent_pane_g1

0xae9d,	// (0x00025ba9) example_parent_pane_t1_ParamLimits

0xae9d,	// (0x00025ba9) example_parent_pane_t1

0x68ad,	// (0x000215b9) popup_preview_text_window_ParamLimits

0x68ad,	// (0x000215b9) popup_preview_text_window

0x9372,	// (0x0002407e) list_single_pane_cp2_g4

0x826d,	// (0x00022f79) bg_popup_preview_window_pane_ParamLimits

0x826d,	// (0x00022f79) bg_popup_preview_window_pane

0xabd1,	// (0x000258dd) popup_preview_text_window_t1_ParamLimits

0xabd1,	// (0x000258dd) popup_preview_text_window_t1

0xabef,	// (0x000258fb) popup_preview_text_window_t2_ParamLimits

0xabef,	// (0x000258fb) popup_preview_text_window_t2

0xac38,	// (0x00025944) popup_preview_text_window_t3_ParamLimits

0xac38,	// (0x00025944) popup_preview_text_window_t3

0xac7d,	// (0x00025989) popup_preview_text_window_t4_ParamLimits

0xac7d,	// (0x00025989) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a607) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a607) popup_preview_text_window_t

0xacfb,	// (0x00025a07) scroll_pane_cp11

0x9c89,	// (0x00024995) bg_popup_preview_window_pane_g1

0xab91,	// (0x0002589d) bg_popup_preview_window_pane_g2

0xab99,	// (0x000258a5) bg_popup_preview_window_pane_g3

0xaba1,	// (0x000258ad) bg_popup_preview_window_pane_g4

0xaba9,	// (0x000258b5) bg_popup_preview_window_pane_g5

0xabb1,	// (0x000258bd) bg_popup_preview_window_pane_g6

0xabb9,	// (0x000258c5) bg_popup_preview_window_pane_g7

0xabc1,	// (0x000258cd) bg_popup_preview_window_pane_g8

0x5ad1,	// (0x000207dd) aid_popup_width_pane

0x688b,	// (0x00021597) popup_midp_note_alarm_window_ParamLimits

0x688b,	// (0x00021597) popup_midp_note_alarm_window

0x879f,	// (0x000234ab) data_form_pane_ParamLimits

0x4ee6,	// (0x0001fbf2) form_field_data_pane_g1

0x4ef0,	// (0x0001fbfc) form_field_data_pane_t1_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_ParamLimits

0x4f08,	// (0x0001fc14) data_form_wide_pane_ParamLimits

0x4f19,	// (0x0001fc25) form_field_data_wide_pane_g1

0x4f25,	// (0x0001fc31) form_field_data_wide_pane_t1_ParamLimits

0x851c,	// (0x00023228) input_focus_pane_cp6_ParamLimits

0x88c8,	// (0x000235d4) input_popup_find_pane_g1_ParamLimits

0x88c8,	// (0x000235d4) input_popup_find_pane_g1

0x6043,	// (0x00020d4f) aid_navi_side_left_pane

0x6058,	// (0x00020d64) aid_navi_side_right_pane

0xa5aa,	// (0x000252b6) bg_popup_window_pane_cp30_ParamLimits

0xa5aa,	// (0x000252b6) bg_popup_window_pane_cp30

0xa624,	// (0x00025330) popup_midp_note_alarm_window_g1_ParamLimits

0xa624,	// (0x00025330) popup_midp_note_alarm_window_g1

0xa654,	// (0x00025360) popup_midp_note_alarm_window_t1_ParamLimits

0xa654,	// (0x00025360) popup_midp_note_alarm_window_t1

0xa6f5,	// (0x00025401) popup_midp_note_alarm_window_t2_ParamLimits

0xa6f5,	// (0x00025401) popup_midp_note_alarm_window_t2

0xa7a3,	// (0x000254af) popup_midp_note_alarm_window_t3_ParamLimits

0xa7a3,	// (0x000254af) popup_midp_note_alarm_window_t3

0xa7d5,	// (0x000254e1) popup_midp_note_alarm_window_t4_ParamLimits

0xa7d5,	// (0x000254e1) popup_midp_note_alarm_window_t4

0xa7fb,	// (0x00025507) popup_midp_note_alarm_window_t5_ParamLimits

0xa7fb,	// (0x00025507) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a5a4) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a5a4) popup_midp_note_alarm_window_t

0xa8a7,	// (0x000255b3) wait_bar_pane_cp1_ParamLimits

0xa8a7,	// (0x000255b3) wait_bar_pane_cp1

0x7e5c,	// (0x00022b68) wait_anim_pane_copy1

0x7e5c,	// (0x00022b68) wait_border_pane_copy1

0xa290,	// (0x00024f9c) wait_border_pane_g1_copy1

0x4f3f,	// (0x0001fc4b) form_field_popup_pane_g1

0x4f47,	// (0x0001fc53) form_field_popup_pane_t1_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_cp7_ParamLimits

0x87d9,	// (0x000234e5) list_form_pane_ParamLimits

0x4f5f,	// (0x0001fc6b) form_field_popup_wide_pane_g1

0x4f67,	// (0x0001fc73) form_field_popup_wide_pane_t1_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_cp8_ParamLimits

0x87e5,	// (0x000234f1) list_form_wide_pane_ParamLimits

0xb39c,	// (0x000260a8) aid_size_cell_graphic_pane

0x4ff1,	// (0x0001fcfd) data_form_pane_t1_ParamLimits

0x52e6,	// (0x0001fff2) data_form_wide_pane_t1_ParamLimits

0x9856,	// (0x00024562) bg_status_flat_pane

0x7e9c,	// (0x00022ba8) title_pane_t1_ParamLimits

0x7f04,	// (0x00022c10) title_pane_t2_ParamLimits

0x7f2a,	// (0x00022c36) title_pane_t3_ParamLimits

0xf557,	// (0x0002a263) title_pane_t_ParamLimits

0x8d9a,	// (0x00023aa6) level_1_signal_ParamLimits

0x8dac,	// (0x00023ab8) level_2_signal_ParamLimits

0x8dbf,	// (0x00023acb) level_3_signal_ParamLimits

0x8dd2,	// (0x00023ade) level_4_signal_ParamLimits

0x8de5,	// (0x00023af1) level_5_signal_ParamLimits

0x8df8,	// (0x00023b04) level_6_signal_ParamLimits

0x8e0b,	// (0x00023b17) level_7_signal_ParamLimits

0x8d9a,	// (0x00023aa6) level_1_battery_ParamLimits

0x8dac,	// (0x00023ab8) level_2_battery_ParamLimits

0x8dbf,	// (0x00023acb) level_3_battery_ParamLimits

0x8dd2,	// (0x00023ade) level_4_battery_ParamLimits

0x8de5,	// (0x00023af1) level_5_battery_ParamLimits

0x8df8,	// (0x00023b04) level_6_battery_ParamLimits

0x8e0b,	// (0x00023b17) level_7_battery_ParamLimits

0xa4af,	// (0x000251bb) bg_status_flat_pane_g1

0xa4b7,	// (0x000251c3) bg_status_flat_pane_g2

0xa4bf,	// (0x000251cb) bg_status_flat_pane_g3

0xa4c7,	// (0x000251d3) bg_status_flat_pane_g4

0xa4cf,	// (0x000251db) bg_status_flat_pane_g5

0xa4d7,	// (0x000251e3) bg_status_flat_pane_g6

0xa4df,	// (0x000251eb) bg_status_flat_pane_g7

0x7f52,	// (0x00022c5e) tabs_3_active_pane_t1_ParamLimits

0x7f52,	// (0x00022c5e) tabs_3_passive_pane_t1_ParamLimits

0x7f6c,	// (0x00022c78) tabs_4_active_pane_t1_ParamLimits

0x7f6c,	// (0x00022c78) tabs_4_1_passive_pane_t1_ParamLimits

0x895c,	// (0x00023668) tabs_2_active_pane_t1_ParamLimits

0x895c,	// (0x00023668) tabs_2_passive_pane_t1_ParamLimits

0x896e,	// (0x0002367a) bg_active_tab_pane_cp4_ParamLimits

0x897c,	// (0x00023688) tabs_2_long_active_pane_t1_ParamLimits

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp4_ParamLimits

0x160d,	// (0x0001c319) list_single_midp_graphic_pane_t1_ParamLimits

0x896e,	// (0x0002367a) bg_active_tab_pane_cp5_ParamLimits

0x899b,	// (0x000236a7) tabs_3_long_active_pane_t1_ParamLimits

0x898f,	// (0x0002369b) bg_passive_tab_pane_cp5_ParamLimits

0x160d,	// (0x0001c319) list_single_midp_graphic_pane_t1

0x9856,	// (0x00024562) bg_status_flat_pane_ParamLimits

0x9919,	// (0x00024625) indicator_pane_cp2_ParamLimits

0x9919,	// (0x00024625) indicator_pane_cp2

0x9a44,	// (0x00024750) navi_pane_srt_ParamLimits

0x9a44,	// (0x00024750) navi_pane_srt

0x9a68,	// (0x00024774) popup_clock_digital_analogue_window_cp1

0x8019,	// (0x00022d25) indicator_pane_t1

0x9441,	// (0x0002414d) copy_highlight_pane

0x9441,	// (0x0002414d) cursor_graphics_pane

0x9441,	// (0x0002414d) graphic_within_text_pane

0x9441,	// (0x0002414d) link_highlight_pane

0xacbe,	// (0x000259ca) popup_preview_text_window_t5_ParamLimits

0xacbe,	// (0x000259ca) popup_preview_text_window_t5

0x9563,	// (0x0002426f) cursor_digital_pane

0x9563,	// (0x0002426f) cursor_primary_pane

0x9574,	// (0x00024280) cursor_primary_small_pane

0x957c,	// (0x00024288) cursor_secondary_pane

0x9584,	// (0x00024290) cursor_title_pane

0x9563,	// (0x0002426f) link_highlight_digital_pane

0x956b,	// (0x00024277) link_highlight_primary_pane

0x9574,	// (0x00024280) link_highlight_primary_small_pane

0x957c,	// (0x00024288) link_highlight_secondary_pane

0x9584,	// (0x00024290) link_highlight_title_pane

0x9563,	// (0x0002426f) copy_highlight_digital_pane

0x9563,	// (0x0002426f) copy_highlight_primary_pane

0x9574,	// (0x00024280) copy_highlight_primary_small_pane

0x957c,	// (0x00024288) copy_highlight_secondary_pane

0x9584,	// (0x00024290) copy_highlight_title_pane

0x957c,	// (0x00024288) graphic_text_digital_pane

0xa54d,	// (0x00025259) graphic_text_primary_pane

0xa556,	// (0x00025262) graphic_text_primary_small_pane

0x9574,	// (0x00024280) graphic_text_secondary_pane

0x9563,	// (0x0002426f) graphic_text_title_pane

0x958c,	// (0x00024298) cursor_primary_pane_g1

0xa53f,	// (0x0002524b) cursor_text_primary_t1

0xa527,	// (0x00025233) cursor_primary_small_pane_g1

0xa531,	// (0x0002523d) cursor_text_primary_small_t1

0xa50f,	// (0x0002521b) cursor_primary_small_pane_g1_copy1

0xa519,	// (0x00025225) cursor_text_primary_small_t1_copy1

0xa4f7,	// (0x00025203) cursor_text_title_t1

0xa505,	// (0x00025211) cursor_title_pane_g1

0x958c,	// (0x00024298) cursor_digital_pane_g1

0x9596,	// (0x000242a2) cursor_text_digital_t1

0x95bb,	// (0x000242c7) link_highlight_primary_pane_g1

0xa4a0,	// (0x000251ac) link_highlight_primary_pane_t1

0x95a4,	// (0x000242b0) link_highlight_primary_small_pane_g1

0x95ac,	// (0x000242b8) link_highlight_primary_small_pane_t1

0x95bb,	// (0x000242c7) link_highlight_secondary_pane_g1

0x95c3,	// (0x000242cf) link_highlight_secondary_pane_t1

0xa414,	// (0x00025120) link_highlight_title_pane_g1

0xa41c,	// (0x00025128) link_highlight_title_pane_t1

0xa3fd,	// (0x00025109) link_highlight_digital_pane_g1

0xa405,	// (0x00025111) link_highlight_digital_pane_t1

0xa2d5,	// (0x00024fe1) copy_highlight_primary_pane_g1

0xa2dd,	// (0x00024fe9) copy_highlight_primary_pane_t1

0xa2af,	// (0x00024fbb) copy_highlight_primary_small_pane_g1

0xa2c6,	// (0x00024fd2) copy_highlight_primary_small_pane_t1

0x95d2,	// (0x000242de) copy_highlight_secondary_pane_g1

0x95da,	// (0x000242e6) copy_highlight_secondary_pane_t1

0xa2af,	// (0x00024fbb) copy_highlight_title_pane_g1

0xa2b7,	// (0x00024fc3) copy_highlight_title_pane_t1

0xa2d5,	// (0x00024fe1) copy_highlight_digital_pane_g1

0xb566,	// (0x00026272) copy_highlight_digital_pane_t1

0xb4ba,	// (0x000261c6) graphic_text_primary_pane_g1

0xb54a,	// (0x00026256) graphic_text_primary_pane_t1

0xb558,	// (0x00026264) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a6d3) graphic_text_primary_pane_t

0xb526,	// (0x00026232) graphic_text_primary_small_pane_g1

0xb52e,	// (0x0002623a) graphic_text_primary_small_pane_t1

0xb53c,	// (0x00026248) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a6ce) graphic_text_primary_small_pane_t

0xb502,	// (0x0002620e) graphic_text_secondary_pane_g1

0xb50a,	// (0x00026216) graphic_text_secondary_pane_t1

0xb518,	// (0x00026224) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a6c9) graphic_text_secondary_pane_t

0xb4de,	// (0x000261ea) graphic_text_title_pane_g1

0xb4e6,	// (0x000261f2) graphic_text_title_pane_t1

0xb4f4,	// (0x00026200) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a6c4) graphic_text_title_pane_t

0xb4ba,	// (0x000261c6) graphic_text_digital_pane_g1

0xb4c2,	// (0x000261ce) graphic_text_digital_pane_t1

0xb4d0,	// (0x000261dc) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a6bf) graphic_text_digital_pane_t

0x7f3c,	// (0x00022c48) navi_icon_pane_srt_ParamLimits

0x7f3c,	// (0x00022c48) navi_icon_pane_srt

0x7e5c,	// (0x00022b68) navi_midp_pane_srt

0x7e5c,	// (0x00022b68) navi_navi_pane_srt

0x7f3c,	// (0x00022c48) navi_text_pane_srt_ParamLimits

0x7f3c,	// (0x00022c48) navi_text_pane_srt

0xb485,	// (0x00026191) navi_navi_icon_text_pane_srt

0xb48d,	// (0x00026199) navi_navi_pane_srt_g1_ParamLimits

0xb48d,	// (0x00026199) navi_navi_pane_srt_g1

0xb49f,	// (0x000261ab) navi_navi_pane_srt_g2_ParamLimits

0xb49f,	// (0x000261ab) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a6ba) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a6ba) navi_navi_pane_srt_g

0xb4b1,	// (0x000261bd) navi_navi_tabs_pane_srt

0xb485,	// (0x00026191) navi_navi_text_pane_srt

0xb485,	// (0x00026191) navi_navi_volume_pane_srt

0xb476,	// (0x00026182) navi_navi_text_pane_srt_t1

0x6ebe,	// (0x00021bca) navi_navi_volume_pane_srt_g1

0x6ec6,	// (0x00021bd2) volume_small_pane_srt_ParamLimits

0x6ec6,	// (0x00021bd2) volume_small_pane_srt

0x6323,	// (0x0002102f) volume_small_pane_srt_g1_ParamLimits

0x6323,	// (0x0002102f) volume_small_pane_srt_g1

0x6333,	// (0x0002103f) volume_small_pane_srt_g2_ParamLimits

0x6333,	// (0x0002103f) volume_small_pane_srt_g2

0x6344,	// (0x00021050) volume_small_pane_srt_g3_ParamLimits

0x6344,	// (0x00021050) volume_small_pane_srt_g3

0x6355,	// (0x00021061) volume_small_pane_srt_g4_ParamLimits

0x6355,	// (0x00021061) volume_small_pane_srt_g4

0x6366,	// (0x00021072) volume_small_pane_srt_g5_ParamLimits

0x6366,	// (0x00021072) volume_small_pane_srt_g5

0x6377,	// (0x00021083) volume_small_pane_srt_g6_ParamLimits

0x6377,	// (0x00021083) volume_small_pane_srt_g6

0x6388,	// (0x00021094) volume_small_pane_srt_g7_ParamLimits

0x6388,	// (0x00021094) volume_small_pane_srt_g7

0x6399,	// (0x000210a5) volume_small_pane_srt_g8_ParamLimits

0x6399,	// (0x000210a5) volume_small_pane_srt_g8

0x63aa,	// (0x000210b6) volume_small_pane_srt_g9_ParamLimits

0x63aa,	// (0x000210b6) volume_small_pane_srt_g9

0x63bb,	// (0x000210c7) volume_small_pane_srt_g10_ParamLimits

0x63bb,	// (0x000210c7) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002a469) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002a469) volume_small_pane_srt_g

0x8316,	// (0x00023022) query_popup_data_pane_cp2

0xb45c,	// (0x00026168) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45c,	// (0x00026168) navi_navi_icon_text_pane_srt_t1

0xa54d,	// (0x00025259) navi_tabs_2_long_pane_srt

0xa54d,	// (0x00025259) navi_tabs_2_pane_srt

0xa54d,	// (0x00025259) navi_tabs_3_long_pane_srt

0xa54d,	// (0x00025259) navi_tabs_3_pane_srt

0xa54d,	// (0x00025259) navi_tabs_4_pane_srt

0x6e9e,	// (0x00021baa) tabs_2_active_pane_srt_ParamLimits

0x6e9e,	// (0x00021baa) tabs_2_active_pane_srt

0x6eae,	// (0x00021bba) tabs_2_passive_pane_srt_ParamLimits

0x6eae,	// (0x00021bba) tabs_2_passive_pane_srt

0x977f,	// (0x0002448b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x977f,	// (0x0002448b) bg_passive_tab_pane_cp1_srt

0xb428,	// (0x00026134) bg_passive_tab_pane_g1_cp1_srt

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp1_srt

0xb431,	// (0x0002613d) bg_passive_tab_pane_g3_cp1_srt

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp1_srt

0xb43a,	// (0x00026146) tabs_2_active_pane_srt_g1

0xb442,	// (0x0002614e) tabs_2_active_pane_srt_t1_ParamLimits

0xb442,	// (0x0002614e) tabs_2_active_pane_srt_t1

0xb428,	// (0x00026134) bg_active_tab_pane_g1_cp1_srt

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp1_srt

0xb431,	// (0x0002613d) bg_active_tab_pane_g3_cp1_srt

0x6e6b,	// (0x00021b77) tabs_3_active_pane_srt_ParamLimits

0x6e6b,	// (0x00021b77) tabs_3_active_pane_srt

0x6e7c,	// (0x00021b88) tabs_3_passive_pane_cp_srt_ParamLimits

0x6e7c,	// (0x00021b88) tabs_3_passive_pane_cp_srt

0x6e8d,	// (0x00021b99) tabs_3_passive_pane_srt_ParamLimits

0x6e8d,	// (0x00021b99) tabs_3_passive_pane_srt

0x977f,	// (0x0002448b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x977f,	// (0x0002448b) bg_passive_tab_pane_cp2_srt

0x95e9,	// (0x000242f5) bg_passive_tab_pane_g1_cp2_srt

0x9083,	// (0x00023d8f) bg_passive_tab_pane_g2_cp2_srt

0x95f2,	// (0x000242fe) bg_passive_tab_pane_g3_cp2_srt

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f3c,	// (0x00022c48) bg_active_tab_pane_cp2_srt

0xb40e,	// (0x0002611a) tabs_3_active_pane_srt_g1

0xb416,	// (0x00026122) tabs_3_active_pane_srt_t1_ParamLimits

0xb416,	// (0x00026122) tabs_3_active_pane_srt_t1

0x95e9,	// (0x000242f5) bg_active_tab_pane_g1_cp2_srt

0x9083,	// (0x00023d8f) bg_active_tab_pane_g2_cp2_srt

0x95f2,	// (0x000242fe) bg_active_tab_pane_g3_cp2_srt

0x6e23,	// (0x00021b2f) tabs_4_active_pane_srt_ParamLimits

0x6e23,	// (0x00021b2f) tabs_4_active_pane_srt

0x6e35,	// (0x00021b41) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6e35,	// (0x00021b41) tabs_4_passive_pane_cp2_srt

0x6520,	// (0x0002122c) aid_size_cell_toolbar

0x898f,	// (0x0002369b) main_idle_act_pane_ParamLimits

0x66c1,	// (0x000213cd) popup_large_graphic_colour_window_ParamLimits

0x6a28,	// (0x00021734) popup_toolbar_window_ParamLimits

0x6a28,	// (0x00021734) popup_toolbar_window

0xb221,	// (0x00025f2d) list_single_graphic_2heading_pane_ParamLimits

0xb221,	// (0x00025f2d) list_single_graphic_2heading_pane

0x8b4b,	// (0x00023857) aid_size_cell_apps_grid_lsc_pane

0x8b5d,	// (0x00023869) aid_size_cell_apps_grid_prt_pane

0x977f,	// (0x0002448b) bg_wml_button_pane_cp1_ParamLimits

0x977f,	// (0x0002448b) bg_wml_button_pane_cp1

0x9f33,	// (0x00024c3f) form_midp_field_text_pane_t1_ParamLimits

0x9cfd,	// (0x00024a09) input_focus_pane_cp050_ParamLimits

0x9f6a,	// (0x00024c76) list_midp_form_text_pane_ParamLimits

0x9f10,	// (0x00024c1c) input_focus_pane_cp051_ParamLimits

0x9f24,	// (0x00024c30) list_midp_choice_pane_ParamLimits

0x9db6,	// (0x00024ac2) list_single_2graphic_pane_cp3_ParamLimits

0x9db6,	// (0x00024ac2) list_single_2graphic_pane_cp3

0x9dda,	// (0x00024ae6) list_single_midp_graphic_pane_ParamLimits

0x9dda,	// (0x00024ae6) list_single_midp_graphic_pane

0x5153,	// (0x0001fe5f) list_single_graphic_2heading_pane_g1_ParamLimits

0x5153,	// (0x0001fe5f) list_single_graphic_2heading_pane_g1

0x515f,	// (0x0001fe6b) list_single_graphic_2heading_pane_g4_ParamLimits

0x515f,	// (0x0001fe6b) list_single_graphic_2heading_pane_g4

0x516b,	// (0x0001fe77) list_single_graphic_2heading_pane_g5_ParamLimits

0x516b,	// (0x0001fe77) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002a4bc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002a4bc) list_single_graphic_2heading_pane_g

0x5177,	// (0x0001fe83) list_single_graphic_2heading_pane_t1_ParamLimits

0x5177,	// (0x0001fe83) list_single_graphic_2heading_pane_t1

0x518b,	// (0x0001fe97) list_single_graphic_2heading_pane_t2_ParamLimits

0x518b,	// (0x0001fe97) list_single_graphic_2heading_pane_t2

0x51a5,	// (0x0001feb1) list_single_graphic_2heading_pane_t3_ParamLimits

0x51a5,	// (0x0001feb1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002a4c3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002a4c3) list_single_graphic_2heading_pane_t

0x9bc7,	// (0x000248d3) bg_popup_sub_pane_cp2

0x9bf1,	// (0x000248fd) grid_toobar_pane

0x6ad5,	// (0x000217e1) cell_toolbar_pane_ParamLimits

0x6ad5,	// (0x000217e1) cell_toolbar_pane

0x9c2d,	// (0x00024939) cell_toolbar_pane_g1_ParamLimits

0x9c2d,	// (0x00024939) cell_toolbar_pane_g1

0x9c41,	// (0x0002494d) cell_toolbar_pane_g2_ParamLimits

0x9c41,	// (0x0002494d) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002a4ca) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002a4ca) cell_toolbar_pane_g

0x9c63,	// (0x0002496f) grid_highlight_pane_cp2_ParamLimits

0x9c63,	// (0x0002496f) grid_highlight_pane_cp2

0x9c7d,	// (0x00024989) toolbar_button_pane

0x9c89,	// (0x00024995) toolbar_button_pane_g1

0x9c91,	// (0x0002499d) toolbar_button_pane_g2

0x9c99,	// (0x000249a5) toolbar_button_pane_g3

0x9ca1,	// (0x000249ad) toolbar_button_pane_g4

0x9ca9,	// (0x000249b5) toolbar_button_pane_g5

0x9cb1,	// (0x000249bd) toolbar_button_pane_g6

0x9cb9,	// (0x000249c5) toolbar_button_pane_g7

0x9cc1,	// (0x000249cd) toolbar_button_pane_g8

0x9cc9,	// (0x000249d5) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002a4cf) toolbar_button_pane_g

0x6b0d,	// (0x00021819) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6b0d,	// (0x00021819) list_single_2graphic_pane_g1_cp3

0x6b19,	// (0x00021825) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6b19,	// (0x00021825) list_single_2graphic_pane_g2_cp3

0x6b2a,	// (0x00021836) list_single_2graphic_pane_g3_cp3

0x6b32,	// (0x0002183e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6b32,	// (0x0002183e) list_single_2graphic_pane_g4_cp3

0x6b3e,	// (0x0002184a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6b3e,	// (0x0002184a) list_single_2graphic_pane_t1_cp3

0xa1a6,	// (0x00024eb2) list_single_midp_graphic_pane_g2_ParamLimits

0xa1a6,	// (0x00024eb2) list_single_midp_graphic_pane_g2

0x6528,	// (0x00021234) aid_zoom_text_primary

0x5127,	// (0x0001fe33) aid_zoom_text_secondary

0x96a3,	// (0x000243af) status_small_pane_g7_ParamLimits

0x96a3,	// (0x000243af) status_small_pane_g7

0x96c6,	// (0x000243d2) status_small_pane_t1_ParamLimits

0x7e73,	// (0x00022b7f) title_pane_g2

0x0003,

0xf54e,	// (0x0002a25a) title_pane_g

0x83ba,	// (0x000230c6) aid_size_cell_colour_1_pane_ParamLimits

0x83ba,	// (0x000230c6) aid_size_cell_colour_1_pane

0x83ce,	// (0x000230da) aid_size_cell_colour_2_pane_ParamLimits

0x83ce,	// (0x000230da) aid_size_cell_colour_2_pane

0x83e2,	// (0x000230ee) aid_size_cell_colour_3_pane_ParamLimits

0x83e2,	// (0x000230ee) aid_size_cell_colour_3_pane

0x83f6,	// (0x00023102) aid_size_cell_colour_4_pane_ParamLimits

0x83f6,	// (0x00023102) aid_size_cell_colour_4_pane

0x5f80,	// (0x00020c8c) title_pane_stacon_g1_ParamLimits

0x5f80,	// (0x00020c8c) title_pane_stacon_g1

0xa334,	// (0x00025040) popup_note_wait_window_g3_ParamLimits

0xa334,	// (0x00025040) popup_note_wait_window_g3

0xa3aa,	// (0x000250b6) popup_note_wait_window_t5_ParamLimits

0xa3aa,	// (0x000250b6) popup_note_wait_window_t5

0x7e5c,	// (0x00022b68) main_feb_china_hwr_fs_writing_pane

0x65a4,	// (0x000212b0) popup_feb_china_hwr_fs_window_ParamLimits

0x65a4,	// (0x000212b0) popup_feb_china_hwr_fs_window

0x6b5a,	// (0x00021866) aid_size_cell_hwr_fs_ParamLimits

0x6b5a,	// (0x00021866) aid_size_cell_hwr_fs

0x9cfd,	// (0x00024a09) bg_popup_sub_pane_cp3_ParamLimits

0x9cfd,	// (0x00024a09) bg_popup_sub_pane_cp3

0x6b6f,	// (0x0002187b) grid_hwr_fs_pane_ParamLimits

0x6b6f,	// (0x0002187b) grid_hwr_fs_pane

0x6b87,	// (0x00021893) linegrid_hwr_fs_pane_ParamLimits

0x6b87,	// (0x00021893) linegrid_hwr_fs_pane

0x6b97,	// (0x000218a3) cell_hwr_fs_pane_ParamLimits

0x6b97,	// (0x000218a3) cell_hwr_fs_pane

0x9d09,	// (0x00024a15) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d09,	// (0x00024a15) linegrid_hwr_fs_pane_g1

0x9d15,	// (0x00024a21) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d15,	// (0x00024a21) linegrid_hwr_fs_pane_g2

0x9d27,	// (0x00024a33) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d27,	// (0x00024a33) linegrid_hwr_fs_pane_g3

0x6bb9,	// (0x000218c5) linegrid_hwr_fs_pane_g4_ParamLimits

0x6bb9,	// (0x000218c5) linegrid_hwr_fs_pane_g4

0x6bd3,	// (0x000218df) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bd3,	// (0x000218df) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a4fa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a4fa) linegrid_hwr_fs_pane_g

0x9d33,	// (0x00024a3f) cell_hwr_fs_pane_g1_ParamLimits

0x9d33,	// (0x00024a3f) cell_hwr_fs_pane_g1

0x9afe,	// (0x0002480a) cell_hwr_fs_pane_g2_ParamLimits

0x9afe,	// (0x0002480a) cell_hwr_fs_pane_g2

0x9d49,	// (0x00024a55) cell_hwr_fs_pane_g3_ParamLimits

0x9d49,	// (0x00024a55) cell_hwr_fs_pane_g3

0x9d56,	// (0x00024a62) cell_hwr_fs_pane_g4_ParamLimits

0x9d56,	// (0x00024a62) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a505) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a505) cell_hwr_fs_pane_g

0x6be9,	// (0x000218f5) cell_hwr_fs_pane_t1

0x7e5c,	// (0x00022b68) grid_highlight_pane_cp6

0x7e5c,	// (0x00022b68) main_idle_act2_pane

0x8902,	// (0x0002360e) aid_inside_area_popup_secondary

0xa9e1,	// (0x000256ed) aid_inside_area_window_primary_ParamLimits

0xa9e1,	// (0x000256ed) aid_inside_area_window_primary

0xb575,	// (0x00026281) ai2_news_ticker_pane

0xb57d,	// (0x00026289) aid_size_cell_ai1_link_ParamLimits

0xb57d,	// (0x00026289) aid_size_cell_ai1_link

0xb597,	// (0x000262a3) popup_ai2_data_window_ParamLimits

0xb597,	// (0x000262a3) popup_ai2_data_window

0xb5ad,	// (0x000262b9) popup_ai2_link_window_ParamLimits

0xb5ad,	// (0x000262b9) popup_ai2_link_window

0x9cfd,	// (0x00024a09) bg_popup_sub_pane_cp4_ParamLimits

0x9cfd,	// (0x00024a09) bg_popup_sub_pane_cp4

0xb5c1,	// (0x000262cd) grid_ai2_link_pane_ParamLimits

0xb5c1,	// (0x000262cd) grid_ai2_link_pane

0xb5d8,	// (0x000262e4) popup_ai2_link_window_g1_ParamLimits

0xb5d8,	// (0x000262e4) popup_ai2_link_window_g1

0xb5e4,	// (0x000262f0) popup_ai2_link_window_g2_ParamLimits

0xb5e4,	// (0x000262f0) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a6d8) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a6d8) popup_ai2_link_window_g

0xb5f3,	// (0x000262ff) ai2_mp_button_pane

0xb5fb,	// (0x00026307) ai2_mp_volume_pane

0x9f10,	// (0x00024c1c) bg_popup_sub_pane_cp5_ParamLimits

0x9f10,	// (0x00024c1c) bg_popup_sub_pane_cp5

0xb603,	// (0x0002630f) heading_ai2_gene_pane_ParamLimits

0xb603,	// (0x0002630f) heading_ai2_gene_pane

0xb60f,	// (0x0002631b) list_ai2_gene_pane_ParamLimits

0xb60f,	// (0x0002631b) list_ai2_gene_pane

0xb657,	// (0x00026363) cell_ai2_link_pane_ParamLimits

0xb657,	// (0x00026363) cell_ai2_link_pane

0xb66d,	// (0x00026379) cell_ai2_link_pane_g1

0x7e5c,	// (0x00022b68) grid_highlight_pane_cp7

0x6edb,	// (0x00021be7) ai2_mp_volume_pane_g1

0xb73d,	// (0x00026449) ai2_mp_volume_pane_g2

0xb6b2,	// (0x000263be) list_ai2_gene_pane_t1

0xb745,	// (0x00026451) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a6f1) ai2_mp_volume_pane_g

0x6ee3,	// (0x00021bef) volume_small_pane_cp3

0xb74d,	// (0x00026459) aid_size_cell_ai2_button

0xb755,	// (0x00026461) grid_ai2_button_pane

0xb75e,	// (0x0002646a) cell_ai2_button_pane_ParamLimits

0xb75e,	// (0x0002646a) cell_ai2_button_pane

0x7e52,	// (0x00022b5e) cell_ai2_button_pane_g1

0x7e5c,	// (0x00022b68) grid_highlight_pane_cp8

0xb6fd,	// (0x00026409) ai2_gene_pane_t1_ParamLimits

0xb6fd,	// (0x00026409) ai2_gene_pane_t1

0x6516,	// (0x00021222) aid_height_parent_landscape

0xb058,	// (0x00025d64) aid_height_set_list

0xb069,	// (0x00025d75) aid_size_parent

0xb39c,	// (0x000260a8) aid_size_cell_graphic_pane_ParamLimits

0xb61f,	// (0x0002632b) popup_ai2_data_window_g1_ParamLimits

0xb61f,	// (0x0002632b) popup_ai2_data_window_g1

0xb62b,	// (0x00026337) ai2_news_ticker_pane_g1

0xb633,	// (0x0002633f) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a6dd) ai2_news_ticker_pane_g

0xb63b,	// (0x00026347) ai2_news_ticker_pane_t1

0xb649,	// (0x00026355) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a6e2) ai2_news_ticker_pane_t

0xb676,	// (0x00026382) heading_ai2_gene_pane_g1

0xb67e,	// (0x0002638a) heading_ai2_gene_pane_t1_ParamLimits

0xb67e,	// (0x0002638a) heading_ai2_gene_pane_t1

0xb693,	// (0x0002639f) list_highlight_pane_cp6

0xb69b,	// (0x000263a7) ai2_gene_pane_ParamLimits

0xb69b,	// (0x000263a7) ai2_gene_pane

0xb6c0,	// (0x000263cc) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a6e7) list_ai2_gene_pane_t

0xb6ce,	// (0x000263da) list_highlight_pane_cp8_ParamLimits

0xb6ce,	// (0x000263da) list_highlight_pane_cp8

0xb6df,	// (0x000263eb) ai2_gene_pane_g1_ParamLimits

0xb6df,	// (0x000263eb) ai2_gene_pane_g1

0xb6f1,	// (0x000263fd) ai2_gene_pane_g2_ParamLimits

0xb6f1,	// (0x000263fd) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a6ec) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a6ec) ai2_gene_pane_g

0x8741,	// (0x0002344d) scroll_pane_cp12

0x64d5,	// (0x000211e1) control_pane_t3_ParamLimits

0x64d5,	// (0x000211e1) control_pane_t3

0x96b7,	// (0x000243c3) status_small_pane_g8_ParamLimits

0x96b7,	// (0x000243c3) status_small_pane_g8

0x668a,	// (0x00021396) popup_find_window_ParamLimits

0x689f,	// (0x000215ab) popup_note_image_window_ParamLimits

0x5153,	// (0x0001fe5f) list_double2_graphic_pane_vc_g1_ParamLimits

0x5153,	// (0x0001fe5f) list_double2_graphic_pane_vc_g1

0x515f,	// (0x0001fe6b) list_double2_graphic_pane_vc_g2_ParamLimits

0x515f,	// (0x0001fe6b) list_double2_graphic_pane_vc_g2

0x516b,	// (0x0001fe77) list_double2_graphic_pane_vc_g3_ParamLimits

0x516b,	// (0x0001fe77) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a4bc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a4bc) list_double2_graphic_pane_vc_g

0x51bd,	// (0x0001fec9) list_double2_graphic_pane_vc_t1_ParamLimits

0x51bd,	// (0x0001fec9) list_double2_graphic_pane_vc_t1

0x515f,	// (0x0001fe6b) list_single_heading_pane_vc_g1_ParamLimits

0x515f,	// (0x0001fe6b) list_single_heading_pane_vc_g1

0x516b,	// (0x0001fe77) list_single_heading_pane_vc_g2_ParamLimits

0x516b,	// (0x0001fe77) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4e4) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4e4) list_single_heading_pane_vc_g

0x51d3,	// (0x0001fedf) list_single_heading_pane_vc_t1_ParamLimits

0x51d3,	// (0x0001fedf) list_single_heading_pane_vc_t1

0x51eb,	// (0x0001fef7) list_single_heading_pane_vc_t2_ParamLimits

0x51eb,	// (0x0001fef7) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0002a4e9) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0002a4e9) list_single_heading_pane_vc_t

0x5207,	// (0x0001ff13) list_setting_number_pane_vc_g1_ParamLimits

0x5207,	// (0x0001ff13) list_setting_number_pane_vc_g1

0x5213,	// (0x0001ff1f) list_setting_number_pane_vc_g2_ParamLimits

0x5213,	// (0x0001ff1f) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a4ee) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a4ee) list_setting_number_pane_vc_g

0x521f,	// (0x0001ff2b) list_setting_number_pane_vc_t1_ParamLimits

0x521f,	// (0x0001ff2b) list_setting_number_pane_vc_t1

0x5233,	// (0x0001ff3f) list_setting_number_pane_vc_t2_ParamLimits

0x5233,	// (0x0001ff3f) list_setting_number_pane_vc_t2

0x524f,	// (0x0001ff5b) list_setting_number_pane_vc_t3_ParamLimits

0x524f,	// (0x0001ff5b) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a4f3) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a4f3) list_setting_number_pane_vc_t

0x526d,	// (0x0001ff79) set_value_pane_vc_ParamLimits

0x526d,	// (0x0001ff79) set_value_pane_vc

0xb221,	// (0x00025f2d) list_double2_graphic_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double2_graphic_pane_vc

0xb221,	// (0x00025f2d) list_double2_large_graphic_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double2_large_graphic_pane_vc

0xb221,	// (0x00025f2d) list_double2_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double2_pane_vc

0xb221,	// (0x00025f2d) list_double_graphic_heading_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double_graphic_heading_pane_vc

0xb221,	// (0x00025f2d) list_double_graphic_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double_graphic_pane_vc

0xb221,	// (0x00025f2d) list_double_heading_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double_heading_pane_vc

0xb233,	// (0x00025f3f) list_double_large_graphic_pane_vc_ParamLimits

0xb233,	// (0x00025f3f) list_double_large_graphic_pane_vc

0xb221,	// (0x00025f2d) list_double_number_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double_number_pane_vc

0xb221,	// (0x00025f2d) list_double_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double_pane_vc

0xb221,	// (0x00025f2d) list_double_time_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_double_time_pane_vc

0xb221,	// (0x00025f2d) list_setting_number_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_setting_number_pane_vc

0xb221,	// (0x00025f2d) list_setting_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_setting_pane_vc

0xb221,	// (0x00025f2d) list_single_graphic_heading_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_single_graphic_heading_pane_vc

0xb221,	// (0x00025f2d) list_single_heading_pane_vc_ParamLimits

0xb221,	// (0x00025f2d) list_single_heading_pane_vc

0x5346,	// (0x00020052) list_single_number_heading_pane_vc_ParamLimits

0x5346,	// (0x00020052) list_single_number_heading_pane_vc

0x5153,	// (0x0001fe5f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5153,	// (0x0001fe5f) list_double_graphic_heading_pane_vc_g1

0x515f,	// (0x0001fe6b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x515f,	// (0x0001fe6b) list_double_graphic_heading_pane_vc_g2

0x516b,	// (0x0001fe77) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x516b,	// (0x0001fe77) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002a4bc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a4bc) list_double_graphic_heading_pane_vc_g

0x53c7,	// (0x000200d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53c7,	// (0x000200d3) list_double_graphic_heading_pane_vc_t1

0x53e3,	// (0x000200ef) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x53e3,	// (0x000200ef) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0002a6f8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0002a6f8) list_double_graphic_heading_pane_vc_t

0x5207,	// (0x0001ff13) list_setting_pane_vc_g1_ParamLimits

0x5207,	// (0x0001ff13) list_setting_pane_vc_g1

0x5213,	// (0x0001ff1f) list_setting_pane_vc_g2_ParamLimits

0x5213,	// (0x0001ff1f) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a4ee) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a4ee) list_setting_pane_vc_g

0x5401,	// (0x0002010d) list_setting_pane_vc_t1_ParamLimits

0x5401,	// (0x0002010d) list_setting_pane_vc_t1

0x541d,	// (0x00020129) list_setting_pane_vc_t2_ParamLimits

0x541d,	// (0x00020129) list_setting_pane_vc_t2

0x0001,

0xfa1a,	// (0x0002a726) list_setting_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002a726) list_setting_pane_vc_t

0x526d,	// (0x0001ff79) set_value_pane_cp_vc_ParamLimits

0x526d,	// (0x0001ff79) set_value_pane_cp_vc

0x515f,	// (0x0001fe6b) list_single_number_heading_pane_vc_g1_ParamLimits

0x515f,	// (0x0001fe6b) list_single_number_heading_pane_vc_g1

0x516b,	// (0x0001fe77) list_single_number_heading_pane_vc_g2_ParamLimits

0x516b,	// (0x0001fe77) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4e4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4e4) list_single_number_heading_pane_vc_g

0x51d3,	// (0x0001fedf) list_single_number_heading_pane_vc_t1_ParamLimits

0x51d3,	// (0x0001fedf) list_single_number_heading_pane_vc_t1

0x5439,	// (0x00020145) list_single_number_heading_pane_vc_t2_ParamLimits

0x5439,	// (0x00020145) list_single_number_heading_pane_vc_t2

0x544d,	// (0x00020159) list_single_number_heading_pane_vc_t3_ParamLimits

0x544d,	// (0x00020159) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1f,	// (0x0002a72b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x0002a72b) list_single_number_heading_pane_vc_t

0x5153,	// (0x0001fe5f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5153,	// (0x0001fe5f) list_single_graphic_heading_pane_vc_g1

0x515f,	// (0x0001fe6b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x515f,	// (0x0001fe6b) list_single_graphic_heading_pane_vc_g4

0x516b,	// (0x0001fe77) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x516b,	// (0x0001fe77) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002a4bc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002a4bc) list_single_graphic_heading_pane_vc_g

0x51d3,	// (0x0001fedf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51d3,	// (0x0001fedf) list_single_graphic_heading_pane_vc_t1

0x545f,	// (0x0002016b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x545f,	// (0x0002016b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0002a732) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0002a732) list_single_graphic_heading_pane_vc_t

0x515f,	// (0x0001fe6b) list_double2_pane_vc_g1_ParamLimits

0x515f,	// (0x0001fe6b) list_double2_pane_vc_g1

0x516b,	// (0x0001fe77) list_double2_pane_vc_g2_ParamLimits

0x516b,	// (0x0001fe77) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4e4) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4e4) list_double2_pane_vc_g

0x5473,	// (0x0002017f) list_double2_pane_vc_t1_ParamLimits

0x5473,	// (0x0002017f) list_double2_pane_vc_t1

0x5489,	// (0x00020195) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5489,	// (0x00020195) list_double2_large_graphic_pane_vc_g1

0x515f,	// (0x0001fe6b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x515f,	// (0x0001fe6b) list_double2_large_graphic_pane_vc_g2

0x516b,	// (0x0001fe77) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x516b,	// (0x0001fe77) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x0002a737) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x0002a737) list_double2_large_graphic_pane_vc_g

0x5495,	// (0x000201a1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5495,	// (0x000201a1) list_double2_large_graphic_pane_vc_t1

0x54ab,	// (0x000201b7) list_double_time_pane_vc_g1_ParamLimits

0x54ab,	// (0x000201b7) list_double_time_pane_vc_g1

0x54b7,	// (0x000201c3) list_double_time_pane_vc_g2_ParamLimits

0x54b7,	// (0x000201c3) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0002a73e) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0002a73e) list_double_time_pane_vc_g

0x54c3,	// (0x000201cf) list_double_time_pane_vc_t1_ParamLimits

0x54c3,	// (0x000201cf) list_double_time_pane_vc_t1

0x54e7,	// (0x000201f3) list_double_time_pane_vc_t2_ParamLimits

0x54e7,	// (0x000201f3) list_double_time_pane_vc_t2

0x5536,	// (0x00020242) list_double_time_pane_vc_t3_ParamLimits

0x5536,	// (0x00020242) list_double_time_pane_vc_t3

0x5548,	// (0x00020254) list_double_time_pane_vc_t4_ParamLimits

0x5548,	// (0x00020254) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0002a743) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0002a743) list_double_time_pane_vc_t

0x515f,	// (0x0001fe6b) list_double_pane_vc_g1_ParamLimits

0x515f,	// (0x0001fe6b) list_double_pane_vc_g1

0x516b,	// (0x0001fe77) list_double_pane_vc_g2_ParamLimits

0x516b,	// (0x0001fe77) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4e4) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4e4) list_double_pane_vc_g

0x555c,	// (0x00020268) list_double_pane_vc_t1_ParamLimits

0x555c,	// (0x00020268) list_double_pane_vc_t1

0x5570,	// (0x0002027c) list_double_pane_vc_t2_ParamLimits

0x5570,	// (0x0002027c) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0002a74c) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0002a74c) list_double_pane_vc_t

0x515f,	// (0x0001fe6b) list_double_number_pane_vc_g1_ParamLimits

0x515f,	// (0x0001fe6b) list_double_number_pane_vc_g1

0x516b,	// (0x0001fe77) list_double_number_pane_vc_g2_ParamLimits

0x516b,	// (0x0001fe77) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4e4) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4e4) list_double_number_pane_vc_g

0x5588,	// (0x00020294) list_double_number_pane_vc_t1_ParamLimits

0x5588,	// (0x00020294) list_double_number_pane_vc_t1

0x559a,	// (0x000202a6) list_double_number_pane_vc_t2_ParamLimits

0x559a,	// (0x000202a6) list_double_number_pane_vc_t2

0x55ae,	// (0x000202ba) list_double_number_pane_vc_t3_ParamLimits

0x55ae,	// (0x000202ba) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0002a751) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a751) list_double_number_pane_vc_t

0x55c6,	// (0x000202d2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x55c6,	// (0x000202d2) list_double_large_graphic_pane_vc_g1

0x55e8,	// (0x000202f4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x55e8,	// (0x000202f4) list_double_large_graphic_pane_vc_g2

0x55fc,	// (0x00020308) list_double_large_graphic_pane_vc_g3_ParamLimits

0x55fc,	// (0x00020308) list_double_large_graphic_pane_vc_g3

0x560b,	// (0x00020317) list_double_large_graphic_pane_vc_g4_ParamLimits

0x560b,	// (0x00020317) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0002a758) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0002a758) list_double_large_graphic_pane_vc_g

0x5617,	// (0x00020323) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5617,	// (0x00020323) list_double_large_graphic_pane_vc_t1

0x5633,	// (0x0002033f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5633,	// (0x0002033f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0002a761) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0002a761) list_double_large_graphic_pane_vc_t

0x515f,	// (0x0001fe6b) list_double_heading_pane_vc_g1_ParamLimits

0x515f,	// (0x0001fe6b) list_double_heading_pane_vc_g1

0x516b,	// (0x0001fe77) list_double_heading_pane_vc_g2_ParamLimits

0x516b,	// (0x0001fe77) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0002a4e4) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0002a4e4) list_double_heading_pane_vc_g

0x5655,	// (0x00020361) list_double_heading_pane_vc_t1_ParamLimits

0x5655,	// (0x00020361) list_double_heading_pane_vc_t1

0x51d3,	// (0x0001fedf) list_double_heading_pane_vc_t2_ParamLimits

0x51d3,	// (0x0001fedf) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0002a766) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002a766) list_double_heading_pane_vc_t

0x5669,	// (0x00020375) list_double_graphic_pane_vc_g1_ParamLimits

0x5669,	// (0x00020375) list_double_graphic_pane_vc_g1

0x5675,	// (0x00020381) list_double_graphic_pane_vc_g2_ParamLimits

0x5675,	// (0x00020381) list_double_graphic_pane_vc_g2

0x515f,	// (0x0001fe6b) list_double_graphic_pane_vc_g3_ParamLimits

0x515f,	// (0x0001fe6b) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0002a76b) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0002a76b) list_double_graphic_pane_vc_g

0x5692,	// (0x0002039e) list_double_graphic_pane_vc_t1_ParamLimits

0x5692,	// (0x0002039e) list_double_graphic_pane_vc_t1

0x56bc,	// (0x000203c8) list_double_graphic_pane_vc_t2_ParamLimits

0x56bc,	// (0x000203c8) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0002a774) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0002a774) list_double_graphic_pane_vc_t

0x5add,	// (0x000207e9) aid_size_cell_fastswap

0x5ae5,	// (0x000207f1) aid_size_cell_touch_ParamLimits

0x5ae5,	// (0x000207f1) aid_size_cell_touch

0x5d40,	// (0x00020a4c) popup_fast_swap_wide_window_ParamLimits

0x5d40,	// (0x00020a4c) popup_fast_swap_wide_window

0x5e54,	// (0x00020b60) touch_pane_ParamLimits

0x5e54,	// (0x00020b60) touch_pane

0x8797,	// (0x000234a3) button_value_adjust_pane_cp2

0x4e3a,	// (0x0001fb46) button_value_adjust_pane_cp4

0x4e5a,	// (0x0001fb66) form_field_data_pane_cp2

0x4e79,	// (0x0001fb85) form_field_data_wide_pane_cp2

0x8c18,	// (0x00023924) bg_scroll_pane_ParamLimits

0x60e2,	// (0x00020dee) scroll_handle_pane_ParamLimits

0x60f6,	// (0x00020e02) scroll_sc2_down_pane_ParamLimits

0x60f6,	// (0x00020e02) scroll_sc2_down_pane

0x8c49,	// (0x00023955) scroll_sc2_up_pane_ParamLimits

0x8c49,	// (0x00023955) scroll_sc2_up_pane

0xbe2e,	// (0x00026b3a) grid_wheel_folder_pane_g1_ParamLimits

0xbe2e,	// (0x00026b3a) grid_wheel_folder_pane_g1

0x62bb,	// (0x00020fc7) clock_nsta_pane_cp2_ParamLimits

0x62bb,	// (0x00020fc7) clock_nsta_pane_cp2

0x898f,	// (0x0002369b) listscroll_midp_pane_ParamLimits

0x9449,	// (0x00024155) midp_canvas_pane

0x9731,	// (0x0002443d) nsta_clock_indic_pane

0x9765,	// (0x00024471) listscroll_form_pane_vc

0x976d,	// (0x00024479) listscroll_set_pane_vc_ParamLimits

0x976d,	// (0x00024479) listscroll_set_pane_vc

0x9872,	// (0x0002457e) clock_nsta_pane

0x98e7,	// (0x000245f3) indicator_nsta_pane

0x9bc7,	// (0x000248d3) bg_popup_sub_pane_cp2_ParamLimits

0x9bdb,	// (0x000248e7) find_pane_cp2_ParamLimits

0x9bdb,	// (0x000248e7) find_pane_cp2

0x9bf1,	// (0x000248fd) grid_toobar_pane_ParamLimits

0x9cd1,	// (0x000249dd) list_form_gen_pane_vc_ParamLimits

0x9cd1,	// (0x000249dd) list_form_gen_pane_vc

0x9ce7,	// (0x000249f3) scroll_pane_cp8_vc_ParamLimits

0x9ce7,	// (0x000249f3) scroll_pane_cp8_vc

0x9d63,	// (0x00024a6f) data_form_wide_pane_vc_ParamLimits

0x9d63,	// (0x00024a6f) data_form_wide_pane_vc

0x9d6f,	// (0x00024a7b) form_field_data_wide_pane_vc_g1

0x9d77,	// (0x00024a83) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d77,	// (0x00024a83) form_field_data_wide_pane_vc_t1

0x87ab,	// (0x000234b7) input_focus_pane_cp6_vc_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_cp6_vc

0xa0a3,	// (0x00024daf) list_midp_pane_ParamLimits

0xa0af,	// (0x00024dbb) scroll_pane_cp16_ParamLimits

0xa0af,	// (0x00024dbb) scroll_pane_cp16

0xa0fd,	// (0x00024e09) button_value_adjust_pane_ParamLimits

0xa0fd,	// (0x00024e09) button_value_adjust_pane

0xb07b,	// (0x00025d87) button_value_adjust_pane_cp6_ParamLimits

0xb07b,	// (0x00025d87) button_value_adjust_pane_cp6

0xb1a5,	// (0x00025eb1) settings_code_pane_cp_ParamLimits

0xb1a5,	// (0x00025eb1) settings_code_pane_cp

0x7e52,	// (0x00022b5e) cell_touch_pane_g1

0x7e52,	// (0x00022b5e) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002a40f) cell_touch_pane_g

0xb770,	// (0x0002647c) cell_touch_pane_cp_ParamLimits

0xb770,	// (0x0002647c) cell_touch_pane_cp

0xb780,	// (0x0002648c) cell_touch_pane_ParamLimits

0xb780,	// (0x0002648c) cell_touch_pane

0x7e52,	// (0x00022b5e) scroll_sc2_down_pane_g1

0x7e52,	// (0x00022b5e) scroll_sc2_up_pane_g1

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp4_vc

0xb792,	// (0x0002649e) list_set_graphic_pane_vc_g1_ParamLimits

0xb792,	// (0x0002649e) list_set_graphic_pane_vc_g1

0xb79e,	// (0x000264aa) list_set_graphic_pane_vc_g2_ParamLimits

0xb79e,	// (0x000264aa) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0002a6fd) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0002a6fd) list_set_graphic_pane_vc_g

0xb7aa,	// (0x000264b6) text_primary_small_cp13_vc_ParamLimits

0xb7aa,	// (0x000264b6) text_primary_small_cp13_vc

0xb7c2,	// (0x000264ce) list_set_graphic_pane_vc_ParamLimits

0xb7c2,	// (0x000264ce) list_set_graphic_pane_vc

0x7e5c,	// (0x00022b68) input_focus_pane_cp2_vc

0x7e52,	// (0x00022b5e) setting_code_pane_vc_g1

0x7f87,	// (0x00022c93) setting_code_pane_vc_t1

0xb7d5,	// (0x000264e1) set_text_pane_vc_t1_ParamLimits

0xb7d5,	// (0x000264e1) set_text_pane_vc_t1

0x7e5c,	// (0x00022b68) input_focus_pane_cp1_vc

0xb7f1,	// (0x000264fd) list_set_text_pane_vc

0x7e52,	// (0x00022b5e) setting_text_pane_vc_g1

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp2_vc

0x7f7e,	// (0x00022c8a) setting_slider_graphic_pane_vc_g1

0xb7fb,	// (0x00026507) setting_slider_graphic_pane_vc_t1

0xb80b,	// (0x00026517) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0002a702) setting_slider_graphic_pane_vc_t

0xb81b,	// (0x00026527) slider_set_pane_cp_vc

0xb823,	// (0x0002652f) slider_set_pane_vc_g1

0xb82c,	// (0x00026538) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0002a707) slider_set_pane_vc_g

0x8806,	// (0x00023512) set_opt_bg_pane_g1_copy1

0x880e,	// (0x0002351a) set_opt_bg_pane_g2_copy1

0xb858,	// (0x00026564) set_opt_bg_pane_g3_copy1

0x881e,	// (0x0002352a) set_opt_bg_pane_g4_copy1

0x8826,	// (0x00023532) set_opt_bg_pane_g5_copy1

0x882e,	// (0x0002353a) set_opt_bg_pane_g6_copy1

0xb862,	// (0x0002656e) set_opt_bg_pane_g7_copy1

0xb86a,	// (0x00026576) set_opt_bg_pane_g8_copy1

0xb874,	// (0x00026580) set_opt_bg_pane_g9_copy1

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp_vc

0xb87e,	// (0x0002658a) setting_slider_pane_vc_t1

0xb88d,	// (0x00026599) setting_slider_pane_vc_t2

0xb89d,	// (0x000265a9) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0002a716) setting_slider_pane_vc_t

0xb8ad,	// (0x000265b9) slider_set_pane_vc

0x6bf7,	// (0x00021903) volume_set_pane_vc_g1

0x6c00,	// (0x0002190c) volume_set_pane_vc_g2

0x6c09,	// (0x00021915) volume_set_pane_vc_g3

0x6c12,	// (0x0002191e) volume_set_pane_vc_g4

0x6c1b,	// (0x00021927) volume_set_pane_vc_g5

0x6c24,	// (0x00021930) volume_set_pane_vc_g6

0x6c2d,	// (0x00021939) volume_set_pane_vc_g7

0x6c36,	// (0x00021942) volume_set_pane_vc_g8

0x6c3f,	// (0x0002194b) volume_set_pane_vc_g9

0x6c48,	// (0x00021954) volume_set_pane_vc_g10

0x0009,

0xf8af,	// (0x0002a5bb) volume_set_pane_vc_g

0xb8b5,	// (0x000265c1) volume_set_pane_vc

0xb8bd,	// (0x000265c9) button_value_adjust_pane_cp1_vc

0xb8c7,	// (0x000265d3) list_highlight_pane_cp2_vc

0xb8d0,	// (0x000265dc) list_set_pane_vc_ParamLimits

0xb8d0,	// (0x000265dc) list_set_pane_vc

0xb92e,	// (0x0002663a) main_pane_set_vc_t1_ParamLimits

0xb92e,	// (0x0002663a) main_pane_set_vc_t1

0xb943,	// (0x0002664f) main_pane_set_vc_t2_ParamLimits

0xb943,	// (0x0002664f) main_pane_set_vc_t2

0xb955,	// (0x00026661) main_pane_set_vc_t3_ParamLimits

0xb955,	// (0x00026661) main_pane_set_vc_t3

0xb969,	// (0x00026675) main_pane_set_vc_t4_ParamLimits

0xb969,	// (0x00026675) main_pane_set_vc_t4

0x0003,

0xfa11,	// (0x0002a71d) main_pane_set_vc_t_ParamLimits

0xfa11,	// (0x0002a71d) main_pane_set_vc_t

0xb97d,	// (0x00026689) setting_code_pane_vc_ParamLimits

0xb97d,	// (0x00026689) setting_code_pane_vc

0xb98e,	// (0x0002669a) setting_slider_graphic_pane_vc

0xb98e,	// (0x0002669a) setting_slider_pane_vc

0xb98e,	// (0x0002669a) setting_text_pane_vc

0xb98e,	// (0x0002669a) setting_volume_pane_vc

0xb998,	// (0x000266a4) scroll_pane_cp121_vc

0x8785,	// (0x00023491) set_content_pane_vc

0xb9a0,	// (0x000266ac) button_value_adjust_pane_g1

0xb9a9,	// (0x000266b5) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0002a779) button_value_adjust_pane_g

0xb9b2,	// (0x000266be) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b2,	// (0x000266be) form_field_slider_wide_pane_vc_t1

0xb9c6,	// (0x000266d2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c6,	// (0x000266d2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0002a77e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002a77e) form_field_slider_wide_pane_vc_t

0x81b7,	// (0x00022ec3) input_focus_pane_cp10_vc_ParamLimits

0x81b7,	// (0x00022ec3) input_focus_pane_cp10_vc

0xb9f4,	// (0x00026700) slider_cont_pane_cp1_vc_ParamLimits

0xb9f4,	// (0x00026700) slider_cont_pane_cp1_vc

0xba06,	// (0x00026712) slider_form_pane_g1_cp2

0xb82c,	// (0x00026538) slider_form_pane_g2_cp2

0xba33,	// (0x0002673f) form_field_slider_pane_vc_t3

0xba41,	// (0x0002674d) form_field_slider_pane_vc_t4

0xba4f,	// (0x0002675b) slider_form_pane_vc_ParamLimits

0xba4f,	// (0x0002675b) slider_form_pane_vc

0xba5c,	// (0x00026768) form_field_slider_pane_vc_t1_ParamLimits

0xba5c,	// (0x00026768) form_field_slider_pane_vc_t1

0xb9c6,	// (0x000266d2) form_field_slider_pane_vc_t2_ParamLimits

0xb9c6,	// (0x000266d2) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a790) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a790) form_field_slider_pane_vc_t

0x81b7,	// (0x00022ec3) input_focus_pane_cp9_vc_ParamLimits

0x81b7,	// (0x00022ec3) input_focus_pane_cp9_vc

0xba78,	// (0x00026784) slider_cont_pane_vc_ParamLimits

0xba78,	// (0x00026784) slider_cont_pane_vc

0xba8c,	// (0x00026798) list_form_graphic_pane_cp_vc_ParamLimits

0xba8c,	// (0x00026798) list_form_graphic_pane_cp_vc

0x9d6f,	// (0x00024a7b) form_field_popup_wide_pane_vc_g1

0xbaa1,	// (0x000267ad) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa1,	// (0x000267ad) form_field_popup_wide_pane_vc_t1

0x87ab,	// (0x000234b7) input_focus_pane_cp8_vc_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_cp8_vc

0xbae6,	// (0x000267f2) list_form_wide_pane_vc_ParamLimits

0xbae6,	// (0x000267f2) list_form_wide_pane_vc

0xbaf2,	// (0x000267fe) list_form_graphic_pane_vc_g1

0xbafa,	// (0x00026806) list_form_graphic_pane_vc_t1_ParamLimits

0xbafa,	// (0x00026806) list_form_graphic_pane_vc_t1

0x7f3c,	// (0x00022c48) list_highlight_pane_cp5_vc_ParamLimits

0x7f3c,	// (0x00022c48) list_highlight_pane_cp5_vc

0xbb16,	// (0x00026822) list_form_graphic_pane_vc_ParamLimits

0xbb16,	// (0x00026822) list_form_graphic_pane_vc

0x9d6f,	// (0x00024a7b) form_field_popup_pane_vc_g1

0xbb2c,	// (0x00026838) form_field_popup_pane_vc_t1_ParamLimits

0xbb2c,	// (0x00026838) form_field_popup_pane_vc_t1

0x87ab,	// (0x000234b7) input_focus_pane_cp7_vc_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_cp7_vc

0xbb43,	// (0x0002684f) list_form_pane_vc_ParamLimits

0xbb43,	// (0x0002684f) list_form_pane_vc

0xbb4f,	// (0x0002685b) data_form_pane_vc_t1_ParamLimits

0xbb4f,	// (0x0002685b) data_form_pane_vc_t1

0x8806,	// (0x00023512) input_focus_pane_vc_g1

0x880e,	// (0x0002351a) input_focus_pane_vc_g2

0x8816,	// (0x00023522) input_focus_pane_vc_g3

0x881e,	// (0x0002352a) input_focus_pane_vc_g4

0x8826,	// (0x00023532) input_focus_pane_vc_g5

0x882e,	// (0x0002353a) input_focus_pane_vc_g6

0x8836,	// (0x00023542) input_focus_pane_vc_g7

0x883e,	// (0x0002354a) input_focus_pane_vc_g8

0x8846,	// (0x00023552) input_focus_pane_vc_g9

0x7e52,	// (0x00022b5e) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002a398) input_focus_pane_vc_g

0x9d63,	// (0x00024a6f) data_form_pane_vc_ParamLimits

0x9d63,	// (0x00024a6f) data_form_pane_vc

0x9d6f,	// (0x00024a7b) form_field_data_pane_vc_g1

0xbb6a,	// (0x00026876) form_field_data_pane_vc_t1_ParamLimits

0xbb6a,	// (0x00026876) form_field_data_pane_vc_t1

0x87ab,	// (0x000234b7) input_focus_pane_vc_ParamLimits

0x87ab,	// (0x000234b7) input_focus_pane_vc

0xbb84,	// (0x00026890) button_value_adjust_pane_cp3_vc

0xbb8c,	// (0x00026898) button_value_adjust_pane_cp5_vc

0xbb94,	// (0x000268a0) form_field_data_pane_vc_ParamLimits

0xbb94,	// (0x000268a0) form_field_data_pane_vc

0xbbab,	// (0x000268b7) form_field_data_pane_vc_cp2

0xbbb3,	// (0x000268bf) form_field_data_wide_pane_vc_ParamLimits

0xbbb3,	// (0x000268bf) form_field_data_wide_pane_vc

0xbbc9,	// (0x000268d5) form_field_data_wide_pane_vc_cp2

0xbbd1,	// (0x000268dd) form_field_popup_pane_vc_ParamLimits

0xbbd1,	// (0x000268dd) form_field_popup_pane_vc

0xbbe8,	// (0x000268f4) form_field_popup_wide_pane_vc_ParamLimits

0xbbe8,	// (0x000268f4) form_field_popup_wide_pane_vc

0xbbfe,	// (0x0002690a) form_field_slider_pane_vc_ParamLimits

0xbbfe,	// (0x0002690a) form_field_slider_pane_vc

0xbc11,	// (0x0002691d) form_field_slider_wide_pane_vc_ParamLimits

0xbc11,	// (0x0002691d) form_field_slider_wide_pane_vc

0xbc24,	// (0x00026930) grid_touch_1_pane_ParamLimits

0xbc24,	// (0x00026930) grid_touch_1_pane

0xbc30,	// (0x0002693c) grid_touch_2_pane_ParamLimits

0xbc30,	// (0x0002693c) grid_touch_2_pane

0x96fc,	// (0x00024408) touch_pane_g1_ParamLimits

0x96fc,	// (0x00024408) touch_pane_g1

0xbc48,	// (0x00026954) cell_app_pane_cp_wide_ParamLimits

0xbc48,	// (0x00026954) cell_app_pane_cp_wide

0xbc59,	// (0x00026965) grid_popup_fast_wide_pane_ParamLimits

0xbc59,	// (0x00026965) grid_popup_fast_wide_pane

0xbc6d,	// (0x00026979) scroll_pane_cp19_ParamLimits

0xbc6d,	// (0x00026979) scroll_pane_cp19

0x7e5c,	// (0x00022b68) bg_popup_window_pane_cp20

0xbc81,	// (0x0002698d) listscroll_popup_fast_wide_pane

0x7f3c,	// (0x00022c48) grid_indicator_nsta_pane

0xbc89,	// (0x00026995) clock_nsta_pane_g1

0xbc92,	// (0x0002699e) clock_nsta_pane_t1

0xbcae,	// (0x000269ba) cell_indicator_nsta_pane_ParamLimits

0xbcae,	// (0x000269ba) cell_indicator_nsta_pane

0xbcdf,	// (0x000269eb) cell_indicator_nsta_pane_g1

0xbced,	// (0x000269f9) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0002a7a1) cell_indicator_nsta_pane_g

0xbcfa,	// (0x00026a06) clock_nsta_pane_cp

0xbd02,	// (0x00026a0e) indicator_nsta_pane_cp

0xbd0a,	// (0x00026a16) nsta_clock_indic_pane_g1

0x8005,	// (0x00022d11) grid_indicator_pane

0x8d3e,	// (0x00023a4a) scroll_pane_cp29

0x620a,	// (0x00020f16) indicator_nsta_pane_cp2_ParamLimits

0x620a,	// (0x00020f16) indicator_nsta_pane_cp2

0x7f3c,	// (0x00022c48) main_apps_wheel_pane

0x9f84,	// (0x00024c90) form_midp_field_text_pane_ParamLimits

0xa0cf,	// (0x00024ddb) scroll_bar_cp050_ParamLimits

0xbd6b,	// (0x00026a77) cell_indicator_pane_ParamLimits

0xbd6b,	// (0x00026a77) cell_indicator_pane

0xbd82,	// (0x00026a8e) cell_indicator_pane_g1

0xbd8c,	// (0x00026a98) grid_wheel_folder_pane_ParamLimits

0xbd8c,	// (0x00026a98) grid_wheel_folder_pane

0xbda2,	// (0x00026aae) list_wheel_apps_pane_ParamLimits

0xbda2,	// (0x00026aae) list_wheel_apps_pane

0xbdb3,	// (0x00026abf) main_apps_wheel_pane_g1_ParamLimits

0xbdb3,	// (0x00026abf) main_apps_wheel_pane_g1

0xbdc7,	// (0x00026ad3) main_apps_wheel_pane_g2_ParamLimits

0xbdc7,	// (0x00026ad3) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0002a7bd) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0002a7bd) main_apps_wheel_pane_g

0xbddf,	// (0x00026aeb) main_apps_wheel_pane_t1_ParamLimits

0xbddf,	// (0x00026aeb) main_apps_wheel_pane_t1

0xbe02,	// (0x00026b0e) list_wheel_apps_pane_g1

0xbe0a,	// (0x00026b16) list_wheel_apps_pane_g2

0xbe12,	// (0x00026b1e) list_wheel_apps_pane_g3

0xbe1a,	// (0x00026b26) list_wheel_apps_pane_g4

0xbe24,	// (0x00026b30) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0002a7c2) list_wheel_apps_pane_g

0x92c1,	// (0x00023fcd) navi_icon_text_pane

0x97a1,	// (0x000244ad) aid_fill_nsta

0xbe47,	// (0x00026b53) navi_icon_text_pane_g1

0xbe53,	// (0x00026b5f) navi_icon_text_pane_t1

0x9154,	// (0x00023e60) list_set_graphic_pane_t1_ParamLimits

0x9154,	// (0x00023e60) list_set_graphic_pane_t1

0xa82a,	// (0x00025536) popup_midp_note_alarm_window_t6_ParamLimits

0xa82a,	// (0x00025536) popup_midp_note_alarm_window_t6

0xa83c,	// (0x00025548) popup_midp_note_alarm_window_t7_ParamLimits

0xa83c,	// (0x00025548) popup_midp_note_alarm_window_t7

0xa84e,	// (0x0002555a) popup_midp_note_alarm_window_t8_ParamLimits

0xa84e,	// (0x0002555a) popup_midp_note_alarm_window_t8

0xa860,	// (0x0002556c) popup_midp_note_alarm_window_t9_ParamLimits

0xa860,	// (0x0002556c) popup_midp_note_alarm_window_t9

0xa872,	// (0x0002557e) popup_midp_note_alarm_window_t10_ParamLimits

0xa872,	// (0x0002557e) popup_midp_note_alarm_window_t10

0xa884,	// (0x00025590) popup_midp_note_alarm_window_t11_ParamLimits

0xa884,	// (0x00025590) popup_midp_note_alarm_window_t11

0xa896,	// (0x000255a2) scroll_pane_cp17_ParamLimits

0xa896,	// (0x000255a2) scroll_pane_cp17

0x6bf7,	// (0x00021903) volume_small_pane_cp_g1

0x6eec,	// (0x00021bf8) volume_small_pane_cp_g2

0x6ef5,	// (0x00021c01) volume_small_pane_cp_g3

0x6efe,	// (0x00021c0a) volume_small_pane_cp_g4

0x6f07,	// (0x00021c13) volume_small_pane_cp_g5

0x6f10,	// (0x00021c1c) volume_small_pane_cp_g6

0x6f19,	// (0x00021c25) volume_small_pane_cp_g7

0x6f22,	// (0x00021c2e) volume_small_pane_cp_g8

0x6f2b,	// (0x00021c37) volume_small_pane_cp_g9

0x6f34,	// (0x00021c40) volume_small_pane_cp_g10

0x9512,	// (0x0002421e) midp_ticker_pane_g1_ParamLimits

0x951e,	// (0x0002422a) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002a464) midp_ticker_pane_g_ParamLimits

0x952a,	// (0x00024236) midp_ticker_pane_t1_ParamLimits

0x97b7,	// (0x000244c3) aid_fill_nsta_2

0xa0bb,	// (0x00024dc7) list_form2_midp_pane

0xb1f0,	// (0x00025efc) midp_editing_number_pane_ParamLimits

0xb1ff,	// (0x00025f0b) midp_ticker_pane_ParamLimits

0xbe65,	// (0x00026b71) form2_midp_field_pane

0xbe89,	// (0x00026b95) scroll_pane_cp51

0xbea9,	// (0x00026bb5) form2_midp_button_pane_ParamLimits

0xbea9,	// (0x00026bb5) form2_midp_button_pane

0xbebb,	// (0x00026bc7) form2_midp_content_pane_ParamLimits

0xbebb,	// (0x00026bc7) form2_midp_content_pane

0xbed5,	// (0x00026be1) form2_midp_field_choice_group_pane

0xbedd,	// (0x00026be9) form2_midp_field_pane_g1

0xbee5,	// (0x00026bf1) form2_midp_field_pane_g2

0xbeed,	// (0x00026bf9) form2_midp_field_pane_g3

0xbef5,	// (0x00026c01) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0002a7e7) form2_midp_field_pane_g

0xbefd,	// (0x00026c09) form2_midp_gauge_slider_pane

0xbf05,	// (0x00026c11) form2_midp_gauge_wait_pane

0xbf0d,	// (0x00026c19) form2_midp_image_pane_ParamLimits

0xbf0d,	// (0x00026c19) form2_midp_image_pane

0xbf34,	// (0x00026c40) form2_midp_label_pane_ParamLimits

0xbf34,	// (0x00026c40) form2_midp_label_pane

0xbf4d,	// (0x00026c59) form2_midp_label_pane_cp_ParamLimits

0xbf4d,	// (0x00026c59) form2_midp_label_pane_cp

0xbf6e,	// (0x00026c7a) form2_midp_string_pane_ParamLimits

0xbf6e,	// (0x00026c7a) form2_midp_string_pane

0x56e6,	// (0x000203f2) form2_midp_text_pane_ParamLimits

0x56e6,	// (0x000203f2) form2_midp_text_pane

0xbf80,	// (0x00026c8c) form2_midp_time_pane

0xbf90,	// (0x00026c9c) input_focus_pane_cp51_ParamLimits

0xbf90,	// (0x00026c9c) input_focus_pane_cp51

0xbfa8,	// (0x00026cb4) form2_midp_label_pane_t1_ParamLimits

0xbfa8,	// (0x00026cb4) form2_midp_label_pane_t1

0x5701,	// (0x0002040d) form2_mdip_text_pane_t1_ParamLimits

0x5701,	// (0x0002040d) form2_mdip_text_pane_t1

0x571f,	// (0x0002042b) form2_midp_time_pane_t1

0xbff1,	// (0x00026cfd) form2_midp_gauge_slider_pane_t1

0xc003,	// (0x00026d0f) form2_midp_gauge_slider_pane_t2

0xc015,	// (0x00026d21) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0002a7f0) form2_midp_gauge_slider_pane_t

0xc027,	// (0x00026d33) form2_midp_slider_pane

0xc033,	// (0x00026d3f) form2_midp_gauge_wait_pane_t1

0xc041,	// (0x00026d4d) form2_midp_wait_pane_ParamLimits

0xc041,	// (0x00026d4d) form2_midp_wait_pane

0x9db6,	// (0x00024ac2) list_single_2graphic_pane_cp4_ParamLimits

0x9db6,	// (0x00024ac2) list_single_2graphic_pane_cp4

0xc06c,	// (0x00026d78) list_single_midp_graphic_pane_cp_ParamLimits

0xc06c,	// (0x00026d78) list_single_midp_graphic_pane_cp

0x7e5c,	// (0x00022b68) list_highlight_pane_cp20

0xc09b,	// (0x00026da7) list_single_2graphic_pane_g1_cp4

0xc0a3,	// (0x00026daf) list_single_2graphic_pane_g2_cp4

0xc0ab,	// (0x00026db7) list_single_2graphic_pane_t1_cp4

0x7f3c,	// (0x00022c48) list_highlight_pane_cp21

0xc0ba,	// (0x00026dc6) list_single_midp_graphic_pane_g4_cp

0xc0c9,	// (0x00026dd5) list_single_midp_graphic_pane_t1_cp

0xc0de,	// (0x00026dea) form2_mdip_string_pane_t1_ParamLimits

0xc0de,	// (0x00026dea) form2_mdip_string_pane_t1

0x7e5c,	// (0x00022b68) bg_wml_button_pane_cp2

0x7e52,	// (0x00022b5e) form2_midp_image_pane_g1

0x4c24,	// (0x0001f930) list_double_large_graphic_pane_g5_ParamLimits

0x4c24,	// (0x0001f930) list_double_large_graphic_pane_g5

0x898f,	// (0x0002369b) midp_form_pane_ParamLimits

0x7f3c,	// (0x00022c48) main_apps_wheel_pane_ParamLimits

0x68c5,	// (0x000215d1) popup_preview_window_ParamLimits

0x68c5,	// (0x000215d1) popup_preview_window

0x6a80,	// (0x0002178c) popup_touch_info_window_ParamLimits

0x6a80,	// (0x0002178c) popup_touch_info_window

0x6a9e,	// (0x000217aa) popup_touch_menu_window_ParamLimits

0x6a9e,	// (0x000217aa) popup_touch_menu_window

0x7e48,	// (0x00022b54) bg_popup_sub_pane_cp6

0xc1d7,	// (0x00026ee3) list_touch_menu_pane

0xc1df,	// (0x00026eeb) list_single_touch_menu_pane_ParamLimits

0xc1df,	// (0x00026eeb) list_single_touch_menu_pane

0xc1f5,	// (0x00026f01) list_single_touch_menu_pane_t1

0x7f3c,	// (0x00022c48) bg_popup_sub_pane_cp7_ParamLimits

0x7f3c,	// (0x00022c48) bg_popup_sub_pane_cp7

0xc203,	// (0x00026f0f) heading_sub_pane

0xc20b,	// (0x00026f17) list_touch_info_pane_ParamLimits

0xc20b,	// (0x00026f17) list_touch_info_pane

0xc21a,	// (0x00026f26) list_single_touch_info_pane_ParamLimits

0xc21a,	// (0x00026f26) list_single_touch_info_pane

0xc22c,	// (0x00026f38) list_single_touch_info_pane_t1

0xc23a,	// (0x00026f46) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0002a7fe) list_single_touch_info_pane_t

0x9441,	// (0x0002414d) bg_popup_heading_pane_cp

0xc248,	// (0x00026f54) heading_sub_pane_t1

0x9cfd,	// (0x00024a09) bg_popup_preview_window_pane_cp_ParamLimits

0x9cfd,	// (0x00024a09) bg_popup_preview_window_pane_cp

0xc203,	// (0x00026f0f) heading_preview_pane

0xc20b,	// (0x00026f17) list_preview_pane_ParamLimits

0xc20b,	// (0x00026f17) list_preview_pane

0xc256,	// (0x00026f62) popup_preview_window_g1

0xc21a,	// (0x00026f26) list_single_preview_pane_ParamLimits

0xc21a,	// (0x00026f26) list_single_preview_pane

0xc25e,	// (0x00026f6a) list_single_preview_pane_g1

0xc266,	// (0x00026f72) list_single_preview_pane_t1

0xc22c,	// (0x00026f38) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0002a803) list_single_preview_pane_t

0xc274,	// (0x00026f80) bg_popup_heading_pane_cp2_ParamLimits

0xc274,	// (0x00026f80) bg_popup_heading_pane_cp2

0xc28a,	// (0x00026f96) heading_preview_pane_g1

0xc292,	// (0x00026f9e) heading_preview_pane_t1_ParamLimits

0xc292,	// (0x00026f9e) heading_preview_pane_t1

0x8028,	// (0x00022d34) soft_indicator_pane_t1_ParamLimits

0x871e,	// (0x0002342a) scroll_pane_ParamLimits

0x8c37,	// (0x00023943) scroll_sc2_left_pane

0x8c40,	// (0x0002394c) scroll_sc2_right_pane

0x8c5f,	// (0x0002396b) scroll_bg_pane_g1_ParamLimits

0x8c74,	// (0x00023980) scroll_bg_pane_g2_ParamLimits

0x8c8c,	// (0x00023998) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002a3ef) scroll_bg_pane_g_ParamLimits

0x8c5f,	// (0x0002396b) scroll_handle_pane_g1_ParamLimits

0x8cae,	// (0x000239ba) scroll_handle_pane_g2_ParamLimits

0x8c8c,	// (0x00023998) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002a3f6) scroll_handle_pane_g_ParamLimits

0x6546,	// (0x00021252) popup_choice_list_window_ParamLimits

0x6546,	// (0x00021252) popup_choice_list_window

0x9bd3,	// (0x000248df) choice_list_pane

0x9c55,	// (0x00024961) cell_toolbar_pane_t1

0x9c7d,	// (0x00024989) toolbar_button_pane_ParamLimits

0xad50,	// (0x00025a5c) ai_gene_pane_1_t2_ParamLimits

0xad50,	// (0x00025a5c) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a617) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a617) ai_gene_pane_1_t

0xc2af,	// (0x00026fbb) scroll_sc2_left_pane_g1

0xc2af,	// (0x00026fbb) scroll_sc2_right_pane_g1

0x977f,	// (0x0002448b) bg_popup_sub_pane_cp10

0xc2b9,	// (0x00026fc5) list_choice_list_pane

0xc2d2,	// (0x00026fde) list_single_choice_list_pane_ParamLimits

0xc2d2,	// (0x00026fde) list_single_choice_list_pane

0xc2e5,	// (0x00026ff1) list_single_choice_list_pane_g1

0x893f,	// (0x0002364b) list_single_choice_list_pane_t1_ParamLimits

0x893f,	// (0x0002364b) list_single_choice_list_pane_t1

0xc2ed,	// (0x00026ff9) choice_list_pane_g1

0xc2f5,	// (0x00027001) choice_list_pane_t1

0x7e48,	// (0x00022b54) input_focus_pane_cp11

0x8b16,	// (0x00023822) title_pane_stacon_g2_ParamLimits

0x8b16,	// (0x00023822) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002a3d5) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002a3d5) title_pane_stacon_g

0x9441,	// (0x0002414d) cursor_press_pane

0x65f2,	// (0x000212fe) popup_fep_hwr_window_ParamLimits

0x65f2,	// (0x000212fe) popup_fep_hwr_window

0x666c,	// (0x00021378) popup_fep_vkb_window_ParamLimits

0x666c,	// (0x00021378) popup_fep_vkb_window

0xc303,	// (0x0002700f) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0002a82c) fep_vkb_side_pane_g_ParamLimits

0x6f76,	// (0x00021c82) fep_hwr_candidate_pane_ParamLimits

0x6f76,	// (0x00021c82) fep_hwr_candidate_pane

0x6fa0,	// (0x00021cac) fep_hwr_side_pane_ParamLimits

0x6fa0,	// (0x00021cac) fep_hwr_side_pane

0x6fc0,	// (0x00021ccc) fep_hwr_top_pane_ParamLimits

0x6fc0,	// (0x00021ccc) fep_hwr_top_pane

0x6fd8,	// (0x00021ce4) fep_hwr_write_pane_ParamLimits

0x6fd8,	// (0x00021ce4) fep_hwr_write_pane

0xfb20,	// (0x0002a82c) fep_vkb_side_pane_g

0xc30b,	// (0x00027017) fep_hwr_top_pane_g1

0xc31d,	// (0x00027029) fep_hwr_top_pane_g2

0x7004,	// (0x00021d10) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0002a808) fep_hwr_top_pane_g

0x7019,	// (0x00021d25) fep_hwr_top_text_pane

0x8e2e,	// (0x00023b3a) fep_hwr_top_text_pane_g1

0xc353,	// (0x0002705f) fep_hwr_top_text_pane_t1

0x710f,	// (0x00021e1b) fep_hwr_candidate_pane_g1

0xc5a6,	// (0x000272b2) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a6,	// (0x000272b2) fep_vkb_keypad_pane_g3

0xc5ce,	// (0x000272da) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ce,	// (0x000272da) fep_vkb_keypad_pane_g4

0xc63d,	// (0x00027349) fep_vkb_bottom_pane_g2_ParamLimits

0xc63d,	// (0x00027349) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0002a833) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0002a833) fep_vkb_bottom_pane_g

0xc2af,	// (0x00026fbb) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0002a83d) cell_vkb_side_pane_g

0xc6c8,	// (0x000273d4) cell_vkb_side_pane_t1

0xc6d6,	// (0x000273e2) cell_vkb_side_pane_t1_copy1

0xc2af,	// (0x00026fbb) bg_fep_vkb_candidate_pane_g2

0xc802,	// (0x0002750e) cell_vkb_candidate_pane_ParamLimits

0xc361,	// (0x0002706d) aid_size_cell_vkb_ParamLimits

0xc361,	// (0x0002706d) aid_size_cell_vkb

0xc802,	// (0x0002750e) cell_vkb_candidate_pane

0x7129,	// (0x00021e35) bg_popup_fep_shadow_pane_g1

0xc3ef,	// (0x000270fb) fep_vkb_bottom_pane_ParamLimits

0xc3ef,	// (0x000270fb) fep_vkb_bottom_pane

0xc425,	// (0x00027131) fep_vkb_candidate_pane_ParamLimits

0xc425,	// (0x00027131) fep_vkb_candidate_pane

0xc441,	// (0x0002714d) fep_vkb_keypad_pane_ParamLimits

0xc441,	// (0x0002714d) fep_vkb_keypad_pane

0xc487,	// (0x00027193) fep_vkb_side_pane_ParamLimits

0xc487,	// (0x00027193) fep_vkb_side_pane

0xc4c3,	// (0x000271cf) fep_vkb_top_pane_ParamLimits

0xc4c3,	// (0x000271cf) fep_vkb_top_pane

0xc4ff,	// (0x0002720b) fep_vkb_top_pane_g1_ParamLimits

0xc4ff,	// (0x0002720b) fep_vkb_top_pane_g1

0xc50e,	// (0x0002721a) fep_vkb_top_pane_g2_ParamLimits

0xc50e,	// (0x0002721a) fep_vkb_top_pane_g2

0xc51d,	// (0x00027229) fep_vkb_top_pane_g3_ParamLimits

0xc51d,	// (0x00027229) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0002a823) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0002a823) fep_vkb_top_pane_g

0xc53b,	// (0x00027247) fep_vkb_top_text_pane_ParamLimits

0xc53b,	// (0x00027247) fep_vkb_top_text_pane

0xc54c,	// (0x00027258) fep_vkb_side_pane_g1_ParamLimits

0xc54c,	// (0x00027258) fep_vkb_side_pane_g1

0xc595,	// (0x000272a1) grid_vkb_side_pane_ParamLimits

0xc595,	// (0x000272a1) grid_vkb_side_pane

0x7131,	// (0x00021e3d) bg_popup_fep_shadow_pane_g2

0x713a,	// (0x00021e46) bg_popup_fep_shadow_pane_g3

0x7142,	// (0x00021e4e) bg_popup_fep_shadow_pane_g4

0x714b,	// (0x00021e57) bg_popup_fep_shadow_pane_g5

0x7155,	// (0x00021e61) bg_popup_fep_shadow_pane_g6

0x715d,	// (0x00021e69) bg_popup_fep_shadow_pane_g7

0x8826,	// (0x00023532) bg_popup_fep_shadow_pane_g8

0xc5ec,	// (0x000272f8) grid_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x000272f8) grid_vkb_keypad_number_pane

0xc5fc,	// (0x00027308) grid_vkb_keypad_pane_ParamLimits

0xc5fc,	// (0x00027308) grid_vkb_keypad_pane

0xc622,	// (0x0002732e) fep_vkb_bottom_pane_g1_ParamLimits

0xc622,	// (0x0002732e) fep_vkb_bottom_pane_g1

0xc64b,	// (0x00027357) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64b,	// (0x00027357) grid_vkb_keypad_bottom_left_pane

0xc660,	// (0x0002736c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc660,	// (0x0002736c) grid_vkb_keypad_bottom_right_pane

0xc675,	// (0x00027381) fep_vkb_top_text_pane_g1

0xc690,	// (0x0002739c) fep_vkb_top_text_pane_t1

0xc6a5,	// (0x000273b1) cell_vkb_side_pane_ParamLimits

0xc6a5,	// (0x000273b1) cell_vkb_side_pane

0xc2af,	// (0x00026fbb) cell_vkb_side_pane_g1

0xc6e4,	// (0x000273f0) cell_vkb_keypad_pane_ParamLimits

0xc6e4,	// (0x000273f0) cell_vkb_keypad_pane

0xc759,	// (0x00027465) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0002a850) bg_popup_fep_shadow_pane_g

0xc2af,	// (0x00026fbb) cell_hwr_side_pane_g1

0xc2af,	// (0x00026fbb) cell_hwr_side_pane_g2

0xc763,	// (0x0002746f) cell_vkb_keypad_pane_t1

0xc771,	// (0x0002747d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x0002747d) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x0002749a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x0002749a) cell_vkb_keypad_bottom_right_pane

0xc2af,	// (0x00026fbb) cell_vkb_keypad_bottom_left_pane_g1

0xc2af,	// (0x00026fbb) cell_vkb_keypad_bottom_right_pane_g1

0xc7c7,	// (0x000274d3) cell_vkb_keypad_number_pane_ParamLimits

0xc7c7,	// (0x000274d3) cell_vkb_keypad_number_pane

0xc7e6,	// (0x000274f2) cell_vkb_keypad_number_pane_g1

0xc7f0,	// (0x000274fc) cell_vkb_keypad_number_pane_g2

0xc7f9,	// (0x00027505) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0002a842) cell_vkb_keypad_number_pane_g

0xc763,	// (0x0002746f) cell_vkb_keypad_number_pane_t1

0xc81d,	// (0x00027529) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0002a83d) cell_hwr_side_pane_g

0xc836,	// (0x00027542) cell_hwr_side_pane_t1

0x716f,	// (0x00021e7b) cell_hwr_side_pane_t1_copy1

0xc52d,	// (0x00027239) cell_hwr_candidate_pane_g1

0x717d,	// (0x00021e89) cell_hwr_candidate_pane_t1

0xc2af,	// (0x00026fbb) cell_vkb_candidate_pane_g2

0xc8bc,	// (0x000275c8) cell_vkb_candidate_pane_t1

0x6f3d,	// (0x00021c49) bg_popup_fep_shadow_pane_ParamLimits

0x6f3d,	// (0x00021c49) bg_popup_fep_shadow_pane

0x1e23,	// (0x0001cb2f) bg_fep_hwr_top_pane_g4

0xc32f,	// (0x0002703b) bg_hwr_side_pane_g1_ParamLimits

0xc32f,	// (0x0002703b) bg_hwr_side_pane_g1

0x7055,	// (0x00021d61) cell_hwr_side_pane_ParamLimits

0x7055,	// (0x00021d61) cell_hwr_side_pane

0x7090,	// (0x00021d9c) fep_hwr_write_pane_g1_ParamLimits

0x7090,	// (0x00021d9c) fep_hwr_write_pane_g1

0x709d,	// (0x00021da9) fep_hwr_write_pane_g2_ParamLimits

0x709d,	// (0x00021da9) fep_hwr_write_pane_g2

0x70aa,	// (0x00021db6) fep_hwr_write_pane_g3_ParamLimits

0x70aa,	// (0x00021db6) fep_hwr_write_pane_g3

0x70b8,	// (0x00021dc4) fep_hwr_write_pane_g4_ParamLimits

0x70b8,	// (0x00021dc4) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0002a80f) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0002a80f) fep_hwr_write_pane_g

0x1e23,	// (0x0001cb2f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e23,	// (0x0001cb2f) bg_fep_hwr_candidate_pane_g2

0x70cd,	// (0x00021dd9) cell_hwr_candidate_pane_ParamLimits

0x70cd,	// (0x00021dd9) cell_hwr_candidate_pane

0x710f,	// (0x00021e1b) fep_hwr_candidate_pane_g1_ParamLimits

0xc38f,	// (0x0002709b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc38f,	// (0x0002709b) bg_popup_fep_shadow_pane_cp2

0xc52d,	// (0x00027239) fep_vkb_top_pane_g4_ParamLimits

0xc52d,	// (0x00027239) fep_vkb_top_pane_g4

0xc573,	// (0x0002727f) fep_vkb_side_pane_g2_ParamLimits

0xc573,	// (0x0002727f) fep_vkb_side_pane_g2

0x4d67,	// (0x0001fa73) list_setting_pane_t4_ParamLimits

0x4d67,	// (0x0001fa73) list_setting_pane_t4

0x4e01,	// (0x0001fb0d) list_setting_number_pane_t5_ParamLimits

0x4e01,	// (0x0001fb0d) list_setting_number_pane_t5

0x8e75,	// (0x00023b81) list_double_heading_pane_cp2_ParamLimits

0x8e75,	// (0x00023b81) list_double_heading_pane_cp2

0x87b9,	// (0x000234c5) list_double_heading_pane_g1_cp2_ParamLimits

0x87b9,	// (0x000234c5) list_double_heading_pane_g1_cp2

0x87c5,	// (0x000234d1) list_double_heading_pane_g2_cp2_ParamLimits

0x87c5,	// (0x000234d1) list_double_heading_pane_g2_cp2

0xc8ca,	// (0x000275d6) list_double_heading_pane_t1_cp2_ParamLimits

0xc8ca,	// (0x000275d6) list_double_heading_pane_t1_cp2

0xc8e0,	// (0x000275ec) list_double_heading_pane_t2_cp2_ParamLimits

0xc8e0,	// (0x000275ec) list_double_heading_pane_t2_cp2

0x7e30,	// (0x00022b3c) aid_value_unit2

0x5d9a,	// (0x00020aa6) popup_preview_fixed_window

0x81c5,	// (0x00022ed1) bg_popup_preview_window_pane_cp02

0xc8f2,	// (0x000275fe) list_preview_fixed_pane

0xc938,	// (0x00027644) list_empty_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_empty_pane_fp

0xc938,	// (0x00027644) list_single_cale_day_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_single_cale_day_pane_fp

0xc938,	// (0x00027644) list_single_graphic_heading_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_single_graphic_heading_pane_fp

0xc938,	// (0x00027644) list_single_graphic_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_single_graphic_pane_fp

0xc938,	// (0x00027644) list_single_heading_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_single_heading_pane_fp

0xc938,	// (0x00027644) list_single_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_single_pane_fp

0xc94d,	// (0x00027659) list_single_pane_fp_g1_ParamLimits

0xc94d,	// (0x00027659) list_single_pane_fp_g1

0x5732,	// (0x0002043e) list_single_pane_fp_g2_ParamLimits

0x5732,	// (0x0002043e) list_single_pane_fp_g2

0x573e,	// (0x0002044a) list_single_pane_fp_g3_ParamLimits

0x573e,	// (0x0002044a) list_single_pane_fp_g3

0xc959,	// (0x00027665) list_single_pane_fp_g4_ParamLimits

0xc959,	// (0x00027665) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0002a871) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0002a871) list_single_pane_fp_g

0x5752,	// (0x0002045e) list_single_pane_fp_t1_ParamLimits

0x5752,	// (0x0002045e) list_single_pane_fp_t1

0x5769,	// (0x00020475) list_single_graphic_pane_fp_g1_ParamLimits

0x5769,	// (0x00020475) list_single_graphic_pane_fp_g1

0xc94d,	// (0x00027659) list_single_graphic_pane_fp_g2_ParamLimits

0xc94d,	// (0x00027659) list_single_graphic_pane_fp_g2

0x5732,	// (0x0002043e) list_single_graphic_pane_fp_g3_ParamLimits

0x5732,	// (0x0002043e) list_single_graphic_pane_fp_g3

0x573e,	// (0x0002044a) list_single_graphic_pane_fp_g4_ParamLimits

0x573e,	// (0x0002044a) list_single_graphic_pane_fp_g4

0xc959,	// (0x00027665) list_single_graphic_pane_fp_g5_ParamLimits

0xc959,	// (0x00027665) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a87a) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a87a) list_single_graphic_pane_fp_g

0x5775,	// (0x00020481) list_single_graphic_pane_fp_t1_ParamLimits

0x5775,	// (0x00020481) list_single_graphic_pane_fp_t1

0x5769,	// (0x00020475) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5769,	// (0x00020475) list_single_graphic_heading_pane_fp_g1

0xc94d,	// (0x00027659) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x00027659) list_single_graphic_heading_pane_fp_g2

0x5732,	// (0x0002043e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5732,	// (0x0002043e) list_single_graphic_heading_pane_fp_g3

0x573e,	// (0x0002044a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x573e,	// (0x0002044a) list_single_graphic_heading_pane_fp_g4

0xc959,	// (0x00027665) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc959,	// (0x00027665) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a87a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a87a) list_single_graphic_heading_pane_fp_g

0x578b,	// (0x00020497) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x578b,	// (0x00020497) list_single_graphic_heading_pane_fp_t1

0x57a1,	// (0x000204ad) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57a1,	// (0x000204ad) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0002a885) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0002a885) list_single_graphic_heading_pane_fp_t

0x57b3,	// (0x000204bf) list_single_cale_day_pane_fp_g1_ParamLimits

0x57b3,	// (0x000204bf) list_single_cale_day_pane_fp_g1

0xc965,	// (0x00027671) list_single_cale_day_pane_fp_g2_ParamLimits

0xc965,	// (0x00027671) list_single_cale_day_pane_fp_g2

0x57eb,	// (0x000204f7) list_single_cale_day_pane_fp_g3_ParamLimits

0x57eb,	// (0x000204f7) list_single_cale_day_pane_fp_g3

0x5813,	// (0x0002051f) list_single_cale_day_pane_fp_g4_ParamLimits

0x5813,	// (0x0002051f) list_single_cale_day_pane_fp_g4

0x5837,	// (0x00020543) list_single_cale_day_pane_fp_g5_ParamLimits

0x5837,	// (0x00020543) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002a88a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002a88a) list_single_cale_day_pane_fp_g

0x585b,	// (0x00020567) list_single_cale_day_pane_fp_t1_ParamLimits

0x585b,	// (0x00020567) list_single_cale_day_pane_fp_t1

0x5881,	// (0x0002058d) list_single_cale_day_pane_fp_t2_ParamLimits

0x5881,	// (0x0002058d) list_single_cale_day_pane_fp_t2

0x589a,	// (0x000205a6) list_single_cale_day_pane_fp_t3_ParamLimits

0x589a,	// (0x000205a6) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0002a895) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0002a895) list_single_cale_day_pane_fp_t

0xc94d,	// (0x00027659) list_empty_pane_fp_g1_ParamLimits

0xc94d,	// (0x00027659) list_empty_pane_fp_g1

0x58b3,	// (0x000205bf) list_empty_pane_fp_t1

0x58c1,	// (0x000205cd) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0002a89c) list_empty_pane_fp_t

0xc94d,	// (0x00027659) list_single_heading_pane_fp_g1_ParamLimits

0xc94d,	// (0x00027659) list_single_heading_pane_fp_g1

0x5732,	// (0x0002043e) list_single_heading_pane_fp_g2_ParamLimits

0x5732,	// (0x0002043e) list_single_heading_pane_fp_g2

0x573e,	// (0x0002044a) list_single_heading_pane_fp_g3_ParamLimits

0x573e,	// (0x0002044a) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0002a8a1) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0002a8a1) list_single_heading_pane_fp_g

0x58cf,	// (0x000205db) list_single_heading_pane_fp_t1_ParamLimits

0x58cf,	// (0x000205db) list_single_heading_pane_fp_t1

0x58e1,	// (0x000205ed) list_single_heading_pane_fp_t2_ParamLimits

0x58e1,	// (0x000205ed) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0002a8a8) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0002a8a8) list_single_heading_pane_fp_t

0x89ad,	// (0x000236b9) aid_size_cell_fast

0x8135,	// (0x00022e41) soft_indicator_pane_cp1_t1

0x89ea,	// (0x000236f6) cell_app_pane_cp2_ParamLimits

0x89ea,	// (0x000236f6) cell_app_pane_cp2

0x6f5f,	// (0x00021c6b) fep_hwr_candidate_drop_down_list_pane

0x1e31,	// (0x0001cb3d) fep_hwr_candidate_pane_g3_ParamLimits

0x1e31,	// (0x0001cb3d) fep_hwr_candidate_pane_g3

0x1e3e,	// (0x0001cb4a) fep_hwr_candidate_pane_g4_ParamLimits

0x1e3e,	// (0x0001cb4a) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0002a81c) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0002a81c) fep_hwr_candidate_pane_g

0xc414,	// (0x00027120) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc414,	// (0x00027120) fep_vkb_candidate_drop_down_list_pane

0xc825,	// (0x00027531) fep_vkb_candidate_pane_g3

0xc82d,	// (0x00027539) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0002a849) fep_vkb_candidate_pane_g

0xc52d,	// (0x00027239) cell_hwr_candidate_pane_g1_ParamLimits

0xc844,	// (0x00027550) cell_hwr_candidate_pane_g3_ParamLimits

0xc844,	// (0x00027550) cell_hwr_candidate_pane_g3

0xc865,	// (0x00027571) cell_hwr_candidate_pane_g4_ParamLimits

0xc865,	// (0x00027571) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0002a863) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0002a863) cell_hwr_candidate_pane_g

0xc886,	// (0x00027592) cell_vkb_candidate_pane_g3_ParamLimits

0xc886,	// (0x00027592) cell_vkb_candidate_pane_g3

0xc8a1,	// (0x000275ad) cell_vkb_candidate_pane_g4_ParamLimits

0xc8a1,	// (0x000275ad) cell_vkb_candidate_pane_g4

0xc971,	// (0x0002767d) cell_app_pane_cp2_g1_ParamLimits

0xc971,	// (0x0002767d) cell_app_pane_cp2_g1

0xc98f,	// (0x0002769b) cell_app_pane_cp2_g2_ParamLimits

0xc98f,	// (0x0002769b) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0002a8ad) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0002a8ad) cell_app_pane_cp2_g

0xc99b,	// (0x000276a7) cell_app_pane_cp2_t1_ParamLimits

0xc99b,	// (0x000276a7) cell_app_pane_cp2_t1

0x87ab,	// (0x000234b7) grid_highlight_pane_cp1_ParamLimits

0x87ab,	// (0x000234b7) grid_highlight_pane_cp1

0x719b,	// (0x00021ea7) cell_hwr_candidate_pane_cp1_ParamLimits

0x719b,	// (0x00021ea7) cell_hwr_candidate_pane_cp1

0xc52d,	// (0x00027239) fep_hwr_candidate_drop_down_list_pane_g1

0xc9ad,	// (0x000276b9) fep_hwr_candidate_drop_down_list_pane_g2

0xc9ba,	// (0x000276c6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a8b2) fep_hwr_candidate_drop_down_list_pane_g

0x71ba,	// (0x00021ec6) fep_hwr_candidate_drop_down_list_scroll_pane

0x71c3,	// (0x00021ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71c3,	// (0x00021ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71d0,	// (0x00021edc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71d0,	// (0x00021edc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71dd,	// (0x00021ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71dd,	// (0x00021ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc886,	// (0x00027592) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc886,	// (0x00027592) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8a1,	// (0x000275ad) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8a1,	// (0x000275ad) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71ea,	// (0x00021ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71ea,	// (0x00021ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7205,	// (0x00021f11) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7205,	// (0x00021f11) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7220,	// (0x00021f2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7220,	// (0x00021f2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002a8b9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002a8b9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9c7,	// (0x000276d3) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9c7,	// (0x000276d3) cell_vkb_candidate_pane_cp1

0xc52d,	// (0x00027239) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc52d,	// (0x00027239) fep_vkb_candidate_drop_down_list_pane_g1

0xc9ad,	// (0x000276b9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ad,	// (0x000276b9) fep_vkb_candidate_drop_down_list_pane_g2

0xc9ba,	// (0x000276c6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9ba,	// (0x000276c6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0002a8b2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0002a8b2) fep_vkb_candidate_drop_down_list_pane_g

0xc9e7,	// (0x000276f3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9e7,	// (0x000276f3) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f4,	// (0x00027700) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f4,	// (0x00027700) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca01,	// (0x0002770d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca01,	// (0x0002770d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca0d,	// (0x00027719) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca0d,	// (0x00027719) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc844,	// (0x00027550) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc844,	// (0x00027550) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc865,	// (0x00027571) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc865,	// (0x00027571) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca19,	// (0x00027725) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca19,	// (0x00027725) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3a,	// (0x00027746) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3a,	// (0x00027746) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5b,	// (0x00027767) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5b,	// (0x00027767) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0002a8ca) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0002a8ca) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e66,	// (0x00022b72) title_pane_g1_ParamLimits

0x7e73,	// (0x00022b7f) title_pane_g2_ParamLimits

0xf54e,	// (0x0002a25a) title_pane_g_ParamLimits

0x8e1e,	// (0x00023b2a) aid_call2_pane

0x8e26,	// (0x00023b32) aid_call_pane

0x8e2e,	// (0x00023b3a) popup_clock_analogue_window_g1

0x8e2e,	// (0x00023b3a) popup_clock_analogue_window_g2

0x610b,	// (0x00020e17) popup_clock_analogue_window_g3

0x6114,	// (0x00020e20) popup_clock_analogue_window_g4

0x7e52,	// (0x00022b5e) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002a404) popup_clock_analogue_window_g

0x611c,	// (0x00020e28) popup_clock_analogue_window_t1

0x612a,	// (0x00020e36) clock_digital_number_pane_ParamLimits

0x612a,	// (0x00020e36) clock_digital_number_pane

0x6136,	// (0x00020e42) clock_digital_number_pane_cp02_ParamLimits

0x6136,	// (0x00020e42) clock_digital_number_pane_cp02

0x6142,	// (0x00020e4e) clock_digital_number_pane_cp03_ParamLimits

0x6142,	// (0x00020e4e) clock_digital_number_pane_cp03

0x614e,	// (0x00020e5a) clock_digital_number_pane_cp04_ParamLimits

0x614e,	// (0x00020e5a) clock_digital_number_pane_cp04

0x615a,	// (0x00020e66) clock_digital_separator_pane_ParamLimits

0x615a,	// (0x00020e66) clock_digital_separator_pane

0x6166,	// (0x00020e72) popup_clock_digital_window_t1_ParamLimits

0x6166,	// (0x00020e72) popup_clock_digital_window_t1

0x7e52,	// (0x00022b5e) clock_digital_number_pane_g1

0x7e52,	// (0x00022b5e) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002a40f) clock_digital_number_pane_g

0x7e52,	// (0x00022b5e) clock_digital_separator_pane_g1

0x7e52,	// (0x00022b5e) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002a40f) clock_digital_separator_pane_g

0x97a1,	// (0x000244ad) aid_fill_nsta_ParamLimits

0x98e7,	// (0x000245f3) indicator_nsta_pane_ParamLimits

0x9a60,	// (0x0002476c) popup_clock_analogue_window

0x9a60,	// (0x0002476c) popup_clock_digital_window

0x7f3c,	// (0x00022c48) grid_indicator_nsta_pane_ParamLimits

0xbca0,	// (0x000269ac) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0002a79c) clock_nsta_pane_t

0x60cf,	// (0x00020ddb) aid_size_max_handle

0x60d9,	// (0x00020de5) aid_size_min_handle

0x9441,	// (0x0002414d) editor_scroll_pane

0xca76,	// (0x00027782) ex_editor_pane

0x891b,	// (0x00023627) scroll_pane_cp13

0x874a,	// (0x00023456) scroll_pane_cp14

0x8e5d,	// (0x00023b69) scroll_pane_cp36

0x8e89,	// (0x00023b95) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e89,	// (0x00023b95) list_single_graphic_hl_pane_cp2

0xb251,	// (0x00025f5d) list_single_graphic_hl_pane_ParamLimits

0xb251,	// (0x00025f5d) list_single_graphic_hl_pane

0x58f7,	// (0x00020603) aid_size_min_hl_cp1

0xca7e,	// (0x0002778a) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x0002778a) list_highlight_pane_cp34

0xca8f,	// (0x0002779b) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x0002779b) list_single_graphic_hl_pane_g1

0x5900,	// (0x0002060c) list_single_graphic_hl_pane_g2_ParamLimits

0x5900,	// (0x0002060c) list_single_graphic_hl_pane_g2

0x5900,	// (0x0002060c) list_single_graphic_hl_pane_g3_ParamLimits

0x5900,	// (0x0002060c) list_single_graphic_hl_pane_g3

0x590c,	// (0x00020618) list_single_graphic_hl_pane_g4_ParamLimits

0x590c,	// (0x00020618) list_single_graphic_hl_pane_g4

0x5918,	// (0x00020624) list_single_graphic_hl_pane_g5_ParamLimits

0x5918,	// (0x00020624) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0002a8db) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0002a8db) list_single_graphic_hl_pane_g

0x592c,	// (0x00020638) list_single_graphic_hl_pane_t1_ParamLimits

0x592c,	// (0x00020638) list_single_graphic_hl_pane_t1

0xca9c,	// (0x000277a8) aid_size_min_hl_cp2

0xcaa5,	// (0x000277b1) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x000277b1) list_highlight_pane_cp34_cp2

0xca8f,	// (0x0002779b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x0002779b) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x000277be) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x000277be) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x000277ca) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x000277ca) list_single_graphic_hl_pane_g3_cp2

0xbf28,	// (0x00026c34) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf28,	// (0x00026c34) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x000277d8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x000277d8) list_single_graphic_hl_pane_g5_cp2

0x641a,	// (0x00021126) control_pane_g4_ParamLimits

0x641a,	// (0x00021126) control_pane_g4

0x977f,	// (0x0002448b) bg_popup_sub_pane_cp10_ParamLimits

0xc2b9,	// (0x00026fc5) list_choice_list_pane_ParamLimits

0xc2c8,	// (0x00026fd4) scroll_pane_cp23

0x81c5,	// (0x00022ed1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f2,	// (0x000275fe) list_preview_fixed_pane_ParamLimits

0xc908,	// (0x00027614) list_preview_fixed_pane_cp_ParamLimits

0xc908,	// (0x00027614) list_preview_fixed_pane_cp

0xc914,	// (0x00027620) popup_preview_fixed_window_g1_ParamLimits

0xc914,	// (0x00027620) popup_preview_fixed_window_g1

0xc920,	// (0x0002762c) popup_preview_fixed_window_g2_ParamLimits

0xc920,	// (0x0002762c) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0002a86a) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0002a86a) popup_preview_fixed_window_g

0x6043,	// (0x00020d4f) aid_navi_side_left_pane_ParamLimits

0x6058,	// (0x00020d64) aid_navi_side_right_pane_ParamLimits

0x6070,	// (0x00020d7c) navi_icon_pane_stacon_ParamLimits

0x6084,	// (0x00020d90) navi_navi_pane_stacon_ParamLimits

0x6070,	// (0x00020d7c) navi_text_pane_stacon_ParamLimits

0x7e48,	// (0x00022b54) main_text_info_pane

0xcaf6,	// (0x00027802) listscroll_text_info_pane

0xcafe,	// (0x0002780a) list_text_info_pane_ParamLimits

0xcafe,	// (0x0002780a) list_text_info_pane

0xcb0d,	// (0x00027819) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x00027819) scroll_pane_cp24

0xcb2b,	// (0x00027837) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x00027837) list_text_info_pane_t1

0x6564,	// (0x00021270) popup_fast_swap2_window_ParamLimits

0x6564,	// (0x00021270) popup_fast_swap2_window

0xcb5c,	// (0x00027868) aid_size_cell_fast2

0x7e48,	// (0x00022b54) bg_popup_window_pane_cp17

0xa0e7,	// (0x00024df3) heading_pane_cp2

0x8414,	// (0x00023120) listscroll_fast2_pane

0xcb66,	// (0x00027872) grid_fast2_pane

0xcb70,	// (0x0002787c) listscroll_fast2_pane_g1

0xcb78,	// (0x00027884) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0002a8e6) listscroll_fast2_pane_g

0x891b,	// (0x00023627) scroll_pane_cp26

0xcb82,	// (0x0002788e) cell_fast2_pane_ParamLimits

0xcb82,	// (0x0002788e) cell_fast2_pane

0xcb97,	// (0x000278a3) cell_fast2_pane_g1

0xcba0,	// (0x000278ac) cell_fast2_pane_g2

0xcba9,	// (0x000278b5) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0002a8eb) cell_fast2_pane_g

0x8507,	// (0x00023213) grid_highlight_pane_cp9

0x851c,	// (0x00023228) main_eswt_pane_ParamLimits

0x851c,	// (0x00023228) main_eswt_pane

0xcb22,	// (0x0002782e) list_single_text_info_pane

0xcbb1,	// (0x000278bd) eswt_ctrl_button_pane

0xcbb1,	// (0x000278bd) eswt_ctrl_canvas_pane

0xcbb9,	// (0x000278c5) eswt_ctrl_combo_pane

0xcbb1,	// (0x000278bd) eswt_ctrl_default_pane

0xcbb1,	// (0x000278bd) eswt_ctrl_label_pane

0xcbc1,	// (0x000278cd) eswt_ctrl_wait_pane

0xcbc9,	// (0x000278d5) eswt_shell_pane

0x7e48,	// (0x00022b54) listscroll_eswt_app_pane

0xcbe9,	// (0x000278f5) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x000278f5) popup_eswt_tasktip_window

0x9cfd,	// (0x00024a09) bg_popup_window_pane_cp18

0xcbfa,	// (0x00027906) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x00027906) eswt_control_pane_g1

0xcc07,	// (0x00027913) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x00027913) eswt_control_pane_g2

0xcc14,	// (0x00027920) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x00027920) eswt_control_pane_g3

0xcc21,	// (0x0002792d) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x0002792d) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0002a8f2) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0002a8f2) eswt_control_pane_g

0x87ab,	// (0x000234b7) bg_button_pane_ParamLimits

0x87ab,	// (0x000234b7) bg_button_pane

0x851c,	// (0x00023228) common_borders_pane_copy2_ParamLimits

0x851c,	// (0x00023228) common_borders_pane_copy2

0xcc2e,	// (0x0002793a) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x0002793a) control_button_pane_g1

0xcc3a,	// (0x00027946) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x00027946) control_button_pane_g2

0xcc46,	// (0x00027952) control_button_pane_g3_ParamLimits

0xcc46,	// (0x00027952) control_button_pane_g3

0x0002,

0xfbef,	// (0x0002a8fb) control_button_pane_g_ParamLimits

0xfbef,	// (0x0002a8fb) control_button_pane_g

0xcc5a,	// (0x00027966) control_button_pane_t1

0xcc68,	// (0x00027974) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0002a902) control_button_pane_t

0x9c89,	// (0x00024995) bg_button_pane_g1

0x9c91,	// (0x0002499d) bg_button_pane_g2

0x9c99,	// (0x000249a5) bg_button_pane_g3

0x9ca1,	// (0x000249ad) bg_button_pane_g4

0x9ca9,	// (0x000249b5) bg_button_pane_g5

0x9cb1,	// (0x000249bd) bg_button_pane_g6

0x9cb9,	// (0x000249c5) bg_button_pane_g7

0x9cc1,	// (0x000249cd) bg_button_pane_g8

0x9cc9,	// (0x000249d5) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a56b) bg_button_pane_g

0xc274,	// (0x00026f80) common_borders_pane_ParamLimits

0xc274,	// (0x00026f80) common_borders_pane

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy1

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy1

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy1

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy1

0xc2af,	// (0x00026fbb) bg_eswt_ctrl_canvas_pane_g1

0xc274,	// (0x00026f80) common_borders_pane_cp2_ParamLimits

0xc274,	// (0x00026f80) common_borders_pane_cp2

0xc274,	// (0x00026f80) common_borders_pane_cp3_ParamLimits

0xc274,	// (0x00026f80) common_borders_pane_cp3

0xcc76,	// (0x00027982) separator_horizontal_pane

0xcc7e,	// (0x0002798a) separator_vertical_pane

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy2

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy2

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy2

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy2

0x7e48,	// (0x00022b54) common_borders_pane_cp4

0xcc87,	// (0x00027993) separator_horizontal_pane_g1

0xcc90,	// (0x0002799c) separator_horizontal_pane_g2

0xcc99,	// (0x000279a5) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0002a907) separator_horizontal_pane_g

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy3

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy3

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy3

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy3

0x7e48,	// (0x00022b54) common_borders_pane_cp5

0xcca2,	// (0x000279ae) separator_vertical_pane_g1

0xccab,	// (0x000279b7) separator_vertical_pane_g2

0xccb4,	// (0x000279c0) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0002a90e) separator_vertical_pane_g

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x00027906) eswt_control_pane_g1_copy4

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x00027913) eswt_control_pane_g2_copy4

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x00027920) eswt_control_pane_g3_copy4

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x0002792d) eswt_control_pane_g4_copy4

0xccbd,	// (0x000279c9) eswt_ctrl_combo_button_pane

0xccc5,	// (0x000279d1) eswt_ctrl_input_pane

0xcccd,	// (0x000279d9) popup_choice_list_window_cp70

0xccd5,	// (0x000279e1) eswt_ctrl_input_pane_t1

0x7e48,	// (0x00022b54) input_focus_pane_cp70

0xc274,	// (0x00026f80) bg_button_pane_cp70_ParamLimits

0xc274,	// (0x00026f80) bg_button_pane_cp70

0xcce3,	// (0x000279ef) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x000279f7) wait_bar_pane_cp70

0x9cfd,	// (0x00024a09) bg_popup_window_pane_cp70_ParamLimits

0x9cfd,	// (0x00024a09) bg_popup_window_pane_cp70

0xccf3,	// (0x000279ff) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00027a15) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00027a15) wait_bar_pane_cp71

0xcd15,	// (0x00027a21) grid_eswt_app_pane

0x8c40,	// (0x0002394c) scroll_pane_cp70

0xcd1e,	// (0x00027a2a) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x00027a2a) cell_eswt_app_pane

0xcd4e,	// (0x00027a5a) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x00027a5a) cell_eswt_app_pane_g1

0xcd7d,	// (0x00027a89) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00027a89) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0002a915) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0002a915) cell_eswt_app_pane_g

0xcda6,	// (0x00027ab2) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x00027ab2) cell_eswt_app_pane_t1

0xcdd8,	// (0x00027ae4) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00027ae4) grid_highlight_pane_cp70

0x9316,	// (0x00024022) set_content_pane_g1

0x96e0,	// (0x000243ec) status_small_volume_pane

0x723b,	// (0x00021f47) status_small_volume_pane_g1

0x7243,	// (0x00021f4f) volume_small2_pane

0x724c,	// (0x00021f58) volume_small2_pane_g1

0x7255,	// (0x00021f61) volume_small2_pane_g2

0x725e,	// (0x00021f6a) volume_small2_pane_g3

0x7267,	// (0x00021f73) volume_small2_pane_g4

0x7270,	// (0x00021f7c) volume_small2_pane_g5

0x7279,	// (0x00021f85) volume_small2_pane_g6

0x7282,	// (0x00021f8e) volume_small2_pane_g7

0x728b,	// (0x00021f97) volume_small2_pane_g8

0x7294,	// (0x00021fa0) volume_small2_pane_g9

0x729d,	// (0x00021fa9) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0002a91a) volume_small2_pane_g

0xc675,	// (0x00027381) fep_vkb_top_text_pane_g1_ParamLimits

0xc690,	// (0x0002739c) fep_vkb_top_text_pane_t1_ParamLimits

0xc92c,	// (0x00027638) popup_preview_fixed_window_g3_ParamLimits

0xc92c,	// (0x00027638) popup_preview_fixed_window_g3

0x6a13,	// (0x0002171f) popup_toolbar_trans_pane

0xb058,	// (0x00025d64) aid_height_set_list_ParamLimits

0xb069,	// (0x00025d75) aid_size_parent_ParamLimits

0x977f,	// (0x0002448b) list_highlight_pane_cp2_ParamLimits

0x9316,	// (0x00024022) set_content_pane_g1_ParamLimits

0xb26d,	// (0x00025f79) list_single_image_pane_ParamLimits

0xb26d,	// (0x00025f79) list_single_image_pane

0xcde4,	// (0x00027af0) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00027af0) aid_size_cell_image

0xcdf1,	// (0x00027afd) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00027afd) grid_single_image_pane

0xa1a6,	// (0x00024eb2) list_single_image_pane_g1_ParamLimits

0xa1a6,	// (0x00024eb2) list_single_image_pane_g1

0xcdfd,	// (0x00027b09) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x00027b09) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0002a92f) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0002a92f) list_single_image_pane_g

0xce11,	// (0x00027b1d) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x00027b1d) list_single_image_pane_t1

0xce27,	// (0x00027b33) cell_image_list_pane_ParamLimits

0xce27,	// (0x00027b33) cell_image_list_pane

0xce3b,	// (0x00027b47) cell_image_list_pane_g1

0xce44,	// (0x00027b50) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0002a934) cell_image_list_pane_g

0xce4d,	// (0x00027b59) aid_size_cell_tb_trans_pane

0x87ab,	// (0x000234b7) bg_tb_trans_pane

0xce5f,	// (0x00027b6b) grid_tb_trans_pane

0x9c89,	// (0x00024995) bg_tb_trans_pane_g1

0x9c91,	// (0x0002499d) bg_tb_trans_pane_g2

0x9c99,	// (0x000249a5) bg_tb_trans_pane_g3

0x9ca1,	// (0x000249ad) bg_tb_trans_pane_g4

0x9ca9,	// (0x000249b5) bg_tb_trans_pane_g5

0x9cc1,	// (0x000249cd) bg_tb_trans_pane_g6

0x9cc9,	// (0x000249d5) bg_tb_trans_pane_g7

0x9cb1,	// (0x000249bd) bg_tb_trans_pane_g8

0x9cb9,	// (0x000249c5) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0002a939) bg_tb_trans_pane_g

0xce73,	// (0x00027b7f) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x00027b7f) cell_toolbar_trans_pane

0xc2af,	// (0x00026fbb) cell_toolbar_trans_pane_g1

0xbe6d,	// (0x00026b79) list_form2_midp_pane_t1

0xbe7b,	// (0x00026b87) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0002a7e2) list_form2_midp_pane_t

0xbe89,	// (0x00026b95) scroll_pane_cp51_ParamLimits

0xc051,	// (0x00026d5d) form2_midp_wait_pane_g1

0xc05a,	// (0x00026d66) form2_midp_wait_pane_g2

0xc063,	// (0x00026d6f) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0002a7f7) form2_midp_wait_pane_g

0x7f3c,	// (0x00022c48) list_highlight_pane_cp21_ParamLimits

0xc0ba,	// (0x00026dc6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0c9,	// (0x00026dd5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5346,	// (0x00020052) list_single_2graphic_im_pane_ParamLimits

0x5346,	// (0x00020052) list_single_2graphic_im_pane

0xce99,	// (0x00027ba5) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x00027ba5) list_single_2graphic_im_pane_g1

0xceaa,	// (0x00027bb6) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x00027bb6) list_single_2graphic_im_pane_g2

0xceb6,	// (0x00027bc2) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x00027bc2) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0002a94c) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0002a94c) list_single_2graphic_im_pane_g

0xced6,	// (0x00027be2) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00027be2) list_single_2graphic_im_pane_t1

0xc938,	// (0x00027644) list_single_graphic_2heading_pane_fp_ParamLimits

0xc938,	// (0x00027644) list_single_graphic_2heading_pane_fp

0x5769,	// (0x00020475) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5769,	// (0x00020475) list_single_graphic_2heading_pane_fp_g1

0xc94d,	// (0x00027659) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc94d,	// (0x00027659) list_single_graphic_2heading_pane_fp_g2

0x5732,	// (0x0002043e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5732,	// (0x0002043e) list_single_graphic_2heading_pane_fp_g3

0x573e,	// (0x0002044a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x573e,	// (0x0002044a) list_single_graphic_2heading_pane_fp_g4

0xc959,	// (0x00027665) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc959,	// (0x00027665) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0002a87a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002a87a) list_single_graphic_2heading_pane_fp_g

0x5942,	// (0x0002064e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5942,	// (0x0002064e) list_single_graphic_2heading_pane_fp_t1

0x57a1,	// (0x000204ad) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57a1,	// (0x000204ad) list_single_graphic_2heading_pane_fp_t2

0x5958,	// (0x00020664) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5958,	// (0x00020664) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0002a955) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0002a955) list_single_graphic_2heading_pane_fp_t

0xc33b,	// (0x00027047) fep_hwr_write_pane_g5_ParamLimits

0xc33b,	// (0x00027047) fep_hwr_write_pane_g5

0xc347,	// (0x00027053) fep_hwr_write_pane_g6_ParamLimits

0xc347,	// (0x00027053) fep_hwr_write_pane_g6

0xcbc9,	// (0x000278d5) eswt_shell_pane_ParamLimits

0x9cfd,	// (0x00024a09) bg_popup_window_pane_cp18_ParamLimits

0xafb1,	// (0x00025cbd) heading_pane_cp70

0xccf3,	// (0x000279ff) popup_eswt_tasktip_window_t1_ParamLimits

0x97f6,	// (0x00024502) aid_touch_tab_arrow_left

0x9805,	// (0x00024511) aid_touch_tab_arrow_right

0x7e84,	// (0x00022b90) title_pane_g3_ParamLimits

0x7e84,	// (0x00022b90) title_pane_g3

0x876a,	// (0x00023476) set_value_pane_g1

0x6a13,	// (0x0002171f) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x00027b59) aid_size_cell_tb_trans_pane_ParamLimits

0x87ab,	// (0x000234b7) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x00027b6b) grid_tb_trans_pane_ParamLimits

0x81c5,	// (0x00022ed1) cont_note_pane_ParamLimits

0x81c5,	// (0x00022ed1) cont_note_pane

0x851c,	// (0x00023228) cont_snote2_single_text_pane_ParamLimits

0x851c,	// (0x00023228) cont_snote2_single_text_pane

0x851c,	// (0x00023228) cont_snote2_single_graphic_pane_ParamLimits

0x851c,	// (0x00023228) cont_snote2_single_graphic_pane

0xa30e,	// (0x0002501a) cont_note_wait_pane_ParamLimits

0xa30e,	// (0x0002501a) cont_note_wait_pane

0xa30e,	// (0x0002501a) cont_note_image_pane_ParamLimits

0xa30e,	// (0x0002501a) cont_note_image_pane

0xcf07,	// (0x00027c13) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00027c13) popup_note2_window_g1

0xcf38,	// (0x00027c44) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x00027c44) popup_note2_window_t1

0xcf7d,	// (0x00027c89) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x00027c89) popup_note2_window_t2

0xcfc2,	// (0x00027cce) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x00027cce) popup_note2_window_t3

0xd007,	// (0x00027d13) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00027d13) popup_note2_window_t4

0x8249,	// (0x00022f55) popup_note2_window_t5_ParamLimits

0x8249,	// (0x00022f55) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0002a961) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0002a961) popup_note2_window_t

0xd036,	// (0x00027d42) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x00027d42) popup_note2_image_window_g1

0xd042,	// (0x00027d4e) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x00027d4e) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0002a96c) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0002a96c) popup_note2_image_window_g

0xd054,	// (0x00027d60) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x00027d60) popup_note2_image_window_t1

0xd06c,	// (0x00027d78) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x00027d78) popup_note2_image_window_t2

0xd084,	// (0x00027d90) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x00027d90) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0002a971) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0002a971) popup_note2_image_window_t

0xa31c,	// (0x00025028) popup_note2_wait_window_g1_ParamLimits

0xa31c,	// (0x00025028) popup_note2_wait_window_g1

0xd0a0,	// (0x00027dac) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00027dac) popup_note2_wait_window_g2

0xa334,	// (0x00025040) popup_note2_wait_window_g3_ParamLimits

0xa334,	// (0x00025040) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0002a978) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0002a978) popup_note2_wait_window_g

0xd0ac,	// (0x00027db8) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x00027db8) popup_note2_wait_window_t1

0xd0ca,	// (0x00027dd6) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x00027dd6) popup_note2_wait_window_t2

0xd0e8,	// (0x00027df4) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x00027df4) popup_note2_wait_window_t3

0xd0fa,	// (0x00027e06) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x00027e06) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0002a97f) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0002a97f) popup_note2_wait_window_t

0xd10c,	// (0x00027e18) wait_bar2_pane_ParamLimits

0xd10c,	// (0x00027e18) wait_bar2_pane

0xd124,	// (0x00027e30) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x00027e30) popup_snote2_single_text_window_g1

0xd14c,	// (0x00027e58) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x00027e58) popup_snote2_single_text_window_t1

0xd198,	// (0x00027ea4) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x00027ea4) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00027ef0) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00027ef0) popup_snote2_single_text_window_t3

0xd225,	// (0x00027f31) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x00027f31) popup_snote2_single_text_window_t4

0xd25b,	// (0x00027f67) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x00027f67) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0002a988) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0002a988) popup_snote2_single_text_window_t

0xd286,	// (0x00027f92) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x00027f92) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x00027fba) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x00027fba) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0002a993) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0002a993) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x00027fe2) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x00027fe2) popup_snote2_single_graphic_window_t1

0xd322,	// (0x0002802e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x0002802e) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00027ef0) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00027ef0) popup_snote2_single_graphic_window_t3

0xd225,	// (0x00027f31) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x00027f31) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x00027f67) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x00027f67) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0002a998) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0002a998) popup_snote2_single_graphic_window_t

0xbd4a,	// (0x00026a56) clock_nsta_pane_cp2_t1

0xbd4a,	// (0x00026a56) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0002a7b8) clock_nsta_pane_cp2_t

0x4f19,	// (0x0001fc25) form_field_data_wide_pane_g1_ParamLimits

0x87b9,	// (0x000234c5) form_field_data_wide_pane_g2_ParamLimits

0x87b9,	// (0x000234c5) form_field_data_wide_pane_g2

0x87c5,	// (0x000234d1) form_field_data_wide_pane_g3_ParamLimits

0x87c5,	// (0x000234d1) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002a387) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002a387) form_field_data_wide_pane_g

0xbc3c,	// (0x00026948) grid_touch_3_pane_ParamLimits

0xbc3c,	// (0x00026948) grid_touch_3_pane

0xd36e,	// (0x0002807a) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x0002807a) cell_touch_3_pane

0xc2af,	// (0x00026fbb) cell_touch_3_pane_g1

0xc2af,	// (0x00026fbb) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0002a83d) cell_touch_3_pane_g

0x827b,	// (0x00022f87) cont_query_data_pane

0x8283,	// (0x00022f8f) cont_query_data_pane_cp1

0xd39c,	// (0x000280a8) button_value_adjust_pane_cp7

0xd3a4,	// (0x000280b0) query_popup_pane_cp3

0x8f1e,	// (0x00023c2a) bg_popup_sub_pane_cp22_ParamLimits

0x6185,	// (0x00020e91) navi_navi_volume_pane_cp2

0x61a0,	// (0x00020eac) popup_side_volume_key_window_g2

0x61af,	// (0x00020ebb) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002a41d) popup_side_volume_key_window_g

0x61cc,	// (0x00020ed8) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002a424) popup_side_volume_key_window_t

0x91d5,	// (0x00023ee1) popup_side_volume_key_window_ParamLimits

0x4b7a,	// (0x0001f886) list_double_graphic_pane_g4_ParamLimits

0x4b7a,	// (0x0001f886) list_double_graphic_pane_g4

0x5385,	// (0x00020091) list_single_2heading_msg_pane_ParamLimits

0x5385,	// (0x00020091) list_single_2heading_msg_pane

0x5978,	// (0x00020684) list_single_2heading_msg_pane_g1_ParamLimits

0x5978,	// (0x00020684) list_single_2heading_msg_pane_g1

0x49a9,	// (0x0001f6b5) list_single_2heading_msg_pane_g2_ParamLimits

0x49a9,	// (0x0001f6b5) list_single_2heading_msg_pane_g2

0x5984,	// (0x00020690) list_single_2heading_msg_pane_g3_ParamLimits

0x5984,	// (0x00020690) list_single_2heading_msg_pane_g3

0x5990,	// (0x0002069c) list_single_2heading_msg_pane_g4_ParamLimits

0x5990,	// (0x0002069c) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0002a9a3) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0002a9a3) list_single_2heading_msg_pane_g

0x59a8,	// (0x000206b4) list_single_2heading_msg_pane_t1_ParamLimits

0x59a8,	// (0x000206b4) list_single_2heading_msg_pane_t1

0x59d0,	// (0x000206dc) list_single_2heading_msg_pane_t2_ParamLimits

0x59d0,	// (0x000206dc) list_single_2heading_msg_pane_t2

0x5a04,	// (0x00020710) list_single_2heading_msg_pane_t3_ParamLimits

0x5a04,	// (0x00020710) list_single_2heading_msg_pane_t3

0x5a3d,	// (0x00020749) list_single_2heading_msg_pane_t4_ParamLimits

0x5a3d,	// (0x00020749) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0002a9ac) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0002a9ac) list_single_2heading_msg_pane_t

0x7e90,	// (0x00022b9c) title_pane_g4_ParamLimits

0x7e90,	// (0x00022b9c) title_pane_g4

0x5f94,	// (0x00020ca0) title_pane_stacon_g3_ParamLimits

0x5f94,	// (0x00020ca0) title_pane_stacon_g3

0xceca,	// (0x00027bd6) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x00027bd6) list_single_2graphic_im_pane_g4

0xad6d,	// (0x00025a79) popup_side_volume_key_window_cp

0xb589,	// (0x00026295) main_idle_act2_pane_t1

0x6b05,	// (0x00021811) toolbar_button_pane_g10

0x8714,	// (0x00023420) popup_toolbar_window_cp1

0xbd3b,	// (0x00026a47) clock_nsta_pane_cp_t1

0xbd3b,	// (0x00026a47) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0002a7b3) clock_nsta_pane_cp_t

0x6185,	// (0x00020e91) navi_navi_volume_pane_cp2_ParamLimits

0x6194,	// (0x00020ea0) popup_side_volume_key_window_g1_ParamLimits

0x61a0,	// (0x00020eac) popup_side_volume_key_window_g2_ParamLimits

0x61af,	// (0x00020ebb) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002a41d) popup_side_volume_key_window_g_ParamLimits

0x6f4b,	// (0x00021c57) fep_hwr_aid_pane

0x1e23,	// (0x0001cb2f) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30b,	// (0x00027017) fep_hwr_top_pane_g1_ParamLimits

0xc31d,	// (0x00027029) fep_hwr_top_pane_g2_ParamLimits

0x7004,	// (0x00021d10) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0002a808) fep_hwr_top_pane_g_ParamLimits

0x7019,	// (0x00021d25) fep_hwr_top_text_pane_ParamLimits

0xab30,	// (0x0002583c) aid_touch_tab_arrow_arrow_2

0xab39,	// (0x00025845) aid_touch_tab_arrow_left_2

0x6f5f,	// (0x00021c6b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f96,	// (0x00021ca2) fep_hwr_prediction_pane

0xc47d,	// (0x00027189) fep_vkb_prediction_pane

0xc581,	// (0x0002728d) fep_vkb_side_pane_g3_ParamLimits

0xc581,	// (0x0002728d) fep_vkb_side_pane_g3

0xc52d,	// (0x00027239) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9ad,	// (0x000276b9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9ba,	// (0x000276c6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0002a8b2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3c9,	// (0x000280d5) fep_hwr_prediction_pane_g1

0x72a6,	// (0x00021fb2) fep_hwr_prediction_pane_g2

0x72ae,	// (0x00021fba) fep_hwr_prediction_pane_g3

0x72b6,	// (0x00021fc2) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0002a9b5) fep_hwr_prediction_pane_g

0xd3c9,	// (0x000280d5) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x000280df) fep_vkb_prediction_pane_g2

0xd3db,	// (0x000280e7) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x000280ef) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002a9be) fep_vkb_prediction_pane_g

0x6dcb,	// (0x00021ad7) slider_set_pane_g3

0x6ddf,	// (0x00021aeb) slider_set_pane_g4

0x6df7,	// (0x00021b03) slider_set_pane_g5

0x6dcb,	// (0x00021ad7) slider_set_pane_g6

0x6e0d,	// (0x00021b19) slider_set_pane_g7

0xb1ce,	// (0x00025eda) slider_form_pane_g3

0xb1d7,	// (0x00025ee3) slider_form_pane_g4

0xb1df,	// (0x00025eeb) slider_form_pane_g5

0xb1ce,	// (0x00025eda) slider_form_pane_g6

0xb1e7,	// (0x00025ef3) slider_form_pane_g7

0xb834,	// (0x00026540) slider_set_pane_vc_g3

0xb83d,	// (0x00026549) slider_set_pane_vc_g4

0xb846,	// (0x00026552) slider_set_pane_vc_g5

0xb834,	// (0x00026540) slider_set_pane_vc_g6

0xb84f,	// (0x0002655b) slider_set_pane_vc_g7

0xba0f,	// (0x0002671b) slider_form_pane_vc_g1

0xba18,	// (0x00026724) slider_form_pane_vc_g2

0xba21,	// (0x0002672d) slider_form_pane_vc_g3

0xba0f,	// (0x0002671b) slider_form_pane_vc_g4

0xba2a,	// (0x00026736) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0002a785) slider_form_pane_vc_g

0x7e48,	// (0x00022b54) main_idle_act3_pane

0xd3eb,	// (0x000280f7) ai3_links_pane

0xd3f4,	// (0x00028100) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x00028100) popup_ai3_data_window

0x7e48,	// (0x00022b54) grid_ai3_links_pane

0xd40e,	// (0x0002811a) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x0002811a) cell_ai3_links_pane

0xd426,	// (0x00028132) bg_popup_sub_pane_cp11

0xd433,	// (0x0002813f) cell_ai3_links_pane_g1

0x7e48,	// (0x00022b54) bg_popup_sub_pane_cp12

0xd458,	// (0x00028164) heading_ai3_data_pane

0xd460,	// (0x0002816c) list_ai3_gene_pane

0xd46c,	// (0x00028178) popup_ai3_data_window_g1

0xd474,	// (0x00028180) heading_ai3_data_pane_g1

0xd47c,	// (0x00028188) heading_ai3_data_pane_t1

0xd48a,	// (0x00028196) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x00028196) list_double_ai3_gene_pane

0xd497,	// (0x000281a3) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x000281a3) list_single_ai3_gene_pane

0xc274,	// (0x00026f80) list_highlight_pane_cp7_ParamLimits

0xc274,	// (0x00026f80) list_highlight_pane_cp7

0xd4a4,	// (0x000281b0) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x000281b0) list_single_a13_gene_pane_t1

0xd4bb,	// (0x000281c7) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x000281d0) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0002a9c7) list_single_ai3_gene_pane_g

0xd4cc,	// (0x000281d8) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x000281d8) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x000281e4) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x000281e4) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x00028200) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x00028200) list_double_ai3_gene_pane_t2

0xd50a,	// (0x00028216) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x00028216) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0002a9cc) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0002a9cc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x596e,	// (0x0002067a) aid_size_min_col_2

0xd3b5,	// (0x000280c1) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x000280c1) aid_size_min_msg

0xc681,	// (0x0002738d) fep_vkb_top_text_pane_g2_ParamLimits

0xc681,	// (0x0002738d) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0002a838) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0002a838) fep_vkb_top_text_pane_g

0x7e48,	// (0x00022b54) main_hc_apps_shell_pane

0xd527,	// (0x00028233) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x00028233) grid_hc_apps_pane

0xd536,	// (0x00028242) list_hc_apps_pane

0xd53e,	// (0x0002824a) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x0002824a) scroll_pane_cp37

0xd54a,	// (0x00028256) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x00028256) cell_hc_apps_pane

0xd5f8,	// (0x00028304) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x00028304) cell_hc_apps_pane_g1

0xd629,	// (0x00028335) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x00028335) cell_hc_apps_pane_g2

0xd645,	// (0x00028351) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x00028351) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0002a9d3) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0002a9d3) cell_hc_apps_pane_g

0xd667,	// (0x00028373) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x00028373) cell_hc_apps_pane_t1

0x81c5,	// (0x00022ed1) grid_highlight_pane_cp10_ParamLimits

0x81c5,	// (0x00022ed1) grid_highlight_pane_cp10

0xd6a7,	// (0x000283b3) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x000283b3) list_single_hc_apps_pane

0xd703,	// (0x0002840f) list_single_hc_apps_pane_g1

0x5a62,	// (0x0002076e) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0002a9da) list_single_hc_apps_pane_g

0x5a7b,	// (0x00020787) list_single_hc_apps_pane_g2_copy1

0x5a97,	// (0x000207a3) list_single_hc_apps_pane_t1

0x7f3c,	// (0x00022c48) bg_set_opt_pane_cp_ParamLimits

0x5ebc,	// (0x00020bc8) setting_slider_pane_t1_ParamLimits

0x5ed5,	// (0x00020be1) setting_slider_pane_t2_ParamLimits

0x5eef,	// (0x00020bfb) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002a26a) setting_slider_pane_t_ParamLimits

0x5f07,	// (0x00020c13) slider_set_pane_ParamLimits

0x642e,	// (0x0002113a) control_pane_g5_ParamLimits

0x642e,	// (0x0002113a) control_pane_g5

0xb01d,	// (0x00025d29) slider_set_pane_g1_ParamLimits

0x6dbf,	// (0x00021acb) slider_set_pane_g2_ParamLimits

0x6dcb,	// (0x00021ad7) slider_set_pane_g3_ParamLimits

0x6ddf,	// (0x00021aeb) slider_set_pane_g4_ParamLimits

0x6df7,	// (0x00021b03) slider_set_pane_g5_ParamLimits

0x6dcb,	// (0x00021ad7) slider_set_pane_g6_ParamLimits

0x6e0d,	// (0x00021b19) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a669) slider_set_pane_g_ParamLimits

0x92c1,	// (0x00023fcd) navi_icon_text_pane_ParamLimits

0x97b7,	// (0x000244c3) aid_fill_nsta_2_ParamLimits

0x97f6,	// (0x00024502) aid_touch_tab_arrow_left_ParamLimits

0x9805,	// (0x00024511) aid_touch_tab_arrow_right_ParamLimits

0x9872,	// (0x0002457e) clock_nsta_pane_ParamLimits

0xab12,	// (0x0002581e) navi_icon_pane_g1_ParamLimits

0xab1e,	// (0x0002582a) navi_text_pane_t1_ParamLimits

0xbe47,	// (0x00026b53) navi_icon_text_pane_g1_ParamLimits

0xbe53,	// (0x00026b5f) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x0002840f) list_single_hc_apps_pane_g1_ParamLimits

0x5a62,	// (0x0002076e) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0002a9da) list_single_hc_apps_pane_g_ParamLimits

0x5a7b,	// (0x00020787) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a97,	// (0x000207a3) list_single_hc_apps_pane_t1_ParamLimits

0x5dc6,	// (0x00020ad2) popup_toolbar2_fixed_window_ParamLimits

0x5dc6,	// (0x00020ad2) popup_toolbar2_fixed_window

0x6a09,	// (0x00021715) popup_toolbar2_float_window

0x7e48,	// (0x00022b54) bg_popup_sub_pane_cp27

0xd71c,	// (0x00028428) grid_toolbar2_float_pane

0x7e48,	// (0x00022b54) bg_popup_sub_pane_cp26

0xd71c,	// (0x00028428) grid_toolbar2_fixed_pane

0xd724,	// (0x00028430) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x00028430) cell_toolbar2_fixed_pane

0xd734,	// (0x00028440) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x00028449) toolbar2_fixed_button_pane

0x9c89,	// (0x00024995) toolbar2_fixed_button_pane_g1

0x9c91,	// (0x0002499d) toolbar2_fixed_button_pane_g2

0x9c99,	// (0x000249a5) toolbar2_fixed_button_pane_g3

0x9ca1,	// (0x000249ad) toolbar2_fixed_button_pane_g4

0x9ca9,	// (0x000249b5) toolbar2_fixed_button_pane_g5

0x9cb1,	// (0x000249bd) toolbar2_fixed_button_pane_g6

0x9cb9,	// (0x000249c5) toolbar2_fixed_button_pane_g7

0x9cc1,	// (0x000249cd) toolbar2_fixed_button_pane_g8

0x9cc9,	// (0x000249d5) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a56b) toolbar2_fixed_button_pane_g

0xd745,	// (0x00028451) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x00028451) cell_toolbar2_float_pane

0xd756,	// (0x00028462) cell_toolbar2_float_pane_g1

0xd73d,	// (0x00028449) toolbar2_fixed_button_pane_cp

0xc3dd,	// (0x000270e9) fep_vkb_accented_list_pane_ParamLimits

0xc3dd,	// (0x000270e9) fep_vkb_accented_list_pane

0x7167,	// (0x00021e73) bg_popup_fep_shadow_pane_g9

0x9441,	// (0x0002414d) bg_popup_fep_shadow_pane_cp3

0x8902,	// (0x0002360e) list_accented_list_pane

0xd75f,	// (0x0002846b) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x0002846b) list_single_accented_list_pane

0x9441,	// (0x0002414d) list_highlight_pane_cp10

0xd770,	// (0x0002847c) list_single_accented_list_pane_t1

0x6959,	// (0x00021665) popup_slider_window_ParamLimits

0x6959,	// (0x00021665) popup_slider_window

0xd3ac,	// (0x000280b8) aid_indentation_list_msg

0xd82a,	// (0x00028536) bg_popup_window_pane_cp19

0xd894,	// (0x000285a0) popup_slider_window_g1

0xd8b0,	// (0x000285bc) popup_slider_window_g2

0xd8cc,	// (0x000285d8) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0002a9df) popup_slider_window_g

0xd928,	// (0x00028634) popup_slider_window_t1

0xd99c,	// (0x000286a8) small_volume_slider_vertical_pane

0xc2af,	// (0x00026fbb) small_volume_slider_vertical_pane_g1

0xc2af,	// (0x00026fbb) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x000286c4) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0002a9f1) small_volume_slider_vertical_pane_g

0x5b88,	// (0x00020894) area_side_right_pane_ParamLimits

0x5b88,	// (0x00020894) area_side_right_pane

0x72be,	// (0x00021fca) aid_size_side_button_ParamLimits

0x72be,	// (0x00021fca) aid_size_side_button

0x72d2,	// (0x00021fde) grid_sctrl_middle_pane_ParamLimits

0x72d2,	// (0x00021fde) grid_sctrl_middle_pane

0x72f1,	// (0x00021ffd) sctrl_sk_bottom_pane

0x7302,	// (0x0002200e) sctrl_sk_top_pane

0x7314,	// (0x00022020) aid_touch_sctrl_top

0x81c5,	// (0x00022ed1) bg_sctrl_sk_pane_ParamLimits

0x81c5,	// (0x00022ed1) bg_sctrl_sk_pane

0x7321,	// (0x0002202d) sctrl_sk_top_pane_g1

0x732e,	// (0x0002203a) sctrl_sk_top_pane_t1

0x7314,	// (0x00022020) aid_touch_sctrl_bottom

0x81c5,	// (0x00022ed1) bg_sctrl_sk_pane_cp_ParamLimits

0x81c5,	// (0x00022ed1) bg_sctrl_sk_pane_cp

0x7349,	// (0x00022055) sctrl_sk_bottom_pane_g1

0x732e,	// (0x0002203a) sctrl_sk_bottom_pane_t1

0x7352,	// (0x0002205e) cell_sctrl_middle_pane_ParamLimits

0x7352,	// (0x0002205e) cell_sctrl_middle_pane

0x736d,	// (0x00022079) aid_touch_sctrl_middle_ParamLimits

0x736d,	// (0x00022079) aid_touch_sctrl_middle

0x87ab,	// (0x000234b7) bg_sctrl_middle_pane_ParamLimits

0x87ab,	// (0x000234b7) bg_sctrl_middle_pane

0xc52d,	// (0x00027239) cell_sctrl_middle_pane_g1_ParamLimits

0xc52d,	// (0x00027239) cell_sctrl_middle_pane_g1

0x737f,	// (0x0002208b) cell_sctrl_middle_pane_g2_ParamLimits

0x737f,	// (0x0002208b) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0002a9fd) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0002a9fd) cell_sctrl_middle_pane_g

0x9c89,	// (0x00024995) bg_sctrl_middle_pane_g1

0x9c91,	// (0x0002499d) bg_sctrl_middle_pane_g2

0x9c99,	// (0x000249a5) bg_sctrl_middle_pane_g3

0x9ca1,	// (0x000249ad) bg_sctrl_middle_pane_g4

0x9ca9,	// (0x000249b5) bg_sctrl_middle_pane_g5

0x9cb1,	// (0x000249bd) bg_sctrl_middle_pane_g6

0x9cb9,	// (0x000249c5) bg_sctrl_middle_pane_g7

0x9cc1,	// (0x000249cd) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0002aa02) bg_sctrl_middle_pane_g

0x9cc9,	// (0x000249d5) bg_sctrl_middle_pane_g8_copy1

0x9c89,	// (0x00024995) bg_sctrl_sk_pane_g1

0x9c91,	// (0x0002499d) bg_sctrl_sk_pane_g2

0x9c99,	// (0x000249a5) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a56b) bg_sctrl_sk_pane_g

0x86da,	// (0x000233e6) aid_size_touch_scroll_bar

0x9ca1,	// (0x000249ad) bg_sctrl_sk_pane_g4

0x9ca9,	// (0x000249b5) bg_sctrl_sk_pane_g5

0x9cb1,	// (0x000249bd) bg_sctrl_sk_pane_g6

0x9cb9,	// (0x000249c5) bg_sctrl_sk_pane_g7

0x9cc1,	// (0x000249cd) bg_sctrl_sk_pane_g8

0x9cc9,	// (0x000249d5) bg_sctrl_sk_pane_g9

0x65c2,	// (0x000212ce) popup_fep_china_hwr2_fs_candidate_window

0x65cc,	// (0x000212d8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x65cc,	// (0x000212d8) popup_fep_china_hwr2_fs_control_window

0xc52d,	// (0x00027239) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0002a9f8) sctrl_sk_top_pane_g

0xd9c1,	// (0x000286cd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x000286cd) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x000286df) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x000286df) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x000286f6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x000286f6) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x00028708) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x00028708) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x00028718) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x00028720) aid_fep_china_hwr2_fs_candi_cell

0x7e48,	// (0x00022b54) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x0002872a) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x00028734) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x00028734) cell_fep_china_hwr2_fs_funtion_grid

0xc2af,	// (0x00026fbb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x0002874c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x0002874c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x0002875a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x0002875a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0002aa13) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0002aa13) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x00028770) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x00028770) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00028785) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00028785) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0002aa18) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0002aa18) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x000287a1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x000287a9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x000287b1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0002aa1d) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x000287b9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x000287b9) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x000287d2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x000287da) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2af,	// (0x00026fbb) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2af,	// (0x00026fbb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0002a83d) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x000287e2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x987f,	// (0x0002458b) clock_nsta_pane_cp_24_ParamLimits

0x987f,	// (0x0002458b) clock_nsta_pane_cp_24

0x98fd,	// (0x00024609) indicator_nsta_pane_cp_24_ParamLimits

0x98fd,	// (0x00024609) indicator_nsta_pane_cp_24

0xa98e,	// (0x0002569a) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a5d0) heading_pane_g

0xb3d2,	// (0x000260de) grid_sct_catagory_button_pane

0xb402,	// (0x0002610e) scroll_pane_cp5_ParamLimits

0xbe95,	// (0x00026ba1) button_value_adjust_pane_cp5_ParamLimits

0xbe95,	// (0x00026ba1) button_value_adjust_pane_cp5

0xbf80,	// (0x00026c8c) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x000287f0) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x000287f0) cell_sct_catagory_button_pane

0xc274,	// (0x00026f80) bg_button_pane_cp01_ParamLimits

0xc274,	// (0x00026f80) bg_button_pane_cp01

0xc2af,	// (0x00026fbb) cell_sct_catagory_button_pane_g1

0x6998,	// (0x000216a4) popup_tb_extension_window

0xdaf6,	// (0x00028802) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x00028802) aid_size_cell_ext

0x81c5,	// (0x00022ed1) bg_tb_trans_pane_cp1_ParamLimits

0x81c5,	// (0x00022ed1) bg_tb_trans_pane_cp1

0xdb16,	// (0x00028822) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x00028822) grid_tb_ext_pane

0xdb44,	// (0x00028850) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x00028850) cell_tb_ext_pane

0xdb5b,	// (0x00028867) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00028867) cell_tb_ext_pane_g1

0xdb78,	// (0x00028884) cell_tb_ext_pane_t1

0x81c5,	// (0x00022ed1) list_highlight_pane_cp11_ParamLimits

0x81c5,	// (0x00022ed1) list_highlight_pane_cp11

0x5de5,	// (0x00020af1) popup_uni_indicator_window_ParamLimits

0x5de5,	// (0x00020af1) popup_uni_indicator_window

0x87ab,	// (0x000234b7) bg_popup_sub_pane_cp14

0xdb93,	// (0x0002889f) list_uniindi_pane

0xdb9f,	// (0x000288ab) uniindi_top_pane

0x81c5,	// (0x00022ed1) bg_uniindi_top_pane

0xdbbe,	// (0x000288ca) uniindi_top_pane_g1

0xdbd4,	// (0x000288e0) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0002aa24) uniindi_top_pane_g

0xdbfe,	// (0x0002890a) uniindi_top_pane_t1

0xdc28,	// (0x00028934) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00028934) list_single_uniindi_pane

0xc2af,	// (0x00026fbb) bg_uniindi_top_pane_g1

0xdc3b,	// (0x00028947) list_single_uniindi_pane_g1

0xdc4e,	// (0x0002895a) list_single_uniindi_pane_t1

0x7e48,	// (0x00022b54) control_bg_pane

0xdc73,	// (0x0002897f) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00028988) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00028991) control_bg_pane_g1

0xdc8e,	// (0x0002899a) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0002aa2d) control_bg_pane_g

0xbcdf,	// (0x000269eb) cell_indicator_nsta_pane_g1_ParamLimits

0xbced,	// (0x000269f9) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0002a7a1) cell_indicator_nsta_pane_g_ParamLimits

0x571f,	// (0x0002042b) form2_midp_time_pane_t1_ParamLimits

0x851c,	// (0x00023228) main_idle_act4_pane_ParamLimits

0x851c,	// (0x00023228) main_idle_act4_pane

0x6998,	// (0x000216a4) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x00028840) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x00028840) tb_ext_find_pane

0xdc97,	// (0x000289a3) ai_gene_pane_1_cp1

0x957c,	// (0x00024288) ai_gene_pane_2_cp1

0xdc9f,	// (0x000289ab) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x000289b4) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x000289bd) list_single_idle_plugin_player_pane

0xdcba,	// (0x000289c6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x000289c6) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x000289e8) main_idle_act4_pane_t1

0xdcee,	// (0x000289fa) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0002aa32) main_idle_act4_pane_t

0xdd00,	// (0x00028a0c) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x00028a0c) middle_sk_idle_act4_pane

0xdd16,	// (0x00028a22) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x00028a3c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x00028a3c) shortcut_wheel_idle_act4_pane

0xc2af,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g1

0xc2af,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g2

0xc2af,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g3

0xc2af,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g4

0xc2af,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00028a50) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00028a58) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00028a60) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00028a68) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0002aa37) shortcut_wheel_idle_act4_pane_g

0xc52d,	// (0x00027239) middle_sk_idle_act4_pane_g1_ParamLimits

0xc52d,	// (0x00027239) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00028acc) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00028acc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0002aa5a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0002aa5a) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00028ad8) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00028ad8) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00028af5) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00028af5) grid_ai_shortcut_pane

0xde02,	// (0x00028b0e) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00028b0e) list_highlight_pane_cp16

0xde0f,	// (0x00028b1b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x00028b1b) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x00028b27) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x00028b27) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00028b3f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00028b3f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0002aa5f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0002aa5f) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00028b52) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00028b52) cell_ai_shortcut_pane

0xde6a,	// (0x00028b76) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00028b76) cell_ai_shortcut_pane_g1

0xdc97,	// (0x000289a3) ai_gene_pane_1_cp2

0xde8c,	// (0x00028b98) ai_gene_pane_2_cp2

0xde94,	// (0x00028ba0) list_highlight_pane_cp15

0xde9d,	// (0x00028ba9) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00028ba0) list_highlight_pane_cp17

0xdea5,	// (0x00028bb1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00028bb9) list_single_idle_plugin_player_pane_g1

0xb62b,	// (0x00026337) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0002aa66) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00028bc1) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00028bcf) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00028bdd) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00028beb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0002aa6b) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00028bf9) wait_bar_pane_cp15

0xdef5,	// (0x00028c01) grid_ai_notification_pane

0xb62b,	// (0x00026337) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00028c0a) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00028c0a) cell_ai_notification_pane

0xdf0b,	// (0x00028c17) cell_ai_notification_pane_g1

0xdf13,	// (0x00028c1f) cell_ai_notification_pane_t1

0xdf21,	// (0x00028c2d) tb_ext_find_button_pane

0xdf29,	// (0x00028c35) tb_ext_find_pane_g1

0xdf31,	// (0x00028c3d) tb_ext_find_pane_t1

0x8e2e,	// (0x00023b3a) tb_ext_find_button_pane_g1

0xdf3f,	// (0x00028c4b) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0002aa74) tb_ext_find_button_pane_g

0xdcdc,	// (0x000289e8) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x000289fa) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0002aa32) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00028a22) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00028a30) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00028a30) sat_plugin_idle_act4_pane

0xdf48,	// (0x00028c54) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x00028c54) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x00028c67) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x00028c67) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x00028c7a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x00028c7a) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x00028c8d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x00028c8d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0002aa79) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0002aa79) sat_plugin_idle_act4_pane_t

0x5d20,	// (0x00020a2c) popup_battery_window_ParamLimits

0x5d20,	// (0x00020a2c) popup_battery_window

0x81c5,	// (0x00022ed1) bg_popup_sub_pane_cp25_ParamLimits

0x81c5,	// (0x00022ed1) bg_popup_sub_pane_cp25

0xdf94,	// (0x00028ca0) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x00028ca0) popup_battery_window_g1

0xdfa0,	// (0x00028cac) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00028cac) popup_battery_window_t1

0xdfb2,	// (0x00028cbe) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00028cbe) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0002aa82) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0002aa82) popup_battery_window_t

0x9449,	// (0x00024155) midp_canvas_pane_ParamLimits

0x94c0,	// (0x000241cc) midp_keypad_pane_ParamLimits

0x94c0,	// (0x000241cc) midp_keypad_pane

0x977f,	// (0x0002448b) main_midp_pane_ParamLimits

0xbd59,	// (0x00026a65) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x00028cdb) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x00028cdb) aid_size_cell_midp_keypad

0xdfe9,	// (0x00028cf5) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00028cf5) midp_keyp_game_grid_pane

0xe009,	// (0x00028d15) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00028d15) midp_keyp_rocker_pane

0xe042,	// (0x00028d4e) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x00028d4e) midp_keyp_sk_left_pane

0xe09c,	// (0x00028da8) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x00028da8) midp_keyp_sk_right_pane

0x7e48,	// (0x00022b54) bg_button_pane_cp03

0xe0f6,	// (0x00028e02) midp_keyp_sk_left_pane_g1

0x7e48,	// (0x00022b54) bg_button_pane_cp04

0xe0f6,	// (0x00028e02) midp_keyp_sk_right_pane_g1

0xc2af,	// (0x00026fbb) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x00028e0b) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x00028e0b) keyp_game_cell_pane

0x7e48,	// (0x00022b54) bg_button_pane_cp02

0xe112,	// (0x00028e1e) keyp_game_cell_pane_g1

0x5d64,	// (0x00020a70) popup_fep_vkb2_window_ParamLimits

0x5d64,	// (0x00020a70) popup_fep_vkb2_window

0x739d,	// (0x000220a9) aid_size_cell_vkb2_ParamLimits

0x739d,	// (0x000220a9) aid_size_cell_vkb2

0x73f1,	// (0x000220fd) popup_fep_vkb2_window_g1_ParamLimits

0x73f1,	// (0x000220fd) popup_fep_vkb2_window_g1

0x7439,	// (0x00022145) vkb2_area_bottom_pane_ParamLimits

0x7439,	// (0x00022145) vkb2_area_bottom_pane

0x7485,	// (0x00022191) vkb2_area_keypad_pane_ParamLimits

0x7485,	// (0x00022191) vkb2_area_keypad_pane

0x74c7,	// (0x000221d3) vkb2_area_top_pane_ParamLimits

0x74c7,	// (0x000221d3) vkb2_area_top_pane

0x7541,	// (0x0002224d) vkb2_top_entry_pane_ParamLimits

0x7541,	// (0x0002224d) vkb2_top_entry_pane

0x756b,	// (0x00022277) vkb2_top_grid_left_pane_ParamLimits

0x756b,	// (0x00022277) vkb2_top_grid_left_pane

0x7589,	// (0x00022295) vkb2_top_grid_right_pane_ParamLimits

0x7589,	// (0x00022295) vkb2_top_grid_right_pane

0x75a7,	// (0x000222b3) vkb2_cell_keypad_pane_ParamLimits

0x75a7,	// (0x000222b3) vkb2_cell_keypad_pane

0x7678,	// (0x00022384) vkb2_area_bottom_grid_pane_ParamLimits

0x7678,	// (0x00022384) vkb2_area_bottom_grid_pane

0x769e,	// (0x000223aa) vkb2_area_bottom_pane_g1_ParamLimits

0x769e,	// (0x000223aa) vkb2_area_bottom_pane_g1

0x76c2,	// (0x000223ce) vkb2_area_bottom_pane_g2_ParamLimits

0x76c2,	// (0x000223ce) vkb2_area_bottom_pane_g2

0x76f0,	// (0x000223fc) vkb2_area_bottom_pane_g3_ParamLimits

0x76f0,	// (0x000223fc) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0002aa87) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0002aa87) vkb2_area_bottom_pane_g

0x7751,	// (0x0002245d) vkb2_top_cell_left_pane_ParamLimits

0x7751,	// (0x0002245d) vkb2_top_cell_left_pane

0xe123,	// (0x00028e2f) vkb2_top_entry_pane_g1_ParamLimits

0xe123,	// (0x00028e2f) vkb2_top_entry_pane_g1

0xe131,	// (0x00028e3d) vkb2_top_entry_pane_t1_ParamLimits

0xe131,	// (0x00028e3d) vkb2_top_entry_pane_t1

0xe163,	// (0x00028e6f) vkb2_top_entry_pane_t2_ParamLimits

0xe163,	// (0x00028e6f) vkb2_top_entry_pane_t2

0xe195,	// (0x00028ea1) vkb2_top_entry_pane_t3_ParamLimits

0xe195,	// (0x00028ea1) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0002aa8e) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0002aa8e) vkb2_top_entry_pane_t

0x779e,	// (0x000224aa) vkb2_top_grid_right_pane_g1_ParamLimits

0x779e,	// (0x000224aa) vkb2_top_grid_right_pane_g1

0x77b4,	// (0x000224c0) vkb2_top_grid_right_pane_g2_ParamLimits

0x77b4,	// (0x000224c0) vkb2_top_grid_right_pane_g2

0x77cc,	// (0x000224d8) vkb2_top_grid_right_pane_g3_ParamLimits

0x77cc,	// (0x000224d8) vkb2_top_grid_right_pane_g3

0x77e4,	// (0x000224f0) vkb2_top_grid_right_pane_g4_ParamLimits

0x77e4,	// (0x000224f0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0002aa95) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0002aa95) vkb2_top_grid_right_pane_g

0x77fa,	// (0x00022506) vkb2_top_cell_left_pane_g1

0x7811,	// (0x0002251d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7811,	// (0x0002251d) vkb2_cell_keypad_pane_g1

0xe1b9,	// (0x00028ec5) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b9,	// (0x00028ec5) vkb2_cell_keypad_pane_t1

0x781f,	// (0x0002252b) vkb2_cell_bottom_grid_pane_ParamLimits

0x781f,	// (0x0002252b) vkb2_cell_bottom_grid_pane

0x7858,	// (0x00022564) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00028a70) aid_call2_pane_cp02

0xdd6c,	// (0x00028a78) aid_call_pane_cp02

0xdd74,	// (0x00028a80) clock_digital_number_pane_cp10

0xdd7c,	// (0x00028a88) clock_digital_number_pane_cp11

0xdd84,	// (0x00028a90) clock_digital_number_pane_cp12

0xdd8c,	// (0x00028a98) clock_digital_number_pane_cp13

0xdd94,	// (0x00028aa0) clock_digital_separator_pane_cp10

0x8e2e,	// (0x00023b3a) popup_clock_digital_analogue_window_cp2_g1

0x8e2e,	// (0x00023b3a) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00028aa8) popup_clock_digital_analogue_window_cp2_g3

0x8e2e,	// (0x00023b3a) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00028aa8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0002aa4a) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00028ab0) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00028abe) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0002aa55) popup_clock_digital_analogue_window_cp2_t

0xc2af,	// (0x00026fbb) clock_digital_number_pane_cp10_g1

0xc2af,	// (0x00026fbb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a83d) clock_digital_number_pane_cp10_g

0xc2af,	// (0x00026fbb) clock_digital_separator_pane_cp10_g1

0xc2af,	// (0x00026fbb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0002a83d) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x000288ec) uniindi_top_pane_g3

0xdbf1,	// (0x000288fd) uniindi_top_pane_g4

0x7632,	// (0x0002233e) vkb2_row_keypad_pane_ParamLimits

0x7632,	// (0x0002233e) vkb2_row_keypad_pane

0x7874,	// (0x00022580) vkb2_cell_t_keypad_pane_ParamLimits

0x7874,	// (0x00022580) vkb2_cell_t_keypad_pane

0x7884,	// (0x00022590) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7884,	// (0x00022590) vkb2_cell_t_keypad_pane_cp08

0x7897,	// (0x000225a3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7897,	// (0x000225a3) vkb2_cell_t_keypad_pane_cp09

0x78ab,	// (0x000225b7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78ab,	// (0x000225b7) vkb2_cell_t_keypad_pane_cp01

0x78bc,	// (0x000225c8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78bc,	// (0x000225c8) vkb2_cell_t_keypad_pane_cp02

0x78cd,	// (0x000225d9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78cd,	// (0x000225d9) vkb2_cell_t_keypad_pane_cp03

0x78de,	// (0x000225ea) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78de,	// (0x000225ea) vkb2_cell_t_keypad_pane_cp04

0x78ef,	// (0x000225fb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x78ef,	// (0x000225fb) vkb2_cell_t_keypad_pane_cp05

0x7900,	// (0x0002260c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7900,	// (0x0002260c) vkb2_cell_t_keypad_pane_cp06

0x7911,	// (0x0002261d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7911,	// (0x0002261d) vkb2_cell_t_keypad_pane_cp07

0x7922,	// (0x0002262e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7922,	// (0x0002262e) vkb2_cell_t_keypad_pane_cp10

0xc52d,	// (0x00027239) vkb2_cell_t_keypad_pane_g1

0xe1d0,	// (0x00028edc) vkb2_cell_t_keypad_pane_t1

0x7e48,	// (0x00022b54) popup_grid_graphic2_window

0xe1e2,	// (0x00028eee) aid_size_cell_graphic2_ParamLimits

0xe1e2,	// (0x00028eee) aid_size_cell_graphic2

0xe21a,	// (0x00028f26) bg_popup_window_pane_cp21_ParamLimits

0xe21a,	// (0x00028f26) bg_popup_window_pane_cp21

0xe228,	// (0x00028f34) graphic2_pages_pane_ParamLimits

0xe228,	// (0x00028f34) graphic2_pages_pane

0xe26e,	// (0x00028f7a) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x00028f7a) grid_graphic2_control_pane

0xe2ac,	// (0x00028fb8) grid_graphic2_pane_ParamLimits

0xe2ac,	// (0x00028fb8) grid_graphic2_pane

0xe320,	// (0x0002902c) cell_graphic2_pane

0x7e48,	// (0x00022b54) main_comp_mode_pane

0xd460,	// (0x0002816c) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x00028536) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x00028542) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x00028542) bg_touch_area_indi_pane

0xd84c,	// (0x00028558) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x00028558) bg_touch_area_indi_pane_cp01

0xd862,	// (0x0002856e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x0002856e) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00028586) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00028586) bg_touch_area_indi_pane_cp03

0xd894,	// (0x000285a0) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x000285bc) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x000285d8) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0002a9df) popup_slider_window_g_ParamLimits

0xd928,	// (0x00028634) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x000286a8) small_volume_slider_vertical_pane_ParamLimits

0xe320,	// (0x0002902c) cell_graphic2_pane_ParamLimits

0xe36e,	// (0x0002907a) bg_button_pane_cp10_ParamLimits

0xe36e,	// (0x0002907a) bg_button_pane_cp10

0xe381,	// (0x0002908d) bg_button_pane_cp11_ParamLimits

0xe381,	// (0x0002908d) bg_button_pane_cp11

0xe394,	// (0x000290a0) graphic2_pages_pane_g1_ParamLimits

0xe394,	// (0x000290a0) graphic2_pages_pane_g1

0xe3af,	// (0x000290bb) graphic2_pages_pane_g2_ParamLimits

0xe3af,	// (0x000290bb) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0002aaa3) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0002aaa3) graphic2_pages_pane_g

0xe3c7,	// (0x000290d3) graphic2_pages_pane_t1_ParamLimits

0xe3c7,	// (0x000290d3) graphic2_pages_pane_t1

0xe3df,	// (0x000290eb) cell_graphic2_control_pane_ParamLimits

0xe3df,	// (0x000290eb) cell_graphic2_control_pane

0xe400,	// (0x0002910c) cell_graphic2_pane_g1_ParamLimits

0xe400,	// (0x0002910c) cell_graphic2_pane_g1

0xe40d,	// (0x00029119) cell_graphic2_pane_g2_ParamLimits

0xe40d,	// (0x00029119) cell_graphic2_pane_g2

0xe41a,	// (0x00029126) cell_graphic2_pane_g3_ParamLimits

0xe41a,	// (0x00029126) cell_graphic2_pane_g3

0xe427,	// (0x00029133) cell_graphic2_pane_g4_ParamLimits

0xe427,	// (0x00029133) cell_graphic2_pane_g4

0xe434,	// (0x00029140) cell_graphic2_pane_g5_ParamLimits

0xe434,	// (0x00029140) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0002aaa8) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0002aaa8) cell_graphic2_pane_g

0xe44f,	// (0x0002915b) cell_graphic2_pane_t1_ParamLimits

0xe44f,	// (0x0002915b) cell_graphic2_pane_t1

0x9cfd,	// (0x00024a09) grid_highlight_pane_cp11_ParamLimits

0x9cfd,	// (0x00024a09) grid_highlight_pane_cp11

0x81c5,	// (0x00022ed1) bg_button_pane_cp05

0xe478,	// (0x00029184) cell_graphic2_control_pane_g1

0xc2af,	// (0x00026fbb) bg_touch_area_indi_pane_g1

0xe4a0,	// (0x000291ac) aid_cmod_rocker_key_size

0xe4aa,	// (0x000291b6) aid_cmode_itu_key_size

0xe4b4,	// (0x000291c0) main_cmode_video_pane

0xe4be,	// (0x000291ca) main_comp_mode_itu_pane

0xe4ca,	// (0x000291d6) main_comp_mode_rocker_pane

0xe4d6,	// (0x000291e2) cell_cmode_rocker_pane_ParamLimits

0xe4d6,	// (0x000291e2) cell_cmode_rocker_pane

0xe4e8,	// (0x000291f4) cell_cmode_itu_pane_ParamLimits

0xe4e8,	// (0x000291f4) cell_cmode_itu_pane

0x87ab,	// (0x000234b7) bg_button_pane_cp06_ParamLimits

0x87ab,	// (0x000234b7) bg_button_pane_cp06

0xc52d,	// (0x00027239) cell_cmode_rocker_pane_g1_ParamLimits

0xc52d,	// (0x00027239) cell_cmode_rocker_pane_g1

0xda40,	// (0x0002874c) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x0002874c) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0002aab8) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0002aab8) cell_cmode_rocker_pane_g

0x7e48,	// (0x00022b54) bg_button_pane_cp07

0xe4fd,	// (0x00029209) cell_cmode_itu_pane_g1

0xe506,	// (0x00029212) cell_cmode_itu_pane_t1

0xe514,	// (0x00029220) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0002aabd) cell_cmode_itu_pane_t

0xdc63,	// (0x0002896f) aid_touch_ctrl_left

0xdc6b,	// (0x00028977) aid_touch_ctrl_right

0x7e48,	// (0x00022b54) compa_mode_pane

0xe522,	// (0x0002922e) aid_cmod_rocker_key_size_cp

0xe52c,	// (0x00029238) aid_cmode_itu_key_size_cp

0xe536,	// (0x00029242) compa_mode_pane_g1

0xe53e,	// (0x0002924a) compa_mode_pane_g2

0xe546,	// (0x00029252) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0002aac2) compa_mode_pane_g

0xe54e,	// (0x0002925a) main_comp_mode_itu_pane_cp

0xe556,	// (0x00029262) main_comp_mode_rocker_pane_cp

0xe55e,	// (0x0002926a) cell_cmode_itu_pane_cp_ParamLimits

0xe55e,	// (0x0002926a) cell_cmode_itu_pane_cp

0xe573,	// (0x0002927f) cell_cmode_rocker_pane_cp_ParamLimits

0xe573,	// (0x0002927f) cell_cmode_rocker_pane_cp

0x87ab,	// (0x000234b7) bg_button_pane_cp06_cp_ParamLimits

0x87ab,	// (0x000234b7) bg_button_pane_cp06_cp

0xc52d,	// (0x00027239) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc52d,	// (0x00027239) cell_cmode_rocker_pane_g1_cp

0xc2af,	// (0x00026fbb) cell_cmode_rocker_pane_g2_cp

0x7e48,	// (0x00022b54) bg_button_pane_cp07_cp

0xb1ce,	// (0x00025eda) cell_cmode_itu_pane_g1_cp

0xe585,	// (0x00029291) cell_cmode_itu_pane_t1_cp

0xe585,	// (0x00029291) cell_cmode_itu_pane_t2_cp

0xb1bb,	// (0x00025ec7) settings_code_pane_cp2

0x7f3c,	// (0x00022c48) bg_popup_window_pane_cp3_ParamLimits

0x839f,	// (0x000230ab) heading_pane_cp3_ParamLimits

0x83ab,	// (0x000230b7) listscroll_popup_graphic_pane_ParamLimits

0x6f4b,	// (0x00021c57) fep_hwr_aid_pane_ParamLimits

0x7314,	// (0x00022020) aid_touch_sctrl_top_ParamLimits

0x7321,	// (0x0002202d) sctrl_sk_top_pane_g1_ParamLimits

0xc52d,	// (0x00027239) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0002a9f8) sctrl_sk_top_pane_g_ParamLimits

0x732e,	// (0x0002203a) sctrl_sk_top_pane_t1_ParamLimits

0x7314,	// (0x00022020) aid_touch_sctrl_bottom_ParamLimits

0x732e,	// (0x0002203a) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x000288b8) aid_area_touch_clock

0x7509,	// (0x00022215) aid_vkb2_area_top_pane_cell_ParamLimits

0x7509,	// (0x00022215) aid_vkb2_area_top_pane_cell

0x7654,	// (0x00022360) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7654,	// (0x00022360) aid_vkb2_area_bottom_pane_cell

0xe11b,	// (0x00028e27) popup_char_count_window

0xe593,	// (0x0002929f) popup_char_count_window_g1

0xe59c,	// (0x000292a8) popup_char_count_window_g2

0xe5a5,	// (0x000292b1) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0002aac9) popup_char_count_window_g

0xe5ae,	// (0x000292ba) popup_char_count_window_t1

0x73cf,	// (0x000220db) popup_fep_char_preview_window_ParamLimits

0x73cf,	// (0x000220db) popup_fep_char_preview_window

0x7527,	// (0x00022233) vkb2_top_candi_pane_ParamLimits

0x7527,	// (0x00022233) vkb2_top_candi_pane

0xe5bc,	// (0x000292c8) cell_vkb2_top_candi_pane_ParamLimits

0xe5bc,	// (0x000292c8) cell_vkb2_top_candi_pane

0xa30e,	// (0x0002501a) bg_popup_fep_char_preview_window_ParamLimits

0xa30e,	// (0x0002501a) bg_popup_fep_char_preview_window

0x7937,	// (0x00022643) popup_fep_char_preview_window_t1_ParamLimits

0x7937,	// (0x00022643) popup_fep_char_preview_window_t1

0xe609,	// (0x00029315) bg_popup_fep_char_preview_window_g1

0xe611,	// (0x0002931d) bg_popup_fep_char_preview_window_g2

0xe619,	// (0x00029325) bg_popup_fep_char_preview_window_g3

0xe621,	// (0x0002932d) bg_popup_fep_char_preview_window_g4

0xe629,	// (0x00029335) bg_popup_fep_char_preview_window_g5

0x7971,	// (0x0002267d) bg_popup_fep_char_preview_window_g6

0xe631,	// (0x0002933d) bg_popup_fep_char_preview_window_g7

0xe639,	// (0x00029345) bg_popup_fep_char_preview_window_g8

0xe641,	// (0x0002934d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0002aad0) bg_popup_fep_char_preview_window_g

0xc52d,	// (0x00027239) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc52d,	// (0x00027239) cell_vkb2_top_candi_pane_g1

0xc844,	// (0x00027550) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc844,	// (0x00027550) cell_vkb2_top_candi_pane_g2

0xc865,	// (0x00027571) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc865,	// (0x00027571) cell_vkb2_top_candi_pane_g3

0x7979,	// (0x00022685) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7979,	// (0x00022685) cell_vkb2_top_candi_pane_g4

0xe649,	// (0x00029355) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe649,	// (0x00029355) cell_vkb2_top_candi_pane_g5

0xda40,	// (0x0002874c) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda40,	// (0x0002874c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0002aae3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0002aae3) cell_vkb2_top_candi_pane_g

0x799a,	// (0x000226a6) cell_vkb2_top_candi_pane_t1

0x6dab,	// (0x00021ab7) aid_size_touch_slider_mark_ParamLimits

0x6dab,	// (0x00021ab7) aid_size_touch_slider_mark

0xe25e,	// (0x00028f6a) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x00028f6a) grid_graphic2_catg_pane

0xe2fc,	// (0x00029008) popup_grid_graphic2_window_t1_ParamLimits

0xe2fc,	// (0x00029008) popup_grid_graphic2_window_t1

0xe30e,	// (0x0002901a) popup_grid_graphic2_window_t2_ParamLimits

0xe30e,	// (0x0002901a) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0002aa9e) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0002aa9e) popup_grid_graphic2_window_t

0x81c5,	// (0x00022ed1) bg_button_pane_cp05_ParamLimits

0xe478,	// (0x00029184) cell_graphic2_control_pane_g1_ParamLimits

0xe66a,	// (0x00029376) cell_graphic2_catg_pane_ParamLimits

0xe66a,	// (0x00029376) cell_graphic2_catg_pane

0x7e48,	// (0x00022b54) bg_button_pane_cp12

0xe67c,	// (0x00029388) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00028884) cell_tb_ext_pane_t1_ParamLimits

0x7771,	// (0x0002247d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7771,	// (0x0002247d) vkb2_top_cell_right_narrow_pane

0x7789,	// (0x00022495) vkb2_top_cell_right_wide_pane_ParamLimits

0x7789,	// (0x00022495) vkb2_top_cell_right_wide_pane

0x6f3d,	// (0x00021c49) bg_vkb2_func_pane_ParamLimits

0x6f3d,	// (0x00021c49) bg_vkb2_func_pane

0x77fa,	// (0x00022506) vkb2_top_cell_left_pane_g1_ParamLimits

0x6f3d,	// (0x00021c49) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6f3d,	// (0x00021c49) bg_vkb2_fuc_pane_cp03

0x7858,	// (0x00022564) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c91,	// (0x0002499d) bg_vkb2_func_pane_g1

0x9c99,	// (0x000249a5) bg_vkb2_func_pane_g2

0x9ca9,	// (0x000249b5) bg_vkb2_func_pane_g3

0x9ca1,	// (0x000249ad) bg_vkb2_func_pane_g4

0x9cb1,	// (0x000249bd) bg_vkb2_func_pane_g5

0x9cb9,	// (0x000249c5) bg_vkb2_func_pane_g6

0x9cc1,	// (0x000249cd) bg_vkb2_func_pane_g7

0x9cc9,	// (0x000249d5) bg_vkb2_func_pane_g8

0x9c89,	// (0x00024995) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0002aaf0) bg_vkb2_func_pane_g

0x6f3d,	// (0x00021c49) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6f3d,	// (0x00021c49) bg_vkb2_fuc_pane_cp01

0x77fa,	// (0x00022506) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x77fa,	// (0x00022506) vkb2_top_cell_right_wide_pane_g1

0x6f3d,	// (0x00021c49) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6f3d,	// (0x00021c49) bg_vkb2_fuc_pane_cp02

0x7858,	// (0x00022564) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7858,	// (0x00022564) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x000284ba) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x000284ba) aid_touch_area_decrease

0xd7cc,	// (0x000284d8) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x000284d8) aid_touch_area_increase

0xd7d8,	// (0x000284e4) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x000284e4) aid_touch_area_mute

0xd7fc,	// (0x00028508) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x00028508) aid_touch_area_slider

0xd8e8,	// (0x000285f4) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x000285f4) popup_slider_window_g4

0xd8f4,	// (0x00028600) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x00028600) popup_slider_window_g5

0xd916,	// (0x00028622) popup_slider_window_g6_ParamLimits

0xd916,	// (0x00028622) popup_slider_window_g6

0xd956,	// (0x00028662) popup_slider_window_t2_ParamLimits

0xd956,	// (0x00028662) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0002a9ec) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0002a9ec) popup_slider_window_t

0xd96e,	// (0x0002867a) slider_pane_ParamLimits

0xd96e,	// (0x0002867a) slider_pane

0xe685,	// (0x00029391) slider_pane_g1_ParamLimits

0xe685,	// (0x00029391) slider_pane_g1

0xe699,	// (0x000293a5) slider_pane_g2_ParamLimits

0xe699,	// (0x000293a5) slider_pane_g2

0xe6af,	// (0x000293bb) slider_pane_g3_ParamLimits

0xe6af,	// (0x000293bb) slider_pane_g3

0x0003,

0xfdf7,	// (0x0002ab03) slider_pane_g_ParamLimits

0xfdf7,	// (0x0002ab03) slider_pane_g

0x69f4,	// (0x00021700) popup_tb_float_extension_window_ParamLimits

0x69f4,	// (0x00021700) popup_tb_float_extension_window

0xe6db,	// (0x000293e7) aid_size_cell_tb_float_ext

0x7e48,	// (0x00022b54) bg_popup_sub_window_cp28

0xe6e7,	// (0x000293f3) grid_tb_float_ext_pane

0xe6f1,	// (0x000293fd) cell_tb_float_ext_pane_ParamLimits

0xe6f1,	// (0x000293fd) cell_tb_float_ext_pane

0xe70b,	// (0x00029417) cell_tb_float_ext_pane_g1

0xe714,	// (0x00029420) grid_highlight_pane_cp12

0x707e,	// (0x00021d8a) cell_last_hwr_side_pane_ParamLimits

0x707e,	// (0x00021d8a) cell_last_hwr_side_pane

0xc2af,	// (0x00026fbb) cell_last_hwr_side_pane_g1

0xe71d,	// (0x00029429) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0002ab0c) cell_last_hwr_side_pane_g

0x7720,	// (0x0002242c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7720,	// (0x0002242c) vkb2_area_bottom_space_btn_pane

0xc52d,	// (0x00027239) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d0,	// (0x00028edc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x799a,	// (0x000226a6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79b9,	// (0x000226c5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79b9,	// (0x000226c5) vkb2_area_bottom_space_btn_pane_g1

0x79f3,	// (0x000226ff) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79f3,	// (0x000226ff) vkb2_area_bottom_space_btn_pane_g2

0x7a29,	// (0x00022735) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a29,	// (0x00022735) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0002ab11) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0002ab11) vkb2_area_bottom_space_btn_pane_g

0x6ff2,	// (0x00021cfe) cel_fep_hwr_func_pane_ParamLimits

0x6ff2,	// (0x00021cfe) cel_fep_hwr_func_pane

0x702e,	// (0x00021d3a) cell_hwr_side_button_pane_ParamLimits

0x702e,	// (0x00021d3a) cell_hwr_side_button_pane

0xdbac,	// (0x000288b8) aid_area_touch_clock_ParamLimits

0x81c5,	// (0x00022ed1) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x000288ca) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x000288e0) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x000288ec) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x000288fd) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0002aa24) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x0002890a) uniindi_top_pane_t1_ParamLimits

0x81c5,	// (0x00022ed1) bg_vkb2_func_pane_cp01_ParamLimits

0x81c5,	// (0x00022ed1) bg_vkb2_func_pane_cp01

0xe726,	// (0x00029432) cel_fep_hwr_func_pane_g1_ParamLimits

0xe726,	// (0x00029432) cel_fep_hwr_func_pane_g1

0x81c5,	// (0x00022ed1) bg_vkb2_func_pane_cp02_ParamLimits

0x81c5,	// (0x00022ed1) bg_vkb2_func_pane_cp02

0xe726,	// (0x00029432) cell_hwr_side_button_pane_g1_ParamLimits

0xe726,	// (0x00029432) cell_hwr_side_button_pane_g1

0x9b0a,	// (0x00024816) status_pane_g4_ParamLimits

0x9b0a,	// (0x00024816) status_pane_g4

0x9b24,	// (0x00024830) status_pane_t1

0xbfe9,	// (0x00026cf5) form2_midp_gauge_slider_cont_pane

0xbff1,	// (0x00026cfd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc003,	// (0x00026d0f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc015,	// (0x00026d21) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0002a7f0) form2_midp_gauge_slider_pane_t_ParamLimits

0xc027,	// (0x00026d33) form2_midp_slider_pane_ParamLimits

0x738f,	// (0x0002209b) aid_size_cell_func_vkb2_ParamLimits

0x738f,	// (0x0002209b) aid_size_cell_func_vkb2

0xe6c7,	// (0x000293d3) slider_pane_g4_ParamLimits

0xe6c7,	// (0x000293d3) slider_pane_g4

0x7a73,	// (0x0002277f) form2_midp_gauge_slider_pane_t2_cp01

0x7a81,	// (0x0002278d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a81,	// (0x0002278d) form2_midp_gauge_slider_pane_t3_cp01

0x7a9e,	// (0x000227aa) form2_midp_slider_pane_cp01

0x7e48,	// (0x00022b54) navi_smil_pane

0xe75f,	// (0x0002946b) navi_smil_pane_g1

0xe767,	// (0x00029473) navi_smil_pane_t1

0xe734,	// (0x00029440) form2_midp_slider_pane_g1

0xe73d,	// (0x00029449) form2_midp_slider_pane_g2

0xe745,	// (0x00029451) form2_midp_slider_pane_g3

0xe734,	// (0x00029440) form2_midp_slider_pane_g4

0xe74d,	// (0x00029459) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0002ab1a) form2_midp_slider_pane_g

0x7a63,	// (0x0002276f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a63,	// (0x0002276f) vkb2_area_bottom_space_btn_pane_g4

0x9939,	// (0x00024645) lc0_navi_pane_ParamLimits

0x9939,	// (0x00024645) lc0_navi_pane

0x99af,	// (0x000246bb) lc0_stat_indi_pane_ParamLimits

0x99af,	// (0x000246bb) lc0_stat_indi_pane

0x99c6,	// (0x000246d2) ls0_title_pane_ParamLimits

0x99c6,	// (0x000246d2) ls0_title_pane

0x87ab,	// (0x000234b7) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x0002889f) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x000288ab) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x00028947) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x0002895a) list_single_uniindi_pane_t1_ParamLimits

0x7aa7,	// (0x000227b3) lc0_stat_clock_pane_ParamLimits

0x7aa7,	// (0x000227b3) lc0_stat_clock_pane

0xe775,	// (0x00029481) lc0_stat_indi_pane_g1_ParamLimits

0xe775,	// (0x00029481) lc0_stat_indi_pane_g1

0xe782,	// (0x0002948e) lc0_stat_indi_pane_g2_ParamLimits

0xe782,	// (0x0002948e) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0002ab25) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0002ab25) lc0_stat_indi_pane_g

0x7ab4,	// (0x000227c0) lc0_uni_indicator_pane_ParamLimits

0x7ab4,	// (0x000227c0) lc0_uni_indicator_pane

0xe78f,	// (0x0002949b) ls0_title_pane_g1_ParamLimits

0xe78f,	// (0x0002949b) ls0_title_pane_g1

0xe7a3,	// (0x000294af) ls0_title_pane_t1_ParamLimits

0xe7a3,	// (0x000294af) ls0_title_pane_t1

0x7ac1,	// (0x000227cd) lc0_uni_indicator_pane_g1_ParamLimits

0x7ac1,	// (0x000227cd) lc0_uni_indicator_pane_g1

0xe7d9,	// (0x000294e5) lc0_stat_clock_pane_t1

0x7e48,	// (0x00022b54) main_ai5_pane

0xe7e7,	// (0x000294f3) ai5_sk_pane_ParamLimits

0xe7e7,	// (0x000294f3) ai5_sk_pane

0xe7f4,	// (0x00029500) cell_ai5_widget_pane_ParamLimits

0xe7f4,	// (0x00029500) cell_ai5_widget_pane

0xe8aa,	// (0x000295b6) aid_size_cell_widget_grid

0xe8c0,	// (0x000295cc) bg_ai5_widget_pane_ParamLimits

0xe8c0,	// (0x000295cc) bg_ai5_widget_pane

0xe934,	// (0x00029640) cell_ai5_widget_pane_g2

0xe944,	// (0x00029650) cell_ai5_widget_pane_g3

0xe95b,	// (0x00029667) cell_ai5_widget_pane_g4

0xe967,	// (0x00029673) cell_ai5_widget_pane_g5

0xe973,	// (0x0002967f) cell_ai5_widget_pane_g6

0xe97f,	// (0x0002968b) cell_ai5_widget_pane_g7

0xe9c7,	// (0x000296d3) cell_ai5_widget_pane_t1_ParamLimits

0xe9c7,	// (0x000296d3) cell_ai5_widget_pane_t1

0xe9e4,	// (0x000296f0) cell_ai5_widget_pane_t2_ParamLimits

0xe9e4,	// (0x000296f0) cell_ai5_widget_pane_t2

0xe9fc,	// (0x00029708) cell_ai5_widget_pane_t3_ParamLimits

0xe9fc,	// (0x00029708) cell_ai5_widget_pane_t3

0xea14,	// (0x00029720) cell_ai5_widget_pane_t4_ParamLimits

0xea14,	// (0x00029720) cell_ai5_widget_pane_t4

0xea31,	// (0x0002973d) cell_ai5_widget_pane_t5_ParamLimits

0xea31,	// (0x0002973d) cell_ai5_widget_pane_t5

0xea50,	// (0x0002975c) cell_ai5_widget_pane_t6_ParamLimits

0xea50,	// (0x0002975c) cell_ai5_widget_pane_t6

0xea62,	// (0x0002976e) cell_ai5_widget_pane_t7_ParamLimits

0xea62,	// (0x0002976e) cell_ai5_widget_pane_t7

0xea7b,	// (0x00029787) cell_ai5_widget_pane_t8_ParamLimits

0xea7b,	// (0x00029787) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0002ab3f) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0002ab3f) cell_ai5_widget_pane_t

0xeacf,	// (0x000297db) grid_ai5_widget_pane

0x87ab,	// (0x000234b7) highlight_cell_ai5_widget_pane_ParamLimits

0x87ab,	// (0x000234b7) highlight_cell_ai5_widget_pane

0xeae6,	// (0x000297f2) ai5_sk_left_pane

0xeaf0,	// (0x000297fc) ai5_sk_middle_pane

0xeafa,	// (0x00029806) ai5_sk_right_pane

0xeb04,	// (0x00029810) bg_ai5_widget_pane_g1_ParamLimits

0xeb04,	// (0x00029810) bg_ai5_widget_pane_g1

0xeb10,	// (0x0002981c) bg_ai5_widget_pane_g2_ParamLimits

0xeb10,	// (0x0002981c) bg_ai5_widget_pane_g2

0xeb1c,	// (0x00029828) bg_ai5_widget_pane_g3_ParamLimits

0xeb1c,	// (0x00029828) bg_ai5_widget_pane_g3

0xeb28,	// (0x00029834) bg_ai5_widget_pane_g4_ParamLimits

0xeb28,	// (0x00029834) bg_ai5_widget_pane_g4

0xeb34,	// (0x00029840) bg_ai5_widget_pane_g5_ParamLimits

0xeb34,	// (0x00029840) bg_ai5_widget_pane_g5

0xeb40,	// (0x0002984c) bg_ai5_widget_pane_g6_ParamLimits

0xeb40,	// (0x0002984c) bg_ai5_widget_pane_g6

0xeb4c,	// (0x00029858) bg_ai5_widget_pane_g7_ParamLimits

0xeb4c,	// (0x00029858) bg_ai5_widget_pane_g7

0xeb58,	// (0x00029864) bg_ai5_widget_pane_g8_ParamLimits

0xeb58,	// (0x00029864) bg_ai5_widget_pane_g8

0xeb64,	// (0x00029870) bg_ai5_widget_pane_g9_ParamLimits

0xeb64,	// (0x00029870) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0002ab54) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0002ab54) bg_ai5_widget_pane_g

0xeb96,	// (0x000298a2) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb96,	// (0x000298a2) cell_shortcut_ai5_widget_pane

0x9441,	// (0x0002414d) bg_cell_shortcut_ai5_widget_pane

0xeba7,	// (0x000298b3) cell_grid_ai5_widget_pane_g1

0x9441,	// (0x0002414d) highlight_cell_shortcut_ai5_widget_pane

0x9c99,	// (0x000249a5) ai5_sk_left_pane_g1

0xebb0,	// (0x000298bc) ai5_sk_left_pane_g2

0xebb8,	// (0x000298c4) ai5_sk_left_pane_g3

0xebc0,	// (0x000298cc) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0002ab67) ai5_sk_left_pane_g

0xebc8,	// (0x000298d4) ai5_sk_left_pane_t1

0x9c91,	// (0x0002499d) ai5_sk_right_pane_g1

0xebd6,	// (0x000298e2) ai5_sk_right_pane_g2

0xebde,	// (0x000298ea) ai5_sk_right_pane_g3

0xebe6,	// (0x000298f2) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0002ab70) ai5_sk_right_pane_g

0xebee,	// (0x000298fa) ai5_sk_right_pane_t1

0x9c91,	// (0x0002499d) ai5_sk_middle_pane_g1

0x9c99,	// (0x000249a5) ai5_sk_middle_pane_g2

0x9cb1,	// (0x000249bd) ai5_sk_middle_pane_g3

0xebde,	// (0x000298ea) ai5_sk_middle_pane_g4

0xebb8,	// (0x000298c4) ai5_sk_middle_pane_g5

0xebfc,	// (0x00029908) ai5_sk_middle_pane_g6

0xec04,	// (0x00029910) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0002ab79) ai5_sk_middle_pane_g

0x97c5,	// (0x000244d1) aid_touch_area_size_lc0_ParamLimits

0x97c5,	// (0x000244d1) aid_touch_area_size_lc0

0x717d,	// (0x00021e89) cell_hwr_candidate_pane_t1_ParamLimits

0x97e1,	// (0x000244ed) aid_touch_navi_pane

0x9ab4,	// (0x000247c0) status_dt_navi_pane_ParamLimits

0x9ab4,	// (0x000247c0) status_dt_navi_pane

0x9ac1,	// (0x000247cd) status_dt_sta_pane_ParamLimits

0x9ac1,	// (0x000247cd) status_dt_sta_pane

0xec0c,	// (0x00029918) dt_sta_controll_pane

0xec19,	// (0x00029925) dt_sta_indi_pane

0xec2a,	// (0x00029936) dt_sta_title_pane

0x81c5,	// (0x00022ed1) bg_dt_sta_indi_pane_ParamLimits

0x81c5,	// (0x00022ed1) bg_dt_sta_indi_pane

0xec3d,	// (0x00029949) dt_sta_battery_pane

0xec45,	// (0x00029951) dt_sta_indi_pane_g1

0xec4e,	// (0x0002995a) dt_sta_indi_pane_g2

0xec57,	// (0x00029963) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0002ab88) dt_sta_indi_pane_g

0xec60,	// (0x0002996c) dt_sta_signal_pane

0x87ab,	// (0x000234b7) bg_dt_sta_title_pane_ParamLimits

0x87ab,	// (0x000234b7) bg_dt_sta_title_pane

0xec69,	// (0x00029975) dt_sta_title_pane_g1

0xec71,	// (0x0002997d) dt_sta_title_pane_t1_ParamLimits

0xec71,	// (0x0002997d) dt_sta_title_pane_t1

0x7e48,	// (0x00022b54) bg_dt_sta_control_pane

0xec86,	// (0x00029992) dt_sta_controll_pane_g1

0xec8f,	// (0x0002999b) bg_dt_sta_title_pane_g1

0xec98,	// (0x000299a4) bg_dt_sta_title_pane_g2

0xeca1,	// (0x000299ad) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x0002ab8f) bg_dt_sta_title_pane_g

0xc2af,	// (0x00026fbb) bg_dt_sta_indi_pane_g1

0xecaa,	// (0x000299b6) dt_sta_signal_pane_g1

0xecb2,	// (0x000299be) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0002ab96) dt_sta_signal_pane_g

0xecba,	// (0x000299c6) dt_sta_battery_pane_g1

0xecc3,	// (0x000299cf) dt_sta_battery_pane_t1

0xc2af,	// (0x00026fbb) bg_dt_sta_control_pane_g1

0x8f40,	// (0x00023c4c) fep_china_uni_eep_pane

0x8f48,	// (0x00023c54) fep_china_uni_entry_pane_ParamLimits

0x8f58,	// (0x00023c64) popup_fep_china_uni_window_g1_ParamLimits

0x8f68,	// (0x00023c74) popup_fep_china_uni_window_g2_ParamLimits

0x8f68,	// (0x00023c74) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002a429) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002a429) popup_fep_china_uni_window_g

0xecd2,	// (0x000299de) fep_china_uni_eep_pane_g1

0xecda,	// (0x000299e6) fep_china_uni_eep_pane_t1

0xe756,	// (0x00029462) aid_touch_area_size_smil_player

0x9931,	// (0x0002463d) lc0_clock_pane

0x9b18,	// (0x00024824) status_pane_g5_ParamLimits

0x9b18,	// (0x00024824) status_pane_g5

0x66b9,	// (0x000213c5) popup_keymap_window

0x9ad6,	// (0x000247e2) status_icon_pane

0xe944,	// (0x00029650) cell_ai5_widget_pane_g3_ParamLimits

0xe95b,	// (0x00029667) cell_ai5_widget_pane_g4_ParamLimits

0xe967,	// (0x00029673) cell_ai5_widget_pane_g5_ParamLimits

0xe98b,	// (0x00029697) cell_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x00029697) cell_ai5_widget_pane_g8

0xe99f,	// (0x000296ab) cell_ai5_widget_pane_g9_ParamLimits

0xe99f,	// (0x000296ab) cell_ai5_widget_pane_g9

0xe9b3,	// (0x000296bf) cell_ai5_widget_pane_g10_ParamLimits

0xe9b3,	// (0x000296bf) cell_ai5_widget_pane_g10

0xece9,	// (0x000299f5) status_icon_pane_g1

0x7e48,	// (0x00022b54) bg_popup_sub_pane_cp13

0xecf1,	// (0x000299fd) popup_keymap_window_t1

0x970a,	// (0x00024416) control_pane_g6_ParamLimits

0x970a,	// (0x00024416) control_pane_g6

0x9717,	// (0x00024423) control_pane_g7_ParamLimits

0x9717,	// (0x00024423) control_pane_g7

0x9724,	// (0x00024430) control_pane_g8_ParamLimits

0x9724,	// (0x00024430) control_pane_g8

0xec0c,	// (0x00029918) dt_sta_controll_pane_ParamLimits

0xec19,	// (0x00029925) dt_sta_indi_pane_ParamLimits

0xec2a,	// (0x00029936) dt_sta_title_pane_ParamLimits

0x86e3,	// (0x000233ef) aid_size_touch_scroll_bar_cale

0x5d34,	// (0x00020a40) popup_discreet_window_ParamLimits

0x5d34,	// (0x00020a40) popup_discreet_window

0x5dbc,	// (0x00020ac8) popup_sk_window

0xa30e,	// (0x0002501a) bg_popup_sub_pane_cp28_ParamLimits

0xa30e,	// (0x0002501a) bg_popup_sub_pane_cp28

0xecff,	// (0x00029a0b) popup_discreet_window_g1_ParamLimits

0xecff,	// (0x00029a0b) popup_discreet_window_g1

0xed1f,	// (0x00029a2b) popup_discreet_window_t1_ParamLimits

0xed1f,	// (0x00029a2b) popup_discreet_window_t1

0xed3d,	// (0x00029a49) popup_discreet_window_t2_ParamLimits

0xed3d,	// (0x00029a49) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0002ab9b) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0002ab9b) popup_discreet_window_t

0x7ad5,	// (0x000227e1) popup_sk_window_g1

0x7adf,	// (0x000227eb) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0002aba2) popup_sk_window_g

0x7ae9,	// (0x000227f5) popup_sk_window_t1

0x7af7,	// (0x00022803) popup_sk_window_t1_copy1

0xe934,	// (0x00029640) cell_ai5_widget_pane_g2_ParamLimits

0xea8d,	// (0x00029799) cell_ai5_widget_pane_t9_ParamLimits

0xea8d,	// (0x00029799) cell_ai5_widget_pane_t9

0x7e48,	// (0x00022b54) main_fep_fshwr2_pane

0x7b05,	// (0x00022811) aid_fshwr2_btn_pane

0x7b11,	// (0x0002281d) aid_fshwr2_syb_pane

0x7b1d,	// (0x00022829) aid_fshwr2_txt_pane

0x7b29,	// (0x00022835) fshwr2_func_candi_pane

0x7b3e,	// (0x0002284a) fshwr2_hwr_syb_pane

0x7b4e,	// (0x0002285a) fshwr2_icf_pane

0x7e48,	// (0x00022b54) fshwr2_icf_bg_pane

0x7b77,	// (0x00022883) fshwr2_icf_pane_t1_ParamLimits

0x7b77,	// (0x00022883) fshwr2_icf_pane_t1

0x8e2e,	// (0x00023b3a) fshwr2_func_candi_pane_g1

0xed8f,	// (0x00029a9b) fshwr2_func_candi_row_pane_ParamLimits

0xed8f,	// (0x00029a9b) fshwr2_func_candi_row_pane

0x7b8f,	// (0x0002289b) cell_fshwr2_syb_pane_ParamLimits

0x7b8f,	// (0x0002289b) cell_fshwr2_syb_pane

0xc52d,	// (0x00027239) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc52d,	// (0x00027239) fshwr2_hwr_syb_pane_g1

0x7e48,	// (0x00022b54) bg_popup_call_pane_cp01

0x7ba5,	// (0x000228b1) fshwr2_func_candi_cell_pane_ParamLimits

0x7ba5,	// (0x000228b1) fshwr2_func_candi_cell_pane

0xed9f,	// (0x00029aab) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed9f,	// (0x00029aab) fshwr2_func_candi_cell_bg_pane

0x7bee,	// (0x000228fa) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7bee,	// (0x000228fa) fshwr2_func_candi_cell_pane_g1

0x7c16,	// (0x00022922) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c16,	// (0x00022922) fshwr2_func_candi_cell_pane_t1

0x7e48,	// (0x00022b54) bg_button_pane_cp08

0xedab,	// (0x00029ab7) cell_fshwr2_syb_bg_pane

0x7c29,	// (0x00022935) cell_fshwr2_syb_bg_pane_g1

0x7c31,	// (0x0002293d) cell_fshwr2_syb_bg_pane_t1

0x87ab,	// (0x000234b7) main_tmo_pane

0xae1d,	// (0x00025b29) uni_indicator_pane_g1_ParamLimits

0xae33,	// (0x00025b3f) uni_indicator_pane_g2_ParamLimits

0xae49,	// (0x00025b55) uni_indicator_pane_g3_ParamLimits

0xae5d,	// (0x00025b69) uni_indicator_pane_g4_ParamLimits

0xae5d,	// (0x00025b69) uni_indicator_pane_g4

0xae71,	// (0x00025b7d) uni_indicator_pane_g5_ParamLimits

0xae71,	// (0x00025b7d) uni_indicator_pane_g5

0xae71,	// (0x00025b7d) uni_indicator_pane_g6_ParamLimits

0xae71,	// (0x00025b7d) uni_indicator_pane_g6

0xf91a,	// (0x0002a626) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00028496) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00028496) popup_tmo_note_window

0x87ab,	// (0x000234b7) fshwr2_bg_pane

0x7c07,	// (0x00022913) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c07,	// (0x00022913) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0002aba7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0002aba7) fshwr2_func_candi_cell_pane_g

0xc2af,	// (0x00026fbb) bg_popup_window_pane_cp01

0x7c40,	// (0x0002294c) bg_popup_window_pane_g1_cp01

0xedb3,	// (0x00029abf) bg_popup_window_pane_cp22_ParamLimits

0xedb3,	// (0x00029abf) bg_popup_window_pane_cp22

0xedc1,	// (0x00029acd) listscroll_tmo_link_pane_ParamLimits

0xedc1,	// (0x00029acd) listscroll_tmo_link_pane

0xee01,	// (0x00029b0d) popup_tmo_note_window_g1_ParamLimits

0xee01,	// (0x00029b0d) popup_tmo_note_window_g1

0xee0e,	// (0x00029b1a) tmo_note_info_pane_ParamLimits

0xee0e,	// (0x00029b1a) tmo_note_info_pane

0xee28,	// (0x00029b34) list_tmo_note_info_pane_g1_ParamLimits

0xee28,	// (0x00029b34) list_tmo_note_info_pane_g1

0xee3f,	// (0x00029b4b) list_tmo_note_info_pane_g2_ParamLimits

0xee3f,	// (0x00029b4b) list_tmo_note_info_pane_g2

0x0001,

0x0007,	// (0x0001ad13) list_tmo_note_info_pane_g_ParamLimits

0x0007,	// (0x0001ad13) list_tmo_note_info_pane_g

0xee5b,	// (0x00029b67) list_tmo_note_info_text_pane_ParamLimits

0xee5b,	// (0x00029b67) list_tmo_note_info_text_pane

0xeedc,	// (0x00029be8) list_tmo_link_pane

0xeee9,	// (0x00029bf5) scroll_pane_cp20

0xeef6,	// (0x00029c02) list_single_tmo_link_pane_ParamLimits

0xeef6,	// (0x00029c02) list_single_tmo_link_pane

0xef06,	// (0x00029c12) list_single_tmo_link_pane_t1

0xef14,	// (0x00029c20) list_tmo_note_info_text_pane_t1_ParamLimits

0xef14,	// (0x00029c20) list_tmo_note_info_text_pane_t1

0x8865,	// (0x00023571) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8865,	// (0x00023571) aid_size_touch_scroll_bar_cp01

0x4f7c,	// (0x0001fc88) aid_size_touch_slider_marker

0x5da4,	// (0x00020ab0) popup_settings_window_ParamLimits

0x5da4,	// (0x00020ab0) popup_settings_window

0x514b,	// (0x0001fe57) popup_candi_list_indi_window

0x97e1,	// (0x000244ed) aid_touch_navi_pane_ParamLimits

0x72e8,	// (0x00021ff4) rs_clock_indi_pane

0x72f1,	// (0x00021ffd) sctrl_sk_bottom_pane_ParamLimits

0x7302,	// (0x0002200e) sctrl_sk_top_pane_ParamLimits

0x73e9,	// (0x000220f5) popup_fep_tooltip_window

0xe8aa,	// (0x000295b6) aid_size_cell_widget_grid_ParamLimits

0xe91f,	// (0x0002962b) cell_ai5_widget_pane_g1_ParamLimits

0xe91f,	// (0x0002962b) cell_ai5_widget_pane_g1

0xe973,	// (0x0002967f) cell_ai5_widget_pane_g6_ParamLimits

0xe97f,	// (0x0002968b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0002ab2a) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0002ab2a) cell_ai5_widget_pane_g

0xeab1,	// (0x000297bd) cell_ai5_widget_pane_t10_ParamLimits

0xeab1,	// (0x000297bd) cell_ai5_widget_pane_t10

0xeacf,	// (0x000297db) grid_ai5_widget_pane_ParamLimits

0xeb70,	// (0x0002987c) cell_contacts_ai5_widget_pane_ParamLimits

0xeb70,	// (0x0002987c) cell_contacts_ai5_widget_pane

0xed52,	// (0x00029a5e) popup_discreet_window_t3_ParamLimits

0xed52,	// (0x00029a5e) popup_discreet_window_t3

0x7b63,	// (0x0002286f) popup_fshwr2_char_preview_window_ParamLimits

0x7b63,	// (0x0002286f) popup_fshwr2_char_preview_window

0xee79,	// (0x00029b85) tmo_note_info_pane_t1

0xee8e,	// (0x00029b9a) tmo_note_info_pane_t2

0xeea3,	// (0x00029baf) tmo_note_info_pane_t3

0xeeb8,	// (0x00029bc4) tmo_note_info_pane_t4

0xeeca,	// (0x00029bd6) tmo_note_info_pane_t5

0x0004,

0x000c,	// (0x0001ad18) tmo_note_info_pane_t

0xeedc,	// (0x00029be8) list_tmo_link_pane_ParamLimits

0xeee9,	// (0x00029bf5) scroll_pane_cp20_ParamLimits

0x7e48,	// (0x00022b54) bg_popup_fep_char_preview_window_cp01

0xef2d,	// (0x00029c39) popup_fshwr2_char_preview_window_t1

0xef3b,	// (0x00029c47) popup_candi_list_indi_window_g1

0xef44,	// (0x00029c50) bg_cell_contacts_ai5_widget_pane

0xef50,	// (0x00029c5c) cell_contacts_ai5_widget_pane_g1

0xc98f,	// (0x0002769b) cell_contacts_ai5_widget_pane_g2

0xef65,	// (0x00029c71) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea0,	// (0x0002abac) cell_contacts_ai5_widget_pane_g

0xef71,	// (0x00029c7d) cell_contacts_ai5_widget_pane_t1

0x87ab,	// (0x000234b7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefe8,	// (0x00029cf4) settings_container_pane

0x9441,	// (0x0002414d) listscroll_set_pane_copy1

0xb998,	// (0x000266a4) scroll_pane_cp121_copy1

0xeff4,	// (0x00029d00) set_content_pane_copy1

0xeffc,	// (0x00029d08) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00029d08) aid_height_set_list_copy1

0xb069,	// (0x00025d75) aid_size_parent_copy1_ParamLimits

0xb069,	// (0x00025d75) aid_size_parent_copy1

0xf008,	// (0x00029d14) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00029d14) button_value_adjust_pane_cp6_copy1

0x977f,	// (0x0002448b) list_highlight_pane_cp2_copy1_ParamLimits

0x977f,	// (0x0002448b) list_highlight_pane_cp2_copy1

0xf01c,	// (0x00029d28) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x00029d28) list_set_pane_copy1

0xef83,	// (0x00029c8f) main_pane_set_t1_copy1_ParamLimits

0xef83,	// (0x00029c8f) main_pane_set_t1_copy1

0xefbd,	// (0x00029cc9) main_pane_set_t2_copy1_ParamLimits

0xefbd,	// (0x00029cc9) main_pane_set_t2_copy1

0xf0c9,	// (0x00029dd5) main_pane_set_t3_copy1

0xf0d7,	// (0x00029de3) main_pane_set_t4_copy1

0xefdc,	// (0x00029ce8) set_content_pane_g1_copy1_ParamLimits

0xefdc,	// (0x00029ce8) set_content_pane_g1_copy1

0xf0e5,	// (0x00029df1) setting_code_pane_copy1

0xf0ed,	// (0x00029df9) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00029df9) setting_slider_pane_copy1

0xf0ed,	// (0x00029df9) setting_text_pane_copy1

0xf0ed,	// (0x00029df9) setting_volume_pane_copy1

0xf0e5,	// (0x00029df1) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00029e01) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00029e01) settings_code_pane_cp_copy1

0x7c49,	// (0x00022955) volume_set_pane_copy1

0xf109,	// (0x00029e15) volume_set_pane_g10_copy1

0xf111,	// (0x00029e1d) volume_set_pane_g1_copy1

0xf119,	// (0x00029e25) volume_set_pane_g2_copy1

0xf121,	// (0x00029e2d) volume_set_pane_g3_copy1

0xf129,	// (0x00029e35) volume_set_pane_g4_copy1

0xf131,	// (0x00029e3d) volume_set_pane_g5_copy1

0xf139,	// (0x00029e45) volume_set_pane_g6_copy1

0xf141,	// (0x00029e4d) volume_set_pane_g7_copy1

0xf149,	// (0x00029e55) volume_set_pane_g8_copy1

0xf151,	// (0x00029e5d) volume_set_pane_g9_copy1

0x7f3c,	// (0x00022c48) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f3c,	// (0x00022c48) bg_set_opt_pane_cp_copy1

0x7c51,	// (0x0002295d) setting_slider_pane_t1_copy1_ParamLimits

0x7c51,	// (0x0002295d) setting_slider_pane_t1_copy1

0x7c6f,	// (0x0002297b) setting_slider_pane_t2_copy1_ParamLimits

0x7c6f,	// (0x0002297b) setting_slider_pane_t2_copy1

0x7c89,	// (0x00022995) setting_slider_pane_t3_copy1_ParamLimits

0x7c89,	// (0x00022995) setting_slider_pane_t3_copy1

0x7ca1,	// (0x000229ad) slider_set_pane_copy1_ParamLimits

0x7ca1,	// (0x000229ad) slider_set_pane_copy1

0x8806,	// (0x00023512) set_opt_bg_pane_g1_copy2

0x880e,	// (0x0002351a) set_opt_bg_pane_g2_copy2

0xf159,	// (0x00029e65) set_opt_bg_pane_g3_copy2

0x881e,	// (0x0002352a) set_opt_bg_pane_g4_copy2

0x8826,	// (0x00023532) set_opt_bg_pane_g5_copy2

0x882e,	// (0x0002353a) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00029e6f) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x00029e77) set_opt_bg_pane_g8_copy2

0xf175,	// (0x00029e81) set_opt_bg_pane_g9_copy2

0x7cb7,	// (0x000229c3) aid_size_touch_slider_mark_copy1_ParamLimits

0x7cb7,	// (0x000229c3) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x00029e8b) slider_set_pane_g1_copy1

0x7ccb,	// (0x000229d7) slider_set_pane_g2_copy1

0x6dcb,	// (0x00021ad7) slider_set_pane_g3_copy1_ParamLimits

0x6dcb,	// (0x00021ad7) slider_set_pane_g3_copy1

0x6ddf,	// (0x00021aeb) slider_set_pane_g4_copy1_ParamLimits

0x6ddf,	// (0x00021aeb) slider_set_pane_g4_copy1

0x6df7,	// (0x00021b03) slider_set_pane_g5_copy1_ParamLimits

0x6df7,	// (0x00021b03) slider_set_pane_g5_copy1

0x6dcb,	// (0x00021ad7) slider_set_pane_g6_copy1_ParamLimits

0x6dcb,	// (0x00021ad7) slider_set_pane_g6_copy1

0x7cd3,	// (0x000229df) slider_set_pane_g7_copy1_ParamLimits

0x7cd3,	// (0x000229df) slider_set_pane_g7_copy1

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x00029e94) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x00029e9d) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00029ead) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x00029ebd) slider_set_pane_cp_copy1

0xf1c1,	// (0x00029ecd) input_focus_pane_cp1_copy1

0xf1ca,	// (0x00029ed6) list_set_text_pane_copy1

0xf1d2,	// (0x00029ede) setting_text_pane_g1_copy1

0x4982,	// (0x0001f68e) set_text_pane_t1_copy1

0xf1c1,	// (0x00029ecd) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00029ede) setting_code_pane_g1_copy1

0xf1db,	// (0x00029ee7) setting_code_pane_t1_copy1

0xf1e9,	// (0x00029ef5) list_set_graphic_pane_copy1

0x7e5c,	// (0x00022b68) bg_set_opt_pane_cp4_copy1

0x913c,	// (0x00023e48) list_set_graphic_pane_g1_copy1_ParamLimits

0x913c,	// (0x00023e48) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x00029f07) list_set_graphic_pane_g2_copy1

0x9154,	// (0x00023e60) list_set_graphic_pane_t1_copy1_ParamLimits

0x9154,	// (0x00023e60) list_set_graphic_pane_t1_copy1

0xc2af,	// (0x00026fbb) rs_clock_indi_pane_g1

0xf203,	// (0x00029f0f) rs_clock_indi_pane_t1

0xf211,	// (0x00029f1d) rs_indi_pane

0xf219,	// (0x00029f25) rs_indi_pane_g1

0xf222,	// (0x00029f2e) rs_indi_pane_g2

0xf22b,	// (0x00029f37) rs_indi_pane_g3

0x0002,

0x001e,	// (0x0001ad2a) rs_indi_pane_g

0x9441,	// (0x0002414d) bg_popup_preview_window_pane_cp03

0xf234,	// (0x00029f40) popup_fep_tooltip_window_t1

0xcf2b,	// (0x00027c37) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x00027c37) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0002a95c) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0002a95c) popup_note2_window_g

0xd426,	// (0x00028132) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x0002813f) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x00028156) cell_ai3_links_pane_t1

0x4982,	// (0x0001f68e) set_text_pane_t1_copy1_ParamLimits

0x9352,	// (0x0002405e) cell_graphic_popup_pane_cp2_ParamLimits

0x9352,	// (0x0002405e) cell_graphic_popup_pane_cp2

0xf242,	// (0x00029f4e) cell_graphic_popup_pane_g1_cp2

0x84f6,	// (0x00023202) cell_graphic_popup_pane_g2_cp2

0xf24a,	// (0x00029f56) cell_graphic_popup_pane_g3_cp2

0xf252,	// (0x00029f5e) cell_graphic_popup_pane_t2_cp2

0x8507,	// (0x00023213) grid_highlight_pane_cp3_cp2

0x8b4b,	// (0x00023857) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87ab,	// (0x000234b7) main_tmo_pane_ParamLimits

0xd77e,	// (0x0002848a) popup_tmo_big_image_note_window

0xe90e,	// (0x0002961a) cell_ai5_widget_list_pane

0xe916,	// (0x00029622) cell_ai5_widget_lrg_icon_pane

0xee79,	// (0x00029b85) tmo_note_info_pane_t1_ParamLimits

0xee8e,	// (0x00029b9a) tmo_note_info_pane_t2_ParamLimits

0xeea3,	// (0x00029baf) tmo_note_info_pane_t3_ParamLimits

0xeeb8,	// (0x00029bc4) tmo_note_info_pane_t4_ParamLimits

0xeeca,	// (0x00029bd6) tmo_note_info_pane_t5_ParamLimits

0x000c,	// (0x0001ad18) tmo_note_info_pane_t_ParamLimits

0xefe8,	// (0x00029cf4) settings_container_pane_ParamLimits

0xf1b9,	// (0x00029ec5) indicator_popup_pane_cp5

0xf1b9,	// (0x00029ec5) indicator_popup_pane_cp6

0xf1e9,	// (0x00029ef5) list_set_graphic_pane_copy1_ParamLimits

0x7e48,	// (0x00022b54) bg_popup_window_pane_cp23

0xf260,	// (0x00029f6c) popup_tmo_big_image_note_window_g1

0xf26a,	// (0x00029f76) popup_tmo_big_image_note_window_t1

0xf27a,	// (0x00029f86) popup_tmo_big_image_note_window_t2

0xf28a,	// (0x00029f96) popup_tmo_big_image_note_window_t3

0x0002,

0x0025,	// (0x0001ad31) popup_tmo_big_image_note_window_t

0xc2af,	// (0x00026fbb) cell_ai5_widget_lrg_icon_pane_g1

0xf29a,	// (0x00029fa6) cell_ai5_widget_lrg_icon_pane_t1

0xf2a8,	// (0x00029fb4) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a8,	// (0x00029fb4) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x00029fcb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x00029fcb) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x00029fd8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x00029fd8) cell_ai5_widget_list_row_pane_t1

0xf2fd,	// (0x0002a009) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fd,	// (0x0002a009) cell_ai5_widget_list_row_pane_t2

0x0002,

0x002c,	// (0x0001ad38) cell_ai5_widget_list_row_pane_t_ParamLimits

0x002c,	// (0x0001ad38) cell_ai5_widget_list_row_pane_t

0x7e48,	// (0x00022b54) main_fep_vtchi_ss_pane

0xf341,	// (0x0002a04d) popup_fep_char_pre_window

0xf349,	// (0x0002a055) popup_fep_ituss_window

0xf36a,	// (0x0002a076) popup_fep_vkbss_window

0xf389,	// (0x0002a095) grid_vkbss_keypad_pane_ParamLimits

0xf389,	// (0x0002a095) grid_vkbss_keypad_pane

0xf399,	// (0x0002a0a5) ituss_keypad_pane

0x7cf5,	// (0x00022a01) aid_vkbss_key_offset_ParamLimits

0x7cf5,	// (0x00022a01) aid_vkbss_key_offset

0x7d01,	// (0x00022a0d) cell_vkbss_key_pane_ParamLimits

0x7d01,	// (0x00022a0d) cell_vkbss_key_pane

0xf3a8,	// (0x0002a0b4) bg_cell_vkbss_key_g1_ParamLimits

0xf3a8,	// (0x0002a0b4) bg_cell_vkbss_key_g1

0xf3b4,	// (0x0002a0c0) cell_vkbss_key_3p_pane_ParamLimits

0xf3b4,	// (0x0002a0c0) cell_vkbss_key_3p_pane

0xf3ce,	// (0x0002a0da) cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0002a0da) cell_vkbss_key_g1

0xf3e8,	// (0x0002a0f4) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0002a0f4) cell_vkbss_key_t1

0x7d17,	// (0x00022a23) cell_ituss_key_pane_ParamLimits

0x7d17,	// (0x00022a23) cell_ituss_key_pane

0xf413,	// (0x0002a11f) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0002a11f) bg_cell_ituss_key_g1

0xf41f,	// (0x0002a12b) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0002a12b) cell_ituss_key_pane_g1

0x7d28,	// (0x00022a34) cell_ituss_key_pane_g2_ParamLimits

0x7d28,	// (0x00022a34) cell_ituss_key_pane_g2

0x0002,

0xfea7,	// (0x0002abb3) cell_ituss_key_pane_g_ParamLimits

0xfea7,	// (0x0002abb3) cell_ituss_key_pane_g

0x7d54,	// (0x00022a60) cell_ituss_key_t1_ParamLimits

0x7d54,	// (0x00022a60) cell_ituss_key_t1

0x7d8e,	// (0x00022a9a) cell_ituss_key_t2_ParamLimits

0x7d8e,	// (0x00022a9a) cell_ituss_key_t2

0x7dbf,	// (0x00022acb) cell_ituss_key_t3_ParamLimits

0x7dbf,	// (0x00022acb) cell_ituss_key_t3

0x7d8e,	// (0x00022a9a) cell_ituss_key_t4_ParamLimits

0x7d8e,	// (0x00022a9a) cell_ituss_key_t4

0x0004,

0xfeae,	// (0x0002abba) cell_ituss_key_t_ParamLimits

0xfeae,	// (0x0002abba) cell_ituss_key_t

0xf44b,	// (0x0002a157) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0002a15f) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0002a167) cell_vkbss_key_3p_pane_g3

0x0002,

0x0045,	// (0x0001ad51) cell_vkbss_key_3p_pane_g

0x7e48,	// (0x00022b54) bg_popup_fep_char_preview_window_cp02

0x7e02,	// (0x00022b0e) popup_fep_char_pre_window_t1

0xe8a0,	// (0x000295ac) main_ai5_sk_pane

0xef44,	// (0x00029c50) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef50,	// (0x00029c5c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc98f,	// (0x0002769b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef65,	// (0x00029c71) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea0,	// (0x0002abac) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef71,	// (0x00029c7d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87ab,	// (0x000234b7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0002a16f) main_ai5_sk_pane_g1

0xa13b,	// (0x00024e47) popup_query_code_window_g1

0xf35f,	// (0x0002a06b) popup_fep_vkb_icf_pane

0xf373,	// (0x0002a07f) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0002a178) bg_icf_pane

0xf478,	// (0x0002a184) list_vkb_icf_pane

0xf487,	// (0x0002a193) bg_icf_pane_cp01

0xf49a,	// (0x0002a1a6) vtchi_icf_list_pane

0xf4aa,	// (0x0002a1b6) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0002a1b6) list_vkb_icf_pane_t1

0xf4c0,	// (0x0002a1cc) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0002a1cc) vtchi_icf_list_pane_t1

0xf349,	// (0x0002a055) popup_fep_ituss_window_ParamLimits

0xf373,	// (0x0002a07f) popup_fep_vtchi_icf_pane_ParamLimits

0xf399,	// (0x0002a0a5) ituss_keypad_pane_ParamLimits

0x7ce9,	// (0x000229f5) ituss_sks_pane

0xf46c,	// (0x0002a178) bg_icf_pane_ParamLimits

0xf325,	// (0x0002a031) icf_edit_indi_pane_ParamLimits

0xf325,	// (0x0002a031) icf_edit_indi_pane

0xf478,	// (0x0002a184) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0002a193) bg_icf_pane_cp01_ParamLimits

0xf334,	// (0x0002a040) icf_edit_indi_pane_cp01_ParamLimits

0xf334,	// (0x0002a040) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0002a1ae) vtchi_query_pane

0xc52d,	// (0x00027239) icf_edit_indi_pane_g1_ParamLimits

0xc52d,	// (0x00027239) icf_edit_indi_pane_g1

0xf531,	// (0x0002a23d) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0002a23d) icf_edit_indi_pane_g2

0x0001,

0xfebe,	// (0x0002abca) icf_edit_indi_pane_g_ParamLimits

0xfebe,	// (0x0002abca) icf_edit_indi_pane_g

0xf540,	// (0x0002a24c) icf_edit_indi_pane_t1

0xf4da,	// (0x0002a1e6) bg_input_focus_pane_cp042

0x86da,	// (0x000233e6) vtchi_button_pane

0xf4e3,	// (0x0002a1ef) vtchi_query_pane_t1

0xf4f1,	// (0x0002a1fd) vtchi_query_pane_t2

0xf4ff,	// (0x0002a20b) vtchi_query_pane_t3

0x0002,

0x004c,	// (0x0001ad58) vtchi_query_pane_t

0x7e48,	// (0x00022b54) bg_button_pane_cp13

0xf50d,	// (0x0002a219) vtchi_button_pane_g1

0x7e11,	// (0x00022b1d) ituss_sks_pane_g1

0x7e1c,	// (0x00022b28) ituss_sks_pane_g2

0x0001,

0xfeb9,	// (0x0002abc5) ituss_sks_pane_g

0xf515,	// (0x0002a221) ituss_sks_pane_t1

0xf523,	// (0x0002a22f) ituss_sks_pane_t2

0x0001,

0x0058,	// (0x0001ad64) ituss_sks_pane_t

0xbd12,	// (0x00026a1e) indicator_nsta_pane_cp_g1

0xbd1b,	// (0x00026a27) indicator_nsta_pane_cp_g2

0xbd23,	// (0x00026a2f) indicator_nsta_pane_cp_g3

0xbd2b,	// (0x00026a37) indicator_nsta_pane_cp_g4

0xbd33,	// (0x00026a3f) indicator_nsta_pane_cp_g5

0xbd33,	// (0x00026a3f) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0002a7a6) indicator_nsta_pane_cp_g

0xe465,	// (0x00029171) cell_graphic2_pane_t2_ParamLimits

0xe465,	// (0x00029171) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0002aab3) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0002aab3) cell_graphic2_pane_t

0xe492,	// (0x0002919e) cell_graphic2_control_pane_t1

0x8eef,	// (0x00023bfb) signal_pane_g3_ParamLimits

0x8eef,	// (0x00023bfb) signal_pane_g3

0x8f01,	// (0x00023c0d) signal_pane_g4_ParamLimits

0x8f01,	// (0x00023c0d) signal_pane_g4

0xf30f,	// (0x0002a01b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf30f,	// (0x0002a01b) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0002a145) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0002a145) cell_ituss_key_pane_t1

0x9d8e,	// (0x00024a9a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d8e,	// (0x00024a9a) form_field_data_wide_pane_vc_t2

0x9da2,	// (0x00024aae) form_field_data_wide_pane_vc_t3_ParamLimits

0x9da2,	// (0x00024aae) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a50e) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a50e) form_field_data_wide_pane_vc_t

0xb9da,	// (0x000266e6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9da,	// (0x000266e6) form_field_slider_wide_pane_vc_t3

0xbab8,	// (0x000267c4) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbab8,	// (0x000267c4) form_field_popup_wide_pane_vc_t2

0xbacf,	// (0x000267db) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbacf,	// (0x000267db) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0002a795) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0002a795) form_field_popup_wide_pane_vc_t

0x7b05,	// (0x00022811) aid_fshwr2_btn_pane_ParamLimits

0x7b11,	// (0x0002281d) aid_fshwr2_syb_pane_ParamLimits

0x7b1d,	// (0x00022829) aid_fshwr2_txt_pane_ParamLimits

0x87ab,	// (0x000234b7) fshwr2_bg_pane_ParamLimits

0x7b29,	// (0x00022835) fshwr2_func_candi_pane_ParamLimits

0x7b3e,	// (0x0002284a) fshwr2_hwr_syb_pane_ParamLimits

0x7b4e,	// (0x0002285a) fshwr2_icf_pane_ParamLimits

0x5686,	// (0x00020392) list_double_graphic_pane_vc_g4_ParamLimits

0x5686,	// (0x00020392) list_double_graphic_pane_vc_g4

0x7d48,	// (0x00022a54) cell_ituss_key_pane_g3_ParamLimits

0x7d48,	// (0x00022a54) cell_ituss_key_pane_g3

0x7df0,	// (0x00022afc) cell_ituss_key_t5_ParamLimits

0x7df0,	// (0x00022afc) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

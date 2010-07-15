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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005a9de };

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
0x985c,	// (0x0006423a) Screen

0x9868,	// (0x00064246) application_window_ParamLimits

0x9868,	// (0x00064246) application_window

0x7ba2,	// (0x00062580) screen_g1

0x98a0,	// (0x0006427e) area_bottom_pane_ParamLimits

0x98a0,	// (0x0006427e) area_bottom_pane

0xee7b,	// (0x00069859) area_top_pane_ParamLimits

0xee7b,	// (0x00069859) area_top_pane

0xef19,	// (0x000698f7) main_pane_ParamLimits

0xef19,	// (0x000698f7) main_pane

0x7bac,	// (0x0006258a) misc_graphics

0xb29e,	// (0x00065c7c) battery_pane_ParamLimits

0xb29e,	// (0x00065c7c) battery_pane

0x2b9f,	// (0x0005d57d) bg_status_flat_pane_g8

0x2ba7,	// (0x0005d585) bg_status_flat_pane_g9

0x1f83,	// (0x0005c961) context_pane_ParamLimits

0x1f83,	// (0x0005c961) context_pane

0xb415,	// (0x00065df3) navi_pane_ParamLimits

0xb415,	// (0x00065df3) navi_pane

0xc0ef,	// (0x00066acd) signal_pane_ParamLimits

0xc0ef,	// (0x00066acd) signal_pane

0x0008,

0xf879,	// (0x0006a257) bg_status_flat_pane_g

0xc17f,	// (0x00066b5d) status_pane_g1_ParamLimits

0xc17f,	// (0x00066b5d) status_pane_g1

0xc195,	// (0x00066b73) status_pane_g2_ParamLimits

0xc195,	// (0x00066b73) status_pane_g2

0x21bc,	// (0x0005cb9a) status_pane_g3_ParamLimits

0x21bc,	// (0x0005cb9a) status_pane_g3

0x0004,

0xf7a5,	// (0x0006a183) status_pane_g_ParamLimits

0xf7a5,	// (0x0006a183) status_pane_g

0xc1a1,	// (0x00066b7f) title_pane_ParamLimits

0xc1a1,	// (0x00066b7f) title_pane

0xc208,	// (0x00066be6) uni_indicator_pane_ParamLimits

0xc208,	// (0x00066be6) uni_indicator_pane

0x1deb,	// (0x0005c7c9) bg_list_pane_ParamLimits

0x1deb,	// (0x0005c7c9) bg_list_pane

0xaade,	// (0x000654bc) find_pane

0x23db,	// (0x0005cdb9) listscroll_app_pane_ParamLimits

0x23db,	// (0x0005cdb9) listscroll_app_pane

0x1e1f,	// (0x0005c7fd) listscroll_form_pane

0xaae6,	// (0x000654c4) listscroll_gen_pane_ParamLimits

0xaae6,	// (0x000654c4) listscroll_gen_pane

0x005b,	// (0x0005aa39) listscroll_set_pane

0x3731,	// (0x0005e10f) main_idle_act_pane

0xe36a,	// (0x00068d48) main_idle_trad_pane

0xe36a,	// (0x00068d48) main_list_empty_pane

0x1e13,	// (0x0005c7f1) main_midp_pane

0x1e39,	// (0x0005c817) main_pane_g1_ParamLimits

0x1e39,	// (0x0005c817) main_pane_g1

0xaafa,	// (0x000654d8) popup_ai_message_window_ParamLimits

0xaafa,	// (0x000654d8) popup_ai_message_window

0xab9a,	// (0x00065578) popup_fep_china_uni_window_ParamLimits

0xab9a,	// (0x00065578) popup_fep_china_uni_window

0x0185,	// (0x0005ab63) popup_fep_japan_candidate_window_ParamLimits

0x0185,	// (0x0005ab63) popup_fep_japan_candidate_window

0x01af,	// (0x0005ab8d) popup_fep_japan_predictive_window_ParamLimits

0x01af,	// (0x0005ab8d) popup_fep_japan_predictive_window

0xabfa,	// (0x000655d8) popup_find_window

0xac17,	// (0x000655f5) popup_grid_graphic_window_ParamLimits

0xac17,	// (0x000655f5) popup_grid_graphic_window

0x0220,	// (0x0005abfe) popup_large_graphic_colour_window

0xacbb,	// (0x00065699) popup_menu_window_ParamLimits

0xacbb,	// (0x00065699) popup_menu_window

0xaeab,	// (0x00065889) popup_note_image_window

0xae6b,	// (0x00065849) popup_note_wait_window_ParamLimits

0xae6b,	// (0x00065849) popup_note_wait_window

0xaec3,	// (0x000658a1) popup_note_window_ParamLimits

0xaec3,	// (0x000658a1) popup_note_window

0xaf71,	// (0x0006594f) popup_query_code_window_ParamLimits

0xaf71,	// (0x0006594f) popup_query_code_window

0x048c,	// (0x0005ae6a) popup_query_data_code_window_ParamLimits

0x048c,	// (0x0005ae6a) popup_query_data_code_window

0xafb1,	// (0x0006598f) popup_query_data_window_ParamLimits

0xafb1,	// (0x0006598f) popup_query_data_window

0xb045,	// (0x00065a23) popup_query_sat_info_window_ParamLimits

0xb045,	// (0x00065a23) popup_query_sat_info_window

0xb0ee,	// (0x00065acc) popup_snote_single_graphic_window_ParamLimits

0xb0ee,	// (0x00065acc) popup_snote_single_graphic_window

0xb0ee,	// (0x00065acc) popup_snote_single_text_window_ParamLimits

0xb0ee,	// (0x00065acc) popup_snote_single_text_window

0x0527,	// (0x0005af05) popup_sub_window_general

0x066d,	// (0x0005b04b) popup_window_general_ParamLimits

0x066d,	// (0x0005b04b) popup_window_general

0x1e47,	// (0x0005c825) power_save_pane

0xa93e,	// (0x0006531c) control_pane_g1_ParamLimits

0xa93e,	// (0x0006531c) control_pane_g1

0xa967,	// (0x00065345) control_pane_g2_ParamLimits

0xa967,	// (0x00065345) control_pane_g2

0x1dae,	// (0x0005c78c) control_pane_g3_ParamLimits

0x1dae,	// (0x0005c78c) control_pane_g3

0x0007,

0xf78d,	// (0x0006a16b) control_pane_g_ParamLimits

0xf78d,	// (0x0006a16b) control_pane_g

0xa9cd,	// (0x000653ab) control_pane_t1_ParamLimits

0xa9cd,	// (0x000653ab) control_pane_t1

0xaa33,	// (0x00065411) control_pane_t2_ParamLimits

0xaa33,	// (0x00065411) control_pane_t2

0x0002,

0xf79e,	// (0x0006a17c) control_pane_t_ParamLimits

0xf79e,	// (0x0006a17c) control_pane_t

0xa897,	// (0x00065275) navi_navi_volume_pane_cp1

0xa89f,	// (0x0006527d) status_small_icon_pane

0xe48b,	// (0x00068e69) status_small_pane_g1_ParamLimits

0xe48b,	// (0x00068e69) status_small_pane_g1

0xa8a7,	// (0x00065285) status_small_pane_g2_ParamLimits

0xa8a7,	// (0x00065285) status_small_pane_g2

0xa8b3,	// (0x00065291) status_small_pane_g3_ParamLimits

0xa8b3,	// (0x00065291) status_small_pane_g3

0xa8bf,	// (0x0006529d) status_small_pane_g4_ParamLimits

0xa8bf,	// (0x0006529d) status_small_pane_g4

0xa8cb,	// (0x000652a9) status_small_pane_g5_ParamLimits

0xa8cb,	// (0x000652a9) status_small_pane_g5

0xa8d9,	// (0x000652b7) status_small_pane_g6_ParamLimits

0xa8d9,	// (0x000652b7) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006a15a) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006a15a) status_small_pane_g

0xa908,	// (0x000652e6) status_small_pane_t1

0xa92a,	// (0x00065308) status_small_wait_pane_ParamLimits

0xa92a,	// (0x00065308) status_small_wait_pane

0xa678,	// (0x00065056) aid_levels_signal_ParamLimits

0xa678,	// (0x00065056) aid_levels_signal

0xa690,	// (0x0006506e) signal_pane_g1_ParamLimits

0xa690,	// (0x0006506e) signal_pane_g1

0xa6ab,	// (0x00065089) signal_pane_g2_ParamLimits

0xa6ab,	// (0x00065089) signal_pane_g2

0x0003,

0xf70d,	// (0x0006a0eb) signal_pane_g_ParamLimits

0xf70d,	// (0x0006a0eb) signal_pane_g

0xbf6a,	// (0x00066948) context_pane_g1

0x9a8c,	// (0x0006446a) title_pane_g1

0x9acf,	// (0x000644ad) title_pane_t1

0x7bc2,	// (0x000625a0) title_pane_t2

0x7be8,	// (0x000625c6) title_pane_t3

0x0002,

0xf557,	// (0x00069f35) title_pane_t

0xc230,	// (0x00066c0e) aid_levels_battery_ParamLimits

0xc230,	// (0x00066c0e) aid_levels_battery

0xc24c,	// (0x00066c2a) battery_pane_g1_ParamLimits

0xc24c,	// (0x00066c2a) battery_pane_g1

0xc269,	// (0x00066c47) battery_pane_g2_ParamLimits

0xc269,	// (0x00066c47) battery_pane_g2

0x0001,

0xf7b0,	// (0x0006a18e) battery_pane_g_ParamLimits

0xf7b0,	// (0x0006a18e) battery_pane_g

0xc46a,	// (0x00066e48) uni_indicator_pane_g1

0xc480,	// (0x00066e5e) uni_indicator_pane_g2

0xc496,	// (0x00066e74) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0006a2ff) uni_indicator_pane_g

0xe1f0,	// (0x00068bce) navi_icon_pane_ParamLimits

0xe1f0,	// (0x00068bce) navi_icon_pane

0xe137,	// (0x00068b15) navi_midp_pane

0xe20c,	// (0x00068bea) navi_navi_pane

0xe216,	// (0x00068bf4) navi_text_pane_ParamLimits

0xe216,	// (0x00068bf4) navi_text_pane

0x7ba2,	// (0x00062580) status_small_wait_pane_g1

0x8722,	// (0x00063100) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0006a2fa) status_small_wait_pane_g

0xc409,	// (0x00066de7) navi_navi_icon_text_pane

0xc411,	// (0x00066def) navi_navi_pane_g1_ParamLimits

0xc411,	// (0x00066def) navi_navi_pane_g1

0xc423,	// (0x00066e01) navi_navi_pane_g2_ParamLimits

0xc423,	// (0x00066e01) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0006a2c8) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0006a2c8) navi_navi_pane_g

0x3228,	// (0x0005dc06) navi_navi_tabs_pane

0xc435,	// (0x00066e13) navi_navi_text_pane

0xc409,	// (0x00066de7) navi_navi_volume_pane

0xc3f7,	// (0x00066dd5) navi_text_pane_t1

0xc3eb,	// (0x00066dc9) navi_icon_pane_g1

0x311f,	// (0x0005dafd) navi_navi_text_pane_t1

0xb677,	// (0x00066055) navi_navi_volume_pane_g1

0xb67f,	// (0x0006605d) volume_small_pane

0xc347,	// (0x00066d25) navi_navi_icon_text_pane_g1

0xc34f,	// (0x00066d2d) navi_navi_icon_text_pane_t1

0xe20c,	// (0x00068bea) navi_tabs_2_long_pane

0xe20c,	// (0x00068bea) navi_tabs_2_pane

0xe20c,	// (0x00068bea) navi_tabs_3_long_pane

0xe20c,	// (0x00068bea) navi_tabs_3_pane

0xe20c,	// (0x00068bea) navi_tabs_4_pane

0xb657,	// (0x00066035) tabs_2_active_pane_ParamLimits

0xb657,	// (0x00066035) tabs_2_active_pane

0xb667,	// (0x00066045) tabs_2_passive_pane_ParamLimits

0xb667,	// (0x00066045) tabs_2_passive_pane

0xb625,	// (0x00066003) tabs_3_active_pane_ParamLimits

0xb625,	// (0x00066003) tabs_3_active_pane

0xb635,	// (0x00066013) tabs_3_passive_pane_ParamLimits

0xb635,	// (0x00066013) tabs_3_passive_pane

0xb646,	// (0x00066024) tabs_3_passive_pane_cp_ParamLimits

0xb646,	// (0x00066024) tabs_3_passive_pane_cp

0xb5e1,	// (0x00065fbf) tabs_4_active_pane_ParamLimits

0xb5e1,	// (0x00065fbf) tabs_4_active_pane

0xb5f2,	// (0x00065fd0) tabs_4_passive_pane_ParamLimits

0xb5f2,	// (0x00065fd0) tabs_4_passive_pane

0xb603,	// (0x00065fe1) tabs_4_passive_pane_cp_ParamLimits

0xb603,	// (0x00065fe1) tabs_4_passive_pane_cp

0xb614,	// (0x00065ff2) tabs_4_passive_pane_cp2_ParamLimits

0xb614,	// (0x00065ff2) tabs_4_passive_pane_cp2

0xb5bd,	// (0x00065f9b) tabs_2_long_active_pane_ParamLimits

0xb5bd,	// (0x00065f9b) tabs_2_long_active_pane

0xb5cf,	// (0x00065fad) tabs_2_long_passive_pane_ParamLimits

0xb5cf,	// (0x00065fad) tabs_2_long_passive_pane

0xb572,	// (0x00065f50) tabs_3_long_active_pane_ParamLimits

0xb572,	// (0x00065f50) tabs_3_long_active_pane

0xb58b,	// (0x00065f69) tabs_3_long_passive_pane_ParamLimits

0xb58b,	// (0x00065f69) tabs_3_long_passive_pane

0xb5a4,	// (0x00065f82) tabs_3_long_passive_pane_cp_ParamLimits

0xb5a4,	// (0x00065f82) tabs_3_long_passive_pane_cp

0x07ee,	// (0x0005b1cc) volume_small_pane_g1

0xb521,	// (0x00065eff) volume_small_pane_g2

0xb52a,	// (0x00065f08) volume_small_pane_g3

0xb533,	// (0x00065f11) volume_small_pane_g4

0xb53c,	// (0x00065f1a) volume_small_pane_g5

0xb545,	// (0x00065f23) volume_small_pane_g6

0xb54e,	// (0x00065f2c) volume_small_pane_g7

0xb557,	// (0x00065f35) volume_small_pane_g8

0xb560,	// (0x00065f3e) volume_small_pane_g9

0xb569,	// (0x00065f47) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0006a294) volume_small_pane_g

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp2_ParamLimits

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp2

0x9b5b,	// (0x00064539) tabs_3_active_pane_g1

0x9b63,	// (0x00064541) tabs_3_active_pane_t1

0x7cfe,	// (0x000626dc) bg_passive_tab_pane_cp2_ParamLimits

0x7cfe,	// (0x000626dc) bg_passive_tab_pane_cp2

0x9b5b,	// (0x00064539) tabs_3_passive_pane_g1

0x9b63,	// (0x00064541) tabs_3_passive_pane_t1

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp3_ParamLimits

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp3

0x9b75,	// (0x00064553) tabs_4_active_pane_g1

0x9b7d,	// (0x0006455b) tabs_4_active_pane_t1

0x7cfe,	// (0x000626dc) bg_passive_tab_pane_cp3_ParamLimits

0x7cfe,	// (0x000626dc) bg_passive_tab_pane_cp3

0x9b75,	// (0x00064553) tabs_4_1_passive_pane_g1

0x9b7d,	// (0x0006455b) tabs_4_1_passive_pane_t1

0x1e13,	// (0x0005c7f1) list_highlight_pane_cp2

0x3757,	// (0x0005e135) list_set_pane_ParamLimits

0x3757,	// (0x0005e135) list_set_pane

0xc529,	// (0x00066f07) main_pane_set_t1_ParamLimits

0xc529,	// (0x00066f07) main_pane_set_t1

0xc549,	// (0x00066f27) main_pane_set_t2_ParamLimits

0xc549,	// (0x00066f27) main_pane_set_t2

0xc55d,	// (0x00066f3b) main_pane_set_t3_ParamLimits

0xc55d,	// (0x00066f3b) main_pane_set_t3

0xc571,	// (0x00066f4f) main_pane_set_t4_ParamLimits

0xc571,	// (0x00066f4f) main_pane_set_t4

0x0003,

0xf986,	// (0x0006a364) main_pane_set_t_ParamLimits

0xf986,	// (0x0006a364) main_pane_set_t

0xc585,	// (0x00066f63) setting_code_pane

0x387f,	// (0x0005e25d) setting_slider_graphic_pane

0x387f,	// (0x0005e25d) setting_slider_pane

0x387f,	// (0x0005e25d) setting_text_pane

0x387f,	// (0x0005e25d) setting_volume_pane

0xf028,	// (0x00069a06) volume_set_pane

0x7bfa,	// (0x000625d8) bg_set_opt_pane_cp

0xf032,	// (0x00069a10) setting_slider_pane_t1

0xf04b,	// (0x00069a29) setting_slider_pane_t2

0xf065,	// (0x00069a43) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00069f3c) setting_slider_pane_t

0xf07d,	// (0x00069a5b) slider_set_pane

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp2

0x7c08,	// (0x000625e6) setting_slider_graphic_pane_g1

0xf093,	// (0x00069a71) setting_slider_graphic_pane_t1

0xf0a3,	// (0x00069a81) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00069f43) setting_slider_graphic_pane_t

0xf0b3,	// (0x00069a91) slider_set_pane_cp

0x7bac,	// (0x0006258a) input_focus_pane_cp1

0x3718,	// (0x0005e0f6) list_set_text_pane

0x7ba2,	// (0x00062580) setting_text_pane_g1

0x7bac,	// (0x0006258a) input_focus_pane_cp2

0x7ba2,	// (0x00062580) setting_code_pane_g1

0x7c11,	// (0x000625ef) setting_code_pane_t1

0xde9a,	// (0x00068878) set_text_pane_t1_ParamLimits

0xde9a,	// (0x00068878) set_text_pane_t1

0x8ab7,	// (0x00063495) set_opt_bg_pane_g1

0x8abf,	// (0x0006349d) set_opt_bg_pane_g2

0x36f0,	// (0x0005e0ce) set_opt_bg_pane_g3

0x8acf,	// (0x000634ad) set_opt_bg_pane_g4

0x8ad7,	// (0x000634b5) set_opt_bg_pane_g5

0x8adf,	// (0x000634bd) set_opt_bg_pane_g6

0x36fa,	// (0x0005e0d8) set_opt_bg_pane_g7

0x3704,	// (0x0005e0e2) set_opt_bg_pane_g8

0x370e,	// (0x0005e0ec) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0006a351) set_opt_bg_pane_g

0x36e3,	// (0x0005e0c1) slider_set_pane_g1

0x09fa,	// (0x0005b3d8) slider_set_pane_g2

0x0006,

0xf964,	// (0x0006a342) slider_set_pane_g

0x095a,	// (0x0005b338) volume_set_pane_g1

0x0964,	// (0x0005b342) volume_set_pane_g2

0x096e,	// (0x0005b34c) volume_set_pane_g3

0x0978,	// (0x0005b356) volume_set_pane_g4

0x0982,	// (0x0005b360) volume_set_pane_g5

0x098c,	// (0x0005b36a) volume_set_pane_g6

0x0996,	// (0x0005b374) volume_set_pane_g7

0x09a0,	// (0x0005b37e) volume_set_pane_g8

0x09aa,	// (0x0005b388) volume_set_pane_g9

0x09b4,	// (0x0005b392) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0006a31a) volume_set_pane_g

0x9b8f,	// (0x0006456d) indicator_pane_ParamLimits

0x9b8f,	// (0x0006456d) indicator_pane

0x9bbb,	// (0x00064599) main_idle_pane_g2_ParamLimits

0x9bbb,	// (0x00064599) main_idle_pane_g2

0x9bf3,	// (0x000645d1) main_pane_idle_g1_ParamLimits

0x9bf3,	// (0x000645d1) main_pane_idle_g1

0x7c1f,	// (0x000625fd) popup_clock_digital_analogue_window_ParamLimits

0x7c1f,	// (0x000625fd) popup_clock_digital_analogue_window

0x9c1d,	// (0x000645fb) soft_indicator_pane_ParamLimits

0x9c1d,	// (0x000645fb) soft_indicator_pane

0x9c39,	// (0x00064617) wallpaper_pane_ParamLimits

0x9c39,	// (0x00064617) wallpaper_pane

0x7ba2,	// (0x00062580) wallpaper_pane_g1

0x9c4b,	// (0x00064629) indicator_pane_g1_ParamLimits

0x9c4b,	// (0x00064629) indicator_pane_g1

0x3d21,	// (0x0005e6ff) navi_navi_icon_text_pane_srt_g1

0x7c4d,	// (0x0006262b) soft_indicator_pane_t1

0x7c67,	// (0x00062645) aid_ps_area_pane

0x9c64,	// (0x00064642) aid_ps_clock_pane

0x7c78,	// (0x00062656) aid_ps_indicator_pane

0x7c84,	// (0x00062662) indicator_ps_pane_ParamLimits

0x7c84,	// (0x00062662) indicator_ps_pane

0x7c93,	// (0x00062671) power_save_pane_g1_ParamLimits

0x7c93,	// (0x00062671) power_save_pane_g1

0x7c9f,	// (0x0006267d) power_save_pane_g2_ParamLimits

0x7c9f,	// (0x0006267d) power_save_pane_g2

0xde7a,	// (0x00068858) aid_navinavi_width_pane

0x7c67,	// (0x00062645) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00069f48) power_save_pane_g_ParamLimits

0xf56a,	// (0x00069f48) power_save_pane_g

0x7cad,	// (0x0006268b) power_save_pane_t1_ParamLimits

0x7cad,	// (0x0006268b) power_save_pane_t1

0x9c64,	// (0x00064642) aid_ps_clock_pane_ParamLimits

0x7c78,	// (0x00062656) aid_ps_indicator_pane_ParamLimits

0x7cbf,	// (0x0006269d) power_save_pane_t4_ParamLimits

0x7cbf,	// (0x0006269d) power_save_pane_t4

0x0001,

0xf56f,	// (0x00069f4d) power_save_pane_t_ParamLimits

0xf56f,	// (0x00069f4d) power_save_pane_t

0x7ce9,	// (0x000626c7) power_save_t3_ParamLimits

0x7ce9,	// (0x000626c7) power_save_t3

0x7cd4,	// (0x000626b2) power_save_t2_ParamLimits

0x7cd4,	// (0x000626b2) power_save_t2

0x8525,	// (0x00062f03) indicator_ps_pane_g1

0x9c72,	// (0x00064650) ai_gene_pane_ParamLimits

0x9c72,	// (0x00064650) ai_gene_pane

0x9c89,	// (0x00064667) ai_links_pane_ParamLimits

0x9c89,	// (0x00064667) ai_links_pane

0x9ca1,	// (0x0006467f) indicator_pane_cp1_ParamLimits

0x9ca1,	// (0x0006467f) indicator_pane_cp1

0x9cb0,	// (0x0006468e) main_pane_idle_g1_cp_ParamLimits

0x9cb0,	// (0x0006468e) main_pane_idle_g1_cp

0x852e,	// (0x00062f0c) popup_ai_links_title_window

0x9cc8,	// (0x000646a6) soft_indicator_pane_cp1_ParamLimits

0x9cc8,	// (0x000646a6) soft_indicator_pane_cp1

0x34d7,	// (0x0005deb5) ai_links_pane_g1

0x34e0,	// (0x0005debe) grid_ai_links_pane

0xc461,	// (0x00066e3f) ai_gene_pane_1

0x34c5,	// (0x0005dea3) ai_gene_pane_2

0x34ce,	// (0x0005deac) list_highlight_pane_cp4

0xc43d,	// (0x00066e1b) cell_ai_link_pane_ParamLimits

0xc43d,	// (0x00066e1b) cell_ai_link_pane

0x3494,	// (0x0005de72) cell_ai_link_pane_g1

0x8722,	// (0x00063100) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0006a2f5) cell_ai_link_pane_g

0x7bac,	// (0x0006258a) grid_highlight_cp2

0x7bac,	// (0x0006258a) bg_popup_sub_pane_cp1

0x8545,	// (0x00062f23) popup_ai_links_title_window_t1

0x33e0,	// (0x0005ddbe) ai_gene_pane_1_g1_ParamLimits

0x33e0,	// (0x0005ddbe) ai_gene_pane_1_g1

0x33ec,	// (0x0005ddca) ai_gene_pane_1_g2_ParamLimits

0x33ec,	// (0x0005ddca) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0006a2eb) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0006a2eb) ai_gene_pane_1_g

0x33f9,	// (0x0005ddd7) ai_gene_pane_1_t1_ParamLimits

0x33f9,	// (0x0005ddd7) ai_gene_pane_1_t1

0x342d,	// (0x0005de0b) grid_ai_soft_ind_pane

0x33cb,	// (0x0005dda9) ai_gene_pane_2_t1_ParamLimits

0x33cb,	// (0x0005dda9) ai_gene_pane_2_t1

0x9cdc,	// (0x000646ba) main_pane_empty_t1_ParamLimits

0x9cdc,	// (0x000646ba) main_pane_empty_t1

0x9cf4,	// (0x000646d2) main_pane_empty_t2_ParamLimits

0x9cf4,	// (0x000646d2) main_pane_empty_t2

0x9d09,	// (0x000646e7) main_pane_empty_t3_ParamLimits

0x9d09,	// (0x000646e7) main_pane_empty_t3

0x9d1b,	// (0x000646f9) main_pane_empty_t4_ParamLimits

0x9d1b,	// (0x000646f9) main_pane_empty_t4

0x9d2d,	// (0x0006470b) main_pane_empty_t5_ParamLimits

0x9d2d,	// (0x0006470b) main_pane_empty_t5

0x0004,

0xf574,	// (0x00069f52) main_pane_empty_t_ParamLimits

0xf574,	// (0x00069f52) main_pane_empty_t

0x8b08,	// (0x000634e6) bg_popup_window_pane_ParamLimits

0x8b08,	// (0x000634e6) bg_popup_window_pane

0x312d,	// (0x0005db0b) find_popup_pane_cp2_ParamLimits

0x312d,	// (0x0005db0b) find_popup_pane_cp2

0x3139,	// (0x0005db17) heading_pane_ParamLimits

0x3139,	// (0x0005db17) heading_pane

0x7bac,	// (0x0006258a) bg_popup_sub_pane

0xc36c,	// (0x00066d4a) bg_popup_window_pane_g1_ParamLimits

0xc36c,	// (0x00066d4a) bg_popup_window_pane_g1

0xc37b,	// (0x00066d59) bg_popup_window_pane_g2_ParamLimits

0xc37b,	// (0x00066d59) bg_popup_window_pane_g2

0xc387,	// (0x00066d65) bg_popup_window_pane_g3_ParamLimits

0xc387,	// (0x00066d65) bg_popup_window_pane_g3

0xc393,	// (0x00066d71) bg_popup_window_pane_g4_ParamLimits

0xc393,	// (0x00066d71) bg_popup_window_pane_g4

0xc3a2,	// (0x00066d80) bg_popup_window_pane_g5_ParamLimits

0xc3a2,	// (0x00066d80) bg_popup_window_pane_g5

0xc3b2,	// (0x00066d90) bg_popup_window_pane_g6_ParamLimits

0xc3b2,	// (0x00066d90) bg_popup_window_pane_g6

0xc3be,	// (0x00066d9c) bg_popup_window_pane_g7_ParamLimits

0xc3be,	// (0x00066d9c) bg_popup_window_pane_g7

0xc3cd,	// (0x00066dab) bg_popup_window_pane_g8_ParamLimits

0xc3cd,	// (0x00066dab) bg_popup_window_pane_g8

0xc3dc,	// (0x00066dba) bg_popup_window_pane_g9_ParamLimits

0xc3dc,	// (0x00066dba) bg_popup_window_pane_g9

0x3113,	// (0x0005daf1) bg_popup_window_pane_g10_ParamLimits

0x3113,	// (0x0005daf1) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0006a2b3) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0006a2b3) bg_popup_window_pane_g

0x303c,	// (0x0005da1a) bg_popup_heading_pane_ParamLimits

0x303c,	// (0x0005da1a) bg_popup_heading_pane

0x0ace,	// (0x0005b4ac) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ace,	// (0x0005b4ac) tabs_4_passive_pane_cp_srt

0x0ae0,	// (0x0005b4be) tabs_4_passive_pane_srt_ParamLimits

0x3050,	// (0x0005da2e) heading_pane_g2

0x0ae0,	// (0x0005b4be) tabs_4_passive_pane_srt

0x23db,	// (0x0005cdb9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x23db,	// (0x0005cdb9) bg_passive_tab_pane_cp3_srt

0x3058,	// (0x0005da36) heading_pane_t1_ParamLimits

0x3058,	// (0x0005da36) heading_pane_t1

0x306f,	// (0x0005da4d) heading_pane_t2_ParamLimits

0x306f,	// (0x0005da4d) heading_pane_t2

0x0001,

0xf8d0,	// (0x0006a2ae) heading_pane_t_ParamLimits

0xf8d0,	// (0x0006a2ae) heading_pane_t

0x2b67,	// (0x0005d545) bg_popup_heading_pane_g1

0x2c16,	// (0x0005d5f4) bg_popup_heading_pane_g2

0x2c20,	// (0x0005d5fe) bg_popup_heading_pane_g3

0x2c2a,	// (0x0005d608) bg_popup_heading_pane_g4

0x2c34,	// (0x0005d612) bg_popup_heading_pane_g5

0x2c3e,	// (0x0005d61c) bg_popup_heading_pane_g6

0x2c46,	// (0x0005d624) bg_popup_heading_pane_g7

0x2c4e,	// (0x0005d62c) bg_popup_heading_pane_g8

0x2c58,	// (0x0005d636) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0006a26a) bg_popup_heading_pane_g

0x234f,	// (0x0005cd2d) bg_popup_sub_pane_g1

0x235f,	// (0x0005cd3d) bg_popup_sub_pane_g2

0x2357,	// (0x0005cd35) bg_popup_sub_pane_g3

0x236f,	// (0x0005cd4d) bg_popup_sub_pane_g4

0x2367,	// (0x0005cd45) bg_popup_sub_pane_g5

0x2377,	// (0x0005cd55) bg_popup_sub_pane_g6

0x237f,	// (0x0005cd5d) bg_popup_sub_pane_g7

0x238f,	// (0x0005cd6d) bg_popup_sub_pane_g8

0x2387,	// (0x0005cd65) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0006a244) bg_popup_sub_pane_g

0x7cfe,	// (0x000626dc) bg_popup_window_pane_cp5_ParamLimits

0x7cfe,	// (0x000626dc) bg_popup_window_pane_cp5

0x8562,	// (0x00062f40) popup_note_window_g1_ParamLimits

0x8562,	// (0x00062f40) popup_note_window_g1

0x856e,	// (0x00062f4c) popup_note_window_t1_ParamLimits

0x856e,	// (0x00062f4c) popup_note_window_t1

0x8584,	// (0x00062f62) popup_note_window_t2_ParamLimits

0x8584,	// (0x00062f62) popup_note_window_t2

0x859a,	// (0x00062f78) popup_note_window_t3_ParamLimits

0x859a,	// (0x00062f78) popup_note_window_t3

0x85b0,	// (0x00062f8e) popup_note_window_t4_ParamLimits

0x85b0,	// (0x00062f8e) popup_note_window_t4

0x85d8,	// (0x00062fb6) popup_note_window_t5_ParamLimits

0x85d8,	// (0x00062fb6) popup_note_window_t5

0x0004,

0xf57f,	// (0x00069f5d) popup_note_window_t_ParamLimits

0xf57f,	// (0x00069f5d) popup_note_window_t

0x8622,	// (0x00063000) bg_popup_window_pane_cp6_ParamLimits

0x8622,	// (0x00063000) bg_popup_window_pane_cp6

0x2ae3,	// (0x0005d4c1) popup_note_image_window_g1_ParamLimits

0x2ae3,	// (0x0005d4c1) popup_note_image_window_g1

0x2aef,	// (0x0005d4cd) popup_note_image_window_g2_ParamLimits

0x2aef,	// (0x0005d4cd) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0006a238) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0006a238) popup_note_image_window_g

0x2b08,	// (0x0005d4e6) popup_note_image_window_t1_ParamLimits

0x2b08,	// (0x0005d4e6) popup_note_image_window_t1

0x2b21,	// (0x0005d4ff) popup_note_image_window_t2_ParamLimits

0x2b21,	// (0x0005d4ff) popup_note_image_window_t2

0x2b3a,	// (0x0005d518) popup_note_image_window_t3_ParamLimits

0x2b3a,	// (0x0005d518) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0006a23d) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0006a23d) popup_note_image_window_t

0x29a3,	// (0x0005d381) bg_popup_window_pane_cp7_ParamLimits

0x29a3,	// (0x0005d381) bg_popup_window_pane_cp7

0x29d3,	// (0x0005d3b1) popup_note_wait_window_g1_ParamLimits

0x29d3,	// (0x0005d3b1) popup_note_wait_window_g1

0x29df,	// (0x0005d3bd) popup_note_wait_window_g2_ParamLimits

0x29df,	// (0x0005d3bd) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0006a226) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0006a226) popup_note_wait_window_g

0x29f7,	// (0x0005d3d5) popup_note_wait_window_t1_ParamLimits

0x29f7,	// (0x0005d3d5) popup_note_wait_window_t1

0x2a1e,	// (0x0005d3fc) popup_note_wait_window_t2_ParamLimits

0x2a1e,	// (0x0005d3fc) popup_note_wait_window_t2

0x2a3c,	// (0x0005d41a) popup_note_wait_window_t3_ParamLimits

0x2a3c,	// (0x0005d41a) popup_note_wait_window_t3

0x2a4f,	// (0x0005d42d) popup_note_wait_window_t4_ParamLimits

0x2a4f,	// (0x0005d42d) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0006a22d) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0006a22d) popup_note_wait_window_t

0x2a74,	// (0x0005d452) wait_bar_pane_ParamLimits

0x2a74,	// (0x0005d452) wait_bar_pane

0x7bac,	// (0x0006258a) wait_anim_pane

0x7bac,	// (0x0006258a) wait_border_pane

0x7ba2,	// (0x00062580) wait_anim_pane_g1

0x7ba2,	// (0x00062580) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0006a0e6) wait_anim_pane_g

0x2947,	// (0x0005d325) wait_border_pane_g1

0x2952,	// (0x0005d330) wait_border_pane_g2

0x295b,	// (0x0005d339) wait_border_pane_g3

0x0002,

0xf841,	// (0x0006a21f) wait_border_pane_g

0x27b1,	// (0x0005d18f) bg_popup_window_pane_cp16_ParamLimits

0x27b1,	// (0x0005d18f) bg_popup_window_pane_cp16

0x28b1,	// (0x0005d28f) indicator_popup_pane_cp4_ParamLimits

0x28b1,	// (0x0005d28f) indicator_popup_pane_cp4

0x28c5,	// (0x0005d2a3) popup_query_data_window_t1_ParamLimits

0x28c5,	// (0x0005d2a3) popup_query_data_window_t1

0x28d7,	// (0x0005d2b5) popup_query_data_window_t2_ParamLimits

0x28d7,	// (0x0005d2b5) popup_query_data_window_t2

0x28f0,	// (0x0005d2ce) popup_query_data_window_t3_ParamLimits

0x28f0,	// (0x0005d2ce) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0006a218) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0006a218) popup_query_data_window_t

0x290a,	// (0x0005d2e8) query_popup_data_pane_ParamLimits

0x290a,	// (0x0005d2e8) query_popup_data_pane

0x291e,	// (0x0005d2fc) query_popup_data_pane_cp1_ParamLimits

0x291e,	// (0x0005d2fc) query_popup_data_pane_cp1

0x27b1,	// (0x0005d18f) bg_popup_window_pane_cp10_ParamLimits

0x27b1,	// (0x0005d18f) bg_popup_window_pane_cp10

0x27e3,	// (0x0005d1c1) indicator_popup_pane_ParamLimits

0x27e3,	// (0x0005d1c1) indicator_popup_pane

0x2805,	// (0x0005d1e3) popup_query_code_window_t1_ParamLimits

0x2805,	// (0x0005d1e3) popup_query_code_window_t1

0x281f,	// (0x0005d1fd) popup_query_code_window_t2_ParamLimits

0x281f,	// (0x0005d1fd) popup_query_code_window_t2

0x2868,	// (0x0005d246) popup_query_code_window_t3_ParamLimits

0x2868,	// (0x0005d246) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0006a211) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0006a211) popup_query_code_window_t

0x2897,	// (0x0005d275) query_popup_pane_ParamLimits

0x2897,	// (0x0005d275) query_popup_pane

0x8622,	// (0x00063000) bg_popup_window_pane_cp15_ParamLimits

0x8622,	// (0x00063000) bg_popup_window_pane_cp15

0x8642,	// (0x00063020) indicator_popup_pane_cp1_ParamLimits

0x8642,	// (0x00063020) indicator_popup_pane_cp1

0x8655,	// (0x00063033) indicator_popup_pane_cp2_ParamLimits

0x8655,	// (0x00063033) indicator_popup_pane_cp2

0x8670,	// (0x0006304e) popup_query_data_code_window_g1_ParamLimits

0x8670,	// (0x0006304e) popup_query_data_code_window_g1

0x8683,	// (0x00063061) popup_query_data_code_window_t1_ParamLimits

0x8683,	// (0x00063061) popup_query_data_code_window_t1

0x8695,	// (0x00063073) popup_query_data_code_window_t2_ParamLimits

0x8695,	// (0x00063073) popup_query_data_code_window_t2

0x86a7,	// (0x00063085) popup_query_data_code_window_t3_ParamLimits

0x86a7,	// (0x00063085) popup_query_data_code_window_t3

0x86bd,	// (0x0006309b) popup_query_data_code_window_t4_ParamLimits

0x86bd,	// (0x0006309b) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00069f68) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00069f68) popup_query_data_code_window_t

0x06db,	// (0x0005b0b9) list_single_midp_graphic_pane_g3

0x86d7,	// (0x000630b5) query_popup_data_pane_cp2_ParamLimits

0x86ea,	// (0x000630c8) query_popup_pane_cp2_ParamLimits

0x86ea,	// (0x000630c8) query_popup_pane_cp2

0x7bac,	// (0x0006258a) bg_popup_window_pane_cp11

0x279d,	// (0x0005d17b) heading_pane_cp5

0x8783,	// (0x00063161) listscroll_popup_info_pane

0x7bac,	// (0x0006258a) input_focus_pane_cp3

0x8705,	// (0x000630e3) query_popup_pane_t1

0x8713,	// (0x000630f1) list_popup_info_pane_ParamLimits

0x8713,	// (0x000630f1) list_popup_info_pane

0x8722,	// (0x00063100) listscroll_popup_info_pane_g1

0x872a,	// (0x00063108) scroll_pane_cp7

0x8734,	// (0x00063112) popup_info_list_pane_t1_ParamLimits

0x8734,	// (0x00063112) popup_info_list_pane_t1

0x874e,	// (0x0006312c) popup_info_list_pane_t2_ParamLimits

0x874e,	// (0x0006312c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00069f71) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00069f71) popup_info_list_pane_t

0x7bac,	// (0x0006258a) bg_popup_window_pane_cp12

0x3d3b,	// (0x0005e719) find_popup_pane

0x7bfa,	// (0x000625d8) bg_popup_window_pane_cp3

0x8768,	// (0x00063146) heading_pane_cp3

0x8774,	// (0x00063152) listscroll_popup_graphic_pane

0x7bac,	// (0x0006258a) bg_popup_window_pane_cp4

0x9d8f,	// (0x0006476d) heading_pane_cp4

0x8783,	// (0x00063161) listscroll_popup_colour_pane

0x9d99,	// (0x00064777) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9d99,	// (0x00064777) cell_large_graphic_colour_none_popup_pane

0x9dad,	// (0x0006478b) grid_large_graphic_colour_popup_pane_ParamLimits

0x9dad,	// (0x0006478b) grid_large_graphic_colour_popup_pane

0x9dd1,	// (0x000647af) listscroll_popup_colour_pane_g1_ParamLimits

0x9dd1,	// (0x000647af) listscroll_popup_colour_pane_g1

0x9de8,	// (0x000647c6) listscroll_popup_colour_pane_g2_ParamLimits

0x9de8,	// (0x000647c6) listscroll_popup_colour_pane_g2

0x9dff,	// (0x000647dd) listscroll_popup_colour_pane_g3_ParamLimits

0x9dff,	// (0x000647dd) listscroll_popup_colour_pane_g3

0x9e0f,	// (0x000647ed) listscroll_popup_colour_pane_g4_ParamLimits

0x9e0f,	// (0x000647ed) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00069f76) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00069f76) listscroll_popup_colour_pane_g

0x878b,	// (0x00063169) scroll_pane_cp6_ParamLimits

0x878b,	// (0x00063169) scroll_pane_cp6

0x9e1f,	// (0x000647fd) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e1f,	// (0x000647fd) cell_large_graphic_colour_popup_pane

0x879d,	// (0x0006317b) cell_large_graphic_colour_none_popup_pane_t1

0x7bac,	// (0x0006258a) grid_highlight_pane_cp5

0x87ac,	// (0x0006318a) cell_large_graphic_colour_popup_pane_g1

0x87b4,	// (0x00063192) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00069f7f) cell_large_graphic_colour_popup_pane_g

0x87bc,	// (0x0006319a) cell_large_graphic_colour_popup_pane_g2_copy1

0x87c5,	// (0x000631a3) grid_highlight_pane_cp4

0x87cd,	// (0x000631ab) bg_popup_window_pane_cp8_ParamLimits

0x87cd,	// (0x000631ab) bg_popup_window_pane_cp8

0x87e8,	// (0x000631c6) popup_snote_single_text_window_g1_ParamLimits

0x87e8,	// (0x000631c6) popup_snote_single_text_window_g1

0x87fa,	// (0x000631d8) popup_snote_single_text_window_t1_ParamLimits

0x87fa,	// (0x000631d8) popup_snote_single_text_window_t1

0x880d,	// (0x000631eb) popup_snote_single_text_window_t2_ParamLimits

0x880d,	// (0x000631eb) popup_snote_single_text_window_t2

0x8820,	// (0x000631fe) popup_snote_single_text_window_t3_ParamLimits

0x8820,	// (0x000631fe) popup_snote_single_text_window_t3

0x8859,	// (0x00063237) popup_snote_single_text_window_t4_ParamLimits

0x8859,	// (0x00063237) popup_snote_single_text_window_t4

0x888d,	// (0x0006326b) popup_snote_single_text_window_t5_ParamLimits

0x888d,	// (0x0006326b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00069f84) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00069f84) popup_snote_single_text_window_t

0x88bc,	// (0x0006329a) bg_popup_window_pane_cp9_ParamLimits

0x88bc,	// (0x0006329a) bg_popup_window_pane_cp9

0x87e8,	// (0x000631c6) popup_snote_single_graphic_window_g1_ParamLimits

0x87e8,	// (0x000631c6) popup_snote_single_graphic_window_g1

0x88ca,	// (0x000632a8) popup_snote_single_graphic_window_g2_ParamLimits

0x88ca,	// (0x000632a8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00069f8f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00069f8f) popup_snote_single_graphic_window_g

0x88d6,	// (0x000632b4) popup_snote_single_graphic_window_t1_ParamLimits

0x88d6,	// (0x000632b4) popup_snote_single_graphic_window_t1

0x88e9,	// (0x000632c7) popup_snote_single_graphic_window_t2_ParamLimits

0x88e9,	// (0x000632c7) popup_snote_single_graphic_window_t2

0x88fc,	// (0x000632da) popup_snote_single_graphic_window_t3_ParamLimits

0x88fc,	// (0x000632da) popup_snote_single_graphic_window_t3

0x8935,	// (0x00063313) popup_snote_single_graphic_window_t4_ParamLimits

0x8935,	// (0x00063313) popup_snote_single_graphic_window_t4

0x8969,	// (0x00063347) popup_snote_single_graphic_window_t5_ParamLimits

0x8969,	// (0x00063347) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00069f94) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00069f94) popup_snote_single_graphic_window_t

0x3c79,	// (0x0005e657) grid_graphic_popup_pane_ParamLimits

0x3c79,	// (0x0005e657) grid_graphic_popup_pane

0x3ca7,	// (0x0005e685) listscroll_popup_graphic_pane_g1_ParamLimits

0x3ca7,	// (0x0005e685) listscroll_popup_graphic_pane_g1

0xc6d3,	// (0x000670b1) listscroll_popup_graphic_pane_g2_ParamLimits

0xc6d3,	// (0x000670b1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0006a38e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0006a38e) listscroll_popup_graphic_pane_g

0x3ccf,	// (0x0005e6ad) scroll_pane_cp5

0xc672,	// (0x00067050) cell_graphic_popup_pane_ParamLimits

0xc672,	// (0x00067050) cell_graphic_popup_pane

0x3a68,	// (0x0005e446) cell_graphic_popup_pane_g1

0x3a70,	// (0x0005e44e) cell_graphic_popup_pane_g2

0x87bc,	// (0x0006319a) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0006a387) cell_graphic_popup_pane_g

0x3a79,	// (0x0005e457) cell_graphic_popup_pane_t2

0x87c5,	// (0x000631a3) grid_highlight_pane_cp3

0x89aa,	// (0x00063388) list_gen_pane_ParamLimits

0x89aa,	// (0x00063388) list_gen_pane

0x89d2,	// (0x000633b0) scroll_pane

0xc629,	// (0x00067007) bg_list_pane_g1_ParamLimits

0xc629,	// (0x00067007) bg_list_pane_g1

0x39dd,	// (0x0005e3bb) bg_list_pane_g2_ParamLimits

0x39dd,	// (0x0005e3bb) bg_list_pane_g2

0x39f2,	// (0x0005e3d0) bg_list_pane_g3_ParamLimits

0x39f2,	// (0x0005e3d0) bg_list_pane_g3

0x3a06,	// (0x0005e3e4) bg_list_pane_g4_ParamLimits

0x3a06,	// (0x0005e3e4) bg_list_pane_g4

0xc646,	// (0x00067024) bg_list_pane_g5_ParamLimits

0xc646,	// (0x00067024) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0006a37c) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0006a37c) bg_list_pane_g

0xc5c3,	// (0x00066fa1) list_double2_graphic_large_graphic_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double2_graphic_large_graphic_pane

0xc5c3,	// (0x00066fa1) list_double2_graphic_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double2_graphic_pane

0xc5c3,	// (0x00066fa1) list_double2_large_graphic_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double2_large_graphic_pane

0xc5c3,	// (0x00066fa1) list_double2_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double2_pane

0xc5c3,	// (0x00066fa1) list_double_graphic_heading_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_graphic_heading_pane

0xc5c3,	// (0x00066fa1) list_double_graphic_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_graphic_pane

0xc5c3,	// (0x00066fa1) list_double_heading_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_heading_pane

0xc5c3,	// (0x00066fa1) list_double_large_graphic_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_large_graphic_pane

0xc5c3,	// (0x00066fa1) list_double_number_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_number_pane

0xc5c3,	// (0x00066fa1) list_double_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_pane

0xc5c3,	// (0x00066fa1) list_double_time_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_double_time_pane

0xc5c3,	// (0x00066fa1) list_setting_number_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_setting_number_pane

0xc5c3,	// (0x00066fa1) list_setting_pane_ParamLimits

0xc5c3,	// (0x00066fa1) list_setting_pane

0xc5d7,	// (0x00066fb5) list_single_2graphic_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_2graphic_pane

0xc5d7,	// (0x00066fb5) list_single_graphic_heading_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_graphic_heading_pane

0xc5d7,	// (0x00066fb5) list_single_graphic_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_graphic_pane

0xc5d7,	// (0x00066fb5) list_single_heading_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_heading_pane

0xc5d7,	// (0x00066fb5) list_single_large_graphic_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_large_graphic_pane

0xc5d7,	// (0x00066fb5) list_single_number_heading_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_number_heading_pane

0xc5d7,	// (0x00066fb5) list_single_number_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_number_pane

0xc5d7,	// (0x00066fb5) list_single_pane_ParamLimits

0xc5d7,	// (0x00066fb5) list_single_pane

0x7bac,	// (0x0006258a) list_highlight_pane_cp1

0xdeb3,	// (0x00068891) list_single_pane_g1_ParamLimits

0xdeb3,	// (0x00068891) list_single_pane_g1

0x22e7,	// (0x0005ccc5) list_single_pane_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_single_pane_g

0xe61e,	// (0x00068ffc) list_single_pane_t1_ParamLimits

0xe61e,	// (0x00068ffc) list_single_pane_t1

0xdeb3,	// (0x00068891) list_single_number_pane_g1_ParamLimits

0xdeb3,	// (0x00068891) list_single_number_pane_g1

0x22e7,	// (0x0005ccc5) list_single_number_pane_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_single_number_pane_g

0xe54f,	// (0x00068f2d) list_single_number_pane_t1_ParamLimits

0xe54f,	// (0x00068f2d) list_single_number_pane_t1

0xe60c,	// (0x00068fea) list_single_number_pane_t2_ParamLimits

0xe60c,	// (0x00068fea) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0006a33d) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0006a33d) list_single_number_pane_t

0x9e4a,	// (0x00064828) list_single_graphic_pane_g1_ParamLimits

0x9e4a,	// (0x00064828) list_single_graphic_pane_g1

0xdeb3,	// (0x00068891) list_single_graphic_pane_g2_ParamLimits

0xdeb3,	// (0x00068891) list_single_graphic_pane_g2

0x22e7,	// (0x0005ccc5) list_single_graphic_pane_g3_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00069f9f) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00069f9f) list_single_graphic_pane_g

0x9e56,	// (0x00064834) list_single_graphic_pane_t1_ParamLimits

0x9e56,	// (0x00064834) list_single_graphic_pane_t1

0x9e6c,	// (0x0006484a) list_single_heading_pane_g1_ParamLimits

0x9e6c,	// (0x0006484a) list_single_heading_pane_g1

0x22e7,	// (0x0005ccc5) list_single_heading_pane_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00069fa6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00069fa6) list_single_heading_pane_g

0x9e7f,	// (0x0006485d) list_single_heading_pane_t1_ParamLimits

0x9e7f,	// (0x0006485d) list_single_heading_pane_t1

0x9e95,	// (0x00064873) list_single_heading_pane_t2_ParamLimits

0x9e95,	// (0x00064873) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00069fab) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00069fab) list_single_heading_pane_t

0xdeb3,	// (0x00068891) list_single_number_heading_pane_g1_ParamLimits

0xdeb3,	// (0x00068891) list_single_number_heading_pane_g1

0x22e7,	// (0x0005ccc5) list_single_number_heading_pane_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_single_number_heading_pane_g

0x9ea7,	// (0x00064885) list_single_number_heading_pane_t1_ParamLimits

0x9ea7,	// (0x00064885) list_single_number_heading_pane_t1

0xdebf,	// (0x0006889d) list_single_number_heading_pane_t2_ParamLimits

0xdebf,	// (0x0006889d) list_single_number_heading_pane_t2

0xded1,	// (0x000688af) list_single_number_heading_pane_t3_ParamLimits

0xded1,	// (0x000688af) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00069fb5) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00069fb5) list_single_number_heading_pane_t

0x9ebd,	// (0x0006489b) list_single_graphic_heading_pane_g1_ParamLimits

0x9ebd,	// (0x0006489b) list_single_graphic_heading_pane_g1

0x9ed5,	// (0x000648b3) list_single_graphic_heading_pane_g4_ParamLimits

0x9ed5,	// (0x000648b3) list_single_graphic_heading_pane_g4

0x22e7,	// (0x0005ccc5) list_single_graphic_heading_pane_g5_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00069fbc) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00069fbc) list_single_graphic_heading_pane_g

0x9ea7,	// (0x00064885) list_single_graphic_heading_pane_t1_ParamLimits

0x9ea7,	// (0x00064885) list_single_graphic_heading_pane_t1

0x9ee6,	// (0x000648c4) list_single_graphic_heading_pane_t2_ParamLimits

0x9ee6,	// (0x000648c4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00069fc3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00069fc3) list_single_graphic_heading_pane_t

0x3b0a,	// (0x0005e4e8) list_single_large_graphic_pane_g1_ParamLimits

0x3b0a,	// (0x0005e4e8) list_single_large_graphic_pane_g1

0xdeb3,	// (0x00068891) list_single_large_graphic_pane_g2_ParamLimits

0xdeb3,	// (0x00068891) list_single_large_graphic_pane_g2

0x22e7,	// (0x0005ccc5) list_single_large_graphic_pane_g3_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00069fc8) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00069fc8) list_single_large_graphic_pane_g

0x2952,	// (0x0005d330) wait_border_pane_g2_copy1

0x9efe,	// (0x000648dc) list_single_large_graphic_pane_g4_cp2

0xdee3,	// (0x000688c1) list_single_large_graphic_pane_t1_ParamLimits

0xdee3,	// (0x000688c1) list_single_large_graphic_pane_t1

0x5110,	// (0x0005faee) list_double_pane_g1_ParamLimits

0x5110,	// (0x0005faee) list_double_pane_g1

0x9f06,	// (0x000648e4) list_double_pane_g2_ParamLimits

0x9f06,	// (0x000648e4) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00069fcf) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00069fcf) list_double_pane_g

0x9f12,	// (0x000648f0) list_double_pane_t1_ParamLimits

0x9f12,	// (0x000648f0) list_double_pane_t1

0x9f28,	// (0x00064906) list_double_pane_t2_ParamLimits

0x9f28,	// (0x00064906) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00069fd4) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00069fd4) list_double_pane_t

0x9f3a,	// (0x00064918) list_double2_pane_g1_ParamLimits

0x9f3a,	// (0x00064918) list_double2_pane_g1

0x9f4b,	// (0x00064929) list_double2_pane_g2_ParamLimits

0x9f4b,	// (0x00064929) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00069fd9) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00069fd9) list_double2_pane_g

0x9f57,	// (0x00064935) list_double2_pane_t1_ParamLimits

0x9f57,	// (0x00064935) list_double2_pane_t1

0x9f6d,	// (0x0006494b) list_double2_pane_t2_ParamLimits

0x9f6d,	// (0x0006494b) list_double2_pane_t2

0x0001,

0xf600,	// (0x00069fde) list_double2_pane_t_ParamLimits

0xf600,	// (0x00069fde) list_double2_pane_t

0x5110,	// (0x0005faee) list_double_number_pane_g1_ParamLimits

0x5110,	// (0x0005faee) list_double_number_pane_g1

0x9f06,	// (0x000648e4) list_double_number_pane_g2_ParamLimits

0x9f06,	// (0x000648e4) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00069fcf) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00069fcf) list_double_number_pane_g

0x9f7f,	// (0x0006495d) list_double_number_pane_t1_ParamLimits

0x9f7f,	// (0x0006495d) list_double_number_pane_t1

0x9f91,	// (0x0006496f) list_double_number_pane_t2_ParamLimits

0x9f91,	// (0x0006496f) list_double_number_pane_t2

0x9fa7,	// (0x00064985) list_double_number_pane_t3_ParamLimits

0x9fa7,	// (0x00064985) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00069fe3) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00069fe3) list_double_number_pane_t

0x9fb9,	// (0x00064997) list_double_graphic_pane_g1_ParamLimits

0x9fb9,	// (0x00064997) list_double_graphic_pane_g1

0x9fc5,	// (0x000649a3) list_double_graphic_pane_g2_ParamLimits

0x9fc5,	// (0x000649a3) list_double_graphic_pane_g2

0x9fd4,	// (0x000649b2) list_double_graphic_pane_g3_ParamLimits

0x9fd4,	// (0x000649b2) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00069fea) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00069fea) list_double_graphic_pane_g

0x9fec,	// (0x000649ca) list_double_graphic_pane_t1_ParamLimits

0x9fec,	// (0x000649ca) list_double_graphic_pane_t1

0xa002,	// (0x000649e0) list_double_graphic_pane_t2_ParamLimits

0xa002,	// (0x000649e0) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00069ff3) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00069ff3) list_double_graphic_pane_t

0xa014,	// (0x000649f2) list_double2_graphic_pane_g1_ParamLimits

0xa014,	// (0x000649f2) list_double2_graphic_pane_g1

0xa020,	// (0x000649fe) list_double2_graphic_pane_g2_ParamLimits

0xa020,	// (0x000649fe) list_double2_graphic_pane_g2

0xa02c,	// (0x00064a0a) list_double2_graphic_pane_g3_ParamLimits

0xa02c,	// (0x00064a0a) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00069ff8) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00069ff8) list_double2_graphic_pane_g

0xa038,	// (0x00064a16) list_double2_graphic_pane_t1_ParamLimits

0xa038,	// (0x00064a16) list_double2_graphic_pane_t1

0xa04e,	// (0x00064a2c) list_double2_graphic_pane_t2_ParamLimits

0xa04e,	// (0x00064a2c) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00069fff) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00069fff) list_double2_graphic_pane_t

0xa060,	// (0x00064a3e) list_double_large_graphic_pane_g1_ParamLimits

0xa060,	// (0x00064a3e) list_double_large_graphic_pane_g1

0xa07f,	// (0x00064a5d) list_double_large_graphic_pane_g2_ParamLimits

0xa07f,	// (0x00064a5d) list_double_large_graphic_pane_g2

0x9f06,	// (0x000648e4) list_double_large_graphic_pane_g3_ParamLimits

0x9f06,	// (0x000648e4) list_double_large_graphic_pane_g3

0xa095,	// (0x00064a73) list_double_large_graphic_pane_g4_ParamLimits

0xa095,	// (0x00064a73) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0006a004) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0006a004) list_double_large_graphic_pane_g

0xa0a8,	// (0x00064a86) list_double_large_graphic_pane_t1_ParamLimits

0xa0a8,	// (0x00064a86) list_double_large_graphic_pane_t1

0xa0c1,	// (0x00064a9f) list_double_large_graphic_pane_t2_ParamLimits

0xa0c1,	// (0x00064a9f) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006a00f) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006a00f) list_double_large_graphic_pane_t

0xa0d3,	// (0x00064ab1) list_double2_large_graphic_pane_g1_ParamLimits

0xa0d3,	// (0x00064ab1) list_double2_large_graphic_pane_g1

0xa0df,	// (0x00064abd) list_double2_large_graphic_pane_g2_ParamLimits

0xa0df,	// (0x00064abd) list_double2_large_graphic_pane_g2

0xa02c,	// (0x00064a0a) list_double2_large_graphic_pane_g3_ParamLimits

0xa02c,	// (0x00064a0a) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0006a014) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0006a014) list_double2_large_graphic_pane_g

0xa0f0,	// (0x00064ace) list_double2_large_graphic_pane_t1_ParamLimits

0xa0f0,	// (0x00064ace) list_double2_large_graphic_pane_t1

0xa106,	// (0x00064ae4) list_double2_large_graphic_pane_t2_ParamLimits

0xa106,	// (0x00064ae4) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006a01b) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006a01b) list_double2_large_graphic_pane_t

0xa118,	// (0x00064af6) list_double_heading_pane_g1_ParamLimits

0xa118,	// (0x00064af6) list_double_heading_pane_g1

0xa129,	// (0x00064b07) list_double_heading_pane_g2_ParamLimits

0xa129,	// (0x00064b07) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006a020) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006a020) list_double_heading_pane_g

0xa135,	// (0x00064b13) list_double_heading_pane_t1_ParamLimits

0xa135,	// (0x00064b13) list_double_heading_pane_t1

0xa14b,	// (0x00064b29) list_double_heading_pane_t2_ParamLimits

0xa14b,	// (0x00064b29) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0006a025) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0006a025) list_double_heading_pane_t

0xa15d,	// (0x00064b3b) list_double_graphic_heading_pane_g1_ParamLimits

0xa15d,	// (0x00064b3b) list_double_graphic_heading_pane_g1

0xa118,	// (0x00064af6) list_double_graphic_heading_pane_g2_ParamLimits

0xa118,	// (0x00064af6) list_double_graphic_heading_pane_g2

0xa129,	// (0x00064b07) list_double_graphic_heading_pane_g3_ParamLimits

0xa129,	// (0x00064b07) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006a02a) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006a02a) list_double_graphic_heading_pane_g

0xa169,	// (0x00064b47) list_double_graphic_heading_pane_t1_ParamLimits

0xa169,	// (0x00064b47) list_double_graphic_heading_pane_t1

0xa17f,	// (0x00064b5d) list_double_graphic_heading_pane_t2_ParamLimits

0xa17f,	// (0x00064b5d) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0006a031) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0006a031) list_double_graphic_heading_pane_t

0xa191,	// (0x00064b6f) list_double_time_pane_g1_ParamLimits

0xa191,	// (0x00064b6f) list_double_time_pane_g1

0xa1a2,	// (0x00064b80) list_double_time_pane_g2_ParamLimits

0xa1a2,	// (0x00064b80) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006a036) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006a036) list_double_time_pane_g

0xa1ae,	// (0x00064b8c) list_double_time_pane_t1_ParamLimits

0xa1ae,	// (0x00064b8c) list_double_time_pane_t1

0xa1c4,	// (0x00064ba2) list_double_time_pane_t2_ParamLimits

0xa1c4,	// (0x00064ba2) list_double_time_pane_t2

0xa1d6,	// (0x00064bb4) list_double_time_pane_t3_ParamLimits

0xa1d6,	// (0x00064bb4) list_double_time_pane_t3

0xa1e8,	// (0x00064bc6) list_double_time_pane_t4_ParamLimits

0xa1e8,	// (0x00064bc6) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006a03b) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006a03b) list_double_time_pane_t

0xa1fa,	// (0x00064bd8) list_setting_pane_g1_ParamLimits

0xa1fa,	// (0x00064bd8) list_setting_pane_g1

0xa206,	// (0x00064be4) list_setting_pane_g2_ParamLimits

0xa206,	// (0x00064be4) list_setting_pane_g2

0x0001,

0xf666,	// (0x0006a044) list_setting_pane_g_ParamLimits

0xf666,	// (0x0006a044) list_setting_pane_g

0xa212,	// (0x00064bf0) list_setting_pane_t1_ParamLimits

0xa212,	// (0x00064bf0) list_setting_pane_t1

0xa22c,	// (0x00064c0a) list_setting_pane_t2_ParamLimits

0xa22c,	// (0x00064c0a) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006a049) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006a049) list_setting_pane_t

0xa26b,	// (0x00064c49) set_value_pane_cp_ParamLimits

0xa26b,	// (0x00064c49) set_value_pane_cp

0xa279,	// (0x00064c57) list_setting_number_pane_g1_ParamLimits

0xa279,	// (0x00064c57) list_setting_number_pane_g1

0xa285,	// (0x00064c63) list_setting_number_pane_g2_ParamLimits

0xa285,	// (0x00064c63) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0006a050) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0006a050) list_setting_number_pane_g

0xa291,	// (0x00064c6f) list_setting_number_pane_t1_ParamLimits

0xa291,	// (0x00064c6f) list_setting_number_pane_t1

0xa2aa,	// (0x00064c88) list_setting_number_pane_t2_ParamLimits

0xa2aa,	// (0x00064c88) list_setting_number_pane_t2

0xa2c4,	// (0x00064ca2) list_setting_number_pane_t3_ParamLimits

0xa2c4,	// (0x00064ca2) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006a055) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006a055) list_setting_number_pane_t

0xa26b,	// (0x00064c49) set_value_pane_ParamLimits

0xa26b,	// (0x00064c49) set_value_pane

0x8a06,	// (0x000633e4) bg_set_opt_pane_ParamLimits

0x8a06,	// (0x000633e4) bg_set_opt_pane

0xdf0e,	// (0x000688ec) set_value_pane_t1

0x8a27,	// (0x00063405) slider_set_pane_cp3

0x8a30,	// (0x0006340e) volume_small_pane_cp

0x8a39,	// (0x00063417) list_form_gen_pane

0x8a42,	// (0x00063420) scroll_pane_cp8

0xa307,	// (0x00064ce5) form_field_data_pane_ParamLimits

0xa307,	// (0x00064ce5) form_field_data_pane

0xa324,	// (0x00064d02) form_field_data_wide_pane_ParamLimits

0xa324,	// (0x00064d02) form_field_data_wide_pane

0xa348,	// (0x00064d26) form_field_popup_pane_ParamLimits

0xa348,	// (0x00064d26) form_field_popup_pane

0xdf2c,	// (0x0006890a) form_field_popup_wide_pane_ParamLimits

0xdf2c,	// (0x0006890a) form_field_popup_wide_pane

0xdf4d,	// (0x0006892b) form_field_slider_pane_ParamLimits

0xdf4d,	// (0x0006892b) form_field_slider_pane

0xdf60,	// (0x0006893e) form_field_slider_wide_pane_ParamLimits

0xdf60,	// (0x0006893e) form_field_slider_wide_pane

0x8a53,	// (0x00063431) data_form_pane

0xa374,	// (0x00064d52) form_field_data_pane_t1

0x8a5f,	// (0x0006343d) input_focus_pane

0xdf73,	// (0x00068951) data_form_wide_pane

0xdf90,	// (0x0006896e) form_field_data_wide_pane_t1

0x87da,	// (0x000631b8) input_focus_pane_cp6

0xa38e,	// (0x00064d6c) form_field_popup_pane_t1

0x8a5f,	// (0x0006343d) input_focus_pane_cp7

0x8a8d,	// (0x0006346b) list_form_pane

0xdfba,	// (0x00068998) form_field_popup_wide_pane_t1

0x8a5f,	// (0x0006343d) input_focus_pane_cp8

0x8a99,	// (0x00063477) list_form_wide_pane

0xa3b0,	// (0x00064d8e) form_field_slider_pane_t1_ParamLimits

0xa3b0,	// (0x00064d8e) form_field_slider_pane_t1

0xa3c8,	// (0x00064da6) form_field_slider_pane_t2_ParamLimits

0xa3c8,	// (0x00064da6) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006a065) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006a065) form_field_slider_pane_t

0x7cfe,	// (0x000626dc) input_focus_pane_cp9_ParamLimits

0x7cfe,	// (0x000626dc) input_focus_pane_cp9

0xa3dd,	// (0x00064dbb) slider_cont_pane_ParamLimits

0xa3dd,	// (0x00064dbb) slider_cont_pane

0x8aa5,	// (0x00063483) form_field_slider_wide_pane_t1_ParamLimits

0x8aa5,	// (0x00063483) form_field_slider_wide_pane_t1

0xdfcf,	// (0x000689ad) form_field_slider_wide_pane_t2_ParamLimits

0xdfcf,	// (0x000689ad) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006a06a) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006a06a) form_field_slider_wide_pane_t

0x7cfe,	// (0x000626dc) input_focus_pane_cp10_ParamLimits

0x7cfe,	// (0x000626dc) input_focus_pane_cp10

0xa3f1,	// (0x00064dcf) slider_cont_pane_cp1_ParamLimits

0xa3f1,	// (0x00064dcf) slider_cont_pane_cp1

0xa405,	// (0x00064de3) slider_form_pane_cp

0x8ab7,	// (0x00063495) input_focus_pane_g1

0x8abf,	// (0x0006349d) input_focus_pane_g2

0x8ac7,	// (0x000634a5) input_focus_pane_g3

0x8acf,	// (0x000634ad) input_focus_pane_g4

0x8ad7,	// (0x000634b5) input_focus_pane_g5

0x8adf,	// (0x000634bd) input_focus_pane_g6

0x8ae7,	// (0x000634c5) input_focus_pane_g7

0x8aef,	// (0x000634cd) input_focus_pane_g8

0x8af7,	// (0x000634d5) input_focus_pane_g9

0x7ba2,	// (0x00062580) input_focus_pane_g10

0x0009,

0xf691,	// (0x0006a06f) input_focus_pane_g

0x295b,	// (0x0005d339) wait_border_pane_g3_copy1

0xa40d,	// (0x00064deb) data_form_pane_t1

0x7ba2,	// (0x00062580) wait_anim_pane_g1_copy1

0xb688,	// (0x00066066) data_form_wide_pane_t1

0xdfe1,	// (0x000689bf) list_form_graphic_pane_cp_ParamLimits

0xdfe1,	// (0x000689bf) list_form_graphic_pane_cp

0x38a7,	// (0x0005e285) slider_form_pane_g1

0x38b0,	// (0x0005e28e) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0006a36d) slider_form_pane_g

0xa429,	// (0x00064e07) list_form_graphic_pane_ParamLimits

0xa429,	// (0x00064e07) list_form_graphic_pane

0xdff3,	// (0x000689d1) list_form_graphic_pane_g1

0xdffb,	// (0x000689d9) list_form_graphic_pane_t1_ParamLimits

0xdffb,	// (0x000689d9) list_form_graphic_pane_t1

0x7bfa,	// (0x000625d8) list_highlight_pane_cp5_ParamLimits

0x7bfa,	// (0x000625d8) list_highlight_pane_cp5

0xa43a,	// (0x00064e18) find_pane_g1

0x8aff,	// (0x000634dd) input_find_pane

0xa443,	// (0x00064e21) input_find_pane_g1_ParamLimits

0xa443,	// (0x00064e21) input_find_pane_g1

0xa44f,	// (0x00064e2d) input_find_pane_t1_ParamLimits

0xa44f,	// (0x00064e2d) input_find_pane_t1

0xa464,	// (0x00064e42) input_find_pane_t2_ParamLimits

0xa464,	// (0x00064e42) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0006a084) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0006a084) input_find_pane_t

0x8b08,	// (0x000634e6) input_focus_pane_cp5_ParamLimits

0x8b08,	// (0x000634e6) input_focus_pane_cp5

0x8b16,	// (0x000634f4) bg_popup_window_pane_cp2_ParamLimits

0x8b16,	// (0x000634f4) bg_popup_window_pane_cp2

0x8b23,	// (0x00063501) listscroll_menu_pane_ParamLimits

0x8b23,	// (0x00063501) listscroll_menu_pane

0xa485,	// (0x00064e63) popup_submenu_window_ParamLimits

0xa485,	// (0x00064e63) popup_submenu_window

0x8b2f,	// (0x0006350d) find_popup_pane_g1

0x8b37,	// (0x00063515) input_popup_find_pane_cp

0x8b08,	// (0x000634e6) input_focus_pane_cp4_ParamLimits

0x8b08,	// (0x000634e6) input_focus_pane_cp4

0x8b41,	// (0x0006351f) input_popup_find_pane_t1_ParamLimits

0x8b41,	// (0x0006351f) input_popup_find_pane_t1

0x7bac,	// (0x0006258a) bg_popup_sub_pane_cp

0x8b6f,	// (0x0006354d) listscroll_popup_sub_pane

0x8b77,	// (0x00063555) list_submenu_pane_ParamLimits

0x8b77,	// (0x00063555) list_submenu_pane

0x8b88,	// (0x00063566) scroll_pane_cp4

0x8b90,	// (0x0006356e) list_single_popup_submenu_pane_ParamLimits

0x8b90,	// (0x0006356e) list_single_popup_submenu_pane

0x8ba5,	// (0x00063583) list_single_popup_submenu_pane_g1

0x8bad,	// (0x0006358b) list_single_popup_submenu_pane_t1_ParamLimits

0x8bad,	// (0x0006358b) list_single_popup_submenu_pane_t1

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp1_ParamLimits

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp1

0xa4c3,	// (0x00064ea1) tabs_2_active_pane_g1

0xa4cb,	// (0x00064ea9) tabs_2_active_pane_t1

0x7cfe,	// (0x000626dc) bg_passive_tab_pane_cp1_ParamLimits

0x7cfe,	// (0x000626dc) bg_passive_tab_pane_cp1

0xa4c3,	// (0x00064ea1) tabs_2_passive_pane_g1

0xa4cb,	// (0x00064ea9) tabs_2_passive_pane_t1

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp4

0xa4dd,	// (0x00064ebb) tabs_2_long_active_pane_t1

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp4

0x06e3,	// (0x0005b0c1) list_single_midp_graphic_pane_g4_ParamLimits

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp5

0xa4f0,	// (0x00064ece) tabs_3_long_active_pane_t1

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp5

0x06e3,	// (0x0005b0c1) list_single_midp_graphic_pane_g4

0x7bfa,	// (0x000625d8) bg_popup_window_pane_cp13_ParamLimits

0x7bfa,	// (0x000625d8) bg_popup_window_pane_cp13

0x8bcb,	// (0x000635a9) listscroll_popup_fast_pane_ParamLimits

0x8bcb,	// (0x000635a9) listscroll_popup_fast_pane

0x8bda,	// (0x000635b8) grid_popup_fast_pane_ParamLimits

0x8bda,	// (0x000635b8) grid_popup_fast_pane

0x8bec,	// (0x000635ca) scroll_pane_cp9_ParamLimits

0x8bec,	// (0x000635ca) scroll_pane_cp9

0x539e,	// (0x0005fd7c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x539e,	// (0x0005fd7c) list_single_graphic_hl_pane_t1_cp2

0x8c10,	// (0x000635ee) input_focus_pane_cp20_ParamLimits

0x8c10,	// (0x000635ee) input_focus_pane_cp20

0x8c1e,	// (0x000635fc) query_popup_data_pane_t1_ParamLimits

0x8c1e,	// (0x000635fc) query_popup_data_pane_t1

0x8c31,	// (0x0006360f) query_popup_data_pane_t2_ParamLimits

0x8c31,	// (0x0006360f) query_popup_data_pane_t2

0x8c77,	// (0x00063655) query_popup_data_pane_t3_ParamLimits

0x8c77,	// (0x00063655) query_popup_data_pane_t3

0x8cb8,	// (0x00063696) query_popup_data_pane_t4_ParamLimits

0x8cb8,	// (0x00063696) query_popup_data_pane_t4

0x8cf4,	// (0x000636d2) query_popup_data_pane_t5_ParamLimits

0x8cf4,	// (0x000636d2) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006a089) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006a089) query_popup_data_pane_t

0x8ab7,	// (0x00063495) bg_set_opt_pane_g1

0x8abf,	// (0x0006349d) bg_set_opt_pane_g2

0x8ac7,	// (0x000634a5) bg_set_opt_pane_g3

0x8acf,	// (0x000634ad) bg_set_opt_pane_g4

0x8ad7,	// (0x000634b5) bg_set_opt_pane_g5

0x8adf,	// (0x000634bd) bg_set_opt_pane_g6

0x8ae7,	// (0x000634c5) bg_set_opt_pane_g7

0x8aef,	// (0x000634cd) bg_set_opt_pane_g8

0x8af7,	// (0x000634d5) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0006a094) bg_set_opt_pane_g

0xf355,	// (0x00069d33) control_top_pane_stacon_ParamLimits

0xf355,	// (0x00069d33) control_top_pane_stacon

0xf3a8,	// (0x00069d86) signal_pane_stacon_ParamLimits

0xf3a8,	// (0x00069d86) signal_pane_stacon

0xe019,	// (0x000689f7) stacon_top_pane_g1_ParamLimits

0xe019,	// (0x000689f7) stacon_top_pane_g1

0xf3cd,	// (0x00069dab) title_pane_stacon_ParamLimits

0xf3cd,	// (0x00069dab) title_pane_stacon

0xf3f7,	// (0x00069dd5) uni_indicator_pane_stacon_ParamLimits

0xf3f7,	// (0x00069dd5) uni_indicator_pane_stacon

0xf40c,	// (0x00069dea) battery_pane_stacon_ParamLimits

0xf40c,	// (0x00069dea) battery_pane_stacon

0xf450,	// (0x00069e2e) control_bottom_pane_stacon_ParamLimits

0xf450,	// (0x00069e2e) control_bottom_pane_stacon

0xf473,	// (0x00069e51) navi_pane_stacon_ParamLimits

0xf473,	// (0x00069e51) navi_pane_stacon

0xe03b,	// (0x00068a19) stacon_bottom_pane_g1_ParamLimits

0xe03b,	// (0x00068a19) stacon_bottom_pane_g1

0xf0bb,	// (0x00069a99) aid_levels_signal_lsc_ParamLimits

0xf0bb,	// (0x00069a99) aid_levels_signal_lsc

0xf0d2,	// (0x00069ab0) signal_pane_stacon_g1_ParamLimits

0xf0d2,	// (0x00069ab0) signal_pane_stacon_g1

0xf0e6,	// (0x00069ac4) signal_pane_stacon_g2_ParamLimits

0xf0e6,	// (0x00069ac4) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0006a0a7) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0006a0a7) signal_pane_stacon_g

0xf11b,	// (0x00069af9) title_pane_stacon_t1_ParamLimits

0xf11b,	// (0x00069af9) title_pane_stacon_t1

0x8d38,	// (0x00063716) uni_indicator_pane_stacon_g1

0x8d42,	// (0x00063720) uni_indicator_pane_stacon_g2

0x8d4c,	// (0x0006372a) uni_indicator_pane_stacon_g3

0x8d56,	// (0x00063734) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006a0b3) uni_indicator_pane_stacon_g

0xf140,	// (0x00069b1e) control_top_pane_stacon_g1

0xf148,	// (0x00069b26) control_top_pane_stacon_t1_ParamLimits

0xf148,	// (0x00069b26) control_top_pane_stacon_t1

0xf17f,	// (0x00069b5d) aid_levels_battery_lsc_ParamLimits

0xf17f,	// (0x00069b5d) aid_levels_battery_lsc

0xf197,	// (0x00069b75) battery_pane_stacon_g1_ParamLimits

0xf197,	// (0x00069b75) battery_pane_stacon_g1

0xf1aa,	// (0x00069b88) battery_pane_stacon_g2_ParamLimits

0xf1aa,	// (0x00069b88) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0006a0bc) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0006a0bc) battery_pane_stacon_g

0xf1e8,	// (0x00069bc6) navi_icon_pane_stacon

0xf1fc,	// (0x00069bda) navi_navi_pane_stacon

0xf1e8,	// (0x00069bc6) navi_text_pane_stacon

0xf140,	// (0x00069b1e) control_bottom_pane_stacon_g1

0xf212,	// (0x00069bf0) control_bottom_pane_stacon_t1_ParamLimits

0xf212,	// (0x00069bf0) control_bottom_pane_stacon_t1

0xa502,	// (0x00064ee0) grid_app_pane_ParamLimits

0xa502,	// (0x00064ee0) grid_app_pane

0xa53a,	// (0x00064f18) scroll_pane_cp15_ParamLimits

0xa53a,	// (0x00064f18) scroll_pane_cp15

0xa54f,	// (0x00064f2d) cell_app_pane_ParamLimits

0xa54f,	// (0x00064f2d) cell_app_pane

0xa59c,	// (0x00064f7a) cell_app_pane_g1_ParamLimits

0xa59c,	// (0x00064f7a) cell_app_pane_g1

0x8d7a,	// (0x00063758) cell_app_pane_g2_ParamLimits

0x8d7a,	// (0x00063758) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0006a0c1) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0006a0c1) cell_app_pane_g

0xa5c0,	// (0x00064f9e) cell_app_pane_t1_ParamLimits

0xa5c0,	// (0x00064f9e) cell_app_pane_t1

0x8d86,	// (0x00063764) grid_highlight_pane_ParamLimits

0x8d86,	// (0x00063764) grid_highlight_pane

0x8ab7,	// (0x00063495) cell_highlight_pane_g1

0x8abf,	// (0x0006349d) cell_highlight_pane_g2

0x8ac7,	// (0x000634a5) cell_highlight_pane_g3

0x8acf,	// (0x000634ad) cell_highlight_pane_g4

0x8ad7,	// (0x000634b5) cell_highlight_pane_g5

0x8adf,	// (0x000634bd) cell_highlight_pane_g6

0x8ae7,	// (0x000634c5) cell_highlight_pane_g7

0x8aef,	// (0x000634cd) cell_highlight_pane_g8

0x8af7,	// (0x000634d5) cell_highlight_pane_g9

0x7ba2,	// (0x00062580) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0006a06f) cell_highlight_pane_g

0x8d97,	// (0x00063775) bg_scroll_pane

0xf253,	// (0x00069c31) scroll_handle_pane

0x8dde,	// (0x000637bc) scroll_bg_pane_g1

0x8df3,	// (0x000637d1) scroll_bg_pane_g2

0x8e0b,	// (0x000637e9) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0006a0c6) scroll_bg_pane_g

0x8e20,	// (0x000637fe) scroll_handle_focus_pane_ParamLimits

0x8e20,	// (0x000637fe) scroll_handle_focus_pane

0x8dde,	// (0x000637bc) scroll_handle_pane_g1

0x8e2d,	// (0x0006380b) scroll_handle_pane_g2

0x8e0b,	// (0x000637e9) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0006a0cd) scroll_handle_pane_g

0x8b08,	// (0x000634e6) bg_popup_sub_pane_cp21_ParamLimits

0x8b08,	// (0x000634e6) bg_popup_sub_pane_cp21

0x8e41,	// (0x0006381f) popup_fep_japan_predictive_window_t1_ParamLimits

0x8e41,	// (0x0006381f) popup_fep_japan_predictive_window_t1

0x8e58,	// (0x00063836) popup_fep_japan_predictive_window_t2_ParamLimits

0x8e58,	// (0x00063836) popup_fep_japan_predictive_window_t2

0xbe77,	// (0x00066855) popup_fep_japan_predictive_window_t3_ParamLimits

0xbe77,	// (0x00066855) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0006a0d4) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0006a0d4) popup_fep_japan_predictive_window_t

0x7bac,	// (0x0006258a) bg_popup_sub_pane_cp23

0xbeae,	// (0x0006688c) listscroll_japin_cand_pane

0xbeb6,	// (0x00066894) popup_fep_japan_candidate_window_t1

0xbec4,	// (0x000668a2) candidate_pane_ParamLimits

0xbec4,	// (0x000668a2) candidate_pane

0xbed6,	// (0x000668b4) scroll_pane_cp30

0xbee0,	// (0x000668be) list_single_popup_jap_candidate_pane_ParamLimits

0xbee0,	// (0x000668be) list_single_popup_jap_candidate_pane

0x7bac,	// (0x0006258a) list_highlight_pane_cp30

0xbef4,	// (0x000668d2) list_single_popup_jap_candidate_pane_t1

0xa5e0,	// (0x00064fbe) level_1_signal

0xa5f2,	// (0x00064fd0) level_2_signal

0xa605,	// (0x00064fe3) level_3_signal

0xa618,	// (0x00064ff6) level_4_signal

0xa62b,	// (0x00065009) level_5_signal

0xa63e,	// (0x0006501c) level_6_signal

0xa651,	// (0x0006502f) level_7_signal

0xa5e0,	// (0x00064fbe) level_1_battery

0xa5f2,	// (0x00064fd0) level_2_battery

0xa605,	// (0x00064fe3) level_3_battery

0xa618,	// (0x00064ff6) level_4_battery

0xa62b,	// (0x00065009) level_5_battery

0xa63e,	// (0x0006501c) level_6_battery

0xa651,	// (0x0006502f) level_7_battery

0xbf1b,	// (0x000668f9) list_menu_pane_ParamLimits

0xbf1b,	// (0x000668f9) list_menu_pane

0xbf31,	// (0x0006690f) scroll_pane_cp25_ParamLimits

0xbf31,	// (0x0006690f) scroll_pane_cp25

0xbf4a,	// (0x00066928) list_double2_graphic_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double2_graphic_pane_cp2

0xbf4a,	// (0x00066928) list_double2_large_graphic_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double2_large_graphic_pane_cp2

0xbf4a,	// (0x00066928) list_double2_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double2_pane_cp2

0xbf4a,	// (0x00066928) list_double_graphic_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double_graphic_pane_cp2

0xbf4a,	// (0x00066928) list_double_large_graphic_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double_large_graphic_pane_cp2

0xbf4a,	// (0x00066928) list_double_number_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double_number_pane_cp2

0xbf4a,	// (0x00066928) list_double_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double_pane_cp2

0xa664,	// (0x00065042) list_single_2graphic_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_2graphic_pane_cp2

0xa664,	// (0x00065042) list_single_graphic_heading_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_graphic_heading_pane_cp2

0xa664,	// (0x00065042) list_single_graphic_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_graphic_pane_cp2

0xa664,	// (0x00065042) list_single_heading_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_heading_pane_cp2

0xbf5a,	// (0x00066938) list_single_large_graphic_pane_cp2_ParamLimits

0xbf5a,	// (0x00066938) list_single_large_graphic_pane_cp2

0xa664,	// (0x00065042) list_single_number_heading_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_number_heading_pane_cp2

0xa664,	// (0x00065042) list_single_number_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_number_pane_cp2

0xa664,	// (0x00065042) list_single_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_pane_cp2

0xbf73,	// (0x00066951) bg_popup_sub_pane_cp22

0xf305,	// (0x00069ce3) popup_side_volume_key_window_g1

0xf32f,	// (0x00069d0d) popup_side_volume_key_window_t1

0xf34d,	// (0x00069d2b) volume_small_pane_cp1

0x7cfe,	// (0x000626dc) bg_popup_sub_pane_cp24_ParamLimits

0x7cfe,	// (0x000626dc) bg_popup_sub_pane_cp24

0xbf89,	// (0x00066967) fep_china_uni_candidate_pane_ParamLimits

0xbf89,	// (0x00066967) fep_china_uni_candidate_pane

0xbf9d,	// (0x0006697b) fep_china_uni_entry_pane

0xbfad,	// (0x0006698b) popup_fep_china_uni_window_g1

0xbfc9,	// (0x000669a7) fep_china_uni_entry_pane_g1

0xbfd3,	// (0x000669b1) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0006a105) fep_china_uni_entry_pane_g

0xbfdd,	// (0x000669bb) fep_entry_item_pane

0xbfe7,	// (0x000669c5) fep_candidate_item_pane

0xbfef,	// (0x000669cd) fep_china_uni_candidate_pane_g1

0xbff9,	// (0x000669d7) fep_china_uni_candidate_pane_g2

0xc001,	// (0x000669df) fep_china_uni_candidate_pane_g3

0xc009,	// (0x000669e7) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006a10a) fep_china_uni_candidate_pane_g

0x7ba2,	// (0x00062580) fep_entry_item_pane_g1

0xc013,	// (0x000669f1) fep_entry_item_pane_t1_ParamLimits

0xc013,	// (0x000669f1) fep_entry_item_pane_t1

0xc029,	// (0x00066a07) fep_candidate_item_pane_t1_ParamLimits

0xc029,	// (0x00066a07) fep_candidate_item_pane_t1

0xc03e,	// (0x00066a1c) fep_candidate_item_pane_t2_ParamLimits

0xc03e,	// (0x00066a1c) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0006a113) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0006a113) fep_candidate_item_pane_t

0x7bfa,	// (0x000625d8) list_highlight_pane_cp31_ParamLimits

0x7bfa,	// (0x000625d8) list_highlight_pane_cp31

0xc050,	// (0x00066a2e) level_1_signal_lsc

0xc059,	// (0x00066a37) level_2_signal_lsc

0xc062,	// (0x00066a40) level_3_signal_lsc

0xc06b,	// (0x00066a49) level_4_signal_lsc

0xc074,	// (0x00066a52) level_5_signal_lsc

0xc07d,	// (0x00066a5b) level_6_signal_lsc

0xc086,	// (0x00066a64) level_7_signal_lsc

0xc086,	// (0x00066a64) level_1_battery_lsc

0xc08f,	// (0x00066a6d) level_2_battery_lsc

0xc098,	// (0x00066a76) level_3_battery_lsc

0xc0a1,	// (0x00066a7f) level_4_battery_lsc

0xc0aa,	// (0x00066a88) level_5_battery_lsc

0xc0b3,	// (0x00066a91) level_6_battery_lsc

0xc050,	// (0x00066a2e) level_7_battery_lsc

0xc0bc,	// (0x00066a9a) scroll_handle_focus_pane_g1

0xc0c5,	// (0x00066aa3) scroll_handle_focus_pane_g2

0xc0ce,	// (0x00066aac) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006a118) scroll_handle_focus_pane_g

0xa6f3,	// (0x000650d1) list_single_2graphic_pane_g1_ParamLimits

0xa6f3,	// (0x000650d1) list_single_2graphic_pane_g1

0x9ed5,	// (0x000648b3) list_single_2graphic_pane_g2_ParamLimits

0x9ed5,	// (0x000648b3) list_single_2graphic_pane_g2

0x22e7,	// (0x0005ccc5) list_single_2graphic_pane_g3_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_2graphic_pane_g3

0xa6ff,	// (0x000650dd) list_single_2graphic_pane_g4_ParamLimits

0xa6ff,	// (0x000650dd) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006a11f) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006a11f) list_single_2graphic_pane_g

0xa710,	// (0x000650ee) list_single_2graphic_pane_t1_ParamLimits

0xa710,	// (0x000650ee) list_single_2graphic_pane_t1

0xa73e,	// (0x0006511c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa73e,	// (0x0006511c) list_double2_graphic_large_graphic_pane_g1

0xa0df,	// (0x00064abd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa0df,	// (0x00064abd) list_double2_graphic_large_graphic_pane_g2

0xa02c,	// (0x00064a0a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa02c,	// (0x00064a0a) list_double2_graphic_large_graphic_pane_g3

0xa750,	// (0x0006512e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa750,	// (0x0006512e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006a128) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006a128) list_double2_graphic_large_graphic_pane_g

0xa75c,	// (0x0006513a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa75c,	// (0x0006513a) list_double2_graphic_large_graphic_pane_t1

0xa772,	// (0x00065150) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa772,	// (0x00065150) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0006a131) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0006a131) list_double2_graphic_large_graphic_pane_t

0xe0fb,	// (0x00068ad9) popup_fast_swap_window_ParamLimits

0xe0fb,	// (0x00068ad9) popup_fast_swap_window

0xe119,	// (0x00068af7) popup_side_volume_key_window

0xe137,	// (0x00068b15) stacon_top_pane

0xe141,	// (0x00068b1f) status_pane_ParamLimits

0xe141,	// (0x00068b1f) status_pane

0xa7cc,	// (0x000651aa) status_small_pane

0x7bac,	// (0x0006258a) control_pane

0x7bac,	// (0x0006258a) stacon_bottom_pane

0x8a42,	// (0x00063420) scroll_pane_cp121

0x8a39,	// (0x00063417) set_content_pane

0xa784,	// (0x00065162) bg_active_tab_pane_g1_cp1

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp1

0xa78d,	// (0x0006516b) bg_active_tab_pane_g3_cp1

0xa784,	// (0x00065162) bg_passive_tab_pane_g1_cp1

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp1

0xa78d,	// (0x0006516b) bg_passive_tab_pane_g3_cp1

0xa796,	// (0x00065174) bg_active_tab_pane_g1_cp2

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp2

0xa79f,	// (0x0006517d) bg_active_tab_pane_g3_cp2

0xa796,	// (0x00065174) bg_passive_tab_pane_g1_cp2

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp2

0xa79f,	// (0x0006517d) bg_passive_tab_pane_g3_cp2

0xa7a8,	// (0x00065186) bg_active_tab_pane_g1_cp3

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp3

0xa7b1,	// (0x0006518f) bg_active_tab_pane_g3_cp3

0xa7a8,	// (0x00065186) bg_passive_tab_pane_g1_cp3

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp3

0xa7b1,	// (0x0006518f) bg_passive_tab_pane_g3_cp3

0xa7ba,	// (0x00065198) bg_active_tab_pane_g1_cp4

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp4

0xa7c3,	// (0x000651a1) bg_active_tab_pane_g3_cp4

0xa7ba,	// (0x00065198) bg_passive_tab_pane_g1_cp4

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp4

0xa7c3,	// (0x000651a1) bg_passive_tab_pane_g3_cp4

0xe057,	// (0x00068a35) bg_active_tab_pane_g1_cp5

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp5

0xe060,	// (0x00068a3e) bg_active_tab_pane_g3_cp5

0xe057,	// (0x00068a35) bg_passive_tab_pane_g1_cp5

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp5

0xe060,	// (0x00068a3e) bg_passive_tab_pane_g3_cp5

0xe069,	// (0x00068a47) list_set_graphic_pane_ParamLimits

0xe069,	// (0x00068a47) list_set_graphic_pane

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp4

0xe07c,	// (0x00068a5a) list_set_graphic_pane_g1_ParamLimits

0xe07c,	// (0x00068a5a) list_set_graphic_pane_g1

0xe088,	// (0x00068a66) list_set_graphic_pane_g2_ParamLimits

0xe088,	// (0x00068a66) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006a136) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006a136) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x0006a4c0) volume_small_pane_cp_g

0xe0ac,	// (0x00068a8a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xe0ac,	// (0x00068a8a) list_double2_large_graphic_pane_g1_cp2

0xe0ba,	// (0x00068a98) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe0ba,	// (0x00068a98) list_double2_large_graphic_pane_g2_cp2

0xe0cb,	// (0x00068aa9) list_double2_large_graphic_pane_g3_cp2

0xe0d3,	// (0x00068ab1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe0d3,	// (0x00068ab1) list_double2_large_graphic_pane_t1_cp2

0xe0e9,	// (0x00068ac7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe0e9,	// (0x00068ac7) list_double2_large_graphic_pane_t2_cp2

0x343f,	// (0x0005de1d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x343f,	// (0x0005de1d) list_double_large_graphic_pane_g1_cp2

0x3452,	// (0x0005de30) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3452,	// (0x0005de30) list_double_large_graphic_pane_g2_cp2

0xe25f,	// (0x00068c3d) list_double_large_graphic_pane_g3_cp2

0x3463,	// (0x0005de41) list_double_large_graphic_pane_g4_cp

0x346b,	// (0x0005de49) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x346b,	// (0x0005de49) list_double_large_graphic_pane_t1_cp2

0x3482,	// (0x0005de60) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3482,	// (0x0005de60) list_double_large_graphic_pane_t2_cp2

0xe14f,	// (0x00068b2d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe14f,	// (0x00068b2d) list_double2_graphic_pane_g1_cp2

0xe15d,	// (0x00068b3b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe15d,	// (0x00068b3b) list_double2_graphic_pane_g2_cp2

0xe16e,	// (0x00068b4c) list_double2_graphic_pane_g3_cp2

0xe178,	// (0x00068b56) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe178,	// (0x00068b56) list_double2_graphic_pane_t1_cp2

0xe18e,	// (0x00068b6c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe18e,	// (0x00068b6c) list_double2_graphic_pane_t2_cp2

0xe1a0,	// (0x00068b7e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe1a0,	// (0x00068b7e) list_single_number_heading_pane_g1_cp2

0xe1ac,	// (0x00068b8a) list_single_number_heading_pane_g2_cp2

0xe1b4,	// (0x00068b92) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe1b4,	// (0x00068b92) list_single_number_heading_pane_t1_cp2

0xe1ca,	// (0x00068ba8) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe1ca,	// (0x00068ba8) list_single_number_heading_pane_t2_cp2

0xe1de,	// (0x00068bbc) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe1de,	// (0x00068bbc) list_single_number_heading_pane_t3_cp2

0xe1a0,	// (0x00068b7e) list_single_heading_pane_g1_cp2_ParamLimits

0xe1a0,	// (0x00068b7e) list_single_heading_pane_g1_cp2

0xe1ac,	// (0x00068b8a) list_single_heading_pane_g2_cp2

0xe1b4,	// (0x00068b92) list_single_heading_pane_t1_cp2_ParamLimits

0xe1b4,	// (0x00068b92) list_single_heading_pane_t1_cp2

0x3239,	// (0x0005dc17) list_single_heading_pane_t2_cp2_ParamLimits

0x3239,	// (0x0005dc17) list_single_heading_pane_t2_cp2

0x3181,	// (0x0005db5f) list_double_graphic_pane_g1_cp2_ParamLimits

0x3181,	// (0x0005db5f) list_double_graphic_pane_g1_cp2

0x318d,	// (0x0005db6b) list_double_graphic_pane_g2_cp2_ParamLimits

0x318d,	// (0x0005db6b) list_double_graphic_pane_g2_cp2

0x319c,	// (0x0005db7a) list_double_graphic_pane_g3_cp2

0x31a4,	// (0x0005db82) list_double_graphic_pane_t1_cp2_ParamLimits

0x31a4,	// (0x0005db82) list_double_graphic_pane_t1_cp2

0x31ba,	// (0x0005db98) list_double_graphic_pane_t2_cp2_ParamLimits

0x31ba,	// (0x0005db98) list_double_graphic_pane_t2_cp2

0xe253,	// (0x00068c31) list_double_number_pane_g1_cp2_ParamLimits

0xe253,	// (0x00068c31) list_double_number_pane_g1_cp2

0xe25f,	// (0x00068c3d) list_double_number_pane_g2_cp2

0x3145,	// (0x0005db23) list_double_number_pane_t1_cp2_ParamLimits

0x3145,	// (0x0005db23) list_double_number_pane_t1_cp2

0x3159,	// (0x0005db37) list_double_number_pane_t2_cp2_ParamLimits

0x3159,	// (0x0005db37) list_double_number_pane_t2_cp2

0x316f,	// (0x0005db4d) list_double_number_pane_t3_cp2_ParamLimits

0x316f,	// (0x0005db4d) list_double_number_pane_t3_cp2

0x302e,	// (0x0005da0c) list_single_graphic_pane_g1_cp2_ParamLimits

0x302e,	// (0x0005da0c) list_single_graphic_pane_g1_cp2

0xc0d7,	// (0x00066ab5) list_single_graphic_pane_g2_cp2_ParamLimits

0xc0d7,	// (0x00066ab5) list_single_graphic_pane_g2_cp2

0xe2b9,	// (0x00068c97) list_single_graphic_pane_g3_cp2

0x3004,	// (0x0005d9e2) list_single_graphic_pane_t1_cp2_ParamLimits

0x3004,	// (0x0005d9e2) list_single_graphic_pane_t1_cp2

0xc0d7,	// (0x00066ab5) list_single_number_pane_g1_cp2_ParamLimits

0xc0d7,	// (0x00066ab5) list_single_number_pane_g1_cp2

0xe2b9,	// (0x00068c97) list_single_number_pane_g2_cp2

0x3004,	// (0x0005d9e2) list_single_number_pane_t1_cp2_ParamLimits

0x3004,	// (0x0005d9e2) list_single_number_pane_t1_cp2

0x301a,	// (0x0005d9f8) list_single_number_pane_t2_cp2_ParamLimits

0x301a,	// (0x0005d9f8) list_single_number_pane_t2_cp2

0xe0ba,	// (0x00068a98) list_double2_pane_g1_cp2_ParamLimits

0xe0ba,	// (0x00068a98) list_double2_pane_g1_cp2

0xe0cb,	// (0x00068aa9) list_double2_pane_g2_cp2

0xe22b,	// (0x00068c09) list_double2_pane_t1_cp2_ParamLimits

0xe22b,	// (0x00068c09) list_double2_pane_t1_cp2

0xe241,	// (0x00068c1f) list_double2_pane_t2_cp2_ParamLimits

0xe241,	// (0x00068c1f) list_double2_pane_t2_cp2

0xe253,	// (0x00068c31) list_double_pane_g1_cp2_ParamLimits

0xe253,	// (0x00068c31) list_double_pane_g1_cp2

0xe25f,	// (0x00068c3d) list_double_pane_g2_cp2

0xe267,	// (0x00068c45) list_double_pane_t1_cp2_ParamLimits

0xe267,	// (0x00068c45) list_double_pane_t1_cp2

0xe27d,	// (0x00068c5b) list_double_pane_t2_cp2_ParamLimits

0xe27d,	// (0x00068c5b) list_double_pane_t2_cp2

0xe2a9,	// (0x00068c87) list_single_pane_cp2_g3

0xc0d7,	// (0x00066ab5) list_single_pane_g1_cp2_ParamLimits

0xc0d7,	// (0x00066ab5) list_single_pane_g1_cp2

0xe2b9,	// (0x00068c97) list_single_pane_g2_cp2

0xe2c1,	// (0x00068c9f) list_single_pane_t1_cp2_ParamLimits

0xe2c1,	// (0x00068c9f) list_single_pane_t1_cp2

0xe2d9,	// (0x00068cb7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xe2d9,	// (0x00068cb7) list_single_large_graphic_pane_g1_cp2

0xdeb3,	// (0x00068891) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xdeb3,	// (0x00068891) list_single_large_graphic_pane_g2_cp2

0xe2e7,	// (0x00068cc5) list_single_large_graphic_pane_g3_cp2

0xe2ef,	// (0x00068ccd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe2ef,	// (0x00068ccd) list_single_large_graphic_pane_g4_cp1

0xe309,	// (0x00068ce7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe309,	// (0x00068ce7) list_single_large_graphic_pane_t1_cp2

0x2fce,	// (0x0005d9ac) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2fce,	// (0x0005d9ac) list_single_graphic_heading_pane_g1_cp2

0x2f9b,	// (0x0005d979) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2f9b,	// (0x0005d979) list_single_graphic_heading_pane_g4_cp2

0xe2b9,	// (0x00068c97) list_single_graphic_heading_pane_g5_cp2

0x2fda,	// (0x0005d9b8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2fda,	// (0x0005d9b8) list_single_graphic_heading_pane_t1_cp2

0x2ff0,	// (0x0005d9ce) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2ff0,	// (0x0005d9ce) list_single_graphic_heading_pane_t2_cp2

0x2f8f,	// (0x0005d96d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2f8f,	// (0x0005d96d) list_single_2graphic_pane_g1_cp2

0x2f9b,	// (0x0005d979) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2f9b,	// (0x0005d979) list_single_2graphic_pane_g2_cp2

0xe2b9,	// (0x00068c97) list_single_2graphic_pane_g3_cp2

0x2fac,	// (0x0005d98a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2fac,	// (0x0005d98a) list_single_2graphic_pane_g4_cp2

0x2fb8,	// (0x0005d996) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2fb8,	// (0x0005d996) list_single_2graphic_pane_t1_cp2

0x7ba2,	// (0x00062580) list_highlight_pane_g10_cp1

0x2b67,	// (0x0005d545) list_highlight_pane_g1_cp1

0x2b6f,	// (0x0005d54d) list_highlight_pane_g2_cp1

0x2b77,	// (0x0005d555) list_highlight_pane_g3_cp1

0x2b7f,	// (0x0005d55d) list_highlight_pane_g4_cp1

0x2b87,	// (0x0005d565) list_highlight_pane_g5_cp1

0x2b8f,	// (0x0005d56d) list_highlight_pane_g6_cp1

0x2b97,	// (0x0005d575) list_highlight_pane_g7_cp1

0x2b9f,	// (0x0005d57d) list_highlight_pane_g8_cp1

0x2ba7,	// (0x0005d585) list_highlight_pane_g9_cp1

0xc30d,	// (0x00066ceb) form_field_slider_pane_t3

0xc31b,	// (0x00066cf9) form_field_slider_pane_t4

0x2aa3,	// (0x0005d481) slider_form_pane_ParamLimits

0x2aa3,	// (0x0005d481) slider_form_pane

0x7bac,	// (0x0006258a) control_abbreviations

0x7bac,	// (0x0006258a) control_conventions

0x7bac,	// (0x0006258a) control_definitions

0x7bac,	// (0x0006258a) format_table_attribute

0x328f,	// (0x0005dc6d) bg_popup_preview_window_pane_g9

0x7bac,	// (0x0006258a) format_table_data2

0x7bac,	// (0x0006258a) format_table_data3

0x7bac,	// (0x0006258a) format_table_data_example

0x0008,

0x7bac,	// (0x0006258a) intro_purpose

0xf8ef,	// (0x0006a2cd) bg_popup_preview_window_pane_g

0x7bac,	// (0x0006258a) texts_category

0x7bac,	// (0x0006258a) texts_graphics

0xe31f,	// (0x00068cfd) text_digital

0xe32e,	// (0x00068d0c) text_primary

0xe33d,	// (0x00068d1b) text_primary_small

0xe34c,	// (0x00068d2a) text_secondary

0xe35b,	// (0x00068d39) text_title

0x3a3c,	// (0x0005e41a) bg_passive_tab_pane_g1_cp3_srt

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp3_srt

0x3a45,	// (0x0005e423) bg_passive_tab_pane_g3_cp3_srt

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp3_srt_ParamLimits

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp3_srt

0x3a4e,	// (0x0005e42c) tabs_4_active_pane_srt_g1

0xc65c,	// (0x0006703a) tabs_4_active_pane_srt_t1_ParamLimits

0xc65c,	// (0x0006703a) tabs_4_active_pane_srt_t1

0x3a3c,	// (0x0005e41a) bg_active_tab_pane_g1_cp3_copy1

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp3_copy1

0x3a45,	// (0x0005e423) bg_active_tab_pane_g3_cp3_copy1

0x7bfa,	// (0x000625d8) tabs_2_long_active_pane_srt_ParamLimits

0x7bfa,	// (0x000625d8) tabs_2_long_active_pane_srt

0x7bfa,	// (0x000625d8) tabs_2_long_passive_pane_srt_ParamLimits

0x7bfa,	// (0x000625d8) tabs_2_long_passive_pane_srt

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp4_srt

0x36be,	// (0x0005e09c) bg_passive_tab_pane_g1_cp4_srt

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp4_srt

0x36c7,	// (0x0005e0a5) bg_passive_tab_pane_g3_cp4_srt

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp4_srt_ParamLimits

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp4_srt

0xc4ed,	// (0x00066ecb) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc4ed,	// (0x00066ecb) tabs_2_long_active_pane_srt_t1

0x36be,	// (0x0005e09c) bg_active_tab_pane_g1_cp4_srt

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp4_srt

0x36c7,	// (0x0005e0a5) bg_active_tab_pane_g3_cp4_srt

0x7cfe,	// (0x000626dc) tabs_3_long_active_pane_srt_ParamLimits

0x7cfe,	// (0x000626dc) tabs_3_long_active_pane_srt

0x7cfe,	// (0x000626dc) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7cfe,	// (0x000626dc) tabs_3_long_passive_pane_cp_srt

0x7cfe,	// (0x000626dc) tabs_3_long_passive_pane_srt_ParamLimits

0x7cfe,	// (0x000626dc) tabs_3_long_passive_pane_srt

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp5_srt

0xe057,	// (0x00068a35) bg_passive_tab_pane_g1_cp5_srt

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp5_srt

0xe060,	// (0x00068a3e) bg_passive_tab_pane_g3_cp5_srt

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp5_srt_ParamLimits

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp5_srt

0xc4d7,	// (0x00066eb5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc4d7,	// (0x00066eb5) tabs_3_long_active_pane_srt_t1

0xe057,	// (0x00068a35) bg_active_tab_pane_g1_cp5_srt

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp5_srt

0xe060,	// (0x00068a3e) bg_active_tab_pane_g3_cp5_srt

0x369e,	// (0x0005e07c) navi_text_pane_srt_t1

0x3696,	// (0x0005e074) navi_icon_pane_srt_g1

0xe465,	// (0x00068e43) midp_editing_number_pane_srt

0xe36a,	// (0x00068d48) midp_ticker_pane_srt

0xe46d,	// (0x00068e4b) midp_ticker_pane_srt_g1

0xe475,	// (0x00068e53) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006a155) midp_ticker_pane_srt_g

0xe47d,	// (0x00068e5b) midp_ticker_pane_srt_t1

0x3687,	// (0x0005e065) midp_editing_number_pane_t1_copy1

0xa7d7,	// (0x000651b5) listscroll_midp_pane

0xa7d7,	// (0x000651b5) midp_form_pane

0xe372,	// (0x00068d50) midp_info_popup_window_ParamLimits

0xe372,	// (0x00068d50) midp_info_popup_window

0x8b08,	// (0x000634e6) bg_popup_sub_pane_cp50_ParamLimits

0x8b08,	// (0x000634e6) bg_popup_sub_pane_cp50

0x2791,	// (0x0005d16f) listscroll_midp_info_pane_ParamLimits

0x2791,	// (0x0005d16f) listscroll_midp_info_pane

0x2771,	// (0x0005d14f) listscroll_form_midp_pane_ParamLimits

0x2771,	// (0x0005d14f) listscroll_form_midp_pane

0x277d,	// (0x0005d15b) scroll_bar_cp050

0x2771,	// (0x0005d14f) list_midp_pane

0x463b,	// (0x0005f019) signal_pane_g2_cp

0x268b,	// (0x0005d069) listscroll_midp_info_pane_t1_ParamLimits

0x268b,	// (0x0005d069) listscroll_midp_info_pane_t1

0x26a3,	// (0x0005d081) listscroll_midp_info_pane_t2_ParamLimits

0x26a3,	// (0x0005d081) listscroll_midp_info_pane_t2

0x26e1,	// (0x0005d0bf) listscroll_midp_info_pane_t3_ParamLimits

0x26e1,	// (0x0005d0bf) listscroll_midp_info_pane_t3

0x271b,	// (0x0005d0f9) listscroll_midp_info_pane_t4_ParamLimits

0x271b,	// (0x0005d0f9) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0006a208) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0006a208) listscroll_midp_info_pane_t

0x8b88,	// (0x00063566) scroll_pane_cp21

0x2625,	// (0x0005d003) form_midp_field_choice_group_pane

0x262e,	// (0x0005d00c) form_midp_field_text_pane

0x2671,	// (0x0005d04f) form_midp_field_time_pane

0x2679,	// (0x0005d057) form_midp_gauge_slider_pane

0x2682,	// (0x0005d060) form_midp_gauge_wait_pane

0x7bac,	// (0x0006258a) form_midp_image_pane

0xb505,	// (0x00065ee3) list_single_midp_pane_ParamLimits

0xb505,	// (0x00065ee3) list_single_midp_pane

0xc2e5,	// (0x00066cc3) form_midp_field_text_pane_t1

0x23db,	// (0x0005cdb9) input_focus_pane_cp050

0x2614,	// (0x0005cff2) list_midp_form_text_pane

0x25b8,	// (0x0005cf96) form_midp_field_choice_group_pane_t1

0x25c6,	// (0x0005cfa4) input_focus_pane_cp051

0x25da,	// (0x0005cfb8) list_midp_choice_pane

0x7bac,	// (0x0006258a) status_idle_pane

0x259c,	// (0x0005cf7a) form_midp_field_time_pane_t1

0x7ba2,	// (0x00062580) wait_anim_pane_g2_copy1

0x25aa,	// (0x0005cf88) form_midp_field_time_pane_t2

0x0001,

0xe3cd,	// (0x00068dab) aid_navinavi_width_2_pane

0xf825,	// (0x0006a203) form_midp_field_time_pane_t

0x7bac,	// (0x0006258a) input_focus_pane_cp052

0x7bac,	// (0x0006258a) bg_input_focus_pane_cp040

0x255c,	// (0x0005cf3a) form_midp_gauge_slider_pane_t1

0x256a,	// (0x0005cf48) form_midp_gauge_slider_pane_t2

0xc2c9,	// (0x00066ca7) form_midp_gauge_slider_pane_t3

0xc2d7,	// (0x00066cb5) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0006a1fa) form_midp_gauge_slider_pane_t

0x2594,	// (0x0005cf72) form_midp_slider_pane

0x7bfa,	// (0x000625d8) bg_input_focus_pane_cp041_ParamLimits

0x7bfa,	// (0x000625d8) bg_input_focus_pane_cp041

0x2529,	// (0x0005cf07) form_midp_gauge_wait_pane_t1_ParamLimits

0x2529,	// (0x0005cf07) form_midp_gauge_wait_pane_t1

0x253b,	// (0x0005cf19) form_midp_gauge_wait_pane_t2_ParamLimits

0x253b,	// (0x0005cf19) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0006a1f5) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0006a1f5) form_midp_gauge_wait_pane_t

0x254d,	// (0x0005cf2b) form_midp_wait_pane_ParamLimits

0x254d,	// (0x0005cf2b) form_midp_wait_pane

0x24f1,	// (0x0005cecf) form_midp_image_pane_g1

0x24fa,	// (0x0005ced8) form_midp_image_pane_t1

0x2509,	// (0x0005cee7) form_midp_image_pane_t2

0x2518,	// (0x0005cef6) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0006a1ee) form_midp_image_pane_t

0x24e8,	// (0x0005cec6) list_single_midp_pane_g1

0xe5fd,	// (0x00068fdb) list_single_midp_pane_t1

0xc2b2,	// (0x00066c90) list_midp_form_item_pane_ParamLimits

0xc2b2,	// (0x00066c90) list_midp_form_item_pane

0xe387,	// (0x00068d65) list_midp_form_item_pane_t1

0xe396,	// (0x00068d74) midp_ticker_pane_g1

0xe3a2,	// (0x00068d80) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006a13b) midp_ticker_pane_g

0xa87b,	// (0x00065259) midp_ticker_pane_t1

0xc5b4,	// (0x00066f92) midp_editing_number_pane_t1

0x38d2,	// (0x0005e2b0) midp_editing_number_pane

0x38e1,	// (0x0005e2bf) midp_ticker_pane

0x3677,	// (0x0005e055) ai_message_heading_pane

0x7bac,	// (0x0006258a) bg_popup_window_pane_cp14

0x367f,	// (0x0005e05d) listscroll_ai_message_pane

0x35fd,	// (0x0005dfdb) ai_message_heading_pane_g1_ParamLimits

0x35fd,	// (0x0005dfdb) ai_message_heading_pane_g1

0x3609,	// (0x0005dfe7) ai_message_heading_pane_g2_ParamLimits

0x3609,	// (0x0005dfe7) ai_message_heading_pane_g2

0x3617,	// (0x0005dff5) ai_message_heading_pane_g3_ParamLimits

0x3617,	// (0x0005dff5) ai_message_heading_pane_g3

0x3623,	// (0x0005e001) ai_message_heading_pane_g4_ParamLimits

0x3623,	// (0x0005e001) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0006a32f) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0006a32f) ai_message_heading_pane_g

0x362f,	// (0x0005e00d) ai_message_heading_pane_t1_ParamLimits

0x362f,	// (0x0005e00d) ai_message_heading_pane_t1

0x3649,	// (0x0005e027) ai_message_heading_pane_t2_ParamLimits

0x3649,	// (0x0005e027) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0006a338) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0006a338) ai_message_heading_pane_t

0x365d,	// (0x0005e03b) bg_popup_heading_pane_cp1_ParamLimits

0x365d,	// (0x0005e03b) bg_popup_heading_pane_cp1

0x35eb,	// (0x0005dfc9) list_ai_message_pane_ParamLimits

0x35eb,	// (0x0005dfc9) list_ai_message_pane

0x8b88,	// (0x00063566) scroll_pane_cp10

0x3587,	// (0x0005df65) list_ai_message_pane_g1

0x358f,	// (0x0005df6d) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0006a30c) list_ai_message_pane_g

0x3597,	// (0x0005df75) list_ai_message_pane_t1_ParamLimits

0x3597,	// (0x0005df75) list_ai_message_pane_t1

0x35ac,	// (0x0005df8a) list_ai_message_pane_t2_ParamLimits

0x35ac,	// (0x0005df8a) list_ai_message_pane_t2

0x35c1,	// (0x0005df9f) list_ai_message_pane_t3_ParamLimits

0x35c1,	// (0x0005df9f) list_ai_message_pane_t3

0x35d6,	// (0x0005dfb4) list_ai_message_pane_t4_ParamLimits

0x35d6,	// (0x0005dfb4) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0006a311) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0006a311) list_ai_message_pane_t

0xc4bd,	// (0x00066e9b) cell_ai_soft_ind_pane_ParamLimits

0xc4bd,	// (0x00066e9b) cell_ai_soft_ind_pane

0xe3ae,	// (0x00068d8c) cell_ai_soft_ind_pane_g1_ParamLimits

0xe3ae,	// (0x00068d8c) cell_ai_soft_ind_pane_g1

0x7bac,	// (0x0006258a) grid_highlight_cp1

0xe3bb,	// (0x00068d99) text_secondary_cp56_ParamLimits

0xe3bb,	// (0x00068d99) text_secondary_cp56

0x3545,	// (0x0005df23) example_general_pane_ParamLimits

0x3545,	// (0x0005df23) example_general_pane

0x3551,	// (0x0005df2f) example_parent_pane_g1_ParamLimits

0x3551,	// (0x0005df2f) example_parent_pane_g1

0x355d,	// (0x0005df3b) example_parent_pane_t1_ParamLimits

0x355d,	// (0x0005df3b) example_parent_pane_t1

0xaefb,	// (0x000658d9) popup_preview_text_window_ParamLimits

0xaefb,	// (0x000658d9) popup_preview_text_window

0xe2b1,	// (0x00068c8f) list_single_pane_cp2_g4

0x8622,	// (0x00063000) bg_popup_preview_window_pane_ParamLimits

0x8622,	// (0x00063000) bg_popup_preview_window_pane

0x3299,	// (0x0005dc77) popup_preview_text_window_t1_ParamLimits

0x3299,	// (0x0005dc77) popup_preview_text_window_t1

0x32b7,	// (0x0005dc95) popup_preview_text_window_t2_ParamLimits

0x32b7,	// (0x0005dc95) popup_preview_text_window_t2

0x3300,	// (0x0005dcde) popup_preview_text_window_t3_ParamLimits

0x3300,	// (0x0005dcde) popup_preview_text_window_t3

0x3345,	// (0x0005dd23) popup_preview_text_window_t4_ParamLimits

0x3345,	// (0x0005dd23) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0006a2e0) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0006a2e0) popup_preview_text_window_t

0x33c3,	// (0x0005dda1) scroll_pane_cp11

0x234f,	// (0x0005cd2d) bg_popup_preview_window_pane_g1

0x324d,	// (0x0005dc2b) bg_popup_preview_window_pane_g2

0x3257,	// (0x0005dc35) bg_popup_preview_window_pane_g3

0x3261,	// (0x0005dc3f) bg_popup_preview_window_pane_g4

0x326b,	// (0x0005dc49) bg_popup_preview_window_pane_g5

0x3275,	// (0x0005dc53) bg_popup_preview_window_pane_g6

0x327d,	// (0x0005dc5b) bg_popup_preview_window_pane_g7

0x3285,	// (0x0005dc63) bg_popup_preview_window_pane_g8

0xde86,	// (0x00068864) aid_popup_width_pane

0xae6b,	// (0x00065849) popup_midp_note_alarm_window_ParamLimits

0xae6b,	// (0x00065849) popup_midp_note_alarm_window

0x8a53,	// (0x00063431) data_form_pane_ParamLimits

0xa36a,	// (0x00064d48) form_field_data_pane_g1

0xa374,	// (0x00064d52) form_field_data_pane_t1_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_ParamLimits

0xdf73,	// (0x00068951) data_form_wide_pane_ParamLimits

0xdf84,	// (0x00068962) form_field_data_wide_pane_g1

0xdf90,	// (0x0006896e) form_field_data_wide_pane_t1_ParamLimits

0x87da,	// (0x000631b8) input_focus_pane_cp6_ParamLimits

0xa4b5,	// (0x00064e93) input_popup_find_pane_g1_ParamLimits

0xa4b5,	// (0x00064e93) input_popup_find_pane_g1

0xf1bb,	// (0x00069b99) aid_navi_side_left_pane

0xf1d0,	// (0x00069bae) aid_navi_side_right_pane

0x2c62,	// (0x0005d640) bg_popup_window_pane_cp30_ParamLimits

0x2c62,	// (0x0005d640) bg_popup_window_pane_cp30

0x2cdc,	// (0x0005d6ba) popup_midp_note_alarm_window_g1_ParamLimits

0x2cdc,	// (0x0005d6ba) popup_midp_note_alarm_window_g1

0x2d0c,	// (0x0005d6ea) popup_midp_note_alarm_window_t1_ParamLimits

0x2d0c,	// (0x0005d6ea) popup_midp_note_alarm_window_t1

0x2dad,	// (0x0005d78b) popup_midp_note_alarm_window_t2_ParamLimits

0x2dad,	// (0x0005d78b) popup_midp_note_alarm_window_t2

0x2e5b,	// (0x0005d839) popup_midp_note_alarm_window_t3_ParamLimits

0x2e5b,	// (0x0005d839) popup_midp_note_alarm_window_t3

0x2e8d,	// (0x0005d86b) popup_midp_note_alarm_window_t4_ParamLimits

0x2e8d,	// (0x0005d86b) popup_midp_note_alarm_window_t4

0x2eb3,	// (0x0005d891) popup_midp_note_alarm_window_t5_ParamLimits

0x2eb3,	// (0x0005d891) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0006a27d) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0006a27d) popup_midp_note_alarm_window_t

0x2f5f,	// (0x0005d93d) wait_bar_pane_cp1_ParamLimits

0x2f5f,	// (0x0005d93d) wait_bar_pane_cp1

0x7bac,	// (0x0006258a) wait_anim_pane_copy1

0x7bac,	// (0x0006258a) wait_border_pane_copy1

0x2947,	// (0x0005d325) wait_border_pane_g1_copy1

0xdfaa,	// (0x00068988) form_field_popup_pane_g1

0xa38e,	// (0x00064d6c) form_field_popup_pane_t1_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_cp7_ParamLimits

0x8a8d,	// (0x0006346b) list_form_pane_ParamLimits

0xdfb2,	// (0x00068990) form_field_popup_wide_pane_g1

0xdfba,	// (0x00068998) form_field_popup_wide_pane_t1_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_cp8_ParamLimits

0x8a99,	// (0x00063477) list_form_wide_pane_ParamLimits

0xc6bb,	// (0x00067099) aid_size_cell_graphic_pane

0xa40d,	// (0x00064deb) data_form_pane_t1_ParamLimits

0xb688,	// (0x00066066) data_form_wide_pane_t1_ParamLimits

0xb2fd,	// (0x00065cdb) bg_status_flat_pane

0x9acf,	// (0x000644ad) title_pane_t1_ParamLimits

0x7bc2,	// (0x000625a0) title_pane_t2_ParamLimits

0x7be8,	// (0x000625c6) title_pane_t3_ParamLimits

0xf557,	// (0x00069f35) title_pane_t_ParamLimits

0xa5e0,	// (0x00064fbe) level_1_signal_ParamLimits

0xa5f2,	// (0x00064fd0) level_2_signal_ParamLimits

0xa605,	// (0x00064fe3) level_3_signal_ParamLimits

0xa618,	// (0x00064ff6) level_4_signal_ParamLimits

0xa62b,	// (0x00065009) level_5_signal_ParamLimits

0xa63e,	// (0x0006501c) level_6_signal_ParamLimits

0xa651,	// (0x0006502f) level_7_signal_ParamLimits

0xa5e0,	// (0x00064fbe) level_1_battery_ParamLimits

0xa5f2,	// (0x00064fd0) level_2_battery_ParamLimits

0xa605,	// (0x00064fe3) level_3_battery_ParamLimits

0xa618,	// (0x00064ff6) level_4_battery_ParamLimits

0xa62b,	// (0x00065009) level_5_battery_ParamLimits

0xa63e,	// (0x0006501c) level_6_battery_ParamLimits

0xa651,	// (0x0006502f) level_7_battery_ParamLimits

0x2b67,	// (0x0005d545) bg_status_flat_pane_g1

0x2b6f,	// (0x0005d54d) bg_status_flat_pane_g2

0x2b77,	// (0x0005d555) bg_status_flat_pane_g3

0x2b7f,	// (0x0005d55d) bg_status_flat_pane_g4

0x2b87,	// (0x0005d565) bg_status_flat_pane_g5

0x2b8f,	// (0x0005d56d) bg_status_flat_pane_g6

0x2b97,	// (0x0005d575) bg_status_flat_pane_g7

0x9b63,	// (0x00064541) tabs_3_active_pane_t1_ParamLimits

0x9b63,	// (0x00064541) tabs_3_passive_pane_t1_ParamLimits

0x9b7d,	// (0x0006455b) tabs_4_active_pane_t1_ParamLimits

0x9b7d,	// (0x0006455b) tabs_4_1_passive_pane_t1_ParamLimits

0xa4cb,	// (0x00064ea9) tabs_2_active_pane_t1_ParamLimits

0xa4cb,	// (0x00064ea9) tabs_2_passive_pane_t1_ParamLimits

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp4_ParamLimits

0xa4dd,	// (0x00064ebb) tabs_2_long_active_pane_t1_ParamLimits

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp4_ParamLimits

0x0716,	// (0x0005b0f4) list_single_midp_graphic_pane_t1_ParamLimits

0x7bfa,	// (0x000625d8) bg_active_tab_pane_cp5_ParamLimits

0xa4f0,	// (0x00064ece) tabs_3_long_active_pane_t1_ParamLimits

0x1e13,	// (0x0005c7f1) bg_passive_tab_pane_cp5_ParamLimits

0x0716,	// (0x0005b0f4) list_single_midp_graphic_pane_t1

0xb2fd,	// (0x00065cdb) bg_status_flat_pane_ParamLimits

0x1fc7,	// (0x0005c9a5) indicator_pane_cp2_ParamLimits

0x1fc7,	// (0x0005c9a5) indicator_pane_cp2

0xc0e3,	// (0x00066ac1) navi_pane_srt_ParamLimits

0xc0e3,	// (0x00066ac1) navi_pane_srt

0x212e,	// (0x0005cb0c) popup_clock_digital_analogue_window_cp1

0x7c3e,	// (0x0006261c) indicator_pane_t1

0xe36a,	// (0x00068d48) copy_highlight_pane

0xe36a,	// (0x00068d48) cursor_graphics_pane

0xe36a,	// (0x00068d48) graphic_within_text_pane

0xe36a,	// (0x00068d48) link_highlight_pane

0x3386,	// (0x0005dd64) popup_preview_text_window_t5_ParamLimits

0x3386,	// (0x0005dd64) popup_preview_text_window_t5

0xe3d7,	// (0x00068db5) cursor_digital_pane

0xe3d7,	// (0x00068db5) cursor_primary_pane

0xe3e8,	// (0x00068dc6) cursor_primary_small_pane

0xe3f0,	// (0x00068dce) cursor_secondary_pane

0xe3f8,	// (0x00068dd6) cursor_title_pane

0xe3d7,	// (0x00068db5) link_highlight_digital_pane

0xe3df,	// (0x00068dbd) link_highlight_primary_pane

0xe3e8,	// (0x00068dc6) link_highlight_primary_small_pane

0xe3f0,	// (0x00068dce) link_highlight_secondary_pane

0xe3f8,	// (0x00068dd6) link_highlight_title_pane

0xe3d7,	// (0x00068db5) copy_highlight_digital_pane

0xe3d7,	// (0x00068db5) copy_highlight_primary_pane

0xe3e8,	// (0x00068dc6) copy_highlight_primary_small_pane

0xe3f0,	// (0x00068dce) copy_highlight_secondary_pane

0xe3f8,	// (0x00068dd6) copy_highlight_title_pane

0xe3f0,	// (0x00068dce) graphic_text_digital_pane

0x2c05,	// (0x0005d5e3) graphic_text_primary_pane

0x2c0e,	// (0x0005d5ec) graphic_text_primary_small_pane

0xe3e8,	// (0x00068dc6) graphic_text_secondary_pane

0xe3d7,	// (0x00068db5) graphic_text_title_pane

0xa88d,	// (0x0006526b) cursor_primary_pane_g1

0x2bf7,	// (0x0005d5d5) cursor_text_primary_t1

0xc33d,	// (0x00066d1b) cursor_primary_small_pane_g1

0x2be9,	// (0x0005d5c7) cursor_text_primary_small_t1

0xc333,	// (0x00066d11) cursor_primary_small_pane_g1_copy1

0x2bd1,	// (0x0005d5af) cursor_text_primary_small_t1_copy1

0x2baf,	// (0x0005d58d) cursor_text_title_t1

0xc329,	// (0x00066d07) cursor_title_pane_g1

0xa88d,	// (0x0006526b) cursor_digital_pane_g1

0xe400,	// (0x00068dde) cursor_text_digital_t1

0xe40e,	// (0x00068dec) link_highlight_primary_pane_g1

0x2b58,	// (0x0005d536) link_highlight_primary_pane_t1

0xe40e,	// (0x00068dec) link_highlight_primary_small_pane_g1

0xe416,	// (0x00068df4) link_highlight_primary_small_pane_t1

0xe425,	// (0x00068e03) link_highlight_secondary_pane_g1

0xe42d,	// (0x00068e0b) link_highlight_secondary_pane_t1

0x2acc,	// (0x0005d4aa) link_highlight_title_pane_g1

0x2ad4,	// (0x0005d4b2) link_highlight_title_pane_t1

0x2ab5,	// (0x0005d493) link_highlight_digital_pane_g1

0x2abd,	// (0x0005d49b) link_highlight_digital_pane_t1

0x297d,	// (0x0005d35b) copy_highlight_primary_pane_g1

0x2994,	// (0x0005d372) copy_highlight_primary_pane_t1

0x297d,	// (0x0005d35b) copy_highlight_primary_small_pane_g1

0x2985,	// (0x0005d363) copy_highlight_primary_small_pane_t1

0xe43c,	// (0x00068e1a) copy_highlight_secondary_pane_g1

0xe444,	// (0x00068e22) copy_highlight_secondary_pane_t1

0x2966,	// (0x0005d344) copy_highlight_title_pane_g1

0x296e,	// (0x0005d34c) copy_highlight_title_pane_t1

0x297d,	// (0x0005d35b) copy_highlight_digital_pane_g1

0x3e33,	// (0x0005e811) copy_highlight_digital_pane_t1

0x3d87,	// (0x0005e765) graphic_text_primary_pane_g1

0x3e17,	// (0x0005e7f5) graphic_text_primary_pane_t1

0x3e25,	// (0x0005e803) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0006a3ac) graphic_text_primary_pane_t

0x3df3,	// (0x0005e7d1) graphic_text_primary_small_pane_g1

0x3dfb,	// (0x0005e7d9) graphic_text_primary_small_pane_t1

0x3e09,	// (0x0005e7e7) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0006a3a7) graphic_text_primary_small_pane_t

0x3dcf,	// (0x0005e7ad) graphic_text_secondary_pane_g1

0x3dd7,	// (0x0005e7b5) graphic_text_secondary_pane_t1

0x3de5,	// (0x0005e7c3) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0006a3a2) graphic_text_secondary_pane_t

0x3dab,	// (0x0005e789) graphic_text_title_pane_g1

0x3db3,	// (0x0005e791) graphic_text_title_pane_t1

0x3dc1,	// (0x0005e79f) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0006a39d) graphic_text_title_pane_t

0x3d87,	// (0x0005e765) graphic_text_digital_pane_g1

0x3d8f,	// (0x0005e76d) graphic_text_digital_pane_t1

0x3d9d,	// (0x0005e77b) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0006a398) graphic_text_digital_pane_t

0x7bfa,	// (0x000625d8) navi_icon_pane_srt_ParamLimits

0x7bfa,	// (0x000625d8) navi_icon_pane_srt

0x7bac,	// (0x0006258a) navi_midp_pane_srt

0x7bac,	// (0x0006258a) navi_navi_pane_srt

0x7bfa,	// (0x000625d8) navi_text_pane_srt_ParamLimits

0x7bfa,	// (0x000625d8) navi_text_pane_srt

0x3d52,	// (0x0005e730) navi_navi_icon_text_pane_srt

0x3d5a,	// (0x0005e738) navi_navi_pane_srt_g1_ParamLimits

0x3d5a,	// (0x0005e738) navi_navi_pane_srt_g1

0x3d6c,	// (0x0005e74a) navi_navi_pane_srt_g2_ParamLimits

0x3d6c,	// (0x0005e74a) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0006a393) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0006a393) navi_navi_pane_srt_g

0x3d7e,	// (0x0005e75c) navi_navi_tabs_pane_srt

0x3d52,	// (0x0005e730) navi_navi_text_pane_srt

0x3d52,	// (0x0005e730) navi_navi_volume_pane_srt

0x3d43,	// (0x0005e721) navi_navi_text_pane_srt_t1

0x0b45,	// (0x0005b523) navi_navi_volume_pane_srt_g1

0x0b4d,	// (0x0005b52b) volume_small_pane_srt_ParamLimits

0x0b4d,	// (0x0005b52b) volume_small_pane_srt

0xf496,	// (0x00069e74) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x00069e74) volume_small_pane_srt_g1

0xf4a6,	// (0x00069e84) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x00069e84) volume_small_pane_srt_g2

0xf4b7,	// (0x00069e95) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x00069e95) volume_small_pane_srt_g3

0xf4c8,	// (0x00069ea6) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x00069ea6) volume_small_pane_srt_g4

0xf4d9,	// (0x00069eb7) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x00069eb7) volume_small_pane_srt_g5

0xf4ea,	// (0x00069ec8) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x00069ec8) volume_small_pane_srt_g6

0xf4fb,	// (0x00069ed9) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x00069ed9) volume_small_pane_srt_g7

0xf50c,	// (0x00069eea) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x00069eea) volume_small_pane_srt_g8

0xf51d,	// (0x00069efb) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x00069efb) volume_small_pane_srt_g9

0xf52e,	// (0x00069f0c) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x00069f0c) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0006a140) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0006a140) volume_small_pane_srt_g

0x86d7,	// (0x000630b5) query_popup_data_pane_cp2

0x3d29,	// (0x0005e707) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3d29,	// (0x0005e707) navi_navi_icon_text_pane_srt_t1

0x2c05,	// (0x0005d5e3) navi_tabs_2_long_pane_srt

0x2c05,	// (0x0005d5e3) navi_tabs_2_pane_srt

0x2c05,	// (0x0005d5e3) navi_tabs_3_long_pane_srt

0x2c05,	// (0x0005d5e3) navi_tabs_3_pane_srt

0x2c05,	// (0x0005d5e3) navi_tabs_4_pane_srt

0x0b25,	// (0x0005b503) tabs_2_active_pane_srt_ParamLimits

0x0b25,	// (0x0005b503) tabs_2_active_pane_srt

0x0b35,	// (0x0005b513) tabs_2_passive_pane_srt_ParamLimits

0x0b35,	// (0x0005b513) tabs_2_passive_pane_srt

0x23db,	// (0x0005cdb9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x23db,	// (0x0005cdb9) bg_passive_tab_pane_cp1_srt

0x3cf5,	// (0x0005e6d3) bg_passive_tab_pane_g1_cp1_srt

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp1_srt

0x3cfe,	// (0x0005e6dc) bg_passive_tab_pane_g3_cp1_srt

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp1_srt_ParamLimits

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp1_srt

0x3d07,	// (0x0005e6e5) tabs_2_active_pane_srt_g1

0xc6fd,	// (0x000670db) tabs_2_active_pane_srt_t1_ParamLimits

0xc6fd,	// (0x000670db) tabs_2_active_pane_srt_t1

0x3cf5,	// (0x0005e6d3) bg_active_tab_pane_g1_cp1_srt

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp1_srt

0x3cfe,	// (0x0005e6dc) bg_active_tab_pane_g3_cp1_srt

0x0af2,	// (0x0005b4d0) tabs_3_active_pane_srt_ParamLimits

0x0af2,	// (0x0005b4d0) tabs_3_active_pane_srt

0x0b03,	// (0x0005b4e1) tabs_3_passive_pane_cp_srt_ParamLimits

0x0b03,	// (0x0005b4e1) tabs_3_passive_pane_cp_srt

0x0b14,	// (0x0005b4f2) tabs_3_passive_pane_srt_ParamLimits

0x0b14,	// (0x0005b4f2) tabs_3_passive_pane_srt

0x23db,	// (0x0005cdb9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x23db,	// (0x0005cdb9) bg_passive_tab_pane_cp2_srt

0xe453,	// (0x00068e31) bg_passive_tab_pane_g1_cp2_srt

0xe010,	// (0x000689ee) bg_passive_tab_pane_g2_cp2_srt

0xe45c,	// (0x00068e3a) bg_passive_tab_pane_g3_cp2_srt

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp2_srt_ParamLimits

0x7cfe,	// (0x000626dc) bg_active_tab_pane_cp2_srt

0x3cdb,	// (0x0005e6b9) tabs_3_active_pane_srt_g1

0xc6e7,	// (0x000670c5) tabs_3_active_pane_srt_t1_ParamLimits

0xc6e7,	// (0x000670c5) tabs_3_active_pane_srt_t1

0xe453,	// (0x00068e31) bg_active_tab_pane_g1_cp2_srt

0xe010,	// (0x000689ee) bg_active_tab_pane_g2_cp2_srt

0xe45c,	// (0x00068e3a) bg_active_tab_pane_g3_cp2_srt

0x0aaa,	// (0x0005b488) tabs_4_active_pane_srt_ParamLimits

0x0aaa,	// (0x0005b488) tabs_4_active_pane_srt

0x0abc,	// (0x0005b49a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0abc,	// (0x0005b49a) tabs_4_passive_pane_cp2_srt

0x003f,	// (0x0005aa1d) aid_size_cell_toolbar

0x3731,	// (0x0005e10f) main_idle_act_pane_ParamLimits

0x0220,	// (0x0005abfe) popup_large_graphic_colour_window_ParamLimits

0xb1bf,	// (0x00065b9d) popup_toolbar_window_ParamLimits

0xb1bf,	// (0x00065b9d) popup_toolbar_window

0x3917,	// (0x0005e2f5) list_single_graphic_2heading_pane_ParamLimits

0x3917,	// (0x0005e2f5) list_single_graphic_2heading_pane

0x8d60,	// (0x0006373e) aid_size_cell_apps_grid_lsc_pane

0x8d72,	// (0x00063750) aid_size_cell_apps_grid_prt_pane

0x1e13,	// (0x0005c7f1) bg_wml_button_pane_cp1_ParamLimits

0x1e13,	// (0x0005c7f1) bg_wml_button_pane_cp1

0xc2e5,	// (0x00066cc3) form_midp_field_text_pane_t1_ParamLimits

0x23db,	// (0x0005cdb9) input_focus_pane_cp050_ParamLimits

0x2614,	// (0x0005cff2) list_midp_form_text_pane_ParamLimits

0x25c6,	// (0x0005cfa4) input_focus_pane_cp051_ParamLimits

0x25da,	// (0x0005cfb8) list_midp_choice_pane_ParamLimits

0x2494,	// (0x0005ce72) list_single_2graphic_pane_cp3_ParamLimits

0x2494,	// (0x0005ce72) list_single_2graphic_pane_cp3

0x24aa,	// (0x0005ce88) list_single_midp_graphic_pane_ParamLimits

0x24aa,	// (0x0005ce88) list_single_midp_graphic_pane

0xe4d7,	// (0x00068eb5) list_single_graphic_2heading_pane_g1_ParamLimits

0xe4d7,	// (0x00068eb5) list_single_graphic_2heading_pane_g1

0xe4e3,	// (0x00068ec1) list_single_graphic_2heading_pane_g4_ParamLimits

0xe4e3,	// (0x00068ec1) list_single_graphic_2heading_pane_g4

0xe4ef,	// (0x00068ecd) list_single_graphic_2heading_pane_g5_ParamLimits

0xe4ef,	// (0x00068ecd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006a193) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006a193) list_single_graphic_2heading_pane_g

0xe4fb,	// (0x00068ed9) list_single_graphic_2heading_pane_t1_ParamLimits

0xe4fb,	// (0x00068ed9) list_single_graphic_2heading_pane_t1

0xe50f,	// (0x00068eed) list_single_graphic_2heading_pane_t2_ParamLimits

0xe50f,	// (0x00068eed) list_single_graphic_2heading_pane_t2

0xe52b,	// (0x00068f09) list_single_graphic_2heading_pane_t3_ParamLimits

0xe52b,	// (0x00068f09) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006a19a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006a19a) list_single_graphic_2heading_pane_t

0x2281,	// (0x0005cc5f) bg_popup_sub_pane_cp2

0x22ab,	// (0x0005cc89) grid_toobar_pane

0x0686,	// (0x0005b064) cell_toolbar_pane_ParamLimits

0x0686,	// (0x0005b064) cell_toolbar_pane

0x22f3,	// (0x0005ccd1) cell_toolbar_pane_g1_ParamLimits

0x22f3,	// (0x0005ccd1) cell_toolbar_pane_g1

0x2307,	// (0x0005cce5) cell_toolbar_pane_g2_ParamLimits

0x2307,	// (0x0005cce5) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0006a1a8) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0006a1a8) cell_toolbar_pane_g

0x2329,	// (0x0005cd07) grid_highlight_pane_cp2_ParamLimits

0x2329,	// (0x0005cd07) grid_highlight_pane_cp2

0x2343,	// (0x0005cd21) toolbar_button_pane

0x234f,	// (0x0005cd2d) toolbar_button_pane_g1

0x2357,	// (0x0005cd35) toolbar_button_pane_g2

0x235f,	// (0x0005cd3d) toolbar_button_pane_g3

0x2367,	// (0x0005cd45) toolbar_button_pane_g4

0x236f,	// (0x0005cd4d) toolbar_button_pane_g5

0x2377,	// (0x0005cd55) toolbar_button_pane_g6

0x237f,	// (0x0005cd5d) toolbar_button_pane_g7

0x2387,	// (0x0005cd65) toolbar_button_pane_g8

0x238f,	// (0x0005cd6d) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0006a1ad) toolbar_button_pane_g

0x06be,	// (0x0005b09c) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06be,	// (0x0005b09c) list_single_2graphic_pane_g1_cp3

0xb493,	// (0x00065e71) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb493,	// (0x00065e71) list_single_2graphic_pane_g2_cp3

0x06db,	// (0x0005b0b9) list_single_2graphic_pane_g3_cp3

0x06e3,	// (0x0005b0c1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06e3,	// (0x0005b0c1) list_single_2graphic_pane_g4_cp3

0x06ef,	// (0x0005b0cd) list_single_2graphic_pane_t1_cp3_ParamLimits

0x06ef,	// (0x0005b0cd) list_single_2graphic_pane_t1_cp3

0x070a,	// (0x0005b0e8) list_single_midp_graphic_pane_g2_ParamLimits

0x070a,	// (0x0005b0e8) list_single_midp_graphic_pane_g2

0xe4bf,	// (0x00068e9d) aid_zoom_text_primary

0xe4c7,	// (0x00068ea5) aid_zoom_text_secondary

0xa8e5,	// (0x000652c3) status_small_pane_g7_ParamLimits

0xa8e5,	// (0x000652c3) status_small_pane_g7

0xa908,	// (0x000652e6) status_small_pane_t1_ParamLimits

0x9a9f,	// (0x0006447d) title_pane_g2

0x0003,

0xf54e,	// (0x00069f2c) title_pane_g

0x9d3f,	// (0x0006471d) aid_size_cell_colour_1_pane_ParamLimits

0x9d3f,	// (0x0006471d) aid_size_cell_colour_1_pane

0x9d53,	// (0x00064731) aid_size_cell_colour_2_pane_ParamLimits

0x9d53,	// (0x00064731) aid_size_cell_colour_2_pane

0x9d67,	// (0x00064745) aid_size_cell_colour_3_pane_ParamLimits

0x9d67,	// (0x00064745) aid_size_cell_colour_3_pane

0x9d7b,	// (0x00064759) aid_size_cell_colour_4_pane_ParamLimits

0x9d7b,	// (0x00064759) aid_size_cell_colour_4_pane

0xf0f7,	// (0x00069ad5) title_pane_stacon_g1_ParamLimits

0xf0f7,	// (0x00069ad5) title_pane_stacon_g1

0x29eb,	// (0x0005d3c9) popup_note_wait_window_g3_ParamLimits

0x29eb,	// (0x0005d3c9) popup_note_wait_window_g3

0x2a62,	// (0x0005d440) popup_note_wait_window_t5_ParamLimits

0x2a62,	// (0x0005d440) popup_note_wait_window_t5

0x7bac,	// (0x0006258a) main_feb_china_hwr_fs_writing_pane

0xab58,	// (0x00065536) popup_feb_china_hwr_fs_window_ParamLimits

0xab58,	// (0x00065536) popup_feb_china_hwr_fs_window

0xb4a4,	// (0x00065e82) aid_size_cell_hwr_fs_ParamLimits

0xb4a4,	// (0x00065e82) aid_size_cell_hwr_fs

0x23db,	// (0x0005cdb9) bg_popup_sub_pane_cp3_ParamLimits

0x23db,	// (0x0005cdb9) bg_popup_sub_pane_cp3

0xb4b9,	// (0x00065e97) grid_hwr_fs_pane_ParamLimits

0xb4b9,	// (0x00065e97) grid_hwr_fs_pane

0x0759,	// (0x0005b137) linegrid_hwr_fs_pane_ParamLimits

0x0759,	// (0x0005b137) linegrid_hwr_fs_pane

0xb4d1,	// (0x00065eaf) cell_hwr_fs_pane_ParamLimits

0xb4d1,	// (0x00065eaf) cell_hwr_fs_pane

0x23e7,	// (0x0005cdc5) linegrid_hwr_fs_pane_g1_ParamLimits

0x23e7,	// (0x0005cdc5) linegrid_hwr_fs_pane_g1

0xc286,	// (0x00066c64) linegrid_hwr_fs_pane_g2_ParamLimits

0xc286,	// (0x00066c64) linegrid_hwr_fs_pane_g2

0x2405,	// (0x0005cde3) linegrid_hwr_fs_pane_g3_ParamLimits

0x2405,	// (0x0005cde3) linegrid_hwr_fs_pane_g3

0x078d,	// (0x0005b16b) linegrid_hwr_fs_pane_g4_ParamLimits

0x078d,	// (0x0005b16b) linegrid_hwr_fs_pane_g4

0x07ab,	// (0x0005b189) linegrid_hwr_fs_pane_g5_ParamLimits

0x07ab,	// (0x0005b189) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0006a1d3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0006a1d3) linegrid_hwr_fs_pane_g

0x2411,	// (0x0005cdef) cell_hwr_fs_pane_g1_ParamLimits

0x2411,	// (0x0005cdef) cell_hwr_fs_pane_g1

0x21bc,	// (0x0005cb9a) cell_hwr_fs_pane_g2_ParamLimits

0x21bc,	// (0x0005cb9a) cell_hwr_fs_pane_g2

0xc298,	// (0x00066c76) cell_hwr_fs_pane_g3_ParamLimits

0xc298,	// (0x00066c76) cell_hwr_fs_pane_g3

0xc2a5,	// (0x00066c83) cell_hwr_fs_pane_g4_ParamLimits

0xc2a5,	// (0x00066c83) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0006a1de) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0006a1de) cell_hwr_fs_pane_g

0xb4f7,	// (0x00065ed5) cell_hwr_fs_pane_t1

0x7bac,	// (0x0006258a) grid_highlight_pane_cp6

0x7bac,	// (0x0006258a) main_idle_act2_pane

0x8b6f,	// (0x0006354d) aid_inside_area_popup_secondary

0xc35d,	// (0x00066d3b) aid_inside_area_window_primary_ParamLimits

0xc35d,	// (0x00066d3b) aid_inside_area_window_primary

0x3e42,	// (0x0005e820) ai2_news_ticker_pane

0x3e4a,	// (0x0005e828) aid_size_cell_ai1_link_ParamLimits

0x3e4a,	// (0x0005e828) aid_size_cell_ai1_link

0x3e64,	// (0x0005e842) popup_ai2_data_window_ParamLimits

0x3e64,	// (0x0005e842) popup_ai2_data_window

0x3e82,	// (0x0005e860) popup_ai2_link_window_ParamLimits

0x3e82,	// (0x0005e860) popup_ai2_link_window

0x23db,	// (0x0005cdb9) bg_popup_sub_pane_cp4_ParamLimits

0x23db,	// (0x0005cdb9) bg_popup_sub_pane_cp4

0x3e98,	// (0x0005e876) grid_ai2_link_pane_ParamLimits

0x3e98,	// (0x0005e876) grid_ai2_link_pane

0x3eaf,	// (0x0005e88d) popup_ai2_link_window_g1_ParamLimits

0x3eaf,	// (0x0005e88d) popup_ai2_link_window_g1

0x3ebb,	// (0x0005e899) popup_ai2_link_window_g2_ParamLimits

0x3ebb,	// (0x0005e899) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0006a3b1) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0006a3b1) popup_ai2_link_window_g

0x3ecc,	// (0x0005e8aa) ai2_mp_button_pane

0x3ed4,	// (0x0005e8b2) ai2_mp_volume_pane

0x25c6,	// (0x0005cfa4) bg_popup_sub_pane_cp5_ParamLimits

0x25c6,	// (0x0005cfa4) bg_popup_sub_pane_cp5

0x3edc,	// (0x0005e8ba) heading_ai2_gene_pane_ParamLimits

0x3edc,	// (0x0005e8ba) heading_ai2_gene_pane

0x3ee8,	// (0x0005e8c6) list_ai2_gene_pane_ParamLimits

0x3ee8,	// (0x0005e8c6) list_ai2_gene_pane

0x3f30,	// (0x0005e90e) cell_ai2_link_pane_ParamLimits

0x3f30,	// (0x0005e90e) cell_ai2_link_pane

0x3f46,	// (0x0005e924) cell_ai2_link_pane_g1

0x7bac,	// (0x0006258a) grid_highlight_pane_cp7

0x0b62,	// (0x0005b540) ai2_mp_volume_pane_g1

0x4019,	// (0x0005e9f7) ai2_mp_volume_pane_g2

0x3f8e,	// (0x0005e96c) list_ai2_gene_pane_t1

0x4021,	// (0x0005e9ff) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0006a3ca) ai2_mp_volume_pane_g

0x0b6a,	// (0x0005b548) volume_small_pane_cp3

0x4029,	// (0x0005ea07) aid_size_cell_ai2_button

0x4031,	// (0x0005ea0f) grid_ai2_button_pane

0x403a,	// (0x0005ea18) cell_ai2_button_pane_ParamLimits

0x403a,	// (0x0005ea18) cell_ai2_button_pane

0x7ba2,	// (0x00062580) cell_ai2_button_pane_g1

0x7bac,	// (0x0006258a) grid_highlight_pane_cp8

0x3fd9,	// (0x0005e9b7) ai2_gene_pane_t1_ParamLimits

0x3fd9,	// (0x0005e9b7) ai2_gene_pane_t1

0xaad4,	// (0x000654b2) aid_height_parent_landscape

0xc504,	// (0x00066ee2) aid_height_set_list

0x3731,	// (0x0005e10f) aid_size_parent

0xc6bb,	// (0x00067099) aid_size_cell_graphic_pane_ParamLimits

0x3ef8,	// (0x0005e8d6) popup_ai2_data_window_g1_ParamLimits

0x3ef8,	// (0x0005e8d6) popup_ai2_data_window_g1

0x3f04,	// (0x0005e8e2) ai2_news_ticker_pane_g1

0x3f0c,	// (0x0005e8ea) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0006a3b6) ai2_news_ticker_pane_g

0x3f14,	// (0x0005e8f2) ai2_news_ticker_pane_t1

0x3f22,	// (0x0005e900) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0006a3bb) ai2_news_ticker_pane_t

0x3f4f,	// (0x0005e92d) heading_ai2_gene_pane_g1

0x3f57,	// (0x0005e935) heading_ai2_gene_pane_t1_ParamLimits

0x3f57,	// (0x0005e935) heading_ai2_gene_pane_t1

0x3f6c,	// (0x0005e94a) list_highlight_pane_cp6

0x3f74,	// (0x0005e952) ai2_gene_pane_ParamLimits

0x3f74,	// (0x0005e952) ai2_gene_pane

0x3f9c,	// (0x0005e97a) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0006a3c0) list_ai2_gene_pane_t

0x3faa,	// (0x0005e988) list_highlight_pane_cp8_ParamLimits

0x3faa,	// (0x0005e988) list_highlight_pane_cp8

0x3fbb,	// (0x0005e999) ai2_gene_pane_g1_ParamLimits

0x3fbb,	// (0x0005e999) ai2_gene_pane_g1

0x3fcd,	// (0x0005e9ab) ai2_gene_pane_g2_ParamLimits

0x3fcd,	// (0x0005e9ab) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0006a3c5) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0006a3c5) ai2_gene_pane_g

0x89f5,	// (0x000633d3) scroll_pane_cp12

0xaa91,	// (0x0006546f) control_pane_t3_ParamLimits

0xaa91,	// (0x0006546f) control_pane_t3

0xa8f9,	// (0x000652d7) status_small_pane_g8_ParamLimits

0xa8f9,	// (0x000652d7) status_small_pane_g8

0xabfa,	// (0x000655d8) popup_find_window_ParamLimits

0xaeab,	// (0x00065889) popup_note_image_window_ParamLimits

0xe543,	// (0x00068f21) list_double2_graphic_pane_vc_g1_ParamLimits

0xe543,	// (0x00068f21) list_double2_graphic_pane_vc_g1

0xdeb3,	// (0x00068891) list_double2_graphic_pane_vc_g2_ParamLimits

0xdeb3,	// (0x00068891) list_double2_graphic_pane_vc_g2

0x22e7,	// (0x0005ccc5) list_double2_graphic_pane_vc_g3_ParamLimits

0x22e7,	// (0x0005ccc5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006a1a1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006a1a1) list_double2_graphic_pane_vc_g

0xe54f,	// (0x00068f2d) list_double2_graphic_pane_vc_t1_ParamLimits

0xe54f,	// (0x00068f2d) list_double2_graphic_pane_vc_t1

0xdeb3,	// (0x00068891) list_single_heading_pane_vc_g1_ParamLimits

0xdeb3,	// (0x00068891) list_single_heading_pane_vc_g1

0x22e7,	// (0x0005ccc5) list_single_heading_pane_vc_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_single_heading_pane_vc_g

0xe565,	// (0x00068f43) list_single_heading_pane_vc_t1_ParamLimits

0xe565,	// (0x00068f43) list_single_heading_pane_vc_t1

0xe57b,	// (0x00068f59) list_single_heading_pane_vc_t2_ParamLimits

0xe57b,	// (0x00068f59) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0006a1c2) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0006a1c2) list_single_heading_pane_vc_t

0x2397,	// (0x0005cd75) list_setting_number_pane_vc_g1_ParamLimits

0x2397,	// (0x0005cd75) list_setting_number_pane_vc_g1

0x23a3,	// (0x0005cd81) list_setting_number_pane_vc_g2_ParamLimits

0x23a3,	// (0x0005cd81) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006a1c7) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006a1c7) list_setting_number_pane_vc_g

0xe58d,	// (0x00068f6b) list_setting_number_pane_vc_t1_ParamLimits

0xe58d,	// (0x00068f6b) list_setting_number_pane_vc_t1

0xe5a1,	// (0x00068f7f) list_setting_number_pane_vc_t2_ParamLimits

0xe5a1,	// (0x00068f7f) list_setting_number_pane_vc_t2

0xe5bd,	// (0x00068f9b) list_setting_number_pane_vc_t3_ParamLimits

0xe5bd,	// (0x00068f9b) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0006a1cc) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0006a1cc) list_setting_number_pane_vc_t

0xe5eb,	// (0x00068fc9) set_value_pane_vc_ParamLimits

0xe5eb,	// (0x00068fc9) set_value_pane_vc

0x3917,	// (0x0005e2f5) list_double2_graphic_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double2_graphic_pane_vc

0x3917,	// (0x0005e2f5) list_double2_large_graphic_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double2_large_graphic_pane_vc

0x3917,	// (0x0005e2f5) list_double2_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double2_pane_vc

0x3917,	// (0x0005e2f5) list_double_graphic_heading_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double_graphic_heading_pane_vc

0x3917,	// (0x0005e2f5) list_double_graphic_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double_graphic_pane_vc

0x3917,	// (0x0005e2f5) list_double_heading_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double_heading_pane_vc

0x392b,	// (0x0005e309) list_double_large_graphic_pane_vc_ParamLimits

0x392b,	// (0x0005e309) list_double_large_graphic_pane_vc

0x3917,	// (0x0005e2f5) list_double_number_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double_number_pane_vc

0x3917,	// (0x0005e2f5) list_double_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double_pane_vc

0x3917,	// (0x0005e2f5) list_double_time_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_double_time_pane_vc

0x3917,	// (0x0005e2f5) list_setting_number_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_setting_number_pane_vc

0x3917,	// (0x0005e2f5) list_setting_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_setting_pane_vc

0x3917,	// (0x0005e2f5) list_single_graphic_heading_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_single_graphic_heading_pane_vc

0x3917,	// (0x0005e2f5) list_single_heading_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_single_heading_pane_vc

0x3917,	// (0x0005e2f5) list_single_number_heading_pane_vc_ParamLimits

0x3917,	// (0x0005e2f5) list_single_number_heading_pane_vc

0xe543,	// (0x00068f21) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe543,	// (0x00068f21) list_double_graphic_heading_pane_vc_g1

0x3af2,	// (0x0005e4d0) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3af2,	// (0x0005e4d0) list_double_graphic_heading_pane_vc_g2

0x3afe,	// (0x0005e4dc) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3afe,	// (0x0005e4dc) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0006a3d1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0006a3d1) list_double_graphic_heading_pane_vc_g

0xe634,	// (0x00069012) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe634,	// (0x00069012) list_double_graphic_heading_pane_vc_t1

0xe64a,	// (0x00069028) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe64a,	// (0x00069028) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0006a3d8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0006a3d8) list_double_graphic_heading_pane_vc_t

0x2397,	// (0x0005cd75) list_setting_pane_vc_g1_ParamLimits

0x2397,	// (0x0005cd75) list_setting_pane_vc_g1

0x23a3,	// (0x0005cd81) list_setting_pane_vc_g2_ParamLimits

0x23a3,	// (0x0005cd81) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006a1c7) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006a1c7) list_setting_pane_vc_g

0xe668,	// (0x00069046) list_setting_pane_vc_t1_ParamLimits

0xe668,	// (0x00069046) list_setting_pane_vc_t1

0xe684,	// (0x00069062) list_setting_pane_vc_t2_ParamLimits

0xe684,	// (0x00069062) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006a41b) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006a41b) list_setting_pane_vc_t

0xe5eb,	// (0x00068fc9) set_value_pane_cp_vc_ParamLimits

0xe5eb,	// (0x00068fc9) set_value_pane_cp_vc

0xdeb3,	// (0x00068891) list_single_number_heading_pane_vc_g1_ParamLimits

0xdeb3,	// (0x00068891) list_single_number_heading_pane_vc_g1

0x22e7,	// (0x0005ccc5) list_single_number_heading_pane_vc_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_single_number_heading_pane_vc_g

0xe6a0,	// (0x0006907e) list_single_number_heading_pane_vc_t1_ParamLimits

0xe6a0,	// (0x0006907e) list_single_number_heading_pane_vc_t1

0xdebf,	// (0x0006889d) list_single_number_heading_pane_vc_t2_ParamLimits

0xdebf,	// (0x0006889d) list_single_number_heading_pane_vc_t2

0xded1,	// (0x000688af) list_single_number_heading_pane_vc_t3_ParamLimits

0xded1,	// (0x000688af) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0006a420) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006a420) list_single_number_heading_pane_vc_t

0xe543,	// (0x00068f21) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe543,	// (0x00068f21) list_single_graphic_heading_pane_vc_g1

0xdeb3,	// (0x00068891) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdeb3,	// (0x00068891) list_single_graphic_heading_pane_vc_g4

0x22e7,	// (0x0005ccc5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x22e7,	// (0x0005ccc5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0006a1a1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006a1a1) list_single_graphic_heading_pane_vc_g

0xe6b6,	// (0x00069094) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe6b6,	// (0x00069094) list_single_graphic_heading_pane_vc_t1

0xe6cc,	// (0x000690aa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe6cc,	// (0x000690aa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0006a427) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0006a427) list_single_graphic_heading_pane_vc_t

0xdeb3,	// (0x00068891) list_double2_pane_vc_g1_ParamLimits

0xdeb3,	// (0x00068891) list_double2_pane_vc_g1

0x22e7,	// (0x0005ccc5) list_double2_pane_vc_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_double2_pane_vc_g

0xe61e,	// (0x00068ffc) list_double2_pane_vc_t1_ParamLimits

0xe61e,	// (0x00068ffc) list_double2_pane_vc_t1

0x3b0a,	// (0x0005e4e8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3b0a,	// (0x0005e4e8) list_double2_large_graphic_pane_vc_g1

0xdeb3,	// (0x00068891) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdeb3,	// (0x00068891) list_double2_large_graphic_pane_vc_g2

0x22e7,	// (0x0005ccc5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x22e7,	// (0x0005ccc5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00069fc8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00069fc8) list_double2_large_graphic_pane_vc_g

0xdee3,	// (0x000688c1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdee3,	// (0x000688c1) list_double2_large_graphic_pane_vc_t1

0x3b16,	// (0x0005e4f4) list_double_time_pane_vc_g1_ParamLimits

0x3b16,	// (0x0005e4f4) list_double_time_pane_vc_g1

0x3b22,	// (0x0005e500) list_double_time_pane_vc_g2_ParamLimits

0x3b22,	// (0x0005e500) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0006a42c) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0006a42c) list_double_time_pane_vc_g

0xe6de,	// (0x000690bc) list_double_time_pane_vc_t1_ParamLimits

0xe6de,	// (0x000690bc) list_double_time_pane_vc_t1

0xe708,	// (0x000690e6) list_double_time_pane_vc_t2_ParamLimits

0xe708,	// (0x000690e6) list_double_time_pane_vc_t2

0xe751,	// (0x0006912f) list_double_time_pane_vc_t3_ParamLimits

0xe751,	// (0x0006912f) list_double_time_pane_vc_t3

0xe763,	// (0x00069141) list_double_time_pane_vc_t4_ParamLimits

0xe763,	// (0x00069141) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0006a431) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0006a431) list_double_time_pane_vc_t

0xdeb3,	// (0x00068891) list_double_pane_vc_g1_ParamLimits

0xdeb3,	// (0x00068891) list_double_pane_vc_g1

0x22e7,	// (0x0005ccc5) list_double_pane_vc_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_double_pane_vc_g

0xe777,	// (0x00069155) list_double_pane_vc_t1_ParamLimits

0xe777,	// (0x00069155) list_double_pane_vc_t1

0xe78b,	// (0x00069169) list_double_pane_vc_t2_ParamLimits

0xe78b,	// (0x00069169) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0006a43a) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0006a43a) list_double_pane_vc_t

0xdeb3,	// (0x00068891) list_double_number_pane_vc_g1_ParamLimits

0xdeb3,	// (0x00068891) list_double_number_pane_vc_g1

0x22e7,	// (0x0005ccc5) list_double_number_pane_vc_g2_ParamLimits

0x22e7,	// (0x0005ccc5) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00069fb0) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00069fb0) list_double_number_pane_vc_g

0xe60c,	// (0x00068fea) list_double_number_pane_vc_t1_ParamLimits

0xe60c,	// (0x00068fea) list_double_number_pane_vc_t1

0xe7a1,	// (0x0006917f) list_double_number_pane_vc_t2_ParamLimits

0xe7a1,	// (0x0006917f) list_double_number_pane_vc_t2

0xe78b,	// (0x00069169) list_double_number_pane_vc_t3_ParamLimits

0xe78b,	// (0x00069169) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0006a43f) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0006a43f) list_double_number_pane_vc_t

0x3b2e,	// (0x0005e50c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3b2e,	// (0x0005e50c) list_double_large_graphic_pane_vc_g1

0x3b50,	// (0x0005e52e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b50,	// (0x0005e52e) list_double_large_graphic_pane_vc_g2

0x3b64,	// (0x0005e542) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b64,	// (0x0005e542) list_double_large_graphic_pane_vc_g3

0xe7b5,	// (0x00069193) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe7b5,	// (0x00069193) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0006a446) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0006a446) list_double_large_graphic_pane_vc_g

0xe7c4,	// (0x000691a2) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe7c4,	// (0x000691a2) list_double_large_graphic_pane_vc_t1

0xe7e0,	// (0x000691be) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe7e0,	// (0x000691be) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0006a44f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0006a44f) list_double_large_graphic_pane_vc_t

0x3af2,	// (0x0005e4d0) list_double_heading_pane_vc_g1_ParamLimits

0x3af2,	// (0x0005e4d0) list_double_heading_pane_vc_g1

0x3afe,	// (0x0005e4dc) list_double_heading_pane_vc_g2_ParamLimits

0x3afe,	// (0x0005e4dc) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0006a454) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0006a454) list_double_heading_pane_vc_g

0xe800,	// (0x000691de) list_double_heading_pane_vc_t1_ParamLimits

0xe800,	// (0x000691de) list_double_heading_pane_vc_t1

0xe812,	// (0x000691f0) list_double_heading_pane_vc_t2_ParamLimits

0xe812,	// (0x000691f0) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0006a459) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0006a459) list_double_heading_pane_vc_t

0xe82a,	// (0x00069208) list_double_graphic_pane_vc_g1_ParamLimits

0xe82a,	// (0x00069208) list_double_graphic_pane_vc_g1

0x3b73,	// (0x0005e551) list_double_graphic_pane_vc_g2_ParamLimits

0x3b73,	// (0x0005e551) list_double_graphic_pane_vc_g2

0xdeb3,	// (0x00068891) list_double_graphic_pane_vc_g3_ParamLimits

0xdeb3,	// (0x00068891) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x0006a45e) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0006a45e) list_double_graphic_pane_vc_g

0xe836,	// (0x00069214) list_double_graphic_pane_vc_t1_ParamLimits

0xe836,	// (0x00069214) list_double_graphic_pane_vc_t1

0xe860,	// (0x0006923e) list_double_graphic_pane_vc_t2_ParamLimits

0xe860,	// (0x0006923e) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0006a467) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0006a467) list_double_graphic_pane_vc_t

0xde92,	// (0x00068870) aid_size_cell_fastswap

0x9878,	// (0x00064256) aid_size_cell_touch_ParamLimits

0x9878,	// (0x00064256) aid_size_cell_touch

0xeffa,	// (0x000699d8) popup_fast_swap_wide_window_ParamLimits

0xeffa,	// (0x000699d8) popup_fast_swap_wide_window

0x9a36,	// (0x00064414) touch_pane_ParamLimits

0x9a36,	// (0x00064414) touch_pane

0x8a4b,	// (0x00063429) button_value_adjust_pane_cp2

0xdf1c,	// (0x000688fa) button_value_adjust_pane_cp4

0xdf24,	// (0x00068902) form_field_data_pane_cp2

0xa33e,	// (0x00064d1c) form_field_data_wide_pane_cp2

0x8d97,	// (0x00063775) bg_scroll_pane_ParamLimits

0xf253,	// (0x00069c31) scroll_handle_pane_ParamLimits

0xf267,	// (0x00069c45) scroll_sc2_down_pane_ParamLimits

0xf267,	// (0x00069c45) scroll_sc2_down_pane

0x8dc8,	// (0x000637a6) scroll_sc2_up_pane_ParamLimits

0x8dc8,	// (0x000637a6) scroll_sc2_up_pane

0xc83d,	// (0x0006721b) grid_wheel_folder_pane_g1_ParamLimits

0xc83d,	// (0x0006721b) grid_wheel_folder_pane_g1

0xf42e,	// (0x00069e0c) clock_nsta_pane_cp2_ParamLimits

0xf42e,	// (0x00069e0c) clock_nsta_pane_cp2

0xa7d7,	// (0x000651b5) listscroll_midp_pane_ParamLimits

0xa7e3,	// (0x000651c1) midp_canvas_pane

0x1de3,	// (0x0005c7c1) nsta_clock_indic_pane

0x1e1f,	// (0x0005c7fd) listscroll_form_pane_vc

0x1e27,	// (0x0005c805) listscroll_set_pane_vc_ParamLimits

0x1e27,	// (0x0005c805) listscroll_set_pane_vc

0xb325,	// (0x00065d03) clock_nsta_pane

0xb34f,	// (0x00065d2d) indicator_nsta_pane

0x2281,	// (0x0005cc5f) bg_popup_sub_pane_cp2_ParamLimits

0x2295,	// (0x0005cc73) find_pane_cp2_ParamLimits

0x2295,	// (0x0005cc73) find_pane_cp2

0x22ab,	// (0x0005cc89) grid_toobar_pane_ParamLimits

0x23af,	// (0x0005cd8d) list_form_gen_pane_vc_ParamLimits

0x23af,	// (0x0005cd8d) list_form_gen_pane_vc

0x23c5,	// (0x0005cda3) scroll_pane_cp8_vc_ParamLimits

0x23c5,	// (0x0005cda3) scroll_pane_cp8_vc

0x2441,	// (0x0005ce1f) data_form_wide_pane_vc_ParamLimits

0x2441,	// (0x0005ce1f) data_form_wide_pane_vc

0x244d,	// (0x0005ce2b) form_field_data_wide_pane_vc_g1

0x2455,	// (0x0005ce33) form_field_data_wide_pane_vc_t1_ParamLimits

0x2455,	// (0x0005ce33) form_field_data_wide_pane_vc_t1

0x8a5f,	// (0x0006343d) input_focus_pane_cp6_vc_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_cp6_vc

0x2771,	// (0x0005d14f) list_midp_pane_ParamLimits

0x3ccf,	// (0x0005e6ad) scroll_pane_cp16_ParamLimits

0x3ccf,	// (0x0005e6ad) scroll_pane_cp16

0x27bf,	// (0x0005d19d) button_value_adjust_pane_ParamLimits

0x27bf,	// (0x0005d19d) button_value_adjust_pane

0xc515,	// (0x00066ef3) button_value_adjust_pane_cp6_ParamLimits

0xc515,	// (0x00066ef3) button_value_adjust_pane_cp6

0xc58f,	// (0x00066f6d) settings_code_pane_cp_ParamLimits

0xc58f,	// (0x00066f6d) settings_code_pane_cp

0x7ba2,	// (0x00062580) cell_touch_pane_g1

0x7ba2,	// (0x00062580) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0006a0e6) cell_touch_pane_g

0xc713,	// (0x000670f1) cell_touch_pane_cp_ParamLimits

0xc713,	// (0x000670f1) cell_touch_pane_cp

0xc72f,	// (0x0006710d) cell_touch_pane_ParamLimits

0xc72f,	// (0x0006710d) cell_touch_pane

0x7ba2,	// (0x00062580) scroll_sc2_down_pane_g1

0x7ba2,	// (0x00062580) scroll_sc2_up_pane_g1

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp4_vc

0x406d,	// (0x0005ea4b) list_set_graphic_pane_vc_g1_ParamLimits

0x406d,	// (0x0005ea4b) list_set_graphic_pane_vc_g1

0x4079,	// (0x0005ea57) list_set_graphic_pane_vc_g2_ParamLimits

0x4079,	// (0x0005ea57) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0006a3dd) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0006a3dd) list_set_graphic_pane_vc_g

0x4085,	// (0x0005ea63) text_primary_small_cp13_vc_ParamLimits

0x4085,	// (0x0005ea63) text_primary_small_cp13_vc

0xe069,	// (0x00068a47) list_set_graphic_pane_vc_ParamLimits

0xe069,	// (0x00068a47) list_set_graphic_pane_vc

0x7bac,	// (0x0006258a) input_focus_pane_cp2_vc

0x7ba2,	// (0x00062580) setting_code_pane_vc_g1

0x7c11,	// (0x000625ef) setting_code_pane_vc_t1

0x409d,	// (0x0005ea7b) set_text_pane_vc_t1_ParamLimits

0x409d,	// (0x0005ea7b) set_text_pane_vc_t1

0x7bac,	// (0x0006258a) input_focus_pane_cp1_vc

0x40bb,	// (0x0005ea99) list_set_text_pane_vc

0x7ba2,	// (0x00062580) setting_text_pane_vc_g1

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp2_vc

0x7c08,	// (0x000625e6) setting_slider_graphic_pane_vc_g1

0x40c5,	// (0x0005eaa3) setting_slider_graphic_pane_vc_t1

0x40d7,	// (0x0005eab5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0006a3e2) setting_slider_graphic_pane_vc_t

0x40e9,	// (0x0005eac7) slider_set_pane_cp_vc

0x40f3,	// (0x0005ead1) slider_set_pane_vc_g1

0x40fc,	// (0x0005eada) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0006a3e7) slider_set_pane_vc_g

0x8ab7,	// (0x00063495) set_opt_bg_pane_g1_copy1

0x8abf,	// (0x0006349d) set_opt_bg_pane_g2_copy1

0x4128,	// (0x0005eb06) set_opt_bg_pane_g3_copy1

0x8acf,	// (0x000634ad) set_opt_bg_pane_g4_copy1

0x8ad7,	// (0x000634b5) set_opt_bg_pane_g5_copy1

0x8adf,	// (0x000634bd) set_opt_bg_pane_g6_copy1

0x4132,	// (0x0005eb10) set_opt_bg_pane_g7_copy1

0x413c,	// (0x0005eb1a) set_opt_bg_pane_g8_copy1

0x4146,	// (0x0005eb24) set_opt_bg_pane_g9_copy1

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp_vc

0x4150,	// (0x0005eb2e) setting_slider_pane_vc_t1

0x415f,	// (0x0005eb3d) setting_slider_pane_vc_t2

0x4171,	// (0x0005eb4f) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0006a3f6) setting_slider_pane_vc_t

0x4183,	// (0x0005eb61) slider_set_pane_vc

0x07ee,	// (0x0005b1cc) volume_set_pane_vc_g1

0x07f7,	// (0x0005b1d5) volume_set_pane_vc_g2

0x0800,	// (0x0005b1de) volume_set_pane_vc_g3

0x0809,	// (0x0005b1e7) volume_set_pane_vc_g4

0x0812,	// (0x0005b1f0) volume_set_pane_vc_g5

0x081b,	// (0x0005b1f9) volume_set_pane_vc_g6

0x0824,	// (0x0005b202) volume_set_pane_vc_g7

0x082d,	// (0x0005b20b) volume_set_pane_vc_g8

0x0836,	// (0x0005b214) volume_set_pane_vc_g9

0x083f,	// (0x0005b21d) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0006a3fd) volume_set_pane_vc_g

0x418b,	// (0x0005eb69) volume_set_pane_vc

0x4195,	// (0x0005eb73) button_value_adjust_pane_cp1_vc

0x419f,	// (0x0005eb7d) list_highlight_pane_cp2_vc

0x41a8,	// (0x0005eb86) list_set_pane_vc_ParamLimits

0x41a8,	// (0x0005eb86) list_set_pane_vc

0x4216,	// (0x0005ebf4) main_pane_set_vc_t1_ParamLimits

0x4216,	// (0x0005ebf4) main_pane_set_vc_t1

0x422b,	// (0x0005ec09) main_pane_set_vc_t2_ParamLimits

0x422b,	// (0x0005ec09) main_pane_set_vc_t2

0x423d,	// (0x0005ec1b) main_pane_set_vc_t3_ParamLimits

0x423d,	// (0x0005ec1b) main_pane_set_vc_t3

0x4251,	// (0x0005ec2f) main_pane_set_vc_t4_ParamLimits

0x4251,	// (0x0005ec2f) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0006a412) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0006a412) main_pane_set_vc_t

0x4265,	// (0x0005ec43) setting_code_pane_vc_ParamLimits

0x4265,	// (0x0005ec43) setting_code_pane_vc

0x4276,	// (0x0005ec54) setting_slider_graphic_pane_vc

0x4276,	// (0x0005ec54) setting_slider_pane_vc

0x4276,	// (0x0005ec54) setting_text_pane_vc

0x4276,	// (0x0005ec54) setting_volume_pane_vc

0x4280,	// (0x0005ec5e) scroll_pane_cp121_vc

0x8a39,	// (0x00063417) set_content_pane_vc

0x4288,	// (0x0005ec66) button_value_adjust_pane_g1

0x4291,	// (0x0005ec6f) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0006a46c) button_value_adjust_pane_g

0x429a,	// (0x0005ec78) form_field_slider_wide_pane_vc_t1_ParamLimits

0x429a,	// (0x0005ec78) form_field_slider_wide_pane_vc_t1

0x42ac,	// (0x0005ec8a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x42ac,	// (0x0005ec8a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x0006a471) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0006a471) form_field_slider_wide_pane_vc_t

0x7cfe,	// (0x000626dc) input_focus_pane_cp10_vc_ParamLimits

0x7cfe,	// (0x000626dc) input_focus_pane_cp10_vc

0x42d8,	// (0x0005ecb6) slider_cont_pane_cp1_vc_ParamLimits

0x42d8,	// (0x0005ecb6) slider_cont_pane_cp1_vc

0x42ea,	// (0x0005ecc8) slider_form_pane_g1_cp2

0x40fc,	// (0x0005eada) slider_form_pane_g2_cp2

0x4317,	// (0x0005ecf5) form_field_slider_pane_vc_t3

0x4325,	// (0x0005ed03) form_field_slider_pane_vc_t4

0x4333,	// (0x0005ed11) slider_form_pane_vc_ParamLimits

0x4333,	// (0x0005ed11) slider_form_pane_vc

0x4340,	// (0x0005ed1e) form_field_slider_pane_vc_t1_ParamLimits

0x4340,	// (0x0005ed1e) form_field_slider_pane_vc_t1

0x42ac,	// (0x0005ec8a) form_field_slider_pane_vc_t2_ParamLimits

0x42ac,	// (0x0005ec8a) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x0006a483) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x0006a483) form_field_slider_pane_vc_t

0x7cfe,	// (0x000626dc) input_focus_pane_cp9_vc_ParamLimits

0x7cfe,	// (0x000626dc) input_focus_pane_cp9_vc

0x4356,	// (0x0005ed34) slider_cont_pane_vc_ParamLimits

0x4356,	// (0x0005ed34) slider_cont_pane_vc

0x436a,	// (0x0005ed48) list_form_graphic_pane_cp_vc_ParamLimits

0x436a,	// (0x0005ed48) list_form_graphic_pane_cp_vc

0x244d,	// (0x0005ce2b) form_field_popup_wide_pane_vc_g1

0x437f,	// (0x0005ed5d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x437f,	// (0x0005ed5d) form_field_popup_wide_pane_vc_t1

0x8a5f,	// (0x0006343d) input_focus_pane_cp8_vc_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_cp8_vc

0x43c4,	// (0x0005eda2) list_form_wide_pane_vc_ParamLimits

0x43c4,	// (0x0005eda2) list_form_wide_pane_vc

0x43d0,	// (0x0005edae) list_form_graphic_pane_vc_g1

0x43d8,	// (0x0005edb6) list_form_graphic_pane_vc_t1_ParamLimits

0x43d8,	// (0x0005edb6) list_form_graphic_pane_vc_t1

0x7bfa,	// (0x000625d8) list_highlight_pane_cp5_vc_ParamLimits

0x7bfa,	// (0x000625d8) list_highlight_pane_cp5_vc

0x43f4,	// (0x0005edd2) list_form_graphic_pane_vc_ParamLimits

0x43f4,	// (0x0005edd2) list_form_graphic_pane_vc

0x244d,	// (0x0005ce2b) form_field_popup_pane_vc_g1

0x440a,	// (0x0005ede8) form_field_popup_pane_vc_t1_ParamLimits

0x440a,	// (0x0005ede8) form_field_popup_pane_vc_t1

0x8a5f,	// (0x0006343d) input_focus_pane_cp7_vc_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_cp7_vc

0x4421,	// (0x0005edff) list_form_pane_vc_ParamLimits

0x4421,	// (0x0005edff) list_form_pane_vc

0x442d,	// (0x0005ee0b) data_form_pane_vc_t1_ParamLimits

0x442d,	// (0x0005ee0b) data_form_pane_vc_t1

0x8ab7,	// (0x00063495) input_focus_pane_vc_g1

0x8abf,	// (0x0006349d) input_focus_pane_vc_g2

0x8ac7,	// (0x000634a5) input_focus_pane_vc_g3

0x8acf,	// (0x000634ad) input_focus_pane_vc_g4

0x8ad7,	// (0x000634b5) input_focus_pane_vc_g5

0x8adf,	// (0x000634bd) input_focus_pane_vc_g6

0x8ae7,	// (0x000634c5) input_focus_pane_vc_g7

0x8aef,	// (0x000634cd) input_focus_pane_vc_g8

0x8af7,	// (0x000634d5) input_focus_pane_vc_g9

0x7ba2,	// (0x00062580) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0006a06f) input_focus_pane_vc_g

0x2441,	// (0x0005ce1f) data_form_pane_vc_ParamLimits

0x2441,	// (0x0005ce1f) data_form_pane_vc

0x244d,	// (0x0005ce2b) form_field_data_pane_vc_g1

0x444a,	// (0x0005ee28) form_field_data_pane_vc_t1_ParamLimits

0x444a,	// (0x0005ee28) form_field_data_pane_vc_t1

0x8a5f,	// (0x0006343d) input_focus_pane_vc_ParamLimits

0x8a5f,	// (0x0006343d) input_focus_pane_vc

0x4464,	// (0x0005ee42) button_value_adjust_pane_cp3_vc

0x446c,	// (0x0005ee4a) button_value_adjust_pane_cp5_vc

0x4474,	// (0x0005ee52) form_field_data_pane_vc_ParamLimits

0x4474,	// (0x0005ee52) form_field_data_pane_vc

0x448f,	// (0x0005ee6d) form_field_data_pane_vc_cp2

0x4497,	// (0x0005ee75) form_field_data_wide_pane_vc_ParamLimits

0x4497,	// (0x0005ee75) form_field_data_wide_pane_vc

0x44b1,	// (0x0005ee8f) form_field_data_wide_pane_vc_cp2

0x44b9,	// (0x0005ee97) form_field_popup_pane_vc_ParamLimits

0x44b9,	// (0x0005ee97) form_field_popup_pane_vc

0x44d4,	// (0x0005eeb2) form_field_popup_wide_pane_vc_ParamLimits

0x44d4,	// (0x0005eeb2) form_field_popup_wide_pane_vc

0x44ee,	// (0x0005eecc) form_field_slider_pane_vc_ParamLimits

0x44ee,	// (0x0005eecc) form_field_slider_pane_vc

0x4501,	// (0x0005eedf) form_field_slider_wide_pane_vc_ParamLimits

0x4501,	// (0x0005eedf) form_field_slider_wide_pane_vc

0xc74d,	// (0x0006712b) grid_touch_1_pane_ParamLimits

0xc74d,	// (0x0006712b) grid_touch_1_pane

0xc761,	// (0x0006713f) grid_touch_2_pane_ParamLimits

0xc761,	// (0x0006713f) grid_touch_2_pane

0x45d1,	// (0x0005efaf) touch_pane_g1_ParamLimits

0x45d1,	// (0x0005efaf) touch_pane_g1

0x453a,	// (0x0005ef18) cell_app_pane_cp_wide_ParamLimits

0x453a,	// (0x0005ef18) cell_app_pane_cp_wide

0x454b,	// (0x0005ef29) grid_popup_fast_wide_pane_ParamLimits

0x454b,	// (0x0005ef29) grid_popup_fast_wide_pane

0x455f,	// (0x0005ef3d) scroll_pane_cp19_ParamLimits

0x455f,	// (0x0005ef3d) scroll_pane_cp19

0x7bac,	// (0x0006258a) bg_popup_window_pane_cp20

0x4573,	// (0x0005ef51) listscroll_popup_fast_wide_pane

0xc78d,	// (0x0006716b) grid_indicator_nsta_pane

0x457b,	// (0x0005ef59) clock_nsta_pane_g1

0x4584,	// (0x0005ef62) clock_nsta_pane_t1

0xc79b,	// (0x00067179) cell_indicator_nsta_pane_ParamLimits

0xc79b,	// (0x00067179) cell_indicator_nsta_pane

0x45d1,	// (0x0005efaf) cell_indicator_nsta_pane_g1

0xc7b2,	// (0x00067190) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x0006a494) cell_indicator_nsta_pane_g

0x45ec,	// (0x0005efca) clock_nsta_pane_cp

0x45f5,	// (0x0005efd3) indicator_nsta_pane_cp

0x45fd,	// (0x0005efdb) nsta_clock_indic_pane_g1

0x7c36,	// (0x00062614) grid_indicator_pane

0xbea6,	// (0x00066884) scroll_pane_cp29

0xf37d,	// (0x00069d5b) indicator_nsta_pane_cp2_ParamLimits

0xf37d,	// (0x00069d5b) indicator_nsta_pane_cp2

0x7bfa,	// (0x000625d8) main_apps_wheel_pane

0x262e,	// (0x0005d00c) form_midp_field_text_pane_ParamLimits

0x277d,	// (0x0005d15b) scroll_bar_cp050_ParamLimits

0x464d,	// (0x0005f02b) cell_indicator_pane_ParamLimits

0x464d,	// (0x0005f02b) cell_indicator_pane

0x4665,	// (0x0005f043) cell_indicator_pane_g1

0xc7bf,	// (0x0006719d) grid_wheel_folder_pane_ParamLimits

0xc7bf,	// (0x0006719d) grid_wheel_folder_pane

0xc7cd,	// (0x000671ab) list_wheel_apps_pane_ParamLimits

0xc7cd,	// (0x000671ab) list_wheel_apps_pane

0xc7db,	// (0x000671b9) main_apps_wheel_pane_g1_ParamLimits

0xc7db,	// (0x000671b9) main_apps_wheel_pane_g1

0xc7eb,	// (0x000671c9) main_apps_wheel_pane_g2_ParamLimits

0xc7eb,	// (0x000671c9) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x0006a4b0) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x0006a4b0) main_apps_wheel_pane_g

0xc7fb,	// (0x000671d9) main_apps_wheel_pane_t1_ParamLimits

0xc7fb,	// (0x000671d9) main_apps_wheel_pane_t1

0xc813,	// (0x000671f1) list_wheel_apps_pane_g1

0xc81b,	// (0x000671f9) list_wheel_apps_pane_g2

0xc823,	// (0x00067201) list_wheel_apps_pane_g3

0xc82b,	// (0x00067209) list_wheel_apps_pane_g4

0xc833,	// (0x00067211) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x0006a4b5) list_wheel_apps_pane_g

0xe1fe,	// (0x00068bdc) navi_icon_text_pane

0xb217,	// (0x00065bf5) aid_fill_nsta

0xc850,	// (0x0006722e) navi_icon_text_pane_g1

0xc85c,	// (0x0006723a) navi_icon_text_pane_t1

0xe094,	// (0x00068a72) list_set_graphic_pane_t1_ParamLimits

0xe094,	// (0x00068a72) list_set_graphic_pane_t1

0x2ee2,	// (0x0005d8c0) popup_midp_note_alarm_window_t6_ParamLimits

0x2ee2,	// (0x0005d8c0) popup_midp_note_alarm_window_t6

0x2ef4,	// (0x0005d8d2) popup_midp_note_alarm_window_t7_ParamLimits

0x2ef4,	// (0x0005d8d2) popup_midp_note_alarm_window_t7

0x2f06,	// (0x0005d8e4) popup_midp_note_alarm_window_t8_ParamLimits

0x2f06,	// (0x0005d8e4) popup_midp_note_alarm_window_t8

0x2f18,	// (0x0005d8f6) popup_midp_note_alarm_window_t9_ParamLimits

0x2f18,	// (0x0005d8f6) popup_midp_note_alarm_window_t9

0x2f2a,	// (0x0005d908) popup_midp_note_alarm_window_t10_ParamLimits

0x2f2a,	// (0x0005d908) popup_midp_note_alarm_window_t10

0x2f3c,	// (0x0005d91a) popup_midp_note_alarm_window_t11_ParamLimits

0x2f3c,	// (0x0005d91a) popup_midp_note_alarm_window_t11

0x2f4e,	// (0x0005d92c) scroll_pane_cp17_ParamLimits

0x2f4e,	// (0x0005d92c) scroll_pane_cp17

0x07ee,	// (0x0005b1cc) volume_small_pane_cp_g1

0x0b73,	// (0x0005b551) volume_small_pane_cp_g2

0x0b7c,	// (0x0005b55a) volume_small_pane_cp_g3

0x0b85,	// (0x0005b563) volume_small_pane_cp_g4

0x0b8e,	// (0x0005b56c) volume_small_pane_cp_g5

0x0b97,	// (0x0005b575) volume_small_pane_cp_g6

0x0ba0,	// (0x0005b57e) volume_small_pane_cp_g7

0x0ba9,	// (0x0005b587) volume_small_pane_cp_g8

0x0bb2,	// (0x0005b590) volume_small_pane_cp_g9

0x0bbb,	// (0x0005b599) volume_small_pane_cp_g10

0xe396,	// (0x00068d74) midp_ticker_pane_g1_ParamLimits

0xe3a2,	// (0x00068d80) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006a13b) midp_ticker_pane_g_ParamLimits

0xa87b,	// (0x00065259) midp_ticker_pane_t1_ParamLimits

0xb23b,	// (0x00065c19) aid_fill_nsta_2

0x2769,	// (0x0005d147) list_form2_midp_pane

0x38d2,	// (0x0005e2b0) midp_editing_number_pane_ParamLimits

0x38e1,	// (0x0005e2bf) midp_ticker_pane_ParamLimits

0x4758,	// (0x0005f136) form2_midp_field_pane

0x477c,	// (0x0005f15a) scroll_pane_cp51

0x479c,	// (0x0005f17a) form2_midp_button_pane_ParamLimits

0x479c,	// (0x0005f17a) form2_midp_button_pane

0x47ae,	// (0x0005f18c) form2_midp_content_pane_ParamLimits

0x47ae,	// (0x0005f18c) form2_midp_content_pane

0x47c8,	// (0x0005f1a6) form2_midp_field_choice_group_pane

0x47d0,	// (0x0005f1ae) form2_midp_field_pane_g1

0x47d8,	// (0x0005f1b6) form2_midp_field_pane_g2

0x47e0,	// (0x0005f1be) form2_midp_field_pane_g3

0x47e8,	// (0x0005f1c6) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x0006a4da) form2_midp_field_pane_g

0x47f0,	// (0x0005f1ce) form2_midp_gauge_slider_pane

0x47f8,	// (0x0005f1d6) form2_midp_gauge_wait_pane

0x4800,	// (0x0005f1de) form2_midp_image_pane_ParamLimits

0x4800,	// (0x0005f1de) form2_midp_image_pane

0x481b,	// (0x0005f1f9) form2_midp_label_pane_ParamLimits

0x481b,	// (0x0005f1f9) form2_midp_label_pane

0xc88a,	// (0x00067268) form2_midp_label_pane_cp_ParamLimits

0xc88a,	// (0x00067268) form2_midp_label_pane_cp

0x485b,	// (0x0005f239) form2_midp_string_pane_ParamLimits

0x485b,	// (0x0005f239) form2_midp_string_pane

0xb6b8,	// (0x00066096) form2_midp_text_pane_ParamLimits

0xb6b8,	// (0x00066096) form2_midp_text_pane

0x486d,	// (0x0005f24b) form2_midp_time_pane

0x487d,	// (0x0005f25b) input_focus_pane_cp51_ParamLimits

0x487d,	// (0x0005f25b) input_focus_pane_cp51

0x4895,	// (0x0005f273) form2_midp_label_pane_t1_ParamLimits

0x4895,	// (0x0005f273) form2_midp_label_pane_t1

0xb6db,	// (0x000660b9) form2_mdip_text_pane_t1_ParamLimits

0xb6db,	// (0x000660b9) form2_mdip_text_pane_t1

0xe87e,	// (0x0006925c) form2_midp_time_pane_t1

0x48e3,	// (0x0005f2c1) form2_midp_gauge_slider_pane_t1

0xc8ab,	// (0x00067289) form2_midp_gauge_slider_pane_t2

0xc8bd,	// (0x0006729b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x0006a4e3) form2_midp_gauge_slider_pane_t

0x4919,	// (0x0005f2f7) form2_midp_slider_pane

0x4925,	// (0x0005f303) form2_midp_gauge_wait_pane_t1

0x4933,	// (0x0005f311) form2_midp_wait_pane_ParamLimits

0x4933,	// (0x0005f311) form2_midp_wait_pane

0x2494,	// (0x0005ce72) list_single_2graphic_pane_cp4_ParamLimits

0x2494,	// (0x0005ce72) list_single_2graphic_pane_cp4

0xc8cf,	// (0x000672ad) list_single_midp_graphic_pane_cp_ParamLimits

0xc8cf,	// (0x000672ad) list_single_midp_graphic_pane_cp

0x7bac,	// (0x0006258a) list_highlight_pane_cp20

0x4977,	// (0x0005f355) list_single_2graphic_pane_g1_cp4

0x3f4f,	// (0x0005e92d) list_single_2graphic_pane_g2_cp4

0x497f,	// (0x0005f35d) list_single_2graphic_pane_t1_cp4

0x7bfa,	// (0x000625d8) list_highlight_pane_cp21

0x498e,	// (0x0005f36c) list_single_midp_graphic_pane_g4_cp

0x499d,	// (0x0005f37b) list_single_midp_graphic_pane_t1_cp

0xc8f0,	// (0x000672ce) form2_mdip_string_pane_t1_ParamLimits

0xc8f0,	// (0x000672ce) form2_mdip_string_pane_t1

0x7bac,	// (0x0006258a) bg_wml_button_pane_cp2

0x7ba2,	// (0x00062580) form2_midp_image_pane_g1

0xdef9,	// (0x000688d7) list_double_large_graphic_pane_g5_ParamLimits

0xdef9,	// (0x000688d7) list_double_large_graphic_pane_g5

0xa7d7,	// (0x000651b5) midp_form_pane_ParamLimits

0x7bfa,	// (0x000625d8) main_apps_wheel_pane_ParamLimits

0xaf31,	// (0x0006590f) popup_preview_window_ParamLimits

0xaf31,	// (0x0006590f) popup_preview_window

0x061f,	// (0x0005affd) popup_touch_info_window_ParamLimits

0x061f,	// (0x0005affd) popup_touch_info_window

0x0641,	// (0x0005b01f) popup_touch_menu_window_ParamLimits

0x0641,	// (0x0005b01f) popup_touch_menu_window

0x7b98,	// (0x00062576) bg_popup_sub_pane_cp6

0x4a4e,	// (0x0005f42c) list_touch_menu_pane

0x4a56,	// (0x0005f434) list_single_touch_menu_pane_ParamLimits

0x4a56,	// (0x0005f434) list_single_touch_menu_pane

0x4a6e,	// (0x0005f44c) list_single_touch_menu_pane_t1

0x7bfa,	// (0x000625d8) bg_popup_sub_pane_cp7_ParamLimits

0x7bfa,	// (0x000625d8) bg_popup_sub_pane_cp7

0x4a7c,	// (0x0005f45a) heading_sub_pane

0x4a84,	// (0x0005f462) list_touch_info_pane_ParamLimits

0x4a84,	// (0x0005f462) list_touch_info_pane

0x4a93,	// (0x0005f471) list_single_touch_info_pane_ParamLimits

0x4a93,	// (0x0005f471) list_single_touch_info_pane

0x4aa5,	// (0x0005f483) list_single_touch_info_pane_t1

0x4ab3,	// (0x0005f491) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x0006a4f1) list_single_touch_info_pane_t

0xe36a,	// (0x00068d48) bg_popup_heading_pane_cp

0x4ac1,	// (0x0005f49f) heading_sub_pane_t1

0x23db,	// (0x0005cdb9) bg_popup_preview_window_pane_cp_ParamLimits

0x23db,	// (0x0005cdb9) bg_popup_preview_window_pane_cp

0x4a7c,	// (0x0005f45a) heading_preview_pane

0x4a84,	// (0x0005f462) list_preview_pane_ParamLimits

0x4a84,	// (0x0005f462) list_preview_pane

0x4acf,	// (0x0005f4ad) popup_preview_window_g1

0x4a93,	// (0x0005f471) list_single_preview_pane_ParamLimits

0x4a93,	// (0x0005f471) list_single_preview_pane

0x4ad7,	// (0x0005f4b5) list_single_preview_pane_g1

0x4adf,	// (0x0005f4bd) list_single_preview_pane_t1

0x4aa5,	// (0x0005f483) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x0006a4f6) list_single_preview_pane_t

0x4aed,	// (0x0005f4cb) bg_popup_heading_pane_cp2_ParamLimits

0x4aed,	// (0x0005f4cb) bg_popup_heading_pane_cp2

0x4b03,	// (0x0005f4e1) heading_preview_pane_g1

0x4b0b,	// (0x0005f4e9) heading_preview_pane_t1_ParamLimits

0x4b0b,	// (0x0005f4e9) heading_preview_pane_t1

0x7c4d,	// (0x0006262b) soft_indicator_pane_t1_ParamLimits

0x89d2,	// (0x000633b0) scroll_pane_ParamLimits

0x8db6,	// (0x00063794) scroll_sc2_left_pane

0x8dbf,	// (0x0006379d) scroll_sc2_right_pane

0x8dde,	// (0x000637bc) scroll_bg_pane_g1_ParamLimits

0x8df3,	// (0x000637d1) scroll_bg_pane_g2_ParamLimits

0x8e0b,	// (0x000637e9) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0006a0c6) scroll_bg_pane_g_ParamLimits

0x8dde,	// (0x000637bc) scroll_handle_pane_g1_ParamLimits

0x8e2d,	// (0x0006380b) scroll_handle_pane_g2_ParamLimits

0x8e0b,	// (0x000637e9) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0006a0cd) scroll_handle_pane_g_ParamLimits

0x007f,	// (0x0005aa5d) popup_choice_list_window_ParamLimits

0x007f,	// (0x0005aa5d) popup_choice_list_window

0x228d,	// (0x0005cc6b) choice_list_pane

0x231b,	// (0x0005ccf9) cell_toolbar_pane_t1

0x2343,	// (0x0005cd21) toolbar_button_pane_ParamLimits

0x3418,	// (0x0005ddf6) ai_gene_pane_1_t2_ParamLimits

0x3418,	// (0x0005ddf6) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0006a2f0) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0006a2f0) ai_gene_pane_1_t

0x4b28,	// (0x0005f506) scroll_sc2_left_pane_g1

0x4b28,	// (0x0005f506) scroll_sc2_right_pane_g1

0x1e13,	// (0x0005c7f1) bg_popup_sub_pane_cp10

0x4b32,	// (0x0005f510) list_choice_list_pane

0x397c,	// (0x0005e35a) list_single_choice_list_pane_ParamLimits

0x397c,	// (0x0005e35a) list_single_choice_list_pane

0x4b4b,	// (0x0005f529) list_single_choice_list_pane_g1

0x8bad,	// (0x0006358b) list_single_choice_list_pane_t1_ParamLimits

0x8bad,	// (0x0006358b) list_single_choice_list_pane_t1

0x4b53,	// (0x0005f531) choice_list_pane_g1

0x4b5b,	// (0x0005f539) choice_list_pane_t1

0x7b98,	// (0x00062576) input_focus_pane_cp11

0x8d2b,	// (0x00063709) title_pane_stacon_g2_ParamLimits

0x8d2b,	// (0x00063709) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0006a0ac) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0006a0ac) title_pane_stacon_g

0xe36a,	// (0x00068d48) cursor_press_pane

0xabae,	// (0x0006558c) popup_fep_hwr_window_ParamLimits

0xabae,	// (0x0006558c) popup_fep_hwr_window

0x01c3,	// (0x0005aba1) popup_fep_vkb_window_ParamLimits

0x01c3,	// (0x0005aba1) popup_fep_vkb_window

0x4b69,	// (0x0005f547) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x0006a51f) fep_vkb_side_pane_g_ParamLimits

0x0c3f,	// (0x0005b61d) fep_hwr_candidate_pane_ParamLimits

0x0c3f,	// (0x0005b61d) fep_hwr_candidate_pane

0x0c69,	// (0x0005b647) fep_hwr_side_pane_ParamLimits

0x0c69,	// (0x0005b647) fep_hwr_side_pane

0x0c8b,	// (0x0005b669) fep_hwr_top_pane_ParamLimits

0x0c8b,	// (0x0005b669) fep_hwr_top_pane

0x0ca3,	// (0x0005b681) fep_hwr_write_pane_ParamLimits

0x0ca3,	// (0x0005b681) fep_hwr_write_pane

0xfb41,	// (0x0006a51f) fep_vkb_side_pane_g

0x4b71,	// (0x0005f54f) fep_hwr_top_pane_g1

0x4b83,	// (0x0005f561) fep_hwr_top_pane_g2

0x0cdd,	// (0x0005b6bb) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x0006a4fb) fep_hwr_top_pane_g

0x0cf2,	// (0x0005b6d0) fep_hwr_top_text_pane

0xbf13,	// (0x000668f1) fep_hwr_top_text_pane_g1

0x4bb9,	// (0x0005f597) fep_hwr_top_text_pane_t1

0x0dfc,	// (0x0005b7da) fep_hwr_candidate_pane_g1

0x4e04,	// (0x0005f7e2) fep_vkb_keypad_pane_g3_ParamLimits

0x4e04,	// (0x0005f7e2) fep_vkb_keypad_pane_g3

0x4e30,	// (0x0005f80e) fep_vkb_keypad_pane_g4_ParamLimits

0x4e30,	// (0x0005f80e) fep_vkb_keypad_pane_g4

0x4ea7,	// (0x0005f885) fep_vkb_bottom_pane_g2_ParamLimits

0x4ea7,	// (0x0005f885) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x0006a526) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x0006a526) fep_vkb_bottom_pane_g

0x4b28,	// (0x0005f506) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x0006a530) cell_vkb_side_pane_g

0x4f32,	// (0x0005f910) cell_vkb_side_pane_t1

0x4f40,	// (0x0005f91e) cell_vkb_side_pane_t1_copy1

0x4b28,	// (0x0005f506) bg_fep_vkb_candidate_pane_g2

0x5084,	// (0x0005fa62) cell_vkb_candidate_pane_ParamLimits

0x4bc7,	// (0x0005f5a5) aid_size_cell_vkb_ParamLimits

0x4bc7,	// (0x0005f5a5) aid_size_cell_vkb

0x5084,	// (0x0005fa62) cell_vkb_candidate_pane

0x0e23,	// (0x0005b801) bg_popup_fep_shadow_pane_g1

0xc999,	// (0x00067377) fep_vkb_bottom_pane_ParamLimits

0xc999,	// (0x00067377) fep_vkb_bottom_pane

0x4c96,	// (0x0005f674) fep_vkb_candidate_pane_ParamLimits

0x4c96,	// (0x0005f674) fep_vkb_candidate_pane

0xc9c5,	// (0x000673a3) fep_vkb_keypad_pane_ParamLimits

0xc9c5,	// (0x000673a3) fep_vkb_keypad_pane

0xc9ec,	// (0x000673ca) fep_vkb_side_pane_ParamLimits

0xc9ec,	// (0x000673ca) fep_vkb_side_pane

0xca28,	// (0x00067406) fep_vkb_top_pane_ParamLimits

0xca28,	// (0x00067406) fep_vkb_top_pane

0x4d5d,	// (0x0005f73b) fep_vkb_top_pane_g1_ParamLimits

0x4d5d,	// (0x0005f73b) fep_vkb_top_pane_g1

0x4d6c,	// (0x0005f74a) fep_vkb_top_pane_g2_ParamLimits

0x4d6c,	// (0x0005f74a) fep_vkb_top_pane_g2

0x4d7b,	// (0x0005f759) fep_vkb_top_pane_g3_ParamLimits

0x4d7b,	// (0x0005f759) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x0006a516) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x0006a516) fep_vkb_top_pane_g

0x4d99,	// (0x0005f777) fep_vkb_top_text_pane_ParamLimits

0x4d99,	// (0x0005f777) fep_vkb_top_text_pane

0xca64,	// (0x00067442) fep_vkb_side_pane_g1_ParamLimits

0xca64,	// (0x00067442) fep_vkb_side_pane_g1

0x4df3,	// (0x0005f7d1) grid_vkb_side_pane_ParamLimits

0x4df3,	// (0x0005f7d1) grid_vkb_side_pane

0x0e2b,	// (0x0005b809) bg_popup_fep_shadow_pane_g2

0x0e34,	// (0x0005b812) bg_popup_fep_shadow_pane_g3

0x0e3c,	// (0x0005b81a) bg_popup_fep_shadow_pane_g4

0x0e45,	// (0x0005b823) bg_popup_fep_shadow_pane_g5

0x0e4f,	// (0x0005b82d) bg_popup_fep_shadow_pane_g6

0x0e57,	// (0x0005b835) bg_popup_fep_shadow_pane_g7

0x8acf,	// (0x000634ad) bg_popup_fep_shadow_pane_g8

0x4e52,	// (0x0005f830) grid_vkb_keypad_number_pane_ParamLimits

0x4e52,	// (0x0005f830) grid_vkb_keypad_number_pane

0x4e66,	// (0x0005f844) grid_vkb_keypad_pane_ParamLimits

0x4e66,	// (0x0005f844) grid_vkb_keypad_pane

0x4e8c,	// (0x0005f86a) fep_vkb_bottom_pane_g1_ParamLimits

0x4e8c,	// (0x0005f86a) fep_vkb_bottom_pane_g1

0x4eb5,	// (0x0005f893) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4eb5,	// (0x0005f893) grid_vkb_keypad_bottom_left_pane

0x4eca,	// (0x0005f8a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4eca,	// (0x0005f8a8) grid_vkb_keypad_bottom_right_pane

0x4edf,	// (0x0005f8bd) fep_vkb_top_text_pane_g1

0xcaab,	// (0x00067489) fep_vkb_top_text_pane_t1

0xcabd,	// (0x0006749b) cell_vkb_side_pane_ParamLimits

0xcabd,	// (0x0006749b) cell_vkb_side_pane

0x4b28,	// (0x0005f506) cell_vkb_side_pane_g1

0x4f4e,	// (0x0005f92c) cell_vkb_keypad_pane_ParamLimits

0x4f4e,	// (0x0005f92c) cell_vkb_keypad_pane

0x4fdb,	// (0x0005f9b9) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x0006a543) bg_popup_fep_shadow_pane_g

0x0e69,	// (0x0005b847) cell_hwr_side_pane_g1

0x0e69,	// (0x0005b847) cell_hwr_side_pane_g2

0x4fe5,	// (0x0005f9c3) cell_vkb_keypad_pane_t1

0xcad3,	// (0x000674b1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcad3,	// (0x000674b1) cell_vkb_keypad_bottom_left_pane

0xcae8,	// (0x000674c6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcae8,	// (0x000674c6) cell_vkb_keypad_bottom_right_pane

0x4b28,	// (0x0005f506) cell_vkb_keypad_bottom_left_pane_g1

0x4b28,	// (0x0005f506) cell_vkb_keypad_bottom_right_pane_g1

0x5049,	// (0x0005fa27) cell_vkb_keypad_number_pane_ParamLimits

0x5049,	// (0x0005fa27) cell_vkb_keypad_number_pane

0x5068,	// (0x0005fa46) cell_vkb_keypad_number_pane_g1

0x5072,	// (0x0005fa50) cell_vkb_keypad_number_pane_g2

0x507b,	// (0x0005fa59) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x0006a535) cell_vkb_keypad_number_pane_g

0x4fe5,	// (0x0005f9c3) cell_vkb_keypad_number_pane_t1

0x50a5,	// (0x0005fa83) fep_vkb_candidate_pane_g1

0x0001,

0xfb78,	// (0x0006a556) cell_hwr_side_pane_g

0x50be,	// (0x0005fa9c) cell_hwr_side_pane_t1

0x0e73,	// (0x0005b851) cell_hwr_side_pane_t1_copy1

0x0e81,	// (0x0005b85f) cell_hwr_candidate_pane_g1

0x0eb0,	// (0x0005b88e) cell_hwr_candidate_pane_t1

0x4b28,	// (0x0005f506) cell_vkb_candidate_pane_g2

0x5102,	// (0x0005fae0) cell_vkb_candidate_pane_t1

0x0c06,	// (0x0005b5e4) bg_popup_fep_shadow_pane_ParamLimits

0x0c06,	// (0x0005b5e4) bg_popup_fep_shadow_pane

0x0cbd,	// (0x0005b69b) bg_fep_hwr_top_pane_g4

0x4b95,	// (0x0005f573) bg_hwr_side_pane_g1_ParamLimits

0x4b95,	// (0x0005f573) bg_hwr_side_pane_g1

0xb70f,	// (0x000660ed) cell_hwr_side_pane_ParamLimits

0xb70f,	// (0x000660ed) cell_hwr_side_pane

0x0d6d,	// (0x0005b74b) fep_hwr_write_pane_g1_ParamLimits

0x0d6d,	// (0x0005b74b) fep_hwr_write_pane_g1

0x0d7a,	// (0x0005b758) fep_hwr_write_pane_g2_ParamLimits

0x0d7a,	// (0x0005b758) fep_hwr_write_pane_g2

0x0d87,	// (0x0005b765) fep_hwr_write_pane_g3_ParamLimits

0x0d87,	// (0x0005b765) fep_hwr_write_pane_g3

0xb72f,	// (0x0006610d) fep_hwr_write_pane_g4_ParamLimits

0xb72f,	// (0x0006610d) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x0006a502) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x0006a502) fep_hwr_write_pane_g

0x0cbd,	// (0x0005b69b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0cbd,	// (0x0005b69b) bg_fep_hwr_candidate_pane_g2

0x0daa,	// (0x0005b788) cell_hwr_candidate_pane_ParamLimits

0x0daa,	// (0x0005b788) cell_hwr_candidate_pane

0x0dfc,	// (0x0005b7da) fep_hwr_candidate_pane_g1_ParamLimits

0x4bf5,	// (0x0005f5d3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4bf5,	// (0x0005f5d3) bg_popup_fep_shadow_pane_cp2

0x4d8b,	// (0x0005f769) fep_vkb_top_pane_g4_ParamLimits

0x4d8b,	// (0x0005f769) fep_vkb_top_pane_g4

0x4dd1,	// (0x0005f7af) fep_vkb_side_pane_g2_ParamLimits

0x4dd1,	// (0x0005f7af) fep_vkb_side_pane_g2

0xa240,	// (0x00064c1e) list_setting_pane_t4_ParamLimits

0xa240,	// (0x00064c1e) list_setting_pane_t4

0xa2dc,	// (0x00064cba) list_setting_number_pane_t5_ParamLimits

0xa2dc,	// (0x00064cba) list_setting_number_pane_t5

0xbf4a,	// (0x00066928) list_double_heading_pane_cp2_ParamLimits

0xbf4a,	// (0x00066928) list_double_heading_pane_cp2

0x5110,	// (0x0005faee) list_double_heading_pane_g1_cp2_ParamLimits

0x5110,	// (0x0005faee) list_double_heading_pane_g1_cp2

0x511c,	// (0x0005fafa) list_double_heading_pane_g2_cp2_ParamLimits

0x511c,	// (0x0005fafa) list_double_heading_pane_g2_cp2

0x5130,	// (0x0005fb0e) list_double_heading_pane_t1_cp2_ParamLimits

0x5130,	// (0x0005fb0e) list_double_heading_pane_t1_cp2

0x5146,	// (0x0005fb24) list_double_heading_pane_t2_cp2_ParamLimits

0x5146,	// (0x0005fb24) list_double_heading_pane_t2_cp2

0x5c16,	// (0x000605f4) aid_value_unit2

0xf01e,	// (0x000699fc) popup_preview_fixed_window

0x8554,	// (0x00062f32) bg_popup_preview_window_pane_cp02

0x5158,	// (0x0005fb36) list_preview_fixed_pane

0x519e,	// (0x0005fb7c) list_empty_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_empty_pane_fp

0x519e,	// (0x0005fb7c) list_single_cale_day_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_single_cale_day_pane_fp

0x519e,	// (0x0005fb7c) list_single_graphic_heading_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_single_graphic_heading_pane_fp

0x519e,	// (0x0005fb7c) list_single_graphic_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_single_graphic_pane_fp

0x519e,	// (0x0005fb7c) list_single_heading_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_single_heading_pane_fp

0x519e,	// (0x0005fb7c) list_single_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_single_pane_fp

0x51b7,	// (0x0005fb95) list_single_pane_fp_g1_ParamLimits

0x51b7,	// (0x0005fb95) list_single_pane_fp_g1

0x5110,	// (0x0005faee) list_single_pane_fp_g2_ParamLimits

0x5110,	// (0x0005faee) list_single_pane_fp_g2

0x511c,	// (0x0005fafa) list_single_pane_fp_g3_ParamLimits

0x511c,	// (0x0005fafa) list_single_pane_fp_g3

0x51c3,	// (0x0005fba1) list_single_pane_fp_g4_ParamLimits

0x51c3,	// (0x0005fba1) list_single_pane_fp_g4

0x0003,

0xfb8b,	// (0x0006a569) list_single_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006a569) list_single_pane_fp_g

0xe891,	// (0x0006926f) list_single_pane_fp_t1_ParamLimits

0xe891,	// (0x0006926f) list_single_pane_fp_t1

0xe8a8,	// (0x00069286) list_single_graphic_pane_fp_g1_ParamLimits

0xe8a8,	// (0x00069286) list_single_graphic_pane_fp_g1

0x51b7,	// (0x0005fb95) list_single_graphic_pane_fp_g2_ParamLimits

0x51b7,	// (0x0005fb95) list_single_graphic_pane_fp_g2

0x5110,	// (0x0005faee) list_single_graphic_pane_fp_g3_ParamLimits

0x5110,	// (0x0005faee) list_single_graphic_pane_fp_g3

0x511c,	// (0x0005fafa) list_single_graphic_pane_fp_g4_ParamLimits

0x511c,	// (0x0005fafa) list_single_graphic_pane_fp_g4

0x51c3,	// (0x0005fba1) list_single_graphic_pane_fp_g5_ParamLimits

0x51c3,	// (0x0005fba1) list_single_graphic_pane_fp_g5

0x0004,

0xfb94,	// (0x0006a572) list_single_graphic_pane_fp_g_ParamLimits

0xfb94,	// (0x0006a572) list_single_graphic_pane_fp_g

0xe8b4,	// (0x00069292) list_single_graphic_pane_fp_t1_ParamLimits

0xe8b4,	// (0x00069292) list_single_graphic_pane_fp_t1

0xe8a8,	// (0x00069286) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe8a8,	// (0x00069286) list_single_graphic_heading_pane_fp_g1

0x51b7,	// (0x0005fb95) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x51b7,	// (0x0005fb95) list_single_graphic_heading_pane_fp_g2

0x5110,	// (0x0005faee) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5110,	// (0x0005faee) list_single_graphic_heading_pane_fp_g3

0x511c,	// (0x0005fafa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x511c,	// (0x0005fafa) list_single_graphic_heading_pane_fp_g4

0x51c3,	// (0x0005fba1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x51c3,	// (0x0005fba1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006a572) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006a572) list_single_graphic_heading_pane_fp_g

0xe8ca,	// (0x000692a8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe8ca,	// (0x000692a8) list_single_graphic_heading_pane_fp_t1

0xe8e0,	// (0x000692be) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe8e0,	// (0x000692be) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x0006a57d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x0006a57d) list_single_graphic_heading_pane_fp_t

0xe8f2,	// (0x000692d0) list_single_cale_day_pane_fp_g1_ParamLimits

0xe8f2,	// (0x000692d0) list_single_cale_day_pane_fp_g1

0x51cf,	// (0x0005fbad) list_single_cale_day_pane_fp_g2_ParamLimits

0x51cf,	// (0x0005fbad) list_single_cale_day_pane_fp_g2

0x3b90,	// (0x0005e56e) list_single_cale_day_pane_fp_g3_ParamLimits

0x3b90,	// (0x0005e56e) list_single_cale_day_pane_fp_g3

0x3bb8,	// (0x0005e596) list_single_cale_day_pane_fp_g4_ParamLimits

0x3bb8,	// (0x0005e596) list_single_cale_day_pane_fp_g4

0x3bdc,	// (0x0005e5ba) list_single_cale_day_pane_fp_g5_ParamLimits

0x3bdc,	// (0x0005e5ba) list_single_cale_day_pane_fp_g5

0x0004,

0xfba4,	// (0x0006a582) list_single_cale_day_pane_fp_g_ParamLimits

0xfba4,	// (0x0006a582) list_single_cale_day_pane_fp_g

0xe92a,	// (0x00069308) list_single_cale_day_pane_fp_t1_ParamLimits

0xe92a,	// (0x00069308) list_single_cale_day_pane_fp_t1

0xe950,	// (0x0006932e) list_single_cale_day_pane_fp_t2_ParamLimits

0xe950,	// (0x0006932e) list_single_cale_day_pane_fp_t2

0xe969,	// (0x00069347) list_single_cale_day_pane_fp_t3_ParamLimits

0xe969,	// (0x00069347) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaf,	// (0x0006a58d) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaf,	// (0x0006a58d) list_single_cale_day_pane_fp_t

0x51b7,	// (0x0005fb95) list_empty_pane_fp_g1_ParamLimits

0x51b7,	// (0x0005fb95) list_empty_pane_fp_g1

0xe982,	// (0x00069360) list_empty_pane_fp_t1

0xe990,	// (0x0006936e) list_empty_pane_fp_t2

0x0001,

0xfbb6,	// (0x0006a594) list_empty_pane_fp_t

0x51b7,	// (0x0005fb95) list_single_heading_pane_fp_g1_ParamLimits

0x51b7,	// (0x0005fb95) list_single_heading_pane_fp_g1

0x5110,	// (0x0005faee) list_single_heading_pane_fp_g2_ParamLimits

0x5110,	// (0x0005faee) list_single_heading_pane_fp_g2

0x511c,	// (0x0005fafa) list_single_heading_pane_fp_g3_ParamLimits

0x511c,	// (0x0005fafa) list_single_heading_pane_fp_g3

0x0002,

0xfbbb,	// (0x0006a599) list_single_heading_pane_fp_g_ParamLimits

0xfbbb,	// (0x0006a599) list_single_heading_pane_fp_g

0xe99e,	// (0x0006937c) list_single_heading_pane_fp_t1_ParamLimits

0xe99e,	// (0x0006937c) list_single_heading_pane_fp_t1

0xe9b0,	// (0x0006938e) list_single_heading_pane_fp_t2_ParamLimits

0xe9b0,	// (0x0006938e) list_single_heading_pane_fp_t2

0x0001,

0xfbc2,	// (0x0006a5a0) list_single_heading_pane_fp_t_ParamLimits

0xfbc2,	// (0x0006a5a0) list_single_heading_pane_fp_t

0x8bc2,	// (0x000635a0) aid_size_cell_fast

0x8537,	// (0x00062f15) soft_indicator_pane_cp1_t1

0x8bff,	// (0x000635dd) cell_app_pane_cp2_ParamLimits

0x8bff,	// (0x000635dd) cell_app_pane_cp2

0x0c28,	// (0x0005b606) fep_hwr_candidate_drop_down_list_pane

0x0e16,	// (0x0005b7f4) fep_hwr_candidate_pane_g3_ParamLimits

0x0e16,	// (0x0005b7f4) fep_hwr_candidate_pane_g3

0xc97a,	// (0x00067358) fep_hwr_candidate_pane_g4_ParamLimits

0xc97a,	// (0x00067358) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x0006a50f) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x0006a50f) fep_hwr_candidate_pane_g

0x4c85,	// (0x0005f663) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4c85,	// (0x0005f663) fep_vkb_candidate_drop_down_list_pane

0x50ad,	// (0x0005fa8b) fep_vkb_candidate_pane_g3

0x50b5,	// (0x0005fa93) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0006a53c) fep_vkb_candidate_pane_g

0x0e81,	// (0x0005b85f) cell_hwr_candidate_pane_g1_ParamLimits

0x0e8f,	// (0x0005b86d) cell_hwr_candidate_pane_g3_ParamLimits

0x0e8f,	// (0x0005b86d) cell_hwr_candidate_pane_g3

0x5c1e,	// (0x000605fc) cell_hwr_candidate_pane_g4_ParamLimits

0x5c1e,	// (0x000605fc) cell_hwr_candidate_pane_g4

0x0002,

0xfb7d,	// (0x0006a55b) cell_hwr_candidate_pane_g_ParamLimits

0xfb7d,	// (0x0006a55b) cell_hwr_candidate_pane_g

0x50cc,	// (0x0005faaa) cell_vkb_candidate_pane_g3_ParamLimits

0x50cc,	// (0x0005faaa) cell_vkb_candidate_pane_g3

0x50e7,	// (0x0005fac5) cell_vkb_candidate_pane_g4_ParamLimits

0x50e7,	// (0x0005fac5) cell_vkb_candidate_pane_g4

0x51db,	// (0x0005fbb9) cell_app_pane_cp2_g1_ParamLimits

0x51db,	// (0x0005fbb9) cell_app_pane_cp2_g1

0x51f9,	// (0x0005fbd7) cell_app_pane_cp2_g2_ParamLimits

0x51f9,	// (0x0005fbd7) cell_app_pane_cp2_g2

0x0001,

0xfbc7,	// (0x0006a5a5) cell_app_pane_cp2_g_ParamLimits

0xfbc7,	// (0x0006a5a5) cell_app_pane_cp2_g

0x5205,	// (0x0005fbe3) cell_app_pane_cp2_t1_ParamLimits

0x5205,	// (0x0005fbe3) cell_app_pane_cp2_t1

0x8a5f,	// (0x0006343d) grid_highlight_pane_cp1_ParamLimits

0x8a5f,	// (0x0006343d) grid_highlight_pane_cp1

0x0ece,	// (0x0005b8ac) cell_hwr_candidate_pane_cp1_ParamLimits

0x0ece,	// (0x0005b8ac) cell_hwr_candidate_pane_cp1

0x0e81,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_pane_g1

0x0ef2,	// (0x0005b8d0) fep_hwr_candidate_drop_down_list_pane_g2

0x0eff,	// (0x0005b8dd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x0006a5aa) fep_hwr_candidate_drop_down_list_pane_g

0x0f0c,	// (0x0005b8ea) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f15,	// (0x0005b8f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f15,	// (0x0005b8f3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f22,	// (0x0005b900) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f22,	// (0x0005b900) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f2f,	// (0x0005b90d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f2f,	// (0x0005b90d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f3c,	// (0x0005b91a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f3c,	// (0x0005b91a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0f57,	// (0x0005b935) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0f57,	// (0x0005b935) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0f72,	// (0x0005b950) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0f72,	// (0x0005b950) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0f8d,	// (0x0005b96b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0f8d,	// (0x0005b96b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0fa8,	// (0x0005b986) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0fa8,	// (0x0005b986) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x0006a5b1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x0006a5b1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5217,	// (0x0005fbf5) cell_vkb_candidate_pane_cp1_ParamLimits

0x5217,	// (0x0005fbf5) cell_vkb_candidate_pane_cp1

0x4d8b,	// (0x0005f769) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4d8b,	// (0x0005f769) fep_vkb_candidate_drop_down_list_pane_g1

0x523d,	// (0x0005fc1b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x523d,	// (0x0005fc1b) fep_vkb_candidate_drop_down_list_pane_g2

0x524a,	// (0x0005fc28) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x524a,	// (0x0005fc28) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x0006a5c2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe4,	// (0x0006a5c2) fep_vkb_candidate_drop_down_list_pane_g

0x5257,	// (0x0005fc35) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5257,	// (0x0005fc35) fep_vkb_candidate_drop_down_list_scroll_pane

0x5264,	// (0x0005fc42) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5264,	// (0x0005fc42) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5271,	// (0x0005fc4f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5271,	// (0x0005fc4f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x527d,	// (0x0005fc5b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x527d,	// (0x0005fc5b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5289,	// (0x0005fc67) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5289,	// (0x0005fc67) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x52aa,	// (0x0005fc88) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x52aa,	// (0x0005fc88) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x52cb,	// (0x0005fca9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x52cb,	// (0x0005fca9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x52ec,	// (0x0005fcca) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x52ec,	// (0x0005fcca) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x530d,	// (0x0005fceb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x530d,	// (0x0005fceb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0006a5c9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0006a5c9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9a8c,	// (0x0006446a) title_pane_g1_ParamLimits

0x9a9f,	// (0x0006447d) title_pane_g2_ParamLimits

0xf54e,	// (0x00069f2c) title_pane_g_ParamLimits

0xbf03,	// (0x000668e1) aid_call2_pane

0xbf0b,	// (0x000668e9) aid_call_pane

0xbf13,	// (0x000668f1) popup_clock_analogue_window_g1

0xbf13,	// (0x000668f1) popup_clock_analogue_window_g2

0xf27c,	// (0x00069c5a) popup_clock_analogue_window_g3

0xf285,	// (0x00069c63) popup_clock_analogue_window_g4

0x7ba2,	// (0x00062580) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006a0db) popup_clock_analogue_window_g

0xf28d,	// (0x00069c6b) popup_clock_analogue_window_t1

0xf29b,	// (0x00069c79) clock_digital_number_pane_ParamLimits

0xf29b,	// (0x00069c79) clock_digital_number_pane

0xf2a7,	// (0x00069c85) clock_digital_number_pane_cp02_ParamLimits

0xf2a7,	// (0x00069c85) clock_digital_number_pane_cp02

0xf2b3,	// (0x00069c91) clock_digital_number_pane_cp03_ParamLimits

0xf2b3,	// (0x00069c91) clock_digital_number_pane_cp03

0xf2bf,	// (0x00069c9d) clock_digital_number_pane_cp04_ParamLimits

0xf2bf,	// (0x00069c9d) clock_digital_number_pane_cp04

0xf2cb,	// (0x00069ca9) clock_digital_separator_pane_ParamLimits

0xf2cb,	// (0x00069ca9) clock_digital_separator_pane

0xf2d7,	// (0x00069cb5) popup_clock_digital_window_t1_ParamLimits

0xf2d7,	// (0x00069cb5) popup_clock_digital_window_t1

0x7ba2,	// (0x00062580) clock_digital_number_pane_g1

0x7ba2,	// (0x00062580) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0006a0e6) clock_digital_number_pane_g

0x7ba2,	// (0x00062580) clock_digital_separator_pane_g1

0x7ba2,	// (0x00062580) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0006a0e6) clock_digital_separator_pane_g

0xb217,	// (0x00065bf5) aid_fill_nsta_ParamLimits

0xb34f,	// (0x00065d2d) indicator_nsta_pane_ParamLimits

0x2126,	// (0x0005cb04) popup_clock_analogue_window

0x2126,	// (0x0005cb04) popup_clock_digital_window

0xc78d,	// (0x0006716b) grid_indicator_nsta_pane_ParamLimits

0x4592,	// (0x0005ef70) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x0006a48f) clock_nsta_pane_t

0xf249,	// (0x00069c27) aid_size_max_handle

0xa5d7,	// (0x00064fb5) aid_size_min_handle

0xe36a,	// (0x00068d48) editor_scroll_pane

0x5328,	// (0x0005fd06) ex_editor_pane

0x8b88,	// (0x00063566) scroll_pane_cp13

0x89fe,	// (0x000633dc) scroll_pane_cp14

0xbf42,	// (0x00066920) scroll_pane_cp36

0xa664,	// (0x00065042) list_single_graphic_hl_pane_cp2_ParamLimits

0xa664,	// (0x00065042) list_single_graphic_hl_pane_cp2

0xc601,	// (0x00066fdf) list_single_graphic_hl_pane_ParamLimits

0xc601,	// (0x00066fdf) list_single_graphic_hl_pane

0xe9c6,	// (0x000693a4) aid_size_min_hl_cp1

0x5330,	// (0x0005fd0e) list_highlight_pane_cp34_ParamLimits

0x5330,	// (0x0005fd0e) list_highlight_pane_cp34

0x5341,	// (0x0005fd1f) list_single_graphic_hl_pane_g1_ParamLimits

0x5341,	// (0x0005fd1f) list_single_graphic_hl_pane_g1

0xb744,	// (0x00066122) list_single_graphic_hl_pane_g2_ParamLimits

0xb744,	// (0x00066122) list_single_graphic_hl_pane_g2

0xb744,	// (0x00066122) list_single_graphic_hl_pane_g3_ParamLimits

0xb744,	// (0x00066122) list_single_graphic_hl_pane_g3

0x537e,	// (0x0005fd5c) list_single_graphic_hl_pane_g4_ParamLimits

0x537e,	// (0x0005fd5c) list_single_graphic_hl_pane_g4

0x538a,	// (0x0005fd68) list_single_graphic_hl_pane_g5_ParamLimits

0x538a,	// (0x0005fd68) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x0006a5da) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x0006a5da) list_single_graphic_hl_pane_g

0xb750,	// (0x0006612e) list_single_graphic_hl_pane_t1_ParamLimits

0xb750,	// (0x0006612e) list_single_graphic_hl_pane_t1

0x534e,	// (0x0005fd2c) aid_size_min_hl_cp2

0x5357,	// (0x0005fd35) list_highlight_pane_cp34_cp2_ParamLimits

0x5357,	// (0x0005fd35) list_highlight_pane_cp34_cp2

0x5341,	// (0x0005fd1f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5341,	// (0x0005fd1f) list_single_graphic_hl_pane_g1_cp2

0x5364,	// (0x0005fd42) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5364,	// (0x0005fd42) list_single_graphic_hl_pane_g2_cp2

0x5370,	// (0x0005fd4e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5370,	// (0x0005fd4e) list_single_graphic_hl_pane_g3_cp2

0x537e,	// (0x0005fd5c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x537e,	// (0x0005fd5c) list_single_graphic_hl_pane_g4_cp2

0x538a,	// (0x0005fd68) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x538a,	// (0x0005fd68) list_single_graphic_hl_pane_g5_cp2

0xa990,	// (0x0006536e) control_pane_g4_ParamLimits

0xa990,	// (0x0006536e) control_pane_g4

0x1e13,	// (0x0005c7f1) bg_popup_sub_pane_cp10_ParamLimits

0x4b32,	// (0x0005f510) list_choice_list_pane_ParamLimits

0x4b41,	// (0x0005f51f) scroll_pane_cp23

0x8554,	// (0x00062f32) bg_popup_preview_window_pane_cp02_ParamLimits

0x5158,	// (0x0005fb36) list_preview_fixed_pane_ParamLimits

0x516e,	// (0x0005fb4c) list_preview_fixed_pane_cp_ParamLimits

0x516e,	// (0x0005fb4c) list_preview_fixed_pane_cp

0x517a,	// (0x0005fb58) popup_preview_fixed_window_g1_ParamLimits

0x517a,	// (0x0005fb58) popup_preview_fixed_window_g1

0x5186,	// (0x0005fb64) popup_preview_fixed_window_g2_ParamLimits

0x5186,	// (0x0005fb64) popup_preview_fixed_window_g2

0x0002,

0xfb84,	// (0x0006a562) popup_preview_fixed_window_g_ParamLimits

0xfb84,	// (0x0006a562) popup_preview_fixed_window_g

0xf1bb,	// (0x00069b99) aid_navi_side_left_pane_ParamLimits

0xf1d0,	// (0x00069bae) aid_navi_side_right_pane_ParamLimits

0xf1e8,	// (0x00069bc6) navi_icon_pane_stacon_ParamLimits

0xf1fc,	// (0x00069bda) navi_navi_pane_stacon_ParamLimits

0xf1e8,	// (0x00069bc6) navi_text_pane_stacon_ParamLimits

0xef0f,	// (0x000698ed) main_text_info_pane

0x53b4,	// (0x0005fd92) listscroll_text_info_pane

0x53bc,	// (0x0005fd9a) list_text_info_pane_ParamLimits

0x53bc,	// (0x0005fd9a) list_text_info_pane

0x53cb,	// (0x0005fda9) scroll_pane_cp24_ParamLimits

0x53cb,	// (0x0005fda9) scroll_pane_cp24

0xcb03,	// (0x000674e1) list_text_info_pane_t1_ParamLimits

0xcb03,	// (0x000674e1) list_text_info_pane_t1

0xab12,	// (0x000654f0) popup_fast_swap2_window_ParamLimits

0xab12,	// (0x000654f0) popup_fast_swap2_window

0x540e,	// (0x0005fdec) aid_size_cell_fast2

0x7b98,	// (0x00062576) bg_popup_window_pane_cp17

0x279d,	// (0x0005d17b) heading_pane_cp2

0x8783,	// (0x00063161) listscroll_fast2_pane

0x5418,	// (0x0005fdf6) grid_fast2_pane

0x5422,	// (0x0005fe00) listscroll_fast2_pane_g1

0x542c,	// (0x0005fe0a) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x0006a5e5) listscroll_fast2_pane_g

0x8b88,	// (0x00063566) scroll_pane_cp26

0x5436,	// (0x0005fe14) cell_fast2_pane_ParamLimits

0x5436,	// (0x0005fe14) cell_fast2_pane

0x544d,	// (0x0005fe2b) cell_fast2_pane_g1

0x5456,	// (0x0005fe34) cell_fast2_pane_g2

0x545f,	// (0x0005fe3d) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x0006a5ea) cell_fast2_pane_g

0x87c5,	// (0x000631a3) grid_highlight_pane_cp9

0x0063,	// (0x0005aa41) main_eswt_pane_ParamLimits

0x0063,	// (0x0005aa41) main_eswt_pane

0x53e0,	// (0x0005fdbe) list_single_text_info_pane

0x5467,	// (0x0005fe45) eswt_ctrl_button_pane

0x5467,	// (0x0005fe45) eswt_ctrl_canvas_pane

0x546f,	// (0x0005fe4d) eswt_ctrl_combo_pane

0x5467,	// (0x0005fe45) eswt_ctrl_default_pane

0x5467,	// (0x0005fe45) eswt_ctrl_label_pane

0x5477,	// (0x0005fe55) eswt_ctrl_wait_pane

0x547f,	// (0x0005fe5d) eswt_shell_pane

0x7b98,	// (0x00062576) listscroll_eswt_app_pane

0x549f,	// (0x0005fe7d) popup_eswt_tasktip_window_ParamLimits

0x549f,	// (0x0005fe7d) popup_eswt_tasktip_window

0x23db,	// (0x0005cdb9) bg_popup_window_pane_cp18

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_ParamLimits

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_ParamLimits

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_ParamLimits

0x54ca,	// (0x0005fea8) eswt_control_pane_g3

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_ParamLimits

0x54d7,	// (0x0005feb5) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x0006a5f1) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x0006a5f1) eswt_control_pane_g

0x8a5f,	// (0x0006343d) bg_button_pane_ParamLimits

0x8a5f,	// (0x0006343d) bg_button_pane

0x87da,	// (0x000631b8) common_borders_pane_copy2_ParamLimits

0x87da,	// (0x000631b8) common_borders_pane_copy2

0x54e4,	// (0x0005fec2) control_button_pane_g1_ParamLimits

0x54e4,	// (0x0005fec2) control_button_pane_g1

0x54f0,	// (0x0005fece) control_button_pane_g2_ParamLimits

0x54f0,	// (0x0005fece) control_button_pane_g2

0x54fc,	// (0x0005feda) control_button_pane_g3_ParamLimits

0x54fc,	// (0x0005feda) control_button_pane_g3

0x0002,

0xfc1c,	// (0x0006a5fa) control_button_pane_g_ParamLimits

0xfc1c,	// (0x0006a5fa) control_button_pane_g

0x5510,	// (0x0005feee) control_button_pane_t1

0x551e,	// (0x0005fefc) control_button_pane_t2

0x0001,

0xfc23,	// (0x0006a601) control_button_pane_t

0x234f,	// (0x0005cd2d) bg_button_pane_g1

0x235f,	// (0x0005cd3d) bg_button_pane_g2

0x2357,	// (0x0005cd35) bg_button_pane_g3

0x236f,	// (0x0005cd4d) bg_button_pane_g4

0x2367,	// (0x0005cd45) bg_button_pane_g5

0x2377,	// (0x0005cd55) bg_button_pane_g6

0x237f,	// (0x0005cd5d) bg_button_pane_g7

0x238f,	// (0x0005cd6d) bg_button_pane_g8

0x2387,	// (0x0005cd65) bg_button_pane_g9

0x0008,

0xf866,	// (0x0006a244) bg_button_pane_g

0x4aed,	// (0x0005f4cb) common_borders_pane_ParamLimits

0x4aed,	// (0x0005f4cb) common_borders_pane

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy1_ParamLimits

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy1

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy1_ParamLimits

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy1

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy1_ParamLimits

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy1

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy1_ParamLimits

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy1

0x4b28,	// (0x0005f506) bg_eswt_ctrl_canvas_pane_g1

0x4aed,	// (0x0005f4cb) common_borders_pane_cp2_ParamLimits

0x4aed,	// (0x0005f4cb) common_borders_pane_cp2

0x4aed,	// (0x0005f4cb) common_borders_pane_cp3_ParamLimits

0x4aed,	// (0x0005f4cb) common_borders_pane_cp3

0x552c,	// (0x0005ff0a) separator_horizontal_pane

0x5534,	// (0x0005ff12) separator_vertical_pane

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy2_ParamLimits

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy2

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy2_ParamLimits

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy2

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy2_ParamLimits

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy2

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy2_ParamLimits

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy2

0x7b98,	// (0x00062576) common_borders_pane_cp4

0x553d,	// (0x0005ff1b) separator_horizontal_pane_g1

0x5546,	// (0x0005ff24) separator_horizontal_pane_g2

0x554f,	// (0x0005ff2d) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x0006a606) separator_horizontal_pane_g

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy3_ParamLimits

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy3

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy3_ParamLimits

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy3

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy3_ParamLimits

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy3

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy3_ParamLimits

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy3

0x7b98,	// (0x00062576) common_borders_pane_cp5

0x5558,	// (0x0005ff36) separator_vertical_pane_g1

0x5561,	// (0x0005ff3f) separator_vertical_pane_g2

0x556a,	// (0x0005ff48) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x0006a60d) separator_vertical_pane_g

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy4_ParamLimits

0x54b0,	// (0x0005fe8e) eswt_control_pane_g1_copy4

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy4_ParamLimits

0x54bd,	// (0x0005fe9b) eswt_control_pane_g2_copy4

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy4_ParamLimits

0x54ca,	// (0x0005fea8) eswt_control_pane_g3_copy4

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy4_ParamLimits

0x54d7,	// (0x0005feb5) eswt_control_pane_g4_copy4

0xcb25,	// (0x00067503) eswt_ctrl_combo_button_pane

0xcb2d,	// (0x0006750b) eswt_ctrl_input_pane

0xcb35,	// (0x00067513) popup_choice_list_window_cp70

0xcb3d,	// (0x0006751b) eswt_ctrl_input_pane_t1

0x7b98,	// (0x00062576) input_focus_pane_cp70

0x4aed,	// (0x0005f4cb) bg_button_pane_cp70_ParamLimits

0x4aed,	// (0x0005f4cb) bg_button_pane_cp70

0xcb4b,	// (0x00067529) eswt_ctrl_combo_button_pane_g1

0x55a1,	// (0x0005ff7f) wait_bar_pane_cp70

0x23db,	// (0x0005cdb9) bg_popup_window_pane_cp70_ParamLimits

0x23db,	// (0x0005cdb9) bg_popup_window_pane_cp70

0x55a9,	// (0x0005ff87) popup_eswt_tasktip_window_t1

0x55bf,	// (0x0005ff9d) wait_bar_pane_cp71_ParamLimits

0x55bf,	// (0x0005ff9d) wait_bar_pane_cp71

0x55cb,	// (0x0005ffa9) grid_eswt_app_pane

0x8db6,	// (0x00063794) scroll_pane_cp70

0xcb53,	// (0x00067531) cell_eswt_app_pane_ParamLimits

0xcb53,	// (0x00067531) cell_eswt_app_pane

0xcb85,	// (0x00067563) cell_eswt_app_pane_g1_ParamLimits

0xcb85,	// (0x00067563) cell_eswt_app_pane_g1

0xcbb4,	// (0x00067592) cell_eswt_app_pane_g2_ParamLimits

0xcbb4,	// (0x00067592) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x0006a614) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x0006a614) cell_eswt_app_pane_g

0xcbdd,	// (0x000675bb) cell_eswt_app_pane_t1_ParamLimits

0xcbdd,	// (0x000675bb) cell_eswt_app_pane_t1

0x5690,	// (0x0006006e) grid_highlight_pane_cp70_ParamLimits

0x5690,	// (0x0006006e) grid_highlight_pane_cp70

0xe253,	// (0x00068c31) set_content_pane_g1

0xa922,	// (0x00065300) status_small_volume_pane

0x0fe5,	// (0x0005b9c3) status_small_volume_pane_g1

0x0fed,	// (0x0005b9cb) volume_small2_pane

0x0ff6,	// (0x0005b9d4) volume_small2_pane_g1

0x0fff,	// (0x0005b9dd) volume_small2_pane_g2

0x1008,	// (0x0005b9e6) volume_small2_pane_g3

0x1011,	// (0x0005b9ef) volume_small2_pane_g4

0x101a,	// (0x0005b9f8) volume_small2_pane_g5

0x1023,	// (0x0005ba01) volume_small2_pane_g6

0x102c,	// (0x0005ba0a) volume_small2_pane_g7

0x1035,	// (0x0005ba13) volume_small2_pane_g8

0x103e,	// (0x0005ba1c) volume_small2_pane_g9

0x1047,	// (0x0005ba25) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x0006a619) volume_small2_pane_g

0x4edf,	// (0x0005f8bd) fep_vkb_top_text_pane_g1_ParamLimits

0xcaab,	// (0x00067489) fep_vkb_top_text_pane_t1_ParamLimits

0x5192,	// (0x0005fb70) popup_preview_fixed_window_g3_ParamLimits

0x5192,	// (0x0005fb70) popup_preview_fixed_window_g3

0xb1aa,	// (0x00065b88) popup_toolbar_trans_pane

0xc504,	// (0x00066ee2) aid_height_set_list_ParamLimits

0x3731,	// (0x0005e10f) aid_size_parent_ParamLimits

0x1e13,	// (0x0005c7f1) list_highlight_pane_cp2_ParamLimits

0xe253,	// (0x00068c31) set_content_pane_g1_ParamLimits

0xc615,	// (0x00066ff3) list_single_image_pane_ParamLimits

0xc615,	// (0x00066ff3) list_single_image_pane

0xcc0f,	// (0x000675ed) aid_size_cell_image_ParamLimits

0xcc0f,	// (0x000675ed) aid_size_cell_image

0xcc1c,	// (0x000675fa) grid_single_image_pane_ParamLimits

0xcc1c,	// (0x000675fa) grid_single_image_pane

0x8a6d,	// (0x0006344b) list_single_image_pane_g1_ParamLimits

0x8a6d,	// (0x0006344b) list_single_image_pane_g1

0x8a79,	// (0x00063457) list_single_image_pane_g2_ParamLimits

0x8a79,	// (0x00063457) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x0006a62e) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x0006a62e) list_single_image_pane_g

0x56b7,	// (0x00060095) list_single_image_pane_t1_ParamLimits

0x56b7,	// (0x00060095) list_single_image_pane_t1

0xcc2a,	// (0x00067608) cell_image_list_pane_ParamLimits

0xcc2a,	// (0x00067608) cell_image_list_pane

0xcc3e,	// (0x0006761c) cell_image_list_pane_g1

0xcc47,	// (0x00067625) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x0006a633) cell_image_list_pane_g

0x56f5,	// (0x000600d3) aid_size_cell_tb_trans_pane

0x8a5f,	// (0x0006343d) bg_tb_trans_pane

0x5707,	// (0x000600e5) grid_tb_trans_pane

0x234f,	// (0x0005cd2d) bg_tb_trans_pane_g1

0x235f,	// (0x0005cd3d) bg_tb_trans_pane_g2

0x2357,	// (0x0005cd35) bg_tb_trans_pane_g3

0x236f,	// (0x0005cd4d) bg_tb_trans_pane_g4

0x2367,	// (0x0005cd45) bg_tb_trans_pane_g5

0x238f,	// (0x0005cd6d) bg_tb_trans_pane_g6

0x2387,	// (0x0005cd65) bg_tb_trans_pane_g7

0x2377,	// (0x0005cd55) bg_tb_trans_pane_g8

0x237f,	// (0x0005cd5d) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x0006a638) bg_tb_trans_pane_g

0x571b,	// (0x000600f9) cell_toolbar_trans_pane_ParamLimits

0x571b,	// (0x000600f9) cell_toolbar_trans_pane

0x4b28,	// (0x0005f506) cell_toolbar_trans_pane_g1

0xc86e,	// (0x0006724c) list_form2_midp_pane_t1

0xc87c,	// (0x0006725a) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x0006a4d5) list_form2_midp_pane_t

0x477c,	// (0x0005f15a) scroll_pane_cp51_ParamLimits

0x4943,	// (0x0005f321) form2_midp_wait_pane_g1

0x494c,	// (0x0005f32a) form2_midp_wait_pane_g2

0x4955,	// (0x0005f333) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x0006a4ea) form2_midp_wait_pane_g

0x7bfa,	// (0x000625d8) list_highlight_pane_cp21_ParamLimits

0x498e,	// (0x0005f36c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x499d,	// (0x0005f37b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3917,	// (0x0005e2f5) list_single_2graphic_im_pane_ParamLimits

0x3917,	// (0x0005e2f5) list_single_2graphic_im_pane

0xcc50,	// (0x0006762e) list_single_2graphic_im_pane_g1_ParamLimits

0xcc50,	// (0x0006762e) list_single_2graphic_im_pane_g1

0xcc61,	// (0x0006763f) list_single_2graphic_im_pane_g2_ParamLimits

0xcc61,	// (0x0006763f) list_single_2graphic_im_pane_g2

0xcc6d,	// (0x0006764b) list_single_2graphic_im_pane_g3_ParamLimits

0xcc6d,	// (0x0006764b) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x0006a64b) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x0006a64b) list_single_2graphic_im_pane_g

0xcc81,	// (0x0006765f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc81,	// (0x0006765f) list_single_2graphic_im_pane_t1

0x519e,	// (0x0005fb7c) list_single_graphic_2heading_pane_fp_ParamLimits

0x519e,	// (0x0005fb7c) list_single_graphic_2heading_pane_fp

0xe8a8,	// (0x00069286) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe8a8,	// (0x00069286) list_single_graphic_2heading_pane_fp_g1

0x51b7,	// (0x0005fb95) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x51b7,	// (0x0005fb95) list_single_graphic_2heading_pane_fp_g2

0x5110,	// (0x0005faee) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5110,	// (0x0005faee) list_single_graphic_2heading_pane_fp_g3

0x511c,	// (0x0005fafa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x511c,	// (0x0005fafa) list_single_graphic_2heading_pane_fp_g4

0x51c3,	// (0x0005fba1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x51c3,	// (0x0005fba1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006a572) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006a572) list_single_graphic_2heading_pane_fp_g

0xe9cf,	// (0x000693ad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe9cf,	// (0x000693ad) list_single_graphic_2heading_pane_fp_t1

0xe8e0,	// (0x000692be) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe8e0,	// (0x000692be) list_single_graphic_2heading_pane_fp_t2

0xe9e5,	// (0x000693c3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe9e5,	// (0x000693c3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x0006a654) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x0006a654) list_single_graphic_2heading_pane_fp_t

0x4ba1,	// (0x0005f57f) fep_hwr_write_pane_g5_ParamLimits

0x4ba1,	// (0x0005f57f) fep_hwr_write_pane_g5

0x4bad,	// (0x0005f58b) fep_hwr_write_pane_g6_ParamLimits

0x4bad,	// (0x0005f58b) fep_hwr_write_pane_g6

0x547f,	// (0x0005fe5d) eswt_shell_pane_ParamLimits

0x23db,	// (0x0005cdb9) bg_popup_window_pane_cp18_ParamLimits

0x3677,	// (0x0005e055) heading_pane_cp70

0x55a9,	// (0x0005ff87) popup_eswt_tasktip_window_t1_ParamLimits

0xb274,	// (0x00065c52) aid_touch_tab_arrow_left

0xb28a,	// (0x00065c68) aid_touch_tab_arrow_right

0x9ac3,	// (0x000644a1) title_pane_g3_ParamLimits

0x9ac3,	// (0x000644a1) title_pane_g3

0x8a1e,	// (0x000633fc) set_value_pane_g1

0xb1aa,	// (0x00065b88) popup_toolbar_trans_pane_ParamLimits

0x56f5,	// (0x000600d3) aid_size_cell_tb_trans_pane_ParamLimits

0x8a5f,	// (0x0006343d) bg_tb_trans_pane_ParamLimits

0x5707,	// (0x000600e5) grid_tb_trans_pane_ParamLimits

0x8554,	// (0x00062f32) cont_note_pane_ParamLimits

0x8554,	// (0x00062f32) cont_note_pane

0x87da,	// (0x000631b8) cont_snote2_single_text_pane_ParamLimits

0x87da,	// (0x000631b8) cont_snote2_single_text_pane

0x87da,	// (0x000631b8) cont_snote2_single_graphic_pane_ParamLimits

0x87da,	// (0x000631b8) cont_snote2_single_graphic_pane

0x29c5,	// (0x0005d3a3) cont_note_wait_pane_ParamLimits

0x29c5,	// (0x0005d3a3) cont_note_wait_pane

0x29c5,	// (0x0005d3a3) cont_note_image_pane_ParamLimits

0x29c5,	// (0x0005d3a3) cont_note_image_pane

0x57af,	// (0x0006018d) popup_note2_window_g1_ParamLimits

0x57af,	// (0x0006018d) popup_note2_window_g1

0x57e0,	// (0x000601be) popup_note2_window_t1_ParamLimits

0x57e0,	// (0x000601be) popup_note2_window_t1

0x5825,	// (0x00060203) popup_note2_window_t2_ParamLimits

0x5825,	// (0x00060203) popup_note2_window_t2

0x586a,	// (0x00060248) popup_note2_window_t3_ParamLimits

0x586a,	// (0x00060248) popup_note2_window_t3

0x58af,	// (0x0006028d) popup_note2_window_t4_ParamLimits

0x58af,	// (0x0006028d) popup_note2_window_t4

0x85d8,	// (0x00062fb6) popup_note2_window_t5_ParamLimits

0x85d8,	// (0x00062fb6) popup_note2_window_t5

0x0004,

0xfc82,	// (0x0006a660) popup_note2_window_t_ParamLimits

0xfc82,	// (0x0006a660) popup_note2_window_t

0x58de,	// (0x000602bc) popup_note2_image_window_g1_ParamLimits

0x58de,	// (0x000602bc) popup_note2_image_window_g1

0x58ea,	// (0x000602c8) popup_note2_image_window_g2_ParamLimits

0x58ea,	// (0x000602c8) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x0006a66b) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x0006a66b) popup_note2_image_window_g

0x58fc,	// (0x000602da) popup_note2_image_window_t1_ParamLimits

0x58fc,	// (0x000602da) popup_note2_image_window_t1

0x5914,	// (0x000602f2) popup_note2_image_window_t2_ParamLimits

0x5914,	// (0x000602f2) popup_note2_image_window_t2

0x592c,	// (0x0006030a) popup_note2_image_window_t3_ParamLimits

0x592c,	// (0x0006030a) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x0006a670) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x0006a670) popup_note2_image_window_t

0x29d3,	// (0x0005d3b1) popup_note2_wait_window_g1_ParamLimits

0x29d3,	// (0x0005d3b1) popup_note2_wait_window_g1

0x5948,	// (0x00060326) popup_note2_wait_window_g2_ParamLimits

0x5948,	// (0x00060326) popup_note2_wait_window_g2

0x29eb,	// (0x0005d3c9) popup_note2_wait_window_g3_ParamLimits

0x29eb,	// (0x0005d3c9) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x0006a677) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x0006a677) popup_note2_wait_window_g

0x5954,	// (0x00060332) popup_note2_wait_window_t1_ParamLimits

0x5954,	// (0x00060332) popup_note2_wait_window_t1

0x5972,	// (0x00060350) popup_note2_wait_window_t2_ParamLimits

0x5972,	// (0x00060350) popup_note2_wait_window_t2

0x5990,	// (0x0006036e) popup_note2_wait_window_t3_ParamLimits

0x5990,	// (0x0006036e) popup_note2_wait_window_t3

0x59a2,	// (0x00060380) popup_note2_wait_window_t4_ParamLimits

0x59a2,	// (0x00060380) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x0006a67e) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x0006a67e) popup_note2_wait_window_t

0x59b4,	// (0x00060392) wait_bar2_pane_ParamLimits

0x59b4,	// (0x00060392) wait_bar2_pane

0x59cc,	// (0x000603aa) popup_snote2_single_text_window_g1_ParamLimits

0x59cc,	// (0x000603aa) popup_snote2_single_text_window_g1

0x59f4,	// (0x000603d2) popup_snote2_single_text_window_t1_ParamLimits

0x59f4,	// (0x000603d2) popup_snote2_single_text_window_t1

0x5a40,	// (0x0006041e) popup_snote2_single_text_window_t2_ParamLimits

0x5a40,	// (0x0006041e) popup_snote2_single_text_window_t2

0x5a8c,	// (0x0006046a) popup_snote2_single_text_window_t3_ParamLimits

0x5a8c,	// (0x0006046a) popup_snote2_single_text_window_t3

0x5acd,	// (0x000604ab) popup_snote2_single_text_window_t4_ParamLimits

0x5acd,	// (0x000604ab) popup_snote2_single_text_window_t4

0x5b03,	// (0x000604e1) popup_snote2_single_text_window_t5_ParamLimits

0x5b03,	// (0x000604e1) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x0006a687) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x0006a687) popup_snote2_single_text_window_t

0x5b2e,	// (0x0006050c) popup_snote2_single_graphic_window_g1_ParamLimits

0x5b2e,	// (0x0006050c) popup_snote2_single_graphic_window_g1

0x5b56,	// (0x00060534) popup_snote2_single_graphic_window_g2_ParamLimits

0x5b56,	// (0x00060534) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x0006a692) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x0006a692) popup_snote2_single_graphic_window_g

0x5b7e,	// (0x0006055c) popup_snote2_single_graphic_window_t1_ParamLimits

0x5b7e,	// (0x0006055c) popup_snote2_single_graphic_window_t1

0x5bca,	// (0x000605a8) popup_snote2_single_graphic_window_t2_ParamLimits

0x5bca,	// (0x000605a8) popup_snote2_single_graphic_window_t2

0x5a8c,	// (0x0006046a) popup_snote2_single_graphic_window_t3_ParamLimits

0x5a8c,	// (0x0006046a) popup_snote2_single_graphic_window_t3

0x5acd,	// (0x000604ab) popup_snote2_single_graphic_window_t4_ParamLimits

0x5acd,	// (0x000604ab) popup_snote2_single_graphic_window_t4

0x5b03,	// (0x000604e1) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b03,	// (0x000604e1) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x0006a697) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x0006a697) popup_snote2_single_graphic_window_t

0x462c,	// (0x0005f00a) clock_nsta_pane_cp2_t1

0x462c,	// (0x0005f00a) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x0006a4ab) clock_nsta_pane_cp2_t

0xdf84,	// (0x00068962) form_field_data_wide_pane_g1_ParamLimits

0x8a6d,	// (0x0006344b) form_field_data_wide_pane_g2_ParamLimits

0x8a6d,	// (0x0006344b) form_field_data_wide_pane_g2

0x8a79,	// (0x00063457) form_field_data_wide_pane_g3_ParamLimits

0x8a79,	// (0x00063457) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0006a05e) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0006a05e) form_field_data_wide_pane_g

0xc777,	// (0x00067155) grid_touch_3_pane_ParamLimits

0xc777,	// (0x00067155) grid_touch_3_pane

0xccb2,	// (0x00067690) cell_touch_3_pane_ParamLimits

0xccb2,	// (0x00067690) cell_touch_3_pane

0x4b28,	// (0x0005f506) cell_touch_3_pane_g1

0x4b28,	// (0x0005f506) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x0006a530) cell_touch_3_pane_g

0x8630,	// (0x0006300e) cont_query_data_pane

0x8638,	// (0x00063016) cont_query_data_pane_cp1

0x5c72,	// (0x00060650) button_value_adjust_pane_cp7

0x5c7a,	// (0x00060658) query_popup_pane_cp3

0xbf73,	// (0x00066951) bg_popup_sub_pane_cp22_ParamLimits

0xf2f6,	// (0x00069cd4) navi_navi_volume_pane_cp2

0xf311,	// (0x00069cef) popup_side_volume_key_window_g2

0xf320,	// (0x00069cfe) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0006a0f4) popup_side_volume_key_window_g

0xf33d,	// (0x00069d1b) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006a0fb) popup_side_volume_key_window_t

0xe119,	// (0x00068af7) popup_side_volume_key_window_ParamLimits

0x9fe0,	// (0x000649be) list_double_graphic_pane_g4_ParamLimits

0x9fe0,	// (0x000649be) list_double_graphic_pane_g4

0xc5ec,	// (0x00066fca) list_single_2heading_msg_pane_ParamLimits

0xc5ec,	// (0x00066fca) list_single_2heading_msg_pane

0xccfe,	// (0x000676dc) list_single_2heading_msg_pane_g1_ParamLimits

0xccfe,	// (0x000676dc) list_single_2heading_msg_pane_g1

0xcd0a,	// (0x000676e8) list_single_2heading_msg_pane_g2_ParamLimits

0xcd0a,	// (0x000676e8) list_single_2heading_msg_pane_g2

0xcd1d,	// (0x000676fb) list_single_2heading_msg_pane_g3_ParamLimits

0xcd1d,	// (0x000676fb) list_single_2heading_msg_pane_g3

0xcd29,	// (0x00067707) list_single_2heading_msg_pane_g4_ParamLimits

0xcd29,	// (0x00067707) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x0006a6a2) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x0006a6a2) list_single_2heading_msg_pane_g

0xb766,	// (0x00066144) list_single_2heading_msg_pane_t1_ParamLimits

0xb766,	// (0x00066144) list_single_2heading_msg_pane_t1

0xb78e,	// (0x0006616c) list_single_2heading_msg_pane_t2_ParamLimits

0xb78e,	// (0x0006616c) list_single_2heading_msg_pane_t2

0xb7f9,	// (0x000661d7) list_single_2heading_msg_pane_t3_ParamLimits

0xb7f9,	// (0x000661d7) list_single_2heading_msg_pane_t3

0xea05,	// (0x000693e3) list_single_2heading_msg_pane_t4_ParamLimits

0xea05,	// (0x000693e3) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x0006a6ab) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x0006a6ab) list_single_2heading_msg_pane_t

0x7bb6,	// (0x00062594) title_pane_g4_ParamLimits

0x7bb6,	// (0x00062594) title_pane_g4

0xf10b,	// (0x00069ae9) title_pane_stacon_g3_ParamLimits

0xf10b,	// (0x00069ae9) title_pane_stacon_g3

0x5772,	// (0x00060150) list_single_2graphic_im_pane_g4_ParamLimits

0x5772,	// (0x00060150) list_single_2graphic_im_pane_g4

0x3435,	// (0x0005de13) popup_side_volume_key_window_cp

0x3e56,	// (0x0005e834) main_idle_act2_pane_t1

0x06b6,	// (0x0005b094) toolbar_button_pane_g10

0x9e40,	// (0x0006481e) popup_toolbar_window_cp1

0x461d,	// (0x0005effb) clock_nsta_pane_cp_t1

0x461d,	// (0x0005effb) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x0006a4a6) clock_nsta_pane_cp_t

0xf2f6,	// (0x00069cd4) navi_navi_volume_pane_cp2_ParamLimits

0xf305,	// (0x00069ce3) popup_side_volume_key_window_g1_ParamLimits

0xf311,	// (0x00069cef) popup_side_volume_key_window_g2_ParamLimits

0xf320,	// (0x00069cfe) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0006a0f4) popup_side_volume_key_window_g_ParamLimits

0x0c14,	// (0x0005b5f2) fep_hwr_aid_pane

0x0cbd,	// (0x0005b69b) bg_fep_hwr_top_pane_g4_ParamLimits

0x4b71,	// (0x0005f54f) fep_hwr_top_pane_g1_ParamLimits

0x4b83,	// (0x0005f561) fep_hwr_top_pane_g2_ParamLimits

0x0cdd,	// (0x0005b6bb) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x0006a4fb) fep_hwr_top_pane_g_ParamLimits

0x0cf2,	// (0x0005b6d0) fep_hwr_top_text_pane_ParamLimits

0x31ea,	// (0x0005dbc8) aid_touch_tab_arrow_arrow_2

0x31f3,	// (0x0005dbd1) aid_touch_tab_arrow_left_2

0x0c28,	// (0x0005b606) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0c5f,	// (0x0005b63d) fep_hwr_prediction_pane

0x4cd9,	// (0x0005f6b7) fep_vkb_prediction_pane

0xca8b,	// (0x00067469) fep_vkb_side_pane_g3_ParamLimits

0xca8b,	// (0x00067469) fep_vkb_side_pane_g3

0x0e81,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0ef2,	// (0x0005b8d0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0eff,	// (0x0005b8dd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcc,	// (0x0006a5aa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x10e0,	// (0x0005babe) fep_hwr_prediction_pane_g1

0x10ea,	// (0x0005bac8) fep_hwr_prediction_pane_g2

0x10f2,	// (0x0005bad0) fep_hwr_prediction_pane_g3

0x10fa,	// (0x0005bad8) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0006a6b4) fep_hwr_prediction_pane_g

0x5ca1,	// (0x0006067f) fep_vkb_prediction_pane_g1

0x5cab,	// (0x00060689) fep_vkb_prediction_pane_g2

0x5cb3,	// (0x00060691) fep_vkb_prediction_pane_g3

0x5cbb,	// (0x00060699) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0006a6bd) fep_vkb_prediction_pane_g

0x0a06,	// (0x0005b3e4) slider_set_pane_g3

0x0a1a,	// (0x0005b3f8) slider_set_pane_g4

0x0a32,	// (0x0005b410) slider_set_pane_g5

0x0a06,	// (0x0005b3e4) slider_set_pane_g6

0x0a48,	// (0x0005b426) slider_set_pane_g7

0x38b0,	// (0x0005e28e) slider_form_pane_g3

0x38b9,	// (0x0005e297) slider_form_pane_g4

0x38c1,	// (0x0005e29f) slider_form_pane_g5

0x38b0,	// (0x0005e28e) slider_form_pane_g6

0xc5ab,	// (0x00066f89) slider_form_pane_g7

0x4104,	// (0x0005eae2) slider_set_pane_vc_g3

0x410d,	// (0x0005eaeb) slider_set_pane_vc_g4

0x4116,	// (0x0005eaf4) slider_set_pane_vc_g5

0x4104,	// (0x0005eae2) slider_set_pane_vc_g6

0x411f,	// (0x0005eafd) slider_set_pane_vc_g7

0x42f3,	// (0x0005ecd1) slider_form_pane_vc_g1

0x42fc,	// (0x0005ecda) slider_form_pane_vc_g2

0x4305,	// (0x0005ece3) slider_form_pane_vc_g3

0x42f3,	// (0x0005ecd1) slider_form_pane_vc_g4

0x430e,	// (0x0005ecec) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x0006a478) slider_form_pane_vc_g

0xef0f,	// (0x000698ed) main_idle_act3_pane

0x5cc3,	// (0x000606a1) ai3_links_pane

0xcd41,	// (0x0006771f) popup_ai3_data_window_ParamLimits

0xcd41,	// (0x0006771f) popup_ai3_data_window

0x7b98,	// (0x00062576) grid_ai3_links_pane

0xcd5f,	// (0x0006773d) cell_ai3_links_pane_ParamLimits

0xcd5f,	// (0x0006773d) cell_ai3_links_pane

0x5d04,	// (0x000606e2) bg_popup_sub_pane_cp11

0x5d11,	// (0x000606ef) cell_ai3_links_pane_g1

0x7b98,	// (0x00062576) bg_popup_sub_pane_cp12

0x5d36,	// (0x00060714) heading_ai3_data_pane

0x5d3e,	// (0x0006071c) list_ai3_gene_pane

0x5d4a,	// (0x00060728) popup_ai3_data_window_g1

0x5d52,	// (0x00060730) heading_ai3_data_pane_g1

0x5d5a,	// (0x00060738) heading_ai3_data_pane_t1

0x5d68,	// (0x00060746) list_double_ai3_gene_pane_ParamLimits

0x5d68,	// (0x00060746) list_double_ai3_gene_pane

0x5d75,	// (0x00060753) list_single_ai3_gene_pane_ParamLimits

0x5d75,	// (0x00060753) list_single_ai3_gene_pane

0x4aed,	// (0x0005f4cb) list_highlight_pane_cp7_ParamLimits

0x4aed,	// (0x0005f4cb) list_highlight_pane_cp7

0x5d82,	// (0x00060760) list_single_a13_gene_pane_t1_ParamLimits

0x5d82,	// (0x00060760) list_single_a13_gene_pane_t1

0x5d99,	// (0x00060777) list_single_ai3_gene_pane_g1

0x5da2,	// (0x00060780) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x0006a6c6) list_single_ai3_gene_pane_g

0x5daa,	// (0x00060788) list_double_ai3_gene_pane_g1_ParamLimits

0x5daa,	// (0x00060788) list_double_ai3_gene_pane_g1

0x5db6,	// (0x00060794) list_double_ai3_gene_pane_t1_ParamLimits

0x5db6,	// (0x00060794) list_double_ai3_gene_pane_t1

0x5dd2,	// (0x000607b0) list_double_ai3_gene_pane_t2_ParamLimits

0x5dd2,	// (0x000607b0) list_double_ai3_gene_pane_t2

0x5de7,	// (0x000607c5) list_double_ai3_gene_pane_t3_ParamLimits

0x5de7,	// (0x000607c5) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x0006a6cb) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x0006a6cb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe9fb,	// (0x000693d9) aid_size_min_col_2

0xcce8,	// (0x000676c6) aid_size_min_msg_ParamLimits

0xcce8,	// (0x000676c6) aid_size_min_msg

0xca9f,	// (0x0006747d) fep_vkb_top_text_pane_g2_ParamLimits

0xca9f,	// (0x0006747d) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x0006a52b) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x0006a52b) fep_vkb_top_text_pane_g

0xef0f,	// (0x000698ed) main_hc_apps_shell_pane

0x5e04,	// (0x000607e2) grid_hc_apps_pane_ParamLimits

0x5e04,	// (0x000607e2) grid_hc_apps_pane

0x5e13,	// (0x000607f1) list_hc_apps_pane

0x5e1b,	// (0x000607f9) scroll_pane_cp37_ParamLimits

0x5e1b,	// (0x000607f9) scroll_pane_cp37

0xcd79,	// (0x00067757) cell_hc_apps_pane_ParamLimits

0xcd79,	// (0x00067757) cell_hc_apps_pane

0xce43,	// (0x00067821) cell_hc_apps_pane_g1_ParamLimits

0xce43,	// (0x00067821) cell_hc_apps_pane_g1

0x5f10,	// (0x000608ee) cell_hc_apps_pane_g2_ParamLimits

0x5f10,	// (0x000608ee) cell_hc_apps_pane_g2

0x5f2c,	// (0x0006090a) cell_hc_apps_pane_g3_ParamLimits

0x5f2c,	// (0x0006090a) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x0006a6d2) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x0006a6d2) cell_hc_apps_pane_g

0xce70,	// (0x0006784e) cell_hc_apps_pane_t1_ParamLimits

0xce70,	// (0x0006784e) cell_hc_apps_pane_t1

0x8554,	// (0x00062f32) grid_highlight_pane_cp10_ParamLimits

0x8554,	// (0x00062f32) grid_highlight_pane_cp10

0xceb0,	// (0x0006788e) list_single_hc_apps_pane_ParamLimits

0xceb0,	// (0x0006788e) list_single_hc_apps_pane

0xceea,	// (0x000678c8) list_single_hc_apps_pane_g1

0xcf03,	// (0x000678e1) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x0006a6d9) list_single_hc_apps_pane_g

0xcf1c,	// (0x000678fa) list_single_hc_apps_pane_g2_copy1

0xb867,	// (0x00066245) list_single_hc_apps_pane_t1

0x7bfa,	// (0x000625d8) bg_set_opt_pane_cp_ParamLimits

0xf032,	// (0x00069a10) setting_slider_pane_t1_ParamLimits

0xf04b,	// (0x00069a29) setting_slider_pane_t2_ParamLimits

0xf065,	// (0x00069a43) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00069f3c) setting_slider_pane_t_ParamLimits

0xf07d,	// (0x00069a5b) slider_set_pane_ParamLimits

0xf53f,	// (0x00069f1d) control_pane_g5_ParamLimits

0xf53f,	// (0x00069f1d) control_pane_g5

0x36e3,	// (0x0005e0c1) slider_set_pane_g1_ParamLimits

0x09fa,	// (0x0005b3d8) slider_set_pane_g2_ParamLimits

0x0a06,	// (0x0005b3e4) slider_set_pane_g3_ParamLimits

0x0a1a,	// (0x0005b3f8) slider_set_pane_g4_ParamLimits

0x0a32,	// (0x0005b410) slider_set_pane_g5_ParamLimits

0x0a06,	// (0x0005b3e4) slider_set_pane_g6_ParamLimits

0x0a48,	// (0x0005b426) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0006a342) slider_set_pane_g_ParamLimits

0xe1fe,	// (0x00068bdc) navi_icon_text_pane_ParamLimits

0xb23b,	// (0x00065c19) aid_fill_nsta_2_ParamLimits

0xb274,	// (0x00065c52) aid_touch_tab_arrow_left_ParamLimits

0xb28a,	// (0x00065c68) aid_touch_tab_arrow_right_ParamLimits

0xb325,	// (0x00065d03) clock_nsta_pane_ParamLimits

0xc3eb,	// (0x00066dc9) navi_icon_pane_g1_ParamLimits

0xc3f7,	// (0x00066dd5) navi_text_pane_t1_ParamLimits

0xc850,	// (0x0006722e) navi_icon_text_pane_g1_ParamLimits

0xc85c,	// (0x0006723a) navi_icon_text_pane_t1_ParamLimits

0xceea,	// (0x000678c8) list_single_hc_apps_pane_g1_ParamLimits

0xcf03,	// (0x000678e1) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x0006a6d9) list_single_hc_apps_pane_g_ParamLimits

0xcf1c,	// (0x000678fa) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb867,	// (0x00066245) list_single_hc_apps_pane_t1_ParamLimits

0x99b2,	// (0x00064390) popup_toolbar2_fixed_window_ParamLimits

0x99b2,	// (0x00064390) popup_toolbar2_fixed_window

0xb1a0,	// (0x00065b7e) popup_toolbar2_float_window

0x7b98,	// (0x00062576) bg_popup_sub_pane_cp27

0x5fe6,	// (0x000609c4) grid_toolbar2_float_pane

0x7b98,	// (0x00062576) bg_popup_sub_pane_cp26

0x5fe6,	// (0x000609c4) grid_toolbar2_fixed_pane

0xcf38,	// (0x00067916) cell_toolbar2_fixed_pane_ParamLimits

0xcf38,	// (0x00067916) cell_toolbar2_fixed_pane

0xcf52,	// (0x00067930) cell_toolbar2_fixed_pane_g1

0x6007,	// (0x000609e5) toolbar2_fixed_button_pane

0x234f,	// (0x0005cd2d) toolbar2_fixed_button_pane_g1

0x235f,	// (0x0005cd3d) toolbar2_fixed_button_pane_g2

0x2357,	// (0x0005cd35) toolbar2_fixed_button_pane_g3

0x236f,	// (0x0005cd4d) toolbar2_fixed_button_pane_g4

0x2367,	// (0x0005cd45) toolbar2_fixed_button_pane_g5

0x2377,	// (0x0005cd55) toolbar2_fixed_button_pane_g6

0x237f,	// (0x0005cd5d) toolbar2_fixed_button_pane_g7

0x238f,	// (0x0005cd6d) toolbar2_fixed_button_pane_g8

0x2387,	// (0x0005cd65) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0006a244) toolbar2_fixed_button_pane_g

0x600f,	// (0x000609ed) cell_toolbar2_float_pane_ParamLimits

0x600f,	// (0x000609ed) cell_toolbar2_float_pane

0x6020,	// (0x000609fe) cell_toolbar2_float_pane_g1

0x6007,	// (0x000609e5) toolbar2_fixed_button_pane_cp

0xc987,	// (0x00067365) fep_vkb_accented_list_pane_ParamLimits

0xc987,	// (0x00067365) fep_vkb_accented_list_pane

0x0e61,	// (0x0005b83f) bg_popup_fep_shadow_pane_g9

0xe36a,	// (0x00068d48) bg_popup_fep_shadow_pane_cp3

0x8b6f,	// (0x0006354d) list_accented_list_pane

0x6029,	// (0x00060a07) list_single_accented_list_pane_ParamLimits

0x6029,	// (0x00060a07) list_single_accented_list_pane

0xe36a,	// (0x00068d48) list_highlight_pane_cp10

0x603a,	// (0x00060a18) list_single_accented_list_pane_t1

0xb0be,	// (0x00065a9c) popup_slider_window_ParamLimits

0xb0be,	// (0x00065a9c) popup_slider_window

0x5c82,	// (0x00060660) aid_indentation_list_msg

0xd055,	// (0x00067a33) bg_popup_window_pane_cp19

0x6176,	// (0x00060b54) popup_slider_window_g1

0x6192,	// (0x00060b70) popup_slider_window_g2

0x61ae,	// (0x00060b8c) popup_slider_window_g3

0x0005,

0xfd00,	// (0x0006a6de) popup_slider_window_g

0x6214,	// (0x00060bf2) popup_slider_window_t1

0x6288,	// (0x00060c66) small_volume_slider_vertical_pane

0x4b28,	// (0x0005f506) small_volume_slider_vertical_pane_g1

0x4b28,	// (0x0005f506) small_volume_slider_vertical_pane_g2

0x62a4,	// (0x00060c82) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x0006a6f0) small_volume_slider_vertical_pane_g

0x991c,	// (0x000642fa) area_side_right_pane_ParamLimits

0x991c,	// (0x000642fa) area_side_right_pane

0xb895,	// (0x00066273) aid_size_side_button_ParamLimits

0xb895,	// (0x00066273) aid_size_side_button

0xb8ae,	// (0x0006628c) grid_sctrl_middle_pane_ParamLimits

0xb8ae,	// (0x0006628c) grid_sctrl_middle_pane

0x1163,	// (0x0005bb41) sctrl_sk_bottom_pane

0x1174,	// (0x0005bb52) sctrl_sk_top_pane

0x1186,	// (0x0005bb64) aid_touch_sctrl_top

0x1193,	// (0x0005bb71) bg_sctrl_sk_pane_ParamLimits

0x1193,	// (0x0005bb71) bg_sctrl_sk_pane

0x11a1,	// (0x0005bb7f) sctrl_sk_top_pane_g1

0x11ae,	// (0x0005bb8c) sctrl_sk_top_pane_t1

0x1186,	// (0x0005bb64) aid_touch_sctrl_bottom

0x1193,	// (0x0005bb71) bg_sctrl_sk_pane_cp_ParamLimits

0x1193,	// (0x0005bb71) bg_sctrl_sk_pane_cp

0x11c9,	// (0x0005bba7) sctrl_sk_bottom_pane_g1

0x11ae,	// (0x0005bb8c) sctrl_sk_bottom_pane_t1

0xb8c8,	// (0x000662a6) cell_sctrl_middle_pane_ParamLimits

0xb8c8,	// (0x000662a6) cell_sctrl_middle_pane

0xb8db,	// (0x000662b9) aid_touch_sctrl_middle_ParamLimits

0xb8db,	// (0x000662b9) aid_touch_sctrl_middle

0xb8e8,	// (0x000662c6) bg_sctrl_middle_pane_ParamLimits

0xb8e8,	// (0x000662c6) bg_sctrl_middle_pane

0x184c,	// (0x0005c22a) cell_sctrl_middle_pane_g1_ParamLimits

0x184c,	// (0x0005c22a) cell_sctrl_middle_pane_g1

0xb8f6,	// (0x000662d4) cell_sctrl_middle_pane_g2_ParamLimits

0xb8f6,	// (0x000662d4) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x0006a6fc) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x0006a6fc) cell_sctrl_middle_pane_g

0x234f,	// (0x0005cd2d) bg_sctrl_middle_pane_g1

0x2357,	// (0x0005cd35) bg_sctrl_middle_pane_g2

0x235f,	// (0x0005cd3d) bg_sctrl_middle_pane_g3

0x2367,	// (0x0005cd45) bg_sctrl_middle_pane_g4

0x236f,	// (0x0005cd4d) bg_sctrl_middle_pane_g5

0x2377,	// (0x0005cd55) bg_sctrl_middle_pane_g6

0x237f,	// (0x0005cd5d) bg_sctrl_middle_pane_g7

0x2387,	// (0x0005cd65) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x0006a701) bg_sctrl_middle_pane_g

0x238f,	// (0x0005cd6d) bg_sctrl_middle_pane_g8_copy1

0x234f,	// (0x0005cd2d) bg_sctrl_sk_pane_g1

0x235f,	// (0x0005cd3d) bg_sctrl_sk_pane_g2

0x2357,	// (0x0005cd35) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0006a244) bg_sctrl_sk_pane_g

0x8998,	// (0x00063376) aid_size_touch_scroll_bar

0x236f,	// (0x0005cd4d) bg_sctrl_sk_pane_g4

0x2367,	// (0x0005cd45) bg_sctrl_sk_pane_g5

0x2377,	// (0x0005cd55) bg_sctrl_sk_pane_g6

0x237f,	// (0x0005cd5d) bg_sctrl_sk_pane_g7

0x238f,	// (0x0005cd6d) bg_sctrl_sk_pane_g8

0x2387,	// (0x0005cd65) bg_sctrl_sk_pane_g9

0x0105,	// (0x0005aae3) popup_fep_china_hwr2_fs_candidate_window

0xab76,	// (0x00065554) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xab76,	// (0x00065554) popup_fep_china_hwr2_fs_control_window

0x0e81,	// (0x0005b85f) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x0006a6f7) sctrl_sk_top_pane_g

0xd10d,	// (0x00067aeb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd10d,	// (0x00067aeb) aid_fep_china_hwr2_fs_cell

0xd123,	// (0x00067b01) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd123,	// (0x00067b01) bg_popup_fep_shadow_pane_cp4

0xd13a,	// (0x00067b18) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd13a,	// (0x00067b18) bg_popup_fep_shadow_pane_cp5

0xd14c,	// (0x00067b2a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd14c,	// (0x00067b2a) popup_fep_china_hwr2_fs_control_bar_grid

0xd160,	// (0x00067b3e) popup_fep_china_hwr2_fs_control_funtion_grid

0x6303,	// (0x00060ce1) aid_fep_china_hwr2_fs_candi_cell

0x7b98,	// (0x00062576) bg_popup_fep_shadow_pane_cp6

0x630d,	// (0x00060ceb) popup_fep_china_hwr2_fs_candidate_grid

0xd168,	// (0x00067b46) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd168,	// (0x00067b46) cell_fep_china_hwr2_fs_funtion_grid

0x4b28,	// (0x0005f506) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x632f,	// (0x00060d0d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x632f,	// (0x00060d0d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x633d,	// (0x00060d1b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x633d,	// (0x00060d1b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x0006a712) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x0006a712) cell_fep_china_hwr2_fs_funtion_grid_g

0xd180,	// (0x00067b5e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd180,	// (0x00067b5e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd195,	// (0x00067b73) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd195,	// (0x00067b73) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x0006a717) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x0006a717) cell_fep_china_hwr2_fs_funtion_grid_t

0x6384,	// (0x00060d62) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x638c,	// (0x00060d6a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6394,	// (0x00060d72) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x0006a71c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x639c,	// (0x00060d7a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x639c,	// (0x00060d7a) cell_fep_china_hwr2_fs_candidate_grid

0x63bb,	// (0x00060d99) popup_fep_china_hwr2_fs_candidate_grid_g20

0x63c3,	// (0x00060da1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4b28,	// (0x0005f506) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4b28,	// (0x0005f506) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x0006a530) cell_fep_china_hwr2_fs_candidate_grid_g

0x63cb,	// (0x00060da9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1f2b,	// (0x0005c909) clock_nsta_pane_cp_24_ParamLimits

0x1f2b,	// (0x0005c909) clock_nsta_pane_cp_24

0x1fab,	// (0x0005c989) indicator_nsta_pane_cp_24_ParamLimits

0x1fab,	// (0x0005c989) indicator_nsta_pane_cp_24

0x3048,	// (0x0005da26) heading_pane_g1

0x0001,

0xf8cb,	// (0x0006a2a9) heading_pane_g

0x3c9d,	// (0x0005e67b) grid_sct_catagory_button_pane

0x3ccf,	// (0x0005e6ad) scroll_pane_cp5_ParamLimits

0x4788,	// (0x0005f166) button_value_adjust_pane_cp5_ParamLimits

0x4788,	// (0x0005f166) button_value_adjust_pane_cp5

0x486d,	// (0x0005f24b) form2_midp_time_pane_ParamLimits

0x63d9,	// (0x00060db7) cell_sct_catagory_button_pane_ParamLimits

0x63d9,	// (0x00060db7) cell_sct_catagory_button_pane

0x4aed,	// (0x0005f4cb) bg_button_pane_cp01_ParamLimits

0x4aed,	// (0x0005f4cb) bg_button_pane_cp01

0x4b28,	// (0x0005f506) cell_sct_catagory_button_pane_g1

0xb13d,	// (0x00065b1b) popup_tb_extension_window

0xd1b1,	// (0x00067b8f) aid_size_cell_ext_ParamLimits

0xd1b1,	// (0x00067b8f) aid_size_cell_ext

0x87da,	// (0x000631b8) bg_tb_trans_pane_cp1_ParamLimits

0x87da,	// (0x000631b8) bg_tb_trans_pane_cp1

0xd1d7,	// (0x00067bb5) grid_tb_ext_pane_ParamLimits

0xd1d7,	// (0x00067bb5) grid_tb_ext_pane

0xd214,	// (0x00067bf2) cell_tb_ext_pane_ParamLimits

0xd214,	// (0x00067bf2) cell_tb_ext_pane

0xd23c,	// (0x00067c1a) cell_tb_ext_pane_g1_ParamLimits

0xd23c,	// (0x00067c1a) cell_tb_ext_pane_g1

0x646d,	// (0x00060e4b) cell_tb_ext_pane_t1

0x8554,	// (0x00062f32) list_highlight_pane_cp11_ParamLimits

0x8554,	// (0x00062f32) list_highlight_pane_cp11

0x99c7,	// (0x000643a5) popup_uni_indicator_window_ParamLimits

0x99c7,	// (0x000643a5) popup_uni_indicator_window

0x8a5f,	// (0x0006343d) bg_popup_sub_pane_cp14

0x6488,	// (0x00060e66) list_uniindi_pane

0x6494,	// (0x00060e72) uniindi_top_pane

0x8554,	// (0x00062f32) bg_uniindi_top_pane

0x64b5,	// (0x00060e93) uniindi_top_pane_g1

0x64cb,	// (0x00060ea9) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x0006a723) uniindi_top_pane_g

0x64f5,	// (0x00060ed3) uniindi_top_pane_t1

0x6521,	// (0x00060eff) list_single_uniindi_pane_ParamLimits

0x6521,	// (0x00060eff) list_single_uniindi_pane

0x4b28,	// (0x0005f506) bg_uniindi_top_pane_g1

0x6533,	// (0x00060f11) list_single_uniindi_pane_g1

0x6546,	// (0x00060f24) list_single_uniindi_pane_t1

0xef0f,	// (0x000698ed) control_bg_pane

0x656b,	// (0x00060f49) bg_sctrl_sk_pane_cp1

0x6574,	// (0x00060f52) bg_sctrl_sk_pane_cp2

0x657d,	// (0x00060f5b) control_bg_pane_g1

0x6586,	// (0x00060f64) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x0006a72c) control_bg_pane_g

0x45d1,	// (0x0005efaf) cell_indicator_nsta_pane_g1_ParamLimits

0xc7b2,	// (0x00067190) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x0006a494) cell_indicator_nsta_pane_g_ParamLimits

0xe87e,	// (0x0006925c) form2_midp_time_pane_t1_ParamLimits

0x0c06,	// (0x0005b5e4) main_idle_act4_pane_ParamLimits

0x0c06,	// (0x0005b5e4) main_idle_act4_pane

0xb13d,	// (0x00065b1b) popup_tb_extension_window_ParamLimits

0xd1fc,	// (0x00067bda) tb_ext_find_pane_ParamLimits

0xd1fc,	// (0x00067bda) tb_ext_find_pane

0x658f,	// (0x00060f6d) ai_gene_pane_1_cp1

0xe3f0,	// (0x00068dce) ai_gene_pane_2_cp1

0x6597,	// (0x00060f75) list_single_idle_plugin_calendar_pane

0x65a0,	// (0x00060f7e) list_single_idle_plugin_notification_pane

0x65a9,	// (0x00060f87) list_single_idle_plugin_player_pane

0xd259,	// (0x00067c37) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd259,	// (0x00067c37) list_single_idle_plugin_shortcut_pane

0xd281,	// (0x00067c5f) main_idle_act4_pane_t1

0xd299,	// (0x00067c77) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x0006a731) main_idle_act4_pane_t

0xd2b1,	// (0x00067c8f) middle_sk_idle_act4_pane_ParamLimits

0xd2b1,	// (0x00067c8f) middle_sk_idle_act4_pane

0xd2cd,	// (0x00067cab) popup_clock_digital_analogue_window_cp2

0xd2f4,	// (0x00067cd2) shortcut_wheel_idle_act4_pane_ParamLimits

0xd2f4,	// (0x00067cd2) shortcut_wheel_idle_act4_pane

0x4b28,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g1

0x4b28,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g2

0x4b28,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g3

0x4b28,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g4

0x4b28,	// (0x0005f506) shortcut_wheel_idle_act4_pane_g5

0x663c,	// (0x0006101a) shortcut_wheel_idle_act4_pane_g6

0x6644,	// (0x00061022) shortcut_wheel_idle_act4_pane_g7

0x664c,	// (0x0006102a) shortcut_wheel_idle_act4_pane_g8

0x6654,	// (0x00061032) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x0006a736) shortcut_wheel_idle_act4_pane_g

0xd371,	// (0x00067d4f) middle_sk_idle_act4_pane_g1_ParamLimits

0xd371,	// (0x00067d4f) middle_sk_idle_act4_pane_g1

0xd37f,	// (0x00067d5d) middle_sk_idle_act4_pane_g2_ParamLimits

0xd37f,	// (0x00067d5d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x0006a759) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x0006a759) middle_sk_idle_act4_pane_g

0xd397,	// (0x00067d75) middle_sk_idle_act4_pane_t1_ParamLimits

0xd397,	// (0x00067d75) middle_sk_idle_act4_pane_t1

0xd3c6,	// (0x00067da4) grid_ai_shortcut_pane_ParamLimits

0xd3c6,	// (0x00067da4) grid_ai_shortcut_pane

0xd3e3,	// (0x00067dc1) list_highlight_pane_cp16_ParamLimits

0xd3e3,	// (0x00067dc1) list_highlight_pane_cp16

0xd3f0,	// (0x00067dce) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd3f0,	// (0x00067dce) list_single_idle_plugin_shortcut_pane_g1

0xd3fc,	// (0x00067dda) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd3fc,	// (0x00067dda) list_single_idle_plugin_shortcut_pane_g2

0xd41a,	// (0x00067df8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd41a,	// (0x00067df8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x0006a75e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x0006a75e) list_single_idle_plugin_shortcut_pane_g

0xd42f,	// (0x00067e0d) cell_ai_shortcut_pane_ParamLimits

0xd42f,	// (0x00067e0d) cell_ai_shortcut_pane

0xd445,	// (0x00067e23) cell_ai_shortcut_pane_g1_ParamLimits

0xd445,	// (0x00067e23) cell_ai_shortcut_pane_g1

0x658f,	// (0x00060f6d) ai_gene_pane_1_cp2

0x6785,	// (0x00061163) ai_gene_pane_2_cp2

0x678d,	// (0x0006116b) list_highlight_pane_cp15

0x6796,	// (0x00061174) list_single_idle_plugin_calendar_pane_g1

0x678d,	// (0x0006116b) list_highlight_pane_cp17

0x679e,	// (0x0006117c) list_single_idle_plugin_calendar_pane_g1_copy1

0x67a6,	// (0x00061184) list_single_idle_plugin_player_pane_g1

0x3f04,	// (0x0005e8e2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x0006a765) list_single_idle_plugin_player_pane_g

0x67ae,	// (0x0006118c) list_single_idle_plugin_player_pane_t1

0x67bc,	// (0x0006119a) list_single_idle_plugin_player_pane_t2

0x67ca,	// (0x000611a8) list_single_idle_plugin_player_pane_t3

0x67d8,	// (0x000611b6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x0006a76a) list_single_idle_plugin_player_pane_t

0x67e6,	// (0x000611c4) wait_bar_pane_cp15

0x67ee,	// (0x000611cc) grid_ai_notification_pane

0x3f04,	// (0x0005e8e2) list_single_idle_plugin_notification_pane_g1

0xd467,	// (0x00067e45) cell_ai_notification_pane_ParamLimits

0xd467,	// (0x00067e45) cell_ai_notification_pane

0x6804,	// (0x000611e2) cell_ai_notification_pane_g1

0x680c,	// (0x000611ea) cell_ai_notification_pane_t1

0xd474,	// (0x00067e52) tb_ext_find_button_pane

0xd47c,	// (0x00067e5a) tb_ext_find_pane_g1

0xd484,	// (0x00067e62) tb_ext_find_pane_t1

0xbf13,	// (0x000668f1) tb_ext_find_button_pane_g1

0x6838,	// (0x00061216) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x0006a773) tb_ext_find_button_pane_g

0xd281,	// (0x00067c5f) main_idle_act4_pane_t1_ParamLimits

0xd299,	// (0x00067c77) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x0006a731) main_idle_act4_pane_t_ParamLimits

0xd2cd,	// (0x00067cab) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2e4,	// (0x00067cc2) sat_plugin_idle_act4_pane_ParamLimits

0xd2e4,	// (0x00067cc2) sat_plugin_idle_act4_pane

0xd492,	// (0x00067e70) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd492,	// (0x00067e70) sat_plugin_idle_act4_pane_t1

0xd4aa,	// (0x00067e88) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4aa,	// (0x00067e88) sat_plugin_idle_act4_pane_t2

0xd4c2,	// (0x00067ea0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4c2,	// (0x00067ea0) sat_plugin_idle_act4_pane_t3

0xd4da,	// (0x00067eb8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4da,	// (0x00067eb8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x0006a778) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x0006a778) sat_plugin_idle_act4_pane_t

0xefd4,	// (0x000699b2) popup_battery_window_ParamLimits

0xefd4,	// (0x000699b2) popup_battery_window

0x8554,	// (0x00062f32) bg_popup_sub_pane_cp25_ParamLimits

0x8554,	// (0x00062f32) bg_popup_sub_pane_cp25

0x688d,	// (0x0006126b) popup_battery_window_g1_ParamLimits

0x688d,	// (0x0006126b) popup_battery_window_g1

0x6899,	// (0x00061277) popup_battery_window_t1_ParamLimits

0x6899,	// (0x00061277) popup_battery_window_t1

0x68ab,	// (0x00061289) popup_battery_window_t2_ParamLimits

0x68ab,	// (0x00061289) popup_battery_window_t2

0x0001,

0xfda3,	// (0x0006a781) popup_battery_window_t_ParamLimits

0xfda3,	// (0x0006a781) popup_battery_window_t

0xa7e3,	// (0x000651c1) midp_canvas_pane_ParamLimits

0xa83f,	// (0x0006521d) midp_keypad_pane_ParamLimits

0xa83f,	// (0x0006521d) midp_keypad_pane

0x1e13,	// (0x0005c7f1) main_midp_pane_ParamLimits

0x463b,	// (0x0005f019) signal_pane_g2_cp_ParamLimits

0xd4f2,	// (0x00067ed0) aid_size_cell_midp_keypad_ParamLimits

0xd4f2,	// (0x00067ed0) aid_size_cell_midp_keypad

0xd510,	// (0x00067eee) midp_keyp_game_grid_pane_ParamLimits

0xd510,	// (0x00067eee) midp_keyp_game_grid_pane

0xd537,	// (0x00067f15) midp_keyp_rocker_pane_ParamLimits

0xd537,	// (0x00067f15) midp_keyp_rocker_pane

0xd586,	// (0x00067f64) midp_keyp_sk_left_pane_ParamLimits

0xd586,	// (0x00067f64) midp_keyp_sk_left_pane

0xd5dc,	// (0x00067fba) midp_keyp_sk_right_pane_ParamLimits

0xd5dc,	// (0x00067fba) midp_keyp_sk_right_pane

0x7b98,	// (0x00062576) bg_button_pane_cp03

0xd632,	// (0x00068010) midp_keyp_sk_left_pane_g1

0x7b98,	// (0x00062576) bg_button_pane_cp04

0xd632,	// (0x00068010) midp_keyp_sk_right_pane_g1

0x4b28,	// (0x0005f506) midp_keyp_rocker_pane_g1

0xd63a,	// (0x00068018) keyp_game_cell_pane_ParamLimits

0xd63a,	// (0x00068018) keyp_game_cell_pane

0x7b98,	// (0x00062576) bg_button_pane_cp02

0xd660,	// (0x0006803e) keyp_game_cell_pane_g1

0x995e,	// (0x0006433c) popup_fep_vkb2_window_ParamLimits

0x995e,	// (0x0006433c) popup_fep_vkb2_window

0xb902,	// (0x000662e0) aid_size_cell_vkb2_ParamLimits

0xb902,	// (0x000662e0) aid_size_cell_vkb2

0xb938,	// (0x00066316) popup_fep_vkb2_window_g1_ParamLimits

0xb938,	// (0x00066316) popup_fep_vkb2_window_g1

0xb988,	// (0x00066366) vkb2_area_bottom_pane_ParamLimits

0xb988,	// (0x00066366) vkb2_area_bottom_pane

0xb9e4,	// (0x000663c2) vkb2_area_keypad_pane_ParamLimits

0xb9e4,	// (0x000663c2) vkb2_area_keypad_pane

0xba32,	// (0x00066410) vkb2_area_top_pane_ParamLimits

0xba32,	// (0x00066410) vkb2_area_top_pane

0xbab8,	// (0x00066496) vkb2_top_entry_pane_ParamLimits

0xbab8,	// (0x00066496) vkb2_top_entry_pane

0xbae5,	// (0x000664c3) vkb2_top_grid_left_pane_ParamLimits

0xbae5,	// (0x000664c3) vkb2_top_grid_left_pane

0xbb05,	// (0x000664e3) vkb2_top_grid_right_pane_ParamLimits

0xbb05,	// (0x000664e3) vkb2_top_grid_right_pane

0x1443,	// (0x0005be21) vkb2_cell_keypad_pane_ParamLimits

0x1443,	// (0x0005be21) vkb2_cell_keypad_pane

0xbb4b,	// (0x00066529) vkb2_area_bottom_grid_pane_ParamLimits

0xbb4b,	// (0x00066529) vkb2_area_bottom_grid_pane

0xbb75,	// (0x00066553) vkb2_area_bottom_pane_g1_ParamLimits

0xbb75,	// (0x00066553) vkb2_area_bottom_pane_g1

0xbb9b,	// (0x00066579) vkb2_area_bottom_pane_g2_ParamLimits

0xbb9b,	// (0x00066579) vkb2_area_bottom_pane_g2

0xbbcc,	// (0x000665aa) vkb2_area_bottom_pane_g3_ParamLimits

0xbbcc,	// (0x000665aa) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x0006a786) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x0006a786) vkb2_area_bottom_pane_g

0x15ed,	// (0x0005bfcb) vkb2_top_cell_left_pane_ParamLimits

0x15ed,	// (0x0005bfcb) vkb2_top_cell_left_pane

0xd669,	// (0x00068047) vkb2_top_entry_pane_g1_ParamLimits

0xd669,	// (0x00068047) vkb2_top_entry_pane_g1

0xd677,	// (0x00068055) vkb2_top_entry_pane_t1_ParamLimits

0xd677,	// (0x00068055) vkb2_top_entry_pane_t1

0x6a55,	// (0x00061433) vkb2_top_entry_pane_t2_ParamLimits

0x6a55,	// (0x00061433) vkb2_top_entry_pane_t2

0x6a87,	// (0x00061465) vkb2_top_entry_pane_t3_ParamLimits

0x6a87,	// (0x00061465) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x0006a78d) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x0006a78d) vkb2_top_entry_pane_t

0xbc36,	// (0x00066614) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc36,	// (0x00066614) vkb2_top_grid_right_pane_g1

0x1650,	// (0x0005c02e) vkb2_top_grid_right_pane_g2_ParamLimits

0x1650,	// (0x0005c02e) vkb2_top_grid_right_pane_g2

0x1668,	// (0x0005c046) vkb2_top_grid_right_pane_g3_ParamLimits

0x1668,	// (0x0005c046) vkb2_top_grid_right_pane_g3

0xbc4c,	// (0x0006662a) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc4c,	// (0x0006662a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x0006a794) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x0006a794) vkb2_top_grid_right_pane_g

0x1696,	// (0x0005c074) vkb2_top_cell_left_pane_g1

0x16ad,	// (0x0005c08b) vkb2_cell_keypad_pane_g1_ParamLimits

0x16ad,	// (0x0005c08b) vkb2_cell_keypad_pane_g1

0x6aab,	// (0x00061489) vkb2_cell_keypad_pane_t1_ParamLimits

0x6aab,	// (0x00061489) vkb2_cell_keypad_pane_t1

0x16bb,	// (0x0005c099) vkb2_cell_bottom_grid_pane_ParamLimits

0x16bb,	// (0x0005c099) vkb2_cell_bottom_grid_pane

0x16f4,	// (0x0005c0d2) vkb2_cell_bottom_grid_pane_g1

0xd315,	// (0x00067cf3) aid_call2_pane_cp02

0xd31d,	// (0x00067cfb) aid_call_pane_cp02

0xd325,	// (0x00067d03) clock_digital_number_pane_cp10

0xd32d,	// (0x00067d0b) clock_digital_number_pane_cp11

0xd335,	// (0x00067d13) clock_digital_number_pane_cp12

0xd33d,	// (0x00067d1b) clock_digital_number_pane_cp13

0xd345,	// (0x00067d23) clock_digital_separator_pane_cp10

0xbf13,	// (0x000668f1) popup_clock_digital_analogue_window_cp2_g1

0xbf13,	// (0x000668f1) popup_clock_digital_analogue_window_cp2_g2

0xd34d,	// (0x00067d2b) popup_clock_digital_analogue_window_cp2_g3

0xbf13,	// (0x000668f1) popup_clock_digital_analogue_window_cp2_g4

0xd34d,	// (0x00067d2b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x0006a749) popup_clock_digital_analogue_window_cp2_g

0xd355,	// (0x00067d33) popup_clock_digital_analogue_window_cp2_t1

0xd363,	// (0x00067d41) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x0006a754) popup_clock_digital_analogue_window_cp2_t

0x4b28,	// (0x0005f506) clock_digital_number_pane_cp10_g1

0x4b28,	// (0x0005f506) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006a530) clock_digital_number_pane_cp10_g

0x4b28,	// (0x0005f506) clock_digital_separator_pane_cp10_g1

0x4b28,	// (0x0005f506) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006a530) clock_digital_separator_pane_cp10_g

0x64d7,	// (0x00060eb5) uniindi_top_pane_g3

0x64e8,	// (0x00060ec6) uniindi_top_pane_g4

0x14ce,	// (0x0005beac) vkb2_row_keypad_pane_ParamLimits

0x14ce,	// (0x0005beac) vkb2_row_keypad_pane

0x1710,	// (0x0005c0ee) vkb2_cell_t_keypad_pane_ParamLimits

0x1710,	// (0x0005c0ee) vkb2_cell_t_keypad_pane

0x1720,	// (0x0005c0fe) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1720,	// (0x0005c0fe) vkb2_cell_t_keypad_pane_cp08

0x1735,	// (0x0005c113) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1735,	// (0x0005c113) vkb2_cell_t_keypad_pane_cp09

0x1749,	// (0x0005c127) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1749,	// (0x0005c127) vkb2_cell_t_keypad_pane_cp01

0x175a,	// (0x0005c138) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x175a,	// (0x0005c138) vkb2_cell_t_keypad_pane_cp02

0x176b,	// (0x0005c149) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x176b,	// (0x0005c149) vkb2_cell_t_keypad_pane_cp03

0x177c,	// (0x0005c15a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x177c,	// (0x0005c15a) vkb2_cell_t_keypad_pane_cp04

0x178d,	// (0x0005c16b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x178d,	// (0x0005c16b) vkb2_cell_t_keypad_pane_cp05

0x179e,	// (0x0005c17c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x179e,	// (0x0005c17c) vkb2_cell_t_keypad_pane_cp06

0x17b1,	// (0x0005c18f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x17b1,	// (0x0005c18f) vkb2_cell_t_keypad_pane_cp07

0x17c6,	// (0x0005c1a4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x17c6,	// (0x0005c1a4) vkb2_cell_t_keypad_pane_cp10

0x0e81,	// (0x0005b85f) vkb2_cell_t_keypad_pane_g1

0x6ac2,	// (0x000614a0) vkb2_cell_t_keypad_pane_t1

0xef0f,	// (0x000698ed) popup_grid_graphic2_window

0xd6b0,	// (0x0006808e) aid_size_cell_graphic2_ParamLimits

0xd6b0,	// (0x0006808e) aid_size_cell_graphic2

0xd6ee,	// (0x000680cc) bg_popup_window_pane_cp21_ParamLimits

0xd6ee,	// (0x000680cc) bg_popup_window_pane_cp21

0xd6fc,	// (0x000680da) graphic2_pages_pane_ParamLimits

0xd6fc,	// (0x000680da) graphic2_pages_pane

0xd754,	// (0x00068132) grid_graphic2_control_pane_ParamLimits

0xd754,	// (0x00068132) grid_graphic2_control_pane

0xd79c,	// (0x0006817a) grid_graphic2_pane_ParamLimits

0xd79c,	// (0x0006817a) grid_graphic2_pane

0xd827,	// (0x00068205) cell_graphic2_pane

0xef0f,	// (0x000698ed) main_comp_mode_pane

0x5d3e,	// (0x0006071c) list_ai3_gene_pane_ParamLimits

0xd055,	// (0x00067a33) bg_popup_window_pane_cp19_ParamLimits

0x6116,	// (0x00060af4) bg_touch_area_indi_pane_ParamLimits

0x6116,	// (0x00060af4) bg_touch_area_indi_pane

0x612c,	// (0x00060b0a) bg_touch_area_indi_pane_cp01_ParamLimits

0x612c,	// (0x00060b0a) bg_touch_area_indi_pane_cp01

0x6142,	// (0x00060b20) bg_touch_area_indi_pane_cp02_ParamLimits

0x6142,	// (0x00060b20) bg_touch_area_indi_pane_cp02

0x615c,	// (0x00060b3a) bg_touch_area_indi_pane_cp03_ParamLimits

0x615c,	// (0x00060b3a) bg_touch_area_indi_pane_cp03

0x6176,	// (0x00060b54) popup_slider_window_g1_ParamLimits

0x6192,	// (0x00060b70) popup_slider_window_g2_ParamLimits

0x61ae,	// (0x00060b8c) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x0006a6de) popup_slider_window_g_ParamLimits

0x6214,	// (0x00060bf2) popup_slider_window_t1_ParamLimits

0x6288,	// (0x00060c66) small_volume_slider_vertical_pane_ParamLimits

0xd827,	// (0x00068205) cell_graphic2_pane_ParamLimits

0xd88a,	// (0x00068268) bg_button_pane_cp10_ParamLimits

0xd88a,	// (0x00068268) bg_button_pane_cp10

0xd89d,	// (0x0006827b) bg_button_pane_cp11_ParamLimits

0xd89d,	// (0x0006827b) bg_button_pane_cp11

0xd8b0,	// (0x0006828e) graphic2_pages_pane_g1_ParamLimits

0xd8b0,	// (0x0006828e) graphic2_pages_pane_g1

0xd8cb,	// (0x000682a9) graphic2_pages_pane_g2_ParamLimits

0xd8cb,	// (0x000682a9) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x0006a7a2) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x0006a7a2) graphic2_pages_pane_g

0xd8e3,	// (0x000682c1) graphic2_pages_pane_t1_ParamLimits

0xd8e3,	// (0x000682c1) graphic2_pages_pane_t1

0xd8fb,	// (0x000682d9) cell_graphic2_control_pane_ParamLimits

0xd8fb,	// (0x000682d9) cell_graphic2_control_pane

0xd92f,	// (0x0006830d) cell_graphic2_pane_g1_ParamLimits

0xd92f,	// (0x0006830d) cell_graphic2_pane_g1

0xd93c,	// (0x0006831a) cell_graphic2_pane_g2_ParamLimits

0xd93c,	// (0x0006831a) cell_graphic2_pane_g2

0xc97a,	// (0x00067358) cell_graphic2_pane_g3_ParamLimits

0xc97a,	// (0x00067358) cell_graphic2_pane_g3

0xd949,	// (0x00068327) cell_graphic2_pane_g4_ParamLimits

0xd949,	// (0x00068327) cell_graphic2_pane_g4

0xd956,	// (0x00068334) cell_graphic2_pane_g5_ParamLimits

0xd956,	// (0x00068334) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x0006a7a7) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x0006a7a7) cell_graphic2_pane_g

0xd976,	// (0x00068354) cell_graphic2_pane_t1_ParamLimits

0xd976,	// (0x00068354) cell_graphic2_pane_t1

0x303c,	// (0x0005da1a) grid_highlight_pane_cp11_ParamLimits

0x303c,	// (0x0005da1a) grid_highlight_pane_cp11

0x8554,	// (0x00062f32) bg_button_pane_cp05

0xd9bf,	// (0x0006839d) cell_graphic2_control_pane_g1

0x4b28,	// (0x0005f506) bg_touch_area_indi_pane_g1

0x6daa,	// (0x00061788) aid_cmod_rocker_key_size

0x6db4,	// (0x00061792) aid_cmode_itu_key_size

0x6dbe,	// (0x0006179c) main_cmode_video_pane

0x6dc8,	// (0x000617a6) main_comp_mode_itu_pane

0x6dd4,	// (0x000617b2) main_comp_mode_rocker_pane

0x6de0,	// (0x000617be) cell_cmode_rocker_pane_ParamLimits

0x6de0,	// (0x000617be) cell_cmode_rocker_pane

0x6df4,	// (0x000617d2) cell_cmode_itu_pane_ParamLimits

0x6df4,	// (0x000617d2) cell_cmode_itu_pane

0x8a5f,	// (0x0006343d) bg_button_pane_cp06_ParamLimits

0x8a5f,	// (0x0006343d) bg_button_pane_cp06

0x4d8b,	// (0x0005f769) cell_cmode_rocker_pane_g1_ParamLimits

0x4d8b,	// (0x0005f769) cell_cmode_rocker_pane_g1

0x632f,	// (0x00060d0d) cell_cmode_rocker_pane_g2_ParamLimits

0x632f,	// (0x00060d0d) cell_cmode_rocker_pane_g2

0x0001,

0xfdd9,	// (0x0006a7b7) cell_cmode_rocker_pane_g_ParamLimits

0xfdd9,	// (0x0006a7b7) cell_cmode_rocker_pane_g

0x7b98,	// (0x00062576) bg_button_pane_cp07

0x6e0b,	// (0x000617e9) cell_cmode_itu_pane_g1

0x6e14,	// (0x000617f2) cell_cmode_itu_pane_t1

0x6e22,	// (0x00061800) cell_cmode_itu_pane_t2

0x0001,

0xfdde,	// (0x0006a7bc) cell_cmode_itu_pane_t

0x655b,	// (0x00060f39) aid_touch_ctrl_left

0x6563,	// (0x00060f41) aid_touch_ctrl_right

0x7b98,	// (0x00062576) compa_mode_pane

0xd9e7,	// (0x000683c5) aid_cmod_rocker_key_size_cp

0xd9f1,	// (0x000683cf) aid_cmode_itu_key_size_cp

0x6e44,	// (0x00061822) compa_mode_pane_g1

0x6e4c,	// (0x0006182a) compa_mode_pane_g2

0x6e54,	// (0x00061832) compa_mode_pane_g3

0x0002,

0xfde3,	// (0x0006a7c1) compa_mode_pane_g

0xd9fb,	// (0x000683d9) main_comp_mode_itu_pane_cp

0xda03,	// (0x000683e1) main_comp_mode_rocker_pane_cp

0xda0b,	// (0x000683e9) cell_cmode_itu_pane_cp_ParamLimits

0xda0b,	// (0x000683e9) cell_cmode_itu_pane_cp

0xda20,	// (0x000683fe) cell_cmode_rocker_pane_cp_ParamLimits

0xda20,	// (0x000683fe) cell_cmode_rocker_pane_cp

0x8a5f,	// (0x0006343d) bg_button_pane_cp06_cp_ParamLimits

0x8a5f,	// (0x0006343d) bg_button_pane_cp06_cp

0x4d8b,	// (0x0005f769) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4d8b,	// (0x0005f769) cell_cmode_rocker_pane_g1_cp

0x4b28,	// (0x0005f506) cell_cmode_rocker_pane_g2_cp

0x7b98,	// (0x00062576) bg_button_pane_cp07_cp

0xda32,	// (0x00068410) cell_cmode_itu_pane_g1_cp

0xda3b,	// (0x00068419) cell_cmode_itu_pane_t1_cp

0xda3b,	// (0x00068419) cell_cmode_itu_pane_t2_cp

0xc5a3,	// (0x00066f81) settings_code_pane_cp2

0x7bfa,	// (0x000625d8) bg_popup_window_pane_cp3_ParamLimits

0x8768,	// (0x00063146) heading_pane_cp3_ParamLimits

0x8774,	// (0x00063152) listscroll_popup_graphic_pane_ParamLimits

0x0c14,	// (0x0005b5f2) fep_hwr_aid_pane_ParamLimits

0x1186,	// (0x0005bb64) aid_touch_sctrl_top_ParamLimits

0x11a1,	// (0x0005bb7f) sctrl_sk_top_pane_g1_ParamLimits

0x0e81,	// (0x0005b85f) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x0006a6f7) sctrl_sk_top_pane_g_ParamLimits

0x11ae,	// (0x0005bb8c) sctrl_sk_top_pane_t1_ParamLimits

0x1186,	// (0x0005bb64) aid_touch_sctrl_bottom_ParamLimits

0x11ae,	// (0x0005bb8c) sctrl_sk_bottom_pane_t1_ParamLimits

0x64a1,	// (0x00060e7f) aid_area_touch_clock

0xba7a,	// (0x00066458) aid_vkb2_area_top_pane_cell_ParamLimits

0xba7a,	// (0x00066458) aid_vkb2_area_top_pane_cell

0xbb25,	// (0x00066503) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb25,	// (0x00066503) aid_vkb2_area_bottom_pane_cell

0x6a0d,	// (0x000613eb) popup_char_count_window

0x6eaa,	// (0x00061888) popup_char_count_window_g1

0x6eb3,	// (0x00061891) popup_char_count_window_g2

0x6ebc,	// (0x0006189a) popup_char_count_window_g3

0x0002,

0xfdea,	// (0x0006a7c8) popup_char_count_window_g

0x6ec5,	// (0x000618a3) popup_char_count_window_t1

0x125f,	// (0x0005bc3d) popup_fep_char_preview_window_ParamLimits

0x125f,	// (0x0005bc3d) popup_fep_char_preview_window

0xba9a,	// (0x00066478) vkb2_top_candi_pane_ParamLimits

0xba9a,	// (0x00066478) vkb2_top_candi_pane

0xda49,	// (0x00068427) cell_vkb2_top_candi_pane_ParamLimits

0xda49,	// (0x00068427) cell_vkb2_top_candi_pane

0x17db,	// (0x0005c1b9) bg_popup_fep_char_preview_window_ParamLimits

0x17db,	// (0x0005c1b9) bg_popup_fep_char_preview_window

0x17e9,	// (0x0005c1c7) popup_fep_char_preview_window_t1_ParamLimits

0x17e9,	// (0x0005c1c7) popup_fep_char_preview_window_t1

0x6f24,	// (0x00061902) bg_popup_fep_char_preview_window_g1

0x6f2c,	// (0x0006190a) bg_popup_fep_char_preview_window_g2

0x6f34,	// (0x00061912) bg_popup_fep_char_preview_window_g3

0x6f3c,	// (0x0006191a) bg_popup_fep_char_preview_window_g4

0x6f44,	// (0x00061922) bg_popup_fep_char_preview_window_g5

0x1823,	// (0x0005c201) bg_popup_fep_char_preview_window_g6

0x6f4c,	// (0x0006192a) bg_popup_fep_char_preview_window_g7

0x6f54,	// (0x00061932) bg_popup_fep_char_preview_window_g8

0x6f5c,	// (0x0006193a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf1,	// (0x0006a7cf) bg_popup_fep_char_preview_window_g

0x0e81,	// (0x0005b85f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0e81,	// (0x0005b85f) cell_vkb2_top_candi_pane_g1

0x0e8f,	// (0x0005b86d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0e8f,	// (0x0005b86d) cell_vkb2_top_candi_pane_g2

0x5c1e,	// (0x000605fc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5c1e,	// (0x000605fc) cell_vkb2_top_candi_pane_g3

0x182b,	// (0x0005c209) cell_vkb2_top_candi_pane_g4_ParamLimits

0x182b,	// (0x0005c209) cell_vkb2_top_candi_pane_g4

0x52aa,	// (0x0005fc88) cell_vkb2_top_candi_pane_g5_ParamLimits

0x52aa,	// (0x0005fc88) cell_vkb2_top_candi_pane_g5

0x184c,	// (0x0005c22a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x184c,	// (0x0005c22a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe04,	// (0x0006a7e2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe04,	// (0x0006a7e2) cell_vkb2_top_candi_pane_g

0x185a,	// (0x0005c238) cell_vkb2_top_candi_pane_t1

0x09e6,	// (0x0005b3c4) aid_size_touch_slider_mark_ParamLimits

0x09e6,	// (0x0005b3c4) aid_size_touch_slider_mark

0xd738,	// (0x00068116) grid_graphic2_catg_pane_ParamLimits

0xd738,	// (0x00068116) grid_graphic2_catg_pane

0xd7f6,	// (0x000681d4) popup_grid_graphic2_window_t1_ParamLimits

0xd7f6,	// (0x000681d4) popup_grid_graphic2_window_t1

0xd80c,	// (0x000681ea) popup_grid_graphic2_window_t2_ParamLimits

0xd80c,	// (0x000681ea) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x0006a79d) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x0006a79d) popup_grid_graphic2_window_t

0x8554,	// (0x00062f32) bg_button_pane_cp05_ParamLimits

0xd9bf,	// (0x0006839d) cell_graphic2_control_pane_g1_ParamLimits

0xdab3,	// (0x00068491) cell_graphic2_catg_pane_ParamLimits

0xdab3,	// (0x00068491) cell_graphic2_catg_pane

0x7b98,	// (0x00062576) bg_button_pane_cp12

0xdac5,	// (0x000684a3) cell_graphic2_catg_pane_g1

0x646d,	// (0x00060e4b) cell_tb_ext_pane_t1_ParamLimits

0x160d,	// (0x0005bfeb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x160d,	// (0x0005bfeb) vkb2_top_cell_right_narrow_pane

0x1625,	// (0x0005c003) vkb2_top_cell_right_wide_pane_ParamLimits

0x1625,	// (0x0005c003) vkb2_top_cell_right_wide_pane

0x0c06,	// (0x0005b5e4) bg_vkb2_func_pane_ParamLimits

0x0c06,	// (0x0005b5e4) bg_vkb2_func_pane

0x1696,	// (0x0005c074) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c06,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c06,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp03

0x16f4,	// (0x0005c0d2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2357,	// (0x0005cd35) bg_vkb2_func_pane_g1

0x235f,	// (0x0005cd3d) bg_vkb2_func_pane_g2

0x236f,	// (0x0005cd4d) bg_vkb2_func_pane_g3

0x2367,	// (0x0005cd45) bg_vkb2_func_pane_g4

0x2377,	// (0x0005cd55) bg_vkb2_func_pane_g5

0x237f,	// (0x0005cd5d) bg_vkb2_func_pane_g6

0x2387,	// (0x0005cd65) bg_vkb2_func_pane_g7

0x238f,	// (0x0005cd6d) bg_vkb2_func_pane_g8

0x234f,	// (0x0005cd2d) bg_vkb2_func_pane_g9

0x0008,

0xfe11,	// (0x0006a7ef) bg_vkb2_func_pane_g

0x0c06,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c06,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp01

0x1696,	// (0x0005c074) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1696,	// (0x0005c074) vkb2_top_cell_right_wide_pane_g1

0x0c06,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c06,	// (0x0005b5e4) bg_vkb2_fuc_pane_cp02

0x16f4,	// (0x0005c0d2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x16f4,	// (0x0005c0d2) vkb2_top_cell_right_narrow_pane_g1

0xcf97,	// (0x00067975) aid_touch_area_decrease_ParamLimits

0xcf97,	// (0x00067975) aid_touch_area_decrease

0xcfd1,	// (0x000679af) aid_touch_area_increase_ParamLimits

0xcfd1,	// (0x000679af) aid_touch_area_increase

0xcff9,	// (0x000679d7) aid_touch_area_mute_ParamLimits

0xcff9,	// (0x000679d7) aid_touch_area_mute

0xd021,	// (0x000679ff) aid_touch_area_slider_ParamLimits

0xd021,	// (0x000679ff) aid_touch_area_slider

0xd061,	// (0x00067a3f) popup_slider_window_g4_ParamLimits

0xd061,	// (0x00067a3f) popup_slider_window_g4

0xd089,	// (0x00067a67) popup_slider_window_g5_ParamLimits

0xd089,	// (0x00067a67) popup_slider_window_g5

0xd0bd,	// (0x00067a9b) popup_slider_window_g6_ParamLimits

0xd0bd,	// (0x00067a9b) popup_slider_window_g6

0x6242,	// (0x00060c20) popup_slider_window_t2_ParamLimits

0x6242,	// (0x00060c20) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x0006a6eb) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x0006a6eb) popup_slider_window_t

0xd0d9,	// (0x00067ab7) slider_pane_ParamLimits

0xd0d9,	// (0x00067ab7) slider_pane

0x6f7f,	// (0x0006195d) slider_pane_g1_ParamLimits

0x6f7f,	// (0x0006195d) slider_pane_g1

0x6f93,	// (0x00061971) slider_pane_g2_ParamLimits

0x6f93,	// (0x00061971) slider_pane_g2

0x6fa9,	// (0x00061987) slider_pane_g3_ParamLimits

0x6fa9,	// (0x00061987) slider_pane_g3

0x0003,

0xfe24,	// (0x0006a802) slider_pane_g_ParamLimits

0xfe24,	// (0x0006a802) slider_pane_g

0xb189,	// (0x00065b67) popup_tb_float_extension_window_ParamLimits

0xb189,	// (0x00065b67) popup_tb_float_extension_window

0x6fd5,	// (0x000619b3) aid_size_cell_tb_float_ext

0x7b98,	// (0x00062576) bg_popup_sub_window_cp28

0x6fe1,	// (0x000619bf) grid_tb_float_ext_pane

0x6fed,	// (0x000619cb) cell_tb_float_ext_pane_ParamLimits

0x6fed,	// (0x000619cb) cell_tb_float_ext_pane

0x7009,	// (0x000619e7) cell_tb_float_ext_pane_g1

0x7012,	// (0x000619f0) grid_highlight_pane_cp12

0xb722,	// (0x00066100) cell_last_hwr_side_pane_ParamLimits

0xb722,	// (0x00066100) cell_last_hwr_side_pane

0x4b28,	// (0x0005f506) cell_last_hwr_side_pane_g1

0x701b,	// (0x000619f9) cell_last_hwr_side_pane_g2

0x0001,

0xfe2d,	// (0x0006a80b) cell_last_hwr_side_pane_g

0xbc01,	// (0x000665df) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc01,	// (0x000665df) vkb2_area_bottom_space_btn_pane

0x0e81,	// (0x0005b85f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ac2,	// (0x000614a0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x185a,	// (0x0005c238) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1878,	// (0x0005c256) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1878,	// (0x0005c256) vkb2_area_bottom_space_btn_pane_g1

0x18b2,	// (0x0005c290) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x18b2,	// (0x0005c290) vkb2_area_bottom_space_btn_pane_g2

0x18e8,	// (0x0005c2c6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x18e8,	// (0x0005c2c6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe32,	// (0x0006a810) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe32,	// (0x0006a810) vkb2_area_bottom_space_btn_pane_g

0x0ccb,	// (0x0005b6a9) cel_fep_hwr_func_pane_ParamLimits

0x0ccb,	// (0x0005b6a9) cel_fep_hwr_func_pane

0xb6f7,	// (0x000660d5) cell_hwr_side_button_pane_ParamLimits

0xb6f7,	// (0x000660d5) cell_hwr_side_button_pane

0x64a1,	// (0x00060e7f) aid_area_touch_clock_ParamLimits

0x8554,	// (0x00062f32) bg_uniindi_top_pane_ParamLimits

0x64b5,	// (0x00060e93) uniindi_top_pane_g1_ParamLimits

0x64cb,	// (0x00060ea9) uniindi_top_pane_g2_ParamLimits

0x64d7,	// (0x00060eb5) uniindi_top_pane_g3_ParamLimits

0x64e8,	// (0x00060ec6) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x0006a723) uniindi_top_pane_g_ParamLimits

0x64f5,	// (0x00060ed3) uniindi_top_pane_t1_ParamLimits

0x8554,	// (0x00062f32) bg_vkb2_func_pane_cp01_ParamLimits

0x8554,	// (0x00062f32) bg_vkb2_func_pane_cp01

0x7024,	// (0x00061a02) cel_fep_hwr_func_pane_g1_ParamLimits

0x7024,	// (0x00061a02) cel_fep_hwr_func_pane_g1

0x8554,	// (0x00062f32) bg_vkb2_func_pane_cp02_ParamLimits

0x8554,	// (0x00062f32) bg_vkb2_func_pane_cp02

0x7024,	// (0x00061a02) cell_hwr_side_button_pane_g1_ParamLimits

0x7024,	// (0x00061a02) cell_hwr_side_button_pane_g1

0x21c8,	// (0x0005cba6) status_pane_g4_ParamLimits

0x21c8,	// (0x0005cba6) status_pane_g4

0x21e2,	// (0x0005cbc0) status_pane_t1

0x48db,	// (0x0005f2b9) form2_midp_gauge_slider_cont_pane

0x48e3,	// (0x0005f2c1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc8ab,	// (0x00067289) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc8bd,	// (0x0006729b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x0006a4e3) form2_midp_gauge_slider_pane_t_ParamLimits

0x4919,	// (0x0005f2f7) form2_midp_slider_pane_ParamLimits

0x121f,	// (0x0005bbfd) aid_size_cell_func_vkb2_ParamLimits

0x121f,	// (0x0005bbfd) aid_size_cell_func_vkb2

0x6fc1,	// (0x0006199f) slider_pane_g4_ParamLimits

0x6fc1,	// (0x0006199f) slider_pane_g4

0xbc62,	// (0x00066640) form2_midp_gauge_slider_pane_t2_cp01

0xbc70,	// (0x0006664e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc70,	// (0x0006664e) form2_midp_gauge_slider_pane_t3_cp01

0x195d,	// (0x0005c33b) form2_midp_slider_pane_cp01

0x7b98,	// (0x00062576) navi_smil_pane

0x705d,	// (0x00061a3b) navi_smil_pane_g1

0x7065,	// (0x00061a43) navi_smil_pane_t1

0x7032,	// (0x00061a10) form2_midp_slider_pane_g1

0x703b,	// (0x00061a19) form2_midp_slider_pane_g2

0x7043,	// (0x00061a21) form2_midp_slider_pane_g3

0x7032,	// (0x00061a10) form2_midp_slider_pane_g4

0xdace,	// (0x000684ac) form2_midp_slider_pane_g5

0x0004,

0xfe3b,	// (0x0006a819) form2_midp_slider_pane_g

0x1922,	// (0x0005c300) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1922,	// (0x0005c300) vkb2_area_bottom_space_btn_pane_g4

0xb370,	// (0x00065d4e) lc0_navi_pane_ParamLimits

0xb370,	// (0x00065d4e) lc0_navi_pane

0xb3e0,	// (0x00065dbe) lc0_stat_indi_pane_ParamLimits

0xb3e0,	// (0x00065dbe) lc0_stat_indi_pane

0xb3f5,	// (0x00065dd3) ls0_title_pane_ParamLimits

0xb3f5,	// (0x00065dd3) ls0_title_pane

0x8a5f,	// (0x0006343d) bg_popup_sub_pane_cp14_ParamLimits

0x6488,	// (0x00060e66) list_uniindi_pane_ParamLimits

0x6494,	// (0x00060e72) uniindi_top_pane_ParamLimits

0x6533,	// (0x00060f11) list_single_uniindi_pane_g1_ParamLimits

0x6546,	// (0x00060f24) list_single_uniindi_pane_t1_ParamLimits

0xbc8d,	// (0x0006666b) lc0_stat_clock_pane_ParamLimits

0xbc8d,	// (0x0006666b) lc0_stat_clock_pane

0xdad7,	// (0x000684b5) lc0_stat_indi_pane_g1_ParamLimits

0xdad7,	// (0x000684b5) lc0_stat_indi_pane_g1

0xdae4,	// (0x000684c2) lc0_stat_indi_pane_g2_ParamLimits

0xdae4,	// (0x000684c2) lc0_stat_indi_pane_g2

0x0001,

0xfe46,	// (0x0006a824) lc0_stat_indi_pane_g_ParamLimits

0xfe46,	// (0x0006a824) lc0_stat_indi_pane_g

0xbc9a,	// (0x00066678) lc0_uni_indicator_pane_ParamLimits

0xbc9a,	// (0x00066678) lc0_uni_indicator_pane

0xdaf1,	// (0x000684cf) ls0_title_pane_g1_ParamLimits

0xdaf1,	// (0x000684cf) ls0_title_pane_g1

0xdb05,	// (0x000684e3) ls0_title_pane_t1_ParamLimits

0xdb05,	// (0x000684e3) ls0_title_pane_t1

0xbca7,	// (0x00066685) lc0_uni_indicator_pane_g1_ParamLimits

0xbca7,	// (0x00066685) lc0_uni_indicator_pane_g1

0x70d7,	// (0x00061ab5) lc0_stat_clock_pane_t1

0xef0f,	// (0x000698ed) main_ai5_pane

0x70e5,	// (0x00061ac3) ai5_sk_pane_ParamLimits

0x70e5,	// (0x00061ac3) ai5_sk_pane

0xdb33,	// (0x00068511) cell_ai5_widget_pane_ParamLimits

0xdb33,	// (0x00068511) cell_ai5_widget_pane

0xea3d,	// (0x0006941b) aid_size_cell_widget_grid

0x76a2,	// (0x00062080) bg_ai5_widget_pane_ParamLimits

0x76a2,	// (0x00062080) bg_ai5_widget_pane

0xea71,	// (0x0006944f) cell_ai5_widget_pane_g2

0xea85,	// (0x00069463) cell_ai5_widget_pane_g3

0xea9f,	// (0x0006947d) cell_ai5_widget_pane_g4

0xeaaf,	// (0x0006948d) cell_ai5_widget_pane_g5

0xeabf,	// (0x0006949d) cell_ai5_widget_pane_g6

0xeacb,	// (0x000694a9) cell_ai5_widget_pane_g7

0xead7,	// (0x000694b5) cell_ai5_widget_pane_t1_ParamLimits

0xead7,	// (0x000694b5) cell_ai5_widget_pane_t1

0x77d9,	// (0x000621b7) cell_ai5_widget_pane_t2_ParamLimits

0x77d9,	// (0x000621b7) cell_ai5_widget_pane_t2

0x77f1,	// (0x000621cf) cell_ai5_widget_pane_t3_ParamLimits

0x77f1,	// (0x000621cf) cell_ai5_widget_pane_t3

0xeaf4,	// (0x000694d2) cell_ai5_widget_pane_t4_ParamLimits

0xeaf4,	// (0x000694d2) cell_ai5_widget_pane_t4

0xeb1a,	// (0x000694f8) cell_ai5_widget_pane_t5_ParamLimits

0xeb1a,	// (0x000694f8) cell_ai5_widget_pane_t5

0x784f,	// (0x0006222d) cell_ai5_widget_pane_t6_ParamLimits

0x784f,	// (0x0006222d) cell_ai5_widget_pane_t6

0x7861,	// (0x0006223f) cell_ai5_widget_pane_t7_ParamLimits

0x7861,	// (0x0006223f) cell_ai5_widget_pane_t7

0x787a,	// (0x00062258) cell_ai5_widget_pane_t8_ParamLimits

0x787a,	// (0x00062258) cell_ai5_widget_pane_t8

0x0009,

0xfe60,	// (0x0006a83e) cell_ai5_widget_pane_t_ParamLimits

0xfe60,	// (0x0006a83e) cell_ai5_widget_pane_t

0xeb87,	// (0x00069565) grid_ai5_widget_pane

0x8a5f,	// (0x0006343d) highlight_cell_ai5_widget_pane_ParamLimits

0x8a5f,	// (0x0006343d) highlight_cell_ai5_widget_pane

0xeb95,	// (0x00069573) ai5_sk_left_pane

0xeb9f,	// (0x0006957d) ai5_sk_middle_pane

0xeba9,	// (0x00069587) ai5_sk_right_pane

0x7905,	// (0x000622e3) bg_ai5_widget_pane_g1_ParamLimits

0x7905,	// (0x000622e3) bg_ai5_widget_pane_g1

0x7911,	// (0x000622ef) bg_ai5_widget_pane_g2_ParamLimits

0x7911,	// (0x000622ef) bg_ai5_widget_pane_g2

0x791d,	// (0x000622fb) bg_ai5_widget_pane_g3_ParamLimits

0x791d,	// (0x000622fb) bg_ai5_widget_pane_g3

0x7929,	// (0x00062307) bg_ai5_widget_pane_g4_ParamLimits

0x7929,	// (0x00062307) bg_ai5_widget_pane_g4

0x7935,	// (0x00062313) bg_ai5_widget_pane_g5_ParamLimits

0x7935,	// (0x00062313) bg_ai5_widget_pane_g5

0x7941,	// (0x0006231f) bg_ai5_widget_pane_g6_ParamLimits

0x7941,	// (0x0006231f) bg_ai5_widget_pane_g6

0x794d,	// (0x0006232b) bg_ai5_widget_pane_g7_ParamLimits

0x794d,	// (0x0006232b) bg_ai5_widget_pane_g7

0x7959,	// (0x00062337) bg_ai5_widget_pane_g8_ParamLimits

0x7959,	// (0x00062337) bg_ai5_widget_pane_g8

0x7965,	// (0x00062343) bg_ai5_widget_pane_g9_ParamLimits

0x7965,	// (0x00062343) bg_ai5_widget_pane_g9

0x0008,

0xfe75,	// (0x0006a853) bg_ai5_widget_pane_g_ParamLimits

0xfe75,	// (0x0006a853) bg_ai5_widget_pane_g

0xebdf,	// (0x000695bd) cell_shortcut_ai5_widget_pane_ParamLimits

0xebdf,	// (0x000695bd) cell_shortcut_ai5_widget_pane

0xe36a,	// (0x00068d48) bg_cell_shortcut_ai5_widget_pane

0x79b0,	// (0x0006238e) cell_grid_ai5_widget_pane_g1

0xe36a,	// (0x00068d48) highlight_cell_shortcut_ai5_widget_pane

0x2357,	// (0x0005cd35) ai5_sk_left_pane_g1

0x79b9,	// (0x00062397) ai5_sk_left_pane_g2

0x79c1,	// (0x0006239f) ai5_sk_left_pane_g3

0x79c9,	// (0x000623a7) ai5_sk_left_pane_g4

0x0003,

0xfe88,	// (0x0006a866) ai5_sk_left_pane_g

0x79d1,	// (0x000623af) ai5_sk_left_pane_t1

0x235f,	// (0x0005cd3d) ai5_sk_right_pane_g1

0x79df,	// (0x000623bd) ai5_sk_right_pane_g2

0x79e7,	// (0x000623c5) ai5_sk_right_pane_g3

0x79ef,	// (0x000623cd) ai5_sk_right_pane_g4

0x0003,

0xfe91,	// (0x0006a86f) ai5_sk_right_pane_g

0x79f7,	// (0x000623d5) ai5_sk_right_pane_t1

0x235f,	// (0x0005cd3d) ai5_sk_middle_pane_g1

0x2357,	// (0x0005cd35) ai5_sk_middle_pane_g2

0x2377,	// (0x0005cd55) ai5_sk_middle_pane_g3

0x79e7,	// (0x000623c5) ai5_sk_middle_pane_g4

0x79c1,	// (0x0006239f) ai5_sk_middle_pane_g5

0x7a05,	// (0x000623e3) ai5_sk_middle_pane_g6

0xebf2,	// (0x000695d0) ai5_sk_middle_pane_g7

0x0006,

0xfe9a,	// (0x0006a878) ai5_sk_middle_pane_g

0xb25a,	// (0x00065c38) aid_touch_area_size_lc0_ParamLimits

0xb25a,	// (0x00065c38) aid_touch_area_size_lc0

0x0eb0,	// (0x0005b88e) cell_hwr_candidate_pane_t1_ParamLimits

0x1e91,	// (0x0005c86f) aid_touch_navi_pane

0xc150,	// (0x00066b2e) status_dt_navi_pane_ParamLimits

0xc150,	// (0x00066b2e) status_dt_navi_pane

0xc168,	// (0x00066b46) status_dt_sta_pane_ParamLimits

0xc168,	// (0x00066b46) status_dt_sta_pane

0xebfa,	// (0x000695d8) dt_sta_controll_pane

0xec07,	// (0x000695e5) dt_sta_indi_pane

0xec14,	// (0x000695f2) dt_sta_title_pane

0x8554,	// (0x00062f32) bg_dt_sta_indi_pane_ParamLimits

0x8554,	// (0x00062f32) bg_dt_sta_indi_pane

0xec26,	// (0x00069604) dt_sta_battery_pane

0xec2e,	// (0x0006960c) dt_sta_indi_pane_g1

0xec37,	// (0x00069615) dt_sta_indi_pane_g2

0xec40,	// (0x0006961e) dt_sta_indi_pane_g3

0x0002,

0xfea9,	// (0x0006a887) dt_sta_indi_pane_g

0xec49,	// (0x00069627) dt_sta_signal_pane

0x8a5f,	// (0x0006343d) bg_dt_sta_title_pane_ParamLimits

0x8a5f,	// (0x0006343d) bg_dt_sta_title_pane

0xec52,	// (0x00069630) dt_sta_title_pane_g1

0xec5a,	// (0x00069638) dt_sta_title_pane_t1_ParamLimits

0xec5a,	// (0x00069638) dt_sta_title_pane_t1

0x7b98,	// (0x00062576) bg_dt_sta_control_pane

0xec6f,	// (0x0006964d) dt_sta_controll_pane_g1

0xec78,	// (0x00069656) bg_dt_sta_title_pane_g1

0xec81,	// (0x0006965f) bg_dt_sta_title_pane_g2

0xec8a,	// (0x00069668) bg_dt_sta_title_pane_g3

0x0002,

0xfeb0,	// (0x0006a88e) bg_dt_sta_title_pane_g

0x4b28,	// (0x0005f506) bg_dt_sta_indi_pane_g1

0x7ab3,	// (0x00062491) dt_sta_signal_pane_g1

0x7abb,	// (0x00062499) dt_sta_signal_pane_g2

0x0001,

0xfeb7,	// (0x0006a895) dt_sta_signal_pane_g

0x7ac3,	// (0x000624a1) dt_sta_battery_pane_g1

0x7acc,	// (0x000624aa) dt_sta_battery_pane_t1

0x4b28,	// (0x0005f506) bg_dt_sta_control_pane_g1

0xbf95,	// (0x00066973) fep_china_uni_eep_pane

0xbf9d,	// (0x0006697b) fep_china_uni_entry_pane_ParamLimits

0xbfad,	// (0x0006698b) popup_fep_china_uni_window_g1_ParamLimits

0xbfbd,	// (0x0006699b) popup_fep_china_uni_window_g2_ParamLimits

0xbfbd,	// (0x0006699b) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006a100) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006a100) popup_fep_china_uni_window_g

0x7adb,	// (0x000624b9) fep_china_uni_eep_pane_g1

0x7ae3,	// (0x000624c1) fep_china_uni_eep_pane_t1

0x7054,	// (0x00061a32) aid_touch_area_size_smil_player

0x1fdf,	// (0x0005c9bd) lc0_clock_pane

0x21d6,	// (0x0005cbb4) status_pane_g5_ParamLimits

0x21d6,	// (0x0005cbb4) status_pane_g5

0xacb1,	// (0x0006568f) popup_keymap_window

0x219c,	// (0x0005cb7a) status_icon_pane

0xea85,	// (0x00069463) cell_ai5_widget_pane_g3_ParamLimits

0xea9f,	// (0x0006947d) cell_ai5_widget_pane_g4_ParamLimits

0xeaaf,	// (0x0006948d) cell_ai5_widget_pane_g5_ParamLimits

0x7780,	// (0x0006215e) cell_ai5_widget_pane_g8_ParamLimits

0x7780,	// (0x0006215e) cell_ai5_widget_pane_g8

0x7794,	// (0x00062172) cell_ai5_widget_pane_g9_ParamLimits

0x7794,	// (0x00062172) cell_ai5_widget_pane_g9

0x77a8,	// (0x00062186) cell_ai5_widget_pane_g10_ParamLimits

0x77a8,	// (0x00062186) cell_ai5_widget_pane_g10

0x7af2,	// (0x000624d0) status_icon_pane_g1

0x7b98,	// (0x00062576) bg_popup_sub_pane_cp13

0x7afa,	// (0x000624d8) popup_keymap_window_t1

0xa9a6,	// (0x00065384) control_pane_g6_ParamLimits

0xa9a6,	// (0x00065384) control_pane_g6

0xa9b3,	// (0x00065391) control_pane_g7_ParamLimits

0xa9b3,	// (0x00065391) control_pane_g7

0xa9c0,	// (0x0006539e) control_pane_g8_ParamLimits

0xa9c0,	// (0x0006539e) control_pane_g8

0xebfa,	// (0x000695d8) dt_sta_controll_pane_ParamLimits

0xec07,	// (0x000695e5) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x000695f2) dt_sta_title_pane_ParamLimits

0x89a1,	// (0x0006337f) aid_size_touch_scroll_bar_cale

0xefec,	// (0x000699ca) popup_discreet_window_ParamLimits

0xefec,	// (0x000699ca) popup_discreet_window

0x99a8,	// (0x00064386) popup_sk_window

0x29c5,	// (0x0005d3a3) bg_popup_sub_pane_cp28_ParamLimits

0x29c5,	// (0x0005d3a3) bg_popup_sub_pane_cp28

0x7b08,	// (0x000624e6) popup_discreet_window_g1_ParamLimits

0x7b08,	// (0x000624e6) popup_discreet_window_g1

0x7b28,	// (0x00062506) popup_discreet_window_t1_ParamLimits

0x7b28,	// (0x00062506) popup_discreet_window_t1

0x7b46,	// (0x00062524) popup_discreet_window_t2_ParamLimits

0x7b46,	// (0x00062524) popup_discreet_window_t2

0x0002,

0xfebc,	// (0x0006a89a) popup_discreet_window_t_ParamLimits

0xfebc,	// (0x0006a89a) popup_discreet_window_t

0x1993,	// (0x0005c371) popup_sk_window_g1

0x199d,	// (0x0005c37b) popup_sk_window_g2

0x0001,

0xfec3,	// (0x0006a8a1) popup_sk_window_g

0x19a5,	// (0x0005c383) popup_sk_window_t1

0x19b3,	// (0x0005c391) popup_sk_window_t1_copy1

0xea71,	// (0x0006944f) cell_ai5_widget_pane_g2_ParamLimits

0xeb3a,	// (0x00069518) cell_ai5_widget_pane_t9_ParamLimits

0xeb3a,	// (0x00069518) cell_ai5_widget_pane_t9

0x7b98,	// (0x00062576) main_fep_fshwr2_pane

0xbcc6,	// (0x000666a4) aid_fshwr2_btn_pane

0xbcda,	// (0x000666b8) aid_fshwr2_syb_pane

0xbcee,	// (0x000666cc) aid_fshwr2_txt_pane

0xbcfe,	// (0x000666dc) fshwr2_func_candi_pane

0xbd20,	// (0x000666fe) fshwr2_hwr_syb_pane

0xbd44,	// (0x00066722) fshwr2_icf_pane

0xef0f,	// (0x000698ed) fshwr2_icf_bg_pane

0x1a49,	// (0x0005c427) fshwr2_icf_pane_t1_ParamLimits

0x1a49,	// (0x0005c427) fshwr2_icf_pane_t1

0xbf13,	// (0x000668f1) fshwr2_func_candi_pane_g1

0xec93,	// (0x00069671) fshwr2_func_candi_row_pane_ParamLimits

0xec93,	// (0x00069671) fshwr2_func_candi_row_pane

0xbd74,	// (0x00066752) cell_fshwr2_syb_pane_ParamLimits

0xbd74,	// (0x00066752) cell_fshwr2_syb_pane

0x1a82,	// (0x0005c460) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1a82,	// (0x0005c460) fshwr2_hwr_syb_pane_g1

0xef0f,	// (0x000698ed) bg_popup_call_pane_cp01

0xbd9c,	// (0x0006677a) fshwr2_func_candi_cell_pane_ParamLimits

0xbd9c,	// (0x0006677a) fshwr2_func_candi_cell_pane

0xecba,	// (0x00069698) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xecba,	// (0x00069698) fshwr2_func_candi_cell_bg_pane

0xbde5,	// (0x000667c3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbde5,	// (0x000667c3) fshwr2_func_candi_cell_pane_g1

0xbe1c,	// (0x000667fa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbe1c,	// (0x000667fa) fshwr2_func_candi_cell_pane_t1

0xef0f,	// (0x000698ed) bg_button_pane_cp08

0x7d3b,	// (0x00062719) cell_fshwr2_syb_bg_pane

0xbe37,	// (0x00066815) cell_fshwr2_syb_bg_pane_g1

0xbe4b,	// (0x00066829) cell_fshwr2_syb_bg_pane_t1

0x8a5f,	// (0x0006343d) main_tmo_pane

0xc46a,	// (0x00066e48) uni_indicator_pane_g1_ParamLimits

0xc480,	// (0x00066e5e) uni_indicator_pane_g2_ParamLimits

0xc496,	// (0x00066e74) uni_indicator_pane_g3_ParamLimits

0xc4a9,	// (0x00066e87) uni_indicator_pane_g4_ParamLimits

0xc4a9,	// (0x00066e87) uni_indicator_pane_g4

0x3531,	// (0x0005df0f) uni_indicator_pane_g5_ParamLimits

0x3531,	// (0x0005df0f) uni_indicator_pane_g5

0x3531,	// (0x0005df0f) uni_indicator_pane_g6_ParamLimits

0x3531,	// (0x0005df0f) uni_indicator_pane_g6

0xf921,	// (0x0006a2ff) uni_indicator_pane_g_ParamLimits

0xcf67,	// (0x00067945) popup_tmo_note_window_ParamLimits

0xcf67,	// (0x00067945) popup_tmo_note_window

0x1201,	// (0x0005bbdf) fshwr2_bg_pane

0xbe0d,	// (0x000667eb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbe0d,	// (0x000667eb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec8,	// (0x0006a8a6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec8,	// (0x0006a8a6) fshwr2_func_candi_cell_pane_g

0x0e69,	// (0x0005b847) bg_popup_window_pane_cp01

0x1b3e,	// (0x0005c51c) bg_popup_window_pane_g1_cp01

0x7d47,	// (0x00062725) bg_popup_window_pane_cp22_ParamLimits

0x7d47,	// (0x00062725) bg_popup_window_pane_cp22

0x7d55,	// (0x00062733) listscroll_tmo_link_pane_ParamLimits

0x7d55,	// (0x00062733) listscroll_tmo_link_pane

0x7d95,	// (0x00062773) popup_tmo_note_window_g1_ParamLimits

0x7d95,	// (0x00062773) popup_tmo_note_window_g1

0x7da2,	// (0x00062780) tmo_note_info_pane_ParamLimits

0x7da2,	// (0x00062780) tmo_note_info_pane

0xecc6,	// (0x000696a4) list_tmo_note_info_pane_g1_ParamLimits

0xecc6,	// (0x000696a4) list_tmo_note_info_pane_g1

0x7dd3,	// (0x000627b1) list_tmo_note_info_pane_g2_ParamLimits

0x7dd3,	// (0x000627b1) list_tmo_note_info_pane_g2

0x0001,

0xfecd,	// (0x0006a8ab) list_tmo_note_info_pane_g_ParamLimits

0xfecd,	// (0x0006a8ab) list_tmo_note_info_pane_g

0x7def,	// (0x000627cd) list_tmo_note_info_text_pane_ParamLimits

0x7def,	// (0x000627cd) list_tmo_note_info_text_pane

0x7e74,	// (0x00062852) list_tmo_link_pane

0x7e81,	// (0x0006285f) scroll_pane_cp20

0x7e8e,	// (0x0006286c) list_single_tmo_link_pane_ParamLimits

0x7e8e,	// (0x0006286c) list_single_tmo_link_pane

0x7e9e,	// (0x0006287c) list_single_tmo_link_pane_t1

0x7eac,	// (0x0006288a) list_tmo_note_info_text_pane_t1_ParamLimits

0x7eac,	// (0x0006288a) list_tmo_note_info_text_pane_t1

0xa479,	// (0x00064e57) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa479,	// (0x00064e57) aid_size_touch_scroll_bar_cp01

0xa3a8,	// (0x00064d86) aid_size_touch_slider_marker

0x9998,	// (0x00064376) popup_settings_window_ParamLimits

0x9998,	// (0x00064376) popup_settings_window

0xe4cf,	// (0x00068ead) popup_candi_list_indi_window

0x1e91,	// (0x0005c86f) aid_touch_navi_pane_ParamLimits

0x115a,	// (0x0005bb38) rs_clock_indi_pane

0x1163,	// (0x0005bb41) sctrl_sk_bottom_pane_ParamLimits

0x1174,	// (0x0005bb52) sctrl_sk_top_pane_ParamLimits

0x1279,	// (0x0005bc57) popup_fep_tooltip_window

0xea3d,	// (0x0006941b) aid_size_cell_widget_grid_ParamLimits

0xea5c,	// (0x0006943a) cell_ai5_widget_pane_g1_ParamLimits

0xea5c,	// (0x0006943a) cell_ai5_widget_pane_g1

0xeabf,	// (0x0006949d) cell_ai5_widget_pane_g6_ParamLimits

0xeacb,	// (0x000694a9) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4b,	// (0x0006a829) cell_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0006a829) cell_ai5_widget_pane_g

0xeb69,	// (0x00069547) cell_ai5_widget_pane_t10_ParamLimits

0xeb69,	// (0x00069547) cell_ai5_widget_pane_t10

0xeb87,	// (0x00069565) grid_ai5_widget_pane_ParamLimits

0xebb3,	// (0x00069591) cell_contacts_ai5_widget_pane_ParamLimits

0xebb3,	// (0x00069591) cell_contacts_ai5_widget_pane

0x7b5b,	// (0x00062539) popup_discreet_window_t3_ParamLimits

0x7b5b,	// (0x00062539) popup_discreet_window_t3

0xbd60,	// (0x0006673e) popup_fshwr2_char_preview_window_ParamLimits

0xbd60,	// (0x0006673e) popup_fshwr2_char_preview_window

0xecdd,	// (0x000696bb) tmo_note_info_pane_t1

0xecf2,	// (0x000696d0) tmo_note_info_pane_t2

0xed0b,	// (0x000696e9) tmo_note_info_pane_t3

0x7e50,	// (0x0006282e) tmo_note_info_pane_t4

0x7e62,	// (0x00062840) tmo_note_info_pane_t5

0x0004,

0xfed2,	// (0x0006a8b0) tmo_note_info_pane_t

0x7e74,	// (0x00062852) list_tmo_link_pane_ParamLimits

0x7e81,	// (0x0006285f) scroll_pane_cp20_ParamLimits

0xef0f,	// (0x000698ed) bg_popup_fep_char_preview_window_cp01

0x7ec5,	// (0x000628a3) popup_fshwr2_char_preview_window_t1

0x7ed3,	// (0x000628b1) popup_candi_list_indi_window_g1

0x7edc,	// (0x000628ba) bg_cell_contacts_ai5_widget_pane

0x7ee8,	// (0x000628c6) cell_contacts_ai5_widget_pane_g1

0x7efd,	// (0x000628db) cell_contacts_ai5_widget_pane_g2

0x7f09,	// (0x000628e7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedd,	// (0x0006a8bb) cell_contacts_ai5_widget_pane_g

0x7f15,	// (0x000628f3) cell_contacts_ai5_widget_pane_t1

0x8a5f,	// (0x0006343d) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7f8c,	// (0x0006296a) settings_container_pane

0xe36a,	// (0x00068d48) listscroll_set_pane_copy1

0x4280,	// (0x0005ec5e) scroll_pane_cp121_copy1

0x7f98,	// (0x00062976) set_content_pane_copy1

0x7fa0,	// (0x0006297e) aid_height_set_list_copy1_ParamLimits

0x7fa0,	// (0x0006297e) aid_height_set_list_copy1

0x3731,	// (0x0005e10f) aid_size_parent_copy1_ParamLimits

0x3731,	// (0x0005e10f) aid_size_parent_copy1

0x7fac,	// (0x0006298a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x7fac,	// (0x0006298a) button_value_adjust_pane_cp6_copy1

0x1e13,	// (0x0005c7f1) list_highlight_pane_cp2_copy1_ParamLimits

0x1e13,	// (0x0005c7f1) list_highlight_pane_cp2_copy1

0x7fc0,	// (0x0006299e) list_set_pane_copy1_ParamLimits

0x7fc0,	// (0x0006299e) list_set_pane_copy1

0x7f27,	// (0x00062905) main_pane_set_t1_copy1_ParamLimits

0x7f27,	// (0x00062905) main_pane_set_t1_copy1

0x7f61,	// (0x0006293f) main_pane_set_t2_copy1_ParamLimits

0x7f61,	// (0x0006293f) main_pane_set_t2_copy1

0x8081,	// (0x00062a5f) main_pane_set_t3_copy1

0x808f,	// (0x00062a6d) main_pane_set_t4_copy1

0x7f80,	// (0x0006295e) set_content_pane_g1_copy1_ParamLimits

0x7f80,	// (0x0006295e) set_content_pane_g1_copy1

0x809d,	// (0x00062a7b) setting_code_pane_copy1

0x80a5,	// (0x00062a83) setting_slider_graphic_pane_copy1

0x80a5,	// (0x00062a83) setting_slider_pane_copy1

0x80a5,	// (0x00062a83) setting_text_pane_copy1

0x80a5,	// (0x00062a83) setting_volume_pane_copy1

0x809d,	// (0x00062a7b) settings_code_pane_cp2_copy1

0x80ad,	// (0x00062a8b) settings_code_pane_cp_copy1_ParamLimits

0x80ad,	// (0x00062a8b) settings_code_pane_cp_copy1

0x1b47,	// (0x0005c525) volume_set_pane_copy1

0x80c1,	// (0x00062a9f) volume_set_pane_g10_copy1

0x80cd,	// (0x00062aab) volume_set_pane_g1_copy1

0x80d7,	// (0x00062ab5) volume_set_pane_g2_copy1

0x80e1,	// (0x00062abf) volume_set_pane_g3_copy1

0x80eb,	// (0x00062ac9) volume_set_pane_g4_copy1

0x80f5,	// (0x00062ad3) volume_set_pane_g5_copy1

0x80ff,	// (0x00062add) volume_set_pane_g6_copy1

0x8109,	// (0x00062ae7) volume_set_pane_g7_copy1

0x8113,	// (0x00062af1) volume_set_pane_g8_copy1

0x811d,	// (0x00062afb) volume_set_pane_g9_copy1

0x7bfa,	// (0x000625d8) bg_set_opt_pane_cp_copy1_ParamLimits

0x7bfa,	// (0x000625d8) bg_set_opt_pane_cp_copy1

0x1b53,	// (0x0005c531) setting_slider_pane_t1_copy1_ParamLimits

0x1b53,	// (0x0005c531) setting_slider_pane_t1_copy1

0x1b71,	// (0x0005c54f) setting_slider_pane_t2_copy1_ParamLimits

0x1b71,	// (0x0005c54f) setting_slider_pane_t2_copy1

0x1b8b,	// (0x0005c569) setting_slider_pane_t3_copy1_ParamLimits

0x1b8b,	// (0x0005c569) setting_slider_pane_t3_copy1

0x1ba3,	// (0x0005c581) slider_set_pane_copy1_ParamLimits

0x1ba3,	// (0x0005c581) slider_set_pane_copy1

0x8ab7,	// (0x00063495) set_opt_bg_pane_g1_copy2

0x8abf,	// (0x0006349d) set_opt_bg_pane_g2_copy2

0x8127,	// (0x00062b05) set_opt_bg_pane_g3_copy2

0x8acf,	// (0x000634ad) set_opt_bg_pane_g4_copy2

0x8ad7,	// (0x000634b5) set_opt_bg_pane_g5_copy2

0x8adf,	// (0x000634bd) set_opt_bg_pane_g6_copy2

0x8131,	// (0x00062b0f) set_opt_bg_pane_g7_copy2

0x813b,	// (0x00062b19) set_opt_bg_pane_g8_copy2

0x8145,	// (0x00062b23) set_opt_bg_pane_g9_copy2

0x1bb9,	// (0x0005c597) aid_size_touch_slider_mark_copy1_ParamLimits

0x1bb9,	// (0x0005c597) aid_size_touch_slider_mark_copy1

0x814f,	// (0x00062b2d) slider_set_pane_g1_copy1

0x1bcd,	// (0x0005c5ab) slider_set_pane_g2_copy1

0x0a06,	// (0x0005b3e4) slider_set_pane_g3_copy1_ParamLimits

0x0a06,	// (0x0005b3e4) slider_set_pane_g3_copy1

0x0a1a,	// (0x0005b3f8) slider_set_pane_g4_copy1_ParamLimits

0x0a1a,	// (0x0005b3f8) slider_set_pane_g4_copy1

0x0a32,	// (0x0005b410) slider_set_pane_g5_copy1_ParamLimits

0x0a32,	// (0x0005b410) slider_set_pane_g5_copy1

0x0a06,	// (0x0005b3e4) slider_set_pane_g6_copy1_ParamLimits

0x0a06,	// (0x0005b3e4) slider_set_pane_g6_copy1

0x1bd5,	// (0x0005c5b3) slider_set_pane_g7_copy1_ParamLimits

0x1bd5,	// (0x0005c5b3) slider_set_pane_g7_copy1

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp2_copy1

0x8158,	// (0x00062b36) setting_slider_graphic_pane_g1_copy1

0x8161,	// (0x00062b3f) setting_slider_graphic_pane_t1_copy1

0x8171,	// (0x00062b4f) setting_slider_graphic_pane_t2_copy1

0x8181,	// (0x00062b5f) slider_set_pane_cp_copy1

0x8191,	// (0x00062b6f) input_focus_pane_cp1_copy1

0x819a,	// (0x00062b78) list_set_text_pane_copy1

0x81a2,	// (0x00062b80) setting_text_pane_g1_copy1

0xde9a,	// (0x00068878) set_text_pane_t1_copy1

0x8191,	// (0x00062b6f) input_focus_pane_cp2_copy1

0x81a2,	// (0x00062b80) setting_code_pane_g1_copy1

0x81ab,	// (0x00062b89) setting_code_pane_t1_copy1

0xe069,	// (0x00068a47) list_set_graphic_pane_copy1

0x7bac,	// (0x0006258a) bg_set_opt_pane_cp4_copy1

0xe07c,	// (0x00068a5a) list_set_graphic_pane_g1_copy1_ParamLimits

0xe07c,	// (0x00068a5a) list_set_graphic_pane_g1_copy1

0x81b9,	// (0x00062b97) list_set_graphic_pane_g2_copy1

0xe094,	// (0x00068a72) list_set_graphic_pane_t1_copy1_ParamLimits

0xe094,	// (0x00068a72) list_set_graphic_pane_t1_copy1

0x4b28,	// (0x0005f506) rs_clock_indi_pane_g1

0x81c1,	// (0x00062b9f) rs_clock_indi_pane_t1

0x81cf,	// (0x00062bad) rs_indi_pane

0x81d7,	// (0x00062bb5) rs_indi_pane_g1

0x81e0,	// (0x00062bbe) rs_indi_pane_g2

0x81e9,	// (0x00062bc7) rs_indi_pane_g3

0x0002,

0xfee4,	// (0x0006a8c2) rs_indi_pane_g

0xe36a,	// (0x00068d48) bg_popup_preview_window_pane_cp03

0x81f2,	// (0x00062bd0) popup_fep_tooltip_window_t1

0x57d3,	// (0x000601b1) popup_note2_window_g2_ParamLimits

0x57d3,	// (0x000601b1) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x0006a65b) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x0006a65b) popup_note2_window_g

0x5d04,	// (0x000606e2) bg_popup_sub_pane_cp11_ParamLimits

0x5d11,	// (0x000606ef) cell_ai3_links_pane_g1_ParamLimits

0x5d28,	// (0x00060706) cell_ai3_links_pane_t1

0xde9a,	// (0x00068878) set_text_pane_t1_copy1_ParamLimits

0xe28f,	// (0x00068c6d) cell_graphic_popup_pane_cp2_ParamLimits

0xe28f,	// (0x00068c6d) cell_graphic_popup_pane_cp2

0x8200,	// (0x00062bde) cell_graphic_popup_pane_g1_cp2

0x87b4,	// (0x00063192) cell_graphic_popup_pane_g2_cp2

0x8208,	// (0x00062be6) cell_graphic_popup_pane_g3_cp2

0x8210,	// (0x00062bee) cell_graphic_popup_pane_t2_cp2

0x87c5,	// (0x000631a3) grid_highlight_pane_cp3_cp2

0x8d60,	// (0x0006373e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8a5f,	// (0x0006343d) main_tmo_pane_ParamLimits

0xcf5b,	// (0x00067939) popup_tmo_big_image_note_window

0xea4b,	// (0x00069429) cell_ai5_widget_list_pane

0xea53,	// (0x00069431) cell_ai5_widget_lrg_icon_pane

0xecdd,	// (0x000696bb) tmo_note_info_pane_t1_ParamLimits

0xecf2,	// (0x000696d0) tmo_note_info_pane_t2_ParamLimits

0xed0b,	// (0x000696e9) tmo_note_info_pane_t3_ParamLimits

0x7e50,	// (0x0006282e) tmo_note_info_pane_t4_ParamLimits

0x7e62,	// (0x00062840) tmo_note_info_pane_t5_ParamLimits

0xfed2,	// (0x0006a8b0) tmo_note_info_pane_t_ParamLimits

0x7f8c,	// (0x0006296a) settings_container_pane_ParamLimits

0x8189,	// (0x00062b67) indicator_popup_pane_cp5

0x8189,	// (0x00062b67) indicator_popup_pane_cp6

0xe069,	// (0x00068a47) list_set_graphic_pane_copy1_ParamLimits

0x7b98,	// (0x00062576) bg_popup_window_pane_cp23

0x821e,	// (0x00062bfc) popup_tmo_big_image_note_window_g1

0x822a,	// (0x00062c08) popup_tmo_big_image_note_window_t1

0x823a,	// (0x00062c18) popup_tmo_big_image_note_window_t2

0x824a,	// (0x00062c28) popup_tmo_big_image_note_window_t3

0x0002,

0xfeeb,	// (0x0006a8c9) popup_tmo_big_image_note_window_t

0x4b28,	// (0x0005f506) cell_ai5_widget_lrg_icon_pane_g1

0xed20,	// (0x000696fe) cell_ai5_widget_lrg_icon_pane_t1

0xed2e,	// (0x0006970c) cell_ai5_widget_list_row_pane_ParamLimits

0xed2e,	// (0x0006970c) cell_ai5_widget_list_row_pane

0xed46,	// (0x00069724) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xed46,	// (0x00069724) cell_ai5_widget_list_row_pane_g1

0xed53,	// (0x00069731) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed53,	// (0x00069731) cell_ai5_widget_list_row_pane_t1

0xed7e,	// (0x0006975c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xed7e,	// (0x0006975c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef2,	// (0x0006a8d0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef2,	// (0x0006a8d0) cell_ai5_widget_list_row_pane_t

0xef0f,	// (0x000698ed) main_fep_vtchi_ss_pane

0x8300,	// (0x00062cde) popup_fep_char_pre_window

0x8308,	// (0x00062ce6) popup_fep_ituss_window

0xedb5,	// (0x00069793) popup_fep_vkbss_window

0xedc4,	// (0x000697a2) grid_vkbss_keypad_pane_ParamLimits

0xedc4,	// (0x000697a2) grid_vkbss_keypad_pane

0x8362,	// (0x00062d40) ituss_keypad_pane

0x1bf7,	// (0x0005c5d5) aid_vkbss_key_offset_ParamLimits

0x1bf7,	// (0x0005c5d5) aid_vkbss_key_offset

0xbe61,	// (0x0006683f) cell_vkbss_key_pane_ParamLimits

0xbe61,	// (0x0006683f) cell_vkbss_key_pane

0x8371,	// (0x00062d4f) bg_cell_vkbss_key_g1_ParamLimits

0x8371,	// (0x00062d4f) bg_cell_vkbss_key_g1

0xedd4,	// (0x000697b2) cell_vkbss_key_3p_pane_ParamLimits

0xedd4,	// (0x000697b2) cell_vkbss_key_3p_pane

0xedee,	// (0x000697cc) cell_vkbss_key_g1_ParamLimits

0xedee,	// (0x000697cc) cell_vkbss_key_g1

0xee08,	// (0x000697e6) cell_vkbss_key_t1_ParamLimits

0xee08,	// (0x000697e6) cell_vkbss_key_t1

0x1c19,	// (0x0005c5f7) cell_ituss_key_pane_ParamLimits

0x1c19,	// (0x0005c5f7) cell_ituss_key_pane

0x83d0,	// (0x00062dae) bg_cell_ituss_key_g1_ParamLimits

0x83d0,	// (0x00062dae) bg_cell_ituss_key_g1

0x83dc,	// (0x00062dba) cell_ituss_key_pane_g1_ParamLimits

0x83dc,	// (0x00062dba) cell_ituss_key_pane_g1

0x1c2a,	// (0x0005c608) cell_ituss_key_pane_g2_ParamLimits

0x1c2a,	// (0x0005c608) cell_ituss_key_pane_g2

0x0002,

0xfef9,	// (0x0006a8d7) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x0006a8d7) cell_ituss_key_pane_g

0x1c56,	// (0x0005c634) cell_ituss_key_t1_ParamLimits

0x1c56,	// (0x0005c634) cell_ituss_key_t1

0x1c90,	// (0x0005c66e) cell_ituss_key_t2_ParamLimits

0x1c90,	// (0x0005c66e) cell_ituss_key_t2

0x1cc1,	// (0x0005c69f) cell_ituss_key_t3_ParamLimits

0x1cc1,	// (0x0005c69f) cell_ituss_key_t3

0x1c90,	// (0x0005c66e) cell_ituss_key_t4_ParamLimits

0x1c90,	// (0x0005c66e) cell_ituss_key_t4

0x0004,

0xff00,	// (0x0006a8de) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0006a8de) cell_ituss_key_t

0x8402,	// (0x00062de0) cell_vkbss_key_3p_pane_g1

0x840a,	// (0x00062de8) cell_vkbss_key_3p_pane_g2

0x8412,	// (0x00062df0) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x0006a8e9) cell_vkbss_key_3p_pane_g

0xe36a,	// (0x00068d48) bg_popup_fep_char_preview_window_cp02

0x841a,	// (0x00062df8) popup_fep_char_pre_window_t1

0xea2a,	// (0x00069408) main_ai5_sk_pane

0x7edc,	// (0x000628ba) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7ee8,	// (0x000628c6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7efd,	// (0x000628db) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7f09,	// (0x000628e7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedd,	// (0x0006a8bb) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7f15,	// (0x000628f3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8a5f,	// (0x0006343d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee33,	// (0x00069811) main_ai5_sk_pane_g1

0x27fd,	// (0x0005d1db) popup_query_code_window_g1

0xeda6,	// (0x00069784) popup_fep_vkb_icf_pane

0x833c,	// (0x00062d1a) popup_fep_vtchi_icf_pane

0x8431,	// (0x00062e0f) bg_icf_pane

0x843d,	// (0x00062e1b) list_vkb_icf_pane

0x844c,	// (0x00062e2a) bg_icf_pane_cp01

0x845f,	// (0x00062e3d) vtchi_icf_list_pane

0xee3c,	// (0x0006981a) list_vkb_icf_pane_t1_ParamLimits

0xee3c,	// (0x0006981a) list_vkb_icf_pane_t1

0x848d,	// (0x00062e6b) vtchi_icf_list_pane_t1_ParamLimits

0x848d,	// (0x00062e6b) vtchi_icf_list_pane_t1

0x8308,	// (0x00062ce6) popup_fep_ituss_window_ParamLimits

0x833c,	// (0x00062d1a) popup_fep_vtchi_icf_pane_ParamLimits

0x8362,	// (0x00062d40) ituss_keypad_pane_ParamLimits

0x1beb,	// (0x0005c5c9) ituss_sks_pane

0x8431,	// (0x00062e0f) bg_icf_pane_ParamLimits

0x82e0,	// (0x00062cbe) icf_edit_indi_pane_ParamLimits

0x82e0,	// (0x00062cbe) icf_edit_indi_pane

0x843d,	// (0x00062e1b) list_vkb_icf_pane_ParamLimits

0x844c,	// (0x00062e2a) bg_icf_pane_cp01_ParamLimits

0x82f3,	// (0x00062cd1) icf_edit_indi_pane_cp01_ParamLimits

0x82f3,	// (0x00062cd1) icf_edit_indi_pane_cp01

0x8467,	// (0x00062e45) vtchi_query_pane

0x7024,	// (0x00061a02) icf_edit_indi_pane_g1_ParamLimits

0x7024,	// (0x00061a02) icf_edit_indi_pane_g1

0xee52,	// (0x00069830) icf_edit_indi_pane_g2_ParamLimits

0xee52,	// (0x00069830) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x0006a901) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x0006a901) icf_edit_indi_pane_g

0xee64,	// (0x00069842) icf_edit_indi_pane_t1

0x84a5,	// (0x00062e83) bg_input_focus_pane_cp042

0x8998,	// (0x00063376) vtchi_button_pane

0x84ae,	// (0x00062e8c) vtchi_query_pane_t1

0x84bc,	// (0x00062e9a) vtchi_query_pane_t2

0x84ca,	// (0x00062ea8) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x0006a8f0) vtchi_query_pane_t

0xef0f,	// (0x000698ed) bg_button_pane_cp13

0x84d8,	// (0x00062eb6) vtchi_button_pane_g1

0x1d04,	// (0x0005c6e2) ituss_sks_pane_g1

0x1d0f,	// (0x0005c6ed) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x0006a8f7) ituss_sks_pane_g

0x84e0,	// (0x00062ebe) ituss_sks_pane_t1

0x84ee,	// (0x00062ecc) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006a8fc) ituss_sks_pane_t

0x4605,	// (0x0005efe3) indicator_nsta_pane_cp_g1

0x460d,	// (0x0005efeb) indicator_nsta_pane_cp_g2

0x4615,	// (0x0005eff3) indicator_nsta_pane_cp_g3

0x4605,	// (0x0005efe3) indicator_nsta_pane_cp_g4

0x460d,	// (0x0005efeb) indicator_nsta_pane_cp_g5

0x4615,	// (0x0005eff3) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x0006a499) indicator_nsta_pane_cp_g

0xd9a1,	// (0x0006837f) cell_graphic2_pane_t2_ParamLimits

0xd9a1,	// (0x0006837f) cell_graphic2_pane_t2

0x0001,

0xfdd4,	// (0x0006a7b2) cell_graphic2_pane_t_ParamLimits

0xfdd4,	// (0x0006a7b2) cell_graphic2_pane_t

0xd9d9,	// (0x000683b7) cell_graphic2_control_pane_t1

0xa6c7,	// (0x000650a5) signal_pane_g3_ParamLimits

0xa6c7,	// (0x000650a5) signal_pane_g3

0xa6db,	// (0x000650b9) signal_pane_g4_ParamLimits

0xa6db,	// (0x000650b9) signal_pane_g4

0xed90,	// (0x0006976e) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xed90,	// (0x0006976e) cell_ai5_widget_list_row_pane_t3

0x83f0,	// (0x00062dce) cell_ituss_key_pane_t1_ParamLimits

0x83f0,	// (0x00062dce) cell_ituss_key_pane_t1

0x246c,	// (0x0005ce4a) form_field_data_wide_pane_vc_t2_ParamLimits

0x246c,	// (0x0005ce4a) form_field_data_wide_pane_vc_t2

0x2480,	// (0x0005ce5e) form_field_data_wide_pane_vc_t3_ParamLimits

0x2480,	// (0x0005ce5e) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0006a1e7) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0006a1e7) form_field_data_wide_pane_vc_t

0x42c0,	// (0x0005ec9e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x42c0,	// (0x0005ec9e) form_field_slider_wide_pane_vc_t3

0x4396,	// (0x0005ed74) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4396,	// (0x0005ed74) form_field_popup_wide_pane_vc_t2

0x43ad,	// (0x0005ed8b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x43ad,	// (0x0005ed8b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x0006a488) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x0006a488) form_field_popup_wide_pane_vc_t

0xbcc6,	// (0x000666a4) aid_fshwr2_btn_pane_ParamLimits

0xbcda,	// (0x000666b8) aid_fshwr2_syb_pane_ParamLimits

0xbcee,	// (0x000666cc) aid_fshwr2_txt_pane_ParamLimits

0x1201,	// (0x0005bbdf) fshwr2_bg_pane_ParamLimits

0xbcfe,	// (0x000666dc) fshwr2_func_candi_pane_ParamLimits

0xbd20,	// (0x000666fe) fshwr2_hwr_syb_pane_ParamLimits

0xbd44,	// (0x00066722) fshwr2_icf_pane_ParamLimits

0x3b84,	// (0x0005e562) list_double_graphic_pane_vc_g4_ParamLimits

0x3b84,	// (0x0005e562) list_double_graphic_pane_vc_g4

0x1c4a,	// (0x0005c628) cell_ituss_key_pane_g3_ParamLimits

0x1c4a,	// (0x0005c628) cell_ituss_key_pane_g3

0x1cf2,	// (0x0005c6d0) cell_ituss_key_t5_ParamLimits

0x1cf2,	// (0x0005c6d0) cell_ituss_key_t5

0xedb5,	// (0x00069793) popup_fep_vkbss_window_ParamLimits

0xea34,	// (0x00069412) aid_cell_ai5_quarter

0xee64,	// (0x00069842) icf_edit_indi_pane_t1_ParamLimits

0x85fc,	// (0x00062fda) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x85fc,	// (0x00062fda) aid_tch_indicator_popup_pane_cp2

0x860f,	// (0x00062fed) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x860f,	// (0x00062fed) aid_tch_query_popup_data_pane_cp2

0x27a5,	// (0x0005d183) aid_tch_query_popup_pane_ParamLimits

0x27a5,	// (0x0005d183) aid_tch_query_popup_pane

0x27a5,	// (0x0005d183) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x27a5,	// (0x0005d183) aid_tch_query_popup_data_pane_cp1

0x7d3b,	// (0x00062719) cell_fshwr2_syb_bg_pane_ParamLimits

0xbe37,	// (0x00066815) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbe4b,	// (0x00066829) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeda6,	// (0x00069784) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

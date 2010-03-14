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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001edac };

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
0x9720,	// (0x000284cc) Screen

0x972c,	// (0x000284d8) application_window_ParamLimits

0x972c,	// (0x000284d8) application_window

0x21dc,	// (0x00020f88) screen_g1

0x9788,	// (0x00028534) area_bottom_pane_ParamLimits

0x9788,	// (0x00028534) area_bottom_pane

0x9848,	// (0x000285f4) area_top_pane_ParamLimits

0x9848,	// (0x000285f4) area_top_pane

0x98e6,	// (0x00028692) main_pane_ParamLimits

0x98e6,	// (0x00028692) main_pane

0x22cc,	// (0x00021078) misc_graphics

0xac90,	// (0x00029a3c) battery_pane_ParamLimits

0xac90,	// (0x00029a3c) battery_pane

0x6373,	// (0x0002511f) bg_status_flat_pane_g8

0x637b,	// (0x00025127) bg_status_flat_pane_g9

0x5a35,	// (0x000247e1) context_pane_ParamLimits

0x5a35,	// (0x000247e1) context_pane

0xadc4,	// (0x00029b70) navi_pane_ParamLimits

0xadc4,	// (0x00029b70) navi_pane

0xae31,	// (0x00029bdd) signal_pane_ParamLimits

0xae31,	// (0x00029bdd) signal_pane

0x0008,

0xf88a,	// (0x0002e636) bg_status_flat_pane_g

0xae96,	// (0x00029c42) status_pane_g1_ParamLimits

0xae96,	// (0x00029c42) status_pane_g1

0xaea2,	// (0x00029c4e) status_pane_g2_ParamLimits

0xaea2,	// (0x00029c4e) status_pane_g2

0x5a9a,	// (0x00024846) status_pane_g3_ParamLimits

0x5a9a,	// (0x00024846) status_pane_g3

0x0004,

0xf7b8,	// (0x0002e564) status_pane_g_ParamLimits

0xf7b8,	// (0x0002e564) status_pane_g

0xaeae,	// (0x00029c5a) title_pane_ParamLimits

0xaeae,	// (0x00029c5a) title_pane

0xaeeb,	// (0x00029c97) uni_indicator_pane_ParamLimits

0xaeeb,	// (0x00029c97) uni_indicator_pane

0x5860,	// (0x0002460c) bg_list_pane_ParamLimits

0x5860,	// (0x0002460c) bg_list_pane

0xed65,	// (0x0002db11) find_pane

0xa7a6,	// (0x00029552) listscroll_app_pane_ParamLimits

0xa7a6,	// (0x00029552) listscroll_app_pane

0x5880,	// (0x0002462c) listscroll_form_pane

0xed6d,	// (0x0002db19) listscroll_gen_pane_ParamLimits

0xed6d,	// (0x0002db19) listscroll_gen_pane

0x5880,	// (0x0002462c) listscroll_set_pane

0x9f35,	// (0x00028ce1) main_idle_act_pane

0x562c,	// (0x000243d8) main_idle_trad_pane

0x562c,	// (0x000243d8) main_list_empty_pane

0x4d6c,	// (0x00023b18) main_midp_pane

0x589a,	// (0x00024646) main_pane_g1_ParamLimits

0x589a,	// (0x00024646) main_pane_g1

0xa7b2,	// (0x0002955e) popup_ai_message_window_ParamLimits

0xa7b2,	// (0x0002955e) popup_ai_message_window

0xa830,	// (0x000295dc) popup_fep_china_uni_window_ParamLimits

0xa830,	// (0x000295dc) popup_fep_china_uni_window

0x58d0,	// (0x0002467c) popup_fep_japan_candidate_window_ParamLimits

0x58d0,	// (0x0002467c) popup_fep_japan_candidate_window

0x58f0,	// (0x0002469c) popup_fep_japan_predictive_window_ParamLimits

0x58f0,	// (0x0002469c) popup_fep_japan_predictive_window

0xa88c,	// (0x00029638) popup_find_window

0xa899,	// (0x00029645) popup_grid_graphic_window_ParamLimits

0xa899,	// (0x00029645) popup_grid_graphic_window

0x5920,	// (0x000246cc) popup_large_graphic_colour_window

0xa8c1,	// (0x0002966d) popup_menu_window_ParamLimits

0xa8c1,	// (0x0002966d) popup_menu_window

0xaa79,	// (0x00029825) popup_note_image_window

0xaa65,	// (0x00029811) popup_note_wait_window_ParamLimits

0xaa65,	// (0x00029811) popup_note_wait_window

0xaa65,	// (0x00029811) popup_note_window_ParamLimits

0xaa65,	// (0x00029811) popup_note_window

0xaacf,	// (0x0002987b) popup_query_code_window_ParamLimits

0xaacf,	// (0x0002987b) popup_query_code_window

0x5946,	// (0x000246f2) popup_query_data_code_window_ParamLimits

0x5946,	// (0x000246f2) popup_query_data_code_window

0xaae3,	// (0x0002988f) popup_query_data_window_ParamLimits

0xaae3,	// (0x0002988f) popup_query_data_window

0xaaff,	// (0x000298ab) popup_query_sat_info_window_ParamLimits

0xaaff,	// (0x000298ab) popup_query_sat_info_window

0xab38,	// (0x000298e4) popup_snote_single_graphic_window_ParamLimits

0xab38,	// (0x000298e4) popup_snote_single_graphic_window

0xab38,	// (0x000298e4) popup_snote_single_text_window_ParamLimits

0xab38,	// (0x000298e4) popup_snote_single_text_window

0x5963,	// (0x0002470f) popup_sub_window_general

0x59ab,	// (0x00024757) popup_window_general_ParamLimits

0x59ab,	// (0x00024757) popup_window_general

0x59c0,	// (0x0002476c) power_save_pane

0xa62f,	// (0x000293db) control_pane_g1_ParamLimits

0xa62f,	// (0x000293db) control_pane_g1

0xa656,	// (0x00029402) control_pane_g2_ParamLimits

0xa656,	// (0x00029402) control_pane_g2

0x583a,	// (0x000245e6) control_pane_g3_ParamLimits

0x583a,	// (0x000245e6) control_pane_g3

0x0007,

0xf7a0,	// (0x0002e54c) control_pane_g_ParamLimits

0xf7a0,	// (0x0002e54c) control_pane_g

0xa6c3,	// (0x0002946f) control_pane_t1_ParamLimits

0xa6c3,	// (0x0002946f) control_pane_t1

0xa70f,	// (0x000294bb) control_pane_t2_ParamLimits

0xa70f,	// (0x000294bb) control_pane_t2

0x0002,

0xf7b1,	// (0x0002e55d) control_pane_t_ParamLimits

0xf7b1,	// (0x0002e55d) control_pane_t

0x575b,	// (0x00024507) navi_navi_volume_pane_cp1

0x5764,	// (0x00024510) status_small_icon_pane

0x576c,	// (0x00024518) status_small_pane_g1_ParamLimits

0x576c,	// (0x00024518) status_small_pane_g1

0x57a0,	// (0x0002454c) status_small_pane_g2_ParamLimits

0x57a0,	// (0x0002454c) status_small_pane_g2

0x57ac,	// (0x00024558) status_small_pane_g3_ParamLimits

0x57ac,	// (0x00024558) status_small_pane_g3

0x57b8,	// (0x00024564) status_small_pane_g4_ParamLimits

0x57b8,	// (0x00024564) status_small_pane_g4

0x57c4,	// (0x00024570) status_small_pane_g5_ParamLimits

0x57c4,	// (0x00024570) status_small_pane_g5

0x57d3,	// (0x0002457f) status_small_pane_g6_ParamLimits

0x57d3,	// (0x0002457f) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002e53b) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002e53b) status_small_pane_g

0x5803,	// (0x000245af) status_small_pane_t1

0x5826,	// (0x000245d2) status_small_wait_pane_ParamLimits

0x5826,	// (0x000245d2) status_small_wait_pane

0xa256,	// (0x00029002) aid_levels_signal_ParamLimits

0xa256,	// (0x00029002) aid_levels_signal

0xa265,	// (0x00029011) signal_pane_g1_ParamLimits

0xa265,	// (0x00029011) signal_pane_g1

0xa27a,	// (0x00029026) signal_pane_g2_ParamLimits

0xa27a,	// (0x00029026) signal_pane_g2

0x0003,

0xf720,	// (0x0002e4cc) signal_pane_g_ParamLimits

0xf720,	// (0x0002e4cc) signal_pane_g

0x5192,	// (0x00023f3e) context_pane_g1

0x9b2b,	// (0x000288d7) title_pane_g1

0x9b55,	// (0x00028901) title_pane_t1

0x239d,	// (0x00021149) title_pane_t2

0x23c3,	// (0x0002116f) title_pane_t3

0x0002,

0xf56f,	// (0x0002e31b) title_pane_t

0xaf03,	// (0x00029caf) aid_levels_battery_ParamLimits

0xaf03,	// (0x00029caf) aid_levels_battery

0xaf14,	// (0x00029cc0) battery_pane_g1_ParamLimits

0xaf14,	// (0x00029cc0) battery_pane_g1

0xaf2a,	// (0x00029cd6) battery_pane_g2_ParamLimits

0xaf2a,	// (0x00029cd6) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002e56f) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002e56f) battery_pane_g

0x6bd6,	// (0x00025982) uni_indicator_pane_g1

0x6beb,	// (0x00025997) uni_indicator_pane_g2

0x6c01,	// (0x000259ad) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002e6de) uni_indicator_pane_g

0x549e,	// (0x0002424a) navi_icon_pane_ParamLimits

0x549e,	// (0x0002424a) navi_icon_pane

0x53e7,	// (0x00024193) navi_midp_pane

0x54ba,	// (0x00024266) navi_navi_pane

0x54c4,	// (0x00024270) navi_text_pane_ParamLimits

0x54c4,	// (0x00024270) navi_text_pane

0x21dc,	// (0x00020f88) status_small_wait_pane_g1

0x26aa,	// (0x00021456) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002e6d9) status_small_wait_pane_g

0x6922,	// (0x000256ce) navi_navi_icon_text_pane

0x693c,	// (0x000256e8) navi_navi_pane_g1_ParamLimits

0x693c,	// (0x000256e8) navi_navi_pane_g1

0x692a,	// (0x000256d6) navi_navi_pane_g2_ParamLimits

0x692a,	// (0x000256d6) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0002e6a7) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0002e6a7) navi_navi_pane_g

0x694e,	// (0x000256fa) navi_navi_tabs_pane

0x6957,	// (0x00025703) navi_navi_text_pane

0x6922,	// (0x000256ce) navi_navi_volume_pane

0x68fe,	// (0x000256aa) navi_text_pane_t1

0x68f2,	// (0x0002569e) navi_icon_pane_g1

0x6845,	// (0x000255f1) navi_navi_text_pane_t1

0xb3b4,	// (0x0002a160) navi_navi_volume_pane_g1

0xb3bc,	// (0x0002a168) volume_small_pane

0xb326,	// (0x0002a0d2) navi_navi_icon_text_pane_g1

0xb32e,	// (0x0002a0da) navi_navi_icon_text_pane_t1

0x54ba,	// (0x00024266) navi_tabs_2_long_pane

0x54ba,	// (0x00024266) navi_tabs_2_pane

0x54ba,	// (0x00024266) navi_tabs_3_long_pane

0x54ba,	// (0x00024266) navi_tabs_3_pane

0x54ba,	// (0x00024266) navi_tabs_4_pane

0xb306,	// (0x0002a0b2) tabs_2_active_pane_ParamLimits

0xb306,	// (0x0002a0b2) tabs_2_active_pane

0xb316,	// (0x0002a0c2) tabs_2_passive_pane_ParamLimits

0xb316,	// (0x0002a0c2) tabs_2_passive_pane

0xb2d4,	// (0x0002a080) tabs_3_active_pane_ParamLimits

0xb2d4,	// (0x0002a080) tabs_3_active_pane

0xb2e4,	// (0x0002a090) tabs_3_passive_pane_ParamLimits

0xb2e4,	// (0x0002a090) tabs_3_passive_pane

0xb2f5,	// (0x0002a0a1) tabs_3_passive_pane_cp_ParamLimits

0xb2f5,	// (0x0002a0a1) tabs_3_passive_pane_cp

0xb290,	// (0x0002a03c) tabs_4_active_pane_ParamLimits

0xb290,	// (0x0002a03c) tabs_4_active_pane

0xb2a1,	// (0x0002a04d) tabs_4_passive_pane_ParamLimits

0xb2a1,	// (0x0002a04d) tabs_4_passive_pane

0xb2b2,	// (0x0002a05e) tabs_4_passive_pane_cp_ParamLimits

0xb2b2,	// (0x0002a05e) tabs_4_passive_pane_cp

0xb2c3,	// (0x0002a06f) tabs_4_passive_pane_cp2_ParamLimits

0xb2c3,	// (0x0002a06f) tabs_4_passive_pane_cp2

0xb26c,	// (0x0002a018) tabs_2_long_active_pane_ParamLimits

0xb26c,	// (0x0002a018) tabs_2_long_active_pane

0xb27e,	// (0x0002a02a) tabs_2_long_passive_pane_ParamLimits

0xb27e,	// (0x0002a02a) tabs_2_long_passive_pane

0xb22d,	// (0x00029fd9) tabs_3_long_active_pane_ParamLimits

0xb22d,	// (0x00029fd9) tabs_3_long_active_pane

0xb240,	// (0x00029fec) tabs_3_long_passive_pane_ParamLimits

0xb240,	// (0x00029fec) tabs_3_long_passive_pane

0xb259,	// (0x0002a005) tabs_3_long_passive_pane_cp_ParamLimits

0xb259,	// (0x0002a005) tabs_3_long_passive_pane_cp

0xb1d3,	// (0x00029f7f) volume_small_pane_g1

0xb1dc,	// (0x00029f88) volume_small_pane_g2

0xb1e5,	// (0x00029f91) volume_small_pane_g3

0xb1ee,	// (0x00029f9a) volume_small_pane_g4

0xb1f7,	// (0x00029fa3) volume_small_pane_g5

0xb200,	// (0x00029fac) volume_small_pane_g6

0xb209,	// (0x00029fb5) volume_small_pane_g7

0xb212,	// (0x00029fbe) volume_small_pane_g8

0xb21b,	// (0x00029fc7) volume_small_pane_g9

0xb224,	// (0x00029fd0) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0002e673) volume_small_pane_g

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp2_ParamLimits

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp2

0x9bbd,	// (0x00028969) tabs_3_active_pane_g1

0x9bc5,	// (0x00028971) tabs_3_active_pane_t1

0x23e3,	// (0x0002118f) bg_passive_tab_pane_cp2_ParamLimits

0x23e3,	// (0x0002118f) bg_passive_tab_pane_cp2

0x9bbd,	// (0x00028969) tabs_3_passive_pane_g1

0x9bc5,	// (0x00028971) tabs_3_passive_pane_t1

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp3_ParamLimits

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp3

0x9bd7,	// (0x00028983) tabs_4_active_pane_g1

0x9bdf,	// (0x0002898b) tabs_4_active_pane_t1

0x23e3,	// (0x0002118f) bg_passive_tab_pane_cp3_ParamLimits

0x23e3,	// (0x0002118f) bg_passive_tab_pane_cp3

0x9bd7,	// (0x00028983) tabs_4_1_passive_pane_g1

0x9bdf,	// (0x0002898b) tabs_4_1_passive_pane_t1

0x4d6c,	// (0x00023b18) list_highlight_pane_cp2

0xb515,	// (0x0002a2c1) list_set_pane_ParamLimits

0xb515,	// (0x0002a2c1) list_set_pane

0xb5bb,	// (0x0002a367) main_pane_set_t1_ParamLimits

0xb5bb,	// (0x0002a367) main_pane_set_t1

0xb5db,	// (0x0002a387) main_pane_set_t2_ParamLimits

0xb5db,	// (0x0002a387) main_pane_set_t2

0xb5ef,	// (0x0002a39b) main_pane_set_t3_ParamLimits

0xb5ef,	// (0x0002a39b) main_pane_set_t3

0xb601,	// (0x0002a3ad) main_pane_set_t4_ParamLimits

0xb601,	// (0x0002a3ad) main_pane_set_t4

0x0003,

0xf997,	// (0x0002e743) main_pane_set_t_ParamLimits

0xf997,	// (0x0002e743) main_pane_set_t

0xb613,	// (0x0002a3bf) setting_code_pane

0xb61f,	// (0x0002a3cb) setting_slider_graphic_pane

0xb61f,	// (0x0002a3cb) setting_slider_pane

0xb61f,	// (0x0002a3cb) setting_text_pane

0xb61f,	// (0x0002a3cb) setting_volume_pane

0x9bf1,	// (0x0002899d) volume_set_pane

0x23e3,	// (0x0002118f) bg_set_opt_pane_cp

0x9bf9,	// (0x000289a5) setting_slider_pane_t1

0x9c12,	// (0x000289be) setting_slider_pane_t2

0x9c2c,	// (0x000289d8) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0002e322) setting_slider_pane_t

0x9c44,	// (0x000289f0) slider_set_pane

0x22cc,	// (0x00021078) bg_set_opt_pane_cp2

0x23f1,	// (0x0002119d) setting_slider_graphic_pane_g1

0x9c5a,	// (0x00028a06) setting_slider_graphic_pane_t1

0x9c6a,	// (0x00028a16) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0002e329) setting_slider_graphic_pane_t

0x9c7a,	// (0x00028a26) slider_set_pane_cp

0x22cc,	// (0x00021078) input_focus_pane_cp1

0x6de4,	// (0x00025b90) list_set_text_pane

0x21dc,	// (0x00020f88) setting_text_pane_g1

0x22cc,	// (0x00021078) input_focus_pane_cp2

0x21dc,	// (0x00020f88) setting_code_pane_g1

0x23fa,	// (0x000211a6) setting_code_pane_t1

0xd9ff,	// (0x0002c7ab) set_text_pane_t1_ParamLimits

0xd9ff,	// (0x0002c7ab) set_text_pane_t1

0x4c7b,	// (0x00023a27) set_opt_bg_pane_g1

0x4c83,	// (0x00023a2f) set_opt_bg_pane_g2

0x6dbe,	// (0x00025b6a) set_opt_bg_pane_g3

0x4c93,	// (0x00023a3f) set_opt_bg_pane_g4

0x4c9b,	// (0x00023a47) set_opt_bg_pane_g5

0x4ca3,	// (0x00023a4f) set_opt_bg_pane_g6

0x6dc8,	// (0x00025b74) set_opt_bg_pane_g7

0x6dd0,	// (0x00025b7c) set_opt_bg_pane_g8

0x6dda,	// (0x00025b86) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002e730) set_opt_bg_pane_g

0x6db1,	// (0x00025b5d) slider_set_pane_g1

0xb48a,	// (0x0002a236) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002e721) slider_set_pane_g

0xb401,	// (0x0002a1ad) volume_set_pane_g1

0xb409,	// (0x0002a1b5) volume_set_pane_g2

0xb411,	// (0x0002a1bd) volume_set_pane_g3

0xb419,	// (0x0002a1c5) volume_set_pane_g4

0xb421,	// (0x0002a1cd) volume_set_pane_g5

0xb429,	// (0x0002a1d5) volume_set_pane_g6

0xb431,	// (0x0002a1dd) volume_set_pane_g7

0xb439,	// (0x0002a1e5) volume_set_pane_g8

0xb441,	// (0x0002a1ed) volume_set_pane_g9

0xb449,	// (0x0002a1f5) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002e6f9) volume_set_pane_g

0x9c82,	// (0x00028a2e) indicator_pane_ParamLimits

0x9c82,	// (0x00028a2e) indicator_pane

0x9c8e,	// (0x00028a3a) main_idle_pane_g2_ParamLimits

0x9c8e,	// (0x00028a3a) main_idle_pane_g2

0x9cb6,	// (0x00028a62) main_pane_idle_g1_ParamLimits

0x9cb6,	// (0x00028a62) main_pane_idle_g1

0x2408,	// (0x000211b4) popup_clock_digital_analogue_window_ParamLimits

0x2408,	// (0x000211b4) popup_clock_digital_analogue_window

0x9cc3,	// (0x00028a6f) soft_indicator_pane_ParamLimits

0x9cc3,	// (0x00028a6f) soft_indicator_pane

0x9ccf,	// (0x00028a7b) wallpaper_pane_ParamLimits

0x9ccf,	// (0x00028a7b) wallpaper_pane

0x21dc,	// (0x00020f88) wallpaper_pane_g1

0x9cdb,	// (0x00028a87) indicator_pane_g1_ParamLimits

0x9cdb,	// (0x00028a87) indicator_pane_g1

0x6f3b,	// (0x00025ce7) navi_navi_icon_text_pane_srt_g1

0x2436,	// (0x000211e2) soft_indicator_pane_t1

0x2450,	// (0x000211fc) aid_ps_area_pane

0x9ce7,	// (0x00028a93) aid_ps_clock_pane

0x2461,	// (0x0002120d) aid_ps_indicator_pane

0x246d,	// (0x00021219) indicator_ps_pane_ParamLimits

0x246d,	// (0x00021219) indicator_ps_pane

0x247c,	// (0x00021228) power_save_pane_g1_ParamLimits

0x247c,	// (0x00021228) power_save_pane_g1

0x2488,	// (0x00021234) power_save_pane_g2_ParamLimits

0x2488,	// (0x00021234) power_save_pane_g2

0x973c,	// (0x000284e8) aid_navinavi_width_pane

0x2450,	// (0x000211fc) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0002e32e) power_save_pane_g_ParamLimits

0xf582,	// (0x0002e32e) power_save_pane_g

0x2496,	// (0x00021242) power_save_pane_t1_ParamLimits

0x2496,	// (0x00021242) power_save_pane_t1

0x9ce7,	// (0x00028a93) aid_ps_clock_pane_ParamLimits

0x2461,	// (0x0002120d) aid_ps_indicator_pane_ParamLimits

0x24a8,	// (0x00021254) power_save_pane_t4_ParamLimits

0x24a8,	// (0x00021254) power_save_pane_t4

0x0001,

0xf587,	// (0x0002e333) power_save_pane_t_ParamLimits

0xf587,	// (0x0002e333) power_save_pane_t

0x24d2,	// (0x0002127e) power_save_t3_ParamLimits

0x24d2,	// (0x0002127e) power_save_t3

0x24bd,	// (0x00021269) power_save_t2_ParamLimits

0x24bd,	// (0x00021269) power_save_t2

0x24e7,	// (0x00021293) indicator_ps_pane_g1

0x9cf5,	// (0x00028aa1) ai_gene_pane_ParamLimits

0x9cf5,	// (0x00028aa1) ai_gene_pane

0x9d01,	// (0x00028aad) ai_links_pane_ParamLimits

0x9d01,	// (0x00028aad) ai_links_pane

0x9d0d,	// (0x00028ab9) indicator_pane_cp1_ParamLimits

0x9d0d,	// (0x00028ab9) indicator_pane_cp1

0x9d19,	// (0x00028ac5) main_pane_idle_g1_cp_ParamLimits

0x9d19,	// (0x00028ac5) main_pane_idle_g1_cp

0x24f0,	// (0x0002129c) popup_ai_links_title_window

0x9d25,	// (0x00028ad1) soft_indicator_pane_cp1_ParamLimits

0x9d25,	// (0x00028ad1) soft_indicator_pane_cp1

0x6bc4,	// (0x00025970) ai_links_pane_g1

0x6bcd,	// (0x00025979) grid_ai_links_pane

0xb3e1,	// (0x0002a18d) ai_gene_pane_1

0x6bb2,	// (0x0002595e) ai_gene_pane_2

0x6bbb,	// (0x00025967) list_highlight_pane_cp4

0xb3c5,	// (0x0002a171) cell_ai_link_pane_ParamLimits

0xb3c5,	// (0x0002a171) cell_ai_link_pane

0x6baa,	// (0x00025956) cell_ai_link_pane_g1

0x26aa,	// (0x00021456) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002e6d4) cell_ai_link_pane_g

0x22cc,	// (0x00021078) grid_highlight_cp2

0x22cc,	// (0x00021078) bg_popup_sub_pane_cp1

0x2507,	// (0x000212b3) popup_ai_links_title_window_t1

0x6af8,	// (0x000258a4) ai_gene_pane_1_g1_ParamLimits

0x6af8,	// (0x000258a4) ai_gene_pane_1_g1

0x6b04,	// (0x000258b0) ai_gene_pane_1_g2_ParamLimits

0x6b04,	// (0x000258b0) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002e6ca) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002e6ca) ai_gene_pane_1_g

0x6b11,	// (0x000258bd) ai_gene_pane_1_t1_ParamLimits

0x6b11,	// (0x000258bd) ai_gene_pane_1_t1

0x6b45,	// (0x000258f1) grid_ai_soft_ind_pane

0x6ae3,	// (0x0002588f) ai_gene_pane_2_t1_ParamLimits

0x6ae3,	// (0x0002588f) ai_gene_pane_2_t1

0x9d31,	// (0x00028add) main_pane_empty_t1_ParamLimits

0x9d31,	// (0x00028add) main_pane_empty_t1

0x9d49,	// (0x00028af5) main_pane_empty_t2_ParamLimits

0x9d49,	// (0x00028af5) main_pane_empty_t2

0x9d5e,	// (0x00028b0a) main_pane_empty_t3_ParamLimits

0x9d5e,	// (0x00028b0a) main_pane_empty_t3

0x9d70,	// (0x00028b1c) main_pane_empty_t4_ParamLimits

0x9d70,	// (0x00028b1c) main_pane_empty_t4

0x9d82,	// (0x00028b2e) main_pane_empty_t5_ParamLimits

0x9d82,	// (0x00028b2e) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0002e338) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0002e338) main_pane_empty_t

0x4ccc,	// (0x00023a78) bg_popup_window_pane_ParamLimits

0x4ccc,	// (0x00023a78) bg_popup_window_pane

0x6853,	// (0x000255ff) find_popup_pane_cp2_ParamLimits

0x6853,	// (0x000255ff) find_popup_pane_cp2

0x685f,	// (0x0002560b) heading_pane_ParamLimits

0x685f,	// (0x0002560b) heading_pane

0x22cc,	// (0x00021078) bg_popup_sub_pane

0xb348,	// (0x0002a0f4) bg_popup_window_pane_g1_ParamLimits

0xb348,	// (0x0002a0f4) bg_popup_window_pane_g1

0xb354,	// (0x0002a100) bg_popup_window_pane_g2_ParamLimits

0xb354,	// (0x0002a100) bg_popup_window_pane_g2

0xb360,	// (0x0002a10c) bg_popup_window_pane_g3_ParamLimits

0xb360,	// (0x0002a10c) bg_popup_window_pane_g3

0xb36c,	// (0x0002a118) bg_popup_window_pane_g4_ParamLimits

0xb36c,	// (0x0002a118) bg_popup_window_pane_g4

0xb378,	// (0x0002a124) bg_popup_window_pane_g5_ParamLimits

0xb378,	// (0x0002a124) bg_popup_window_pane_g5

0xb384,	// (0x0002a130) bg_popup_window_pane_g6_ParamLimits

0xb384,	// (0x0002a130) bg_popup_window_pane_g6

0xb390,	// (0x0002a13c) bg_popup_window_pane_g7_ParamLimits

0xb390,	// (0x0002a13c) bg_popup_window_pane_g7

0xb39c,	// (0x0002a148) bg_popup_window_pane_g8_ParamLimits

0xb39c,	// (0x0002a148) bg_popup_window_pane_g8

0xb3a8,	// (0x0002a154) bg_popup_window_pane_g9_ParamLimits

0xb3a8,	// (0x0002a154) bg_popup_window_pane_g9

0x6839,	// (0x000255e5) bg_popup_window_pane_g10_ParamLimits

0x6839,	// (0x000255e5) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0002e692) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0002e692) bg_popup_window_pane_g

0x67f0,	// (0x0002559c) bg_popup_heading_pane_ParamLimits

0x67f0,	// (0x0002559c) bg_popup_heading_pane

0xb753,	// (0x0002a4ff) tabs_4_passive_pane_cp_srt_ParamLimits

0xb753,	// (0x0002a4ff) tabs_4_passive_pane_cp_srt

0xb765,	// (0x0002a511) tabs_4_passive_pane_srt_ParamLimits

0x6804,	// (0x000255b0) heading_pane_g2

0xb765,	// (0x0002a511) tabs_4_passive_pane_srt

0x4d6c,	// (0x00023b18) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d6c,	// (0x00023b18) bg_passive_tab_pane_cp3_srt

0x680c,	// (0x000255b8) heading_pane_t1_ParamLimits

0x680c,	// (0x000255b8) heading_pane_t1

0x6823,	// (0x000255cf) heading_pane_t2_ParamLimits

0x6823,	// (0x000255cf) heading_pane_t2

0x0001,

0xf8e1,	// (0x0002e68d) heading_pane_t_ParamLimits

0xf8e1,	// (0x0002e68d) heading_pane_t

0x633b,	// (0x000250e7) bg_popup_heading_pane_g1

0x63cc,	// (0x00025178) bg_popup_heading_pane_g2

0x63d6,	// (0x00025182) bg_popup_heading_pane_g3

0x63e0,	// (0x0002518c) bg_popup_heading_pane_g4

0x63ea,	// (0x00025196) bg_popup_heading_pane_g5

0x63f4,	// (0x000251a0) bg_popup_heading_pane_g6

0x63fc,	// (0x000251a8) bg_popup_heading_pane_g7

0x6404,	// (0x000251b0) bg_popup_heading_pane_g8

0x640e,	// (0x000251ba) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0002e649) bg_popup_heading_pane_g

0x5b90,	// (0x0002493c) bg_popup_sub_pane_g1

0x5b98,	// (0x00024944) bg_popup_sub_pane_g2

0x5ba0,	// (0x0002494c) bg_popup_sub_pane_g3

0x5ba8,	// (0x00024954) bg_popup_sub_pane_g4

0x5bb0,	// (0x0002495c) bg_popup_sub_pane_g5

0x5bb8,	// (0x00024964) bg_popup_sub_pane_g6

0x5bc0,	// (0x0002496c) bg_popup_sub_pane_g7

0x5bc8,	// (0x00024974) bg_popup_sub_pane_g8

0x5bd0,	// (0x0002497c) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002e623) bg_popup_sub_pane_g

0x23d5,	// (0x00021181) bg_popup_window_pane_cp5_ParamLimits

0x23d5,	// (0x00021181) bg_popup_window_pane_cp5

0x2524,	// (0x000212d0) popup_note_window_g1_ParamLimits

0x2524,	// (0x000212d0) popup_note_window_g1

0x2530,	// (0x000212dc) popup_note_window_t1_ParamLimits

0x2530,	// (0x000212dc) popup_note_window_t1

0x2546,	// (0x000212f2) popup_note_window_t2_ParamLimits

0x2546,	// (0x000212f2) popup_note_window_t2

0x255c,	// (0x00021308) popup_note_window_t3_ParamLimits

0x255c,	// (0x00021308) popup_note_window_t3

0x2572,	// (0x0002131e) popup_note_window_t4_ParamLimits

0x2572,	// (0x0002131e) popup_note_window_t4

0x259a,	// (0x00021346) popup_note_window_t5_ParamLimits

0x259a,	// (0x00021346) popup_note_window_t5

0x0004,

0xf597,	// (0x0002e343) popup_note_window_t_ParamLimits

0xf597,	// (0x0002e343) popup_note_window_t

0x25be,	// (0x0002136a) bg_popup_window_pane_cp6_ParamLimits

0x25be,	// (0x0002136a) bg_popup_window_pane_cp6

0x6269,	// (0x00025015) popup_note_image_window_g1_ParamLimits

0x6269,	// (0x00025015) popup_note_image_window_g1

0x6275,	// (0x00025021) popup_note_image_window_g2_ParamLimits

0x6275,	// (0x00025021) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0002e617) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0002e617) popup_note_image_window_g

0x628e,	// (0x0002503a) popup_note_image_window_t1_ParamLimits

0x628e,	// (0x0002503a) popup_note_image_window_t1

0x62f5,	// (0x000250a1) popup_note_image_window_t2_ParamLimits

0x62f5,	// (0x000250a1) popup_note_image_window_t2

0x630e,	// (0x000250ba) popup_note_image_window_t3_ParamLimits

0x630e,	// (0x000250ba) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0002e61c) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0002e61c) popup_note_image_window_t

0x6146,	// (0x00024ef2) bg_popup_window_pane_cp7_ParamLimits

0x6146,	// (0x00024ef2) bg_popup_window_pane_cp7

0x6176,	// (0x00024f22) popup_note_wait_window_g1_ParamLimits

0x6176,	// (0x00024f22) popup_note_wait_window_g1

0x6182,	// (0x00024f2e) popup_note_wait_window_g2_ParamLimits

0x6182,	// (0x00024f2e) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0002e605) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0002e605) popup_note_wait_window_g

0x619a,	// (0x00024f46) popup_note_wait_window_t1_ParamLimits

0x619a,	// (0x00024f46) popup_note_wait_window_t1

0x61c1,	// (0x00024f6d) popup_note_wait_window_t2_ParamLimits

0x61c1,	// (0x00024f6d) popup_note_wait_window_t2

0x61de,	// (0x00024f8a) popup_note_wait_window_t3_ParamLimits

0x61de,	// (0x00024f8a) popup_note_wait_window_t3

0x61f1,	// (0x00024f9d) popup_note_wait_window_t4_ParamLimits

0x61f1,	// (0x00024f9d) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0002e60c) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0002e60c) popup_note_wait_window_t

0x6216,	// (0x00024fc2) wait_bar_pane_ParamLimits

0x6216,	// (0x00024fc2) wait_bar_pane

0x22cc,	// (0x00021078) wait_anim_pane

0x22cc,	// (0x00021078) wait_border_pane

0x21dc,	// (0x00020f88) wait_anim_pane_g1

0x21dc,	// (0x00020f88) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x0002e4c7) wait_anim_pane_g

0x60ea,	// (0x00024e96) wait_border_pane_g1

0x60f5,	// (0x00024ea1) wait_border_pane_g2

0x60fe,	// (0x00024eaa) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002e5fe) wait_border_pane_g

0x5f55,	// (0x00024d01) bg_popup_window_pane_cp16_ParamLimits

0x5f55,	// (0x00024d01) bg_popup_window_pane_cp16

0x6055,	// (0x00024e01) indicator_popup_pane_cp4_ParamLimits

0x6055,	// (0x00024e01) indicator_popup_pane_cp4

0x6069,	// (0x00024e15) popup_query_data_window_t1_ParamLimits

0x6069,	// (0x00024e15) popup_query_data_window_t1

0x607b,	// (0x00024e27) popup_query_data_window_t2_ParamLimits

0x607b,	// (0x00024e27) popup_query_data_window_t2

0x6094,	// (0x00024e40) popup_query_data_window_t3_ParamLimits

0x6094,	// (0x00024e40) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0002e5f7) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0002e5f7) popup_query_data_window_t

0x60ae,	// (0x00024e5a) query_popup_data_pane_ParamLimits

0x60ae,	// (0x00024e5a) query_popup_data_pane

0x60c2,	// (0x00024e6e) query_popup_data_pane_cp1_ParamLimits

0x60c2,	// (0x00024e6e) query_popup_data_pane_cp1

0x5f55,	// (0x00024d01) bg_popup_window_pane_cp10_ParamLimits

0x5f55,	// (0x00024d01) bg_popup_window_pane_cp10

0x5f87,	// (0x00024d33) indicator_popup_pane_ParamLimits

0x5f87,	// (0x00024d33) indicator_popup_pane

0x5fa9,	// (0x00024d55) popup_query_code_window_t1_ParamLimits

0x5fa9,	// (0x00024d55) popup_query_code_window_t1

0x5fc3,	// (0x00024d6f) popup_query_code_window_t2_ParamLimits

0x5fc3,	// (0x00024d6f) popup_query_code_window_t2

0x600c,	// (0x00024db8) popup_query_code_window_t3_ParamLimits

0x600c,	// (0x00024db8) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002e5f0) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002e5f0) popup_query_code_window_t

0x603b,	// (0x00024de7) query_popup_pane_ParamLimits

0x603b,	// (0x00024de7) query_popup_pane

0x25be,	// (0x0002136a) bg_popup_window_pane_cp15_ParamLimits

0x25be,	// (0x0002136a) bg_popup_window_pane_cp15

0x25dc,	// (0x00021388) indicator_popup_pane_cp1_ParamLimits

0x25dc,	// (0x00021388) indicator_popup_pane_cp1

0x25ef,	// (0x0002139b) indicator_popup_pane_cp2_ParamLimits

0x25ef,	// (0x0002139b) indicator_popup_pane_cp2

0x2602,	// (0x000213ae) popup_query_data_code_window_g1_ParamLimits

0x2602,	// (0x000213ae) popup_query_data_code_window_g1

0x2615,	// (0x000213c1) popup_query_data_code_window_t1_ParamLimits

0x2615,	// (0x000213c1) popup_query_data_code_window_t1

0x2627,	// (0x000213d3) popup_query_data_code_window_t2_ParamLimits

0x2627,	// (0x000213d3) popup_query_data_code_window_t2

0x2639,	// (0x000213e5) popup_query_data_code_window_t3_ParamLimits

0x2639,	// (0x000213e5) popup_query_data_code_window_t3

0x264f,	// (0x000213fb) popup_query_data_code_window_t4_ParamLimits

0x264f,	// (0x000213fb) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0002e34e) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0002e34e) popup_query_data_code_window_t

0xaf95,	// (0x00029d41) list_single_midp_graphic_pane_g3

0x2667,	// (0x00021413) query_popup_data_pane_cp2_ParamLimits

0x267a,	// (0x00021426) query_popup_pane_cp2_ParamLimits

0x267a,	// (0x00021426) query_popup_pane_cp2

0x22cc,	// (0x00021078) bg_popup_window_pane_cp11

0x5f4d,	// (0x00024cf9) heading_pane_cp5

0x2708,	// (0x000214b4) listscroll_popup_info_pane

0x22cc,	// (0x00021078) input_focus_pane_cp3

0x268d,	// (0x00021439) query_popup_pane_t1

0x269b,	// (0x00021447) list_popup_info_pane_ParamLimits

0x269b,	// (0x00021447) list_popup_info_pane

0x26aa,	// (0x00021456) listscroll_popup_info_pane_g1

0x26b2,	// (0x0002145e) scroll_pane_cp7

0x26bc,	// (0x00021468) popup_info_list_pane_t1_ParamLimits

0x26bc,	// (0x00021468) popup_info_list_pane_t1

0x26d6,	// (0x00021482) popup_info_list_pane_t2_ParamLimits

0x26d6,	// (0x00021482) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0002e357) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0002e357) popup_info_list_pane_t

0x22cc,	// (0x00021078) bg_popup_window_pane_cp12

0x6f55,	// (0x00025d01) find_popup_pane

0x23e3,	// (0x0002118f) bg_popup_window_pane_cp3

0x26f0,	// (0x0002149c) heading_pane_cp3

0x26fc,	// (0x000214a8) listscroll_popup_graphic_pane

0x22cc,	// (0x00021078) bg_popup_window_pane_cp4

0x9de6,	// (0x00028b92) heading_pane_cp4

0x2708,	// (0x000214b4) listscroll_popup_colour_pane

0x9df0,	// (0x00028b9c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9df0,	// (0x00028b9c) cell_large_graphic_colour_none_popup_pane

0x9e04,	// (0x00028bb0) grid_large_graphic_colour_popup_pane_ParamLimits

0x9e04,	// (0x00028bb0) grid_large_graphic_colour_popup_pane

0x9e30,	// (0x00028bdc) listscroll_popup_colour_pane_g1_ParamLimits

0x9e30,	// (0x00028bdc) listscroll_popup_colour_pane_g1

0x9e47,	// (0x00028bf3) listscroll_popup_colour_pane_g2_ParamLimits

0x9e47,	// (0x00028bf3) listscroll_popup_colour_pane_g2

0x9e5e,	// (0x00028c0a) listscroll_popup_colour_pane_g3_ParamLimits

0x9e5e,	// (0x00028c0a) listscroll_popup_colour_pane_g3

0x9e6e,	// (0x00028c1a) listscroll_popup_colour_pane_g4_ParamLimits

0x9e6e,	// (0x00028c1a) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0002e35c) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0002e35c) listscroll_popup_colour_pane_g

0x2710,	// (0x000214bc) scroll_pane_cp6_ParamLimits

0x2710,	// (0x000214bc) scroll_pane_cp6

0x9e82,	// (0x00028c2e) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e82,	// (0x00028c2e) cell_large_graphic_colour_popup_pane

0x2722,	// (0x000214ce) cell_large_graphic_colour_none_popup_pane_t1

0x22cc,	// (0x00021078) grid_highlight_pane_cp5

0x2731,	// (0x000214dd) cell_large_graphic_colour_popup_pane_g1

0x2739,	// (0x000214e5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0002e365) cell_large_graphic_colour_popup_pane_g

0x2741,	// (0x000214ed) cell_large_graphic_colour_popup_pane_g2_copy1

0x274a,	// (0x000214f6) grid_highlight_pane_cp4

0x2752,	// (0x000214fe) bg_popup_window_pane_cp8_ParamLimits

0x2752,	// (0x000214fe) bg_popup_window_pane_cp8

0x276d,	// (0x00021519) popup_snote_single_text_window_g1_ParamLimits

0x276d,	// (0x00021519) popup_snote_single_text_window_g1

0x277f,	// (0x0002152b) popup_snote_single_text_window_t1_ParamLimits

0x277f,	// (0x0002152b) popup_snote_single_text_window_t1

0x2792,	// (0x0002153e) popup_snote_single_text_window_t2_ParamLimits

0x2792,	// (0x0002153e) popup_snote_single_text_window_t2

0x27a5,	// (0x00021551) popup_snote_single_text_window_t3_ParamLimits

0x27a5,	// (0x00021551) popup_snote_single_text_window_t3

0x27de,	// (0x0002158a) popup_snote_single_text_window_t4_ParamLimits

0x27de,	// (0x0002158a) popup_snote_single_text_window_t4

0x2812,	// (0x000215be) popup_snote_single_text_window_t5_ParamLimits

0x2812,	// (0x000215be) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0002e36a) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0002e36a) popup_snote_single_text_window_t

0x2841,	// (0x000215ed) bg_popup_window_pane_cp9_ParamLimits

0x2841,	// (0x000215ed) bg_popup_window_pane_cp9

0x276d,	// (0x00021519) popup_snote_single_graphic_window_g1_ParamLimits

0x276d,	// (0x00021519) popup_snote_single_graphic_window_g1

0x284f,	// (0x000215fb) popup_snote_single_graphic_window_g2_ParamLimits

0x284f,	// (0x000215fb) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0002e375) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0002e375) popup_snote_single_graphic_window_g

0x285b,	// (0x00021607) popup_snote_single_graphic_window_t1_ParamLimits

0x285b,	// (0x00021607) popup_snote_single_graphic_window_t1

0x286e,	// (0x0002161a) popup_snote_single_graphic_window_t2_ParamLimits

0x286e,	// (0x0002161a) popup_snote_single_graphic_window_t2

0x2881,	// (0x0002162d) popup_snote_single_graphic_window_t3_ParamLimits

0x2881,	// (0x0002162d) popup_snote_single_graphic_window_t3

0x28ba,	// (0x00021666) popup_snote_single_graphic_window_t4_ParamLimits

0x28ba,	// (0x00021666) popup_snote_single_graphic_window_t4

0x28ee,	// (0x0002169a) popup_snote_single_graphic_window_t5_ParamLimits

0x28ee,	// (0x0002169a) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0002e37a) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0002e37a) popup_snote_single_graphic_window_t

0x6edd,	// (0x00025c89) grid_graphic_popup_pane_ParamLimits

0x6edd,	// (0x00025c89) grid_graphic_popup_pane

0x6f05,	// (0x00025cb1) listscroll_popup_graphic_pane_g1_ParamLimits

0x6f05,	// (0x00025cb1) listscroll_popup_graphic_pane_g1

0xb71b,	// (0x0002a4c7) listscroll_popup_graphic_pane_g2_ParamLimits

0xb71b,	// (0x0002a4c7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002e76d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002e76d) listscroll_popup_graphic_pane_g

0x62e9,	// (0x00025095) scroll_pane_cp5

0xb6da,	// (0x0002a486) cell_graphic_popup_pane_ParamLimits

0xb6da,	// (0x0002a486) cell_graphic_popup_pane

0x6ea8,	// (0x00025c54) cell_graphic_popup_pane_g1

0x6eb0,	// (0x00025c5c) cell_graphic_popup_pane_g2

0x2741,	// (0x000214ed) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002e766) cell_graphic_popup_pane_g

0x6eb9,	// (0x00025c65) cell_graphic_popup_pane_t2

0x274a,	// (0x000214f6) grid_highlight_pane_cp3

0x292f,	// (0x000216db) list_gen_pane_ParamLimits

0x292f,	// (0x000216db) list_gen_pane

0x2957,	// (0x00021703) scroll_pane

0xb689,	// (0x0002a435) bg_list_pane_g1_ParamLimits

0xb689,	// (0x0002a435) bg_list_pane_g1

0x6e51,	// (0x00025bfd) bg_list_pane_g2_ParamLimits

0x6e51,	// (0x00025bfd) bg_list_pane_g2

0x6e66,	// (0x00025c12) bg_list_pane_g3_ParamLimits

0x6e66,	// (0x00025c12) bg_list_pane_g3

0x6e7a,	// (0x00025c26) bg_list_pane_g4_ParamLimits

0x6e7a,	// (0x00025c26) bg_list_pane_g4

0xb6a6,	// (0x0002a452) bg_list_pane_g5_ParamLimits

0xb6a6,	// (0x0002a452) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002e75b) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002e75b) bg_list_pane_g

0xb652,	// (0x0002a3fe) list_double2_graphic_large_graphic_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double2_graphic_large_graphic_pane

0xb652,	// (0x0002a3fe) list_double2_graphic_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double2_graphic_pane

0xb652,	// (0x0002a3fe) list_double2_large_graphic_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double2_large_graphic_pane

0xeeb4,	// (0x0002dc60) list_double2_pane_ParamLimits

0xeeb4,	// (0x0002dc60) list_double2_pane

0xb652,	// (0x0002a3fe) list_double_graphic_heading_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_graphic_heading_pane

0xb652,	// (0x0002a3fe) list_double_graphic_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_graphic_pane

0xb652,	// (0x0002a3fe) list_double_heading_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_heading_pane

0xb652,	// (0x0002a3fe) list_double_large_graphic_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_large_graphic_pane

0xb652,	// (0x0002a3fe) list_double_number_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_number_pane

0xb652,	// (0x0002a3fe) list_double_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_pane

0xb652,	// (0x0002a3fe) list_double_time_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_double_time_pane

0xb652,	// (0x0002a3fe) list_setting_number_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_setting_number_pane

0xb652,	// (0x0002a3fe) list_setting_pane_ParamLimits

0xb652,	// (0x0002a3fe) list_setting_pane

0xeeef,	// (0x0002dc9b) list_single_2graphic_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_2graphic_pane

0xeeef,	// (0x0002dc9b) list_single_graphic_heading_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_graphic_heading_pane

0xeeef,	// (0x0002dc9b) list_single_graphic_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_graphic_pane

0xeeef,	// (0x0002dc9b) list_single_heading_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_heading_pane

0xef4a,	// (0x0002dcf6) list_single_large_graphic_pane_ParamLimits

0xef4a,	// (0x0002dcf6) list_single_large_graphic_pane

0xeeef,	// (0x0002dc9b) list_single_number_heading_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_number_heading_pane

0xeeef,	// (0x0002dc9b) list_single_number_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_number_pane

0xeeef,	// (0x0002dc9b) list_single_pane_ParamLimits

0xeeef,	// (0x0002dc9b) list_single_pane

0x22cc,	// (0x00021078) list_highlight_pane_cp1

0xda26,	// (0x0002c7d2) list_single_pane_g1_ParamLimits

0xda26,	// (0x0002c7d2) list_single_pane_g1

0xda32,	// (0x0002c7de) list_single_pane_g2_ParamLimits

0xda32,	// (0x0002c7de) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0002e38c) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0002e38c) list_single_pane_g

0xee9e,	// (0x0002dc4a) list_single_pane_t1_ParamLimits

0xee9e,	// (0x0002dc4a) list_single_pane_t1

0xda26,	// (0x0002c7d2) list_single_number_pane_g1_ParamLimits

0xda26,	// (0x0002c7d2) list_single_number_pane_g1

0xda32,	// (0x0002c7de) list_single_number_pane_g2_ParamLimits

0xda32,	// (0x0002c7de) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0002e38c) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0002e38c) list_single_number_pane_g

0xee48,	// (0x0002dbf4) list_single_number_pane_t1_ParamLimits

0xee48,	// (0x0002dbf4) list_single_number_pane_t1

0xee5e,	// (0x0002dc0a) list_single_number_pane_t2_ParamLimits

0xee5e,	// (0x0002dc0a) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002e71c) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002e71c) list_single_number_pane_t

0xda1a,	// (0x0002c7c6) list_single_graphic_pane_g1_ParamLimits

0xda1a,	// (0x0002c7c6) list_single_graphic_pane_g1

0xda26,	// (0x0002c7d2) list_single_graphic_pane_g2_ParamLimits

0xda26,	// (0x0002c7d2) list_single_graphic_pane_g2

0xda32,	// (0x0002c7de) list_single_graphic_pane_g3_ParamLimits

0xda32,	// (0x0002c7de) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0002e385) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0002e385) list_single_graphic_pane_g

0xda3e,	// (0x0002c7ea) list_single_graphic_pane_t1_ParamLimits

0xda3e,	// (0x0002c7ea) list_single_graphic_pane_t1

0xda26,	// (0x0002c7d2) list_single_heading_pane_g1_ParamLimits

0xda26,	// (0x0002c7d2) list_single_heading_pane_g1

0xda32,	// (0x0002c7de) list_single_heading_pane_g2_ParamLimits

0xda32,	// (0x0002c7de) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0002e38c) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0002e38c) list_single_heading_pane_g

0xda54,	// (0x0002c800) list_single_heading_pane_t1_ParamLimits

0xda54,	// (0x0002c800) list_single_heading_pane_t1

0xda6a,	// (0x0002c816) list_single_heading_pane_t2_ParamLimits

0xda6a,	// (0x0002c816) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0002e391) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0002e391) list_single_heading_pane_t

0xda26,	// (0x0002c7d2) list_single_number_heading_pane_g1_ParamLimits

0xda26,	// (0x0002c7d2) list_single_number_heading_pane_g1

0xda32,	// (0x0002c7de) list_single_number_heading_pane_g2_ParamLimits

0xda32,	// (0x0002c7de) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0002e38c) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0002e38c) list_single_number_heading_pane_g

0xda54,	// (0x0002c800) list_single_number_heading_pane_t1_ParamLimits

0xda54,	// (0x0002c800) list_single_number_heading_pane_t1

0xda7c,	// (0x0002c828) list_single_number_heading_pane_t2_ParamLimits

0xda7c,	// (0x0002c828) list_single_number_heading_pane_t2

0xda8e,	// (0x0002c83a) list_single_number_heading_pane_t3_ParamLimits

0xda8e,	// (0x0002c83a) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0002e396) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0002e396) list_single_number_heading_pane_t

0xdaa0,	// (0x0002c84c) list_single_graphic_heading_pane_g1_ParamLimits

0xdaa0,	// (0x0002c84c) list_single_graphic_heading_pane_g1

0xdaac,	// (0x0002c858) list_single_graphic_heading_pane_g4_ParamLimits

0xdaac,	// (0x0002c858) list_single_graphic_heading_pane_g4

0xda32,	// (0x0002c7de) list_single_graphic_heading_pane_g5_ParamLimits

0xda32,	// (0x0002c7de) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0002e39d) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0002e39d) list_single_graphic_heading_pane_g

0xda54,	// (0x0002c800) list_single_graphic_heading_pane_t1_ParamLimits

0xda54,	// (0x0002c800) list_single_graphic_heading_pane_t1

0xdabd,	// (0x0002c869) list_single_graphic_heading_pane_t2_ParamLimits

0xdabd,	// (0x0002c869) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0002e3a4) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0002e3a4) list_single_graphic_heading_pane_t

0xdacf,	// (0x0002c87b) list_single_large_graphic_pane_g1_ParamLimits

0xdacf,	// (0x0002c87b) list_single_large_graphic_pane_g1

0xdadb,	// (0x0002c887) list_single_large_graphic_pane_g2_ParamLimits

0xdadb,	// (0x0002c887) list_single_large_graphic_pane_g2

0xdae7,	// (0x0002c893) list_single_large_graphic_pane_g3_ParamLimits

0xdae7,	// (0x0002c893) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0002e3a9) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0002e3a9) list_single_large_graphic_pane_g

0x60f5,	// (0x00024ea1) wait_border_pane_g2_copy1

0xdaf3,	// (0x0002c89f) list_single_large_graphic_pane_g4_cp2

0xdafb,	// (0x0002c8a7) list_single_large_graphic_pane_t1_ParamLimits

0xdafb,	// (0x0002c8a7) list_single_large_graphic_pane_t1

0xdb11,	// (0x0002c8bd) list_double_pane_g1_ParamLimits

0xdb11,	// (0x0002c8bd) list_double_pane_g1

0xdb1d,	// (0x0002c8c9) list_double_pane_g2_ParamLimits

0xdb1d,	// (0x0002c8c9) list_double_pane_g2

0x0001,

0xf604,	// (0x0002e3b0) list_double_pane_g_ParamLimits

0xf604,	// (0x0002e3b0) list_double_pane_g

0xdb29,	// (0x0002c8d5) list_double_pane_t1_ParamLimits

0xdb29,	// (0x0002c8d5) list_double_pane_t1

0xdb3f,	// (0x0002c8eb) list_double_pane_t2_ParamLimits

0xdb3f,	// (0x0002c8eb) list_double_pane_t2

0x0001,

0xf609,	// (0x0002e3b5) list_double_pane_t_ParamLimits

0xf609,	// (0x0002e3b5) list_double_pane_t

0xdb51,	// (0x0002c8fd) list_double2_pane_g1_ParamLimits

0xdb51,	// (0x0002c8fd) list_double2_pane_g1

0xdb62,	// (0x0002c90e) list_double2_pane_g2_ParamLimits

0xdb62,	// (0x0002c90e) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0002e3ba) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0002e3ba) list_double2_pane_g

0xdb6e,	// (0x0002c91a) list_double2_pane_t1_ParamLimits

0xdb6e,	// (0x0002c91a) list_double2_pane_t1

0xdb84,	// (0x0002c930) list_double2_pane_t2_ParamLimits

0xdb84,	// (0x0002c930) list_double2_pane_t2

0x0001,

0xf613,	// (0x0002e3bf) list_double2_pane_t_ParamLimits

0xf613,	// (0x0002e3bf) list_double2_pane_t

0xdb11,	// (0x0002c8bd) list_double_number_pane_g1_ParamLimits

0xdb11,	// (0x0002c8bd) list_double_number_pane_g1

0xdb1d,	// (0x0002c8c9) list_double_number_pane_g2_ParamLimits

0xdb1d,	// (0x0002c8c9) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0002e3b0) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0002e3b0) list_double_number_pane_g

0xdb96,	// (0x0002c942) list_double_number_pane_t1_ParamLimits

0xdb96,	// (0x0002c942) list_double_number_pane_t1

0xdba8,	// (0x0002c954) list_double_number_pane_t2_ParamLimits

0xdba8,	// (0x0002c954) list_double_number_pane_t2

0xdbbe,	// (0x0002c96a) list_double_number_pane_t3_ParamLimits

0xdbbe,	// (0x0002c96a) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0002e3c4) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0002e3c4) list_double_number_pane_t

0xdbd0,	// (0x0002c97c) list_double_graphic_pane_g1_ParamLimits

0xdbd0,	// (0x0002c97c) list_double_graphic_pane_g1

0xdbdc,	// (0x0002c988) list_double_graphic_pane_g2_ParamLimits

0xdbdc,	// (0x0002c988) list_double_graphic_pane_g2

0xdbeb,	// (0x0002c997) list_double_graphic_pane_g3_ParamLimits

0xdbeb,	// (0x0002c997) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0002e3cb) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0002e3cb) list_double_graphic_pane_g

0xdc03,	// (0x0002c9af) list_double_graphic_pane_t1_ParamLimits

0xdc03,	// (0x0002c9af) list_double_graphic_pane_t1

0xdc19,	// (0x0002c9c5) list_double_graphic_pane_t2_ParamLimits

0xdc19,	// (0x0002c9c5) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0002e3d4) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0002e3d4) list_double_graphic_pane_t

0xdc2b,	// (0x0002c9d7) list_double2_graphic_pane_g1_ParamLimits

0xdc2b,	// (0x0002c9d7) list_double2_graphic_pane_g1

0xdc37,	// (0x0002c9e3) list_double2_graphic_pane_g2_ParamLimits

0xdc37,	// (0x0002c9e3) list_double2_graphic_pane_g2

0xdc43,	// (0x0002c9ef) list_double2_graphic_pane_g3_ParamLimits

0xdc43,	// (0x0002c9ef) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0002e3d9) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0002e3d9) list_double2_graphic_pane_g

0xdc4f,	// (0x0002c9fb) list_double2_graphic_pane_t1_ParamLimits

0xdc4f,	// (0x0002c9fb) list_double2_graphic_pane_t1

0xdc65,	// (0x0002ca11) list_double2_graphic_pane_t2_ParamLimits

0xdc65,	// (0x0002ca11) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0002e3e0) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0002e3e0) list_double2_graphic_pane_t

0xdc77,	// (0x0002ca23) list_double_large_graphic_pane_g1_ParamLimits

0xdc77,	// (0x0002ca23) list_double_large_graphic_pane_g1

0xdca0,	// (0x0002ca4c) list_double_large_graphic_pane_g2_ParamLimits

0xdca0,	// (0x0002ca4c) list_double_large_graphic_pane_g2

0xdb1d,	// (0x0002c8c9) list_double_large_graphic_pane_g3_ParamLimits

0xdb1d,	// (0x0002c8c9) list_double_large_graphic_pane_g3

0xdcb1,	// (0x0002ca5d) list_double_large_graphic_pane_g4_ParamLimits

0xdcb1,	// (0x0002ca5d) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0002e3e5) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0002e3e5) list_double_large_graphic_pane_g

0xdcd6,	// (0x0002ca82) list_double_large_graphic_pane_t1_ParamLimits

0xdcd6,	// (0x0002ca82) list_double_large_graphic_pane_t1

0xdcef,	// (0x0002ca9b) list_double_large_graphic_pane_t2_ParamLimits

0xdcef,	// (0x0002ca9b) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0002e3f0) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0002e3f0) list_double_large_graphic_pane_t

0xdd01,	// (0x0002caad) list_double2_large_graphic_pane_g1_ParamLimits

0xdd01,	// (0x0002caad) list_double2_large_graphic_pane_g1

0xdd0d,	// (0x0002cab9) list_double2_large_graphic_pane_g2_ParamLimits

0xdd0d,	// (0x0002cab9) list_double2_large_graphic_pane_g2

0xdc43,	// (0x0002c9ef) list_double2_large_graphic_pane_g3_ParamLimits

0xdc43,	// (0x0002c9ef) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0002e3f5) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0002e3f5) list_double2_large_graphic_pane_g

0xdd1e,	// (0x0002caca) list_double2_large_graphic_pane_t1_ParamLimits

0xdd1e,	// (0x0002caca) list_double2_large_graphic_pane_t1

0xdd34,	// (0x0002cae0) list_double2_large_graphic_pane_t2_ParamLimits

0xdd34,	// (0x0002cae0) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0002e3fc) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0002e3fc) list_double2_large_graphic_pane_t

0xdd46,	// (0x0002caf2) list_double_heading_pane_g1_ParamLimits

0xdd46,	// (0x0002caf2) list_double_heading_pane_g1

0xdd57,	// (0x0002cb03) list_double_heading_pane_g2_ParamLimits

0xdd57,	// (0x0002cb03) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0002e401) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0002e401) list_double_heading_pane_g

0xdd63,	// (0x0002cb0f) list_double_heading_pane_t1_ParamLimits

0xdd63,	// (0x0002cb0f) list_double_heading_pane_t1

0xdd79,	// (0x0002cb25) list_double_heading_pane_t2_ParamLimits

0xdd79,	// (0x0002cb25) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0002e406) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0002e406) list_double_heading_pane_t

0xdc2b,	// (0x0002c9d7) list_double_graphic_heading_pane_g1_ParamLimits

0xdc2b,	// (0x0002c9d7) list_double_graphic_heading_pane_g1

0xdd46,	// (0x0002caf2) list_double_graphic_heading_pane_g2_ParamLimits

0xdd46,	// (0x0002caf2) list_double_graphic_heading_pane_g2

0xdd57,	// (0x0002cb03) list_double_graphic_heading_pane_g3_ParamLimits

0xdd57,	// (0x0002cb03) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0002e40b) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0002e40b) list_double_graphic_heading_pane_g

0xdd8b,	// (0x0002cb37) list_double_graphic_heading_pane_t1_ParamLimits

0xdd8b,	// (0x0002cb37) list_double_graphic_heading_pane_t1

0xdc65,	// (0x0002ca11) list_double_graphic_heading_pane_t2_ParamLimits

0xdc65,	// (0x0002ca11) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0002e412) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0002e412) list_double_graphic_heading_pane_t

0xdca0,	// (0x0002ca4c) list_double_time_pane_g1_ParamLimits

0xdca0,	// (0x0002ca4c) list_double_time_pane_g1

0xdb1d,	// (0x0002c8c9) list_double_time_pane_g2_ParamLimits

0xdb1d,	// (0x0002c8c9) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0002e417) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0002e417) list_double_time_pane_g

0xdda1,	// (0x0002cb4d) list_double_time_pane_t1_ParamLimits

0xdda1,	// (0x0002cb4d) list_double_time_pane_t1

0xddb7,	// (0x0002cb63) list_double_time_pane_t2_ParamLimits

0xddb7,	// (0x0002cb63) list_double_time_pane_t2

0xddc9,	// (0x0002cb75) list_double_time_pane_t3_ParamLimits

0xddc9,	// (0x0002cb75) list_double_time_pane_t3

0xdddb,	// (0x0002cb87) list_double_time_pane_t4_ParamLimits

0xdddb,	// (0x0002cb87) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0002e41c) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0002e41c) list_double_time_pane_t

0xdc37,	// (0x0002c9e3) list_setting_pane_g1_ParamLimits

0xdc37,	// (0x0002c9e3) list_setting_pane_g1

0xdc43,	// (0x0002c9ef) list_setting_pane_g2_ParamLimits

0xdc43,	// (0x0002c9ef) list_setting_pane_g2

0x0001,

0xf679,	// (0x0002e425) list_setting_pane_g_ParamLimits

0xf679,	// (0x0002e425) list_setting_pane_g

0xdded,	// (0x0002cb99) list_setting_pane_t1_ParamLimits

0xdded,	// (0x0002cb99) list_setting_pane_t1

0xde07,	// (0x0002cbb3) list_setting_pane_t2_ParamLimits

0xde07,	// (0x0002cbb3) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0002e42a) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0002e42a) list_setting_pane_t

0xde46,	// (0x0002cbf2) set_value_pane_cp_ParamLimits

0xde46,	// (0x0002cbf2) set_value_pane_cp

0xde52,	// (0x0002cbfe) list_setting_number_pane_g1_ParamLimits

0xde52,	// (0x0002cbfe) list_setting_number_pane_g1

0xde5e,	// (0x0002cc0a) list_setting_number_pane_g2_ParamLimits

0xde5e,	// (0x0002cc0a) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x0002e431) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x0002e431) list_setting_number_pane_g

0xde6a,	// (0x0002cc16) list_setting_number_pane_t1_ParamLimits

0xde6a,	// (0x0002cc16) list_setting_number_pane_t1

0xea16,	// (0x0002d7c2) list_setting_number_pane_t2_ParamLimits

0xea16,	// (0x0002d7c2) list_setting_number_pane_t2

0xea30,	// (0x0002d7dc) list_setting_number_pane_t3_ParamLimits

0xea30,	// (0x0002d7dc) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x0002e436) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x0002e436) list_setting_number_pane_t

0xde46,	// (0x0002cbf2) set_value_pane_ParamLimits

0xde46,	// (0x0002cbf2) set_value_pane

0x4bbb,	// (0x00023967) bg_set_opt_pane_ParamLimits

0x4bbb,	// (0x00023967) bg_set_opt_pane

0xea73,	// (0x0002d81f) set_value_pane_t1

0x4bdc,	// (0x00023988) slider_set_pane_cp3

0x4be5,	// (0x00023991) volume_small_pane_cp

0x4bee,	// (0x0002399a) list_form_gen_pane

0x4bf7,	// (0x000239a3) scroll_pane_cp8

0xea89,	// (0x0002d835) form_field_data_pane_ParamLimits

0xea89,	// (0x0002d835) form_field_data_pane

0xeaa9,	// (0x0002d855) form_field_data_wide_pane_ParamLimits

0xeaa9,	// (0x0002d855) form_field_data_wide_pane

0xeaca,	// (0x0002d876) form_field_popup_pane_ParamLimits

0xeaca,	// (0x0002d876) form_field_popup_pane

0xeaea,	// (0x0002d896) form_field_popup_wide_pane_ParamLimits

0xeaea,	// (0x0002d896) form_field_popup_wide_pane

0xeb07,	// (0x0002d8b3) form_field_slider_pane_ParamLimits

0xeb07,	// (0x0002d8b3) form_field_slider_pane

0xeb1a,	// (0x0002d8c6) form_field_slider_wide_pane_ParamLimits

0xeb1a,	// (0x0002d8c6) form_field_slider_wide_pane

0x4c08,	// (0x000239b4) data_form_pane

0xeb37,	// (0x0002d8e3) form_field_data_pane_t1

0x4c14,	// (0x000239c0) input_focus_pane

0x4c22,	// (0x000239ce) data_form_wide_pane

0xeb5b,	// (0x0002d907) form_field_data_wide_pane_t1

0x275f,	// (0x0002150b) input_focus_pane_cp6

0xeb7d,	// (0x0002d929) form_field_popup_pane_t1

0x4c14,	// (0x000239c0) input_focus_pane_cp7

0x4c4e,	// (0x000239fa) list_form_pane

0xeb9d,	// (0x0002d949) form_field_popup_wide_pane_t1

0x4c14,	// (0x000239c0) input_focus_pane_cp8

0x4c5a,	// (0x00023a06) list_form_wide_pane

0xebba,	// (0x0002d966) form_field_slider_pane_t1_ParamLimits

0xebba,	// (0x0002d966) form_field_slider_pane_t1

0xebd0,	// (0x0002d97c) form_field_slider_pane_t2_ParamLimits

0xebd0,	// (0x0002d97c) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x0002e446) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x0002e446) form_field_slider_pane_t

0x23d5,	// (0x00021181) input_focus_pane_cp9_ParamLimits

0x23d5,	// (0x00021181) input_focus_pane_cp9

0xebe5,	// (0x0002d991) slider_cont_pane_ParamLimits

0xebe5,	// (0x0002d991) slider_cont_pane

0x4c69,	// (0x00023a15) form_field_slider_wide_pane_t1_ParamLimits

0x4c69,	// (0x00023a15) form_field_slider_wide_pane_t1

0xebf9,	// (0x0002d9a5) form_field_slider_wide_pane_t2_ParamLimits

0xebf9,	// (0x0002d9a5) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x0002e44b) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x0002e44b) form_field_slider_wide_pane_t

0x23d5,	// (0x00021181) input_focus_pane_cp10_ParamLimits

0x23d5,	// (0x00021181) input_focus_pane_cp10

0xec0b,	// (0x0002d9b7) slider_cont_pane_cp1_ParamLimits

0xec0b,	// (0x0002d9b7) slider_cont_pane_cp1

0xec1f,	// (0x0002d9cb) slider_form_pane_cp

0x4c7b,	// (0x00023a27) input_focus_pane_g1

0x4c83,	// (0x00023a2f) input_focus_pane_g2

0x4c8b,	// (0x00023a37) input_focus_pane_g3

0x4c93,	// (0x00023a3f) input_focus_pane_g4

0x4c9b,	// (0x00023a47) input_focus_pane_g5

0x4ca3,	// (0x00023a4f) input_focus_pane_g6

0x4cab,	// (0x00023a57) input_focus_pane_g7

0x4cb3,	// (0x00023a5f) input_focus_pane_g8

0x4cbb,	// (0x00023a67) input_focus_pane_g9

0x21dc,	// (0x00020f88) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x0002e450) input_focus_pane_g

0x60fe,	// (0x00024eaa) wait_border_pane_g3_copy1

0xec27,	// (0x0002d9d3) data_form_pane_t1

0x21dc,	// (0x00020f88) wait_anim_pane_g1_copy1

0xee70,	// (0x0002dc1c) data_form_wide_pane_t1

0xec42,	// (0x0002d9ee) list_form_graphic_pane_cp_ParamLimits

0xec42,	// (0x0002d9ee) list_form_graphic_pane_cp

0x6dec,	// (0x00025b98) slider_form_pane_g1

0x6df5,	// (0x00025ba1) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002e74c) slider_form_pane_g

0xec5b,	// (0x0002da07) list_form_graphic_pane_ParamLimits

0xec5b,	// (0x0002da07) list_form_graphic_pane

0xec77,	// (0x0002da23) list_form_graphic_pane_g1

0xec7f,	// (0x0002da2b) list_form_graphic_pane_t1_ParamLimits

0xec7f,	// (0x0002da2b) list_form_graphic_pane_t1

0x23e3,	// (0x0002118f) list_highlight_pane_cp5_ParamLimits

0x23e3,	// (0x0002118f) list_highlight_pane_cp5

0xec94,	// (0x0002da40) find_pane_g1

0x4cc3,	// (0x00023a6f) input_find_pane

0xec9d,	// (0x0002da49) input_find_pane_g1_ParamLimits

0xec9d,	// (0x0002da49) input_find_pane_g1

0xeca9,	// (0x0002da55) input_find_pane_t1_ParamLimits

0xeca9,	// (0x0002da55) input_find_pane_t1

0xecbe,	// (0x0002da6a) input_find_pane_t2_ParamLimits

0xecbe,	// (0x0002da6a) input_find_pane_t2

0x0001,

0xf6b9,	// (0x0002e465) input_find_pane_t_ParamLimits

0xf6b9,	// (0x0002e465) input_find_pane_t

0x4ccc,	// (0x00023a78) input_focus_pane_cp5_ParamLimits

0x4ccc,	// (0x00023a78) input_focus_pane_cp5

0x9eb7,	// (0x00028c63) bg_popup_window_pane_cp2_ParamLimits

0x9eb7,	// (0x00028c63) bg_popup_window_pane_cp2

0x9ec4,	// (0x00028c70) listscroll_menu_pane_ParamLimits

0x9ec4,	// (0x00028c70) listscroll_menu_pane

0x9ed0,	// (0x00028c7c) popup_submenu_window_ParamLimits

0x9ed0,	// (0x00028c7c) popup_submenu_window

0x4cda,	// (0x00023a86) find_popup_pane_g1

0x4ce2,	// (0x00023a8e) input_popup_find_pane_cp

0x4ccc,	// (0x00023a78) input_focus_pane_cp4_ParamLimits

0x4ccc,	// (0x00023a78) input_focus_pane_cp4

0x4cec,	// (0x00023a98) input_popup_find_pane_t1_ParamLimits

0x4cec,	// (0x00023a98) input_popup_find_pane_t1

0x22cc,	// (0x00021078) bg_popup_sub_pane_cp

0x4d1a,	// (0x00023ac6) listscroll_popup_sub_pane

0x4d22,	// (0x00023ace) list_submenu_pane_ParamLimits

0x4d22,	// (0x00023ace) list_submenu_pane

0x4d33,	// (0x00023adf) scroll_pane_cp4

0x4d3b,	// (0x00023ae7) list_single_popup_submenu_pane_ParamLimits

0x4d3b,	// (0x00023ae7) list_single_popup_submenu_pane

0x4d4f,	// (0x00023afb) list_single_popup_submenu_pane_g1

0x4d57,	// (0x00023b03) list_single_popup_submenu_pane_t1_ParamLimits

0x4d57,	// (0x00023b03) list_single_popup_submenu_pane_t1

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp1_ParamLimits

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp1

0x9f08,	// (0x00028cb4) tabs_2_active_pane_g1

0x9f10,	// (0x00028cbc) tabs_2_active_pane_t1

0x23e3,	// (0x0002118f) bg_passive_tab_pane_cp1_ParamLimits

0x23e3,	// (0x0002118f) bg_passive_tab_pane_cp1

0x9f08,	// (0x00028cb4) tabs_2_passive_pane_g1

0x9f10,	// (0x00028cbc) tabs_2_passive_pane_t1

0x62a7,	// (0x00025053) bg_active_tab_pane_cp4

0x9f22,	// (0x00028cce) tabs_2_long_active_pane_t1

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp4

0xaf9d,	// (0x00029d49) list_single_midp_graphic_pane_g4_ParamLimits

0x62a7,	// (0x00025053) bg_active_tab_pane_cp5

0x9f41,	// (0x00028ced) tabs_3_long_active_pane_t1

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp5

0xaf9d,	// (0x00029d49) list_single_midp_graphic_pane_g4

0x23e3,	// (0x0002118f) bg_popup_window_pane_cp13_ParamLimits

0x23e3,	// (0x0002118f) bg_popup_window_pane_cp13

0x4d81,	// (0x00023b2d) listscroll_popup_fast_pane_ParamLimits

0x4d81,	// (0x00023b2d) listscroll_popup_fast_pane

0x4d90,	// (0x00023b3c) grid_popup_fast_pane_ParamLimits

0x4d90,	// (0x00023b3c) grid_popup_fast_pane

0x4da2,	// (0x00023b4e) scroll_pane_cp9_ParamLimits

0x4da2,	// (0x00023b4e) scroll_pane_cp9

0x80b2,	// (0x00026e5e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x80b2,	// (0x00026e5e) list_single_graphic_hl_pane_t1_cp2

0x4dc6,	// (0x00023b72) input_focus_pane_cp20_ParamLimits

0x4dc6,	// (0x00023b72) input_focus_pane_cp20

0x4dd4,	// (0x00023b80) query_popup_data_pane_t1_ParamLimits

0x4dd4,	// (0x00023b80) query_popup_data_pane_t1

0x4de7,	// (0x00023b93) query_popup_data_pane_t2_ParamLimits

0x4de7,	// (0x00023b93) query_popup_data_pane_t2

0x4e2d,	// (0x00023bd9) query_popup_data_pane_t3_ParamLimits

0x4e2d,	// (0x00023bd9) query_popup_data_pane_t3

0x4e6e,	// (0x00023c1a) query_popup_data_pane_t4_ParamLimits

0x4e6e,	// (0x00023c1a) query_popup_data_pane_t4

0x4eaa,	// (0x00023c56) query_popup_data_pane_t5_ParamLimits

0x4eaa,	// (0x00023c56) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x0002e46a) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x0002e46a) query_popup_data_pane_t

0x4c7b,	// (0x00023a27) bg_set_opt_pane_g1

0x4c83,	// (0x00023a2f) bg_set_opt_pane_g2

0x4c8b,	// (0x00023a37) bg_set_opt_pane_g3

0x4c93,	// (0x00023a3f) bg_set_opt_pane_g4

0x4c9b,	// (0x00023a47) bg_set_opt_pane_g5

0x4ca3,	// (0x00023a4f) bg_set_opt_pane_g6

0x4cab,	// (0x00023a57) bg_set_opt_pane_g7

0x4cb3,	// (0x00023a5f) bg_set_opt_pane_g8

0x4cbb,	// (0x00023a67) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x0002e475) bg_set_opt_pane_g

0xa349,	// (0x000290f5) control_top_pane_stacon_ParamLimits

0xa349,	// (0x000290f5) control_top_pane_stacon

0xa39c,	// (0x00029148) signal_pane_stacon_ParamLimits

0xa39c,	// (0x00029148) signal_pane_stacon

0x5312,	// (0x000240be) stacon_top_pane_g1_ParamLimits

0x5312,	// (0x000240be) stacon_top_pane_g1

0xa3c1,	// (0x0002916d) title_pane_stacon_ParamLimits

0xa3c1,	// (0x0002916d) title_pane_stacon

0xa3eb,	// (0x00029197) uni_indicator_pane_stacon_ParamLimits

0xa3eb,	// (0x00029197) uni_indicator_pane_stacon

0xa400,	// (0x000291ac) battery_pane_stacon_ParamLimits

0xa400,	// (0x000291ac) battery_pane_stacon

0xa444,	// (0x000291f0) control_bottom_pane_stacon_ParamLimits

0xa444,	// (0x000291f0) control_bottom_pane_stacon

0xa467,	// (0x00029213) navi_pane_stacon_ParamLimits

0xa467,	// (0x00029213) navi_pane_stacon

0x5334,	// (0x000240e0) stacon_bottom_pane_g1_ParamLimits

0x5334,	// (0x000240e0) stacon_bottom_pane_g1

0x9f53,	// (0x00028cff) aid_levels_signal_lsc_ParamLimits

0x9f53,	// (0x00028cff) aid_levels_signal_lsc

0x9f6a,	// (0x00028d16) signal_pane_stacon_g1_ParamLimits

0x9f6a,	// (0x00028d16) signal_pane_stacon_g1

0x9f7e,	// (0x00028d2a) signal_pane_stacon_g2_ParamLimits

0x9f7e,	// (0x00028d2a) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x0002e488) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0002e488) signal_pane_stacon_g

0x9fb3,	// (0x00028d5f) title_pane_stacon_t1_ParamLimits

0x9fb3,	// (0x00028d5f) title_pane_stacon_t1

0x4f02,	// (0x00023cae) uni_indicator_pane_stacon_g1

0x4f0c,	// (0x00023cb8) uni_indicator_pane_stacon_g2

0x4eee,	// (0x00023c9a) uni_indicator_pane_stacon_g3

0x4ef8,	// (0x00023ca4) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x0002e494) uni_indicator_pane_stacon_g

0x9fd8,	// (0x00028d84) control_top_pane_stacon_g1

0x9fe0,	// (0x00028d8c) control_top_pane_stacon_t1_ParamLimits

0x9fe0,	// (0x00028d8c) control_top_pane_stacon_t1

0xa017,	// (0x00028dc3) aid_levels_battery_lsc_ParamLimits

0xa017,	// (0x00028dc3) aid_levels_battery_lsc

0xa02f,	// (0x00028ddb) battery_pane_stacon_g1_ParamLimits

0xa02f,	// (0x00028ddb) battery_pane_stacon_g1

0xa042,	// (0x00028dee) battery_pane_stacon_g2_ParamLimits

0xa042,	// (0x00028dee) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x0002e49d) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x0002e49d) battery_pane_stacon_g

0xa080,	// (0x00028e2c) navi_icon_pane_stacon

0xa094,	// (0x00028e40) navi_navi_pane_stacon

0xa080,	// (0x00028e2c) navi_text_pane_stacon

0x9fd8,	// (0x00028d84) control_bottom_pane_stacon_g1

0xa0a8,	// (0x00028e54) control_bottom_pane_stacon_t1_ParamLimits

0xa0a8,	// (0x00028e54) control_bottom_pane_stacon_t1

0xa0df,	// (0x00028e8b) grid_app_pane_ParamLimits

0xa0df,	// (0x00028e8b) grid_app_pane

0xa103,	// (0x00028eaf) scroll_pane_cp15_ParamLimits

0xa103,	// (0x00028eaf) scroll_pane_cp15

0xa118,	// (0x00028ec4) cell_app_pane_ParamLimits

0xa118,	// (0x00028ec4) cell_app_pane

0xa13c,	// (0x00028ee8) cell_app_pane_g1_ParamLimits

0xa13c,	// (0x00028ee8) cell_app_pane_g1

0x4f30,	// (0x00023cdc) cell_app_pane_g2_ParamLimits

0x4f30,	// (0x00023cdc) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x0002e4a2) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x0002e4a2) cell_app_pane_g

0xa15c,	// (0x00028f08) cell_app_pane_t1_ParamLimits

0xa15c,	// (0x00028f08) cell_app_pane_t1

0x4f3c,	// (0x00023ce8) grid_highlight_pane_ParamLimits

0x4f3c,	// (0x00023ce8) grid_highlight_pane

0x4c7b,	// (0x00023a27) cell_highlight_pane_g1

0x4c83,	// (0x00023a2f) cell_highlight_pane_g2

0x4c8b,	// (0x00023a37) cell_highlight_pane_g3

0x4c93,	// (0x00023a3f) cell_highlight_pane_g4

0x4c9b,	// (0x00023a47) cell_highlight_pane_g5

0x4ca3,	// (0x00023a4f) cell_highlight_pane_g6

0x4cab,	// (0x00023a57) cell_highlight_pane_g7

0x4cb3,	// (0x00023a5f) cell_highlight_pane_g8

0x4cbb,	// (0x00023a67) cell_highlight_pane_g9

0x21dc,	// (0x00020f88) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x0002e450) cell_highlight_pane_g

0x4f4d,	// (0x00023cf9) bg_scroll_pane

0xa186,	// (0x00028f32) scroll_handle_pane

0x4f94,	// (0x00023d40) scroll_bg_pane_g1

0x4fa9,	// (0x00023d55) scroll_bg_pane_g2

0x4fc1,	// (0x00023d6d) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x0002e4a7) scroll_bg_pane_g

0x4fd6,	// (0x00023d82) scroll_handle_focus_pane_ParamLimits

0x4fd6,	// (0x00023d82) scroll_handle_focus_pane

0x4f94,	// (0x00023d40) scroll_handle_pane_g1

0x4fe3,	// (0x00023d8f) scroll_handle_pane_g2

0x4fc1,	// (0x00023d6d) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x0002e4ae) scroll_handle_pane_g

0x4ccc,	// (0x00023a78) bg_popup_sub_pane_cp21_ParamLimits

0x4ccc,	// (0x00023a78) bg_popup_sub_pane_cp21

0x4ff7,	// (0x00023da3) popup_fep_japan_predictive_window_t1_ParamLimits

0x4ff7,	// (0x00023da3) popup_fep_japan_predictive_window_t1

0x5011,	// (0x00023dbd) popup_fep_japan_predictive_window_t2_ParamLimits

0x5011,	// (0x00023dbd) popup_fep_japan_predictive_window_t2

0x5044,	// (0x00023df0) popup_fep_japan_predictive_window_t3_ParamLimits

0x5044,	// (0x00023df0) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x0002e4b5) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x0002e4b5) popup_fep_japan_predictive_window_t

0x22cc,	// (0x00021078) bg_popup_sub_pane_cp23

0x507b,	// (0x00023e27) listscroll_japin_cand_pane

0x5083,	// (0x00023e2f) popup_fep_japan_candidate_window_t1

0x5091,	// (0x00023e3d) candidate_pane_ParamLimits

0x5091,	// (0x00023e3d) candidate_pane

0x50a3,	// (0x00023e4f) scroll_pane_cp30

0x50ab,	// (0x00023e57) list_single_popup_jap_candidate_pane_ParamLimits

0x50ab,	// (0x00023e57) list_single_popup_jap_candidate_pane

0x22cc,	// (0x00021078) list_highlight_pane_cp30

0x50c0,	// (0x00023e6c) list_single_popup_jap_candidate_pane_t1

0x50cf,	// (0x00023e7b) level_1_signal

0x50dc,	// (0x00023e88) level_2_signal

0x50e9,	// (0x00023e95) level_3_signal

0x50f6,	// (0x00023ea2) level_4_signal

0x5103,	// (0x00023eaf) level_5_signal

0x5110,	// (0x00023ebc) level_6_signal

0x511d,	// (0x00023ec9) level_7_signal

0x50cf,	// (0x00023e7b) level_1_battery

0x50dc,	// (0x00023e88) level_2_battery

0x50e9,	// (0x00023e95) level_3_battery

0x50f6,	// (0x00023ea2) level_4_battery

0x5103,	// (0x00023eaf) level_5_battery

0x5110,	// (0x00023ebc) level_6_battery

0x511d,	// (0x00023ec9) level_7_battery

0x5142,	// (0x00023eee) list_menu_pane_ParamLimits

0x5142,	// (0x00023eee) list_menu_pane

0x5158,	// (0x00023f04) scroll_pane_cp25_ParamLimits

0x5158,	// (0x00023f04) scroll_pane_cp25

0x5171,	// (0x00023f1d) list_double2_graphic_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double2_graphic_pane_cp2

0x5171,	// (0x00023f1d) list_double2_large_graphic_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double2_large_graphic_pane_cp2

0x5171,	// (0x00023f1d) list_double2_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double2_pane_cp2

0x5171,	// (0x00023f1d) list_double_graphic_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double_graphic_pane_cp2

0x5171,	// (0x00023f1d) list_double_large_graphic_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double_large_graphic_pane_cp2

0x5171,	// (0x00023f1d) list_double_number_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double_number_pane_cp2

0x5171,	// (0x00023f1d) list_double_pane_cp2_ParamLimits

0x5171,	// (0x00023f1d) list_double_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_2graphic_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_2graphic_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_graphic_heading_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_graphic_heading_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_graphic_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_graphic_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_heading_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_heading_pane_cp2

0x5181,	// (0x00023f2d) list_single_large_graphic_pane_cp2_ParamLimits

0x5181,	// (0x00023f2d) list_single_large_graphic_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_number_heading_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_number_heading_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_number_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_number_pane_cp2

0xa1e2,	// (0x00028f8e) list_single_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_pane_cp2

0x519b,	// (0x00023f47) bg_popup_sub_pane_cp22

0xa2c1,	// (0x0002906d) popup_side_volume_key_window_g1

0xa2eb,	// (0x00029097) popup_side_volume_key_window_t1

0xa307,	// (0x000290b3) volume_small_pane_cp1

0x23d5,	// (0x00021181) bg_popup_sub_pane_cp24_ParamLimits

0x23d5,	// (0x00021181) bg_popup_sub_pane_cp24

0x51b1,	// (0x00023f5d) fep_china_uni_candidate_pane_ParamLimits

0x51b1,	// (0x00023f5d) fep_china_uni_candidate_pane

0x51c5,	// (0x00023f71) fep_china_uni_entry_pane

0x51d5,	// (0x00023f81) popup_fep_china_uni_window_g1

0x51f1,	// (0x00023f9d) fep_china_uni_entry_pane_g1

0x51f9,	// (0x00023fa5) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002e4e6) fep_china_uni_entry_pane_g

0x5201,	// (0x00023fad) fep_entry_item_pane

0x520b,	// (0x00023fb7) fep_candidate_item_pane

0x5213,	// (0x00023fbf) fep_china_uni_candidate_pane_g1

0x521b,	// (0x00023fc7) fep_china_uni_candidate_pane_g2

0x5223,	// (0x00023fcf) fep_china_uni_candidate_pane_g3

0x522b,	// (0x00023fd7) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002e4eb) fep_china_uni_candidate_pane_g

0x21dc,	// (0x00020f88) fep_entry_item_pane_g1

0x5233,	// (0x00023fdf) fep_entry_item_pane_t1_ParamLimits

0x5233,	// (0x00023fdf) fep_entry_item_pane_t1

0x5249,	// (0x00023ff5) fep_candidate_item_pane_t1_ParamLimits

0x5249,	// (0x00023ff5) fep_candidate_item_pane_t1

0x525e,	// (0x0002400a) fep_candidate_item_pane_t2_ParamLimits

0x525e,	// (0x0002400a) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002e4f4) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002e4f4) fep_candidate_item_pane_t

0x23e3,	// (0x0002118f) list_highlight_pane_cp31_ParamLimits

0x23e3,	// (0x0002118f) list_highlight_pane_cp31

0x5270,	// (0x0002401c) level_1_signal_lsc

0x5279,	// (0x00024025) level_2_signal_lsc

0x5282,	// (0x0002402e) level_3_signal_lsc

0x528b,	// (0x00024037) level_4_signal_lsc

0x5294,	// (0x00024040) level_5_signal_lsc

0x529d,	// (0x00024049) level_6_signal_lsc

0x52a6,	// (0x00024052) level_7_signal_lsc

0x52a6,	// (0x00024052) level_1_battery_lsc

0x52af,	// (0x0002405b) level_2_battery_lsc

0x52b8,	// (0x00024064) level_3_battery_lsc

0x52c1,	// (0x0002406d) level_4_battery_lsc

0x52ca,	// (0x00024076) level_5_battery_lsc

0x52d3,	// (0x0002407f) level_6_battery_lsc

0x5270,	// (0x0002401c) level_7_battery_lsc

0x52dc,	// (0x00024088) scroll_handle_focus_pane_g1

0x52e5,	// (0x00024091) scroll_handle_focus_pane_g2

0x52ee,	// (0x0002409a) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002e4f9) scroll_handle_focus_pane_g

0xecd3,	// (0x0002da7f) list_single_2graphic_pane_g1_ParamLimits

0xecd3,	// (0x0002da7f) list_single_2graphic_pane_g1

0xdaac,	// (0x0002c858) list_single_2graphic_pane_g2_ParamLimits

0xdaac,	// (0x0002c858) list_single_2graphic_pane_g2

0xda32,	// (0x0002c7de) list_single_2graphic_pane_g3_ParamLimits

0xda32,	// (0x0002c7de) list_single_2graphic_pane_g3

0xecdf,	// (0x0002da8b) list_single_2graphic_pane_g4_ParamLimits

0xecdf,	// (0x0002da8b) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002e500) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002e500) list_single_2graphic_pane_g

0xeceb,	// (0x0002da97) list_single_2graphic_pane_t1_ParamLimits

0xeceb,	// (0x0002da97) list_single_2graphic_pane_t1

0xed19,	// (0x0002dac5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xed19,	// (0x0002dac5) list_double2_graphic_large_graphic_pane_g1

0xdd0d,	// (0x0002cab9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xdd0d,	// (0x0002cab9) list_double2_graphic_large_graphic_pane_g2

0xdc43,	// (0x0002c9ef) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdc43,	// (0x0002c9ef) list_double2_graphic_large_graphic_pane_g3

0xed29,	// (0x0002dad5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xed29,	// (0x0002dad5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002e509) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002e509) list_double2_graphic_large_graphic_pane_g

0xed35,	// (0x0002dae1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xed35,	// (0x0002dae1) list_double2_graphic_large_graphic_pane_t1

0xed4b,	// (0x0002daf7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xed4b,	// (0x0002daf7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002e512) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002e512) list_double2_graphic_large_graphic_pane_t

0x53af,	// (0x0002415b) popup_fast_swap_window_ParamLimits

0x53af,	// (0x0002415b) popup_fast_swap_window

0x53cb,	// (0x00024177) popup_side_volume_key_window

0x53e7,	// (0x00024193) stacon_top_pane

0x53f1,	// (0x0002419d) status_pane_ParamLimits

0x53f1,	// (0x0002419d) status_pane

0x53e7,	// (0x00024193) status_small_pane

0x22cc,	// (0x00021078) control_pane

0x22cc,	// (0x00021078) stacon_bottom_pane

0x4bf7,	// (0x000239a3) scroll_pane_cp121

0x4bee,	// (0x0002399a) set_content_pane

0xa30f,	// (0x000290bb) bg_active_tab_pane_g1_cp1

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp1

0xa318,	// (0x000290c4) bg_active_tab_pane_g3_cp1

0xa30f,	// (0x000290bb) bg_passive_tab_pane_g1_cp1

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp1

0xa318,	// (0x000290c4) bg_passive_tab_pane_g3_cp1

0x5309,	// (0x000240b5) bg_active_tab_pane_g1_cp2

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp2

0x52f7,	// (0x000240a3) bg_active_tab_pane_g3_cp2

0x5309,	// (0x000240b5) bg_passive_tab_pane_g1_cp2

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp2

0x52f7,	// (0x000240a3) bg_passive_tab_pane_g3_cp2

0xa321,	// (0x000290cd) bg_active_tab_pane_g1_cp3

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp3

0xa32a,	// (0x000290d6) bg_active_tab_pane_g3_cp3

0xa321,	// (0x000290cd) bg_passive_tab_pane_g1_cp3

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp3

0xa32a,	// (0x000290d6) bg_passive_tab_pane_g3_cp3

0xa333,	// (0x000290df) bg_active_tab_pane_g1_cp4

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp4

0xa33e,	// (0x000290ea) bg_active_tab_pane_g3_cp4

0xa333,	// (0x000290df) bg_passive_tab_pane_g1_cp4

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp4

0xa33e,	// (0x000290ea) bg_passive_tab_pane_g3_cp4

0x5359,	// (0x00024105) bg_active_tab_pane_g1_cp5

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp5

0x5350,	// (0x000240fc) bg_active_tab_pane_g3_cp5

0x5359,	// (0x00024105) bg_passive_tab_pane_g1_cp5

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp5

0x5350,	// (0x000240fc) bg_passive_tab_pane_g3_cp5

0xa48a,	// (0x00029236) list_set_graphic_pane_ParamLimits

0xa48a,	// (0x00029236) list_set_graphic_pane

0x22cc,	// (0x00021078) bg_set_opt_pane_cp4

0xa4a7,	// (0x00029253) list_set_graphic_pane_g1_ParamLimits

0xa4a7,	// (0x00029253) list_set_graphic_pane_g1

0xa4b3,	// (0x0002925f) list_set_graphic_pane_g2_ParamLimits

0xa4b3,	// (0x0002925f) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002e517) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002e517) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0002e888) volume_small_pane_cp_g

0x5362,	// (0x0002410e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5362,	// (0x0002410e) list_double2_large_graphic_pane_g1_cp2

0x536e,	// (0x0002411a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x536e,	// (0x0002411a) list_double2_large_graphic_pane_g2_cp2

0x537f,	// (0x0002412b) list_double2_large_graphic_pane_g3_cp2

0x5387,	// (0x00024133) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5387,	// (0x00024133) list_double2_large_graphic_pane_t1_cp2

0x539d,	// (0x00024149) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x539d,	// (0x00024149) list_double2_large_graphic_pane_t2_cp2

0x6b57,	// (0x00025903) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6b57,	// (0x00025903) list_double_large_graphic_pane_g1_cp2

0x6b68,	// (0x00025914) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6b68,	// (0x00025914) list_double_large_graphic_pane_g2_cp2

0x550d,	// (0x000242b9) list_double_large_graphic_pane_g3_cp2

0x6b79,	// (0x00025925) list_double_large_graphic_pane_g4_cp

0x6b81,	// (0x0002592d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6b81,	// (0x0002592d) list_double_large_graphic_pane_t1_cp2

0x6b98,	// (0x00025944) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6b98,	// (0x00025944) list_double_large_graphic_pane_t2_cp2

0x53ff,	// (0x000241ab) list_double2_graphic_pane_g1_cp2_ParamLimits

0x53ff,	// (0x000241ab) list_double2_graphic_pane_g1_cp2

0x540d,	// (0x000241b9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x540d,	// (0x000241b9) list_double2_graphic_pane_g2_cp2

0x541e,	// (0x000241ca) list_double2_graphic_pane_g3_cp2

0x5428,	// (0x000241d4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5428,	// (0x000241d4) list_double2_graphic_pane_t1_cp2

0x543e,	// (0x000241ea) list_double2_graphic_pane_t2_cp2_ParamLimits

0x543e,	// (0x000241ea) list_double2_graphic_pane_t2_cp2

0x5450,	// (0x000241fc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5450,	// (0x000241fc) list_single_number_heading_pane_g1_cp2

0x545c,	// (0x00024208) list_single_number_heading_pane_g2_cp2

0x5464,	// (0x00024210) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5464,	// (0x00024210) list_single_number_heading_pane_t1_cp2

0x547a,	// (0x00024226) list_single_number_heading_pane_t2_cp2_ParamLimits

0x547a,	// (0x00024226) list_single_number_heading_pane_t2_cp2

0x548c,	// (0x00024238) list_single_number_heading_pane_t3_cp2_ParamLimits

0x548c,	// (0x00024238) list_single_number_heading_pane_t3_cp2

0x5450,	// (0x000241fc) list_single_heading_pane_g1_cp2_ParamLimits

0x5450,	// (0x000241fc) list_single_heading_pane_g1_cp2

0x545c,	// (0x00024208) list_single_heading_pane_g2_cp2

0x5464,	// (0x00024210) list_single_heading_pane_t1_cp2_ParamLimits

0x5464,	// (0x00024210) list_single_heading_pane_t1_cp2

0x695f,	// (0x0002570b) list_single_heading_pane_t2_cp2_ParamLimits

0x695f,	// (0x0002570b) list_single_heading_pane_t2_cp2

0x68a7,	// (0x00025653) list_double_graphic_pane_g1_cp2_ParamLimits

0x68a7,	// (0x00025653) list_double_graphic_pane_g1_cp2

0x68b3,	// (0x0002565f) list_double_graphic_pane_g2_cp2_ParamLimits

0x68b3,	// (0x0002565f) list_double_graphic_pane_g2_cp2

0x68c2,	// (0x0002566e) list_double_graphic_pane_g3_cp2

0x68ca,	// (0x00025676) list_double_graphic_pane_t1_cp2_ParamLimits

0x68ca,	// (0x00025676) list_double_graphic_pane_t1_cp2

0x68e0,	// (0x0002568c) list_double_graphic_pane_t2_cp2_ParamLimits

0x68e0,	// (0x0002568c) list_double_graphic_pane_t2_cp2

0x5501,	// (0x000242ad) list_double_number_pane_g1_cp2_ParamLimits

0x5501,	// (0x000242ad) list_double_number_pane_g1_cp2

0x550d,	// (0x000242b9) list_double_number_pane_g2_cp2

0x686b,	// (0x00025617) list_double_number_pane_t1_cp2_ParamLimits

0x686b,	// (0x00025617) list_double_number_pane_t1_cp2

0x687f,	// (0x0002562b) list_double_number_pane_t2_cp2_ParamLimits

0x687f,	// (0x0002562b) list_double_number_pane_t2_cp2

0x6895,	// (0x00025641) list_double_number_pane_t3_cp2_ParamLimits

0x6895,	// (0x00025641) list_double_number_pane_t3_cp2

0x67e2,	// (0x0002558e) list_single_graphic_pane_g1_cp2_ParamLimits

0x67e2,	// (0x0002558e) list_single_graphic_pane_g1_cp2

0x5565,	// (0x00024311) list_single_graphic_pane_g2_cp2_ParamLimits

0x5565,	// (0x00024311) list_single_graphic_pane_g2_cp2

0x5571,	// (0x0002431d) list_single_graphic_pane_g3_cp2

0x67b8,	// (0x00025564) list_single_graphic_pane_t1_cp2_ParamLimits

0x67b8,	// (0x00025564) list_single_graphic_pane_t1_cp2

0x5565,	// (0x00024311) list_single_number_pane_g1_cp2_ParamLimits

0x5565,	// (0x00024311) list_single_number_pane_g1_cp2

0x5571,	// (0x0002431d) list_single_number_pane_g2_cp2

0x67b8,	// (0x00025564) list_single_number_pane_t1_cp2_ParamLimits

0x67b8,	// (0x00025564) list_single_number_pane_t1_cp2

0x67ce,	// (0x0002557a) list_single_number_pane_t2_cp2_ParamLimits

0x67ce,	// (0x0002557a) list_single_number_pane_t2_cp2

0x536e,	// (0x0002411a) list_double2_pane_g1_cp2_ParamLimits

0x536e,	// (0x0002411a) list_double2_pane_g1_cp2

0x537f,	// (0x0002412b) list_double2_pane_g2_cp2

0x54d9,	// (0x00024285) list_double2_pane_t1_cp2_ParamLimits

0x54d9,	// (0x00024285) list_double2_pane_t1_cp2

0x54ef,	// (0x0002429b) list_double2_pane_t2_cp2_ParamLimits

0x54ef,	// (0x0002429b) list_double2_pane_t2_cp2

0x5501,	// (0x000242ad) list_double_pane_g1_cp2_ParamLimits

0x5501,	// (0x000242ad) list_double_pane_g1_cp2

0x550d,	// (0x000242b9) list_double_pane_g2_cp2

0x5515,	// (0x000242c1) list_double_pane_t1_cp2_ParamLimits

0x5515,	// (0x000242c1) list_double_pane_t1_cp2

0x552b,	// (0x000242d7) list_double_pane_t2_cp2_ParamLimits

0x552b,	// (0x000242d7) list_double_pane_t2_cp2

0x5555,	// (0x00024301) list_single_pane_cp2_g3

0x5565,	// (0x00024311) list_single_pane_g1_cp2_ParamLimits

0x5565,	// (0x00024311) list_single_pane_g1_cp2

0x5571,	// (0x0002431d) list_single_pane_g2_cp2

0x5579,	// (0x00024325) list_single_pane_t1_cp2_ParamLimits

0x5579,	// (0x00024325) list_single_pane_t1_cp2

0x5591,	// (0x0002433d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5591,	// (0x0002433d) list_single_large_graphic_pane_g1_cp2

0x559d,	// (0x00024349) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x559d,	// (0x00024349) list_single_large_graphic_pane_g2_cp2

0x55a9,	// (0x00024355) list_single_large_graphic_pane_g3_cp2

0x55b1,	// (0x0002435d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x55b1,	// (0x0002435d) list_single_large_graphic_pane_g4_cp1

0x55cb,	// (0x00024377) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x55cb,	// (0x00024377) list_single_large_graphic_pane_t1_cp2

0x6784,	// (0x00025530) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6784,	// (0x00025530) list_single_graphic_heading_pane_g1_cp2

0x6751,	// (0x000254fd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6751,	// (0x000254fd) list_single_graphic_heading_pane_g4_cp2

0x5571,	// (0x0002431d) list_single_graphic_heading_pane_g5_cp2

0x6790,	// (0x0002553c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6790,	// (0x0002553c) list_single_graphic_heading_pane_t1_cp2

0x67a6,	// (0x00025552) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x67a6,	// (0x00025552) list_single_graphic_heading_pane_t2_cp2

0x6745,	// (0x000254f1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6745,	// (0x000254f1) list_single_2graphic_pane_g1_cp2

0x6751,	// (0x000254fd) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6751,	// (0x000254fd) list_single_2graphic_pane_g2_cp2

0x5571,	// (0x0002431d) list_single_2graphic_pane_g3_cp2

0x6762,	// (0x0002550e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6762,	// (0x0002550e) list_single_2graphic_pane_g4_cp2

0x676e,	// (0x0002551a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x676e,	// (0x0002551a) list_single_2graphic_pane_t1_cp2

0x21dc,	// (0x00020f88) list_highlight_pane_g10_cp1

0x633b,	// (0x000250e7) list_highlight_pane_g1_cp1

0x6343,	// (0x000250ef) list_highlight_pane_g2_cp1

0x634b,	// (0x000250f7) list_highlight_pane_g3_cp1

0x6353,	// (0x000250ff) list_highlight_pane_g4_cp1

0x635b,	// (0x00025107) list_highlight_pane_g5_cp1

0x6363,	// (0x0002510f) list_highlight_pane_g6_cp1

0x636b,	// (0x00025117) list_highlight_pane_g7_cp1

0x6373,	// (0x0002511f) list_highlight_pane_g8_cp1

0x637b,	// (0x00025127) list_highlight_pane_g9_cp1

0xb199,	// (0x00029f45) form_field_slider_pane_t3

0xb1a7,	// (0x00029f53) form_field_slider_pane_t4

0x6229,	// (0x00024fd5) slider_form_pane_ParamLimits

0x6229,	// (0x00024fd5) slider_form_pane

0x22cc,	// (0x00021078) control_abbreviations

0x22cc,	// (0x00021078) control_conventions

0x22cc,	// (0x00021078) control_definitions

0x22cc,	// (0x00021078) format_table_attribute

0x69a9,	// (0x00025755) bg_popup_preview_window_pane_g9

0x22cc,	// (0x00021078) format_table_data2

0x22cc,	// (0x00021078) format_table_data3

0x22cc,	// (0x00021078) format_table_data_example

0x0008,

0x22cc,	// (0x00021078) intro_purpose

0xf900,	// (0x0002e6ac) bg_popup_preview_window_pane_g

0x22cc,	// (0x00021078) texts_category

0x22cc,	// (0x00021078) texts_graphics

0x55e1,	// (0x0002438d) text_digital

0x55f0,	// (0x0002439c) text_primary

0x55ff,	// (0x000243ab) text_primary_small

0x560e,	// (0x000243ba) text_secondary

0x561d,	// (0x000243c9) text_title

0x6e97,	// (0x00025c43) bg_passive_tab_pane_g1_cp3_srt

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp3_srt

0x6e8e,	// (0x00025c3a) bg_passive_tab_pane_g3_cp3_srt

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp3_srt_ParamLimits

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp3_srt

0x6ea0,	// (0x00025c4c) tabs_4_active_pane_srt_g1

0xb6c8,	// (0x0002a474) tabs_4_active_pane_srt_t1_ParamLimits

0xb6c8,	// (0x0002a474) tabs_4_active_pane_srt_t1

0x6e97,	// (0x00025c43) bg_active_tab_pane_g1_cp3_copy1

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp3_copy1

0x6e8e,	// (0x00025c3a) bg_active_tab_pane_g3_cp3_copy1

0x23e3,	// (0x0002118f) tabs_2_long_active_pane_srt_ParamLimits

0x23e3,	// (0x0002118f) tabs_2_long_active_pane_srt

0x23e3,	// (0x0002118f) tabs_2_long_passive_pane_srt_ParamLimits

0x23e3,	// (0x0002118f) tabs_2_long_passive_pane_srt

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp4_srt

0x6da8,	// (0x00025b54) bg_passive_tab_pane_g1_cp4_srt

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp4_srt

0x6d9f,	// (0x00025b4b) bg_passive_tab_pane_g3_cp4_srt

0x62a7,	// (0x00025053) bg_active_tab_pane_cp4_srt_ParamLimits

0x62a7,	// (0x00025053) bg_active_tab_pane_cp4_srt

0xb463,	// (0x0002a20f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb463,	// (0x0002a20f) tabs_2_long_active_pane_srt_t1

0x6da8,	// (0x00025b54) bg_active_tab_pane_g1_cp4_srt

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp4_srt

0x6d9f,	// (0x00025b4b) bg_active_tab_pane_g3_cp4_srt

0x23d5,	// (0x00021181) tabs_3_long_active_pane_srt_ParamLimits

0x23d5,	// (0x00021181) tabs_3_long_active_pane_srt

0x23d5,	// (0x00021181) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x23d5,	// (0x00021181) tabs_3_long_passive_pane_cp_srt

0x23d5,	// (0x00021181) tabs_3_long_passive_pane_srt_ParamLimits

0x23d5,	// (0x00021181) tabs_3_long_passive_pane_srt

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp5_srt

0x5359,	// (0x00024105) bg_passive_tab_pane_g1_cp5_srt

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp5_srt

0x5350,	// (0x000240fc) bg_passive_tab_pane_g3_cp5_srt

0x62a7,	// (0x00025053) bg_active_tab_pane_cp5_srt_ParamLimits

0x62a7,	// (0x00025053) bg_active_tab_pane_cp5_srt

0xb451,	// (0x0002a1fd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb451,	// (0x0002a1fd) tabs_3_long_active_pane_srt_t1

0x5359,	// (0x00024105) bg_active_tab_pane_g1_cp5_srt

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp5_srt

0x5350,	// (0x000240fc) bg_active_tab_pane_g3_cp5_srt

0x6d91,	// (0x00025b3d) navi_text_pane_srt_t1

0x6d89,	// (0x00025b35) navi_icon_pane_srt_g1

0x5735,	// (0x000244e1) midp_editing_number_pane_srt

0x562c,	// (0x000243d8) midp_ticker_pane_srt

0x573d,	// (0x000244e9) midp_ticker_pane_srt_g1

0x5745,	// (0x000244f1) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002e536) midp_ticker_pane_srt_g

0x574d,	// (0x000244f9) midp_ticker_pane_srt_t1

0x6d7a,	// (0x00025b26) midp_editing_number_pane_t1_copy1

0x9f35,	// (0x00028ce1) listscroll_midp_pane

0x9f35,	// (0x00028ce1) midp_form_pane

0x5634,	// (0x000243e0) midp_info_popup_window_ParamLimits

0x5634,	// (0x000243e0) midp_info_popup_window

0x4ccc,	// (0x00023a78) bg_popup_sub_pane_cp50_ParamLimits

0x4ccc,	// (0x00023a78) bg_popup_sub_pane_cp50

0x5f41,	// (0x00024ced) listscroll_midp_info_pane_ParamLimits

0x5f41,	// (0x00024ced) listscroll_midp_info_pane

0x5f29,	// (0x00024cd5) listscroll_form_midp_pane_ParamLimits

0x5f29,	// (0x00024cd5) listscroll_form_midp_pane

0x5f35,	// (0x00024ce1) scroll_bar_cp050

0xb181,	// (0x00029f2d) list_midp_pane

0x773e,	// (0x000264ea) signal_pane_g2_cp

0x5e5b,	// (0x00024c07) listscroll_midp_info_pane_t1_ParamLimits

0x5e5b,	// (0x00024c07) listscroll_midp_info_pane_t1

0x5e73,	// (0x00024c1f) listscroll_midp_info_pane_t2_ParamLimits

0x5e73,	// (0x00024c1f) listscroll_midp_info_pane_t2

0x5eb1,	// (0x00024c5d) listscroll_midp_info_pane_t3_ParamLimits

0x5eb1,	// (0x00024c5d) listscroll_midp_info_pane_t3

0x5eeb,	// (0x00024c97) listscroll_midp_info_pane_t4_ParamLimits

0x5eeb,	// (0x00024c97) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0002e5e7) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0002e5e7) listscroll_midp_info_pane_t

0x4d33,	// (0x00023adf) scroll_pane_cp21

0x5df9,	// (0x00024ba5) form_midp_field_choice_group_pane

0x5e02,	// (0x00024bae) form_midp_field_text_pane

0x5e41,	// (0x00024bed) form_midp_field_time_pane

0x5e49,	// (0x00024bf5) form_midp_gauge_slider_pane

0x5e52,	// (0x00024bfe) form_midp_gauge_wait_pane

0x22cc,	// (0x00021078) form_midp_image_pane

0xee16,	// (0x0002dbc2) list_single_midp_pane_ParamLimits

0xee16,	// (0x0002dbc2) list_single_midp_pane

0xb14a,	// (0x00029ef6) form_midp_field_text_pane_t1

0x5ca0,	// (0x00024a4c) input_focus_pane_cp050

0x5de8,	// (0x00024b94) list_midp_form_text_pane

0x5db7,	// (0x00024b63) form_midp_field_choice_group_pane_t1

0x5dc5,	// (0x00024b71) input_focus_pane_cp051

0x5dd9,	// (0x00024b85) list_midp_choice_pane

0x22cc,	// (0x00021078) status_idle_pane

0x5d9b,	// (0x00024b47) form_midp_field_time_pane_t1

0x21dc,	// (0x00020f88) wait_anim_pane_g2_copy1

0x5da9,	// (0x00024b55) form_midp_field_time_pane_t2

0x0001,

0x569f,	// (0x0002444b) aid_navinavi_width_2_pane

0xf836,	// (0x0002e5e2) form_midp_field_time_pane_t

0x22cc,	// (0x00021078) input_focus_pane_cp052

0x22cc,	// (0x00021078) bg_input_focus_pane_cp040

0x5d77,	// (0x00024b23) form_midp_gauge_slider_pane_t1

0x5d85,	// (0x00024b31) form_midp_gauge_slider_pane_t2

0xb12e,	// (0x00029eda) form_midp_gauge_slider_pane_t3

0xb13c,	// (0x00029ee8) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0002e5d9) form_midp_gauge_slider_pane_t

0x5d93,	// (0x00024b3f) form_midp_slider_pane

0x23e3,	// (0x0002118f) bg_input_focus_pane_cp041_ParamLimits

0x23e3,	// (0x0002118f) bg_input_focus_pane_cp041

0x5d44,	// (0x00024af0) form_midp_gauge_wait_pane_t1_ParamLimits

0x5d44,	// (0x00024af0) form_midp_gauge_wait_pane_t1

0x5d56,	// (0x00024b02) form_midp_gauge_wait_pane_t2_ParamLimits

0x5d56,	// (0x00024b02) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0002e5d4) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0002e5d4) form_midp_gauge_wait_pane_t

0x5d68,	// (0x00024b14) form_midp_wait_pane_ParamLimits

0x5d68,	// (0x00024b14) form_midp_wait_pane

0x5d0e,	// (0x00024aba) form_midp_image_pane_g1

0x5d17,	// (0x00024ac3) form_midp_image_pane_t1

0x5d26,	// (0x00024ad2) form_midp_image_pane_t2

0x5d35,	// (0x00024ae1) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0002e5cd) form_midp_image_pane_t

0x5d05,	// (0x00024ab1) list_single_midp_pane_g1

0xee07,	// (0x0002dbb3) list_single_midp_pane_t1

0xb106,	// (0x00029eb2) list_midp_form_item_pane_ParamLimits

0xb106,	// (0x00029eb2) list_midp_form_item_pane

0x5647,	// (0x000243f3) list_midp_form_item_pane_t1

0x5656,	// (0x00024402) midp_ticker_pane_g1

0x5662,	// (0x0002440e) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002e51c) midp_ticker_pane_g

0x566e,	// (0x0002441a) midp_ticker_pane_t1

0x6e30,	// (0x00025bdc) midp_editing_number_pane_t1

0x6e0e,	// (0x00025bba) midp_editing_number_pane

0x6e1d,	// (0x00025bc9) midp_ticker_pane

0x6d6a,	// (0x00025b16) ai_message_heading_pane

0x22cc,	// (0x00021078) bg_popup_window_pane_cp14

0x6d72,	// (0x00025b1e) listscroll_ai_message_pane

0x6cf4,	// (0x00025aa0) ai_message_heading_pane_g1_ParamLimits

0x6cf4,	// (0x00025aa0) ai_message_heading_pane_g1

0x6d00,	// (0x00025aac) ai_message_heading_pane_g2_ParamLimits

0x6d00,	// (0x00025aac) ai_message_heading_pane_g2

0x6d0c,	// (0x00025ab8) ai_message_heading_pane_g3_ParamLimits

0x6d0c,	// (0x00025ab8) ai_message_heading_pane_g3

0x6d18,	// (0x00025ac4) ai_message_heading_pane_g4_ParamLimits

0x6d18,	// (0x00025ac4) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002e70e) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002e70e) ai_message_heading_pane_g

0x6d24,	// (0x00025ad0) ai_message_heading_pane_t1_ParamLimits

0x6d24,	// (0x00025ad0) ai_message_heading_pane_t1

0x6d3e,	// (0x00025aea) ai_message_heading_pane_t2_ParamLimits

0x6d3e,	// (0x00025aea) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002e717) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002e717) ai_message_heading_pane_t

0x6d50,	// (0x00025afc) bg_popup_heading_pane_cp1_ParamLimits

0x6d50,	// (0x00025afc) bg_popup_heading_pane_cp1

0x6ce2,	// (0x00025a8e) list_ai_message_pane_ParamLimits

0x6ce2,	// (0x00025a8e) list_ai_message_pane

0x4d33,	// (0x00023adf) scroll_pane_cp10

0x6c7e,	// (0x00025a2a) list_ai_message_pane_g1

0x6c86,	// (0x00025a32) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002e6eb) list_ai_message_pane_g

0x6c8e,	// (0x00025a3a) list_ai_message_pane_t1_ParamLimits

0x6c8e,	// (0x00025a3a) list_ai_message_pane_t1

0x6ca3,	// (0x00025a4f) list_ai_message_pane_t2_ParamLimits

0x6ca3,	// (0x00025a4f) list_ai_message_pane_t2

0x6cb8,	// (0x00025a64) list_ai_message_pane_t3_ParamLimits

0x6cb8,	// (0x00025a64) list_ai_message_pane_t3

0x6ccd,	// (0x00025a79) list_ai_message_pane_t4_ParamLimits

0x6ccd,	// (0x00025a79) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002e6f0) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002e6f0) list_ai_message_pane_t

0xb3ec,	// (0x0002a198) cell_ai_soft_ind_pane_ParamLimits

0xb3ec,	// (0x0002a198) cell_ai_soft_ind_pane

0x5680,	// (0x0002442c) cell_ai_soft_ind_pane_g1_ParamLimits

0x5680,	// (0x0002442c) cell_ai_soft_ind_pane_g1

0x22cc,	// (0x00021078) grid_highlight_cp1

0x568d,	// (0x00024439) text_secondary_cp56_ParamLimits

0x568d,	// (0x00024439) text_secondary_cp56

0x6c53,	// (0x000259ff) example_general_pane_ParamLimits

0x6c53,	// (0x000259ff) example_general_pane

0x6c5f,	// (0x00025a0b) example_parent_pane_g1_ParamLimits

0x6c5f,	// (0x00025a0b) example_parent_pane_g1

0x6c6b,	// (0x00025a17) example_parent_pane_t1_ParamLimits

0x6c6b,	// (0x00025a17) example_parent_pane_t1

0xaa87,	// (0x00029833) popup_preview_text_window_ParamLimits

0xaa87,	// (0x00029833) popup_preview_text_window

0x555d,	// (0x00024309) list_single_pane_cp2_g4

0x25be,	// (0x0002136a) bg_popup_preview_window_pane_ParamLimits

0x25be,	// (0x0002136a) bg_popup_preview_window_pane

0x69b1,	// (0x0002575d) popup_preview_text_window_t1_ParamLimits

0x69b1,	// (0x0002575d) popup_preview_text_window_t1

0x69cf,	// (0x0002577b) popup_preview_text_window_t2_ParamLimits

0x69cf,	// (0x0002577b) popup_preview_text_window_t2

0x6a18,	// (0x000257c4) popup_preview_text_window_t3_ParamLimits

0x6a18,	// (0x000257c4) popup_preview_text_window_t3

0x6a5d,	// (0x00025809) popup_preview_text_window_t4_ParamLimits

0x6a5d,	// (0x00025809) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002e6bf) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002e6bf) popup_preview_text_window_t

0x6adb,	// (0x00025887) scroll_pane_cp11

0x5b90,	// (0x0002493c) bg_popup_preview_window_pane_g1

0x6971,	// (0x0002571d) bg_popup_preview_window_pane_g2

0x6979,	// (0x00025725) bg_popup_preview_window_pane_g3

0x6981,	// (0x0002572d) bg_popup_preview_window_pane_g4

0x6989,	// (0x00025735) bg_popup_preview_window_pane_g5

0x6991,	// (0x0002573d) bg_popup_preview_window_pane_g6

0x6999,	// (0x00025745) bg_popup_preview_window_pane_g7

0x69a1,	// (0x0002574d) bg_popup_preview_window_pane_g8

0x9748,	// (0x000284f4) aid_popup_width_pane

0xaa65,	// (0x00029811) popup_midp_note_alarm_window_ParamLimits

0xaa65,	// (0x00029811) popup_midp_note_alarm_window

0x4c08,	// (0x000239b4) data_form_pane_ParamLimits

0xeb2d,	// (0x0002d8d9) form_field_data_pane_g1

0xeb37,	// (0x0002d8e3) form_field_data_pane_t1_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_ParamLimits

0x4c22,	// (0x000239ce) data_form_wide_pane_ParamLimits

0xeb4f,	// (0x0002d8fb) form_field_data_wide_pane_g1

0xeb5b,	// (0x0002d907) form_field_data_wide_pane_t1_ParamLimits

0x275f,	// (0x0002150b) input_focus_pane_cp6_ParamLimits

0x9efc,	// (0x00028ca8) input_popup_find_pane_g1_ParamLimits

0x9efc,	// (0x00028ca8) input_popup_find_pane_g1

0xa053,	// (0x00028dff) aid_navi_side_left_pane

0xa068,	// (0x00028e14) aid_navi_side_right_pane

0x6418,	// (0x000251c4) bg_popup_window_pane_cp30_ParamLimits

0x6418,	// (0x000251c4) bg_popup_window_pane_cp30

0x6492,	// (0x0002523e) popup_midp_note_alarm_window_g1_ParamLimits

0x6492,	// (0x0002523e) popup_midp_note_alarm_window_g1

0x64c2,	// (0x0002526e) popup_midp_note_alarm_window_t1_ParamLimits

0x64c2,	// (0x0002526e) popup_midp_note_alarm_window_t1

0x6563,	// (0x0002530f) popup_midp_note_alarm_window_t2_ParamLimits

0x6563,	// (0x0002530f) popup_midp_note_alarm_window_t2

0x6611,	// (0x000253bd) popup_midp_note_alarm_window_t3_ParamLimits

0x6611,	// (0x000253bd) popup_midp_note_alarm_window_t3

0x6643,	// (0x000253ef) popup_midp_note_alarm_window_t4_ParamLimits

0x6643,	// (0x000253ef) popup_midp_note_alarm_window_t4

0x6669,	// (0x00025415) popup_midp_note_alarm_window_t5_ParamLimits

0x6669,	// (0x00025415) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0002e65c) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0002e65c) popup_midp_note_alarm_window_t

0x6715,	// (0x000254c1) wait_bar_pane_cp1_ParamLimits

0x6715,	// (0x000254c1) wait_bar_pane_cp1

0x22cc,	// (0x00021078) wait_anim_pane_copy1

0x22cc,	// (0x00021078) wait_border_pane_copy1

0x60ea,	// (0x00024e96) wait_border_pane_g1_copy1

0xeb75,	// (0x0002d921) form_field_popup_pane_g1

0xeb7d,	// (0x0002d929) form_field_popup_pane_t1_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_cp7_ParamLimits

0x4c4e,	// (0x000239fa) list_form_pane_ParamLimits

0xeb95,	// (0x0002d941) form_field_popup_wide_pane_g1

0xeb9d,	// (0x0002d949) form_field_popup_wide_pane_t1_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_cp8_ParamLimits

0x4c5a,	// (0x00023a06) list_form_wide_pane_ParamLimits

0x6ec7,	// (0x00025c73) aid_size_cell_graphic_pane

0xec27,	// (0x0002d9d3) data_form_pane_t1_ParamLimits

0xee70,	// (0x0002dc1c) data_form_wide_pane_t1_ParamLimits

0xacd1,	// (0x00029a7d) bg_status_flat_pane

0x9b55,	// (0x00028901) title_pane_t1_ParamLimits

0x239d,	// (0x00021149) title_pane_t2_ParamLimits

0x23c3,	// (0x0002116f) title_pane_t3_ParamLimits

0xf56f,	// (0x0002e31b) title_pane_t_ParamLimits

0x50cf,	// (0x00023e7b) level_1_signal_ParamLimits

0x50dc,	// (0x00023e88) level_2_signal_ParamLimits

0x50e9,	// (0x00023e95) level_3_signal_ParamLimits

0x50f6,	// (0x00023ea2) level_4_signal_ParamLimits

0x5103,	// (0x00023eaf) level_5_signal_ParamLimits

0x5110,	// (0x00023ebc) level_6_signal_ParamLimits

0x511d,	// (0x00023ec9) level_7_signal_ParamLimits

0x50cf,	// (0x00023e7b) level_1_battery_ParamLimits

0x50dc,	// (0x00023e88) level_2_battery_ParamLimits

0x50e9,	// (0x00023e95) level_3_battery_ParamLimits

0x50f6,	// (0x00023ea2) level_4_battery_ParamLimits

0x5103,	// (0x00023eaf) level_5_battery_ParamLimits

0x5110,	// (0x00023ebc) level_6_battery_ParamLimits

0x511d,	// (0x00023ec9) level_7_battery_ParamLimits

0x633b,	// (0x000250e7) bg_status_flat_pane_g1

0x6343,	// (0x000250ef) bg_status_flat_pane_g2

0x634b,	// (0x000250f7) bg_status_flat_pane_g3

0x6353,	// (0x000250ff) bg_status_flat_pane_g4

0x635b,	// (0x00025107) bg_status_flat_pane_g5

0x6363,	// (0x0002510f) bg_status_flat_pane_g6

0x636b,	// (0x00025117) bg_status_flat_pane_g7

0x9bc5,	// (0x00028971) tabs_3_active_pane_t1_ParamLimits

0x9bc5,	// (0x00028971) tabs_3_passive_pane_t1_ParamLimits

0x9bdf,	// (0x0002898b) tabs_4_active_pane_t1_ParamLimits

0x9bdf,	// (0x0002898b) tabs_4_1_passive_pane_t1_ParamLimits

0x9f10,	// (0x00028cbc) tabs_2_active_pane_t1_ParamLimits

0x9f10,	// (0x00028cbc) tabs_2_passive_pane_t1_ParamLimits

0x62a7,	// (0x00025053) bg_active_tab_pane_cp4_ParamLimits

0x9f22,	// (0x00028cce) tabs_2_long_active_pane_t1_ParamLimits

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp4_ParamLimits

0xafd1,	// (0x00029d7d) list_single_midp_graphic_pane_t1_ParamLimits

0x62a7,	// (0x00025053) bg_active_tab_pane_cp5_ParamLimits

0x9f41,	// (0x00028ced) tabs_3_long_active_pane_t1_ParamLimits

0x9f35,	// (0x00028ce1) bg_passive_tab_pane_cp5_ParamLimits

0xafd1,	// (0x00029d7d) list_single_midp_graphic_pane_t1

0xacd1,	// (0x00029a7d) bg_status_flat_pane_ParamLimits

0x5a61,	// (0x0002480d) indicator_pane_cp2_ParamLimits

0x5a61,	// (0x0002480d) indicator_pane_cp2

0xae15,	// (0x00029bc1) navi_pane_srt_ParamLimits

0xae15,	// (0x00029bc1) navi_pane_srt

0x5a89,	// (0x00024835) popup_clock_digital_analogue_window_cp1

0x2427,	// (0x000211d3) indicator_pane_t1

0x562c,	// (0x000243d8) copy_highlight_pane

0x562c,	// (0x000243d8) cursor_graphics_pane

0x562c,	// (0x000243d8) graphic_within_text_pane

0x562c,	// (0x000243d8) link_highlight_pane

0x6a9e,	// (0x0002584a) popup_preview_text_window_t5_ParamLimits

0x6a9e,	// (0x0002584a) popup_preview_text_window_t5

0x56a7,	// (0x00024453) cursor_digital_pane

0x56a7,	// (0x00024453) cursor_primary_pane

0x56b8,	// (0x00024464) cursor_primary_small_pane

0x56c0,	// (0x0002446c) cursor_secondary_pane

0x56c8,	// (0x00024474) cursor_title_pane

0x56a7,	// (0x00024453) link_highlight_digital_pane

0x56af,	// (0x0002445b) link_highlight_primary_pane

0x56b8,	// (0x00024464) link_highlight_primary_small_pane

0x56c0,	// (0x0002446c) link_highlight_secondary_pane

0x56c8,	// (0x00024474) link_highlight_title_pane

0x56a7,	// (0x00024453) copy_highlight_digital_pane

0x56a7,	// (0x00024453) copy_highlight_primary_pane

0x56b8,	// (0x00024464) copy_highlight_primary_small_pane

0x56c0,	// (0x0002446c) copy_highlight_secondary_pane

0x56c8,	// (0x00024474) copy_highlight_title_pane

0x56c0,	// (0x0002446c) graphic_text_digital_pane

0x63bb,	// (0x00025167) graphic_text_primary_pane

0x63c4,	// (0x00025170) graphic_text_primary_small_pane

0x56b8,	// (0x00024464) graphic_text_secondary_pane

0x56a7,	// (0x00024453) graphic_text_title_pane

0xa57c,	// (0x00029328) cursor_primary_pane_g1

0x63ad,	// (0x00025159) cursor_text_primary_t1

0xb1c9,	// (0x00029f75) cursor_primary_small_pane_g1

0x639f,	// (0x0002514b) cursor_text_primary_small_t1

0xb1bf,	// (0x00029f6b) cursor_primary_small_pane_g1_copy1

0x6391,	// (0x0002513d) cursor_text_primary_small_t1_copy1

0x6383,	// (0x0002512f) cursor_text_title_t1

0xb1b5,	// (0x00029f61) cursor_title_pane_g1

0xa57c,	// (0x00029328) cursor_digital_pane_g1

0x56d0,	// (0x0002447c) cursor_text_digital_t1

0x56f5,	// (0x000244a1) link_highlight_primary_pane_g1

0x632c,	// (0x000250d8) link_highlight_primary_pane_t1

0x56de,	// (0x0002448a) link_highlight_primary_small_pane_g1

0x56e6,	// (0x00024492) link_highlight_primary_small_pane_t1

0x56f5,	// (0x000244a1) link_highlight_secondary_pane_g1

0x56fd,	// (0x000244a9) link_highlight_secondary_pane_t1

0x6252,	// (0x00024ffe) link_highlight_title_pane_g1

0x625a,	// (0x00025006) link_highlight_title_pane_t1

0x623b,	// (0x00024fe7) link_highlight_digital_pane_g1

0x6243,	// (0x00024fef) link_highlight_digital_pane_t1

0x612f,	// (0x00024edb) copy_highlight_primary_pane_g1

0x6137,	// (0x00024ee3) copy_highlight_primary_pane_t1

0x6109,	// (0x00024eb5) copy_highlight_primary_small_pane_g1

0x6120,	// (0x00024ecc) copy_highlight_primary_small_pane_t1

0x570c,	// (0x000244b8) copy_highlight_secondary_pane_g1

0x5714,	// (0x000244c0) copy_highlight_secondary_pane_t1

0x6109,	// (0x00024eb5) copy_highlight_title_pane_g1

0x6111,	// (0x00024ebd) copy_highlight_title_pane_t1

0x612f,	// (0x00024edb) copy_highlight_digital_pane_g1

0x704d,	// (0x00025df9) copy_highlight_digital_pane_t1

0x6fa1,	// (0x00025d4d) graphic_text_primary_pane_g1

0x7031,	// (0x00025ddd) graphic_text_primary_pane_t1

0x703f,	// (0x00025deb) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0002e78b) graphic_text_primary_pane_t

0x700d,	// (0x00025db9) graphic_text_primary_small_pane_g1

0x7015,	// (0x00025dc1) graphic_text_primary_small_pane_t1

0x7023,	// (0x00025dcf) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0002e786) graphic_text_primary_small_pane_t

0x6fe9,	// (0x00025d95) graphic_text_secondary_pane_g1

0x6ff1,	// (0x00025d9d) graphic_text_secondary_pane_t1

0x6fff,	// (0x00025dab) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0002e781) graphic_text_secondary_pane_t

0x6fc5,	// (0x00025d71) graphic_text_title_pane_g1

0x6fcd,	// (0x00025d79) graphic_text_title_pane_t1

0x6fdb,	// (0x00025d87) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0002e77c) graphic_text_title_pane_t

0x6fa1,	// (0x00025d4d) graphic_text_digital_pane_g1

0x6fa9,	// (0x00025d55) graphic_text_digital_pane_t1

0x6fb7,	// (0x00025d63) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0002e777) graphic_text_digital_pane_t

0x23e3,	// (0x0002118f) navi_icon_pane_srt_ParamLimits

0x23e3,	// (0x0002118f) navi_icon_pane_srt

0x22cc,	// (0x00021078) navi_midp_pane_srt

0x22cc,	// (0x00021078) navi_navi_pane_srt

0x23e3,	// (0x0002118f) navi_text_pane_srt_ParamLimits

0x23e3,	// (0x0002118f) navi_text_pane_srt

0x6f6c,	// (0x00025d18) navi_navi_icon_text_pane_srt

0x6f86,	// (0x00025d32) navi_navi_pane_srt_g1_ParamLimits

0x6f86,	// (0x00025d32) navi_navi_pane_srt_g1

0x6f74,	// (0x00025d20) navi_navi_pane_srt_g2_ParamLimits

0x6f74,	// (0x00025d20) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0002e772) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0002e772) navi_navi_pane_srt_g

0x6f98,	// (0x00025d44) navi_navi_tabs_pane_srt

0x6f6c,	// (0x00025d18) navi_navi_text_pane_srt

0x6f6c,	// (0x00025d18) navi_navi_volume_pane_srt

0x6f5d,	// (0x00025d09) navi_navi_text_pane_srt_t1

0xb7ee,	// (0x0002a59a) navi_navi_volume_pane_srt_g1

0xb7f6,	// (0x0002a5a2) volume_small_pane_srt_ParamLimits

0xb7f6,	// (0x0002a5a2) volume_small_pane_srt

0xa586,	// (0x00029332) volume_small_pane_srt_g1_ParamLimits

0xa586,	// (0x00029332) volume_small_pane_srt_g1

0xa596,	// (0x00029342) volume_small_pane_srt_g2_ParamLimits

0xa596,	// (0x00029342) volume_small_pane_srt_g2

0xa5a7,	// (0x00029353) volume_small_pane_srt_g3_ParamLimits

0xa5a7,	// (0x00029353) volume_small_pane_srt_g3

0xa5b8,	// (0x00029364) volume_small_pane_srt_g4_ParamLimits

0xa5b8,	// (0x00029364) volume_small_pane_srt_g4

0xa5c9,	// (0x00029375) volume_small_pane_srt_g5_ParamLimits

0xa5c9,	// (0x00029375) volume_small_pane_srt_g5

0xa5da,	// (0x00029386) volume_small_pane_srt_g6_ParamLimits

0xa5da,	// (0x00029386) volume_small_pane_srt_g6

0xa5eb,	// (0x00029397) volume_small_pane_srt_g7_ParamLimits

0xa5eb,	// (0x00029397) volume_small_pane_srt_g7

0xa5fc,	// (0x000293a8) volume_small_pane_srt_g8_ParamLimits

0xa5fc,	// (0x000293a8) volume_small_pane_srt_g8

0xa60d,	// (0x000293b9) volume_small_pane_srt_g9_ParamLimits

0xa60d,	// (0x000293b9) volume_small_pane_srt_g9

0xa61e,	// (0x000293ca) volume_small_pane_srt_g10_ParamLimits

0xa61e,	// (0x000293ca) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002e521) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002e521) volume_small_pane_srt_g

0x2667,	// (0x00021413) query_popup_data_pane_cp2

0x6f43,	// (0x00025cef) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6f43,	// (0x00025cef) navi_navi_icon_text_pane_srt_t1

0x63bb,	// (0x00025167) navi_tabs_2_long_pane_srt

0x63bb,	// (0x00025167) navi_tabs_2_pane_srt

0x63bb,	// (0x00025167) navi_tabs_3_long_pane_srt

0x63bb,	// (0x00025167) navi_tabs_3_pane_srt

0x63bb,	// (0x00025167) navi_tabs_4_pane_srt

0xb7ce,	// (0x0002a57a) tabs_2_active_pane_srt_ParamLimits

0xb7ce,	// (0x0002a57a) tabs_2_active_pane_srt

0xb7de,	// (0x0002a58a) tabs_2_passive_pane_srt_ParamLimits

0xb7de,	// (0x0002a58a) tabs_2_passive_pane_srt

0x4d6c,	// (0x00023b18) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d6c,	// (0x00023b18) bg_passive_tab_pane_cp1_srt

0x6f2a,	// (0x00025cd6) bg_passive_tab_pane_g1_cp1_srt

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp1_srt

0x6f21,	// (0x00025ccd) bg_passive_tab_pane_g3_cp1_srt

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp1_srt_ParamLimits

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp1_srt

0x6f33,	// (0x00025cdf) tabs_2_active_pane_srt_g1

0xb7bc,	// (0x0002a568) tabs_2_active_pane_srt_t1_ParamLimits

0xb7bc,	// (0x0002a568) tabs_2_active_pane_srt_t1

0x6f2a,	// (0x00025cd6) bg_active_tab_pane_g1_cp1_srt

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp1_srt

0x6f21,	// (0x00025ccd) bg_active_tab_pane_g3_cp1_srt

0xb789,	// (0x0002a535) tabs_3_active_pane_srt_ParamLimits

0xb789,	// (0x0002a535) tabs_3_active_pane_srt

0xb79a,	// (0x0002a546) tabs_3_passive_pane_cp_srt_ParamLimits

0xb79a,	// (0x0002a546) tabs_3_passive_pane_cp_srt

0xb7ab,	// (0x0002a557) tabs_3_passive_pane_srt_ParamLimits

0xb7ab,	// (0x0002a557) tabs_3_passive_pane_srt

0x4d6c,	// (0x00023b18) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d6c,	// (0x00023b18) bg_passive_tab_pane_cp2_srt

0x572c,	// (0x000244d8) bg_passive_tab_pane_g1_cp2_srt

0x5300,	// (0x000240ac) bg_passive_tab_pane_g2_cp2_srt

0x5723,	// (0x000244cf) bg_passive_tab_pane_g3_cp2_srt

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp2_srt_ParamLimits

0x23e3,	// (0x0002118f) bg_active_tab_pane_cp2_srt

0x6f19,	// (0x00025cc5) tabs_3_active_pane_srt_g1

0xb777,	// (0x0002a523) tabs_3_active_pane_srt_t1_ParamLimits

0xb777,	// (0x0002a523) tabs_3_active_pane_srt_t1

0x572c,	// (0x000244d8) bg_active_tab_pane_g1_cp2_srt

0x5300,	// (0x000240ac) bg_active_tab_pane_g2_cp2_srt

0x5723,	// (0x000244cf) bg_active_tab_pane_g3_cp2_srt

0xb72f,	// (0x0002a4db) tabs_4_active_pane_srt_ParamLimits

0xb72f,	// (0x0002a4db) tabs_4_active_pane_srt

0xb741,	// (0x0002a4ed) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb741,	// (0x0002a4ed) tabs_4_passive_pane_cp2_srt

0x5850,	// (0x000245fc) aid_size_cell_toolbar

0x9f35,	// (0x00028ce1) main_idle_act_pane_ParamLimits

0x5920,	// (0x000246cc) popup_large_graphic_colour_window_ParamLimits

0xabdd,	// (0x00029989) popup_toolbar_window_ParamLimits

0xabdd,	// (0x00029989) popup_toolbar_window

0x6e3f,	// (0x00025beb) list_single_graphic_2heading_pane_ParamLimits

0x6e3f,	// (0x00025beb) list_single_graphic_2heading_pane

0x4f16,	// (0x00023cc2) aid_size_cell_apps_grid_lsc_pane

0x4f28,	// (0x00023cd4) aid_size_cell_apps_grid_prt_pane

0x4d6c,	// (0x00023b18) bg_wml_button_pane_cp1_ParamLimits

0x4d6c,	// (0x00023b18) bg_wml_button_pane_cp1

0xb14a,	// (0x00029ef6) form_midp_field_text_pane_t1_ParamLimits

0x5ca0,	// (0x00024a4c) input_focus_pane_cp050_ParamLimits

0x5de8,	// (0x00024b94) list_midp_form_text_pane_ParamLimits

0x5dc5,	// (0x00024b71) input_focus_pane_cp051_ParamLimits

0x5dd9,	// (0x00024b85) list_midp_choice_pane_ParamLimits

0xb0b0,	// (0x00029e5c) list_single_2graphic_pane_cp3_ParamLimits

0xb0b0,	// (0x00029e5c) list_single_2graphic_pane_cp3

0xb0d4,	// (0x00029e80) list_single_midp_graphic_pane_ParamLimits

0xb0d4,	// (0x00029e80) list_single_midp_graphic_pane

0x96b4,	// (0x00028460) list_single_graphic_2heading_pane_g1_ParamLimits

0x96b4,	// (0x00028460) list_single_graphic_2heading_pane_g1

0x96c0,	// (0x0002846c) list_single_graphic_2heading_pane_g4_ParamLimits

0x96c0,	// (0x0002846c) list_single_graphic_2heading_pane_g4

0x96cc,	// (0x00028478) list_single_graphic_2heading_pane_g5_ParamLimits

0x96cc,	// (0x00028478) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002e574) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002e574) list_single_graphic_2heading_pane_g

0x96d8,	// (0x00028484) list_single_graphic_2heading_pane_t1_ParamLimits

0x96d8,	// (0x00028484) list_single_graphic_2heading_pane_t1

0x96ec,	// (0x00028498) list_single_graphic_2heading_pane_t2_ParamLimits

0x96ec,	// (0x00028498) list_single_graphic_2heading_pane_t2

0x9708,	// (0x000284b4) list_single_graphic_2heading_pane_t3_ParamLimits

0x9708,	// (0x000284b4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002e57b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002e57b) list_single_graphic_2heading_pane_t

0x5ace,	// (0x0002487a) bg_popup_sub_pane_cp2

0x5af8,	// (0x000248a4) grid_toobar_pane

0xaf40,	// (0x00029cec) cell_toolbar_pane_ParamLimits

0xaf40,	// (0x00029cec) cell_toolbar_pane

0x5b34,	// (0x000248e0) cell_toolbar_pane_g1_ParamLimits

0x5b34,	// (0x000248e0) cell_toolbar_pane_g1

0x5b48,	// (0x000248f4) cell_toolbar_pane_g2_ParamLimits

0x5b48,	// (0x000248f4) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002e589) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002e589) cell_toolbar_pane_g

0x5b6a,	// (0x00024916) grid_highlight_pane_cp2_ParamLimits

0x5b6a,	// (0x00024916) grid_highlight_pane_cp2

0x5b84,	// (0x00024930) toolbar_button_pane

0x5b90,	// (0x0002493c) toolbar_button_pane_g1

0x5ba0,	// (0x0002494c) toolbar_button_pane_g2

0x5b98,	// (0x00024944) toolbar_button_pane_g3

0x5bb0,	// (0x0002495c) toolbar_button_pane_g4

0x5ba8,	// (0x00024954) toolbar_button_pane_g5

0x5bb8,	// (0x00024964) toolbar_button_pane_g6

0x5bc0,	// (0x0002496c) toolbar_button_pane_g7

0x5bd0,	// (0x0002497c) toolbar_button_pane_g8

0x5bc8,	// (0x00024974) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002e58e) toolbar_button_pane_g

0xaf78,	// (0x00029d24) list_single_2graphic_pane_g1_cp3_ParamLimits

0xaf78,	// (0x00029d24) list_single_2graphic_pane_g1_cp3

0xaf84,	// (0x00029d30) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf84,	// (0x00029d30) list_single_2graphic_pane_g2_cp3

0xaf95,	// (0x00029d41) list_single_2graphic_pane_g3_cp3

0xaf9d,	// (0x00029d49) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaf9d,	// (0x00029d49) list_single_2graphic_pane_g4_cp3

0xafa9,	// (0x00029d55) list_single_2graphic_pane_t1_cp3_ParamLimits

0xafa9,	// (0x00029d55) list_single_2graphic_pane_t1_cp3

0xafc5,	// (0x00029d71) list_single_midp_graphic_pane_g2_ParamLimits

0xafc5,	// (0x00029d71) list_single_midp_graphic_pane_g2

0x5858,	// (0x00024604) aid_zoom_text_primary

0xed5d,	// (0x0002db09) aid_zoom_text_secondary

0x57e0,	// (0x0002458c) status_small_pane_g7_ParamLimits

0x57e0,	// (0x0002458c) status_small_pane_g7

0x5803,	// (0x000245af) status_small_pane_t1_ParamLimits

0x9b38,	// (0x000288e4) title_pane_g2

0x0003,

0xf566,	// (0x0002e312) title_pane_g

0x9d96,	// (0x00028b42) aid_size_cell_colour_1_pane_ParamLimits

0x9d96,	// (0x00028b42) aid_size_cell_colour_1_pane

0x9daa,	// (0x00028b56) aid_size_cell_colour_2_pane_ParamLimits

0x9daa,	// (0x00028b56) aid_size_cell_colour_2_pane

0x9dbe,	// (0x00028b6a) aid_size_cell_colour_3_pane_ParamLimits

0x9dbe,	// (0x00028b6a) aid_size_cell_colour_3_pane

0x9dd2,	// (0x00028b7e) aid_size_cell_colour_4_pane_ParamLimits

0x9dd2,	// (0x00028b7e) aid_size_cell_colour_4_pane

0x9f8f,	// (0x00028d3b) title_pane_stacon_g1_ParamLimits

0x9f8f,	// (0x00028d3b) title_pane_stacon_g1

0x618e,	// (0x00024f3a) popup_note_wait_window_g3_ParamLimits

0x618e,	// (0x00024f3a) popup_note_wait_window_g3

0x6204,	// (0x00024fb0) popup_note_wait_window_t5_ParamLimits

0x6204,	// (0x00024fb0) popup_note_wait_window_t5

0x22cc,	// (0x00021078) main_feb_china_hwr_fs_writing_pane

0xa800,	// (0x000295ac) popup_feb_china_hwr_fs_window_ParamLimits

0xa800,	// (0x000295ac) popup_feb_china_hwr_fs_window

0xafe7,	// (0x00029d93) aid_size_cell_hwr_fs_ParamLimits

0xafe7,	// (0x00029d93) aid_size_cell_hwr_fs

0x5ca0,	// (0x00024a4c) bg_popup_sub_pane_cp3_ParamLimits

0x5ca0,	// (0x00024a4c) bg_popup_sub_pane_cp3

0xaffc,	// (0x00029da8) grid_hwr_fs_pane_ParamLimits

0xaffc,	// (0x00029da8) grid_hwr_fs_pane

0xb014,	// (0x00029dc0) linegrid_hwr_fs_pane_ParamLimits

0xb014,	// (0x00029dc0) linegrid_hwr_fs_pane

0xb024,	// (0x00029dd0) cell_hwr_fs_pane_ParamLimits

0xb024,	// (0x00029dd0) cell_hwr_fs_pane

0x5cac,	// (0x00024a58) linegrid_hwr_fs_pane_g1_ParamLimits

0x5cac,	// (0x00024a58) linegrid_hwr_fs_pane_g1

0xb046,	// (0x00029df2) linegrid_hwr_fs_pane_g2_ParamLimits

0xb046,	// (0x00029df2) linegrid_hwr_fs_pane_g2

0x5cb8,	// (0x00024a64) linegrid_hwr_fs_pane_g3_ParamLimits

0x5cb8,	// (0x00024a64) linegrid_hwr_fs_pane_g3

0xb058,	// (0x00029e04) linegrid_hwr_fs_pane_g4_ParamLimits

0xb058,	// (0x00029e04) linegrid_hwr_fs_pane_g4

0xb072,	// (0x00029e1e) linegrid_hwr_fs_pane_g5_ParamLimits

0xb072,	// (0x00029e1e) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0002e5b9) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0002e5b9) linegrid_hwr_fs_pane_g

0x5cc4,	// (0x00024a70) cell_hwr_fs_pane_g1_ParamLimits

0x5cc4,	// (0x00024a70) cell_hwr_fs_pane_g1

0x5a9a,	// (0x00024846) cell_hwr_fs_pane_g2_ParamLimits

0x5a9a,	// (0x00024846) cell_hwr_fs_pane_g2

0xb088,	// (0x00029e34) cell_hwr_fs_pane_g3_ParamLimits

0xb088,	// (0x00029e34) cell_hwr_fs_pane_g3

0xb095,	// (0x00029e41) cell_hwr_fs_pane_g4_ParamLimits

0xb095,	// (0x00029e41) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0002e5c4) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0002e5c4) cell_hwr_fs_pane_g

0xb0a2,	// (0x00029e4e) cell_hwr_fs_pane_t1

0x22cc,	// (0x00021078) grid_highlight_pane_cp6

0x22cc,	// (0x00021078) main_idle_act2_pane

0x4d1a,	// (0x00023ac6) aid_inside_area_popup_secondary

0xb33c,	// (0x0002a0e8) aid_inside_area_window_primary_ParamLimits

0xb33c,	// (0x0002a0e8) aid_inside_area_window_primary

0x705c,	// (0x00025e08) ai2_news_ticker_pane

0x7064,	// (0x00025e10) aid_size_cell_ai1_link_ParamLimits

0x7064,	// (0x00025e10) aid_size_cell_ai1_link

0xb80b,	// (0x0002a5b7) popup_ai2_data_window_ParamLimits

0xb80b,	// (0x0002a5b7) popup_ai2_data_window

0x707e,	// (0x00025e2a) popup_ai2_link_window_ParamLimits

0x707e,	// (0x00025e2a) popup_ai2_link_window

0x5ca0,	// (0x00024a4c) bg_popup_sub_pane_cp4_ParamLimits

0x5ca0,	// (0x00024a4c) bg_popup_sub_pane_cp4

0x7092,	// (0x00025e3e) grid_ai2_link_pane_ParamLimits

0x7092,	// (0x00025e3e) grid_ai2_link_pane

0x70a9,	// (0x00025e55) popup_ai2_link_window_g1_ParamLimits

0x70a9,	// (0x00025e55) popup_ai2_link_window_g1

0x70b5,	// (0x00025e61) popup_ai2_link_window_g2_ParamLimits

0x70b5,	// (0x00025e61) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0002e790) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0002e790) popup_ai2_link_window_g

0x70c4,	// (0x00025e70) ai2_mp_button_pane

0x70cc,	// (0x00025e78) ai2_mp_volume_pane

0x5dc5,	// (0x00024b71) bg_popup_sub_pane_cp5_ParamLimits

0x5dc5,	// (0x00024b71) bg_popup_sub_pane_cp5

0x70d4,	// (0x00025e80) heading_ai2_gene_pane_ParamLimits

0x70d4,	// (0x00025e80) heading_ai2_gene_pane

0x70e0,	// (0x00025e8c) list_ai2_gene_pane_ParamLimits

0x70e0,	// (0x00025e8c) list_ai2_gene_pane

0x7128,	// (0x00025ed4) cell_ai2_link_pane_ParamLimits

0x7128,	// (0x00025ed4) cell_ai2_link_pane

0x713e,	// (0x00025eea) cell_ai2_link_pane_g1

0x22cc,	// (0x00021078) grid_highlight_pane_cp7

0xb854,	// (0x0002a600) ai2_mp_volume_pane_g1

0x71e3,	// (0x00025f8f) ai2_mp_volume_pane_g2

0xb838,	// (0x0002a5e4) list_ai2_gene_pane_t1

0x71db,	// (0x00025f87) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0002e7a9) ai2_mp_volume_pane_g

0xb85c,	// (0x0002a608) volume_small_pane_cp3

0x71eb,	// (0x00025f97) aid_size_cell_ai2_button

0x71f3,	// (0x00025f9f) grid_ai2_button_pane

0x71fc,	// (0x00025fa8) cell_ai2_button_pane_ParamLimits

0x71fc,	// (0x00025fa8) cell_ai2_button_pane

0x21dc,	// (0x00020f88) cell_ai2_button_pane_g1

0x22cc,	// (0x00021078) grid_highlight_pane_cp8

0x719b,	// (0x00025f47) ai2_gene_pane_t1_ParamLimits

0x719b,	// (0x00025f47) ai2_gene_pane_t1

0xa79c,	// (0x00029548) aid_height_parent_landscape

0xb4ee,	// (0x0002a29a) aid_height_set_list

0x62d7,	// (0x00025083) aid_size_parent

0x6ec7,	// (0x00025c73) aid_size_cell_graphic_pane_ParamLimits

0x70f0,	// (0x00025e9c) popup_ai2_data_window_g1_ParamLimits

0x70f0,	// (0x00025e9c) popup_ai2_data_window_g1

0x70fc,	// (0x00025ea8) ai2_news_ticker_pane_g1

0x7104,	// (0x00025eb0) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0002e795) ai2_news_ticker_pane_g

0x710c,	// (0x00025eb8) ai2_news_ticker_pane_t1

0x711a,	// (0x00025ec6) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0002e79a) ai2_news_ticker_pane_t

0x7147,	// (0x00025ef3) heading_ai2_gene_pane_g1

0x714f,	// (0x00025efb) heading_ai2_gene_pane_t1_ParamLimits

0x714f,	// (0x00025efb) heading_ai2_gene_pane_t1

0x7164,	// (0x00025f10) list_highlight_pane_cp6

0xb821,	// (0x0002a5cd) ai2_gene_pane_ParamLimits

0xb821,	// (0x0002a5cd) ai2_gene_pane

0xb846,	// (0x0002a5f2) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0002e79f) list_ai2_gene_pane_t

0x716c,	// (0x00025f18) list_highlight_pane_cp8_ParamLimits

0x716c,	// (0x00025f18) list_highlight_pane_cp8

0x717d,	// (0x00025f29) ai2_gene_pane_g1_ParamLimits

0x717d,	// (0x00025f29) ai2_gene_pane_g1

0x718f,	// (0x00025f3b) ai2_gene_pane_g2_ParamLimits

0x718f,	// (0x00025f3b) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0002e7a4) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0002e7a4) ai2_gene_pane_g

0x297a,	// (0x00021726) scroll_pane_cp12

0xa75b,	// (0x00029507) control_pane_t3_ParamLimits

0xa75b,	// (0x00029507) control_pane_t3

0x57f4,	// (0x000245a0) status_small_pane_g8_ParamLimits

0x57f4,	// (0x000245a0) status_small_pane_g8

0xa88c,	// (0x00029638) popup_find_window_ParamLimits

0xaa79,	// (0x00029825) popup_note_image_window_ParamLimits

0xed89,	// (0x0002db35) list_double2_graphic_pane_vc_g1_ParamLimits

0xed89,	// (0x0002db35) list_double2_graphic_pane_vc_g1

0xed95,	// (0x0002db41) list_double2_graphic_pane_vc_g2_ParamLimits

0xed95,	// (0x0002db41) list_double2_graphic_pane_vc_g2

0xeda1,	// (0x0002db4d) list_double2_graphic_pane_vc_g3_ParamLimits

0xeda1,	// (0x0002db4d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002e582) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002e582) list_double2_graphic_pane_vc_g

0xedad,	// (0x0002db59) list_double2_graphic_pane_vc_t1_ParamLimits

0xedad,	// (0x0002db59) list_double2_graphic_pane_vc_t1

0xedc3,	// (0x0002db6f) list_single_heading_pane_vc_g1_ParamLimits

0xedc3,	// (0x0002db6f) list_single_heading_pane_vc_g1

0xedcf,	// (0x0002db7b) list_single_heading_pane_vc_g2_ParamLimits

0xedcf,	// (0x0002db7b) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002e5a3) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002e5a3) list_single_heading_pane_vc_g

0xeddb,	// (0x0002db87) list_single_heading_pane_vc_t1_ParamLimits

0xeddb,	// (0x0002db87) list_single_heading_pane_vc_t1

0xedf3,	// (0x0002db9f) list_single_heading_pane_vc_t2_ParamLimits

0xedf3,	// (0x0002db9f) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0002e5a8) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002e5a8) list_single_heading_pane_vc_t

0x5bf0,	// (0x0002499c) list_setting_number_pane_vc_g1_ParamLimits

0x5bf0,	// (0x0002499c) list_setting_number_pane_vc_g1

0x5bfc,	// (0x000249a8) list_setting_number_pane_vc_g2_ParamLimits

0x5bfc,	// (0x000249a8) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0002e5ad) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0002e5ad) list_setting_number_pane_vc_g

0x5c08,	// (0x000249b4) list_setting_number_pane_vc_t1_ParamLimits

0x5c08,	// (0x000249b4) list_setting_number_pane_vc_t1

0x5c1c,	// (0x000249c8) list_setting_number_pane_vc_t2_ParamLimits

0x5c1c,	// (0x000249c8) list_setting_number_pane_vc_t2

0x5c38,	// (0x000249e4) list_setting_number_pane_vc_t3_ParamLimits

0x5c38,	// (0x000249e4) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0002e5b2) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0002e5b2) list_setting_number_pane_vc_t

0x5c64,	// (0x00024a10) set_value_pane_vc_ParamLimits

0x5c64,	// (0x00024a10) set_value_pane_vc

0x6e3f,	// (0x00025beb) list_double2_graphic_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double2_graphic_pane_vc

0x6e3f,	// (0x00025beb) list_double2_large_graphic_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double2_large_graphic_pane_vc

0x6e3f,	// (0x00025beb) list_double2_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double2_pane_vc

0x6e3f,	// (0x00025beb) list_double_graphic_heading_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_graphic_heading_pane_vc

0x6e3f,	// (0x00025beb) list_double_graphic_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_graphic_pane_vc

0x6e3f,	// (0x00025beb) list_double_heading_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_heading_pane_vc

0x6e3f,	// (0x00025beb) list_double_large_graphic_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_large_graphic_pane_vc

0x6e3f,	// (0x00025beb) list_double_number_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_number_pane_vc

0x6e3f,	// (0x00025beb) list_double_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_pane_vc

0x6e3f,	// (0x00025beb) list_double_time_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_double_time_pane_vc

0x6e3f,	// (0x00025beb) list_setting_number_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_setting_number_pane_vc

0x6e3f,	// (0x00025beb) list_setting_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_setting_pane_vc

0x6e3f,	// (0x00025beb) list_single_graphic_heading_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_single_graphic_heading_pane_vc

0x6e3f,	// (0x00025beb) list_single_heading_pane_vc_ParamLimits

0x6e3f,	// (0x00025beb) list_single_heading_pane_vc

0xeed0,	// (0x0002dc7c) list_single_number_heading_pane_vc_ParamLimits

0xeed0,	// (0x0002dc7c) list_single_number_heading_pane_vc

0xef6c,	// (0x0002dd18) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xef6c,	// (0x0002dd18) list_double_graphic_heading_pane_vc_g1

0xedc3,	// (0x0002db6f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xedc3,	// (0x0002db6f) list_double_graphic_heading_pane_vc_g2

0xedcf,	// (0x0002db7b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xedcf,	// (0x0002db7b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0002e7b0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002e7b0) list_double_graphic_heading_pane_vc_g

0xef78,	// (0x0002dd24) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xef78,	// (0x0002dd24) list_double_graphic_heading_pane_vc_t1

0xeddb,	// (0x0002db87) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeddb,	// (0x0002db87) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002e7b7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0002e7b7) list_double_graphic_heading_pane_vc_t

0x5bf0,	// (0x0002499c) list_setting_pane_vc_g1_ParamLimits

0x5bf0,	// (0x0002499c) list_setting_pane_vc_g1

0x5bfc,	// (0x000249a8) list_setting_pane_vc_g2_ParamLimits

0x5bfc,	// (0x000249a8) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0002e5ad) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0002e5ad) list_setting_pane_vc_g

0x7412,	// (0x000261be) list_setting_pane_vc_t1_ParamLimits

0x7412,	// (0x000261be) list_setting_pane_vc_t1

0x742e,	// (0x000261da) list_setting_pane_vc_t2_ParamLimits

0x742e,	// (0x000261da) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0002e7e5) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0002e7e5) list_setting_pane_vc_t

0x5c64,	// (0x00024a10) set_value_pane_cp_vc_ParamLimits

0x5c64,	// (0x00024a10) set_value_pane_cp_vc

0xedc3,	// (0x0002db6f) list_single_number_heading_pane_vc_g1_ParamLimits

0xedc3,	// (0x0002db6f) list_single_number_heading_pane_vc_g1

0xedcf,	// (0x0002db7b) list_single_number_heading_pane_vc_g2_ParamLimits

0xedcf,	// (0x0002db7b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002e5a3) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002e5a3) list_single_number_heading_pane_vc_g

0xeddb,	// (0x0002db87) list_single_number_heading_pane_vc_t1_ParamLimits

0xeddb,	// (0x0002db87) list_single_number_heading_pane_vc_t1

0xef8c,	// (0x0002dd38) list_single_number_heading_pane_vc_t2_ParamLimits

0xef8c,	// (0x0002dd38) list_single_number_heading_pane_vc_t2

0xefa0,	// (0x0002dd4c) list_single_number_heading_pane_vc_t3_ParamLimits

0xefa0,	// (0x0002dd4c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0002e7ea) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002e7ea) list_single_number_heading_pane_vc_t

0xed89,	// (0x0002db35) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xed89,	// (0x0002db35) list_single_graphic_heading_pane_vc_g1

0xedc3,	// (0x0002db6f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xedc3,	// (0x0002db6f) list_single_graphic_heading_pane_vc_g4

0xedcf,	// (0x0002db7b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xedcf,	// (0x0002db7b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa45,	// (0x0002e7f1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa45,	// (0x0002e7f1) list_single_graphic_heading_pane_vc_g

0xeddb,	// (0x0002db87) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeddb,	// (0x0002db87) list_single_graphic_heading_pane_vc_t1

0xefb2,	// (0x0002dd5e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xefb2,	// (0x0002dd5e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x0002e7f8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x0002e7f8) list_single_graphic_heading_pane_vc_t

0xedc3,	// (0x0002db6f) list_double2_pane_vc_g1_ParamLimits

0xedc3,	// (0x0002db6f) list_double2_pane_vc_g1

0xedcf,	// (0x0002db7b) list_double2_pane_vc_g2_ParamLimits

0xedcf,	// (0x0002db7b) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002e5a3) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002e5a3) list_double2_pane_vc_g

0xefc6,	// (0x0002dd72) list_double2_pane_vc_t1_ParamLimits

0xefc6,	// (0x0002dd72) list_double2_pane_vc_t1

0xefdc,	// (0x0002dd88) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xefdc,	// (0x0002dd88) list_double2_large_graphic_pane_vc_g1

0xedc3,	// (0x0002db6f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xedc3,	// (0x0002db6f) list_double2_large_graphic_pane_vc_g2

0xedcf,	// (0x0002db7b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xedcf,	// (0x0002db7b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa51,	// (0x0002e7fd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x0002e7fd) list_double2_large_graphic_pane_vc_g

0xefe8,	// (0x0002dd94) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xefe8,	// (0x0002dd94) list_double2_large_graphic_pane_vc_t1

0xeffe,	// (0x0002ddaa) list_double_time_pane_vc_g1_ParamLimits

0xeffe,	// (0x0002ddaa) list_double_time_pane_vc_g1

0xf00a,	// (0x0002ddb6) list_double_time_pane_vc_g2_ParamLimits

0xf00a,	// (0x0002ddb6) list_double_time_pane_vc_g2

0x0001,

0xfa58,	// (0x0002e804) list_double_time_pane_vc_g_ParamLimits

0xfa58,	// (0x0002e804) list_double_time_pane_vc_g

0xf016,	// (0x0002ddc2) list_double_time_pane_vc_t1_ParamLimits

0xf016,	// (0x0002ddc2) list_double_time_pane_vc_t1

0xf031,	// (0x0002dddd) list_double_time_pane_vc_t2_ParamLimits

0xf031,	// (0x0002dddd) list_double_time_pane_vc_t2

0xf06c,	// (0x0002de18) list_double_time_pane_vc_t3_ParamLimits

0xf06c,	// (0x0002de18) list_double_time_pane_vc_t3

0xf084,	// (0x0002de30) list_double_time_pane_vc_t4_ParamLimits

0xf084,	// (0x0002de30) list_double_time_pane_vc_t4

0x0003,

0xfa5d,	// (0x0002e809) list_double_time_pane_vc_t_ParamLimits

0xfa5d,	// (0x0002e809) list_double_time_pane_vc_t

0xedc3,	// (0x0002db6f) list_double_pane_vc_g1_ParamLimits

0xedc3,	// (0x0002db6f) list_double_pane_vc_g1

0xedcf,	// (0x0002db7b) list_double_pane_vc_g2_ParamLimits

0xedcf,	// (0x0002db7b) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002e5a3) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002e5a3) list_double_pane_vc_g

0xf098,	// (0x0002de44) list_double_pane_vc_t1_ParamLimits

0xf098,	// (0x0002de44) list_double_pane_vc_t1

0xf0ac,	// (0x0002de58) list_double_pane_vc_t2_ParamLimits

0xf0ac,	// (0x0002de58) list_double_pane_vc_t2

0x0001,

0xfa66,	// (0x0002e812) list_double_pane_vc_t_ParamLimits

0xfa66,	// (0x0002e812) list_double_pane_vc_t

0xedc3,	// (0x0002db6f) list_double_number_pane_vc_g1_ParamLimits

0xedc3,	// (0x0002db6f) list_double_number_pane_vc_g1

0xedcf,	// (0x0002db7b) list_double_number_pane_vc_g2_ParamLimits

0xedcf,	// (0x0002db7b) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002e5a3) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002e5a3) list_double_number_pane_vc_g

0xf0c4,	// (0x0002de70) list_double_number_pane_vc_t1_ParamLimits

0xf0c4,	// (0x0002de70) list_double_number_pane_vc_t1

0xf0d8,	// (0x0002de84) list_double_number_pane_vc_t2_ParamLimits

0xf0d8,	// (0x0002de84) list_double_number_pane_vc_t2

0xf0ac,	// (0x0002de58) list_double_number_pane_vc_t3_ParamLimits

0xf0ac,	// (0x0002de58) list_double_number_pane_vc_t3

0x0002,

0xfa6b,	// (0x0002e817) list_double_number_pane_vc_t_ParamLimits

0xfa6b,	// (0x0002e817) list_double_number_pane_vc_t

0xf0ec,	// (0x0002de98) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf0ec,	// (0x0002de98) list_double_large_graphic_pane_vc_g1

0xf0f8,	// (0x0002dea4) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf0f8,	// (0x0002dea4) list_double_large_graphic_pane_vc_g2

0xedcf,	// (0x0002db7b) list_double_large_graphic_pane_vc_g3_ParamLimits

0xedcf,	// (0x0002db7b) list_double_large_graphic_pane_vc_g3

0xf107,	// (0x0002deb3) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf107,	// (0x0002deb3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa72,	// (0x0002e81e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0002e81e) list_double_large_graphic_pane_vc_g

0xf113,	// (0x0002debf) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf113,	// (0x0002debf) list_double_large_graphic_pane_vc_t1

0xf127,	// (0x0002ded3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf127,	// (0x0002ded3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x0002e827) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002e827) list_double_large_graphic_pane_vc_t

0xedc3,	// (0x0002db6f) list_double_heading_pane_vc_g1_ParamLimits

0xedc3,	// (0x0002db6f) list_double_heading_pane_vc_g1

0xedcf,	// (0x0002db7b) list_double_heading_pane_vc_g2_ParamLimits

0xedcf,	// (0x0002db7b) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002e5a3) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002e5a3) list_double_heading_pane_vc_g

0xf140,	// (0x0002deec) list_double_heading_pane_vc_t1_ParamLimits

0xf140,	// (0x0002deec) list_double_heading_pane_vc_t1

0xeddb,	// (0x0002db87) list_double_heading_pane_vc_t2_ParamLimits

0xeddb,	// (0x0002db87) list_double_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x0002e82c) list_double_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x0002e82c) list_double_heading_pane_vc_t

0xf154,	// (0x0002df00) list_double_graphic_pane_vc_g1_ParamLimits

0xf154,	// (0x0002df00) list_double_graphic_pane_vc_g1

0xf164,	// (0x0002df10) list_double_graphic_pane_vc_g2_ParamLimits

0xf164,	// (0x0002df10) list_double_graphic_pane_vc_g2

0xf173,	// (0x0002df1f) list_double_graphic_pane_vc_g3_ParamLimits

0xf173,	// (0x0002df1f) list_double_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x0002e831) list_double_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x0002e831) list_double_graphic_pane_vc_g

0xf17f,	// (0x0002df2b) list_double_graphic_pane_vc_t1_ParamLimits

0xf17f,	// (0x0002df2b) list_double_graphic_pane_vc_t1

0xf0ac,	// (0x0002de58) list_double_graphic_pane_vc_t2_ParamLimits

0xf0ac,	// (0x0002de58) list_double_graphic_pane_vc_t2

0x0001,

0xfa8c,	// (0x0002e838) list_double_graphic_pane_vc_t_ParamLimits

0xfa8c,	// (0x0002e838) list_double_graphic_pane_vc_t

0x9754,	// (0x00028500) aid_size_cell_fastswap

0x975c,	// (0x00028508) aid_size_cell_touch_ParamLimits

0x975c,	// (0x00028508) aid_size_cell_touch

0x99c1,	// (0x0002876d) popup_fast_swap_wide_window_ParamLimits

0x99c1,	// (0x0002876d) popup_fast_swap_wide_window

0x9acb,	// (0x00028877) touch_pane_ParamLimits

0x9acb,	// (0x00028877) touch_pane

0x4c00,	// (0x000239ac) button_value_adjust_pane_cp2

0xea81,	// (0x0002d82d) button_value_adjust_pane_cp4

0xeaa1,	// (0x0002d84d) form_field_data_pane_cp2

0xeac0,	// (0x0002d86c) form_field_data_wide_pane_cp2

0x4f4d,	// (0x00023cf9) bg_scroll_pane_ParamLimits

0xa186,	// (0x00028f32) scroll_handle_pane_ParamLimits

0xa19a,	// (0x00028f46) scroll_sc2_down_pane_ParamLimits

0xa19a,	// (0x00028f46) scroll_sc2_down_pane

0x4f7e,	// (0x00023d2a) scroll_sc2_up_pane_ParamLimits

0x4f7e,	// (0x00023d2a) scroll_sc2_up_pane

0xb999,	// (0x0002a745) grid_wheel_folder_pane_g1_ParamLimits

0xb999,	// (0x0002a745) grid_wheel_folder_pane_g1

0xa422,	// (0x000291ce) clock_nsta_pane_cp2_ParamLimits

0xa422,	// (0x000291ce) clock_nsta_pane_cp2

0x9f35,	// (0x00028ce1) listscroll_midp_pane_ParamLimits

0xa4d7,	// (0x00029283) midp_canvas_pane

0x5848,	// (0x000245f4) nsta_clock_indic_pane

0x5880,	// (0x0002462c) listscroll_form_pane_vc

0x5888,	// (0x00024634) listscroll_set_pane_vc_ParamLimits

0x5888,	// (0x00024634) listscroll_set_pane_vc

0xaced,	// (0x00029a99) clock_nsta_pane

0xacfa,	// (0x00029aa6) indicator_nsta_pane

0x5ace,	// (0x0002487a) bg_popup_sub_pane_cp2_ParamLimits

0x5ae2,	// (0x0002488e) find_pane_cp2_ParamLimits

0x5ae2,	// (0x0002488e) find_pane_cp2

0x5af8,	// (0x000248a4) grid_toobar_pane_ParamLimits

0x5c74,	// (0x00024a20) list_form_gen_pane_vc_ParamLimits

0x5c74,	// (0x00024a20) list_form_gen_pane_vc

0x5c8a,	// (0x00024a36) scroll_pane_cp8_vc_ParamLimits

0x5c8a,	// (0x00024a36) scroll_pane_cp8_vc

0x5cda,	// (0x00024a86) data_form_wide_pane_vc_ParamLimits

0x5cda,	// (0x00024a86) data_form_wide_pane_vc

0x5ce6,	// (0x00024a92) form_field_data_wide_pane_vc_g1

0x5cee,	// (0x00024a9a) form_field_data_wide_pane_vc_t1_ParamLimits

0x5cee,	// (0x00024a9a) form_field_data_wide_pane_vc_t1

0x4c14,	// (0x000239c0) input_focus_pane_cp6_vc_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_cp6_vc

0xb181,	// (0x00029f2d) list_midp_pane_ParamLimits

0xb18d,	// (0x00029f39) scroll_pane_cp16_ParamLimits

0xb18d,	// (0x00029f39) scroll_pane_cp16

0x5f63,	// (0x00024d0f) button_value_adjust_pane_ParamLimits

0x5f63,	// (0x00024d0f) button_value_adjust_pane

0xb4ff,	// (0x0002a2ab) button_value_adjust_pane_cp6_ParamLimits

0xb4ff,	// (0x0002a2ab) button_value_adjust_pane_cp6

0xb629,	// (0x0002a3d5) settings_code_pane_cp_ParamLimits

0xb629,	// (0x0002a3d5) settings_code_pane_cp

0x21dc,	// (0x00020f88) cell_touch_pane_g1

0x21dc,	// (0x00020f88) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x0002e4c7) cell_touch_pane_g

0xb865,	// (0x0002a611) cell_touch_pane_cp_ParamLimits

0xb865,	// (0x0002a611) cell_touch_pane_cp

0xb875,	// (0x0002a621) cell_touch_pane_ParamLimits

0xb875,	// (0x0002a621) cell_touch_pane

0x21dc,	// (0x00020f88) scroll_sc2_down_pane_g1

0x21dc,	// (0x00020f88) scroll_sc2_up_pane_g1

0x22cc,	// (0x00021078) bg_set_opt_pane_cp4_vc

0x720e,	// (0x00025fba) list_set_graphic_pane_vc_g1_ParamLimits

0x720e,	// (0x00025fba) list_set_graphic_pane_vc_g1

0x721a,	// (0x00025fc6) list_set_graphic_pane_vc_g2_ParamLimits

0x721a,	// (0x00025fc6) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0002e7bc) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0002e7bc) list_set_graphic_pane_vc_g

0x7226,	// (0x00025fd2) text_primary_small_cp13_vc_ParamLimits

0x7226,	// (0x00025fd2) text_primary_small_cp13_vc

0x723e,	// (0x00025fea) list_set_graphic_pane_vc_ParamLimits

0x723e,	// (0x00025fea) list_set_graphic_pane_vc

0x22cc,	// (0x00021078) input_focus_pane_cp2_vc

0x21dc,	// (0x00020f88) setting_code_pane_vc_g1

0x7252,	// (0x00025ffe) setting_code_pane_vc_t1

0x7260,	// (0x0002600c) set_text_pane_vc_t1_ParamLimits

0x7260,	// (0x0002600c) set_text_pane_vc_t1

0x22cc,	// (0x00021078) input_focus_pane_cp1_vc

0x727b,	// (0x00026027) list_set_text_pane_vc

0x21dc,	// (0x00020f88) setting_text_pane_vc_g1

0x22cc,	// (0x00021078) bg_set_opt_pane_cp2_vc

0x7285,	// (0x00026031) setting_slider_graphic_pane_vc_g1

0x728d,	// (0x00026039) setting_slider_graphic_pane_vc_t1

0x729b,	// (0x00026047) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002e7c1) setting_slider_graphic_pane_vc_t

0x72a9,	// (0x00026055) slider_set_pane_cp_vc

0x72b1,	// (0x0002605d) slider_set_pane_vc_g1

0x72ba,	// (0x00026066) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0002e7c6) slider_set_pane_vc_g

0x4c7b,	// (0x00023a27) set_opt_bg_pane_g1_copy1

0x4c83,	// (0x00023a2f) set_opt_bg_pane_g2_copy1

0x72e6,	// (0x00026092) set_opt_bg_pane_g3_copy1

0x4c93,	// (0x00023a3f) set_opt_bg_pane_g4_copy1

0x4c9b,	// (0x00023a47) set_opt_bg_pane_g5_copy1

0x4ca3,	// (0x00023a4f) set_opt_bg_pane_g6_copy1

0x72f0,	// (0x0002609c) set_opt_bg_pane_g7_copy1

0x72f8,	// (0x000260a4) set_opt_bg_pane_g8_copy1

0x7302,	// (0x000260ae) set_opt_bg_pane_g9_copy1

0x22cc,	// (0x00021078) bg_set_opt_pane_cp_vc

0x730c,	// (0x000260b8) setting_slider_pane_vc_t1

0x728d,	// (0x00026039) setting_slider_pane_vc_t2

0x729b,	// (0x00026047) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0002e7d5) setting_slider_pane_vc_t

0x72a9,	// (0x00026055) slider_set_pane_vc

0xb1d3,	// (0x00029f7f) volume_set_pane_vc_g1

0xb1dc,	// (0x00029f88) volume_set_pane_vc_g2

0xb1e5,	// (0x00029f91) volume_set_pane_vc_g3

0xb1ee,	// (0x00029f9a) volume_set_pane_vc_g4

0xb1f7,	// (0x00029fa3) volume_set_pane_vc_g5

0xb200,	// (0x00029fac) volume_set_pane_vc_g6

0xb209,	// (0x00029fb5) volume_set_pane_vc_g7

0xb212,	// (0x00029fbe) volume_set_pane_vc_g8

0xb21b,	// (0x00029fc7) volume_set_pane_vc_g9

0xb224,	// (0x00029fd0) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0002e673) volume_set_pane_vc_g

0x731b,	// (0x000260c7) volume_set_pane_vc

0x7323,	// (0x000260cf) button_value_adjust_pane_cp1_vc

0x732d,	// (0x000260d9) list_highlight_pane_cp2_vc

0x7336,	// (0x000260e2) list_set_pane_vc_ParamLimits

0x7336,	// (0x000260e2) list_set_pane_vc

0x73a0,	// (0x0002614c) main_pane_set_vc_t1_ParamLimits

0x73a0,	// (0x0002614c) main_pane_set_vc_t1

0x73b5,	// (0x00026161) main_pane_set_vc_t2_ParamLimits

0x73b5,	// (0x00026161) main_pane_set_vc_t2

0x73c7,	// (0x00026173) main_pane_set_vc_t3_ParamLimits

0x73c7,	// (0x00026173) main_pane_set_vc_t3

0x73db,	// (0x00026187) main_pane_set_vc_t4_ParamLimits

0x73db,	// (0x00026187) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0002e7dc) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0002e7dc) main_pane_set_vc_t

0x73ef,	// (0x0002619b) setting_code_pane_vc_ParamLimits

0x73ef,	// (0x0002619b) setting_code_pane_vc

0x7400,	// (0x000261ac) setting_slider_graphic_pane_vc

0x7400,	// (0x000261ac) setting_slider_pane_vc

0x7400,	// (0x000261ac) setting_text_pane_vc

0x7400,	// (0x000261ac) setting_volume_pane_vc

0x740a,	// (0x000261b6) scroll_pane_cp121_vc

0x4bee,	// (0x0002399a) set_content_pane_vc

0x744a,	// (0x000261f6) button_value_adjust_pane_g1

0x7453,	// (0x000261ff) button_value_adjust_pane_g2

0x0001,

0xfa91,	// (0x0002e83d) button_value_adjust_pane_g

0x745c,	// (0x00026208) form_field_slider_wide_pane_vc_t1_ParamLimits

0x745c,	// (0x00026208) form_field_slider_wide_pane_vc_t1

0x7470,	// (0x0002621c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7470,	// (0x0002621c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa96,	// (0x0002e842) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0002e842) form_field_slider_wide_pane_vc_t

0x23d5,	// (0x00021181) input_focus_pane_cp10_vc_ParamLimits

0x23d5,	// (0x00021181) input_focus_pane_cp10_vc

0x7484,	// (0x00026230) slider_cont_pane_cp1_vc_ParamLimits

0x7484,	// (0x00026230) slider_cont_pane_cp1_vc

0x72b1,	// (0x0002605d) slider_form_pane_g1_cp2

0x72ba,	// (0x00026066) slider_form_pane_g2_cp2

0x749f,	// (0x0002624b) form_field_slider_pane_vc_t3

0x74ad,	// (0x00026259) form_field_slider_pane_vc_t4

0x74bb,	// (0x00026267) slider_form_pane_vc_ParamLimits

0x74bb,	// (0x00026267) slider_form_pane_vc

0x74c8,	// (0x00026274) form_field_slider_pane_vc_t1_ParamLimits

0x74c8,	// (0x00026274) form_field_slider_pane_vc_t1

0x7470,	// (0x0002621c) form_field_slider_pane_vc_t2_ParamLimits

0x7470,	// (0x0002621c) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x0002e852) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x0002e852) form_field_slider_pane_vc_t

0x23d5,	// (0x00021181) input_focus_pane_cp9_vc_ParamLimits

0x23d5,	// (0x00021181) input_focus_pane_cp9_vc

0x74e4,	// (0x00026290) slider_cont_pane_vc_ParamLimits

0x74e4,	// (0x00026290) slider_cont_pane_vc

0x74f8,	// (0x000262a4) list_form_graphic_pane_cp_vc_ParamLimits

0x74f8,	// (0x000262a4) list_form_graphic_pane_cp_vc

0x5ce6,	// (0x00024a92) form_field_popup_wide_pane_vc_g1

0x750d,	// (0x000262b9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x750d,	// (0x000262b9) form_field_popup_wide_pane_vc_t1

0x4c14,	// (0x000239c0) input_focus_pane_cp8_vc_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_cp8_vc

0x7524,	// (0x000262d0) list_form_wide_pane_vc_ParamLimits

0x7524,	// (0x000262d0) list_form_wide_pane_vc

0x7530,	// (0x000262dc) list_form_graphic_pane_vc_g1

0x7538,	// (0x000262e4) list_form_graphic_pane_vc_t1_ParamLimits

0x7538,	// (0x000262e4) list_form_graphic_pane_vc_t1

0x23e3,	// (0x0002118f) list_highlight_pane_cp5_vc_ParamLimits

0x23e3,	// (0x0002118f) list_highlight_pane_cp5_vc

0x7554,	// (0x00026300) list_form_graphic_pane_vc_ParamLimits

0x7554,	// (0x00026300) list_form_graphic_pane_vc

0x5ce6,	// (0x00024a92) form_field_popup_pane_vc_g1

0x756a,	// (0x00026316) form_field_popup_pane_vc_t1_ParamLimits

0x756a,	// (0x00026316) form_field_popup_pane_vc_t1

0x4c14,	// (0x000239c0) input_focus_pane_cp7_vc_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_cp7_vc

0x7581,	// (0x0002632d) list_form_pane_vc_ParamLimits

0x7581,	// (0x0002632d) list_form_pane_vc

0x758d,	// (0x00026339) data_form_pane_vc_t1_ParamLimits

0x758d,	// (0x00026339) data_form_pane_vc_t1

0x4c7b,	// (0x00023a27) input_focus_pane_vc_g1

0x4c83,	// (0x00023a2f) input_focus_pane_vc_g2

0x4c8b,	// (0x00023a37) input_focus_pane_vc_g3

0x4c93,	// (0x00023a3f) input_focus_pane_vc_g4

0x4c9b,	// (0x00023a47) input_focus_pane_vc_g5

0x4ca3,	// (0x00023a4f) input_focus_pane_vc_g6

0x4cab,	// (0x00023a57) input_focus_pane_vc_g7

0x4cb3,	// (0x00023a5f) input_focus_pane_vc_g8

0x4cbb,	// (0x00023a67) input_focus_pane_vc_g9

0x21dc,	// (0x00020f88) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x0002e450) input_focus_pane_vc_g

0x5cda,	// (0x00024a86) data_form_pane_vc_ParamLimits

0x5cda,	// (0x00024a86) data_form_pane_vc

0x5ce6,	// (0x00024a92) form_field_data_pane_vc_g1

0x75a8,	// (0x00026354) form_field_data_pane_vc_t1_ParamLimits

0x75a8,	// (0x00026354) form_field_data_pane_vc_t1

0x4c14,	// (0x000239c0) input_focus_pane_vc_ParamLimits

0x4c14,	// (0x000239c0) input_focus_pane_vc

0x75c2,	// (0x0002636e) button_value_adjust_pane_cp3_vc

0x75ca,	// (0x00026376) button_value_adjust_pane_cp5_vc

0x75d2,	// (0x0002637e) form_field_data_pane_vc_ParamLimits

0x75d2,	// (0x0002637e) form_field_data_pane_vc

0x75e9,	// (0x00026395) form_field_data_pane_vc_cp2

0x75f1,	// (0x0002639d) form_field_data_wide_pane_vc_ParamLimits

0x75f1,	// (0x0002639d) form_field_data_wide_pane_vc

0x7607,	// (0x000263b3) form_field_data_wide_pane_vc_cp2

0x760f,	// (0x000263bb) form_field_popup_pane_vc_ParamLimits

0x760f,	// (0x000263bb) form_field_popup_pane_vc

0x7626,	// (0x000263d2) form_field_popup_wide_pane_vc_ParamLimits

0x7626,	// (0x000263d2) form_field_popup_wide_pane_vc

0x763c,	// (0x000263e8) form_field_slider_pane_vc_ParamLimits

0x763c,	// (0x000263e8) form_field_slider_pane_vc

0x764f,	// (0x000263fb) form_field_slider_wide_pane_vc_ParamLimits

0x764f,	// (0x000263fb) form_field_slider_wide_pane_vc

0xb887,	// (0x0002a633) grid_touch_1_pane_ParamLimits

0xb887,	// (0x0002a633) grid_touch_1_pane

0xb893,	// (0x0002a63f) grid_touch_2_pane_ParamLimits

0xb893,	// (0x0002a63f) grid_touch_2_pane

0x583a,	// (0x000245e6) touch_pane_g1_ParamLimits

0x583a,	// (0x000245e6) touch_pane_g1

0x7670,	// (0x0002641c) cell_app_pane_cp_wide_ParamLimits

0x7670,	// (0x0002641c) cell_app_pane_cp_wide

0x7681,	// (0x0002642d) grid_popup_fast_wide_pane_ParamLimits

0x7681,	// (0x0002642d) grid_popup_fast_wide_pane

0x7695,	// (0x00026441) scroll_pane_cp19_ParamLimits

0x7695,	// (0x00026441) scroll_pane_cp19

0x22cc,	// (0x00021078) bg_popup_window_pane_cp20

0x76a9,	// (0x00026455) listscroll_popup_fast_wide_pane

0x23e3,	// (0x0002118f) grid_indicator_nsta_pane

0x76b1,	// (0x0002645d) clock_nsta_pane_g1

0x76ba,	// (0x00026466) clock_nsta_pane_t1

0xb8ab,	// (0x0002a657) cell_indicator_nsta_pane_ParamLimits

0xb8ab,	// (0x0002a657) cell_indicator_nsta_pane

0x7662,	// (0x0002640e) cell_indicator_nsta_pane_g1

0xb8e3,	// (0x0002a68f) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0002e85c) cell_indicator_nsta_pane_g

0x76d6,	// (0x00026482) clock_nsta_pane_cp

0x76de,	// (0x0002648a) indicator_nsta_pane_cp

0x76e7,	// (0x00026493) nsta_clock_indic_pane_g1

0x241f,	// (0x000211cb) grid_indicator_pane

0x5073,	// (0x00023e1f) scroll_pane_cp29

0xa371,	// (0x0002911d) indicator_nsta_pane_cp2_ParamLimits

0xa371,	// (0x0002911d) indicator_nsta_pane_cp2

0x23e3,	// (0x0002118f) main_apps_wheel_pane

0x5e02,	// (0x00024bae) form_midp_field_text_pane_ParamLimits

0x5f35,	// (0x00024ce1) scroll_bar_cp050_ParamLimits

0x7750,	// (0x000264fc) cell_indicator_pane_ParamLimits

0x7750,	// (0x000264fc) cell_indicator_pane

0x7767,	// (0x00026513) cell_indicator_pane_g1

0xb8f9,	// (0x0002a6a5) grid_wheel_folder_pane_ParamLimits

0xb8f9,	// (0x0002a6a5) grid_wheel_folder_pane

0xb90d,	// (0x0002a6b9) list_wheel_apps_pane_ParamLimits

0xb90d,	// (0x0002a6b9) list_wheel_apps_pane

0xb91e,	// (0x0002a6ca) main_apps_wheel_pane_g1_ParamLimits

0xb91e,	// (0x0002a6ca) main_apps_wheel_pane_g1

0xb932,	// (0x0002a6de) main_apps_wheel_pane_g2_ParamLimits

0xb932,	// (0x0002a6de) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0002e878) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0002e878) main_apps_wheel_pane_g

0xb94a,	// (0x0002a6f6) main_apps_wheel_pane_t1_ParamLimits

0xb94a,	// (0x0002a6f6) main_apps_wheel_pane_t1

0xb96d,	// (0x0002a719) list_wheel_apps_pane_g1

0xb975,	// (0x0002a721) list_wheel_apps_pane_g2

0xb97d,	// (0x0002a729) list_wheel_apps_pane_g3

0xb985,	// (0x0002a731) list_wheel_apps_pane_g4

0xb98f,	// (0x0002a73b) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0002e87d) list_wheel_apps_pane_g

0x54ac,	// (0x00024258) navi_icon_text_pane

0xac35,	// (0x000299e1) aid_fill_nsta

0x7771,	// (0x0002651d) navi_icon_text_pane_g1

0x777d,	// (0x00026529) navi_icon_text_pane_t1

0xa4bf,	// (0x0002926b) list_set_graphic_pane_t1_ParamLimits

0xa4bf,	// (0x0002926b) list_set_graphic_pane_t1

0x6698,	// (0x00025444) popup_midp_note_alarm_window_t6_ParamLimits

0x6698,	// (0x00025444) popup_midp_note_alarm_window_t6

0x66aa,	// (0x00025456) popup_midp_note_alarm_window_t7_ParamLimits

0x66aa,	// (0x00025456) popup_midp_note_alarm_window_t7

0x66bc,	// (0x00025468) popup_midp_note_alarm_window_t8_ParamLimits

0x66bc,	// (0x00025468) popup_midp_note_alarm_window_t8

0x66ce,	// (0x0002547a) popup_midp_note_alarm_window_t9_ParamLimits

0x66ce,	// (0x0002547a) popup_midp_note_alarm_window_t9

0x66e0,	// (0x0002548c) popup_midp_note_alarm_window_t10_ParamLimits

0x66e0,	// (0x0002548c) popup_midp_note_alarm_window_t10

0x66f2,	// (0x0002549e) popup_midp_note_alarm_window_t11_ParamLimits

0x66f2,	// (0x0002549e) popup_midp_note_alarm_window_t11

0x6704,	// (0x000254b0) scroll_pane_cp17_ParamLimits

0x6704,	// (0x000254b0) scroll_pane_cp17

0xb1d3,	// (0x00029f7f) volume_small_pane_cp_g1

0xb9b2,	// (0x0002a75e) volume_small_pane_cp_g2

0xb9bb,	// (0x0002a767) volume_small_pane_cp_g3

0xb9c4,	// (0x0002a770) volume_small_pane_cp_g4

0xb9cd,	// (0x0002a779) volume_small_pane_cp_g5

0xb9d6,	// (0x0002a782) volume_small_pane_cp_g6

0xb9df,	// (0x0002a78b) volume_small_pane_cp_g7

0xb9e8,	// (0x0002a794) volume_small_pane_cp_g8

0xb9f1,	// (0x0002a79d) volume_small_pane_cp_g9

0xb9fa,	// (0x0002a7a6) volume_small_pane_cp_g10

0x5656,	// (0x00024402) midp_ticker_pane_g1_ParamLimits

0x5662,	// (0x0002440e) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002e51c) midp_ticker_pane_g_ParamLimits

0x566e,	// (0x0002441a) midp_ticker_pane_t1_ParamLimits

0xac4b,	// (0x000299f7) aid_fill_nsta_2

0x5f21,	// (0x00024ccd) list_form2_midp_pane

0x6e0e,	// (0x00025bba) midp_editing_number_pane_ParamLimits

0x6e1d,	// (0x00025bc9) midp_ticker_pane_ParamLimits

0x778f,	// (0x0002653b) form2_midp_field_pane

0x7797,	// (0x00026543) scroll_pane_cp51

0x77b7,	// (0x00026563) form2_midp_button_pane_ParamLimits

0x77b7,	// (0x00026563) form2_midp_button_pane

0x77c9,	// (0x00026575) form2_midp_content_pane_ParamLimits

0x77c9,	// (0x00026575) form2_midp_content_pane

0x77e3,	// (0x0002658f) form2_midp_field_choice_group_pane

0x77eb,	// (0x00026597) form2_midp_field_pane_g1

0x77f3,	// (0x0002659f) form2_midp_field_pane_g2

0x77fb,	// (0x000265a7) form2_midp_field_pane_g3

0x7803,	// (0x000265af) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0002e8a2) form2_midp_field_pane_g

0x780b,	// (0x000265b7) form2_midp_gauge_slider_pane

0x7813,	// (0x000265bf) form2_midp_gauge_wait_pane

0x781b,	// (0x000265c7) form2_midp_image_pane_ParamLimits

0x781b,	// (0x000265c7) form2_midp_image_pane

0x7836,	// (0x000265e2) form2_midp_label_pane_ParamLimits

0x7836,	// (0x000265e2) form2_midp_label_pane

0xba1f,	// (0x0002a7cb) form2_midp_label_pane_cp_ParamLimits

0xba1f,	// (0x0002a7cb) form2_midp_label_pane_cp

0x784f,	// (0x000265fb) form2_midp_string_pane_ParamLimits

0x784f,	// (0x000265fb) form2_midp_string_pane

0xf193,	// (0x0002df3f) form2_midp_text_pane_ParamLimits

0xf193,	// (0x0002df3f) form2_midp_text_pane

0x7861,	// (0x0002660d) form2_midp_time_pane

0x7871,	// (0x0002661d) input_focus_pane_cp51_ParamLimits

0x7871,	// (0x0002661d) input_focus_pane_cp51

0x7889,	// (0x00026635) form2_midp_label_pane_t1_ParamLimits

0x7889,	// (0x00026635) form2_midp_label_pane_t1

0xf1ae,	// (0x0002df5a) form2_mdip_text_pane_t1_ParamLimits

0xf1ae,	// (0x0002df5a) form2_mdip_text_pane_t1

0xf1cc,	// (0x0002df78) form2_midp_time_pane_t1

0x78d2,	// (0x0002667e) form2_midp_gauge_slider_pane_t1

0xba40,	// (0x0002a7ec) form2_midp_gauge_slider_pane_t2

0xba52,	// (0x0002a7fe) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0002e8ab) form2_midp_gauge_slider_pane_t

0x78e4,	// (0x00026690) form2_midp_slider_pane

0x78f0,	// (0x0002669c) form2_midp_gauge_wait_pane_t1

0x78fe,	// (0x000266aa) form2_midp_wait_pane_ParamLimits

0x78fe,	// (0x000266aa) form2_midp_wait_pane

0xb0b0,	// (0x00029e5c) list_single_2graphic_pane_cp4_ParamLimits

0xb0b0,	// (0x00029e5c) list_single_2graphic_pane_cp4

0xba64,	// (0x0002a810) list_single_midp_graphic_pane_cp_ParamLimits

0xba64,	// (0x0002a810) list_single_midp_graphic_pane_cp

0x22cc,	// (0x00021078) list_highlight_pane_cp20

0x7929,	// (0x000266d5) list_single_2graphic_pane_g1_cp4

0x7931,	// (0x000266dd) list_single_2graphic_pane_g2_cp4

0x7939,	// (0x000266e5) list_single_2graphic_pane_t1_cp4

0x23e3,	// (0x0002118f) list_highlight_pane_cp21

0x7948,	// (0x000266f4) list_single_midp_graphic_pane_g4_cp

0x7957,	// (0x00026703) list_single_midp_graphic_pane_t1_cp

0xba93,	// (0x0002a83f) form2_mdip_string_pane_t1_ParamLimits

0xba93,	// (0x0002a83f) form2_mdip_string_pane_t1

0x22cc,	// (0x00021078) bg_wml_button_pane_cp2

0x21dc,	// (0x00020f88) form2_midp_image_pane_g1

0xdcc1,	// (0x0002ca6d) list_double_large_graphic_pane_g5_ParamLimits

0xdcc1,	// (0x0002ca6d) list_double_large_graphic_pane_g5

0x9f35,	// (0x00028ce1) midp_form_pane_ParamLimits

0x23e3,	// (0x0002118f) main_apps_wheel_pane_ParamLimits

0xaa9f,	// (0x0002984b) popup_preview_window_ParamLimits

0xaa9f,	// (0x0002984b) popup_preview_window

0x596b,	// (0x00024717) popup_touch_info_window_ParamLimits

0x596b,	// (0x00024717) popup_touch_info_window

0x5989,	// (0x00024735) popup_touch_menu_window_ParamLimits

0x5989,	// (0x00024735) popup_touch_menu_window

0x21d2,	// (0x00020f7e) bg_popup_sub_pane_cp6

0x796c,	// (0x00026718) list_touch_menu_pane

0x7974,	// (0x00026720) list_single_touch_menu_pane_ParamLimits

0x7974,	// (0x00026720) list_single_touch_menu_pane

0x798a,	// (0x00026736) list_single_touch_menu_pane_t1

0x23e3,	// (0x0002118f) bg_popup_sub_pane_cp7_ParamLimits

0x23e3,	// (0x0002118f) bg_popup_sub_pane_cp7

0x7998,	// (0x00026744) heading_sub_pane

0x79a0,	// (0x0002674c) list_touch_info_pane_ParamLimits

0x79a0,	// (0x0002674c) list_touch_info_pane

0x79af,	// (0x0002675b) list_single_touch_info_pane_ParamLimits

0x79af,	// (0x0002675b) list_single_touch_info_pane

0x79c1,	// (0x0002676d) list_single_touch_info_pane_t1

0x79cf,	// (0x0002677b) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0002e8b9) list_single_touch_info_pane_t

0x562c,	// (0x000243d8) bg_popup_heading_pane_cp

0x79dd,	// (0x00026789) heading_sub_pane_t1

0x5ca0,	// (0x00024a4c) bg_popup_preview_window_pane_cp_ParamLimits

0x5ca0,	// (0x00024a4c) bg_popup_preview_window_pane_cp

0x7998,	// (0x00026744) heading_preview_pane

0x79a0,	// (0x0002674c) list_preview_pane_ParamLimits

0x79a0,	// (0x0002674c) list_preview_pane

0x79eb,	// (0x00026797) popup_preview_window_g1

0x79af,	// (0x0002675b) list_single_preview_pane_ParamLimits

0x79af,	// (0x0002675b) list_single_preview_pane

0x79f3,	// (0x0002679f) list_single_preview_pane_g1

0x79fb,	// (0x000267a7) list_single_preview_pane_t1

0x79c1,	// (0x0002676d) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0002e8be) list_single_preview_pane_t

0x7a09,	// (0x000267b5) bg_popup_heading_pane_cp2_ParamLimits

0x7a09,	// (0x000267b5) bg_popup_heading_pane_cp2

0x7a1f,	// (0x000267cb) heading_preview_pane_g1

0x7a27,	// (0x000267d3) heading_preview_pane_t1_ParamLimits

0x7a27,	// (0x000267d3) heading_preview_pane_t1

0x2436,	// (0x000211e2) soft_indicator_pane_t1_ParamLimits

0x2957,	// (0x00021703) scroll_pane_ParamLimits

0x4f75,	// (0x00023d21) scroll_sc2_left_pane

0x4f6c,	// (0x00023d18) scroll_sc2_right_pane

0x4f94,	// (0x00023d40) scroll_bg_pane_g1_ParamLimits

0x4fa9,	// (0x00023d55) scroll_bg_pane_g2_ParamLimits

0x4fc1,	// (0x00023d6d) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x0002e4a7) scroll_bg_pane_g_ParamLimits

0x4f94,	// (0x00023d40) scroll_handle_pane_g1_ParamLimits

0x4fe3,	// (0x00023d8f) scroll_handle_pane_g2_ParamLimits

0x4fc1,	// (0x00023d6d) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x0002e4ae) scroll_handle_pane_g_ParamLimits

0x58a8,	// (0x00024654) popup_choice_list_window_ParamLimits

0x58a8,	// (0x00024654) popup_choice_list_window

0x5ada,	// (0x00024886) choice_list_pane

0x5b5c,	// (0x00024908) cell_toolbar_pane_t1

0x5b84,	// (0x00024930) toolbar_button_pane_ParamLimits

0x6b30,	// (0x000258dc) ai_gene_pane_1_t2_ParamLimits

0x6b30,	// (0x000258dc) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002e6cf) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002e6cf) ai_gene_pane_1_t

0x7a44,	// (0x000267f0) scroll_sc2_left_pane_g1

0x7a44,	// (0x000267f0) scroll_sc2_right_pane_g1

0x4d6c,	// (0x00023b18) bg_popup_sub_pane_cp10

0x7a4e,	// (0x000267fa) list_choice_list_pane

0x7a67,	// (0x00026813) list_single_choice_list_pane_ParamLimits

0x7a67,	// (0x00026813) list_single_choice_list_pane

0x7a7a,	// (0x00026826) list_single_choice_list_pane_g1

0x4d57,	// (0x00023b03) list_single_choice_list_pane_t1_ParamLimits

0x4d57,	// (0x00023b03) list_single_choice_list_pane_t1

0x7a82,	// (0x0002682e) choice_list_pane_g1

0x7a8a,	// (0x00026836) choice_list_pane_t1

0x21d2,	// (0x00020f7e) input_focus_pane_cp11

0x4ee1,	// (0x00023c8d) title_pane_stacon_g2_ParamLimits

0x4ee1,	// (0x00023c8d) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x0002e48d) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0002e48d) title_pane_stacon_g

0x562c,	// (0x000243d8) cursor_press_pane

0xa844,	// (0x000295f0) popup_fep_hwr_window_ParamLimits

0xa844,	// (0x000295f0) popup_fep_hwr_window

0x5902,	// (0x000246ae) popup_fep_vkb_window_ParamLimits

0x5902,	// (0x000246ae) popup_fep_vkb_window

0x7a98,	// (0x00026844) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0002e8e7) fep_vkb_side_pane_g_ParamLimits

0xbbc5,	// (0x0002a971) fep_hwr_candidate_pane_ParamLimits

0xbbc5,	// (0x0002a971) fep_hwr_candidate_pane

0xbbef,	// (0x0002a99b) fep_hwr_side_pane_ParamLimits

0xbbef,	// (0x0002a99b) fep_hwr_side_pane

0xbc0f,	// (0x0002a9bb) fep_hwr_top_pane_ParamLimits

0xbc0f,	// (0x0002a9bb) fep_hwr_top_pane

0xbc27,	// (0x0002a9d3) fep_hwr_write_pane_ParamLimits

0xbc27,	// (0x0002a9d3) fep_hwr_write_pane

0xfb3b,	// (0x0002e8e7) fep_vkb_side_pane_g

0x7ab2,	// (0x0002685e) fep_hwr_top_pane_g1

0x7aa0,	// (0x0002684c) fep_hwr_top_pane_g2

0xbc61,	// (0x0002aa0d) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0002e8c3) fep_hwr_top_pane_g

0xbc76,	// (0x0002aa22) fep_hwr_top_text_pane

0x513a,	// (0x00023ee6) fep_hwr_top_text_pane_g1

0x7ae8,	// (0x00026894) fep_hwr_top_text_pane_t1

0xbd6c,	// (0x0002ab18) fep_hwr_candidate_pane_g1

0x7c15,	// (0x000269c1) fep_vkb_keypad_pane_g3_ParamLimits

0x7c15,	// (0x000269c1) fep_vkb_keypad_pane_g3

0x7c3d,	// (0x000269e9) fep_vkb_keypad_pane_g4_ParamLimits

0x7c3d,	// (0x000269e9) fep_vkb_keypad_pane_g4

0x7cac,	// (0x00026a58) fep_vkb_bottom_pane_g2_ParamLimits

0x7cac,	// (0x00026a58) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0002e8ee) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0002e8ee) fep_vkb_bottom_pane_g

0x7a44,	// (0x000267f0) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0002e8f8) cell_vkb_side_pane_g

0x7cf0,	// (0x00026a9c) cell_vkb_side_pane_t1

0x7cfe,	// (0x00026aaa) cell_vkb_side_pane_t1_copy1

0x7a44,	// (0x000267f0) bg_fep_vkb_candidate_pane_g2

0x7dd4,	// (0x00026b80) cell_vkb_candidate_pane_ParamLimits

0x7af6,	// (0x000268a2) aid_size_cell_vkb_ParamLimits

0x7af6,	// (0x000268a2) aid_size_cell_vkb

0x7dd4,	// (0x00026b80) cell_vkb_candidate_pane

0xbf56,	// (0x0002ad02) bg_popup_fep_shadow_pane_g1

0xbda5,	// (0x0002ab51) fep_vkb_bottom_pane_ParamLimits

0xbda5,	// (0x0002ab51) fep_vkb_bottom_pane

0x7b83,	// (0x0002692f) fep_vkb_candidate_pane_ParamLimits

0x7b83,	// (0x0002692f) fep_vkb_candidate_pane

0xbdca,	// (0x0002ab76) fep_vkb_keypad_pane_ParamLimits

0xbdca,	// (0x0002ab76) fep_vkb_keypad_pane

0xbe06,	// (0x0002abb2) fep_vkb_side_pane_ParamLimits

0xbe06,	// (0x0002abb2) fep_vkb_side_pane

0xbe42,	// (0x0002abee) fep_vkb_top_pane_ParamLimits

0xbe42,	// (0x0002abee) fep_vkb_top_pane

0x7ba9,	// (0x00026955) fep_vkb_top_pane_g1_ParamLimits

0x7ba9,	// (0x00026955) fep_vkb_top_pane_g1

0x7bb8,	// (0x00026964) fep_vkb_top_pane_g2_ParamLimits

0x7bb8,	// (0x00026964) fep_vkb_top_pane_g2

0x7bc7,	// (0x00026973) fep_vkb_top_pane_g3_ParamLimits

0x7bc7,	// (0x00026973) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0002e8de) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0002e8de) fep_vkb_top_pane_g

0x7be5,	// (0x00026991) fep_vkb_top_text_pane_ParamLimits

0x7be5,	// (0x00026991) fep_vkb_top_text_pane

0xbe7e,	// (0x0002ac2a) fep_vkb_side_pane_g1_ParamLimits

0xbe7e,	// (0x0002ac2a) fep_vkb_side_pane_g1

0x7c04,	// (0x000269b0) grid_vkb_side_pane_ParamLimits

0x7c04,	// (0x000269b0) grid_vkb_side_pane

0xbf5e,	// (0x0002ad0a) bg_popup_fep_shadow_pane_g2

0xbf67,	// (0x0002ad13) bg_popup_fep_shadow_pane_g3

0xbf6f,	// (0x0002ad1b) bg_popup_fep_shadow_pane_g4

0xbf78,	// (0x0002ad24) bg_popup_fep_shadow_pane_g5

0xbf82,	// (0x0002ad2e) bg_popup_fep_shadow_pane_g6

0xbf8a,	// (0x0002ad36) bg_popup_fep_shadow_pane_g7

0x4c93,	// (0x00023a3f) bg_popup_fep_shadow_pane_g8

0x7c5b,	// (0x00026a07) grid_vkb_keypad_number_pane_ParamLimits

0x7c5b,	// (0x00026a07) grid_vkb_keypad_number_pane

0x7c6b,	// (0x00026a17) grid_vkb_keypad_pane_ParamLimits

0x7c6b,	// (0x00026a17) grid_vkb_keypad_pane

0x7c91,	// (0x00026a3d) fep_vkb_bottom_pane_g1_ParamLimits

0x7c91,	// (0x00026a3d) fep_vkb_bottom_pane_g1

0x7cba,	// (0x00026a66) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7cba,	// (0x00026a66) grid_vkb_keypad_bottom_left_pane

0x7ccf,	// (0x00026a7b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ccf,	// (0x00026a7b) grid_vkb_keypad_bottom_right_pane

0x7ce4,	// (0x00026a90) fep_vkb_top_text_pane_g1

0xbec8,	// (0x0002ac74) fep_vkb_top_text_pane_t1

0xbedd,	// (0x0002ac89) cell_vkb_side_pane_ParamLimits

0xbedd,	// (0x0002ac89) cell_vkb_side_pane

0x7a44,	// (0x000267f0) cell_vkb_side_pane_g1

0x7d0c,	// (0x00026ab8) cell_vkb_keypad_pane_ParamLimits

0x7d0c,	// (0x00026ab8) cell_vkb_keypad_pane

0x7d81,	// (0x00026b2d) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0002e90b) bg_popup_fep_shadow_pane_g

0xbf9c,	// (0x0002ad48) cell_hwr_side_pane_g1

0xbf9c,	// (0x0002ad48) cell_hwr_side_pane_g2

0x7d8b,	// (0x00026b37) cell_vkb_keypad_pane_t1

0xbf00,	// (0x0002acac) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf00,	// (0x0002acac) cell_vkb_keypad_bottom_left_pane

0xbf1d,	// (0x0002acc9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf1d,	// (0x0002acc9) cell_vkb_keypad_bottom_right_pane

0x7a44,	// (0x000267f0) cell_vkb_keypad_bottom_left_pane_g1

0x7a44,	// (0x000267f0) cell_vkb_keypad_bottom_right_pane_g1

0x7d99,	// (0x00026b45) cell_vkb_keypad_number_pane_ParamLimits

0x7d99,	// (0x00026b45) cell_vkb_keypad_number_pane

0x7db8,	// (0x00026b64) cell_vkb_keypad_number_pane_g1

0x7dc2,	// (0x00026b6e) cell_vkb_keypad_number_pane_g2

0x7dcb,	// (0x00026b77) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0002e8fd) cell_vkb_keypad_number_pane_g

0x7d8b,	// (0x00026b37) cell_vkb_keypad_number_pane_t1

0x7def,	// (0x00026b9b) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0002e91e) cell_hwr_side_pane_g

0x7e08,	// (0x00026bb4) cell_hwr_side_pane_t1

0xbfa6,	// (0x0002ad52) cell_hwr_side_pane_t1_copy1

0xbfb4,	// (0x0002ad60) cell_hwr_candidate_pane_g1

0xc004,	// (0x0002adb0) cell_hwr_candidate_pane_t1

0x7a44,	// (0x000267f0) cell_vkb_candidate_pane_g2

0x7e4c,	// (0x00026bf8) cell_vkb_candidate_pane_t1

0xbb8c,	// (0x0002a938) bg_popup_fep_shadow_pane_ParamLimits

0xbb8c,	// (0x0002a938) bg_popup_fep_shadow_pane

0xbc41,	// (0x0002a9ed) bg_fep_hwr_top_pane_g4

0x7ac4,	// (0x00026870) bg_hwr_side_pane_g1_ParamLimits

0x7ac4,	// (0x00026870) bg_hwr_side_pane_g1

0xbcb2,	// (0x0002aa5e) cell_hwr_side_pane_ParamLimits

0xbcb2,	// (0x0002aa5e) cell_hwr_side_pane

0xbced,	// (0x0002aa99) fep_hwr_write_pane_g1_ParamLimits

0xbced,	// (0x0002aa99) fep_hwr_write_pane_g1

0xbcfa,	// (0x0002aaa6) fep_hwr_write_pane_g2_ParamLimits

0xbcfa,	// (0x0002aaa6) fep_hwr_write_pane_g2

0xbd07,	// (0x0002aab3) fep_hwr_write_pane_g3_ParamLimits

0xbd07,	// (0x0002aab3) fep_hwr_write_pane_g3

0xbd15,	// (0x0002aac1) fep_hwr_write_pane_g4_ParamLimits

0xbd15,	// (0x0002aac1) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0002e8ca) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0002e8ca) fep_hwr_write_pane_g

0xbc41,	// (0x0002a9ed) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbc41,	// (0x0002a9ed) bg_fep_hwr_candidate_pane_g2

0xbd2a,	// (0x0002aad6) cell_hwr_candidate_pane_ParamLimits

0xbd2a,	// (0x0002aad6) cell_hwr_candidate_pane

0xbd6c,	// (0x0002ab18) fep_hwr_candidate_pane_g1_ParamLimits

0x7b24,	// (0x000268d0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b24,	// (0x000268d0) bg_popup_fep_shadow_pane_cp2

0x7bd7,	// (0x00026983) fep_vkb_top_pane_g4_ParamLimits

0x7bd7,	// (0x00026983) fep_vkb_top_pane_g4

0x7bf6,	// (0x000269a2) fep_vkb_side_pane_g2_ParamLimits

0x7bf6,	// (0x000269a2) fep_vkb_side_pane_g2

0xde1b,	// (0x0002cbc7) list_setting_pane_t4_ParamLimits

0xde1b,	// (0x0002cbc7) list_setting_pane_t4

0xea48,	// (0x0002d7f4) list_setting_number_pane_t5_ParamLimits

0xea48,	// (0x0002d7f4) list_setting_number_pane_t5

0xa1ce,	// (0x00028f7a) list_double_heading_pane_cp2_ParamLimits

0xa1ce,	// (0x00028f7a) list_double_heading_pane_cp2

0x4c2e,	// (0x000239da) list_double_heading_pane_g1_cp2_ParamLimits

0x4c2e,	// (0x000239da) list_double_heading_pane_g1_cp2

0x4c3a,	// (0x000239e6) list_double_heading_pane_g2_cp2_ParamLimits

0x4c3a,	// (0x000239e6) list_double_heading_pane_g2_cp2

0x7e5a,	// (0x00026c06) list_double_heading_pane_t1_cp2_ParamLimits

0x7e5a,	// (0x00026c06) list_double_heading_pane_t1_cp2

0x7e70,	// (0x00026c1c) list_double_heading_pane_t2_cp2_ParamLimits

0x7e70,	// (0x00026c1c) list_double_heading_pane_t2_cp2

0x21ca,	// (0x00020f76) aid_value_unit2

0x9a1b,	// (0x000287c7) popup_preview_fixed_window

0x2516,	// (0x000212c2) bg_popup_preview_window_pane_cp02

0x7e82,	// (0x00026c2e) list_preview_fixed_pane

0x7ec8,	// (0x00026c74) list_empty_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_empty_pane_fp

0x7ec8,	// (0x00026c74) list_single_cale_day_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_single_cale_day_pane_fp

0x7ec8,	// (0x00026c74) list_single_graphic_heading_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_single_graphic_heading_pane_fp

0x7ec8,	// (0x00026c74) list_single_graphic_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_single_graphic_pane_fp

0x7ec8,	// (0x00026c74) list_single_heading_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_single_heading_pane_fp

0x7ec8,	// (0x00026c74) list_single_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_single_pane_fp

0x7edd,	// (0x00026c89) list_single_pane_fp_g1_ParamLimits

0x7edd,	// (0x00026c89) list_single_pane_fp_g1

0xf1df,	// (0x0002df8b) list_single_pane_fp_g2_ParamLimits

0xf1df,	// (0x0002df8b) list_single_pane_fp_g2

0xf1eb,	// (0x0002df97) list_single_pane_fp_g3_ParamLimits

0xf1eb,	// (0x0002df97) list_single_pane_fp_g3

0x7ee9,	// (0x00026c95) list_single_pane_fp_g4_ParamLimits

0x7ee9,	// (0x00026c95) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0002e931) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0002e931) list_single_pane_fp_g

0xf1ff,	// (0x0002dfab) list_single_pane_fp_t1_ParamLimits

0xf1ff,	// (0x0002dfab) list_single_pane_fp_t1

0xf216,	// (0x0002dfc2) list_single_graphic_pane_fp_g1_ParamLimits

0xf216,	// (0x0002dfc2) list_single_graphic_pane_fp_g1

0x7edd,	// (0x00026c89) list_single_graphic_pane_fp_g2_ParamLimits

0x7edd,	// (0x00026c89) list_single_graphic_pane_fp_g2

0xf1df,	// (0x0002df8b) list_single_graphic_pane_fp_g3_ParamLimits

0xf1df,	// (0x0002df8b) list_single_graphic_pane_fp_g3

0xf1eb,	// (0x0002df97) list_single_graphic_pane_fp_g4_ParamLimits

0xf1eb,	// (0x0002df97) list_single_graphic_pane_fp_g4

0x7ee9,	// (0x00026c95) list_single_graphic_pane_fp_g5_ParamLimits

0x7ee9,	// (0x00026c95) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0002e93a) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002e93a) list_single_graphic_pane_fp_g

0xf222,	// (0x0002dfce) list_single_graphic_pane_fp_t1_ParamLimits

0xf222,	// (0x0002dfce) list_single_graphic_pane_fp_t1

0xf216,	// (0x0002dfc2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf216,	// (0x0002dfc2) list_single_graphic_heading_pane_fp_g1

0x7edd,	// (0x00026c89) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7edd,	// (0x00026c89) list_single_graphic_heading_pane_fp_g2

0xf1df,	// (0x0002df8b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf1df,	// (0x0002df8b) list_single_graphic_heading_pane_fp_g3

0xf1eb,	// (0x0002df97) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf1eb,	// (0x0002df97) list_single_graphic_heading_pane_fp_g4

0x7ee9,	// (0x00026c95) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ee9,	// (0x00026c95) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0002e93a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002e93a) list_single_graphic_heading_pane_fp_g

0xf238,	// (0x0002dfe4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf238,	// (0x0002dfe4) list_single_graphic_heading_pane_fp_t1

0xf24e,	// (0x0002dffa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf24e,	// (0x0002dffa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0002e945) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0002e945) list_single_graphic_heading_pane_fp_t

0xf260,	// (0x0002e00c) list_single_cale_day_pane_fp_g1_ParamLimits

0xf260,	// (0x0002e00c) list_single_cale_day_pane_fp_g1

0x7ef5,	// (0x00026ca1) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ef5,	// (0x00026ca1) list_single_cale_day_pane_fp_g2

0xf298,	// (0x0002e044) list_single_cale_day_pane_fp_g3_ParamLimits

0xf298,	// (0x0002e044) list_single_cale_day_pane_fp_g3

0xf2c0,	// (0x0002e06c) list_single_cale_day_pane_fp_g4_ParamLimits

0xf2c0,	// (0x0002e06c) list_single_cale_day_pane_fp_g4

0xf2e4,	// (0x0002e090) list_single_cale_day_pane_fp_g5_ParamLimits

0xf2e4,	// (0x0002e090) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0002e94a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0002e94a) list_single_cale_day_pane_fp_g

0xf308,	// (0x0002e0b4) list_single_cale_day_pane_fp_t1_ParamLimits

0xf308,	// (0x0002e0b4) list_single_cale_day_pane_fp_t1

0xf32e,	// (0x0002e0da) list_single_cale_day_pane_fp_t2_ParamLimits

0xf32e,	// (0x0002e0da) list_single_cale_day_pane_fp_t2

0xf347,	// (0x0002e0f3) list_single_cale_day_pane_fp_t3_ParamLimits

0xf347,	// (0x0002e0f3) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0002e955) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0002e955) list_single_cale_day_pane_fp_t

0x7edd,	// (0x00026c89) list_empty_pane_fp_g1_ParamLimits

0x7edd,	// (0x00026c89) list_empty_pane_fp_g1

0xf360,	// (0x0002e10c) list_empty_pane_fp_t1

0xf36e,	// (0x0002e11a) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002e95c) list_empty_pane_fp_t

0x7edd,	// (0x00026c89) list_single_heading_pane_fp_g1_ParamLimits

0x7edd,	// (0x00026c89) list_single_heading_pane_fp_g1

0xf1df,	// (0x0002df8b) list_single_heading_pane_fp_g2_ParamLimits

0xf1df,	// (0x0002df8b) list_single_heading_pane_fp_g2

0xf1eb,	// (0x0002df97) list_single_heading_pane_fp_g3_ParamLimits

0xf1eb,	// (0x0002df97) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0002e961) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0002e961) list_single_heading_pane_fp_g

0xf37c,	// (0x0002e128) list_single_heading_pane_fp_t1_ParamLimits

0xf37c,	// (0x0002e128) list_single_heading_pane_fp_t1

0xf38e,	// (0x0002e13a) list_single_heading_pane_fp_t2_ParamLimits

0xf38e,	// (0x0002e13a) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0002e968) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0002e968) list_single_heading_pane_fp_t

0x4d78,	// (0x00023b24) aid_size_cell_fast

0x24f9,	// (0x000212a5) soft_indicator_pane_cp1_t1

0x4db5,	// (0x00023b61) cell_app_pane_cp2_ParamLimits

0x4db5,	// (0x00023b61) cell_app_pane_cp2

0xbbae,	// (0x0002a95a) fep_hwr_candidate_drop_down_list_pane

0xbd86,	// (0x0002ab32) fep_hwr_candidate_pane_g3_ParamLimits

0xbd86,	// (0x0002ab32) fep_hwr_candidate_pane_g3

0x4561,	// (0x0002330d) fep_hwr_candidate_pane_g4_ParamLimits

0x4561,	// (0x0002330d) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0002e8d7) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0002e8d7) fep_hwr_candidate_pane_g

0x7b72,	// (0x0002691e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b72,	// (0x0002691e) fep_vkb_candidate_drop_down_list_pane

0x7df7,	// (0x00026ba3) fep_vkb_candidate_pane_g3

0x7dff,	// (0x00026bab) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0002e904) fep_vkb_candidate_pane_g

0xbfb4,	// (0x0002ad60) cell_hwr_candidate_pane_g1_ParamLimits

0xbfc2,	// (0x0002ad6e) cell_hwr_candidate_pane_g3_ParamLimits

0xbfc2,	// (0x0002ad6e) cell_hwr_candidate_pane_g3

0xbfe3,	// (0x0002ad8f) cell_hwr_candidate_pane_g4_ParamLimits

0xbfe3,	// (0x0002ad8f) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0002e923) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0002e923) cell_hwr_candidate_pane_g

0x7e16,	// (0x00026bc2) cell_vkb_candidate_pane_g3_ParamLimits

0x7e16,	// (0x00026bc2) cell_vkb_candidate_pane_g3

0x7e31,	// (0x00026bdd) cell_vkb_candidate_pane_g4_ParamLimits

0x7e31,	// (0x00026bdd) cell_vkb_candidate_pane_g4

0x7f43,	// (0x00026cef) cell_app_pane_cp2_g1_ParamLimits

0x7f43,	// (0x00026cef) cell_app_pane_cp2_g1

0x7f61,	// (0x00026d0d) cell_app_pane_cp2_g2_ParamLimits

0x7f61,	// (0x00026d0d) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0002e96d) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0002e96d) cell_app_pane_cp2_g

0x7f6d,	// (0x00026d19) cell_app_pane_cp2_t1_ParamLimits

0x7f6d,	// (0x00026d19) cell_app_pane_cp2_t1

0x4c14,	// (0x000239c0) grid_highlight_pane_cp1_ParamLimits

0x4c14,	// (0x000239c0) grid_highlight_pane_cp1

0xc022,	// (0x0002adce) cell_hwr_candidate_pane_cp1_ParamLimits

0xc022,	// (0x0002adce) cell_hwr_candidate_pane_cp1

0xbfb4,	// (0x0002ad60) fep_hwr_candidate_drop_down_list_pane_g1

0xc041,	// (0x0002aded) fep_hwr_candidate_drop_down_list_pane_g2

0xc04e,	// (0x0002adfa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0002e972) fep_hwr_candidate_drop_down_list_pane_g

0xc05b,	// (0x0002ae07) fep_hwr_candidate_drop_down_list_scroll_pane

0xc064,	// (0x0002ae10) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc064,	// (0x0002ae10) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc071,	// (0x0002ae1d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc071,	// (0x0002ae1d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc07e,	// (0x0002ae2a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc07e,	// (0x0002ae2a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc08b,	// (0x0002ae37) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc08b,	// (0x0002ae37) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc0a6,	// (0x0002ae52) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc0a6,	// (0x0002ae52) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc0c1,	// (0x0002ae6d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc0c1,	// (0x0002ae6d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc0dc,	// (0x0002ae88) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc0dc,	// (0x0002ae88) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc0f7,	// (0x0002aea3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc0f7,	// (0x0002aea3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0002e979) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0002e979) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7f99,	// (0x00026d45) cell_vkb_candidate_pane_cp1_ParamLimits

0x7f99,	// (0x00026d45) cell_vkb_candidate_pane_cp1

0x7bd7,	// (0x00026983) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7bd7,	// (0x00026983) fep_vkb_candidate_drop_down_list_pane_g1

0x7f7f,	// (0x00026d2b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7f7f,	// (0x00026d2b) fep_vkb_candidate_drop_down_list_pane_g2

0x7f8c,	// (0x00026d38) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7f8c,	// (0x00026d38) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0002e98a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0002e98a) fep_vkb_candidate_drop_down_list_pane_g

0x7fb9,	// (0x00026d65) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7fb9,	// (0x00026d65) fep_vkb_candidate_drop_down_list_scroll_pane

0x7fc6,	// (0x00026d72) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7fc6,	// (0x00026d72) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7fd3,	// (0x00026d7f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7fd3,	// (0x00026d7f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7fdf,	// (0x00026d8b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fdf,	// (0x00026d8b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f01,	// (0x00026cad) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f01,	// (0x00026cad) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f22,	// (0x00026cce) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f22,	// (0x00026cce) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7feb,	// (0x00026d97) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7feb,	// (0x00026d97) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x800c,	// (0x00026db8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x800c,	// (0x00026db8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x802d,	// (0x00026dd9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x802d,	// (0x00026dd9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0002e991) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0002e991) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9b2b,	// (0x000288d7) title_pane_g1_ParamLimits

0x9b38,	// (0x000288e4) title_pane_g2_ParamLimits

0xf566,	// (0x0002e312) title_pane_g_ParamLimits

0x5132,	// (0x00023ede) aid_call2_pane

0x512a,	// (0x00023ed6) aid_call_pane

0x513a,	// (0x00023ee6) popup_clock_analogue_window_g1

0x513a,	// (0x00023ee6) popup_clock_analogue_window_g2

0xa1af,	// (0x00028f5b) popup_clock_analogue_window_g3

0xa1b8,	// (0x00028f64) popup_clock_analogue_window_g4

0x21dc,	// (0x00020f88) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x0002e4bc) popup_clock_analogue_window_g

0xa1c0,	// (0x00028f6c) popup_clock_analogue_window_t1

0xa1fb,	// (0x00028fa7) clock_digital_number_pane_ParamLimits

0xa1fb,	// (0x00028fa7) clock_digital_number_pane

0xa207,	// (0x00028fb3) clock_digital_number_pane_cp02_ParamLimits

0xa207,	// (0x00028fb3) clock_digital_number_pane_cp02

0xa213,	// (0x00028fbf) clock_digital_number_pane_cp03_ParamLimits

0xa213,	// (0x00028fbf) clock_digital_number_pane_cp03

0xa21f,	// (0x00028fcb) clock_digital_number_pane_cp04_ParamLimits

0xa21f,	// (0x00028fcb) clock_digital_number_pane_cp04

0xa22b,	// (0x00028fd7) clock_digital_separator_pane_ParamLimits

0xa22b,	// (0x00028fd7) clock_digital_separator_pane

0xa237,	// (0x00028fe3) popup_clock_digital_window_t1_ParamLimits

0xa237,	// (0x00028fe3) popup_clock_digital_window_t1

0x21dc,	// (0x00020f88) clock_digital_number_pane_g1

0x21dc,	// (0x00020f88) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x0002e4c7) clock_digital_number_pane_g

0x21dc,	// (0x00020f88) clock_digital_separator_pane_g1

0x21dc,	// (0x00020f88) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x0002e4c7) clock_digital_separator_pane_g

0xac35,	// (0x000299e1) aid_fill_nsta_ParamLimits

0xacfa,	// (0x00029aa6) indicator_nsta_pane_ParamLimits

0x5a81,	// (0x0002482d) popup_clock_analogue_window

0x5a81,	// (0x0002482d) popup_clock_digital_window

0x23e3,	// (0x0002118f) grid_indicator_nsta_pane_ParamLimits

0x76c8,	// (0x00026474) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0002e857) clock_nsta_pane_t

0xa173,	// (0x00028f1f) aid_size_max_handle

0xa17d,	// (0x00028f29) aid_size_min_handle

0x562c,	// (0x000243d8) editor_scroll_pane

0x8048,	// (0x00026df4) ex_editor_pane

0x4d33,	// (0x00023adf) scroll_pane_cp13

0x2983,	// (0x0002172f) scroll_pane_cp14

0x5169,	// (0x00023f15) scroll_pane_cp36

0xa1e2,	// (0x00028f8e) list_single_graphic_hl_pane_cp2_ParamLimits

0xa1e2,	// (0x00028f8e) list_single_graphic_hl_pane_cp2

0xb66d,	// (0x0002a419) list_single_graphic_hl_pane_ParamLimits

0xb66d,	// (0x0002a419) list_single_graphic_hl_pane

0xf3a4,	// (0x0002e150) aid_size_min_hl_cp1

0x8050,	// (0x00026dfc) list_highlight_pane_cp34_ParamLimits

0x8050,	// (0x00026dfc) list_highlight_pane_cp34

0x8061,	// (0x00026e0d) list_single_graphic_hl_pane_g1_ParamLimits

0x8061,	// (0x00026e0d) list_single_graphic_hl_pane_g1

0xf3ad,	// (0x0002e159) list_single_graphic_hl_pane_g2_ParamLimits

0xf3ad,	// (0x0002e159) list_single_graphic_hl_pane_g2

0xf3ad,	// (0x0002e159) list_single_graphic_hl_pane_g3_ParamLimits

0xf3ad,	// (0x0002e159) list_single_graphic_hl_pane_g3

0xed95,	// (0x0002db41) list_single_graphic_hl_pane_g4_ParamLimits

0xed95,	// (0x0002db41) list_single_graphic_hl_pane_g4

0xf3b9,	// (0x0002e165) list_single_graphic_hl_pane_g5_ParamLimits

0xf3b9,	// (0x0002e165) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0002e9a2) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0002e9a2) list_single_graphic_hl_pane_g

0xf3cd,	// (0x0002e179) list_single_graphic_hl_pane_t1_ParamLimits

0xf3cd,	// (0x0002e179) list_single_graphic_hl_pane_t1

0x806e,	// (0x00026e1a) aid_size_min_hl_cp2

0x8077,	// (0x00026e23) list_highlight_pane_cp34_cp2_ParamLimits

0x8077,	// (0x00026e23) list_highlight_pane_cp34_cp2

0x8061,	// (0x00026e0d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8061,	// (0x00026e0d) list_single_graphic_hl_pane_g1_cp2

0x8084,	// (0x00026e30) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8084,	// (0x00026e30) list_single_graphic_hl_pane_g2_cp2

0x8090,	// (0x00026e3c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8090,	// (0x00026e3c) list_single_graphic_hl_pane_g3_cp2

0x62b5,	// (0x00025061) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x62b5,	// (0x00025061) list_single_graphic_hl_pane_g4_cp2

0x809e,	// (0x00026e4a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x809e,	// (0x00026e4a) list_single_graphic_hl_pane_g5_cp2

0xa679,	// (0x00029425) control_pane_g4_ParamLimits

0xa679,	// (0x00029425) control_pane_g4

0x4d6c,	// (0x00023b18) bg_popup_sub_pane_cp10_ParamLimits

0x7a4e,	// (0x000267fa) list_choice_list_pane_ParamLimits

0x7a5d,	// (0x00026809) scroll_pane_cp23

0x2516,	// (0x000212c2) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e82,	// (0x00026c2e) list_preview_fixed_pane_ParamLimits

0x7e98,	// (0x00026c44) list_preview_fixed_pane_cp_ParamLimits

0x7e98,	// (0x00026c44) list_preview_fixed_pane_cp

0x7ea4,	// (0x00026c50) popup_preview_fixed_window_g1_ParamLimits

0x7ea4,	// (0x00026c50) popup_preview_fixed_window_g1

0x7eb0,	// (0x00026c5c) popup_preview_fixed_window_g2_ParamLimits

0x7eb0,	// (0x00026c5c) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0002e92a) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0002e92a) popup_preview_fixed_window_g

0xa053,	// (0x00028dff) aid_navi_side_left_pane_ParamLimits

0xa068,	// (0x00028e14) aid_navi_side_right_pane_ParamLimits

0xa080,	// (0x00028e2c) navi_icon_pane_stacon_ParamLimits

0xa094,	// (0x00028e40) navi_navi_pane_stacon_ParamLimits

0xa080,	// (0x00028e2c) navi_text_pane_stacon_ParamLimits

0x21d2,	// (0x00020f7e) main_text_info_pane

0x80c8,	// (0x00026e74) listscroll_text_info_pane

0x80d0,	// (0x00026e7c) list_text_info_pane_ParamLimits

0x80d0,	// (0x00026e7c) list_text_info_pane

0x80df,	// (0x00026e8b) scroll_pane_cp24_ParamLimits

0x80df,	// (0x00026e8b) scroll_pane_cp24

0xc112,	// (0x0002aebe) list_text_info_pane_t1_ParamLimits

0xc112,	// (0x0002aebe) list_text_info_pane_t1

0xa7c0,	// (0x0002956c) popup_fast_swap2_window_ParamLimits

0xa7c0,	// (0x0002956c) popup_fast_swap2_window

0x80fd,	// (0x00026ea9) aid_size_cell_fast2

0x21d2,	// (0x00020f7e) bg_popup_window_pane_cp17

0x5f4d,	// (0x00024cf9) heading_pane_cp2

0x2708,	// (0x000214b4) listscroll_fast2_pane

0x8107,	// (0x00026eb3) grid_fast2_pane

0x8111,	// (0x00026ebd) listscroll_fast2_pane_g1

0x8119,	// (0x00026ec5) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0002e9ad) listscroll_fast2_pane_g

0x4d33,	// (0x00023adf) scroll_pane_cp26

0x8123,	// (0x00026ecf) cell_fast2_pane_ParamLimits

0x8123,	// (0x00026ecf) cell_fast2_pane

0x8138,	// (0x00026ee4) cell_fast2_pane_g1

0x8141,	// (0x00026eed) cell_fast2_pane_g2

0x814a,	// (0x00026ef6) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0002e9b2) cell_fast2_pane_g

0x274a,	// (0x000214f6) grid_highlight_pane_cp9

0x275f,	// (0x0002150b) main_eswt_pane_ParamLimits

0x275f,	// (0x0002150b) main_eswt_pane

0x80f4,	// (0x00026ea0) list_single_text_info_pane

0x8152,	// (0x00026efe) eswt_ctrl_button_pane

0x8152,	// (0x00026efe) eswt_ctrl_canvas_pane

0x815a,	// (0x00026f06) eswt_ctrl_combo_pane

0x8152,	// (0x00026efe) eswt_ctrl_default_pane

0x8152,	// (0x00026efe) eswt_ctrl_label_pane

0x8162,	// (0x00026f0e) eswt_ctrl_wait_pane

0x816a,	// (0x00026f16) eswt_shell_pane

0x21d2,	// (0x00020f7e) listscroll_eswt_app_pane

0x818a,	// (0x00026f36) popup_eswt_tasktip_window_ParamLimits

0x818a,	// (0x00026f36) popup_eswt_tasktip_window

0x5ca0,	// (0x00024a4c) bg_popup_window_pane_cp18

0x819b,	// (0x00026f47) eswt_control_pane_g1_ParamLimits

0x819b,	// (0x00026f47) eswt_control_pane_g1

0x81a8,	// (0x00026f54) eswt_control_pane_g2_ParamLimits

0x81a8,	// (0x00026f54) eswt_control_pane_g2

0x81b5,	// (0x00026f61) eswt_control_pane_g3_ParamLimits

0x81b5,	// (0x00026f61) eswt_control_pane_g3

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_ParamLimits

0x81c2,	// (0x00026f6e) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0002e9b9) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0002e9b9) eswt_control_pane_g

0x4c14,	// (0x000239c0) bg_button_pane_ParamLimits

0x4c14,	// (0x000239c0) bg_button_pane

0x275f,	// (0x0002150b) common_borders_pane_copy2_ParamLimits

0x275f,	// (0x0002150b) common_borders_pane_copy2

0x81cf,	// (0x00026f7b) control_button_pane_g1_ParamLimits

0x81cf,	// (0x00026f7b) control_button_pane_g1

0x81db,	// (0x00026f87) control_button_pane_g2_ParamLimits

0x81db,	// (0x00026f87) control_button_pane_g2

0x81e7,	// (0x00026f93) control_button_pane_g3_ParamLimits

0x81e7,	// (0x00026f93) control_button_pane_g3

0x0002,

0xfc16,	// (0x0002e9c2) control_button_pane_g_ParamLimits

0xfc16,	// (0x0002e9c2) control_button_pane_g

0x81fb,	// (0x00026fa7) control_button_pane_t1

0x8209,	// (0x00026fb5) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0002e9c9) control_button_pane_t

0x5b90,	// (0x0002493c) bg_button_pane_g1

0x5b98,	// (0x00024944) bg_button_pane_g2

0x5ba0,	// (0x0002494c) bg_button_pane_g3

0x5ba8,	// (0x00024954) bg_button_pane_g4

0x5bb0,	// (0x0002495c) bg_button_pane_g5

0x5bb8,	// (0x00024964) bg_button_pane_g6

0x5bc0,	// (0x0002496c) bg_button_pane_g7

0x5bc8,	// (0x00024974) bg_button_pane_g8

0x5bd0,	// (0x0002497c) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002e623) bg_button_pane_g

0x7a09,	// (0x000267b5) common_borders_pane_ParamLimits

0x7a09,	// (0x000267b5) common_borders_pane

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy1_ParamLimits

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy1

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy1_ParamLimits

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy1

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy1_ParamLimits

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy1

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy1_ParamLimits

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy1

0x7a44,	// (0x000267f0) bg_eswt_ctrl_canvas_pane_g1

0x7a09,	// (0x000267b5) common_borders_pane_cp2_ParamLimits

0x7a09,	// (0x000267b5) common_borders_pane_cp2

0x7a09,	// (0x000267b5) common_borders_pane_cp3_ParamLimits

0x7a09,	// (0x000267b5) common_borders_pane_cp3

0x8217,	// (0x00026fc3) separator_horizontal_pane

0x821f,	// (0x00026fcb) separator_vertical_pane

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy2_ParamLimits

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy2

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy2_ParamLimits

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy2

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy2_ParamLimits

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy2

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy2_ParamLimits

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy2

0x21d2,	// (0x00020f7e) common_borders_pane_cp4

0x8228,	// (0x00026fd4) separator_horizontal_pane_g1

0x8231,	// (0x00026fdd) separator_horizontal_pane_g2

0x823a,	// (0x00026fe6) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0002e9ce) separator_horizontal_pane_g

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy3_ParamLimits

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy3

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy3_ParamLimits

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy3

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy3_ParamLimits

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy3

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy3_ParamLimits

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy3

0x21d2,	// (0x00020f7e) common_borders_pane_cp5

0x8243,	// (0x00026fef) separator_vertical_pane_g1

0x824c,	// (0x00026ff8) separator_vertical_pane_g2

0x8255,	// (0x00027001) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0002e9d5) separator_vertical_pane_g

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy4_ParamLimits

0x819b,	// (0x00026f47) eswt_control_pane_g1_copy4

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy4_ParamLimits

0x81a8,	// (0x00026f54) eswt_control_pane_g2_copy4

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy4_ParamLimits

0x81b5,	// (0x00026f61) eswt_control_pane_g3_copy4

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy4_ParamLimits

0x81c2,	// (0x00026f6e) eswt_control_pane_g4_copy4

0xc143,	// (0x0002aeef) eswt_ctrl_combo_button_pane

0xc14b,	// (0x0002aef7) eswt_ctrl_input_pane

0xc153,	// (0x0002aeff) popup_choice_list_window_cp70

0xc15b,	// (0x0002af07) eswt_ctrl_input_pane_t1

0x21d2,	// (0x00020f7e) input_focus_pane_cp70

0x7a09,	// (0x000267b5) bg_button_pane_cp70_ParamLimits

0x7a09,	// (0x000267b5) bg_button_pane_cp70

0xc169,	// (0x0002af15) eswt_ctrl_combo_button_pane_g1

0x825e,	// (0x0002700a) wait_bar_pane_cp70

0x5ca0,	// (0x00024a4c) bg_popup_window_pane_cp70_ParamLimits

0x5ca0,	// (0x00024a4c) bg_popup_window_pane_cp70

0x8266,	// (0x00027012) popup_eswt_tasktip_window_t1

0x827c,	// (0x00027028) wait_bar_pane_cp71_ParamLimits

0x827c,	// (0x00027028) wait_bar_pane_cp71

0x8288,	// (0x00027034) grid_eswt_app_pane

0x4f75,	// (0x00023d21) scroll_pane_cp70

0xc171,	// (0x0002af1d) cell_eswt_app_pane_ParamLimits

0xc171,	// (0x0002af1d) cell_eswt_app_pane

0xc1a1,	// (0x0002af4d) cell_eswt_app_pane_g1_ParamLimits

0xc1a1,	// (0x0002af4d) cell_eswt_app_pane_g1

0xc1d0,	// (0x0002af7c) cell_eswt_app_pane_g2_ParamLimits

0xc1d0,	// (0x0002af7c) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0002e9dc) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0002e9dc) cell_eswt_app_pane_g

0xc1f9,	// (0x0002afa5) cell_eswt_app_pane_t1_ParamLimits

0xc1f9,	// (0x0002afa5) cell_eswt_app_pane_t1

0x8291,	// (0x0002703d) grid_highlight_pane_cp70_ParamLimits

0x8291,	// (0x0002703d) grid_highlight_pane_cp70

0x5501,	// (0x000242ad) set_content_pane_g1

0x581d,	// (0x000245c9) status_small_volume_pane

0xc22b,	// (0x0002afd7) status_small_volume_pane_g1

0xc233,	// (0x0002afdf) volume_small2_pane

0xc23c,	// (0x0002afe8) volume_small2_pane_g1

0xc245,	// (0x0002aff1) volume_small2_pane_g2

0xc24e,	// (0x0002affa) volume_small2_pane_g3

0xc257,	// (0x0002b003) volume_small2_pane_g4

0xc260,	// (0x0002b00c) volume_small2_pane_g5

0xc269,	// (0x0002b015) volume_small2_pane_g6

0xc272,	// (0x0002b01e) volume_small2_pane_g7

0xc27b,	// (0x0002b027) volume_small2_pane_g8

0xc284,	// (0x0002b030) volume_small2_pane_g9

0xc28d,	// (0x0002b039) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0002e9e1) volume_small2_pane_g

0x7ce4,	// (0x00026a90) fep_vkb_top_text_pane_g1_ParamLimits

0xbec8,	// (0x0002ac74) fep_vkb_top_text_pane_t1_ParamLimits

0x7ebc,	// (0x00026c68) popup_preview_fixed_window_g3_ParamLimits

0x7ebc,	// (0x00026c68) popup_preview_fixed_window_g3

0xabc8,	// (0x00029974) popup_toolbar_trans_pane

0xb4ee,	// (0x0002a29a) aid_height_set_list_ParamLimits

0x62d7,	// (0x00025083) aid_size_parent_ParamLimits

0x4d6c,	// (0x00023b18) list_highlight_pane_cp2_ParamLimits

0x5501,	// (0x000242ad) set_content_pane_g1_ParamLimits

0xef2f,	// (0x0002dcdb) list_single_image_pane_ParamLimits

0xef2f,	// (0x0002dcdb) list_single_image_pane

0xc296,	// (0x0002b042) aid_size_cell_image_ParamLimits

0xc296,	// (0x0002b042) aid_size_cell_image

0xc2a3,	// (0x0002b04f) grid_single_image_pane_ParamLimits

0xc2a3,	// (0x0002b04f) grid_single_image_pane

0x5be4,	// (0x00024990) list_single_image_pane_g1_ParamLimits

0x5be4,	// (0x00024990) list_single_image_pane_g1

0x829d,	// (0x00027049) list_single_image_pane_g2_ParamLimits

0x829d,	// (0x00027049) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0002e9f6) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0002e9f6) list_single_image_pane_g

0x62c1,	// (0x0002506d) list_single_image_pane_t1_ParamLimits

0x62c1,	// (0x0002506d) list_single_image_pane_t1

0xc2b1,	// (0x0002b05d) cell_image_list_pane_ParamLimits

0xc2b1,	// (0x0002b05d) cell_image_list_pane

0xc2c4,	// (0x0002b070) cell_image_list_pane_g1

0xc2cd,	// (0x0002b079) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0002e9fb) cell_image_list_pane_g

0x82b1,	// (0x0002705d) aid_size_cell_tb_trans_pane

0x4c14,	// (0x000239c0) bg_tb_trans_pane

0x82c3,	// (0x0002706f) grid_tb_trans_pane

0x5b90,	// (0x0002493c) bg_tb_trans_pane_g1

0x5b98,	// (0x00024944) bg_tb_trans_pane_g2

0x5ba0,	// (0x0002494c) bg_tb_trans_pane_g3

0x5ba8,	// (0x00024954) bg_tb_trans_pane_g4

0x5bb0,	// (0x0002495c) bg_tb_trans_pane_g5

0x5bc8,	// (0x00024974) bg_tb_trans_pane_g6

0x5bd0,	// (0x0002497c) bg_tb_trans_pane_g7

0x5bb8,	// (0x00024964) bg_tb_trans_pane_g8

0x5bc0,	// (0x0002496c) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0002ea00) bg_tb_trans_pane_g

0x82d7,	// (0x00027083) cell_toolbar_trans_pane_ParamLimits

0x82d7,	// (0x00027083) cell_toolbar_trans_pane

0x7a44,	// (0x000267f0) cell_toolbar_trans_pane_g1

0xba03,	// (0x0002a7af) list_form2_midp_pane_t1

0xba11,	// (0x0002a7bd) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0002e89d) list_form2_midp_pane_t

0x7797,	// (0x00026543) scroll_pane_cp51_ParamLimits

0x790e,	// (0x000266ba) form2_midp_wait_pane_g1

0x7917,	// (0x000266c3) form2_midp_wait_pane_g2

0x7920,	// (0x000266cc) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0002e8b2) form2_midp_wait_pane_g

0x23e3,	// (0x0002118f) list_highlight_pane_cp21_ParamLimits

0x7948,	// (0x000266f4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7957,	// (0x00026703) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeed0,	// (0x0002dc7c) list_single_2graphic_im_pane_ParamLimits

0xeed0,	// (0x0002dc7c) list_single_2graphic_im_pane

0xc2d6,	// (0x0002b082) list_single_2graphic_im_pane_g1_ParamLimits

0xc2d6,	// (0x0002b082) list_single_2graphic_im_pane_g1

0xc2e7,	// (0x0002b093) list_single_2graphic_im_pane_g2_ParamLimits

0xc2e7,	// (0x0002b093) list_single_2graphic_im_pane_g2

0xc2f3,	// (0x0002b09f) list_single_2graphic_im_pane_g3_ParamLimits

0xc2f3,	// (0x0002b09f) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0002ea13) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0002ea13) list_single_2graphic_im_pane_g

0xc307,	// (0x0002b0b3) list_single_2graphic_im_pane_t1_ParamLimits

0xc307,	// (0x0002b0b3) list_single_2graphic_im_pane_t1

0x7ec8,	// (0x00026c74) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ec8,	// (0x00026c74) list_single_graphic_2heading_pane_fp

0xf216,	// (0x0002dfc2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf216,	// (0x0002dfc2) list_single_graphic_2heading_pane_fp_g1

0x7edd,	// (0x00026c89) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7edd,	// (0x00026c89) list_single_graphic_2heading_pane_fp_g2

0xf1df,	// (0x0002df8b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf1df,	// (0x0002df8b) list_single_graphic_2heading_pane_fp_g3

0xf1eb,	// (0x0002df97) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf1eb,	// (0x0002df97) list_single_graphic_2heading_pane_fp_g4

0x7ee9,	// (0x00026c95) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ee9,	// (0x00026c95) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0002e93a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002e93a) list_single_graphic_2heading_pane_fp_g

0xf3e3,	// (0x0002e18f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf3e3,	// (0x0002e18f) list_single_graphic_2heading_pane_fp_t1

0xf24e,	// (0x0002dffa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf24e,	// (0x0002dffa) list_single_graphic_2heading_pane_fp_t2

0xf3f9,	// (0x0002e1a5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf3f9,	// (0x0002e1a5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0002ea1c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0002ea1c) list_single_graphic_2heading_pane_fp_t

0x7ad0,	// (0x0002687c) fep_hwr_write_pane_g5_ParamLimits

0x7ad0,	// (0x0002687c) fep_hwr_write_pane_g5

0x7adc,	// (0x00026888) fep_hwr_write_pane_g6_ParamLimits

0x7adc,	// (0x00026888) fep_hwr_write_pane_g6

0x816a,	// (0x00026f16) eswt_shell_pane_ParamLimits

0x5ca0,	// (0x00024a4c) bg_popup_window_pane_cp18_ParamLimits

0x6d6a,	// (0x00025b16) heading_pane_cp70

0x8266,	// (0x00027012) popup_eswt_tasktip_window_t1_ParamLimits

0xac75,	// (0x00029a21) aid_touch_tab_arrow_left

0xac81,	// (0x00029a2d) aid_touch_tab_arrow_right

0x9b49,	// (0x000288f5) title_pane_g3_ParamLimits

0x9b49,	// (0x000288f5) title_pane_g3

0x4bd3,	// (0x0002397f) set_value_pane_g1

0xabc8,	// (0x00029974) popup_toolbar_trans_pane_ParamLimits

0x82b1,	// (0x0002705d) aid_size_cell_tb_trans_pane_ParamLimits

0x4c14,	// (0x000239c0) bg_tb_trans_pane_ParamLimits

0x82c3,	// (0x0002706f) grid_tb_trans_pane_ParamLimits

0x2516,	// (0x000212c2) cont_note_pane_ParamLimits

0x2516,	// (0x000212c2) cont_note_pane

0x275f,	// (0x0002150b) cont_snote2_single_text_pane_ParamLimits

0x275f,	// (0x0002150b) cont_snote2_single_text_pane

0x275f,	// (0x0002150b) cont_snote2_single_graphic_pane_ParamLimits

0x275f,	// (0x0002150b) cont_snote2_single_graphic_pane

0x6168,	// (0x00024f14) cont_note_wait_pane_ParamLimits

0x6168,	// (0x00024f14) cont_note_wait_pane

0x6168,	// (0x00024f14) cont_note_image_pane_ParamLimits

0x6168,	// (0x00024f14) cont_note_image_pane

0x8309,	// (0x000270b5) popup_note2_window_g1_ParamLimits

0x8309,	// (0x000270b5) popup_note2_window_g1

0x833a,	// (0x000270e6) popup_note2_window_t1_ParamLimits

0x833a,	// (0x000270e6) popup_note2_window_t1

0x837f,	// (0x0002712b) popup_note2_window_t2_ParamLimits

0x837f,	// (0x0002712b) popup_note2_window_t2

0x83c4,	// (0x00027170) popup_note2_window_t3_ParamLimits

0x83c4,	// (0x00027170) popup_note2_window_t3

0x8409,	// (0x000271b5) popup_note2_window_t4_ParamLimits

0x8409,	// (0x000271b5) popup_note2_window_t4

0x259a,	// (0x00021346) popup_note2_window_t5_ParamLimits

0x259a,	// (0x00021346) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0002ea28) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0002ea28) popup_note2_window_t

0x8438,	// (0x000271e4) popup_note2_image_window_g1_ParamLimits

0x8438,	// (0x000271e4) popup_note2_image_window_g1

0x8444,	// (0x000271f0) popup_note2_image_window_g2_ParamLimits

0x8444,	// (0x000271f0) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0002ea33) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0002ea33) popup_note2_image_window_g

0x8456,	// (0x00027202) popup_note2_image_window_t1_ParamLimits

0x8456,	// (0x00027202) popup_note2_image_window_t1

0x846e,	// (0x0002721a) popup_note2_image_window_t2_ParamLimits

0x846e,	// (0x0002721a) popup_note2_image_window_t2

0x8486,	// (0x00027232) popup_note2_image_window_t3_ParamLimits

0x8486,	// (0x00027232) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0002ea38) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0002ea38) popup_note2_image_window_t

0x6176,	// (0x00024f22) popup_note2_wait_window_g1_ParamLimits

0x6176,	// (0x00024f22) popup_note2_wait_window_g1

0x84a2,	// (0x0002724e) popup_note2_wait_window_g2_ParamLimits

0x84a2,	// (0x0002724e) popup_note2_wait_window_g2

0x618e,	// (0x00024f3a) popup_note2_wait_window_g3_ParamLimits

0x618e,	// (0x00024f3a) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x0002ea3f) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x0002ea3f) popup_note2_wait_window_g

0x84ae,	// (0x0002725a) popup_note2_wait_window_t1_ParamLimits

0x84ae,	// (0x0002725a) popup_note2_wait_window_t1

0x84cc,	// (0x00027278) popup_note2_wait_window_t2_ParamLimits

0x84cc,	// (0x00027278) popup_note2_wait_window_t2

0x84ea,	// (0x00027296) popup_note2_wait_window_t3_ParamLimits

0x84ea,	// (0x00027296) popup_note2_wait_window_t3

0x84fc,	// (0x000272a8) popup_note2_wait_window_t4_ParamLimits

0x84fc,	// (0x000272a8) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x0002ea46) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x0002ea46) popup_note2_wait_window_t

0x850e,	// (0x000272ba) wait_bar2_pane_ParamLimits

0x850e,	// (0x000272ba) wait_bar2_pane

0x8526,	// (0x000272d2) popup_snote2_single_text_window_g1_ParamLimits

0x8526,	// (0x000272d2) popup_snote2_single_text_window_g1

0x854e,	// (0x000272fa) popup_snote2_single_text_window_t1_ParamLimits

0x854e,	// (0x000272fa) popup_snote2_single_text_window_t1

0x859a,	// (0x00027346) popup_snote2_single_text_window_t2_ParamLimits

0x859a,	// (0x00027346) popup_snote2_single_text_window_t2

0x85e6,	// (0x00027392) popup_snote2_single_text_window_t3_ParamLimits

0x85e6,	// (0x00027392) popup_snote2_single_text_window_t3

0x8627,	// (0x000273d3) popup_snote2_single_text_window_t4_ParamLimits

0x8627,	// (0x000273d3) popup_snote2_single_text_window_t4

0x865d,	// (0x00027409) popup_snote2_single_text_window_t5_ParamLimits

0x865d,	// (0x00027409) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x0002ea4f) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x0002ea4f) popup_snote2_single_text_window_t

0x8688,	// (0x00027434) popup_snote2_single_graphic_window_g1_ParamLimits

0x8688,	// (0x00027434) popup_snote2_single_graphic_window_g1

0x86b0,	// (0x0002745c) popup_snote2_single_graphic_window_g2_ParamLimits

0x86b0,	// (0x0002745c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x0002ea5a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x0002ea5a) popup_snote2_single_graphic_window_g

0x86d8,	// (0x00027484) popup_snote2_single_graphic_window_t1_ParamLimits

0x86d8,	// (0x00027484) popup_snote2_single_graphic_window_t1

0x8724,	// (0x000274d0) popup_snote2_single_graphic_window_t2_ParamLimits

0x8724,	// (0x000274d0) popup_snote2_single_graphic_window_t2

0x85e6,	// (0x00027392) popup_snote2_single_graphic_window_t3_ParamLimits

0x85e6,	// (0x00027392) popup_snote2_single_graphic_window_t3

0x8627,	// (0x000273d3) popup_snote2_single_graphic_window_t4_ParamLimits

0x8627,	// (0x000273d3) popup_snote2_single_graphic_window_t4

0x865d,	// (0x00027409) popup_snote2_single_graphic_window_t5_ParamLimits

0x865d,	// (0x00027409) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x0002ea5f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x0002ea5f) popup_snote2_single_graphic_window_t

0x772f,	// (0x000264db) clock_nsta_pane_cp2_t1

0x772f,	// (0x000264db) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0002e873) clock_nsta_pane_cp2_t

0xeb4f,	// (0x0002d8fb) form_field_data_wide_pane_g1_ParamLimits

0x4c2e,	// (0x000239da) form_field_data_wide_pane_g2_ParamLimits

0x4c2e,	// (0x000239da) form_field_data_wide_pane_g2

0x4c3a,	// (0x000239e6) form_field_data_wide_pane_g3_ParamLimits

0x4c3a,	// (0x000239e6) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x0002e43f) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x0002e43f) form_field_data_wide_pane_g

0xb89f,	// (0x0002a64b) grid_touch_3_pane_ParamLimits

0xb89f,	// (0x0002a64b) grid_touch_3_pane

0xc338,	// (0x0002b0e4) cell_touch_3_pane_ParamLimits

0xc338,	// (0x0002b0e4) cell_touch_3_pane

0x7a44,	// (0x000267f0) cell_touch_3_pane_g1

0x7a44,	// (0x000267f0) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0002e8f8) cell_touch_3_pane_g

0x25cc,	// (0x00021378) cont_query_data_pane

0x25d4,	// (0x00021380) cont_query_data_pane_cp1

0x8770,	// (0x0002751c) button_value_adjust_pane_cp7

0x8778,	// (0x00027524) query_popup_pane_cp3

0x519b,	// (0x00023f47) bg_popup_sub_pane_cp22_ParamLimits

0xa2b2,	// (0x0002905e) navi_navi_volume_pane_cp2

0xa2cd,	// (0x00029079) popup_side_volume_key_window_g2

0xa2dc,	// (0x00029088) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002e4d5) popup_side_volume_key_window_g

0xa2f9,	// (0x000290a5) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002e4dc) popup_side_volume_key_window_t

0x53cb,	// (0x00024177) popup_side_volume_key_window_ParamLimits

0xdbf7,	// (0x0002c9a3) list_double_graphic_pane_g4_ParamLimits

0xdbf7,	// (0x0002c9a3) list_double_graphic_pane_g4

0xef0f,	// (0x0002dcbb) list_single_2heading_msg_pane_ParamLimits

0xef0f,	// (0x0002dcbb) list_single_2heading_msg_pane

0xf419,	// (0x0002e1c5) list_single_2heading_msg_pane_g1_ParamLimits

0xf419,	// (0x0002e1c5) list_single_2heading_msg_pane_g1

0xda26,	// (0x0002c7d2) list_single_2heading_msg_pane_g2_ParamLimits

0xda26,	// (0x0002c7d2) list_single_2heading_msg_pane_g2

0xf425,	// (0x0002e1d1) list_single_2heading_msg_pane_g3_ParamLimits

0xf425,	// (0x0002e1d1) list_single_2heading_msg_pane_g3

0xf431,	// (0x0002e1dd) list_single_2heading_msg_pane_g4_ParamLimits

0xf431,	// (0x0002e1dd) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x0002ea6a) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x0002ea6a) list_single_2heading_msg_pane_g

0xf449,	// (0x0002e1f5) list_single_2heading_msg_pane_t1_ParamLimits

0xf449,	// (0x0002e1f5) list_single_2heading_msg_pane_t1

0xf471,	// (0x0002e21d) list_single_2heading_msg_pane_t2_ParamLimits

0xf471,	// (0x0002e21d) list_single_2heading_msg_pane_t2

0xf4a5,	// (0x0002e251) list_single_2heading_msg_pane_t3_ParamLimits

0xf4a5,	// (0x0002e251) list_single_2heading_msg_pane_t3

0xf4de,	// (0x0002e28a) list_single_2heading_msg_pane_t4_ParamLimits

0xf4de,	// (0x0002e28a) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x0002ea73) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x0002ea73) list_single_2heading_msg_pane_t

0x2391,	// (0x0002113d) title_pane_g4_ParamLimits

0x2391,	// (0x0002113d) title_pane_g4

0x9fa3,	// (0x00028d4f) title_pane_stacon_g3_ParamLimits

0x9fa3,	// (0x00028d4f) title_pane_stacon_g3

0x82fd,	// (0x000270a9) list_single_2graphic_im_pane_g4_ParamLimits

0x82fd,	// (0x000270a9) list_single_2graphic_im_pane_g4

0x6b4d,	// (0x000258f9) popup_side_volume_key_window_cp

0x7070,	// (0x00025e1c) main_idle_act2_pane_t1

0xaf70,	// (0x00029d1c) toolbar_button_pane_g10

0x9ea1,	// (0x00028c4d) popup_toolbar_window_cp1

0x7720,	// (0x000264cc) clock_nsta_pane_cp_t1

0x7720,	// (0x000264cc) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0002e86e) clock_nsta_pane_cp_t

0xa2b2,	// (0x0002905e) navi_navi_volume_pane_cp2_ParamLimits

0xa2c1,	// (0x0002906d) popup_side_volume_key_window_g1_ParamLimits

0xa2cd,	// (0x00029079) popup_side_volume_key_window_g2_ParamLimits

0xa2dc,	// (0x00029088) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002e4d5) popup_side_volume_key_window_g_ParamLimits

0xbb9a,	// (0x0002a946) fep_hwr_aid_pane

0xbc41,	// (0x0002a9ed) bg_fep_hwr_top_pane_g4_ParamLimits

0x7ab2,	// (0x0002685e) fep_hwr_top_pane_g1_ParamLimits

0x7aa0,	// (0x0002684c) fep_hwr_top_pane_g2_ParamLimits

0xbc61,	// (0x0002aa0d) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0002e8c3) fep_hwr_top_pane_g_ParamLimits

0xbc76,	// (0x0002aa22) fep_hwr_top_text_pane_ParamLimits

0x6919,	// (0x000256c5) aid_touch_tab_arrow_arrow_2

0x6910,	// (0x000256bc) aid_touch_tab_arrow_left_2

0xbbae,	// (0x0002a95a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbbe5,	// (0x0002a991) fep_hwr_prediction_pane

0x7b9f,	// (0x0002694b) fep_vkb_prediction_pane

0xbea5,	// (0x0002ac51) fep_vkb_side_pane_g3_ParamLimits

0xbea5,	// (0x0002ac51) fep_vkb_side_pane_g3

0xbfb4,	// (0x0002ad60) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc041,	// (0x0002aded) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc04e,	// (0x0002adfa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0002e972) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc37a,	// (0x0002b126) fep_hwr_prediction_pane_g1

0xc384,	// (0x0002b130) fep_hwr_prediction_pane_g2

0xc38c,	// (0x0002b138) fep_hwr_prediction_pane_g3

0xc394,	// (0x0002b140) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0002ea7c) fep_hwr_prediction_pane_g

0x8789,	// (0x00027535) fep_vkb_prediction_pane_g1

0x8793,	// (0x0002753f) fep_vkb_prediction_pane_g2

0x879b,	// (0x00027547) fep_vkb_prediction_pane_g3

0x87a3,	// (0x0002754f) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0002ea85) fep_vkb_prediction_pane_g

0xb496,	// (0x0002a242) slider_set_pane_g3

0xb4aa,	// (0x0002a256) slider_set_pane_g4

0xb4c2,	// (0x0002a26e) slider_set_pane_g5

0xb496,	// (0x0002a242) slider_set_pane_g6

0xb4d8,	// (0x0002a284) slider_set_pane_g7

0x6df5,	// (0x00025ba1) slider_form_pane_g3

0x6dfe,	// (0x00025baa) slider_form_pane_g4

0x6e06,	// (0x00025bb2) slider_form_pane_g5

0x6df5,	// (0x00025ba1) slider_form_pane_g6

0xb649,	// (0x0002a3f5) slider_form_pane_g7

0x72c2,	// (0x0002606e) slider_set_pane_vc_g3

0x72cb,	// (0x00026077) slider_set_pane_vc_g4

0x72d4,	// (0x00026080) slider_set_pane_vc_g5

0x72c2,	// (0x0002606e) slider_set_pane_vc_g6

0x72dd,	// (0x00026089) slider_set_pane_vc_g7

0x72c2,	// (0x0002606e) slider_form_pane_vc_g1

0x72cb,	// (0x00026077) slider_form_pane_vc_g2

0x72d4,	// (0x00026080) slider_form_pane_vc_g3

0x72c2,	// (0x0002606e) slider_form_pane_vc_g4

0x7496,	// (0x00026242) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x0002e847) slider_form_pane_vc_g

0x21d2,	// (0x00020f7e) main_idle_act3_pane

0x87ab,	// (0x00027557) ai3_links_pane

0xc39c,	// (0x0002b148) popup_ai3_data_window_ParamLimits

0xc39c,	// (0x0002b148) popup_ai3_data_window

0x21d2,	// (0x00020f7e) grid_ai3_links_pane

0xc3b6,	// (0x0002b162) cell_ai3_links_pane_ParamLimits

0xc3b6,	// (0x0002b162) cell_ai3_links_pane

0x87b4,	// (0x00027560) bg_popup_sub_pane_cp11

0x87c1,	// (0x0002756d) cell_ai3_links_pane_g1

0x21d2,	// (0x00020f7e) bg_popup_sub_pane_cp12

0x87e6,	// (0x00027592) heading_ai3_data_pane

0x87ee,	// (0x0002759a) list_ai3_gene_pane

0x87fa,	// (0x000275a6) popup_ai3_data_window_g1

0x8802,	// (0x000275ae) heading_ai3_data_pane_g1

0x880a,	// (0x000275b6) heading_ai3_data_pane_t1

0x8818,	// (0x000275c4) list_double_ai3_gene_pane_ParamLimits

0x8818,	// (0x000275c4) list_double_ai3_gene_pane

0x8825,	// (0x000275d1) list_single_ai3_gene_pane_ParamLimits

0x8825,	// (0x000275d1) list_single_ai3_gene_pane

0x7a09,	// (0x000267b5) list_highlight_pane_cp7_ParamLimits

0x7a09,	// (0x000267b5) list_highlight_pane_cp7

0x8832,	// (0x000275de) list_single_a13_gene_pane_t1_ParamLimits

0x8832,	// (0x000275de) list_single_a13_gene_pane_t1

0x8849,	// (0x000275f5) list_single_ai3_gene_pane_g1

0x8852,	// (0x000275fe) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x0002ea8e) list_single_ai3_gene_pane_g

0x885a,	// (0x00027606) list_double_ai3_gene_pane_g1_ParamLimits

0x885a,	// (0x00027606) list_double_ai3_gene_pane_g1

0x8866,	// (0x00027612) list_double_ai3_gene_pane_t1_ParamLimits

0x8866,	// (0x00027612) list_double_ai3_gene_pane_t1

0x8882,	// (0x0002762e) list_double_ai3_gene_pane_t2_ParamLimits

0x8882,	// (0x0002762e) list_double_ai3_gene_pane_t2

0x8898,	// (0x00027644) list_double_ai3_gene_pane_t3_ParamLimits

0x8898,	// (0x00027644) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x0002ea93) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x0002ea93) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf40f,	// (0x0002e1bb) aid_size_min_col_2

0xc366,	// (0x0002b112) aid_size_min_msg_ParamLimits

0xc366,	// (0x0002b112) aid_size_min_msg

0xbeb9,	// (0x0002ac65) fep_vkb_top_text_pane_g2_ParamLimits

0xbeb9,	// (0x0002ac65) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0002e8f3) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0002e8f3) fep_vkb_top_text_pane_g

0x21d2,	// (0x00020f7e) main_hc_apps_shell_pane

0x88b5,	// (0x00027661) grid_hc_apps_pane_ParamLimits

0x88b5,	// (0x00027661) grid_hc_apps_pane

0x88c4,	// (0x00027670) list_hc_apps_pane

0x88cc,	// (0x00027678) scroll_pane_cp37_ParamLimits

0x88cc,	// (0x00027678) scroll_pane_cp37

0xc3ce,	// (0x0002b17a) cell_hc_apps_pane_ParamLimits

0xc3ce,	// (0x0002b17a) cell_hc_apps_pane

0xc47c,	// (0x0002b228) cell_hc_apps_pane_g1_ParamLimits

0xc47c,	// (0x0002b228) cell_hc_apps_pane_g1

0x88d8,	// (0x00027684) cell_hc_apps_pane_g2_ParamLimits

0x88d8,	// (0x00027684) cell_hc_apps_pane_g2

0x88f4,	// (0x000276a0) cell_hc_apps_pane_g3_ParamLimits

0x88f4,	// (0x000276a0) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0002ea9a) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0002ea9a) cell_hc_apps_pane_g

0xc4ad,	// (0x0002b259) cell_hc_apps_pane_t1_ParamLimits

0xc4ad,	// (0x0002b259) cell_hc_apps_pane_t1

0x2516,	// (0x000212c2) grid_highlight_pane_cp10_ParamLimits

0x2516,	// (0x000212c2) grid_highlight_pane_cp10

0xc4ed,	// (0x0002b299) list_single_hc_apps_pane_ParamLimits

0xc4ed,	// (0x0002b299) list_single_hc_apps_pane

0xc549,	// (0x0002b2f5) list_single_hc_apps_pane_g1

0xf503,	// (0x0002e2af) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x0002eaa1) list_single_hc_apps_pane_g

0xf51c,	// (0x0002e2c8) list_single_hc_apps_pane_g2_copy1

0xf538,	// (0x0002e2e4) list_single_hc_apps_pane_t1

0x23e3,	// (0x0002118f) bg_set_opt_pane_cp_ParamLimits

0x9bf9,	// (0x000289a5) setting_slider_pane_t1_ParamLimits

0x9c12,	// (0x000289be) setting_slider_pane_t2_ParamLimits

0x9c2c,	// (0x000289d8) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0002e322) setting_slider_pane_t_ParamLimits

0x9c44,	// (0x000289f0) slider_set_pane_ParamLimits

0xa68d,	// (0x00029439) control_pane_g5_ParamLimits

0xa68d,	// (0x00029439) control_pane_g5

0x6db1,	// (0x00025b5d) slider_set_pane_g1_ParamLimits

0xb48a,	// (0x0002a236) slider_set_pane_g2_ParamLimits

0xb496,	// (0x0002a242) slider_set_pane_g3_ParamLimits

0xb4aa,	// (0x0002a256) slider_set_pane_g4_ParamLimits

0xb4c2,	// (0x0002a26e) slider_set_pane_g5_ParamLimits

0xb496,	// (0x0002a242) slider_set_pane_g6_ParamLimits

0xb4d8,	// (0x0002a284) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002e721) slider_set_pane_g_ParamLimits

0x54ac,	// (0x00024258) navi_icon_text_pane_ParamLimits

0xac4b,	// (0x000299f7) aid_fill_nsta_2_ParamLimits

0xac75,	// (0x00029a21) aid_touch_tab_arrow_left_ParamLimits

0xac81,	// (0x00029a2d) aid_touch_tab_arrow_right_ParamLimits

0xaced,	// (0x00029a99) clock_nsta_pane_ParamLimits

0x68f2,	// (0x0002569e) navi_icon_pane_g1_ParamLimits

0x68fe,	// (0x000256aa) navi_text_pane_t1_ParamLimits

0x7771,	// (0x0002651d) navi_icon_text_pane_g1_ParamLimits

0x777d,	// (0x00026529) navi_icon_text_pane_t1_ParamLimits

0xc549,	// (0x0002b2f5) list_single_hc_apps_pane_g1_ParamLimits

0xf503,	// (0x0002e2af) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x0002eaa1) list_single_hc_apps_pane_g_ParamLimits

0xf51c,	// (0x0002e2c8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf538,	// (0x0002e2e4) list_single_hc_apps_pane_t1_ParamLimits

0x9a47,	// (0x000287f3) popup_toolbar2_fixed_window_ParamLimits

0x9a47,	// (0x000287f3) popup_toolbar2_fixed_window

0xabbe,	// (0x0002996a) popup_toolbar2_float_window

0x21d2,	// (0x00020f7e) bg_popup_sub_pane_cp27

0x8916,	// (0x000276c2) grid_toolbar2_float_pane

0x21d2,	// (0x00020f7e) bg_popup_sub_pane_cp26

0x8916,	// (0x000276c2) grid_toolbar2_fixed_pane

0xc562,	// (0x0002b30e) cell_toolbar2_fixed_pane_ParamLimits

0xc562,	// (0x0002b30e) cell_toolbar2_fixed_pane

0xc572,	// (0x0002b31e) cell_toolbar2_fixed_pane_g1

0x891e,	// (0x000276ca) toolbar2_fixed_button_pane

0x5b90,	// (0x0002493c) toolbar2_fixed_button_pane_g1

0x5b98,	// (0x00024944) toolbar2_fixed_button_pane_g2

0x5ba0,	// (0x0002494c) toolbar2_fixed_button_pane_g3

0x5ba8,	// (0x00024954) toolbar2_fixed_button_pane_g4

0x5bb0,	// (0x0002495c) toolbar2_fixed_button_pane_g5

0x5bb8,	// (0x00024964) toolbar2_fixed_button_pane_g6

0x5bc0,	// (0x0002496c) toolbar2_fixed_button_pane_g7

0x5bc8,	// (0x00024974) toolbar2_fixed_button_pane_g8

0x5bd0,	// (0x0002497c) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002e623) toolbar2_fixed_button_pane_g

0x8926,	// (0x000276d2) cell_toolbar2_float_pane_ParamLimits

0x8926,	// (0x000276d2) cell_toolbar2_float_pane

0x8937,	// (0x000276e3) cell_toolbar2_float_pane_g1

0x891e,	// (0x000276ca) toolbar2_fixed_button_pane_cp

0xbd93,	// (0x0002ab3f) fep_vkb_accented_list_pane_ParamLimits

0xbd93,	// (0x0002ab3f) fep_vkb_accented_list_pane

0xbf94,	// (0x0002ad40) bg_popup_fep_shadow_pane_g9

0x562c,	// (0x000243d8) bg_popup_fep_shadow_pane_cp3

0x4d1a,	// (0x00023ac6) list_accented_list_pane

0x8940,	// (0x000276ec) list_single_accented_list_pane_ParamLimits

0x8940,	// (0x000276ec) list_single_accented_list_pane

0x562c,	// (0x000243d8) list_highlight_pane_cp10

0x8951,	// (0x000276fd) list_single_accented_list_pane_t1

0xab16,	// (0x000298c2) popup_slider_window_ParamLimits

0xab16,	// (0x000298c2) popup_slider_window

0x8780,	// (0x0002752c) aid_indentation_list_msg

0xc627,	// (0x0002b3d3) bg_popup_window_pane_cp19

0x89bd,	// (0x00027769) popup_slider_window_g1

0x89d9,	// (0x00027785) popup_slider_window_g2

0x89f5,	// (0x000277a1) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x0002eaa6) popup_slider_window_g

0x8a11,	// (0x000277bd) popup_slider_window_t1

0x8a57,	// (0x00027803) small_volume_slider_vertical_pane

0x7a44,	// (0x000267f0) small_volume_slider_vertical_pane_g1

0x7a44,	// (0x000267f0) small_volume_slider_vertical_pane_g2

0x8a73,	// (0x0002781f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x0002eab8) small_volume_slider_vertical_pane_g

0x97ff,	// (0x000285ab) area_side_right_pane_ParamLimits

0x97ff,	// (0x000285ab) area_side_right_pane

0xc6a1,	// (0x0002b44d) aid_size_side_button_ParamLimits

0xc6a1,	// (0x0002b44d) aid_size_side_button

0xc6b5,	// (0x0002b461) grid_sctrl_middle_pane_ParamLimits

0xc6b5,	// (0x0002b461) grid_sctrl_middle_pane

0xc6d5,	// (0x0002b481) sctrl_sk_bottom_pane

0xc6e6,	// (0x0002b492) sctrl_sk_top_pane

0xc6f8,	// (0x0002b4a4) aid_touch_sctrl_top

0xc705,	// (0x0002b4b1) bg_sctrl_sk_pane_ParamLimits

0xc705,	// (0x0002b4b1) bg_sctrl_sk_pane

0xc713,	// (0x0002b4bf) sctrl_sk_top_pane_g1

0xc720,	// (0x0002b4cc) sctrl_sk_top_pane_t1

0xc6f8,	// (0x0002b4a4) aid_touch_sctrl_bottom

0xc705,	// (0x0002b4b1) bg_sctrl_sk_pane_cp_ParamLimits

0xc705,	// (0x0002b4b1) bg_sctrl_sk_pane_cp

0xc73b,	// (0x0002b4e7) sctrl_sk_bottom_pane_g1

0xc720,	// (0x0002b4cc) sctrl_sk_bottom_pane_t1

0xc744,	// (0x0002b4f0) cell_sctrl_middle_pane_ParamLimits

0xc744,	// (0x0002b4f0) cell_sctrl_middle_pane

0xc75f,	// (0x0002b50b) aid_touch_sctrl_middle_ParamLimits

0xc75f,	// (0x0002b50b) aid_touch_sctrl_middle

0xc771,	// (0x0002b51d) bg_sctrl_middle_pane_ParamLimits

0xc771,	// (0x0002b51d) bg_sctrl_middle_pane

0xbfb4,	// (0x0002ad60) cell_sctrl_middle_pane_g1_ParamLimits

0xbfb4,	// (0x0002ad60) cell_sctrl_middle_pane_g1

0xc77f,	// (0x0002b52b) cell_sctrl_middle_pane_g2_ParamLimits

0xc77f,	// (0x0002b52b) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x0002eac4) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x0002eac4) cell_sctrl_middle_pane_g

0x5b90,	// (0x0002493c) bg_sctrl_middle_pane_g1

0x5ba0,	// (0x0002494c) bg_sctrl_middle_pane_g2

0x5b98,	// (0x00024944) bg_sctrl_middle_pane_g3

0x5bb0,	// (0x0002495c) bg_sctrl_middle_pane_g4

0x5ba8,	// (0x00024954) bg_sctrl_middle_pane_g5

0x5bb8,	// (0x00024964) bg_sctrl_middle_pane_g6

0x5bc0,	// (0x0002496c) bg_sctrl_middle_pane_g7

0x5bd0,	// (0x0002497c) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x0002eac9) bg_sctrl_middle_pane_g

0x5bc8,	// (0x00024974) bg_sctrl_middle_pane_g8_copy1

0x5b90,	// (0x0002493c) bg_sctrl_sk_pane_g1

0x5b98,	// (0x00024944) bg_sctrl_sk_pane_g2

0x5ba0,	// (0x0002494c) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002e623) bg_sctrl_sk_pane_g

0x291d,	// (0x000216c9) aid_size_touch_scroll_bar

0x5ba8,	// (0x00024954) bg_sctrl_sk_pane_g4

0x5bb0,	// (0x0002495c) bg_sctrl_sk_pane_g5

0x5bb8,	// (0x00024964) bg_sctrl_sk_pane_g6

0x5bc0,	// (0x0002496c) bg_sctrl_sk_pane_g7

0x5bc8,	// (0x00024974) bg_sctrl_sk_pane_g8

0x5bd0,	// (0x0002497c) bg_sctrl_sk_pane_g9

0x58c6,	// (0x00024672) popup_fep_china_hwr2_fs_candidate_window

0xa81e,	// (0x000295ca) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa81e,	// (0x000295ca) popup_fep_china_hwr2_fs_control_window

0xbfb4,	// (0x0002ad60) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x0002eabf) sctrl_sk_top_pane_g

0xc78f,	// (0x0002b53b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc78f,	// (0x0002b53b) aid_fep_china_hwr2_fs_cell

0xc7a1,	// (0x0002b54d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc7a1,	// (0x0002b54d) bg_popup_fep_shadow_pane_cp4

0xc7b8,	// (0x0002b564) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc7b8,	// (0x0002b564) bg_popup_fep_shadow_pane_cp5

0xc7ca,	// (0x0002b576) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc7ca,	// (0x0002b576) popup_fep_china_hwr2_fs_control_bar_grid

0xc7da,	// (0x0002b586) popup_fep_china_hwr2_fs_control_funtion_grid

0x8a8a,	// (0x00027836) aid_fep_china_hwr2_fs_candi_cell

0x21d2,	// (0x00020f7e) bg_popup_fep_shadow_pane_cp6

0x8a94,	// (0x00027840) popup_fep_china_hwr2_fs_candidate_grid

0xc7e2,	// (0x0002b58e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc7e2,	// (0x0002b58e) cell_fep_china_hwr2_fs_funtion_grid

0x7a44,	// (0x000267f0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8a7c,	// (0x00027828) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8a7c,	// (0x00027828) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8a9e,	// (0x0002784a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8a9e,	// (0x0002784a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x0002eada) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x0002eada) cell_fep_china_hwr2_fs_funtion_grid_g

0xc7fa,	// (0x0002b5a6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc7fa,	// (0x0002b5a6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc80f,	// (0x0002b5bb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc80f,	// (0x0002b5bb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x0002eadf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x0002eadf) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ab4,	// (0x00027860) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8abc,	// (0x00027868) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8ac4,	// (0x00027870) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x0002eae4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8acc,	// (0x00027878) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8acc,	// (0x00027878) cell_fep_china_hwr2_fs_candidate_grid

0x8ae5,	// (0x00027891) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8aed,	// (0x00027899) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a44,	// (0x000267f0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a44,	// (0x000267f0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0002e8f8) cell_fep_china_hwr2_fs_candidate_grid_g

0x8af5,	// (0x000278a1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x59dd,	// (0x00024789) clock_nsta_pane_cp_24_ParamLimits

0x59dd,	// (0x00024789) clock_nsta_pane_cp_24

0x5a45,	// (0x000247f1) indicator_nsta_pane_cp_24_ParamLimits

0x5a45,	// (0x000247f1) indicator_nsta_pane_cp_24

0x67fc,	// (0x000255a8) heading_pane_g1

0x0001,

0xf8dc,	// (0x0002e688) heading_pane_g

0x6efd,	// (0x00025ca9) grid_sct_catagory_button_pane

0x62e9,	// (0x00025095) scroll_pane_cp5_ParamLimits

0x77a3,	// (0x0002654f) button_value_adjust_pane_cp5_ParamLimits

0x77a3,	// (0x0002654f) button_value_adjust_pane_cp5

0x7861,	// (0x0002660d) form2_midp_time_pane_ParamLimits

0x8b03,	// (0x000278af) cell_sct_catagory_button_pane_ParamLimits

0x8b03,	// (0x000278af) cell_sct_catagory_button_pane

0x7a09,	// (0x000267b5) bg_button_pane_cp01_ParamLimits

0x7a09,	// (0x000267b5) bg_button_pane_cp01

0x7a44,	// (0x000267f0) cell_sct_catagory_button_pane_g1

0xab4d,	// (0x000298f9) popup_tb_extension_window

0xc82b,	// (0x0002b5d7) aid_size_cell_ext_ParamLimits

0xc82b,	// (0x0002b5d7) aid_size_cell_ext

0x2516,	// (0x000212c2) bg_tb_trans_pane_cp1_ParamLimits

0x2516,	// (0x000212c2) bg_tb_trans_pane_cp1

0xc84b,	// (0x0002b5f7) grid_tb_ext_pane_ParamLimits

0xc84b,	// (0x0002b5f7) grid_tb_ext_pane

0xc87b,	// (0x0002b627) cell_tb_ext_pane_ParamLimits

0xc87b,	// (0x0002b627) cell_tb_ext_pane

0xc892,	// (0x0002b63e) cell_tb_ext_pane_g1_ParamLimits

0xc892,	// (0x0002b63e) cell_tb_ext_pane_g1

0x8b15,	// (0x000278c1) cell_tb_ext_pane_t1

0x2516,	// (0x000212c2) list_highlight_pane_cp11_ParamLimits

0x2516,	// (0x000212c2) list_highlight_pane_cp11

0x9a66,	// (0x00028812) popup_uni_indicator_window_ParamLimits

0x9a66,	// (0x00028812) popup_uni_indicator_window

0x4c14,	// (0x000239c0) bg_popup_sub_pane_cp14

0x8b30,	// (0x000278dc) list_uniindi_pane

0x8b3c,	// (0x000278e8) uniindi_top_pane

0x2516,	// (0x000212c2) bg_uniindi_top_pane

0x8b5b,	// (0x00027907) uniindi_top_pane_g1

0x8b71,	// (0x0002791d) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x0002eaeb) uniindi_top_pane_g

0x8b9b,	// (0x00027947) uniindi_top_pane_t1

0x8bc5,	// (0x00027971) list_single_uniindi_pane_ParamLimits

0x8bc5,	// (0x00027971) list_single_uniindi_pane

0x7a44,	// (0x000267f0) bg_uniindi_top_pane_g1

0x8bd8,	// (0x00027984) list_single_uniindi_pane_g1

0x8beb,	// (0x00027997) list_single_uniindi_pane_t1

0x98dc,	// (0x00028688) control_bg_pane

0x8c10,	// (0x000279bc) bg_sctrl_sk_pane_cp1

0x8c19,	// (0x000279c5) bg_sctrl_sk_pane_cp2

0x8c22,	// (0x000279ce) control_bg_pane_g1

0x8c2b,	// (0x000279d7) control_bg_pane_g2

0x0001,

0xfd48,	// (0x0002eaf4) control_bg_pane_g

0x7662,	// (0x0002640e) cell_indicator_nsta_pane_g1_ParamLimits

0xb8e3,	// (0x0002a68f) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0002e85c) cell_indicator_nsta_pane_g_ParamLimits

0xf1cc,	// (0x0002df78) form2_midp_time_pane_t1_ParamLimits

0x275f,	// (0x0002150b) main_idle_act4_pane_ParamLimits

0x275f,	// (0x0002150b) main_idle_act4_pane

0xab4d,	// (0x000298f9) popup_tb_extension_window_ParamLimits

0xc86b,	// (0x0002b617) tb_ext_find_pane_ParamLimits

0xc86b,	// (0x0002b617) tb_ext_find_pane

0x8c34,	// (0x000279e0) ai_gene_pane_1_cp1

0x56c0,	// (0x0002446c) ai_gene_pane_2_cp1

0x8c3c,	// (0x000279e8) list_single_idle_plugin_calendar_pane

0x8c45,	// (0x000279f1) list_single_idle_plugin_notification_pane

0x8c4e,	// (0x000279fa) list_single_idle_plugin_player_pane

0xc8af,	// (0x0002b65b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc8af,	// (0x0002b65b) list_single_idle_plugin_shortcut_pane

0xc8d1,	// (0x0002b67d) main_idle_act4_pane_t1

0xc8e3,	// (0x0002b68f) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x0002eaf9) main_idle_act4_pane_t

0xc8f5,	// (0x0002b6a1) middle_sk_idle_act4_pane_ParamLimits

0xc8f5,	// (0x0002b6a1) middle_sk_idle_act4_pane

0xc90b,	// (0x0002b6b7) popup_clock_digital_analogue_window_cp2

0xc925,	// (0x0002b6d1) shortcut_wheel_idle_act4_pane_ParamLimits

0xc925,	// (0x0002b6d1) shortcut_wheel_idle_act4_pane

0x7a44,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g1

0x7a44,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g2

0x7a44,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g3

0x7a44,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g4

0x7a44,	// (0x000267f0) shortcut_wheel_idle_act4_pane_g5

0x8c57,	// (0x00027a03) shortcut_wheel_idle_act4_pane_g6

0x8c5f,	// (0x00027a0b) shortcut_wheel_idle_act4_pane_g7

0x8c67,	// (0x00027a13) shortcut_wheel_idle_act4_pane_g8

0x8c6f,	// (0x00027a1b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x0002eafe) shortcut_wheel_idle_act4_pane_g

0x7bd7,	// (0x00026983) middle_sk_idle_act4_pane_g1_ParamLimits

0x7bd7,	// (0x00026983) middle_sk_idle_act4_pane_g1

0xc995,	// (0x0002b741) middle_sk_idle_act4_pane_g2_ParamLimits

0xc995,	// (0x0002b741) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x0002eb21) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x0002eb21) middle_sk_idle_act4_pane_g

0xc9a1,	// (0x0002b74d) middle_sk_idle_act4_pane_t1_ParamLimits

0xc9a1,	// (0x0002b74d) middle_sk_idle_act4_pane_t1

0xc9be,	// (0x0002b76a) grid_ai_shortcut_pane_ParamLimits

0xc9be,	// (0x0002b76a) grid_ai_shortcut_pane

0xc9d7,	// (0x0002b783) list_highlight_pane_cp16_ParamLimits

0xc9d7,	// (0x0002b783) list_highlight_pane_cp16

0xc9e4,	// (0x0002b790) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc9e4,	// (0x0002b790) list_single_idle_plugin_shortcut_pane_g1

0xc9f0,	// (0x0002b79c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc9f0,	// (0x0002b79c) list_single_idle_plugin_shortcut_pane_g2

0xca08,	// (0x0002b7b4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xca08,	// (0x0002b7b4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x0002eb26) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x0002eb26) list_single_idle_plugin_shortcut_pane_g

0xca1b,	// (0x0002b7c7) cell_ai_shortcut_pane_ParamLimits

0xca1b,	// (0x0002b7c7) cell_ai_shortcut_pane

0xca3f,	// (0x0002b7eb) cell_ai_shortcut_pane_g1_ParamLimits

0xca3f,	// (0x0002b7eb) cell_ai_shortcut_pane_g1

0x8c34,	// (0x000279e0) ai_gene_pane_1_cp2

0x8c77,	// (0x00027a23) ai_gene_pane_2_cp2

0x8c7f,	// (0x00027a2b) list_highlight_pane_cp15

0x8c88,	// (0x00027a34) list_single_idle_plugin_calendar_pane_g1

0x8c7f,	// (0x00027a2b) list_highlight_pane_cp17

0x8c90,	// (0x00027a3c) list_single_idle_plugin_calendar_pane_g1_copy1

0x8c98,	// (0x00027a44) list_single_idle_plugin_player_pane_g1

0x70fc,	// (0x00025ea8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x0002eb2d) list_single_idle_plugin_player_pane_g

0x8ca0,	// (0x00027a4c) list_single_idle_plugin_player_pane_t1

0x8cae,	// (0x00027a5a) list_single_idle_plugin_player_pane_t2

0x8cbc,	// (0x00027a68) list_single_idle_plugin_player_pane_t3

0x8cca,	// (0x00027a76) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x0002eb32) list_single_idle_plugin_player_pane_t

0x8cd8,	// (0x00027a84) wait_bar_pane_cp15

0x8ce0,	// (0x00027a8c) grid_ai_notification_pane

0x70fc,	// (0x00025ea8) list_single_idle_plugin_notification_pane_g1

0xca61,	// (0x0002b80d) cell_ai_notification_pane_ParamLimits

0xca61,	// (0x0002b80d) cell_ai_notification_pane

0x8ce9,	// (0x00027a95) cell_ai_notification_pane_g1

0x8cf1,	// (0x00027a9d) cell_ai_notification_pane_t1

0xca6e,	// (0x0002b81a) tb_ext_find_button_pane

0xca76,	// (0x0002b822) tb_ext_find_pane_g1

0xca7e,	// (0x0002b82a) tb_ext_find_pane_t1

0x513a,	// (0x00023ee6) tb_ext_find_button_pane_g1

0x8cff,	// (0x00027aab) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x0002eb3b) tb_ext_find_button_pane_g

0xc8d1,	// (0x0002b67d) main_idle_act4_pane_t1_ParamLimits

0xc8e3,	// (0x0002b68f) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x0002eaf9) main_idle_act4_pane_t_ParamLimits

0xc90b,	// (0x0002b6b7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc919,	// (0x0002b6c5) sat_plugin_idle_act4_pane_ParamLimits

0xc919,	// (0x0002b6c5) sat_plugin_idle_act4_pane

0xca8c,	// (0x0002b838) sat_plugin_idle_act4_pane_t1_ParamLimits

0xca8c,	// (0x0002b838) sat_plugin_idle_act4_pane_t1

0xca9f,	// (0x0002b84b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xca9f,	// (0x0002b84b) sat_plugin_idle_act4_pane_t2

0xcab2,	// (0x0002b85e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcab2,	// (0x0002b85e) sat_plugin_idle_act4_pane_t3

0xcac5,	// (0x0002b871) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcac5,	// (0x0002b871) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x0002eb40) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x0002eb40) sat_plugin_idle_act4_pane_t

0x99a1,	// (0x0002874d) popup_battery_window_ParamLimits

0x99a1,	// (0x0002874d) popup_battery_window

0x2516,	// (0x000212c2) bg_popup_sub_pane_cp25_ParamLimits

0x2516,	// (0x000212c2) bg_popup_sub_pane_cp25

0xcad8,	// (0x0002b884) popup_battery_window_g1_ParamLimits

0xcad8,	// (0x0002b884) popup_battery_window_g1

0xcae4,	// (0x0002b890) popup_battery_window_t1_ParamLimits

0xcae4,	// (0x0002b890) popup_battery_window_t1

0xcaf6,	// (0x0002b8a2) popup_battery_window_t2_ParamLimits

0xcaf6,	// (0x0002b8a2) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x0002eb49) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x0002eb49) popup_battery_window_t

0xa4d7,	// (0x00029283) midp_canvas_pane_ParamLimits

0xa539,	// (0x000292e5) midp_keypad_pane_ParamLimits

0xa539,	// (0x000292e5) midp_keypad_pane

0x4d6c,	// (0x00023b18) main_midp_pane_ParamLimits

0x773e,	// (0x000264ea) signal_pane_g2_cp_ParamLimits

0xcb13,	// (0x0002b8bf) aid_size_cell_midp_keypad_ParamLimits

0xcb13,	// (0x0002b8bf) aid_size_cell_midp_keypad

0xcb2d,	// (0x0002b8d9) midp_keyp_game_grid_pane_ParamLimits

0xcb2d,	// (0x0002b8d9) midp_keyp_game_grid_pane

0xcb4d,	// (0x0002b8f9) midp_keyp_rocker_pane_ParamLimits

0xcb4d,	// (0x0002b8f9) midp_keyp_rocker_pane

0xcb78,	// (0x0002b924) midp_keyp_sk_left_pane_ParamLimits

0xcb78,	// (0x0002b924) midp_keyp_sk_left_pane

0xcbd2,	// (0x0002b97e) midp_keyp_sk_right_pane_ParamLimits

0xcbd2,	// (0x0002b97e) midp_keyp_sk_right_pane

0x21d2,	// (0x00020f7e) bg_button_pane_cp03

0xcc2c,	// (0x0002b9d8) midp_keyp_sk_left_pane_g1

0x21d2,	// (0x00020f7e) bg_button_pane_cp04

0xcc2c,	// (0x0002b9d8) midp_keyp_sk_right_pane_g1

0x7a44,	// (0x000267f0) midp_keyp_rocker_pane_g1

0xcc35,	// (0x0002b9e1) keyp_game_cell_pane_ParamLimits

0xcc35,	// (0x0002b9e1) keyp_game_cell_pane

0x21d2,	// (0x00020f7e) bg_button_pane_cp02

0xcc48,	// (0x0002b9f4) keyp_game_cell_pane_g1

0x99e5,	// (0x00028791) popup_fep_vkb2_window_ParamLimits

0x99e5,	// (0x00028791) popup_fep_vkb2_window

0xcc5f,	// (0x0002ba0b) aid_size_cell_vkb2_ParamLimits

0xcc5f,	// (0x0002ba0b) aid_size_cell_vkb2

0xccb3,	// (0x0002ba5f) popup_fep_vkb2_window_g1_ParamLimits

0xccb3,	// (0x0002ba5f) popup_fep_vkb2_window_g1

0xccfb,	// (0x0002baa7) vkb2_area_bottom_pane_ParamLimits

0xccfb,	// (0x0002baa7) vkb2_area_bottom_pane

0xcd47,	// (0x0002baf3) vkb2_area_keypad_pane_ParamLimits

0xcd47,	// (0x0002baf3) vkb2_area_keypad_pane

0xcd89,	// (0x0002bb35) vkb2_area_top_pane_ParamLimits

0xcd89,	// (0x0002bb35) vkb2_area_top_pane

0xce03,	// (0x0002bbaf) vkb2_top_entry_pane_ParamLimits

0xce03,	// (0x0002bbaf) vkb2_top_entry_pane

0xce2d,	// (0x0002bbd9) vkb2_top_grid_left_pane_ParamLimits

0xce2d,	// (0x0002bbd9) vkb2_top_grid_left_pane

0xce4b,	// (0x0002bbf7) vkb2_top_grid_right_pane_ParamLimits

0xce4b,	// (0x0002bbf7) vkb2_top_grid_right_pane

0xce69,	// (0x0002bc15) vkb2_cell_keypad_pane_ParamLimits

0xce69,	// (0x0002bc15) vkb2_cell_keypad_pane

0xcf3a,	// (0x0002bce6) vkb2_area_bottom_grid_pane_ParamLimits

0xcf3a,	// (0x0002bce6) vkb2_area_bottom_grid_pane

0xcf60,	// (0x0002bd0c) vkb2_area_bottom_pane_g1_ParamLimits

0xcf60,	// (0x0002bd0c) vkb2_area_bottom_pane_g1

0xcf84,	// (0x0002bd30) vkb2_area_bottom_pane_g2_ParamLimits

0xcf84,	// (0x0002bd30) vkb2_area_bottom_pane_g2

0xcfb2,	// (0x0002bd5e) vkb2_area_bottom_pane_g3_ParamLimits

0xcfb2,	// (0x0002bd5e) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x0002eb4e) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x0002eb4e) vkb2_area_bottom_pane_g

0xd013,	// (0x0002bdbf) vkb2_top_cell_left_pane_ParamLimits

0xd013,	// (0x0002bdbf) vkb2_top_cell_left_pane

0xd03b,	// (0x0002bde7) vkb2_top_entry_pane_g1_ParamLimits

0xd03b,	// (0x0002bde7) vkb2_top_entry_pane_g1

0xd049,	// (0x0002bdf5) vkb2_top_entry_pane_t1_ParamLimits

0xd049,	// (0x0002bdf5) vkb2_top_entry_pane_t1

0xd07b,	// (0x0002be27) vkb2_top_entry_pane_t2_ParamLimits

0xd07b,	// (0x0002be27) vkb2_top_entry_pane_t2

0xd0ad,	// (0x0002be59) vkb2_top_entry_pane_t3_ParamLimits

0xd0ad,	// (0x0002be59) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x0002eb55) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x0002eb55) vkb2_top_entry_pane_t

0xd0fe,	// (0x0002beaa) vkb2_top_grid_right_pane_g1_ParamLimits

0xd0fe,	// (0x0002beaa) vkb2_top_grid_right_pane_g1

0xd114,	// (0x0002bec0) vkb2_top_grid_right_pane_g2_ParamLimits

0xd114,	// (0x0002bec0) vkb2_top_grid_right_pane_g2

0xd12c,	// (0x0002bed8) vkb2_top_grid_right_pane_g3_ParamLimits

0xd12c,	// (0x0002bed8) vkb2_top_grid_right_pane_g3

0xd144,	// (0x0002bef0) vkb2_top_grid_right_pane_g4_ParamLimits

0xd144,	// (0x0002bef0) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x0002eb5c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x0002eb5c) vkb2_top_grid_right_pane_g

0xd15a,	// (0x0002bf06) vkb2_top_cell_left_pane_g1

0xd171,	// (0x0002bf1d) vkb2_cell_keypad_pane_g1_ParamLimits

0xd171,	// (0x0002bf1d) vkb2_cell_keypad_pane_g1

0xd17f,	// (0x0002bf2b) vkb2_cell_keypad_pane_t1_ParamLimits

0xd17f,	// (0x0002bf2b) vkb2_cell_keypad_pane_t1

0xd196,	// (0x0002bf42) vkb2_cell_bottom_grid_pane_ParamLimits

0xd196,	// (0x0002bf42) vkb2_cell_bottom_grid_pane

0xd1cf,	// (0x0002bf7b) vkb2_cell_bottom_grid_pane_g1

0xc939,	// (0x0002b6e5) aid_call2_pane_cp02

0xc941,	// (0x0002b6ed) aid_call_pane_cp02

0xc949,	// (0x0002b6f5) clock_digital_number_pane_cp10

0xc951,	// (0x0002b6fd) clock_digital_number_pane_cp11

0xc959,	// (0x0002b705) clock_digital_number_pane_cp12

0xc961,	// (0x0002b70d) clock_digital_number_pane_cp13

0xc969,	// (0x0002b715) clock_digital_separator_pane_cp10

0x513a,	// (0x00023ee6) popup_clock_digital_analogue_window_cp2_g1

0x513a,	// (0x00023ee6) popup_clock_digital_analogue_window_cp2_g2

0xc971,	// (0x0002b71d) popup_clock_digital_analogue_window_cp2_g3

0x513a,	// (0x00023ee6) popup_clock_digital_analogue_window_cp2_g4

0xc971,	// (0x0002b71d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x0002eb11) popup_clock_digital_analogue_window_cp2_g

0xc979,	// (0x0002b725) popup_clock_digital_analogue_window_cp2_t1

0xc987,	// (0x0002b733) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x0002eb1c) popup_clock_digital_analogue_window_cp2_t

0x7a44,	// (0x000267f0) clock_digital_number_pane_cp10_g1

0x7a44,	// (0x000267f0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002e8f8) clock_digital_number_pane_cp10_g

0x7a44,	// (0x000267f0) clock_digital_separator_pane_cp10_g1

0x7a44,	// (0x000267f0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0002e8f8) clock_digital_separator_pane_cp10_g

0x8b7d,	// (0x00027929) uniindi_top_pane_g3

0x8b8e,	// (0x0002793a) uniindi_top_pane_g4

0xcef4,	// (0x0002bca0) vkb2_row_keypad_pane_ParamLimits

0xcef4,	// (0x0002bca0) vkb2_row_keypad_pane

0xd1eb,	// (0x0002bf97) vkb2_cell_t_keypad_pane_ParamLimits

0xd1eb,	// (0x0002bf97) vkb2_cell_t_keypad_pane

0xd1fb,	// (0x0002bfa7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xd1fb,	// (0x0002bfa7) vkb2_cell_t_keypad_pane_cp08

0xd20e,	// (0x0002bfba) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xd20e,	// (0x0002bfba) vkb2_cell_t_keypad_pane_cp09

0xd222,	// (0x0002bfce) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xd222,	// (0x0002bfce) vkb2_cell_t_keypad_pane_cp01

0xd233,	// (0x0002bfdf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xd233,	// (0x0002bfdf) vkb2_cell_t_keypad_pane_cp02

0xd244,	// (0x0002bff0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xd244,	// (0x0002bff0) vkb2_cell_t_keypad_pane_cp03

0xd255,	// (0x0002c001) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xd255,	// (0x0002c001) vkb2_cell_t_keypad_pane_cp04

0xd266,	// (0x0002c012) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xd266,	// (0x0002c012) vkb2_cell_t_keypad_pane_cp05

0xd277,	// (0x0002c023) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xd277,	// (0x0002c023) vkb2_cell_t_keypad_pane_cp06

0xd288,	// (0x0002c034) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xd288,	// (0x0002c034) vkb2_cell_t_keypad_pane_cp07

0xd299,	// (0x0002c045) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xd299,	// (0x0002c045) vkb2_cell_t_keypad_pane_cp10

0xbfb4,	// (0x0002ad60) vkb2_cell_t_keypad_pane_g1

0xd2ae,	// (0x0002c05a) vkb2_cell_t_keypad_pane_t1

0x98dc,	// (0x00028688) popup_grid_graphic2_window

0xd2c0,	// (0x0002c06c) aid_size_cell_graphic2_ParamLimits

0xd2c0,	// (0x0002c06c) aid_size_cell_graphic2

0xd2f8,	// (0x0002c0a4) bg_popup_window_pane_cp21_ParamLimits

0xd2f8,	// (0x0002c0a4) bg_popup_window_pane_cp21

0xd306,	// (0x0002c0b2) graphic2_pages_pane_ParamLimits

0xd306,	// (0x0002c0b2) graphic2_pages_pane

0xd34c,	// (0x0002c0f8) grid_graphic2_control_pane_ParamLimits

0xd34c,	// (0x0002c0f8) grid_graphic2_control_pane

0xd38a,	// (0x0002c136) grid_graphic2_pane_ParamLimits

0xd38a,	// (0x0002c136) grid_graphic2_pane

0xd3fe,	// (0x0002c1aa) cell_graphic2_pane

0x21d2,	// (0x00020f7e) main_comp_mode_pane

0x87ee,	// (0x0002759a) list_ai3_gene_pane_ParamLimits

0xc627,	// (0x0002b3d3) bg_popup_window_pane_cp19_ParamLimits

0x895f,	// (0x0002770b) bg_touch_area_indi_pane_ParamLimits

0x895f,	// (0x0002770b) bg_touch_area_indi_pane

0x8975,	// (0x00027721) bg_touch_area_indi_pane_cp01_ParamLimits

0x8975,	// (0x00027721) bg_touch_area_indi_pane_cp01

0x898b,	// (0x00027737) bg_touch_area_indi_pane_cp02_ParamLimits

0x898b,	// (0x00027737) bg_touch_area_indi_pane_cp02

0x89a3,	// (0x0002774f) bg_touch_area_indi_pane_cp03_ParamLimits

0x89a3,	// (0x0002774f) bg_touch_area_indi_pane_cp03

0x89bd,	// (0x00027769) popup_slider_window_g1_ParamLimits

0x89d9,	// (0x00027785) popup_slider_window_g2_ParamLimits

0x89f5,	// (0x000277a1) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x0002eaa6) popup_slider_window_g_ParamLimits

0x8a11,	// (0x000277bd) popup_slider_window_t1_ParamLimits

0x8a57,	// (0x00027803) small_volume_slider_vertical_pane_ParamLimits

0xd3fe,	// (0x0002c1aa) cell_graphic2_pane_ParamLimits

0xd44c,	// (0x0002c1f8) bg_button_pane_cp10_ParamLimits

0xd44c,	// (0x0002c1f8) bg_button_pane_cp10

0xd45f,	// (0x0002c20b) bg_button_pane_cp11_ParamLimits

0xd45f,	// (0x0002c20b) bg_button_pane_cp11

0xd472,	// (0x0002c21e) graphic2_pages_pane_g1_ParamLimits

0xd472,	// (0x0002c21e) graphic2_pages_pane_g1

0xd48d,	// (0x0002c239) graphic2_pages_pane_g2_ParamLimits

0xd48d,	// (0x0002c239) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x0002eb6a) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x0002eb6a) graphic2_pages_pane_g

0xd4a5,	// (0x0002c251) graphic2_pages_pane_t1_ParamLimits

0xd4a5,	// (0x0002c251) graphic2_pages_pane_t1

0xd4bd,	// (0x0002c269) cell_graphic2_control_pane_ParamLimits

0xd4bd,	// (0x0002c269) cell_graphic2_control_pane

0xd4de,	// (0x0002c28a) cell_graphic2_pane_g1_ParamLimits

0xd4de,	// (0x0002c28a) cell_graphic2_pane_g1

0xd4eb,	// (0x0002c297) cell_graphic2_pane_g2_ParamLimits

0xd4eb,	// (0x0002c297) cell_graphic2_pane_g2

0xd4f8,	// (0x0002c2a4) cell_graphic2_pane_g3_ParamLimits

0xd4f8,	// (0x0002c2a4) cell_graphic2_pane_g3

0xd505,	// (0x0002c2b1) cell_graphic2_pane_g4_ParamLimits

0xd505,	// (0x0002c2b1) cell_graphic2_pane_g4

0xd512,	// (0x0002c2be) cell_graphic2_pane_g5_ParamLimits

0xd512,	// (0x0002c2be) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x0002eb6f) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x0002eb6f) cell_graphic2_pane_g

0xd52d,	// (0x0002c2d9) cell_graphic2_pane_t1_ParamLimits

0xd52d,	// (0x0002c2d9) cell_graphic2_pane_t1

0x5ca0,	// (0x00024a4c) grid_highlight_pane_cp11_ParamLimits

0x5ca0,	// (0x00024a4c) grid_highlight_pane_cp11

0x2516,	// (0x000212c2) bg_button_pane_cp05

0xd556,	// (0x0002c302) cell_graphic2_control_pane_g1

0x7a44,	// (0x000267f0) bg_touch_area_indi_pane_g1

0xd57e,	// (0x0002c32a) aid_cmod_rocker_key_size

0xd588,	// (0x0002c334) aid_cmode_itu_key_size

0xd592,	// (0x0002c33e) main_cmode_video_pane

0xd59c,	// (0x0002c348) main_comp_mode_itu_pane

0xd5a8,	// (0x0002c354) main_comp_mode_rocker_pane

0xd5b4,	// (0x0002c360) cell_cmode_rocker_pane_ParamLimits

0xd5b4,	// (0x0002c360) cell_cmode_rocker_pane

0xd5c6,	// (0x0002c372) cell_cmode_itu_pane_ParamLimits

0xd5c6,	// (0x0002c372) cell_cmode_itu_pane

0x4c14,	// (0x000239c0) bg_button_pane_cp06_ParamLimits

0x4c14,	// (0x000239c0) bg_button_pane_cp06

0x7bd7,	// (0x00026983) cell_cmode_rocker_pane_g1_ParamLimits

0x7bd7,	// (0x00026983) cell_cmode_rocker_pane_g1

0x8a7c,	// (0x00027828) cell_cmode_rocker_pane_g2_ParamLimits

0x8a7c,	// (0x00027828) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x0002eb7f) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x0002eb7f) cell_cmode_rocker_pane_g

0x21d2,	// (0x00020f7e) bg_button_pane_cp07

0xd5db,	// (0x0002c387) cell_cmode_itu_pane_g1

0xd5e4,	// (0x0002c390) cell_cmode_itu_pane_t1

0xd5f2,	// (0x0002c39e) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0002eb84) cell_cmode_itu_pane_t

0x8c00,	// (0x000279ac) aid_touch_ctrl_left

0x8c08,	// (0x000279b4) aid_touch_ctrl_right

0x21d2,	// (0x00020f7e) compa_mode_pane

0xd600,	// (0x0002c3ac) aid_cmod_rocker_key_size_cp

0xd60a,	// (0x0002c3b6) aid_cmode_itu_key_size_cp

0xd614,	// (0x0002c3c0) compa_mode_pane_g1

0xd61c,	// (0x0002c3c8) compa_mode_pane_g2

0xd624,	// (0x0002c3d0) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0002eb89) compa_mode_pane_g

0xd62c,	// (0x0002c3d8) main_comp_mode_itu_pane_cp

0xd634,	// (0x0002c3e0) main_comp_mode_rocker_pane_cp

0xd63c,	// (0x0002c3e8) cell_cmode_itu_pane_cp_ParamLimits

0xd63c,	// (0x0002c3e8) cell_cmode_itu_pane_cp

0xd651,	// (0x0002c3fd) cell_cmode_rocker_pane_cp_ParamLimits

0xd651,	// (0x0002c3fd) cell_cmode_rocker_pane_cp

0x4c14,	// (0x000239c0) bg_button_pane_cp06_cp_ParamLimits

0x4c14,	// (0x000239c0) bg_button_pane_cp06_cp

0x7bd7,	// (0x00026983) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7bd7,	// (0x00026983) cell_cmode_rocker_pane_g1_cp

0x7a44,	// (0x000267f0) cell_cmode_rocker_pane_g2_cp

0x21d2,	// (0x00020f7e) bg_button_pane_cp07_cp

0x6df5,	// (0x00025ba1) cell_cmode_itu_pane_g1_cp

0xd663,	// (0x0002c40f) cell_cmode_itu_pane_t1_cp

0xd663,	// (0x0002c40f) cell_cmode_itu_pane_t2_cp

0xb63f,	// (0x0002a3eb) settings_code_pane_cp2

0x23e3,	// (0x0002118f) bg_popup_window_pane_cp3_ParamLimits

0x26f0,	// (0x0002149c) heading_pane_cp3_ParamLimits

0x26fc,	// (0x000214a8) listscroll_popup_graphic_pane_ParamLimits

0xbb9a,	// (0x0002a946) fep_hwr_aid_pane_ParamLimits

0xc6f8,	// (0x0002b4a4) aid_touch_sctrl_top_ParamLimits

0xc713,	// (0x0002b4bf) sctrl_sk_top_pane_g1_ParamLimits

0xbfb4,	// (0x0002ad60) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x0002eabf) sctrl_sk_top_pane_g_ParamLimits

0xc720,	// (0x0002b4cc) sctrl_sk_top_pane_t1_ParamLimits

0xc6f8,	// (0x0002b4a4) aid_touch_sctrl_bottom_ParamLimits

0xc720,	// (0x0002b4cc) sctrl_sk_bottom_pane_t1_ParamLimits

0x8b49,	// (0x000278f5) aid_area_touch_clock

0xcdcb,	// (0x0002bb77) aid_vkb2_area_top_pane_cell_ParamLimits

0xcdcb,	// (0x0002bb77) aid_vkb2_area_top_pane_cell

0xcf16,	// (0x0002bcc2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf16,	// (0x0002bcc2) aid_vkb2_area_bottom_pane_cell

0xd033,	// (0x0002bddf) popup_char_count_window

0xd671,	// (0x0002c41d) popup_char_count_window_g1

0xd67a,	// (0x0002c426) popup_char_count_window_g2

0xd683,	// (0x0002c42f) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x0002eb90) popup_char_count_window_g

0xd68c,	// (0x0002c438) popup_char_count_window_t1

0xcc91,	// (0x0002ba3d) popup_fep_char_preview_window_ParamLimits

0xcc91,	// (0x0002ba3d) popup_fep_char_preview_window

0xcde9,	// (0x0002bb95) vkb2_top_candi_pane_ParamLimits

0xcde9,	// (0x0002bb95) vkb2_top_candi_pane

0xd69a,	// (0x0002c446) cell_vkb2_top_candi_pane_ParamLimits

0xd69a,	// (0x0002c446) cell_vkb2_top_candi_pane

0xd6e7,	// (0x0002c493) bg_popup_fep_char_preview_window_ParamLimits

0xd6e7,	// (0x0002c493) bg_popup_fep_char_preview_window

0xd6f5,	// (0x0002c4a1) popup_fep_char_preview_window_t1_ParamLimits

0xd6f5,	// (0x0002c4a1) popup_fep_char_preview_window_t1

0xd72f,	// (0x0002c4db) bg_popup_fep_char_preview_window_g1

0xd737,	// (0x0002c4e3) bg_popup_fep_char_preview_window_g2

0xd73f,	// (0x0002c4eb) bg_popup_fep_char_preview_window_g3

0xd747,	// (0x0002c4f3) bg_popup_fep_char_preview_window_g4

0xd74f,	// (0x0002c4fb) bg_popup_fep_char_preview_window_g5

0xd757,	// (0x0002c503) bg_popup_fep_char_preview_window_g6

0xd75f,	// (0x0002c50b) bg_popup_fep_char_preview_window_g7

0xd767,	// (0x0002c513) bg_popup_fep_char_preview_window_g8

0xd76f,	// (0x0002c51b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0002eb97) bg_popup_fep_char_preview_window_g

0xbfb4,	// (0x0002ad60) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbfb4,	// (0x0002ad60) cell_vkb2_top_candi_pane_g1

0xbfc2,	// (0x0002ad6e) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbfc2,	// (0x0002ad6e) cell_vkb2_top_candi_pane_g2

0xbfe3,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbfe3,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g3

0xd777,	// (0x0002c523) cell_vkb2_top_candi_pane_g4_ParamLimits

0xd777,	// (0x0002c523) cell_vkb2_top_candi_pane_g4

0x7f22,	// (0x00026cce) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7f22,	// (0x00026cce) cell_vkb2_top_candi_pane_g5

0xd798,	// (0x0002c544) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd798,	// (0x0002c544) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0002ebaa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0002ebaa) cell_vkb2_top_candi_pane_g

0xd7a6,	// (0x0002c552) cell_vkb2_top_candi_pane_t1

0xb476,	// (0x0002a222) aid_size_touch_slider_mark_ParamLimits

0xb476,	// (0x0002a222) aid_size_touch_slider_mark

0xd33c,	// (0x0002c0e8) grid_graphic2_catg_pane_ParamLimits

0xd33c,	// (0x0002c0e8) grid_graphic2_catg_pane

0xd3da,	// (0x0002c186) popup_grid_graphic2_window_t1_ParamLimits

0xd3da,	// (0x0002c186) popup_grid_graphic2_window_t1

0xd3ec,	// (0x0002c198) popup_grid_graphic2_window_t2_ParamLimits

0xd3ec,	// (0x0002c198) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x0002eb65) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x0002eb65) popup_grid_graphic2_window_t

0x2516,	// (0x000212c2) bg_button_pane_cp05_ParamLimits

0xd556,	// (0x0002c302) cell_graphic2_control_pane_g1_ParamLimits

0xd7c5,	// (0x0002c571) cell_graphic2_catg_pane_ParamLimits

0xd7c5,	// (0x0002c571) cell_graphic2_catg_pane

0x21d2,	// (0x00020f7e) bg_button_pane_cp12

0xd7d7,	// (0x0002c583) cell_graphic2_catg_pane_g1

0x8b15,	// (0x000278c1) cell_tb_ext_pane_t1_ParamLimits

0xd0d1,	// (0x0002be7d) vkb2_top_cell_right_narrow_pane_ParamLimits

0xd0d1,	// (0x0002be7d) vkb2_top_cell_right_narrow_pane

0xd0e9,	// (0x0002be95) vkb2_top_cell_right_wide_pane_ParamLimits

0xd0e9,	// (0x0002be95) vkb2_top_cell_right_wide_pane

0xbb8c,	// (0x0002a938) bg_vkb2_func_pane_ParamLimits

0xbb8c,	// (0x0002a938) bg_vkb2_func_pane

0xd15a,	// (0x0002bf06) vkb2_top_cell_left_pane_g1_ParamLimits

0xbb8c,	// (0x0002a938) bg_vkb2_fuc_pane_cp03_ParamLimits

0xbb8c,	// (0x0002a938) bg_vkb2_fuc_pane_cp03

0xd1cf,	// (0x0002bf7b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5ba0,	// (0x0002494c) bg_vkb2_func_pane_g1

0x5b98,	// (0x00024944) bg_vkb2_func_pane_g2

0x5ba8,	// (0x00024954) bg_vkb2_func_pane_g3

0x5bb0,	// (0x0002495c) bg_vkb2_func_pane_g4

0x5bb8,	// (0x00024964) bg_vkb2_func_pane_g5

0x5bc0,	// (0x0002496c) bg_vkb2_func_pane_g6

0x5bd0,	// (0x0002497c) bg_vkb2_func_pane_g7

0x5bc8,	// (0x00024974) bg_vkb2_func_pane_g8

0x5b90,	// (0x0002493c) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0002ebb7) bg_vkb2_func_pane_g

0xbb8c,	// (0x0002a938) bg_vkb2_fuc_pane_cp01_ParamLimits

0xbb8c,	// (0x0002a938) bg_vkb2_fuc_pane_cp01

0xd15a,	// (0x0002bf06) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xd15a,	// (0x0002bf06) vkb2_top_cell_right_wide_pane_g1

0xbb8c,	// (0x0002a938) bg_vkb2_fuc_pane_cp02_ParamLimits

0xbb8c,	// (0x0002a938) bg_vkb2_fuc_pane_cp02

0xd1cf,	// (0x0002bf7b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xd1cf,	// (0x0002bf7b) vkb2_top_cell_right_narrow_pane_g1

0xc5ab,	// (0x0002b357) aid_touch_area_decrease_ParamLimits

0xc5ab,	// (0x0002b357) aid_touch_area_decrease

0xc5c9,	// (0x0002b375) aid_touch_area_increase_ParamLimits

0xc5c9,	// (0x0002b375) aid_touch_area_increase

0xc5d5,	// (0x0002b381) aid_touch_area_mute_ParamLimits

0xc5d5,	// (0x0002b381) aid_touch_area_mute

0xc5f9,	// (0x0002b3a5) aid_touch_area_slider_ParamLimits

0xc5f9,	// (0x0002b3a5) aid_touch_area_slider

0xc633,	// (0x0002b3df) popup_slider_window_g4_ParamLimits

0xc633,	// (0x0002b3df) popup_slider_window_g4

0xc63f,	// (0x0002b3eb) popup_slider_window_g5_ParamLimits

0xc63f,	// (0x0002b3eb) popup_slider_window_g5

0xc661,	// (0x0002b40d) popup_slider_window_g6_ParamLimits

0xc661,	// (0x0002b40d) popup_slider_window_g6

0x8a3f,	// (0x000277eb) popup_slider_window_t2_ParamLimits

0x8a3f,	// (0x000277eb) popup_slider_window_t2

0x0001,

0xfd07,	// (0x0002eab3) popup_slider_window_t_ParamLimits

0xfd07,	// (0x0002eab3) popup_slider_window_t

0xc673,	// (0x0002b41f) slider_pane_ParamLimits

0xc673,	// (0x0002b41f) slider_pane

0xd7e0,	// (0x0002c58c) slider_pane_g1_ParamLimits

0xd7e0,	// (0x0002c58c) slider_pane_g1

0xd7f4,	// (0x0002c5a0) slider_pane_g2_ParamLimits

0xd7f4,	// (0x0002c5a0) slider_pane_g2

0xd80a,	// (0x0002c5b6) slider_pane_g3_ParamLimits

0xd80a,	// (0x0002c5b6) slider_pane_g3

0x0003,

0xfe1e,	// (0x0002ebca) slider_pane_g_ParamLimits

0xfe1e,	// (0x0002ebca) slider_pane_g

0xaba9,	// (0x00029955) popup_tb_float_extension_window_ParamLimits

0xaba9,	// (0x00029955) popup_tb_float_extension_window

0xd836,	// (0x0002c5e2) aid_size_cell_tb_float_ext

0x21d2,	// (0x00020f7e) bg_popup_sub_window_cp28

0xd842,	// (0x0002c5ee) grid_tb_float_ext_pane

0xd84c,	// (0x0002c5f8) cell_tb_float_ext_pane_ParamLimits

0xd84c,	// (0x0002c5f8) cell_tb_float_ext_pane

0xd866,	// (0x0002c612) cell_tb_float_ext_pane_g1

0xd86f,	// (0x0002c61b) grid_highlight_pane_cp12

0xbcdb,	// (0x0002aa87) cell_last_hwr_side_pane_ParamLimits

0xbcdb,	// (0x0002aa87) cell_last_hwr_side_pane

0x7a44,	// (0x000267f0) cell_last_hwr_side_pane_g1

0xd878,	// (0x0002c624) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x0002ebd3) cell_last_hwr_side_pane_g

0xcfe2,	// (0x0002bd8e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcfe2,	// (0x0002bd8e) vkb2_area_bottom_space_btn_pane

0xbfb4,	// (0x0002ad60) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd2ae,	// (0x0002c05a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xd7a6,	// (0x0002c552) cell_vkb2_top_candi_pane_t1_ParamLimits

0xd881,	// (0x0002c62d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xd881,	// (0x0002c62d) vkb2_area_bottom_space_btn_pane_g1

0xd8bb,	// (0x0002c667) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xd8bb,	// (0x0002c667) vkb2_area_bottom_space_btn_pane_g2

0xd8f1,	// (0x0002c69d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xd8f1,	// (0x0002c69d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0002ebd8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0002ebd8) vkb2_area_bottom_space_btn_pane_g

0xbc4f,	// (0x0002a9fb) cel_fep_hwr_func_pane_ParamLimits

0xbc4f,	// (0x0002a9fb) cel_fep_hwr_func_pane

0xbc8b,	// (0x0002aa37) cell_hwr_side_button_pane_ParamLimits

0xbc8b,	// (0x0002aa37) cell_hwr_side_button_pane

0x8b49,	// (0x000278f5) aid_area_touch_clock_ParamLimits

0x2516,	// (0x000212c2) bg_uniindi_top_pane_ParamLimits

0x8b5b,	// (0x00027907) uniindi_top_pane_g1_ParamLimits

0x8b71,	// (0x0002791d) uniindi_top_pane_g2_ParamLimits

0x8b7d,	// (0x00027929) uniindi_top_pane_g3_ParamLimits

0x8b8e,	// (0x0002793a) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x0002eaeb) uniindi_top_pane_g_ParamLimits

0x8b9b,	// (0x00027947) uniindi_top_pane_t1_ParamLimits

0x2516,	// (0x000212c2) bg_vkb2_func_pane_cp01_ParamLimits

0x2516,	// (0x000212c2) bg_vkb2_func_pane_cp01

0xde83,	// (0x0002cc2f) cel_fep_hwr_func_pane_g1_ParamLimits

0xde83,	// (0x0002cc2f) cel_fep_hwr_func_pane_g1

0x2516,	// (0x000212c2) bg_vkb2_func_pane_cp02_ParamLimits

0x2516,	// (0x000212c2) bg_vkb2_func_pane_cp02

0xde83,	// (0x0002cc2f) cell_hwr_side_button_pane_g1_ParamLimits

0xde83,	// (0x0002cc2f) cell_hwr_side_button_pane_g1

0x5aa6,	// (0x00024852) status_pane_g4_ParamLimits

0x5aa6,	// (0x00024852) status_pane_g4

0x5ac0,	// (0x0002486c) status_pane_t1

0x78ca,	// (0x00026676) form2_midp_gauge_slider_cont_pane

0x78d2,	// (0x0002667e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba40,	// (0x0002a7ec) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba52,	// (0x0002a7fe) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0002e8ab) form2_midp_gauge_slider_pane_t_ParamLimits

0x78e4,	// (0x00026690) form2_midp_slider_pane_ParamLimits

0xcc51,	// (0x0002b9fd) aid_size_cell_func_vkb2_ParamLimits

0xcc51,	// (0x0002b9fd) aid_size_cell_func_vkb2

0xd822,	// (0x0002c5ce) slider_pane_g4_ParamLimits

0xd822,	// (0x0002c5ce) slider_pane_g4

0xd93b,	// (0x0002c6e7) form2_midp_gauge_slider_pane_t2_cp01

0xd949,	// (0x0002c6f5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd949,	// (0x0002c6f5) form2_midp_gauge_slider_pane_t3_cp01

0xd966,	// (0x0002c712) form2_midp_slider_pane_cp01

0x21d2,	// (0x00020f7e) navi_smil_pane

0xdeb3,	// (0x0002cc5f) navi_smil_pane_g1

0xdebb,	// (0x0002cc67) navi_smil_pane_t1

0xde91,	// (0x0002cc3d) form2_midp_slider_pane_g1

0xde9a,	// (0x0002cc46) form2_midp_slider_pane_g2

0xdea2,	// (0x0002cc4e) form2_midp_slider_pane_g3

0xde91,	// (0x0002cc3d) form2_midp_slider_pane_g4

0x0a55,	// (0x0001f801) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x0002ebe1) form2_midp_slider_pane_g

0xd92b,	// (0x0002c6d7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xd92b,	// (0x0002c6d7) vkb2_area_bottom_space_btn_pane_g4

0xad10,	// (0x00029abc) lc0_navi_pane_ParamLimits

0xad10,	// (0x00029abc) lc0_navi_pane

0xad86,	// (0x00029b32) lc0_stat_indi_pane_ParamLimits

0xad86,	// (0x00029b32) lc0_stat_indi_pane

0xad9d,	// (0x00029b49) ls0_title_pane_ParamLimits

0xad9d,	// (0x00029b49) ls0_title_pane

0x4c14,	// (0x000239c0) bg_popup_sub_pane_cp14_ParamLimits

0x8b30,	// (0x000278dc) list_uniindi_pane_ParamLimits

0x8b3c,	// (0x000278e8) uniindi_top_pane_ParamLimits

0x8bd8,	// (0x00027984) list_single_uniindi_pane_g1_ParamLimits

0x8beb,	// (0x00027997) list_single_uniindi_pane_t1_ParamLimits

0xd96f,	// (0x0002c71b) lc0_stat_clock_pane_ParamLimits

0xd96f,	// (0x0002c71b) lc0_stat_clock_pane

0x0a78,	// (0x0001f824) lc0_stat_indi_pane_g1_ParamLimits

0x0a78,	// (0x0001f824) lc0_stat_indi_pane_g1

0x0a6b,	// (0x0001f817) lc0_stat_indi_pane_g2_ParamLimits

0x0a6b,	// (0x0001f817) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0002ebec) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0002ebec) lc0_stat_indi_pane_g

0xd97c,	// (0x0002c728) lc0_uni_indicator_pane_ParamLimits

0xd97c,	// (0x0002c728) lc0_uni_indicator_pane

0x0a92,	// (0x0001f83e) ls0_title_pane_g1_ParamLimits

0x0a92,	// (0x0001f83e) ls0_title_pane_g1

0x0aa6,	// (0x0001f852) ls0_title_pane_t1_ParamLimits

0x0aa6,	// (0x0001f852) ls0_title_pane_t1

0xd989,	// (0x0002c735) lc0_uni_indicator_pane_g1_ParamLimits

0xd989,	// (0x0002c735) lc0_uni_indicator_pane_g1

0xdec9,	// (0x0002cc75) lc0_stat_clock_pane_t1

0x21d2,	// (0x00020f7e) main_ai5_pane

0xded7,	// (0x0002cc83) ai5_sk_pane_ParamLimits

0xded7,	// (0x0002cc83) ai5_sk_pane

0x0af0,	// (0x0001f89c) cell_ai5_widget_pane_ParamLimits

0x0af0,	// (0x0001f89c) cell_ai5_widget_pane

0xdee4,	// (0x0002cc90) aid_size_cell_widget_grid

0xdef8,	// (0x0002cca4) bg_ai5_widget_pane_ParamLimits

0xdef8,	// (0x0002cca4) bg_ai5_widget_pane

0xdf42,	// (0x0002ccee) cell_ai5_widget_pane_g2

0xdf52,	// (0x0002ccfe) cell_ai5_widget_pane_g3

0xdf71,	// (0x0002cd1d) cell_ai5_widget_pane_g4

0xdf7d,	// (0x0002cd29) cell_ai5_widget_pane_g5

0xdf89,	// (0x0002cd35) cell_ai5_widget_pane_g6

0xdf95,	// (0x0002cd41) cell_ai5_widget_pane_g7

0xdfdd,	// (0x0002cd89) cell_ai5_widget_pane_t1_ParamLimits

0xdfdd,	// (0x0002cd89) cell_ai5_widget_pane_t1

0xdffa,	// (0x0002cda6) cell_ai5_widget_pane_t2_ParamLimits

0xdffa,	// (0x0002cda6) cell_ai5_widget_pane_t2

0xe012,	// (0x0002cdbe) cell_ai5_widget_pane_t3_ParamLimits

0xe012,	// (0x0002cdbe) cell_ai5_widget_pane_t3

0xe02a,	// (0x0002cdd6) cell_ai5_widget_pane_t4_ParamLimits

0xe02a,	// (0x0002cdd6) cell_ai5_widget_pane_t4

0xe044,	// (0x0002cdf0) cell_ai5_widget_pane_t5_ParamLimits

0xe044,	// (0x0002cdf0) cell_ai5_widget_pane_t5

0xe063,	// (0x0002ce0f) cell_ai5_widget_pane_t6_ParamLimits

0xe063,	// (0x0002ce0f) cell_ai5_widget_pane_t6

0xe075,	// (0x0002ce21) cell_ai5_widget_pane_t7_ParamLimits

0xe075,	// (0x0002ce21) cell_ai5_widget_pane_t7

0xe08e,	// (0x0002ce3a) cell_ai5_widget_pane_t8_ParamLimits

0xe08e,	// (0x0002ce3a) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x0002ec06) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x0002ec06) cell_ai5_widget_pane_t

0xe0da,	// (0x0002ce86) grid_ai5_widget_pane

0x4c14,	// (0x000239c0) highlight_cell_ai5_widget_pane_ParamLimits

0x4c14,	// (0x000239c0) highlight_cell_ai5_widget_pane

0x0ba6,	// (0x0001f952) ai5_sk_left_pane

0x0bb0,	// (0x0001f95c) ai5_sk_middle_pane

0x0bba,	// (0x0001f966) ai5_sk_right_pane

0xe0f2,	// (0x0002ce9e) bg_ai5_widget_pane_g1_ParamLimits

0xe0f2,	// (0x0002ce9e) bg_ai5_widget_pane_g1

0xe0fe,	// (0x0002ceaa) bg_ai5_widget_pane_g2_ParamLimits

0xe0fe,	// (0x0002ceaa) bg_ai5_widget_pane_g2

0xe10a,	// (0x0002ceb6) bg_ai5_widget_pane_g3_ParamLimits

0xe10a,	// (0x0002ceb6) bg_ai5_widget_pane_g3

0xe116,	// (0x0002cec2) bg_ai5_widget_pane_g4_ParamLimits

0xe116,	// (0x0002cec2) bg_ai5_widget_pane_g4

0xe122,	// (0x0002cece) bg_ai5_widget_pane_g5_ParamLimits

0xe122,	// (0x0002cece) bg_ai5_widget_pane_g5

0xe12e,	// (0x0002ceda) bg_ai5_widget_pane_g6_ParamLimits

0xe12e,	// (0x0002ceda) bg_ai5_widget_pane_g6

0xe13a,	// (0x0002cee6) bg_ai5_widget_pane_g7_ParamLimits

0xe13a,	// (0x0002cee6) bg_ai5_widget_pane_g7

0xe146,	// (0x0002cef2) bg_ai5_widget_pane_g8_ParamLimits

0xe146,	// (0x0002cef2) bg_ai5_widget_pane_g8

0xe152,	// (0x0002cefe) bg_ai5_widget_pane_g9_ParamLimits

0xe152,	// (0x0002cefe) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0002ec1b) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0002ec1b) bg_ai5_widget_pane_g

0xe185,	// (0x0002cf31) cell_shortcut_ai5_widget_pane_ParamLimits

0xe185,	// (0x0002cf31) cell_shortcut_ai5_widget_pane

0x241f,	// (0x000211cb) bg_cell_shortcut_ai5_widget_pane

0xe196,	// (0x0002cf42) cell_grid_ai5_widget_pane_g1

0xe19f,	// (0x0002cf4b) highlight_cell_shortcut_ai5_widget_pane

0x5ba0,	// (0x0002494c) ai5_sk_left_pane_g1

0xe1a7,	// (0x0002cf53) ai5_sk_left_pane_g2

0xe1af,	// (0x0002cf5b) ai5_sk_left_pane_g3

0xe1b7,	// (0x0002cf63) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0002ec2e) ai5_sk_left_pane_g

0xe1bf,	// (0x0002cf6b) ai5_sk_left_pane_t1

0x5b98,	// (0x00024944) ai5_sk_right_pane_g1

0xe1cd,	// (0x0002cf79) ai5_sk_right_pane_g2

0xe1d5,	// (0x0002cf81) ai5_sk_right_pane_g3

0xe1dd,	// (0x0002cf89) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x0002ec37) ai5_sk_right_pane_g

0xe1e5,	// (0x0002cf91) ai5_sk_right_pane_t1

0x5b98,	// (0x00024944) ai5_sk_middle_pane_g1

0x5ba0,	// (0x0002494c) ai5_sk_middle_pane_g2

0x5bb8,	// (0x00024964) ai5_sk_middle_pane_g3

0xe1d5,	// (0x0002cf81) ai5_sk_middle_pane_g4

0xe1af,	// (0x0002cf5b) ai5_sk_middle_pane_g5

0xe1f3,	// (0x0002cf9f) ai5_sk_middle_pane_g6

0x0bc4,	// (0x0001f970) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x0002ec40) ai5_sk_middle_pane_g

0xac59,	// (0x00029a05) aid_touch_area_size_lc0_ParamLimits

0xac59,	// (0x00029a05) aid_touch_area_size_lc0

0xc004,	// (0x0002adb0) cell_hwr_candidate_pane_t1_ParamLimits

0x59c8,	// (0x00024774) aid_touch_navi_pane

0xae74,	// (0x00029c20) status_dt_navi_pane_ParamLimits

0xae74,	// (0x00029c20) status_dt_navi_pane

0xae81,	// (0x00029c2d) status_dt_sta_pane_ParamLimits

0xae81,	// (0x00029c2d) status_dt_sta_pane

0x0bcc,	// (0x0001f978) dt_sta_controll_pane

0x0bd9,	// (0x0001f985) dt_sta_indi_pane

0x0be6,	// (0x0001f992) dt_sta_title_pane

0x2516,	// (0x000212c2) bg_dt_sta_indi_pane_ParamLimits

0x2516,	// (0x000212c2) bg_dt_sta_indi_pane

0xe1fb,	// (0x0002cfa7) dt_sta_battery_pane

0xe203,	// (0x0002cfaf) dt_sta_indi_pane_g1

0xe20c,	// (0x0002cfb8) dt_sta_indi_pane_g2

0xe215,	// (0x0002cfc1) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x0002ec4f) dt_sta_indi_pane_g

0xe21e,	// (0x0002cfca) dt_sta_signal_pane

0x4c14,	// (0x000239c0) bg_dt_sta_title_pane_ParamLimits

0x4c14,	// (0x000239c0) bg_dt_sta_title_pane

0xe227,	// (0x0002cfd3) dt_sta_title_pane_g1

0xe22f,	// (0x0002cfdb) dt_sta_title_pane_t1_ParamLimits

0xe22f,	// (0x0002cfdb) dt_sta_title_pane_t1

0x21d2,	// (0x00020f7e) bg_dt_sta_control_pane

0xe244,	// (0x0002cff0) dt_sta_controll_pane_g1

0xe24d,	// (0x0002cff9) bg_dt_sta_title_pane_g1

0xe256,	// (0x0002d002) bg_dt_sta_title_pane_g2

0xe25f,	// (0x0002d00b) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0002ec56) bg_dt_sta_title_pane_g

0x7a44,	// (0x000267f0) bg_dt_sta_indi_pane_g1

0xe268,	// (0x0002d014) dt_sta_signal_pane_g1

0xe270,	// (0x0002d01c) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0002ec5d) dt_sta_signal_pane_g

0xe278,	// (0x0002d024) dt_sta_battery_pane_g1

0xe281,	// (0x0002d02d) dt_sta_battery_pane_t1

0x7a44,	// (0x000267f0) bg_dt_sta_control_pane_g1

0x51bd,	// (0x00023f69) fep_china_uni_eep_pane

0x51c5,	// (0x00023f71) fep_china_uni_entry_pane_ParamLimits

0x51d5,	// (0x00023f81) popup_fep_china_uni_window_g1_ParamLimits

0x51e5,	// (0x00023f91) popup_fep_china_uni_window_g2_ParamLimits

0x51e5,	// (0x00023f91) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002e4e1) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002e4e1) popup_fep_china_uni_window_g

0xe290,	// (0x0002d03c) fep_china_uni_eep_pane_g1

0xe298,	// (0x0002d044) fep_china_uni_eep_pane_t1

0xdeaa,	// (0x0002cc56) aid_touch_area_size_smil_player

0x5a79,	// (0x00024825) lc0_clock_pane

0x5ab4,	// (0x00024860) status_pane_g5_ParamLimits

0x5ab4,	// (0x00024860) status_pane_g5

0xa8b9,	// (0x00029665) popup_keymap_window

0x5a92,	// (0x0002483e) status_icon_pane

0xdf52,	// (0x0002ccfe) cell_ai5_widget_pane_g3_ParamLimits

0xdf71,	// (0x0002cd1d) cell_ai5_widget_pane_g4_ParamLimits

0xdf7d,	// (0x0002cd29) cell_ai5_widget_pane_g5_ParamLimits

0xdfa1,	// (0x0002cd4d) cell_ai5_widget_pane_g8_ParamLimits

0xdfa1,	// (0x0002cd4d) cell_ai5_widget_pane_g8

0xdfb5,	// (0x0002cd61) cell_ai5_widget_pane_g9_ParamLimits

0xdfb5,	// (0x0002cd61) cell_ai5_widget_pane_g9

0xdfc9,	// (0x0002cd75) cell_ai5_widget_pane_g10_ParamLimits

0xdfc9,	// (0x0002cd75) cell_ai5_widget_pane_g10

0xe2a7,	// (0x0002d053) status_icon_pane_g1

0x21d2,	// (0x00020f7e) bg_popup_sub_pane_cp13

0xe2af,	// (0x0002d05b) popup_keymap_window_t1

0xa69c,	// (0x00029448) control_pane_g6_ParamLimits

0xa69c,	// (0x00029448) control_pane_g6

0xa6a9,	// (0x00029455) control_pane_g7_ParamLimits

0xa6a9,	// (0x00029455) control_pane_g7

0xa6b6,	// (0x00029462) control_pane_g8_ParamLimits

0xa6b6,	// (0x00029462) control_pane_g8

0x0bcc,	// (0x0001f978) dt_sta_controll_pane_ParamLimits

0x0bd9,	// (0x0001f985) dt_sta_indi_pane_ParamLimits

0x0be6,	// (0x0001f992) dt_sta_title_pane_ParamLimits

0x2926,	// (0x000216d2) aid_size_touch_scroll_bar_cale

0x99b5,	// (0x00028761) popup_discreet_window_ParamLimits

0x99b5,	// (0x00028761) popup_discreet_window

0x9a3d,	// (0x000287e9) popup_sk_window

0x6168,	// (0x00024f14) bg_popup_sub_pane_cp28_ParamLimits

0x6168,	// (0x00024f14) bg_popup_sub_pane_cp28

0xe2bd,	// (0x0002d069) popup_discreet_window_g1_ParamLimits

0xe2bd,	// (0x0002d069) popup_discreet_window_g1

0xe2dd,	// (0x0002d089) popup_discreet_window_t1_ParamLimits

0xe2dd,	// (0x0002d089) popup_discreet_window_t1

0xe2fb,	// (0x0002d0a7) popup_discreet_window_t2_ParamLimits

0xe2fb,	// (0x0002d0a7) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x0002ec62) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x0002ec62) popup_discreet_window_t

0xd99d,	// (0x0002c749) popup_sk_window_g1

0xd9a7,	// (0x0002c753) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0002ec69) popup_sk_window_g

0xd9b1,	// (0x0002c75d) popup_sk_window_t1

0xd9bf,	// (0x0002c76b) popup_sk_window_t1_copy1

0xdf42,	// (0x0002ccee) cell_ai5_widget_pane_g2_ParamLimits

0xe0a0,	// (0x0002ce4c) cell_ai5_widget_pane_t9_ParamLimits

0xe0a0,	// (0x0002ce4c) cell_ai5_widget_pane_t9

0x21d2,	// (0x00020f7e) main_fep_fshwr2_pane

0x0c27,	// (0x0001f9d3) aid_fshwr2_btn_pane

0x0c2f,	// (0x0001f9db) aid_fshwr2_syb_pane

0x0c37,	// (0x0001f9e3) aid_fshwr2_txt_pane

0x0c3f,	// (0x0001f9eb) fshwr2_func_candi_pane

0x0c4b,	// (0x0001f9f7) fshwr2_hwr_syb_pane

0x0c57,	// (0x0001fa03) fshwr2_icf_pane

0x21d2,	// (0x00020f7e) fshwr2_icf_bg_pane

0x0c61,	// (0x0001fa0d) fshwr2_icf_pane_t1_ParamLimits

0x0c61,	// (0x0001fa0d) fshwr2_icf_pane_t1

0x7a44,	// (0x000267f0) fshwr2_func_candi_pane_g1

0xe361,	// (0x0002d10d) fshwr2_func_candi_row_pane_ParamLimits

0xe361,	// (0x0002d10d) fshwr2_func_candi_row_pane

0x0c78,	// (0x0001fa24) cell_fshwr2_syb_pane_ParamLimits

0x0c78,	// (0x0001fa24) cell_fshwr2_syb_pane

0x7bd7,	// (0x00026983) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7bd7,	// (0x00026983) fshwr2_hwr_syb_pane_g1

0x21d2,	// (0x00020f7e) bg_popup_call_pane_cp01

0xe372,	// (0x0002d11e) fshwr2_func_candi_cell_pane_ParamLimits

0xe372,	// (0x0002d11e) fshwr2_func_candi_cell_pane

0xe3a3,	// (0x0002d14f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe3a3,	// (0x0002d14f) fshwr2_func_candi_cell_bg_pane

0xe3bd,	// (0x0002d169) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe3bd,	// (0x0002d169) fshwr2_func_candi_cell_pane_g1

0xe3e5,	// (0x0002d191) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe3e5,	// (0x0002d191) fshwr2_func_candi_cell_pane_t1

0x21d2,	// (0x00020f7e) bg_button_pane_cp08

0x562c,	// (0x000243d8) cell_fshwr2_syb_bg_pane

0x0c92,	// (0x0001fa3e) cell_fshwr2_syb_bg_pane_g1

0x0c9a,	// (0x0001fa46) cell_fshwr2_syb_bg_pane_t1

0x4c14,	// (0x000239c0) main_tmo_pane

0x6bd6,	// (0x00025982) uni_indicator_pane_g1_ParamLimits

0x6beb,	// (0x00025997) uni_indicator_pane_g2_ParamLimits

0x6c01,	// (0x000259ad) uni_indicator_pane_g3_ParamLimits

0x6c17,	// (0x000259c3) uni_indicator_pane_g4_ParamLimits

0x6c17,	// (0x000259c3) uni_indicator_pane_g4

0x6c2b,	// (0x000259d7) uni_indicator_pane_g5_ParamLimits

0x6c2b,	// (0x000259d7) uni_indicator_pane_g5

0x6c3f,	// (0x000259eb) uni_indicator_pane_g6_ParamLimits

0x6c3f,	// (0x000259eb) uni_indicator_pane_g6

0xf932,	// (0x0002e6de) uni_indicator_pane_g_ParamLimits

0xc587,	// (0x0002b333) popup_tmo_note_window_ParamLimits

0xc587,	// (0x0002b333) popup_tmo_note_window

0x21d2,	// (0x00020f7e) fshwr2_bg_pane

0xe3d6,	// (0x0002d182) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe3d6,	// (0x0002d182) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0002ec6e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0002ec6e) fshwr2_func_candi_cell_pane_g

0x7a44,	// (0x000267f0) bg_popup_window_pane_cp01

0xe3f8,	// (0x0002d1a4) bg_popup_window_pane_g1_cp01

0xe401,	// (0x0002d1ad) bg_popup_window_pane_cp22_ParamLimits

0xe401,	// (0x0002d1ad) bg_popup_window_pane_cp22

0xe40f,	// (0x0002d1bb) listscroll_tmo_link_pane_ParamLimits

0xe40f,	// (0x0002d1bb) listscroll_tmo_link_pane

0xe44f,	// (0x0002d1fb) popup_tmo_note_window_g1_ParamLimits

0xe44f,	// (0x0002d1fb) popup_tmo_note_window_g1

0xe45c,	// (0x0002d208) tmo_note_info_pane_ParamLimits

0xe45c,	// (0x0002d208) tmo_note_info_pane

0x0ca9,	// (0x0001fa55) list_tmo_note_info_pane_g1_ParamLimits

0x0ca9,	// (0x0001fa55) list_tmo_note_info_pane_g1

0xe476,	// (0x0002d222) list_tmo_note_info_pane_g2_ParamLimits

0xe476,	// (0x0002d222) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x0002ec73) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x0002ec73) list_tmo_note_info_pane_g

0xe492,	// (0x0002d23e) list_tmo_note_info_text_pane_ParamLimits

0xe492,	// (0x0002d23e) list_tmo_note_info_text_pane

0xe4d4,	// (0x0002d280) list_tmo_link_pane

0xe4e1,	// (0x0002d28d) scroll_pane_cp20

0xe4ee,	// (0x0002d29a) list_single_tmo_link_pane_ParamLimits

0xe4ee,	// (0x0002d29a) list_single_tmo_link_pane

0xe4fe,	// (0x0002d2aa) list_single_tmo_link_pane_t1

0xe50c,	// (0x0002d2b8) list_tmo_note_info_text_pane_t1_ParamLimits

0xe50c,	// (0x0002d2b8) list_tmo_note_info_text_pane_t1

0x9eab,	// (0x00028c57) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9eab,	// (0x00028c57) aid_size_touch_scroll_bar_cp01

0xebb2,	// (0x0002d95e) aid_size_touch_slider_marker

0x9a25,	// (0x000287d1) popup_settings_window_ParamLimits

0x9a25,	// (0x000287d1) popup_settings_window

0xed81,	// (0x0002db2d) popup_candi_list_indi_window

0x59c8,	// (0x00024774) aid_touch_navi_pane_ParamLimits

0xc6cc,	// (0x0002b478) rs_clock_indi_pane

0xc6d5,	// (0x0002b481) sctrl_sk_bottom_pane_ParamLimits

0xc6e6,	// (0x0002b492) sctrl_sk_top_pane_ParamLimits

0xccab,	// (0x0002ba57) popup_fep_tooltip_window

0xdee4,	// (0x0002cc90) aid_size_cell_widget_grid_ParamLimits

0xdf36,	// (0x0002cce2) cell_ai5_widget_pane_g1_ParamLimits

0xdf36,	// (0x0002cce2) cell_ai5_widget_pane_g1

0xdf89,	// (0x0002cd35) cell_ai5_widget_pane_g6_ParamLimits

0xdf95,	// (0x0002cd41) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x0002ebf1) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x0002ebf1) cell_ai5_widget_pane_g

0xe0c4,	// (0x0002ce70) cell_ai5_widget_pane_t10_ParamLimits

0xe0c4,	// (0x0002ce70) cell_ai5_widget_pane_t10

0xe0da,	// (0x0002ce86) grid_ai5_widget_pane_ParamLimits

0xe15e,	// (0x0002cf0a) cell_contacts_ai5_widget_pane_ParamLimits

0xe15e,	// (0x0002cf0a) cell_contacts_ai5_widget_pane

0xe310,	// (0x0002d0bc) popup_discreet_window_t3_ParamLimits

0xe310,	// (0x0002d0bc) popup_discreet_window_t3

0xe34d,	// (0x0002d0f9) popup_fshwr2_char_preview_window_ParamLimits

0xe34d,	// (0x0002d0f9) popup_fshwr2_char_preview_window

0x0cc0,	// (0x0001fa6c) tmo_note_info_pane_t1

0x0cd5,	// (0x0001fa81) tmo_note_info_pane_t2

0x0cea,	// (0x0001fa96) tmo_note_info_pane_t3

0xe4b0,	// (0x0002d25c) tmo_note_info_pane_t4

0xe4c2,	// (0x0002d26e) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0002ec78) tmo_note_info_pane_t

0xe4d4,	// (0x0002d280) list_tmo_link_pane_ParamLimits

0xe4e1,	// (0x0002d28d) scroll_pane_cp20_ParamLimits

0x21d2,	// (0x00020f7e) bg_popup_fep_char_preview_window_cp01

0xe525,	// (0x0002d2d1) popup_fshwr2_char_preview_window_t1

0xe533,	// (0x0002d2df) popup_candi_list_indi_window_g1

0xe53c,	// (0x0002d2e8) bg_cell_contacts_ai5_widget_pane

0xe548,	// (0x0002d2f4) cell_contacts_ai5_widget_pane_g1

0xe55c,	// (0x0002d308) cell_contacts_ai5_widget_pane_g2

0xe56b,	// (0x0002d317) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x0002ec83) cell_contacts_ai5_widget_pane_g

0xe57e,	// (0x0002d32a) cell_contacts_ai5_widget_pane_t1

0x4c14,	// (0x000239c0) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0d64,	// (0x0001fb10) settings_container_pane

0x562c,	// (0x000243d8) listscroll_set_pane_copy1

0x740a,	// (0x000261b6) scroll_pane_cp121_copy1

0xe590,	// (0x0002d33c) set_content_pane_copy1

0x0d70,	// (0x0001fb1c) aid_height_set_list_copy1_ParamLimits

0x0d70,	// (0x0001fb1c) aid_height_set_list_copy1

0x62d7,	// (0x00025083) aid_size_parent_copy1_ParamLimits

0x62d7,	// (0x00025083) aid_size_parent_copy1

0x0d7c,	// (0x0001fb28) button_value_adjust_pane_cp6_copy1_ParamLimits

0x0d7c,	// (0x0001fb28) button_value_adjust_pane_cp6_copy1

0x4d6c,	// (0x00023b18) list_highlight_pane_cp2_copy1_ParamLimits

0x4d6c,	// (0x00023b18) list_highlight_pane_cp2_copy1

0x0d90,	// (0x0001fb3c) list_set_pane_copy1_ParamLimits

0x0d90,	// (0x0001fb3c) list_set_pane_copy1

0x0cff,	// (0x0001faab) main_pane_set_t1_copy1_ParamLimits

0x0cff,	// (0x0001faab) main_pane_set_t1_copy1

0x0d39,	// (0x0001fae5) main_pane_set_t2_copy1_ParamLimits

0x0d39,	// (0x0001fae5) main_pane_set_t2_copy1

0x0e3d,	// (0x0001fbe9) main_pane_set_t3_copy1

0x0e4b,	// (0x0001fbf7) main_pane_set_t4_copy1

0x0d58,	// (0x0001fb04) set_content_pane_g1_copy1_ParamLimits

0x0d58,	// (0x0001fb04) set_content_pane_g1_copy1

0x0e59,	// (0x0001fc05) setting_code_pane_copy1

0xe598,	// (0x0002d344) setting_slider_graphic_pane_copy1

0xe598,	// (0x0002d344) setting_slider_pane_copy1

0xe598,	// (0x0002d344) setting_text_pane_copy1

0xe5a2,	// (0x0002d34e) setting_volume_pane_copy1

0x0e63,	// (0x0001fc0f) settings_code_pane_cp2_copy1

0x0e6b,	// (0x0001fc17) settings_code_pane_cp_copy1_ParamLimits

0x0e6b,	// (0x0001fc17) settings_code_pane_cp_copy1

0x0e7f,	// (0x0001fc2b) volume_set_pane_copy1

0x0e87,	// (0x0001fc33) volume_set_pane_g10_copy1

0x0e8f,	// (0x0001fc3b) volume_set_pane_g1_copy1

0x0e97,	// (0x0001fc43) volume_set_pane_g2_copy1

0x0e9f,	// (0x0001fc4b) volume_set_pane_g3_copy1

0x0ea7,	// (0x0001fc53) volume_set_pane_g4_copy1

0x0eaf,	// (0x0001fc5b) volume_set_pane_g5_copy1

0x0eb7,	// (0x0001fc63) volume_set_pane_g6_copy1

0x0ebf,	// (0x0001fc6b) volume_set_pane_g7_copy1

0x0ec7,	// (0x0001fc73) volume_set_pane_g8_copy1

0x0ecf,	// (0x0001fc7b) volume_set_pane_g9_copy1

0x23e3,	// (0x0002118f) bg_set_opt_pane_cp_copy1_ParamLimits

0x23e3,	// (0x0002118f) bg_set_opt_pane_cp_copy1

0xe5ab,	// (0x0002d357) setting_slider_pane_t1_copy1_ParamLimits

0xe5ab,	// (0x0002d357) setting_slider_pane_t1_copy1

0x0ed7,	// (0x0001fc83) setting_slider_pane_t2_copy1_ParamLimits

0x0ed7,	// (0x0001fc83) setting_slider_pane_t2_copy1

0x0ef1,	// (0x0001fc9d) setting_slider_pane_t3_copy1_ParamLimits

0x0ef1,	// (0x0001fc9d) setting_slider_pane_t3_copy1

0x0f09,	// (0x0001fcb5) slider_set_pane_copy1_ParamLimits

0x0f09,	// (0x0001fcb5) slider_set_pane_copy1

0x4c7b,	// (0x00023a27) set_opt_bg_pane_g1_copy2

0x4c83,	// (0x00023a2f) set_opt_bg_pane_g2_copy2

0xe5c9,	// (0x0002d375) set_opt_bg_pane_g3_copy2

0x4c93,	// (0x00023a3f) set_opt_bg_pane_g4_copy2

0x4c9b,	// (0x00023a47) set_opt_bg_pane_g5_copy2

0x4ca3,	// (0x00023a4f) set_opt_bg_pane_g6_copy2

0x0f1f,	// (0x0001fccb) set_opt_bg_pane_g7_copy2

0xe5d3,	// (0x0002d37f) set_opt_bg_pane_g8_copy2

0xe5dd,	// (0x0002d389) set_opt_bg_pane_g9_copy2

0xd9cd,	// (0x0002c779) aid_size_touch_slider_mark_copy1_ParamLimits

0xd9cd,	// (0x0002c779) aid_size_touch_slider_mark_copy1

0xe5e7,	// (0x0002d393) slider_set_pane_g1_copy1

0xd9e1,	// (0x0002c78d) slider_set_pane_g2_copy1

0xb496,	// (0x0002a242) slider_set_pane_g3_copy1_ParamLimits

0xb496,	// (0x0002a242) slider_set_pane_g3_copy1

0xb4aa,	// (0x0002a256) slider_set_pane_g4_copy1_ParamLimits

0xb4aa,	// (0x0002a256) slider_set_pane_g4_copy1

0xb4c2,	// (0x0002a26e) slider_set_pane_g5_copy1_ParamLimits

0xb4c2,	// (0x0002a26e) slider_set_pane_g5_copy1

0xb496,	// (0x0002a242) slider_set_pane_g6_copy1_ParamLimits

0xb496,	// (0x0002a242) slider_set_pane_g6_copy1

0xd9e9,	// (0x0002c795) slider_set_pane_g7_copy1_ParamLimits

0xd9e9,	// (0x0002c795) slider_set_pane_g7_copy1

0x22cc,	// (0x00021078) bg_set_opt_pane_cp2_copy1

0xe5f0,	// (0x0002d39c) setting_slider_graphic_pane_g1_copy1

0x0f59,	// (0x0001fd05) setting_slider_graphic_pane_t1_copy1

0x0f69,	// (0x0001fd15) setting_slider_graphic_pane_t2_copy1

0x0f79,	// (0x0001fd25) slider_set_pane_cp_copy1

0xe601,	// (0x0002d3ad) input_focus_pane_cp1_copy1

0xe60a,	// (0x0002d3b6) list_set_text_pane_copy1

0xe612,	// (0x0002d3be) setting_text_pane_g1_copy1

0xd9ff,	// (0x0002c7ab) set_text_pane_t1_copy1

0xe601,	// (0x0002d3ad) input_focus_pane_cp2_copy1

0xe612,	// (0x0002d3be) setting_code_pane_g1_copy1

0x0f81,	// (0x0001fd2d) setting_code_pane_t1_copy1

0x0f8f,	// (0x0001fd3b) list_set_graphic_pane_copy1

0x22cc,	// (0x00021078) bg_set_opt_pane_cp4_copy1

0xa4a7,	// (0x00029253) list_set_graphic_pane_g1_copy1_ParamLimits

0xa4a7,	// (0x00029253) list_set_graphic_pane_g1_copy1

0x0fa1,	// (0x0001fd4d) list_set_graphic_pane_g2_copy1

0xa4bf,	// (0x0002926b) list_set_graphic_pane_t1_copy1_ParamLimits

0xa4bf,	// (0x0002926b) list_set_graphic_pane_t1_copy1

0x7a44,	// (0x000267f0) rs_clock_indi_pane_g1

0xe61b,	// (0x0002d3c7) rs_clock_indi_pane_t1

0xe629,	// (0x0002d3d5) rs_indi_pane

0xe631,	// (0x0002d3dd) rs_indi_pane_g1

0xe63a,	// (0x0002d3e6) rs_indi_pane_g2

0xe643,	// (0x0002d3ef) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0002ec8a) rs_indi_pane_g

0x562c,	// (0x000243d8) bg_popup_preview_window_pane_cp03

0xe64c,	// (0x0002d3f8) popup_fep_tooltip_window_t1

0x832d,	// (0x000270d9) popup_note2_window_g2_ParamLimits

0x832d,	// (0x000270d9) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0002ea23) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0002ea23) popup_note2_window_g

0x87b4,	// (0x00027560) bg_popup_sub_pane_cp11_ParamLimits

0x87c1,	// (0x0002756d) cell_ai3_links_pane_g1_ParamLimits

0x87d8,	// (0x00027584) cell_ai3_links_pane_t1

0xd9ff,	// (0x0002c7ab) set_text_pane_t1_copy1_ParamLimits

0x553d,	// (0x000242e9) cell_graphic_popup_pane_cp2_ParamLimits

0x553d,	// (0x000242e9) cell_graphic_popup_pane_cp2

0xe65a,	// (0x0002d406) cell_graphic_popup_pane_g1_cp2

0x2739,	// (0x000214e5) cell_graphic_popup_pane_g2_cp2

0xe662,	// (0x0002d40e) cell_graphic_popup_pane_g3_cp2

0xe66a,	// (0x0002d416) cell_graphic_popup_pane_t2_cp2

0x274a,	// (0x000214f6) grid_highlight_pane_cp3_cp2

0x4f16,	// (0x00023cc2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4c14,	// (0x000239c0) main_tmo_pane_ParamLimits

0xc57b,	// (0x0002b327) popup_tmo_big_image_note_window

0xdf26,	// (0x0002ccd2) cell_ai5_widget_list_pane

0xdf2e,	// (0x0002ccda) cell_ai5_widget_lrg_icon_pane

0x0cc0,	// (0x0001fa6c) tmo_note_info_pane_t1_ParamLimits

0x0cd5,	// (0x0001fa81) tmo_note_info_pane_t2_ParamLimits

0x0cea,	// (0x0001fa96) tmo_note_info_pane_t3_ParamLimits

0xe4b0,	// (0x0002d25c) tmo_note_info_pane_t4_ParamLimits

0xe4c2,	// (0x0002d26e) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0002ec78) tmo_note_info_pane_t_ParamLimits

0x0d64,	// (0x0001fb10) settings_container_pane_ParamLimits

0xe5f9,	// (0x0002d3a5) indicator_popup_pane_cp5

0xe5f9,	// (0x0002d3a5) indicator_popup_pane_cp6

0x0f8f,	// (0x0001fd3b) list_set_graphic_pane_copy1_ParamLimits

0x21d2,	// (0x00020f7e) bg_popup_window_pane_cp23

0xe678,	// (0x0002d424) popup_tmo_big_image_note_window_g1

0xe682,	// (0x0002d42e) popup_tmo_big_image_note_window_t1

0xe692,	// (0x0002d43e) popup_tmo_big_image_note_window_t2

0xe6a2,	// (0x0002d44e) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x0002ec91) popup_tmo_big_image_note_window_t

0xe6b2,	// (0x0002d45e) cell_ai5_widget_lrg_icon_pane_g1

0xe6ba,	// (0x0002d466) cell_ai5_widget_lrg_icon_pane_t1

0xe6c8,	// (0x0002d474) cell_ai5_widget_list_row_pane_ParamLimits

0xe6c8,	// (0x0002d474) cell_ai5_widget_list_row_pane

0xe6e1,	// (0x0002d48d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe6e1,	// (0x0002d48d) cell_ai5_widget_list_row_pane_g1

0xe6ee,	// (0x0002d49a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe6ee,	// (0x0002d49a) cell_ai5_widget_list_row_pane_t1

0xe706,	// (0x0002d4b2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe706,	// (0x0002d4b2) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeec,	// (0x0002ec98) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0002ec98) cell_ai5_widget_list_row_pane_t

0x98dc,	// (0x00028688) main_fep_vtchi_ss_pane

0xe718,	// (0x0002d4c4) popup_fep_char_pre_window

0xe720,	// (0x0002d4cc) popup_fep_ituss_window

0xe73a,	// (0x0002d4e6) popup_fep_vkbss_window

0xe758,	// (0x0002d504) grid_vkbss_keypad_pane_ParamLimits

0xe758,	// (0x0002d504) grid_vkbss_keypad_pane

0xe768,	// (0x0002d514) ituss_keypad_pane

0xe77e,	// (0x0002d52a) aid_vkbss_key_offset_ParamLimits

0xe77e,	// (0x0002d52a) aid_vkbss_key_offset

0xe78a,	// (0x0002d536) cell_vkbss_key_pane_ParamLimits

0xe78a,	// (0x0002d536) cell_vkbss_key_pane

0xe7a0,	// (0x0002d54c) bg_cell_vkbss_key_g1_ParamLimits

0xe7a0,	// (0x0002d54c) bg_cell_vkbss_key_g1

0xe7ac,	// (0x0002d558) cell_vkbss_key_3p_pane_ParamLimits

0xe7ac,	// (0x0002d558) cell_vkbss_key_3p_pane

0xe7c6,	// (0x0002d572) cell_vkbss_key_g1_ParamLimits

0xe7c6,	// (0x0002d572) cell_vkbss_key_g1

0xe7e0,	// (0x0002d58c) cell_vkbss_key_t1_ParamLimits

0xe7e0,	// (0x0002d58c) cell_vkbss_key_t1

0xe80b,	// (0x0002d5b7) cell_ituss_key_pane_ParamLimits

0xe80b,	// (0x0002d5b7) cell_ituss_key_pane

0xe81b,	// (0x0002d5c7) bg_cell_ituss_key_g1_ParamLimits

0xe81b,	// (0x0002d5c7) bg_cell_ituss_key_g1

0xe827,	// (0x0002d5d3) cell_ituss_key_pane_g1_ParamLimits

0xe827,	// (0x0002d5d3) cell_ituss_key_pane_g1

0xe833,	// (0x0002d5df) cell_ituss_key_pane_g2_ParamLimits

0xe833,	// (0x0002d5df) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0002ec9d) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0002ec9d) cell_ituss_key_pane_g

0xe84c,	// (0x0002d5f8) cell_ituss_key_t1_ParamLimits

0xe84c,	// (0x0002d5f8) cell_ituss_key_t1

0xe87a,	// (0x0002d626) cell_ituss_key_t2_ParamLimits

0xe87a,	// (0x0002d626) cell_ituss_key_t2

0xe8ab,	// (0x0002d657) cell_ituss_key_t3_ParamLimits

0xe8ab,	// (0x0002d657) cell_ituss_key_t3

0xe8dc,	// (0x0002d688) cell_ituss_key_t4_ParamLimits

0xe8dc,	// (0x0002d688) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x0002eca2) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0002eca2) cell_ituss_key_t

0xe90d,	// (0x0002d6b9) cell_vkbss_key_3p_pane_g1

0xe915,	// (0x0002d6c1) cell_vkbss_key_3p_pane_g2

0xe91d,	// (0x0002d6c9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0002ecab) cell_vkbss_key_3p_pane_g

0x21d2,	// (0x00020f7e) bg_popup_fep_char_preview_window_cp02

0xe925,	// (0x0002d6d1) popup_fep_char_pre_window_t1

0x0b9c,	// (0x0001f948) main_ai5_sk_pane

0xe53c,	// (0x0002d2e8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe548,	// (0x0002d2f4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe55c,	// (0x0002d308) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe56b,	// (0x0002d317) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x0002ec83) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe57e,	// (0x0002d32a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4c14,	// (0x000239c0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0fa9,	// (0x0001fd55) main_ai5_sk_pane_g1

0x5fa1,	// (0x00024d4d) popup_query_code_window_g1

0xe72f,	// (0x0002d4db) popup_fep_vkb_icf_pane

0xe743,	// (0x0002d4ef) popup_fep_vtchi_icf_pane

0x4c14,	// (0x000239c0) bg_icf_pane

0xe768,	// (0x0002d514) list_vkb_icf_pane

0x4c14,	// (0x000239c0) bg_icf_pane_cp01

0xe94f,	// (0x0002d6fb) vtchi_icf_list_pane

0xe95f,	// (0x0002d70b) list_vkb_icf_pane_t1_ParamLimits

0xe95f,	// (0x0002d70b) list_vkb_icf_pane_t1

0xe976,	// (0x0002d722) vtchi_icf_list_pane_t1_ParamLimits

0xe976,	// (0x0002d722) vtchi_icf_list_pane_t1

0xe720,	// (0x0002d4cc) popup_fep_ituss_window_ParamLimits

0xe743,	// (0x0002d4ef) popup_fep_vtchi_icf_pane_ParamLimits

0xe768,	// (0x0002d514) ituss_keypad_pane_ParamLimits

0xe774,	// (0x0002d520) ituss_sks_pane

0x4c14,	// (0x000239c0) bg_icf_pane_ParamLimits

0xe934,	// (0x0002d6e0) icf_edit_indi_pane_ParamLimits

0xe934,	// (0x0002d6e0) icf_edit_indi_pane

0xe768,	// (0x0002d514) list_vkb_icf_pane_ParamLimits

0x4c14,	// (0x000239c0) bg_icf_pane_cp01_ParamLimits

0xe943,	// (0x0002d6ef) icf_edit_indi_pane_cp01_ParamLimits

0xe943,	// (0x0002d6ef) icf_edit_indi_pane_cp01

0xe957,	// (0x0002d703) vtchi_query_pane

0x7bd7,	// (0x00026983) icf_edit_indi_pane_g1_ParamLimits

0x7bd7,	// (0x00026983) icf_edit_indi_pane_g1

0xe992,	// (0x0002d73e) icf_edit_indi_pane_g2_ParamLimits

0xe992,	// (0x0002d73e) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0002ecb2) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0002ecb2) icf_edit_indi_pane_g

0xe99e,	// (0x0002d74a) icf_edit_indi_pane_t1

0xe9ac,	// (0x0002d758) bg_input_focus_pane_cp042

0x291d,	// (0x000216c9) vtchi_button_pane

0xe9b5,	// (0x0002d761) vtchi_query_pane_t1

0xe9c3,	// (0x0002d76f) vtchi_query_pane_t2

0xe9d1,	// (0x0002d77d) vtchi_query_pane_t3

0x0002,

0xff0b,	// (0x0002ecb7) vtchi_query_pane_t

0x21d2,	// (0x00020f7e) bg_button_pane_cp13

0xe9df,	// (0x0002d78b) vtchi_button_pane_g1

0xe9e7,	// (0x0002d793) ituss_sks_pane_g1

0xe9f2,	// (0x0002d79e) ituss_sks_pane_g2

0x0001,

0xff12,	// (0x0002ecbe) ituss_sks_pane_g

0xe9fa,	// (0x0002d7a6) ituss_sks_pane_t1

0xea08,	// (0x0002d7b4) ituss_sks_pane_t2

0x0001,

0xff17,	// (0x0002ecc3) ituss_sks_pane_t

0x76ef,	// (0x0002649b) indicator_nsta_pane_cp_g1

0x76f8,	// (0x000264a4) indicator_nsta_pane_cp_g2

0x7700,	// (0x000264ac) indicator_nsta_pane_cp_g3

0x7708,	// (0x000264b4) indicator_nsta_pane_cp_g4

0x7710,	// (0x000264bc) indicator_nsta_pane_cp_g5

0x7718,	// (0x000264c4) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0002e861) indicator_nsta_pane_cp_g

0xd543,	// (0x0002c2ef) cell_graphic2_pane_t2_ParamLimits

0xd543,	// (0x0002c2ef) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x0002eb7a) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x0002eb7a) cell_graphic2_pane_t

0xd570,	// (0x0002c31c) cell_graphic2_control_pane_t1

0xa28f,	// (0x0002903b) signal_pane_g3_ParamLimits

0xa28f,	// (0x0002903b) signal_pane_g3

0xa29e,	// (0x0002904a) signal_pane_g4_ParamLimits

0xa29e,	// (0x0002904a) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

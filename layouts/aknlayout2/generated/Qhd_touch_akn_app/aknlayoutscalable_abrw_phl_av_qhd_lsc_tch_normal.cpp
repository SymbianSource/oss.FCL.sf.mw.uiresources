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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00010354 };

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
0xc735,	// (0x0001ca89) Screen

0xc741,	// (0x0001ca95) application_window_ParamLimits

0xc741,	// (0x0001ca95) application_window

0xeb7a,	// (0x0001eece) screen_g1

0xb62b,	// (0x0001b97f) area_bottom_pane_ParamLimits

0xb62b,	// (0x0001b97f) area_bottom_pane

0xf382,	// (0x0001f6d6) area_top_pane_ParamLimits

0xf382,	// (0x0001f6d6) area_top_pane

0xf420,	// (0x0001f774) main_pane_ParamLimits

0xf420,	// (0x0001f774) main_pane

0x2261,	// (0x000125b5) misc_graphics

0xd385,	// (0x0001d6d9) battery_pane_ParamLimits

0xd385,	// (0x0001d6d9) battery_pane

0x51b7,	// (0x0001550b) bg_status_flat_pane_g8

0x51bf,	// (0x00015513) bg_status_flat_pane_g9

0x449c,	// (0x000147f0) context_pane_ParamLimits

0x449c,	// (0x000147f0) context_pane

0xd4f0,	// (0x0001d844) navi_pane_ParamLimits

0xd4f0,	// (0x0001d844) navi_pane

0xd56e,	// (0x0001d8c2) signal_pane_ParamLimits

0xd56e,	// (0x0001d8c2) signal_pane

0x0008,

0xf84a,	// (0x0001fb9e) bg_status_flat_pane_g

0xd5fe,	// (0x0001d952) status_pane_g1_ParamLimits

0xd5fe,	// (0x0001d952) status_pane_g1

0xd614,	// (0x0001d968) status_pane_g2_ParamLimits

0xd614,	// (0x0001d968) status_pane_g2

0x46c3,	// (0x00014a17) status_pane_g3_ParamLimits

0x46c3,	// (0x00014a17) status_pane_g3

0x0004,

0xf776,	// (0x0001faca) status_pane_g_ParamLimits

0xf776,	// (0x0001faca) status_pane_g

0xd620,	// (0x0001d974) title_pane_ParamLimits

0xd620,	// (0x0001d974) title_pane

0xd683,	// (0x0001d9d7) uni_indicator_pane_ParamLimits

0xd683,	// (0x0001d9d7) uni_indicator_pane

0x42f4,	// (0x00014648) bg_list_pane_ParamLimits

0x42f4,	// (0x00014648) bg_list_pane

0x4314,	// (0x00014668) find_pane

0x4986,	// (0x00014cda) listscroll_app_pane_ParamLimits

0x4986,	// (0x00014cda) listscroll_app_pane

0x4328,	// (0x0001467c) listscroll_form_pane

0x06eb,	// (0x00010a3f) listscroll_gen_pane_ParamLimits

0x06eb,	// (0x00010a3f) listscroll_gen_pane

0x06ff,	// (0x00010a53) listscroll_set_pane

0x5d4a,	// (0x0001609e) main_idle_act_pane

0x3ff0,	// (0x00014344) main_idle_trad_pane

0x3ff0,	// (0x00014344) main_list_empty_pane

0x431c,	// (0x00014670) main_midp_pane

0x4342,	// (0x00014696) main_pane_g1_ParamLimits

0x4342,	// (0x00014696) main_pane_g1

0xb984,	// (0x0001bcd8) popup_ai_message_window_ParamLimits

0xb984,	// (0x0001bcd8) popup_ai_message_window

0xba15,	// (0x0001bd69) popup_fep_china_uni_window_ParamLimits

0xba15,	// (0x0001bd69) popup_fep_china_uni_window

0x0817,	// (0x00010b6b) popup_fep_japan_candidate_window_ParamLimits

0x0817,	// (0x00010b6b) popup_fep_japan_candidate_window

0x0837,	// (0x00010b8b) popup_fep_japan_predictive_window_ParamLimits

0x0837,	// (0x00010b8b) popup_fep_japan_predictive_window

0xba71,	// (0x0001bdc5) popup_find_window

0xba8e,	// (0x0001bde2) popup_grid_graphic_window_ParamLimits

0xba8e,	// (0x0001bde2) popup_grid_graphic_window

0x08a0,	// (0x00010bf4) popup_large_graphic_colour_window

0xbb32,	// (0x0001be86) popup_menu_window_ParamLimits

0xbb32,	// (0x0001be86) popup_menu_window

0xbd04,	// (0x0001c058) popup_note_image_window

0xbcca,	// (0x0001c01e) popup_note_wait_window_ParamLimits

0xbcca,	// (0x0001c01e) popup_note_wait_window

0xbd1c,	// (0x0001c070) popup_note_window_ParamLimits

0xbd1c,	// (0x0001c070) popup_note_window

0xbdc2,	// (0x0001c116) popup_query_code_window_ParamLimits

0xbdc2,	// (0x0001c116) popup_query_code_window

0x0ae8,	// (0x00010e3c) popup_query_data_code_window_ParamLimits

0x0ae8,	// (0x00010e3c) popup_query_data_code_window

0xbdfc,	// (0x0001c150) popup_query_data_window_ParamLimits

0xbdfc,	// (0x0001c150) popup_query_data_window

0xbe7e,	// (0x0001c1d2) popup_query_sat_info_window_ParamLimits

0xbe7e,	// (0x0001c1d2) popup_query_sat_info_window

0xbf15,	// (0x0001c269) popup_snote_single_graphic_window_ParamLimits

0xbf15,	// (0x0001c269) popup_snote_single_graphic_window

0xbf15,	// (0x0001c269) popup_snote_single_text_window_ParamLimits

0xbf15,	// (0x0001c269) popup_snote_single_text_window

0x0b6f,	// (0x00010ec3) popup_sub_window_general

0x0c9f,	// (0x00010ff3) popup_window_general_ParamLimits

0x0c9f,	// (0x00010ff3) popup_window_general

0x4358,	// (0x000146ac) power_save_pane

0xb809,	// (0x0001bb5d) control_pane_g1_ParamLimits

0xb809,	// (0x0001bb5d) control_pane_g1

0xb832,	// (0x0001bb86) control_pane_g2_ParamLimits

0xb832,	// (0x0001bb86) control_pane_g2

0x42b7,	// (0x0001460b) control_pane_g3_ParamLimits

0x42b7,	// (0x0001460b) control_pane_g3

0x0007,

0xf75e,	// (0x0001fab2) control_pane_g_ParamLimits

0xf75e,	// (0x0001fab2) control_pane_g

0xb873,	// (0x0001bbc7) control_pane_t1_ParamLimits

0xb873,	// (0x0001bbc7) control_pane_t1

0xb8d9,	// (0x0001bc2d) control_pane_t2_ParamLimits

0xb8d9,	// (0x0001bc2d) control_pane_t2

0x0002,

0xf76f,	// (0x0001fac3) control_pane_t_ParamLimits

0xf76f,	// (0x0001fac3) control_pane_t

0xd232,	// (0x0001d586) navi_navi_volume_pane_cp1

0xd23a,	// (0x0001d58e) status_small_icon_pane

0x41ec,	// (0x00014540) status_small_pane_g1_ParamLimits

0x41ec,	// (0x00014540) status_small_pane_g1

0xd242,	// (0x0001d596) status_small_pane_g2_ParamLimits

0xd242,	// (0x0001d596) status_small_pane_g2

0xd24e,	// (0x0001d5a2) status_small_pane_g3_ParamLimits

0xd24e,	// (0x0001d5a2) status_small_pane_g3

0xd25a,	// (0x0001d5ae) status_small_pane_g4_ParamLimits

0xd25a,	// (0x0001d5ae) status_small_pane_g4

0xd266,	// (0x0001d5ba) status_small_pane_g5_ParamLimits

0xd266,	// (0x0001d5ba) status_small_pane_g5

0xd274,	// (0x0001d5c8) status_small_pane_g6_ParamLimits

0xd274,	// (0x0001d5c8) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001faa1) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001faa1) status_small_pane_g

0xd2a3,	// (0x0001d5f7) status_small_pane_t1

0xd2c5,	// (0x0001d619) status_small_wait_pane_ParamLimits

0xd2c5,	// (0x0001d619) status_small_wait_pane

0xd094,	// (0x0001d3e8) aid_levels_signal_ParamLimits

0xd094,	// (0x0001d3e8) aid_levels_signal

0xd0ac,	// (0x0001d400) signal_pane_g1_ParamLimits

0xd0ac,	// (0x0001d400) signal_pane_g1

0xd0c7,	// (0x0001d41b) signal_pane_g2_ParamLimits

0xd0c7,	// (0x0001d41b) signal_pane_g2

0x0003,

0xf6de,	// (0x0001fa32) signal_pane_g_ParamLimits

0xf6de,	// (0x0001fa32) signal_pane_g

0x3a3e,	// (0x00013d92) context_pane_g1

0xc751,	// (0x0001caa5) title_pane_g1

0xc788,	// (0x0001cadc) title_pane_t1

0x2309,	// (0x0001265d) title_pane_t2

0x232f,	// (0x00012683) title_pane_t3

0x0002,

0xf532,	// (0x0001f886) title_pane_t

0xd6ab,	// (0x0001d9ff) aid_levels_battery_ParamLimits

0xd6ab,	// (0x0001d9ff) aid_levels_battery

0xd6c7,	// (0x0001da1b) battery_pane_g1_ParamLimits

0xd6c7,	// (0x0001da1b) battery_pane_g1

0xd6e4,	// (0x0001da38) battery_pane_g2_ParamLimits

0xd6e4,	// (0x0001da38) battery_pane_g2

0x0001,

0xf781,	// (0x0001fad5) battery_pane_g_ParamLimits

0xf781,	// (0x0001fad5) battery_pane_g

0xd8bb,	// (0x0001dc0f) uni_indicator_pane_g1

0xd8d1,	// (0x0001dc25) uni_indicator_pane_g2

0xd8e7,	// (0x0001dc3b) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x0001fc46) uni_indicator_pane_g

0x3e6e,	// (0x000141c2) navi_icon_pane_ParamLimits

0x3e6e,	// (0x000141c2) navi_icon_pane

0x3dac,	// (0x00014100) navi_midp_pane

0x3e8a,	// (0x000141de) navi_navi_pane

0x3e94,	// (0x000141e8) navi_text_pane_ParamLimits

0x3e94,	// (0x000141e8) navi_text_pane

0xeb7a,	// (0x0001eece) status_small_wait_pane_g1

0x279e,	// (0x00012af2) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x0001fc41) status_small_wait_pane_g

0x5812,	// (0x00015b66) navi_navi_icon_text_pane

0x581a,	// (0x00015b6e) navi_navi_pane_g1_ParamLimits

0x581a,	// (0x00015b6e) navi_navi_pane_g1

0x582c,	// (0x00015b80) navi_navi_pane_g2_ParamLimits

0x582c,	// (0x00015b80) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x0001fc0f) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x0001fc0f) navi_navi_pane_g

0x583e,	// (0x00015b92) navi_navi_tabs_pane

0x5847,	// (0x00015b9b) navi_navi_text_pane

0x5812,	// (0x00015b66) navi_navi_volume_pane

0x57ee,	// (0x00015b42) navi_text_pane_t1

0x57e2,	// (0x00015b36) navi_icon_pane_g1

0x5735,	// (0x00015a89) navi_navi_text_pane_t1

0x0fb7,	// (0x0001130b) navi_navi_volume_pane_g1

0x0fbf,	// (0x00011313) volume_small_pane

0x569b,	// (0x000159ef) navi_navi_icon_text_pane_g1

0x56a3,	// (0x000159f7) navi_navi_icon_text_pane_t1

0x3e8a,	// (0x000141de) navi_tabs_2_long_pane

0x3e8a,	// (0x000141de) navi_tabs_2_pane

0x3e8a,	// (0x000141de) navi_tabs_3_long_pane

0x3e8a,	// (0x000141de) navi_tabs_3_pane

0x3e8a,	// (0x000141de) navi_tabs_4_pane

0x0f97,	// (0x000112eb) tabs_2_active_pane_ParamLimits

0x0f97,	// (0x000112eb) tabs_2_active_pane

0x0fa7,	// (0x000112fb) tabs_2_passive_pane_ParamLimits

0x0fa7,	// (0x000112fb) tabs_2_passive_pane

0x0f65,	// (0x000112b9) tabs_3_active_pane_ParamLimits

0x0f65,	// (0x000112b9) tabs_3_active_pane

0x0f75,	// (0x000112c9) tabs_3_passive_pane_ParamLimits

0x0f75,	// (0x000112c9) tabs_3_passive_pane

0x0f86,	// (0x000112da) tabs_3_passive_pane_cp_ParamLimits

0x0f86,	// (0x000112da) tabs_3_passive_pane_cp

0x0f21,	// (0x00011275) tabs_4_active_pane_ParamLimits

0x0f21,	// (0x00011275) tabs_4_active_pane

0x0f32,	// (0x00011286) tabs_4_passive_pane_ParamLimits

0x0f32,	// (0x00011286) tabs_4_passive_pane

0x0f43,	// (0x00011297) tabs_4_passive_pane_cp_ParamLimits

0x0f43,	// (0x00011297) tabs_4_passive_pane_cp

0x0f54,	// (0x000112a8) tabs_4_passive_pane_cp2_ParamLimits

0x0f54,	// (0x000112a8) tabs_4_passive_pane_cp2

0x0efd,	// (0x00011251) tabs_2_long_active_pane_ParamLimits

0x0efd,	// (0x00011251) tabs_2_long_active_pane

0x0f0f,	// (0x00011263) tabs_2_long_passive_pane_ParamLimits

0x0f0f,	// (0x00011263) tabs_2_long_passive_pane

0x0ebe,	// (0x00011212) tabs_3_long_active_pane_ParamLimits

0x0ebe,	// (0x00011212) tabs_3_long_active_pane

0x0ed1,	// (0x00011225) tabs_3_long_passive_pane_ParamLimits

0x0ed1,	// (0x00011225) tabs_3_long_passive_pane

0x0eea,	// (0x0001123e) tabs_3_long_passive_pane_cp_ParamLimits

0x0eea,	// (0x0001123e) tabs_3_long_passive_pane_cp

0x0e64,	// (0x000111b8) volume_small_pane_g1

0x0e6d,	// (0x000111c1) volume_small_pane_g2

0x0e76,	// (0x000111ca) volume_small_pane_g3

0x0e7f,	// (0x000111d3) volume_small_pane_g4

0x0e88,	// (0x000111dc) volume_small_pane_g5

0x0e91,	// (0x000111e5) volume_small_pane_g6

0x0e9a,	// (0x000111ee) volume_small_pane_g7

0x0ea3,	// (0x000111f7) volume_small_pane_g8

0x0eac,	// (0x00011200) volume_small_pane_g9

0x0eb5,	// (0x00011209) volume_small_pane_g10

0x0009,

0xf887,	// (0x0001fbdb) volume_small_pane_g

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp2_ParamLimits

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp2

0x234f,	// (0x000126a3) tabs_3_active_pane_g1

0xc814,	// (0x0001cb68) tabs_3_active_pane_t1

0x25d6,	// (0x0001292a) bg_passive_tab_pane_cp2_ParamLimits

0x25d6,	// (0x0001292a) bg_passive_tab_pane_cp2

0x234f,	// (0x000126a3) tabs_3_passive_pane_g1

0xc814,	// (0x0001cb68) tabs_3_passive_pane_t1

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp3_ParamLimits

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp3

0x2369,	// (0x000126bd) tabs_4_active_pane_g1

0xc826,	// (0x0001cb7a) tabs_4_active_pane_t1

0x25d6,	// (0x0001292a) bg_passive_tab_pane_cp3_ParamLimits

0x25d6,	// (0x0001292a) bg_passive_tab_pane_cp3

0x2369,	// (0x000126bd) tabs_4_1_passive_pane_g1

0xc826,	// (0x0001cb7a) tabs_4_1_passive_pane_t1

0x431c,	// (0x00014670) list_highlight_pane_cp2

0xd995,	// (0x0001dce9) list_set_pane_ParamLimits

0xd995,	// (0x0001dce9) list_set_pane

0xda2f,	// (0x0001dd83) main_pane_set_t1_ParamLimits

0xda2f,	// (0x0001dd83) main_pane_set_t1

0xda4f,	// (0x0001dda3) main_pane_set_t2_ParamLimits

0xda4f,	// (0x0001dda3) main_pane_set_t2

0xda63,	// (0x0001ddb7) main_pane_set_t3_ParamLimits

0xda63,	// (0x0001ddb7) main_pane_set_t3

0xda75,	// (0x0001ddc9) main_pane_set_t4_ParamLimits

0xda75,	// (0x0001ddc9) main_pane_set_t4

0x0003,

0xf957,	// (0x0001fcab) main_pane_set_t_ParamLimits

0xf957,	// (0x0001fcab) main_pane_set_t

0xda87,	// (0x0001dddb) setting_code_pane

0xda91,	// (0x0001dde5) setting_slider_graphic_pane

0xda91,	// (0x0001dde5) setting_slider_pane

0xda91,	// (0x0001dde5) setting_text_pane

0xda91,	// (0x0001dde5) setting_volume_pane

0x005d,	// (0x000103b1) volume_set_pane

0x2341,	// (0x00012695) bg_set_opt_pane_cp

0x0065,	// (0x000103b9) setting_slider_pane_t1

0x007e,	// (0x000103d2) setting_slider_pane_t2

0x0098,	// (0x000103ec) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001f88d) setting_slider_pane_t

0x00b0,	// (0x00010404) slider_set_pane

0x2261,	// (0x000125b5) bg_set_opt_pane_cp2

0x2383,	// (0x000126d7) setting_slider_graphic_pane_g1

0x00c6,	// (0x0001041a) setting_slider_graphic_pane_t1

0x00d6,	// (0x0001042a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001f894) setting_slider_graphic_pane_t

0x00e6,	// (0x0001043a) slider_set_pane_cp

0x2261,	// (0x000125b5) input_focus_pane_cp1

0x5d31,	// (0x00016085) list_set_text_pane

0xeb7a,	// (0x0001eece) setting_text_pane_g1

0x2261,	// (0x000125b5) input_focus_pane_cp2

0xeb7a,	// (0x0001eece) setting_code_pane_g1

0x238c,	// (0x000126e0) setting_code_pane_t1

0x239a,	// (0x000126ee) set_text_pane_t1_ParamLimits

0x239a,	// (0x000126ee) set_text_pane_t1

0x326e,	// (0x000135c2) set_opt_bg_pane_g1

0x3276,	// (0x000135ca) set_opt_bg_pane_g2

0x5d0b,	// (0x0001605f) set_opt_bg_pane_g3

0x3286,	// (0x000135da) set_opt_bg_pane_g4

0x328e,	// (0x000135e2) set_opt_bg_pane_g5

0x3296,	// (0x000135ea) set_opt_bg_pane_g6

0x5d15,	// (0x00016069) set_opt_bg_pane_g7

0x5d1d,	// (0x00016071) set_opt_bg_pane_g8

0x5d27,	// (0x0001607b) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x0001fc98) set_opt_bg_pane_g

0x5cfe,	// (0x00016052) slider_set_pane_g1

0x102c,	// (0x00011380) slider_set_pane_g2

0x0006,

0xf935,	// (0x0001fc89) slider_set_pane_g

0x0fc8,	// (0x0001131c) volume_set_pane_g1

0x0fd0,	// (0x00011324) volume_set_pane_g2

0x0fd8,	// (0x0001132c) volume_set_pane_g3

0x0fe0,	// (0x00011334) volume_set_pane_g4

0x0fe8,	// (0x0001133c) volume_set_pane_g5

0x0ff0,	// (0x00011344) volume_set_pane_g6

0x0ff8,	// (0x0001134c) volume_set_pane_g7

0x1000,	// (0x00011354) volume_set_pane_g8

0x1008,	// (0x0001135c) volume_set_pane_g9

0x1010,	// (0x00011364) volume_set_pane_g10

0x0009,

0xf90d,	// (0x0001fc61) volume_set_pane_g

0xc838,	// (0x0001cb8c) indicator_pane_ParamLimits

0xc838,	// (0x0001cb8c) indicator_pane

0xc860,	// (0x0001cbb4) main_idle_pane_g2_ParamLimits

0xc860,	// (0x0001cbb4) main_idle_pane_g2

0xc898,	// (0x0001cbec) main_pane_idle_g1_ParamLimits

0xc898,	// (0x0001cbec) main_pane_idle_g1

0x23f5,	// (0x00012749) popup_clock_digital_analogue_window_ParamLimits

0x23f5,	// (0x00012749) popup_clock_digital_analogue_window

0xc8bf,	// (0x0001cc13) soft_indicator_pane_ParamLimits

0xc8bf,	// (0x0001cc13) soft_indicator_pane

0xc8d9,	// (0x0001cc2d) wallpaper_pane_ParamLimits

0xc8d9,	// (0x0001cc2d) wallpaper_pane

0xeb7a,	// (0x0001eece) wallpaper_pane_g1

0xc8eb,	// (0x0001cc3f) indicator_pane_g1_ParamLimits

0xc8eb,	// (0x0001cc3f) indicator_pane_g1

0x621d,	// (0x00016571) navi_navi_icon_text_pane_srt_g1

0x2447,	// (0x0001279b) soft_indicator_pane_t1

0x2461,	// (0x000127b5) aid_ps_area_pane

0xc901,	// (0x0001cc55) aid_ps_clock_pane

0x2480,	// (0x000127d4) aid_ps_indicator_pane

0x248c,	// (0x000127e0) indicator_ps_pane_ParamLimits

0x248c,	// (0x000127e0) indicator_ps_pane

0x249b,	// (0x000127ef) power_save_pane_g1_ParamLimits

0x249b,	// (0x000127ef) power_save_pane_g1

0x24a7,	// (0x000127fb) power_save_pane_g2_ParamLimits

0x24a7,	// (0x000127fb) power_save_pane_g2

0xf362,	// (0x0001f6b6) aid_navinavi_width_pane

0x2461,	// (0x000127b5) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001f899) power_save_pane_g_ParamLimits

0xf545,	// (0x0001f899) power_save_pane_g

0x24b5,	// (0x00012809) power_save_pane_t1_ParamLimits

0x24b5,	// (0x00012809) power_save_pane_t1

0xc901,	// (0x0001cc55) aid_ps_clock_pane_ParamLimits

0x2480,	// (0x000127d4) aid_ps_indicator_pane_ParamLimits

0x24c7,	// (0x0001281b) power_save_pane_t4_ParamLimits

0x24c7,	// (0x0001281b) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001f89e) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001f89e) power_save_pane_t

0x24f1,	// (0x00012845) power_save_t3_ParamLimits

0x24f1,	// (0x00012845) power_save_t3

0x24dc,	// (0x00012830) power_save_t2_ParamLimits

0x24dc,	// (0x00012830) power_save_t2

0x2506,	// (0x0001285a) indicator_ps_pane_g1

0xc90f,	// (0x0001cc63) ai_gene_pane_ParamLimits

0xc90f,	// (0x0001cc63) ai_gene_pane

0xc926,	// (0x0001cc7a) ai_links_pane_ParamLimits

0xc926,	// (0x0001cc7a) ai_links_pane

0xc93e,	// (0x0001cc92) indicator_pane_cp1_ParamLimits

0xc93e,	// (0x0001cc92) indicator_pane_cp1

0xc94d,	// (0x0001cca1) main_pane_idle_g1_cp_ParamLimits

0xc94d,	// (0x0001cca1) main_pane_idle_g1_cp

0x253f,	// (0x00012893) popup_ai_links_title_window

0xc965,	// (0x0001ccb9) soft_indicator_pane_cp1_ParamLimits

0xc965,	// (0x0001ccb9) soft_indicator_pane_cp1

0x5adb,	// (0x00015e2f) ai_links_pane_g1

0x5ae4,	// (0x00015e38) grid_ai_links_pane

0xd8b2,	// (0x0001dc06) ai_gene_pane_1

0x5ac9,	// (0x00015e1d) ai_gene_pane_2

0x5ad2,	// (0x00015e26) list_highlight_pane_cp4

0xd88e,	// (0x0001dbe2) cell_ai_link_pane_ParamLimits

0xd88e,	// (0x0001dbe2) cell_ai_link_pane

0x5a9a,	// (0x00015dee) cell_ai_link_pane_g1

0x279e,	// (0x00012af2) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x0001fc3c) cell_ai_link_pane_g

0x2261,	// (0x000125b5) grid_highlight_cp2

0x2261,	// (0x000125b5) bg_popup_sub_pane_cp1

0x2562,	// (0x000128b6) popup_ai_links_title_window_t1

0x59e8,	// (0x00015d3c) ai_gene_pane_1_g1_ParamLimits

0x59e8,	// (0x00015d3c) ai_gene_pane_1_g1

0x59f4,	// (0x00015d48) ai_gene_pane_1_g2_ParamLimits

0x59f4,	// (0x00015d48) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x0001fc32) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x0001fc32) ai_gene_pane_1_g

0x5a01,	// (0x00015d55) ai_gene_pane_1_t1_ParamLimits

0x5a01,	// (0x00015d55) ai_gene_pane_1_t1

0x5a35,	// (0x00015d89) grid_ai_soft_ind_pane

0x59d3,	// (0x00015d27) ai_gene_pane_2_t1_ParamLimits

0x59d3,	// (0x00015d27) ai_gene_pane_2_t1

0xc979,	// (0x0001cccd) main_pane_empty_t1_ParamLimits

0xc979,	// (0x0001cccd) main_pane_empty_t1

0xc991,	// (0x0001cce5) main_pane_empty_t2_ParamLimits

0xc991,	// (0x0001cce5) main_pane_empty_t2

0xc9a6,	// (0x0001ccfa) main_pane_empty_t3_ParamLimits

0xc9a6,	// (0x0001ccfa) main_pane_empty_t3

0xc9b8,	// (0x0001cd0c) main_pane_empty_t4_ParamLimits

0xc9b8,	// (0x0001cd0c) main_pane_empty_t4

0xc9ca,	// (0x0001cd1e) main_pane_empty_t5_ParamLimits

0xc9ca,	// (0x0001cd1e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001f8a3) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001f8a3) main_pane_empty_t

0x33e1,	// (0x00013735) bg_popup_window_pane_ParamLimits

0x33e1,	// (0x00013735) bg_popup_window_pane

0x5743,	// (0x00015a97) find_popup_pane_cp2_ParamLimits

0x5743,	// (0x00015a97) find_popup_pane_cp2

0x574f,	// (0x00015aa3) heading_pane_ParamLimits

0x574f,	// (0x00015aa3) heading_pane

0x2261,	// (0x000125b5) bg_popup_sub_pane

0xd80f,	// (0x0001db63) bg_popup_window_pane_g1_ParamLimits

0xd80f,	// (0x0001db63) bg_popup_window_pane_g1

0xd81e,	// (0x0001db72) bg_popup_window_pane_g2_ParamLimits

0xd81e,	// (0x0001db72) bg_popup_window_pane_g2

0xd82a,	// (0x0001db7e) bg_popup_window_pane_g3_ParamLimits

0xd82a,	// (0x0001db7e) bg_popup_window_pane_g3

0xd836,	// (0x0001db8a) bg_popup_window_pane_g4_ParamLimits

0xd836,	// (0x0001db8a) bg_popup_window_pane_g4

0xd845,	// (0x0001db99) bg_popup_window_pane_g5_ParamLimits

0xd845,	// (0x0001db99) bg_popup_window_pane_g5

0xd855,	// (0x0001dba9) bg_popup_window_pane_g6_ParamLimits

0xd855,	// (0x0001dba9) bg_popup_window_pane_g6

0xd861,	// (0x0001dbb5) bg_popup_window_pane_g7_ParamLimits

0xd861,	// (0x0001dbb5) bg_popup_window_pane_g7

0xd870,	// (0x0001dbc4) bg_popup_window_pane_g8_ParamLimits

0xd870,	// (0x0001dbc4) bg_popup_window_pane_g8

0xd87f,	// (0x0001dbd3) bg_popup_window_pane_g9_ParamLimits

0xd87f,	// (0x0001dbd3) bg_popup_window_pane_g9

0x5729,	// (0x00015a7d) bg_popup_window_pane_g10_ParamLimits

0x5729,	// (0x00015a7d) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x0001fbfa) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x0001fbfa) bg_popup_window_pane_g

0x5652,	// (0x000159a6) bg_popup_heading_pane_ParamLimits

0x5652,	// (0x000159a6) bg_popup_heading_pane

0x10b4,	// (0x00011408) tabs_4_passive_pane_cp_srt_ParamLimits

0x10b4,	// (0x00011408) tabs_4_passive_pane_cp_srt

0x10c6,	// (0x0001141a) tabs_4_passive_pane_srt_ParamLimits

0x5666,	// (0x000159ba) heading_pane_g2

0x10c6,	// (0x0001141a) tabs_4_passive_pane_srt

0x4986,	// (0x00014cda) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4986,	// (0x00014cda) bg_passive_tab_pane_cp3_srt

0x566e,	// (0x000159c2) heading_pane_t1_ParamLimits

0x566e,	// (0x000159c2) heading_pane_t1

0x5685,	// (0x000159d9) heading_pane_t2_ParamLimits

0x5685,	// (0x000159d9) heading_pane_t2

0x0001,

0xf8a1,	// (0x0001fbf5) heading_pane_t_ParamLimits

0xf8a1,	// (0x0001fbf5) heading_pane_t

0x517f,	// (0x000154d3) bg_popup_heading_pane_g1

0x522e,	// (0x00015582) bg_popup_heading_pane_g2

0x5238,	// (0x0001558c) bg_popup_heading_pane_g3

0x5242,	// (0x00015596) bg_popup_heading_pane_g4

0x524c,	// (0x000155a0) bg_popup_heading_pane_g5

0x5256,	// (0x000155aa) bg_popup_heading_pane_g6

0x525e,	// (0x000155b2) bg_popup_heading_pane_g7

0x5266,	// (0x000155ba) bg_popup_heading_pane_g8

0x5270,	// (0x000155c4) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x0001fbb1) bg_popup_heading_pane_g

0x4864,	// (0x00014bb8) bg_popup_sub_pane_g1

0x4874,	// (0x00014bc8) bg_popup_sub_pane_g2

0x486c,	// (0x00014bc0) bg_popup_sub_pane_g3

0x4884,	// (0x00014bd8) bg_popup_sub_pane_g4

0x487c,	// (0x00014bd0) bg_popup_sub_pane_g5

0x488c,	// (0x00014be0) bg_popup_sub_pane_g6

0x4894,	// (0x00014be8) bg_popup_sub_pane_g7

0x48a4,	// (0x00014bf8) bg_popup_sub_pane_g8

0x489c,	// (0x00014bf0) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x0001fb8b) bg_popup_sub_pane_g

0x25d6,	// (0x0001292a) bg_popup_window_pane_cp5_ParamLimits

0x25d6,	// (0x0001292a) bg_popup_window_pane_cp5

0x25f2,	// (0x00012946) popup_note_window_g1_ParamLimits

0x25f2,	// (0x00012946) popup_note_window_g1

0x25fe,	// (0x00012952) popup_note_window_t1_ParamLimits

0x25fe,	// (0x00012952) popup_note_window_t1

0x2614,	// (0x00012968) popup_note_window_t2_ParamLimits

0x2614,	// (0x00012968) popup_note_window_t2

0x262a,	// (0x0001297e) popup_note_window_t3_ParamLimits

0x262a,	// (0x0001297e) popup_note_window_t3

0x2640,	// (0x00012994) popup_note_window_t4_ParamLimits

0x2640,	// (0x00012994) popup_note_window_t4

0x2668,	// (0x000129bc) popup_note_window_t5_ParamLimits

0x2668,	// (0x000129bc) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001f8ae) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001f8ae) popup_note_window_t

0x26b2,	// (0x00012a06) bg_popup_window_pane_cp6_ParamLimits

0x26b2,	// (0x00012a06) bg_popup_window_pane_cp6

0x50fb,	// (0x0001544f) popup_note_image_window_g1_ParamLimits

0x50fb,	// (0x0001544f) popup_note_image_window_g1

0x5107,	// (0x0001545b) popup_note_image_window_g2_ParamLimits

0x5107,	// (0x0001545b) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x0001fb7f) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x0001fb7f) popup_note_image_window_g

0x5120,	// (0x00015474) popup_note_image_window_t1_ParamLimits

0x5120,	// (0x00015474) popup_note_image_window_t1

0x5139,	// (0x0001548d) popup_note_image_window_t2_ParamLimits

0x5139,	// (0x0001548d) popup_note_image_window_t2

0x5152,	// (0x000154a6) popup_note_image_window_t3_ParamLimits

0x5152,	// (0x000154a6) popup_note_image_window_t3

0x0002,

0xf830,	// (0x0001fb84) popup_note_image_window_t_ParamLimits

0xf830,	// (0x0001fb84) popup_note_image_window_t

0x4fbc,	// (0x00015310) bg_popup_window_pane_cp7_ParamLimits

0x4fbc,	// (0x00015310) bg_popup_window_pane_cp7

0x4fec,	// (0x00015340) popup_note_wait_window_g1_ParamLimits

0x4fec,	// (0x00015340) popup_note_wait_window_g1

0x4ff8,	// (0x0001534c) popup_note_wait_window_g2_ParamLimits

0x4ff8,	// (0x0001534c) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x0001fb6d) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x0001fb6d) popup_note_wait_window_g

0x5010,	// (0x00015364) popup_note_wait_window_t1_ParamLimits

0x5010,	// (0x00015364) popup_note_wait_window_t1

0x5037,	// (0x0001538b) popup_note_wait_window_t2_ParamLimits

0x5037,	// (0x0001538b) popup_note_wait_window_t2

0x5054,	// (0x000153a8) popup_note_wait_window_t3_ParamLimits

0x5054,	// (0x000153a8) popup_note_wait_window_t3

0x5067,	// (0x000153bb) popup_note_wait_window_t4_ParamLimits

0x5067,	// (0x000153bb) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x0001fb74) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x0001fb74) popup_note_wait_window_t

0x508c,	// (0x000153e0) wait_bar_pane_ParamLimits

0x508c,	// (0x000153e0) wait_bar_pane

0x2261,	// (0x000125b5) wait_anim_pane

0x2261,	// (0x000125b5) wait_border_pane

0xeb7a,	// (0x0001eece) wait_anim_pane_g1

0xeb7a,	// (0x0001eece) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0001fa2d) wait_anim_pane_g

0x4f60,	// (0x000152b4) wait_border_pane_g1

0x4f6b,	// (0x000152bf) wait_border_pane_g2

0x4f74,	// (0x000152c8) wait_border_pane_g3

0x0002,

0xf812,	// (0x0001fb66) wait_border_pane_g

0x4dcb,	// (0x0001511f) bg_popup_window_pane_cp16_ParamLimits

0x4dcb,	// (0x0001511f) bg_popup_window_pane_cp16

0x4ecb,	// (0x0001521f) indicator_popup_pane_cp4_ParamLimits

0x4ecb,	// (0x0001521f) indicator_popup_pane_cp4

0x4edf,	// (0x00015233) popup_query_data_window_t1_ParamLimits

0x4edf,	// (0x00015233) popup_query_data_window_t1

0x4ef1,	// (0x00015245) popup_query_data_window_t2_ParamLimits

0x4ef1,	// (0x00015245) popup_query_data_window_t2

0x4f0a,	// (0x0001525e) popup_query_data_window_t3_ParamLimits

0x4f0a,	// (0x0001525e) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x0001fb5f) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x0001fb5f) popup_query_data_window_t

0x4f24,	// (0x00015278) query_popup_data_pane_ParamLimits

0x4f24,	// (0x00015278) query_popup_data_pane

0x4f38,	// (0x0001528c) query_popup_data_pane_cp1_ParamLimits

0x4f38,	// (0x0001528c) query_popup_data_pane_cp1

0x4dcb,	// (0x0001511f) bg_popup_window_pane_cp10_ParamLimits

0x4dcb,	// (0x0001511f) bg_popup_window_pane_cp10

0x4dfd,	// (0x00015151) indicator_popup_pane_ParamLimits

0x4dfd,	// (0x00015151) indicator_popup_pane

0x4e1f,	// (0x00015173) popup_query_code_window_t1_ParamLimits

0x4e1f,	// (0x00015173) popup_query_code_window_t1

0x4e39,	// (0x0001518d) popup_query_code_window_t2_ParamLimits

0x4e39,	// (0x0001518d) popup_query_code_window_t2

0x4e82,	// (0x000151d6) popup_query_code_window_t3_ParamLimits

0x4e82,	// (0x000151d6) popup_query_code_window_t3

0x0002,

0xf804,	// (0x0001fb58) popup_query_code_window_t_ParamLimits

0xf804,	// (0x0001fb58) popup_query_code_window_t

0x4eb1,	// (0x00015205) query_popup_pane_ParamLimits

0x4eb1,	// (0x00015205) query_popup_pane

0x26b2,	// (0x00012a06) bg_popup_window_pane_cp15_ParamLimits

0x26b2,	// (0x00012a06) bg_popup_window_pane_cp15

0x26d0,	// (0x00012a24) indicator_popup_pane_cp1_ParamLimits

0x26d0,	// (0x00012a24) indicator_popup_pane_cp1

0x26e3,	// (0x00012a37) indicator_popup_pane_cp2_ParamLimits

0x26e3,	// (0x00012a37) indicator_popup_pane_cp2

0x26f6,	// (0x00012a4a) popup_query_data_code_window_g1_ParamLimits

0x26f6,	// (0x00012a4a) popup_query_data_code_window_g1

0x2709,	// (0x00012a5d) popup_query_data_code_window_t1_ParamLimits

0x2709,	// (0x00012a5d) popup_query_data_code_window_t1

0x271b,	// (0x00012a6f) popup_query_data_code_window_t2_ParamLimits

0x271b,	// (0x00012a6f) popup_query_data_code_window_t2

0x272d,	// (0x00012a81) popup_query_data_code_window_t3_ParamLimits

0x272d,	// (0x00012a81) popup_query_data_code_window_t3

0x2743,	// (0x00012a97) popup_query_data_code_window_t4_ParamLimits

0x2743,	// (0x00012a97) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001f8b9) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001f8b9) popup_query_data_code_window_t

0x0d75,	// (0x000110c9) list_single_midp_graphic_pane_g3

0x275b,	// (0x00012aaf) query_popup_data_pane_cp2_ParamLimits

0x276e,	// (0x00012ac2) query_popup_pane_cp2_ParamLimits

0x276e,	// (0x00012ac2) query_popup_pane_cp2

0x2261,	// (0x000125b5) bg_popup_window_pane_cp11

0x4daf,	// (0x00015103) heading_pane_cp5

0x4db7,	// (0x0001510b) listscroll_popup_info_pane

0x2261,	// (0x000125b5) input_focus_pane_cp3

0x2781,	// (0x00012ad5) query_popup_pane_t1

0x278f,	// (0x00012ae3) list_popup_info_pane_ParamLimits

0x278f,	// (0x00012ae3) list_popup_info_pane

0x279e,	// (0x00012af2) listscroll_popup_info_pane_g1

0x27a6,	// (0x00012afa) scroll_pane_cp7

0x27b0,	// (0x00012b04) popup_info_list_pane_t1_ParamLimits

0x27b0,	// (0x00012b04) popup_info_list_pane_t1

0x27ca,	// (0x00012b1e) popup_info_list_pane_t2_ParamLimits

0x27ca,	// (0x00012b1e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001f8c2) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001f8c2) popup_info_list_pane_t

0x2261,	// (0x000125b5) bg_popup_window_pane_cp12

0x6237,	// (0x0001658b) find_popup_pane

0x2341,	// (0x00012695) bg_popup_window_pane_cp3

0x27e4,	// (0x00012b38) heading_pane_cp3

0x27f3,	// (0x00012b47) listscroll_popup_graphic_pane

0x2261,	// (0x000125b5) bg_popup_window_pane_cp4

0xca2c,	// (0x0001cd80) heading_pane_cp4

0x285d,	// (0x00012bb1) listscroll_popup_colour_pane

0xca36,	// (0x0001cd8a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xca36,	// (0x0001cd8a) cell_large_graphic_colour_none_popup_pane

0xca4a,	// (0x0001cd9e) grid_large_graphic_colour_popup_pane_ParamLimits

0xca4a,	// (0x0001cd9e) grid_large_graphic_colour_popup_pane

0xca6e,	// (0x0001cdc2) listscroll_popup_colour_pane_g1_ParamLimits

0xca6e,	// (0x0001cdc2) listscroll_popup_colour_pane_g1

0xca85,	// (0x0001cdd9) listscroll_popup_colour_pane_g2_ParamLimits

0xca85,	// (0x0001cdd9) listscroll_popup_colour_pane_g2

0xca9c,	// (0x0001cdf0) listscroll_popup_colour_pane_g3_ParamLimits

0xca9c,	// (0x0001cdf0) listscroll_popup_colour_pane_g3

0xcaac,	// (0x0001ce00) listscroll_popup_colour_pane_g4_ParamLimits

0xcaac,	// (0x0001ce00) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001f8c7) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001f8c7) listscroll_popup_colour_pane_g

0x28eb,	// (0x00012c3f) scroll_pane_cp6_ParamLimits

0x28eb,	// (0x00012c3f) scroll_pane_cp6

0xcabc,	// (0x0001ce10) cell_large_graphic_colour_popup_pane_ParamLimits

0xcabc,	// (0x0001ce10) cell_large_graphic_colour_popup_pane

0x291c,	// (0x00012c70) cell_large_graphic_colour_none_popup_pane_t1

0x2261,	// (0x000125b5) grid_highlight_pane_cp5

0x292b,	// (0x00012c7f) cell_large_graphic_colour_popup_pane_g1

0x2933,	// (0x00012c87) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001f8d0) cell_large_graphic_colour_popup_pane_g

0x293b,	// (0x00012c8f) cell_large_graphic_colour_popup_pane_g2_copy1

0x2944,	// (0x00012c98) grid_highlight_pane_cp4

0x294c,	// (0x00012ca0) bg_popup_window_pane_cp8_ParamLimits

0x294c,	// (0x00012ca0) bg_popup_window_pane_cp8

0x2967,	// (0x00012cbb) popup_snote_single_text_window_g1_ParamLimits

0x2967,	// (0x00012cbb) popup_snote_single_text_window_g1

0x2979,	// (0x00012ccd) popup_snote_single_text_window_t1_ParamLimits

0x2979,	// (0x00012ccd) popup_snote_single_text_window_t1

0x298c,	// (0x00012ce0) popup_snote_single_text_window_t2_ParamLimits

0x298c,	// (0x00012ce0) popup_snote_single_text_window_t2

0x299f,	// (0x00012cf3) popup_snote_single_text_window_t3_ParamLimits

0x299f,	// (0x00012cf3) popup_snote_single_text_window_t3

0x29d8,	// (0x00012d2c) popup_snote_single_text_window_t4_ParamLimits

0x29d8,	// (0x00012d2c) popup_snote_single_text_window_t4

0x2a0c,	// (0x00012d60) popup_snote_single_text_window_t5_ParamLimits

0x2a0c,	// (0x00012d60) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001f8d5) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001f8d5) popup_snote_single_text_window_t

0x2a3b,	// (0x00012d8f) bg_popup_window_pane_cp9_ParamLimits

0x2a3b,	// (0x00012d8f) bg_popup_window_pane_cp9

0x2967,	// (0x00012cbb) popup_snote_single_graphic_window_g1_ParamLimits

0x2967,	// (0x00012cbb) popup_snote_single_graphic_window_g1

0x2a49,	// (0x00012d9d) popup_snote_single_graphic_window_g2_ParamLimits

0x2a49,	// (0x00012d9d) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001f8e0) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001f8e0) popup_snote_single_graphic_window_g

0x2a55,	// (0x00012da9) popup_snote_single_graphic_window_t1_ParamLimits

0x2a55,	// (0x00012da9) popup_snote_single_graphic_window_t1

0x2a68,	// (0x00012dbc) popup_snote_single_graphic_window_t2_ParamLimits

0x2a68,	// (0x00012dbc) popup_snote_single_graphic_window_t2

0x2a7b,	// (0x00012dcf) popup_snote_single_graphic_window_t3_ParamLimits

0x2a7b,	// (0x00012dcf) popup_snote_single_graphic_window_t3

0x2ab4,	// (0x00012e08) popup_snote_single_graphic_window_t4_ParamLimits

0x2ab4,	// (0x00012e08) popup_snote_single_graphic_window_t4

0x2ae8,	// (0x00012e3c) popup_snote_single_graphic_window_t5_ParamLimits

0x2ae8,	// (0x00012e3c) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001f8e5) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001f8e5) popup_snote_single_graphic_window_t

0x6179,	// (0x000164cd) grid_graphic_popup_pane_ParamLimits

0x6179,	// (0x000164cd) grid_graphic_popup_pane

0x61a3,	// (0x000164f7) listscroll_popup_graphic_pane_g1_ParamLimits

0x61a3,	// (0x000164f7) listscroll_popup_graphic_pane_g1

0xdbd6,	// (0x0001df2a) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbd6,	// (0x0001df2a) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x0001fcd5) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x0001fcd5) listscroll_popup_graphic_pane_g

0x61cb,	// (0x0001651f) scroll_pane_cp5

0xdb93,	// (0x0001dee7) cell_graphic_popup_pane_ParamLimits

0xdb93,	// (0x0001dee7) cell_graphic_popup_pane

0x60eb,	// (0x0001643f) cell_graphic_popup_pane_g1

0x60f3,	// (0x00016447) cell_graphic_popup_pane_g2

0x293b,	// (0x00012c8f) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x0001fcce) cell_graphic_popup_pane_g

0xdb85,	// (0x0001ded9) cell_graphic_popup_pane_t2

0x2944,	// (0x00012c98) grid_highlight_pane_cp3

0x2b29,	// (0x00012e7d) list_gen_pane_ParamLimits

0x2b29,	// (0x00012e7d) list_gen_pane

0x2b5b,	// (0x00012eaf) scroll_pane

0xdb3c,	// (0x0001de90) bg_list_pane_g1_ParamLimits

0xdb3c,	// (0x0001de90) bg_list_pane_g1

0x6060,	// (0x000163b4) bg_list_pane_g2_ParamLimits

0x6060,	// (0x000163b4) bg_list_pane_g2

0x6075,	// (0x000163c9) bg_list_pane_g3_ParamLimits

0x6075,	// (0x000163c9) bg_list_pane_g3

0x6089,	// (0x000163dd) bg_list_pane_g4_ParamLimits

0x6089,	// (0x000163dd) bg_list_pane_g4

0xdb59,	// (0x0001dead) bg_list_pane_g5_ParamLimits

0xdb59,	// (0x0001dead) bg_list_pane_g5

0x0004,

0xf96f,	// (0x0001fcc3) bg_list_pane_g_ParamLimits

0xf96f,	// (0x0001fcc3) bg_list_pane_g

0xdae0,	// (0x0001de34) list_double2_graphic_large_graphic_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double2_graphic_large_graphic_pane

0xdae0,	// (0x0001de34) list_double2_graphic_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double2_graphic_pane

0xdae0,	// (0x0001de34) list_double2_large_graphic_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double2_large_graphic_pane

0xdae0,	// (0x0001de34) list_double2_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double2_pane

0xdae0,	// (0x0001de34) list_double_graphic_heading_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_graphic_heading_pane

0xdae0,	// (0x0001de34) list_double_graphic_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_graphic_pane

0xdae0,	// (0x0001de34) list_double_heading_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_heading_pane

0xdae0,	// (0x0001de34) list_double_large_graphic_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_large_graphic_pane

0xdae0,	// (0x0001de34) list_double_number_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_number_pane

0xdae0,	// (0x0001de34) list_double_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_pane

0xdae0,	// (0x0001de34) list_double_time_pane_ParamLimits

0xdae0,	// (0x0001de34) list_double_time_pane

0xdae0,	// (0x0001de34) list_setting_number_pane_ParamLimits

0xdae0,	// (0x0001de34) list_setting_number_pane

0xdae0,	// (0x0001de34) list_setting_pane_ParamLimits

0xdae0,	// (0x0001de34) list_setting_pane

0xdaf2,	// (0x0001de46) list_single_2graphic_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_2graphic_pane

0xdaf2,	// (0x0001de46) list_single_graphic_heading_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_graphic_heading_pane

0xdaf2,	// (0x0001de46) list_single_graphic_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_graphic_pane

0xdaf2,	// (0x0001de46) list_single_heading_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_heading_pane

0xdaf2,	// (0x0001de46) list_single_large_graphic_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_large_graphic_pane

0xdaf2,	// (0x0001de46) list_single_number_heading_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_number_heading_pane

0xdaf2,	// (0x0001de46) list_single_number_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_number_pane

0xdaf2,	// (0x0001de46) list_single_pane_ParamLimits

0xdaf2,	// (0x0001de46) list_single_pane

0x2261,	// (0x000125b5) list_highlight_pane_cp1

0x2b9b,	// (0x00012eef) list_single_pane_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_single_pane_g1

0x2ba7,	// (0x00012efb) list_single_pane_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_single_pane_g

0x5eee,	// (0x00016242) list_single_pane_t1_ParamLimits

0x5eee,	// (0x00016242) list_single_pane_t1

0x2b9b,	// (0x00012eef) list_single_number_pane_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_single_number_pane_g1

0x2ba7,	// (0x00012efb) list_single_number_pane_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_single_number_pane_g

0x47f2,	// (0x00014b46) list_single_number_pane_t1_ParamLimits

0x47f2,	// (0x00014b46) list_single_number_pane_t1

0x5c90,	// (0x00015fe4) list_single_number_pane_t2_ParamLimits

0x5c90,	// (0x00015fe4) list_single_number_pane_t2

0x0001,

0xf930,	// (0x0001fc84) list_single_number_pane_t_ParamLimits

0xf930,	// (0x0001fc84) list_single_number_pane_t

0x2b8f,	// (0x00012ee3) list_single_graphic_pane_g1_ParamLimits

0x2b8f,	// (0x00012ee3) list_single_graphic_pane_g1

0x2b9b,	// (0x00012eef) list_single_graphic_pane_g2_ParamLimits

0x2b9b,	// (0x00012eef) list_single_graphic_pane_g2

0x2ba7,	// (0x00012efb) list_single_graphic_pane_g3_ParamLimits

0x2ba7,	// (0x00012efb) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001f8f0) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001f8f0) list_single_graphic_pane_g

0x2bb3,	// (0x00012f07) list_single_graphic_pane_t1_ParamLimits

0x2bb3,	// (0x00012f07) list_single_graphic_pane_t1

0x2b9b,	// (0x00012eef) list_single_heading_pane_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_single_heading_pane_g1

0x2ba7,	// (0x00012efb) list_single_heading_pane_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_single_heading_pane_g

0x2bc9,	// (0x00012f1d) list_single_heading_pane_t1_ParamLimits

0x2bc9,	// (0x00012f1d) list_single_heading_pane_t1

0x2bdf,	// (0x00012f33) list_single_heading_pane_t2_ParamLimits

0x2bdf,	// (0x00012f33) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001f8fc) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001f8fc) list_single_heading_pane_t

0x2b9b,	// (0x00012eef) list_single_number_heading_pane_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_single_number_heading_pane_g1

0x2ba7,	// (0x00012efb) list_single_number_heading_pane_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_single_number_heading_pane_g

0x2bc9,	// (0x00012f1d) list_single_number_heading_pane_t1_ParamLimits

0x2bc9,	// (0x00012f1d) list_single_number_heading_pane_t1

0x2bf1,	// (0x00012f45) list_single_number_heading_pane_t2_ParamLimits

0x2bf1,	// (0x00012f45) list_single_number_heading_pane_t2

0x2c03,	// (0x00012f57) list_single_number_heading_pane_t3_ParamLimits

0x2c03,	// (0x00012f57) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001f901) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001f901) list_single_number_heading_pane_t

0x2c15,	// (0x00012f69) list_single_graphic_heading_pane_g1_ParamLimits

0x2c15,	// (0x00012f69) list_single_graphic_heading_pane_g1

0xcae5,	// (0x0001ce39) list_single_graphic_heading_pane_g4_ParamLimits

0xcae5,	// (0x0001ce39) list_single_graphic_heading_pane_g4

0x2ba7,	// (0x00012efb) list_single_graphic_heading_pane_g5_ParamLimits

0x2ba7,	// (0x00012efb) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001f908) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001f908) list_single_graphic_heading_pane_g

0x2bc9,	// (0x00012f1d) list_single_graphic_heading_pane_t1_ParamLimits

0x2bc9,	// (0x00012f1d) list_single_graphic_heading_pane_t1

0x2c32,	// (0x00012f86) list_single_graphic_heading_pane_t2_ParamLimits

0x2c32,	// (0x00012f86) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001f90f) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001f90f) list_single_graphic_heading_pane_t

0x6833,	// (0x00016b87) list_single_large_graphic_pane_g1_ParamLimits

0x6833,	// (0x00016b87) list_single_large_graphic_pane_g1

0x2b9b,	// (0x00012eef) list_single_large_graphic_pane_g2_ParamLimits

0x2b9b,	// (0x00012eef) list_single_large_graphic_pane_g2

0x2ba7,	// (0x00012efb) list_single_large_graphic_pane_g3_ParamLimits

0x2ba7,	// (0x00012efb) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001f914) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001f914) list_single_large_graphic_pane_g

0x4f6b,	// (0x000152bf) wait_border_pane_g2_copy1

0xcaf6,	// (0x0001ce4a) list_single_large_graphic_pane_g4_cp2

0x683f,	// (0x00016b93) list_single_large_graphic_pane_t1_ParamLimits

0x683f,	// (0x00016b93) list_single_large_graphic_pane_t1

0x2d94,	// (0x000130e8) list_double_pane_g1_ParamLimits

0x2d94,	// (0x000130e8) list_double_pane_g1

0x2cbf,	// (0x00013013) list_double_pane_g2_ParamLimits

0x2cbf,	// (0x00013013) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001f91b) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001f91b) list_double_pane_g

0x2ccb,	// (0x0001301f) list_double_pane_t1_ParamLimits

0x2ccb,	// (0x0001301f) list_double_pane_t1

0xcafe,	// (0x0001ce52) list_double_pane_t2_ParamLimits

0xcafe,	// (0x0001ce52) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001f920) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001f920) list_double_pane_t

0xcb10,	// (0x0001ce64) list_double2_pane_g1_ParamLimits

0xcb10,	// (0x0001ce64) list_double2_pane_g1

0xcb21,	// (0x0001ce75) list_double2_pane_g2_ParamLimits

0xcb21,	// (0x0001ce75) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001f925) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001f925) list_double2_pane_g

0xcb2d,	// (0x0001ce81) list_double2_pane_t1_ParamLimits

0xcb2d,	// (0x0001ce81) list_double2_pane_t1

0x2eb0,	// (0x00013204) list_double2_pane_t2_ParamLimits

0x2eb0,	// (0x00013204) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001f92a) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001f92a) list_double2_pane_t

0x2d94,	// (0x000130e8) list_double_number_pane_g1_ParamLimits

0x2d94,	// (0x000130e8) list_double_number_pane_g1

0x2cbf,	// (0x00013013) list_double_number_pane_g2_ParamLimits

0x2cbf,	// (0x00013013) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001f91b) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001f91b) list_double_number_pane_g

0xcb43,	// (0x0001ce97) list_double_number_pane_t1_ParamLimits

0xcb43,	// (0x0001ce97) list_double_number_pane_t1

0x2da0,	// (0x000130f4) list_double_number_pane_t2_ParamLimits

0x2da0,	// (0x000130f4) list_double_number_pane_t2

0xcb55,	// (0x0001cea9) list_double_number_pane_t3_ParamLimits

0xcb55,	// (0x0001cea9) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001f92f) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001f92f) list_double_number_pane_t

0x2d88,	// (0x000130dc) list_double_graphic_pane_g1_ParamLimits

0x2d88,	// (0x000130dc) list_double_graphic_pane_g1

0xcb67,	// (0x0001cebb) list_double_graphic_pane_g2_ParamLimits

0xcb67,	// (0x0001cebb) list_double_graphic_pane_g2

0xcb76,	// (0x0001ceca) list_double_graphic_pane_g3_ParamLimits

0xcb76,	// (0x0001ceca) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001f936) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001f936) list_double_graphic_pane_g

0xcb8e,	// (0x0001cee2) list_double_graphic_pane_t1_ParamLimits

0xcb8e,	// (0x0001cee2) list_double_graphic_pane_t1

0xcba4,	// (0x0001cef8) list_double_graphic_pane_t2_ParamLimits

0xcba4,	// (0x0001cef8) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001f93f) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001f93f) list_double_graphic_pane_t

0xcbb6,	// (0x0001cf0a) list_double2_graphic_pane_g1_ParamLimits

0xcbb6,	// (0x0001cf0a) list_double2_graphic_pane_g1

0x3165,	// (0x000134b9) list_double2_graphic_pane_g2_ParamLimits

0x3165,	// (0x000134b9) list_double2_graphic_pane_g2

0xcb21,	// (0x0001ce75) list_double2_graphic_pane_g3_ParamLimits

0xcb21,	// (0x0001ce75) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001f944) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001f944) list_double2_graphic_pane_g

0xcbc2,	// (0x0001cf16) list_double2_graphic_pane_t1_ParamLimits

0xcbc2,	// (0x0001cf16) list_double2_graphic_pane_t1

0x2ed8,	// (0x0001322c) list_double2_graphic_pane_t2_ParamLimits

0x2ed8,	// (0x0001322c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001f94b) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001f94b) list_double2_graphic_pane_t

0xcbd8,	// (0x0001cf2c) list_double_large_graphic_pane_g1_ParamLimits

0xcbd8,	// (0x0001cf2c) list_double_large_graphic_pane_g1

0xcbf7,	// (0x0001cf4b) list_double_large_graphic_pane_g2_ParamLimits

0xcbf7,	// (0x0001cf4b) list_double_large_graphic_pane_g2

0x2cbf,	// (0x00013013) list_double_large_graphic_pane_g3_ParamLimits

0x2cbf,	// (0x00013013) list_double_large_graphic_pane_g3

0xcc08,	// (0x0001cf5c) list_double_large_graphic_pane_g4_ParamLimits

0xcc08,	// (0x0001cf5c) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001f950) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001f950) list_double_large_graphic_pane_g

0xcc1b,	// (0x0001cf6f) list_double_large_graphic_pane_t1_ParamLimits

0xcc1b,	// (0x0001cf6f) list_double_large_graphic_pane_t1

0xcc34,	// (0x0001cf88) list_double_large_graphic_pane_t2_ParamLimits

0xcc34,	// (0x0001cf88) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001f95b) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001f95b) list_double_large_graphic_pane_t

0xcc46,	// (0x0001cf9a) list_double2_large_graphic_pane_g1_ParamLimits

0xcc46,	// (0x0001cf9a) list_double2_large_graphic_pane_g1

0xcb10,	// (0x0001ce64) list_double2_large_graphic_pane_g2_ParamLimits

0xcb10,	// (0x0001ce64) list_double2_large_graphic_pane_g2

0xcb21,	// (0x0001ce75) list_double2_large_graphic_pane_g3_ParamLimits

0xcb21,	// (0x0001ce75) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001f960) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001f960) list_double2_large_graphic_pane_g

0xcc52,	// (0x0001cfa6) list_double2_large_graphic_pane_t1_ParamLimits

0xcc52,	// (0x0001cfa6) list_double2_large_graphic_pane_t1

0xcc68,	// (0x0001cfbc) list_double2_large_graphic_pane_t2_ParamLimits

0xcc68,	// (0x0001cfbc) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001f967) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001f967) list_double2_large_graphic_pane_t

0xcc7a,	// (0x0001cfce) list_double_heading_pane_g1_ParamLimits

0xcc7a,	// (0x0001cfce) list_double_heading_pane_g1

0xcc8b,	// (0x0001cfdf) list_double_heading_pane_g2_ParamLimits

0xcc8b,	// (0x0001cfdf) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001f96c) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001f96c) list_double_heading_pane_g

0xcc97,	// (0x0001cfeb) list_double_heading_pane_t1_ParamLimits

0xcc97,	// (0x0001cfeb) list_double_heading_pane_t1

0xccad,	// (0x0001d001) list_double_heading_pane_t2_ParamLimits

0xccad,	// (0x0001d001) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001f971) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001f971) list_double_heading_pane_t

0x2d2d,	// (0x00013081) list_double_graphic_heading_pane_g1_ParamLimits

0x2d2d,	// (0x00013081) list_double_graphic_heading_pane_g1

0xcc7a,	// (0x0001cfce) list_double_graphic_heading_pane_g2_ParamLimits

0xcc7a,	// (0x0001cfce) list_double_graphic_heading_pane_g2

0xcc8b,	// (0x0001cfdf) list_double_graphic_heading_pane_g3_ParamLimits

0xcc8b,	// (0x0001cfdf) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001f976) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001f976) list_double_graphic_heading_pane_g

0xccbf,	// (0x0001d013) list_double_graphic_heading_pane_t1_ParamLimits

0xccbf,	// (0x0001d013) list_double_graphic_heading_pane_t1

0xccd5,	// (0x0001d029) list_double_graphic_heading_pane_t2_ParamLimits

0xccd5,	// (0x0001d029) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001f97d) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001f97d) list_double_graphic_heading_pane_t

0xcbf7,	// (0x0001cf4b) list_double_time_pane_g1_ParamLimits

0xcbf7,	// (0x0001cf4b) list_double_time_pane_g1

0x2cbf,	// (0x00013013) list_double_time_pane_g2_ParamLimits

0x2cbf,	// (0x00013013) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001f982) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001f982) list_double_time_pane_g

0xcce7,	// (0x0001d03b) list_double_time_pane_t1_ParamLimits

0xcce7,	// (0x0001d03b) list_double_time_pane_t1

0xccfd,	// (0x0001d051) list_double_time_pane_t2_ParamLimits

0xccfd,	// (0x0001d051) list_double_time_pane_t2

0xcd0f,	// (0x0001d063) list_double_time_pane_t3_ParamLimits

0xcd0f,	// (0x0001d063) list_double_time_pane_t3

0xcd21,	// (0x0001d075) list_double_time_pane_t4_ParamLimits

0xcd21,	// (0x0001d075) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001f987) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001f987) list_double_time_pane_t

0x3165,	// (0x000134b9) list_setting_pane_g1_ParamLimits

0x3165,	// (0x000134b9) list_setting_pane_g1

0xcb21,	// (0x0001ce75) list_setting_pane_g2_ParamLimits

0xcb21,	// (0x0001ce75) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001f990) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001f990) list_setting_pane_g

0xcd33,	// (0x0001d087) list_setting_pane_t1_ParamLimits

0xcd33,	// (0x0001d087) list_setting_pane_t1

0xcd4a,	// (0x0001d09e) list_setting_pane_t2_ParamLimits

0xcd4a,	// (0x0001d09e) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001f995) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001f995) list_setting_pane_t

0xcd89,	// (0x0001d0dd) set_value_pane_cp_ParamLimits

0xcd89,	// (0x0001d0dd) set_value_pane_cp

0x3165,	// (0x000134b9) list_setting_number_pane_g1_ParamLimits

0x3165,	// (0x000134b9) list_setting_number_pane_g1

0xcb21,	// (0x0001ce75) list_setting_number_pane_g2_ParamLimits

0xcb21,	// (0x0001ce75) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001f990) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001f990) list_setting_number_pane_g

0xcd95,	// (0x0001d0e9) list_setting_number_pane_t1_ParamLimits

0xcd95,	// (0x0001d0e9) list_setting_number_pane_t1

0xcda9,	// (0x0001d0fd) list_setting_number_pane_t2_ParamLimits

0xcda9,	// (0x0001d0fd) list_setting_number_pane_t2

0xcdc0,	// (0x0001d114) list_setting_number_pane_t3_ParamLimits

0xcdc0,	// (0x0001d114) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0001f99c) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0001f99c) list_setting_number_pane_t

0xcd89,	// (0x0001d0dd) set_value_pane_ParamLimits

0xcd89,	// (0x0001d0dd) set_value_pane

0x3006,	// (0x0001335a) bg_set_opt_pane_ParamLimits

0x3006,	// (0x0001335a) bg_set_opt_pane

0x3027,	// (0x0001337b) set_value_pane_t1

0x3035,	// (0x00013389) slider_set_pane_cp3

0x303e,	// (0x00013392) volume_small_pane_cp

0x3047,	// (0x0001339b) list_form_gen_pane

0x3050,	// (0x000133a4) scroll_pane_cp8

0xce03,	// (0x0001d157) form_field_data_pane_ParamLimits

0xce03,	// (0x0001d157) form_field_data_pane

0xce1a,	// (0x0001d16e) form_field_data_wide_pane_ParamLimits

0xce1a,	// (0x0001d16e) form_field_data_wide_pane

0xce3a,	// (0x0001d18e) form_field_popup_pane_ParamLimits

0xce3a,	// (0x0001d18e) form_field_popup_pane

0xce52,	// (0x0001d1a6) form_field_popup_wide_pane_ParamLimits

0xce52,	// (0x0001d1a6) form_field_popup_wide_pane

0x30eb,	// (0x0001343f) form_field_slider_pane_ParamLimits

0x30eb,	// (0x0001343f) form_field_slider_pane

0x30fe,	// (0x00013452) form_field_slider_wide_pane_ParamLimits

0x30fe,	// (0x00013452) form_field_slider_wide_pane

0x3111,	// (0x00013465) data_form_pane

0xce73,	// (0x0001d1c7) form_field_data_pane_t1

0x313f,	// (0x00013493) input_focus_pane

0x314d,	// (0x000134a1) data_form_wide_pane

0x3185,	// (0x000134d9) form_field_data_wide_pane_t1

0x2959,	// (0x00012cad) input_focus_pane_cp6

0xce8d,	// (0x0001d1e1) form_field_popup_pane_t1

0x313f,	// (0x00013493) input_focus_pane_cp7

0x31bc,	// (0x00013510) list_form_pane

0x31d0,	// (0x00013524) form_field_popup_wide_pane_t1

0x313f,	// (0x00013493) input_focus_pane_cp8

0x31e2,	// (0x00013536) list_form_wide_pane

0xceaf,	// (0x0001d203) form_field_slider_pane_t1_ParamLimits

0xceaf,	// (0x0001d203) form_field_slider_pane_t1

0xcec7,	// (0x0001d21b) form_field_slider_pane_t2_ParamLimits

0xcec7,	// (0x0001d21b) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0001f9ac) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0001f9ac) form_field_slider_pane_t

0x25d6,	// (0x0001292a) input_focus_pane_cp9_ParamLimits

0x25d6,	// (0x0001292a) input_focus_pane_cp9

0xcedc,	// (0x0001d230) slider_cont_pane_ParamLimits

0xcedc,	// (0x0001d230) slider_cont_pane

0x322e,	// (0x00013582) form_field_slider_wide_pane_t1_ParamLimits

0x322e,	// (0x00013582) form_field_slider_wide_pane_t1

0x3240,	// (0x00013594) form_field_slider_wide_pane_t2_ParamLimits

0x3240,	// (0x00013594) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001f9b1) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001f9b1) form_field_slider_wide_pane_t

0x25d6,	// (0x0001292a) input_focus_pane_cp10_ParamLimits

0x25d6,	// (0x0001292a) input_focus_pane_cp10

0xcef0,	// (0x0001d244) slider_cont_pane_cp1_ParamLimits

0xcef0,	// (0x0001d244) slider_cont_pane_cp1

0xcf04,	// (0x0001d258) slider_form_pane_cp

0x326e,	// (0x000135c2) input_focus_pane_g1

0x3276,	// (0x000135ca) input_focus_pane_g2

0x327e,	// (0x000135d2) input_focus_pane_g3

0x3286,	// (0x000135da) input_focus_pane_g4

0x328e,	// (0x000135e2) input_focus_pane_g5

0x3296,	// (0x000135ea) input_focus_pane_g6

0x329e,	// (0x000135f2) input_focus_pane_g7

0x32a6,	// (0x000135fa) input_focus_pane_g8

0x32ae,	// (0x00013602) input_focus_pane_g9

0xeb7a,	// (0x0001eece) input_focus_pane_g10

0x0009,

0xf662,	// (0x0001f9b6) input_focus_pane_g

0x4f74,	// (0x000152c8) wait_border_pane_g3_copy1

0xcf0c,	// (0x0001d260) data_form_pane_t1

0xeb7a,	// (0x0001eece) wait_anim_pane_g1_copy1

0xdac4,	// (0x0001de18) data_form_wide_pane_t1

0xcf26,	// (0x0001d27a) list_form_graphic_pane_cp_ParamLimits

0xcf26,	// (0x0001d27a) list_form_graphic_pane_cp

0x5ea6,	// (0x000161fa) slider_form_pane_g1

0x5eaf,	// (0x00016203) slider_form_pane_g2

0x0006,

0xf960,	// (0x0001fcb4) slider_form_pane_g

0xcf26,	// (0x0001d27a) list_form_graphic_pane_ParamLimits

0xcf26,	// (0x0001d27a) list_form_graphic_pane

0x3306,	// (0x0001365a) list_form_graphic_pane_g1

0x330e,	// (0x00013662) list_form_graphic_pane_t1_ParamLimits

0x330e,	// (0x00013662) list_form_graphic_pane_t1

0x2341,	// (0x00012695) list_highlight_pane_cp5_ParamLimits

0x2341,	// (0x00012695) list_highlight_pane_cp5

0x3323,	// (0x00013677) find_pane_g1

0x332c,	// (0x00013680) input_find_pane

0x3335,	// (0x00013689) input_find_pane_g1_ParamLimits

0x3335,	// (0x00013689) input_find_pane_g1

0x3341,	// (0x00013695) input_find_pane_t1_ParamLimits

0x3341,	// (0x00013695) input_find_pane_t1

0x3356,	// (0x000136aa) input_find_pane_t2_ParamLimits

0x3356,	// (0x000136aa) input_find_pane_t2

0x0001,

0xf677,	// (0x0001f9cb) input_find_pane_t_ParamLimits

0xf677,	// (0x0001f9cb) input_find_pane_t

0x336b,	// (0x000136bf) input_focus_pane_cp5_ParamLimits

0x336b,	// (0x000136bf) input_focus_pane_cp5

0x338a,	// (0x000136de) bg_popup_window_pane_cp2_ParamLimits

0x338a,	// (0x000136de) bg_popup_window_pane_cp2

0x3397,	// (0x000136eb) listscroll_menu_pane_ParamLimits

0x3397,	// (0x000136eb) listscroll_menu_pane

0xcf44,	// (0x0001d298) popup_submenu_window_ParamLimits

0xcf44,	// (0x0001d298) popup_submenu_window

0x33cf,	// (0x00013723) find_popup_pane_g1

0x33d7,	// (0x0001372b) input_popup_find_pane_cp

0x33e1,	// (0x00013735) input_focus_pane_cp4_ParamLimits

0x33e1,	// (0x00013735) input_focus_pane_cp4

0x33fb,	// (0x0001374f) input_popup_find_pane_t1_ParamLimits

0x33fb,	// (0x0001374f) input_popup_find_pane_t1

0x2261,	// (0x000125b5) bg_popup_sub_pane_cp

0x3429,	// (0x0001377d) listscroll_popup_sub_pane

0x3431,	// (0x00013785) list_submenu_pane_ParamLimits

0x3431,	// (0x00013785) list_submenu_pane

0x3442,	// (0x00013796) scroll_pane_cp4

0x344a,	// (0x0001379e) list_single_popup_submenu_pane_ParamLimits

0x344a,	// (0x0001379e) list_single_popup_submenu_pane

0x345e,	// (0x000137b2) list_single_popup_submenu_pane_g1

0x3466,	// (0x000137ba) list_single_popup_submenu_pane_t1_ParamLimits

0x3466,	// (0x000137ba) list_single_popup_submenu_pane_t1

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp1_ParamLimits

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp1

0x347b,	// (0x000137cf) tabs_2_active_pane_g1

0xcf7e,	// (0x0001d2d2) tabs_2_active_pane_t1

0x25d6,	// (0x0001292a) bg_passive_tab_pane_cp1_ParamLimits

0x25d6,	// (0x0001292a) bg_passive_tab_pane_cp1

0x347b,	// (0x000137cf) tabs_2_passive_pane_g1

0xcf7e,	// (0x0001d2d2) tabs_2_passive_pane_t1

0x2341,	// (0x00012695) bg_active_tab_pane_cp4

0xcf90,	// (0x0001d2e4) tabs_2_long_active_pane_t1

0x431c,	// (0x00014670) bg_passive_tab_pane_cp4

0x0d7d,	// (0x000110d1) list_single_midp_graphic_pane_g4_ParamLimits

0x2341,	// (0x00012695) bg_active_tab_pane_cp5

0xcfa3,	// (0x0001d2f7) tabs_3_long_active_pane_t1

0x431c,	// (0x00014670) bg_passive_tab_pane_cp5

0x0d7d,	// (0x000110d1) list_single_midp_graphic_pane_g4

0x2341,	// (0x00012695) bg_popup_window_pane_cp13_ParamLimits

0x2341,	// (0x00012695) bg_popup_window_pane_cp13

0x34dd,	// (0x00013831) listscroll_popup_fast_pane_ParamLimits

0x34dd,	// (0x00013831) listscroll_popup_fast_pane

0x34ec,	// (0x00013840) grid_popup_fast_pane_ParamLimits

0x34ec,	// (0x00013840) grid_popup_fast_pane

0x34fe,	// (0x00013852) scroll_pane_cp9_ParamLimits

0x34fe,	// (0x00013852) scroll_pane_cp9

0x7ded,	// (0x00018141) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ded,	// (0x00018141) list_single_graphic_hl_pane_t1_cp2

0x3522,	// (0x00013876) input_focus_pane_cp20_ParamLimits

0x3522,	// (0x00013876) input_focus_pane_cp20

0x3530,	// (0x00013884) query_popup_data_pane_t1_ParamLimits

0x3530,	// (0x00013884) query_popup_data_pane_t1

0x3543,	// (0x00013897) query_popup_data_pane_t2_ParamLimits

0x3543,	// (0x00013897) query_popup_data_pane_t2

0x3589,	// (0x000138dd) query_popup_data_pane_t3_ParamLimits

0x3589,	// (0x000138dd) query_popup_data_pane_t3

0x35ca,	// (0x0001391e) query_popup_data_pane_t4_ParamLimits

0x35ca,	// (0x0001391e) query_popup_data_pane_t4

0x3606,	// (0x0001395a) query_popup_data_pane_t5_ParamLimits

0x3606,	// (0x0001395a) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001f9d0) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001f9d0) query_popup_data_pane_t

0x326e,	// (0x000135c2) bg_set_opt_pane_g1

0x3276,	// (0x000135ca) bg_set_opt_pane_g2

0x327e,	// (0x000135d2) bg_set_opt_pane_g3

0x3286,	// (0x000135da) bg_set_opt_pane_g4

0x328e,	// (0x000135e2) bg_set_opt_pane_g5

0x3296,	// (0x000135ea) bg_set_opt_pane_g6

0x329e,	// (0x000135f2) bg_set_opt_pane_g7

0x32a6,	// (0x000135fa) bg_set_opt_pane_g8

0x32ae,	// (0x00013602) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0001f9db) bg_set_opt_pane_g

0x038b,	// (0x000106df) control_top_pane_stacon_ParamLimits

0x038b,	// (0x000106df) control_top_pane_stacon

0x03de,	// (0x00010732) signal_pane_stacon_ParamLimits

0x03de,	// (0x00010732) signal_pane_stacon

0x3c87,	// (0x00013fdb) stacon_top_pane_g1_ParamLimits

0x3c87,	// (0x00013fdb) stacon_top_pane_g1

0x0403,	// (0x00010757) title_pane_stacon_ParamLimits

0x0403,	// (0x00010757) title_pane_stacon

0x042d,	// (0x00010781) uni_indicator_pane_stacon_ParamLimits

0x042d,	// (0x00010781) uni_indicator_pane_stacon

0x0442,	// (0x00010796) battery_pane_stacon_ParamLimits

0x0442,	// (0x00010796) battery_pane_stacon

0x0486,	// (0x000107da) control_bottom_pane_stacon_ParamLimits

0x0486,	// (0x000107da) control_bottom_pane_stacon

0x04a9,	// (0x000107fd) navi_pane_stacon_ParamLimits

0x04a9,	// (0x000107fd) navi_pane_stacon

0x3ca9,	// (0x00013ffd) stacon_bottom_pane_g1_ParamLimits

0x3ca9,	// (0x00013ffd) stacon_bottom_pane_g1

0x00ee,	// (0x00010442) aid_levels_signal_lsc_ParamLimits

0x00ee,	// (0x00010442) aid_levels_signal_lsc

0x0104,	// (0x00010458) signal_pane_stacon_g1_ParamLimits

0x0104,	// (0x00010458) signal_pane_stacon_g1

0x0118,	// (0x0001046c) signal_pane_stacon_g2_ParamLimits

0x0118,	// (0x0001046c) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0001f9ee) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0001f9ee) signal_pane_stacon_g

0x014d,	// (0x000104a1) title_pane_stacon_t1_ParamLimits

0x014d,	// (0x000104a1) title_pane_stacon_t1

0x364a,	// (0x0001399e) uni_indicator_pane_stacon_g1

0x3654,	// (0x000139a8) uni_indicator_pane_stacon_g2

0x365e,	// (0x000139b2) uni_indicator_pane_stacon_g3

0x3668,	// (0x000139bc) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0001f9fa) uni_indicator_pane_stacon_g

0x0172,	// (0x000104c6) control_top_pane_stacon_g1

0x017a,	// (0x000104ce) control_top_pane_stacon_t1_ParamLimits

0x017a,	// (0x000104ce) control_top_pane_stacon_t1

0x01b1,	// (0x00010505) aid_levels_battery_lsc_ParamLimits

0x01b1,	// (0x00010505) aid_levels_battery_lsc

0x01c8,	// (0x0001051c) battery_pane_stacon_g1_ParamLimits

0x01c8,	// (0x0001051c) battery_pane_stacon_g1

0x01db,	// (0x0001052f) battery_pane_stacon_g2_ParamLimits

0x01db,	// (0x0001052f) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001fa03) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001fa03) battery_pane_stacon_g

0x0219,	// (0x0001056d) navi_icon_pane_stacon

0x022d,	// (0x00010581) navi_navi_pane_stacon

0x0219,	// (0x0001056d) navi_text_pane_stacon

0x0172,	// (0x000104c6) control_bottom_pane_stacon_g1

0x0241,	// (0x00010595) control_bottom_pane_stacon_t1_ParamLimits

0x0241,	// (0x00010595) control_bottom_pane_stacon_t1

0xcfb5,	// (0x0001d309) grid_app_pane_ParamLimits

0xcfb5,	// (0x0001d309) grid_app_pane

0xcfed,	// (0x0001d341) scroll_pane_cp15_ParamLimits

0xcfed,	// (0x0001d341) scroll_pane_cp15

0xd002,	// (0x0001d356) cell_app_pane_ParamLimits

0xd002,	// (0x0001d356) cell_app_pane

0xd047,	// (0x0001d39b) cell_app_pane_g1_ParamLimits

0xd047,	// (0x0001d39b) cell_app_pane_g1

0x370d,	// (0x00013a61) cell_app_pane_g2_ParamLimits

0x370d,	// (0x00013a61) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0001fa08) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0001fa08) cell_app_pane_g

0xd06b,	// (0x0001d3bf) cell_app_pane_t1_ParamLimits

0xd06b,	// (0x0001d3bf) cell_app_pane_t1

0x3730,	// (0x00013a84) grid_highlight_pane_ParamLimits

0x3730,	// (0x00013a84) grid_highlight_pane

0x326e,	// (0x000135c2) cell_highlight_pane_g1

0x3276,	// (0x000135ca) cell_highlight_pane_g2

0x327e,	// (0x000135d2) cell_highlight_pane_g3

0x3286,	// (0x000135da) cell_highlight_pane_g4

0x328e,	// (0x000135e2) cell_highlight_pane_g5

0x3296,	// (0x000135ea) cell_highlight_pane_g6

0x329e,	// (0x000135f2) cell_highlight_pane_g7

0x32a6,	// (0x000135fa) cell_highlight_pane_g8

0x32ae,	// (0x00013602) cell_highlight_pane_g9

0xeb7a,	// (0x0001eece) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0001f9b6) cell_highlight_pane_g

0x3741,	// (0x00013a95) bg_scroll_pane

0x028b,	// (0x000105df) scroll_handle_pane

0x3788,	// (0x00013adc) scroll_bg_pane_g1

0x379d,	// (0x00013af1) scroll_bg_pane_g2

0x37b5,	// (0x00013b09) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0001fa0d) scroll_bg_pane_g

0x37ca,	// (0x00013b1e) scroll_handle_focus_pane_ParamLimits

0x37ca,	// (0x00013b1e) scroll_handle_focus_pane

0x3788,	// (0x00013adc) scroll_handle_pane_g1

0x37d7,	// (0x00013b2b) scroll_handle_pane_g2

0x37b5,	// (0x00013b09) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001fa14) scroll_handle_pane_g

0x33e1,	// (0x00013735) bg_popup_sub_pane_cp21_ParamLimits

0x33e1,	// (0x00013735) bg_popup_sub_pane_cp21

0x37eb,	// (0x00013b3f) popup_fep_japan_predictive_window_t1_ParamLimits

0x37eb,	// (0x00013b3f) popup_fep_japan_predictive_window_t1

0x3805,	// (0x00013b59) popup_fep_japan_predictive_window_t2_ParamLimits

0x3805,	// (0x00013b59) popup_fep_japan_predictive_window_t2

0x3838,	// (0x00013b8c) popup_fep_japan_predictive_window_t3_ParamLimits

0x3838,	// (0x00013b8c) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0001fa1b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0001fa1b) popup_fep_japan_predictive_window_t

0x2261,	// (0x000125b5) bg_popup_sub_pane_cp23

0x386f,	// (0x00013bc3) listscroll_japin_cand_pane

0x3877,	// (0x00013bcb) popup_fep_japan_candidate_window_t1

0x3885,	// (0x00013bd9) candidate_pane_ParamLimits

0x3885,	// (0x00013bd9) candidate_pane

0x3897,	// (0x00013beb) scroll_pane_cp30

0x389f,	// (0x00013bf3) list_single_popup_jap_candidate_pane_ParamLimits

0x389f,	// (0x00013bf3) list_single_popup_jap_candidate_pane

0x2261,	// (0x000125b5) list_highlight_pane_cp30

0x38b4,	// (0x00013c08) list_single_popup_jap_candidate_pane_t1

0x38c3,	// (0x00013c17) level_1_signal

0x38d5,	// (0x00013c29) level_2_signal

0x38e8,	// (0x00013c3c) level_3_signal

0x38fb,	// (0x00013c4f) level_4_signal

0x390e,	// (0x00013c62) level_5_signal

0x3921,	// (0x00013c75) level_6_signal

0x3934,	// (0x00013c88) level_7_signal

0x38c3,	// (0x00013c17) level_1_battery

0x38d5,	// (0x00013c29) level_2_battery

0x38e8,	// (0x00013c3c) level_3_battery

0x38fb,	// (0x00013c4f) level_4_battery

0x390e,	// (0x00013c62) level_5_battery

0x3921,	// (0x00013c75) level_6_battery

0x3934,	// (0x00013c88) level_7_battery

0x395f,	// (0x00013cb3) list_menu_pane_ParamLimits

0x395f,	// (0x00013cb3) list_menu_pane

0x3975,	// (0x00013cc9) scroll_pane_cp25_ParamLimits

0x3975,	// (0x00013cc9) scroll_pane_cp25

0x398e,	// (0x00013ce2) list_double2_graphic_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double2_graphic_pane_cp2

0x398e,	// (0x00013ce2) list_double2_large_graphic_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double2_large_graphic_pane_cp2

0x398e,	// (0x00013ce2) list_double2_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double2_pane_cp2

0x398e,	// (0x00013ce2) list_double_graphic_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double_graphic_pane_cp2

0x398e,	// (0x00013ce2) list_double_large_graphic_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double_large_graphic_pane_cp2

0x398e,	// (0x00013ce2) list_double_number_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double_number_pane_cp2

0x398e,	// (0x00013ce2) list_double_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double_pane_cp2

0xd082,	// (0x0001d3d6) list_single_2graphic_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_2graphic_pane_cp2

0xd082,	// (0x0001d3d6) list_single_graphic_heading_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_graphic_heading_pane_cp2

0xd082,	// (0x0001d3d6) list_single_graphic_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_graphic_pane_cp2

0xd082,	// (0x0001d3d6) list_single_heading_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_heading_pane_cp2

0x39cb,	// (0x00013d1f) list_single_large_graphic_pane_cp2_ParamLimits

0x39cb,	// (0x00013d1f) list_single_large_graphic_pane_cp2

0xd082,	// (0x0001d3d6) list_single_number_heading_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_number_heading_pane_cp2

0xd082,	// (0x0001d3d6) list_single_number_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_number_pane_cp2

0xd082,	// (0x0001d3d6) list_single_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_pane_cp2

0x3a47,	// (0x00013d9b) bg_popup_sub_pane_cp22

0x033d,	// (0x00010691) popup_side_volume_key_window_g1

0x0367,	// (0x000106bb) popup_side_volume_key_window_t1

0x0383,	// (0x000106d7) volume_small_pane_cp1

0x25d6,	// (0x0001292a) bg_popup_sub_pane_cp24_ParamLimits

0x25d6,	// (0x0001292a) bg_popup_sub_pane_cp24

0x3a5d,	// (0x00013db1) fep_china_uni_candidate_pane_ParamLimits

0x3a5d,	// (0x00013db1) fep_china_uni_candidate_pane

0x3a71,	// (0x00013dc5) fep_china_uni_entry_pane

0x3a81,	// (0x00013dd5) popup_fep_china_uni_window_g1

0x3a9d,	// (0x00013df1) fep_china_uni_entry_pane_g1

0x3aa5,	// (0x00013df9) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0001fa4c) fep_china_uni_entry_pane_g

0x3aad,	// (0x00013e01) fep_entry_item_pane

0x3ab7,	// (0x00013e0b) fep_candidate_item_pane

0x3abf,	// (0x00013e13) fep_china_uni_candidate_pane_g1

0x3ac7,	// (0x00013e1b) fep_china_uni_candidate_pane_g2

0x3acf,	// (0x00013e23) fep_china_uni_candidate_pane_g3

0x3ad7,	// (0x00013e2b) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0001fa51) fep_china_uni_candidate_pane_g

0xeb7a,	// (0x0001eece) fep_entry_item_pane_g1

0x3adf,	// (0x00013e33) fep_entry_item_pane_t1_ParamLimits

0x3adf,	// (0x00013e33) fep_entry_item_pane_t1

0x3af5,	// (0x00013e49) fep_candidate_item_pane_t1_ParamLimits

0x3af5,	// (0x00013e49) fep_candidate_item_pane_t1

0x3b0a,	// (0x00013e5e) fep_candidate_item_pane_t2_ParamLimits

0x3b0a,	// (0x00013e5e) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0001fa5a) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0001fa5a) fep_candidate_item_pane_t

0x2341,	// (0x00012695) list_highlight_pane_cp31_ParamLimits

0x2341,	// (0x00012695) list_highlight_pane_cp31

0x3b1c,	// (0x00013e70) level_1_signal_lsc

0x3b25,	// (0x00013e79) level_2_signal_lsc

0x3b2e,	// (0x00013e82) level_3_signal_lsc

0x3b37,	// (0x00013e8b) level_4_signal_lsc

0x3b40,	// (0x00013e94) level_5_signal_lsc

0x3b49,	// (0x00013e9d) level_6_signal_lsc

0x3b52,	// (0x00013ea6) level_7_signal_lsc

0x3b52,	// (0x00013ea6) level_1_battery_lsc

0x3b5b,	// (0x00013eaf) level_2_battery_lsc

0x3b64,	// (0x00013eb8) level_3_battery_lsc

0x3b6d,	// (0x00013ec1) level_4_battery_lsc

0x3b76,	// (0x00013eca) level_5_battery_lsc

0x3b7f,	// (0x00013ed3) level_6_battery_lsc

0x3b1c,	// (0x00013e70) level_7_battery_lsc

0x3b88,	// (0x00013edc) scroll_handle_focus_pane_g1

0x3b91,	// (0x00013ee5) scroll_handle_focus_pane_g2

0x3b9a,	// (0x00013eee) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0001fa5f) scroll_handle_focus_pane_g

0x3ba3,	// (0x00013ef7) list_single_2graphic_pane_g1_ParamLimits

0x3ba3,	// (0x00013ef7) list_single_2graphic_pane_g1

0xcae5,	// (0x0001ce39) list_single_2graphic_pane_g2_ParamLimits

0xcae5,	// (0x0001ce39) list_single_2graphic_pane_g2

0x2ba7,	// (0x00012efb) list_single_2graphic_pane_g3_ParamLimits

0x2ba7,	// (0x00012efb) list_single_2graphic_pane_g3

0x3baf,	// (0x00013f03) list_single_2graphic_pane_g4_ParamLimits

0x3baf,	// (0x00013f03) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0001fa66) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0001fa66) list_single_2graphic_pane_g

0x3bc0,	// (0x00013f14) list_single_2graphic_pane_t1_ParamLimits

0x3bc0,	// (0x00013f14) list_single_2graphic_pane_t1

0xd10f,	// (0x0001d463) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd10f,	// (0x0001d463) list_double2_graphic_large_graphic_pane_g1

0xcb10,	// (0x0001ce64) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcb10,	// (0x0001ce64) list_double2_graphic_large_graphic_pane_g2

0xcb21,	// (0x0001ce75) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcb21,	// (0x0001ce75) list_double2_graphic_large_graphic_pane_g3

0xd121,	// (0x0001d475) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd121,	// (0x0001d475) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0001fa6f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0001fa6f) list_double2_graphic_large_graphic_pane_g

0xd12d,	// (0x0001d481) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd12d,	// (0x0001d481) list_double2_graphic_large_graphic_pane_t1

0xd143,	// (0x0001d497) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd143,	// (0x0001d497) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0001fa78) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0001fa78) list_double2_graphic_large_graphic_pane_t

0x3d74,	// (0x000140c8) popup_fast_swap_window_ParamLimits

0x3d74,	// (0x000140c8) popup_fast_swap_window

0x3d90,	// (0x000140e4) popup_side_volume_key_window

0x3dac,	// (0x00014100) stacon_top_pane

0x3db6,	// (0x0001410a) status_pane_ParamLimits

0x3db6,	// (0x0001410a) status_pane

0xd155,	// (0x0001d4a9) status_small_pane

0x2261,	// (0x000125b5) control_pane

0x2261,	// (0x000125b5) stacon_bottom_pane

0x3050,	// (0x000133a4) scroll_pane_cp121

0x3047,	// (0x0001339b) set_content_pane

0x3c32,	// (0x00013f86) bg_active_tab_pane_g1_cp1

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp1

0x3c44,	// (0x00013f98) bg_active_tab_pane_g3_cp1

0x3c32,	// (0x00013f86) bg_passive_tab_pane_g1_cp1

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp1

0x3c44,	// (0x00013f98) bg_passive_tab_pane_g3_cp1

0x3c4d,	// (0x00013fa1) bg_active_tab_pane_g1_cp2

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp2

0x3c56,	// (0x00013faa) bg_active_tab_pane_g3_cp2

0x3c4d,	// (0x00013fa1) bg_passive_tab_pane_g1_cp2

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp2

0x3c56,	// (0x00013faa) bg_passive_tab_pane_g3_cp2

0x3c5f,	// (0x00013fb3) bg_active_tab_pane_g1_cp3

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp3

0x3c68,	// (0x00013fbc) bg_active_tab_pane_g3_cp3

0x3c5f,	// (0x00013fb3) bg_passive_tab_pane_g1_cp3

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp3

0x3c68,	// (0x00013fbc) bg_passive_tab_pane_g3_cp3

0x3c71,	// (0x00013fc5) bg_active_tab_pane_g1_cp4

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp4

0x3c7c,	// (0x00013fd0) bg_active_tab_pane_g3_cp4

0x3c71,	// (0x00013fc5) bg_passive_tab_pane_g1_cp4

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp4

0x3c7c,	// (0x00013fd0) bg_passive_tab_pane_g3_cp4

0x3cc5,	// (0x00014019) bg_active_tab_pane_g1_cp5

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp5

0x3cce,	// (0x00014022) bg_active_tab_pane_g3_cp5

0x3cc5,	// (0x00014019) bg_passive_tab_pane_g1_cp5

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp5

0x3cce,	// (0x00014022) bg_passive_tab_pane_g3_cp5

0x65dd,	// (0x00016931) list_set_graphic_pane_ParamLimits

0x65dd,	// (0x00016931) list_set_graphic_pane

0x2261,	// (0x000125b5) bg_set_opt_pane_cp4

0x3cf7,	// (0x0001404b) list_set_graphic_pane_g1_ParamLimits

0x3cf7,	// (0x0001404b) list_set_graphic_pane_g1

0x3d03,	// (0x00014057) list_set_graphic_pane_g2_ParamLimits

0x3d03,	// (0x00014057) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0001fa7d) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0001fa7d) list_set_graphic_pane_g

0x0009,

0xfa9e,	// (0x0001fdf2) volume_small_pane_cp_g

0x3d27,	// (0x0001407b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3d27,	// (0x0001407b) list_double2_large_graphic_pane_g1_cp2

0x3d33,	// (0x00014087) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3d33,	// (0x00014087) list_double2_large_graphic_pane_g2_cp2

0x3d44,	// (0x00014098) list_double2_large_graphic_pane_g3_cp2

0x3d4c,	// (0x000140a0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3d4c,	// (0x000140a0) list_double2_large_graphic_pane_t1_cp2

0x3d62,	// (0x000140b6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3d62,	// (0x000140b6) list_double2_large_graphic_pane_t2_cp2

0x5a47,	// (0x00015d9b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5a47,	// (0x00015d9b) list_double_large_graphic_pane_g1_cp2

0x5a58,	// (0x00015dac) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5a58,	// (0x00015dac) list_double_large_graphic_pane_g2_cp2

0x3edd,	// (0x00014231) list_double_large_graphic_pane_g3_cp2

0x5a69,	// (0x00015dbd) list_double_large_graphic_pane_g4_cp

0x5a71,	// (0x00015dc5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5a71,	// (0x00015dc5) list_double_large_graphic_pane_t1_cp2

0x5a88,	// (0x00015ddc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5a88,	// (0x00015ddc) list_double_large_graphic_pane_t2_cp2

0x3dcf,	// (0x00014123) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3dcf,	// (0x00014123) list_double2_graphic_pane_g1_cp2

0x3ddd,	// (0x00014131) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3ddd,	// (0x00014131) list_double2_graphic_pane_g2_cp2

0x3dee,	// (0x00014142) list_double2_graphic_pane_g3_cp2

0x3df8,	// (0x0001414c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3df8,	// (0x0001414c) list_double2_graphic_pane_t1_cp2

0x3e0e,	// (0x00014162) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e0e,	// (0x00014162) list_double2_graphic_pane_t2_cp2

0x3e20,	// (0x00014174) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3e20,	// (0x00014174) list_single_number_heading_pane_g1_cp2

0x3e2c,	// (0x00014180) list_single_number_heading_pane_g2_cp2

0x3e34,	// (0x00014188) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3e34,	// (0x00014188) list_single_number_heading_pane_t1_cp2

0x3e4a,	// (0x0001419e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3e4a,	// (0x0001419e) list_single_number_heading_pane_t2_cp2

0x3e5c,	// (0x000141b0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3e5c,	// (0x000141b0) list_single_number_heading_pane_t3_cp2

0x3e20,	// (0x00014174) list_single_heading_pane_g1_cp2_ParamLimits

0x3e20,	// (0x00014174) list_single_heading_pane_g1_cp2

0x3e2c,	// (0x00014180) list_single_heading_pane_g2_cp2

0x3e34,	// (0x00014188) list_single_heading_pane_t1_cp2_ParamLimits

0x3e34,	// (0x00014188) list_single_heading_pane_t1_cp2

0x584f,	// (0x00015ba3) list_single_heading_pane_t2_cp2_ParamLimits

0x584f,	// (0x00015ba3) list_single_heading_pane_t2_cp2

0x5797,	// (0x00015aeb) list_double_graphic_pane_g1_cp2_ParamLimits

0x5797,	// (0x00015aeb) list_double_graphic_pane_g1_cp2

0x57a3,	// (0x00015af7) list_double_graphic_pane_g2_cp2_ParamLimits

0x57a3,	// (0x00015af7) list_double_graphic_pane_g2_cp2

0x57b2,	// (0x00015b06) list_double_graphic_pane_g3_cp2

0x57ba,	// (0x00015b0e) list_double_graphic_pane_t1_cp2_ParamLimits

0x57ba,	// (0x00015b0e) list_double_graphic_pane_t1_cp2

0x57d0,	// (0x00015b24) list_double_graphic_pane_t2_cp2_ParamLimits

0x57d0,	// (0x00015b24) list_double_graphic_pane_t2_cp2

0x3ed1,	// (0x00014225) list_double_number_pane_g1_cp2_ParamLimits

0x3ed1,	// (0x00014225) list_double_number_pane_g1_cp2

0x3edd,	// (0x00014231) list_double_number_pane_g2_cp2

0x575b,	// (0x00015aaf) list_double_number_pane_t1_cp2_ParamLimits

0x575b,	// (0x00015aaf) list_double_number_pane_t1_cp2

0x576f,	// (0x00015ac3) list_double_number_pane_t2_cp2_ParamLimits

0x576f,	// (0x00015ac3) list_double_number_pane_t2_cp2

0x5785,	// (0x00015ad9) list_double_number_pane_t3_cp2_ParamLimits

0x5785,	// (0x00015ad9) list_double_number_pane_t3_cp2

0x5644,	// (0x00015998) list_single_graphic_pane_g1_cp2_ParamLimits

0x5644,	// (0x00015998) list_single_graphic_pane_g1_cp2

0x3f35,	// (0x00014289) list_single_graphic_pane_g2_cp2_ParamLimits

0x3f35,	// (0x00014289) list_single_graphic_pane_g2_cp2

0x3f41,	// (0x00014295) list_single_graphic_pane_g3_cp2

0x561a,	// (0x0001596e) list_single_graphic_pane_t1_cp2_ParamLimits

0x561a,	// (0x0001596e) list_single_graphic_pane_t1_cp2

0x3f35,	// (0x00014289) list_single_number_pane_g1_cp2_ParamLimits

0x3f35,	// (0x00014289) list_single_number_pane_g1_cp2

0x3f41,	// (0x00014295) list_single_number_pane_g2_cp2

0x561a,	// (0x0001596e) list_single_number_pane_t1_cp2_ParamLimits

0x561a,	// (0x0001596e) list_single_number_pane_t1_cp2

0x5630,	// (0x00015984) list_single_number_pane_t2_cp2_ParamLimits

0x5630,	// (0x00015984) list_single_number_pane_t2_cp2

0x3d33,	// (0x00014087) list_double2_pane_g1_cp2_ParamLimits

0x3d33,	// (0x00014087) list_double2_pane_g1_cp2

0x3d44,	// (0x00014098) list_double2_pane_g2_cp2

0x3ea9,	// (0x000141fd) list_double2_pane_t1_cp2_ParamLimits

0x3ea9,	// (0x000141fd) list_double2_pane_t1_cp2

0x3ebf,	// (0x00014213) list_double2_pane_t2_cp2_ParamLimits

0x3ebf,	// (0x00014213) list_double2_pane_t2_cp2

0x3ed1,	// (0x00014225) list_double_pane_g1_cp2_ParamLimits

0x3ed1,	// (0x00014225) list_double_pane_g1_cp2

0x3edd,	// (0x00014231) list_double_pane_g2_cp2

0x3ee5,	// (0x00014239) list_double_pane_t1_cp2_ParamLimits

0x3ee5,	// (0x00014239) list_double_pane_t1_cp2

0x3efb,	// (0x0001424f) list_double_pane_t2_cp2_ParamLimits

0x3efb,	// (0x0001424f) list_double_pane_t2_cp2

0x3f25,	// (0x00014279) list_single_pane_cp2_g3

0x3f35,	// (0x00014289) list_single_pane_g1_cp2_ParamLimits

0x3f35,	// (0x00014289) list_single_pane_g1_cp2

0x3f41,	// (0x00014295) list_single_pane_g2_cp2

0x3f49,	// (0x0001429d) list_single_pane_t1_cp2_ParamLimits

0x3f49,	// (0x0001429d) list_single_pane_t1_cp2

0x3f61,	// (0x000142b5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3f61,	// (0x000142b5) list_single_large_graphic_pane_g1_cp2

0x2b9b,	// (0x00012eef) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2b9b,	// (0x00012eef) list_single_large_graphic_pane_g2_cp2

0x3f6d,	// (0x000142c1) list_single_large_graphic_pane_g3_cp2

0x3f75,	// (0x000142c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3f75,	// (0x000142c9) list_single_large_graphic_pane_g4_cp1

0x3f8f,	// (0x000142e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3f8f,	// (0x000142e3) list_single_large_graphic_pane_t1_cp2

0x55e6,	// (0x0001593a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x55e6,	// (0x0001593a) list_single_graphic_heading_pane_g1_cp2

0x55b3,	// (0x00015907) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x55b3,	// (0x00015907) list_single_graphic_heading_pane_g4_cp2

0x3f41,	// (0x00014295) list_single_graphic_heading_pane_g5_cp2

0x55f2,	// (0x00015946) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x55f2,	// (0x00015946) list_single_graphic_heading_pane_t1_cp2

0x5608,	// (0x0001595c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5608,	// (0x0001595c) list_single_graphic_heading_pane_t2_cp2

0x55a7,	// (0x000158fb) list_single_2graphic_pane_g1_cp2_ParamLimits

0x55a7,	// (0x000158fb) list_single_2graphic_pane_g1_cp2

0x55b3,	// (0x00015907) list_single_2graphic_pane_g2_cp2_ParamLimits

0x55b3,	// (0x00015907) list_single_2graphic_pane_g2_cp2

0x3f41,	// (0x00014295) list_single_2graphic_pane_g3_cp2

0x55c4,	// (0x00015918) list_single_2graphic_pane_g4_cp2_ParamLimits

0x55c4,	// (0x00015918) list_single_2graphic_pane_g4_cp2

0x55d0,	// (0x00015924) list_single_2graphic_pane_t1_cp2_ParamLimits

0x55d0,	// (0x00015924) list_single_2graphic_pane_t1_cp2

0xeb7a,	// (0x0001eece) list_highlight_pane_g10_cp1

0x517f,	// (0x000154d3) list_highlight_pane_g1_cp1

0x5187,	// (0x000154db) list_highlight_pane_g2_cp1

0x518f,	// (0x000154e3) list_highlight_pane_g3_cp1

0x5197,	// (0x000154eb) list_highlight_pane_g4_cp1

0x519f,	// (0x000154f3) list_highlight_pane_g5_cp1

0x51a7,	// (0x000154fb) list_highlight_pane_g6_cp1

0x51af,	// (0x00015503) list_highlight_pane_g7_cp1

0x51b7,	// (0x0001550b) list_highlight_pane_g8_cp1

0x51bf,	// (0x00015513) list_highlight_pane_g9_cp1

0xd7c6,	// (0x0001db1a) form_field_slider_pane_t3

0xd7d4,	// (0x0001db28) form_field_slider_pane_t4

0x50bb,	// (0x0001540f) slider_form_pane_ParamLimits

0x50bb,	// (0x0001540f) slider_form_pane

0x2261,	// (0x000125b5) control_abbreviations

0x2261,	// (0x000125b5) control_conventions

0x2261,	// (0x000125b5) control_definitions

0x2261,	// (0x000125b5) format_table_attribute

0x5899,	// (0x00015bed) bg_popup_preview_window_pane_g9

0x2261,	// (0x000125b5) format_table_data2

0x2261,	// (0x000125b5) format_table_data3

0x2261,	// (0x000125b5) format_table_data_example

0x0008,

0x2261,	// (0x000125b5) intro_purpose

0xf8c0,	// (0x0001fc14) bg_popup_preview_window_pane_g

0x2261,	// (0x000125b5) texts_category

0x2261,	// (0x000125b5) texts_graphics

0x3fa5,	// (0x000142f9) text_digital

0x3fb4,	// (0x00014308) text_primary

0x3fc3,	// (0x00014317) text_primary_small

0x3fd2,	// (0x00014326) text_secondary

0x3fe1,	// (0x00014335) text_title

0x60bf,	// (0x00016413) bg_passive_tab_pane_g1_cp3_srt

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp3_srt

0x60c8,	// (0x0001641c) bg_passive_tab_pane_g3_cp3_srt

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp3_srt_ParamLimits

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp3_srt

0x60d1,	// (0x00016425) tabs_4_active_pane_srt_g1

0xdb6f,	// (0x0001dec3) tabs_4_active_pane_srt_t1_ParamLimits

0xdb6f,	// (0x0001dec3) tabs_4_active_pane_srt_t1

0x60bf,	// (0x00016413) bg_active_tab_pane_g1_cp3_copy1

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp3_copy1

0x60c8,	// (0x0001641c) bg_active_tab_pane_g3_cp3_copy1

0x2341,	// (0x00012695) tabs_2_long_active_pane_srt_ParamLimits

0x2341,	// (0x00012695) tabs_2_long_active_pane_srt

0x2341,	// (0x00012695) tabs_2_long_passive_pane_srt_ParamLimits

0x2341,	// (0x00012695) tabs_2_long_passive_pane_srt

0x431c,	// (0x00014670) bg_passive_tab_pane_cp4_srt_ParamLimits

0x431c,	// (0x00014670) bg_passive_tab_pane_cp4_srt

0x5cd9,	// (0x0001602d) bg_passive_tab_pane_g1_cp4_srt

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp4_srt

0x5ce2,	// (0x00016036) bg_passive_tab_pane_g3_cp4_srt

0x2341,	// (0x00012695) bg_active_tab_pane_cp4_srt_ParamLimits

0x2341,	// (0x00012695) bg_active_tab_pane_cp4_srt

0xd931,	// (0x0001dc85) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd931,	// (0x0001dc85) tabs_2_long_active_pane_srt_t1

0x5cd9,	// (0x0001602d) bg_active_tab_pane_g1_cp4_srt

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp4_srt

0x5ce2,	// (0x00016036) bg_active_tab_pane_g3_cp4_srt

0x25d6,	// (0x0001292a) tabs_3_long_active_pane_srt_ParamLimits

0x25d6,	// (0x0001292a) tabs_3_long_active_pane_srt

0x25d6,	// (0x0001292a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x25d6,	// (0x0001292a) tabs_3_long_passive_pane_cp_srt

0x25d6,	// (0x0001292a) tabs_3_long_passive_pane_srt_ParamLimits

0x25d6,	// (0x0001292a) tabs_3_long_passive_pane_srt

0x431c,	// (0x00014670) bg_passive_tab_pane_cp5_srt_ParamLimits

0x431c,	// (0x00014670) bg_passive_tab_pane_cp5_srt

0x3cc5,	// (0x00014019) bg_passive_tab_pane_g1_cp5_srt

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp5_srt

0x3cce,	// (0x00014022) bg_passive_tab_pane_g3_cp5_srt

0x2341,	// (0x00012695) bg_active_tab_pane_cp5_srt_ParamLimits

0x2341,	// (0x00012695) bg_active_tab_pane_cp5_srt

0xd91b,	// (0x0001dc6f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd91b,	// (0x0001dc6f) tabs_3_long_active_pane_srt_t1

0x3cc5,	// (0x00014019) bg_active_tab_pane_g1_cp5_srt

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp5_srt

0x3cce,	// (0x00014022) bg_active_tab_pane_g3_cp5_srt

0x5cb9,	// (0x0001600d) navi_text_pane_srt_t1

0x5cb1,	// (0x00016005) navi_icon_pane_srt_g1

0x41b6,	// (0x0001450a) midp_editing_number_pane_srt

0x3ff0,	// (0x00014344) midp_ticker_pane_srt

0x41be,	// (0x00014512) midp_ticker_pane_srt_g1

0x41c6,	// (0x0001451a) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0001fa9c) midp_ticker_pane_srt_g

0x41ce,	// (0x00014522) midp_ticker_pane_srt_t1

0x5ca2,	// (0x00015ff6) midp_editing_number_pane_t1_copy1

0xd183,	// (0x0001d4d7) listscroll_midp_pane

0xd183,	// (0x0001d4d7) midp_form_pane

0x4068,	// (0x000143bc) midp_info_popup_window_ParamLimits

0x4068,	// (0x000143bc) midp_info_popup_window

0x33e1,	// (0x00013735) bg_popup_sub_pane_cp50_ParamLimits

0x33e1,	// (0x00013735) bg_popup_sub_pane_cp50

0x4da3,	// (0x000150f7) listscroll_midp_info_pane_ParamLimits

0x4da3,	// (0x000150f7) listscroll_midp_info_pane

0x4d83,	// (0x000150d7) listscroll_form_midp_pane_ParamLimits

0x4d83,	// (0x000150d7) listscroll_form_midp_pane

0x4d8f,	// (0x000150e3) scroll_bar_cp050

0x4d83,	// (0x000150d7) list_midp_pane

0x6e54,	// (0x000171a8) signal_pane_g2_cp

0x4c9d,	// (0x00014ff1) listscroll_midp_info_pane_t1_ParamLimits

0x4c9d,	// (0x00014ff1) listscroll_midp_info_pane_t1

0x4cb5,	// (0x00015009) listscroll_midp_info_pane_t2_ParamLimits

0x4cb5,	// (0x00015009) listscroll_midp_info_pane_t2

0x4cf3,	// (0x00015047) listscroll_midp_info_pane_t3_ParamLimits

0x4cf3,	// (0x00015047) listscroll_midp_info_pane_t3

0x4d2d,	// (0x00015081) listscroll_midp_info_pane_t4_ParamLimits

0x4d2d,	// (0x00015081) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x0001fb4f) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x0001fb4f) listscroll_midp_info_pane_t

0x3442,	// (0x00013796) scroll_pane_cp21

0x4c3b,	// (0x00014f8f) form_midp_field_choice_group_pane

0x4c44,	// (0x00014f98) form_midp_field_text_pane

0x4c83,	// (0x00014fd7) form_midp_field_time_pane

0x4c8b,	// (0x00014fdf) form_midp_gauge_slider_pane

0x4c94,	// (0x00014fe8) form_midp_gauge_wait_pane

0x2261,	// (0x000125b5) form_midp_image_pane

0xd7b0,	// (0x0001db04) list_single_midp_pane_ParamLimits

0xd7b0,	// (0x0001db04) list_single_midp_pane

0xd78f,	// (0x0001dae3) form_midp_field_text_pane_t1

0x4986,	// (0x00014cda) input_focus_pane_cp050

0x4bfc,	// (0x00014f50) list_midp_form_text_pane

0x4b94,	// (0x00014ee8) form_midp_field_choice_group_pane_t1

0x4ba2,	// (0x00014ef6) input_focus_pane_cp051

0x4bb6,	// (0x00014f0a) list_midp_choice_pane

0x2261,	// (0x000125b5) status_idle_pane

0x4b78,	// (0x00014ecc) form_midp_field_time_pane_t1

0xeb7a,	// (0x0001eece) wait_anim_pane_g2_copy1

0x4b86,	// (0x00014eda) form_midp_field_time_pane_t2

0x0001,

0x4116,	// (0x0001446a) aid_navinavi_width_2_pane

0xf7f6,	// (0x0001fb4a) form_midp_field_time_pane_t

0x2261,	// (0x000125b5) input_focus_pane_cp052

0x2261,	// (0x000125b5) bg_input_focus_pane_cp040

0x4b38,	// (0x00014e8c) form_midp_gauge_slider_pane_t1

0x4b46,	// (0x00014e9a) form_midp_gauge_slider_pane_t2

0xd773,	// (0x0001dac7) form_midp_gauge_slider_pane_t3

0xd781,	// (0x0001dad5) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x0001fb41) form_midp_gauge_slider_pane_t

0x4b70,	// (0x00014ec4) form_midp_slider_pane

0x2341,	// (0x00012695) bg_input_focus_pane_cp041_ParamLimits

0x2341,	// (0x00012695) bg_input_focus_pane_cp041

0x4b05,	// (0x00014e59) form_midp_gauge_wait_pane_t1_ParamLimits

0x4b05,	// (0x00014e59) form_midp_gauge_wait_pane_t1

0x4b17,	// (0x00014e6b) form_midp_gauge_wait_pane_t2_ParamLimits

0x4b17,	// (0x00014e6b) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x0001fb3c) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x0001fb3c) form_midp_gauge_wait_pane_t

0x4b29,	// (0x00014e7d) form_midp_wait_pane_ParamLimits

0x4b29,	// (0x00014e7d) form_midp_wait_pane

0x4acf,	// (0x00014e23) form_midp_image_pane_g1

0x4ad8,	// (0x00014e2c) form_midp_image_pane_t1

0x4ae7,	// (0x00014e3b) form_midp_image_pane_t2

0x4af6,	// (0x00014e4a) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x0001fb35) form_midp_image_pane_t

0x4ab7,	// (0x00014e0b) list_single_midp_pane_g1

0x4ac0,	// (0x00014e14) list_single_midp_pane_t1

0xd75f,	// (0x0001dab3) list_midp_form_item_pane_ParamLimits

0xd75f,	// (0x0001dab3) list_midp_form_item_pane

0x40be,	// (0x00014412) list_midp_form_item_pane_t1

0x40cd,	// (0x00014421) midp_ticker_pane_g1

0x40d9,	// (0x0001442d) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001fa82) midp_ticker_pane_g

0x40e5,	// (0x00014439) midp_ticker_pane_t1

0x5f26,	// (0x0001627a) midp_editing_number_pane_t1

0x5f04,	// (0x00016258) midp_editing_number_pane

0x5f13,	// (0x00016267) midp_ticker_pane

0x5c80,	// (0x00015fd4) ai_message_heading_pane

0x2261,	// (0x000125b5) bg_popup_window_pane_cp14

0x5c88,	// (0x00015fdc) listscroll_ai_message_pane

0x5c0a,	// (0x00015f5e) ai_message_heading_pane_g1_ParamLimits

0x5c0a,	// (0x00015f5e) ai_message_heading_pane_g1

0x5c16,	// (0x00015f6a) ai_message_heading_pane_g2_ParamLimits

0x5c16,	// (0x00015f6a) ai_message_heading_pane_g2

0x5c22,	// (0x00015f76) ai_message_heading_pane_g3_ParamLimits

0x5c22,	// (0x00015f76) ai_message_heading_pane_g3

0x5c2e,	// (0x00015f82) ai_message_heading_pane_g4_ParamLimits

0x5c2e,	// (0x00015f82) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x0001fc76) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x0001fc76) ai_message_heading_pane_g

0x5c3a,	// (0x00015f8e) ai_message_heading_pane_t1_ParamLimits

0x5c3a,	// (0x00015f8e) ai_message_heading_pane_t1

0x5c54,	// (0x00015fa8) ai_message_heading_pane_t2_ParamLimits

0x5c54,	// (0x00015fa8) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x0001fc7f) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x0001fc7f) ai_message_heading_pane_t

0x5c66,	// (0x00015fba) bg_popup_heading_pane_cp1_ParamLimits

0x5c66,	// (0x00015fba) bg_popup_heading_pane_cp1

0x5bf8,	// (0x00015f4c) list_ai_message_pane_ParamLimits

0x5bf8,	// (0x00015f4c) list_ai_message_pane

0x3442,	// (0x00013796) scroll_pane_cp10

0x5b94,	// (0x00015ee8) list_ai_message_pane_g1

0x5b9c,	// (0x00015ef0) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x0001fc53) list_ai_message_pane_g

0x5ba4,	// (0x00015ef8) list_ai_message_pane_t1_ParamLimits

0x5ba4,	// (0x00015ef8) list_ai_message_pane_t1

0x5bb9,	// (0x00015f0d) list_ai_message_pane_t2_ParamLimits

0x5bb9,	// (0x00015f0d) list_ai_message_pane_t2

0x5bce,	// (0x00015f22) list_ai_message_pane_t3_ParamLimits

0x5bce,	// (0x00015f22) list_ai_message_pane_t3

0x5be3,	// (0x00015f37) list_ai_message_pane_t4_ParamLimits

0x5be3,	// (0x00015f37) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x0001fc58) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x0001fc58) list_ai_message_pane_t

0xd8fa,	// (0x0001dc4e) cell_ai_soft_ind_pane_ParamLimits

0xd8fa,	// (0x0001dc4e) cell_ai_soft_ind_pane

0x40f7,	// (0x0001444b) cell_ai_soft_ind_pane_g1_ParamLimits

0x40f7,	// (0x0001444b) cell_ai_soft_ind_pane_g1

0x2261,	// (0x000125b5) grid_highlight_cp1

0x4104,	// (0x00014458) text_secondary_cp56_ParamLimits

0x4104,	// (0x00014458) text_secondary_cp56

0x5b54,	// (0x00015ea8) example_general_pane_ParamLimits

0x5b54,	// (0x00015ea8) example_general_pane

0x5b60,	// (0x00015eb4) example_parent_pane_g1_ParamLimits

0x5b60,	// (0x00015eb4) example_parent_pane_g1

0x5b6c,	// (0x00015ec0) example_parent_pane_t1_ParamLimits

0x5b6c,	// (0x00015ec0) example_parent_pane_t1

0xbd4e,	// (0x0001c0a2) popup_preview_text_window_ParamLimits

0xbd4e,	// (0x0001c0a2) popup_preview_text_window

0x3f2d,	// (0x00014281) list_single_pane_cp2_g4

0x26b2,	// (0x00012a06) bg_popup_preview_window_pane_ParamLimits

0x26b2,	// (0x00012a06) bg_popup_preview_window_pane

0x58a1,	// (0x00015bf5) popup_preview_text_window_t1_ParamLimits

0x58a1,	// (0x00015bf5) popup_preview_text_window_t1

0x58bf,	// (0x00015c13) popup_preview_text_window_t2_ParamLimits

0x58bf,	// (0x00015c13) popup_preview_text_window_t2

0x5908,	// (0x00015c5c) popup_preview_text_window_t3_ParamLimits

0x5908,	// (0x00015c5c) popup_preview_text_window_t3

0x594d,	// (0x00015ca1) popup_preview_text_window_t4_ParamLimits

0x594d,	// (0x00015ca1) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x0001fc27) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x0001fc27) popup_preview_text_window_t

0x59cb,	// (0x00015d1f) scroll_pane_cp11

0x4864,	// (0x00014bb8) bg_popup_preview_window_pane_g1

0x5861,	// (0x00015bb5) bg_popup_preview_window_pane_g2

0x5869,	// (0x00015bbd) bg_popup_preview_window_pane_g3

0x5871,	// (0x00015bc5) bg_popup_preview_window_pane_g4

0x5879,	// (0x00015bcd) bg_popup_preview_window_pane_g5

0x5881,	// (0x00015bd5) bg_popup_preview_window_pane_g6

0x5889,	// (0x00015bdd) bg_popup_preview_window_pane_g7

0x5891,	// (0x00015be5) bg_popup_preview_window_pane_g8

0xf36e,	// (0x0001f6c2) aid_popup_width_pane

0xbcca,	// (0x0001c01e) popup_midp_note_alarm_window_ParamLimits

0xbcca,	// (0x0001c01e) popup_midp_note_alarm_window

0x3111,	// (0x00013465) data_form_pane_ParamLimits

0xce69,	// (0x0001d1bd) form_field_data_pane_g1

0xce73,	// (0x0001d1c7) form_field_data_pane_t1_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_ParamLimits

0x314d,	// (0x000134a1) data_form_wide_pane_ParamLimits

0x3159,	// (0x000134ad) form_field_data_wide_pane_g1

0x3185,	// (0x000134d9) form_field_data_wide_pane_t1_ParamLimits

0x2959,	// (0x00012cad) input_focus_pane_cp6_ParamLimits

0xcf70,	// (0x0001d2c4) input_popup_find_pane_g1_ParamLimits

0xcf70,	// (0x0001d2c4) input_popup_find_pane_g1

0x01ec,	// (0x00010540) aid_navi_side_left_pane

0x0201,	// (0x00010555) aid_navi_side_right_pane

0x527a,	// (0x000155ce) bg_popup_window_pane_cp30_ParamLimits

0x527a,	// (0x000155ce) bg_popup_window_pane_cp30

0x52f4,	// (0x00015648) popup_midp_note_alarm_window_g1_ParamLimits

0x52f4,	// (0x00015648) popup_midp_note_alarm_window_g1

0x5324,	// (0x00015678) popup_midp_note_alarm_window_t1_ParamLimits

0x5324,	// (0x00015678) popup_midp_note_alarm_window_t1

0x53c5,	// (0x00015719) popup_midp_note_alarm_window_t2_ParamLimits

0x53c5,	// (0x00015719) popup_midp_note_alarm_window_t2

0x5473,	// (0x000157c7) popup_midp_note_alarm_window_t3_ParamLimits

0x5473,	// (0x000157c7) popup_midp_note_alarm_window_t3

0x54a5,	// (0x000157f9) popup_midp_note_alarm_window_t4_ParamLimits

0x54a5,	// (0x000157f9) popup_midp_note_alarm_window_t4

0x54cb,	// (0x0001581f) popup_midp_note_alarm_window_t5_ParamLimits

0x54cb,	// (0x0001581f) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x0001fbc4) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x0001fbc4) popup_midp_note_alarm_window_t

0x5577,	// (0x000158cb) wait_bar_pane_cp1_ParamLimits

0x5577,	// (0x000158cb) wait_bar_pane_cp1

0x2261,	// (0x000125b5) wait_anim_pane_copy1

0x2261,	// (0x000125b5) wait_border_pane_copy1

0x4f60,	// (0x000152b4) wait_border_pane_g1_copy1

0x319c,	// (0x000134f0) form_field_popup_pane_g1

0xce8d,	// (0x0001d1e1) form_field_popup_pane_t1_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_cp7_ParamLimits

0x31bc,	// (0x00013510) list_form_pane_ParamLimits

0x31c8,	// (0x0001351c) form_field_popup_wide_pane_g1

0x31d0,	// (0x00013524) form_field_popup_wide_pane_t1_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_cp8_ParamLimits

0x31e2,	// (0x00013536) list_form_wide_pane_ParamLimits

0x6161,	// (0x000164b5) aid_size_cell_graphic_pane

0xcf0c,	// (0x0001d260) data_form_pane_t1_ParamLimits

0xdac4,	// (0x0001de18) data_form_wide_pane_t1_ParamLimits

0xd3e4,	// (0x0001d738) bg_status_flat_pane

0xc788,	// (0x0001cadc) title_pane_t1_ParamLimits

0x2309,	// (0x0001265d) title_pane_t2_ParamLimits

0x232f,	// (0x00012683) title_pane_t3_ParamLimits

0xf532,	// (0x0001f886) title_pane_t_ParamLimits

0x38c3,	// (0x00013c17) level_1_signal_ParamLimits

0x38d5,	// (0x00013c29) level_2_signal_ParamLimits

0x38e8,	// (0x00013c3c) level_3_signal_ParamLimits

0x38fb,	// (0x00013c4f) level_4_signal_ParamLimits

0x390e,	// (0x00013c62) level_5_signal_ParamLimits

0x3921,	// (0x00013c75) level_6_signal_ParamLimits

0x3934,	// (0x00013c88) level_7_signal_ParamLimits

0x38c3,	// (0x00013c17) level_1_battery_ParamLimits

0x38d5,	// (0x00013c29) level_2_battery_ParamLimits

0x38e8,	// (0x00013c3c) level_3_battery_ParamLimits

0x38fb,	// (0x00013c4f) level_4_battery_ParamLimits

0x390e,	// (0x00013c62) level_5_battery_ParamLimits

0x3921,	// (0x00013c75) level_6_battery_ParamLimits

0x3934,	// (0x00013c88) level_7_battery_ParamLimits

0x517f,	// (0x000154d3) bg_status_flat_pane_g1

0x5187,	// (0x000154db) bg_status_flat_pane_g2

0x518f,	// (0x000154e3) bg_status_flat_pane_g3

0x5197,	// (0x000154eb) bg_status_flat_pane_g4

0x519f,	// (0x000154f3) bg_status_flat_pane_g5

0x51a7,	// (0x000154fb) bg_status_flat_pane_g6

0x51af,	// (0x00015503) bg_status_flat_pane_g7

0xc814,	// (0x0001cb68) tabs_3_active_pane_t1_ParamLimits

0xc814,	// (0x0001cb68) tabs_3_passive_pane_t1_ParamLimits

0xc826,	// (0x0001cb7a) tabs_4_active_pane_t1_ParamLimits

0xc826,	// (0x0001cb7a) tabs_4_1_passive_pane_t1_ParamLimits

0xcf7e,	// (0x0001d2d2) tabs_2_active_pane_t1_ParamLimits

0xcf7e,	// (0x0001d2d2) tabs_2_passive_pane_t1_ParamLimits

0x2341,	// (0x00012695) bg_active_tab_pane_cp4_ParamLimits

0xcf90,	// (0x0001d2e4) tabs_2_long_active_pane_t1_ParamLimits

0x431c,	// (0x00014670) bg_passive_tab_pane_cp4_ParamLimits

0x0db1,	// (0x00011105) list_single_midp_graphic_pane_t1_ParamLimits

0x2341,	// (0x00012695) bg_active_tab_pane_cp5_ParamLimits

0xcfa3,	// (0x0001d2f7) tabs_3_long_active_pane_t1_ParamLimits

0x431c,	// (0x00014670) bg_passive_tab_pane_cp5_ParamLimits

0x0db1,	// (0x00011105) list_single_midp_graphic_pane_t1

0xd3e4,	// (0x0001d738) bg_status_flat_pane_ParamLimits

0x44de,	// (0x00014832) indicator_pane_cp2_ParamLimits

0x44de,	// (0x00014832) indicator_pane_cp2

0xd562,	// (0x0001d8b6) navi_pane_srt_ParamLimits

0xd562,	// (0x0001d8b6) navi_pane_srt

0x462d,	// (0x00014981) popup_clock_digital_analogue_window_cp1

0x2438,	// (0x0001278c) indicator_pane_t1

0x3ff0,	// (0x00014344) copy_highlight_pane

0x3ff0,	// (0x00014344) cursor_graphics_pane

0x3ff0,	// (0x00014344) graphic_within_text_pane

0x3ff0,	// (0x00014344) link_highlight_pane

0x598e,	// (0x00015ce2) popup_preview_text_window_t5_ParamLimits

0x598e,	// (0x00015ce2) popup_preview_text_window_t5

0x411e,	// (0x00014472) cursor_digital_pane

0x411e,	// (0x00014472) cursor_primary_pane

0x412f,	// (0x00014483) cursor_primary_small_pane

0x4137,	// (0x0001448b) cursor_secondary_pane

0x413f,	// (0x00014493) cursor_title_pane

0x411e,	// (0x00014472) link_highlight_digital_pane

0x4126,	// (0x0001447a) link_highlight_primary_pane

0x412f,	// (0x00014483) link_highlight_primary_small_pane

0x4137,	// (0x0001448b) link_highlight_secondary_pane

0x413f,	// (0x00014493) link_highlight_title_pane

0x411e,	// (0x00014472) copy_highlight_digital_pane

0x411e,	// (0x00014472) copy_highlight_primary_pane

0x412f,	// (0x00014483) copy_highlight_primary_small_pane

0x4137,	// (0x0001448b) copy_highlight_secondary_pane

0x413f,	// (0x00014493) copy_highlight_title_pane

0x4137,	// (0x0001448b) graphic_text_digital_pane

0x521d,	// (0x00015571) graphic_text_primary_pane

0x5226,	// (0x0001557a) graphic_text_primary_small_pane

0x412f,	// (0x00014483) graphic_text_secondary_pane

0x411e,	// (0x00014472) graphic_text_title_pane

0xd228,	// (0x0001d57c) cursor_primary_pane_g1

0x520f,	// (0x00015563) cursor_text_primary_t1

0xd7f6,	// (0x0001db4a) cursor_primary_small_pane_g1

0x5201,	// (0x00015555) cursor_text_primary_small_t1

0xd7ec,	// (0x0001db40) cursor_primary_small_pane_g1_copy1

0x51e9,	// (0x0001553d) cursor_text_primary_small_t1_copy1

0x51c7,	// (0x0001551b) cursor_text_title_t1

0xd7e2,	// (0x0001db36) cursor_title_pane_g1

0xd228,	// (0x0001d57c) cursor_digital_pane_g1

0x4151,	// (0x000144a5) cursor_text_digital_t1

0x4176,	// (0x000144ca) link_highlight_primary_pane_g1

0x5170,	// (0x000154c4) link_highlight_primary_pane_t1

0x415f,	// (0x000144b3) link_highlight_primary_small_pane_g1

0x4167,	// (0x000144bb) link_highlight_primary_small_pane_t1

0x4176,	// (0x000144ca) link_highlight_secondary_pane_g1

0x417e,	// (0x000144d2) link_highlight_secondary_pane_t1

0x50e4,	// (0x00015438) link_highlight_title_pane_g1

0x50ec,	// (0x00015440) link_highlight_title_pane_t1

0x50cd,	// (0x00015421) link_highlight_digital_pane_g1

0x50d5,	// (0x00015429) link_highlight_digital_pane_t1

0x4fa5,	// (0x000152f9) copy_highlight_primary_pane_g1

0x4fad,	// (0x00015301) copy_highlight_primary_pane_t1

0x4f7f,	// (0x000152d3) copy_highlight_primary_small_pane_g1

0x4f96,	// (0x000152ea) copy_highlight_primary_small_pane_t1

0x418d,	// (0x000144e1) copy_highlight_secondary_pane_g1

0x4195,	// (0x000144e9) copy_highlight_secondary_pane_t1

0x4f7f,	// (0x000152d3) copy_highlight_title_pane_g1

0x4f87,	// (0x000152db) copy_highlight_title_pane_t1

0x4fa5,	// (0x000152f9) copy_highlight_digital_pane_g1

0x632f,	// (0x00016683) copy_highlight_digital_pane_t1

0x6283,	// (0x000165d7) graphic_text_primary_pane_g1

0x6313,	// (0x00016667) graphic_text_primary_pane_t1

0x6321,	// (0x00016675) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001fcf3) graphic_text_primary_pane_t

0x62ef,	// (0x00016643) graphic_text_primary_small_pane_g1

0x62f7,	// (0x0001664b) graphic_text_primary_small_pane_t1

0x6305,	// (0x00016659) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001fcee) graphic_text_primary_small_pane_t

0x62cb,	// (0x0001661f) graphic_text_secondary_pane_g1

0x62d3,	// (0x00016627) graphic_text_secondary_pane_t1

0x62e1,	// (0x00016635) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001fce9) graphic_text_secondary_pane_t

0x62a7,	// (0x000165fb) graphic_text_title_pane_g1

0x62af,	// (0x00016603) graphic_text_title_pane_t1

0x62bd,	// (0x00016611) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001fce4) graphic_text_title_pane_t

0x6283,	// (0x000165d7) graphic_text_digital_pane_g1

0x628b,	// (0x000165df) graphic_text_digital_pane_t1

0x6299,	// (0x000165ed) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001fcdf) graphic_text_digital_pane_t

0x2341,	// (0x00012695) navi_icon_pane_srt_ParamLimits

0x2341,	// (0x00012695) navi_icon_pane_srt

0x2261,	// (0x000125b5) navi_midp_pane_srt

0x2261,	// (0x000125b5) navi_navi_pane_srt

0x2341,	// (0x00012695) navi_text_pane_srt_ParamLimits

0x2341,	// (0x00012695) navi_text_pane_srt

0x624e,	// (0x000165a2) navi_navi_icon_text_pane_srt

0x6256,	// (0x000165aa) navi_navi_pane_srt_g1_ParamLimits

0x6256,	// (0x000165aa) navi_navi_pane_srt_g1

0x6268,	// (0x000165bc) navi_navi_pane_srt_g2_ParamLimits

0x6268,	// (0x000165bc) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x0001fcda) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x0001fcda) navi_navi_pane_srt_g

0x627a,	// (0x000165ce) navi_navi_tabs_pane_srt

0x624e,	// (0x000165a2) navi_navi_text_pane_srt

0x624e,	// (0x000165a2) navi_navi_volume_pane_srt

0x623f,	// (0x00016593) navi_navi_text_pane_srt_t1

0x112b,	// (0x0001147f) navi_navi_volume_pane_srt_g1

0x1133,	// (0x00011487) volume_small_pane_srt_ParamLimits

0x1133,	// (0x00011487) volume_small_pane_srt

0x04cc,	// (0x00010820) volume_small_pane_srt_g1_ParamLimits

0x04cc,	// (0x00010820) volume_small_pane_srt_g1

0x04dc,	// (0x00010830) volume_small_pane_srt_g2_ParamLimits

0x04dc,	// (0x00010830) volume_small_pane_srt_g2

0x04ed,	// (0x00010841) volume_small_pane_srt_g3_ParamLimits

0x04ed,	// (0x00010841) volume_small_pane_srt_g3

0x04fe,	// (0x00010852) volume_small_pane_srt_g4_ParamLimits

0x04fe,	// (0x00010852) volume_small_pane_srt_g4

0x050f,	// (0x00010863) volume_small_pane_srt_g5_ParamLimits

0x050f,	// (0x00010863) volume_small_pane_srt_g5

0x0520,	// (0x00010874) volume_small_pane_srt_g6_ParamLimits

0x0520,	// (0x00010874) volume_small_pane_srt_g6

0x0531,	// (0x00010885) volume_small_pane_srt_g7_ParamLimits

0x0531,	// (0x00010885) volume_small_pane_srt_g7

0x0542,	// (0x00010896) volume_small_pane_srt_g8_ParamLimits

0x0542,	// (0x00010896) volume_small_pane_srt_g8

0x0553,	// (0x000108a7) volume_small_pane_srt_g9_ParamLimits

0x0553,	// (0x000108a7) volume_small_pane_srt_g9

0x0564,	// (0x000108b8) volume_small_pane_srt_g10_ParamLimits

0x0564,	// (0x000108b8) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0001fa87) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0001fa87) volume_small_pane_srt_g

0x275b,	// (0x00012aaf) query_popup_data_pane_cp2

0x6225,	// (0x00016579) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6225,	// (0x00016579) navi_navi_icon_text_pane_srt_t1

0x521d,	// (0x00015571) navi_tabs_2_long_pane_srt

0x521d,	// (0x00015571) navi_tabs_2_pane_srt

0x521d,	// (0x00015571) navi_tabs_3_long_pane_srt

0x521d,	// (0x00015571) navi_tabs_3_pane_srt

0x521d,	// (0x00015571) navi_tabs_4_pane_srt

0x110b,	// (0x0001145f) tabs_2_active_pane_srt_ParamLimits

0x110b,	// (0x0001145f) tabs_2_active_pane_srt

0x111b,	// (0x0001146f) tabs_2_passive_pane_srt_ParamLimits

0x111b,	// (0x0001146f) tabs_2_passive_pane_srt

0x4986,	// (0x00014cda) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4986,	// (0x00014cda) bg_passive_tab_pane_cp1_srt

0x61f1,	// (0x00016545) bg_passive_tab_pane_g1_cp1_srt

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp1_srt

0x61fa,	// (0x0001654e) bg_passive_tab_pane_g3_cp1_srt

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp1_srt_ParamLimits

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp1_srt

0x6203,	// (0x00016557) tabs_2_active_pane_srt_g1

0xdc00,	// (0x0001df54) tabs_2_active_pane_srt_t1_ParamLimits

0xdc00,	// (0x0001df54) tabs_2_active_pane_srt_t1

0x61f1,	// (0x00016545) bg_active_tab_pane_g1_cp1_srt

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp1_srt

0x61fa,	// (0x0001654e) bg_active_tab_pane_g3_cp1_srt

0x10d8,	// (0x0001142c) tabs_3_active_pane_srt_ParamLimits

0x10d8,	// (0x0001142c) tabs_3_active_pane_srt

0x10e9,	// (0x0001143d) tabs_3_passive_pane_cp_srt_ParamLimits

0x10e9,	// (0x0001143d) tabs_3_passive_pane_cp_srt

0x10fa,	// (0x0001144e) tabs_3_passive_pane_srt_ParamLimits

0x10fa,	// (0x0001144e) tabs_3_passive_pane_srt

0x4986,	// (0x00014cda) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4986,	// (0x00014cda) bg_passive_tab_pane_cp2_srt

0x41a4,	// (0x000144f8) bg_passive_tab_pane_g1_cp2_srt

0x3c3b,	// (0x00013f8f) bg_passive_tab_pane_g2_cp2_srt

0x41ad,	// (0x00014501) bg_passive_tab_pane_g3_cp2_srt

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp2_srt_ParamLimits

0x25d6,	// (0x0001292a) bg_active_tab_pane_cp2_srt

0x61d7,	// (0x0001652b) tabs_3_active_pane_srt_g1

0xdbea,	// (0x0001df3e) tabs_3_active_pane_srt_t1_ParamLimits

0xdbea,	// (0x0001df3e) tabs_3_active_pane_srt_t1

0x41a4,	// (0x000144f8) bg_active_tab_pane_g1_cp2_srt

0x3c3b,	// (0x00013f8f) bg_active_tab_pane_g2_cp2_srt

0x41ad,	// (0x00014501) bg_active_tab_pane_g3_cp2_srt

0x1090,	// (0x000113e4) tabs_4_active_pane_srt_ParamLimits

0x1090,	// (0x000113e4) tabs_4_active_pane_srt

0x10a2,	// (0x000113f6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x10a2,	// (0x000113f6) tabs_4_passive_pane_cp2_srt

0x06d3,	// (0x00010a27) aid_size_cell_toolbar

0x5d4a,	// (0x0001609e) main_idle_act_pane_ParamLimits

0x08a0,	// (0x00010bf4) popup_large_graphic_colour_window_ParamLimits

0xbfda,	// (0x0001c32e) popup_toolbar_window_ParamLimits

0xbfda,	// (0x0001c32e) popup_toolbar_window

0x5f50,	// (0x000162a4) list_single_graphic_2heading_pane_ParamLimits

0x5f50,	// (0x000162a4) list_single_graphic_2heading_pane

0x3672,	// (0x000139c6) aid_size_cell_apps_grid_lsc_pane

0x3684,	// (0x000139d8) aid_size_cell_apps_grid_prt_pane

0x431c,	// (0x00014670) bg_wml_button_pane_cp1_ParamLimits

0x431c,	// (0x00014670) bg_wml_button_pane_cp1

0xd78f,	// (0x0001dae3) form_midp_field_text_pane_t1_ParamLimits

0x4986,	// (0x00014cda) input_focus_pane_cp050_ParamLimits

0x4bfc,	// (0x00014f50) list_midp_form_text_pane_ParamLimits

0x4ba2,	// (0x00014ef6) input_focus_pane_cp051_ParamLimits

0x4bb6,	// (0x00014f0a) list_midp_choice_pane_ParamLimits

0xd72d,	// (0x0001da81) list_single_2graphic_pane_cp3_ParamLimits

0xd72d,	// (0x0001da81) list_single_2graphic_pane_cp3

0xd740,	// (0x0001da94) list_single_midp_graphic_pane_ParamLimits

0xd740,	// (0x0001da94) list_single_midp_graphic_pane

0x0cb4,	// (0x00011008) list_single_graphic_2heading_pane_g1_ParamLimits

0x0cb4,	// (0x00011008) list_single_graphic_2heading_pane_g1

0x0cc0,	// (0x00011014) list_single_graphic_2heading_pane_g4_ParamLimits

0x0cc0,	// (0x00011014) list_single_graphic_2heading_pane_g4

0x0ccc,	// (0x00011020) list_single_graphic_2heading_pane_g5_ParamLimits

0x0ccc,	// (0x00011020) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0001fada) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0001fada) list_single_graphic_2heading_pane_g

0x0cd8,	// (0x0001102c) list_single_graphic_2heading_pane_t1_ParamLimits

0x0cd8,	// (0x0001102c) list_single_graphic_2heading_pane_t1

0x0cec,	// (0x00011040) list_single_graphic_2heading_pane_t2_ParamLimits

0x0cec,	// (0x00011040) list_single_graphic_2heading_pane_t2

0x0d08,	// (0x0001105c) list_single_graphic_2heading_pane_t3_ParamLimits

0x0d08,	// (0x0001105c) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001fae1) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001fae1) list_single_graphic_2heading_pane_t

0x478c,	// (0x00014ae0) bg_popup_sub_pane_cp2

0x47b6,	// (0x00014b0a) grid_toobar_pane

0x0d20,	// (0x00011074) cell_toolbar_pane_ParamLimits

0x0d20,	// (0x00011074) cell_toolbar_pane

0x4808,	// (0x00014b5c) cell_toolbar_pane_g1_ParamLimits

0x4808,	// (0x00014b5c) cell_toolbar_pane_g1

0x481c,	// (0x00014b70) cell_toolbar_pane_g2_ParamLimits

0x481c,	// (0x00014b70) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x0001faef) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x0001faef) cell_toolbar_pane_g

0x483e,	// (0x00014b92) grid_highlight_pane_cp2_ParamLimits

0x483e,	// (0x00014b92) grid_highlight_pane_cp2

0x4858,	// (0x00014bac) toolbar_button_pane

0x4864,	// (0x00014bb8) toolbar_button_pane_g1

0x486c,	// (0x00014bc0) toolbar_button_pane_g2

0x4874,	// (0x00014bc8) toolbar_button_pane_g3

0x487c,	// (0x00014bd0) toolbar_button_pane_g4

0x4884,	// (0x00014bd8) toolbar_button_pane_g5

0x488c,	// (0x00014be0) toolbar_button_pane_g6

0x4894,	// (0x00014be8) toolbar_button_pane_g7

0x489c,	// (0x00014bf0) toolbar_button_pane_g8

0x48a4,	// (0x00014bf8) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x0001faf4) toolbar_button_pane_g

0x0d58,	// (0x000110ac) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0d58,	// (0x000110ac) list_single_2graphic_pane_g1_cp3

0xc032,	// (0x0001c386) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc032,	// (0x0001c386) list_single_2graphic_pane_g2_cp3

0x0d75,	// (0x000110c9) list_single_2graphic_pane_g3_cp3

0x0d7d,	// (0x000110d1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d7d,	// (0x000110d1) list_single_2graphic_pane_g4_cp3

0x0d89,	// (0x000110dd) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0d89,	// (0x000110dd) list_single_2graphic_pane_t1_cp3

0x0da5,	// (0x000110f9) list_single_midp_graphic_pane_g2_ParamLimits

0x0da5,	// (0x000110f9) list_single_midp_graphic_pane_g2

0x06db,	// (0x00010a2f) aid_zoom_text_primary

0x06e3,	// (0x00010a37) aid_zoom_text_secondary

0xd280,	// (0x0001d5d4) status_small_pane_g7_ParamLimits

0xd280,	// (0x0001d5d4) status_small_pane_g7

0xd2a3,	// (0x0001d5f7) status_small_pane_t1_ParamLimits

0xc764,	// (0x0001cab8) title_pane_g2

0x0003,

0xf529,	// (0x0001f87d) title_pane_g

0xc9dc,	// (0x0001cd30) aid_size_cell_colour_1_pane_ParamLimits

0xc9dc,	// (0x0001cd30) aid_size_cell_colour_1_pane

0xc9f0,	// (0x0001cd44) aid_size_cell_colour_2_pane_ParamLimits

0xc9f0,	// (0x0001cd44) aid_size_cell_colour_2_pane

0xca04,	// (0x0001cd58) aid_size_cell_colour_3_pane_ParamLimits

0xca04,	// (0x0001cd58) aid_size_cell_colour_3_pane

0xca18,	// (0x0001cd6c) aid_size_cell_colour_4_pane_ParamLimits

0xca18,	// (0x0001cd6c) aid_size_cell_colour_4_pane

0x0129,	// (0x0001047d) title_pane_stacon_g1_ParamLimits

0x0129,	// (0x0001047d) title_pane_stacon_g1

0x5004,	// (0x00015358) popup_note_wait_window_g3_ParamLimits

0x5004,	// (0x00015358) popup_note_wait_window_g3

0x507a,	// (0x000153ce) popup_note_wait_window_t5_ParamLimits

0x507a,	// (0x000153ce) popup_note_wait_window_t5

0x2261,	// (0x000125b5) main_feb_china_hwr_fs_writing_pane

0xb9dc,	// (0x0001bd30) popup_feb_china_hwr_fs_window_ParamLimits

0xb9dc,	// (0x0001bd30) popup_feb_china_hwr_fs_window

0xc043,	// (0x0001c397) aid_size_cell_hwr_fs_ParamLimits

0xc043,	// (0x0001c397) aid_size_cell_hwr_fs

0x4986,	// (0x00014cda) bg_popup_sub_pane_cp3_ParamLimits

0x4986,	// (0x00014cda) bg_popup_sub_pane_cp3

0xc058,	// (0x0001c3ac) grid_hwr_fs_pane_ParamLimits

0xc058,	// (0x0001c3ac) grid_hwr_fs_pane

0x0df4,	// (0x00011148) linegrid_hwr_fs_pane_ParamLimits

0x0df4,	// (0x00011148) linegrid_hwr_fs_pane

0xc070,	// (0x0001c3c4) cell_hwr_fs_pane_ParamLimits

0xc070,	// (0x0001c3c4) cell_hwr_fs_pane

0x4992,	// (0x00014ce6) linegrid_hwr_fs_pane_g1_ParamLimits

0x4992,	// (0x00014ce6) linegrid_hwr_fs_pane_g1

0xd701,	// (0x0001da55) linegrid_hwr_fs_pane_g2_ParamLimits

0xd701,	// (0x0001da55) linegrid_hwr_fs_pane_g2

0x49b0,	// (0x00014d04) linegrid_hwr_fs_pane_g3_ParamLimits

0x49b0,	// (0x00014d04) linegrid_hwr_fs_pane_g3

0x0e26,	// (0x0001117a) linegrid_hwr_fs_pane_g4_ParamLimits

0x0e26,	// (0x0001117a) linegrid_hwr_fs_pane_g4

0x0e40,	// (0x00011194) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e40,	// (0x00011194) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x0001fb1a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x0001fb1a) linegrid_hwr_fs_pane_g

0x49bc,	// (0x00014d10) cell_hwr_fs_pane_g1_ParamLimits

0x49bc,	// (0x00014d10) cell_hwr_fs_pane_g1

0x46c3,	// (0x00014a17) cell_hwr_fs_pane_g2_ParamLimits

0x46c3,	// (0x00014a17) cell_hwr_fs_pane_g2

0xd713,	// (0x0001da67) cell_hwr_fs_pane_g3_ParamLimits

0xd713,	// (0x0001da67) cell_hwr_fs_pane_g3

0xd720,	// (0x0001da74) cell_hwr_fs_pane_g4_ParamLimits

0xd720,	// (0x0001da74) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x0001fb25) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x0001fb25) cell_hwr_fs_pane_g

0xc096,	// (0x0001c3ea) cell_hwr_fs_pane_t1

0x2261,	// (0x000125b5) grid_highlight_pane_cp6

0x2261,	// (0x000125b5) main_idle_act2_pane

0x3429,	// (0x0001377d) aid_inside_area_popup_secondary

0xd800,	// (0x0001db54) aid_inside_area_window_primary_ParamLimits

0xd800,	// (0x0001db54) aid_inside_area_window_primary

0x633e,	// (0x00016692) ai2_news_ticker_pane

0x6346,	// (0x0001669a) aid_size_cell_ai1_link_ParamLimits

0x6346,	// (0x0001669a) aid_size_cell_ai1_link

0xdc16,	// (0x0001df6a) popup_ai2_data_window_ParamLimits

0xdc16,	// (0x0001df6a) popup_ai2_data_window

0x6376,	// (0x000166ca) popup_ai2_link_window_ParamLimits

0x6376,	// (0x000166ca) popup_ai2_link_window

0x4986,	// (0x00014cda) bg_popup_sub_pane_cp4_ParamLimits

0x4986,	// (0x00014cda) bg_popup_sub_pane_cp4

0x638a,	// (0x000166de) grid_ai2_link_pane_ParamLimits

0x638a,	// (0x000166de) grid_ai2_link_pane

0x63a1,	// (0x000166f5) popup_ai2_link_window_g1_ParamLimits

0x63a1,	// (0x000166f5) popup_ai2_link_window_g1

0x63ad,	// (0x00016701) popup_ai2_link_window_g2_ParamLimits

0x63ad,	// (0x00016701) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001fcf8) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001fcf8) popup_ai2_link_window_g

0x63bc,	// (0x00016710) ai2_mp_button_pane

0x63c4,	// (0x00016718) ai2_mp_volume_pane

0x4ba2,	// (0x00014ef6) bg_popup_sub_pane_cp5_ParamLimits

0x4ba2,	// (0x00014ef6) bg_popup_sub_pane_cp5

0x63cc,	// (0x00016720) heading_ai2_gene_pane_ParamLimits

0x63cc,	// (0x00016720) heading_ai2_gene_pane

0x63d8,	// (0x0001672c) list_ai2_gene_pane_ParamLimits

0x63d8,	// (0x0001672c) list_ai2_gene_pane

0x6420,	// (0x00016774) cell_ai2_link_pane_ParamLimits

0x6420,	// (0x00016774) cell_ai2_link_pane

0x6436,	// (0x0001678a) cell_ai2_link_pane_g1

0x2261,	// (0x000125b5) grid_highlight_pane_cp7

0x1148,	// (0x0001149c) ai2_mp_volume_pane_g1

0x6506,	// (0x0001685a) ai2_mp_volume_pane_g2

0xdc40,	// (0x0001df94) list_ai2_gene_pane_t1

0x650e,	// (0x00016862) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001fd11) ai2_mp_volume_pane_g

0x1150,	// (0x000114a4) volume_small_pane_cp3

0x6516,	// (0x0001686a) aid_size_cell_ai2_button

0x651e,	// (0x00016872) grid_ai2_button_pane

0x6527,	// (0x0001687b) cell_ai2_button_pane_ParamLimits

0x6527,	// (0x0001687b) cell_ai2_button_pane

0xeb7a,	// (0x0001eece) cell_ai2_button_pane_g1

0x2261,	// (0x000125b5) grid_highlight_pane_cp8

0x64c6,	// (0x0001681a) ai2_gene_pane_t1_ParamLimits

0x64c6,	// (0x0001681a) ai2_gene_pane_t1

0xb97a,	// (0x0001bcce) aid_height_parent_landscape

0xd948,	// (0x0001dc9c) aid_height_set_list

0x5d4a,	// (0x0001609e) aid_size_parent

0x6161,	// (0x000164b5) aid_size_cell_graphic_pane_ParamLimits

0x63e8,	// (0x0001673c) popup_ai2_data_window_g1_ParamLimits

0x63e8,	// (0x0001673c) popup_ai2_data_window_g1

0x63f4,	// (0x00016748) ai2_news_ticker_pane_g1

0x63fc,	// (0x00016750) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001fcfd) ai2_news_ticker_pane_g

0x6404,	// (0x00016758) ai2_news_ticker_pane_t1

0x6412,	// (0x00016766) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001fd02) ai2_news_ticker_pane_t

0x643f,	// (0x00016793) heading_ai2_gene_pane_g1

0x6447,	// (0x0001679b) heading_ai2_gene_pane_t1_ParamLimits

0x6447,	// (0x0001679b) heading_ai2_gene_pane_t1

0x645c,	// (0x000167b0) list_highlight_pane_cp6

0xdc2a,	// (0x0001df7e) ai2_gene_pane_ParamLimits

0xdc2a,	// (0x0001df7e) ai2_gene_pane

0xdc4e,	// (0x0001dfa2) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001fd07) list_ai2_gene_pane_t

0x6497,	// (0x000167eb) list_highlight_pane_cp8_ParamLimits

0x6497,	// (0x000167eb) list_highlight_pane_cp8

0x64a8,	// (0x000167fc) ai2_gene_pane_g1_ParamLimits

0x64a8,	// (0x000167fc) ai2_gene_pane_g1

0x64ba,	// (0x0001680e) ai2_gene_pane_g2_ParamLimits

0x64ba,	// (0x0001680e) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001fd0c) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001fd0c) ai2_gene_pane_g

0x2b7e,	// (0x00012ed2) scroll_pane_cp12

0xb937,	// (0x0001bc8b) control_pane_t3_ParamLimits

0xb937,	// (0x0001bc8b) control_pane_t3

0xd294,	// (0x0001d5e8) status_small_pane_g8_ParamLimits

0xd294,	// (0x0001d5e8) status_small_pane_g8

0xba71,	// (0x0001bdc5) popup_find_window_ParamLimits

0xbd04,	// (0x0001c058) popup_note_image_window_ParamLimits

0x2c15,	// (0x00012f69) list_double2_graphic_pane_vc_g1_ParamLimits

0x2c15,	// (0x00012f69) list_double2_graphic_pane_vc_g1

0x2b9b,	// (0x00012eef) list_double2_graphic_pane_vc_g2_ParamLimits

0x2b9b,	// (0x00012eef) list_double2_graphic_pane_vc_g2

0x2ba7,	// (0x00012efb) list_double2_graphic_pane_vc_g3_ParamLimits

0x2ba7,	// (0x00012efb) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x0001fae8) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x0001fae8) list_double2_graphic_pane_vc_g

0x47f2,	// (0x00014b46) list_double2_graphic_pane_vc_t1_ParamLimits

0x47f2,	// (0x00014b46) list_double2_graphic_pane_vc_t1

0x2b9b,	// (0x00012eef) list_single_heading_pane_vc_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_single_heading_pane_vc_g1

0x2ba7,	// (0x00012efb) list_single_heading_pane_vc_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_single_heading_pane_vc_g

0x48ac,	// (0x00014c00) list_single_heading_pane_vc_t1_ParamLimits

0x48ac,	// (0x00014c00) list_single_heading_pane_vc_t1

0x48c2,	// (0x00014c16) list_single_heading_pane_vc_t2_ParamLimits

0x48c2,	// (0x00014c16) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x0001fb09) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x0001fb09) list_single_heading_pane_vc_t

0x48d4,	// (0x00014c28) list_setting_number_pane_vc_g1_ParamLimits

0x48d4,	// (0x00014c28) list_setting_number_pane_vc_g1

0x48e0,	// (0x00014c34) list_setting_number_pane_vc_g2_ParamLimits

0x48e0,	// (0x00014c34) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001fb0e) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001fb0e) list_setting_number_pane_vc_g

0x48ec,	// (0x00014c40) list_setting_number_pane_vc_t1_ParamLimits

0x48ec,	// (0x00014c40) list_setting_number_pane_vc_t1

0x4900,	// (0x00014c54) list_setting_number_pane_vc_t2_ParamLimits

0x4900,	// (0x00014c54) list_setting_number_pane_vc_t2

0x491c,	// (0x00014c70) list_setting_number_pane_vc_t3_ParamLimits

0x491c,	// (0x00014c70) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x0001fb13) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x0001fb13) list_setting_number_pane_vc_t

0x494a,	// (0x00014c9e) set_value_pane_vc_ParamLimits

0x494a,	// (0x00014c9e) set_value_pane_vc

0x5f50,	// (0x000162a4) list_double2_graphic_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double2_graphic_pane_vc

0x5f50,	// (0x000162a4) list_double2_large_graphic_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double2_large_graphic_pane_vc

0x5f50,	// (0x000162a4) list_double2_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double2_pane_vc

0x5f50,	// (0x000162a4) list_double_graphic_heading_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double_graphic_heading_pane_vc

0x5f50,	// (0x000162a4) list_double_graphic_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double_graphic_pane_vc

0x5f50,	// (0x000162a4) list_double_heading_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double_heading_pane_vc

0x5f62,	// (0x000162b6) list_double_large_graphic_pane_vc_ParamLimits

0x5f62,	// (0x000162b6) list_double_large_graphic_pane_vc

0x5f50,	// (0x000162a4) list_double_number_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double_number_pane_vc

0x5f50,	// (0x000162a4) list_double_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double_pane_vc

0x5f50,	// (0x000162a4) list_double_time_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_double_time_pane_vc

0x5f50,	// (0x000162a4) list_setting_number_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_setting_number_pane_vc

0x5f50,	// (0x000162a4) list_setting_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_setting_pane_vc

0x5f50,	// (0x000162a4) list_single_graphic_heading_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_single_graphic_heading_pane_vc

0x5f50,	// (0x000162a4) list_single_heading_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_single_heading_pane_vc

0x5f50,	// (0x000162a4) list_single_number_heading_pane_vc_ParamLimits

0x5f50,	// (0x000162a4) list_single_number_heading_pane_vc

0x2c15,	// (0x00012f69) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2c15,	// (0x00012f69) list_double_graphic_heading_pane_vc_g1

0x655b,	// (0x000168af) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x655b,	// (0x000168af) list_double_graphic_heading_pane_vc_g2

0x6567,	// (0x000168bb) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6567,	// (0x000168bb) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x0001fd18) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x0001fd18) list_double_graphic_heading_pane_vc_g

0x6573,	// (0x000168c7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6573,	// (0x000168c7) list_double_graphic_heading_pane_vc_t1

0x658f,	// (0x000168e3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x658f,	// (0x000168e3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x0001fd1f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x0001fd1f) list_double_graphic_heading_pane_vc_t

0x48d4,	// (0x00014c28) list_setting_pane_vc_g1_ParamLimits

0x48d4,	// (0x00014c28) list_setting_pane_vc_g1

0x48e0,	// (0x00014c34) list_setting_pane_vc_g2_ParamLimits

0x48e0,	// (0x00014c34) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x0001fb0e) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001fb0e) list_setting_pane_vc_g

0x67bd,	// (0x00016b11) list_setting_pane_vc_t1_ParamLimits

0x67bd,	// (0x00016b11) list_setting_pane_vc_t1

0x67d9,	// (0x00016b2d) list_setting_pane_vc_t2_ParamLimits

0x67d9,	// (0x00016b2d) list_setting_pane_vc_t2

0x0001,

0xf9f9,	// (0x0001fd4d) list_setting_pane_vc_t_ParamLimits

0xf9f9,	// (0x0001fd4d) list_setting_pane_vc_t

0x494a,	// (0x00014c9e) set_value_pane_cp_vc_ParamLimits

0x494a,	// (0x00014c9e) set_value_pane_cp_vc

0x2b9b,	// (0x00012eef) list_single_number_heading_pane_vc_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_single_number_heading_pane_vc_g1

0x2ba7,	// (0x00012efb) list_single_number_heading_pane_vc_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_single_number_heading_pane_vc_g

0x67f5,	// (0x00016b49) list_single_number_heading_pane_vc_t1_ParamLimits

0x67f5,	// (0x00016b49) list_single_number_heading_pane_vc_t1

0x2bf1,	// (0x00012f45) list_single_number_heading_pane_vc_t2_ParamLimits

0x2bf1,	// (0x00012f45) list_single_number_heading_pane_vc_t2

0x2c03,	// (0x00012f57) list_single_number_heading_pane_vc_t3_ParamLimits

0x2c03,	// (0x00012f57) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fe,	// (0x0001fd52) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0001fd52) list_single_number_heading_pane_vc_t

0x2c15,	// (0x00012f69) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2c15,	// (0x00012f69) list_single_graphic_heading_pane_vc_g1

0x2b9b,	// (0x00012eef) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2b9b,	// (0x00012eef) list_single_graphic_heading_pane_vc_g4

0x2ba7,	// (0x00012efb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2ba7,	// (0x00012efb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x0001fae8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x0001fae8) list_single_graphic_heading_pane_vc_g

0x680b,	// (0x00016b5f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x680b,	// (0x00016b5f) list_single_graphic_heading_pane_vc_t1

0x6821,	// (0x00016b75) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6821,	// (0x00016b75) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x0001fd59) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x0001fd59) list_single_graphic_heading_pane_vc_t

0x2b9b,	// (0x00012eef) list_double2_pane_vc_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_double2_pane_vc_g1

0x2ba7,	// (0x00012efb) list_double2_pane_vc_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_double2_pane_vc_g

0x5eee,	// (0x00016242) list_double2_pane_vc_t1_ParamLimits

0x5eee,	// (0x00016242) list_double2_pane_vc_t1

0x6833,	// (0x00016b87) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6833,	// (0x00016b87) list_double2_large_graphic_pane_vc_g1

0x2b9b,	// (0x00012eef) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2b9b,	// (0x00012eef) list_double2_large_graphic_pane_vc_g2

0x2ba7,	// (0x00012efb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2ba7,	// (0x00012efb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001f914) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001f914) list_double2_large_graphic_pane_vc_g

0x683f,	// (0x00016b93) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x683f,	// (0x00016b93) list_double2_large_graphic_pane_vc_t1

0x6855,	// (0x00016ba9) list_double_time_pane_vc_g1_ParamLimits

0x6855,	// (0x00016ba9) list_double_time_pane_vc_g1

0x6861,	// (0x00016bb5) list_double_time_pane_vc_g2_ParamLimits

0x6861,	// (0x00016bb5) list_double_time_pane_vc_g2

0x0001,

0xfa0a,	// (0x0001fd5e) list_double_time_pane_vc_g_ParamLimits

0xfa0a,	// (0x0001fd5e) list_double_time_pane_vc_g

0x686d,	// (0x00016bc1) list_double_time_pane_vc_t1_ParamLimits

0x686d,	// (0x00016bc1) list_double_time_pane_vc_t1

0x6891,	// (0x00016be5) list_double_time_pane_vc_t2_ParamLimits

0x6891,	// (0x00016be5) list_double_time_pane_vc_t2

0x68c0,	// (0x00016c14) list_double_time_pane_vc_t3_ParamLimits

0x68c0,	// (0x00016c14) list_double_time_pane_vc_t3

0x68d2,	// (0x00016c26) list_double_time_pane_vc_t4_ParamLimits

0x68d2,	// (0x00016c26) list_double_time_pane_vc_t4

0x0003,

0xfa0f,	// (0x0001fd63) list_double_time_pane_vc_t_ParamLimits

0xfa0f,	// (0x0001fd63) list_double_time_pane_vc_t

0x2b9b,	// (0x00012eef) list_double_pane_vc_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_double_pane_vc_g1

0x2ba7,	// (0x00012efb) list_double_pane_vc_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_double_pane_vc_g

0x68e6,	// (0x00016c3a) list_double_pane_vc_t1_ParamLimits

0x68e6,	// (0x00016c3a) list_double_pane_vc_t1

0x68fa,	// (0x00016c4e) list_double_pane_vc_t2_ParamLimits

0x68fa,	// (0x00016c4e) list_double_pane_vc_t2

0x0001,

0xfa18,	// (0x0001fd6c) list_double_pane_vc_t_ParamLimits

0xfa18,	// (0x0001fd6c) list_double_pane_vc_t

0x2b9b,	// (0x00012eef) list_double_number_pane_vc_g1_ParamLimits

0x2b9b,	// (0x00012eef) list_double_number_pane_vc_g1

0x2ba7,	// (0x00012efb) list_double_number_pane_vc_g2_ParamLimits

0x2ba7,	// (0x00012efb) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001f8f7) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001f8f7) list_double_number_pane_vc_g

0x6912,	// (0x00016c66) list_double_number_pane_vc_t1_ParamLimits

0x6912,	// (0x00016c66) list_double_number_pane_vc_t1

0x6924,	// (0x00016c78) list_double_number_pane_vc_t2_ParamLimits

0x6924,	// (0x00016c78) list_double_number_pane_vc_t2

0x6938,	// (0x00016c8c) list_double_number_pane_vc_t3_ParamLimits

0x6938,	// (0x00016c8c) list_double_number_pane_vc_t3

0x0002,

0xfa1d,	// (0x0001fd71) list_double_number_pane_vc_t_ParamLimits

0xfa1d,	// (0x0001fd71) list_double_number_pane_vc_t

0x6950,	// (0x00016ca4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6950,	// (0x00016ca4) list_double_large_graphic_pane_vc_g1

0x696c,	// (0x00016cc0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x696c,	// (0x00016cc0) list_double_large_graphic_pane_vc_g2

0x6980,	// (0x00016cd4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6980,	// (0x00016cd4) list_double_large_graphic_pane_vc_g3

0x698f,	// (0x00016ce3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x698f,	// (0x00016ce3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa24,	// (0x0001fd78) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa24,	// (0x0001fd78) list_double_large_graphic_pane_vc_g

0x699e,	// (0x00016cf2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x699e,	// (0x00016cf2) list_double_large_graphic_pane_vc_t1

0x69ba,	// (0x00016d0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x69ba,	// (0x00016d0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa2d,	// (0x0001fd81) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001fd81) list_double_large_graphic_pane_vc_t

0x655b,	// (0x000168af) list_double_heading_pane_vc_g1_ParamLimits

0x655b,	// (0x000168af) list_double_heading_pane_vc_g1

0x6567,	// (0x000168bb) list_double_heading_pane_vc_g2_ParamLimits

0x6567,	// (0x000168bb) list_double_heading_pane_vc_g2

0x0001,

0xfa32,	// (0x0001fd86) list_double_heading_pane_vc_g_ParamLimits

0xfa32,	// (0x0001fd86) list_double_heading_pane_vc_g

0x69dc,	// (0x00016d30) list_double_heading_pane_vc_t1_ParamLimits

0x69dc,	// (0x00016d30) list_double_heading_pane_vc_t1

0x69f0,	// (0x00016d44) list_double_heading_pane_vc_t2_ParamLimits

0x69f0,	// (0x00016d44) list_double_heading_pane_vc_t2

0x0001,

0xfa37,	// (0x0001fd8b) list_double_heading_pane_vc_t_ParamLimits

0xfa37,	// (0x0001fd8b) list_double_heading_pane_vc_t

0x6a08,	// (0x00016d5c) list_double_graphic_pane_vc_g1_ParamLimits

0x6a08,	// (0x00016d5c) list_double_graphic_pane_vc_g1

0x6a14,	// (0x00016d68) list_double_graphic_pane_vc_g2_ParamLimits

0x6a14,	// (0x00016d68) list_double_graphic_pane_vc_g2

0x2b9b,	// (0x00012eef) list_double_graphic_pane_vc_g3_ParamLimits

0x2b9b,	// (0x00012eef) list_double_graphic_pane_vc_g3

0x0003,

0xfa3c,	// (0x0001fd90) list_double_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0001fd90) list_double_graphic_pane_vc_g

0x6a31,	// (0x00016d85) list_double_graphic_pane_vc_t1_ParamLimits

0x6a31,	// (0x00016d85) list_double_graphic_pane_vc_t1

0x6a5b,	// (0x00016daf) list_double_graphic_pane_vc_t2_ParamLimits

0x6a5b,	// (0x00016daf) list_double_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x0001fd99) list_double_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x0001fd99) list_double_graphic_pane_vc_t

0xf37a,	// (0x0001f6ce) aid_size_cell_fastswap

0xb603,	// (0x0001b957) aid_size_cell_touch_ParamLimits

0xb603,	// (0x0001b957) aid_size_cell_touch

0xf4fb,	// (0x0001f84f) popup_fast_swap_wide_window_ParamLimits

0xf4fb,	// (0x0001f84f) popup_fast_swap_wide_window

0xb7b3,	// (0x0001bb07) touch_pane_ParamLimits

0xb7b3,	// (0x0001bb07) touch_pane

0x3059,	// (0x000133ad) button_value_adjust_pane_cp2

0x3061,	// (0x000133b5) button_value_adjust_pane_cp4

0x3083,	// (0x000133d7) form_field_data_pane_cp2

0xce30,	// (0x0001d184) form_field_data_wide_pane_cp2

0x3741,	// (0x00013a95) bg_scroll_pane_ParamLimits

0x028b,	// (0x000105df) scroll_handle_pane_ParamLimits

0x029f,	// (0x000105f3) scroll_sc2_down_pane_ParamLimits

0x029f,	// (0x000105f3) scroll_sc2_down_pane

0x3772,	// (0x00013ac6) scroll_sc2_up_pane_ParamLimits

0x3772,	// (0x00013ac6) scroll_sc2_up_pane

0xdd7e,	// (0x0001e0d2) grid_wheel_folder_pane_g1_ParamLimits

0xdd7e,	// (0x0001e0d2) grid_wheel_folder_pane_g1

0x0464,	// (0x000107b8) clock_nsta_pane_cp2_ParamLimits

0x0464,	// (0x000107b8) clock_nsta_pane_cp2

0xd183,	// (0x0001d4d7) listscroll_midp_pane_ParamLimits

0xd18f,	// (0x0001d4e3) midp_canvas_pane

0x42ec,	// (0x00014640) nsta_clock_indic_pane

0x4328,	// (0x0001467c) listscroll_form_pane_vc

0x4330,	// (0x00014684) listscroll_set_pane_vc_ParamLimits

0x4330,	// (0x00014684) listscroll_set_pane_vc

0xd40c,	// (0x0001d760) clock_nsta_pane

0xd436,	// (0x0001d78a) indicator_nsta_pane

0x478c,	// (0x00014ae0) bg_popup_sub_pane_cp2_ParamLimits

0x47a0,	// (0x00014af4) find_pane_cp2_ParamLimits

0x47a0,	// (0x00014af4) find_pane_cp2

0x47b6,	// (0x00014b0a) grid_toobar_pane_ParamLimits

0x495a,	// (0x00014cae) list_form_gen_pane_vc_ParamLimits

0x495a,	// (0x00014cae) list_form_gen_pane_vc

0x4970,	// (0x00014cc4) scroll_pane_cp8_vc_ParamLimits

0x4970,	// (0x00014cc4) scroll_pane_cp8_vc

0x49ec,	// (0x00014d40) data_form_wide_pane_vc_ParamLimits

0x49ec,	// (0x00014d40) data_form_wide_pane_vc

0x49f8,	// (0x00014d4c) form_field_data_wide_pane_vc_g1

0x4a00,	// (0x00014d54) form_field_data_wide_pane_vc_t1_ParamLimits

0x4a00,	// (0x00014d54) form_field_data_wide_pane_vc_t1

0x313f,	// (0x00013493) input_focus_pane_cp6_vc_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_cp6_vc

0x4d83,	// (0x000150d7) list_midp_pane_ParamLimits

0x61cb,	// (0x0001651f) scroll_pane_cp16_ParamLimits

0x61cb,	// (0x0001651f) scroll_pane_cp16

0x4dd9,	// (0x0001512d) button_value_adjust_pane_ParamLimits

0x4dd9,	// (0x0001512d) button_value_adjust_pane

0xd959,	// (0x0001dcad) button_value_adjust_pane_cp6_ParamLimits

0xd959,	// (0x0001dcad) button_value_adjust_pane_cp6

0xda9b,	// (0x0001ddef) settings_code_pane_cp_ParamLimits

0xda9b,	// (0x0001ddef) settings_code_pane_cp

0xeb7a,	// (0x0001eece) cell_touch_pane_g1

0xeb7a,	// (0x0001eece) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0001fa2d) cell_touch_pane_g

0xdc5c,	// (0x0001dfb0) cell_touch_pane_cp_ParamLimits

0xdc5c,	// (0x0001dfb0) cell_touch_pane_cp

0xdc78,	// (0x0001dfcc) cell_touch_pane_ParamLimits

0xdc78,	// (0x0001dfcc) cell_touch_pane

0xeb7a,	// (0x0001eece) scroll_sc2_down_pane_g1

0xeb7a,	// (0x0001eece) scroll_sc2_up_pane_g1

0x2261,	// (0x000125b5) bg_set_opt_pane_cp4_vc

0x65ad,	// (0x00016901) list_set_graphic_pane_vc_g1_ParamLimits

0x65ad,	// (0x00016901) list_set_graphic_pane_vc_g1

0x65b9,	// (0x0001690d) list_set_graphic_pane_vc_g2_ParamLimits

0x65b9,	// (0x0001690d) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x0001fd24) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x0001fd24) list_set_graphic_pane_vc_g

0x65c5,	// (0x00016919) text_primary_small_cp13_vc_ParamLimits

0x65c5,	// (0x00016919) text_primary_small_cp13_vc

0x65dd,	// (0x00016931) list_set_graphic_pane_vc_ParamLimits

0x65dd,	// (0x00016931) list_set_graphic_pane_vc

0x2261,	// (0x000125b5) input_focus_pane_cp2_vc

0xeb7a,	// (0x0001eece) setting_code_pane_vc_g1

0x238c,	// (0x000126e0) setting_code_pane_vc_t1

0x65f0,	// (0x00016944) set_text_pane_vc_t1_ParamLimits

0x65f0,	// (0x00016944) set_text_pane_vc_t1

0x2261,	// (0x000125b5) input_focus_pane_cp1_vc

0x660c,	// (0x00016960) list_set_text_pane_vc

0xeb7a,	// (0x0001eece) setting_text_pane_vc_g1

0x2261,	// (0x000125b5) bg_set_opt_pane_cp2_vc

0x2383,	// (0x000126d7) setting_slider_graphic_pane_vc_g1

0x6616,	// (0x0001696a) setting_slider_graphic_pane_vc_t1

0x6626,	// (0x0001697a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x0001fd29) setting_slider_graphic_pane_vc_t

0x6636,	// (0x0001698a) slider_set_pane_cp_vc

0x663e,	// (0x00016992) slider_set_pane_vc_g1

0x6647,	// (0x0001699b) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x0001fd2e) slider_set_pane_vc_g

0x326e,	// (0x000135c2) set_opt_bg_pane_g1_copy1

0x3276,	// (0x000135ca) set_opt_bg_pane_g2_copy1

0x6673,	// (0x000169c7) set_opt_bg_pane_g3_copy1

0x3286,	// (0x000135da) set_opt_bg_pane_g4_copy1

0x328e,	// (0x000135e2) set_opt_bg_pane_g5_copy1

0x3296,	// (0x000135ea) set_opt_bg_pane_g6_copy1

0x667d,	// (0x000169d1) set_opt_bg_pane_g7_copy1

0x6687,	// (0x000169db) set_opt_bg_pane_g8_copy1

0x6691,	// (0x000169e5) set_opt_bg_pane_g9_copy1

0x2261,	// (0x000125b5) bg_set_opt_pane_cp_vc

0x669b,	// (0x000169ef) setting_slider_pane_vc_t1

0x66aa,	// (0x000169fe) setting_slider_pane_vc_t2

0x66ba,	// (0x00016a0e) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x0001fd3d) setting_slider_pane_vc_t

0x66ca,	// (0x00016a1e) slider_set_pane_vc

0x0e64,	// (0x000111b8) volume_set_pane_vc_g1

0x0e6d,	// (0x000111c1) volume_set_pane_vc_g2

0x0e76,	// (0x000111ca) volume_set_pane_vc_g3

0x0e7f,	// (0x000111d3) volume_set_pane_vc_g4

0x0e88,	// (0x000111dc) volume_set_pane_vc_g5

0x0e91,	// (0x000111e5) volume_set_pane_vc_g6

0x0e9a,	// (0x000111ee) volume_set_pane_vc_g7

0x0ea3,	// (0x000111f7) volume_set_pane_vc_g8

0x0eac,	// (0x00011200) volume_set_pane_vc_g9

0x0eb5,	// (0x00011209) volume_set_pane_vc_g10

0x0009,

0xf887,	// (0x0001fbdb) volume_set_pane_vc_g

0x66d2,	// (0x00016a26) volume_set_pane_vc

0x66da,	// (0x00016a2e) button_value_adjust_pane_cp1_vc

0x66e4,	// (0x00016a38) list_highlight_pane_cp2_vc

0x66ed,	// (0x00016a41) list_set_pane_vc_ParamLimits

0x66ed,	// (0x00016a41) list_set_pane_vc

0x674b,	// (0x00016a9f) main_pane_set_vc_t1_ParamLimits

0x674b,	// (0x00016a9f) main_pane_set_vc_t1

0x6760,	// (0x00016ab4) main_pane_set_vc_t2_ParamLimits

0x6760,	// (0x00016ab4) main_pane_set_vc_t2

0x6772,	// (0x00016ac6) main_pane_set_vc_t3_ParamLimits

0x6772,	// (0x00016ac6) main_pane_set_vc_t3

0x6786,	// (0x00016ada) main_pane_set_vc_t4_ParamLimits

0x6786,	// (0x00016ada) main_pane_set_vc_t4

0x0003,

0xf9f0,	// (0x0001fd44) main_pane_set_vc_t_ParamLimits

0xf9f0,	// (0x0001fd44) main_pane_set_vc_t

0x679a,	// (0x00016aee) setting_code_pane_vc_ParamLimits

0x679a,	// (0x00016aee) setting_code_pane_vc

0x67ab,	// (0x00016aff) setting_slider_graphic_pane_vc

0x67ab,	// (0x00016aff) setting_slider_pane_vc

0x67ab,	// (0x00016aff) setting_text_pane_vc

0x67ab,	// (0x00016aff) setting_volume_pane_vc

0x67b5,	// (0x00016b09) scroll_pane_cp121_vc

0x3047,	// (0x0001339b) set_content_pane_vc

0x6a85,	// (0x00016dd9) button_value_adjust_pane_g1

0x6a8e,	// (0x00016de2) button_value_adjust_pane_g2

0x0001,

0xfa4a,	// (0x0001fd9e) button_value_adjust_pane_g

0x6a97,	// (0x00016deb) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a97,	// (0x00016deb) form_field_slider_wide_pane_vc_t1

0x6aab,	// (0x00016dff) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6aab,	// (0x00016dff) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa4f,	// (0x0001fda3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001fda3) form_field_slider_wide_pane_vc_t

0x25d6,	// (0x0001292a) input_focus_pane_cp10_vc_ParamLimits

0x25d6,	// (0x0001292a) input_focus_pane_cp10_vc

0x6ad9,	// (0x00016e2d) slider_cont_pane_cp1_vc_ParamLimits

0x6ad9,	// (0x00016e2d) slider_cont_pane_cp1_vc

0x6aeb,	// (0x00016e3f) slider_form_pane_g1_cp2

0x6647,	// (0x0001699b) slider_form_pane_g2_cp2

0x6b18,	// (0x00016e6c) form_field_slider_pane_vc_t3

0x6b26,	// (0x00016e7a) form_field_slider_pane_vc_t4

0x6b34,	// (0x00016e88) slider_form_pane_vc_ParamLimits

0x6b34,	// (0x00016e88) slider_form_pane_vc

0x6b41,	// (0x00016e95) form_field_slider_pane_vc_t1_ParamLimits

0x6b41,	// (0x00016e95) form_field_slider_pane_vc_t1

0x6aab,	// (0x00016dff) form_field_slider_pane_vc_t2_ParamLimits

0x6aab,	// (0x00016dff) form_field_slider_pane_vc_t2

0x0001,

0xfa61,	// (0x0001fdb5) form_field_slider_pane_vc_t_ParamLimits

0xfa61,	// (0x0001fdb5) form_field_slider_pane_vc_t

0x25d6,	// (0x0001292a) input_focus_pane_cp9_vc_ParamLimits

0x25d6,	// (0x0001292a) input_focus_pane_cp9_vc

0x6b5d,	// (0x00016eb1) slider_cont_pane_vc_ParamLimits

0x6b5d,	// (0x00016eb1) slider_cont_pane_vc

0x6b71,	// (0x00016ec5) list_form_graphic_pane_cp_vc_ParamLimits

0x6b71,	// (0x00016ec5) list_form_graphic_pane_cp_vc

0x49f8,	// (0x00014d4c) form_field_popup_wide_pane_vc_g1

0x6b86,	// (0x00016eda) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b86,	// (0x00016eda) form_field_popup_wide_pane_vc_t1

0x313f,	// (0x00013493) input_focus_pane_cp8_vc_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_cp8_vc

0x6bcb,	// (0x00016f1f) list_form_wide_pane_vc_ParamLimits

0x6bcb,	// (0x00016f1f) list_form_wide_pane_vc

0x6bd7,	// (0x00016f2b) list_form_graphic_pane_vc_g1

0x6bdf,	// (0x00016f33) list_form_graphic_pane_vc_t1_ParamLimits

0x6bdf,	// (0x00016f33) list_form_graphic_pane_vc_t1

0x2341,	// (0x00012695) list_highlight_pane_cp5_vc_ParamLimits

0x2341,	// (0x00012695) list_highlight_pane_cp5_vc

0x6bfb,	// (0x00016f4f) list_form_graphic_pane_vc_ParamLimits

0x6bfb,	// (0x00016f4f) list_form_graphic_pane_vc

0x49f8,	// (0x00014d4c) form_field_popup_pane_vc_g1

0x6c11,	// (0x00016f65) form_field_popup_pane_vc_t1_ParamLimits

0x6c11,	// (0x00016f65) form_field_popup_pane_vc_t1

0x313f,	// (0x00013493) input_focus_pane_cp7_vc_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_cp7_vc

0x6c28,	// (0x00016f7c) list_form_pane_vc_ParamLimits

0x6c28,	// (0x00016f7c) list_form_pane_vc

0x6c34,	// (0x00016f88) data_form_pane_vc_t1_ParamLimits

0x6c34,	// (0x00016f88) data_form_pane_vc_t1

0x326e,	// (0x000135c2) input_focus_pane_vc_g1

0x3276,	// (0x000135ca) input_focus_pane_vc_g2

0x327e,	// (0x000135d2) input_focus_pane_vc_g3

0x3286,	// (0x000135da) input_focus_pane_vc_g4

0x328e,	// (0x000135e2) input_focus_pane_vc_g5

0x3296,	// (0x000135ea) input_focus_pane_vc_g6

0x329e,	// (0x000135f2) input_focus_pane_vc_g7

0x32a6,	// (0x000135fa) input_focus_pane_vc_g8

0x32ae,	// (0x00013602) input_focus_pane_vc_g9

0xeb7a,	// (0x0001eece) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0001f9b6) input_focus_pane_vc_g

0x49ec,	// (0x00014d40) data_form_pane_vc_ParamLimits

0x49ec,	// (0x00014d40) data_form_pane_vc

0x49f8,	// (0x00014d4c) form_field_data_pane_vc_g1

0x6c4f,	// (0x00016fa3) form_field_data_pane_vc_t1_ParamLimits

0x6c4f,	// (0x00016fa3) form_field_data_pane_vc_t1

0x313f,	// (0x00013493) input_focus_pane_vc_ParamLimits

0x313f,	// (0x00013493) input_focus_pane_vc

0x6c69,	// (0x00016fbd) button_value_adjust_pane_cp3_vc

0x6c71,	// (0x00016fc5) button_value_adjust_pane_cp5_vc

0x6c79,	// (0x00016fcd) form_field_data_pane_vc_ParamLimits

0x6c79,	// (0x00016fcd) form_field_data_pane_vc

0x6c90,	// (0x00016fe4) form_field_data_pane_vc_cp2

0x6c98,	// (0x00016fec) form_field_data_wide_pane_vc_ParamLimits

0x6c98,	// (0x00016fec) form_field_data_wide_pane_vc

0x6cae,	// (0x00017002) form_field_data_wide_pane_vc_cp2

0x6cb6,	// (0x0001700a) form_field_popup_pane_vc_ParamLimits

0x6cb6,	// (0x0001700a) form_field_popup_pane_vc

0x6ccd,	// (0x00017021) form_field_popup_wide_pane_vc_ParamLimits

0x6ccd,	// (0x00017021) form_field_popup_wide_pane_vc

0x6ce3,	// (0x00017037) form_field_slider_pane_vc_ParamLimits

0x6ce3,	// (0x00017037) form_field_slider_pane_vc

0x6cf6,	// (0x0001704a) form_field_slider_wide_pane_vc_ParamLimits

0x6cf6,	// (0x0001704a) form_field_slider_wide_pane_vc

0xdc96,	// (0x0001dfea) grid_touch_1_pane_ParamLimits

0xdc96,	// (0x0001dfea) grid_touch_1_pane

0xdcaa,	// (0x0001dffe) grid_touch_2_pane_ParamLimits

0xdcaa,	// (0x0001dffe) grid_touch_2_pane

0x6dda,	// (0x0001712e) touch_pane_g1_ParamLimits

0x6dda,	// (0x0001712e) touch_pane_g1

0x6d2d,	// (0x00017081) cell_app_pane_cp_wide_ParamLimits

0x6d2d,	// (0x00017081) cell_app_pane_cp_wide

0x6d3e,	// (0x00017092) grid_popup_fast_wide_pane_ParamLimits

0x6d3e,	// (0x00017092) grid_popup_fast_wide_pane

0x6d52,	// (0x000170a6) scroll_pane_cp19_ParamLimits

0x6d52,	// (0x000170a6) scroll_pane_cp19

0x2261,	// (0x000125b5) bg_popup_window_pane_cp20

0x6d66,	// (0x000170ba) listscroll_popup_fast_wide_pane

0xdcd4,	// (0x0001e028) grid_indicator_nsta_pane

0x6d80,	// (0x000170d4) clock_nsta_pane_g1

0x6d89,	// (0x000170dd) clock_nsta_pane_t1

0xdce0,	// (0x0001e034) cell_indicator_nsta_pane_ParamLimits

0xdce0,	// (0x0001e034) cell_indicator_nsta_pane

0x6dda,	// (0x0001712e) cell_indicator_nsta_pane_g1

0xdcfb,	// (0x0001e04f) cell_indicator_nsta_pane_g2

0x0001,

0xfa72,	// (0x0001fdc6) cell_indicator_nsta_pane_g

0x6dfa,	// (0x0001714e) clock_nsta_pane_cp

0x6e03,	// (0x00017157) indicator_nsta_pane_cp

0x6e0d,	// (0x00017161) nsta_clock_indic_pane_g1

0x2424,	// (0x00012778) grid_indicator_pane

0x3867,	// (0x00013bbb) scroll_pane_cp29

0x03b3,	// (0x00010707) indicator_nsta_pane_cp2_ParamLimits

0x03b3,	// (0x00010707) indicator_nsta_pane_cp2

0x2341,	// (0x00012695) main_apps_wheel_pane

0x4c44,	// (0x00014f98) form_midp_field_text_pane_ParamLimits

0x4d8f,	// (0x000150e3) scroll_bar_cp050_ParamLimits

0x6e66,	// (0x000171ba) cell_indicator_pane_ParamLimits

0x6e66,	// (0x000171ba) cell_indicator_pane

0x6e7d,	// (0x000171d1) cell_indicator_pane_g1

0xdd08,	// (0x0001e05c) grid_wheel_folder_pane_ParamLimits

0xdd08,	// (0x0001e05c) grid_wheel_folder_pane

0xdd16,	// (0x0001e06a) list_wheel_apps_pane_ParamLimits

0xdd16,	// (0x0001e06a) list_wheel_apps_pane

0xdd24,	// (0x0001e078) main_apps_wheel_pane_g1_ParamLimits

0xdd24,	// (0x0001e078) main_apps_wheel_pane_g1

0xdd30,	// (0x0001e084) main_apps_wheel_pane_g2_ParamLimits

0xdd30,	// (0x0001e084) main_apps_wheel_pane_g2

0x0001,

0xfa8e,	// (0x0001fde2) main_apps_wheel_pane_g_ParamLimits

0xfa8e,	// (0x0001fde2) main_apps_wheel_pane_g

0xdd3e,	// (0x0001e092) main_apps_wheel_pane_t1_ParamLimits

0xdd3e,	// (0x0001e092) main_apps_wheel_pane_t1

0xdd52,	// (0x0001e0a6) list_wheel_apps_pane_g1

0xdd5a,	// (0x0001e0ae) list_wheel_apps_pane_g2

0xdd62,	// (0x0001e0b6) list_wheel_apps_pane_g3

0xdd6a,	// (0x0001e0be) list_wheel_apps_pane_g4

0xdd74,	// (0x0001e0c8) list_wheel_apps_pane_g5

0x0004,

0xfa93,	// (0x0001fde7) list_wheel_apps_pane_g

0x3e7c,	// (0x000141d0) navi_icon_text_pane

0xd300,	// (0x0001d654) aid_fill_nsta

0x6f42,	// (0x00017296) navi_icon_text_pane_g1

0x6f4e,	// (0x000172a2) navi_icon_text_pane_t1

0x3d0f,	// (0x00014063) list_set_graphic_pane_t1_ParamLimits

0x3d0f,	// (0x00014063) list_set_graphic_pane_t1

0x54fa,	// (0x0001584e) popup_midp_note_alarm_window_t6_ParamLimits

0x54fa,	// (0x0001584e) popup_midp_note_alarm_window_t6

0x550c,	// (0x00015860) popup_midp_note_alarm_window_t7_ParamLimits

0x550c,	// (0x00015860) popup_midp_note_alarm_window_t7

0x551e,	// (0x00015872) popup_midp_note_alarm_window_t8_ParamLimits

0x551e,	// (0x00015872) popup_midp_note_alarm_window_t8

0x5530,	// (0x00015884) popup_midp_note_alarm_window_t9_ParamLimits

0x5530,	// (0x00015884) popup_midp_note_alarm_window_t9

0x5542,	// (0x00015896) popup_midp_note_alarm_window_t10_ParamLimits

0x5542,	// (0x00015896) popup_midp_note_alarm_window_t10

0x5554,	// (0x000158a8) popup_midp_note_alarm_window_t11_ParamLimits

0x5554,	// (0x000158a8) popup_midp_note_alarm_window_t11

0x5566,	// (0x000158ba) scroll_pane_cp17_ParamLimits

0x5566,	// (0x000158ba) scroll_pane_cp17

0x0e64,	// (0x000111b8) volume_small_pane_cp_g1

0x1159,	// (0x000114ad) volume_small_pane_cp_g2

0x1162,	// (0x000114b6) volume_small_pane_cp_g3

0x116b,	// (0x000114bf) volume_small_pane_cp_g4

0x1174,	// (0x000114c8) volume_small_pane_cp_g5

0x117d,	// (0x000114d1) volume_small_pane_cp_g6

0x1186,	// (0x000114da) volume_small_pane_cp_g7

0x118f,	// (0x000114e3) volume_small_pane_cp_g8

0x1198,	// (0x000114ec) volume_small_pane_cp_g9

0x11a1,	// (0x000114f5) volume_small_pane_cp_g10

0x40cd,	// (0x00014421) midp_ticker_pane_g1_ParamLimits

0x40d9,	// (0x0001442d) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001fa82) midp_ticker_pane_g_ParamLimits

0x40e5,	// (0x00014439) midp_ticker_pane_t1_ParamLimits

0xd324,	// (0x0001d678) aid_fill_nsta_2

0x4d7b,	// (0x000150cf) list_form2_midp_pane

0x5f04,	// (0x00016258) midp_editing_number_pane_ParamLimits

0x5f13,	// (0x00016267) midp_ticker_pane_ParamLimits

0x6f60,	// (0x000172b4) form2_midp_field_pane

0x6f84,	// (0x000172d8) scroll_pane_cp51

0x6fa4,	// (0x000172f8) form2_midp_button_pane_ParamLimits

0x6fa4,	// (0x000172f8) form2_midp_button_pane

0x6fb6,	// (0x0001730a) form2_midp_content_pane_ParamLimits

0x6fb6,	// (0x0001730a) form2_midp_content_pane

0x6fd0,	// (0x00017324) form2_midp_field_choice_group_pane

0x6fd8,	// (0x0001732c) form2_midp_field_pane_g1

0x6fe0,	// (0x00017334) form2_midp_field_pane_g2

0x6fe8,	// (0x0001733c) form2_midp_field_pane_g3

0x6ff0,	// (0x00017344) form2_midp_field_pane_g4

0x0003,

0xfab8,	// (0x0001fe0c) form2_midp_field_pane_g

0x6ff8,	// (0x0001734c) form2_midp_gauge_slider_pane

0x7000,	// (0x00017354) form2_midp_gauge_wait_pane

0x7008,	// (0x0001735c) form2_midp_image_pane_ParamLimits

0x7008,	// (0x0001735c) form2_midp_image_pane

0x7023,	// (0x00017377) form2_midp_label_pane_ParamLimits

0x7023,	// (0x00017377) form2_midp_label_pane

0xdda7,	// (0x0001e0fb) form2_midp_label_pane_cp_ParamLimits

0xdda7,	// (0x0001e0fb) form2_midp_label_pane_cp

0x705d,	// (0x000173b1) form2_midp_string_pane_ParamLimits

0x705d,	// (0x000173b1) form2_midp_string_pane

0xddc6,	// (0x0001e11a) form2_midp_text_pane_ParamLimits

0xddc6,	// (0x0001e11a) form2_midp_text_pane

0x708c,	// (0x000173e0) form2_midp_time_pane

0x709c,	// (0x000173f0) input_focus_pane_cp51_ParamLimits

0x709c,	// (0x000173f0) input_focus_pane_cp51

0x70b4,	// (0x00017408) form2_midp_label_pane_t1_ParamLimits

0x70b4,	// (0x00017408) form2_midp_label_pane_t1

0xdddf,	// (0x0001e133) form2_mdip_text_pane_t1_ParamLimits

0xdddf,	// (0x0001e133) form2_mdip_text_pane_t1

0x7114,	// (0x00017468) form2_midp_time_pane_t1

0x712f,	// (0x00017483) form2_midp_gauge_slider_pane_t1

0xddfa,	// (0x0001e14e) form2_midp_gauge_slider_pane_t2

0xde0c,	// (0x0001e160) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac1,	// (0x0001fe15) form2_midp_gauge_slider_pane_t

0x7165,	// (0x000174b9) form2_midp_slider_pane

0x7171,	// (0x000174c5) form2_midp_gauge_wait_pane_t1

0x717f,	// (0x000174d3) form2_midp_wait_pane_ParamLimits

0x717f,	// (0x000174d3) form2_midp_wait_pane

0xde1e,	// (0x0001e172) list_single_2graphic_pane_cp4_ParamLimits

0xde1e,	// (0x0001e172) list_single_2graphic_pane_cp4

0xd740,	// (0x0001da94) list_single_midp_graphic_pane_cp_ParamLimits

0xd740,	// (0x0001da94) list_single_midp_graphic_pane_cp

0x2261,	// (0x000125b5) list_highlight_pane_cp20

0x71ce,	// (0x00017522) list_single_2graphic_pane_g1_cp4

0x71d6,	// (0x0001752a) list_single_2graphic_pane_g2_cp4

0x71de,	// (0x00017532) list_single_2graphic_pane_t1_cp4

0x2341,	// (0x00012695) list_highlight_pane_cp21

0x71ed,	// (0x00017541) list_single_midp_graphic_pane_g4_cp

0x71fc,	// (0x00017550) list_single_midp_graphic_pane_t1_cp

0xde32,	// (0x0001e186) form2_mdip_string_pane_t1_ParamLimits

0xde32,	// (0x0001e186) form2_mdip_string_pane_t1

0x2261,	// (0x000125b5) bg_wml_button_pane_cp2

0xeb7a,	// (0x0001eece) form2_midp_image_pane_g1

0x2e09,	// (0x0001315d) list_double_large_graphic_pane_g5_ParamLimits

0x2e09,	// (0x0001315d) list_double_large_graphic_pane_g5

0xd183,	// (0x0001d4d7) midp_form_pane_ParamLimits

0x2341,	// (0x00012695) main_apps_wheel_pane_ParamLimits

0xbd82,	// (0x0001c0d6) popup_preview_window_ParamLimits

0xbd82,	// (0x0001c0d6) popup_preview_window

0x0c5f,	// (0x00010fb3) popup_touch_info_window_ParamLimits

0x0c5f,	// (0x00010fb3) popup_touch_info_window

0x0c7d,	// (0x00010fd1) popup_touch_menu_window_ParamLimits

0x0c7d,	// (0x00010fd1) popup_touch_menu_window

0xeb70,	// (0x0001eec4) bg_popup_sub_pane_cp6

0x730a,	// (0x0001765e) list_touch_menu_pane

0x7312,	// (0x00017666) list_single_touch_menu_pane_ParamLimits

0x7312,	// (0x00017666) list_single_touch_menu_pane

0x7328,	// (0x0001767c) list_single_touch_menu_pane_t1

0x2341,	// (0x00012695) bg_popup_sub_pane_cp7_ParamLimits

0x2341,	// (0x00012695) bg_popup_sub_pane_cp7

0x7336,	// (0x0001768a) heading_sub_pane

0x733e,	// (0x00017692) list_touch_info_pane_ParamLimits

0x733e,	// (0x00017692) list_touch_info_pane

0x734d,	// (0x000176a1) list_single_touch_info_pane_ParamLimits

0x734d,	// (0x000176a1) list_single_touch_info_pane

0x735f,	// (0x000176b3) list_single_touch_info_pane_t1

0x736d,	// (0x000176c1) list_single_touch_info_pane_t2

0x0001,

0xfacf,	// (0x0001fe23) list_single_touch_info_pane_t

0x3ff0,	// (0x00014344) bg_popup_heading_pane_cp

0x737b,	// (0x000176cf) heading_sub_pane_t1

0x4986,	// (0x00014cda) bg_popup_preview_window_pane_cp_ParamLimits

0x4986,	// (0x00014cda) bg_popup_preview_window_pane_cp

0x7336,	// (0x0001768a) heading_preview_pane

0x733e,	// (0x00017692) list_preview_pane_ParamLimits

0x733e,	// (0x00017692) list_preview_pane

0x7389,	// (0x000176dd) popup_preview_window_g1

0x734d,	// (0x000176a1) list_single_preview_pane_ParamLimits

0x734d,	// (0x000176a1) list_single_preview_pane

0x7391,	// (0x000176e5) list_single_preview_pane_g1

0x7399,	// (0x000176ed) list_single_preview_pane_t1

0x735f,	// (0x000176b3) list_single_preview_pane_t2

0x0001,

0xfad4,	// (0x0001fe28) list_single_preview_pane_t

0x73a7,	// (0x000176fb) bg_popup_heading_pane_cp2_ParamLimits

0x73a7,	// (0x000176fb) bg_popup_heading_pane_cp2

0x73bd,	// (0x00017711) heading_preview_pane_g1

0x73c5,	// (0x00017719) heading_preview_pane_t1_ParamLimits

0x73c5,	// (0x00017719) heading_preview_pane_t1

0x2447,	// (0x0001279b) soft_indicator_pane_t1_ParamLimits

0x2b5b,	// (0x00012eaf) scroll_pane_ParamLimits

0x3760,	// (0x00013ab4) scroll_sc2_left_pane

0x3769,	// (0x00013abd) scroll_sc2_right_pane

0x3788,	// (0x00013adc) scroll_bg_pane_g1_ParamLimits

0x379d,	// (0x00013af1) scroll_bg_pane_g2_ParamLimits

0x37b5,	// (0x00013b09) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0001fa0d) scroll_bg_pane_g_ParamLimits

0x3788,	// (0x00013adc) scroll_handle_pane_g1_ParamLimits

0x37d7,	// (0x00013b2b) scroll_handle_pane_g2_ParamLimits

0x37b5,	// (0x00013b09) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001fa14) scroll_handle_pane_g_ParamLimits

0x0723,	// (0x00010a77) popup_choice_list_window_ParamLimits

0x0723,	// (0x00010a77) popup_choice_list_window

0x4798,	// (0x00014aec) choice_list_pane

0x4830,	// (0x00014b84) cell_toolbar_pane_t1

0x4858,	// (0x00014bac) toolbar_button_pane_ParamLimits

0x5a20,	// (0x00015d74) ai_gene_pane_1_t2_ParamLimits

0x5a20,	// (0x00015d74) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x0001fc37) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x0001fc37) ai_gene_pane_1_t

0x73e2,	// (0x00017736) scroll_sc2_left_pane_g1

0x73e2,	// (0x00017736) scroll_sc2_right_pane_g1

0x431c,	// (0x00014670) bg_popup_sub_pane_cp10

0x73ec,	// (0x00017740) list_choice_list_pane

0x7405,	// (0x00017759) list_single_choice_list_pane_ParamLimits

0x7405,	// (0x00017759) list_single_choice_list_pane

0x7418,	// (0x0001776c) list_single_choice_list_pane_g1

0x3466,	// (0x000137ba) list_single_choice_list_pane_t1_ParamLimits

0x3466,	// (0x000137ba) list_single_choice_list_pane_t1

0x7420,	// (0x00017774) choice_list_pane_g1

0x7428,	// (0x0001777c) choice_list_pane_t1

0xeb70,	// (0x0001eec4) input_focus_pane_cp11

0x363d,	// (0x00013991) title_pane_stacon_g2_ParamLimits

0x363d,	// (0x00013991) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001f9f3) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001f9f3) title_pane_stacon_g

0x3ff0,	// (0x00014344) cursor_press_pane

0xba29,	// (0x0001bd7d) popup_fep_hwr_window_ParamLimits

0xba29,	// (0x0001bd7d) popup_fep_hwr_window

0x0849,	// (0x00010b9d) popup_fep_vkb_window_ParamLimits

0x0849,	// (0x00010b9d) popup_fep_vkb_window

0x7436,	// (0x0001778a) cursor_press_pane_g1

0x0002,

0xfafd,	// (0x0001fe51) fep_vkb_side_pane_g_ParamLimits

0x11e3,	// (0x00011537) fep_hwr_candidate_pane_ParamLimits

0x11e3,	// (0x00011537) fep_hwr_candidate_pane

0x120d,	// (0x00011561) fep_hwr_side_pane_ParamLimits

0x120d,	// (0x00011561) fep_hwr_side_pane

0x122d,	// (0x00011581) fep_hwr_top_pane_ParamLimits

0x122d,	// (0x00011581) fep_hwr_top_pane

0x1245,	// (0x00011599) fep_hwr_write_pane_ParamLimits

0x1245,	// (0x00011599) fep_hwr_write_pane

0xfafd,	// (0x0001fe51) fep_vkb_side_pane_g

0x743e,	// (0x00017792) fep_hwr_top_pane_g1

0x7450,	// (0x000177a4) fep_hwr_top_pane_g2

0x127f,	// (0x000115d3) fep_hwr_top_pane_g3

0x0002,

0xfad9,	// (0x0001fe2d) fep_hwr_top_pane_g

0x1294,	// (0x000115e8) fep_hwr_top_text_pane

0x3957,	// (0x00013cab) fep_hwr_top_text_pane_g1

0x7486,	// (0x000177da) fep_hwr_top_text_pane_t1

0x138a,	// (0x000116de) fep_hwr_candidate_pane_g1

0x76d9,	// (0x00017a2d) fep_vkb_keypad_pane_g3_ParamLimits

0x76d9,	// (0x00017a2d) fep_vkb_keypad_pane_g3

0x7701,	// (0x00017a55) fep_vkb_keypad_pane_g4_ParamLimits

0x7701,	// (0x00017a55) fep_vkb_keypad_pane_g4

0x7770,	// (0x00017ac4) fep_vkb_bottom_pane_g2_ParamLimits

0x7770,	// (0x00017ac4) fep_vkb_bottom_pane_g2

0x0001,

0xfb04,	// (0x0001fe58) fep_vkb_bottom_pane_g_ParamLimits

0xfb04,	// (0x0001fe58) fep_vkb_bottom_pane_g

0x73e2,	// (0x00017736) cell_vkb_side_pane_g2

0x0001,

0xfb0e,	// (0x0001fe62) cell_vkb_side_pane_g

0x77fb,	// (0x00017b4f) cell_vkb_side_pane_t1

0x7809,	// (0x00017b5d) cell_vkb_side_pane_t1_copy1

0x73e2,	// (0x00017736) bg_fep_vkb_candidate_pane_g2

0x7935,	// (0x00017c89) cell_vkb_candidate_pane_ParamLimits

0x7494,	// (0x000177e8) aid_size_cell_vkb_ParamLimits

0x7494,	// (0x000177e8) aid_size_cell_vkb

0x7935,	// (0x00017c89) cell_vkb_candidate_pane

0x13b1,	// (0x00011705) bg_popup_fep_shadow_pane_g1

0xdeb4,	// (0x0001e208) fep_vkb_bottom_pane_ParamLimits

0xdeb4,	// (0x0001e208) fep_vkb_bottom_pane

0x7558,	// (0x000178ac) fep_vkb_candidate_pane_ParamLimits

0x7558,	// (0x000178ac) fep_vkb_candidate_pane

0xded9,	// (0x0001e22d) fep_vkb_keypad_pane_ParamLimits

0xded9,	// (0x0001e22d) fep_vkb_keypad_pane

0xdf15,	// (0x0001e269) fep_vkb_side_pane_ParamLimits

0xdf15,	// (0x0001e269) fep_vkb_side_pane

0xdf51,	// (0x0001e2a5) fep_vkb_top_pane_ParamLimits

0xdf51,	// (0x0001e2a5) fep_vkb_top_pane

0x7632,	// (0x00017986) fep_vkb_top_pane_g1_ParamLimits

0x7632,	// (0x00017986) fep_vkb_top_pane_g1

0x7641,	// (0x00017995) fep_vkb_top_pane_g2_ParamLimits

0x7641,	// (0x00017995) fep_vkb_top_pane_g2

0x7650,	// (0x000179a4) fep_vkb_top_pane_g3_ParamLimits

0x7650,	// (0x000179a4) fep_vkb_top_pane_g3

0x0003,

0xfaf4,	// (0x0001fe48) fep_vkb_top_pane_g_ParamLimits

0xfaf4,	// (0x0001fe48) fep_vkb_top_pane_g

0x766e,	// (0x000179c2) fep_vkb_top_text_pane_ParamLimits

0x766e,	// (0x000179c2) fep_vkb_top_text_pane

0xdf8d,	// (0x0001e2e1) fep_vkb_side_pane_g1_ParamLimits

0xdf8d,	// (0x0001e2e1) fep_vkb_side_pane_g1

0x76c8,	// (0x00017a1c) grid_vkb_side_pane_ParamLimits

0x76c8,	// (0x00017a1c) grid_vkb_side_pane

0x13b9,	// (0x0001170d) bg_popup_fep_shadow_pane_g2

0x13c2,	// (0x00011716) bg_popup_fep_shadow_pane_g3

0x13ca,	// (0x0001171e) bg_popup_fep_shadow_pane_g4

0x13d3,	// (0x00011727) bg_popup_fep_shadow_pane_g5

0x13dd,	// (0x00011731) bg_popup_fep_shadow_pane_g6

0x13e5,	// (0x00011739) bg_popup_fep_shadow_pane_g7

0x3286,	// (0x000135da) bg_popup_fep_shadow_pane_g8

0x771f,	// (0x00017a73) grid_vkb_keypad_number_pane_ParamLimits

0x771f,	// (0x00017a73) grid_vkb_keypad_number_pane

0x772f,	// (0x00017a83) grid_vkb_keypad_pane_ParamLimits

0x772f,	// (0x00017a83) grid_vkb_keypad_pane

0x7755,	// (0x00017aa9) fep_vkb_bottom_pane_g1_ParamLimits

0x7755,	// (0x00017aa9) fep_vkb_bottom_pane_g1

0x777e,	// (0x00017ad2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x777e,	// (0x00017ad2) grid_vkb_keypad_bottom_left_pane

0x7793,	// (0x00017ae7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7793,	// (0x00017ae7) grid_vkb_keypad_bottom_right_pane

0x77a8,	// (0x00017afc) fep_vkb_top_text_pane_g1

0xdfd4,	// (0x0001e328) fep_vkb_top_text_pane_t1

0xdfe6,	// (0x0001e33a) cell_vkb_side_pane_ParamLimits

0xdfe6,	// (0x0001e33a) cell_vkb_side_pane

0x73e2,	// (0x00017736) cell_vkb_side_pane_g1

0x7817,	// (0x00017b6b) cell_vkb_keypad_pane_ParamLimits

0x7817,	// (0x00017b6b) cell_vkb_keypad_pane

0x788c,	// (0x00017be0) cell_vkb_keypad_pane_g1

0x0008,

0xfb21,	// (0x0001fe75) bg_popup_fep_shadow_pane_g

0x13f7,	// (0x0001174b) cell_hwr_side_pane_g1

0x13f7,	// (0x0001174b) cell_hwr_side_pane_g2

0x7896,	// (0x00017bea) cell_vkb_keypad_pane_t1

0xdffc,	// (0x0001e350) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdffc,	// (0x0001e350) cell_vkb_keypad_bottom_left_pane

0xe011,	// (0x0001e365) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe011,	// (0x0001e365) cell_vkb_keypad_bottom_right_pane

0x73e2,	// (0x00017736) cell_vkb_keypad_bottom_left_pane_g1

0x73e2,	// (0x00017736) cell_vkb_keypad_bottom_right_pane_g1

0x78fa,	// (0x00017c4e) cell_vkb_keypad_number_pane_ParamLimits

0x78fa,	// (0x00017c4e) cell_vkb_keypad_number_pane

0x7919,	// (0x00017c6d) cell_vkb_keypad_number_pane_g1

0x7923,	// (0x00017c77) cell_vkb_keypad_number_pane_g2

0x792c,	// (0x00017c80) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb13,	// (0x0001fe67) cell_vkb_keypad_number_pane_g

0x7896,	// (0x00017bea) cell_vkb_keypad_number_pane_t1

0x7950,	// (0x00017ca4) fep_vkb_candidate_pane_g1

0x0001,

0xfb34,	// (0x0001fe88) cell_hwr_side_pane_g

0x7969,	// (0x00017cbd) cell_hwr_side_pane_t1

0x1401,	// (0x00011755) cell_hwr_side_pane_t1_copy1

0x140f,	// (0x00011763) cell_hwr_candidate_pane_g1

0x143e,	// (0x00011792) cell_hwr_candidate_pane_t1

0x73e2,	// (0x00017736) cell_vkb_candidate_pane_g2

0x79ad,	// (0x00017d01) cell_vkb_candidate_pane_t1

0x11aa,	// (0x000114fe) bg_popup_fep_shadow_pane_ParamLimits

0x11aa,	// (0x000114fe) bg_popup_fep_shadow_pane

0x125f,	// (0x000115b3) bg_fep_hwr_top_pane_g4

0x7462,	// (0x000177b6) bg_hwr_side_pane_g1_ParamLimits

0x7462,	// (0x000177b6) bg_hwr_side_pane_g1

0xc0bc,	// (0x0001c410) cell_hwr_side_pane_ParamLimits

0xc0bc,	// (0x0001c410) cell_hwr_side_pane

0x130b,	// (0x0001165f) fep_hwr_write_pane_g1_ParamLimits

0x130b,	// (0x0001165f) fep_hwr_write_pane_g1

0x1318,	// (0x0001166c) fep_hwr_write_pane_g2_ParamLimits

0x1318,	// (0x0001166c) fep_hwr_write_pane_g2

0x1325,	// (0x00011679) fep_hwr_write_pane_g3_ParamLimits

0x1325,	// (0x00011679) fep_hwr_write_pane_g3

0xc0dc,	// (0x0001c430) fep_hwr_write_pane_g4_ParamLimits

0xc0dc,	// (0x0001c430) fep_hwr_write_pane_g4

0x0005,

0xfae0,	// (0x0001fe34) fep_hwr_write_pane_g_ParamLimits

0xfae0,	// (0x0001fe34) fep_hwr_write_pane_g

0x125f,	// (0x000115b3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x125f,	// (0x000115b3) bg_fep_hwr_candidate_pane_g2

0x1348,	// (0x0001169c) cell_hwr_candidate_pane_ParamLimits

0x1348,	// (0x0001169c) cell_hwr_candidate_pane

0x138a,	// (0x000116de) fep_hwr_candidate_pane_g1_ParamLimits

0x74c2,	// (0x00017816) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x74c2,	// (0x00017816) bg_popup_fep_shadow_pane_cp2

0x7660,	// (0x000179b4) fep_vkb_top_pane_g4_ParamLimits

0x7660,	// (0x000179b4) fep_vkb_top_pane_g4

0x76a6,	// (0x000179fa) fep_vkb_side_pane_g2_ParamLimits

0x76a6,	// (0x000179fa) fep_vkb_side_pane_g2

0xcd5e,	// (0x0001d0b2) list_setting_pane_t4_ParamLimits

0xcd5e,	// (0x0001d0b2) list_setting_pane_t4

0xcdd8,	// (0x0001d12c) list_setting_number_pane_t5_ParamLimits

0xcdd8,	// (0x0001d12c) list_setting_number_pane_t5

0x398e,	// (0x00013ce2) list_double_heading_pane_cp2_ParamLimits

0x398e,	// (0x00013ce2) list_double_heading_pane_cp2

0x3165,	// (0x000134b9) list_double_heading_pane_g1_cp2_ParamLimits

0x3165,	// (0x000134b9) list_double_heading_pane_g1_cp2

0x3171,	// (0x000134c5) list_double_heading_pane_g2_cp2_ParamLimits

0x3171,	// (0x000134c5) list_double_heading_pane_g2_cp2

0x79bb,	// (0x00017d0f) list_double_heading_pane_t1_cp2_ParamLimits

0x79bb,	// (0x00017d0f) list_double_heading_pane_t1_cp2

0x79d1,	// (0x00017d25) list_double_heading_pane_t2_cp2_ParamLimits

0x79d1,	// (0x00017d25) list_double_heading_pane_t2_cp2

0xeb68,	// (0x0001eebc) aid_value_unit2

0xf51f,	// (0x0001f873) popup_preview_fixed_window

0x25e4,	// (0x00012938) bg_popup_preview_window_pane_cp02

0x79e3,	// (0x00017d37) list_preview_fixed_pane

0x7a29,	// (0x00017d7d) list_empty_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_empty_pane_fp

0x7a29,	// (0x00017d7d) list_single_cale_day_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_single_cale_day_pane_fp

0x7a29,	// (0x00017d7d) list_single_graphic_heading_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_single_graphic_heading_pane_fp

0x7a29,	// (0x00017d7d) list_single_graphic_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_single_graphic_pane_fp

0x7a29,	// (0x00017d7d) list_single_heading_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_single_heading_pane_fp

0x7a29,	// (0x00017d7d) list_single_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_single_pane_fp

0x7a3e,	// (0x00017d92) list_single_pane_fp_g1_ParamLimits

0x7a3e,	// (0x00017d92) list_single_pane_fp_g1

0x3165,	// (0x000134b9) list_single_pane_fp_g2_ParamLimits

0x3165,	// (0x000134b9) list_single_pane_fp_g2

0x3171,	// (0x000134c5) list_single_pane_fp_g3_ParamLimits

0x3171,	// (0x000134c5) list_single_pane_fp_g3

0x7a4a,	// (0x00017d9e) list_single_pane_fp_g4_ParamLimits

0x7a4a,	// (0x00017d9e) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x0001fe9b) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x0001fe9b) list_single_pane_fp_g

0x7a56,	// (0x00017daa) list_single_pane_fp_t1_ParamLimits

0x7a56,	// (0x00017daa) list_single_pane_fp_t1

0x7a6d,	// (0x00017dc1) list_single_graphic_pane_fp_g1_ParamLimits

0x7a6d,	// (0x00017dc1) list_single_graphic_pane_fp_g1

0x7a3e,	// (0x00017d92) list_single_graphic_pane_fp_g2_ParamLimits

0x7a3e,	// (0x00017d92) list_single_graphic_pane_fp_g2

0x3165,	// (0x000134b9) list_single_graphic_pane_fp_g3_ParamLimits

0x3165,	// (0x000134b9) list_single_graphic_pane_fp_g3

0x3171,	// (0x000134c5) list_single_graphic_pane_fp_g4_ParamLimits

0x3171,	// (0x000134c5) list_single_graphic_pane_fp_g4

0x7a4a,	// (0x00017d9e) list_single_graphic_pane_fp_g5_ParamLimits

0x7a4a,	// (0x00017d9e) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x0001fea4) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x0001fea4) list_single_graphic_pane_fp_g

0x7a79,	// (0x00017dcd) list_single_graphic_pane_fp_t1_ParamLimits

0x7a79,	// (0x00017dcd) list_single_graphic_pane_fp_t1

0x7a6d,	// (0x00017dc1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7a6d,	// (0x00017dc1) list_single_graphic_heading_pane_fp_g1

0x7a3e,	// (0x00017d92) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a3e,	// (0x00017d92) list_single_graphic_heading_pane_fp_g2

0x3165,	// (0x000134b9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3165,	// (0x000134b9) list_single_graphic_heading_pane_fp_g3

0x3171,	// (0x000134c5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3171,	// (0x000134c5) list_single_graphic_heading_pane_fp_g4

0x7a4a,	// (0x00017d9e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a4a,	// (0x00017d9e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0001fea4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0001fea4) list_single_graphic_heading_pane_fp_g

0x7a8f,	// (0x00017de3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7a8f,	// (0x00017de3) list_single_graphic_heading_pane_fp_t1

0x7aa5,	// (0x00017df9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7aa5,	// (0x00017df9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x0001feaf) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x0001feaf) list_single_graphic_heading_pane_fp_t

0x7ab7,	// (0x00017e0b) list_single_cale_day_pane_fp_g1_ParamLimits

0x7ab7,	// (0x00017e0b) list_single_cale_day_pane_fp_g1

0x7aef,	// (0x00017e43) list_single_cale_day_pane_fp_g2_ParamLimits

0x7aef,	// (0x00017e43) list_single_cale_day_pane_fp_g2

0x7afb,	// (0x00017e4f) list_single_cale_day_pane_fp_g3_ParamLimits

0x7afb,	// (0x00017e4f) list_single_cale_day_pane_fp_g3

0x7b23,	// (0x00017e77) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b23,	// (0x00017e77) list_single_cale_day_pane_fp_g4

0x7b47,	// (0x00017e9b) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b47,	// (0x00017e9b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x0001feb4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x0001feb4) list_single_cale_day_pane_fp_g

0x7b6b,	// (0x00017ebf) list_single_cale_day_pane_fp_t1_ParamLimits

0x7b6b,	// (0x00017ebf) list_single_cale_day_pane_fp_t1

0x7b91,	// (0x00017ee5) list_single_cale_day_pane_fp_t2_ParamLimits

0x7b91,	// (0x00017ee5) list_single_cale_day_pane_fp_t2

0x7baa,	// (0x00017efe) list_single_cale_day_pane_fp_t3_ParamLimits

0x7baa,	// (0x00017efe) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x0001febf) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x0001febf) list_single_cale_day_pane_fp_t

0x7a3e,	// (0x00017d92) list_empty_pane_fp_g1_ParamLimits

0x7a3e,	// (0x00017d92) list_empty_pane_fp_g1

0x7bc3,	// (0x00017f17) list_empty_pane_fp_t1

0x7bd1,	// (0x00017f25) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x0001fec6) list_empty_pane_fp_t

0x7a3e,	// (0x00017d92) list_single_heading_pane_fp_g1_ParamLimits

0x7a3e,	// (0x00017d92) list_single_heading_pane_fp_g1

0x3165,	// (0x000134b9) list_single_heading_pane_fp_g2_ParamLimits

0x3165,	// (0x000134b9) list_single_heading_pane_fp_g2

0x3171,	// (0x000134c5) list_single_heading_pane_fp_g3_ParamLimits

0x3171,	// (0x000134c5) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x0001fecb) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0001fecb) list_single_heading_pane_fp_g

0x7bdf,	// (0x00017f33) list_single_heading_pane_fp_t1_ParamLimits

0x7bdf,	// (0x00017f33) list_single_heading_pane_fp_t1

0x7bf1,	// (0x00017f45) list_single_heading_pane_fp_t2_ParamLimits

0x7bf1,	// (0x00017f45) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0001fed2) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0001fed2) list_single_heading_pane_fp_t

0x34d4,	// (0x00013828) aid_size_cell_fast

0x2554,	// (0x000128a8) soft_indicator_pane_cp1_t1

0x3511,	// (0x00013865) cell_app_pane_cp2_ParamLimits

0x3511,	// (0x00013865) cell_app_pane_cp2

0x11cc,	// (0x00011520) fep_hwr_candidate_drop_down_list_pane

0x13a4,	// (0x000116f8) fep_hwr_candidate_pane_g3_ParamLimits

0x13a4,	// (0x000116f8) fep_hwr_candidate_pane_g3

0xeb84,	// (0x0001eed8) fep_hwr_candidate_pane_g4_ParamLimits

0xeb84,	// (0x0001eed8) fep_hwr_candidate_pane_g4

0x0002,

0xfaed,	// (0x0001fe41) fep_hwr_candidate_pane_g_ParamLimits

0xfaed,	// (0x0001fe41) fep_hwr_candidate_pane_g

0x7547,	// (0x0001789b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7547,	// (0x0001789b) fep_vkb_candidate_drop_down_list_pane

0x7958,	// (0x00017cac) fep_vkb_candidate_pane_g3

0x7960,	// (0x00017cb4) fep_vkb_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0001fe6e) fep_vkb_candidate_pane_g

0x140f,	// (0x00011763) cell_hwr_candidate_pane_g1_ParamLimits

0x141d,	// (0x00011771) cell_hwr_candidate_pane_g3_ParamLimits

0x141d,	// (0x00011771) cell_hwr_candidate_pane_g3

0x8ffa,	// (0x0001934e) cell_hwr_candidate_pane_g4_ParamLimits

0x8ffa,	// (0x0001934e) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x0001fe8d) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x0001fe8d) cell_hwr_candidate_pane_g

0x7977,	// (0x00017ccb) cell_vkb_candidate_pane_g3_ParamLimits

0x7977,	// (0x00017ccb) cell_vkb_candidate_pane_g3

0x7992,	// (0x00017ce6) cell_vkb_candidate_pane_g4_ParamLimits

0x7992,	// (0x00017ce6) cell_vkb_candidate_pane_g4

0x7c07,	// (0x00017f5b) cell_app_pane_cp2_g1_ParamLimits

0x7c07,	// (0x00017f5b) cell_app_pane_cp2_g1

0x7c25,	// (0x00017f79) cell_app_pane_cp2_g2_ParamLimits

0x7c25,	// (0x00017f79) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x0001fed7) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x0001fed7) cell_app_pane_cp2_g

0x7c31,	// (0x00017f85) cell_app_pane_cp2_t1_ParamLimits

0x7c31,	// (0x00017f85) cell_app_pane_cp2_t1

0x313f,	// (0x00013493) grid_highlight_pane_cp1_ParamLimits

0x313f,	// (0x00013493) grid_highlight_pane_cp1

0x145c,	// (0x000117b0) cell_hwr_candidate_pane_cp1_ParamLimits

0x145c,	// (0x000117b0) cell_hwr_candidate_pane_cp1

0x140f,	// (0x00011763) fep_hwr_candidate_drop_down_list_pane_g1

0x147b,	// (0x000117cf) fep_hwr_candidate_drop_down_list_pane_g2

0x1488,	// (0x000117dc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0001fedc) fep_hwr_candidate_drop_down_list_pane_g

0x1495,	// (0x000117e9) fep_hwr_candidate_drop_down_list_scroll_pane

0x149e,	// (0x000117f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x149e,	// (0x000117f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x14ab,	// (0x000117ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x14ab,	// (0x000117ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x14b8,	// (0x0001180c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x14b8,	// (0x0001180c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x14c5,	// (0x00011819) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x14c5,	// (0x00011819) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x14e0,	// (0x00011834) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x14e0,	// (0x00011834) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x14fb,	// (0x0001184f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x14fb,	// (0x0001184f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1516,	// (0x0001186a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1516,	// (0x0001186a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1531,	// (0x00011885) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1531,	// (0x00011885) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x0001fee3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x0001fee3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c43,	// (0x00017f97) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c43,	// (0x00017f97) cell_vkb_candidate_pane_cp1

0x7660,	// (0x000179b4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7660,	// (0x000179b4) fep_vkb_candidate_drop_down_list_pane_g1

0x7c63,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c63,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_pane_g2

0x7c70,	// (0x00017fc4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c70,	// (0x00017fc4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba0,	// (0x0001fef4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba0,	// (0x0001fef4) fep_vkb_candidate_drop_down_list_pane_g

0x7c7d,	// (0x00017fd1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c7d,	// (0x00017fd1) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c8a,	// (0x00017fde) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c8a,	// (0x00017fde) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c97,	// (0x00017feb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c97,	// (0x00017feb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7ca3,	// (0x00017ff7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ca3,	// (0x00017ff7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7caf,	// (0x00018003) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7caf,	// (0x00018003) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7cd0,	// (0x00018024) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7cd0,	// (0x00018024) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7cf1,	// (0x00018045) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7cf1,	// (0x00018045) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d12,	// (0x00018066) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d12,	// (0x00018066) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d33,	// (0x00018087) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d33,	// (0x00018087) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0001fefb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0001fefb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc751,	// (0x0001caa5) title_pane_g1_ParamLimits

0xc764,	// (0x0001cab8) title_pane_g2_ParamLimits

0xf529,	// (0x0001f87d) title_pane_g_ParamLimits

0x3947,	// (0x00013c9b) aid_call2_pane

0x394f,	// (0x00013ca3) aid_call_pane

0x3957,	// (0x00013cab) popup_clock_analogue_window_g1

0x3957,	// (0x00013cab) popup_clock_analogue_window_g2

0x02b4,	// (0x00010608) popup_clock_analogue_window_g3

0x02bd,	// (0x00010611) popup_clock_analogue_window_g4

0xeb7a,	// (0x0001eece) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0001fa22) popup_clock_analogue_window_g

0x02c5,	// (0x00010619) popup_clock_analogue_window_t1

0x02d3,	// (0x00010627) clock_digital_number_pane_ParamLimits

0x02d3,	// (0x00010627) clock_digital_number_pane

0x02df,	// (0x00010633) clock_digital_number_pane_cp02_ParamLimits

0x02df,	// (0x00010633) clock_digital_number_pane_cp02

0x02eb,	// (0x0001063f) clock_digital_number_pane_cp03_ParamLimits

0x02eb,	// (0x0001063f) clock_digital_number_pane_cp03

0x02f7,	// (0x0001064b) clock_digital_number_pane_cp04_ParamLimits

0x02f7,	// (0x0001064b) clock_digital_number_pane_cp04

0x0303,	// (0x00010657) clock_digital_separator_pane_ParamLimits

0x0303,	// (0x00010657) clock_digital_separator_pane

0x030f,	// (0x00010663) popup_clock_digital_window_t1_ParamLimits

0x030f,	// (0x00010663) popup_clock_digital_window_t1

0xeb7a,	// (0x0001eece) clock_digital_number_pane_g1

0xeb7a,	// (0x0001eece) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0001fa2d) clock_digital_number_pane_g

0xeb7a,	// (0x0001eece) clock_digital_separator_pane_g1

0xeb7a,	// (0x0001eece) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0001fa2d) clock_digital_separator_pane_g

0xd300,	// (0x0001d654) aid_fill_nsta_ParamLimits

0xd436,	// (0x0001d78a) indicator_nsta_pane_ParamLimits

0x4625,	// (0x00014979) popup_clock_analogue_window

0x4625,	// (0x00014979) popup_clock_digital_window

0xdcd4,	// (0x0001e028) grid_indicator_nsta_pane_ParamLimits

0x6d97,	// (0x000170eb) clock_nsta_pane_t2

0x0001,

0xfa6d,	// (0x0001fdc1) clock_nsta_pane_t

0x0278,	// (0x000105cc) aid_size_max_handle

0x0282,	// (0x000105d6) aid_size_min_handle

0x3ff0,	// (0x00014344) editor_scroll_pane

0x7d4e,	// (0x000180a2) ex_editor_pane

0x3442,	// (0x00013796) scroll_pane_cp13

0x2b87,	// (0x00012edb) scroll_pane_cp14

0x3986,	// (0x00013cda) scroll_pane_cp36

0xd082,	// (0x0001d3d6) list_single_graphic_hl_pane_cp2_ParamLimits

0xd082,	// (0x0001d3d6) list_single_graphic_hl_pane_cp2

0xdb18,	// (0x0001de6c) list_single_graphic_hl_pane_ParamLimits

0xdb18,	// (0x0001de6c) list_single_graphic_hl_pane

0x7d56,	// (0x000180aa) aid_size_min_hl_cp1

0x7d5f,	// (0x000180b3) list_highlight_pane_cp34_ParamLimits

0x7d5f,	// (0x000180b3) list_highlight_pane_cp34

0x7d70,	// (0x000180c4) list_single_graphic_hl_pane_g1_ParamLimits

0x7d70,	// (0x000180c4) list_single_graphic_hl_pane_g1

0xe02c,	// (0x0001e380) list_single_graphic_hl_pane_g2_ParamLimits

0xe02c,	// (0x0001e380) list_single_graphic_hl_pane_g2

0xe02c,	// (0x0001e380) list_single_graphic_hl_pane_g3_ParamLimits

0xe02c,	// (0x0001e380) list_single_graphic_hl_pane_g3

0x3ed1,	// (0x00014225) list_single_graphic_hl_pane_g4_ParamLimits

0x3ed1,	// (0x00014225) list_single_graphic_hl_pane_g4

0xe038,	// (0x0001e38c) list_single_graphic_hl_pane_g5_ParamLimits

0xe038,	// (0x0001e38c) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0001ff0c) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0001ff0c) list_single_graphic_hl_pane_g

0xe04c,	// (0x0001e3a0) list_single_graphic_hl_pane_t1_ParamLimits

0xe04c,	// (0x0001e3a0) list_single_graphic_hl_pane_t1

0x7d9d,	// (0x000180f1) aid_size_min_hl_cp2

0x7da6,	// (0x000180fa) list_highlight_pane_cp34_cp2_ParamLimits

0x7da6,	// (0x000180fa) list_highlight_pane_cp34_cp2

0x7d70,	// (0x000180c4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d70,	// (0x000180c4) list_single_graphic_hl_pane_g1_cp2

0x7db3,	// (0x00018107) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7db3,	// (0x00018107) list_single_graphic_hl_pane_g2_cp2

0x7dbf,	// (0x00018113) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7dbf,	// (0x00018113) list_single_graphic_hl_pane_g3_cp2

0x7dcd,	// (0x00018121) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7dcd,	// (0x00018121) list_single_graphic_hl_pane_g4_cp2

0x7dd9,	// (0x0001812d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7dd9,	// (0x0001812d) list_single_graphic_hl_pane_g5_cp2

0xb85b,	// (0x0001bbaf) control_pane_g4_ParamLimits

0xb85b,	// (0x0001bbaf) control_pane_g4

0x431c,	// (0x00014670) bg_popup_sub_pane_cp10_ParamLimits

0x73ec,	// (0x00017740) list_choice_list_pane_ParamLimits

0x73fb,	// (0x0001774f) scroll_pane_cp23

0x25e4,	// (0x00012938) bg_popup_preview_window_pane_cp02_ParamLimits

0x79e3,	// (0x00017d37) list_preview_fixed_pane_ParamLimits

0x79f9,	// (0x00017d4d) list_preview_fixed_pane_cp_ParamLimits

0x79f9,	// (0x00017d4d) list_preview_fixed_pane_cp

0x7a05,	// (0x00017d59) popup_preview_fixed_window_g1_ParamLimits

0x7a05,	// (0x00017d59) popup_preview_fixed_window_g1

0x7a11,	// (0x00017d65) popup_preview_fixed_window_g2_ParamLimits

0x7a11,	// (0x00017d65) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x0001fe94) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x0001fe94) popup_preview_fixed_window_g

0x01ec,	// (0x00010540) aid_navi_side_left_pane_ParamLimits

0x0201,	// (0x00010555) aid_navi_side_right_pane_ParamLimits

0x0219,	// (0x0001056d) navi_icon_pane_stacon_ParamLimits

0x022d,	// (0x00010581) navi_navi_pane_stacon_ParamLimits

0x0219,	// (0x0001056d) navi_text_pane_stacon_ParamLimits

0xf416,	// (0x0001f76a) main_text_info_pane

0x7e03,	// (0x00018157) listscroll_text_info_pane

0x7e0b,	// (0x0001815f) list_text_info_pane_ParamLimits

0x7e0b,	// (0x0001815f) list_text_info_pane

0x7e1a,	// (0x0001816e) scroll_pane_cp24_ParamLimits

0x7e1a,	// (0x0001816e) scroll_pane_cp24

0xe062,	// (0x0001e3b6) list_text_info_pane_t1_ParamLimits

0xe062,	// (0x0001e3b6) list_text_info_pane_t1

0xb99c,	// (0x0001bcf0) popup_fast_swap2_window_ParamLimits

0xb99c,	// (0x0001bcf0) popup_fast_swap2_window

0x7e69,	// (0x000181bd) aid_size_cell_fast2

0xeb70,	// (0x0001eec4) bg_popup_window_pane_cp17

0x4daf,	// (0x00015103) heading_pane_cp2

0x4db7,	// (0x0001510b) listscroll_fast2_pane

0x7e73,	// (0x000181c7) grid_fast2_pane

0x7e7d,	// (0x000181d1) listscroll_fast2_pane_g1

0x7e85,	// (0x000181d9) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0001ff17) listscroll_fast2_pane_g

0x3442,	// (0x00013796) scroll_pane_cp26

0x7e8f,	// (0x000181e3) cell_fast2_pane_ParamLimits

0x7e8f,	// (0x000181e3) cell_fast2_pane

0x7ea4,	// (0x000181f8) cell_fast2_pane_g1

0x7ead,	// (0x00018201) cell_fast2_pane_g2

0x7eb6,	// (0x0001820a) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0001ff1c) cell_fast2_pane_g

0x2944,	// (0x00012c98) grid_highlight_pane_cp9

0x0707,	// (0x00010a5b) main_eswt_pane_ParamLimits

0x0707,	// (0x00010a5b) main_eswt_pane

0x7e2f,	// (0x00018183) list_single_text_info_pane

0x7ebe,	// (0x00018212) eswt_ctrl_button_pane

0x7ebe,	// (0x00018212) eswt_ctrl_canvas_pane

0x7ec6,	// (0x0001821a) eswt_ctrl_combo_pane

0x7ebe,	// (0x00018212) eswt_ctrl_default_pane

0x7ebe,	// (0x00018212) eswt_ctrl_label_pane

0x7ece,	// (0x00018222) eswt_ctrl_wait_pane

0x7ed6,	// (0x0001822a) eswt_shell_pane

0xeb70,	// (0x0001eec4) listscroll_eswt_app_pane

0x7ef6,	// (0x0001824a) popup_eswt_tasktip_window_ParamLimits

0x7ef6,	// (0x0001824a) popup_eswt_tasktip_window

0x4986,	// (0x00014cda) bg_popup_window_pane_cp18

0x7f07,	// (0x0001825b) eswt_control_pane_g1_ParamLimits

0x7f07,	// (0x0001825b) eswt_control_pane_g1

0x7f14,	// (0x00018268) eswt_control_pane_g2_ParamLimits

0x7f14,	// (0x00018268) eswt_control_pane_g2

0x7f21,	// (0x00018275) eswt_control_pane_g3_ParamLimits

0x7f21,	// (0x00018275) eswt_control_pane_g3

0x7f2e,	// (0x00018282) eswt_control_pane_g4_ParamLimits

0x7f2e,	// (0x00018282) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0001ff23) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0001ff23) eswt_control_pane_g

0x313f,	// (0x00013493) bg_button_pane_ParamLimits

0x313f,	// (0x00013493) bg_button_pane

0x2959,	// (0x00012cad) common_borders_pane_copy2_ParamLimits

0x2959,	// (0x00012cad) common_borders_pane_copy2

0x7f3b,	// (0x0001828f) control_button_pane_g1_ParamLimits

0x7f3b,	// (0x0001828f) control_button_pane_g1

0x7f47,	// (0x0001829b) control_button_pane_g2_ParamLimits

0x7f47,	// (0x0001829b) control_button_pane_g2

0x7f53,	// (0x000182a7) control_button_pane_g3_ParamLimits

0x7f53,	// (0x000182a7) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0001ff2c) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0001ff2c) control_button_pane_g

0x7f67,	// (0x000182bb) control_button_pane_t1

0x7f75,	// (0x000182c9) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0001ff33) control_button_pane_t

0x4864,	// (0x00014bb8) bg_button_pane_g1

0x4874,	// (0x00014bc8) bg_button_pane_g2

0x486c,	// (0x00014bc0) bg_button_pane_g3

0x4884,	// (0x00014bd8) bg_button_pane_g4

0x487c,	// (0x00014bd0) bg_button_pane_g5

0x488c,	// (0x00014be0) bg_button_pane_g6

0x4894,	// (0x00014be8) bg_button_pane_g7

0x48a4,	// (0x00014bf8) bg_button_pane_g8

0x489c,	// (0x00014bf0) bg_button_pane_g9

0x0008,

0xf837,	// (0x0001fb8b) bg_button_pane_g

0x73a7,	// (0x000176fb) common_borders_pane_ParamLimits

0x73a7,	// (0x000176fb) common_borders_pane

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy1_ParamLimits

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy1

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy1_ParamLimits

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy1

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy1_ParamLimits

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy1

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy1_ParamLimits

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy1

0x73e2,	// (0x00017736) bg_eswt_ctrl_canvas_pane_g1

0x73a7,	// (0x000176fb) common_borders_pane_cp2_ParamLimits

0x73a7,	// (0x000176fb) common_borders_pane_cp2

0x73a7,	// (0x000176fb) common_borders_pane_cp3_ParamLimits

0x73a7,	// (0x000176fb) common_borders_pane_cp3

0x7f83,	// (0x000182d7) separator_horizontal_pane

0x7f8b,	// (0x000182df) separator_vertical_pane

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy2_ParamLimits

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy2

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy2_ParamLimits

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy2

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy2_ParamLimits

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy2

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy2_ParamLimits

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy2

0xeb70,	// (0x0001eec4) common_borders_pane_cp4

0x7f94,	// (0x000182e8) separator_horizontal_pane_g1

0x7f9d,	// (0x000182f1) separator_horizontal_pane_g2

0x7fa6,	// (0x000182fa) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0001ff38) separator_horizontal_pane_g

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy3_ParamLimits

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy3

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy3_ParamLimits

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy3

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy3_ParamLimits

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy3

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy3_ParamLimits

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy3

0xeb70,	// (0x0001eec4) common_borders_pane_cp5

0x7faf,	// (0x00018303) separator_vertical_pane_g1

0x7fb8,	// (0x0001830c) separator_vertical_pane_g2

0x7fc1,	// (0x00018315) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0001ff3f) separator_vertical_pane_g

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy4_ParamLimits

0x7f07,	// (0x0001825b) eswt_control_pane_g1_copy4

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy4_ParamLimits

0x7f14,	// (0x00018268) eswt_control_pane_g2_copy4

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy4_ParamLimits

0x7f21,	// (0x00018275) eswt_control_pane_g3_copy4

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy4_ParamLimits

0x7f2e,	// (0x00018282) eswt_control_pane_g4_copy4

0x7fca,	// (0x0001831e) eswt_ctrl_combo_button_pane

0x7fd2,	// (0x00018326) eswt_ctrl_input_pane

0x7fda,	// (0x0001832e) popup_choice_list_window_cp70

0x7fe2,	// (0x00018336) eswt_ctrl_input_pane_t1

0xeb70,	// (0x0001eec4) input_focus_pane_cp70

0x73a7,	// (0x000176fb) bg_button_pane_cp70_ParamLimits

0x73a7,	// (0x000176fb) bg_button_pane_cp70

0x7ff0,	// (0x00018344) eswt_ctrl_combo_button_pane_g1

0x7ff8,	// (0x0001834c) wait_bar_pane_cp70

0x4986,	// (0x00014cda) bg_popup_window_pane_cp70_ParamLimits

0x4986,	// (0x00014cda) bg_popup_window_pane_cp70

0x8000,	// (0x00018354) popup_eswt_tasktip_window_t1

0x8016,	// (0x0001836a) wait_bar_pane_cp71_ParamLimits

0x8016,	// (0x0001836a) wait_bar_pane_cp71

0x8022,	// (0x00018376) grid_eswt_app_pane

0x3760,	// (0x00013ab4) scroll_pane_cp70

0xe07d,	// (0x0001e3d1) cell_eswt_app_pane_ParamLimits

0xe07d,	// (0x0001e3d1) cell_eswt_app_pane

0xe0a7,	// (0x0001e3fb) cell_eswt_app_pane_g1_ParamLimits

0xe0a7,	// (0x0001e3fb) cell_eswt_app_pane_g1

0xe0d6,	// (0x0001e42a) cell_eswt_app_pane_g2_ParamLimits

0xe0d6,	// (0x0001e42a) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0001ff46) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0001ff46) cell_eswt_app_pane_g

0xe0ff,	// (0x0001e453) cell_eswt_app_pane_t1_ParamLimits

0xe0ff,	// (0x0001e453) cell_eswt_app_pane_t1

0x80e5,	// (0x00018439) grid_highlight_pane_cp70_ParamLimits

0x80e5,	// (0x00018439) grid_highlight_pane_cp70

0x3ed1,	// (0x00014225) set_content_pane_g1

0xd2bd,	// (0x0001d611) status_small_volume_pane

0x154c,	// (0x000118a0) status_small_volume_pane_g1

0x1554,	// (0x000118a8) volume_small2_pane

0x155d,	// (0x000118b1) volume_small2_pane_g1

0x1566,	// (0x000118ba) volume_small2_pane_g2

0x156f,	// (0x000118c3) volume_small2_pane_g3

0x1578,	// (0x000118cc) volume_small2_pane_g4

0x1581,	// (0x000118d5) volume_small2_pane_g5

0x158a,	// (0x000118de) volume_small2_pane_g6

0x1593,	// (0x000118e7) volume_small2_pane_g7

0x159c,	// (0x000118f0) volume_small2_pane_g8

0x15a5,	// (0x000118f9) volume_small2_pane_g9

0x15ae,	// (0x00011902) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0001ff4b) volume_small2_pane_g

0x77a8,	// (0x00017afc) fep_vkb_top_text_pane_g1_ParamLimits

0xdfd4,	// (0x0001e328) fep_vkb_top_text_pane_t1_ParamLimits

0x7a1d,	// (0x00017d71) popup_preview_fixed_window_g3_ParamLimits

0x7a1d,	// (0x00017d71) popup_preview_fixed_window_g3

0xbfc5,	// (0x0001c319) popup_toolbar_trans_pane

0xd948,	// (0x0001dc9c) aid_height_set_list_ParamLimits

0x5d4a,	// (0x0001609e) aid_size_parent_ParamLimits

0x431c,	// (0x00014670) list_highlight_pane_cp2_ParamLimits

0x3ed1,	// (0x00014225) set_content_pane_g1_ParamLimits

0xdb2a,	// (0x0001de7e) list_single_image_pane_ParamLimits

0xdb2a,	// (0x0001de7e) list_single_image_pane

0xe131,	// (0x0001e485) aid_size_cell_image_ParamLimits

0xe131,	// (0x0001e485) aid_size_cell_image

0xe13e,	// (0x0001e492) grid_single_image_pane_ParamLimits

0xe13e,	// (0x0001e492) grid_single_image_pane

0x5fbd,	// (0x00016311) list_single_image_pane_g1_ParamLimits

0x5fbd,	// (0x00016311) list_single_image_pane_g1

0x810a,	// (0x0001845e) list_single_image_pane_g2_ParamLimits

0x810a,	// (0x0001845e) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0001ff60) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0001ff60) list_single_image_pane_g

0x811e,	// (0x00018472) list_single_image_pane_t1_ParamLimits

0x811e,	// (0x00018472) list_single_image_pane_t1

0xe14a,	// (0x0001e49e) cell_image_list_pane_ParamLimits

0xe14a,	// (0x0001e49e) cell_image_list_pane

0xe15e,	// (0x0001e4b2) cell_image_list_pane_g1

0xe167,	// (0x0001e4bb) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0001ff65) cell_image_list_pane_g

0x815a,	// (0x000184ae) aid_size_cell_tb_trans_pane

0x313f,	// (0x00013493) bg_tb_trans_pane

0x816c,	// (0x000184c0) grid_tb_trans_pane

0x4864,	// (0x00014bb8) bg_tb_trans_pane_g1

0x4874,	// (0x00014bc8) bg_tb_trans_pane_g2

0x486c,	// (0x00014bc0) bg_tb_trans_pane_g3

0x4884,	// (0x00014bd8) bg_tb_trans_pane_g4

0x487c,	// (0x00014bd0) bg_tb_trans_pane_g5

0x48a4,	// (0x00014bf8) bg_tb_trans_pane_g6

0x489c,	// (0x00014bf0) bg_tb_trans_pane_g7

0x488c,	// (0x00014be0) bg_tb_trans_pane_g8

0x4894,	// (0x00014be8) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0001ff6a) bg_tb_trans_pane_g

0x8180,	// (0x000184d4) cell_toolbar_trans_pane_ParamLimits

0x8180,	// (0x000184d4) cell_toolbar_trans_pane

0x73e2,	// (0x00017736) cell_toolbar_trans_pane_g1

0xdd8b,	// (0x0001e0df) list_form2_midp_pane_t1

0xdd99,	// (0x0001e0ed) list_form2_midp_pane_t2

0x0001,

0xfab3,	// (0x0001fe07) list_form2_midp_pane_t

0x6f84,	// (0x000172d8) scroll_pane_cp51_ParamLimits

0x718f,	// (0x000174e3) form2_midp_wait_pane_g1

0x7198,	// (0x000174ec) form2_midp_wait_pane_g2

0x71a1,	// (0x000174f5) form2_midp_wait_pane_g3

0x0002,

0xfac8,	// (0x0001fe1c) form2_midp_wait_pane_g

0x2341,	// (0x00012695) list_highlight_pane_cp21_ParamLimits

0x71ed,	// (0x00017541) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x71fc,	// (0x00017550) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5f50,	// (0x000162a4) list_single_2graphic_im_pane_ParamLimits

0x5f50,	// (0x000162a4) list_single_2graphic_im_pane

0x81a6,	// (0x000184fa) list_single_2graphic_im_pane_g1_ParamLimits

0x81a6,	// (0x000184fa) list_single_2graphic_im_pane_g1

0x81b7,	// (0x0001850b) list_single_2graphic_im_pane_g2_ParamLimits

0x81b7,	// (0x0001850b) list_single_2graphic_im_pane_g2

0x81c3,	// (0x00018517) list_single_2graphic_im_pane_g3_ParamLimits

0x81c3,	// (0x00018517) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0001ff7d) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0001ff7d) list_single_2graphic_im_pane_g

0x81e3,	// (0x00018537) list_single_2graphic_im_pane_t1_ParamLimits

0x81e3,	// (0x00018537) list_single_2graphic_im_pane_t1

0x7a29,	// (0x00017d7d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a29,	// (0x00017d7d) list_single_graphic_2heading_pane_fp

0x7a6d,	// (0x00017dc1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7a6d,	// (0x00017dc1) list_single_graphic_2heading_pane_fp_g1

0x7a3e,	// (0x00017d92) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a3e,	// (0x00017d92) list_single_graphic_2heading_pane_fp_g2

0x3165,	// (0x000134b9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3165,	// (0x000134b9) list_single_graphic_2heading_pane_fp_g3

0x3171,	// (0x000134c5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3171,	// (0x000134c5) list_single_graphic_2heading_pane_fp_g4

0x7a4a,	// (0x00017d9e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a4a,	// (0x00017d9e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0001fea4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0001fea4) list_single_graphic_2heading_pane_fp_g

0x8214,	// (0x00018568) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8214,	// (0x00018568) list_single_graphic_2heading_pane_fp_t1

0x7aa5,	// (0x00017df9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7aa5,	// (0x00017df9) list_single_graphic_2heading_pane_fp_t2

0x822a,	// (0x0001857e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x822a,	// (0x0001857e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0001ff86) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0001ff86) list_single_graphic_2heading_pane_fp_t

0x746e,	// (0x000177c2) fep_hwr_write_pane_g5_ParamLimits

0x746e,	// (0x000177c2) fep_hwr_write_pane_g5

0x747a,	// (0x000177ce) fep_hwr_write_pane_g6_ParamLimits

0x747a,	// (0x000177ce) fep_hwr_write_pane_g6

0x7ed6,	// (0x0001822a) eswt_shell_pane_ParamLimits

0x4986,	// (0x00014cda) bg_popup_window_pane_cp18_ParamLimits

0x5c80,	// (0x00015fd4) heading_pane_cp70

0x8000,	// (0x00018354) popup_eswt_tasktip_window_t1_ParamLimits

0xd35b,	// (0x0001d6af) aid_touch_tab_arrow_left

0xd371,	// (0x0001d6c5) aid_touch_tab_arrow_right

0xc77c,	// (0x0001cad0) title_pane_g3_ParamLimits

0xc77c,	// (0x0001cad0) title_pane_g3

0x301e,	// (0x00013372) set_value_pane_g1

0xbfc5,	// (0x0001c319) popup_toolbar_trans_pane_ParamLimits

0x815a,	// (0x000184ae) aid_size_cell_tb_trans_pane_ParamLimits

0x313f,	// (0x00013493) bg_tb_trans_pane_ParamLimits

0x816c,	// (0x000184c0) grid_tb_trans_pane_ParamLimits

0x25e4,	// (0x00012938) cont_note_pane_ParamLimits

0x25e4,	// (0x00012938) cont_note_pane

0x2959,	// (0x00012cad) cont_snote2_single_text_pane_ParamLimits

0x2959,	// (0x00012cad) cont_snote2_single_text_pane

0x2959,	// (0x00012cad) cont_snote2_single_graphic_pane_ParamLimits

0x2959,	// (0x00012cad) cont_snote2_single_graphic_pane

0x4fde,	// (0x00015332) cont_note_wait_pane_ParamLimits

0x4fde,	// (0x00015332) cont_note_wait_pane

0x4fde,	// (0x00015332) cont_note_image_pane_ParamLimits

0x4fde,	// (0x00015332) cont_note_image_pane

0x8240,	// (0x00018594) popup_note2_window_g1_ParamLimits

0x8240,	// (0x00018594) popup_note2_window_g1

0x8271,	// (0x000185c5) popup_note2_window_t1_ParamLimits

0x8271,	// (0x000185c5) popup_note2_window_t1

0x82b6,	// (0x0001860a) popup_note2_window_t2_ParamLimits

0x82b6,	// (0x0001860a) popup_note2_window_t2

0x82fb,	// (0x0001864f) popup_note2_window_t3_ParamLimits

0x82fb,	// (0x0001864f) popup_note2_window_t3

0x8340,	// (0x00018694) popup_note2_window_t4_ParamLimits

0x8340,	// (0x00018694) popup_note2_window_t4

0x2668,	// (0x000129bc) popup_note2_window_t5_ParamLimits

0x2668,	// (0x000129bc) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0001ff92) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0001ff92) popup_note2_window_t

0x836f,	// (0x000186c3) popup_note2_image_window_g1_ParamLimits

0x836f,	// (0x000186c3) popup_note2_image_window_g1

0x837b,	// (0x000186cf) popup_note2_image_window_g2_ParamLimits

0x837b,	// (0x000186cf) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0001ff9d) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0001ff9d) popup_note2_image_window_g

0x838d,	// (0x000186e1) popup_note2_image_window_t1_ParamLimits

0x838d,	// (0x000186e1) popup_note2_image_window_t1

0x83a5,	// (0x000186f9) popup_note2_image_window_t2_ParamLimits

0x83a5,	// (0x000186f9) popup_note2_image_window_t2

0x83bd,	// (0x00018711) popup_note2_image_window_t3_ParamLimits

0x83bd,	// (0x00018711) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0001ffa2) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0001ffa2) popup_note2_image_window_t

0x4fec,	// (0x00015340) popup_note2_wait_window_g1_ParamLimits

0x4fec,	// (0x00015340) popup_note2_wait_window_g1

0x83d9,	// (0x0001872d) popup_note2_wait_window_g2_ParamLimits

0x83d9,	// (0x0001872d) popup_note2_wait_window_g2

0x5004,	// (0x00015358) popup_note2_wait_window_g3_ParamLimits

0x5004,	// (0x00015358) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0001ffa9) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0001ffa9) popup_note2_wait_window_g

0x83e5,	// (0x00018739) popup_note2_wait_window_t1_ParamLimits

0x83e5,	// (0x00018739) popup_note2_wait_window_t1

0x8403,	// (0x00018757) popup_note2_wait_window_t2_ParamLimits

0x8403,	// (0x00018757) popup_note2_wait_window_t2

0x8421,	// (0x00018775) popup_note2_wait_window_t3_ParamLimits

0x8421,	// (0x00018775) popup_note2_wait_window_t3

0x8433,	// (0x00018787) popup_note2_wait_window_t4_ParamLimits

0x8433,	// (0x00018787) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0001ffb0) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0001ffb0) popup_note2_wait_window_t

0x8445,	// (0x00018799) wait_bar2_pane_ParamLimits

0x8445,	// (0x00018799) wait_bar2_pane

0x845d,	// (0x000187b1) popup_snote2_single_text_window_g1_ParamLimits

0x845d,	// (0x000187b1) popup_snote2_single_text_window_g1

0x8485,	// (0x000187d9) popup_snote2_single_text_window_t1_ParamLimits

0x8485,	// (0x000187d9) popup_snote2_single_text_window_t1

0x84d1,	// (0x00018825) popup_snote2_single_text_window_t2_ParamLimits

0x84d1,	// (0x00018825) popup_snote2_single_text_window_t2

0x851d,	// (0x00018871) popup_snote2_single_text_window_t3_ParamLimits

0x851d,	// (0x00018871) popup_snote2_single_text_window_t3

0x855e,	// (0x000188b2) popup_snote2_single_text_window_t4_ParamLimits

0x855e,	// (0x000188b2) popup_snote2_single_text_window_t4

0x8594,	// (0x000188e8) popup_snote2_single_text_window_t5_ParamLimits

0x8594,	// (0x000188e8) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0001ffb9) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0001ffb9) popup_snote2_single_text_window_t

0x85bf,	// (0x00018913) popup_snote2_single_graphic_window_g1_ParamLimits

0x85bf,	// (0x00018913) popup_snote2_single_graphic_window_g1

0x85e7,	// (0x0001893b) popup_snote2_single_graphic_window_g2_ParamLimits

0x85e7,	// (0x0001893b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0001ffc4) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0001ffc4) popup_snote2_single_graphic_window_g

0x860f,	// (0x00018963) popup_snote2_single_graphic_window_t1_ParamLimits

0x860f,	// (0x00018963) popup_snote2_single_graphic_window_t1

0x865b,	// (0x000189af) popup_snote2_single_graphic_window_t2_ParamLimits

0x865b,	// (0x000189af) popup_snote2_single_graphic_window_t2

0x851d,	// (0x00018871) popup_snote2_single_graphic_window_t3_ParamLimits

0x851d,	// (0x00018871) popup_snote2_single_graphic_window_t3

0x855e,	// (0x000188b2) popup_snote2_single_graphic_window_t4_ParamLimits

0x855e,	// (0x000188b2) popup_snote2_single_graphic_window_t4

0x8594,	// (0x000188e8) popup_snote2_single_graphic_window_t5_ParamLimits

0x8594,	// (0x000188e8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0001ffc9) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0001ffc9) popup_snote2_single_graphic_window_t

0x6e45,	// (0x00017199) clock_nsta_pane_cp2_t1

0x6e45,	// (0x00017199) clock_nsta_pane_cp2_t2

0x0001,

0xfa89,	// (0x0001fddd) clock_nsta_pane_cp2_t

0x3159,	// (0x000134ad) form_field_data_wide_pane_g1_ParamLimits

0x3165,	// (0x000134b9) form_field_data_wide_pane_g2_ParamLimits

0x3165,	// (0x000134b9) form_field_data_wide_pane_g2

0x3171,	// (0x000134c5) form_field_data_wide_pane_g3_ParamLimits

0x3171,	// (0x000134c5) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001f9a5) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001f9a5) form_field_data_wide_pane_g

0xdcbe,	// (0x0001e012) grid_touch_3_pane_ParamLimits

0xdcbe,	// (0x0001e012) grid_touch_3_pane

0xe170,	// (0x0001e4c4) cell_touch_3_pane_ParamLimits

0xe170,	// (0x0001e4c4) cell_touch_3_pane

0x73e2,	// (0x00017736) cell_touch_3_pane_g1

0x73e2,	// (0x00017736) cell_touch_3_pane_g2

0x0001,

0xfb0e,	// (0x0001fe62) cell_touch_3_pane_g

0x26c0,	// (0x00012a14) cont_query_data_pane

0x26c8,	// (0x00012a1c) cont_query_data_pane_cp1

0x86d5,	// (0x00018a29) button_value_adjust_pane_cp7

0x86dd,	// (0x00018a31) query_popup_pane_cp3

0x3a47,	// (0x00013d9b) bg_popup_sub_pane_cp22_ParamLimits

0x032e,	// (0x00010682) navi_navi_volume_pane_cp2

0x0349,	// (0x0001069d) popup_side_volume_key_window_g2

0x0358,	// (0x000106ac) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0001fa3b) popup_side_volume_key_window_g

0x0375,	// (0x000106c9) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0001fa42) popup_side_volume_key_window_t

0x3d90,	// (0x000140e4) popup_side_volume_key_window_ParamLimits

0xcb82,	// (0x0001ced6) list_double_graphic_pane_g4_ParamLimits

0xcb82,	// (0x0001ced6) list_double_graphic_pane_g4

0xdb05,	// (0x0001de59) list_single_2heading_msg_pane_ParamLimits

0xdb05,	// (0x0001de59) list_single_2heading_msg_pane

0xe1b8,	// (0x0001e50c) list_single_2heading_msg_pane_g1_ParamLimits

0xe1b8,	// (0x0001e50c) list_single_2heading_msg_pane_g1

0xe1c4,	// (0x0001e518) list_single_2heading_msg_pane_g2_ParamLimits

0xe1c4,	// (0x0001e518) list_single_2heading_msg_pane_g2

0xe1d7,	// (0x0001e52b) list_single_2heading_msg_pane_g3_ParamLimits

0xe1d7,	// (0x0001e52b) list_single_2heading_msg_pane_g3

0x8724,	// (0x00018a78) list_single_2heading_msg_pane_g4_ParamLimits

0x8724,	// (0x00018a78) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0001ffd4) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0001ffd4) list_single_2heading_msg_pane_g

0x873c,	// (0x00018a90) list_single_2heading_msg_pane_t1_ParamLimits

0x873c,	// (0x00018a90) list_single_2heading_msg_pane_t1

0xe1e3,	// (0x0001e537) list_single_2heading_msg_pane_t2_ParamLimits

0xe1e3,	// (0x0001e537) list_single_2heading_msg_pane_t2

0xe24e,	// (0x0001e5a2) list_single_2heading_msg_pane_t3_ParamLimits

0xe24e,	// (0x0001e5a2) list_single_2heading_msg_pane_t3

0x87cc,	// (0x00018b20) list_single_2heading_msg_pane_t4_ParamLimits

0x87cc,	// (0x00018b20) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0001ffdd) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0001ffdd) list_single_2heading_msg_pane_t

0x2295,	// (0x000125e9) title_pane_g4_ParamLimits

0x2295,	// (0x000125e9) title_pane_g4

0x013d,	// (0x00010491) title_pane_stacon_g3_ParamLimits

0x013d,	// (0x00010491) title_pane_stacon_g3

0x81d7,	// (0x0001852b) list_single_2graphic_im_pane_g4_ParamLimits

0x81d7,	// (0x0001852b) list_single_2graphic_im_pane_g4

0x5a3d,	// (0x00015d91) popup_side_volume_key_window_cp

0x6352,	// (0x000166a6) main_idle_act2_pane_t1

0x0d50,	// (0x000110a4) toolbar_button_pane_g10

0xcadb,	// (0x0001ce2f) popup_toolbar_window_cp1

0x6e36,	// (0x0001718a) clock_nsta_pane_cp_t1

0x6e36,	// (0x0001718a) clock_nsta_pane_cp_t2

0x0001,

0xfa84,	// (0x0001fdd8) clock_nsta_pane_cp_t

0x032e,	// (0x00010682) navi_navi_volume_pane_cp2_ParamLimits

0x033d,	// (0x00010691) popup_side_volume_key_window_g1_ParamLimits

0x0349,	// (0x0001069d) popup_side_volume_key_window_g2_ParamLimits

0x0358,	// (0x000106ac) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0001fa3b) popup_side_volume_key_window_g_ParamLimits

0x11b8,	// (0x0001150c) fep_hwr_aid_pane

0x125f,	// (0x000115b3) bg_fep_hwr_top_pane_g4_ParamLimits

0x743e,	// (0x00017792) fep_hwr_top_pane_g1_ParamLimits

0x7450,	// (0x000177a4) fep_hwr_top_pane_g2_ParamLimits

0x127f,	// (0x000115d3) fep_hwr_top_pane_g3_ParamLimits

0xfad9,	// (0x0001fe2d) fep_hwr_top_pane_g_ParamLimits

0x1294,	// (0x000115e8) fep_hwr_top_text_pane_ParamLimits

0x5800,	// (0x00015b54) aid_touch_tab_arrow_arrow_2

0x5809,	// (0x00015b5d) aid_touch_tab_arrow_left_2

0x11cc,	// (0x00011520) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1203,	// (0x00011557) fep_hwr_prediction_pane

0x75b0,	// (0x00017904) fep_vkb_prediction_pane

0xdfb4,	// (0x0001e308) fep_vkb_side_pane_g3_ParamLimits

0xdfb4,	// (0x0001e308) fep_vkb_side_pane_g3

0x140f,	// (0x00011763) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x147b,	// (0x000117cf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1488,	// (0x000117dc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x0001fedc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x15b7,	// (0x0001190b) fep_hwr_prediction_pane_g1

0x15c1,	// (0x00011915) fep_hwr_prediction_pane_g2

0x15c9,	// (0x0001191d) fep_hwr_prediction_pane_g3

0x15d1,	// (0x00011925) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0001ffe6) fep_hwr_prediction_pane_g

0x87f1,	// (0x00018b45) fep_vkb_prediction_pane_g1

0x87fb,	// (0x00018b4f) fep_vkb_prediction_pane_g2

0x8803,	// (0x00018b57) fep_vkb_prediction_pane_g3

0x880b,	// (0x00018b5f) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0001ffef) fep_vkb_prediction_pane_g

0x1038,	// (0x0001138c) slider_set_pane_g3

0x104c,	// (0x000113a0) slider_set_pane_g4

0x1064,	// (0x000113b8) slider_set_pane_g5

0x1038,	// (0x0001138c) slider_set_pane_g6

0x107a,	// (0x000113ce) slider_set_pane_g7

0x5eaf,	// (0x00016203) slider_form_pane_g3

0x5eb8,	// (0x0001620c) slider_form_pane_g4

0x5ec0,	// (0x00016214) slider_form_pane_g5

0x5eaf,	// (0x00016203) slider_form_pane_g6

0xdabb,	// (0x0001de0f) slider_form_pane_g7

0x664f,	// (0x000169a3) slider_set_pane_vc_g3

0x6658,	// (0x000169ac) slider_set_pane_vc_g4

0x6661,	// (0x000169b5) slider_set_pane_vc_g5

0x664f,	// (0x000169a3) slider_set_pane_vc_g6

0x666a,	// (0x000169be) slider_set_pane_vc_g7

0x6af4,	// (0x00016e48) slider_form_pane_vc_g1

0x6afd,	// (0x00016e51) slider_form_pane_vc_g2

0x6b06,	// (0x00016e5a) slider_form_pane_vc_g3

0x6af4,	// (0x00016e48) slider_form_pane_vc_g4

0x6b0f,	// (0x00016e63) slider_form_pane_vc_g5

0x0004,

0xfa56,	// (0x0001fdaa) slider_form_pane_vc_g

0xf416,	// (0x0001f76a) main_idle_act3_pane

0x8813,	// (0x00018b67) ai3_links_pane

0xe2bc,	// (0x0001e610) popup_ai3_data_window_ParamLimits

0xe2bc,	// (0x0001e610) popup_ai3_data_window

0xeb70,	// (0x0001eec4) grid_ai3_links_pane

0xe2d6,	// (0x0001e62a) cell_ai3_links_pane_ParamLimits

0xe2d6,	// (0x0001e62a) cell_ai3_links_pane

0x884e,	// (0x00018ba2) bg_popup_sub_pane_cp11

0x885b,	// (0x00018baf) cell_ai3_links_pane_g1

0xeb70,	// (0x0001eec4) bg_popup_sub_pane_cp12

0x8880,	// (0x00018bd4) heading_ai3_data_pane

0x8888,	// (0x00018bdc) list_ai3_gene_pane

0x8894,	// (0x00018be8) popup_ai3_data_window_g1

0x889c,	// (0x00018bf0) heading_ai3_data_pane_g1

0x88a4,	// (0x00018bf8) heading_ai3_data_pane_t1

0x88b2,	// (0x00018c06) list_double_ai3_gene_pane_ParamLimits

0x88b2,	// (0x00018c06) list_double_ai3_gene_pane

0x88bf,	// (0x00018c13) list_single_ai3_gene_pane_ParamLimits

0x88bf,	// (0x00018c13) list_single_ai3_gene_pane

0x73a7,	// (0x000176fb) list_highlight_pane_cp7_ParamLimits

0x73a7,	// (0x000176fb) list_highlight_pane_cp7

0x88cc,	// (0x00018c20) list_single_a13_gene_pane_t1_ParamLimits

0x88cc,	// (0x00018c20) list_single_a13_gene_pane_t1

0x88e3,	// (0x00018c37) list_single_ai3_gene_pane_g1

0x88ec,	// (0x00018c40) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0001fff8) list_single_ai3_gene_pane_g

0x88f4,	// (0x00018c48) list_double_ai3_gene_pane_g1_ParamLimits

0x88f4,	// (0x00018c48) list_double_ai3_gene_pane_g1

0x8900,	// (0x00018c54) list_double_ai3_gene_pane_t1_ParamLimits

0x8900,	// (0x00018c54) list_double_ai3_gene_pane_t1

0x891c,	// (0x00018c70) list_double_ai3_gene_pane_t2_ParamLimits

0x891c,	// (0x00018c70) list_double_ai3_gene_pane_t2

0x8932,	// (0x00018c86) list_double_ai3_gene_pane_t3_ParamLimits

0x8932,	// (0x00018c86) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0001fffd) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0001fffd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x86ee,	// (0x00018a42) aid_size_min_col_2

0xe1a2,	// (0x0001e4f6) aid_size_min_msg_ParamLimits

0xe1a2,	// (0x0001e4f6) aid_size_min_msg

0xdfc8,	// (0x0001e31c) fep_vkb_top_text_pane_g2_ParamLimits

0xdfc8,	// (0x0001e31c) fep_vkb_top_text_pane_g2

0x0001,

0xfb09,	// (0x0001fe5d) fep_vkb_top_text_pane_g_ParamLimits

0xfb09,	// (0x0001fe5d) fep_vkb_top_text_pane_g

0xf416,	// (0x0001f76a) main_hc_apps_shell_pane

0x894f,	// (0x00018ca3) grid_hc_apps_pane_ParamLimits

0x894f,	// (0x00018ca3) grid_hc_apps_pane

0x8961,	// (0x00018cb5) list_hc_apps_pane

0x8969,	// (0x00018cbd) scroll_pane_cp37_ParamLimits

0x8969,	// (0x00018cbd) scroll_pane_cp37

0xe2f0,	// (0x0001e644) cell_hc_apps_pane_ParamLimits

0xe2f0,	// (0x0001e644) cell_hc_apps_pane

0xe3ae,	// (0x0001e702) cell_hc_apps_pane_g1_ParamLimits

0xe3ae,	// (0x0001e702) cell_hc_apps_pane_g1

0x8a53,	// (0x00018da7) cell_hc_apps_pane_g2_ParamLimits

0x8a53,	// (0x00018da7) cell_hc_apps_pane_g2

0x8a6f,	// (0x00018dc3) cell_hc_apps_pane_g3_ParamLimits

0x8a6f,	// (0x00018dc3) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x00020004) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x00020004) cell_hc_apps_pane_g

0xe3da,	// (0x0001e72e) cell_hc_apps_pane_t1_ParamLimits

0xe3da,	// (0x0001e72e) cell_hc_apps_pane_t1

0x25e4,	// (0x00012938) grid_highlight_pane_cp10_ParamLimits

0x25e4,	// (0x00012938) grid_highlight_pane_cp10

0xe418,	// (0x0001e76c) list_single_hc_apps_pane_ParamLimits

0xe418,	// (0x0001e76c) list_single_hc_apps_pane

0xe445,	// (0x0001e799) list_single_hc_apps_pane_g1

0xe45e,	// (0x0001e7b2) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002000b) list_single_hc_apps_pane_g

0xe477,	// (0x0001e7cb) list_single_hc_apps_pane_g2_copy1

0x8b7b,	// (0x00018ecf) list_single_hc_apps_pane_t1

0x2341,	// (0x00012695) bg_set_opt_pane_cp_ParamLimits

0x0065,	// (0x000103b9) setting_slider_pane_t1_ParamLimits

0x007e,	// (0x000103d2) setting_slider_pane_t2_ParamLimits

0x0098,	// (0x000103ec) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001f88d) setting_slider_pane_t_ParamLimits

0x00b0,	// (0x00010404) slider_set_pane_ParamLimits

0x05d7,	// (0x0001092b) control_pane_g5_ParamLimits

0x05d7,	// (0x0001092b) control_pane_g5

0x5cfe,	// (0x00016052) slider_set_pane_g1_ParamLimits

0x102c,	// (0x00011380) slider_set_pane_g2_ParamLimits

0x1038,	// (0x0001138c) slider_set_pane_g3_ParamLimits

0x104c,	// (0x000113a0) slider_set_pane_g4_ParamLimits

0x1064,	// (0x000113b8) slider_set_pane_g5_ParamLimits

0x1038,	// (0x0001138c) slider_set_pane_g6_ParamLimits

0x107a,	// (0x000113ce) slider_set_pane_g7_ParamLimits

0xf935,	// (0x0001fc89) slider_set_pane_g_ParamLimits

0x3e7c,	// (0x000141d0) navi_icon_text_pane_ParamLimits

0xd324,	// (0x0001d678) aid_fill_nsta_2_ParamLimits

0xd35b,	// (0x0001d6af) aid_touch_tab_arrow_left_ParamLimits

0xd371,	// (0x0001d6c5) aid_touch_tab_arrow_right_ParamLimits

0xd40c,	// (0x0001d760) clock_nsta_pane_ParamLimits

0x57e2,	// (0x00015b36) navi_icon_pane_g1_ParamLimits

0x57ee,	// (0x00015b42) navi_text_pane_t1_ParamLimits

0x6f42,	// (0x00017296) navi_icon_text_pane_g1_ParamLimits

0x6f4e,	// (0x000172a2) navi_icon_text_pane_t1_ParamLimits

0xe445,	// (0x0001e799) list_single_hc_apps_pane_g1_ParamLimits

0xe45e,	// (0x0001e7b2) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002000b) list_single_hc_apps_pane_g_ParamLimits

0xe477,	// (0x0001e7cb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8b7b,	// (0x00018ecf) list_single_hc_apps_pane_t1_ParamLimits

0xb739,	// (0x0001ba8d) popup_toolbar2_fixed_window_ParamLimits

0xb739,	// (0x0001ba8d) popup_toolbar2_fixed_window

0xbfbb,	// (0x0001c30f) popup_toolbar2_float_window

0xeb70,	// (0x0001eec4) bg_popup_sub_pane_cp27

0x8ba9,	// (0x00018efd) grid_toolbar2_float_pane

0xeb70,	// (0x0001eec4) bg_popup_sub_pane_cp26

0x8ba9,	// (0x00018efd) grid_toolbar2_fixed_pane

0xe493,	// (0x0001e7e7) cell_toolbar2_fixed_pane_ParamLimits

0xe493,	// (0x0001e7e7) cell_toolbar2_fixed_pane

0xe4ad,	// (0x0001e801) cell_toolbar2_fixed_pane_g1

0x8bca,	// (0x00018f1e) toolbar2_fixed_button_pane

0x4864,	// (0x00014bb8) toolbar2_fixed_button_pane_g1

0x4874,	// (0x00014bc8) toolbar2_fixed_button_pane_g2

0x486c,	// (0x00014bc0) toolbar2_fixed_button_pane_g3

0x4884,	// (0x00014bd8) toolbar2_fixed_button_pane_g4

0x487c,	// (0x00014bd0) toolbar2_fixed_button_pane_g5

0x488c,	// (0x00014be0) toolbar2_fixed_button_pane_g6

0x4894,	// (0x00014be8) toolbar2_fixed_button_pane_g7

0x48a4,	// (0x00014bf8) toolbar2_fixed_button_pane_g8

0x489c,	// (0x00014bf0) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x0001fb8b) toolbar2_fixed_button_pane_g

0x8bd2,	// (0x00018f26) cell_toolbar2_float_pane_ParamLimits

0x8bd2,	// (0x00018f26) cell_toolbar2_float_pane

0x8be3,	// (0x00018f37) cell_toolbar2_float_pane_g1

0x8bca,	// (0x00018f1e) toolbar2_fixed_button_pane_cp

0xdea2,	// (0x0001e1f6) fep_vkb_accented_list_pane_ParamLimits

0xdea2,	// (0x0001e1f6) fep_vkb_accented_list_pane

0x13ef,	// (0x00011743) bg_popup_fep_shadow_pane_g9

0x3ff0,	// (0x00014344) bg_popup_fep_shadow_pane_cp3

0x3429,	// (0x0001377d) list_accented_list_pane

0x8bec,	// (0x00018f40) list_single_accented_list_pane_ParamLimits

0x8bec,	// (0x00018f40) list_single_accented_list_pane

0x3ff0,	// (0x00014344) list_highlight_pane_cp10

0x8bfd,	// (0x00018f51) list_single_accented_list_pane_t1

0xbee5,	// (0x0001c239) popup_slider_window_ParamLimits

0xbee5,	// (0x0001c239) popup_slider_window

0x86e5,	// (0x00018a39) aid_indentation_list_msg

0xe5a4,	// (0x0001e8f8) bg_popup_window_pane_cp19

0x8d29,	// (0x0001907d) popup_slider_window_g1

0x8d45,	// (0x00019099) popup_slider_window_g2

0x8d61,	// (0x000190b5) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x00020010) popup_slider_window_g

0x8dc7,	// (0x0001911b) popup_slider_window_t1

0x8e3b,	// (0x0001918f) small_volume_slider_vertical_pane

0x73e2,	// (0x00017736) small_volume_slider_vertical_pane_g1

0x73e2,	// (0x00017736) small_volume_slider_vertical_pane_g2

0x8e57,	// (0x000191ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x00020022) small_volume_slider_vertical_pane_g

0xb6a7,	// (0x0001b9fb) area_side_right_pane_ParamLimits

0xb6a7,	// (0x0001b9fb) area_side_right_pane

0xc0f1,	// (0x0001c445) aid_size_side_button_ParamLimits

0xc0f1,	// (0x0001c445) aid_size_side_button

0xc10a,	// (0x0001c45e) grid_sctrl_middle_pane_ParamLimits

0xc10a,	// (0x0001c45e) grid_sctrl_middle_pane

0x160c,	// (0x00011960) sctrl_sk_bottom_pane

0x161d,	// (0x00011971) sctrl_sk_top_pane

0x162f,	// (0x00011983) aid_touch_sctrl_top

0x163c,	// (0x00011990) bg_sctrl_sk_pane_ParamLimits

0x163c,	// (0x00011990) bg_sctrl_sk_pane

0x164a,	// (0x0001199e) sctrl_sk_top_pane_g1

0x1657,	// (0x000119ab) sctrl_sk_top_pane_t1

0x162f,	// (0x00011983) aid_touch_sctrl_bottom

0x163c,	// (0x00011990) bg_sctrl_sk_pane_cp_ParamLimits

0x163c,	// (0x00011990) bg_sctrl_sk_pane_cp

0x1672,	// (0x000119c6) sctrl_sk_bottom_pane_g1

0x1657,	// (0x000119ab) sctrl_sk_bottom_pane_t1

0xc124,	// (0x0001c478) cell_sctrl_middle_pane_ParamLimits

0xc124,	// (0x0001c478) cell_sctrl_middle_pane

0xc135,	// (0x0001c489) aid_touch_sctrl_middle_ParamLimits

0xc135,	// (0x0001c489) aid_touch_sctrl_middle

0xc142,	// (0x0001c496) bg_sctrl_middle_pane_ParamLimits

0xc142,	// (0x0001c496) bg_sctrl_middle_pane

0x1cdf,	// (0x00012033) cell_sctrl_middle_pane_g1_ParamLimits

0x1cdf,	// (0x00012033) cell_sctrl_middle_pane_g1

0xc150,	// (0x0001c4a4) cell_sctrl_middle_pane_g2_ParamLimits

0xc150,	// (0x0001c4a4) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002002e) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002002e) cell_sctrl_middle_pane_g

0x4864,	// (0x00014bb8) bg_sctrl_middle_pane_g1

0x486c,	// (0x00014bc0) bg_sctrl_middle_pane_g2

0x4874,	// (0x00014bc8) bg_sctrl_middle_pane_g3

0x487c,	// (0x00014bd0) bg_sctrl_middle_pane_g4

0x4884,	// (0x00014bd8) bg_sctrl_middle_pane_g5

0x488c,	// (0x00014be0) bg_sctrl_middle_pane_g6

0x4894,	// (0x00014be8) bg_sctrl_middle_pane_g7

0x489c,	// (0x00014bf0) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x00020033) bg_sctrl_middle_pane_g

0x48a4,	// (0x00014bf8) bg_sctrl_middle_pane_g8_copy1

0x4864,	// (0x00014bb8) bg_sctrl_sk_pane_g1

0x4874,	// (0x00014bc8) bg_sctrl_sk_pane_g2

0x486c,	// (0x00014bc0) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x0001fb8b) bg_sctrl_sk_pane_g

0x2b17,	// (0x00012e6b) aid_size_touch_scroll_bar

0x4884,	// (0x00014bd8) bg_sctrl_sk_pane_g4

0x487c,	// (0x00014bd0) bg_sctrl_sk_pane_g5

0x488c,	// (0x00014be0) bg_sctrl_sk_pane_g6

0x4894,	// (0x00014be8) bg_sctrl_sk_pane_g7

0x48a4,	// (0x00014bf8) bg_sctrl_sk_pane_g8

0x489c,	// (0x00014bf0) bg_sctrl_sk_pane_g9

0x079f,	// (0x00010af3) popup_fep_china_hwr2_fs_candidate_window

0xb9f9,	// (0x0001bd4d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb9f9,	// (0x0001bd4d) popup_fep_china_hwr2_fs_control_window

0x140f,	// (0x00011763) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x00020029) sctrl_sk_top_pane_g

0xe65c,	// (0x0001e9b0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe65c,	// (0x0001e9b0) aid_fep_china_hwr2_fs_cell

0xe670,	// (0x0001e9c4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe670,	// (0x0001e9c4) bg_popup_fep_shadow_pane_cp4

0xe687,	// (0x0001e9db) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe687,	// (0x0001e9db) bg_popup_fep_shadow_pane_cp5

0xe699,	// (0x0001e9ed) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe699,	// (0x0001e9ed) popup_fep_china_hwr2_fs_control_bar_grid

0xe6ad,	// (0x0001ea01) popup_fep_china_hwr2_fs_control_funtion_grid

0x8eb3,	// (0x00019207) aid_fep_china_hwr2_fs_candi_cell

0xeb70,	// (0x0001eec4) bg_popup_fep_shadow_pane_cp6

0x8ebd,	// (0x00019211) popup_fep_china_hwr2_fs_candidate_grid

0xe6b5,	// (0x0001ea09) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe6b5,	// (0x0001ea09) cell_fep_china_hwr2_fs_funtion_grid

0x73e2,	// (0x00017736) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8edf,	// (0x00019233) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8edf,	// (0x00019233) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8eed,	// (0x00019241) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8eed,	// (0x00019241) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x00020044) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x00020044) cell_fep_china_hwr2_fs_funtion_grid_g

0xe6cd,	// (0x0001ea21) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe6cd,	// (0x0001ea21) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe6e2,	// (0x0001ea36) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe6e2,	// (0x0001ea36) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x00020049) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x00020049) cell_fep_china_hwr2_fs_funtion_grid_t

0x8f34,	// (0x00019288) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8f3c,	// (0x00019290) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8f44,	// (0x00019298) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002004e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8f4c,	// (0x000192a0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8f4c,	// (0x000192a0) cell_fep_china_hwr2_fs_candidate_grid

0x8f65,	// (0x000192b9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8f6d,	// (0x000192c1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x73e2,	// (0x00017736) cell_fep_china_hwr2_fs_candidate_grid_g1

0x73e2,	// (0x00017736) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0e,	// (0x0001fe62) cell_fep_china_hwr2_fs_candidate_grid_g

0x8f75,	// (0x000192c9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4444,	// (0x00014798) clock_nsta_pane_cp_24_ParamLimits

0x4444,	// (0x00014798) clock_nsta_pane_cp_24

0x44c2,	// (0x00014816) indicator_nsta_pane_cp_24_ParamLimits

0x44c2,	// (0x00014816) indicator_nsta_pane_cp_24

0x565e,	// (0x000159b2) heading_pane_g1

0x0001,

0xf89c,	// (0x0001fbf0) heading_pane_g

0x619b,	// (0x000164ef) grid_sct_catagory_button_pane

0x61cb,	// (0x0001651f) scroll_pane_cp5_ParamLimits

0x6f90,	// (0x000172e4) button_value_adjust_pane_cp5_ParamLimits

0x6f90,	// (0x000172e4) button_value_adjust_pane_cp5

0x708c,	// (0x000173e0) form2_midp_time_pane_ParamLimits

0x8f83,	// (0x000192d7) cell_sct_catagory_button_pane_ParamLimits

0x8f83,	// (0x000192d7) cell_sct_catagory_button_pane

0x73a7,	// (0x000176fb) bg_button_pane_cp01_ParamLimits

0x73a7,	// (0x000176fb) bg_button_pane_cp01

0x73e2,	// (0x00017736) cell_sct_catagory_button_pane_g1

0xbf5e,	// (0x0001c2b2) popup_tb_extension_window

0xe6fe,	// (0x0001ea52) aid_size_cell_ext_ParamLimits

0xe6fe,	// (0x0001ea52) aid_size_cell_ext

0x2959,	// (0x00012cad) bg_tb_trans_pane_cp1_ParamLimits

0x2959,	// (0x00012cad) bg_tb_trans_pane_cp1

0xe724,	// (0x0001ea78) grid_tb_ext_pane_ParamLimits

0xe724,	// (0x0001ea78) grid_tb_ext_pane

0xe75f,	// (0x0001eab3) cell_tb_ext_pane_ParamLimits

0xe75f,	// (0x0001eab3) cell_tb_ext_pane

0xe787,	// (0x0001eadb) cell_tb_ext_pane_g1_ParamLimits

0xe787,	// (0x0001eadb) cell_tb_ext_pane_g1

0x9038,	// (0x0001938c) cell_tb_ext_pane_t1

0x25e4,	// (0x00012938) list_highlight_pane_cp11_ParamLimits

0x25e4,	// (0x00012938) list_highlight_pane_cp11

0xb74e,	// (0x0001baa2) popup_uni_indicator_window_ParamLimits

0xb74e,	// (0x0001baa2) popup_uni_indicator_window

0x313f,	// (0x00013493) bg_popup_sub_pane_cp14

0x9053,	// (0x000193a7) list_uniindi_pane

0x905f,	// (0x000193b3) uniindi_top_pane

0x25e4,	// (0x00012938) bg_uniindi_top_pane

0x907e,	// (0x000193d2) uniindi_top_pane_g1

0x9094,	// (0x000193e8) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x00020055) uniindi_top_pane_g

0x90be,	// (0x00019412) uniindi_top_pane_t1

0x90e8,	// (0x0001943c) list_single_uniindi_pane_ParamLimits

0x90e8,	// (0x0001943c) list_single_uniindi_pane

0x73e2,	// (0x00017736) bg_uniindi_top_pane_g1

0x90fb,	// (0x0001944f) list_single_uniindi_pane_g1

0x910e,	// (0x00019462) list_single_uniindi_pane_t1

0xf416,	// (0x0001f76a) control_bg_pane

0x9133,	// (0x00019487) bg_sctrl_sk_pane_cp1

0x913c,	// (0x00019490) bg_sctrl_sk_pane_cp2

0x9145,	// (0x00019499) control_bg_pane_g1

0x914e,	// (0x000194a2) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002005e) control_bg_pane_g

0x6dda,	// (0x0001712e) cell_indicator_nsta_pane_g1_ParamLimits

0xdcfb,	// (0x0001e04f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa72,	// (0x0001fdc6) cell_indicator_nsta_pane_g_ParamLimits

0x7114,	// (0x00017468) form2_midp_time_pane_t1_ParamLimits

0x11aa,	// (0x000114fe) main_idle_act4_pane_ParamLimits

0x11aa,	// (0x000114fe) main_idle_act4_pane

0xbf5e,	// (0x0001c2b2) popup_tb_extension_window_ParamLimits

0xe746,	// (0x0001ea9a) tb_ext_find_pane_ParamLimits

0xe746,	// (0x0001ea9a) tb_ext_find_pane

0x9157,	// (0x000194ab) ai_gene_pane_1_cp1

0x4137,	// (0x0001448b) ai_gene_pane_2_cp1

0x915f,	// (0x000194b3) list_single_idle_plugin_calendar_pane

0x9168,	// (0x000194bc) list_single_idle_plugin_notification_pane

0x9171,	// (0x000194c5) list_single_idle_plugin_player_pane

0xe7a4,	// (0x0001eaf8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe7a4,	// (0x0001eaf8) list_single_idle_plugin_shortcut_pane

0xe7cc,	// (0x0001eb20) main_idle_act4_pane_t1

0xe7e2,	// (0x0001eb36) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x00020063) main_idle_act4_pane_t

0xe7f8,	// (0x0001eb4c) middle_sk_idle_act4_pane_ParamLimits

0xe7f8,	// (0x0001eb4c) middle_sk_idle_act4_pane

0xe814,	// (0x0001eb68) popup_clock_digital_analogue_window_cp2

0xe83c,	// (0x0001eb90) shortcut_wheel_idle_act4_pane_ParamLimits

0xe83c,	// (0x0001eb90) shortcut_wheel_idle_act4_pane

0x73e2,	// (0x00017736) shortcut_wheel_idle_act4_pane_g1

0x73e2,	// (0x00017736) shortcut_wheel_idle_act4_pane_g2

0x73e2,	// (0x00017736) shortcut_wheel_idle_act4_pane_g3

0x73e2,	// (0x00017736) shortcut_wheel_idle_act4_pane_g4

0x73e2,	// (0x00017736) shortcut_wheel_idle_act4_pane_g5

0x9204,	// (0x00019558) shortcut_wheel_idle_act4_pane_g6

0x920c,	// (0x00019560) shortcut_wheel_idle_act4_pane_g7

0x9214,	// (0x00019568) shortcut_wheel_idle_act4_pane_g8

0x921c,	// (0x00019570) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x00020068) shortcut_wheel_idle_act4_pane_g

0xd96d,	// (0x0001dcc1) middle_sk_idle_act4_pane_g1_ParamLimits

0xd96d,	// (0x0001dcc1) middle_sk_idle_act4_pane_g1

0xe8b9,	// (0x0001ec0d) middle_sk_idle_act4_pane_g2_ParamLimits

0xe8b9,	// (0x0001ec0d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002008b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002008b) middle_sk_idle_act4_pane_g

0xe8d1,	// (0x0001ec25) middle_sk_idle_act4_pane_t1_ParamLimits

0xe8d1,	// (0x0001ec25) middle_sk_idle_act4_pane_t1

0xe900,	// (0x0001ec54) grid_ai_shortcut_pane_ParamLimits

0xe900,	// (0x0001ec54) grid_ai_shortcut_pane

0xe91d,	// (0x0001ec71) list_highlight_pane_cp16_ParamLimits

0xe91d,	// (0x0001ec71) list_highlight_pane_cp16

0xe92a,	// (0x0001ec7e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe92a,	// (0x0001ec7e) list_single_idle_plugin_shortcut_pane_g1

0xe936,	// (0x0001ec8a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe936,	// (0x0001ec8a) list_single_idle_plugin_shortcut_pane_g2

0xe952,	// (0x0001eca6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe952,	// (0x0001eca6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x00020090) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x00020090) list_single_idle_plugin_shortcut_pane_g

0xe967,	// (0x0001ecbb) cell_ai_shortcut_pane_ParamLimits

0xe967,	// (0x0001ecbb) cell_ai_shortcut_pane

0xe97d,	// (0x0001ecd1) cell_ai_shortcut_pane_g1_ParamLimits

0xe97d,	// (0x0001ecd1) cell_ai_shortcut_pane_g1

0x9157,	// (0x000194ab) ai_gene_pane_1_cp2

0x934c,	// (0x000196a0) ai_gene_pane_2_cp2

0x9354,	// (0x000196a8) list_highlight_pane_cp15

0x935d,	// (0x000196b1) list_single_idle_plugin_calendar_pane_g1

0x9354,	// (0x000196a8) list_highlight_pane_cp17

0x9365,	// (0x000196b9) list_single_idle_plugin_calendar_pane_g1_copy1

0x936d,	// (0x000196c1) list_single_idle_plugin_player_pane_g1

0x63f4,	// (0x00016748) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x00020097) list_single_idle_plugin_player_pane_g

0x9375,	// (0x000196c9) list_single_idle_plugin_player_pane_t1

0x9383,	// (0x000196d7) list_single_idle_plugin_player_pane_t2

0x9391,	// (0x000196e5) list_single_idle_plugin_player_pane_t3

0x939f,	// (0x000196f3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002009c) list_single_idle_plugin_player_pane_t

0x93ad,	// (0x00019701) wait_bar_pane_cp15

0x93b5,	// (0x00019709) grid_ai_notification_pane

0x63f4,	// (0x00016748) list_single_idle_plugin_notification_pane_g1

0xe99f,	// (0x0001ecf3) cell_ai_notification_pane_ParamLimits

0xe99f,	// (0x0001ecf3) cell_ai_notification_pane

0x93cb,	// (0x0001971f) cell_ai_notification_pane_g1

0x93d3,	// (0x00019727) cell_ai_notification_pane_t1

0xe9ac,	// (0x0001ed00) tb_ext_find_button_pane

0xe9b4,	// (0x0001ed08) tb_ext_find_pane_g1

0xe9bc,	// (0x0001ed10) tb_ext_find_pane_t1

0x3957,	// (0x00013cab) tb_ext_find_button_pane_g1

0x93ff,	// (0x00019753) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x000200a5) tb_ext_find_button_pane_g

0xe7cc,	// (0x0001eb20) main_idle_act4_pane_t1_ParamLimits

0xe7e2,	// (0x0001eb36) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x00020063) main_idle_act4_pane_t_ParamLimits

0xe814,	// (0x0001eb68) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe82c,	// (0x0001eb80) sat_plugin_idle_act4_pane_ParamLimits

0xe82c,	// (0x0001eb80) sat_plugin_idle_act4_pane

0xe9ca,	// (0x0001ed1e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe9ca,	// (0x0001ed1e) sat_plugin_idle_act4_pane_t1

0xe9e2,	// (0x0001ed36) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe9e2,	// (0x0001ed36) sat_plugin_idle_act4_pane_t2

0xe9fa,	// (0x0001ed4e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe9fa,	// (0x0001ed4e) sat_plugin_idle_act4_pane_t3

0xea12,	// (0x0001ed66) sat_plugin_idle_act4_pane_t4_ParamLimits

0xea12,	// (0x0001ed66) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x000200aa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x000200aa) sat_plugin_idle_act4_pane_t

0xf4db,	// (0x0001f82f) popup_battery_window_ParamLimits

0xf4db,	// (0x0001f82f) popup_battery_window

0x25e4,	// (0x00012938) bg_popup_sub_pane_cp25_ParamLimits

0x25e4,	// (0x00012938) bg_popup_sub_pane_cp25

0x9454,	// (0x000197a8) popup_battery_window_g1_ParamLimits

0x9454,	// (0x000197a8) popup_battery_window_g1

0x9460,	// (0x000197b4) popup_battery_window_t1_ParamLimits

0x9460,	// (0x000197b4) popup_battery_window_t1

0x9472,	// (0x000197c6) popup_battery_window_t2_ParamLimits

0x9472,	// (0x000197c6) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x000200b3) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x000200b3) popup_battery_window_t

0xd18f,	// (0x0001d4e3) midp_canvas_pane_ParamLimits

0xd1ec,	// (0x0001d540) midp_keypad_pane_ParamLimits

0xd1ec,	// (0x0001d540) midp_keypad_pane

0x431c,	// (0x00014670) main_midp_pane_ParamLimits

0x6e54,	// (0x000171a8) signal_pane_g2_cp_ParamLimits

0xea2a,	// (0x0001ed7e) aid_size_cell_midp_keypad_ParamLimits

0xea2a,	// (0x0001ed7e) aid_size_cell_midp_keypad

0xea48,	// (0x0001ed9c) midp_keyp_game_grid_pane_ParamLimits

0xea48,	// (0x0001ed9c) midp_keyp_game_grid_pane

0xea6f,	// (0x0001edc3) midp_keyp_rocker_pane_ParamLimits

0xea6f,	// (0x0001edc3) midp_keyp_rocker_pane

0xeac0,	// (0x0001ee14) midp_keyp_sk_left_pane_ParamLimits

0xeac0,	// (0x0001ee14) midp_keyp_sk_left_pane

0xeb14,	// (0x0001ee68) midp_keyp_sk_right_pane_ParamLimits

0xeb14,	// (0x0001ee68) midp_keyp_sk_right_pane

0xeb70,	// (0x0001eec4) bg_button_pane_cp03

0xeb91,	// (0x0001eee5) midp_keyp_sk_left_pane_g1

0xeb70,	// (0x0001eec4) bg_button_pane_cp04

0xeb91,	// (0x0001eee5) midp_keyp_sk_right_pane_g1

0x73e2,	// (0x00017736) midp_keyp_rocker_pane_g1

0xeb9a,	// (0x0001eeee) keyp_game_cell_pane_ParamLimits

0xeb9a,	// (0x0001eeee) keyp_game_cell_pane

0xeb70,	// (0x0001eec4) bg_button_pane_cp02

0xebbe,	// (0x0001ef12) keyp_game_cell_pane_g1

0xb6e9,	// (0x0001ba3d) popup_fep_vkb2_window_ParamLimits

0xb6e9,	// (0x0001ba3d) popup_fep_vkb2_window

0xc15c,	// (0x0001c4b0) aid_size_cell_vkb2_ParamLimits

0xc15c,	// (0x0001c4b0) aid_size_cell_vkb2

0xc192,	// (0x0001c4e6) popup_fep_vkb2_window_g1_ParamLimits

0xc192,	// (0x0001c4e6) popup_fep_vkb2_window_g1

0xc1e2,	// (0x0001c536) vkb2_area_bottom_pane_ParamLimits

0xc1e2,	// (0x0001c536) vkb2_area_bottom_pane

0xc236,	// (0x0001c58a) vkb2_area_keypad_pane_ParamLimits

0xc236,	// (0x0001c58a) vkb2_area_keypad_pane

0xc27e,	// (0x0001c5d2) vkb2_area_top_pane_ParamLimits

0xc27e,	// (0x0001c5d2) vkb2_area_top_pane

0xc304,	// (0x0001c658) vkb2_top_entry_pane_ParamLimits

0xc304,	// (0x0001c658) vkb2_top_entry_pane

0xc331,	// (0x0001c685) vkb2_top_grid_left_pane_ParamLimits

0xc331,	// (0x0001c685) vkb2_top_grid_left_pane

0xc351,	// (0x0001c6a5) vkb2_top_grid_right_pane_ParamLimits

0xc351,	// (0x0001c6a5) vkb2_top_grid_right_pane

0x18de,	// (0x00011c32) vkb2_cell_keypad_pane_ParamLimits

0x18de,	// (0x00011c32) vkb2_cell_keypad_pane

0xc397,	// (0x0001c6eb) vkb2_area_bottom_grid_pane_ParamLimits

0xc397,	// (0x0001c6eb) vkb2_area_bottom_grid_pane

0xc3c1,	// (0x0001c715) vkb2_area_bottom_pane_g1_ParamLimits

0xc3c1,	// (0x0001c715) vkb2_area_bottom_pane_g1

0xc3e7,	// (0x0001c73b) vkb2_area_bottom_pane_g2_ParamLimits

0xc3e7,	// (0x0001c73b) vkb2_area_bottom_pane_g2

0xc418,	// (0x0001c76c) vkb2_area_bottom_pane_g3_ParamLimits

0xc418,	// (0x0001c76c) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x000200b8) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x000200b8) vkb2_area_bottom_pane_g

0x1a88,	// (0x00011ddc) vkb2_top_cell_left_pane_ParamLimits

0x1a88,	// (0x00011ddc) vkb2_top_cell_left_pane

0xebc7,	// (0x0001ef1b) vkb2_top_entry_pane_g1_ParamLimits

0xebc7,	// (0x0001ef1b) vkb2_top_entry_pane_g1

0xebd5,	// (0x0001ef29) vkb2_top_entry_pane_t1_ParamLimits

0xebd5,	// (0x0001ef29) vkb2_top_entry_pane_t1

0x9623,	// (0x00019977) vkb2_top_entry_pane_t2_ParamLimits

0x9623,	// (0x00019977) vkb2_top_entry_pane_t2

0x9655,	// (0x000199a9) vkb2_top_entry_pane_t3_ParamLimits

0x9655,	// (0x000199a9) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x000200bf) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x000200bf) vkb2_top_entry_pane_t

0xc482,	// (0x0001c7d6) vkb2_top_grid_right_pane_g1_ParamLimits

0xc482,	// (0x0001c7d6) vkb2_top_grid_right_pane_g1

0x1aeb,	// (0x00011e3f) vkb2_top_grid_right_pane_g2_ParamLimits

0x1aeb,	// (0x00011e3f) vkb2_top_grid_right_pane_g2

0x1b03,	// (0x00011e57) vkb2_top_grid_right_pane_g3_ParamLimits

0x1b03,	// (0x00011e57) vkb2_top_grid_right_pane_g3

0xc498,	// (0x0001c7ec) vkb2_top_grid_right_pane_g4_ParamLimits

0xc498,	// (0x0001c7ec) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x000200c6) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x000200c6) vkb2_top_grid_right_pane_g

0x1b31,	// (0x00011e85) vkb2_top_cell_left_pane_g1

0x1b48,	// (0x00011e9c) vkb2_cell_keypad_pane_g1_ParamLimits

0x1b48,	// (0x00011e9c) vkb2_cell_keypad_pane_g1

0x9679,	// (0x000199cd) vkb2_cell_keypad_pane_t1_ParamLimits

0x9679,	// (0x000199cd) vkb2_cell_keypad_pane_t1

0x1b56,	// (0x00011eaa) vkb2_cell_bottom_grid_pane_ParamLimits

0x1b56,	// (0x00011eaa) vkb2_cell_bottom_grid_pane

0x1b8f,	// (0x00011ee3) vkb2_cell_bottom_grid_pane_g1

0xe85d,	// (0x0001ebb1) aid_call2_pane_cp02

0xe865,	// (0x0001ebb9) aid_call_pane_cp02

0xe86d,	// (0x0001ebc1) clock_digital_number_pane_cp10

0xe875,	// (0x0001ebc9) clock_digital_number_pane_cp11

0xe87d,	// (0x0001ebd1) clock_digital_number_pane_cp12

0xe885,	// (0x0001ebd9) clock_digital_number_pane_cp13

0xe88d,	// (0x0001ebe1) clock_digital_separator_pane_cp10

0x3957,	// (0x00013cab) popup_clock_digital_analogue_window_cp2_g1

0x3957,	// (0x00013cab) popup_clock_digital_analogue_window_cp2_g2

0xe895,	// (0x0001ebe9) popup_clock_digital_analogue_window_cp2_g3

0x3957,	// (0x00013cab) popup_clock_digital_analogue_window_cp2_g4

0xe895,	// (0x0001ebe9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002007b) popup_clock_digital_analogue_window_cp2_g

0xe89d,	// (0x0001ebf1) popup_clock_digital_analogue_window_cp2_t1

0xe8ab,	// (0x0001ebff) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x00020086) popup_clock_digital_analogue_window_cp2_t

0x73e2,	// (0x00017736) clock_digital_number_pane_cp10_g1

0x73e2,	// (0x00017736) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0001fe62) clock_digital_number_pane_cp10_g

0x73e2,	// (0x00017736) clock_digital_separator_pane_cp10_g1

0x73e2,	// (0x00017736) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0e,	// (0x0001fe62) clock_digital_separator_pane_cp10_g

0x90a0,	// (0x000193f4) uniindi_top_pane_g3

0x90b1,	// (0x00019405) uniindi_top_pane_g4

0x1969,	// (0x00011cbd) vkb2_row_keypad_pane_ParamLimits

0x1969,	// (0x00011cbd) vkb2_row_keypad_pane

0x1bab,	// (0x00011eff) vkb2_cell_t_keypad_pane_ParamLimits

0x1bab,	// (0x00011eff) vkb2_cell_t_keypad_pane

0x1bbb,	// (0x00011f0f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1bbb,	// (0x00011f0f) vkb2_cell_t_keypad_pane_cp08

0x1bce,	// (0x00011f22) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1bce,	// (0x00011f22) vkb2_cell_t_keypad_pane_cp09

0x1be2,	// (0x00011f36) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1be2,	// (0x00011f36) vkb2_cell_t_keypad_pane_cp01

0x1bf3,	// (0x00011f47) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1bf3,	// (0x00011f47) vkb2_cell_t_keypad_pane_cp02

0x1c04,	// (0x00011f58) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1c04,	// (0x00011f58) vkb2_cell_t_keypad_pane_cp03

0x1c15,	// (0x00011f69) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1c15,	// (0x00011f69) vkb2_cell_t_keypad_pane_cp04

0x1c26,	// (0x00011f7a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1c26,	// (0x00011f7a) vkb2_cell_t_keypad_pane_cp05

0x1c37,	// (0x00011f8b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1c37,	// (0x00011f8b) vkb2_cell_t_keypad_pane_cp06

0x1c48,	// (0x00011f9c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1c48,	// (0x00011f9c) vkb2_cell_t_keypad_pane_cp07

0x1c59,	// (0x00011fad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1c59,	// (0x00011fad) vkb2_cell_t_keypad_pane_cp10

0x140f,	// (0x00011763) vkb2_cell_t_keypad_pane_g1

0x9690,	// (0x000199e4) vkb2_cell_t_keypad_pane_t1

0xf416,	// (0x0001f76a) popup_grid_graphic2_window

0xec0e,	// (0x0001ef62) aid_size_cell_graphic2_ParamLimits

0xec0e,	// (0x0001ef62) aid_size_cell_graphic2

0xec4c,	// (0x0001efa0) bg_popup_window_pane_cp21_ParamLimits

0xec4c,	// (0x0001efa0) bg_popup_window_pane_cp21

0xec5a,	// (0x0001efae) graphic2_pages_pane_ParamLimits

0xec5a,	// (0x0001efae) graphic2_pages_pane

0xecb0,	// (0x0001f004) grid_graphic2_control_pane_ParamLimits

0xecb0,	// (0x0001f004) grid_graphic2_control_pane

0xecf8,	// (0x0001f04c) grid_graphic2_pane_ParamLimits

0xecf8,	// (0x0001f04c) grid_graphic2_pane

0xed7f,	// (0x0001f0d3) cell_graphic2_pane

0xf416,	// (0x0001f76a) main_comp_mode_pane

0x8888,	// (0x00018bdc) list_ai3_gene_pane_ParamLimits

0xe5a4,	// (0x0001e8f8) bg_popup_window_pane_cp19_ParamLimits

0x8ccd,	// (0x00019021) bg_touch_area_indi_pane_ParamLimits

0x8ccd,	// (0x00019021) bg_touch_area_indi_pane

0x8ce3,	// (0x00019037) bg_touch_area_indi_pane_cp01_ParamLimits

0x8ce3,	// (0x00019037) bg_touch_area_indi_pane_cp01

0x8cf9,	// (0x0001904d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8cf9,	// (0x0001904d) bg_touch_area_indi_pane_cp02

0x8d0f,	// (0x00019063) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d0f,	// (0x00019063) bg_touch_area_indi_pane_cp03

0x8d29,	// (0x0001907d) popup_slider_window_g1_ParamLimits

0x8d45,	// (0x00019099) popup_slider_window_g2_ParamLimits

0x8d61,	// (0x000190b5) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x00020010) popup_slider_window_g_ParamLimits

0x8dc7,	// (0x0001911b) popup_slider_window_t1_ParamLimits

0x8e3b,	// (0x0001918f) small_volume_slider_vertical_pane_ParamLimits

0xed7f,	// (0x0001f0d3) cell_graphic2_pane_ParamLimits

0xedda,	// (0x0001f12e) bg_button_pane_cp10_ParamLimits

0xedda,	// (0x0001f12e) bg_button_pane_cp10

0xeded,	// (0x0001f141) bg_button_pane_cp11_ParamLimits

0xeded,	// (0x0001f141) bg_button_pane_cp11

0xee00,	// (0x0001f154) graphic2_pages_pane_g1_ParamLimits

0xee00,	// (0x0001f154) graphic2_pages_pane_g1

0xee1b,	// (0x0001f16f) graphic2_pages_pane_g2_ParamLimits

0xee1b,	// (0x0001f16f) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x000200d4) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x000200d4) graphic2_pages_pane_g

0xee33,	// (0x0001f187) graphic2_pages_pane_t1_ParamLimits

0xee33,	// (0x0001f187) graphic2_pages_pane_t1

0xee4b,	// (0x0001f19f) cell_graphic2_control_pane_ParamLimits

0xee4b,	// (0x0001f19f) cell_graphic2_control_pane

0xee7d,	// (0x0001f1d1) cell_graphic2_pane_g1_ParamLimits

0xee7d,	// (0x0001f1d1) cell_graphic2_pane_g1

0xd97b,	// (0x0001dccf) cell_graphic2_pane_g2_ParamLimits

0xd97b,	// (0x0001dccf) cell_graphic2_pane_g2

0xeb84,	// (0x0001eed8) cell_graphic2_pane_g3_ParamLimits

0xeb84,	// (0x0001eed8) cell_graphic2_pane_g3

0xd988,	// (0x0001dcdc) cell_graphic2_pane_g4_ParamLimits

0xd988,	// (0x0001dcdc) cell_graphic2_pane_g4

0xee8a,	// (0x0001f1de) cell_graphic2_pane_g5_ParamLimits

0xee8a,	// (0x0001f1de) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x000200d9) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x000200d9) cell_graphic2_pane_g

0xeea7,	// (0x0001f1fb) cell_graphic2_pane_t1_ParamLimits

0xeea7,	// (0x0001f1fb) cell_graphic2_pane_t1

0x5652,	// (0x000159a6) grid_highlight_pane_cp11_ParamLimits

0x5652,	// (0x000159a6) grid_highlight_pane_cp11

0x25e4,	// (0x00012938) bg_button_pane_cp05

0xeef1,	// (0x0001f245) cell_graphic2_control_pane_g1

0x73e2,	// (0x00017736) bg_touch_area_indi_pane_g1

0x9969,	// (0x00019cbd) aid_cmod_rocker_key_size

0x9973,	// (0x00019cc7) aid_cmode_itu_key_size

0x997d,	// (0x00019cd1) main_cmode_video_pane

0x9987,	// (0x00019cdb) main_comp_mode_itu_pane

0x9993,	// (0x00019ce7) main_comp_mode_rocker_pane

0x999f,	// (0x00019cf3) cell_cmode_rocker_pane_ParamLimits

0x999f,	// (0x00019cf3) cell_cmode_rocker_pane

0x99b1,	// (0x00019d05) cell_cmode_itu_pane_ParamLimits

0x99b1,	// (0x00019d05) cell_cmode_itu_pane

0x313f,	// (0x00013493) bg_button_pane_cp06_ParamLimits

0x313f,	// (0x00013493) bg_button_pane_cp06

0x7660,	// (0x000179b4) cell_cmode_rocker_pane_g1_ParamLimits

0x7660,	// (0x000179b4) cell_cmode_rocker_pane_g1

0x8edf,	// (0x00019233) cell_cmode_rocker_pane_g2_ParamLimits

0x8edf,	// (0x00019233) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x000200e9) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x000200e9) cell_cmode_rocker_pane_g

0xeb70,	// (0x0001eec4) bg_button_pane_cp07

0x99c6,	// (0x00019d1a) cell_cmode_itu_pane_g1

0x99cf,	// (0x00019d23) cell_cmode_itu_pane_t1

0x99dd,	// (0x00019d31) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x000200ee) cell_cmode_itu_pane_t

0x9123,	// (0x00019477) aid_touch_ctrl_left

0x912b,	// (0x0001947f) aid_touch_ctrl_right

0xeb70,	// (0x0001eec4) compa_mode_pane

0xef15,	// (0x0001f269) aid_cmod_rocker_key_size_cp

0xef1f,	// (0x0001f273) aid_cmode_itu_key_size_cp

0x99ff,	// (0x00019d53) compa_mode_pane_g1

0x9a07,	// (0x00019d5b) compa_mode_pane_g2

0x9a0f,	// (0x00019d63) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x000200f3) compa_mode_pane_g

0xef29,	// (0x0001f27d) main_comp_mode_itu_pane_cp

0xef31,	// (0x0001f285) main_comp_mode_rocker_pane_cp

0xef39,	// (0x0001f28d) cell_cmode_itu_pane_cp_ParamLimits

0xef39,	// (0x0001f28d) cell_cmode_itu_pane_cp

0xef4e,	// (0x0001f2a2) cell_cmode_rocker_pane_cp_ParamLimits

0xef4e,	// (0x0001f2a2) cell_cmode_rocker_pane_cp

0x313f,	// (0x00013493) bg_button_pane_cp06_cp_ParamLimits

0x313f,	// (0x00013493) bg_button_pane_cp06_cp

0x7660,	// (0x000179b4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7660,	// (0x000179b4) cell_cmode_rocker_pane_g1_cp

0x73e2,	// (0x00017736) cell_cmode_rocker_pane_g2_cp

0xeb70,	// (0x0001eec4) bg_button_pane_cp07_cp

0xef60,	// (0x0001f2b4) cell_cmode_itu_pane_g1_cp

0xef69,	// (0x0001f2bd) cell_cmode_itu_pane_t1_cp

0xef69,	// (0x0001f2bd) cell_cmode_itu_pane_t2_cp

0xdab1,	// (0x0001de05) settings_code_pane_cp2

0x2341,	// (0x00012695) bg_popup_window_pane_cp3_ParamLimits

0x27e4,	// (0x00012b38) heading_pane_cp3_ParamLimits

0x27f3,	// (0x00012b47) listscroll_popup_graphic_pane_ParamLimits

0x11b8,	// (0x0001150c) fep_hwr_aid_pane_ParamLimits

0x162f,	// (0x00011983) aid_touch_sctrl_top_ParamLimits

0x164a,	// (0x0001199e) sctrl_sk_top_pane_g1_ParamLimits

0x140f,	// (0x00011763) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x00020029) sctrl_sk_top_pane_g_ParamLimits

0x1657,	// (0x000119ab) sctrl_sk_top_pane_t1_ParamLimits

0x162f,	// (0x00011983) aid_touch_sctrl_bottom_ParamLimits

0x1657,	// (0x000119ab) sctrl_sk_bottom_pane_t1_ParamLimits

0x906c,	// (0x000193c0) aid_area_touch_clock

0xc2c6,	// (0x0001c61a) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2c6,	// (0x0001c61a) aid_vkb2_area_top_pane_cell

0xc371,	// (0x0001c6c5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc371,	// (0x0001c6c5) aid_vkb2_area_bottom_pane_cell

0x95db,	// (0x0001992f) popup_char_count_window

0x9a5c,	// (0x00019db0) popup_char_count_window_g1

0x9a65,	// (0x00019db9) popup_char_count_window_g2

0x9a6e,	// (0x00019dc2) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x000200fa) popup_char_count_window_g

0x9a77,	// (0x00019dcb) popup_char_count_window_t1

0x1706,	// (0x00011a5a) popup_fep_char_preview_window_ParamLimits

0x1706,	// (0x00011a5a) popup_fep_char_preview_window

0xc2e6,	// (0x0001c63a) vkb2_top_candi_pane_ParamLimits

0xc2e6,	// (0x0001c63a) vkb2_top_candi_pane

0xef77,	// (0x0001f2cb) cell_vkb2_top_candi_pane_ParamLimits

0xef77,	// (0x0001f2cb) cell_vkb2_top_candi_pane

0x1c6e,	// (0x00011fc2) bg_popup_fep_char_preview_window_ParamLimits

0x1c6e,	// (0x00011fc2) bg_popup_fep_char_preview_window

0x1c7c,	// (0x00011fd0) popup_fep_char_preview_window_t1_ParamLimits

0x1c7c,	// (0x00011fd0) popup_fep_char_preview_window_t1

0x9ad2,	// (0x00019e26) bg_popup_fep_char_preview_window_g1

0x9ada,	// (0x00019e2e) bg_popup_fep_char_preview_window_g2

0x9ae2,	// (0x00019e36) bg_popup_fep_char_preview_window_g3

0x9aea,	// (0x00019e3e) bg_popup_fep_char_preview_window_g4

0x9af2,	// (0x00019e46) bg_popup_fep_char_preview_window_g5

0x9afa,	// (0x00019e4e) bg_popup_fep_char_preview_window_g6

0x9b02,	// (0x00019e56) bg_popup_fep_char_preview_window_g7

0x9b0a,	// (0x00019e5e) bg_popup_fep_char_preview_window_g8

0x9b12,	// (0x00019e66) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x00020101) bg_popup_fep_char_preview_window_g

0x140f,	// (0x00011763) cell_vkb2_top_candi_pane_g1_ParamLimits

0x140f,	// (0x00011763) cell_vkb2_top_candi_pane_g1

0x141d,	// (0x00011771) cell_vkb2_top_candi_pane_g2_ParamLimits

0x141d,	// (0x00011771) cell_vkb2_top_candi_pane_g2

0x8ffa,	// (0x0001934e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8ffa,	// (0x0001934e) cell_vkb2_top_candi_pane_g3

0x1cbe,	// (0x00012012) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1cbe,	// (0x00012012) cell_vkb2_top_candi_pane_g4

0x7cd0,	// (0x00018024) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7cd0,	// (0x00018024) cell_vkb2_top_candi_pane_g5

0x1cdf,	// (0x00012033) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1cdf,	// (0x00012033) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x00020116) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x00020116) cell_vkb2_top_candi_pane_g

0x1ced,	// (0x00012041) cell_vkb2_top_candi_pane_t1

0x1018,	// (0x0001136c) aid_size_touch_slider_mark_ParamLimits

0x1018,	// (0x0001136c) aid_size_touch_slider_mark

0xec96,	// (0x0001efea) grid_graphic2_catg_pane_ParamLimits

0xec96,	// (0x0001efea) grid_graphic2_catg_pane

0xed52,	// (0x0001f0a6) popup_grid_graphic2_window_t1_ParamLimits

0xed52,	// (0x0001f0a6) popup_grid_graphic2_window_t1

0xed68,	// (0x0001f0bc) popup_grid_graphic2_window_t2_ParamLimits

0xed68,	// (0x0001f0bc) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x000200cf) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x000200cf) popup_grid_graphic2_window_t

0x25e4,	// (0x00012938) bg_button_pane_cp05_ParamLimits

0xeef1,	// (0x0001f245) cell_graphic2_control_pane_g1_ParamLimits

0xefdd,	// (0x0001f331) cell_graphic2_catg_pane_ParamLimits

0xefdd,	// (0x0001f331) cell_graphic2_catg_pane

0xeb70,	// (0x0001eec4) bg_button_pane_cp12

0xefef,	// (0x0001f343) cell_graphic2_catg_pane_g1

0x9038,	// (0x0001938c) cell_tb_ext_pane_t1_ParamLimits

0x1aa8,	// (0x00011dfc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1aa8,	// (0x00011dfc) vkb2_top_cell_right_narrow_pane

0x1ac0,	// (0x00011e14) vkb2_top_cell_right_wide_pane_ParamLimits

0x1ac0,	// (0x00011e14) vkb2_top_cell_right_wide_pane

0x11aa,	// (0x000114fe) bg_vkb2_func_pane_ParamLimits

0x11aa,	// (0x000114fe) bg_vkb2_func_pane

0x1b31,	// (0x00011e85) vkb2_top_cell_left_pane_g1_ParamLimits

0x11aa,	// (0x000114fe) bg_vkb2_fuc_pane_cp03_ParamLimits

0x11aa,	// (0x000114fe) bg_vkb2_fuc_pane_cp03

0x1b8f,	// (0x00011ee3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x486c,	// (0x00014bc0) bg_vkb2_func_pane_g1

0x4874,	// (0x00014bc8) bg_vkb2_func_pane_g2

0x4884,	// (0x00014bd8) bg_vkb2_func_pane_g3

0x487c,	// (0x00014bd0) bg_vkb2_func_pane_g4

0x488c,	// (0x00014be0) bg_vkb2_func_pane_g5

0x4894,	// (0x00014be8) bg_vkb2_func_pane_g6

0x489c,	// (0x00014bf0) bg_vkb2_func_pane_g7

0x48a4,	// (0x00014bf8) bg_vkb2_func_pane_g8

0x4864,	// (0x00014bb8) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x00020123) bg_vkb2_func_pane_g

0x11aa,	// (0x000114fe) bg_vkb2_fuc_pane_cp01_ParamLimits

0x11aa,	// (0x000114fe) bg_vkb2_fuc_pane_cp01

0x1b31,	// (0x00011e85) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1b31,	// (0x00011e85) vkb2_top_cell_right_wide_pane_g1

0x11aa,	// (0x000114fe) bg_vkb2_fuc_pane_cp02_ParamLimits

0x11aa,	// (0x000114fe) bg_vkb2_fuc_pane_cp02

0x1b8f,	// (0x00011ee3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1b8f,	// (0x00011ee3) vkb2_top_cell_right_narrow_pane_g1

0xe4e6,	// (0x0001e83a) aid_touch_area_decrease_ParamLimits

0xe4e6,	// (0x0001e83a) aid_touch_area_decrease

0xe520,	// (0x0001e874) aid_touch_area_increase_ParamLimits

0xe520,	// (0x0001e874) aid_touch_area_increase

0xe548,	// (0x0001e89c) aid_touch_area_mute_ParamLimits

0xe548,	// (0x0001e89c) aid_touch_area_mute

0xe570,	// (0x0001e8c4) aid_touch_area_slider_ParamLimits

0xe570,	// (0x0001e8c4) aid_touch_area_slider

0xe5b0,	// (0x0001e904) popup_slider_window_g4_ParamLimits

0xe5b0,	// (0x0001e904) popup_slider_window_g4

0xe5d8,	// (0x0001e92c) popup_slider_window_g5_ParamLimits

0xe5d8,	// (0x0001e92c) popup_slider_window_g5

0xe60c,	// (0x0001e960) popup_slider_window_g6_ParamLimits

0xe60c,	// (0x0001e960) popup_slider_window_g6

0x8df5,	// (0x00019149) popup_slider_window_t2_ParamLimits

0x8df5,	// (0x00019149) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002001d) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002001d) popup_slider_window_t

0xe628,	// (0x0001e97c) slider_pane_ParamLimits

0xe628,	// (0x0001e97c) slider_pane

0x9b35,	// (0x00019e89) slider_pane_g1_ParamLimits

0x9b35,	// (0x00019e89) slider_pane_g1

0x9b49,	// (0x00019e9d) slider_pane_g2_ParamLimits

0x9b49,	// (0x00019e9d) slider_pane_g2

0x9b5f,	// (0x00019eb3) slider_pane_g3_ParamLimits

0x9b5f,	// (0x00019eb3) slider_pane_g3

0x0003,

0xfde2,	// (0x00020136) slider_pane_g_ParamLimits

0xfde2,	// (0x00020136) slider_pane_g

0xbfa6,	// (0x0001c2fa) popup_tb_float_extension_window_ParamLimits

0xbfa6,	// (0x0001c2fa) popup_tb_float_extension_window

0x9b8b,	// (0x00019edf) aid_size_cell_tb_float_ext

0xeb70,	// (0x0001eec4) bg_popup_sub_window_cp28

0x9b97,	// (0x00019eeb) grid_tb_float_ext_pane

0x9ba1,	// (0x00019ef5) cell_tb_float_ext_pane_ParamLimits

0x9ba1,	// (0x00019ef5) cell_tb_float_ext_pane

0x9bbb,	// (0x00019f0f) cell_tb_float_ext_pane_g1

0x9bc4,	// (0x00019f18) grid_highlight_pane_cp12

0xc0cf,	// (0x0001c423) cell_last_hwr_side_pane_ParamLimits

0xc0cf,	// (0x0001c423) cell_last_hwr_side_pane

0x73e2,	// (0x00017736) cell_last_hwr_side_pane_g1

0x9bcd,	// (0x00019f21) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002013f) cell_last_hwr_side_pane_g

0xc44d,	// (0x0001c7a1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc44d,	// (0x0001c7a1) vkb2_area_bottom_space_btn_pane

0x140f,	// (0x00011763) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9690,	// (0x000199e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1ced,	// (0x00012041) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1d0c,	// (0x00012060) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1d0c,	// (0x00012060) vkb2_area_bottom_space_btn_pane_g1

0x1d46,	// (0x0001209a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1d46,	// (0x0001209a) vkb2_area_bottom_space_btn_pane_g2

0x1d7c,	// (0x000120d0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1d7c,	// (0x000120d0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x00020144) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x00020144) vkb2_area_bottom_space_btn_pane_g

0x126d,	// (0x000115c1) cel_fep_hwr_func_pane_ParamLimits

0x126d,	// (0x000115c1) cel_fep_hwr_func_pane

0xc0a4,	// (0x0001c3f8) cell_hwr_side_button_pane_ParamLimits

0xc0a4,	// (0x0001c3f8) cell_hwr_side_button_pane

0x906c,	// (0x000193c0) aid_area_touch_clock_ParamLimits

0x25e4,	// (0x00012938) bg_uniindi_top_pane_ParamLimits

0x907e,	// (0x000193d2) uniindi_top_pane_g1_ParamLimits

0x9094,	// (0x000193e8) uniindi_top_pane_g2_ParamLimits

0x90a0,	// (0x000193f4) uniindi_top_pane_g3_ParamLimits

0x90b1,	// (0x00019405) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x00020055) uniindi_top_pane_g_ParamLimits

0x90be,	// (0x00019412) uniindi_top_pane_t1_ParamLimits

0x25e4,	// (0x00012938) bg_vkb2_func_pane_cp01_ParamLimits

0x25e4,	// (0x00012938) bg_vkb2_func_pane_cp01

0x9bd6,	// (0x00019f2a) cel_fep_hwr_func_pane_g1_ParamLimits

0x9bd6,	// (0x00019f2a) cel_fep_hwr_func_pane_g1

0x25e4,	// (0x00012938) bg_vkb2_func_pane_cp02_ParamLimits

0x25e4,	// (0x00012938) bg_vkb2_func_pane_cp02

0x9bd6,	// (0x00019f2a) cell_hwr_side_button_pane_g1_ParamLimits

0x9bd6,	// (0x00019f2a) cell_hwr_side_button_pane_g1

0x46cf,	// (0x00014a23) status_pane_g4_ParamLimits

0x46cf,	// (0x00014a23) status_pane_g4

0x46e9,	// (0x00014a3d) status_pane_t1

0x7127,	// (0x0001747b) form2_midp_gauge_slider_cont_pane

0x712f,	// (0x00017483) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddfa,	// (0x0001e14e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde0c,	// (0x0001e160) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac1,	// (0x0001fe15) form2_midp_gauge_slider_pane_t_ParamLimits

0x7165,	// (0x000174b9) form2_midp_slider_pane_ParamLimits

0x16c6,	// (0x00011a1a) aid_size_cell_func_vkb2_ParamLimits

0x16c6,	// (0x00011a1a) aid_size_cell_func_vkb2

0x9b77,	// (0x00019ecb) slider_pane_g4_ParamLimits

0x9b77,	// (0x00019ecb) slider_pane_g4

0xc4b6,	// (0x0001c80a) form2_midp_gauge_slider_pane_t2_cp01

0xc4c4,	// (0x0001c818) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4c4,	// (0x0001c818) form2_midp_gauge_slider_pane_t3_cp01

0x1df1,	// (0x00012145) form2_midp_slider_pane_cp01

0xeb70,	// (0x0001eec4) navi_smil_pane

0x9c0f,	// (0x00019f63) navi_smil_pane_g1

0x9c17,	// (0x00019f6b) navi_smil_pane_t1

0x9be4,	// (0x00019f38) form2_midp_slider_pane_g1

0x9bed,	// (0x00019f41) form2_midp_slider_pane_g2

0x9bf5,	// (0x00019f49) form2_midp_slider_pane_g3

0x9be4,	// (0x00019f38) form2_midp_slider_pane_g4

0xeff8,	// (0x0001f34c) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002014d) form2_midp_slider_pane_g

0x1db6,	// (0x0001210a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1db6,	// (0x0001210a) vkb2_area_bottom_space_btn_pane_g4

0xd457,	// (0x0001d7ab) lc0_navi_pane_ParamLimits

0xd457,	// (0x0001d7ab) lc0_navi_pane

0xd4c1,	// (0x0001d815) lc0_stat_indi_pane_ParamLimits

0xd4c1,	// (0x0001d815) lc0_stat_indi_pane

0xd4d6,	// (0x0001d82a) ls0_title_pane_ParamLimits

0xd4d6,	// (0x0001d82a) ls0_title_pane

0x313f,	// (0x00013493) bg_popup_sub_pane_cp14_ParamLimits

0x9053,	// (0x000193a7) list_uniindi_pane_ParamLimits

0x905f,	// (0x000193b3) uniindi_top_pane_ParamLimits

0x90fb,	// (0x0001944f) list_single_uniindi_pane_g1_ParamLimits

0x910e,	// (0x00019462) list_single_uniindi_pane_t1_ParamLimits

0xc4e1,	// (0x0001c835) lc0_stat_clock_pane_ParamLimits

0xc4e1,	// (0x0001c835) lc0_stat_clock_pane

0xf003,	// (0x0001f357) lc0_stat_indi_pane_g1_ParamLimits

0xf003,	// (0x0001f357) lc0_stat_indi_pane_g1

0xf010,	// (0x0001f364) lc0_stat_indi_pane_g2_ParamLimits

0xf010,	// (0x0001f364) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x00020158) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x00020158) lc0_stat_indi_pane_g

0xc4ee,	// (0x0001c842) lc0_uni_indicator_pane_ParamLimits

0xc4ee,	// (0x0001c842) lc0_uni_indicator_pane

0xf01d,	// (0x0001f371) ls0_title_pane_g1_ParamLimits

0xf01d,	// (0x0001f371) ls0_title_pane_g1

0xf031,	// (0x0001f385) ls0_title_pane_t1_ParamLimits

0xf031,	// (0x0001f385) ls0_title_pane_t1

0xc4fb,	// (0x0001c84f) lc0_uni_indicator_pane_g1_ParamLimits

0xc4fb,	// (0x0001c84f) lc0_uni_indicator_pane_g1

0x9c89,	// (0x00019fdd) lc0_stat_clock_pane_t1

0xf416,	// (0x0001f76a) main_ai5_pane

0x9c97,	// (0x00019feb) ai5_sk_pane_ParamLimits

0x9c97,	// (0x00019feb) ai5_sk_pane

0xf05f,	// (0x0001f3b3) cell_ai5_widget_pane_ParamLimits

0xf05f,	// (0x0001f3b3) cell_ai5_widget_pane

0x9d6d,	// (0x0001a0c1) aid_size_cell_widget_grid

0x9d83,	// (0x0001a0d7) bg_ai5_widget_pane_ParamLimits

0x9d83,	// (0x0001a0d7) bg_ai5_widget_pane

0x9dff,	// (0x0001a153) cell_ai5_widget_pane_g2

0x9e13,	// (0x0001a167) cell_ai5_widget_pane_g3

0x9e2d,	// (0x0001a181) cell_ai5_widget_pane_g4

0x9e3d,	// (0x0001a191) cell_ai5_widget_pane_g5

0x9e4d,	// (0x0001a1a1) cell_ai5_widget_pane_g6

0x9e59,	// (0x0001a1ad) cell_ai5_widget_pane_g7

0x9ec5,	// (0x0001a219) cell_ai5_widget_pane_t1_ParamLimits

0x9ec5,	// (0x0001a219) cell_ai5_widget_pane_t1

0x9ee2,	// (0x0001a236) cell_ai5_widget_pane_t2_ParamLimits

0x9ee2,	// (0x0001a236) cell_ai5_widget_pane_t2

0x9efa,	// (0x0001a24e) cell_ai5_widget_pane_t3_ParamLimits

0x9efa,	// (0x0001a24e) cell_ai5_widget_pane_t3

0x9f12,	// (0x0001a266) cell_ai5_widget_pane_t4_ParamLimits

0x9f12,	// (0x0001a266) cell_ai5_widget_pane_t4

0x9f38,	// (0x0001a28c) cell_ai5_widget_pane_t5_ParamLimits

0x9f38,	// (0x0001a28c) cell_ai5_widget_pane_t5

0x9f57,	// (0x0001a2ab) cell_ai5_widget_pane_t6_ParamLimits

0x9f57,	// (0x0001a2ab) cell_ai5_widget_pane_t6

0x9f69,	// (0x0001a2bd) cell_ai5_widget_pane_t7_ParamLimits

0x9f69,	// (0x0001a2bd) cell_ai5_widget_pane_t7

0x9f88,	// (0x0001a2dc) cell_ai5_widget_pane_t8_ParamLimits

0x9f88,	// (0x0001a2dc) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x00020178) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x00020178) cell_ai5_widget_pane_t

0xa00c,	// (0x0001a360) grid_ai5_widget_pane

0x313f,	// (0x00013493) highlight_cell_ai5_widget_pane_ParamLimits

0x313f,	// (0x00013493) highlight_cell_ai5_widget_pane

0xf0cb,	// (0x0001f41f) ai5_sk_left_pane

0xf0d5,	// (0x0001f429) ai5_sk_middle_pane

0xf0df,	// (0x0001f433) ai5_sk_right_pane

0xa041,	// (0x0001a395) bg_ai5_widget_pane_g1_ParamLimits

0xa041,	// (0x0001a395) bg_ai5_widget_pane_g1

0xa04d,	// (0x0001a3a1) bg_ai5_widget_pane_g2_ParamLimits

0xa04d,	// (0x0001a3a1) bg_ai5_widget_pane_g2

0xa059,	// (0x0001a3ad) bg_ai5_widget_pane_g3_ParamLimits

0xa059,	// (0x0001a3ad) bg_ai5_widget_pane_g3

0xa065,	// (0x0001a3b9) bg_ai5_widget_pane_g4_ParamLimits

0xa065,	// (0x0001a3b9) bg_ai5_widget_pane_g4

0xa071,	// (0x0001a3c5) bg_ai5_widget_pane_g5_ParamLimits

0xa071,	// (0x0001a3c5) bg_ai5_widget_pane_g5

0xa07d,	// (0x0001a3d1) bg_ai5_widget_pane_g6_ParamLimits

0xa07d,	// (0x0001a3d1) bg_ai5_widget_pane_g6

0xa089,	// (0x0001a3dd) bg_ai5_widget_pane_g7_ParamLimits

0xa089,	// (0x0001a3dd) bg_ai5_widget_pane_g7

0xa095,	// (0x0001a3e9) bg_ai5_widget_pane_g8_ParamLimits

0xa095,	// (0x0001a3e9) bg_ai5_widget_pane_g8

0xa0a1,	// (0x0001a3f5) bg_ai5_widget_pane_g9_ParamLimits

0xa0a1,	// (0x0001a3f5) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x00020191) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x00020191) bg_ai5_widget_pane_g

0xa0d3,	// (0x0001a427) cell_shortcut_ai5_widget_pane_ParamLimits

0xa0d3,	// (0x0001a427) cell_shortcut_ai5_widget_pane

0x3ff0,	// (0x00014344) bg_cell_shortcut_ai5_widget_pane

0xa0e4,	// (0x0001a438) cell_grid_ai5_widget_pane_g1

0x3ff0,	// (0x00014344) highlight_cell_shortcut_ai5_widget_pane

0x486c,	// (0x00014bc0) ai5_sk_left_pane_g1

0xa0ed,	// (0x0001a441) ai5_sk_left_pane_g2

0xa0f5,	// (0x0001a449) ai5_sk_left_pane_g3

0xa0fd,	// (0x0001a451) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x000201a4) ai5_sk_left_pane_g

0xa105,	// (0x0001a459) ai5_sk_left_pane_t1

0x4874,	// (0x00014bc8) ai5_sk_right_pane_g1

0xa113,	// (0x0001a467) ai5_sk_right_pane_g2

0xa11b,	// (0x0001a46f) ai5_sk_right_pane_g3

0xa123,	// (0x0001a477) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x000201ad) ai5_sk_right_pane_g

0xa12b,	// (0x0001a47f) ai5_sk_right_pane_t1

0x4874,	// (0x00014bc8) ai5_sk_middle_pane_g1

0x486c,	// (0x00014bc0) ai5_sk_middle_pane_g2

0x488c,	// (0x00014be0) ai5_sk_middle_pane_g3

0xa11b,	// (0x0001a46f) ai5_sk_middle_pane_g4

0xa0f5,	// (0x0001a449) ai5_sk_middle_pane_g5

0xa139,	// (0x0001a48d) ai5_sk_middle_pane_g6

0xf0e9,	// (0x0001f43d) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x000201b6) ai5_sk_middle_pane_g

0xd343,	// (0x0001d697) aid_touch_area_size_lc0_ParamLimits

0xd343,	// (0x0001d697) aid_touch_area_size_lc0

0x143e,	// (0x00011792) cell_hwr_candidate_pane_t1_ParamLimits

0x43a0,	// (0x000146f4) aid_touch_navi_pane

0xd5cf,	// (0x0001d923) status_dt_navi_pane_ParamLimits

0xd5cf,	// (0x0001d923) status_dt_navi_pane

0xd5e7,	// (0x0001d93b) status_dt_sta_pane_ParamLimits

0xd5e7,	// (0x0001d93b) status_dt_sta_pane

0xf0f1,	// (0x0001f445) dt_sta_controll_pane

0xf0fe,	// (0x0001f452) dt_sta_indi_pane

0xf10b,	// (0x0001f45f) dt_sta_title_pane

0x25e4,	// (0x00012938) bg_dt_sta_indi_pane_ParamLimits

0x25e4,	// (0x00012938) bg_dt_sta_indi_pane

0xf11d,	// (0x0001f471) dt_sta_battery_pane

0xf125,	// (0x0001f479) dt_sta_indi_pane_g1

0xa18b,	// (0x0001a4df) dt_sta_indi_pane_g2

0xa194,	// (0x0001a4e8) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x000201c5) dt_sta_indi_pane_g

0xa19d,	// (0x0001a4f1) dt_sta_signal_pane

0x313f,	// (0x00013493) bg_dt_sta_title_pane_ParamLimits

0x313f,	// (0x00013493) bg_dt_sta_title_pane

0xa1a6,	// (0x0001a4fa) dt_sta_title_pane_g1

0xa1ae,	// (0x0001a502) dt_sta_title_pane_t1_ParamLimits

0xa1ae,	// (0x0001a502) dt_sta_title_pane_t1

0xeb70,	// (0x0001eec4) bg_dt_sta_control_pane

0xf12e,	// (0x0001f482) dt_sta_controll_pane_g1

0xa1cc,	// (0x0001a520) bg_dt_sta_title_pane_g1

0xa1d5,	// (0x0001a529) bg_dt_sta_title_pane_g2

0xa1de,	// (0x0001a532) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x000201cc) bg_dt_sta_title_pane_g

0x73e2,	// (0x00017736) bg_dt_sta_indi_pane_g1

0xa1e7,	// (0x0001a53b) dt_sta_signal_pane_g1

0xa1ef,	// (0x0001a543) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x000201d3) dt_sta_signal_pane_g

0xa1f7,	// (0x0001a54b) dt_sta_battery_pane_g1

0xa200,	// (0x0001a554) dt_sta_battery_pane_t1

0x73e2,	// (0x00017736) bg_dt_sta_control_pane_g1

0x3a69,	// (0x00013dbd) fep_china_uni_eep_pane

0x3a71,	// (0x00013dc5) fep_china_uni_entry_pane_ParamLimits

0x3a81,	// (0x00013dd5) popup_fep_china_uni_window_g1_ParamLimits

0x3a91,	// (0x00013de5) popup_fep_china_uni_window_g2_ParamLimits

0x3a91,	// (0x00013de5) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0001fa47) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0001fa47) popup_fep_china_uni_window_g

0xa20f,	// (0x0001a563) fep_china_uni_eep_pane_g1

0xa217,	// (0x0001a56b) fep_china_uni_eep_pane_t1

0x9c06,	// (0x00019f5a) aid_touch_area_size_smil_player

0x44f6,	// (0x0001484a) lc0_clock_pane

0x46dd,	// (0x00014a31) status_pane_g5_ParamLimits

0x46dd,	// (0x00014a31) status_pane_g5

0xbb28,	// (0x0001be7c) popup_keymap_window

0x469b,	// (0x000149ef) status_icon_pane

0x9e13,	// (0x0001a167) cell_ai5_widget_pane_g3_ParamLimits

0x9e2d,	// (0x0001a181) cell_ai5_widget_pane_g4_ParamLimits

0x9e3d,	// (0x0001a191) cell_ai5_widget_pane_g5_ParamLimits

0x9e65,	// (0x0001a1b9) cell_ai5_widget_pane_g8_ParamLimits

0x9e65,	// (0x0001a1b9) cell_ai5_widget_pane_g8

0x9e79,	// (0x0001a1cd) cell_ai5_widget_pane_g9_ParamLimits

0x9e79,	// (0x0001a1cd) cell_ai5_widget_pane_g9

0x9e8d,	// (0x0001a1e1) cell_ai5_widget_pane_g10_ParamLimits

0x9e8d,	// (0x0001a1e1) cell_ai5_widget_pane_g10

0xa226,	// (0x0001a57a) status_icon_pane_g1

0xeb70,	// (0x0001eec4) bg_popup_sub_pane_cp13

0xa22e,	// (0x0001a582) popup_keymap_window_t1

0xd2d9,	// (0x0001d62d) control_pane_g6_ParamLimits

0xd2d9,	// (0x0001d62d) control_pane_g6

0xd2e6,	// (0x0001d63a) control_pane_g7_ParamLimits

0xd2e6,	// (0x0001d63a) control_pane_g7

0xd2f3,	// (0x0001d647) control_pane_g8_ParamLimits

0xd2f3,	// (0x0001d647) control_pane_g8

0xf0f1,	// (0x0001f445) dt_sta_controll_pane_ParamLimits

0xf0fe,	// (0x0001f452) dt_sta_indi_pane_ParamLimits

0xf10b,	// (0x0001f45f) dt_sta_title_pane_ParamLimits

0x2b20,	// (0x00012e74) aid_size_touch_scroll_bar_cale

0xf4ef,	// (0x0001f843) popup_discreet_window_ParamLimits

0xf4ef,	// (0x0001f843) popup_discreet_window

0xb72f,	// (0x0001ba83) popup_sk_window

0x4fde,	// (0x00015332) bg_popup_sub_pane_cp28_ParamLimits

0x4fde,	// (0x00015332) bg_popup_sub_pane_cp28

0xa23c,	// (0x0001a590) popup_discreet_window_g1_ParamLimits

0xa23c,	// (0x0001a590) popup_discreet_window_g1

0xa25c,	// (0x0001a5b0) popup_discreet_window_t1_ParamLimits

0xa25c,	// (0x0001a5b0) popup_discreet_window_t1

0xa27a,	// (0x0001a5ce) popup_discreet_window_t2_ParamLimits

0xa27a,	// (0x0001a5ce) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x000201d8) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x000201d8) popup_discreet_window_t

0x1e28,	// (0x0001217c) popup_sk_window_g1

0x1e32,	// (0x00012186) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x000201df) popup_sk_window_g

0x1e3a,	// (0x0001218e) popup_sk_window_t1

0x1e48,	// (0x0001219c) popup_sk_window_t1_copy1

0x9dff,	// (0x0001a153) cell_ai5_widget_pane_g2_ParamLimits

0x9f9a,	// (0x0001a2ee) cell_ai5_widget_pane_t9_ParamLimits

0x9f9a,	// (0x0001a2ee) cell_ai5_widget_pane_t9

0xeb70,	// (0x0001eec4) main_fep_fshwr2_pane

0xc522,	// (0x0001c876) aid_fshwr2_btn_pane

0xc536,	// (0x0001c88a) aid_fshwr2_syb_pane

0xc54a,	// (0x0001c89e) aid_fshwr2_txt_pane

0xc55a,	// (0x0001c8ae) fshwr2_func_candi_pane

0xc57a,	// (0x0001c8ce) fshwr2_hwr_syb_pane

0xc59c,	// (0x0001c8f0) fshwr2_icf_pane

0xf416,	// (0x0001f76a) fshwr2_icf_bg_pane

0xc5cc,	// (0x0001c920) fshwr2_icf_pane_t1_ParamLimits

0xc5cc,	// (0x0001c920) fshwr2_icf_pane_t1

0x3957,	// (0x00013cab) fshwr2_func_candi_pane_g1

0xf137,	// (0x0001f48b) fshwr2_func_candi_row_pane_ParamLimits

0xf137,	// (0x0001f48b) fshwr2_func_candi_row_pane

0xc5e5,	// (0x0001c939) cell_fshwr2_syb_pane_ParamLimits

0xc5e5,	// (0x0001c939) cell_fshwr2_syb_pane

0x1f1f,	// (0x00012273) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f1f,	// (0x00012273) fshwr2_hwr_syb_pane_g1

0xf416,	// (0x0001f76a) bg_popup_call_pane_cp01

0xc60b,	// (0x0001c95f) fshwr2_func_candi_cell_pane_ParamLimits

0xc60b,	// (0x0001c95f) fshwr2_func_candi_cell_pane

0x4dbf,	// (0x00015113) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x4dbf,	// (0x00015113) fshwr2_func_candi_cell_bg_pane

0xc656,	// (0x0001c9aa) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc656,	// (0x0001c9aa) fshwr2_func_candi_cell_pane_g1

0xc68d,	// (0x0001c9e1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc68d,	// (0x0001c9e1) fshwr2_func_candi_cell_pane_t1

0xf416,	// (0x0001f76a) bg_button_pane_cp08

0x431c,	// (0x00014670) cell_fshwr2_syb_bg_pane

0xc6a8,	// (0x0001c9fc) cell_fshwr2_syb_bg_pane_g1

0xc6bb,	// (0x0001ca0f) cell_fshwr2_syb_bg_pane_t1

0x313f,	// (0x00013493) main_tmo_pane

0xd8bb,	// (0x0001dc0f) uni_indicator_pane_g1_ParamLimits

0xd8d1,	// (0x0001dc25) uni_indicator_pane_g2_ParamLimits

0xd8e7,	// (0x0001dc3b) uni_indicator_pane_g3_ParamLimits

0x5b2c,	// (0x00015e80) uni_indicator_pane_g4_ParamLimits

0x5b2c,	// (0x00015e80) uni_indicator_pane_g4

0x5b40,	// (0x00015e94) uni_indicator_pane_g5_ParamLimits

0x5b40,	// (0x00015e94) uni_indicator_pane_g5

0x5b40,	// (0x00015e94) uni_indicator_pane_g6_ParamLimits

0x5b40,	// (0x00015e94) uni_indicator_pane_g6

0xf8f2,	// (0x0001fc46) uni_indicator_pane_g_ParamLimits

0xe4c2,	// (0x0001e816) popup_tmo_note_window_ParamLimits

0xe4c2,	// (0x0001e816) popup_tmo_note_window

0x16a8,	// (0x000119fc) fshwr2_bg_pane

0xc67e,	// (0x0001c9d2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc67e,	// (0x0001c9d2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x000201e4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x000201e4) fshwr2_func_candi_cell_pane_g

0x13f7,	// (0x0001174b) bg_popup_window_pane_cp01

0x1fd5,	// (0x00012329) bg_popup_window_pane_g1_cp01

0xa2f3,	// (0x0001a647) bg_popup_window_pane_cp22_ParamLimits

0xa2f3,	// (0x0001a647) bg_popup_window_pane_cp22

0xa301,	// (0x0001a655) listscroll_tmo_link_pane_ParamLimits

0xa301,	// (0x0001a655) listscroll_tmo_link_pane

0xa341,	// (0x0001a695) popup_tmo_note_window_g1_ParamLimits

0xa341,	// (0x0001a695) popup_tmo_note_window_g1

0xa34e,	// (0x0001a6a2) tmo_note_info_pane_ParamLimits

0xa34e,	// (0x0001a6a2) tmo_note_info_pane

0xf15a,	// (0x0001f4ae) list_tmo_note_info_pane_g1_ParamLimits

0xf15a,	// (0x0001f4ae) list_tmo_note_info_pane_g1

0xa37f,	// (0x0001a6d3) list_tmo_note_info_pane_g2_ParamLimits

0xa37f,	// (0x0001a6d3) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x000201e9) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x000201e9) list_tmo_note_info_pane_g

0xa39b,	// (0x0001a6ef) list_tmo_note_info_text_pane_ParamLimits

0xa39b,	// (0x0001a6ef) list_tmo_note_info_text_pane

0xa41c,	// (0x0001a770) list_tmo_link_pane

0xa429,	// (0x0001a77d) scroll_pane_cp20

0xa436,	// (0x0001a78a) list_single_tmo_link_pane_ParamLimits

0xa436,	// (0x0001a78a) list_single_tmo_link_pane

0xa446,	// (0x0001a79a) list_single_tmo_link_pane_t1

0xa454,	// (0x0001a7a8) list_tmo_note_info_text_pane_t1_ParamLimits

0xa454,	// (0x0001a7a8) list_tmo_note_info_text_pane_t1

0xcf38,	// (0x0001d28c) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf38,	// (0x0001d28c) aid_size_touch_scroll_bar_cp01

0xcea7,	// (0x0001d1fb) aid_size_touch_slider_marker

0xb71f,	// (0x0001ba73) popup_settings_window_ParamLimits

0xb71f,	// (0x0001ba73) popup_settings_window

0x4350,	// (0x000146a4) popup_candi_list_indi_window

0x43a0,	// (0x000146f4) aid_touch_navi_pane_ParamLimits

0x1603,	// (0x00011957) rs_clock_indi_pane

0x160c,	// (0x00011960) sctrl_sk_bottom_pane_ParamLimits

0x161d,	// (0x00011971) sctrl_sk_top_pane_ParamLimits

0x1720,	// (0x00011a74) popup_fep_tooltip_window

0x9d6d,	// (0x0001a0c1) aid_size_cell_widget_grid_ParamLimits

0x9dea,	// (0x0001a13e) cell_ai5_widget_pane_g1_ParamLimits

0x9dea,	// (0x0001a13e) cell_ai5_widget_pane_g1

0x9e4d,	// (0x0001a1a1) cell_ai5_widget_pane_g6_ParamLimits

0x9e59,	// (0x0001a1ad) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002015d) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002015d) cell_ai5_widget_pane_g

0x9fc9,	// (0x0001a31d) cell_ai5_widget_pane_t10_ParamLimits

0x9fc9,	// (0x0001a31d) cell_ai5_widget_pane_t10

0xa00c,	// (0x0001a360) grid_ai5_widget_pane_ParamLimits

0xa0ad,	// (0x0001a401) cell_contacts_ai5_widget_pane_ParamLimits

0xa0ad,	// (0x0001a401) cell_contacts_ai5_widget_pane

0xa28f,	// (0x0001a5e3) popup_discreet_window_t3_ParamLimits

0xa28f,	// (0x0001a5e3) popup_discreet_window_t3

0xc5b8,	// (0x0001c90c) popup_fshwr2_char_preview_window_ParamLimits

0xc5b8,	// (0x0001c90c) popup_fshwr2_char_preview_window

0xf171,	// (0x0001f4c5) tmo_note_info_pane_t1

0xf186,	// (0x0001f4da) tmo_note_info_pane_t2

0xf19d,	// (0x0001f4f1) tmo_note_info_pane_t3

0xa3f8,	// (0x0001a74c) tmo_note_info_pane_t4

0xa40a,	// (0x0001a75e) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x000201ee) tmo_note_info_pane_t

0xa41c,	// (0x0001a770) list_tmo_link_pane_ParamLimits

0xa429,	// (0x0001a77d) scroll_pane_cp20_ParamLimits

0xf416,	// (0x0001f76a) bg_popup_fep_char_preview_window_cp01

0xa46d,	// (0x0001a7c1) popup_fshwr2_char_preview_window_t1

0xa47b,	// (0x0001a7cf) popup_candi_list_indi_window_g1

0xa484,	// (0x0001a7d8) bg_cell_contacts_ai5_widget_pane

0xa490,	// (0x0001a7e4) cell_contacts_ai5_widget_pane_g1

0x7c25,	// (0x00017f79) cell_contacts_ai5_widget_pane_g2

0xa4a5,	// (0x0001a7f9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x000201f9) cell_contacts_ai5_widget_pane_g

0xa4b1,	// (0x0001a805) cell_contacts_ai5_widget_pane_t1

0x313f,	// (0x00013493) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa528,	// (0x0001a87c) settings_container_pane

0x3ff0,	// (0x00014344) listscroll_set_pane_copy1

0x67b5,	// (0x00016b09) scroll_pane_cp121_copy1

0x4d7b,	// (0x000150cf) set_content_pane_copy1

0xa534,	// (0x0001a888) aid_height_set_list_copy1_ParamLimits

0xa534,	// (0x0001a888) aid_height_set_list_copy1

0x5d4a,	// (0x0001609e) aid_size_parent_copy1_ParamLimits

0x5d4a,	// (0x0001609e) aid_size_parent_copy1

0xa540,	// (0x0001a894) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa540,	// (0x0001a894) button_value_adjust_pane_cp6_copy1

0x431c,	// (0x00014670) list_highlight_pane_cp2_copy1_ParamLimits

0x431c,	// (0x00014670) list_highlight_pane_cp2_copy1

0xa554,	// (0x0001a8a8) list_set_pane_copy1_ParamLimits

0xa554,	// (0x0001a8a8) list_set_pane_copy1

0xa4c3,	// (0x0001a817) main_pane_set_t1_copy1_ParamLimits

0xa4c3,	// (0x0001a817) main_pane_set_t1_copy1

0xa4fd,	// (0x0001a851) main_pane_set_t2_copy1_ParamLimits

0xa4fd,	// (0x0001a851) main_pane_set_t2_copy1

0xa601,	// (0x0001a955) main_pane_set_t3_copy1

0xa60f,	// (0x0001a963) main_pane_set_t4_copy1

0xa51c,	// (0x0001a870) set_content_pane_g1_copy1_ParamLimits

0xa51c,	// (0x0001a870) set_content_pane_g1_copy1

0xa61d,	// (0x0001a971) setting_code_pane_copy1

0xa625,	// (0x0001a979) setting_slider_graphic_pane_copy1

0xa625,	// (0x0001a979) setting_slider_pane_copy1

0xa62d,	// (0x0001a981) setting_text_pane_copy1

0xa62d,	// (0x0001a981) setting_volume_pane_copy1

0xa61d,	// (0x0001a971) settings_code_pane_cp2_copy1

0xa635,	// (0x0001a989) settings_code_pane_cp_copy1_ParamLimits

0xa635,	// (0x0001a989) settings_code_pane_cp_copy1

0x1fde,	// (0x00012332) volume_set_pane_copy1

0xa649,	// (0x0001a99d) volume_set_pane_g10_copy1

0xa651,	// (0x0001a9a5) volume_set_pane_g1_copy1

0xa659,	// (0x0001a9ad) volume_set_pane_g2_copy1

0xa661,	// (0x0001a9b5) volume_set_pane_g3_copy1

0xa669,	// (0x0001a9bd) volume_set_pane_g4_copy1

0xa671,	// (0x0001a9c5) volume_set_pane_g5_copy1

0xa679,	// (0x0001a9cd) volume_set_pane_g6_copy1

0xa681,	// (0x0001a9d5) volume_set_pane_g7_copy1

0xa689,	// (0x0001a9dd) volume_set_pane_g8_copy1

0xa691,	// (0x0001a9e5) volume_set_pane_g9_copy1

0x2341,	// (0x00012695) bg_set_opt_pane_cp_copy1_ParamLimits

0x2341,	// (0x00012695) bg_set_opt_pane_cp_copy1

0x1fe6,	// (0x0001233a) setting_slider_pane_t1_copy1_ParamLimits

0x1fe6,	// (0x0001233a) setting_slider_pane_t1_copy1

0x2005,	// (0x00012359) setting_slider_pane_t2_copy1_ParamLimits

0x2005,	// (0x00012359) setting_slider_pane_t2_copy1

0x201f,	// (0x00012373) setting_slider_pane_t3_copy1_ParamLimits

0x201f,	// (0x00012373) setting_slider_pane_t3_copy1

0x2037,	// (0x0001238b) slider_set_pane_copy1_ParamLimits

0x2037,	// (0x0001238b) slider_set_pane_copy1

0x326e,	// (0x000135c2) set_opt_bg_pane_g1_copy2

0x3276,	// (0x000135ca) set_opt_bg_pane_g2_copy2

0xa699,	// (0x0001a9ed) set_opt_bg_pane_g3_copy2

0x3286,	// (0x000135da) set_opt_bg_pane_g4_copy2

0x328e,	// (0x000135e2) set_opt_bg_pane_g5_copy2

0x3296,	// (0x000135ea) set_opt_bg_pane_g6_copy2

0xa6a3,	// (0x0001a9f7) set_opt_bg_pane_g7_copy2

0xa6ab,	// (0x0001a9ff) set_opt_bg_pane_g8_copy2

0xa6b5,	// (0x0001aa09) set_opt_bg_pane_g9_copy2

0x204d,	// (0x000123a1) aid_size_touch_slider_mark_copy1_ParamLimits

0x204d,	// (0x000123a1) aid_size_touch_slider_mark_copy1

0xa6bf,	// (0x0001aa13) slider_set_pane_g1_copy1

0x2061,	// (0x000123b5) slider_set_pane_g2_copy1

0x1038,	// (0x0001138c) slider_set_pane_g3_copy1_ParamLimits

0x1038,	// (0x0001138c) slider_set_pane_g3_copy1

0x104c,	// (0x000113a0) slider_set_pane_g4_copy1_ParamLimits

0x104c,	// (0x000113a0) slider_set_pane_g4_copy1

0x1064,	// (0x000113b8) slider_set_pane_g5_copy1_ParamLimits

0x1064,	// (0x000113b8) slider_set_pane_g5_copy1

0x1038,	// (0x0001138c) slider_set_pane_g6_copy1_ParamLimits

0x1038,	// (0x0001138c) slider_set_pane_g6_copy1

0x2069,	// (0x000123bd) slider_set_pane_g7_copy1_ParamLimits

0x2069,	// (0x000123bd) slider_set_pane_g7_copy1

0x2261,	// (0x000125b5) bg_set_opt_pane_cp2_copy1

0xa6c8,	// (0x0001aa1c) setting_slider_graphic_pane_g1_copy1

0xa6d1,	// (0x0001aa25) setting_slider_graphic_pane_t1_copy1

0xa6e1,	// (0x0001aa35) setting_slider_graphic_pane_t2_copy1

0xa6f1,	// (0x0001aa45) slider_set_pane_cp_copy1

0xa701,	// (0x0001aa55) input_focus_pane_cp1_copy1

0xa70a,	// (0x0001aa5e) list_set_text_pane_copy1

0xa712,	// (0x0001aa66) setting_text_pane_g1_copy1

0x239a,	// (0x000126ee) set_text_pane_t1_copy1

0xa701,	// (0x0001aa55) input_focus_pane_cp2_copy1

0xa712,	// (0x0001aa66) setting_code_pane_g1_copy1

0xa71b,	// (0x0001aa6f) setting_code_pane_t1_copy1

0x65dd,	// (0x00016931) list_set_graphic_pane_copy1

0x2261,	// (0x000125b5) bg_set_opt_pane_cp4_copy1

0x3cf7,	// (0x0001404b) list_set_graphic_pane_g1_copy1_ParamLimits

0x3cf7,	// (0x0001404b) list_set_graphic_pane_g1_copy1

0xa729,	// (0x0001aa7d) list_set_graphic_pane_g2_copy1

0x3d0f,	// (0x00014063) list_set_graphic_pane_t1_copy1_ParamLimits

0x3d0f,	// (0x00014063) list_set_graphic_pane_t1_copy1

0x73e2,	// (0x00017736) rs_clock_indi_pane_g1

0xa731,	// (0x0001aa85) rs_clock_indi_pane_t1

0xa73f,	// (0x0001aa93) rs_indi_pane

0xa747,	// (0x0001aa9b) rs_indi_pane_g1

0xa750,	// (0x0001aaa4) rs_indi_pane_g2

0xa759,	// (0x0001aaad) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x00020200) rs_indi_pane_g

0x3ff0,	// (0x00014344) bg_popup_preview_window_pane_cp03

0xa762,	// (0x0001aab6) popup_fep_tooltip_window_t1

0x8264,	// (0x000185b8) popup_note2_window_g2_ParamLimits

0x8264,	// (0x000185b8) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0001ff8d) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0001ff8d) popup_note2_window_g

0x884e,	// (0x00018ba2) bg_popup_sub_pane_cp11_ParamLimits

0x885b,	// (0x00018baf) cell_ai3_links_pane_g1_ParamLimits

0x8872,	// (0x00018bc6) cell_ai3_links_pane_t1

0x239a,	// (0x000126ee) set_text_pane_t1_copy1_ParamLimits

0xd160,	// (0x0001d4b4) cell_graphic_popup_pane_cp2_ParamLimits

0xd160,	// (0x0001d4b4) cell_graphic_popup_pane_cp2

0xa770,	// (0x0001aac4) cell_graphic_popup_pane_g1_cp2

0x2933,	// (0x00012c87) cell_graphic_popup_pane_g2_cp2

0xa778,	// (0x0001aacc) cell_graphic_popup_pane_g3_cp2

0xa780,	// (0x0001aad4) cell_graphic_popup_pane_t2_cp2

0x2944,	// (0x00012c98) grid_highlight_pane_cp3_cp2

0x3672,	// (0x000139c6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x313f,	// (0x00013493) main_tmo_pane_ParamLimits

0xe4b6,	// (0x0001e80a) popup_tmo_big_image_note_window

0x9dd9,	// (0x0001a12d) cell_ai5_widget_list_pane

0x9de1,	// (0x0001a135) cell_ai5_widget_lrg_icon_pane

0xf171,	// (0x0001f4c5) tmo_note_info_pane_t1_ParamLimits

0xf186,	// (0x0001f4da) tmo_note_info_pane_t2_ParamLimits

0xf19d,	// (0x0001f4f1) tmo_note_info_pane_t3_ParamLimits

0xa3f8,	// (0x0001a74c) tmo_note_info_pane_t4_ParamLimits

0xa40a,	// (0x0001a75e) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x000201ee) tmo_note_info_pane_t_ParamLimits

0xa528,	// (0x0001a87c) settings_container_pane_ParamLimits

0xa6f9,	// (0x0001aa4d) indicator_popup_pane_cp5

0xa6f9,	// (0x0001aa4d) indicator_popup_pane_cp6

0x65dd,	// (0x00016931) list_set_graphic_pane_copy1_ParamLimits

0xeb70,	// (0x0001eec4) bg_popup_window_pane_cp23

0xa78e,	// (0x0001aae2) popup_tmo_big_image_note_window_g1

0xa798,	// (0x0001aaec) popup_tmo_big_image_note_window_t1

0xa7a8,	// (0x0001aafc) popup_tmo_big_image_note_window_t2

0xa7b8,	// (0x0001ab0c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x00020207) popup_tmo_big_image_note_window_t

0x73e2,	// (0x00017736) cell_ai5_widget_lrg_icon_pane_g1

0xa7c8,	// (0x0001ab1c) cell_ai5_widget_lrg_icon_pane_t1

0xa7d6,	// (0x0001ab2a) cell_ai5_widget_list_row_pane_ParamLimits

0xa7d6,	// (0x0001ab2a) cell_ai5_widget_list_row_pane

0xa7ed,	// (0x0001ab41) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7ed,	// (0x0001ab41) cell_ai5_widget_list_row_pane_g1

0xa7fa,	// (0x0001ab4e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7fa,	// (0x0001ab4e) cell_ai5_widget_list_row_pane_t1

0xa82b,	// (0x0001ab7f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa82b,	// (0x0001ab7f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002020e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002020e) cell_ai5_widget_list_row_pane_t

0xf416,	// (0x0001f76a) main_fep_vtchi_ss_pane

0xa87b,	// (0x0001abcf) popup_fep_char_pre_window

0xa883,	// (0x0001abd7) popup_fep_ituss_window

0xf1dc,	// (0x0001f530) popup_fep_vkbss_window

0x431c,	// (0x00014670) grid_vkbss_keypad_pane_ParamLimits

0x431c,	// (0x00014670) grid_vkbss_keypad_pane

0x431c,	// (0x00014670) ituss_keypad_pane

0x208b,	// (0x000123df) aid_vkbss_key_offset_ParamLimits

0x208b,	// (0x000123df) aid_vkbss_key_offset

0xc6d1,	// (0x0001ca25) cell_vkbss_key_pane_ParamLimits

0xc6d1,	// (0x0001ca25) cell_vkbss_key_pane

0xa8ef,	// (0x0001ac43) bg_cell_vkbss_key_g1_ParamLimits

0xa8ef,	// (0x0001ac43) bg_cell_vkbss_key_g1

0xf1e9,	// (0x0001f53d) cell_vkbss_key_3p_pane_ParamLimits

0xf1e9,	// (0x0001f53d) cell_vkbss_key_3p_pane

0xf21f,	// (0x0001f573) cell_vkbss_key_g1_ParamLimits

0xf21f,	// (0x0001f573) cell_vkbss_key_g1

0xf255,	// (0x0001f5a9) cell_vkbss_key_t1_ParamLimits

0xf255,	// (0x0001f5a9) cell_vkbss_key_t1

0x20ef,	// (0x00012443) cell_ituss_key_pane_ParamLimits

0x20ef,	// (0x00012443) cell_ituss_key_pane

0xa9c3,	// (0x0001ad17) bg_cell_ituss_key_g1_ParamLimits

0xa9c3,	// (0x0001ad17) bg_cell_ituss_key_g1

0xa9cf,	// (0x0001ad23) cell_ituss_key_pane_g1_ParamLimits

0xa9cf,	// (0x0001ad23) cell_ituss_key_pane_g1

0x2100,	// (0x00012454) cell_ituss_key_pane_g2_ParamLimits

0x2100,	// (0x00012454) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x00020215) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x00020215) cell_ituss_key_pane_g

0x2184,	// (0x000124d8) cell_ituss_key_t1_ParamLimits

0x2184,	// (0x000124d8) cell_ituss_key_t1

0x21be,	// (0x00012512) cell_ituss_key_t2_ParamLimits

0x21be,	// (0x00012512) cell_ituss_key_t2

0x21ef,	// (0x00012543) cell_ituss_key_t3_ParamLimits

0x21ef,	// (0x00012543) cell_ituss_key_t3

0x21be,	// (0x00012512) cell_ituss_key_t4_ParamLimits

0x21be,	// (0x00012512) cell_ituss_key_t4

0x0004,

0xfece,	// (0x00020222) cell_ituss_key_t_ParamLimits

0xfece,	// (0x00020222) cell_ituss_key_t

0xf2b1,	// (0x0001f605) cell_vkbss_key_3p_pane_g1

0xf2b9,	// (0x0001f60d) cell_vkbss_key_3p_pane_g2

0xf2c1,	// (0x0001f615) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002022d) cell_vkbss_key_3p_pane_g

0x3ff0,	// (0x00014344) bg_popup_fep_char_preview_window_cp02

0xaa0d,	// (0x0001ad61) popup_fep_char_pre_window_t1

0xf0c1,	// (0x0001f415) main_ai5_sk_pane

0xa484,	// (0x0001a7d8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa490,	// (0x0001a7e4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7c25,	// (0x00017f79) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa4a5,	// (0x0001a7f9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x000201f9) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa4b1,	// (0x0001a805) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x313f,	// (0x00013493) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2c9,	// (0x0001f61d) main_ai5_sk_pane_g1

0x4e17,	// (0x0001516b) popup_query_code_window_g1

0xf1cd,	// (0x0001f521) popup_fep_vkb_icf_pane

0xa8c6,	// (0x0001ac1a) popup_fep_vtchi_icf_pane

0x431c,	// (0x00014670) bg_icf_pane

0x431c,	// (0x00014670) list_vkb_icf_pane

0xaa24,	// (0x0001ad78) bg_icf_pane_cp01

0x3ff0,	// (0x00014344) vtchi_icf_list_pane

0xf31e,	// (0x0001f672) list_vkb_icf_pane_t1_ParamLimits

0xf31e,	// (0x0001f672) list_vkb_icf_pane_t1

0xaab8,	// (0x0001ae0c) vtchi_icf_list_pane_t1_ParamLimits

0xaab8,	// (0x0001ae0c) vtchi_icf_list_pane_t1

0xa883,	// (0x0001abd7) popup_fep_ituss_window_ParamLimits

0xa8c6,	// (0x0001ac1a) popup_fep_vtchi_icf_pane_ParamLimits

0x431c,	// (0x00014670) ituss_keypad_pane_ParamLimits

0x207f,	// (0x000123d3) ituss_sks_pane

0x431c,	// (0x00014670) bg_icf_pane_ParamLimits

0xf1b2,	// (0x0001f506) icf_edit_indi_pane_ParamLimits

0xf1b2,	// (0x0001f506) icf_edit_indi_pane

0x431c,	// (0x00014670) list_vkb_icf_pane_ParamLimits

0xaa24,	// (0x0001ad78) bg_icf_pane_cp01_ParamLimits

0xa86e,	// (0x0001abc2) icf_edit_indi_pane_cp01_ParamLimits

0xa86e,	// (0x0001abc2) icf_edit_indi_pane_cp01

0xaa37,	// (0x0001ad8b) vtchi_query_pane

0x9bd6,	// (0x00019f2a) icf_edit_indi_pane_g1_ParamLimits

0x9bd6,	// (0x00019f2a) icf_edit_indi_pane_g1

0xf335,	// (0x0001f689) icf_edit_indi_pane_g2_ParamLimits

0xf335,	// (0x0001f689) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x00020258) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x00020258) icf_edit_indi_pane_g

0xf349,	// (0x0001f69d) icf_edit_indi_pane_t1

0xaad6,	// (0x0001ae2a) bg_input_focus_pane_cp042

0x2b17,	// (0x00012e6b) vtchi_button_pane

0xaadf,	// (0x0001ae33) vtchi_query_pane_t1

0xaaed,	// (0x0001ae41) vtchi_query_pane_t2

0xaafb,	// (0x0001ae4f) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x00020247) vtchi_query_pane_t

0xf416,	// (0x0001f76a) bg_button_pane_cp13

0xab09,	// (0x0001ae5d) vtchi_button_pane_g1

0x2232,	// (0x00012586) ituss_sks_pane_g1

0x223d,	// (0x00012591) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002024e) ituss_sks_pane_g

0xab11,	// (0x0001ae65) ituss_sks_pane_t1

0xab1f,	// (0x0001ae73) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x00020253) ituss_sks_pane_t

0x6e15,	// (0x00017169) indicator_nsta_pane_cp_g1

0x6e1e,	// (0x00017172) indicator_nsta_pane_cp_g2

0x6e26,	// (0x0001717a) indicator_nsta_pane_cp_g3

0x6e2e,	// (0x00017182) indicator_nsta_pane_cp_g4

0x6e1e,	// (0x00017172) indicator_nsta_pane_cp_g5

0x6e26,	// (0x0001717a) indicator_nsta_pane_cp_g6

0x0005,

0xfa77,	// (0x0001fdcb) indicator_nsta_pane_cp_g

0xeed2,	// (0x0001f226) cell_graphic2_pane_t2_ParamLimits

0xeed2,	// (0x0001f226) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x000200e4) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x000200e4) cell_graphic2_pane_t

0xef07,	// (0x0001f25b) cell_graphic2_control_pane_t1

0xd0e3,	// (0x0001d437) signal_pane_g3_ParamLimits

0xd0e3,	// (0x0001d437) signal_pane_g3

0xd0f7,	// (0x0001d44b) signal_pane_g4_ParamLimits

0xd0f7,	// (0x0001d44b) signal_pane_g4

0xa83d,	// (0x0001ab91) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa83d,	// (0x0001ab91) cell_ai5_widget_list_row_pane_t3

0xa9e3,	// (0x0001ad37) cell_ituss_key_pane_t1_ParamLimits

0xa9e3,	// (0x0001ad37) cell_ituss_key_pane_t1

0x4a17,	// (0x00014d6b) form_field_data_wide_pane_vc_t2_ParamLimits

0x4a17,	// (0x00014d6b) form_field_data_wide_pane_vc_t2

0x4a2b,	// (0x00014d7f) form_field_data_wide_pane_vc_t3_ParamLimits

0x4a2b,	// (0x00014d7f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x0001fb2e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x0001fb2e) form_field_data_wide_pane_vc_t

0x6abf,	// (0x00016e13) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6abf,	// (0x00016e13) form_field_slider_wide_pane_vc_t3

0x6b9d,	// (0x00016ef1) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b9d,	// (0x00016ef1) form_field_popup_wide_pane_vc_t2

0x6bb4,	// (0x00016f08) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6bb4,	// (0x00016f08) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa66,	// (0x0001fdba) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0001fdba) form_field_popup_wide_pane_vc_t

0xc522,	// (0x0001c876) aid_fshwr2_btn_pane_ParamLimits

0xc536,	// (0x0001c88a) aid_fshwr2_syb_pane_ParamLimits

0xc54a,	// (0x0001c89e) aid_fshwr2_txt_pane_ParamLimits

0x16a8,	// (0x000119fc) fshwr2_bg_pane_ParamLimits

0xc55a,	// (0x0001c8ae) fshwr2_func_candi_pane_ParamLimits

0xc57a,	// (0x0001c8ce) fshwr2_hwr_syb_pane_ParamLimits

0xc59c,	// (0x0001c8f0) fshwr2_icf_pane_ParamLimits

0x6a25,	// (0x00016d79) list_double_graphic_pane_vc_g4_ParamLimits

0x6a25,	// (0x00016d79) list_double_graphic_pane_vc_g4

0x2120,	// (0x00012474) cell_ituss_key_pane_g3_ParamLimits

0x2120,	// (0x00012474) cell_ituss_key_pane_g3

0x2220,	// (0x00012574) cell_ituss_key_t5_ParamLimits

0x2220,	// (0x00012574) cell_ituss_key_t5

0xf1dc,	// (0x0001f530) popup_fep_vkbss_window_ParamLimits

0x9d64,	// (0x0001a0b8) aid_cell_ai5_quarter

0xf349,	// (0x0001f69d) icf_edit_indi_pane_t1_ParamLimits

0x268c,	// (0x000129e0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x268c,	// (0x000129e0) aid_tch_indicator_popup_pane_cp2

0x269f,	// (0x000129f3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x269f,	// (0x000129f3) aid_tch_query_popup_data_pane_cp2

0x4dbf,	// (0x00015113) aid_tch_query_popup_pane_ParamLimits

0x4dbf,	// (0x00015113) aid_tch_query_popup_pane

0x4dbf,	// (0x00015113) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x4dbf,	// (0x00015113) aid_tch_query_popup_data_pane_cp1

0x431c,	// (0x00014670) cell_fshwr2_syb_bg_pane_ParamLimits

0xc6a8,	// (0x0001c9fc) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc6bb,	// (0x0001ca0f) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1cd,	// (0x0001f521) popup_fep_vkb_icf_pane_ParamLimits

0xc4ae,	// (0x0001c802) bg_popup_fep_char_preview_window_g10

0x9ea1,	// (0x0001a1f5) cell_ai5_widget_pane_g11_ParamLimits

0x9ea1,	// (0x0001a1f5) cell_ai5_widget_pane_g11

0x9ead,	// (0x0001a201) cell_ai5_widget_pane_g12_ParamLimits

0x9ead,	// (0x0001a201) cell_ai5_widget_pane_g12

0x9eb9,	// (0x0001a20d) cell_ai5_widget_pane_g13_ParamLimits

0x9eb9,	// (0x0001a20d) cell_ai5_widget_pane_g13

0x9fe8,	// (0x0001a33c) cell_ai5_widget_pane_t11_ParamLimits

0x9fe8,	// (0x0001a33c) cell_ai5_widget_pane_t11

0x9ffa,	// (0x0001a34e) cell_ai5_widget_pane_t12_ParamLimits

0x9ffa,	// (0x0001a34e) cell_ai5_widget_pane_t12

0x212c,	// (0x00012480) cell_ituss_key_pane_g4_ParamLimits

0x212c,	// (0x00012480) cell_ituss_key_pane_g4

0x2148,	// (0x0001249c) cell_ituss_key_pane_g5_ParamLimits

0x2148,	// (0x0001249c) cell_ituss_key_pane_g5

0x2164,	// (0x000124b8) cell_ituss_key_pane_g6_ParamLimits

0x2164,	// (0x000124b8) cell_ituss_key_pane_g6

0x4864,	// (0x00014bb8) bg_icf_pane_g1

0xf2d2,	// (0x0001f626) bg_icf_pane_g2

0xf2dc,	// (0x0001f630) bg_icf_pane_g3

0xf2e4,	// (0x0001f638) bg_icf_pane_g4

0xf2ee,	// (0x0001f642) bg_icf_pane_g5

0xf2f8,	// (0x0001f64c) bg_icf_pane_g6

0xf302,	// (0x0001f656) bg_icf_pane_g7

0xf30a,	// (0x0001f65e) bg_icf_pane_g8

0xf314,	// (0x0001f668) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x00020234) bg_icf_pane_g

0xa8dc,	// (0x0001ac30) popup_hyb_candi_window_ParamLimits

0xa8dc,	// (0x0001ac30) popup_hyb_candi_window

0x4986,	// (0x00014cda) bg_popup_sub_pane_cp01_ParamLimits

0x4986,	// (0x00014cda) bg_popup_sub_pane_cp01

0xab5a,	// (0x0001aeae) entry_hyb_candi_pane_ParamLimits

0xab5a,	// (0x0001aeae) entry_hyb_candi_pane

0xab69,	// (0x0001aebd) grid_hyb_candi_pane_ParamLimits

0xab69,	// (0x0001aebd) grid_hyb_candi_pane

0xab7e,	// (0x0001aed2) grid_hyb_phrase_pane_ParamLimits

0xab7e,	// (0x0001aed2) grid_hyb_phrase_pane

0xab8d,	// (0x0001aee1) cell_hyb_candi_pane_ParamLimits

0xab8d,	// (0x0001aee1) cell_hyb_candi_pane

0xabb0,	// (0x0001af04) cell_hyb_candi_scroll_pane

0x3957,	// (0x00013cab) cell_hyb_candi_pane_g1

0xabb9,	// (0x0001af0d) cell_hyb_candi_pane_t1

0xabc7,	// (0x0001af1b) cell_hyb_phrase_pane

0x3957,	// (0x00013cab) cell_hyb_phrase_pane_g1

0xabd0,	// (0x0001af24) cell_hyb_phrase_pane_t1

0xabde,	// (0x0001af32) entry_hyb_candi_pane_t1

0x3ff0,	// (0x00014344) input_focus_pane_cp06

0xabec,	// (0x0001af40) cell_hyb_candi_scroll_pane_g1

0xabf4,	// (0x0001af48) cell_hyb_candi_scroll_pane_g1_aid

0xabfc,	// (0x0001af50) cell_hyb_candi_scroll_pane_g2

0xac04,	// (0x0001af58) cell_hyb_candi_scroll_pane_g2_aid

0xac0c,	// (0x0001af60) cell_hyb_candi_scroll_pane_g3

0xac14,	// (0x0001af68) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001e691 };

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
0x8910,	// (0x00026fa1) Screen

0x891c,	// (0x00026fad) application_window_ParamLimits

0x891c,	// (0x00026fad) application_window

0x41d4,	// (0x00022865) screen_g1

0x8978,	// (0x00027009) area_bottom_pane_ParamLimits

0x8978,	// (0x00027009) area_bottom_pane

0x8a38,	// (0x000270c9) area_top_pane_ParamLimits

0x8a38,	// (0x000270c9) area_top_pane

0x8ad6,	// (0x00027167) main_pane_ParamLimits

0x8ad6,	// (0x00027167) main_pane

0x41de,	// (0x0002286f) misc_graphics

0x9dd1,	// (0x00028462) battery_pane_ParamLimits

0x9dd1,	// (0x00028462) battery_pane

0x5f82,	// (0x00024613) bg_status_flat_pane_g8

0x5f8a,	// (0x0002461b) bg_status_flat_pane_g9

0x56b7,	// (0x00023d48) context_pane_ParamLimits

0x56b7,	// (0x00023d48) context_pane

0x9f05,	// (0x00028596) navi_pane_ParamLimits

0x9f05,	// (0x00028596) navi_pane

0x9f71,	// (0x00028602) signal_pane_ParamLimits

0x9f71,	// (0x00028602) signal_pane

0x0008,

0xf880,	// (0x0002df11) bg_status_flat_pane_g

0x9fd6,	// (0x00028667) status_pane_g1_ParamLimits

0x9fd6,	// (0x00028667) status_pane_g1

0x636d,	// (0x000249fe) status_pane_g2_ParamLimits

0x636d,	// (0x000249fe) status_pane_g2

0x571c,	// (0x00023dad) status_pane_g3_ParamLimits

0x571c,	// (0x00023dad) status_pane_g3

0x0004,

0xf7b3,	// (0x0002de44) status_pane_g_ParamLimits

0xf7b3,	// (0x0002de44) status_pane_g

0x9fea,	// (0x0002867b) title_pane_ParamLimits

0x9fea,	// (0x0002867b) title_pane

0xa027,	// (0x000286b8) uni_indicator_pane_ParamLimits

0xa027,	// (0x000286b8) uni_indicator_pane

0x54e2,	// (0x00023b73) bg_list_pane_ParamLimits

0x54e2,	// (0x00023b73) bg_list_pane

0xe5a5,	// (0x0002cc36) find_pane

0x98e9,	// (0x00027f7a) listscroll_app_pane_ParamLimits

0x98e9,	// (0x00027f7a) listscroll_app_pane

0x5502,	// (0x00023b93) listscroll_form_pane

0xe5ad,	// (0x0002cc3e) listscroll_gen_pane_ParamLimits

0xe5ad,	// (0x0002cc3e) listscroll_gen_pane

0x5502,	// (0x00023b93) listscroll_set_pane

0x90a8,	// (0x00027739) main_idle_act_pane

0x52c8,	// (0x00023959) main_idle_trad_pane

0x52c8,	// (0x00023959) main_list_empty_pane

0x49d8,	// (0x00023069) main_midp_pane

0x551c,	// (0x00023bad) main_pane_g1_ParamLimits

0x551c,	// (0x00023bad) main_pane_g1

0x98f5,	// (0x00027f86) popup_ai_message_window_ParamLimits

0x98f5,	// (0x00027f86) popup_ai_message_window

0x9973,	// (0x00028004) popup_fep_china_uni_window_ParamLimits

0x9973,	// (0x00028004) popup_fep_china_uni_window

0x554e,	// (0x00023bdf) popup_fep_japan_candidate_window_ParamLimits

0x554e,	// (0x00023bdf) popup_fep_japan_candidate_window

0x556c,	// (0x00023bfd) popup_fep_japan_predictive_window_ParamLimits

0x556c,	// (0x00023bfd) popup_fep_japan_predictive_window

0x99cd,	// (0x0002805e) popup_find_window

0x99da,	// (0x0002806b) popup_grid_graphic_window_ParamLimits

0x99da,	// (0x0002806b) popup_grid_graphic_window

0x559c,	// (0x00023c2d) popup_large_graphic_colour_window

0x9a00,	// (0x00028091) popup_menu_window_ParamLimits

0x9a00,	// (0x00028091) popup_menu_window

0x9bba,	// (0x0002824b) popup_note_image_window

0x9ba6,	// (0x00028237) popup_note_wait_window_ParamLimits

0x9ba6,	// (0x00028237) popup_note_wait_window

0x9ba6,	// (0x00028237) popup_note_window_ParamLimits

0x9ba6,	// (0x00028237) popup_note_window

0x9c10,	// (0x000282a1) popup_query_code_window_ParamLimits

0x9c10,	// (0x000282a1) popup_query_code_window

0x55d0,	// (0x00023c61) popup_query_data_code_window_ParamLimits

0x55d0,	// (0x00023c61) popup_query_data_code_window

0x9c24,	// (0x000282b5) popup_query_data_window_ParamLimits

0x9c24,	// (0x000282b5) popup_query_data_window

0x9c3c,	// (0x000282cd) popup_query_sat_info_window_ParamLimits

0x9c3c,	// (0x000282cd) popup_query_sat_info_window

0x9c75,	// (0x00028306) popup_snote_single_graphic_window_ParamLimits

0x9c75,	// (0x00028306) popup_snote_single_graphic_window

0x9c75,	// (0x00028306) popup_snote_single_text_window_ParamLimits

0x9c75,	// (0x00028306) popup_snote_single_text_window

0x55e7,	// (0x00023c78) popup_sub_window_general

0x562d,	// (0x00023cbe) popup_window_general_ParamLimits

0x562d,	// (0x00023cbe) popup_window_general

0x5642,	// (0x00023cd3) power_save_pane

0x9774,	// (0x00027e05) control_pane_g1_ParamLimits

0x9774,	// (0x00027e05) control_pane_g1

0x979b,	// (0x00027e2c) control_pane_g2_ParamLimits

0x979b,	// (0x00027e2c) control_pane_g2

0x54bc,	// (0x00023b4d) control_pane_g3_ParamLimits

0x54bc,	// (0x00023b4d) control_pane_g3

0x0007,

0xf79b,	// (0x0002de2c) control_pane_g_ParamLimits

0xf79b,	// (0x0002de2c) control_pane_g

0x9806,	// (0x00027e97) control_pane_t1_ParamLimits

0x9806,	// (0x00027e97) control_pane_t1

0x9852,	// (0x00027ee3) control_pane_t2_ParamLimits

0x9852,	// (0x00027ee3) control_pane_t2

0x0002,

0xf7ac,	// (0x0002de3d) control_pane_t_ParamLimits

0xf7ac,	// (0x0002de3d) control_pane_t

0x53dd,	// (0x00023a6e) navi_navi_volume_pane_cp1

0x53e6,	// (0x00023a77) status_small_icon_pane

0x53ee,	// (0x00023a7f) status_small_pane_g1_ParamLimits

0x53ee,	// (0x00023a7f) status_small_pane_g1

0x5422,	// (0x00023ab3) status_small_pane_g2_ParamLimits

0x5422,	// (0x00023ab3) status_small_pane_g2

0x542e,	// (0x00023abf) status_small_pane_g3_ParamLimits

0x542e,	// (0x00023abf) status_small_pane_g3

0x543a,	// (0x00023acb) status_small_pane_g4_ParamLimits

0x543a,	// (0x00023acb) status_small_pane_g4

0x5446,	// (0x00023ad7) status_small_pane_g5_ParamLimits

0x5446,	// (0x00023ad7) status_small_pane_g5

0x5455,	// (0x00023ae6) status_small_pane_g6_ParamLimits

0x5455,	// (0x00023ae6) status_small_pane_g6

0x0007,

0xf78a,	// (0x0002de1b) status_small_pane_g_ParamLimits

0xf78a,	// (0x0002de1b) status_small_pane_g

0x5485,	// (0x00023b16) status_small_pane_t1

0x54a8,	// (0x00023b39) status_small_wait_pane_ParamLimits

0x54a8,	// (0x00023b39) status_small_wait_pane

0x93b6,	// (0x00027a47) aid_levels_signal_ParamLimits

0x93b6,	// (0x00027a47) aid_levels_signal

0x93c8,	// (0x00027a59) signal_pane_g1_ParamLimits

0x93c8,	// (0x00027a59) signal_pane_g1

0x93dd,	// (0x00027a6e) signal_pane_g2_ParamLimits

0x93dd,	// (0x00027a6e) signal_pane_g2

0x0001,

0xf71f,	// (0x0002ddb0) signal_pane_g_ParamLimits

0xf71f,	// (0x0002ddb0) signal_pane_g

0x4e0c,	// (0x0002349d) context_pane_g1

0x8d07,	// (0x00027398) title_pane_g1

0x8d31,	// (0x000273c2) title_pane_t1

0x41f4,	// (0x00022885) title_pane_t2

0x421a,	// (0x000228ab) title_pane_t3

0x0002,

0xf573,	// (0x0002dc04) title_pane_t

0xa03f,	// (0x000286d0) aid_levels_battery_ParamLimits

0xa03f,	// (0x000286d0) aid_levels_battery

0xa053,	// (0x000286e4) battery_pane_g1_ParamLimits

0xa053,	// (0x000286e4) battery_pane_g1

0xa069,	// (0x000286fa) battery_pane_g2_ParamLimits

0xa069,	// (0x000286fa) battery_pane_g2

0x0001,

0xf7be,	// (0x0002de4f) battery_pane_g_ParamLimits

0xf7be,	// (0x0002de4f) battery_pane_g

0xa5a7,	// (0x00028c38) uni_indicator_pane_g1

0xa5bc,	// (0x00028c4d) uni_indicator_pane_g2

0xa5d2,	// (0x00028c63) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0002dfb9) uni_indicator_pane_g

0x5138,	// (0x000237c9) navi_icon_pane_ParamLimits

0x5138,	// (0x000237c9) navi_icon_pane

0x507f,	// (0x00023710) navi_midp_pane

0x5154,	// (0x000237e5) navi_navi_pane

0x515e,	// (0x000237ef) navi_text_pane_ParamLimits

0x515e,	// (0x000237ef) navi_text_pane

0x41d4,	// (0x00022865) status_small_wait_pane_g1

0x44f5,	// (0x00022b86) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0002dfb4) status_small_wait_pane_g

0xa54c,	// (0x00028bdd) navi_navi_icon_text_pane

0xa554,	// (0x00028be5) navi_navi_pane_g1_ParamLimits

0xa554,	// (0x00028be5) navi_navi_pane_g1

0xa566,	// (0x00028bf7) navi_navi_pane_g2_ParamLimits

0xa566,	// (0x00028bf7) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0002df82) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0002df82) navi_navi_pane_g

0x652f,	// (0x00024bc0) navi_navi_tabs_pane

0xa578,	// (0x00028c09) navi_navi_text_pane

0xa54c,	// (0x00028bdd) navi_navi_volume_pane

0xa537,	// (0x00028bc8) navi_text_pane_t1

0xa528,	// (0x00028bb9) navi_icon_pane_g1

0x6470,	// (0x00024b01) navi_navi_text_pane_t1

0xa517,	// (0x00028ba8) navi_navi_volume_pane_g1

0xa51f,	// (0x00028bb0) volume_small_pane

0xa489,	// (0x00028b1a) navi_navi_icon_text_pane_g1

0xa491,	// (0x00028b22) navi_navi_icon_text_pane_t1

0x5154,	// (0x000237e5) navi_tabs_2_long_pane

0x5154,	// (0x000237e5) navi_tabs_2_pane

0x5154,	// (0x000237e5) navi_tabs_3_long_pane

0x5154,	// (0x000237e5) navi_tabs_3_pane

0x5154,	// (0x000237e5) navi_tabs_4_pane

0xa469,	// (0x00028afa) tabs_2_active_pane_ParamLimits

0xa469,	// (0x00028afa) tabs_2_active_pane

0xa479,	// (0x00028b0a) tabs_2_passive_pane_ParamLimits

0xa479,	// (0x00028b0a) tabs_2_passive_pane

0xa437,	// (0x00028ac8) tabs_3_active_pane_ParamLimits

0xa437,	// (0x00028ac8) tabs_3_active_pane

0xa447,	// (0x00028ad8) tabs_3_passive_pane_ParamLimits

0xa447,	// (0x00028ad8) tabs_3_passive_pane

0xa458,	// (0x00028ae9) tabs_3_passive_pane_cp_ParamLimits

0xa458,	// (0x00028ae9) tabs_3_passive_pane_cp

0xa3f3,	// (0x00028a84) tabs_4_active_pane_ParamLimits

0xa3f3,	// (0x00028a84) tabs_4_active_pane

0xa404,	// (0x00028a95) tabs_4_passive_pane_ParamLimits

0xa404,	// (0x00028a95) tabs_4_passive_pane

0xa415,	// (0x00028aa6) tabs_4_passive_pane_cp_ParamLimits

0xa415,	// (0x00028aa6) tabs_4_passive_pane_cp

0xa426,	// (0x00028ab7) tabs_4_passive_pane_cp2_ParamLimits

0xa426,	// (0x00028ab7) tabs_4_passive_pane_cp2

0xa3cf,	// (0x00028a60) tabs_2_long_active_pane_ParamLimits

0xa3cf,	// (0x00028a60) tabs_2_long_active_pane

0xa3e1,	// (0x00028a72) tabs_2_long_passive_pane_ParamLimits

0xa3e1,	// (0x00028a72) tabs_2_long_passive_pane

0xa38a,	// (0x00028a1b) tabs_3_long_active_pane_ParamLimits

0xa38a,	// (0x00028a1b) tabs_3_long_active_pane

0xa3a3,	// (0x00028a34) tabs_3_long_passive_pane_ParamLimits

0xa3a3,	// (0x00028a34) tabs_3_long_passive_pane

0xa3b6,	// (0x00028a47) tabs_3_long_passive_pane_cp_ParamLimits

0xa3b6,	// (0x00028a47) tabs_3_long_passive_pane_cp

0xa330,	// (0x000289c1) volume_small_pane_g1

0xa339,	// (0x000289ca) volume_small_pane_g2

0xa342,	// (0x000289d3) volume_small_pane_g3

0xa34b,	// (0x000289dc) volume_small_pane_g4

0xa354,	// (0x000289e5) volume_small_pane_g5

0xa35d,	// (0x000289ee) volume_small_pane_g6

0xa366,	// (0x000289f7) volume_small_pane_g7

0xa36f,	// (0x00028a00) volume_small_pane_g8

0xa378,	// (0x00028a09) volume_small_pane_g9

0xa381,	// (0x00028a12) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0002df4e) volume_small_pane_g

0x423a,	// (0x000228cb) bg_active_tab_pane_cp2_ParamLimits

0x423a,	// (0x000228cb) bg_active_tab_pane_cp2

0x8d99,	// (0x0002742a) tabs_3_active_pane_g1

0x8da1,	// (0x00027432) tabs_3_active_pane_t1

0x423a,	// (0x000228cb) bg_passive_tab_pane_cp2_ParamLimits

0x423a,	// (0x000228cb) bg_passive_tab_pane_cp2

0x8d99,	// (0x0002742a) tabs_3_passive_pane_g1

0x8da1,	// (0x00027432) tabs_3_passive_pane_t1

0x423a,	// (0x000228cb) bg_active_tab_pane_cp3_ParamLimits

0x423a,	// (0x000228cb) bg_active_tab_pane_cp3

0x8db3,	// (0x00027444) tabs_4_active_pane_g1

0x8dbb,	// (0x0002744c) tabs_4_active_pane_t1

0x423a,	// (0x000228cb) bg_passive_tab_pane_cp3_ParamLimits

0x423a,	// (0x000228cb) bg_passive_tab_pane_cp3

0x8db3,	// (0x00027444) tabs_4_1_passive_pane_g1

0x8dbb,	// (0x0002744c) tabs_4_1_passive_pane_t1

0x49d8,	// (0x00023069) list_highlight_pane_cp2

0xa712,	// (0x00028da3) list_set_pane_ParamLimits

0xa712,	// (0x00028da3) list_set_pane

0xa7b4,	// (0x00028e45) main_pane_set_t1_ParamLimits

0xa7b4,	// (0x00028e45) main_pane_set_t1

0xa7d4,	// (0x00028e65) main_pane_set_t2_ParamLimits

0xa7d4,	// (0x00028e65) main_pane_set_t2

0xa7e8,	// (0x00028e79) main_pane_set_t3_ParamLimits

0xa7e8,	// (0x00028e79) main_pane_set_t3

0xa7fa,	// (0x00028e8b) main_pane_set_t4_ParamLimits

0xa7fa,	// (0x00028e8b) main_pane_set_t4

0x0003,

0xf98d,	// (0x0002e01e) main_pane_set_t_ParamLimits

0xf98d,	// (0x0002e01e) main_pane_set_t

0xa80c,	// (0x00028e9d) setting_code_pane

0xa816,	// (0x00028ea7) setting_slider_graphic_pane

0xa816,	// (0x00028ea7) setting_slider_pane

0xa816,	// (0x00028ea7) setting_text_pane

0xa816,	// (0x00028ea7) setting_volume_pane

0x8dcd,	// (0x0002745e) volume_set_pane

0x423a,	// (0x000228cb) bg_set_opt_pane_cp

0x8dd5,	// (0x00027466) setting_slider_pane_t1

0x8dee,	// (0x0002747f) setting_slider_pane_t2

0x8e07,	// (0x00027498) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002dc0b) setting_slider_pane_t

0x8e1e,	// (0x000274af) slider_set_pane

0x41de,	// (0x0002286f) bg_set_opt_pane_cp2

0x4248,	// (0x000228d9) setting_slider_graphic_pane_g1

0x8e34,	// (0x000274c5) setting_slider_graphic_pane_t1

0x8e43,	// (0x000274d4) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002dc12) setting_slider_graphic_pane_t

0x8e52,	// (0x000274e3) slider_set_pane_cp

0x41de,	// (0x0002286f) input_focus_pane_cp1

0x6978,	// (0x00025009) list_set_text_pane

0x41d4,	// (0x00022865) setting_text_pane_g1

0x41de,	// (0x0002286f) input_focus_pane_cp2

0x41d4,	// (0x00022865) setting_code_pane_g1

0x4251,	// (0x000228e2) setting_code_pane_t1

0xc4fc,	// (0x0002ab8d) set_text_pane_t1_ParamLimits

0xc4fc,	// (0x0002ab8d) set_text_pane_t1

0x48e8,	// (0x00022f79) set_opt_bg_pane_g1

0x48f0,	// (0x00022f81) set_opt_bg_pane_g2

0x6958,	// (0x00024fe9) set_opt_bg_pane_g3

0x4900,	// (0x00022f91) set_opt_bg_pane_g4

0x4908,	// (0x00022f99) set_opt_bg_pane_g5

0x4910,	// (0x00022fa1) set_opt_bg_pane_g6

0x6960,	// (0x00024ff1) set_opt_bg_pane_g7

0x6968,	// (0x00024ff9) set_opt_bg_pane_g8

0x6970,	// (0x00025001) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0002e00b) set_opt_bg_pane_g

0x694b,	// (0x00024fdc) slider_set_pane_g1

0xa687,	// (0x00028d18) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0002dffc) slider_set_pane_g

0xa5fe,	// (0x00028c8f) volume_set_pane_g1

0xa606,	// (0x00028c97) volume_set_pane_g2

0xa60e,	// (0x00028c9f) volume_set_pane_g3

0xa616,	// (0x00028ca7) volume_set_pane_g4

0xa61e,	// (0x00028caf) volume_set_pane_g5

0xa626,	// (0x00028cb7) volume_set_pane_g6

0xa62e,	// (0x00028cbf) volume_set_pane_g7

0xa636,	// (0x00028cc7) volume_set_pane_g8

0xa63e,	// (0x00028ccf) volume_set_pane_g9

0xa646,	// (0x00028cd7) volume_set_pane_g10

0x0009,

0xf943,	// (0x0002dfd4) volume_set_pane_g

0x8e5a,	// (0x000274eb) indicator_pane_ParamLimits

0x8e5a,	// (0x000274eb) indicator_pane

0x8e66,	// (0x000274f7) main_idle_pane_g2_ParamLimits

0x8e66,	// (0x000274f7) main_idle_pane_g2

0x8e8e,	// (0x0002751f) main_pane_idle_g1_ParamLimits

0x8e8e,	// (0x0002751f) main_pane_idle_g1

0x425f,	// (0x000228f0) popup_clock_digital_analogue_window_ParamLimits

0x425f,	// (0x000228f0) popup_clock_digital_analogue_window

0x8e9b,	// (0x0002752c) soft_indicator_pane_ParamLimits

0x8e9b,	// (0x0002752c) soft_indicator_pane

0x8ea7,	// (0x00027538) wallpaper_pane_ParamLimits

0x8ea7,	// (0x00027538) wallpaper_pane

0x41d4,	// (0x00022865) wallpaper_pane_g1

0x8eb3,	// (0x00027544) indicator_pane_g1_ParamLimits

0x8eb3,	// (0x00027544) indicator_pane_g1

0x6abf,	// (0x00025150) navi_navi_icon_text_pane_srt_g1

0x428d,	// (0x0002291e) soft_indicator_pane_t1

0x42a7,	// (0x00022938) aid_ps_area_pane

0x8ebf,	// (0x00027550) aid_ps_clock_pane

0x42b8,	// (0x00022949) aid_ps_indicator_pane

0x42c4,	// (0x00022955) indicator_ps_pane_ParamLimits

0x42c4,	// (0x00022955) indicator_ps_pane

0x42d3,	// (0x00022964) power_save_pane_g1_ParamLimits

0x42d3,	// (0x00022964) power_save_pane_g1

0x42df,	// (0x00022970) power_save_pane_g2_ParamLimits

0x42df,	// (0x00022970) power_save_pane_g2

0x892c,	// (0x00026fbd) aid_navinavi_width_pane

0x42a7,	// (0x00022938) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002dc17) power_save_pane_g_ParamLimits

0xf586,	// (0x0002dc17) power_save_pane_g

0x42ed,	// (0x0002297e) power_save_pane_t1_ParamLimits

0x42ed,	// (0x0002297e) power_save_pane_t1

0x8ebf,	// (0x00027550) aid_ps_clock_pane_ParamLimits

0x42b8,	// (0x00022949) aid_ps_indicator_pane_ParamLimits

0x42ff,	// (0x00022990) power_save_pane_t4_ParamLimits

0x42ff,	// (0x00022990) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002dc1c) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002dc1c) power_save_pane_t

0x4329,	// (0x000229ba) power_save_t3_ParamLimits

0x4329,	// (0x000229ba) power_save_t3

0x4314,	// (0x000229a5) power_save_t2_ParamLimits

0x4314,	// (0x000229a5) power_save_t2

0x433e,	// (0x000229cf) indicator_ps_pane_g1

0x8ecd,	// (0x0002755e) ai_gene_pane_ParamLimits

0x8ecd,	// (0x0002755e) ai_gene_pane

0x8ed9,	// (0x0002756a) ai_links_pane_ParamLimits

0x8ed9,	// (0x0002756a) ai_links_pane

0x8ee5,	// (0x00027576) indicator_pane_cp1_ParamLimits

0x8ee5,	// (0x00027576) indicator_pane_cp1

0x8ef1,	// (0x00027582) main_pane_idle_g1_cp_ParamLimits

0x8ef1,	// (0x00027582) main_pane_idle_g1_cp

0x4347,	// (0x000229d8) popup_ai_links_title_window

0x8efd,	// (0x0002758e) soft_indicator_pane_cp1_ParamLimits

0x8efd,	// (0x0002758e) soft_indicator_pane_cp1

0x679f,	// (0x00024e30) ai_links_pane_g1

0x67a8,	// (0x00024e39) grid_ai_links_pane

0xa59c,	// (0x00028c2d) ai_gene_pane_1

0x678d,	// (0x00024e1e) ai_gene_pane_2

0x6796,	// (0x00024e27) list_highlight_pane_cp4

0xa580,	// (0x00028c11) cell_ai_link_pane_ParamLimits

0xa580,	// (0x00028c11) cell_ai_link_pane

0x6785,	// (0x00024e16) cell_ai_link_pane_g1

0x44f5,	// (0x00022b86) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0002dfaf) cell_ai_link_pane_g

0x41de,	// (0x0002286f) grid_highlight_cp2

0x41de,	// (0x0002286f) bg_popup_sub_pane_cp1

0x435e,	// (0x000229ef) popup_ai_links_title_window_t1

0x66d3,	// (0x00024d64) ai_gene_pane_1_g1_ParamLimits

0x66d3,	// (0x00024d64) ai_gene_pane_1_g1

0x66df,	// (0x00024d70) ai_gene_pane_1_g2_ParamLimits

0x66df,	// (0x00024d70) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0002dfa5) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0002dfa5) ai_gene_pane_1_g

0x66ec,	// (0x00024d7d) ai_gene_pane_1_t1_ParamLimits

0x66ec,	// (0x00024d7d) ai_gene_pane_1_t1

0x6720,	// (0x00024db1) grid_ai_soft_ind_pane

0x66be,	// (0x00024d4f) ai_gene_pane_2_t1_ParamLimits

0x66be,	// (0x00024d4f) ai_gene_pane_2_t1

0x8f09,	// (0x0002759a) main_pane_empty_t1_ParamLimits

0x8f09,	// (0x0002759a) main_pane_empty_t1

0x8f21,	// (0x000275b2) main_pane_empty_t2_ParamLimits

0x8f21,	// (0x000275b2) main_pane_empty_t2

0x8f36,	// (0x000275c7) main_pane_empty_t3_ParamLimits

0x8f36,	// (0x000275c7) main_pane_empty_t3

0x8f48,	// (0x000275d9) main_pane_empty_t4_ParamLimits

0x8f48,	// (0x000275d9) main_pane_empty_t4

0x8f5a,	// (0x000275eb) main_pane_empty_t5_ParamLimits

0x8f5a,	// (0x000275eb) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002dc21) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002dc21) main_pane_empty_t

0x4939,	// (0x00022fca) bg_popup_window_pane_ParamLimits

0x4939,	// (0x00022fca) bg_popup_window_pane

0x647e,	// (0x00024b0f) find_popup_pane_cp2_ParamLimits

0x647e,	// (0x00024b0f) find_popup_pane_cp2

0x648a,	// (0x00024b1b) heading_pane_ParamLimits

0x648a,	// (0x00024b1b) heading_pane

0x41de,	// (0x0002286f) bg_popup_sub_pane

0xa4ab,	// (0x00028b3c) bg_popup_window_pane_g1_ParamLimits

0xa4ab,	// (0x00028b3c) bg_popup_window_pane_g1

0xa4b7,	// (0x00028b48) bg_popup_window_pane_g2_ParamLimits

0xa4b7,	// (0x00028b48) bg_popup_window_pane_g2

0xa4c3,	// (0x00028b54) bg_popup_window_pane_g3_ParamLimits

0xa4c3,	// (0x00028b54) bg_popup_window_pane_g3

0xa4cf,	// (0x00028b60) bg_popup_window_pane_g4_ParamLimits

0xa4cf,	// (0x00028b60) bg_popup_window_pane_g4

0xa4db,	// (0x00028b6c) bg_popup_window_pane_g5_ParamLimits

0xa4db,	// (0x00028b6c) bg_popup_window_pane_g5

0xa4e7,	// (0x00028b78) bg_popup_window_pane_g6_ParamLimits

0xa4e7,	// (0x00028b78) bg_popup_window_pane_g6

0xa4f3,	// (0x00028b84) bg_popup_window_pane_g7_ParamLimits

0xa4f3,	// (0x00028b84) bg_popup_window_pane_g7

0xa4ff,	// (0x00028b90) bg_popup_window_pane_g8_ParamLimits

0xa4ff,	// (0x00028b90) bg_popup_window_pane_g8

0xa50b,	// (0x00028b9c) bg_popup_window_pane_g9_ParamLimits

0xa50b,	// (0x00028b9c) bg_popup_window_pane_g9

0x6464,	// (0x00024af5) bg_popup_window_pane_g10_ParamLimits

0x6464,	// (0x00024af5) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0002df6d) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0002df6d) bg_popup_window_pane_g

0x641b,	// (0x00024aac) bg_popup_heading_pane_ParamLimits

0x641b,	// (0x00024aac) bg_popup_heading_pane

0xa93d,	// (0x00028fce) tabs_4_passive_pane_cp_srt_ParamLimits

0xa93d,	// (0x00028fce) tabs_4_passive_pane_cp_srt

0xa94f,	// (0x00028fe0) tabs_4_passive_pane_srt_ParamLimits

0x642f,	// (0x00024ac0) heading_pane_g2

0xa94f,	// (0x00028fe0) tabs_4_passive_pane_srt

0x49d8,	// (0x00023069) bg_passive_tab_pane_cp3_srt_ParamLimits

0x49d8,	// (0x00023069) bg_passive_tab_pane_cp3_srt

0x6437,	// (0x00024ac8) heading_pane_t1_ParamLimits

0x6437,	// (0x00024ac8) heading_pane_t1

0x644e,	// (0x00024adf) heading_pane_t2_ParamLimits

0x644e,	// (0x00024adf) heading_pane_t2

0x0001,

0xf8d7,	// (0x0002df68) heading_pane_t_ParamLimits

0xf8d7,	// (0x0002df68) heading_pane_t

0x5f4a,	// (0x000245db) bg_popup_heading_pane_g1

0x5fdb,	// (0x0002466c) bg_popup_heading_pane_g2

0x5fe5,	// (0x00024676) bg_popup_heading_pane_g3

0x5fef,	// (0x00024680) bg_popup_heading_pane_g4

0x5ff9,	// (0x0002468a) bg_popup_heading_pane_g5

0x6003,	// (0x00024694) bg_popup_heading_pane_g6

0x600b,	// (0x0002469c) bg_popup_heading_pane_g7

0x6013,	// (0x000246a4) bg_popup_heading_pane_g8

0x601d,	// (0x000246ae) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0002df24) bg_popup_heading_pane_g

0x5810,	// (0x00023ea1) bg_popup_sub_pane_g1

0x5818,	// (0x00023ea9) bg_popup_sub_pane_g2

0x5820,	// (0x00023eb1) bg_popup_sub_pane_g3

0x5828,	// (0x00023eb9) bg_popup_sub_pane_g4

0x5830,	// (0x00023ec1) bg_popup_sub_pane_g5

0x5838,	// (0x00023ec9) bg_popup_sub_pane_g6

0x5840,	// (0x00023ed1) bg_popup_sub_pane_g7

0x5848,	// (0x00023ed9) bg_popup_sub_pane_g8

0x5850,	// (0x00023ee1) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0002defe) bg_popup_sub_pane_g

0x422c,	// (0x000228bd) bg_popup_window_pane_cp5_ParamLimits

0x422c,	// (0x000228bd) bg_popup_window_pane_cp5

0x437b,	// (0x00022a0c) popup_note_window_g1_ParamLimits

0x437b,	// (0x00022a0c) popup_note_window_g1

0x4387,	// (0x00022a18) popup_note_window_t1_ParamLimits

0x4387,	// (0x00022a18) popup_note_window_t1

0x4399,	// (0x00022a2a) popup_note_window_t2_ParamLimits

0x4399,	// (0x00022a2a) popup_note_window_t2

0x43ab,	// (0x00022a3c) popup_note_window_t3_ParamLimits

0x43ab,	// (0x00022a3c) popup_note_window_t3

0x43bd,	// (0x00022a4e) popup_note_window_t4_ParamLimits

0x43bd,	// (0x00022a4e) popup_note_window_t4

0x43e5,	// (0x00022a76) popup_note_window_t5_ParamLimits

0x43e5,	// (0x00022a76) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002dc2c) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002dc2c) popup_note_window_t

0x4409,	// (0x00022a9a) bg_popup_window_pane_cp6_ParamLimits

0x4409,	// (0x00022a9a) bg_popup_window_pane_cp6

0x5ebe,	// (0x0002454f) popup_note_image_window_g1_ParamLimits

0x5ebe,	// (0x0002454f) popup_note_image_window_g1

0x5eca,	// (0x0002455b) popup_note_image_window_g2_ParamLimits

0x5eca,	// (0x0002455b) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0002def2) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0002def2) popup_note_image_window_g

0x5ee3,	// (0x00024574) popup_note_image_window_t1_ParamLimits

0x5ee3,	// (0x00024574) popup_note_image_window_t1

0x5efc,	// (0x0002458d) popup_note_image_window_t2_ParamLimits

0x5efc,	// (0x0002458d) popup_note_image_window_t2

0x5f15,	// (0x000245a6) popup_note_image_window_t3_ParamLimits

0x5f15,	// (0x000245a6) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0002def7) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0002def7) popup_note_image_window_t

0x5d9b,	// (0x0002442c) bg_popup_window_pane_cp7_ParamLimits

0x5d9b,	// (0x0002442c) bg_popup_window_pane_cp7

0x5dcb,	// (0x0002445c) popup_note_wait_window_g1_ParamLimits

0x5dcb,	// (0x0002445c) popup_note_wait_window_g1

0x5dd7,	// (0x00024468) popup_note_wait_window_g2_ParamLimits

0x5dd7,	// (0x00024468) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0002dee0) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0002dee0) popup_note_wait_window_g

0x5def,	// (0x00024480) popup_note_wait_window_t1_ParamLimits

0x5def,	// (0x00024480) popup_note_wait_window_t1

0x5e16,	// (0x000244a7) popup_note_wait_window_t2_ParamLimits

0x5e16,	// (0x000244a7) popup_note_wait_window_t2

0x5e33,	// (0x000244c4) popup_note_wait_window_t3_ParamLimits

0x5e33,	// (0x000244c4) popup_note_wait_window_t3

0x5e46,	// (0x000244d7) popup_note_wait_window_t4_ParamLimits

0x5e46,	// (0x000244d7) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0002dee7) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0002dee7) popup_note_wait_window_t

0x5e6b,	// (0x000244fc) wait_bar_pane_ParamLimits

0x5e6b,	// (0x000244fc) wait_bar_pane

0x41de,	// (0x0002286f) wait_anim_pane

0x41de,	// (0x0002286f) wait_border_pane

0x41d4,	// (0x00022865) wait_anim_pane_g1

0x41d4,	// (0x00022865) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0002ddab) wait_anim_pane_g

0x5d3f,	// (0x000243d0) wait_border_pane_g1

0x5d4a,	// (0x000243db) wait_border_pane_g2

0x5d53,	// (0x000243e4) wait_border_pane_g3

0x0002,

0xf848,	// (0x0002ded9) wait_border_pane_g

0x5baf,	// (0x00024240) bg_popup_window_pane_cp16_ParamLimits

0x5baf,	// (0x00024240) bg_popup_window_pane_cp16

0x5caf,	// (0x00024340) indicator_popup_pane_cp4_ParamLimits

0x5caf,	// (0x00024340) indicator_popup_pane_cp4

0x5cc3,	// (0x00024354) popup_query_data_window_t1_ParamLimits

0x5cc3,	// (0x00024354) popup_query_data_window_t1

0x5cd5,	// (0x00024366) popup_query_data_window_t2_ParamLimits

0x5cd5,	// (0x00024366) popup_query_data_window_t2

0x5cee,	// (0x0002437f) popup_query_data_window_t3_ParamLimits

0x5cee,	// (0x0002437f) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0002ded2) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0002ded2) popup_query_data_window_t

0x5d08,	// (0x00024399) query_popup_data_pane_ParamLimits

0x5d08,	// (0x00024399) query_popup_data_pane

0x5d1c,	// (0x000243ad) query_popup_data_pane_cp1_ParamLimits

0x5d1c,	// (0x000243ad) query_popup_data_pane_cp1

0x5baf,	// (0x00024240) bg_popup_window_pane_cp10_ParamLimits

0x5baf,	// (0x00024240) bg_popup_window_pane_cp10

0x5be1,	// (0x00024272) indicator_popup_pane_ParamLimits

0x5be1,	// (0x00024272) indicator_popup_pane

0x5c03,	// (0x00024294) popup_query_code_window_t1_ParamLimits

0x5c03,	// (0x00024294) popup_query_code_window_t1

0x5c1d,	// (0x000242ae) popup_query_code_window_t2_ParamLimits

0x5c1d,	// (0x000242ae) popup_query_code_window_t2

0x5c66,	// (0x000242f7) popup_query_code_window_t3_ParamLimits

0x5c66,	// (0x000242f7) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0002decb) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0002decb) popup_query_code_window_t

0x5c95,	// (0x00024326) query_popup_pane_ParamLimits

0x5c95,	// (0x00024326) query_popup_pane

0x4409,	// (0x00022a9a) bg_popup_window_pane_cp15_ParamLimits

0x4409,	// (0x00022a9a) bg_popup_window_pane_cp15

0x4427,	// (0x00022ab8) indicator_popup_pane_cp1_ParamLimits

0x4427,	// (0x00022ab8) indicator_popup_pane_cp1

0x443a,	// (0x00022acb) indicator_popup_pane_cp2_ParamLimits

0x443a,	// (0x00022acb) indicator_popup_pane_cp2

0x444d,	// (0x00022ade) popup_query_data_code_window_g1_ParamLimits

0x444d,	// (0x00022ade) popup_query_data_code_window_g1

0x4460,	// (0x00022af1) popup_query_data_code_window_t1_ParamLimits

0x4460,	// (0x00022af1) popup_query_data_code_window_t1

0x4472,	// (0x00022b03) popup_query_data_code_window_t2_ParamLimits

0x4472,	// (0x00022b03) popup_query_data_code_window_t2

0x4484,	// (0x00022b15) popup_query_data_code_window_t3_ParamLimits

0x4484,	// (0x00022b15) popup_query_data_code_window_t3

0x449a,	// (0x00022b2b) popup_query_data_code_window_t4_ParamLimits

0x449a,	// (0x00022b2b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002dc37) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002dc37) popup_query_data_code_window_t

0xa0d4,	// (0x00028765) list_single_midp_graphic_pane_g3

0x44b2,	// (0x00022b43) query_popup_data_pane_cp2_ParamLimits

0x44c5,	// (0x00022b56) query_popup_pane_cp2_ParamLimits

0x44c5,	// (0x00022b56) query_popup_pane_cp2

0x41de,	// (0x0002286f) bg_popup_window_pane_cp11

0x5ba7,	// (0x00024238) heading_pane_cp5

0x4553,	// (0x00022be4) listscroll_popup_info_pane

0x41de,	// (0x0002286f) input_focus_pane_cp3

0x44d8,	// (0x00022b69) query_popup_pane_t1

0x44e6,	// (0x00022b77) list_popup_info_pane_ParamLimits

0x44e6,	// (0x00022b77) list_popup_info_pane

0x44f5,	// (0x00022b86) listscroll_popup_info_pane_g1

0x44fd,	// (0x00022b8e) scroll_pane_cp7

0x4507,	// (0x00022b98) popup_info_list_pane_t1_ParamLimits

0x4507,	// (0x00022b98) popup_info_list_pane_t1

0x4521,	// (0x00022bb2) popup_info_list_pane_t2_ParamLimits

0x4521,	// (0x00022bb2) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002dc40) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002dc40) popup_info_list_pane_t

0x41de,	// (0x0002286f) bg_popup_window_pane_cp12

0x6ad9,	// (0x0002516a) find_popup_pane

0x423a,	// (0x000228cb) bg_popup_window_pane_cp3

0x453b,	// (0x00022bcc) heading_pane_cp3

0x4547,	// (0x00022bd8) listscroll_popup_graphic_pane

0x41de,	// (0x0002286f) bg_popup_window_pane_cp4

0x8fbe,	// (0x0002764f) heading_pane_cp4

0x4553,	// (0x00022be4) listscroll_popup_colour_pane

0x455b,	// (0x00022bec) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x455b,	// (0x00022bec) cell_large_graphic_colour_none_popup_pane

0x8fc8,	// (0x00027659) grid_large_graphic_colour_popup_pane_ParamLimits

0x8fc8,	// (0x00027659) grid_large_graphic_colour_popup_pane

0x456f,	// (0x00022c00) listscroll_popup_colour_pane_g1_ParamLimits

0x456f,	// (0x00022c00) listscroll_popup_colour_pane_g1

0x4586,	// (0x00022c17) listscroll_popup_colour_pane_g2_ParamLimits

0x4586,	// (0x00022c17) listscroll_popup_colour_pane_g2

0x459d,	// (0x00022c2e) listscroll_popup_colour_pane_g3_ParamLimits

0x459d,	// (0x00022c2e) listscroll_popup_colour_pane_g3

0x8fec,	// (0x0002767d) listscroll_popup_colour_pane_g4_ParamLimits

0x8fec,	// (0x0002767d) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002dc45) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002dc45) listscroll_popup_colour_pane_g

0x45ad,	// (0x00022c3e) scroll_pane_cp6_ParamLimits

0x45ad,	// (0x00022c3e) scroll_pane_cp6

0x8ffb,	// (0x0002768c) cell_large_graphic_colour_popup_pane_ParamLimits

0x8ffb,	// (0x0002768c) cell_large_graphic_colour_popup_pane

0x45bf,	// (0x00022c50) cell_large_graphic_colour_none_popup_pane_t1

0x41de,	// (0x0002286f) grid_highlight_pane_cp5

0x45ce,	// (0x00022c5f) cell_large_graphic_colour_popup_pane_g1

0x45d6,	// (0x00022c67) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002dc4e) cell_large_graphic_colour_popup_pane_g

0x45de,	// (0x00022c6f) cell_large_graphic_colour_popup_pane_g2_copy1

0x45e7,	// (0x00022c78) grid_highlight_pane_cp4

0x45ef,	// (0x00022c80) bg_popup_window_pane_cp8_ParamLimits

0x45ef,	// (0x00022c80) bg_popup_window_pane_cp8

0x460a,	// (0x00022c9b) popup_snote_single_text_window_g1_ParamLimits

0x460a,	// (0x00022c9b) popup_snote_single_text_window_g1

0x461c,	// (0x00022cad) popup_snote_single_text_window_t1_ParamLimits

0x461c,	// (0x00022cad) popup_snote_single_text_window_t1

0x462f,	// (0x00022cc0) popup_snote_single_text_window_t2_ParamLimits

0x462f,	// (0x00022cc0) popup_snote_single_text_window_t2

0x4642,	// (0x00022cd3) popup_snote_single_text_window_t3_ParamLimits

0x4642,	// (0x00022cd3) popup_snote_single_text_window_t3

0x467b,	// (0x00022d0c) popup_snote_single_text_window_t4_ParamLimits

0x467b,	// (0x00022d0c) popup_snote_single_text_window_t4

0x46af,	// (0x00022d40) popup_snote_single_text_window_t5_ParamLimits

0x46af,	// (0x00022d40) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002dc53) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002dc53) popup_snote_single_text_window_t

0x46de,	// (0x00022d6f) bg_popup_window_pane_cp9_ParamLimits

0x46de,	// (0x00022d6f) bg_popup_window_pane_cp9

0x460a,	// (0x00022c9b) popup_snote_single_graphic_window_g1_ParamLimits

0x460a,	// (0x00022c9b) popup_snote_single_graphic_window_g1

0x46ec,	// (0x00022d7d) popup_snote_single_graphic_window_g2_ParamLimits

0x46ec,	// (0x00022d7d) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002dc5e) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002dc5e) popup_snote_single_graphic_window_g

0x46f8,	// (0x00022d89) popup_snote_single_graphic_window_t1_ParamLimits

0x46f8,	// (0x00022d89) popup_snote_single_graphic_window_t1

0x470b,	// (0x00022d9c) popup_snote_single_graphic_window_t2_ParamLimits

0x470b,	// (0x00022d9c) popup_snote_single_graphic_window_t2

0x471e,	// (0x00022daf) popup_snote_single_graphic_window_t3_ParamLimits

0x471e,	// (0x00022daf) popup_snote_single_graphic_window_t3

0x4757,	// (0x00022de8) popup_snote_single_graphic_window_t4_ParamLimits

0x4757,	// (0x00022de8) popup_snote_single_graphic_window_t4

0x478b,	// (0x00022e1c) popup_snote_single_graphic_window_t5_ParamLimits

0x478b,	// (0x00022e1c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002dc63) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002dc63) popup_snote_single_graphic_window_t

0x6a5d,	// (0x000250ee) grid_graphic_popup_pane_ParamLimits

0x6a5d,	// (0x000250ee) grid_graphic_popup_pane

0x6a89,	// (0x0002511a) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a89,	// (0x0002511a) listscroll_popup_graphic_pane_g1

0xa905,	// (0x00028f96) listscroll_popup_graphic_pane_g2_ParamLimits

0xa905,	// (0x00028f96) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0002e048) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0002e048) listscroll_popup_graphic_pane_g

0x638b,	// (0x00024a1c) scroll_pane_cp5

0xa8c6,	// (0x00028f57) cell_graphic_popup_pane_ParamLimits

0xa8c6,	// (0x00028f57) cell_graphic_popup_pane

0x6a28,	// (0x000250b9) cell_graphic_popup_pane_g1

0x6a30,	// (0x000250c1) cell_graphic_popup_pane_g2

0x45de,	// (0x00022c6f) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0002e041) cell_graphic_popup_pane_g

0x6a39,	// (0x000250ca) cell_graphic_popup_pane_t2

0x45e7,	// (0x00022c78) grid_highlight_pane_cp3

0x47cc,	// (0x00022e5d) list_gen_pane_ParamLimits

0x47cc,	// (0x00022e5d) list_gen_pane

0x47f4,	// (0x00022e85) scroll_pane

0xa879,	// (0x00028f0a) bg_list_pane_g1_ParamLimits

0xa879,	// (0x00028f0a) bg_list_pane_g1

0x69d7,	// (0x00025068) bg_list_pane_g2_ParamLimits

0x69d7,	// (0x00025068) bg_list_pane_g2

0x69ea,	// (0x0002507b) bg_list_pane_g3_ParamLimits

0x69ea,	// (0x0002507b) bg_list_pane_g3

0x69fc,	// (0x0002508d) bg_list_pane_g4_ParamLimits

0x69fc,	// (0x0002508d) bg_list_pane_g4

0xa894,	// (0x00028f25) bg_list_pane_g5_ParamLimits

0xa894,	// (0x00028f25) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0002e036) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0002e036) bg_list_pane_g

0xe6ab,	// (0x0002cd3c) list_double2_graphic_large_graphic_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double2_graphic_large_graphic_pane

0xe6ab,	// (0x0002cd3c) list_double2_graphic_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double2_graphic_pane

0xe6ab,	// (0x0002cd3c) list_double2_large_graphic_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double2_large_graphic_pane

0xe6ab,	// (0x0002cd3c) list_double2_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double2_pane

0xe6ab,	// (0x0002cd3c) list_double_graphic_heading_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_graphic_heading_pane

0xe6ab,	// (0x0002cd3c) list_double_graphic_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_graphic_pane

0xe6ab,	// (0x0002cd3c) list_double_heading_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_heading_pane

0xe6ab,	// (0x0002cd3c) list_double_large_graphic_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_large_graphic_pane

0xe6ab,	// (0x0002cd3c) list_double_number_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_number_pane

0xe6ab,	// (0x0002cd3c) list_double_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_pane

0xe6ab,	// (0x0002cd3c) list_double_time_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_double_time_pane

0xe6ab,	// (0x0002cd3c) list_setting_number_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_setting_number_pane

0xe6ab,	// (0x0002cd3c) list_setting_pane_ParamLimits

0xe6ab,	// (0x0002cd3c) list_setting_pane

0xe707,	// (0x0002cd98) list_single_2graphic_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_2graphic_pane

0xe707,	// (0x0002cd98) list_single_graphic_heading_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_graphic_heading_pane

0xe707,	// (0x0002cd98) list_single_graphic_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_graphic_pane

0xe707,	// (0x0002cd98) list_single_heading_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_heading_pane

0xe775,	// (0x0002ce06) list_single_large_graphic_pane_ParamLimits

0xe775,	// (0x0002ce06) list_single_large_graphic_pane

0xe707,	// (0x0002cd98) list_single_number_heading_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_number_heading_pane

0xe707,	// (0x0002cd98) list_single_number_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_number_pane

0xe707,	// (0x0002cd98) list_single_pane_ParamLimits

0xe707,	// (0x0002cd98) list_single_pane

0x41de,	// (0x0002286f) list_highlight_pane_cp1

0xc522,	// (0x0002abb3) list_single_pane_g1_ParamLimits

0xc522,	// (0x0002abb3) list_single_pane_g1

0xc52e,	// (0x0002abbf) list_single_pane_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_single_pane_g

0xe695,	// (0x0002cd26) list_single_pane_t1_ParamLimits

0xe695,	// (0x0002cd26) list_single_pane_t1

0xc522,	// (0x0002abb3) list_single_number_pane_g1_ParamLimits

0xc522,	// (0x0002abb3) list_single_number_pane_g1

0xc52e,	// (0x0002abbf) list_single_number_pane_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_single_number_pane_g

0xe5c9,	// (0x0002cc5a) list_single_number_pane_t1_ParamLimits

0xe5c9,	// (0x0002cc5a) list_single_number_pane_t1

0xe655,	// (0x0002cce6) list_single_number_pane_t2_ParamLimits

0xe655,	// (0x0002cce6) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0002dff7) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0002dff7) list_single_number_pane_t

0xc516,	// (0x0002aba7) list_single_graphic_pane_g1_ParamLimits

0xc516,	// (0x0002aba7) list_single_graphic_pane_g1

0xc522,	// (0x0002abb3) list_single_graphic_pane_g2_ParamLimits

0xc522,	// (0x0002abb3) list_single_graphic_pane_g2

0xc52e,	// (0x0002abbf) list_single_graphic_pane_g3_ParamLimits

0xc52e,	// (0x0002abbf) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002dc6e) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002dc6e) list_single_graphic_pane_g

0xc53a,	// (0x0002abcb) list_single_graphic_pane_t1_ParamLimits

0xc53a,	// (0x0002abcb) list_single_graphic_pane_t1

0xc522,	// (0x0002abb3) list_single_heading_pane_g1_ParamLimits

0xc522,	// (0x0002abb3) list_single_heading_pane_g1

0xc52e,	// (0x0002abbf) list_single_heading_pane_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_single_heading_pane_g

0xc550,	// (0x0002abe1) list_single_heading_pane_t1_ParamLimits

0xc550,	// (0x0002abe1) list_single_heading_pane_t1

0xc566,	// (0x0002abf7) list_single_heading_pane_t2_ParamLimits

0xc566,	// (0x0002abf7) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002dc7a) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002dc7a) list_single_heading_pane_t

0xc522,	// (0x0002abb3) list_single_number_heading_pane_g1_ParamLimits

0xc522,	// (0x0002abb3) list_single_number_heading_pane_g1

0xc52e,	// (0x0002abbf) list_single_number_heading_pane_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_single_number_heading_pane_g

0xc550,	// (0x0002abe1) list_single_number_heading_pane_t1_ParamLimits

0xc550,	// (0x0002abe1) list_single_number_heading_pane_t1

0xc578,	// (0x0002ac09) list_single_number_heading_pane_t2_ParamLimits

0xc578,	// (0x0002ac09) list_single_number_heading_pane_t2

0xc58a,	// (0x0002ac1b) list_single_number_heading_pane_t3_ParamLimits

0xc58a,	// (0x0002ac1b) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002dc7f) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002dc7f) list_single_number_heading_pane_t

0xc59c,	// (0x0002ac2d) list_single_graphic_heading_pane_g1_ParamLimits

0xc59c,	// (0x0002ac2d) list_single_graphic_heading_pane_g1

0xc5a8,	// (0x0002ac39) list_single_graphic_heading_pane_g4_ParamLimits

0xc5a8,	// (0x0002ac39) list_single_graphic_heading_pane_g4

0xc52e,	// (0x0002abbf) list_single_graphic_heading_pane_g5_ParamLimits

0xc52e,	// (0x0002abbf) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002dc86) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002dc86) list_single_graphic_heading_pane_g

0xc550,	// (0x0002abe1) list_single_graphic_heading_pane_t1_ParamLimits

0xc550,	// (0x0002abe1) list_single_graphic_heading_pane_t1

0xc5b9,	// (0x0002ac4a) list_single_graphic_heading_pane_t2_ParamLimits

0xc5b9,	// (0x0002ac4a) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002dc8d) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002dc8d) list_single_graphic_heading_pane_t

0xc5cb,	// (0x0002ac5c) list_single_large_graphic_pane_g1_ParamLimits

0xc5cb,	// (0x0002ac5c) list_single_large_graphic_pane_g1

0xc5d7,	// (0x0002ac68) list_single_large_graphic_pane_g2_ParamLimits

0xc5d7,	// (0x0002ac68) list_single_large_graphic_pane_g2

0xc5e3,	// (0x0002ac74) list_single_large_graphic_pane_g3_ParamLimits

0xc5e3,	// (0x0002ac74) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002dc92) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002dc92) list_single_large_graphic_pane_g

0x5d4a,	// (0x000243db) wait_border_pane_g2_copy1

0xc5ef,	// (0x0002ac80) list_single_large_graphic_pane_g4_cp2

0xc5f7,	// (0x0002ac88) list_single_large_graphic_pane_t1_ParamLimits

0xc5f7,	// (0x0002ac88) list_single_large_graphic_pane_t1

0xc60d,	// (0x0002ac9e) list_double_pane_g1_ParamLimits

0xc60d,	// (0x0002ac9e) list_double_pane_g1

0xc619,	// (0x0002acaa) list_double_pane_g2_ParamLimits

0xc619,	// (0x0002acaa) list_double_pane_g2

0x0001,

0xf608,	// (0x0002dc99) list_double_pane_g_ParamLimits

0xf608,	// (0x0002dc99) list_double_pane_g

0xc625,	// (0x0002acb6) list_double_pane_t1_ParamLimits

0xc625,	// (0x0002acb6) list_double_pane_t1

0xc63b,	// (0x0002accc) list_double_pane_t2_ParamLimits

0xc63b,	// (0x0002accc) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002dc9e) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002dc9e) list_double_pane_t

0xc64d,	// (0x0002acde) list_double2_pane_g1_ParamLimits

0xc64d,	// (0x0002acde) list_double2_pane_g1

0xc619,	// (0x0002acaa) list_double2_pane_g2_ParamLimits

0xc619,	// (0x0002acaa) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002dca3) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002dca3) list_double2_pane_g

0xc625,	// (0x0002acb6) list_double2_pane_t1_ParamLimits

0xc625,	// (0x0002acb6) list_double2_pane_t1

0xc65e,	// (0x0002acef) list_double2_pane_t2_ParamLimits

0xc65e,	// (0x0002acef) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002dca8) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002dca8) list_double2_pane_t

0xc60d,	// (0x0002ac9e) list_double_number_pane_g1_ParamLimits

0xc60d,	// (0x0002ac9e) list_double_number_pane_g1

0xc619,	// (0x0002acaa) list_double_number_pane_g2_ParamLimits

0xc619,	// (0x0002acaa) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002dc99) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002dc99) list_double_number_pane_g

0xc670,	// (0x0002ad01) list_double_number_pane_t1_ParamLimits

0xc670,	// (0x0002ad01) list_double_number_pane_t1

0xc682,	// (0x0002ad13) list_double_number_pane_t2_ParamLimits

0xc682,	// (0x0002ad13) list_double_number_pane_t2

0xc698,	// (0x0002ad29) list_double_number_pane_t3_ParamLimits

0xc698,	// (0x0002ad29) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002dcad) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002dcad) list_double_number_pane_t

0xc6aa,	// (0x0002ad3b) list_double_graphic_pane_g1_ParamLimits

0xc6aa,	// (0x0002ad3b) list_double_graphic_pane_g1

0xc6b6,	// (0x0002ad47) list_double_graphic_pane_g2_ParamLimits

0xc6b6,	// (0x0002ad47) list_double_graphic_pane_g2

0xc6c5,	// (0x0002ad56) list_double_graphic_pane_g3_ParamLimits

0xc6c5,	// (0x0002ad56) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002dcb4) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002dcb4) list_double_graphic_pane_g

0xc6dd,	// (0x0002ad6e) list_double_graphic_pane_t1_ParamLimits

0xc6dd,	// (0x0002ad6e) list_double_graphic_pane_t1

0xc6f3,	// (0x0002ad84) list_double_graphic_pane_t2_ParamLimits

0xc6f3,	// (0x0002ad84) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002dcbd) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002dcbd) list_double_graphic_pane_t

0xc6aa,	// (0x0002ad3b) list_double2_graphic_pane_g1_ParamLimits

0xc6aa,	// (0x0002ad3b) list_double2_graphic_pane_g1

0xc705,	// (0x0002ad96) list_double2_graphic_pane_g2_ParamLimits

0xc705,	// (0x0002ad96) list_double2_graphic_pane_g2

0xc711,	// (0x0002ada2) list_double2_graphic_pane_g3_ParamLimits

0xc711,	// (0x0002ada2) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002dcc2) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002dcc2) list_double2_graphic_pane_g

0xc682,	// (0x0002ad13) list_double2_graphic_pane_t1_ParamLimits

0xc682,	// (0x0002ad13) list_double2_graphic_pane_t1

0xc71d,	// (0x0002adae) list_double2_graphic_pane_t2_ParamLimits

0xc71d,	// (0x0002adae) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002dcc9) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002dcc9) list_double2_graphic_pane_t

0xc72f,	// (0x0002adc0) list_double_large_graphic_pane_g1_ParamLimits

0xc72f,	// (0x0002adc0) list_double_large_graphic_pane_g1

0xc64d,	// (0x0002acde) list_double_large_graphic_pane_g2_ParamLimits

0xc64d,	// (0x0002acde) list_double_large_graphic_pane_g2

0xc619,	// (0x0002acaa) list_double_large_graphic_pane_g3_ParamLimits

0xc619,	// (0x0002acaa) list_double_large_graphic_pane_g3

0xc75a,	// (0x0002adeb) list_double_large_graphic_pane_g4_ParamLimits

0xc75a,	// (0x0002adeb) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002dcce) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002dcce) list_double_large_graphic_pane_g

0xc782,	// (0x0002ae13) list_double_large_graphic_pane_t1_ParamLimits

0xc782,	// (0x0002ae13) list_double_large_graphic_pane_t1

0xc79b,	// (0x0002ae2c) list_double_large_graphic_pane_t2_ParamLimits

0xc79b,	// (0x0002ae2c) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002dcd9) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002dcd9) list_double_large_graphic_pane_t

0xc7ad,	// (0x0002ae3e) list_double2_large_graphic_pane_g1_ParamLimits

0xc7ad,	// (0x0002ae3e) list_double2_large_graphic_pane_g1

0xc64d,	// (0x0002acde) list_double2_large_graphic_pane_g2_ParamLimits

0xc64d,	// (0x0002acde) list_double2_large_graphic_pane_g2

0xc619,	// (0x0002acaa) list_double2_large_graphic_pane_g3_ParamLimits

0xc619,	// (0x0002acaa) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002dcde) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002dcde) list_double2_large_graphic_pane_g

0xc7b9,	// (0x0002ae4a) list_double2_large_graphic_pane_t1_ParamLimits

0xc7b9,	// (0x0002ae4a) list_double2_large_graphic_pane_t1

0xc7cf,	// (0x0002ae60) list_double2_large_graphic_pane_t2_ParamLimits

0xc7cf,	// (0x0002ae60) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002dce5) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002dce5) list_double2_large_graphic_pane_t

0xc7e1,	// (0x0002ae72) list_double_heading_pane_g1_ParamLimits

0xc7e1,	// (0x0002ae72) list_double_heading_pane_g1

0xc7f2,	// (0x0002ae83) list_double_heading_pane_g2_ParamLimits

0xc7f2,	// (0x0002ae83) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002dcea) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002dcea) list_double_heading_pane_g

0xc7fe,	// (0x0002ae8f) list_double_heading_pane_t1_ParamLimits

0xc7fe,	// (0x0002ae8f) list_double_heading_pane_t1

0xc65e,	// (0x0002acef) list_double_heading_pane_t2_ParamLimits

0xc65e,	// (0x0002acef) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002dcef) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002dcef) list_double_heading_pane_t

0xc6aa,	// (0x0002ad3b) list_double_graphic_heading_pane_g1_ParamLimits

0xc6aa,	// (0x0002ad3b) list_double_graphic_heading_pane_g1

0xc7e1,	// (0x0002ae72) list_double_graphic_heading_pane_g2_ParamLimits

0xc7e1,	// (0x0002ae72) list_double_graphic_heading_pane_g2

0xc7f2,	// (0x0002ae83) list_double_graphic_heading_pane_g3_ParamLimits

0xc7f2,	// (0x0002ae83) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002dcf4) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002dcf4) list_double_graphic_heading_pane_g

0xc814,	// (0x0002aea5) list_double_graphic_heading_pane_t1_ParamLimits

0xc814,	// (0x0002aea5) list_double_graphic_heading_pane_t1

0xc71d,	// (0x0002adae) list_double_graphic_heading_pane_t2_ParamLimits

0xc71d,	// (0x0002adae) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002dcfb) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002dcfb) list_double_graphic_heading_pane_t

0xc64d,	// (0x0002acde) list_double_time_pane_g1_ParamLimits

0xc64d,	// (0x0002acde) list_double_time_pane_g1

0xc619,	// (0x0002acaa) list_double_time_pane_g2_ParamLimits

0xc619,	// (0x0002acaa) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0002dca3) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0002dca3) list_double_time_pane_g

0xc7b9,	// (0x0002ae4a) list_double_time_pane_t1_ParamLimits

0xc7b9,	// (0x0002ae4a) list_double_time_pane_t1

0xc82a,	// (0x0002aebb) list_double_time_pane_t2_ParamLimits

0xc82a,	// (0x0002aebb) list_double_time_pane_t2

0xc83c,	// (0x0002aecd) list_double_time_pane_t3_ParamLimits

0xc83c,	// (0x0002aecd) list_double_time_pane_t3

0xc84e,	// (0x0002aedf) list_double_time_pane_t4_ParamLimits

0xc84e,	// (0x0002aedf) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0002dd00) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0002dd00) list_double_time_pane_t

0xc860,	// (0x0002aef1) list_setting_pane_g1_ParamLimits

0xc860,	// (0x0002aef1) list_setting_pane_g1

0xc86c,	// (0x0002aefd) list_setting_pane_g2_ParamLimits

0xc86c,	// (0x0002aefd) list_setting_pane_g2

0x0001,

0xf678,	// (0x0002dd09) list_setting_pane_g_ParamLimits

0xf678,	// (0x0002dd09) list_setting_pane_g

0xc878,	// (0x0002af09) list_setting_pane_t1_ParamLimits

0xc878,	// (0x0002af09) list_setting_pane_t1

0xc88f,	// (0x0002af20) list_setting_pane_t2_ParamLimits

0xc88f,	// (0x0002af20) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0002dd0e) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0002dd0e) list_setting_pane_t

0xc8cc,	// (0x0002af5d) set_value_pane_cp_ParamLimits

0xc8cc,	// (0x0002af5d) set_value_pane_cp

0xc8d8,	// (0x0002af69) list_setting_number_pane_g1_ParamLimits

0xc8d8,	// (0x0002af69) list_setting_number_pane_g1

0xc8e4,	// (0x0002af75) list_setting_number_pane_g2_ParamLimits

0xc8e4,	// (0x0002af75) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0002dd15) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0002dd15) list_setting_number_pane_g

0xc8f0,	// (0x0002af81) list_setting_number_pane_t1_ParamLimits

0xc8f0,	// (0x0002af81) list_setting_number_pane_t1

0xc904,	// (0x0002af95) list_setting_number_pane_t2_ParamLimits

0xc904,	// (0x0002af95) list_setting_number_pane_t2

0xc91b,	// (0x0002afac) list_setting_number_pane_t3_ParamLimits

0xc91b,	// (0x0002afac) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0002dd1a) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0002dd1a) list_setting_number_pane_t

0xc8cc,	// (0x0002af5d) set_value_pane_ParamLimits

0xc8cc,	// (0x0002af5d) set_value_pane

0x4828,	// (0x00022eb9) bg_set_opt_pane_ParamLimits

0x4828,	// (0x00022eb9) bg_set_opt_pane

0xc95e,	// (0x0002afef) set_value_pane_t1

0x4849,	// (0x00022eda) slider_set_pane_cp3

0x4852,	// (0x00022ee3) volume_small_pane_cp

0x485b,	// (0x00022eec) list_form_gen_pane

0x4864,	// (0x00022ef5) scroll_pane_cp8

0xc974,	// (0x0002b005) form_field_data_pane_ParamLimits

0xc974,	// (0x0002b005) form_field_data_pane

0xc994,	// (0x0002b025) form_field_data_wide_pane_ParamLimits

0xc994,	// (0x0002b025) form_field_data_wide_pane

0xc9b5,	// (0x0002b046) form_field_popup_pane_ParamLimits

0xc9b5,	// (0x0002b046) form_field_popup_pane

0xc9d3,	// (0x0002b064) form_field_popup_wide_pane_ParamLimits

0xc9d3,	// (0x0002b064) form_field_popup_wide_pane

0xc9ee,	// (0x0002b07f) form_field_slider_pane_ParamLimits

0xc9ee,	// (0x0002b07f) form_field_slider_pane

0xca01,	// (0x0002b092) form_field_slider_wide_pane_ParamLimits

0xca01,	// (0x0002b092) form_field_slider_wide_pane

0x4875,	// (0x00022f06) data_form_pane

0xca1e,	// (0x0002b0af) form_field_data_pane_t1

0x4881,	// (0x00022f12) input_focus_pane

0x488f,	// (0x00022f20) data_form_wide_pane

0xe3a0,	// (0x0002ca31) form_field_data_wide_pane_t1

0x45fc,	// (0x00022c8d) input_focus_pane_cp6

0xe3c2,	// (0x0002ca53) form_field_popup_pane_t1

0x4881,	// (0x00022f12) input_focus_pane_cp7

0x48bb,	// (0x00022f4c) list_form_pane

0xe3e4,	// (0x0002ca75) form_field_popup_wide_pane_t1

0x4881,	// (0x00022f12) input_focus_pane_cp8

0x48c7,	// (0x00022f58) list_form_wide_pane

0xe401,	// (0x0002ca92) form_field_slider_pane_t1_ParamLimits

0xe401,	// (0x0002ca92) form_field_slider_pane_t1

0xe415,	// (0x0002caa6) form_field_slider_pane_t2_ParamLimits

0xe415,	// (0x0002caa6) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0002dd2a) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0002dd2a) form_field_slider_pane_t

0x422c,	// (0x000228bd) input_focus_pane_cp9_ParamLimits

0x422c,	// (0x000228bd) input_focus_pane_cp9

0xe427,	// (0x0002cab8) slider_cont_pane_ParamLimits

0xe427,	// (0x0002cab8) slider_cont_pane

0x48d6,	// (0x00022f67) form_field_slider_wide_pane_t1_ParamLimits

0x48d6,	// (0x00022f67) form_field_slider_wide_pane_t1

0xe43b,	// (0x0002cacc) form_field_slider_wide_pane_t2_ParamLimits

0xe43b,	// (0x0002cacc) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0002dd2f) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0002dd2f) form_field_slider_wide_pane_t

0x422c,	// (0x000228bd) input_focus_pane_cp10_ParamLimits

0x422c,	// (0x000228bd) input_focus_pane_cp10

0xe44d,	// (0x0002cade) slider_cont_pane_cp1_ParamLimits

0xe44d,	// (0x0002cade) slider_cont_pane_cp1

0xe461,	// (0x0002caf2) slider_form_pane_cp

0x48e8,	// (0x00022f79) input_focus_pane_g1

0x48f0,	// (0x00022f81) input_focus_pane_g2

0x48f8,	// (0x00022f89) input_focus_pane_g3

0x4900,	// (0x00022f91) input_focus_pane_g4

0x4908,	// (0x00022f99) input_focus_pane_g5

0x4910,	// (0x00022fa1) input_focus_pane_g6

0x4918,	// (0x00022fa9) input_focus_pane_g7

0x4920,	// (0x00022fb1) input_focus_pane_g8

0x4928,	// (0x00022fb9) input_focus_pane_g9

0x41d4,	// (0x00022865) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0002dd34) input_focus_pane_g

0x5d53,	// (0x000243e4) wait_border_pane_g3_copy1

0xe469,	// (0x0002cafa) data_form_pane_t1

0x41d4,	// (0x00022865) wait_anim_pane_g1_copy1

0xe667,	// (0x0002ccf8) data_form_wide_pane_t1

0xe484,	// (0x0002cb15) list_form_graphic_pane_cp_ParamLimits

0xe484,	// (0x0002cb15) list_form_graphic_pane_cp

0x6980,	// (0x00025011) slider_form_pane_g1

0x6989,	// (0x0002501a) slider_form_pane_g2

0x0006,

0xf996,	// (0x0002e027) slider_form_pane_g

0xe49b,	// (0x0002cb2c) list_form_graphic_pane_ParamLimits

0xe49b,	// (0x0002cb2c) list_form_graphic_pane

0xe4b5,	// (0x0002cb46) list_form_graphic_pane_g1

0xe4bd,	// (0x0002cb4e) list_form_graphic_pane_t1_ParamLimits

0xe4bd,	// (0x0002cb4e) list_form_graphic_pane_t1

0x423a,	// (0x000228cb) list_highlight_pane_cp5_ParamLimits

0x423a,	// (0x000228cb) list_highlight_pane_cp5

0xe4d2,	// (0x0002cb63) find_pane_g1

0x4930,	// (0x00022fc1) input_find_pane

0xe4db,	// (0x0002cb6c) input_find_pane_g1_ParamLimits

0xe4db,	// (0x0002cb6c) input_find_pane_g1

0xe4e7,	// (0x0002cb78) input_find_pane_t1_ParamLimits

0xe4e7,	// (0x0002cb78) input_find_pane_t1

0xe4fc,	// (0x0002cb8d) input_find_pane_t2_ParamLimits

0xe4fc,	// (0x0002cb8d) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0002dd49) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0002dd49) input_find_pane_t

0x4939,	// (0x00022fca) input_focus_pane_cp5_ParamLimits

0x4939,	// (0x00022fca) input_focus_pane_cp5

0x9030,	// (0x000276c1) bg_popup_window_pane_cp2_ParamLimits

0x9030,	// (0x000276c1) bg_popup_window_pane_cp2

0x903d,	// (0x000276ce) listscroll_menu_pane_ParamLimits

0x903d,	// (0x000276ce) listscroll_menu_pane

0x9049,	// (0x000276da) popup_submenu_window_ParamLimits

0x9049,	// (0x000276da) popup_submenu_window

0x4947,	// (0x00022fd8) find_popup_pane_g1

0x494f,	// (0x00022fe0) input_popup_find_pane_cp

0x4939,	// (0x00022fca) input_focus_pane_cp4_ParamLimits

0x4939,	// (0x00022fca) input_focus_pane_cp4

0x4959,	// (0x00022fea) input_popup_find_pane_t1_ParamLimits

0x4959,	// (0x00022fea) input_popup_find_pane_t1

0x41de,	// (0x0002286f) bg_popup_sub_pane_cp

0x4987,	// (0x00023018) listscroll_popup_sub_pane

0x498f,	// (0x00023020) list_submenu_pane_ParamLimits

0x498f,	// (0x00023020) list_submenu_pane

0x49a0,	// (0x00023031) scroll_pane_cp4

0x49a8,	// (0x00023039) list_single_popup_submenu_pane_ParamLimits

0x49a8,	// (0x00023039) list_single_popup_submenu_pane

0x49bb,	// (0x0002304c) list_single_popup_submenu_pane_g1

0x49c3,	// (0x00023054) list_single_popup_submenu_pane_t1_ParamLimits

0x49c3,	// (0x00023054) list_single_popup_submenu_pane_t1

0x423a,	// (0x000228cb) bg_active_tab_pane_cp1_ParamLimits

0x423a,	// (0x000228cb) bg_active_tab_pane_cp1

0x907b,	// (0x0002770c) tabs_2_active_pane_g1

0x9083,	// (0x00027714) tabs_2_active_pane_t1

0x423a,	// (0x000228cb) bg_passive_tab_pane_cp1_ParamLimits

0x423a,	// (0x000228cb) bg_passive_tab_pane_cp1

0x907b,	// (0x0002770c) tabs_2_passive_pane_g1

0x9083,	// (0x00027714) tabs_2_passive_pane_t1

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp4

0x9095,	// (0x00027726) tabs_2_long_active_pane_t1

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp4

0xa0dc,	// (0x0002876d) list_single_midp_graphic_pane_g4_ParamLimits

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp5

0x90b4,	// (0x00027745) tabs_3_long_active_pane_t1

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp5

0xa0dc,	// (0x0002876d) list_single_midp_graphic_pane_g4

0x423a,	// (0x000228cb) bg_popup_window_pane_cp13_ParamLimits

0x423a,	// (0x000228cb) bg_popup_window_pane_cp13

0x49ed,	// (0x0002307e) listscroll_popup_fast_pane_ParamLimits

0x49ed,	// (0x0002307e) listscroll_popup_fast_pane

0x49fc,	// (0x0002308d) grid_popup_fast_pane_ParamLimits

0x49fc,	// (0x0002308d) grid_popup_fast_pane

0x4a0e,	// (0x0002309f) scroll_pane_cp9_ParamLimits

0x4a0e,	// (0x0002309f) scroll_pane_cp9

0x7d32,	// (0x000263c3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d32,	// (0x000263c3) list_single_graphic_hl_pane_t1_cp2

0x4a32,	// (0x000230c3) input_focus_pane_cp20_ParamLimits

0x4a32,	// (0x000230c3) input_focus_pane_cp20

0x4a40,	// (0x000230d1) query_popup_data_pane_t1_ParamLimits

0x4a40,	// (0x000230d1) query_popup_data_pane_t1

0x4a53,	// (0x000230e4) query_popup_data_pane_t2_ParamLimits

0x4a53,	// (0x000230e4) query_popup_data_pane_t2

0x4a99,	// (0x0002312a) query_popup_data_pane_t3_ParamLimits

0x4a99,	// (0x0002312a) query_popup_data_pane_t3

0x4ada,	// (0x0002316b) query_popup_data_pane_t4_ParamLimits

0x4ada,	// (0x0002316b) query_popup_data_pane_t4

0x4b16,	// (0x000231a7) query_popup_data_pane_t5_ParamLimits

0x4b16,	// (0x000231a7) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0002dd4e) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0002dd4e) query_popup_data_pane_t

0x48e8,	// (0x00022f79) bg_set_opt_pane_g1

0x48f0,	// (0x00022f81) bg_set_opt_pane_g2

0x48f8,	// (0x00022f89) bg_set_opt_pane_g3

0x4900,	// (0x00022f91) bg_set_opt_pane_g4

0x4908,	// (0x00022f99) bg_set_opt_pane_g5

0x4910,	// (0x00022fa1) bg_set_opt_pane_g6

0x4918,	// (0x00022fa9) bg_set_opt_pane_g7

0x4920,	// (0x00022fb1) bg_set_opt_pane_g8

0x4928,	// (0x00022fb9) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0002dd59) bg_set_opt_pane_g

0x949b,	// (0x00027b2c) control_top_pane_stacon_ParamLimits

0x949b,	// (0x00027b2c) control_top_pane_stacon

0x94ee,	// (0x00027b7f) signal_pane_stacon_ParamLimits

0x94ee,	// (0x00027b7f) signal_pane_stacon

0x4f7a,	// (0x0002360b) stacon_top_pane_g1_ParamLimits

0x4f7a,	// (0x0002360b) stacon_top_pane_g1

0x9513,	// (0x00027ba4) title_pane_stacon_ParamLimits

0x9513,	// (0x00027ba4) title_pane_stacon

0x953d,	// (0x00027bce) uni_indicator_pane_stacon_ParamLimits

0x953d,	// (0x00027bce) uni_indicator_pane_stacon

0x9552,	// (0x00027be3) battery_pane_stacon_ParamLimits

0x9552,	// (0x00027be3) battery_pane_stacon

0x9596,	// (0x00027c27) control_bottom_pane_stacon_ParamLimits

0x9596,	// (0x00027c27) control_bottom_pane_stacon

0x95b9,	// (0x00027c4a) navi_pane_stacon_ParamLimits

0x95b9,	// (0x00027c4a) navi_pane_stacon

0x4f9c,	// (0x0002362d) stacon_bottom_pane_g1_ParamLimits

0x4f9c,	// (0x0002362d) stacon_bottom_pane_g1

0x90c6,	// (0x00027757) aid_levels_signal_lsc_ParamLimits

0x90c6,	// (0x00027757) aid_levels_signal_lsc

0x90dd,	// (0x0002776e) signal_pane_stacon_g1_ParamLimits

0x90dd,	// (0x0002776e) signal_pane_stacon_g1

0x90f1,	// (0x00027782) signal_pane_stacon_g2_ParamLimits

0x90f1,	// (0x00027782) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0002dd6c) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0002dd6c) signal_pane_stacon_g

0x9126,	// (0x000277b7) title_pane_stacon_t1_ParamLimits

0x9126,	// (0x000277b7) title_pane_stacon_t1

0x4b6e,	// (0x000231ff) uni_indicator_pane_stacon_g1

0x4b78,	// (0x00023209) uni_indicator_pane_stacon_g2

0x4b5a,	// (0x000231eb) uni_indicator_pane_stacon_g3

0x4b64,	// (0x000231f5) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0002dd78) uni_indicator_pane_stacon_g

0x914b,	// (0x000277dc) control_top_pane_stacon_g1

0x9153,	// (0x000277e4) control_top_pane_stacon_t1_ParamLimits

0x9153,	// (0x000277e4) control_top_pane_stacon_t1

0x918a,	// (0x0002781b) aid_levels_battery_lsc_ParamLimits

0x918a,	// (0x0002781b) aid_levels_battery_lsc

0x91a2,	// (0x00027833) battery_pane_stacon_g1_ParamLimits

0x91a2,	// (0x00027833) battery_pane_stacon_g1

0x91b5,	// (0x00027846) battery_pane_stacon_g2_ParamLimits

0x91b5,	// (0x00027846) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0002dd81) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0002dd81) battery_pane_stacon_g

0x91f3,	// (0x00027884) navi_icon_pane_stacon

0x9207,	// (0x00027898) navi_navi_pane_stacon

0x91f3,	// (0x00027884) navi_text_pane_stacon

0x914b,	// (0x000277dc) control_bottom_pane_stacon_g1

0x921b,	// (0x000278ac) control_bottom_pane_stacon_t1_ParamLimits

0x921b,	// (0x000278ac) control_bottom_pane_stacon_t1

0x9252,	// (0x000278e3) grid_app_pane_ParamLimits

0x9252,	// (0x000278e3) grid_app_pane

0x9274,	// (0x00027905) scroll_pane_cp15_ParamLimits

0x9274,	// (0x00027905) scroll_pane_cp15

0x9289,	// (0x0002791a) cell_app_pane_ParamLimits

0x9289,	// (0x0002791a) cell_app_pane

0x92b3,	// (0x00027944) cell_app_pane_g1_ParamLimits

0x92b3,	// (0x00027944) cell_app_pane_g1

0x4b9c,	// (0x0002322d) cell_app_pane_g2_ParamLimits

0x4b9c,	// (0x0002322d) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0002dd86) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0002dd86) cell_app_pane_g

0x4ba8,	// (0x00023239) cell_app_pane_t1_ParamLimits

0x4ba8,	// (0x00023239) cell_app_pane_t1

0x4bbf,	// (0x00023250) grid_highlight_pane_ParamLimits

0x4bbf,	// (0x00023250) grid_highlight_pane

0x48e8,	// (0x00022f79) cell_highlight_pane_g1

0x48f0,	// (0x00022f81) cell_highlight_pane_g2

0x48f8,	// (0x00022f89) cell_highlight_pane_g3

0x4900,	// (0x00022f91) cell_highlight_pane_g4

0x4908,	// (0x00022f99) cell_highlight_pane_g5

0x4910,	// (0x00022fa1) cell_highlight_pane_g6

0x4918,	// (0x00022fa9) cell_highlight_pane_g7

0x4920,	// (0x00022fb1) cell_highlight_pane_g8

0x4928,	// (0x00022fb9) cell_highlight_pane_g9

0x41d4,	// (0x00022865) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0002dd34) cell_highlight_pane_g

0x4bd0,	// (0x00023261) bg_scroll_pane

0x92ea,	// (0x0002797b) scroll_handle_pane

0x4c17,	// (0x000232a8) scroll_bg_pane_g1

0x4c2c,	// (0x000232bd) scroll_bg_pane_g2

0x4c44,	// (0x000232d5) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0002dd8b) scroll_bg_pane_g

0x4c59,	// (0x000232ea) scroll_handle_focus_pane_ParamLimits

0x4c59,	// (0x000232ea) scroll_handle_focus_pane

0x4c17,	// (0x000232a8) scroll_handle_pane_g1

0x4c66,	// (0x000232f7) scroll_handle_pane_g2

0x4c44,	// (0x000232d5) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0002dd92) scroll_handle_pane_g

0x4939,	// (0x00022fca) bg_popup_sub_pane_cp21_ParamLimits

0x4939,	// (0x00022fca) bg_popup_sub_pane_cp21

0x4c7a,	// (0x0002330b) popup_fep_japan_predictive_window_t1_ParamLimits

0x4c7a,	// (0x0002330b) popup_fep_japan_predictive_window_t1

0x4c91,	// (0x00023322) popup_fep_japan_predictive_window_t2_ParamLimits

0x4c91,	// (0x00023322) popup_fep_japan_predictive_window_t2

0x4cc4,	// (0x00023355) popup_fep_japan_predictive_window_t3_ParamLimits

0x4cc4,	// (0x00023355) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0002dd99) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0002dd99) popup_fep_japan_predictive_window_t

0x41de,	// (0x0002286f) bg_popup_sub_pane_cp23

0x4cfb,	// (0x0002338c) listscroll_japin_cand_pane

0x4d03,	// (0x00023394) popup_fep_japan_candidate_window_t1

0x4d11,	// (0x000233a2) candidate_pane_ParamLimits

0x4d11,	// (0x000233a2) candidate_pane

0x4d23,	// (0x000233b4) scroll_pane_cp30

0x4d2b,	// (0x000233bc) list_single_popup_jap_candidate_pane_ParamLimits

0x4d2b,	// (0x000233bc) list_single_popup_jap_candidate_pane

0x41de,	// (0x0002286f) list_highlight_pane_cp30

0x4d3f,	// (0x000233d0) list_single_popup_jap_candidate_pane_t1

0x4d4e,	// (0x000233df) level_1_signal

0x4d5b,	// (0x000233ec) level_2_signal

0x4d68,	// (0x000233f9) level_3_signal

0x4d75,	// (0x00023406) level_4_signal

0x4d82,	// (0x00023413) level_5_signal

0x4d8f,	// (0x00023420) level_6_signal

0x4d9c,	// (0x0002342d) level_7_signal

0x4d4e,	// (0x000233df) level_1_battery

0x4d5b,	// (0x000233ec) level_2_battery

0x4d68,	// (0x000233f9) level_3_battery

0x4d75,	// (0x00023406) level_4_battery

0x4d82,	// (0x00023413) level_5_battery

0x4d8f,	// (0x00023420) level_6_battery

0x4d9c,	// (0x0002342d) level_7_battery

0x4dc1,	// (0x00023452) list_menu_pane_ParamLimits

0x4dc1,	// (0x00023452) list_menu_pane

0x4dd2,	// (0x00023463) scroll_pane_cp25_ParamLimits

0x4dd2,	// (0x00023463) scroll_pane_cp25

0x4deb,	// (0x0002347c) list_double2_graphic_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double2_graphic_pane_cp2

0x4deb,	// (0x0002347c) list_double2_large_graphic_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double2_large_graphic_pane_cp2

0x4deb,	// (0x0002347c) list_double2_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double2_pane_cp2

0x4deb,	// (0x0002347c) list_double_graphic_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double_graphic_pane_cp2

0x4deb,	// (0x0002347c) list_double_large_graphic_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double_large_graphic_pane_cp2

0x4deb,	// (0x0002347c) list_double_number_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double_number_pane_cp2

0x4deb,	// (0x0002347c) list_double_pane_cp2_ParamLimits

0x4deb,	// (0x0002347c) list_double_pane_cp2

0x9344,	// (0x000279d5) list_single_2graphic_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_2graphic_pane_cp2

0x9344,	// (0x000279d5) list_single_graphic_heading_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_graphic_heading_pane_cp2

0x9344,	// (0x000279d5) list_single_graphic_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_graphic_pane_cp2

0x9344,	// (0x000279d5) list_single_heading_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_heading_pane_cp2

0x4dfb,	// (0x0002348c) list_single_large_graphic_pane_cp2_ParamLimits

0x4dfb,	// (0x0002348c) list_single_large_graphic_pane_cp2

0x9344,	// (0x000279d5) list_single_number_heading_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_number_heading_pane_cp2

0x9344,	// (0x000279d5) list_single_number_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_number_pane_cp2

0x9344,	// (0x000279d5) list_single_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_pane_cp2

0x4e15,	// (0x000234a6) bg_popup_sub_pane_cp22

0x9401,	// (0x00027a92) popup_side_volume_key_window_g1

0x942b,	// (0x00027abc) popup_side_volume_key_window_t1

0x9447,	// (0x00027ad8) volume_small_pane_cp1

0x422c,	// (0x000228bd) bg_popup_sub_pane_cp24_ParamLimits

0x422c,	// (0x000228bd) bg_popup_sub_pane_cp24

0x4e2b,	// (0x000234bc) fep_china_uni_candidate_pane_ParamLimits

0x4e2b,	// (0x000234bc) fep_china_uni_candidate_pane

0x4e3f,	// (0x000234d0) fep_china_uni_entry_pane

0x4e4f,	// (0x000234e0) popup_fep_china_uni_window_g1

0x4e6b,	// (0x000234fc) fep_china_uni_entry_pane_g1

0x4e73,	// (0x00023504) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0002ddc6) fep_china_uni_entry_pane_g

0x4e7b,	// (0x0002350c) fep_entry_item_pane

0x4e85,	// (0x00023516) fep_candidate_item_pane

0x4e8d,	// (0x0002351e) fep_china_uni_candidate_pane_g1

0x4e95,	// (0x00023526) fep_china_uni_candidate_pane_g2

0x4e9d,	// (0x0002352e) fep_china_uni_candidate_pane_g3

0x4ea5,	// (0x00023536) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0002ddcb) fep_china_uni_candidate_pane_g

0x41d4,	// (0x00022865) fep_entry_item_pane_g1

0x4ead,	// (0x0002353e) fep_entry_item_pane_t1_ParamLimits

0x4ead,	// (0x0002353e) fep_entry_item_pane_t1

0x4ec3,	// (0x00023554) fep_candidate_item_pane_t1_ParamLimits

0x4ec3,	// (0x00023554) fep_candidate_item_pane_t1

0x4ed8,	// (0x00023569) fep_candidate_item_pane_t2_ParamLimits

0x4ed8,	// (0x00023569) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0002ddd4) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0002ddd4) fep_candidate_item_pane_t

0x423a,	// (0x000228cb) list_highlight_pane_cp31_ParamLimits

0x423a,	// (0x000228cb) list_highlight_pane_cp31

0x4eea,	// (0x0002357b) level_1_signal_lsc

0x4ef3,	// (0x00023584) level_2_signal_lsc

0x4efc,	// (0x0002358d) level_3_signal_lsc

0x4f05,	// (0x00023596) level_4_signal_lsc

0x4f0e,	// (0x0002359f) level_5_signal_lsc

0x4f17,	// (0x000235a8) level_6_signal_lsc

0x4f20,	// (0x000235b1) level_7_signal_lsc

0x4f20,	// (0x000235b1) level_1_battery_lsc

0x4f29,	// (0x000235ba) level_2_battery_lsc

0x4f32,	// (0x000235c3) level_3_battery_lsc

0x4f3b,	// (0x000235cc) level_4_battery_lsc

0x4f44,	// (0x000235d5) level_5_battery_lsc

0x4f4d,	// (0x000235de) level_6_battery_lsc

0x4eea,	// (0x0002357b) level_7_battery_lsc

0x4f56,	// (0x000235e7) scroll_handle_focus_pane_g1

0x4f5f,	// (0x000235f0) scroll_handle_focus_pane_g2

0x4f68,	// (0x000235f9) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0002ddd9) scroll_handle_focus_pane_g

0xe511,	// (0x0002cba2) list_single_2graphic_pane_g1_ParamLimits

0xe511,	// (0x0002cba2) list_single_2graphic_pane_g1

0xc5a8,	// (0x0002ac39) list_single_2graphic_pane_g2_ParamLimits

0xc5a8,	// (0x0002ac39) list_single_2graphic_pane_g2

0xc52e,	// (0x0002abbf) list_single_2graphic_pane_g3_ParamLimits

0xc52e,	// (0x0002abbf) list_single_2graphic_pane_g3

0xe51d,	// (0x0002cbae) list_single_2graphic_pane_g4_ParamLimits

0xe51d,	// (0x0002cbae) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0002dde0) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0002dde0) list_single_2graphic_pane_g

0xe529,	// (0x0002cbba) list_single_2graphic_pane_t1_ParamLimits

0xe529,	// (0x0002cbba) list_single_2graphic_pane_t1

0xe557,	// (0x0002cbe8) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe557,	// (0x0002cbe8) list_double2_graphic_large_graphic_pane_g1

0xc64d,	// (0x0002acde) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc64d,	// (0x0002acde) list_double2_graphic_large_graphic_pane_g2

0xc619,	// (0x0002acaa) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc619,	// (0x0002acaa) list_double2_graphic_large_graphic_pane_g3

0xe569,	// (0x0002cbfa) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe569,	// (0x0002cbfa) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0002dde9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0002dde9) list_double2_graphic_large_graphic_pane_g

0xe575,	// (0x0002cc06) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe575,	// (0x0002cc06) list_double2_graphic_large_graphic_pane_t1

0xe58b,	// (0x0002cc1c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe58b,	// (0x0002cc1c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0002ddf2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0002ddf2) list_double2_graphic_large_graphic_pane_t

0x5049,	// (0x000236da) popup_fast_swap_window_ParamLimits

0x5049,	// (0x000236da) popup_fast_swap_window

0x5065,	// (0x000236f6) popup_side_volume_key_window

0x507f,	// (0x00023710) stacon_top_pane

0x5089,	// (0x0002371a) status_pane_ParamLimits

0x5089,	// (0x0002371a) status_pane

0x507f,	// (0x00023710) status_small_pane

0x41de,	// (0x0002286f) control_pane

0x41de,	// (0x0002286f) stacon_bottom_pane

0x4864,	// (0x00022ef5) scroll_pane_cp121

0x485b,	// (0x00022eec) set_content_pane

0x944f,	// (0x00027ae0) bg_active_tab_pane_g1_cp1

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp1

0x9458,	// (0x00027ae9) bg_active_tab_pane_g3_cp1

0x944f,	// (0x00027ae0) bg_passive_tab_pane_g1_cp1

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp1

0x9458,	// (0x00027ae9) bg_passive_tab_pane_g3_cp1

0x9461,	// (0x00027af2) bg_active_tab_pane_g1_cp2

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp2

0x946a,	// (0x00027afb) bg_active_tab_pane_g3_cp2

0x9461,	// (0x00027af2) bg_passive_tab_pane_g1_cp2

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp2

0x946a,	// (0x00027afb) bg_passive_tab_pane_g3_cp2

0x9473,	// (0x00027b04) bg_active_tab_pane_g1_cp3

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp3

0x947c,	// (0x00027b0d) bg_active_tab_pane_g3_cp3

0x9473,	// (0x00027b04) bg_passive_tab_pane_g1_cp3

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp3

0x947c,	// (0x00027b0d) bg_passive_tab_pane_g3_cp3

0x9485,	// (0x00027b16) bg_active_tab_pane_g1_cp4

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp4

0x9490,	// (0x00027b21) bg_active_tab_pane_g3_cp4

0x9485,	// (0x00027b16) bg_passive_tab_pane_g1_cp4

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp4

0x9490,	// (0x00027b21) bg_passive_tab_pane_g3_cp4

0x4fc1,	// (0x00023652) bg_active_tab_pane_g1_cp5

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp5

0x4fb8,	// (0x00023649) bg_active_tab_pane_g3_cp5

0x4fc1,	// (0x00023652) bg_passive_tab_pane_g1_cp5

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp5

0x4fb8,	// (0x00023649) bg_passive_tab_pane_g3_cp5

0x95dc,	// (0x00027c6d) list_set_graphic_pane_ParamLimits

0x95dc,	// (0x00027c6d) list_set_graphic_pane

0x41de,	// (0x0002286f) bg_set_opt_pane_cp4

0x4fca,	// (0x0002365b) list_set_graphic_pane_g1_ParamLimits

0x4fca,	// (0x0002365b) list_set_graphic_pane_g1

0x4fd6,	// (0x00023667) list_set_graphic_pane_g2_ParamLimits

0x4fd6,	// (0x00023667) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0002ddf7) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0002ddf7) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0002e16a) volume_small_pane_cp_g

0x4ffa,	// (0x0002368b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4ffa,	// (0x0002368b) list_double2_large_graphic_pane_g1_cp2

0x5008,	// (0x00023699) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5008,	// (0x00023699) list_double2_large_graphic_pane_g2_cp2

0x5019,	// (0x000236aa) list_double2_large_graphic_pane_g3_cp2

0x5021,	// (0x000236b2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5021,	// (0x000236b2) list_double2_large_graphic_pane_t1_cp2

0x5037,	// (0x000236c8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5037,	// (0x000236c8) list_double2_large_graphic_pane_t2_cp2

0x6730,	// (0x00024dc1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6730,	// (0x00024dc1) list_double_large_graphic_pane_g1_cp2

0x6743,	// (0x00024dd4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6743,	// (0x00024dd4) list_double_large_graphic_pane_g2_cp2

0x51a7,	// (0x00023838) list_double_large_graphic_pane_g3_cp2

0x6754,	// (0x00024de5) list_double_large_graphic_pane_g4_cp

0x675c,	// (0x00024ded) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x675c,	// (0x00024ded) list_double_large_graphic_pane_t1_cp2

0x6773,	// (0x00024e04) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6773,	// (0x00024e04) list_double_large_graphic_pane_t2_cp2

0x5097,	// (0x00023728) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5097,	// (0x00023728) list_double2_graphic_pane_g1_cp2

0x50a5,	// (0x00023736) list_double2_graphic_pane_g2_cp2_ParamLimits

0x50a5,	// (0x00023736) list_double2_graphic_pane_g2_cp2

0x50b6,	// (0x00023747) list_double2_graphic_pane_g3_cp2

0x50c0,	// (0x00023751) list_double2_graphic_pane_t1_cp2_ParamLimits

0x50c0,	// (0x00023751) list_double2_graphic_pane_t1_cp2

0x50d6,	// (0x00023767) list_double2_graphic_pane_t2_cp2_ParamLimits

0x50d6,	// (0x00023767) list_double2_graphic_pane_t2_cp2

0x50e8,	// (0x00023779) list_single_number_heading_pane_g1_cp2_ParamLimits

0x50e8,	// (0x00023779) list_single_number_heading_pane_g1_cp2

0x50f4,	// (0x00023785) list_single_number_heading_pane_g2_cp2

0x50fc,	// (0x0002378d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x50fc,	// (0x0002378d) list_single_number_heading_pane_t1_cp2

0x5112,	// (0x000237a3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5112,	// (0x000237a3) list_single_number_heading_pane_t2_cp2

0x5126,	// (0x000237b7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5126,	// (0x000237b7) list_single_number_heading_pane_t3_cp2

0x50e8,	// (0x00023779) list_single_heading_pane_g1_cp2_ParamLimits

0x50e8,	// (0x00023779) list_single_heading_pane_g1_cp2

0x50f4,	// (0x00023785) list_single_heading_pane_g2_cp2

0x50fc,	// (0x0002378d) list_single_heading_pane_t1_cp2_ParamLimits

0x50fc,	// (0x0002378d) list_single_heading_pane_t1_cp2

0x6538,	// (0x00024bc9) list_single_heading_pane_t2_cp2_ParamLimits

0x6538,	// (0x00024bc9) list_single_heading_pane_t2_cp2

0x64d2,	// (0x00024b63) list_double_graphic_pane_g1_cp2_ParamLimits

0x64d2,	// (0x00024b63) list_double_graphic_pane_g1_cp2

0x64de,	// (0x00024b6f) list_double_graphic_pane_g2_cp2_ParamLimits

0x64de,	// (0x00024b6f) list_double_graphic_pane_g2_cp2

0x64ed,	// (0x00024b7e) list_double_graphic_pane_g3_cp2

0x64f5,	// (0x00024b86) list_double_graphic_pane_t1_cp2_ParamLimits

0x64f5,	// (0x00024b86) list_double_graphic_pane_t1_cp2

0x650b,	// (0x00024b9c) list_double_graphic_pane_t2_cp2_ParamLimits

0x650b,	// (0x00024b9c) list_double_graphic_pane_t2_cp2

0x519b,	// (0x0002382c) list_double_number_pane_g1_cp2_ParamLimits

0x519b,	// (0x0002382c) list_double_number_pane_g1_cp2

0x51a7,	// (0x00023838) list_double_number_pane_g2_cp2

0x6496,	// (0x00024b27) list_double_number_pane_t1_cp2_ParamLimits

0x6496,	// (0x00024b27) list_double_number_pane_t1_cp2

0x64aa,	// (0x00024b3b) list_double_number_pane_t2_cp2_ParamLimits

0x64aa,	// (0x00024b3b) list_double_number_pane_t2_cp2

0x64c0,	// (0x00024b51) list_double_number_pane_t3_cp2_ParamLimits

0x64c0,	// (0x00024b51) list_double_number_pane_t3_cp2

0x640d,	// (0x00024a9e) list_single_graphic_pane_g1_cp2_ParamLimits

0x640d,	// (0x00024a9e) list_single_graphic_pane_g1_cp2

0x51ff,	// (0x00023890) list_single_graphic_pane_g2_cp2_ParamLimits

0x51ff,	// (0x00023890) list_single_graphic_pane_g2_cp2

0x520b,	// (0x0002389c) list_single_graphic_pane_g3_cp2

0x63e3,	// (0x00024a74) list_single_graphic_pane_t1_cp2_ParamLimits

0x63e3,	// (0x00024a74) list_single_graphic_pane_t1_cp2

0x51ff,	// (0x00023890) list_single_number_pane_g1_cp2_ParamLimits

0x51ff,	// (0x00023890) list_single_number_pane_g1_cp2

0x520b,	// (0x0002389c) list_single_number_pane_g2_cp2

0x63e3,	// (0x00024a74) list_single_number_pane_t1_cp2_ParamLimits

0x63e3,	// (0x00024a74) list_single_number_pane_t1_cp2

0x63f9,	// (0x00024a8a) list_single_number_pane_t2_cp2_ParamLimits

0x63f9,	// (0x00024a8a) list_single_number_pane_t2_cp2

0x5008,	// (0x00023699) list_double2_pane_g1_cp2_ParamLimits

0x5008,	// (0x00023699) list_double2_pane_g1_cp2

0x5019,	// (0x000236aa) list_double2_pane_g2_cp2

0x5173,	// (0x00023804) list_double2_pane_t1_cp2_ParamLimits

0x5173,	// (0x00023804) list_double2_pane_t1_cp2

0x5189,	// (0x0002381a) list_double2_pane_t2_cp2_ParamLimits

0x5189,	// (0x0002381a) list_double2_pane_t2_cp2

0x519b,	// (0x0002382c) list_double_pane_g1_cp2_ParamLimits

0x519b,	// (0x0002382c) list_double_pane_g1_cp2

0x51a7,	// (0x00023838) list_double_pane_g2_cp2

0x51af,	// (0x00023840) list_double_pane_t1_cp2_ParamLimits

0x51af,	// (0x00023840) list_double_pane_t1_cp2

0x51c5,	// (0x00023856) list_double_pane_t2_cp2_ParamLimits

0x51c5,	// (0x00023856) list_double_pane_t2_cp2

0x51ef,	// (0x00023880) list_single_pane_cp2_g3

0x51ff,	// (0x00023890) list_single_pane_g1_cp2_ParamLimits

0x51ff,	// (0x00023890) list_single_pane_g1_cp2

0x520b,	// (0x0002389c) list_single_pane_g2_cp2

0x5213,	// (0x000238a4) list_single_pane_t1_cp2_ParamLimits

0x5213,	// (0x000238a4) list_single_pane_t1_cp2

0x522b,	// (0x000238bc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x522b,	// (0x000238bc) list_single_large_graphic_pane_g1_cp2

0x5239,	// (0x000238ca) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5239,	// (0x000238ca) list_single_large_graphic_pane_g2_cp2

0x5245,	// (0x000238d6) list_single_large_graphic_pane_g3_cp2

0x524d,	// (0x000238de) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x524d,	// (0x000238de) list_single_large_graphic_pane_g4_cp1

0x5267,	// (0x000238f8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5267,	// (0x000238f8) list_single_large_graphic_pane_t1_cp2

0x63ad,	// (0x00024a3e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x63ad,	// (0x00024a3e) list_single_graphic_heading_pane_g1_cp2

0x6350,	// (0x000249e1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6350,	// (0x000249e1) list_single_graphic_heading_pane_g4_cp2

0x520b,	// (0x0002389c) list_single_graphic_heading_pane_g5_cp2

0x63b9,	// (0x00024a4a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x63b9,	// (0x00024a4a) list_single_graphic_heading_pane_t1_cp2

0x63cf,	// (0x00024a60) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x63cf,	// (0x00024a60) list_single_graphic_heading_pane_t2_cp2

0x6344,	// (0x000249d5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6344,	// (0x000249d5) list_single_2graphic_pane_g1_cp2

0x6350,	// (0x000249e1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6350,	// (0x000249e1) list_single_2graphic_pane_g2_cp2

0x520b,	// (0x0002389c) list_single_2graphic_pane_g3_cp2

0x6361,	// (0x000249f2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6361,	// (0x000249f2) list_single_2graphic_pane_g4_cp2

0x6397,	// (0x00024a28) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6397,	// (0x00024a28) list_single_2graphic_pane_t1_cp2

0x41d4,	// (0x00022865) list_highlight_pane_g10_cp1

0x5f4a,	// (0x000245db) list_highlight_pane_g1_cp1

0x5f52,	// (0x000245e3) list_highlight_pane_g2_cp1

0x5f5a,	// (0x000245eb) list_highlight_pane_g3_cp1

0x5f62,	// (0x000245f3) list_highlight_pane_g4_cp1

0x5f6a,	// (0x000245fb) list_highlight_pane_g5_cp1

0x5f72,	// (0x00024603) list_highlight_pane_g6_cp1

0x5f7a,	// (0x0002460b) list_highlight_pane_g7_cp1

0x5f82,	// (0x00024613) list_highlight_pane_g8_cp1

0x5f8a,	// (0x0002461b) list_highlight_pane_g9_cp1

0xa2f6,	// (0x00028987) form_field_slider_pane_t3

0xa304,	// (0x00028995) form_field_slider_pane_t4

0x5e7e,	// (0x0002450f) slider_form_pane_ParamLimits

0x5e7e,	// (0x0002450f) slider_form_pane

0x41de,	// (0x0002286f) control_abbreviations

0x41de,	// (0x0002286f) control_conventions

0x41de,	// (0x0002286f) control_definitions

0x41de,	// (0x0002286f) format_table_attribute

0x6584,	// (0x00024c15) bg_popup_preview_window_pane_g9

0x41de,	// (0x0002286f) format_table_data2

0x41de,	// (0x0002286f) format_table_data3

0x41de,	// (0x0002286f) format_table_data_example

0x0008,

0x41de,	// (0x0002286f) intro_purpose

0xf8f6,	// (0x0002df87) bg_popup_preview_window_pane_g

0x41de,	// (0x0002286f) texts_category

0x41de,	// (0x0002286f) texts_graphics

0x527d,	// (0x0002390e) text_digital

0x528c,	// (0x0002391d) text_primary

0x529b,	// (0x0002392c) text_primary_small

0x52aa,	// (0x0002393b) text_secondary

0x52b9,	// (0x0002394a) text_title

0x6a17,	// (0x000250a8) bg_passive_tab_pane_g1_cp3_srt

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp3_srt

0x6a0e,	// (0x0002509f) bg_passive_tab_pane_g3_cp3_srt

0x423a,	// (0x000228cb) bg_active_tab_pane_cp3_srt_ParamLimits

0x423a,	// (0x000228cb) bg_active_tab_pane_cp3_srt

0x6a20,	// (0x000250b1) tabs_4_active_pane_srt_g1

0xa8b4,	// (0x00028f45) tabs_4_active_pane_srt_t1_ParamLimits

0xa8b4,	// (0x00028f45) tabs_4_active_pane_srt_t1

0x6a17,	// (0x000250a8) bg_active_tab_pane_g1_cp3_copy1

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp3_copy1

0x6a0e,	// (0x0002509f) bg_active_tab_pane_g3_cp3_copy1

0x423a,	// (0x000228cb) tabs_2_long_active_pane_srt_ParamLimits

0x423a,	// (0x000228cb) tabs_2_long_active_pane_srt

0x423a,	// (0x000228cb) tabs_2_long_passive_pane_srt_ParamLimits

0x423a,	// (0x000228cb) tabs_2_long_passive_pane_srt

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp4_srt_ParamLimits

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp4_srt

0x6942,	// (0x00024fd3) bg_passive_tab_pane_g1_cp4_srt

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp4_srt

0x6939,	// (0x00024fca) bg_passive_tab_pane_g3_cp4_srt

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp4_srt_ParamLimits

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp4_srt

0xa660,	// (0x00028cf1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa660,	// (0x00028cf1) tabs_2_long_active_pane_srt_t1

0x6942,	// (0x00024fd3) bg_active_tab_pane_g1_cp4_srt

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp4_srt

0x6939,	// (0x00024fca) bg_active_tab_pane_g3_cp4_srt

0x422c,	// (0x000228bd) tabs_3_long_active_pane_srt_ParamLimits

0x422c,	// (0x000228bd) tabs_3_long_active_pane_srt

0x422c,	// (0x000228bd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x422c,	// (0x000228bd) tabs_3_long_passive_pane_cp_srt

0x422c,	// (0x000228bd) tabs_3_long_passive_pane_srt_ParamLimits

0x422c,	// (0x000228bd) tabs_3_long_passive_pane_srt

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp5_srt_ParamLimits

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp5_srt

0x4fc1,	// (0x00023652) bg_passive_tab_pane_g1_cp5_srt

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp5_srt

0x4fb8,	// (0x00023649) bg_passive_tab_pane_g3_cp5_srt

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp5_srt_ParamLimits

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp5_srt

0xa64e,	// (0x00028cdf) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa64e,	// (0x00028cdf) tabs_3_long_active_pane_srt_t1

0x4fc1,	// (0x00023652) bg_active_tab_pane_g1_cp5_srt

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp5_srt

0x4fb8,	// (0x00023649) bg_active_tab_pane_g3_cp5_srt

0x692b,	// (0x00024fbc) navi_text_pane_srt_t1

0x6923,	// (0x00024fb4) navi_icon_pane_srt_g1

0x53b7,	// (0x00023a48) midp_editing_number_pane_srt

0x52c8,	// (0x00023959) midp_ticker_pane_srt

0x53bf,	// (0x00023a50) midp_ticker_pane_srt_g1

0x53c7,	// (0x00023a58) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0002de16) midp_ticker_pane_srt_g

0x53cf,	// (0x00023a60) midp_ticker_pane_srt_t1

0x6914,	// (0x00024fa5) midp_editing_number_pane_t1_copy1

0x95fa,	// (0x00027c8b) listscroll_midp_pane

0x95fa,	// (0x00027c8b) midp_form_pane

0x52d0,	// (0x00023961) midp_info_popup_window_ParamLimits

0x52d0,	// (0x00023961) midp_info_popup_window

0x4939,	// (0x00022fca) bg_popup_sub_pane_cp50_ParamLimits

0x4939,	// (0x00022fca) bg_popup_sub_pane_cp50

0x5b9b,	// (0x0002422c) listscroll_midp_info_pane_ParamLimits

0x5b9b,	// (0x0002422c) listscroll_midp_info_pane

0x5b83,	// (0x00024214) listscroll_form_midp_pane_ParamLimits

0x5b83,	// (0x00024214) listscroll_form_midp_pane

0x5b8f,	// (0x00024220) scroll_bar_cp050

0xa2de,	// (0x0002896f) list_midp_pane

0x72e2,	// (0x00025973) signal_pane_g2_cp

0x5ab5,	// (0x00024146) listscroll_midp_info_pane_t1_ParamLimits

0x5ab5,	// (0x00024146) listscroll_midp_info_pane_t1

0x5acd,	// (0x0002415e) listscroll_midp_info_pane_t2_ParamLimits

0x5acd,	// (0x0002415e) listscroll_midp_info_pane_t2

0x5b0b,	// (0x0002419c) listscroll_midp_info_pane_t3_ParamLimits

0x5b0b,	// (0x0002419c) listscroll_midp_info_pane_t3

0x5b45,	// (0x000241d6) listscroll_midp_info_pane_t4_ParamLimits

0x5b45,	// (0x000241d6) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0002dec2) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0002dec2) listscroll_midp_info_pane_t

0x49a0,	// (0x00023031) scroll_pane_cp21

0x5a59,	// (0x000240ea) form_midp_field_choice_group_pane

0x5a62,	// (0x000240f3) form_midp_field_text_pane

0x5a9b,	// (0x0002412c) form_midp_field_time_pane

0x5aa3,	// (0x00024134) form_midp_gauge_slider_pane

0x5aac,	// (0x0002413d) form_midp_gauge_wait_pane

0x41de,	// (0x0002286f) form_midp_image_pane

0xe618,	// (0x0002cca9) list_single_midp_pane_ParamLimits

0xe618,	// (0x0002cca9) list_single_midp_pane

0xa29f,	// (0x00028930) form_midp_field_text_pane_t1

0x5900,	// (0x00023f91) input_focus_pane_cp050

0x5a48,	// (0x000240d9) list_midp_form_text_pane

0x5a17,	// (0x000240a8) form_midp_field_choice_group_pane_t1

0x5a25,	// (0x000240b6) input_focus_pane_cp051

0x5a39,	// (0x000240ca) list_midp_choice_pane

0x41de,	// (0x0002286f) status_idle_pane

0x59fb,	// (0x0002408c) form_midp_field_time_pane_t1

0x41d4,	// (0x00022865) wait_anim_pane_g2_copy1

0x5a09,	// (0x0002409a) form_midp_field_time_pane_t2

0x0001,

0x5329,	// (0x000239ba) aid_navinavi_width_2_pane

0xf82c,	// (0x0002debd) form_midp_field_time_pane_t

0x41de,	// (0x0002286f) input_focus_pane_cp052

0x41de,	// (0x0002286f) bg_input_focus_pane_cp040

0x59d7,	// (0x00024068) form_midp_gauge_slider_pane_t1

0x59e5,	// (0x00024076) form_midp_gauge_slider_pane_t2

0xa283,	// (0x00028914) form_midp_gauge_slider_pane_t3

0xa291,	// (0x00028922) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0002deb4) form_midp_gauge_slider_pane_t

0x59f3,	// (0x00024084) form_midp_slider_pane

0x423a,	// (0x000228cb) bg_input_focus_pane_cp041_ParamLimits

0x423a,	// (0x000228cb) bg_input_focus_pane_cp041

0x59a4,	// (0x00024035) form_midp_gauge_wait_pane_t1_ParamLimits

0x59a4,	// (0x00024035) form_midp_gauge_wait_pane_t1

0x59b6,	// (0x00024047) form_midp_gauge_wait_pane_t2_ParamLimits

0x59b6,	// (0x00024047) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0002deaf) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0002deaf) form_midp_gauge_wait_pane_t

0x59c8,	// (0x00024059) form_midp_wait_pane_ParamLimits

0x59c8,	// (0x00024059) form_midp_wait_pane

0x596e,	// (0x00023fff) form_midp_image_pane_g1

0x5977,	// (0x00024008) form_midp_image_pane_t1

0x5986,	// (0x00024017) form_midp_image_pane_t2

0x5995,	// (0x00024026) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0002dea8) form_midp_image_pane_t

0x5965,	// (0x00023ff6) list_single_midp_pane_g1

0xe609,	// (0x0002cc9a) list_single_midp_pane_t1

0xa253,	// (0x000288e4) list_midp_form_item_pane_ParamLimits

0xa253,	// (0x000288e4) list_midp_form_item_pane

0x52e3,	// (0x00023974) list_midp_form_item_pane_t1

0x52f2,	// (0x00023983) midp_ticker_pane_g1

0x52fe,	// (0x0002398f) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0002ddfc) midp_ticker_pane_g

0x96af,	// (0x00027d40) midp_ticker_pane_t1

0xa847,	// (0x00028ed8) midp_editing_number_pane_t1

0x69a2,	// (0x00025033) midp_editing_number_pane

0x69b1,	// (0x00025042) midp_ticker_pane

0x6904,	// (0x00024f95) ai_message_heading_pane

0x41de,	// (0x0002286f) bg_popup_window_pane_cp14

0x690c,	// (0x00024f9d) listscroll_ai_message_pane

0x688e,	// (0x00024f1f) ai_message_heading_pane_g1_ParamLimits

0x688e,	// (0x00024f1f) ai_message_heading_pane_g1

0x689a,	// (0x00024f2b) ai_message_heading_pane_g2_ParamLimits

0x689a,	// (0x00024f2b) ai_message_heading_pane_g2

0x68a6,	// (0x00024f37) ai_message_heading_pane_g3_ParamLimits

0x68a6,	// (0x00024f37) ai_message_heading_pane_g3

0x68b2,	// (0x00024f43) ai_message_heading_pane_g4_ParamLimits

0x68b2,	// (0x00024f43) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0002dfe9) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0002dfe9) ai_message_heading_pane_g

0x68be,	// (0x00024f4f) ai_message_heading_pane_t1_ParamLimits

0x68be,	// (0x00024f4f) ai_message_heading_pane_t1

0x68d8,	// (0x00024f69) ai_message_heading_pane_t2_ParamLimits

0x68d8,	// (0x00024f69) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0002dff2) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0002dff2) ai_message_heading_pane_t

0x68ea,	// (0x00024f7b) bg_popup_heading_pane_cp1_ParamLimits

0x68ea,	// (0x00024f7b) bg_popup_heading_pane_cp1

0x687c,	// (0x00024f0d) list_ai_message_pane_ParamLimits

0x687c,	// (0x00024f0d) list_ai_message_pane

0x49a0,	// (0x00023031) scroll_pane_cp10

0x6818,	// (0x00024ea9) list_ai_message_pane_g1

0x6820,	// (0x00024eb1) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0002dfc6) list_ai_message_pane_g

0x6828,	// (0x00024eb9) list_ai_message_pane_t1_ParamLimits

0x6828,	// (0x00024eb9) list_ai_message_pane_t1

0x683d,	// (0x00024ece) list_ai_message_pane_t2_ParamLimits

0x683d,	// (0x00024ece) list_ai_message_pane_t2

0x6852,	// (0x00024ee3) list_ai_message_pane_t3_ParamLimits

0x6852,	// (0x00024ee3) list_ai_message_pane_t3

0x6867,	// (0x00024ef8) list_ai_message_pane_t4_ParamLimits

0x6867,	// (0x00024ef8) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0002dfcb) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0002dfcb) list_ai_message_pane_t

0xa5e8,	// (0x00028c79) cell_ai_soft_ind_pane_ParamLimits

0xa5e8,	// (0x00028c79) cell_ai_soft_ind_pane

0x530a,	// (0x0002399b) cell_ai_soft_ind_pane_g1_ParamLimits

0x530a,	// (0x0002399b) cell_ai_soft_ind_pane_g1

0x41de,	// (0x0002286f) grid_highlight_cp1

0x5317,	// (0x000239a8) text_secondary_cp56_ParamLimits

0x5317,	// (0x000239a8) text_secondary_cp56

0x67ed,	// (0x00024e7e) example_general_pane_ParamLimits

0x67ed,	// (0x00024e7e) example_general_pane

0x67f9,	// (0x00024e8a) example_parent_pane_g1_ParamLimits

0x67f9,	// (0x00024e8a) example_parent_pane_g1

0x6805,	// (0x00024e96) example_parent_pane_t1_ParamLimits

0x6805,	// (0x00024e96) example_parent_pane_t1

0x9bc8,	// (0x00028259) popup_preview_text_window_ParamLimits

0x9bc8,	// (0x00028259) popup_preview_text_window

0x51f7,	// (0x00023888) list_single_pane_cp2_g4

0x4409,	// (0x00022a9a) bg_popup_preview_window_pane_ParamLimits

0x4409,	// (0x00022a9a) bg_popup_preview_window_pane

0x658c,	// (0x00024c1d) popup_preview_text_window_t1_ParamLimits

0x658c,	// (0x00024c1d) popup_preview_text_window_t1

0x65aa,	// (0x00024c3b) popup_preview_text_window_t2_ParamLimits

0x65aa,	// (0x00024c3b) popup_preview_text_window_t2

0x65f3,	// (0x00024c84) popup_preview_text_window_t3_ParamLimits

0x65f3,	// (0x00024c84) popup_preview_text_window_t3

0x6638,	// (0x00024cc9) popup_preview_text_window_t4_ParamLimits

0x6638,	// (0x00024cc9) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0002df9a) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0002df9a) popup_preview_text_window_t

0x66b6,	// (0x00024d47) scroll_pane_cp11

0x5810,	// (0x00023ea1) bg_popup_preview_window_pane_g1

0x654c,	// (0x00024bdd) bg_popup_preview_window_pane_g2

0x6554,	// (0x00024be5) bg_popup_preview_window_pane_g3

0x655c,	// (0x00024bed) bg_popup_preview_window_pane_g4

0x6564,	// (0x00024bf5) bg_popup_preview_window_pane_g5

0x656c,	// (0x00024bfd) bg_popup_preview_window_pane_g6

0x6574,	// (0x00024c05) bg_popup_preview_window_pane_g7

0x657c,	// (0x00024c0d) bg_popup_preview_window_pane_g8

0x8938,	// (0x00026fc9) aid_popup_width_pane

0x9ba6,	// (0x00028237) popup_midp_note_alarm_window_ParamLimits

0x9ba6,	// (0x00028237) popup_midp_note_alarm_window

0x4875,	// (0x00022f06) data_form_pane_ParamLimits

0xca14,	// (0x0002b0a5) form_field_data_pane_g1

0xca1e,	// (0x0002b0af) form_field_data_pane_t1_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_ParamLimits

0x488f,	// (0x00022f20) data_form_wide_pane_ParamLimits

0xca38,	// (0x0002b0c9) form_field_data_wide_pane_g1

0xe3a0,	// (0x0002ca31) form_field_data_wide_pane_t1_ParamLimits

0x45fc,	// (0x00022c8d) input_focus_pane_cp6_ParamLimits

0x906d,	// (0x000276fe) input_popup_find_pane_g1_ParamLimits

0x906d,	// (0x000276fe) input_popup_find_pane_g1

0x91c6,	// (0x00027857) aid_navi_side_left_pane

0x91db,	// (0x0002786c) aid_navi_side_right_pane

0x6027,	// (0x000246b8) bg_popup_window_pane_cp30_ParamLimits

0x6027,	// (0x000246b8) bg_popup_window_pane_cp30

0x60a1,	// (0x00024732) popup_midp_note_alarm_window_g1_ParamLimits

0x60a1,	// (0x00024732) popup_midp_note_alarm_window_g1

0x60d1,	// (0x00024762) popup_midp_note_alarm_window_t1_ParamLimits

0x60d1,	// (0x00024762) popup_midp_note_alarm_window_t1

0x6172,	// (0x00024803) popup_midp_note_alarm_window_t2_ParamLimits

0x6172,	// (0x00024803) popup_midp_note_alarm_window_t2

0x6220,	// (0x000248b1) popup_midp_note_alarm_window_t3_ParamLimits

0x6220,	// (0x000248b1) popup_midp_note_alarm_window_t3

0x6248,	// (0x000248d9) popup_midp_note_alarm_window_t4_ParamLimits

0x6248,	// (0x000248d9) popup_midp_note_alarm_window_t4

0x6268,	// (0x000248f9) popup_midp_note_alarm_window_t5_ParamLimits

0x6268,	// (0x000248f9) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0002df37) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0002df37) popup_midp_note_alarm_window_t

0x6314,	// (0x000249a5) wait_bar_pane_cp1_ParamLimits

0x6314,	// (0x000249a5) wait_bar_pane_cp1

0x41de,	// (0x0002286f) wait_anim_pane_copy1

0x41de,	// (0x0002286f) wait_border_pane_copy1

0x5d3f,	// (0x000243d0) wait_border_pane_g1_copy1

0xe3ba,	// (0x0002ca4b) form_field_popup_pane_g1

0xe3c2,	// (0x0002ca53) form_field_popup_pane_t1_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_cp7_ParamLimits

0x48bb,	// (0x00022f4c) list_form_pane_ParamLimits

0xe3dc,	// (0x0002ca6d) form_field_popup_wide_pane_g1

0xe3e4,	// (0x0002ca75) form_field_popup_wide_pane_t1_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_cp8_ParamLimits

0x48c7,	// (0x00022f58) list_form_wide_pane_ParamLimits

0x6a47,	// (0x000250d8) aid_size_cell_graphic_pane

0xe469,	// (0x0002cafa) data_form_pane_t1_ParamLimits

0xe667,	// (0x0002ccf8) data_form_wide_pane_t1_ParamLimits

0x9e12,	// (0x000284a3) bg_status_flat_pane

0x8d31,	// (0x000273c2) title_pane_t1_ParamLimits

0x41f4,	// (0x00022885) title_pane_t2_ParamLimits

0x421a,	// (0x000228ab) title_pane_t3_ParamLimits

0xf573,	// (0x0002dc04) title_pane_t_ParamLimits

0x4d4e,	// (0x000233df) level_1_signal_ParamLimits

0x4d5b,	// (0x000233ec) level_2_signal_ParamLimits

0x4d68,	// (0x000233f9) level_3_signal_ParamLimits

0x4d75,	// (0x00023406) level_4_signal_ParamLimits

0x4d82,	// (0x00023413) level_5_signal_ParamLimits

0x4d8f,	// (0x00023420) level_6_signal_ParamLimits

0x4d9c,	// (0x0002342d) level_7_signal_ParamLimits

0x4d4e,	// (0x000233df) level_1_battery_ParamLimits

0x4d5b,	// (0x000233ec) level_2_battery_ParamLimits

0x4d68,	// (0x000233f9) level_3_battery_ParamLimits

0x4d75,	// (0x00023406) level_4_battery_ParamLimits

0x4d82,	// (0x00023413) level_5_battery_ParamLimits

0x4d8f,	// (0x00023420) level_6_battery_ParamLimits

0x4d9c,	// (0x0002342d) level_7_battery_ParamLimits

0x5f4a,	// (0x000245db) bg_status_flat_pane_g1

0x5f52,	// (0x000245e3) bg_status_flat_pane_g2

0x5f5a,	// (0x000245eb) bg_status_flat_pane_g3

0x5f62,	// (0x000245f3) bg_status_flat_pane_g4

0x5f6a,	// (0x000245fb) bg_status_flat_pane_g5

0x5f72,	// (0x00024603) bg_status_flat_pane_g6

0x5f7a,	// (0x0002460b) bg_status_flat_pane_g7

0x8da1,	// (0x00027432) tabs_3_active_pane_t1_ParamLimits

0x8da1,	// (0x00027432) tabs_3_passive_pane_t1_ParamLimits

0x8dbb,	// (0x0002744c) tabs_4_active_pane_t1_ParamLimits

0x8dbb,	// (0x0002744c) tabs_4_1_passive_pane_t1_ParamLimits

0x9083,	// (0x00027714) tabs_2_active_pane_t1_ParamLimits

0x9083,	// (0x00027714) tabs_2_passive_pane_t1_ParamLimits

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp4_ParamLimits

0x9095,	// (0x00027726) tabs_2_long_active_pane_t1_ParamLimits

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp4_ParamLimits

0xa10e,	// (0x0002879f) list_single_midp_graphic_pane_t1_ParamLimits

0x55c2,	// (0x00023c53) bg_active_tab_pane_cp5_ParamLimits

0x90b4,	// (0x00027745) tabs_3_long_active_pane_t1_ParamLimits

0x90a8,	// (0x00027739) bg_passive_tab_pane_cp5_ParamLimits

0xa10e,	// (0x0002879f) list_single_midp_graphic_pane_t1

0x9e12,	// (0x000284a3) bg_status_flat_pane_ParamLimits

0x56e3,	// (0x00023d74) indicator_pane_cp2_ParamLimits

0x56e3,	// (0x00023d74) indicator_pane_cp2

0x9f55,	// (0x000285e6) navi_pane_srt_ParamLimits

0x9f55,	// (0x000285e6) navi_pane_srt

0x570b,	// (0x00023d9c) popup_clock_digital_analogue_window_cp1

0x427e,	// (0x0002290f) indicator_pane_t1

0x52c8,	// (0x00023959) copy_highlight_pane

0x52c8,	// (0x00023959) cursor_graphics_pane

0x52c8,	// (0x00023959) graphic_within_text_pane

0x52c8,	// (0x00023959) link_highlight_pane

0x6679,	// (0x00024d0a) popup_preview_text_window_t5_ParamLimits

0x6679,	// (0x00024d0a) popup_preview_text_window_t5

0x5331,	// (0x000239c2) cursor_digital_pane

0x5331,	// (0x000239c2) cursor_primary_pane

0x5342,	// (0x000239d3) cursor_primary_small_pane

0x534a,	// (0x000239db) cursor_secondary_pane

0x5352,	// (0x000239e3) cursor_title_pane

0x5331,	// (0x000239c2) link_highlight_digital_pane

0x5339,	// (0x000239ca) link_highlight_primary_pane

0x5342,	// (0x000239d3) link_highlight_primary_small_pane

0x534a,	// (0x000239db) link_highlight_secondary_pane

0x5352,	// (0x000239e3) link_highlight_title_pane

0x5331,	// (0x000239c2) copy_highlight_digital_pane

0x5331,	// (0x000239c2) copy_highlight_primary_pane

0x5342,	// (0x000239d3) copy_highlight_primary_small_pane

0x534a,	// (0x000239db) copy_highlight_secondary_pane

0x5352,	// (0x000239e3) copy_highlight_title_pane

0x534a,	// (0x000239db) graphic_text_digital_pane

0x5fca,	// (0x0002465b) graphic_text_primary_pane

0x5fd3,	// (0x00024664) graphic_text_primary_small_pane

0x5342,	// (0x000239d3) graphic_text_secondary_pane

0x5331,	// (0x000239c2) graphic_text_title_pane

0x96c1,	// (0x00027d52) cursor_primary_pane_g1

0x5fbc,	// (0x0002464d) cursor_text_primary_t1

0xa326,	// (0x000289b7) cursor_primary_small_pane_g1

0x5fae,	// (0x0002463f) cursor_text_primary_small_t1

0xa31c,	// (0x000289ad) cursor_primary_small_pane_g1_copy1

0x5fa0,	// (0x00024631) cursor_text_primary_small_t1_copy1

0x5f92,	// (0x00024623) cursor_text_title_t1

0xa312,	// (0x000289a3) cursor_title_pane_g1

0x96c1,	// (0x00027d52) cursor_digital_pane_g1

0x535a,	// (0x000239eb) cursor_text_digital_t1

0x5f33,	// (0x000245c4) link_highlight_primary_pane_g1

0x5f3b,	// (0x000245cc) link_highlight_primary_pane_t1

0x5368,	// (0x000239f9) link_highlight_primary_small_pane_g1

0x5370,	// (0x00023a01) link_highlight_primary_small_pane_t1

0x5368,	// (0x000239f9) link_highlight_secondary_pane_g1

0x537f,	// (0x00023a10) link_highlight_secondary_pane_t1

0x5ea7,	// (0x00024538) link_highlight_title_pane_g1

0x5eaf,	// (0x00024540) link_highlight_title_pane_t1

0x5e90,	// (0x00024521) link_highlight_digital_pane_g1

0x5e98,	// (0x00024529) link_highlight_digital_pane_t1

0x5d84,	// (0x00024415) copy_highlight_primary_pane_g1

0x5d8c,	// (0x0002441d) copy_highlight_primary_pane_t1

0x5d5e,	// (0x000243ef) copy_highlight_primary_small_pane_g1

0x5d75,	// (0x00024406) copy_highlight_primary_small_pane_t1

0x538e,	// (0x00023a1f) copy_highlight_secondary_pane_g1

0x5396,	// (0x00023a27) copy_highlight_secondary_pane_t1

0x5d5e,	// (0x000243ef) copy_highlight_title_pane_g1

0x5d66,	// (0x000243f7) copy_highlight_title_pane_t1

0x5d84,	// (0x00024415) copy_highlight_digital_pane_g1

0x6bd1,	// (0x00025262) copy_highlight_digital_pane_t1

0x6b25,	// (0x000251b6) graphic_text_primary_pane_g1

0x6bb5,	// (0x00025246) graphic_text_primary_pane_t1

0x6bc3,	// (0x00025254) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0002e066) graphic_text_primary_pane_t

0x6b91,	// (0x00025222) graphic_text_primary_small_pane_g1

0x6b99,	// (0x0002522a) graphic_text_primary_small_pane_t1

0x6ba7,	// (0x00025238) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0002e061) graphic_text_primary_small_pane_t

0x6b6d,	// (0x000251fe) graphic_text_secondary_pane_g1

0x6b75,	// (0x00025206) graphic_text_secondary_pane_t1

0x6b83,	// (0x00025214) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0002e05c) graphic_text_secondary_pane_t

0x6b49,	// (0x000251da) graphic_text_title_pane_g1

0x6b51,	// (0x000251e2) graphic_text_title_pane_t1

0x6b5f,	// (0x000251f0) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0002e057) graphic_text_title_pane_t

0x6b25,	// (0x000251b6) graphic_text_digital_pane_g1

0x6b2d,	// (0x000251be) graphic_text_digital_pane_t1

0x6b3b,	// (0x000251cc) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0002e052) graphic_text_digital_pane_t

0x423a,	// (0x000228cb) navi_icon_pane_srt_ParamLimits

0x423a,	// (0x000228cb) navi_icon_pane_srt

0x41de,	// (0x0002286f) navi_midp_pane_srt

0x41de,	// (0x0002286f) navi_navi_pane_srt

0x423a,	// (0x000228cb) navi_text_pane_srt_ParamLimits

0x423a,	// (0x000228cb) navi_text_pane_srt

0x6af0,	// (0x00025181) navi_navi_icon_text_pane_srt

0x6b0a,	// (0x0002519b) navi_navi_pane_srt_g1_ParamLimits

0x6b0a,	// (0x0002519b) navi_navi_pane_srt_g1

0x6af8,	// (0x00025189) navi_navi_pane_srt_g2_ParamLimits

0x6af8,	// (0x00025189) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0002e04d) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0002e04d) navi_navi_pane_srt_g

0x6b1c,	// (0x000251ad) navi_navi_tabs_pane_srt

0x6af0,	// (0x00025181) navi_navi_text_pane_srt

0x6af0,	// (0x00025181) navi_navi_volume_pane_srt

0x6ae1,	// (0x00025172) navi_navi_text_pane_srt_t1

0xa9d8,	// (0x00029069) navi_navi_volume_pane_srt_g1

0xa9e0,	// (0x00029071) volume_small_pane_srt_ParamLimits

0xa9e0,	// (0x00029071) volume_small_pane_srt

0x96cb,	// (0x00027d5c) volume_small_pane_srt_g1_ParamLimits

0x96cb,	// (0x00027d5c) volume_small_pane_srt_g1

0x96db,	// (0x00027d6c) volume_small_pane_srt_g2_ParamLimits

0x96db,	// (0x00027d6c) volume_small_pane_srt_g2

0x96ec,	// (0x00027d7d) volume_small_pane_srt_g3_ParamLimits

0x96ec,	// (0x00027d7d) volume_small_pane_srt_g3

0x96fd,	// (0x00027d8e) volume_small_pane_srt_g4_ParamLimits

0x96fd,	// (0x00027d8e) volume_small_pane_srt_g4

0x970e,	// (0x00027d9f) volume_small_pane_srt_g5_ParamLimits

0x970e,	// (0x00027d9f) volume_small_pane_srt_g5

0x971f,	// (0x00027db0) volume_small_pane_srt_g6_ParamLimits

0x971f,	// (0x00027db0) volume_small_pane_srt_g6

0x9730,	// (0x00027dc1) volume_small_pane_srt_g7_ParamLimits

0x9730,	// (0x00027dc1) volume_small_pane_srt_g7

0x9741,	// (0x00027dd2) volume_small_pane_srt_g8_ParamLimits

0x9741,	// (0x00027dd2) volume_small_pane_srt_g8

0x9752,	// (0x00027de3) volume_small_pane_srt_g9_ParamLimits

0x9752,	// (0x00027de3) volume_small_pane_srt_g9

0x9763,	// (0x00027df4) volume_small_pane_srt_g10_ParamLimits

0x9763,	// (0x00027df4) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0002de01) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0002de01) volume_small_pane_srt_g

0x44b2,	// (0x00022b43) query_popup_data_pane_cp2

0x6ac7,	// (0x00025158) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ac7,	// (0x00025158) navi_navi_icon_text_pane_srt_t1

0x5fca,	// (0x0002465b) navi_tabs_2_long_pane_srt

0x5fca,	// (0x0002465b) navi_tabs_2_pane_srt

0x5fca,	// (0x0002465b) navi_tabs_3_long_pane_srt

0x5fca,	// (0x0002465b) navi_tabs_3_pane_srt

0x5fca,	// (0x0002465b) navi_tabs_4_pane_srt

0xa9b8,	// (0x00029049) tabs_2_active_pane_srt_ParamLimits

0xa9b8,	// (0x00029049) tabs_2_active_pane_srt

0xa9c8,	// (0x00029059) tabs_2_passive_pane_srt_ParamLimits

0xa9c8,	// (0x00029059) tabs_2_passive_pane_srt

0x49d8,	// (0x00023069) bg_passive_tab_pane_cp1_srt_ParamLimits

0x49d8,	// (0x00023069) bg_passive_tab_pane_cp1_srt

0x6aae,	// (0x0002513f) bg_passive_tab_pane_g1_cp1_srt

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp1_srt

0x6aa5,	// (0x00025136) bg_passive_tab_pane_g3_cp1_srt

0x423a,	// (0x000228cb) bg_active_tab_pane_cp1_srt_ParamLimits

0x423a,	// (0x000228cb) bg_active_tab_pane_cp1_srt

0x6ab7,	// (0x00025148) tabs_2_active_pane_srt_g1

0xa9a6,	// (0x00029037) tabs_2_active_pane_srt_t1_ParamLimits

0xa9a6,	// (0x00029037) tabs_2_active_pane_srt_t1

0x6aae,	// (0x0002513f) bg_active_tab_pane_g1_cp1_srt

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp1_srt

0x6aa5,	// (0x00025136) bg_active_tab_pane_g3_cp1_srt

0xa973,	// (0x00029004) tabs_3_active_pane_srt_ParamLimits

0xa973,	// (0x00029004) tabs_3_active_pane_srt

0xa984,	// (0x00029015) tabs_3_passive_pane_cp_srt_ParamLimits

0xa984,	// (0x00029015) tabs_3_passive_pane_cp_srt

0xa995,	// (0x00029026) tabs_3_passive_pane_srt_ParamLimits

0xa995,	// (0x00029026) tabs_3_passive_pane_srt

0x49d8,	// (0x00023069) bg_passive_tab_pane_cp2_srt_ParamLimits

0x49d8,	// (0x00023069) bg_passive_tab_pane_cp2_srt

0x53ae,	// (0x00023a3f) bg_passive_tab_pane_g1_cp2_srt

0x4f71,	// (0x00023602) bg_passive_tab_pane_g2_cp2_srt

0x53a5,	// (0x00023a36) bg_passive_tab_pane_g3_cp2_srt

0x423a,	// (0x000228cb) bg_active_tab_pane_cp2_srt_ParamLimits

0x423a,	// (0x000228cb) bg_active_tab_pane_cp2_srt

0x6a9d,	// (0x0002512e) tabs_3_active_pane_srt_g1

0xa961,	// (0x00028ff2) tabs_3_active_pane_srt_t1_ParamLimits

0xa961,	// (0x00028ff2) tabs_3_active_pane_srt_t1

0x53ae,	// (0x00023a3f) bg_active_tab_pane_g1_cp2_srt

0x4f71,	// (0x00023602) bg_active_tab_pane_g2_cp2_srt

0x53a5,	// (0x00023a36) bg_active_tab_pane_g3_cp2_srt

0xa919,	// (0x00028faa) tabs_4_active_pane_srt_ParamLimits

0xa919,	// (0x00028faa) tabs_4_active_pane_srt

0xa92b,	// (0x00028fbc) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa92b,	// (0x00028fbc) tabs_4_passive_pane_cp2_srt

0x54d2,	// (0x00023b63) aid_size_cell_toolbar

0x90a8,	// (0x00027739) main_idle_act_pane_ParamLimits

0x559c,	// (0x00023c2d) popup_large_graphic_colour_window_ParamLimits

0x9d1a,	// (0x000283ab) popup_toolbar_window_ParamLimits

0x9d1a,	// (0x000283ab) popup_toolbar_window

0xe6cd,	// (0x0002cd5e) list_single_graphic_2heading_pane_ParamLimits

0xe6cd,	// (0x0002cd5e) list_single_graphic_2heading_pane

0x4b82,	// (0x00023213) aid_size_cell_apps_grid_lsc_pane

0x4b94,	// (0x00023225) aid_size_cell_apps_grid_prt_pane

0x49d8,	// (0x00023069) bg_wml_button_pane_cp1_ParamLimits

0x49d8,	// (0x00023069) bg_wml_button_pane_cp1

0xa29f,	// (0x00028930) form_midp_field_text_pane_t1_ParamLimits

0x5900,	// (0x00023f91) input_focus_pane_cp050_ParamLimits

0x5a48,	// (0x000240d9) list_midp_form_text_pane_ParamLimits

0x5a25,	// (0x000240b6) input_focus_pane_cp051_ParamLimits

0x5a39,	// (0x000240ca) list_midp_choice_pane_ParamLimits

0xa1ed,	// (0x0002887e) list_single_2graphic_pane_cp3_ParamLimits

0xa1ed,	// (0x0002887e) list_single_2graphic_pane_cp3

0xa219,	// (0x000288aa) list_single_midp_graphic_pane_ParamLimits

0xa219,	// (0x000288aa) list_single_midp_graphic_pane

0x88a4,	// (0x00026f35) list_single_graphic_2heading_pane_g1_ParamLimits

0x88a4,	// (0x00026f35) list_single_graphic_2heading_pane_g1

0x88b0,	// (0x00026f41) list_single_graphic_2heading_pane_g4_ParamLimits

0x88b0,	// (0x00026f41) list_single_graphic_2heading_pane_g4

0x88bc,	// (0x00026f4d) list_single_graphic_2heading_pane_g5_ParamLimits

0x88bc,	// (0x00026f4d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0002de54) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0002de54) list_single_graphic_2heading_pane_g

0x88c8,	// (0x00026f59) list_single_graphic_2heading_pane_t1_ParamLimits

0x88c8,	// (0x00026f59) list_single_graphic_2heading_pane_t1

0x88dc,	// (0x00026f6d) list_single_graphic_2heading_pane_t2_ParamLimits

0x88dc,	// (0x00026f6d) list_single_graphic_2heading_pane_t2

0x88f8,	// (0x00026f89) list_single_graphic_2heading_pane_t3_ParamLimits

0x88f8,	// (0x00026f89) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0002de5b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0002de5b) list_single_graphic_2heading_pane_t

0x574e,	// (0x00023ddf) bg_popup_sub_pane_cp2

0x5778,	// (0x00023e09) grid_toobar_pane

0xa07f,	// (0x00028710) cell_toolbar_pane_ParamLimits

0xa07f,	// (0x00028710) cell_toolbar_pane

0x57b4,	// (0x00023e45) cell_toolbar_pane_g1_ParamLimits

0x57b4,	// (0x00023e45) cell_toolbar_pane_g1

0x57c8,	// (0x00023e59) cell_toolbar_pane_g2_ParamLimits

0x57c8,	// (0x00023e59) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0002de69) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0002de69) cell_toolbar_pane_g

0x57ea,	// (0x00023e7b) grid_highlight_pane_cp2_ParamLimits

0x57ea,	// (0x00023e7b) grid_highlight_pane_cp2

0x5804,	// (0x00023e95) toolbar_button_pane

0x5810,	// (0x00023ea1) toolbar_button_pane_g1

0x5820,	// (0x00023eb1) toolbar_button_pane_g2

0x5818,	// (0x00023ea9) toolbar_button_pane_g3

0x5830,	// (0x00023ec1) toolbar_button_pane_g4

0x5828,	// (0x00023eb9) toolbar_button_pane_g5

0x5838,	// (0x00023ec9) toolbar_button_pane_g6

0x5840,	// (0x00023ed1) toolbar_button_pane_g7

0x5850,	// (0x00023ee1) toolbar_button_pane_g8

0x5848,	// (0x00023ed9) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0002de6e) toolbar_button_pane_g

0xa0b7,	// (0x00028748) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa0b7,	// (0x00028748) list_single_2graphic_pane_g1_cp3

0xa0c3,	// (0x00028754) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa0c3,	// (0x00028754) list_single_2graphic_pane_g2_cp3

0xa0d4,	// (0x00028765) list_single_2graphic_pane_g3_cp3

0xa0dc,	// (0x0002876d) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa0dc,	// (0x0002876d) list_single_2graphic_pane_g4_cp3

0xa0e8,	// (0x00028779) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa0e8,	// (0x00028779) list_single_2graphic_pane_t1_cp3

0xa102,	// (0x00028793) list_single_midp_graphic_pane_g2_ParamLimits

0xa102,	// (0x00028793) list_single_midp_graphic_pane_g2

0x54da,	// (0x00023b6b) aid_zoom_text_primary

0xe59d,	// (0x0002cc2e) aid_zoom_text_secondary

0x5462,	// (0x00023af3) status_small_pane_g7_ParamLimits

0x5462,	// (0x00023af3) status_small_pane_g7

0x5485,	// (0x00023b16) status_small_pane_t1_ParamLimits

0x8d14,	// (0x000273a5) title_pane_g2

0x0003,

0xf56a,	// (0x0002dbfb) title_pane_g

0x8f6e,	// (0x000275ff) aid_size_cell_colour_1_pane_ParamLimits

0x8f6e,	// (0x000275ff) aid_size_cell_colour_1_pane

0x8f82,	// (0x00027613) aid_size_cell_colour_2_pane_ParamLimits

0x8f82,	// (0x00027613) aid_size_cell_colour_2_pane

0x8f96,	// (0x00027627) aid_size_cell_colour_3_pane_ParamLimits

0x8f96,	// (0x00027627) aid_size_cell_colour_3_pane

0x8faa,	// (0x0002763b) aid_size_cell_colour_4_pane_ParamLimits

0x8faa,	// (0x0002763b) aid_size_cell_colour_4_pane

0x9102,	// (0x00027793) title_pane_stacon_g1_ParamLimits

0x9102,	// (0x00027793) title_pane_stacon_g1

0x5de3,	// (0x00024474) popup_note_wait_window_g3_ParamLimits

0x5de3,	// (0x00024474) popup_note_wait_window_g3

0x5e59,	// (0x000244ea) popup_note_wait_window_t5_ParamLimits

0x5e59,	// (0x000244ea) popup_note_wait_window_t5

0x41de,	// (0x0002286f) main_feb_china_hwr_fs_writing_pane

0x9943,	// (0x00027fd4) popup_feb_china_hwr_fs_window_ParamLimits

0x9943,	// (0x00027fd4) popup_feb_china_hwr_fs_window

0xa124,	// (0x000287b5) aid_size_cell_hwr_fs_ParamLimits

0xa124,	// (0x000287b5) aid_size_cell_hwr_fs

0x5900,	// (0x00023f91) bg_popup_sub_pane_cp3_ParamLimits

0x5900,	// (0x00023f91) bg_popup_sub_pane_cp3

0xa139,	// (0x000287ca) grid_hwr_fs_pane_ParamLimits

0xa139,	// (0x000287ca) grid_hwr_fs_pane

0xa151,	// (0x000287e2) linegrid_hwr_fs_pane_ParamLimits

0xa151,	// (0x000287e2) linegrid_hwr_fs_pane

0xa161,	// (0x000287f2) cell_hwr_fs_pane_ParamLimits

0xa161,	// (0x000287f2) cell_hwr_fs_pane

0x590c,	// (0x00023f9d) linegrid_hwr_fs_pane_g1_ParamLimits

0x590c,	// (0x00023f9d) linegrid_hwr_fs_pane_g1

0xa183,	// (0x00028814) linegrid_hwr_fs_pane_g2_ParamLimits

0xa183,	// (0x00028814) linegrid_hwr_fs_pane_g2

0x5918,	// (0x00023fa9) linegrid_hwr_fs_pane_g3_ParamLimits

0x5918,	// (0x00023fa9) linegrid_hwr_fs_pane_g3

0xa195,	// (0x00028826) linegrid_hwr_fs_pane_g4_ParamLimits

0xa195,	// (0x00028826) linegrid_hwr_fs_pane_g4

0xa1af,	// (0x00028840) linegrid_hwr_fs_pane_g5_ParamLimits

0xa1af,	// (0x00028840) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0002de94) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0002de94) linegrid_hwr_fs_pane_g

0x5924,	// (0x00023fb5) cell_hwr_fs_pane_g1_ParamLimits

0x5924,	// (0x00023fb5) cell_hwr_fs_pane_g1

0x571c,	// (0x00023dad) cell_hwr_fs_pane_g2_ParamLimits

0x571c,	// (0x00023dad) cell_hwr_fs_pane_g2

0xa1c5,	// (0x00028856) cell_hwr_fs_pane_g3_ParamLimits

0xa1c5,	// (0x00028856) cell_hwr_fs_pane_g3

0xa1d2,	// (0x00028863) cell_hwr_fs_pane_g4_ParamLimits

0xa1d2,	// (0x00028863) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0002de9f) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0002de9f) cell_hwr_fs_pane_g

0xa1df,	// (0x00028870) cell_hwr_fs_pane_t1

0x41de,	// (0x0002286f) grid_highlight_pane_cp6

0x41de,	// (0x0002286f) main_idle_act2_pane

0x4987,	// (0x00023018) aid_inside_area_popup_secondary

0xa49f,	// (0x00028b30) aid_inside_area_window_primary_ParamLimits

0xa49f,	// (0x00028b30) aid_inside_area_window_primary

0x6be0,	// (0x00025271) ai2_news_ticker_pane

0x6be8,	// (0x00025279) aid_size_cell_ai1_link_ParamLimits

0x6be8,	// (0x00025279) aid_size_cell_ai1_link

0x6c02,	// (0x00025293) popup_ai2_data_window_ParamLimits

0x6c02,	// (0x00025293) popup_ai2_data_window

0x6c16,	// (0x000252a7) popup_ai2_link_window_ParamLimits

0x6c16,	// (0x000252a7) popup_ai2_link_window

0x5900,	// (0x00023f91) bg_popup_sub_pane_cp4_ParamLimits

0x5900,	// (0x00023f91) bg_popup_sub_pane_cp4

0x6c2a,	// (0x000252bb) grid_ai2_link_pane_ParamLimits

0x6c2a,	// (0x000252bb) grid_ai2_link_pane

0x6c41,	// (0x000252d2) popup_ai2_link_window_g1_ParamLimits

0x6c41,	// (0x000252d2) popup_ai2_link_window_g1

0x6c4d,	// (0x000252de) popup_ai2_link_window_g2_ParamLimits

0x6c4d,	// (0x000252de) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0002e06b) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0002e06b) popup_ai2_link_window_g

0x6c5c,	// (0x000252ed) ai2_mp_button_pane

0x6c64,	// (0x000252f5) ai2_mp_volume_pane

0x5a25,	// (0x000240b6) bg_popup_sub_pane_cp5_ParamLimits

0x5a25,	// (0x000240b6) bg_popup_sub_pane_cp5

0x6c6c,	// (0x000252fd) heading_ai2_gene_pane_ParamLimits

0x6c6c,	// (0x000252fd) heading_ai2_gene_pane

0x6c78,	// (0x00025309) list_ai2_gene_pane_ParamLimits

0x6c78,	// (0x00025309) list_ai2_gene_pane

0x6cc0,	// (0x00025351) cell_ai2_link_pane_ParamLimits

0x6cc0,	// (0x00025351) cell_ai2_link_pane

0x6cd6,	// (0x00025367) cell_ai2_link_pane_g1

0x41de,	// (0x0002286f) grid_highlight_pane_cp7

0xa9f5,	// (0x00029086) ai2_mp_volume_pane_g1

0x6daf,	// (0x00025440) ai2_mp_volume_pane_g2

0x6d1c,	// (0x000253ad) list_ai2_gene_pane_t1

0x6da7,	// (0x00025438) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0002e084) ai2_mp_volume_pane_g

0xa9fd,	// (0x0002908e) volume_small_pane_cp3

0x6db7,	// (0x00025448) aid_size_cell_ai2_button

0x6dbf,	// (0x00025450) grid_ai2_button_pane

0x6dc8,	// (0x00025459) cell_ai2_button_pane_ParamLimits

0x6dc8,	// (0x00025459) cell_ai2_button_pane

0x41d4,	// (0x00022865) cell_ai2_button_pane_g1

0x41de,	// (0x0002286f) grid_highlight_pane_cp8

0x6d67,	// (0x000253f8) ai2_gene_pane_t1_ParamLimits

0x6d67,	// (0x000253f8) ai2_gene_pane_t1

0x98df,	// (0x00027f70) aid_height_parent_landscape

0xa6eb,	// (0x00028d7c) aid_height_set_list

0x6379,	// (0x00024a0a) aid_size_parent

0x6a47,	// (0x000250d8) aid_size_cell_graphic_pane_ParamLimits

0x6c88,	// (0x00025319) popup_ai2_data_window_g1_ParamLimits

0x6c88,	// (0x00025319) popup_ai2_data_window_g1

0x6c94,	// (0x00025325) ai2_news_ticker_pane_g1

0x6c9c,	// (0x0002532d) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0002e070) ai2_news_ticker_pane_g

0x6ca4,	// (0x00025335) ai2_news_ticker_pane_t1

0x6cb2,	// (0x00025343) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0002e075) ai2_news_ticker_pane_t

0x6cdf,	// (0x00025370) heading_ai2_gene_pane_g1

0x6ce7,	// (0x00025378) heading_ai2_gene_pane_t1_ParamLimits

0x6ce7,	// (0x00025378) heading_ai2_gene_pane_t1

0x6cfc,	// (0x0002538d) list_highlight_pane_cp6

0x6d04,	// (0x00025395) ai2_gene_pane_ParamLimits

0x6d04,	// (0x00025395) ai2_gene_pane

0x6d2a,	// (0x000253bb) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0002e07a) list_ai2_gene_pane_t

0x6d38,	// (0x000253c9) list_highlight_pane_cp8_ParamLimits

0x6d38,	// (0x000253c9) list_highlight_pane_cp8

0x6d49,	// (0x000253da) ai2_gene_pane_g1_ParamLimits

0x6d49,	// (0x000253da) ai2_gene_pane_g1

0x6d5b,	// (0x000253ec) ai2_gene_pane_g2_ParamLimits

0x6d5b,	// (0x000253ec) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0002e07f) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0002e07f) ai2_gene_pane_g

0x4817,	// (0x00022ea8) scroll_pane_cp12

0x989e,	// (0x00027f2f) control_pane_t3_ParamLimits

0x989e,	// (0x00027f2f) control_pane_t3

0x5476,	// (0x00023b07) status_small_pane_g8_ParamLimits

0x5476,	// (0x00023b07) status_small_pane_g8

0x99cd,	// (0x0002805e) popup_find_window_ParamLimits

0x9bba,	// (0x0002824b) popup_note_image_window_ParamLimits

0xc59c,	// (0x0002ac2d) list_double2_graphic_pane_vc_g1_ParamLimits

0xc59c,	// (0x0002ac2d) list_double2_graphic_pane_vc_g1

0xc522,	// (0x0002abb3) list_double2_graphic_pane_vc_g2_ParamLimits

0xc522,	// (0x0002abb3) list_double2_graphic_pane_vc_g2

0xc52e,	// (0x0002abbf) list_double2_graphic_pane_vc_g3_ParamLimits

0xc52e,	// (0x0002abbf) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002de62) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002de62) list_double2_graphic_pane_vc_g

0xe5c9,	// (0x0002cc5a) list_double2_graphic_pane_vc_t1_ParamLimits

0xe5c9,	// (0x0002cc5a) list_double2_graphic_pane_vc_t1

0xc522,	// (0x0002abb3) list_single_heading_pane_vc_g1_ParamLimits

0xc522,	// (0x0002abb3) list_single_heading_pane_vc_g1

0xc52e,	// (0x0002abbf) list_single_heading_pane_vc_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_single_heading_pane_vc_g

0xe5df,	// (0x0002cc70) list_single_heading_pane_vc_t1_ParamLimits

0xe5df,	// (0x0002cc70) list_single_heading_pane_vc_t1

0xe5f5,	// (0x0002cc86) list_single_heading_pane_vc_t2_ParamLimits

0xe5f5,	// (0x0002cc86) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0002de83) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0002de83) list_single_heading_pane_vc_t

0x5858,	// (0x00023ee9) list_setting_number_pane_vc_g1_ParamLimits

0x5858,	// (0x00023ee9) list_setting_number_pane_vc_g1

0x5864,	// (0x00023ef5) list_setting_number_pane_vc_g2_ParamLimits

0x5864,	// (0x00023ef5) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002de88) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002de88) list_setting_number_pane_vc_g

0x5870,	// (0x00023f01) list_setting_number_pane_vc_t1_ParamLimits

0x5870,	// (0x00023f01) list_setting_number_pane_vc_t1

0x5884,	// (0x00023f15) list_setting_number_pane_vc_t2_ParamLimits

0x5884,	// (0x00023f15) list_setting_number_pane_vc_t2

0x58a0,	// (0x00023f31) list_setting_number_pane_vc_t3_ParamLimits

0x58a0,	// (0x00023f31) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0002de8d) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002de8d) list_setting_number_pane_vc_t

0x58c8,	// (0x00023f59) set_value_pane_vc_ParamLimits

0x58c8,	// (0x00023f59) set_value_pane_vc

0xe6cd,	// (0x0002cd5e) list_double2_graphic_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double2_graphic_pane_vc

0x69c4,	// (0x00025055) list_double2_large_graphic_pane_vc_ParamLimits

0x69c4,	// (0x00025055) list_double2_large_graphic_pane_vc

0xe6cd,	// (0x0002cd5e) list_double2_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double2_pane_vc

0xe6cd,	// (0x0002cd5e) list_double_graphic_heading_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double_graphic_heading_pane_vc

0xe6cd,	// (0x0002cd5e) list_double_graphic_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double_graphic_pane_vc

0xe6cd,	// (0x0002cd5e) list_double_heading_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double_heading_pane_vc

0x69c4,	// (0x00025055) list_double_large_graphic_pane_vc_ParamLimits

0x69c4,	// (0x00025055) list_double_large_graphic_pane_vc

0xe6cd,	// (0x0002cd5e) list_double_number_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double_number_pane_vc

0xe6cd,	// (0x0002cd5e) list_double_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double_pane_vc

0xe6cd,	// (0x0002cd5e) list_double_time_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_double_time_pane_vc

0xe6cd,	// (0x0002cd5e) list_setting_number_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_setting_number_pane_vc

0xe6cd,	// (0x0002cd5e) list_setting_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_setting_pane_vc

0xe6cd,	// (0x0002cd5e) list_single_graphic_heading_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_single_graphic_heading_pane_vc

0xe6cd,	// (0x0002cd5e) list_single_heading_pane_vc_ParamLimits

0xe6cd,	// (0x0002cd5e) list_single_heading_pane_vc

0xe6e1,	// (0x0002cd72) list_single_number_heading_pane_vc_ParamLimits

0xe6e1,	// (0x0002cd72) list_single_number_heading_pane_vc

0xc59c,	// (0x0002ac2d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc59c,	// (0x0002ac2d) list_double_graphic_heading_pane_vc_g1

0xc522,	// (0x0002abb3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc522,	// (0x0002abb3) list_double_graphic_heading_pane_vc_g2

0xc52e,	// (0x0002abbf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc52e,	// (0x0002abbf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002de62) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002de62) list_double_graphic_heading_pane_vc_g

0xe79e,	// (0x0002ce2f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe79e,	// (0x0002ce2f) list_double_graphic_heading_pane_vc_t1

0xe5df,	// (0x0002cc70) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe5df,	// (0x0002cc70) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0002e08b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0002e08b) list_double_graphic_heading_pane_vc_t

0x5858,	// (0x00023ee9) list_setting_pane_vc_g1_ParamLimits

0x5858,	// (0x00023ee9) list_setting_pane_vc_g1

0x5864,	// (0x00023ef5) list_setting_pane_vc_g2_ParamLimits

0x5864,	// (0x00023ef5) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002de88) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002de88) list_setting_pane_vc_g

0x6fbe,	// (0x0002564f) list_setting_pane_vc_t1_ParamLimits

0x6fbe,	// (0x0002564f) list_setting_pane_vc_t1

0x6fd2,	// (0x00025663) list_setting_pane_vc_t2_ParamLimits

0x6fd2,	// (0x00025663) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002e0ce) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002e0ce) list_setting_pane_vc_t

0x58c8,	// (0x00023f59) set_value_pane_cp_vc_ParamLimits

0x58c8,	// (0x00023f59) set_value_pane_cp_vc

0xc522,	// (0x0002abb3) list_single_number_heading_pane_vc_g1_ParamLimits

0xc522,	// (0x0002abb3) list_single_number_heading_pane_vc_g1

0xc52e,	// (0x0002abbf) list_single_number_heading_pane_vc_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_single_number_heading_pane_vc_g

0xe5df,	// (0x0002cc70) list_single_number_heading_pane_vc_t1_ParamLimits

0xe5df,	// (0x0002cc70) list_single_number_heading_pane_vc_t1

0xe7b2,	// (0x0002ce43) list_single_number_heading_pane_vc_t2_ParamLimits

0xe7b2,	// (0x0002ce43) list_single_number_heading_pane_vc_t2

0xc58a,	// (0x0002ac1b) list_single_number_heading_pane_vc_t3_ParamLimits

0xc58a,	// (0x0002ac1b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0002e0d3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0002e0d3) list_single_number_heading_pane_vc_t

0xc59c,	// (0x0002ac2d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc59c,	// (0x0002ac2d) list_single_graphic_heading_pane_vc_g1

0xc522,	// (0x0002abb3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc522,	// (0x0002abb3) list_single_graphic_heading_pane_vc_g4

0xc52e,	// (0x0002abbf) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc52e,	// (0x0002abbf) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0002de62) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002de62) list_single_graphic_heading_pane_vc_g

0xe5df,	// (0x0002cc70) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe5df,	// (0x0002cc70) list_single_graphic_heading_pane_vc_t1

0xe7c6,	// (0x0002ce57) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe7c6,	// (0x0002ce57) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0002e0da) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002e0da) list_single_graphic_heading_pane_vc_t

0xc522,	// (0x0002abb3) list_double2_pane_vc_g1_ParamLimits

0xc522,	// (0x0002abb3) list_double2_pane_vc_g1

0xc52e,	// (0x0002abbf) list_double2_pane_vc_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_double2_pane_vc_g

0xe695,	// (0x0002cd26) list_double2_pane_vc_t1_ParamLimits

0xe695,	// (0x0002cd26) list_double2_pane_vc_t1

0xe7da,	// (0x0002ce6b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe7da,	// (0x0002ce6b) list_double2_large_graphic_pane_vc_g1

0xe7e6,	// (0x0002ce77) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe7e6,	// (0x0002ce77) list_double2_large_graphic_pane_vc_g2

0xe7f2,	// (0x0002ce83) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe7f2,	// (0x0002ce83) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0002e0df) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002e0df) list_double2_large_graphic_pane_vc_g

0xe7fe,	// (0x0002ce8f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe7fe,	// (0x0002ce8f) list_double2_large_graphic_pane_vc_t1

0xe814,	// (0x0002cea5) list_double_time_pane_vc_g1_ParamLimits

0xe814,	// (0x0002cea5) list_double_time_pane_vc_g1

0xe820,	// (0x0002ceb1) list_double_time_pane_vc_g2_ParamLimits

0xe820,	// (0x0002ceb1) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0002e0e6) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0002e0e6) list_double_time_pane_vc_g

0xe82c,	// (0x0002cebd) list_double_time_pane_vc_t1_ParamLimits

0xe82c,	// (0x0002cebd) list_double_time_pane_vc_t1

0xe845,	// (0x0002ced6) list_double_time_pane_vc_t2_ParamLimits

0xe845,	// (0x0002ced6) list_double_time_pane_vc_t2

0xe885,	// (0x0002cf16) list_double_time_pane_vc_t3_ParamLimits

0xe885,	// (0x0002cf16) list_double_time_pane_vc_t3

0xe89d,	// (0x0002cf2e) list_double_time_pane_vc_t4_ParamLimits

0xe89d,	// (0x0002cf2e) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0002e0eb) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002e0eb) list_double_time_pane_vc_t

0xc522,	// (0x0002abb3) list_double_pane_vc_g1_ParamLimits

0xc522,	// (0x0002abb3) list_double_pane_vc_g1

0xc52e,	// (0x0002abbf) list_double_pane_vc_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_double_pane_vc_g

0xe8b1,	// (0x0002cf42) list_double_pane_vc_t1_ParamLimits

0xe8b1,	// (0x0002cf42) list_double_pane_vc_t1

0xe8c3,	// (0x0002cf54) list_double_pane_vc_t2_ParamLimits

0xe8c3,	// (0x0002cf54) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0002e0f4) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0002e0f4) list_double_pane_vc_t

0xc522,	// (0x0002abb3) list_double_number_pane_vc_g1_ParamLimits

0xc522,	// (0x0002abb3) list_double_number_pane_vc_g1

0xc52e,	// (0x0002abbf) list_double_number_pane_vc_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_double_number_pane_vc_g

0xe8db,	// (0x0002cf6c) list_double_number_pane_vc_t1_ParamLimits

0xe8db,	// (0x0002cf6c) list_double_number_pane_vc_t1

0xe8ef,	// (0x0002cf80) list_double_number_pane_vc_t2_ParamLimits

0xe8ef,	// (0x0002cf80) list_double_number_pane_vc_t2

0xe8c3,	// (0x0002cf54) list_double_number_pane_vc_t3_ParamLimits

0xe8c3,	// (0x0002cf54) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0002e0f9) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0002e0f9) list_double_number_pane_vc_t

0xe901,	// (0x0002cf92) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe901,	// (0x0002cf92) list_double_large_graphic_pane_vc_g1

0xe90d,	// (0x0002cf9e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe90d,	// (0x0002cf9e) list_double_large_graphic_pane_vc_g2

0xe7f2,	// (0x0002ce83) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe7f2,	// (0x0002ce83) list_double_large_graphic_pane_vc_g3

0xe91c,	// (0x0002cfad) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe91c,	// (0x0002cfad) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0002e100) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0002e100) list_double_large_graphic_pane_vc_g

0xe928,	// (0x0002cfb9) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe928,	// (0x0002cfb9) list_double_large_graphic_pane_vc_t1

0xe93a,	// (0x0002cfcb) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe93a,	// (0x0002cfcb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0002e109) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0002e109) list_double_large_graphic_pane_vc_t

0xc522,	// (0x0002abb3) list_double_heading_pane_vc_g1_ParamLimits

0xc522,	// (0x0002abb3) list_double_heading_pane_vc_g1

0xc52e,	// (0x0002abbf) list_double_heading_pane_vc_g2_ParamLimits

0xc52e,	// (0x0002abbf) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002dc75) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002dc75) list_double_heading_pane_vc_g

0xe953,	// (0x0002cfe4) list_double_heading_pane_vc_t1_ParamLimits

0xe953,	// (0x0002cfe4) list_double_heading_pane_vc_t1

0xe5df,	// (0x0002cc70) list_double_heading_pane_vc_t2_ParamLimits

0xe5df,	// (0x0002cc70) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0002e10e) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002e10e) list_double_heading_pane_vc_t

0xe967,	// (0x0002cff8) list_double_graphic_pane_vc_g1_ParamLimits

0xe967,	// (0x0002cff8) list_double_graphic_pane_vc_g1

0xe977,	// (0x0002d008) list_double_graphic_pane_vc_g2_ParamLimits

0xe977,	// (0x0002d008) list_double_graphic_pane_vc_g2

0xe986,	// (0x0002d017) list_double_graphic_pane_vc_g3_ParamLimits

0xe986,	// (0x0002d017) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0002e113) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0002e113) list_double_graphic_pane_vc_g

0xe992,	// (0x0002d023) list_double_graphic_pane_vc_t1_ParamLimits

0xe992,	// (0x0002d023) list_double_graphic_pane_vc_t1

0xe8c3,	// (0x0002cf54) list_double_graphic_pane_vc_t2_ParamLimits

0xe8c3,	// (0x0002cf54) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0002e11a) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0002e11a) list_double_graphic_pane_vc_t

0x8944,	// (0x00026fd5) aid_size_cell_fastswap

0x894c,	// (0x00026fdd) aid_size_cell_touch_ParamLimits

0x894c,	// (0x00026fdd) aid_size_cell_touch

0x8bb1,	// (0x00027242) popup_fast_swap_wide_window_ParamLimits

0x8bb1,	// (0x00027242) popup_fast_swap_wide_window

0x8ca7,	// (0x00027338) touch_pane_ParamLimits

0x8ca7,	// (0x00027338) touch_pane

0x486d,	// (0x00022efe) button_value_adjust_pane_cp2

0xc96c,	// (0x0002affd) button_value_adjust_pane_cp4

0xc98c,	// (0x0002b01d) form_field_data_pane_cp2

0xc9ab,	// (0x0002b03c) form_field_data_wide_pane_cp2

0x4bd0,	// (0x00023261) bg_scroll_pane_ParamLimits

0x92ea,	// (0x0002797b) scroll_handle_pane_ParamLimits

0x92fe,	// (0x0002798f) scroll_sc2_down_pane_ParamLimits

0x92fe,	// (0x0002798f) scroll_sc2_down_pane

0x4c01,	// (0x00023292) scroll_sc2_up_pane_ParamLimits

0x4c01,	// (0x00023292) scroll_sc2_up_pane

0xab8d,	// (0x0002921e) grid_wheel_folder_pane_g1_ParamLimits

0xab8d,	// (0x0002921e) grid_wheel_folder_pane_g1

0x9574,	// (0x00027c05) clock_nsta_pane_cp2_ParamLimits

0x9574,	// (0x00027c05) clock_nsta_pane_cp2

0x95fa,	// (0x00027c8b) listscroll_midp_pane_ParamLimits

0x9606,	// (0x00027c97) midp_canvas_pane

0x54ca,	// (0x00023b5b) nsta_clock_indic_pane

0x5502,	// (0x00023b93) listscroll_form_pane_vc

0x550a,	// (0x00023b9b) listscroll_set_pane_vc_ParamLimits

0x550a,	// (0x00023b9b) listscroll_set_pane_vc

0x9e2e,	// (0x000284bf) clock_nsta_pane

0x9e3b,	// (0x000284cc) indicator_nsta_pane

0x574e,	// (0x00023ddf) bg_popup_sub_pane_cp2_ParamLimits

0x5762,	// (0x00023df3) find_pane_cp2_ParamLimits

0x5762,	// (0x00023df3) find_pane_cp2

0x5778,	// (0x00023e09) grid_toobar_pane_ParamLimits

0x58d4,	// (0x00023f65) list_form_gen_pane_vc_ParamLimits

0x58d4,	// (0x00023f65) list_form_gen_pane_vc

0x58ea,	// (0x00023f7b) scroll_pane_cp8_vc_ParamLimits

0x58ea,	// (0x00023f7b) scroll_pane_cp8_vc

0x593a,	// (0x00023fcb) data_form_wide_pane_vc_ParamLimits

0x593a,	// (0x00023fcb) data_form_wide_pane_vc

0x5946,	// (0x00023fd7) form_field_data_wide_pane_vc_g1

0x594e,	// (0x00023fdf) form_field_data_wide_pane_vc_t1_ParamLimits

0x594e,	// (0x00023fdf) form_field_data_wide_pane_vc_t1

0x4881,	// (0x00022f12) input_focus_pane_cp6_vc_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_cp6_vc

0xa2de,	// (0x0002896f) list_midp_pane_ParamLimits

0xa2ea,	// (0x0002897b) scroll_pane_cp16_ParamLimits

0xa2ea,	// (0x0002897b) scroll_pane_cp16

0x5bbd,	// (0x0002424e) button_value_adjust_pane_ParamLimits

0x5bbd,	// (0x0002424e) button_value_adjust_pane

0xa6fc,	// (0x00028d8d) button_value_adjust_pane_cp6_ParamLimits

0xa6fc,	// (0x00028d8d) button_value_adjust_pane_cp6

0xa81e,	// (0x00028eaf) settings_code_pane_cp_ParamLimits

0xa81e,	// (0x00028eaf) settings_code_pane_cp

0x41d4,	// (0x00022865) cell_touch_pane_g1

0x41d4,	// (0x00022865) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0002ddab) cell_touch_pane_g

0xaa06,	// (0x00029097) cell_touch_pane_cp_ParamLimits

0xaa06,	// (0x00029097) cell_touch_pane_cp

0xaa16,	// (0x000290a7) cell_touch_pane_ParamLimits

0xaa16,	// (0x000290a7) cell_touch_pane

0x41d4,	// (0x00022865) scroll_sc2_down_pane_g1

0x41d4,	// (0x00022865) scroll_sc2_up_pane_g1

0x41de,	// (0x0002286f) bg_set_opt_pane_cp4_vc

0x6dda,	// (0x0002546b) list_set_graphic_pane_vc_g1_ParamLimits

0x6dda,	// (0x0002546b) list_set_graphic_pane_vc_g1

0x6de6,	// (0x00025477) list_set_graphic_pane_vc_g2_ParamLimits

0x6de6,	// (0x00025477) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0002e090) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0002e090) list_set_graphic_pane_vc_g

0x6df2,	// (0x00025483) text_primary_small_cp13_vc_ParamLimits

0x6df2,	// (0x00025483) text_primary_small_cp13_vc

0x6e0a,	// (0x0002549b) list_set_graphic_pane_vc_ParamLimits

0x6e0a,	// (0x0002549b) list_set_graphic_pane_vc

0x41de,	// (0x0002286f) input_focus_pane_cp2_vc

0x41d4,	// (0x00022865) setting_code_pane_vc_g1

0x6e1e,	// (0x000254af) setting_code_pane_vc_t1

0x6e2c,	// (0x000254bd) set_text_pane_vc_t1_ParamLimits

0x6e2c,	// (0x000254bd) set_text_pane_vc_t1

0x41de,	// (0x0002286f) input_focus_pane_cp1_vc

0x6e4b,	// (0x000254dc) list_set_text_pane_vc

0x41d4,	// (0x00022865) setting_text_pane_vc_g1

0x41de,	// (0x0002286f) bg_set_opt_pane_cp2_vc

0x6e55,	// (0x000254e6) setting_slider_graphic_pane_vc_g1

0x6e5d,	// (0x000254ee) setting_slider_graphic_pane_vc_t1

0x6e6b,	// (0x000254fc) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0002e095) setting_slider_graphic_pane_vc_t

0x6e79,	// (0x0002550a) slider_set_pane_cp_vc

0x6e81,	// (0x00025512) slider_set_pane_vc_g1

0x6e8a,	// (0x0002551b) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0002e09a) slider_set_pane_vc_g

0x48e8,	// (0x00022f79) set_opt_bg_pane_g1_copy1

0x48f0,	// (0x00022f81) set_opt_bg_pane_g2_copy1

0x6eb6,	// (0x00025547) set_opt_bg_pane_g3_copy1

0x4900,	// (0x00022f91) set_opt_bg_pane_g4_copy1

0x4908,	// (0x00022f99) set_opt_bg_pane_g5_copy1

0x4910,	// (0x00022fa1) set_opt_bg_pane_g6_copy1

0x6ebe,	// (0x0002554f) set_opt_bg_pane_g7_copy1

0x6ec8,	// (0x00025559) set_opt_bg_pane_g8_copy1

0x6ed0,	// (0x00025561) set_opt_bg_pane_g9_copy1

0x41de,	// (0x0002286f) bg_set_opt_pane_cp_vc

0x6ed8,	// (0x00025569) setting_slider_pane_vc_t1

0x6e5d,	// (0x000254ee) setting_slider_pane_vc_t2

0x6e6b,	// (0x000254fc) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0002e0a9) setting_slider_pane_vc_t

0x6e79,	// (0x0002550a) slider_set_pane_vc

0xa330,	// (0x000289c1) volume_set_pane_vc_g1

0xaa28,	// (0x000290b9) volume_set_pane_vc_g2

0xaa31,	// (0x000290c2) volume_set_pane_vc_g3

0xaa3a,	// (0x000290cb) volume_set_pane_vc_g4

0xaa43,	// (0x000290d4) volume_set_pane_vc_g5

0xaa4c,	// (0x000290dd) volume_set_pane_vc_g6

0xaa55,	// (0x000290e6) volume_set_pane_vc_g7

0xaa5e,	// (0x000290ef) volume_set_pane_vc_g8

0xaa67,	// (0x000290f8) volume_set_pane_vc_g9

0xaa70,	// (0x00029101) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0002e0b0) volume_set_pane_vc_g

0x6ee7,	// (0x00025578) volume_set_pane_vc

0x6eef,	// (0x00025580) button_value_adjust_pane_cp1_vc

0x6ef9,	// (0x0002558a) list_highlight_pane_cp2_vc

0x6f02,	// (0x00025593) list_set_pane_vc_ParamLimits

0x6f02,	// (0x00025593) list_set_pane_vc

0x6f54,	// (0x000255e5) main_pane_set_vc_t1_ParamLimits

0x6f54,	// (0x000255e5) main_pane_set_vc_t1

0x6f69,	// (0x000255fa) main_pane_set_vc_t2_ParamLimits

0x6f69,	// (0x000255fa) main_pane_set_vc_t2

0x6f7b,	// (0x0002560c) main_pane_set_vc_t3_ParamLimits

0x6f7b,	// (0x0002560c) main_pane_set_vc_t3

0x6f8d,	// (0x0002561e) main_pane_set_vc_t4_ParamLimits

0x6f8d,	// (0x0002561e) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0002e0c5) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0002e0c5) main_pane_set_vc_t

0x6f9f,	// (0x00025630) setting_code_pane_vc_ParamLimits

0x6f9f,	// (0x00025630) setting_code_pane_vc

0x6fae,	// (0x0002563f) setting_slider_graphic_pane_vc

0x6fae,	// (0x0002563f) setting_slider_pane_vc

0x6fae,	// (0x0002563f) setting_text_pane_vc

0x6fae,	// (0x0002563f) setting_volume_pane_vc

0x6fb6,	// (0x00025647) scroll_pane_cp121_vc

0x485b,	// (0x00022eec) set_content_pane_vc

0x6ff4,	// (0x00025685) button_value_adjust_pane_g1

0x6ffd,	// (0x0002568e) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0002e11f) button_value_adjust_pane_g

0x7006,	// (0x00025697) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7006,	// (0x00025697) form_field_slider_wide_pane_vc_t1

0x701a,	// (0x000256ab) form_field_slider_wide_pane_vc_t2_ParamLimits

0x701a,	// (0x000256ab) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0002e124) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0002e124) form_field_slider_wide_pane_vc_t

0x422c,	// (0x000228bd) input_focus_pane_cp10_vc_ParamLimits

0x422c,	// (0x000228bd) input_focus_pane_cp10_vc

0x702c,	// (0x000256bd) slider_cont_pane_cp1_vc_ParamLimits

0x702c,	// (0x000256bd) slider_cont_pane_cp1_vc

0x6e81,	// (0x00025512) slider_form_pane_g1_cp2

0x6e8a,	// (0x0002551b) slider_form_pane_g2_cp2

0x7045,	// (0x000256d6) form_field_slider_pane_vc_t3

0x7053,	// (0x000256e4) form_field_slider_pane_vc_t4

0x7061,	// (0x000256f2) slider_form_pane_vc_ParamLimits

0x7061,	// (0x000256f2) slider_form_pane_vc

0x706e,	// (0x000256ff) form_field_slider_pane_vc_t1_ParamLimits

0x706e,	// (0x000256ff) form_field_slider_pane_vc_t1

0x701a,	// (0x000256ab) form_field_slider_pane_vc_t2_ParamLimits

0x701a,	// (0x000256ab) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002e134) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002e134) form_field_slider_pane_vc_t

0x422c,	// (0x000228bd) input_focus_pane_cp9_vc_ParamLimits

0x422c,	// (0x000228bd) input_focus_pane_cp9_vc

0x708a,	// (0x0002571b) slider_cont_pane_vc_ParamLimits

0x708a,	// (0x0002571b) slider_cont_pane_vc

0x709c,	// (0x0002572d) list_form_graphic_pane_cp_vc_ParamLimits

0x709c,	// (0x0002572d) list_form_graphic_pane_cp_vc

0x5946,	// (0x00023fd7) form_field_popup_wide_pane_vc_g1

0x70b1,	// (0x00025742) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70b1,	// (0x00025742) form_field_popup_wide_pane_vc_t1

0x4881,	// (0x00022f12) input_focus_pane_cp8_vc_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_cp8_vc

0x70c8,	// (0x00025759) list_form_wide_pane_vc_ParamLimits

0x70c8,	// (0x00025759) list_form_wide_pane_vc

0x70d4,	// (0x00025765) list_form_graphic_pane_vc_g1

0x70dc,	// (0x0002576d) list_form_graphic_pane_vc_t1_ParamLimits

0x70dc,	// (0x0002576d) list_form_graphic_pane_vc_t1

0x423a,	// (0x000228cb) list_highlight_pane_cp5_vc_ParamLimits

0x423a,	// (0x000228cb) list_highlight_pane_cp5_vc

0x70f8,	// (0x00025789) list_form_graphic_pane_vc_ParamLimits

0x70f8,	// (0x00025789) list_form_graphic_pane_vc

0x5946,	// (0x00023fd7) form_field_popup_pane_vc_g1

0x710e,	// (0x0002579f) form_field_popup_pane_vc_t1_ParamLimits

0x710e,	// (0x0002579f) form_field_popup_pane_vc_t1

0x4881,	// (0x00022f12) input_focus_pane_cp7_vc_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_cp7_vc

0x7125,	// (0x000257b6) list_form_pane_vc_ParamLimits

0x7125,	// (0x000257b6) list_form_pane_vc

0x7131,	// (0x000257c2) data_form_pane_vc_t1_ParamLimits

0x7131,	// (0x000257c2) data_form_pane_vc_t1

0x48e8,	// (0x00022f79) input_focus_pane_vc_g1

0x48f0,	// (0x00022f81) input_focus_pane_vc_g2

0x48f8,	// (0x00022f89) input_focus_pane_vc_g3

0x4900,	// (0x00022f91) input_focus_pane_vc_g4

0x4908,	// (0x00022f99) input_focus_pane_vc_g5

0x4910,	// (0x00022fa1) input_focus_pane_vc_g6

0x4918,	// (0x00022fa9) input_focus_pane_vc_g7

0x4920,	// (0x00022fb1) input_focus_pane_vc_g8

0x4928,	// (0x00022fb9) input_focus_pane_vc_g9

0x41d4,	// (0x00022865) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0002dd34) input_focus_pane_vc_g

0x593a,	// (0x00023fcb) data_form_pane_vc_ParamLimits

0x593a,	// (0x00023fcb) data_form_pane_vc

0x5946,	// (0x00023fd7) form_field_data_pane_vc_g1

0x714c,	// (0x000257dd) form_field_data_pane_vc_t1_ParamLimits

0x714c,	// (0x000257dd) form_field_data_pane_vc_t1

0x4881,	// (0x00022f12) input_focus_pane_vc_ParamLimits

0x4881,	// (0x00022f12) input_focus_pane_vc

0x7166,	// (0x000257f7) button_value_adjust_pane_cp3_vc

0x716e,	// (0x000257ff) button_value_adjust_pane_cp5_vc

0x7176,	// (0x00025807) form_field_data_pane_vc_ParamLimits

0x7176,	// (0x00025807) form_field_data_pane_vc

0x718d,	// (0x0002581e) form_field_data_pane_vc_cp2

0x7195,	// (0x00025826) form_field_data_wide_pane_vc_ParamLimits

0x7195,	// (0x00025826) form_field_data_wide_pane_vc

0x71ab,	// (0x0002583c) form_field_data_wide_pane_vc_cp2

0x71b3,	// (0x00025844) form_field_popup_pane_vc_ParamLimits

0x71b3,	// (0x00025844) form_field_popup_pane_vc

0x71ca,	// (0x0002585b) form_field_popup_wide_pane_vc_ParamLimits

0x71ca,	// (0x0002585b) form_field_popup_wide_pane_vc

0x71e0,	// (0x00025871) form_field_slider_pane_vc_ParamLimits

0x71e0,	// (0x00025871) form_field_slider_pane_vc

0x71f3,	// (0x00025884) form_field_slider_wide_pane_vc_ParamLimits

0x71f3,	// (0x00025884) form_field_slider_wide_pane_vc

0xaa79,	// (0x0002910a) grid_touch_1_pane_ParamLimits

0xaa79,	// (0x0002910a) grid_touch_1_pane

0xaa85,	// (0x00029116) grid_touch_2_pane_ParamLimits

0xaa85,	// (0x00029116) grid_touch_2_pane

0x54bc,	// (0x00023b4d) touch_pane_g1_ParamLimits

0x54bc,	// (0x00023b4d) touch_pane_g1

0x7206,	// (0x00025897) cell_app_pane_cp_wide_ParamLimits

0x7206,	// (0x00025897) cell_app_pane_cp_wide

0x7217,	// (0x000258a8) grid_popup_fast_wide_pane_ParamLimits

0x7217,	// (0x000258a8) grid_popup_fast_wide_pane

0x722b,	// (0x000258bc) scroll_pane_cp19_ParamLimits

0x722b,	// (0x000258bc) scroll_pane_cp19

0x41de,	// (0x0002286f) bg_popup_window_pane_cp20

0x723f,	// (0x000258d0) listscroll_popup_fast_wide_pane

0x423a,	// (0x000228cb) grid_indicator_nsta_pane

0x7247,	// (0x000258d8) clock_nsta_pane_g1

0x7250,	// (0x000258e1) clock_nsta_pane_t1

0xaa9d,	// (0x0002912e) cell_indicator_nsta_pane_ParamLimits

0xaa9d,	// (0x0002912e) cell_indicator_nsta_pane

0x726c,	// (0x000258fd) cell_indicator_nsta_pane_g1

0xaad5,	// (0x00029166) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0002e13e) cell_indicator_nsta_pane_g

0x727a,	// (0x0002590b) clock_nsta_pane_cp

0x7282,	// (0x00025913) indicator_nsta_pane_cp

0x728b,	// (0x0002591c) nsta_clock_indic_pane_g1

0x4276,	// (0x00022907) grid_indicator_pane

0x4cf3,	// (0x00023384) scroll_pane_cp29

0x94c3,	// (0x00027b54) indicator_nsta_pane_cp2_ParamLimits

0x94c3,	// (0x00027b54) indicator_nsta_pane_cp2

0x423a,	// (0x000228cb) main_apps_wheel_pane

0x5a62,	// (0x000240f3) form_midp_field_text_pane_ParamLimits

0x5b8f,	// (0x00024220) scroll_bar_cp050_ParamLimits

0x72f4,	// (0x00025985) cell_indicator_pane_ParamLimits

0x72f4,	// (0x00025985) cell_indicator_pane

0x7311,	// (0x000259a2) cell_indicator_pane_g1

0xaaeb,	// (0x0002917c) grid_wheel_folder_pane_ParamLimits

0xaaeb,	// (0x0002917c) grid_wheel_folder_pane

0xab01,	// (0x00029192) list_wheel_apps_pane_ParamLimits

0xab01,	// (0x00029192) list_wheel_apps_pane

0xab12,	// (0x000291a3) main_apps_wheel_pane_g1_ParamLimits

0xab12,	// (0x000291a3) main_apps_wheel_pane_g1

0xab26,	// (0x000291b7) main_apps_wheel_pane_g2_ParamLimits

0xab26,	// (0x000291b7) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0002e15a) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0002e15a) main_apps_wheel_pane_g

0xab3e,	// (0x000291cf) main_apps_wheel_pane_t1_ParamLimits

0xab3e,	// (0x000291cf) main_apps_wheel_pane_t1

0xab61,	// (0x000291f2) list_wheel_apps_pane_g1

0xab69,	// (0x000291fa) list_wheel_apps_pane_g2

0xab71,	// (0x00029202) list_wheel_apps_pane_g3

0xab79,	// (0x0002920a) list_wheel_apps_pane_g4

0xab83,	// (0x00029214) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0002e15f) list_wheel_apps_pane_g

0x5146,	// (0x000237d7) navi_icon_text_pane

0x9d72,	// (0x00028403) aid_fill_nsta

0xaba6,	// (0x00029237) navi_icon_text_pane_g1

0xabb5,	// (0x00029246) navi_icon_text_pane_t1

0x4fe2,	// (0x00023673) list_set_graphic_pane_t1_ParamLimits

0x4fe2,	// (0x00023673) list_set_graphic_pane_t1

0x6297,	// (0x00024928) popup_midp_note_alarm_window_t6_ParamLimits

0x6297,	// (0x00024928) popup_midp_note_alarm_window_t6

0x62a9,	// (0x0002493a) popup_midp_note_alarm_window_t7_ParamLimits

0x62a9,	// (0x0002493a) popup_midp_note_alarm_window_t7

0x62bb,	// (0x0002494c) popup_midp_note_alarm_window_t8_ParamLimits

0x62bb,	// (0x0002494c) popup_midp_note_alarm_window_t8

0x62cd,	// (0x0002495e) popup_midp_note_alarm_window_t9_ParamLimits

0x62cd,	// (0x0002495e) popup_midp_note_alarm_window_t9

0x62df,	// (0x00024970) popup_midp_note_alarm_window_t10_ParamLimits

0x62df,	// (0x00024970) popup_midp_note_alarm_window_t10

0x62f1,	// (0x00024982) popup_midp_note_alarm_window_t11_ParamLimits

0x62f1,	// (0x00024982) popup_midp_note_alarm_window_t11

0x6303,	// (0x00024994) scroll_pane_cp17_ParamLimits

0x6303,	// (0x00024994) scroll_pane_cp17

0xa330,	// (0x000289c1) volume_small_pane_cp_g1

0xabca,	// (0x0002925b) volume_small_pane_cp_g2

0xabd3,	// (0x00029264) volume_small_pane_cp_g3

0xabdc,	// (0x0002926d) volume_small_pane_cp_g4

0xabe5,	// (0x00029276) volume_small_pane_cp_g5

0xabee,	// (0x0002927f) volume_small_pane_cp_g6

0xabf7,	// (0x00029288) volume_small_pane_cp_g7

0xac00,	// (0x00029291) volume_small_pane_cp_g8

0xac09,	// (0x0002929a) volume_small_pane_cp_g9

0xac12,	// (0x000292a3) volume_small_pane_cp_g10

0x52f2,	// (0x00023983) midp_ticker_pane_g1_ParamLimits

0x52fe,	// (0x0002398f) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0002ddfc) midp_ticker_pane_g_ParamLimits

0x96af,	// (0x00027d40) midp_ticker_pane_t1_ParamLimits

0x9d88,	// (0x00028419) aid_fill_nsta_2

0x5b7b,	// (0x0002420c) list_form2_midp_pane

0x69a2,	// (0x00025033) midp_editing_number_pane_ParamLimits

0x69b1,	// (0x00025042) midp_ticker_pane_ParamLimits

0x731b,	// (0x000259ac) form2_midp_field_pane

0x7323,	// (0x000259b4) scroll_pane_cp51

0x7343,	// (0x000259d4) form2_midp_button_pane_ParamLimits

0x7343,	// (0x000259d4) form2_midp_button_pane

0x7355,	// (0x000259e6) form2_midp_content_pane_ParamLimits

0x7355,	// (0x000259e6) form2_midp_content_pane

0x736f,	// (0x00025a00) form2_midp_field_choice_group_pane

0x7377,	// (0x00025a08) form2_midp_field_pane_g1

0x737f,	// (0x00025a10) form2_midp_field_pane_g2

0x7387,	// (0x00025a18) form2_midp_field_pane_g3

0x738f,	// (0x00025a20) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0002e184) form2_midp_field_pane_g

0x7397,	// (0x00025a28) form2_midp_gauge_slider_pane

0x739f,	// (0x00025a30) form2_midp_gauge_wait_pane

0x73a7,	// (0x00025a38) form2_midp_image_pane_ParamLimits

0x73a7,	// (0x00025a38) form2_midp_image_pane

0x73c2,	// (0x00025a53) form2_midp_label_pane_ParamLimits

0x73c2,	// (0x00025a53) form2_midp_label_pane

0xac37,	// (0x000292c8) form2_midp_label_pane_cp_ParamLimits

0xac37,	// (0x000292c8) form2_midp_label_pane_cp

0x73db,	// (0x00025a6c) form2_midp_string_pane_ParamLimits

0x73db,	// (0x00025a6c) form2_midp_string_pane

0xe9a4,	// (0x0002d035) form2_midp_text_pane_ParamLimits

0xe9a4,	// (0x0002d035) form2_midp_text_pane

0x73ed,	// (0x00025a7e) form2_midp_time_pane

0x73fd,	// (0x00025a8e) input_focus_pane_cp51_ParamLimits

0x73fd,	// (0x00025a8e) input_focus_pane_cp51

0x7415,	// (0x00025aa6) form2_midp_label_pane_t1_ParamLimits

0x7415,	// (0x00025aa6) form2_midp_label_pane_t1

0xe9bd,	// (0x0002d04e) form2_mdip_text_pane_t1_ParamLimits

0xe9bd,	// (0x0002d04e) form2_mdip_text_pane_t1

0xe9da,	// (0x0002d06b) form2_midp_time_pane_t1

0x745d,	// (0x00025aee) form2_midp_gauge_slider_pane_t1

0xac58,	// (0x000292e9) form2_midp_gauge_slider_pane_t2

0xac6a,	// (0x000292fb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0002e18d) form2_midp_gauge_slider_pane_t

0x746f,	// (0x00025b00) form2_midp_slider_pane

0x747b,	// (0x00025b0c) form2_midp_gauge_wait_pane_t1

0x7489,	// (0x00025b1a) form2_midp_wait_pane_ParamLimits

0x7489,	// (0x00025b1a) form2_midp_wait_pane

0xac7c,	// (0x0002930d) list_single_2graphic_pane_cp4_ParamLimits

0xac7c,	// (0x0002930d) list_single_2graphic_pane_cp4

0xa219,	// (0x000288aa) list_single_midp_graphic_pane_cp_ParamLimits

0xa219,	// (0x000288aa) list_single_midp_graphic_pane_cp

0x41de,	// (0x0002286f) list_highlight_pane_cp20

0x74b4,	// (0x00025b45) list_single_2graphic_pane_g1_cp4

0x6cdf,	// (0x00025370) list_single_2graphic_pane_g2_cp4

0x74bc,	// (0x00025b4d) list_single_2graphic_pane_t1_cp4

0x423a,	// (0x000228cb) list_highlight_pane_cp21

0x74cb,	// (0x00025b5c) list_single_midp_graphic_pane_g4_cp

0x74da,	// (0x00025b6b) list_single_midp_graphic_pane_t1_cp

0xacab,	// (0x0002933c) form2_mdip_string_pane_t1_ParamLimits

0xacab,	// (0x0002933c) form2_mdip_string_pane_t1

0x41de,	// (0x0002286f) bg_wml_button_pane_cp2

0x41d4,	// (0x00022865) form2_midp_image_pane_g1

0xc76d,	// (0x0002adfe) list_double_large_graphic_pane_g5_ParamLimits

0xc76d,	// (0x0002adfe) list_double_large_graphic_pane_g5

0x95fa,	// (0x00027c8b) midp_form_pane_ParamLimits

0x423a,	// (0x000228cb) main_apps_wheel_pane_ParamLimits

0x9be0,	// (0x00028271) popup_preview_window_ParamLimits

0x9be0,	// (0x00028271) popup_preview_window

0x55ef,	// (0x00023c80) popup_touch_info_window_ParamLimits

0x55ef,	// (0x00023c80) popup_touch_info_window

0x560d,	// (0x00023c9e) popup_touch_menu_window_ParamLimits

0x560d,	// (0x00023c9e) popup_touch_menu_window

0x41ca,	// (0x0002285b) bg_popup_sub_pane_cp6

0x74ef,	// (0x00025b80) list_touch_menu_pane

0x74f7,	// (0x00025b88) list_single_touch_menu_pane_ParamLimits

0x74f7,	// (0x00025b88) list_single_touch_menu_pane

0x750c,	// (0x00025b9d) list_single_touch_menu_pane_t1

0x423a,	// (0x000228cb) bg_popup_sub_pane_cp7_ParamLimits

0x423a,	// (0x000228cb) bg_popup_sub_pane_cp7

0x751a,	// (0x00025bab) heading_sub_pane

0x7522,	// (0x00025bb3) list_touch_info_pane_ParamLimits

0x7522,	// (0x00025bb3) list_touch_info_pane

0x7531,	// (0x00025bc2) list_single_touch_info_pane_ParamLimits

0x7531,	// (0x00025bc2) list_single_touch_info_pane

0x7543,	// (0x00025bd4) list_single_touch_info_pane_t1

0x7551,	// (0x00025be2) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0002e19b) list_single_touch_info_pane_t

0x52c8,	// (0x00023959) bg_popup_heading_pane_cp

0x755f,	// (0x00025bf0) heading_sub_pane_t1

0x5900,	// (0x00023f91) bg_popup_preview_window_pane_cp_ParamLimits

0x5900,	// (0x00023f91) bg_popup_preview_window_pane_cp

0x751a,	// (0x00025bab) heading_preview_pane

0x7522,	// (0x00025bb3) list_preview_pane_ParamLimits

0x7522,	// (0x00025bb3) list_preview_pane

0x756d,	// (0x00025bfe) popup_preview_window_g1

0x7531,	// (0x00025bc2) list_single_preview_pane_ParamLimits

0x7531,	// (0x00025bc2) list_single_preview_pane

0x7575,	// (0x00025c06) list_single_preview_pane_g1

0x757d,	// (0x00025c0e) list_single_preview_pane_t1

0x7543,	// (0x00025bd4) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0002e1a0) list_single_preview_pane_t

0x758b,	// (0x00025c1c) bg_popup_heading_pane_cp2_ParamLimits

0x758b,	// (0x00025c1c) bg_popup_heading_pane_cp2

0x75a1,	// (0x00025c32) heading_preview_pane_g1

0x75a9,	// (0x00025c3a) heading_preview_pane_t1_ParamLimits

0x75a9,	// (0x00025c3a) heading_preview_pane_t1

0x428d,	// (0x0002291e) soft_indicator_pane_t1_ParamLimits

0x47f4,	// (0x00022e85) scroll_pane_ParamLimits

0x4bf8,	// (0x00023289) scroll_sc2_left_pane

0x4bef,	// (0x00023280) scroll_sc2_right_pane

0x4c17,	// (0x000232a8) scroll_bg_pane_g1_ParamLimits

0x4c2c,	// (0x000232bd) scroll_bg_pane_g2_ParamLimits

0x4c44,	// (0x000232d5) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0002dd8b) scroll_bg_pane_g_ParamLimits

0x4c17,	// (0x000232a8) scroll_handle_pane_g1_ParamLimits

0x4c66,	// (0x000232f7) scroll_handle_pane_g2_ParamLimits

0x4c44,	// (0x000232d5) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0002dd92) scroll_handle_pane_g_ParamLimits

0x552a,	// (0x00023bbb) popup_choice_list_window_ParamLimits

0x552a,	// (0x00023bbb) popup_choice_list_window

0x575a,	// (0x00023deb) choice_list_pane

0x57dc,	// (0x00023e6d) cell_toolbar_pane_t1

0x5804,	// (0x00023e95) toolbar_button_pane_ParamLimits

0x670b,	// (0x00024d9c) ai_gene_pane_1_t2_ParamLimits

0x670b,	// (0x00024d9c) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0002dfaa) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0002dfaa) ai_gene_pane_1_t

0x75c6,	// (0x00025c57) scroll_sc2_left_pane_g1

0x75c6,	// (0x00025c57) scroll_sc2_right_pane_g1

0x49d8,	// (0x00023069) bg_popup_sub_pane_cp10

0x75d0,	// (0x00025c61) list_choice_list_pane

0x75e7,	// (0x00025c78) list_single_choice_list_pane_ParamLimits

0x75e7,	// (0x00025c78) list_single_choice_list_pane

0x75fb,	// (0x00025c8c) list_single_choice_list_pane_g1

0x7603,	// (0x00025c94) list_single_choice_list_pane_t1_ParamLimits

0x7603,	// (0x00025c94) list_single_choice_list_pane_t1

0x7618,	// (0x00025ca9) choice_list_pane_g1

0x7620,	// (0x00025cb1) choice_list_pane_t1

0x41ca,	// (0x0002285b) input_focus_pane_cp11

0x4b4d,	// (0x000231de) title_pane_stacon_g2_ParamLimits

0x4b4d,	// (0x000231de) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0002dd71) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002dd71) title_pane_stacon_g

0x52c8,	// (0x00023959) cursor_press_pane

0x9985,	// (0x00028016) popup_fep_hwr_window_ParamLimits

0x9985,	// (0x00028016) popup_fep_hwr_window

0x557e,	// (0x00023c0f) popup_fep_vkb_window_ParamLimits

0x557e,	// (0x00023c0f) popup_fep_vkb_window

0x762e,	// (0x00025cbf) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0002e1c9) fep_vkb_side_pane_g_ParamLimits

0xae1e,	// (0x000294af) fep_hwr_candidate_pane_ParamLimits

0xae1e,	// (0x000294af) fep_hwr_candidate_pane

0xae48,	// (0x000294d9) fep_hwr_side_pane_ParamLimits

0xae48,	// (0x000294d9) fep_hwr_side_pane

0xae68,	// (0x000294f9) fep_hwr_top_pane_ParamLimits

0xae68,	// (0x000294f9) fep_hwr_top_pane

0xae80,	// (0x00029511) fep_hwr_write_pane_ParamLimits

0xae80,	// (0x00029511) fep_hwr_write_pane

0xfb38,	// (0x0002e1c9) fep_vkb_side_pane_g

0x7648,	// (0x00025cd9) fep_hwr_top_pane_g1

0x7636,	// (0x00025cc7) fep_hwr_top_pane_g2

0xaeba,	// (0x0002954b) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0002e1a5) fep_hwr_top_pane_g

0xaecf,	// (0x00029560) fep_hwr_top_text_pane

0x4db9,	// (0x0002344a) fep_hwr_top_text_pane_g1

0x767e,	// (0x00025d0f) fep_hwr_top_text_pane_t1

0xafc5,	// (0x00029656) fep_hwr_candidate_pane_g1

0x788b,	// (0x00025f1c) fep_vkb_keypad_pane_g3_ParamLimits

0x788b,	// (0x00025f1c) fep_vkb_keypad_pane_g3

0x78b3,	// (0x00025f44) fep_vkb_keypad_pane_g4_ParamLimits

0x78b3,	// (0x00025f44) fep_vkb_keypad_pane_g4

0x7922,	// (0x00025fb3) fep_vkb_bottom_pane_g2_ParamLimits

0x7922,	// (0x00025fb3) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0002e1d0) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0002e1d0) fep_vkb_bottom_pane_g

0x75c6,	// (0x00025c57) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0002e1da) cell_vkb_side_pane_g

0x7966,	// (0x00025ff7) cell_vkb_side_pane_t1

0x7974,	// (0x00026005) cell_vkb_side_pane_t1_copy1

0x75c6,	// (0x00025c57) bg_fep_vkb_candidate_pane_g2

0x7a50,	// (0x000260e1) cell_vkb_candidate_pane_ParamLimits

0x768c,	// (0x00025d1d) aid_size_cell_vkb_ParamLimits

0x768c,	// (0x00025d1d) aid_size_cell_vkb

0x7a50,	// (0x000260e1) cell_vkb_candidate_pane

0xb0d6,	// (0x00029767) bg_popup_fep_shadow_pane_g1

0x7708,	// (0x00025d99) fep_vkb_bottom_pane_ParamLimits

0x7708,	// (0x00025d99) fep_vkb_bottom_pane

0x7745,	// (0x00025dd6) fep_vkb_candidate_pane_ParamLimits

0x7745,	// (0x00025dd6) fep_vkb_candidate_pane

0x7761,	// (0x00025df2) fep_vkb_keypad_pane_ParamLimits

0x7761,	// (0x00025df2) fep_vkb_keypad_pane

0x77a7,	// (0x00025e38) fep_vkb_side_pane_ParamLimits

0x77a7,	// (0x00025e38) fep_vkb_side_pane

0x77e3,	// (0x00025e74) fep_vkb_top_pane_ParamLimits

0x77e3,	// (0x00025e74) fep_vkb_top_pane

0x781f,	// (0x00025eb0) fep_vkb_top_pane_g1_ParamLimits

0x781f,	// (0x00025eb0) fep_vkb_top_pane_g1

0x782e,	// (0x00025ebf) fep_vkb_top_pane_g2_ParamLimits

0x782e,	// (0x00025ebf) fep_vkb_top_pane_g2

0x783d,	// (0x00025ece) fep_vkb_top_pane_g3_ParamLimits

0x783d,	// (0x00025ece) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0002e1c0) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0002e1c0) fep_vkb_top_pane_g

0x785b,	// (0x00025eec) fep_vkb_top_text_pane_ParamLimits

0x785b,	// (0x00025eec) fep_vkb_top_text_pane

0xaffe,	// (0x0002968f) fep_vkb_side_pane_g1_ParamLimits

0xaffe,	// (0x0002968f) fep_vkb_side_pane_g1

0x787a,	// (0x00025f0b) grid_vkb_side_pane_ParamLimits

0x787a,	// (0x00025f0b) grid_vkb_side_pane

0xb0de,	// (0x0002976f) bg_popup_fep_shadow_pane_g2

0xb0e7,	// (0x00029778) bg_popup_fep_shadow_pane_g3

0xb0ef,	// (0x00029780) bg_popup_fep_shadow_pane_g4

0xb0f8,	// (0x00029789) bg_popup_fep_shadow_pane_g5

0xb102,	// (0x00029793) bg_popup_fep_shadow_pane_g6

0xb10a,	// (0x0002979b) bg_popup_fep_shadow_pane_g7

0x4900,	// (0x00022f91) bg_popup_fep_shadow_pane_g8

0x78d1,	// (0x00025f62) grid_vkb_keypad_number_pane_ParamLimits

0x78d1,	// (0x00025f62) grid_vkb_keypad_number_pane

0x78e1,	// (0x00025f72) grid_vkb_keypad_pane_ParamLimits

0x78e1,	// (0x00025f72) grid_vkb_keypad_pane

0x7907,	// (0x00025f98) fep_vkb_bottom_pane_g1_ParamLimits

0x7907,	// (0x00025f98) fep_vkb_bottom_pane_g1

0x7930,	// (0x00025fc1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7930,	// (0x00025fc1) grid_vkb_keypad_bottom_left_pane

0x7945,	// (0x00025fd6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7945,	// (0x00025fd6) grid_vkb_keypad_bottom_right_pane

0x795a,	// (0x00025feb) fep_vkb_top_text_pane_g1

0xb048,	// (0x000296d9) fep_vkb_top_text_pane_t1

0xb05d,	// (0x000296ee) cell_vkb_side_pane_ParamLimits

0xb05d,	// (0x000296ee) cell_vkb_side_pane

0x75c6,	// (0x00025c57) cell_vkb_side_pane_g1

0x7982,	// (0x00026013) cell_vkb_keypad_pane_ParamLimits

0x7982,	// (0x00026013) cell_vkb_keypad_pane

0x79fd,	// (0x0002608e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0002e1ed) bg_popup_fep_shadow_pane_g

0xb11c,	// (0x000297ad) cell_hwr_side_pane_g1

0xb11c,	// (0x000297ad) cell_hwr_side_pane_g2

0x7a07,	// (0x00026098) cell_vkb_keypad_pane_t1

0xb080,	// (0x00029711) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb080,	// (0x00029711) cell_vkb_keypad_bottom_left_pane

0xb09d,	// (0x0002972e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb09d,	// (0x0002972e) cell_vkb_keypad_bottom_right_pane

0x75c6,	// (0x00025c57) cell_vkb_keypad_bottom_left_pane_g1

0x75c6,	// (0x00025c57) cell_vkb_keypad_bottom_right_pane_g1

0x7a15,	// (0x000260a6) cell_vkb_keypad_number_pane_ParamLimits

0x7a15,	// (0x000260a6) cell_vkb_keypad_number_pane

0x7a34,	// (0x000260c5) cell_vkb_keypad_number_pane_g1

0x7a3e,	// (0x000260cf) cell_vkb_keypad_number_pane_g2

0x7a47,	// (0x000260d8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0002e1df) cell_vkb_keypad_number_pane_g

0x7a07,	// (0x00026098) cell_vkb_keypad_number_pane_t1

0x7a6d,	// (0x000260fe) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x0002e200) cell_hwr_side_pane_g

0x7a86,	// (0x00026117) cell_hwr_side_pane_t1

0xb126,	// (0x000297b7) cell_hwr_side_pane_t1_copy1

0xb134,	// (0x000297c5) cell_hwr_candidate_pane_g1

0xb163,	// (0x000297f4) cell_hwr_candidate_pane_t1

0x75c6,	// (0x00025c57) cell_vkb_candidate_pane_g2

0x7aca,	// (0x0002615b) cell_vkb_candidate_pane_t1

0xade5,	// (0x00029476) bg_popup_fep_shadow_pane_ParamLimits

0xade5,	// (0x00029476) bg_popup_fep_shadow_pane

0xae9a,	// (0x0002952b) bg_fep_hwr_top_pane_g4

0x765a,	// (0x00025ceb) bg_hwr_side_pane_g1_ParamLimits

0x765a,	// (0x00025ceb) bg_hwr_side_pane_g1

0xaf0b,	// (0x0002959c) cell_hwr_side_pane_ParamLimits

0xaf0b,	// (0x0002959c) cell_hwr_side_pane

0xaf46,	// (0x000295d7) fep_hwr_write_pane_g1_ParamLimits

0xaf46,	// (0x000295d7) fep_hwr_write_pane_g1

0xaf53,	// (0x000295e4) fep_hwr_write_pane_g2_ParamLimits

0xaf53,	// (0x000295e4) fep_hwr_write_pane_g2

0xaf60,	// (0x000295f1) fep_hwr_write_pane_g3_ParamLimits

0xaf60,	// (0x000295f1) fep_hwr_write_pane_g3

0xaf6e,	// (0x000295ff) fep_hwr_write_pane_g4_ParamLimits

0xaf6e,	// (0x000295ff) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0002e1ac) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0002e1ac) fep_hwr_write_pane_g

0xae9a,	// (0x0002952b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xae9a,	// (0x0002952b) bg_fep_hwr_candidate_pane_g2

0xaf83,	// (0x00029614) cell_hwr_candidate_pane_ParamLimits

0xaf83,	// (0x00029614) cell_hwr_candidate_pane

0xafc5,	// (0x00029656) fep_hwr_candidate_pane_g1_ParamLimits

0x76ba,	// (0x00025d4b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76ba,	// (0x00025d4b) bg_popup_fep_shadow_pane_cp2

0x784d,	// (0x00025ede) fep_vkb_top_pane_g4_ParamLimits

0x784d,	// (0x00025ede) fep_vkb_top_pane_g4

0x786c,	// (0x00025efd) fep_vkb_side_pane_g2_ParamLimits

0x786c,	// (0x00025efd) fep_vkb_side_pane_g2

0xc8a1,	// (0x0002af32) list_setting_pane_t4_ParamLimits

0xc8a1,	// (0x0002af32) list_setting_pane_t4

0xc933,	// (0x0002afc4) list_setting_number_pane_t5_ParamLimits

0xc933,	// (0x0002afc4) list_setting_number_pane_t5

0x9332,	// (0x000279c3) list_double_heading_pane_cp2_ParamLimits

0x9332,	// (0x000279c3) list_double_heading_pane_cp2

0x489b,	// (0x00022f2c) list_double_heading_pane_g1_cp2_ParamLimits

0x489b,	// (0x00022f2c) list_double_heading_pane_g1_cp2

0x48a7,	// (0x00022f38) list_double_heading_pane_g2_cp2_ParamLimits

0x48a7,	// (0x00022f38) list_double_heading_pane_g2_cp2

0x7ad8,	// (0x00026169) list_double_heading_pane_t1_cp2_ParamLimits

0x7ad8,	// (0x00026169) list_double_heading_pane_t1_cp2

0x7aee,	// (0x0002617f) list_double_heading_pane_t2_cp2_ParamLimits

0x7aee,	// (0x0002617f) list_double_heading_pane_t2_cp2

0x41c2,	// (0x00022853) aid_value_unit2

0x8bfd,	// (0x0002728e) popup_preview_fixed_window

0x436d,	// (0x000229fe) bg_popup_preview_window_pane_cp02

0x7b00,	// (0x00026191) list_preview_fixed_pane

0x7b46,	// (0x000261d7) list_empty_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_empty_pane_fp

0x7b46,	// (0x000261d7) list_single_cale_day_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_single_cale_day_pane_fp

0x7b46,	// (0x000261d7) list_single_graphic_heading_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_single_graphic_heading_pane_fp

0x7b46,	// (0x000261d7) list_single_graphic_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_single_graphic_pane_fp

0x7b46,	// (0x000261d7) list_single_heading_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_single_heading_pane_fp

0x7b46,	// (0x000261d7) list_single_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_single_pane_fp

0x7b5d,	// (0x000261ee) list_single_pane_fp_g1_ParamLimits

0x7b5d,	// (0x000261ee) list_single_pane_fp_g1

0xc705,	// (0x0002ad96) list_single_pane_fp_g2_ParamLimits

0xc705,	// (0x0002ad96) list_single_pane_fp_g2

0xe9ed,	// (0x0002d07e) list_single_pane_fp_g3_ParamLimits

0xe9ed,	// (0x0002d07e) list_single_pane_fp_g3

0x7b69,	// (0x000261fa) list_single_pane_fp_g4_ParamLimits

0x7b69,	// (0x000261fa) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0002e213) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0002e213) list_single_pane_fp_g

0xea01,	// (0x0002d092) list_single_pane_fp_t1_ParamLimits

0xea01,	// (0x0002d092) list_single_pane_fp_t1

0xea18,	// (0x0002d0a9) list_single_graphic_pane_fp_g1_ParamLimits

0xea18,	// (0x0002d0a9) list_single_graphic_pane_fp_g1

0x7b5d,	// (0x000261ee) list_single_graphic_pane_fp_g2_ParamLimits

0x7b5d,	// (0x000261ee) list_single_graphic_pane_fp_g2

0xc705,	// (0x0002ad96) list_single_graphic_pane_fp_g3_ParamLimits

0xc705,	// (0x0002ad96) list_single_graphic_pane_fp_g3

0xe9ed,	// (0x0002d07e) list_single_graphic_pane_fp_g4_ParamLimits

0xe9ed,	// (0x0002d07e) list_single_graphic_pane_fp_g4

0x7b69,	// (0x000261fa) list_single_graphic_pane_fp_g5_ParamLimits

0x7b69,	// (0x000261fa) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002e21c) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002e21c) list_single_graphic_pane_fp_g

0xea24,	// (0x0002d0b5) list_single_graphic_pane_fp_t1_ParamLimits

0xea24,	// (0x0002d0b5) list_single_graphic_pane_fp_t1

0xea18,	// (0x0002d0a9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xea18,	// (0x0002d0a9) list_single_graphic_heading_pane_fp_g1

0x7b5d,	// (0x000261ee) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b5d,	// (0x000261ee) list_single_graphic_heading_pane_fp_g2

0xc705,	// (0x0002ad96) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc705,	// (0x0002ad96) list_single_graphic_heading_pane_fp_g3

0xe9ed,	// (0x0002d07e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe9ed,	// (0x0002d07e) list_single_graphic_heading_pane_fp_g4

0x7b69,	// (0x000261fa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b69,	// (0x000261fa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002e21c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002e21c) list_single_graphic_heading_pane_fp_g

0xea3a,	// (0x0002d0cb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xea3a,	// (0x0002d0cb) list_single_graphic_heading_pane_fp_t1

0xea50,	// (0x0002d0e1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xea50,	// (0x0002d0e1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0002e227) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0002e227) list_single_graphic_heading_pane_fp_t

0xea62,	// (0x0002d0f3) list_single_cale_day_pane_fp_g1_ParamLimits

0xea62,	// (0x0002d0f3) list_single_cale_day_pane_fp_g1

0x7b75,	// (0x00026206) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b75,	// (0x00026206) list_single_cale_day_pane_fp_g2

0xea9a,	// (0x0002d12b) list_single_cale_day_pane_fp_g3_ParamLimits

0xea9a,	// (0x0002d12b) list_single_cale_day_pane_fp_g3

0xeac2,	// (0x0002d153) list_single_cale_day_pane_fp_g4_ParamLimits

0xeac2,	// (0x0002d153) list_single_cale_day_pane_fp_g4

0xeae6,	// (0x0002d177) list_single_cale_day_pane_fp_g5_ParamLimits

0xeae6,	// (0x0002d177) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0002e22c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002e22c) list_single_cale_day_pane_fp_g

0xeb0a,	// (0x0002d19b) list_single_cale_day_pane_fp_t1_ParamLimits

0xeb0a,	// (0x0002d19b) list_single_cale_day_pane_fp_t1

0xeb30,	// (0x0002d1c1) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb30,	// (0x0002d1c1) list_single_cale_day_pane_fp_t2

0xeb49,	// (0x0002d1da) list_single_cale_day_pane_fp_t3_ParamLimits

0xeb49,	// (0x0002d1da) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0002e237) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0002e237) list_single_cale_day_pane_fp_t

0x7b5d,	// (0x000261ee) list_empty_pane_fp_g1_ParamLimits

0x7b5d,	// (0x000261ee) list_empty_pane_fp_g1

0xeb62,	// (0x0002d1f3) list_empty_pane_fp_t1

0xeb70,	// (0x0002d201) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0002e23e) list_empty_pane_fp_t

0x7b5d,	// (0x000261ee) list_single_heading_pane_fp_g1_ParamLimits

0x7b5d,	// (0x000261ee) list_single_heading_pane_fp_g1

0xc705,	// (0x0002ad96) list_single_heading_pane_fp_g2_ParamLimits

0xc705,	// (0x0002ad96) list_single_heading_pane_fp_g2

0xe9ed,	// (0x0002d07e) list_single_heading_pane_fp_g3_ParamLimits

0xe9ed,	// (0x0002d07e) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0002e243) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0002e243) list_single_heading_pane_fp_g

0xeb7e,	// (0x0002d20f) list_single_heading_pane_fp_t1_ParamLimits

0xeb7e,	// (0x0002d20f) list_single_heading_pane_fp_t1

0xeb90,	// (0x0002d221) list_single_heading_pane_fp_t2_ParamLimits

0xeb90,	// (0x0002d221) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0002e24a) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0002e24a) list_single_heading_pane_fp_t

0x49e4,	// (0x00023075) aid_size_cell_fast

0x4350,	// (0x000229e1) soft_indicator_pane_cp1_t1

0x4a21,	// (0x000230b2) cell_app_pane_cp2_ParamLimits

0x4a21,	// (0x000230b2) cell_app_pane_cp2

0xae07,	// (0x00029498) fep_hwr_candidate_drop_down_list_pane

0xafdf,	// (0x00029670) fep_hwr_candidate_pane_g3_ParamLimits

0xafdf,	// (0x00029670) fep_hwr_candidate_pane_g3

0x3bb2,	// (0x00022243) fep_hwr_candidate_pane_g4_ParamLimits

0x3bb2,	// (0x00022243) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0002e1b9) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0002e1b9) fep_hwr_candidate_pane_g

0x7734,	// (0x00025dc5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7734,	// (0x00025dc5) fep_vkb_candidate_drop_down_list_pane

0x7a75,	// (0x00026106) fep_vkb_candidate_pane_g3

0x7a7d,	// (0x0002610e) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0002e1e6) fep_vkb_candidate_pane_g

0xb134,	// (0x000297c5) cell_hwr_candidate_pane_g1_ParamLimits

0xb142,	// (0x000297d3) cell_hwr_candidate_pane_g3_ParamLimits

0xb142,	// (0x000297d3) cell_hwr_candidate_pane_g3

0xca44,	// (0x0002b0d5) cell_hwr_candidate_pane_g4_ParamLimits

0xca44,	// (0x0002b0d5) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0002e205) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0002e205) cell_hwr_candidate_pane_g

0x7a94,	// (0x00026125) cell_vkb_candidate_pane_g3_ParamLimits

0x7a94,	// (0x00026125) cell_vkb_candidate_pane_g3

0x7aaf,	// (0x00026140) cell_vkb_candidate_pane_g4_ParamLimits

0x7aaf,	// (0x00026140) cell_vkb_candidate_pane_g4

0x7b81,	// (0x00026212) cell_app_pane_cp2_g1_ParamLimits

0x7b81,	// (0x00026212) cell_app_pane_cp2_g1

0x7b9f,	// (0x00026230) cell_app_pane_cp2_g2_ParamLimits

0x7b9f,	// (0x00026230) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0002e24f) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0002e24f) cell_app_pane_cp2_g

0x7bab,	// (0x0002623c) cell_app_pane_cp2_t1_ParamLimits

0x7bab,	// (0x0002623c) cell_app_pane_cp2_t1

0x4881,	// (0x00022f12) grid_highlight_pane_cp1_ParamLimits

0x4881,	// (0x00022f12) grid_highlight_pane_cp1

0xb181,	// (0x00029812) cell_hwr_candidate_pane_cp1_ParamLimits

0xb181,	// (0x00029812) cell_hwr_candidate_pane_cp1

0xb134,	// (0x000297c5) fep_hwr_candidate_drop_down_list_pane_g1

0xb1a0,	// (0x00029831) fep_hwr_candidate_drop_down_list_pane_g2

0xb1ad,	// (0x0002983e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002e254) fep_hwr_candidate_drop_down_list_pane_g

0xb1ba,	// (0x0002984b) fep_hwr_candidate_drop_down_list_scroll_pane

0xb1c3,	// (0x00029854) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb1c3,	// (0x00029854) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb1d0,	// (0x00029861) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb1d0,	// (0x00029861) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb1dd,	// (0x0002986e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb1dd,	// (0x0002986e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb1ea,	// (0x0002987b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb1ea,	// (0x0002987b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb205,	// (0x00029896) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb205,	// (0x00029896) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb220,	// (0x000298b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb220,	// (0x000298b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb23b,	// (0x000298cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb23b,	// (0x000298cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb256,	// (0x000298e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb256,	// (0x000298e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0002e25b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0002e25b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7bd7,	// (0x00026268) cell_vkb_candidate_pane_cp1_ParamLimits

0x7bd7,	// (0x00026268) cell_vkb_candidate_pane_cp1

0x784d,	// (0x00025ede) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x784d,	// (0x00025ede) fep_vkb_candidate_drop_down_list_pane_g1

0x7bbd,	// (0x0002624e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7bbd,	// (0x0002624e) fep_vkb_candidate_drop_down_list_pane_g2

0x7bca,	// (0x0002625b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7bca,	// (0x0002625b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x0002e26c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x0002e26c) fep_vkb_candidate_drop_down_list_pane_g

0x7bf7,	// (0x00026288) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bf7,	// (0x00026288) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c04,	// (0x00026295) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c04,	// (0x00026295) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c11,	// (0x000262a2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c11,	// (0x000262a2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c1d,	// (0x000262ae) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c1d,	// (0x000262ae) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c29,	// (0x000262ba) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c29,	// (0x000262ba) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c4a,	// (0x000262db) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c4a,	// (0x000262db) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c86,	// (0x00026317) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c86,	// (0x00026317) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7ca7,	// (0x00026338) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7ca7,	// (0x00026338) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c6b,	// (0x000262fc) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c6b,	// (0x000262fc) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0002e273) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0002e273) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8d07,	// (0x00027398) title_pane_g1_ParamLimits

0x8d14,	// (0x000273a5) title_pane_g2_ParamLimits

0xf56a,	// (0x0002dbfb) title_pane_g_ParamLimits

0x4db1,	// (0x00023442) aid_call2_pane

0x4da9,	// (0x0002343a) aid_call_pane

0x4db9,	// (0x0002344a) popup_clock_analogue_window_g1

0x4db9,	// (0x0002344a) popup_clock_analogue_window_g2

0x9313,	// (0x000279a4) popup_clock_analogue_window_g3

0x931c,	// (0x000279ad) popup_clock_analogue_window_g4

0x41d4,	// (0x00022865) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0002dda0) popup_clock_analogue_window_g

0x9324,	// (0x000279b5) popup_clock_analogue_window_t1

0x935b,	// (0x000279ec) clock_digital_number_pane_ParamLimits

0x935b,	// (0x000279ec) clock_digital_number_pane

0x9367,	// (0x000279f8) clock_digital_number_pane_cp02_ParamLimits

0x9367,	// (0x000279f8) clock_digital_number_pane_cp02

0x9373,	// (0x00027a04) clock_digital_number_pane_cp03_ParamLimits

0x9373,	// (0x00027a04) clock_digital_number_pane_cp03

0x937f,	// (0x00027a10) clock_digital_number_pane_cp04_ParamLimits

0x937f,	// (0x00027a10) clock_digital_number_pane_cp04

0x938b,	// (0x00027a1c) clock_digital_separator_pane_ParamLimits

0x938b,	// (0x00027a1c) clock_digital_separator_pane

0x9397,	// (0x00027a28) popup_clock_digital_window_t1_ParamLimits

0x9397,	// (0x00027a28) popup_clock_digital_window_t1

0x41d4,	// (0x00022865) clock_digital_number_pane_g1

0x41d4,	// (0x00022865) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0002ddab) clock_digital_number_pane_g

0x41d4,	// (0x00022865) clock_digital_separator_pane_g1

0x41d4,	// (0x00022865) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0002ddab) clock_digital_separator_pane_g

0x9d72,	// (0x00028403) aid_fill_nsta_ParamLimits

0x9e3b,	// (0x000284cc) indicator_nsta_pane_ParamLimits

0x5703,	// (0x00023d94) popup_clock_analogue_window

0x5703,	// (0x00023d94) popup_clock_digital_window

0x423a,	// (0x000228cb) grid_indicator_nsta_pane_ParamLimits

0x725e,	// (0x000258ef) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0002e139) clock_nsta_pane_t

0x92d7,	// (0x00027968) aid_size_max_handle

0x92e1,	// (0x00027972) aid_size_min_handle

0x52c8,	// (0x00023959) editor_scroll_pane

0x7cc8,	// (0x00026359) ex_editor_pane

0x49a0,	// (0x00023031) scroll_pane_cp13

0x4820,	// (0x00022eb1) scroll_pane_cp14

0x4de3,	// (0x00023474) scroll_pane_cp36

0x9344,	// (0x000279d5) list_single_graphic_hl_pane_cp2_ParamLimits

0x9344,	// (0x000279d5) list_single_graphic_hl_pane_cp2

0xa856,	// (0x00028ee7) list_single_graphic_hl_pane_ParamLimits

0xa856,	// (0x00028ee7) list_single_graphic_hl_pane

0xeba6,	// (0x0002d237) aid_size_min_hl_cp1

0x7cd0,	// (0x00026361) list_highlight_pane_cp34_ParamLimits

0x7cd0,	// (0x00026361) list_highlight_pane_cp34

0x7ce1,	// (0x00026372) list_single_graphic_hl_pane_g1_ParamLimits

0x7ce1,	// (0x00026372) list_single_graphic_hl_pane_g1

0xebaf,	// (0x0002d240) list_single_graphic_hl_pane_g2_ParamLimits

0xebaf,	// (0x0002d240) list_single_graphic_hl_pane_g2

0xebaf,	// (0x0002d240) list_single_graphic_hl_pane_g3_ParamLimits

0xebaf,	// (0x0002d240) list_single_graphic_hl_pane_g3

0xebbb,	// (0x0002d24c) list_single_graphic_hl_pane_g4_ParamLimits

0xebbb,	// (0x0002d24c) list_single_graphic_hl_pane_g4

0xebc7,	// (0x0002d258) list_single_graphic_hl_pane_g5_ParamLimits

0xebc7,	// (0x0002d258) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x0002e284) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x0002e284) list_single_graphic_hl_pane_g

0xebdb,	// (0x0002d26c) list_single_graphic_hl_pane_t1_ParamLimits

0xebdb,	// (0x0002d26c) list_single_graphic_hl_pane_t1

0x7cee,	// (0x0002637f) aid_size_min_hl_cp2

0x7cf7,	// (0x00026388) list_highlight_pane_cp34_cp2_ParamLimits

0x7cf7,	// (0x00026388) list_highlight_pane_cp34_cp2

0x7ce1,	// (0x00026372) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ce1,	// (0x00026372) list_single_graphic_hl_pane_g1_cp2

0x7d04,	// (0x00026395) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d04,	// (0x00026395) list_single_graphic_hl_pane_g2_cp2

0x7d10,	// (0x000263a1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7d10,	// (0x000263a1) list_single_graphic_hl_pane_g3_cp2

0x51ff,	// (0x00023890) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x51ff,	// (0x00023890) list_single_graphic_hl_pane_g4_cp2

0x7d1e,	// (0x000263af) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d1e,	// (0x000263af) list_single_graphic_hl_pane_g5_cp2

0x97be,	// (0x00027e4f) control_pane_g4_ParamLimits

0x97be,	// (0x00027e4f) control_pane_g4

0x49d8,	// (0x00023069) bg_popup_sub_pane_cp10_ParamLimits

0x75d0,	// (0x00025c61) list_choice_list_pane_ParamLimits

0x75df,	// (0x00025c70) scroll_pane_cp23

0x436d,	// (0x000229fe) bg_popup_preview_window_pane_cp02_ParamLimits

0x7b00,	// (0x00026191) list_preview_fixed_pane_ParamLimits

0x7b16,	// (0x000261a7) list_preview_fixed_pane_cp_ParamLimits

0x7b16,	// (0x000261a7) list_preview_fixed_pane_cp

0x7b22,	// (0x000261b3) popup_preview_fixed_window_g1_ParamLimits

0x7b22,	// (0x000261b3) popup_preview_fixed_window_g1

0x7b2e,	// (0x000261bf) popup_preview_fixed_window_g2_ParamLimits

0x7b2e,	// (0x000261bf) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0002e20c) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0002e20c) popup_preview_fixed_window_g

0x91c6,	// (0x00027857) aid_navi_side_left_pane_ParamLimits

0x91db,	// (0x0002786c) aid_navi_side_right_pane_ParamLimits

0x91f3,	// (0x00027884) navi_icon_pane_stacon_ParamLimits

0x9207,	// (0x00027898) navi_navi_pane_stacon_ParamLimits

0x91f3,	// (0x00027884) navi_text_pane_stacon_ParamLimits

0x41ca,	// (0x0002285b) main_text_info_pane

0x7d48,	// (0x000263d9) listscroll_text_info_pane

0x7d50,	// (0x000263e1) list_text_info_pane_ParamLimits

0x7d50,	// (0x000263e1) list_text_info_pane

0x7d5f,	// (0x000263f0) scroll_pane_cp24_ParamLimits

0x7d5f,	// (0x000263f0) scroll_pane_cp24

0xb271,	// (0x00029902) list_text_info_pane_t1_ParamLimits

0xb271,	// (0x00029902) list_text_info_pane_t1

0x9903,	// (0x00027f94) popup_fast_swap2_window_ParamLimits

0x9903,	// (0x00027f94) popup_fast_swap2_window

0x7d7d,	// (0x0002640e) aid_size_cell_fast2

0x41ca,	// (0x0002285b) bg_popup_window_pane_cp17

0x5ba7,	// (0x00024238) heading_pane_cp2

0x4553,	// (0x00022be4) listscroll_fast2_pane

0x7d87,	// (0x00026418) grid_fast2_pane

0x7d91,	// (0x00026422) listscroll_fast2_pane_g1

0x7d99,	// (0x0002642a) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x0002e28f) listscroll_fast2_pane_g

0x49a0,	// (0x00023031) scroll_pane_cp26

0x7da3,	// (0x00026434) cell_fast2_pane_ParamLimits

0x7da3,	// (0x00026434) cell_fast2_pane

0x7db8,	// (0x00026449) cell_fast2_pane_g1

0x7dc1,	// (0x00026452) cell_fast2_pane_g2

0x7dca,	// (0x0002645b) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x0002e294) cell_fast2_pane_g

0x45e7,	// (0x00022c78) grid_highlight_pane_cp9

0x45fc,	// (0x00022c8d) main_eswt_pane_ParamLimits

0x45fc,	// (0x00022c8d) main_eswt_pane

0x7d74,	// (0x00026405) list_single_text_info_pane

0x7dd2,	// (0x00026463) eswt_ctrl_button_pane

0x7dd2,	// (0x00026463) eswt_ctrl_canvas_pane

0x7dda,	// (0x0002646b) eswt_ctrl_combo_pane

0x7dd2,	// (0x00026463) eswt_ctrl_default_pane

0x7dd2,	// (0x00026463) eswt_ctrl_label_pane

0x7de2,	// (0x00026473) eswt_ctrl_wait_pane

0x7dea,	// (0x0002647b) eswt_shell_pane

0x41ca,	// (0x0002285b) listscroll_eswt_app_pane

0x7e0a,	// (0x0002649b) popup_eswt_tasktip_window_ParamLimits

0x7e0a,	// (0x0002649b) popup_eswt_tasktip_window

0x5900,	// (0x00023f91) bg_popup_window_pane_cp18

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_ParamLimits

0x7e1b,	// (0x000264ac) eswt_control_pane_g1

0x7e28,	// (0x000264b9) eswt_control_pane_g2_ParamLimits

0x7e28,	// (0x000264b9) eswt_control_pane_g2

0x7e35,	// (0x000264c6) eswt_control_pane_g3_ParamLimits

0x7e35,	// (0x000264c6) eswt_control_pane_g3

0x7e42,	// (0x000264d3) eswt_control_pane_g4_ParamLimits

0x7e42,	// (0x000264d3) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0002e29b) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0002e29b) eswt_control_pane_g

0x4881,	// (0x00022f12) bg_button_pane_ParamLimits

0x4881,	// (0x00022f12) bg_button_pane

0x45fc,	// (0x00022c8d) common_borders_pane_copy2_ParamLimits

0x45fc,	// (0x00022c8d) common_borders_pane_copy2

0x7e4f,	// (0x000264e0) control_button_pane_g1_ParamLimits

0x7e4f,	// (0x000264e0) control_button_pane_g1

0x7e5b,	// (0x000264ec) control_button_pane_g2_ParamLimits

0x7e5b,	// (0x000264ec) control_button_pane_g2

0x7e67,	// (0x000264f8) control_button_pane_g3_ParamLimits

0x7e67,	// (0x000264f8) control_button_pane_g3

0x0002,

0xfc13,	// (0x0002e2a4) control_button_pane_g_ParamLimits

0xfc13,	// (0x0002e2a4) control_button_pane_g

0x7e7b,	// (0x0002650c) control_button_pane_t1

0x7e89,	// (0x0002651a) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0002e2ab) control_button_pane_t

0x5810,	// (0x00023ea1) bg_button_pane_g1

0x5818,	// (0x00023ea9) bg_button_pane_g2

0x5820,	// (0x00023eb1) bg_button_pane_g3

0x5828,	// (0x00023eb9) bg_button_pane_g4

0x5830,	// (0x00023ec1) bg_button_pane_g5

0x5838,	// (0x00023ec9) bg_button_pane_g6

0x5840,	// (0x00023ed1) bg_button_pane_g7

0x5848,	// (0x00023ed9) bg_button_pane_g8

0x5850,	// (0x00023ee1) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0002defe) bg_button_pane_g

0x758b,	// (0x00025c1c) common_borders_pane_ParamLimits

0x758b,	// (0x00025c1c) common_borders_pane

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy1_ParamLimits

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy1

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy1_ParamLimits

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy1

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy1_ParamLimits

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy1

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy1_ParamLimits

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy1

0x75c6,	// (0x00025c57) bg_eswt_ctrl_canvas_pane_g1

0x758b,	// (0x00025c1c) common_borders_pane_cp2_ParamLimits

0x758b,	// (0x00025c1c) common_borders_pane_cp2

0x758b,	// (0x00025c1c) common_borders_pane_cp3_ParamLimits

0x758b,	// (0x00025c1c) common_borders_pane_cp3

0x7e97,	// (0x00026528) separator_horizontal_pane

0x7e9f,	// (0x00026530) separator_vertical_pane

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy2_ParamLimits

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy2

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy2_ParamLimits

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy2

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy2_ParamLimits

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy2

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy2_ParamLimits

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy2

0x41ca,	// (0x0002285b) common_borders_pane_cp4

0x7ea8,	// (0x00026539) separator_horizontal_pane_g1

0x7eb1,	// (0x00026542) separator_horizontal_pane_g2

0x7eba,	// (0x0002654b) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x0002e2b0) separator_horizontal_pane_g

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy3_ParamLimits

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy3

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy3_ParamLimits

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy3

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy3_ParamLimits

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy3

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy3_ParamLimits

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy3

0x41ca,	// (0x0002285b) common_borders_pane_cp5

0x7ec3,	// (0x00026554) separator_vertical_pane_g1

0x7ecc,	// (0x0002655d) separator_vertical_pane_g2

0x7ed5,	// (0x00026566) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0002e2b7) separator_vertical_pane_g

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy4_ParamLimits

0x7e1b,	// (0x000264ac) eswt_control_pane_g1_copy4

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy4_ParamLimits

0x7e28,	// (0x000264b9) eswt_control_pane_g2_copy4

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy4_ParamLimits

0x7e35,	// (0x000264c6) eswt_control_pane_g3_copy4

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy4_ParamLimits

0x7e42,	// (0x000264d3) eswt_control_pane_g4_copy4

0xb2aa,	// (0x0002993b) eswt_ctrl_combo_button_pane

0xb2b2,	// (0x00029943) eswt_ctrl_input_pane

0xb2ba,	// (0x0002994b) popup_choice_list_window_cp70

0xb2c2,	// (0x00029953) eswt_ctrl_input_pane_t1

0x41ca,	// (0x0002285b) input_focus_pane_cp70

0x758b,	// (0x00025c1c) bg_button_pane_cp70_ParamLimits

0x758b,	// (0x00025c1c) bg_button_pane_cp70

0xb2d0,	// (0x00029961) eswt_ctrl_combo_button_pane_g1

0x7ede,	// (0x0002656f) wait_bar_pane_cp70

0x5900,	// (0x00023f91) bg_popup_window_pane_cp70_ParamLimits

0x5900,	// (0x00023f91) bg_popup_window_pane_cp70

0x7ee6,	// (0x00026577) popup_eswt_tasktip_window_t1

0x7efc,	// (0x0002658d) wait_bar_pane_cp71_ParamLimits

0x7efc,	// (0x0002658d) wait_bar_pane_cp71

0x7f08,	// (0x00026599) grid_eswt_app_pane

0x4bf8,	// (0x00023289) scroll_pane_cp70

0xb2d8,	// (0x00029969) cell_eswt_app_pane_ParamLimits

0xb2d8,	// (0x00029969) cell_eswt_app_pane

0xb30c,	// (0x0002999d) cell_eswt_app_pane_g1_ParamLimits

0xb30c,	// (0x0002999d) cell_eswt_app_pane_g1

0xb33b,	// (0x000299cc) cell_eswt_app_pane_g2_ParamLimits

0xb33b,	// (0x000299cc) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0002e2be) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0002e2be) cell_eswt_app_pane_g

0xb364,	// (0x000299f5) cell_eswt_app_pane_t1_ParamLimits

0xb364,	// (0x000299f5) cell_eswt_app_pane_t1

0xb396,	// (0x00029a27) grid_highlight_pane_cp70_ParamLimits

0xb396,	// (0x00029a27) grid_highlight_pane_cp70

0x519b,	// (0x0002382c) set_content_pane_g1

0x549f,	// (0x00023b30) status_small_volume_pane

0xb3a2,	// (0x00029a33) status_small_volume_pane_g1

0xb3aa,	// (0x00029a3b) volume_small2_pane

0xb3b3,	// (0x00029a44) volume_small2_pane_g1

0xb3bc,	// (0x00029a4d) volume_small2_pane_g2

0xb3c5,	// (0x00029a56) volume_small2_pane_g3

0xb3ce,	// (0x00029a5f) volume_small2_pane_g4

0xb3d7,	// (0x00029a68) volume_small2_pane_g5

0xb3e0,	// (0x00029a71) volume_small2_pane_g6

0xb3e9,	// (0x00029a7a) volume_small2_pane_g7

0xb3f2,	// (0x00029a83) volume_small2_pane_g8

0xb3fb,	// (0x00029a8c) volume_small2_pane_g9

0xb404,	// (0x00029a95) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x0002e2c3) volume_small2_pane_g

0x795a,	// (0x00025feb) fep_vkb_top_text_pane_g1_ParamLimits

0xb048,	// (0x000296d9) fep_vkb_top_text_pane_t1_ParamLimits

0x7b3a,	// (0x000261cb) popup_preview_fixed_window_g3_ParamLimits

0x7b3a,	// (0x000261cb) popup_preview_fixed_window_g3

0x9d05,	// (0x00028396) popup_toolbar_trans_pane

0xa6eb,	// (0x00028d7c) aid_height_set_list_ParamLimits

0x6379,	// (0x00024a0a) aid_size_parent_ParamLimits

0x49d8,	// (0x00023069) list_highlight_pane_cp2_ParamLimits

0x519b,	// (0x0002382c) set_content_pane_g1_ParamLimits

0xe755,	// (0x0002cde6) list_single_image_pane_ParamLimits

0xe755,	// (0x0002cde6) list_single_image_pane

0xb40d,	// (0x00029a9e) aid_size_cell_image_ParamLimits

0xb40d,	// (0x00029a9e) aid_size_cell_image

0xb41a,	// (0x00029aab) grid_single_image_pane_ParamLimits

0xb41a,	// (0x00029aab) grid_single_image_pane

0x489b,	// (0x00022f2c) list_single_image_pane_g1_ParamLimits

0x489b,	// (0x00022f2c) list_single_image_pane_g1

0x48a7,	// (0x00022f38) list_single_image_pane_g2_ParamLimits

0x48a7,	// (0x00022f38) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0002e2d8) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0002e2d8) list_single_image_pane_g

0xb426,	// (0x00029ab7) list_single_image_pane_t1_ParamLimits

0xb426,	// (0x00029ab7) list_single_image_pane_t1

0xb43c,	// (0x00029acd) cell_image_list_pane_ParamLimits

0xb43c,	// (0x00029acd) cell_image_list_pane

0xb450,	// (0x00029ae1) cell_image_list_pane_g1

0xb459,	// (0x00029aea) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0002e2dd) cell_image_list_pane_g

0xb462,	// (0x00029af3) aid_size_cell_tb_trans_pane

0x4881,	// (0x00022f12) bg_tb_trans_pane

0xb474,	// (0x00029b05) grid_tb_trans_pane

0x5810,	// (0x00023ea1) bg_tb_trans_pane_g1

0x5818,	// (0x00023ea9) bg_tb_trans_pane_g2

0x5820,	// (0x00023eb1) bg_tb_trans_pane_g3

0x5828,	// (0x00023eb9) bg_tb_trans_pane_g4

0x5830,	// (0x00023ec1) bg_tb_trans_pane_g5

0x5848,	// (0x00023ed9) bg_tb_trans_pane_g6

0x5850,	// (0x00023ee1) bg_tb_trans_pane_g7

0x5838,	// (0x00023ec9) bg_tb_trans_pane_g8

0x5840,	// (0x00023ed1) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0002e2e2) bg_tb_trans_pane_g

0xb488,	// (0x00029b19) cell_toolbar_trans_pane_ParamLimits

0xb488,	// (0x00029b19) cell_toolbar_trans_pane

0x75c6,	// (0x00025c57) cell_toolbar_trans_pane_g1

0xac1b,	// (0x000292ac) list_form2_midp_pane_t1

0xac29,	// (0x000292ba) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0002e17f) list_form2_midp_pane_t

0x7323,	// (0x000259b4) scroll_pane_cp51_ParamLimits

0x7499,	// (0x00025b2a) form2_midp_wait_pane_g1

0x74a2,	// (0x00025b33) form2_midp_wait_pane_g2

0x74ab,	// (0x00025b3c) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0002e194) form2_midp_wait_pane_g

0x423a,	// (0x000228cb) list_highlight_pane_cp21_ParamLimits

0x74cb,	// (0x00025b5c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74da,	// (0x00025b6b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe6e1,	// (0x0002cd72) list_single_2graphic_im_pane_ParamLimits

0xe6e1,	// (0x0002cd72) list_single_2graphic_im_pane

0xb4ae,	// (0x00029b3f) list_single_2graphic_im_pane_g1_ParamLimits

0xb4ae,	// (0x00029b3f) list_single_2graphic_im_pane_g1

0xb4bf,	// (0x00029b50) list_single_2graphic_im_pane_g2_ParamLimits

0xb4bf,	// (0x00029b50) list_single_2graphic_im_pane_g2

0xb4cb,	// (0x00029b5c) list_single_2graphic_im_pane_g3_ParamLimits

0xb4cb,	// (0x00029b5c) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0002e2f5) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0002e2f5) list_single_2graphic_im_pane_g

0xb4eb,	// (0x00029b7c) list_single_2graphic_im_pane_t1_ParamLimits

0xb4eb,	// (0x00029b7c) list_single_2graphic_im_pane_t1

0x7b46,	// (0x000261d7) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b46,	// (0x000261d7) list_single_graphic_2heading_pane_fp

0xea18,	// (0x0002d0a9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xea18,	// (0x0002d0a9) list_single_graphic_2heading_pane_fp_g1

0x7b5d,	// (0x000261ee) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b5d,	// (0x000261ee) list_single_graphic_2heading_pane_fp_g2

0xc705,	// (0x0002ad96) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc705,	// (0x0002ad96) list_single_graphic_2heading_pane_fp_g3

0xe9ed,	// (0x0002d07e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe9ed,	// (0x0002d07e) list_single_graphic_2heading_pane_fp_g4

0x7b69,	// (0x000261fa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b69,	// (0x000261fa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002e21c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002e21c) list_single_graphic_2heading_pane_fp_g

0xebf1,	// (0x0002d282) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xebf1,	// (0x0002d282) list_single_graphic_2heading_pane_fp_t1

0xea50,	// (0x0002d0e1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xea50,	// (0x0002d0e1) list_single_graphic_2heading_pane_fp_t2

0xec07,	// (0x0002d298) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec07,	// (0x0002d298) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0002e2fe) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0002e2fe) list_single_graphic_2heading_pane_fp_t

0x7666,	// (0x00025cf7) fep_hwr_write_pane_g5_ParamLimits

0x7666,	// (0x00025cf7) fep_hwr_write_pane_g5

0x7672,	// (0x00025d03) fep_hwr_write_pane_g6_ParamLimits

0x7672,	// (0x00025d03) fep_hwr_write_pane_g6

0x7dea,	// (0x0002647b) eswt_shell_pane_ParamLimits

0x5900,	// (0x00023f91) bg_popup_window_pane_cp18_ParamLimits

0x6904,	// (0x00024f95) heading_pane_cp70

0x7ee6,	// (0x00026577) popup_eswt_tasktip_window_t1_ParamLimits

0x9db2,	// (0x00028443) aid_touch_tab_arrow_left

0x9dc1,	// (0x00028452) aid_touch_tab_arrow_right

0x8d25,	// (0x000273b6) title_pane_g3_ParamLimits

0x8d25,	// (0x000273b6) title_pane_g3

0x4840,	// (0x00022ed1) set_value_pane_g1

0x9d05,	// (0x00028396) popup_toolbar_trans_pane_ParamLimits

0xb462,	// (0x00029af3) aid_size_cell_tb_trans_pane_ParamLimits

0x4881,	// (0x00022f12) bg_tb_trans_pane_ParamLimits

0xb474,	// (0x00029b05) grid_tb_trans_pane_ParamLimits

0x436d,	// (0x000229fe) cont_note_pane_ParamLimits

0x436d,	// (0x000229fe) cont_note_pane

0x45fc,	// (0x00022c8d) cont_snote2_single_text_pane_ParamLimits

0x45fc,	// (0x00022c8d) cont_snote2_single_text_pane

0x45fc,	// (0x00022c8d) cont_snote2_single_graphic_pane_ParamLimits

0x45fc,	// (0x00022c8d) cont_snote2_single_graphic_pane

0x5dbd,	// (0x0002444e) cont_note_wait_pane_ParamLimits

0x5dbd,	// (0x0002444e) cont_note_wait_pane

0x5dbd,	// (0x0002444e) cont_note_image_pane_ParamLimits

0x5dbd,	// (0x0002444e) cont_note_image_pane

0xb51c,	// (0x00029bad) popup_note2_window_g1_ParamLimits

0xb51c,	// (0x00029bad) popup_note2_window_g1

0xb54d,	// (0x00029bde) popup_note2_window_t1_ParamLimits

0xb54d,	// (0x00029bde) popup_note2_window_t1

0xb592,	// (0x00029c23) popup_note2_window_t2_ParamLimits

0xb592,	// (0x00029c23) popup_note2_window_t2

0xb5d7,	// (0x00029c68) popup_note2_window_t3_ParamLimits

0xb5d7,	// (0x00029c68) popup_note2_window_t3

0xb61c,	// (0x00029cad) popup_note2_window_t4_ParamLimits

0xb61c,	// (0x00029cad) popup_note2_window_t4

0x43e5,	// (0x00022a76) popup_note2_window_t5_ParamLimits

0x43e5,	// (0x00022a76) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0002e30a) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0002e30a) popup_note2_window_t

0xb64b,	// (0x00029cdc) popup_note2_image_window_g1_ParamLimits

0xb64b,	// (0x00029cdc) popup_note2_image_window_g1

0xb657,	// (0x00029ce8) popup_note2_image_window_g2_ParamLimits

0xb657,	// (0x00029ce8) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0002e315) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0002e315) popup_note2_image_window_g

0xb669,	// (0x00029cfa) popup_note2_image_window_t1_ParamLimits

0xb669,	// (0x00029cfa) popup_note2_image_window_t1

0xb681,	// (0x00029d12) popup_note2_image_window_t2_ParamLimits

0xb681,	// (0x00029d12) popup_note2_image_window_t2

0xb699,	// (0x00029d2a) popup_note2_image_window_t3_ParamLimits

0xb699,	// (0x00029d2a) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0002e31a) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0002e31a) popup_note2_image_window_t

0x5dcb,	// (0x0002445c) popup_note2_wait_window_g1_ParamLimits

0x5dcb,	// (0x0002445c) popup_note2_wait_window_g1

0x5dd7,	// (0x00024468) popup_note2_wait_window_g2_ParamLimits

0x5dd7,	// (0x00024468) popup_note2_wait_window_g2

0x5de3,	// (0x00024474) popup_note2_wait_window_g3_ParamLimits

0x5de3,	// (0x00024474) popup_note2_wait_window_g3

0x0002,

0xf84f,	// (0x0002dee0) popup_note2_wait_window_g_ParamLimits

0xf84f,	// (0x0002dee0) popup_note2_wait_window_g

0xb6b5,	// (0x00029d46) popup_note2_wait_window_t1_ParamLimits

0xb6b5,	// (0x00029d46) popup_note2_wait_window_t1

0xb6d3,	// (0x00029d64) popup_note2_wait_window_t2_ParamLimits

0xb6d3,	// (0x00029d64) popup_note2_wait_window_t2

0xb6f1,	// (0x00029d82) popup_note2_wait_window_t3_ParamLimits

0xb6f1,	// (0x00029d82) popup_note2_wait_window_t3

0xb703,	// (0x00029d94) popup_note2_wait_window_t4_ParamLimits

0xb703,	// (0x00029d94) popup_note2_wait_window_t4

0x0003,

0xfc90,	// (0x0002e321) popup_note2_wait_window_t_ParamLimits

0xfc90,	// (0x0002e321) popup_note2_wait_window_t

0xb715,	// (0x00029da6) wait_bar2_pane_ParamLimits

0xb715,	// (0x00029da6) wait_bar2_pane

0xb72d,	// (0x00029dbe) popup_snote2_single_text_window_g1_ParamLimits

0xb72d,	// (0x00029dbe) popup_snote2_single_text_window_g1

0xb755,	// (0x00029de6) popup_snote2_single_text_window_t1_ParamLimits

0xb755,	// (0x00029de6) popup_snote2_single_text_window_t1

0xb7a1,	// (0x00029e32) popup_snote2_single_text_window_t2_ParamLimits

0xb7a1,	// (0x00029e32) popup_snote2_single_text_window_t2

0xb7ed,	// (0x00029e7e) popup_snote2_single_text_window_t3_ParamLimits

0xb7ed,	// (0x00029e7e) popup_snote2_single_text_window_t3

0xb82e,	// (0x00029ebf) popup_snote2_single_text_window_t4_ParamLimits

0xb82e,	// (0x00029ebf) popup_snote2_single_text_window_t4

0xb864,	// (0x00029ef5) popup_snote2_single_text_window_t5_ParamLimits

0xb864,	// (0x00029ef5) popup_snote2_single_text_window_t5

0x0004,

0xfc99,	// (0x0002e32a) popup_snote2_single_text_window_t_ParamLimits

0xfc99,	// (0x0002e32a) popup_snote2_single_text_window_t

0xb88f,	// (0x00029f20) popup_snote2_single_graphic_window_g1_ParamLimits

0xb88f,	// (0x00029f20) popup_snote2_single_graphic_window_g1

0xb8b7,	// (0x00029f48) popup_snote2_single_graphic_window_g2_ParamLimits

0xb8b7,	// (0x00029f48) popup_snote2_single_graphic_window_g2

0x0001,

0xfca4,	// (0x0002e335) popup_snote2_single_graphic_window_g_ParamLimits

0xfca4,	// (0x0002e335) popup_snote2_single_graphic_window_g

0xb8df,	// (0x00029f70) popup_snote2_single_graphic_window_t1_ParamLimits

0xb8df,	// (0x00029f70) popup_snote2_single_graphic_window_t1

0xb92b,	// (0x00029fbc) popup_snote2_single_graphic_window_t2_ParamLimits

0xb92b,	// (0x00029fbc) popup_snote2_single_graphic_window_t2

0xb7ed,	// (0x00029e7e) popup_snote2_single_graphic_window_t3_ParamLimits

0xb7ed,	// (0x00029e7e) popup_snote2_single_graphic_window_t3

0xb82e,	// (0x00029ebf) popup_snote2_single_graphic_window_t4_ParamLimits

0xb82e,	// (0x00029ebf) popup_snote2_single_graphic_window_t4

0xb864,	// (0x00029ef5) popup_snote2_single_graphic_window_t5_ParamLimits

0xb864,	// (0x00029ef5) popup_snote2_single_graphic_window_t5

0x0004,

0xfca9,	// (0x0002e33a) popup_snote2_single_graphic_window_t_ParamLimits

0xfca9,	// (0x0002e33a) popup_snote2_single_graphic_window_t

0x72d3,	// (0x00025964) clock_nsta_pane_cp2_t1

0x72d3,	// (0x00025964) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0002e155) clock_nsta_pane_cp2_t

0xca38,	// (0x0002b0c9) form_field_data_wide_pane_g1_ParamLimits

0x489b,	// (0x00022f2c) form_field_data_wide_pane_g2_ParamLimits

0x489b,	// (0x00022f2c) form_field_data_wide_pane_g2

0x48a7,	// (0x00022f38) form_field_data_wide_pane_g3_ParamLimits

0x48a7,	// (0x00022f38) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0002dd23) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0002dd23) form_field_data_wide_pane_g

0xaa91,	// (0x00029122) grid_touch_3_pane_ParamLimits

0xaa91,	// (0x00029122) grid_touch_3_pane

0xb977,	// (0x0002a008) cell_touch_3_pane_ParamLimits

0xb977,	// (0x0002a008) cell_touch_3_pane

0x75c6,	// (0x00025c57) cell_touch_3_pane_g1

0x75c6,	// (0x00025c57) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0002e1da) cell_touch_3_pane_g

0x4417,	// (0x00022aa8) cont_query_data_pane

0x441f,	// (0x00022ab0) cont_query_data_pane_cp1

0xb9a6,	// (0x0002a037) button_value_adjust_pane_cp7

0xb9ae,	// (0x0002a03f) query_popup_pane_cp3

0x4e15,	// (0x000234a6) bg_popup_sub_pane_cp22_ParamLimits

0x93f2,	// (0x00027a83) navi_navi_volume_pane_cp2

0x940d,	// (0x00027a9e) popup_side_volume_key_window_g2

0x941c,	// (0x00027aad) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0002ddb5) popup_side_volume_key_window_g

0x9439,	// (0x00027aca) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0002ddbc) popup_side_volume_key_window_t

0x5065,	// (0x000236f6) popup_side_volume_key_window_ParamLimits

0xc6d1,	// (0x0002ad62) list_double_graphic_pane_g4_ParamLimits

0xc6d1,	// (0x0002ad62) list_double_graphic_pane_g4

0xe72e,	// (0x0002cdbf) list_single_2heading_msg_pane_ParamLimits

0xe72e,	// (0x0002cdbf) list_single_2heading_msg_pane

0xec27,	// (0x0002d2b8) list_single_2heading_msg_pane_g1_ParamLimits

0xec27,	// (0x0002d2b8) list_single_2heading_msg_pane_g1

0xc522,	// (0x0002abb3) list_single_2heading_msg_pane_g2_ParamLimits

0xc522,	// (0x0002abb3) list_single_2heading_msg_pane_g2

0xe814,	// (0x0002cea5) list_single_2heading_msg_pane_g3_ParamLimits

0xe814,	// (0x0002cea5) list_single_2heading_msg_pane_g3

0xec33,	// (0x0002d2c4) list_single_2heading_msg_pane_g4_ParamLimits

0xec33,	// (0x0002d2c4) list_single_2heading_msg_pane_g4

0x0003,

0xfcb4,	// (0x0002e345) list_single_2heading_msg_pane_g_ParamLimits

0xfcb4,	// (0x0002e345) list_single_2heading_msg_pane_g

0xec4b,	// (0x0002d2dc) list_single_2heading_msg_pane_t1_ParamLimits

0xec4b,	// (0x0002d2dc) list_single_2heading_msg_pane_t1

0xec73,	// (0x0002d304) list_single_2heading_msg_pane_t2_ParamLimits

0xec73,	// (0x0002d304) list_single_2heading_msg_pane_t2

0xeca7,	// (0x0002d338) list_single_2heading_msg_pane_t3_ParamLimits

0xeca7,	// (0x0002d338) list_single_2heading_msg_pane_t3

0xece0,	// (0x0002d371) list_single_2heading_msg_pane_t4_ParamLimits

0xece0,	// (0x0002d371) list_single_2heading_msg_pane_t4

0x0003,

0xfcbd,	// (0x0002e34e) list_single_2heading_msg_pane_t_ParamLimits

0xfcbd,	// (0x0002e34e) list_single_2heading_msg_pane_t

0x41e8,	// (0x00022879) title_pane_g4_ParamLimits

0x41e8,	// (0x00022879) title_pane_g4

0x9116,	// (0x000277a7) title_pane_stacon_g3_ParamLimits

0x9116,	// (0x000277a7) title_pane_stacon_g3

0xb4df,	// (0x00029b70) list_single_2graphic_im_pane_g4_ParamLimits

0xb4df,	// (0x00029b70) list_single_2graphic_im_pane_g4

0x6728,	// (0x00024db9) popup_side_volume_key_window_cp

0x6bf4,	// (0x00025285) main_idle_act2_pane_t1

0xa0af,	// (0x00028740) toolbar_button_pane_g10

0x901a,	// (0x000276ab) popup_toolbar_window_cp1

0x72c4,	// (0x00025955) clock_nsta_pane_cp_t1

0x72c4,	// (0x00025955) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0002e150) clock_nsta_pane_cp_t

0x93f2,	// (0x00027a83) navi_navi_volume_pane_cp2_ParamLimits

0x9401,	// (0x00027a92) popup_side_volume_key_window_g1_ParamLimits

0x940d,	// (0x00027a9e) popup_side_volume_key_window_g2_ParamLimits

0x941c,	// (0x00027aad) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0002ddb5) popup_side_volume_key_window_g_ParamLimits

0xadf3,	// (0x00029484) fep_hwr_aid_pane

0xae9a,	// (0x0002952b) bg_fep_hwr_top_pane_g4_ParamLimits

0x7648,	// (0x00025cd9) fep_hwr_top_pane_g1_ParamLimits

0x7636,	// (0x00025cc7) fep_hwr_top_pane_g2_ParamLimits

0xaeba,	// (0x0002954b) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0002e1a5) fep_hwr_top_pane_g_ParamLimits

0xaecf,	// (0x00029560) fep_hwr_top_text_pane_ParamLimits

0x6526,	// (0x00024bb7) aid_touch_tab_arrow_arrow_2

0x651d,	// (0x00024bae) aid_touch_tab_arrow_left_2

0xae07,	// (0x00029498) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xae3e,	// (0x000294cf) fep_hwr_prediction_pane

0x779d,	// (0x00025e2e) fep_vkb_prediction_pane

0xb025,	// (0x000296b6) fep_vkb_side_pane_g3_ParamLimits

0xb025,	// (0x000296b6) fep_vkb_side_pane_g3

0xb134,	// (0x000297c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb1a0,	// (0x00029831) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb1ad,	// (0x0002983e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0002e254) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb9d3,	// (0x0002a064) fep_hwr_prediction_pane_g1

0xb9dd,	// (0x0002a06e) fep_hwr_prediction_pane_g2

0x762e,	// (0x00025cbf) fep_hwr_prediction_pane_g3

0xb9e5,	// (0x0002a076) fep_hwr_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002e357) fep_hwr_prediction_pane_g

0xb9ed,	// (0x0002a07e) fep_vkb_prediction_pane_g1

0xb9f7,	// (0x0002a088) fep_vkb_prediction_pane_g2

0xb9ff,	// (0x0002a090) fep_vkb_prediction_pane_g3

0xba07,	// (0x0002a098) fep_vkb_prediction_pane_g4

0x0003,

0xfccf,	// (0x0002e360) fep_vkb_prediction_pane_g

0xa693,	// (0x00028d24) slider_set_pane_g3

0xa6a7,	// (0x00028d38) slider_set_pane_g4

0xa6bf,	// (0x00028d50) slider_set_pane_g5

0xa693,	// (0x00028d24) slider_set_pane_g6

0xa6d5,	// (0x00028d66) slider_set_pane_g7

0x6989,	// (0x0002501a) slider_form_pane_g3

0x6992,	// (0x00025023) slider_form_pane_g4

0x699a,	// (0x0002502b) slider_form_pane_g5

0x6989,	// (0x0002501a) slider_form_pane_g6

0xa83e,	// (0x00028ecf) slider_form_pane_g7

0x6e92,	// (0x00025523) slider_set_pane_vc_g3

0x6e9b,	// (0x0002552c) slider_set_pane_vc_g4

0x6ea4,	// (0x00025535) slider_set_pane_vc_g5

0x6e92,	// (0x00025523) slider_set_pane_vc_g6

0x6ead,	// (0x0002553e) slider_set_pane_vc_g7

0x6e92,	// (0x00025523) slider_form_pane_vc_g1

0x6e9b,	// (0x0002552c) slider_form_pane_vc_g2

0x6ea4,	// (0x00025535) slider_form_pane_vc_g3

0x6e92,	// (0x00025523) slider_form_pane_vc_g4

0x703c,	// (0x000256cd) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0002e129) slider_form_pane_vc_g

0x41ca,	// (0x0002285b) main_idle_act3_pane

0xba0f,	// (0x0002a0a0) ai3_links_pane

0xba18,	// (0x0002a0a9) popup_ai3_data_window_ParamLimits

0xba18,	// (0x0002a0a9) popup_ai3_data_window

0x41ca,	// (0x0002285b) grid_ai3_links_pane

0xba30,	// (0x0002a0c1) cell_ai3_links_pane_ParamLimits

0xba30,	// (0x0002a0c1) cell_ai3_links_pane

0xba48,	// (0x0002a0d9) bg_popup_sub_pane_cp11

0xba55,	// (0x0002a0e6) cell_ai3_links_pane_g1

0x41ca,	// (0x0002285b) bg_popup_sub_pane_cp12

0xba7a,	// (0x0002a10b) heading_ai3_data_pane

0xba82,	// (0x0002a113) list_ai3_gene_pane

0xba8e,	// (0x0002a11f) popup_ai3_data_window_g1

0xba96,	// (0x0002a127) heading_ai3_data_pane_g1

0xba9e,	// (0x0002a12f) heading_ai3_data_pane_t1

0xbaac,	// (0x0002a13d) list_double_ai3_gene_pane_ParamLimits

0xbaac,	// (0x0002a13d) list_double_ai3_gene_pane

0xbab9,	// (0x0002a14a) list_single_ai3_gene_pane_ParamLimits

0xbab9,	// (0x0002a14a) list_single_ai3_gene_pane

0x758b,	// (0x00025c1c) list_highlight_pane_cp7_ParamLimits

0x758b,	// (0x00025c1c) list_highlight_pane_cp7

0xbac6,	// (0x0002a157) list_single_a13_gene_pane_t1_ParamLimits

0xbac6,	// (0x0002a157) list_single_a13_gene_pane_t1

0xbadd,	// (0x0002a16e) list_single_ai3_gene_pane_g1

0xbae6,	// (0x0002a177) list_single_ai3_gene_pane_g2

0x0001,

0xfcd8,	// (0x0002e369) list_single_ai3_gene_pane_g

0xbaee,	// (0x0002a17f) list_double_ai3_gene_pane_g1_ParamLimits

0xbaee,	// (0x0002a17f) list_double_ai3_gene_pane_g1

0xbafa,	// (0x0002a18b) list_double_ai3_gene_pane_t1_ParamLimits

0xbafa,	// (0x0002a18b) list_double_ai3_gene_pane_t1

0xbb16,	// (0x0002a1a7) list_double_ai3_gene_pane_t2_ParamLimits

0xbb16,	// (0x0002a1a7) list_double_ai3_gene_pane_t2

0xbb2b,	// (0x0002a1bc) list_double_ai3_gene_pane_t3_ParamLimits

0xbb2b,	// (0x0002a1bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcdd,	// (0x0002e36e) list_double_ai3_gene_pane_t_ParamLimits

0xfcdd,	// (0x0002e36e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec1d,	// (0x0002d2ae) aid_size_min_col_2

0xb9bf,	// (0x0002a050) aid_size_min_msg_ParamLimits

0xb9bf,	// (0x0002a050) aid_size_min_msg

0xb039,	// (0x000296ca) fep_vkb_top_text_pane_g2_ParamLimits

0xb039,	// (0x000296ca) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0002e1d5) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0002e1d5) fep_vkb_top_text_pane_g

0x41ca,	// (0x0002285b) main_hc_apps_shell_pane

0xbb48,	// (0x0002a1d9) grid_hc_apps_pane_ParamLimits

0xbb48,	// (0x0002a1d9) grid_hc_apps_pane

0xbb57,	// (0x0002a1e8) list_hc_apps_pane

0xbb5f,	// (0x0002a1f0) scroll_pane_cp37_ParamLimits

0xbb5f,	// (0x0002a1f0) scroll_pane_cp37

0xbb6b,	// (0x0002a1fc) cell_hc_apps_pane_ParamLimits

0xbb6b,	// (0x0002a1fc) cell_hc_apps_pane

0xbc1b,	// (0x0002a2ac) cell_hc_apps_pane_g1_ParamLimits

0xbc1b,	// (0x0002a2ac) cell_hc_apps_pane_g1

0xbc4c,	// (0x0002a2dd) cell_hc_apps_pane_g2_ParamLimits

0xbc4c,	// (0x0002a2dd) cell_hc_apps_pane_g2

0xca65,	// (0x0002b0f6) cell_hc_apps_pane_g3_ParamLimits

0xca65,	// (0x0002b0f6) cell_hc_apps_pane_g3

0x0002,

0xfce4,	// (0x0002e375) cell_hc_apps_pane_g_ParamLimits

0xfce4,	// (0x0002e375) cell_hc_apps_pane_g

0xca87,	// (0x0002b118) cell_hc_apps_pane_t1_ParamLimits

0xca87,	// (0x0002b118) cell_hc_apps_pane_t1

0x436d,	// (0x000229fe) grid_highlight_pane_cp10_ParamLimits

0x436d,	// (0x000229fe) grid_highlight_pane_cp10

0xcac7,	// (0x0002b158) list_single_hc_apps_pane_ParamLimits

0xcac7,	// (0x0002b158) list_single_hc_apps_pane

0xcb3a,	// (0x0002b1cb) list_single_hc_apps_pane_g1

0xed05,	// (0x0002d396) list_single_hc_apps_pane_g2

0x0001,

0xfceb,	// (0x0002e37c) list_single_hc_apps_pane_g

0xed1e,	// (0x0002d3af) list_single_hc_apps_pane_g2_copy1

0xed3a,	// (0x0002d3cb) list_single_hc_apps_pane_t1

0x423a,	// (0x000228cb) bg_set_opt_pane_cp_ParamLimits

0x8dd5,	// (0x00027466) setting_slider_pane_t1_ParamLimits

0x8dee,	// (0x0002747f) setting_slider_pane_t2_ParamLimits

0x8e07,	// (0x00027498) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002dc0b) setting_slider_pane_t_ParamLimits

0x8e1e,	// (0x000274af) slider_set_pane_ParamLimits

0x97d2,	// (0x00027e63) control_pane_g5_ParamLimits

0x97d2,	// (0x00027e63) control_pane_g5

0x694b,	// (0x00024fdc) slider_set_pane_g1_ParamLimits

0xa687,	// (0x00028d18) slider_set_pane_g2_ParamLimits

0xa693,	// (0x00028d24) slider_set_pane_g3_ParamLimits

0xa6a7,	// (0x00028d38) slider_set_pane_g4_ParamLimits

0xa6bf,	// (0x00028d50) slider_set_pane_g5_ParamLimits

0xa693,	// (0x00028d24) slider_set_pane_g6_ParamLimits

0xa6d5,	// (0x00028d66) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0002dffc) slider_set_pane_g_ParamLimits

0x5146,	// (0x000237d7) navi_icon_text_pane_ParamLimits

0x9d88,	// (0x00028419) aid_fill_nsta_2_ParamLimits

0x9db2,	// (0x00028443) aid_touch_tab_arrow_left_ParamLimits

0x9dc1,	// (0x00028452) aid_touch_tab_arrow_right_ParamLimits

0x9e2e,	// (0x000284bf) clock_nsta_pane_ParamLimits

0xa528,	// (0x00028bb9) navi_icon_pane_g1_ParamLimits

0xa537,	// (0x00028bc8) navi_text_pane_t1_ParamLimits

0xaba6,	// (0x00029237) navi_icon_text_pane_g1_ParamLimits

0xabb5,	// (0x00029246) navi_icon_text_pane_t1_ParamLimits

0xcb3a,	// (0x0002b1cb) list_single_hc_apps_pane_g1_ParamLimits

0xed05,	// (0x0002d396) list_single_hc_apps_pane_g2_ParamLimits

0xfceb,	// (0x0002e37c) list_single_hc_apps_pane_g_ParamLimits

0xed1e,	// (0x0002d3af) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xed3a,	// (0x0002d3cb) list_single_hc_apps_pane_t1_ParamLimits

0x8c29,	// (0x000272ba) popup_toolbar2_fixed_window_ParamLimits

0x8c29,	// (0x000272ba) popup_toolbar2_fixed_window

0x9cfb,	// (0x0002838c) popup_toolbar2_float_window

0x41ca,	// (0x0002285b) bg_popup_sub_pane_cp27

0xcb53,	// (0x0002b1e4) grid_toolbar2_float_pane

0x41ca,	// (0x0002285b) bg_popup_sub_pane_cp26

0xcb53,	// (0x0002b1e4) grid_toolbar2_fixed_pane

0xcb5b,	// (0x0002b1ec) cell_toolbar2_fixed_pane_ParamLimits

0xcb5b,	// (0x0002b1ec) cell_toolbar2_fixed_pane

0xcb6c,	// (0x0002b1fd) cell_toolbar2_fixed_pane_g1

0xcb75,	// (0x0002b206) toolbar2_fixed_button_pane

0x5810,	// (0x00023ea1) toolbar2_fixed_button_pane_g1

0x5818,	// (0x00023ea9) toolbar2_fixed_button_pane_g2

0x5820,	// (0x00023eb1) toolbar2_fixed_button_pane_g3

0x5828,	// (0x00023eb9) toolbar2_fixed_button_pane_g4

0x5830,	// (0x00023ec1) toolbar2_fixed_button_pane_g5

0x5838,	// (0x00023ec9) toolbar2_fixed_button_pane_g6

0x5840,	// (0x00023ed1) toolbar2_fixed_button_pane_g7

0x5848,	// (0x00023ed9) toolbar2_fixed_button_pane_g8

0x5850,	// (0x00023ee1) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0002defe) toolbar2_fixed_button_pane_g

0xcb7d,	// (0x0002b20e) cell_toolbar2_float_pane_ParamLimits

0xcb7d,	// (0x0002b20e) cell_toolbar2_float_pane

0xcb8e,	// (0x0002b21f) cell_toolbar2_float_pane_g1

0xcb75,	// (0x0002b206) toolbar2_fixed_button_pane_cp

0xafec,	// (0x0002967d) fep_vkb_accented_list_pane_ParamLimits

0xafec,	// (0x0002967d) fep_vkb_accented_list_pane

0xb114,	// (0x000297a5) bg_popup_fep_shadow_pane_g9

0x52c8,	// (0x00023959) bg_popup_fep_shadow_pane_cp3

0x4987,	// (0x00023018) list_accented_list_pane

0xcb97,	// (0x0002b228) list_single_accented_list_pane_ParamLimits

0xcb97,	// (0x0002b228) list_single_accented_list_pane

0x52c8,	// (0x00023959) list_highlight_pane_cp10

0xcba8,	// (0x0002b239) list_single_accented_list_pane_t1

0x9c53,	// (0x000282e4) popup_slider_window_ParamLimits

0x9c53,	// (0x000282e4) popup_slider_window

0xb9b6,	// (0x0002a047) aid_indentation_list_msg

0xcc62,	// (0x0002b2f3) bg_popup_window_pane_cp19

0xcccc,	// (0x0002b35d) popup_slider_window_g1

0xcce8,	// (0x0002b379) popup_slider_window_g2

0xcd04,	// (0x0002b395) popup_slider_window_g3

0x0005,

0xfcf0,	// (0x0002e381) popup_slider_window_g

0xcd60,	// (0x0002b3f1) popup_slider_window_t1

0xcdd4,	// (0x0002b465) small_volume_slider_vertical_pane

0x75c6,	// (0x00025c57) small_volume_slider_vertical_pane_g1

0x75c6,	// (0x00025c57) small_volume_slider_vertical_pane_g2

0xcdf0,	// (0x0002b481) small_volume_slider_vertical_pane_g3

0x0002,

0xfd02,	// (0x0002e393) small_volume_slider_vertical_pane_g

0x89ef,	// (0x00027080) area_side_right_pane_ParamLimits

0x89ef,	// (0x00027080) area_side_right_pane

0xbc68,	// (0x0002a2f9) aid_size_side_button_ParamLimits

0xbc68,	// (0x0002a2f9) aid_size_side_button

0xbc7c,	// (0x0002a30d) grid_sctrl_middle_pane_ParamLimits

0xbc7c,	// (0x0002a30d) grid_sctrl_middle_pane

0xbc9c,	// (0x0002a32d) sctrl_sk_bottom_pane

0xbcad,	// (0x0002a33e) sctrl_sk_top_pane

0xbcbf,	// (0x0002a350) aid_touch_sctrl_top

0xbccc,	// (0x0002a35d) bg_sctrl_sk_pane_ParamLimits

0xbccc,	// (0x0002a35d) bg_sctrl_sk_pane

0xbcda,	// (0x0002a36b) sctrl_sk_top_pane_g1

0xbce7,	// (0x0002a378) sctrl_sk_top_pane_t1

0xbcbf,	// (0x0002a350) aid_touch_sctrl_bottom

0xbccc,	// (0x0002a35d) bg_sctrl_sk_pane_cp_ParamLimits

0xbccc,	// (0x0002a35d) bg_sctrl_sk_pane_cp

0xbd02,	// (0x0002a393) sctrl_sk_bottom_pane_g1

0xbce7,	// (0x0002a378) sctrl_sk_bottom_pane_t1

0xbd0b,	// (0x0002a39c) cell_sctrl_middle_pane_ParamLimits

0xbd0b,	// (0x0002a39c) cell_sctrl_middle_pane

0xbd26,	// (0x0002a3b7) aid_touch_sctrl_middle_ParamLimits

0xbd26,	// (0x0002a3b7) aid_touch_sctrl_middle

0xbd38,	// (0x0002a3c9) bg_sctrl_middle_pane_ParamLimits

0xbd38,	// (0x0002a3c9) bg_sctrl_middle_pane

0xb134,	// (0x000297c5) cell_sctrl_middle_pane_g1_ParamLimits

0xb134,	// (0x000297c5) cell_sctrl_middle_pane_g1

0xbd46,	// (0x0002a3d7) cell_sctrl_middle_pane_g2_ParamLimits

0xbd46,	// (0x0002a3d7) cell_sctrl_middle_pane_g2

0x0001,

0xfd0e,	// (0x0002e39f) cell_sctrl_middle_pane_g_ParamLimits

0xfd0e,	// (0x0002e39f) cell_sctrl_middle_pane_g

0x5810,	// (0x00023ea1) bg_sctrl_middle_pane_g1

0x5820,	// (0x00023eb1) bg_sctrl_middle_pane_g2

0x5818,	// (0x00023ea9) bg_sctrl_middle_pane_g3

0x5830,	// (0x00023ec1) bg_sctrl_middle_pane_g4

0x5828,	// (0x00023eb9) bg_sctrl_middle_pane_g5

0x5838,	// (0x00023ec9) bg_sctrl_middle_pane_g6

0x5840,	// (0x00023ed1) bg_sctrl_middle_pane_g7

0x5850,	// (0x00023ee1) bg_sctrl_middle_pane_g8

0x0007,

0xfd13,	// (0x0002e3a4) bg_sctrl_middle_pane_g

0x5848,	// (0x00023ed9) bg_sctrl_middle_pane_g8_copy1

0x5810,	// (0x00023ea1) bg_sctrl_sk_pane_g1

0x5818,	// (0x00023ea9) bg_sctrl_sk_pane_g2

0x5820,	// (0x00023eb1) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0002defe) bg_sctrl_sk_pane_g

0x47ba,	// (0x00022e4b) aid_size_touch_scroll_bar

0x5828,	// (0x00023eb9) bg_sctrl_sk_pane_g4

0x5830,	// (0x00023ec1) bg_sctrl_sk_pane_g5

0x5838,	// (0x00023ec9) bg_sctrl_sk_pane_g6

0x5840,	// (0x00023ed1) bg_sctrl_sk_pane_g7

0x5848,	// (0x00023ed9) bg_sctrl_sk_pane_g8

0x5850,	// (0x00023ee1) bg_sctrl_sk_pane_g9

0x5544,	// (0x00023bd5) popup_fep_china_hwr2_fs_candidate_window

0x9961,	// (0x00027ff2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9961,	// (0x00027ff2) popup_fep_china_hwr2_fs_control_window

0xb134,	// (0x000297c5) sctrl_sk_top_pane_g2

0x0001,

0xfd09,	// (0x0002e39a) sctrl_sk_top_pane_g

0xcdf9,	// (0x0002b48a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcdf9,	// (0x0002b48a) aid_fep_china_hwr2_fs_cell

0xce0b,	// (0x0002b49c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce0b,	// (0x0002b49c) bg_popup_fep_shadow_pane_cp4

0xce22,	// (0x0002b4b3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce22,	// (0x0002b4b3) bg_popup_fep_shadow_pane_cp5

0xce34,	// (0x0002b4c5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce34,	// (0x0002b4c5) popup_fep_china_hwr2_fs_control_bar_grid

0xce44,	// (0x0002b4d5) popup_fep_china_hwr2_fs_control_funtion_grid

0xce4c,	// (0x0002b4dd) aid_fep_china_hwr2_fs_candi_cell

0x41ca,	// (0x0002285b) bg_popup_fep_shadow_pane_cp6

0xce56,	// (0x0002b4e7) popup_fep_china_hwr2_fs_candidate_grid

0xce60,	// (0x0002b4f1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xce60,	// (0x0002b4f1) cell_fep_china_hwr2_fs_funtion_grid

0x75c6,	// (0x00025c57) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xce78,	// (0x0002b509) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xce78,	// (0x0002b509) cell_fep_china_hwr2_fs_funtion_grid_g1

0xce86,	// (0x0002b517) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xce86,	// (0x0002b517) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd24,	// (0x0002e3b5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd24,	// (0x0002e3b5) cell_fep_china_hwr2_fs_funtion_grid_g

0xce9c,	// (0x0002b52d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xce9c,	// (0x0002b52d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xceb1,	// (0x0002b542) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xceb1,	// (0x0002b542) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd29,	// (0x0002e3ba) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd29,	// (0x0002e3ba) cell_fep_china_hwr2_fs_funtion_grid_t

0xcecd,	// (0x0002b55e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xced5,	// (0x0002b566) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcedd,	// (0x0002b56e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2e,	// (0x0002e3bf) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcee5,	// (0x0002b576) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcee5,	// (0x0002b576) cell_fep_china_hwr2_fs_candidate_grid

0xcefe,	// (0x0002b58f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf06,	// (0x0002b597) popup_fep_china_hwr2_fs_candidate_grid_g21

0x75c6,	// (0x00025c57) cell_fep_china_hwr2_fs_candidate_grid_g1

0x75c6,	// (0x00025c57) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0002e1da) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf0e,	// (0x0002b59f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x565f,	// (0x00023cf0) clock_nsta_pane_cp_24_ParamLimits

0x565f,	// (0x00023cf0) clock_nsta_pane_cp_24

0x56c7,	// (0x00023d58) indicator_nsta_pane_cp_24_ParamLimits

0x56c7,	// (0x00023d58) indicator_nsta_pane_cp_24

0x6427,	// (0x00024ab8) heading_pane_g1

0x0001,

0xf8d2,	// (0x0002df63) heading_pane_g

0x6a7f,	// (0x00025110) grid_sct_catagory_button_pane

0x638b,	// (0x00024a1c) scroll_pane_cp5_ParamLimits

0x732f,	// (0x000259c0) button_value_adjust_pane_cp5_ParamLimits

0x732f,	// (0x000259c0) button_value_adjust_pane_cp5

0x73ed,	// (0x00025a7e) form2_midp_time_pane_ParamLimits

0xcf1c,	// (0x0002b5ad) cell_sct_catagory_button_pane_ParamLimits

0xcf1c,	// (0x0002b5ad) cell_sct_catagory_button_pane

0x758b,	// (0x00025c1c) bg_button_pane_cp01_ParamLimits

0x758b,	// (0x00025c1c) bg_button_pane_cp01

0x75c6,	// (0x00025c57) cell_sct_catagory_button_pane_g1

0x9c8a,	// (0x0002831b) popup_tb_extension_window

0xcf2e,	// (0x0002b5bf) aid_size_cell_ext_ParamLimits

0xcf2e,	// (0x0002b5bf) aid_size_cell_ext

0x436d,	// (0x000229fe) bg_tb_trans_pane_cp1_ParamLimits

0x436d,	// (0x000229fe) bg_tb_trans_pane_cp1

0xcf4e,	// (0x0002b5df) grid_tb_ext_pane_ParamLimits

0xcf4e,	// (0x0002b5df) grid_tb_ext_pane

0xcf80,	// (0x0002b611) cell_tb_ext_pane_ParamLimits

0xcf80,	// (0x0002b611) cell_tb_ext_pane

0xcf97,	// (0x0002b628) cell_tb_ext_pane_g1_ParamLimits

0xcf97,	// (0x0002b628) cell_tb_ext_pane_g1

0xcfb4,	// (0x0002b645) cell_tb_ext_pane_t1

0x436d,	// (0x000229fe) list_highlight_pane_cp11_ParamLimits

0x436d,	// (0x000229fe) list_highlight_pane_cp11

0x8c48,	// (0x000272d9) popup_uni_indicator_window_ParamLimits

0x8c48,	// (0x000272d9) popup_uni_indicator_window

0x4881,	// (0x00022f12) bg_popup_sub_pane_cp14

0xcfcf,	// (0x0002b660) list_uniindi_pane

0xcfdb,	// (0x0002b66c) uniindi_top_pane

0x436d,	// (0x000229fe) bg_uniindi_top_pane

0xcffa,	// (0x0002b68b) uniindi_top_pane_g1

0xd010,	// (0x0002b6a1) uniindi_top_pane_g2

0x0003,

0xfd35,	// (0x0002e3c6) uniindi_top_pane_g

0xd03a,	// (0x0002b6cb) uniindi_top_pane_t1

0xd064,	// (0x0002b6f5) list_single_uniindi_pane_ParamLimits

0xd064,	// (0x0002b6f5) list_single_uniindi_pane

0x75c6,	// (0x00025c57) bg_uniindi_top_pane_g1

0xd076,	// (0x0002b707) list_single_uniindi_pane_g1

0xd089,	// (0x0002b71a) list_single_uniindi_pane_t1

0x8acc,	// (0x0002715d) control_bg_pane

0xd0ae,	// (0x0002b73f) bg_sctrl_sk_pane_cp1

0xd0b7,	// (0x0002b748) bg_sctrl_sk_pane_cp2

0xd0c0,	// (0x0002b751) control_bg_pane_g1

0xd0c9,	// (0x0002b75a) control_bg_pane_g2

0x0001,

0xfd3e,	// (0x0002e3cf) control_bg_pane_g

0x726c,	// (0x000258fd) cell_indicator_nsta_pane_g1_ParamLimits

0xaad5,	// (0x00029166) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0002e13e) cell_indicator_nsta_pane_g_ParamLimits

0xe9da,	// (0x0002d06b) form2_midp_time_pane_t1_ParamLimits

0x45fc,	// (0x00022c8d) main_idle_act4_pane_ParamLimits

0x45fc,	// (0x00022c8d) main_idle_act4_pane

0x9c8a,	// (0x0002831b) popup_tb_extension_window_ParamLimits

0xcf70,	// (0x0002b601) tb_ext_find_pane_ParamLimits

0xcf70,	// (0x0002b601) tb_ext_find_pane

0xd0d2,	// (0x0002b763) ai_gene_pane_1_cp1

0x534a,	// (0x000239db) ai_gene_pane_2_cp1

0xd0da,	// (0x0002b76b) list_single_idle_plugin_calendar_pane

0xd0e3,	// (0x0002b774) list_single_idle_plugin_notification_pane

0xd0ec,	// (0x0002b77d) list_single_idle_plugin_player_pane

0xd0f5,	// (0x0002b786) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd0f5,	// (0x0002b786) list_single_idle_plugin_shortcut_pane

0xd117,	// (0x0002b7a8) main_idle_act4_pane_t1

0xd129,	// (0x0002b7ba) main_idle_act4_pane_t2

0x0001,

0xfd43,	// (0x0002e3d4) main_idle_act4_pane_t

0xd13b,	// (0x0002b7cc) middle_sk_idle_act4_pane_ParamLimits

0xd13b,	// (0x0002b7cc) middle_sk_idle_act4_pane

0xd151,	// (0x0002b7e2) popup_clock_digital_analogue_window_cp2

0xd16b,	// (0x0002b7fc) shortcut_wheel_idle_act4_pane_ParamLimits

0xd16b,	// (0x0002b7fc) shortcut_wheel_idle_act4_pane

0x75c6,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g1

0x75c6,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g2

0x75c6,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g3

0x75c6,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g4

0x75c6,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g5

0xd17f,	// (0x0002b810) shortcut_wheel_idle_act4_pane_g6

0xd187,	// (0x0002b818) shortcut_wheel_idle_act4_pane_g7

0xd18f,	// (0x0002b820) shortcut_wheel_idle_act4_pane_g8

0xd197,	// (0x0002b828) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd48,	// (0x0002e3d9) shortcut_wheel_idle_act4_pane_g

0x784d,	// (0x00025ede) middle_sk_idle_act4_pane_g1_ParamLimits

0x784d,	// (0x00025ede) middle_sk_idle_act4_pane_g1

0xd1fb,	// (0x0002b88c) middle_sk_idle_act4_pane_g2_ParamLimits

0xd1fb,	// (0x0002b88c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6b,	// (0x0002e3fc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6b,	// (0x0002e3fc) middle_sk_idle_act4_pane_g

0xd207,	// (0x0002b898) middle_sk_idle_act4_pane_t1_ParamLimits

0xd207,	// (0x0002b898) middle_sk_idle_act4_pane_t1

0xd224,	// (0x0002b8b5) grid_ai_shortcut_pane_ParamLimits

0xd224,	// (0x0002b8b5) grid_ai_shortcut_pane

0xd23d,	// (0x0002b8ce) list_highlight_pane_cp16_ParamLimits

0xd23d,	// (0x0002b8ce) list_highlight_pane_cp16

0xd24a,	// (0x0002b8db) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd24a,	// (0x0002b8db) list_single_idle_plugin_shortcut_pane_g1

0xd256,	// (0x0002b8e7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd256,	// (0x0002b8e7) list_single_idle_plugin_shortcut_pane_g2

0xd26e,	// (0x0002b8ff) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd26e,	// (0x0002b8ff) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd70,	// (0x0002e401) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd70,	// (0x0002e401) list_single_idle_plugin_shortcut_pane_g

0xd281,	// (0x0002b912) cell_ai_shortcut_pane_ParamLimits

0xd281,	// (0x0002b912) cell_ai_shortcut_pane

0xd2a2,	// (0x0002b933) cell_ai_shortcut_pane_g1_ParamLimits

0xd2a2,	// (0x0002b933) cell_ai_shortcut_pane_g1

0xd0d2,	// (0x0002b763) ai_gene_pane_1_cp2

0xd2c4,	// (0x0002b955) ai_gene_pane_2_cp2

0xd2cc,	// (0x0002b95d) list_highlight_pane_cp15

0xd2d5,	// (0x0002b966) list_single_idle_plugin_calendar_pane_g1

0xd2cc,	// (0x0002b95d) list_highlight_pane_cp17

0xd2dd,	// (0x0002b96e) list_single_idle_plugin_calendar_pane_g1_copy1

0xd2e5,	// (0x0002b976) list_single_idle_plugin_player_pane_g1

0x6c94,	// (0x00025325) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd77,	// (0x0002e408) list_single_idle_plugin_player_pane_g

0xd2ed,	// (0x0002b97e) list_single_idle_plugin_player_pane_t1

0xd2fb,	// (0x0002b98c) list_single_idle_plugin_player_pane_t2

0xd309,	// (0x0002b99a) list_single_idle_plugin_player_pane_t3

0xd317,	// (0x0002b9a8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7c,	// (0x0002e40d) list_single_idle_plugin_player_pane_t

0xd325,	// (0x0002b9b6) wait_bar_pane_cp15

0xd32d,	// (0x0002b9be) grid_ai_notification_pane

0x6c94,	// (0x00025325) list_single_idle_plugin_notification_pane_g1

0xd336,	// (0x0002b9c7) cell_ai_notification_pane_ParamLimits

0xd336,	// (0x0002b9c7) cell_ai_notification_pane

0xd343,	// (0x0002b9d4) cell_ai_notification_pane_g1

0xd34b,	// (0x0002b9dc) cell_ai_notification_pane_t1

0xd359,	// (0x0002b9ea) tb_ext_find_button_pane

0xd361,	// (0x0002b9f2) tb_ext_find_pane_g1

0xd369,	// (0x0002b9fa) tb_ext_find_pane_t1

0x4db9,	// (0x0002344a) tb_ext_find_button_pane_g1

0xd377,	// (0x0002ba08) tb_ext_find_button_pane_g2

0x0001,

0xfd85,	// (0x0002e416) tb_ext_find_button_pane_g

0xd117,	// (0x0002b7a8) main_idle_act4_pane_t1_ParamLimits

0xd129,	// (0x0002b7ba) main_idle_act4_pane_t2_ParamLimits

0xfd43,	// (0x0002e3d4) main_idle_act4_pane_t_ParamLimits

0xd151,	// (0x0002b7e2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd15f,	// (0x0002b7f0) sat_plugin_idle_act4_pane_ParamLimits

0xd15f,	// (0x0002b7f0) sat_plugin_idle_act4_pane

0xd380,	// (0x0002ba11) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd380,	// (0x0002ba11) sat_plugin_idle_act4_pane_t1

0xd393,	// (0x0002ba24) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd393,	// (0x0002ba24) sat_plugin_idle_act4_pane_t2

0xd3a6,	// (0x0002ba37) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd3a6,	// (0x0002ba37) sat_plugin_idle_act4_pane_t3

0xd3b9,	// (0x0002ba4a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd3b9,	// (0x0002ba4a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8a,	// (0x0002e41b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8a,	// (0x0002e41b) sat_plugin_idle_act4_pane_t

0x8b91,	// (0x00027222) popup_battery_window_ParamLimits

0x8b91,	// (0x00027222) popup_battery_window

0x436d,	// (0x000229fe) bg_popup_sub_pane_cp25_ParamLimits

0x436d,	// (0x000229fe) bg_popup_sub_pane_cp25

0xd3cc,	// (0x0002ba5d) popup_battery_window_g1_ParamLimits

0xd3cc,	// (0x0002ba5d) popup_battery_window_g1

0xd3d8,	// (0x0002ba69) popup_battery_window_t1_ParamLimits

0xd3d8,	// (0x0002ba69) popup_battery_window_t1

0xd3ea,	// (0x0002ba7b) popup_battery_window_t2_ParamLimits

0xd3ea,	// (0x0002ba7b) popup_battery_window_t2

0x0001,

0xfd93,	// (0x0002e424) popup_battery_window_t_ParamLimits

0xfd93,	// (0x0002e424) popup_battery_window_t

0x9606,	// (0x00027c97) midp_canvas_pane_ParamLimits

0x966a,	// (0x00027cfb) midp_keypad_pane_ParamLimits

0x966a,	// (0x00027cfb) midp_keypad_pane

0x49d8,	// (0x00023069) main_midp_pane_ParamLimits

0x72e2,	// (0x00025973) signal_pane_g2_cp_ParamLimits

0xd407,	// (0x0002ba98) aid_size_cell_midp_keypad_ParamLimits

0xd407,	// (0x0002ba98) aid_size_cell_midp_keypad

0xd421,	// (0x0002bab2) midp_keyp_game_grid_pane_ParamLimits

0xd421,	// (0x0002bab2) midp_keyp_game_grid_pane

0xd441,	// (0x0002bad2) midp_keyp_rocker_pane_ParamLimits

0xd441,	// (0x0002bad2) midp_keyp_rocker_pane

0xd47a,	// (0x0002bb0b) midp_keyp_sk_left_pane_ParamLimits

0xd47a,	// (0x0002bb0b) midp_keyp_sk_left_pane

0xd4d4,	// (0x0002bb65) midp_keyp_sk_right_pane_ParamLimits

0xd4d4,	// (0x0002bb65) midp_keyp_sk_right_pane

0x41ca,	// (0x0002285b) bg_button_pane_cp03

0xd52e,	// (0x0002bbbf) midp_keyp_sk_left_pane_g1

0x41ca,	// (0x0002285b) bg_button_pane_cp04

0xd52e,	// (0x0002bbbf) midp_keyp_sk_right_pane_g1

0x75c6,	// (0x00025c57) midp_keyp_rocker_pane_g1

0xd537,	// (0x0002bbc8) keyp_game_cell_pane_ParamLimits

0xd537,	// (0x0002bbc8) keyp_game_cell_pane

0x41ca,	// (0x0002285b) bg_button_pane_cp02

0xd54a,	// (0x0002bbdb) keyp_game_cell_pane_g1

0x8bc7,	// (0x00027258) popup_fep_vkb2_window_ParamLimits

0x8bc7,	// (0x00027258) popup_fep_vkb2_window

0xbd64,	// (0x0002a3f5) aid_size_cell_vkb2_ParamLimits

0xbd64,	// (0x0002a3f5) aid_size_cell_vkb2

0xbdb8,	// (0x0002a449) popup_fep_vkb2_window_g1_ParamLimits

0xbdb8,	// (0x0002a449) popup_fep_vkb2_window_g1

0xbdf8,	// (0x0002a489) vkb2_area_bottom_pane_ParamLimits

0xbdf8,	// (0x0002a489) vkb2_area_bottom_pane

0xbe44,	// (0x0002a4d5) vkb2_area_keypad_pane_ParamLimits

0xbe44,	// (0x0002a4d5) vkb2_area_keypad_pane

0xbe86,	// (0x0002a517) vkb2_area_top_pane_ParamLimits

0xbe86,	// (0x0002a517) vkb2_area_top_pane

0xbf00,	// (0x0002a591) vkb2_top_entry_pane_ParamLimits

0xbf00,	// (0x0002a591) vkb2_top_entry_pane

0xbf2a,	// (0x0002a5bb) vkb2_top_grid_left_pane_ParamLimits

0xbf2a,	// (0x0002a5bb) vkb2_top_grid_left_pane

0xbf48,	// (0x0002a5d9) vkb2_top_grid_right_pane_ParamLimits

0xbf48,	// (0x0002a5d9) vkb2_top_grid_right_pane

0xbf66,	// (0x0002a5f7) vkb2_cell_keypad_pane_ParamLimits

0xbf66,	// (0x0002a5f7) vkb2_cell_keypad_pane

0xc037,	// (0x0002a6c8) vkb2_area_bottom_grid_pane_ParamLimits

0xc037,	// (0x0002a6c8) vkb2_area_bottom_grid_pane

0xc05d,	// (0x0002a6ee) vkb2_area_bottom_pane_g1_ParamLimits

0xc05d,	// (0x0002a6ee) vkb2_area_bottom_pane_g1

0xc081,	// (0x0002a712) vkb2_area_bottom_pane_g2_ParamLimits

0xc081,	// (0x0002a712) vkb2_area_bottom_pane_g2

0xc0af,	// (0x0002a740) vkb2_area_bottom_pane_g3_ParamLimits

0xc0af,	// (0x0002a740) vkb2_area_bottom_pane_g3

0x0002,

0xfd98,	// (0x0002e429) vkb2_area_bottom_pane_g_ParamLimits

0xfd98,	// (0x0002e429) vkb2_area_bottom_pane_g

0xc110,	// (0x0002a7a1) vkb2_top_cell_left_pane_ParamLimits

0xc110,	// (0x0002a7a1) vkb2_top_cell_left_pane

0xd55b,	// (0x0002bbec) vkb2_top_entry_pane_g1_ParamLimits

0xd55b,	// (0x0002bbec) vkb2_top_entry_pane_g1

0xd569,	// (0x0002bbfa) vkb2_top_entry_pane_t1_ParamLimits

0xd569,	// (0x0002bbfa) vkb2_top_entry_pane_t1

0xd59b,	// (0x0002bc2c) vkb2_top_entry_pane_t2_ParamLimits

0xd59b,	// (0x0002bc2c) vkb2_top_entry_pane_t2

0xd5cd,	// (0x0002bc5e) vkb2_top_entry_pane_t3_ParamLimits

0xd5cd,	// (0x0002bc5e) vkb2_top_entry_pane_t3

0x0002,

0xfd9f,	// (0x0002e430) vkb2_top_entry_pane_t_ParamLimits

0xfd9f,	// (0x0002e430) vkb2_top_entry_pane_t

0xc15d,	// (0x0002a7ee) vkb2_top_grid_right_pane_g1_ParamLimits

0xc15d,	// (0x0002a7ee) vkb2_top_grid_right_pane_g1

0xc173,	// (0x0002a804) vkb2_top_grid_right_pane_g2_ParamLimits

0xc173,	// (0x0002a804) vkb2_top_grid_right_pane_g2

0xc18b,	// (0x0002a81c) vkb2_top_grid_right_pane_g3_ParamLimits

0xc18b,	// (0x0002a81c) vkb2_top_grid_right_pane_g3

0xc1a3,	// (0x0002a834) vkb2_top_grid_right_pane_g4_ParamLimits

0xc1a3,	// (0x0002a834) vkb2_top_grid_right_pane_g4

0x0003,

0xfda6,	// (0x0002e437) vkb2_top_grid_right_pane_g_ParamLimits

0xfda6,	// (0x0002e437) vkb2_top_grid_right_pane_g

0xc1b9,	// (0x0002a84a) vkb2_top_cell_left_pane_g1

0xc1d0,	// (0x0002a861) vkb2_cell_keypad_pane_g1_ParamLimits

0xc1d0,	// (0x0002a861) vkb2_cell_keypad_pane_g1

0xd5f1,	// (0x0002bc82) vkb2_cell_keypad_pane_t1_ParamLimits

0xd5f1,	// (0x0002bc82) vkb2_cell_keypad_pane_t1

0xc1de,	// (0x0002a86f) vkb2_cell_bottom_grid_pane_ParamLimits

0xc1de,	// (0x0002a86f) vkb2_cell_bottom_grid_pane

0xc217,	// (0x0002a8a8) vkb2_cell_bottom_grid_pane_g1

0xd19f,	// (0x0002b830) aid_call2_pane_cp02

0xd1a7,	// (0x0002b838) aid_call_pane_cp02

0xd1af,	// (0x0002b840) clock_digital_number_pane_cp10

0xd1b7,	// (0x0002b848) clock_digital_number_pane_cp11

0xd1bf,	// (0x0002b850) clock_digital_number_pane_cp12

0xd1c7,	// (0x0002b858) clock_digital_number_pane_cp13

0xd1cf,	// (0x0002b860) clock_digital_separator_pane_cp10

0x4db9,	// (0x0002344a) popup_clock_digital_analogue_window_cp2_g1

0x4db9,	// (0x0002344a) popup_clock_digital_analogue_window_cp2_g2

0xd1d7,	// (0x0002b868) popup_clock_digital_analogue_window_cp2_g3

0x4db9,	// (0x0002344a) popup_clock_digital_analogue_window_cp2_g4

0xd1d7,	// (0x0002b868) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5b,	// (0x0002e3ec) popup_clock_digital_analogue_window_cp2_g

0xd1df,	// (0x0002b870) popup_clock_digital_analogue_window_cp2_t1

0xd1ed,	// (0x0002b87e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd66,	// (0x0002e3f7) popup_clock_digital_analogue_window_cp2_t

0x75c6,	// (0x00025c57) clock_digital_number_pane_cp10_g1

0x75c6,	// (0x00025c57) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0002e1da) clock_digital_number_pane_cp10_g

0x75c6,	// (0x00025c57) clock_digital_separator_pane_cp10_g1

0x75c6,	// (0x00025c57) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0002e1da) clock_digital_separator_pane_cp10_g

0xd01c,	// (0x0002b6ad) uniindi_top_pane_g3

0xd02d,	// (0x0002b6be) uniindi_top_pane_g4

0xbff1,	// (0x0002a682) vkb2_row_keypad_pane_ParamLimits

0xbff1,	// (0x0002a682) vkb2_row_keypad_pane

0xc237,	// (0x0002a8c8) vkb2_cell_t_keypad_pane_ParamLimits

0xc237,	// (0x0002a8c8) vkb2_cell_t_keypad_pane

0xc247,	// (0x0002a8d8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc247,	// (0x0002a8d8) vkb2_cell_t_keypad_pane_cp08

0xc25a,	// (0x0002a8eb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc25a,	// (0x0002a8eb) vkb2_cell_t_keypad_pane_cp09

0xc26e,	// (0x0002a8ff) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc26e,	// (0x0002a8ff) vkb2_cell_t_keypad_pane_cp01

0xc27f,	// (0x0002a910) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc27f,	// (0x0002a910) vkb2_cell_t_keypad_pane_cp02

0xc290,	// (0x0002a921) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc290,	// (0x0002a921) vkb2_cell_t_keypad_pane_cp03

0xc2a1,	// (0x0002a932) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc2a1,	// (0x0002a932) vkb2_cell_t_keypad_pane_cp04

0xc2b2,	// (0x0002a943) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc2b2,	// (0x0002a943) vkb2_cell_t_keypad_pane_cp05

0xc2c3,	// (0x0002a954) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc2c3,	// (0x0002a954) vkb2_cell_t_keypad_pane_cp06

0xc2d4,	// (0x0002a965) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc2d4,	// (0x0002a965) vkb2_cell_t_keypad_pane_cp07

0xc2e5,	// (0x0002a976) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc2e5,	// (0x0002a976) vkb2_cell_t_keypad_pane_cp10

0xb134,	// (0x000297c5) vkb2_cell_t_keypad_pane_g1

0xd608,	// (0x0002bc99) vkb2_cell_t_keypad_pane_t1

0x8acc,	// (0x0002715d) popup_grid_graphic2_window

0xed86,	// (0x0002d417) aid_size_cell_graphic2_ParamLimits

0xed86,	// (0x0002d417) aid_size_cell_graphic2

0xedbe,	// (0x0002d44f) bg_popup_window_pane_cp21_ParamLimits

0xedbe,	// (0x0002d44f) bg_popup_window_pane_cp21

0xedcc,	// (0x0002d45d) graphic2_pages_pane_ParamLimits

0xedcc,	// (0x0002d45d) graphic2_pages_pane

0xee12,	// (0x0002d4a3) grid_graphic2_control_pane_ParamLimits

0xee12,	// (0x0002d4a3) grid_graphic2_control_pane

0xee50,	// (0x0002d4e1) grid_graphic2_pane_ParamLimits

0xee50,	// (0x0002d4e1) grid_graphic2_pane

0xeec4,	// (0x0002d555) cell_graphic2_pane

0x41ca,	// (0x0002285b) main_comp_mode_pane

0xba82,	// (0x0002a113) list_ai3_gene_pane_ParamLimits

0xcc62,	// (0x0002b2f3) bg_popup_window_pane_cp19_ParamLimits

0xcc6e,	// (0x0002b2ff) bg_touch_area_indi_pane_ParamLimits

0xcc6e,	// (0x0002b2ff) bg_touch_area_indi_pane

0xcc84,	// (0x0002b315) bg_touch_area_indi_pane_cp01_ParamLimits

0xcc84,	// (0x0002b315) bg_touch_area_indi_pane_cp01

0xcc9a,	// (0x0002b32b) bg_touch_area_indi_pane_cp02_ParamLimits

0xcc9a,	// (0x0002b32b) bg_touch_area_indi_pane_cp02

0xccb2,	// (0x0002b343) bg_touch_area_indi_pane_cp03_ParamLimits

0xccb2,	// (0x0002b343) bg_touch_area_indi_pane_cp03

0xcccc,	// (0x0002b35d) popup_slider_window_g1_ParamLimits

0xcce8,	// (0x0002b379) popup_slider_window_g2_ParamLimits

0xcd04,	// (0x0002b395) popup_slider_window_g3_ParamLimits

0xfcf0,	// (0x0002e381) popup_slider_window_g_ParamLimits

0xcd60,	// (0x0002b3f1) popup_slider_window_t1_ParamLimits

0xcdd4,	// (0x0002b465) small_volume_slider_vertical_pane_ParamLimits

0xeec4,	// (0x0002d555) cell_graphic2_pane_ParamLimits

0xef12,	// (0x0002d5a3) bg_button_pane_cp10_ParamLimits

0xef12,	// (0x0002d5a3) bg_button_pane_cp10

0xef25,	// (0x0002d5b6) bg_button_pane_cp11_ParamLimits

0xef25,	// (0x0002d5b6) bg_button_pane_cp11

0xef38,	// (0x0002d5c9) graphic2_pages_pane_g1_ParamLimits

0xef38,	// (0x0002d5c9) graphic2_pages_pane_g1

0xef53,	// (0x0002d5e4) graphic2_pages_pane_g2_ParamLimits

0xef53,	// (0x0002d5e4) graphic2_pages_pane_g2

0x0001,

0xfdb4,	// (0x0002e445) graphic2_pages_pane_g_ParamLimits

0xfdb4,	// (0x0002e445) graphic2_pages_pane_g

0xef6b,	// (0x0002d5fc) graphic2_pages_pane_t1_ParamLimits

0xef6b,	// (0x0002d5fc) graphic2_pages_pane_t1

0xef81,	// (0x0002d612) cell_graphic2_control_pane_ParamLimits

0xef81,	// (0x0002d612) cell_graphic2_control_pane

0xefa2,	// (0x0002d633) cell_graphic2_pane_g1_ParamLimits

0xefa2,	// (0x0002d633) cell_graphic2_pane_g1

0xefaf,	// (0x0002d640) cell_graphic2_pane_g2_ParamLimits

0xefaf,	// (0x0002d640) cell_graphic2_pane_g2

0xefbc,	// (0x0002d64d) cell_graphic2_pane_g3_ParamLimits

0xefbc,	// (0x0002d64d) cell_graphic2_pane_g3

0xefc9,	// (0x0002d65a) cell_graphic2_pane_g4_ParamLimits

0xefc9,	// (0x0002d65a) cell_graphic2_pane_g4

0xefd6,	// (0x0002d667) cell_graphic2_pane_g5_ParamLimits

0xefd6,	// (0x0002d667) cell_graphic2_pane_g5

0x0004,

0xfdb9,	// (0x0002e44a) cell_graphic2_pane_g_ParamLimits

0xfdb9,	// (0x0002e44a) cell_graphic2_pane_g

0xeff1,	// (0x0002d682) cell_graphic2_pane_t1_ParamLimits

0xeff1,	// (0x0002d682) cell_graphic2_pane_t1

0x5900,	// (0x00023f91) grid_highlight_pane_cp11_ParamLimits

0x5900,	// (0x00023f91) grid_highlight_pane_cp11

0x436d,	// (0x000229fe) bg_button_pane_cp05

0xf01a,	// (0x0002d6ab) cell_graphic2_control_pane_g1

0x75c6,	// (0x00025c57) bg_touch_area_indi_pane_g1

0xd61a,	// (0x0002bcab) aid_cmod_rocker_key_size

0xd624,	// (0x0002bcb5) aid_cmode_itu_key_size

0xd62e,	// (0x0002bcbf) main_cmode_video_pane

0xd638,	// (0x0002bcc9) main_comp_mode_itu_pane

0xd644,	// (0x0002bcd5) main_comp_mode_rocker_pane

0xd650,	// (0x0002bce1) cell_cmode_rocker_pane_ParamLimits

0xd650,	// (0x0002bce1) cell_cmode_rocker_pane

0xd662,	// (0x0002bcf3) cell_cmode_itu_pane_ParamLimits

0xd662,	// (0x0002bcf3) cell_cmode_itu_pane

0x4881,	// (0x00022f12) bg_button_pane_cp06_ParamLimits

0x4881,	// (0x00022f12) bg_button_pane_cp06

0x784d,	// (0x00025ede) cell_cmode_rocker_pane_g1_ParamLimits

0x784d,	// (0x00025ede) cell_cmode_rocker_pane_g1

0xce78,	// (0x0002b509) cell_cmode_rocker_pane_g2_ParamLimits

0xce78,	// (0x0002b509) cell_cmode_rocker_pane_g2

0x0001,

0xfdc9,	// (0x0002e45a) cell_cmode_rocker_pane_g_ParamLimits

0xfdc9,	// (0x0002e45a) cell_cmode_rocker_pane_g

0x41ca,	// (0x0002285b) bg_button_pane_cp07

0xd677,	// (0x0002bd08) cell_cmode_itu_pane_g1

0xd680,	// (0x0002bd11) cell_cmode_itu_pane_t1

0xd68e,	// (0x0002bd1f) cell_cmode_itu_pane_t2

0x0001,

0xfdce,	// (0x0002e45f) cell_cmode_itu_pane_t

0xd09e,	// (0x0002b72f) aid_touch_ctrl_left

0xd0a6,	// (0x0002b737) aid_touch_ctrl_right

0x41ca,	// (0x0002285b) compa_mode_pane

0xf042,	// (0x0002d6d3) aid_cmod_rocker_key_size_cp

0xf04c,	// (0x0002d6dd) aid_cmode_itu_key_size_cp

0xd69c,	// (0x0002bd2d) compa_mode_pane_g1

0xd6a4,	// (0x0002bd35) compa_mode_pane_g2

0xd6ac,	// (0x0002bd3d) compa_mode_pane_g3

0x0002,

0xfdd3,	// (0x0002e464) compa_mode_pane_g

0xf056,	// (0x0002d6e7) main_comp_mode_itu_pane_cp

0xf05e,	// (0x0002d6ef) main_comp_mode_rocker_pane_cp

0xf066,	// (0x0002d6f7) cell_cmode_itu_pane_cp_ParamLimits

0xf066,	// (0x0002d6f7) cell_cmode_itu_pane_cp

0xf07b,	// (0x0002d70c) cell_cmode_rocker_pane_cp_ParamLimits

0xf07b,	// (0x0002d70c) cell_cmode_rocker_pane_cp

0x4881,	// (0x00022f12) bg_button_pane_cp06_cp_ParamLimits

0x4881,	// (0x00022f12) bg_button_pane_cp06_cp

0x784d,	// (0x00025ede) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x784d,	// (0x00025ede) cell_cmode_rocker_pane_g1_cp

0x75c6,	// (0x00025c57) cell_cmode_rocker_pane_g2_cp

0x41ca,	// (0x0002285b) bg_button_pane_cp07_cp

0xf08d,	// (0x0002d71e) cell_cmode_itu_pane_g1_cp

0xf096,	// (0x0002d727) cell_cmode_itu_pane_t1_cp

0xf096,	// (0x0002d727) cell_cmode_itu_pane_t2_cp

0xa834,	// (0x00028ec5) settings_code_pane_cp2

0x423a,	// (0x000228cb) bg_popup_window_pane_cp3_ParamLimits

0x453b,	// (0x00022bcc) heading_pane_cp3_ParamLimits

0x4547,	// (0x00022bd8) listscroll_popup_graphic_pane_ParamLimits

0xadf3,	// (0x00029484) fep_hwr_aid_pane_ParamLimits

0xbcbf,	// (0x0002a350) aid_touch_sctrl_top_ParamLimits

0xbcda,	// (0x0002a36b) sctrl_sk_top_pane_g1_ParamLimits

0xb134,	// (0x000297c5) sctrl_sk_top_pane_g2_ParamLimits

0xfd09,	// (0x0002e39a) sctrl_sk_top_pane_g_ParamLimits

0xbce7,	// (0x0002a378) sctrl_sk_top_pane_t1_ParamLimits

0xbcbf,	// (0x0002a350) aid_touch_sctrl_bottom_ParamLimits

0xbce7,	// (0x0002a378) sctrl_sk_bottom_pane_t1_ParamLimits

0xcfe8,	// (0x0002b679) aid_area_touch_clock

0xbec8,	// (0x0002a559) aid_vkb2_area_top_pane_cell_ParamLimits

0xbec8,	// (0x0002a559) aid_vkb2_area_top_pane_cell

0xc013,	// (0x0002a6a4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc013,	// (0x0002a6a4) aid_vkb2_area_bottom_pane_cell

0xd553,	// (0x0002bbe4) popup_char_count_window

0xd6b4,	// (0x0002bd45) popup_char_count_window_g1

0xd6bd,	// (0x0002bd4e) popup_char_count_window_g2

0xd6c6,	// (0x0002bd57) popup_char_count_window_g3

0x0002,

0xfdda,	// (0x0002e46b) popup_char_count_window_g

0xd6cf,	// (0x0002bd60) popup_char_count_window_t1

0xbd96,	// (0x0002a427) popup_fep_char_preview_window_ParamLimits

0xbd96,	// (0x0002a427) popup_fep_char_preview_window

0xbee6,	// (0x0002a577) vkb2_top_candi_pane_ParamLimits

0xbee6,	// (0x0002a577) vkb2_top_candi_pane

0xf0a4,	// (0x0002d735) cell_vkb2_top_candi_pane_ParamLimits

0xf0a4,	// (0x0002d735) cell_vkb2_top_candi_pane

0xc2fa,	// (0x0002a98b) bg_popup_fep_char_preview_window_ParamLimits

0xc2fa,	// (0x0002a98b) bg_popup_fep_char_preview_window

0xc308,	// (0x0002a999) popup_fep_char_preview_window_t1_ParamLimits

0xc308,	// (0x0002a999) popup_fep_char_preview_window_t1

0xd6dd,	// (0x0002bd6e) bg_popup_fep_char_preview_window_g1

0xd6e5,	// (0x0002bd76) bg_popup_fep_char_preview_window_g2

0xd6ed,	// (0x0002bd7e) bg_popup_fep_char_preview_window_g3

0xd6f5,	// (0x0002bd86) bg_popup_fep_char_preview_window_g4

0xd6fd,	// (0x0002bd8e) bg_popup_fep_char_preview_window_g5

0xc342,	// (0x0002a9d3) bg_popup_fep_char_preview_window_g6

0xd705,	// (0x0002bd96) bg_popup_fep_char_preview_window_g7

0xd70d,	// (0x0002bd9e) bg_popup_fep_char_preview_window_g8

0xd715,	// (0x0002bda6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde1,	// (0x0002e472) bg_popup_fep_char_preview_window_g

0xb134,	// (0x000297c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb134,	// (0x000297c5) cell_vkb2_top_candi_pane_g1

0xb142,	// (0x000297d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xb142,	// (0x000297d3) cell_vkb2_top_candi_pane_g2

0xca44,	// (0x0002b0d5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xca44,	// (0x0002b0d5) cell_vkb2_top_candi_pane_g3

0xc34a,	// (0x0002a9db) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc34a,	// (0x0002a9db) cell_vkb2_top_candi_pane_g4

0x7c4a,	// (0x000262db) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c4a,	// (0x000262db) cell_vkb2_top_candi_pane_g5

0xc36b,	// (0x0002a9fc) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc36b,	// (0x0002a9fc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf4,	// (0x0002e485) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf4,	// (0x0002e485) cell_vkb2_top_candi_pane_g

0xc379,	// (0x0002aa0a) cell_vkb2_top_candi_pane_t1

0xa673,	// (0x00028d04) aid_size_touch_slider_mark_ParamLimits

0xa673,	// (0x00028d04) aid_size_touch_slider_mark

0xee02,	// (0x0002d493) grid_graphic2_catg_pane_ParamLimits

0xee02,	// (0x0002d493) grid_graphic2_catg_pane

0xeea0,	// (0x0002d531) popup_grid_graphic2_window_t1_ParamLimits

0xeea0,	// (0x0002d531) popup_grid_graphic2_window_t1

0xeeb2,	// (0x0002d543) popup_grid_graphic2_window_t2_ParamLimits

0xeeb2,	// (0x0002d543) popup_grid_graphic2_window_t2

0x0001,

0xfdaf,	// (0x0002e440) popup_grid_graphic2_window_t_ParamLimits

0xfdaf,	// (0x0002e440) popup_grid_graphic2_window_t

0x436d,	// (0x000229fe) bg_button_pane_cp05_ParamLimits

0xf01a,	// (0x0002d6ab) cell_graphic2_control_pane_g1_ParamLimits

0xf0f1,	// (0x0002d782) cell_graphic2_catg_pane_ParamLimits

0xf0f1,	// (0x0002d782) cell_graphic2_catg_pane

0x41ca,	// (0x0002285b) bg_button_pane_cp12

0xf103,	// (0x0002d794) cell_graphic2_catg_pane_g1

0xcfb4,	// (0x0002b645) cell_tb_ext_pane_t1_ParamLimits

0xc130,	// (0x0002a7c1) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc130,	// (0x0002a7c1) vkb2_top_cell_right_narrow_pane

0xc148,	// (0x0002a7d9) vkb2_top_cell_right_wide_pane_ParamLimits

0xc148,	// (0x0002a7d9) vkb2_top_cell_right_wide_pane

0xade5,	// (0x00029476) bg_vkb2_func_pane_ParamLimits

0xade5,	// (0x00029476) bg_vkb2_func_pane

0xc1b9,	// (0x0002a84a) vkb2_top_cell_left_pane_g1_ParamLimits

0xade5,	// (0x00029476) bg_vkb2_fuc_pane_cp03_ParamLimits

0xade5,	// (0x00029476) bg_vkb2_fuc_pane_cp03

0xc217,	// (0x0002a8a8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5820,	// (0x00023eb1) bg_vkb2_func_pane_g1

0x5818,	// (0x00023ea9) bg_vkb2_func_pane_g2

0x5828,	// (0x00023eb9) bg_vkb2_func_pane_g3

0x5830,	// (0x00023ec1) bg_vkb2_func_pane_g4

0x5838,	// (0x00023ec9) bg_vkb2_func_pane_g5

0x5840,	// (0x00023ed1) bg_vkb2_func_pane_g6

0x5850,	// (0x00023ee1) bg_vkb2_func_pane_g7

0x5848,	// (0x00023ed9) bg_vkb2_func_pane_g8

0x5810,	// (0x00023ea1) bg_vkb2_func_pane_g9

0x0008,

0xfe01,	// (0x0002e492) bg_vkb2_func_pane_g

0xade5,	// (0x00029476) bg_vkb2_fuc_pane_cp01_ParamLimits

0xade5,	// (0x00029476) bg_vkb2_fuc_pane_cp01

0xc1b9,	// (0x0002a84a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc1b9,	// (0x0002a84a) vkb2_top_cell_right_wide_pane_g1

0xade5,	// (0x00029476) bg_vkb2_fuc_pane_cp02_ParamLimits

0xade5,	// (0x00029476) bg_vkb2_fuc_pane_cp02

0xc217,	// (0x0002a8a8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc217,	// (0x0002a8a8) vkb2_top_cell_right_narrow_pane_g1

0xcbe0,	// (0x0002b271) aid_touch_area_decrease_ParamLimits

0xcbe0,	// (0x0002b271) aid_touch_area_decrease

0xcc04,	// (0x0002b295) aid_touch_area_increase_ParamLimits

0xcc04,	// (0x0002b295) aid_touch_area_increase

0xcc10,	// (0x0002b2a1) aid_touch_area_mute_ParamLimits

0xcc10,	// (0x0002b2a1) aid_touch_area_mute

0xcc34,	// (0x0002b2c5) aid_touch_area_slider_ParamLimits

0xcc34,	// (0x0002b2c5) aid_touch_area_slider

0xcd20,	// (0x0002b3b1) popup_slider_window_g4_ParamLimits

0xcd20,	// (0x0002b3b1) popup_slider_window_g4

0xcd2c,	// (0x0002b3bd) popup_slider_window_g5_ParamLimits

0xcd2c,	// (0x0002b3bd) popup_slider_window_g5

0xcd4e,	// (0x0002b3df) popup_slider_window_g6_ParamLimits

0xcd4e,	// (0x0002b3df) popup_slider_window_g6

0xcd8e,	// (0x0002b41f) popup_slider_window_t2_ParamLimits

0xcd8e,	// (0x0002b41f) popup_slider_window_t2

0x0001,

0xfcfd,	// (0x0002e38e) popup_slider_window_t_ParamLimits

0xfcfd,	// (0x0002e38e) popup_slider_window_t

0xcda6,	// (0x0002b437) slider_pane_ParamLimits

0xcda6,	// (0x0002b437) slider_pane

0xd71d,	// (0x0002bdae) slider_pane_g1_ParamLimits

0xd71d,	// (0x0002bdae) slider_pane_g1

0xd731,	// (0x0002bdc2) slider_pane_g2_ParamLimits

0xd731,	// (0x0002bdc2) slider_pane_g2

0xd747,	// (0x0002bdd8) slider_pane_g3_ParamLimits

0xd747,	// (0x0002bdd8) slider_pane_g3

0x0003,

0xfe14,	// (0x0002e4a5) slider_pane_g_ParamLimits

0xfe14,	// (0x0002e4a5) slider_pane_g

0x9ce6,	// (0x00028377) popup_tb_float_extension_window_ParamLimits

0x9ce6,	// (0x00028377) popup_tb_float_extension_window

0xd773,	// (0x0002be04) aid_size_cell_tb_float_ext

0x41ca,	// (0x0002285b) bg_popup_sub_window_cp28

0xd77f,	// (0x0002be10) grid_tb_float_ext_pane

0xd789,	// (0x0002be1a) cell_tb_float_ext_pane_ParamLimits

0xd789,	// (0x0002be1a) cell_tb_float_ext_pane

0xd7a3,	// (0x0002be34) cell_tb_float_ext_pane_g1

0xd7ac,	// (0x0002be3d) grid_highlight_pane_cp12

0xaf34,	// (0x000295c5) cell_last_hwr_side_pane_ParamLimits

0xaf34,	// (0x000295c5) cell_last_hwr_side_pane

0x75c6,	// (0x00025c57) cell_last_hwr_side_pane_g1

0xd7b5,	// (0x0002be46) cell_last_hwr_side_pane_g2

0x0001,

0xfe1d,	// (0x0002e4ae) cell_last_hwr_side_pane_g

0xc0df,	// (0x0002a770) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc0df,	// (0x0002a770) vkb2_area_bottom_space_btn_pane

0xb134,	// (0x000297c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd608,	// (0x0002bc99) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc379,	// (0x0002aa0a) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc398,	// (0x0002aa29) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc398,	// (0x0002aa29) vkb2_area_bottom_space_btn_pane_g1

0xc3d2,	// (0x0002aa63) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xc3d2,	// (0x0002aa63) vkb2_area_bottom_space_btn_pane_g2

0xc408,	// (0x0002aa99) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xc408,	// (0x0002aa99) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe22,	// (0x0002e4b3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe22,	// (0x0002e4b3) vkb2_area_bottom_space_btn_pane_g

0xaea8,	// (0x00029539) cel_fep_hwr_func_pane_ParamLimits

0xaea8,	// (0x00029539) cel_fep_hwr_func_pane

0xaee4,	// (0x00029575) cell_hwr_side_button_pane_ParamLimits

0xaee4,	// (0x00029575) cell_hwr_side_button_pane

0xcfe8,	// (0x0002b679) aid_area_touch_clock_ParamLimits

0x436d,	// (0x000229fe) bg_uniindi_top_pane_ParamLimits

0xcffa,	// (0x0002b68b) uniindi_top_pane_g1_ParamLimits

0xd010,	// (0x0002b6a1) uniindi_top_pane_g2_ParamLimits

0xd01c,	// (0x0002b6ad) uniindi_top_pane_g3_ParamLimits

0xd02d,	// (0x0002b6be) uniindi_top_pane_g4_ParamLimits

0xfd35,	// (0x0002e3c6) uniindi_top_pane_g_ParamLimits

0xd03a,	// (0x0002b6cb) uniindi_top_pane_t1_ParamLimits

0x436d,	// (0x000229fe) bg_vkb2_func_pane_cp01_ParamLimits

0x436d,	// (0x000229fe) bg_vkb2_func_pane_cp01

0xd7be,	// (0x0002be4f) cel_fep_hwr_func_pane_g1_ParamLimits

0xd7be,	// (0x0002be4f) cel_fep_hwr_func_pane_g1

0x436d,	// (0x000229fe) bg_vkb2_func_pane_cp02_ParamLimits

0x436d,	// (0x000229fe) bg_vkb2_func_pane_cp02

0xd7be,	// (0x0002be4f) cell_hwr_side_button_pane_g1_ParamLimits

0xd7be,	// (0x0002be4f) cell_hwr_side_button_pane_g1

0x5728,	// (0x00023db9) status_pane_g4_ParamLimits

0x5728,	// (0x00023db9) status_pane_g4

0x5740,	// (0x00023dd1) status_pane_t1

0x7455,	// (0x00025ae6) form2_midp_gauge_slider_cont_pane

0x745d,	// (0x00025aee) form2_midp_gauge_slider_pane_t1_ParamLimits

0xac58,	// (0x000292e9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xac6a,	// (0x000292fb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0002e18d) form2_midp_gauge_slider_pane_t_ParamLimits

0x746f,	// (0x00025b00) form2_midp_slider_pane_ParamLimits

0xbd56,	// (0x0002a3e7) aid_size_cell_func_vkb2_ParamLimits

0xbd56,	// (0x0002a3e7) aid_size_cell_func_vkb2

0xd75f,	// (0x0002bdf0) slider_pane_g4_ParamLimits

0xd75f,	// (0x0002bdf0) slider_pane_g4

0xc452,	// (0x0002aae3) form2_midp_gauge_slider_pane_t2_cp01

0xc460,	// (0x0002aaf1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc460,	// (0x0002aaf1) form2_midp_gauge_slider_pane_t3_cp01

0xc47d,	// (0x0002ab0e) form2_midp_slider_pane_cp01

0x41ca,	// (0x0002285b) navi_smil_pane

0xd7ee,	// (0x0002be7f) navi_smil_pane_g1

0xd7f6,	// (0x0002be87) navi_smil_pane_t1

0xd7cc,	// (0x0002be5d) form2_midp_slider_pane_g1

0xd7d5,	// (0x0002be66) form2_midp_slider_pane_g2

0xd7dd,	// (0x0002be6e) form2_midp_slider_pane_g3

0xd7cc,	// (0x0002be5d) form2_midp_slider_pane_g4

0xf10c,	// (0x0002d79d) form2_midp_slider_pane_g5

0x0004,

0xfe2b,	// (0x0002e4bc) form2_midp_slider_pane_g

0xc442,	// (0x0002aad3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc442,	// (0x0002aad3) vkb2_area_bottom_space_btn_pane_g4

0x9e51,	// (0x000284e2) lc0_navi_pane_ParamLimits

0x9e51,	// (0x000284e2) lc0_navi_pane

0x9ec7,	// (0x00028558) lc0_stat_indi_pane_ParamLimits

0x9ec7,	// (0x00028558) lc0_stat_indi_pane

0x9ede,	// (0x0002856f) ls0_title_pane_ParamLimits

0x9ede,	// (0x0002856f) ls0_title_pane

0x4881,	// (0x00022f12) bg_popup_sub_pane_cp14_ParamLimits

0xcfcf,	// (0x0002b660) list_uniindi_pane_ParamLimits

0xcfdb,	// (0x0002b66c) uniindi_top_pane_ParamLimits

0xd076,	// (0x0002b707) list_single_uniindi_pane_g1_ParamLimits

0xd089,	// (0x0002b71a) list_single_uniindi_pane_t1_ParamLimits

0xc486,	// (0x0002ab17) lc0_stat_clock_pane_ParamLimits

0xc486,	// (0x0002ab17) lc0_stat_clock_pane

0xf115,	// (0x0002d7a6) lc0_stat_indi_pane_g1_ParamLimits

0xf115,	// (0x0002d7a6) lc0_stat_indi_pane_g1

0xf122,	// (0x0002d7b3) lc0_stat_indi_pane_g2_ParamLimits

0xf122,	// (0x0002d7b3) lc0_stat_indi_pane_g2

0x0001,

0xfe36,	// (0x0002e4c7) lc0_stat_indi_pane_g_ParamLimits

0xfe36,	// (0x0002e4c7) lc0_stat_indi_pane_g

0xc493,	// (0x0002ab24) lc0_uni_indicator_pane_ParamLimits

0xc493,	// (0x0002ab24) lc0_uni_indicator_pane

0xf12f,	// (0x0002d7c0) ls0_title_pane_g1_ParamLimits

0xf12f,	// (0x0002d7c0) ls0_title_pane_g1

0xf143,	// (0x0002d7d4) ls0_title_pane_t1_ParamLimits

0xf143,	// (0x0002d7d4) ls0_title_pane_t1

0xc4a0,	// (0x0002ab31) lc0_uni_indicator_pane_g1_ParamLimits

0xc4a0,	// (0x0002ab31) lc0_uni_indicator_pane_g1

0xd804,	// (0x0002be95) lc0_stat_clock_pane_t1

0x41ca,	// (0x0002285b) main_ai5_pane

0xd812,	// (0x0002bea3) ai5_sk_pane_ParamLimits

0xd812,	// (0x0002bea3) ai5_sk_pane

0xf179,	// (0x0002d80a) cell_ai5_widget_pane_ParamLimits

0xf179,	// (0x0002d80a) cell_ai5_widget_pane

0xd81f,	// (0x0002beb0) aid_size_cell_widget_grid

0xd833,	// (0x0002bec4) bg_ai5_widget_pane_ParamLimits

0xd833,	// (0x0002bec4) bg_ai5_widget_pane

0xf223,	// (0x0002d8b4) cell_ai5_widget_pane_g2

0xf233,	// (0x0002d8c4) cell_ai5_widget_pane_g3

0xf252,	// (0x0002d8e3) cell_ai5_widget_pane_g4

0xf25e,	// (0x0002d8ef) cell_ai5_widget_pane_g5

0xf26a,	// (0x0002d8fb) cell_ai5_widget_pane_g6

0xf276,	// (0x0002d907) cell_ai5_widget_pane_g7

0xf2be,	// (0x0002d94f) cell_ai5_widget_pane_t1_ParamLimits

0xf2be,	// (0x0002d94f) cell_ai5_widget_pane_t1

0xf2db,	// (0x0002d96c) cell_ai5_widget_pane_t2_ParamLimits

0xf2db,	// (0x0002d96c) cell_ai5_widget_pane_t2

0xf2f3,	// (0x0002d984) cell_ai5_widget_pane_t3_ParamLimits

0xf2f3,	// (0x0002d984) cell_ai5_widget_pane_t3

0xf30b,	// (0x0002d99c) cell_ai5_widget_pane_t4_ParamLimits

0xf30b,	// (0x0002d99c) cell_ai5_widget_pane_t4

0xf325,	// (0x0002d9b6) cell_ai5_widget_pane_t5_ParamLimits

0xf325,	// (0x0002d9b6) cell_ai5_widget_pane_t5

0xd83f,	// (0x0002bed0) cell_ai5_widget_pane_t6_ParamLimits

0xd83f,	// (0x0002bed0) cell_ai5_widget_pane_t6

0xd851,	// (0x0002bee2) cell_ai5_widget_pane_t7_ParamLimits

0xd851,	// (0x0002bee2) cell_ai5_widget_pane_t7

0xf344,	// (0x0002d9d5) cell_ai5_widget_pane_t8_ParamLimits

0xf344,	// (0x0002d9d5) cell_ai5_widget_pane_t8

0x0009,

0xfe50,	// (0x0002e4e1) cell_ai5_widget_pane_t_ParamLimits

0xfe50,	// (0x0002e4e1) cell_ai5_widget_pane_t

0xf390,	// (0x0002da21) grid_ai5_widget_pane

0x4881,	// (0x00022f12) highlight_cell_ai5_widget_pane_ParamLimits

0x4881,	// (0x00022f12) highlight_cell_ai5_widget_pane

0xf3a6,	// (0x0002da37) ai5_sk_left_pane

0xf3b0,	// (0x0002da41) ai5_sk_middle_pane

0xf3ba,	// (0x0002da4b) ai5_sk_right_pane

0xd86a,	// (0x0002befb) bg_ai5_widget_pane_g1_ParamLimits

0xd86a,	// (0x0002befb) bg_ai5_widget_pane_g1

0xd876,	// (0x0002bf07) bg_ai5_widget_pane_g2_ParamLimits

0xd876,	// (0x0002bf07) bg_ai5_widget_pane_g2

0xd882,	// (0x0002bf13) bg_ai5_widget_pane_g3_ParamLimits

0xd882,	// (0x0002bf13) bg_ai5_widget_pane_g3

0xd88e,	// (0x0002bf1f) bg_ai5_widget_pane_g4_ParamLimits

0xd88e,	// (0x0002bf1f) bg_ai5_widget_pane_g4

0xd89a,	// (0x0002bf2b) bg_ai5_widget_pane_g5_ParamLimits

0xd89a,	// (0x0002bf2b) bg_ai5_widget_pane_g5

0xd8a6,	// (0x0002bf37) bg_ai5_widget_pane_g6_ParamLimits

0xd8a6,	// (0x0002bf37) bg_ai5_widget_pane_g6

0xd8b2,	// (0x0002bf43) bg_ai5_widget_pane_g7_ParamLimits

0xd8b2,	// (0x0002bf43) bg_ai5_widget_pane_g7

0xd8be,	// (0x0002bf4f) bg_ai5_widget_pane_g8_ParamLimits

0xd8be,	// (0x0002bf4f) bg_ai5_widget_pane_g8

0xd8ca,	// (0x0002bf5b) bg_ai5_widget_pane_g9_ParamLimits

0xd8ca,	// (0x0002bf5b) bg_ai5_widget_pane_g9

0x0008,

0xfe65,	// (0x0002e4f6) bg_ai5_widget_pane_g_ParamLimits

0xfe65,	// (0x0002e4f6) bg_ai5_widget_pane_g

0xd8fd,	// (0x0002bf8e) cell_shortcut_ai5_widget_pane_ParamLimits

0xd8fd,	// (0x0002bf8e) cell_shortcut_ai5_widget_pane

0x4276,	// (0x00022907) bg_cell_shortcut_ai5_widget_pane

0xd90e,	// (0x0002bf9f) cell_grid_ai5_widget_pane_g1

0xd917,	// (0x0002bfa8) highlight_cell_shortcut_ai5_widget_pane

0x5820,	// (0x00023eb1) ai5_sk_left_pane_g1

0xd91f,	// (0x0002bfb0) ai5_sk_left_pane_g2

0xd927,	// (0x0002bfb8) ai5_sk_left_pane_g3

0xd92f,	// (0x0002bfc0) ai5_sk_left_pane_g4

0x0003,

0xfe78,	// (0x0002e509) ai5_sk_left_pane_g

0xd937,	// (0x0002bfc8) ai5_sk_left_pane_t1

0x5818,	// (0x00023ea9) ai5_sk_right_pane_g1

0xd945,	// (0x0002bfd6) ai5_sk_right_pane_g2

0xd94d,	// (0x0002bfde) ai5_sk_right_pane_g3

0xd955,	// (0x0002bfe6) ai5_sk_right_pane_g4

0x0003,

0xfe81,	// (0x0002e512) ai5_sk_right_pane_g

0xd95d,	// (0x0002bfee) ai5_sk_right_pane_t1

0x5818,	// (0x00023ea9) ai5_sk_middle_pane_g1

0x5820,	// (0x00023eb1) ai5_sk_middle_pane_g2

0x5838,	// (0x00023ec9) ai5_sk_middle_pane_g3

0xd94d,	// (0x0002bfde) ai5_sk_middle_pane_g4

0xd927,	// (0x0002bfb8) ai5_sk_middle_pane_g5

0xd96b,	// (0x0002bffc) ai5_sk_middle_pane_g6

0xf3c4,	// (0x0002da55) ai5_sk_middle_pane_g7

0x0006,

0xfe8a,	// (0x0002e51b) ai5_sk_middle_pane_g

0x9d96,	// (0x00028427) aid_touch_area_size_lc0_ParamLimits

0x9d96,	// (0x00028427) aid_touch_area_size_lc0

0xb163,	// (0x000297f4) cell_hwr_candidate_pane_t1_ParamLimits

0x564a,	// (0x00023cdb) aid_touch_navi_pane

0x9fb4,	// (0x00028645) status_dt_navi_pane_ParamLimits

0x9fb4,	// (0x00028645) status_dt_navi_pane

0x9fc1,	// (0x00028652) status_dt_sta_pane_ParamLimits

0x9fc1,	// (0x00028652) status_dt_sta_pane

0xf3cc,	// (0x0002da5d) dt_sta_controll_pane

0xf3d9,	// (0x0002da6a) dt_sta_indi_pane

0xf3ea,	// (0x0002da7b) dt_sta_title_pane

0x436d,	// (0x000229fe) bg_dt_sta_indi_pane_ParamLimits

0x436d,	// (0x000229fe) bg_dt_sta_indi_pane

0xf3fd,	// (0x0002da8e) dt_sta_battery_pane

0xf405,	// (0x0002da96) dt_sta_indi_pane_g1

0xd973,	// (0x0002c004) dt_sta_indi_pane_g2

0xd97c,	// (0x0002c00d) dt_sta_indi_pane_g3

0x0002,

0xfe99,	// (0x0002e52a) dt_sta_indi_pane_g

0xd985,	// (0x0002c016) dt_sta_signal_pane

0x4881,	// (0x00022f12) bg_dt_sta_title_pane_ParamLimits

0x4881,	// (0x00022f12) bg_dt_sta_title_pane

0x64ed,	// (0x00024b7e) dt_sta_title_pane_g1

0xf40e,	// (0x0002da9f) dt_sta_title_pane_t1_ParamLimits

0xf40e,	// (0x0002da9f) dt_sta_title_pane_t1

0x41ca,	// (0x0002285b) bg_dt_sta_control_pane

0xf423,	// (0x0002dab4) dt_sta_controll_pane_g1

0xd98e,	// (0x0002c01f) bg_dt_sta_title_pane_g1

0xd997,	// (0x0002c028) bg_dt_sta_title_pane_g2

0xd9a0,	// (0x0002c031) bg_dt_sta_title_pane_g3

0x0002,

0xfea0,	// (0x0002e531) bg_dt_sta_title_pane_g

0x75c6,	// (0x00025c57) bg_dt_sta_indi_pane_g1

0xd9a9,	// (0x0002c03a) dt_sta_signal_pane_g1

0xd9b1,	// (0x0002c042) dt_sta_signal_pane_g2

0x0001,

0xfea7,	// (0x0002e538) dt_sta_signal_pane_g

0xd9b9,	// (0x0002c04a) dt_sta_battery_pane_g1

0xd9c2,	// (0x0002c053) dt_sta_battery_pane_t1

0x75c6,	// (0x00025c57) bg_dt_sta_control_pane_g1

0x4e37,	// (0x000234c8) fep_china_uni_eep_pane

0x4e3f,	// (0x000234d0) fep_china_uni_entry_pane_ParamLimits

0x4e4f,	// (0x000234e0) popup_fep_china_uni_window_g1_ParamLimits

0x4e5f,	// (0x000234f0) popup_fep_china_uni_window_g2_ParamLimits

0x4e5f,	// (0x000234f0) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0002ddc1) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0002ddc1) popup_fep_china_uni_window_g

0xd9d1,	// (0x0002c062) fep_china_uni_eep_pane_g1

0xd9d9,	// (0x0002c06a) fep_china_uni_eep_pane_t1

0xd7e5,	// (0x0002be76) aid_touch_area_size_smil_player

0x56fb,	// (0x00023d8c) lc0_clock_pane

0x5734,	// (0x00023dc5) status_pane_g5_ParamLimits

0x5734,	// (0x00023dc5) status_pane_g5

0x99f8,	// (0x00028089) popup_keymap_window

0x5714,	// (0x00023da5) status_icon_pane

0xf233,	// (0x0002d8c4) cell_ai5_widget_pane_g3_ParamLimits

0xf252,	// (0x0002d8e3) cell_ai5_widget_pane_g4_ParamLimits

0xf25e,	// (0x0002d8ef) cell_ai5_widget_pane_g5_ParamLimits

0xf282,	// (0x0002d913) cell_ai5_widget_pane_g8_ParamLimits

0xf282,	// (0x0002d913) cell_ai5_widget_pane_g8

0xf296,	// (0x0002d927) cell_ai5_widget_pane_g9_ParamLimits

0xf296,	// (0x0002d927) cell_ai5_widget_pane_g9

0xf2aa,	// (0x0002d93b) cell_ai5_widget_pane_g10_ParamLimits

0xf2aa,	// (0x0002d93b) cell_ai5_widget_pane_g10

0xd9e8,	// (0x0002c079) status_icon_pane_g1

0x41ca,	// (0x0002285b) bg_popup_sub_pane_cp13

0xd9f0,	// (0x0002c081) popup_keymap_window_t1

0x97df,	// (0x00027e70) control_pane_g6_ParamLimits

0x97df,	// (0x00027e70) control_pane_g6

0x97ec,	// (0x00027e7d) control_pane_g7_ParamLimits

0x97ec,	// (0x00027e7d) control_pane_g7

0x97f9,	// (0x00027e8a) control_pane_g8_ParamLimits

0x97f9,	// (0x00027e8a) control_pane_g8

0xf3cc,	// (0x0002da5d) dt_sta_controll_pane_ParamLimits

0xf3d9,	// (0x0002da6a) dt_sta_indi_pane_ParamLimits

0xf3ea,	// (0x0002da7b) dt_sta_title_pane_ParamLimits

0x47c3,	// (0x00022e54) aid_size_touch_scroll_bar_cale

0x8ba5,	// (0x00027236) popup_discreet_window_ParamLimits

0x8ba5,	// (0x00027236) popup_discreet_window

0x8c1f,	// (0x000272b0) popup_sk_window

0x5dbd,	// (0x0002444e) bg_popup_sub_pane_cp28_ParamLimits

0x5dbd,	// (0x0002444e) bg_popup_sub_pane_cp28

0xd9fe,	// (0x0002c08f) popup_discreet_window_g1_ParamLimits

0xd9fe,	// (0x0002c08f) popup_discreet_window_g1

0xda1e,	// (0x0002c0af) popup_discreet_window_t1_ParamLimits

0xda1e,	// (0x0002c0af) popup_discreet_window_t1

0xda3c,	// (0x0002c0cd) popup_discreet_window_t2_ParamLimits

0xda3c,	// (0x0002c0cd) popup_discreet_window_t2

0x0002,

0xfeac,	// (0x0002e53d) popup_discreet_window_t_ParamLimits

0xfeac,	// (0x0002e53d) popup_discreet_window_t

0xc4b6,	// (0x0002ab47) popup_sk_window_g1

0xc4c0,	// (0x0002ab51) popup_sk_window_g2

0x0001,

0xfeb3,	// (0x0002e544) popup_sk_window_g

0xda8e,	// (0x0002c11f) popup_sk_window_t1

0xda9c,	// (0x0002c12d) popup_sk_window_t1_copy1

0xf223,	// (0x0002d8b4) cell_ai5_widget_pane_g2_ParamLimits

0xf356,	// (0x0002d9e7) cell_ai5_widget_pane_t9_ParamLimits

0xf356,	// (0x0002d9e7) cell_ai5_widget_pane_t9

0x41ca,	// (0x0002285b) main_fep_fshwr2_pane

0xf42c,	// (0x0002dabd) aid_fshwr2_btn_pane

0xf434,	// (0x0002dac5) aid_fshwr2_syb_pane

0xf43c,	// (0x0002dacd) aid_fshwr2_txt_pane

0xf444,	// (0x0002dad5) fshwr2_func_candi_pane

0xf450,	// (0x0002dae1) fshwr2_hwr_syb_pane

0xf45c,	// (0x0002daed) fshwr2_icf_pane

0x41ca,	// (0x0002285b) fshwr2_icf_bg_pane

0xf466,	// (0x0002daf7) fshwr2_icf_pane_t1_ParamLimits

0xf466,	// (0x0002daf7) fshwr2_icf_pane_t1

0x75c6,	// (0x00025c57) fshwr2_func_candi_pane_g1

0xdabe,	// (0x0002c14f) fshwr2_func_candi_row_pane_ParamLimits

0xdabe,	// (0x0002c14f) fshwr2_func_candi_row_pane

0xf47d,	// (0x0002db0e) cell_fshwr2_syb_pane_ParamLimits

0xf47d,	// (0x0002db0e) cell_fshwr2_syb_pane

0x784d,	// (0x00025ede) fshwr2_hwr_syb_pane_g1_ParamLimits

0x784d,	// (0x00025ede) fshwr2_hwr_syb_pane_g1

0x41ca,	// (0x0002285b) bg_popup_call_pane_cp01

0xdacf,	// (0x0002c160) fshwr2_func_candi_cell_pane_ParamLimits

0xdacf,	// (0x0002c160) fshwr2_func_candi_cell_pane

0xdb00,	// (0x0002c191) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdb00,	// (0x0002c191) fshwr2_func_candi_cell_bg_pane

0xdb1a,	// (0x0002c1ab) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdb1a,	// (0x0002c1ab) fshwr2_func_candi_cell_pane_g1

0xdb3a,	// (0x0002c1cb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdb3a,	// (0x0002c1cb) fshwr2_func_candi_cell_pane_t1

0x41ca,	// (0x0002285b) bg_button_pane_cp08

0x52c8,	// (0x00023959) cell_fshwr2_syb_bg_pane

0xf499,	// (0x0002db2a) cell_fshwr2_syb_bg_pane_g1

0xdb4d,	// (0x0002c1de) cell_fshwr2_syb_bg_pane_t1

0x4881,	// (0x00022f12) main_tmo_pane

0xa5a7,	// (0x00028c38) uni_indicator_pane_g1_ParamLimits

0xa5bc,	// (0x00028c4d) uni_indicator_pane_g2_ParamLimits

0xa5d2,	// (0x00028c63) uni_indicator_pane_g3_ParamLimits

0x67b1,	// (0x00024e42) uni_indicator_pane_g4_ParamLimits

0x67b1,	// (0x00024e42) uni_indicator_pane_g4

0x67c5,	// (0x00024e56) uni_indicator_pane_g5_ParamLimits

0x67c5,	// (0x00024e56) uni_indicator_pane_g5

0x67d9,	// (0x00024e6a) uni_indicator_pane_g6_ParamLimits

0x67d9,	// (0x00024e6a) uni_indicator_pane_g6

0xf928,	// (0x0002dfb9) uni_indicator_pane_g_ParamLimits

0xcbc2,	// (0x0002b253) popup_tmo_note_window_ParamLimits

0xcbc2,	// (0x0002b253) popup_tmo_note_window

0x41ca,	// (0x0002285b) fshwr2_bg_pane

0xdb2b,	// (0x0002c1bc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdb2b,	// (0x0002c1bc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb8,	// (0x0002e549) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb8,	// (0x0002e549) fshwr2_func_candi_cell_pane_g

0x75c6,	// (0x00025c57) bg_popup_window_pane_cp01

0xdb5c,	// (0x0002c1ed) bg_popup_window_pane_g1_cp01

0xdb65,	// (0x0002c1f6) bg_popup_window_pane_cp22_ParamLimits

0xdb65,	// (0x0002c1f6) bg_popup_window_pane_cp22

0xdb73,	// (0x0002c204) listscroll_tmo_link_pane_ParamLimits

0xdb73,	// (0x0002c204) listscroll_tmo_link_pane

0xdbb3,	// (0x0002c244) popup_tmo_note_window_g1_ParamLimits

0xdbb3,	// (0x0002c244) popup_tmo_note_window_g1

0xdbc0,	// (0x0002c251) tmo_note_info_pane_ParamLimits

0xdbc0,	// (0x0002c251) tmo_note_info_pane

0xf4a1,	// (0x0002db32) list_tmo_note_info_pane_g1_ParamLimits

0xf4a1,	// (0x0002db32) list_tmo_note_info_pane_g1

0xdbda,	// (0x0002c26b) list_tmo_note_info_pane_g2_ParamLimits

0xdbda,	// (0x0002c26b) list_tmo_note_info_pane_g2

0x0001,

0xfebd,	// (0x0002e54e) list_tmo_note_info_pane_g_ParamLimits

0xfebd,	// (0x0002e54e) list_tmo_note_info_pane_g

0xdbf6,	// (0x0002c287) list_tmo_note_info_text_pane_ParamLimits

0xdbf6,	// (0x0002c287) list_tmo_note_info_text_pane

0xdc38,	// (0x0002c2c9) list_tmo_link_pane

0xdc45,	// (0x0002c2d6) scroll_pane_cp20

0xdc52,	// (0x0002c2e3) list_single_tmo_link_pane_ParamLimits

0xdc52,	// (0x0002c2e3) list_single_tmo_link_pane

0xdc62,	// (0x0002c2f3) list_single_tmo_link_pane_t1

0xdc70,	// (0x0002c301) list_tmo_note_info_text_pane_t1_ParamLimits

0xdc70,	// (0x0002c301) list_tmo_note_info_text_pane_t1

0x9024,	// (0x000276b5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9024,	// (0x000276b5) aid_size_touch_scroll_bar_cp01

0xe3f9,	// (0x0002ca8a) aid_size_touch_slider_marker

0x8c07,	// (0x00027298) popup_settings_window_ParamLimits

0x8c07,	// (0x00027298) popup_settings_window

0xe5c1,	// (0x0002cc52) popup_candi_list_indi_window

0x564a,	// (0x00023cdb) aid_touch_navi_pane_ParamLimits

0xbc93,	// (0x0002a324) rs_clock_indi_pane

0xbc9c,	// (0x0002a32d) sctrl_sk_bottom_pane_ParamLimits

0xbcad,	// (0x0002a33e) sctrl_sk_top_pane_ParamLimits

0xbdb0,	// (0x0002a441) popup_fep_tooltip_window

0xd81f,	// (0x0002beb0) aid_size_cell_widget_grid_ParamLimits

0xf217,	// (0x0002d8a8) cell_ai5_widget_pane_g1_ParamLimits

0xf217,	// (0x0002d8a8) cell_ai5_widget_pane_g1

0xf26a,	// (0x0002d8fb) cell_ai5_widget_pane_g6_ParamLimits

0xf276,	// (0x0002d907) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3b,	// (0x0002e4cc) cell_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x0002e4cc) cell_ai5_widget_pane_g

0xf37a,	// (0x0002da0b) cell_ai5_widget_pane_t10_ParamLimits

0xf37a,	// (0x0002da0b) cell_ai5_widget_pane_t10

0xf390,	// (0x0002da21) grid_ai5_widget_pane_ParamLimits

0xd8d6,	// (0x0002bf67) cell_contacts_ai5_widget_pane_ParamLimits

0xd8d6,	// (0x0002bf67) cell_contacts_ai5_widget_pane

0xda51,	// (0x0002c0e2) popup_discreet_window_t3_ParamLimits

0xda51,	// (0x0002c0e2) popup_discreet_window_t3

0xdaaa,	// (0x0002c13b) popup_fshwr2_char_preview_window_ParamLimits

0xdaaa,	// (0x0002c13b) popup_fshwr2_char_preview_window

0xf4b8,	// (0x0002db49) tmo_note_info_pane_t1

0xf4cd,	// (0x0002db5e) tmo_note_info_pane_t2

0xf4e6,	// (0x0002db77) tmo_note_info_pane_t3

0xdc14,	// (0x0002c2a5) tmo_note_info_pane_t4

0xdc26,	// (0x0002c2b7) tmo_note_info_pane_t5

0x0004,

0xfec2,	// (0x0002e553) tmo_note_info_pane_t

0xdc38,	// (0x0002c2c9) list_tmo_link_pane_ParamLimits

0xdc45,	// (0x0002c2d6) scroll_pane_cp20_ParamLimits

0x41ca,	// (0x0002285b) bg_popup_fep_char_preview_window_cp01

0xdc89,	// (0x0002c31a) popup_fshwr2_char_preview_window_t1

0xdc97,	// (0x0002c328) popup_candi_list_indi_window_g1

0xdca0,	// (0x0002c331) bg_cell_contacts_ai5_widget_pane

0xdcac,	// (0x0002c33d) cell_contacts_ai5_widget_pane_g1

0xdcc0,	// (0x0002c351) cell_contacts_ai5_widget_pane_g2

0xdccf,	// (0x0002c360) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecd,	// (0x0002e55e) cell_contacts_ai5_widget_pane_g

0xdce2,	// (0x0002c373) cell_contacts_ai5_widget_pane_t1

0x4881,	// (0x00022f12) highlight_cell_shortcut_ai5_widget_pane_cp01

0xdd5c,	// (0x0002c3ed) settings_container_pane

0x52c8,	// (0x00023959) listscroll_set_pane_copy1

0x6fb6,	// (0x00025647) scroll_pane_cp121_copy1

0xdd68,	// (0x0002c3f9) set_content_pane_copy1

0xdd70,	// (0x0002c401) aid_height_set_list_copy1_ParamLimits

0xdd70,	// (0x0002c401) aid_height_set_list_copy1

0x6379,	// (0x00024a0a) aid_size_parent_copy1_ParamLimits

0x6379,	// (0x00024a0a) aid_size_parent_copy1

0xdd7c,	// (0x0002c40d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdd7c,	// (0x0002c40d) button_value_adjust_pane_cp6_copy1

0x49d8,	// (0x00023069) list_highlight_pane_cp2_copy1_ParamLimits

0x49d8,	// (0x00023069) list_highlight_pane_cp2_copy1

0xdd90,	// (0x0002c421) list_set_pane_copy1_ParamLimits

0xdd90,	// (0x0002c421) list_set_pane_copy1

0xdcf7,	// (0x0002c388) main_pane_set_t1_copy1_ParamLimits

0xdcf7,	// (0x0002c388) main_pane_set_t1_copy1

0xdd31,	// (0x0002c3c2) main_pane_set_t2_copy1_ParamLimits

0xdd31,	// (0x0002c3c2) main_pane_set_t2_copy1

0xde3d,	// (0x0002c4ce) main_pane_set_t3_copy1

0xde4b,	// (0x0002c4dc) main_pane_set_t4_copy1

0xdd50,	// (0x0002c3e1) set_content_pane_g1_copy1_ParamLimits

0xdd50,	// (0x0002c3e1) set_content_pane_g1_copy1

0xde59,	// (0x0002c4ea) setting_code_pane_copy1

0xde63,	// (0x0002c4f4) setting_slider_graphic_pane_copy1

0xde63,	// (0x0002c4f4) setting_slider_pane_copy1

0xde63,	// (0x0002c4f4) setting_text_pane_copy1

0xde6d,	// (0x0002c4fe) setting_volume_pane_copy1

0xde76,	// (0x0002c507) settings_code_pane_cp2_copy1

0xde7e,	// (0x0002c50f) settings_code_pane_cp_copy1_ParamLimits

0xde7e,	// (0x0002c50f) settings_code_pane_cp_copy1

0xde92,	// (0x0002c523) volume_set_pane_copy1

0xde9a,	// (0x0002c52b) volume_set_pane_g10_copy1

0xdea2,	// (0x0002c533) volume_set_pane_g1_copy1

0xdeaa,	// (0x0002c53b) volume_set_pane_g2_copy1

0xdeb2,	// (0x0002c543) volume_set_pane_g3_copy1

0xdeba,	// (0x0002c54b) volume_set_pane_g4_copy1

0xdec2,	// (0x0002c553) volume_set_pane_g5_copy1

0xdeca,	// (0x0002c55b) volume_set_pane_g6_copy1

0xded2,	// (0x0002c563) volume_set_pane_g7_copy1

0xdeda,	// (0x0002c56b) volume_set_pane_g8_copy1

0xdee2,	// (0x0002c573) volume_set_pane_g9_copy1

0x423a,	// (0x000228cb) bg_set_opt_pane_cp_copy1_ParamLimits

0x423a,	// (0x000228cb) bg_set_opt_pane_cp_copy1

0xdeea,	// (0x0002c57b) setting_slider_pane_t1_copy1_ParamLimits

0xdeea,	// (0x0002c57b) setting_slider_pane_t1_copy1

0xdf08,	// (0x0002c599) setting_slider_pane_t2_copy1_ParamLimits

0xdf08,	// (0x0002c599) setting_slider_pane_t2_copy1

0xdf22,	// (0x0002c5b3) setting_slider_pane_t3_copy1_ParamLimits

0xdf22,	// (0x0002c5b3) setting_slider_pane_t3_copy1

0xdf3a,	// (0x0002c5cb) slider_set_pane_copy1_ParamLimits

0xdf3a,	// (0x0002c5cb) slider_set_pane_copy1

0x48e8,	// (0x00022f79) set_opt_bg_pane_g1_copy2

0x48f0,	// (0x00022f81) set_opt_bg_pane_g2_copy2

0xdf50,	// (0x0002c5e1) set_opt_bg_pane_g3_copy2

0x4900,	// (0x00022f91) set_opt_bg_pane_g4_copy2

0x4908,	// (0x00022f99) set_opt_bg_pane_g5_copy2

0x4910,	// (0x00022fa1) set_opt_bg_pane_g6_copy2

0xdf5a,	// (0x0002c5eb) set_opt_bg_pane_g7_copy2

0xdf62,	// (0x0002c5f3) set_opt_bg_pane_g8_copy2

0xdf6c,	// (0x0002c5fd) set_opt_bg_pane_g9_copy2

0xc4ca,	// (0x0002ab5b) aid_size_touch_slider_mark_copy1_ParamLimits

0xc4ca,	// (0x0002ab5b) aid_size_touch_slider_mark_copy1

0xdf76,	// (0x0002c607) slider_set_pane_g1_copy1

0xc4de,	// (0x0002ab6f) slider_set_pane_g2_copy1

0xa693,	// (0x00028d24) slider_set_pane_g3_copy1_ParamLimits

0xa693,	// (0x00028d24) slider_set_pane_g3_copy1

0xa6a7,	// (0x00028d38) slider_set_pane_g4_copy1_ParamLimits

0xa6a7,	// (0x00028d38) slider_set_pane_g4_copy1

0xa6bf,	// (0x00028d50) slider_set_pane_g5_copy1_ParamLimits

0xa6bf,	// (0x00028d50) slider_set_pane_g5_copy1

0xa693,	// (0x00028d24) slider_set_pane_g6_copy1_ParamLimits

0xa693,	// (0x00028d24) slider_set_pane_g6_copy1

0xc4e6,	// (0x0002ab77) slider_set_pane_g7_copy1_ParamLimits

0xc4e6,	// (0x0002ab77) slider_set_pane_g7_copy1

0x41de,	// (0x0002286f) bg_set_opt_pane_cp2_copy1

0xdf7f,	// (0x0002c610) setting_slider_graphic_pane_g1_copy1

0xdf88,	// (0x0002c619) setting_slider_graphic_pane_t1_copy1

0xdf98,	// (0x0002c629) setting_slider_graphic_pane_t2_copy1

0xdfa8,	// (0x0002c639) slider_set_pane_cp_copy1

0xdfb8,	// (0x0002c649) input_focus_pane_cp1_copy1

0xdfc1,	// (0x0002c652) list_set_text_pane_copy1

0xdfc9,	// (0x0002c65a) setting_text_pane_g1_copy1

0xed68,	// (0x0002d3f9) set_text_pane_t1_copy1

0xdfb8,	// (0x0002c649) input_focus_pane_cp2_copy1

0xdfc9,	// (0x0002c65a) setting_code_pane_g1_copy1

0xdfd2,	// (0x0002c663) setting_code_pane_t1_copy1

0xdfe0,	// (0x0002c671) list_set_graphic_pane_copy1

0x41de,	// (0x0002286f) bg_set_opt_pane_cp4_copy1

0x4fca,	// (0x0002365b) list_set_graphic_pane_g1_copy1_ParamLimits

0x4fca,	// (0x0002365b) list_set_graphic_pane_g1_copy1

0xdff4,	// (0x0002c685) list_set_graphic_pane_g2_copy1

0x4fe2,	// (0x00023673) list_set_graphic_pane_t1_copy1_ParamLimits

0x4fe2,	// (0x00023673) list_set_graphic_pane_t1_copy1

0x75c6,	// (0x00025c57) rs_clock_indi_pane_g1

0xdffc,	// (0x0002c68d) rs_clock_indi_pane_t1

0xe00a,	// (0x0002c69b) rs_indi_pane

0xe012,	// (0x0002c6a3) rs_indi_pane_g1

0xe01b,	// (0x0002c6ac) rs_indi_pane_g2

0xe024,	// (0x0002c6b5) rs_indi_pane_g3

0x0002,

0xfed4,	// (0x0002e565) rs_indi_pane_g

0x52c8,	// (0x00023959) bg_popup_preview_window_pane_cp03

0xe02d,	// (0x0002c6be) popup_fep_tooltip_window_t1

0xb540,	// (0x00029bd1) popup_note2_window_g2_ParamLimits

0xb540,	// (0x00029bd1) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0002e305) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0002e305) popup_note2_window_g

0xba48,	// (0x0002a0d9) bg_popup_sub_pane_cp11_ParamLimits

0xba55,	// (0x0002a0e6) cell_ai3_links_pane_g1_ParamLimits

0xba6c,	// (0x0002a0fd) cell_ai3_links_pane_t1

0xed68,	// (0x0002d3f9) set_text_pane_t1_copy1_ParamLimits

0x51d7,	// (0x00023868) cell_graphic_popup_pane_cp2_ParamLimits

0x51d7,	// (0x00023868) cell_graphic_popup_pane_cp2

0xe03b,	// (0x0002c6cc) cell_graphic_popup_pane_g1_cp2

0x45d6,	// (0x00022c67) cell_graphic_popup_pane_g2_cp2

0xe043,	// (0x0002c6d4) cell_graphic_popup_pane_g3_cp2

0xe04b,	// (0x0002c6dc) cell_graphic_popup_pane_t2_cp2

0x45e7,	// (0x00022c78) grid_highlight_pane_cp3_cp2

0x4b82,	// (0x00023213) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4881,	// (0x00022f12) main_tmo_pane_ParamLimits

0xcbb6,	// (0x0002b247) popup_tmo_big_image_note_window

0xf207,	// (0x0002d898) cell_ai5_widget_list_pane

0xf20f,	// (0x0002d8a0) cell_ai5_widget_lrg_icon_pane

0xf4b8,	// (0x0002db49) tmo_note_info_pane_t1_ParamLimits

0xf4cd,	// (0x0002db5e) tmo_note_info_pane_t2_ParamLimits

0xf4e6,	// (0x0002db77) tmo_note_info_pane_t3_ParamLimits

0xdc14,	// (0x0002c2a5) tmo_note_info_pane_t4_ParamLimits

0xdc26,	// (0x0002c2b7) tmo_note_info_pane_t5_ParamLimits

0xfec2,	// (0x0002e553) tmo_note_info_pane_t_ParamLimits

0xdd5c,	// (0x0002c3ed) settings_container_pane_ParamLimits

0xdfb0,	// (0x0002c641) indicator_popup_pane_cp5

0xdfb0,	// (0x0002c641) indicator_popup_pane_cp6

0xdfe0,	// (0x0002c671) list_set_graphic_pane_copy1_ParamLimits

0x41ca,	// (0x0002285b) bg_popup_window_pane_cp23

0xe059,	// (0x0002c6ea) popup_tmo_big_image_note_window_g1

0xe064,	// (0x0002c6f5) popup_tmo_big_image_note_window_t1

0xe074,	// (0x0002c705) popup_tmo_big_image_note_window_t2

0xe084,	// (0x0002c715) popup_tmo_big_image_note_window_t3

0x0002,

0xfedb,	// (0x0002e56c) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0002db8c) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0002db94) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0002dba2) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0002dba2) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0002dbbb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0002dbbb) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0002dbc8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0002dbc8) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0002dbe0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0002dbe0) cell_ai5_widget_list_row_pane_t2

0x0001,

0x05b6,	// (0x0001ec47) cell_ai5_widget_list_row_pane_t_ParamLimits

0x05b6,	// (0x0001ec47) cell_ai5_widget_list_row_pane_t

0x8acc,	// (0x0002715d) main_fep_vtchi_ss_pane

0xe094,	// (0x0002c725) popup_fep_char_pre_window

0xe09c,	// (0x0002c72d) popup_fep_ituss_window

0xe0bd,	// (0x0002c74e) popup_fep_vkbss_window

0xe0dc,	// (0x0002c76d) grid_vkbss_keypad_pane_ParamLimits

0xe0dc,	// (0x0002c76d) grid_vkbss_keypad_pane

0xe0ec,	// (0x0002c77d) ituss_keypad_pane

0xe104,	// (0x0002c795) aid_vkbss_key_offset_ParamLimits

0xe104,	// (0x0002c795) aid_vkbss_key_offset

0xe110,	// (0x0002c7a1) cell_vkbss_key_pane_ParamLimits

0xe110,	// (0x0002c7a1) cell_vkbss_key_pane

0x636d,	// (0x000249fe) bg_cell_vkbss_key_g1_ParamLimits

0x636d,	// (0x000249fe) bg_cell_vkbss_key_g1

0xe126,	// (0x0002c7b7) cell_vkbss_key_3p_pane_ParamLimits

0xe126,	// (0x0002c7b7) cell_vkbss_key_3p_pane

0xe140,	// (0x0002c7d1) cell_vkbss_key_g1_ParamLimits

0xe140,	// (0x0002c7d1) cell_vkbss_key_g1

0xe15a,	// (0x0002c7eb) cell_vkbss_key_t1_ParamLimits

0xe15a,	// (0x0002c7eb) cell_vkbss_key_t1

0xe185,	// (0x0002c816) cell_ituss_key_pane_ParamLimits

0xe185,	// (0x0002c816) cell_ituss_key_pane

0xe195,	// (0x0002c826) bg_cell_ituss_key_g1_ParamLimits

0xe195,	// (0x0002c826) bg_cell_ituss_key_g1

0xe1a1,	// (0x0002c832) cell_ituss_key_pane_g1_ParamLimits

0xe1a1,	// (0x0002c832) cell_ituss_key_pane_g1

0xe1ad,	// (0x0002c83e) cell_ituss_key_pane_g2_ParamLimits

0xe1ad,	// (0x0002c83e) cell_ituss_key_pane_g2

0x0001,

0xfee2,	// (0x0002e573) cell_ituss_key_pane_g_ParamLimits

0xfee2,	// (0x0002e573) cell_ituss_key_pane_g

0xe1c6,	// (0x0002c857) cell_ituss_key_t1_ParamLimits

0xe1c6,	// (0x0002c857) cell_ituss_key_t1

0xe1f4,	// (0x0002c885) cell_ituss_key_t2_ParamLimits

0xe1f4,	// (0x0002c885) cell_ituss_key_t2

0xe225,	// (0x0002c8b6) cell_ituss_key_t3_ParamLimits

0xe225,	// (0x0002c8b6) cell_ituss_key_t3

0xe256,	// (0x0002c8e7) cell_ituss_key_t4_ParamLimits

0xe256,	// (0x0002c8e7) cell_ituss_key_t4

0x0003,

0xfee7,	// (0x0002e578) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x0002e578) cell_ituss_key_t

0xe287,	// (0x0002c918) cell_vkbss_key_3p_pane_g1

0xe28f,	// (0x0002c920) cell_vkbss_key_3p_pane_g2

0xe297,	// (0x0002c928) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x0002e581) cell_vkbss_key_3p_pane_g

0x41ca,	// (0x0002285b) bg_popup_fep_char_preview_window_cp02

0xe29f,	// (0x0002c930) popup_fep_char_pre_window_t1

0xf1fd,	// (0x0002d88e) main_ai5_sk_pane

0xdca0,	// (0x0002c331) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xdcac,	// (0x0002c33d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xdcc0,	// (0x0002c351) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xdccf,	// (0x0002c360) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecd,	// (0x0002e55e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xdce2,	// (0x0002c373) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4881,	// (0x00022f12) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0002dbf2) main_ai5_sk_pane_g1

0x5bfb,	// (0x0002428c) popup_query_code_window_g1

0xe0b2,	// (0x0002c743) popup_fep_vkb_icf_pane

0xe0c6,	// (0x0002c757) popup_fep_vtchi_icf_pane

0x4881,	// (0x00022f12) bg_icf_pane

0xe2bd,	// (0x0002c94e) list_vkb_icf_pane

0x4881,	// (0x00022f12) bg_icf_pane_cp01

0xe2d5,	// (0x0002c966) vtchi_icf_list_pane

0xe2e5,	// (0x0002c976) list_vkb_icf_pane_t1_ParamLimits

0xe2e5,	// (0x0002c976) list_vkb_icf_pane_t1

0xe2ff,	// (0x0002c990) vtchi_icf_list_pane_t1_ParamLimits

0xe2ff,	// (0x0002c990) vtchi_icf_list_pane_t1

0xe09c,	// (0x0002c72d) popup_fep_ituss_window_ParamLimits

0xe0c6,	// (0x0002c757) popup_fep_vtchi_icf_pane_ParamLimits

0xe0ec,	// (0x0002c77d) ituss_keypad_pane_ParamLimits

0xe0fb,	// (0x0002c78c) ituss_sks_pane

0x4881,	// (0x00022f12) bg_icf_pane_ParamLimits

0xe2ae,	// (0x0002c93f) icf_edit_indi_pane_ParamLimits

0xe2ae,	// (0x0002c93f) icf_edit_indi_pane

0xe2bd,	// (0x0002c94e) list_vkb_icf_pane_ParamLimits

0x4881,	// (0x00022f12) bg_icf_pane_cp01_ParamLimits

0xe2c9,	// (0x0002c95a) icf_edit_indi_pane_cp01_ParamLimits

0xe2c9,	// (0x0002c95a) icf_edit_indi_pane_cp01

0xe2dd,	// (0x0002c96e) vtchi_query_pane

0x784d,	// (0x00025ede) icf_edit_indi_pane_g1_ParamLimits

0x784d,	// (0x00025ede) icf_edit_indi_pane_g1

0xe326,	// (0x0002c9b7) icf_edit_indi_pane_g2_ParamLimits

0xe326,	// (0x0002c9b7) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x0002e588) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x0002e588) icf_edit_indi_pane_g

0xe332,	// (0x0002c9c3) icf_edit_indi_pane_t1

0xe340,	// (0x0002c9d1) bg_input_focus_pane_cp042

0x47ba,	// (0x00022e4b) vtchi_button_pane

0xe349,	// (0x0002c9da) vtchi_query_pane_t1

0xe357,	// (0x0002c9e8) vtchi_query_pane_t2

0xe365,	// (0x0002c9f6) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0002e58d) vtchi_query_pane_t

0x41ca,	// (0x0002285b) bg_button_pane_cp13

0xe373,	// (0x0002ca04) vtchi_button_pane_g1

0xd0c0,	// (0x0002b751) ituss_sks_pane_g1

0xe37b,	// (0x0002ca0c) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0002e594) ituss_sks_pane_g

0xe384,	// (0x0002ca15) ituss_sks_pane_t1

0xe392,	// (0x0002ca23) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0002e599) ituss_sks_pane_t

0x7293,	// (0x00025924) indicator_nsta_pane_cp_g1

0x729c,	// (0x0002592d) indicator_nsta_pane_cp_g2

0x72a4,	// (0x00025935) indicator_nsta_pane_cp_g3

0x72ac,	// (0x0002593d) indicator_nsta_pane_cp_g4

0x72b4,	// (0x00025945) indicator_nsta_pane_cp_g5

0x72bc,	// (0x0002594d) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0002e143) indicator_nsta_pane_cp_g

0xf007,	// (0x0002d698) cell_graphic2_pane_t2_ParamLimits

0xf007,	// (0x0002d698) cell_graphic2_pane_t2

0x0001,

0xfdc4,	// (0x0002e455) cell_graphic2_pane_t_ParamLimits

0xfdc4,	// (0x0002e455) cell_graphic2_pane_t

0xf034,	// (0x0002d6c5) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

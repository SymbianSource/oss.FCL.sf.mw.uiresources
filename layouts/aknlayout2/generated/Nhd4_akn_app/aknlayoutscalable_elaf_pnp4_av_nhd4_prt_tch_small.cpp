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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00020113 };

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
0x64f8,	// (0x0002660b) Screen

0x6504,	// (0x00026617) application_window_ParamLimits

0x6504,	// (0x00026617) application_window

0x19f9,	// (0x00021b0c) screen_g1

0x6560,	// (0x00026673) area_bottom_pane_ParamLimits

0x6560,	// (0x00026673) area_bottom_pane

0x6626,	// (0x00026739) area_top_pane_ParamLimits

0x6626,	// (0x00026739) area_top_pane

0x66ba,	// (0x000267cd) main_pane_ParamLimits

0x66ba,	// (0x000267cd) main_pane

0x1a03,	// (0x00021b16) misc_graphics

0x804b,	// (0x0002815e) battery_pane_ParamLimits

0x804b,	// (0x0002815e) battery_pane

0xa26b,	// (0x0002a37e) bg_status_flat_pane_g8

0xa273,	// (0x0002a386) bg_status_flat_pane_g9

0x8113,	// (0x00028226) context_pane_ParamLimits

0x8113,	// (0x00028226) context_pane

0x8229,	// (0x0002833c) navi_pane_ParamLimits

0x8229,	// (0x0002833c) navi_pane

0x82ad,	// (0x000283c0) signal_pane_ParamLimits

0x82ad,	// (0x000283c0) signal_pane

0x0008,

0xf839,	// (0x0002f94c) bg_status_flat_pane_g

0x831a,	// (0x0002842d) status_pane_g1_ParamLimits

0x831a,	// (0x0002842d) status_pane_g1

0x832e,	// (0x00028441) status_pane_g2_ParamLimits

0x832e,	// (0x00028441) status_pane_g2

0x833a,	// (0x0002844d) status_pane_g3_ParamLimits

0x833a,	// (0x0002844d) status_pane_g3

0x0004,

0xf765,	// (0x0002f878) status_pane_g_ParamLimits

0xf765,	// (0x0002f878) status_pane_g

0x836e,	// (0x00028481) title_pane_ParamLimits

0x836e,	// (0x00028481) title_pane

0x83ab,	// (0x000284be) uni_indicator_pane_ParamLimits

0x83ab,	// (0x000284be) uni_indicator_pane

0x291b,	// (0x00022a2e) bg_list_pane_ParamLimits

0x291b,	// (0x00022a2e) bg_list_pane

0x5bc9,	// (0x00025cdc) find_pane

0x2049,	// (0x0002215c) listscroll_app_pane_ParamLimits

0x2049,	// (0x0002215c) listscroll_app_pane

0x293b,	// (0x00022a4e) listscroll_form_pane

0x5bd1,	// (0x00025ce4) listscroll_gen_pane_ParamLimits

0x5bd1,	// (0x00025ce4) listscroll_gen_pane

0x7a2c,	// (0x00027b3f) listscroll_set_pane

0x6f8f,	// (0x000270a2) main_idle_act_pane

0x27af,	// (0x000228c2) main_idle_trad_pane

0x27af,	// (0x000228c2) main_list_empty_pane

0x2049,	// (0x0002215c) main_midp_pane

0x2955,	// (0x00022a68) main_pane_g1_ParamLimits

0x2955,	// (0x00022a68) main_pane_g1

0x7a34,	// (0x00027b47) popup_ai_message_window_ParamLimits

0x7a34,	// (0x00027b47) popup_ai_message_window

0x7ad8,	// (0x00027beb) popup_fep_china_uni_window_ParamLimits

0x7ad8,	// (0x00027beb) popup_fep_china_uni_window

0x7b32,	// (0x00027c45) popup_fep_japan_candidate_window_ParamLimits

0x7b32,	// (0x00027c45) popup_fep_japan_candidate_window

0x7b50,	// (0x00027c63) popup_fep_japan_predictive_window_ParamLimits

0x7b50,	// (0x00027c63) popup_fep_japan_predictive_window

0x7b80,	// (0x00027c93) popup_find_window

0x7b8d,	// (0x00027ca0) popup_grid_graphic_window_ParamLimits

0x7b8d,	// (0x00027ca0) popup_grid_graphic_window

0x7bb7,	// (0x00027cca) popup_large_graphic_colour_window

0x7bdd,	// (0x00027cf0) popup_menu_window_ParamLimits

0x7bdd,	// (0x00027cf0) popup_menu_window

0x7d99,	// (0x00027eac) popup_note_image_window

0x7d85,	// (0x00027e98) popup_note_wait_window_ParamLimits

0x7d85,	// (0x00027e98) popup_note_wait_window

0x7d85,	// (0x00027e98) popup_note_window_ParamLimits

0x7d85,	// (0x00027e98) popup_note_window

0x7def,	// (0x00027f02) popup_query_code_window_ParamLimits

0x7def,	// (0x00027f02) popup_query_code_window

0x7e03,	// (0x00027f16) popup_query_data_code_window_ParamLimits

0x7e03,	// (0x00027f16) popup_query_data_code_window

0x7e20,	// (0x00027f33) popup_query_data_window_ParamLimits

0x7e20,	// (0x00027f33) popup_query_data_window

0x7e3c,	// (0x00027f4f) popup_query_sat_info_window_ParamLimits

0x7e3c,	// (0x00027f4f) popup_query_sat_info_window

0x7e75,	// (0x00027f88) popup_snote_single_graphic_window_ParamLimits

0x7e75,	// (0x00027f88) popup_snote_single_graphic_window

0x7e75,	// (0x00027f88) popup_snote_single_text_window_ParamLimits

0x7e75,	// (0x00027f88) popup_snote_single_text_window

0x7e8a,	// (0x00027f9d) popup_sub_window_general

0x7fba,	// (0x000280cd) popup_window_general_ParamLimits

0x7fba,	// (0x000280cd) popup_window_general

0x7fcf,	// (0x000280e2) power_save_pane

0x7893,	// (0x000279a6) control_pane_g1_ParamLimits

0x7893,	// (0x000279a6) control_pane_g1

0x78ba,	// (0x000279cd) control_pane_g2_ParamLimits

0x78ba,	// (0x000279cd) control_pane_g2

0x2905,	// (0x00022a18) control_pane_g3_ParamLimits

0x2905,	// (0x00022a18) control_pane_g3

0x0007,

0xf74d,	// (0x0002f860) control_pane_g_ParamLimits

0xf74d,	// (0x0002f860) control_pane_g

0x792b,	// (0x00027a3e) control_pane_t1_ParamLimits

0x792b,	// (0x00027a3e) control_pane_t1

0x7981,	// (0x00027a94) control_pane_t2_ParamLimits

0x7981,	// (0x00027a94) control_pane_t2

0x0002,

0xf75e,	// (0x0002f871) control_pane_t_ParamLimits

0xf75e,	// (0x0002f871) control_pane_t

0x780c,	// (0x0002791f) navi_navi_volume_pane_cp1

0x7814,	// (0x00027927) status_small_icon_pane

0x28b1,	// (0x000229c4) status_small_pane_g1_ParamLimits

0x28b1,	// (0x000229c4) status_small_pane_g1

0x781c,	// (0x0002792f) status_small_pane_g2_ParamLimits

0x781c,	// (0x0002792f) status_small_pane_g2

0x28e5,	// (0x000229f8) status_small_pane_g3_ParamLimits

0x28e5,	// (0x000229f8) status_small_pane_g3

0x7828,	// (0x0002793b) status_small_pane_g4_ParamLimits

0x7828,	// (0x0002793b) status_small_pane_g4

0x7834,	// (0x00027947) status_small_pane_g5_ParamLimits

0x7834,	// (0x00027947) status_small_pane_g5

0x7842,	// (0x00027955) status_small_pane_g6_ParamLimits

0x7842,	// (0x00027955) status_small_pane_g6

0x0007,

0xf73c,	// (0x0002f84f) status_small_pane_g_ParamLimits

0xf73c,	// (0x0002f84f) status_small_pane_g

0x785d,	// (0x00027970) status_small_pane_t1

0x787f,	// (0x00027992) status_small_wait_pane_ParamLimits

0x787f,	// (0x00027992) status_small_wait_pane

0x7378,	// (0x0002748b) aid_levels_signal_ParamLimits

0x7378,	// (0x0002748b) aid_levels_signal

0x738a,	// (0x0002749d) signal_pane_g1_ParamLimits

0x738a,	// (0x0002749d) signal_pane_g1

0x739f,	// (0x000274b2) signal_pane_g2_ParamLimits

0x739f,	// (0x000274b2) signal_pane_g2

0x0003,

0xf6cd,	// (0x0002f7e0) signal_pane_g_ParamLimits

0xf6cd,	// (0x0002f7e0) signal_pane_g

0x23b1,	// (0x000224c4) context_pane_g1

0x68fb,	// (0x00026a0e) title_pane_g1

0x6925,	// (0x00026a38) title_pane_t1

0x1a19,	// (0x00021b2c) title_pane_t2

0x1a3f,	// (0x00021b52) title_pane_t3

0x0002,

0xf530,	// (0x0002f643) title_pane_t

0x83c3,	// (0x000284d6) aid_levels_battery_ParamLimits

0x83c3,	// (0x000284d6) aid_levels_battery

0x83d7,	// (0x000284ea) battery_pane_g1_ParamLimits

0x83d7,	// (0x000284ea) battery_pane_g1

0x83ed,	// (0x00028500) battery_pane_g2_ParamLimits

0x83ed,	// (0x00028500) battery_pane_g2

0x0001,

0xf770,	// (0x0002f883) battery_pane_g_ParamLimits

0xf770,	// (0x0002f883) battery_pane_g

0xab8f,	// (0x0002aca2) uni_indicator_pane_g1

0xaba2,	// (0x0002acb5) uni_indicator_pane_g2

0xabb4,	// (0x0002acc7) uni_indicator_pane_g3

0x0005,

0xf8e1,	// (0x0002f9f4) uni_indicator_pane_g

0x264e,	// (0x00022761) navi_icon_pane_ParamLimits

0x264e,	// (0x00022761) navi_icon_pane

0x25a3,	// (0x000226b6) navi_midp_pane

0x266a,	// (0x0002277d) navi_navi_pane

0x2674,	// (0x00022787) navi_text_pane_ParamLimits

0x2674,	// (0x00022787) navi_text_pane

0x19f9,	// (0x00021b0c) status_small_wait_pane_g1

0x1caa,	// (0x00021dbd) status_small_wait_pane_g2

0x0001,

0xf8dc,	// (0x0002f9ef) status_small_wait_pane_g

0xa8b6,	// (0x0002a9c9) navi_navi_icon_text_pane

0xa8be,	// (0x0002a9d1) navi_navi_pane_g1_ParamLimits

0xa8be,	// (0x0002a9d1) navi_navi_pane_g1

0xa8d0,	// (0x0002a9e3) navi_navi_pane_g2_ParamLimits

0xa8d0,	// (0x0002a9e3) navi_navi_pane_g2

0x0001,

0xf8aa,	// (0x0002f9bd) navi_navi_pane_g_ParamLimits

0xf8aa,	// (0x0002f9bd) navi_navi_pane_g

0xa8e2,	// (0x0002a9f5) navi_navi_tabs_pane

0xa8eb,	// (0x0002a9fe) navi_navi_text_pane

0xa8b6,	// (0x0002a9c9) navi_navi_volume_pane

0xa892,	// (0x0002a9a5) navi_text_pane_t1

0xa886,	// (0x0002a999) navi_icon_pane_g1

0xa7d9,	// (0x0002a8ec) navi_navi_text_pane_t1

0x8f8a,	// (0x0002909d) navi_navi_volume_pane_g1

0x8f92,	// (0x000290a5) volume_small_pane

0xa73f,	// (0x0002a852) navi_navi_icon_text_pane_g1

0xa747,	// (0x0002a85a) navi_navi_icon_text_pane_t1

0x266a,	// (0x0002277d) navi_tabs_2_long_pane

0x266a,	// (0x0002277d) navi_tabs_2_pane

0x266a,	// (0x0002277d) navi_tabs_3_long_pane

0x266a,	// (0x0002277d) navi_tabs_3_pane

0x266a,	// (0x0002277d) navi_tabs_4_pane

0x8f6a,	// (0x0002907d) tabs_2_active_pane_ParamLimits

0x8f6a,	// (0x0002907d) tabs_2_active_pane

0x8f7a,	// (0x0002908d) tabs_2_passive_pane_ParamLimits

0x8f7a,	// (0x0002908d) tabs_2_passive_pane

0x8f38,	// (0x0002904b) tabs_3_active_pane_ParamLimits

0x8f38,	// (0x0002904b) tabs_3_active_pane

0x8f48,	// (0x0002905b) tabs_3_passive_pane_ParamLimits

0x8f48,	// (0x0002905b) tabs_3_passive_pane

0x8f59,	// (0x0002906c) tabs_3_passive_pane_cp_ParamLimits

0x8f59,	// (0x0002906c) tabs_3_passive_pane_cp

0x8ef4,	// (0x00029007) tabs_4_active_pane_ParamLimits

0x8ef4,	// (0x00029007) tabs_4_active_pane

0x8f05,	// (0x00029018) tabs_4_passive_pane_ParamLimits

0x8f05,	// (0x00029018) tabs_4_passive_pane

0x8f16,	// (0x00029029) tabs_4_passive_pane_cp_ParamLimits

0x8f16,	// (0x00029029) tabs_4_passive_pane_cp

0x8f27,	// (0x0002903a) tabs_4_passive_pane_cp2_ParamLimits

0x8f27,	// (0x0002903a) tabs_4_passive_pane_cp2

0x8ed0,	// (0x00028fe3) tabs_2_long_active_pane_ParamLimits

0x8ed0,	// (0x00028fe3) tabs_2_long_active_pane

0x8ee2,	// (0x00028ff5) tabs_2_long_passive_pane_ParamLimits

0x8ee2,	// (0x00028ff5) tabs_2_long_passive_pane

0x8e8b,	// (0x00028f9e) tabs_3_long_active_pane_ParamLimits

0x8e8b,	// (0x00028f9e) tabs_3_long_active_pane

0x8ea4,	// (0x00028fb7) tabs_3_long_passive_pane_ParamLimits

0x8ea4,	// (0x00028fb7) tabs_3_long_passive_pane

0x8eb7,	// (0x00028fca) tabs_3_long_passive_pane_cp_ParamLimits

0x8eb7,	// (0x00028fca) tabs_3_long_passive_pane_cp

0x8e31,	// (0x00028f44) volume_small_pane_g1

0x8e3a,	// (0x00028f4d) volume_small_pane_g2

0x8e43,	// (0x00028f56) volume_small_pane_g3

0x8e4c,	// (0x00028f5f) volume_small_pane_g4

0x8e55,	// (0x00028f68) volume_small_pane_g5

0x8e5e,	// (0x00028f71) volume_small_pane_g6

0x8e67,	// (0x00028f7a) volume_small_pane_g7

0x8e70,	// (0x00028f83) volume_small_pane_g8

0x8e79,	// (0x00028f8c) volume_small_pane_g9

0x8e82,	// (0x00028f95) volume_small_pane_g10

0x0009,

0xf876,	// (0x0002f989) volume_small_pane_g

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp2_ParamLimits

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp2

0x698d,	// (0x00026aa0) tabs_3_active_pane_g1

0x6995,	// (0x00026aa8) tabs_3_active_pane_t1

0x1a5f,	// (0x00021b72) bg_passive_tab_pane_cp2_ParamLimits

0x1a5f,	// (0x00021b72) bg_passive_tab_pane_cp2

0x698d,	// (0x00026aa0) tabs_3_passive_pane_g1

0x6995,	// (0x00026aa8) tabs_3_passive_pane_t1

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp3_ParamLimits

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp3

0x69a7,	// (0x00026aba) tabs_4_active_pane_g1

0x69af,	// (0x00026ac2) tabs_4_active_pane_t1

0x1a5f,	// (0x00021b72) bg_passive_tab_pane_cp3_ParamLimits

0x1a5f,	// (0x00021b72) bg_passive_tab_pane_cp3

0x69a7,	// (0x00026aba) tabs_4_1_passive_pane_g1

0x69af,	// (0x00026ac2) tabs_4_1_passive_pane_t1

0x2049,	// (0x0002215c) list_highlight_pane_cp2

0xade7,	// (0x0002aefa) list_set_pane_ParamLimits

0xade7,	// (0x0002aefa) list_set_pane

0xae89,	// (0x0002af9c) main_pane_set_t1_ParamLimits

0xae89,	// (0x0002af9c) main_pane_set_t1

0xaea9,	// (0x0002afbc) main_pane_set_t2_ParamLimits

0xaea9,	// (0x0002afbc) main_pane_set_t2

0xaebd,	// (0x0002afd0) main_pane_set_t3_ParamLimits

0xaebd,	// (0x0002afd0) main_pane_set_t3

0xaecf,	// (0x0002afe2) main_pane_set_t4_ParamLimits

0xaecf,	// (0x0002afe2) main_pane_set_t4

0x0003,

0xf946,	// (0x0002fa59) main_pane_set_t_ParamLimits

0xf946,	// (0x0002fa59) main_pane_set_t

0xaee1,	// (0x0002aff4) setting_code_pane

0xaeed,	// (0x0002b000) setting_slider_graphic_pane

0xaeed,	// (0x0002b000) setting_slider_pane

0xaeed,	// (0x0002b000) setting_text_pane

0xaeed,	// (0x0002b000) setting_volume_pane

0x69c1,	// (0x00026ad4) volume_set_pane

0x1a5f,	// (0x00021b72) bg_set_opt_pane_cp

0x69c9,	// (0x00026adc) setting_slider_pane_t1

0x69e2,	// (0x00026af5) setting_slider_pane_t2

0x69fc,	// (0x00026b0f) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0002f64a) setting_slider_pane_t

0x6a14,	// (0x00026b27) slider_set_pane

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp2

0x1a6d,	// (0x00021b80) setting_slider_graphic_pane_g1

0x6a2a,	// (0x00026b3d) setting_slider_graphic_pane_t1

0x6a3a,	// (0x00026b4d) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0002f651) setting_slider_graphic_pane_t

0x6a4a,	// (0x00026b5d) slider_set_pane_cp

0x1a03,	// (0x00021b16) input_focus_pane_cp1

0xada6,	// (0x0002aeb9) list_set_text_pane

0x19f9,	// (0x00021b0c) setting_text_pane_g1

0x1a03,	// (0x00021b16) input_focus_pane_cp2

0x19f9,	// (0x00021b0c) setting_code_pane_g1

0x1a76,	// (0x00021b89) setting_code_pane_t1

0x54de,	// (0x000255f1) set_text_pane_t1_ParamLimits

0x54de,	// (0x000255f1) set_text_pane_t1

0x1f5f,	// (0x00022072) set_opt_bg_pane_g1

0x1f67,	// (0x0002207a) set_opt_bg_pane_g2

0xad80,	// (0x0002ae93) set_opt_bg_pane_g3

0x1f77,	// (0x0002208a) set_opt_bg_pane_g4

0x1f7f,	// (0x00022092) set_opt_bg_pane_g5

0x1f87,	// (0x0002209a) set_opt_bg_pane_g6

0xad8a,	// (0x0002ae9d) set_opt_bg_pane_g7

0xad92,	// (0x0002aea5) set_opt_bg_pane_g8

0xad9c,	// (0x0002aeaf) set_opt_bg_pane_g9

0x0008,

0xf933,	// (0x0002fa46) set_opt_bg_pane_g

0xad73,	// (0x0002ae86) slider_set_pane_g1

0x8fff,	// (0x00029112) slider_set_pane_g2

0x0006,

0xf924,	// (0x0002fa37) slider_set_pane_g

0x8f9b,	// (0x000290ae) volume_set_pane_g1

0x8fa3,	// (0x000290b6) volume_set_pane_g2

0x8fab,	// (0x000290be) volume_set_pane_g3

0x8fb3,	// (0x000290c6) volume_set_pane_g4

0x8fbb,	// (0x000290ce) volume_set_pane_g5

0x8fc3,	// (0x000290d6) volume_set_pane_g6

0x8fcb,	// (0x000290de) volume_set_pane_g7

0x8fd3,	// (0x000290e6) volume_set_pane_g8

0x8fdb,	// (0x000290ee) volume_set_pane_g9

0x8fe3,	// (0x000290f6) volume_set_pane_g10

0x0009,

0xf8fc,	// (0x0002fa0f) volume_set_pane_g

0x6a52,	// (0x00026b65) indicator_pane_ParamLimits

0x6a52,	// (0x00026b65) indicator_pane

0x6a5e,	// (0x00026b71) main_idle_pane_g2_ParamLimits

0x6a5e,	// (0x00026b71) main_idle_pane_g2

0x6a86,	// (0x00026b99) main_pane_idle_g1_ParamLimits

0x6a86,	// (0x00026b99) main_pane_idle_g1

0x1a9e,	// (0x00021bb1) popup_clock_digital_analogue_window_ParamLimits

0x1a9e,	// (0x00021bb1) popup_clock_digital_analogue_window

0x6a93,	// (0x00026ba6) soft_indicator_pane_ParamLimits

0x6a93,	// (0x00026ba6) soft_indicator_pane

0x6a9f,	// (0x00026bb2) wallpaper_pane_ParamLimits

0x6a9f,	// (0x00026bb2) wallpaper_pane

0x19f9,	// (0x00021b0c) wallpaper_pane_g1

0x6aab,	// (0x00026bbe) indicator_pane_g1_ParamLimits

0x6aab,	// (0x00026bbe) indicator_pane_g1

0xb1c0,	// (0x0002b2d3) navi_navi_icon_text_pane_srt_g1

0x1acc,	// (0x00021bdf) soft_indicator_pane_t1

0x1ae6,	// (0x00021bf9) aid_ps_area_pane

0x6ab7,	// (0x00026bca) aid_ps_clock_pane

0x1af7,	// (0x00021c0a) aid_ps_indicator_pane

0x1b03,	// (0x00021c16) indicator_ps_pane_ParamLimits

0x1b03,	// (0x00021c16) indicator_ps_pane

0x1b12,	// (0x00021c25) power_save_pane_g1_ParamLimits

0x1b12,	// (0x00021c25) power_save_pane_g1

0x1b1e,	// (0x00021c31) power_save_pane_g2_ParamLimits

0x1b1e,	// (0x00021c31) power_save_pane_g2

0x6514,	// (0x00026627) aid_navinavi_width_pane

0x1ae6,	// (0x00021bf9) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0002f656) power_save_pane_g_ParamLimits

0xf543,	// (0x0002f656) power_save_pane_g

0x1b2c,	// (0x00021c3f) power_save_pane_t1_ParamLimits

0x1b2c,	// (0x00021c3f) power_save_pane_t1

0x6ab7,	// (0x00026bca) aid_ps_clock_pane_ParamLimits

0x1af7,	// (0x00021c0a) aid_ps_indicator_pane_ParamLimits

0x1b3e,	// (0x00021c51) power_save_pane_t4_ParamLimits

0x1b3e,	// (0x00021c51) power_save_pane_t4

0x0001,

0xf548,	// (0x0002f65b) power_save_pane_t_ParamLimits

0xf548,	// (0x0002f65b) power_save_pane_t

0x1b68,	// (0x00021c7b) power_save_t3_ParamLimits

0x1b68,	// (0x00021c7b) power_save_t3

0x1b53,	// (0x00021c66) power_save_t2_ParamLimits

0x1b53,	// (0x00021c66) power_save_t2

0x1b7d,	// (0x00021c90) indicator_ps_pane_g1

0x6ac5,	// (0x00026bd8) ai_gene_pane_ParamLimits

0x6ac5,	// (0x00026bd8) ai_gene_pane

0x6ad1,	// (0x00026be4) ai_links_pane_ParamLimits

0x6ad1,	// (0x00026be4) ai_links_pane

0x6add,	// (0x00026bf0) indicator_pane_cp1_ParamLimits

0x6add,	// (0x00026bf0) indicator_pane_cp1

0x6ae9,	// (0x00026bfc) main_pane_idle_g1_cp_ParamLimits

0x6ae9,	// (0x00026bfc) main_pane_idle_g1_cp

0x6af5,	// (0x00026c08) popup_ai_links_title_window

0x6afe,	// (0x00026c11) soft_indicator_pane_cp1_ParamLimits

0x6afe,	// (0x00026c11) soft_indicator_pane_cp1

0xab7d,	// (0x0002ac90) ai_links_pane_g1

0xab86,	// (0x0002ac99) grid_ai_links_pane

0xab60,	// (0x0002ac73) ai_gene_pane_1

0xab6b,	// (0x0002ac7e) ai_gene_pane_2

0xab74,	// (0x0002ac87) list_highlight_pane_cp4

0xab44,	// (0x0002ac57) cell_ai_link_pane_ParamLimits

0xab44,	// (0x0002ac57) cell_ai_link_pane

0xab3c,	// (0x0002ac4f) cell_ai_link_pane_g1

0x1caa,	// (0x00021dbd) cell_ai_link_pane_g2

0x0001,

0xf8d7,	// (0x0002f9ea) cell_ai_link_pane_g

0x1a03,	// (0x00021b16) grid_highlight_cp2

0x1a03,	// (0x00021b16) bg_popup_sub_pane_cp1

0x1b94,	// (0x00021ca7) popup_ai_links_title_window_t1

0xaa8c,	// (0x0002ab9f) ai_gene_pane_1_g1_ParamLimits

0xaa8c,	// (0x0002ab9f) ai_gene_pane_1_g1

0xaa98,	// (0x0002abab) ai_gene_pane_1_g2_ParamLimits

0xaa98,	// (0x0002abab) ai_gene_pane_1_g2

0x0001,

0xf8cd,	// (0x0002f9e0) ai_gene_pane_1_g_ParamLimits

0xf8cd,	// (0x0002f9e0) ai_gene_pane_1_g

0xaaa5,	// (0x0002abb8) ai_gene_pane_1_t1_ParamLimits

0xaaa5,	// (0x0002abb8) ai_gene_pane_1_t1

0xaad9,	// (0x0002abec) grid_ai_soft_ind_pane

0xaa77,	// (0x0002ab8a) ai_gene_pane_2_t1_ParamLimits

0xaa77,	// (0x0002ab8a) ai_gene_pane_2_t1

0x6b0a,	// (0x00026c1d) main_pane_empty_t1_ParamLimits

0x6b0a,	// (0x00026c1d) main_pane_empty_t1

0x6b22,	// (0x00026c35) main_pane_empty_t2_ParamLimits

0x6b22,	// (0x00026c35) main_pane_empty_t2

0x6b37,	// (0x00026c4a) main_pane_empty_t3_ParamLimits

0x6b37,	// (0x00026c4a) main_pane_empty_t3

0x6b49,	// (0x00026c5c) main_pane_empty_t4_ParamLimits

0x6b49,	// (0x00026c5c) main_pane_empty_t4

0x6b5b,	// (0x00026c6e) main_pane_empty_t5_ParamLimits

0x6b5b,	// (0x00026c6e) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0002f660) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0002f660) main_pane_empty_t

0x1fe4,	// (0x000220f7) bg_popup_window_pane_ParamLimits

0x1fe4,	// (0x000220f7) bg_popup_window_pane

0xa7e7,	// (0x0002a8fa) find_popup_pane_cp2_ParamLimits

0xa7e7,	// (0x0002a8fa) find_popup_pane_cp2

0xa7f3,	// (0x0002a906) heading_pane_ParamLimits

0xa7f3,	// (0x0002a906) heading_pane

0x1a03,	// (0x00021b16) bg_popup_sub_pane

0xa761,	// (0x0002a874) bg_popup_window_pane_g1_ParamLimits

0xa761,	// (0x0002a874) bg_popup_window_pane_g1

0xa76d,	// (0x0002a880) bg_popup_window_pane_g2_ParamLimits

0xa76d,	// (0x0002a880) bg_popup_window_pane_g2

0xa779,	// (0x0002a88c) bg_popup_window_pane_g3_ParamLimits

0xa779,	// (0x0002a88c) bg_popup_window_pane_g3

0xa785,	// (0x0002a898) bg_popup_window_pane_g4_ParamLimits

0xa785,	// (0x0002a898) bg_popup_window_pane_g4

0xa791,	// (0x0002a8a4) bg_popup_window_pane_g5_ParamLimits

0xa791,	// (0x0002a8a4) bg_popup_window_pane_g5

0xa79d,	// (0x0002a8b0) bg_popup_window_pane_g6_ParamLimits

0xa79d,	// (0x0002a8b0) bg_popup_window_pane_g6

0xa7a9,	// (0x0002a8bc) bg_popup_window_pane_g7_ParamLimits

0xa7a9,	// (0x0002a8bc) bg_popup_window_pane_g7

0xa7b5,	// (0x0002a8c8) bg_popup_window_pane_g8_ParamLimits

0xa7b5,	// (0x0002a8c8) bg_popup_window_pane_g8

0xa7c1,	// (0x0002a8d4) bg_popup_window_pane_g9_ParamLimits

0xa7c1,	// (0x0002a8d4) bg_popup_window_pane_g9

0xa7cd,	// (0x0002a8e0) bg_popup_window_pane_g10_ParamLimits

0xa7cd,	// (0x0002a8e0) bg_popup_window_pane_g10

0x0009,

0xf895,	// (0x0002f9a8) bg_popup_window_pane_g_ParamLimits

0xf895,	// (0x0002f9a8) bg_popup_window_pane_g

0xa6f6,	// (0x0002a809) bg_popup_heading_pane_ParamLimits

0xa6f6,	// (0x0002a809) bg_popup_heading_pane

0x9087,	// (0x0002919a) tabs_4_passive_pane_cp_srt_ParamLimits

0x9087,	// (0x0002919a) tabs_4_passive_pane_cp_srt

0x9099,	// (0x000291ac) tabs_4_passive_pane_srt_ParamLimits

0xa70a,	// (0x0002a81d) heading_pane_g2

0x9099,	// (0x000291ac) tabs_4_passive_pane_srt

0x2049,	// (0x0002215c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2049,	// (0x0002215c) bg_passive_tab_pane_cp3_srt

0xa712,	// (0x0002a825) heading_pane_t1_ParamLimits

0xa712,	// (0x0002a825) heading_pane_t1

0xa729,	// (0x0002a83c) heading_pane_t2_ParamLimits

0xa729,	// (0x0002a83c) heading_pane_t2

0x0001,

0xf890,	// (0x0002f9a3) heading_pane_t_ParamLimits

0xf890,	// (0x0002f9a3) heading_pane_t

0xa233,	// (0x0002a346) bg_popup_heading_pane_g1

0xa2e2,	// (0x0002a3f5) bg_popup_heading_pane_g2

0xa2ec,	// (0x0002a3ff) bg_popup_heading_pane_g3

0xa2f6,	// (0x0002a409) bg_popup_heading_pane_g4

0xa300,	// (0x0002a413) bg_popup_heading_pane_g5

0xa30a,	// (0x0002a41d) bg_popup_heading_pane_g6

0xa312,	// (0x0002a425) bg_popup_heading_pane_g7

0xa31a,	// (0x0002a42d) bg_popup_heading_pane_g8

0xa324,	// (0x0002a437) bg_popup_heading_pane_g9

0x0008,

0xf84c,	// (0x0002f95f) bg_popup_heading_pane_g

0x84f2,	// (0x00028605) bg_popup_sub_pane_g1

0x84fa,	// (0x0002860d) bg_popup_sub_pane_g2

0x8502,	// (0x00028615) bg_popup_sub_pane_g3

0x850a,	// (0x0002861d) bg_popup_sub_pane_g4

0x8512,	// (0x00028625) bg_popup_sub_pane_g5

0x851a,	// (0x0002862d) bg_popup_sub_pane_g6

0x8522,	// (0x00028635) bg_popup_sub_pane_g7

0x852a,	// (0x0002863d) bg_popup_sub_pane_g8

0x8532,	// (0x00028645) bg_popup_sub_pane_g9

0x0008,

0xf826,	// (0x0002f939) bg_popup_sub_pane_g

0x1a51,	// (0x00021b64) bg_popup_window_pane_cp5_ParamLimits

0x1a51,	// (0x00021b64) bg_popup_window_pane_cp5

0x1bb1,	// (0x00021cc4) popup_note_window_g1_ParamLimits

0x1bb1,	// (0x00021cc4) popup_note_window_g1

0x1bbd,	// (0x00021cd0) popup_note_window_t1_ParamLimits

0x1bbd,	// (0x00021cd0) popup_note_window_t1

0x1bd3,	// (0x00021ce6) popup_note_window_t2_ParamLimits

0x1bd3,	// (0x00021ce6) popup_note_window_t2

0x1be9,	// (0x00021cfc) popup_note_window_t3_ParamLimits

0x1be9,	// (0x00021cfc) popup_note_window_t3

0x1bff,	// (0x00021d12) popup_note_window_t4_ParamLimits

0x1bff,	// (0x00021d12) popup_note_window_t4

0x1c27,	// (0x00021d3a) popup_note_window_t5_ParamLimits

0x1c27,	// (0x00021d3a) popup_note_window_t5

0x0004,

0xf558,	// (0x0002f66b) popup_note_window_t_ParamLimits

0xf558,	// (0x0002f66b) popup_note_window_t

0x1c4b,	// (0x00021d5e) bg_popup_window_pane_cp6_ParamLimits

0x1c4b,	// (0x00021d5e) bg_popup_window_pane_cp6

0x8dad,	// (0x00028ec0) popup_note_image_window_g1_ParamLimits

0x8dad,	// (0x00028ec0) popup_note_image_window_g1

0x8db9,	// (0x00028ecc) popup_note_image_window_g2_ParamLimits

0x8db9,	// (0x00028ecc) popup_note_image_window_g2

0x0001,

0xf81a,	// (0x0002f92d) popup_note_image_window_g_ParamLimits

0xf81a,	// (0x0002f92d) popup_note_image_window_g

0x8dd2,	// (0x00028ee5) popup_note_image_window_t1_ParamLimits

0x8dd2,	// (0x00028ee5) popup_note_image_window_t1

0x8deb,	// (0x00028efe) popup_note_image_window_t2_ParamLimits

0x8deb,	// (0x00028efe) popup_note_image_window_t2

0x8e04,	// (0x00028f17) popup_note_image_window_t3_ParamLimits

0x8e04,	// (0x00028f17) popup_note_image_window_t3

0x0002,

0xf81f,	// (0x0002f932) popup_note_image_window_t_ParamLimits

0xf81f,	// (0x0002f932) popup_note_image_window_t

0x8c76,	// (0x00028d89) bg_popup_window_pane_cp7_ParamLimits

0x8c76,	// (0x00028d89) bg_popup_window_pane_cp7

0x8ca6,	// (0x00028db9) popup_note_wait_window_g1_ParamLimits

0x8ca6,	// (0x00028db9) popup_note_wait_window_g1

0x8cb2,	// (0x00028dc5) popup_note_wait_window_g2_ParamLimits

0x8cb2,	// (0x00028dc5) popup_note_wait_window_g2

0x0002,

0xf808,	// (0x0002f91b) popup_note_wait_window_g_ParamLimits

0xf808,	// (0x0002f91b) popup_note_wait_window_g

0x8cca,	// (0x00028ddd) popup_note_wait_window_t1_ParamLimits

0x8cca,	// (0x00028ddd) popup_note_wait_window_t1

0x8cf1,	// (0x00028e04) popup_note_wait_window_t2_ParamLimits

0x8cf1,	// (0x00028e04) popup_note_wait_window_t2

0x8d0e,	// (0x00028e21) popup_note_wait_window_t3_ParamLimits

0x8d0e,	// (0x00028e21) popup_note_wait_window_t3

0x8d21,	// (0x00028e34) popup_note_wait_window_t4_ParamLimits

0x8d21,	// (0x00028e34) popup_note_wait_window_t4

0x0004,

0xf80f,	// (0x0002f922) popup_note_wait_window_t_ParamLimits

0xf80f,	// (0x0002f922) popup_note_wait_window_t

0x8d46,	// (0x00028e59) wait_bar_pane_ParamLimits

0x8d46,	// (0x00028e59) wait_bar_pane

0x1a03,	// (0x00021b16) wait_anim_pane

0x1a03,	// (0x00021b16) wait_border_pane

0x19f9,	// (0x00021b0c) wait_anim_pane_g1

0x19f9,	// (0x00021b0c) wait_anim_pane_g2

0x0001,

0xf6c8,	// (0x0002f7db) wait_anim_pane_g

0x8c22,	// (0x00028d35) wait_border_pane_g1

0x8c2d,	// (0x00028d40) wait_border_pane_g2

0x8c36,	// (0x00028d49) wait_border_pane_g3

0x0002,

0xf801,	// (0x0002f914) wait_border_pane_g

0x8a8d,	// (0x00028ba0) bg_popup_window_pane_cp16_ParamLimits

0x8a8d,	// (0x00028ba0) bg_popup_window_pane_cp16

0x8b8d,	// (0x00028ca0) indicator_popup_pane_cp4_ParamLimits

0x8b8d,	// (0x00028ca0) indicator_popup_pane_cp4

0x8ba1,	// (0x00028cb4) popup_query_data_window_t1_ParamLimits

0x8ba1,	// (0x00028cb4) popup_query_data_window_t1

0x8bb3,	// (0x00028cc6) popup_query_data_window_t2_ParamLimits

0x8bb3,	// (0x00028cc6) popup_query_data_window_t2

0x8bcc,	// (0x00028cdf) popup_query_data_window_t3_ParamLimits

0x8bcc,	// (0x00028cdf) popup_query_data_window_t3

0x0002,

0xf7fa,	// (0x0002f90d) popup_query_data_window_t_ParamLimits

0xf7fa,	// (0x0002f90d) popup_query_data_window_t

0x8be6,	// (0x00028cf9) query_popup_data_pane_ParamLimits

0x8be6,	// (0x00028cf9) query_popup_data_pane

0x8bfa,	// (0x00028d0d) query_popup_data_pane_cp1_ParamLimits

0x8bfa,	// (0x00028d0d) query_popup_data_pane_cp1

0x8a8d,	// (0x00028ba0) bg_popup_window_pane_cp10_ParamLimits

0x8a8d,	// (0x00028ba0) bg_popup_window_pane_cp10

0x8abf,	// (0x00028bd2) indicator_popup_pane_ParamLimits

0x8abf,	// (0x00028bd2) indicator_popup_pane

0x8ae1,	// (0x00028bf4) popup_query_code_window_t1_ParamLimits

0x8ae1,	// (0x00028bf4) popup_query_code_window_t1

0x8afb,	// (0x00028c0e) popup_query_code_window_t2_ParamLimits

0x8afb,	// (0x00028c0e) popup_query_code_window_t2

0x8b44,	// (0x00028c57) popup_query_code_window_t3_ParamLimits

0x8b44,	// (0x00028c57) popup_query_code_window_t3

0x0002,

0xf7f3,	// (0x0002f906) popup_query_code_window_t_ParamLimits

0xf7f3,	// (0x0002f906) popup_query_code_window_t

0x8b73,	// (0x00028c86) query_popup_pane_ParamLimits

0x8b73,	// (0x00028c86) query_popup_pane

0x1c4b,	// (0x00021d5e) bg_popup_window_pane_cp15_ParamLimits

0x1c4b,	// (0x00021d5e) bg_popup_window_pane_cp15

0x6b95,	// (0x00026ca8) indicator_popup_pane_cp1_ParamLimits

0x6b95,	// (0x00026ca8) indicator_popup_pane_cp1

0x6ba8,	// (0x00026cbb) indicator_popup_pane_cp2_ParamLimits

0x6ba8,	// (0x00026cbb) indicator_popup_pane_cp2

0x6bbb,	// (0x00026cce) popup_query_data_code_window_g1_ParamLimits

0x6bbb,	// (0x00026cce) popup_query_data_code_window_g1

0x1c69,	// (0x00021d7c) popup_query_data_code_window_t1_ParamLimits

0x1c69,	// (0x00021d7c) popup_query_data_code_window_t1

0x1c7b,	// (0x00021d8e) popup_query_data_code_window_t2_ParamLimits

0x1c7b,	// (0x00021d8e) popup_query_data_code_window_t2

0x6bce,	// (0x00026ce1) popup_query_data_code_window_t3_ParamLimits

0x6bce,	// (0x00026ce1) popup_query_data_code_window_t3

0x6be4,	// (0x00026cf7) popup_query_data_code_window_t4_ParamLimits

0x6be4,	// (0x00026cf7) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0002f676) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0002f676) popup_query_data_code_window_t

0x260c,	// (0x0002271f) list_single_midp_graphic_pane_g3

0x6bfc,	// (0x00026d0f) query_popup_data_pane_cp2_ParamLimits

0x6c0f,	// (0x00026d22) query_popup_pane_cp2_ParamLimits

0x6c0f,	// (0x00026d22) query_popup_pane_cp2

0x1a03,	// (0x00021b16) bg_popup_window_pane_cp11

0x8a71,	// (0x00028b84) heading_pane_cp5

0x8a79,	// (0x00028b8c) listscroll_popup_info_pane

0x1a03,	// (0x00021b16) input_focus_pane_cp3

0x1c8d,	// (0x00021da0) query_popup_pane_t1

0x1c9b,	// (0x00021dae) list_popup_info_pane_ParamLimits

0x1c9b,	// (0x00021dae) list_popup_info_pane

0x1caa,	// (0x00021dbd) listscroll_popup_info_pane_g1

0x1cb2,	// (0x00021dc5) scroll_pane_cp7

0x6c22,	// (0x00026d35) popup_info_list_pane_t1_ParamLimits

0x6c22,	// (0x00026d35) popup_info_list_pane_t1

0x6c3c,	// (0x00026d4f) popup_info_list_pane_t2_ParamLimits

0x6c3c,	// (0x00026d4f) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0002f67f) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0002f67f) popup_info_list_pane_t

0x1a03,	// (0x00021b16) bg_popup_window_pane_cp12

0xb1da,	// (0x0002b2ed) find_popup_pane

0x1a5f,	// (0x00021b72) bg_popup_window_pane_cp3

0x1cbc,	// (0x00021dcf) heading_pane_cp3

0x1ccb,	// (0x00021dde) listscroll_popup_graphic_pane

0x1a03,	// (0x00021b16) bg_popup_window_pane_cp4

0x6ca6,	// (0x00026db9) heading_pane_cp4

0x1cdb,	// (0x00021dee) listscroll_popup_colour_pane

0x6cb0,	// (0x00026dc3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6cb0,	// (0x00026dc3) cell_large_graphic_colour_none_popup_pane

0x6cc4,	// (0x00026dd7) grid_large_graphic_colour_popup_pane_ParamLimits

0x6cc4,	// (0x00026dd7) grid_large_graphic_colour_popup_pane

0x6ce8,	// (0x00026dfb) listscroll_popup_colour_pane_g1_ParamLimits

0x6ce8,	// (0x00026dfb) listscroll_popup_colour_pane_g1

0x6cff,	// (0x00026e12) listscroll_popup_colour_pane_g2_ParamLimits

0x6cff,	// (0x00026e12) listscroll_popup_colour_pane_g2

0x6d16,	// (0x00026e29) listscroll_popup_colour_pane_g3_ParamLimits

0x6d16,	// (0x00026e29) listscroll_popup_colour_pane_g3

0x6d26,	// (0x00026e39) listscroll_popup_colour_pane_g4_ParamLimits

0x6d26,	// (0x00026e39) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0002f684) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0002f684) listscroll_popup_colour_pane_g

0x1ce3,	// (0x00021df6) scroll_pane_cp6_ParamLimits

0x1ce3,	// (0x00021df6) scroll_pane_cp6

0x6d36,	// (0x00026e49) cell_large_graphic_colour_popup_pane_ParamLimits

0x6d36,	// (0x00026e49) cell_large_graphic_colour_popup_pane

0x6d55,	// (0x00026e68) cell_large_graphic_colour_none_popup_pane_t1

0x1a03,	// (0x00021b16) grid_highlight_pane_cp5

0x1cf5,	// (0x00021e08) cell_large_graphic_colour_popup_pane_g1

0x1cfd,	// (0x00021e10) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0002f68d) cell_large_graphic_colour_popup_pane_g

0x1d05,	// (0x00021e18) cell_large_graphic_colour_popup_pane_g2_copy1

0x1d0e,	// (0x00021e21) grid_highlight_pane_cp4

0x1d16,	// (0x00021e29) bg_popup_window_pane_cp8_ParamLimits

0x1d16,	// (0x00021e29) bg_popup_window_pane_cp8

0x6d64,	// (0x00026e77) popup_snote_single_text_window_g1_ParamLimits

0x6d64,	// (0x00026e77) popup_snote_single_text_window_g1

0x6d76,	// (0x00026e89) popup_snote_single_text_window_t1_ParamLimits

0x6d76,	// (0x00026e89) popup_snote_single_text_window_t1

0x6d89,	// (0x00026e9c) popup_snote_single_text_window_t2_ParamLimits

0x6d89,	// (0x00026e9c) popup_snote_single_text_window_t2

0x6d9c,	// (0x00026eaf) popup_snote_single_text_window_t3_ParamLimits

0x6d9c,	// (0x00026eaf) popup_snote_single_text_window_t3

0x6dd5,	// (0x00026ee8) popup_snote_single_text_window_t4_ParamLimits

0x6dd5,	// (0x00026ee8) popup_snote_single_text_window_t4

0x6e09,	// (0x00026f1c) popup_snote_single_text_window_t5_ParamLimits

0x6e09,	// (0x00026f1c) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0002f692) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0002f692) popup_snote_single_text_window_t

0x1d31,	// (0x00021e44) bg_popup_window_pane_cp9_ParamLimits

0x1d31,	// (0x00021e44) bg_popup_window_pane_cp9

0x6d64,	// (0x00026e77) popup_snote_single_graphic_window_g1_ParamLimits

0x6d64,	// (0x00026e77) popup_snote_single_graphic_window_g1

0x1d3f,	// (0x00021e52) popup_snote_single_graphic_window_g2_ParamLimits

0x1d3f,	// (0x00021e52) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0002f69d) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0002f69d) popup_snote_single_graphic_window_g

0x1d4b,	// (0x00021e5e) popup_snote_single_graphic_window_t1_ParamLimits

0x1d4b,	// (0x00021e5e) popup_snote_single_graphic_window_t1

0x1d5e,	// (0x00021e71) popup_snote_single_graphic_window_t2_ParamLimits

0x1d5e,	// (0x00021e71) popup_snote_single_graphic_window_t2

0x6e38,	// (0x00026f4b) popup_snote_single_graphic_window_t3_ParamLimits

0x6e38,	// (0x00026f4b) popup_snote_single_graphic_window_t3

0x6e71,	// (0x00026f84) popup_snote_single_graphic_window_t4_ParamLimits

0x6e71,	// (0x00026f84) popup_snote_single_graphic_window_t4

0x6ea5,	// (0x00026fb8) popup_snote_single_graphic_window_t5_ParamLimits

0x6ea5,	// (0x00026fb8) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0002f6a2) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0002f6a2) popup_snote_single_graphic_window_t

0xb11c,	// (0x0002b22f) grid_graphic_popup_pane_ParamLimits

0xb11c,	// (0x0002b22f) grid_graphic_popup_pane

0xb146,	// (0x0002b259) listscroll_popup_graphic_pane_g1_ParamLimits

0xb146,	// (0x0002b259) listscroll_popup_graphic_pane_g1

0xb15a,	// (0x0002b26d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb15a,	// (0x0002b26d) listscroll_popup_graphic_pane_g2

0x0001,

0xf970,	// (0x0002fa83) listscroll_popup_graphic_pane_g_ParamLimits

0xf970,	// (0x0002fa83) listscroll_popup_graphic_pane_g

0xb16e,	// (0x0002b281) scroll_pane_cp5

0xb0ab,	// (0x0002b1be) cell_graphic_popup_pane_ParamLimits

0xb0ab,	// (0x0002b1be) cell_graphic_popup_pane

0xb08c,	// (0x0002b19f) cell_graphic_popup_pane_g1

0xb094,	// (0x0002b1a7) cell_graphic_popup_pane_g2

0x1d05,	// (0x00021e18) cell_graphic_popup_pane_g3

0x0002,

0xf969,	// (0x0002fa7c) cell_graphic_popup_pane_g

0xb09d,	// (0x0002b1b0) cell_graphic_popup_pane_t2

0x1d0e,	// (0x00021e21) grid_highlight_pane_cp3

0x1d83,	// (0x00021e96) list_gen_pane_ParamLimits

0x1d83,	// (0x00021e96) list_gen_pane

0x1dab,	// (0x00021ebe) scroll_pane

0xafe4,	// (0x0002b0f7) bg_list_pane_g1_ParamLimits

0xafe4,	// (0x0002b0f7) bg_list_pane_g1

0xb001,	// (0x0002b114) bg_list_pane_g2_ParamLimits

0xb001,	// (0x0002b114) bg_list_pane_g2

0xb016,	// (0x0002b129) bg_list_pane_g3_ParamLimits

0xb016,	// (0x0002b129) bg_list_pane_g3

0xb02a,	// (0x0002b13d) bg_list_pane_g4_ParamLimits

0xb02a,	// (0x0002b13d) bg_list_pane_g4

0xb03e,	// (0x0002b151) bg_list_pane_g5_ParamLimits

0xb03e,	// (0x0002b151) bg_list_pane_g5

0x0004,

0xf95e,	// (0x0002fa71) bg_list_pane_g_ParamLimits

0xf95e,	// (0x0002fa71) bg_list_pane_g

0x5d8b,	// (0x00025e9e) list_double2_graphic_large_graphic_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double2_graphic_large_graphic_pane

0x5d8b,	// (0x00025e9e) list_double2_graphic_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double2_graphic_pane

0x5d8b,	// (0x00025e9e) list_double2_large_graphic_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double2_large_graphic_pane

0x5d8b,	// (0x00025e9e) list_double2_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double2_pane

0x5d8b,	// (0x00025e9e) list_double_graphic_heading_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_graphic_heading_pane

0x5d8b,	// (0x00025e9e) list_double_graphic_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_graphic_pane

0x5d8b,	// (0x00025e9e) list_double_heading_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_heading_pane

0x5d8b,	// (0x00025e9e) list_double_large_graphic_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_large_graphic_pane

0x5d8b,	// (0x00025e9e) list_double_number_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_number_pane

0x5d8b,	// (0x00025e9e) list_double_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_pane

0x5d8b,	// (0x00025e9e) list_double_time_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_double_time_pane

0x5d8b,	// (0x00025e9e) list_setting_number_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_setting_number_pane

0x5d8b,	// (0x00025e9e) list_setting_pane_ParamLimits

0x5d8b,	// (0x00025e9e) list_setting_pane

0x5deb,	// (0x00025efe) list_single_2graphic_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_2graphic_pane

0x5deb,	// (0x00025efe) list_single_graphic_heading_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_graphic_heading_pane

0x5deb,	// (0x00025efe) list_single_graphic_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_graphic_pane

0x5deb,	// (0x00025efe) list_single_heading_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_heading_pane

0xafc1,	// (0x0002b0d4) list_single_large_graphic_pane_ParamLimits

0xafc1,	// (0x0002b0d4) list_single_large_graphic_pane

0x5deb,	// (0x00025efe) list_single_number_heading_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_number_heading_pane

0x5deb,	// (0x00025efe) list_single_number_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_number_pane

0x5deb,	// (0x00025efe) list_single_pane_ParamLimits

0x5deb,	// (0x00025efe) list_single_pane

0x1a03,	// (0x00021b16) list_highlight_pane_cp1

0x5505,	// (0x00025618) list_single_pane_g1_ParamLimits

0x5505,	// (0x00025618) list_single_pane_g1

0x5511,	// (0x00025624) list_single_pane_g2_ParamLimits

0x5511,	// (0x00025624) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_single_pane_g

0x551d,	// (0x00025630) list_single_pane_t1_ParamLimits

0x551d,	// (0x00025630) list_single_pane_t1

0x5505,	// (0x00025618) list_single_number_pane_g1_ParamLimits

0x5505,	// (0x00025618) list_single_number_pane_g1

0x5511,	// (0x00025624) list_single_number_pane_g2_ParamLimits

0x5511,	// (0x00025624) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_single_number_pane_g

0x551d,	// (0x00025630) list_single_number_pane_t1_ParamLimits

0x551d,	// (0x00025630) list_single_number_pane_t1

0x5d4d,	// (0x00025e60) list_single_number_pane_t2_ParamLimits

0x5d4d,	// (0x00025e60) list_single_number_pane_t2

0x0001,

0xf91f,	// (0x0002fa32) list_single_number_pane_t_ParamLimits

0xf91f,	// (0x0002fa32) list_single_number_pane_t

0x54f9,	// (0x0002560c) list_single_graphic_pane_g1_ParamLimits

0x54f9,	// (0x0002560c) list_single_graphic_pane_g1

0x5505,	// (0x00025618) list_single_graphic_pane_g2_ParamLimits

0x5505,	// (0x00025618) list_single_graphic_pane_g2

0x5511,	// (0x00025624) list_single_graphic_pane_g3_ParamLimits

0x5511,	// (0x00025624) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0002f6ad) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0002f6ad) list_single_graphic_pane_g

0x551d,	// (0x00025630) list_single_graphic_pane_t1_ParamLimits

0x551d,	// (0x00025630) list_single_graphic_pane_t1

0x5505,	// (0x00025618) list_single_heading_pane_g1_ParamLimits

0x5505,	// (0x00025618) list_single_heading_pane_g1

0x5511,	// (0x00025624) list_single_heading_pane_g2_ParamLimits

0x5511,	// (0x00025624) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_single_heading_pane_g

0x5533,	// (0x00025646) list_single_heading_pane_t1_ParamLimits

0x5533,	// (0x00025646) list_single_heading_pane_t1

0x5549,	// (0x0002565c) list_single_heading_pane_t2_ParamLimits

0x5549,	// (0x0002565c) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0002f6b9) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0002f6b9) list_single_heading_pane_t

0x5505,	// (0x00025618) list_single_number_heading_pane_g1_ParamLimits

0x5505,	// (0x00025618) list_single_number_heading_pane_g1

0x5511,	// (0x00025624) list_single_number_heading_pane_g2_ParamLimits

0x5511,	// (0x00025624) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_single_number_heading_pane_g

0x5533,	// (0x00025646) list_single_number_heading_pane_t1_ParamLimits

0x5533,	// (0x00025646) list_single_number_heading_pane_t1

0x555b,	// (0x0002566e) list_single_number_heading_pane_t2_ParamLimits

0x555b,	// (0x0002566e) list_single_number_heading_pane_t2

0x556d,	// (0x00025680) list_single_number_heading_pane_t3_ParamLimits

0x556d,	// (0x00025680) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0002f6be) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0002f6be) list_single_number_heading_pane_t

0x557f,	// (0x00025692) list_single_graphic_heading_pane_g1_ParamLimits

0x557f,	// (0x00025692) list_single_graphic_heading_pane_g1

0x558b,	// (0x0002569e) list_single_graphic_heading_pane_g4_ParamLimits

0x558b,	// (0x0002569e) list_single_graphic_heading_pane_g4

0x5511,	// (0x00025624) list_single_graphic_heading_pane_g5_ParamLimits

0x5511,	// (0x00025624) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0002f6c5) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0002f6c5) list_single_graphic_heading_pane_g

0x5533,	// (0x00025646) list_single_graphic_heading_pane_t1_ParamLimits

0x5533,	// (0x00025646) list_single_graphic_heading_pane_t1

0x559c,	// (0x000256af) list_single_graphic_heading_pane_t2_ParamLimits

0x559c,	// (0x000256af) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0002f6cc) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0002f6cc) list_single_graphic_heading_pane_t

0x55ae,	// (0x000256c1) list_single_large_graphic_pane_g1_ParamLimits

0x55ae,	// (0x000256c1) list_single_large_graphic_pane_g1

0x55ba,	// (0x000256cd) list_single_large_graphic_pane_g2_ParamLimits

0x55ba,	// (0x000256cd) list_single_large_graphic_pane_g2

0x55c6,	// (0x000256d9) list_single_large_graphic_pane_g3_ParamLimits

0x55c6,	// (0x000256d9) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0002f6d1) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0002f6d1) list_single_large_graphic_pane_g

0x8c2d,	// (0x00028d40) wait_border_pane_g2_copy1

0x55d2,	// (0x000256e5) list_single_large_graphic_pane_g4_cp2

0x55da,	// (0x000256ed) list_single_large_graphic_pane_t1_ParamLimits

0x55da,	// (0x000256ed) list_single_large_graphic_pane_t1

0x55f0,	// (0x00025703) list_double_pane_g1_ParamLimits

0x55f0,	// (0x00025703) list_double_pane_g1

0x55fc,	// (0x0002570f) list_double_pane_g2_ParamLimits

0x55fc,	// (0x0002570f) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0002f6d8) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0002f6d8) list_double_pane_g

0x5608,	// (0x0002571b) list_double_pane_t1_ParamLimits

0x5608,	// (0x0002571b) list_double_pane_t1

0x561e,	// (0x00025731) list_double_pane_t2_ParamLimits

0x561e,	// (0x00025731) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0002f6dd) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0002f6dd) list_double_pane_t

0x5630,	// (0x00025743) list_double2_pane_g1_ParamLimits

0x5630,	// (0x00025743) list_double2_pane_g1

0x55fc,	// (0x0002570f) list_double2_pane_g2_ParamLimits

0x55fc,	// (0x0002570f) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0002f6e2) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0002f6e2) list_double2_pane_g

0x5608,	// (0x0002571b) list_double2_pane_t1_ParamLimits

0x5608,	// (0x0002571b) list_double2_pane_t1

0x5641,	// (0x00025754) list_double2_pane_t2_ParamLimits

0x5641,	// (0x00025754) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0002f6e7) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0002f6e7) list_double2_pane_t

0x55f0,	// (0x00025703) list_double_number_pane_g1_ParamLimits

0x55f0,	// (0x00025703) list_double_number_pane_g1

0x55fc,	// (0x0002570f) list_double_number_pane_g2_ParamLimits

0x55fc,	// (0x0002570f) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0002f6d8) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0002f6d8) list_double_number_pane_g

0x5653,	// (0x00025766) list_double_number_pane_t1_ParamLimits

0x5653,	// (0x00025766) list_double_number_pane_t1

0x5608,	// (0x0002571b) list_double_number_pane_t2_ParamLimits

0x5608,	// (0x0002571b) list_double_number_pane_t2

0x561e,	// (0x00025731) list_double_number_pane_t3_ParamLimits

0x561e,	// (0x00025731) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0002f6ec) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0002f6ec) list_double_number_pane_t

0x5665,	// (0x00025778) list_double_graphic_pane_g1_ParamLimits

0x5665,	// (0x00025778) list_double_graphic_pane_g1

0x5671,	// (0x00025784) list_double_graphic_pane_g2_ParamLimits

0x5671,	// (0x00025784) list_double_graphic_pane_g2

0x5680,	// (0x00025793) list_double_graphic_pane_g3_ParamLimits

0x5680,	// (0x00025793) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0002f6f3) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0002f6f3) list_double_graphic_pane_g

0x5608,	// (0x0002571b) list_double_graphic_pane_t1_ParamLimits

0x5608,	// (0x0002571b) list_double_graphic_pane_t1

0x561e,	// (0x00025731) list_double_graphic_pane_t2_ParamLimits

0x561e,	// (0x00025731) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x0002f6dd) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x0002f6dd) list_double_graphic_pane_t

0x5665,	// (0x00025778) list_double2_graphic_pane_g1_ParamLimits

0x5665,	// (0x00025778) list_double2_graphic_pane_g1

0x5698,	// (0x000257ab) list_double2_graphic_pane_g2_ParamLimits

0x5698,	// (0x000257ab) list_double2_graphic_pane_g2

0x56a4,	// (0x000257b7) list_double2_graphic_pane_g3_ParamLimits

0x56a4,	// (0x000257b7) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x0002f6fc) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x0002f6fc) list_double2_graphic_pane_g

0x5608,	// (0x0002571b) list_double2_graphic_pane_t1_ParamLimits

0x5608,	// (0x0002571b) list_double2_graphic_pane_t1

0x5641,	// (0x00025754) list_double2_graphic_pane_t2_ParamLimits

0x5641,	// (0x00025754) list_double2_graphic_pane_t2

0x0001,

0xf5d4,	// (0x0002f6e7) list_double2_graphic_pane_t_ParamLimits

0xf5d4,	// (0x0002f6e7) list_double2_graphic_pane_t

0x56b0,	// (0x000257c3) list_double_large_graphic_pane_g1_ParamLimits

0x56b0,	// (0x000257c3) list_double_large_graphic_pane_g1

0x5630,	// (0x00025743) list_double_large_graphic_pane_g2_ParamLimits

0x5630,	// (0x00025743) list_double_large_graphic_pane_g2

0x55fc,	// (0x0002570f) list_double_large_graphic_pane_g3_ParamLimits

0x55fc,	// (0x0002570f) list_double_large_graphic_pane_g3

0x56c3,	// (0x000257d6) list_double_large_graphic_pane_g4_ParamLimits

0x56c3,	// (0x000257d6) list_double_large_graphic_pane_g4

0x0004,

0xf5f0,	// (0x0002f703) list_double_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002f703) list_double_large_graphic_pane_g

0x56ea,	// (0x000257fd) list_double_large_graphic_pane_t1_ParamLimits

0x56ea,	// (0x000257fd) list_double_large_graphic_pane_t1

0x5703,	// (0x00025816) list_double_large_graphic_pane_t2_ParamLimits

0x5703,	// (0x00025816) list_double_large_graphic_pane_t2

0x0001,

0xf5fb,	// (0x0002f70e) list_double_large_graphic_pane_t_ParamLimits

0xf5fb,	// (0x0002f70e) list_double_large_graphic_pane_t

0x5715,	// (0x00025828) list_double2_large_graphic_pane_g1_ParamLimits

0x5715,	// (0x00025828) list_double2_large_graphic_pane_g1

0x5630,	// (0x00025743) list_double2_large_graphic_pane_g2_ParamLimits

0x5630,	// (0x00025743) list_double2_large_graphic_pane_g2

0x55fc,	// (0x0002570f) list_double2_large_graphic_pane_g3_ParamLimits

0x55fc,	// (0x0002570f) list_double2_large_graphic_pane_g3

0x0002,

0xf600,	// (0x0002f713) list_double2_large_graphic_pane_g_ParamLimits

0xf600,	// (0x0002f713) list_double2_large_graphic_pane_g

0x5721,	// (0x00025834) list_double2_large_graphic_pane_t1_ParamLimits

0x5721,	// (0x00025834) list_double2_large_graphic_pane_t1

0x5737,	// (0x0002584a) list_double2_large_graphic_pane_t2_ParamLimits

0x5737,	// (0x0002584a) list_double2_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002f71a) list_double2_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002f71a) list_double2_large_graphic_pane_t

0x5749,	// (0x0002585c) list_double_heading_pane_g1_ParamLimits

0x5749,	// (0x0002585c) list_double_heading_pane_g1

0x575a,	// (0x0002586d) list_double_heading_pane_g2_ParamLimits

0x575a,	// (0x0002586d) list_double_heading_pane_g2

0x0001,

0xf60c,	// (0x0002f71f) list_double_heading_pane_g_ParamLimits

0xf60c,	// (0x0002f71f) list_double_heading_pane_g

0x5766,	// (0x00025879) list_double_heading_pane_t1_ParamLimits

0x5766,	// (0x00025879) list_double_heading_pane_t1

0x5641,	// (0x00025754) list_double_heading_pane_t2_ParamLimits

0x5641,	// (0x00025754) list_double_heading_pane_t2

0x0001,

0xf611,	// (0x0002f724) list_double_heading_pane_t_ParamLimits

0xf611,	// (0x0002f724) list_double_heading_pane_t

0x577c,	// (0x0002588f) list_double_graphic_heading_pane_g1_ParamLimits

0x577c,	// (0x0002588f) list_double_graphic_heading_pane_g1

0x5749,	// (0x0002585c) list_double_graphic_heading_pane_g2_ParamLimits

0x5749,	// (0x0002585c) list_double_graphic_heading_pane_g2

0x575a,	// (0x0002586d) list_double_graphic_heading_pane_g3_ParamLimits

0x575a,	// (0x0002586d) list_double_graphic_heading_pane_g3

0x0002,

0xf616,	// (0x0002f729) list_double_graphic_heading_pane_g_ParamLimits

0xf616,	// (0x0002f729) list_double_graphic_heading_pane_g

0x5766,	// (0x00025879) list_double_graphic_heading_pane_t1_ParamLimits

0x5766,	// (0x00025879) list_double_graphic_heading_pane_t1

0x5641,	// (0x00025754) list_double_graphic_heading_pane_t2_ParamLimits

0x5641,	// (0x00025754) list_double_graphic_heading_pane_t2

0x0001,

0xf611,	// (0x0002f724) list_double_graphic_heading_pane_t_ParamLimits

0xf611,	// (0x0002f724) list_double_graphic_heading_pane_t

0x5630,	// (0x00025743) list_double_time_pane_g1_ParamLimits

0x5630,	// (0x00025743) list_double_time_pane_g1

0x55fc,	// (0x0002570f) list_double_time_pane_g2_ParamLimits

0x55fc,	// (0x0002570f) list_double_time_pane_g2

0x0001,

0xf5cf,	// (0x0002f6e2) list_double_time_pane_g_ParamLimits

0xf5cf,	// (0x0002f6e2) list_double_time_pane_g

0x5788,	// (0x0002589b) list_double_time_pane_t1_ParamLimits

0x5788,	// (0x0002589b) list_double_time_pane_t1

0x579e,	// (0x000258b1) list_double_time_pane_t2_ParamLimits

0x579e,	// (0x000258b1) list_double_time_pane_t2

0x57b0,	// (0x000258c3) list_double_time_pane_t3_ParamLimits

0x57b0,	// (0x000258c3) list_double_time_pane_t3

0x57c2,	// (0x000258d5) list_double_time_pane_t4_ParamLimits

0x57c2,	// (0x000258d5) list_double_time_pane_t4

0x0003,

0xf61d,	// (0x0002f730) list_double_time_pane_t_ParamLimits

0xf61d,	// (0x0002f730) list_double_time_pane_t

0x57d4,	// (0x000258e7) list_setting_pane_g1_ParamLimits

0x57d4,	// (0x000258e7) list_setting_pane_g1

0x57e0,	// (0x000258f3) list_setting_pane_g2_ParamLimits

0x57e0,	// (0x000258f3) list_setting_pane_g2

0x0001,

0xf626,	// (0x0002f739) list_setting_pane_g_ParamLimits

0xf626,	// (0x0002f739) list_setting_pane_g

0x57ec,	// (0x000258ff) list_setting_pane_t1_ParamLimits

0x57ec,	// (0x000258ff) list_setting_pane_t1

0x5803,	// (0x00025916) list_setting_pane_t2_ParamLimits

0x5803,	// (0x00025916) list_setting_pane_t2

0x0002,

0xf62b,	// (0x0002f73e) list_setting_pane_t_ParamLimits

0xf62b,	// (0x0002f73e) list_setting_pane_t

0x5840,	// (0x00025953) set_value_pane_cp_ParamLimits

0x5840,	// (0x00025953) set_value_pane_cp

0x584c,	// (0x0002595f) list_setting_number_pane_g1_ParamLimits

0x584c,	// (0x0002595f) list_setting_number_pane_g1

0x5858,	// (0x0002596b) list_setting_number_pane_g2_ParamLimits

0x5858,	// (0x0002596b) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x0002f745) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x0002f745) list_setting_number_pane_g

0x5864,	// (0x00025977) list_setting_number_pane_t1_ParamLimits

0x5864,	// (0x00025977) list_setting_number_pane_t1

0x5878,	// (0x0002598b) list_setting_number_pane_t2_ParamLimits

0x5878,	// (0x0002598b) list_setting_number_pane_t2

0x588f,	// (0x000259a2) list_setting_number_pane_t3_ParamLimits

0x588f,	// (0x000259a2) list_setting_number_pane_t3

0x0003,

0xf637,	// (0x0002f74a) list_setting_number_pane_t_ParamLimits

0xf637,	// (0x0002f74a) list_setting_number_pane_t

0x5840,	// (0x00025953) set_value_pane_ParamLimits

0x5840,	// (0x00025953) set_value_pane

0x1e18,	// (0x00021f2b) bg_set_opt_pane_ParamLimits

0x1e18,	// (0x00021f2b) bg_set_opt_pane

0x58d2,	// (0x000259e5) set_value_pane_t1

0x1e47,	// (0x00021f5a) slider_set_pane_cp3

0x6ede,	// (0x00026ff1) volume_small_pane_cp

0x1e50,	// (0x00021f63) list_form_gen_pane

0x1e59,	// (0x00021f6c) scroll_pane_cp8

0x58e8,	// (0x000259fb) form_field_data_pane_ParamLimits

0x58e8,	// (0x000259fb) form_field_data_pane

0x5908,	// (0x00025a1b) form_field_data_wide_pane_ParamLimits

0x5908,	// (0x00025a1b) form_field_data_wide_pane

0x5929,	// (0x00025a3c) form_field_popup_pane_ParamLimits

0x5929,	// (0x00025a3c) form_field_popup_pane

0x5947,	// (0x00025a5a) form_field_popup_wide_pane_ParamLimits

0x5947,	// (0x00025a5a) form_field_popup_wide_pane

0x5964,	// (0x00025a77) form_field_slider_pane_ParamLimits

0x5964,	// (0x00025a77) form_field_slider_pane

0x5977,	// (0x00025a8a) form_field_slider_wide_pane_ParamLimits

0x5977,	// (0x00025a8a) form_field_slider_wide_pane

0x1e8d,	// (0x00021fa0) data_form_pane

0x5994,	// (0x00025aa7) form_field_data_pane_t1

0x1e99,	// (0x00021fac) input_focus_pane

0x59ac,	// (0x00025abf) data_form_wide_pane

0x59c9,	// (0x00025adc) form_field_data_wide_pane_t1

0x1d23,	// (0x00021e36) input_focus_pane_cp6

0x59eb,	// (0x00025afe) form_field_popup_pane_t1

0x1e99,	// (0x00021fac) input_focus_pane_cp7

0x1f06,	// (0x00022019) list_form_pane

0x5a0b,	// (0x00025b1e) form_field_popup_wide_pane_t1

0x1e99,	// (0x00021fac) input_focus_pane_cp8

0x1f2f,	// (0x00022042) list_form_wide_pane

0x5a28,	// (0x00025b3b) form_field_slider_pane_t1_ParamLimits

0x5a28,	// (0x00025b3b) form_field_slider_pane_t1

0x5a3e,	// (0x00025b51) form_field_slider_pane_t2_ParamLimits

0x5a3e,	// (0x00025b51) form_field_slider_pane_t2

0x0001,

0xf647,	// (0x0002f75a) form_field_slider_pane_t_ParamLimits

0xf647,	// (0x0002f75a) form_field_slider_pane_t

0x1a51,	// (0x00021b64) input_focus_pane_cp9_ParamLimits

0x1a51,	// (0x00021b64) input_focus_pane_cp9

0x5a53,	// (0x00025b66) slider_cont_pane_ParamLimits

0x5a53,	// (0x00025b66) slider_cont_pane

0x1f3b,	// (0x0002204e) form_field_slider_wide_pane_t1_ParamLimits

0x1f3b,	// (0x0002204e) form_field_slider_wide_pane_t1

0x5a67,	// (0x00025b7a) form_field_slider_wide_pane_t2_ParamLimits

0x5a67,	// (0x00025b7a) form_field_slider_wide_pane_t2

0x0001,

0xf64c,	// (0x0002f75f) form_field_slider_wide_pane_t_ParamLimits

0xf64c,	// (0x0002f75f) form_field_slider_wide_pane_t

0x1a51,	// (0x00021b64) input_focus_pane_cp10_ParamLimits

0x1a51,	// (0x00021b64) input_focus_pane_cp10

0x5a79,	// (0x00025b8c) slider_cont_pane_cp1_ParamLimits

0x5a79,	// (0x00025b8c) slider_cont_pane_cp1

0x5a8d,	// (0x00025ba0) slider_form_pane_cp

0x1f5f,	// (0x00022072) input_focus_pane_g1

0x1f67,	// (0x0002207a) input_focus_pane_g2

0x1f6f,	// (0x00022082) input_focus_pane_g3

0x1f77,	// (0x0002208a) input_focus_pane_g4

0x1f7f,	// (0x00022092) input_focus_pane_g5

0x1f87,	// (0x0002209a) input_focus_pane_g6

0x1f8f,	// (0x000220a2) input_focus_pane_g7

0x1f97,	// (0x000220aa) input_focus_pane_g8

0x1f9f,	// (0x000220b2) input_focus_pane_g9

0x19f9,	// (0x00021b0c) input_focus_pane_g10

0x0009,

0xf651,	// (0x0002f764) input_focus_pane_g

0x8c36,	// (0x00028d49) wait_border_pane_g3_copy1

0x5a95,	// (0x00025ba8) data_form_pane_t1

0x19f9,	// (0x00021b0c) wait_anim_pane_g1_copy1

0x5d5f,	// (0x00025e72) data_form_wide_pane_t1

0x5ab0,	// (0x00025bc3) list_form_graphic_pane_cp_ParamLimits

0x5ab0,	// (0x00025bc3) list_form_graphic_pane_cp

0xaf17,	// (0x0002b02a) slider_form_pane_g1

0xaf20,	// (0x0002b033) slider_form_pane_g2

0x0006,

0xf94f,	// (0x0002fa62) slider_form_pane_g

0x5ac4,	// (0x00025bd7) list_form_graphic_pane_ParamLimits

0x5ac4,	// (0x00025bd7) list_form_graphic_pane

0x5adb,	// (0x00025bee) list_form_graphic_pane_g1

0x5ae3,	// (0x00025bf6) list_form_graphic_pane_t1_ParamLimits

0x5ae3,	// (0x00025bf6) list_form_graphic_pane_t1

0x1a5f,	// (0x00021b72) list_highlight_pane_cp5_ParamLimits

0x1a5f,	// (0x00021b72) list_highlight_pane_cp5

0x5af8,	// (0x00025c0b) find_pane_g1

0x1fa7,	// (0x000220ba) input_find_pane

0x5b01,	// (0x00025c14) input_find_pane_g1_ParamLimits

0x5b01,	// (0x00025c14) input_find_pane_g1

0x5b0d,	// (0x00025c20) input_find_pane_t1_ParamLimits

0x5b0d,	// (0x00025c20) input_find_pane_t1

0x5b22,	// (0x00025c35) input_find_pane_t2_ParamLimits

0x5b22,	// (0x00025c35) input_find_pane_t2

0x0001,

0xf666,	// (0x0002f779) input_find_pane_t_ParamLimits

0xf666,	// (0x0002f779) input_find_pane_t

0x1fb0,	// (0x000220c3) input_focus_pane_cp5_ParamLimits

0x1fb0,	// (0x000220c3) input_focus_pane_cp5

0x1fc3,	// (0x000220d6) bg_popup_window_pane_cp2_ParamLimits

0x1fc3,	// (0x000220d6) bg_popup_window_pane_cp2

0x1fd0,	// (0x000220e3) listscroll_menu_pane_ParamLimits

0x1fd0,	// (0x000220e3) listscroll_menu_pane

0x6ef3,	// (0x00027006) popup_submenu_window_ParamLimits

0x6ef3,	// (0x00027006) popup_submenu_window

0x1fdc,	// (0x000220ef) find_popup_pane_g1

0x6f1b,	// (0x0002702e) input_popup_find_pane_cp

0x1fe4,	// (0x000220f7) input_focus_pane_cp4_ParamLimits

0x1fe4,	// (0x000220f7) input_focus_pane_cp4

0x1ff2,	// (0x00022105) input_popup_find_pane_t1_ParamLimits

0x1ff2,	// (0x00022105) input_popup_find_pane_t1

0x1a03,	// (0x00021b16) bg_popup_sub_pane_cp

0x2020,	// (0x00022133) listscroll_popup_sub_pane

0x2028,	// (0x0002213b) list_submenu_pane_ParamLimits

0x2028,	// (0x0002213b) list_submenu_pane

0x2039,	// (0x0002214c) scroll_pane_cp4

0x6f33,	// (0x00027046) list_single_popup_submenu_pane_ParamLimits

0x6f33,	// (0x00027046) list_single_popup_submenu_pane

0x2983,	// (0x00022a96) list_single_popup_submenu_pane_g1

0x6f47,	// (0x0002705a) list_single_popup_submenu_pane_t1_ParamLimits

0x6f47,	// (0x0002705a) list_single_popup_submenu_pane_t1

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp1_ParamLimits

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp1

0x2041,	// (0x00022154) tabs_2_active_pane_g1

0x6f5c,	// (0x0002706f) tabs_2_active_pane_t1

0x1a5f,	// (0x00021b72) bg_passive_tab_pane_cp1_ParamLimits

0x1a5f,	// (0x00021b72) bg_passive_tab_pane_cp1

0x2041,	// (0x00022154) tabs_2_passive_pane_g1

0x6f5c,	// (0x0002706f) tabs_2_passive_pane_t1

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp4

0x6f7c,	// (0x0002708f) tabs_2_long_active_pane_t1

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp4

0x855f,	// (0x00028672) list_single_midp_graphic_pane_g4_ParamLimits

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp5

0x6f9b,	// (0x000270ae) tabs_3_long_active_pane_t1

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp5

0x855f,	// (0x00028672) list_single_midp_graphic_pane_g4

0x1a5f,	// (0x00021b72) bg_popup_window_pane_cp13_ParamLimits

0x1a5f,	// (0x00021b72) bg_popup_window_pane_cp13

0x2055,	// (0x00022168) listscroll_popup_fast_pane_ParamLimits

0x2055,	// (0x00022168) listscroll_popup_fast_pane

0x2061,	// (0x00022174) grid_popup_fast_pane_ParamLimits

0x2061,	// (0x00022174) grid_popup_fast_pane

0x2073,	// (0x00022186) scroll_pane_cp9_ParamLimits

0x2073,	// (0x00022186) scroll_pane_cp9

0xc850,	// (0x0002c963) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc850,	// (0x0002c963) list_single_graphic_hl_pane_t1_cp2

0x2086,	// (0x00022199) input_focus_pane_cp20_ParamLimits

0x2086,	// (0x00022199) input_focus_pane_cp20

0x2094,	// (0x000221a7) query_popup_data_pane_t1_ParamLimits

0x2094,	// (0x000221a7) query_popup_data_pane_t1

0x20a7,	// (0x000221ba) query_popup_data_pane_t2_ParamLimits

0x20a7,	// (0x000221ba) query_popup_data_pane_t2

0x20ed,	// (0x00022200) query_popup_data_pane_t3_ParamLimits

0x20ed,	// (0x00022200) query_popup_data_pane_t3

0x212e,	// (0x00022241) query_popup_data_pane_t4_ParamLimits

0x212e,	// (0x00022241) query_popup_data_pane_t4

0x216a,	// (0x0002227d) query_popup_data_pane_t5_ParamLimits

0x216a,	// (0x0002227d) query_popup_data_pane_t5

0x0004,

0xf66b,	// (0x0002f77e) query_popup_data_pane_t_ParamLimits

0xf66b,	// (0x0002f77e) query_popup_data_pane_t

0x1f5f,	// (0x00022072) bg_set_opt_pane_g1

0x1f67,	// (0x0002207a) bg_set_opt_pane_g2

0x1f6f,	// (0x00022082) bg_set_opt_pane_g3

0x1f77,	// (0x0002208a) bg_set_opt_pane_g4

0x1f7f,	// (0x00022092) bg_set_opt_pane_g5

0x1f87,	// (0x0002209a) bg_set_opt_pane_g6

0x1f8f,	// (0x000220a2) bg_set_opt_pane_g7

0x1f97,	// (0x000220aa) bg_set_opt_pane_g8

0x1f9f,	// (0x000220b2) bg_set_opt_pane_g9

0x0008,

0xf676,	// (0x0002f789) bg_set_opt_pane_g

0x749c,	// (0x000275af) control_top_pane_stacon_ParamLimits

0x749c,	// (0x000275af) control_top_pane_stacon

0x74ef,	// (0x00027602) signal_pane_stacon_ParamLimits

0x74ef,	// (0x00027602) signal_pane_stacon

0x24f6,	// (0x00022609) stacon_top_pane_g1_ParamLimits

0x24f6,	// (0x00022609) stacon_top_pane_g1

0x7514,	// (0x00027627) title_pane_stacon_ParamLimits

0x7514,	// (0x00027627) title_pane_stacon

0x753e,	// (0x00027651) uni_indicator_pane_stacon_ParamLimits

0x753e,	// (0x00027651) uni_indicator_pane_stacon

0x7553,	// (0x00027666) battery_pane_stacon_ParamLimits

0x7553,	// (0x00027666) battery_pane_stacon

0x7597,	// (0x000276aa) control_bottom_pane_stacon_ParamLimits

0x7597,	// (0x000276aa) control_bottom_pane_stacon

0x75ba,	// (0x000276cd) navi_pane_stacon_ParamLimits

0x75ba,	// (0x000276cd) navi_pane_stacon

0x2518,	// (0x0002262b) stacon_bottom_pane_g1_ParamLimits

0x2518,	// (0x0002262b) stacon_bottom_pane_g1

0x6fc7,	// (0x000270da) aid_levels_signal_lsc_ParamLimits

0x6fc7,	// (0x000270da) aid_levels_signal_lsc

0x6fdd,	// (0x000270f0) signal_pane_stacon_g1_ParamLimits

0x6fdd,	// (0x000270f0) signal_pane_stacon_g1

0x6ff1,	// (0x00027104) signal_pane_stacon_g2_ParamLimits

0x6ff1,	// (0x00027104) signal_pane_stacon_g2

0x0001,

0xf689,	// (0x0002f79c) signal_pane_stacon_g_ParamLimits

0xf689,	// (0x0002f79c) signal_pane_stacon_g

0x7026,	// (0x00027139) title_pane_stacon_t1_ParamLimits

0x7026,	// (0x00027139) title_pane_stacon_t1

0x21c2,	// (0x000222d5) uni_indicator_pane_stacon_g1

0x21cc,	// (0x000222df) uni_indicator_pane_stacon_g2

0x21ae,	// (0x000222c1) uni_indicator_pane_stacon_g3

0x21b8,	// (0x000222cb) uni_indicator_pane_stacon_g4

0x0003,

0xf695,	// (0x0002f7a8) uni_indicator_pane_stacon_g

0x704b,	// (0x0002715e) control_top_pane_stacon_g1

0x7053,	// (0x00027166) control_top_pane_stacon_t1_ParamLimits

0x7053,	// (0x00027166) control_top_pane_stacon_t1

0x708a,	// (0x0002719d) aid_levels_battery_lsc_ParamLimits

0x708a,	// (0x0002719d) aid_levels_battery_lsc

0x70a1,	// (0x000271b4) battery_pane_stacon_g1_ParamLimits

0x70a1,	// (0x000271b4) battery_pane_stacon_g1

0x70b4,	// (0x000271c7) battery_pane_stacon_g2_ParamLimits

0x70b4,	// (0x000271c7) battery_pane_stacon_g2

0x0001,

0xf69e,	// (0x0002f7b1) battery_pane_stacon_g_ParamLimits

0xf69e,	// (0x0002f7b1) battery_pane_stacon_g

0x70f2,	// (0x00027205) navi_icon_pane_stacon

0x7106,	// (0x00027219) navi_navi_pane_stacon

0x70f2,	// (0x00027205) navi_text_pane_stacon

0x704b,	// (0x0002715e) control_bottom_pane_stacon_g1

0x711a,	// (0x0002722d) control_bottom_pane_stacon_t1_ParamLimits

0x711a,	// (0x0002722d) control_bottom_pane_stacon_t1

0x7151,	// (0x00027264) grid_app_pane_ParamLimits

0x7151,	// (0x00027264) grid_app_pane

0x7173,	// (0x00027286) scroll_pane_cp15_ParamLimits

0x7173,	// (0x00027286) scroll_pane_cp15

0x7186,	// (0x00027299) cell_app_pane_ParamLimits

0x7186,	// (0x00027299) cell_app_pane

0x71ae,	// (0x000272c1) cell_app_pane_g1_ParamLimits

0x71ae,	// (0x000272c1) cell_app_pane_g1

0x21f0,	// (0x00022303) cell_app_pane_g2_ParamLimits

0x21f0,	// (0x00022303) cell_app_pane_g2

0x0001,

0xf6a3,	// (0x0002f7b6) cell_app_pane_g_ParamLimits

0xf6a3,	// (0x0002f7b6) cell_app_pane_g

0x71d2,	// (0x000272e5) cell_app_pane_t1_ParamLimits

0x71d2,	// (0x000272e5) cell_app_pane_t1

0x21fc,	// (0x0002230f) grid_highlight_pane_ParamLimits

0x21fc,	// (0x0002230f) grid_highlight_pane

0x1f5f,	// (0x00022072) cell_highlight_pane_g1

0x1f67,	// (0x0002207a) cell_highlight_pane_g2

0x1f6f,	// (0x00022082) cell_highlight_pane_g3

0x1f77,	// (0x0002208a) cell_highlight_pane_g4

0x1f7f,	// (0x00022092) cell_highlight_pane_g5

0x1f87,	// (0x0002209a) cell_highlight_pane_g6

0x1f8f,	// (0x000220a2) cell_highlight_pane_g7

0x1f97,	// (0x000220aa) cell_highlight_pane_g8

0x1f9f,	// (0x000220b2) cell_highlight_pane_g9

0x19f9,	// (0x00021b0c) cell_highlight_pane_g10

0x0009,

0xf651,	// (0x0002f764) cell_highlight_pane_g

0x220d,	// (0x00022320) bg_scroll_pane

0x71fc,	// (0x0002730f) scroll_handle_pane

0x2254,	// (0x00022367) scroll_bg_pane_g1

0x2269,	// (0x0002237c) scroll_bg_pane_g2

0x2281,	// (0x00022394) scroll_bg_pane_g3

0x0002,

0xf6a8,	// (0x0002f7bb) scroll_bg_pane_g

0x7225,	// (0x00027338) scroll_handle_focus_pane_ParamLimits

0x7225,	// (0x00027338) scroll_handle_focus_pane

0x2254,	// (0x00022367) scroll_handle_pane_g1

0x2296,	// (0x000223a9) scroll_handle_pane_g2

0x2281,	// (0x00022394) scroll_handle_pane_g3

0x0002,

0xf6af,	// (0x0002f7c2) scroll_handle_pane_g

0x1fe4,	// (0x000220f7) bg_popup_sub_pane_cp21_ParamLimits

0x1fe4,	// (0x000220f7) bg_popup_sub_pane_cp21

0x7232,	// (0x00027345) popup_fep_japan_predictive_window_t1_ParamLimits

0x7232,	// (0x00027345) popup_fep_japan_predictive_window_t1

0x724c,	// (0x0002735f) popup_fep_japan_predictive_window_t2_ParamLimits

0x724c,	// (0x0002735f) popup_fep_japan_predictive_window_t2

0x727f,	// (0x00027392) popup_fep_japan_predictive_window_t3_ParamLimits

0x727f,	// (0x00027392) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b6,	// (0x0002f7c9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b6,	// (0x0002f7c9) popup_fep_japan_predictive_window_t

0x1a03,	// (0x00021b16) bg_popup_sub_pane_cp23

0x29b0,	// (0x00022ac3) listscroll_japin_cand_pane

0x22aa,	// (0x000223bd) popup_fep_japan_candidate_window_t1

0x22b8,	// (0x000223cb) candidate_pane_ParamLimits

0x22b8,	// (0x000223cb) candidate_pane

0x72b6,	// (0x000273c9) scroll_pane_cp30

0x22ca,	// (0x000223dd) list_single_popup_jap_candidate_pane_ParamLimits

0x22ca,	// (0x000223dd) list_single_popup_jap_candidate_pane

0x1a03,	// (0x00021b16) list_highlight_pane_cp30

0x22df,	// (0x000223f2) list_single_popup_jap_candidate_pane_t1

0x22ee,	// (0x00022401) level_1_signal

0x22fb,	// (0x0002240e) level_2_signal

0x2308,	// (0x0002241b) level_3_signal

0x2315,	// (0x00022428) level_4_signal

0x2322,	// (0x00022435) level_5_signal

0x232f,	// (0x00022442) level_6_signal

0x233c,	// (0x0002244f) level_7_signal

0x22ee,	// (0x00022401) level_1_battery

0x22fb,	// (0x0002240e) level_2_battery

0x2308,	// (0x0002241b) level_3_battery

0x2315,	// (0x00022428) level_4_battery

0x2322,	// (0x00022435) level_5_battery

0x232f,	// (0x00022442) level_6_battery

0x233c,	// (0x0002244f) level_7_battery

0x2361,	// (0x00022474) list_menu_pane_ParamLimits

0x2361,	// (0x00022474) list_menu_pane

0x2377,	// (0x0002248a) scroll_pane_cp25_ParamLimits

0x2377,	// (0x0002248a) scroll_pane_cp25

0x2390,	// (0x000224a3) list_double2_graphic_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double2_graphic_pane_cp2

0x2390,	// (0x000224a3) list_double2_large_graphic_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double2_large_graphic_pane_cp2

0x2390,	// (0x000224a3) list_double2_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double2_pane_cp2

0x2390,	// (0x000224a3) list_double_graphic_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double_graphic_pane_cp2

0x2390,	// (0x000224a3) list_double_large_graphic_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double_large_graphic_pane_cp2

0x2390,	// (0x000224a3) list_double_number_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double_number_pane_cp2

0x2390,	// (0x000224a3) list_double_pane_cp2_ParamLimits

0x2390,	// (0x000224a3) list_double_pane_cp2

0x72f1,	// (0x00027404) list_single_2graphic_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_2graphic_pane_cp2

0x72f1,	// (0x00027404) list_single_graphic_heading_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_graphic_heading_pane_cp2

0x72f1,	// (0x00027404) list_single_graphic_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_graphic_pane_cp2

0x72f1,	// (0x00027404) list_single_heading_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_heading_pane_cp2

0x23a0,	// (0x000224b3) list_single_large_graphic_pane_cp2_ParamLimits

0x23a0,	// (0x000224b3) list_single_large_graphic_pane_cp2

0x72f1,	// (0x00027404) list_single_number_heading_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_number_heading_pane_cp2

0x72f1,	// (0x00027404) list_single_number_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_number_pane_cp2

0x7307,	// (0x0002741a) list_single_pane_cp2_ParamLimits

0x7307,	// (0x0002741a) list_single_pane_cp2

0x23ba,	// (0x000224cd) bg_popup_sub_pane_cp22

0x73df,	// (0x000274f2) popup_side_volume_key_window_g1

0x7403,	// (0x00027516) popup_side_volume_key_window_t1

0x741f,	// (0x00027532) volume_small_pane_cp1

0x1a51,	// (0x00021b64) bg_popup_sub_pane_cp24_ParamLimits

0x1a51,	// (0x00021b64) bg_popup_sub_pane_cp24

0x23d0,	// (0x000224e3) fep_china_uni_candidate_pane_ParamLimits

0x23d0,	// (0x000224e3) fep_china_uni_candidate_pane

0x23e4,	// (0x000224f7) fep_china_uni_entry_pane

0x23f4,	// (0x00022507) popup_fep_china_uni_window_g1

0x7427,	// (0x0002753a) fep_china_uni_entry_pane_g1

0x742f,	// (0x00027542) fep_china_uni_entry_pane_g2

0x0001,

0xf6e7,	// (0x0002f7fa) fep_china_uni_entry_pane_g

0x2410,	// (0x00022523) fep_entry_item_pane

0x241a,	// (0x0002252d) fep_candidate_item_pane

0x7437,	// (0x0002754a) fep_china_uni_candidate_pane_g1

0x2422,	// (0x00022535) fep_china_uni_candidate_pane_g2

0x242a,	// (0x0002253d) fep_china_uni_candidate_pane_g3

0x743f,	// (0x00027552) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ec,	// (0x0002f7ff) fep_china_uni_candidate_pane_g

0x19f9,	// (0x00021b0c) fep_entry_item_pane_g1

0x2432,	// (0x00022545) fep_entry_item_pane_t1_ParamLimits

0x2432,	// (0x00022545) fep_entry_item_pane_t1

0x2448,	// (0x0002255b) fep_candidate_item_pane_t1_ParamLimits

0x2448,	// (0x0002255b) fep_candidate_item_pane_t1

0x245d,	// (0x00022570) fep_candidate_item_pane_t2_ParamLimits

0x245d,	// (0x00022570) fep_candidate_item_pane_t2

0x0001,

0xf6f5,	// (0x0002f808) fep_candidate_item_pane_t_ParamLimits

0xf6f5,	// (0x0002f808) fep_candidate_item_pane_t

0x1a5f,	// (0x00021b72) list_highlight_pane_cp31_ParamLimits

0x1a5f,	// (0x00021b72) list_highlight_pane_cp31

0x246f,	// (0x00022582) level_1_signal_lsc

0x2478,	// (0x0002258b) level_2_signal_lsc

0x2481,	// (0x00022594) level_3_signal_lsc

0x248a,	// (0x0002259d) level_4_signal_lsc

0x2493,	// (0x000225a6) level_5_signal_lsc

0x249c,	// (0x000225af) level_6_signal_lsc

0x24a5,	// (0x000225b8) level_7_signal_lsc

0x24a5,	// (0x000225b8) level_1_battery_lsc

0x24ae,	// (0x000225c1) level_2_battery_lsc

0x24b7,	// (0x000225ca) level_3_battery_lsc

0x24c0,	// (0x000225d3) level_4_battery_lsc

0x24c9,	// (0x000225dc) level_5_battery_lsc

0x24d2,	// (0x000225e5) level_6_battery_lsc

0x246f,	// (0x00022582) level_7_battery_lsc

0x24db,	// (0x000225ee) scroll_handle_focus_pane_g1

0x24e4,	// (0x000225f7) scroll_handle_focus_pane_g2

0x24ed,	// (0x00022600) scroll_handle_focus_pane_g3

0x0002,

0xf6fa,	// (0x0002f80d) scroll_handle_focus_pane_g

0x5b37,	// (0x00025c4a) list_single_2graphic_pane_g1_ParamLimits

0x5b37,	// (0x00025c4a) list_single_2graphic_pane_g1

0x558b,	// (0x0002569e) list_single_2graphic_pane_g2_ParamLimits

0x558b,	// (0x0002569e) list_single_2graphic_pane_g2

0x5511,	// (0x00025624) list_single_2graphic_pane_g3_ParamLimits

0x5511,	// (0x00025624) list_single_2graphic_pane_g3

0x5b43,	// (0x00025c56) list_single_2graphic_pane_g4_ParamLimits

0x5b43,	// (0x00025c56) list_single_2graphic_pane_g4

0x0003,

0xf701,	// (0x0002f814) list_single_2graphic_pane_g_ParamLimits

0xf701,	// (0x0002f814) list_single_2graphic_pane_g

0x5b4f,	// (0x00025c62) list_single_2graphic_pane_t1_ParamLimits

0x5b4f,	// (0x00025c62) list_single_2graphic_pane_t1

0x5b7d,	// (0x00025c90) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b7d,	// (0x00025c90) list_double2_graphic_large_graphic_pane_g1

0x5630,	// (0x00025743) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5630,	// (0x00025743) list_double2_graphic_large_graphic_pane_g2

0x55fc,	// (0x0002570f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x55fc,	// (0x0002570f) list_double2_graphic_large_graphic_pane_g3

0x5b8d,	// (0x00025ca0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b8d,	// (0x00025ca0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70a,	// (0x0002f81d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70a,	// (0x0002f81d) list_double2_graphic_large_graphic_pane_g

0x5b99,	// (0x00025cac) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b99,	// (0x00025cac) list_double2_graphic_large_graphic_pane_t1

0x5baf,	// (0x00025cc2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5baf,	// (0x00025cc2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf713,	// (0x0002f826) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf713,	// (0x0002f826) list_double2_graphic_large_graphic_pane_t

0x7619,	// (0x0002772c) popup_fast_swap_window_ParamLimits

0x7619,	// (0x0002772c) popup_fast_swap_window

0x7635,	// (0x00027748) popup_side_volume_key_window

0x25a3,	// (0x000226b6) stacon_top_pane

0x25ad,	// (0x000226c0) status_pane_ParamLimits

0x25ad,	// (0x000226c0) status_pane

0x19ef,	// (0x00021b02) status_small_pane

0x1a03,	// (0x00021b16) control_pane

0x1a03,	// (0x00021b16) stacon_bottom_pane

0x1e59,	// (0x00021f6c) scroll_pane_cp121

0x1e50,	// (0x00021f63) set_content_pane

0x7447,	// (0x0002755a) bg_active_tab_pane_g1_cp1

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp1

0x7459,	// (0x0002756c) bg_active_tab_pane_g3_cp1

0x7447,	// (0x0002755a) bg_passive_tab_pane_g1_cp1

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp1

0x7459,	// (0x0002756c) bg_passive_tab_pane_g3_cp1

0x7462,	// (0x00027575) bg_active_tab_pane_g1_cp2

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp2

0x746b,	// (0x0002757e) bg_active_tab_pane_g3_cp2

0x7462,	// (0x00027575) bg_passive_tab_pane_g1_cp2

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp2

0x746b,	// (0x0002757e) bg_passive_tab_pane_g3_cp2

0x7474,	// (0x00027587) bg_active_tab_pane_g1_cp3

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp3

0x747d,	// (0x00027590) bg_active_tab_pane_g3_cp3

0x7474,	// (0x00027587) bg_passive_tab_pane_g1_cp3

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp3

0x747d,	// (0x00027590) bg_passive_tab_pane_g3_cp3

0x7486,	// (0x00027599) bg_active_tab_pane_g1_cp4

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp4

0x7491,	// (0x000275a4) bg_active_tab_pane_g3_cp4

0x7486,	// (0x00027599) bg_passive_tab_pane_g1_cp4

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp4

0x7491,	// (0x000275a4) bg_passive_tab_pane_g3_cp4

0x75dd,	// (0x000276f0) bg_active_tab_pane_g1_cp5

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp5

0x75e6,	// (0x000276f9) bg_active_tab_pane_g3_cp5

0x75dd,	// (0x000276f0) bg_passive_tab_pane_g1_cp5

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp5

0x75e6,	// (0x000276f9) bg_passive_tab_pane_g3_cp5

0x75ef,	// (0x00027702) list_set_graphic_pane_ParamLimits

0x75ef,	// (0x00027702) list_set_graphic_pane

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp4

0x2534,	// (0x00022647) list_set_graphic_pane_g1_ParamLimits

0x2534,	// (0x00022647) list_set_graphic_pane_g1

0x2540,	// (0x00022653) list_set_graphic_pane_g2_ParamLimits

0x2540,	// (0x00022653) list_set_graphic_pane_g2

0x0001,

0xf718,	// (0x0002f82b) list_set_graphic_pane_g_ParamLimits

0xf718,	// (0x0002f82b) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x0002fbc3) volume_small_pane_cp_g

0x760d,	// (0x00027720) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x760d,	// (0x00027720) list_double2_large_graphic_pane_g1_cp2

0x2562,	// (0x00022675) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2562,	// (0x00022675) list_double2_large_graphic_pane_g2_cp2

0x2573,	// (0x00022686) list_double2_large_graphic_pane_g3_cp2

0x257b,	// (0x0002268e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x257b,	// (0x0002268e) list_double2_large_graphic_pane_t1_cp2

0x2591,	// (0x000226a4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2591,	// (0x000226a4) list_double2_large_graphic_pane_t2_cp2

0xaae9,	// (0x0002abfc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae9,	// (0x0002abfc) list_double_large_graphic_pane_g1_cp2

0xaafa,	// (0x0002ac0d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaafa,	// (0x0002ac0d) list_double_large_graphic_pane_g2_cp2

0x26bd,	// (0x000227d0) list_double_large_graphic_pane_g3_cp2

0xab0b,	// (0x0002ac1e) list_double_large_graphic_pane_g4_cp

0xab13,	// (0x0002ac26) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab13,	// (0x0002ac26) list_double_large_graphic_pane_t1_cp2

0xab2a,	// (0x0002ac3d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab2a,	// (0x0002ac3d) list_double_large_graphic_pane_t2_cp2

0x25bb,	// (0x000226ce) list_double2_graphic_pane_g1_cp2_ParamLimits

0x25bb,	// (0x000226ce) list_double2_graphic_pane_g1_cp2

0x25c9,	// (0x000226dc) list_double2_graphic_pane_g2_cp2_ParamLimits

0x25c9,	// (0x000226dc) list_double2_graphic_pane_g2_cp2

0x25da,	// (0x000226ed) list_double2_graphic_pane_g3_cp2

0x25e4,	// (0x000226f7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x25e4,	// (0x000226f7) list_double2_graphic_pane_t1_cp2

0x25fa,	// (0x0002270d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x25fa,	// (0x0002270d) list_double2_graphic_pane_t2_cp2

0x1deb,	// (0x00021efe) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1deb,	// (0x00021efe) list_single_number_heading_pane_g1_cp2

0x260c,	// (0x0002271f) list_single_number_heading_pane_g2_cp2

0x2614,	// (0x00022727) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2614,	// (0x00022727) list_single_number_heading_pane_t1_cp2

0x262a,	// (0x0002273d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x262a,	// (0x0002273d) list_single_number_heading_pane_t2_cp2

0x263c,	// (0x0002274f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x263c,	// (0x0002274f) list_single_number_heading_pane_t3_cp2

0x1deb,	// (0x00021efe) list_single_heading_pane_g1_cp2_ParamLimits

0x1deb,	// (0x00021efe) list_single_heading_pane_g1_cp2

0x260c,	// (0x0002271f) list_single_heading_pane_g2_cp2

0x2614,	// (0x00022727) list_single_heading_pane_t1_cp2_ParamLimits

0x2614,	// (0x00022727) list_single_heading_pane_t1_cp2

0xa8f3,	// (0x0002aa06) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f3,	// (0x0002aa06) list_single_heading_pane_t2_cp2

0xa83b,	// (0x0002a94e) list_double_graphic_pane_g1_cp2_ParamLimits

0xa83b,	// (0x0002a94e) list_double_graphic_pane_g1_cp2

0xa847,	// (0x0002a95a) list_double_graphic_pane_g2_cp2_ParamLimits

0xa847,	// (0x0002a95a) list_double_graphic_pane_g2_cp2

0xa856,	// (0x0002a969) list_double_graphic_pane_g3_cp2

0xa85e,	// (0x0002a971) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85e,	// (0x0002a971) list_double_graphic_pane_t1_cp2

0xa874,	// (0x0002a987) list_double_graphic_pane_t2_cp2_ParamLimits

0xa874,	// (0x0002a987) list_double_graphic_pane_t2_cp2

0x26b1,	// (0x000227c4) list_double_number_pane_g1_cp2_ParamLimits

0x26b1,	// (0x000227c4) list_double_number_pane_g1_cp2

0x26bd,	// (0x000227d0) list_double_number_pane_g2_cp2

0xa7ff,	// (0x0002a912) list_double_number_pane_t1_cp2_ParamLimits

0xa7ff,	// (0x0002a912) list_double_number_pane_t1_cp2

0xa813,	// (0x0002a926) list_double_number_pane_t2_cp2_ParamLimits

0xa813,	// (0x0002a926) list_double_number_pane_t2_cp2

0xa829,	// (0x0002a93c) list_double_number_pane_t3_cp2_ParamLimits

0xa829,	// (0x0002a93c) list_double_number_pane_t3_cp2

0xa6e8,	// (0x0002a7fb) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e8,	// (0x0002a7fb) list_single_graphic_pane_g1_cp2

0x1ddf,	// (0x00021ef2) list_single_graphic_pane_g2_cp2_ParamLimits

0x1ddf,	// (0x00021ef2) list_single_graphic_pane_g2_cp2

0x271a,	// (0x0002282d) list_single_graphic_pane_g3_cp2

0xa6be,	// (0x0002a7d1) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6be,	// (0x0002a7d1) list_single_graphic_pane_t1_cp2

0x1ddf,	// (0x00021ef2) list_single_number_pane_g1_cp2_ParamLimits

0x1ddf,	// (0x00021ef2) list_single_number_pane_g1_cp2

0x271a,	// (0x0002282d) list_single_number_pane_g2_cp2

0xa6be,	// (0x0002a7d1) list_single_number_pane_t1_cp2_ParamLimits

0xa6be,	// (0x0002a7d1) list_single_number_pane_t1_cp2

0xa6d4,	// (0x0002a7e7) list_single_number_pane_t2_cp2_ParamLimits

0xa6d4,	// (0x0002a7e7) list_single_number_pane_t2_cp2

0x2562,	// (0x00022675) list_double2_pane_g1_cp2_ParamLimits

0x2562,	// (0x00022675) list_double2_pane_g1_cp2

0x2573,	// (0x00022686) list_double2_pane_g2_cp2

0x2689,	// (0x0002279c) list_double2_pane_t1_cp2_ParamLimits

0x2689,	// (0x0002279c) list_double2_pane_t1_cp2

0x269f,	// (0x000227b2) list_double2_pane_t2_cp2_ParamLimits

0x269f,	// (0x000227b2) list_double2_pane_t2_cp2

0x26b1,	// (0x000227c4) list_double_pane_g1_cp2_ParamLimits

0x26b1,	// (0x000227c4) list_double_pane_g1_cp2

0x26bd,	// (0x000227d0) list_double_pane_g2_cp2

0x26c5,	// (0x000227d8) list_double_pane_t1_cp2_ParamLimits

0x26c5,	// (0x000227d8) list_double_pane_t1_cp2

0x26db,	// (0x000227ee) list_double_pane_t2_cp2_ParamLimits

0x26db,	// (0x000227ee) list_double_pane_t2_cp2

0x764f,	// (0x00027762) list_single_pane_cp2_g3

0x1ddf,	// (0x00021ef2) list_single_pane_g1_cp2_ParamLimits

0x1ddf,	// (0x00021ef2) list_single_pane_g1_cp2

0x271a,	// (0x0002282d) list_single_pane_g2_cp2

0x2722,	// (0x00022835) list_single_pane_t1_cp2_ParamLimits

0x2722,	// (0x00022835) list_single_pane_t1_cp2

0x7657,	// (0x0002776a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7657,	// (0x0002776a) list_single_large_graphic_pane_g1_cp2

0x273a,	// (0x0002284d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x273a,	// (0x0002284d) list_single_large_graphic_pane_g2_cp2

0x2746,	// (0x00022859) list_single_large_graphic_pane_g3_cp2

0x7663,	// (0x00027776) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7663,	// (0x00027776) list_single_large_graphic_pane_g4_cp1

0x274e,	// (0x00022861) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x274e,	// (0x00022861) list_single_large_graphic_pane_t1_cp2

0xa68a,	// (0x0002a79d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa68a,	// (0x0002a79d) list_single_graphic_heading_pane_g1_cp2

0xa657,	// (0x0002a76a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa657,	// (0x0002a76a) list_single_graphic_heading_pane_g4_cp2

0x271a,	// (0x0002282d) list_single_graphic_heading_pane_g5_cp2

0xa696,	// (0x0002a7a9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa696,	// (0x0002a7a9) list_single_graphic_heading_pane_t1_cp2

0xa6ac,	// (0x0002a7bf) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ac,	// (0x0002a7bf) list_single_graphic_heading_pane_t2_cp2

0xa64b,	// (0x0002a75e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa64b,	// (0x0002a75e) list_single_2graphic_pane_g1_cp2

0xa657,	// (0x0002a76a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa657,	// (0x0002a76a) list_single_2graphic_pane_g2_cp2

0x271a,	// (0x0002282d) list_single_2graphic_pane_g3_cp2

0xa668,	// (0x0002a77b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa668,	// (0x0002a77b) list_single_2graphic_pane_g4_cp2

0xa674,	// (0x0002a787) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa674,	// (0x0002a787) list_single_2graphic_pane_t1_cp2

0x19f9,	// (0x00021b0c) list_highlight_pane_g10_cp1

0xa233,	// (0x0002a346) list_highlight_pane_g1_cp1

0xa23b,	// (0x0002a34e) list_highlight_pane_g2_cp1

0xa243,	// (0x0002a356) list_highlight_pane_g3_cp1

0xa24b,	// (0x0002a35e) list_highlight_pane_g4_cp1

0xa253,	// (0x0002a366) list_highlight_pane_g5_cp1

0xa25b,	// (0x0002a36e) list_highlight_pane_g6_cp1

0xa263,	// (0x0002a376) list_highlight_pane_g7_cp1

0xa26b,	// (0x0002a37e) list_highlight_pane_g8_cp1

0xa273,	// (0x0002a386) list_highlight_pane_g9_cp1

0x8d59,	// (0x00028e6c) form_field_slider_pane_t3

0x8d67,	// (0x00028e7a) form_field_slider_pane_t4

0x8d75,	// (0x00028e88) slider_form_pane_ParamLimits

0x8d75,	// (0x00028e88) slider_form_pane

0x1a03,	// (0x00021b16) control_abbreviations

0x1a03,	// (0x00021b16) control_conventions

0x1a03,	// (0x00021b16) control_definitions

0x1a03,	// (0x00021b16) format_table_attribute

0xa93d,	// (0x0002aa50) bg_popup_preview_window_pane_g9

0x1a03,	// (0x00021b16) format_table_data2

0x1a03,	// (0x00021b16) format_table_data3

0x1a03,	// (0x00021b16) format_table_data_example

0x0008,

0x1a03,	// (0x00021b16) intro_purpose

0xf8af,	// (0x0002f9c2) bg_popup_preview_window_pane_g

0x1a03,	// (0x00021b16) texts_category

0x1a03,	// (0x00021b16) texts_graphics

0x2764,	// (0x00022877) text_digital

0x2773,	// (0x00022886) text_primary

0x2782,	// (0x00022895) text_primary_small

0x2791,	// (0x000228a4) text_secondary

0x27a0,	// (0x000228b3) text_title

0xb060,	// (0x0002b173) bg_passive_tab_pane_g1_cp3_srt

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp3_srt

0xb069,	// (0x0002b17c) bg_passive_tab_pane_g3_cp3_srt

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp3_srt_ParamLimits

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp3_srt

0xb072,	// (0x0002b185) tabs_4_active_pane_srt_g1

0xb07a,	// (0x0002b18d) tabs_4_active_pane_srt_t1_ParamLimits

0xb07a,	// (0x0002b18d) tabs_4_active_pane_srt_t1

0xb060,	// (0x0002b173) bg_active_tab_pane_g1_cp3_copy1

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp3_copy1

0xb069,	// (0x0002b17c) bg_active_tab_pane_g3_cp3_copy1

0x1a5f,	// (0x00021b72) tabs_2_long_active_pane_srt_ParamLimits

0x1a5f,	// (0x00021b72) tabs_2_long_active_pane_srt

0x1a5f,	// (0x00021b72) tabs_2_long_passive_pane_srt_ParamLimits

0x1a5f,	// (0x00021b72) tabs_2_long_passive_pane_srt

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp4_srt

0xad4e,	// (0x0002ae61) bg_passive_tab_pane_g1_cp4_srt

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp4_srt

0xad57,	// (0x0002ae6a) bg_passive_tab_pane_g3_cp4_srt

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp4_srt_ParamLimits

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp4_srt

0xad60,	// (0x0002ae73) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad60,	// (0x0002ae73) tabs_2_long_active_pane_srt_t1

0xad4e,	// (0x0002ae61) bg_active_tab_pane_g1_cp4_srt

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp4_srt

0xad57,	// (0x0002ae6a) bg_active_tab_pane_g3_cp4_srt

0x1a51,	// (0x00021b64) tabs_3_long_active_pane_srt_ParamLimits

0x1a51,	// (0x00021b64) tabs_3_long_active_pane_srt

0x1a51,	// (0x00021b64) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1a51,	// (0x00021b64) tabs_3_long_passive_pane_cp_srt

0x1a51,	// (0x00021b64) tabs_3_long_passive_pane_srt_ParamLimits

0x1a51,	// (0x00021b64) tabs_3_long_passive_pane_srt

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp5_srt

0x75dd,	// (0x000276f0) bg_passive_tab_pane_g1_cp5_srt

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp5_srt

0x75e6,	// (0x000276f9) bg_passive_tab_pane_g3_cp5_srt

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp5_srt_ParamLimits

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp5_srt

0xad3c,	// (0x0002ae4f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad3c,	// (0x0002ae4f) tabs_3_long_active_pane_srt_t1

0x75dd,	// (0x000276f0) bg_active_tab_pane_g1_cp5_srt

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp5_srt

0x75e6,	// (0x000276f9) bg_active_tab_pane_g3_cp5_srt

0xad2e,	// (0x0002ae41) navi_text_pane_srt_t1

0xad26,	// (0x0002ae39) navi_icon_pane_srt_g1

0x288b,	// (0x0002299e) midp_editing_number_pane_srt

0x27af,	// (0x000228c2) midp_ticker_pane_srt

0x2893,	// (0x000229a6) midp_ticker_pane_srt_g1

0x289b,	// (0x000229ae) midp_ticker_pane_srt_g2

0x0001,

0xf737,	// (0x0002f84a) midp_ticker_pane_srt_g

0x28a3,	// (0x000229b6) midp_ticker_pane_srt_t1

0xad17,	// (0x0002ae2a) midp_editing_number_pane_t1_copy1

0x767d,	// (0x00027790) listscroll_midp_pane

0x767d,	// (0x00027790) midp_form_pane

0x76ef,	// (0x00027802) midp_info_popup_window_ParamLimits

0x76ef,	// (0x00027802) midp_info_popup_window

0x1fe4,	// (0x000220f7) bg_popup_sub_pane_cp50_ParamLimits

0x1fe4,	// (0x000220f7) bg_popup_sub_pane_cp50

0x8a65,	// (0x00028b78) listscroll_midp_info_pane_ParamLimits

0x8a65,	// (0x00028b78) listscroll_midp_info_pane

0x8a45,	// (0x00028b58) listscroll_form_midp_pane_ParamLimits

0x8a45,	// (0x00028b58) listscroll_form_midp_pane

0x8a51,	// (0x00028b64) scroll_bar_cp050

0x8a25,	// (0x00028b38) list_midp_pane

0xbad2,	// (0x0002bbe5) signal_pane_g2_cp

0x895f,	// (0x00028a72) listscroll_midp_info_pane_t1_ParamLimits

0x895f,	// (0x00028a72) listscroll_midp_info_pane_t1

0x8977,	// (0x00028a8a) listscroll_midp_info_pane_t2_ParamLimits

0x8977,	// (0x00028a8a) listscroll_midp_info_pane_t2

0x89b5,	// (0x00028ac8) listscroll_midp_info_pane_t3_ParamLimits

0x89b5,	// (0x00028ac8) listscroll_midp_info_pane_t3

0x89ef,	// (0x00028b02) listscroll_midp_info_pane_t4_ParamLimits

0x89ef,	// (0x00028b02) listscroll_midp_info_pane_t4

0x0003,

0xf7ea,	// (0x0002f8fd) listscroll_midp_info_pane_t_ParamLimits

0xf7ea,	// (0x0002f8fd) listscroll_midp_info_pane_t

0x2039,	// (0x0002214c) scroll_pane_cp21

0x88ff,	// (0x00028a12) form_midp_field_choice_group_pane

0x8908,	// (0x00028a1b) form_midp_field_text_pane

0x8945,	// (0x00028a58) form_midp_field_time_pane

0x894d,	// (0x00028a60) form_midp_gauge_slider_pane

0x8956,	// (0x00028a69) form_midp_gauge_wait_pane

0x1a03,	// (0x00021b16) form_midp_image_pane

0x5d1a,	// (0x00025e2d) list_single_midp_pane_ParamLimits

0x5d1a,	// (0x00025e2d) list_single_midp_pane

0x88b4,	// (0x000289c7) form_midp_field_text_pane_t1

0x85f6,	// (0x00028709) input_focus_pane_cp050

0x88ee,	// (0x00028a01) list_midp_form_text_pane

0x8883,	// (0x00028996) form_midp_field_choice_group_pane_t1

0x8891,	// (0x000289a4) input_focus_pane_cp051

0x88a5,	// (0x000289b8) list_midp_choice_pane

0x1a03,	// (0x00021b16) status_idle_pane

0x8867,	// (0x0002897a) form_midp_field_time_pane_t1

0x19f9,	// (0x00021b0c) wait_anim_pane_g2_copy1

0x8875,	// (0x00028988) form_midp_field_time_pane_t2

0x0001,

0x280f,	// (0x00022922) aid_navinavi_width_2_pane

0xf7e5,	// (0x0002f8f8) form_midp_field_time_pane_t

0x1a03,	// (0x00021b16) input_focus_pane_cp052

0x1a03,	// (0x00021b16) bg_input_focus_pane_cp040

0x8827,	// (0x0002893a) form_midp_gauge_slider_pane_t1

0x8835,	// (0x00028948) form_midp_gauge_slider_pane_t2

0x8843,	// (0x00028956) form_midp_gauge_slider_pane_t3

0x8851,	// (0x00028964) form_midp_gauge_slider_pane_t4

0x0003,

0xf7dc,	// (0x0002f8ef) form_midp_gauge_slider_pane_t

0x885f,	// (0x00028972) form_midp_slider_pane

0x1a5f,	// (0x00021b72) bg_input_focus_pane_cp041_ParamLimits

0x1a5f,	// (0x00021b72) bg_input_focus_pane_cp041

0x87f4,	// (0x00028907) form_midp_gauge_wait_pane_t1_ParamLimits

0x87f4,	// (0x00028907) form_midp_gauge_wait_pane_t1

0x8806,	// (0x00028919) form_midp_gauge_wait_pane_t2_ParamLimits

0x8806,	// (0x00028919) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d7,	// (0x0002f8ea) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d7,	// (0x0002f8ea) form_midp_gauge_wait_pane_t

0x8818,	// (0x0002892b) form_midp_wait_pane_ParamLimits

0x8818,	// (0x0002892b) form_midp_wait_pane

0x87be,	// (0x000288d1) form_midp_image_pane_g1

0x87c7,	// (0x000288da) form_midp_image_pane_t1

0x87d6,	// (0x000288e9) form_midp_image_pane_t2

0x87e5,	// (0x000288f8) form_midp_image_pane_t3

0x0002,

0xf7d0,	// (0x0002f8e3) form_midp_image_pane_t

0x87b5,	// (0x000288c8) list_single_midp_pane_g1

0x5d0b,	// (0x00025e1e) list_single_midp_pane_t1

0x878c,	// (0x0002889f) list_midp_form_item_pane_ParamLimits

0x878c,	// (0x0002889f) list_midp_form_item_pane

0x27b7,	// (0x000228ca) list_midp_form_item_pane_t1

0x27c6,	// (0x000228d9) midp_ticker_pane_g1

0x27d2,	// (0x000228e5) midp_ticker_pane_g2

0x0001,

0xf71d,	// (0x0002f830) midp_ticker_pane_g

0x27de,	// (0x000228f1) midp_ticker_pane_t1

0xaf64,	// (0x0002b077) midp_editing_number_pane_t1

0xaf42,	// (0x0002b055) midp_editing_number_pane

0xaf51,	// (0x0002b064) midp_ticker_pane

0x8a71,	// (0x00028b84) ai_message_heading_pane

0x1a03,	// (0x00021b16) bg_popup_window_pane_cp14

0x8a79,	// (0x00028b8c) listscroll_ai_message_pane

0xaca1,	// (0x0002adb4) ai_message_heading_pane_g1_ParamLimits

0xaca1,	// (0x0002adb4) ai_message_heading_pane_g1

0xacad,	// (0x0002adc0) ai_message_heading_pane_g2_ParamLimits

0xacad,	// (0x0002adc0) ai_message_heading_pane_g2

0xacb9,	// (0x0002adcc) ai_message_heading_pane_g3_ParamLimits

0xacb9,	// (0x0002adcc) ai_message_heading_pane_g3

0xacc5,	// (0x0002add8) ai_message_heading_pane_g4_ParamLimits

0xacc5,	// (0x0002add8) ai_message_heading_pane_g4

0x0003,

0xf911,	// (0x0002fa24) ai_message_heading_pane_g_ParamLimits

0xf911,	// (0x0002fa24) ai_message_heading_pane_g

0xacd1,	// (0x0002ade4) ai_message_heading_pane_t1_ParamLimits

0xacd1,	// (0x0002ade4) ai_message_heading_pane_t1

0xaceb,	// (0x0002adfe) ai_message_heading_pane_t2_ParamLimits

0xaceb,	// (0x0002adfe) ai_message_heading_pane_t2

0x0001,

0xf91a,	// (0x0002fa2d) ai_message_heading_pane_t_ParamLimits

0xf91a,	// (0x0002fa2d) ai_message_heading_pane_t

0xacfd,	// (0x0002ae10) bg_popup_heading_pane_cp1_ParamLimits

0xacfd,	// (0x0002ae10) bg_popup_heading_pane_cp1

0xac8f,	// (0x0002ada2) list_ai_message_pane_ParamLimits

0xac8f,	// (0x0002ada2) list_ai_message_pane

0x2039,	// (0x0002214c) scroll_pane_cp10

0xac2b,	// (0x0002ad3e) list_ai_message_pane_g1

0xac33,	// (0x0002ad46) list_ai_message_pane_g2

0x0001,

0xf8ee,	// (0x0002fa01) list_ai_message_pane_g

0xac3b,	// (0x0002ad4e) list_ai_message_pane_t1_ParamLimits

0xac3b,	// (0x0002ad4e) list_ai_message_pane_t1

0xac50,	// (0x0002ad63) list_ai_message_pane_t2_ParamLimits

0xac50,	// (0x0002ad63) list_ai_message_pane_t2

0xac65,	// (0x0002ad78) list_ai_message_pane_t3_ParamLimits

0xac65,	// (0x0002ad78) list_ai_message_pane_t3

0xac7a,	// (0x0002ad8d) list_ai_message_pane_t4_ParamLimits

0xac7a,	// (0x0002ad8d) list_ai_message_pane_t4

0x0003,

0xf8f3,	// (0x0002fa06) list_ai_message_pane_t_ParamLimits

0xf8f3,	// (0x0002fa06) list_ai_message_pane_t

0xac16,	// (0x0002ad29) cell_ai_soft_ind_pane_ParamLimits

0xac16,	// (0x0002ad29) cell_ai_soft_ind_pane

0x27f0,	// (0x00022903) cell_ai_soft_ind_pane_g1_ParamLimits

0x27f0,	// (0x00022903) cell_ai_soft_ind_pane_g1

0x1a03,	// (0x00021b16) grid_highlight_cp1

0x27fd,	// (0x00022910) text_secondary_cp56_ParamLimits

0x27fd,	// (0x00022910) text_secondary_cp56

0xabeb,	// (0x0002acfe) example_general_pane_ParamLimits

0xabeb,	// (0x0002acfe) example_general_pane

0xabf7,	// (0x0002ad0a) example_parent_pane_g1_ParamLimits

0xabf7,	// (0x0002ad0a) example_parent_pane_g1

0xac03,	// (0x0002ad16) example_parent_pane_t1_ParamLimits

0xac03,	// (0x0002ad16) example_parent_pane_t1

0x7da7,	// (0x00027eba) popup_preview_text_window_ParamLimits

0x7da7,	// (0x00027eba) popup_preview_text_window

0x2712,	// (0x00022825) list_single_pane_cp2_g4

0x1c4b,	// (0x00021d5e) bg_popup_preview_window_pane_ParamLimits

0x1c4b,	// (0x00021d5e) bg_popup_preview_window_pane

0xa945,	// (0x0002aa58) popup_preview_text_window_t1_ParamLimits

0xa945,	// (0x0002aa58) popup_preview_text_window_t1

0xa963,	// (0x0002aa76) popup_preview_text_window_t2_ParamLimits

0xa963,	// (0x0002aa76) popup_preview_text_window_t2

0xa9ac,	// (0x0002aabf) popup_preview_text_window_t3_ParamLimits

0xa9ac,	// (0x0002aabf) popup_preview_text_window_t3

0xa9f1,	// (0x0002ab04) popup_preview_text_window_t4_ParamLimits

0xa9f1,	// (0x0002ab04) popup_preview_text_window_t4

0x0004,

0xf8c2,	// (0x0002f9d5) popup_preview_text_window_t_ParamLimits

0xf8c2,	// (0x0002f9d5) popup_preview_text_window_t

0xaa6f,	// (0x0002ab82) scroll_pane_cp11

0x84f2,	// (0x00028605) bg_popup_preview_window_pane_g1

0xa905,	// (0x0002aa18) bg_popup_preview_window_pane_g2

0xa90d,	// (0x0002aa20) bg_popup_preview_window_pane_g3

0xa915,	// (0x0002aa28) bg_popup_preview_window_pane_g4

0xa91d,	// (0x0002aa30) bg_popup_preview_window_pane_g5

0xa925,	// (0x0002aa38) bg_popup_preview_window_pane_g6

0xa92d,	// (0x0002aa40) bg_popup_preview_window_pane_g7

0xa935,	// (0x0002aa48) bg_popup_preview_window_pane_g8

0x6520,	// (0x00026633) aid_popup_width_pane

0x7d85,	// (0x00027e98) popup_midp_note_alarm_window_ParamLimits

0x7d85,	// (0x00027e98) popup_midp_note_alarm_window

0x1e8d,	// (0x00021fa0) data_form_pane_ParamLimits

0x598a,	// (0x00025a9d) form_field_data_pane_g1

0x5994,	// (0x00025aa7) form_field_data_pane_t1_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_ParamLimits

0x59ac,	// (0x00025abf) data_form_wide_pane_ParamLimits

0x59bd,	// (0x00025ad0) form_field_data_wide_pane_g1

0x59c9,	// (0x00025adc) form_field_data_wide_pane_t1_ParamLimits

0x1d23,	// (0x00021e36) input_focus_pane_cp6_ParamLimits

0x6f25,	// (0x00027038) input_popup_find_pane_g1_ParamLimits

0x6f25,	// (0x00027038) input_popup_find_pane_g1

0x70c5,	// (0x000271d8) aid_navi_side_left_pane

0x70da,	// (0x000271ed) aid_navi_side_right_pane

0xa32e,	// (0x0002a441) bg_popup_window_pane_cp30_ParamLimits

0xa32e,	// (0x0002a441) bg_popup_window_pane_cp30

0xa3a8,	// (0x0002a4bb) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a8,	// (0x0002a4bb) popup_midp_note_alarm_window_g1

0xa3d8,	// (0x0002a4eb) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d8,	// (0x0002a4eb) popup_midp_note_alarm_window_t1

0xa479,	// (0x0002a58c) popup_midp_note_alarm_window_t2_ParamLimits

0xa479,	// (0x0002a58c) popup_midp_note_alarm_window_t2

0xa527,	// (0x0002a63a) popup_midp_note_alarm_window_t3_ParamLimits

0xa527,	// (0x0002a63a) popup_midp_note_alarm_window_t3

0xa54f,	// (0x0002a662) popup_midp_note_alarm_window_t4_ParamLimits

0xa54f,	// (0x0002a662) popup_midp_note_alarm_window_t4

0xa56f,	// (0x0002a682) popup_midp_note_alarm_window_t5_ParamLimits

0xa56f,	// (0x0002a682) popup_midp_note_alarm_window_t5

0x000a,

0xf85f,	// (0x0002f972) popup_midp_note_alarm_window_t_ParamLimits

0xf85f,	// (0x0002f972) popup_midp_note_alarm_window_t

0xa61b,	// (0x0002a72e) wait_bar_pane_cp1_ParamLimits

0xa61b,	// (0x0002a72e) wait_bar_pane_cp1

0x1a03,	// (0x00021b16) wait_anim_pane_copy1

0x1a03,	// (0x00021b16) wait_border_pane_copy1

0x8c22,	// (0x00028d35) wait_border_pane_g1_copy1

0x59e3,	// (0x00025af6) form_field_popup_pane_g1

0x59eb,	// (0x00025afe) form_field_popup_pane_t1_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_cp7_ParamLimits

0x1f06,	// (0x00022019) list_form_pane_ParamLimits

0x5a03,	// (0x00025b16) form_field_popup_wide_pane_g1

0x5a0b,	// (0x00025b1e) form_field_popup_wide_pane_t1_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_cp8_ParamLimits

0x1f2f,	// (0x00022042) list_form_wide_pane_ParamLimits

0xb104,	// (0x0002b217) aid_size_cell_graphic_pane

0x5a95,	// (0x00025ba8) data_form_pane_t1_ParamLimits

0x5d5f,	// (0x00025e72) data_form_wide_pane_t1_ParamLimits

0x808c,	// (0x0002819f) bg_status_flat_pane

0x6925,	// (0x00026a38) title_pane_t1_ParamLimits

0x1a19,	// (0x00021b2c) title_pane_t2_ParamLimits

0x1a3f,	// (0x00021b52) title_pane_t3_ParamLimits

0xf530,	// (0x0002f643) title_pane_t_ParamLimits

0x22ee,	// (0x00022401) level_1_signal_ParamLimits

0x22fb,	// (0x0002240e) level_2_signal_ParamLimits

0x2308,	// (0x0002241b) level_3_signal_ParamLimits

0x2315,	// (0x00022428) level_4_signal_ParamLimits

0x2322,	// (0x00022435) level_5_signal_ParamLimits

0x232f,	// (0x00022442) level_6_signal_ParamLimits

0x233c,	// (0x0002244f) level_7_signal_ParamLimits

0x22ee,	// (0x00022401) level_1_battery_ParamLimits

0x22fb,	// (0x0002240e) level_2_battery_ParamLimits

0x2308,	// (0x0002241b) level_3_battery_ParamLimits

0x2315,	// (0x00022428) level_4_battery_ParamLimits

0x2322,	// (0x00022435) level_5_battery_ParamLimits

0x232f,	// (0x00022442) level_6_battery_ParamLimits

0x233c,	// (0x0002244f) level_7_battery_ParamLimits

0xa233,	// (0x0002a346) bg_status_flat_pane_g1

0xa23b,	// (0x0002a34e) bg_status_flat_pane_g2

0xa243,	// (0x0002a356) bg_status_flat_pane_g3

0xa24b,	// (0x0002a35e) bg_status_flat_pane_g4

0xa253,	// (0x0002a366) bg_status_flat_pane_g5

0xa25b,	// (0x0002a36e) bg_status_flat_pane_g6

0xa263,	// (0x0002a376) bg_status_flat_pane_g7

0x6995,	// (0x00026aa8) tabs_3_active_pane_t1_ParamLimits

0x6995,	// (0x00026aa8) tabs_3_passive_pane_t1_ParamLimits

0x69af,	// (0x00026ac2) tabs_4_active_pane_t1_ParamLimits

0x69af,	// (0x00026ac2) tabs_4_1_passive_pane_t1_ParamLimits

0x6f5c,	// (0x0002706f) tabs_2_active_pane_t1_ParamLimits

0x6f5c,	// (0x0002706f) tabs_2_passive_pane_t1_ParamLimits

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp4_ParamLimits

0x6f7c,	// (0x0002708f) tabs_2_long_active_pane_t1_ParamLimits

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp4_ParamLimits

0x8587,	// (0x0002869a) list_single_midp_graphic_pane_t1_ParamLimits

0x6f6e,	// (0x00027081) bg_active_tab_pane_cp5_ParamLimits

0x6f9b,	// (0x000270ae) tabs_3_long_active_pane_t1_ParamLimits

0x6f8f,	// (0x000270a2) bg_passive_tab_pane_cp5_ParamLimits

0x8587,	// (0x0002869a) list_single_midp_graphic_pane_t1

0x808c,	// (0x0002819f) bg_status_flat_pane_ParamLimits

0x8155,	// (0x00028268) indicator_pane_cp2_ParamLimits

0x8155,	// (0x00028268) indicator_pane_cp2

0x8280,	// (0x00028393) navi_pane_srt_ParamLimits

0x8280,	// (0x00028393) navi_pane_srt

0x82a4,	// (0x000283b7) popup_clock_digital_analogue_window_cp1

0x1abd,	// (0x00021bd0) indicator_pane_t1

0x27af,	// (0x000228c2) copy_highlight_pane

0x27af,	// (0x000228c2) cursor_graphics_pane

0x27af,	// (0x000228c2) graphic_within_text_pane

0x27af,	// (0x000228c2) link_highlight_pane

0xaa32,	// (0x0002ab45) popup_preview_text_window_t5_ParamLimits

0xaa32,	// (0x0002ab45) popup_preview_text_window_t5

0x2817,	// (0x0002292a) cursor_digital_pane

0x2817,	// (0x0002292a) cursor_primary_pane

0x2828,	// (0x0002293b) cursor_primary_small_pane

0x2830,	// (0x00022943) cursor_secondary_pane

0x2838,	// (0x0002294b) cursor_title_pane

0x2817,	// (0x0002292a) link_highlight_digital_pane

0x281f,	// (0x00022932) link_highlight_primary_pane

0x2828,	// (0x0002293b) link_highlight_primary_small_pane

0x2830,	// (0x00022943) link_highlight_secondary_pane

0x2838,	// (0x0002294b) link_highlight_title_pane

0x2817,	// (0x0002292a) copy_highlight_digital_pane

0x2817,	// (0x0002292a) copy_highlight_primary_pane

0x2828,	// (0x0002293b) copy_highlight_primary_small_pane

0x2830,	// (0x00022943) copy_highlight_secondary_pane

0x2838,	// (0x0002294b) copy_highlight_title_pane

0x2830,	// (0x00022943) graphic_text_digital_pane

0xa2d1,	// (0x0002a3e4) graphic_text_primary_pane

0xa2da,	// (0x0002a3ed) graphic_text_primary_small_pane

0x2828,	// (0x0002293b) graphic_text_secondary_pane

0x2817,	// (0x0002292a) graphic_text_title_pane

0x7747,	// (0x0002785a) cursor_primary_pane_g1

0xa2c3,	// (0x0002a3d6) cursor_text_primary_t1

0xa2ab,	// (0x0002a3be) cursor_primary_small_pane_g1

0xa2b5,	// (0x0002a3c8) cursor_text_primary_small_t1

0xa293,	// (0x0002a3a6) cursor_primary_small_pane_g1_copy1

0xa29d,	// (0x0002a3b0) cursor_text_primary_small_t1_copy1

0xa27b,	// (0x0002a38e) cursor_text_title_t1

0xa289,	// (0x0002a39c) cursor_title_pane_g1

0x7747,	// (0x0002785a) cursor_digital_pane_g1

0x2840,	// (0x00022953) cursor_text_digital_t1

0x284e,	// (0x00022961) link_highlight_primary_pane_g1

0x8e22,	// (0x00028f35) link_highlight_primary_pane_t1

0x284e,	// (0x00022961) link_highlight_primary_small_pane_g1

0x2856,	// (0x00022969) link_highlight_primary_small_pane_t1

0x284e,	// (0x00022961) link_highlight_secondary_pane_g1

0x2865,	// (0x00022978) link_highlight_secondary_pane_t1

0x8d87,	// (0x00028e9a) link_highlight_title_pane_g1

0x8d9e,	// (0x00028eb1) link_highlight_title_pane_t1

0x8d87,	// (0x00028e9a) link_highlight_digital_pane_g1

0x8d8f,	// (0x00028ea2) link_highlight_digital_pane_t1

0x8c41,	// (0x00028d54) copy_highlight_primary_pane_g1

0x8c67,	// (0x00028d7a) copy_highlight_primary_pane_t1

0x8c41,	// (0x00028d54) copy_highlight_primary_small_pane_g1

0x8c58,	// (0x00028d6b) copy_highlight_primary_small_pane_t1

0x2874,	// (0x00022987) copy_highlight_secondary_pane_g1

0x287c,	// (0x0002298f) copy_highlight_secondary_pane_t1

0x8c41,	// (0x00028d54) copy_highlight_title_pane_g1

0x8c49,	// (0x00028d5c) copy_highlight_title_pane_t1

0x8c41,	// (0x00028d54) copy_highlight_digital_pane_g1

0xb2d2,	// (0x0002b3e5) copy_highlight_digital_pane_t1

0xb226,	// (0x0002b339) graphic_text_primary_pane_g1

0xb2b6,	// (0x0002b3c9) graphic_text_primary_pane_t1

0xb2c4,	// (0x0002b3d7) graphic_text_primary_pane_t2

0x0001,

0xf98e,	// (0x0002faa1) graphic_text_primary_pane_t

0xb292,	// (0x0002b3a5) graphic_text_primary_small_pane_g1

0xb29a,	// (0x0002b3ad) graphic_text_primary_small_pane_t1

0xb2a8,	// (0x0002b3bb) graphic_text_primary_small_pane_t2

0x0001,

0xf989,	// (0x0002fa9c) graphic_text_primary_small_pane_t

0xb26e,	// (0x0002b381) graphic_text_secondary_pane_g1

0xb276,	// (0x0002b389) graphic_text_secondary_pane_t1

0xb284,	// (0x0002b397) graphic_text_secondary_pane_t2

0x0001,

0xf984,	// (0x0002fa97) graphic_text_secondary_pane_t

0xb24a,	// (0x0002b35d) graphic_text_title_pane_g1

0xb252,	// (0x0002b365) graphic_text_title_pane_t1

0xb260,	// (0x0002b373) graphic_text_title_pane_t2

0x0001,

0xf97f,	// (0x0002fa92) graphic_text_title_pane_t

0xb226,	// (0x0002b339) graphic_text_digital_pane_g1

0xb22e,	// (0x0002b341) graphic_text_digital_pane_t1

0xb23c,	// (0x0002b34f) graphic_text_digital_pane_t2

0x0001,

0xf97a,	// (0x0002fa8d) graphic_text_digital_pane_t

0x1a5f,	// (0x00021b72) navi_icon_pane_srt_ParamLimits

0x1a5f,	// (0x00021b72) navi_icon_pane_srt

0x1a03,	// (0x00021b16) navi_midp_pane_srt

0x1a03,	// (0x00021b16) navi_navi_pane_srt

0x1a5f,	// (0x00021b72) navi_text_pane_srt_ParamLimits

0x1a5f,	// (0x00021b72) navi_text_pane_srt

0xb1f1,	// (0x0002b304) navi_navi_icon_text_pane_srt

0xb1f9,	// (0x0002b30c) navi_navi_pane_srt_g1_ParamLimits

0xb1f9,	// (0x0002b30c) navi_navi_pane_srt_g1

0xb20b,	// (0x0002b31e) navi_navi_pane_srt_g2_ParamLimits

0xb20b,	// (0x0002b31e) navi_navi_pane_srt_g2

0x0001,

0xf975,	// (0x0002fa88) navi_navi_pane_srt_g_ParamLimits

0xf975,	// (0x0002fa88) navi_navi_pane_srt_g

0xb21d,	// (0x0002b330) navi_navi_tabs_pane_srt

0xb1f1,	// (0x0002b304) navi_navi_text_pane_srt

0xb1f1,	// (0x0002b304) navi_navi_volume_pane_srt

0xb1e2,	// (0x0002b2f5) navi_navi_text_pane_srt_t1

0x90fe,	// (0x00029211) navi_navi_volume_pane_srt_g1

0x9106,	// (0x00029219) volume_small_pane_srt_ParamLimits

0x9106,	// (0x00029219) volume_small_pane_srt

0x7751,	// (0x00027864) volume_small_pane_srt_g1_ParamLimits

0x7751,	// (0x00027864) volume_small_pane_srt_g1

0x7761,	// (0x00027874) volume_small_pane_srt_g2_ParamLimits

0x7761,	// (0x00027874) volume_small_pane_srt_g2

0x7772,	// (0x00027885) volume_small_pane_srt_g3_ParamLimits

0x7772,	// (0x00027885) volume_small_pane_srt_g3

0x7783,	// (0x00027896) volume_small_pane_srt_g4_ParamLimits

0x7783,	// (0x00027896) volume_small_pane_srt_g4

0x7794,	// (0x000278a7) volume_small_pane_srt_g5_ParamLimits

0x7794,	// (0x000278a7) volume_small_pane_srt_g5

0x77a5,	// (0x000278b8) volume_small_pane_srt_g6_ParamLimits

0x77a5,	// (0x000278b8) volume_small_pane_srt_g6

0x77b6,	// (0x000278c9) volume_small_pane_srt_g7_ParamLimits

0x77b6,	// (0x000278c9) volume_small_pane_srt_g7

0x77c7,	// (0x000278da) volume_small_pane_srt_g8_ParamLimits

0x77c7,	// (0x000278da) volume_small_pane_srt_g8

0x77d8,	// (0x000278eb) volume_small_pane_srt_g9_ParamLimits

0x77d8,	// (0x000278eb) volume_small_pane_srt_g9

0x77e9,	// (0x000278fc) volume_small_pane_srt_g10_ParamLimits

0x77e9,	// (0x000278fc) volume_small_pane_srt_g10

0x0009,

0xf722,	// (0x0002f835) volume_small_pane_srt_g_ParamLimits

0xf722,	// (0x0002f835) volume_small_pane_srt_g

0x6bfc,	// (0x00026d0f) query_popup_data_pane_cp2

0xb1c8,	// (0x0002b2db) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c8,	// (0x0002b2db) navi_navi_icon_text_pane_srt_t1

0xa2d1,	// (0x0002a3e4) navi_tabs_2_long_pane_srt

0xa2d1,	// (0x0002a3e4) navi_tabs_2_pane_srt

0xa2d1,	// (0x0002a3e4) navi_tabs_3_long_pane_srt

0xa2d1,	// (0x0002a3e4) navi_tabs_3_pane_srt

0xa2d1,	// (0x0002a3e4) navi_tabs_4_pane_srt

0x90de,	// (0x000291f1) tabs_2_active_pane_srt_ParamLimits

0x90de,	// (0x000291f1) tabs_2_active_pane_srt

0x90ee,	// (0x00029201) tabs_2_passive_pane_srt_ParamLimits

0x90ee,	// (0x00029201) tabs_2_passive_pane_srt

0x2049,	// (0x0002215c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2049,	// (0x0002215c) bg_passive_tab_pane_cp1_srt

0xb194,	// (0x0002b2a7) bg_passive_tab_pane_g1_cp1_srt

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp1_srt

0xb19d,	// (0x0002b2b0) bg_passive_tab_pane_g3_cp1_srt

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp1_srt_ParamLimits

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp1_srt

0xb1a6,	// (0x0002b2b9) tabs_2_active_pane_srt_g1

0xb1ae,	// (0x0002b2c1) tabs_2_active_pane_srt_t1_ParamLimits

0xb1ae,	// (0x0002b2c1) tabs_2_active_pane_srt_t1

0xb194,	// (0x0002b2a7) bg_active_tab_pane_g1_cp1_srt

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp1_srt

0xb19d,	// (0x0002b2b0) bg_active_tab_pane_g3_cp1_srt

0x90ab,	// (0x000291be) tabs_3_active_pane_srt_ParamLimits

0x90ab,	// (0x000291be) tabs_3_active_pane_srt

0x90bc,	// (0x000291cf) tabs_3_passive_pane_cp_srt_ParamLimits

0x90bc,	// (0x000291cf) tabs_3_passive_pane_cp_srt

0x90cd,	// (0x000291e0) tabs_3_passive_pane_srt_ParamLimits

0x90cd,	// (0x000291e0) tabs_3_passive_pane_srt

0x2049,	// (0x0002215c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2049,	// (0x0002215c) bg_passive_tab_pane_cp2_srt

0x77fa,	// (0x0002790d) bg_passive_tab_pane_g1_cp2_srt

0x7450,	// (0x00027563) bg_passive_tab_pane_g2_cp2_srt

0x7803,	// (0x00027916) bg_passive_tab_pane_g3_cp2_srt

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp2_srt_ParamLimits

0x1a5f,	// (0x00021b72) bg_active_tab_pane_cp2_srt

0xb17a,	// (0x0002b28d) tabs_3_active_pane_srt_g1

0xb182,	// (0x0002b295) tabs_3_active_pane_srt_t1_ParamLimits

0xb182,	// (0x0002b295) tabs_3_active_pane_srt_t1

0x77fa,	// (0x0002790d) bg_active_tab_pane_g1_cp2_srt

0x7450,	// (0x00027563) bg_active_tab_pane_g2_cp2_srt

0x7803,	// (0x00027916) bg_active_tab_pane_g3_cp2_srt

0x9063,	// (0x00029176) tabs_4_active_pane_srt_ParamLimits

0x9063,	// (0x00029176) tabs_4_active_pane_srt

0x9075,	// (0x00029188) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9075,	// (0x00029188) tabs_4_passive_pane_cp2_srt

0x7a1c,	// (0x00027b2f) aid_size_cell_toolbar

0x6f8f,	// (0x000270a2) main_idle_act_pane_ParamLimits

0x7bb7,	// (0x00027cca) popup_large_graphic_colour_window_ParamLimits

0x7f22,	// (0x00028035) popup_toolbar_window_ParamLimits

0x7f22,	// (0x00028035) popup_toolbar_window

0xaf73,	// (0x0002b086) list_single_graphic_2heading_pane_ParamLimits

0xaf73,	// (0x0002b086) list_single_graphic_2heading_pane

0x21d6,	// (0x000222e9) aid_size_cell_apps_grid_lsc_pane

0x21e8,	// (0x000222fb) aid_size_cell_apps_grid_prt_pane

0x2049,	// (0x0002215c) bg_wml_button_pane_cp1_ParamLimits

0x2049,	// (0x0002215c) bg_wml_button_pane_cp1

0x88b4,	// (0x000289c7) form_midp_field_text_pane_t1_ParamLimits

0x85f6,	// (0x00028709) input_focus_pane_cp050_ParamLimits

0x88ee,	// (0x00028a01) list_midp_form_text_pane_ParamLimits

0x8891,	// (0x000289a4) input_focus_pane_cp051_ParamLimits

0x88a5,	// (0x000289b8) list_midp_choice_pane_ParamLimits

0x8734,	// (0x00028847) list_single_2graphic_pane_cp3_ParamLimits

0x8734,	// (0x00028847) list_single_2graphic_pane_cp3

0x8759,	// (0x0002886c) list_single_midp_graphic_pane_ParamLimits

0x8759,	// (0x0002886c) list_single_midp_graphic_pane

0x5bed,	// (0x00025d00) list_single_graphic_2heading_pane_g1_ParamLimits

0x5bed,	// (0x00025d00) list_single_graphic_2heading_pane_g1

0x5505,	// (0x00025618) list_single_graphic_2heading_pane_g4_ParamLimits

0x5505,	// (0x00025618) list_single_graphic_2heading_pane_g4

0x5511,	// (0x00025624) list_single_graphic_2heading_pane_g5_ParamLimits

0x5511,	// (0x00025624) list_single_graphic_2heading_pane_g5

0x0002,

0xf775,	// (0x0002f888) list_single_graphic_2heading_pane_g_ParamLimits

0xf775,	// (0x0002f888) list_single_graphic_2heading_pane_g

0x5bf9,	// (0x00025d0c) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bf9,	// (0x00025d0c) list_single_graphic_2heading_pane_t1

0x5c0d,	// (0x00025d20) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c0d,	// (0x00025d20) list_single_graphic_2heading_pane_t2

0x5c27,	// (0x00025d3a) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c27,	// (0x00025d3a) list_single_graphic_2heading_pane_t3

0x0002,

0xf77c,	// (0x0002f88f) list_single_graphic_2heading_pane_t_ParamLimits

0xf77c,	// (0x0002f88f) list_single_graphic_2heading_pane_t

0x8400,	// (0x00028513) bg_popup_sub_pane_cp2

0x842a,	// (0x0002853d) grid_toobar_pane

0x8466,	// (0x00028579) cell_toolbar_pane_ParamLimits

0x8466,	// (0x00028579) cell_toolbar_pane

0x8496,	// (0x000285a9) cell_toolbar_pane_g1_ParamLimits

0x8496,	// (0x000285a9) cell_toolbar_pane_g1

0x84aa,	// (0x000285bd) cell_toolbar_pane_g2_ParamLimits

0x84aa,	// (0x000285bd) cell_toolbar_pane_g2

0x0001,

0xf78a,	// (0x0002f89d) cell_toolbar_pane_g_ParamLimits

0xf78a,	// (0x0002f89d) cell_toolbar_pane_g

0x84cc,	// (0x000285df) grid_highlight_pane_cp2_ParamLimits

0x84cc,	// (0x000285df) grid_highlight_pane_cp2

0x84e6,	// (0x000285f9) toolbar_button_pane

0x84f2,	// (0x00028605) toolbar_button_pane_g1

0x84fa,	// (0x0002860d) toolbar_button_pane_g2

0x8502,	// (0x00028615) toolbar_button_pane_g3

0x850a,	// (0x0002861d) toolbar_button_pane_g4

0x8512,	// (0x00028625) toolbar_button_pane_g5

0x851a,	// (0x0002862d) toolbar_button_pane_g6

0x8522,	// (0x00028635) toolbar_button_pane_g7

0x852a,	// (0x0002863d) toolbar_button_pane_g8

0x8532,	// (0x00028645) toolbar_button_pane_g9

0x0009,

0xf78f,	// (0x0002f8a2) toolbar_button_pane_g

0x8542,	// (0x00028655) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8542,	// (0x00028655) list_single_2graphic_pane_g1_cp3

0x854e,	// (0x00028661) list_single_2graphic_pane_g2_cp3_ParamLimits

0x854e,	// (0x00028661) list_single_2graphic_pane_g2_cp3

0x260c,	// (0x0002271f) list_single_2graphic_pane_g3_cp3

0x855f,	// (0x00028672) list_single_2graphic_pane_g4_cp3_ParamLimits

0x855f,	// (0x00028672) list_single_2graphic_pane_g4_cp3

0x856b,	// (0x0002867e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x856b,	// (0x0002867e) list_single_2graphic_pane_t1_cp3

0x1deb,	// (0x00021efe) list_single_midp_graphic_pane_g2_ParamLimits

0x1deb,	// (0x00021efe) list_single_midp_graphic_pane_g2

0x7a24,	// (0x00027b37) aid_zoom_text_primary

0x5bc1,	// (0x00025cd4) aid_zoom_text_secondary

0x28f1,	// (0x00022a04) status_small_pane_g7_ParamLimits

0x28f1,	// (0x00022a04) status_small_pane_g7

0x785d,	// (0x00027970) status_small_pane_t1_ParamLimits

0x6908,	// (0x00026a1b) title_pane_g2

0x0003,

0xf527,	// (0x0002f63a) title_pane_g

0x6c56,	// (0x00026d69) aid_size_cell_colour_1_pane_ParamLimits

0x6c56,	// (0x00026d69) aid_size_cell_colour_1_pane

0x6c6a,	// (0x00026d7d) aid_size_cell_colour_2_pane_ParamLimits

0x6c6a,	// (0x00026d7d) aid_size_cell_colour_2_pane

0x6c7e,	// (0x00026d91) aid_size_cell_colour_3_pane_ParamLimits

0x6c7e,	// (0x00026d91) aid_size_cell_colour_3_pane

0x6c92,	// (0x00026da5) aid_size_cell_colour_4_pane_ParamLimits

0x6c92,	// (0x00026da5) aid_size_cell_colour_4_pane

0x7002,	// (0x00027115) title_pane_stacon_g1_ParamLimits

0x7002,	// (0x00027115) title_pane_stacon_g1

0x8cbe,	// (0x00028dd1) popup_note_wait_window_g3_ParamLimits

0x8cbe,	// (0x00028dd1) popup_note_wait_window_g3

0x8d34,	// (0x00028e47) popup_note_wait_window_t5_ParamLimits

0x8d34,	// (0x00028e47) popup_note_wait_window_t5

0x1a03,	// (0x00021b16) main_feb_china_hwr_fs_writing_pane

0x7a9e,	// (0x00027bb1) popup_feb_china_hwr_fs_window_ParamLimits

0x7a9e,	// (0x00027bb1) popup_feb_china_hwr_fs_window

0x85e1,	// (0x000286f4) aid_size_cell_hwr_fs_ParamLimits

0x85e1,	// (0x000286f4) aid_size_cell_hwr_fs

0x85f6,	// (0x00028709) bg_popup_sub_pane_cp3_ParamLimits

0x85f6,	// (0x00028709) bg_popup_sub_pane_cp3

0x8602,	// (0x00028715) grid_hwr_fs_pane_ParamLimits

0x8602,	// (0x00028715) grid_hwr_fs_pane

0x861a,	// (0x0002872d) linegrid_hwr_fs_pane_ParamLimits

0x861a,	// (0x0002872d) linegrid_hwr_fs_pane

0x862a,	// (0x0002873d) cell_hwr_fs_pane_ParamLimits

0x862a,	// (0x0002873d) cell_hwr_fs_pane

0x864c,	// (0x0002875f) linegrid_hwr_fs_pane_g1_ParamLimits

0x864c,	// (0x0002875f) linegrid_hwr_fs_pane_g1

0x8658,	// (0x0002876b) linegrid_hwr_fs_pane_g2_ParamLimits

0x8658,	// (0x0002876b) linegrid_hwr_fs_pane_g2

0x866a,	// (0x0002877d) linegrid_hwr_fs_pane_g3_ParamLimits

0x866a,	// (0x0002877d) linegrid_hwr_fs_pane_g3

0x8676,	// (0x00028789) linegrid_hwr_fs_pane_g4_ParamLimits

0x8676,	// (0x00028789) linegrid_hwr_fs_pane_g4

0x8690,	// (0x000287a3) linegrid_hwr_fs_pane_g5_ParamLimits

0x8690,	// (0x000287a3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b5,	// (0x0002f8c8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b5,	// (0x0002f8c8) linegrid_hwr_fs_pane_g

0x86a6,	// (0x000287b9) cell_hwr_fs_pane_g1_ParamLimits

0x86a6,	// (0x000287b9) cell_hwr_fs_pane_g1

0x833a,	// (0x0002844d) cell_hwr_fs_pane_g2_ParamLimits

0x833a,	// (0x0002844d) cell_hwr_fs_pane_g2

0x86bc,	// (0x000287cf) cell_hwr_fs_pane_g3_ParamLimits

0x86bc,	// (0x000287cf) cell_hwr_fs_pane_g3

0x86c9,	// (0x000287dc) cell_hwr_fs_pane_g4_ParamLimits

0x86c9,	// (0x000287dc) cell_hwr_fs_pane_g4

0x0003,

0xf7c0,	// (0x0002f8d3) cell_hwr_fs_pane_g_ParamLimits

0xf7c0,	// (0x0002f8d3) cell_hwr_fs_pane_g

0x86d6,	// (0x000287e9) cell_hwr_fs_pane_t1

0x1a03,	// (0x00021b16) grid_highlight_pane_cp6

0x1a03,	// (0x00021b16) main_idle_act2_pane

0x2020,	// (0x00022133) aid_inside_area_popup_secondary

0xa755,	// (0x0002a868) aid_inside_area_window_primary_ParamLimits

0xa755,	// (0x0002a868) aid_inside_area_window_primary

0xb2e1,	// (0x0002b3f4) ai2_news_ticker_pane

0xb2e9,	// (0x0002b3fc) aid_size_cell_ai1_link_ParamLimits

0xb2e9,	// (0x0002b3fc) aid_size_cell_ai1_link

0xb303,	// (0x0002b416) popup_ai2_data_window_ParamLimits

0xb303,	// (0x0002b416) popup_ai2_data_window

0xb319,	// (0x0002b42c) popup_ai2_link_window_ParamLimits

0xb319,	// (0x0002b42c) popup_ai2_link_window

0x85f6,	// (0x00028709) bg_popup_sub_pane_cp4_ParamLimits

0x85f6,	// (0x00028709) bg_popup_sub_pane_cp4

0xb32d,	// (0x0002b440) grid_ai2_link_pane_ParamLimits

0xb32d,	// (0x0002b440) grid_ai2_link_pane

0xb344,	// (0x0002b457) popup_ai2_link_window_g1_ParamLimits

0xb344,	// (0x0002b457) popup_ai2_link_window_g1

0xb350,	// (0x0002b463) popup_ai2_link_window_g2_ParamLimits

0xb350,	// (0x0002b463) popup_ai2_link_window_g2

0x0001,

0xf993,	// (0x0002faa6) popup_ai2_link_window_g_ParamLimits

0xf993,	// (0x0002faa6) popup_ai2_link_window_g

0xb35f,	// (0x0002b472) ai2_mp_button_pane

0xb367,	// (0x0002b47a) ai2_mp_volume_pane

0x8891,	// (0x000289a4) bg_popup_sub_pane_cp5_ParamLimits

0x8891,	// (0x000289a4) bg_popup_sub_pane_cp5

0xb36f,	// (0x0002b482) heading_ai2_gene_pane_ParamLimits

0xb36f,	// (0x0002b482) heading_ai2_gene_pane

0xb37b,	// (0x0002b48e) list_ai2_gene_pane_ParamLimits

0xb37b,	// (0x0002b48e) list_ai2_gene_pane

0xb3c3,	// (0x0002b4d6) cell_ai2_link_pane_ParamLimits

0xb3c3,	// (0x0002b4d6) cell_ai2_link_pane

0xb3d9,	// (0x0002b4ec) cell_ai2_link_pane_g1

0x1a03,	// (0x00021b16) grid_highlight_pane_cp7

0x911b,	// (0x0002922e) ai2_mp_volume_pane_g1

0xb4a9,	// (0x0002b5bc) ai2_mp_volume_pane_g2

0xb41e,	// (0x0002b531) list_ai2_gene_pane_t1

0xb4b1,	// (0x0002b5c4) ai2_mp_volume_pane_g3

0x0002,

0xf9ac,	// (0x0002fabf) ai2_mp_volume_pane_g

0x9123,	// (0x00029236) volume_small_pane_cp3

0xb4b9,	// (0x0002b5cc) aid_size_cell_ai2_button

0xb4c1,	// (0x0002b5d4) grid_ai2_button_pane

0xb4ca,	// (0x0002b5dd) cell_ai2_button_pane_ParamLimits

0xb4ca,	// (0x0002b5dd) cell_ai2_button_pane

0x19f9,	// (0x00021b0c) cell_ai2_button_pane_g1

0x1a03,	// (0x00021b16) grid_highlight_pane_cp8

0xb469,	// (0x0002b57c) ai2_gene_pane_t1_ParamLimits

0xb469,	// (0x0002b57c) ai2_gene_pane_t1

0x7a12,	// (0x00027b25) aid_height_parent_landscape

0xadae,	// (0x0002aec1) aid_height_set_list

0xadbf,	// (0x0002aed2) aid_size_parent

0xb104,	// (0x0002b217) aid_size_cell_graphic_pane_ParamLimits

0xb38b,	// (0x0002b49e) popup_ai2_data_window_g1_ParamLimits

0xb38b,	// (0x0002b49e) popup_ai2_data_window_g1

0xb397,	// (0x0002b4aa) ai2_news_ticker_pane_g1

0xb39f,	// (0x0002b4b2) ai2_news_ticker_pane_g2

0x0001,

0xf998,	// (0x0002faab) ai2_news_ticker_pane_g

0xb3a7,	// (0x0002b4ba) ai2_news_ticker_pane_t1

0xb3b5,	// (0x0002b4c8) ai2_news_ticker_pane_t2

0x0001,

0xf99d,	// (0x0002fab0) ai2_news_ticker_pane_t

0xb3e2,	// (0x0002b4f5) heading_ai2_gene_pane_g1

0xb3ea,	// (0x0002b4fd) heading_ai2_gene_pane_t1_ParamLimits

0xb3ea,	// (0x0002b4fd) heading_ai2_gene_pane_t1

0xb3ff,	// (0x0002b512) list_highlight_pane_cp6

0xb407,	// (0x0002b51a) ai2_gene_pane_ParamLimits

0xb407,	// (0x0002b51a) ai2_gene_pane

0xb42c,	// (0x0002b53f) list_ai2_gene_pane_t2

0x0001,

0xf9a2,	// (0x0002fab5) list_ai2_gene_pane_t

0xb43a,	// (0x0002b54d) list_highlight_pane_cp8_ParamLimits

0xb43a,	// (0x0002b54d) list_highlight_pane_cp8

0xb44b,	// (0x0002b55e) ai2_gene_pane_g1_ParamLimits

0xb44b,	// (0x0002b55e) ai2_gene_pane_g1

0xb45d,	// (0x0002b570) ai2_gene_pane_g2_ParamLimits

0xb45d,	// (0x0002b570) ai2_gene_pane_g2

0x0001,

0xf9a7,	// (0x0002faba) ai2_gene_pane_g_ParamLimits

0xf9a7,	// (0x0002faba) ai2_gene_pane_g

0x1dce,	// (0x00021ee1) scroll_pane_cp12

0x79cf,	// (0x00027ae2) control_pane_t3_ParamLimits

0x79cf,	// (0x00027ae2) control_pane_t3

0x784e,	// (0x00027961) status_small_pane_g8_ParamLimits

0x784e,	// (0x00027961) status_small_pane_g8

0x7b80,	// (0x00027c93) popup_find_window_ParamLimits

0x7d99,	// (0x00027eac) popup_note_image_window_ParamLimits

0x5c3f,	// (0x00025d52) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c3f,	// (0x00025d52) list_double2_graphic_pane_vc_g1

0x5c4b,	// (0x00025d5e) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c4b,	// (0x00025d5e) list_double2_graphic_pane_vc_g2

0x5c57,	// (0x00025d6a) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c57,	// (0x00025d6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf783,	// (0x0002f896) list_double2_graphic_pane_vc_g_ParamLimits

0xf783,	// (0x0002f896) list_double2_graphic_pane_vc_g

0x5c63,	// (0x00025d76) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c63,	// (0x00025d76) list_double2_graphic_pane_vc_t1

0x5505,	// (0x00025618) list_single_heading_pane_vc_g1_ParamLimits

0x5505,	// (0x00025618) list_single_heading_pane_vc_g1

0x5511,	// (0x00025624) list_single_heading_pane_vc_g2_ParamLimits

0x5511,	// (0x00025624) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_single_heading_pane_vc_g

0x5c79,	// (0x00025d8c) list_single_heading_pane_vc_t1_ParamLimits

0x5c79,	// (0x00025d8c) list_single_heading_pane_vc_t1

0x5c8f,	// (0x00025da2) list_single_heading_pane_vc_t2_ParamLimits

0x5c8f,	// (0x00025da2) list_single_heading_pane_vc_t2

0x0001,

0xf7a4,	// (0x0002f8b7) list_single_heading_pane_vc_t_ParamLimits

0xf7a4,	// (0x0002f8b7) list_single_heading_pane_vc_t

0x859d,	// (0x000286b0) list_setting_number_pane_vc_g1_ParamLimits

0x859d,	// (0x000286b0) list_setting_number_pane_vc_g1

0x85a9,	// (0x000286bc) list_setting_number_pane_vc_g2_ParamLimits

0x85a9,	// (0x000286bc) list_setting_number_pane_vc_g2

0x0001,

0xf7a9,	// (0x0002f8bc) list_setting_number_pane_vc_g_ParamLimits

0xf7a9,	// (0x0002f8bc) list_setting_number_pane_vc_g

0x5ca1,	// (0x00025db4) list_setting_number_pane_vc_t1_ParamLimits

0x5ca1,	// (0x00025db4) list_setting_number_pane_vc_t1

0x5cb5,	// (0x00025dc8) list_setting_number_pane_vc_t2_ParamLimits

0x5cb5,	// (0x00025dc8) list_setting_number_pane_vc_t2

0x5cd1,	// (0x00025de4) list_setting_number_pane_vc_t3_ParamLimits

0x5cd1,	// (0x00025de4) list_setting_number_pane_vc_t3

0x0002,

0xf7ae,	// (0x0002f8c1) list_setting_number_pane_vc_t_ParamLimits

0xf7ae,	// (0x0002f8c1) list_setting_number_pane_vc_t

0x5cfb,	// (0x00025e0e) set_value_pane_vc_ParamLimits

0x5cfb,	// (0x00025e0e) set_value_pane_vc

0xaf73,	// (0x0002b086) list_double2_graphic_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double2_graphic_pane_vc

0xaf73,	// (0x0002b086) list_double2_large_graphic_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double2_large_graphic_pane_vc

0xaf73,	// (0x0002b086) list_double2_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double2_pane_vc

0xaf73,	// (0x0002b086) list_double_graphic_heading_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double_graphic_heading_pane_vc

0xaf73,	// (0x0002b086) list_double_graphic_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double_graphic_pane_vc

0xaf73,	// (0x0002b086) list_double_heading_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double_heading_pane_vc

0x5daa,	// (0x00025ebd) list_double_large_graphic_pane_vc_ParamLimits

0x5daa,	// (0x00025ebd) list_double_large_graphic_pane_vc

0xaf73,	// (0x0002b086) list_double_number_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double_number_pane_vc

0xaf73,	// (0x0002b086) list_double_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double_pane_vc

0xaf73,	// (0x0002b086) list_double_time_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_double_time_pane_vc

0xaf73,	// (0x0002b086) list_setting_number_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_setting_number_pane_vc

0xaf73,	// (0x0002b086) list_setting_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_setting_pane_vc

0xaf73,	// (0x0002b086) list_single_graphic_heading_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_single_graphic_heading_pane_vc

0xaf73,	// (0x0002b086) list_single_heading_pane_vc_ParamLimits

0xaf73,	// (0x0002b086) list_single_heading_pane_vc

0x5dc9,	// (0x00025edc) list_single_number_heading_pane_vc_ParamLimits

0x5dc9,	// (0x00025edc) list_single_number_heading_pane_vc

0x5e31,	// (0x00025f44) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e31,	// (0x00025f44) list_double_graphic_heading_pane_vc_g1

0x5c4b,	// (0x00025d5e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5c4b,	// (0x00025d5e) list_double_graphic_heading_pane_vc_g2

0x5c57,	// (0x00025d6a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5c57,	// (0x00025d6a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b3,	// (0x0002fac6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b3,	// (0x0002fac6) list_double_graphic_heading_pane_vc_g

0x5e3d,	// (0x00025f50) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5e3d,	// (0x00025f50) list_double_graphic_heading_pane_vc_t1

0x5e51,	// (0x00025f64) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5e51,	// (0x00025f64) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ba,	// (0x0002facd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ba,	// (0x0002facd) list_double_graphic_heading_pane_vc_t

0x859d,	// (0x000286b0) list_setting_pane_vc_g1_ParamLimits

0x859d,	// (0x000286b0) list_setting_pane_vc_g1

0x85a9,	// (0x000286bc) list_setting_pane_vc_g2_ParamLimits

0x85a9,	// (0x000286bc) list_setting_pane_vc_g2

0x0001,

0xf7a9,	// (0x0002f8bc) list_setting_pane_vc_g_ParamLimits

0xf7a9,	// (0x0002f8bc) list_setting_pane_vc_g

0x5e69,	// (0x00025f7c) list_setting_pane_vc_t1_ParamLimits

0x5e69,	// (0x00025f7c) list_setting_pane_vc_t1

0x5e85,	// (0x00025f98) list_setting_pane_vc_t2_ParamLimits

0x5e85,	// (0x00025f98) list_setting_pane_vc_t2

0x0001,

0xf9fd,	// (0x0002fb10) list_setting_pane_vc_t_ParamLimits

0xf9fd,	// (0x0002fb10) list_setting_pane_vc_t

0x5cfb,	// (0x00025e0e) set_value_pane_cp_vc_ParamLimits

0x5cfb,	// (0x00025e0e) set_value_pane_cp_vc

0x5505,	// (0x00025618) list_single_number_heading_pane_vc_g1_ParamLimits

0x5505,	// (0x00025618) list_single_number_heading_pane_vc_g1

0x5511,	// (0x00025624) list_single_number_heading_pane_vc_g2_ParamLimits

0x5511,	// (0x00025624) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_single_number_heading_pane_vc_g

0x5533,	// (0x00025646) list_single_number_heading_pane_vc_t1_ParamLimits

0x5533,	// (0x00025646) list_single_number_heading_pane_vc_t1

0x5e9f,	// (0x00025fb2) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e9f,	// (0x00025fb2) list_single_number_heading_pane_vc_t2

0x5eb5,	// (0x00025fc8) list_single_number_heading_pane_vc_t3_ParamLimits

0x5eb5,	// (0x00025fc8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa02,	// (0x0002fb15) list_single_number_heading_pane_vc_t_ParamLimits

0xfa02,	// (0x0002fb15) list_single_number_heading_pane_vc_t

0x5ec7,	// (0x00025fda) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5ec7,	// (0x00025fda) list_single_graphic_heading_pane_vc_g1

0x5505,	// (0x00025618) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5505,	// (0x00025618) list_single_graphic_heading_pane_vc_g4

0x5511,	// (0x00025624) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5511,	// (0x00025624) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa09,	// (0x0002fb1c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0002fb1c) list_single_graphic_heading_pane_vc_g

0x5533,	// (0x00025646) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5533,	// (0x00025646) list_single_graphic_heading_pane_vc_t1

0x555b,	// (0x0002566e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x555b,	// (0x0002566e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0002fb23) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0002fb23) list_single_graphic_heading_pane_vc_t

0x5505,	// (0x00025618) list_double2_pane_vc_g1_ParamLimits

0x5505,	// (0x00025618) list_double2_pane_vc_g1

0x5511,	// (0x00025624) list_double2_pane_vc_g2_ParamLimits

0x5511,	// (0x00025624) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_double2_pane_vc_g

0x5ed3,	// (0x00025fe6) list_double2_pane_vc_t1_ParamLimits

0x5ed3,	// (0x00025fe6) list_double2_pane_vc_t1

0x5eeb,	// (0x00025ffe) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5eeb,	// (0x00025ffe) list_double2_large_graphic_pane_vc_g1

0x5505,	// (0x00025618) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5505,	// (0x00025618) list_double2_large_graphic_pane_vc_g2

0x5511,	// (0x00025624) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5511,	// (0x00025624) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa15,	// (0x0002fb28) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0002fb28) list_double2_large_graphic_pane_vc_g

0x5c63,	// (0x00025d76) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c63,	// (0x00025d76) list_double2_large_graphic_pane_vc_t1

0x5ef7,	// (0x0002600a) list_double_time_pane_vc_g1_ParamLimits

0x5ef7,	// (0x0002600a) list_double_time_pane_vc_g1

0x5f03,	// (0x00026016) list_double_time_pane_vc_g2_ParamLimits

0x5f03,	// (0x00026016) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x0002fb2f) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x0002fb2f) list_double_time_pane_vc_g

0x5f0f,	// (0x00026022) list_double_time_pane_vc_t1_ParamLimits

0x5f0f,	// (0x00026022) list_double_time_pane_vc_t1

0x5f33,	// (0x00026046) list_double_time_pane_vc_t2_ParamLimits

0x5f33,	// (0x00026046) list_double_time_pane_vc_t2

0x5f82,	// (0x00026095) list_double_time_pane_vc_t3_ParamLimits

0x5f82,	// (0x00026095) list_double_time_pane_vc_t3

0x5f94,	// (0x000260a7) list_double_time_pane_vc_t4_ParamLimits

0x5f94,	// (0x000260a7) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x0002fb34) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x0002fb34) list_double_time_pane_vc_t

0x5505,	// (0x00025618) list_double_pane_vc_g1_ParamLimits

0x5505,	// (0x00025618) list_double_pane_vc_g1

0x5511,	// (0x00025624) list_double_pane_vc_g2_ParamLimits

0x5511,	// (0x00025624) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_double_pane_vc_g

0x5fa8,	// (0x000260bb) list_double_pane_vc_t1_ParamLimits

0x5fa8,	// (0x000260bb) list_double_pane_vc_t1

0x5fbc,	// (0x000260cf) list_double_pane_vc_t2_ParamLimits

0x5fbc,	// (0x000260cf) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x0002fb3d) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x0002fb3d) list_double_pane_vc_t

0x5505,	// (0x00025618) list_double_number_pane_vc_g1_ParamLimits

0x5505,	// (0x00025618) list_double_number_pane_vc_g1

0x5511,	// (0x00025624) list_double_number_pane_vc_g2_ParamLimits

0x5511,	// (0x00025624) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x0002f6b4) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x0002f6b4) list_double_number_pane_vc_g

0x5fd4,	// (0x000260e7) list_double_number_pane_vc_t1_ParamLimits

0x5fd4,	// (0x000260e7) list_double_number_pane_vc_t1

0x5fa8,	// (0x000260bb) list_double_number_pane_vc_t2_ParamLimits

0x5fa8,	// (0x000260bb) list_double_number_pane_vc_t2

0x5fe6,	// (0x000260f9) list_double_number_pane_vc_t3_ParamLimits

0x5fe6,	// (0x000260f9) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x0002fb42) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x0002fb42) list_double_number_pane_vc_t

0x5ffe,	// (0x00026111) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ffe,	// (0x00026111) list_double_large_graphic_pane_vc_g1

0x601a,	// (0x0002612d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x601a,	// (0x0002612d) list_double_large_graphic_pane_vc_g2

0x602e,	// (0x00026141) list_double_large_graphic_pane_vc_g3_ParamLimits

0x602e,	// (0x00026141) list_double_large_graphic_pane_vc_g3

0x603d,	// (0x00026150) list_double_large_graphic_pane_vc_g4_ParamLimits

0x603d,	// (0x00026150) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x0002fb49) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0002fb49) list_double_large_graphic_pane_vc_g

0x6049,	// (0x0002615c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6049,	// (0x0002615c) list_double_large_graphic_pane_vc_t1

0x6065,	// (0x00026178) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6065,	// (0x00026178) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x0002fb52) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x0002fb52) list_double_large_graphic_pane_vc_t

0x5c4b,	// (0x00025d5e) list_double_heading_pane_vc_g1_ParamLimits

0x5c4b,	// (0x00025d5e) list_double_heading_pane_vc_g1

0x5c57,	// (0x00025d6a) list_double_heading_pane_vc_g2_ParamLimits

0x5c57,	// (0x00025d6a) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x0002fb57) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x0002fb57) list_double_heading_pane_vc_g

0x6087,	// (0x0002619a) list_double_heading_pane_vc_t1_ParamLimits

0x6087,	// (0x0002619a) list_double_heading_pane_vc_t1

0x609b,	// (0x000261ae) list_double_heading_pane_vc_t2_ParamLimits

0x609b,	// (0x000261ae) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0002fb5c) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002fb5c) list_double_heading_pane_vc_t

0x60b3,	// (0x000261c6) list_double_graphic_pane_vc_g1_ParamLimits

0x60b3,	// (0x000261c6) list_double_graphic_pane_vc_g1

0x60c6,	// (0x000261d9) list_double_graphic_pane_vc_g2_ParamLimits

0x60c6,	// (0x000261d9) list_double_graphic_pane_vc_g2

0x5505,	// (0x00025618) list_double_graphic_pane_vc_g3_ParamLimits

0x5505,	// (0x00025618) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x0002fb61) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002fb61) list_double_graphic_pane_vc_g

0x60e3,	// (0x000261f6) list_double_graphic_pane_vc_t1_ParamLimits

0x60e3,	// (0x000261f6) list_double_graphic_pane_vc_t1

0x6102,	// (0x00026215) list_double_graphic_pane_vc_t2_ParamLimits

0x6102,	// (0x00026215) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x0002fb6a) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x0002fb6a) list_double_graphic_pane_vc_t

0x652c,	// (0x0002663f) aid_size_cell_fastswap

0x6534,	// (0x00026647) aid_size_cell_touch_ParamLimits

0x6534,	// (0x00026647) aid_size_cell_touch

0x6795,	// (0x000268a8) popup_fast_swap_wide_window_ParamLimits

0x6795,	// (0x000268a8) popup_fast_swap_wide_window

0x689b,	// (0x000269ae) touch_pane_ParamLimits

0x689b,	// (0x000269ae) touch_pane

0x1e62,	// (0x00021f75) button_value_adjust_pane_cp2

0x58e0,	// (0x000259f3) button_value_adjust_pane_cp4

0x5900,	// (0x00025a13) form_field_data_pane_cp2

0x591f,	// (0x00025a32) form_field_data_wide_pane_cp2

0x220d,	// (0x00022320) bg_scroll_pane_ParamLimits

0x71fc,	// (0x0002730f) scroll_handle_pane_ParamLimits

0x7210,	// (0x00027323) scroll_sc2_down_pane_ParamLimits

0x7210,	// (0x00027323) scroll_sc2_down_pane

0x223e,	// (0x00022351) scroll_sc2_up_pane_ParamLimits

0x223e,	// (0x00022351) scroll_sc2_up_pane

0xbbab,	// (0x0002bcbe) grid_wheel_folder_pane_g1_ParamLimits

0xbbab,	// (0x0002bcbe) grid_wheel_folder_pane_g1

0x7575,	// (0x00027688) clock_nsta_pane_cp2_ParamLimits

0x7575,	// (0x00027688) clock_nsta_pane_cp2

0x767d,	// (0x00027790) listscroll_midp_pane_ParamLimits

0x7689,	// (0x0002779c) midp_canvas_pane

0x2913,	// (0x00022a26) nsta_clock_indic_pane

0x293b,	// (0x00022a4e) listscroll_form_pane_vc

0x2943,	// (0x00022a56) listscroll_set_pane_vc_ParamLimits

0x2943,	// (0x00022a56) listscroll_set_pane_vc

0x80a8,	// (0x000281bb) clock_nsta_pane

0x8123,	// (0x00028236) indicator_nsta_pane

0x8400,	// (0x00028513) bg_popup_sub_pane_cp2_ParamLimits

0x8414,	// (0x00028527) find_pane_cp2_ParamLimits

0x8414,	// (0x00028527) find_pane_cp2

0x842a,	// (0x0002853d) grid_toobar_pane_ParamLimits

0x85b5,	// (0x000286c8) list_form_gen_pane_vc_ParamLimits

0x85b5,	// (0x000286c8) list_form_gen_pane_vc

0x85cb,	// (0x000286de) scroll_pane_cp8_vc_ParamLimits

0x85cb,	// (0x000286de) scroll_pane_cp8_vc

0x86e4,	// (0x000287f7) data_form_wide_pane_vc_ParamLimits

0x86e4,	// (0x000287f7) data_form_wide_pane_vc

0x86f0,	// (0x00028803) form_field_data_wide_pane_vc_g1

0x86f8,	// (0x0002880b) form_field_data_wide_pane_vc_t1_ParamLimits

0x86f8,	// (0x0002880b) form_field_data_wide_pane_vc_t1

0x1e99,	// (0x00021fac) input_focus_pane_cp6_vc_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_cp6_vc

0x8a25,	// (0x00028b38) list_midp_pane_ParamLimits

0x8a31,	// (0x00028b44) scroll_pane_cp16_ParamLimits

0x8a31,	// (0x00028b44) scroll_pane_cp16

0x8a9b,	// (0x00028bae) button_value_adjust_pane_ParamLimits

0x8a9b,	// (0x00028bae) button_value_adjust_pane

0xadd1,	// (0x0002aee4) button_value_adjust_pane_cp6_ParamLimits

0xadd1,	// (0x0002aee4) button_value_adjust_pane_cp6

0xaef7,	// (0x0002b00a) settings_code_pane_cp_ParamLimits

0xaef7,	// (0x0002b00a) settings_code_pane_cp

0x19f9,	// (0x00021b0c) cell_touch_pane_g1

0x19f9,	// (0x00021b0c) cell_touch_pane_g2

0x0001,

0xf6c8,	// (0x0002f7db) cell_touch_pane_g

0xb4dc,	// (0x0002b5ef) cell_touch_pane_cp_ParamLimits

0xb4dc,	// (0x0002b5ef) cell_touch_pane_cp

0xb4ec,	// (0x0002b5ff) cell_touch_pane_ParamLimits

0xb4ec,	// (0x0002b5ff) cell_touch_pane

0x19f9,	// (0x00021b0c) scroll_sc2_down_pane_g1

0x19f9,	// (0x00021b0c) scroll_sc2_up_pane_g1

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp4_vc

0xb4fe,	// (0x0002b611) list_set_graphic_pane_vc_g1_ParamLimits

0xb4fe,	// (0x0002b611) list_set_graphic_pane_vc_g1

0xb50a,	// (0x0002b61d) list_set_graphic_pane_vc_g2_ParamLimits

0xb50a,	// (0x0002b61d) list_set_graphic_pane_vc_g2

0x0001,

0xf9bf,	// (0x0002fad2) list_set_graphic_pane_vc_g_ParamLimits

0xf9bf,	// (0x0002fad2) list_set_graphic_pane_vc_g

0xb516,	// (0x0002b629) text_primary_small_cp13_vc_ParamLimits

0xb516,	// (0x0002b629) text_primary_small_cp13_vc

0xb52e,	// (0x0002b641) list_set_graphic_pane_vc_ParamLimits

0xb52e,	// (0x0002b641) list_set_graphic_pane_vc

0x1a03,	// (0x00021b16) input_focus_pane_cp2_vc

0x19f9,	// (0x00021b0c) setting_code_pane_vc_g1

0x1a76,	// (0x00021b89) setting_code_pane_vc_t1

0xb541,	// (0x0002b654) set_text_pane_vc_t1_ParamLimits

0xb541,	// (0x0002b654) set_text_pane_vc_t1

0x1a03,	// (0x00021b16) input_focus_pane_cp1_vc

0xb55e,	// (0x0002b671) list_set_text_pane_vc

0x19f9,	// (0x00021b0c) setting_text_pane_vc_g1

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp2_vc

0x1a6d,	// (0x00021b80) setting_slider_graphic_pane_vc_g1

0xb568,	// (0x0002b67b) setting_slider_graphic_pane_vc_t1

0xb578,	// (0x0002b68b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c4,	// (0x0002fad7) setting_slider_graphic_pane_vc_t

0xb588,	// (0x0002b69b) slider_set_pane_cp_vc

0xb590,	// (0x0002b6a3) slider_set_pane_vc_g1

0xb599,	// (0x0002b6ac) slider_set_pane_vc_g2

0x0006,

0xf9c9,	// (0x0002fadc) slider_set_pane_vc_g

0x1f5f,	// (0x00022072) set_opt_bg_pane_g1_copy1

0x1f67,	// (0x0002207a) set_opt_bg_pane_g2_copy1

0xb5c5,	// (0x0002b6d8) set_opt_bg_pane_g3_copy1

0x1f77,	// (0x0002208a) set_opt_bg_pane_g4_copy1

0x1f7f,	// (0x00022092) set_opt_bg_pane_g5_copy1

0x1f87,	// (0x0002209a) set_opt_bg_pane_g6_copy1

0xb5cd,	// (0x0002b6e0) set_opt_bg_pane_g7_copy1

0xb5d7,	// (0x0002b6ea) set_opt_bg_pane_g8_copy1

0xb5df,	// (0x0002b6f2) set_opt_bg_pane_g9_copy1

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp_vc

0xb5e7,	// (0x0002b6fa) setting_slider_pane_vc_t1

0xb5f6,	// (0x0002b709) setting_slider_pane_vc_t2

0xb606,	// (0x0002b719) setting_slider_pane_vc_t3

0x0002,

0xf9d8,	// (0x0002faeb) setting_slider_pane_vc_t

0xb616,	// (0x0002b729) slider_set_pane_vc

0x8e31,	// (0x00028f44) volume_set_pane_vc_g1

0x912c,	// (0x0002923f) volume_set_pane_vc_g2

0x9135,	// (0x00029248) volume_set_pane_vc_g3

0x913e,	// (0x00029251) volume_set_pane_vc_g4

0x9147,	// (0x0002925a) volume_set_pane_vc_g5

0x9150,	// (0x00029263) volume_set_pane_vc_g6

0x9159,	// (0x0002926c) volume_set_pane_vc_g7

0x9162,	// (0x00029275) volume_set_pane_vc_g8

0x916b,	// (0x0002927e) volume_set_pane_vc_g9

0x9174,	// (0x00029287) volume_set_pane_vc_g10

0x0009,

0xf9df,	// (0x0002faf2) volume_set_pane_vc_g

0xb61e,	// (0x0002b731) volume_set_pane_vc

0xb628,	// (0x0002b73b) button_value_adjust_pane_cp1_vc

0xb632,	// (0x0002b745) list_highlight_pane_cp2_vc

0xb63b,	// (0x0002b74e) list_set_pane_vc_ParamLimits

0xb63b,	// (0x0002b74e) list_set_pane_vc

0xb699,	// (0x0002b7ac) main_pane_set_vc_t1_ParamLimits

0xb699,	// (0x0002b7ac) main_pane_set_vc_t1

0xb6ae,	// (0x0002b7c1) main_pane_set_vc_t2_ParamLimits

0xb6ae,	// (0x0002b7c1) main_pane_set_vc_t2

0xb6c0,	// (0x0002b7d3) main_pane_set_vc_t3_ParamLimits

0xb6c0,	// (0x0002b7d3) main_pane_set_vc_t3

0xb6d2,	// (0x0002b7e5) main_pane_set_vc_t4_ParamLimits

0xb6d2,	// (0x0002b7e5) main_pane_set_vc_t4

0x0003,

0xf9f4,	// (0x0002fb07) main_pane_set_vc_t_ParamLimits

0xf9f4,	// (0x0002fb07) main_pane_set_vc_t

0xb6e4,	// (0x0002b7f7) setting_code_pane_vc_ParamLimits

0xb6e4,	// (0x0002b7f7) setting_code_pane_vc

0xb6f3,	// (0x0002b806) setting_slider_graphic_pane_vc

0xb6f3,	// (0x0002b806) setting_slider_pane_vc

0xb6f3,	// (0x0002b806) setting_text_pane_vc

0xb6f3,	// (0x0002b806) setting_volume_pane_vc

0xb6fb,	// (0x0002b80e) scroll_pane_cp121_vc

0x1e50,	// (0x00021f63) set_content_pane_vc

0xb703,	// (0x0002b816) button_value_adjust_pane_g1

0xb70c,	// (0x0002b81f) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x0002fb6f) button_value_adjust_pane_g

0xb715,	// (0x0002b828) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb715,	// (0x0002b828) form_field_slider_wide_pane_vc_t1

0xb729,	// (0x0002b83c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb729,	// (0x0002b83c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x0002fb74) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x0002fb74) form_field_slider_wide_pane_vc_t

0x1a51,	// (0x00021b64) input_focus_pane_cp10_vc_ParamLimits

0x1a51,	// (0x00021b64) input_focus_pane_cp10_vc

0xb757,	// (0x0002b86a) slider_cont_pane_cp1_vc_ParamLimits

0xb757,	// (0x0002b86a) slider_cont_pane_cp1_vc

0xb769,	// (0x0002b87c) slider_form_pane_g1_cp2

0xb599,	// (0x0002b6ac) slider_form_pane_g2_cp2

0xb796,	// (0x0002b8a9) form_field_slider_pane_vc_t3

0xb7a4,	// (0x0002b8b7) form_field_slider_pane_vc_t4

0xb7b2,	// (0x0002b8c5) slider_form_pane_vc_ParamLimits

0xb7b2,	// (0x0002b8c5) slider_form_pane_vc

0xb7bf,	// (0x0002b8d2) form_field_slider_pane_vc_t1_ParamLimits

0xb7bf,	// (0x0002b8d2) form_field_slider_pane_vc_t1

0xb729,	// (0x0002b83c) form_field_slider_pane_vc_t2_ParamLimits

0xb729,	// (0x0002b83c) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x0002fb86) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x0002fb86) form_field_slider_pane_vc_t

0x1a51,	// (0x00021b64) input_focus_pane_cp9_vc_ParamLimits

0x1a51,	// (0x00021b64) input_focus_pane_cp9_vc

0xb7db,	// (0x0002b8ee) slider_cont_pane_vc_ParamLimits

0xb7db,	// (0x0002b8ee) slider_cont_pane_vc

0xb7ef,	// (0x0002b902) list_form_graphic_pane_cp_vc_ParamLimits

0xb7ef,	// (0x0002b902) list_form_graphic_pane_cp_vc

0x86f0,	// (0x00028803) form_field_popup_wide_pane_vc_g1

0xb804,	// (0x0002b917) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb804,	// (0x0002b917) form_field_popup_wide_pane_vc_t1

0x1e99,	// (0x00021fac) input_focus_pane_cp8_vc_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_cp8_vc

0xb849,	// (0x0002b95c) list_form_wide_pane_vc_ParamLimits

0xb849,	// (0x0002b95c) list_form_wide_pane_vc

0xb855,	// (0x0002b968) list_form_graphic_pane_vc_g1

0xb85d,	// (0x0002b970) list_form_graphic_pane_vc_t1_ParamLimits

0xb85d,	// (0x0002b970) list_form_graphic_pane_vc_t1

0x1a5f,	// (0x00021b72) list_highlight_pane_cp5_vc_ParamLimits

0x1a5f,	// (0x00021b72) list_highlight_pane_cp5_vc

0xb879,	// (0x0002b98c) list_form_graphic_pane_vc_ParamLimits

0xb879,	// (0x0002b98c) list_form_graphic_pane_vc

0x86f0,	// (0x00028803) form_field_popup_pane_vc_g1

0xb88f,	// (0x0002b9a2) form_field_popup_pane_vc_t1_ParamLimits

0xb88f,	// (0x0002b9a2) form_field_popup_pane_vc_t1

0x1e99,	// (0x00021fac) input_focus_pane_cp7_vc_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_cp7_vc

0xb8a6,	// (0x0002b9b9) list_form_pane_vc_ParamLimits

0xb8a6,	// (0x0002b9b9) list_form_pane_vc

0xb8b2,	// (0x0002b9c5) data_form_pane_vc_t1_ParamLimits

0xb8b2,	// (0x0002b9c5) data_form_pane_vc_t1

0x1f5f,	// (0x00022072) input_focus_pane_vc_g1

0x1f67,	// (0x0002207a) input_focus_pane_vc_g2

0x1f6f,	// (0x00022082) input_focus_pane_vc_g3

0x1f77,	// (0x0002208a) input_focus_pane_vc_g4

0x1f7f,	// (0x00022092) input_focus_pane_vc_g5

0x1f87,	// (0x0002209a) input_focus_pane_vc_g6

0x1f8f,	// (0x000220a2) input_focus_pane_vc_g7

0x1f97,	// (0x000220aa) input_focus_pane_vc_g8

0x1f9f,	// (0x000220b2) input_focus_pane_vc_g9

0x19f9,	// (0x00021b0c) input_focus_pane_vc_g10

0x0009,

0xf651,	// (0x0002f764) input_focus_pane_vc_g

0x86e4,	// (0x000287f7) data_form_pane_vc_ParamLimits

0x86e4,	// (0x000287f7) data_form_pane_vc

0x86f0,	// (0x00028803) form_field_data_pane_vc_g1

0xb8cd,	// (0x0002b9e0) form_field_data_pane_vc_t1_ParamLimits

0xb8cd,	// (0x0002b9e0) form_field_data_pane_vc_t1

0x1e99,	// (0x00021fac) input_focus_pane_vc_ParamLimits

0x1e99,	// (0x00021fac) input_focus_pane_vc

0xb8e7,	// (0x0002b9fa) button_value_adjust_pane_cp3_vc

0xb8ef,	// (0x0002ba02) button_value_adjust_pane_cp5_vc

0xb8f7,	// (0x0002ba0a) form_field_data_pane_vc_ParamLimits

0xb8f7,	// (0x0002ba0a) form_field_data_pane_vc

0xb90e,	// (0x0002ba21) form_field_data_pane_vc_cp2

0xb916,	// (0x0002ba29) form_field_data_wide_pane_vc_ParamLimits

0xb916,	// (0x0002ba29) form_field_data_wide_pane_vc

0xb92c,	// (0x0002ba3f) form_field_data_wide_pane_vc_cp2

0xb934,	// (0x0002ba47) form_field_popup_pane_vc_ParamLimits

0xb934,	// (0x0002ba47) form_field_popup_pane_vc

0xb94b,	// (0x0002ba5e) form_field_popup_wide_pane_vc_ParamLimits

0xb94b,	// (0x0002ba5e) form_field_popup_wide_pane_vc

0xb961,	// (0x0002ba74) form_field_slider_pane_vc_ParamLimits

0xb961,	// (0x0002ba74) form_field_slider_pane_vc

0xb974,	// (0x0002ba87) form_field_slider_wide_pane_vc_ParamLimits

0xb974,	// (0x0002ba87) form_field_slider_wide_pane_vc

0xb987,	// (0x0002ba9a) grid_touch_1_pane_ParamLimits

0xb987,	// (0x0002ba9a) grid_touch_1_pane

0xb993,	// (0x0002baa6) grid_touch_2_pane_ParamLimits

0xb993,	// (0x0002baa6) grid_touch_2_pane

0x2905,	// (0x00022a18) touch_pane_g1_ParamLimits

0x2905,	// (0x00022a18) touch_pane_g1

0xb9ab,	// (0x0002babe) cell_app_pane_cp_wide_ParamLimits

0xb9ab,	// (0x0002babe) cell_app_pane_cp_wide

0xb9bc,	// (0x0002bacf) grid_popup_fast_wide_pane_ParamLimits

0xb9bc,	// (0x0002bacf) grid_popup_fast_wide_pane

0xb9d0,	// (0x0002bae3) scroll_pane_cp19_ParamLimits

0xb9d0,	// (0x0002bae3) scroll_pane_cp19

0x1a03,	// (0x00021b16) bg_popup_window_pane_cp20

0xb9e4,	// (0x0002baf7) listscroll_popup_fast_wide_pane

0xb9ec,	// (0x0002baff) grid_indicator_nsta_pane

0xb9fe,	// (0x0002bb11) clock_nsta_pane_g1

0xba07,	// (0x0002bb1a) clock_nsta_pane_t1

0xba23,	// (0x0002bb36) cell_indicator_nsta_pane_ParamLimits

0xba23,	// (0x0002bb36) cell_indicator_nsta_pane

0xba58,	// (0x0002bb6b) cell_indicator_nsta_pane_g1

0xba66,	// (0x0002bb79) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x0002fb97) cell_indicator_nsta_pane_g

0xba78,	// (0x0002bb8b) clock_nsta_pane_cp

0xba81,	// (0x0002bb94) indicator_nsta_pane_cp

0xba8b,	// (0x0002bb9e) nsta_clock_indic_pane_g1

0x1ab5,	// (0x00021bc8) grid_indicator_pane

0x72ae,	// (0x000273c1) scroll_pane_cp29

0x74c4,	// (0x000275d7) indicator_nsta_pane_cp2_ParamLimits

0x74c4,	// (0x000275d7) indicator_nsta_pane_cp2

0x1a5f,	// (0x00021b72) main_apps_wheel_pane

0x8908,	// (0x00028a1b) form_midp_field_text_pane_ParamLimits

0x8a51,	// (0x00028b64) scroll_bar_cp050_ParamLimits

0xbae4,	// (0x0002bbf7) cell_indicator_pane_ParamLimits

0xbae4,	// (0x0002bbf7) cell_indicator_pane

0xbafd,	// (0x0002bc10) cell_indicator_pane_g1

0xbb07,	// (0x0002bc1a) grid_wheel_folder_pane_ParamLimits

0xbb07,	// (0x0002bc1a) grid_wheel_folder_pane

0xbb1d,	// (0x0002bc30) list_wheel_apps_pane_ParamLimits

0xbb1d,	// (0x0002bc30) list_wheel_apps_pane

0xbb2e,	// (0x0002bc41) main_apps_wheel_pane_g1_ParamLimits

0xbb2e,	// (0x0002bc41) main_apps_wheel_pane_g1

0xbb42,	// (0x0002bc55) main_apps_wheel_pane_g2_ParamLimits

0xbb42,	// (0x0002bc55) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x0002fbb3) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x0002fbb3) main_apps_wheel_pane_g

0xbb5a,	// (0x0002bc6d) main_apps_wheel_pane_t1_ParamLimits

0xbb5a,	// (0x0002bc6d) main_apps_wheel_pane_t1

0xbb7d,	// (0x0002bc90) list_wheel_apps_pane_g1

0xbb85,	// (0x0002bc98) list_wheel_apps_pane_g2

0xbb8d,	// (0x0002bca0) list_wheel_apps_pane_g3

0xbb97,	// (0x0002bcaa) list_wheel_apps_pane_g4

0xbba1,	// (0x0002bcb4) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x0002fbb8) list_wheel_apps_pane_g

0x265c,	// (0x0002276f) navi_icon_text_pane

0x7fd7,	// (0x000280ea) aid_fill_nsta

0xbbc4,	// (0x0002bcd7) navi_icon_text_pane_g1

0xbbd0,	// (0x0002bce3) navi_icon_text_pane_t1

0x254c,	// (0x0002265f) list_set_graphic_pane_t1_ParamLimits

0x254c,	// (0x0002265f) list_set_graphic_pane_t1

0xa59e,	// (0x0002a6b1) popup_midp_note_alarm_window_t6_ParamLimits

0xa59e,	// (0x0002a6b1) popup_midp_note_alarm_window_t6

0xa5b0,	// (0x0002a6c3) popup_midp_note_alarm_window_t7_ParamLimits

0xa5b0,	// (0x0002a6c3) popup_midp_note_alarm_window_t7

0xa5c2,	// (0x0002a6d5) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c2,	// (0x0002a6d5) popup_midp_note_alarm_window_t8

0xa5d4,	// (0x0002a6e7) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d4,	// (0x0002a6e7) popup_midp_note_alarm_window_t9

0xa5e6,	// (0x0002a6f9) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e6,	// (0x0002a6f9) popup_midp_note_alarm_window_t10

0xa5f8,	// (0x0002a70b) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f8,	// (0x0002a70b) popup_midp_note_alarm_window_t11

0xa60a,	// (0x0002a71d) scroll_pane_cp17_ParamLimits

0xa60a,	// (0x0002a71d) scroll_pane_cp17

0x8e31,	// (0x00028f44) volume_small_pane_cp_g1

0x917d,	// (0x00029290) volume_small_pane_cp_g2

0x9186,	// (0x00029299) volume_small_pane_cp_g3

0x918f,	// (0x000292a2) volume_small_pane_cp_g4

0x9198,	// (0x000292ab) volume_small_pane_cp_g5

0x9147,	// (0x0002925a) volume_small_pane_cp_g6

0x91a1,	// (0x000292b4) volume_small_pane_cp_g7

0x91aa,	// (0x000292bd) volume_small_pane_cp_g8

0x91b3,	// (0x000292c6) volume_small_pane_cp_g9

0x91bc,	// (0x000292cf) volume_small_pane_cp_g10

0x27c6,	// (0x000228d9) midp_ticker_pane_g1_ParamLimits

0x27d2,	// (0x000228e5) midp_ticker_pane_g2_ParamLimits

0xf71d,	// (0x0002f830) midp_ticker_pane_g_ParamLimits

0x27de,	// (0x000228f1) midp_ticker_pane_t1_ParamLimits

0x7fed,	// (0x00028100) aid_fill_nsta_2

0x8a3d,	// (0x00028b50) list_form2_midp_pane

0xaf42,	// (0x0002b055) midp_editing_number_pane_ParamLimits

0xaf51,	// (0x0002b064) midp_ticker_pane_ParamLimits

0xbbe2,	// (0x0002bcf5) form2_midp_field_pane

0xbc06,	// (0x0002bd19) scroll_pane_cp51

0xbc26,	// (0x0002bd39) form2_midp_button_pane_ParamLimits

0xbc26,	// (0x0002bd39) form2_midp_button_pane

0xbc38,	// (0x0002bd4b) form2_midp_content_pane_ParamLimits

0xbc38,	// (0x0002bd4b) form2_midp_content_pane

0xbc52,	// (0x0002bd65) form2_midp_field_choice_group_pane

0xbc5a,	// (0x0002bd6d) form2_midp_field_pane_g1

0xbc62,	// (0x0002bd75) form2_midp_field_pane_g2

0xbc6a,	// (0x0002bd7d) form2_midp_field_pane_g3

0xbc72,	// (0x0002bd85) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x0002fbdd) form2_midp_field_pane_g

0xbc7a,	// (0x0002bd8d) form2_midp_gauge_slider_pane

0xbc82,	// (0x0002bd95) form2_midp_gauge_wait_pane

0xbc8a,	// (0x0002bd9d) form2_midp_image_pane_ParamLimits

0xbc8a,	// (0x0002bd9d) form2_midp_image_pane

0xbca5,	// (0x0002bdb8) form2_midp_label_pane_ParamLimits

0xbca5,	// (0x0002bdb8) form2_midp_label_pane

0xbcbe,	// (0x0002bdd1) form2_midp_label_pane_cp_ParamLimits

0xbcbe,	// (0x0002bdd1) form2_midp_label_pane_cp

0xbcdf,	// (0x0002bdf2) form2_midp_string_pane_ParamLimits

0xbcdf,	// (0x0002bdf2) form2_midp_string_pane

0x612c,	// (0x0002623f) form2_midp_text_pane_ParamLimits

0x612c,	// (0x0002623f) form2_midp_text_pane

0xbcf1,	// (0x0002be04) form2_midp_time_pane

0xbd01,	// (0x0002be14) input_focus_pane_cp51_ParamLimits

0xbd01,	// (0x0002be14) input_focus_pane_cp51

0xbd19,	// (0x0002be2c) form2_midp_label_pane_t1_ParamLimits

0xbd19,	// (0x0002be2c) form2_midp_label_pane_t1

0x6145,	// (0x00026258) form2_mdip_text_pane_t1_ParamLimits

0x6145,	// (0x00026258) form2_mdip_text_pane_t1

0x6163,	// (0x00026276) form2_midp_time_pane_t1

0xbd62,	// (0x0002be75) form2_midp_gauge_slider_pane_t1

0xbd74,	// (0x0002be87) form2_midp_gauge_slider_pane_t2

0xbd86,	// (0x0002be99) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x0002fbe6) form2_midp_gauge_slider_pane_t

0xbd98,	// (0x0002beab) form2_midp_slider_pane

0xbda4,	// (0x0002beb7) form2_midp_gauge_wait_pane_t1

0xbdb2,	// (0x0002bec5) form2_midp_wait_pane_ParamLimits

0xbdb2,	// (0x0002bec5) form2_midp_wait_pane

0xbddd,	// (0x0002bef0) list_single_2graphic_pane_cp4_ParamLimits

0xbddd,	// (0x0002bef0) list_single_2graphic_pane_cp4

0x8759,	// (0x0002886c) list_single_midp_graphic_pane_cp_ParamLimits

0x8759,	// (0x0002886c) list_single_midp_graphic_pane_cp

0x1a03,	// (0x00021b16) list_highlight_pane_cp20

0xbe05,	// (0x0002bf18) list_single_2graphic_pane_g1_cp4

0xb3e2,	// (0x0002b4f5) list_single_2graphic_pane_g2_cp4

0xbe0d,	// (0x0002bf20) list_single_2graphic_pane_t1_cp4

0x1a5f,	// (0x00021b72) list_highlight_pane_cp21

0xbe1c,	// (0x0002bf2f) list_single_midp_graphic_pane_g4_cp

0xbe2b,	// (0x0002bf3e) list_single_midp_graphic_pane_t1_cp

0xbe40,	// (0x0002bf53) form2_mdip_string_pane_t1_ParamLimits

0xbe40,	// (0x0002bf53) form2_mdip_string_pane_t1

0x1a03,	// (0x00021b16) bg_wml_button_pane_cp2

0x19f9,	// (0x00021b0c) form2_midp_image_pane_g1

0x56d5,	// (0x000257e8) list_double_large_graphic_pane_g5_ParamLimits

0x56d5,	// (0x000257e8) list_double_large_graphic_pane_g5

0x767d,	// (0x00027790) midp_form_pane_ParamLimits

0x1a5f,	// (0x00021b72) main_apps_wheel_pane_ParamLimits

0x7dbf,	// (0x00027ed2) popup_preview_window_ParamLimits

0x7dbf,	// (0x00027ed2) popup_preview_window

0x7f7a,	// (0x0002808d) popup_touch_info_window_ParamLimits

0x7f7a,	// (0x0002808d) popup_touch_info_window

0x7f98,	// (0x000280ab) popup_touch_menu_window_ParamLimits

0x7f98,	// (0x000280ab) popup_touch_menu_window

0x19ef,	// (0x00021b02) bg_popup_sub_pane_cp6

0xbf47,	// (0x0002c05a) list_touch_menu_pane

0xbf4f,	// (0x0002c062) list_single_touch_menu_pane_ParamLimits

0xbf4f,	// (0x0002c062) list_single_touch_menu_pane

0xbf65,	// (0x0002c078) list_single_touch_menu_pane_t1

0x1a5f,	// (0x00021b72) bg_popup_sub_pane_cp7_ParamLimits

0x1a5f,	// (0x00021b72) bg_popup_sub_pane_cp7

0x8a71,	// (0x00028b84) heading_sub_pane

0xbf73,	// (0x0002c086) list_touch_info_pane_ParamLimits

0xbf73,	// (0x0002c086) list_touch_info_pane

0xbf83,	// (0x0002c096) list_single_touch_info_pane_ParamLimits

0xbf83,	// (0x0002c096) list_single_touch_info_pane

0xbf95,	// (0x0002c0a8) list_single_touch_info_pane_t1

0xbfa3,	// (0x0002c0b6) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x0002fbf4) list_single_touch_info_pane_t

0x27af,	// (0x000228c2) bg_popup_heading_pane_cp

0xbfb1,	// (0x0002c0c4) heading_sub_pane_t1

0x85f6,	// (0x00028709) bg_popup_preview_window_pane_cp_ParamLimits

0x85f6,	// (0x00028709) bg_popup_preview_window_pane_cp

0x8a71,	// (0x00028b84) heading_preview_pane

0xbf73,	// (0x0002c086) list_preview_pane_ParamLimits

0xbf73,	// (0x0002c086) list_preview_pane

0xbfbf,	// (0x0002c0d2) popup_preview_window_g1

0xbf83,	// (0x0002c096) list_single_preview_pane_ParamLimits

0xbf83,	// (0x0002c096) list_single_preview_pane

0xbfc7,	// (0x0002c0da) list_single_preview_pane_g1

0xbfcf,	// (0x0002c0e2) list_single_preview_pane_t1

0xbf95,	// (0x0002c0a8) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x0002fbf9) list_single_preview_pane_t

0xbfdd,	// (0x0002c0f0) bg_popup_heading_pane_cp2_ParamLimits

0xbfdd,	// (0x0002c0f0) bg_popup_heading_pane_cp2

0xbff3,	// (0x0002c106) heading_preview_pane_g1

0xbffb,	// (0x0002c10e) heading_preview_pane_t1_ParamLimits

0xbffb,	// (0x0002c10e) heading_preview_pane_t1

0x1acc,	// (0x00021bdf) soft_indicator_pane_t1_ParamLimits

0x1dab,	// (0x00021ebe) scroll_pane_ParamLimits

0x2235,	// (0x00022348) scroll_sc2_left_pane

0x222c,	// (0x0002233f) scroll_sc2_right_pane

0x2254,	// (0x00022367) scroll_bg_pane_g1_ParamLimits

0x2269,	// (0x0002237c) scroll_bg_pane_g2_ParamLimits

0x2281,	// (0x00022394) scroll_bg_pane_g3_ParamLimits

0xf6a8,	// (0x0002f7bb) scroll_bg_pane_g_ParamLimits

0x2254,	// (0x00022367) scroll_handle_pane_g1_ParamLimits

0x2296,	// (0x000223a9) scroll_handle_pane_g2_ParamLimits

0x2281,	// (0x00022394) scroll_handle_pane_g3_ParamLimits

0xf6af,	// (0x0002f7c2) scroll_handle_pane_g_ParamLimits

0x7a42,	// (0x00027b55) popup_choice_list_window_ParamLimits

0x7a42,	// (0x00027b55) popup_choice_list_window

0x840c,	// (0x0002851f) choice_list_pane

0x84be,	// (0x000285d1) cell_toolbar_pane_t1

0x84e6,	// (0x000285f9) toolbar_button_pane_ParamLimits

0xaac4,	// (0x0002abd7) ai_gene_pane_1_t2_ParamLimits

0xaac4,	// (0x0002abd7) ai_gene_pane_1_t2

0x0001,

0xf8d2,	// (0x0002f9e5) ai_gene_pane_1_t_ParamLimits

0xf8d2,	// (0x0002f9e5) ai_gene_pane_1_t

0xc018,	// (0x0002c12b) scroll_sc2_left_pane_g1

0xc018,	// (0x0002c12b) scroll_sc2_right_pane_g1

0x2049,	// (0x0002215c) bg_popup_sub_pane_cp10

0xc022,	// (0x0002c135) list_choice_list_pane

0xc03b,	// (0x0002c14e) list_single_choice_list_pane_ParamLimits

0xc03b,	// (0x0002c14e) list_single_choice_list_pane

0xc04e,	// (0x0002c161) list_single_choice_list_pane_g1

0x6f47,	// (0x0002705a) list_single_choice_list_pane_t1_ParamLimits

0x6f47,	// (0x0002705a) list_single_choice_list_pane_t1

0xc056,	// (0x0002c169) choice_list_pane_g1

0xc05e,	// (0x0002c171) choice_list_pane_t1

0x19ef,	// (0x00021b02) input_focus_pane_cp11

0x21a1,	// (0x000222b4) title_pane_stacon_g2_ParamLimits

0x21a1,	// (0x000222b4) title_pane_stacon_g2

0x0002,

0xf68e,	// (0x0002f7a1) title_pane_stacon_g_ParamLimits

0xf68e,	// (0x0002f7a1) title_pane_stacon_g

0x27af,	// (0x000228c2) cursor_press_pane

0x7aea,	// (0x00027bfd) popup_fep_hwr_window_ParamLimits

0x7aea,	// (0x00027bfd) popup_fep_hwr_window

0x7b62,	// (0x00027c75) popup_fep_vkb_window_ParamLimits

0x7b62,	// (0x00027c75) popup_fep_vkb_window

0xc06c,	// (0x0002c17f) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x0002fc22) fep_vkb_side_pane_g_ParamLimits

0x91fe,	// (0x00029311) fep_hwr_candidate_pane_ParamLimits

0x91fe,	// (0x00029311) fep_hwr_candidate_pane

0x9228,	// (0x0002933b) fep_hwr_side_pane_ParamLimits

0x9228,	// (0x0002933b) fep_hwr_side_pane

0x9248,	// (0x0002935b) fep_hwr_top_pane_ParamLimits

0x9248,	// (0x0002935b) fep_hwr_top_pane

0x9260,	// (0x00029373) fep_hwr_write_pane_ParamLimits

0x9260,	// (0x00029373) fep_hwr_write_pane

0xfb0f,	// (0x0002fc22) fep_vkb_side_pane_g

0xc074,	// (0x0002c187) fep_hwr_top_pane_g1

0xc086,	// (0x0002c199) fep_hwr_top_pane_g2

0x928c,	// (0x0002939f) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x0002fbfe) fep_hwr_top_pane_g

0x92a1,	// (0x000293b4) fep_hwr_top_text_pane

0x2359,	// (0x0002246c) fep_hwr_top_text_pane_g1

0xc0bc,	// (0x0002c1cf) fep_hwr_top_text_pane_t1

0x9397,	// (0x000294aa) fep_hwr_candidate_pane_g1

0xc301,	// (0x0002c414) fep_vkb_keypad_pane_g3_ParamLimits

0xc301,	// (0x0002c414) fep_vkb_keypad_pane_g3

0xc329,	// (0x0002c43c) fep_vkb_keypad_pane_g4_ParamLimits

0xc329,	// (0x0002c43c) fep_vkb_keypad_pane_g4

0xc398,	// (0x0002c4ab) fep_vkb_bottom_pane_g2_ParamLimits

0xc398,	// (0x0002c4ab) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x0002fc29) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x0002fc29) fep_vkb_bottom_pane_g

0xc018,	// (0x0002c12b) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x0002fc33) cell_vkb_side_pane_g

0xc423,	// (0x0002c536) cell_vkb_side_pane_t1

0xc431,	// (0x0002c544) cell_vkb_side_pane_t1_copy1

0xc018,	// (0x0002c12b) bg_fep_vkb_candidate_pane_g2

0xc55d,	// (0x0002c670) cell_vkb_candidate_pane_ParamLimits

0xc0ca,	// (0x0002c1dd) aid_size_cell_vkb_ParamLimits

0xc0ca,	// (0x0002c1dd) aid_size_cell_vkb

0xc55d,	// (0x0002c670) cell_vkb_candidate_pane

0x93b1,	// (0x000294c4) bg_popup_fep_shadow_pane_g1

0xc158,	// (0x0002c26b) fep_vkb_bottom_pane_ParamLimits

0xc158,	// (0x0002c26b) fep_vkb_bottom_pane

0xc18e,	// (0x0002c2a1) fep_vkb_candidate_pane_ParamLimits

0xc18e,	// (0x0002c2a1) fep_vkb_candidate_pane

0xc1aa,	// (0x0002c2bd) fep_vkb_keypad_pane_ParamLimits

0xc1aa,	// (0x0002c2bd) fep_vkb_keypad_pane

0xc1e9,	// (0x0002c2fc) fep_vkb_side_pane_ParamLimits

0xc1e9,	// (0x0002c2fc) fep_vkb_side_pane

0xc225,	// (0x0002c338) fep_vkb_top_pane_ParamLimits

0xc225,	// (0x0002c338) fep_vkb_top_pane

0xc25a,	// (0x0002c36d) fep_vkb_top_pane_g1_ParamLimits

0xc25a,	// (0x0002c36d) fep_vkb_top_pane_g1

0xc269,	// (0x0002c37c) fep_vkb_top_pane_g2_ParamLimits

0xc269,	// (0x0002c37c) fep_vkb_top_pane_g2

0xc278,	// (0x0002c38b) fep_vkb_top_pane_g3_ParamLimits

0xc278,	// (0x0002c38b) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x0002fc19) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x0002fc19) fep_vkb_top_pane_g

0xc296,	// (0x0002c3a9) fep_vkb_top_text_pane_ParamLimits

0xc296,	// (0x0002c3a9) fep_vkb_top_text_pane

0xc2a7,	// (0x0002c3ba) fep_vkb_side_pane_g1_ParamLimits

0xc2a7,	// (0x0002c3ba) fep_vkb_side_pane_g1

0xc2f0,	// (0x0002c403) grid_vkb_side_pane_ParamLimits

0xc2f0,	// (0x0002c403) grid_vkb_side_pane

0x93b9,	// (0x000294cc) bg_popup_fep_shadow_pane_g2

0x93c2,	// (0x000294d5) bg_popup_fep_shadow_pane_g3

0x93ca,	// (0x000294dd) bg_popup_fep_shadow_pane_g4

0x93d3,	// (0x000294e6) bg_popup_fep_shadow_pane_g5

0x93dd,	// (0x000294f0) bg_popup_fep_shadow_pane_g6

0x93e5,	// (0x000294f8) bg_popup_fep_shadow_pane_g7

0x1f7f,	// (0x00022092) bg_popup_fep_shadow_pane_g8

0xc347,	// (0x0002c45a) grid_vkb_keypad_number_pane_ParamLimits

0xc347,	// (0x0002c45a) grid_vkb_keypad_number_pane

0xc357,	// (0x0002c46a) grid_vkb_keypad_pane_ParamLimits

0xc357,	// (0x0002c46a) grid_vkb_keypad_pane

0xc37d,	// (0x0002c490) fep_vkb_bottom_pane_g1_ParamLimits

0xc37d,	// (0x0002c490) fep_vkb_bottom_pane_g1

0xc3a6,	// (0x0002c4b9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3a6,	// (0x0002c4b9) grid_vkb_keypad_bottom_left_pane

0xc3bb,	// (0x0002c4ce) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3bb,	// (0x0002c4ce) grid_vkb_keypad_bottom_right_pane

0xc3d0,	// (0x0002c4e3) fep_vkb_top_text_pane_g1

0xc3eb,	// (0x0002c4fe) fep_vkb_top_text_pane_t1

0xc400,	// (0x0002c513) cell_vkb_side_pane_ParamLimits

0xc400,	// (0x0002c513) cell_vkb_side_pane

0xc018,	// (0x0002c12b) cell_vkb_side_pane_g1

0xc43f,	// (0x0002c552) cell_vkb_keypad_pane_ParamLimits

0xc43f,	// (0x0002c552) cell_vkb_keypad_pane

0xc4b4,	// (0x0002c5c7) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x0002fc46) bg_popup_fep_shadow_pane_g

0xc018,	// (0x0002c12b) cell_hwr_side_pane_g1

0xc018,	// (0x0002c12b) cell_hwr_side_pane_g2

0xc4be,	// (0x0002c5d1) cell_vkb_keypad_pane_t1

0xc4cc,	// (0x0002c5df) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cc,	// (0x0002c5df) cell_vkb_keypad_bottom_left_pane

0xc4e9,	// (0x0002c5fc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e9,	// (0x0002c5fc) cell_vkb_keypad_bottom_right_pane

0xc018,	// (0x0002c12b) cell_vkb_keypad_bottom_left_pane_g1

0xc018,	// (0x0002c12b) cell_vkb_keypad_bottom_right_pane_g1

0xc522,	// (0x0002c635) cell_vkb_keypad_number_pane_ParamLimits

0xc522,	// (0x0002c635) cell_vkb_keypad_number_pane

0xc541,	// (0x0002c654) cell_vkb_keypad_number_pane_g1

0xc54b,	// (0x0002c65e) cell_vkb_keypad_number_pane_g2

0xc554,	// (0x0002c667) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x0002fc38) cell_vkb_keypad_number_pane_g

0xc4be,	// (0x0002c5d1) cell_vkb_keypad_number_pane_t1

0xc578,	// (0x0002c68b) fep_vkb_candidate_pane_g1

0x0001,

0xfb20,	// (0x0002fc33) cell_hwr_side_pane_g

0xc591,	// (0x0002c6a4) cell_hwr_side_pane_t1

0x93f7,	// (0x0002950a) cell_hwr_side_pane_t1_copy1

0xc288,	// (0x0002c39b) cell_hwr_candidate_pane_g1

0x9405,	// (0x00029518) cell_hwr_candidate_pane_t1

0xc018,	// (0x0002c12b) cell_vkb_candidate_pane_g2

0xc617,	// (0x0002c72a) cell_vkb_candidate_pane_t1

0x91c5,	// (0x000292d8) bg_popup_fep_shadow_pane_ParamLimits

0x91c5,	// (0x000292d8) bg_popup_fep_shadow_pane

0x19bf,	// (0x00021ad2) bg_fep_hwr_top_pane_g4

0xc098,	// (0x0002c1ab) bg_hwr_side_pane_g1_ParamLimits

0xc098,	// (0x0002c1ab) bg_hwr_side_pane_g1

0x92dd,	// (0x000293f0) cell_hwr_side_pane_ParamLimits

0x92dd,	// (0x000293f0) cell_hwr_side_pane

0x9318,	// (0x0002942b) fep_hwr_write_pane_g1_ParamLimits

0x9318,	// (0x0002942b) fep_hwr_write_pane_g1

0x9325,	// (0x00029438) fep_hwr_write_pane_g2_ParamLimits

0x9325,	// (0x00029438) fep_hwr_write_pane_g2

0x9332,	// (0x00029445) fep_hwr_write_pane_g3_ParamLimits

0x9332,	// (0x00029445) fep_hwr_write_pane_g3

0x9340,	// (0x00029453) fep_hwr_write_pane_g4_ParamLimits

0x9340,	// (0x00029453) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x0002fc05) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x0002fc05) fep_hwr_write_pane_g

0x19bf,	// (0x00021ad2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19bf,	// (0x00021ad2) bg_fep_hwr_candidate_pane_g2

0x9355,	// (0x00029468) cell_hwr_candidate_pane_ParamLimits

0x9355,	// (0x00029468) cell_hwr_candidate_pane

0x9397,	// (0x000294aa) fep_hwr_candidate_pane_g1_ParamLimits

0xc0f8,	// (0x0002c20b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0f8,	// (0x0002c20b) bg_popup_fep_shadow_pane_cp2

0xc288,	// (0x0002c39b) fep_vkb_top_pane_g4_ParamLimits

0xc288,	// (0x0002c39b) fep_vkb_top_pane_g4

0xc2ce,	// (0x0002c3e1) fep_vkb_side_pane_g2_ParamLimits

0xc2ce,	// (0x0002c3e1) fep_vkb_side_pane_g2

0x5815,	// (0x00025928) list_setting_pane_t4_ParamLimits

0x5815,	// (0x00025928) list_setting_pane_t4

0x58a7,	// (0x000259ba) list_setting_number_pane_t5_ParamLimits

0x58a7,	// (0x000259ba) list_setting_number_pane_t5

0x72dd,	// (0x000273f0) list_double_heading_pane_cp2_ParamLimits

0x72dd,	// (0x000273f0) list_double_heading_pane_cp2

0x2998,	// (0x00022aab) list_double_heading_pane_g1_cp2_ParamLimits

0x2998,	// (0x00022aab) list_double_heading_pane_g1_cp2

0xc625,	// (0x0002c738) list_double_heading_pane_g2_cp2_ParamLimits

0xc625,	// (0x0002c738) list_double_heading_pane_g2_cp2

0xc639,	// (0x0002c74c) list_double_heading_pane_t1_cp2_ParamLimits

0xc639,	// (0x0002c74c) list_double_heading_pane_t1_cp2

0xc64f,	// (0x0002c762) list_double_heading_pane_t2_cp2_ParamLimits

0xc64f,	// (0x0002c762) list_double_heading_pane_t2_cp2

0x19e7,	// (0x00021afa) aid_value_unit2

0x67e1,	// (0x000268f4) popup_preview_fixed_window

0x1ba3,	// (0x00021cb6) bg_popup_preview_window_pane_cp02

0xc661,	// (0x0002c774) list_preview_fixed_pane

0xc6a7,	// (0x0002c7ba) list_empty_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_empty_pane_fp

0xc6a7,	// (0x0002c7ba) list_single_cale_day_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_single_cale_day_pane_fp

0xc6a7,	// (0x0002c7ba) list_single_graphic_heading_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_single_graphic_heading_pane_fp

0xc6a7,	// (0x0002c7ba) list_single_graphic_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_single_graphic_pane_fp

0xc6a7,	// (0x0002c7ba) list_single_heading_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_single_heading_pane_fp

0xc6a7,	// (0x0002c7ba) list_single_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_single_pane_fp

0xc6bd,	// (0x0002c7d0) list_single_pane_fp_g1_ParamLimits

0xc6bd,	// (0x0002c7d0) list_single_pane_fp_g1

0x5698,	// (0x000257ab) list_single_pane_fp_g2_ParamLimits

0x5698,	// (0x000257ab) list_single_pane_fp_g2

0x6176,	// (0x00026289) list_single_pane_fp_g3_ParamLimits

0x6176,	// (0x00026289) list_single_pane_fp_g3

0xc6c9,	// (0x0002c7dc) list_single_pane_fp_g4_ParamLimits

0xc6c9,	// (0x0002c7dc) list_single_pane_fp_g4

0x0003,

0xfb54,	// (0x0002fc67) list_single_pane_fp_g_ParamLimits

0xfb54,	// (0x0002fc67) list_single_pane_fp_g

0x618a,	// (0x0002629d) list_single_pane_fp_t1_ParamLimits

0x618a,	// (0x0002629d) list_single_pane_fp_t1

0x61a1,	// (0x000262b4) list_single_graphic_pane_fp_g1_ParamLimits

0x61a1,	// (0x000262b4) list_single_graphic_pane_fp_g1

0xc6bd,	// (0x0002c7d0) list_single_graphic_pane_fp_g2_ParamLimits

0xc6bd,	// (0x0002c7d0) list_single_graphic_pane_fp_g2

0x5698,	// (0x000257ab) list_single_graphic_pane_fp_g3_ParamLimits

0x5698,	// (0x000257ab) list_single_graphic_pane_fp_g3

0x6176,	// (0x00026289) list_single_graphic_pane_fp_g4_ParamLimits

0x6176,	// (0x00026289) list_single_graphic_pane_fp_g4

0xc6c9,	// (0x0002c7dc) list_single_graphic_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0002c7dc) list_single_graphic_pane_fp_g5

0x0004,

0xfb5d,	// (0x0002fc70) list_single_graphic_pane_fp_g_ParamLimits

0xfb5d,	// (0x0002fc70) list_single_graphic_pane_fp_g

0x61ad,	// (0x000262c0) list_single_graphic_pane_fp_t1_ParamLimits

0x61ad,	// (0x000262c0) list_single_graphic_pane_fp_t1

0x61a1,	// (0x000262b4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x61a1,	// (0x000262b4) list_single_graphic_heading_pane_fp_g1

0xc6bd,	// (0x0002c7d0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6bd,	// (0x0002c7d0) list_single_graphic_heading_pane_fp_g2

0x5698,	// (0x000257ab) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5698,	// (0x000257ab) list_single_graphic_heading_pane_fp_g3

0x6176,	// (0x00026289) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6176,	// (0x00026289) list_single_graphic_heading_pane_fp_g4

0xc6c9,	// (0x0002c7dc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0002c7dc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x0002fc70) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x0002fc70) list_single_graphic_heading_pane_fp_g

0x61c3,	// (0x000262d6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x61c3,	// (0x000262d6) list_single_graphic_heading_pane_fp_t1

0x61d9,	// (0x000262ec) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x61d9,	// (0x000262ec) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb68,	// (0x0002fc7b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb68,	// (0x0002fc7b) list_single_graphic_heading_pane_fp_t

0x61eb,	// (0x000262fe) list_single_cale_day_pane_fp_g1_ParamLimits

0x61eb,	// (0x000262fe) list_single_cale_day_pane_fp_g1

0xc6d5,	// (0x0002c7e8) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d5,	// (0x0002c7e8) list_single_cale_day_pane_fp_g2

0x6223,	// (0x00026336) list_single_cale_day_pane_fp_g3_ParamLimits

0x6223,	// (0x00026336) list_single_cale_day_pane_fp_g3

0x624b,	// (0x0002635e) list_single_cale_day_pane_fp_g4_ParamLimits

0x624b,	// (0x0002635e) list_single_cale_day_pane_fp_g4

0x626f,	// (0x00026382) list_single_cale_day_pane_fp_g5_ParamLimits

0x626f,	// (0x00026382) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6d,	// (0x0002fc80) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6d,	// (0x0002fc80) list_single_cale_day_pane_fp_g

0x6293,	// (0x000263a6) list_single_cale_day_pane_fp_t1_ParamLimits

0x6293,	// (0x000263a6) list_single_cale_day_pane_fp_t1

0x62b9,	// (0x000263cc) list_single_cale_day_pane_fp_t2_ParamLimits

0x62b9,	// (0x000263cc) list_single_cale_day_pane_fp_t2

0x62d2,	// (0x000263e5) list_single_cale_day_pane_fp_t3_ParamLimits

0x62d2,	// (0x000263e5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb78,	// (0x0002fc8b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb78,	// (0x0002fc8b) list_single_cale_day_pane_fp_t

0xc6bd,	// (0x0002c7d0) list_empty_pane_fp_g1_ParamLimits

0xc6bd,	// (0x0002c7d0) list_empty_pane_fp_g1

0x62eb,	// (0x000263fe) list_empty_pane_fp_t1

0x62f9,	// (0x0002640c) list_empty_pane_fp_t2

0x0001,

0xfb7f,	// (0x0002fc92) list_empty_pane_fp_t

0xc6bd,	// (0x0002c7d0) list_single_heading_pane_fp_g1_ParamLimits

0xc6bd,	// (0x0002c7d0) list_single_heading_pane_fp_g1

0x5698,	// (0x000257ab) list_single_heading_pane_fp_g2_ParamLimits

0x5698,	// (0x000257ab) list_single_heading_pane_fp_g2

0x6176,	// (0x00026289) list_single_heading_pane_fp_g3_ParamLimits

0x6176,	// (0x00026289) list_single_heading_pane_fp_g3

0x0002,

0xfb84,	// (0x0002fc97) list_single_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0002fc97) list_single_heading_pane_fp_g

0x6307,	// (0x0002641a) list_single_heading_pane_fp_t1_ParamLimits

0x6307,	// (0x0002641a) list_single_heading_pane_fp_t1

0x6319,	// (0x0002642c) list_single_heading_pane_fp_t2_ParamLimits

0x6319,	// (0x0002642c) list_single_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0002fc9e) list_single_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0002fc9e) list_single_heading_pane_fp_t

0x6fad,	// (0x000270c0) aid_size_cell_fast

0x1b86,	// (0x00021c99) soft_indicator_pane_cp1_t1

0x6fb6,	// (0x000270c9) cell_app_pane_cp2_ParamLimits

0x6fb6,	// (0x000270c9) cell_app_pane_cp2

0x91e7,	// (0x000292fa) fep_hwr_candidate_drop_down_list_pane

0x19cd,	// (0x00021ae0) fep_hwr_candidate_pane_g3_ParamLimits

0x19cd,	// (0x00021ae0) fep_hwr_candidate_pane_g3

0x19da,	// (0x00021aed) fep_hwr_candidate_pane_g4_ParamLimits

0x19da,	// (0x00021aed) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x0002fc12) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x0002fc12) fep_hwr_candidate_pane_g

0xc17d,	// (0x0002c290) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc17d,	// (0x0002c290) fep_vkb_candidate_drop_down_list_pane

0xc580,	// (0x0002c693) fep_vkb_candidate_pane_g3

0xc588,	// (0x0002c69b) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0002fc3f) fep_vkb_candidate_pane_g

0xc288,	// (0x0002c39b) cell_hwr_candidate_pane_g1_ParamLimits

0xc59f,	// (0x0002c6b2) cell_hwr_candidate_pane_g3_ParamLimits

0xc59f,	// (0x0002c6b2) cell_hwr_candidate_pane_g3

0xc5c0,	// (0x0002c6d3) cell_hwr_candidate_pane_g4_ParamLimits

0xc5c0,	// (0x0002c6d3) cell_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002fc59) cell_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x0002fc59) cell_hwr_candidate_pane_g

0xc5e1,	// (0x0002c6f4) cell_vkb_candidate_pane_g3_ParamLimits

0xc5e1,	// (0x0002c6f4) cell_vkb_candidate_pane_g3

0xc5fc,	// (0x0002c70f) cell_vkb_candidate_pane_g4_ParamLimits

0xc5fc,	// (0x0002c70f) cell_vkb_candidate_pane_g4

0xc6e1,	// (0x0002c7f4) cell_app_pane_cp2_g1_ParamLimits

0xc6e1,	// (0x0002c7f4) cell_app_pane_cp2_g1

0xc6ff,	// (0x0002c812) cell_app_pane_cp2_g2_ParamLimits

0xc6ff,	// (0x0002c812) cell_app_pane_cp2_g2

0x0001,

0xfb90,	// (0x0002fca3) cell_app_pane_cp2_g_ParamLimits

0xfb90,	// (0x0002fca3) cell_app_pane_cp2_g

0xc70b,	// (0x0002c81e) cell_app_pane_cp2_t1_ParamLimits

0xc70b,	// (0x0002c81e) cell_app_pane_cp2_t1

0x1e99,	// (0x00021fac) grid_highlight_pane_cp1_ParamLimits

0x1e99,	// (0x00021fac) grid_highlight_pane_cp1

0x9423,	// (0x00029536) cell_hwr_candidate_pane_cp1_ParamLimits

0x9423,	// (0x00029536) cell_hwr_candidate_pane_cp1

0xc288,	// (0x0002c39b) fep_hwr_candidate_drop_down_list_pane_g1

0xc71d,	// (0x0002c830) fep_hwr_candidate_drop_down_list_pane_g2

0xc72a,	// (0x0002c83d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x0002fca8) fep_hwr_candidate_drop_down_list_pane_g

0x9442,	// (0x00029555) fep_hwr_candidate_drop_down_list_scroll_pane

0x944b,	// (0x0002955e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x944b,	// (0x0002955e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9458,	// (0x0002956b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9458,	// (0x0002956b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9465,	// (0x00029578) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9465,	// (0x00029578) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5e1,	// (0x0002c6f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5e1,	// (0x0002c6f4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5fc,	// (0x0002c70f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5fc,	// (0x0002c70f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9472,	// (0x00029585) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9472,	// (0x00029585) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x948d,	// (0x000295a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x948d,	// (0x000295a0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x94a8,	// (0x000295bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x94a8,	// (0x000295bb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x0002fcaf) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x0002fcaf) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc737,	// (0x0002c84a) cell_vkb_candidate_pane_cp1_ParamLimits

0xc737,	// (0x0002c84a) cell_vkb_candidate_pane_cp1

0xc288,	// (0x0002c39b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc288,	// (0x0002c39b) fep_vkb_candidate_drop_down_list_pane_g1

0xc71d,	// (0x0002c830) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71d,	// (0x0002c830) fep_vkb_candidate_drop_down_list_pane_g2

0xc72a,	// (0x0002c83d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc72a,	// (0x0002c83d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x0002fca8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb95,	// (0x0002fca8) fep_vkb_candidate_drop_down_list_pane_g

0xc757,	// (0x0002c86a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc757,	// (0x0002c86a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc764,	// (0x0002c877) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc764,	// (0x0002c877) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc771,	// (0x0002c884) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc771,	// (0x0002c884) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc77d,	// (0x0002c890) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc77d,	// (0x0002c890) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc59f,	// (0x0002c6b2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc59f,	// (0x0002c6b2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5c0,	// (0x0002c6d3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5c0,	// (0x0002c6d3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc789,	// (0x0002c89c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc789,	// (0x0002c89c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7aa,	// (0x0002c8bd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7aa,	// (0x0002c8bd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7cb,	// (0x0002c8de) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7cb,	// (0x0002c8de) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0002fcc0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0002fcc0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x68fb,	// (0x00026a0e) title_pane_g1_ParamLimits

0x6908,	// (0x00026a1b) title_pane_g2_ParamLimits

0xf527,	// (0x0002f63a) title_pane_g_ParamLimits

0x2351,	// (0x00022464) aid_call2_pane

0x2349,	// (0x0002245c) aid_call_pane

0x2359,	// (0x0002246c) popup_clock_analogue_window_g1

0x2359,	// (0x0002246c) popup_clock_analogue_window_g2

0x72be,	// (0x000273d1) popup_clock_analogue_window_g3

0x72c7,	// (0x000273da) popup_clock_analogue_window_g4

0x19f9,	// (0x00021b0c) popup_clock_analogue_window_g5

0x0004,

0xf6bd,	// (0x0002f7d0) popup_clock_analogue_window_g

0x72cf,	// (0x000273e2) popup_clock_analogue_window_t1

0x731d,	// (0x00027430) clock_digital_number_pane_ParamLimits

0x731d,	// (0x00027430) clock_digital_number_pane

0x7329,	// (0x0002743c) clock_digital_number_pane_cp02_ParamLimits

0x7329,	// (0x0002743c) clock_digital_number_pane_cp02

0x7335,	// (0x00027448) clock_digital_number_pane_cp03_ParamLimits

0x7335,	// (0x00027448) clock_digital_number_pane_cp03

0x7341,	// (0x00027454) clock_digital_number_pane_cp04_ParamLimits

0x7341,	// (0x00027454) clock_digital_number_pane_cp04

0x734d,	// (0x00027460) clock_digital_separator_pane_ParamLimits

0x734d,	// (0x00027460) clock_digital_separator_pane

0x7359,	// (0x0002746c) popup_clock_digital_window_t1_ParamLimits

0x7359,	// (0x0002746c) popup_clock_digital_window_t1

0x19f9,	// (0x00021b0c) clock_digital_number_pane_g1

0x19f9,	// (0x00021b0c) clock_digital_number_pane_g2

0x0001,

0xf6c8,	// (0x0002f7db) clock_digital_number_pane_g

0x19f9,	// (0x00021b0c) clock_digital_separator_pane_g1

0x19f9,	// (0x00021b0c) clock_digital_separator_pane_g2

0x0001,

0xf6c8,	// (0x0002f7db) clock_digital_separator_pane_g

0x7fd7,	// (0x000280ea) aid_fill_nsta_ParamLimits

0x8123,	// (0x00028236) indicator_nsta_pane_ParamLimits

0x829c,	// (0x000283af) popup_clock_analogue_window

0x829c,	// (0x000283af) popup_clock_digital_window

0xb9ec,	// (0x0002baff) grid_indicator_nsta_pane_ParamLimits

0xba15,	// (0x0002bb28) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x0002fb92) clock_nsta_pane_t

0x71e9,	// (0x000272fc) aid_size_max_handle

0x71f3,	// (0x00027306) aid_size_min_handle

0x27af,	// (0x000228c2) editor_scroll_pane

0xc7e6,	// (0x0002c8f9) ex_editor_pane

0x2039,	// (0x0002214c) scroll_pane_cp13

0x1dd7,	// (0x00021eea) scroll_pane_cp14

0x2388,	// (0x0002249b) scroll_pane_cp36

0x72f1,	// (0x00027404) list_single_graphic_hl_pane_cp2_ParamLimits

0x72f1,	// (0x00027404) list_single_graphic_hl_pane_cp2

0xaf86,	// (0x0002b099) list_single_graphic_hl_pane_ParamLimits

0xaf86,	// (0x0002b099) list_single_graphic_hl_pane

0xd7c2,	// (0x0002d8d5) aid_size_min_hl_cp1

0xc7ee,	// (0x0002c901) list_highlight_pane_cp34_ParamLimits

0xc7ee,	// (0x0002c901) list_highlight_pane_cp34

0xc7ff,	// (0x0002c912) list_single_graphic_hl_pane_g1_ParamLimits

0xc7ff,	// (0x0002c912) list_single_graphic_hl_pane_g1

0x632f,	// (0x00026442) list_single_graphic_hl_pane_g2_ParamLimits

0x632f,	// (0x00026442) list_single_graphic_hl_pane_g2

0x632f,	// (0x00026442) list_single_graphic_hl_pane_g3_ParamLimits

0x632f,	// (0x00026442) list_single_graphic_hl_pane_g3

0x5c4b,	// (0x00025d5e) list_single_graphic_hl_pane_g4_ParamLimits

0x5c4b,	// (0x00025d5e) list_single_graphic_hl_pane_g4

0x633b,	// (0x0002644e) list_single_graphic_hl_pane_g5_ParamLimits

0x633b,	// (0x0002644e) list_single_graphic_hl_pane_g5

0x0004,

0xfbbe,	// (0x0002fcd1) list_single_graphic_hl_pane_g_ParamLimits

0xfbbe,	// (0x0002fcd1) list_single_graphic_hl_pane_g

0x634f,	// (0x00026462) list_single_graphic_hl_pane_t1_ParamLimits

0x634f,	// (0x00026462) list_single_graphic_hl_pane_t1

0xc80c,	// (0x0002c91f) aid_size_min_hl_cp2

0xc815,	// (0x0002c928) list_highlight_pane_cp34_cp2_ParamLimits

0xc815,	// (0x0002c928) list_highlight_pane_cp34_cp2

0xc7ff,	// (0x0002c912) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7ff,	// (0x0002c912) list_single_graphic_hl_pane_g1_cp2

0xc822,	// (0x0002c935) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc822,	// (0x0002c935) list_single_graphic_hl_pane_g2_cp2

0xc82e,	// (0x0002c941) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc82e,	// (0x0002c941) list_single_graphic_hl_pane_g3_cp2

0x1ddf,	// (0x00021ef2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1ddf,	// (0x00021ef2) list_single_graphic_hl_pane_g4_cp2

0xc83c,	// (0x0002c94f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83c,	// (0x0002c94f) list_single_graphic_hl_pane_g5_cp2

0x78e1,	// (0x000279f4) control_pane_g4_ParamLimits

0x78e1,	// (0x000279f4) control_pane_g4

0x2049,	// (0x0002215c) bg_popup_sub_pane_cp10_ParamLimits

0xc022,	// (0x0002c135) list_choice_list_pane_ParamLimits

0xc031,	// (0x0002c144) scroll_pane_cp23

0x1ba3,	// (0x00021cb6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc661,	// (0x0002c774) list_preview_fixed_pane_ParamLimits

0xc677,	// (0x0002c78a) list_preview_fixed_pane_cp_ParamLimits

0xc677,	// (0x0002c78a) list_preview_fixed_pane_cp

0xc683,	// (0x0002c796) popup_preview_fixed_window_g1_ParamLimits

0xc683,	// (0x0002c796) popup_preview_fixed_window_g1

0xc68f,	// (0x0002c7a2) popup_preview_fixed_window_g2_ParamLimits

0xc68f,	// (0x0002c7a2) popup_preview_fixed_window_g2

0x0002,

0xfb4d,	// (0x0002fc60) popup_preview_fixed_window_g_ParamLimits

0xfb4d,	// (0x0002fc60) popup_preview_fixed_window_g

0x70c5,	// (0x000271d8) aid_navi_side_left_pane_ParamLimits

0x70da,	// (0x000271ed) aid_navi_side_right_pane_ParamLimits

0x70f2,	// (0x00027205) navi_icon_pane_stacon_ParamLimits

0x7106,	// (0x00027219) navi_navi_pane_stacon_ParamLimits

0x70f2,	// (0x00027205) navi_text_pane_stacon_ParamLimits

0x19ef,	// (0x00021b02) main_text_info_pane

0xc866,	// (0x0002c979) listscroll_text_info_pane

0xc86e,	// (0x0002c981) list_text_info_pane_ParamLimits

0xc86e,	// (0x0002c981) list_text_info_pane

0xc87d,	// (0x0002c990) scroll_pane_cp24_ParamLimits

0xc87d,	// (0x0002c990) scroll_pane_cp24

0xc89b,	// (0x0002c9ae) list_text_info_pane_t1_ParamLimits

0xc89b,	// (0x0002c9ae) list_text_info_pane_t1

0x7a5e,	// (0x00027b71) popup_fast_swap2_window_ParamLimits

0x7a5e,	// (0x00027b71) popup_fast_swap2_window

0xc8cf,	// (0x0002c9e2) aid_size_cell_fast2

0x19ef,	// (0x00021b02) bg_popup_window_pane_cp17

0x8a71,	// (0x00028b84) heading_pane_cp2

0xc8d9,	// (0x0002c9ec) listscroll_fast2_pane

0xc8e1,	// (0x0002c9f4) grid_fast2_pane

0xc8eb,	// (0x0002c9fe) listscroll_fast2_pane_g1

0xc8f3,	// (0x0002ca06) listscroll_fast2_pane_g2

0x0001,

0xfbc9,	// (0x0002fcdc) listscroll_fast2_pane_g

0x2039,	// (0x0002214c) scroll_pane_cp26

0xc8fd,	// (0x0002ca10) cell_fast2_pane_ParamLimits

0xc8fd,	// (0x0002ca10) cell_fast2_pane

0xc912,	// (0x0002ca25) cell_fast2_pane_g1

0xc91b,	// (0x0002ca2e) cell_fast2_pane_g2

0xc924,	// (0x0002ca37) cell_fast2_pane_g3

0x0002,

0xfbce,	// (0x0002fce1) cell_fast2_pane_g

0x1d0e,	// (0x00021e21) grid_highlight_pane_cp9

0x1d23,	// (0x00021e36) main_eswt_pane_ParamLimits

0x1d23,	// (0x00021e36) main_eswt_pane

0xc892,	// (0x0002c9a5) list_single_text_info_pane

0xc92c,	// (0x0002ca3f) eswt_ctrl_button_pane

0xc92c,	// (0x0002ca3f) eswt_ctrl_canvas_pane

0xc934,	// (0x0002ca47) eswt_ctrl_combo_pane

0xc92c,	// (0x0002ca3f) eswt_ctrl_default_pane

0xc92c,	// (0x0002ca3f) eswt_ctrl_label_pane

0xc93c,	// (0x0002ca4f) eswt_ctrl_wait_pane

0xc944,	// (0x0002ca57) eswt_shell_pane

0x19ef,	// (0x00021b02) listscroll_eswt_app_pane

0xc964,	// (0x0002ca77) popup_eswt_tasktip_window_ParamLimits

0xc964,	// (0x0002ca77) popup_eswt_tasktip_window

0x85f6,	// (0x00028709) bg_popup_window_pane_cp18

0xc975,	// (0x0002ca88) eswt_control_pane_g1_ParamLimits

0xc975,	// (0x0002ca88) eswt_control_pane_g1

0xc982,	// (0x0002ca95) eswt_control_pane_g2_ParamLimits

0xc982,	// (0x0002ca95) eswt_control_pane_g2

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_ParamLimits

0xc98f,	// (0x0002caa2) eswt_control_pane_g3

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_ParamLimits

0xc99c,	// (0x0002caaf) eswt_control_pane_g4

0x0003,

0xfbd5,	// (0x0002fce8) eswt_control_pane_g_ParamLimits

0xfbd5,	// (0x0002fce8) eswt_control_pane_g

0x1e99,	// (0x00021fac) bg_button_pane_ParamLimits

0x1e99,	// (0x00021fac) bg_button_pane

0x1d23,	// (0x00021e36) common_borders_pane_copy2_ParamLimits

0x1d23,	// (0x00021e36) common_borders_pane_copy2

0xc9a9,	// (0x0002cabc) control_button_pane_g1_ParamLimits

0xc9a9,	// (0x0002cabc) control_button_pane_g1

0xc9b5,	// (0x0002cac8) control_button_pane_g2_ParamLimits

0xc9b5,	// (0x0002cac8) control_button_pane_g2

0xc9c1,	// (0x0002cad4) control_button_pane_g3_ParamLimits

0xc9c1,	// (0x0002cad4) control_button_pane_g3

0x0002,

0xfbde,	// (0x0002fcf1) control_button_pane_g_ParamLimits

0xfbde,	// (0x0002fcf1) control_button_pane_g

0xc9d5,	// (0x0002cae8) control_button_pane_t1

0xc9e3,	// (0x0002caf6) control_button_pane_t2

0x0001,

0xfbe5,	// (0x0002fcf8) control_button_pane_t

0x84f2,	// (0x00028605) bg_button_pane_g1

0x84fa,	// (0x0002860d) bg_button_pane_g2

0x8502,	// (0x00028615) bg_button_pane_g3

0x850a,	// (0x0002861d) bg_button_pane_g4

0x8512,	// (0x00028625) bg_button_pane_g5

0x851a,	// (0x0002862d) bg_button_pane_g6

0x8522,	// (0x00028635) bg_button_pane_g7

0x852a,	// (0x0002863d) bg_button_pane_g8

0x8532,	// (0x00028645) bg_button_pane_g9

0x0008,

0xf826,	// (0x0002f939) bg_button_pane_g

0xbfdd,	// (0x0002c0f0) common_borders_pane_ParamLimits

0xbfdd,	// (0x0002c0f0) common_borders_pane

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy1_ParamLimits

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy1

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy1_ParamLimits

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy1

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy1_ParamLimits

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy1

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy1_ParamLimits

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy1

0xc018,	// (0x0002c12b) bg_eswt_ctrl_canvas_pane_g1

0xbfdd,	// (0x0002c0f0) common_borders_pane_cp2_ParamLimits

0xbfdd,	// (0x0002c0f0) common_borders_pane_cp2

0xbfdd,	// (0x0002c0f0) common_borders_pane_cp3_ParamLimits

0xbfdd,	// (0x0002c0f0) common_borders_pane_cp3

0xc9f1,	// (0x0002cb04) separator_horizontal_pane

0xc9f9,	// (0x0002cb0c) separator_vertical_pane

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy2_ParamLimits

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy2

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy2_ParamLimits

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy2

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy2_ParamLimits

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy2

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy2_ParamLimits

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy2

0x19ef,	// (0x00021b02) common_borders_pane_cp4

0xca02,	// (0x0002cb15) separator_horizontal_pane_g1

0xca0b,	// (0x0002cb1e) separator_horizontal_pane_g2

0xca14,	// (0x0002cb27) separator_horizontal_pane_g3

0x0002,

0xfbea,	// (0x0002fcfd) separator_horizontal_pane_g

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy3_ParamLimits

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy3

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy3_ParamLimits

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy3

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy3_ParamLimits

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy3

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy3_ParamLimits

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy3

0x19ef,	// (0x00021b02) common_borders_pane_cp5

0xca1d,	// (0x0002cb30) separator_vertical_pane_g1

0xca26,	// (0x0002cb39) separator_vertical_pane_g2

0xca2f,	// (0x0002cb42) separator_vertical_pane_g3

0x0002,

0xfbf1,	// (0x0002fd04) separator_vertical_pane_g

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy4_ParamLimits

0xc975,	// (0x0002ca88) eswt_control_pane_g1_copy4

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy4_ParamLimits

0xc982,	// (0x0002ca95) eswt_control_pane_g2_copy4

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy4_ParamLimits

0xc98f,	// (0x0002caa2) eswt_control_pane_g3_copy4

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy4_ParamLimits

0xc99c,	// (0x0002caaf) eswt_control_pane_g4_copy4

0xca38,	// (0x0002cb4b) eswt_ctrl_combo_button_pane

0xca40,	// (0x0002cb53) eswt_ctrl_input_pane

0xca48,	// (0x0002cb5b) popup_choice_list_window_cp70

0xca50,	// (0x0002cb63) eswt_ctrl_input_pane_t1

0x19ef,	// (0x00021b02) input_focus_pane_cp70

0xbfdd,	// (0x0002c0f0) bg_button_pane_cp70_ParamLimits

0xbfdd,	// (0x0002c0f0) bg_button_pane_cp70

0xca5e,	// (0x0002cb71) eswt_ctrl_combo_button_pane_g1

0xca66,	// (0x0002cb79) wait_bar_pane_cp70

0x85f6,	// (0x00028709) bg_popup_window_pane_cp70_ParamLimits

0x85f6,	// (0x00028709) bg_popup_window_pane_cp70

0xca6e,	// (0x0002cb81) popup_eswt_tasktip_window_t1

0xca84,	// (0x0002cb97) wait_bar_pane_cp71_ParamLimits

0xca84,	// (0x0002cb97) wait_bar_pane_cp71

0xca90,	// (0x0002cba3) grid_eswt_app_pane

0x222c,	// (0x0002233f) scroll_pane_cp70

0xca99,	// (0x0002cbac) cell_eswt_app_pane_ParamLimits

0xca99,	// (0x0002cbac) cell_eswt_app_pane

0xcac9,	// (0x0002cbdc) cell_eswt_app_pane_g1_ParamLimits

0xcac9,	// (0x0002cbdc) cell_eswt_app_pane_g1

0xcaf8,	// (0x0002cc0b) cell_eswt_app_pane_g2_ParamLimits

0xcaf8,	// (0x0002cc0b) cell_eswt_app_pane_g2

0x0001,

0xfbf8,	// (0x0002fd0b) cell_eswt_app_pane_g_ParamLimits

0xfbf8,	// (0x0002fd0b) cell_eswt_app_pane_g

0xcb1c,	// (0x0002cc2f) cell_eswt_app_pane_t1_ParamLimits

0xcb1c,	// (0x0002cc2f) cell_eswt_app_pane_t1

0xcb4e,	// (0x0002cc61) grid_highlight_pane_cp70_ParamLimits

0xcb4e,	// (0x0002cc61) grid_highlight_pane_cp70

0x26b1,	// (0x000227c4) set_content_pane_g1

0x7877,	// (0x0002798a) status_small_volume_pane

0x94c3,	// (0x000295d6) status_small_volume_pane_g1

0x94cb,	// (0x000295de) volume_small2_pane

0x94d4,	// (0x000295e7) volume_small2_pane_g1

0x94dd,	// (0x000295f0) volume_small2_pane_g2

0x94e6,	// (0x000295f9) volume_small2_pane_g3

0x94ef,	// (0x00029602) volume_small2_pane_g4

0x94f8,	// (0x0002960b) volume_small2_pane_g5

0x9501,	// (0x00029614) volume_small2_pane_g6

0x950a,	// (0x0002961d) volume_small2_pane_g7

0x9513,	// (0x00029626) volume_small2_pane_g8

0x951c,	// (0x0002962f) volume_small2_pane_g9

0x9525,	// (0x00029638) volume_small2_pane_g10

0x0009,

0xfbfd,	// (0x0002fd10) volume_small2_pane_g

0xc3d0,	// (0x0002c4e3) fep_vkb_top_text_pane_g1_ParamLimits

0xc3eb,	// (0x0002c4fe) fep_vkb_top_text_pane_t1_ParamLimits

0xc69b,	// (0x0002c7ae) popup_preview_fixed_window_g3_ParamLimits

0xc69b,	// (0x0002c7ae) popup_preview_fixed_window_g3

0x7f0d,	// (0x00028020) popup_toolbar_trans_pane

0xadae,	// (0x0002aec1) aid_height_set_list_ParamLimits

0xadbf,	// (0x0002aed2) aid_size_parent_ParamLimits

0x2049,	// (0x0002215c) list_highlight_pane_cp2_ParamLimits

0x26b1,	// (0x000227c4) set_content_pane_g1_ParamLimits

0xafa5,	// (0x0002b0b8) list_single_image_pane_ParamLimits

0xafa5,	// (0x0002b0b8) list_single_image_pane

0xcb5a,	// (0x0002cc6d) aid_size_cell_image_ParamLimits

0xcb5a,	// (0x0002cc6d) aid_size_cell_image

0xcb67,	// (0x0002cc7a) grid_single_image_pane_ParamLimits

0xcb67,	// (0x0002cc7a) grid_single_image_pane

0x29a4,	// (0x00022ab7) list_single_image_pane_g1_ParamLimits

0x29a4,	// (0x00022ab7) list_single_image_pane_g1

0xcb73,	// (0x0002cc86) list_single_image_pane_g2_ParamLimits

0xcb73,	// (0x0002cc86) list_single_image_pane_g2

0x0001,

0xfc12,	// (0x0002fd25) list_single_image_pane_g_ParamLimits

0xfc12,	// (0x0002fd25) list_single_image_pane_g

0xcb87,	// (0x0002cc9a) list_single_image_pane_t1_ParamLimits

0xcb87,	// (0x0002cc9a) list_single_image_pane_t1

0xcb9d,	// (0x0002ccb0) cell_image_list_pane_ParamLimits

0xcb9d,	// (0x0002ccb0) cell_image_list_pane

0xcbb1,	// (0x0002ccc4) cell_image_list_pane_g1

0xcbba,	// (0x0002cccd) cell_image_list_pane_g2

0x0001,

0xfc17,	// (0x0002fd2a) cell_image_list_pane_g

0xcbc3,	// (0x0002ccd6) aid_size_cell_tb_trans_pane

0x1e99,	// (0x00021fac) bg_tb_trans_pane

0xcbd5,	// (0x0002cce8) grid_tb_trans_pane

0x84f2,	// (0x00028605) bg_tb_trans_pane_g1

0x84fa,	// (0x0002860d) bg_tb_trans_pane_g2

0x8502,	// (0x00028615) bg_tb_trans_pane_g3

0x850a,	// (0x0002861d) bg_tb_trans_pane_g4

0x8512,	// (0x00028625) bg_tb_trans_pane_g5

0x852a,	// (0x0002863d) bg_tb_trans_pane_g6

0x8532,	// (0x00028645) bg_tb_trans_pane_g7

0x851a,	// (0x0002862d) bg_tb_trans_pane_g8

0x8522,	// (0x00028635) bg_tb_trans_pane_g9

0x0008,

0xfc1c,	// (0x0002fd2f) bg_tb_trans_pane_g

0xcbe9,	// (0x0002ccfc) cell_toolbar_trans_pane_ParamLimits

0xcbe9,	// (0x0002ccfc) cell_toolbar_trans_pane

0xc018,	// (0x0002c12b) cell_toolbar_trans_pane_g1

0xbbea,	// (0x0002bcfd) list_form2_midp_pane_t1

0xbbf8,	// (0x0002bd0b) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x0002fbd8) list_form2_midp_pane_t

0xbc06,	// (0x0002bd19) scroll_pane_cp51_ParamLimits

0xbdc2,	// (0x0002bed5) form2_midp_wait_pane_g1

0xbdcb,	// (0x0002bede) form2_midp_wait_pane_g2

0xbdd4,	// (0x0002bee7) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x0002fbed) form2_midp_wait_pane_g

0x1a5f,	// (0x00021b72) list_highlight_pane_cp21_ParamLimits

0xbe1c,	// (0x0002bf2f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe2b,	// (0x0002bf3e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5dc9,	// (0x00025edc) list_single_2graphic_im_pane_ParamLimits

0x5dc9,	// (0x00025edc) list_single_2graphic_im_pane

0xcc0f,	// (0x0002cd22) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0f,	// (0x0002cd22) list_single_2graphic_im_pane_g1

0xcc20,	// (0x0002cd33) list_single_2graphic_im_pane_g2_ParamLimits

0xcc20,	// (0x0002cd33) list_single_2graphic_im_pane_g2

0xcc2c,	// (0x0002cd3f) list_single_2graphic_im_pane_g3_ParamLimits

0xcc2c,	// (0x0002cd3f) list_single_2graphic_im_pane_g3

0x0003,

0xfc2f,	// (0x0002fd42) list_single_2graphic_im_pane_g_ParamLimits

0xfc2f,	// (0x0002fd42) list_single_2graphic_im_pane_g

0xcc4c,	// (0x0002cd5f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc4c,	// (0x0002cd5f) list_single_2graphic_im_pane_t1

0xc6a7,	// (0x0002c7ba) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6a7,	// (0x0002c7ba) list_single_graphic_2heading_pane_fp

0x61a1,	// (0x000262b4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x61a1,	// (0x000262b4) list_single_graphic_2heading_pane_fp_g1

0xc6bd,	// (0x0002c7d0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6bd,	// (0x0002c7d0) list_single_graphic_2heading_pane_fp_g2

0x5698,	// (0x000257ab) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5698,	// (0x000257ab) list_single_graphic_2heading_pane_fp_g3

0x6176,	// (0x00026289) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6176,	// (0x00026289) list_single_graphic_2heading_pane_fp_g4

0xc6c9,	// (0x0002c7dc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0002c7dc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x0002fc70) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x0002fc70) list_single_graphic_2heading_pane_fp_g

0x6365,	// (0x00026478) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6365,	// (0x00026478) list_single_graphic_2heading_pane_fp_t1

0x61d9,	// (0x000262ec) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x61d9,	// (0x000262ec) list_single_graphic_2heading_pane_fp_t2

0x637b,	// (0x0002648e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x637b,	// (0x0002648e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc38,	// (0x0002fd4b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc38,	// (0x0002fd4b) list_single_graphic_2heading_pane_fp_t

0xc0a4,	// (0x0002c1b7) fep_hwr_write_pane_g5_ParamLimits

0xc0a4,	// (0x0002c1b7) fep_hwr_write_pane_g5

0xc0b0,	// (0x0002c1c3) fep_hwr_write_pane_g6_ParamLimits

0xc0b0,	// (0x0002c1c3) fep_hwr_write_pane_g6

0xc944,	// (0x0002ca57) eswt_shell_pane_ParamLimits

0x85f6,	// (0x00028709) bg_popup_window_pane_cp18_ParamLimits

0x8a71,	// (0x00028b84) heading_pane_cp70

0xca6e,	// (0x0002cb81) popup_eswt_tasktip_window_t1_ParamLimits

0x802c,	// (0x0002813f) aid_touch_tab_arrow_left

0x803b,	// (0x0002814e) aid_touch_tab_arrow_right

0x6919,	// (0x00026a2c) title_pane_g3_ParamLimits

0x6919,	// (0x00026a2c) title_pane_g3

0x1e30,	// (0x00021f43) set_value_pane_g1

0x7f0d,	// (0x00028020) popup_toolbar_trans_pane_ParamLimits

0xcbc3,	// (0x0002ccd6) aid_size_cell_tb_trans_pane_ParamLimits

0x1e99,	// (0x00021fac) bg_tb_trans_pane_ParamLimits

0xcbd5,	// (0x0002cce8) grid_tb_trans_pane_ParamLimits

0x1ba3,	// (0x00021cb6) cont_note_pane_ParamLimits

0x1ba3,	// (0x00021cb6) cont_note_pane

0x1d23,	// (0x00021e36) cont_snote2_single_text_pane_ParamLimits

0x1d23,	// (0x00021e36) cont_snote2_single_text_pane

0x1d23,	// (0x00021e36) cont_snote2_single_graphic_pane_ParamLimits

0x1d23,	// (0x00021e36) cont_snote2_single_graphic_pane

0x8c98,	// (0x00028dab) cont_note_wait_pane_ParamLimits

0x8c98,	// (0x00028dab) cont_note_wait_pane

0x8c98,	// (0x00028dab) cont_note_image_pane_ParamLimits

0x8c98,	// (0x00028dab) cont_note_image_pane

0xcc7d,	// (0x0002cd90) popup_note2_window_g1_ParamLimits

0xcc7d,	// (0x0002cd90) popup_note2_window_g1

0xccae,	// (0x0002cdc1) popup_note2_window_t1_ParamLimits

0xccae,	// (0x0002cdc1) popup_note2_window_t1

0xccf3,	// (0x0002ce06) popup_note2_window_t2_ParamLimits

0xccf3,	// (0x0002ce06) popup_note2_window_t2

0xcd38,	// (0x0002ce4b) popup_note2_window_t3_ParamLimits

0xcd38,	// (0x0002ce4b) popup_note2_window_t3

0xcd7d,	// (0x0002ce90) popup_note2_window_t4_ParamLimits

0xcd7d,	// (0x0002ce90) popup_note2_window_t4

0x1c27,	// (0x00021d3a) popup_note2_window_t5_ParamLimits

0x1c27,	// (0x00021d3a) popup_note2_window_t5

0x0004,

0xfc44,	// (0x0002fd57) popup_note2_window_t_ParamLimits

0xfc44,	// (0x0002fd57) popup_note2_window_t

0xcdac,	// (0x0002cebf) popup_note2_image_window_g1_ParamLimits

0xcdac,	// (0x0002cebf) popup_note2_image_window_g1

0xcdb8,	// (0x0002cecb) popup_note2_image_window_g2_ParamLimits

0xcdb8,	// (0x0002cecb) popup_note2_image_window_g2

0x0001,

0xfc4f,	// (0x0002fd62) popup_note2_image_window_g_ParamLimits

0xfc4f,	// (0x0002fd62) popup_note2_image_window_g

0xcdca,	// (0x0002cedd) popup_note2_image_window_t1_ParamLimits

0xcdca,	// (0x0002cedd) popup_note2_image_window_t1

0xcde2,	// (0x0002cef5) popup_note2_image_window_t2_ParamLimits

0xcde2,	// (0x0002cef5) popup_note2_image_window_t2

0xcdfa,	// (0x0002cf0d) popup_note2_image_window_t3_ParamLimits

0xcdfa,	// (0x0002cf0d) popup_note2_image_window_t3

0x0002,

0xfc54,	// (0x0002fd67) popup_note2_image_window_t_ParamLimits

0xfc54,	// (0x0002fd67) popup_note2_image_window_t

0x8ca6,	// (0x00028db9) popup_note2_wait_window_g1_ParamLimits

0x8ca6,	// (0x00028db9) popup_note2_wait_window_g1

0x8cb2,	// (0x00028dc5) popup_note2_wait_window_g2_ParamLimits

0x8cb2,	// (0x00028dc5) popup_note2_wait_window_g2

0x8cbe,	// (0x00028dd1) popup_note2_wait_window_g3_ParamLimits

0x8cbe,	// (0x00028dd1) popup_note2_wait_window_g3

0x0002,

0xf808,	// (0x0002f91b) popup_note2_wait_window_g_ParamLimits

0xf808,	// (0x0002f91b) popup_note2_wait_window_g

0xce16,	// (0x0002cf29) popup_note2_wait_window_t1_ParamLimits

0xce16,	// (0x0002cf29) popup_note2_wait_window_t1

0xce34,	// (0x0002cf47) popup_note2_wait_window_t2_ParamLimits

0xce34,	// (0x0002cf47) popup_note2_wait_window_t2

0xce52,	// (0x0002cf65) popup_note2_wait_window_t3_ParamLimits

0xce52,	// (0x0002cf65) popup_note2_wait_window_t3

0xce64,	// (0x0002cf77) popup_note2_wait_window_t4_ParamLimits

0xce64,	// (0x0002cf77) popup_note2_wait_window_t4

0x0003,

0xfc5b,	// (0x0002fd6e) popup_note2_wait_window_t_ParamLimits

0xfc5b,	// (0x0002fd6e) popup_note2_wait_window_t

0xce76,	// (0x0002cf89) wait_bar2_pane_ParamLimits

0xce76,	// (0x0002cf89) wait_bar2_pane

0xce8e,	// (0x0002cfa1) popup_snote2_single_text_window_g1_ParamLimits

0xce8e,	// (0x0002cfa1) popup_snote2_single_text_window_g1

0xceb6,	// (0x0002cfc9) popup_snote2_single_text_window_t1_ParamLimits

0xceb6,	// (0x0002cfc9) popup_snote2_single_text_window_t1

0xcf02,	// (0x0002d015) popup_snote2_single_text_window_t2_ParamLimits

0xcf02,	// (0x0002d015) popup_snote2_single_text_window_t2

0xcf4e,	// (0x0002d061) popup_snote2_single_text_window_t3_ParamLimits

0xcf4e,	// (0x0002d061) popup_snote2_single_text_window_t3

0xcf8f,	// (0x0002d0a2) popup_snote2_single_text_window_t4_ParamLimits

0xcf8f,	// (0x0002d0a2) popup_snote2_single_text_window_t4

0xcfc5,	// (0x0002d0d8) popup_snote2_single_text_window_t5_ParamLimits

0xcfc5,	// (0x0002d0d8) popup_snote2_single_text_window_t5

0x0004,

0xfc64,	// (0x0002fd77) popup_snote2_single_text_window_t_ParamLimits

0xfc64,	// (0x0002fd77) popup_snote2_single_text_window_t

0xcff0,	// (0x0002d103) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff0,	// (0x0002d103) popup_snote2_single_graphic_window_g1

0xd018,	// (0x0002d12b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd018,	// (0x0002d12b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6f,	// (0x0002fd82) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6f,	// (0x0002fd82) popup_snote2_single_graphic_window_g

0xd040,	// (0x0002d153) popup_snote2_single_graphic_window_t1_ParamLimits

0xd040,	// (0x0002d153) popup_snote2_single_graphic_window_t1

0xd08c,	// (0x0002d19f) popup_snote2_single_graphic_window_t2_ParamLimits

0xd08c,	// (0x0002d19f) popup_snote2_single_graphic_window_t2

0xcf4e,	// (0x0002d061) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf4e,	// (0x0002d061) popup_snote2_single_graphic_window_t3

0xcf8f,	// (0x0002d0a2) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf8f,	// (0x0002d0a2) popup_snote2_single_graphic_window_t4

0xcfc5,	// (0x0002d0d8) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfc5,	// (0x0002d0d8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc74,	// (0x0002fd87) popup_snote2_single_graphic_window_t_ParamLimits

0xfc74,	// (0x0002fd87) popup_snote2_single_graphic_window_t

0xbac3,	// (0x0002bbd6) clock_nsta_pane_cp2_t1

0xbac3,	// (0x0002bbd6) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x0002fbae) clock_nsta_pane_cp2_t

0x59bd,	// (0x00025ad0) form_field_data_wide_pane_g1_ParamLimits

0x1ec4,	// (0x00021fd7) form_field_data_wide_pane_g2_ParamLimits

0x1ec4,	// (0x00021fd7) form_field_data_wide_pane_g2

0x1ed0,	// (0x00021fe3) form_field_data_wide_pane_g3_ParamLimits

0x1ed0,	// (0x00021fe3) form_field_data_wide_pane_g3

0x0002,

0xf640,	// (0x0002f753) form_field_data_wide_pane_g_ParamLimits

0xf640,	// (0x0002f753) form_field_data_wide_pane_g

0xb99f,	// (0x0002bab2) grid_touch_3_pane_ParamLimits

0xb99f,	// (0x0002bab2) grid_touch_3_pane

0xd0d8,	// (0x0002d1eb) cell_touch_3_pane_ParamLimits

0xd0d8,	// (0x0002d1eb) cell_touch_3_pane

0xc018,	// (0x0002c12b) cell_touch_3_pane_g1

0xc018,	// (0x0002c12b) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x0002fc33) cell_touch_3_pane_g

0x1c59,	// (0x00021d6c) cont_query_data_pane

0x1c61,	// (0x00021d74) cont_query_data_pane_cp1

0xd106,	// (0x0002d219) button_value_adjust_pane_cp7

0xd10e,	// (0x0002d221) query_popup_pane_cp3

0x23ba,	// (0x000224cd) bg_popup_sub_pane_cp22_ParamLimits

0x73d3,	// (0x000274e6) navi_navi_volume_pane_cp2

0x73eb,	// (0x000274fe) popup_side_volume_key_window_g2

0x73f7,	// (0x0002750a) popup_side_volume_key_window_g3

0x0002,

0xf6d6,	// (0x0002f7e9) popup_side_volume_key_window_g

0x7411,	// (0x00027524) popup_side_volume_key_window_t2

0x0001,

0xf6dd,	// (0x0002f7f0) popup_side_volume_key_window_t

0x7635,	// (0x00027748) popup_side_volume_key_window_ParamLimits

0x568c,	// (0x0002579f) list_double_graphic_pane_g4_ParamLimits

0x568c,	// (0x0002579f) list_double_graphic_pane_g4

0x5e0e,	// (0x00025f21) list_single_2heading_msg_pane_ParamLimits

0x5e0e,	// (0x00025f21) list_single_2heading_msg_pane

0x639b,	// (0x000264ae) list_single_2heading_msg_pane_g1_ParamLimits

0x639b,	// (0x000264ae) list_single_2heading_msg_pane_g1

0x5505,	// (0x00025618) list_single_2heading_msg_pane_g2_ParamLimits

0x5505,	// (0x00025618) list_single_2heading_msg_pane_g2

0x5ef7,	// (0x0002600a) list_single_2heading_msg_pane_g3_ParamLimits

0x5ef7,	// (0x0002600a) list_single_2heading_msg_pane_g3

0x63a7,	// (0x000264ba) list_single_2heading_msg_pane_g4_ParamLimits

0x63a7,	// (0x000264ba) list_single_2heading_msg_pane_g4

0x0003,

0xfc7f,	// (0x0002fd92) list_single_2heading_msg_pane_g_ParamLimits

0xfc7f,	// (0x0002fd92) list_single_2heading_msg_pane_g

0x63bf,	// (0x000264d2) list_single_2heading_msg_pane_t1_ParamLimits

0x63bf,	// (0x000264d2) list_single_2heading_msg_pane_t1

0x63e7,	// (0x000264fa) list_single_2heading_msg_pane_t2_ParamLimits

0x63e7,	// (0x000264fa) list_single_2heading_msg_pane_t2

0x641b,	// (0x0002652e) list_single_2heading_msg_pane_t3_ParamLimits

0x641b,	// (0x0002652e) list_single_2heading_msg_pane_t3

0x6454,	// (0x00026567) list_single_2heading_msg_pane_t4_ParamLimits

0x6454,	// (0x00026567) list_single_2heading_msg_pane_t4

0x0003,

0xfc88,	// (0x0002fd9b) list_single_2heading_msg_pane_t_ParamLimits

0xfc88,	// (0x0002fd9b) list_single_2heading_msg_pane_t

0x1a0d,	// (0x00021b20) title_pane_g4_ParamLimits

0x1a0d,	// (0x00021b20) title_pane_g4

0x7016,	// (0x00027129) title_pane_stacon_g3_ParamLimits

0x7016,	// (0x00027129) title_pane_stacon_g3

0xcc40,	// (0x0002cd53) list_single_2graphic_im_pane_g4_ParamLimits

0xcc40,	// (0x0002cd53) list_single_2graphic_im_pane_g4

0xaae1,	// (0x0002abf4) popup_side_volume_key_window_cp

0xb2f5,	// (0x0002b408) main_idle_act2_pane_t1

0x853a,	// (0x0002864d) toolbar_button_pane_g10

0x6ed4,	// (0x00026fe7) popup_toolbar_window_cp1

0xbab4,	// (0x0002bbc7) clock_nsta_pane_cp_t1

0xbab4,	// (0x0002bbc7) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x0002fba9) clock_nsta_pane_cp_t

0x73d3,	// (0x000274e6) navi_navi_volume_pane_cp2_ParamLimits

0x73df,	// (0x000274f2) popup_side_volume_key_window_g1_ParamLimits

0x73eb,	// (0x000274fe) popup_side_volume_key_window_g2_ParamLimits

0x73f7,	// (0x0002750a) popup_side_volume_key_window_g3_ParamLimits

0xf6d6,	// (0x0002f7e9) popup_side_volume_key_window_g_ParamLimits

0x91d3,	// (0x000292e6) fep_hwr_aid_pane

0x19bf,	// (0x00021ad2) bg_fep_hwr_top_pane_g4_ParamLimits

0xc074,	// (0x0002c187) fep_hwr_top_pane_g1_ParamLimits

0xc086,	// (0x0002c199) fep_hwr_top_pane_g2_ParamLimits

0x928c,	// (0x0002939f) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x0002fbfe) fep_hwr_top_pane_g_ParamLimits

0x92a1,	// (0x000293b4) fep_hwr_top_text_pane_ParamLimits

0xa8a4,	// (0x0002a9b7) aid_touch_tab_arrow_arrow_2

0xa8ad,	// (0x0002a9c0) aid_touch_tab_arrow_left_2

0x91e7,	// (0x000292fa) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x921e,	// (0x00029331) fep_hwr_prediction_pane

0xc1df,	// (0x0002c2f2) fep_vkb_prediction_pane

0xc2dc,	// (0x0002c3ef) fep_vkb_side_pane_g3_ParamLimits

0xc2dc,	// (0x0002c3ef) fep_vkb_side_pane_g3

0xc288,	// (0x0002c39b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc71d,	// (0x0002c830) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc72a,	// (0x0002c83d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb95,	// (0x0002fca8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd133,	// (0x0002d246) fep_hwr_prediction_pane_g1

0x952e,	// (0x00029641) fep_hwr_prediction_pane_g2

0x9536,	// (0x00029649) fep_hwr_prediction_pane_g3

0x953e,	// (0x00029651) fep_hwr_prediction_pane_g4

0x0003,

0xfc91,	// (0x0002fda4) fep_hwr_prediction_pane_g

0xd133,	// (0x0002d246) fep_vkb_prediction_pane_g1

0xd13d,	// (0x0002d250) fep_vkb_prediction_pane_g2

0xd145,	// (0x0002d258) fep_vkb_prediction_pane_g3

0xd14d,	// (0x0002d260) fep_vkb_prediction_pane_g4

0x0003,

0xfc9a,	// (0x0002fdad) fep_vkb_prediction_pane_g

0x900b,	// (0x0002911e) slider_set_pane_g3

0x901f,	// (0x00029132) slider_set_pane_g4

0x9037,	// (0x0002914a) slider_set_pane_g5

0x900b,	// (0x0002911e) slider_set_pane_g6

0x904d,	// (0x00029160) slider_set_pane_g7

0xaf20,	// (0x0002b033) slider_form_pane_g3

0xaf29,	// (0x0002b03c) slider_form_pane_g4

0xaf31,	// (0x0002b044) slider_form_pane_g5

0xaf20,	// (0x0002b033) slider_form_pane_g6

0xaf39,	// (0x0002b04c) slider_form_pane_g7

0xb5a1,	// (0x0002b6b4) slider_set_pane_vc_g3

0xb5aa,	// (0x0002b6bd) slider_set_pane_vc_g4

0xb5b3,	// (0x0002b6c6) slider_set_pane_vc_g5

0xb5a1,	// (0x0002b6b4) slider_set_pane_vc_g6

0xb5bc,	// (0x0002b6cf) slider_set_pane_vc_g7

0xb772,	// (0x0002b885) slider_form_pane_vc_g1

0xb77b,	// (0x0002b88e) slider_form_pane_vc_g2

0xb784,	// (0x0002b897) slider_form_pane_vc_g3

0xb772,	// (0x0002b885) slider_form_pane_vc_g4

0xb78d,	// (0x0002b8a0) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x0002fb7b) slider_form_pane_vc_g

0x19ef,	// (0x00021b02) main_idle_act3_pane

0xd155,	// (0x0002d268) ai3_links_pane

0xd15e,	// (0x0002d271) popup_ai3_data_window_ParamLimits

0xd15e,	// (0x0002d271) popup_ai3_data_window

0x19ef,	// (0x00021b02) grid_ai3_links_pane

0xd176,	// (0x0002d289) cell_ai3_links_pane_ParamLimits

0xd176,	// (0x0002d289) cell_ai3_links_pane

0xd18e,	// (0x0002d2a1) bg_popup_sub_pane_cp11

0xd19b,	// (0x0002d2ae) cell_ai3_links_pane_g1

0x19ef,	// (0x00021b02) bg_popup_sub_pane_cp12

0xd1c0,	// (0x0002d2d3) heading_ai3_data_pane

0xd1c8,	// (0x0002d2db) list_ai3_gene_pane

0xd1d4,	// (0x0002d2e7) popup_ai3_data_window_g1

0xd1dc,	// (0x0002d2ef) heading_ai3_data_pane_g1

0xd1e4,	// (0x0002d2f7) heading_ai3_data_pane_t1

0xd1f2,	// (0x0002d305) list_double_ai3_gene_pane_ParamLimits

0xd1f2,	// (0x0002d305) list_double_ai3_gene_pane

0xd1ff,	// (0x0002d312) list_single_ai3_gene_pane_ParamLimits

0xd1ff,	// (0x0002d312) list_single_ai3_gene_pane

0xbfdd,	// (0x0002c0f0) list_highlight_pane_cp7_ParamLimits

0xbfdd,	// (0x0002c0f0) list_highlight_pane_cp7

0xd20c,	// (0x0002d31f) list_single_a13_gene_pane_t1_ParamLimits

0xd20c,	// (0x0002d31f) list_single_a13_gene_pane_t1

0xd223,	// (0x0002d336) list_single_ai3_gene_pane_g1

0xd22c,	// (0x0002d33f) list_single_ai3_gene_pane_g2

0x0001,

0xfca3,	// (0x0002fdb6) list_single_ai3_gene_pane_g

0xd234,	// (0x0002d347) list_double_ai3_gene_pane_g1_ParamLimits

0xd234,	// (0x0002d347) list_double_ai3_gene_pane_g1

0xd240,	// (0x0002d353) list_double_ai3_gene_pane_t1_ParamLimits

0xd240,	// (0x0002d353) list_double_ai3_gene_pane_t1

0xd25c,	// (0x0002d36f) list_double_ai3_gene_pane_t2_ParamLimits

0xd25c,	// (0x0002d36f) list_double_ai3_gene_pane_t2

0xd271,	// (0x0002d384) list_double_ai3_gene_pane_t3_ParamLimits

0xd271,	// (0x0002d384) list_double_ai3_gene_pane_t3

0x0002,

0xfca8,	// (0x0002fdbb) list_double_ai3_gene_pane_t_ParamLimits

0xfca8,	// (0x0002fdbb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6391,	// (0x000264a4) aid_size_min_col_2

0xd11f,	// (0x0002d232) aid_size_min_msg_ParamLimits

0xd11f,	// (0x0002d232) aid_size_min_msg

0xc3dc,	// (0x0002c4ef) fep_vkb_top_text_pane_g2_ParamLimits

0xc3dc,	// (0x0002c4ef) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x0002fc2e) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x0002fc2e) fep_vkb_top_text_pane_g

0x19ef,	// (0x00021b02) main_hc_apps_shell_pane

0xd28e,	// (0x0002d3a1) grid_hc_apps_pane_ParamLimits

0xd28e,	// (0x0002d3a1) grid_hc_apps_pane

0xd2a0,	// (0x0002d3b3) list_hc_apps_pane

0xd2a8,	// (0x0002d3bb) scroll_pane_cp37_ParamLimits

0xd2a8,	// (0x0002d3bb) scroll_pane_cp37

0xd2b4,	// (0x0002d3c7) cell_hc_apps_pane_ParamLimits

0xd2b4,	// (0x0002d3c7) cell_hc_apps_pane

0xd362,	// (0x0002d475) cell_hc_apps_pane_g1_ParamLimits

0xd362,	// (0x0002d475) cell_hc_apps_pane_g1

0xd392,	// (0x0002d4a5) cell_hc_apps_pane_g2_ParamLimits

0xd392,	// (0x0002d4a5) cell_hc_apps_pane_g2

0xd3ae,	// (0x0002d4c1) cell_hc_apps_pane_g3_ParamLimits

0xd3ae,	// (0x0002d4c1) cell_hc_apps_pane_g3

0x0002,

0xfcaf,	// (0x0002fdc2) cell_hc_apps_pane_g_ParamLimits

0xfcaf,	// (0x0002fdc2) cell_hc_apps_pane_g

0xd3d0,	// (0x0002d4e3) cell_hc_apps_pane_t1_ParamLimits

0xd3d0,	// (0x0002d4e3) cell_hc_apps_pane_t1

0x1ba3,	// (0x00021cb6) grid_highlight_pane_cp10_ParamLimits

0x1ba3,	// (0x00021cb6) grid_highlight_pane_cp10

0xd410,	// (0x0002d523) list_single_hc_apps_pane_ParamLimits

0xd410,	// (0x0002d523) list_single_hc_apps_pane

0xd473,	// (0x0002d586) list_single_hc_apps_pane_g1

0x6479,	// (0x0002658c) list_single_hc_apps_pane_g2

0x0001,

0xfcb6,	// (0x0002fdc9) list_single_hc_apps_pane_g

0x6492,	// (0x000265a5) list_single_hc_apps_pane_g2_copy1

0x64ae,	// (0x000265c1) list_single_hc_apps_pane_t1

0x1a5f,	// (0x00021b72) bg_set_opt_pane_cp_ParamLimits

0x69c9,	// (0x00026adc) setting_slider_pane_t1_ParamLimits

0x69e2,	// (0x00026af5) setting_slider_pane_t2_ParamLimits

0x69fc,	// (0x00026b0f) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0002f64a) setting_slider_pane_t_ParamLimits

0x6a14,	// (0x00026b27) slider_set_pane_ParamLimits

0x78f5,	// (0x00027a08) control_pane_g5_ParamLimits

0x78f5,	// (0x00027a08) control_pane_g5

0xad73,	// (0x0002ae86) slider_set_pane_g1_ParamLimits

0x8fff,	// (0x00029112) slider_set_pane_g2_ParamLimits

0x900b,	// (0x0002911e) slider_set_pane_g3_ParamLimits

0x901f,	// (0x00029132) slider_set_pane_g4_ParamLimits

0x9037,	// (0x0002914a) slider_set_pane_g5_ParamLimits

0x900b,	// (0x0002911e) slider_set_pane_g6_ParamLimits

0x904d,	// (0x00029160) slider_set_pane_g7_ParamLimits

0xf924,	// (0x0002fa37) slider_set_pane_g_ParamLimits

0x265c,	// (0x0002276f) navi_icon_text_pane_ParamLimits

0x7fed,	// (0x00028100) aid_fill_nsta_2_ParamLimits

0x802c,	// (0x0002813f) aid_touch_tab_arrow_left_ParamLimits

0x803b,	// (0x0002814e) aid_touch_tab_arrow_right_ParamLimits

0x80a8,	// (0x000281bb) clock_nsta_pane_ParamLimits

0xa886,	// (0x0002a999) navi_icon_pane_g1_ParamLimits

0xa892,	// (0x0002a9a5) navi_text_pane_t1_ParamLimits

0xbbc4,	// (0x0002bcd7) navi_icon_text_pane_g1_ParamLimits

0xbbd0,	// (0x0002bce3) navi_icon_text_pane_t1_ParamLimits

0xd473,	// (0x0002d586) list_single_hc_apps_pane_g1_ParamLimits

0x6479,	// (0x0002658c) list_single_hc_apps_pane_g2_ParamLimits

0xfcb6,	// (0x0002fdc9) list_single_hc_apps_pane_g_ParamLimits

0x6492,	// (0x000265a5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x64ae,	// (0x000265c1) list_single_hc_apps_pane_t1_ParamLimits

0x680d,	// (0x00026920) popup_toolbar2_fixed_window_ParamLimits

0x680d,	// (0x00026920) popup_toolbar2_fixed_window

0x7f03,	// (0x00028016) popup_toolbar2_float_window

0x19ef,	// (0x00021b02) bg_popup_sub_pane_cp27

0xd48c,	// (0x0002d59f) grid_toolbar2_float_pane

0x19ef,	// (0x00021b02) bg_popup_sub_pane_cp26

0xd48c,	// (0x0002d59f) grid_toolbar2_fixed_pane

0xd494,	// (0x0002d5a7) cell_toolbar2_fixed_pane_ParamLimits

0xd494,	// (0x0002d5a7) cell_toolbar2_fixed_pane

0xd4a4,	// (0x0002d5b7) cell_toolbar2_fixed_pane_g1

0x8442,	// (0x00028555) toolbar2_fixed_button_pane

0x84f2,	// (0x00028605) toolbar2_fixed_button_pane_g1

0x84fa,	// (0x0002860d) toolbar2_fixed_button_pane_g2

0x8502,	// (0x00028615) toolbar2_fixed_button_pane_g3

0x850a,	// (0x0002861d) toolbar2_fixed_button_pane_g4

0x8512,	// (0x00028625) toolbar2_fixed_button_pane_g5

0x851a,	// (0x0002862d) toolbar2_fixed_button_pane_g6

0x8522,	// (0x00028635) toolbar2_fixed_button_pane_g7

0x852a,	// (0x0002863d) toolbar2_fixed_button_pane_g8

0x8532,	// (0x00028645) toolbar2_fixed_button_pane_g9

0x0008,

0xf826,	// (0x0002f939) toolbar2_fixed_button_pane_g

0xd4ad,	// (0x0002d5c0) cell_toolbar2_float_pane_ParamLimits

0xd4ad,	// (0x0002d5c0) cell_toolbar2_float_pane

0xd4be,	// (0x0002d5d1) cell_toolbar2_float_pane_g1

0x8442,	// (0x00028555) toolbar2_fixed_button_pane_cp

0xc146,	// (0x0002c259) fep_vkb_accented_list_pane_ParamLimits

0xc146,	// (0x0002c259) fep_vkb_accented_list_pane

0x93ef,	// (0x00029502) bg_popup_fep_shadow_pane_g9

0x27af,	// (0x000228c2) bg_popup_fep_shadow_pane_cp3

0x2020,	// (0x00022133) list_accented_list_pane

0xd4c7,	// (0x0002d5da) list_single_accented_list_pane_ParamLimits

0xd4c7,	// (0x0002d5da) list_single_accented_list_pane

0x27af,	// (0x000228c2) list_highlight_pane_cp10

0xd4d8,	// (0x0002d5eb) list_single_accented_list_pane_t1

0x7e53,	// (0x00027f66) popup_slider_window_ParamLimits

0x7e53,	// (0x00027f66) popup_slider_window

0xd116,	// (0x0002d229) aid_indentation_list_msg

0xd596,	// (0x0002d6a9) bg_popup_window_pane_cp19

0xd5fe,	// (0x0002d711) popup_slider_window_g1

0xd61a,	// (0x0002d72d) popup_slider_window_g2

0xd636,	// (0x0002d749) popup_slider_window_g3

0x0005,

0xfcbb,	// (0x0002fdce) popup_slider_window_g

0xd69c,	// (0x0002d7af) popup_slider_window_t1

0xd710,	// (0x0002d823) small_volume_slider_vertical_pane

0xc018,	// (0x0002c12b) small_volume_slider_vertical_pane_g1

0xc018,	// (0x0002c12b) small_volume_slider_vertical_pane_g2

0xd72c,	// (0x0002d83f) small_volume_slider_vertical_pane_g3

0x0002,

0xfccd,	// (0x0002fde0) small_volume_slider_vertical_pane_g

0x65d7,	// (0x000266ea) area_side_right_pane_ParamLimits

0x65d7,	// (0x000266ea) area_side_right_pane

0x9546,	// (0x00029659) aid_size_side_button_ParamLimits

0x9546,	// (0x00029659) aid_size_side_button

0x955a,	// (0x0002966d) grid_sctrl_middle_pane_ParamLimits

0x955a,	// (0x0002966d) grid_sctrl_middle_pane

0x9579,	// (0x0002968c) sctrl_sk_bottom_pane

0x958a,	// (0x0002969d) sctrl_sk_top_pane

0x959c,	// (0x000296af) aid_touch_sctrl_top

0x1ba3,	// (0x00021cb6) bg_sctrl_sk_pane_ParamLimits

0x1ba3,	// (0x00021cb6) bg_sctrl_sk_pane

0x95a9,	// (0x000296bc) sctrl_sk_top_pane_g1

0x95b6,	// (0x000296c9) sctrl_sk_top_pane_t1

0x959c,	// (0x000296af) aid_touch_sctrl_bottom

0x1ba3,	// (0x00021cb6) bg_sctrl_sk_pane_cp_ParamLimits

0x1ba3,	// (0x00021cb6) bg_sctrl_sk_pane_cp

0x95d1,	// (0x000296e4) sctrl_sk_bottom_pane_g1

0x95b6,	// (0x000296c9) sctrl_sk_bottom_pane_t1

0x95da,	// (0x000296ed) cell_sctrl_middle_pane_ParamLimits

0x95da,	// (0x000296ed) cell_sctrl_middle_pane

0x95f5,	// (0x00029708) aid_touch_sctrl_middle_ParamLimits

0x95f5,	// (0x00029708) aid_touch_sctrl_middle

0x1e99,	// (0x00021fac) bg_sctrl_middle_pane_ParamLimits

0x1e99,	// (0x00021fac) bg_sctrl_middle_pane

0xc288,	// (0x0002c39b) cell_sctrl_middle_pane_g1_ParamLimits

0xc288,	// (0x0002c39b) cell_sctrl_middle_pane_g1

0x9607,	// (0x0002971a) cell_sctrl_middle_pane_g2_ParamLimits

0x9607,	// (0x0002971a) cell_sctrl_middle_pane_g2

0x0001,

0xfcd9,	// (0x0002fdec) cell_sctrl_middle_pane_g_ParamLimits

0xfcd9,	// (0x0002fdec) cell_sctrl_middle_pane_g

0x84f2,	// (0x00028605) bg_sctrl_middle_pane_g1

0x84fa,	// (0x0002860d) bg_sctrl_middle_pane_g2

0x8502,	// (0x00028615) bg_sctrl_middle_pane_g3

0x850a,	// (0x0002861d) bg_sctrl_middle_pane_g4

0x8512,	// (0x00028625) bg_sctrl_middle_pane_g5

0x851a,	// (0x0002862d) bg_sctrl_middle_pane_g6

0x8522,	// (0x00028635) bg_sctrl_middle_pane_g7

0x852a,	// (0x0002863d) bg_sctrl_middle_pane_g8

0x0007,

0xfcde,	// (0x0002fdf1) bg_sctrl_middle_pane_g

0x8532,	// (0x00028645) bg_sctrl_middle_pane_g8_copy1

0x84f2,	// (0x00028605) bg_sctrl_sk_pane_g1

0x84fa,	// (0x0002860d) bg_sctrl_sk_pane_g2

0x8502,	// (0x00028615) bg_sctrl_sk_pane_g3

0x0008,

0xf826,	// (0x0002f939) bg_sctrl_sk_pane_g

0x1d71,	// (0x00021e84) aid_size_touch_scroll_bar

0x850a,	// (0x0002861d) bg_sctrl_sk_pane_g4

0x8512,	// (0x00028625) bg_sctrl_sk_pane_g5

0x851a,	// (0x0002862d) bg_sctrl_sk_pane_g6

0x8522,	// (0x00028635) bg_sctrl_sk_pane_g7

0x852a,	// (0x0002863d) bg_sctrl_sk_pane_g8

0x8532,	// (0x00028645) bg_sctrl_sk_pane_g9

0x7abc,	// (0x00027bcf) popup_fep_china_hwr2_fs_candidate_window

0x7ac6,	// (0x00027bd9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7ac6,	// (0x00027bd9) popup_fep_china_hwr2_fs_control_window

0xc288,	// (0x0002c39b) sctrl_sk_top_pane_g2

0x0001,

0xfcd4,	// (0x0002fde7) sctrl_sk_top_pane_g

0xd735,	// (0x0002d848) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd735,	// (0x0002d848) aid_fep_china_hwr2_fs_cell

0xd747,	// (0x0002d85a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd747,	// (0x0002d85a) bg_popup_fep_shadow_pane_cp4

0xd75e,	// (0x0002d871) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd75e,	// (0x0002d871) bg_popup_fep_shadow_pane_cp5

0xd770,	// (0x0002d883) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd770,	// (0x0002d883) popup_fep_china_hwr2_fs_control_bar_grid

0xd780,	// (0x0002d893) popup_fep_china_hwr2_fs_control_funtion_grid

0xd788,	// (0x0002d89b) aid_fep_china_hwr2_fs_candi_cell

0x19ef,	// (0x00021b02) bg_popup_fep_shadow_pane_cp6

0xd792,	// (0x0002d8a5) popup_fep_china_hwr2_fs_candidate_grid

0xd79c,	// (0x0002d8af) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd79c,	// (0x0002d8af) cell_fep_china_hwr2_fs_funtion_grid

0xc018,	// (0x0002c12b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7b4,	// (0x0002d8c7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7b4,	// (0x0002d8c7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7cb,	// (0x0002d8de) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7cb,	// (0x0002d8de) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcef,	// (0x0002fe02) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcef,	// (0x0002fe02) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7e1,	// (0x0002d8f4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7e1,	// (0x0002d8f4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f6,	// (0x0002d909) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f6,	// (0x0002d909) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf4,	// (0x0002fe07) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf4,	// (0x0002fe07) cell_fep_china_hwr2_fs_funtion_grid_t

0xd812,	// (0x0002d925) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd81a,	// (0x0002d92d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd822,	// (0x0002d935) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf9,	// (0x0002fe0c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd82a,	// (0x0002d93d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd82a,	// (0x0002d93d) cell_fep_china_hwr2_fs_candidate_grid

0xd843,	// (0x0002d956) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd84b,	// (0x0002d95e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc018,	// (0x0002c12b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc018,	// (0x0002c12b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x0002fc33) cell_fep_china_hwr2_fs_candidate_grid_g

0xd853,	// (0x0002d966) cell_fep_china_hwr2_fs_candidate_grid_t1

0x80bb,	// (0x000281ce) clock_nsta_pane_cp_24_ParamLimits

0x80bb,	// (0x000281ce) clock_nsta_pane_cp_24

0x8139,	// (0x0002824c) indicator_nsta_pane_cp_24_ParamLimits

0x8139,	// (0x0002824c) indicator_nsta_pane_cp_24

0xa702,	// (0x0002a815) heading_pane_g1

0x0001,

0xf88b,	// (0x0002f99e) heading_pane_g

0xb13e,	// (0x0002b251) grid_sct_catagory_button_pane

0xb16e,	// (0x0002b281) scroll_pane_cp5_ParamLimits

0xbc12,	// (0x0002bd25) button_value_adjust_pane_cp5_ParamLimits

0xbc12,	// (0x0002bd25) button_value_adjust_pane_cp5

0xbcf1,	// (0x0002be04) form2_midp_time_pane_ParamLimits

0xd861,	// (0x0002d974) cell_sct_catagory_button_pane_ParamLimits

0xd861,	// (0x0002d974) cell_sct_catagory_button_pane

0xbfdd,	// (0x0002c0f0) bg_button_pane_cp01_ParamLimits

0xbfdd,	// (0x0002c0f0) bg_button_pane_cp01

0xc018,	// (0x0002c12b) cell_sct_catagory_button_pane_g1

0x7e92,	// (0x00027fa5) popup_tb_extension_window

0xd873,	// (0x0002d986) aid_size_cell_ext_ParamLimits

0xd873,	// (0x0002d986) aid_size_cell_ext

0x1ba3,	// (0x00021cb6) bg_tb_trans_pane_cp1_ParamLimits

0x1ba3,	// (0x00021cb6) bg_tb_trans_pane_cp1

0xd893,	// (0x0002d9a6) grid_tb_ext_pane_ParamLimits

0xd893,	// (0x0002d9a6) grid_tb_ext_pane

0xd8c3,	// (0x0002d9d6) cell_tb_ext_pane_ParamLimits

0xd8c3,	// (0x0002d9d6) cell_tb_ext_pane

0xd8da,	// (0x0002d9ed) cell_tb_ext_pane_g1_ParamLimits

0xd8da,	// (0x0002d9ed) cell_tb_ext_pane_g1

0xd8f7,	// (0x0002da0a) cell_tb_ext_pane_t1

0x1ba3,	// (0x00021cb6) list_highlight_pane_cp11_ParamLimits

0x1ba3,	// (0x00021cb6) list_highlight_pane_cp11

0x682c,	// (0x0002693f) popup_uni_indicator_window_ParamLimits

0x682c,	// (0x0002693f) popup_uni_indicator_window

0x1e99,	// (0x00021fac) bg_popup_sub_pane_cp14

0xd913,	// (0x0002da26) list_uniindi_pane

0xd91f,	// (0x0002da32) uniindi_top_pane

0x1ba3,	// (0x00021cb6) bg_uniindi_top_pane

0xd93e,	// (0x0002da51) uniindi_top_pane_g1

0xd954,	// (0x0002da67) uniindi_top_pane_g2

0x0003,

0xfd00,	// (0x0002fe13) uniindi_top_pane_g

0xd97e,	// (0x0002da91) uniindi_top_pane_t1

0xd9a8,	// (0x0002dabb) list_single_uniindi_pane_ParamLimits

0xd9a8,	// (0x0002dabb) list_single_uniindi_pane

0xc018,	// (0x0002c12b) bg_uniindi_top_pane_g1

0xd9bb,	// (0x0002dace) list_single_uniindi_pane_g1

0xd9ce,	// (0x0002dae1) list_single_uniindi_pane_t1

0x19ef,	// (0x00021b02) control_bg_pane

0xd9f3,	// (0x0002db06) bg_sctrl_sk_pane_cp1

0xd9fc,	// (0x0002db0f) bg_sctrl_sk_pane_cp2

0xda05,	// (0x0002db18) control_bg_pane_g1

0xda0e,	// (0x0002db21) control_bg_pane_g2

0x0001,

0xfd09,	// (0x0002fe1c) control_bg_pane_g

0xba58,	// (0x0002bb6b) cell_indicator_nsta_pane_g1_ParamLimits

0xba66,	// (0x0002bb79) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x0002fb97) cell_indicator_nsta_pane_g_ParamLimits

0x6163,	// (0x00026276) form2_midp_time_pane_t1_ParamLimits

0x1d23,	// (0x00021e36) main_idle_act4_pane_ParamLimits

0x1d23,	// (0x00021e36) main_idle_act4_pane

0x7e92,	// (0x00027fa5) popup_tb_extension_window_ParamLimits

0xd8b3,	// (0x0002d9c6) tb_ext_find_pane_ParamLimits

0xd8b3,	// (0x0002d9c6) tb_ext_find_pane

0xda17,	// (0x0002db2a) ai_gene_pane_1_cp1

0x2830,	// (0x00022943) ai_gene_pane_2_cp1

0xda1f,	// (0x0002db32) list_single_idle_plugin_calendar_pane

0xda28,	// (0x0002db3b) list_single_idle_plugin_notification_pane

0xda31,	// (0x0002db44) list_single_idle_plugin_player_pane

0xda3a,	// (0x0002db4d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda3a,	// (0x0002db4d) list_single_idle_plugin_shortcut_pane

0xda5c,	// (0x0002db6f) main_idle_act4_pane_t1

0xda6e,	// (0x0002db81) main_idle_act4_pane_t2

0x0001,

0xfd0e,	// (0x0002fe21) main_idle_act4_pane_t

0xda80,	// (0x0002db93) middle_sk_idle_act4_pane_ParamLimits

0xda80,	// (0x0002db93) middle_sk_idle_act4_pane

0xda96,	// (0x0002dba9) popup_clock_digital_analogue_window_cp2

0xdab0,	// (0x0002dbc3) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab0,	// (0x0002dbc3) shortcut_wheel_idle_act4_pane

0xc018,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g1

0xc018,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g2

0xc018,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g3

0xc018,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g4

0xc018,	// (0x0002c12b) shortcut_wheel_idle_act4_pane_g5

0xdac4,	// (0x0002dbd7) shortcut_wheel_idle_act4_pane_g6

0xdacc,	// (0x0002dbdf) shortcut_wheel_idle_act4_pane_g7

0xdad4,	// (0x0002dbe7) shortcut_wheel_idle_act4_pane_g8

0xdadc,	// (0x0002dbef) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd13,	// (0x0002fe26) shortcut_wheel_idle_act4_pane_g

0xc288,	// (0x0002c39b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc288,	// (0x0002c39b) middle_sk_idle_act4_pane_g1

0xdb40,	// (0x0002dc53) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb40,	// (0x0002dc53) middle_sk_idle_act4_pane_g2

0x0001,

0xfd36,	// (0x0002fe49) middle_sk_idle_act4_pane_g_ParamLimits

0xfd36,	// (0x0002fe49) middle_sk_idle_act4_pane_g

0xdb4c,	// (0x0002dc5f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb4c,	// (0x0002dc5f) middle_sk_idle_act4_pane_t1

0xdb69,	// (0x0002dc7c) grid_ai_shortcut_pane_ParamLimits

0xdb69,	// (0x0002dc7c) grid_ai_shortcut_pane

0xdb82,	// (0x0002dc95) list_highlight_pane_cp16_ParamLimits

0xdb82,	// (0x0002dc95) list_highlight_pane_cp16

0xdb8f,	// (0x0002dca2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb8f,	// (0x0002dca2) list_single_idle_plugin_shortcut_pane_g1

0xdb9b,	// (0x0002dcae) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb9b,	// (0x0002dcae) list_single_idle_plugin_shortcut_pane_g2

0xdbb3,	// (0x0002dcc6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbb3,	// (0x0002dcc6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3b,	// (0x0002fe4e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3b,	// (0x0002fe4e) list_single_idle_plugin_shortcut_pane_g

0xdbc6,	// (0x0002dcd9) cell_ai_shortcut_pane_ParamLimits

0xdbc6,	// (0x0002dcd9) cell_ai_shortcut_pane

0xdbea,	// (0x0002dcfd) cell_ai_shortcut_pane_g1_ParamLimits

0xdbea,	// (0x0002dcfd) cell_ai_shortcut_pane_g1

0xda17,	// (0x0002db2a) ai_gene_pane_1_cp2

0xdc0c,	// (0x0002dd1f) ai_gene_pane_2_cp2

0xdc14,	// (0x0002dd27) list_highlight_pane_cp15

0xdc1d,	// (0x0002dd30) list_single_idle_plugin_calendar_pane_g1

0xdc14,	// (0x0002dd27) list_highlight_pane_cp17

0xdc25,	// (0x0002dd38) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc2d,	// (0x0002dd40) list_single_idle_plugin_player_pane_g1

0xb397,	// (0x0002b4aa) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd42,	// (0x0002fe55) list_single_idle_plugin_player_pane_g

0xdc35,	// (0x0002dd48) list_single_idle_plugin_player_pane_t1

0xdc43,	// (0x0002dd56) list_single_idle_plugin_player_pane_t2

0xdc51,	// (0x0002dd64) list_single_idle_plugin_player_pane_t3

0xdc5f,	// (0x0002dd72) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd47,	// (0x0002fe5a) list_single_idle_plugin_player_pane_t

0xdc6d,	// (0x0002dd80) wait_bar_pane_cp15

0xdc75,	// (0x0002dd88) grid_ai_notification_pane

0xb397,	// (0x0002b4aa) list_single_idle_plugin_notification_pane_g1

0xdc7e,	// (0x0002dd91) cell_ai_notification_pane_ParamLimits

0xdc7e,	// (0x0002dd91) cell_ai_notification_pane

0xdc8b,	// (0x0002dd9e) cell_ai_notification_pane_g1

0xdc93,	// (0x0002dda6) cell_ai_notification_pane_t1

0xdca1,	// (0x0002ddb4) tb_ext_find_button_pane

0xdca9,	// (0x0002ddbc) tb_ext_find_pane_g1

0xdcb1,	// (0x0002ddc4) tb_ext_find_pane_t1

0x2359,	// (0x0002246c) tb_ext_find_button_pane_g1

0xdcbf,	// (0x0002ddd2) tb_ext_find_button_pane_g2

0x0001,

0xfd50,	// (0x0002fe63) tb_ext_find_button_pane_g

0xda5c,	// (0x0002db6f) main_idle_act4_pane_t1_ParamLimits

0xda6e,	// (0x0002db81) main_idle_act4_pane_t2_ParamLimits

0xfd0e,	// (0x0002fe21) main_idle_act4_pane_t_ParamLimits

0xda96,	// (0x0002dba9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaa4,	// (0x0002dbb7) sat_plugin_idle_act4_pane_ParamLimits

0xdaa4,	// (0x0002dbb7) sat_plugin_idle_act4_pane

0xdcc8,	// (0x0002dddb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcc8,	// (0x0002dddb) sat_plugin_idle_act4_pane_t1

0xdcdb,	// (0x0002ddee) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcdb,	// (0x0002ddee) sat_plugin_idle_act4_pane_t2

0xdcee,	// (0x0002de01) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcee,	// (0x0002de01) sat_plugin_idle_act4_pane_t3

0xdd01,	// (0x0002de14) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd01,	// (0x0002de14) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd55,	// (0x0002fe68) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd55,	// (0x0002fe68) sat_plugin_idle_act4_pane_t

0x6775,	// (0x00026888) popup_battery_window_ParamLimits

0x6775,	// (0x00026888) popup_battery_window

0x1ba3,	// (0x00021cb6) bg_popup_sub_pane_cp25_ParamLimits

0x1ba3,	// (0x00021cb6) bg_popup_sub_pane_cp25

0xdd14,	// (0x0002de27) popup_battery_window_g1_ParamLimits

0xdd14,	// (0x0002de27) popup_battery_window_g1

0xdd20,	// (0x0002de33) popup_battery_window_t1_ParamLimits

0xdd20,	// (0x0002de33) popup_battery_window_t1

0xdd32,	// (0x0002de45) popup_battery_window_t2_ParamLimits

0xdd32,	// (0x0002de45) popup_battery_window_t2

0x0001,

0xfd5e,	// (0x0002fe71) popup_battery_window_t_ParamLimits

0xfd5e,	// (0x0002fe71) popup_battery_window_t

0x7689,	// (0x0002779c) midp_canvas_pane_ParamLimits

0x7702,	// (0x00027815) midp_keypad_pane_ParamLimits

0x7702,	// (0x00027815) midp_keypad_pane

0x2049,	// (0x0002215c) main_midp_pane_ParamLimits

0xbad2,	// (0x0002bbe5) signal_pane_g2_cp_ParamLimits

0xdd4f,	// (0x0002de62) aid_size_cell_midp_keypad_ParamLimits

0xdd4f,	// (0x0002de62) aid_size_cell_midp_keypad

0xdd69,	// (0x0002de7c) midp_keyp_game_grid_pane_ParamLimits

0xdd69,	// (0x0002de7c) midp_keyp_game_grid_pane

0xdd89,	// (0x0002de9c) midp_keyp_rocker_pane_ParamLimits

0xdd89,	// (0x0002de9c) midp_keyp_rocker_pane

0xddc2,	// (0x0002ded5) midp_keyp_sk_left_pane_ParamLimits

0xddc2,	// (0x0002ded5) midp_keyp_sk_left_pane

0xde1c,	// (0x0002df2f) midp_keyp_sk_right_pane_ParamLimits

0xde1c,	// (0x0002df2f) midp_keyp_sk_right_pane

0x19ef,	// (0x00021b02) bg_button_pane_cp03

0xde76,	// (0x0002df89) midp_keyp_sk_left_pane_g1

0x19ef,	// (0x00021b02) bg_button_pane_cp04

0xde76,	// (0x0002df89) midp_keyp_sk_right_pane_g1

0xc018,	// (0x0002c12b) midp_keyp_rocker_pane_g1

0xde7f,	// (0x0002df92) keyp_game_cell_pane_ParamLimits

0xde7f,	// (0x0002df92) keyp_game_cell_pane

0x19ef,	// (0x00021b02) bg_button_pane_cp02

0xde92,	// (0x0002dfa5) keyp_game_cell_pane_g1

0x67ab,	// (0x000268be) popup_fep_vkb2_window_ParamLimits

0x67ab,	// (0x000268be) popup_fep_vkb2_window

0x9625,	// (0x00029738) aid_size_cell_vkb2_ParamLimits

0x9625,	// (0x00029738) aid_size_cell_vkb2

0x9671,	// (0x00029784) popup_fep_vkb2_window_g1_ParamLimits

0x9671,	// (0x00029784) popup_fep_vkb2_window_g1

0x96b9,	// (0x000297cc) vkb2_area_bottom_pane_ParamLimits

0x96b9,	// (0x000297cc) vkb2_area_bottom_pane

0x9705,	// (0x00029818) vkb2_area_keypad_pane_ParamLimits

0x9705,	// (0x00029818) vkb2_area_keypad_pane

0x9747,	// (0x0002985a) vkb2_area_top_pane_ParamLimits

0x9747,	// (0x0002985a) vkb2_area_top_pane

0x97c6,	// (0x000298d9) vkb2_top_entry_pane_ParamLimits

0x97c6,	// (0x000298d9) vkb2_top_entry_pane

0x97f0,	// (0x00029903) vkb2_top_grid_left_pane_ParamLimits

0x97f0,	// (0x00029903) vkb2_top_grid_left_pane

0x980f,	// (0x00029922) vkb2_top_grid_right_pane_ParamLimits

0x980f,	// (0x00029922) vkb2_top_grid_right_pane

0x982e,	// (0x00029941) vkb2_cell_keypad_pane_ParamLimits

0x982e,	// (0x00029941) vkb2_cell_keypad_pane

0x98ff,	// (0x00029a12) vkb2_area_bottom_grid_pane_ParamLimits

0x98ff,	// (0x00029a12) vkb2_area_bottom_grid_pane

0x9925,	// (0x00029a38) vkb2_area_bottom_pane_g1_ParamLimits

0x9925,	// (0x00029a38) vkb2_area_bottom_pane_g1

0x9949,	// (0x00029a5c) vkb2_area_bottom_pane_g2_ParamLimits

0x9949,	// (0x00029a5c) vkb2_area_bottom_pane_g2

0x9977,	// (0x00029a8a) vkb2_area_bottom_pane_g3_ParamLimits

0x9977,	// (0x00029a8a) vkb2_area_bottom_pane_g3

0x0002,

0xfd63,	// (0x0002fe76) vkb2_area_bottom_pane_g_ParamLimits

0xfd63,	// (0x0002fe76) vkb2_area_bottom_pane_g

0x99d8,	// (0x00029aeb) vkb2_top_cell_left_pane_ParamLimits

0x99d8,	// (0x00029aeb) vkb2_top_cell_left_pane

0xdea3,	// (0x0002dfb6) vkb2_top_entry_pane_g1_ParamLimits

0xdea3,	// (0x0002dfb6) vkb2_top_entry_pane_g1

0xdeb1,	// (0x0002dfc4) vkb2_top_entry_pane_t1_ParamLimits

0xdeb1,	// (0x0002dfc4) vkb2_top_entry_pane_t1

0xdee3,	// (0x0002dff6) vkb2_top_entry_pane_t2_ParamLimits

0xdee3,	// (0x0002dff6) vkb2_top_entry_pane_t2

0xdf15,	// (0x0002e028) vkb2_top_entry_pane_t3_ParamLimits

0xdf15,	// (0x0002e028) vkb2_top_entry_pane_t3

0x0002,

0xfd6a,	// (0x0002fe7d) vkb2_top_entry_pane_t_ParamLimits

0xfd6a,	// (0x0002fe7d) vkb2_top_entry_pane_t

0x9a25,	// (0x00029b38) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a25,	// (0x00029b38) vkb2_top_grid_right_pane_g1

0x9a3b,	// (0x00029b4e) vkb2_top_grid_right_pane_g2_ParamLimits

0x9a3b,	// (0x00029b4e) vkb2_top_grid_right_pane_g2

0x9a53,	// (0x00029b66) vkb2_top_grid_right_pane_g3_ParamLimits

0x9a53,	// (0x00029b66) vkb2_top_grid_right_pane_g3

0x9a6b,	// (0x00029b7e) vkb2_top_grid_right_pane_g4_ParamLimits

0x9a6b,	// (0x00029b7e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd71,	// (0x0002fe84) vkb2_top_grid_right_pane_g_ParamLimits

0xfd71,	// (0x0002fe84) vkb2_top_grid_right_pane_g

0x9a81,	// (0x00029b94) vkb2_top_cell_left_pane_g1

0x9aa3,	// (0x00029bb6) vkb2_cell_keypad_pane_g1_ParamLimits

0x9aa3,	// (0x00029bb6) vkb2_cell_keypad_pane_g1

0xdf39,	// (0x0002e04c) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf39,	// (0x0002e04c) vkb2_cell_keypad_pane_t1

0x9ab1,	// (0x00029bc4) vkb2_cell_bottom_grid_pane_ParamLimits

0x9ab1,	// (0x00029bc4) vkb2_cell_bottom_grid_pane

0x9aea,	// (0x00029bfd) vkb2_cell_bottom_grid_pane_g1

0xdae4,	// (0x0002dbf7) aid_call2_pane_cp02

0xdaec,	// (0x0002dbff) aid_call_pane_cp02

0xdaf4,	// (0x0002dc07) clock_digital_number_pane_cp10

0xdafc,	// (0x0002dc0f) clock_digital_number_pane_cp11

0xdb04,	// (0x0002dc17) clock_digital_number_pane_cp12

0xdb0c,	// (0x0002dc1f) clock_digital_number_pane_cp13

0xdb14,	// (0x0002dc27) clock_digital_separator_pane_cp10

0x2359,	// (0x0002246c) popup_clock_digital_analogue_window_cp2_g1

0x2359,	// (0x0002246c) popup_clock_digital_analogue_window_cp2_g2

0xdb1c,	// (0x0002dc2f) popup_clock_digital_analogue_window_cp2_g3

0x2359,	// (0x0002246c) popup_clock_digital_analogue_window_cp2_g4

0xdb1c,	// (0x0002dc2f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd26,	// (0x0002fe39) popup_clock_digital_analogue_window_cp2_g

0xdb24,	// (0x0002dc37) popup_clock_digital_analogue_window_cp2_t1

0xdb32,	// (0x0002dc45) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd31,	// (0x0002fe44) popup_clock_digital_analogue_window_cp2_t

0xc018,	// (0x0002c12b) clock_digital_number_pane_cp10_g1

0xc018,	// (0x0002c12b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x0002fc33) clock_digital_number_pane_cp10_g

0xc018,	// (0x0002c12b) clock_digital_separator_pane_cp10_g1

0xc018,	// (0x0002c12b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x0002fc33) clock_digital_separator_pane_cp10_g

0xd960,	// (0x0002da73) uniindi_top_pane_g3

0xd971,	// (0x0002da84) uniindi_top_pane_g4

0x98b9,	// (0x000299cc) vkb2_row_keypad_pane_ParamLimits

0x98b9,	// (0x000299cc) vkb2_row_keypad_pane

0x9b0a,	// (0x00029c1d) vkb2_cell_t_keypad_pane_ParamLimits

0x9b0a,	// (0x00029c1d) vkb2_cell_t_keypad_pane

0x9b1a,	// (0x00029c2d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9b1a,	// (0x00029c2d) vkb2_cell_t_keypad_pane_cp08

0x9b2d,	// (0x00029c40) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9b2d,	// (0x00029c40) vkb2_cell_t_keypad_pane_cp09

0x9b41,	// (0x00029c54) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9b41,	// (0x00029c54) vkb2_cell_t_keypad_pane_cp01

0x9b52,	// (0x00029c65) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9b52,	// (0x00029c65) vkb2_cell_t_keypad_pane_cp02

0x9b63,	// (0x00029c76) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9b63,	// (0x00029c76) vkb2_cell_t_keypad_pane_cp03

0x9b74,	// (0x00029c87) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9b74,	// (0x00029c87) vkb2_cell_t_keypad_pane_cp04

0x9b85,	// (0x00029c98) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9b85,	// (0x00029c98) vkb2_cell_t_keypad_pane_cp05

0x9b96,	// (0x00029ca9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9b96,	// (0x00029ca9) vkb2_cell_t_keypad_pane_cp06

0x9ba7,	// (0x00029cba) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9ba7,	// (0x00029cba) vkb2_cell_t_keypad_pane_cp07

0x9bb8,	// (0x00029ccb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9bb8,	// (0x00029ccb) vkb2_cell_t_keypad_pane_cp10

0xc288,	// (0x0002c39b) vkb2_cell_t_keypad_pane_g1

0xdf50,	// (0x0002e063) vkb2_cell_t_keypad_pane_t1

0x19ef,	// (0x00021b02) popup_grid_graphic2_window

0xdf62,	// (0x0002e075) aid_size_cell_graphic2_ParamLimits

0xdf62,	// (0x0002e075) aid_size_cell_graphic2

0xdf9a,	// (0x0002e0ad) bg_popup_window_pane_cp21_ParamLimits

0xdf9a,	// (0x0002e0ad) bg_popup_window_pane_cp21

0xdfa8,	// (0x0002e0bb) graphic2_pages_pane_ParamLimits

0xdfa8,	// (0x0002e0bb) graphic2_pages_pane

0xdfee,	// (0x0002e101) grid_graphic2_control_pane_ParamLimits

0xdfee,	// (0x0002e101) grid_graphic2_control_pane

0xe02c,	// (0x0002e13f) grid_graphic2_pane_ParamLimits

0xe02c,	// (0x0002e13f) grid_graphic2_pane

0xe0a0,	// (0x0002e1b3) cell_graphic2_pane

0x19ef,	// (0x00021b02) main_comp_mode_pane

0xd1c8,	// (0x0002d2db) list_ai3_gene_pane_ParamLimits

0xd596,	// (0x0002d6a9) bg_popup_window_pane_cp19_ParamLimits

0xd5a2,	// (0x0002d6b5) bg_touch_area_indi_pane_ParamLimits

0xd5a2,	// (0x0002d6b5) bg_touch_area_indi_pane

0xd5b8,	// (0x0002d6cb) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b8,	// (0x0002d6cb) bg_touch_area_indi_pane_cp01

0xd5ce,	// (0x0002d6e1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ce,	// (0x0002d6e1) bg_touch_area_indi_pane_cp02

0xd5e4,	// (0x0002d6f7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e4,	// (0x0002d6f7) bg_touch_area_indi_pane_cp03

0xd5fe,	// (0x0002d711) popup_slider_window_g1_ParamLimits

0xd61a,	// (0x0002d72d) popup_slider_window_g2_ParamLimits

0xd636,	// (0x0002d749) popup_slider_window_g3_ParamLimits

0xfcbb,	// (0x0002fdce) popup_slider_window_g_ParamLimits

0xd69c,	// (0x0002d7af) popup_slider_window_t1_ParamLimits

0xd710,	// (0x0002d823) small_volume_slider_vertical_pane_ParamLimits

0xe0a0,	// (0x0002e1b3) cell_graphic2_pane_ParamLimits

0xe0ef,	// (0x0002e202) bg_button_pane_cp10_ParamLimits

0xe0ef,	// (0x0002e202) bg_button_pane_cp10

0xe102,	// (0x0002e215) bg_button_pane_cp11_ParamLimits

0xe102,	// (0x0002e215) bg_button_pane_cp11

0xe115,	// (0x0002e228) graphic2_pages_pane_g1_ParamLimits

0xe115,	// (0x0002e228) graphic2_pages_pane_g1

0xe130,	// (0x0002e243) graphic2_pages_pane_g2_ParamLimits

0xe130,	// (0x0002e243) graphic2_pages_pane_g2

0x0001,

0xfd7f,	// (0x0002fe92) graphic2_pages_pane_g_ParamLimits

0xfd7f,	// (0x0002fe92) graphic2_pages_pane_g

0xe148,	// (0x0002e25b) graphic2_pages_pane_t1_ParamLimits

0xe148,	// (0x0002e25b) graphic2_pages_pane_t1

0xe160,	// (0x0002e273) cell_graphic2_control_pane_ParamLimits

0xe160,	// (0x0002e273) cell_graphic2_control_pane

0xe17e,	// (0x0002e291) cell_graphic2_pane_g1_ParamLimits

0xe17e,	// (0x0002e291) cell_graphic2_pane_g1

0xe18b,	// (0x0002e29e) cell_graphic2_pane_g2_ParamLimits

0xe18b,	// (0x0002e29e) cell_graphic2_pane_g2

0xe198,	// (0x0002e2ab) cell_graphic2_pane_g3_ParamLimits

0xe198,	// (0x0002e2ab) cell_graphic2_pane_g3

0xe1a5,	// (0x0002e2b8) cell_graphic2_pane_g4_ParamLimits

0xe1a5,	// (0x0002e2b8) cell_graphic2_pane_g4

0xe1b2,	// (0x0002e2c5) cell_graphic2_pane_g5_ParamLimits

0xe1b2,	// (0x0002e2c5) cell_graphic2_pane_g5

0x0004,

0xfd84,	// (0x0002fe97) cell_graphic2_pane_g_ParamLimits

0xfd84,	// (0x0002fe97) cell_graphic2_pane_g

0xe1cb,	// (0x0002e2de) cell_graphic2_pane_t1_ParamLimits

0xe1cb,	// (0x0002e2de) cell_graphic2_pane_t1

0x85f6,	// (0x00028709) grid_highlight_pane_cp11_ParamLimits

0x85f6,	// (0x00028709) grid_highlight_pane_cp11

0x1ba3,	// (0x00021cb6) bg_button_pane_cp05

0xe201,	// (0x0002e314) cell_graphic2_control_pane_g1

0xc018,	// (0x0002c12b) bg_touch_area_indi_pane_g1

0xe229,	// (0x0002e33c) aid_cmod_rocker_key_size

0xe233,	// (0x0002e346) aid_cmode_itu_key_size

0xe23d,	// (0x0002e350) main_cmode_video_pane

0xe247,	// (0x0002e35a) main_comp_mode_itu_pane

0xe253,	// (0x0002e366) main_comp_mode_rocker_pane

0xe25f,	// (0x0002e372) cell_cmode_rocker_pane_ParamLimits

0xe25f,	// (0x0002e372) cell_cmode_rocker_pane

0xe271,	// (0x0002e384) cell_cmode_itu_pane_ParamLimits

0xe271,	// (0x0002e384) cell_cmode_itu_pane

0x1e99,	// (0x00021fac) bg_button_pane_cp06_ParamLimits

0x1e99,	// (0x00021fac) bg_button_pane_cp06

0xc288,	// (0x0002c39b) cell_cmode_rocker_pane_g1_ParamLimits

0xc288,	// (0x0002c39b) cell_cmode_rocker_pane_g1

0xd7b4,	// (0x0002d8c7) cell_cmode_rocker_pane_g2_ParamLimits

0xd7b4,	// (0x0002d8c7) cell_cmode_rocker_pane_g2

0x0001,

0xfd94,	// (0x0002fea7) cell_cmode_rocker_pane_g_ParamLimits

0xfd94,	// (0x0002fea7) cell_cmode_rocker_pane_g

0x19ef,	// (0x00021b02) bg_button_pane_cp07

0xe286,	// (0x0002e399) cell_cmode_itu_pane_g1

0xe28f,	// (0x0002e3a2) cell_cmode_itu_pane_t1

0xe29d,	// (0x0002e3b0) cell_cmode_itu_pane_t2

0x0001,

0xfd99,	// (0x0002feac) cell_cmode_itu_pane_t

0xd9e3,	// (0x0002daf6) aid_touch_ctrl_left

0xd9eb,	// (0x0002dafe) aid_touch_ctrl_right

0x19ef,	// (0x00021b02) compa_mode_pane

0xe2ab,	// (0x0002e3be) aid_cmod_rocker_key_size_cp

0xe2b5,	// (0x0002e3c8) aid_cmode_itu_key_size_cp

0xe2bf,	// (0x0002e3d2) compa_mode_pane_g1

0xe2c7,	// (0x0002e3da) compa_mode_pane_g2

0xe2cf,	// (0x0002e3e2) compa_mode_pane_g3

0x0002,

0xfd9e,	// (0x0002feb1) compa_mode_pane_g

0xe2d7,	// (0x0002e3ea) main_comp_mode_itu_pane_cp

0xe2df,	// (0x0002e3f2) main_comp_mode_rocker_pane_cp

0xe2e7,	// (0x0002e3fa) cell_cmode_itu_pane_cp_ParamLimits

0xe2e7,	// (0x0002e3fa) cell_cmode_itu_pane_cp

0xe2fc,	// (0x0002e40f) cell_cmode_rocker_pane_cp_ParamLimits

0xe2fc,	// (0x0002e40f) cell_cmode_rocker_pane_cp

0x1e99,	// (0x00021fac) bg_button_pane_cp06_cp_ParamLimits

0x1e99,	// (0x00021fac) bg_button_pane_cp06_cp

0xc288,	// (0x0002c39b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc288,	// (0x0002c39b) cell_cmode_rocker_pane_g1_cp

0xc018,	// (0x0002c12b) cell_cmode_rocker_pane_g2_cp

0x19ef,	// (0x00021b02) bg_button_pane_cp07_cp

0xe30e,	// (0x0002e421) cell_cmode_itu_pane_g1_cp

0xe317,	// (0x0002e42a) cell_cmode_itu_pane_t1_cp

0xe317,	// (0x0002e42a) cell_cmode_itu_pane_t2_cp

0xaf0d,	// (0x0002b020) settings_code_pane_cp2

0x1a5f,	// (0x00021b72) bg_popup_window_pane_cp3_ParamLimits

0x1cbc,	// (0x00021dcf) heading_pane_cp3_ParamLimits

0x1ccb,	// (0x00021dde) listscroll_popup_graphic_pane_ParamLimits

0x91d3,	// (0x000292e6) fep_hwr_aid_pane_ParamLimits

0x959c,	// (0x000296af) aid_touch_sctrl_top_ParamLimits

0x95a9,	// (0x000296bc) sctrl_sk_top_pane_g1_ParamLimits

0xc288,	// (0x0002c39b) sctrl_sk_top_pane_g2_ParamLimits

0xfcd4,	// (0x0002fde7) sctrl_sk_top_pane_g_ParamLimits

0x95b6,	// (0x000296c9) sctrl_sk_top_pane_t1_ParamLimits

0x959c,	// (0x000296af) aid_touch_sctrl_bottom_ParamLimits

0x95b6,	// (0x000296c9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92c,	// (0x0002da3f) aid_area_touch_clock

0x978d,	// (0x000298a0) aid_vkb2_area_top_pane_cell_ParamLimits

0x978d,	// (0x000298a0) aid_vkb2_area_top_pane_cell

0x98db,	// (0x000299ee) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x98db,	// (0x000299ee) aid_vkb2_area_bottom_pane_cell

0xde9b,	// (0x0002dfae) popup_char_count_window

0xe325,	// (0x0002e438) popup_char_count_window_g1

0xe32e,	// (0x0002e441) popup_char_count_window_g2

0xe337,	// (0x0002e44a) popup_char_count_window_g3

0x0002,

0xfda5,	// (0x0002feb8) popup_char_count_window_g

0xe340,	// (0x0002e453) popup_char_count_window_t1

0x964f,	// (0x00029762) popup_fep_char_preview_window_ParamLimits

0x964f,	// (0x00029762) popup_fep_char_preview_window

0x97ab,	// (0x000298be) vkb2_top_candi_pane_ParamLimits

0x97ab,	// (0x000298be) vkb2_top_candi_pane

0xe34e,	// (0x0002e461) cell_vkb2_top_candi_pane_ParamLimits

0xe34e,	// (0x0002e461) cell_vkb2_top_candi_pane

0x8c98,	// (0x00028dab) bg_popup_fep_char_preview_window_ParamLimits

0x8c98,	// (0x00028dab) bg_popup_fep_char_preview_window

0x9bcd,	// (0x00029ce0) popup_fep_char_preview_window_t1_ParamLimits

0x9bcd,	// (0x00029ce0) popup_fep_char_preview_window_t1

0xe398,	// (0x0002e4ab) bg_popup_fep_char_preview_window_g1

0xe3a0,	// (0x0002e4b3) bg_popup_fep_char_preview_window_g2

0xe3a8,	// (0x0002e4bb) bg_popup_fep_char_preview_window_g3

0xe3b0,	// (0x0002e4c3) bg_popup_fep_char_preview_window_g4

0xe3b8,	// (0x0002e4cb) bg_popup_fep_char_preview_window_g5

0xe3c0,	// (0x0002e4d3) bg_popup_fep_char_preview_window_g6

0xe3c8,	// (0x0002e4db) bg_popup_fep_char_preview_window_g7

0xe3d0,	// (0x0002e4e3) bg_popup_fep_char_preview_window_g8

0xe3d8,	// (0x0002e4eb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdac,	// (0x0002febf) bg_popup_fep_char_preview_window_g

0xc288,	// (0x0002c39b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc288,	// (0x0002c39b) cell_vkb2_top_candi_pane_g1

0xc59f,	// (0x0002c6b2) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc59f,	// (0x0002c6b2) cell_vkb2_top_candi_pane_g2

0xc5c0,	// (0x0002c6d3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5c0,	// (0x0002c6d3) cell_vkb2_top_candi_pane_g3

0x9c0f,	// (0x00029d22) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9c0f,	// (0x00029d22) cell_vkb2_top_candi_pane_g4

0xe3e0,	// (0x0002e4f3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3e0,	// (0x0002e4f3) cell_vkb2_top_candi_pane_g5

0xd7b4,	// (0x0002d8c7) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7b4,	// (0x0002d8c7) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc1,	// (0x0002fed4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc1,	// (0x0002fed4) cell_vkb2_top_candi_pane_g

0x9c30,	// (0x00029d43) cell_vkb2_top_candi_pane_t1

0x8feb,	// (0x000290fe) aid_size_touch_slider_mark_ParamLimits

0x8feb,	// (0x000290fe) aid_size_touch_slider_mark

0xdfde,	// (0x0002e0f1) grid_graphic2_catg_pane_ParamLimits

0xdfde,	// (0x0002e0f1) grid_graphic2_catg_pane

0xe07c,	// (0x0002e18f) popup_grid_graphic2_window_t1_ParamLimits

0xe07c,	// (0x0002e18f) popup_grid_graphic2_window_t1

0xe08e,	// (0x0002e1a1) popup_grid_graphic2_window_t2_ParamLimits

0xe08e,	// (0x0002e1a1) popup_grid_graphic2_window_t2

0x0001,

0xfd7a,	// (0x0002fe8d) popup_grid_graphic2_window_t_ParamLimits

0xfd7a,	// (0x0002fe8d) popup_grid_graphic2_window_t

0x1ba3,	// (0x00021cb6) bg_button_pane_cp05_ParamLimits

0xe201,	// (0x0002e314) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x0002e514) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x0002e514) cell_graphic2_catg_pane

0x19ef,	// (0x00021b02) bg_button_pane_cp12

0xe413,	// (0x0002e526) cell_graphic2_catg_pane_g1

0xd8f7,	// (0x0002da0a) cell_tb_ext_pane_t1_ParamLimits

0x99f8,	// (0x00029b0b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x99f8,	// (0x00029b0b) vkb2_top_cell_right_narrow_pane

0x9a10,	// (0x00029b23) vkb2_top_cell_right_wide_pane_ParamLimits

0x9a10,	// (0x00029b23) vkb2_top_cell_right_wide_pane

0x91c5,	// (0x000292d8) bg_vkb2_func_pane_ParamLimits

0x91c5,	// (0x000292d8) bg_vkb2_func_pane

0x9a81,	// (0x00029b94) vkb2_top_cell_left_pane_g1_ParamLimits

0x91c5,	// (0x000292d8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x91c5,	// (0x000292d8) bg_vkb2_fuc_pane_cp03

0x9aea,	// (0x00029bfd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x84fa,	// (0x0002860d) bg_vkb2_func_pane_g1

0x8502,	// (0x00028615) bg_vkb2_func_pane_g2

0x8512,	// (0x00028625) bg_vkb2_func_pane_g3

0x850a,	// (0x0002861d) bg_vkb2_func_pane_g4

0x851a,	// (0x0002862d) bg_vkb2_func_pane_g5

0x8522,	// (0x00028635) bg_vkb2_func_pane_g6

0x852a,	// (0x0002863d) bg_vkb2_func_pane_g7

0x8532,	// (0x00028645) bg_vkb2_func_pane_g8

0x84f2,	// (0x00028605) bg_vkb2_func_pane_g9

0x0008,

0xfdce,	// (0x0002fee1) bg_vkb2_func_pane_g

0x91c5,	// (0x000292d8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x91c5,	// (0x000292d8) bg_vkb2_fuc_pane_cp01

0x9a81,	// (0x00029b94) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9a81,	// (0x00029b94) vkb2_top_cell_right_wide_pane_g1

0x91c5,	// (0x000292d8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x91c5,	// (0x000292d8) bg_vkb2_fuc_pane_cp02

0x9c4f,	// (0x00029d62) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9c4f,	// (0x00029d62) vkb2_top_cell_right_narrow_pane_g1

0xd510,	// (0x0002d623) aid_touch_area_decrease_ParamLimits

0xd510,	// (0x0002d623) aid_touch_area_decrease

0xd534,	// (0x0002d647) aid_touch_area_increase_ParamLimits

0xd534,	// (0x0002d647) aid_touch_area_increase

0xd54c,	// (0x0002d65f) aid_touch_area_mute_ParamLimits

0xd54c,	// (0x0002d65f) aid_touch_area_mute

0xd568,	// (0x0002d67b) aid_touch_area_slider_ParamLimits

0xd568,	// (0x0002d67b) aid_touch_area_slider

0xd652,	// (0x0002d765) popup_slider_window_g4_ParamLimits

0xd652,	// (0x0002d765) popup_slider_window_g4

0xd66a,	// (0x0002d77d) popup_slider_window_g5_ParamLimits

0xd66a,	// (0x0002d77d) popup_slider_window_g5

0xd68c,	// (0x0002d79f) popup_slider_window_g6_ParamLimits

0xd68c,	// (0x0002d79f) popup_slider_window_g6

0xd6ca,	// (0x0002d7dd) popup_slider_window_t2_ParamLimits

0xd6ca,	// (0x0002d7dd) popup_slider_window_t2

0x0001,

0xfcc8,	// (0x0002fddb) popup_slider_window_t_ParamLimits

0xfcc8,	// (0x0002fddb) popup_slider_window_t

0xd6e2,	// (0x0002d7f5) slider_pane_ParamLimits

0xd6e2,	// (0x0002d7f5) slider_pane

0xe41c,	// (0x0002e52f) slider_pane_g1_ParamLimits

0xe41c,	// (0x0002e52f) slider_pane_g1

0xe430,	// (0x0002e543) slider_pane_g2_ParamLimits

0xe430,	// (0x0002e543) slider_pane_g2

0xe446,	// (0x0002e559) slider_pane_g3_ParamLimits

0xe446,	// (0x0002e559) slider_pane_g3

0x0003,

0xfde1,	// (0x0002fef4) slider_pane_g_ParamLimits

0xfde1,	// (0x0002fef4) slider_pane_g

0x7eee,	// (0x00028001) popup_tb_float_extension_window_ParamLimits

0x7eee,	// (0x00028001) popup_tb_float_extension_window

0xe472,	// (0x0002e585) aid_size_cell_tb_float_ext

0x19ef,	// (0x00021b02) bg_popup_sub_window_cp28

0xe47e,	// (0x0002e591) grid_tb_float_ext_pane

0xe488,	// (0x0002e59b) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x0002e59b) cell_tb_float_ext_pane

0xe4a2,	// (0x0002e5b5) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x0002e5be) grid_highlight_pane_cp12

0x9306,	// (0x00029419) cell_last_hwr_side_pane_ParamLimits

0x9306,	// (0x00029419) cell_last_hwr_side_pane

0xc018,	// (0x0002c12b) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x0002e5c7) cell_last_hwr_side_pane_g2

0x0001,

0xfdea,	// (0x0002fefd) cell_last_hwr_side_pane_g

0x99a7,	// (0x00029aba) vkb2_area_bottom_space_btn_pane_ParamLimits

0x99a7,	// (0x00029aba) vkb2_area_bottom_space_btn_pane

0xc288,	// (0x0002c39b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf50,	// (0x0002e063) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9c30,	// (0x00029d43) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9c6f,	// (0x00029d82) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9c6f,	// (0x00029d82) vkb2_area_bottom_space_btn_pane_g1

0x9ca9,	// (0x00029dbc) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9ca9,	// (0x00029dbc) vkb2_area_bottom_space_btn_pane_g2

0x9cdf,	// (0x00029df2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9cdf,	// (0x00029df2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdef,	// (0x0002ff02) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdef,	// (0x0002ff02) vkb2_area_bottom_space_btn_pane_g

0x927a,	// (0x0002938d) cel_fep_hwr_func_pane_ParamLimits

0x927a,	// (0x0002938d) cel_fep_hwr_func_pane

0x92b6,	// (0x000293c9) cell_hwr_side_button_pane_ParamLimits

0x92b6,	// (0x000293c9) cell_hwr_side_button_pane

0xd92c,	// (0x0002da3f) aid_area_touch_clock_ParamLimits

0x1ba3,	// (0x00021cb6) bg_uniindi_top_pane_ParamLimits

0xd93e,	// (0x0002da51) uniindi_top_pane_g1_ParamLimits

0xd954,	// (0x0002da67) uniindi_top_pane_g2_ParamLimits

0xd960,	// (0x0002da73) uniindi_top_pane_g3_ParamLimits

0xd971,	// (0x0002da84) uniindi_top_pane_g4_ParamLimits

0xfd00,	// (0x0002fe13) uniindi_top_pane_g_ParamLimits

0xd97e,	// (0x0002da91) uniindi_top_pane_t1_ParamLimits

0x1ba3,	// (0x00021cb6) bg_vkb2_func_pane_cp01_ParamLimits

0x1ba3,	// (0x00021cb6) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x0002e5d0) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x0002e5d0) cel_fep_hwr_func_pane_g1

0x1ba3,	// (0x00021cb6) bg_vkb2_func_pane_cp02_ParamLimits

0x1ba3,	// (0x00021cb6) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x0002e5d0) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x0002e5d0) cell_hwr_side_button_pane_g1

0x8346,	// (0x00028459) status_pane_g4_ParamLimits

0x8346,	// (0x00028459) status_pane_g4

0x8360,	// (0x00028473) status_pane_t1

0xbd5a,	// (0x0002be6d) form2_midp_gauge_slider_cont_pane

0xbd62,	// (0x0002be75) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd74,	// (0x0002be87) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd86,	// (0x0002be99) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x0002fbe6) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd98,	// (0x0002beab) form2_midp_slider_pane_ParamLimits

0x9617,	// (0x0002972a) aid_size_cell_func_vkb2_ParamLimits

0x9617,	// (0x0002972a) aid_size_cell_func_vkb2

0xe45e,	// (0x0002e571) slider_pane_g4_ParamLimits

0xe45e,	// (0x0002e571) slider_pane_g4

0x9d29,	// (0x00029e3c) form2_midp_gauge_slider_pane_t2_cp01

0x9d37,	// (0x00029e4a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d37,	// (0x00029e4a) form2_midp_gauge_slider_pane_t3_cp01

0x9d54,	// (0x00029e67) form2_midp_slider_pane_cp01

0x19ef,	// (0x00021b02) navi_smil_pane

0xe4f6,	// (0x0002e609) navi_smil_pane_g1

0xe4fe,	// (0x0002e611) navi_smil_pane_t1

0xe4cb,	// (0x0002e5de) form2_midp_slider_pane_g1

0xe4d4,	// (0x0002e5e7) form2_midp_slider_pane_g2

0xe4dc,	// (0x0002e5ef) form2_midp_slider_pane_g3

0xe4cb,	// (0x0002e5de) form2_midp_slider_pane_g4

0xe4e4,	// (0x0002e5f7) form2_midp_slider_pane_g5

0x0004,

0xfdf8,	// (0x0002ff0b) form2_midp_slider_pane_g

0x9d19,	// (0x00029e2c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9d19,	// (0x00029e2c) vkb2_area_bottom_space_btn_pane_g4

0x8175,	// (0x00028288) lc0_navi_pane_ParamLimits

0x8175,	// (0x00028288) lc0_navi_pane

0x81eb,	// (0x000282fe) lc0_stat_indi_pane_ParamLimits

0x81eb,	// (0x000282fe) lc0_stat_indi_pane

0x8202,	// (0x00028315) ls0_title_pane_ParamLimits

0x8202,	// (0x00028315) ls0_title_pane

0x1e99,	// (0x00021fac) bg_popup_sub_pane_cp14_ParamLimits

0xd913,	// (0x0002da26) list_uniindi_pane_ParamLimits

0xd91f,	// (0x0002da32) uniindi_top_pane_ParamLimits

0xd9bb,	// (0x0002dace) list_single_uniindi_pane_g1_ParamLimits

0xd9ce,	// (0x0002dae1) list_single_uniindi_pane_t1_ParamLimits

0x9d5d,	// (0x00029e70) lc0_stat_clock_pane_ParamLimits

0x9d5d,	// (0x00029e70) lc0_stat_clock_pane

0xe50c,	// (0x0002e61f) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x0002e61f) lc0_stat_indi_pane_g1

0xe519,	// (0x0002e62c) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x0002e62c) lc0_stat_indi_pane_g2

0x0001,

0xfe03,	// (0x0002ff16) lc0_stat_indi_pane_g_ParamLimits

0xfe03,	// (0x0002ff16) lc0_stat_indi_pane_g

0x9d6a,	// (0x00029e7d) lc0_uni_indicator_pane_ParamLimits

0x9d6a,	// (0x00029e7d) lc0_uni_indicator_pane

0xe526,	// (0x0002e639) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x0002e639) ls0_title_pane_g1

0xe53a,	// (0x0002e64d) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x0002e64d) ls0_title_pane_t1

0x9d77,	// (0x00029e8a) lc0_uni_indicator_pane_g1_ParamLimits

0x9d77,	// (0x00029e8a) lc0_uni_indicator_pane_g1

0xe570,	// (0x0002e683) lc0_stat_clock_pane_t1

0x19ef,	// (0x00021b02) main_ai5_pane

0xe586,	// (0x0002e699) ai5_sk_pane_ParamLimits

0xe586,	// (0x0002e699) ai5_sk_pane

0xe593,	// (0x0002e6a6) cell_ai5_widget_pane_ParamLimits

0xe593,	// (0x0002e6a6) cell_ai5_widget_pane

0xe653,	// (0x0002e766) aid_size_cell_widget_grid

0xe661,	// (0x0002e774) bg_ai5_widget_pane_ParamLimits

0xe661,	// (0x0002e774) bg_ai5_widget_pane

0xe6df,	// (0x0002e7f2) cell_ai5_widget_pane_g2

0xe6f3,	// (0x0002e806) cell_ai5_widget_pane_g3

0xe70d,	// (0x0002e820) cell_ai5_widget_pane_g4

0xe71d,	// (0x0002e830) cell_ai5_widget_pane_g5

0xe72d,	// (0x0002e840) cell_ai5_widget_pane_g6

0xe739,	// (0x0002e84c) cell_ai5_widget_pane_g7

0xe7a5,	// (0x0002e8b8) cell_ai5_widget_pane_t1_ParamLimits

0xe7a5,	// (0x0002e8b8) cell_ai5_widget_pane_t1

0xe7c2,	// (0x0002e8d5) cell_ai5_widget_pane_t2_ParamLimits

0xe7c2,	// (0x0002e8d5) cell_ai5_widget_pane_t2

0xe7da,	// (0x0002e8ed) cell_ai5_widget_pane_t3_ParamLimits

0xe7da,	// (0x0002e8ed) cell_ai5_widget_pane_t3

0xe7f2,	// (0x0002e905) cell_ai5_widget_pane_t4_ParamLimits

0xe7f2,	// (0x0002e905) cell_ai5_widget_pane_t4

0xe818,	// (0x0002e92b) cell_ai5_widget_pane_t5_ParamLimits

0xe818,	// (0x0002e92b) cell_ai5_widget_pane_t5

0xe837,	// (0x0002e94a) cell_ai5_widget_pane_t6_ParamLimits

0xe837,	// (0x0002e94a) cell_ai5_widget_pane_t6

0xe849,	// (0x0002e95c) cell_ai5_widget_pane_t7_ParamLimits

0xe849,	// (0x0002e95c) cell_ai5_widget_pane_t7

0xe868,	// (0x0002e97b) cell_ai5_widget_pane_t8_ParamLimits

0xe868,	// (0x0002e97b) cell_ai5_widget_pane_t8

0x000b,

0xfe23,	// (0x0002ff36) cell_ai5_widget_pane_t_ParamLimits

0xfe23,	// (0x0002ff36) cell_ai5_widget_pane_t

0xe8ec,	// (0x0002e9ff) grid_ai5_widget_pane

0x1e99,	// (0x00021fac) highlight_cell_ai5_widget_pane_ParamLimits

0x1e99,	// (0x00021fac) highlight_cell_ai5_widget_pane

0xe900,	// (0x0002ea13) ai5_sk_left_pane

0xe90a,	// (0x0002ea1d) ai5_sk_middle_pane

0xe914,	// (0x0002ea27) ai5_sk_right_pane

0xe91e,	// (0x0002ea31) bg_ai5_widget_pane_g1_ParamLimits

0xe91e,	// (0x0002ea31) bg_ai5_widget_pane_g1

0xe92a,	// (0x0002ea3d) bg_ai5_widget_pane_g2_ParamLimits

0xe92a,	// (0x0002ea3d) bg_ai5_widget_pane_g2

0xe936,	// (0x0002ea49) bg_ai5_widget_pane_g3_ParamLimits

0xe936,	// (0x0002ea49) bg_ai5_widget_pane_g3

0xe942,	// (0x0002ea55) bg_ai5_widget_pane_g4_ParamLimits

0xe942,	// (0x0002ea55) bg_ai5_widget_pane_g4

0xe94e,	// (0x0002ea61) bg_ai5_widget_pane_g5_ParamLimits

0xe94e,	// (0x0002ea61) bg_ai5_widget_pane_g5

0xe95a,	// (0x0002ea6d) bg_ai5_widget_pane_g6_ParamLimits

0xe95a,	// (0x0002ea6d) bg_ai5_widget_pane_g6

0xe966,	// (0x0002ea79) bg_ai5_widget_pane_g7_ParamLimits

0xe966,	// (0x0002ea79) bg_ai5_widget_pane_g7

0xe972,	// (0x0002ea85) bg_ai5_widget_pane_g8_ParamLimits

0xe972,	// (0x0002ea85) bg_ai5_widget_pane_g8

0xe97e,	// (0x0002ea91) bg_ai5_widget_pane_g9_ParamLimits

0xe97e,	// (0x0002ea91) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x0002ff4f) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0002ff4f) bg_ai5_widget_pane_g

0xe9b0,	// (0x0002eac3) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9b0,	// (0x0002eac3) cell_shortcut_ai5_widget_pane

0x27af,	// (0x000228c2) bg_cell_shortcut_ai5_widget_pane

0xe9c1,	// (0x0002ead4) cell_grid_ai5_widget_pane_g1

0x27af,	// (0x000228c2) highlight_cell_shortcut_ai5_widget_pane

0x8502,	// (0x00028615) ai5_sk_left_pane_g1

0xe9ca,	// (0x0002eadd) ai5_sk_left_pane_g2

0xe9d2,	// (0x0002eae5) ai5_sk_left_pane_g3

0xe9da,	// (0x0002eaed) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0002ff62) ai5_sk_left_pane_g

0xe9e2,	// (0x0002eaf5) ai5_sk_left_pane_t1

0x84fa,	// (0x0002860d) ai5_sk_right_pane_g1

0xe9f0,	// (0x0002eb03) ai5_sk_right_pane_g2

0xe9f8,	// (0x0002eb0b) ai5_sk_right_pane_g3

0xea00,	// (0x0002eb13) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x0002ff6b) ai5_sk_right_pane_g

0xea08,	// (0x0002eb1b) ai5_sk_right_pane_t1

0x84fa,	// (0x0002860d) ai5_sk_middle_pane_g1

0x8502,	// (0x00028615) ai5_sk_middle_pane_g2

0x851a,	// (0x0002862d) ai5_sk_middle_pane_g3

0xe9f8,	// (0x0002eb0b) ai5_sk_middle_pane_g4

0xe9d2,	// (0x0002eae5) ai5_sk_middle_pane_g5

0xea16,	// (0x0002eb29) ai5_sk_middle_pane_g6

0xea1e,	// (0x0002eb31) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0002ff74) ai5_sk_middle_pane_g

0x7ffb,	// (0x0002810e) aid_touch_area_size_lc0_ParamLimits

0x7ffb,	// (0x0002810e) aid_touch_area_size_lc0

0x9405,	// (0x00029518) cell_hwr_candidate_pane_t1_ParamLimits

0x8017,	// (0x0002812a) aid_touch_navi_pane

0x82f0,	// (0x00028403) status_dt_navi_pane_ParamLimits

0x82f0,	// (0x00028403) status_dt_navi_pane

0x82fd,	// (0x00028410) status_dt_sta_pane_ParamLimits

0x82fd,	// (0x00028410) status_dt_sta_pane

0xea26,	// (0x0002eb39) dt_sta_controll_pane

0xea33,	// (0x0002eb46) dt_sta_indi_pane

0xea44,	// (0x0002eb57) dt_sta_title_pane

0x1ba3,	// (0x00021cb6) bg_dt_sta_indi_pane_ParamLimits

0x1ba3,	// (0x00021cb6) bg_dt_sta_indi_pane

0xea57,	// (0x0002eb6a) dt_sta_battery_pane

0xea5f,	// (0x0002eb72) dt_sta_indi_pane_g1

0xea68,	// (0x0002eb7b) dt_sta_indi_pane_g2

0xea71,	// (0x0002eb84) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0002ff83) dt_sta_indi_pane_g

0xea7a,	// (0x0002eb8d) dt_sta_signal_pane

0x1e99,	// (0x00021fac) bg_dt_sta_title_pane_ParamLimits

0x1e99,	// (0x00021fac) bg_dt_sta_title_pane

0xa856,	// (0x0002a969) dt_sta_title_pane_g1

0xea83,	// (0x0002eb96) dt_sta_title_pane_t1_ParamLimits

0xea83,	// (0x0002eb96) dt_sta_title_pane_t1

0x19ef,	// (0x00021b02) bg_dt_sta_control_pane

0xea98,	// (0x0002ebab) dt_sta_controll_pane_g1

0xeaa1,	// (0x0002ebb4) bg_dt_sta_title_pane_g1

0xeaaa,	// (0x0002ebbd) bg_dt_sta_title_pane_g2

0xeab3,	// (0x0002ebc6) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x0002ff8a) bg_dt_sta_title_pane_g

0xc018,	// (0x0002c12b) bg_dt_sta_indi_pane_g1

0xeabc,	// (0x0002ebcf) dt_sta_signal_pane_g1

0xeac4,	// (0x0002ebd7) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x0002ff91) dt_sta_signal_pane_g

0xeacc,	// (0x0002ebdf) dt_sta_battery_pane_g1

0xead5,	// (0x0002ebe8) dt_sta_battery_pane_t1

0xc018,	// (0x0002c12b) bg_dt_sta_control_pane_g1

0x23dc,	// (0x000224ef) fep_china_uni_eep_pane

0x23e4,	// (0x000224f7) fep_china_uni_entry_pane_ParamLimits

0x23f4,	// (0x00022507) popup_fep_china_uni_window_g1_ParamLimits

0x2404,	// (0x00022517) popup_fep_china_uni_window_g2_ParamLimits

0x2404,	// (0x00022517) popup_fep_china_uni_window_g2

0x0001,

0xf6e2,	// (0x0002f7f5) popup_fep_china_uni_window_g_ParamLimits

0xf6e2,	// (0x0002f7f5) popup_fep_china_uni_window_g

0xeae4,	// (0x0002ebf7) fep_china_uni_eep_pane_g1

0xeaec,	// (0x0002ebff) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x0002e600) aid_touch_area_size_smil_player

0x816d,	// (0x00028280) lc0_clock_pane

0x8354,	// (0x00028467) status_pane_g5_ParamLimits

0x8354,	// (0x00028467) status_pane_g5

0x7baf,	// (0x00027cc2) popup_keymap_window

0x8312,	// (0x00028425) status_icon_pane

0xe6f3,	// (0x0002e806) cell_ai5_widget_pane_g3_ParamLimits

0xe70d,	// (0x0002e820) cell_ai5_widget_pane_g4_ParamLimits

0xe71d,	// (0x0002e830) cell_ai5_widget_pane_g5_ParamLimits

0xe745,	// (0x0002e858) cell_ai5_widget_pane_g8_ParamLimits

0xe745,	// (0x0002e858) cell_ai5_widget_pane_g8

0xe759,	// (0x0002e86c) cell_ai5_widget_pane_g9_ParamLimits

0xe759,	// (0x0002e86c) cell_ai5_widget_pane_g9

0xe76d,	// (0x0002e880) cell_ai5_widget_pane_g10_ParamLimits

0xe76d,	// (0x0002e880) cell_ai5_widget_pane_g10

0xeafb,	// (0x0002ec0e) status_icon_pane_g1

0x19ef,	// (0x00021b02) bg_popup_sub_pane_cp13

0xeb03,	// (0x0002ec16) popup_keymap_window_t1

0x7904,	// (0x00027a17) control_pane_g6_ParamLimits

0x7904,	// (0x00027a17) control_pane_g6

0x7911,	// (0x00027a24) control_pane_g7_ParamLimits

0x7911,	// (0x00027a24) control_pane_g7

0x791e,	// (0x00027a31) control_pane_g8_ParamLimits

0x791e,	// (0x00027a31) control_pane_g8

0xea26,	// (0x0002eb39) dt_sta_controll_pane_ParamLimits

0xea33,	// (0x0002eb46) dt_sta_indi_pane_ParamLimits

0xea44,	// (0x0002eb57) dt_sta_title_pane_ParamLimits

0x1d7a,	// (0x00021e8d) aid_size_touch_scroll_bar_cale

0x6789,	// (0x0002689c) popup_discreet_window_ParamLimits

0x6789,	// (0x0002689c) popup_discreet_window

0x6803,	// (0x00026916) popup_sk_window

0x8c98,	// (0x00028dab) bg_popup_sub_pane_cp28_ParamLimits

0x8c98,	// (0x00028dab) bg_popup_sub_pane_cp28

0xeb11,	// (0x0002ec24) popup_discreet_window_g1_ParamLimits

0xeb11,	// (0x0002ec24) popup_discreet_window_g1

0xeb31,	// (0x0002ec44) popup_discreet_window_t1_ParamLimits

0xeb31,	// (0x0002ec44) popup_discreet_window_t1

0xeb4f,	// (0x0002ec62) popup_discreet_window_t2_ParamLimits

0xeb4f,	// (0x0002ec62) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x0002ff96) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x0002ff96) popup_discreet_window_t

0x9d8b,	// (0x00029e9e) popup_sk_window_g1

0x9d95,	// (0x00029ea8) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x0002ff9d) popup_sk_window_g

0x9d9d,	// (0x00029eb0) popup_sk_window_t1

0x9dab,	// (0x00029ebe) popup_sk_window_t1_copy1

0xe6df,	// (0x0002e7f2) cell_ai5_widget_pane_g2_ParamLimits

0xe87a,	// (0x0002e98d) cell_ai5_widget_pane_t9_ParamLimits

0xe87a,	// (0x0002e98d) cell_ai5_widget_pane_t9

0x19ef,	// (0x00021b02) main_fep_fshwr2_pane

0x9db9,	// (0x00029ecc) aid_fshwr2_btn_pane

0x9dcd,	// (0x00029ee0) aid_fshwr2_syb_pane

0x9de1,	// (0x00029ef4) aid_fshwr2_txt_pane

0x9df1,	// (0x00029f04) fshwr2_func_candi_pane

0x9e15,	// (0x00029f28) fshwr2_hwr_syb_pane

0x9e2f,	// (0x00029f42) fshwr2_icf_pane

0x19ef,	// (0x00021b02) fshwr2_icf_bg_pane

0x9e5d,	// (0x00029f70) fshwr2_icf_pane_t1_ParamLimits

0x9e5d,	// (0x00029f70) fshwr2_icf_pane_t1

0x2359,	// (0x0002246c) fshwr2_func_candi_pane_g1

0xeba1,	// (0x0002ecb4) fshwr2_func_candi_row_pane_ParamLimits

0xeba1,	// (0x0002ecb4) fshwr2_func_candi_row_pane

0x9e76,	// (0x00029f89) cell_fshwr2_syb_pane_ParamLimits

0x9e76,	// (0x00029f89) cell_fshwr2_syb_pane

0xe4bd,	// (0x0002e5d0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4bd,	// (0x0002e5d0) fshwr2_hwr_syb_pane_g1

0x19ef,	// (0x00021b02) bg_popup_call_pane_cp01

0x9e99,	// (0x00029fac) fshwr2_func_candi_cell_pane_ParamLimits

0x9e99,	// (0x00029fac) fshwr2_func_candi_cell_pane

0xa6f6,	// (0x0002a809) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f6,	// (0x0002a809) fshwr2_func_candi_cell_bg_pane

0x9ee4,	// (0x00029ff7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ee4,	// (0x00029ff7) fshwr2_func_candi_cell_pane_g1

0x9f04,	// (0x0002a017) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f04,	// (0x0002a017) fshwr2_func_candi_cell_pane_t1

0x19ef,	// (0x00021b02) bg_button_pane_cp08

0x2049,	// (0x0002215c) cell_fshwr2_syb_bg_pane

0x9f17,	// (0x0002a02a) cell_fshwr2_syb_bg_pane_g1

0x9f2b,	// (0x0002a03e) cell_fshwr2_syb_bg_pane_t1

0x1e99,	// (0x00021fac) main_tmo_pane

0xab8f,	// (0x0002aca2) uni_indicator_pane_g1_ParamLimits

0xaba2,	// (0x0002acb5) uni_indicator_pane_g2_ParamLimits

0xabb4,	// (0x0002acc7) uni_indicator_pane_g3_ParamLimits

0xabc3,	// (0x0002acd6) uni_indicator_pane_g4_ParamLimits

0xabc3,	// (0x0002acd6) uni_indicator_pane_g4

0xabd7,	// (0x0002acea) uni_indicator_pane_g5_ParamLimits

0xabd7,	// (0x0002acea) uni_indicator_pane_g5

0xabd7,	// (0x0002acea) uni_indicator_pane_g6_ParamLimits

0xabd7,	// (0x0002acea) uni_indicator_pane_g6

0xf8e1,	// (0x0002f9f4) uni_indicator_pane_g_ParamLimits

0xd4f2,	// (0x0002d605) popup_tmo_note_window_ParamLimits

0xd4f2,	// (0x0002d605) popup_tmo_note_window

0x1e99,	// (0x00021fac) fshwr2_bg_pane

0x9ef5,	// (0x0002a008) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9ef5,	// (0x0002a008) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x0002ffa2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x0002ffa2) fshwr2_func_candi_cell_pane_g

0xc018,	// (0x0002c12b) bg_popup_window_pane_cp01

0x9f41,	// (0x0002a054) bg_popup_window_pane_g1_cp01

0xebc8,	// (0x0002ecdb) bg_popup_window_pane_cp22_ParamLimits

0xebc8,	// (0x0002ecdb) bg_popup_window_pane_cp22

0xebd6,	// (0x0002ece9) listscroll_tmo_link_pane_ParamLimits

0xebd6,	// (0x0002ece9) listscroll_tmo_link_pane

0xec16,	// (0x0002ed29) popup_tmo_note_window_g1_ParamLimits

0xec16,	// (0x0002ed29) popup_tmo_note_window_g1

0xec23,	// (0x0002ed36) tmo_note_info_pane_ParamLimits

0xec23,	// (0x0002ed36) tmo_note_info_pane

0xec3d,	// (0x0002ed50) list_tmo_note_info_pane_g1_ParamLimits

0xec3d,	// (0x0002ed50) list_tmo_note_info_pane_g1

0xec54,	// (0x0002ed67) list_tmo_note_info_pane_g2_ParamLimits

0xec54,	// (0x0002ed67) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x0002ffa7) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x0002ffa7) list_tmo_note_info_pane_g

0xec70,	// (0x0002ed83) list_tmo_note_info_text_pane_ParamLimits

0xec70,	// (0x0002ed83) list_tmo_note_info_text_pane

0xecf1,	// (0x0002ee04) list_tmo_link_pane

0xecfe,	// (0x0002ee11) scroll_pane_cp20

0xed0b,	// (0x0002ee1e) list_single_tmo_link_pane_ParamLimits

0xed0b,	// (0x0002ee1e) list_single_tmo_link_pane

0xed1b,	// (0x0002ee2e) list_single_tmo_link_pane_t1

0xed29,	// (0x0002ee3c) list_tmo_note_info_text_pane_t1_ParamLimits

0xed29,	// (0x0002ee3c) list_tmo_note_info_text_pane_t1

0x6ee7,	// (0x00026ffa) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6ee7,	// (0x00026ffa) aid_size_touch_scroll_bar_cp01

0x5a20,	// (0x00025b33) aid_size_touch_slider_marker

0x67eb,	// (0x000268fe) popup_settings_window_ParamLimits

0x67eb,	// (0x000268fe) popup_settings_window

0x5be5,	// (0x00025cf8) popup_candi_list_indi_window

0x8017,	// (0x0002812a) aid_touch_navi_pane_ParamLimits

0x9570,	// (0x00029683) rs_clock_indi_pane

0x9579,	// (0x0002968c) sctrl_sk_bottom_pane_ParamLimits

0x958a,	// (0x0002969d) sctrl_sk_top_pane_ParamLimits

0x9669,	// (0x0002977c) popup_fep_tooltip_window

0xe653,	// (0x0002e766) aid_size_cell_widget_grid_ParamLimits

0xe6c8,	// (0x0002e7db) cell_ai5_widget_pane_g1_ParamLimits

0xe6c8,	// (0x0002e7db) cell_ai5_widget_pane_g1

0xe72d,	// (0x0002e840) cell_ai5_widget_pane_g6_ParamLimits

0xe739,	// (0x0002e84c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe08,	// (0x0002ff1b) cell_ai5_widget_pane_g_ParamLimits

0xfe08,	// (0x0002ff1b) cell_ai5_widget_pane_g

0xe8a9,	// (0x0002e9bc) cell_ai5_widget_pane_t10_ParamLimits

0xe8a9,	// (0x0002e9bc) cell_ai5_widget_pane_t10

0xe8ec,	// (0x0002e9ff) grid_ai5_widget_pane_ParamLimits

0xe98a,	// (0x0002ea9d) cell_contacts_ai5_widget_pane_ParamLimits

0xe98a,	// (0x0002ea9d) cell_contacts_ai5_widget_pane

0xeb64,	// (0x0002ec77) popup_discreet_window_t3_ParamLimits

0xeb64,	// (0x0002ec77) popup_discreet_window_t3

0x9e47,	// (0x00029f5a) popup_fshwr2_char_preview_window_ParamLimits

0x9e47,	// (0x00029f5a) popup_fshwr2_char_preview_window

0xec8e,	// (0x0002eda1) tmo_note_info_pane_t1

0xeca3,	// (0x0002edb6) tmo_note_info_pane_t2

0xecb8,	// (0x0002edcb) tmo_note_info_pane_t3

0xeccd,	// (0x0002ede0) tmo_note_info_pane_t4

0xecdf,	// (0x0002edf2) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x0002ffac) tmo_note_info_pane_t

0xecf1,	// (0x0002ee04) list_tmo_link_pane_ParamLimits

0xecfe,	// (0x0002ee11) scroll_pane_cp20_ParamLimits

0x19ef,	// (0x00021b02) bg_popup_fep_char_preview_window_cp01

0xed42,	// (0x0002ee55) popup_fshwr2_char_preview_window_t1

0xed50,	// (0x0002ee63) popup_candi_list_indi_window_g1

0xed59,	// (0x0002ee6c) bg_cell_contacts_ai5_widget_pane

0xed65,	// (0x0002ee78) cell_contacts_ai5_widget_pane_g1

0xc6ff,	// (0x0002c812) cell_contacts_ai5_widget_pane_g2

0xed7a,	// (0x0002ee8d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x0002ffb7) cell_contacts_ai5_widget_pane_g

0xed86,	// (0x0002ee99) cell_contacts_ai5_widget_pane_t1

0x1e99,	// (0x00021fac) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedfd,	// (0x0002ef10) settings_container_pane

0x27af,	// (0x000228c2) listscroll_set_pane_copy1

0xb6fb,	// (0x0002b80e) scroll_pane_cp121_copy1

0x8a3d,	// (0x00028b50) set_content_pane_copy1

0xee09,	// (0x0002ef1c) aid_height_set_list_copy1_ParamLimits

0xee09,	// (0x0002ef1c) aid_height_set_list_copy1

0xadbf,	// (0x0002aed2) aid_size_parent_copy1_ParamLimits

0xadbf,	// (0x0002aed2) aid_size_parent_copy1

0xee15,	// (0x0002ef28) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee15,	// (0x0002ef28) button_value_adjust_pane_cp6_copy1

0x2049,	// (0x0002215c) list_highlight_pane_cp2_copy1_ParamLimits

0x2049,	// (0x0002215c) list_highlight_pane_cp2_copy1

0xee29,	// (0x0002ef3c) list_set_pane_copy1_ParamLimits

0xee29,	// (0x0002ef3c) list_set_pane_copy1

0xed98,	// (0x0002eeab) main_pane_set_t1_copy1_ParamLimits

0xed98,	// (0x0002eeab) main_pane_set_t1_copy1

0xedd2,	// (0x0002eee5) main_pane_set_t2_copy1_ParamLimits

0xedd2,	// (0x0002eee5) main_pane_set_t2_copy1

0xeed6,	// (0x0002efe9) main_pane_set_t3_copy1

0xeee4,	// (0x0002eff7) main_pane_set_t4_copy1

0xedf1,	// (0x0002ef04) set_content_pane_g1_copy1_ParamLimits

0xedf1,	// (0x0002ef04) set_content_pane_g1_copy1

0xeef2,	// (0x0002f005) setting_code_pane_copy1

0xeefa,	// (0x0002f00d) setting_slider_graphic_pane_copy1

0xeefa,	// (0x0002f00d) setting_slider_pane_copy1

0xef02,	// (0x0002f015) setting_text_pane_copy1

0xef02,	// (0x0002f015) setting_volume_pane_copy1

0xeef2,	// (0x0002f005) settings_code_pane_cp2_copy1

0xef0a,	// (0x0002f01d) settings_code_pane_cp_copy1_ParamLimits

0xef0a,	// (0x0002f01d) settings_code_pane_cp_copy1

0x9f4a,	// (0x0002a05d) volume_set_pane_copy1

0xef1e,	// (0x0002f031) volume_set_pane_g10_copy1

0xef26,	// (0x0002f039) volume_set_pane_g1_copy1

0xef2e,	// (0x0002f041) volume_set_pane_g2_copy1

0xef36,	// (0x0002f049) volume_set_pane_g3_copy1

0xef3e,	// (0x0002f051) volume_set_pane_g4_copy1

0xef46,	// (0x0002f059) volume_set_pane_g5_copy1

0xef4e,	// (0x0002f061) volume_set_pane_g6_copy1

0xef56,	// (0x0002f069) volume_set_pane_g7_copy1

0xef5e,	// (0x0002f071) volume_set_pane_g8_copy1

0xef66,	// (0x0002f079) volume_set_pane_g9_copy1

0x1a5f,	// (0x00021b72) bg_set_opt_pane_cp_copy1_ParamLimits

0x1a5f,	// (0x00021b72) bg_set_opt_pane_cp_copy1

0x9f52,	// (0x0002a065) setting_slider_pane_t1_copy1_ParamLimits

0x9f52,	// (0x0002a065) setting_slider_pane_t1_copy1

0x9f71,	// (0x0002a084) setting_slider_pane_t2_copy1_ParamLimits

0x9f71,	// (0x0002a084) setting_slider_pane_t2_copy1

0x9f8b,	// (0x0002a09e) setting_slider_pane_t3_copy1_ParamLimits

0x9f8b,	// (0x0002a09e) setting_slider_pane_t3_copy1

0x9fa3,	// (0x0002a0b6) slider_set_pane_copy1_ParamLimits

0x9fa3,	// (0x0002a0b6) slider_set_pane_copy1

0x1f5f,	// (0x00022072) set_opt_bg_pane_g1_copy2

0x1f67,	// (0x0002207a) set_opt_bg_pane_g2_copy2

0xef6e,	// (0x0002f081) set_opt_bg_pane_g3_copy2

0x1f77,	// (0x0002208a) set_opt_bg_pane_g4_copy2

0x1f7f,	// (0x00022092) set_opt_bg_pane_g5_copy2

0x1f87,	// (0x0002209a) set_opt_bg_pane_g6_copy2

0xef78,	// (0x0002f08b) set_opt_bg_pane_g7_copy2

0xef80,	// (0x0002f093) set_opt_bg_pane_g8_copy2

0xef8a,	// (0x0002f09d) set_opt_bg_pane_g9_copy2

0x9fb9,	// (0x0002a0cc) aid_size_touch_slider_mark_copy1_ParamLimits

0x9fb9,	// (0x0002a0cc) aid_size_touch_slider_mark_copy1

0xef94,	// (0x0002f0a7) slider_set_pane_g1_copy1

0x9fcd,	// (0x0002a0e0) slider_set_pane_g2_copy1

0x900b,	// (0x0002911e) slider_set_pane_g3_copy1_ParamLimits

0x900b,	// (0x0002911e) slider_set_pane_g3_copy1

0x901f,	// (0x00029132) slider_set_pane_g4_copy1_ParamLimits

0x901f,	// (0x00029132) slider_set_pane_g4_copy1

0x9037,	// (0x0002914a) slider_set_pane_g5_copy1_ParamLimits

0x9037,	// (0x0002914a) slider_set_pane_g5_copy1

0x900b,	// (0x0002911e) slider_set_pane_g6_copy1_ParamLimits

0x900b,	// (0x0002911e) slider_set_pane_g6_copy1

0x9fd5,	// (0x0002a0e8) slider_set_pane_g7_copy1_ParamLimits

0x9fd5,	// (0x0002a0e8) slider_set_pane_g7_copy1

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp2_copy1

0xef9d,	// (0x0002f0b0) setting_slider_graphic_pane_g1_copy1

0xefa6,	// (0x0002f0b9) setting_slider_graphic_pane_t1_copy1

0xefb6,	// (0x0002f0c9) setting_slider_graphic_pane_t2_copy1

0xefc6,	// (0x0002f0d9) slider_set_pane_cp_copy1

0xefd6,	// (0x0002f0e9) input_focus_pane_cp1_copy1

0xefdf,	// (0x0002f0f2) list_set_text_pane_copy1

0xefe7,	// (0x0002f0fa) setting_text_pane_g1_copy1

0x64dc,	// (0x000265ef) set_text_pane_t1_copy1

0xefd6,	// (0x0002f0e9) input_focus_pane_cp2_copy1

0xefe7,	// (0x0002f0fa) setting_code_pane_g1_copy1

0xeff0,	// (0x0002f103) setting_code_pane_t1_copy1

0xeffe,	// (0x0002f111) list_set_graphic_pane_copy1

0x1a03,	// (0x00021b16) bg_set_opt_pane_cp4_copy1

0x2534,	// (0x00022647) list_set_graphic_pane_g1_copy1_ParamLimits

0x2534,	// (0x00022647) list_set_graphic_pane_g1_copy1

0xf012,	// (0x0002f125) list_set_graphic_pane_g2_copy1

0x254c,	// (0x0002265f) list_set_graphic_pane_t1_copy1_ParamLimits

0x254c,	// (0x0002265f) list_set_graphic_pane_t1_copy1

0xc018,	// (0x0002c12b) rs_clock_indi_pane_g1

0xf01a,	// (0x0002f12d) rs_clock_indi_pane_t1

0xf028,	// (0x0002f13b) rs_indi_pane

0xf030,	// (0x0002f143) rs_indi_pane_g1

0xf039,	// (0x0002f14c) rs_indi_pane_g2

0xed50,	// (0x0002ee63) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x0002ffbe) rs_indi_pane_g

0x27af,	// (0x000228c2) bg_popup_preview_window_pane_cp03

0xf042,	// (0x0002f155) popup_fep_tooltip_window_t1

0xcca1,	// (0x0002cdb4) popup_note2_window_g2_ParamLimits

0xcca1,	// (0x0002cdb4) popup_note2_window_g2

0x0001,

0xfc3f,	// (0x0002fd52) popup_note2_window_g_ParamLimits

0xfc3f,	// (0x0002fd52) popup_note2_window_g

0xd18e,	// (0x0002d2a1) bg_popup_sub_pane_cp11_ParamLimits

0xd19b,	// (0x0002d2ae) cell_ai3_links_pane_g1_ParamLimits

0xd1b2,	// (0x0002d2c5) cell_ai3_links_pane_t1

0x64dc,	// (0x000265ef) set_text_pane_t1_copy1_ParamLimits

0x26ed,	// (0x00022800) cell_graphic_popup_pane_cp2_ParamLimits

0x26ed,	// (0x00022800) cell_graphic_popup_pane_cp2

0xf050,	// (0x0002f163) cell_graphic_popup_pane_g1_cp2

0x1cfd,	// (0x00021e10) cell_graphic_popup_pane_g2_cp2

0xf058,	// (0x0002f16b) cell_graphic_popup_pane_g3_cp2

0xf060,	// (0x0002f173) cell_graphic_popup_pane_t2_cp2

0x1d0e,	// (0x00021e21) grid_highlight_pane_cp3_cp2

0x21d6,	// (0x000222e9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1e99,	// (0x00021fac) main_tmo_pane_ParamLimits

0xd4e6,	// (0x0002d5f9) popup_tmo_big_image_note_window

0xe6b7,	// (0x0002e7ca) cell_ai5_widget_list_pane

0xe6bf,	// (0x0002e7d2) cell_ai5_widget_lrg_icon_pane

0xec8e,	// (0x0002eda1) tmo_note_info_pane_t1_ParamLimits

0xeca3,	// (0x0002edb6) tmo_note_info_pane_t2_ParamLimits

0xecb8,	// (0x0002edcb) tmo_note_info_pane_t3_ParamLimits

0xeccd,	// (0x0002ede0) tmo_note_info_pane_t4_ParamLimits

0xecdf,	// (0x0002edf2) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x0002ffac) tmo_note_info_pane_t_ParamLimits

0xedfd,	// (0x0002ef10) settings_container_pane_ParamLimits

0xefce,	// (0x0002f0e1) indicator_popup_pane_cp5

0xefce,	// (0x0002f0e1) indicator_popup_pane_cp6

0xeffe,	// (0x0002f111) list_set_graphic_pane_copy1_ParamLimits

0x19ef,	// (0x00021b02) bg_popup_window_pane_cp23

0xf06e,	// (0x0002f181) popup_tmo_big_image_note_window_g1

0xf077,	// (0x0002f18a) popup_tmo_big_image_note_window_t1

0xf087,	// (0x0002f19a) popup_tmo_big_image_note_window_t2

0xf097,	// (0x0002f1aa) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x0002ffc5) popup_tmo_big_image_note_window_t

0xc018,	// (0x0002c12b) cell_ai5_widget_lrg_icon_pane_g1

0xf0a7,	// (0x0002f1ba) cell_ai5_widget_lrg_icon_pane_t1

0xf0b5,	// (0x0002f1c8) cell_ai5_widget_list_row_pane_ParamLimits

0xf0b5,	// (0x0002f1c8) cell_ai5_widget_list_row_pane

0xf0cc,	// (0x0002f1df) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0cc,	// (0x0002f1df) cell_ai5_widget_list_row_pane_g1

0xf0d9,	// (0x0002f1ec) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0d9,	// (0x0002f1ec) cell_ai5_widget_list_row_pane_t1

0xf104,	// (0x0002f217) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf104,	// (0x0002f217) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x0002ffcc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x0002ffcc) cell_ai5_widget_list_row_pane_t

0x19ef,	// (0x00021b02) main_fep_vtchi_ss_pane

0xf154,	// (0x0002f267) popup_fep_char_pre_window

0xf15c,	// (0x0002f26f) popup_fep_ituss_window

0xf18e,	// (0x0002f2a1) popup_fep_vkbss_window

0x2049,	// (0x0002215c) grid_vkbss_keypad_pane_ParamLimits

0x2049,	// (0x0002215c) grid_vkbss_keypad_pane

0xf1d4,	// (0x0002f2e7) ituss_keypad_pane

0xa016,	// (0x0002a129) aid_vkbss_key_offset_ParamLimits

0xa016,	// (0x0002a129) aid_vkbss_key_offset

0xa022,	// (0x0002a135) cell_vkbss_key_pane_ParamLimits

0xa022,	// (0x0002a135) cell_vkbss_key_pane

0xf1e4,	// (0x0002f2f7) bg_cell_vkbss_key_g1_ParamLimits

0xf1e4,	// (0x0002f2f7) bg_cell_vkbss_key_g1

0xf1f0,	// (0x0002f303) cell_vkbss_key_3p_pane_ParamLimits

0xf1f0,	// (0x0002f303) cell_vkbss_key_3p_pane

0xf226,	// (0x0002f339) cell_vkbss_key_g1_ParamLimits

0xf226,	// (0x0002f339) cell_vkbss_key_g1

0xf25c,	// (0x0002f36f) cell_vkbss_key_t1_ParamLimits

0xf25c,	// (0x0002f36f) cell_vkbss_key_t1

0xa06d,	// (0x0002a180) cell_ituss_key_pane_ParamLimits

0xa06d,	// (0x0002a180) cell_ituss_key_pane

0xf2b8,	// (0x0002f3cb) bg_cell_ituss_key_g1_ParamLimits

0xf2b8,	// (0x0002f3cb) bg_cell_ituss_key_g1

0xf2c4,	// (0x0002f3d7) cell_ituss_key_pane_g1_ParamLimits

0xf2c4,	// (0x0002f3d7) cell_ituss_key_pane_g1

0xa07e,	// (0x0002a191) cell_ituss_key_pane_g2_ParamLimits

0xa07e,	// (0x0002a191) cell_ituss_key_pane_g2

0x0005,

0xfec0,	// (0x0002ffd3) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x0002ffd3) cell_ituss_key_pane_g

0xa102,	// (0x0002a215) cell_ituss_key_t1_ParamLimits

0xa102,	// (0x0002a215) cell_ituss_key_t1

0xa13c,	// (0x0002a24f) cell_ituss_key_t2_ParamLimits

0xa13c,	// (0x0002a24f) cell_ituss_key_t2

0xa16e,	// (0x0002a281) cell_ituss_key_t3_ParamLimits

0xa16e,	// (0x0002a281) cell_ituss_key_t3

0xa19f,	// (0x0002a2b2) cell_ituss_key_t4_ParamLimits

0xa19f,	// (0x0002a2b2) cell_ituss_key_t4

0x0005,

0xfecd,	// (0x0002ffe0) cell_ituss_key_t_ParamLimits

0xfecd,	// (0x0002ffe0) cell_ituss_key_t

0xf2ea,	// (0x0002f3fd) cell_vkbss_key_3p_pane_g1

0xf2f2,	// (0x0002f405) cell_vkbss_key_3p_pane_g2

0xf2fa,	// (0x0002f40d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeda,	// (0x0002ffed) cell_vkbss_key_3p_pane_g

0x27af,	// (0x000228c2) bg_popup_fep_char_preview_window_cp02

0xf302,	// (0x0002f415) popup_fep_char_pre_window_t1

0xe649,	// (0x0002e75c) main_ai5_sk_pane

0xed59,	// (0x0002ee6c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed65,	// (0x0002ee78) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6ff,	// (0x0002c812) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7a,	// (0x0002ee8d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x0002ffb7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed86,	// (0x0002ee99) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1e99,	// (0x00021fac) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf310,	// (0x0002f423) main_ai5_sk_pane_g1

0x8ad9,	// (0x00028bec) popup_query_code_window_g1

0xf175,	// (0x0002f288) popup_fep_vkb_icf_pane

0xf1a8,	// (0x0002f2bb) popup_fep_vtchi_icf_pane

0xf319,	// (0x0002f42c) bg_icf_pane

0xf319,	// (0x0002f42c) list_vkb_icf_pane

0xf325,	// (0x0002f438) bg_icf_pane_cp01

0xf338,	// (0x0002f44b) vtchi_icf_list_pane

0xf398,	// (0x0002f4ab) list_vkb_icf_pane_t1_ParamLimits

0xf398,	// (0x0002f4ab) list_vkb_icf_pane_t1

0xf3bd,	// (0x0002f4d0) vtchi_icf_list_pane_t1_ParamLimits

0xf3bd,	// (0x0002f4d0) vtchi_icf_list_pane_t1

0xf15c,	// (0x0002f26f) popup_fep_ituss_window_ParamLimits

0xf1a8,	// (0x0002f2bb) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d4,	// (0x0002f2e7) ituss_keypad_pane_ParamLimits

0xa00c,	// (0x0002a11f) ituss_sks_pane

0xf319,	// (0x0002f42c) bg_icf_pane_ParamLimits

0xf12c,	// (0x0002f23f) icf_edit_indi_pane_ParamLimits

0xf12c,	// (0x0002f23f) icf_edit_indi_pane

0xf319,	// (0x0002f42c) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x0002f438) bg_icf_pane_cp01_ParamLimits

0xf147,	// (0x0002f25a) icf_edit_indi_pane_cp01_ParamLimits

0xf147,	// (0x0002f25a) icf_edit_indi_pane_cp01

0xf338,	// (0x0002f44b) vtchi_query_pane

0xe4bd,	// (0x0002e5d0) icf_edit_indi_pane_g1_ParamLimits

0xe4bd,	// (0x0002e5d0) icf_edit_indi_pane_g1

0xf438,	// (0x0002f54b) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0002f54b) icf_edit_indi_pane_g2

0x0001,

0xff05,	// (0x00030018) icf_edit_indi_pane_g_ParamLimits

0xff05,	// (0x00030018) icf_edit_indi_pane_g

0xf44c,	// (0x0002f55f) icf_edit_indi_pane_t1

0xf3e1,	// (0x0002f4f4) bg_input_focus_pane_cp042

0x1d71,	// (0x00021e84) vtchi_button_pane

0xf3ea,	// (0x0002f4fd) vtchi_query_pane_t1

0xf3f8,	// (0x0002f50b) vtchi_query_pane_t2

0xf406,	// (0x0002f519) vtchi_query_pane_t3

0x0002,

0xfef4,	// (0x00030007) vtchi_query_pane_t

0x19ef,	// (0x00021b02) bg_button_pane_cp13

0xf414,	// (0x0002f527) vtchi_button_pane_g1

0xa220,	// (0x0002a333) ituss_sks_pane_g1

0xa22b,	// (0x0002a33e) ituss_sks_pane_g2

0x0001,

0xfefb,	// (0x0003000e) ituss_sks_pane_g

0xf41c,	// (0x0002f52f) ituss_sks_pane_t1

0xf42a,	// (0x0002f53d) ituss_sks_pane_t2

0x0001,

0xff00,	// (0x00030013) ituss_sks_pane_t

0xba93,	// (0x0002bba6) indicator_nsta_pane_cp_g1

0xba9c,	// (0x0002bbaf) indicator_nsta_pane_cp_g2

0xbaa4,	// (0x0002bbb7) indicator_nsta_pane_cp_g3

0xbaac,	// (0x0002bbbf) indicator_nsta_pane_cp_g4

0xba9c,	// (0x0002bbaf) indicator_nsta_pane_cp_g5

0xbaa4,	// (0x0002bbb7) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x0002fb9c) indicator_nsta_pane_cp_g

0xe1ef,	// (0x0002e302) cell_graphic2_pane_t2_ParamLimits

0xe1ef,	// (0x0002e302) cell_graphic2_pane_t2

0x0001,

0xfd8f,	// (0x0002fea2) cell_graphic2_pane_t_ParamLimits

0xfd8f,	// (0x0002fea2) cell_graphic2_pane_t

0xe21b,	// (0x0002e32e) cell_graphic2_control_pane_t1

0x73b1,	// (0x000274c4) signal_pane_g3_ParamLimits

0x73b1,	// (0x000274c4) signal_pane_g3

0x73c3,	// (0x000274d6) signal_pane_g4_ParamLimits

0x73c3,	// (0x000274d6) signal_pane_g4

0xf116,	// (0x0002f229) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf116,	// (0x0002f229) cell_ai5_widget_list_row_pane_t3

0xf2d8,	// (0x0002f3eb) cell_ituss_key_pane_t1_ParamLimits

0xf2d8,	// (0x0002f3eb) cell_ituss_key_pane_t1

0x870c,	// (0x0002881f) form_field_data_wide_pane_vc_t2_ParamLimits

0x870c,	// (0x0002881f) form_field_data_wide_pane_vc_t2

0x8720,	// (0x00028833) form_field_data_wide_pane_vc_t3_ParamLimits

0x8720,	// (0x00028833) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002f8dc) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002f8dc) form_field_data_wide_pane_vc_t

0xb73d,	// (0x0002b850) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb73d,	// (0x0002b850) form_field_slider_wide_pane_vc_t3

0xb81b,	// (0x0002b92e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb81b,	// (0x0002b92e) form_field_popup_wide_pane_vc_t2

0xb832,	// (0x0002b945) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb832,	// (0x0002b945) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x0002fb8b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x0002fb8b) form_field_popup_wide_pane_vc_t

0x9db9,	// (0x00029ecc) aid_fshwr2_btn_pane_ParamLimits

0x9dcd,	// (0x00029ee0) aid_fshwr2_syb_pane_ParamLimits

0x9de1,	// (0x00029ef4) aid_fshwr2_txt_pane_ParamLimits

0x1e99,	// (0x00021fac) fshwr2_bg_pane_ParamLimits

0x9df1,	// (0x00029f04) fshwr2_func_candi_pane_ParamLimits

0x9e15,	// (0x00029f28) fshwr2_hwr_syb_pane_ParamLimits

0x9e2f,	// (0x00029f42) fshwr2_icf_pane_ParamLimits

0x60d7,	// (0x000261ea) list_double_graphic_pane_vc_g4_ParamLimits

0x60d7,	// (0x000261ea) list_double_graphic_pane_vc_g4

0xa09e,	// (0x0002a1b1) cell_ituss_key_pane_g3_ParamLimits

0xa09e,	// (0x0002a1b1) cell_ituss_key_pane_g3

0xa1d0,	// (0x0002a2e3) cell_ituss_key_t5_ParamLimits

0xa1d0,	// (0x0002a2e3) cell_ituss_key_t5

0xf18e,	// (0x0002f2a1) popup_fep_vkbss_window_ParamLimits

0xd7c2,	// (0x0002d8d5) aid_cell_ai5_quarter

0xf44c,	// (0x0002f55f) icf_edit_indi_pane_t1_ParamLimits

0x6b6f,	// (0x00026c82) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6b6f,	// (0x00026c82) aid_tch_indicator_popup_pane_cp2

0x6b82,	// (0x00026c95) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6b82,	// (0x00026c95) aid_tch_query_popup_data_pane_cp2

0x8a81,	// (0x00028b94) aid_tch_query_popup_pane_ParamLimits

0x8a81,	// (0x00028b94) aid_tch_query_popup_pane

0x8a81,	// (0x00028b94) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8a81,	// (0x00028b94) aid_tch_query_popup_data_pane_cp1

0x2049,	// (0x0002215c) cell_fshwr2_syb_bg_pane_ParamLimits

0x9f17,	// (0x0002a02a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9f2b,	// (0x0002a03e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf175,	// (0x0002f288) popup_fep_vkb_icf_pane_ParamLimits

0x9c07,	// (0x00029d1a) bg_popup_fep_char_preview_window_g10

0xe781,	// (0x0002e894) cell_ai5_widget_pane_g11_ParamLimits

0xe781,	// (0x0002e894) cell_ai5_widget_pane_g11

0xe78d,	// (0x0002e8a0) cell_ai5_widget_pane_g12_ParamLimits

0xe78d,	// (0x0002e8a0) cell_ai5_widget_pane_g12

0xe799,	// (0x0002e8ac) cell_ai5_widget_pane_g13_ParamLimits

0xe799,	// (0x0002e8ac) cell_ai5_widget_pane_g13

0xe8c8,	// (0x0002e9db) cell_ai5_widget_pane_t11_ParamLimits

0xe8c8,	// (0x0002e9db) cell_ai5_widget_pane_t11

0xe8da,	// (0x0002e9ed) cell_ai5_widget_pane_t12_ParamLimits

0xe8da,	// (0x0002e9ed) cell_ai5_widget_pane_t12

0xa0aa,	// (0x0002a1bd) cell_ituss_key_pane_g4_ParamLimits

0xa0aa,	// (0x0002a1bd) cell_ituss_key_pane_g4

0xa0c6,	// (0x0002a1d9) cell_ituss_key_pane_g5_ParamLimits

0xa0c6,	// (0x0002a1d9) cell_ituss_key_pane_g5

0xa0e2,	// (0x0002a1f5) cell_ituss_key_pane_g6_ParamLimits

0xa0e2,	// (0x0002a1f5) cell_ituss_key_pane_g6

0x84f2,	// (0x00028605) bg_icf_pane_g1

0xf340,	// (0x0002f453) bg_icf_pane_g2

0xf34c,	// (0x0002f45f) bg_icf_pane_g3

0xf356,	// (0x0002f469) bg_icf_pane_g4

0xf362,	// (0x0002f475) bg_icf_pane_g5

0xf36c,	// (0x0002f47f) bg_icf_pane_g6

0xf378,	// (0x0002f48b) bg_icf_pane_g7

0xf382,	// (0x0002f495) bg_icf_pane_g8

0xf38e,	// (0x0002f4a1) bg_icf_pane_g9

0x0008,

0xfee1,	// (0x0002fff4) bg_icf_pane_g

0xf1c1,	// (0x0002f2d4) popup_hyb_candi_window_ParamLimits

0xf1c1,	// (0x0002f2d4) popup_hyb_candi_window

0x85f6,	// (0x00028709) bg_popup_sub_pane_cp01_ParamLimits

0x85f6,	// (0x00028709) bg_popup_sub_pane_cp01

0xf465,	// (0x0002f578) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0002f578) entry_hyb_candi_pane

0xf474,	// (0x0002f587) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0002f587) grid_hyb_candi_pane

0xf489,	// (0x0002f59c) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0002f59c) grid_hyb_phrase_pane

0xf498,	// (0x0002f5ab) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0002f5ab) cell_hyb_candi_pane

0xf4bb,	// (0x0002f5ce) cell_hyb_candi_scroll_pane

0x2359,	// (0x0002246c) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0002f5d7) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0002f5e5) cell_hyb_phrase_pane

0x2359,	// (0x0002246c) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0002f5ee) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0002f5fc) entry_hyb_candi_pane_t1

0x27af,	// (0x000228c2) input_focus_pane_cp06

0xf4f7,	// (0x0002f60a) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0002f612) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0002f61a) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0002f622) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0002f62a) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0002f632) cell_hyb_candi_scroll_pane_g4

0xe57e,	// (0x0002e691) ai5_page_g1

0xa1e2,	// (0x0002a2f5) cell_ituss_key_t6_ParamLimits

0xa1e2,	// (0x0002a2f5) cell_ituss_key_t6

0x9feb,	// (0x0002a0fe) icf_edit_indi_pane_cp02_ParamLimits

0x9feb,	// (0x0002a0fe) icf_edit_indi_pane_cp02

0x9fff,	// (0x0002a112) icf_edit_indi_pane_cp03_ParamLimits

0x9fff,	// (0x0002a112) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

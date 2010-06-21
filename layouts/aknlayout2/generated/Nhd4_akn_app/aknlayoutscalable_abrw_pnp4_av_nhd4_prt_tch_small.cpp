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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000305bf };

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
0x5ae3,	// (0x000360a2) Screen

0x5aef,	// (0x000360ae) application_window_ParamLimits

0x5aef,	// (0x000360ae) application_window

0x22d2,	// (0x00032891) screen_g1

0x5b4b,	// (0x0003610a) area_bottom_pane_ParamLimits

0x5b4b,	// (0x0003610a) area_bottom_pane

0x5c0b,	// (0x000361ca) area_top_pane_ParamLimits

0x5c0b,	// (0x000361ca) area_top_pane

0x5ca9,	// (0x00036268) main_pane_ParamLimits

0x5ca9,	// (0x00036268) main_pane

0x22dc,	// (0x0003289b) misc_graphics

0x982a,	// (0x00039de9) battery_pane_ParamLimits

0x982a,	// (0x00039de9) battery_pane

0xa4f8,	// (0x0003aab7) bg_status_flat_pane_g8

0xa500,	// (0x0003aabf) bg_status_flat_pane_g9

0x98f2,	// (0x00039eb1) context_pane_ParamLimits

0x98f2,	// (0x00039eb1) context_pane

0x9a08,	// (0x00039fc7) navi_pane_ParamLimits

0x9a08,	// (0x00039fc7) navi_pane

0x9a8c,	// (0x0003a04b) signal_pane_ParamLimits

0x9a8c,	// (0x0003a04b) signal_pane

0x0008,

0xf86a,	// (0x0003fe29) bg_status_flat_pane_g

0x9af9,	// (0x0003a0b8) status_pane_g1_ParamLimits

0x9af9,	// (0x0003a0b8) status_pane_g1

0x9b0d,	// (0x0003a0cc) status_pane_g2_ParamLimits

0x9b0d,	// (0x0003a0cc) status_pane_g2

0x9b19,	// (0x0003a0d8) status_pane_g3_ParamLimits

0x9b19,	// (0x0003a0d8) status_pane_g3

0x0004,

0xf796,	// (0x0003fd55) status_pane_g_ParamLimits

0xf796,	// (0x0003fd55) status_pane_g

0x9b4d,	// (0x0003a10c) title_pane_ParamLimits

0x9b4d,	// (0x0003a10c) title_pane

0x9b8a,	// (0x0003a149) uni_indicator_pane_ParamLimits

0x9b8a,	// (0x0003a149) uni_indicator_pane

0x975a,	// (0x00039d19) bg_list_pane_ParamLimits

0x975a,	// (0x00039d19) bg_list_pane

0x4678,	// (0x00034c37) find_pane

0x977a,	// (0x00039d39) listscroll_app_pane_ParamLimits

0x977a,	// (0x00039d39) listscroll_app_pane

0x9786,	// (0x00039d45) listscroll_form_pane

0x5a65,	// (0x00036024) listscroll_gen_pane_ParamLimits

0x5a65,	// (0x00036024) listscroll_gen_pane

0x7951,	// (0x00037f10) listscroll_set_pane

0x6b5c,	// (0x0003711b) main_idle_act_pane

0x7581,	// (0x00037b40) main_idle_trad_pane

0x7581,	// (0x00037b40) main_list_empty_pane

0x977a,	// (0x00039d39) main_midp_pane

0x97a0,	// (0x00039d5f) main_pane_g1_ParamLimits

0x97a0,	// (0x00039d5f) main_pane_g1

0x7967,	// (0x00037f26) popup_ai_message_window_ParamLimits

0x7967,	// (0x00037f26) popup_ai_message_window

0x7a0b,	// (0x00037fca) popup_fep_china_uni_window_ParamLimits

0x7a0b,	// (0x00037fca) popup_fep_china_uni_window

0x7a65,	// (0x00038024) popup_fep_japan_candidate_window_ParamLimits

0x7a65,	// (0x00038024) popup_fep_japan_candidate_window

0x7a83,	// (0x00038042) popup_fep_japan_predictive_window_ParamLimits

0x7a83,	// (0x00038042) popup_fep_japan_predictive_window

0x7ab3,	// (0x00038072) popup_find_window

0x7ac0,	// (0x0003807f) popup_grid_graphic_window_ParamLimits

0x7ac0,	// (0x0003807f) popup_grid_graphic_window

0x7aea,	// (0x000380a9) popup_large_graphic_colour_window

0x7b10,	// (0x000380cf) popup_menu_window_ParamLimits

0x7b10,	// (0x000380cf) popup_menu_window

0x7ccc,	// (0x0003828b) popup_note_image_window

0x7cb8,	// (0x00038277) popup_note_wait_window_ParamLimits

0x7cb8,	// (0x00038277) popup_note_wait_window

0x7cb8,	// (0x00038277) popup_note_window_ParamLimits

0x7cb8,	// (0x00038277) popup_note_window

0x7d22,	// (0x000382e1) popup_query_code_window_ParamLimits

0x7d22,	// (0x000382e1) popup_query_code_window

0x7d36,	// (0x000382f5) popup_query_data_code_window_ParamLimits

0x7d36,	// (0x000382f5) popup_query_data_code_window

0x7d53,	// (0x00038312) popup_query_data_window_ParamLimits

0x7d53,	// (0x00038312) popup_query_data_window

0x7d6f,	// (0x0003832e) popup_query_sat_info_window_ParamLimits

0x7d6f,	// (0x0003832e) popup_query_sat_info_window

0x7da8,	// (0x00038367) popup_snote_single_graphic_window_ParamLimits

0x7da8,	// (0x00038367) popup_snote_single_graphic_window

0x7da8,	// (0x00038367) popup_snote_single_text_window_ParamLimits

0x7da8,	// (0x00038367) popup_snote_single_text_window

0x7dbd,	// (0x0003837c) popup_sub_window_general

0x7eed,	// (0x000384ac) popup_window_general_ParamLimits

0x7eed,	// (0x000384ac) popup_window_general

0x97ae,	// (0x00039d6d) power_save_pane

0x77e3,	// (0x00037da2) control_pane_g1_ParamLimits

0x77e3,	// (0x00037da2) control_pane_g1

0x780a,	// (0x00037dc9) control_pane_g2_ParamLimits

0x780a,	// (0x00037dc9) control_pane_g2

0x971d,	// (0x00039cdc) control_pane_g3_ParamLimits

0x971d,	// (0x00039cdc) control_pane_g3

0x0007,

0xf77e,	// (0x0003fd3d) control_pane_g_ParamLimits

0xf77e,	// (0x0003fd3d) control_pane_g

0x7854,	// (0x00037e13) control_pane_t1_ParamLimits

0x7854,	// (0x00037e13) control_pane_t1

0x78a8,	// (0x00037e67) control_pane_t2_ParamLimits

0x78a8,	// (0x00037e67) control_pane_t2

0x0002,

0xf78f,	// (0x0003fd4e) control_pane_t_ParamLimits

0xf78f,	// (0x0003fd4e) control_pane_t

0x9642,	// (0x00039c01) navi_navi_volume_pane_cp1

0x964a,	// (0x00039c09) status_small_icon_pane

0x9652,	// (0x00039c11) status_small_pane_g1_ParamLimits

0x9652,	// (0x00039c11) status_small_pane_g1

0x9686,	// (0x00039c45) status_small_pane_g2_ParamLimits

0x9686,	// (0x00039c45) status_small_pane_g2

0x9692,	// (0x00039c51) status_small_pane_g3_ParamLimits

0x9692,	// (0x00039c51) status_small_pane_g3

0x969e,	// (0x00039c5d) status_small_pane_g4_ParamLimits

0x969e,	// (0x00039c5d) status_small_pane_g4

0x96aa,	// (0x00039c69) status_small_pane_g5_ParamLimits

0x96aa,	// (0x00039c69) status_small_pane_g5

0x96b8,	// (0x00039c77) status_small_pane_g6_ParamLimits

0x96b8,	// (0x00039c77) status_small_pane_g6

0x0007,

0xf76d,	// (0x0003fd2c) status_small_pane_g_ParamLimits

0xf76d,	// (0x0003fd2c) status_small_pane_g

0x96e7,	// (0x00039ca6) status_small_pane_t1

0x9709,	// (0x00039cc8) status_small_wait_pane_ParamLimits

0x9709,	// (0x00039cc8) status_small_wait_pane

0x6f2f,	// (0x000374ee) aid_levels_signal_ParamLimits

0x6f2f,	// (0x000374ee) aid_levels_signal

0x6f41,	// (0x00037500) signal_pane_g1_ParamLimits

0x6f41,	// (0x00037500) signal_pane_g1

0x6f56,	// (0x00037515) signal_pane_g2_ParamLimits

0x6f56,	// (0x00037515) signal_pane_g2

0x0003,

0xf6fe,	// (0x0003fcbd) signal_pane_g_ParamLimits

0xf6fe,	// (0x0003fcbd) signal_pane_g

0x2b75,	// (0x00033134) context_pane_g1

0x5eea,	// (0x000364a9) title_pane_g1

0x5f14,	// (0x000364d3) title_pane_t1

0x22f2,	// (0x000328b1) title_pane_t2

0x2318,	// (0x000328d7) title_pane_t3

0x0002,

0xf557,	// (0x0003fb16) title_pane_t

0x9ba2,	// (0x0003a161) aid_levels_battery_ParamLimits

0x9ba2,	// (0x0003a161) aid_levels_battery

0x9bb6,	// (0x0003a175) battery_pane_g1_ParamLimits

0x9bb6,	// (0x0003a175) battery_pane_g1

0x9bcc,	// (0x0003a18b) battery_pane_g2_ParamLimits

0x9bcc,	// (0x0003a18b) battery_pane_g2

0x0001,

0xf7a1,	// (0x0003fd60) battery_pane_g_ParamLimits

0xf7a1,	// (0x0003fd60) battery_pane_g

0xae1c,	// (0x0003b3db) uni_indicator_pane_g1

0xae2f,	// (0x0003b3ee) uni_indicator_pane_g2

0xae41,	// (0x0003b400) uni_indicator_pane_g3

0x0005,

0xf912,	// (0x0003fed1) uni_indicator_pane_g

0x73f3,	// (0x000379b2) navi_icon_pane_ParamLimits

0x73f3,	// (0x000379b2) navi_icon_pane

0x733d,	// (0x000378fc) navi_midp_pane

0x740f,	// (0x000379ce) navi_navi_pane

0x7419,	// (0x000379d8) navi_text_pane_ParamLimits

0x7419,	// (0x000379d8) navi_text_pane

0x22d2,	// (0x00032891) status_small_wait_pane_g1

0x2569,	// (0x00032b28) status_small_wait_pane_g2

0x0001,

0xf90d,	// (0x0003fecc) status_small_wait_pane_g

0xab43,	// (0x0003b102) navi_navi_icon_text_pane

0xab4b,	// (0x0003b10a) navi_navi_pane_g1_ParamLimits

0xab4b,	// (0x0003b10a) navi_navi_pane_g1

0xab5d,	// (0x0003b11c) navi_navi_pane_g2_ParamLimits

0xab5d,	// (0x0003b11c) navi_navi_pane_g2

0x0001,

0xf8db,	// (0x0003fe9a) navi_navi_pane_g_ParamLimits

0xf8db,	// (0x0003fe9a) navi_navi_pane_g

0xab6f,	// (0x0003b12e) navi_navi_tabs_pane

0xab78,	// (0x0003b137) navi_navi_text_pane

0xab43,	// (0x0003b102) navi_navi_volume_pane

0xab1f,	// (0x0003b0de) navi_text_pane_t1

0xab13,	// (0x0003b0d2) navi_icon_pane_g1

0xaa66,	// (0x0003b025) navi_navi_text_pane_t1

0x81d2,	// (0x00038791) navi_navi_volume_pane_g1

0x81da,	// (0x00038799) volume_small_pane

0xa9cc,	// (0x0003af8b) navi_navi_icon_text_pane_g1

0xa9d4,	// (0x0003af93) navi_navi_icon_text_pane_t1

0x740f,	// (0x000379ce) navi_tabs_2_long_pane

0x740f,	// (0x000379ce) navi_tabs_2_pane

0x740f,	// (0x000379ce) navi_tabs_3_long_pane

0x740f,	// (0x000379ce) navi_tabs_3_pane

0x740f,	// (0x000379ce) navi_tabs_4_pane

0x81b2,	// (0x00038771) tabs_2_active_pane_ParamLimits

0x81b2,	// (0x00038771) tabs_2_active_pane

0x81c2,	// (0x00038781) tabs_2_passive_pane_ParamLimits

0x81c2,	// (0x00038781) tabs_2_passive_pane

0x8180,	// (0x0003873f) tabs_3_active_pane_ParamLimits

0x8180,	// (0x0003873f) tabs_3_active_pane

0x8190,	// (0x0003874f) tabs_3_passive_pane_ParamLimits

0x8190,	// (0x0003874f) tabs_3_passive_pane

0x81a1,	// (0x00038760) tabs_3_passive_pane_cp_ParamLimits

0x81a1,	// (0x00038760) tabs_3_passive_pane_cp

0x813c,	// (0x000386fb) tabs_4_active_pane_ParamLimits

0x813c,	// (0x000386fb) tabs_4_active_pane

0x814d,	// (0x0003870c) tabs_4_passive_pane_ParamLimits

0x814d,	// (0x0003870c) tabs_4_passive_pane

0x815e,	// (0x0003871d) tabs_4_passive_pane_cp_ParamLimits

0x815e,	// (0x0003871d) tabs_4_passive_pane_cp

0x816f,	// (0x0003872e) tabs_4_passive_pane_cp2_ParamLimits

0x816f,	// (0x0003872e) tabs_4_passive_pane_cp2

0x8118,	// (0x000386d7) tabs_2_long_active_pane_ParamLimits

0x8118,	// (0x000386d7) tabs_2_long_active_pane

0x812a,	// (0x000386e9) tabs_2_long_passive_pane_ParamLimits

0x812a,	// (0x000386e9) tabs_2_long_passive_pane

0x80d3,	// (0x00038692) tabs_3_long_active_pane_ParamLimits

0x80d3,	// (0x00038692) tabs_3_long_active_pane

0x80ec,	// (0x000386ab) tabs_3_long_passive_pane_ParamLimits

0x80ec,	// (0x000386ab) tabs_3_long_passive_pane

0x80ff,	// (0x000386be) tabs_3_long_passive_pane_cp_ParamLimits

0x80ff,	// (0x000386be) tabs_3_long_passive_pane_cp

0x8079,	// (0x00038638) volume_small_pane_g1

0x8082,	// (0x00038641) volume_small_pane_g2

0x808b,	// (0x0003864a) volume_small_pane_g3

0x8094,	// (0x00038653) volume_small_pane_g4

0x809d,	// (0x0003865c) volume_small_pane_g5

0x80a6,	// (0x00038665) volume_small_pane_g6

0x80af,	// (0x0003866e) volume_small_pane_g7

0x80b8,	// (0x00038677) volume_small_pane_g8

0x80c1,	// (0x00038680) volume_small_pane_g9

0x80ca,	// (0x00038689) volume_small_pane_g10

0x0009,

0xf8a7,	// (0x0003fe66) volume_small_pane_g

0x2338,	// (0x000328f7) bg_active_tab_pane_cp2_ParamLimits

0x2338,	// (0x000328f7) bg_active_tab_pane_cp2

0x5f7c,	// (0x0003653b) tabs_3_active_pane_g1

0x5f84,	// (0x00036543) tabs_3_active_pane_t1

0x2338,	// (0x000328f7) bg_passive_tab_pane_cp2_ParamLimits

0x2338,	// (0x000328f7) bg_passive_tab_pane_cp2

0x5f7c,	// (0x0003653b) tabs_3_passive_pane_g1

0x5f84,	// (0x00036543) tabs_3_passive_pane_t1

0x2338,	// (0x000328f7) bg_active_tab_pane_cp3_ParamLimits

0x2338,	// (0x000328f7) bg_active_tab_pane_cp3

0x5f96,	// (0x00036555) tabs_4_active_pane_g1

0x5f9e,	// (0x0003655d) tabs_4_active_pane_t1

0x2338,	// (0x000328f7) bg_passive_tab_pane_cp3_ParamLimits

0x2338,	// (0x000328f7) bg_passive_tab_pane_cp3

0x5f96,	// (0x00036555) tabs_4_1_passive_pane_g1

0x5f9e,	// (0x0003655d) tabs_4_1_passive_pane_t1

0x977a,	// (0x00039d39) list_highlight_pane_cp2

0xb084,	// (0x0003b643) list_set_pane_ParamLimits

0xb084,	// (0x0003b643) list_set_pane

0xb126,	// (0x0003b6e5) main_pane_set_t1_ParamLimits

0xb126,	// (0x0003b6e5) main_pane_set_t1

0xb146,	// (0x0003b705) main_pane_set_t2_ParamLimits

0xb146,	// (0x0003b705) main_pane_set_t2

0xb15a,	// (0x0003b719) main_pane_set_t3_ParamLimits

0xb15a,	// (0x0003b719) main_pane_set_t3

0xb16c,	// (0x0003b72b) main_pane_set_t4_ParamLimits

0xb16c,	// (0x0003b72b) main_pane_set_t4

0x0003,

0xf977,	// (0x0003ff36) main_pane_set_t_ParamLimits

0xf977,	// (0x0003ff36) main_pane_set_t

0xb17e,	// (0x0003b73d) setting_code_pane

0xb18a,	// (0x0003b749) setting_slider_graphic_pane

0xb18a,	// (0x0003b749) setting_slider_pane

0xb18a,	// (0x0003b749) setting_text_pane

0xb18a,	// (0x0003b749) setting_volume_pane

0x5fb0,	// (0x0003656f) volume_set_pane

0x2338,	// (0x000328f7) bg_set_opt_pane_cp

0x5fb8,	// (0x00036577) setting_slider_pane_t1

0x5fd1,	// (0x00036590) setting_slider_pane_t2

0x5feb,	// (0x000365aa) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003fb1d) setting_slider_pane_t

0x6003,	// (0x000365c2) slider_set_pane

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp2

0x2346,	// (0x00032905) setting_slider_graphic_pane_g1

0x6019,	// (0x000365d8) setting_slider_graphic_pane_t1

0x6029,	// (0x000365e8) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003fb24) setting_slider_graphic_pane_t

0x6039,	// (0x000365f8) slider_set_pane_cp

0x22dc,	// (0x0003289b) input_focus_pane_cp1

0xb043,	// (0x0003b602) list_set_text_pane

0x22d2,	// (0x00032891) setting_text_pane_g1

0x22dc,	// (0x0003289b) input_focus_pane_cp2

0x22d2,	// (0x00032891) setting_code_pane_g1

0x234f,	// (0x0003290e) setting_code_pane_t1

0x453c,	// (0x00034afb) set_text_pane_t1_ParamLimits

0x453c,	// (0x00034afb) set_text_pane_t1

0x2742,	// (0x00032d01) set_opt_bg_pane_g1

0x274a,	// (0x00032d09) set_opt_bg_pane_g2

0xb01d,	// (0x0003b5dc) set_opt_bg_pane_g3

0x275a,	// (0x00032d19) set_opt_bg_pane_g4

0x2762,	// (0x00032d21) set_opt_bg_pane_g5

0x276a,	// (0x00032d29) set_opt_bg_pane_g6

0xb027,	// (0x0003b5e6) set_opt_bg_pane_g7

0xb02f,	// (0x0003b5ee) set_opt_bg_pane_g8

0xb039,	// (0x0003b5f8) set_opt_bg_pane_g9

0x0008,

0xf964,	// (0x0003ff23) set_opt_bg_pane_g

0xb010,	// (0x0003b5cf) slider_set_pane_g1

0x8259,	// (0x00038818) slider_set_pane_g2

0x0006,

0xf955,	// (0x0003ff14) slider_set_pane_g

0x81e3,	// (0x000387a2) volume_set_pane_g1

0x81eb,	// (0x000387aa) volume_set_pane_g2

0x81f3,	// (0x000387b2) volume_set_pane_g3

0x81fb,	// (0x000387ba) volume_set_pane_g4

0x8203,	// (0x000387c2) volume_set_pane_g5

0x820b,	// (0x000387ca) volume_set_pane_g6

0x8213,	// (0x000387d2) volume_set_pane_g7

0x821b,	// (0x000387da) volume_set_pane_g8

0x8223,	// (0x000387e2) volume_set_pane_g9

0x822b,	// (0x000387ea) volume_set_pane_g10

0x0009,

0xf92d,	// (0x0003feec) volume_set_pane_g

0x6041,	// (0x00036600) indicator_pane_ParamLimits

0x6041,	// (0x00036600) indicator_pane

0x604d,	// (0x0003660c) main_idle_pane_g2_ParamLimits

0x604d,	// (0x0003660c) main_idle_pane_g2

0x6075,	// (0x00036634) main_pane_idle_g1_ParamLimits

0x6075,	// (0x00036634) main_pane_idle_g1

0x235d,	// (0x0003291c) popup_clock_digital_analogue_window_ParamLimits

0x235d,	// (0x0003291c) popup_clock_digital_analogue_window

0x6082,	// (0x00036641) soft_indicator_pane_ParamLimits

0x6082,	// (0x00036641) soft_indicator_pane

0x608e,	// (0x0003664d) wallpaper_pane_ParamLimits

0x608e,	// (0x0003664d) wallpaper_pane

0x22d2,	// (0x00032891) wallpaper_pane_g1

0x609a,	// (0x00036659) indicator_pane_g1_ParamLimits

0x609a,	// (0x00036659) indicator_pane_g1

0xb447,	// (0x0003ba06) navi_navi_icon_text_pane_srt_g1

0x238b,	// (0x0003294a) soft_indicator_pane_t1

0x23a5,	// (0x00032964) aid_ps_area_pane

0x60a6,	// (0x00036665) aid_ps_clock_pane

0x23b6,	// (0x00032975) aid_ps_indicator_pane

0x23c2,	// (0x00032981) indicator_ps_pane_ParamLimits

0x23c2,	// (0x00032981) indicator_ps_pane

0x23d1,	// (0x00032990) power_save_pane_g1_ParamLimits

0x23d1,	// (0x00032990) power_save_pane_g1

0x23dd,	// (0x0003299c) power_save_pane_g2_ParamLimits

0x23dd,	// (0x0003299c) power_save_pane_g2

0x5aff,	// (0x000360be) aid_navinavi_width_pane

0x23a5,	// (0x00032964) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003fb29) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003fb29) power_save_pane_g

0x23eb,	// (0x000329aa) power_save_pane_t1_ParamLimits

0x23eb,	// (0x000329aa) power_save_pane_t1

0x60a6,	// (0x00036665) aid_ps_clock_pane_ParamLimits

0x23b6,	// (0x00032975) aid_ps_indicator_pane_ParamLimits

0x23fd,	// (0x000329bc) power_save_pane_t4_ParamLimits

0x23fd,	// (0x000329bc) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003fb2e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003fb2e) power_save_pane_t

0x2427,	// (0x000329e6) power_save_t3_ParamLimits

0x2427,	// (0x000329e6) power_save_t3

0x2412,	// (0x000329d1) power_save_t2_ParamLimits

0x2412,	// (0x000329d1) power_save_t2

0x243c,	// (0x000329fb) indicator_ps_pane_g1

0x60b4,	// (0x00036673) ai_gene_pane_ParamLimits

0x60b4,	// (0x00036673) ai_gene_pane

0x60c0,	// (0x0003667f) ai_links_pane_ParamLimits

0x60c0,	// (0x0003667f) ai_links_pane

0x60cc,	// (0x0003668b) indicator_pane_cp1_ParamLimits

0x60cc,	// (0x0003668b) indicator_pane_cp1

0x60d8,	// (0x00036697) main_pane_idle_g1_cp_ParamLimits

0x60d8,	// (0x00036697) main_pane_idle_g1_cp

0x60e4,	// (0x000366a3) popup_ai_links_title_window

0x60ed,	// (0x000366ac) soft_indicator_pane_cp1_ParamLimits

0x60ed,	// (0x000366ac) soft_indicator_pane_cp1

0xae0a,	// (0x0003b3c9) ai_links_pane_g1

0xae13,	// (0x0003b3d2) grid_ai_links_pane

0xaded,	// (0x0003b3ac) ai_gene_pane_1

0xadf8,	// (0x0003b3b7) ai_gene_pane_2

0xae01,	// (0x0003b3c0) list_highlight_pane_cp4

0xadd1,	// (0x0003b390) cell_ai_link_pane_ParamLimits

0xadd1,	// (0x0003b390) cell_ai_link_pane

0xadc9,	// (0x0003b388) cell_ai_link_pane_g1

0x2569,	// (0x00032b28) cell_ai_link_pane_g2

0x0001,

0xf908,	// (0x0003fec7) cell_ai_link_pane_g

0x22dc,	// (0x0003289b) grid_highlight_cp2

0x22dc,	// (0x0003289b) bg_popup_sub_pane_cp1

0x2453,	// (0x00032a12) popup_ai_links_title_window_t1

0xad19,	// (0x0003b2d8) ai_gene_pane_1_g1_ParamLimits

0xad19,	// (0x0003b2d8) ai_gene_pane_1_g1

0xad25,	// (0x0003b2e4) ai_gene_pane_1_g2_ParamLimits

0xad25,	// (0x0003b2e4) ai_gene_pane_1_g2

0x0001,

0xf8fe,	// (0x0003febd) ai_gene_pane_1_g_ParamLimits

0xf8fe,	// (0x0003febd) ai_gene_pane_1_g

0xad32,	// (0x0003b2f1) ai_gene_pane_1_t1_ParamLimits

0xad32,	// (0x0003b2f1) ai_gene_pane_1_t1

0xad66,	// (0x0003b325) grid_ai_soft_ind_pane

0xad04,	// (0x0003b2c3) ai_gene_pane_2_t1_ParamLimits

0xad04,	// (0x0003b2c3) ai_gene_pane_2_t1

0x60f9,	// (0x000366b8) main_pane_empty_t1_ParamLimits

0x60f9,	// (0x000366b8) main_pane_empty_t1

0x6111,	// (0x000366d0) main_pane_empty_t2_ParamLimits

0x6111,	// (0x000366d0) main_pane_empty_t2

0x6126,	// (0x000366e5) main_pane_empty_t3_ParamLimits

0x6126,	// (0x000366e5) main_pane_empty_t3

0x6138,	// (0x000366f7) main_pane_empty_t4_ParamLimits

0x6138,	// (0x000366f7) main_pane_empty_t4

0x614a,	// (0x00036709) main_pane_empty_t5_ParamLimits

0x614a,	// (0x00036709) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003fb33) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003fb33) main_pane_empty_t

0x2793,	// (0x00032d52) bg_popup_window_pane_ParamLimits

0x2793,	// (0x00032d52) bg_popup_window_pane

0xaa74,	// (0x0003b033) find_popup_pane_cp2_ParamLimits

0xaa74,	// (0x0003b033) find_popup_pane_cp2

0xaa80,	// (0x0003b03f) heading_pane_ParamLimits

0xaa80,	// (0x0003b03f) heading_pane

0x22dc,	// (0x0003289b) bg_popup_sub_pane

0xa9ee,	// (0x0003afad) bg_popup_window_pane_g1_ParamLimits

0xa9ee,	// (0x0003afad) bg_popup_window_pane_g1

0xa9fa,	// (0x0003afb9) bg_popup_window_pane_g2_ParamLimits

0xa9fa,	// (0x0003afb9) bg_popup_window_pane_g2

0xaa06,	// (0x0003afc5) bg_popup_window_pane_g3_ParamLimits

0xaa06,	// (0x0003afc5) bg_popup_window_pane_g3

0xaa12,	// (0x0003afd1) bg_popup_window_pane_g4_ParamLimits

0xaa12,	// (0x0003afd1) bg_popup_window_pane_g4

0xaa1e,	// (0x0003afdd) bg_popup_window_pane_g5_ParamLimits

0xaa1e,	// (0x0003afdd) bg_popup_window_pane_g5

0xaa2a,	// (0x0003afe9) bg_popup_window_pane_g6_ParamLimits

0xaa2a,	// (0x0003afe9) bg_popup_window_pane_g6

0xaa36,	// (0x0003aff5) bg_popup_window_pane_g7_ParamLimits

0xaa36,	// (0x0003aff5) bg_popup_window_pane_g7

0xaa42,	// (0x0003b001) bg_popup_window_pane_g8_ParamLimits

0xaa42,	// (0x0003b001) bg_popup_window_pane_g8

0xaa4e,	// (0x0003b00d) bg_popup_window_pane_g9_ParamLimits

0xaa4e,	// (0x0003b00d) bg_popup_window_pane_g9

0xaa5a,	// (0x0003b019) bg_popup_window_pane_g10_ParamLimits

0xaa5a,	// (0x0003b019) bg_popup_window_pane_g10

0x0009,

0xf8c6,	// (0x0003fe85) bg_popup_window_pane_g_ParamLimits

0xf8c6,	// (0x0003fe85) bg_popup_window_pane_g

0xa983,	// (0x0003af42) bg_popup_heading_pane_ParamLimits

0xa983,	// (0x0003af42) bg_popup_heading_pane

0x83e9,	// (0x000389a8) tabs_4_passive_pane_cp_srt_ParamLimits

0x83e9,	// (0x000389a8) tabs_4_passive_pane_cp_srt

0x83fb,	// (0x000389ba) tabs_4_passive_pane_srt_ParamLimits

0xa997,	// (0x0003af56) heading_pane_g2

0x83fb,	// (0x000389ba) tabs_4_passive_pane_srt

0x977a,	// (0x00039d39) bg_passive_tab_pane_cp3_srt_ParamLimits

0x977a,	// (0x00039d39) bg_passive_tab_pane_cp3_srt

0xa99f,	// (0x0003af5e) heading_pane_t1_ParamLimits

0xa99f,	// (0x0003af5e) heading_pane_t1

0xa9b6,	// (0x0003af75) heading_pane_t2_ParamLimits

0xa9b6,	// (0x0003af75) heading_pane_t2

0x0001,

0xf8c1,	// (0x0003fe80) heading_pane_t_ParamLimits

0xf8c1,	// (0x0003fe80) heading_pane_t

0xa4c0,	// (0x0003aa7f) bg_popup_heading_pane_g1

0xa56f,	// (0x0003ab2e) bg_popup_heading_pane_g2

0xa579,	// (0x0003ab38) bg_popup_heading_pane_g3

0xa583,	// (0x0003ab42) bg_popup_heading_pane_g4

0xa58d,	// (0x0003ab4c) bg_popup_heading_pane_g5

0xa597,	// (0x0003ab56) bg_popup_heading_pane_g6

0xa59f,	// (0x0003ab5e) bg_popup_heading_pane_g7

0xa5a7,	// (0x0003ab66) bg_popup_heading_pane_g8

0xa5b1,	// (0x0003ab70) bg_popup_heading_pane_g9

0x0008,

0xf87d,	// (0x0003fe3c) bg_popup_heading_pane_g

0x9ca1,	// (0x0003a260) bg_popup_sub_pane_g1

0x9cb1,	// (0x0003a270) bg_popup_sub_pane_g2

0x9ca9,	// (0x0003a268) bg_popup_sub_pane_g3

0x9cc1,	// (0x0003a280) bg_popup_sub_pane_g4

0x9cb9,	// (0x0003a278) bg_popup_sub_pane_g5

0x9cc9,	// (0x0003a288) bg_popup_sub_pane_g6

0x9cd1,	// (0x0003a290) bg_popup_sub_pane_g7

0x9ce1,	// (0x0003a2a0) bg_popup_sub_pane_g8

0x9cd9,	// (0x0003a298) bg_popup_sub_pane_g9

0x0008,

0xf857,	// (0x0003fe16) bg_popup_sub_pane_g

0x232a,	// (0x000328e9) bg_popup_window_pane_cp5_ParamLimits

0x232a,	// (0x000328e9) bg_popup_window_pane_cp5

0x2470,	// (0x00032a2f) popup_note_window_g1_ParamLimits

0x2470,	// (0x00032a2f) popup_note_window_g1

0x247c,	// (0x00032a3b) popup_note_window_t1_ParamLimits

0x247c,	// (0x00032a3b) popup_note_window_t1

0x2492,	// (0x00032a51) popup_note_window_t2_ParamLimits

0x2492,	// (0x00032a51) popup_note_window_t2

0x24a8,	// (0x00032a67) popup_note_window_t3_ParamLimits

0x24a8,	// (0x00032a67) popup_note_window_t3

0x24be,	// (0x00032a7d) popup_note_window_t4_ParamLimits

0x24be,	// (0x00032a7d) popup_note_window_t4

0x24e6,	// (0x00032aa5) popup_note_window_t5_ParamLimits

0x24e6,	// (0x00032aa5) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003fb3e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003fb3e) popup_note_window_t

0x250a,	// (0x00032ac9) bg_popup_window_pane_cp6_ParamLimits

0x250a,	// (0x00032ac9) bg_popup_window_pane_cp6

0xa43c,	// (0x0003a9fb) popup_note_image_window_g1_ParamLimits

0xa43c,	// (0x0003a9fb) popup_note_image_window_g1

0xa448,	// (0x0003aa07) popup_note_image_window_g2_ParamLimits

0xa448,	// (0x0003aa07) popup_note_image_window_g2

0x0001,

0xf84b,	// (0x0003fe0a) popup_note_image_window_g_ParamLimits

0xf84b,	// (0x0003fe0a) popup_note_image_window_g

0xa461,	// (0x0003aa20) popup_note_image_window_t1_ParamLimits

0xa461,	// (0x0003aa20) popup_note_image_window_t1

0xa47a,	// (0x0003aa39) popup_note_image_window_t2_ParamLimits

0xa47a,	// (0x0003aa39) popup_note_image_window_t2

0xa493,	// (0x0003aa52) popup_note_image_window_t3_ParamLimits

0xa493,	// (0x0003aa52) popup_note_image_window_t3

0x0002,

0xf850,	// (0x0003fe0f) popup_note_image_window_t_ParamLimits

0xf850,	// (0x0003fe0f) popup_note_image_window_t

0xa305,	// (0x0003a8c4) bg_popup_window_pane_cp7_ParamLimits

0xa305,	// (0x0003a8c4) bg_popup_window_pane_cp7

0xa335,	// (0x0003a8f4) popup_note_wait_window_g1_ParamLimits

0xa335,	// (0x0003a8f4) popup_note_wait_window_g1

0xa341,	// (0x0003a900) popup_note_wait_window_g2_ParamLimits

0xa341,	// (0x0003a900) popup_note_wait_window_g2

0x0002,

0xf839,	// (0x0003fdf8) popup_note_wait_window_g_ParamLimits

0xf839,	// (0x0003fdf8) popup_note_wait_window_g

0xa359,	// (0x0003a918) popup_note_wait_window_t1_ParamLimits

0xa359,	// (0x0003a918) popup_note_wait_window_t1

0xa380,	// (0x0003a93f) popup_note_wait_window_t2_ParamLimits

0xa380,	// (0x0003a93f) popup_note_wait_window_t2

0xa39d,	// (0x0003a95c) popup_note_wait_window_t3_ParamLimits

0xa39d,	// (0x0003a95c) popup_note_wait_window_t3

0xa3b0,	// (0x0003a96f) popup_note_wait_window_t4_ParamLimits

0xa3b0,	// (0x0003a96f) popup_note_wait_window_t4

0x0004,

0xf840,	// (0x0003fdff) popup_note_wait_window_t_ParamLimits

0xf840,	// (0x0003fdff) popup_note_wait_window_t

0xa3d5,	// (0x0003a994) wait_bar_pane_ParamLimits

0xa3d5,	// (0x0003a994) wait_bar_pane

0x22dc,	// (0x0003289b) wait_anim_pane

0x22dc,	// (0x0003289b) wait_border_pane

0x22d2,	// (0x00032891) wait_anim_pane_g1

0x22d2,	// (0x00032891) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0003fcb8) wait_anim_pane_g

0xa2b1,	// (0x0003a870) wait_border_pane_g1

0xa2bc,	// (0x0003a87b) wait_border_pane_g2

0xa2c5,	// (0x0003a884) wait_border_pane_g3

0x0002,

0xf832,	// (0x0003fdf1) wait_border_pane_g

0xa11c,	// (0x0003a6db) bg_popup_window_pane_cp16_ParamLimits

0xa11c,	// (0x0003a6db) bg_popup_window_pane_cp16

0xa21c,	// (0x0003a7db) indicator_popup_pane_cp4_ParamLimits

0xa21c,	// (0x0003a7db) indicator_popup_pane_cp4

0xa230,	// (0x0003a7ef) popup_query_data_window_t1_ParamLimits

0xa230,	// (0x0003a7ef) popup_query_data_window_t1

0xa242,	// (0x0003a801) popup_query_data_window_t2_ParamLimits

0xa242,	// (0x0003a801) popup_query_data_window_t2

0xa25b,	// (0x0003a81a) popup_query_data_window_t3_ParamLimits

0xa25b,	// (0x0003a81a) popup_query_data_window_t3

0x0002,

0xf82b,	// (0x0003fdea) popup_query_data_window_t_ParamLimits

0xf82b,	// (0x0003fdea) popup_query_data_window_t

0xa275,	// (0x0003a834) query_popup_data_pane_ParamLimits

0xa275,	// (0x0003a834) query_popup_data_pane

0xa289,	// (0x0003a848) query_popup_data_pane_cp1_ParamLimits

0xa289,	// (0x0003a848) query_popup_data_pane_cp1

0xa11c,	// (0x0003a6db) bg_popup_window_pane_cp10_ParamLimits

0xa11c,	// (0x0003a6db) bg_popup_window_pane_cp10

0xa14e,	// (0x0003a70d) indicator_popup_pane_ParamLimits

0xa14e,	// (0x0003a70d) indicator_popup_pane

0xa170,	// (0x0003a72f) popup_query_code_window_t1_ParamLimits

0xa170,	// (0x0003a72f) popup_query_code_window_t1

0xa18a,	// (0x0003a749) popup_query_code_window_t2_ParamLimits

0xa18a,	// (0x0003a749) popup_query_code_window_t2

0xa1d3,	// (0x0003a792) popup_query_code_window_t3_ParamLimits

0xa1d3,	// (0x0003a792) popup_query_code_window_t3

0x0002,

0xf824,	// (0x0003fde3) popup_query_code_window_t_ParamLimits

0xf824,	// (0x0003fde3) popup_query_code_window_t

0xa202,	// (0x0003a7c1) query_popup_pane_ParamLimits

0xa202,	// (0x0003a7c1) query_popup_pane

0x250a,	// (0x00032ac9) bg_popup_window_pane_cp15_ParamLimits

0x250a,	// (0x00032ac9) bg_popup_window_pane_cp15

0x6184,	// (0x00036743) indicator_popup_pane_cp1_ParamLimits

0x6184,	// (0x00036743) indicator_popup_pane_cp1

0x6197,	// (0x00036756) indicator_popup_pane_cp2_ParamLimits

0x6197,	// (0x00036756) indicator_popup_pane_cp2

0x61aa,	// (0x00036769) popup_query_data_code_window_g1_ParamLimits

0x61aa,	// (0x00036769) popup_query_data_code_window_g1

0x2528,	// (0x00032ae7) popup_query_data_code_window_t1_ParamLimits

0x2528,	// (0x00032ae7) popup_query_data_code_window_t1

0x253a,	// (0x00032af9) popup_query_data_code_window_t2_ParamLimits

0x253a,	// (0x00032af9) popup_query_data_code_window_t2

0x61bd,	// (0x0003677c) popup_query_data_code_window_t3_ParamLimits

0x61bd,	// (0x0003677c) popup_query_data_code_window_t3

0x61d3,	// (0x00036792) popup_query_data_code_window_t4_ParamLimits

0x61d3,	// (0x00036792) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003fb49) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003fb49) popup_query_data_code_window_t

0x7f57,	// (0x00038516) list_single_midp_graphic_pane_g3

0x61eb,	// (0x000367aa) query_popup_data_pane_cp2_ParamLimits

0x61fe,	// (0x000367bd) query_popup_pane_cp2_ParamLimits

0x61fe,	// (0x000367bd) query_popup_pane_cp2

0x22dc,	// (0x0003289b) bg_popup_window_pane_cp11

0xa108,	// (0x0003a6c7) heading_pane_cp5

0x2596,	// (0x00032b55) listscroll_popup_info_pane

0x22dc,	// (0x0003289b) input_focus_pane_cp3

0x254c,	// (0x00032b0b) query_popup_pane_t1

0x255a,	// (0x00032b19) list_popup_info_pane_ParamLimits

0x255a,	// (0x00032b19) list_popup_info_pane

0x2569,	// (0x00032b28) listscroll_popup_info_pane_g1

0x2571,	// (0x00032b30) scroll_pane_cp7

0x6211,	// (0x000367d0) popup_info_list_pane_t1_ParamLimits

0x6211,	// (0x000367d0) popup_info_list_pane_t1

0x622b,	// (0x000367ea) popup_info_list_pane_t2_ParamLimits

0x622b,	// (0x000367ea) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003fb52) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003fb52) popup_info_list_pane_t

0x22dc,	// (0x0003289b) bg_popup_window_pane_cp12

0xb461,	// (0x0003ba20) find_popup_pane

0x2338,	// (0x000328f7) bg_popup_window_pane_cp3

0x257b,	// (0x00032b3a) heading_pane_cp3

0x2587,	// (0x00032b46) listscroll_popup_graphic_pane

0x22dc,	// (0x0003289b) bg_popup_window_pane_cp4

0x6295,	// (0x00036854) heading_pane_cp4

0x2596,	// (0x00032b55) listscroll_popup_colour_pane

0x629f,	// (0x0003685e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x629f,	// (0x0003685e) cell_large_graphic_colour_none_popup_pane

0x62b3,	// (0x00036872) grid_large_graphic_colour_popup_pane_ParamLimits

0x62b3,	// (0x00036872) grid_large_graphic_colour_popup_pane

0x62db,	// (0x0003689a) listscroll_popup_colour_pane_g1_ParamLimits

0x62db,	// (0x0003689a) listscroll_popup_colour_pane_g1

0x62f2,	// (0x000368b1) listscroll_popup_colour_pane_g2_ParamLimits

0x62f2,	// (0x000368b1) listscroll_popup_colour_pane_g2

0x6309,	// (0x000368c8) listscroll_popup_colour_pane_g3_ParamLimits

0x6309,	// (0x000368c8) listscroll_popup_colour_pane_g3

0x6319,	// (0x000368d8) listscroll_popup_colour_pane_g4_ParamLimits

0x6319,	// (0x000368d8) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003fb57) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003fb57) listscroll_popup_colour_pane_g

0x259e,	// (0x00032b5d) scroll_pane_cp6_ParamLimits

0x259e,	// (0x00032b5d) scroll_pane_cp6

0x6329,	// (0x000368e8) cell_large_graphic_colour_popup_pane_ParamLimits

0x6329,	// (0x000368e8) cell_large_graphic_colour_popup_pane

0x6348,	// (0x00036907) cell_large_graphic_colour_none_popup_pane_t1

0x22dc,	// (0x0003289b) grid_highlight_pane_cp5

0x25b0,	// (0x00032b6f) cell_large_graphic_colour_popup_pane_g1

0x25b8,	// (0x00032b77) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003fb60) cell_large_graphic_colour_popup_pane_g

0x25c0,	// (0x00032b7f) cell_large_graphic_colour_popup_pane_g2_copy1

0x25c9,	// (0x00032b88) grid_highlight_pane_cp4

0x25d1,	// (0x00032b90) bg_popup_window_pane_cp8_ParamLimits

0x25d1,	// (0x00032b90) bg_popup_window_pane_cp8

0x6357,	// (0x00036916) popup_snote_single_text_window_g1_ParamLimits

0x6357,	// (0x00036916) popup_snote_single_text_window_g1

0x6369,	// (0x00036928) popup_snote_single_text_window_t1_ParamLimits

0x6369,	// (0x00036928) popup_snote_single_text_window_t1

0x637c,	// (0x0003693b) popup_snote_single_text_window_t2_ParamLimits

0x637c,	// (0x0003693b) popup_snote_single_text_window_t2

0x638f,	// (0x0003694e) popup_snote_single_text_window_t3_ParamLimits

0x638f,	// (0x0003694e) popup_snote_single_text_window_t3

0x63c8,	// (0x00036987) popup_snote_single_text_window_t4_ParamLimits

0x63c8,	// (0x00036987) popup_snote_single_text_window_t4

0x63fc,	// (0x000369bb) popup_snote_single_text_window_t5_ParamLimits

0x63fc,	// (0x000369bb) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003fb65) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003fb65) popup_snote_single_text_window_t

0x25ec,	// (0x00032bab) bg_popup_window_pane_cp9_ParamLimits

0x25ec,	// (0x00032bab) bg_popup_window_pane_cp9

0x6357,	// (0x00036916) popup_snote_single_graphic_window_g1_ParamLimits

0x6357,	// (0x00036916) popup_snote_single_graphic_window_g1

0x25fa,	// (0x00032bb9) popup_snote_single_graphic_window_g2_ParamLimits

0x25fa,	// (0x00032bb9) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003fb70) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003fb70) popup_snote_single_graphic_window_g

0x2606,	// (0x00032bc5) popup_snote_single_graphic_window_t1_ParamLimits

0x2606,	// (0x00032bc5) popup_snote_single_graphic_window_t1

0x2619,	// (0x00032bd8) popup_snote_single_graphic_window_t2_ParamLimits

0x2619,	// (0x00032bd8) popup_snote_single_graphic_window_t2

0x642b,	// (0x000369ea) popup_snote_single_graphic_window_t3_ParamLimits

0x642b,	// (0x000369ea) popup_snote_single_graphic_window_t3

0x6464,	// (0x00036a23) popup_snote_single_graphic_window_t4_ParamLimits

0x6464,	// (0x00036a23) popup_snote_single_graphic_window_t4

0x6498,	// (0x00036a57) popup_snote_single_graphic_window_t5_ParamLimits

0x6498,	// (0x00036a57) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003fb75) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003fb75) popup_snote_single_graphic_window_t

0xb3a3,	// (0x0003b962) grid_graphic_popup_pane_ParamLimits

0xb3a3,	// (0x0003b962) grid_graphic_popup_pane

0xb3cd,	// (0x0003b98c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3cd,	// (0x0003b98c) listscroll_popup_graphic_pane_g1

0xb3e1,	// (0x0003b9a0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3e1,	// (0x0003b9a0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a1,	// (0x0003ff60) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a1,	// (0x0003ff60) listscroll_popup_graphic_pane_g

0xb3f5,	// (0x0003b9b4) scroll_pane_cp5

0xb342,	// (0x0003b901) cell_graphic_popup_pane_ParamLimits

0xb342,	// (0x0003b901) cell_graphic_popup_pane

0xb323,	// (0x0003b8e2) cell_graphic_popup_pane_g1

0xb32b,	// (0x0003b8ea) cell_graphic_popup_pane_g2

0x25c0,	// (0x00032b7f) cell_graphic_popup_pane_g3

0x0002,

0xf99a,	// (0x0003ff59) cell_graphic_popup_pane_g

0xb334,	// (0x0003b8f3) cell_graphic_popup_pane_t2

0x25c9,	// (0x00032b88) grid_highlight_pane_cp3

0x263e,	// (0x00032bfd) list_gen_pane_ParamLimits

0x263e,	// (0x00032bfd) list_gen_pane

0x2666,	// (0x00032c25) scroll_pane

0xb27b,	// (0x0003b83a) bg_list_pane_g1_ParamLimits

0xb27b,	// (0x0003b83a) bg_list_pane_g1

0xb298,	// (0x0003b857) bg_list_pane_g2_ParamLimits

0xb298,	// (0x0003b857) bg_list_pane_g2

0xb2ad,	// (0x0003b86c) bg_list_pane_g3_ParamLimits

0xb2ad,	// (0x0003b86c) bg_list_pane_g3

0xb2c1,	// (0x0003b880) bg_list_pane_g4_ParamLimits

0xb2c1,	// (0x0003b880) bg_list_pane_g4

0xb2d5,	// (0x0003b894) bg_list_pane_g5_ParamLimits

0xb2d5,	// (0x0003b894) bg_list_pane_g5

0x0004,

0xf98f,	// (0x0003ff4e) bg_list_pane_g_ParamLimits

0xf98f,	// (0x0003ff4e) bg_list_pane_g

0xb210,	// (0x0003b7cf) list_double2_graphic_large_graphic_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double2_graphic_large_graphic_pane

0xb210,	// (0x0003b7cf) list_double2_graphic_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double2_graphic_pane

0xb210,	// (0x0003b7cf) list_double2_large_graphic_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double2_large_graphic_pane

0x82ff,	// (0x000388be) list_double2_pane_ParamLimits

0x82ff,	// (0x000388be) list_double2_pane

0xb210,	// (0x0003b7cf) list_double_graphic_heading_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_graphic_heading_pane

0xb210,	// (0x0003b7cf) list_double_graphic_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_graphic_pane

0xb210,	// (0x0003b7cf) list_double_heading_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_heading_pane

0xb210,	// (0x0003b7cf) list_double_large_graphic_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_large_graphic_pane

0xb210,	// (0x0003b7cf) list_double_number_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_number_pane

0xb210,	// (0x0003b7cf) list_double_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_pane

0xb210,	// (0x0003b7cf) list_double_time_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_double_time_pane

0xb210,	// (0x0003b7cf) list_setting_number_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_setting_number_pane

0xb210,	// (0x0003b7cf) list_setting_pane_ParamLimits

0xb210,	// (0x0003b7cf) list_setting_pane

0x8340,	// (0x000388ff) list_single_2graphic_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_2graphic_pane

0x8340,	// (0x000388ff) list_single_graphic_heading_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_graphic_heading_pane

0x8340,	// (0x000388ff) list_single_graphic_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_graphic_pane

0x8340,	// (0x000388ff) list_single_heading_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_heading_pane

0x83a2,	// (0x00038961) list_single_large_graphic_pane_ParamLimits

0x83a2,	// (0x00038961) list_single_large_graphic_pane

0x8340,	// (0x000388ff) list_single_number_heading_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_number_heading_pane

0x8340,	// (0x000388ff) list_single_number_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_number_pane

0x8340,	// (0x000388ff) list_single_pane_ParamLimits

0x8340,	// (0x000388ff) list_single_pane

0x22dc,	// (0x0003289b) list_highlight_pane_cp1

0x4563,	// (0x00034b22) list_single_pane_g1_ParamLimits

0x4563,	// (0x00034b22) list_single_pane_g1

0x456f,	// (0x00034b2e) list_single_pane_g2_ParamLimits

0x456f,	// (0x00034b2e) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_single_pane_g

0x82e9,	// (0x000388a8) list_single_pane_t1_ParamLimits

0x82e9,	// (0x000388a8) list_single_pane_t1

0x4563,	// (0x00034b22) list_single_number_pane_g1_ParamLimits

0x4563,	// (0x00034b22) list_single_number_pane_g1

0x456f,	// (0x00034b2e) list_single_number_pane_g2_ParamLimits

0x456f,	// (0x00034b2e) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_single_number_pane_g

0x64dd,	// (0x00036a9c) list_single_number_pane_t1_ParamLimits

0x64dd,	// (0x00036a9c) list_single_number_pane_t1

0x8233,	// (0x000387f2) list_single_number_pane_t2_ParamLimits

0x8233,	// (0x000387f2) list_single_number_pane_t2

0x0001,

0xf950,	// (0x0003ff0f) list_single_number_pane_t_ParamLimits

0xf950,	// (0x0003ff0f) list_single_number_pane_t

0x64d1,	// (0x00036a90) list_single_graphic_pane_g1_ParamLimits

0x64d1,	// (0x00036a90) list_single_graphic_pane_g1

0x4563,	// (0x00034b22) list_single_graphic_pane_g2_ParamLimits

0x4563,	// (0x00034b22) list_single_graphic_pane_g2

0x456f,	// (0x00034b2e) list_single_graphic_pane_g3_ParamLimits

0x456f,	// (0x00034b2e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003fb80) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003fb80) list_single_graphic_pane_g

0x64dd,	// (0x00036a9c) list_single_graphic_pane_t1_ParamLimits

0x64dd,	// (0x00036a9c) list_single_graphic_pane_t1

0x4563,	// (0x00034b22) list_single_heading_pane_g1_ParamLimits

0x4563,	// (0x00034b22) list_single_heading_pane_g1

0x456f,	// (0x00034b2e) list_single_heading_pane_g2_ParamLimits

0x456f,	// (0x00034b2e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_single_heading_pane_g

0x4591,	// (0x00034b50) list_single_heading_pane_t1_ParamLimits

0x4591,	// (0x00034b50) list_single_heading_pane_t1

0x45a7,	// (0x00034b66) list_single_heading_pane_t2_ParamLimits

0x45a7,	// (0x00034b66) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003fb8c) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003fb8c) list_single_heading_pane_t

0x4563,	// (0x00034b22) list_single_number_heading_pane_g1_ParamLimits

0x4563,	// (0x00034b22) list_single_number_heading_pane_g1

0x456f,	// (0x00034b2e) list_single_number_heading_pane_g2_ParamLimits

0x456f,	// (0x00034b2e) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_single_number_heading_pane_g

0x4591,	// (0x00034b50) list_single_number_heading_pane_t1_ParamLimits

0x4591,	// (0x00034b50) list_single_number_heading_pane_t1

0x45b9,	// (0x00034b78) list_single_number_heading_pane_t2_ParamLimits

0x45b9,	// (0x00034b78) list_single_number_heading_pane_t2

0x45cb,	// (0x00034b8a) list_single_number_heading_pane_t3_ParamLimits

0x45cb,	// (0x00034b8a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003fb91) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003fb91) list_single_number_heading_pane_t

0x64f3,	// (0x00036ab2) list_single_graphic_heading_pane_g1_ParamLimits

0x64f3,	// (0x00036ab2) list_single_graphic_heading_pane_g1

0x64ff,	// (0x00036abe) list_single_graphic_heading_pane_g4_ParamLimits

0x64ff,	// (0x00036abe) list_single_graphic_heading_pane_g4

0x456f,	// (0x00034b2e) list_single_graphic_heading_pane_g5_ParamLimits

0x456f,	// (0x00034b2e) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003fb98) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003fb98) list_single_graphic_heading_pane_g

0x4591,	// (0x00034b50) list_single_graphic_heading_pane_t1_ParamLimits

0x4591,	// (0x00034b50) list_single_graphic_heading_pane_t1

0x6510,	// (0x00036acf) list_single_graphic_heading_pane_t2_ParamLimits

0x6510,	// (0x00036acf) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003fb9f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003fb9f) list_single_graphic_heading_pane_t

0x6522,	// (0x00036ae1) list_single_large_graphic_pane_g1_ParamLimits

0x6522,	// (0x00036ae1) list_single_large_graphic_pane_g1

0x4cf3,	// (0x000352b2) list_single_large_graphic_pane_g2_ParamLimits

0x4cf3,	// (0x000352b2) list_single_large_graphic_pane_g2

0x652e,	// (0x00036aed) list_single_large_graphic_pane_g3_ParamLimits

0x652e,	// (0x00036aed) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003fba4) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003fba4) list_single_large_graphic_pane_g

0xa2bc,	// (0x0003a87b) wait_border_pane_g2_copy1

0x653a,	// (0x00036af9) list_single_large_graphic_pane_g4_cp2

0x6542,	// (0x00036b01) list_single_large_graphic_pane_t1_ParamLimits

0x6542,	// (0x00036b01) list_single_large_graphic_pane_t1

0x6558,	// (0x00036b17) list_double_pane_g1_ParamLimits

0x6558,	// (0x00036b17) list_double_pane_g1

0x6564,	// (0x00036b23) list_double_pane_g2_ParamLimits

0x6564,	// (0x00036b23) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003fbab) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003fbab) list_double_pane_g

0x6570,	// (0x00036b2f) list_double_pane_t1_ParamLimits

0x6570,	// (0x00036b2f) list_double_pane_t1

0x6586,	// (0x00036b45) list_double_pane_t2_ParamLimits

0x6586,	// (0x00036b45) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003fbb0) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003fbb0) list_double_pane_t

0x6598,	// (0x00036b57) list_double2_pane_g1_ParamLimits

0x6598,	// (0x00036b57) list_double2_pane_g1

0x4623,	// (0x00034be2) list_double2_pane_g2_ParamLimits

0x4623,	// (0x00034be2) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003fbb5) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003fbb5) list_double2_pane_g

0x65a9,	// (0x00036b68) list_double2_pane_t1_ParamLimits

0x65a9,	// (0x00036b68) list_double2_pane_t1

0x65bf,	// (0x00036b7e) list_double2_pane_t2_ParamLimits

0x65bf,	// (0x00036b7e) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003fbba) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003fbba) list_double2_pane_t

0x6558,	// (0x00036b17) list_double_number_pane_g1_ParamLimits

0x6558,	// (0x00036b17) list_double_number_pane_g1

0x6564,	// (0x00036b23) list_double_number_pane_g2_ParamLimits

0x6564,	// (0x00036b23) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003fbab) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003fbab) list_double_number_pane_g

0x65d1,	// (0x00036b90) list_double_number_pane_t1_ParamLimits

0x65d1,	// (0x00036b90) list_double_number_pane_t1

0x65e3,	// (0x00036ba2) list_double_number_pane_t2_ParamLimits

0x65e3,	// (0x00036ba2) list_double_number_pane_t2

0x65f9,	// (0x00036bb8) list_double_number_pane_t3_ParamLimits

0x65f9,	// (0x00036bb8) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003fbbf) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003fbbf) list_double_number_pane_t

0x660b,	// (0x00036bca) list_double_graphic_pane_g1_ParamLimits

0x660b,	// (0x00036bca) list_double_graphic_pane_g1

0x6617,	// (0x00036bd6) list_double_graphic_pane_g2_ParamLimits

0x6617,	// (0x00036bd6) list_double_graphic_pane_g2

0x6626,	// (0x00036be5) list_double_graphic_pane_g3_ParamLimits

0x6626,	// (0x00036be5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003fbc6) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003fbc6) list_double_graphic_pane_g

0x65e3,	// (0x00036ba2) list_double_graphic_pane_t1_ParamLimits

0x65e3,	// (0x00036ba2) list_double_graphic_pane_t1

0x65f9,	// (0x00036bb8) list_double_graphic_pane_t2_ParamLimits

0x65f9,	// (0x00036bb8) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003fbcf) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003fbcf) list_double_graphic_pane_t

0x663e,	// (0x00036bfd) list_double2_graphic_pane_g1_ParamLimits

0x663e,	// (0x00036bfd) list_double2_graphic_pane_g1

0x6558,	// (0x00036b17) list_double2_graphic_pane_g2_ParamLimits

0x6558,	// (0x00036b17) list_double2_graphic_pane_g2

0x6564,	// (0x00036b23) list_double2_graphic_pane_g3_ParamLimits

0x6564,	// (0x00036b23) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003fbd4) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003fbd4) list_double2_graphic_pane_g

0x664a,	// (0x00036c09) list_double2_graphic_pane_t1_ParamLimits

0x664a,	// (0x00036c09) list_double2_graphic_pane_t1

0x6660,	// (0x00036c1f) list_double2_graphic_pane_t2_ParamLimits

0x6660,	// (0x00036c1f) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003fbdb) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003fbdb) list_double2_graphic_pane_t

0x6672,	// (0x00036c31) list_double_large_graphic_pane_g1_ParamLimits

0x6672,	// (0x00036c31) list_double_large_graphic_pane_g1

0x6691,	// (0x00036c50) list_double_large_graphic_pane_g2_ParamLimits

0x6691,	// (0x00036c50) list_double_large_graphic_pane_g2

0x6564,	// (0x00036b23) list_double_large_graphic_pane_g3_ParamLimits

0x6564,	// (0x00036b23) list_double_large_graphic_pane_g3

0x66a2,	// (0x00036c61) list_double_large_graphic_pane_g4_ParamLimits

0x66a2,	// (0x00036c61) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003fbe0) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003fbe0) list_double_large_graphic_pane_g

0x66b5,	// (0x00036c74) list_double_large_graphic_pane_t1_ParamLimits

0x66b5,	// (0x00036c74) list_double_large_graphic_pane_t1

0x66ce,	// (0x00036c8d) list_double_large_graphic_pane_t2_ParamLimits

0x66ce,	// (0x00036c8d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003fbeb) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003fbeb) list_double_large_graphic_pane_t

0x66e0,	// (0x00036c9f) list_double2_large_graphic_pane_g1_ParamLimits

0x66e0,	// (0x00036c9f) list_double2_large_graphic_pane_g1

0x66ec,	// (0x00036cab) list_double2_large_graphic_pane_g2_ParamLimits

0x66ec,	// (0x00036cab) list_double2_large_graphic_pane_g2

0x66fd,	// (0x00036cbc) list_double2_large_graphic_pane_g3_ParamLimits

0x66fd,	// (0x00036cbc) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003fbf0) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003fbf0) list_double2_large_graphic_pane_g

0x664a,	// (0x00036c09) list_double2_large_graphic_pane_t1_ParamLimits

0x664a,	// (0x00036c09) list_double2_large_graphic_pane_t1

0x6660,	// (0x00036c1f) list_double2_large_graphic_pane_t2_ParamLimits

0x6660,	// (0x00036c1f) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003fbdb) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003fbdb) list_double2_large_graphic_pane_t

0x6709,	// (0x00036cc8) list_double_heading_pane_g1_ParamLimits

0x6709,	// (0x00036cc8) list_double_heading_pane_g1

0x671a,	// (0x00036cd9) list_double_heading_pane_g2_ParamLimits

0x671a,	// (0x00036cd9) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0003fbf7) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0003fbf7) list_double_heading_pane_g

0x6726,	// (0x00036ce5) list_double_heading_pane_t1_ParamLimits

0x6726,	// (0x00036ce5) list_double_heading_pane_t1

0x673c,	// (0x00036cfb) list_double_heading_pane_t2_ParamLimits

0x673c,	// (0x00036cfb) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0003fbfc) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0003fbfc) list_double_heading_pane_t

0x663e,	// (0x00036bfd) list_double_graphic_heading_pane_g1_ParamLimits

0x663e,	// (0x00036bfd) list_double_graphic_heading_pane_g1

0x6709,	// (0x00036cc8) list_double_graphic_heading_pane_g2_ParamLimits

0x6709,	// (0x00036cc8) list_double_graphic_heading_pane_g2

0x671a,	// (0x00036cd9) list_double_graphic_heading_pane_g3_ParamLimits

0x671a,	// (0x00036cd9) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0003fc01) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0003fc01) list_double_graphic_heading_pane_g

0x6726,	// (0x00036ce5) list_double_graphic_heading_pane_t1_ParamLimits

0x6726,	// (0x00036ce5) list_double_graphic_heading_pane_t1

0x673c,	// (0x00036cfb) list_double_graphic_heading_pane_t2_ParamLimits

0x673c,	// (0x00036cfb) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0003fbfc) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0003fbfc) list_double_graphic_heading_pane_t

0x6691,	// (0x00036c50) list_double_time_pane_g1_ParamLimits

0x6691,	// (0x00036c50) list_double_time_pane_g1

0x6564,	// (0x00036b23) list_double_time_pane_g2_ParamLimits

0x6564,	// (0x00036b23) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0003fc08) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0003fc08) list_double_time_pane_g

0x674e,	// (0x00036d0d) list_double_time_pane_t1_ParamLimits

0x674e,	// (0x00036d0d) list_double_time_pane_t1

0x6764,	// (0x00036d23) list_double_time_pane_t2_ParamLimits

0x6764,	// (0x00036d23) list_double_time_pane_t2

0x6776,	// (0x00036d35) list_double_time_pane_t3_ParamLimits

0x6776,	// (0x00036d35) list_double_time_pane_t3

0x6788,	// (0x00036d47) list_double_time_pane_t4_ParamLimits

0x6788,	// (0x00036d47) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0003fc0d) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0003fc0d) list_double_time_pane_t

0x4b2e,	// (0x000350ed) list_setting_pane_g1_ParamLimits

0x4b2e,	// (0x000350ed) list_setting_pane_g1

0x671a,	// (0x00036cd9) list_setting_pane_g2_ParamLimits

0x671a,	// (0x00036cd9) list_setting_pane_g2

0x0001,

0xf657,	// (0x0003fc16) list_setting_pane_g_ParamLimits

0xf657,	// (0x0003fc16) list_setting_pane_g

0x679a,	// (0x00036d59) list_setting_pane_t1_ParamLimits

0x679a,	// (0x00036d59) list_setting_pane_t1

0x67b1,	// (0x00036d70) list_setting_pane_t2_ParamLimits

0x67b1,	// (0x00036d70) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0003fc1b) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0003fc1b) list_setting_pane_t

0x67ee,	// (0x00036dad) set_value_pane_cp_ParamLimits

0x67ee,	// (0x00036dad) set_value_pane_cp

0x67fa,	// (0x00036db9) list_setting_number_pane_g1_ParamLimits

0x67fa,	// (0x00036db9) list_setting_number_pane_g1

0x6806,	// (0x00036dc5) list_setting_number_pane_g2_ParamLimits

0x6806,	// (0x00036dc5) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0003fc22) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0003fc22) list_setting_number_pane_g

0x6812,	// (0x00036dd1) list_setting_number_pane_t1_ParamLimits

0x6812,	// (0x00036dd1) list_setting_number_pane_t1

0x6826,	// (0x00036de5) list_setting_number_pane_t2_ParamLimits

0x6826,	// (0x00036de5) list_setting_number_pane_t2

0x683d,	// (0x00036dfc) list_setting_number_pane_t3_ParamLimits

0x683d,	// (0x00036dfc) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0003fc27) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0003fc27) list_setting_number_pane_t

0x67ee,	// (0x00036dad) set_value_pane_ParamLimits

0x67ee,	// (0x00036dad) set_value_pane

0x269a,	// (0x00032c59) bg_set_opt_pane_ParamLimits

0x269a,	// (0x00032c59) bg_set_opt_pane

0x6880,	// (0x00036e3f) set_value_pane_t1

0x26bb,	// (0x00032c7a) slider_set_pane_cp3

0x688e,	// (0x00036e4d) volume_small_pane_cp

0x26c4,	// (0x00032c83) list_form_gen_pane

0x26cd,	// (0x00032c8c) scroll_pane_cp8

0x6897,	// (0x00036e56) form_field_data_pane_ParamLimits

0x6897,	// (0x00036e56) form_field_data_pane

0x68af,	// (0x00036e6e) form_field_data_wide_pane_ParamLimits

0x68af,	// (0x00036e6e) form_field_data_wide_pane

0x68d0,	// (0x00036e8f) form_field_popup_pane_ParamLimits

0x68d0,	// (0x00036e8f) form_field_popup_pane

0x68ee,	// (0x00036ead) form_field_popup_wide_pane_ParamLimits

0x68ee,	// (0x00036ead) form_field_popup_wide_pane

0x4654,	// (0x00034c13) form_field_slider_pane_ParamLimits

0x4654,	// (0x00034c13) form_field_slider_pane

0x690b,	// (0x00036eca) form_field_slider_wide_pane_ParamLimits

0x690b,	// (0x00036eca) form_field_slider_wide_pane

0x26de,	// (0x00032c9d) data_form_pane

0x6928,	// (0x00036ee7) form_field_data_pane_t1

0x26ea,	// (0x00032ca9) input_focus_pane

0x6940,	// (0x00036eff) data_form_wide_pane

0x695d,	// (0x00036f1c) form_field_data_wide_pane_t1

0x25de,	// (0x00032b9d) input_focus_pane_cp6

0x697f,	// (0x00036f3e) form_field_popup_pane_t1

0x26ea,	// (0x00032ca9) input_focus_pane_cp7

0x2718,	// (0x00032cd7) list_form_pane

0x699f,	// (0x00036f5e) form_field_popup_wide_pane_t1

0x26ea,	// (0x00032ca9) input_focus_pane_cp8

0x2724,	// (0x00032ce3) list_form_wide_pane

0x69bc,	// (0x00036f7b) form_field_slider_pane_t1_ParamLimits

0x69bc,	// (0x00036f7b) form_field_slider_pane_t1

0x69d2,	// (0x00036f91) form_field_slider_pane_t2_ParamLimits

0x69d2,	// (0x00036f91) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0003fc37) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0003fc37) form_field_slider_pane_t

0x232a,	// (0x000328e9) input_focus_pane_cp9_ParamLimits

0x232a,	// (0x000328e9) input_focus_pane_cp9

0x69e7,	// (0x00036fa6) slider_cont_pane_ParamLimits

0x69e7,	// (0x00036fa6) slider_cont_pane

0x2730,	// (0x00032cef) form_field_slider_wide_pane_t1_ParamLimits

0x2730,	// (0x00032cef) form_field_slider_wide_pane_t1

0x69fb,	// (0x00036fba) form_field_slider_wide_pane_t2_ParamLimits

0x69fb,	// (0x00036fba) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0003fc3c) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0003fc3c) form_field_slider_wide_pane_t

0x232a,	// (0x000328e9) input_focus_pane_cp10_ParamLimits

0x232a,	// (0x000328e9) input_focus_pane_cp10

0x6a0d,	// (0x00036fcc) slider_cont_pane_cp1_ParamLimits

0x6a0d,	// (0x00036fcc) slider_cont_pane_cp1

0x6a21,	// (0x00036fe0) slider_form_pane_cp

0x2742,	// (0x00032d01) input_focus_pane_g1

0x274a,	// (0x00032d09) input_focus_pane_g2

0x2752,	// (0x00032d11) input_focus_pane_g3

0x275a,	// (0x00032d19) input_focus_pane_g4

0x2762,	// (0x00032d21) input_focus_pane_g5

0x276a,	// (0x00032d29) input_focus_pane_g6

0x2772,	// (0x00032d31) input_focus_pane_g7

0x277a,	// (0x00032d39) input_focus_pane_g8

0x2782,	// (0x00032d41) input_focus_pane_g9

0x22d2,	// (0x00032891) input_focus_pane_g10

0x0009,

0xf682,	// (0x0003fc41) input_focus_pane_g

0xa2c5,	// (0x0003a884) wait_border_pane_g3_copy1

0x6a29,	// (0x00036fe8) data_form_pane_t1

0x22d2,	// (0x00032891) wait_anim_pane_g1_copy1

0x82bd,	// (0x0003887c) data_form_wide_pane_t1

0x6a44,	// (0x00037003) list_form_graphic_pane_cp_ParamLimits

0x6a44,	// (0x00037003) list_form_graphic_pane_cp

0xb1b4,	// (0x0003b773) slider_form_pane_g1

0xb1bd,	// (0x0003b77c) slider_form_pane_g2

0x0006,

0xf980,	// (0x0003ff3f) slider_form_pane_g

0x6a58,	// (0x00037017) list_form_graphic_pane_ParamLimits

0x6a58,	// (0x00037017) list_form_graphic_pane

0x6a6f,	// (0x0003702e) list_form_graphic_pane_g1

0x6a77,	// (0x00037036) list_form_graphic_pane_t1_ParamLimits

0x6a77,	// (0x00037036) list_form_graphic_pane_t1

0x2338,	// (0x000328f7) list_highlight_pane_cp5_ParamLimits

0x2338,	// (0x000328f7) list_highlight_pane_cp5

0x4667,	// (0x00034c26) find_pane_g1

0x278a,	// (0x00032d49) input_find_pane

0x6a8c,	// (0x0003704b) input_find_pane_g1_ParamLimits

0x6a8c,	// (0x0003704b) input_find_pane_g1

0x6a98,	// (0x00037057) input_find_pane_t1_ParamLimits

0x6a98,	// (0x00037057) input_find_pane_t1

0x6aad,	// (0x0003706c) input_find_pane_t2_ParamLimits

0x6aad,	// (0x0003706c) input_find_pane_t2

0x0001,

0xf697,	// (0x0003fc56) input_find_pane_t_ParamLimits

0xf697,	// (0x0003fc56) input_find_pane_t

0x2793,	// (0x00032d52) input_focus_pane_cp5_ParamLimits

0x2793,	// (0x00032d52) input_focus_pane_cp5

0x27a1,	// (0x00032d60) bg_popup_window_pane_cp2_ParamLimits

0x27a1,	// (0x00032d60) bg_popup_window_pane_cp2

0x27ae,	// (0x00032d6d) listscroll_menu_pane_ParamLimits

0x27ae,	// (0x00032d6d) listscroll_menu_pane

0x6ace,	// (0x0003708d) popup_submenu_window_ParamLimits

0x6ace,	// (0x0003708d) popup_submenu_window

0x27ba,	// (0x00032d79) find_popup_pane_g1

0x6af6,	// (0x000370b5) input_popup_find_pane_cp

0x2793,	// (0x00032d52) input_focus_pane_cp4_ParamLimits

0x2793,	// (0x00032d52) input_focus_pane_cp4

0x27c2,	// (0x00032d81) input_popup_find_pane_t1_ParamLimits

0x27c2,	// (0x00032d81) input_popup_find_pane_t1

0x22dc,	// (0x0003289b) bg_popup_sub_pane_cp

0x27f0,	// (0x00032daf) listscroll_popup_sub_pane

0x27f8,	// (0x00032db7) list_submenu_pane_ParamLimits

0x27f8,	// (0x00032db7) list_submenu_pane

0x2809,	// (0x00032dc8) scroll_pane_cp4

0x6b0e,	// (0x000370cd) list_single_popup_submenu_pane_ParamLimits

0x6b0e,	// (0x000370cd) list_single_popup_submenu_pane

0x2cd4,	// (0x00033293) list_single_popup_submenu_pane_g1

0x6b22,	// (0x000370e1) list_single_popup_submenu_pane_t1_ParamLimits

0x6b22,	// (0x000370e1) list_single_popup_submenu_pane_t1

0x2338,	// (0x000328f7) bg_active_tab_pane_cp1_ParamLimits

0x2338,	// (0x000328f7) bg_active_tab_pane_cp1

0x2811,	// (0x00032dd0) tabs_2_active_pane_g1

0x6b37,	// (0x000370f6) tabs_2_active_pane_t1

0x2338,	// (0x000328f7) bg_passive_tab_pane_cp1_ParamLimits

0x2338,	// (0x000328f7) bg_passive_tab_pane_cp1

0x2811,	// (0x00032dd0) tabs_2_passive_pane_g1

0x6b37,	// (0x000370f6) tabs_2_passive_pane_t1

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp4

0x6b49,	// (0x00037108) tabs_2_long_active_pane_t1

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp4

0x7f5f,	// (0x0003851e) list_single_midp_graphic_pane_g4_ParamLimits

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp5

0x6b68,	// (0x00037127) tabs_3_long_active_pane_t1

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp5

0x7f5f,	// (0x0003851e) list_single_midp_graphic_pane_g4

0x2338,	// (0x000328f7) bg_popup_window_pane_cp13_ParamLimits

0x2338,	// (0x000328f7) bg_popup_window_pane_cp13

0x2819,	// (0x00032dd8) listscroll_popup_fast_pane_ParamLimits

0x2819,	// (0x00032dd8) listscroll_popup_fast_pane

0x2825,	// (0x00032de4) grid_popup_fast_pane_ParamLimits

0x2825,	// (0x00032de4) grid_popup_fast_pane

0x2837,	// (0x00032df6) scroll_pane_cp9_ParamLimits

0x2837,	// (0x00032df6) scroll_pane_cp9

0xcac8,	// (0x0003d087) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac8,	// (0x0003d087) list_single_graphic_hl_pane_t1_cp2

0x284a,	// (0x00032e09) input_focus_pane_cp20_ParamLimits

0x284a,	// (0x00032e09) input_focus_pane_cp20

0x2858,	// (0x00032e17) query_popup_data_pane_t1_ParamLimits

0x2858,	// (0x00032e17) query_popup_data_pane_t1

0x286b,	// (0x00032e2a) query_popup_data_pane_t2_ParamLimits

0x286b,	// (0x00032e2a) query_popup_data_pane_t2

0x28b1,	// (0x00032e70) query_popup_data_pane_t3_ParamLimits

0x28b1,	// (0x00032e70) query_popup_data_pane_t3

0x28f2,	// (0x00032eb1) query_popup_data_pane_t4_ParamLimits

0x28f2,	// (0x00032eb1) query_popup_data_pane_t4

0x292e,	// (0x00032eed) query_popup_data_pane_t5_ParamLimits

0x292e,	// (0x00032eed) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0003fc5b) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0003fc5b) query_popup_data_pane_t

0x2742,	// (0x00032d01) bg_set_opt_pane_g1

0x274a,	// (0x00032d09) bg_set_opt_pane_g2

0x2752,	// (0x00032d11) bg_set_opt_pane_g3

0x275a,	// (0x00032d19) bg_set_opt_pane_g4

0x2762,	// (0x00032d21) bg_set_opt_pane_g5

0x276a,	// (0x00032d29) bg_set_opt_pane_g6

0x2772,	// (0x00032d31) bg_set_opt_pane_g7

0x277a,	// (0x00032d39) bg_set_opt_pane_g8

0x2782,	// (0x00032d41) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0003fc66) bg_set_opt_pane_g

0x70dd,	// (0x0003769c) control_top_pane_stacon_ParamLimits

0x70dd,	// (0x0003769c) control_top_pane_stacon

0x7130,	// (0x000376ef) signal_pane_stacon_ParamLimits

0x7130,	// (0x000376ef) signal_pane_stacon

0x7155,	// (0x00037714) stacon_top_pane_g1_ParamLimits

0x7155,	// (0x00037714) stacon_top_pane_g1

0x7177,	// (0x00037736) title_pane_stacon_ParamLimits

0x7177,	// (0x00037736) title_pane_stacon

0x71a1,	// (0x00037760) uni_indicator_pane_stacon_ParamLimits

0x71a1,	// (0x00037760) uni_indicator_pane_stacon

0x71b6,	// (0x00037775) battery_pane_stacon_ParamLimits

0x71b6,	// (0x00037775) battery_pane_stacon

0x71fa,	// (0x000377b9) control_bottom_pane_stacon_ParamLimits

0x71fa,	// (0x000377b9) control_bottom_pane_stacon

0x721d,	// (0x000377dc) navi_pane_stacon_ParamLimits

0x721d,	// (0x000377dc) navi_pane_stacon

0x7240,	// (0x000377ff) stacon_bottom_pane_g1_ParamLimits

0x7240,	// (0x000377ff) stacon_bottom_pane_g1

0x6b94,	// (0x00037153) aid_levels_signal_lsc_ParamLimits

0x6b94,	// (0x00037153) aid_levels_signal_lsc

0x6baa,	// (0x00037169) signal_pane_stacon_g1_ParamLimits

0x6baa,	// (0x00037169) signal_pane_stacon_g1

0x6bbe,	// (0x0003717d) signal_pane_stacon_g2_ParamLimits

0x6bbe,	// (0x0003717d) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0003fc79) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0003fc79) signal_pane_stacon_g

0x6bf3,	// (0x000371b2) title_pane_stacon_t1_ParamLimits

0x6bf3,	// (0x000371b2) title_pane_stacon_t1

0x2986,	// (0x00032f45) uni_indicator_pane_stacon_g1

0x2990,	// (0x00032f4f) uni_indicator_pane_stacon_g2

0x2972,	// (0x00032f31) uni_indicator_pane_stacon_g3

0x297c,	// (0x00032f3b) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0003fc85) uni_indicator_pane_stacon_g

0x6c18,	// (0x000371d7) control_top_pane_stacon_g1

0x6c20,	// (0x000371df) control_top_pane_stacon_t1_ParamLimits

0x6c20,	// (0x000371df) control_top_pane_stacon_t1

0x6c57,	// (0x00037216) aid_levels_battery_lsc_ParamLimits

0x6c57,	// (0x00037216) aid_levels_battery_lsc

0x6c6e,	// (0x0003722d) battery_pane_stacon_g1_ParamLimits

0x6c6e,	// (0x0003722d) battery_pane_stacon_g1

0x6c81,	// (0x00037240) battery_pane_stacon_g2_ParamLimits

0x6c81,	// (0x00037240) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003fc8e) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003fc8e) battery_pane_stacon_g

0x6cbf,	// (0x0003727e) navi_icon_pane_stacon

0x6cd3,	// (0x00037292) navi_navi_pane_stacon

0x6cbf,	// (0x0003727e) navi_text_pane_stacon

0x6c18,	// (0x000371d7) control_bottom_pane_stacon_g1

0x6ce7,	// (0x000372a6) control_bottom_pane_stacon_t1_ParamLimits

0x6ce7,	// (0x000372a6) control_bottom_pane_stacon_t1

0x6d1e,	// (0x000372dd) grid_app_pane_ParamLimits

0x6d1e,	// (0x000372dd) grid_app_pane

0x6d40,	// (0x000372ff) scroll_pane_cp15_ParamLimits

0x6d40,	// (0x000372ff) scroll_pane_cp15

0x6d53,	// (0x00037312) cell_app_pane_ParamLimits

0x6d53,	// (0x00037312) cell_app_pane

0x6d7b,	// (0x0003733a) cell_app_pane_g1_ParamLimits

0x6d7b,	// (0x0003733a) cell_app_pane_g1

0x29b4,	// (0x00032f73) cell_app_pane_g2_ParamLimits

0x29b4,	// (0x00032f73) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0003fc93) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0003fc93) cell_app_pane_g

0x6d9f,	// (0x0003735e) cell_app_pane_t1_ParamLimits

0x6d9f,	// (0x0003735e) cell_app_pane_t1

0x29c0,	// (0x00032f7f) grid_highlight_pane_ParamLimits

0x29c0,	// (0x00032f7f) grid_highlight_pane

0x2742,	// (0x00032d01) cell_highlight_pane_g1

0x274a,	// (0x00032d09) cell_highlight_pane_g2

0x2752,	// (0x00032d11) cell_highlight_pane_g3

0x275a,	// (0x00032d19) cell_highlight_pane_g4

0x2762,	// (0x00032d21) cell_highlight_pane_g5

0x276a,	// (0x00032d29) cell_highlight_pane_g6

0x2772,	// (0x00032d31) cell_highlight_pane_g7

0x277a,	// (0x00032d39) cell_highlight_pane_g8

0x2782,	// (0x00032d41) cell_highlight_pane_g9

0x22d2,	// (0x00032891) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0003fc41) cell_highlight_pane_g

0x29d1,	// (0x00032f90) bg_scroll_pane

0x6dc9,	// (0x00037388) scroll_handle_pane

0x2a18,	// (0x00032fd7) scroll_bg_pane_g1

0x2a2d,	// (0x00032fec) scroll_bg_pane_g2

0x2a45,	// (0x00033004) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0003fc98) scroll_bg_pane_g

0x6df2,	// (0x000373b1) scroll_handle_focus_pane_ParamLimits

0x6df2,	// (0x000373b1) scroll_handle_focus_pane

0x2a18,	// (0x00032fd7) scroll_handle_pane_g1

0x2a5a,	// (0x00033019) scroll_handle_pane_g2

0x2a45,	// (0x00033004) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0003fc9f) scroll_handle_pane_g

0x2793,	// (0x00032d52) bg_popup_sub_pane_cp21_ParamLimits

0x2793,	// (0x00032d52) bg_popup_sub_pane_cp21

0x6dff,	// (0x000373be) popup_fep_japan_predictive_window_t1_ParamLimits

0x6dff,	// (0x000373be) popup_fep_japan_predictive_window_t1

0x6e19,	// (0x000373d8) popup_fep_japan_predictive_window_t2_ParamLimits

0x6e19,	// (0x000373d8) popup_fep_japan_predictive_window_t2

0x6e4c,	// (0x0003740b) popup_fep_japan_predictive_window_t3_ParamLimits

0x6e4c,	// (0x0003740b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0003fca6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0003fca6) popup_fep_japan_predictive_window_t

0x22dc,	// (0x0003289b) bg_popup_sub_pane_cp23

0x358e,	// (0x00033b4d) listscroll_japin_cand_pane

0x2a6e,	// (0x0003302d) popup_fep_japan_candidate_window_t1

0x2a7c,	// (0x0003303b) candidate_pane_ParamLimits

0x2a7c,	// (0x0003303b) candidate_pane

0x6e83,	// (0x00037442) scroll_pane_cp30

0x2a8e,	// (0x0003304d) list_single_popup_jap_candidate_pane_ParamLimits

0x2a8e,	// (0x0003304d) list_single_popup_jap_candidate_pane

0x22dc,	// (0x0003289b) list_highlight_pane_cp30

0x2aa3,	// (0x00033062) list_single_popup_jap_candidate_pane_t1

0x2ab2,	// (0x00033071) level_1_signal

0x2abf,	// (0x0003307e) level_2_signal

0x2acc,	// (0x0003308b) level_3_signal

0x2ad9,	// (0x00033098) level_4_signal

0x2ae6,	// (0x000330a5) level_5_signal

0x2af3,	// (0x000330b2) level_6_signal

0x2b00,	// (0x000330bf) level_7_signal

0x2ab2,	// (0x00033071) level_1_battery

0x2abf,	// (0x0003307e) level_2_battery

0x2acc,	// (0x0003308b) level_3_battery

0x2ad9,	// (0x00033098) level_4_battery

0x2ae6,	// (0x000330a5) level_5_battery

0x2af3,	// (0x000330b2) level_6_battery

0x2b00,	// (0x000330bf) level_7_battery

0x2b25,	// (0x000330e4) list_menu_pane_ParamLimits

0x2b25,	// (0x000330e4) list_menu_pane

0x2b3b,	// (0x000330fa) scroll_pane_cp25_ParamLimits

0x2b3b,	// (0x000330fa) scroll_pane_cp25

0x2b54,	// (0x00033113) list_double2_graphic_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double2_graphic_pane_cp2

0x2b54,	// (0x00033113) list_double2_large_graphic_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double2_large_graphic_pane_cp2

0x2b54,	// (0x00033113) list_double2_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double2_pane_cp2

0x2b54,	// (0x00033113) list_double_graphic_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double_graphic_pane_cp2

0x2b54,	// (0x00033113) list_double_large_graphic_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double_large_graphic_pane_cp2

0x2b54,	// (0x00033113) list_double_number_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double_number_pane_cp2

0x2b54,	// (0x00033113) list_double_pane_cp2_ParamLimits

0x2b54,	// (0x00033113) list_double_pane_cp2

0x6ebe,	// (0x0003747d) list_single_2graphic_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_2graphic_pane_cp2

0x6ebe,	// (0x0003747d) list_single_graphic_heading_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_graphic_heading_pane_cp2

0x6ebe,	// (0x0003747d) list_single_graphic_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_graphic_pane_cp2

0x6ebe,	// (0x0003747d) list_single_heading_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_heading_pane_cp2

0x2b64,	// (0x00033123) list_single_large_graphic_pane_cp2_ParamLimits

0x2b64,	// (0x00033123) list_single_large_graphic_pane_cp2

0x6ebe,	// (0x0003747d) list_single_number_heading_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_number_heading_pane_cp2

0x6ebe,	// (0x0003747d) list_single_number_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_number_pane_cp2

0x6ebe,	// (0x0003747d) list_single_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_pane_cp2

0x2b7e,	// (0x0003313d) bg_popup_sub_pane_cp22

0x6f96,	// (0x00037555) popup_side_volume_key_window_g1

0x6fba,	// (0x00037579) popup_side_volume_key_window_t1

0x6fd6,	// (0x00037595) volume_small_pane_cp1

0x232a,	// (0x000328e9) bg_popup_sub_pane_cp24_ParamLimits

0x232a,	// (0x000328e9) bg_popup_sub_pane_cp24

0x2b94,	// (0x00033153) fep_china_uni_candidate_pane_ParamLimits

0x2b94,	// (0x00033153) fep_china_uni_candidate_pane

0x2ba8,	// (0x00033167) fep_china_uni_entry_pane

0x2bb8,	// (0x00033177) popup_fep_china_uni_window_g1

0x6fde,	// (0x0003759d) fep_china_uni_entry_pane_g1

0x6fe6,	// (0x000375a5) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0003fcd7) fep_china_uni_entry_pane_g

0x2bd4,	// (0x00033193) fep_entry_item_pane

0x2bde,	// (0x0003319d) fep_candidate_item_pane

0x6fee,	// (0x000375ad) fep_china_uni_candidate_pane_g1

0x2be6,	// (0x000331a5) fep_china_uni_candidate_pane_g2

0x2bee,	// (0x000331ad) fep_china_uni_candidate_pane_g3

0x6ff6,	// (0x000375b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0003fcdc) fep_china_uni_candidate_pane_g

0x22d2,	// (0x00032891) fep_entry_item_pane_g1

0x2bf6,	// (0x000331b5) fep_entry_item_pane_t1_ParamLimits

0x2bf6,	// (0x000331b5) fep_entry_item_pane_t1

0x2c0c,	// (0x000331cb) fep_candidate_item_pane_t1_ParamLimits

0x2c0c,	// (0x000331cb) fep_candidate_item_pane_t1

0x2c21,	// (0x000331e0) fep_candidate_item_pane_t2_ParamLimits

0x2c21,	// (0x000331e0) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0003fce5) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0003fce5) fep_candidate_item_pane_t

0x2338,	// (0x000328f7) list_highlight_pane_cp31_ParamLimits

0x2338,	// (0x000328f7) list_highlight_pane_cp31

0x2c33,	// (0x000331f2) level_1_signal_lsc

0x2c3c,	// (0x000331fb) level_2_signal_lsc

0x2c45,	// (0x00033204) level_3_signal_lsc

0x2c4e,	// (0x0003320d) level_4_signal_lsc

0x2c57,	// (0x00033216) level_5_signal_lsc

0x2c60,	// (0x0003321f) level_6_signal_lsc

0x2c69,	// (0x00033228) level_7_signal_lsc

0x2c69,	// (0x00033228) level_1_battery_lsc

0x2c72,	// (0x00033231) level_2_battery_lsc

0x2c7b,	// (0x0003323a) level_3_battery_lsc

0x2c84,	// (0x00033243) level_4_battery_lsc

0x2c8d,	// (0x0003324c) level_5_battery_lsc

0x2c96,	// (0x00033255) level_6_battery_lsc

0x2c33,	// (0x000331f2) level_7_battery_lsc

0x2c9f,	// (0x0003325e) scroll_handle_focus_pane_g1

0x2ca8,	// (0x00033267) scroll_handle_focus_pane_g2

0x2cb1,	// (0x00033270) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0003fcea) scroll_handle_focus_pane_g

0x6ffe,	// (0x000375bd) list_single_2graphic_pane_g1_ParamLimits

0x6ffe,	// (0x000375bd) list_single_2graphic_pane_g1

0x64ff,	// (0x00036abe) list_single_2graphic_pane_g2_ParamLimits

0x64ff,	// (0x00036abe) list_single_2graphic_pane_g2

0x456f,	// (0x00034b2e) list_single_2graphic_pane_g3_ParamLimits

0x456f,	// (0x00034b2e) list_single_2graphic_pane_g3

0x700a,	// (0x000375c9) list_single_2graphic_pane_g4_ParamLimits

0x700a,	// (0x000375c9) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0003fcf1) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0003fcf1) list_single_2graphic_pane_g

0x7016,	// (0x000375d5) list_single_2graphic_pane_t1_ParamLimits

0x7016,	// (0x000375d5) list_single_2graphic_pane_t1

0x7044,	// (0x00037603) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7044,	// (0x00037603) list_double2_graphic_large_graphic_pane_g1

0x66ec,	// (0x00036cab) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x66ec,	// (0x00036cab) list_double2_graphic_large_graphic_pane_g2

0x66fd,	// (0x00036cbc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x66fd,	// (0x00036cbc) list_double2_graphic_large_graphic_pane_g3

0x7054,	// (0x00037613) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7054,	// (0x00037613) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0003fcfa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0003fcfa) list_double2_graphic_large_graphic_pane_g

0x7060,	// (0x0003761f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7060,	// (0x0003761f) list_double2_graphic_large_graphic_pane_t1

0x7076,	// (0x00037635) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7076,	// (0x00037635) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0003fd03) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0003fd03) list_double2_graphic_large_graphic_pane_t

0x7307,	// (0x000378c6) popup_fast_swap_window_ParamLimits

0x7307,	// (0x000378c6) popup_fast_swap_window

0x7323,	// (0x000378e2) popup_side_volume_key_window

0x733d,	// (0x000378fc) stacon_top_pane

0x7347,	// (0x00037906) status_pane_ParamLimits

0x7347,	// (0x00037906) status_pane

0x7355,	// (0x00037914) status_small_pane

0x22dc,	// (0x0003289b) control_pane

0x22dc,	// (0x0003289b) stacon_bottom_pane

0x26cd,	// (0x00032c8c) scroll_pane_cp121

0x26c4,	// (0x00032c83) set_content_pane

0x7088,	// (0x00037647) bg_active_tab_pane_g1_cp1

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp1

0x709a,	// (0x00037659) bg_active_tab_pane_g3_cp1

0x7088,	// (0x00037647) bg_passive_tab_pane_g1_cp1

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp1

0x709a,	// (0x00037659) bg_passive_tab_pane_g3_cp1

0x70a3,	// (0x00037662) bg_active_tab_pane_g1_cp2

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp2

0x70ac,	// (0x0003766b) bg_active_tab_pane_g3_cp2

0x70a3,	// (0x00037662) bg_passive_tab_pane_g1_cp2

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp2

0x70ac,	// (0x0003766b) bg_passive_tab_pane_g3_cp2

0x70b5,	// (0x00037674) bg_active_tab_pane_g1_cp3

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp3

0x70be,	// (0x0003767d) bg_active_tab_pane_g3_cp3

0x70b5,	// (0x00037674) bg_passive_tab_pane_g1_cp3

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp3

0x70be,	// (0x0003767d) bg_passive_tab_pane_g3_cp3

0x70c7,	// (0x00037686) bg_active_tab_pane_g1_cp4

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp4

0x70d2,	// (0x00037691) bg_active_tab_pane_g3_cp4

0x70c7,	// (0x00037686) bg_passive_tab_pane_g1_cp4

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp4

0x70d2,	// (0x00037691) bg_passive_tab_pane_g3_cp4

0x725c,	// (0x0003781b) bg_active_tab_pane_g1_cp5

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp5

0x7265,	// (0x00037824) bg_active_tab_pane_g3_cp5

0x725c,	// (0x0003781b) bg_passive_tab_pane_g1_cp5

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp5

0x7265,	// (0x00037824) bg_passive_tab_pane_g3_cp5

0x726e,	// (0x0003782d) list_set_graphic_pane_ParamLimits

0x726e,	// (0x0003782d) list_set_graphic_pane

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp4

0x728c,	// (0x0003784b) list_set_graphic_pane_g1_ParamLimits

0x728c,	// (0x0003784b) list_set_graphic_pane_g1

0x7298,	// (0x00037857) list_set_graphic_pane_g2_ParamLimits

0x7298,	// (0x00037857) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0003fd08) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0003fd08) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0004009b) volume_small_pane_cp_g

0x72ba,	// (0x00037879) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x72ba,	// (0x00037879) list_double2_large_graphic_pane_g1_cp2

0x72c6,	// (0x00037885) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x72c6,	// (0x00037885) list_double2_large_graphic_pane_g2_cp2

0x72d7,	// (0x00037896) list_double2_large_graphic_pane_g3_cp2

0x72df,	// (0x0003789e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x72df,	// (0x0003789e) list_double2_large_graphic_pane_t1_cp2

0x72f5,	// (0x000378b4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x72f5,	// (0x000378b4) list_double2_large_graphic_pane_t2_cp2

0xad76,	// (0x0003b335) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad76,	// (0x0003b335) list_double_large_graphic_pane_g1_cp2

0xad87,	// (0x0003b346) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad87,	// (0x0003b346) list_double_large_graphic_pane_g2_cp2

0x7462,	// (0x00037a21) list_double_large_graphic_pane_g3_cp2

0xad98,	// (0x0003b357) list_double_large_graphic_pane_g4_cp

0xada0,	// (0x0003b35f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xada0,	// (0x0003b35f) list_double_large_graphic_pane_t1_cp2

0xadb7,	// (0x0003b376) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadb7,	// (0x0003b376) list_double_large_graphic_pane_t2_cp2

0x7360,	// (0x0003791f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7360,	// (0x0003791f) list_double2_graphic_pane_g1_cp2

0x736e,	// (0x0003792d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x736e,	// (0x0003792d) list_double2_graphic_pane_g2_cp2

0x737f,	// (0x0003793e) list_double2_graphic_pane_g3_cp2

0x7389,	// (0x00037948) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7389,	// (0x00037948) list_double2_graphic_pane_t1_cp2

0x739f,	// (0x0003795e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x739f,	// (0x0003795e) list_double2_graphic_pane_t2_cp2

0x2cba,	// (0x00033279) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2cba,	// (0x00033279) list_single_number_heading_pane_g1_cp2

0x73b1,	// (0x00037970) list_single_number_heading_pane_g2_cp2

0x73b9,	// (0x00037978) list_single_number_heading_pane_t1_cp2_ParamLimits

0x73b9,	// (0x00037978) list_single_number_heading_pane_t1_cp2

0x73cf,	// (0x0003798e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x73cf,	// (0x0003798e) list_single_number_heading_pane_t2_cp2

0x73e1,	// (0x000379a0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x73e1,	// (0x000379a0) list_single_number_heading_pane_t3_cp2

0x2cba,	// (0x00033279) list_single_heading_pane_g1_cp2_ParamLimits

0x2cba,	// (0x00033279) list_single_heading_pane_g1_cp2

0x73b1,	// (0x00037970) list_single_heading_pane_g2_cp2

0x73b9,	// (0x00037978) list_single_heading_pane_t1_cp2_ParamLimits

0x73b9,	// (0x00037978) list_single_heading_pane_t1_cp2

0xab80,	// (0x0003b13f) list_single_heading_pane_t2_cp2_ParamLimits

0xab80,	// (0x0003b13f) list_single_heading_pane_t2_cp2

0xaac8,	// (0x0003b087) list_double_graphic_pane_g1_cp2_ParamLimits

0xaac8,	// (0x0003b087) list_double_graphic_pane_g1_cp2

0xaad4,	// (0x0003b093) list_double_graphic_pane_g2_cp2_ParamLimits

0xaad4,	// (0x0003b093) list_double_graphic_pane_g2_cp2

0xaae3,	// (0x0003b0a2) list_double_graphic_pane_g3_cp2

0xaaeb,	// (0x0003b0aa) list_double_graphic_pane_t1_cp2_ParamLimits

0xaaeb,	// (0x0003b0aa) list_double_graphic_pane_t1_cp2

0xab01,	// (0x0003b0c0) list_double_graphic_pane_t2_cp2_ParamLimits

0xab01,	// (0x0003b0c0) list_double_graphic_pane_t2_cp2

0x7456,	// (0x00037a15) list_double_number_pane_g1_cp2_ParamLimits

0x7456,	// (0x00037a15) list_double_number_pane_g1_cp2

0x7462,	// (0x00037a21) list_double_number_pane_g2_cp2

0xaa8c,	// (0x0003b04b) list_double_number_pane_t1_cp2_ParamLimits

0xaa8c,	// (0x0003b04b) list_double_number_pane_t1_cp2

0xaaa0,	// (0x0003b05f) list_double_number_pane_t2_cp2_ParamLimits

0xaaa0,	// (0x0003b05f) list_double_number_pane_t2_cp2

0xaab6,	// (0x0003b075) list_double_number_pane_t3_cp2_ParamLimits

0xaab6,	// (0x0003b075) list_double_number_pane_t3_cp2

0xa975,	// (0x0003af34) list_single_graphic_pane_g1_cp2_ParamLimits

0xa975,	// (0x0003af34) list_single_graphic_pane_g1_cp2

0x74ba,	// (0x00037a79) list_single_graphic_pane_g2_cp2_ParamLimits

0x74ba,	// (0x00037a79) list_single_graphic_pane_g2_cp2

0x74c6,	// (0x00037a85) list_single_graphic_pane_g3_cp2

0xa94b,	// (0x0003af0a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa94b,	// (0x0003af0a) list_single_graphic_pane_t1_cp2

0x74ba,	// (0x00037a79) list_single_number_pane_g1_cp2_ParamLimits

0x74ba,	// (0x00037a79) list_single_number_pane_g1_cp2

0x74c6,	// (0x00037a85) list_single_number_pane_g2_cp2

0xa94b,	// (0x0003af0a) list_single_number_pane_t1_cp2_ParamLimits

0xa94b,	// (0x0003af0a) list_single_number_pane_t1_cp2

0xa961,	// (0x0003af20) list_single_number_pane_t2_cp2_ParamLimits

0xa961,	// (0x0003af20) list_single_number_pane_t2_cp2

0x72c6,	// (0x00037885) list_double2_pane_g1_cp2_ParamLimits

0x72c6,	// (0x00037885) list_double2_pane_g1_cp2

0x72d7,	// (0x00037896) list_double2_pane_g2_cp2

0x742e,	// (0x000379ed) list_double2_pane_t1_cp2_ParamLimits

0x742e,	// (0x000379ed) list_double2_pane_t1_cp2

0x7444,	// (0x00037a03) list_double2_pane_t2_cp2_ParamLimits

0x7444,	// (0x00037a03) list_double2_pane_t2_cp2

0x7456,	// (0x00037a15) list_double_pane_g1_cp2_ParamLimits

0x7456,	// (0x00037a15) list_double_pane_g1_cp2

0x7462,	// (0x00037a21) list_double_pane_g2_cp2

0x746a,	// (0x00037a29) list_double_pane_t1_cp2_ParamLimits

0x746a,	// (0x00037a29) list_double_pane_t1_cp2

0x7480,	// (0x00037a3f) list_double_pane_t2_cp2_ParamLimits

0x7480,	// (0x00037a3f) list_double_pane_t2_cp2

0x74aa,	// (0x00037a69) list_single_pane_cp2_g3

0x74ba,	// (0x00037a79) list_single_pane_g1_cp2_ParamLimits

0x74ba,	// (0x00037a79) list_single_pane_g1_cp2

0x74c6,	// (0x00037a85) list_single_pane_g2_cp2

0x74ce,	// (0x00037a8d) list_single_pane_t1_cp2_ParamLimits

0x74ce,	// (0x00037a8d) list_single_pane_t1_cp2

0x74e6,	// (0x00037aa5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x74e6,	// (0x00037aa5) list_single_large_graphic_pane_g1_cp2

0x74f2,	// (0x00037ab1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x74f2,	// (0x00037ab1) list_single_large_graphic_pane_g2_cp2

0x74fe,	// (0x00037abd) list_single_large_graphic_pane_g3_cp2

0x7506,	// (0x00037ac5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7506,	// (0x00037ac5) list_single_large_graphic_pane_g4_cp1

0x7520,	// (0x00037adf) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7520,	// (0x00037adf) list_single_large_graphic_pane_t1_cp2

0xa917,	// (0x0003aed6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa917,	// (0x0003aed6) list_single_graphic_heading_pane_g1_cp2

0xa8e4,	// (0x0003aea3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8e4,	// (0x0003aea3) list_single_graphic_heading_pane_g4_cp2

0x74c6,	// (0x00037a85) list_single_graphic_heading_pane_g5_cp2

0xa923,	// (0x0003aee2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa923,	// (0x0003aee2) list_single_graphic_heading_pane_t1_cp2

0xa939,	// (0x0003aef8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa939,	// (0x0003aef8) list_single_graphic_heading_pane_t2_cp2

0xa8d8,	// (0x0003ae97) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8d8,	// (0x0003ae97) list_single_2graphic_pane_g1_cp2

0xa8e4,	// (0x0003aea3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8e4,	// (0x0003aea3) list_single_2graphic_pane_g2_cp2

0x74c6,	// (0x00037a85) list_single_2graphic_pane_g3_cp2

0xa8f5,	// (0x0003aeb4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8f5,	// (0x0003aeb4) list_single_2graphic_pane_g4_cp2

0xa901,	// (0x0003aec0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa901,	// (0x0003aec0) list_single_2graphic_pane_t1_cp2

0x22d2,	// (0x00032891) list_highlight_pane_g10_cp1

0xa4c0,	// (0x0003aa7f) list_highlight_pane_g1_cp1

0xa4c8,	// (0x0003aa87) list_highlight_pane_g2_cp1

0xa4d0,	// (0x0003aa8f) list_highlight_pane_g3_cp1

0xa4d8,	// (0x0003aa97) list_highlight_pane_g4_cp1

0xa4e0,	// (0x0003aa9f) list_highlight_pane_g5_cp1

0xa4e8,	// (0x0003aaa7) list_highlight_pane_g6_cp1

0xa4f0,	// (0x0003aaaf) list_highlight_pane_g7_cp1

0xa4f8,	// (0x0003aab7) list_highlight_pane_g8_cp1

0xa500,	// (0x0003aabf) list_highlight_pane_g9_cp1

0xa3e8,	// (0x0003a9a7) form_field_slider_pane_t3

0xa3f6,	// (0x0003a9b5) form_field_slider_pane_t4

0xa404,	// (0x0003a9c3) slider_form_pane_ParamLimits

0xa404,	// (0x0003a9c3) slider_form_pane

0x22dc,	// (0x0003289b) control_abbreviations

0x22dc,	// (0x0003289b) control_conventions

0x22dc,	// (0x0003289b) control_definitions

0x22dc,	// (0x0003289b) format_table_attribute

0xabca,	// (0x0003b189) bg_popup_preview_window_pane_g9

0x22dc,	// (0x0003289b) format_table_data2

0x22dc,	// (0x0003289b) format_table_data3

0x22dc,	// (0x0003289b) format_table_data_example

0x0008,

0x22dc,	// (0x0003289b) intro_purpose

0xf8e0,	// (0x0003fe9f) bg_popup_preview_window_pane_g

0x22dc,	// (0x0003289b) texts_category

0x22dc,	// (0x0003289b) texts_graphics

0x7536,	// (0x00037af5) text_digital

0x7545,	// (0x00037b04) text_primary

0x7554,	// (0x00037b13) text_primary_small

0x7563,	// (0x00037b22) text_secondary

0x7572,	// (0x00037b31) text_title

0xb2f7,	// (0x0003b8b6) bg_passive_tab_pane_g1_cp3_srt

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp3_srt

0xb300,	// (0x0003b8bf) bg_passive_tab_pane_g3_cp3_srt

0x2338,	// (0x000328f7) bg_active_tab_pane_cp3_srt_ParamLimits

0x2338,	// (0x000328f7) bg_active_tab_pane_cp3_srt

0xb309,	// (0x0003b8c8) tabs_4_active_pane_srt_g1

0xb311,	// (0x0003b8d0) tabs_4_active_pane_srt_t1_ParamLimits

0xb311,	// (0x0003b8d0) tabs_4_active_pane_srt_t1

0xb2f7,	// (0x0003b8b6) bg_active_tab_pane_g1_cp3_copy1

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp3_copy1

0xb300,	// (0x0003b8bf) bg_active_tab_pane_g3_cp3_copy1

0x2338,	// (0x000328f7) tabs_2_long_active_pane_srt_ParamLimits

0x2338,	// (0x000328f7) tabs_2_long_active_pane_srt

0x2338,	// (0x000328f7) tabs_2_long_passive_pane_srt_ParamLimits

0x2338,	// (0x000328f7) tabs_2_long_passive_pane_srt

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp4_srt

0xafeb,	// (0x0003b5aa) bg_passive_tab_pane_g1_cp4_srt

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp4_srt

0xaff4,	// (0x0003b5b3) bg_passive_tab_pane_g3_cp4_srt

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp4_srt_ParamLimits

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp4_srt

0xaffd,	// (0x0003b5bc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaffd,	// (0x0003b5bc) tabs_2_long_active_pane_srt_t1

0xafeb,	// (0x0003b5aa) bg_active_tab_pane_g1_cp4_srt

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp4_srt

0xaff4,	// (0x0003b5b3) bg_active_tab_pane_g3_cp4_srt

0x232a,	// (0x000328e9) tabs_3_long_active_pane_srt_ParamLimits

0x232a,	// (0x000328e9) tabs_3_long_active_pane_srt

0x232a,	// (0x000328e9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x232a,	// (0x000328e9) tabs_3_long_passive_pane_cp_srt

0x232a,	// (0x000328e9) tabs_3_long_passive_pane_srt_ParamLimits

0x232a,	// (0x000328e9) tabs_3_long_passive_pane_srt

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp5_srt

0x725c,	// (0x0003781b) bg_passive_tab_pane_g1_cp5_srt

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp5_srt

0x7265,	// (0x00037824) bg_passive_tab_pane_g3_cp5_srt

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp5_srt_ParamLimits

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp5_srt

0xafd9,	// (0x0003b598) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafd9,	// (0x0003b598) tabs_3_long_active_pane_srt_t1

0x725c,	// (0x0003781b) bg_active_tab_pane_g1_cp5_srt

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp5_srt

0x7265,	// (0x00037824) bg_active_tab_pane_g3_cp5_srt

0xafcb,	// (0x0003b58a) navi_text_pane_srt_t1

0xafc3,	// (0x0003b582) navi_icon_pane_srt_g1

0x961c,	// (0x00039bdb) midp_editing_number_pane_srt

0x7581,	// (0x00037b40) midp_ticker_pane_srt

0x9624,	// (0x00039be3) midp_ticker_pane_srt_g1

0x962c,	// (0x00039beb) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0003fd27) midp_ticker_pane_srt_g

0x9634,	// (0x00039bf3) midp_ticker_pane_srt_t1

0xafb4,	// (0x0003b573) midp_editing_number_pane_t1_copy1

0x7589,	// (0x00037b48) listscroll_midp_pane

0x7589,	// (0x00037b48) midp_form_pane

0x75fb,	// (0x00037bba) midp_info_popup_window_ParamLimits

0x75fb,	// (0x00037bba) midp_info_popup_window

0x2793,	// (0x00032d52) bg_popup_sub_pane_cp50_ParamLimits

0x2793,	// (0x00032d52) bg_popup_sub_pane_cp50

0xa0fc,	// (0x0003a6bb) listscroll_midp_info_pane_ParamLimits

0xa0fc,	// (0x0003a6bb) listscroll_midp_info_pane

0xa0dc,	// (0x0003a69b) listscroll_form_midp_pane_ParamLimits

0xa0dc,	// (0x0003a69b) listscroll_form_midp_pane

0xa0e8,	// (0x0003a6a7) scroll_bar_cp050

0xa0bc,	// (0x0003a67b) list_midp_pane

0xbd2e,	// (0x0003c2ed) signal_pane_g2_cp

0x9ff6,	// (0x0003a5b5) listscroll_midp_info_pane_t1_ParamLimits

0x9ff6,	// (0x0003a5b5) listscroll_midp_info_pane_t1

0xa00e,	// (0x0003a5cd) listscroll_midp_info_pane_t2_ParamLimits

0xa00e,	// (0x0003a5cd) listscroll_midp_info_pane_t2

0xa04c,	// (0x0003a60b) listscroll_midp_info_pane_t3_ParamLimits

0xa04c,	// (0x0003a60b) listscroll_midp_info_pane_t3

0xa086,	// (0x0003a645) listscroll_midp_info_pane_t4_ParamLimits

0xa086,	// (0x0003a645) listscroll_midp_info_pane_t4

0x0003,

0xf81b,	// (0x0003fdda) listscroll_midp_info_pane_t_ParamLimits

0xf81b,	// (0x0003fdda) listscroll_midp_info_pane_t

0x2809,	// (0x00032dc8) scroll_pane_cp21

0x9f96,	// (0x0003a555) form_midp_field_choice_group_pane

0x9f9f,	// (0x0003a55e) form_midp_field_text_pane

0x9fdc,	// (0x0003a59b) form_midp_field_time_pane

0x9fe4,	// (0x0003a5a3) form_midp_gauge_slider_pane

0x9fed,	// (0x0003a5ac) form_midp_gauge_wait_pane

0x22dc,	// (0x0003289b) form_midp_image_pane

0x8046,	// (0x00038605) list_single_midp_pane_ParamLimits

0x8046,	// (0x00038605) list_single_midp_pane

0x9f4b,	// (0x0003a50a) form_midp_field_text_pane_t1

0x9d15,	// (0x0003a2d4) input_focus_pane_cp050

0x9f85,	// (0x0003a544) list_midp_form_text_pane

0x9f1a,	// (0x0003a4d9) form_midp_field_choice_group_pane_t1

0x9f28,	// (0x0003a4e7) input_focus_pane_cp051

0x9f3c,	// (0x0003a4fb) list_midp_choice_pane

0x22dc,	// (0x0003289b) status_idle_pane

0x9efe,	// (0x0003a4bd) form_midp_field_time_pane_t1

0x22d2,	// (0x00032891) wait_anim_pane_g2_copy1

0x9f0c,	// (0x0003a4cb) form_midp_field_time_pane_t2

0x0001,

0x76ab,	// (0x00037c6a) aid_navinavi_width_2_pane

0xf816,	// (0x0003fdd5) form_midp_field_time_pane_t

0x22dc,	// (0x0003289b) input_focus_pane_cp052

0x22dc,	// (0x0003289b) bg_input_focus_pane_cp040

0x9ebe,	// (0x0003a47d) form_midp_gauge_slider_pane_t1

0x9ecc,	// (0x0003a48b) form_midp_gauge_slider_pane_t2

0x9eda,	// (0x0003a499) form_midp_gauge_slider_pane_t3

0x9ee8,	// (0x0003a4a7) form_midp_gauge_slider_pane_t4

0x0003,

0xf80d,	// (0x0003fdcc) form_midp_gauge_slider_pane_t

0x9ef6,	// (0x0003a4b5) form_midp_slider_pane

0x2338,	// (0x000328f7) bg_input_focus_pane_cp041_ParamLimits

0x2338,	// (0x000328f7) bg_input_focus_pane_cp041

0x9e8b,	// (0x0003a44a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e8b,	// (0x0003a44a) form_midp_gauge_wait_pane_t1

0x9e9d,	// (0x0003a45c) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e9d,	// (0x0003a45c) form_midp_gauge_wait_pane_t2

0x0001,

0xf808,	// (0x0003fdc7) form_midp_gauge_wait_pane_t_ParamLimits

0xf808,	// (0x0003fdc7) form_midp_gauge_wait_pane_t

0x9eaf,	// (0x0003a46e) form_midp_wait_pane_ParamLimits

0x9eaf,	// (0x0003a46e) form_midp_wait_pane

0x9e55,	// (0x0003a414) form_midp_image_pane_g1

0x9e5e,	// (0x0003a41d) form_midp_image_pane_t1

0x9e6d,	// (0x0003a42c) form_midp_image_pane_t2

0x9e7c,	// (0x0003a43b) form_midp_image_pane_t3

0x0002,

0xf801,	// (0x0003fdc0) form_midp_image_pane_t

0x9e4c,	// (0x0003a40b) list_single_midp_pane_g1

0x479a,	// (0x00034d59) list_single_midp_pane_t1

0x9e23,	// (0x0003a3e2) list_midp_form_item_pane_ParamLimits

0x9e23,	// (0x0003a3e2) list_midp_form_item_pane

0x7653,	// (0x00037c12) list_midp_form_item_pane_t1

0x7662,	// (0x00037c21) midp_ticker_pane_g1

0x766e,	// (0x00037c2d) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0003fd0d) midp_ticker_pane_g

0x767a,	// (0x00037c39) midp_ticker_pane_t1

0xb201,	// (0x0003b7c0) midp_editing_number_pane_t1

0xb1df,	// (0x0003b79e) midp_editing_number_pane

0xb1ee,	// (0x0003b7ad) midp_ticker_pane

0xafa4,	// (0x0003b563) ai_message_heading_pane

0x22dc,	// (0x0003289b) bg_popup_window_pane_cp14

0xafac,	// (0x0003b56b) listscroll_ai_message_pane

0xaf2e,	// (0x0003b4ed) ai_message_heading_pane_g1_ParamLimits

0xaf2e,	// (0x0003b4ed) ai_message_heading_pane_g1

0xaf3a,	// (0x0003b4f9) ai_message_heading_pane_g2_ParamLimits

0xaf3a,	// (0x0003b4f9) ai_message_heading_pane_g2

0xaf46,	// (0x0003b505) ai_message_heading_pane_g3_ParamLimits

0xaf46,	// (0x0003b505) ai_message_heading_pane_g3

0xaf52,	// (0x0003b511) ai_message_heading_pane_g4_ParamLimits

0xaf52,	// (0x0003b511) ai_message_heading_pane_g4

0x0003,

0xf942,	// (0x0003ff01) ai_message_heading_pane_g_ParamLimits

0xf942,	// (0x0003ff01) ai_message_heading_pane_g

0xaf5e,	// (0x0003b51d) ai_message_heading_pane_t1_ParamLimits

0xaf5e,	// (0x0003b51d) ai_message_heading_pane_t1

0xaf78,	// (0x0003b537) ai_message_heading_pane_t2_ParamLimits

0xaf78,	// (0x0003b537) ai_message_heading_pane_t2

0x0001,

0xf94b,	// (0x0003ff0a) ai_message_heading_pane_t_ParamLimits

0xf94b,	// (0x0003ff0a) ai_message_heading_pane_t

0xaf8a,	// (0x0003b549) bg_popup_heading_pane_cp1_ParamLimits

0xaf8a,	// (0x0003b549) bg_popup_heading_pane_cp1

0xaf1c,	// (0x0003b4db) list_ai_message_pane_ParamLimits

0xaf1c,	// (0x0003b4db) list_ai_message_pane

0x2809,	// (0x00032dc8) scroll_pane_cp10

0xaeb8,	// (0x0003b477) list_ai_message_pane_g1

0xaec0,	// (0x0003b47f) list_ai_message_pane_g2

0x0001,

0xf91f,	// (0x0003fede) list_ai_message_pane_g

0xaec8,	// (0x0003b487) list_ai_message_pane_t1_ParamLimits

0xaec8,	// (0x0003b487) list_ai_message_pane_t1

0xaedd,	// (0x0003b49c) list_ai_message_pane_t2_ParamLimits

0xaedd,	// (0x0003b49c) list_ai_message_pane_t2

0xaef2,	// (0x0003b4b1) list_ai_message_pane_t3_ParamLimits

0xaef2,	// (0x0003b4b1) list_ai_message_pane_t3

0xaf07,	// (0x0003b4c6) list_ai_message_pane_t4_ParamLimits

0xaf07,	// (0x0003b4c6) list_ai_message_pane_t4

0x0003,

0xf924,	// (0x0003fee3) list_ai_message_pane_t_ParamLimits

0xf924,	// (0x0003fee3) list_ai_message_pane_t

0xaea3,	// (0x0003b462) cell_ai_soft_ind_pane_ParamLimits

0xaea3,	// (0x0003b462) cell_ai_soft_ind_pane

0x768c,	// (0x00037c4b) cell_ai_soft_ind_pane_g1_ParamLimits

0x768c,	// (0x00037c4b) cell_ai_soft_ind_pane_g1

0x22dc,	// (0x0003289b) grid_highlight_cp1

0x7699,	// (0x00037c58) text_secondary_cp56_ParamLimits

0x7699,	// (0x00037c58) text_secondary_cp56

0xae78,	// (0x0003b437) example_general_pane_ParamLimits

0xae78,	// (0x0003b437) example_general_pane

0xae84,	// (0x0003b443) example_parent_pane_g1_ParamLimits

0xae84,	// (0x0003b443) example_parent_pane_g1

0xae90,	// (0x0003b44f) example_parent_pane_t1_ParamLimits

0xae90,	// (0x0003b44f) example_parent_pane_t1

0x7cda,	// (0x00038299) popup_preview_text_window_ParamLimits

0x7cda,	// (0x00038299) popup_preview_text_window

0x74b2,	// (0x00037a71) list_single_pane_cp2_g4

0x250a,	// (0x00032ac9) bg_popup_preview_window_pane_ParamLimits

0x250a,	// (0x00032ac9) bg_popup_preview_window_pane

0xabd2,	// (0x0003b191) popup_preview_text_window_t1_ParamLimits

0xabd2,	// (0x0003b191) popup_preview_text_window_t1

0xabf0,	// (0x0003b1af) popup_preview_text_window_t2_ParamLimits

0xabf0,	// (0x0003b1af) popup_preview_text_window_t2

0xac39,	// (0x0003b1f8) popup_preview_text_window_t3_ParamLimits

0xac39,	// (0x0003b1f8) popup_preview_text_window_t3

0xac7e,	// (0x0003b23d) popup_preview_text_window_t4_ParamLimits

0xac7e,	// (0x0003b23d) popup_preview_text_window_t4

0x0004,

0xf8f3,	// (0x0003feb2) popup_preview_text_window_t_ParamLimits

0xf8f3,	// (0x0003feb2) popup_preview_text_window_t

0xacfc,	// (0x0003b2bb) scroll_pane_cp11

0x9ca1,	// (0x0003a260) bg_popup_preview_window_pane_g1

0xab92,	// (0x0003b151) bg_popup_preview_window_pane_g2

0xab9a,	// (0x0003b159) bg_popup_preview_window_pane_g3

0xaba2,	// (0x0003b161) bg_popup_preview_window_pane_g4

0xabaa,	// (0x0003b169) bg_popup_preview_window_pane_g5

0xabb2,	// (0x0003b171) bg_popup_preview_window_pane_g6

0xabba,	// (0x0003b179) bg_popup_preview_window_pane_g7

0xabc2,	// (0x0003b181) bg_popup_preview_window_pane_g8

0x5b0b,	// (0x000360ca) aid_popup_width_pane

0x7cb8,	// (0x00038277) popup_midp_note_alarm_window_ParamLimits

0x7cb8,	// (0x00038277) popup_midp_note_alarm_window

0x26de,	// (0x00032c9d) data_form_pane_ParamLimits

0x691e,	// (0x00036edd) form_field_data_pane_g1

0x6928,	// (0x00036ee7) form_field_data_pane_t1_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_ParamLimits

0x6940,	// (0x00036eff) data_form_wide_pane_ParamLimits

0x6951,	// (0x00036f10) form_field_data_wide_pane_g1

0x695d,	// (0x00036f1c) form_field_data_wide_pane_t1_ParamLimits

0x25de,	// (0x00032b9d) input_focus_pane_cp6_ParamLimits

0x6b00,	// (0x000370bf) input_popup_find_pane_g1_ParamLimits

0x6b00,	// (0x000370bf) input_popup_find_pane_g1

0x6c92,	// (0x00037251) aid_navi_side_left_pane

0x6ca7,	// (0x00037266) aid_navi_side_right_pane

0xa5bb,	// (0x0003ab7a) bg_popup_window_pane_cp30_ParamLimits

0xa5bb,	// (0x0003ab7a) bg_popup_window_pane_cp30

0xa635,	// (0x0003abf4) popup_midp_note_alarm_window_g1_ParamLimits

0xa635,	// (0x0003abf4) popup_midp_note_alarm_window_g1

0xa665,	// (0x0003ac24) popup_midp_note_alarm_window_t1_ParamLimits

0xa665,	// (0x0003ac24) popup_midp_note_alarm_window_t1

0xa706,	// (0x0003acc5) popup_midp_note_alarm_window_t2_ParamLimits

0xa706,	// (0x0003acc5) popup_midp_note_alarm_window_t2

0xa7b4,	// (0x0003ad73) popup_midp_note_alarm_window_t3_ParamLimits

0xa7b4,	// (0x0003ad73) popup_midp_note_alarm_window_t3

0xa7dc,	// (0x0003ad9b) popup_midp_note_alarm_window_t4_ParamLimits

0xa7dc,	// (0x0003ad9b) popup_midp_note_alarm_window_t4

0xa7fc,	// (0x0003adbb) popup_midp_note_alarm_window_t5_ParamLimits

0xa7fc,	// (0x0003adbb) popup_midp_note_alarm_window_t5

0x000a,

0xf890,	// (0x0003fe4f) popup_midp_note_alarm_window_t_ParamLimits

0xf890,	// (0x0003fe4f) popup_midp_note_alarm_window_t

0xa8a8,	// (0x0003ae67) wait_bar_pane_cp1_ParamLimits

0xa8a8,	// (0x0003ae67) wait_bar_pane_cp1

0x22dc,	// (0x0003289b) wait_anim_pane_copy1

0x22dc,	// (0x0003289b) wait_border_pane_copy1

0xa2b1,	// (0x0003a870) wait_border_pane_g1_copy1

0x6977,	// (0x00036f36) form_field_popup_pane_g1

0x697f,	// (0x00036f3e) form_field_popup_pane_t1_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_cp7_ParamLimits

0x2718,	// (0x00032cd7) list_form_pane_ParamLimits

0x6997,	// (0x00036f56) form_field_popup_wide_pane_g1

0x699f,	// (0x00036f5e) form_field_popup_wide_pane_t1_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_cp8_ParamLimits

0x2724,	// (0x00032ce3) list_form_wide_pane_ParamLimits

0xb38b,	// (0x0003b94a) aid_size_cell_graphic_pane

0x6a29,	// (0x00036fe8) data_form_pane_t1_ParamLimits

0x82bd,	// (0x0003887c) data_form_wide_pane_t1_ParamLimits

0x986b,	// (0x00039e2a) bg_status_flat_pane

0x5f14,	// (0x000364d3) title_pane_t1_ParamLimits

0x22f2,	// (0x000328b1) title_pane_t2_ParamLimits

0x2318,	// (0x000328d7) title_pane_t3_ParamLimits

0xf557,	// (0x0003fb16) title_pane_t_ParamLimits

0x2ab2,	// (0x00033071) level_1_signal_ParamLimits

0x2abf,	// (0x0003307e) level_2_signal_ParamLimits

0x2acc,	// (0x0003308b) level_3_signal_ParamLimits

0x2ad9,	// (0x00033098) level_4_signal_ParamLimits

0x2ae6,	// (0x000330a5) level_5_signal_ParamLimits

0x2af3,	// (0x000330b2) level_6_signal_ParamLimits

0x2b00,	// (0x000330bf) level_7_signal_ParamLimits

0x2ab2,	// (0x00033071) level_1_battery_ParamLimits

0x2abf,	// (0x0003307e) level_2_battery_ParamLimits

0x2acc,	// (0x0003308b) level_3_battery_ParamLimits

0x2ad9,	// (0x00033098) level_4_battery_ParamLimits

0x2ae6,	// (0x000330a5) level_5_battery_ParamLimits

0x2af3,	// (0x000330b2) level_6_battery_ParamLimits

0x2b00,	// (0x000330bf) level_7_battery_ParamLimits

0xa4c0,	// (0x0003aa7f) bg_status_flat_pane_g1

0xa4c8,	// (0x0003aa87) bg_status_flat_pane_g2

0xa4d0,	// (0x0003aa8f) bg_status_flat_pane_g3

0xa4d8,	// (0x0003aa97) bg_status_flat_pane_g4

0xa4e0,	// (0x0003aa9f) bg_status_flat_pane_g5

0xa4e8,	// (0x0003aaa7) bg_status_flat_pane_g6

0xa4f0,	// (0x0003aaaf) bg_status_flat_pane_g7

0x5f84,	// (0x00036543) tabs_3_active_pane_t1_ParamLimits

0x5f84,	// (0x00036543) tabs_3_passive_pane_t1_ParamLimits

0x5f9e,	// (0x0003655d) tabs_4_active_pane_t1_ParamLimits

0x5f9e,	// (0x0003655d) tabs_4_1_passive_pane_t1_ParamLimits

0x6b37,	// (0x000370f6) tabs_2_active_pane_t1_ParamLimits

0x6b37,	// (0x000370f6) tabs_2_passive_pane_t1_ParamLimits

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp4_ParamLimits

0x6b49,	// (0x00037108) tabs_2_long_active_pane_t1_ParamLimits

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp4_ParamLimits

0x7f93,	// (0x00038552) list_single_midp_graphic_pane_t1_ParamLimits

0x2cc6,	// (0x00033285) bg_active_tab_pane_cp5_ParamLimits

0x6b68,	// (0x00037127) tabs_3_long_active_pane_t1_ParamLimits

0x6b5c,	// (0x0003711b) bg_passive_tab_pane_cp5_ParamLimits

0x7f93,	// (0x00038552) list_single_midp_graphic_pane_t1

0x986b,	// (0x00039e2a) bg_status_flat_pane_ParamLimits

0x9934,	// (0x00039ef3) indicator_pane_cp2_ParamLimits

0x9934,	// (0x00039ef3) indicator_pane_cp2

0x9a5f,	// (0x0003a01e) navi_pane_srt_ParamLimits

0x9a5f,	// (0x0003a01e) navi_pane_srt

0x9a83,	// (0x0003a042) popup_clock_digital_analogue_window_cp1

0x237c,	// (0x0003293b) indicator_pane_t1

0x7581,	// (0x00037b40) copy_highlight_pane

0x7581,	// (0x00037b40) cursor_graphics_pane

0x7581,	// (0x00037b40) graphic_within_text_pane

0x7581,	// (0x00037b40) link_highlight_pane

0xacbf,	// (0x0003b27e) popup_preview_text_window_t5_ParamLimits

0xacbf,	// (0x0003b27e) popup_preview_text_window_t5

0x76b3,	// (0x00037c72) cursor_digital_pane

0x76b3,	// (0x00037c72) cursor_primary_pane

0x76c4,	// (0x00037c83) cursor_primary_small_pane

0x76cc,	// (0x00037c8b) cursor_secondary_pane

0x76d4,	// (0x00037c93) cursor_title_pane

0x76b3,	// (0x00037c72) link_highlight_digital_pane

0x76bb,	// (0x00037c7a) link_highlight_primary_pane

0x76c4,	// (0x00037c83) link_highlight_primary_small_pane

0x76cc,	// (0x00037c8b) link_highlight_secondary_pane

0x76d4,	// (0x00037c93) link_highlight_title_pane

0x76b3,	// (0x00037c72) copy_highlight_digital_pane

0x76b3,	// (0x00037c72) copy_highlight_primary_pane

0x76c4,	// (0x00037c83) copy_highlight_primary_small_pane

0x76cc,	// (0x00037c8b) copy_highlight_secondary_pane

0x76d4,	// (0x00037c93) copy_highlight_title_pane

0x76cc,	// (0x00037c8b) graphic_text_digital_pane

0xa55e,	// (0x0003ab1d) graphic_text_primary_pane

0xa567,	// (0x0003ab26) graphic_text_primary_small_pane

0x76c4,	// (0x00037c83) graphic_text_secondary_pane

0x76b3,	// (0x00037c72) graphic_text_title_pane

0x76dc,	// (0x00037c9b) cursor_primary_pane_g1

0xa550,	// (0x0003ab0f) cursor_text_primary_t1

0xa538,	// (0x0003aaf7) cursor_primary_small_pane_g1

0xa542,	// (0x0003ab01) cursor_text_primary_small_t1

0xa520,	// (0x0003aadf) cursor_primary_small_pane_g1_copy1

0xa52a,	// (0x0003aae9) cursor_text_primary_small_t1_copy1

0xa508,	// (0x0003aac7) cursor_text_title_t1

0xa516,	// (0x0003aad5) cursor_title_pane_g1

0x76dc,	// (0x00037c9b) cursor_digital_pane_g1

0x76e6,	// (0x00037ca5) cursor_text_digital_t1

0x76f4,	// (0x00037cb3) link_highlight_primary_pane_g1

0xa4b1,	// (0x0003aa70) link_highlight_primary_pane_t1

0x76f4,	// (0x00037cb3) link_highlight_primary_small_pane_g1

0x76fc,	// (0x00037cbb) link_highlight_primary_small_pane_t1

0x76f4,	// (0x00037cb3) link_highlight_secondary_pane_g1

0x770b,	// (0x00037cca) link_highlight_secondary_pane_t1

0xa416,	// (0x0003a9d5) link_highlight_title_pane_g1

0xa42d,	// (0x0003a9ec) link_highlight_title_pane_t1

0xa416,	// (0x0003a9d5) link_highlight_digital_pane_g1

0xa41e,	// (0x0003a9dd) link_highlight_digital_pane_t1

0xa2d0,	// (0x0003a88f) copy_highlight_primary_pane_g1

0xa2f6,	// (0x0003a8b5) copy_highlight_primary_pane_t1

0xa2d0,	// (0x0003a88f) copy_highlight_primary_small_pane_g1

0xa2e7,	// (0x0003a8a6) copy_highlight_primary_small_pane_t1

0x771a,	// (0x00037cd9) copy_highlight_secondary_pane_g1

0x7722,	// (0x00037ce1) copy_highlight_secondary_pane_t1

0xa2d0,	// (0x0003a88f) copy_highlight_title_pane_g1

0xa2d8,	// (0x0003a897) copy_highlight_title_pane_t1

0xa2d0,	// (0x0003a88f) copy_highlight_digital_pane_g1

0xb559,	// (0x0003bb18) copy_highlight_digital_pane_t1

0xb4ad,	// (0x0003ba6c) graphic_text_primary_pane_g1

0xb53d,	// (0x0003bafc) graphic_text_primary_pane_t1

0xb54b,	// (0x0003bb0a) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0003ff7e) graphic_text_primary_pane_t

0xb519,	// (0x0003bad8) graphic_text_primary_small_pane_g1

0xb521,	// (0x0003bae0) graphic_text_primary_small_pane_t1

0xb52f,	// (0x0003baee) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0003ff79) graphic_text_primary_small_pane_t

0xb4f5,	// (0x0003bab4) graphic_text_secondary_pane_g1

0xb4fd,	// (0x0003babc) graphic_text_secondary_pane_t1

0xb50b,	// (0x0003baca) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0003ff74) graphic_text_secondary_pane_t

0xb4d1,	// (0x0003ba90) graphic_text_title_pane_g1

0xb4d9,	// (0x0003ba98) graphic_text_title_pane_t1

0xb4e7,	// (0x0003baa6) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0003ff6f) graphic_text_title_pane_t

0xb4ad,	// (0x0003ba6c) graphic_text_digital_pane_g1

0xb4b5,	// (0x0003ba74) graphic_text_digital_pane_t1

0xb4c3,	// (0x0003ba82) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0003ff6a) graphic_text_digital_pane_t

0x2338,	// (0x000328f7) navi_icon_pane_srt_ParamLimits

0x2338,	// (0x000328f7) navi_icon_pane_srt

0x22dc,	// (0x0003289b) navi_midp_pane_srt

0x22dc,	// (0x0003289b) navi_navi_pane_srt

0x2338,	// (0x000328f7) navi_text_pane_srt_ParamLimits

0x2338,	// (0x000328f7) navi_text_pane_srt

0xb478,	// (0x0003ba37) navi_navi_icon_text_pane_srt

0xb480,	// (0x0003ba3f) navi_navi_pane_srt_g1_ParamLimits

0xb480,	// (0x0003ba3f) navi_navi_pane_srt_g1

0xb492,	// (0x0003ba51) navi_navi_pane_srt_g2_ParamLimits

0xb492,	// (0x0003ba51) navi_navi_pane_srt_g2

0x0001,

0xf9a6,	// (0x0003ff65) navi_navi_pane_srt_g_ParamLimits

0xf9a6,	// (0x0003ff65) navi_navi_pane_srt_g

0xb4a4,	// (0x0003ba63) navi_navi_tabs_pane_srt

0xb478,	// (0x0003ba37) navi_navi_text_pane_srt

0xb478,	// (0x0003ba37) navi_navi_volume_pane_srt

0xb469,	// (0x0003ba28) navi_navi_text_pane_srt_t1

0x8460,	// (0x00038a1f) navi_navi_volume_pane_srt_g1

0x8468,	// (0x00038a27) volume_small_pane_srt_ParamLimits

0x8468,	// (0x00038a27) volume_small_pane_srt

0x7731,	// (0x00037cf0) volume_small_pane_srt_g1_ParamLimits

0x7731,	// (0x00037cf0) volume_small_pane_srt_g1

0x7741,	// (0x00037d00) volume_small_pane_srt_g2_ParamLimits

0x7741,	// (0x00037d00) volume_small_pane_srt_g2

0x7752,	// (0x00037d11) volume_small_pane_srt_g3_ParamLimits

0x7752,	// (0x00037d11) volume_small_pane_srt_g3

0x7763,	// (0x00037d22) volume_small_pane_srt_g4_ParamLimits

0x7763,	// (0x00037d22) volume_small_pane_srt_g4

0x7774,	// (0x00037d33) volume_small_pane_srt_g5_ParamLimits

0x7774,	// (0x00037d33) volume_small_pane_srt_g5

0x7785,	// (0x00037d44) volume_small_pane_srt_g6_ParamLimits

0x7785,	// (0x00037d44) volume_small_pane_srt_g6

0x7796,	// (0x00037d55) volume_small_pane_srt_g7_ParamLimits

0x7796,	// (0x00037d55) volume_small_pane_srt_g7

0x77a7,	// (0x00037d66) volume_small_pane_srt_g8_ParamLimits

0x77a7,	// (0x00037d66) volume_small_pane_srt_g8

0x77b8,	// (0x00037d77) volume_small_pane_srt_g9_ParamLimits

0x77b8,	// (0x00037d77) volume_small_pane_srt_g9

0x77c9,	// (0x00037d88) volume_small_pane_srt_g10_ParamLimits

0x77c9,	// (0x00037d88) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0003fd12) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0003fd12) volume_small_pane_srt_g

0x61eb,	// (0x000367aa) query_popup_data_pane_cp2

0xb44f,	// (0x0003ba0e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb44f,	// (0x0003ba0e) navi_navi_icon_text_pane_srt_t1

0xa55e,	// (0x0003ab1d) navi_tabs_2_long_pane_srt

0xa55e,	// (0x0003ab1d) navi_tabs_2_pane_srt

0xa55e,	// (0x0003ab1d) navi_tabs_3_long_pane_srt

0xa55e,	// (0x0003ab1d) navi_tabs_3_pane_srt

0xa55e,	// (0x0003ab1d) navi_tabs_4_pane_srt

0x8440,	// (0x000389ff) tabs_2_active_pane_srt_ParamLimits

0x8440,	// (0x000389ff) tabs_2_active_pane_srt

0x8450,	// (0x00038a0f) tabs_2_passive_pane_srt_ParamLimits

0x8450,	// (0x00038a0f) tabs_2_passive_pane_srt

0x977a,	// (0x00039d39) bg_passive_tab_pane_cp1_srt_ParamLimits

0x977a,	// (0x00039d39) bg_passive_tab_pane_cp1_srt

0xb41b,	// (0x0003b9da) bg_passive_tab_pane_g1_cp1_srt

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp1_srt

0xb424,	// (0x0003b9e3) bg_passive_tab_pane_g3_cp1_srt

0x2338,	// (0x000328f7) bg_active_tab_pane_cp1_srt_ParamLimits

0x2338,	// (0x000328f7) bg_active_tab_pane_cp1_srt

0xb42d,	// (0x0003b9ec) tabs_2_active_pane_srt_g1

0xb435,	// (0x0003b9f4) tabs_2_active_pane_srt_t1_ParamLimits

0xb435,	// (0x0003b9f4) tabs_2_active_pane_srt_t1

0xb41b,	// (0x0003b9da) bg_active_tab_pane_g1_cp1_srt

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp1_srt

0xb424,	// (0x0003b9e3) bg_active_tab_pane_g3_cp1_srt

0x840d,	// (0x000389cc) tabs_3_active_pane_srt_ParamLimits

0x840d,	// (0x000389cc) tabs_3_active_pane_srt

0x841e,	// (0x000389dd) tabs_3_passive_pane_cp_srt_ParamLimits

0x841e,	// (0x000389dd) tabs_3_passive_pane_cp_srt

0x842f,	// (0x000389ee) tabs_3_passive_pane_srt_ParamLimits

0x842f,	// (0x000389ee) tabs_3_passive_pane_srt

0x977a,	// (0x00039d39) bg_passive_tab_pane_cp2_srt_ParamLimits

0x977a,	// (0x00039d39) bg_passive_tab_pane_cp2_srt

0x9613,	// (0x00039bd2) bg_passive_tab_pane_g1_cp2_srt

0x7091,	// (0x00037650) bg_passive_tab_pane_g2_cp2_srt

0x77da,	// (0x00037d99) bg_passive_tab_pane_g3_cp2_srt

0x2338,	// (0x000328f7) bg_active_tab_pane_cp2_srt_ParamLimits

0x2338,	// (0x000328f7) bg_active_tab_pane_cp2_srt

0xb401,	// (0x0003b9c0) tabs_3_active_pane_srt_g1

0xb409,	// (0x0003b9c8) tabs_3_active_pane_srt_t1_ParamLimits

0xb409,	// (0x0003b9c8) tabs_3_active_pane_srt_t1

0x9613,	// (0x00039bd2) bg_active_tab_pane_g1_cp2_srt

0x7091,	// (0x00037650) bg_active_tab_pane_g2_cp2_srt

0x77da,	// (0x00037d99) bg_active_tab_pane_g3_cp2_srt

0x83c5,	// (0x00038984) tabs_4_active_pane_srt_ParamLimits

0x83c5,	// (0x00038984) tabs_4_active_pane_srt

0x83d7,	// (0x00038996) tabs_4_passive_pane_cp2_srt_ParamLimits

0x83d7,	// (0x00038996) tabs_4_passive_pane_cp2_srt

0x7941,	// (0x00037f00) aid_size_cell_toolbar

0x6b5c,	// (0x0003711b) main_idle_act_pane_ParamLimits

0x7aea,	// (0x000380a9) popup_large_graphic_colour_window_ParamLimits

0x7e55,	// (0x00038414) popup_toolbar_window_ParamLimits

0x7e55,	// (0x00038414) popup_toolbar_window

0x47a9,	// (0x00034d68) list_single_graphic_2heading_pane_ParamLimits

0x47a9,	// (0x00034d68) list_single_graphic_2heading_pane

0x299a,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane

0x29ac,	// (0x00032f6b) aid_size_cell_apps_grid_prt_pane

0x977a,	// (0x00039d39) bg_wml_button_pane_cp1_ParamLimits

0x977a,	// (0x00039d39) bg_wml_button_pane_cp1

0x9f4b,	// (0x0003a50a) form_midp_field_text_pane_t1_ParamLimits

0x9d15,	// (0x0003a2d4) input_focus_pane_cp050_ParamLimits

0x9f85,	// (0x0003a544) list_midp_form_text_pane_ParamLimits

0x9f28,	// (0x0003a4e7) input_focus_pane_cp051_ParamLimits

0x9f3c,	// (0x0003a4fb) list_midp_choice_pane_ParamLimits

0x9dcb,	// (0x0003a38a) list_single_2graphic_pane_cp3_ParamLimits

0x9dcb,	// (0x0003a38a) list_single_2graphic_pane_cp3

0x9df0,	// (0x0003a3af) list_single_midp_graphic_pane_ParamLimits

0x9df0,	// (0x0003a3af) list_single_midp_graphic_pane

0x5a79,	// (0x00036038) list_single_graphic_2heading_pane_g1_ParamLimits

0x5a79,	// (0x00036038) list_single_graphic_2heading_pane_g1

0x5a85,	// (0x00036044) list_single_graphic_2heading_pane_g4_ParamLimits

0x5a85,	// (0x00036044) list_single_graphic_2heading_pane_g4

0x5a91,	// (0x00036050) list_single_graphic_2heading_pane_g5_ParamLimits

0x5a91,	// (0x00036050) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0003fd65) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0003fd65) list_single_graphic_2heading_pane_g

0x5a9d,	// (0x0003605c) list_single_graphic_2heading_pane_t1_ParamLimits

0x5a9d,	// (0x0003605c) list_single_graphic_2heading_pane_t1

0x5ab1,	// (0x00036070) list_single_graphic_2heading_pane_t2_ParamLimits

0x5ab1,	// (0x00036070) list_single_graphic_2heading_pane_t2

0x5acb,	// (0x0003608a) list_single_graphic_2heading_pane_t3_ParamLimits

0x5acb,	// (0x0003608a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0003fd6c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0003fd6c) list_single_graphic_2heading_pane_t

0x9bdf,	// (0x0003a19e) bg_popup_sub_pane_cp2

0x9c09,	// (0x0003a1c8) grid_toobar_pane

0x7f02,	// (0x000384c1) cell_toolbar_pane_ParamLimits

0x7f02,	// (0x000384c1) cell_toolbar_pane

0x9c45,	// (0x0003a204) cell_toolbar_pane_g1_ParamLimits

0x9c45,	// (0x0003a204) cell_toolbar_pane_g1

0x9c59,	// (0x0003a218) cell_toolbar_pane_g2_ParamLimits

0x9c59,	// (0x0003a218) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0003fd7a) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0003fd7a) cell_toolbar_pane_g

0x9c7b,	// (0x0003a23a) grid_highlight_pane_cp2_ParamLimits

0x9c7b,	// (0x0003a23a) grid_highlight_pane_cp2

0x9c95,	// (0x0003a254) toolbar_button_pane

0x9ca1,	// (0x0003a260) toolbar_button_pane_g1

0x9ca9,	// (0x0003a268) toolbar_button_pane_g2

0x9cb1,	// (0x0003a270) toolbar_button_pane_g3

0x9cb9,	// (0x0003a278) toolbar_button_pane_g4

0x9cc1,	// (0x0003a280) toolbar_button_pane_g5

0x9cc9,	// (0x0003a288) toolbar_button_pane_g6

0x9cd1,	// (0x0003a290) toolbar_button_pane_g7

0x9cd9,	// (0x0003a298) toolbar_button_pane_g8

0x9ce1,	// (0x0003a2a0) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0003fd7f) toolbar_button_pane_g

0x7f3a,	// (0x000384f9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7f3a,	// (0x000384f9) list_single_2graphic_pane_g1_cp3

0x7f46,	// (0x00038505) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7f46,	// (0x00038505) list_single_2graphic_pane_g2_cp3

0x7f57,	// (0x00038516) list_single_2graphic_pane_g3_cp3

0x7f5f,	// (0x0003851e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7f5f,	// (0x0003851e) list_single_2graphic_pane_g4_cp3

0x7f6b,	// (0x0003852a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7f6b,	// (0x0003852a) list_single_2graphic_pane_t1_cp3

0x7f87,	// (0x00038546) list_single_midp_graphic_pane_g2_ParamLimits

0x7f87,	// (0x00038546) list_single_midp_graphic_pane_g2

0x7949,	// (0x00037f08) aid_zoom_text_primary

0x5a5d,	// (0x0003601c) aid_zoom_text_secondary

0x96c4,	// (0x00039c83) status_small_pane_g7_ParamLimits

0x96c4,	// (0x00039c83) status_small_pane_g7

0x96e7,	// (0x00039ca6) status_small_pane_t1_ParamLimits

0x5ef7,	// (0x000364b6) title_pane_g2

0x0003,

0xf54e,	// (0x0003fb0d) title_pane_g

0x6245,	// (0x00036804) aid_size_cell_colour_1_pane_ParamLimits

0x6245,	// (0x00036804) aid_size_cell_colour_1_pane

0x6259,	// (0x00036818) aid_size_cell_colour_2_pane_ParamLimits

0x6259,	// (0x00036818) aid_size_cell_colour_2_pane

0x626d,	// (0x0003682c) aid_size_cell_colour_3_pane_ParamLimits

0x626d,	// (0x0003682c) aid_size_cell_colour_3_pane

0x6281,	// (0x00036840) aid_size_cell_colour_4_pane_ParamLimits

0x6281,	// (0x00036840) aid_size_cell_colour_4_pane

0x6bcf,	// (0x0003718e) title_pane_stacon_g1_ParamLimits

0x6bcf,	// (0x0003718e) title_pane_stacon_g1

0xa34d,	// (0x0003a90c) popup_note_wait_window_g3_ParamLimits

0xa34d,	// (0x0003a90c) popup_note_wait_window_g3

0xa3c3,	// (0x0003a982) popup_note_wait_window_t5_ParamLimits

0xa3c3,	// (0x0003a982) popup_note_wait_window_t5

0x22dc,	// (0x0003289b) main_feb_china_hwr_fs_writing_pane

0x79d1,	// (0x00037f90) popup_feb_china_hwr_fs_window_ParamLimits

0x79d1,	// (0x00037f90) popup_feb_china_hwr_fs_window

0x7fa9,	// (0x00038568) aid_size_cell_hwr_fs_ParamLimits

0x7fa9,	// (0x00038568) aid_size_cell_hwr_fs

0x9d15,	// (0x0003a2d4) bg_popup_sub_pane_cp3_ParamLimits

0x9d15,	// (0x0003a2d4) bg_popup_sub_pane_cp3

0x7fbe,	// (0x0003857d) grid_hwr_fs_pane_ParamLimits

0x7fbe,	// (0x0003857d) grid_hwr_fs_pane

0x7fd6,	// (0x00038595) linegrid_hwr_fs_pane_ParamLimits

0x7fd6,	// (0x00038595) linegrid_hwr_fs_pane

0x7fe6,	// (0x000385a5) cell_hwr_fs_pane_ParamLimits

0x7fe6,	// (0x000385a5) cell_hwr_fs_pane

0x9d21,	// (0x0003a2e0) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d21,	// (0x0003a2e0) linegrid_hwr_fs_pane_g1

0x9d2d,	// (0x0003a2ec) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d2d,	// (0x0003a2ec) linegrid_hwr_fs_pane_g2

0x9d3f,	// (0x0003a2fe) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d3f,	// (0x0003a2fe) linegrid_hwr_fs_pane_g3

0x8008,	// (0x000385c7) linegrid_hwr_fs_pane_g4_ParamLimits

0x8008,	// (0x000385c7) linegrid_hwr_fs_pane_g4

0x8022,	// (0x000385e1) linegrid_hwr_fs_pane_g5_ParamLimits

0x8022,	// (0x000385e1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e6,	// (0x0003fda5) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e6,	// (0x0003fda5) linegrid_hwr_fs_pane_g

0x9d4b,	// (0x0003a30a) cell_hwr_fs_pane_g1_ParamLimits

0x9d4b,	// (0x0003a30a) cell_hwr_fs_pane_g1

0x9b19,	// (0x0003a0d8) cell_hwr_fs_pane_g2_ParamLimits

0x9b19,	// (0x0003a0d8) cell_hwr_fs_pane_g2

0x9d61,	// (0x0003a320) cell_hwr_fs_pane_g3_ParamLimits

0x9d61,	// (0x0003a320) cell_hwr_fs_pane_g3

0x9d6e,	// (0x0003a32d) cell_hwr_fs_pane_g4_ParamLimits

0x9d6e,	// (0x0003a32d) cell_hwr_fs_pane_g4

0x0003,

0xf7f1,	// (0x0003fdb0) cell_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0003fdb0) cell_hwr_fs_pane_g

0x8038,	// (0x000385f7) cell_hwr_fs_pane_t1

0x22dc,	// (0x0003289b) grid_highlight_pane_cp6

0x22dc,	// (0x0003289b) main_idle_act2_pane

0x27f0,	// (0x00032daf) aid_inside_area_popup_secondary

0xa9e2,	// (0x0003afa1) aid_inside_area_window_primary_ParamLimits

0xa9e2,	// (0x0003afa1) aid_inside_area_window_primary

0xb568,	// (0x0003bb27) ai2_news_ticker_pane

0xb570,	// (0x0003bb2f) aid_size_cell_ai1_link_ParamLimits

0xb570,	// (0x0003bb2f) aid_size_cell_ai1_link

0xb58a,	// (0x0003bb49) popup_ai2_data_window_ParamLimits

0xb58a,	// (0x0003bb49) popup_ai2_data_window

0xb5a0,	// (0x0003bb5f) popup_ai2_link_window_ParamLimits

0xb5a0,	// (0x0003bb5f) popup_ai2_link_window

0x9d15,	// (0x0003a2d4) bg_popup_sub_pane_cp4_ParamLimits

0x9d15,	// (0x0003a2d4) bg_popup_sub_pane_cp4

0xb5b4,	// (0x0003bb73) grid_ai2_link_pane_ParamLimits

0xb5b4,	// (0x0003bb73) grid_ai2_link_pane

0xb5cb,	// (0x0003bb8a) popup_ai2_link_window_g1_ParamLimits

0xb5cb,	// (0x0003bb8a) popup_ai2_link_window_g1

0xb5d7,	// (0x0003bb96) popup_ai2_link_window_g2_ParamLimits

0xb5d7,	// (0x0003bb96) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0003ff83) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0003ff83) popup_ai2_link_window_g

0xb5e6,	// (0x0003bba5) ai2_mp_button_pane

0xb5ee,	// (0x0003bbad) ai2_mp_volume_pane

0x9f28,	// (0x0003a4e7) bg_popup_sub_pane_cp5_ParamLimits

0x9f28,	// (0x0003a4e7) bg_popup_sub_pane_cp5

0xb5f6,	// (0x0003bbb5) heading_ai2_gene_pane_ParamLimits

0xb5f6,	// (0x0003bbb5) heading_ai2_gene_pane

0xb602,	// (0x0003bbc1) list_ai2_gene_pane_ParamLimits

0xb602,	// (0x0003bbc1) list_ai2_gene_pane

0xb64a,	// (0x0003bc09) cell_ai2_link_pane_ParamLimits

0xb64a,	// (0x0003bc09) cell_ai2_link_pane

0xb660,	// (0x0003bc1f) cell_ai2_link_pane_g1

0x22dc,	// (0x0003289b) grid_highlight_pane_cp7

0x847d,	// (0x00038a3c) ai2_mp_volume_pane_g1

0xb730,	// (0x0003bcef) ai2_mp_volume_pane_g2

0xb6a5,	// (0x0003bc64) list_ai2_gene_pane_t1

0xb738,	// (0x0003bcf7) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0003ff9c) ai2_mp_volume_pane_g

0x8485,	// (0x00038a44) volume_small_pane_cp3

0xb740,	// (0x0003bcff) aid_size_cell_ai2_button

0xb748,	// (0x0003bd07) grid_ai2_button_pane

0xb751,	// (0x0003bd10) cell_ai2_button_pane_ParamLimits

0xb751,	// (0x0003bd10) cell_ai2_button_pane

0x22d2,	// (0x00032891) cell_ai2_button_pane_g1

0x22dc,	// (0x0003289b) grid_highlight_pane_cp8

0xb6f0,	// (0x0003bcaf) ai2_gene_pane_t1_ParamLimits

0xb6f0,	// (0x0003bcaf) ai2_gene_pane_t1

0x7937,	// (0x00037ef6) aid_height_parent_landscape

0xb04b,	// (0x0003b60a) aid_height_set_list

0xb05c,	// (0x0003b61b) aid_size_parent

0xb38b,	// (0x0003b94a) aid_size_cell_graphic_pane_ParamLimits

0xb612,	// (0x0003bbd1) popup_ai2_data_window_g1_ParamLimits

0xb612,	// (0x0003bbd1) popup_ai2_data_window_g1

0xb61e,	// (0x0003bbdd) ai2_news_ticker_pane_g1

0xb626,	// (0x0003bbe5) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0003ff88) ai2_news_ticker_pane_g

0xb62e,	// (0x0003bbed) ai2_news_ticker_pane_t1

0xb63c,	// (0x0003bbfb) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0003ff8d) ai2_news_ticker_pane_t

0xb669,	// (0x0003bc28) heading_ai2_gene_pane_g1

0xb671,	// (0x0003bc30) heading_ai2_gene_pane_t1_ParamLimits

0xb671,	// (0x0003bc30) heading_ai2_gene_pane_t1

0xb686,	// (0x0003bc45) list_highlight_pane_cp6

0xb68e,	// (0x0003bc4d) ai2_gene_pane_ParamLimits

0xb68e,	// (0x0003bc4d) ai2_gene_pane

0xb6b3,	// (0x0003bc72) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0003ff92) list_ai2_gene_pane_t

0xb6c1,	// (0x0003bc80) list_highlight_pane_cp8_ParamLimits

0xb6c1,	// (0x0003bc80) list_highlight_pane_cp8

0xb6d2,	// (0x0003bc91) ai2_gene_pane_g1_ParamLimits

0xb6d2,	// (0x0003bc91) ai2_gene_pane_g1

0xb6e4,	// (0x0003bca3) ai2_gene_pane_g2_ParamLimits

0xb6e4,	// (0x0003bca3) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0003ff97) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0003ff97) ai2_gene_pane_g

0x2689,	// (0x00032c48) scroll_pane_cp12

0x78f4,	// (0x00037eb3) control_pane_t3_ParamLimits

0x78f4,	// (0x00037eb3) control_pane_t3

0x96d8,	// (0x00039c97) status_small_pane_g8_ParamLimits

0x96d8,	// (0x00039c97) status_small_pane_g8

0x7ab3,	// (0x00038072) popup_find_window_ParamLimits

0x7ccc,	// (0x0003828b) popup_note_image_window_ParamLimits

0x4557,	// (0x00034b16) list_double2_graphic_pane_vc_g1_ParamLimits

0x4557,	// (0x00034b16) list_double2_graphic_pane_vc_g1

0x4563,	// (0x00034b22) list_double2_graphic_pane_vc_g2_ParamLimits

0x4563,	// (0x00034b22) list_double2_graphic_pane_vc_g2

0x456f,	// (0x00034b2e) list_double2_graphic_pane_vc_g3_ParamLimits

0x456f,	// (0x00034b2e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0003fd73) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0003fd73) list_double2_graphic_pane_vc_g

0x457b,	// (0x00034b3a) list_double2_graphic_pane_vc_t1_ParamLimits

0x457b,	// (0x00034b3a) list_double2_graphic_pane_vc_t1

0x4563,	// (0x00034b22) list_single_heading_pane_vc_g1_ParamLimits

0x4563,	// (0x00034b22) list_single_heading_pane_vc_g1

0x456f,	// (0x00034b2e) list_single_heading_pane_vc_g2_ParamLimits

0x456f,	// (0x00034b2e) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_single_heading_pane_vc_g

0x46ee,	// (0x00034cad) list_single_heading_pane_vc_t1_ParamLimits

0x46ee,	// (0x00034cad) list_single_heading_pane_vc_t1

0x4704,	// (0x00034cc3) list_single_heading_pane_vc_t2_ParamLimits

0x4704,	// (0x00034cc3) list_single_heading_pane_vc_t2

0x0001,

0xf7d5,	// (0x0003fd94) list_single_heading_pane_vc_t_ParamLimits

0xf7d5,	// (0x0003fd94) list_single_heading_pane_vc_t

0x4716,	// (0x00034cd5) list_setting_number_pane_vc_g1_ParamLimits

0x4716,	// (0x00034cd5) list_setting_number_pane_vc_g1

0x4722,	// (0x00034ce1) list_setting_number_pane_vc_g2_ParamLimits

0x4722,	// (0x00034ce1) list_setting_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fd99) list_setting_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fd99) list_setting_number_pane_vc_g

0x472e,	// (0x00034ced) list_setting_number_pane_vc_t1_ParamLimits

0x472e,	// (0x00034ced) list_setting_number_pane_vc_t1

0x4742,	// (0x00034d01) list_setting_number_pane_vc_t2_ParamLimits

0x4742,	// (0x00034d01) list_setting_number_pane_vc_t2

0x475e,	// (0x00034d1d) list_setting_number_pane_vc_t3_ParamLimits

0x475e,	// (0x00034d1d) list_setting_number_pane_vc_t3

0x0002,

0xf7df,	// (0x0003fd9e) list_setting_number_pane_vc_t_ParamLimits

0xf7df,	// (0x0003fd9e) list_setting_number_pane_vc_t

0x478a,	// (0x00034d49) set_value_pane_vc_ParamLimits

0x478a,	// (0x00034d49) set_value_pane_vc

0x47a9,	// (0x00034d68) list_double2_graphic_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double2_graphic_pane_vc

0xb22c,	// (0x0003b7eb) list_double2_large_graphic_pane_vc_ParamLimits

0xb22c,	// (0x0003b7eb) list_double2_large_graphic_pane_vc

0x47a9,	// (0x00034d68) list_double2_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double2_pane_vc

0x47a9,	// (0x00034d68) list_double_graphic_heading_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double_graphic_heading_pane_vc

0x47a9,	// (0x00034d68) list_double_graphic_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double_graphic_pane_vc

0x47a9,	// (0x00034d68) list_double_heading_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double_heading_pane_vc

0xb23e,	// (0x0003b7fd) list_double_large_graphic_pane_vc_ParamLimits

0xb23e,	// (0x0003b7fd) list_double_large_graphic_pane_vc

0x47a9,	// (0x00034d68) list_double_number_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double_number_pane_vc

0x47a9,	// (0x00034d68) list_double_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double_pane_vc

0x47a9,	// (0x00034d68) list_double_time_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_double_time_pane_vc

0x47a9,	// (0x00034d68) list_setting_number_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_setting_number_pane_vc

0x47a9,	// (0x00034d68) list_setting_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_setting_pane_vc

0x47a9,	// (0x00034d68) list_single_graphic_heading_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_single_graphic_heading_pane_vc

0x47a9,	// (0x00034d68) list_single_heading_pane_vc_ParamLimits

0x47a9,	// (0x00034d68) list_single_heading_pane_vc

0x831e,	// (0x000388dd) list_single_number_heading_pane_vc_ParamLimits

0x831e,	// (0x000388dd) list_single_number_heading_pane_vc

0x45dd,	// (0x00034b9c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x45dd,	// (0x00034b9c) list_double_graphic_heading_pane_vc_g1

0x4563,	// (0x00034b22) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4563,	// (0x00034b22) list_double_graphic_heading_pane_vc_g2

0x456f,	// (0x00034b2e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x456f,	// (0x00034b2e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0003ffa3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0003ffa3) list_double_graphic_heading_pane_vc_g

0x47bc,	// (0x00034d7b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x47bc,	// (0x00034d7b) list_double_graphic_heading_pane_vc_t1

0x47d0,	// (0x00034d8f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x47d0,	// (0x00034d8f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0003ffaa) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0003ffaa) list_double_graphic_heading_pane_vc_t

0x4716,	// (0x00034cd5) list_setting_pane_vc_g1_ParamLimits

0x4716,	// (0x00034cd5) list_setting_pane_vc_g1

0x4722,	// (0x00034ce1) list_setting_pane_vc_g2_ParamLimits

0x4722,	// (0x00034ce1) list_setting_pane_vc_g2

0x0001,

0xf7da,	// (0x0003fd99) list_setting_pane_vc_g_ParamLimits

0xf7da,	// (0x0003fd99) list_setting_pane_vc_g

0x47e8,	// (0x00034da7) list_setting_pane_vc_t1_ParamLimits

0x47e8,	// (0x00034da7) list_setting_pane_vc_t1

0x4804,	// (0x00034dc3) list_setting_pane_vc_t2_ParamLimits

0x4804,	// (0x00034dc3) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003ffed) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003ffed) list_setting_pane_vc_t

0x478a,	// (0x00034d49) set_value_pane_cp_vc_ParamLimits

0x478a,	// (0x00034d49) set_value_pane_cp_vc

0x4563,	// (0x00034b22) list_single_number_heading_pane_vc_g1_ParamLimits

0x4563,	// (0x00034b22) list_single_number_heading_pane_vc_g1

0x456f,	// (0x00034b2e) list_single_number_heading_pane_vc_g2_ParamLimits

0x456f,	// (0x00034b2e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_single_number_heading_pane_vc_g

0x481e,	// (0x00034ddd) list_single_number_heading_pane_vc_t1_ParamLimits

0x481e,	// (0x00034ddd) list_single_number_heading_pane_vc_t1

0x4834,	// (0x00034df3) list_single_number_heading_pane_vc_t2_ParamLimits

0x4834,	// (0x00034df3) list_single_number_heading_pane_vc_t2

0x4846,	// (0x00034e05) list_single_number_heading_pane_vc_t3_ParamLimits

0x4846,	// (0x00034e05) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0003fff2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003fff2) list_single_number_heading_pane_vc_t

0x4858,	// (0x00034e17) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4858,	// (0x00034e17) list_single_graphic_heading_pane_vc_g1

0x4563,	// (0x00034b22) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4563,	// (0x00034b22) list_single_graphic_heading_pane_vc_g4

0x456f,	// (0x00034b2e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x456f,	// (0x00034b2e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa3a,	// (0x0003fff9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003fff9) list_single_graphic_heading_pane_vc_g

0x4864,	// (0x00034e23) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4864,	// (0x00034e23) list_single_graphic_heading_pane_vc_t1

0x487a,	// (0x00034e39) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x487a,	// (0x00034e39) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x00040000) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x00040000) list_single_graphic_heading_pane_vc_t

0x4563,	// (0x00034b22) list_double2_pane_vc_g1_ParamLimits

0x4563,	// (0x00034b22) list_double2_pane_vc_g1

0x456f,	// (0x00034b2e) list_double2_pane_vc_g2_ParamLimits

0x456f,	// (0x00034b2e) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_double2_pane_vc_g

0x488c,	// (0x00034e4b) list_double2_pane_vc_t1_ParamLimits

0x488c,	// (0x00034e4b) list_double2_pane_vc_t1

0x45e9,	// (0x00034ba8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x45e9,	// (0x00034ba8) list_double2_large_graphic_pane_vc_g1

0x45f5,	// (0x00034bb4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x45f5,	// (0x00034bb4) list_double2_large_graphic_pane_vc_g2

0x4601,	// (0x00034bc0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4601,	// (0x00034bc0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa46,	// (0x00040005) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x00040005) list_double2_large_graphic_pane_vc_g

0x460d,	// (0x00034bcc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x460d,	// (0x00034bcc) list_double2_large_graphic_pane_vc_t1

0x48a4,	// (0x00034e63) list_double_time_pane_vc_g1_ParamLimits

0x48a4,	// (0x00034e63) list_double_time_pane_vc_g1

0x48b0,	// (0x00034e6f) list_double_time_pane_vc_g2_ParamLimits

0x48b0,	// (0x00034e6f) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0004000c) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0004000c) list_double_time_pane_vc_g

0x48bc,	// (0x00034e7b) list_double_time_pane_vc_t1_ParamLimits

0x48bc,	// (0x00034e7b) list_double_time_pane_vc_t1

0x48e0,	// (0x00034e9f) list_double_time_pane_vc_t2_ParamLimits

0x48e0,	// (0x00034e9f) list_double_time_pane_vc_t2

0x492f,	// (0x00034eee) list_double_time_pane_vc_t3_ParamLimits

0x492f,	// (0x00034eee) list_double_time_pane_vc_t3

0x4941,	// (0x00034f00) list_double_time_pane_vc_t4_ParamLimits

0x4941,	// (0x00034f00) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x00040011) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x00040011) list_double_time_pane_vc_t

0x4563,	// (0x00034b22) list_double_pane_vc_g1_ParamLimits

0x4563,	// (0x00034b22) list_double_pane_vc_g1

0x456f,	// (0x00034b2e) list_double_pane_vc_g2_ParamLimits

0x456f,	// (0x00034b2e) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_double_pane_vc_g

0x4955,	// (0x00034f14) list_double_pane_vc_t1_ParamLimits

0x4955,	// (0x00034f14) list_double_pane_vc_t1

0x4969,	// (0x00034f28) list_double_pane_vc_t2_ParamLimits

0x4969,	// (0x00034f28) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0004001a) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004001a) list_double_pane_vc_t

0x4563,	// (0x00034b22) list_double_number_pane_vc_g1_ParamLimits

0x4563,	// (0x00034b22) list_double_number_pane_vc_g1

0x456f,	// (0x00034b2e) list_double_number_pane_vc_g2_ParamLimits

0x456f,	// (0x00034b2e) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_double_number_pane_vc_g

0x4981,	// (0x00034f40) list_double_number_pane_vc_t1_ParamLimits

0x4981,	// (0x00034f40) list_double_number_pane_vc_t1

0x4955,	// (0x00034f14) list_double_number_pane_vc_t2_ParamLimits

0x4955,	// (0x00034f14) list_double_number_pane_vc_t2

0x4993,	// (0x00034f52) list_double_number_pane_vc_t3_ParamLimits

0x4993,	// (0x00034f52) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0004001f) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0004001f) list_double_number_pane_vc_t

0x49ab,	// (0x00034f6a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x49ab,	// (0x00034f6a) list_double_large_graphic_pane_vc_g1

0x49cd,	// (0x00034f8c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x49cd,	// (0x00034f8c) list_double_large_graphic_pane_vc_g2

0x49e1,	// (0x00034fa0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x49e1,	// (0x00034fa0) list_double_large_graphic_pane_vc_g3

0x49f0,	// (0x00034faf) list_double_large_graphic_pane_vc_g4_ParamLimits

0x49f0,	// (0x00034faf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x00040026) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00040026) list_double_large_graphic_pane_vc_g

0x49fc,	// (0x00034fbb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x49fc,	// (0x00034fbb) list_double_large_graphic_pane_vc_t1

0x4a18,	// (0x00034fd7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4a18,	// (0x00034fd7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0004002f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0004002f) list_double_large_graphic_pane_vc_t

0x4563,	// (0x00034b22) list_double_heading_pane_vc_g1_ParamLimits

0x4563,	// (0x00034b22) list_double_heading_pane_vc_g1

0x456f,	// (0x00034b2e) list_double_heading_pane_vc_g2_ParamLimits

0x456f,	// (0x00034b2e) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003fb87) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003fb87) list_double_heading_pane_vc_g

0x4a3a,	// (0x00034ff9) list_double_heading_pane_vc_t1_ParamLimits

0x4a3a,	// (0x00034ff9) list_double_heading_pane_vc_t1

0x4a4e,	// (0x0003500d) list_double_heading_pane_vc_t2_ParamLimits

0x4a4e,	// (0x0003500d) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x00040034) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x00040034) list_double_heading_pane_vc_t

0x4a66,	// (0x00035025) list_double_graphic_pane_vc_g1_ParamLimits

0x4a66,	// (0x00035025) list_double_graphic_pane_vc_g1

0x4a7e,	// (0x0003503d) list_double_graphic_pane_vc_g2_ParamLimits

0x4a7e,	// (0x0003503d) list_double_graphic_pane_vc_g2

0x4563,	// (0x00034b22) list_double_graphic_pane_vc_g3_ParamLimits

0x4563,	// (0x00034b22) list_double_graphic_pane_vc_g3

0x0003,

0xfa7a,	// (0x00040039) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x00040039) list_double_graphic_pane_vc_g

0x4a9b,	// (0x0003505a) list_double_graphic_pane_vc_t1_ParamLimits

0x4a9b,	// (0x0003505a) list_double_graphic_pane_vc_t1

0x4aba,	// (0x00035079) list_double_graphic_pane_vc_t2_ParamLimits

0x4aba,	// (0x00035079) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00040042) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00040042) list_double_graphic_pane_vc_t

0x5b17,	// (0x000360d6) aid_size_cell_fastswap

0x5b1f,	// (0x000360de) aid_size_cell_touch_ParamLimits

0x5b1f,	// (0x000360de) aid_size_cell_touch

0x5d84,	// (0x00036343) popup_fast_swap_wide_window_ParamLimits

0x5d84,	// (0x00036343) popup_fast_swap_wide_window

0x5e8a,	// (0x00036449) touch_pane_ParamLimits

0x5e8a,	// (0x00036449) touch_pane

0x26d6,	// (0x00032c95) button_value_adjust_pane_cp2

0x4644,	// (0x00034c03) button_value_adjust_pane_cp4

0x464c,	// (0x00034c0b) form_field_data_pane_cp2

0x68c6,	// (0x00036e85) form_field_data_wide_pane_cp2

0x29d1,	// (0x00032f90) bg_scroll_pane_ParamLimits

0x6dc9,	// (0x00037388) scroll_handle_pane_ParamLimits

0x6ddd,	// (0x0003739c) scroll_sc2_down_pane_ParamLimits

0x6ddd,	// (0x0003739c) scroll_sc2_down_pane

0x2a02,	// (0x00032fc1) scroll_sc2_up_pane_ParamLimits

0x2a02,	// (0x00032fc1) scroll_sc2_up_pane

0xbe07,	// (0x0003c3c6) grid_wheel_folder_pane_g1_ParamLimits

0xbe07,	// (0x0003c3c6) grid_wheel_folder_pane_g1

0x71d8,	// (0x00037797) clock_nsta_pane_cp2_ParamLimits

0x71d8,	// (0x00037797) clock_nsta_pane_cp2

0x7589,	// (0x00037b48) listscroll_midp_pane_ParamLimits

0x7595,	// (0x00037b54) midp_canvas_pane

0x9752,	// (0x00039d11) nsta_clock_indic_pane

0x9786,	// (0x00039d45) listscroll_form_pane_vc

0x978e,	// (0x00039d4d) listscroll_set_pane_vc_ParamLimits

0x978e,	// (0x00039d4d) listscroll_set_pane_vc

0x9887,	// (0x00039e46) clock_nsta_pane

0x9902,	// (0x00039ec1) indicator_nsta_pane

0x9bdf,	// (0x0003a19e) bg_popup_sub_pane_cp2_ParamLimits

0x9bf3,	// (0x0003a1b2) find_pane_cp2_ParamLimits

0x9bf3,	// (0x0003a1b2) find_pane_cp2

0x9c09,	// (0x0003a1c8) grid_toobar_pane_ParamLimits

0x9ce9,	// (0x0003a2a8) list_form_gen_pane_vc_ParamLimits

0x9ce9,	// (0x0003a2a8) list_form_gen_pane_vc

0x9cff,	// (0x0003a2be) scroll_pane_cp8_vc_ParamLimits

0x9cff,	// (0x0003a2be) scroll_pane_cp8_vc

0x9d7b,	// (0x0003a33a) data_form_wide_pane_vc_ParamLimits

0x9d7b,	// (0x0003a33a) data_form_wide_pane_vc

0x9d87,	// (0x0003a346) form_field_data_wide_pane_vc_g1

0x9d8f,	// (0x0003a34e) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d8f,	// (0x0003a34e) form_field_data_wide_pane_vc_t1

0x26ea,	// (0x00032ca9) input_focus_pane_cp6_vc_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_cp6_vc

0xa0bc,	// (0x0003a67b) list_midp_pane_ParamLimits

0xa0c8,	// (0x0003a687) scroll_pane_cp16_ParamLimits

0xa0c8,	// (0x0003a687) scroll_pane_cp16

0xa12a,	// (0x0003a6e9) button_value_adjust_pane_ParamLimits

0xa12a,	// (0x0003a6e9) button_value_adjust_pane

0xb06e,	// (0x0003b62d) button_value_adjust_pane_cp6_ParamLimits

0xb06e,	// (0x0003b62d) button_value_adjust_pane_cp6

0xb194,	// (0x0003b753) settings_code_pane_cp_ParamLimits

0xb194,	// (0x0003b753) settings_code_pane_cp

0x22d2,	// (0x00032891) cell_touch_pane_g1

0x22d2,	// (0x00032891) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0003fcb8) cell_touch_pane_g

0xb763,	// (0x0003bd22) cell_touch_pane_cp_ParamLimits

0xb763,	// (0x0003bd22) cell_touch_pane_cp

0xb773,	// (0x0003bd32) cell_touch_pane_ParamLimits

0xb773,	// (0x0003bd32) cell_touch_pane

0x22d2,	// (0x00032891) scroll_sc2_down_pane_g1

0x22d2,	// (0x00032891) scroll_sc2_up_pane_g1

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp4_vc

0xb785,	// (0x0003bd44) list_set_graphic_pane_vc_g1_ParamLimits

0xb785,	// (0x0003bd44) list_set_graphic_pane_vc_g1

0xb791,	// (0x0003bd50) list_set_graphic_pane_vc_g2_ParamLimits

0xb791,	// (0x0003bd50) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0003ffaf) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0003ffaf) list_set_graphic_pane_vc_g

0xb79d,	// (0x0003bd5c) text_primary_small_cp13_vc_ParamLimits

0xb79d,	// (0x0003bd5c) text_primary_small_cp13_vc

0xb7b5,	// (0x0003bd74) list_set_graphic_pane_vc_ParamLimits

0xb7b5,	// (0x0003bd74) list_set_graphic_pane_vc

0x22dc,	// (0x0003289b) input_focus_pane_cp2_vc

0x22d2,	// (0x00032891) setting_code_pane_vc_g1

0x234f,	// (0x0003290e) setting_code_pane_vc_t1

0xb7c8,	// (0x0003bd87) set_text_pane_vc_t1_ParamLimits

0xb7c8,	// (0x0003bd87) set_text_pane_vc_t1

0x22dc,	// (0x0003289b) input_focus_pane_cp1_vc

0xb7e4,	// (0x0003bda3) list_set_text_pane_vc

0x22d2,	// (0x00032891) setting_text_pane_vc_g1

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp2_vc

0x2346,	// (0x00032905) setting_slider_graphic_pane_vc_g1

0xb7ee,	// (0x0003bdad) setting_slider_graphic_pane_vc_t1

0xb7fe,	// (0x0003bdbd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0003ffb4) setting_slider_graphic_pane_vc_t

0xb80e,	// (0x0003bdcd) slider_set_pane_cp_vc

0xb816,	// (0x0003bdd5) slider_set_pane_vc_g1

0xb81f,	// (0x0003bdde) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0003ffb9) slider_set_pane_vc_g

0x2742,	// (0x00032d01) set_opt_bg_pane_g1_copy1

0x274a,	// (0x00032d09) set_opt_bg_pane_g2_copy1

0xb84b,	// (0x0003be0a) set_opt_bg_pane_g3_copy1

0x275a,	// (0x00032d19) set_opt_bg_pane_g4_copy1

0x2762,	// (0x00032d21) set_opt_bg_pane_g5_copy1

0x276a,	// (0x00032d29) set_opt_bg_pane_g6_copy1

0xb853,	// (0x0003be12) set_opt_bg_pane_g7_copy1

0xb85b,	// (0x0003be1a) set_opt_bg_pane_g8_copy1

0xb863,	// (0x0003be22) set_opt_bg_pane_g9_copy1

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp_vc

0xb86b,	// (0x0003be2a) setting_slider_pane_vc_t1

0xb87a,	// (0x0003be39) setting_slider_pane_vc_t2

0xb88a,	// (0x0003be49) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0003ffc8) setting_slider_pane_vc_t

0xb89a,	// (0x0003be59) slider_set_pane_vc

0x8079,	// (0x00038638) volume_set_pane_vc_g1

0x848e,	// (0x00038a4d) volume_set_pane_vc_g2

0x8497,	// (0x00038a56) volume_set_pane_vc_g3

0x84a0,	// (0x00038a5f) volume_set_pane_vc_g4

0x84a9,	// (0x00038a68) volume_set_pane_vc_g5

0x84b2,	// (0x00038a71) volume_set_pane_vc_g6

0x84bb,	// (0x00038a7a) volume_set_pane_vc_g7

0x84c4,	// (0x00038a83) volume_set_pane_vc_g8

0x84cd,	// (0x00038a8c) volume_set_pane_vc_g9

0x84d6,	// (0x00038a95) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0003ffcf) volume_set_pane_vc_g

0xb8a2,	// (0x0003be61) volume_set_pane_vc

0xb8aa,	// (0x0003be69) button_value_adjust_pane_cp1_vc

0xb8b4,	// (0x0003be73) list_highlight_pane_cp2_vc

0xb8bd,	// (0x0003be7c) list_set_pane_vc_ParamLimits

0xb8bd,	// (0x0003be7c) list_set_pane_vc

0xb91b,	// (0x0003beda) main_pane_set_vc_t1_ParamLimits

0xb91b,	// (0x0003beda) main_pane_set_vc_t1

0xb930,	// (0x0003beef) main_pane_set_vc_t2_ParamLimits

0xb930,	// (0x0003beef) main_pane_set_vc_t2

0xb942,	// (0x0003bf01) main_pane_set_vc_t3_ParamLimits

0xb942,	// (0x0003bf01) main_pane_set_vc_t3

0xb954,	// (0x0003bf13) main_pane_set_vc_t4_ParamLimits

0xb954,	// (0x0003bf13) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0003ffe4) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0003ffe4) main_pane_set_vc_t

0xb966,	// (0x0003bf25) setting_code_pane_vc_ParamLimits

0xb966,	// (0x0003bf25) setting_code_pane_vc

0xb975,	// (0x0003bf34) setting_slider_graphic_pane_vc

0xb975,	// (0x0003bf34) setting_slider_pane_vc

0xb975,	// (0x0003bf34) setting_text_pane_vc

0xb975,	// (0x0003bf34) setting_volume_pane_vc

0xb97d,	// (0x0003bf3c) scroll_pane_cp121_vc

0x26c4,	// (0x00032c83) set_content_pane_vc

0xb985,	// (0x0003bf44) button_value_adjust_pane_g1

0xb98e,	// (0x0003bf4d) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00040047) button_value_adjust_pane_g

0xb997,	// (0x0003bf56) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb997,	// (0x0003bf56) form_field_slider_wide_pane_vc_t1

0xb9ab,	// (0x0003bf6a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9ab,	// (0x0003bf6a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0004004c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0004004c) form_field_slider_wide_pane_vc_t

0x232a,	// (0x000328e9) input_focus_pane_cp10_vc_ParamLimits

0x232a,	// (0x000328e9) input_focus_pane_cp10_vc

0xb9d9,	// (0x0003bf98) slider_cont_pane_cp1_vc_ParamLimits

0xb9d9,	// (0x0003bf98) slider_cont_pane_cp1_vc

0xb9eb,	// (0x0003bfaa) slider_form_pane_g1_cp2

0xb81f,	// (0x0003bdde) slider_form_pane_g2_cp2

0xba18,	// (0x0003bfd7) form_field_slider_pane_vc_t3

0xba26,	// (0x0003bfe5) form_field_slider_pane_vc_t4

0xba34,	// (0x0003bff3) slider_form_pane_vc_ParamLimits

0xba34,	// (0x0003bff3) slider_form_pane_vc

0xba41,	// (0x0003c000) form_field_slider_pane_vc_t1_ParamLimits

0xba41,	// (0x0003c000) form_field_slider_pane_vc_t1

0xb9ab,	// (0x0003bf6a) form_field_slider_pane_vc_t2_ParamLimits

0xb9ab,	// (0x0003bf6a) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0004005e) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0004005e) form_field_slider_pane_vc_t

0x232a,	// (0x000328e9) input_focus_pane_cp9_vc_ParamLimits

0x232a,	// (0x000328e9) input_focus_pane_cp9_vc

0xba5d,	// (0x0003c01c) slider_cont_pane_vc_ParamLimits

0xba5d,	// (0x0003c01c) slider_cont_pane_vc

0xba71,	// (0x0003c030) list_form_graphic_pane_cp_vc_ParamLimits

0xba71,	// (0x0003c030) list_form_graphic_pane_cp_vc

0x9d87,	// (0x0003a346) form_field_popup_wide_pane_vc_g1

0xba86,	// (0x0003c045) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba86,	// (0x0003c045) form_field_popup_wide_pane_vc_t1

0x26ea,	// (0x00032ca9) input_focus_pane_cp8_vc_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_cp8_vc

0xbacb,	// (0x0003c08a) list_form_wide_pane_vc_ParamLimits

0xbacb,	// (0x0003c08a) list_form_wide_pane_vc

0xbad7,	// (0x0003c096) list_form_graphic_pane_vc_g1

0xbadf,	// (0x0003c09e) list_form_graphic_pane_vc_t1_ParamLimits

0xbadf,	// (0x0003c09e) list_form_graphic_pane_vc_t1

0x2338,	// (0x000328f7) list_highlight_pane_cp5_vc_ParamLimits

0x2338,	// (0x000328f7) list_highlight_pane_cp5_vc

0xbafb,	// (0x0003c0ba) list_form_graphic_pane_vc_ParamLimits

0xbafb,	// (0x0003c0ba) list_form_graphic_pane_vc

0x9d87,	// (0x0003a346) form_field_popup_pane_vc_g1

0xbb11,	// (0x0003c0d0) form_field_popup_pane_vc_t1_ParamLimits

0xbb11,	// (0x0003c0d0) form_field_popup_pane_vc_t1

0x26ea,	// (0x00032ca9) input_focus_pane_cp7_vc_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_cp7_vc

0xbb28,	// (0x0003c0e7) list_form_pane_vc_ParamLimits

0xbb28,	// (0x0003c0e7) list_form_pane_vc

0xbb34,	// (0x0003c0f3) data_form_pane_vc_t1_ParamLimits

0xbb34,	// (0x0003c0f3) data_form_pane_vc_t1

0x2742,	// (0x00032d01) input_focus_pane_vc_g1

0x274a,	// (0x00032d09) input_focus_pane_vc_g2

0x2752,	// (0x00032d11) input_focus_pane_vc_g3

0x275a,	// (0x00032d19) input_focus_pane_vc_g4

0x2762,	// (0x00032d21) input_focus_pane_vc_g5

0x276a,	// (0x00032d29) input_focus_pane_vc_g6

0x2772,	// (0x00032d31) input_focus_pane_vc_g7

0x277a,	// (0x00032d39) input_focus_pane_vc_g8

0x2782,	// (0x00032d41) input_focus_pane_vc_g9

0x22d2,	// (0x00032891) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0003fc41) input_focus_pane_vc_g

0x9d7b,	// (0x0003a33a) data_form_pane_vc_ParamLimits

0x9d7b,	// (0x0003a33a) data_form_pane_vc

0x9d87,	// (0x0003a346) form_field_data_pane_vc_g1

0xbb4f,	// (0x0003c10e) form_field_data_pane_vc_t1_ParamLimits

0xbb4f,	// (0x0003c10e) form_field_data_pane_vc_t1

0x26ea,	// (0x00032ca9) input_focus_pane_vc_ParamLimits

0x26ea,	// (0x00032ca9) input_focus_pane_vc

0xbb69,	// (0x0003c128) button_value_adjust_pane_cp3_vc

0xbb71,	// (0x0003c130) button_value_adjust_pane_cp5_vc

0xbb79,	// (0x0003c138) form_field_data_pane_vc_ParamLimits

0xbb79,	// (0x0003c138) form_field_data_pane_vc

0xbb90,	// (0x0003c14f) form_field_data_pane_vc_cp2

0xbb98,	// (0x0003c157) form_field_data_wide_pane_vc_ParamLimits

0xbb98,	// (0x0003c157) form_field_data_wide_pane_vc

0xbbae,	// (0x0003c16d) form_field_data_wide_pane_vc_cp2

0xbbb6,	// (0x0003c175) form_field_popup_pane_vc_ParamLimits

0xbbb6,	// (0x0003c175) form_field_popup_pane_vc

0xbbcd,	// (0x0003c18c) form_field_popup_wide_pane_vc_ParamLimits

0xbbcd,	// (0x0003c18c) form_field_popup_wide_pane_vc

0xbbe3,	// (0x0003c1a2) form_field_slider_pane_vc_ParamLimits

0xbbe3,	// (0x0003c1a2) form_field_slider_pane_vc

0xbbf6,	// (0x0003c1b5) form_field_slider_wide_pane_vc_ParamLimits

0xbbf6,	// (0x0003c1b5) form_field_slider_wide_pane_vc

0xbc09,	// (0x0003c1c8) grid_touch_1_pane_ParamLimits

0xbc09,	// (0x0003c1c8) grid_touch_1_pane

0xbc15,	// (0x0003c1d4) grid_touch_2_pane_ParamLimits

0xbc15,	// (0x0003c1d4) grid_touch_2_pane

0x971d,	// (0x00039cdc) touch_pane_g1_ParamLimits

0x971d,	// (0x00039cdc) touch_pane_g1

0xbc2d,	// (0x0003c1ec) cell_app_pane_cp_wide_ParamLimits

0xbc2d,	// (0x0003c1ec) cell_app_pane_cp_wide

0xbc3e,	// (0x0003c1fd) grid_popup_fast_wide_pane_ParamLimits

0xbc3e,	// (0x0003c1fd) grid_popup_fast_wide_pane

0xbc52,	// (0x0003c211) scroll_pane_cp19_ParamLimits

0xbc52,	// (0x0003c211) scroll_pane_cp19

0x22dc,	// (0x0003289b) bg_popup_window_pane_cp20

0xbc66,	// (0x0003c225) listscroll_popup_fast_wide_pane

0x2338,	// (0x000328f7) grid_indicator_nsta_pane

0xbc6e,	// (0x0003c22d) clock_nsta_pane_g1

0xbc77,	// (0x0003c236) clock_nsta_pane_t1

0xbc93,	// (0x0003c252) cell_indicator_nsta_pane_ParamLimits

0xbc93,	// (0x0003c252) cell_indicator_nsta_pane

0xbcc4,	// (0x0003c283) cell_indicator_nsta_pane_g1

0xbcd2,	// (0x0003c291) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0004006f) cell_indicator_nsta_pane_g

0xbcdf,	// (0x0003c29e) clock_nsta_pane_cp

0xbce8,	// (0x0003c2a7) indicator_nsta_pane_cp

0xbcf0,	// (0x0003c2af) nsta_clock_indic_pane_g1

0x2374,	// (0x00032933) grid_indicator_pane

0x6e7b,	// (0x0003743a) scroll_pane_cp29

0x7105,	// (0x000376c4) indicator_nsta_pane_cp2_ParamLimits

0x7105,	// (0x000376c4) indicator_nsta_pane_cp2

0x2338,	// (0x000328f7) main_apps_wheel_pane

0x9f9f,	// (0x0003a55e) form_midp_field_text_pane_ParamLimits

0xa0e8,	// (0x0003a6a7) scroll_bar_cp050_ParamLimits

0xbd40,	// (0x0003c2ff) cell_indicator_pane_ParamLimits

0xbd40,	// (0x0003c2ff) cell_indicator_pane

0xbd59,	// (0x0003c318) cell_indicator_pane_g1

0xbd63,	// (0x0003c322) grid_wheel_folder_pane_ParamLimits

0xbd63,	// (0x0003c322) grid_wheel_folder_pane

0xbd79,	// (0x0003c338) list_wheel_apps_pane_ParamLimits

0xbd79,	// (0x0003c338) list_wheel_apps_pane

0xbd8a,	// (0x0003c349) main_apps_wheel_pane_g1_ParamLimits

0xbd8a,	// (0x0003c349) main_apps_wheel_pane_g1

0xbd9e,	// (0x0003c35d) main_apps_wheel_pane_g2_ParamLimits

0xbd9e,	// (0x0003c35d) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0004008b) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0004008b) main_apps_wheel_pane_g

0xbdb6,	// (0x0003c375) main_apps_wheel_pane_t1_ParamLimits

0xbdb6,	// (0x0003c375) main_apps_wheel_pane_t1

0xbdd9,	// (0x0003c398) list_wheel_apps_pane_g1

0xbde1,	// (0x0003c3a0) list_wheel_apps_pane_g2

0xbde9,	// (0x0003c3a8) list_wheel_apps_pane_g3

0xbdf3,	// (0x0003c3b2) list_wheel_apps_pane_g4

0xbdfd,	// (0x0003c3bc) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00040090) list_wheel_apps_pane_g

0x7401,	// (0x000379c0) navi_icon_text_pane

0x97b6,	// (0x00039d75) aid_fill_nsta

0xbe20,	// (0x0003c3df) navi_icon_text_pane_g1

0xbe2c,	// (0x0003c3eb) navi_icon_text_pane_t1

0x72a4,	// (0x00037863) list_set_graphic_pane_t1_ParamLimits

0x72a4,	// (0x00037863) list_set_graphic_pane_t1

0xa82b,	// (0x0003adea) popup_midp_note_alarm_window_t6_ParamLimits

0xa82b,	// (0x0003adea) popup_midp_note_alarm_window_t6

0xa83d,	// (0x0003adfc) popup_midp_note_alarm_window_t7_ParamLimits

0xa83d,	// (0x0003adfc) popup_midp_note_alarm_window_t7

0xa84f,	// (0x0003ae0e) popup_midp_note_alarm_window_t8_ParamLimits

0xa84f,	// (0x0003ae0e) popup_midp_note_alarm_window_t8

0xa861,	// (0x0003ae20) popup_midp_note_alarm_window_t9_ParamLimits

0xa861,	// (0x0003ae20) popup_midp_note_alarm_window_t9

0xa873,	// (0x0003ae32) popup_midp_note_alarm_window_t10_ParamLimits

0xa873,	// (0x0003ae32) popup_midp_note_alarm_window_t10

0xa885,	// (0x0003ae44) popup_midp_note_alarm_window_t11_ParamLimits

0xa885,	// (0x0003ae44) popup_midp_note_alarm_window_t11

0xa897,	// (0x0003ae56) scroll_pane_cp17_ParamLimits

0xa897,	// (0x0003ae56) scroll_pane_cp17

0x8079,	// (0x00038638) volume_small_pane_cp_g1

0x84df,	// (0x00038a9e) volume_small_pane_cp_g2

0x84e8,	// (0x00038aa7) volume_small_pane_cp_g3

0x84f1,	// (0x00038ab0) volume_small_pane_cp_g4

0x84fa,	// (0x00038ab9) volume_small_pane_cp_g5

0x84a9,	// (0x00038a68) volume_small_pane_cp_g6

0x8503,	// (0x00038ac2) volume_small_pane_cp_g7

0x850c,	// (0x00038acb) volume_small_pane_cp_g8

0x8515,	// (0x00038ad4) volume_small_pane_cp_g9

0x851e,	// (0x00038add) volume_small_pane_cp_g10

0x7662,	// (0x00037c21) midp_ticker_pane_g1_ParamLimits

0x766e,	// (0x00037c2d) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0003fd0d) midp_ticker_pane_g_ParamLimits

0x767a,	// (0x00037c39) midp_ticker_pane_t1_ParamLimits

0x97cc,	// (0x00039d8b) aid_fill_nsta_2

0xa0d4,	// (0x0003a693) list_form2_midp_pane

0xb1df,	// (0x0003b79e) midp_editing_number_pane_ParamLimits

0xb1ee,	// (0x0003b7ad) midp_ticker_pane_ParamLimits

0xbe3e,	// (0x0003c3fd) form2_midp_field_pane

0xbe62,	// (0x0003c421) scroll_pane_cp51

0xbe82,	// (0x0003c441) form2_midp_button_pane_ParamLimits

0xbe82,	// (0x0003c441) form2_midp_button_pane

0xbe94,	// (0x0003c453) form2_midp_content_pane_ParamLimits

0xbe94,	// (0x0003c453) form2_midp_content_pane

0xbeae,	// (0x0003c46d) form2_midp_field_choice_group_pane

0xbeb6,	// (0x0003c475) form2_midp_field_pane_g1

0xbebe,	// (0x0003c47d) form2_midp_field_pane_g2

0xbec6,	// (0x0003c485) form2_midp_field_pane_g3

0xbece,	// (0x0003c48d) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x000400b5) form2_midp_field_pane_g

0xbed6,	// (0x0003c495) form2_midp_gauge_slider_pane

0xbede,	// (0x0003c49d) form2_midp_gauge_wait_pane

0xbee6,	// (0x0003c4a5) form2_midp_image_pane_ParamLimits

0xbee6,	// (0x0003c4a5) form2_midp_image_pane

0xbf01,	// (0x0003c4c0) form2_midp_label_pane_ParamLimits

0xbf01,	// (0x0003c4c0) form2_midp_label_pane

0xbf1a,	// (0x0003c4d9) form2_midp_label_pane_cp_ParamLimits

0xbf1a,	// (0x0003c4d9) form2_midp_label_pane_cp

0xbf3b,	// (0x0003c4fa) form2_midp_string_pane_ParamLimits

0xbf3b,	// (0x0003c4fa) form2_midp_string_pane

0x4ae4,	// (0x000350a3) form2_midp_text_pane_ParamLimits

0x4ae4,	// (0x000350a3) form2_midp_text_pane

0xbf4d,	// (0x0003c50c) form2_midp_time_pane

0xbf5d,	// (0x0003c51c) input_focus_pane_cp51_ParamLimits

0xbf5d,	// (0x0003c51c) input_focus_pane_cp51

0xbf75,	// (0x0003c534) form2_midp_label_pane_t1_ParamLimits

0xbf75,	// (0x0003c534) form2_midp_label_pane_t1

0x4afd,	// (0x000350bc) form2_mdip_text_pane_t1_ParamLimits

0x4afd,	// (0x000350bc) form2_mdip_text_pane_t1

0x4b1b,	// (0x000350da) form2_midp_time_pane_t1

0xbfbe,	// (0x0003c57d) form2_midp_gauge_slider_pane_t1

0xbfd0,	// (0x0003c58f) form2_midp_gauge_slider_pane_t2

0xbfe2,	// (0x0003c5a1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x000400be) form2_midp_gauge_slider_pane_t

0xbff4,	// (0x0003c5b3) form2_midp_slider_pane

0xc000,	// (0x0003c5bf) form2_midp_gauge_wait_pane_t1

0xc00e,	// (0x0003c5cd) form2_midp_wait_pane_ParamLimits

0xc00e,	// (0x0003c5cd) form2_midp_wait_pane

0xc039,	// (0x0003c5f8) list_single_2graphic_pane_cp4_ParamLimits

0xc039,	// (0x0003c5f8) list_single_2graphic_pane_cp4

0x9df0,	// (0x0003a3af) list_single_midp_graphic_pane_cp_ParamLimits

0x9df0,	// (0x0003a3af) list_single_midp_graphic_pane_cp

0x22dc,	// (0x0003289b) list_highlight_pane_cp20

0xc061,	// (0x0003c620) list_single_2graphic_pane_g1_cp4

0xb669,	// (0x0003bc28) list_single_2graphic_pane_g2_cp4

0xc069,	// (0x0003c628) list_single_2graphic_pane_t1_cp4

0x2338,	// (0x000328f7) list_highlight_pane_cp21

0xc078,	// (0x0003c637) list_single_midp_graphic_pane_g4_cp

0xc087,	// (0x0003c646) list_single_midp_graphic_pane_t1_cp

0xc09c,	// (0x0003c65b) form2_mdip_string_pane_t1_ParamLimits

0xc09c,	// (0x0003c65b) form2_mdip_string_pane_t1

0x22dc,	// (0x0003289b) bg_wml_button_pane_cp2

0x22d2,	// (0x00032891) form2_midp_image_pane_g1

0x462f,	// (0x00034bee) list_double_large_graphic_pane_g5_ParamLimits

0x462f,	// (0x00034bee) list_double_large_graphic_pane_g5

0x7589,	// (0x00037b48) midp_form_pane_ParamLimits

0x2338,	// (0x000328f7) main_apps_wheel_pane_ParamLimits

0x7cf2,	// (0x000382b1) popup_preview_window_ParamLimits

0x7cf2,	// (0x000382b1) popup_preview_window

0x7ead,	// (0x0003846c) popup_touch_info_window_ParamLimits

0x7ead,	// (0x0003846c) popup_touch_info_window

0x7ecb,	// (0x0003848a) popup_touch_menu_window_ParamLimits

0x7ecb,	// (0x0003848a) popup_touch_menu_window

0x22c8,	// (0x00032887) bg_popup_sub_pane_cp6

0xc1a3,	// (0x0003c762) list_touch_menu_pane

0xc1ab,	// (0x0003c76a) list_single_touch_menu_pane_ParamLimits

0xc1ab,	// (0x0003c76a) list_single_touch_menu_pane

0xc1c1,	// (0x0003c780) list_single_touch_menu_pane_t1

0x2338,	// (0x000328f7) bg_popup_sub_pane_cp7_ParamLimits

0x2338,	// (0x000328f7) bg_popup_sub_pane_cp7

0xc1cf,	// (0x0003c78e) heading_sub_pane

0xc1d7,	// (0x0003c796) list_touch_info_pane_ParamLimits

0xc1d7,	// (0x0003c796) list_touch_info_pane

0xc1e6,	// (0x0003c7a5) list_single_touch_info_pane_ParamLimits

0xc1e6,	// (0x0003c7a5) list_single_touch_info_pane

0xc1f8,	// (0x0003c7b7) list_single_touch_info_pane_t1

0xc206,	// (0x0003c7c5) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x000400cc) list_single_touch_info_pane_t

0x7581,	// (0x00037b40) bg_popup_heading_pane_cp

0xc214,	// (0x0003c7d3) heading_sub_pane_t1

0x9d15,	// (0x0003a2d4) bg_popup_preview_window_pane_cp_ParamLimits

0x9d15,	// (0x0003a2d4) bg_popup_preview_window_pane_cp

0xc1cf,	// (0x0003c78e) heading_preview_pane

0xc1d7,	// (0x0003c796) list_preview_pane_ParamLimits

0xc1d7,	// (0x0003c796) list_preview_pane

0xc222,	// (0x0003c7e1) popup_preview_window_g1

0xc1e6,	// (0x0003c7a5) list_single_preview_pane_ParamLimits

0xc1e6,	// (0x0003c7a5) list_single_preview_pane

0xc22a,	// (0x0003c7e9) list_single_preview_pane_g1

0xc232,	// (0x0003c7f1) list_single_preview_pane_t1

0xc1f8,	// (0x0003c7b7) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x000400d1) list_single_preview_pane_t

0xc240,	// (0x0003c7ff) bg_popup_heading_pane_cp2_ParamLimits

0xc240,	// (0x0003c7ff) bg_popup_heading_pane_cp2

0xc256,	// (0x0003c815) heading_preview_pane_g1

0xc25e,	// (0x0003c81d) heading_preview_pane_t1_ParamLimits

0xc25e,	// (0x0003c81d) heading_preview_pane_t1

0x238b,	// (0x0003294a) soft_indicator_pane_t1_ParamLimits

0x2666,	// (0x00032c25) scroll_pane_ParamLimits

0x29f9,	// (0x00032fb8) scroll_sc2_left_pane

0x29f0,	// (0x00032faf) scroll_sc2_right_pane

0x2a18,	// (0x00032fd7) scroll_bg_pane_g1_ParamLimits

0x2a2d,	// (0x00032fec) scroll_bg_pane_g2_ParamLimits

0x2a45,	// (0x00033004) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0003fc98) scroll_bg_pane_g_ParamLimits

0x2a18,	// (0x00032fd7) scroll_handle_pane_g1_ParamLimits

0x2a5a,	// (0x00033019) scroll_handle_pane_g2_ParamLimits

0x2a45,	// (0x00033004) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0003fc9f) scroll_handle_pane_g_ParamLimits

0x7975,	// (0x00037f34) popup_choice_list_window_ParamLimits

0x7975,	// (0x00037f34) popup_choice_list_window

0x9beb,	// (0x0003a1aa) choice_list_pane

0x9c6d,	// (0x0003a22c) cell_toolbar_pane_t1

0x9c95,	// (0x0003a254) toolbar_button_pane_ParamLimits

0xad51,	// (0x0003b310) ai_gene_pane_1_t2_ParamLimits

0xad51,	// (0x0003b310) ai_gene_pane_1_t2

0x0001,

0xf903,	// (0x0003fec2) ai_gene_pane_1_t_ParamLimits

0xf903,	// (0x0003fec2) ai_gene_pane_1_t

0xc27b,	// (0x0003c83a) scroll_sc2_left_pane_g1

0xc27b,	// (0x0003c83a) scroll_sc2_right_pane_g1

0x977a,	// (0x00039d39) bg_popup_sub_pane_cp10

0xc285,	// (0x0003c844) list_choice_list_pane

0xc29e,	// (0x0003c85d) list_single_choice_list_pane_ParamLimits

0xc29e,	// (0x0003c85d) list_single_choice_list_pane

0xc2b1,	// (0x0003c870) list_single_choice_list_pane_g1

0x6b22,	// (0x000370e1) list_single_choice_list_pane_t1_ParamLimits

0x6b22,	// (0x000370e1) list_single_choice_list_pane_t1

0xc2b9,	// (0x0003c878) choice_list_pane_g1

0xc2c1,	// (0x0003c880) choice_list_pane_t1

0x22c8,	// (0x00032887) input_focus_pane_cp11

0x2965,	// (0x00032f24) title_pane_stacon_g2_ParamLimits

0x2965,	// (0x00032f24) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0003fc7e) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0003fc7e) title_pane_stacon_g

0x7581,	// (0x00037b40) cursor_press_pane

0x7a1d,	// (0x00037fdc) popup_fep_hwr_window_ParamLimits

0x7a1d,	// (0x00037fdc) popup_fep_hwr_window

0x7a95,	// (0x00038054) popup_fep_vkb_window_ParamLimits

0x7a95,	// (0x00038054) popup_fep_vkb_window

0xc2cf,	// (0x0003c88e) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x000400fa) fep_vkb_side_pane_g_ParamLimits

0x8560,	// (0x00038b1f) fep_hwr_candidate_pane_ParamLimits

0x8560,	// (0x00038b1f) fep_hwr_candidate_pane

0x858a,	// (0x00038b49) fep_hwr_side_pane_ParamLimits

0x858a,	// (0x00038b49) fep_hwr_side_pane

0x85aa,	// (0x00038b69) fep_hwr_top_pane_ParamLimits

0x85aa,	// (0x00038b69) fep_hwr_top_pane

0x85c2,	// (0x00038b81) fep_hwr_write_pane_ParamLimits

0x85c2,	// (0x00038b81) fep_hwr_write_pane

0xfb3b,	// (0x000400fa) fep_vkb_side_pane_g

0xc2d7,	// (0x0003c896) fep_hwr_top_pane_g1

0xc2e9,	// (0x0003c8a8) fep_hwr_top_pane_g2

0x85fc,	// (0x00038bbb) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x000400d6) fep_hwr_top_pane_g

0x8611,	// (0x00038bd0) fep_hwr_top_text_pane

0x2b1d,	// (0x000330dc) fep_hwr_top_text_pane_g1

0xc31f,	// (0x0003c8de) fep_hwr_top_text_pane_t1

0x8707,	// (0x00038cc6) fep_hwr_candidate_pane_g1

0xc564,	// (0x0003cb23) fep_vkb_keypad_pane_g3_ParamLimits

0xc564,	// (0x0003cb23) fep_vkb_keypad_pane_g3

0xc58c,	// (0x0003cb4b) fep_vkb_keypad_pane_g4_ParamLimits

0xc58c,	// (0x0003cb4b) fep_vkb_keypad_pane_g4

0xc5fb,	// (0x0003cbba) fep_vkb_bottom_pane_g2_ParamLimits

0xc5fb,	// (0x0003cbba) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00040101) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00040101) fep_vkb_bottom_pane_g

0xc27b,	// (0x0003c83a) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0004010b) cell_vkb_side_pane_g

0xc686,	// (0x0003cc45) cell_vkb_side_pane_t1

0xc694,	// (0x0003cc53) cell_vkb_side_pane_t1_copy1

0xc27b,	// (0x0003c83a) bg_fep_vkb_candidate_pane_g2

0xc7c0,	// (0x0003cd7f) cell_vkb_candidate_pane_ParamLimits

0xc32d,	// (0x0003c8ec) aid_size_cell_vkb_ParamLimits

0xc32d,	// (0x0003c8ec) aid_size_cell_vkb

0xc7c0,	// (0x0003cd7f) cell_vkb_candidate_pane

0x872e,	// (0x00038ced) bg_popup_fep_shadow_pane_g1

0xc3bb,	// (0x0003c97a) fep_vkb_bottom_pane_ParamLimits

0xc3bb,	// (0x0003c97a) fep_vkb_bottom_pane

0xc3f1,	// (0x0003c9b0) fep_vkb_candidate_pane_ParamLimits

0xc3f1,	// (0x0003c9b0) fep_vkb_candidate_pane

0xc40d,	// (0x0003c9cc) fep_vkb_keypad_pane_ParamLimits

0xc40d,	// (0x0003c9cc) fep_vkb_keypad_pane

0xc44c,	// (0x0003ca0b) fep_vkb_side_pane_ParamLimits

0xc44c,	// (0x0003ca0b) fep_vkb_side_pane

0xc488,	// (0x0003ca47) fep_vkb_top_pane_ParamLimits

0xc488,	// (0x0003ca47) fep_vkb_top_pane

0xc4bd,	// (0x0003ca7c) fep_vkb_top_pane_g1_ParamLimits

0xc4bd,	// (0x0003ca7c) fep_vkb_top_pane_g1

0xc4cc,	// (0x0003ca8b) fep_vkb_top_pane_g2_ParamLimits

0xc4cc,	// (0x0003ca8b) fep_vkb_top_pane_g2

0xc4db,	// (0x0003ca9a) fep_vkb_top_pane_g3_ParamLimits

0xc4db,	// (0x0003ca9a) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x000400f1) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x000400f1) fep_vkb_top_pane_g

0xc4f9,	// (0x0003cab8) fep_vkb_top_text_pane_ParamLimits

0xc4f9,	// (0x0003cab8) fep_vkb_top_text_pane

0xc50a,	// (0x0003cac9) fep_vkb_side_pane_g1_ParamLimits

0xc50a,	// (0x0003cac9) fep_vkb_side_pane_g1

0xc553,	// (0x0003cb12) grid_vkb_side_pane_ParamLimits

0xc553,	// (0x0003cb12) grid_vkb_side_pane

0x8736,	// (0x00038cf5) bg_popup_fep_shadow_pane_g2

0x873f,	// (0x00038cfe) bg_popup_fep_shadow_pane_g3

0x8747,	// (0x00038d06) bg_popup_fep_shadow_pane_g4

0x8750,	// (0x00038d0f) bg_popup_fep_shadow_pane_g5

0x875a,	// (0x00038d19) bg_popup_fep_shadow_pane_g6

0x8762,	// (0x00038d21) bg_popup_fep_shadow_pane_g7

0x275a,	// (0x00032d19) bg_popup_fep_shadow_pane_g8

0xc5aa,	// (0x0003cb69) grid_vkb_keypad_number_pane_ParamLimits

0xc5aa,	// (0x0003cb69) grid_vkb_keypad_number_pane

0xc5ba,	// (0x0003cb79) grid_vkb_keypad_pane_ParamLimits

0xc5ba,	// (0x0003cb79) grid_vkb_keypad_pane

0xc5e0,	// (0x0003cb9f) fep_vkb_bottom_pane_g1_ParamLimits

0xc5e0,	// (0x0003cb9f) fep_vkb_bottom_pane_g1

0xc609,	// (0x0003cbc8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc609,	// (0x0003cbc8) grid_vkb_keypad_bottom_left_pane

0xc61e,	// (0x0003cbdd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61e,	// (0x0003cbdd) grid_vkb_keypad_bottom_right_pane

0xc633,	// (0x0003cbf2) fep_vkb_top_text_pane_g1

0xc64e,	// (0x0003cc0d) fep_vkb_top_text_pane_t1

0xc663,	// (0x0003cc22) cell_vkb_side_pane_ParamLimits

0xc663,	// (0x0003cc22) cell_vkb_side_pane

0xc27b,	// (0x0003c83a) cell_vkb_side_pane_g1

0xc6a2,	// (0x0003cc61) cell_vkb_keypad_pane_ParamLimits

0xc6a2,	// (0x0003cc61) cell_vkb_keypad_pane

0xc717,	// (0x0003ccd6) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0004011e) bg_popup_fep_shadow_pane_g

0x8774,	// (0x00038d33) cell_hwr_side_pane_g1

0x8774,	// (0x00038d33) cell_hwr_side_pane_g2

0xc721,	// (0x0003cce0) cell_vkb_keypad_pane_t1

0xc72f,	// (0x0003ccee) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc72f,	// (0x0003ccee) cell_vkb_keypad_bottom_left_pane

0xc74c,	// (0x0003cd0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc74c,	// (0x0003cd0b) cell_vkb_keypad_bottom_right_pane

0xc27b,	// (0x0003c83a) cell_vkb_keypad_bottom_left_pane_g1

0xc27b,	// (0x0003c83a) cell_vkb_keypad_bottom_right_pane_g1

0xc785,	// (0x0003cd44) cell_vkb_keypad_number_pane_ParamLimits

0xc785,	// (0x0003cd44) cell_vkb_keypad_number_pane

0xc7a4,	// (0x0003cd63) cell_vkb_keypad_number_pane_g1

0xc7ae,	// (0x0003cd6d) cell_vkb_keypad_number_pane_g2

0xc7b7,	// (0x0003cd76) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00040110) cell_vkb_keypad_number_pane_g

0xc721,	// (0x0003cce0) cell_vkb_keypad_number_pane_t1

0xc7db,	// (0x0003cd9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00040131) cell_hwr_side_pane_g

0xc7f4,	// (0x0003cdb3) cell_hwr_side_pane_t1

0x877e,	// (0x00038d3d) cell_hwr_side_pane_t1_copy1

0x878c,	// (0x00038d4b) cell_hwr_candidate_pane_g1

0x87bb,	// (0x00038d7a) cell_hwr_candidate_pane_t1

0xc27b,	// (0x0003c83a) cell_vkb_candidate_pane_g2

0xc838,	// (0x0003cdf7) cell_vkb_candidate_pane_t1

0x8527,	// (0x00038ae6) bg_popup_fep_shadow_pane_ParamLimits

0x8527,	// (0x00038ae6) bg_popup_fep_shadow_pane

0x85dc,	// (0x00038b9b) bg_fep_hwr_top_pane_g4

0xc2fb,	// (0x0003c8ba) bg_hwr_side_pane_g1_ParamLimits

0xc2fb,	// (0x0003c8ba) bg_hwr_side_pane_g1

0x864d,	// (0x00038c0c) cell_hwr_side_pane_ParamLimits

0x864d,	// (0x00038c0c) cell_hwr_side_pane

0x8688,	// (0x00038c47) fep_hwr_write_pane_g1_ParamLimits

0x8688,	// (0x00038c47) fep_hwr_write_pane_g1

0x8695,	// (0x00038c54) fep_hwr_write_pane_g2_ParamLimits

0x8695,	// (0x00038c54) fep_hwr_write_pane_g2

0x86a2,	// (0x00038c61) fep_hwr_write_pane_g3_ParamLimits

0x86a2,	// (0x00038c61) fep_hwr_write_pane_g3

0x86b0,	// (0x00038c6f) fep_hwr_write_pane_g4_ParamLimits

0x86b0,	// (0x00038c6f) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x000400dd) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x000400dd) fep_hwr_write_pane_g

0x85dc,	// (0x00038b9b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x85dc,	// (0x00038b9b) bg_fep_hwr_candidate_pane_g2

0x86c5,	// (0x00038c84) cell_hwr_candidate_pane_ParamLimits

0x86c5,	// (0x00038c84) cell_hwr_candidate_pane

0x8707,	// (0x00038cc6) fep_hwr_candidate_pane_g1_ParamLimits

0xc35b,	// (0x0003c91a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc35b,	// (0x0003c91a) bg_popup_fep_shadow_pane_cp2

0xc4eb,	// (0x0003caaa) fep_vkb_top_pane_g4_ParamLimits

0xc4eb,	// (0x0003caaa) fep_vkb_top_pane_g4

0xc531,	// (0x0003caf0) fep_vkb_side_pane_g2_ParamLimits

0xc531,	// (0x0003caf0) fep_vkb_side_pane_g2

0x67c3,	// (0x00036d82) list_setting_pane_t4_ParamLimits

0x67c3,	// (0x00036d82) list_setting_pane_t4

0x6855,	// (0x00036e14) list_setting_number_pane_t5_ParamLimits

0x6855,	// (0x00036e14) list_setting_number_pane_t5

0x6eaa,	// (0x00037469) list_double_heading_pane_cp2_ParamLimits

0x6eaa,	// (0x00037469) list_double_heading_pane_cp2

0xc846,	// (0x0003ce05) list_double_heading_pane_g1_cp2_ParamLimits

0xc846,	// (0x0003ce05) list_double_heading_pane_g1_cp2

0xc852,	// (0x0003ce11) list_double_heading_pane_g2_cp2_ParamLimits

0xc852,	// (0x0003ce11) list_double_heading_pane_g2_cp2

0xc866,	// (0x0003ce25) list_double_heading_pane_t1_cp2_ParamLimits

0xc866,	// (0x0003ce25) list_double_heading_pane_t1_cp2

0xc87c,	// (0x0003ce3b) list_double_heading_pane_t2_cp2_ParamLimits

0xc87c,	// (0x0003ce3b) list_double_heading_pane_t2_cp2

0x22c0,	// (0x0003287f) aid_value_unit2

0x5dd0,	// (0x0003638f) popup_preview_fixed_window

0x2462,	// (0x00032a21) bg_popup_preview_window_pane_cp02

0xc88e,	// (0x0003ce4d) list_preview_fixed_pane

0xc8d4,	// (0x0003ce93) list_empty_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_empty_pane_fp

0xc8d4,	// (0x0003ce93) list_single_cale_day_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_single_cale_day_pane_fp

0xc8d4,	// (0x0003ce93) list_single_graphic_heading_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_single_graphic_heading_pane_fp

0xc8d4,	// (0x0003ce93) list_single_graphic_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_single_graphic_pane_fp

0xc8d4,	// (0x0003ce93) list_single_heading_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_single_heading_pane_fp

0xc8d4,	// (0x0003ce93) list_single_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_single_pane_fp

0xc8ea,	// (0x0003cea9) list_single_pane_fp_g1_ParamLimits

0xc8ea,	// (0x0003cea9) list_single_pane_fp_g1

0x4b2e,	// (0x000350ed) list_single_pane_fp_g2_ParamLimits

0x4b2e,	// (0x000350ed) list_single_pane_fp_g2

0x4b3a,	// (0x000350f9) list_single_pane_fp_g3_ParamLimits

0x4b3a,	// (0x000350f9) list_single_pane_fp_g3

0xc8f6,	// (0x0003ceb5) list_single_pane_fp_g4_ParamLimits

0xc8f6,	// (0x0003ceb5) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00040144) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00040144) list_single_pane_fp_g

0x4b4e,	// (0x0003510d) list_single_pane_fp_t1_ParamLimits

0x4b4e,	// (0x0003510d) list_single_pane_fp_t1

0x4b65,	// (0x00035124) list_single_graphic_pane_fp_g1_ParamLimits

0x4b65,	// (0x00035124) list_single_graphic_pane_fp_g1

0xc8ea,	// (0x0003cea9) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ea,	// (0x0003cea9) list_single_graphic_pane_fp_g2

0x4b2e,	// (0x000350ed) list_single_graphic_pane_fp_g3_ParamLimits

0x4b2e,	// (0x000350ed) list_single_graphic_pane_fp_g3

0x4b3a,	// (0x000350f9) list_single_graphic_pane_fp_g4_ParamLimits

0x4b3a,	// (0x000350f9) list_single_graphic_pane_fp_g4

0xc8f6,	// (0x0003ceb5) list_single_graphic_pane_fp_g5_ParamLimits

0xc8f6,	// (0x0003ceb5) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004014d) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004014d) list_single_graphic_pane_fp_g

0x4b71,	// (0x00035130) list_single_graphic_pane_fp_t1_ParamLimits

0x4b71,	// (0x00035130) list_single_graphic_pane_fp_t1

0x4b65,	// (0x00035124) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4b65,	// (0x00035124) list_single_graphic_heading_pane_fp_g1

0xc8ea,	// (0x0003cea9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x0003cea9) list_single_graphic_heading_pane_fp_g2

0x4b2e,	// (0x000350ed) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b2e,	// (0x000350ed) list_single_graphic_heading_pane_fp_g3

0x4b3a,	// (0x000350f9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4b3a,	// (0x000350f9) list_single_graphic_heading_pane_fp_g4

0xc8f6,	// (0x0003ceb5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x0003ceb5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004014d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004014d) list_single_graphic_heading_pane_fp_g

0x4b87,	// (0x00035146) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4b87,	// (0x00035146) list_single_graphic_heading_pane_fp_t1

0x4b9d,	// (0x0003515c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4b9d,	// (0x0003515c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00040158) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00040158) list_single_graphic_heading_pane_fp_t

0x4baf,	// (0x0003516e) list_single_cale_day_pane_fp_g1_ParamLimits

0x4baf,	// (0x0003516e) list_single_cale_day_pane_fp_g1

0xc902,	// (0x0003cec1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc902,	// (0x0003cec1) list_single_cale_day_pane_fp_g2

0x4be7,	// (0x000351a6) list_single_cale_day_pane_fp_g3_ParamLimits

0x4be7,	// (0x000351a6) list_single_cale_day_pane_fp_g3

0x4c0f,	// (0x000351ce) list_single_cale_day_pane_fp_g4_ParamLimits

0x4c0f,	// (0x000351ce) list_single_cale_day_pane_fp_g4

0x4c33,	// (0x000351f2) list_single_cale_day_pane_fp_g5_ParamLimits

0x4c33,	// (0x000351f2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0004015d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0004015d) list_single_cale_day_pane_fp_g

0x4c57,	// (0x00035216) list_single_cale_day_pane_fp_t1_ParamLimits

0x4c57,	// (0x00035216) list_single_cale_day_pane_fp_t1

0x4c7d,	// (0x0003523c) list_single_cale_day_pane_fp_t2_ParamLimits

0x4c7d,	// (0x0003523c) list_single_cale_day_pane_fp_t2

0x4c96,	// (0x00035255) list_single_cale_day_pane_fp_t3_ParamLimits

0x4c96,	// (0x00035255) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00040168) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00040168) list_single_cale_day_pane_fp_t

0xc8ea,	// (0x0003cea9) list_empty_pane_fp_g1_ParamLimits

0xc8ea,	// (0x0003cea9) list_empty_pane_fp_g1

0x4caf,	// (0x0003526e) list_empty_pane_fp_t1

0x4cbd,	// (0x0003527c) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0004016f) list_empty_pane_fp_t

0xc8ea,	// (0x0003cea9) list_single_heading_pane_fp_g1_ParamLimits

0xc8ea,	// (0x0003cea9) list_single_heading_pane_fp_g1

0x4b2e,	// (0x000350ed) list_single_heading_pane_fp_g2_ParamLimits

0x4b2e,	// (0x000350ed) list_single_heading_pane_fp_g2

0x4b3a,	// (0x000350f9) list_single_heading_pane_fp_g3_ParamLimits

0x4b3a,	// (0x000350f9) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00040174) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00040174) list_single_heading_pane_fp_g

0x4ccb,	// (0x0003528a) list_single_heading_pane_fp_t1_ParamLimits

0x4ccb,	// (0x0003528a) list_single_heading_pane_fp_t1

0x4cdd,	// (0x0003529c) list_single_heading_pane_fp_t2_ParamLimits

0x4cdd,	// (0x0003529c) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0004017b) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0004017b) list_single_heading_pane_fp_t

0x6b7a,	// (0x00037139) aid_size_cell_fast

0x2445,	// (0x00032a04) soft_indicator_pane_cp1_t1

0x6b83,	// (0x00037142) cell_app_pane_cp2_ParamLimits

0x6b83,	// (0x00037142) cell_app_pane_cp2

0x8549,	// (0x00038b08) fep_hwr_candidate_drop_down_list_pane

0x8721,	// (0x00038ce0) fep_hwr_candidate_pane_g3_ParamLimits

0x8721,	// (0x00038ce0) fep_hwr_candidate_pane_g3

0x3dee,	// (0x000343ad) fep_hwr_candidate_pane_g4_ParamLimits

0x3dee,	// (0x000343ad) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x000400ea) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x000400ea) fep_hwr_candidate_pane_g

0xc3e0,	// (0x0003c99f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3e0,	// (0x0003c99f) fep_vkb_candidate_drop_down_list_pane

0xc7e3,	// (0x0003cda2) fep_vkb_candidate_pane_g3

0xc7eb,	// (0x0003cdaa) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00040117) fep_vkb_candidate_pane_g

0x878c,	// (0x00038d4b) cell_hwr_candidate_pane_g1_ParamLimits

0x879a,	// (0x00038d59) cell_hwr_candidate_pane_g3_ParamLimits

0x879a,	// (0x00038d59) cell_hwr_candidate_pane_g3

0xd708,	// (0x0003dcc7) cell_hwr_candidate_pane_g4_ParamLimits

0xd708,	// (0x0003dcc7) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00040136) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00040136) cell_hwr_candidate_pane_g

0xc802,	// (0x0003cdc1) cell_vkb_candidate_pane_g3_ParamLimits

0xc802,	// (0x0003cdc1) cell_vkb_candidate_pane_g3

0xc81d,	// (0x0003cddc) cell_vkb_candidate_pane_g4_ParamLimits

0xc81d,	// (0x0003cddc) cell_vkb_candidate_pane_g4

0xc90e,	// (0x0003cecd) cell_app_pane_cp2_g1_ParamLimits

0xc90e,	// (0x0003cecd) cell_app_pane_cp2_g1

0xc92c,	// (0x0003ceeb) cell_app_pane_cp2_g2_ParamLimits

0xc92c,	// (0x0003ceeb) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00040180) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00040180) cell_app_pane_cp2_g

0xc938,	// (0x0003cef7) cell_app_pane_cp2_t1_ParamLimits

0xc938,	// (0x0003cef7) cell_app_pane_cp2_t1

0x26ea,	// (0x00032ca9) grid_highlight_pane_cp1_ParamLimits

0x26ea,	// (0x00032ca9) grid_highlight_pane_cp1

0x87d9,	// (0x00038d98) cell_hwr_candidate_pane_cp1_ParamLimits

0x87d9,	// (0x00038d98) cell_hwr_candidate_pane_cp1

0x878c,	// (0x00038d4b) fep_hwr_candidate_drop_down_list_pane_g1

0x87f8,	// (0x00038db7) fep_hwr_candidate_drop_down_list_pane_g2

0x8805,	// (0x00038dc4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00040185) fep_hwr_candidate_drop_down_list_pane_g

0x8812,	// (0x00038dd1) fep_hwr_candidate_drop_down_list_scroll_pane

0x881b,	// (0x00038dda) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x881b,	// (0x00038dda) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8828,	// (0x00038de7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8828,	// (0x00038de7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8835,	// (0x00038df4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8835,	// (0x00038df4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8842,	// (0x00038e01) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8842,	// (0x00038e01) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x885d,	// (0x00038e1c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x885d,	// (0x00038e1c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8878,	// (0x00038e37) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8878,	// (0x00038e37) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8893,	// (0x00038e52) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8893,	// (0x00038e52) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x88ae,	// (0x00038e6d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x88ae,	// (0x00038e6d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0004018c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0004018c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc94a,	// (0x0003cf09) cell_vkb_candidate_pane_cp1_ParamLimits

0xc94a,	// (0x0003cf09) cell_vkb_candidate_pane_cp1

0xc4eb,	// (0x0003caaa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4eb,	// (0x0003caaa) fep_vkb_candidate_drop_down_list_pane_g1

0xc96a,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc96a,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g2

0xc977,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc977,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0004019d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0004019d) fep_vkb_candidate_drop_down_list_pane_g

0xc984,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc984,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane

0xc991,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc991,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc99e,	// (0x0003cf5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc99e,	// (0x0003cf5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9aa,	// (0x0003cf69) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9aa,	// (0x0003cf69) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9b6,	// (0x0003cf75) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9b6,	// (0x0003cf75) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9d7,	// (0x0003cf96) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9d7,	// (0x0003cf96) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9f8,	// (0x0003cfb7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9f8,	// (0x0003cfb7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca19,	// (0x0003cfd8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca19,	// (0x0003cfd8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3a,	// (0x0003cff9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3a,	// (0x0003cff9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x000401a4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x000401a4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5eea,	// (0x000364a9) title_pane_g1_ParamLimits

0x5ef7,	// (0x000364b6) title_pane_g2_ParamLimits

0xf54e,	// (0x0003fb0d) title_pane_g_ParamLimits

0x2b15,	// (0x000330d4) aid_call2_pane

0x2b0d,	// (0x000330cc) aid_call_pane

0x2b1d,	// (0x000330dc) popup_clock_analogue_window_g1

0x2b1d,	// (0x000330dc) popup_clock_analogue_window_g2

0x6e8b,	// (0x0003744a) popup_clock_analogue_window_g3

0x6e94,	// (0x00037453) popup_clock_analogue_window_g4

0x22d2,	// (0x00032891) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0003fcad) popup_clock_analogue_window_g

0x6e9c,	// (0x0003745b) popup_clock_analogue_window_t1

0x6ed4,	// (0x00037493) clock_digital_number_pane_ParamLimits

0x6ed4,	// (0x00037493) clock_digital_number_pane

0x6ee0,	// (0x0003749f) clock_digital_number_pane_cp02_ParamLimits

0x6ee0,	// (0x0003749f) clock_digital_number_pane_cp02

0x6eec,	// (0x000374ab) clock_digital_number_pane_cp03_ParamLimits

0x6eec,	// (0x000374ab) clock_digital_number_pane_cp03

0x6ef8,	// (0x000374b7) clock_digital_number_pane_cp04_ParamLimits

0x6ef8,	// (0x000374b7) clock_digital_number_pane_cp04

0x6f04,	// (0x000374c3) clock_digital_separator_pane_ParamLimits

0x6f04,	// (0x000374c3) clock_digital_separator_pane

0x6f10,	// (0x000374cf) popup_clock_digital_window_t1_ParamLimits

0x6f10,	// (0x000374cf) popup_clock_digital_window_t1

0x22d2,	// (0x00032891) clock_digital_number_pane_g1

0x22d2,	// (0x00032891) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0003fcb8) clock_digital_number_pane_g

0x22d2,	// (0x00032891) clock_digital_separator_pane_g1

0x22d2,	// (0x00032891) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0003fcb8) clock_digital_separator_pane_g

0x97b6,	// (0x00039d75) aid_fill_nsta_ParamLimits

0x9902,	// (0x00039ec1) indicator_nsta_pane_ParamLimits

0x9a7b,	// (0x0003a03a) popup_clock_analogue_window

0x9a7b,	// (0x0003a03a) popup_clock_digital_window

0x2338,	// (0x000328f7) grid_indicator_nsta_pane_ParamLimits

0xbc85,	// (0x0003c244) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0004006a) clock_nsta_pane_t

0x6db6,	// (0x00037375) aid_size_max_handle

0x6dc0,	// (0x0003737f) aid_size_min_handle

0x7581,	// (0x00037b40) editor_scroll_pane

0xca55,	// (0x0003d014) ex_editor_pane

0x2809,	// (0x00032dc8) scroll_pane_cp13

0x2692,	// (0x00032c51) scroll_pane_cp14

0x2b4c,	// (0x0003310b) scroll_pane_cp36

0x6ebe,	// (0x0003747d) list_single_graphic_hl_pane_cp2_ParamLimits

0x6ebe,	// (0x0003747d) list_single_graphic_hl_pane_cp2

0xb25c,	// (0x0003b81b) list_single_graphic_hl_pane_ParamLimits

0xb25c,	// (0x0003b81b) list_single_graphic_hl_pane

0xca5d,	// (0x0003d01c) aid_size_min_hl_cp1

0xca66,	// (0x0003d025) list_highlight_pane_cp34_ParamLimits

0xca66,	// (0x0003d025) list_highlight_pane_cp34

0xca77,	// (0x0003d036) list_single_graphic_hl_pane_g1_ParamLimits

0xca77,	// (0x0003d036) list_single_graphic_hl_pane_g1

0x88c9,	// (0x00038e88) list_single_graphic_hl_pane_g2_ParamLimits

0x88c9,	// (0x00038e88) list_single_graphic_hl_pane_g2

0x88c9,	// (0x00038e88) list_single_graphic_hl_pane_g3_ParamLimits

0x88c9,	// (0x00038e88) list_single_graphic_hl_pane_g3

0x88d5,	// (0x00038e94) list_single_graphic_hl_pane_g4_ParamLimits

0x88d5,	// (0x00038e94) list_single_graphic_hl_pane_g4

0x88e1,	// (0x00038ea0) list_single_graphic_hl_pane_g5_ParamLimits

0x88e1,	// (0x00038ea0) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x000401b5) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x000401b5) list_single_graphic_hl_pane_g

0x88f5,	// (0x00038eb4) list_single_graphic_hl_pane_t1_ParamLimits

0x88f5,	// (0x00038eb4) list_single_graphic_hl_pane_t1

0xca84,	// (0x0003d043) aid_size_min_hl_cp2

0xca8d,	// (0x0003d04c) list_highlight_pane_cp34_cp2_ParamLimits

0xca8d,	// (0x0003d04c) list_highlight_pane_cp34_cp2

0xca77,	// (0x0003d036) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca77,	// (0x0003d036) list_single_graphic_hl_pane_g1_cp2

0xca9a,	// (0x0003d059) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca9a,	// (0x0003d059) list_single_graphic_hl_pane_g2_cp2

0xcaa6,	// (0x0003d065) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa6,	// (0x0003d065) list_single_graphic_hl_pane_g3_cp2

0x74ba,	// (0x00037a79) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x74ba,	// (0x00037a79) list_single_graphic_hl_pane_g4_cp2

0xcab4,	// (0x0003d073) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcab4,	// (0x0003d073) list_single_graphic_hl_pane_g5_cp2

0x7831,	// (0x00037df0) control_pane_g4_ParamLimits

0x7831,	// (0x00037df0) control_pane_g4

0x977a,	// (0x00039d39) bg_popup_sub_pane_cp10_ParamLimits

0xc285,	// (0x0003c844) list_choice_list_pane_ParamLimits

0xc294,	// (0x0003c853) scroll_pane_cp23

0x2462,	// (0x00032a21) bg_popup_preview_window_pane_cp02_ParamLimits

0xc88e,	// (0x0003ce4d) list_preview_fixed_pane_ParamLimits

0xc8a4,	// (0x0003ce63) list_preview_fixed_pane_cp_ParamLimits

0xc8a4,	// (0x0003ce63) list_preview_fixed_pane_cp

0xc8b0,	// (0x0003ce6f) popup_preview_fixed_window_g1_ParamLimits

0xc8b0,	// (0x0003ce6f) popup_preview_fixed_window_g1

0xc8bc,	// (0x0003ce7b) popup_preview_fixed_window_g2_ParamLimits

0xc8bc,	// (0x0003ce7b) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0004013d) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0004013d) popup_preview_fixed_window_g

0x6c92,	// (0x00037251) aid_navi_side_left_pane_ParamLimits

0x6ca7,	// (0x00037266) aid_navi_side_right_pane_ParamLimits

0x6cbf,	// (0x0003727e) navi_icon_pane_stacon_ParamLimits

0x6cd3,	// (0x00037292) navi_navi_pane_stacon_ParamLimits

0x6cbf,	// (0x0003727e) navi_text_pane_stacon_ParamLimits

0x5c9f,	// (0x0003625e) main_text_info_pane

0xcade,	// (0x0003d09d) listscroll_text_info_pane

0xcae6,	// (0x0003d0a5) list_text_info_pane_ParamLimits

0xcae6,	// (0x0003d0a5) list_text_info_pane

0xcaf5,	// (0x0003d0b4) scroll_pane_cp24_ParamLimits

0xcaf5,	// (0x0003d0b4) scroll_pane_cp24

0xcb13,	// (0x0003d0d2) list_text_info_pane_t1_ParamLimits

0xcb13,	// (0x0003d0d2) list_text_info_pane_t1

0x7991,	// (0x00037f50) popup_fast_swap2_window_ParamLimits

0x7991,	// (0x00037f50) popup_fast_swap2_window

0xcb47,	// (0x0003d106) aid_size_cell_fast2

0x22c8,	// (0x00032887) bg_popup_window_pane_cp17

0xa108,	// (0x0003a6c7) heading_pane_cp2

0x2596,	// (0x00032b55) listscroll_fast2_pane

0xcb51,	// (0x0003d110) grid_fast2_pane

0xcb5b,	// (0x0003d11a) listscroll_fast2_pane_g1

0xcb63,	// (0x0003d122) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x000401c0) listscroll_fast2_pane_g

0x2809,	// (0x00032dc8) scroll_pane_cp26

0xcb6d,	// (0x0003d12c) cell_fast2_pane_ParamLimits

0xcb6d,	// (0x0003d12c) cell_fast2_pane

0xcb82,	// (0x0003d141) cell_fast2_pane_g1

0xcb8b,	// (0x0003d14a) cell_fast2_pane_g2

0xcb94,	// (0x0003d153) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x000401c5) cell_fast2_pane_g

0x25c9,	// (0x00032b88) grid_highlight_pane_cp9

0x7959,	// (0x00037f18) main_eswt_pane_ParamLimits

0x7959,	// (0x00037f18) main_eswt_pane

0xcb0a,	// (0x0003d0c9) list_single_text_info_pane

0xcb9c,	// (0x0003d15b) eswt_ctrl_button_pane

0xcb9c,	// (0x0003d15b) eswt_ctrl_canvas_pane

0xcba4,	// (0x0003d163) eswt_ctrl_combo_pane

0xcb9c,	// (0x0003d15b) eswt_ctrl_default_pane

0xcb9c,	// (0x0003d15b) eswt_ctrl_label_pane

0xcbac,	// (0x0003d16b) eswt_ctrl_wait_pane

0xcbb4,	// (0x0003d173) eswt_shell_pane

0x22c8,	// (0x00032887) listscroll_eswt_app_pane

0xcbd4,	// (0x0003d193) popup_eswt_tasktip_window_ParamLimits

0xcbd4,	// (0x0003d193) popup_eswt_tasktip_window

0x9d15,	// (0x0003a2d4) bg_popup_window_pane_cp18

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_ParamLimits

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_ParamLimits

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_ParamLimits

0xcbff,	// (0x0003d1be) eswt_control_pane_g3

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_ParamLimits

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x000401cc) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x000401cc) eswt_control_pane_g

0x26ea,	// (0x00032ca9) bg_button_pane_ParamLimits

0x26ea,	// (0x00032ca9) bg_button_pane

0x25de,	// (0x00032b9d) common_borders_pane_copy2_ParamLimits

0x25de,	// (0x00032b9d) common_borders_pane_copy2

0xcc19,	// (0x0003d1d8) control_button_pane_g1_ParamLimits

0xcc19,	// (0x0003d1d8) control_button_pane_g1

0xcc25,	// (0x0003d1e4) control_button_pane_g2_ParamLimits

0xcc25,	// (0x0003d1e4) control_button_pane_g2

0xcc31,	// (0x0003d1f0) control_button_pane_g3_ParamLimits

0xcc31,	// (0x0003d1f0) control_button_pane_g3

0x0002,

0xfc16,	// (0x000401d5) control_button_pane_g_ParamLimits

0xfc16,	// (0x000401d5) control_button_pane_g

0xcc45,	// (0x0003d204) control_button_pane_t1

0xcc53,	// (0x0003d212) control_button_pane_t2

0x0001,

0xfc1d,	// (0x000401dc) control_button_pane_t

0x9ca1,	// (0x0003a260) bg_button_pane_g1

0x9cb1,	// (0x0003a270) bg_button_pane_g2

0x9ca9,	// (0x0003a268) bg_button_pane_g3

0x9cc1,	// (0x0003a280) bg_button_pane_g4

0x9cb9,	// (0x0003a278) bg_button_pane_g5

0x9cc9,	// (0x0003a288) bg_button_pane_g6

0x9cd1,	// (0x0003a290) bg_button_pane_g7

0x9ce1,	// (0x0003a2a0) bg_button_pane_g8

0x9cd9,	// (0x0003a298) bg_button_pane_g9

0x0008,

0xf857,	// (0x0003fe16) bg_button_pane_g

0xc240,	// (0x0003c7ff) common_borders_pane_ParamLimits

0xc240,	// (0x0003c7ff) common_borders_pane

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy1_ParamLimits

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy1

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy1_ParamLimits

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy1

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy1_ParamLimits

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy1

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy1_ParamLimits

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy1

0xc27b,	// (0x0003c83a) bg_eswt_ctrl_canvas_pane_g1

0xc240,	// (0x0003c7ff) common_borders_pane_cp2_ParamLimits

0xc240,	// (0x0003c7ff) common_borders_pane_cp2

0xc240,	// (0x0003c7ff) common_borders_pane_cp3_ParamLimits

0xc240,	// (0x0003c7ff) common_borders_pane_cp3

0xcc61,	// (0x0003d220) separator_horizontal_pane

0xcc69,	// (0x0003d228) separator_vertical_pane

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy2_ParamLimits

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy2

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy2_ParamLimits

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy2

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy2_ParamLimits

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy2

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy2_ParamLimits

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy2

0x22c8,	// (0x00032887) common_borders_pane_cp4

0xcc72,	// (0x0003d231) separator_horizontal_pane_g1

0xcc7b,	// (0x0003d23a) separator_horizontal_pane_g2

0xcc84,	// (0x0003d243) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x000401e1) separator_horizontal_pane_g

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy3_ParamLimits

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy3

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy3_ParamLimits

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy3

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy3_ParamLimits

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy3

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy3_ParamLimits

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy3

0x22c8,	// (0x00032887) common_borders_pane_cp5

0xcc8d,	// (0x0003d24c) separator_vertical_pane_g1

0xcc96,	// (0x0003d255) separator_vertical_pane_g2

0xcc9f,	// (0x0003d25e) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x000401e8) separator_vertical_pane_g

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy4_ParamLimits

0xcbe5,	// (0x0003d1a4) eswt_control_pane_g1_copy4

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy4_ParamLimits

0xcbf2,	// (0x0003d1b1) eswt_control_pane_g2_copy4

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy4_ParamLimits

0xcbff,	// (0x0003d1be) eswt_control_pane_g3_copy4

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy4_ParamLimits

0xcc0c,	// (0x0003d1cb) eswt_control_pane_g4_copy4

0xcca8,	// (0x0003d267) eswt_ctrl_combo_button_pane

0xccb0,	// (0x0003d26f) eswt_ctrl_input_pane

0xccb8,	// (0x0003d277) popup_choice_list_window_cp70

0xccc0,	// (0x0003d27f) eswt_ctrl_input_pane_t1

0x22c8,	// (0x00032887) input_focus_pane_cp70

0xc240,	// (0x0003c7ff) bg_button_pane_cp70_ParamLimits

0xc240,	// (0x0003c7ff) bg_button_pane_cp70

0xccce,	// (0x0003d28d) eswt_ctrl_combo_button_pane_g1

0xccd6,	// (0x0003d295) wait_bar_pane_cp70

0x9d15,	// (0x0003a2d4) bg_popup_window_pane_cp70_ParamLimits

0x9d15,	// (0x0003a2d4) bg_popup_window_pane_cp70

0xccde,	// (0x0003d29d) popup_eswt_tasktip_window_t1

0xccf4,	// (0x0003d2b3) wait_bar_pane_cp71_ParamLimits

0xccf4,	// (0x0003d2b3) wait_bar_pane_cp71

0xcd00,	// (0x0003d2bf) grid_eswt_app_pane

0x29f9,	// (0x00032fb8) scroll_pane_cp70

0xcd09,	// (0x0003d2c8) cell_eswt_app_pane_ParamLimits

0xcd09,	// (0x0003d2c8) cell_eswt_app_pane

0xcd39,	// (0x0003d2f8) cell_eswt_app_pane_g1_ParamLimits

0xcd39,	// (0x0003d2f8) cell_eswt_app_pane_g1

0xcd68,	// (0x0003d327) cell_eswt_app_pane_g2_ParamLimits

0xcd68,	// (0x0003d327) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x000401ef) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x000401ef) cell_eswt_app_pane_g

0xcd8c,	// (0x0003d34b) cell_eswt_app_pane_t1_ParamLimits

0xcd8c,	// (0x0003d34b) cell_eswt_app_pane_t1

0xcdbe,	// (0x0003d37d) grid_highlight_pane_cp70_ParamLimits

0xcdbe,	// (0x0003d37d) grid_highlight_pane_cp70

0x7456,	// (0x00037a15) set_content_pane_g1

0x9701,	// (0x00039cc0) status_small_volume_pane

0x890b,	// (0x00038eca) status_small_volume_pane_g1

0x8913,	// (0x00038ed2) volume_small2_pane

0x891c,	// (0x00038edb) volume_small2_pane_g1

0x8925,	// (0x00038ee4) volume_small2_pane_g2

0x892e,	// (0x00038eed) volume_small2_pane_g3

0x8937,	// (0x00038ef6) volume_small2_pane_g4

0x8940,	// (0x00038eff) volume_small2_pane_g5

0x8949,	// (0x00038f08) volume_small2_pane_g6

0x8952,	// (0x00038f11) volume_small2_pane_g7

0x895b,	// (0x00038f1a) volume_small2_pane_g8

0x8964,	// (0x00038f23) volume_small2_pane_g9

0x896d,	// (0x00038f2c) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x000401f4) volume_small2_pane_g

0xc633,	// (0x0003cbf2) fep_vkb_top_text_pane_g1_ParamLimits

0xc64e,	// (0x0003cc0d) fep_vkb_top_text_pane_t1_ParamLimits

0xc8c8,	// (0x0003ce87) popup_preview_fixed_window_g3_ParamLimits

0xc8c8,	// (0x0003ce87) popup_preview_fixed_window_g3

0x7e40,	// (0x000383ff) popup_toolbar_trans_pane

0xb04b,	// (0x0003b60a) aid_height_set_list_ParamLimits

0xb05c,	// (0x0003b61b) aid_size_parent_ParamLimits

0x977a,	// (0x00039d39) list_highlight_pane_cp2_ParamLimits

0x7456,	// (0x00037a15) set_content_pane_g1_ParamLimits

0x8386,	// (0x00038945) list_single_image_pane_ParamLimits

0x8386,	// (0x00038945) list_single_image_pane

0xcdca,	// (0x0003d389) aid_size_cell_image_ParamLimits

0xcdca,	// (0x0003d389) aid_size_cell_image

0xcdd7,	// (0x0003d396) grid_single_image_pane_ParamLimits

0xcdd7,	// (0x0003d396) grid_single_image_pane

0xcde5,	// (0x0003d3a4) list_single_image_pane_g1_ParamLimits

0xcde5,	// (0x0003d3a4) list_single_image_pane_g1

0xcdf1,	// (0x0003d3b0) list_single_image_pane_g2_ParamLimits

0xcdf1,	// (0x0003d3b0) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00040209) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00040209) list_single_image_pane_g

0xce05,	// (0x0003d3c4) list_single_image_pane_t1_ParamLimits

0xce05,	// (0x0003d3c4) list_single_image_pane_t1

0xce1b,	// (0x0003d3da) cell_image_list_pane_ParamLimits

0xce1b,	// (0x0003d3da) cell_image_list_pane

0xce2f,	// (0x0003d3ee) cell_image_list_pane_g1

0xce38,	// (0x0003d3f7) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0004020e) cell_image_list_pane_g

0xce41,	// (0x0003d400) aid_size_cell_tb_trans_pane

0x26ea,	// (0x00032ca9) bg_tb_trans_pane

0xce53,	// (0x0003d412) grid_tb_trans_pane

0x9ca1,	// (0x0003a260) bg_tb_trans_pane_g1

0x9cb1,	// (0x0003a270) bg_tb_trans_pane_g2

0x9ca9,	// (0x0003a268) bg_tb_trans_pane_g3

0x9cc1,	// (0x0003a280) bg_tb_trans_pane_g4

0x9cb9,	// (0x0003a278) bg_tb_trans_pane_g5

0x9ce1,	// (0x0003a2a0) bg_tb_trans_pane_g6

0x9cd9,	// (0x0003a298) bg_tb_trans_pane_g7

0x9cc9,	// (0x0003a288) bg_tb_trans_pane_g8

0x9cd1,	// (0x0003a290) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00040213) bg_tb_trans_pane_g

0xce67,	// (0x0003d426) cell_toolbar_trans_pane_ParamLimits

0xce67,	// (0x0003d426) cell_toolbar_trans_pane

0xc27b,	// (0x0003c83a) cell_toolbar_trans_pane_g1

0xbe46,	// (0x0003c405) list_form2_midp_pane_t1

0xbe54,	// (0x0003c413) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x000400b0) list_form2_midp_pane_t

0xbe62,	// (0x0003c421) scroll_pane_cp51_ParamLimits

0xc01e,	// (0x0003c5dd) form2_midp_wait_pane_g1

0xc027,	// (0x0003c5e6) form2_midp_wait_pane_g2

0xc030,	// (0x0003c5ef) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x000400c5) form2_midp_wait_pane_g

0x2338,	// (0x000328f7) list_highlight_pane_cp21_ParamLimits

0xc078,	// (0x0003c637) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc087,	// (0x0003c646) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x831e,	// (0x000388dd) list_single_2graphic_im_pane_ParamLimits

0x831e,	// (0x000388dd) list_single_2graphic_im_pane

0xce8d,	// (0x0003d44c) list_single_2graphic_im_pane_g1_ParamLimits

0xce8d,	// (0x0003d44c) list_single_2graphic_im_pane_g1

0xce9e,	// (0x0003d45d) list_single_2graphic_im_pane_g2_ParamLimits

0xce9e,	// (0x0003d45d) list_single_2graphic_im_pane_g2

0xceaa,	// (0x0003d469) list_single_2graphic_im_pane_g3_ParamLimits

0xceaa,	// (0x0003d469) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00040226) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00040226) list_single_2graphic_im_pane_g

0xceca,	// (0x0003d489) list_single_2graphic_im_pane_t1_ParamLimits

0xceca,	// (0x0003d489) list_single_2graphic_im_pane_t1

0xc8d4,	// (0x0003ce93) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8d4,	// (0x0003ce93) list_single_graphic_2heading_pane_fp

0x4b65,	// (0x00035124) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4b65,	// (0x00035124) list_single_graphic_2heading_pane_fp_g1

0xc8ea,	// (0x0003cea9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ea,	// (0x0003cea9) list_single_graphic_2heading_pane_fp_g2

0x4b2e,	// (0x000350ed) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b2e,	// (0x000350ed) list_single_graphic_2heading_pane_fp_g3

0x4b3a,	// (0x000350f9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4b3a,	// (0x000350f9) list_single_graphic_2heading_pane_fp_g4

0xc8f6,	// (0x0003ceb5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8f6,	// (0x0003ceb5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0004014d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0004014d) list_single_graphic_2heading_pane_fp_g

0x4cff,	// (0x000352be) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4cff,	// (0x000352be) list_single_graphic_2heading_pane_fp_t1

0x4b9d,	// (0x0003515c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4b9d,	// (0x0003515c) list_single_graphic_2heading_pane_fp_t2

0x4d15,	// (0x000352d4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4d15,	// (0x000352d4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0004022f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0004022f) list_single_graphic_2heading_pane_fp_t

0xc307,	// (0x0003c8c6) fep_hwr_write_pane_g5_ParamLimits

0xc307,	// (0x0003c8c6) fep_hwr_write_pane_g5

0xc313,	// (0x0003c8d2) fep_hwr_write_pane_g6_ParamLimits

0xc313,	// (0x0003c8d2) fep_hwr_write_pane_g6

0xcbb4,	// (0x0003d173) eswt_shell_pane_ParamLimits

0x9d15,	// (0x0003a2d4) bg_popup_window_pane_cp18_ParamLimits

0xafa4,	// (0x0003b563) heading_pane_cp70

0xccde,	// (0x0003d29d) popup_eswt_tasktip_window_t1_ParamLimits

0x980b,	// (0x00039dca) aid_touch_tab_arrow_left

0x981a,	// (0x00039dd9) aid_touch_tab_arrow_right

0x5f08,	// (0x000364c7) title_pane_g3_ParamLimits

0x5f08,	// (0x000364c7) title_pane_g3

0x26b2,	// (0x00032c71) set_value_pane_g1

0x7e40,	// (0x000383ff) popup_toolbar_trans_pane_ParamLimits

0xce41,	// (0x0003d400) aid_size_cell_tb_trans_pane_ParamLimits

0x26ea,	// (0x00032ca9) bg_tb_trans_pane_ParamLimits

0xce53,	// (0x0003d412) grid_tb_trans_pane_ParamLimits

0x2462,	// (0x00032a21) cont_note_pane_ParamLimits

0x2462,	// (0x00032a21) cont_note_pane

0x25de,	// (0x00032b9d) cont_snote2_single_text_pane_ParamLimits

0x25de,	// (0x00032b9d) cont_snote2_single_text_pane

0x25de,	// (0x00032b9d) cont_snote2_single_graphic_pane_ParamLimits

0x25de,	// (0x00032b9d) cont_snote2_single_graphic_pane

0xa327,	// (0x0003a8e6) cont_note_wait_pane_ParamLimits

0xa327,	// (0x0003a8e6) cont_note_wait_pane

0xa327,	// (0x0003a8e6) cont_note_image_pane_ParamLimits

0xa327,	// (0x0003a8e6) cont_note_image_pane

0xcefb,	// (0x0003d4ba) popup_note2_window_g1_ParamLimits

0xcefb,	// (0x0003d4ba) popup_note2_window_g1

0xcf2c,	// (0x0003d4eb) popup_note2_window_t1_ParamLimits

0xcf2c,	// (0x0003d4eb) popup_note2_window_t1

0xcf71,	// (0x0003d530) popup_note2_window_t2_ParamLimits

0xcf71,	// (0x0003d530) popup_note2_window_t2

0xcfb6,	// (0x0003d575) popup_note2_window_t3_ParamLimits

0xcfb6,	// (0x0003d575) popup_note2_window_t3

0xcffb,	// (0x0003d5ba) popup_note2_window_t4_ParamLimits

0xcffb,	// (0x0003d5ba) popup_note2_window_t4

0x24e6,	// (0x00032aa5) popup_note2_window_t5_ParamLimits

0x24e6,	// (0x00032aa5) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0004023b) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0004023b) popup_note2_window_t

0xd02a,	// (0x0003d5e9) popup_note2_image_window_g1_ParamLimits

0xd02a,	// (0x0003d5e9) popup_note2_image_window_g1

0xd036,	// (0x0003d5f5) popup_note2_image_window_g2_ParamLimits

0xd036,	// (0x0003d5f5) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00040246) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00040246) popup_note2_image_window_g

0xd048,	// (0x0003d607) popup_note2_image_window_t1_ParamLimits

0xd048,	// (0x0003d607) popup_note2_image_window_t1

0xd060,	// (0x0003d61f) popup_note2_image_window_t2_ParamLimits

0xd060,	// (0x0003d61f) popup_note2_image_window_t2

0xd078,	// (0x0003d637) popup_note2_image_window_t3_ParamLimits

0xd078,	// (0x0003d637) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0004024b) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0004024b) popup_note2_image_window_t

0xa335,	// (0x0003a8f4) popup_note2_wait_window_g1_ParamLimits

0xa335,	// (0x0003a8f4) popup_note2_wait_window_g1

0xa341,	// (0x0003a900) popup_note2_wait_window_g2_ParamLimits

0xa341,	// (0x0003a900) popup_note2_wait_window_g2

0xa34d,	// (0x0003a90c) popup_note2_wait_window_g3_ParamLimits

0xa34d,	// (0x0003a90c) popup_note2_wait_window_g3

0x0002,

0xf839,	// (0x0003fdf8) popup_note2_wait_window_g_ParamLimits

0xf839,	// (0x0003fdf8) popup_note2_wait_window_g

0xd094,	// (0x0003d653) popup_note2_wait_window_t1_ParamLimits

0xd094,	// (0x0003d653) popup_note2_wait_window_t1

0xd0b2,	// (0x0003d671) popup_note2_wait_window_t2_ParamLimits

0xd0b2,	// (0x0003d671) popup_note2_wait_window_t2

0xd0d0,	// (0x0003d68f) popup_note2_wait_window_t3_ParamLimits

0xd0d0,	// (0x0003d68f) popup_note2_wait_window_t3

0xd0e2,	// (0x0003d6a1) popup_note2_wait_window_t4_ParamLimits

0xd0e2,	// (0x0003d6a1) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x00040252) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x00040252) popup_note2_wait_window_t

0xd0f4,	// (0x0003d6b3) wait_bar2_pane_ParamLimits

0xd0f4,	// (0x0003d6b3) wait_bar2_pane

0xd10c,	// (0x0003d6cb) popup_snote2_single_text_window_g1_ParamLimits

0xd10c,	// (0x0003d6cb) popup_snote2_single_text_window_g1

0xd134,	// (0x0003d6f3) popup_snote2_single_text_window_t1_ParamLimits

0xd134,	// (0x0003d6f3) popup_snote2_single_text_window_t1

0xd180,	// (0x0003d73f) popup_snote2_single_text_window_t2_ParamLimits

0xd180,	// (0x0003d73f) popup_snote2_single_text_window_t2

0xd1cc,	// (0x0003d78b) popup_snote2_single_text_window_t3_ParamLimits

0xd1cc,	// (0x0003d78b) popup_snote2_single_text_window_t3

0xd20d,	// (0x0003d7cc) popup_snote2_single_text_window_t4_ParamLimits

0xd20d,	// (0x0003d7cc) popup_snote2_single_text_window_t4

0xd243,	// (0x0003d802) popup_snote2_single_text_window_t5_ParamLimits

0xd243,	// (0x0003d802) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0004025b) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0004025b) popup_snote2_single_text_window_t

0xd26e,	// (0x0003d82d) popup_snote2_single_graphic_window_g1_ParamLimits

0xd26e,	// (0x0003d82d) popup_snote2_single_graphic_window_g1

0xd296,	// (0x0003d855) popup_snote2_single_graphic_window_g2_ParamLimits

0xd296,	// (0x0003d855) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x00040266) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x00040266) popup_snote2_single_graphic_window_g

0xd2be,	// (0x0003d87d) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2be,	// (0x0003d87d) popup_snote2_single_graphic_window_t1

0xd30a,	// (0x0003d8c9) popup_snote2_single_graphic_window_t2_ParamLimits

0xd30a,	// (0x0003d8c9) popup_snote2_single_graphic_window_t2

0xd1cc,	// (0x0003d78b) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1cc,	// (0x0003d78b) popup_snote2_single_graphic_window_t3

0xd20d,	// (0x0003d7cc) popup_snote2_single_graphic_window_t4_ParamLimits

0xd20d,	// (0x0003d7cc) popup_snote2_single_graphic_window_t4

0xd243,	// (0x0003d802) popup_snote2_single_graphic_window_t5_ParamLimits

0xd243,	// (0x0003d802) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0004026b) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0004026b) popup_snote2_single_graphic_window_t

0xbd1f,	// (0x0003c2de) clock_nsta_pane_cp2_t1

0xbd1f,	// (0x0003c2de) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00040086) clock_nsta_pane_cp2_t

0x6951,	// (0x00036f10) form_field_data_wide_pane_g1_ParamLimits

0x26f8,	// (0x00032cb7) form_field_data_wide_pane_g2_ParamLimits

0x26f8,	// (0x00032cb7) form_field_data_wide_pane_g2

0x2704,	// (0x00032cc3) form_field_data_wide_pane_g3_ParamLimits

0x2704,	// (0x00032cc3) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0003fc30) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0003fc30) form_field_data_wide_pane_g

0xbc21,	// (0x0003c1e0) grid_touch_3_pane_ParamLimits

0xbc21,	// (0x0003c1e0) grid_touch_3_pane

0xd356,	// (0x0003d915) cell_touch_3_pane_ParamLimits

0xd356,	// (0x0003d915) cell_touch_3_pane

0xc27b,	// (0x0003c83a) cell_touch_3_pane_g1

0xc27b,	// (0x0003c83a) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0004010b) cell_touch_3_pane_g

0x2518,	// (0x00032ad7) cont_query_data_pane

0x2520,	// (0x00032adf) cont_query_data_pane_cp1

0xd384,	// (0x0003d943) button_value_adjust_pane_cp7

0xd38c,	// (0x0003d94b) query_popup_pane_cp3

0x2b7e,	// (0x0003313d) bg_popup_sub_pane_cp22_ParamLimits

0x6f8a,	// (0x00037549) navi_navi_volume_pane_cp2

0x6fa2,	// (0x00037561) popup_side_volume_key_window_g2

0x6fae,	// (0x0003756d) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0003fcc6) popup_side_volume_key_window_g

0x6fc8,	// (0x00037587) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0003fccd) popup_side_volume_key_window_t

0x7323,	// (0x000378e2) popup_side_volume_key_window_ParamLimits

0x6632,	// (0x00036bf1) list_double_graphic_pane_g4_ParamLimits

0x6632,	// (0x00036bf1) list_double_graphic_pane_g4

0x8363,	// (0x00038922) list_single_2heading_msg_pane_ParamLimits

0x8363,	// (0x00038922) list_single_2heading_msg_pane

0x8976,	// (0x00038f35) list_single_2heading_msg_pane_g1_ParamLimits

0x8976,	// (0x00038f35) list_single_2heading_msg_pane_g1

0x4563,	// (0x00034b22) list_single_2heading_msg_pane_g2_ParamLimits

0x4563,	// (0x00034b22) list_single_2heading_msg_pane_g2

0x48a4,	// (0x00034e63) list_single_2heading_msg_pane_g3_ParamLimits

0x48a4,	// (0x00034e63) list_single_2heading_msg_pane_g3

0x4d35,	// (0x000352f4) list_single_2heading_msg_pane_g4_ParamLimits

0x4d35,	// (0x000352f4) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x00040276) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x00040276) list_single_2heading_msg_pane_g

0x4d4d,	// (0x0003530c) list_single_2heading_msg_pane_t1_ParamLimits

0x4d4d,	// (0x0003530c) list_single_2heading_msg_pane_t1

0x8982,	// (0x00038f41) list_single_2heading_msg_pane_t2_ParamLimits

0x8982,	// (0x00038f41) list_single_2heading_msg_pane_t2

0x89b6,	// (0x00038f75) list_single_2heading_msg_pane_t3_ParamLimits

0x89b6,	// (0x00038f75) list_single_2heading_msg_pane_t3

0x4d75,	// (0x00035334) list_single_2heading_msg_pane_t4_ParamLimits

0x4d75,	// (0x00035334) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0004027f) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0004027f) list_single_2heading_msg_pane_t

0x22e6,	// (0x000328a5) title_pane_g4_ParamLimits

0x22e6,	// (0x000328a5) title_pane_g4

0x6be3,	// (0x000371a2) title_pane_stacon_g3_ParamLimits

0x6be3,	// (0x000371a2) title_pane_stacon_g3

0xcebe,	// (0x0003d47d) list_single_2graphic_im_pane_g4_ParamLimits

0xcebe,	// (0x0003d47d) list_single_2graphic_im_pane_g4

0xad6e,	// (0x0003b32d) popup_side_volume_key_window_cp

0xb57c,	// (0x0003bb3b) main_idle_act2_pane_t1

0x7f32,	// (0x000384f1) toolbar_button_pane_g10

0x64c7,	// (0x00036a86) popup_toolbar_window_cp1

0xbd10,	// (0x0003c2cf) clock_nsta_pane_cp_t1

0xbd10,	// (0x0003c2cf) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00040081) clock_nsta_pane_cp_t

0x6f8a,	// (0x00037549) navi_navi_volume_pane_cp2_ParamLimits

0x6f96,	// (0x00037555) popup_side_volume_key_window_g1_ParamLimits

0x6fa2,	// (0x00037561) popup_side_volume_key_window_g2_ParamLimits

0x6fae,	// (0x0003756d) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0003fcc6) popup_side_volume_key_window_g_ParamLimits

0x8535,	// (0x00038af4) fep_hwr_aid_pane

0x85dc,	// (0x00038b9b) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2d7,	// (0x0003c896) fep_hwr_top_pane_g1_ParamLimits

0xc2e9,	// (0x0003c8a8) fep_hwr_top_pane_g2_ParamLimits

0x85fc,	// (0x00038bbb) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x000400d6) fep_hwr_top_pane_g_ParamLimits

0x8611,	// (0x00038bd0) fep_hwr_top_text_pane_ParamLimits

0xab31,	// (0x0003b0f0) aid_touch_tab_arrow_arrow_2

0xab3a,	// (0x0003b0f9) aid_touch_tab_arrow_left_2

0x8549,	// (0x00038b08) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x8580,	// (0x00038b3f) fep_hwr_prediction_pane

0xc442,	// (0x0003ca01) fep_vkb_prediction_pane

0xc53f,	// (0x0003cafe) fep_vkb_side_pane_g3_ParamLimits

0xc53f,	// (0x0003cafe) fep_vkb_side_pane_g3

0x878c,	// (0x00038d4b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x87f8,	// (0x00038db7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8805,	// (0x00038dc4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00040185) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x89ef,	// (0x00038fae) fep_hwr_prediction_pane_g1

0x89f9,	// (0x00038fb8) fep_hwr_prediction_pane_g2

0x8a01,	// (0x00038fc0) fep_hwr_prediction_pane_g3

0x8a09,	// (0x00038fc8) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x00040288) fep_hwr_prediction_pane_g

0xd3b1,	// (0x0003d970) fep_vkb_prediction_pane_g1

0xd3bb,	// (0x0003d97a) fep_vkb_prediction_pane_g2

0xd3c3,	// (0x0003d982) fep_vkb_prediction_pane_g3

0xd3cb,	// (0x0003d98a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x00040291) fep_vkb_prediction_pane_g

0x8265,	// (0x00038824) slider_set_pane_g3

0x8279,	// (0x00038838) slider_set_pane_g4

0x8291,	// (0x00038850) slider_set_pane_g5

0x8265,	// (0x00038824) slider_set_pane_g6

0x82a7,	// (0x00038866) slider_set_pane_g7

0xb1bd,	// (0x0003b77c) slider_form_pane_g3

0xb1c6,	// (0x0003b785) slider_form_pane_g4

0xb1ce,	// (0x0003b78d) slider_form_pane_g5

0xb1bd,	// (0x0003b77c) slider_form_pane_g6

0xb1d6,	// (0x0003b795) slider_form_pane_g7

0xb827,	// (0x0003bde6) slider_set_pane_vc_g3

0xb830,	// (0x0003bdef) slider_set_pane_vc_g4

0xb839,	// (0x0003bdf8) slider_set_pane_vc_g5

0xb827,	// (0x0003bde6) slider_set_pane_vc_g6

0xb842,	// (0x0003be01) slider_set_pane_vc_g7

0xb9f4,	// (0x0003bfb3) slider_form_pane_vc_g1

0xb9fd,	// (0x0003bfbc) slider_form_pane_vc_g2

0xba06,	// (0x0003bfc5) slider_form_pane_vc_g3

0xb9f4,	// (0x0003bfb3) slider_form_pane_vc_g4

0xba0f,	// (0x0003bfce) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00040053) slider_form_pane_vc_g

0x5c9f,	// (0x0003625e) main_idle_act3_pane

0xd3d3,	// (0x0003d992) ai3_links_pane

0xd3dc,	// (0x0003d99b) popup_ai3_data_window_ParamLimits

0xd3dc,	// (0x0003d99b) popup_ai3_data_window

0x22c8,	// (0x00032887) grid_ai3_links_pane

0xd3f4,	// (0x0003d9b3) cell_ai3_links_pane_ParamLimits

0xd3f4,	// (0x0003d9b3) cell_ai3_links_pane

0xd40c,	// (0x0003d9cb) bg_popup_sub_pane_cp11

0xd419,	// (0x0003d9d8) cell_ai3_links_pane_g1

0x22c8,	// (0x00032887) bg_popup_sub_pane_cp12

0xd43e,	// (0x0003d9fd) heading_ai3_data_pane

0xd446,	// (0x0003da05) list_ai3_gene_pane

0xd452,	// (0x0003da11) popup_ai3_data_window_g1

0xd45a,	// (0x0003da19) heading_ai3_data_pane_g1

0xd462,	// (0x0003da21) heading_ai3_data_pane_t1

0xd470,	// (0x0003da2f) list_double_ai3_gene_pane_ParamLimits

0xd470,	// (0x0003da2f) list_double_ai3_gene_pane

0xd47d,	// (0x0003da3c) list_single_ai3_gene_pane_ParamLimits

0xd47d,	// (0x0003da3c) list_single_ai3_gene_pane

0xc240,	// (0x0003c7ff) list_highlight_pane_cp7_ParamLimits

0xc240,	// (0x0003c7ff) list_highlight_pane_cp7

0xd48a,	// (0x0003da49) list_single_a13_gene_pane_t1_ParamLimits

0xd48a,	// (0x0003da49) list_single_a13_gene_pane_t1

0xd4a1,	// (0x0003da60) list_single_ai3_gene_pane_g1

0xd4aa,	// (0x0003da69) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0004029a) list_single_ai3_gene_pane_g

0xd4b2,	// (0x0003da71) list_double_ai3_gene_pane_g1_ParamLimits

0xd4b2,	// (0x0003da71) list_double_ai3_gene_pane_g1

0xd4be,	// (0x0003da7d) list_double_ai3_gene_pane_t1_ParamLimits

0xd4be,	// (0x0003da7d) list_double_ai3_gene_pane_t1

0xd4da,	// (0x0003da99) list_double_ai3_gene_pane_t2_ParamLimits

0xd4da,	// (0x0003da99) list_double_ai3_gene_pane_t2

0xd4ef,	// (0x0003daae) list_double_ai3_gene_pane_t3_ParamLimits

0xd4ef,	// (0x0003daae) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0004029f) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0004029f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4d2b,	// (0x000352ea) aid_size_min_col_2

0xd39d,	// (0x0003d95c) aid_size_min_msg_ParamLimits

0xd39d,	// (0x0003d95c) aid_size_min_msg

0xc63f,	// (0x0003cbfe) fep_vkb_top_text_pane_g2_ParamLimits

0xc63f,	// (0x0003cbfe) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00040106) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00040106) fep_vkb_top_text_pane_g

0x5c9f,	// (0x0003625e) main_hc_apps_shell_pane

0xd50c,	// (0x0003dacb) grid_hc_apps_pane_ParamLimits

0xd50c,	// (0x0003dacb) grid_hc_apps_pane

0xd51b,	// (0x0003dada) list_hc_apps_pane

0xd523,	// (0x0003dae2) scroll_pane_cp37_ParamLimits

0xd523,	// (0x0003dae2) scroll_pane_cp37

0xd52f,	// (0x0003daee) cell_hc_apps_pane_ParamLimits

0xd52f,	// (0x0003daee) cell_hc_apps_pane

0xd5dd,	// (0x0003db9c) cell_hc_apps_pane_g1_ParamLimits

0xd5dd,	// (0x0003db9c) cell_hc_apps_pane_g1

0xd60e,	// (0x0003dbcd) cell_hc_apps_pane_g2_ParamLimits

0xd60e,	// (0x0003dbcd) cell_hc_apps_pane_g2

0xd62a,	// (0x0003dbe9) cell_hc_apps_pane_g3_ParamLimits

0xd62a,	// (0x0003dbe9) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x000402a6) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x000402a6) cell_hc_apps_pane_g

0xd64c,	// (0x0003dc0b) cell_hc_apps_pane_t1_ParamLimits

0xd64c,	// (0x0003dc0b) cell_hc_apps_pane_t1

0x2462,	// (0x00032a21) grid_highlight_pane_cp10_ParamLimits

0x2462,	// (0x00032a21) grid_highlight_pane_cp10

0xd68c,	// (0x0003dc4b) list_single_hc_apps_pane_ParamLimits

0xd68c,	// (0x0003dc4b) list_single_hc_apps_pane

0xd6ef,	// (0x0003dcae) list_single_hc_apps_pane_g1

0x8a11,	// (0x00038fd0) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x000402ad) list_single_hc_apps_pane_g

0x8a2a,	// (0x00038fe9) list_single_hc_apps_pane_g2_copy1

0x8a46,	// (0x00039005) list_single_hc_apps_pane_t1

0x2338,	// (0x000328f7) bg_set_opt_pane_cp_ParamLimits

0x5fb8,	// (0x00036577) setting_slider_pane_t1_ParamLimits

0x5fd1,	// (0x00036590) setting_slider_pane_t2_ParamLimits

0x5feb,	// (0x000365aa) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003fb1d) setting_slider_pane_t_ParamLimits

0x6003,	// (0x000365c2) slider_set_pane_ParamLimits

0x7845,	// (0x00037e04) control_pane_g5_ParamLimits

0x7845,	// (0x00037e04) control_pane_g5

0xb010,	// (0x0003b5cf) slider_set_pane_g1_ParamLimits

0x8259,	// (0x00038818) slider_set_pane_g2_ParamLimits

0x8265,	// (0x00038824) slider_set_pane_g3_ParamLimits

0x8279,	// (0x00038838) slider_set_pane_g4_ParamLimits

0x8291,	// (0x00038850) slider_set_pane_g5_ParamLimits

0x8265,	// (0x00038824) slider_set_pane_g6_ParamLimits

0x82a7,	// (0x00038866) slider_set_pane_g7_ParamLimits

0xf955,	// (0x0003ff14) slider_set_pane_g_ParamLimits

0x7401,	// (0x000379c0) navi_icon_text_pane_ParamLimits

0x97cc,	// (0x00039d8b) aid_fill_nsta_2_ParamLimits

0x980b,	// (0x00039dca) aid_touch_tab_arrow_left_ParamLimits

0x981a,	// (0x00039dd9) aid_touch_tab_arrow_right_ParamLimits

0x9887,	// (0x00039e46) clock_nsta_pane_ParamLimits

0xab13,	// (0x0003b0d2) navi_icon_pane_g1_ParamLimits

0xab1f,	// (0x0003b0de) navi_text_pane_t1_ParamLimits

0xbe20,	// (0x0003c3df) navi_icon_text_pane_g1_ParamLimits

0xbe2c,	// (0x0003c3eb) navi_icon_text_pane_t1_ParamLimits

0xd6ef,	// (0x0003dcae) list_single_hc_apps_pane_g1_ParamLimits

0x8a11,	// (0x00038fd0) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x000402ad) list_single_hc_apps_pane_g_ParamLimits

0x8a2a,	// (0x00038fe9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8a46,	// (0x00039005) list_single_hc_apps_pane_t1_ParamLimits

0x5dfc,	// (0x000363bb) popup_toolbar2_fixed_window_ParamLimits

0x5dfc,	// (0x000363bb) popup_toolbar2_fixed_window

0x7e36,	// (0x000383f5) popup_toolbar2_float_window

0x22c8,	// (0x00032887) bg_popup_sub_pane_cp27

0xd729,	// (0x0003dce8) grid_toolbar2_float_pane

0x22c8,	// (0x00032887) bg_popup_sub_pane_cp26

0xd729,	// (0x0003dce8) grid_toolbar2_fixed_pane

0xd731,	// (0x0003dcf0) cell_toolbar2_fixed_pane_ParamLimits

0xd731,	// (0x0003dcf0) cell_toolbar2_fixed_pane

0xd741,	// (0x0003dd00) cell_toolbar2_fixed_pane_g1

0x7d08,	// (0x000382c7) toolbar2_fixed_button_pane

0x9ca1,	// (0x0003a260) toolbar2_fixed_button_pane_g1

0x9cb1,	// (0x0003a270) toolbar2_fixed_button_pane_g2

0x9ca9,	// (0x0003a268) toolbar2_fixed_button_pane_g3

0x9cc1,	// (0x0003a280) toolbar2_fixed_button_pane_g4

0x9cb9,	// (0x0003a278) toolbar2_fixed_button_pane_g5

0x9cc9,	// (0x0003a288) toolbar2_fixed_button_pane_g6

0x9cd1,	// (0x0003a290) toolbar2_fixed_button_pane_g7

0x9ce1,	// (0x0003a2a0) toolbar2_fixed_button_pane_g8

0x9cd9,	// (0x0003a298) toolbar2_fixed_button_pane_g9

0x0008,

0xf857,	// (0x0003fe16) toolbar2_fixed_button_pane_g

0xd74a,	// (0x0003dd09) cell_toolbar2_float_pane_ParamLimits

0xd74a,	// (0x0003dd09) cell_toolbar2_float_pane

0xd75b,	// (0x0003dd1a) cell_toolbar2_float_pane_g1

0x7d08,	// (0x000382c7) toolbar2_fixed_button_pane_cp

0xc3a9,	// (0x0003c968) fep_vkb_accented_list_pane_ParamLimits

0xc3a9,	// (0x0003c968) fep_vkb_accented_list_pane

0x876c,	// (0x00038d2b) bg_popup_fep_shadow_pane_g9

0x7581,	// (0x00037b40) bg_popup_fep_shadow_pane_cp3

0x27f0,	// (0x00032daf) list_accented_list_pane

0xd764,	// (0x0003dd23) list_single_accented_list_pane_ParamLimits

0xd764,	// (0x0003dd23) list_single_accented_list_pane

0x7581,	// (0x00037b40) list_highlight_pane_cp10

0xd775,	// (0x0003dd34) list_single_accented_list_pane_t1

0x7d86,	// (0x00038345) popup_slider_window_ParamLimits

0x7d86,	// (0x00038345) popup_slider_window

0xd394,	// (0x0003d953) aid_indentation_list_msg

0xd833,	// (0x0003ddf2) bg_popup_window_pane_cp19

0xd89b,	// (0x0003de5a) popup_slider_window_g1

0xd8b7,	// (0x0003de76) popup_slider_window_g2

0xd8d3,	// (0x0003de92) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x000402b2) popup_slider_window_g

0xd939,	// (0x0003def8) popup_slider_window_t1

0xd9ad,	// (0x0003df6c) small_volume_slider_vertical_pane

0xc27b,	// (0x0003c83a) small_volume_slider_vertical_pane_g1

0xc27b,	// (0x0003c83a) small_volume_slider_vertical_pane_g2

0xd9c9,	// (0x0003df88) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x000402c4) small_volume_slider_vertical_pane_g

0x5bc2,	// (0x00036181) area_side_right_pane_ParamLimits

0x5bc2,	// (0x00036181) area_side_right_pane

0x8a74,	// (0x00039033) aid_size_side_button_ParamLimits

0x8a74,	// (0x00039033) aid_size_side_button

0x8a88,	// (0x00039047) grid_sctrl_middle_pane_ParamLimits

0x8a88,	// (0x00039047) grid_sctrl_middle_pane

0x8aa7,	// (0x00039066) sctrl_sk_bottom_pane

0x8ab8,	// (0x00039077) sctrl_sk_top_pane

0x8aca,	// (0x00039089) aid_touch_sctrl_top

0x8ad7,	// (0x00039096) bg_sctrl_sk_pane_ParamLimits

0x8ad7,	// (0x00039096) bg_sctrl_sk_pane

0x8ae5,	// (0x000390a4) sctrl_sk_top_pane_g1

0x8af2,	// (0x000390b1) sctrl_sk_top_pane_t1

0x8aca,	// (0x00039089) aid_touch_sctrl_bottom

0x8ad7,	// (0x00039096) bg_sctrl_sk_pane_cp_ParamLimits

0x8ad7,	// (0x00039096) bg_sctrl_sk_pane_cp

0x8b0d,	// (0x000390cc) sctrl_sk_bottom_pane_g1

0x8af2,	// (0x000390b1) sctrl_sk_bottom_pane_t1

0x8b16,	// (0x000390d5) cell_sctrl_middle_pane_ParamLimits

0x8b16,	// (0x000390d5) cell_sctrl_middle_pane

0x8b31,	// (0x000390f0) aid_touch_sctrl_middle_ParamLimits

0x8b31,	// (0x000390f0) aid_touch_sctrl_middle

0x8b43,	// (0x00039102) bg_sctrl_middle_pane_ParamLimits

0x8b43,	// (0x00039102) bg_sctrl_middle_pane

0x878c,	// (0x00038d4b) cell_sctrl_middle_pane_g1_ParamLimits

0x878c,	// (0x00038d4b) cell_sctrl_middle_pane_g1

0x8b51,	// (0x00039110) cell_sctrl_middle_pane_g2_ParamLimits

0x8b51,	// (0x00039110) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x000402d0) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x000402d0) cell_sctrl_middle_pane_g

0x9ca1,	// (0x0003a260) bg_sctrl_middle_pane_g1

0x9ca9,	// (0x0003a268) bg_sctrl_middle_pane_g2

0x9cb1,	// (0x0003a270) bg_sctrl_middle_pane_g3

0x9cb9,	// (0x0003a278) bg_sctrl_middle_pane_g4

0x9cc1,	// (0x0003a280) bg_sctrl_middle_pane_g5

0x9cc9,	// (0x0003a288) bg_sctrl_middle_pane_g6

0x9cd1,	// (0x0003a290) bg_sctrl_middle_pane_g7

0x9cd9,	// (0x0003a298) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x000402d5) bg_sctrl_middle_pane_g

0x9ce1,	// (0x0003a2a0) bg_sctrl_middle_pane_g8_copy1

0x9ca1,	// (0x0003a260) bg_sctrl_sk_pane_g1

0x9cb1,	// (0x0003a270) bg_sctrl_sk_pane_g2

0x9ca9,	// (0x0003a268) bg_sctrl_sk_pane_g3

0x0008,

0xf857,	// (0x0003fe16) bg_sctrl_sk_pane_g

0x262c,	// (0x00032beb) aid_size_touch_scroll_bar

0x9cc1,	// (0x0003a280) bg_sctrl_sk_pane_g4

0x9cb9,	// (0x0003a278) bg_sctrl_sk_pane_g5

0x9cc9,	// (0x0003a288) bg_sctrl_sk_pane_g6

0x9cd1,	// (0x0003a290) bg_sctrl_sk_pane_g7

0x9ce1,	// (0x0003a2a0) bg_sctrl_sk_pane_g8

0x9cd9,	// (0x0003a298) bg_sctrl_sk_pane_g9

0x79ef,	// (0x00037fae) popup_fep_china_hwr2_fs_candidate_window

0x79f9,	// (0x00037fb8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x79f9,	// (0x00037fb8) popup_fep_china_hwr2_fs_control_window

0x878c,	// (0x00038d4b) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x000402cb) sctrl_sk_top_pane_g

0xd9d2,	// (0x0003df91) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9d2,	// (0x0003df91) aid_fep_china_hwr2_fs_cell

0xd9e4,	// (0x0003dfa3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9e4,	// (0x0003dfa3) bg_popup_fep_shadow_pane_cp4

0xd9fb,	// (0x0003dfba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9fb,	// (0x0003dfba) bg_popup_fep_shadow_pane_cp5

0xda0d,	// (0x0003dfcc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda0d,	// (0x0003dfcc) popup_fep_china_hwr2_fs_control_bar_grid

0xda1d,	// (0x0003dfdc) popup_fep_china_hwr2_fs_control_funtion_grid

0xda25,	// (0x0003dfe4) aid_fep_china_hwr2_fs_candi_cell

0x22c8,	// (0x00032887) bg_popup_fep_shadow_pane_cp6

0xda2f,	// (0x0003dfee) popup_fep_china_hwr2_fs_candidate_grid

0xda39,	// (0x0003dff8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda39,	// (0x0003dff8) cell_fep_china_hwr2_fs_funtion_grid

0xc27b,	// (0x0003c83a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda51,	// (0x0003e010) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda51,	// (0x0003e010) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda5f,	// (0x0003e01e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda5f,	// (0x0003e01e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x000402e6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x000402e6) cell_fep_china_hwr2_fs_funtion_grid_g

0xda75,	// (0x0003e034) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda75,	// (0x0003e034) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda8a,	// (0x0003e049) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda8a,	// (0x0003e049) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x000402eb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x000402eb) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaa6,	// (0x0003e065) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaae,	// (0x0003e06d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdab6,	// (0x0003e075) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x000402f0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdabe,	// (0x0003e07d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdabe,	// (0x0003e07d) cell_fep_china_hwr2_fs_candidate_grid

0xdad7,	// (0x0003e096) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdadf,	// (0x0003e09e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc27b,	// (0x0003c83a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc27b,	// (0x0003c83a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0004010b) cell_fep_china_hwr2_fs_candidate_grid_g

0xdae7,	// (0x0003e0a6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x989a,	// (0x00039e59) clock_nsta_pane_cp_24_ParamLimits

0x989a,	// (0x00039e59) clock_nsta_pane_cp_24

0x9918,	// (0x00039ed7) indicator_nsta_pane_cp_24_ParamLimits

0x9918,	// (0x00039ed7) indicator_nsta_pane_cp_24

0xa98f,	// (0x0003af4e) heading_pane_g1

0x0001,

0xf8bc,	// (0x0003fe7b) heading_pane_g

0xb3c5,	// (0x0003b984) grid_sct_catagory_button_pane

0xb3f5,	// (0x0003b9b4) scroll_pane_cp5_ParamLimits

0xbe6e,	// (0x0003c42d) button_value_adjust_pane_cp5_ParamLimits

0xbe6e,	// (0x0003c42d) button_value_adjust_pane_cp5

0xbf4d,	// (0x0003c50c) form2_midp_time_pane_ParamLimits

0xdaf5,	// (0x0003e0b4) cell_sct_catagory_button_pane_ParamLimits

0xdaf5,	// (0x0003e0b4) cell_sct_catagory_button_pane

0xc240,	// (0x0003c7ff) bg_button_pane_cp01_ParamLimits

0xc240,	// (0x0003c7ff) bg_button_pane_cp01

0xc27b,	// (0x0003c83a) cell_sct_catagory_button_pane_g1

0x7dc5,	// (0x00038384) popup_tb_extension_window

0xdb07,	// (0x0003e0c6) aid_size_cell_ext_ParamLimits

0xdb07,	// (0x0003e0c6) aid_size_cell_ext

0x2462,	// (0x00032a21) bg_tb_trans_pane_cp1_ParamLimits

0x2462,	// (0x00032a21) bg_tb_trans_pane_cp1

0xdb27,	// (0x0003e0e6) grid_tb_ext_pane_ParamLimits

0xdb27,	// (0x0003e0e6) grid_tb_ext_pane

0xdb57,	// (0x0003e116) cell_tb_ext_pane_ParamLimits

0xdb57,	// (0x0003e116) cell_tb_ext_pane

0xdb6e,	// (0x0003e12d) cell_tb_ext_pane_g1_ParamLimits

0xdb6e,	// (0x0003e12d) cell_tb_ext_pane_g1

0xdb8b,	// (0x0003e14a) cell_tb_ext_pane_t1

0x2462,	// (0x00032a21) list_highlight_pane_cp11_ParamLimits

0x2462,	// (0x00032a21) list_highlight_pane_cp11

0x5e1b,	// (0x000363da) popup_uni_indicator_window_ParamLimits

0x5e1b,	// (0x000363da) popup_uni_indicator_window

0x26ea,	// (0x00032ca9) bg_popup_sub_pane_cp14

0xdba7,	// (0x0003e166) list_uniindi_pane

0xdbb3,	// (0x0003e172) uniindi_top_pane

0x2462,	// (0x00032a21) bg_uniindi_top_pane

0xdbd2,	// (0x0003e191) uniindi_top_pane_g1

0xdbe8,	// (0x0003e1a7) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x000402f7) uniindi_top_pane_g

0xdc12,	// (0x0003e1d1) uniindi_top_pane_t1

0xdc3c,	// (0x0003e1fb) list_single_uniindi_pane_ParamLimits

0xdc3c,	// (0x0003e1fb) list_single_uniindi_pane

0xc27b,	// (0x0003c83a) bg_uniindi_top_pane_g1

0xdc4e,	// (0x0003e20d) list_single_uniindi_pane_g1

0xdc61,	// (0x0003e220) list_single_uniindi_pane_t1

0x5c9f,	// (0x0003625e) control_bg_pane

0xdc86,	// (0x0003e245) bg_sctrl_sk_pane_cp1

0xdc8f,	// (0x0003e24e) bg_sctrl_sk_pane_cp2

0xdc98,	// (0x0003e257) control_bg_pane_g1

0xdca1,	// (0x0003e260) control_bg_pane_g2

0x0001,

0xfd41,	// (0x00040300) control_bg_pane_g

0xbcc4,	// (0x0003c283) cell_indicator_nsta_pane_g1_ParamLimits

0xbcd2,	// (0x0003c291) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0004006f) cell_indicator_nsta_pane_g_ParamLimits

0x4b1b,	// (0x000350da) form2_midp_time_pane_t1_ParamLimits

0x7959,	// (0x00037f18) main_idle_act4_pane_ParamLimits

0x7959,	// (0x00037f18) main_idle_act4_pane

0x7dc5,	// (0x00038384) popup_tb_extension_window_ParamLimits

0xdb47,	// (0x0003e106) tb_ext_find_pane_ParamLimits

0xdb47,	// (0x0003e106) tb_ext_find_pane

0xdcaa,	// (0x0003e269) ai_gene_pane_1_cp1

0x76cc,	// (0x00037c8b) ai_gene_pane_2_cp1

0xdcb2,	// (0x0003e271) list_single_idle_plugin_calendar_pane

0xdcbb,	// (0x0003e27a) list_single_idle_plugin_notification_pane

0xdcc4,	// (0x0003e283) list_single_idle_plugin_player_pane

0xdccd,	// (0x0003e28c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdccd,	// (0x0003e28c) list_single_idle_plugin_shortcut_pane

0xdcef,	// (0x0003e2ae) main_idle_act4_pane_t1

0xdd01,	// (0x0003e2c0) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x00040305) main_idle_act4_pane_t

0xdd13,	// (0x0003e2d2) middle_sk_idle_act4_pane_ParamLimits

0xdd13,	// (0x0003e2d2) middle_sk_idle_act4_pane

0xdd29,	// (0x0003e2e8) popup_clock_digital_analogue_window_cp2

0xdd43,	// (0x0003e302) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd43,	// (0x0003e302) shortcut_wheel_idle_act4_pane

0xc27b,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g1

0xc27b,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g2

0xc27b,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g3

0xc27b,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g4

0xc27b,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g5

0xdd57,	// (0x0003e316) shortcut_wheel_idle_act4_pane_g6

0xdd5f,	// (0x0003e31e) shortcut_wheel_idle_act4_pane_g7

0xdd67,	// (0x0003e326) shortcut_wheel_idle_act4_pane_g8

0xdd6f,	// (0x0003e32e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0004030a) shortcut_wheel_idle_act4_pane_g

0xc4eb,	// (0x0003caaa) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4eb,	// (0x0003caaa) middle_sk_idle_act4_pane_g1

0xddd3,	// (0x0003e392) middle_sk_idle_act4_pane_g2_ParamLimits

0xddd3,	// (0x0003e392) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0004032d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0004032d) middle_sk_idle_act4_pane_g

0xdddf,	// (0x0003e39e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdddf,	// (0x0003e39e) middle_sk_idle_act4_pane_t1

0xddfc,	// (0x0003e3bb) grid_ai_shortcut_pane_ParamLimits

0xddfc,	// (0x0003e3bb) grid_ai_shortcut_pane

0xde15,	// (0x0003e3d4) list_highlight_pane_cp16_ParamLimits

0xde15,	// (0x0003e3d4) list_highlight_pane_cp16

0xde22,	// (0x0003e3e1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde22,	// (0x0003e3e1) list_single_idle_plugin_shortcut_pane_g1

0xde2e,	// (0x0003e3ed) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde2e,	// (0x0003e3ed) list_single_idle_plugin_shortcut_pane_g2

0xde46,	// (0x0003e405) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde46,	// (0x0003e405) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x00040332) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x00040332) list_single_idle_plugin_shortcut_pane_g

0xde59,	// (0x0003e418) cell_ai_shortcut_pane_ParamLimits

0xde59,	// (0x0003e418) cell_ai_shortcut_pane

0xde7d,	// (0x0003e43c) cell_ai_shortcut_pane_g1_ParamLimits

0xde7d,	// (0x0003e43c) cell_ai_shortcut_pane_g1

0xdcaa,	// (0x0003e269) ai_gene_pane_1_cp2

0xde9f,	// (0x0003e45e) ai_gene_pane_2_cp2

0xdea7,	// (0x0003e466) list_highlight_pane_cp15

0xdeb0,	// (0x0003e46f) list_single_idle_plugin_calendar_pane_g1

0xdea7,	// (0x0003e466) list_highlight_pane_cp17

0xdeb8,	// (0x0003e477) list_single_idle_plugin_calendar_pane_g1_copy1

0xdec0,	// (0x0003e47f) list_single_idle_plugin_player_pane_g1

0xb61e,	// (0x0003bbdd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x00040339) list_single_idle_plugin_player_pane_g

0xdec8,	// (0x0003e487) list_single_idle_plugin_player_pane_t1

0xded6,	// (0x0003e495) list_single_idle_plugin_player_pane_t2

0xdee4,	// (0x0003e4a3) list_single_idle_plugin_player_pane_t3

0xdef2,	// (0x0003e4b1) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0004033e) list_single_idle_plugin_player_pane_t

0xdf00,	// (0x0003e4bf) wait_bar_pane_cp15

0xdf08,	// (0x0003e4c7) grid_ai_notification_pane

0xb61e,	// (0x0003bbdd) list_single_idle_plugin_notification_pane_g1

0xdf11,	// (0x0003e4d0) cell_ai_notification_pane_ParamLimits

0xdf11,	// (0x0003e4d0) cell_ai_notification_pane

0xdf1e,	// (0x0003e4dd) cell_ai_notification_pane_g1

0xdf26,	// (0x0003e4e5) cell_ai_notification_pane_t1

0xdf34,	// (0x0003e4f3) tb_ext_find_button_pane

0xdf3c,	// (0x0003e4fb) tb_ext_find_pane_g1

0xdf44,	// (0x0003e503) tb_ext_find_pane_t1

0x2b1d,	// (0x000330dc) tb_ext_find_button_pane_g1

0xdf52,	// (0x0003e511) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x00040347) tb_ext_find_button_pane_g

0xdcef,	// (0x0003e2ae) main_idle_act4_pane_t1_ParamLimits

0xdd01,	// (0x0003e2c0) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x00040305) main_idle_act4_pane_t_ParamLimits

0xdd29,	// (0x0003e2e8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd37,	// (0x0003e2f6) sat_plugin_idle_act4_pane_ParamLimits

0xdd37,	// (0x0003e2f6) sat_plugin_idle_act4_pane

0xdf5b,	// (0x0003e51a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf5b,	// (0x0003e51a) sat_plugin_idle_act4_pane_t1

0xdf6e,	// (0x0003e52d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf6e,	// (0x0003e52d) sat_plugin_idle_act4_pane_t2

0xdf81,	// (0x0003e540) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf81,	// (0x0003e540) sat_plugin_idle_act4_pane_t3

0xdf94,	// (0x0003e553) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf94,	// (0x0003e553) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0004034c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0004034c) sat_plugin_idle_act4_pane_t

0x5d64,	// (0x00036323) popup_battery_window_ParamLimits

0x5d64,	// (0x00036323) popup_battery_window

0x2462,	// (0x00032a21) bg_popup_sub_pane_cp25_ParamLimits

0x2462,	// (0x00032a21) bg_popup_sub_pane_cp25

0xdfa7,	// (0x0003e566) popup_battery_window_g1_ParamLimits

0xdfa7,	// (0x0003e566) popup_battery_window_g1

0xdfb3,	// (0x0003e572) popup_battery_window_t1_ParamLimits

0xdfb3,	// (0x0003e572) popup_battery_window_t1

0xdfc5,	// (0x0003e584) popup_battery_window_t2_ParamLimits

0xdfc5,	// (0x0003e584) popup_battery_window_t2

0x0001,

0xfd96,	// (0x00040355) popup_battery_window_t_ParamLimits

0xfd96,	// (0x00040355) popup_battery_window_t

0x7595,	// (0x00037b54) midp_canvas_pane_ParamLimits

0x760e,	// (0x00037bcd) midp_keypad_pane_ParamLimits

0x760e,	// (0x00037bcd) midp_keypad_pane

0x977a,	// (0x00039d39) main_midp_pane_ParamLimits

0xbd2e,	// (0x0003c2ed) signal_pane_g2_cp_ParamLimits

0xdfe2,	// (0x0003e5a1) aid_size_cell_midp_keypad_ParamLimits

0xdfe2,	// (0x0003e5a1) aid_size_cell_midp_keypad

0xdffc,	// (0x0003e5bb) midp_keyp_game_grid_pane_ParamLimits

0xdffc,	// (0x0003e5bb) midp_keyp_game_grid_pane

0xe01c,	// (0x0003e5db) midp_keyp_rocker_pane_ParamLimits

0xe01c,	// (0x0003e5db) midp_keyp_rocker_pane

0xe055,	// (0x0003e614) midp_keyp_sk_left_pane_ParamLimits

0xe055,	// (0x0003e614) midp_keyp_sk_left_pane

0xe0af,	// (0x0003e66e) midp_keyp_sk_right_pane_ParamLimits

0xe0af,	// (0x0003e66e) midp_keyp_sk_right_pane

0x22c8,	// (0x00032887) bg_button_pane_cp03

0xe109,	// (0x0003e6c8) midp_keyp_sk_left_pane_g1

0x22c8,	// (0x00032887) bg_button_pane_cp04

0xe109,	// (0x0003e6c8) midp_keyp_sk_right_pane_g1

0xc27b,	// (0x0003c83a) midp_keyp_rocker_pane_g1

0xe112,	// (0x0003e6d1) keyp_game_cell_pane_ParamLimits

0xe112,	// (0x0003e6d1) keyp_game_cell_pane

0x22c8,	// (0x00032887) bg_button_pane_cp02

0xe125,	// (0x0003e6e4) keyp_game_cell_pane_g1

0x5d9a,	// (0x00036359) popup_fep_vkb2_window_ParamLimits

0x5d9a,	// (0x00036359) popup_fep_vkb2_window

0x8b6f,	// (0x0003912e) aid_size_cell_vkb2_ParamLimits

0x8b6f,	// (0x0003912e) aid_size_cell_vkb2

0x8bc3,	// (0x00039182) popup_fep_vkb2_window_g1_ParamLimits

0x8bc3,	// (0x00039182) popup_fep_vkb2_window_g1

0x8c0b,	// (0x000391ca) vkb2_area_bottom_pane_ParamLimits

0x8c0b,	// (0x000391ca) vkb2_area_bottom_pane

0x8c57,	// (0x00039216) vkb2_area_keypad_pane_ParamLimits

0x8c57,	// (0x00039216) vkb2_area_keypad_pane

0x8c99,	// (0x00039258) vkb2_area_top_pane_ParamLimits

0x8c99,	// (0x00039258) vkb2_area_top_pane

0x8d13,	// (0x000392d2) vkb2_top_entry_pane_ParamLimits

0x8d13,	// (0x000392d2) vkb2_top_entry_pane

0x8d3d,	// (0x000392fc) vkb2_top_grid_left_pane_ParamLimits

0x8d3d,	// (0x000392fc) vkb2_top_grid_left_pane

0x8d5b,	// (0x0003931a) vkb2_top_grid_right_pane_ParamLimits

0x8d5b,	// (0x0003931a) vkb2_top_grid_right_pane

0x8d79,	// (0x00039338) vkb2_cell_keypad_pane_ParamLimits

0x8d79,	// (0x00039338) vkb2_cell_keypad_pane

0x8e4a,	// (0x00039409) vkb2_area_bottom_grid_pane_ParamLimits

0x8e4a,	// (0x00039409) vkb2_area_bottom_grid_pane

0x8e70,	// (0x0003942f) vkb2_area_bottom_pane_g1_ParamLimits

0x8e70,	// (0x0003942f) vkb2_area_bottom_pane_g1

0x8e94,	// (0x00039453) vkb2_area_bottom_pane_g2_ParamLimits

0x8e94,	// (0x00039453) vkb2_area_bottom_pane_g2

0x8ec2,	// (0x00039481) vkb2_area_bottom_pane_g3_ParamLimits

0x8ec2,	// (0x00039481) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0004035a) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0004035a) vkb2_area_bottom_pane_g

0x8f23,	// (0x000394e2) vkb2_top_cell_left_pane_ParamLimits

0x8f23,	// (0x000394e2) vkb2_top_cell_left_pane

0xe136,	// (0x0003e6f5) vkb2_top_entry_pane_g1_ParamLimits

0xe136,	// (0x0003e6f5) vkb2_top_entry_pane_g1

0xe144,	// (0x0003e703) vkb2_top_entry_pane_t1_ParamLimits

0xe144,	// (0x0003e703) vkb2_top_entry_pane_t1

0xe176,	// (0x0003e735) vkb2_top_entry_pane_t2_ParamLimits

0xe176,	// (0x0003e735) vkb2_top_entry_pane_t2

0xe1a8,	// (0x0003e767) vkb2_top_entry_pane_t3_ParamLimits

0xe1a8,	// (0x0003e767) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x00040361) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x00040361) vkb2_top_entry_pane_t

0x8f70,	// (0x0003952f) vkb2_top_grid_right_pane_g1_ParamLimits

0x8f70,	// (0x0003952f) vkb2_top_grid_right_pane_g1

0x8f86,	// (0x00039545) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f86,	// (0x00039545) vkb2_top_grid_right_pane_g2

0x8f9e,	// (0x0003955d) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f9e,	// (0x0003955d) vkb2_top_grid_right_pane_g3

0x8fb6,	// (0x00039575) vkb2_top_grid_right_pane_g4_ParamLimits

0x8fb6,	// (0x00039575) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x00040368) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x00040368) vkb2_top_grid_right_pane_g

0x8fcc,	// (0x0003958b) vkb2_top_cell_left_pane_g1

0x8fe3,	// (0x000395a2) vkb2_cell_keypad_pane_g1_ParamLimits

0x8fe3,	// (0x000395a2) vkb2_cell_keypad_pane_g1

0xe1cc,	// (0x0003e78b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1cc,	// (0x0003e78b) vkb2_cell_keypad_pane_t1

0x8ff1,	// (0x000395b0) vkb2_cell_bottom_grid_pane_ParamLimits

0x8ff1,	// (0x000395b0) vkb2_cell_bottom_grid_pane

0x902a,	// (0x000395e9) vkb2_cell_bottom_grid_pane_g1

0xdd77,	// (0x0003e336) aid_call2_pane_cp02

0xdd7f,	// (0x0003e33e) aid_call_pane_cp02

0xdd87,	// (0x0003e346) clock_digital_number_pane_cp10

0xdd8f,	// (0x0003e34e) clock_digital_number_pane_cp11

0xdd97,	// (0x0003e356) clock_digital_number_pane_cp12

0xdd9f,	// (0x0003e35e) clock_digital_number_pane_cp13

0xdda7,	// (0x0003e366) clock_digital_separator_pane_cp10

0x2b1d,	// (0x000330dc) popup_clock_digital_analogue_window_cp2_g1

0x2b1d,	// (0x000330dc) popup_clock_digital_analogue_window_cp2_g2

0xddaf,	// (0x0003e36e) popup_clock_digital_analogue_window_cp2_g3

0x2b1d,	// (0x000330dc) popup_clock_digital_analogue_window_cp2_g4

0xddaf,	// (0x0003e36e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0004031d) popup_clock_digital_analogue_window_cp2_g

0xddb7,	// (0x0003e376) popup_clock_digital_analogue_window_cp2_t1

0xddc5,	// (0x0003e384) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x00040328) popup_clock_digital_analogue_window_cp2_t

0xc27b,	// (0x0003c83a) clock_digital_number_pane_cp10_g1

0xc27b,	// (0x0003c83a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0004010b) clock_digital_number_pane_cp10_g

0xc27b,	// (0x0003c83a) clock_digital_separator_pane_cp10_g1

0xc27b,	// (0x0003c83a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0004010b) clock_digital_separator_pane_cp10_g

0xdbf4,	// (0x0003e1b3) uniindi_top_pane_g3

0xdc05,	// (0x0003e1c4) uniindi_top_pane_g4

0x8e04,	// (0x000393c3) vkb2_row_keypad_pane_ParamLimits

0x8e04,	// (0x000393c3) vkb2_row_keypad_pane

0x9046,	// (0x00039605) vkb2_cell_t_keypad_pane_ParamLimits

0x9046,	// (0x00039605) vkb2_cell_t_keypad_pane

0x9056,	// (0x00039615) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9056,	// (0x00039615) vkb2_cell_t_keypad_pane_cp08

0x9069,	// (0x00039628) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9069,	// (0x00039628) vkb2_cell_t_keypad_pane_cp09

0x907d,	// (0x0003963c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x907d,	// (0x0003963c) vkb2_cell_t_keypad_pane_cp01

0x908e,	// (0x0003964d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x908e,	// (0x0003964d) vkb2_cell_t_keypad_pane_cp02

0x909f,	// (0x0003965e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x909f,	// (0x0003965e) vkb2_cell_t_keypad_pane_cp03

0x90b0,	// (0x0003966f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90b0,	// (0x0003966f) vkb2_cell_t_keypad_pane_cp04

0x90c1,	// (0x00039680) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90c1,	// (0x00039680) vkb2_cell_t_keypad_pane_cp05

0x90d2,	// (0x00039691) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x90d2,	// (0x00039691) vkb2_cell_t_keypad_pane_cp06

0x90e3,	// (0x000396a2) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x90e3,	// (0x000396a2) vkb2_cell_t_keypad_pane_cp07

0x90f4,	// (0x000396b3) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x90f4,	// (0x000396b3) vkb2_cell_t_keypad_pane_cp10

0x878c,	// (0x00038d4b) vkb2_cell_t_keypad_pane_g1

0xe1e3,	// (0x0003e7a2) vkb2_cell_t_keypad_pane_t1

0x5c9f,	// (0x0003625e) popup_grid_graphic2_window

0xe1f5,	// (0x0003e7b4) aid_size_cell_graphic2_ParamLimits

0xe1f5,	// (0x0003e7b4) aid_size_cell_graphic2

0xe22d,	// (0x0003e7ec) bg_popup_window_pane_cp21_ParamLimits

0xe22d,	// (0x0003e7ec) bg_popup_window_pane_cp21

0xe23b,	// (0x0003e7fa) graphic2_pages_pane_ParamLimits

0xe23b,	// (0x0003e7fa) graphic2_pages_pane

0xe281,	// (0x0003e840) grid_graphic2_control_pane_ParamLimits

0xe281,	// (0x0003e840) grid_graphic2_control_pane

0xe2bf,	// (0x0003e87e) grid_graphic2_pane_ParamLimits

0xe2bf,	// (0x0003e87e) grid_graphic2_pane

0xe333,	// (0x0003e8f2) cell_graphic2_pane

0x5c9f,	// (0x0003625e) main_comp_mode_pane

0xd446,	// (0x0003da05) list_ai3_gene_pane_ParamLimits

0xd833,	// (0x0003ddf2) bg_popup_window_pane_cp19_ParamLimits

0xd83f,	// (0x0003ddfe) bg_touch_area_indi_pane_ParamLimits

0xd83f,	// (0x0003ddfe) bg_touch_area_indi_pane

0xd855,	// (0x0003de14) bg_touch_area_indi_pane_cp01_ParamLimits

0xd855,	// (0x0003de14) bg_touch_area_indi_pane_cp01

0xd86b,	// (0x0003de2a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd86b,	// (0x0003de2a) bg_touch_area_indi_pane_cp02

0xd881,	// (0x0003de40) bg_touch_area_indi_pane_cp03_ParamLimits

0xd881,	// (0x0003de40) bg_touch_area_indi_pane_cp03

0xd89b,	// (0x0003de5a) popup_slider_window_g1_ParamLimits

0xd8b7,	// (0x0003de76) popup_slider_window_g2_ParamLimits

0xd8d3,	// (0x0003de92) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x000402b2) popup_slider_window_g_ParamLimits

0xd939,	// (0x0003def8) popup_slider_window_t1_ParamLimits

0xd9ad,	// (0x0003df6c) small_volume_slider_vertical_pane_ParamLimits

0xe333,	// (0x0003e8f2) cell_graphic2_pane_ParamLimits

0xe382,	// (0x0003e941) bg_button_pane_cp10_ParamLimits

0xe382,	// (0x0003e941) bg_button_pane_cp10

0xe395,	// (0x0003e954) bg_button_pane_cp11_ParamLimits

0xe395,	// (0x0003e954) bg_button_pane_cp11

0xe3a8,	// (0x0003e967) graphic2_pages_pane_g1_ParamLimits

0xe3a8,	// (0x0003e967) graphic2_pages_pane_g1

0xe3c3,	// (0x0003e982) graphic2_pages_pane_g2_ParamLimits

0xe3c3,	// (0x0003e982) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x00040376) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x00040376) graphic2_pages_pane_g

0xe3db,	// (0x0003e99a) graphic2_pages_pane_t1_ParamLimits

0xe3db,	// (0x0003e99a) graphic2_pages_pane_t1

0xe3f3,	// (0x0003e9b2) cell_graphic2_control_pane_ParamLimits

0xe3f3,	// (0x0003e9b2) cell_graphic2_control_pane

0xe411,	// (0x0003e9d0) cell_graphic2_pane_g1_ParamLimits

0xe411,	// (0x0003e9d0) cell_graphic2_pane_g1

0xe41e,	// (0x0003e9dd) cell_graphic2_pane_g2_ParamLimits

0xe41e,	// (0x0003e9dd) cell_graphic2_pane_g2

0xe42b,	// (0x0003e9ea) cell_graphic2_pane_g3_ParamLimits

0xe42b,	// (0x0003e9ea) cell_graphic2_pane_g3

0xe438,	// (0x0003e9f7) cell_graphic2_pane_g4_ParamLimits

0xe438,	// (0x0003e9f7) cell_graphic2_pane_g4

0xe445,	// (0x0003ea04) cell_graphic2_pane_g5_ParamLimits

0xe445,	// (0x0003ea04) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0004037b) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0004037b) cell_graphic2_pane_g

0xe460,	// (0x0003ea1f) cell_graphic2_pane_t1_ParamLimits

0xe460,	// (0x0003ea1f) cell_graphic2_pane_t1

0x9d15,	// (0x0003a2d4) grid_highlight_pane_cp11_ParamLimits

0x9d15,	// (0x0003a2d4) grid_highlight_pane_cp11

0x2462,	// (0x00032a21) bg_button_pane_cp05

0xe497,	// (0x0003ea56) cell_graphic2_control_pane_g1

0xc27b,	// (0x0003c83a) bg_touch_area_indi_pane_g1

0xe4bf,	// (0x0003ea7e) aid_cmod_rocker_key_size

0xe4c9,	// (0x0003ea88) aid_cmode_itu_key_size

0xe4d3,	// (0x0003ea92) main_cmode_video_pane

0xe4dd,	// (0x0003ea9c) main_comp_mode_itu_pane

0xe4e9,	// (0x0003eaa8) main_comp_mode_rocker_pane

0xe4f5,	// (0x0003eab4) cell_cmode_rocker_pane_ParamLimits

0xe4f5,	// (0x0003eab4) cell_cmode_rocker_pane

0xe507,	// (0x0003eac6) cell_cmode_itu_pane_ParamLimits

0xe507,	// (0x0003eac6) cell_cmode_itu_pane

0x26ea,	// (0x00032ca9) bg_button_pane_cp06_ParamLimits

0x26ea,	// (0x00032ca9) bg_button_pane_cp06

0xc4eb,	// (0x0003caaa) cell_cmode_rocker_pane_g1_ParamLimits

0xc4eb,	// (0x0003caaa) cell_cmode_rocker_pane_g1

0xda51,	// (0x0003e010) cell_cmode_rocker_pane_g2_ParamLimits

0xda51,	// (0x0003e010) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0004038b) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0004038b) cell_cmode_rocker_pane_g

0x22c8,	// (0x00032887) bg_button_pane_cp07

0xe51c,	// (0x0003eadb) cell_cmode_itu_pane_g1

0xe525,	// (0x0003eae4) cell_cmode_itu_pane_t1

0xe533,	// (0x0003eaf2) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x00040390) cell_cmode_itu_pane_t

0xdc76,	// (0x0003e235) aid_touch_ctrl_left

0xdc7e,	// (0x0003e23d) aid_touch_ctrl_right

0x22c8,	// (0x00032887) compa_mode_pane

0xe541,	// (0x0003eb00) aid_cmod_rocker_key_size_cp

0xe54b,	// (0x0003eb0a) aid_cmode_itu_key_size_cp

0xe555,	// (0x0003eb14) compa_mode_pane_g1

0xe55d,	// (0x0003eb1c) compa_mode_pane_g2

0xe565,	// (0x0003eb24) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x00040395) compa_mode_pane_g

0xe56d,	// (0x0003eb2c) main_comp_mode_itu_pane_cp

0xe575,	// (0x0003eb34) main_comp_mode_rocker_pane_cp

0xe57d,	// (0x0003eb3c) cell_cmode_itu_pane_cp_ParamLimits

0xe57d,	// (0x0003eb3c) cell_cmode_itu_pane_cp

0xe592,	// (0x0003eb51) cell_cmode_rocker_pane_cp_ParamLimits

0xe592,	// (0x0003eb51) cell_cmode_rocker_pane_cp

0x26ea,	// (0x00032ca9) bg_button_pane_cp06_cp_ParamLimits

0x26ea,	// (0x00032ca9) bg_button_pane_cp06_cp

0xc4eb,	// (0x0003caaa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4eb,	// (0x0003caaa) cell_cmode_rocker_pane_g1_cp

0xc27b,	// (0x0003c83a) cell_cmode_rocker_pane_g2_cp

0x22c8,	// (0x00032887) bg_button_pane_cp07_cp

0xe5a4,	// (0x0003eb63) cell_cmode_itu_pane_g1_cp

0xe5ad,	// (0x0003eb6c) cell_cmode_itu_pane_t1_cp

0xe5ad,	// (0x0003eb6c) cell_cmode_itu_pane_t2_cp

0xb1aa,	// (0x0003b769) settings_code_pane_cp2

0x2338,	// (0x000328f7) bg_popup_window_pane_cp3_ParamLimits

0x257b,	// (0x00032b3a) heading_pane_cp3_ParamLimits

0x2587,	// (0x00032b46) listscroll_popup_graphic_pane_ParamLimits

0x8535,	// (0x00038af4) fep_hwr_aid_pane_ParamLimits

0x8aca,	// (0x00039089) aid_touch_sctrl_top_ParamLimits

0x8ae5,	// (0x000390a4) sctrl_sk_top_pane_g1_ParamLimits

0x878c,	// (0x00038d4b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x000402cb) sctrl_sk_top_pane_g_ParamLimits

0x8af2,	// (0x000390b1) sctrl_sk_top_pane_t1_ParamLimits

0x8aca,	// (0x00039089) aid_touch_sctrl_bottom_ParamLimits

0x8af2,	// (0x000390b1) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbc0,	// (0x0003e17f) aid_area_touch_clock

0x8cdb,	// (0x0003929a) aid_vkb2_area_top_pane_cell_ParamLimits

0x8cdb,	// (0x0003929a) aid_vkb2_area_top_pane_cell

0x8e26,	// (0x000393e5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8e26,	// (0x000393e5) aid_vkb2_area_bottom_pane_cell

0xe12e,	// (0x0003e6ed) popup_char_count_window

0xe5bb,	// (0x0003eb7a) popup_char_count_window_g1

0xe5c4,	// (0x0003eb83) popup_char_count_window_g2

0xe5cd,	// (0x0003eb8c) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0004039c) popup_char_count_window_g

0xe5d6,	// (0x0003eb95) popup_char_count_window_t1

0x8ba1,	// (0x00039160) popup_fep_char_preview_window_ParamLimits

0x8ba1,	// (0x00039160) popup_fep_char_preview_window

0x8cf9,	// (0x000392b8) vkb2_top_candi_pane_ParamLimits

0x8cf9,	// (0x000392b8) vkb2_top_candi_pane

0xe5e4,	// (0x0003eba3) cell_vkb2_top_candi_pane_ParamLimits

0xe5e4,	// (0x0003eba3) cell_vkb2_top_candi_pane

0x9109,	// (0x000396c8) bg_popup_fep_char_preview_window_ParamLimits

0x9109,	// (0x000396c8) bg_popup_fep_char_preview_window

0x9117,	// (0x000396d6) popup_fep_char_preview_window_t1_ParamLimits

0x9117,	// (0x000396d6) popup_fep_char_preview_window_t1

0xe631,	// (0x0003ebf0) bg_popup_fep_char_preview_window_g1

0xe639,	// (0x0003ebf8) bg_popup_fep_char_preview_window_g2

0xe641,	// (0x0003ec00) bg_popup_fep_char_preview_window_g3

0xe649,	// (0x0003ec08) bg_popup_fep_char_preview_window_g4

0xe651,	// (0x0003ec10) bg_popup_fep_char_preview_window_g5

0x9151,	// (0x00039710) bg_popup_fep_char_preview_window_g6

0xe659,	// (0x0003ec18) bg_popup_fep_char_preview_window_g7

0xe661,	// (0x0003ec20) bg_popup_fep_char_preview_window_g8

0xe669,	// (0x0003ec28) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x000403a3) bg_popup_fep_char_preview_window_g

0x878c,	// (0x00038d4b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x878c,	// (0x00038d4b) cell_vkb2_top_candi_pane_g1

0x879a,	// (0x00038d59) cell_vkb2_top_candi_pane_g2_ParamLimits

0x879a,	// (0x00038d59) cell_vkb2_top_candi_pane_g2

0xd708,	// (0x0003dcc7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd708,	// (0x0003dcc7) cell_vkb2_top_candi_pane_g3

0x9159,	// (0x00039718) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9159,	// (0x00039718) cell_vkb2_top_candi_pane_g4

0xc9d7,	// (0x0003cf96) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9d7,	// (0x0003cf96) cell_vkb2_top_candi_pane_g5

0x917a,	// (0x00039739) cell_vkb2_top_candi_pane_g6_ParamLimits

0x917a,	// (0x00039739) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x000403b6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x000403b6) cell_vkb2_top_candi_pane_g

0x9188,	// (0x00039747) cell_vkb2_top_candi_pane_t1

0x8245,	// (0x00038804) aid_size_touch_slider_mark_ParamLimits

0x8245,	// (0x00038804) aid_size_touch_slider_mark

0xe271,	// (0x0003e830) grid_graphic2_catg_pane_ParamLimits

0xe271,	// (0x0003e830) grid_graphic2_catg_pane

0xe30f,	// (0x0003e8ce) popup_grid_graphic2_window_t1_ParamLimits

0xe30f,	// (0x0003e8ce) popup_grid_graphic2_window_t1

0xe321,	// (0x0003e8e0) popup_grid_graphic2_window_t2_ParamLimits

0xe321,	// (0x0003e8e0) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x00040371) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x00040371) popup_grid_graphic2_window_t

0x2462,	// (0x00032a21) bg_button_pane_cp05_ParamLimits

0xe497,	// (0x0003ea56) cell_graphic2_control_pane_g1_ParamLimits

0xe671,	// (0x0003ec30) cell_graphic2_catg_pane_ParamLimits

0xe671,	// (0x0003ec30) cell_graphic2_catg_pane

0x22c8,	// (0x00032887) bg_button_pane_cp12

0xe683,	// (0x0003ec42) cell_graphic2_catg_pane_g1

0xdb8b,	// (0x0003e14a) cell_tb_ext_pane_t1_ParamLimits

0x8f43,	// (0x00039502) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f43,	// (0x00039502) vkb2_top_cell_right_narrow_pane

0x8f5b,	// (0x0003951a) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f5b,	// (0x0003951a) vkb2_top_cell_right_wide_pane

0x8527,	// (0x00038ae6) bg_vkb2_func_pane_ParamLimits

0x8527,	// (0x00038ae6) bg_vkb2_func_pane

0x8fcc,	// (0x0003958b) vkb2_top_cell_left_pane_g1_ParamLimits

0x8527,	// (0x00038ae6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8527,	// (0x00038ae6) bg_vkb2_fuc_pane_cp03

0x902a,	// (0x000395e9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ca9,	// (0x0003a268) bg_vkb2_func_pane_g1

0x9cb1,	// (0x0003a270) bg_vkb2_func_pane_g2

0x9cc1,	// (0x0003a280) bg_vkb2_func_pane_g3

0x9cb9,	// (0x0003a278) bg_vkb2_func_pane_g4

0x9cc9,	// (0x0003a288) bg_vkb2_func_pane_g5

0x9cd1,	// (0x0003a290) bg_vkb2_func_pane_g6

0x9cd9,	// (0x0003a298) bg_vkb2_func_pane_g7

0x9ce1,	// (0x0003a2a0) bg_vkb2_func_pane_g8

0x9ca1,	// (0x0003a260) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x000403c3) bg_vkb2_func_pane_g

0x8527,	// (0x00038ae6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8527,	// (0x00038ae6) bg_vkb2_fuc_pane_cp01

0x8fcc,	// (0x0003958b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8fcc,	// (0x0003958b) vkb2_top_cell_right_wide_pane_g1

0x8527,	// (0x00038ae6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8527,	// (0x00038ae6) bg_vkb2_fuc_pane_cp02

0x902a,	// (0x000395e9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x902a,	// (0x000395e9) vkb2_top_cell_right_narrow_pane_g1

0xd7ad,	// (0x0003dd6c) aid_touch_area_decrease_ParamLimits

0xd7ad,	// (0x0003dd6c) aid_touch_area_decrease

0xd7d1,	// (0x0003dd90) aid_touch_area_increase_ParamLimits

0xd7d1,	// (0x0003dd90) aid_touch_area_increase

0xd7e9,	// (0x0003dda8) aid_touch_area_mute_ParamLimits

0xd7e9,	// (0x0003dda8) aid_touch_area_mute

0xd805,	// (0x0003ddc4) aid_touch_area_slider_ParamLimits

0xd805,	// (0x0003ddc4) aid_touch_area_slider

0xd8ef,	// (0x0003deae) popup_slider_window_g4_ParamLimits

0xd8ef,	// (0x0003deae) popup_slider_window_g4

0xd907,	// (0x0003dec6) popup_slider_window_g5_ParamLimits

0xd907,	// (0x0003dec6) popup_slider_window_g5

0xd929,	// (0x0003dee8) popup_slider_window_g6_ParamLimits

0xd929,	// (0x0003dee8) popup_slider_window_g6

0xd967,	// (0x0003df26) popup_slider_window_t2_ParamLimits

0xd967,	// (0x0003df26) popup_slider_window_t2

0x0001,

0xfd00,	// (0x000402bf) popup_slider_window_t_ParamLimits

0xfd00,	// (0x000402bf) popup_slider_window_t

0xd97f,	// (0x0003df3e) slider_pane_ParamLimits

0xd97f,	// (0x0003df3e) slider_pane

0xe68c,	// (0x0003ec4b) slider_pane_g1_ParamLimits

0xe68c,	// (0x0003ec4b) slider_pane_g1

0xe6a0,	// (0x0003ec5f) slider_pane_g2_ParamLimits

0xe6a0,	// (0x0003ec5f) slider_pane_g2

0xe6b6,	// (0x0003ec75) slider_pane_g3_ParamLimits

0xe6b6,	// (0x0003ec75) slider_pane_g3

0x0003,

0xfe17,	// (0x000403d6) slider_pane_g_ParamLimits

0xfe17,	// (0x000403d6) slider_pane_g

0x7e21,	// (0x000383e0) popup_tb_float_extension_window_ParamLimits

0x7e21,	// (0x000383e0) popup_tb_float_extension_window

0xe6e2,	// (0x0003eca1) aid_size_cell_tb_float_ext

0x22c8,	// (0x00032887) bg_popup_sub_window_cp28

0xe6ee,	// (0x0003ecad) grid_tb_float_ext_pane

0xe6f8,	// (0x0003ecb7) cell_tb_float_ext_pane_ParamLimits

0xe6f8,	// (0x0003ecb7) cell_tb_float_ext_pane

0xe712,	// (0x0003ecd1) cell_tb_float_ext_pane_g1

0xe71b,	// (0x0003ecda) grid_highlight_pane_cp12

0x8676,	// (0x00038c35) cell_last_hwr_side_pane_ParamLimits

0x8676,	// (0x00038c35) cell_last_hwr_side_pane

0xc27b,	// (0x0003c83a) cell_last_hwr_side_pane_g1

0xe724,	// (0x0003ece3) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x000403df) cell_last_hwr_side_pane_g

0x8ef2,	// (0x000394b1) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ef2,	// (0x000394b1) vkb2_area_bottom_space_btn_pane

0x878c,	// (0x00038d4b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1e3,	// (0x0003e7a2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9188,	// (0x00039747) cell_vkb2_top_candi_pane_t1_ParamLimits

0x91a7,	// (0x00039766) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x91a7,	// (0x00039766) vkb2_area_bottom_space_btn_pane_g1

0x91e1,	// (0x000397a0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x91e1,	// (0x000397a0) vkb2_area_bottom_space_btn_pane_g2

0x9217,	// (0x000397d6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9217,	// (0x000397d6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x000403e4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x000403e4) vkb2_area_bottom_space_btn_pane_g

0x85ea,	// (0x00038ba9) cel_fep_hwr_func_pane_ParamLimits

0x85ea,	// (0x00038ba9) cel_fep_hwr_func_pane

0x8626,	// (0x00038be5) cell_hwr_side_button_pane_ParamLimits

0x8626,	// (0x00038be5) cell_hwr_side_button_pane

0xdbc0,	// (0x0003e17f) aid_area_touch_clock_ParamLimits

0x2462,	// (0x00032a21) bg_uniindi_top_pane_ParamLimits

0xdbd2,	// (0x0003e191) uniindi_top_pane_g1_ParamLimits

0xdbe8,	// (0x0003e1a7) uniindi_top_pane_g2_ParamLimits

0xdbf4,	// (0x0003e1b3) uniindi_top_pane_g3_ParamLimits

0xdc05,	// (0x0003e1c4) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x000402f7) uniindi_top_pane_g_ParamLimits

0xdc12,	// (0x0003e1d1) uniindi_top_pane_t1_ParamLimits

0x2462,	// (0x00032a21) bg_vkb2_func_pane_cp01_ParamLimits

0x2462,	// (0x00032a21) bg_vkb2_func_pane_cp01

0xe72d,	// (0x0003ecec) cel_fep_hwr_func_pane_g1_ParamLimits

0xe72d,	// (0x0003ecec) cel_fep_hwr_func_pane_g1

0x2462,	// (0x00032a21) bg_vkb2_func_pane_cp02_ParamLimits

0x2462,	// (0x00032a21) bg_vkb2_func_pane_cp02

0xe72d,	// (0x0003ecec) cell_hwr_side_button_pane_g1_ParamLimits

0xe72d,	// (0x0003ecec) cell_hwr_side_button_pane_g1

0x9b25,	// (0x0003a0e4) status_pane_g4_ParamLimits

0x9b25,	// (0x0003a0e4) status_pane_g4

0x9b3f,	// (0x0003a0fe) status_pane_t1

0xbfb6,	// (0x0003c575) form2_midp_gauge_slider_cont_pane

0xbfbe,	// (0x0003c57d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfd0,	// (0x0003c58f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfe2,	// (0x0003c5a1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x000400be) form2_midp_gauge_slider_pane_t_ParamLimits

0xbff4,	// (0x0003c5b3) form2_midp_slider_pane_ParamLimits

0x8b61,	// (0x00039120) aid_size_cell_func_vkb2_ParamLimits

0x8b61,	// (0x00039120) aid_size_cell_func_vkb2

0xe6ce,	// (0x0003ec8d) slider_pane_g4_ParamLimits

0xe6ce,	// (0x0003ec8d) slider_pane_g4

0x9261,	// (0x00039820) form2_midp_gauge_slider_pane_t2_cp01

0x926f,	// (0x0003982e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x926f,	// (0x0003982e) form2_midp_gauge_slider_pane_t3_cp01

0x928c,	// (0x0003984b) form2_midp_slider_pane_cp01

0x22c8,	// (0x00032887) navi_smil_pane

0xe766,	// (0x0003ed25) navi_smil_pane_g1

0xe76e,	// (0x0003ed2d) navi_smil_pane_t1

0xe73b,	// (0x0003ecfa) form2_midp_slider_pane_g1

0xe744,	// (0x0003ed03) form2_midp_slider_pane_g2

0xe74c,	// (0x0003ed0b) form2_midp_slider_pane_g3

0xe73b,	// (0x0003ecfa) form2_midp_slider_pane_g4

0xe754,	// (0x0003ed13) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x000403ed) form2_midp_slider_pane_g

0x9251,	// (0x00039810) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9251,	// (0x00039810) vkb2_area_bottom_space_btn_pane_g4

0x9954,	// (0x00039f13) lc0_navi_pane_ParamLimits

0x9954,	// (0x00039f13) lc0_navi_pane

0x99ca,	// (0x00039f89) lc0_stat_indi_pane_ParamLimits

0x99ca,	// (0x00039f89) lc0_stat_indi_pane

0x99e1,	// (0x00039fa0) ls0_title_pane_ParamLimits

0x99e1,	// (0x00039fa0) ls0_title_pane

0x26ea,	// (0x00032ca9) bg_popup_sub_pane_cp14_ParamLimits

0xdba7,	// (0x0003e166) list_uniindi_pane_ParamLimits

0xdbb3,	// (0x0003e172) uniindi_top_pane_ParamLimits

0xdc4e,	// (0x0003e20d) list_single_uniindi_pane_g1_ParamLimits

0xdc61,	// (0x0003e220) list_single_uniindi_pane_t1_ParamLimits

0x9295,	// (0x00039854) lc0_stat_clock_pane_ParamLimits

0x9295,	// (0x00039854) lc0_stat_clock_pane

0xe77c,	// (0x0003ed3b) lc0_stat_indi_pane_g1_ParamLimits

0xe77c,	// (0x0003ed3b) lc0_stat_indi_pane_g1

0xe789,	// (0x0003ed48) lc0_stat_indi_pane_g2_ParamLimits

0xe789,	// (0x0003ed48) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x000403f8) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x000403f8) lc0_stat_indi_pane_g

0x92a2,	// (0x00039861) lc0_uni_indicator_pane_ParamLimits

0x92a2,	// (0x00039861) lc0_uni_indicator_pane

0xe796,	// (0x0003ed55) ls0_title_pane_g1_ParamLimits

0xe796,	// (0x0003ed55) ls0_title_pane_g1

0xe7aa,	// (0x0003ed69) ls0_title_pane_t1_ParamLimits

0xe7aa,	// (0x0003ed69) ls0_title_pane_t1

0x92af,	// (0x0003986e) lc0_uni_indicator_pane_g1_ParamLimits

0x92af,	// (0x0003986e) lc0_uni_indicator_pane_g1

0xe7e0,	// (0x0003ed9f) lc0_stat_clock_pane_t1

0x5c9f,	// (0x0003625e) main_ai5_pane

0xe7ee,	// (0x0003edad) ai5_sk_pane_ParamLimits

0xe7ee,	// (0x0003edad) ai5_sk_pane

0xe7fb,	// (0x0003edba) cell_ai5_widget_pane_ParamLimits

0xe7fb,	// (0x0003edba) cell_ai5_widget_pane

0xe8ad,	// (0x0003ee6c) aid_size_cell_widget_grid

0xe8bb,	// (0x0003ee7a) bg_ai5_widget_pane_ParamLimits

0xe8bb,	// (0x0003ee7a) bg_ai5_widget_pane

0xe933,	// (0x0003eef2) cell_ai5_widget_pane_g2

0xe947,	// (0x0003ef06) cell_ai5_widget_pane_g3

0xe961,	// (0x0003ef20) cell_ai5_widget_pane_g4

0xe971,	// (0x0003ef30) cell_ai5_widget_pane_g5

0xe981,	// (0x0003ef40) cell_ai5_widget_pane_g6

0xe98d,	// (0x0003ef4c) cell_ai5_widget_pane_g7

0xe9d5,	// (0x0003ef94) cell_ai5_widget_pane_t1_ParamLimits

0xe9d5,	// (0x0003ef94) cell_ai5_widget_pane_t1

0xe9f2,	// (0x0003efb1) cell_ai5_widget_pane_t2_ParamLimits

0xe9f2,	// (0x0003efb1) cell_ai5_widget_pane_t2

0xea0a,	// (0x0003efc9) cell_ai5_widget_pane_t3_ParamLimits

0xea0a,	// (0x0003efc9) cell_ai5_widget_pane_t3

0xea22,	// (0x0003efe1) cell_ai5_widget_pane_t4_ParamLimits

0xea22,	// (0x0003efe1) cell_ai5_widget_pane_t4

0xea48,	// (0x0003f007) cell_ai5_widget_pane_t5_ParamLimits

0xea48,	// (0x0003f007) cell_ai5_widget_pane_t5

0xea68,	// (0x0003f027) cell_ai5_widget_pane_t6_ParamLimits

0xea68,	// (0x0003f027) cell_ai5_widget_pane_t6

0xea7a,	// (0x0003f039) cell_ai5_widget_pane_t7_ParamLimits

0xea7a,	// (0x0003f039) cell_ai5_widget_pane_t7

0xea93,	// (0x0003f052) cell_ai5_widget_pane_t8_ParamLimits

0xea93,	// (0x0003f052) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x00040412) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x00040412) cell_ai5_widget_pane_t

0xeaf2,	// (0x0003f0b1) grid_ai5_widget_pane

0x26ea,	// (0x00032ca9) highlight_cell_ai5_widget_pane_ParamLimits

0x26ea,	// (0x00032ca9) highlight_cell_ai5_widget_pane

0xeb00,	// (0x0003f0bf) ai5_sk_left_pane

0xeb0a,	// (0x0003f0c9) ai5_sk_middle_pane

0xeb14,	// (0x0003f0d3) ai5_sk_right_pane

0xeb1e,	// (0x0003f0dd) bg_ai5_widget_pane_g1_ParamLimits

0xeb1e,	// (0x0003f0dd) bg_ai5_widget_pane_g1

0xeb2a,	// (0x0003f0e9) bg_ai5_widget_pane_g2_ParamLimits

0xeb2a,	// (0x0003f0e9) bg_ai5_widget_pane_g2

0xeb36,	// (0x0003f0f5) bg_ai5_widget_pane_g3_ParamLimits

0xeb36,	// (0x0003f0f5) bg_ai5_widget_pane_g3

0xeb42,	// (0x0003f101) bg_ai5_widget_pane_g4_ParamLimits

0xeb42,	// (0x0003f101) bg_ai5_widget_pane_g4

0xeb4e,	// (0x0003f10d) bg_ai5_widget_pane_g5_ParamLimits

0xeb4e,	// (0x0003f10d) bg_ai5_widget_pane_g5

0xeb5a,	// (0x0003f119) bg_ai5_widget_pane_g6_ParamLimits

0xeb5a,	// (0x0003f119) bg_ai5_widget_pane_g6

0xeb66,	// (0x0003f125) bg_ai5_widget_pane_g7_ParamLimits

0xeb66,	// (0x0003f125) bg_ai5_widget_pane_g7

0xeb72,	// (0x0003f131) bg_ai5_widget_pane_g8_ParamLimits

0xeb72,	// (0x0003f131) bg_ai5_widget_pane_g8

0xeb7e,	// (0x0003f13d) bg_ai5_widget_pane_g9_ParamLimits

0xeb7e,	// (0x0003f13d) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x00040427) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x00040427) bg_ai5_widget_pane_g

0xebb0,	// (0x0003f16f) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb0,	// (0x0003f16f) cell_shortcut_ai5_widget_pane

0x7581,	// (0x00037b40) bg_cell_shortcut_ai5_widget_pane

0xebc1,	// (0x0003f180) cell_grid_ai5_widget_pane_g1

0x7581,	// (0x00037b40) highlight_cell_shortcut_ai5_widget_pane

0x9ca9,	// (0x0003a268) ai5_sk_left_pane_g1

0xebca,	// (0x0003f189) ai5_sk_left_pane_g2

0xebd2,	// (0x0003f191) ai5_sk_left_pane_g3

0xebda,	// (0x0003f199) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0004043a) ai5_sk_left_pane_g

0xebe2,	// (0x0003f1a1) ai5_sk_left_pane_t1

0x9cb1,	// (0x0003a270) ai5_sk_right_pane_g1

0xebf0,	// (0x0003f1af) ai5_sk_right_pane_g2

0xebf8,	// (0x0003f1b7) ai5_sk_right_pane_g3

0xec00,	// (0x0003f1bf) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x00040443) ai5_sk_right_pane_g

0xec08,	// (0x0003f1c7) ai5_sk_right_pane_t1

0x9cb1,	// (0x0003a270) ai5_sk_middle_pane_g1

0x9ca9,	// (0x0003a268) ai5_sk_middle_pane_g2

0x9cc9,	// (0x0003a288) ai5_sk_middle_pane_g3

0xebf8,	// (0x0003f1b7) ai5_sk_middle_pane_g4

0xebd2,	// (0x0003f191) ai5_sk_middle_pane_g5

0xec16,	// (0x0003f1d5) ai5_sk_middle_pane_g6

0xec1e,	// (0x0003f1dd) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0004044c) ai5_sk_middle_pane_g

0x97da,	// (0x00039d99) aid_touch_area_size_lc0_ParamLimits

0x97da,	// (0x00039d99) aid_touch_area_size_lc0

0x87bb,	// (0x00038d7a) cell_hwr_candidate_pane_t1_ParamLimits

0x97f6,	// (0x00039db5) aid_touch_navi_pane

0x9acf,	// (0x0003a08e) status_dt_navi_pane_ParamLimits

0x9acf,	// (0x0003a08e) status_dt_navi_pane

0x9adc,	// (0x0003a09b) status_dt_sta_pane_ParamLimits

0x9adc,	// (0x0003a09b) status_dt_sta_pane

0xec26,	// (0x0003f1e5) dt_sta_controll_pane

0xec33,	// (0x0003f1f2) dt_sta_indi_pane

0xec44,	// (0x0003f203) dt_sta_title_pane

0x2462,	// (0x00032a21) bg_dt_sta_indi_pane_ParamLimits

0x2462,	// (0x00032a21) bg_dt_sta_indi_pane

0xec57,	// (0x0003f216) dt_sta_battery_pane

0xec5f,	// (0x0003f21e) dt_sta_indi_pane_g1

0xec68,	// (0x0003f227) dt_sta_indi_pane_g2

0xec71,	// (0x0003f230) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0004045b) dt_sta_indi_pane_g

0xec7a,	// (0x0003f239) dt_sta_signal_pane

0x26ea,	// (0x00032ca9) bg_dt_sta_title_pane_ParamLimits

0x26ea,	// (0x00032ca9) bg_dt_sta_title_pane

0xaae3,	// (0x0003b0a2) dt_sta_title_pane_g1

0xec83,	// (0x0003f242) dt_sta_title_pane_t1_ParamLimits

0xec83,	// (0x0003f242) dt_sta_title_pane_t1

0x22c8,	// (0x00032887) bg_dt_sta_control_pane

0xec98,	// (0x0003f257) dt_sta_controll_pane_g1

0xeca1,	// (0x0003f260) bg_dt_sta_title_pane_g1

0xecaa,	// (0x0003f269) bg_dt_sta_title_pane_g2

0xecb3,	// (0x0003f272) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x00040462) bg_dt_sta_title_pane_g

0xc27b,	// (0x0003c83a) bg_dt_sta_indi_pane_g1

0xecbc,	// (0x0003f27b) dt_sta_signal_pane_g1

0xecc4,	// (0x0003f283) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x00040469) dt_sta_signal_pane_g

0xeccc,	// (0x0003f28b) dt_sta_battery_pane_g1

0xecd5,	// (0x0003f294) dt_sta_battery_pane_t1

0xc27b,	// (0x0003c83a) bg_dt_sta_control_pane_g1

0x2ba0,	// (0x0003315f) fep_china_uni_eep_pane

0x2ba8,	// (0x00033167) fep_china_uni_entry_pane_ParamLimits

0x2bb8,	// (0x00033177) popup_fep_china_uni_window_g1_ParamLimits

0x2bc8,	// (0x00033187) popup_fep_china_uni_window_g2_ParamLimits

0x2bc8,	// (0x00033187) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0003fcd2) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0003fcd2) popup_fep_china_uni_window_g

0xece4,	// (0x0003f2a3) fep_china_uni_eep_pane_g1

0xecec,	// (0x0003f2ab) fep_china_uni_eep_pane_t1

0xe75d,	// (0x0003ed1c) aid_touch_area_size_smil_player

0x994c,	// (0x00039f0b) lc0_clock_pane

0x9b33,	// (0x0003a0f2) status_pane_g5_ParamLimits

0x9b33,	// (0x0003a0f2) status_pane_g5

0x7ae2,	// (0x000380a1) popup_keymap_window

0x9af1,	// (0x0003a0b0) status_icon_pane

0xe947,	// (0x0003ef06) cell_ai5_widget_pane_g3_ParamLimits

0xe961,	// (0x0003ef20) cell_ai5_widget_pane_g4_ParamLimits

0xe971,	// (0x0003ef30) cell_ai5_widget_pane_g5_ParamLimits

0xe999,	// (0x0003ef58) cell_ai5_widget_pane_g8_ParamLimits

0xe999,	// (0x0003ef58) cell_ai5_widget_pane_g8

0xe9ad,	// (0x0003ef6c) cell_ai5_widget_pane_g9_ParamLimits

0xe9ad,	// (0x0003ef6c) cell_ai5_widget_pane_g9

0xe9c1,	// (0x0003ef80) cell_ai5_widget_pane_g10_ParamLimits

0xe9c1,	// (0x0003ef80) cell_ai5_widget_pane_g10

0xecfb,	// (0x0003f2ba) status_icon_pane_g1

0x22c8,	// (0x00032887) bg_popup_sub_pane_cp13

0xed03,	// (0x0003f2c2) popup_keymap_window_t1

0x972b,	// (0x00039cea) control_pane_g6_ParamLimits

0x972b,	// (0x00039cea) control_pane_g6

0x9738,	// (0x00039cf7) control_pane_g7_ParamLimits

0x9738,	// (0x00039cf7) control_pane_g7

0x9745,	// (0x00039d04) control_pane_g8_ParamLimits

0x9745,	// (0x00039d04) control_pane_g8

0xec26,	// (0x0003f1e5) dt_sta_controll_pane_ParamLimits

0xec33,	// (0x0003f1f2) dt_sta_indi_pane_ParamLimits

0xec44,	// (0x0003f203) dt_sta_title_pane_ParamLimits

0x2635,	// (0x00032bf4) aid_size_touch_scroll_bar_cale

0x5d78,	// (0x00036337) popup_discreet_window_ParamLimits

0x5d78,	// (0x00036337) popup_discreet_window

0x5df2,	// (0x000363b1) popup_sk_window

0xa327,	// (0x0003a8e6) bg_popup_sub_pane_cp28_ParamLimits

0xa327,	// (0x0003a8e6) bg_popup_sub_pane_cp28

0xed11,	// (0x0003f2d0) popup_discreet_window_g1_ParamLimits

0xed11,	// (0x0003f2d0) popup_discreet_window_g1

0xed31,	// (0x0003f2f0) popup_discreet_window_t1_ParamLimits

0xed31,	// (0x0003f2f0) popup_discreet_window_t1

0xed4f,	// (0x0003f30e) popup_discreet_window_t2_ParamLimits

0xed4f,	// (0x0003f30e) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0004046e) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0004046e) popup_discreet_window_t

0x92c3,	// (0x00039882) popup_sk_window_g1

0x92cd,	// (0x0003988c) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x00040475) popup_sk_window_g

0x92d5,	// (0x00039894) popup_sk_window_t1

0x92e3,	// (0x000398a2) popup_sk_window_t1_copy1

0xe933,	// (0x0003eef2) cell_ai5_widget_pane_g2_ParamLimits

0xeaa5,	// (0x0003f064) cell_ai5_widget_pane_t9_ParamLimits

0xeaa5,	// (0x0003f064) cell_ai5_widget_pane_t9

0x22c8,	// (0x00032887) main_fep_fshwr2_pane

0x92f1,	// (0x000398b0) aid_fshwr2_btn_pane

0x92fd,	// (0x000398bc) aid_fshwr2_syb_pane

0x930e,	// (0x000398cd) aid_fshwr2_txt_pane

0x931a,	// (0x000398d9) fshwr2_func_candi_pane

0x9332,	// (0x000398f1) fshwr2_hwr_syb_pane

0x9349,	// (0x00039908) fshwr2_icf_pane

0x5c9f,	// (0x0003625e) fshwr2_icf_bg_pane

0x9372,	// (0x00039931) fshwr2_icf_pane_t1_ParamLimits

0x9372,	// (0x00039931) fshwr2_icf_pane_t1

0x2b1d,	// (0x000330dc) fshwr2_func_candi_pane_g1

0xeda1,	// (0x0003f360) fshwr2_func_candi_row_pane_ParamLimits

0xeda1,	// (0x0003f360) fshwr2_func_candi_row_pane

0x938b,	// (0x0003994a) cell_fshwr2_syb_pane_ParamLimits

0x938b,	// (0x0003994a) cell_fshwr2_syb_pane

0x878c,	// (0x00038d4b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x878c,	// (0x00038d4b) fshwr2_hwr_syb_pane_g1

0x5c9f,	// (0x0003625e) bg_popup_call_pane_cp01

0x93a1,	// (0x00039960) fshwr2_func_candi_cell_pane_ParamLimits

0x93a1,	// (0x00039960) fshwr2_func_candi_cell_pane

0xa983,	// (0x0003af42) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa983,	// (0x0003af42) fshwr2_func_candi_cell_bg_pane

0x93ec,	// (0x000399ab) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x93ec,	// (0x000399ab) fshwr2_func_candi_cell_pane_g1

0x9414,	// (0x000399d3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9414,	// (0x000399d3) fshwr2_func_candi_cell_pane_t1

0x5c9f,	// (0x0003625e) bg_button_pane_cp08

0xedb1,	// (0x0003f370) cell_fshwr2_syb_bg_pane

0x9427,	// (0x000399e6) cell_fshwr2_syb_bg_pane_g1

0x942f,	// (0x000399ee) cell_fshwr2_syb_bg_pane_t1

0x26ea,	// (0x00032ca9) main_tmo_pane

0xae1c,	// (0x0003b3db) uni_indicator_pane_g1_ParamLimits

0xae2f,	// (0x0003b3ee) uni_indicator_pane_g2_ParamLimits

0xae41,	// (0x0003b400) uni_indicator_pane_g3_ParamLimits

0xae50,	// (0x0003b40f) uni_indicator_pane_g4_ParamLimits

0xae50,	// (0x0003b40f) uni_indicator_pane_g4

0xae64,	// (0x0003b423) uni_indicator_pane_g5_ParamLimits

0xae64,	// (0x0003b423) uni_indicator_pane_g5

0xae64,	// (0x0003b423) uni_indicator_pane_g6_ParamLimits

0xae64,	// (0x0003b423) uni_indicator_pane_g6

0xf912,	// (0x0003fed1) uni_indicator_pane_g_ParamLimits

0xd78f,	// (0x0003dd4e) popup_tmo_note_window_ParamLimits

0xd78f,	// (0x0003dd4e) popup_tmo_note_window

0x8b43,	// (0x00039102) fshwr2_bg_pane

0x9405,	// (0x000399c4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9405,	// (0x000399c4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0004047a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0004047a) fshwr2_func_candi_cell_pane_g

0x8774,	// (0x00038d33) bg_popup_window_pane_cp01

0x943e,	// (0x000399fd) bg_popup_window_pane_g1_cp01

0xedb9,	// (0x0003f378) bg_popup_window_pane_cp22_ParamLimits

0xedb9,	// (0x0003f378) bg_popup_window_pane_cp22

0xedc7,	// (0x0003f386) listscroll_tmo_link_pane_ParamLimits

0xedc7,	// (0x0003f386) listscroll_tmo_link_pane

0xee07,	// (0x0003f3c6) popup_tmo_note_window_g1_ParamLimits

0xee07,	// (0x0003f3c6) popup_tmo_note_window_g1

0xee14,	// (0x0003f3d3) tmo_note_info_pane_ParamLimits

0xee14,	// (0x0003f3d3) tmo_note_info_pane

0xee2e,	// (0x0003f3ed) list_tmo_note_info_pane_g1_ParamLimits

0xee2e,	// (0x0003f3ed) list_tmo_note_info_pane_g1

0xee45,	// (0x0003f404) list_tmo_note_info_pane_g2_ParamLimits

0xee45,	// (0x0003f404) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0004047f) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0004047f) list_tmo_note_info_pane_g

0xee61,	// (0x0003f420) list_tmo_note_info_text_pane_ParamLimits

0xee61,	// (0x0003f420) list_tmo_note_info_text_pane

0xeee2,	// (0x0003f4a1) list_tmo_link_pane

0xeeef,	// (0x0003f4ae) scroll_pane_cp20

0xeefc,	// (0x0003f4bb) list_single_tmo_link_pane_ParamLimits

0xeefc,	// (0x0003f4bb) list_single_tmo_link_pane

0xef0c,	// (0x0003f4cb) list_single_tmo_link_pane_t1

0xef1a,	// (0x0003f4d9) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1a,	// (0x0003f4d9) list_tmo_note_info_text_pane_t1

0x6ac2,	// (0x00037081) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6ac2,	// (0x00037081) aid_size_touch_scroll_bar_cp01

0x69b4,	// (0x00036f73) aid_size_touch_slider_marker

0x5dda,	// (0x00036399) popup_settings_window_ParamLimits

0x5dda,	// (0x00036399) popup_settings_window

0x4694,	// (0x00034c53) popup_candi_list_indi_window

0x97f6,	// (0x00039db5) aid_touch_navi_pane_ParamLimits

0x8a9e,	// (0x0003905d) rs_clock_indi_pane

0x8aa7,	// (0x00039066) sctrl_sk_bottom_pane_ParamLimits

0x8ab8,	// (0x00039077) sctrl_sk_top_pane_ParamLimits

0x8bbb,	// (0x0003917a) popup_fep_tooltip_window

0xe8ad,	// (0x0003ee6c) aid_size_cell_widget_grid_ParamLimits

0xe91e,	// (0x0003eedd) cell_ai5_widget_pane_g1_ParamLimits

0xe91e,	// (0x0003eedd) cell_ai5_widget_pane_g1

0xe981,	// (0x0003ef40) cell_ai5_widget_pane_g6_ParamLimits

0xe98d,	// (0x0003ef4c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x000403fd) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x000403fd) cell_ai5_widget_pane_g

0xead4,	// (0x0003f093) cell_ai5_widget_pane_t10_ParamLimits

0xead4,	// (0x0003f093) cell_ai5_widget_pane_t10

0xeaf2,	// (0x0003f0b1) grid_ai5_widget_pane_ParamLimits

0xeb8a,	// (0x0003f149) cell_contacts_ai5_widget_pane_ParamLimits

0xeb8a,	// (0x0003f149) cell_contacts_ai5_widget_pane

0xed64,	// (0x0003f323) popup_discreet_window_t3_ParamLimits

0xed64,	// (0x0003f323) popup_discreet_window_t3

0x935e,	// (0x0003991d) popup_fshwr2_char_preview_window_ParamLimits

0x935e,	// (0x0003991d) popup_fshwr2_char_preview_window

0xee7f,	// (0x0003f43e) tmo_note_info_pane_t1

0xee94,	// (0x0003f453) tmo_note_info_pane_t2

0xeea9,	// (0x0003f468) tmo_note_info_pane_t3

0xeebe,	// (0x0003f47d) tmo_note_info_pane_t4

0xeed0,	// (0x0003f48f) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x00040484) tmo_note_info_pane_t

0xeee2,	// (0x0003f4a1) list_tmo_link_pane_ParamLimits

0xeeef,	// (0x0003f4ae) scroll_pane_cp20_ParamLimits

0x5c9f,	// (0x0003625e) bg_popup_fep_char_preview_window_cp01

0xef33,	// (0x0003f4f2) popup_fshwr2_char_preview_window_t1

0xef41,	// (0x0003f500) popup_candi_list_indi_window_g1

0xef4a,	// (0x0003f509) bg_cell_contacts_ai5_widget_pane

0xef56,	// (0x0003f515) cell_contacts_ai5_widget_pane_g1

0xc92c,	// (0x0003ceeb) cell_contacts_ai5_widget_pane_g2

0xef6b,	// (0x0003f52a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0004048f) cell_contacts_ai5_widget_pane_g

0xef77,	// (0x0003f536) cell_contacts_ai5_widget_pane_t1

0x26ea,	// (0x00032ca9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefee,	// (0x0003f5ad) settings_container_pane

0x7581,	// (0x00037b40) listscroll_set_pane_copy1

0xb97d,	// (0x0003bf3c) scroll_pane_cp121_copy1

0xa0d4,	// (0x0003a693) set_content_pane_copy1

0xeffa,	// (0x0003f5b9) aid_height_set_list_copy1_ParamLimits

0xeffa,	// (0x0003f5b9) aid_height_set_list_copy1

0xb05c,	// (0x0003b61b) aid_size_parent_copy1_ParamLimits

0xb05c,	// (0x0003b61b) aid_size_parent_copy1

0xf006,	// (0x0003f5c5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf006,	// (0x0003f5c5) button_value_adjust_pane_cp6_copy1

0x977a,	// (0x00039d39) list_highlight_pane_cp2_copy1_ParamLimits

0x977a,	// (0x00039d39) list_highlight_pane_cp2_copy1

0xf01a,	// (0x0003f5d9) list_set_pane_copy1_ParamLimits

0xf01a,	// (0x0003f5d9) list_set_pane_copy1

0xef89,	// (0x0003f548) main_pane_set_t1_copy1_ParamLimits

0xef89,	// (0x0003f548) main_pane_set_t1_copy1

0xefc3,	// (0x0003f582) main_pane_set_t2_copy1_ParamLimits

0xefc3,	// (0x0003f582) main_pane_set_t2_copy1

0xf0c7,	// (0x0003f686) main_pane_set_t3_copy1

0xf0d5,	// (0x0003f694) main_pane_set_t4_copy1

0xefe2,	// (0x0003f5a1) set_content_pane_g1_copy1_ParamLimits

0xefe2,	// (0x0003f5a1) set_content_pane_g1_copy1

0xf0e3,	// (0x0003f6a2) setting_code_pane_copy1

0xf0eb,	// (0x0003f6aa) setting_slider_graphic_pane_copy1

0xf0eb,	// (0x0003f6aa) setting_slider_pane_copy1

0xf0eb,	// (0x0003f6aa) setting_text_pane_copy1

0xf0eb,	// (0x0003f6aa) setting_volume_pane_copy1

0xf0e3,	// (0x0003f6a2) settings_code_pane_cp2_copy1

0xf0f3,	// (0x0003f6b2) settings_code_pane_cp_copy1_ParamLimits

0xf0f3,	// (0x0003f6b2) settings_code_pane_cp_copy1

0x9447,	// (0x00039a06) volume_set_pane_copy1

0xf107,	// (0x0003f6c6) volume_set_pane_g10_copy1

0xf10f,	// (0x0003f6ce) volume_set_pane_g1_copy1

0xf117,	// (0x0003f6d6) volume_set_pane_g2_copy1

0xf11f,	// (0x0003f6de) volume_set_pane_g3_copy1

0xf127,	// (0x0003f6e6) volume_set_pane_g4_copy1

0xf12f,	// (0x0003f6ee) volume_set_pane_g5_copy1

0xf137,	// (0x0003f6f6) volume_set_pane_g6_copy1

0xf13f,	// (0x0003f6fe) volume_set_pane_g7_copy1

0xf147,	// (0x0003f706) volume_set_pane_g8_copy1

0xf14f,	// (0x0003f70e) volume_set_pane_g9_copy1

0x2338,	// (0x000328f7) bg_set_opt_pane_cp_copy1_ParamLimits

0x2338,	// (0x000328f7) bg_set_opt_pane_cp_copy1

0x944f,	// (0x00039a0e) setting_slider_pane_t1_copy1_ParamLimits

0x944f,	// (0x00039a0e) setting_slider_pane_t1_copy1

0x946d,	// (0x00039a2c) setting_slider_pane_t2_copy1_ParamLimits

0x946d,	// (0x00039a2c) setting_slider_pane_t2_copy1

0x9487,	// (0x00039a46) setting_slider_pane_t3_copy1_ParamLimits

0x9487,	// (0x00039a46) setting_slider_pane_t3_copy1

0x949f,	// (0x00039a5e) slider_set_pane_copy1_ParamLimits

0x949f,	// (0x00039a5e) slider_set_pane_copy1

0x2742,	// (0x00032d01) set_opt_bg_pane_g1_copy2

0x274a,	// (0x00032d09) set_opt_bg_pane_g2_copy2

0xf157,	// (0x0003f716) set_opt_bg_pane_g3_copy2

0x275a,	// (0x00032d19) set_opt_bg_pane_g4_copy2

0x2762,	// (0x00032d21) set_opt_bg_pane_g5_copy2

0x276a,	// (0x00032d29) set_opt_bg_pane_g6_copy2

0xf161,	// (0x0003f720) set_opt_bg_pane_g7_copy2

0xf169,	// (0x0003f728) set_opt_bg_pane_g8_copy2

0xf173,	// (0x0003f732) set_opt_bg_pane_g9_copy2

0x94b5,	// (0x00039a74) aid_size_touch_slider_mark_copy1_ParamLimits

0x94b5,	// (0x00039a74) aid_size_touch_slider_mark_copy1

0xf17d,	// (0x0003f73c) slider_set_pane_g1_copy1

0x94c9,	// (0x00039a88) slider_set_pane_g2_copy1

0x8265,	// (0x00038824) slider_set_pane_g3_copy1_ParamLimits

0x8265,	// (0x00038824) slider_set_pane_g3_copy1

0x8279,	// (0x00038838) slider_set_pane_g4_copy1_ParamLimits

0x8279,	// (0x00038838) slider_set_pane_g4_copy1

0x8291,	// (0x00038850) slider_set_pane_g5_copy1_ParamLimits

0x8291,	// (0x00038850) slider_set_pane_g5_copy1

0x8265,	// (0x00038824) slider_set_pane_g6_copy1_ParamLimits

0x8265,	// (0x00038824) slider_set_pane_g6_copy1

0x94d1,	// (0x00039a90) slider_set_pane_g7_copy1_ParamLimits

0x94d1,	// (0x00039a90) slider_set_pane_g7_copy1

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp2_copy1

0xf186,	// (0x0003f745) setting_slider_graphic_pane_g1_copy1

0xf18f,	// (0x0003f74e) setting_slider_graphic_pane_t1_copy1

0xf19f,	// (0x0003f75e) setting_slider_graphic_pane_t2_copy1

0xf1af,	// (0x0003f76e) slider_set_pane_cp_copy1

0xf1bf,	// (0x0003f77e) input_focus_pane_cp1_copy1

0xf1c8,	// (0x0003f787) list_set_text_pane_copy1

0xf1d0,	// (0x0003f78f) setting_text_pane_g1_copy1

0x4d9a,	// (0x00035359) set_text_pane_t1_copy1

0xf1bf,	// (0x0003f77e) input_focus_pane_cp2_copy1

0xf1d0,	// (0x0003f78f) setting_code_pane_g1_copy1

0xf1d9,	// (0x0003f798) setting_code_pane_t1_copy1

0xf1e7,	// (0x0003f7a6) list_set_graphic_pane_copy1

0x22dc,	// (0x0003289b) bg_set_opt_pane_cp4_copy1

0x728c,	// (0x0003784b) list_set_graphic_pane_g1_copy1_ParamLimits

0x728c,	// (0x0003784b) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x0003f7ba) list_set_graphic_pane_g2_copy1

0x72a4,	// (0x00037863) list_set_graphic_pane_t1_copy1_ParamLimits

0x72a4,	// (0x00037863) list_set_graphic_pane_t1_copy1

0xc27b,	// (0x0003c83a) rs_clock_indi_pane_g1

0xf203,	// (0x0003f7c2) rs_clock_indi_pane_t1

0xf211,	// (0x0003f7d0) rs_indi_pane

0xf219,	// (0x0003f7d8) rs_indi_pane_g1

0xf222,	// (0x0003f7e1) rs_indi_pane_g2

0xef41,	// (0x0003f500) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x00040496) rs_indi_pane_g

0x7581,	// (0x00037b40) bg_popup_preview_window_pane_cp03

0xf22b,	// (0x0003f7ea) popup_fep_tooltip_window_t1

0xcf1f,	// (0x0003d4de) popup_note2_window_g2_ParamLimits

0xcf1f,	// (0x0003d4de) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00040236) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00040236) popup_note2_window_g

0xd40c,	// (0x0003d9cb) bg_popup_sub_pane_cp11_ParamLimits

0xd419,	// (0x0003d9d8) cell_ai3_links_pane_g1_ParamLimits

0xd430,	// (0x0003d9ef) cell_ai3_links_pane_t1

0x4d9a,	// (0x00035359) set_text_pane_t1_copy1_ParamLimits

0x7492,	// (0x00037a51) cell_graphic_popup_pane_cp2_ParamLimits

0x7492,	// (0x00037a51) cell_graphic_popup_pane_cp2

0xf239,	// (0x0003f7f8) cell_graphic_popup_pane_g1_cp2

0x25b8,	// (0x00032b77) cell_graphic_popup_pane_g2_cp2

0xf241,	// (0x0003f800) cell_graphic_popup_pane_g3_cp2

0xf249,	// (0x0003f808) cell_graphic_popup_pane_t2_cp2

0x25c9,	// (0x00032b88) grid_highlight_pane_cp3_cp2

0x299a,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x26ea,	// (0x00032ca9) main_tmo_pane_ParamLimits

0xd783,	// (0x0003dd42) popup_tmo_big_image_note_window

0xe90d,	// (0x0003eecc) cell_ai5_widget_list_pane

0xe915,	// (0x0003eed4) cell_ai5_widget_lrg_icon_pane

0xee7f,	// (0x0003f43e) tmo_note_info_pane_t1_ParamLimits

0xee94,	// (0x0003f453) tmo_note_info_pane_t2_ParamLimits

0xeea9,	// (0x0003f468) tmo_note_info_pane_t3_ParamLimits

0xeebe,	// (0x0003f47d) tmo_note_info_pane_t4_ParamLimits

0xeed0,	// (0x0003f48f) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x00040484) tmo_note_info_pane_t_ParamLimits

0xefee,	// (0x0003f5ad) settings_container_pane_ParamLimits

0xf1b7,	// (0x0003f776) indicator_popup_pane_cp5

0xf1b7,	// (0x0003f776) indicator_popup_pane_cp6

0xf1e7,	// (0x0003f7a6) list_set_graphic_pane_copy1_ParamLimits

0x22c8,	// (0x00032887) bg_popup_window_pane_cp23

0xf257,	// (0x0003f816) popup_tmo_big_image_note_window_g1

0xf260,	// (0x0003f81f) popup_tmo_big_image_note_window_t1

0xf270,	// (0x0003f82f) popup_tmo_big_image_note_window_t2

0xf280,	// (0x0003f83f) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0004049d) popup_tmo_big_image_note_window_t

0xc27b,	// (0x0003c83a) cell_ai5_widget_lrg_icon_pane_g1

0xf290,	// (0x0003f84f) cell_ai5_widget_lrg_icon_pane_t1

0xf29e,	// (0x0003f85d) cell_ai5_widget_list_row_pane_ParamLimits

0xf29e,	// (0x0003f85d) cell_ai5_widget_list_row_pane

0xf2b5,	// (0x0003f874) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2b5,	// (0x0003f874) cell_ai5_widget_list_row_pane_g1

0xf2c2,	// (0x0003f881) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2c2,	// (0x0003f881) cell_ai5_widget_list_row_pane_t1

0xf2ed,	// (0x0003f8ac) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ed,	// (0x0003f8ac) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x000404a4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x000404a4) cell_ai5_widget_list_row_pane_t

0x5c9f,	// (0x0003625e) main_fep_vtchi_ss_pane

0xf335,	// (0x0003f8f4) popup_fep_char_pre_window

0xf33d,	// (0x0003f8fc) popup_fep_ituss_window

0xf35e,	// (0x0003f91d) popup_fep_vkbss_window

0xf388,	// (0x0003f947) grid_vkbss_keypad_pane_ParamLimits

0xf388,	// (0x0003f947) grid_vkbss_keypad_pane

0xf398,	// (0x0003f957) ituss_keypad_pane

0x94f3,	// (0x00039ab2) aid_vkbss_key_offset_ParamLimits

0x94f3,	// (0x00039ab2) aid_vkbss_key_offset

0x94ff,	// (0x00039abe) cell_vkbss_key_pane_ParamLimits

0x94ff,	// (0x00039abe) cell_vkbss_key_pane

0x9b0d,	// (0x0003a0cc) bg_cell_vkbss_key_g1_ParamLimits

0x9b0d,	// (0x0003a0cc) bg_cell_vkbss_key_g1

0xf3a7,	// (0x0003f966) cell_vkbss_key_3p_pane_ParamLimits

0xf3a7,	// (0x0003f966) cell_vkbss_key_3p_pane

0xf3bb,	// (0x0003f97a) cell_vkbss_key_g1_ParamLimits

0xf3bb,	// (0x0003f97a) cell_vkbss_key_g1

0xf3cf,	// (0x0003f98e) cell_vkbss_key_t1_ParamLimits

0xf3cf,	// (0x0003f98e) cell_vkbss_key_t1

0x9515,	// (0x00039ad4) cell_ituss_key_pane_ParamLimits

0x9515,	// (0x00039ad4) cell_ituss_key_pane

0xf3fa,	// (0x0003f9b9) bg_cell_ituss_key_g1_ParamLimits

0xf3fa,	// (0x0003f9b9) bg_cell_ituss_key_g1

0xf406,	// (0x0003f9c5) cell_ituss_key_pane_g1_ParamLimits

0xf406,	// (0x0003f9c5) cell_ituss_key_pane_g1

0x9526,	// (0x00039ae5) cell_ituss_key_pane_g2_ParamLimits

0x9526,	// (0x00039ae5) cell_ituss_key_pane_g2

0x0002,

0xfeec,	// (0x000404ab) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x000404ab) cell_ituss_key_pane_g

0x9552,	// (0x00039b11) cell_ituss_key_t1_ParamLimits

0x9552,	// (0x00039b11) cell_ituss_key_t1

0x958c,	// (0x00039b4b) cell_ituss_key_t2_ParamLimits

0x958c,	// (0x00039b4b) cell_ituss_key_t2

0x95bd,	// (0x00039b7c) cell_ituss_key_t3_ParamLimits

0x95bd,	// (0x00039b7c) cell_ituss_key_t3

0x958c,	// (0x00039b4b) cell_ituss_key_t4_ParamLimits

0x958c,	// (0x00039b4b) cell_ituss_key_t4

0x0004,

0xfef3,	// (0x000404b2) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x000404b2) cell_ituss_key_t

0xf42c,	// (0x0003f9eb) cell_vkbss_key_3p_pane_g1

0xf434,	// (0x0003f9f3) cell_vkbss_key_3p_pane_g2

0xf43c,	// (0x0003f9fb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefe,	// (0x000404bd) cell_vkbss_key_3p_pane_g

0x7581,	// (0x00037b40) bg_popup_fep_char_preview_window_cp02

0xf444,	// (0x0003fa03) popup_fep_char_pre_window_t1

0xe8a3,	// (0x0003ee62) main_ai5_sk_pane

0xef4a,	// (0x0003f509) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef56,	// (0x0003f515) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc92c,	// (0x0003ceeb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6b,	// (0x0003f52a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0004048f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef77,	// (0x0003f536) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x26ea,	// (0x00032ca9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf452,	// (0x0003fa11) main_ai5_sk_pane_g1

0xa168,	// (0x0003a727) popup_query_code_window_g1

0xf353,	// (0x0003f912) popup_fep_vkb_icf_pane

0xf372,	// (0x0003f931) popup_fep_vtchi_icf_pane

0xf45b,	// (0x0003fa1a) bg_icf_pane

0xf467,	// (0x0003fa26) list_vkb_icf_pane

0xf476,	// (0x0003fa35) bg_icf_pane_cp01

0xf489,	// (0x0003fa48) vtchi_icf_list_pane

0xf499,	// (0x0003fa58) list_vkb_icf_pane_t1_ParamLimits

0xf499,	// (0x0003fa58) list_vkb_icf_pane_t1

0xf4b0,	// (0x0003fa6f) vtchi_icf_list_pane_t1_ParamLimits

0xf4b0,	// (0x0003fa6f) vtchi_icf_list_pane_t1

0xf33d,	// (0x0003f8fc) popup_fep_ituss_window_ParamLimits

0xf372,	// (0x0003f931) popup_fep_vtchi_icf_pane_ParamLimits

0xf398,	// (0x0003f957) ituss_keypad_pane_ParamLimits

0x94e7,	// (0x00039aa6) ituss_sks_pane

0xf45b,	// (0x0003fa1a) bg_icf_pane_ParamLimits

0xf315,	// (0x0003f8d4) icf_edit_indi_pane_ParamLimits

0xf315,	// (0x0003f8d4) icf_edit_indi_pane

0xf467,	// (0x0003fa26) list_vkb_icf_pane_ParamLimits

0xf476,	// (0x0003fa35) bg_icf_pane_cp01_ParamLimits

0xf328,	// (0x0003f8e7) icf_edit_indi_pane_cp01_ParamLimits

0xf328,	// (0x0003f8e7) icf_edit_indi_pane_cp01

0xf491,	// (0x0003fa50) vtchi_query_pane

0xe72d,	// (0x0003ecec) icf_edit_indi_pane_g1_ParamLimits

0xe72d,	// (0x0003ecec) icf_edit_indi_pane_g1

0xf525,	// (0x0003fae4) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0003fae4) icf_edit_indi_pane_g2

0x0001,

0xff16,	// (0x000404d5) icf_edit_indi_pane_g_ParamLimits

0xff16,	// (0x000404d5) icf_edit_indi_pane_g

0xf537,	// (0x0003faf6) icf_edit_indi_pane_t1

0xf4ce,	// (0x0003fa8d) bg_input_focus_pane_cp042

0x262c,	// (0x00032beb) vtchi_button_pane

0xf4d7,	// (0x0003fa96) vtchi_query_pane_t1

0xf4e5,	// (0x0003faa4) vtchi_query_pane_t2

0xf4f3,	// (0x0003fab2) vtchi_query_pane_t3

0x0002,

0xff05,	// (0x000404c4) vtchi_query_pane_t

0x5c9f,	// (0x0003625e) bg_button_pane_cp13

0xf501,	// (0x0003fac0) vtchi_button_pane_g1

0x9600,	// (0x00039bbf) ituss_sks_pane_g1

0x960b,	// (0x00039bca) ituss_sks_pane_g2

0x0001,

0xff0c,	// (0x000404cb) ituss_sks_pane_g

0xf509,	// (0x0003fac8) ituss_sks_pane_t1

0xf517,	// (0x0003fad6) ituss_sks_pane_t2

0x0001,

0xff11,	// (0x000404d0) ituss_sks_pane_t

0xbcf8,	// (0x0003c2b7) indicator_nsta_pane_cp_g1

0xbd00,	// (0x0003c2bf) indicator_nsta_pane_cp_g2

0xbd08,	// (0x0003c2c7) indicator_nsta_pane_cp_g3

0xbcf8,	// (0x0003c2b7) indicator_nsta_pane_cp_g4

0xbd00,	// (0x0003c2bf) indicator_nsta_pane_cp_g5

0xbd08,	// (0x0003c2c7) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00040074) indicator_nsta_pane_cp_g

0xe484,	// (0x0003ea43) cell_graphic2_pane_t2_ParamLimits

0xe484,	// (0x0003ea43) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x00040386) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x00040386) cell_graphic2_pane_t

0xe4b1,	// (0x0003ea70) cell_graphic2_control_pane_t1

0x6f68,	// (0x00037527) signal_pane_g3_ParamLimits

0x6f68,	// (0x00037527) signal_pane_g3

0x6f7a,	// (0x00037539) signal_pane_g4_ParamLimits

0x6f7a,	// (0x00037539) signal_pane_g4

0xf2ff,	// (0x0003f8be) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2ff,	// (0x0003f8be) cell_ai5_widget_list_row_pane_t3

0xf41a,	// (0x0003f9d9) cell_ituss_key_pane_t1_ParamLimits

0xf41a,	// (0x0003f9d9) cell_ituss_key_pane_t1

0x9da3,	// (0x0003a362) form_field_data_wide_pane_vc_t2_ParamLimits

0x9da3,	// (0x0003a362) form_field_data_wide_pane_vc_t2

0x9db7,	// (0x0003a376) form_field_data_wide_pane_vc_t3_ParamLimits

0x9db7,	// (0x0003a376) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fa,	// (0x0003fdb9) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fa,	// (0x0003fdb9) form_field_data_wide_pane_vc_t

0xb9bf,	// (0x0003bf7e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9bf,	// (0x0003bf7e) form_field_slider_wide_pane_vc_t3

0xba9d,	// (0x0003c05c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba9d,	// (0x0003c05c) form_field_popup_wide_pane_vc_t2

0xbab4,	// (0x0003c073) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbab4,	// (0x0003c073) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00040063) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00040063) form_field_popup_wide_pane_vc_t

0x92f1,	// (0x000398b0) aid_fshwr2_btn_pane_ParamLimits

0x92fd,	// (0x000398bc) aid_fshwr2_syb_pane_ParamLimits

0x930e,	// (0x000398cd) aid_fshwr2_txt_pane_ParamLimits

0x8b43,	// (0x00039102) fshwr2_bg_pane_ParamLimits

0x931a,	// (0x000398d9) fshwr2_func_candi_pane_ParamLimits

0x9332,	// (0x000398f1) fshwr2_hwr_syb_pane_ParamLimits

0x9349,	// (0x00039908) fshwr2_icf_pane_ParamLimits

0x4a8f,	// (0x0003504e) list_double_graphic_pane_vc_g4_ParamLimits

0x4a8f,	// (0x0003504e) list_double_graphic_pane_vc_g4

0x9546,	// (0x00039b05) cell_ituss_key_pane_g3_ParamLimits

0x9546,	// (0x00039b05) cell_ituss_key_pane_g3

0x95ee,	// (0x00039bad) cell_ituss_key_t5_ParamLimits

0x95ee,	// (0x00039bad) cell_ituss_key_t5

0xf35e,	// (0x0003f91d) popup_fep_vkbss_window_ParamLimits

0xca5d,	// (0x0003d01c) aid_cell_ai5_quarter

0xf537,	// (0x0003faf6) icf_edit_indi_pane_t1_ParamLimits

0x615e,	// (0x0003671d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x615e,	// (0x0003671d) aid_tch_indicator_popup_pane_cp2

0x6171,	// (0x00036730) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6171,	// (0x00036730) aid_tch_query_popup_data_pane_cp2

0xa110,	// (0x0003a6cf) aid_tch_query_popup_pane_ParamLimits

0xa110,	// (0x0003a6cf) aid_tch_query_popup_pane

0xa110,	// (0x0003a6cf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa110,	// (0x0003a6cf) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

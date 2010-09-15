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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000180f5 };

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
0x22bb,	// (0x0001a3b0) Screen

0x22c5,	// (0x0001a3ba) application_window_ParamLimits

0x22c5,	// (0x0001a3ba) application_window

0xaf81,	// (0x00023076) screen_g1

0x22d3,	// (0x0001a3c8) area_bottom_pane_ParamLimits

0x22d3,	// (0x0001a3c8) area_bottom_pane

0xaf8b,	// (0x00023080) area_top_pane_ParamLimits

0xaf8b,	// (0x00023080) area_top_pane

0x474a,	// (0x0001c83f) main_pane_ParamLimits

0x474a,	// (0x0001c83f) main_pane

0xb003,	// (0x000230f8) misc_graphics

0x8a84,	// (0x00020b79) battery_pane_ParamLimits

0x8a84,	// (0x00020b79) battery_pane

0xcb99,	// (0x00024c8e) bg_status_flat_pane_g8

0xcba1,	// (0x00024c96) bg_status_flat_pane_g9

0xc27e,	// (0x00024373) context_pane_ParamLimits

0xc27e,	// (0x00024373) context_pane

0x8bde,	// (0x00020cd3) navi_pane_ParamLimits

0x8bde,	// (0x00020cd3) navi_pane

0x8c53,	// (0x00020d48) signal_pane_ParamLimits

0x8c53,	// (0x00020d48) signal_pane

0x0008,

0xf848,	// (0x0002793d) bg_status_flat_pane_g

0x8cdf,	// (0x00020dd4) status_pane_g1_ParamLimits

0x8cdf,	// (0x00020dd4) status_pane_g1

0x8ceb,	// (0x00020de0) status_pane_g2_ParamLimits

0x8ceb,	// (0x00020de0) status_pane_g2

0xc2e4,	// (0x000243d9) status_pane_g3_ParamLimits

0xc2e4,	// (0x000243d9) status_pane_g3

0x0004,

0xf77b,	// (0x00027870) status_pane_g_ParamLimits

0xf77b,	// (0x00027870) status_pane_g

0x8cf7,	// (0x00020dec) title_pane_ParamLimits

0x8cf7,	// (0x00020dec) title_pane

0x8d52,	// (0x00020e47) uni_indicator_pane_ParamLimits

0x8d52,	// (0x00020e47) uni_indicator_pane

0xc1d5,	// (0x000242ca) bg_list_pane_ParamLimits

0xc1d5,	// (0x000242ca) bg_list_pane

0x8448,	// (0x0002053d) find_pane

0x8450,	// (0x00020545) listscroll_app_pane_ParamLimits

0x8450,	// (0x00020545) listscroll_app_pane

0xc1f5,	// (0x000242ea) listscroll_form_pane

0x8460,	// (0x00020555) listscroll_gen_pane_ParamLimits

0x8460,	// (0x00020555) listscroll_gen_pane

0x4f45,	// (0x0001d03a) listscroll_set_pane

0x8475,	// (0x0002056a) main_idle_act_pane

0xbff3,	// (0x000240e8) main_idle_trad_pane

0xbff3,	// (0x000240e8) main_list_empty_pane

0xb7ce,	// (0x000238c3) main_midp_pane

0xc20f,	// (0x00024304) main_pane_g1_ParamLimits

0xc20f,	// (0x00024304) main_pane_g1

0x8488,	// (0x0002057d) popup_ai_message_window_ParamLimits

0x8488,	// (0x0002057d) popup_ai_message_window

0x850c,	// (0x00020601) popup_fep_china_uni_window_ParamLimits

0x850c,	// (0x00020601) popup_fep_china_uni_window

0x5021,	// (0x0001d116) popup_fep_japan_candidate_window_ParamLimits

0x5021,	// (0x0001d116) popup_fep_japan_candidate_window

0x503f,	// (0x0001d134) popup_fep_japan_predictive_window_ParamLimits

0x503f,	// (0x0001d134) popup_fep_japan_predictive_window

0x854a,	// (0x0002063f) popup_find_window

0x8563,	// (0x00020658) popup_grid_graphic_window_ParamLimits

0x8563,	// (0x00020658) popup_grid_graphic_window

0x5096,	// (0x0001d18b) popup_large_graphic_colour_window

0x85df,	// (0x000206d4) popup_menu_window_ParamLimits

0x85df,	// (0x000206d4) popup_menu_window

0x873d,	// (0x00020832) popup_note_image_window

0x8705,	// (0x000207fa) popup_note_wait_window_ParamLimits

0x8705,	// (0x000207fa) popup_note_wait_window

0x8753,	// (0x00020848) popup_note_window_ParamLimits

0x8753,	// (0x00020848) popup_note_window

0x87e7,	// (0x000208dc) popup_query_code_window_ParamLimits

0x87e7,	// (0x000208dc) popup_query_code_window

0x5256,	// (0x0001d34b) popup_query_data_code_window_ParamLimits

0x5256,	// (0x0001d34b) popup_query_data_code_window

0x881f,	// (0x00020914) popup_query_data_window_ParamLimits

0x881f,	// (0x00020914) popup_query_data_window

0x8893,	// (0x00020988) popup_query_sat_info_window_ParamLimits

0x8893,	// (0x00020988) popup_query_sat_info_window

0x8920,	// (0x00020a15) popup_snote_single_graphic_window_ParamLimits

0x8920,	// (0x00020a15) popup_snote_single_graphic_window

0x8920,	// (0x00020a15) popup_snote_single_text_window_ParamLimits

0x8920,	// (0x00020a15) popup_snote_single_text_window

0x52c5,	// (0x0001d3ba) popup_sub_window_general

0x53c9,	// (0x0001d4be) popup_window_general_ParamLimits

0x53c9,	// (0x0001d4be) popup_window_general

0xc21d,	// (0x00024312) power_save_pane

0x82ee,	// (0x000203e3) control_pane_g1_ParamLimits

0x82ee,	// (0x000203e3) control_pane_g1

0x4dfe,	// (0x0001cef3) control_pane_g2_ParamLimits

0x4dfe,	// (0x0001cef3) control_pane_g2

0xc1c7,	// (0x000242bc) control_pane_g3_ParamLimits

0xc1c7,	// (0x000242bc) control_pane_g3

0x0007,

0xf763,	// (0x00027858) control_pane_g_ParamLimits

0xf763,	// (0x00027858) control_pane_g

0x834a,	// (0x0002043f) control_pane_t1_ParamLimits

0x834a,	// (0x0002043f) control_pane_t1

0x83a8,	// (0x0002049d) control_pane_t2_ParamLimits

0x83a8,	// (0x0002049d) control_pane_t2

0x0002,

0xf774,	// (0x00027869) control_pane_t_ParamLimits

0xf774,	// (0x00027869) control_pane_t

0xc122,	// (0x00024217) navi_navi_volume_pane_cp1

0xc12a,	// (0x0002421f) status_small_icon_pane

0xc132,	// (0x00024227) status_small_pane_g1_ParamLimits

0xc132,	// (0x00024227) status_small_pane_g1

0xc166,	// (0x0002425b) status_small_pane_g2_ParamLimits

0xc166,	// (0x0002425b) status_small_pane_g2

0xc172,	// (0x00024267) status_small_pane_g3_ParamLimits

0xc172,	// (0x00024267) status_small_pane_g3

0x82b8,	// (0x000203ad) status_small_pane_g4_ParamLimits

0x82b8,	// (0x000203ad) status_small_pane_g4

0x82c4,	// (0x000203b9) status_small_pane_g5_ParamLimits

0x82c4,	// (0x000203b9) status_small_pane_g5

0xc17e,	// (0x00024273) status_small_pane_g6_ParamLimits

0xc17e,	// (0x00024273) status_small_pane_g6

0x0007,

0xf752,	// (0x00027847) status_small_pane_g_ParamLimits

0xf752,	// (0x00027847) status_small_pane_g

0xc1ad,	// (0x000242a2) status_small_pane_t1

0x82da,	// (0x000203cf) status_small_wait_pane_ParamLimits

0x82da,	// (0x000203cf) status_small_wait_pane

0x8167,	// (0x0002025c) aid_levels_signal_ParamLimits

0x8167,	// (0x0002025c) aid_levels_signal

0x817b,	// (0x00020270) signal_pane_g1_ParamLimits

0x817b,	// (0x00020270) signal_pane_g1

0x8195,	// (0x0002028a) signal_pane_g2_ParamLimits

0x8195,	// (0x0002028a) signal_pane_g2

0x0003,

0xf6e3,	// (0x000277d8) signal_pane_g_ParamLimits

0xf6e3,	// (0x000277d8) signal_pane_g

0xbb91,	// (0x00023c86) context_pane_g1

0x23cf,	// (0x0001a4c4) title_pane_g1

0x2411,	// (0x0001a506) title_pane_t1

0xb019,	// (0x0002310e) title_pane_t2

0xb03f,	// (0x00023134) title_pane_t3

0x0002,

0xf532,	// (0x00027627) title_pane_t

0x8d78,	// (0x00020e6d) aid_levels_battery_ParamLimits

0x8d78,	// (0x00020e6d) aid_levels_battery

0x8d90,	// (0x00020e85) battery_pane_g1_ParamLimits

0x8d90,	// (0x00020e85) battery_pane_g1

0x8dab,	// (0x00020ea0) battery_pane_g2_ParamLimits

0x8dab,	// (0x00020ea0) battery_pane_g2

0x0001,

0xf786,	// (0x0002787b) battery_pane_g_ParamLimits

0xf786,	// (0x0002787b) battery_pane_g

0x90b3,	// (0x000211a8) uni_indicator_pane_g1

0x90c7,	// (0x000211bc) uni_indicator_pane_g2

0x90dc,	// (0x000211d1) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x000279e5) uni_indicator_pane_g

0xb742,	// (0x00023837) navi_icon_pane_ParamLimits

0xb742,	// (0x00023837) navi_icon_pane

0xb003,	// (0x000230f8) navi_midp_pane

0xb003,	// (0x000230f8) navi_navi_pane

0xb742,	// (0x00023837) navi_text_pane_ParamLimits

0xb742,	// (0x00023837) navi_text_pane

0xaf81,	// (0x00023076) status_small_wait_pane_g1

0xb354,	// (0x00023449) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x000279e0) status_small_wait_pane_g

0x9059,	// (0x0002114e) navi_navi_icon_text_pane

0x9061,	// (0x00021156) navi_navi_pane_g1_ParamLimits

0x9061,	// (0x00021156) navi_navi_pane_g1

0x9073,	// (0x00021168) navi_navi_pane_g2_ParamLimits

0x9073,	// (0x00021168) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x000279ae) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x000279ae) navi_navi_pane_g

0x9085,	// (0x0002117a) navi_navi_tabs_pane

0x9059,	// (0x0002114e) navi_navi_text_pane

0x9059,	// (0x0002114e) navi_navi_volume_pane

0xd0df,	// (0x000251d4) navi_text_pane_t1

0xd0d3,	// (0x000251c8) navi_icon_pane_g1

0xd027,	// (0x0002511c) navi_navi_text_pane_t1

0x5630,	// (0x0001d725) navi_navi_volume_pane_g1

0x9050,	// (0x00021145) volume_small_pane

0x8fac,	// (0x000210a1) navi_navi_icon_text_pane_g1

0x8fb4,	// (0x000210a9) navi_navi_icon_text_pane_t1

0xcbe1,	// (0x00024cd6) navi_tabs_2_long_pane

0xcbe1,	// (0x00024cd6) navi_tabs_2_pane

0xcbe1,	// (0x00024cd6) navi_tabs_3_long_pane

0xcbe1,	// (0x00024cd6) navi_tabs_3_pane

0xcbe1,	// (0x00024cd6) navi_tabs_4_pane

0x8f8c,	// (0x00021081) tabs_2_active_pane_ParamLimits

0x8f8c,	// (0x00021081) tabs_2_active_pane

0x8f9c,	// (0x00021091) tabs_2_passive_pane_ParamLimits

0x8f9c,	// (0x00021091) tabs_2_passive_pane

0x8f5a,	// (0x0002104f) tabs_3_active_pane_ParamLimits

0x8f5a,	// (0x0002104f) tabs_3_active_pane

0x8f6a,	// (0x0002105f) tabs_3_passive_pane_ParamLimits

0x8f6a,	// (0x0002105f) tabs_3_passive_pane

0x8f7b,	// (0x00021070) tabs_3_passive_pane_cp_ParamLimits

0x8f7b,	// (0x00021070) tabs_3_passive_pane_cp

0x8f16,	// (0x0002100b) tabs_4_active_pane_ParamLimits

0x8f16,	// (0x0002100b) tabs_4_active_pane

0x8f27,	// (0x0002101c) tabs_4_passive_pane_ParamLimits

0x8f27,	// (0x0002101c) tabs_4_passive_pane

0x8f38,	// (0x0002102d) tabs_4_passive_pane_cp_ParamLimits

0x8f38,	// (0x0002102d) tabs_4_passive_pane_cp

0x8f49,	// (0x0002103e) tabs_4_passive_pane_cp2_ParamLimits

0x8f49,	// (0x0002103e) tabs_4_passive_pane_cp2

0x8ef6,	// (0x00020feb) tabs_2_long_active_pane_ParamLimits

0x8ef6,	// (0x00020feb) tabs_2_long_active_pane

0x8f06,	// (0x00020ffb) tabs_2_long_passive_pane_ParamLimits

0x8f06,	// (0x00020ffb) tabs_2_long_passive_pane

0x8ebf,	// (0x00020fb4) tabs_3_long_active_pane_ParamLimits

0x8ebf,	// (0x00020fb4) tabs_3_long_active_pane

0x8ed2,	// (0x00020fc7) tabs_3_long_passive_pane_ParamLimits

0x8ed2,	// (0x00020fc7) tabs_3_long_passive_pane

0x8ee3,	// (0x00020fd8) tabs_3_long_passive_pane_cp_ParamLimits

0x8ee3,	// (0x00020fd8) tabs_3_long_passive_pane_cp

0x54eb,	// (0x0001d5e0) volume_small_pane_g1

0x54f4,	// (0x0001d5e9) volume_small_pane_g2

0x54fd,	// (0x0001d5f2) volume_small_pane_g3

0x5506,	// (0x0001d5fb) volume_small_pane_g4

0x550f,	// (0x0001d604) volume_small_pane_g5

0x5518,	// (0x0001d60d) volume_small_pane_g6

0x5521,	// (0x0001d616) volume_small_pane_g7

0x552a,	// (0x0001d61f) volume_small_pane_g8

0x5533,	// (0x0001d628) volume_small_pane_g9

0x553c,	// (0x0001d631) volume_small_pane_g10

0x0009,

0xf885,	// (0x0002797a) volume_small_pane_g

0xb051,	// (0x00023146) bg_active_tab_pane_cp2_ParamLimits

0xb051,	// (0x00023146) bg_active_tab_pane_cp2

0xb05f,	// (0x00023154) tabs_3_active_pane_g1

0x249e,	// (0x0001a593) tabs_3_active_pane_t1

0xb051,	// (0x00023146) bg_passive_tab_pane_cp2_ParamLimits

0xb051,	// (0x00023146) bg_passive_tab_pane_cp2

0xb05f,	// (0x00023154) tabs_3_passive_pane_g1

0x249e,	// (0x0001a593) tabs_3_passive_pane_t1

0xb051,	// (0x00023146) bg_active_tab_pane_cp3_ParamLimits

0xb051,	// (0x00023146) bg_active_tab_pane_cp3

0xc8ed,	// (0x000249e2) tabs_4_active_pane_g1

0x24b4,	// (0x0001a5a9) tabs_4_active_pane_t1

0xb051,	// (0x00023146) bg_passive_tab_pane_cp3_ParamLimits

0xb051,	// (0x00023146) bg_passive_tab_pane_cp3

0xc8ed,	// (0x000249e2) tabs_4_1_passive_pane_g1

0x24b4,	// (0x0001a5a9) tabs_4_1_passive_pane_t1

0xb7ce,	// (0x000238c3) list_highlight_pane_cp2

0x918b,	// (0x00021280) list_set_pane_ParamLimits

0x918b,	// (0x00021280) list_set_pane

0x9219,	// (0x0002130e) main_pane_set_t1_ParamLimits

0x9219,	// (0x0002130e) main_pane_set_t1

0x9239,	// (0x0002132e) main_pane_set_t2_ParamLimits

0x9239,	// (0x0002132e) main_pane_set_t2

0x924d,	// (0x00021342) main_pane_set_t3_ParamLimits

0x924d,	// (0x00021342) main_pane_set_t3

0x925f,	// (0x00021354) main_pane_set_t4_ParamLimits

0x925f,	// (0x00021354) main_pane_set_t4

0x0003,

0xf955,	// (0x00027a4a) main_pane_set_t_ParamLimits

0xf955,	// (0x00027a4a) main_pane_set_t

0x9271,	// (0x00021366) setting_code_pane

0x9279,	// (0x0002136e) setting_slider_graphic_pane

0x9279,	// (0x0002136e) setting_slider_pane

0x9279,	// (0x0002136e) setting_text_pane

0x9279,	// (0x0002136e) setting_volume_pane

0x802f,	// (0x00020124) volume_set_pane

0xb067,	// (0x0002315c) bg_set_opt_pane_cp

0x4951,	// (0x0001ca46) setting_slider_pane_t1

0x8037,	// (0x0002012c) setting_slider_pane_t2

0x8050,	// (0x00020145) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002762e) setting_slider_pane_t

0x4997,	// (0x0001ca8c) slider_set_pane

0xb003,	// (0x000230f8) bg_set_opt_pane_cp2

0xb075,	// (0x0002316a) setting_slider_graphic_pane_g1

0x8067,	// (0x0002015c) setting_slider_graphic_pane_t1

0x8076,	// (0x0002016b) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00027635) setting_slider_graphic_pane_t

0x8085,	// (0x0002017a) slider_set_pane_cp

0xb003,	// (0x000230f8) input_focus_pane_cp1

0xd51b,	// (0x00025610) list_set_text_pane

0xaf81,	// (0x00023076) setting_text_pane_g1

0xb003,	// (0x000230f8) input_focus_pane_cp2

0xaf81,	// (0x00023076) setting_code_pane_g1

0xb07e,	// (0x00023173) setting_code_pane_t1

0x79e0,	// (0x0001fad5) set_text_pane_t1_ParamLimits

0x79e0,	// (0x0001fad5) set_text_pane_t1

0xb690,	// (0x00023785) set_opt_bg_pane_g1

0xb698,	// (0x0002378d) set_opt_bg_pane_g2

0x9157,	// (0x0002124c) set_opt_bg_pane_g3

0xb6a8,	// (0x0002379d) set_opt_bg_pane_g4

0xb6b0,	// (0x000237a5) set_opt_bg_pane_g5

0xb6b8,	// (0x000237ad) set_opt_bg_pane_g6

0x915f,	// (0x00021254) set_opt_bg_pane_g7

0x9167,	// (0x0002125c) set_opt_bg_pane_g8

0x916f,	// (0x00021264) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x00027a37) set_opt_bg_pane_g

0xd50e,	// (0x00025603) slider_set_pane_g1

0x56a5,	// (0x0001d79a) slider_set_pane_g2

0x0006,

0xf933,	// (0x00027a28) slider_set_pane_g

0x90f1,	// (0x000211e6) volume_set_pane_g1

0x90f9,	// (0x000211ee) volume_set_pane_g2

0x9101,	// (0x000211f6) volume_set_pane_g3

0x9109,	// (0x000211fe) volume_set_pane_g4

0x9111,	// (0x00021206) volume_set_pane_g5

0x9119,	// (0x0002120e) volume_set_pane_g6

0x9121,	// (0x00021216) volume_set_pane_g7

0x9129,	// (0x0002121e) volume_set_pane_g8

0x9131,	// (0x00021226) volume_set_pane_g9

0x9139,	// (0x0002122e) volume_set_pane_g10

0x0009,

0xf90b,	// (0x00027a00) volume_set_pane_g

0x24e4,	// (0x0001a5d9) indicator_pane_ParamLimits

0x24e4,	// (0x0001a5d9) indicator_pane

0x250c,	// (0x0001a601) main_idle_pane_g2_ParamLimits

0x250c,	// (0x0001a601) main_idle_pane_g2

0x253c,	// (0x0001a631) main_pane_idle_g1_ParamLimits

0x253c,	// (0x0001a631) main_pane_idle_g1

0xb08c,	// (0x00023181) popup_clock_digital_analogue_window_ParamLimits

0xb08c,	// (0x00023181) popup_clock_digital_analogue_window

0x2561,	// (0x0001a656) soft_indicator_pane_ParamLimits

0x2561,	// (0x0001a656) soft_indicator_pane

0x257b,	// (0x0001a670) wallpaper_pane_ParamLimits

0x257b,	// (0x0001a670) wallpaper_pane

0xaf81,	// (0x00023076) wallpaper_pane_g1

0x258d,	// (0x0001a682) indicator_pane_g1_ParamLimits

0x258d,	// (0x0001a682) indicator_pane_g1

0xd624,	// (0x00025719) navi_navi_icon_text_pane_srt_g1

0xb0ba,	// (0x000231af) soft_indicator_pane_t1

0xb0d4,	// (0x000231c9) aid_ps_area_pane

0x25a6,	// (0x0001a69b) aid_ps_clock_pane

0xb0e5,	// (0x000231da) aid_ps_indicator_pane

0xb0f1,	// (0x000231e6) indicator_ps_pane_ParamLimits

0xb0f1,	// (0x000231e6) indicator_ps_pane

0xb100,	// (0x000231f5) power_save_pane_g1_ParamLimits

0xb100,	// (0x000231f5) power_save_pane_g1

0xb10c,	// (0x00023201) power_save_pane_g2_ParamLimits

0xb10c,	// (0x00023201) power_save_pane_g2

0x46c6,	// (0x0001c7bb) aid_navinavi_width_pane

0xb0d4,	// (0x000231c9) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002763a) power_save_pane_g_ParamLimits

0xf545,	// (0x0002763a) power_save_pane_g

0xb11a,	// (0x0002320f) power_save_pane_t1_ParamLimits

0xb11a,	// (0x0002320f) power_save_pane_t1

0x25a6,	// (0x0001a69b) aid_ps_clock_pane_ParamLimits

0xb0e5,	// (0x000231da) aid_ps_indicator_pane_ParamLimits

0xb12c,	// (0x00023221) power_save_pane_t4_ParamLimits

0xb12c,	// (0x00023221) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002763f) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002763f) power_save_pane_t

0xb156,	// (0x0002324b) power_save_t3_ParamLimits

0xb156,	// (0x0002324b) power_save_t3

0xb141,	// (0x00023236) power_save_t2_ParamLimits

0xb141,	// (0x00023236) power_save_t2

0xb16b,	// (0x00023260) indicator_ps_pane_g1

0x25b2,	// (0x0001a6a7) ai_gene_pane_ParamLimits

0x25b2,	// (0x0001a6a7) ai_gene_pane

0x25c9,	// (0x0001a6be) ai_links_pane_ParamLimits

0x25c9,	// (0x0001a6be) ai_links_pane

0x25db,	// (0x0001a6d0) indicator_pane_cp1_ParamLimits

0x25db,	// (0x0001a6d0) indicator_pane_cp1

0x25ea,	// (0x0001a6df) main_pane_idle_g1_cp_ParamLimits

0x25ea,	// (0x0001a6df) main_pane_idle_g1_cp

0xb174,	// (0x00023269) popup_ai_links_title_window

0x2602,	// (0x0001a6f7) soft_indicator_pane_cp1_ParamLimits

0x2602,	// (0x0001a6f7) soft_indicator_pane_cp1

0xd364,	// (0x00025459) ai_links_pane_g1

0xd36d,	// (0x00025462) grid_ai_links_pane

0x90aa,	// (0x0002119f) ai_gene_pane_1

0xd352,	// (0x00025447) ai_gene_pane_2

0xd35b,	// (0x00025450) list_highlight_pane_cp4

0x908e,	// (0x00021183) cell_ai_link_pane_ParamLimits

0x908e,	// (0x00021183) cell_ai_link_pane

0xd34a,	// (0x0002543f) cell_ai_link_pane_g1

0xb354,	// (0x00023449) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x000279db) cell_ai_link_pane_g

0xb003,	// (0x000230f8) grid_highlight_cp2

0xb003,	// (0x000230f8) bg_popup_sub_pane_cp1

0xb18b,	// (0x00023280) popup_ai_links_title_window_t1

0xd29c,	// (0x00025391) ai_gene_pane_1_g1_ParamLimits

0xd29c,	// (0x00025391) ai_gene_pane_1_g1

0xd2a8,	// (0x0002539d) ai_gene_pane_1_g2_ParamLimits

0xd2a8,	// (0x0002539d) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x000279d1) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x000279d1) ai_gene_pane_1_g

0xd2b5,	// (0x000253aa) ai_gene_pane_1_t1_ParamLimits

0xd2b5,	// (0x000253aa) ai_gene_pane_1_t1

0xd2e9,	// (0x000253de) grid_ai_soft_ind_pane

0xd287,	// (0x0002537c) ai_gene_pane_2_t1_ParamLimits

0xd287,	// (0x0002537c) ai_gene_pane_2_t1

0x2616,	// (0x0001a70b) main_pane_empty_t1_ParamLimits

0x2616,	// (0x0001a70b) main_pane_empty_t1

0x2633,	// (0x0001a728) main_pane_empty_t2_ParamLimits

0x2633,	// (0x0001a728) main_pane_empty_t2

0x264b,	// (0x0001a740) main_pane_empty_t3_ParamLimits

0x264b,	// (0x0001a740) main_pane_empty_t3

0x265e,	// (0x0001a753) main_pane_empty_t4_ParamLimits

0x265e,	// (0x0001a753) main_pane_empty_t4

0x2671,	// (0x0001a766) main_pane_empty_t5_ParamLimits

0x2671,	// (0x0001a766) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00027644) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00027644) main_pane_empty_t

0xb742,	// (0x00023837) bg_popup_window_pane_ParamLimits

0xb742,	// (0x00023837) bg_popup_window_pane

0xd036,	// (0x0002512b) find_popup_pane_cp2_ParamLimits

0xd036,	// (0x0002512b) find_popup_pane_cp2

0xd042,	// (0x00025137) heading_pane_ParamLimits

0xd042,	// (0x00025137) heading_pane

0xb003,	// (0x000230f8) bg_popup_sub_pane

0x8fd1,	// (0x000210c6) bg_popup_window_pane_g1_ParamLimits

0x8fd1,	// (0x000210c6) bg_popup_window_pane_g1

0x8fe0,	// (0x000210d5) bg_popup_window_pane_g2_ParamLimits

0x8fe0,	// (0x000210d5) bg_popup_window_pane_g2

0x8fec,	// (0x000210e1) bg_popup_window_pane_g3_ParamLimits

0x8fec,	// (0x000210e1) bg_popup_window_pane_g3

0x8ff8,	// (0x000210ed) bg_popup_window_pane_g4_ParamLimits

0x8ff8,	// (0x000210ed) bg_popup_window_pane_g4

0x9007,	// (0x000210fc) bg_popup_window_pane_g5_ParamLimits

0x9007,	// (0x000210fc) bg_popup_window_pane_g5

0x9017,	// (0x0002110c) bg_popup_window_pane_g6_ParamLimits

0x9017,	// (0x0002110c) bg_popup_window_pane_g6

0x9023,	// (0x00021118) bg_popup_window_pane_g7_ParamLimits

0x9023,	// (0x00021118) bg_popup_window_pane_g7

0x9032,	// (0x00021127) bg_popup_window_pane_g8_ParamLimits

0x9032,	// (0x00021127) bg_popup_window_pane_g8

0x9041,	// (0x00021136) bg_popup_window_pane_g9_ParamLimits

0x9041,	// (0x00021136) bg_popup_window_pane_g9

0xd01b,	// (0x00025110) bg_popup_window_pane_g10_ParamLimits

0xd01b,	// (0x00025110) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x00027999) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x00027999) bg_popup_window_pane_g

0xcfd2,	// (0x000250c7) bg_popup_heading_pane_ParamLimits

0xcfd2,	// (0x000250c7) bg_popup_heading_pane

0x572d,	// (0x0001d822) tabs_4_passive_pane_cp_srt_ParamLimits

0x572d,	// (0x0001d822) tabs_4_passive_pane_cp_srt

0x573f,	// (0x0001d834) tabs_4_passive_pane_srt_ParamLimits

0xcfe6,	// (0x000250db) heading_pane_g2

0x573f,	// (0x0001d834) tabs_4_passive_pane_srt

0xc458,	// (0x0002454d) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc458,	// (0x0002454d) bg_passive_tab_pane_cp3_srt

0xcfee,	// (0x000250e3) heading_pane_t1_ParamLimits

0xcfee,	// (0x000250e3) heading_pane_t1

0xd005,	// (0x000250fa) heading_pane_t2_ParamLimits

0xd005,	// (0x000250fa) heading_pane_t2

0x0001,

0xf89f,	// (0x00027994) heading_pane_t_ParamLimits

0xf89f,	// (0x00027994) heading_pane_t

0xcb61,	// (0x00024c56) bg_popup_heading_pane_g1

0xcbf2,	// (0x00024ce7) bg_popup_heading_pane_g2

0xcbfa,	// (0x00024cef) bg_popup_heading_pane_g3

0xcc02,	// (0x00024cf7) bg_popup_heading_pane_g4

0xcc0a,	// (0x00024cff) bg_popup_heading_pane_g5

0xcc12,	// (0x00024d07) bg_popup_heading_pane_g6

0xcc1a,	// (0x00024d0f) bg_popup_heading_pane_g7

0xcc22,	// (0x00024d17) bg_popup_heading_pane_g8

0xcc2a,	// (0x00024d1f) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x00027950) bg_popup_heading_pane_g

0xc3cc,	// (0x000244c1) bg_popup_sub_pane_g1

0xc3d4,	// (0x000244c9) bg_popup_sub_pane_g2

0xc3dc,	// (0x000244d1) bg_popup_sub_pane_g3

0xc3e4,	// (0x000244d9) bg_popup_sub_pane_g4

0xc3ec,	// (0x000244e1) bg_popup_sub_pane_g5

0xc3f4,	// (0x000244e9) bg_popup_sub_pane_g6

0xc3fc,	// (0x000244f1) bg_popup_sub_pane_g7

0xc404,	// (0x000244f9) bg_popup_sub_pane_g8

0xc40c,	// (0x00024501) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x0002792a) bg_popup_sub_pane_g

0xb051,	// (0x00023146) bg_popup_window_pane_cp5_ParamLimits

0xb051,	// (0x00023146) bg_popup_window_pane_cp5

0xb1a8,	// (0x0002329d) popup_note_window_g1_ParamLimits

0xb1a8,	// (0x0002329d) popup_note_window_g1

0xb1b4,	// (0x000232a9) popup_note_window_t1_ParamLimits

0xb1b4,	// (0x000232a9) popup_note_window_t1

0xb1ca,	// (0x000232bf) popup_note_window_t2_ParamLimits

0xb1ca,	// (0x000232bf) popup_note_window_t2

0xb1e0,	// (0x000232d5) popup_note_window_t3_ParamLimits

0xb1e0,	// (0x000232d5) popup_note_window_t3

0xb1f6,	// (0x000232eb) popup_note_window_t4_ParamLimits

0xb1f6,	// (0x000232eb) popup_note_window_t4

0xb21e,	// (0x00023313) popup_note_window_t5_ParamLimits

0xb21e,	// (0x00023313) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002764f) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002764f) popup_note_window_t

0xb268,	// (0x0002335d) bg_popup_window_pane_cp6_ParamLimits

0xb268,	// (0x0002335d) bg_popup_window_pane_cp6

0xcadd,	// (0x00024bd2) popup_note_image_window_g1_ParamLimits

0xcadd,	// (0x00024bd2) popup_note_image_window_g1

0xcae9,	// (0x00024bde) popup_note_image_window_g2_ParamLimits

0xcae9,	// (0x00024bde) popup_note_image_window_g2

0x0001,

0xf829,	// (0x0002791e) popup_note_image_window_g_ParamLimits

0xf829,	// (0x0002791e) popup_note_image_window_g

0xcb02,	// (0x00024bf7) popup_note_image_window_t1_ParamLimits

0xcb02,	// (0x00024bf7) popup_note_image_window_t1

0xcb1b,	// (0x00024c10) popup_note_image_window_t2_ParamLimits

0xcb1b,	// (0x00024c10) popup_note_image_window_t2

0xcb34,	// (0x00024c29) popup_note_image_window_t3_ParamLimits

0xcb34,	// (0x00024c29) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x00027923) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x00027923) popup_note_image_window_t

0xc9c8,	// (0x00024abd) bg_popup_window_pane_cp7_ParamLimits

0xc9c8,	// (0x00024abd) bg_popup_window_pane_cp7

0xc9f8,	// (0x00024aed) popup_note_wait_window_g1_ParamLimits

0xc9f8,	// (0x00024aed) popup_note_wait_window_g1

0xca04,	// (0x00024af9) popup_note_wait_window_g2_ParamLimits

0xca04,	// (0x00024af9) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x0002790c) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x0002790c) popup_note_wait_window_g

0xca1c,	// (0x00024b11) popup_note_wait_window_t1_ParamLimits

0xca1c,	// (0x00024b11) popup_note_wait_window_t1

0xca43,	// (0x00024b38) popup_note_wait_window_t2_ParamLimits

0xca43,	// (0x00024b38) popup_note_wait_window_t2

0xca60,	// (0x00024b55) popup_note_wait_window_t3_ParamLimits

0xca60,	// (0x00024b55) popup_note_wait_window_t3

0xca73,	// (0x00024b68) popup_note_wait_window_t4_ParamLimits

0xca73,	// (0x00024b68) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x00027913) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x00027913) popup_note_wait_window_t

0xca98,	// (0x00024b8d) wait_bar_pane_ParamLimits

0xca98,	// (0x00024b8d) wait_bar_pane

0xb003,	// (0x000230f8) wait_anim_pane

0xb003,	// (0x000230f8) wait_border_pane

0xaf81,	// (0x00023076) wait_anim_pane_g1

0xaf81,	// (0x00023076) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x000277d3) wait_anim_pane_g

0xc978,	// (0x00024a6d) wait_border_pane_g1

0xc981,	// (0x00024a76) wait_border_pane_g2

0xc98a,	// (0x00024a7f) wait_border_pane_g3

0x0002,

0xf810,	// (0x00027905) wait_border_pane_g

0xc79e,	// (0x00024893) bg_popup_window_pane_cp16_ParamLimits

0xc79e,	// (0x00024893) bg_popup_window_pane_cp16

0xc89e,	// (0x00024993) indicator_popup_pane_cp4_ParamLimits

0xc89e,	// (0x00024993) indicator_popup_pane_cp4

0xc8b2,	// (0x000249a7) popup_query_data_window_t1_ParamLimits

0xc8b2,	// (0x000249a7) popup_query_data_window_t1

0xc8c4,	// (0x000249b9) popup_query_data_window_t2_ParamLimits

0xc8c4,	// (0x000249b9) popup_query_data_window_t2

0xc927,	// (0x00024a1c) popup_query_data_window_t3_ParamLimits

0xc927,	// (0x00024a1c) popup_query_data_window_t3

0x0002,

0xf809,	// (0x000278fe) popup_query_data_window_t_ParamLimits

0xf809,	// (0x000278fe) popup_query_data_window_t

0xc941,	// (0x00024a36) query_popup_data_pane_ParamLimits

0xc941,	// (0x00024a36) query_popup_data_pane

0xc955,	// (0x00024a4a) query_popup_data_pane_cp1_ParamLimits

0xc955,	// (0x00024a4a) query_popup_data_pane_cp1

0xc79e,	// (0x00024893) bg_popup_window_pane_cp10_ParamLimits

0xc79e,	// (0x00024893) bg_popup_window_pane_cp10

0xc7d0,	// (0x000248c5) indicator_popup_pane_ParamLimits

0xc7d0,	// (0x000248c5) indicator_popup_pane

0xc7f2,	// (0x000248e7) popup_query_code_window_t1_ParamLimits

0xc7f2,	// (0x000248e7) popup_query_code_window_t1

0xc80c,	// (0x00024901) popup_query_code_window_t2_ParamLimits

0xc80c,	// (0x00024901) popup_query_code_window_t2

0xc855,	// (0x0002494a) popup_query_code_window_t3_ParamLimits

0xc855,	// (0x0002494a) popup_query_code_window_t3

0x0002,

0xf802,	// (0x000278f7) popup_query_code_window_t_ParamLimits

0xf802,	// (0x000278f7) popup_query_code_window_t

0xc884,	// (0x00024979) query_popup_pane_ParamLimits

0xc884,	// (0x00024979) query_popup_pane

0xb268,	// (0x0002335d) bg_popup_window_pane_cp15_ParamLimits

0xb268,	// (0x0002335d) bg_popup_window_pane_cp15

0xb286,	// (0x0002337b) indicator_popup_pane_cp1_ParamLimits

0xb286,	// (0x0002337b) indicator_popup_pane_cp1

0xb299,	// (0x0002338e) indicator_popup_pane_cp2_ParamLimits

0xb299,	// (0x0002338e) indicator_popup_pane_cp2

0xb2ac,	// (0x000233a1) popup_query_data_code_window_g1_ParamLimits

0xb2ac,	// (0x000233a1) popup_query_data_code_window_g1

0xb2bf,	// (0x000233b4) popup_query_data_code_window_t1_ParamLimits

0xb2bf,	// (0x000233b4) popup_query_data_code_window_t1

0xb2d1,	// (0x000233c6) popup_query_data_code_window_t2_ParamLimits

0xb2d1,	// (0x000233c6) popup_query_data_code_window_t2

0xb2e3,	// (0x000233d8) popup_query_data_code_window_t3_ParamLimits

0xb2e3,	// (0x000233d8) popup_query_data_code_window_t3

0xb2f9,	// (0x000233ee) popup_query_data_code_window_t4_ParamLimits

0xb2f9,	// (0x000233ee) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002765a) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002765a) popup_query_data_code_window_t

0xbe6d,	// (0x00023f62) list_single_midp_graphic_pane_g3

0xb311,	// (0x00023406) query_popup_data_pane_cp2_ParamLimits

0xb324,	// (0x00023419) query_popup_pane_cp2_ParamLimits

0xb324,	// (0x00023419) query_popup_pane_cp2

0xb003,	// (0x000230f8) bg_popup_window_pane_cp11

0xc782,	// (0x00024877) heading_pane_cp5

0xc78a,	// (0x0002487f) listscroll_popup_info_pane

0xb003,	// (0x000230f8) input_focus_pane_cp3

0xb337,	// (0x0002342c) query_popup_pane_t1

0xb345,	// (0x0002343a) list_popup_info_pane_ParamLimits

0xb345,	// (0x0002343a) list_popup_info_pane

0xb354,	// (0x00023449) listscroll_popup_info_pane_g1

0xb35c,	// (0x00023451) scroll_pane_cp7

0xb364,	// (0x00023459) popup_info_list_pane_t1_ParamLimits

0xb364,	// (0x00023459) popup_info_list_pane_t1

0xb37e,	// (0x00023473) popup_info_list_pane_t2_ParamLimits

0xb37e,	// (0x00023473) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00027663) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00027663) popup_info_list_pane_t

0xb003,	// (0x000230f8) bg_popup_window_pane_cp12

0xd63e,	// (0x00025733) find_popup_pane

0xb067,	// (0x0002315c) bg_popup_window_pane_cp3

0xb398,	// (0x0002348d) heading_pane_cp3

0xb3a7,	// (0x0002349c) listscroll_popup_graphic_pane

0xb003,	// (0x000230f8) bg_popup_window_pane_cp4

0x26d4,	// (0x0001a7c9) heading_pane_cp4

0xb3b6,	// (0x000234ab) listscroll_popup_colour_pane

0xb3be,	// (0x000234b3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb3be,	// (0x000234b3) cell_large_graphic_colour_none_popup_pane

0x26dc,	// (0x0001a7d1) grid_large_graphic_colour_popup_pane_ParamLimits

0x26dc,	// (0x0001a7d1) grid_large_graphic_colour_popup_pane

0xb3ce,	// (0x000234c3) listscroll_popup_colour_pane_g1_ParamLimits

0xb3ce,	// (0x000234c3) listscroll_popup_colour_pane_g1

0xb3e5,	// (0x000234da) listscroll_popup_colour_pane_g2_ParamLimits

0xb3e5,	// (0x000234da) listscroll_popup_colour_pane_g2

0xb3fc,	// (0x000234f1) listscroll_popup_colour_pane_g3_ParamLimits

0xb3fc,	// (0x000234f1) listscroll_popup_colour_pane_g3

0x26f8,	// (0x0001a7ed) listscroll_popup_colour_pane_g4_ParamLimits

0x26f8,	// (0x0001a7ed) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00027668) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00027668) listscroll_popup_colour_pane_g

0xb40c,	// (0x00023501) scroll_pane_cp6_ParamLimits

0xb40c,	// (0x00023501) scroll_pane_cp6

0x2707,	// (0x0001a7fc) cell_large_graphic_colour_popup_pane_ParamLimits

0x2707,	// (0x0001a7fc) cell_large_graphic_colour_popup_pane

0xb41e,	// (0x00023513) cell_large_graphic_colour_none_popup_pane_t1

0xb003,	// (0x000230f8) grid_highlight_pane_cp5

0xb42d,	// (0x00023522) cell_large_graphic_colour_popup_pane_g1

0xb435,	// (0x0002352a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00027671) cell_large_graphic_colour_popup_pane_g

0xb43d,	// (0x00023532) cell_large_graphic_colour_popup_pane_g2_copy1

0xb446,	// (0x0002353b) grid_highlight_pane_cp4

0xb44e,	// (0x00023543) bg_popup_window_pane_cp8_ParamLimits

0xb44e,	// (0x00023543) bg_popup_window_pane_cp8

0xb469,	// (0x0002355e) popup_snote_single_text_window_g1_ParamLimits

0xb469,	// (0x0002355e) popup_snote_single_text_window_g1

0xb47b,	// (0x00023570) popup_snote_single_text_window_t1_ParamLimits

0xb47b,	// (0x00023570) popup_snote_single_text_window_t1

0xb48e,	// (0x00023583) popup_snote_single_text_window_t2_ParamLimits

0xb48e,	// (0x00023583) popup_snote_single_text_window_t2

0xb4a1,	// (0x00023596) popup_snote_single_text_window_t3_ParamLimits

0xb4a1,	// (0x00023596) popup_snote_single_text_window_t3

0xb4da,	// (0x000235cf) popup_snote_single_text_window_t4_ParamLimits

0xb4da,	// (0x000235cf) popup_snote_single_text_window_t4

0xb50e,	// (0x00023603) popup_snote_single_text_window_t5_ParamLimits

0xb50e,	// (0x00023603) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00027676) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00027676) popup_snote_single_text_window_t

0xb53d,	// (0x00023632) bg_popup_window_pane_cp9_ParamLimits

0xb53d,	// (0x00023632) bg_popup_window_pane_cp9

0xb469,	// (0x0002355e) popup_snote_single_graphic_window_g1_ParamLimits

0xb469,	// (0x0002355e) popup_snote_single_graphic_window_g1

0xb54b,	// (0x00023640) popup_snote_single_graphic_window_g2_ParamLimits

0xb54b,	// (0x00023640) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00027681) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00027681) popup_snote_single_graphic_window_g

0xb557,	// (0x0002364c) popup_snote_single_graphic_window_t1_ParamLimits

0xb557,	// (0x0002364c) popup_snote_single_graphic_window_t1

0xb56a,	// (0x0002365f) popup_snote_single_graphic_window_t2_ParamLimits

0xb56a,	// (0x0002365f) popup_snote_single_graphic_window_t2

0xb4a1,	// (0x00023596) popup_snote_single_graphic_window_t3_ParamLimits

0xb4a1,	// (0x00023596) popup_snote_single_graphic_window_t3

0xb4da,	// (0x000235cf) popup_snote_single_graphic_window_t4_ParamLimits

0xb4da,	// (0x000235cf) popup_snote_single_graphic_window_t4

0xb50e,	// (0x00023603) popup_snote_single_graphic_window_t5_ParamLimits

0xb50e,	// (0x00023603) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00027686) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00027686) popup_snote_single_graphic_window_t

0x933e,	// (0x00021433) grid_graphic_popup_pane_ParamLimits

0x933e,	// (0x00021433) grid_graphic_popup_pane

0x9361,	// (0x00021456) listscroll_popup_graphic_pane_g1_ParamLimits

0x9361,	// (0x00021456) listscroll_popup_graphic_pane_g1

0x9375,	// (0x0002146a) listscroll_popup_graphic_pane_g2_ParamLimits

0x9375,	// (0x0002146a) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x00027a74) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x00027a74) listscroll_popup_graphic_pane_g

0xc91b,	// (0x00024a10) scroll_pane_cp5

0x92fa,	// (0x000213ef) cell_graphic_popup_pane_ParamLimits

0x92fa,	// (0x000213ef) cell_graphic_popup_pane

0xd5e7,	// (0x000256dc) cell_graphic_popup_pane_g1

0xd5ef,	// (0x000256e4) cell_graphic_popup_pane_g2

0xb43d,	// (0x00023532) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x00027a6d) cell_graphic_popup_pane_g

0xd5f8,	// (0x000256ed) cell_graphic_popup_pane_t2

0xb446,	// (0x0002353b) grid_highlight_pane_cp3

0xb58f,	// (0x00023684) list_gen_pane_ParamLimits

0xb58f,	// (0x00023684) list_gen_pane

0xb5b8,	// (0x000236ad) scroll_pane

0x92cd,	// (0x000213c2) bg_list_pane_g1_ParamLimits

0x92cd,	// (0x000213c2) bg_list_pane_g1

0xd59e,	// (0x00025693) bg_list_pane_g2_ParamLimits

0xd59e,	// (0x00025693) bg_list_pane_g2

0xd5b1,	// (0x000256a6) bg_list_pane_g3_ParamLimits

0xd5b1,	// (0x000256a6) bg_list_pane_g3

0xd5c3,	// (0x000256b8) bg_list_pane_g4_ParamLimits

0xd5c3,	// (0x000256b8) bg_list_pane_g4

0x92e8,	// (0x000213dd) bg_list_pane_g5_ParamLimits

0x92e8,	// (0x000213dd) bg_list_pane_g5

0x0004,

0xf96d,	// (0x00027a62) bg_list_pane_g_ParamLimits

0xf96d,	// (0x00027a62) bg_list_pane_g

0x92a6,	// (0x0002139b) list_double2_graphic_large_graphic_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double2_graphic_large_graphic_pane

0x92a6,	// (0x0002139b) list_double2_graphic_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double2_graphic_pane

0x92a6,	// (0x0002139b) list_double2_large_graphic_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double2_large_graphic_pane

0x92a6,	// (0x0002139b) list_double2_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double2_pane

0x92a6,	// (0x0002139b) list_double_graphic_heading_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_graphic_heading_pane

0x92a6,	// (0x0002139b) list_double_graphic_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_graphic_pane

0x92a6,	// (0x0002139b) list_double_heading_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_heading_pane

0x92a6,	// (0x0002139b) list_double_large_graphic_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_large_graphic_pane

0x92a6,	// (0x0002139b) list_double_number_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_number_pane

0x92a6,	// (0x0002139b) list_double_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_pane

0x92a6,	// (0x0002139b) list_double_time_pane_ParamLimits

0x92a6,	// (0x0002139b) list_double_time_pane

0x92a6,	// (0x0002139b) list_setting_number_pane_ParamLimits

0x92a6,	// (0x0002139b) list_setting_number_pane

0x92a6,	// (0x0002139b) list_setting_pane_ParamLimits

0x92a6,	// (0x0002139b) list_setting_pane

0x92b8,	// (0x000213ad) list_single_2graphic_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_2graphic_pane

0x92b8,	// (0x000213ad) list_single_graphic_heading_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_graphic_heading_pane

0x92b8,	// (0x000213ad) list_single_graphic_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_graphic_pane

0x92b8,	// (0x000213ad) list_single_heading_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_heading_pane

0x7cf1,	// (0x0001fde6) list_single_large_graphic_pane_ParamLimits

0x7cf1,	// (0x0001fde6) list_single_large_graphic_pane

0x92b8,	// (0x000213ad) list_single_number_heading_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_number_heading_pane

0x92b8,	// (0x000213ad) list_single_number_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_number_pane

0x92b8,	// (0x000213ad) list_single_pane_ParamLimits

0x92b8,	// (0x000213ad) list_single_pane

0xb003,	// (0x000230f8) list_highlight_pane_cp1

0x36d8,	// (0x0001b7cd) list_single_pane_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_pane_g1

0x36e4,	// (0x0001b7d9) list_single_pane_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00027698) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00027698) list_single_pane_g

0x3f89,	// (0x0001c07e) list_single_pane_t1_ParamLimits

0x3f89,	// (0x0001c07e) list_single_pane_t1

0x36d8,	// (0x0001b7cd) list_single_number_pane_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_number_pane_g1

0x36e4,	// (0x0001b7d9) list_single_number_pane_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00027698) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00027698) list_single_number_pane_g

0x36f0,	// (0x0001b7e5) list_single_number_pane_t1_ParamLimits

0x36f0,	// (0x0001b7e5) list_single_number_pane_t1

0x3f4a,	// (0x0001c03f) list_single_number_pane_t2_ParamLimits

0x3f4a,	// (0x0001c03f) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x00027a23) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x00027a23) list_single_number_pane_t

0x3e3f,	// (0x0001bf34) list_single_graphic_pane_g1_ParamLimits

0x3e3f,	// (0x0001bf34) list_single_graphic_pane_g1

0x36d8,	// (0x0001b7cd) list_single_graphic_pane_g2_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_graphic_pane_g2

0x36e4,	// (0x0001b7d9) list_single_graphic_pane_g3_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00027691) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00027691) list_single_graphic_pane_g

0x36f0,	// (0x0001b7e5) list_single_graphic_pane_t1_ParamLimits

0x36f0,	// (0x0001b7e5) list_single_graphic_pane_t1

0x36d8,	// (0x0001b7cd) list_single_heading_pane_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_heading_pane_g1

0x36e4,	// (0x0001b7d9) list_single_heading_pane_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00027698) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00027698) list_single_heading_pane_g

0x3706,	// (0x0001b7fb) list_single_heading_pane_t1_ParamLimits

0x3706,	// (0x0001b7fb) list_single_heading_pane_t1

0x371c,	// (0x0001b811) list_single_heading_pane_t2_ParamLimits

0x371c,	// (0x0001b811) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002769d) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002769d) list_single_heading_pane_t

0x36d8,	// (0x0001b7cd) list_single_number_heading_pane_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_number_heading_pane_g1

0x36e4,	// (0x0001b7d9) list_single_number_heading_pane_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00027698) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00027698) list_single_number_heading_pane_g

0x3706,	// (0x0001b7fb) list_single_number_heading_pane_t1_ParamLimits

0x3706,	// (0x0001b7fb) list_single_number_heading_pane_t1

0x372e,	// (0x0001b823) list_single_number_heading_pane_t2_ParamLimits

0x372e,	// (0x0001b823) list_single_number_heading_pane_t2

0x3740,	// (0x0001b835) list_single_number_heading_pane_t3_ParamLimits

0x3740,	// (0x0001b835) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x000276a2) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x000276a2) list_single_number_heading_pane_t

0x3e3f,	// (0x0001bf34) list_single_graphic_heading_pane_g1_ParamLimits

0x3e3f,	// (0x0001bf34) list_single_graphic_heading_pane_g1

0x79fa,	// (0x0001faef) list_single_graphic_heading_pane_g4_ParamLimits

0x79fa,	// (0x0001faef) list_single_graphic_heading_pane_g4

0x36e4,	// (0x0001b7d9) list_single_graphic_heading_pane_g5_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000276a9) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000276a9) list_single_graphic_heading_pane_g

0x3706,	// (0x0001b7fb) list_single_graphic_heading_pane_t1_ParamLimits

0x3706,	// (0x0001b7fb) list_single_graphic_heading_pane_t1

0x3761,	// (0x0001b856) list_single_graphic_heading_pane_t2_ParamLimits

0x3761,	// (0x0001b856) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000276b0) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000276b0) list_single_graphic_heading_pane_t

0x40a0,	// (0x0001c195) list_single_large_graphic_pane_g1_ParamLimits

0x40a0,	// (0x0001c195) list_single_large_graphic_pane_g1

0x40ac,	// (0x0001c1a1) list_single_large_graphic_pane_g2_ParamLimits

0x40ac,	// (0x0001c1a1) list_single_large_graphic_pane_g2

0x40b8,	// (0x0001c1ad) list_single_large_graphic_pane_g3_ParamLimits

0x40b8,	// (0x0001c1ad) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000276b5) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000276b5) list_single_large_graphic_pane_g

0xc981,	// (0x00024a76) wait_border_pane_g2_copy1

0x7a0b,	// (0x0001fb00) list_single_large_graphic_pane_g4_cp2

0x40c4,	// (0x0001c1b9) list_single_large_graphic_pane_t1_ParamLimits

0x40c4,	// (0x0001c1b9) list_single_large_graphic_pane_t1

0x37b5,	// (0x0001b8aa) list_double_pane_g1_ParamLimits

0x37b5,	// (0x0001b8aa) list_double_pane_g1

0x37c1,	// (0x0001b8b6) list_double_pane_g2_ParamLimits

0x37c1,	// (0x0001b8b6) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000276bc) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000276bc) list_double_pane_g

0x37cd,	// (0x0001b8c2) list_double_pane_t1_ParamLimits

0x37cd,	// (0x0001b8c2) list_double_pane_t1

0x37e3,	// (0x0001b8d8) list_double_pane_t2_ParamLimits

0x37e3,	// (0x0001b8d8) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000276c1) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000276c1) list_double_pane_t

0x7a13,	// (0x0001fb08) list_double2_pane_g1_ParamLimits

0x7a13,	// (0x0001fb08) list_double2_pane_g1

0x3999,	// (0x0001ba8e) list_double2_pane_g2_ParamLimits

0x3999,	// (0x0001ba8e) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000276c6) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000276c6) list_double2_pane_g

0x7a24,	// (0x0001fb19) list_double2_pane_t1_ParamLimits

0x7a24,	// (0x0001fb19) list_double2_pane_t1

0x39fe,	// (0x0001baf3) list_double2_pane_t2_ParamLimits

0x39fe,	// (0x0001baf3) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000276cb) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000276cb) list_double2_pane_t

0x37b5,	// (0x0001b8aa) list_double_number_pane_g1_ParamLimits

0x37b5,	// (0x0001b8aa) list_double_number_pane_g1

0x37c1,	// (0x0001b8b6) list_double_number_pane_g2_ParamLimits

0x37c1,	// (0x0001b8b6) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000276bc) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000276bc) list_double_number_pane_g

0x3838,	// (0x0001b92d) list_double_number_pane_t1_ParamLimits

0x3838,	// (0x0001b92d) list_double_number_pane_t1

0x384a,	// (0x0001b93f) list_double_number_pane_t2_ParamLimits

0x384a,	// (0x0001b93f) list_double_number_pane_t2

0x3860,	// (0x0001b955) list_double_number_pane_t3_ParamLimits

0x3860,	// (0x0001b955) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000276d0) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000276d0) list_double_number_pane_t

0x36cc,	// (0x0001b7c1) list_double_graphic_pane_g1_ParamLimits

0x36cc,	// (0x0001b7c1) list_double_graphic_pane_g1

0x3872,	// (0x0001b967) list_double_graphic_pane_g2_ParamLimits

0x3872,	// (0x0001b967) list_double_graphic_pane_g2

0x3881,	// (0x0001b976) list_double_graphic_pane_g3_ParamLimits

0x3881,	// (0x0001b976) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000276d7) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000276d7) list_double_graphic_pane_g

0x3899,	// (0x0001b98e) list_double_graphic_pane_t1_ParamLimits

0x3899,	// (0x0001b98e) list_double_graphic_pane_t1

0x38af,	// (0x0001b9a4) list_double_graphic_pane_t2_ParamLimits

0x38af,	// (0x0001b9a4) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000276e0) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000276e0) list_double_graphic_pane_t

0x38c1,	// (0x0001b9b6) list_double2_graphic_pane_g1_ParamLimits

0x38c1,	// (0x0001b9b6) list_double2_graphic_pane_g1

0x37b5,	// (0x0001b8aa) list_double2_graphic_pane_g2_ParamLimits

0x37b5,	// (0x0001b8aa) list_double2_graphic_pane_g2

0x37c1,	// (0x0001b8b6) list_double2_graphic_pane_g3_ParamLimits

0x37c1,	// (0x0001b8b6) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000276e5) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000276e5) list_double2_graphic_pane_g

0x38cd,	// (0x0001b9c2) list_double2_graphic_pane_t1_ParamLimits

0x38cd,	// (0x0001b9c2) list_double2_graphic_pane_t1

0x38e3,	// (0x0001b9d8) list_double2_graphic_pane_t2_ParamLimits

0x38e3,	// (0x0001b9d8) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000276ec) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000276ec) list_double2_graphic_pane_t

0x7a3a,	// (0x0001fb2f) list_double_large_graphic_pane_g1_ParamLimits

0x7a3a,	// (0x0001fb2f) list_double_large_graphic_pane_g1

0x7a63,	// (0x0001fb58) list_double_large_graphic_pane_g2_ParamLimits

0x7a63,	// (0x0001fb58) list_double_large_graphic_pane_g2

0x37c1,	// (0x0001b8b6) list_double_large_graphic_pane_g3_ParamLimits

0x37c1,	// (0x0001b8b6) list_double_large_graphic_pane_g3

0x7a74,	// (0x0001fb69) list_double_large_graphic_pane_g4_ParamLimits

0x7a74,	// (0x0001fb69) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000276f1) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000276f1) list_double_large_graphic_pane_g

0x3953,	// (0x0001ba48) list_double_large_graphic_pane_t1_ParamLimits

0x3953,	// (0x0001ba48) list_double_large_graphic_pane_t1

0x396c,	// (0x0001ba61) list_double_large_graphic_pane_t2_ParamLimits

0x396c,	// (0x0001ba61) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000276fc) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000276fc) list_double_large_graphic_pane_t

0x397e,	// (0x0001ba73) list_double2_large_graphic_pane_g1_ParamLimits

0x397e,	// (0x0001ba73) list_double2_large_graphic_pane_g1

0x7a13,	// (0x0001fb08) list_double2_large_graphic_pane_g2_ParamLimits

0x7a13,	// (0x0001fb08) list_double2_large_graphic_pane_g2

0x3999,	// (0x0001ba8e) list_double2_large_graphic_pane_g3_ParamLimits

0x3999,	// (0x0001ba8e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00027701) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00027701) list_double2_large_graphic_pane_g

0x39a5,	// (0x0001ba9a) list_double2_large_graphic_pane_t1_ParamLimits

0x39a5,	// (0x0001ba9a) list_double2_large_graphic_pane_t1

0x39bb,	// (0x0001bab0) list_double2_large_graphic_pane_t2_ParamLimits

0x39bb,	// (0x0001bab0) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00027708) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00027708) list_double2_large_graphic_pane_t

0x7a85,	// (0x0001fb7a) list_double_heading_pane_g1_ParamLimits

0x7a85,	// (0x0001fb7a) list_double_heading_pane_g1

0x39dc,	// (0x0001bad1) list_double_heading_pane_g2_ParamLimits

0x39dc,	// (0x0001bad1) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002770d) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002770d) list_double_heading_pane_g

0x39e8,	// (0x0001badd) list_double_heading_pane_t1_ParamLimits

0x39e8,	// (0x0001badd) list_double_heading_pane_t1

0x39fe,	// (0x0001baf3) list_double_heading_pane_t2_ParamLimits

0x39fe,	// (0x0001baf3) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00027712) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00027712) list_double_heading_pane_t

0x3a10,	// (0x0001bb05) list_double_graphic_heading_pane_g1_ParamLimits

0x3a10,	// (0x0001bb05) list_double_graphic_heading_pane_g1

0x7a85,	// (0x0001fb7a) list_double_graphic_heading_pane_g2_ParamLimits

0x7a85,	// (0x0001fb7a) list_double_graphic_heading_pane_g2

0x39dc,	// (0x0001bad1) list_double_graphic_heading_pane_g3_ParamLimits

0x39dc,	// (0x0001bad1) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00027717) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00027717) list_double_graphic_heading_pane_g

0x3a1c,	// (0x0001bb11) list_double_graphic_heading_pane_t1_ParamLimits

0x3a1c,	// (0x0001bb11) list_double_graphic_heading_pane_t1

0x38e3,	// (0x0001b9d8) list_double_graphic_heading_pane_t2_ParamLimits

0x38e3,	// (0x0001b9d8) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002771e) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002771e) list_double_graphic_heading_pane_t

0x7a63,	// (0x0001fb58) list_double_time_pane_g1_ParamLimits

0x7a63,	// (0x0001fb58) list_double_time_pane_g1

0x37c1,	// (0x0001b8b6) list_double_time_pane_g2_ParamLimits

0x37c1,	// (0x0001b8b6) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00027723) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00027723) list_double_time_pane_g

0x3a32,	// (0x0001bb27) list_double_time_pane_t1_ParamLimits

0x3a32,	// (0x0001bb27) list_double_time_pane_t1

0x3a48,	// (0x0001bb3d) list_double_time_pane_t2_ParamLimits

0x3a48,	// (0x0001bb3d) list_double_time_pane_t2

0x3a5a,	// (0x0001bb4f) list_double_time_pane_t3_ParamLimits

0x3a5a,	// (0x0001bb4f) list_double_time_pane_t3

0x3a6c,	// (0x0001bb61) list_double_time_pane_t4_ParamLimits

0x3a6c,	// (0x0001bb61) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00027728) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00027728) list_double_time_pane_t

0x3a7e,	// (0x0001bb73) list_setting_pane_g1_ParamLimits

0x3a7e,	// (0x0001bb73) list_setting_pane_g1

0x3999,	// (0x0001ba8e) list_setting_pane_g2_ParamLimits

0x3999,	// (0x0001ba8e) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00027731) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00027731) list_setting_pane_g

0x3a8a,	// (0x0001bb7f) list_setting_pane_t1_ParamLimits

0x3a8a,	// (0x0001bb7f) list_setting_pane_t1

0x3aa4,	// (0x0001bb99) list_setting_pane_t2_ParamLimits

0x3aa4,	// (0x0001bb99) list_setting_pane_t2

0x0002,

0xf641,	// (0x00027736) list_setting_pane_t_ParamLimits

0xf641,	// (0x00027736) list_setting_pane_t

0x3ae1,	// (0x0001bbd6) set_value_pane_cp_ParamLimits

0x3ae1,	// (0x0001bbd6) set_value_pane_cp

0x3aed,	// (0x0001bbe2) list_setting_number_pane_g1_ParamLimits

0x3aed,	// (0x0001bbe2) list_setting_number_pane_g1

0x3af9,	// (0x0001bbee) list_setting_number_pane_g2_ParamLimits

0x3af9,	// (0x0001bbee) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002773d) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002773d) list_setting_number_pane_g

0x7a96,	// (0x0001fb8b) list_setting_number_pane_t1_ParamLimits

0x7a96,	// (0x0001fb8b) list_setting_number_pane_t1

0x3b1c,	// (0x0001bc11) list_setting_number_pane_t2_ParamLimits

0x3b1c,	// (0x0001bc11) list_setting_number_pane_t2

0x7aaf,	// (0x0001fba4) list_setting_number_pane_t3_ParamLimits

0x7aaf,	// (0x0001fba4) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00027742) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00027742) list_setting_number_pane_t

0x3ae1,	// (0x0001bbd6) set_value_pane_ParamLimits

0x3ae1,	// (0x0001bbd6) set_value_pane

0xb5ed,	// (0x000236e2) bg_set_opt_pane_ParamLimits

0xb5ed,	// (0x000236e2) bg_set_opt_pane

0x3b77,	// (0x0001bc6c) set_value_pane_t1

0xb60e,	// (0x00023703) slider_set_pane_cp3

0xb617,	// (0x0002370c) volume_small_pane_cp

0xb620,	// (0x00023715) list_form_gen_pane

0xb5dc,	// (0x000236d1) scroll_pane_cp8

0x7ac7,	// (0x0001fbbc) form_field_data_pane_ParamLimits

0x7ac7,	// (0x0001fbbc) form_field_data_pane

0x7ade,	// (0x0001fbd3) form_field_data_wide_pane_ParamLimits

0x7ade,	// (0x0001fbd3) form_field_data_wide_pane

0x7afe,	// (0x0001fbf3) form_field_popup_pane_ParamLimits

0x7afe,	// (0x0001fbf3) form_field_popup_pane

0x7b16,	// (0x0001fc0b) form_field_popup_wide_pane_ParamLimits

0x7b16,	// (0x0001fc0b) form_field_popup_wide_pane

0x3bfb,	// (0x0001bcf0) form_field_slider_pane_ParamLimits

0x3bfb,	// (0x0001bcf0) form_field_slider_pane

0x3c0e,	// (0x0001bd03) form_field_slider_wide_pane_ParamLimits

0x3c0e,	// (0x0001bd03) form_field_slider_wide_pane

0xb629,	// (0x0002371e) data_form_pane

0x2ae2,	// (0x0001abd7) form_field_data_pane_t1

0xb635,	// (0x0002372a) input_focus_pane

0xb643,	// (0x00023738) data_form_wide_pane

0x3c35,	// (0x0001bd2a) form_field_data_wide_pane_t1

0xb45b,	// (0x00023550) input_focus_pane_cp6

0x7b37,	// (0x0001fc2c) form_field_popup_pane_t1

0xb635,	// (0x0002372a) input_focus_pane_cp7

0xb629,	// (0x0002371e) list_form_pane

0x3c77,	// (0x0001bd6c) form_field_popup_wide_pane_t1

0xb635,	// (0x0002372a) input_focus_pane_cp8

0xb66f,	// (0x00023764) list_form_wide_pane

0x7b57,	// (0x0001fc4c) form_field_slider_pane_t1_ParamLimits

0x7b57,	// (0x0001fc4c) form_field_slider_pane_t1

0x7b6d,	// (0x0001fc62) form_field_slider_pane_t2_ParamLimits

0x7b6d,	// (0x0001fc62) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00027752) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00027752) form_field_slider_pane_t

0xb051,	// (0x00023146) input_focus_pane_cp9_ParamLimits

0xb051,	// (0x00023146) input_focus_pane_cp9

0x7b82,	// (0x0001fc77) slider_cont_pane_ParamLimits

0x7b82,	// (0x0001fc77) slider_cont_pane

0xb67e,	// (0x00023773) form_field_slider_wide_pane_t1_ParamLimits

0xb67e,	// (0x00023773) form_field_slider_wide_pane_t1

0x3ccc,	// (0x0001bdc1) form_field_slider_wide_pane_t2_ParamLimits

0x3ccc,	// (0x0001bdc1) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00027757) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00027757) form_field_slider_wide_pane_t

0xb051,	// (0x00023146) input_focus_pane_cp10_ParamLimits

0xb051,	// (0x00023146) input_focus_pane_cp10

0x7b96,	// (0x0001fc8b) slider_cont_pane_cp1_ParamLimits

0x7b96,	// (0x0001fc8b) slider_cont_pane_cp1

0x7bac,	// (0x0001fca1) slider_form_pane_cp

0xb690,	// (0x00023785) input_focus_pane_g1

0xb698,	// (0x0002378d) input_focus_pane_g2

0xb6a0,	// (0x00023795) input_focus_pane_g3

0xb6a8,	// (0x0002379d) input_focus_pane_g4

0xb6b0,	// (0x000237a5) input_focus_pane_g5

0xb6b8,	// (0x000237ad) input_focus_pane_g6

0xb6c0,	// (0x000237b5) input_focus_pane_g7

0xb6c8,	// (0x000237bd) input_focus_pane_g8

0xb6d0,	// (0x000237c5) input_focus_pane_g9

0xaf81,	// (0x00023076) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002775c) input_focus_pane_g

0xc98a,	// (0x00024a7f) wait_border_pane_g3_copy1

0x7bb4,	// (0x0001fca9) data_form_pane_t1

0xaf81,	// (0x00023076) wait_anim_pane_g1_copy1

0x7c9c,	// (0x0001fd91) data_form_wide_pane_t1

0x7bcd,	// (0x0001fcc2) list_form_graphic_pane_cp_ParamLimits

0x7bcd,	// (0x0001fcc2) list_form_graphic_pane_cp

0xd541,	// (0x00025636) slider_form_pane_g1

0xd54a,	// (0x0002563f) slider_form_pane_g2

0x0006,

0xf95e,	// (0x00027a53) slider_form_pane_g

0x7be1,	// (0x0001fcd6) list_form_graphic_pane_ParamLimits

0x7be1,	// (0x0001fcd6) list_form_graphic_pane

0x3d2c,	// (0x0001be21) list_form_graphic_pane_g1

0x3d34,	// (0x0001be29) list_form_graphic_pane_t1_ParamLimits

0x3d34,	// (0x0001be29) list_form_graphic_pane_t1

0xb067,	// (0x0002315c) list_highlight_pane_cp5_ParamLimits

0xb067,	// (0x0002315c) list_highlight_pane_cp5

0x7bf6,	// (0x0001fceb) find_pane_g1

0xb6d8,	// (0x000237cd) input_find_pane

0x3d52,	// (0x0001be47) input_find_pane_g1_ParamLimits

0x3d52,	// (0x0001be47) input_find_pane_g1

0x7c01,	// (0x0001fcf6) input_find_pane_t1_ParamLimits

0x7c01,	// (0x0001fcf6) input_find_pane_t1

0x7c16,	// (0x0001fd0b) input_find_pane_t2_ParamLimits

0x7c16,	// (0x0001fd0b) input_find_pane_t2

0x0001,

0xf67c,	// (0x00027771) input_find_pane_t_ParamLimits

0xf67c,	// (0x00027771) input_find_pane_t

0xb6e1,	// (0x000237d6) input_focus_pane_cp5_ParamLimits

0xb6e1,	// (0x000237d6) input_focus_pane_cp5

0xb051,	// (0x00023146) bg_popup_window_pane_cp2_ParamLimits

0xb051,	// (0x00023146) bg_popup_window_pane_cp2

0xb700,	// (0x000237f5) listscroll_menu_pane_ParamLimits

0xb700,	// (0x000237f5) listscroll_menu_pane

0xb70c,	// (0x00023801) popup_submenu_window_ParamLimits

0xb70c,	// (0x00023801) popup_submenu_window

0xb730,	// (0x00023825) find_popup_pane_g1

0xb738,	// (0x0002382d) input_popup_find_pane_cp

0xb742,	// (0x00023837) input_focus_pane_cp4_ParamLimits

0xb742,	// (0x00023837) input_focus_pane_cp4

0xb750,	// (0x00023845) input_popup_find_pane_t1_ParamLimits

0xb750,	// (0x00023845) input_popup_find_pane_t1

0xb003,	// (0x000230f8) bg_popup_sub_pane_cp

0xb77e,	// (0x00023873) listscroll_popup_sub_pane

0xb786,	// (0x0002387b) list_submenu_pane_ParamLimits

0xb786,	// (0x0002387b) list_submenu_pane

0xb797,	// (0x0002388c) scroll_pane_cp4

0xb79f,	// (0x00023894) list_single_popup_submenu_pane_ParamLimits

0xb79f,	// (0x00023894) list_single_popup_submenu_pane

0xb7b1,	// (0x000238a6) list_single_popup_submenu_pane_g1

0xb7b9,	// (0x000238ae) list_single_popup_submenu_pane_t1_ParamLimits

0xb7b9,	// (0x000238ae) list_single_popup_submenu_pane_t1

0xb051,	// (0x00023146) bg_active_tab_pane_cp1_ParamLimits

0xb051,	// (0x00023146) bg_active_tab_pane_cp1

0xc8f5,	// (0x000249ea) tabs_2_active_pane_g1

0x2bd9,	// (0x0001acce) tabs_2_active_pane_t1

0xb051,	// (0x00023146) bg_passive_tab_pane_cp1_ParamLimits

0xb051,	// (0x00023146) bg_passive_tab_pane_cp1

0xc8f5,	// (0x000249ea) tabs_2_passive_pane_g1

0x2bd9,	// (0x0001acce) tabs_2_passive_pane_t1

0xb067,	// (0x0002315c) bg_active_tab_pane_cp4

0x2bef,	// (0x0001ace4) tabs_2_long_active_pane_t1

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp4

0xc90f,	// (0x00024a04) list_single_midp_graphic_pane_g4_ParamLimits

0xb067,	// (0x0002315c) bg_active_tab_pane_cp5

0x2c06,	// (0x0001acfb) tabs_3_long_active_pane_t1

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp5

0xc90f,	// (0x00024a04) list_single_midp_graphic_pane_g4

0xb067,	// (0x0002315c) bg_popup_window_pane_cp13_ParamLimits

0xb067,	// (0x0002315c) bg_popup_window_pane_cp13

0xb7e3,	// (0x000238d8) listscroll_popup_fast_pane_ParamLimits

0xb7e3,	// (0x000238d8) listscroll_popup_fast_pane

0xb7f2,	// (0x000238e7) grid_popup_fast_pane_ParamLimits

0xb7f2,	// (0x000238e7) grid_popup_fast_pane

0xb804,	// (0x000238f9) scroll_pane_cp9_ParamLimits

0xb804,	// (0x000238f9) scroll_pane_cp9

0xe86a,	// (0x0002695f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe86a,	// (0x0002695f) list_single_graphic_hl_pane_t1_cp2

0xb828,	// (0x0002391d) input_focus_pane_cp20_ParamLimits

0xb828,	// (0x0002391d) input_focus_pane_cp20

0xb836,	// (0x0002392b) query_popup_data_pane_t1_ParamLimits

0xb836,	// (0x0002392b) query_popup_data_pane_t1

0xb849,	// (0x0002393e) query_popup_data_pane_t2_ParamLimits

0xb849,	// (0x0002393e) query_popup_data_pane_t2

0xb88f,	// (0x00023984) query_popup_data_pane_t3_ParamLimits

0xb88f,	// (0x00023984) query_popup_data_pane_t3

0xb8d0,	// (0x000239c5) query_popup_data_pane_t4_ParamLimits

0xb8d0,	// (0x000239c5) query_popup_data_pane_t4

0xb90c,	// (0x00023a01) query_popup_data_pane_t5_ParamLimits

0xb90c,	// (0x00023a01) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00027776) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00027776) query_popup_data_pane_t

0xb690,	// (0x00023785) bg_set_opt_pane_g1

0xb698,	// (0x0002378d) bg_set_opt_pane_g2

0xb6a0,	// (0x00023795) bg_set_opt_pane_g3

0xb6a8,	// (0x0002379d) bg_set_opt_pane_g4

0xb6b0,	// (0x000237a5) bg_set_opt_pane_g5

0xb6b8,	// (0x000237ad) bg_set_opt_pane_g6

0xb6c0,	// (0x000237b5) bg_set_opt_pane_g7

0xb6c8,	// (0x000237bd) bg_set_opt_pane_g8

0xb6d0,	// (0x000237c5) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00027781) bg_set_opt_pane_g

0x4c07,	// (0x0001ccfc) control_top_pane_stacon_ParamLimits

0x4c07,	// (0x0001ccfc) control_top_pane_stacon

0x4c5a,	// (0x0001cd4f) signal_pane_stacon_ParamLimits

0x4c5a,	// (0x0001cd4f) signal_pane_stacon

0xbcff,	// (0x00023df4) stacon_top_pane_g1_ParamLimits

0xbcff,	// (0x00023df4) stacon_top_pane_g1

0x4c7f,	// (0x0001cd74) title_pane_stacon_ParamLimits

0x4c7f,	// (0x0001cd74) title_pane_stacon

0x4ca1,	// (0x0001cd96) uni_indicator_pane_stacon_ParamLimits

0x4ca1,	// (0x0001cd96) uni_indicator_pane_stacon

0x4cb6,	// (0x0001cdab) battery_pane_stacon_ParamLimits

0x4cb6,	// (0x0001cdab) battery_pane_stacon

0x4cf6,	// (0x0001cdeb) control_bottom_pane_stacon_ParamLimits

0x4cf6,	// (0x0001cdeb) control_bottom_pane_stacon

0x4d15,	// (0x0001ce0a) navi_pane_stacon_ParamLimits

0x4d15,	// (0x0001ce0a) navi_pane_stacon

0xbd21,	// (0x00023e16) stacon_bottom_pane_g1_ParamLimits

0xbd21,	// (0x00023e16) stacon_bottom_pane_g1

0xb943,	// (0x00023a38) aid_levels_signal_lsc_ParamLimits

0xb943,	// (0x00023a38) aid_levels_signal_lsc

0x49d3,	// (0x0001cac8) signal_pane_stacon_g1_ParamLimits

0x49d3,	// (0x0001cac8) signal_pane_stacon_g1

0x49df,	// (0x0001cad4) signal_pane_stacon_g2_ParamLimits

0x49df,	// (0x0001cad4) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00027794) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00027794) signal_pane_stacon_g

0x4a13,	// (0x0001cb08) title_pane_stacon_t1_ParamLimits

0x4a13,	// (0x0001cb08) title_pane_stacon_t1

0xb95d,	// (0x00023a52) uni_indicator_pane_stacon_g1

0xb967,	// (0x00023a5c) uni_indicator_pane_stacon_g2

0xb971,	// (0x00023a66) uni_indicator_pane_stacon_g3

0xb97b,	// (0x00023a70) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x000277a0) uni_indicator_pane_stacon_g

0x4a38,	// (0x0001cb2d) control_top_pane_stacon_g1

0x4a40,	// (0x0001cb35) control_top_pane_stacon_t1_ParamLimits

0x4a40,	// (0x0001cb35) control_top_pane_stacon_t1

0xb985,	// (0x00023a7a) aid_levels_battery_lsc_ParamLimits

0xb985,	// (0x00023a7a) aid_levels_battery_lsc

0x4a71,	// (0x0001cb66) battery_pane_stacon_g1_ParamLimits

0x4a71,	// (0x0001cb66) battery_pane_stacon_g1

0x4a7d,	// (0x0001cb72) battery_pane_stacon_g2_ParamLimits

0x4a7d,	// (0x0001cb72) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x000277a9) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x000277a9) battery_pane_stacon_g

0x4aac,	// (0x0001cba1) navi_icon_pane_stacon

0x4abc,	// (0x0001cbb1) navi_navi_pane_stacon

0x4aac,	// (0x0001cba1) navi_text_pane_stacon

0x4a38,	// (0x0001cb2d) control_bottom_pane_stacon_g1

0x4acc,	// (0x0001cbc1) control_bottom_pane_stacon_t1_ParamLimits

0x4acc,	// (0x0001cbc1) control_bottom_pane_stacon_t1

0x2c1c,	// (0x0001ad11) grid_app_pane_ParamLimits

0x2c1c,	// (0x0001ad11) grid_app_pane

0x2c4a,	// (0x0001ad3f) scroll_pane_cp15_ParamLimits

0x2c4a,	// (0x0001ad3f) scroll_pane_cp15

0x2c5d,	// (0x0001ad52) cell_app_pane_ParamLimits

0x2c5d,	// (0x0001ad52) cell_app_pane

0x2c9a,	// (0x0001ad8f) cell_app_pane_g1_ParamLimits

0x2c9a,	// (0x0001ad8f) cell_app_pane_g1

0xb9ad,	// (0x00023aa2) cell_app_pane_g2_ParamLimits

0xb9ad,	// (0x00023aa2) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x000277ae) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x000277ae) cell_app_pane_g

0x2cbe,	// (0x0001adb3) cell_app_pane_t1_ParamLimits

0x2cbe,	// (0x0001adb3) cell_app_pane_t1

0xb9b9,	// (0x00023aae) grid_highlight_pane_ParamLimits

0xb9b9,	// (0x00023aae) grid_highlight_pane

0xb690,	// (0x00023785) cell_highlight_pane_g1

0xb698,	// (0x0002378d) cell_highlight_pane_g2

0xb6a0,	// (0x00023795) cell_highlight_pane_g3

0xb6a8,	// (0x0002379d) cell_highlight_pane_g4

0xb6b0,	// (0x000237a5) cell_highlight_pane_g5

0xb6b8,	// (0x000237ad) cell_highlight_pane_g6

0xb6c0,	// (0x000237b5) cell_highlight_pane_g7

0xb6c8,	// (0x000237bd) cell_highlight_pane_g8

0xb6d0,	// (0x000237c5) cell_highlight_pane_g9

0xaf81,	// (0x00023076) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002775c) cell_highlight_pane_g

0xb9ca,	// (0x00023abf) bg_scroll_pane

0x4b10,	// (0x0001cc05) scroll_handle_pane

0xba11,	// (0x00023b06) scroll_bg_pane_g1

0xba26,	// (0x00023b1b) scroll_bg_pane_g2

0xba3e,	// (0x00023b33) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x000277b3) scroll_bg_pane_g

0xba53,	// (0x00023b48) scroll_handle_focus_pane_ParamLimits

0xba53,	// (0x00023b48) scroll_handle_focus_pane

0xba11,	// (0x00023b06) scroll_handle_pane_g1

0xba60,	// (0x00023b55) scroll_handle_pane_g2

0xba3e,	// (0x00023b33) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x000277ba) scroll_handle_pane_g

0xb742,	// (0x00023837) bg_popup_sub_pane_cp21_ParamLimits

0xb742,	// (0x00023837) bg_popup_sub_pane_cp21

0xba74,	// (0x00023b69) popup_fep_japan_predictive_window_t1_ParamLimits

0xba74,	// (0x00023b69) popup_fep_japan_predictive_window_t1

0xba8b,	// (0x00023b80) popup_fep_japan_predictive_window_t2_ParamLimits

0xba8b,	// (0x00023b80) popup_fep_japan_predictive_window_t2

0xbabe,	// (0x00023bb3) popup_fep_japan_predictive_window_t3_ParamLimits

0xbabe,	// (0x00023bb3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x000277c1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x000277c1) popup_fep_japan_predictive_window_t

0xb003,	// (0x000230f8) bg_popup_sub_pane_cp23

0xbaf5,	// (0x00023bea) listscroll_japin_cand_pane

0xbafd,	// (0x00023bf2) popup_fep_japan_candidate_window_t1

0xbb0b,	// (0x00023c00) candidate_pane_ParamLimits

0xbb0b,	// (0x00023c00) candidate_pane

0xbb1e,	// (0x00023c13) scroll_pane_cp30

0xbb26,	// (0x00023c1b) list_single_popup_jap_candidate_pane_ParamLimits

0xbb26,	// (0x00023c1b) list_single_popup_jap_candidate_pane

0xb003,	// (0x000230f8) list_highlight_pane_cp30

0xbb3b,	// (0x00023c30) list_single_popup_jap_candidate_pane_t1

0x8096,	// (0x0002018b) level_1_signal

0x80a8,	// (0x0002019d) level_2_signal

0x80bb,	// (0x000201b0) level_3_signal

0x80ce,	// (0x000201c3) level_4_signal

0x80e1,	// (0x000201d6) level_5_signal

0x80f4,	// (0x000201e9) level_6_signal

0x8107,	// (0x000201fc) level_7_signal

0x8096,	// (0x0002018b) level_1_battery

0x80a8,	// (0x0002019d) level_2_battery

0x80bb,	// (0x000201b0) level_3_battery

0x80ce,	// (0x000201c3) level_4_battery

0x80e1,	// (0x000201d6) level_5_battery

0x80f4,	// (0x000201e9) level_6_battery

0x8107,	// (0x000201fc) level_7_battery

0xbb62,	// (0x00023c57) list_menu_pane_ParamLimits

0xbb62,	// (0x00023c57) list_menu_pane

0xbb78,	// (0x00023c6d) scroll_pane_cp25_ParamLimits

0xbb78,	// (0x00023c6d) scroll_pane_cp25

0x811a,	// (0x0002020f) list_double2_graphic_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double2_graphic_pane_cp2

0x811a,	// (0x0002020f) list_double2_large_graphic_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double2_large_graphic_pane_cp2

0x811a,	// (0x0002020f) list_double2_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double2_pane_cp2

0x811a,	// (0x0002020f) list_double_graphic_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double_graphic_pane_cp2

0x811a,	// (0x0002020f) list_double_large_graphic_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double_large_graphic_pane_cp2

0x811a,	// (0x0002020f) list_double_number_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double_number_pane_cp2

0x811a,	// (0x0002020f) list_double_pane_cp2_ParamLimits

0x811a,	// (0x0002020f) list_double_pane_cp2

0x8135,	// (0x0002022a) list_single_2graphic_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_2graphic_pane_cp2

0x8135,	// (0x0002022a) list_single_graphic_heading_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_graphic_heading_pane_cp2

0x8135,	// (0x0002022a) list_single_graphic_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_graphic_pane_cp2

0x8135,	// (0x0002022a) list_single_heading_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_heading_pane_cp2

0x8146,	// (0x0002023b) list_single_large_graphic_pane_cp2_ParamLimits

0x8146,	// (0x0002023b) list_single_large_graphic_pane_cp2

0x8135,	// (0x0002022a) list_single_number_heading_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_number_heading_pane_cp2

0x8135,	// (0x0002022a) list_single_number_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_number_pane_cp2

0x8156,	// (0x0002024b) list_single_pane_cp2_ParamLimits

0x8156,	// (0x0002024b) list_single_pane_cp2

0xbb9a,	// (0x00023c8f) bg_popup_sub_pane_cp22

0x4bbf,	// (0x0001ccb4) popup_side_volume_key_window_g1

0x4be3,	// (0x0001ccd8) popup_side_volume_key_window_t1

0x4bff,	// (0x0001ccf4) volume_small_pane_cp1

0xb051,	// (0x00023146) bg_popup_sub_pane_cp24_ParamLimits

0xb051,	// (0x00023146) bg_popup_sub_pane_cp24

0xbbb0,	// (0x00023ca5) fep_china_uni_candidate_pane_ParamLimits

0xbbb0,	// (0x00023ca5) fep_china_uni_candidate_pane

0xbbc4,	// (0x00023cb9) fep_china_uni_entry_pane

0xbbd4,	// (0x00023cc9) popup_fep_china_uni_window_g1

0xbbf0,	// (0x00023ce5) fep_china_uni_entry_pane_g1

0xbbf8,	// (0x00023ced) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x000277f2) fep_china_uni_entry_pane_g

0xbc00,	// (0x00023cf5) fep_entry_item_pane

0xbc0a,	// (0x00023cff) fep_candidate_item_pane

0xbc12,	// (0x00023d07) fep_china_uni_candidate_pane_g1

0xbc1a,	// (0x00023d0f) fep_china_uni_candidate_pane_g2

0xbc22,	// (0x00023d17) fep_china_uni_candidate_pane_g3

0xbc2a,	// (0x00023d1f) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x000277f7) fep_china_uni_candidate_pane_g

0xaf81,	// (0x00023076) fep_entry_item_pane_g1

0xbc32,	// (0x00023d27) fep_entry_item_pane_t1_ParamLimits

0xbc32,	// (0x00023d27) fep_entry_item_pane_t1

0xbc48,	// (0x00023d3d) fep_candidate_item_pane_t1_ParamLimits

0xbc48,	// (0x00023d3d) fep_candidate_item_pane_t1

0xbc5d,	// (0x00023d52) fep_candidate_item_pane_t2_ParamLimits

0xbc5d,	// (0x00023d52) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00027800) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00027800) fep_candidate_item_pane_t

0xb067,	// (0x0002315c) list_highlight_pane_cp31_ParamLimits

0xb067,	// (0x0002315c) list_highlight_pane_cp31

0xbc6f,	// (0x00023d64) level_1_signal_lsc

0xbc78,	// (0x00023d6d) level_2_signal_lsc

0xbc81,	// (0x00023d76) level_3_signal_lsc

0xbc8a,	// (0x00023d7f) level_4_signal_lsc

0xbc93,	// (0x00023d88) level_5_signal_lsc

0xbc9c,	// (0x00023d91) level_6_signal_lsc

0xbca5,	// (0x00023d9a) level_7_signal_lsc

0xbca5,	// (0x00023d9a) level_1_battery_lsc

0xbcae,	// (0x00023da3) level_2_battery_lsc

0xbcb7,	// (0x00023dac) level_3_battery_lsc

0xbcc0,	// (0x00023db5) level_4_battery_lsc

0xbcc9,	// (0x00023dbe) level_5_battery_lsc

0xbcd2,	// (0x00023dc7) level_6_battery_lsc

0xbc6f,	// (0x00023d64) level_7_battery_lsc

0xbcdb,	// (0x00023dd0) scroll_handle_focus_pane_g1

0xbce4,	// (0x00023dd9) scroll_handle_focus_pane_g2

0xbced,	// (0x00023de2) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00027805) scroll_handle_focus_pane_g

0x7c2b,	// (0x0001fd20) list_single_2graphic_pane_g1_ParamLimits

0x7c2b,	// (0x0001fd20) list_single_2graphic_pane_g1

0x79fa,	// (0x0001faef) list_single_2graphic_pane_g2_ParamLimits

0x79fa,	// (0x0001faef) list_single_2graphic_pane_g2

0x36e4,	// (0x0001b7d9) list_single_2graphic_pane_g3_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_2graphic_pane_g3

0x7c37,	// (0x0001fd2c) list_single_2graphic_pane_g4_ParamLimits

0x7c37,	// (0x0001fd2c) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002780c) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002780c) list_single_2graphic_pane_g

0x7c48,	// (0x0001fd3d) list_single_2graphic_pane_t1_ParamLimits

0x7c48,	// (0x0001fd3d) list_single_2graphic_pane_t1

0x7c76,	// (0x0001fd6b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7c76,	// (0x0001fd6b) list_double2_graphic_large_graphic_pane_g1

0x7a13,	// (0x0001fb08) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7a13,	// (0x0001fb08) list_double2_graphic_large_graphic_pane_g2

0x3999,	// (0x0001ba8e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x3999,	// (0x0001ba8e) list_double2_graphic_large_graphic_pane_g3

0x3dde,	// (0x0001bed3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x3dde,	// (0x0001bed3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00027815) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00027815) list_double2_graphic_large_graphic_pane_g

0x3dea,	// (0x0001bedf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x3dea,	// (0x0001bedf) list_double2_graphic_large_graphic_pane_t1

0x3e00,	// (0x0001bef5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x3e00,	// (0x0001bef5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002781e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002781e) list_double2_graphic_large_graphic_pane_t

0xbdc8,	// (0x00023ebd) popup_fast_swap_window_ParamLimits

0xbdc8,	// (0x00023ebd) popup_fast_swap_window

0xbde4,	// (0x00023ed9) popup_side_volume_key_window

0xbdfe,	// (0x00023ef3) stacon_top_pane

0xbe08,	// (0x00023efd) status_pane_ParamLimits

0xbe08,	// (0x00023efd) status_pane

0xaf77,	// (0x0002306c) status_small_pane

0xb003,	// (0x000230f8) control_pane

0xb003,	// (0x000230f8) stacon_bottom_pane

0xb5dc,	// (0x000236d1) scroll_pane_cp121

0xb620,	// (0x00023715) set_content_pane

0xc8fd,	// (0x000249f2) bg_active_tab_pane_g1_cp1

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp1

0xc906,	// (0x000249fb) bg_active_tab_pane_g3_cp1

0xc8fd,	// (0x000249f2) bg_passive_tab_pane_g1_cp1

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp1

0xc906,	// (0x000249fb) bg_passive_tab_pane_g3_cp1

0x81dc,	// (0x000202d1) bg_active_tab_pane_g1_cp2

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp2

0x81e5,	// (0x000202da) bg_active_tab_pane_g3_cp2

0x81dc,	// (0x000202d1) bg_passive_tab_pane_g1_cp2

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp2

0x81e5,	// (0x000202da) bg_passive_tab_pane_g3_cp2

0x81ee,	// (0x000202e3) bg_active_tab_pane_g1_cp3

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp3

0x81f7,	// (0x000202ec) bg_active_tab_pane_g3_cp3

0x81ee,	// (0x000202e3) bg_passive_tab_pane_g1_cp3

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp3

0x81f7,	// (0x000202ec) bg_passive_tab_pane_g3_cp3

0x8200,	// (0x000202f5) bg_active_tab_pane_g1_cp4

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp4

0x8209,	// (0x000202fe) bg_active_tab_pane_g3_cp4

0x8200,	// (0x000202f5) bg_passive_tab_pane_g1_cp4

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp4

0x8209,	// (0x000202fe) bg_passive_tab_pane_g3_cp4

0xbd3d,	// (0x00023e32) bg_active_tab_pane_g1_cp5

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp5

0xbd46,	// (0x00023e3b) bg_active_tab_pane_g3_cp5

0xbd3d,	// (0x00023e32) bg_passive_tab_pane_g1_cp5

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp5

0xbd46,	// (0x00023e3b) bg_passive_tab_pane_g3_cp5

0x172d,	// (0x00019822) list_set_graphic_pane_ParamLimits

0x172d,	// (0x00019822) list_set_graphic_pane

0xb003,	// (0x000230f8) bg_set_opt_pane_cp4

0xbd4f,	// (0x00023e44) list_set_graphic_pane_g1_ParamLimits

0xbd4f,	// (0x00023e44) list_set_graphic_pane_g1

0xbd5b,	// (0x00023e50) list_set_graphic_pane_g2_ParamLimits

0xbd5b,	// (0x00023e50) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00027823) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00027823) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x00027b9a) volume_small_pane_cp_g

0xbd7d,	// (0x00023e72) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbd7d,	// (0x00023e72) list_double2_large_graphic_pane_g1_cp2

0xbd89,	// (0x00023e7e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbd89,	// (0x00023e7e) list_double2_large_graphic_pane_g2_cp2

0xbd98,	// (0x00023e8d) list_double2_large_graphic_pane_g3_cp2

0xbda0,	// (0x00023e95) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbda0,	// (0x00023e95) list_double2_large_graphic_pane_t1_cp2

0xbdb6,	// (0x00023eab) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbdb6,	// (0x00023eab) list_double2_large_graphic_pane_t2_cp2

0xd2f9,	// (0x000253ee) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd2f9,	// (0x000253ee) list_double_large_graphic_pane_g1_cp2

0xd30a,	// (0x000253ff) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd30a,	// (0x000253ff) list_double_large_graphic_pane_g2_cp2

0xbee3,	// (0x00023fd8) list_double_large_graphic_pane_g3_cp2

0xd319,	// (0x0002540e) list_double_large_graphic_pane_g4_cp

0xd321,	// (0x00025416) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd321,	// (0x00025416) list_double_large_graphic_pane_t1_cp2

0xd338,	// (0x0002542d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd338,	// (0x0002542d) list_double_large_graphic_pane_t2_cp2

0xbe16,	// (0x00023f0b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbe16,	// (0x00023f0b) list_double2_graphic_pane_g1_cp2

0xbe22,	// (0x00023f17) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbe22,	// (0x00023f17) list_double2_graphic_pane_g2_cp2

0xbe31,	// (0x00023f26) list_double2_graphic_pane_g3_cp2

0xbe39,	// (0x00023f2e) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbe39,	// (0x00023f2e) list_double2_graphic_pane_t1_cp2

0xbe4f,	// (0x00023f44) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbe4f,	// (0x00023f44) list_double2_graphic_pane_t2_cp2

0xbe61,	// (0x00023f56) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_single_number_heading_pane_g1_cp2

0xbe6d,	// (0x00023f62) list_single_number_heading_pane_g2_cp2

0xbe75,	// (0x00023f6a) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbe75,	// (0x00023f6a) list_single_number_heading_pane_t1_cp2

0xbe8b,	// (0x00023f80) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbe8b,	// (0x00023f80) list_single_number_heading_pane_t2_cp2

0xbe9d,	// (0x00023f92) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbe9d,	// (0x00023f92) list_single_number_heading_pane_t3_cp2

0xbe61,	// (0x00023f56) list_single_heading_pane_g1_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_single_heading_pane_g1_cp2

0xbe6d,	// (0x00023f62) list_single_heading_pane_g2_cp2

0xbe75,	// (0x00023f6a) list_single_heading_pane_t1_cp2_ParamLimits

0xbe75,	// (0x00023f6a) list_single_heading_pane_t1_cp2

0xd103,	// (0x000251f8) list_single_heading_pane_t2_cp2_ParamLimits

0xd103,	// (0x000251f8) list_single_heading_pane_t2_cp2

0xd088,	// (0x0002517d) list_double_graphic_pane_g1_cp2_ParamLimits

0xd088,	// (0x0002517d) list_double_graphic_pane_g1_cp2

0xd094,	// (0x00025189) list_double_graphic_pane_g2_cp2_ParamLimits

0xd094,	// (0x00025189) list_double_graphic_pane_g2_cp2

0xd0a3,	// (0x00025198) list_double_graphic_pane_g3_cp2

0xd0ab,	// (0x000251a0) list_double_graphic_pane_t1_cp2_ParamLimits

0xd0ab,	// (0x000251a0) list_double_graphic_pane_t1_cp2

0xd0c1,	// (0x000251b6) list_double_graphic_pane_t2_cp2_ParamLimits

0xd0c1,	// (0x000251b6) list_double_graphic_pane_t2_cp2

0xbed7,	// (0x00023fcc) list_double_number_pane_g1_cp2_ParamLimits

0xbed7,	// (0x00023fcc) list_double_number_pane_g1_cp2

0xbee3,	// (0x00023fd8) list_double_number_pane_g2_cp2

0xd04e,	// (0x00025143) list_double_number_pane_t1_cp2_ParamLimits

0xd04e,	// (0x00025143) list_double_number_pane_t1_cp2

0xd060,	// (0x00025155) list_double_number_pane_t2_cp2_ParamLimits

0xd060,	// (0x00025155) list_double_number_pane_t2_cp2

0xd076,	// (0x0002516b) list_double_number_pane_t3_cp2_ParamLimits

0xd076,	// (0x0002516b) list_double_number_pane_t3_cp2

0xcfc6,	// (0x000250bb) list_single_graphic_pane_g1_cp2_ParamLimits

0xcfc6,	// (0x000250bb) list_single_graphic_pane_g1_cp2

0xbe61,	// (0x00023f56) list_single_graphic_pane_g2_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_single_graphic_pane_g2_cp2

0xbe6d,	// (0x00023f62) list_single_graphic_pane_g3_cp2

0xcf9e,	// (0x00025093) list_single_graphic_pane_t1_cp2_ParamLimits

0xcf9e,	// (0x00025093) list_single_graphic_pane_t1_cp2

0xbe61,	// (0x00023f56) list_single_number_pane_g1_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_single_number_pane_g1_cp2

0xbe6d,	// (0x00023f62) list_single_number_pane_g2_cp2

0xcf9e,	// (0x00025093) list_single_number_pane_t1_cp2_ParamLimits

0xcf9e,	// (0x00025093) list_single_number_pane_t1_cp2

0xcfb4,	// (0x000250a9) list_single_number_pane_t2_cp2_ParamLimits

0xcfb4,	// (0x000250a9) list_single_number_pane_t2_cp2

0xbd89,	// (0x00023e7e) list_double2_pane_g1_cp2_ParamLimits

0xbd89,	// (0x00023e7e) list_double2_pane_g1_cp2

0xbd98,	// (0x00023e8d) list_double2_pane_g2_cp2

0xbeaf,	// (0x00023fa4) list_double2_pane_t1_cp2_ParamLimits

0xbeaf,	// (0x00023fa4) list_double2_pane_t1_cp2

0xbec5,	// (0x00023fba) list_double2_pane_t2_cp2_ParamLimits

0xbec5,	// (0x00023fba) list_double2_pane_t2_cp2

0xbed7,	// (0x00023fcc) list_double_pane_g1_cp2_ParamLimits

0xbed7,	// (0x00023fcc) list_double_pane_g1_cp2

0xbee3,	// (0x00023fd8) list_double_pane_g2_cp2

0xbeeb,	// (0x00023fe0) list_double_pane_t1_cp2_ParamLimits

0xbeeb,	// (0x00023fe0) list_double_pane_t1_cp2

0xbf01,	// (0x00023ff6) list_double_pane_t2_cp2_ParamLimits

0xbf01,	// (0x00023ff6) list_double_pane_t2_cp2

0xbf30,	// (0x00024025) list_single_pane_cp2_g3

0xbe61,	// (0x00023f56) list_single_pane_g1_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_single_pane_g1_cp2

0xbe6d,	// (0x00023f62) list_single_pane_g2_cp2

0xbf40,	// (0x00024035) list_single_pane_t1_cp2_ParamLimits

0xbf40,	// (0x00024035) list_single_pane_t1_cp2

0xbf58,	// (0x0002404d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbf58,	// (0x0002404d) list_single_large_graphic_pane_g1_cp2

0xbf64,	// (0x00024059) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbf64,	// (0x00024059) list_single_large_graphic_pane_g2_cp2

0xbf70,	// (0x00024065) list_single_large_graphic_pane_g3_cp2

0xbf78,	// (0x0002406d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbf78,	// (0x0002406d) list_single_large_graphic_pane_g4_cp1

0xbf92,	// (0x00024087) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbf92,	// (0x00024087) list_single_large_graphic_pane_t1_cp2

0xcf80,	// (0x00025075) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcf80,	// (0x00025075) list_single_graphic_heading_pane_g1_cp2

0xcf5b,	// (0x00025050) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcf5b,	// (0x00025050) list_single_graphic_heading_pane_g4_cp2

0xbe6d,	// (0x00023f62) list_single_graphic_heading_pane_g5_cp2

0xbe75,	// (0x00023f6a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xbe75,	// (0x00023f6a) list_single_graphic_heading_pane_t1_cp2

0xcf8c,	// (0x00025081) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcf8c,	// (0x00025081) list_single_graphic_heading_pane_t2_cp2

0xcf4f,	// (0x00025044) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcf4f,	// (0x00025044) list_single_2graphic_pane_g1_cp2

0xcf5b,	// (0x00025050) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcf5b,	// (0x00025050) list_single_2graphic_pane_g2_cp2

0xbe6d,	// (0x00023f62) list_single_2graphic_pane_g3_cp2

0xc90f,	// (0x00024a04) list_single_2graphic_pane_g4_cp2_ParamLimits

0xc90f,	// (0x00024a04) list_single_2graphic_pane_g4_cp2

0xcf6a,	// (0x0002505f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xcf6a,	// (0x0002505f) list_single_2graphic_pane_t1_cp2

0xaf81,	// (0x00023076) list_highlight_pane_g10_cp1

0xcb61,	// (0x00024c56) list_highlight_pane_g1_cp1

0xcb69,	// (0x00024c5e) list_highlight_pane_g2_cp1

0xcb71,	// (0x00024c66) list_highlight_pane_g3_cp1

0xcb79,	// (0x00024c6e) list_highlight_pane_g4_cp1

0xcb81,	// (0x00024c76) list_highlight_pane_g5_cp1

0xcb89,	// (0x00024c7e) list_highlight_pane_g6_cp1

0xcb91,	// (0x00024c86) list_highlight_pane_g7_cp1

0xcb99,	// (0x00024c8e) list_highlight_pane_g8_cp1

0xcba1,	// (0x00024c96) list_highlight_pane_g9_cp1

0x8e85,	// (0x00020f7a) form_field_slider_pane_t3

0x8e93,	// (0x00020f88) form_field_slider_pane_t4

0xcaab,	// (0x00024ba0) slider_form_pane_ParamLimits

0xcaab,	// (0x00024ba0) slider_form_pane

0xb003,	// (0x000230f8) control_abbreviations

0xb003,	// (0x000230f8) control_conventions

0xb003,	// (0x000230f8) control_definitions

0xb003,	// (0x000230f8) format_table_attribute

0xd14d,	// (0x00025242) bg_popup_preview_window_pane_g9

0xb003,	// (0x000230f8) format_table_data2

0xb003,	// (0x000230f8) format_table_data3

0xb003,	// (0x000230f8) format_table_data_example

0x0008,

0xb003,	// (0x000230f8) intro_purpose

0xf8be,	// (0x000279b3) bg_popup_preview_window_pane_g

0xb003,	// (0x000230f8) texts_category

0xb003,	// (0x000230f8) texts_graphics

0xbfa8,	// (0x0002409d) text_digital

0xbfb7,	// (0x000240ac) text_primary

0xbfc6,	// (0x000240bb) text_primary_small

0xbfd5,	// (0x000240ca) text_secondary

0xbfe4,	// (0x000240d9) text_title

0xd5d5,	// (0x000256ca) bg_passive_tab_pane_g1_cp3_srt

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp3_srt

0xd5de,	// (0x000256d3) bg_passive_tab_pane_g3_cp3_srt

0xb051,	// (0x00023146) bg_active_tab_pane_cp3_srt_ParamLimits

0xb051,	// (0x00023146) bg_active_tab_pane_cp3_srt

0xc8ed,	// (0x000249e2) tabs_4_active_pane_srt_g1

0x24b4,	// (0x0001a5a9) tabs_4_active_pane_srt_t1_ParamLimits

0x24b4,	// (0x0001a5a9) tabs_4_active_pane_srt_t1

0xd5d5,	// (0x000256ca) bg_active_tab_pane_g1_cp3_copy1

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp3_copy1

0xd5de,	// (0x000256d3) bg_active_tab_pane_g3_cp3_copy1

0xb067,	// (0x0002315c) tabs_2_long_active_pane_srt_ParamLimits

0xb067,	// (0x0002315c) tabs_2_long_active_pane_srt

0xb067,	// (0x0002315c) tabs_2_long_passive_pane_srt_ParamLimits

0xb067,	// (0x0002315c) tabs_2_long_passive_pane_srt

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp4_srt

0xd4fc,	// (0x000255f1) bg_passive_tab_pane_g1_cp4_srt

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp4_srt

0xd505,	// (0x000255fa) bg_passive_tab_pane_g3_cp4_srt

0xb067,	// (0x0002315c) bg_active_tab_pane_cp4_srt_ParamLimits

0xb067,	// (0x0002315c) bg_active_tab_pane_cp4_srt

0x2bef,	// (0x0001ace4) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2bef,	// (0x0001ace4) tabs_2_long_active_pane_srt_t1

0xd4fc,	// (0x000255f1) bg_active_tab_pane_g1_cp4_srt

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp4_srt

0xd505,	// (0x000255fa) bg_active_tab_pane_g3_cp4_srt

0xb051,	// (0x00023146) tabs_3_long_active_pane_srt_ParamLimits

0xb051,	// (0x00023146) tabs_3_long_active_pane_srt

0xb051,	// (0x00023146) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb051,	// (0x00023146) tabs_3_long_passive_pane_cp_srt

0xb051,	// (0x00023146) tabs_3_long_passive_pane_srt_ParamLimits

0xb051,	// (0x00023146) tabs_3_long_passive_pane_srt

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp5_srt

0xbd3d,	// (0x00023e32) bg_passive_tab_pane_g1_cp5_srt

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp5_srt

0xbd46,	// (0x00023e3b) bg_passive_tab_pane_g3_cp5_srt

0xb067,	// (0x0002315c) bg_active_tab_pane_cp5_srt_ParamLimits

0xb067,	// (0x0002315c) bg_active_tab_pane_cp5_srt

0x2c06,	// (0x0001acfb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2c06,	// (0x0001acfb) tabs_3_long_active_pane_srt_t1

0xbd3d,	// (0x00023e32) bg_active_tab_pane_g1_cp5_srt

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp5_srt

0xbd46,	// (0x00023e3b) bg_active_tab_pane_g3_cp5_srt

0xd4ee,	// (0x000255e3) navi_text_pane_srt_t1

0xd4e6,	// (0x000255db) navi_icon_pane_srt_g1

0xc0fc,	// (0x000241f1) midp_editing_number_pane_srt

0xbff3,	// (0x000240e8) midp_ticker_pane_srt

0xc104,	// (0x000241f9) midp_ticker_pane_srt_g1

0xc10c,	// (0x00024201) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00027842) midp_ticker_pane_srt_g

0xc114,	// (0x00024209) midp_ticker_pane_srt_t1

0xd4d7,	// (0x000255cc) midp_editing_number_pane_t1_copy1

0x8212,	// (0x00020307) listscroll_midp_pane

0x8212,	// (0x00020307) midp_form_pane

0xbffb,	// (0x000240f0) midp_info_popup_window_ParamLimits

0xbffb,	// (0x000240f0) midp_info_popup_window

0xb742,	// (0x00023837) bg_popup_sub_pane_cp50_ParamLimits

0xb742,	// (0x00023837) bg_popup_sub_pane_cp50

0xc776,	// (0x0002486b) listscroll_midp_info_pane_ParamLimits

0xc776,	// (0x0002486b) listscroll_midp_info_pane

0xc75e,	// (0x00024853) listscroll_form_midp_pane_ParamLimits

0xc75e,	// (0x00024853) listscroll_form_midp_pane

0xc76a,	// (0x0002485f) scroll_bar_cp050

0x8e79,	// (0x00020f6e) list_midp_pane

0xde12,	// (0x00025f07) signal_pane_g2_cp

0xc690,	// (0x00024785) listscroll_midp_info_pane_t1_ParamLimits

0xc690,	// (0x00024785) listscroll_midp_info_pane_t1

0xc6a8,	// (0x0002479d) listscroll_midp_info_pane_t2_ParamLimits

0xc6a8,	// (0x0002479d) listscroll_midp_info_pane_t2

0xc6e6,	// (0x000247db) listscroll_midp_info_pane_t3_ParamLimits

0xc6e6,	// (0x000247db) listscroll_midp_info_pane_t3

0xc720,	// (0x00024815) listscroll_midp_info_pane_t4_ParamLimits

0xc720,	// (0x00024815) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x000278ee) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x000278ee) listscroll_midp_info_pane_t

0xb797,	// (0x0002388c) scroll_pane_cp21

0xc634,	// (0x00024729) form_midp_field_choice_group_pane

0xc63d,	// (0x00024732) form_midp_field_text_pane

0xc676,	// (0x0002476b) form_midp_field_time_pane

0xc67e,	// (0x00024773) form_midp_gauge_slider_pane

0xc687,	// (0x0002477c) form_midp_gauge_wait_pane

0xb003,	// (0x000230f8) form_midp_image_pane

0x7c86,	// (0x0001fd7b) list_single_midp_pane_ParamLimits

0x7c86,	// (0x0001fd7b) list_single_midp_pane

0xc602,	// (0x000246f7) form_midp_field_text_pane_t1

0xc458,	// (0x0002454d) input_focus_pane_cp050

0xc623,	// (0x00024718) list_midp_form_text_pane

0xc5d1,	// (0x000246c6) form_midp_field_choice_group_pane_t1

0xc5df,	// (0x000246d4) input_focus_pane_cp051

0xc5f3,	// (0x000246e8) list_midp_choice_pane

0xb003,	// (0x000230f8) status_idle_pane

0xc5b5,	// (0x000246aa) form_midp_field_time_pane_t1

0xaf81,	// (0x00023076) wait_anim_pane_g2_copy1

0xc5c3,	// (0x000246b8) form_midp_field_time_pane_t2

0x0001,

0xc066,	// (0x0002415b) aid_navinavi_width_2_pane

0xf7f4,	// (0x000278e9) form_midp_field_time_pane_t

0xb003,	// (0x000230f8) input_focus_pane_cp052

0xb003,	// (0x000230f8) bg_input_focus_pane_cp040

0xc591,	// (0x00024686) form_midp_gauge_slider_pane_t1

0xc59f,	// (0x00024694) form_midp_gauge_slider_pane_t2

0x8e5d,	// (0x00020f52) form_midp_gauge_slider_pane_t3

0x8e6b,	// (0x00020f60) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x000278e0) form_midp_gauge_slider_pane_t

0xc5ad,	// (0x000246a2) form_midp_slider_pane

0xb067,	// (0x0002315c) bg_input_focus_pane_cp041_ParamLimits

0xb067,	// (0x0002315c) bg_input_focus_pane_cp041

0xc561,	// (0x00024656) form_midp_gauge_wait_pane_t1_ParamLimits

0xc561,	// (0x00024656) form_midp_gauge_wait_pane_t1

0xc573,	// (0x00024668) form_midp_gauge_wait_pane_t2_ParamLimits

0xc573,	// (0x00024668) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x000278db) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x000278db) form_midp_gauge_wait_pane_t

0xc585,	// (0x0002467a) form_midp_wait_pane_ParamLimits

0xc585,	// (0x0002467a) form_midp_wait_pane

0xc52b,	// (0x00024620) form_midp_image_pane_g1

0xc534,	// (0x00024629) form_midp_image_pane_t1

0xc543,	// (0x00024638) form_midp_image_pane_t2

0xc552,	// (0x00024647) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x000278d4) form_midp_image_pane_t

0xc522,	// (0x00024617) list_single_midp_pane_g1

0x3f25,	// (0x0001c01a) list_single_midp_pane_t1

0xc50e,	// (0x00024603) list_midp_form_item_pane_ParamLimits

0xc50e,	// (0x00024603) list_midp_form_item_pane

0xc00e,	// (0x00024103) list_midp_form_item_pane_t1

0xc01d,	// (0x00024112) midp_ticker_pane_g1

0xc029,	// (0x0002411e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00027828) midp_ticker_pane_g

0xc035,	// (0x0002412a) midp_ticker_pane_t1

0xd4d7,	// (0x000255cc) midp_editing_number_pane_t1

0xd56b,	// (0x00025660) midp_editing_number_pane

0xd577,	// (0x0002566c) midp_ticker_pane

0xd4c7,	// (0x000255bc) ai_message_heading_pane

0xb003,	// (0x000230f8) bg_popup_window_pane_cp14

0xd4cf,	// (0x000255c4) listscroll_ai_message_pane

0xd451,	// (0x00025546) ai_message_heading_pane_g1_ParamLimits

0xd451,	// (0x00025546) ai_message_heading_pane_g1

0xd45d,	// (0x00025552) ai_message_heading_pane_g2_ParamLimits

0xd45d,	// (0x00025552) ai_message_heading_pane_g2

0xd469,	// (0x0002555e) ai_message_heading_pane_g3_ParamLimits

0xd469,	// (0x0002555e) ai_message_heading_pane_g3

0xd475,	// (0x0002556a) ai_message_heading_pane_g4_ParamLimits

0xd475,	// (0x0002556a) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x00027a15) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x00027a15) ai_message_heading_pane_g

0xd481,	// (0x00025576) ai_message_heading_pane_t1_ParamLimits

0xd481,	// (0x00025576) ai_message_heading_pane_t1

0xd49b,	// (0x00025590) ai_message_heading_pane_t2_ParamLimits

0xd49b,	// (0x00025590) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x00027a1e) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x00027a1e) ai_message_heading_pane_t

0xd4ad,	// (0x000255a2) bg_popup_heading_pane_cp1_ParamLimits

0xd4ad,	// (0x000255a2) bg_popup_heading_pane_cp1

0xd43f,	// (0x00025534) list_ai_message_pane_ParamLimits

0xd43f,	// (0x00025534) list_ai_message_pane

0xb797,	// (0x0002388c) scroll_pane_cp10

0xd3db,	// (0x000254d0) list_ai_message_pane_g1

0xd3e3,	// (0x000254d8) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x000279f2) list_ai_message_pane_g

0xd3eb,	// (0x000254e0) list_ai_message_pane_t1_ParamLimits

0xd3eb,	// (0x000254e0) list_ai_message_pane_t1

0xd400,	// (0x000254f5) list_ai_message_pane_t2_ParamLimits

0xd400,	// (0x000254f5) list_ai_message_pane_t2

0xd415,	// (0x0002550a) list_ai_message_pane_t3_ParamLimits

0xd415,	// (0x0002550a) list_ai_message_pane_t3

0xd42a,	// (0x0002551f) list_ai_message_pane_t4_ParamLimits

0xd42a,	// (0x0002551f) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x000279f7) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x000279f7) list_ai_message_pane_t

0xd3c9,	// (0x000254be) cell_ai_soft_ind_pane_ParamLimits

0xd3c9,	// (0x000254be) cell_ai_soft_ind_pane

0xc047,	// (0x0002413c) cell_ai_soft_ind_pane_g1_ParamLimits

0xc047,	// (0x0002413c) cell_ai_soft_ind_pane_g1

0xb003,	// (0x000230f8) grid_highlight_cp1

0xc054,	// (0x00024149) text_secondary_cp56_ParamLimits

0xc054,	// (0x00024149) text_secondary_cp56

0xd39e,	// (0x00025493) example_general_pane_ParamLimits

0xd39e,	// (0x00025493) example_general_pane

0xd3aa,	// (0x0002549f) example_parent_pane_g1_ParamLimits

0xd3aa,	// (0x0002549f) example_parent_pane_g1

0xd3b6,	// (0x000254ab) example_parent_pane_t1_ParamLimits

0xd3b6,	// (0x000254ab) example_parent_pane_t1

0x8783,	// (0x00020878) popup_preview_text_window_ParamLimits

0x8783,	// (0x00020878) popup_preview_text_window

0xbf38,	// (0x0002402d) list_single_pane_cp2_g4

0xb268,	// (0x0002335d) bg_popup_preview_window_pane_ParamLimits

0xb268,	// (0x0002335d) bg_popup_preview_window_pane

0xd155,	// (0x0002524a) popup_preview_text_window_t1_ParamLimits

0xd155,	// (0x0002524a) popup_preview_text_window_t1

0xd173,	// (0x00025268) popup_preview_text_window_t2_ParamLimits

0xd173,	// (0x00025268) popup_preview_text_window_t2

0xd1bc,	// (0x000252b1) popup_preview_text_window_t3_ParamLimits

0xd1bc,	// (0x000252b1) popup_preview_text_window_t3

0xd201,	// (0x000252f6) popup_preview_text_window_t4_ParamLimits

0xd201,	// (0x000252f6) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x000279c6) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x000279c6) popup_preview_text_window_t

0xd27f,	// (0x00025374) scroll_pane_cp11

0xc3cc,	// (0x000244c1) bg_popup_preview_window_pane_g1

0xd115,	// (0x0002520a) bg_popup_preview_window_pane_g2

0xd11d,	// (0x00025212) bg_popup_preview_window_pane_g3

0xd125,	// (0x0002521a) bg_popup_preview_window_pane_g4

0xd12d,	// (0x00025222) bg_popup_preview_window_pane_g5

0xd135,	// (0x0002522a) bg_popup_preview_window_pane_g6

0xd13d,	// (0x00025232) bg_popup_preview_window_pane_g7

0xd145,	// (0x0002523a) bg_popup_preview_window_pane_g8

0x46ce,	// (0x0001c7c3) aid_popup_width_pane

0x8705,	// (0x000207fa) popup_midp_note_alarm_window_ParamLimits

0x8705,	// (0x000207fa) popup_midp_note_alarm_window

0xb629,	// (0x0002371e) data_form_pane_ParamLimits

0x7b2d,	// (0x0001fc22) form_field_data_pane_g1

0x2ae2,	// (0x0001abd7) form_field_data_pane_t1_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_ParamLimits

0xb643,	// (0x00023738) data_form_wide_pane_ParamLimits

0x3c29,	// (0x0001bd1e) form_field_data_wide_pane_g1

0x3c35,	// (0x0001bd2a) form_field_data_wide_pane_t1_ParamLimits

0xb45b,	// (0x00023550) input_focus_pane_cp6_ParamLimits

0x2bcd,	// (0x0001acc2) input_popup_find_pane_g1_ParamLimits

0x2bcd,	// (0x0001acc2) input_popup_find_pane_g1

0x4a8d,	// (0x0001cb82) aid_navi_side_left_pane

0x4a9d,	// (0x0001cb92) aid_navi_side_right_pane

0xcc32,	// (0x00024d27) bg_popup_window_pane_cp30_ParamLimits

0xcc32,	// (0x00024d27) bg_popup_window_pane_cp30

0xccac,	// (0x00024da1) popup_midp_note_alarm_window_g1_ParamLimits

0xccac,	// (0x00024da1) popup_midp_note_alarm_window_g1

0xccdc,	// (0x00024dd1) popup_midp_note_alarm_window_t1_ParamLimits

0xccdc,	// (0x00024dd1) popup_midp_note_alarm_window_t1

0xcd7d,	// (0x00024e72) popup_midp_note_alarm_window_t2_ParamLimits

0xcd7d,	// (0x00024e72) popup_midp_note_alarm_window_t2

0xce2b,	// (0x00024f20) popup_midp_note_alarm_window_t3_ParamLimits

0xce2b,	// (0x00024f20) popup_midp_note_alarm_window_t3

0xce53,	// (0x00024f48) popup_midp_note_alarm_window_t4_ParamLimits

0xce53,	// (0x00024f48) popup_midp_note_alarm_window_t4

0xce73,	// (0x00024f68) popup_midp_note_alarm_window_t5_ParamLimits

0xce73,	// (0x00024f68) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x00027963) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x00027963) popup_midp_note_alarm_window_t

0xcf1f,	// (0x00025014) wait_bar_pane_cp1_ParamLimits

0xcf1f,	// (0x00025014) wait_bar_pane_cp1

0xb003,	// (0x000230f8) wait_anim_pane_copy1

0xb003,	// (0x000230f8) wait_border_pane_copy1

0xc978,	// (0x00024a6d) wait_border_pane_g1_copy1

0x3c4f,	// (0x0001bd44) form_field_popup_pane_g1

0x7b37,	// (0x0001fc2c) form_field_popup_pane_t1_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_cp7_ParamLimits

0xb629,	// (0x0002371e) list_form_pane_ParamLimits

0x3c6f,	// (0x0001bd64) form_field_popup_wide_pane_g1

0x3c77,	// (0x0001bd6c) form_field_popup_wide_pane_t1_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_cp8_ParamLimits

0xb66f,	// (0x00023764) list_form_wide_pane_ParamLimits

0xd606,	// (0x000256fb) aid_size_cell_graphic_pane

0x7bb4,	// (0x0001fca9) data_form_pane_t1_ParamLimits

0x7c9c,	// (0x0001fd91) data_form_wide_pane_t1_ParamLimits

0x8ae1,	// (0x00020bd6) bg_status_flat_pane

0x2411,	// (0x0001a506) title_pane_t1_ParamLimits

0xb019,	// (0x0002310e) title_pane_t2_ParamLimits

0xb03f,	// (0x00023134) title_pane_t3_ParamLimits

0xf532,	// (0x00027627) title_pane_t_ParamLimits

0x8096,	// (0x0002018b) level_1_signal_ParamLimits

0x80a8,	// (0x0002019d) level_2_signal_ParamLimits

0x80bb,	// (0x000201b0) level_3_signal_ParamLimits

0x80ce,	// (0x000201c3) level_4_signal_ParamLimits

0x80e1,	// (0x000201d6) level_5_signal_ParamLimits

0x80f4,	// (0x000201e9) level_6_signal_ParamLimits

0x8107,	// (0x000201fc) level_7_signal_ParamLimits

0x8096,	// (0x0002018b) level_1_battery_ParamLimits

0x80a8,	// (0x0002019d) level_2_battery_ParamLimits

0x80bb,	// (0x000201b0) level_3_battery_ParamLimits

0x80ce,	// (0x000201c3) level_4_battery_ParamLimits

0x80e1,	// (0x000201d6) level_5_battery_ParamLimits

0x80f4,	// (0x000201e9) level_6_battery_ParamLimits

0x8107,	// (0x000201fc) level_7_battery_ParamLimits

0xcb61,	// (0x00024c56) bg_status_flat_pane_g1

0xcb69,	// (0x00024c5e) bg_status_flat_pane_g2

0xcb71,	// (0x00024c66) bg_status_flat_pane_g3

0xcb79,	// (0x00024c6e) bg_status_flat_pane_g4

0xcb81,	// (0x00024c76) bg_status_flat_pane_g5

0xcb89,	// (0x00024c7e) bg_status_flat_pane_g6

0xcb91,	// (0x00024c86) bg_status_flat_pane_g7

0x249e,	// (0x0001a593) tabs_3_active_pane_t1_ParamLimits

0x249e,	// (0x0001a593) tabs_3_passive_pane_t1_ParamLimits

0x24b4,	// (0x0001a5a9) tabs_4_active_pane_t1_ParamLimits

0x24b4,	// (0x0001a5a9) tabs_4_1_passive_pane_t1_ParamLimits

0x2bd9,	// (0x0001acce) tabs_2_active_pane_t1_ParamLimits

0x2bd9,	// (0x0001acce) tabs_2_passive_pane_t1_ParamLimits

0xb067,	// (0x0002315c) bg_active_tab_pane_cp4_ParamLimits

0x2bef,	// (0x0001ace4) tabs_2_long_active_pane_t1_ParamLimits

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp4_ParamLimits

0x5440,	// (0x0001d535) list_single_midp_graphic_pane_t1_ParamLimits

0xb067,	// (0x0002315c) bg_active_tab_pane_cp5_ParamLimits

0x2c06,	// (0x0001acfb) tabs_3_long_active_pane_t1_ParamLimits

0xb7ce,	// (0x000238c3) bg_passive_tab_pane_cp5_ParamLimits

0x5440,	// (0x0001d535) list_single_midp_graphic_pane_t1

0x8ae1,	// (0x00020bd6) bg_status_flat_pane_ParamLimits

0xc2ab,	// (0x000243a0) indicator_pane_cp2_ParamLimits

0xc2ab,	// (0x000243a0) indicator_pane_cp2

0x8c47,	// (0x00020d3c) navi_pane_srt_ParamLimits

0x8c47,	// (0x00020d3c) navi_pane_srt

0xc2d3,	// (0x000243c8) popup_clock_digital_analogue_window_cp1

0xb0ab,	// (0x000231a0) indicator_pane_t1

0xbff3,	// (0x000240e8) copy_highlight_pane

0xbff3,	// (0x000240e8) cursor_graphics_pane

0xbff3,	// (0x000240e8) graphic_within_text_pane

0xbff3,	// (0x000240e8) link_highlight_pane

0xd242,	// (0x00025337) popup_preview_text_window_t5_ParamLimits

0xd242,	// (0x00025337) popup_preview_text_window_t5

0xc06e,	// (0x00024163) cursor_digital_pane

0xc06e,	// (0x00024163) cursor_primary_pane

0xc07f,	// (0x00024174) cursor_primary_small_pane

0xc087,	// (0x0002417c) cursor_secondary_pane

0xc08f,	// (0x00024184) cursor_title_pane

0xc06e,	// (0x00024163) link_highlight_digital_pane

0xc076,	// (0x0002416b) link_highlight_primary_pane

0xc07f,	// (0x00024174) link_highlight_primary_small_pane

0xc087,	// (0x0002417c) link_highlight_secondary_pane

0xc08f,	// (0x00024184) link_highlight_title_pane

0xc06e,	// (0x00024163) copy_highlight_digital_pane

0xc06e,	// (0x00024163) copy_highlight_primary_pane

0xc07f,	// (0x00024174) copy_highlight_primary_small_pane

0xc087,	// (0x0002417c) copy_highlight_secondary_pane

0xc08f,	// (0x00024184) copy_highlight_title_pane

0xc087,	// (0x0002417c) graphic_text_digital_pane

0xcbe1,	// (0x00024cd6) graphic_text_primary_pane

0xcbea,	// (0x00024cdf) graphic_text_primary_small_pane

0xc07f,	// (0x00024174) graphic_text_secondary_pane

0xc06e,	// (0x00024163) graphic_text_title_pane

0x82ae,	// (0x000203a3) cursor_primary_pane_g1

0xcbd3,	// (0x00024cc8) cursor_text_primary_t1

0x8eb5,	// (0x00020faa) cursor_primary_small_pane_g1

0xcbc5,	// (0x00024cba) cursor_text_primary_small_t1

0x8eab,	// (0x00020fa0) cursor_primary_small_pane_g1_copy1

0xcbb7,	// (0x00024cac) cursor_text_primary_small_t1_copy1

0xcba9,	// (0x00024c9e) cursor_text_title_t1

0x8ea1,	// (0x00020f96) cursor_title_pane_g1

0x82ae,	// (0x000203a3) cursor_digital_pane_g1

0xc097,	// (0x0002418c) cursor_text_digital_t1

0xc0a5,	// (0x0002419a) link_highlight_primary_pane_g1

0xcb52,	// (0x00024c47) link_highlight_primary_pane_t1

0xc0a5,	// (0x0002419a) link_highlight_primary_small_pane_g1

0xc0ad,	// (0x000241a2) link_highlight_primary_small_pane_t1

0xc0bc,	// (0x000241b1) link_highlight_secondary_pane_g1

0xc0c4,	// (0x000241b9) link_highlight_secondary_pane_t1

0xcab7,	// (0x00024bac) link_highlight_title_pane_g1

0xcace,	// (0x00024bc3) link_highlight_title_pane_t1

0xcab7,	// (0x00024bac) link_highlight_digital_pane_g1

0xcabf,	// (0x00024bb4) link_highlight_digital_pane_t1

0xc993,	// (0x00024a88) copy_highlight_primary_pane_g1

0xc9b9,	// (0x00024aae) copy_highlight_primary_pane_t1

0xc993,	// (0x00024a88) copy_highlight_primary_small_pane_g1

0xc9aa,	// (0x00024a9f) copy_highlight_primary_small_pane_t1

0xc0d3,	// (0x000241c8) copy_highlight_secondary_pane_g1

0xc0db,	// (0x000241d0) copy_highlight_secondary_pane_t1

0xc993,	// (0x00024a88) copy_highlight_title_pane_g1

0xc99b,	// (0x00024a90) copy_highlight_title_pane_t1

0xc993,	// (0x00024a88) copy_highlight_digital_pane_g1

0xd736,	// (0x0002582b) copy_highlight_digital_pane_t1

0xd68a,	// (0x0002577f) graphic_text_primary_pane_g1

0xd71a,	// (0x0002580f) graphic_text_primary_pane_t1

0xd728,	// (0x0002581d) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x00027a92) graphic_text_primary_pane_t

0xd6f6,	// (0x000257eb) graphic_text_primary_small_pane_g1

0xd6fe,	// (0x000257f3) graphic_text_primary_small_pane_t1

0xd70c,	// (0x00025801) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x00027a8d) graphic_text_primary_small_pane_t

0xd6d2,	// (0x000257c7) graphic_text_secondary_pane_g1

0xd6da,	// (0x000257cf) graphic_text_secondary_pane_t1

0xd6e8,	// (0x000257dd) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x00027a88) graphic_text_secondary_pane_t

0xd6ae,	// (0x000257a3) graphic_text_title_pane_g1

0xd6b6,	// (0x000257ab) graphic_text_title_pane_t1

0xd6c4,	// (0x000257b9) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x00027a83) graphic_text_title_pane_t

0xd68a,	// (0x0002577f) graphic_text_digital_pane_g1

0xd692,	// (0x00025787) graphic_text_digital_pane_t1

0xd6a0,	// (0x00025795) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x00027a7e) graphic_text_digital_pane_t

0xb067,	// (0x0002315c) navi_icon_pane_srt_ParamLimits

0xb067,	// (0x0002315c) navi_icon_pane_srt

0xb003,	// (0x000230f8) navi_midp_pane_srt

0xb003,	// (0x000230f8) navi_navi_pane_srt

0xb067,	// (0x0002315c) navi_text_pane_srt_ParamLimits

0xb067,	// (0x0002315c) navi_text_pane_srt

0xd655,	// (0x0002574a) navi_navi_icon_text_pane_srt

0xd65d,	// (0x00025752) navi_navi_pane_srt_g1_ParamLimits

0xd65d,	// (0x00025752) navi_navi_pane_srt_g1

0xd66f,	// (0x00025764) navi_navi_pane_srt_g2_ParamLimits

0xd66f,	// (0x00025764) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x00027a79) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x00027a79) navi_navi_pane_srt_g

0xd681,	// (0x00025776) navi_navi_tabs_pane_srt

0xd655,	// (0x0002574a) navi_navi_text_pane_srt

0xd655,	// (0x0002574a) navi_navi_volume_pane_srt

0xd646,	// (0x0002573b) navi_navi_text_pane_srt_t1

0x57a4,	// (0x0001d899) navi_navi_volume_pane_srt_g1

0x57ac,	// (0x0001d8a1) volume_small_pane_srt_ParamLimits

0x57ac,	// (0x0001d8a1) volume_small_pane_srt

0x4d34,	// (0x0001ce29) volume_small_pane_srt_g1_ParamLimits

0x4d34,	// (0x0001ce29) volume_small_pane_srt_g1

0x4d44,	// (0x0001ce39) volume_small_pane_srt_g2_ParamLimits

0x4d44,	// (0x0001ce39) volume_small_pane_srt_g2

0x4d55,	// (0x0001ce4a) volume_small_pane_srt_g3_ParamLimits

0x4d55,	// (0x0001ce4a) volume_small_pane_srt_g3

0x4d66,	// (0x0001ce5b) volume_small_pane_srt_g4_ParamLimits

0x4d66,	// (0x0001ce5b) volume_small_pane_srt_g4

0x4d77,	// (0x0001ce6c) volume_small_pane_srt_g5_ParamLimits

0x4d77,	// (0x0001ce6c) volume_small_pane_srt_g5

0x4d88,	// (0x0001ce7d) volume_small_pane_srt_g6_ParamLimits

0x4d88,	// (0x0001ce7d) volume_small_pane_srt_g6

0x4d99,	// (0x0001ce8e) volume_small_pane_srt_g7_ParamLimits

0x4d99,	// (0x0001ce8e) volume_small_pane_srt_g7

0x4daa,	// (0x0001ce9f) volume_small_pane_srt_g8_ParamLimits

0x4daa,	// (0x0001ce9f) volume_small_pane_srt_g8

0x4dbb,	// (0x0001ceb0) volume_small_pane_srt_g9_ParamLimits

0x4dbb,	// (0x0001ceb0) volume_small_pane_srt_g9

0x4dcc,	// (0x0001cec1) volume_small_pane_srt_g10_ParamLimits

0x4dcc,	// (0x0001cec1) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002782d) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002782d) volume_small_pane_srt_g

0xb311,	// (0x00023406) query_popup_data_pane_cp2

0xd62c,	// (0x00025721) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd62c,	// (0x00025721) navi_navi_icon_text_pane_srt_t1

0xcbe1,	// (0x00024cd6) navi_tabs_2_long_pane_srt

0xcbe1,	// (0x00024cd6) navi_tabs_2_pane_srt

0xcbe1,	// (0x00024cd6) navi_tabs_3_long_pane_srt

0xcbe1,	// (0x00024cd6) navi_tabs_3_pane_srt

0xcbe1,	// (0x00024cd6) navi_tabs_4_pane_srt

0x5784,	// (0x0001d879) tabs_2_active_pane_srt_ParamLimits

0x5784,	// (0x0001d879) tabs_2_active_pane_srt

0x5794,	// (0x0001d889) tabs_2_passive_pane_srt_ParamLimits

0x5794,	// (0x0001d889) tabs_2_passive_pane_srt

0xc458,	// (0x0002454d) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc458,	// (0x0002454d) bg_passive_tab_pane_cp1_srt

0xc8fd,	// (0x000249f2) bg_passive_tab_pane_g1_cp1_srt

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp1_srt

0xc906,	// (0x000249fb) bg_passive_tab_pane_g3_cp1_srt

0xb051,	// (0x00023146) bg_active_tab_pane_cp1_srt_ParamLimits

0xb051,	// (0x00023146) bg_active_tab_pane_cp1_srt

0xc8f5,	// (0x000249ea) tabs_2_active_pane_srt_g1

0x2bd9,	// (0x0001acce) tabs_2_active_pane_srt_t1_ParamLimits

0x2bd9,	// (0x0001acce) tabs_2_active_pane_srt_t1

0xc8fd,	// (0x000249f2) bg_active_tab_pane_g1_cp1_srt

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp1_srt

0xc906,	// (0x000249fb) bg_active_tab_pane_g3_cp1_srt

0x5751,	// (0x0001d846) tabs_3_active_pane_srt_ParamLimits

0x5751,	// (0x0001d846) tabs_3_active_pane_srt

0x5762,	// (0x0001d857) tabs_3_passive_pane_cp_srt_ParamLimits

0x5762,	// (0x0001d857) tabs_3_passive_pane_cp_srt

0x5773,	// (0x0001d868) tabs_3_passive_pane_srt_ParamLimits

0x5773,	// (0x0001d868) tabs_3_passive_pane_srt

0xc458,	// (0x0002454d) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc458,	// (0x0002454d) bg_passive_tab_pane_cp2_srt

0xc0ea,	// (0x000241df) bg_passive_tab_pane_g1_cp2_srt

0xbcf6,	// (0x00023deb) bg_passive_tab_pane_g2_cp2_srt

0xc0f3,	// (0x000241e8) bg_passive_tab_pane_g3_cp2_srt

0xb051,	// (0x00023146) bg_active_tab_pane_cp2_srt_ParamLimits

0xb051,	// (0x00023146) bg_active_tab_pane_cp2_srt

0xd61c,	// (0x00025711) tabs_3_active_pane_srt_g1

0x249e,	// (0x0001a593) tabs_3_active_pane_srt_t1_ParamLimits

0x249e,	// (0x0001a593) tabs_3_active_pane_srt_t1

0xc0ea,	// (0x000241df) bg_active_tab_pane_g1_cp2_srt

0xbcf6,	// (0x00023deb) bg_active_tab_pane_g2_cp2_srt

0xc0f3,	// (0x000241e8) bg_active_tab_pane_g3_cp2_srt

0x5709,	// (0x0001d7fe) tabs_4_active_pane_srt_ParamLimits

0x5709,	// (0x0001d7fe) tabs_4_active_pane_srt

0x571b,	// (0x0001d810) tabs_4_passive_pane_cp2_srt_ParamLimits

0x571b,	// (0x0001d810) tabs_4_passive_pane_cp2_srt

0x4f35,	// (0x0001d02a) aid_size_cell_toolbar

0x8475,	// (0x0002056a) main_idle_act_pane_ParamLimits

0x5096,	// (0x0001d18b) popup_large_graphic_colour_window_ParamLimits

0x89d3,	// (0x00020ac8) popup_toolbar_window_ParamLimits

0x89d3,	// (0x00020ac8) popup_toolbar_window

0xd58a,	// (0x0002567f) list_single_graphic_2heading_pane_ParamLimits

0xd58a,	// (0x0002567f) list_single_graphic_2heading_pane

0xb993,	// (0x00023a88) aid_size_cell_apps_grid_lsc_pane

0xb9a5,	// (0x00023a9a) aid_size_cell_apps_grid_prt_pane

0xb7ce,	// (0x000238c3) bg_wml_button_pane_cp1_ParamLimits

0xb7ce,	// (0x000238c3) bg_wml_button_pane_cp1

0xc602,	// (0x000246f7) form_midp_field_text_pane_t1_ParamLimits

0xc458,	// (0x0002454d) input_focus_pane_cp050_ParamLimits

0xc623,	// (0x00024718) list_midp_form_text_pane_ParamLimits

0xc5df,	// (0x000246d4) input_focus_pane_cp051_ParamLimits

0xc5f3,	// (0x000246e8) list_midp_choice_pane_ParamLimits

0xc4dc,	// (0x000245d1) list_single_2graphic_pane_cp3_ParamLimits

0xc4dc,	// (0x000245d1) list_single_2graphic_pane_cp3

0xc4ef,	// (0x000245e4) list_single_midp_graphic_pane_ParamLimits

0xc4ef,	// (0x000245e4) list_single_midp_graphic_pane

0x3e3f,	// (0x0001bf34) list_single_graphic_2heading_pane_g1_ParamLimits

0x3e3f,	// (0x0001bf34) list_single_graphic_2heading_pane_g1

0x36d8,	// (0x0001b7cd) list_single_graphic_2heading_pane_g4_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_graphic_2heading_pane_g4

0x36e4,	// (0x0001b7d9) list_single_graphic_2heading_pane_g5_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_graphic_2heading_pane_g5

0x0002,

0xf59c,	// (0x00027691) list_single_graphic_2heading_pane_g_ParamLimits

0xf59c,	// (0x00027691) list_single_graphic_2heading_pane_g

0x3e4b,	// (0x0001bf40) list_single_graphic_2heading_pane_t1_ParamLimits

0x3e4b,	// (0x0001bf40) list_single_graphic_2heading_pane_t1

0x3e5f,	// (0x0001bf54) list_single_graphic_2heading_pane_t2_ParamLimits

0x3e5f,	// (0x0001bf54) list_single_graphic_2heading_pane_t2

0x3e79,	// (0x0001bf6e) list_single_graphic_2heading_pane_t3_ParamLimits

0x3e79,	// (0x0001bf6e) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x00027880) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x00027880) list_single_graphic_2heading_pane_t

0xc316,	// (0x0002440b) bg_popup_sub_pane_cp2

0xc33c,	// (0x00024431) grid_toobar_pane

0x53dc,	// (0x0001d4d1) cell_toolbar_pane_ParamLimits

0x53dc,	// (0x0001d4d1) cell_toolbar_pane

0xc372,	// (0x00024467) cell_toolbar_pane_g1_ParamLimits

0xc372,	// (0x00024467) cell_toolbar_pane_g1

0xc384,	// (0x00024479) cell_toolbar_pane_g2_ParamLimits

0xc384,	// (0x00024479) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0002788e) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0002788e) cell_toolbar_pane_g

0xc3a6,	// (0x0002449b) grid_highlight_pane_cp2_ParamLimits

0xc3a6,	// (0x0002449b) grid_highlight_pane_cp2

0xc3c0,	// (0x000244b5) toolbar_button_pane

0xc3cc,	// (0x000244c1) toolbar_button_pane_g1

0xc3d4,	// (0x000244c9) toolbar_button_pane_g2

0xc3dc,	// (0x000244d1) toolbar_button_pane_g3

0xc3e4,	// (0x000244d9) toolbar_button_pane_g4

0xc3ec,	// (0x000244e1) toolbar_button_pane_g5

0xc3f4,	// (0x000244e9) toolbar_button_pane_g6

0xc3fc,	// (0x000244f1) toolbar_button_pane_g7

0xc404,	// (0x000244f9) toolbar_button_pane_g8

0xc40c,	// (0x00024501) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x00027893) toolbar_button_pane_g

0x540b,	// (0x0001d500) list_single_2graphic_pane_g1_cp3_ParamLimits

0x540b,	// (0x0001d500) list_single_2graphic_pane_g1_cp3

0x8dc5,	// (0x00020eba) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8dc5,	// (0x00020eba) list_single_2graphic_pane_g2_cp3

0xbe6d,	// (0x00023f62) list_single_2graphic_pane_g3_cp3

0xc90f,	// (0x00024a04) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc90f,	// (0x00024a04) list_single_2graphic_pane_g4_cp3

0x5426,	// (0x0001d51b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5426,	// (0x0001d51b) list_single_2graphic_pane_t1_cp3

0xbe61,	// (0x00023f56) list_single_midp_graphic_pane_g2_ParamLimits

0xbe61,	// (0x00023f56) list_single_midp_graphic_pane_g2

0x4f3d,	// (0x0001d032) aid_zoom_text_primary

0x3e12,	// (0x0001bf07) aid_zoom_text_secondary

0xc18a,	// (0x0002427f) status_small_pane_g7_ParamLimits

0xc18a,	// (0x0002427f) status_small_pane_g7

0xc1ad,	// (0x000242a2) status_small_pane_t1_ParamLimits

0x23e6,	// (0x0001a4db) title_pane_g2

0x0003,

0xf529,	// (0x0002761e) title_pane_g

0x2684,	// (0x0001a779) aid_size_cell_colour_1_pane_ParamLimits

0x2684,	// (0x0001a779) aid_size_cell_colour_1_pane

0x2698,	// (0x0001a78d) aid_size_cell_colour_2_pane_ParamLimits

0x2698,	// (0x0001a78d) aid_size_cell_colour_2_pane

0x26ac,	// (0x0001a7a1) aid_size_cell_colour_3_pane_ParamLimits

0x26ac,	// (0x0001a7a1) aid_size_cell_colour_3_pane

0x26c0,	// (0x0001a7b5) aid_size_cell_colour_4_pane_ParamLimits

0x26c0,	// (0x0001a7b5) aid_size_cell_colour_4_pane

0x49ef,	// (0x0001cae4) title_pane_stacon_g1_ParamLimits

0x49ef,	// (0x0001cae4) title_pane_stacon_g1

0xca10,	// (0x00024b05) popup_note_wait_window_g3_ParamLimits

0xca10,	// (0x00024b05) popup_note_wait_window_g3

0xca86,	// (0x00024b7b) popup_note_wait_window_t5_ParamLimits

0xca86,	// (0x00024b7b) popup_note_wait_window_t5

0xb003,	// (0x000230f8) main_feb_china_hwr_fs_writing_pane

0x84d6,	// (0x000205cb) popup_feb_china_hwr_fs_window_ParamLimits

0x84d6,	// (0x000205cb) popup_feb_china_hwr_fs_window

0x8dd6,	// (0x00020ecb) aid_size_cell_hwr_fs_ParamLimits

0x8dd6,	// (0x00020ecb) aid_size_cell_hwr_fs

0xc458,	// (0x0002454d) bg_popup_sub_pane_cp3_ParamLimits

0xc458,	// (0x0002454d) bg_popup_sub_pane_cp3

0x8deb,	// (0x00020ee0) grid_hwr_fs_pane_ParamLimits

0x8deb,	// (0x00020ee0) grid_hwr_fs_pane

0x547f,	// (0x0001d574) linegrid_hwr_fs_pane_ParamLimits

0x547f,	// (0x0001d574) linegrid_hwr_fs_pane

0x8e03,	// (0x00020ef8) cell_hwr_fs_pane_ParamLimits

0x8e03,	// (0x00020ef8) cell_hwr_fs_pane

0xc464,	// (0x00024559) linegrid_hwr_fs_pane_g1_ParamLimits

0xc464,	// (0x00024559) linegrid_hwr_fs_pane_g1

0x8e23,	// (0x00020f18) linegrid_hwr_fs_pane_g2_ParamLimits

0x8e23,	// (0x00020f18) linegrid_hwr_fs_pane_g2

0xc470,	// (0x00024565) linegrid_hwr_fs_pane_g3_ParamLimits

0xc470,	// (0x00024565) linegrid_hwr_fs_pane_g3

0x54ad,	// (0x0001d5a2) linegrid_hwr_fs_pane_g4_ParamLimits

0x54ad,	// (0x0001d5a2) linegrid_hwr_fs_pane_g4

0x54c7,	// (0x0001d5bc) linegrid_hwr_fs_pane_g5_ParamLimits

0x54c7,	// (0x0001d5bc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x000278b9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x000278b9) linegrid_hwr_fs_pane_g

0xc47c,	// (0x00024571) cell_hwr_fs_pane_g1_ParamLimits

0xc47c,	// (0x00024571) cell_hwr_fs_pane_g1

0xc2e4,	// (0x000243d9) cell_hwr_fs_pane_g2_ParamLimits

0xc2e4,	// (0x000243d9) cell_hwr_fs_pane_g2

0x8e35,	// (0x00020f2a) cell_hwr_fs_pane_g3_ParamLimits

0x8e35,	// (0x00020f2a) cell_hwr_fs_pane_g3

0x8e42,	// (0x00020f37) cell_hwr_fs_pane_g4_ParamLimits

0x8e42,	// (0x00020f37) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x000278c4) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x000278c4) cell_hwr_fs_pane_g

0x8e4f,	// (0x00020f44) cell_hwr_fs_pane_t1

0xb003,	// (0x000230f8) grid_highlight_pane_cp6

0xb003,	// (0x000230f8) main_idle_act2_pane

0xb77e,	// (0x00023873) aid_inside_area_popup_secondary

0x8fc2,	// (0x000210b7) aid_inside_area_window_primary_ParamLimits

0x8fc2,	// (0x000210b7) aid_inside_area_window_primary

0xd745,	// (0x0002583a) ai2_news_ticker_pane

0xd74d,	// (0x00025842) aid_size_cell_ai1_link_ParamLimits

0xd74d,	// (0x00025842) aid_size_cell_ai1_link

0x9389,	// (0x0002147e) popup_ai2_data_window_ParamLimits

0x9389,	// (0x0002147e) popup_ai2_data_window

0xd767,	// (0x0002585c) popup_ai2_link_window_ParamLimits

0xd767,	// (0x0002585c) popup_ai2_link_window

0xc458,	// (0x0002454d) bg_popup_sub_pane_cp4_ParamLimits

0xc458,	// (0x0002454d) bg_popup_sub_pane_cp4

0xd77b,	// (0x00025870) grid_ai2_link_pane_ParamLimits

0xd77b,	// (0x00025870) grid_ai2_link_pane

0xd792,	// (0x00025887) popup_ai2_link_window_g1_ParamLimits

0xd792,	// (0x00025887) popup_ai2_link_window_g1

0xd79e,	// (0x00025893) popup_ai2_link_window_g2_ParamLimits

0xd79e,	// (0x00025893) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x00027a97) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x00027a97) popup_ai2_link_window_g

0xd7ad,	// (0x000258a2) ai2_mp_button_pane

0xd7b5,	// (0x000258aa) ai2_mp_volume_pane

0xc5df,	// (0x000246d4) bg_popup_sub_pane_cp5_ParamLimits

0xc5df,	// (0x000246d4) bg_popup_sub_pane_cp5

0xd7bd,	// (0x000258b2) heading_ai2_gene_pane_ParamLimits

0xd7bd,	// (0x000258b2) heading_ai2_gene_pane

0xd7c9,	// (0x000258be) list_ai2_gene_pane_ParamLimits

0xd7c9,	// (0x000258be) list_ai2_gene_pane

0xd811,	// (0x00025906) cell_ai2_link_pane_ParamLimits

0xd811,	// (0x00025906) cell_ai2_link_pane

0xd827,	// (0x0002591c) cell_ai2_link_pane_g1

0xb003,	// (0x000230f8) grid_highlight_pane_cp7

0x57c1,	// (0x0001d8b6) ai2_mp_volume_pane_g1

0xd8c4,	// (0x000259b9) ai2_mp_volume_pane_g2

0x93b3,	// (0x000214a8) list_ai2_gene_pane_t1

0xd8cc,	// (0x000259c1) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x00027ab0) ai2_mp_volume_pane_g

0x57c9,	// (0x0001d8be) volume_small_pane_cp3

0xd8d4,	// (0x000259c9) aid_size_cell_ai2_button

0xd8dc,	// (0x000259d1) grid_ai2_button_pane

0xd8e5,	// (0x000259da) cell_ai2_button_pane_ParamLimits

0xd8e5,	// (0x000259da) cell_ai2_button_pane

0xaf81,	// (0x00023076) cell_ai2_button_pane_g1

0xb003,	// (0x000230f8) grid_highlight_pane_cp8

0xd884,	// (0x00025979) ai2_gene_pane_t1_ParamLimits

0xd884,	// (0x00025979) ai2_gene_pane_t1

0x8440,	// (0x00020535) aid_height_parent_landscape

0xd523,	// (0x00025618) aid_height_set_list

0xd52f,	// (0x00025624) aid_size_parent

0xd606,	// (0x000256fb) aid_size_cell_graphic_pane_ParamLimits

0xd7d9,	// (0x000258ce) popup_ai2_data_window_g1_ParamLimits

0xd7d9,	// (0x000258ce) popup_ai2_data_window_g1

0xd7e5,	// (0x000258da) ai2_news_ticker_pane_g1

0xd7ed,	// (0x000258e2) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x00027a9c) ai2_news_ticker_pane_g

0xd7f5,	// (0x000258ea) ai2_news_ticker_pane_t1

0xd803,	// (0x000258f8) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x00027aa1) ai2_news_ticker_pane_t

0xd830,	// (0x00025925) heading_ai2_gene_pane_g1

0xd838,	// (0x0002592d) heading_ai2_gene_pane_t1_ParamLimits

0xd838,	// (0x0002592d) heading_ai2_gene_pane_t1

0xd84d,	// (0x00025942) list_highlight_pane_cp6

0x939d,	// (0x00021492) ai2_gene_pane_ParamLimits

0x939d,	// (0x00021492) ai2_gene_pane

0x93c1,	// (0x000214b6) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x00027aa6) list_ai2_gene_pane_t

0xd855,	// (0x0002594a) list_highlight_pane_cp8_ParamLimits

0xd855,	// (0x0002594a) list_highlight_pane_cp8

0xd866,	// (0x0002595b) ai2_gene_pane_g1_ParamLimits

0xd866,	// (0x0002595b) ai2_gene_pane_g1

0xd878,	// (0x0002596d) ai2_gene_pane_g2_ParamLimits

0xd878,	// (0x0002596d) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x00027aab) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x00027aab) ai2_gene_pane_g

0xb5dc,	// (0x000236d1) scroll_pane_cp12

0x83ff,	// (0x000204f4) control_pane_t3_ParamLimits

0x83ff,	// (0x000204f4) control_pane_t3

0xc19e,	// (0x00024293) status_small_pane_g8_ParamLimits

0xc19e,	// (0x00024293) status_small_pane_g8

0x854a,	// (0x0002063f) popup_find_window_ParamLimits

0x873d,	// (0x00020832) popup_note_image_window_ParamLimits

0x3e3f,	// (0x0001bf34) list_double2_graphic_pane_vc_g1_ParamLimits

0x3e3f,	// (0x0001bf34) list_double2_graphic_pane_vc_g1

0x3e91,	// (0x0001bf86) list_double2_graphic_pane_vc_g2_ParamLimits

0x3e91,	// (0x0001bf86) list_double2_graphic_pane_vc_g2

0x3e9d,	// (0x0001bf92) list_double2_graphic_pane_vc_g3_ParamLimits

0x3e9d,	// (0x0001bf92) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x00027887) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x00027887) list_double2_graphic_pane_vc_g

0x36f0,	// (0x0001b7e5) list_double2_graphic_pane_vc_t1_ParamLimits

0x36f0,	// (0x0001b7e5) list_double2_graphic_pane_vc_t1

0x36d8,	// (0x0001b7cd) list_single_heading_pane_vc_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_heading_pane_vc_g1

0x36e4,	// (0x0001b7d9) list_single_heading_pane_vc_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00027698) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00027698) list_single_heading_pane_vc_g

0x3ea9,	// (0x0001bf9e) list_single_heading_pane_vc_t1_ParamLimits

0x3ea9,	// (0x0001bf9e) list_single_heading_pane_vc_t1

0x3ebf,	// (0x0001bfb4) list_single_heading_pane_vc_t2_ParamLimits

0x3ebf,	// (0x0001bfb4) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x000278a8) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x000278a8) list_single_heading_pane_vc_t

0xc414,	// (0x00024509) list_setting_number_pane_vc_g1_ParamLimits

0xc414,	// (0x00024509) list_setting_number_pane_vc_g1

0xc420,	// (0x00024515) list_setting_number_pane_vc_g2_ParamLimits

0xc420,	// (0x00024515) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x000278ad) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x000278ad) list_setting_number_pane_vc_g

0x3ed1,	// (0x0001bfc6) list_setting_number_pane_vc_t1_ParamLimits

0x3ed1,	// (0x0001bfc6) list_setting_number_pane_vc_t1

0x3ee5,	// (0x0001bfda) list_setting_number_pane_vc_t2_ParamLimits

0x3ee5,	// (0x0001bfda) list_setting_number_pane_vc_t2

0x3f01,	// (0x0001bff6) list_setting_number_pane_vc_t3_ParamLimits

0x3f01,	// (0x0001bff6) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x000278b2) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x000278b2) list_setting_number_pane_vc_t

0x3f19,	// (0x0001c00e) set_value_pane_vc_ParamLimits

0x3f19,	// (0x0001c00e) set_value_pane_vc

0xd58a,	// (0x0002567f) list_double2_graphic_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double2_graphic_pane_vc

0x3fb2,	// (0x0001c0a7) list_double2_large_graphic_pane_vc_ParamLimits

0x3fb2,	// (0x0001c0a7) list_double2_large_graphic_pane_vc

0xd58a,	// (0x0002567f) list_double2_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double2_pane_vc

0xd58a,	// (0x0002567f) list_double_graphic_heading_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double_graphic_heading_pane_vc

0xd58a,	// (0x0002567f) list_double_graphic_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double_graphic_pane_vc

0xd58a,	// (0x0002567f) list_double_heading_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double_heading_pane_vc

0x3fc4,	// (0x0001c0b9) list_double_large_graphic_pane_vc_ParamLimits

0x3fc4,	// (0x0001c0b9) list_double_large_graphic_pane_vc

0xd58a,	// (0x0002567f) list_double_number_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double_number_pane_vc

0xd58a,	// (0x0002567f) list_double_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double_pane_vc

0xd58a,	// (0x0002567f) list_double_time_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_double_time_pane_vc

0xd58a,	// (0x0002567f) list_setting_number_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_setting_number_pane_vc

0xd58a,	// (0x0002567f) list_setting_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_setting_pane_vc

0xd58a,	// (0x0002567f) list_single_graphic_heading_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_single_graphic_heading_pane_vc

0xd58a,	// (0x0002567f) list_single_heading_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_single_heading_pane_vc

0xd58a,	// (0x0002567f) list_single_number_heading_pane_vc_ParamLimits

0xd58a,	// (0x0002567f) list_single_number_heading_pane_vc

0x3e3f,	// (0x0001bf34) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3e3f,	// (0x0001bf34) list_double_graphic_heading_pane_vc_g1

0x36d8,	// (0x0001b7cd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x36d8,	// (0x0001b7cd) list_double_graphic_heading_pane_vc_g2

0x36e4,	// (0x0001b7d9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x36e4,	// (0x0001b7d9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x00027691) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x00027691) list_double_graphic_heading_pane_vc_g

0x4026,	// (0x0001c11b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4026,	// (0x0001c11b) list_double_graphic_heading_pane_vc_t1

0x403c,	// (0x0001c131) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x403c,	// (0x0001c131) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c2,	// (0x00027ab7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c2,	// (0x00027ab7) list_double_graphic_heading_pane_vc_t

0xc414,	// (0x00024509) list_setting_pane_vc_g1_ParamLimits

0xc414,	// (0x00024509) list_setting_pane_vc_g1

0xc420,	// (0x00024515) list_setting_pane_vc_g2_ParamLimits

0xc420,	// (0x00024515) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x000278ad) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x000278ad) list_setting_pane_vc_g

0x4054,	// (0x0001c149) list_setting_pane_vc_t1_ParamLimits

0x4054,	// (0x0001c149) list_setting_pane_vc_t1

0x4068,	// (0x0001c15d) list_setting_pane_vc_t2_ParamLimits

0x4068,	// (0x0001c15d) list_setting_pane_vc_t2

0x0001,

0xfa05,	// (0x00027afa) list_setting_pane_vc_t_ParamLimits

0xfa05,	// (0x00027afa) list_setting_pane_vc_t

0x3f19,	// (0x0001c00e) set_value_pane_cp_vc_ParamLimits

0x3f19,	// (0x0001c00e) set_value_pane_cp_vc

0x36d8,	// (0x0001b7cd) list_single_number_heading_pane_vc_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_number_heading_pane_vc_g1

0x36e4,	// (0x0001b7d9) list_single_number_heading_pane_vc_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00027698) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00027698) list_single_number_heading_pane_vc_g

0x3ea9,	// (0x0001bf9e) list_single_number_heading_pane_vc_t1_ParamLimits

0x3ea9,	// (0x0001bf9e) list_single_number_heading_pane_vc_t1

0x407c,	// (0x0001c171) list_single_number_heading_pane_vc_t2_ParamLimits

0x407c,	// (0x0001c171) list_single_number_heading_pane_vc_t2

0x3740,	// (0x0001b835) list_single_number_heading_pane_vc_t3_ParamLimits

0x3740,	// (0x0001b835) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0a,	// (0x00027aff) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x00027aff) list_single_number_heading_pane_vc_t

0x3e3f,	// (0x0001bf34) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3e3f,	// (0x0001bf34) list_single_graphic_heading_pane_vc_g1

0x36d8,	// (0x0001b7cd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x36d8,	// (0x0001b7cd) list_single_graphic_heading_pane_vc_g4

0x36e4,	// (0x0001b7d9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x36e4,	// (0x0001b7d9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x00027691) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x00027691) list_single_graphic_heading_pane_vc_g

0x3ea9,	// (0x0001bf9e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3ea9,	// (0x0001bf9e) list_single_graphic_heading_pane_vc_t1

0x408e,	// (0x0001c183) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x408e,	// (0x0001c183) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x00027b06) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00027b06) list_single_graphic_heading_pane_vc_t

0x36d8,	// (0x0001b7cd) list_double2_pane_vc_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_double2_pane_vc_g1

0x36e4,	// (0x0001b7d9) list_double2_pane_vc_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00027698) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00027698) list_double2_pane_vc_g

0x3f89,	// (0x0001c07e) list_double2_pane_vc_t1_ParamLimits

0x3f89,	// (0x0001c07e) list_double2_pane_vc_t1

0x40a0,	// (0x0001c195) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x40a0,	// (0x0001c195) list_double2_large_graphic_pane_vc_g1

0x40ac,	// (0x0001c1a1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x40ac,	// (0x0001c1a1) list_double2_large_graphic_pane_vc_g2

0x40b8,	// (0x0001c1ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x40b8,	// (0x0001c1ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000276b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000276b5) list_double2_large_graphic_pane_vc_g

0x40c4,	// (0x0001c1b9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x40c4,	// (0x0001c1b9) list_double2_large_graphic_pane_vc_t1

0x40da,	// (0x0001c1cf) list_double_time_pane_vc_g1_ParamLimits

0x40da,	// (0x0001c1cf) list_double_time_pane_vc_g1

0x40e6,	// (0x0001c1db) list_double_time_pane_vc_g2_ParamLimits

0x40e6,	// (0x0001c1db) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x00027b0b) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x00027b0b) list_double_time_pane_vc_g

0x40f2,	// (0x0001c1e7) list_double_time_pane_vc_t1_ParamLimits

0x40f2,	// (0x0001c1e7) list_double_time_pane_vc_t1

0x4110,	// (0x0001c205) list_double_time_pane_vc_t2_ParamLimits

0x4110,	// (0x0001c205) list_double_time_pane_vc_t2

0x4159,	// (0x0001c24e) list_double_time_pane_vc_t3_ParamLimits

0x4159,	// (0x0001c24e) list_double_time_pane_vc_t3

0x416b,	// (0x0001c260) list_double_time_pane_vc_t4_ParamLimits

0x416b,	// (0x0001c260) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x00027b10) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x00027b10) list_double_time_pane_vc_t

0x36d8,	// (0x0001b7cd) list_double_pane_vc_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_double_pane_vc_g1

0x36e4,	// (0x0001b7d9) list_double_pane_vc_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00027698) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00027698) list_double_pane_vc_g

0x417d,	// (0x0001c272) list_double_pane_vc_t1_ParamLimits

0x417d,	// (0x0001c272) list_double_pane_vc_t1

0x418f,	// (0x0001c284) list_double_pane_vc_t2_ParamLimits

0x418f,	// (0x0001c284) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x00027b19) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x00027b19) list_double_pane_vc_t

0x36d8,	// (0x0001b7cd) list_double_number_pane_vc_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_double_number_pane_vc_g1

0x36e4,	// (0x0001b7d9) list_double_number_pane_vc_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00027698) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00027698) list_double_number_pane_vc_g

0x41a5,	// (0x0001c29a) list_double_number_pane_vc_t1_ParamLimits

0x41a5,	// (0x0001c29a) list_double_number_pane_vc_t1

0x41b9,	// (0x0001c2ae) list_double_number_pane_vc_t2_ParamLimits

0x41b9,	// (0x0001c2ae) list_double_number_pane_vc_t2

0x41cb,	// (0x0001c2c0) list_double_number_pane_vc_t3_ParamLimits

0x41cb,	// (0x0001c2c0) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x00027b1e) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x00027b1e) list_double_number_pane_vc_t

0x41e1,	// (0x0001c2d6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x41e1,	// (0x0001c2d6) list_double_large_graphic_pane_vc_g1

0x4209,	// (0x0001c2fe) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4209,	// (0x0001c2fe) list_double_large_graphic_pane_vc_g2

0x421d,	// (0x0001c312) list_double_large_graphic_pane_vc_g3_ParamLimits

0x421d,	// (0x0001c312) list_double_large_graphic_pane_vc_g3

0x422c,	// (0x0001c321) list_double_large_graphic_pane_vc_g4_ParamLimits

0x422c,	// (0x0001c321) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x00027b25) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x00027b25) list_double_large_graphic_pane_vc_g

0x423c,	// (0x0001c331) list_double_large_graphic_pane_vc_t1_ParamLimits

0x423c,	// (0x0001c331) list_double_large_graphic_pane_vc_t1

0x4256,	// (0x0001c34b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4256,	// (0x0001c34b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x00027b2e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x00027b2e) list_double_large_graphic_pane_vc_t

0x36d8,	// (0x0001b7cd) list_double_heading_pane_vc_g1_ParamLimits

0x36d8,	// (0x0001b7cd) list_double_heading_pane_vc_g1

0x36e4,	// (0x0001b7d9) list_double_heading_pane_vc_g2_ParamLimits

0x36e4,	// (0x0001b7d9) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00027698) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00027698) list_double_heading_pane_vc_g

0x4276,	// (0x0001c36b) list_double_heading_pane_vc_t1_ParamLimits

0x4276,	// (0x0001c36b) list_double_heading_pane_vc_t1

0x3ea9,	// (0x0001bf9e) list_double_heading_pane_vc_t2_ParamLimits

0x3ea9,	// (0x0001bf9e) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00027b33) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00027b33) list_double_heading_pane_vc_t

0x4288,	// (0x0001c37d) list_double_graphic_pane_vc_g1_ParamLimits

0x4288,	// (0x0001c37d) list_double_graphic_pane_vc_g1

0x4294,	// (0x0001c389) list_double_graphic_pane_vc_g2_ParamLimits

0x4294,	// (0x0001c389) list_double_graphic_pane_vc_g2

0x36d8,	// (0x0001b7cd) list_double_graphic_pane_vc_g3_ParamLimits

0x36d8,	// (0x0001b7cd) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x00027b38) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00027b38) list_double_graphic_pane_vc_g

0x42b1,	// (0x0001c3a6) list_double_graphic_pane_vc_t1_ParamLimits

0x42b1,	// (0x0001c3a6) list_double_graphic_pane_vc_t1

0x42cf,	// (0x0001c3c4) list_double_graphic_pane_vc_t2_ParamLimits

0x42cf,	// (0x0001c3c4) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00027b41) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00027b41) list_double_graphic_pane_vc_t

0x46d6,	// (0x0001c7cb) aid_size_cell_fastswap

0x7ee1,	// (0x0001ffd6) aid_size_cell_touch_ParamLimits

0x7ee1,	// (0x0001ffd6) aid_size_cell_touch

0x4823,	// (0x0001c918) popup_fast_swap_wide_window_ParamLimits

0x4823,	// (0x0001c918) popup_fast_swap_wide_window

0x7fd9,	// (0x000200ce) touch_pane_ParamLimits

0x7fd9,	// (0x000200ce) touch_pane

0x3b85,	// (0x0001bc7a) button_value_adjust_pane_cp2

0xdb66,	// (0x00025c5b) button_value_adjust_pane_cp4

0x3ba5,	// (0x0001bc9a) form_field_data_pane_cp2

0x7af4,	// (0x0001fbe9) form_field_data_wide_pane_cp2

0xb9ca,	// (0x00023abf) bg_scroll_pane_ParamLimits

0x4b10,	// (0x0001cc05) scroll_handle_pane_ParamLimits

0x4b24,	// (0x0001cc19) scroll_sc2_down_pane_ParamLimits

0x4b24,	// (0x0001cc19) scroll_sc2_down_pane

0xb9fb,	// (0x00023af0) scroll_sc2_up_pane_ParamLimits

0xb9fb,	// (0x00023af0) scroll_sc2_up_pane

0x94e3,	// (0x000215d8) grid_wheel_folder_pane_g1_ParamLimits

0x94e3,	// (0x000215d8) grid_wheel_folder_pane_g1

0x4cd8,	// (0x0001cdcd) clock_nsta_pane_cp2_ParamLimits

0x4cd8,	// (0x0001cdcd) clock_nsta_pane_cp2

0x8212,	// (0x00020307) listscroll_midp_pane_ParamLimits

0x8221,	// (0x00020316) midp_canvas_pane

0x4f23,	// (0x0001d018) nsta_clock_indic_pane

0xc1f5,	// (0x000242ea) listscroll_form_pane_vc

0xc1fd,	// (0x000242f2) listscroll_set_pane_vc_ParamLimits

0xc1fd,	// (0x000242f2) listscroll_set_pane_vc

0x8b09,	// (0x00020bfe) clock_nsta_pane

0x8b2c,	// (0x00020c21) indicator_nsta_pane

0xc316,	// (0x0002440b) bg_popup_sub_pane_cp2_ParamLimits

0xc32a,	// (0x0002441f) find_pane_cp2_ParamLimits

0xc32a,	// (0x0002441f) find_pane_cp2

0xc33c,	// (0x00024431) grid_toobar_pane_ParamLimits

0xc42c,	// (0x00024521) list_form_gen_pane_vc_ParamLimits

0xc42c,	// (0x00024521) list_form_gen_pane_vc

0xc442,	// (0x00024537) scroll_pane_cp8_vc_ParamLimits

0xc442,	// (0x00024537) scroll_pane_cp8_vc

0xc492,	// (0x00024587) data_form_wide_pane_vc_ParamLimits

0xc492,	// (0x00024587) data_form_wide_pane_vc

0xc49e,	// (0x00024593) form_field_data_wide_pane_vc_g1

0xc4a6,	// (0x0002459b) form_field_data_wide_pane_vc_t1_ParamLimits

0xc4a6,	// (0x0002459b) form_field_data_wide_pane_vc_t1

0xb635,	// (0x0002372a) input_focus_pane_cp6_vc_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_cp6_vc

0x8e79,	// (0x00020f6e) list_midp_pane_ParamLimits

0xc91b,	// (0x00024a10) scroll_pane_cp16_ParamLimits

0xc91b,	// (0x00024a10) scroll_pane_cp16

0xc7ac,	// (0x000248a1) button_value_adjust_pane_ParamLimits

0xc7ac,	// (0x000248a1) button_value_adjust_pane

0x9177,	// (0x0002126c) button_value_adjust_pane_cp6_ParamLimits

0x9177,	// (0x0002126c) button_value_adjust_pane_cp6

0x9281,	// (0x00021376) settings_code_pane_cp_ParamLimits

0x9281,	// (0x00021376) settings_code_pane_cp

0xaf81,	// (0x00023076) cell_touch_pane_g1

0xaf81,	// (0x00023076) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x000277d3) cell_touch_pane_g

0x93cf,	// (0x000214c4) cell_touch_pane_cp_ParamLimits

0x93cf,	// (0x000214c4) cell_touch_pane_cp

0x93eb,	// (0x000214e0) cell_touch_pane_ParamLimits

0x93eb,	// (0x000214e0) cell_touch_pane

0xaf81,	// (0x00023076) scroll_sc2_down_pane_g1

0xaf81,	// (0x00023076) scroll_sc2_up_pane_g1

0xb003,	// (0x000230f8) bg_set_opt_pane_cp4_vc

0xd8f7,	// (0x000259ec) list_set_graphic_pane_vc_g1_ParamLimits

0xd8f7,	// (0x000259ec) list_set_graphic_pane_vc_g1

0xd903,	// (0x000259f8) list_set_graphic_pane_vc_g2_ParamLimits

0xd903,	// (0x000259f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9c7,	// (0x00027abc) list_set_graphic_pane_vc_g_ParamLimits

0xf9c7,	// (0x00027abc) list_set_graphic_pane_vc_g

0xd90f,	// (0x00025a04) text_primary_small_cp13_vc_ParamLimits

0xd90f,	// (0x00025a04) text_primary_small_cp13_vc

0xd927,	// (0x00025a1c) list_set_graphic_pane_vc_ParamLimits

0xd927,	// (0x00025a1c) list_set_graphic_pane_vc

0xb003,	// (0x000230f8) input_focus_pane_cp2_vc

0xaf81,	// (0x00023076) setting_code_pane_vc_g1

0xd93a,	// (0x00025a2f) setting_code_pane_vc_t1

0xd948,	// (0x00025a3d) set_text_pane_vc_t1_ParamLimits

0xd948,	// (0x00025a3d) set_text_pane_vc_t1

0xb003,	// (0x000230f8) input_focus_pane_cp1_vc

0xd963,	// (0x00025a58) list_set_text_pane_vc

0xaf81,	// (0x00023076) setting_text_pane_vc_g1

0xb003,	// (0x000230f8) bg_set_opt_pane_cp2_vc

0xd96d,	// (0x00025a62) setting_slider_graphic_pane_vc_g1

0xd975,	// (0x00025a6a) setting_slider_graphic_pane_vc_t1

0xd983,	// (0x00025a78) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cc,	// (0x00027ac1) setting_slider_graphic_pane_vc_t

0xd991,	// (0x00025a86) slider_set_pane_cp_vc

0xd999,	// (0x00025a8e) slider_set_pane_vc_g1

0xd9a2,	// (0x00025a97) slider_set_pane_vc_g2

0x0006,

0xf9d1,	// (0x00027ac6) slider_set_pane_vc_g

0xb690,	// (0x00023785) set_opt_bg_pane_g1_copy1

0xb698,	// (0x0002378d) set_opt_bg_pane_g2_copy1

0xd9ce,	// (0x00025ac3) set_opt_bg_pane_g3_copy1

0xb6a8,	// (0x0002379d) set_opt_bg_pane_g4_copy1

0xb6b0,	// (0x000237a5) set_opt_bg_pane_g5_copy1

0xb6b8,	// (0x000237ad) set_opt_bg_pane_g6_copy1

0xd9d6,	// (0x00025acb) set_opt_bg_pane_g7_copy1

0xd9de,	// (0x00025ad3) set_opt_bg_pane_g8_copy1

0xd9e6,	// (0x00025adb) set_opt_bg_pane_g9_copy1

0xb003,	// (0x000230f8) bg_set_opt_pane_cp_vc

0xd9ee,	// (0x00025ae3) setting_slider_pane_vc_t1

0xd975,	// (0x00025a6a) setting_slider_pane_vc_t2

0xd983,	// (0x00025a78) setting_slider_pane_vc_t3

0x0002,

0xf9e0,	// (0x00027ad5) setting_slider_pane_vc_t

0xd991,	// (0x00025a86) slider_set_pane_vc

0x54eb,	// (0x0001d5e0) volume_set_pane_vc_g1

0x57d2,	// (0x0001d8c7) volume_set_pane_vc_g2

0x57db,	// (0x0001d8d0) volume_set_pane_vc_g3

0x57e4,	// (0x0001d8d9) volume_set_pane_vc_g4

0x57ed,	// (0x0001d8e2) volume_set_pane_vc_g5

0x57f6,	// (0x0001d8eb) volume_set_pane_vc_g6

0x57ff,	// (0x0001d8f4) volume_set_pane_vc_g7

0x5808,	// (0x0001d8fd) volume_set_pane_vc_g8

0x5811,	// (0x0001d906) volume_set_pane_vc_g9

0x581a,	// (0x0001d90f) volume_set_pane_vc_g10

0x0009,

0xf9e7,	// (0x00027adc) volume_set_pane_vc_g

0xd9fd,	// (0x00025af2) volume_set_pane_vc

0xda05,	// (0x00025afa) button_value_adjust_pane_cp1_vc

0xda0f,	// (0x00025b04) list_highlight_pane_cp2_vc

0xda18,	// (0x00025b0d) list_set_pane_vc_ParamLimits

0xda18,	// (0x00025b0d) list_set_pane_vc

0xda6a,	// (0x00025b5f) main_pane_set_vc_t1_ParamLimits

0xda6a,	// (0x00025b5f) main_pane_set_vc_t1

0xda7f,	// (0x00025b74) main_pane_set_vc_t2_ParamLimits

0xda7f,	// (0x00025b74) main_pane_set_vc_t2

0xda91,	// (0x00025b86) main_pane_set_vc_t3_ParamLimits

0xda91,	// (0x00025b86) main_pane_set_vc_t3

0xdaa3,	// (0x00025b98) main_pane_set_vc_t4_ParamLimits

0xdaa3,	// (0x00025b98) main_pane_set_vc_t4

0x0003,

0xf9fc,	// (0x00027af1) main_pane_set_vc_t_ParamLimits

0xf9fc,	// (0x00027af1) main_pane_set_vc_t

0xdab5,	// (0x00025baa) setting_code_pane_vc_ParamLimits

0xdab5,	// (0x00025baa) setting_code_pane_vc

0xdac4,	// (0x00025bb9) setting_slider_graphic_pane_vc

0xdac4,	// (0x00025bb9) setting_slider_pane_vc

0xdac4,	// (0x00025bb9) setting_text_pane_vc

0xdac4,	// (0x00025bb9) setting_volume_pane_vc

0xdacc,	// (0x00025bc1) scroll_pane_cp121_vc

0xb620,	// (0x00023715) set_content_pane_vc

0xdad4,	// (0x00025bc9) button_value_adjust_pane_g1

0xdadd,	// (0x00025bd2) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x00027b46) button_value_adjust_pane_g

0xdae6,	// (0x00025bdb) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdae6,	// (0x00025bdb) form_field_slider_wide_pane_vc_t1

0xdafc,	// (0x00025bf1) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdafc,	// (0x00025bf1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x00027b4b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x00027b4b) form_field_slider_wide_pane_vc_t

0xb051,	// (0x00023146) input_focus_pane_cp10_vc_ParamLimits

0xb051,	// (0x00023146) input_focus_pane_cp10_vc

0xdb27,	// (0x00025c1c) slider_cont_pane_cp1_vc_ParamLimits

0xdb27,	// (0x00025c1c) slider_cont_pane_cp1_vc

0xd999,	// (0x00025a8e) slider_form_pane_g1_cp2

0xd9a2,	// (0x00025a97) slider_form_pane_g2_cp2

0xdb42,	// (0x00025c37) form_field_slider_pane_vc_t3

0xdb6e,	// (0x00025c63) form_field_slider_pane_vc_t4

0xdb7c,	// (0x00025c71) slider_form_pane_vc_ParamLimits

0xdb7c,	// (0x00025c71) slider_form_pane_vc

0xdb89,	// (0x00025c7e) form_field_slider_pane_vc_t1_ParamLimits

0xdb89,	// (0x00025c7e) form_field_slider_pane_vc_t1

0xdb9f,	// (0x00025c94) form_field_slider_pane_vc_t2_ParamLimits

0xdb9f,	// (0x00025c94) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x00027b5d) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x00027b5d) form_field_slider_pane_vc_t

0xb051,	// (0x00023146) input_focus_pane_cp9_vc_ParamLimits

0xb051,	// (0x00023146) input_focus_pane_cp9_vc

0xdbb1,	// (0x00025ca6) slider_cont_pane_vc_ParamLimits

0xdbb1,	// (0x00025ca6) slider_cont_pane_vc

0xdbc3,	// (0x00025cb8) list_form_graphic_pane_cp_vc_ParamLimits

0xdbc3,	// (0x00025cb8) list_form_graphic_pane_cp_vc

0xc49e,	// (0x00024593) form_field_popup_wide_pane_vc_g1

0xdbd8,	// (0x00025ccd) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdbd8,	// (0x00025ccd) form_field_popup_wide_pane_vc_t1

0xb635,	// (0x0002372a) input_focus_pane_cp8_vc_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_cp8_vc

0xdc17,	// (0x00025d0c) list_form_wide_pane_vc_ParamLimits

0xdc17,	// (0x00025d0c) list_form_wide_pane_vc

0xdc23,	// (0x00025d18) list_form_graphic_pane_vc_g1

0xdc2b,	// (0x00025d20) list_form_graphic_pane_vc_t1_ParamLimits

0xdc2b,	// (0x00025d20) list_form_graphic_pane_vc_t1

0xb067,	// (0x0002315c) list_highlight_pane_cp5_vc_ParamLimits

0xb067,	// (0x0002315c) list_highlight_pane_cp5_vc

0xdc47,	// (0x00025d3c) list_form_graphic_pane_vc_ParamLimits

0xdc47,	// (0x00025d3c) list_form_graphic_pane_vc

0xc49e,	// (0x00024593) form_field_popup_pane_vc_g1

0xdc5d,	// (0x00025d52) form_field_popup_pane_vc_t1_ParamLimits

0xdc5d,	// (0x00025d52) form_field_popup_pane_vc_t1

0xb635,	// (0x0002372a) input_focus_pane_cp7_vc_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_cp7_vc

0xdc72,	// (0x00025d67) list_form_pane_vc_ParamLimits

0xdc72,	// (0x00025d67) list_form_pane_vc

0xdc7e,	// (0x00025d73) data_form_pane_vc_t1_ParamLimits

0xdc7e,	// (0x00025d73) data_form_pane_vc_t1

0xb690,	// (0x00023785) input_focus_pane_vc_g1

0xb698,	// (0x0002378d) input_focus_pane_vc_g2

0xb6a0,	// (0x00023795) input_focus_pane_vc_g3

0xb6a8,	// (0x0002379d) input_focus_pane_vc_g4

0xb6b0,	// (0x000237a5) input_focus_pane_vc_g5

0xb6b8,	// (0x000237ad) input_focus_pane_vc_g6

0xb6c0,	// (0x000237b5) input_focus_pane_vc_g7

0xb6c8,	// (0x000237bd) input_focus_pane_vc_g8

0xb6d0,	// (0x000237c5) input_focus_pane_vc_g9

0xaf81,	// (0x00023076) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002775c) input_focus_pane_vc_g

0xc492,	// (0x00024587) data_form_pane_vc_ParamLimits

0xc492,	// (0x00024587) data_form_pane_vc

0xc49e,	// (0x00024593) form_field_data_pane_vc_g1

0xdc99,	// (0x00025d8e) form_field_data_pane_vc_t1_ParamLimits

0xdc99,	// (0x00025d8e) form_field_data_pane_vc_t1

0xb635,	// (0x0002372a) input_focus_pane_vc_ParamLimits

0xb635,	// (0x0002372a) input_focus_pane_vc

0xc8dd,	// (0x000249d2) button_value_adjust_pane_cp3_vc

0xdb66,	// (0x00025c5b) button_value_adjust_pane_cp5_vc

0xdcaf,	// (0x00025da4) form_field_data_pane_vc_ParamLimits

0xdcaf,	// (0x00025da4) form_field_data_pane_vc

0xc8e5,	// (0x000249da) form_field_data_pane_vc_cp2

0xdcc6,	// (0x00025dbb) form_field_data_wide_pane_vc_ParamLimits

0xdcc6,	// (0x00025dbb) form_field_data_wide_pane_vc

0xdcdc,	// (0x00025dd1) form_field_data_wide_pane_vc_cp2

0xdce4,	// (0x00025dd9) form_field_popup_pane_vc_ParamLimits

0xdce4,	// (0x00025dd9) form_field_popup_pane_vc

0xdcfb,	// (0x00025df0) form_field_popup_wide_pane_vc_ParamLimits

0xdcfb,	// (0x00025df0) form_field_popup_wide_pane_vc

0xdd11,	// (0x00025e06) form_field_slider_pane_vc_ParamLimits

0xdd11,	// (0x00025e06) form_field_slider_pane_vc

0xdd24,	// (0x00025e19) form_field_slider_wide_pane_vc_ParamLimits

0xdd24,	// (0x00025e19) form_field_slider_wide_pane_vc

0x9409,	// (0x000214fe) grid_touch_1_pane_ParamLimits

0x9409,	// (0x000214fe) grid_touch_1_pane

0x941d,	// (0x00021512) grid_touch_2_pane_ParamLimits

0x941d,	// (0x00021512) grid_touch_2_pane

0xdd37,	// (0x00025e2c) touch_pane_g1_ParamLimits

0xdd37,	// (0x00025e2c) touch_pane_g1

0xdd45,	// (0x00025e3a) cell_app_pane_cp_wide_ParamLimits

0xdd45,	// (0x00025e3a) cell_app_pane_cp_wide

0xdd55,	// (0x00025e4a) grid_popup_fast_wide_pane_ParamLimits

0xdd55,	// (0x00025e4a) grid_popup_fast_wide_pane

0xdd69,	// (0x00025e5e) scroll_pane_cp19_ParamLimits

0xdd69,	// (0x00025e5e) scroll_pane_cp19

0xb003,	// (0x000230f8) bg_popup_window_pane_cp20

0xdd7d,	// (0x00025e72) listscroll_popup_fast_wide_pane

0x9447,	// (0x0002153c) grid_indicator_nsta_pane

0xdd85,	// (0x00025e7a) clock_nsta_pane_g1

0xdd8e,	// (0x00025e83) clock_nsta_pane_t1

0x9453,	// (0x00021548) cell_indicator_nsta_pane_ParamLimits

0x9453,	// (0x00021548) cell_indicator_nsta_pane

0xdd37,	// (0x00025e2c) cell_indicator_nsta_pane_g1

0x946a,	// (0x0002155f) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x00027b6e) cell_indicator_nsta_pane_g

0xddaa,	// (0x00025e9f) clock_nsta_pane_cp

0xddb2,	// (0x00025ea7) indicator_nsta_pane_cp

0xddbb,	// (0x00025eb0) nsta_clock_indic_pane_g1

0xb0a3,	// (0x00023198) grid_indicator_pane

0xbaed,	// (0x00023be2) scroll_pane_cp29

0x4c2f,	// (0x0001cd24) indicator_nsta_pane_cp2_ParamLimits

0x4c2f,	// (0x0001cd24) indicator_nsta_pane_cp2

0xb067,	// (0x0002315c) main_apps_wheel_pane

0xc63d,	// (0x00024732) form_midp_field_text_pane_ParamLimits

0xc76a,	// (0x0002485f) scroll_bar_cp050_ParamLimits

0xde24,	// (0x00025f19) cell_indicator_pane_ParamLimits

0xde24,	// (0x00025f19) cell_indicator_pane

0xde3a,	// (0x00025f2f) cell_indicator_pane_g1

0x9477,	// (0x0002156c) grid_wheel_folder_pane_ParamLimits

0x9477,	// (0x0002156c) grid_wheel_folder_pane

0x9485,	// (0x0002157a) list_wheel_apps_pane_ParamLimits

0x9485,	// (0x0002157a) list_wheel_apps_pane

0x9491,	// (0x00021586) main_apps_wheel_pane_g1_ParamLimits

0x9491,	// (0x00021586) main_apps_wheel_pane_g1

0x949d,	// (0x00021592) main_apps_wheel_pane_g2_ParamLimits

0x949d,	// (0x00021592) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x00027b8a) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x00027b8a) main_apps_wheel_pane_g

0x94a9,	// (0x0002159e) main_apps_wheel_pane_t1_ParamLimits

0x94a9,	// (0x0002159e) main_apps_wheel_pane_t1

0x94bb,	// (0x000215b0) list_wheel_apps_pane_g1

0x94c3,	// (0x000215b8) list_wheel_apps_pane_g2

0x94cb,	// (0x000215c0) list_wheel_apps_pane_g3

0x94d3,	// (0x000215c8) list_wheel_apps_pane_g4

0x94db,	// (0x000215d0) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x00027b8f) list_wheel_apps_pane_g

0xb067,	// (0x0002315c) navi_icon_text_pane

0x8a15,	// (0x00020b0a) aid_fill_nsta

0xde44,	// (0x00025f39) navi_icon_text_pane_g1

0xde50,	// (0x00025f45) navi_icon_text_pane_t1

0xbd67,	// (0x00023e5c) list_set_graphic_pane_t1_ParamLimits

0xbd67,	// (0x00023e5c) list_set_graphic_pane_t1

0xcea2,	// (0x00024f97) popup_midp_note_alarm_window_t6_ParamLimits

0xcea2,	// (0x00024f97) popup_midp_note_alarm_window_t6

0xceb4,	// (0x00024fa9) popup_midp_note_alarm_window_t7_ParamLimits

0xceb4,	// (0x00024fa9) popup_midp_note_alarm_window_t7

0xcec6,	// (0x00024fbb) popup_midp_note_alarm_window_t8_ParamLimits

0xcec6,	// (0x00024fbb) popup_midp_note_alarm_window_t8

0xced8,	// (0x00024fcd) popup_midp_note_alarm_window_t9_ParamLimits

0xced8,	// (0x00024fcd) popup_midp_note_alarm_window_t9

0xceea,	// (0x00024fdf) popup_midp_note_alarm_window_t10_ParamLimits

0xceea,	// (0x00024fdf) popup_midp_note_alarm_window_t10

0xcefc,	// (0x00024ff1) popup_midp_note_alarm_window_t11_ParamLimits

0xcefc,	// (0x00024ff1) popup_midp_note_alarm_window_t11

0xcf0e,	// (0x00025003) scroll_pane_cp17_ParamLimits

0xcf0e,	// (0x00025003) scroll_pane_cp17

0x54eb,	// (0x0001d5e0) volume_small_pane_cp_g1

0x5823,	// (0x0001d918) volume_small_pane_cp_g2

0x582c,	// (0x0001d921) volume_small_pane_cp_g3

0x5835,	// (0x0001d92a) volume_small_pane_cp_g4

0x5518,	// (0x0001d60d) volume_small_pane_cp_g5

0x583e,	// (0x0001d933) volume_small_pane_cp_g6

0x5847,	// (0x0001d93c) volume_small_pane_cp_g7

0x5850,	// (0x0001d945) volume_small_pane_cp_g8

0x5859,	// (0x0001d94e) volume_small_pane_cp_g9

0x5862,	// (0x0001d957) volume_small_pane_cp_g10

0xc01d,	// (0x00024112) midp_ticker_pane_g1_ParamLimits

0xc029,	// (0x0002411e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00027828) midp_ticker_pane_g_ParamLimits

0xc035,	// (0x0002412a) midp_ticker_pane_t1_ParamLimits

0x8a2b,	// (0x00020b20) aid_fill_nsta_2

0xc756,	// (0x0002484b) list_form2_midp_pane

0xd56b,	// (0x00025660) midp_editing_number_pane_ParamLimits

0xd577,	// (0x0002566c) midp_ticker_pane_ParamLimits

0xde62,	// (0x00025f57) form2_midp_field_pane

0xde6a,	// (0x00025f5f) scroll_pane_cp51

0xde8a,	// (0x00025f7f) form2_midp_button_pane_ParamLimits

0xde8a,	// (0x00025f7f) form2_midp_button_pane

0xde9c,	// (0x00025f91) form2_midp_content_pane_ParamLimits

0xde9c,	// (0x00025f91) form2_midp_content_pane

0xdeb6,	// (0x00025fab) form2_midp_field_choice_group_pane

0xdebe,	// (0x00025fb3) form2_midp_field_pane_g1

0xdec6,	// (0x00025fbb) form2_midp_field_pane_g2

0xdece,	// (0x00025fc3) form2_midp_field_pane_g3

0xded6,	// (0x00025fcb) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x00027bb4) form2_midp_field_pane_g

0xdede,	// (0x00025fd3) form2_midp_gauge_slider_pane

0xdee6,	// (0x00025fdb) form2_midp_gauge_wait_pane

0xdeee,	// (0x00025fe3) form2_midp_image_pane_ParamLimits

0xdeee,	// (0x00025fe3) form2_midp_image_pane

0xdf09,	// (0x00025ffe) form2_midp_label_pane_ParamLimits

0xdf09,	// (0x00025ffe) form2_midp_label_pane

0x9510,	// (0x00021605) form2_midp_label_pane_cp_ParamLimits

0x9510,	// (0x00021605) form2_midp_label_pane_cp

0xdf22,	// (0x00026017) form2_midp_string_pane_ParamLimits

0xdf22,	// (0x00026017) form2_midp_string_pane

0x42ed,	// (0x0001c3e2) form2_midp_text_pane_ParamLimits

0x42ed,	// (0x0001c3e2) form2_midp_text_pane

0xdf34,	// (0x00026029) form2_midp_time_pane

0xdf44,	// (0x00026039) input_focus_pane_cp51_ParamLimits

0xdf44,	// (0x00026039) input_focus_pane_cp51

0xdf5c,	// (0x00026051) form2_midp_label_pane_t1_ParamLimits

0xdf5c,	// (0x00026051) form2_midp_label_pane_t1

0x4306,	// (0x0001c3fb) form2_mdip_text_pane_t1_ParamLimits

0x4306,	// (0x0001c3fb) form2_mdip_text_pane_t1

0x4321,	// (0x0001c416) form2_midp_time_pane_t1

0xdfa4,	// (0x00026099) form2_midp_gauge_slider_pane_t1

0x952f,	// (0x00021624) form2_midp_gauge_slider_pane_t2

0x9541,	// (0x00021636) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x00027bbd) form2_midp_gauge_slider_pane_t

0xdfb6,	// (0x000260ab) form2_midp_slider_pane

0xdfc2,	// (0x000260b7) form2_midp_gauge_wait_pane_t1

0xdfd0,	// (0x000260c5) form2_midp_wait_pane_ParamLimits

0xdfd0,	// (0x000260c5) form2_midp_wait_pane

0xc4dc,	// (0x000245d1) list_single_2graphic_pane_cp4_ParamLimits

0xc4dc,	// (0x000245d1) list_single_2graphic_pane_cp4

0xdffb,	// (0x000260f0) list_single_midp_graphic_pane_cp_ParamLimits

0xdffb,	// (0x000260f0) list_single_midp_graphic_pane_cp

0xb003,	// (0x000230f8) list_highlight_pane_cp20

0xe019,	// (0x0002610e) list_single_2graphic_pane_g1_cp4

0xd830,	// (0x00025925) list_single_2graphic_pane_g2_cp4

0xe021,	// (0x00026116) list_single_2graphic_pane_t1_cp4

0xb067,	// (0x0002315c) list_highlight_pane_cp21

0xe030,	// (0x00026125) list_single_midp_graphic_pane_g4_cp

0xe03f,	// (0x00026134) list_single_midp_graphic_pane_t1_cp

0xe054,	// (0x00026149) form2_mdip_string_pane_t1_ParamLimits

0xe054,	// (0x00026149) form2_mdip_string_pane_t1

0xb003,	// (0x000230f8) bg_wml_button_pane_cp2

0xaf81,	// (0x00023076) form2_midp_image_pane_g1

0x393e,	// (0x0001ba33) list_double_large_graphic_pane_g5_ParamLimits

0x393e,	// (0x0001ba33) list_double_large_graphic_pane_g5

0x8212,	// (0x00020307) midp_form_pane_ParamLimits

0xb067,	// (0x0002315c) main_apps_wheel_pane_ParamLimits

0x87b7,	// (0x000208ac) popup_preview_window_ParamLimits

0x87b7,	// (0x000208ac) popup_preview_window

0x538f,	// (0x0001d484) popup_touch_info_window_ParamLimits

0x538f,	// (0x0001d484) popup_touch_info_window

0x53ad,	// (0x0001d4a2) popup_touch_menu_window_ParamLimits

0x53ad,	// (0x0001d4a2) popup_touch_menu_window

0xaf77,	// (0x0002306c) bg_popup_sub_pane_cp6

0xe0be,	// (0x000261b3) list_touch_menu_pane

0xe0c6,	// (0x000261bb) list_single_touch_menu_pane_ParamLimits

0xe0c6,	// (0x000261bb) list_single_touch_menu_pane

0xe0dd,	// (0x000261d2) list_single_touch_menu_pane_t1

0xb067,	// (0x0002315c) bg_popup_sub_pane_cp7_ParamLimits

0xb067,	// (0x0002315c) bg_popup_sub_pane_cp7

0xe0eb,	// (0x000261e0) heading_sub_pane

0xe0f3,	// (0x000261e8) list_touch_info_pane_ParamLimits

0xe0f3,	// (0x000261e8) list_touch_info_pane

0xe102,	// (0x000261f7) list_single_touch_info_pane_ParamLimits

0xe102,	// (0x000261f7) list_single_touch_info_pane

0xe113,	// (0x00026208) list_single_touch_info_pane_t1

0xe121,	// (0x00026216) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x00027bcb) list_single_touch_info_pane_t

0xbff3,	// (0x000240e8) bg_popup_heading_pane_cp

0xe12f,	// (0x00026224) heading_sub_pane_t1

0xc458,	// (0x0002454d) bg_popup_preview_window_pane_cp_ParamLimits

0xc458,	// (0x0002454d) bg_popup_preview_window_pane_cp

0xe0eb,	// (0x000261e0) heading_preview_pane

0xe0f3,	// (0x000261e8) list_preview_pane_ParamLimits

0xe0f3,	// (0x000261e8) list_preview_pane

0xe13d,	// (0x00026232) popup_preview_window_g1

0xe102,	// (0x000261f7) list_single_preview_pane_ParamLimits

0xe102,	// (0x000261f7) list_single_preview_pane

0xe145,	// (0x0002623a) list_single_preview_pane_g1

0xe14d,	// (0x00026242) list_single_preview_pane_t1

0xe113,	// (0x00026208) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x00027bd0) list_single_preview_pane_t

0xe15b,	// (0x00026250) bg_popup_heading_pane_cp2_ParamLimits

0xe15b,	// (0x00026250) bg_popup_heading_pane_cp2

0xe171,	// (0x00026266) heading_preview_pane_g1

0xe179,	// (0x0002626e) heading_preview_pane_t1_ParamLimits

0xe179,	// (0x0002626e) heading_preview_pane_t1

0xb0ba,	// (0x000231af) soft_indicator_pane_t1_ParamLimits

0xb5b8,	// (0x000236ad) scroll_pane_ParamLimits

0xb9e9,	// (0x00023ade) scroll_sc2_left_pane

0xb9f2,	// (0x00023ae7) scroll_sc2_right_pane

0xba11,	// (0x00023b06) scroll_bg_pane_g1_ParamLimits

0xba26,	// (0x00023b1b) scroll_bg_pane_g2_ParamLimits

0xba3e,	// (0x00023b33) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x000277b3) scroll_bg_pane_g_ParamLimits

0xba11,	// (0x00023b06) scroll_handle_pane_g1_ParamLimits

0xba60,	// (0x00023b55) scroll_handle_pane_g2_ParamLimits

0xba3e,	// (0x00023b33) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x000277ba) scroll_handle_pane_g_ParamLimits

0x4f59,	// (0x0001d04e) popup_choice_list_window_ParamLimits

0x4f59,	// (0x0001d04e) popup_choice_list_window

0xc322,	// (0x00024417) choice_list_pane

0xc398,	// (0x0002448d) cell_toolbar_pane_t1

0xc3c0,	// (0x000244b5) toolbar_button_pane_ParamLimits

0xd2d4,	// (0x000253c9) ai_gene_pane_1_t2_ParamLimits

0xd2d4,	// (0x000253c9) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x000279d6) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x000279d6) ai_gene_pane_1_t

0xe196,	// (0x0002628b) scroll_sc2_left_pane_g1

0xe196,	// (0x0002628b) scroll_sc2_right_pane_g1

0xb7ce,	// (0x000238c3) bg_popup_sub_pane_cp10

0xe1a0,	// (0x00026295) list_choice_list_pane

0xe1b7,	// (0x000262ac) list_single_choice_list_pane_ParamLimits

0xe1b7,	// (0x000262ac) list_single_choice_list_pane

0xe1c9,	// (0x000262be) list_single_choice_list_pane_g1

0xb7b9,	// (0x000238ae) list_single_choice_list_pane_t1_ParamLimits

0xb7b9,	// (0x000238ae) list_single_choice_list_pane_t1

0xe1d1,	// (0x000262c6) choice_list_pane_g1

0xe1d9,	// (0x000262ce) choice_list_pane_t1

0xaf77,	// (0x0002306c) input_focus_pane_cp11

0xb950,	// (0x00023a45) title_pane_stacon_g2_ParamLimits

0xb950,	// (0x00023a45) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00027799) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00027799) title_pane_stacon_g

0xbff3,	// (0x000240e8) cursor_press_pane

0x851e,	// (0x00020613) popup_fep_hwr_window_ParamLimits

0x851e,	// (0x00020613) popup_fep_hwr_window

0x5051,	// (0x0001d146) popup_fep_vkb_window_ParamLimits

0x5051,	// (0x0001d146) popup_fep_vkb_window

0xe1e7,	// (0x000262dc) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x00027bf9) fep_vkb_side_pane_g_ParamLimits

0x58a0,	// (0x0001d995) fep_hwr_candidate_pane_ParamLimits

0x58a0,	// (0x0001d995) fep_hwr_candidate_pane

0x58c8,	// (0x0001d9bd) fep_hwr_side_pane_ParamLimits

0x58c8,	// (0x0001d9bd) fep_hwr_side_pane

0x58e8,	// (0x0001d9dd) fep_hwr_top_pane_ParamLimits

0x58e8,	// (0x0001d9dd) fep_hwr_top_pane

0x5900,	// (0x0001d9f5) fep_hwr_write_pane_ParamLimits

0x5900,	// (0x0001d9f5) fep_hwr_write_pane

0xfb04,	// (0x00027bf9) fep_vkb_side_pane_g

0xe1ef,	// (0x000262e4) fep_hwr_top_pane_g1

0xe201,	// (0x000262f6) fep_hwr_top_pane_g2

0x592c,	// (0x0001da21) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x00027bd5) fep_hwr_top_pane_g

0x5941,	// (0x0001da36) fep_hwr_top_text_pane

0xbb5a,	// (0x00023c4f) fep_hwr_top_text_pane_g1

0xe237,	// (0x0002632c) fep_hwr_top_text_pane_t1

0x5a2f,	// (0x0001db24) fep_hwr_candidate_pane_g1

0xe400,	// (0x000264f5) fep_vkb_keypad_pane_g3_ParamLimits

0xe400,	// (0x000264f5) fep_vkb_keypad_pane_g3

0xe422,	// (0x00026517) fep_vkb_keypad_pane_g4_ParamLimits

0xe422,	// (0x00026517) fep_vkb_keypad_pane_g4

0xe491,	// (0x00026586) fep_vkb_bottom_pane_g2_ParamLimits

0xe491,	// (0x00026586) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x00027c00) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x00027c00) fep_vkb_bottom_pane_g

0xe196,	// (0x0002628b) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x00027c0a) cell_vkb_side_pane_g

0xe4d5,	// (0x000265ca) cell_vkb_side_pane_t1

0xe4e3,	// (0x000265d8) cell_vkb_side_pane_t1_copy1

0xe196,	// (0x0002628b) bg_fep_vkb_candidate_pane_g2

0xe5b1,	// (0x000266a6) cell_vkb_candidate_pane_ParamLimits

0xe245,	// (0x0002633a) aid_size_cell_vkb_ParamLimits

0xe245,	// (0x0002633a) aid_size_cell_vkb

0xe5b1,	// (0x000266a6) cell_vkb_candidate_pane

0x5a49,	// (0x0001db3e) bg_popup_fep_shadow_pane_g1

0xe2af,	// (0x000263a4) fep_vkb_bottom_pane_ParamLimits

0xe2af,	// (0x000263a4) fep_vkb_bottom_pane

0xe2ec,	// (0x000263e1) fep_vkb_candidate_pane_ParamLimits

0xe2ec,	// (0x000263e1) fep_vkb_candidate_pane

0xe308,	// (0x000263fd) fep_vkb_keypad_pane_ParamLimits

0xe308,	// (0x000263fd) fep_vkb_keypad_pane

0xe33c,	// (0x00026431) fep_vkb_side_pane_ParamLimits

0xe33c,	// (0x00026431) fep_vkb_side_pane

0xe368,	// (0x0002645d) fep_vkb_top_pane_ParamLimits

0xe368,	// (0x0002645d) fep_vkb_top_pane

0xe394,	// (0x00026489) fep_vkb_top_pane_g1_ParamLimits

0xe394,	// (0x00026489) fep_vkb_top_pane_g1

0xe3a3,	// (0x00026498) fep_vkb_top_pane_g2_ParamLimits

0xe3a3,	// (0x00026498) fep_vkb_top_pane_g2

0xe3b2,	// (0x000264a7) fep_vkb_top_pane_g3_ParamLimits

0xe3b2,	// (0x000264a7) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x00027bf0) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x00027bf0) fep_vkb_top_pane_g

0xe3d0,	// (0x000264c5) fep_vkb_top_text_pane_ParamLimits

0xe3d0,	// (0x000264c5) fep_vkb_top_text_pane

0x95b0,	// (0x000216a5) fep_vkb_side_pane_g1_ParamLimits

0x95b0,	// (0x000216a5) fep_vkb_side_pane_g1

0xe3ef,	// (0x000264e4) grid_vkb_side_pane_ParamLimits

0xe3ef,	// (0x000264e4) grid_vkb_side_pane

0x5a51,	// (0x0001db46) bg_popup_fep_shadow_pane_g2

0x5a5a,	// (0x0001db4f) bg_popup_fep_shadow_pane_g3

0x5a62,	// (0x0001db57) bg_popup_fep_shadow_pane_g4

0x5a6b,	// (0x0001db60) bg_popup_fep_shadow_pane_g5

0x5a73,	// (0x0001db68) bg_popup_fep_shadow_pane_g6

0x5a7b,	// (0x0001db70) bg_popup_fep_shadow_pane_g7

0xb6b0,	// (0x000237a5) bg_popup_fep_shadow_pane_g8

0xe440,	// (0x00026535) grid_vkb_keypad_number_pane_ParamLimits

0xe440,	// (0x00026535) grid_vkb_keypad_number_pane

0xe450,	// (0x00026545) grid_vkb_keypad_pane_ParamLimits

0xe450,	// (0x00026545) grid_vkb_keypad_pane

0xe476,	// (0x0002656b) fep_vkb_bottom_pane_g1_ParamLimits

0xe476,	// (0x0002656b) fep_vkb_bottom_pane_g1

0xe49f,	// (0x00026594) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe49f,	// (0x00026594) grid_vkb_keypad_bottom_left_pane

0xe4b4,	// (0x000265a9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe4b4,	// (0x000265a9) grid_vkb_keypad_bottom_right_pane

0xe4c9,	// (0x000265be) fep_vkb_top_text_pane_g1

0x95f7,	// (0x000216ec) fep_vkb_top_text_pane_t1

0x9609,	// (0x000216fe) cell_vkb_side_pane_ParamLimits

0x9609,	// (0x000216fe) cell_vkb_side_pane

0xe196,	// (0x0002628b) cell_vkb_side_pane_g1

0xe4f1,	// (0x000265e6) cell_vkb_keypad_pane_ParamLimits

0xe4f1,	// (0x000265e6) cell_vkb_keypad_pane

0xe55e,	// (0x00026653) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x00027c1d) bg_popup_fep_shadow_pane_g

0xe196,	// (0x0002628b) cell_hwr_side_pane_g1

0xe196,	// (0x0002628b) cell_hwr_side_pane_g2

0xe568,	// (0x0002665d) cell_vkb_keypad_pane_t1

0x961f,	// (0x00021714) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x961f,	// (0x00021714) cell_vkb_keypad_bottom_left_pane

0x9634,	// (0x00021729) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9634,	// (0x00021729) cell_vkb_keypad_bottom_right_pane

0xe196,	// (0x0002628b) cell_vkb_keypad_bottom_left_pane_g1

0xe196,	// (0x0002628b) cell_vkb_keypad_bottom_right_pane_g1

0xe576,	// (0x0002666b) cell_vkb_keypad_number_pane_ParamLimits

0xe576,	// (0x0002666b) cell_vkb_keypad_number_pane

0xe595,	// (0x0002668a) cell_vkb_keypad_number_pane_g1

0xe59f,	// (0x00026694) cell_vkb_keypad_number_pane_g2

0xe5a8,	// (0x0002669d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x00027c0f) cell_vkb_keypad_number_pane_g

0xe568,	// (0x0002665d) cell_vkb_keypad_number_pane_t1

0xe5ca,	// (0x000266bf) fep_vkb_candidate_pane_g1

0x0001,

0xfb15,	// (0x00027c0a) cell_hwr_side_pane_g

0xe5e3,	// (0x000266d8) cell_hwr_side_pane_t1

0x5a8b,	// (0x0001db80) cell_hwr_side_pane_t1_copy1

0xe3c2,	// (0x000264b7) cell_hwr_candidate_pane_g1

0x5a99,	// (0x0001db8e) cell_hwr_candidate_pane_t1

0xe196,	// (0x0002628b) cell_vkb_candidate_pane_g2

0xe669,	// (0x0002675e) cell_vkb_candidate_pane_t1

0x586b,	// (0x0001d960) bg_popup_fep_shadow_pane_ParamLimits

0x586b,	// (0x0001d960) bg_popup_fep_shadow_pane

0x1763,	// (0x00019858) bg_fep_hwr_top_pane_g4

0xe213,	// (0x00026308) bg_hwr_side_pane_g1_ParamLimits

0xe213,	// (0x00026308) bg_hwr_side_pane_g1

0x956b,	// (0x00021660) cell_hwr_side_pane_ParamLimits

0x956b,	// (0x00021660) cell_hwr_side_pane

0x59b8,	// (0x0001daad) fep_hwr_write_pane_g1_ParamLimits

0x59b8,	// (0x0001daad) fep_hwr_write_pane_g1

0x59c5,	// (0x0001daba) fep_hwr_write_pane_g2_ParamLimits

0x59c5,	// (0x0001daba) fep_hwr_write_pane_g2

0x59d2,	// (0x0001dac7) fep_hwr_write_pane_g3_ParamLimits

0x59d2,	// (0x0001dac7) fep_hwr_write_pane_g3

0x958b,	// (0x00021680) fep_hwr_write_pane_g4_ParamLimits

0x958b,	// (0x00021680) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x00027bdc) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x00027bdc) fep_hwr_write_pane_g

0x1763,	// (0x00019858) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1763,	// (0x00019858) bg_fep_hwr_candidate_pane_g2

0x59f5,	// (0x0001daea) cell_hwr_candidate_pane_ParamLimits

0x59f5,	// (0x0001daea) cell_hwr_candidate_pane

0x5a2f,	// (0x0001db24) fep_hwr_candidate_pane_g1_ParamLimits

0xe273,	// (0x00026368) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe273,	// (0x00026368) bg_popup_fep_shadow_pane_cp2

0xe3c2,	// (0x000264b7) fep_vkb_top_pane_g4_ParamLimits

0xe3c2,	// (0x000264b7) fep_vkb_top_pane_g4

0xe3e1,	// (0x000264d6) fep_vkb_side_pane_g2_ParamLimits

0xe3e1,	// (0x000264d6) fep_vkb_side_pane_g2

0x3ab6,	// (0x0001bbab) list_setting_pane_t4_ParamLimits

0x3ab6,	// (0x0001bbab) list_setting_pane_t4

0x3b4c,	// (0x0001bc41) list_setting_number_pane_t5_ParamLimits

0x3b4c,	// (0x0001bc41) list_setting_number_pane_t5

0x8129,	// (0x0002021e) list_double_heading_pane_cp2_ParamLimits

0x8129,	// (0x0002021e) list_double_heading_pane_cp2

0xbe61,	// (0x00023f56) list_double_heading_pane_g1_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_double_heading_pane_g1_cp2

0xe677,	// (0x0002676c) list_double_heading_pane_g2_cp2_ParamLimits

0xe677,	// (0x0002676c) list_double_heading_pane_g2_cp2

0xe68b,	// (0x00026780) list_double_heading_pane_t1_cp2_ParamLimits

0xe68b,	// (0x00026780) list_double_heading_pane_t1_cp2

0xe6a1,	// (0x00026796) list_double_heading_pane_t2_cp2_ParamLimits

0xe6a1,	// (0x00026796) list_double_heading_pane_t2_cp2

0xaf6f,	// (0x00023064) aid_value_unit2

0x485f,	// (0x0001c954) popup_preview_fixed_window

0xb19a,	// (0x0002328f) bg_popup_preview_window_pane_cp02

0xe6b3,	// (0x000267a8) list_preview_fixed_pane

0xe6f9,	// (0x000267ee) list_empty_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_empty_pane_fp

0xe6f9,	// (0x000267ee) list_single_cale_day_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_single_cale_day_pane_fp

0xe6f9,	// (0x000267ee) list_single_graphic_heading_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_single_graphic_heading_pane_fp

0xe6f9,	// (0x000267ee) list_single_graphic_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_single_graphic_pane_fp

0xe6f9,	// (0x000267ee) list_single_heading_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_single_heading_pane_fp

0xe6f9,	// (0x000267ee) list_single_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_single_pane_fp

0xe70d,	// (0x00026802) list_single_pane_fp_g1_ParamLimits

0xe70d,	// (0x00026802) list_single_pane_fp_g1

0x4334,	// (0x0001c429) list_single_pane_fp_g2_ParamLimits

0x4334,	// (0x0001c429) list_single_pane_fp_g2

0x4340,	// (0x0001c435) list_single_pane_fp_g3_ParamLimits

0x4340,	// (0x0001c435) list_single_pane_fp_g3

0xe719,	// (0x0002680e) list_single_pane_fp_g4_ParamLimits

0xe719,	// (0x0002680e) list_single_pane_fp_g4

0x0003,

0xfb49,	// (0x00027c3e) list_single_pane_fp_g_ParamLimits

0xfb49,	// (0x00027c3e) list_single_pane_fp_g

0x4354,	// (0x0001c449) list_single_pane_fp_t1_ParamLimits

0x4354,	// (0x0001c449) list_single_pane_fp_t1

0x436b,	// (0x0001c460) list_single_graphic_pane_fp_g1_ParamLimits

0x436b,	// (0x0001c460) list_single_graphic_pane_fp_g1

0xe70d,	// (0x00026802) list_single_graphic_pane_fp_g2_ParamLimits

0xe70d,	// (0x00026802) list_single_graphic_pane_fp_g2

0x4334,	// (0x0001c429) list_single_graphic_pane_fp_g3_ParamLimits

0x4334,	// (0x0001c429) list_single_graphic_pane_fp_g3

0x4340,	// (0x0001c435) list_single_graphic_pane_fp_g4_ParamLimits

0x4340,	// (0x0001c435) list_single_graphic_pane_fp_g4

0xe719,	// (0x0002680e) list_single_graphic_pane_fp_g5_ParamLimits

0xe719,	// (0x0002680e) list_single_graphic_pane_fp_g5

0x0004,

0xfb52,	// (0x00027c47) list_single_graphic_pane_fp_g_ParamLimits

0xfb52,	// (0x00027c47) list_single_graphic_pane_fp_g

0x4377,	// (0x0001c46c) list_single_graphic_pane_fp_t1_ParamLimits

0x4377,	// (0x0001c46c) list_single_graphic_pane_fp_t1

0x436b,	// (0x0001c460) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x436b,	// (0x0001c460) list_single_graphic_heading_pane_fp_g1

0xe70d,	// (0x00026802) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe70d,	// (0x00026802) list_single_graphic_heading_pane_fp_g2

0x4334,	// (0x0001c429) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4334,	// (0x0001c429) list_single_graphic_heading_pane_fp_g3

0x4340,	// (0x0001c435) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4340,	// (0x0001c435) list_single_graphic_heading_pane_fp_g4

0xe719,	// (0x0002680e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe719,	// (0x0002680e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb52,	// (0x00027c47) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb52,	// (0x00027c47) list_single_graphic_heading_pane_fp_g

0x438d,	// (0x0001c482) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x438d,	// (0x0001c482) list_single_graphic_heading_pane_fp_t1

0x43a3,	// (0x0001c498) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x43a3,	// (0x0001c498) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5d,	// (0x00027c52) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5d,	// (0x00027c52) list_single_graphic_heading_pane_fp_t

0x43b5,	// (0x0001c4aa) list_single_cale_day_pane_fp_g1_ParamLimits

0x43b5,	// (0x0001c4aa) list_single_cale_day_pane_fp_g1

0xe725,	// (0x0002681a) list_single_cale_day_pane_fp_g2_ParamLimits

0xe725,	// (0x0002681a) list_single_cale_day_pane_fp_g2

0x43ed,	// (0x0001c4e2) list_single_cale_day_pane_fp_g3_ParamLimits

0x43ed,	// (0x0001c4e2) list_single_cale_day_pane_fp_g3

0x4415,	// (0x0001c50a) list_single_cale_day_pane_fp_g4_ParamLimits

0x4415,	// (0x0001c50a) list_single_cale_day_pane_fp_g4

0x4439,	// (0x0001c52e) list_single_cale_day_pane_fp_g5_ParamLimits

0x4439,	// (0x0001c52e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb62,	// (0x00027c57) list_single_cale_day_pane_fp_g_ParamLimits

0xfb62,	// (0x00027c57) list_single_cale_day_pane_fp_g

0x445d,	// (0x0001c552) list_single_cale_day_pane_fp_t1_ParamLimits

0x445d,	// (0x0001c552) list_single_cale_day_pane_fp_t1

0x4483,	// (0x0001c578) list_single_cale_day_pane_fp_t2_ParamLimits

0x4483,	// (0x0001c578) list_single_cale_day_pane_fp_t2

0x449c,	// (0x0001c591) list_single_cale_day_pane_fp_t3_ParamLimits

0x449c,	// (0x0001c591) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6d,	// (0x00027c62) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6d,	// (0x00027c62) list_single_cale_day_pane_fp_t

0xe70d,	// (0x00026802) list_empty_pane_fp_g1_ParamLimits

0xe70d,	// (0x00026802) list_empty_pane_fp_g1

0x44b5,	// (0x0001c5aa) list_empty_pane_fp_t1

0x44c3,	// (0x0001c5b8) list_empty_pane_fp_t2

0x0001,

0xfb74,	// (0x00027c69) list_empty_pane_fp_t

0xe70d,	// (0x00026802) list_single_heading_pane_fp_g1_ParamLimits

0xe70d,	// (0x00026802) list_single_heading_pane_fp_g1

0x4334,	// (0x0001c429) list_single_heading_pane_fp_g2_ParamLimits

0x4334,	// (0x0001c429) list_single_heading_pane_fp_g2

0x4340,	// (0x0001c435) list_single_heading_pane_fp_g3_ParamLimits

0x4340,	// (0x0001c435) list_single_heading_pane_fp_g3

0x0002,

0xfb79,	// (0x00027c6e) list_single_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x00027c6e) list_single_heading_pane_fp_g

0x44d1,	// (0x0001c5c6) list_single_heading_pane_fp_t1_ParamLimits

0x44d1,	// (0x0001c5c6) list_single_heading_pane_fp_t1

0x44e3,	// (0x0001c5d8) list_single_heading_pane_fp_t2_ParamLimits

0x44e3,	// (0x0001c5d8) list_single_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x00027c75) list_single_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x00027c75) list_single_heading_pane_fp_t

0xb7da,	// (0x000238cf) aid_size_cell_fast

0xb17d,	// (0x00023272) soft_indicator_pane_cp1_t1

0xb817,	// (0x0002390c) cell_app_pane_cp2_ParamLimits

0xb817,	// (0x0002390c) cell_app_pane_cp2

0x588d,	// (0x0001d982) fep_hwr_candidate_drop_down_list_pane

0x1783,	// (0x00019878) fep_hwr_candidate_pane_g3_ParamLimits

0x1783,	// (0x00019878) fep_hwr_candidate_pane_g3

0x1790,	// (0x00019885) fep_hwr_candidate_pane_g4_ParamLimits

0x1790,	// (0x00019885) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x00027be9) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x00027be9) fep_hwr_candidate_pane_g

0xe2db,	// (0x000263d0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe2db,	// (0x000263d0) fep_vkb_candidate_drop_down_list_pane

0xe5d2,	// (0x000266c7) fep_vkb_candidate_pane_g3

0xe5da,	// (0x000266cf) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x00027c16) fep_vkb_candidate_pane_g

0xe3c2,	// (0x000264b7) cell_hwr_candidate_pane_g1_ParamLimits

0xe5f1,	// (0x000266e6) cell_hwr_candidate_pane_g3_ParamLimits

0xe5f1,	// (0x000266e6) cell_hwr_candidate_pane_g3

0xe612,	// (0x00026707) cell_hwr_candidate_pane_g4_ParamLimits

0xe612,	// (0x00026707) cell_hwr_candidate_pane_g4

0x0002,

0xfb3b,	// (0x00027c30) cell_hwr_candidate_pane_g_ParamLimits

0xfb3b,	// (0x00027c30) cell_hwr_candidate_pane_g

0xe633,	// (0x00026728) cell_vkb_candidate_pane_g3_ParamLimits

0xe633,	// (0x00026728) cell_vkb_candidate_pane_g3

0xe64e,	// (0x00026743) cell_vkb_candidate_pane_g4_ParamLimits

0xe64e,	// (0x00026743) cell_vkb_candidate_pane_g4

0xe731,	// (0x00026826) cell_app_pane_cp2_g1_ParamLimits

0xe731,	// (0x00026826) cell_app_pane_cp2_g1

0xe74f,	// (0x00026844) cell_app_pane_cp2_g2_ParamLimits

0xe74f,	// (0x00026844) cell_app_pane_cp2_g2

0x0001,

0xfb85,	// (0x00027c7a) cell_app_pane_cp2_g_ParamLimits

0xfb85,	// (0x00027c7a) cell_app_pane_cp2_g

0xe75b,	// (0x00026850) cell_app_pane_cp2_t1_ParamLimits

0xe75b,	// (0x00026850) cell_app_pane_cp2_t1

0xb635,	// (0x0002372a) grid_highlight_pane_cp1_ParamLimits

0xb635,	// (0x0002372a) grid_highlight_pane_cp1

0x5ab6,	// (0x0001dbab) cell_hwr_candidate_pane_cp1_ParamLimits

0x5ab6,	// (0x0001dbab) cell_hwr_candidate_pane_cp1

0xe3c2,	// (0x000264b7) fep_hwr_candidate_drop_down_list_pane_g1

0xe76d,	// (0x00026862) fep_hwr_candidate_drop_down_list_pane_g2

0xe77a,	// (0x0002686f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8a,	// (0x00027c7f) fep_hwr_candidate_drop_down_list_pane_g

0x5ad4,	// (0x0001dbc9) fep_hwr_candidate_drop_down_list_scroll_pane

0x5add,	// (0x0001dbd2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5add,	// (0x0001dbd2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5aea,	// (0x0001dbdf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5aea,	// (0x0001dbdf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5af7,	// (0x0001dbec) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5af7,	// (0x0001dbec) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe633,	// (0x00026728) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe633,	// (0x00026728) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe64e,	// (0x00026743) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe64e,	// (0x00026743) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5b04,	// (0x0001dbf9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5b04,	// (0x0001dbf9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5b1f,	// (0x0001dc14) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5b1f,	// (0x0001dc14) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5b3a,	// (0x0001dc2f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5b3a,	// (0x0001dc2f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb91,	// (0x00027c86) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb91,	// (0x00027c86) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x964f,	// (0x00021744) cell_vkb_candidate_pane_cp1_ParamLimits

0x964f,	// (0x00021744) cell_vkb_candidate_pane_cp1

0xe3c2,	// (0x000264b7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe3c2,	// (0x000264b7) fep_vkb_candidate_drop_down_list_pane_g1

0xe76d,	// (0x00026862) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe76d,	// (0x00026862) fep_vkb_candidate_drop_down_list_pane_g2

0xe77a,	// (0x0002686f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe77a,	// (0x0002686f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8a,	// (0x00027c7f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8a,	// (0x00027c7f) fep_vkb_candidate_drop_down_list_pane_g

0xe787,	// (0x0002687c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe787,	// (0x0002687c) fep_vkb_candidate_drop_down_list_scroll_pane

0xe794,	// (0x00026889) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe794,	// (0x00026889) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe7a1,	// (0x00026896) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe7a1,	// (0x00026896) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe7ad,	// (0x000268a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe7ad,	// (0x000268a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe5f1,	// (0x000266e6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe5f1,	// (0x000266e6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe612,	// (0x00026707) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe612,	// (0x00026707) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe7b9,	// (0x000268ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe7b9,	// (0x000268ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe7da,	// (0x000268cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe7da,	// (0x000268cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe7fb,	// (0x000268f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe7fb,	// (0x000268f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x00027c97) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x00027c97) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x23cf,	// (0x0001a4c4) title_pane_g1_ParamLimits

0x23e6,	// (0x0001a4db) title_pane_g2_ParamLimits

0xf529,	// (0x0002761e) title_pane_g_ParamLimits

0xbb4a,	// (0x00023c3f) aid_call2_pane

0xbb52,	// (0x00023c47) aid_call_pane

0xbb5a,	// (0x00023c4f) popup_clock_analogue_window_g1

0xbb5a,	// (0x00023c4f) popup_clock_analogue_window_g2

0x4b39,	// (0x0001cc2e) popup_clock_analogue_window_g3

0x4b42,	// (0x0001cc37) popup_clock_analogue_window_g4

0xaf81,	// (0x00023076) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x000277c8) popup_clock_analogue_window_g

0x4b4a,	// (0x0001cc3f) popup_clock_analogue_window_t1

0x4b58,	// (0x0001cc4d) clock_digital_number_pane_ParamLimits

0x4b58,	// (0x0001cc4d) clock_digital_number_pane

0x4b64,	// (0x0001cc59) clock_digital_number_pane_cp02_ParamLimits

0x4b64,	// (0x0001cc59) clock_digital_number_pane_cp02

0x4b70,	// (0x0001cc65) clock_digital_number_pane_cp03_ParamLimits

0x4b70,	// (0x0001cc65) clock_digital_number_pane_cp03

0x4b7c,	// (0x0001cc71) clock_digital_number_pane_cp04_ParamLimits

0x4b7c,	// (0x0001cc71) clock_digital_number_pane_cp04

0x4b88,	// (0x0001cc7d) clock_digital_separator_pane_ParamLimits

0x4b88,	// (0x0001cc7d) clock_digital_separator_pane

0x4b94,	// (0x0001cc89) popup_clock_digital_window_t1_ParamLimits

0x4b94,	// (0x0001cc89) popup_clock_digital_window_t1

0xaf81,	// (0x00023076) clock_digital_number_pane_g1

0xaf81,	// (0x00023076) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x000277d3) clock_digital_number_pane_g

0xaf81,	// (0x00023076) clock_digital_separator_pane_g1

0xaf81,	// (0x00023076) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x000277d3) clock_digital_separator_pane_g

0x8a15,	// (0x00020b0a) aid_fill_nsta_ParamLimits

0x8b2c,	// (0x00020c21) indicator_nsta_pane_ParamLimits

0xc2cb,	// (0x000243c0) popup_clock_analogue_window

0xc2cb,	// (0x000243c0) popup_clock_digital_window

0x9447,	// (0x0002153c) grid_indicator_nsta_pane_ParamLimits

0xdd9c,	// (0x00025e91) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x00027b69) clock_nsta_pane_t

0x4afd,	// (0x0001cbf2) aid_size_max_handle

0x808d,	// (0x00020182) aid_size_min_handle

0xbff3,	// (0x000240e8) editor_scroll_pane

0xe816,	// (0x0002690b) ex_editor_pane

0xb797,	// (0x0002388c) scroll_pane_cp13

0xb5e5,	// (0x000236da) scroll_pane_cp14

0xbb89,	// (0x00023c7e) scroll_pane_cp36

0x8135,	// (0x0002022a) list_single_graphic_hl_pane_cp2_ParamLimits

0x8135,	// (0x0002022a) list_single_graphic_hl_pane_cp2

0x7cdd,	// (0x0001fdd2) list_single_graphic_hl_pane_ParamLimits

0x7cdd,	// (0x0001fdd2) list_single_graphic_hl_pane

0x44f9,	// (0x0001c5ee) aid_size_min_hl_cp1

0xe81e,	// (0x00026913) list_highlight_pane_cp34_ParamLimits

0xe81e,	// (0x00026913) list_highlight_pane_cp34

0xe82f,	// (0x00026924) list_single_graphic_hl_pane_g1_ParamLimits

0xe82f,	// (0x00026924) list_single_graphic_hl_pane_g1

0x7d04,	// (0x0001fdf9) list_single_graphic_hl_pane_g2_ParamLimits

0x7d04,	// (0x0001fdf9) list_single_graphic_hl_pane_g2

0x7d04,	// (0x0001fdf9) list_single_graphic_hl_pane_g3_ParamLimits

0x7d04,	// (0x0001fdf9) list_single_graphic_hl_pane_g3

0x37b5,	// (0x0001b8aa) list_single_graphic_hl_pane_g4_ParamLimits

0x37b5,	// (0x0001b8aa) list_single_graphic_hl_pane_g4

0x7d10,	// (0x0001fe05) list_single_graphic_hl_pane_g5_ParamLimits

0x7d10,	// (0x0001fe05) list_single_graphic_hl_pane_g5

0x0004,

0xfbb3,	// (0x00027ca8) list_single_graphic_hl_pane_g_ParamLimits

0xfbb3,	// (0x00027ca8) list_single_graphic_hl_pane_g

0x7d24,	// (0x0001fe19) list_single_graphic_hl_pane_t1_ParamLimits

0x7d24,	// (0x0001fe19) list_single_graphic_hl_pane_t1

0xe83c,	// (0x00026931) aid_size_min_hl_cp2

0xe845,	// (0x0002693a) list_highlight_pane_cp34_cp2_ParamLimits

0xe845,	// (0x0002693a) list_highlight_pane_cp34_cp2

0xe82f,	// (0x00026924) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe82f,	// (0x00026924) list_single_graphic_hl_pane_g1_cp2

0xe852,	// (0x00026947) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe852,	// (0x00026947) list_single_graphic_hl_pane_g2_cp2

0xe85e,	// (0x00026953) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe85e,	// (0x00026953) list_single_graphic_hl_pane_g3_cp2

0xbe61,	// (0x00023f56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbe61,	// (0x00023f56) list_single_graphic_hl_pane_g4_cp2

0xe677,	// (0x0002676c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe677,	// (0x0002676c) list_single_graphic_hl_pane_g5_cp2

0x830f,	// (0x00020404) control_pane_g4_ParamLimits

0x830f,	// (0x00020404) control_pane_g4

0xb7ce,	// (0x000238c3) bg_popup_sub_pane_cp10_ParamLimits

0xe1a0,	// (0x00026295) list_choice_list_pane_ParamLimits

0xe1af,	// (0x000262a4) scroll_pane_cp23

0xb19a,	// (0x0002328f) bg_popup_preview_window_pane_cp02_ParamLimits

0xe6b3,	// (0x000267a8) list_preview_fixed_pane_ParamLimits

0xe6c9,	// (0x000267be) list_preview_fixed_pane_cp_ParamLimits

0xe6c9,	// (0x000267be) list_preview_fixed_pane_cp

0xe6d5,	// (0x000267ca) popup_preview_fixed_window_g1_ParamLimits

0xe6d5,	// (0x000267ca) popup_preview_fixed_window_g1

0xe6e1,	// (0x000267d6) popup_preview_fixed_window_g2_ParamLimits

0xe6e1,	// (0x000267d6) popup_preview_fixed_window_g2

0x0002,

0xfb42,	// (0x00027c37) popup_preview_fixed_window_g_ParamLimits

0xfb42,	// (0x00027c37) popup_preview_fixed_window_g

0x4a8d,	// (0x0001cb82) aid_navi_side_left_pane_ParamLimits

0x4a9d,	// (0x0001cb92) aid_navi_side_right_pane_ParamLimits

0x4aac,	// (0x0001cba1) navi_icon_pane_stacon_ParamLimits

0x4abc,	// (0x0001cbb1) navi_navi_pane_stacon_ParamLimits

0x4aac,	// (0x0001cba1) navi_text_pane_stacon_ParamLimits

0xaf77,	// (0x0002306c) main_text_info_pane

0xe880,	// (0x00026975) listscroll_text_info_pane

0xe888,	// (0x0002697d) list_text_info_pane_ParamLimits

0xe888,	// (0x0002697d) list_text_info_pane

0xe897,	// (0x0002698c) scroll_pane_cp24_ParamLimits

0xe897,	// (0x0002698c) scroll_pane_cp24

0x966f,	// (0x00021764) list_text_info_pane_t1_ParamLimits

0x966f,	// (0x00021764) list_text_info_pane_t1

0x849e,	// (0x00020593) popup_fast_swap2_window_ParamLimits

0x849e,	// (0x00020593) popup_fast_swap2_window

0xe8b5,	// (0x000269aa) aid_size_cell_fast2

0xaf77,	// (0x0002306c) bg_popup_window_pane_cp17

0xc782,	// (0x00024877) heading_pane_cp2

0xc78a,	// (0x0002487f) listscroll_fast2_pane

0xe8bf,	// (0x000269b4) grid_fast2_pane

0xe8c7,	// (0x000269bc) listscroll_fast2_pane_g1

0xe8cf,	// (0x000269c4) listscroll_fast2_pane_g2

0x0001,

0xfbbe,	// (0x00027cb3) listscroll_fast2_pane_g

0xb797,	// (0x0002388c) scroll_pane_cp26

0xe8d7,	// (0x000269cc) cell_fast2_pane_ParamLimits

0xe8d7,	// (0x000269cc) cell_fast2_pane

0xe8ed,	// (0x000269e2) cell_fast2_pane_g1

0xe8f6,	// (0x000269eb) cell_fast2_pane_g2

0xe8ff,	// (0x000269f4) cell_fast2_pane_g3

0x0002,

0xfbc3,	// (0x00027cb8) cell_fast2_pane_g

0xb446,	// (0x0002353b) grid_highlight_pane_cp9

0xb45b,	// (0x00023550) main_eswt_pane_ParamLimits

0xb45b,	// (0x00023550) main_eswt_pane

0xe8ac,	// (0x000269a1) list_single_text_info_pane

0xe907,	// (0x000269fc) eswt_ctrl_button_pane

0xe907,	// (0x000269fc) eswt_ctrl_canvas_pane

0xe90f,	// (0x00026a04) eswt_ctrl_combo_pane

0xe907,	// (0x000269fc) eswt_ctrl_default_pane

0xe907,	// (0x000269fc) eswt_ctrl_label_pane

0xe917,	// (0x00026a0c) eswt_ctrl_wait_pane

0xe91f,	// (0x00026a14) eswt_shell_pane

0xaf77,	// (0x0002306c) listscroll_eswt_app_pane

0xe93b,	// (0x00026a30) popup_eswt_tasktip_window_ParamLimits

0xe93b,	// (0x00026a30) popup_eswt_tasktip_window

0xc458,	// (0x0002454d) bg_popup_window_pane_cp18

0xe94c,	// (0x00026a41) eswt_control_pane_g1_ParamLimits

0xe94c,	// (0x00026a41) eswt_control_pane_g1

0xe959,	// (0x00026a4e) eswt_control_pane_g2_ParamLimits

0xe959,	// (0x00026a4e) eswt_control_pane_g2

0xe966,	// (0x00026a5b) eswt_control_pane_g3_ParamLimits

0xe966,	// (0x00026a5b) eswt_control_pane_g3

0xe973,	// (0x00026a68) eswt_control_pane_g4_ParamLimits

0xe973,	// (0x00026a68) eswt_control_pane_g4

0x0003,

0xfbca,	// (0x00027cbf) eswt_control_pane_g_ParamLimits

0xfbca,	// (0x00027cbf) eswt_control_pane_g

0xb635,	// (0x0002372a) bg_button_pane_ParamLimits

0xb635,	// (0x0002372a) bg_button_pane

0xb45b,	// (0x00023550) common_borders_pane_copy2_ParamLimits

0xb45b,	// (0x00023550) common_borders_pane_copy2

0xe980,	// (0x00026a75) control_button_pane_g1_ParamLimits

0xe980,	// (0x00026a75) control_button_pane_g1

0xe98c,	// (0x00026a81) control_button_pane_g2_ParamLimits

0xe98c,	// (0x00026a81) control_button_pane_g2

0xe998,	// (0x00026a8d) control_button_pane_g3_ParamLimits

0xe998,	// (0x00026a8d) control_button_pane_g3

0x0002,

0xfbd3,	// (0x00027cc8) control_button_pane_g_ParamLimits

0xfbd3,	// (0x00027cc8) control_button_pane_g

0xe9ac,	// (0x00026aa1) control_button_pane_t1

0xe9ba,	// (0x00026aaf) control_button_pane_t2

0x0001,

0xfbda,	// (0x00027ccf) control_button_pane_t

0xc3cc,	// (0x000244c1) bg_button_pane_g1

0xc3d4,	// (0x000244c9) bg_button_pane_g2

0xc3dc,	// (0x000244d1) bg_button_pane_g3

0xc3e4,	// (0x000244d9) bg_button_pane_g4

0xc3ec,	// (0x000244e1) bg_button_pane_g5

0xc3f4,	// (0x000244e9) bg_button_pane_g6

0xc3fc,	// (0x000244f1) bg_button_pane_g7

0xc404,	// (0x000244f9) bg_button_pane_g8

0xc40c,	// (0x00024501) bg_button_pane_g9

0x0008,

0xf835,	// (0x0002792a) bg_button_pane_g

0xe15b,	// (0x00026250) common_borders_pane_ParamLimits

0xe15b,	// (0x00026250) common_borders_pane

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy1_ParamLimits

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy1

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy1_ParamLimits

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy1

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy1_ParamLimits

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy1

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy1_ParamLimits

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy1

0xe196,	// (0x0002628b) bg_eswt_ctrl_canvas_pane_g1

0xe15b,	// (0x00026250) common_borders_pane_cp2_ParamLimits

0xe15b,	// (0x00026250) common_borders_pane_cp2

0xe15b,	// (0x00026250) common_borders_pane_cp3_ParamLimits

0xe15b,	// (0x00026250) common_borders_pane_cp3

0xe9c8,	// (0x00026abd) separator_horizontal_pane

0xb9e9,	// (0x00023ade) separator_vertical_pane

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy2_ParamLimits

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy2

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy2_ParamLimits

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy2

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy2_ParamLimits

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy2

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy2_ParamLimits

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy2

0xaf77,	// (0x0002306c) common_borders_pane_cp4

0xe9d0,	// (0x00026ac5) separator_horizontal_pane_g1

0xe9d9,	// (0x00026ace) separator_horizontal_pane_g2

0xe9e2,	// (0x00026ad7) separator_horizontal_pane_g3

0x0002,

0xfbdf,	// (0x00027cd4) separator_horizontal_pane_g

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy3_ParamLimits

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy3

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy3_ParamLimits

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy3

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy3_ParamLimits

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy3

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy3_ParamLimits

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy3

0xaf77,	// (0x0002306c) common_borders_pane_cp5

0xe9eb,	// (0x00026ae0) separator_vertical_pane_g1

0xe9f4,	// (0x00026ae9) separator_vertical_pane_g2

0xe9fd,	// (0x00026af2) separator_vertical_pane_g3

0x0002,

0xfbe6,	// (0x00027cdb) separator_vertical_pane_g

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy4_ParamLimits

0xe94c,	// (0x00026a41) eswt_control_pane_g1_copy4

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy4_ParamLimits

0xe959,	// (0x00026a4e) eswt_control_pane_g2_copy4

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy4_ParamLimits

0xe966,	// (0x00026a5b) eswt_control_pane_g3_copy4

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy4_ParamLimits

0xe973,	// (0x00026a68) eswt_control_pane_g4_copy4

0x968a,	// (0x0002177f) eswt_ctrl_combo_button_pane

0x9692,	// (0x00021787) eswt_ctrl_input_pane

0x969a,	// (0x0002178f) popup_choice_list_window_cp70

0x96a2,	// (0x00021797) eswt_ctrl_input_pane_t1

0xaf77,	// (0x0002306c) input_focus_pane_cp70

0xe15b,	// (0x00026250) bg_button_pane_cp70_ParamLimits

0xe15b,	// (0x00026250) bg_button_pane_cp70

0xd7ed,	// (0x000258e2) eswt_ctrl_combo_button_pane_g1

0xea06,	// (0x00026afb) wait_bar_pane_cp70

0xc458,	// (0x0002454d) bg_popup_window_pane_cp70_ParamLimits

0xc458,	// (0x0002454d) bg_popup_window_pane_cp70

0xea0e,	// (0x00026b03) popup_eswt_tasktip_window_t1

0xea24,	// (0x00026b19) wait_bar_pane_cp71_ParamLimits

0xea24,	// (0x00026b19) wait_bar_pane_cp71

0xea30,	// (0x00026b25) grid_eswt_app_pane

0xb9f2,	// (0x00023ae7) scroll_pane_cp70

0x96b0,	// (0x000217a5) cell_eswt_app_pane_ParamLimits

0x96b0,	// (0x000217a5) cell_eswt_app_pane

0x96d8,	// (0x000217cd) cell_eswt_app_pane_g1_ParamLimits

0x96d8,	// (0x000217cd) cell_eswt_app_pane_g1

0x9707,	// (0x000217fc) cell_eswt_app_pane_g2_ParamLimits

0x9707,	// (0x000217fc) cell_eswt_app_pane_g2

0x0001,

0xfbed,	// (0x00027ce2) cell_eswt_app_pane_g_ParamLimits

0xfbed,	// (0x00027ce2) cell_eswt_app_pane_g

0x9730,	// (0x00021825) cell_eswt_app_pane_t1_ParamLimits

0x9730,	// (0x00021825) cell_eswt_app_pane_t1

0xea39,	// (0x00026b2e) grid_highlight_pane_cp70_ParamLimits

0xea39,	// (0x00026b2e) grid_highlight_pane_cp70

0xb64f,	// (0x00023744) set_content_pane_g1

0x82d2,	// (0x000203c7) status_small_volume_pane

0x9762,	// (0x00021857) status_small_volume_pane_g1

0x976a,	// (0x0002185f) volume_small2_pane

0x9773,	// (0x00021868) volume_small2_pane_g1

0x977c,	// (0x00021871) volume_small2_pane_g2

0x9785,	// (0x0002187a) volume_small2_pane_g3

0x978e,	// (0x00021883) volume_small2_pane_g4

0x9797,	// (0x0002188c) volume_small2_pane_g5

0x97a0,	// (0x00021895) volume_small2_pane_g6

0x97a9,	// (0x0002189e) volume_small2_pane_g7

0x97b2,	// (0x000218a7) volume_small2_pane_g8

0x97bb,	// (0x000218b0) volume_small2_pane_g9

0x97c4,	// (0x000218b9) volume_small2_pane_g10

0x0009,

0xfbf2,	// (0x00027ce7) volume_small2_pane_g

0xe4c9,	// (0x000265be) fep_vkb_top_text_pane_g1_ParamLimits

0x95f7,	// (0x000216ec) fep_vkb_top_text_pane_t1_ParamLimits

0xe6ed,	// (0x000267e2) popup_preview_fixed_window_g3_ParamLimits

0xe6ed,	// (0x000267e2) popup_preview_fixed_window_g3

0x89be,	// (0x00020ab3) popup_toolbar_trans_pane

0xd523,	// (0x00025618) aid_height_set_list_ParamLimits

0xd52f,	// (0x00025624) aid_size_parent_ParamLimits

0xb7ce,	// (0x000238c3) list_highlight_pane_cp2_ParamLimits

0xb64f,	// (0x00023744) set_content_pane_g1_ParamLimits

0xb817,	// (0x0002390c) list_single_image_pane_ParamLimits

0xb817,	// (0x0002390c) list_single_image_pane

0x97cd,	// (0x000218c2) aid_size_cell_image_ParamLimits

0x97cd,	// (0x000218c2) aid_size_cell_image

0x97da,	// (0x000218cf) grid_single_image_pane_ParamLimits

0x97da,	// (0x000218cf) grid_single_image_pane

0xb64f,	// (0x00023744) list_single_image_pane_g1_ParamLimits

0xb64f,	// (0x00023744) list_single_image_pane_g1

0xb65b,	// (0x00023750) list_single_image_pane_g2_ParamLimits

0xb65b,	// (0x00023750) list_single_image_pane_g2

0x0001,

0xfc07,	// (0x00027cfc) list_single_image_pane_g_ParamLimits

0xfc07,	// (0x00027cfc) list_single_image_pane_g

0xdb50,	// (0x00025c45) list_single_image_pane_t1_ParamLimits

0xdb50,	// (0x00025c45) list_single_image_pane_t1

0x97e8,	// (0x000218dd) cell_image_list_pane_ParamLimits

0x97e8,	// (0x000218dd) cell_image_list_pane

0x97fc,	// (0x000218f1) cell_image_list_pane_g1

0x9805,	// (0x000218fa) cell_image_list_pane_g2

0x0001,

0xfc0c,	// (0x00027d01) cell_image_list_pane_g

0xea45,	// (0x00026b3a) aid_size_cell_tb_trans_pane

0xb635,	// (0x0002372a) bg_tb_trans_pane

0xea57,	// (0x00026b4c) grid_tb_trans_pane

0xc3cc,	// (0x000244c1) bg_tb_trans_pane_g1

0xc3d4,	// (0x000244c9) bg_tb_trans_pane_g2

0xc3dc,	// (0x000244d1) bg_tb_trans_pane_g3

0xc3e4,	// (0x000244d9) bg_tb_trans_pane_g4

0xc3ec,	// (0x000244e1) bg_tb_trans_pane_g5

0xc404,	// (0x000244f9) bg_tb_trans_pane_g6

0xc40c,	// (0x00024501) bg_tb_trans_pane_g7

0xc3f4,	// (0x000244e9) bg_tb_trans_pane_g8

0xc3fc,	// (0x000244f1) bg_tb_trans_pane_g9

0x0008,

0xfc11,	// (0x00027d06) bg_tb_trans_pane_g

0xea6b,	// (0x00026b60) cell_toolbar_trans_pane_ParamLimits

0xea6b,	// (0x00026b60) cell_toolbar_trans_pane

0xe196,	// (0x0002628b) cell_toolbar_trans_pane_g1

0x94f4,	// (0x000215e9) list_form2_midp_pane_t1

0x9502,	// (0x000215f7) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x00027baf) list_form2_midp_pane_t

0xde6a,	// (0x00025f5f) scroll_pane_cp51_ParamLimits

0xdfe0,	// (0x000260d5) form2_midp_wait_pane_g1

0xdfe9,	// (0x000260de) form2_midp_wait_pane_g2

0xdff2,	// (0x000260e7) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x00027bc4) form2_midp_wait_pane_g

0xb067,	// (0x0002315c) list_highlight_pane_cp21_ParamLimits

0xe030,	// (0x00026125) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe03f,	// (0x00026134) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd58a,	// (0x0002567f) list_single_2graphic_im_pane_ParamLimits

0xd58a,	// (0x0002567f) list_single_2graphic_im_pane

0x980e,	// (0x00021903) list_single_2graphic_im_pane_g1_ParamLimits

0x980e,	// (0x00021903) list_single_2graphic_im_pane_g1

0x981f,	// (0x00021914) list_single_2graphic_im_pane_g2_ParamLimits

0x981f,	// (0x00021914) list_single_2graphic_im_pane_g2

0x982b,	// (0x00021920) list_single_2graphic_im_pane_g3_ParamLimits

0x982b,	// (0x00021920) list_single_2graphic_im_pane_g3

0x0003,

0xfc24,	// (0x00027d19) list_single_2graphic_im_pane_g_ParamLimits

0xfc24,	// (0x00027d19) list_single_2graphic_im_pane_g

0x983f,	// (0x00021934) list_single_2graphic_im_pane_t1_ParamLimits

0x983f,	// (0x00021934) list_single_2graphic_im_pane_t1

0xe6f9,	// (0x000267ee) list_single_graphic_2heading_pane_fp_ParamLimits

0xe6f9,	// (0x000267ee) list_single_graphic_2heading_pane_fp

0x436b,	// (0x0001c460) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x436b,	// (0x0001c460) list_single_graphic_2heading_pane_fp_g1

0xe70d,	// (0x00026802) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe70d,	// (0x00026802) list_single_graphic_2heading_pane_fp_g2

0x4334,	// (0x0001c429) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4334,	// (0x0001c429) list_single_graphic_2heading_pane_fp_g3

0x4340,	// (0x0001c435) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4340,	// (0x0001c435) list_single_graphic_2heading_pane_fp_g4

0xe719,	// (0x0002680e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe719,	// (0x0002680e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb52,	// (0x00027c47) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb52,	// (0x00027c47) list_single_graphic_2heading_pane_fp_g

0x4538,	// (0x0001c62d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4538,	// (0x0001c62d) list_single_graphic_2heading_pane_fp_t1

0x43a3,	// (0x0001c498) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x43a3,	// (0x0001c498) list_single_graphic_2heading_pane_fp_t2

0x454e,	// (0x0001c643) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x454e,	// (0x0001c643) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2d,	// (0x00027d22) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2d,	// (0x00027d22) list_single_graphic_2heading_pane_fp_t

0xe21f,	// (0x00026314) fep_hwr_write_pane_g5_ParamLimits

0xe21f,	// (0x00026314) fep_hwr_write_pane_g5

0xe22b,	// (0x00026320) fep_hwr_write_pane_g6_ParamLimits

0xe22b,	// (0x00026320) fep_hwr_write_pane_g6

0xe91f,	// (0x00026a14) eswt_shell_pane_ParamLimits

0xc458,	// (0x0002454d) bg_popup_window_pane_cp18_ParamLimits

0xd4c7,	// (0x000255bc) heading_pane_cp70

0xea0e,	// (0x00026b03) popup_eswt_tasktip_window_t1_ParamLimits

0x8a59,	// (0x00020b4e) aid_touch_tab_arrow_left

0x8a6d,	// (0x00020b62) aid_touch_tab_arrow_right

0x2405,	// (0x0001a4fa) title_pane_g3_ParamLimits

0x2405,	// (0x0001a4fa) title_pane_g3

0xb605,	// (0x000236fa) set_value_pane_g1

0x89be,	// (0x00020ab3) popup_toolbar_trans_pane_ParamLimits

0xea45,	// (0x00026b3a) aid_size_cell_tb_trans_pane_ParamLimits

0xb635,	// (0x0002372a) bg_tb_trans_pane_ParamLimits

0xea57,	// (0x00026b4c) grid_tb_trans_pane_ParamLimits

0xb19a,	// (0x0002328f) cont_note_pane_ParamLimits

0xb19a,	// (0x0002328f) cont_note_pane

0xb45b,	// (0x00023550) cont_snote2_single_text_pane_ParamLimits

0xb45b,	// (0x00023550) cont_snote2_single_text_pane

0xb45b,	// (0x00023550) cont_snote2_single_graphic_pane_ParamLimits

0xb45b,	// (0x00023550) cont_snote2_single_graphic_pane

0xc9ea,	// (0x00024adf) cont_note_wait_pane_ParamLimits

0xc9ea,	// (0x00024adf) cont_note_wait_pane

0xc9ea,	// (0x00024adf) cont_note_image_pane_ParamLimits

0xc9ea,	// (0x00024adf) cont_note_image_pane

0xea9d,	// (0x00026b92) popup_note2_window_g1_ParamLimits

0xea9d,	// (0x00026b92) popup_note2_window_g1

0xeace,	// (0x00026bc3) popup_note2_window_t1_ParamLimits

0xeace,	// (0x00026bc3) popup_note2_window_t1

0xeb13,	// (0x00026c08) popup_note2_window_t2_ParamLimits

0xeb13,	// (0x00026c08) popup_note2_window_t2

0xeb58,	// (0x00026c4d) popup_note2_window_t3_ParamLimits

0xeb58,	// (0x00026c4d) popup_note2_window_t3

0xeb9d,	// (0x00026c92) popup_note2_window_t4_ParamLimits

0xeb9d,	// (0x00026c92) popup_note2_window_t4

0xb21e,	// (0x00023313) popup_note2_window_t5_ParamLimits

0xb21e,	// (0x00023313) popup_note2_window_t5

0x0004,

0xfc39,	// (0x00027d2e) popup_note2_window_t_ParamLimits

0xfc39,	// (0x00027d2e) popup_note2_window_t

0xebcc,	// (0x00026cc1) popup_note2_image_window_g1_ParamLimits

0xebcc,	// (0x00026cc1) popup_note2_image_window_g1

0xebd8,	// (0x00026ccd) popup_note2_image_window_g2_ParamLimits

0xebd8,	// (0x00026ccd) popup_note2_image_window_g2

0x0001,

0xfc44,	// (0x00027d39) popup_note2_image_window_g_ParamLimits

0xfc44,	// (0x00027d39) popup_note2_image_window_g

0xebea,	// (0x00026cdf) popup_note2_image_window_t1_ParamLimits

0xebea,	// (0x00026cdf) popup_note2_image_window_t1

0xec02,	// (0x00026cf7) popup_note2_image_window_t2_ParamLimits

0xec02,	// (0x00026cf7) popup_note2_image_window_t2

0xec1a,	// (0x00026d0f) popup_note2_image_window_t3_ParamLimits

0xec1a,	// (0x00026d0f) popup_note2_image_window_t3

0x0002,

0xfc49,	// (0x00027d3e) popup_note2_image_window_t_ParamLimits

0xfc49,	// (0x00027d3e) popup_note2_image_window_t

0xc9f8,	// (0x00024aed) popup_note2_wait_window_g1_ParamLimits

0xc9f8,	// (0x00024aed) popup_note2_wait_window_g1

0xca04,	// (0x00024af9) popup_note2_wait_window_g2_ParamLimits

0xca04,	// (0x00024af9) popup_note2_wait_window_g2

0xca10,	// (0x00024b05) popup_note2_wait_window_g3_ParamLimits

0xca10,	// (0x00024b05) popup_note2_wait_window_g3

0x0002,

0xf817,	// (0x0002790c) popup_note2_wait_window_g_ParamLimits

0xf817,	// (0x0002790c) popup_note2_wait_window_g

0xec36,	// (0x00026d2b) popup_note2_wait_window_t1_ParamLimits

0xec36,	// (0x00026d2b) popup_note2_wait_window_t1

0xec54,	// (0x00026d49) popup_note2_wait_window_t2_ParamLimits

0xec54,	// (0x00026d49) popup_note2_wait_window_t2

0xec72,	// (0x00026d67) popup_note2_wait_window_t3_ParamLimits

0xec72,	// (0x00026d67) popup_note2_wait_window_t3

0xec84,	// (0x00026d79) popup_note2_wait_window_t4_ParamLimits

0xec84,	// (0x00026d79) popup_note2_wait_window_t4

0x0003,

0xfc50,	// (0x00027d45) popup_note2_wait_window_t_ParamLimits

0xfc50,	// (0x00027d45) popup_note2_wait_window_t

0xec96,	// (0x00026d8b) wait_bar2_pane_ParamLimits

0xec96,	// (0x00026d8b) wait_bar2_pane

0xecae,	// (0x00026da3) popup_snote2_single_text_window_g1_ParamLimits

0xecae,	// (0x00026da3) popup_snote2_single_text_window_g1

0xecd6,	// (0x00026dcb) popup_snote2_single_text_window_t1_ParamLimits

0xecd6,	// (0x00026dcb) popup_snote2_single_text_window_t1

0xed22,	// (0x00026e17) popup_snote2_single_text_window_t2_ParamLimits

0xed22,	// (0x00026e17) popup_snote2_single_text_window_t2

0xed6e,	// (0x00026e63) popup_snote2_single_text_window_t3_ParamLimits

0xed6e,	// (0x00026e63) popup_snote2_single_text_window_t3

0xedaf,	// (0x00026ea4) popup_snote2_single_text_window_t4_ParamLimits

0xedaf,	// (0x00026ea4) popup_snote2_single_text_window_t4

0xede5,	// (0x00026eda) popup_snote2_single_text_window_t5_ParamLimits

0xede5,	// (0x00026eda) popup_snote2_single_text_window_t5

0x0004,

0xfc59,	// (0x00027d4e) popup_snote2_single_text_window_t_ParamLimits

0xfc59,	// (0x00027d4e) popup_snote2_single_text_window_t

0xee10,	// (0x00026f05) popup_snote2_single_graphic_window_g1_ParamLimits

0xee10,	// (0x00026f05) popup_snote2_single_graphic_window_g1

0xee38,	// (0x00026f2d) popup_snote2_single_graphic_window_g2_ParamLimits

0xee38,	// (0x00026f2d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc64,	// (0x00027d59) popup_snote2_single_graphic_window_g_ParamLimits

0xfc64,	// (0x00027d59) popup_snote2_single_graphic_window_g

0xee60,	// (0x00026f55) popup_snote2_single_graphic_window_t1_ParamLimits

0xee60,	// (0x00026f55) popup_snote2_single_graphic_window_t1

0xeeac,	// (0x00026fa1) popup_snote2_single_graphic_window_t2_ParamLimits

0xeeac,	// (0x00026fa1) popup_snote2_single_graphic_window_t2

0xed6e,	// (0x00026e63) popup_snote2_single_graphic_window_t3_ParamLimits

0xed6e,	// (0x00026e63) popup_snote2_single_graphic_window_t3

0xedaf,	// (0x00026ea4) popup_snote2_single_graphic_window_t4_ParamLimits

0xedaf,	// (0x00026ea4) popup_snote2_single_graphic_window_t4

0xede5,	// (0x00026eda) popup_snote2_single_graphic_window_t5_ParamLimits

0xede5,	// (0x00026eda) popup_snote2_single_graphic_window_t5

0x0004,

0xfc69,	// (0x00027d5e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc69,	// (0x00027d5e) popup_snote2_single_graphic_window_t

0xde03,	// (0x00025ef8) clock_nsta_pane_cp2_t1

0xde03,	// (0x00025ef8) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x00027b85) clock_nsta_pane_cp2_t

0x3c29,	// (0x0001bd1e) form_field_data_wide_pane_g1_ParamLimits

0xb64f,	// (0x00023744) form_field_data_wide_pane_g2_ParamLimits

0xb64f,	// (0x00023744) form_field_data_wide_pane_g2

0xb65b,	// (0x00023750) form_field_data_wide_pane_g3_ParamLimits

0xb65b,	// (0x00023750) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002774b) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002774b) form_field_data_wide_pane_g

0x9431,	// (0x00021526) grid_touch_3_pane_ParamLimits

0x9431,	// (0x00021526) grid_touch_3_pane

0x9870,	// (0x00021965) cell_touch_3_pane_ParamLimits

0x9870,	// (0x00021965) cell_touch_3_pane

0xe196,	// (0x0002628b) cell_touch_3_pane_g1

0xe196,	// (0x0002628b) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x00027c0a) cell_touch_3_pane_g

0xb276,	// (0x0002336b) cont_query_data_pane

0xb27e,	// (0x00023373) cont_query_data_pane_cp1

0xeef8,	// (0x00026fed) button_value_adjust_pane_cp7

0xef00,	// (0x00026ff5) query_popup_pane_cp3

0xbb9a,	// (0x00023c8f) bg_popup_sub_pane_cp22_ParamLimits

0x4bb3,	// (0x0001cca8) navi_navi_volume_pane_cp2

0x4bcb,	// (0x0001ccc0) popup_side_volume_key_window_g2

0x4bd7,	// (0x0001cccc) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000277e1) popup_side_volume_key_window_g

0x4bf1,	// (0x0001cce6) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000277e8) popup_side_volume_key_window_t

0xbde4,	// (0x00023ed9) popup_side_volume_key_window_ParamLimits

0x388d,	// (0x0001b982) list_double_graphic_pane_g4_ParamLimits

0x388d,	// (0x0001b982) list_double_graphic_pane_g4

0x7cc7,	// (0x0001fdbc) list_single_2heading_msg_pane_ParamLimits

0x7cc7,	// (0x0001fdbc) list_single_2heading_msg_pane

0x7d3a,	// (0x0001fe2f) list_single_2heading_msg_pane_g1_ParamLimits

0x7d3a,	// (0x0001fe2f) list_single_2heading_msg_pane_g1

0x7d46,	// (0x0001fe3b) list_single_2heading_msg_pane_g2_ParamLimits

0x7d46,	// (0x0001fe3b) list_single_2heading_msg_pane_g2

0x7d59,	// (0x0001fe4e) list_single_2heading_msg_pane_g3_ParamLimits

0x7d59,	// (0x0001fe4e) list_single_2heading_msg_pane_g3

0x7d65,	// (0x0001fe5a) list_single_2heading_msg_pane_g4_ParamLimits

0x7d65,	// (0x0001fe5a) list_single_2heading_msg_pane_g4

0x0003,

0xfc74,	// (0x00027d69) list_single_2heading_msg_pane_g_ParamLimits

0xfc74,	// (0x00027d69) list_single_2heading_msg_pane_g

0x7d7d,	// (0x0001fe72) list_single_2heading_msg_pane_t1_ParamLimits

0x7d7d,	// (0x0001fe72) list_single_2heading_msg_pane_t1

0x7da5,	// (0x0001fe9a) list_single_2heading_msg_pane_t2_ParamLimits

0x7da5,	// (0x0001fe9a) list_single_2heading_msg_pane_t2

0x7e10,	// (0x0001ff05) list_single_2heading_msg_pane_t3_ParamLimits

0x7e10,	// (0x0001ff05) list_single_2heading_msg_pane_t3

0x4625,	// (0x0001c71a) list_single_2heading_msg_pane_t4_ParamLimits

0x4625,	// (0x0001c71a) list_single_2heading_msg_pane_t4

0x0003,

0xfc7d,	// (0x00027d72) list_single_2heading_msg_pane_t_ParamLimits

0xfc7d,	// (0x00027d72) list_single_2heading_msg_pane_t

0xb00d,	// (0x00023102) title_pane_g4_ParamLimits

0xb00d,	// (0x00023102) title_pane_g4

0x4a03,	// (0x0001caf8) title_pane_stacon_g3_ParamLimits

0x4a03,	// (0x0001caf8) title_pane_stacon_g3

0xea91,	// (0x00026b86) list_single_2graphic_im_pane_g4_ParamLimits

0xea91,	// (0x00026b86) list_single_2graphic_im_pane_g4

0xd2f1,	// (0x000253e6) popup_side_volume_key_window_cp

0xd759,	// (0x0002584e) main_idle_act2_pane_t1

0x5403,	// (0x0001d4f8) toolbar_button_pane_g10

0x2726,	// (0x0001a81b) popup_toolbar_window_cp1

0xddf4,	// (0x00025ee9) clock_nsta_pane_cp_t1

0xddf4,	// (0x00025ee9) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x00027b80) clock_nsta_pane_cp_t

0x4bb3,	// (0x0001cca8) navi_navi_volume_pane_cp2_ParamLimits

0x4bbf,	// (0x0001ccb4) popup_side_volume_key_window_g1_ParamLimits

0x4bcb,	// (0x0001ccc0) popup_side_volume_key_window_g2_ParamLimits

0x4bd7,	// (0x0001cccc) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000277e1) popup_side_volume_key_window_g_ParamLimits

0x5879,	// (0x0001d96e) fep_hwr_aid_pane

0x1763,	// (0x00019858) bg_fep_hwr_top_pane_g4_ParamLimits

0xe1ef,	// (0x000262e4) fep_hwr_top_pane_g1_ParamLimits

0xe201,	// (0x000262f6) fep_hwr_top_pane_g2_ParamLimits

0x592c,	// (0x0001da21) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x00027bd5) fep_hwr_top_pane_g_ParamLimits

0x5941,	// (0x0001da36) fep_hwr_top_text_pane_ParamLimits

0xd0f1,	// (0x000251e6) aid_touch_tab_arrow_arrow_2

0xd0fa,	// (0x000251ef) aid_touch_tab_arrow_left_2

0x588d,	// (0x0001d982) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x58c0,	// (0x0001d9b5) fep_hwr_prediction_pane

0xe334,	// (0x00026429) fep_vkb_prediction_pane

0x95d7,	// (0x000216cc) fep_vkb_side_pane_g3_ParamLimits

0x95d7,	// (0x000216cc) fep_vkb_side_pane_g3

0xe3c2,	// (0x000264b7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe76d,	// (0x00026862) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe77a,	// (0x0002686f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8a,	// (0x00027c7f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xef11,	// (0x00027006) fep_hwr_prediction_pane_g1

0x5bc0,	// (0x0001dcb5) fep_hwr_prediction_pane_g2

0x5bc8,	// (0x0001dcbd) fep_hwr_prediction_pane_g3

0x5bd0,	// (0x0001dcc5) fep_hwr_prediction_pane_g4

0x0003,

0xfc86,	// (0x00027d7b) fep_hwr_prediction_pane_g

0xef11,	// (0x00027006) fep_vkb_prediction_pane_g1

0xef1b,	// (0x00027010) fep_vkb_prediction_pane_g2

0xef23,	// (0x00027018) fep_vkb_prediction_pane_g3

0xef2b,	// (0x00027020) fep_vkb_prediction_pane_g4

0x0003,

0xfc8f,	// (0x00027d84) fep_vkb_prediction_pane_g

0x56b1,	// (0x0001d7a6) slider_set_pane_g3

0x56c5,	// (0x0001d7ba) slider_set_pane_g4

0x56dd,	// (0x0001d7d2) slider_set_pane_g5

0x56b1,	// (0x0001d7a6) slider_set_pane_g6

0x9141,	// (0x00021236) slider_set_pane_g7

0xd552,	// (0x00025647) slider_form_pane_g3

0xd55b,	// (0x00025650) slider_form_pane_g4

0xd563,	// (0x00025658) slider_form_pane_g5

0xd552,	// (0x00025647) slider_form_pane_g6

0x929d,	// (0x00021392) slider_form_pane_g7

0xd9aa,	// (0x00025a9f) slider_set_pane_vc_g3

0xd9b3,	// (0x00025aa8) slider_set_pane_vc_g4

0xd9bc,	// (0x00025ab1) slider_set_pane_vc_g5

0xd9aa,	// (0x00025a9f) slider_set_pane_vc_g6

0xd9c5,	// (0x00025aba) slider_set_pane_vc_g7

0xd9aa,	// (0x00025a9f) slider_form_pane_vc_g1

0xd9b3,	// (0x00025aa8) slider_form_pane_vc_g2

0xd9bc,	// (0x00025ab1) slider_form_pane_vc_g3

0xd9aa,	// (0x00025a9f) slider_form_pane_vc_g4

0xdb39,	// (0x00025c2e) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x00027b52) slider_form_pane_vc_g

0xaf77,	// (0x0002306c) main_idle_act3_pane

0xef33,	// (0x00027028) ai3_links_pane

0x98b7,	// (0x000219ac) popup_ai3_data_window_ParamLimits

0x98b7,	// (0x000219ac) popup_ai3_data_window

0xaf77,	// (0x0002306c) grid_ai3_links_pane

0x98cf,	// (0x000219c4) cell_ai3_links_pane_ParamLimits

0x98cf,	// (0x000219c4) cell_ai3_links_pane

0xef3c,	// (0x00027031) bg_popup_sub_pane_cp11

0xef49,	// (0x0002703e) cell_ai3_links_pane_g1

0xaf77,	// (0x0002306c) bg_popup_sub_pane_cp12

0xef6e,	// (0x00027063) heading_ai3_data_pane

0xef76,	// (0x0002706b) list_ai3_gene_pane

0xef82,	// (0x00027077) popup_ai3_data_window_g1

0xef8a,	// (0x0002707f) heading_ai3_data_pane_g1

0xef92,	// (0x00027087) heading_ai3_data_pane_t1

0xefa0,	// (0x00027095) list_double_ai3_gene_pane_ParamLimits

0xefa0,	// (0x00027095) list_double_ai3_gene_pane

0xefad,	// (0x000270a2) list_single_ai3_gene_pane_ParamLimits

0xefad,	// (0x000270a2) list_single_ai3_gene_pane

0xe15b,	// (0x00026250) list_highlight_pane_cp7_ParamLimits

0xe15b,	// (0x00026250) list_highlight_pane_cp7

0xefba,	// (0x000270af) list_single_a13_gene_pane_t1_ParamLimits

0xefba,	// (0x000270af) list_single_a13_gene_pane_t1

0xefd1,	// (0x000270c6) list_single_ai3_gene_pane_g1

0xefda,	// (0x000270cf) list_single_ai3_gene_pane_g2

0x0001,

0xfc98,	// (0x00027d8d) list_single_ai3_gene_pane_g

0xefe2,	// (0x000270d7) list_double_ai3_gene_pane_g1_ParamLimits

0xefe2,	// (0x000270d7) list_double_ai3_gene_pane_g1

0xefee,	// (0x000270e3) list_double_ai3_gene_pane_t1_ParamLimits

0xefee,	// (0x000270e3) list_double_ai3_gene_pane_t1

0xf00a,	// (0x000270ff) list_double_ai3_gene_pane_t2_ParamLimits

0xf00a,	// (0x000270ff) list_double_ai3_gene_pane_t2

0xf01f,	// (0x00027114) list_double_ai3_gene_pane_t3_ParamLimits

0xf01f,	// (0x00027114) list_double_ai3_gene_pane_t3

0x0002,

0xfc9d,	// (0x00027d92) list_double_ai3_gene_pane_t_ParamLimits

0xfc9d,	// (0x00027d92) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4564,	// (0x0001c659) aid_size_min_col_2

0x98a3,	// (0x00021998) aid_size_min_msg_ParamLimits

0x98a3,	// (0x00021998) aid_size_min_msg

0x95eb,	// (0x000216e0) fep_vkb_top_text_pane_g2_ParamLimits

0x95eb,	// (0x000216e0) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x00027c05) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x00027c05) fep_vkb_top_text_pane_g

0xaf77,	// (0x0002306c) main_hc_apps_shell_pane

0xf03c,	// (0x00027131) grid_hc_apps_pane_ParamLimits

0xf03c,	// (0x00027131) grid_hc_apps_pane

0xf04e,	// (0x00027143) list_hc_apps_pane

0xf056,	// (0x0002714b) scroll_pane_cp37_ParamLimits

0xf056,	// (0x0002714b) scroll_pane_cp37

0x98e5,	// (0x000219da) cell_hc_apps_pane_ParamLimits

0x98e5,	// (0x000219da) cell_hc_apps_pane

0x997f,	// (0x00021a74) cell_hc_apps_pane_g1_ParamLimits

0x997f,	// (0x00021a74) cell_hc_apps_pane_g1

0xf062,	// (0x00027157) cell_hc_apps_pane_g2_ParamLimits

0xf062,	// (0x00027157) cell_hc_apps_pane_g2

0xf07e,	// (0x00027173) cell_hc_apps_pane_g3_ParamLimits

0xf07e,	// (0x00027173) cell_hc_apps_pane_g3

0x0002,

0xfca4,	// (0x00027d99) cell_hc_apps_pane_g_ParamLimits

0xfca4,	// (0x00027d99) cell_hc_apps_pane_g

0x99ab,	// (0x00021aa0) cell_hc_apps_pane_t1_ParamLimits

0x99ab,	// (0x00021aa0) cell_hc_apps_pane_t1

0xb19a,	// (0x0002328f) grid_highlight_pane_cp10_ParamLimits

0xb19a,	// (0x0002328f) grid_highlight_pane_cp10

0x99e9,	// (0x00021ade) list_single_hc_apps_pane_ParamLimits

0x99e9,	// (0x00021ade) list_single_hc_apps_pane

0x9a15,	// (0x00021b0a) list_single_hc_apps_pane_g1

0x7e7e,	// (0x0001ff73) list_single_hc_apps_pane_g2

0x0001,

0xfcab,	// (0x00027da0) list_single_hc_apps_pane_g

0x7e97,	// (0x0001ff8c) list_single_hc_apps_pane_g2_copy1

0x7eb3,	// (0x0001ffa8) list_single_hc_apps_pane_t1

0xb067,	// (0x0002315c) bg_set_opt_pane_cp_ParamLimits

0x4951,	// (0x0001ca46) setting_slider_pane_t1_ParamLimits

0x8037,	// (0x0002012c) setting_slider_pane_t2_ParamLimits

0x8050,	// (0x00020145) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002762e) setting_slider_pane_t_ParamLimits

0x4997,	// (0x0001ca8c) slider_set_pane_ParamLimits

0x4e33,	// (0x0001cf28) control_pane_g5_ParamLimits

0x4e33,	// (0x0001cf28) control_pane_g5

0xd50e,	// (0x00025603) slider_set_pane_g1_ParamLimits

0x56a5,	// (0x0001d79a) slider_set_pane_g2_ParamLimits

0x56b1,	// (0x0001d7a6) slider_set_pane_g3_ParamLimits

0x56c5,	// (0x0001d7ba) slider_set_pane_g4_ParamLimits

0x56dd,	// (0x0001d7d2) slider_set_pane_g5_ParamLimits

0x56b1,	// (0x0001d7a6) slider_set_pane_g6_ParamLimits

0x9141,	// (0x00021236) slider_set_pane_g7_ParamLimits

0xf933,	// (0x00027a28) slider_set_pane_g_ParamLimits

0xb067,	// (0x0002315c) navi_icon_text_pane_ParamLimits

0x8a2b,	// (0x00020b20) aid_fill_nsta_2_ParamLimits

0x8a59,	// (0x00020b4e) aid_touch_tab_arrow_left_ParamLimits

0x8a6d,	// (0x00020b62) aid_touch_tab_arrow_right_ParamLimits

0x8b09,	// (0x00020bfe) clock_nsta_pane_ParamLimits

0xd0d3,	// (0x000251c8) navi_icon_pane_g1_ParamLimits

0xd0df,	// (0x000251d4) navi_text_pane_t1_ParamLimits

0xde44,	// (0x00025f39) navi_icon_text_pane_g1_ParamLimits

0xde50,	// (0x00025f45) navi_icon_text_pane_t1_ParamLimits

0x9a15,	// (0x00021b0a) list_single_hc_apps_pane_g1_ParamLimits

0x7e7e,	// (0x0001ff73) list_single_hc_apps_pane_g2_ParamLimits

0xfcab,	// (0x00027da0) list_single_hc_apps_pane_g_ParamLimits

0x7e97,	// (0x0001ff8c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7eb3,	// (0x0001ffa8) list_single_hc_apps_pane_t1_ParamLimits

0x7f7d,	// (0x00020072) popup_toolbar2_fixed_window_ParamLimits

0x7f7d,	// (0x00020072) popup_toolbar2_fixed_window

0x89b6,	// (0x00020aab) popup_toolbar2_float_window

0xaf77,	// (0x0002306c) bg_popup_sub_pane_cp27

0xf0a0,	// (0x00027195) grid_toolbar2_float_pane

0xaf77,	// (0x0002306c) bg_popup_sub_pane_cp26

0xf0a0,	// (0x00027195) grid_toolbar2_fixed_pane

0x9a2e,	// (0x00021b23) cell_toolbar2_fixed_pane_ParamLimits

0x9a2e,	// (0x00021b23) cell_toolbar2_fixed_pane

0x9a49,	// (0x00021b3e) cell_toolbar2_fixed_pane_g1

0xf0a8,	// (0x0002719d) toolbar2_fixed_button_pane

0xc3cc,	// (0x000244c1) toolbar2_fixed_button_pane_g1

0xc3d4,	// (0x000244c9) toolbar2_fixed_button_pane_g2

0xc3dc,	// (0x000244d1) toolbar2_fixed_button_pane_g3

0xc3e4,	// (0x000244d9) toolbar2_fixed_button_pane_g4

0xc3ec,	// (0x000244e1) toolbar2_fixed_button_pane_g5

0xc3f4,	// (0x000244e9) toolbar2_fixed_button_pane_g6

0xc3fc,	// (0x000244f1) toolbar2_fixed_button_pane_g7

0xc404,	// (0x000244f9) toolbar2_fixed_button_pane_g8

0xc40c,	// (0x00024501) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x0002792a) toolbar2_fixed_button_pane_g

0xf0b0,	// (0x000271a5) cell_toolbar2_float_pane_ParamLimits

0xf0b0,	// (0x000271a5) cell_toolbar2_float_pane

0xf0c1,	// (0x000271b6) cell_toolbar2_float_pane_g1

0xf0a8,	// (0x0002719d) toolbar2_fixed_button_pane_cp

0x95a0,	// (0x00021695) fep_vkb_accented_list_pane_ParamLimits

0x95a0,	// (0x00021695) fep_vkb_accented_list_pane

0x5a83,	// (0x0001db78) bg_popup_fep_shadow_pane_g9

0xbff3,	// (0x000240e8) bg_popup_fep_shadow_pane_cp3

0xb77e,	// (0x00023873) list_accented_list_pane

0xf0ca,	// (0x000271bf) list_single_accented_list_pane_ParamLimits

0xf0ca,	// (0x000271bf) list_single_accented_list_pane

0xbff3,	// (0x000240e8) list_highlight_pane_cp10

0xf0db,	// (0x000271d0) list_single_accented_list_pane_t1

0x88f8,	// (0x000209ed) popup_slider_window_ParamLimits

0x88f8,	// (0x000209ed) popup_slider_window

0xef08,	// (0x00026ffd) aid_indentation_list_msg

0x9b28,	// (0x00021c1d) bg_popup_window_pane_cp19

0xf141,	// (0x00027236) popup_slider_window_g1

0xf15d,	// (0x00027252) popup_slider_window_g2

0xf179,	// (0x0002726e) popup_slider_window_g3

0x0005,

0xfcb0,	// (0x00027da5) popup_slider_window_g

0xf195,	// (0x0002728a) popup_slider_window_t1

0xf1d9,	// (0x000272ce) small_volume_slider_vertical_pane

0xe196,	// (0x0002628b) small_volume_slider_vertical_pane_g1

0xe196,	// (0x0002628b) small_volume_slider_vertical_pane_g2

0xf1f5,	// (0x000272ea) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc2,	// (0x00027db7) small_volume_slider_vertical_pane_g

0x7f01,	// (0x0001fff6) area_side_right_pane_ParamLimits

0x7f01,	// (0x0001fff6) area_side_right_pane

0x9be0,	// (0x00021cd5) aid_size_side_button_ParamLimits

0x9be0,	// (0x00021cd5) aid_size_side_button

0x9bf9,	// (0x00021cee) grid_sctrl_middle_pane_ParamLimits

0x9bf9,	// (0x00021cee) grid_sctrl_middle_pane

0x5c08,	// (0x0001dcfd) sctrl_sk_bottom_pane

0x5c19,	// (0x0001dd0e) sctrl_sk_top_pane

0x5c2b,	// (0x0001dd20) aid_touch_sctrl_top

0xb19a,	// (0x0002328f) bg_sctrl_sk_pane_ParamLimits

0xb19a,	// (0x0002328f) bg_sctrl_sk_pane

0x5c38,	// (0x0001dd2d) sctrl_sk_top_pane_g1

0x5c45,	// (0x0001dd3a) sctrl_sk_top_pane_t1

0x5c2b,	// (0x0001dd20) aid_touch_sctrl_bottom

0xb19a,	// (0x0002328f) bg_sctrl_sk_pane_cp_ParamLimits

0xb19a,	// (0x0002328f) bg_sctrl_sk_pane_cp

0x5c60,	// (0x0001dd55) sctrl_sk_bottom_pane_g1

0x5c45,	// (0x0001dd3a) sctrl_sk_bottom_pane_t1

0x9c0f,	// (0x00021d04) cell_sctrl_middle_pane_ParamLimits

0x9c0f,	// (0x00021d04) cell_sctrl_middle_pane

0x9c20,	// (0x00021d15) aid_touch_sctrl_middle_ParamLimits

0x9c20,	// (0x00021d15) aid_touch_sctrl_middle

0x9c2d,	// (0x00021d22) bg_sctrl_middle_pane_ParamLimits

0x9c2d,	// (0x00021d22) bg_sctrl_middle_pane

0xf1fe,	// (0x000272f3) cell_sctrl_middle_pane_g1_ParamLimits

0xf1fe,	// (0x000272f3) cell_sctrl_middle_pane_g1

0x9c3b,	// (0x00021d30) cell_sctrl_middle_pane_g2_ParamLimits

0x9c3b,	// (0x00021d30) cell_sctrl_middle_pane_g2

0x0001,

0xfcce,	// (0x00027dc3) cell_sctrl_middle_pane_g_ParamLimits

0xfcce,	// (0x00027dc3) cell_sctrl_middle_pane_g

0xc3cc,	// (0x000244c1) bg_sctrl_middle_pane_g1

0xc3d4,	// (0x000244c9) bg_sctrl_middle_pane_g2

0xc3dc,	// (0x000244d1) bg_sctrl_middle_pane_g3

0xc3e4,	// (0x000244d9) bg_sctrl_middle_pane_g4

0xc3ec,	// (0x000244e1) bg_sctrl_middle_pane_g5

0xc3f4,	// (0x000244e9) bg_sctrl_middle_pane_g6

0xc3fc,	// (0x000244f1) bg_sctrl_middle_pane_g7

0xc404,	// (0x000244f9) bg_sctrl_middle_pane_g8

0x0007,

0xfcd3,	// (0x00027dc8) bg_sctrl_middle_pane_g

0xc40c,	// (0x00024501) bg_sctrl_middle_pane_g8_copy1

0xc3cc,	// (0x000244c1) bg_sctrl_sk_pane_g1

0xc3d4,	// (0x000244c9) bg_sctrl_sk_pane_g2

0xc3dc,	// (0x000244d1) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x0002792a) bg_sctrl_sk_pane_g

0xb57d,	// (0x00023672) aid_size_touch_scroll_bar

0xc3e4,	// (0x000244d9) bg_sctrl_sk_pane_g4

0xc3ec,	// (0x000244e1) bg_sctrl_sk_pane_g5

0xc3f4,	// (0x000244e9) bg_sctrl_sk_pane_g6

0xc3fc,	// (0x000244f1) bg_sctrl_sk_pane_g7

0xc404,	// (0x000244f9) bg_sctrl_sk_pane_g8

0xc40c,	// (0x00024501) bg_sctrl_sk_pane_g9

0x4fc9,	// (0x0001d0be) popup_fep_china_hwr2_fs_candidate_window

0x84f3,	// (0x000205e8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x84f3,	// (0x000205e8) popup_fep_china_hwr2_fs_control_window

0xe3c2,	// (0x000264b7) sctrl_sk_top_pane_g2

0x0001,

0xfcc9,	// (0x00027dbe) sctrl_sk_top_pane_g

0x9c48,	// (0x00021d3d) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9c48,	// (0x00021d3d) aid_fep_china_hwr2_fs_cell

0x9c5c,	// (0x00021d51) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9c5c,	// (0x00021d51) bg_popup_fep_shadow_pane_cp4

0x9c73,	// (0x00021d68) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9c73,	// (0x00021d68) bg_popup_fep_shadow_pane_cp5

0x9c85,	// (0x00021d7a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9c85,	// (0x00021d7a) popup_fep_china_hwr2_fs_control_bar_grid

0x9c99,	// (0x00021d8e) popup_fep_china_hwr2_fs_control_funtion_grid

0xf20c,	// (0x00027301) aid_fep_china_hwr2_fs_candi_cell

0xaf77,	// (0x0002306c) bg_popup_fep_shadow_pane_cp6

0xf216,	// (0x0002730b) popup_fep_china_hwr2_fs_candidate_grid

0x9ca1,	// (0x00021d96) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x9ca1,	// (0x00021d96) cell_fep_china_hwr2_fs_funtion_grid

0xe196,	// (0x0002628b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf1fe,	// (0x000272f3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf1fe,	// (0x000272f3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf21e,	// (0x00027313) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf21e,	// (0x00027313) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce4,	// (0x00027dd9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce4,	// (0x00027dd9) cell_fep_china_hwr2_fs_funtion_grid_g

0x9cb9,	// (0x00021dae) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9cb9,	// (0x00021dae) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9cce,	// (0x00021dc3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9cce,	// (0x00021dc3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce9,	// (0x00027dde) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce9,	// (0x00027dde) cell_fep_china_hwr2_fs_funtion_grid_t

0xf234,	// (0x00027329) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf23c,	// (0x00027331) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf244,	// (0x00027339) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcee,	// (0x00027de3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf24c,	// (0x00027341) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf24c,	// (0x00027341) cell_fep_china_hwr2_fs_candidate_grid

0xf265,	// (0x0002735a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf26d,	// (0x00027362) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe196,	// (0x0002628b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe196,	// (0x0002628b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x00027c0a) cell_fep_china_hwr2_fs_candidate_grid_g

0xf275,	// (0x0002736a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc231,	// (0x00024326) clock_nsta_pane_cp_24_ParamLimits

0xc231,	// (0x00024326) clock_nsta_pane_cp_24

0xc28e,	// (0x00024383) indicator_nsta_pane_cp_24_ParamLimits

0xc28e,	// (0x00024383) indicator_nsta_pane_cp_24

0xcfde,	// (0x000250d3) heading_pane_g1

0x0001,

0xf89a,	// (0x0002798f) heading_pane_g

0x9359,	// (0x0002144e) grid_sct_catagory_button_pane

0xc91b,	// (0x00024a10) scroll_pane_cp5_ParamLimits

0xde76,	// (0x00025f6b) button_value_adjust_pane_cp5_ParamLimits

0xde76,	// (0x00025f6b) button_value_adjust_pane_cp5

0xdf34,	// (0x00026029) form2_midp_time_pane_ParamLimits

0xf283,	// (0x00027378) cell_sct_catagory_button_pane_ParamLimits

0xf283,	// (0x00027378) cell_sct_catagory_button_pane

0xe15b,	// (0x00026250) bg_button_pane_cp01_ParamLimits

0xe15b,	// (0x00026250) bg_button_pane_cp01

0xe196,	// (0x0002628b) cell_sct_catagory_button_pane_g1

0x8967,	// (0x00020a5c) popup_tb_extension_window

0x9cea,	// (0x00021ddf) aid_size_cell_ext_ParamLimits

0x9cea,	// (0x00021ddf) aid_size_cell_ext

0xb45b,	// (0x00023550) bg_tb_trans_pane_cp1_ParamLimits

0xb45b,	// (0x00023550) bg_tb_trans_pane_cp1

0x9d10,	// (0x00021e05) grid_tb_ext_pane_ParamLimits

0x9d10,	// (0x00021e05) grid_tb_ext_pane

0x9d46,	// (0x00021e3b) cell_tb_ext_pane_ParamLimits

0x9d46,	// (0x00021e3b) cell_tb_ext_pane

0x9d6a,	// (0x00021e5f) cell_tb_ext_pane_g1_ParamLimits

0x9d6a,	// (0x00021e5f) cell_tb_ext_pane_g1

0xf295,	// (0x0002738a) cell_tb_ext_pane_t1

0xb19a,	// (0x0002328f) list_highlight_pane_cp11_ParamLimits

0xb19a,	// (0x0002328f) list_highlight_pane_cp11

0x7f92,	// (0x00020087) popup_uni_indicator_window_ParamLimits

0x7f92,	// (0x00020087) popup_uni_indicator_window

0xb635,	// (0x0002372a) bg_popup_sub_pane_cp14

0xf2b0,	// (0x000273a5) list_uniindi_pane

0xf2bc,	// (0x000273b1) uniindi_top_pane

0xb19a,	// (0x0002328f) bg_uniindi_top_pane

0xf2db,	// (0x000273d0) uniindi_top_pane_g1

0xf2f1,	// (0x000273e6) uniindi_top_pane_g2

0x0003,

0xfcf5,	// (0x00027dea) uniindi_top_pane_g

0xf31b,	// (0x00027410) uniindi_top_pane_t1

0xf345,	// (0x0002743a) list_single_uniindi_pane_ParamLimits

0xf345,	// (0x0002743a) list_single_uniindi_pane

0xe196,	// (0x0002628b) bg_uniindi_top_pane_g1

0xf357,	// (0x0002744c) list_single_uniindi_pane_g1

0xf36a,	// (0x0002745f) list_single_uniindi_pane_t1

0xaf77,	// (0x0002306c) control_bg_pane

0xf38f,	// (0x00027484) bg_sctrl_sk_pane_cp1

0xf398,	// (0x0002748d) bg_sctrl_sk_pane_cp2

0xf3a1,	// (0x00027496) control_bg_pane_g1

0xf3aa,	// (0x0002749f) control_bg_pane_g2

0x0001,

0xfcfe,	// (0x00027df3) control_bg_pane_g

0xdd37,	// (0x00025e2c) cell_indicator_nsta_pane_g1_ParamLimits

0x946a,	// (0x0002155f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x00027b6e) cell_indicator_nsta_pane_g_ParamLimits

0x4321,	// (0x0001c416) form2_midp_time_pane_t1_ParamLimits

0x586b,	// (0x0001d960) main_idle_act4_pane_ParamLimits

0x586b,	// (0x0001d960) main_idle_act4_pane

0x8967,	// (0x00020a5c) popup_tb_extension_window_ParamLimits

0x9d30,	// (0x00021e25) tb_ext_find_pane_ParamLimits

0x9d30,	// (0x00021e25) tb_ext_find_pane

0xf3b3,	// (0x000274a8) ai_gene_pane_1_cp1

0xc087,	// (0x0002417c) ai_gene_pane_2_cp1

0xf3bb,	// (0x000274b0) list_single_idle_plugin_calendar_pane

0xf3c4,	// (0x000274b9) list_single_idle_plugin_notification_pane

0xf3cd,	// (0x000274c2) list_single_idle_plugin_player_pane

0x9d87,	// (0x00021e7c) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9d87,	// (0x00021e7c) list_single_idle_plugin_shortcut_pane

0x9daf,	// (0x00021ea4) main_idle_act4_pane_t1

0x9dc5,	// (0x00021eba) main_idle_act4_pane_t2

0x0001,

0xfd03,	// (0x00027df8) main_idle_act4_pane_t

0x9ddb,	// (0x00021ed0) middle_sk_idle_act4_pane_ParamLimits

0x9ddb,	// (0x00021ed0) middle_sk_idle_act4_pane

0x9df7,	// (0x00021eec) popup_clock_digital_analogue_window_cp2

0x9e1d,	// (0x00021f12) shortcut_wheel_idle_act4_pane_ParamLimits

0x9e1d,	// (0x00021f12) shortcut_wheel_idle_act4_pane

0xe196,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g1

0xe196,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g2

0xe196,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g3

0xe196,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g4

0xe196,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g5

0xf3d6,	// (0x000274cb) shortcut_wheel_idle_act4_pane_g6

0xf3de,	// (0x000274d3) shortcut_wheel_idle_act4_pane_g7

0xf3e6,	// (0x000274db) shortcut_wheel_idle_act4_pane_g8

0xf3ee,	// (0x000274e3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd08,	// (0x00027dfd) shortcut_wheel_idle_act4_pane_g

0x1763,	// (0x00019858) middle_sk_idle_act4_pane_g1_ParamLimits

0x1763,	// (0x00019858) middle_sk_idle_act4_pane_g1

0x9e98,	// (0x00021f8d) middle_sk_idle_act4_pane_g2_ParamLimits

0x9e98,	// (0x00021f8d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2b,	// (0x00027e20) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2b,	// (0x00027e20) middle_sk_idle_act4_pane_g

0x9eb0,	// (0x00021fa5) middle_sk_idle_act4_pane_t1_ParamLimits

0x9eb0,	// (0x00021fa5) middle_sk_idle_act4_pane_t1

0x9edf,	// (0x00021fd4) grid_ai_shortcut_pane_ParamLimits

0x9edf,	// (0x00021fd4) grid_ai_shortcut_pane

0x9efc,	// (0x00021ff1) list_highlight_pane_cp16_ParamLimits

0x9efc,	// (0x00021ff1) list_highlight_pane_cp16

0x9f09,	// (0x00021ffe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9f09,	// (0x00021ffe) list_single_idle_plugin_shortcut_pane_g1

0x9f15,	// (0x0002200a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x9f15,	// (0x0002200a) list_single_idle_plugin_shortcut_pane_g2

0x9f31,	// (0x00022026) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x9f31,	// (0x00022026) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd30,	// (0x00027e25) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd30,	// (0x00027e25) list_single_idle_plugin_shortcut_pane_g

0x9f46,	// (0x0002203b) cell_ai_shortcut_pane_ParamLimits

0x9f46,	// (0x0002203b) cell_ai_shortcut_pane

0x9f5c,	// (0x00022051) cell_ai_shortcut_pane_g1_ParamLimits

0x9f5c,	// (0x00022051) cell_ai_shortcut_pane_g1

0xf3b3,	// (0x000274a8) ai_gene_pane_1_cp2

0xf3f6,	// (0x000274eb) ai_gene_pane_2_cp2

0xf3fe,	// (0x000274f3) list_highlight_pane_cp15

0xf407,	// (0x000274fc) list_single_idle_plugin_calendar_pane_g1

0xf3fe,	// (0x000274f3) list_highlight_pane_cp17

0xf40f,	// (0x00027504) list_single_idle_plugin_calendar_pane_g1_copy1

0xf417,	// (0x0002750c) list_single_idle_plugin_player_pane_g1

0xd7e5,	// (0x000258da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd37,	// (0x00027e2c) list_single_idle_plugin_player_pane_g

0xf41f,	// (0x00027514) list_single_idle_plugin_player_pane_t1

0xf42d,	// (0x00027522) list_single_idle_plugin_player_pane_t2

0xf43b,	// (0x00027530) list_single_idle_plugin_player_pane_t3

0xf449,	// (0x0002753e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3c,	// (0x00027e31) list_single_idle_plugin_player_pane_t

0xf457,	// (0x0002754c) wait_bar_pane_cp15

0xf45f,	// (0x00027554) grid_ai_notification_pane

0xd7e5,	// (0x000258da) list_single_idle_plugin_notification_pane_g1

0x9f7e,	// (0x00022073) cell_ai_notification_pane_ParamLimits

0x9f7e,	// (0x00022073) cell_ai_notification_pane

0xf468,	// (0x0002755d) cell_ai_notification_pane_g1

0xf470,	// (0x00027565) cell_ai_notification_pane_t1

0x9f8b,	// (0x00022080) tb_ext_find_button_pane

0x9f93,	// (0x00022088) tb_ext_find_pane_g1

0x9f9b,	// (0x00022090) tb_ext_find_pane_t1

0xbb5a,	// (0x00023c4f) tb_ext_find_button_pane_g1

0xf47e,	// (0x00027573) tb_ext_find_button_pane_g2

0x0001,

0xfd45,	// (0x00027e3a) tb_ext_find_button_pane_g

0x9daf,	// (0x00021ea4) main_idle_act4_pane_t1_ParamLimits

0x9dc5,	// (0x00021eba) main_idle_act4_pane_t2_ParamLimits

0xfd03,	// (0x00027df8) main_idle_act4_pane_t_ParamLimits

0x9df7,	// (0x00021eec) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9e0d,	// (0x00021f02) sat_plugin_idle_act4_pane_ParamLimits

0x9e0d,	// (0x00021f02) sat_plugin_idle_act4_pane

0x9fa9,	// (0x0002209e) sat_plugin_idle_act4_pane_t1_ParamLimits

0x9fa9,	// (0x0002209e) sat_plugin_idle_act4_pane_t1

0x9fc1,	// (0x000220b6) sat_plugin_idle_act4_pane_t2_ParamLimits

0x9fc1,	// (0x000220b6) sat_plugin_idle_act4_pane_t2

0x9fd9,	// (0x000220ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0x9fd9,	// (0x000220ce) sat_plugin_idle_act4_pane_t3

0x9ff1,	// (0x000220e6) sat_plugin_idle_act4_pane_t4_ParamLimits

0x9ff1,	// (0x000220e6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4a,	// (0x00027e3f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4a,	// (0x00027e3f) sat_plugin_idle_act4_pane_t

0x4803,	// (0x0001c8f8) popup_battery_window_ParamLimits

0x4803,	// (0x0001c8f8) popup_battery_window

0xb19a,	// (0x0002328f) bg_popup_sub_pane_cp25_ParamLimits

0xb19a,	// (0x0002328f) bg_popup_sub_pane_cp25

0xf487,	// (0x0002757c) popup_battery_window_g1_ParamLimits

0xf487,	// (0x0002757c) popup_battery_window_g1

0xf493,	// (0x00027588) popup_battery_window_t1_ParamLimits

0xf493,	// (0x00027588) popup_battery_window_t1

0xf4a5,	// (0x0002759a) popup_battery_window_t2_ParamLimits

0xf4a5,	// (0x0002759a) popup_battery_window_t2

0x0001,

0xfd53,	// (0x00027e48) popup_battery_window_t_ParamLimits

0xfd53,	// (0x00027e48) popup_battery_window_t

0x8221,	// (0x00020316) midp_canvas_pane_ParamLimits

0x8276,	// (0x0002036b) midp_keypad_pane_ParamLimits

0x8276,	// (0x0002036b) midp_keypad_pane

0xb7ce,	// (0x000238c3) main_midp_pane_ParamLimits

0xde12,	// (0x00025f07) signal_pane_g2_cp_ParamLimits

0xa009,	// (0x000220fe) aid_size_cell_midp_keypad_ParamLimits

0xa009,	// (0x000220fe) aid_size_cell_midp_keypad

0xa027,	// (0x0002211c) midp_keyp_game_grid_pane_ParamLimits

0xa027,	// (0x0002211c) midp_keyp_game_grid_pane

0xa046,	// (0x0002213b) midp_keyp_rocker_pane_ParamLimits

0xa046,	// (0x0002213b) midp_keyp_rocker_pane

0xa087,	// (0x0002217c) midp_keyp_sk_left_pane_ParamLimits

0xa087,	// (0x0002217c) midp_keyp_sk_left_pane

0xa0d9,	// (0x000221ce) midp_keyp_sk_right_pane_ParamLimits

0xa0d9,	// (0x000221ce) midp_keyp_sk_right_pane

0xaf77,	// (0x0002306c) bg_button_pane_cp03

0xa125,	// (0x0002221a) midp_keyp_sk_left_pane_g1

0xaf77,	// (0x0002306c) bg_button_pane_cp04

0xa125,	// (0x0002221a) midp_keyp_sk_right_pane_g1

0xe196,	// (0x0002628b) midp_keyp_rocker_pane_g1

0xa12e,	// (0x00022223) keyp_game_cell_pane_ParamLimits

0xa12e,	// (0x00022223) keyp_game_cell_pane

0xaf77,	// (0x0002306c) bg_button_pane_cp02

0xa150,	// (0x00022245) keyp_game_cell_pane_g1

0x7f43,	// (0x00020038) popup_fep_vkb2_window_ParamLimits

0x7f43,	// (0x00020038) popup_fep_vkb2_window

0xa159,	// (0x0002224e) aid_size_cell_vkb2_ParamLimits

0xa159,	// (0x0002224e) aid_size_cell_vkb2

0xa185,	// (0x0002227a) popup_fep_vkb2_window_g1_ParamLimits

0xa185,	// (0x0002227a) popup_fep_vkb2_window_g1

0xa1d5,	// (0x000222ca) vkb2_area_bottom_pane_ParamLimits

0xa1d5,	// (0x000222ca) vkb2_area_bottom_pane

0xa213,	// (0x00022308) vkb2_area_keypad_pane_ParamLimits

0xa213,	// (0x00022308) vkb2_area_keypad_pane

0xa251,	// (0x00022346) vkb2_area_top_pane_ParamLimits

0xa251,	// (0x00022346) vkb2_area_top_pane

0xa2d3,	// (0x000223c8) vkb2_top_entry_pane_ParamLimits

0xa2d3,	// (0x000223c8) vkb2_top_entry_pane

0xa300,	// (0x000223f5) vkb2_top_grid_left_pane_ParamLimits

0xa300,	// (0x000223f5) vkb2_top_grid_left_pane

0xa321,	// (0x00022416) vkb2_top_grid_right_pane_ParamLimits

0xa321,	// (0x00022416) vkb2_top_grid_right_pane

0x5e9a,	// (0x0001df8f) vkb2_cell_keypad_pane_ParamLimits

0x5e9a,	// (0x0001df8f) vkb2_cell_keypad_pane

0xa369,	// (0x0002245e) vkb2_area_bottom_grid_pane_ParamLimits

0xa369,	// (0x0002245e) vkb2_area_bottom_grid_pane

0xa38f,	// (0x00022484) vkb2_area_bottom_pane_g1_ParamLimits

0xa38f,	// (0x00022484) vkb2_area_bottom_pane_g1

0xa3b5,	// (0x000224aa) vkb2_area_bottom_pane_g2_ParamLimits

0xa3b5,	// (0x000224aa) vkb2_area_bottom_pane_g2

0xa3e6,	// (0x000224db) vkb2_area_bottom_pane_g3_ParamLimits

0xa3e6,	// (0x000224db) vkb2_area_bottom_pane_g3

0x0002,

0xfd58,	// (0x00027e4d) vkb2_area_bottom_pane_g_ParamLimits

0xfd58,	// (0x00027e4d) vkb2_area_bottom_pane_g

0x6012,	// (0x0001e107) vkb2_top_cell_left_pane_ParamLimits

0x6012,	// (0x0001e107) vkb2_top_cell_left_pane

0xa43c,	// (0x00022531) vkb2_top_entry_pane_g1_ParamLimits

0xa43c,	// (0x00022531) vkb2_top_entry_pane_g1

0xa44a,	// (0x0002253f) vkb2_top_entry_pane_t1_ParamLimits

0xa44a,	// (0x0002253f) vkb2_top_entry_pane_t1

0xf4ca,	// (0x000275bf) vkb2_top_entry_pane_t2_ParamLimits

0xf4ca,	// (0x000275bf) vkb2_top_entry_pane_t2

0xf4fc,	// (0x000275f1) vkb2_top_entry_pane_t3_ParamLimits

0xf4fc,	// (0x000275f1) vkb2_top_entry_pane_t3

0x0002,

0xfd5f,	// (0x00027e54) vkb2_top_entry_pane_t_ParamLimits

0xfd5f,	// (0x00027e54) vkb2_top_entry_pane_t

0xa483,	// (0x00022578) vkb2_top_grid_right_pane_g1_ParamLimits

0xa483,	// (0x00022578) vkb2_top_grid_right_pane_g1

0x6075,	// (0x0001e16a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6075,	// (0x0001e16a) vkb2_top_grid_right_pane_g2

0x608d,	// (0x0001e182) vkb2_top_grid_right_pane_g3_ParamLimits

0x608d,	// (0x0001e182) vkb2_top_grid_right_pane_g3

0xa499,	// (0x0002258e) vkb2_top_grid_right_pane_g4_ParamLimits

0xa499,	// (0x0002258e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd66,	// (0x00027e5b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd66,	// (0x00027e5b) vkb2_top_grid_right_pane_g

0x60bb,	// (0x0001e1b0) vkb2_top_cell_left_pane_g1

0x60d2,	// (0x0001e1c7) vkb2_cell_keypad_pane_g1_ParamLimits

0x60d2,	// (0x0001e1c7) vkb2_cell_keypad_pane_g1

0xf512,	// (0x00027607) vkb2_cell_keypad_pane_t1_ParamLimits

0xf512,	// (0x00027607) vkb2_cell_keypad_pane_t1

0x60e0,	// (0x0001e1d5) vkb2_cell_bottom_grid_pane_ParamLimits

0x60e0,	// (0x0001e1d5) vkb2_cell_bottom_grid_pane

0x6119,	// (0x0001e20e) vkb2_cell_bottom_grid_pane_g1

0x9e3c,	// (0x00021f31) aid_call2_pane_cp02

0x9e44,	// (0x00021f39) aid_call_pane_cp02

0x9e4c,	// (0x00021f41) clock_digital_number_pane_cp10

0x9e54,	// (0x00021f49) clock_digital_number_pane_cp11

0x9e5c,	// (0x00021f51) clock_digital_number_pane_cp12

0x9e64,	// (0x00021f59) clock_digital_number_pane_cp13

0x9e6c,	// (0x00021f61) clock_digital_separator_pane_cp10

0xbb5a,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g1

0xbb5a,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g2

0x9e74,	// (0x00021f69) popup_clock_digital_analogue_window_cp2_g3

0xbb5a,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g4

0x9e74,	// (0x00021f69) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1b,	// (0x00027e10) popup_clock_digital_analogue_window_cp2_g

0x9e7c,	// (0x00021f71) popup_clock_digital_analogue_window_cp2_t1

0x9e8a,	// (0x00021f7f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd26,	// (0x00027e1b) popup_clock_digital_analogue_window_cp2_t

0xe196,	// (0x0002628b) clock_digital_number_pane_cp10_g1

0xe196,	// (0x0002628b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x00027c0a) clock_digital_number_pane_cp10_g

0xe196,	// (0x0002628b) clock_digital_separator_pane_cp10_g1

0xe196,	// (0x0002628b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x00027c0a) clock_digital_separator_pane_cp10_g

0xf2fd,	// (0x000273f2) uniindi_top_pane_g3

0xf30e,	// (0x00027403) uniindi_top_pane_g4

0x5f05,	// (0x0001dffa) vkb2_row_keypad_pane_ParamLimits

0x5f05,	// (0x0001dffa) vkb2_row_keypad_pane

0x6135,	// (0x0001e22a) vkb2_cell_t_keypad_pane_ParamLimits

0x6135,	// (0x0001e22a) vkb2_cell_t_keypad_pane

0x6142,	// (0x0001e237) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6142,	// (0x0001e237) vkb2_cell_t_keypad_pane_cp08

0x6152,	// (0x0001e247) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6152,	// (0x0001e247) vkb2_cell_t_keypad_pane_cp09

0x6163,	// (0x0001e258) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6163,	// (0x0001e258) vkb2_cell_t_keypad_pane_cp01

0x6173,	// (0x0001e268) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6173,	// (0x0001e268) vkb2_cell_t_keypad_pane_cp02

0x6183,	// (0x0001e278) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6183,	// (0x0001e278) vkb2_cell_t_keypad_pane_cp03

0x6193,	// (0x0001e288) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6193,	// (0x0001e288) vkb2_cell_t_keypad_pane_cp04

0x61a3,	// (0x0001e298) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x61a3,	// (0x0001e298) vkb2_cell_t_keypad_pane_cp05

0x61b3,	// (0x0001e2a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x61b3,	// (0x0001e2a8) vkb2_cell_t_keypad_pane_cp06

0x61c3,	// (0x0001e2b8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x61c3,	// (0x0001e2b8) vkb2_cell_t_keypad_pane_cp07

0x61d3,	// (0x0001e2c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x61d3,	// (0x0001e2c8) vkb2_cell_t_keypad_pane_cp10

0xe3c2,	// (0x000264b7) vkb2_cell_t_keypad_pane_g1

0x1771,	// (0x00019866) vkb2_cell_t_keypad_pane_t1

0xaf77,	// (0x0002306c) popup_grid_graphic2_window

0xa4af,	// (0x000225a4) aid_size_cell_graphic2_ParamLimits

0xa4af,	// (0x000225a4) aid_size_cell_graphic2

0xa4ed,	// (0x000225e2) bg_popup_window_pane_cp21_ParamLimits

0xa4ed,	// (0x000225e2) bg_popup_window_pane_cp21

0xa4fb,	// (0x000225f0) graphic2_pages_pane_ParamLimits

0xa4fb,	// (0x000225f0) graphic2_pages_pane

0xa544,	// (0x00022639) grid_graphic2_control_pane_ParamLimits

0xa544,	// (0x00022639) grid_graphic2_control_pane

0xa582,	// (0x00022677) grid_graphic2_pane_ParamLimits

0xa582,	// (0x00022677) grid_graphic2_pane

0xa5f1,	// (0x000226e6) cell_graphic2_pane

0xaf77,	// (0x0002306c) main_comp_mode_pane

0xef76,	// (0x0002706b) list_ai3_gene_pane_ParamLimits

0x9b28,	// (0x00021c1d) bg_popup_window_pane_cp19_ParamLimits

0xf0e9,	// (0x000271de) bg_touch_area_indi_pane_ParamLimits

0xf0e9,	// (0x000271de) bg_touch_area_indi_pane

0xf0ff,	// (0x000271f4) bg_touch_area_indi_pane_cp01_ParamLimits

0xf0ff,	// (0x000271f4) bg_touch_area_indi_pane_cp01

0xf115,	// (0x0002720a) bg_touch_area_indi_pane_cp02_ParamLimits

0xf115,	// (0x0002720a) bg_touch_area_indi_pane_cp02

0xf12b,	// (0x00027220) bg_touch_area_indi_pane_cp03_ParamLimits

0xf12b,	// (0x00027220) bg_touch_area_indi_pane_cp03

0xf141,	// (0x00027236) popup_slider_window_g1_ParamLimits

0xf15d,	// (0x00027252) popup_slider_window_g2_ParamLimits

0xf179,	// (0x0002726e) popup_slider_window_g3_ParamLimits

0xfcb0,	// (0x00027da5) popup_slider_window_g_ParamLimits

0xf195,	// (0x0002728a) popup_slider_window_t1_ParamLimits

0xf1d9,	// (0x000272ce) small_volume_slider_vertical_pane_ParamLimits

0xa5f1,	// (0x000226e6) cell_graphic2_pane_ParamLimits

0xa63c,	// (0x00022731) bg_button_pane_cp10_ParamLimits

0xa63c,	// (0x00022731) bg_button_pane_cp10

0xa64d,	// (0x00022742) bg_button_pane_cp11_ParamLimits

0xa64d,	// (0x00022742) bg_button_pane_cp11

0xa65e,	// (0x00022753) graphic2_pages_pane_g1_ParamLimits

0xa65e,	// (0x00022753) graphic2_pages_pane_g1

0xa679,	// (0x0002276e) graphic2_pages_pane_g2_ParamLimits

0xa679,	// (0x0002276e) graphic2_pages_pane_g2

0x0001,

0xfd74,	// (0x00027e69) graphic2_pages_pane_g_ParamLimits

0xfd74,	// (0x00027e69) graphic2_pages_pane_g

0xa691,	// (0x00022786) graphic2_pages_pane_t1_ParamLimits

0xa691,	// (0x00022786) graphic2_pages_pane_t1

0xa6a9,	// (0x0002279e) cell_graphic2_control_pane_ParamLimits

0xa6a9,	// (0x0002279e) cell_graphic2_control_pane

0xa6d3,	// (0x000227c8) cell_graphic2_pane_g1_ParamLimits

0xa6d3,	// (0x000227c8) cell_graphic2_pane_g1

0x1783,	// (0x00019878) cell_graphic2_pane_g2_ParamLimits

0x1783,	// (0x00019878) cell_graphic2_pane_g2

0xa6e0,	// (0x000227d5) cell_graphic2_pane_g3_ParamLimits

0xa6e0,	// (0x000227d5) cell_graphic2_pane_g3

0x1790,	// (0x00019885) cell_graphic2_pane_g4_ParamLimits

0x1790,	// (0x00019885) cell_graphic2_pane_g4

0xa6ed,	// (0x000227e2) cell_graphic2_pane_g5_ParamLimits

0xa6ed,	// (0x000227e2) cell_graphic2_pane_g5

0x0004,

0xfd79,	// (0x00027e6e) cell_graphic2_pane_g_ParamLimits

0xfd79,	// (0x00027e6e) cell_graphic2_pane_g

0xa70a,	// (0x000227ff) cell_graphic2_pane_t1_ParamLimits

0xa70a,	// (0x000227ff) cell_graphic2_pane_t1

0xcfd2,	// (0x000250c7) grid_highlight_pane_cp11_ParamLimits

0xcfd2,	// (0x000250c7) grid_highlight_pane_cp11

0xb19a,	// (0x0002328f) bg_button_pane_cp05

0xa73f,	// (0x00022834) cell_graphic2_control_pane_g1

0xe196,	// (0x0002628b) bg_touch_area_indi_pane_g1

0x179d,	// (0x00019892) aid_cmod_rocker_key_size

0x17a7,	// (0x0001989c) aid_cmode_itu_key_size

0x17b1,	// (0x000198a6) main_cmode_video_pane

0x17b9,	// (0x000198ae) main_comp_mode_itu_pane

0x17c3,	// (0x000198b8) main_comp_mode_rocker_pane

0x17cb,	// (0x000198c0) cell_cmode_rocker_pane_ParamLimits

0x17cb,	// (0x000198c0) cell_cmode_rocker_pane

0x17dd,	// (0x000198d2) cell_cmode_itu_pane_ParamLimits

0x17dd,	// (0x000198d2) cell_cmode_itu_pane

0xb635,	// (0x0002372a) bg_button_pane_cp06_ParamLimits

0xb635,	// (0x0002372a) bg_button_pane_cp06

0xe3c2,	// (0x000264b7) cell_cmode_rocker_pane_g1_ParamLimits

0xe3c2,	// (0x000264b7) cell_cmode_rocker_pane_g1

0xf1fe,	// (0x000272f3) cell_cmode_rocker_pane_g2_ParamLimits

0xf1fe,	// (0x000272f3) cell_cmode_rocker_pane_g2

0x0001,

0xfd89,	// (0x00027e7e) cell_cmode_rocker_pane_g_ParamLimits

0xfd89,	// (0x00027e7e) cell_cmode_rocker_pane_g

0xaf77,	// (0x0002306c) bg_button_pane_cp07

0x17f2,	// (0x000198e7) cell_cmode_itu_pane_g1

0x17fb,	// (0x000198f0) cell_cmode_itu_pane_t1

0x1809,	// (0x000198fe) cell_cmode_itu_pane_t2

0x0001,

0xfd8e,	// (0x00027e83) cell_cmode_itu_pane_t

0xf37f,	// (0x00027474) aid_touch_ctrl_left

0xf387,	// (0x0002747c) aid_touch_ctrl_right

0xaf77,	// (0x0002306c) compa_mode_pane

0xa767,	// (0x0002285c) aid_cmod_rocker_key_size_cp

0xa771,	// (0x00022866) aid_cmode_itu_key_size_cp

0x1817,	// (0x0001990c) compa_mode_pane_g1

0x181f,	// (0x00019914) compa_mode_pane_g2

0x1827,	// (0x0001991c) compa_mode_pane_g3

0x0002,

0xfd93,	// (0x00027e88) compa_mode_pane_g

0xa77b,	// (0x00022870) main_comp_mode_itu_pane_cp

0xa785,	// (0x0002287a) main_comp_mode_rocker_pane_cp

0xa78f,	// (0x00022884) cell_cmode_itu_pane_cp_ParamLimits

0xa78f,	// (0x00022884) cell_cmode_itu_pane_cp

0xa7a4,	// (0x00022899) cell_cmode_rocker_pane_cp_ParamLimits

0xa7a4,	// (0x00022899) cell_cmode_rocker_pane_cp

0xb635,	// (0x0002372a) bg_button_pane_cp06_cp_ParamLimits

0xb635,	// (0x0002372a) bg_button_pane_cp06_cp

0xe3c2,	// (0x000264b7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe3c2,	// (0x000264b7) cell_cmode_rocker_pane_g1_cp

0xe196,	// (0x0002628b) cell_cmode_rocker_pane_g2_cp

0xaf77,	// (0x0002306c) bg_button_pane_cp07_cp

0xa7b6,	// (0x000228ab) cell_cmode_itu_pane_g1_cp

0xa7bf,	// (0x000228b4) cell_cmode_itu_pane_t1_cp

0xa7cd,	// (0x000228c2) cell_cmode_itu_pane_t2_cp

0x9295,	// (0x0002138a) settings_code_pane_cp2

0xb067,	// (0x0002315c) bg_popup_window_pane_cp3_ParamLimits

0xb398,	// (0x0002348d) heading_pane_cp3_ParamLimits

0xb3a7,	// (0x0002349c) listscroll_popup_graphic_pane_ParamLimits

0x5879,	// (0x0001d96e) fep_hwr_aid_pane_ParamLimits

0x5c2b,	// (0x0001dd20) aid_touch_sctrl_top_ParamLimits

0x5c38,	// (0x0001dd2d) sctrl_sk_top_pane_g1_ParamLimits

0xe3c2,	// (0x000264b7) sctrl_sk_top_pane_g2_ParamLimits

0xfcc9,	// (0x00027dbe) sctrl_sk_top_pane_g_ParamLimits

0x5c45,	// (0x0001dd3a) sctrl_sk_top_pane_t1_ParamLimits

0x5c2b,	// (0x0001dd20) aid_touch_sctrl_bottom_ParamLimits

0x5c45,	// (0x0001dd3a) sctrl_sk_bottom_pane_t1_ParamLimits

0xf2c9,	// (0x000273be) aid_area_touch_clock

0xa293,	// (0x00022388) aid_vkb2_area_top_pane_cell_ParamLimits

0xa293,	// (0x00022388) aid_vkb2_area_top_pane_cell

0xa342,	// (0x00022437) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa342,	// (0x00022437) aid_vkb2_area_bottom_pane_cell

0xf4c2,	// (0x000275b7) popup_char_count_window

0x182f,	// (0x00019924) popup_char_count_window_g1

0x1838,	// (0x0001992d) popup_char_count_window_g2

0x1841,	// (0x00019936) popup_char_count_window_g3

0x0002,

0xfd9a,	// (0x00027e8f) popup_char_count_window_g

0x184a,	// (0x0001993f) popup_char_count_window_t1

0x5ce3,	// (0x0001ddd8) popup_fep_char_preview_window_ParamLimits

0x5ce3,	// (0x0001ddd8) popup_fep_char_preview_window

0xa2b3,	// (0x000223a8) vkb2_top_candi_pane_ParamLimits

0xa2b3,	// (0x000223a8) vkb2_top_candi_pane

0xa7db,	// (0x000228d0) cell_vkb2_top_candi_pane_ParamLimits

0xa7db,	// (0x000228d0) cell_vkb2_top_candi_pane

0xc9ea,	// (0x00024adf) bg_popup_fep_char_preview_window_ParamLimits

0xc9ea,	// (0x00024adf) bg_popup_fep_char_preview_window

0x64fd,	// (0x0001e5f2) popup_fep_char_preview_window_t1_ParamLimits

0x64fd,	// (0x0001e5f2) popup_fep_char_preview_window_t1

0x1868,	// (0x0001995d) bg_popup_fep_char_preview_window_g1

0x1860,	// (0x00019955) bg_popup_fep_char_preview_window_g2

0x1858,	// (0x0001994d) bg_popup_fep_char_preview_window_g3

0x1890,	// (0x00019985) bg_popup_fep_char_preview_window_g4

0x1888,	// (0x0001997d) bg_popup_fep_char_preview_window_g5

0x1880,	// (0x00019975) bg_popup_fep_char_preview_window_g6

0x1878,	// (0x0001996d) bg_popup_fep_char_preview_window_g7

0x1870,	// (0x00019965) bg_popup_fep_char_preview_window_g8

0x1898,	// (0x0001998d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda1,	// (0x00027e96) bg_popup_fep_char_preview_window_g

0xe3c2,	// (0x000264b7) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe3c2,	// (0x000264b7) cell_vkb2_top_candi_pane_g1

0xe5f1,	// (0x000266e6) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe5f1,	// (0x000266e6) cell_vkb2_top_candi_pane_g2

0xe612,	// (0x00026707) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe612,	// (0x00026707) cell_vkb2_top_candi_pane_g3

0x653f,	// (0x0001e634) cell_vkb2_top_candi_pane_g4_ParamLimits

0x653f,	// (0x0001e634) cell_vkb2_top_candi_pane_g4

0x1742,	// (0x00019837) cell_vkb2_top_candi_pane_g5_ParamLimits

0x1742,	// (0x00019837) cell_vkb2_top_candi_pane_g5

0xf1fe,	// (0x000272f3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf1fe,	// (0x000272f3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb6,	// (0x00027eab) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb6,	// (0x00027eab) cell_vkb2_top_candi_pane_g

0x6560,	// (0x0001e655) cell_vkb2_top_candi_pane_t1

0x5691,	// (0x0001d786) aid_size_touch_slider_mark_ParamLimits

0x5691,	// (0x0001d786) aid_size_touch_slider_mark

0xa52f,	// (0x00022624) grid_graphic2_catg_pane_ParamLimits

0xa52f,	// (0x00022624) grid_graphic2_catg_pane

0xa5c6,	// (0x000226bb) popup_grid_graphic2_window_t1_ParamLimits

0xa5c6,	// (0x000226bb) popup_grid_graphic2_window_t1

0xa5db,	// (0x000226d0) popup_grid_graphic2_window_t2_ParamLimits

0xa5db,	// (0x000226d0) popup_grid_graphic2_window_t2

0x0001,

0xfd6f,	// (0x00027e64) popup_grid_graphic2_window_t_ParamLimits

0xfd6f,	// (0x00027e64) popup_grid_graphic2_window_t

0xb19a,	// (0x0002328f) bg_button_pane_cp05_ParamLimits

0xa73f,	// (0x00022834) cell_graphic2_control_pane_g1_ParamLimits

0xf345,	// (0x0002743a) cell_graphic2_catg_pane_ParamLimits

0xf345,	// (0x0002743a) cell_graphic2_catg_pane

0xaf77,	// (0x0002306c) bg_button_pane_cp12

0xa827,	// (0x0002291c) cell_graphic2_catg_pane_g1

0xf295,	// (0x0002738a) cell_tb_ext_pane_t1_ParamLimits

0x6032,	// (0x0001e127) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6032,	// (0x0001e127) vkb2_top_cell_right_narrow_pane

0x604a,	// (0x0001e13f) vkb2_top_cell_right_wide_pane_ParamLimits

0x604a,	// (0x0001e13f) vkb2_top_cell_right_wide_pane

0x586b,	// (0x0001d960) bg_vkb2_func_pane_ParamLimits

0x586b,	// (0x0001d960) bg_vkb2_func_pane

0x60bb,	// (0x0001e1b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x586b,	// (0x0001d960) bg_vkb2_fuc_pane_cp03_ParamLimits

0x586b,	// (0x0001d960) bg_vkb2_fuc_pane_cp03

0x6119,	// (0x0001e20e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc3d4,	// (0x000244c9) bg_vkb2_func_pane_g1

0xc3dc,	// (0x000244d1) bg_vkb2_func_pane_g2

0xc3ec,	// (0x000244e1) bg_vkb2_func_pane_g3

0xc3e4,	// (0x000244d9) bg_vkb2_func_pane_g4

0xc3f4,	// (0x000244e9) bg_vkb2_func_pane_g5

0xc3fc,	// (0x000244f1) bg_vkb2_func_pane_g6

0xc404,	// (0x000244f9) bg_vkb2_func_pane_g7

0xc40c,	// (0x00024501) bg_vkb2_func_pane_g8

0xc3cc,	// (0x000244c1) bg_vkb2_func_pane_g9

0x0008,

0xfdc3,	// (0x00027eb8) bg_vkb2_func_pane_g

0x586b,	// (0x0001d960) bg_vkb2_fuc_pane_cp01_ParamLimits

0x586b,	// (0x0001d960) bg_vkb2_fuc_pane_cp01

0x60bb,	// (0x0001e1b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x60bb,	// (0x0001e1b0) vkb2_top_cell_right_wide_pane_g1

0x586b,	// (0x0001d960) bg_vkb2_fuc_pane_cp02_ParamLimits

0x586b,	// (0x0001d960) bg_vkb2_fuc_pane_cp02

0x6119,	// (0x0001e20e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6119,	// (0x0001e20e) vkb2_top_cell_right_narrow_pane_g1

0x9a76,	// (0x00021b6b) aid_touch_area_decrease_ParamLimits

0x9a76,	// (0x00021b6b) aid_touch_area_decrease

0x9aa4,	// (0x00021b99) aid_touch_area_increase_ParamLimits

0x9aa4,	// (0x00021b99) aid_touch_area_increase

0x9acc,	// (0x00021bc1) aid_touch_area_mute_ParamLimits

0x9acc,	// (0x00021bc1) aid_touch_area_mute

0x9af4,	// (0x00021be9) aid_touch_area_slider_ParamLimits

0x9af4,	// (0x00021be9) aid_touch_area_slider

0x9b34,	// (0x00021c29) popup_slider_window_g4_ParamLimits

0x9b34,	// (0x00021c29) popup_slider_window_g4

0x9b5c,	// (0x00021c51) popup_slider_window_g5_ParamLimits

0x9b5c,	// (0x00021c51) popup_slider_window_g5

0x9b90,	// (0x00021c85) popup_slider_window_g6_ParamLimits

0x9b90,	// (0x00021c85) popup_slider_window_g6

0xf1c1,	// (0x000272b6) popup_slider_window_t2_ParamLimits

0xf1c1,	// (0x000272b6) popup_slider_window_t2

0x0001,

0xfcbd,	// (0x00027db2) popup_slider_window_t_ParamLimits

0xfcbd,	// (0x00027db2) popup_slider_window_t

0x9bac,	// (0x00021ca1) slider_pane_ParamLimits

0x9bac,	// (0x00021ca1) slider_pane

0x18a0,	// (0x00019995) slider_pane_g1_ParamLimits

0x18a0,	// (0x00019995) slider_pane_g1

0x18b4,	// (0x000199a9) slider_pane_g2_ParamLimits

0x18b4,	// (0x000199a9) slider_pane_g2

0x18ca,	// (0x000199bf) slider_pane_g3_ParamLimits

0x18ca,	// (0x000199bf) slider_pane_g3

0x0003,

0xfdd6,	// (0x00027ecb) slider_pane_g_ParamLimits

0xfdd6,	// (0x00027ecb) slider_pane_g

0x89a3,	// (0x00020a98) popup_tb_float_extension_window_ParamLimits

0x89a3,	// (0x00020a98) popup_tb_float_extension_window

0x18f6,	// (0x000199eb) aid_size_cell_tb_float_ext

0xaf77,	// (0x0002306c) bg_popup_sub_window_cp28

0x1901,	// (0x000199f6) grid_tb_float_ext_pane

0x1909,	// (0x000199fe) cell_tb_float_ext_pane_ParamLimits

0x1909,	// (0x000199fe) cell_tb_float_ext_pane

0x1921,	// (0x00019a16) cell_tb_float_ext_pane_g1

0x192a,	// (0x00019a1f) grid_highlight_pane_cp12

0x957e,	// (0x00021673) cell_last_hwr_side_pane_ParamLimits

0x957e,	// (0x00021673) cell_last_hwr_side_pane

0xe196,	// (0x0002628b) cell_last_hwr_side_pane_g1

0x1933,	// (0x00019a28) cell_last_hwr_side_pane_g2

0x0001,

0xfddf,	// (0x00027ed4) cell_last_hwr_side_pane_g

0xa417,	// (0x0002250c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa417,	// (0x0002250c) vkb2_area_bottom_space_btn_pane

0xe3c2,	// (0x000264b7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1771,	// (0x00019866) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6560,	// (0x0001e655) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6592,	// (0x0001e687) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6592,	// (0x0001e687) vkb2_area_bottom_space_btn_pane_g1

0x65c8,	// (0x0001e6bd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x65c8,	// (0x0001e6bd) vkb2_area_bottom_space_btn_pane_g2

0x65fe,	// (0x0001e6f3) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x65fe,	// (0x0001e6f3) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde4,	// (0x00027ed9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde4,	// (0x00027ed9) vkb2_area_bottom_space_btn_pane_g

0x591a,	// (0x0001da0f) cel_fep_hwr_func_pane_ParamLimits

0x591a,	// (0x0001da0f) cel_fep_hwr_func_pane

0x9553,	// (0x00021648) cell_hwr_side_button_pane_ParamLimits

0x9553,	// (0x00021648) cell_hwr_side_button_pane

0xf2c9,	// (0x000273be) aid_area_touch_clock_ParamLimits

0xb19a,	// (0x0002328f) bg_uniindi_top_pane_ParamLimits

0xf2db,	// (0x000273d0) uniindi_top_pane_g1_ParamLimits

0xf2f1,	// (0x000273e6) uniindi_top_pane_g2_ParamLimits

0xf2fd,	// (0x000273f2) uniindi_top_pane_g3_ParamLimits

0xf30e,	// (0x00027403) uniindi_top_pane_g4_ParamLimits

0xfcf5,	// (0x00027dea) uniindi_top_pane_g_ParamLimits

0xf31b,	// (0x00027410) uniindi_top_pane_t1_ParamLimits

0xb19a,	// (0x0002328f) bg_vkb2_func_pane_cp01_ParamLimits

0xb19a,	// (0x0002328f) bg_vkb2_func_pane_cp01

0x193c,	// (0x00019a31) cel_fep_hwr_func_pane_g1_ParamLimits

0x193c,	// (0x00019a31) cel_fep_hwr_func_pane_g1

0xb19a,	// (0x0002328f) bg_vkb2_func_pane_cp02_ParamLimits

0xb19a,	// (0x0002328f) bg_vkb2_func_pane_cp02

0x193c,	// (0x00019a31) cell_hwr_side_button_pane_g1_ParamLimits

0x193c,	// (0x00019a31) cell_hwr_side_button_pane_g1

0xc2f0,	// (0x000243e5) status_pane_g4_ParamLimits

0xc2f0,	// (0x000243e5) status_pane_g4

0xc308,	// (0x000243fd) status_pane_t1

0xdf9c,	// (0x00026091) form2_midp_gauge_slider_cont_pane

0xdfa4,	// (0x00026099) form2_midp_gauge_slider_pane_t1_ParamLimits

0x952f,	// (0x00021624) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9541,	// (0x00021636) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x00027bbd) form2_midp_gauge_slider_pane_t_ParamLimits

0xdfb6,	// (0x000260ab) form2_midp_slider_pane_ParamLimits

0x5cab,	// (0x0001dda0) aid_size_cell_func_vkb2_ParamLimits

0x5cab,	// (0x0001dda0) aid_size_cell_func_vkb2

0x18e2,	// (0x000199d7) slider_pane_g4_ParamLimits

0x18e2,	// (0x000199d7) slider_pane_g4

0xa830,	// (0x00022925) form2_midp_gauge_slider_pane_t2_cp01

0xa83e,	// (0x00022933) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa83e,	// (0x00022933) form2_midp_gauge_slider_pane_t3_cp01

0x666f,	// (0x0001e764) form2_midp_slider_pane_cp01

0xaf77,	// (0x0002306c) navi_smil_pane

0x196c,	// (0x00019a61) navi_smil_pane_g1

0x1974,	// (0x00019a69) navi_smil_pane_t1

0x194a,	// (0x00019a3f) form2_midp_slider_pane_g1

0x1953,	// (0x00019a48) form2_midp_slider_pane_g2

0x195b,	// (0x00019a50) form2_midp_slider_pane_g3

0x194a,	// (0x00019a3f) form2_midp_slider_pane_g4

0xa85b,	// (0x00022950) form2_midp_slider_pane_g5

0x0004,

0xfded,	// (0x00027ee2) form2_midp_slider_pane_g

0x6634,	// (0x0001e729) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6634,	// (0x0001e729) vkb2_area_bottom_space_btn_pane_g4

0x8b45,	// (0x00020c3a) lc0_navi_pane_ParamLimits

0x8b45,	// (0x00020c3a) lc0_navi_pane

0x8baf,	// (0x00020ca4) lc0_stat_indi_pane_ParamLimits

0x8baf,	// (0x00020ca4) lc0_stat_indi_pane

0x8bc4,	// (0x00020cb9) ls0_title_pane_ParamLimits

0x8bc4,	// (0x00020cb9) ls0_title_pane

0xb635,	// (0x0002372a) bg_popup_sub_pane_cp14_ParamLimits

0xf2b0,	// (0x000273a5) list_uniindi_pane_ParamLimits

0xf2bc,	// (0x000273b1) uniindi_top_pane_ParamLimits

0xf357,	// (0x0002744c) list_single_uniindi_pane_g1_ParamLimits

0xf36a,	// (0x0002745f) list_single_uniindi_pane_t1_ParamLimits

0xa864,	// (0x00022959) lc0_stat_clock_pane_ParamLimits

0xa864,	// (0x00022959) lc0_stat_clock_pane

0xa871,	// (0x00022966) lc0_stat_indi_pane_g1_ParamLimits

0xa871,	// (0x00022966) lc0_stat_indi_pane_g1

0xa87e,	// (0x00022973) lc0_stat_indi_pane_g2_ParamLimits

0xa87e,	// (0x00022973) lc0_stat_indi_pane_g2

0x0001,

0xfdf8,	// (0x00027eed) lc0_stat_indi_pane_g_ParamLimits

0xfdf8,	// (0x00027eed) lc0_stat_indi_pane_g

0xa88b,	// (0x00022980) lc0_uni_indicator_pane_ParamLimits

0xa88b,	// (0x00022980) lc0_uni_indicator_pane

0x1982,	// (0x00019a77) ls0_title_pane_g1_ParamLimits

0x1982,	// (0x00019a77) ls0_title_pane_g1

0xa898,	// (0x0002298d) ls0_title_pane_t1_ParamLimits

0xa898,	// (0x0002298d) ls0_title_pane_t1

0xa8c6,	// (0x000229bb) lc0_uni_indicator_pane_g1_ParamLimits

0xa8c6,	// (0x000229bb) lc0_uni_indicator_pane_g1

0x1996,	// (0x00019a8b) lc0_stat_clock_pane_t1

0xaf77,	// (0x0002306c) main_ai5_pane

0x19a4,	// (0x00019a99) ai5_sk_pane_ParamLimits

0x19a4,	// (0x00019a99) ai5_sk_pane

0xa8db,	// (0x000229d0) cell_ai5_widget_pane_ParamLimits

0xa8db,	// (0x000229d0) cell_ai5_widget_pane

0x19b1,	// (0x00019aa6) aid_size_cell_widget_grid

0x19be,	// (0x00019ab3) bg_ai5_widget_pane_ParamLimits

0x19be,	// (0x00019ab3) bg_ai5_widget_pane

0xa968,	// (0x00022a5d) cell_ai5_widget_pane_g2

0xa97c,	// (0x00022a71) cell_ai5_widget_pane_g3

0xa996,	// (0x00022a8b) cell_ai5_widget_pane_g4

0xa9a6,	// (0x00022a9b) cell_ai5_widget_pane_g5

0xa9b6,	// (0x00022aab) cell_ai5_widget_pane_g6

0xa9c2,	// (0x00022ab7) cell_ai5_widget_pane_g7

0xaa2e,	// (0x00022b23) cell_ai5_widget_pane_t1_ParamLimits

0xaa2e,	// (0x00022b23) cell_ai5_widget_pane_t1

0xaa4b,	// (0x00022b40) cell_ai5_widget_pane_t2_ParamLimits

0xaa4b,	// (0x00022b40) cell_ai5_widget_pane_t2

0xaa63,	// (0x00022b58) cell_ai5_widget_pane_t3_ParamLimits

0xaa63,	// (0x00022b58) cell_ai5_widget_pane_t3

0xaa7b,	// (0x00022b70) cell_ai5_widget_pane_t4_ParamLimits

0xaa7b,	// (0x00022b70) cell_ai5_widget_pane_t4

0xaaa1,	// (0x00022b96) cell_ai5_widget_pane_t5_ParamLimits

0xaaa1,	// (0x00022b96) cell_ai5_widget_pane_t5

0x19f8,	// (0x00019aed) cell_ai5_widget_pane_t6_ParamLimits

0x19f8,	// (0x00019aed) cell_ai5_widget_pane_t6

0x1a0a,	// (0x00019aff) cell_ai5_widget_pane_t7_ParamLimits

0x1a0a,	// (0x00019aff) cell_ai5_widget_pane_t7

0xaac0,	// (0x00022bb5) cell_ai5_widget_pane_t8_ParamLimits

0xaac0,	// (0x00022bb5) cell_ai5_widget_pane_t8

0x000b,

0xfe18,	// (0x00027f0d) cell_ai5_widget_pane_t_ParamLimits

0xfe18,	// (0x00027f0d) cell_ai5_widget_pane_t

0xab44,	// (0x00022c39) grid_ai5_widget_pane

0xb635,	// (0x0002372a) highlight_cell_ai5_widget_pane_ParamLimits

0xb635,	// (0x0002372a) highlight_cell_ai5_widget_pane

0xab50,	// (0x00022c45) ai5_sk_left_pane

0xab5a,	// (0x00022c4f) ai5_sk_middle_pane

0xab64,	// (0x00022c59) ai5_sk_right_pane

0x1a29,	// (0x00019b1e) bg_ai5_widget_pane_g1_ParamLimits

0x1a29,	// (0x00019b1e) bg_ai5_widget_pane_g1

0x1a35,	// (0x00019b2a) bg_ai5_widget_pane_g2_ParamLimits

0x1a35,	// (0x00019b2a) bg_ai5_widget_pane_g2

0x1a41,	// (0x00019b36) bg_ai5_widget_pane_g3_ParamLimits

0x1a41,	// (0x00019b36) bg_ai5_widget_pane_g3

0x1a4d,	// (0x00019b42) bg_ai5_widget_pane_g4_ParamLimits

0x1a4d,	// (0x00019b42) bg_ai5_widget_pane_g4

0x1a59,	// (0x00019b4e) bg_ai5_widget_pane_g5_ParamLimits

0x1a59,	// (0x00019b4e) bg_ai5_widget_pane_g5

0x1a65,	// (0x00019b5a) bg_ai5_widget_pane_g6_ParamLimits

0x1a65,	// (0x00019b5a) bg_ai5_widget_pane_g6

0x1a71,	// (0x00019b66) bg_ai5_widget_pane_g7_ParamLimits

0x1a71,	// (0x00019b66) bg_ai5_widget_pane_g7

0x1a7d,	// (0x00019b72) bg_ai5_widget_pane_g8_ParamLimits

0x1a7d,	// (0x00019b72) bg_ai5_widget_pane_g8

0x1a89,	// (0x00019b7e) bg_ai5_widget_pane_g9_ParamLimits

0x1a89,	// (0x00019b7e) bg_ai5_widget_pane_g9

0x0008,

0xfe31,	// (0x00027f26) bg_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x00027f26) bg_ai5_widget_pane_g

0x1ab9,	// (0x00019bae) cell_shortcut_ai5_widget_pane_ParamLimits

0x1ab9,	// (0x00019bae) cell_shortcut_ai5_widget_pane

0x1aca,	// (0x00019bbf) bg_cell_shortcut_ai5_widget_pane

0xb354,	// (0x00023449) cell_grid_ai5_widget_pane_g1

0xbff3,	// (0x000240e8) highlight_cell_shortcut_ai5_widget_pane

0xc3dc,	// (0x000244d1) ai5_sk_left_pane_g1

0x1ad2,	// (0x00019bc7) ai5_sk_left_pane_g2

0x1ada,	// (0x00019bcf) ai5_sk_left_pane_g3

0x1ae2,	// (0x00019bd7) ai5_sk_left_pane_g4

0x0003,

0xfe44,	// (0x00027f39) ai5_sk_left_pane_g

0x1aea,	// (0x00019bdf) ai5_sk_left_pane_t1

0xc3d4,	// (0x000244c9) ai5_sk_right_pane_g1

0x1af8,	// (0x00019bed) ai5_sk_right_pane_g2

0x1b00,	// (0x00019bf5) ai5_sk_right_pane_g3

0x1b08,	// (0x00019bfd) ai5_sk_right_pane_g4

0x0003,

0xfe4d,	// (0x00027f42) ai5_sk_right_pane_g

0x1b10,	// (0x00019c05) ai5_sk_right_pane_t1

0xc3d4,	// (0x000244c9) ai5_sk_middle_pane_g1

0xc3dc,	// (0x000244d1) ai5_sk_middle_pane_g2

0xc3f4,	// (0x000244e9) ai5_sk_middle_pane_g3

0x1b00,	// (0x00019bf5) ai5_sk_middle_pane_g4

0x1ada,	// (0x00019bcf) ai5_sk_middle_pane_g5

0x1b1e,	// (0x00019c13) ai5_sk_middle_pane_g6

0xab6e,	// (0x00022c63) ai5_sk_middle_pane_g7

0x0006,

0xfe56,	// (0x00027f4b) ai5_sk_middle_pane_g

0x8a43,	// (0x00020b38) aid_touch_area_size_lc0_ParamLimits

0x8a43,	// (0x00020b38) aid_touch_area_size_lc0

0x5a99,	// (0x0001db8e) cell_hwr_candidate_pane_t1_ParamLimits

0xc225,	// (0x0002431a) aid_touch_navi_pane

0x8cb0,	// (0x00020da5) status_dt_navi_pane_ParamLimits

0x8cb0,	// (0x00020da5) status_dt_navi_pane

0x8cc8,	// (0x00020dbd) status_dt_sta_pane_ParamLimits

0x8cc8,	// (0x00020dbd) status_dt_sta_pane

0xab76,	// (0x00022c6b) dt_sta_controll_pane

0xab83,	// (0x00022c78) dt_sta_indi_pane

0xab90,	// (0x00022c85) dt_sta_title_pane

0xb19a,	// (0x0002328f) bg_dt_sta_indi_pane_ParamLimits

0xb19a,	// (0x0002328f) bg_dt_sta_indi_pane

0xaba2,	// (0x00022c97) dt_sta_battery_pane

0xabaa,	// (0x00022c9f) dt_sta_indi_pane_g1

0xabb3,	// (0x00022ca8) dt_sta_indi_pane_g2

0xabbc,	// (0x00022cb1) dt_sta_indi_pane_g3

0x0002,

0xfe65,	// (0x00027f5a) dt_sta_indi_pane_g

0xabc5,	// (0x00022cba) dt_sta_signal_pane

0xb635,	// (0x0002372a) bg_dt_sta_title_pane_ParamLimits

0xb635,	// (0x0002372a) bg_dt_sta_title_pane

0xabce,	// (0x00022cc3) dt_sta_title_pane_g1

0xabd6,	// (0x00022ccb) dt_sta_title_pane_t1_ParamLimits

0xabd6,	// (0x00022ccb) dt_sta_title_pane_t1

0xaf77,	// (0x0002306c) bg_dt_sta_control_pane

0xabeb,	// (0x00022ce0) dt_sta_controll_pane_g1

0xabf4,	// (0x00022ce9) bg_dt_sta_title_pane_g1

0xabfd,	// (0x00022cf2) bg_dt_sta_title_pane_g2

0xac06,	// (0x00022cfb) bg_dt_sta_title_pane_g3

0x0002,

0xfe6c,	// (0x00027f61) bg_dt_sta_title_pane_g

0xe196,	// (0x0002628b) bg_dt_sta_indi_pane_g1

0xac0f,	// (0x00022d04) dt_sta_signal_pane_g1

0xac17,	// (0x00022d0c) dt_sta_signal_pane_g2

0x0001,

0xfe73,	// (0x00027f68) dt_sta_signal_pane_g

0x1b26,	// (0x00019c1b) dt_sta_battery_pane_g1

0x1b2f,	// (0x00019c24) dt_sta_battery_pane_t1

0xe196,	// (0x0002628b) bg_dt_sta_control_pane_g1

0xbbbc,	// (0x00023cb1) fep_china_uni_eep_pane

0xbbc4,	// (0x00023cb9) fep_china_uni_entry_pane_ParamLimits

0xbbd4,	// (0x00023cc9) popup_fep_china_uni_window_g1_ParamLimits

0xbbe4,	// (0x00023cd9) popup_fep_china_uni_window_g2_ParamLimits

0xbbe4,	// (0x00023cd9) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000277ed) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000277ed) popup_fep_china_uni_window_g

0x1b3e,	// (0x00019c33) fep_china_uni_eep_pane_g1

0x1b46,	// (0x00019c3b) fep_china_uni_eep_pane_t1

0x1963,	// (0x00019a58) aid_touch_area_size_smil_player

0xc2c3,	// (0x000243b8) lc0_clock_pane

0xc2fc,	// (0x000243f1) status_pane_g5_ParamLimits

0xc2fc,	// (0x000243f1) status_pane_g5

0x85d7,	// (0x000206cc) popup_keymap_window

0xc2dc,	// (0x000243d1) status_icon_pane

0xa97c,	// (0x00022a71) cell_ai5_widget_pane_g3_ParamLimits

0xa996,	// (0x00022a8b) cell_ai5_widget_pane_g4_ParamLimits

0xa9a6,	// (0x00022a9b) cell_ai5_widget_pane_g5_ParamLimits

0xa9ce,	// (0x00022ac3) cell_ai5_widget_pane_g8_ParamLimits

0xa9ce,	// (0x00022ac3) cell_ai5_widget_pane_g8

0xa9e2,	// (0x00022ad7) cell_ai5_widget_pane_g9_ParamLimits

0xa9e2,	// (0x00022ad7) cell_ai5_widget_pane_g9

0xa9f6,	// (0x00022aeb) cell_ai5_widget_pane_g10_ParamLimits

0xa9f6,	// (0x00022aeb) cell_ai5_widget_pane_g10

0x1b55,	// (0x00019c4a) status_icon_pane_g1

0xaf77,	// (0x0002306c) bg_popup_sub_pane_cp13

0x1b5d,	// (0x00019c52) popup_keymap_window_t1

0x8323,	// (0x00020418) control_pane_g6_ParamLimits

0x8323,	// (0x00020418) control_pane_g6

0x8330,	// (0x00020425) control_pane_g7_ParamLimits

0x8330,	// (0x00020425) control_pane_g7

0x833d,	// (0x00020432) control_pane_g8_ParamLimits

0x833d,	// (0x00020432) control_pane_g8

0xab76,	// (0x00022c6b) dt_sta_controll_pane_ParamLimits

0xab83,	// (0x00022c78) dt_sta_indi_pane_ParamLimits

0xab90,	// (0x00022c85) dt_sta_title_pane_ParamLimits

0xb586,	// (0x0002367b) aid_size_touch_scroll_bar_cale

0x4817,	// (0x0001c90c) popup_discreet_window_ParamLimits

0x4817,	// (0x0001c90c) popup_discreet_window

0x7f75,	// (0x0002006a) popup_sk_window

0xc9ea,	// (0x00024adf) bg_popup_sub_pane_cp28_ParamLimits

0xc9ea,	// (0x00024adf) bg_popup_sub_pane_cp28

0x1b6b,	// (0x00019c60) popup_discreet_window_g1_ParamLimits

0x1b6b,	// (0x00019c60) popup_discreet_window_g1

0x1b8b,	// (0x00019c80) popup_discreet_window_t1_ParamLimits

0x1b8b,	// (0x00019c80) popup_discreet_window_t1

0x1ba9,	// (0x00019c9e) popup_discreet_window_t2_ParamLimits

0x1ba9,	// (0x00019c9e) popup_discreet_window_t2

0x0002,

0xfe78,	// (0x00027f6d) popup_discreet_window_t_ParamLimits

0xfe78,	// (0x00027f6d) popup_discreet_window_t

0x6a4b,	// (0x0001eb40) popup_sk_window_g1

0x6a54,	// (0x0001eb49) popup_sk_window_g2

0x0001,

0xfe7f,	// (0x00027f74) popup_sk_window_g

0x6a5d,	// (0x0001eb52) popup_sk_window_t1

0x6a6b,	// (0x0001eb60) popup_sk_window_t1_copy1

0xa968,	// (0x00022a5d) cell_ai5_widget_pane_g2_ParamLimits

0xaad2,	// (0x00022bc7) cell_ai5_widget_pane_t9_ParamLimits

0xaad2,	// (0x00022bc7) cell_ai5_widget_pane_t9

0xaf77,	// (0x0002306c) main_fep_fshwr2_pane

0xac1f,	// (0x00022d14) aid_fshwr2_btn_pane

0xac33,	// (0x00022d28) aid_fshwr2_syb_pane

0xac47,	// (0x00022d3c) aid_fshwr2_txt_pane

0xac57,	// (0x00022d4c) fshwr2_func_candi_pane

0xac6f,	// (0x00022d64) fshwr2_hwr_syb_pane

0xac87,	// (0x00022d7c) fshwr2_icf_pane

0xaf77,	// (0x0002306c) fshwr2_icf_bg_pane

0xacb1,	// (0x00022da6) fshwr2_icf_pane_t1_ParamLimits

0xacb1,	// (0x00022da6) fshwr2_icf_pane_t1

0xbb5a,	// (0x00023c4f) fshwr2_func_candi_pane_g1

0xacc8,	// (0x00022dbd) fshwr2_func_candi_row_pane_ParamLimits

0xacc8,	// (0x00022dbd) fshwr2_func_candi_row_pane

0xaceb,	// (0x00022de0) cell_fshwr2_syb_pane_ParamLimits

0xaceb,	// (0x00022de0) cell_fshwr2_syb_pane

0x193c,	// (0x00019a31) fshwr2_hwr_syb_pane_g1_ParamLimits

0x193c,	// (0x00019a31) fshwr2_hwr_syb_pane_g1

0xaf77,	// (0x0002306c) bg_popup_call_pane_cp01

0xad0d,	// (0x00022e02) fshwr2_func_candi_cell_pane_ParamLimits

0xad0d,	// (0x00022e02) fshwr2_func_candi_cell_pane

0xc792,	// (0x00024887) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc792,	// (0x00024887) fshwr2_func_candi_cell_bg_pane

0xad4c,	// (0x00022e41) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xad4c,	// (0x00022e41) fshwr2_func_candi_cell_pane_g1

0xad83,	// (0x00022e78) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xad83,	// (0x00022e78) fshwr2_func_candi_cell_pane_t1

0xaf77,	// (0x0002306c) bg_button_pane_cp08

0xb7ce,	// (0x000238c3) cell_fshwr2_syb_bg_pane

0xad9e,	// (0x00022e93) cell_fshwr2_syb_bg_pane_g1

0xadb2,	// (0x00022ea7) cell_fshwr2_syb_bg_pane_t1

0xb635,	// (0x0002372a) main_tmo_pane

0x90b3,	// (0x000211a8) uni_indicator_pane_g1_ParamLimits

0x90c7,	// (0x000211bc) uni_indicator_pane_g2_ParamLimits

0x90dc,	// (0x000211d1) uni_indicator_pane_g3_ParamLimits

0xd376,	// (0x0002546b) uni_indicator_pane_g4_ParamLimits

0xd376,	// (0x0002546b) uni_indicator_pane_g4

0xd38a,	// (0x0002547f) uni_indicator_pane_g5_ParamLimits

0xd38a,	// (0x0002547f) uni_indicator_pane_g5

0xd38a,	// (0x0002547f) uni_indicator_pane_g6_ParamLimits

0xd38a,	// (0x0002547f) uni_indicator_pane_g6

0xf8f0,	// (0x000279e5) uni_indicator_pane_g_ParamLimits

0x9a5a,	// (0x00021b4f) popup_tmo_note_window_ParamLimits

0x9a5a,	// (0x00021b4f) popup_tmo_note_window

0xb635,	// (0x0002372a) fshwr2_bg_pane

0xad74,	// (0x00022e69) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xad74,	// (0x00022e69) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe84,	// (0x00027f79) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe84,	// (0x00027f79) fshwr2_func_candi_cell_pane_g

0xe196,	// (0x0002628b) bg_popup_window_pane_cp01

0x6c00,	// (0x0001ecf5) bg_popup_window_pane_g1_cp01

0x1bfb,	// (0x00019cf0) bg_popup_window_pane_cp22_ParamLimits

0x1bfb,	// (0x00019cf0) bg_popup_window_pane_cp22

0x1c09,	// (0x00019cfe) listscroll_tmo_link_pane_ParamLimits

0x1c09,	// (0x00019cfe) listscroll_tmo_link_pane

0x1c49,	// (0x00019d3e) popup_tmo_note_window_g1_ParamLimits

0x1c49,	// (0x00019d3e) popup_tmo_note_window_g1

0x1c56,	// (0x00019d4b) tmo_note_info_pane_ParamLimits

0x1c56,	// (0x00019d4b) tmo_note_info_pane

0xadc8,	// (0x00022ebd) list_tmo_note_info_pane_g1_ParamLimits

0xadc8,	// (0x00022ebd) list_tmo_note_info_pane_g1

0x1c70,	// (0x00019d65) list_tmo_note_info_pane_g2_ParamLimits

0x1c70,	// (0x00019d65) list_tmo_note_info_pane_g2

0x0001,

0xfe89,	// (0x00027f7e) list_tmo_note_info_pane_g_ParamLimits

0xfe89,	// (0x00027f7e) list_tmo_note_info_pane_g

0x1c8c,	// (0x00019d81) list_tmo_note_info_text_pane_ParamLimits

0x1c8c,	// (0x00019d81) list_tmo_note_info_text_pane

0x1cce,	// (0x00019dc3) list_tmo_link_pane

0x1cdb,	// (0x00019dd0) scroll_pane_cp20

0x1ce8,	// (0x00019ddd) list_single_tmo_link_pane_ParamLimits

0x1ce8,	// (0x00019ddd) list_single_tmo_link_pane

0x1cf8,	// (0x00019ded) list_single_tmo_link_pane_t1

0x1d06,	// (0x00019dfb) list_tmo_note_info_text_pane_t1_ParamLimits

0x1d06,	// (0x00019dfb) list_tmo_note_info_text_pane_t1

0xb6f4,	// (0x000237e9) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb6f4,	// (0x000237e9) aid_size_touch_scroll_bar_cp01

0x7b4f,	// (0x0001fc44) aid_size_touch_slider_marker

0x7f69,	// (0x0002005e) popup_settings_window_ParamLimits

0x7f69,	// (0x0002005e) popup_settings_window

0x3e37,	// (0x0001bf2c) popup_candi_list_indi_window

0xc225,	// (0x0002431a) aid_touch_navi_pane_ParamLimits

0x5bff,	// (0x0001dcf4) rs_clock_indi_pane

0x5c08,	// (0x0001dcfd) sctrl_sk_bottom_pane_ParamLimits

0x5c19,	// (0x0001dd0e) sctrl_sk_top_pane_ParamLimits

0x5cfd,	// (0x0001ddf2) popup_fep_tooltip_window

0x19b1,	// (0x00019aa6) aid_size_cell_widget_grid_ParamLimits

0xa954,	// (0x00022a49) cell_ai5_widget_pane_g1_ParamLimits

0xa954,	// (0x00022a49) cell_ai5_widget_pane_g1

0xa9b6,	// (0x00022aab) cell_ai5_widget_pane_g6_ParamLimits

0xa9c2,	// (0x00022ab7) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfd,	// (0x00027ef2) cell_ai5_widget_pane_g_ParamLimits

0xfdfd,	// (0x00027ef2) cell_ai5_widget_pane_g

0xab01,	// (0x00022bf6) cell_ai5_widget_pane_t10_ParamLimits

0xab01,	// (0x00022bf6) cell_ai5_widget_pane_t10

0xab44,	// (0x00022c39) grid_ai5_widget_pane_ParamLimits

0x1a95,	// (0x00019b8a) cell_contacts_ai5_widget_pane_ParamLimits

0x1a95,	// (0x00019b8a) cell_contacts_ai5_widget_pane

0x1bbe,	// (0x00019cb3) popup_discreet_window_t3_ParamLimits

0x1bbe,	// (0x00019cb3) popup_discreet_window_t3

0xac9f,	// (0x00022d94) popup_fshwr2_char_preview_window_ParamLimits

0xac9f,	// (0x00022d94) popup_fshwr2_char_preview_window

0xaddf,	// (0x00022ed4) tmo_note_info_pane_t1

0xadf4,	// (0x00022ee9) tmo_note_info_pane_t2

0xae09,	// (0x00022efe) tmo_note_info_pane_t3

0x1caa,	// (0x00019d9f) tmo_note_info_pane_t4

0x1cbc,	// (0x00019db1) tmo_note_info_pane_t5

0x0004,

0xfe8e,	// (0x00027f83) tmo_note_info_pane_t

0x1cce,	// (0x00019dc3) list_tmo_link_pane_ParamLimits

0x1cdb,	// (0x00019dd0) scroll_pane_cp20_ParamLimits

0xaf77,	// (0x0002306c) bg_popup_fep_char_preview_window_cp01

0x1d1f,	// (0x00019e14) popup_fshwr2_char_preview_window_t1

0x1d2d,	// (0x00019e22) popup_candi_list_indi_window_g1

0x1d36,	// (0x00019e2b) bg_cell_contacts_ai5_widget_pane

0x1d42,	// (0x00019e37) cell_contacts_ai5_widget_pane_g1

0x1d57,	// (0x00019e4c) cell_contacts_ai5_widget_pane_g2

0x1d63,	// (0x00019e58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe99,	// (0x00027f8e) cell_contacts_ai5_widget_pane_g

0x1d6f,	// (0x00019e64) cell_contacts_ai5_widget_pane_t1

0xb635,	// (0x0002372a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1de4,	// (0x00019ed9) settings_container_pane

0xbff3,	// (0x000240e8) listscroll_set_pane_copy1

0xdacc,	// (0x00025bc1) scroll_pane_cp121_copy1

0x1df0,	// (0x00019ee5) set_content_pane_copy1

0x1df8,	// (0x00019eed) aid_height_set_list_copy1_ParamLimits

0x1df8,	// (0x00019eed) aid_height_set_list_copy1

0xd52f,	// (0x00025624) aid_size_parent_copy1_ParamLimits

0xd52f,	// (0x00025624) aid_size_parent_copy1

0x1e04,	// (0x00019ef9) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1e04,	// (0x00019ef9) button_value_adjust_pane_cp6_copy1

0xb7ce,	// (0x000238c3) list_highlight_pane_cp2_copy1_ParamLimits

0xb7ce,	// (0x000238c3) list_highlight_pane_cp2_copy1

0x1e18,	// (0x00019f0d) list_set_pane_copy1_ParamLimits

0x1e18,	// (0x00019f0d) list_set_pane_copy1

0x1d81,	// (0x00019e76) main_pane_set_t1_copy1_ParamLimits

0x1d81,	// (0x00019e76) main_pane_set_t1_copy1

0x1dbb,	// (0x00019eb0) main_pane_set_t2_copy1_ParamLimits

0x1dbb,	// (0x00019eb0) main_pane_set_t2_copy1

0x1ea6,	// (0x00019f9b) main_pane_set_t3_copy1

0x1eb4,	// (0x00019fa9) main_pane_set_t4_copy1

0x1dd8,	// (0x00019ecd) set_content_pane_g1_copy1_ParamLimits

0x1dd8,	// (0x00019ecd) set_content_pane_g1_copy1

0x1ec2,	// (0x00019fb7) setting_code_pane_copy1

0x1eca,	// (0x00019fbf) setting_slider_graphic_pane_copy1

0x1eca,	// (0x00019fbf) setting_slider_pane_copy1

0x1eca,	// (0x00019fbf) setting_text_pane_copy1

0x1eca,	// (0x00019fbf) setting_volume_pane_copy1

0x1ed2,	// (0x00019fc7) settings_code_pane_cp2_copy1

0x1eda,	// (0x00019fcf) settings_code_pane_cp_copy1_ParamLimits

0x1eda,	// (0x00019fcf) settings_code_pane_cp_copy1

0x6c5f,	// (0x0001ed54) volume_set_pane_copy1

0x1eee,	// (0x00019fe3) volume_set_pane_g10_copy1

0x1ef6,	// (0x00019feb) volume_set_pane_g1_copy1

0x1efe,	// (0x00019ff3) volume_set_pane_g2_copy1

0x1f06,	// (0x00019ffb) volume_set_pane_g3_copy1

0x1f0e,	// (0x0001a003) volume_set_pane_g4_copy1

0x1f16,	// (0x0001a00b) volume_set_pane_g5_copy1

0x1f1e,	// (0x0001a013) volume_set_pane_g6_copy1

0x1f26,	// (0x0001a01b) volume_set_pane_g7_copy1

0x1f2e,	// (0x0001a023) volume_set_pane_g8_copy1

0x1f36,	// (0x0001a02b) volume_set_pane_g9_copy1

0xb067,	// (0x0002315c) bg_set_opt_pane_cp_copy1_ParamLimits

0xb067,	// (0x0002315c) bg_set_opt_pane_cp_copy1

0x6c67,	// (0x0001ed5c) setting_slider_pane_t1_copy1_ParamLimits

0x6c67,	// (0x0001ed5c) setting_slider_pane_t1_copy1

0x6c7e,	// (0x0001ed73) setting_slider_pane_t2_copy1_ParamLimits

0x6c7e,	// (0x0001ed73) setting_slider_pane_t2_copy1

0x6c97,	// (0x0001ed8c) setting_slider_pane_t3_copy1_ParamLimits

0x6c97,	// (0x0001ed8c) setting_slider_pane_t3_copy1

0x4997,	// (0x0001ca8c) slider_set_pane_copy1_ParamLimits

0x4997,	// (0x0001ca8c) slider_set_pane_copy1

0xb690,	// (0x00023785) set_opt_bg_pane_g1_copy2

0xb698,	// (0x0002378d) set_opt_bg_pane_g2_copy2

0x1f3e,	// (0x0001a033) set_opt_bg_pane_g3_copy2

0xb6a8,	// (0x0002379d) set_opt_bg_pane_g4_copy2

0xb6b0,	// (0x000237a5) set_opt_bg_pane_g5_copy2

0xb6b8,	// (0x000237ad) set_opt_bg_pane_g6_copy2

0x1f46,	// (0x0001a03b) set_opt_bg_pane_g7_copy2

0x1f4e,	// (0x0001a043) set_opt_bg_pane_g8_copy2

0x1f56,	// (0x0001a04b) set_opt_bg_pane_g9_copy2

0x5691,	// (0x0001d786) aid_size_touch_slider_mark_copy1_ParamLimits

0x5691,	// (0x0001d786) aid_size_touch_slider_mark_copy1

0xd541,	// (0x00025636) slider_set_pane_g1_copy1

0xd54a,	// (0x0002563f) slider_set_pane_g2_copy1

0x56b1,	// (0x0001d7a6) slider_set_pane_g3_copy1_ParamLimits

0x56b1,	// (0x0001d7a6) slider_set_pane_g3_copy1

0x56c5,	// (0x0001d7ba) slider_set_pane_g4_copy1_ParamLimits

0x56c5,	// (0x0001d7ba) slider_set_pane_g4_copy1

0x56dd,	// (0x0001d7d2) slider_set_pane_g5_copy1_ParamLimits

0x56dd,	// (0x0001d7d2) slider_set_pane_g5_copy1

0x56b1,	// (0x0001d7a6) slider_set_pane_g6_copy1_ParamLimits

0x56b1,	// (0x0001d7a6) slider_set_pane_g6_copy1

0x6cae,	// (0x0001eda3) slider_set_pane_g7_copy1_ParamLimits

0x6cae,	// (0x0001eda3) slider_set_pane_g7_copy1

0xb003,	// (0x000230f8) bg_set_opt_pane_cp2_copy1

0xb075,	// (0x0002316a) setting_slider_graphic_pane_g1_copy1

0x6cc4,	// (0x0001edb9) setting_slider_graphic_pane_t1_copy1

0x6cd3,	// (0x0001edc8) setting_slider_graphic_pane_t2_copy1

0x6ce2,	// (0x0001edd7) slider_set_pane_cp_copy1

0x1f66,	// (0x0001a05b) input_focus_pane_cp1_copy1

0x1f6f,	// (0x0001a064) list_set_text_pane_copy1

0x1f77,	// (0x0001a06c) setting_text_pane_g1_copy1

0x46ad,	// (0x0001c7a2) set_text_pane_t1_copy1

0x1f66,	// (0x0001a05b) input_focus_pane_cp2_copy1

0x1f77,	// (0x0001a06c) setting_code_pane_g1_copy1

0x1f99,	// (0x0001a08e) setting_code_pane_t1_copy1

0x172d,	// (0x00019822) list_set_graphic_pane_copy1

0xb003,	// (0x000230f8) bg_set_opt_pane_cp4_copy1

0xbd4f,	// (0x00023e44) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd4f,	// (0x00023e44) list_set_graphic_pane_g1_copy1

0x1fa7,	// (0x0001a09c) list_set_graphic_pane_g2_copy1

0xbd67,	// (0x00023e5c) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd67,	// (0x00023e5c) list_set_graphic_pane_t1_copy1

0xe196,	// (0x0002628b) rs_clock_indi_pane_g1

0x1faf,	// (0x0001a0a4) rs_clock_indi_pane_t1

0x1fbd,	// (0x0001a0b2) rs_indi_pane

0x1fc5,	// (0x0001a0ba) rs_indi_pane_g1

0x1fce,	// (0x0001a0c3) rs_indi_pane_g2

0x1d2d,	// (0x00019e22) rs_indi_pane_g3

0x0002,

0xfea0,	// (0x00027f95) rs_indi_pane_g

0xbff3,	// (0x000240e8) bg_popup_preview_window_pane_cp03

0x1fd7,	// (0x0001a0cc) popup_fep_tooltip_window_t1

0xeac1,	// (0x00026bb6) popup_note2_window_g2_ParamLimits

0xeac1,	// (0x00026bb6) popup_note2_window_g2

0x0001,

0xfc34,	// (0x00027d29) popup_note2_window_g_ParamLimits

0xfc34,	// (0x00027d29) popup_note2_window_g

0xef3c,	// (0x00027031) bg_popup_sub_pane_cp11_ParamLimits

0xef49,	// (0x0002703e) cell_ai3_links_pane_g1_ParamLimits

0xef60,	// (0x00027055) cell_ai3_links_pane_t1

0x46ad,	// (0x0001c7a2) set_text_pane_t1_copy1_ParamLimits

0xbf13,	// (0x00024008) cell_graphic_popup_pane_cp2_ParamLimits

0xbf13,	// (0x00024008) cell_graphic_popup_pane_cp2

0x1fe5,	// (0x0001a0da) cell_graphic_popup_pane_g1_cp2

0xb435,	// (0x0002352a) cell_graphic_popup_pane_g2_cp2

0x1fed,	// (0x0001a0e2) cell_graphic_popup_pane_g3_cp2

0x1ff5,	// (0x0001a0ea) cell_graphic_popup_pane_t2_cp2

0xb446,	// (0x0002353b) grid_highlight_pane_cp3_cp2

0xb993,	// (0x00023a88) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb635,	// (0x0002372a) main_tmo_pane_ParamLimits

0x9a52,	// (0x00021b47) popup_tmo_big_image_note_window

0x19f0,	// (0x00019ae5) cell_ai5_widget_list_pane

0xa94b,	// (0x00022a40) cell_ai5_widget_lrg_icon_pane

0xaddf,	// (0x00022ed4) tmo_note_info_pane_t1_ParamLimits

0xadf4,	// (0x00022ee9) tmo_note_info_pane_t2_ParamLimits

0xae09,	// (0x00022efe) tmo_note_info_pane_t3_ParamLimits

0x1caa,	// (0x00019d9f) tmo_note_info_pane_t4_ParamLimits

0x1cbc,	// (0x00019db1) tmo_note_info_pane_t5_ParamLimits

0xfe8e,	// (0x00027f83) tmo_note_info_pane_t_ParamLimits

0x1de4,	// (0x00019ed9) settings_container_pane_ParamLimits

0x1f5e,	// (0x0001a053) indicator_popup_pane_cp5

0x1f5e,	// (0x0001a053) indicator_popup_pane_cp6

0x172d,	// (0x00019822) list_set_graphic_pane_copy1_ParamLimits

0xaf77,	// (0x0002306c) bg_popup_window_pane_cp23

0x2003,	// (0x0001a0f8) popup_tmo_big_image_note_window_g1

0x200c,	// (0x0001a101) popup_tmo_big_image_note_window_t1

0x201a,	// (0x0001a10f) popup_tmo_big_image_note_window_t2

0x2028,	// (0x0001a11d) popup_tmo_big_image_note_window_t3

0x0002,

0xfea7,	// (0x00027f9c) popup_tmo_big_image_note_window_t

0xe196,	// (0x0002628b) cell_ai5_widget_lrg_icon_pane_g1

0x2036,	// (0x0001a12b) cell_ai5_widget_lrg_icon_pane_t1

0xae1e,	// (0x00022f13) cell_ai5_widget_list_row_pane_ParamLimits

0xae1e,	// (0x00022f13) cell_ai5_widget_list_row_pane

0xae35,	// (0x00022f2a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xae35,	// (0x00022f2a) cell_ai5_widget_list_row_pane_g1

0xae42,	// (0x00022f37) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xae42,	// (0x00022f37) cell_ai5_widget_list_row_pane_t1

0xae73,	// (0x00022f68) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xae73,	// (0x00022f68) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeae,	// (0x00027fa3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeae,	// (0x00027fa3) cell_ai5_widget_list_row_pane_t

0xaf77,	// (0x0002306c) main_fep_vtchi_ss_pane

0x2051,	// (0x0001a146) popup_fep_char_pre_window

0x2059,	// (0x0001a14e) popup_fep_ituss_window

0xaec4,	// (0x00022fb9) popup_fep_vkbss_window

0x2094,	// (0x0001a189) grid_vkbss_keypad_pane_ParamLimits

0x2094,	// (0x0001a189) grid_vkbss_keypad_pane

0x20a4,	// (0x0001a199) ituss_keypad_pane

0x6daf,	// (0x0001eea4) aid_vkbss_key_offset_ParamLimits

0x6daf,	// (0x0001eea4) aid_vkbss_key_offset

0x6dbb,	// (0x0001eeb0) cell_vkbss_key_pane_ParamLimits

0x6dbb,	// (0x0001eeb0) cell_vkbss_key_pane

0x20b0,	// (0x0001a1a5) bg_cell_vkbss_key_g1_ParamLimits

0x20b0,	// (0x0001a1a5) bg_cell_vkbss_key_g1

0x20bc,	// (0x0001a1b1) cell_vkbss_key_3p_pane_ParamLimits

0x20bc,	// (0x0001a1b1) cell_vkbss_key_3p_pane

0x20f2,	// (0x0001a1e7) cell_vkbss_key_g1_ParamLimits

0x20f2,	// (0x0001a1e7) cell_vkbss_key_g1

0x2128,	// (0x0001a21d) cell_vkbss_key_t1_ParamLimits

0x2128,	// (0x0001a21d) cell_vkbss_key_t1

0x6def,	// (0x0001eee4) cell_ituss_key_pane_ParamLimits

0x6def,	// (0x0001eee4) cell_ituss_key_pane

0x2198,	// (0x0001a28d) bg_cell_ituss_key_g1_ParamLimits

0x2198,	// (0x0001a28d) bg_cell_ituss_key_g1

0x21a4,	// (0x0001a299) cell_ituss_key_pane_g1_ParamLimits

0x21a4,	// (0x0001a299) cell_ituss_key_pane_g1

0x6e00,	// (0x0001eef5) cell_ituss_key_pane_g2_ParamLimits

0x6e00,	// (0x0001eef5) cell_ituss_key_pane_g2

0x0005,

0xfeb5,	// (0x00027faa) cell_ituss_key_pane_g_ParamLimits

0xfeb5,	// (0x00027faa) cell_ituss_key_pane_g

0x6e84,	// (0x0001ef79) cell_ituss_key_t1_ParamLimits

0x6e84,	// (0x0001ef79) cell_ituss_key_t1

0x6eba,	// (0x0001efaf) cell_ituss_key_t2_ParamLimits

0x6eba,	// (0x0001efaf) cell_ituss_key_t2

0x6eec,	// (0x0001efe1) cell_ituss_key_t3_ParamLimits

0x6eec,	// (0x0001efe1) cell_ituss_key_t3

0x6f1d,	// (0x0001f012) cell_ituss_key_t4_ParamLimits

0x6f1d,	// (0x0001f012) cell_ituss_key_t4

0x0004,

0xfec2,	// (0x00027fb7) cell_ituss_key_t_ParamLimits

0xfec2,	// (0x00027fb7) cell_ituss_key_t

0x21da,	// (0x0001a2cf) cell_vkbss_key_3p_pane_g1

0x21d2,	// (0x0001a2c7) cell_vkbss_key_3p_pane_g2

0x21ca,	// (0x0001a2bf) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecd,	// (0x00027fc2) cell_vkbss_key_3p_pane_g

0xbff3,	// (0x000240e8) bg_popup_fep_char_preview_window_cp02

0x21e2,	// (0x0001a2d7) popup_fep_char_pre_window_t1

0xa938,	// (0x00022a2d) main_ai5_sk_pane

0x1d36,	// (0x00019e2b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1d42,	// (0x00019e37) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1d57,	// (0x00019e4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1d63,	// (0x00019e58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe99,	// (0x00027f8e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1d6f,	// (0x00019e64) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb635,	// (0x0002372a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xaed1,	// (0x00022fc6) main_ai5_sk_pane_g1

0xc7ea,	// (0x000248df) popup_query_code_window_g1

0xaeb6,	// (0x00022fab) popup_fep_vkb_icf_pane

0x206b,	// (0x0001a160) popup_fep_vtchi_icf_pane

0x21f0,	// (0x0001a2e5) bg_icf_pane

0x21f0,	// (0x0001a2e5) list_vkb_icf_pane

0x21fc,	// (0x0001a2f1) bg_icf_pane_cp01

0x220f,	// (0x0001a304) vtchi_icf_list_pane

0xaf26,	// (0x0002301b) list_vkb_icf_pane_t1_ParamLimits

0xaf26,	// (0x0002301b) list_vkb_icf_pane_t1

0x221f,	// (0x0001a314) vtchi_icf_list_pane_t1_ParamLimits

0x221f,	// (0x0001a314) vtchi_icf_list_pane_t1

0x2059,	// (0x0001a14e) popup_fep_ituss_window_ParamLimits

0x206b,	// (0x0001a160) popup_fep_vtchi_icf_pane_ParamLimits

0x20a4,	// (0x0001a199) ituss_keypad_pane_ParamLimits

0x6da7,	// (0x0001ee9c) ituss_sks_pane

0x21f0,	// (0x0001a2e5) bg_icf_pane_ParamLimits

0xae9b,	// (0x00022f90) icf_edit_indi_pane_ParamLimits

0xae9b,	// (0x00022f90) icf_edit_indi_pane

0x21f0,	// (0x0001a2e5) list_vkb_icf_pane_ParamLimits

0x21fc,	// (0x0001a2f1) bg_icf_pane_cp01_ParamLimits

0x2044,	// (0x0001a139) icf_edit_indi_pane_cp01_ParamLimits

0x2044,	// (0x0001a139) icf_edit_indi_pane_cp01

0x2217,	// (0x0001a30c) vtchi_query_pane

0x193c,	// (0x00019a31) icf_edit_indi_pane_g1_ParamLimits

0x193c,	// (0x00019a31) icf_edit_indi_pane_g1

0xaf3d,	// (0x00023032) icf_edit_indi_pane_g2_ParamLimits

0xaf3d,	// (0x00023032) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x00027fed) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x00027fed) icf_edit_indi_pane_g

0xaf4f,	// (0x00023044) icf_edit_indi_pane_t1

0x2237,	// (0x0001a32c) bg_input_focus_pane_cp042

0x2240,	// (0x0001a335) vtchi_button_pane

0x2249,	// (0x0001a33e) vtchi_query_pane_t1

0x2257,	// (0x0001a34c) vtchi_query_pane_t2

0x2265,	// (0x0001a35a) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x00027fdc) vtchi_query_pane_t

0xaf77,	// (0x0002306c) bg_button_pane_cp13

0x2273,	// (0x0001a368) vtchi_button_pane_g1

0x6fc1,	// (0x0001f0b6) ituss_sks_pane_g1

0x6fca,	// (0x0001f0bf) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x00027fe3) ituss_sks_pane_g

0x2289,	// (0x0001a37e) ituss_sks_pane_t1

0x227b,	// (0x0001a370) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x00027fe8) ituss_sks_pane_t

0xddc3,	// (0x00025eb8) indicator_nsta_pane_cp_g1

0xddcc,	// (0x00025ec1) indicator_nsta_pane_cp_g2

0xddd4,	// (0x00025ec9) indicator_nsta_pane_cp_g3

0xdddc,	// (0x00025ed1) indicator_nsta_pane_cp_g4

0xdde4,	// (0x00025ed9) indicator_nsta_pane_cp_g5

0xddec,	// (0x00025ee1) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x00027b73) indicator_nsta_pane_cp_g

0xa721,	// (0x00022816) cell_graphic2_pane_t2_ParamLimits

0xa721,	// (0x00022816) cell_graphic2_pane_t2

0x0001,

0xfd84,	// (0x00027e79) cell_graphic2_pane_t_ParamLimits

0xfd84,	// (0x00027e79) cell_graphic2_pane_t

0xa759,	// (0x0002284e) cell_graphic2_control_pane_t1

0x81b0,	// (0x000202a5) signal_pane_g3_ParamLimits

0x81b0,	// (0x000202a5) signal_pane_g3

0x81c4,	// (0x000202b9) signal_pane_g4_ParamLimits

0x81c4,	// (0x000202b9) signal_pane_g4

0xae85,	// (0x00022f7a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xae85,	// (0x00022f7a) cell_ai5_widget_list_row_pane_t3

0x21b8,	// (0x0001a2ad) cell_ituss_key_pane_t1_ParamLimits

0x21b8,	// (0x0001a2ad) cell_ituss_key_pane_t1

0xc4b8,	// (0x000245ad) form_field_data_wide_pane_vc_t2_ParamLimits

0xc4b8,	// (0x000245ad) form_field_data_wide_pane_vc_t2

0xc4ca,	// (0x000245bf) form_field_data_wide_pane_vc_t3_ParamLimits

0xc4ca,	// (0x000245bf) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x000278cd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x000278cd) form_field_data_wide_pane_vc_t

0xdb11,	// (0x00025c06) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdb11,	// (0x00025c06) form_field_slider_wide_pane_vc_t3

0xdbed,	// (0x00025ce2) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdbed,	// (0x00025ce2) form_field_popup_wide_pane_vc_t2

0xdc02,	// (0x00025cf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdc02,	// (0x00025cf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x00027b62) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x00027b62) form_field_popup_wide_pane_vc_t

0xac1f,	// (0x00022d14) aid_fshwr2_btn_pane_ParamLimits

0xac33,	// (0x00022d28) aid_fshwr2_syb_pane_ParamLimits

0xac47,	// (0x00022d3c) aid_fshwr2_txt_pane_ParamLimits

0xb635,	// (0x0002372a) fshwr2_bg_pane_ParamLimits

0xac57,	// (0x00022d4c) fshwr2_func_candi_pane_ParamLimits

0xac6f,	// (0x00022d64) fshwr2_hwr_syb_pane_ParamLimits

0xac87,	// (0x00022d7c) fshwr2_icf_pane_ParamLimits

0x42a5,	// (0x0001c39a) list_double_graphic_pane_vc_g4_ParamLimits

0x42a5,	// (0x0001c39a) list_double_graphic_pane_vc_g4

0x6e20,	// (0x0001ef15) cell_ituss_key_pane_g3_ParamLimits

0x6e20,	// (0x0001ef15) cell_ituss_key_pane_g3

0x6f4e,	// (0x0001f043) cell_ituss_key_t5_ParamLimits

0x6f4e,	// (0x0001f043) cell_ituss_key_t5

0xaec4,	// (0x00022fb9) popup_fep_vkbss_window_ParamLimits

0xa942,	// (0x00022a37) aid_cell_ai5_quarter

0xaf4f,	// (0x00023044) icf_edit_indi_pane_t1_ParamLimits

0xb242,	// (0x00023337) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb242,	// (0x00023337) aid_tch_indicator_popup_pane_cp2

0xb255,	// (0x0002334a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb255,	// (0x0002334a) aid_tch_query_popup_data_pane_cp2

0xc792,	// (0x00024887) aid_tch_query_popup_pane_ParamLimits

0xc792,	// (0x00024887) aid_tch_query_popup_pane

0xc792,	// (0x00024887) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xc792,	// (0x00024887) aid_tch_query_popup_data_pane_cp1

0xb7ce,	// (0x000238c3) cell_fshwr2_syb_bg_pane_ParamLimits

0xad9e,	// (0x00022e93) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xadb2,	// (0x00022ea7) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xaeb6,	// (0x00022fab) popup_fep_vkb_icf_pane_ParamLimits

0xa81f,	// (0x00022914) bg_popup_fep_char_preview_window_g10

0xaa0a,	// (0x00022aff) cell_ai5_widget_pane_g11_ParamLimits

0xaa0a,	// (0x00022aff) cell_ai5_widget_pane_g11

0xaa16,	// (0x00022b0b) cell_ai5_widget_pane_g12_ParamLimits

0xaa16,	// (0x00022b0b) cell_ai5_widget_pane_g12

0xaa22,	// (0x00022b17) cell_ai5_widget_pane_g13_ParamLimits

0xaa22,	// (0x00022b17) cell_ai5_widget_pane_g13

0xab20,	// (0x00022c15) cell_ai5_widget_pane_t11_ParamLimits

0xab20,	// (0x00022c15) cell_ai5_widget_pane_t11

0xab32,	// (0x00022c27) cell_ai5_widget_pane_t12_ParamLimits

0xab32,	// (0x00022c27) cell_ai5_widget_pane_t12

0x6e2c,	// (0x0001ef21) cell_ituss_key_pane_g4_ParamLimits

0x6e2c,	// (0x0001ef21) cell_ituss_key_pane_g4

0x6e48,	// (0x0001ef3d) cell_ituss_key_pane_g5_ParamLimits

0x6e48,	// (0x0001ef3d) cell_ituss_key_pane_g5

0x6e64,	// (0x0001ef59) cell_ituss_key_pane_g6_ParamLimits

0x6e64,	// (0x0001ef59) cell_ituss_key_pane_g6

0xc3cc,	// (0x000244c1) bg_icf_pane_g1

0xaeda,	// (0x00022fcf) bg_icf_pane_g2

0xaee4,	// (0x00022fd9) bg_icf_pane_g3

0xaeec,	// (0x00022fe1) bg_icf_pane_g4

0xaef6,	// (0x00022feb) bg_icf_pane_g5

0xaf00,	// (0x00022ff5) bg_icf_pane_g6

0xaf0a,	// (0x00022fff) bg_icf_pane_g7

0xaf12,	// (0x00023007) bg_icf_pane_g8

0xaf1c,	// (0x00023011) bg_icf_pane_g9

0x0008,

0xfed4,	// (0x00027fc9) bg_icf_pane_g

0x2081,	// (0x0001a176) popup_hyb_candi_window_ParamLimits

0x2081,	// (0x0001a176) popup_hyb_candi_window

0xc458,	// (0x0002454d) bg_popup_sub_pane_cp01_ParamLimits

0xc458,	// (0x0002454d) bg_popup_sub_pane_cp01

0x2297,	// (0x0001a38c) entry_hyb_candi_pane_ParamLimits

0x2297,	// (0x0001a38c) entry_hyb_candi_pane

0x22a6,	// (0x0001a39b) grid_hyb_candi_pane_ParamLimits

0x22a6,	// (0x0001a39b) grid_hyb_candi_pane

0x233c,	// (0x0001a431) grid_hyb_phrase_pane_ParamLimits

0x233c,	// (0x0001a431) grid_hyb_phrase_pane

0x234b,	// (0x0001a440) cell_hyb_candi_pane_ParamLimits

0x234b,	// (0x0001a440) cell_hyb_candi_pane

0x2363,	// (0x0001a458) cell_hyb_candi_scroll_pane

0xbb5a,	// (0x00023c4f) cell_hyb_candi_pane_g1

0x236c,	// (0x0001a461) cell_hyb_candi_pane_t1

0x237a,	// (0x0001a46f) cell_hyb_phrase_pane

0xbb5a,	// (0x00023c4f) cell_hyb_phrase_pane_g1

0x2383,	// (0x0001a478) cell_hyb_phrase_pane_t1

0x2391,	// (0x0001a486) entry_hyb_candi_pane_t1

0xbff3,	// (0x000240e8) input_focus_pane_cp06

0x239f,	// (0x0001a494) cell_hyb_candi_scroll_pane_g1

0x23a7,	// (0x0001a49c) cell_hyb_candi_scroll_pane_g1_aid

0x23af,	// (0x0001a4a4) cell_hyb_candi_scroll_pane_g2

0x23b7,	// (0x0001a4ac) cell_hyb_candi_scroll_pane_g2_aid

0x23bf,	// (0x0001a4b4) cell_hyb_candi_scroll_pane_g3

0x23c7,	// (0x0001a4bc) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small

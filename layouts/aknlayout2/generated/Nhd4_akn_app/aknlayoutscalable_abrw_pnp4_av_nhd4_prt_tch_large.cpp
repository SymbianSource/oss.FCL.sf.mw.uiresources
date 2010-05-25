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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00053be6 };

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
0x524f,	// (0x00058e35) Screen

0x525b,	// (0x00058e41) application_window_ParamLimits

0x525b,	// (0x00058e41) application_window

0xeb59,	// (0x0006273f) screen_g1

0x52b7,	// (0x00058e9d) area_bottom_pane_ParamLimits

0x52b7,	// (0x00058e9d) area_bottom_pane

0x5377,	// (0x00058f5d) area_top_pane_ParamLimits

0x5377,	// (0x00058f5d) area_top_pane

0x5415,	// (0x00058ffb) main_pane_ParamLimits

0x5415,	// (0x00058ffb) main_pane

0xeb63,	// (0x00062749) misc_graphics

0x8ec0,	// (0x0005caa6) battery_pane_ParamLimits

0x8ec0,	// (0x0005caa6) battery_pane

0x9b9a,	// (0x0005d780) bg_status_flat_pane_g8

0x9ba2,	// (0x0005d788) bg_status_flat_pane_g9

0x8f88,	// (0x0005cb6e) context_pane_ParamLimits

0x8f88,	// (0x0005cb6e) context_pane

0x909e,	// (0x0005cc84) navi_pane_ParamLimits

0x909e,	// (0x0005cc84) navi_pane

0x9122,	// (0x0005cd08) signal_pane_ParamLimits

0x9122,	// (0x0005cd08) signal_pane

0x0008,

0xf874,	// (0x0006345a) bg_status_flat_pane_g

0x918f,	// (0x0005cd75) status_pane_g1_ParamLimits

0x918f,	// (0x0005cd75) status_pane_g1

0x91a3,	// (0x0005cd89) status_pane_g2_ParamLimits

0x91a3,	// (0x0005cd89) status_pane_g2

0x91af,	// (0x0005cd95) status_pane_g3_ParamLimits

0x91af,	// (0x0005cd95) status_pane_g3

0x0004,

0xf79b,	// (0x00063381) status_pane_g_ParamLimits

0xf79b,	// (0x00063381) status_pane_g

0x91e3,	// (0x0005cdc9) title_pane_ParamLimits

0x91e3,	// (0x0005cdc9) title_pane

0x9220,	// (0x0005ce06) uni_indicator_pane_ParamLimits

0x9220,	// (0x0005ce06) uni_indicator_pane

0x8de4,	// (0x0005c9ca) bg_list_pane_ParamLimits

0x8de4,	// (0x0005c9ca) bg_list_pane

0x6da4,	// (0x0005a98a) find_pane

0x8e04,	// (0x0005c9ea) listscroll_app_pane_ParamLimits

0x8e04,	// (0x0005c9ea) listscroll_app_pane

0x8e10,	// (0x0005c9f6) listscroll_form_pane

0x6dac,	// (0x0005a992) listscroll_gen_pane_ParamLimits

0x6dac,	// (0x0005a992) listscroll_gen_pane

0x6dc0,	// (0x0005a9a6) listscroll_set_pane

0x62da,	// (0x00059ec0) main_idle_act_pane

0x8ae4,	// (0x0005c6ca) main_idle_trad_pane

0x8ae4,	// (0x0005c6ca) main_list_empty_pane

0x8e2a,	// (0x0005ca10) main_midp_pane

0x8e36,	// (0x0005ca1c) main_pane_g1_ParamLimits

0x8e36,	// (0x0005ca1c) main_pane_g1

0x6dd6,	// (0x0005a9bc) popup_ai_message_window_ParamLimits

0x6dd6,	// (0x0005a9bc) popup_ai_message_window

0x6e7a,	// (0x0005aa60) popup_fep_china_uni_window_ParamLimits

0x6e7a,	// (0x0005aa60) popup_fep_china_uni_window

0x6ed4,	// (0x0005aaba) popup_fep_japan_candidate_window_ParamLimits

0x6ed4,	// (0x0005aaba) popup_fep_japan_candidate_window

0x6ef2,	// (0x0005aad8) popup_fep_japan_predictive_window_ParamLimits

0x6ef2,	// (0x0005aad8) popup_fep_japan_predictive_window

0x6f22,	// (0x0005ab08) popup_find_window

0x6f2f,	// (0x0005ab15) popup_grid_graphic_window_ParamLimits

0x6f2f,	// (0x0005ab15) popup_grid_graphic_window

0x6f59,	// (0x0005ab3f) popup_large_graphic_colour_window

0x6f7f,	// (0x0005ab65) popup_menu_window_ParamLimits

0x6f7f,	// (0x0005ab65) popup_menu_window

0x713b,	// (0x0005ad21) popup_note_image_window

0x7127,	// (0x0005ad0d) popup_note_wait_window_ParamLimits

0x7127,	// (0x0005ad0d) popup_note_wait_window

0x7127,	// (0x0005ad0d) popup_note_window_ParamLimits

0x7127,	// (0x0005ad0d) popup_note_window

0x7191,	// (0x0005ad77) popup_query_code_window_ParamLimits

0x7191,	// (0x0005ad77) popup_query_code_window

0x71a5,	// (0x0005ad8b) popup_query_data_code_window_ParamLimits

0x71a5,	// (0x0005ad8b) popup_query_data_code_window

0x71c2,	// (0x0005ada8) popup_query_data_window_ParamLimits

0x71c2,	// (0x0005ada8) popup_query_data_window

0x71de,	// (0x0005adc4) popup_query_sat_info_window_ParamLimits

0x71de,	// (0x0005adc4) popup_query_sat_info_window

0x7217,	// (0x0005adfd) popup_snote_single_graphic_window_ParamLimits

0x7217,	// (0x0005adfd) popup_snote_single_graphic_window

0x7217,	// (0x0005adfd) popup_snote_single_text_window_ParamLimits

0x7217,	// (0x0005adfd) popup_snote_single_text_window

0x722c,	// (0x0005ae12) popup_sub_window_general

0x735c,	// (0x0005af42) popup_window_general_ParamLimits

0x735c,	// (0x0005af42) popup_window_general

0x8e44,	// (0x0005ca2a) power_save_pane

0x6c36,	// (0x0005a81c) control_pane_g1_ParamLimits

0x6c36,	// (0x0005a81c) control_pane_g1

0x6c5d,	// (0x0005a843) control_pane_g2_ParamLimits

0x6c5d,	// (0x0005a843) control_pane_g2

0x8da7,	// (0x0005c98d) control_pane_g3_ParamLimits

0x8da7,	// (0x0005c98d) control_pane_g3

0x0007,

0xf783,	// (0x00063369) control_pane_g_ParamLimits

0xf783,	// (0x00063369) control_pane_g

0x6ca7,	// (0x0005a88d) control_pane_t1_ParamLimits

0x6ca7,	// (0x0005a88d) control_pane_t1

0x6cfb,	// (0x0005a8e1) control_pane_t2_ParamLimits

0x6cfb,	// (0x0005a8e1) control_pane_t2

0x0002,

0xf794,	// (0x0006337a) control_pane_t_ParamLimits

0xf794,	// (0x0006337a) control_pane_t

0x8ccc,	// (0x0005c8b2) navi_navi_volume_pane_cp1

0x8cd4,	// (0x0005c8ba) status_small_icon_pane

0x8cdc,	// (0x0005c8c2) status_small_pane_g1_ParamLimits

0x8cdc,	// (0x0005c8c2) status_small_pane_g1

0x8d10,	// (0x0005c8f6) status_small_pane_g2_ParamLimits

0x8d10,	// (0x0005c8f6) status_small_pane_g2

0x8d1c,	// (0x0005c902) status_small_pane_g3_ParamLimits

0x8d1c,	// (0x0005c902) status_small_pane_g3

0x8d28,	// (0x0005c90e) status_small_pane_g4_ParamLimits

0x8d28,	// (0x0005c90e) status_small_pane_g4

0x8d34,	// (0x0005c91a) status_small_pane_g5_ParamLimits

0x8d34,	// (0x0005c91a) status_small_pane_g5

0x8d42,	// (0x0005c928) status_small_pane_g6_ParamLimits

0x8d42,	// (0x0005c928) status_small_pane_g6

0x0007,

0xf772,	// (0x00063358) status_small_pane_g_ParamLimits

0xf772,	// (0x00063358) status_small_pane_g

0x8d71,	// (0x0005c957) status_small_pane_t1

0x8d93,	// (0x0005c979) status_small_wait_pane_ParamLimits

0x8d93,	// (0x0005c979) status_small_wait_pane

0x66af,	// (0x0005a295) aid_levels_signal_ParamLimits

0x66af,	// (0x0005a295) aid_levels_signal

0x66c1,	// (0x0005a2a7) signal_pane_g1_ParamLimits

0x66c1,	// (0x0005a2a7) signal_pane_g1

0x66d6,	// (0x0005a2bc) signal_pane_g2_ParamLimits

0x66d6,	// (0x0005a2bc) signal_pane_g2

0x0003,

0xf703,	// (0x000632e9) signal_pane_g_ParamLimits

0xf703,	// (0x000632e9) signal_pane_g

0x1351,	// (0x00054f37) context_pane_g1

0x5656,	// (0x0005923c) title_pane_g1

0x5680,	// (0x00059266) title_pane_t1

0xeb79,	// (0x0006275f) title_pane_t2

0xeb9f,	// (0x00062785) title_pane_t3

0x0002,

0xf557,	// (0x0006313d) title_pane_t

0x9238,	// (0x0005ce1e) aid_levels_battery_ParamLimits

0x9238,	// (0x0005ce1e) aid_levels_battery

0x924c,	// (0x0005ce32) battery_pane_g1_ParamLimits

0x924c,	// (0x0005ce32) battery_pane_g1

0x9262,	// (0x0005ce48) battery_pane_g2_ParamLimits

0x9262,	// (0x0005ce48) battery_pane_g2

0x0001,

0xf7a6,	// (0x0006338c) battery_pane_g_ParamLimits

0xf7a6,	// (0x0006338c) battery_pane_g

0xa4be,	// (0x0005e0a4) uni_indicator_pane_g1

0xa4d1,	// (0x0005e0b7) uni_indicator_pane_g2

0xa4e3,	// (0x0005e0c9) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00063502) uni_indicator_pane_g

0x6ac6,	// (0x0005a6ac) navi_icon_pane_ParamLimits

0x6ac6,	// (0x0005a6ac) navi_icon_pane

0x6a10,	// (0x0005a5f6) navi_midp_pane

0x6ae2,	// (0x0005a6c8) navi_navi_pane

0x6aec,	// (0x0005a6d2) navi_text_pane_ParamLimits

0x6aec,	// (0x0005a6d2) navi_text_pane

0xeb59,	// (0x0006273f) status_small_wait_pane_g1

0xedf0,	// (0x000629d6) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x000634fd) status_small_wait_pane_g

0xa1e5,	// (0x0005ddcb) navi_navi_icon_text_pane

0xa1ed,	// (0x0005ddd3) navi_navi_pane_g1_ParamLimits

0xa1ed,	// (0x0005ddd3) navi_navi_pane_g1

0xa1ff,	// (0x0005dde5) navi_navi_pane_g2_ParamLimits

0xa1ff,	// (0x0005dde5) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x000634cb) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x000634cb) navi_navi_pane_g

0xa211,	// (0x0005ddf7) navi_navi_tabs_pane

0xa21a,	// (0x0005de00) navi_navi_text_pane

0xa1e5,	// (0x0005ddcb) navi_navi_volume_pane

0xa1c1,	// (0x0005dda7) navi_text_pane_t1

0xa1b5,	// (0x0005dd9b) navi_icon_pane_g1

0xa108,	// (0x0005dcee) navi_navi_text_pane_t1

0x763c,	// (0x0005b222) navi_navi_volume_pane_g1

0x7644,	// (0x0005b22a) volume_small_pane

0xa06e,	// (0x0005dc54) navi_navi_icon_text_pane_g1

0xa076,	// (0x0005dc5c) navi_navi_icon_text_pane_t1

0x6ae2,	// (0x0005a6c8) navi_tabs_2_long_pane

0x6ae2,	// (0x0005a6c8) navi_tabs_2_pane

0x6ae2,	// (0x0005a6c8) navi_tabs_3_long_pane

0x6ae2,	// (0x0005a6c8) navi_tabs_3_pane

0x6ae2,	// (0x0005a6c8) navi_tabs_4_pane

0x761c,	// (0x0005b202) tabs_2_active_pane_ParamLimits

0x761c,	// (0x0005b202) tabs_2_active_pane

0x762c,	// (0x0005b212) tabs_2_passive_pane_ParamLimits

0x762c,	// (0x0005b212) tabs_2_passive_pane

0x75ea,	// (0x0005b1d0) tabs_3_active_pane_ParamLimits

0x75ea,	// (0x0005b1d0) tabs_3_active_pane

0x75fa,	// (0x0005b1e0) tabs_3_passive_pane_ParamLimits

0x75fa,	// (0x0005b1e0) tabs_3_passive_pane

0x760b,	// (0x0005b1f1) tabs_3_passive_pane_cp_ParamLimits

0x760b,	// (0x0005b1f1) tabs_3_passive_pane_cp

0x75a6,	// (0x0005b18c) tabs_4_active_pane_ParamLimits

0x75a6,	// (0x0005b18c) tabs_4_active_pane

0x75b7,	// (0x0005b19d) tabs_4_passive_pane_ParamLimits

0x75b7,	// (0x0005b19d) tabs_4_passive_pane

0x75c8,	// (0x0005b1ae) tabs_4_passive_pane_cp_ParamLimits

0x75c8,	// (0x0005b1ae) tabs_4_passive_pane_cp

0x75d9,	// (0x0005b1bf) tabs_4_passive_pane_cp2_ParamLimits

0x75d9,	// (0x0005b1bf) tabs_4_passive_pane_cp2

0x7582,	// (0x0005b168) tabs_2_long_active_pane_ParamLimits

0x7582,	// (0x0005b168) tabs_2_long_active_pane

0x7594,	// (0x0005b17a) tabs_2_long_passive_pane_ParamLimits

0x7594,	// (0x0005b17a) tabs_2_long_passive_pane

0x753d,	// (0x0005b123) tabs_3_long_active_pane_ParamLimits

0x753d,	// (0x0005b123) tabs_3_long_active_pane

0x7556,	// (0x0005b13c) tabs_3_long_passive_pane_ParamLimits

0x7556,	// (0x0005b13c) tabs_3_long_passive_pane

0x7569,	// (0x0005b14f) tabs_3_long_passive_pane_cp_ParamLimits

0x7569,	// (0x0005b14f) tabs_3_long_passive_pane_cp

0x74e3,	// (0x0005b0c9) volume_small_pane_g1

0x74ec,	// (0x0005b0d2) volume_small_pane_g2

0x74f5,	// (0x0005b0db) volume_small_pane_g3

0x74fe,	// (0x0005b0e4) volume_small_pane_g4

0x7507,	// (0x0005b0ed) volume_small_pane_g5

0x7510,	// (0x0005b0f6) volume_small_pane_g6

0x7519,	// (0x0005b0ff) volume_small_pane_g7

0x7522,	// (0x0005b108) volume_small_pane_g8

0x752b,	// (0x0005b111) volume_small_pane_g9

0x7534,	// (0x0005b11a) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00063497) volume_small_pane_g

0xebb1,	// (0x00062797) bg_active_tab_pane_cp2_ParamLimits

0xebb1,	// (0x00062797) bg_active_tab_pane_cp2

0x56e8,	// (0x000592ce) tabs_3_active_pane_g1

0x56f0,	// (0x000592d6) tabs_3_active_pane_t1

0xebb1,	// (0x00062797) bg_passive_tab_pane_cp2_ParamLimits

0xebb1,	// (0x00062797) bg_passive_tab_pane_cp2

0x56e8,	// (0x000592ce) tabs_3_passive_pane_g1

0x56f0,	// (0x000592d6) tabs_3_passive_pane_t1

0xebb1,	// (0x00062797) bg_active_tab_pane_cp3_ParamLimits

0xebb1,	// (0x00062797) bg_active_tab_pane_cp3

0x5702,	// (0x000592e8) tabs_4_active_pane_g1

0x570a,	// (0x000592f0) tabs_4_active_pane_t1

0xebb1,	// (0x00062797) bg_passive_tab_pane_cp3_ParamLimits

0xebb1,	// (0x00062797) bg_passive_tab_pane_cp3

0x5702,	// (0x000592e8) tabs_4_1_passive_pane_g1

0x570a,	// (0x000592f0) tabs_4_1_passive_pane_t1

0x8e2a,	// (0x0005ca10) list_highlight_pane_cp2

0xa726,	// (0x0005e30c) list_set_pane_ParamLimits

0xa726,	// (0x0005e30c) list_set_pane

0xa7c8,	// (0x0005e3ae) main_pane_set_t1_ParamLimits

0xa7c8,	// (0x0005e3ae) main_pane_set_t1

0xa7e8,	// (0x0005e3ce) main_pane_set_t2_ParamLimits

0xa7e8,	// (0x0005e3ce) main_pane_set_t2

0xa7fc,	// (0x0005e3e2) main_pane_set_t3_ParamLimits

0xa7fc,	// (0x0005e3e2) main_pane_set_t3

0xa80e,	// (0x0005e3f4) main_pane_set_t4_ParamLimits

0xa80e,	// (0x0005e3f4) main_pane_set_t4

0x0003,

0xf981,	// (0x00063567) main_pane_set_t_ParamLimits

0xf981,	// (0x00063567) main_pane_set_t

0xa820,	// (0x0005e406) setting_code_pane

0xa82c,	// (0x0005e412) setting_slider_graphic_pane

0xa82c,	// (0x0005e412) setting_slider_pane

0xa82c,	// (0x0005e412) setting_text_pane

0xa82c,	// (0x0005e412) setting_volume_pane

0x571c,	// (0x00059302) volume_set_pane

0xebb1,	// (0x00062797) bg_set_opt_pane_cp

0x5724,	// (0x0005930a) setting_slider_pane_t1

0x573d,	// (0x00059323) setting_slider_pane_t2

0x5757,	// (0x0005933d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00063144) setting_slider_pane_t

0x576f,	// (0x00059355) slider_set_pane

0xeb63,	// (0x00062749) bg_set_opt_pane_cp2

0xebbf,	// (0x000627a5) setting_slider_graphic_pane_g1

0x5785,	// (0x0005936b) setting_slider_graphic_pane_t1

0x5795,	// (0x0005937b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006314b) setting_slider_graphic_pane_t

0x57a5,	// (0x0005938b) slider_set_pane_cp

0xeb63,	// (0x00062749) input_focus_pane_cp1

0xa6e5,	// (0x0005e2cb) list_set_text_pane

0xeb59,	// (0x0006273f) setting_text_pane_g1

0xeb63,	// (0x00062749) input_focus_pane_cp2

0xeb59,	// (0x0006273f) setting_code_pane_g1

0xebc8,	// (0x000627ae) setting_code_pane_t1

0x3451,	// (0x00057037) set_text_pane_t1_ParamLimits

0x3451,	// (0x00057037) set_text_pane_t1

0xf1c4,	// (0x00062daa) set_opt_bg_pane_g1

0xf1cc,	// (0x00062db2) set_opt_bg_pane_g2

0xa6bf,	// (0x0005e2a5) set_opt_bg_pane_g3

0xf1dc,	// (0x00062dc2) set_opt_bg_pane_g4

0xf1e4,	// (0x00062dca) set_opt_bg_pane_g5

0xf1ec,	// (0x00062dd2) set_opt_bg_pane_g6

0xa6c9,	// (0x0005e2af) set_opt_bg_pane_g7

0xa6d1,	// (0x0005e2b7) set_opt_bg_pane_g8

0xa6db,	// (0x0005e2c1) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00063554) set_opt_bg_pane_g

0xa6b2,	// (0x0005e298) slider_set_pane_g1

0x76c3,	// (0x0005b2a9) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00063545) slider_set_pane_g

0x764d,	// (0x0005b233) volume_set_pane_g1

0x7655,	// (0x0005b23b) volume_set_pane_g2

0x765d,	// (0x0005b243) volume_set_pane_g3

0x7665,	// (0x0005b24b) volume_set_pane_g4

0x766d,	// (0x0005b253) volume_set_pane_g5

0x7675,	// (0x0005b25b) volume_set_pane_g6

0x767d,	// (0x0005b263) volume_set_pane_g7

0x7685,	// (0x0005b26b) volume_set_pane_g8

0x768d,	// (0x0005b273) volume_set_pane_g9

0x7695,	// (0x0005b27b) volume_set_pane_g10

0x0009,

0xf937,	// (0x0006351d) volume_set_pane_g

0x57ad,	// (0x00059393) indicator_pane_ParamLimits

0x57ad,	// (0x00059393) indicator_pane

0x57b9,	// (0x0005939f) main_idle_pane_g2_ParamLimits

0x57b9,	// (0x0005939f) main_idle_pane_g2

0x57e1,	// (0x000593c7) main_pane_idle_g1_ParamLimits

0x57e1,	// (0x000593c7) main_pane_idle_g1

0xebd6,	// (0x000627bc) popup_clock_digital_analogue_window_ParamLimits

0xebd6,	// (0x000627bc) popup_clock_digital_analogue_window

0x57ee,	// (0x000593d4) soft_indicator_pane_ParamLimits

0x57ee,	// (0x000593d4) soft_indicator_pane

0x57fa,	// (0x000593e0) wallpaper_pane_ParamLimits

0x57fa,	// (0x000593e0) wallpaper_pane

0xeb59,	// (0x0006273f) wallpaper_pane_g1

0x5806,	// (0x000593ec) indicator_pane_g1_ParamLimits

0x5806,	// (0x000593ec) indicator_pane_g1

0xacb1,	// (0x0005e897) navi_navi_icon_text_pane_srt_g1

0xec04,	// (0x000627ea) soft_indicator_pane_t1

0xec1e,	// (0x00062804) aid_ps_area_pane

0x5812,	// (0x000593f8) aid_ps_clock_pane

0xec2f,	// (0x00062815) aid_ps_indicator_pane

0xec3b,	// (0x00062821) indicator_ps_pane_ParamLimits

0xec3b,	// (0x00062821) indicator_ps_pane

0xec4a,	// (0x00062830) power_save_pane_g1_ParamLimits

0xec4a,	// (0x00062830) power_save_pane_g1

0xec56,	// (0x0006283c) power_save_pane_g2_ParamLimits

0xec56,	// (0x0006283c) power_save_pane_g2

0x526b,	// (0x00058e51) aid_navinavi_width_pane

0xec1e,	// (0x00062804) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00063150) power_save_pane_g_ParamLimits

0xf56a,	// (0x00063150) power_save_pane_g

0xec64,	// (0x0006284a) power_save_pane_t1_ParamLimits

0xec64,	// (0x0006284a) power_save_pane_t1

0x5812,	// (0x000593f8) aid_ps_clock_pane_ParamLimits

0xec2f,	// (0x00062815) aid_ps_indicator_pane_ParamLimits

0xec76,	// (0x0006285c) power_save_pane_t4_ParamLimits

0xec76,	// (0x0006285c) power_save_pane_t4

0x0001,

0xf56f,	// (0x00063155) power_save_pane_t_ParamLimits

0xf56f,	// (0x00063155) power_save_pane_t

0xeca0,	// (0x00062886) power_save_t3_ParamLimits

0xeca0,	// (0x00062886) power_save_t3

0xec8b,	// (0x00062871) power_save_t2_ParamLimits

0xec8b,	// (0x00062871) power_save_t2

0xecb5,	// (0x0006289b) indicator_ps_pane_g1

0x5820,	// (0x00059406) ai_gene_pane_ParamLimits

0x5820,	// (0x00059406) ai_gene_pane

0x582c,	// (0x00059412) ai_links_pane_ParamLimits

0x582c,	// (0x00059412) ai_links_pane

0x5838,	// (0x0005941e) indicator_pane_cp1_ParamLimits

0x5838,	// (0x0005941e) indicator_pane_cp1

0x5844,	// (0x0005942a) main_pane_idle_g1_cp_ParamLimits

0x5844,	// (0x0005942a) main_pane_idle_g1_cp

0x5850,	// (0x00059436) popup_ai_links_title_window

0x5859,	// (0x0005943f) soft_indicator_pane_cp1_ParamLimits

0x5859,	// (0x0005943f) soft_indicator_pane_cp1

0xa4ac,	// (0x0005e092) ai_links_pane_g1

0xa4b5,	// (0x0005e09b) grid_ai_links_pane

0xa48f,	// (0x0005e075) ai_gene_pane_1

0xa49a,	// (0x0005e080) ai_gene_pane_2

0xa4a3,	// (0x0005e089) list_highlight_pane_cp4

0xa473,	// (0x0005e059) cell_ai_link_pane_ParamLimits

0xa473,	// (0x0005e059) cell_ai_link_pane

0xa46b,	// (0x0005e051) cell_ai_link_pane_g1

0xedf0,	// (0x000629d6) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x000634f8) cell_ai_link_pane_g

0xeb63,	// (0x00062749) grid_highlight_cp2

0xeb63,	// (0x00062749) bg_popup_sub_pane_cp1

0xeccc,	// (0x000628b2) popup_ai_links_title_window_t1

0xa3bb,	// (0x0005dfa1) ai_gene_pane_1_g1_ParamLimits

0xa3bb,	// (0x0005dfa1) ai_gene_pane_1_g1

0xa3c7,	// (0x0005dfad) ai_gene_pane_1_g2_ParamLimits

0xa3c7,	// (0x0005dfad) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x000634ee) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x000634ee) ai_gene_pane_1_g

0xa3d4,	// (0x0005dfba) ai_gene_pane_1_t1_ParamLimits

0xa3d4,	// (0x0005dfba) ai_gene_pane_1_t1

0xa408,	// (0x0005dfee) grid_ai_soft_ind_pane

0xa3a6,	// (0x0005df8c) ai_gene_pane_2_t1_ParamLimits

0xa3a6,	// (0x0005df8c) ai_gene_pane_2_t1

0x5865,	// (0x0005944b) main_pane_empty_t1_ParamLimits

0x5865,	// (0x0005944b) main_pane_empty_t1

0x587d,	// (0x00059463) main_pane_empty_t2_ParamLimits

0x587d,	// (0x00059463) main_pane_empty_t2

0x5892,	// (0x00059478) main_pane_empty_t3_ParamLimits

0x5892,	// (0x00059478) main_pane_empty_t3

0x58a4,	// (0x0005948a) main_pane_empty_t4_ParamLimits

0x58a4,	// (0x0005948a) main_pane_empty_t4

0x58b6,	// (0x0005949c) main_pane_empty_t5_ParamLimits

0x58b6,	// (0x0005949c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006315a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006315a) main_pane_empty_t

0xf215,	// (0x00062dfb) bg_popup_window_pane_ParamLimits

0xf215,	// (0x00062dfb) bg_popup_window_pane

0xa116,	// (0x0005dcfc) find_popup_pane_cp2_ParamLimits

0xa116,	// (0x0005dcfc) find_popup_pane_cp2

0xa122,	// (0x0005dd08) heading_pane_ParamLimits

0xa122,	// (0x0005dd08) heading_pane

0xeb63,	// (0x00062749) bg_popup_sub_pane

0xa090,	// (0x0005dc76) bg_popup_window_pane_g1_ParamLimits

0xa090,	// (0x0005dc76) bg_popup_window_pane_g1

0xa09c,	// (0x0005dc82) bg_popup_window_pane_g2_ParamLimits

0xa09c,	// (0x0005dc82) bg_popup_window_pane_g2

0xa0a8,	// (0x0005dc8e) bg_popup_window_pane_g3_ParamLimits

0xa0a8,	// (0x0005dc8e) bg_popup_window_pane_g3

0xa0b4,	// (0x0005dc9a) bg_popup_window_pane_g4_ParamLimits

0xa0b4,	// (0x0005dc9a) bg_popup_window_pane_g4

0xa0c0,	// (0x0005dca6) bg_popup_window_pane_g5_ParamLimits

0xa0c0,	// (0x0005dca6) bg_popup_window_pane_g5

0xa0cc,	// (0x0005dcb2) bg_popup_window_pane_g6_ParamLimits

0xa0cc,	// (0x0005dcb2) bg_popup_window_pane_g6

0xa0d8,	// (0x0005dcbe) bg_popup_window_pane_g7_ParamLimits

0xa0d8,	// (0x0005dcbe) bg_popup_window_pane_g7

0xa0e4,	// (0x0005dcca) bg_popup_window_pane_g8_ParamLimits

0xa0e4,	// (0x0005dcca) bg_popup_window_pane_g8

0xa0f0,	// (0x0005dcd6) bg_popup_window_pane_g9_ParamLimits

0xa0f0,	// (0x0005dcd6) bg_popup_window_pane_g9

0xa0fc,	// (0x0005dce2) bg_popup_window_pane_g10_ParamLimits

0xa0fc,	// (0x0005dce2) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x000634b6) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x000634b6) bg_popup_window_pane_g

0xa025,	// (0x0005dc0b) bg_popup_heading_pane_ParamLimits

0xa025,	// (0x0005dc0b) bg_popup_heading_pane

0x77ca,	// (0x0005b3b0) tabs_4_passive_pane_cp_srt_ParamLimits

0x77ca,	// (0x0005b3b0) tabs_4_passive_pane_cp_srt

0x77dc,	// (0x0005b3c2) tabs_4_passive_pane_srt_ParamLimits

0xa039,	// (0x0005dc1f) heading_pane_g2

0x77dc,	// (0x0005b3c2) tabs_4_passive_pane_srt

0x8e2a,	// (0x0005ca10) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e2a,	// (0x0005ca10) bg_passive_tab_pane_cp3_srt

0xa041,	// (0x0005dc27) heading_pane_t1_ParamLimits

0xa041,	// (0x0005dc27) heading_pane_t1

0xa058,	// (0x0005dc3e) heading_pane_t2_ParamLimits

0xa058,	// (0x0005dc3e) heading_pane_t2

0x0001,

0xf8cb,	// (0x000634b1) heading_pane_t_ParamLimits

0xf8cb,	// (0x000634b1) heading_pane_t

0x9b62,	// (0x0005d748) bg_popup_heading_pane_g1

0x9c11,	// (0x0005d7f7) bg_popup_heading_pane_g2

0x9c1b,	// (0x0005d801) bg_popup_heading_pane_g3

0x9c25,	// (0x0005d80b) bg_popup_heading_pane_g4

0x9c2f,	// (0x0005d815) bg_popup_heading_pane_g5

0x9c39,	// (0x0005d81f) bg_popup_heading_pane_g6

0x9c41,	// (0x0005d827) bg_popup_heading_pane_g7

0x9c49,	// (0x0005d82f) bg_popup_heading_pane_g8

0x9c53,	// (0x0005d839) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0006346d) bg_popup_heading_pane_g

0x9337,	// (0x0005cf1d) bg_popup_sub_pane_g1

0x9347,	// (0x0005cf2d) bg_popup_sub_pane_g2

0x933f,	// (0x0005cf25) bg_popup_sub_pane_g3

0x9357,	// (0x0005cf3d) bg_popup_sub_pane_g4

0x934f,	// (0x0005cf35) bg_popup_sub_pane_g5

0x935f,	// (0x0005cf45) bg_popup_sub_pane_g6

0x9367,	// (0x0005cf4d) bg_popup_sub_pane_g7

0x9377,	// (0x0005cf5d) bg_popup_sub_pane_g8

0x936f,	// (0x0005cf55) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00063447) bg_popup_sub_pane_g

0xecdb,	// (0x000628c1) bg_popup_window_pane_cp5_ParamLimits

0xecdb,	// (0x000628c1) bg_popup_window_pane_cp5

0xecf7,	// (0x000628dd) popup_note_window_g1_ParamLimits

0xecf7,	// (0x000628dd) popup_note_window_g1

0xed03,	// (0x000628e9) popup_note_window_t1_ParamLimits

0xed03,	// (0x000628e9) popup_note_window_t1

0xed19,	// (0x000628ff) popup_note_window_t2_ParamLimits

0xed19,	// (0x000628ff) popup_note_window_t2

0xed2f,	// (0x00062915) popup_note_window_t3_ParamLimits

0xed2f,	// (0x00062915) popup_note_window_t3

0xed45,	// (0x0006292b) popup_note_window_t4_ParamLimits

0xed45,	// (0x0006292b) popup_note_window_t4

0xed6d,	// (0x00062953) popup_note_window_t5_ParamLimits

0xed6d,	// (0x00062953) popup_note_window_t5

0x0004,

0xf57f,	// (0x00063165) popup_note_window_t_ParamLimits

0xf57f,	// (0x00063165) popup_note_window_t

0xed91,	// (0x00062977) bg_popup_window_pane_cp6_ParamLimits

0xed91,	// (0x00062977) bg_popup_window_pane_cp6

0x9ade,	// (0x0005d6c4) popup_note_image_window_g1_ParamLimits

0x9ade,	// (0x0005d6c4) popup_note_image_window_g1

0x9aea,	// (0x0005d6d0) popup_note_image_window_g2_ParamLimits

0x9aea,	// (0x0005d6d0) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0006343b) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0006343b) popup_note_image_window_g

0x9b03,	// (0x0005d6e9) popup_note_image_window_t1_ParamLimits

0x9b03,	// (0x0005d6e9) popup_note_image_window_t1

0x9b1c,	// (0x0005d702) popup_note_image_window_t2_ParamLimits

0x9b1c,	// (0x0005d702) popup_note_image_window_t2

0x9b35,	// (0x0005d71b) popup_note_image_window_t3_ParamLimits

0x9b35,	// (0x0005d71b) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00063440) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00063440) popup_note_image_window_t

0x99a7,	// (0x0005d58d) bg_popup_window_pane_cp7_ParamLimits

0x99a7,	// (0x0005d58d) bg_popup_window_pane_cp7

0x99d7,	// (0x0005d5bd) popup_note_wait_window_g1_ParamLimits

0x99d7,	// (0x0005d5bd) popup_note_wait_window_g1

0x99e3,	// (0x0005d5c9) popup_note_wait_window_g2_ParamLimits

0x99e3,	// (0x0005d5c9) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00063429) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00063429) popup_note_wait_window_g

0x99fb,	// (0x0005d5e1) popup_note_wait_window_t1_ParamLimits

0x99fb,	// (0x0005d5e1) popup_note_wait_window_t1

0x9a22,	// (0x0005d608) popup_note_wait_window_t2_ParamLimits

0x9a22,	// (0x0005d608) popup_note_wait_window_t2

0x9a3f,	// (0x0005d625) popup_note_wait_window_t3_ParamLimits

0x9a3f,	// (0x0005d625) popup_note_wait_window_t3

0x9a52,	// (0x0005d638) popup_note_wait_window_t4_ParamLimits

0x9a52,	// (0x0005d638) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00063430) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00063430) popup_note_wait_window_t

0x9a77,	// (0x0005d65d) wait_bar_pane_ParamLimits

0x9a77,	// (0x0005d65d) wait_bar_pane

0xeb63,	// (0x00062749) wait_anim_pane

0xeb63,	// (0x00062749) wait_border_pane

0xeb59,	// (0x0006273f) wait_anim_pane_g1

0xeb59,	// (0x0006273f) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000632e4) wait_anim_pane_g

0x9953,	// (0x0005d539) wait_border_pane_g1

0x995e,	// (0x0005d544) wait_border_pane_g2

0x9967,	// (0x0005d54d) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00063422) wait_border_pane_g

0x97be,	// (0x0005d3a4) bg_popup_window_pane_cp16_ParamLimits

0x97be,	// (0x0005d3a4) bg_popup_window_pane_cp16

0x98be,	// (0x0005d4a4) indicator_popup_pane_cp4_ParamLimits

0x98be,	// (0x0005d4a4) indicator_popup_pane_cp4

0x98d2,	// (0x0005d4b8) popup_query_data_window_t1_ParamLimits

0x98d2,	// (0x0005d4b8) popup_query_data_window_t1

0x98e4,	// (0x0005d4ca) popup_query_data_window_t2_ParamLimits

0x98e4,	// (0x0005d4ca) popup_query_data_window_t2

0x98fd,	// (0x0005d4e3) popup_query_data_window_t3_ParamLimits

0x98fd,	// (0x0005d4e3) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0006341b) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0006341b) popup_query_data_window_t

0x9917,	// (0x0005d4fd) query_popup_data_pane_ParamLimits

0x9917,	// (0x0005d4fd) query_popup_data_pane

0x992b,	// (0x0005d511) query_popup_data_pane_cp1_ParamLimits

0x992b,	// (0x0005d511) query_popup_data_pane_cp1

0x97be,	// (0x0005d3a4) bg_popup_window_pane_cp10_ParamLimits

0x97be,	// (0x0005d3a4) bg_popup_window_pane_cp10

0x97f0,	// (0x0005d3d6) indicator_popup_pane_ParamLimits

0x97f0,	// (0x0005d3d6) indicator_popup_pane

0x9812,	// (0x0005d3f8) popup_query_code_window_t1_ParamLimits

0x9812,	// (0x0005d3f8) popup_query_code_window_t1

0x982c,	// (0x0005d412) popup_query_code_window_t2_ParamLimits

0x982c,	// (0x0005d412) popup_query_code_window_t2

0x9875,	// (0x0005d45b) popup_query_code_window_t3_ParamLimits

0x9875,	// (0x0005d45b) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00063414) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00063414) popup_query_code_window_t

0x98a4,	// (0x0005d48a) query_popup_pane_ParamLimits

0x98a4,	// (0x0005d48a) query_popup_pane

0xed91,	// (0x00062977) bg_popup_window_pane_cp15_ParamLimits

0xed91,	// (0x00062977) bg_popup_window_pane_cp15

0x58ca,	// (0x000594b0) indicator_popup_pane_cp1_ParamLimits

0x58ca,	// (0x000594b0) indicator_popup_pane_cp1

0x58dd,	// (0x000594c3) indicator_popup_pane_cp2_ParamLimits

0x58dd,	// (0x000594c3) indicator_popup_pane_cp2

0x58f0,	// (0x000594d6) popup_query_data_code_window_g1_ParamLimits

0x58f0,	// (0x000594d6) popup_query_data_code_window_g1

0xedaf,	// (0x00062995) popup_query_data_code_window_t1_ParamLimits

0xedaf,	// (0x00062995) popup_query_data_code_window_t1

0xedc1,	// (0x000629a7) popup_query_data_code_window_t2_ParamLimits

0xedc1,	// (0x000629a7) popup_query_data_code_window_t2

0x5903,	// (0x000594e9) popup_query_data_code_window_t3_ParamLimits

0x5903,	// (0x000594e9) popup_query_data_code_window_t3

0x5919,	// (0x000594ff) popup_query_data_code_window_t4_ParamLimits

0x5919,	// (0x000594ff) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00063170) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00063170) popup_query_data_code_window_t

0x73c6,	// (0x0005afac) list_single_midp_graphic_pane_g3

0x5931,	// (0x00059517) query_popup_data_pane_cp2_ParamLimits

0x5944,	// (0x0005952a) query_popup_pane_cp2_ParamLimits

0x5944,	// (0x0005952a) query_popup_pane_cp2

0xeb63,	// (0x00062749) bg_popup_window_pane_cp11

0x97b6,	// (0x0005d39c) heading_pane_cp5

0xee1d,	// (0x00062a03) listscroll_popup_info_pane

0xeb63,	// (0x00062749) input_focus_pane_cp3

0xedd3,	// (0x000629b9) query_popup_pane_t1

0xede1,	// (0x000629c7) list_popup_info_pane_ParamLimits

0xede1,	// (0x000629c7) list_popup_info_pane

0xedf0,	// (0x000629d6) listscroll_popup_info_pane_g1

0xedf8,	// (0x000629de) scroll_pane_cp7

0x5957,	// (0x0005953d) popup_info_list_pane_t1_ParamLimits

0x5957,	// (0x0005953d) popup_info_list_pane_t1

0x5971,	// (0x00059557) popup_info_list_pane_t2_ParamLimits

0x5971,	// (0x00059557) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00063179) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00063179) popup_info_list_pane_t

0xeb63,	// (0x00062749) bg_popup_window_pane_cp12

0xaccb,	// (0x0005e8b1) find_popup_pane

0xebb1,	// (0x00062797) bg_popup_window_pane_cp3

0xee02,	// (0x000629e8) heading_pane_cp3

0xee0e,	// (0x000629f4) listscroll_popup_graphic_pane

0xeb63,	// (0x00062749) bg_popup_window_pane_cp4

0x59db,	// (0x000595c1) heading_pane_cp4

0xee1d,	// (0x00062a03) listscroll_popup_colour_pane

0x59e5,	// (0x000595cb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x59e5,	// (0x000595cb) cell_large_graphic_colour_none_popup_pane

0x59f9,	// (0x000595df) grid_large_graphic_colour_popup_pane_ParamLimits

0x59f9,	// (0x000595df) grid_large_graphic_colour_popup_pane

0x5a21,	// (0x00059607) listscroll_popup_colour_pane_g1_ParamLimits

0x5a21,	// (0x00059607) listscroll_popup_colour_pane_g1

0x5a38,	// (0x0005961e) listscroll_popup_colour_pane_g2_ParamLimits

0x5a38,	// (0x0005961e) listscroll_popup_colour_pane_g2

0x5a4f,	// (0x00059635) listscroll_popup_colour_pane_g3_ParamLimits

0x5a4f,	// (0x00059635) listscroll_popup_colour_pane_g3

0x5a5f,	// (0x00059645) listscroll_popup_colour_pane_g4_ParamLimits

0x5a5f,	// (0x00059645) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006317e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006317e) listscroll_popup_colour_pane_g

0xee25,	// (0x00062a0b) scroll_pane_cp6_ParamLimits

0xee25,	// (0x00062a0b) scroll_pane_cp6

0x5a6f,	// (0x00059655) cell_large_graphic_colour_popup_pane_ParamLimits

0x5a6f,	// (0x00059655) cell_large_graphic_colour_popup_pane

0x5a8e,	// (0x00059674) cell_large_graphic_colour_none_popup_pane_t1

0xeb63,	// (0x00062749) grid_highlight_pane_cp5

0xee37,	// (0x00062a1d) cell_large_graphic_colour_popup_pane_g1

0xee3f,	// (0x00062a25) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00063187) cell_large_graphic_colour_popup_pane_g

0xee47,	// (0x00062a2d) cell_large_graphic_colour_popup_pane_g2_copy1

0xee50,	// (0x00062a36) grid_highlight_pane_cp4

0xee58,	// (0x00062a3e) bg_popup_window_pane_cp8_ParamLimits

0xee58,	// (0x00062a3e) bg_popup_window_pane_cp8

0x5a9d,	// (0x00059683) popup_snote_single_text_window_g1_ParamLimits

0x5a9d,	// (0x00059683) popup_snote_single_text_window_g1

0x5aaf,	// (0x00059695) popup_snote_single_text_window_t1_ParamLimits

0x5aaf,	// (0x00059695) popup_snote_single_text_window_t1

0x5ac2,	// (0x000596a8) popup_snote_single_text_window_t2_ParamLimits

0x5ac2,	// (0x000596a8) popup_snote_single_text_window_t2

0x5ad5,	// (0x000596bb) popup_snote_single_text_window_t3_ParamLimits

0x5ad5,	// (0x000596bb) popup_snote_single_text_window_t3

0x5b0e,	// (0x000596f4) popup_snote_single_text_window_t4_ParamLimits

0x5b0e,	// (0x000596f4) popup_snote_single_text_window_t4

0x5b42,	// (0x00059728) popup_snote_single_text_window_t5_ParamLimits

0x5b42,	// (0x00059728) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006318c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006318c) popup_snote_single_text_window_t

0xee73,	// (0x00062a59) bg_popup_window_pane_cp9_ParamLimits

0xee73,	// (0x00062a59) bg_popup_window_pane_cp9

0x5a9d,	// (0x00059683) popup_snote_single_graphic_window_g1_ParamLimits

0x5a9d,	// (0x00059683) popup_snote_single_graphic_window_g1

0xee81,	// (0x00062a67) popup_snote_single_graphic_window_g2_ParamLimits

0xee81,	// (0x00062a67) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00063197) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00063197) popup_snote_single_graphic_window_g

0xee8d,	// (0x00062a73) popup_snote_single_graphic_window_t1_ParamLimits

0xee8d,	// (0x00062a73) popup_snote_single_graphic_window_t1

0xeea0,	// (0x00062a86) popup_snote_single_graphic_window_t2_ParamLimits

0xeea0,	// (0x00062a86) popup_snote_single_graphic_window_t2

0x5b71,	// (0x00059757) popup_snote_single_graphic_window_t3_ParamLimits

0x5b71,	// (0x00059757) popup_snote_single_graphic_window_t3

0x5baa,	// (0x00059790) popup_snote_single_graphic_window_t4_ParamLimits

0x5baa,	// (0x00059790) popup_snote_single_graphic_window_t4

0x5bde,	// (0x000597c4) popup_snote_single_graphic_window_t5_ParamLimits

0x5bde,	// (0x000597c4) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006319c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006319c) popup_snote_single_graphic_window_t

0xac0d,	// (0x0005e7f3) grid_graphic_popup_pane_ParamLimits

0xac0d,	// (0x0005e7f3) grid_graphic_popup_pane

0xac37,	// (0x0005e81d) listscroll_popup_graphic_pane_g1_ParamLimits

0xac37,	// (0x0005e81d) listscroll_popup_graphic_pane_g1

0xac4b,	// (0x0005e831) listscroll_popup_graphic_pane_g2_ParamLimits

0xac4b,	// (0x0005e831) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00063591) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00063591) listscroll_popup_graphic_pane_g

0xac5f,	// (0x0005e845) scroll_pane_cp5

0xabac,	// (0x0005e792) cell_graphic_popup_pane_ParamLimits

0xabac,	// (0x0005e792) cell_graphic_popup_pane

0xab8d,	// (0x0005e773) cell_graphic_popup_pane_g1

0xab95,	// (0x0005e77b) cell_graphic_popup_pane_g2

0xee47,	// (0x00062a2d) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0006358a) cell_graphic_popup_pane_g

0xab9e,	// (0x0005e784) cell_graphic_popup_pane_t2

0xee50,	// (0x00062a36) grid_highlight_pane_cp3

0xeec5,	// (0x00062aab) list_gen_pane_ParamLimits

0xeec5,	// (0x00062aab) list_gen_pane

0xeeed,	// (0x00062ad3) scroll_pane

0xaae5,	// (0x0005e6cb) bg_list_pane_g1_ParamLimits

0xaae5,	// (0x0005e6cb) bg_list_pane_g1

0xab02,	// (0x0005e6e8) bg_list_pane_g2_ParamLimits

0xab02,	// (0x0005e6e8) bg_list_pane_g2

0xab17,	// (0x0005e6fd) bg_list_pane_g3_ParamLimits

0xab17,	// (0x0005e6fd) bg_list_pane_g3

0xab2b,	// (0x0005e711) bg_list_pane_g4_ParamLimits

0xab2b,	// (0x0005e711) bg_list_pane_g4

0xab3f,	// (0x0005e725) bg_list_pane_g5_ParamLimits

0xab3f,	// (0x0005e725) bg_list_pane_g5

0x0004,

0xf999,	// (0x0006357f) bg_list_pane_g_ParamLimits

0xf999,	// (0x0006357f) bg_list_pane_g

0x776d,	// (0x0005b353) list_double2_graphic_large_graphic_pane_ParamLimits

0x776d,	// (0x0005b353) list_double2_graphic_large_graphic_pane

0x776d,	// (0x0005b353) list_double2_graphic_pane_ParamLimits

0x776d,	// (0x0005b353) list_double2_graphic_pane

0x776d,	// (0x0005b353) list_double2_large_graphic_pane_ParamLimits

0x776d,	// (0x0005b353) list_double2_large_graphic_pane

0x776d,	// (0x0005b353) list_double2_pane_ParamLimits

0x776d,	// (0x0005b353) list_double2_pane

0x776d,	// (0x0005b353) list_double_graphic_heading_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_graphic_heading_pane

0x776d,	// (0x0005b353) list_double_graphic_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_graphic_pane

0x776d,	// (0x0005b353) list_double_heading_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_heading_pane

0x776d,	// (0x0005b353) list_double_large_graphic_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_large_graphic_pane

0x776d,	// (0x0005b353) list_double_number_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_number_pane

0x776d,	// (0x0005b353) list_double_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_pane

0x776d,	// (0x0005b353) list_double_time_pane_ParamLimits

0x776d,	// (0x0005b353) list_double_time_pane

0x776d,	// (0x0005b353) list_setting_number_pane_ParamLimits

0x776d,	// (0x0005b353) list_setting_number_pane

0x776d,	// (0x0005b353) list_setting_pane_ParamLimits

0x776d,	// (0x0005b353) list_setting_pane

0xa8af,	// (0x0005e495) list_single_2graphic_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_2graphic_pane

0xa8af,	// (0x0005e495) list_single_graphic_heading_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_graphic_heading_pane

0xa8af,	// (0x0005e495) list_single_graphic_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_graphic_pane

0xa8af,	// (0x0005e495) list_single_heading_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_heading_pane

0xa90a,	// (0x0005e4f0) list_single_large_graphic_pane_ParamLimits

0xa90a,	// (0x0005e4f0) list_single_large_graphic_pane

0xa8af,	// (0x0005e495) list_single_number_heading_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_number_heading_pane

0xa8af,	// (0x0005e495) list_single_number_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_number_pane

0xa8af,	// (0x0005e495) list_single_pane_ParamLimits

0xa8af,	// (0x0005e495) list_single_pane

0xeb63,	// (0x00062749) list_highlight_pane_cp1

0x5c23,	// (0x00059809) list_single_pane_g1_ParamLimits

0x5c23,	// (0x00059809) list_single_pane_g1

0x5c2f,	// (0x00059815) list_single_pane_g2_ParamLimits

0x5c2f,	// (0x00059815) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000631b8) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000631b8) list_single_pane_g

0x7757,	// (0x0005b33d) list_single_pane_t1_ParamLimits

0x7757,	// (0x0005b33d) list_single_pane_t1

0x5c23,	// (0x00059809) list_single_number_pane_g1_ParamLimits

0x5c23,	// (0x00059809) list_single_number_pane_g1

0x5c2f,	// (0x00059815) list_single_number_pane_g2_ParamLimits

0x5c2f,	// (0x00059815) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000631b8) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000631b8) list_single_number_pane_g

0x5c3b,	// (0x00059821) list_single_number_pane_t1_ParamLimits

0x5c3b,	// (0x00059821) list_single_number_pane_t1

0x769d,	// (0x0005b283) list_single_number_pane_t2_ParamLimits

0x769d,	// (0x0005b283) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00063540) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00063540) list_single_number_pane_t

0x5c17,	// (0x000597fd) list_single_graphic_pane_g1_ParamLimits

0x5c17,	// (0x000597fd) list_single_graphic_pane_g1

0x5c23,	// (0x00059809) list_single_graphic_pane_g2_ParamLimits

0x5c23,	// (0x00059809) list_single_graphic_pane_g2

0x5c2f,	// (0x00059815) list_single_graphic_pane_g3_ParamLimits

0x5c2f,	// (0x00059815) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000631a7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000631a7) list_single_graphic_pane_g

0x5c3b,	// (0x00059821) list_single_graphic_pane_t1_ParamLimits

0x5c3b,	// (0x00059821) list_single_graphic_pane_t1

0x5c51,	// (0x00059837) list_single_heading_pane_g1_ParamLimits

0x5c51,	// (0x00059837) list_single_heading_pane_g1

0x5c2f,	// (0x00059815) list_single_heading_pane_g2_ParamLimits

0x5c2f,	// (0x00059815) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000631ae) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000631ae) list_single_heading_pane_g

0x5c64,	// (0x0005984a) list_single_heading_pane_t1_ParamLimits

0x5c64,	// (0x0005984a) list_single_heading_pane_t1

0x5c7a,	// (0x00059860) list_single_heading_pane_t2_ParamLimits

0x5c7a,	// (0x00059860) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000631b3) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000631b3) list_single_heading_pane_t

0x5c23,	// (0x00059809) list_single_number_heading_pane_g1_ParamLimits

0x5c23,	// (0x00059809) list_single_number_heading_pane_g1

0x5c2f,	// (0x00059815) list_single_number_heading_pane_g2_ParamLimits

0x5c2f,	// (0x00059815) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000631b8) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000631b8) list_single_number_heading_pane_g

0x5c8c,	// (0x00059872) list_single_number_heading_pane_t1_ParamLimits

0x5c8c,	// (0x00059872) list_single_number_heading_pane_t1

0x5ca2,	// (0x00059888) list_single_number_heading_pane_t2_ParamLimits

0x5ca2,	// (0x00059888) list_single_number_heading_pane_t2

0x5cb4,	// (0x0005989a) list_single_number_heading_pane_t3_ParamLimits

0x5cb4,	// (0x0005989a) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000631bd) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000631bd) list_single_number_heading_pane_t

0x5cc6,	// (0x000598ac) list_single_graphic_heading_pane_g1_ParamLimits

0x5cc6,	// (0x000598ac) list_single_graphic_heading_pane_g1

0x5cdc,	// (0x000598c2) list_single_graphic_heading_pane_g4_ParamLimits

0x5cdc,	// (0x000598c2) list_single_graphic_heading_pane_g4

0x5c2f,	// (0x00059815) list_single_graphic_heading_pane_g5_ParamLimits

0x5c2f,	// (0x00059815) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000631c4) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000631c4) list_single_graphic_heading_pane_g

0x5c8c,	// (0x00059872) list_single_graphic_heading_pane_t1_ParamLimits

0x5c8c,	// (0x00059872) list_single_graphic_heading_pane_t1

0x5ced,	// (0x000598d3) list_single_graphic_heading_pane_t2_ParamLimits

0x5ced,	// (0x000598d3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000631cb) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000631cb) list_single_graphic_heading_pane_t

0x5d05,	// (0x000598eb) list_single_large_graphic_pane_g1_ParamLimits

0x5d05,	// (0x000598eb) list_single_large_graphic_pane_g1

0x4662,	// (0x00058248) list_single_large_graphic_pane_g2_ParamLimits

0x4662,	// (0x00058248) list_single_large_graphic_pane_g2

0x466e,	// (0x00058254) list_single_large_graphic_pane_g3_ParamLimits

0x466e,	// (0x00058254) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000631d0) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000631d0) list_single_large_graphic_pane_g

0x995e,	// (0x0005d544) wait_border_pane_g2_copy1

0x5d11,	// (0x000598f7) list_single_large_graphic_pane_g4_cp2

0x5d19,	// (0x000598ff) list_single_large_graphic_pane_t1_ParamLimits

0x5d19,	// (0x000598ff) list_single_large_graphic_pane_t1

0x5d2f,	// (0x00059915) list_double_pane_g1_ParamLimits

0x5d2f,	// (0x00059915) list_double_pane_g1

0x5d3b,	// (0x00059921) list_double_pane_g2_ParamLimits

0x5d3b,	// (0x00059921) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000631d7) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000631d7) list_double_pane_g

0x5d47,	// (0x0005992d) list_double_pane_t1_ParamLimits

0x5d47,	// (0x0005992d) list_double_pane_t1

0x5d5d,	// (0x00059943) list_double_pane_t2_ParamLimits

0x5d5d,	// (0x00059943) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000631dc) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000631dc) list_double_pane_t

0x5d6f,	// (0x00059955) list_double2_pane_g1_ParamLimits

0x5d6f,	// (0x00059955) list_double2_pane_g1

0x348c,	// (0x00057072) list_double2_pane_g2_ParamLimits

0x348c,	// (0x00057072) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000631e1) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000631e1) list_double2_pane_g

0x5d80,	// (0x00059966) list_double2_pane_t1_ParamLimits

0x5d80,	// (0x00059966) list_double2_pane_t1

0x5d96,	// (0x0005997c) list_double2_pane_t2_ParamLimits

0x5d96,	// (0x0005997c) list_double2_pane_t2

0x0001,

0xf600,	// (0x000631e6) list_double2_pane_t_ParamLimits

0xf600,	// (0x000631e6) list_double2_pane_t

0x5d2f,	// (0x00059915) list_double_number_pane_g1_ParamLimits

0x5d2f,	// (0x00059915) list_double_number_pane_g1

0x5d3b,	// (0x00059921) list_double_number_pane_g2_ParamLimits

0x5d3b,	// (0x00059921) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000631d7) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000631d7) list_double_number_pane_g

0x5da8,	// (0x0005998e) list_double_number_pane_t1_ParamLimits

0x5da8,	// (0x0005998e) list_double_number_pane_t1

0x5dba,	// (0x000599a0) list_double_number_pane_t2_ParamLimits

0x5dba,	// (0x000599a0) list_double_number_pane_t2

0x5dd0,	// (0x000599b6) list_double_number_pane_t3_ParamLimits

0x5dd0,	// (0x000599b6) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000631eb) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000631eb) list_double_number_pane_t

0x5de2,	// (0x000599c8) list_double_graphic_pane_g1_ParamLimits

0x5de2,	// (0x000599c8) list_double_graphic_pane_g1

0x5dee,	// (0x000599d4) list_double_graphic_pane_g2_ParamLimits

0x5dee,	// (0x000599d4) list_double_graphic_pane_g2

0x5dfd,	// (0x000599e3) list_double_graphic_pane_g3_ParamLimits

0x5dfd,	// (0x000599e3) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000631f2) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000631f2) list_double_graphic_pane_g

0x5dba,	// (0x000599a0) list_double_graphic_pane_t1_ParamLimits

0x5dba,	// (0x000599a0) list_double_graphic_pane_t1

0x5dd0,	// (0x000599b6) list_double_graphic_pane_t2_ParamLimits

0x5dd0,	// (0x000599b6) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000631fb) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000631fb) list_double_graphic_pane_t

0x5e15,	// (0x000599fb) list_double2_graphic_pane_g1_ParamLimits

0x5e15,	// (0x000599fb) list_double2_graphic_pane_g1

0xaa87,	// (0x0005e66d) list_double2_graphic_pane_g2_ParamLimits

0xaa87,	// (0x0005e66d) list_double2_graphic_pane_g2

0x467a,	// (0x00058260) list_double2_graphic_pane_g3_ParamLimits

0x467a,	// (0x00058260) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00063200) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00063200) list_double2_graphic_pane_g

0x5e21,	// (0x00059a07) list_double2_graphic_pane_t1_ParamLimits

0x5e21,	// (0x00059a07) list_double2_graphic_pane_t1

0x5e37,	// (0x00059a1d) list_double2_graphic_pane_t2_ParamLimits

0x5e37,	// (0x00059a1d) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00063207) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00063207) list_double2_graphic_pane_t

0x5e49,	// (0x00059a2f) list_double_large_graphic_pane_g1_ParamLimits

0x5e49,	// (0x00059a2f) list_double_large_graphic_pane_g1

0x5e68,	// (0x00059a4e) list_double_large_graphic_pane_g2_ParamLimits

0x5e68,	// (0x00059a4e) list_double_large_graphic_pane_g2

0x5d3b,	// (0x00059921) list_double_large_graphic_pane_g3_ParamLimits

0x5d3b,	// (0x00059921) list_double_large_graphic_pane_g3

0x5e7e,	// (0x00059a64) list_double_large_graphic_pane_g4_ParamLimits

0x5e7e,	// (0x00059a64) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0006320c) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0006320c) list_double_large_graphic_pane_g

0x5e90,	// (0x00059a76) list_double_large_graphic_pane_t1_ParamLimits

0x5e90,	// (0x00059a76) list_double_large_graphic_pane_t1

0x5ea9,	// (0x00059a8f) list_double_large_graphic_pane_t2_ParamLimits

0x5ea9,	// (0x00059a8f) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00063217) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00063217) list_double_large_graphic_pane_t

0x5ebb,	// (0x00059aa1) list_double2_large_graphic_pane_g1_ParamLimits

0x5ebb,	// (0x00059aa1) list_double2_large_graphic_pane_g1

0x5ec7,	// (0x00059aad) list_double2_large_graphic_pane_g2_ParamLimits

0x5ec7,	// (0x00059aad) list_double2_large_graphic_pane_g2

0x467a,	// (0x00058260) list_double2_large_graphic_pane_g3_ParamLimits

0x467a,	// (0x00058260) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0006321c) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0006321c) list_double2_large_graphic_pane_g

0x5e21,	// (0x00059a07) list_double2_large_graphic_pane_t1_ParamLimits

0x5e21,	// (0x00059a07) list_double2_large_graphic_pane_t1

0x5e37,	// (0x00059a1d) list_double2_large_graphic_pane_t2_ParamLimits

0x5e37,	// (0x00059a1d) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00063207) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00063207) list_double2_large_graphic_pane_t

0x5ed8,	// (0x00059abe) list_double_heading_pane_g1_ParamLimits

0x5ed8,	// (0x00059abe) list_double_heading_pane_g1

0x5ee9,	// (0x00059acf) list_double_heading_pane_g2_ParamLimits

0x5ee9,	// (0x00059acf) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00063223) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00063223) list_double_heading_pane_g

0x5ef5,	// (0x00059adb) list_double_heading_pane_t1_ParamLimits

0x5ef5,	// (0x00059adb) list_double_heading_pane_t1

0x5e37,	// (0x00059a1d) list_double_heading_pane_t2_ParamLimits

0x5e37,	// (0x00059a1d) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00063228) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00063228) list_double_heading_pane_t

0x5f0b,	// (0x00059af1) list_double_graphic_heading_pane_g1_ParamLimits

0x5f0b,	// (0x00059af1) list_double_graphic_heading_pane_g1

0x5ed8,	// (0x00059abe) list_double_graphic_heading_pane_g2_ParamLimits

0x5ed8,	// (0x00059abe) list_double_graphic_heading_pane_g2

0x5ee9,	// (0x00059acf) list_double_graphic_heading_pane_g3_ParamLimits

0x5ee9,	// (0x00059acf) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0006322d) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0006322d) list_double_graphic_heading_pane_g

0x5ef5,	// (0x00059adb) list_double_graphic_heading_pane_t1_ParamLimits

0x5ef5,	// (0x00059adb) list_double_graphic_heading_pane_t1

0x5e37,	// (0x00059a1d) list_double_graphic_heading_pane_t2_ParamLimits

0x5e37,	// (0x00059a1d) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00063228) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00063228) list_double_graphic_heading_pane_t

0x5f17,	// (0x00059afd) list_double_time_pane_g1_ParamLimits

0x5f17,	// (0x00059afd) list_double_time_pane_g1

0x5f28,	// (0x00059b0e) list_double_time_pane_g2_ParamLimits

0x5f28,	// (0x00059b0e) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00063234) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00063234) list_double_time_pane_g

0x5f34,	// (0x00059b1a) list_double_time_pane_t1_ParamLimits

0x5f34,	// (0x00059b1a) list_double_time_pane_t1

0x5f4a,	// (0x00059b30) list_double_time_pane_t2_ParamLimits

0x5f4a,	// (0x00059b30) list_double_time_pane_t2

0x5f5c,	// (0x00059b42) list_double_time_pane_t3_ParamLimits

0x5f5c,	// (0x00059b42) list_double_time_pane_t3

0x5f6e,	// (0x00059b54) list_double_time_pane_t4_ParamLimits

0x5f6e,	// (0x00059b54) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00063239) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00063239) list_double_time_pane_t

0x5f80,	// (0x00059b66) list_setting_pane_g1_ParamLimits

0x5f80,	// (0x00059b66) list_setting_pane_g1

0x348c,	// (0x00057072) list_setting_pane_g2_ParamLimits

0x348c,	// (0x00057072) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00063242) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00063242) list_setting_pane_g

0x5f8c,	// (0x00059b72) list_setting_pane_t1_ParamLimits

0x5f8c,	// (0x00059b72) list_setting_pane_t1

0x5fa6,	// (0x00059b8c) list_setting_pane_t2_ParamLimits

0x5fa6,	// (0x00059b8c) list_setting_pane_t2

0x0002,

0xf661,	// (0x00063247) list_setting_pane_t_ParamLimits

0xf661,	// (0x00063247) list_setting_pane_t

0x5fe3,	// (0x00059bc9) set_value_pane_cp_ParamLimits

0x5fe3,	// (0x00059bc9) set_value_pane_cp

0x5fef,	// (0x00059bd5) list_setting_number_pane_g1_ParamLimits

0x5fef,	// (0x00059bd5) list_setting_number_pane_g1

0x5ffb,	// (0x00059be1) list_setting_number_pane_g2_ParamLimits

0x5ffb,	// (0x00059be1) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0006324e) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0006324e) list_setting_number_pane_g

0x6007,	// (0x00059bed) list_setting_number_pane_t1_ParamLimits

0x6007,	// (0x00059bed) list_setting_number_pane_t1

0x6020,	// (0x00059c06) list_setting_number_pane_t2_ParamLimits

0x6020,	// (0x00059c06) list_setting_number_pane_t2

0x603a,	// (0x00059c20) list_setting_number_pane_t3_ParamLimits

0x603a,	// (0x00059c20) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00063253) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00063253) list_setting_number_pane_t

0x5fe3,	// (0x00059bc9) set_value_pane_ParamLimits

0x5fe3,	// (0x00059bc9) set_value_pane

0xef21,	// (0x00062b07) bg_set_opt_pane_ParamLimits

0xef21,	// (0x00062b07) bg_set_opt_pane

0x3498,	// (0x0005707e) set_value_pane_t1

0xef42,	// (0x00062b28) slider_set_pane_cp3

0x607d,	// (0x00059c63) volume_small_pane_cp

0xf152,	// (0x00062d38) list_form_gen_pane

0xf15b,	// (0x00062d41) scroll_pane_cp8

0x6086,	// (0x00059c6c) form_field_data_pane_ParamLimits

0x6086,	// (0x00059c6c) form_field_data_pane

0x60a0,	// (0x00059c86) form_field_data_wide_pane_ParamLimits

0x60a0,	// (0x00059c86) form_field_data_wide_pane

0x60c3,	// (0x00059ca9) form_field_popup_pane_ParamLimits

0x60c3,	// (0x00059ca9) form_field_popup_pane

0x60e3,	// (0x00059cc9) form_field_popup_wide_pane_ParamLimits

0x60e3,	// (0x00059cc9) form_field_popup_wide_pane

0x34b6,	// (0x0005709c) form_field_slider_pane_ParamLimits

0x34b6,	// (0x0005709c) form_field_slider_pane

0x6100,	// (0x00059ce6) form_field_slider_wide_pane_ParamLimits

0x6100,	// (0x00059ce6) form_field_slider_wide_pane

0xf16c,	// (0x00062d52) data_form_pane

0x611d,	// (0x00059d03) form_field_data_pane_t1

0xf178,	// (0x00062d5e) input_focus_pane

0x34c9,	// (0x000570af) data_form_wide_pane

0x34e6,	// (0x000570cc) form_field_data_wide_pane_t1

0xee65,	// (0x00062a4b) input_focus_pane_cp6

0x6135,	// (0x00059d1b) form_field_popup_pane_t1

0xf178,	// (0x00062d5e) input_focus_pane_cp7

0xf19a,	// (0x00062d80) list_form_pane

0x3510,	// (0x000570f6) form_field_popup_wide_pane_t1

0xf178,	// (0x00062d5e) input_focus_pane_cp8

0xf1a6,	// (0x00062d8c) list_form_wide_pane

0x6155,	// (0x00059d3b) form_field_slider_pane_t1_ParamLimits

0x6155,	// (0x00059d3b) form_field_slider_pane_t1

0x616b,	// (0x00059d51) form_field_slider_pane_t2_ParamLimits

0x616b,	// (0x00059d51) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00063263) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00063263) form_field_slider_pane_t

0xecdb,	// (0x000628c1) input_focus_pane_cp9_ParamLimits

0xecdb,	// (0x000628c1) input_focus_pane_cp9

0x6180,	// (0x00059d66) slider_cont_pane_ParamLimits

0x6180,	// (0x00059d66) slider_cont_pane

0xf1b2,	// (0x00062d98) form_field_slider_wide_pane_t1_ParamLimits

0xf1b2,	// (0x00062d98) form_field_slider_wide_pane_t1

0x3525,	// (0x0005710b) form_field_slider_wide_pane_t2_ParamLimits

0x3525,	// (0x0005710b) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00063268) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00063268) form_field_slider_wide_pane_t

0xecdb,	// (0x000628c1) input_focus_pane_cp10_ParamLimits

0xecdb,	// (0x000628c1) input_focus_pane_cp10

0x6194,	// (0x00059d7a) slider_cont_pane_cp1_ParamLimits

0x6194,	// (0x00059d7a) slider_cont_pane_cp1

0x61a8,	// (0x00059d8e) slider_form_pane_cp

0xf1c4,	// (0x00062daa) input_focus_pane_g1

0xf1cc,	// (0x00062db2) input_focus_pane_g2

0xf1d4,	// (0x00062dba) input_focus_pane_g3

0xf1dc,	// (0x00062dc2) input_focus_pane_g4

0xf1e4,	// (0x00062dca) input_focus_pane_g5

0xf1ec,	// (0x00062dd2) input_focus_pane_g6

0xf1f4,	// (0x00062dda) input_focus_pane_g7

0xf1fc,	// (0x00062de2) input_focus_pane_g8

0xf204,	// (0x00062dea) input_focus_pane_g9

0xeb59,	// (0x0006273f) input_focus_pane_g10

0x0009,

0xf687,	// (0x0006326d) input_focus_pane_g

0x9967,	// (0x0005d54d) wait_border_pane_g3_copy1

0x61b0,	// (0x00059d96) data_form_pane_t1

0xeb59,	// (0x0006273f) wait_anim_pane_g1_copy1

0x7727,	// (0x0005b30d) data_form_wide_pane_t1

0x61cb,	// (0x00059db1) list_form_graphic_pane_cp_ParamLimits

0x61cb,	// (0x00059db1) list_form_graphic_pane_cp

0xa856,	// (0x0005e43c) slider_form_pane_g1

0xa85f,	// (0x0005e445) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00063570) slider_form_pane_g

0x61cb,	// (0x00059db1) list_form_graphic_pane_ParamLimits

0x61cb,	// (0x00059db1) list_form_graphic_pane

0x61e4,	// (0x00059dca) list_form_graphic_pane_g1

0x61ec,	// (0x00059dd2) list_form_graphic_pane_t1_ParamLimits

0x61ec,	// (0x00059dd2) list_form_graphic_pane_t1

0xebb1,	// (0x00062797) list_highlight_pane_cp5_ParamLimits

0xebb1,	// (0x00062797) list_highlight_pane_cp5

0x6201,	// (0x00059de7) find_pane_g1

0xf20c,	// (0x00062df2) input_find_pane

0x620a,	// (0x00059df0) input_find_pane_g1_ParamLimits

0x620a,	// (0x00059df0) input_find_pane_g1

0x6216,	// (0x00059dfc) input_find_pane_t1_ParamLimits

0x6216,	// (0x00059dfc) input_find_pane_t1

0x622b,	// (0x00059e11) input_find_pane_t2_ParamLimits

0x622b,	// (0x00059e11) input_find_pane_t2

0x0001,

0xf69c,	// (0x00063282) input_find_pane_t_ParamLimits

0xf69c,	// (0x00063282) input_find_pane_t

0xf215,	// (0x00062dfb) input_focus_pane_cp5_ParamLimits

0xf215,	// (0x00062dfb) input_focus_pane_cp5

0xf223,	// (0x00062e09) bg_popup_window_pane_cp2_ParamLimits

0xf223,	// (0x00062e09) bg_popup_window_pane_cp2

0xf230,	// (0x00062e16) listscroll_menu_pane_ParamLimits

0xf230,	// (0x00062e16) listscroll_menu_pane

0x624c,	// (0x00059e32) popup_submenu_window_ParamLimits

0x624c,	// (0x00059e32) popup_submenu_window

0xf23c,	// (0x00062e22) find_popup_pane_g1

0x6274,	// (0x00059e5a) input_popup_find_pane_cp

0xf215,	// (0x00062dfb) input_focus_pane_cp4_ParamLimits

0xf215,	// (0x00062dfb) input_focus_pane_cp4

0xf244,	// (0x00062e2a) input_popup_find_pane_t1_ParamLimits

0xf244,	// (0x00062e2a) input_popup_find_pane_t1

0xeb63,	// (0x00062749) bg_popup_sub_pane_cp

0xf272,	// (0x00062e58) listscroll_popup_sub_pane

0xf27a,	// (0x00062e60) list_submenu_pane_ParamLimits

0xf27a,	// (0x00062e60) list_submenu_pane

0xf28b,	// (0x00062e71) scroll_pane_cp4

0x628c,	// (0x00059e72) list_single_popup_submenu_pane_ParamLimits

0x628c,	// (0x00059e72) list_single_popup_submenu_pane

0x2436,	// (0x0005601c) list_single_popup_submenu_pane_g1

0x62a0,	// (0x00059e86) list_single_popup_submenu_pane_t1_ParamLimits

0x62a0,	// (0x00059e86) list_single_popup_submenu_pane_t1

0xebb1,	// (0x00062797) bg_active_tab_pane_cp1_ParamLimits

0xebb1,	// (0x00062797) bg_active_tab_pane_cp1

0xf293,	// (0x00062e79) tabs_2_active_pane_g1

0x62b5,	// (0x00059e9b) tabs_2_active_pane_t1

0xebb1,	// (0x00062797) bg_passive_tab_pane_cp1_ParamLimits

0xebb1,	// (0x00062797) bg_passive_tab_pane_cp1

0xf293,	// (0x00062e79) tabs_2_passive_pane_g1

0x62b5,	// (0x00059e9b) tabs_2_passive_pane_t1

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp4

0x62c7,	// (0x00059ead) tabs_2_long_active_pane_t1

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp4

0x73ce,	// (0x0005afb4) list_single_midp_graphic_pane_g4_ParamLimits

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp5

0x62e6,	// (0x00059ecc) tabs_3_long_active_pane_t1

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp5

0x73ce,	// (0x0005afb4) list_single_midp_graphic_pane_g4

0xebb1,	// (0x00062797) bg_popup_window_pane_cp13_ParamLimits

0xebb1,	// (0x00062797) bg_popup_window_pane_cp13

0xf29b,	// (0x00062e81) listscroll_popup_fast_pane_ParamLimits

0xf29b,	// (0x00062e81) listscroll_popup_fast_pane

0xf2a7,	// (0x00062e8d) grid_popup_fast_pane_ParamLimits

0xf2a7,	// (0x00062e8d) grid_popup_fast_pane

0xf2b9,	// (0x00062e9f) scroll_pane_cp9_ParamLimits

0xf2b9,	// (0x00062e9f) scroll_pane_cp9

0xc336,	// (0x0005ff1c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc336,	// (0x0005ff1c) list_single_graphic_hl_pane_t1_cp2

0xf2cc,	// (0x00062eb2) input_focus_pane_cp20_ParamLimits

0xf2cc,	// (0x00062eb2) input_focus_pane_cp20

0xf2da,	// (0x00062ec0) query_popup_data_pane_t1_ParamLimits

0xf2da,	// (0x00062ec0) query_popup_data_pane_t1

0xf2ed,	// (0x00062ed3) query_popup_data_pane_t2_ParamLimits

0xf2ed,	// (0x00062ed3) query_popup_data_pane_t2

0xf333,	// (0x00062f19) query_popup_data_pane_t3_ParamLimits

0xf333,	// (0x00062f19) query_popup_data_pane_t3

0xf374,	// (0x00062f5a) query_popup_data_pane_t4_ParamLimits

0xf374,	// (0x00062f5a) query_popup_data_pane_t4

0xf3b0,	// (0x00062f96) query_popup_data_pane_t5_ParamLimits

0xf3b0,	// (0x00062f96) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00063287) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00063287) query_popup_data_pane_t

0xf1c4,	// (0x00062daa) bg_set_opt_pane_g1

0xf1cc,	// (0x00062db2) bg_set_opt_pane_g2

0xf1d4,	// (0x00062dba) bg_set_opt_pane_g3

0xf1dc,	// (0x00062dc2) bg_set_opt_pane_g4

0xf1e4,	// (0x00062dca) bg_set_opt_pane_g5

0xf1ec,	// (0x00062dd2) bg_set_opt_pane_g6

0xf1f4,	// (0x00062dda) bg_set_opt_pane_g7

0xf1fc,	// (0x00062de2) bg_set_opt_pane_g8

0xf204,	// (0x00062dea) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00063292) bg_set_opt_pane_g

0x685d,	// (0x0005a443) control_top_pane_stacon_ParamLimits

0x685d,	// (0x0005a443) control_top_pane_stacon

0x68b0,	// (0x0005a496) signal_pane_stacon_ParamLimits

0x68b0,	// (0x0005a496) signal_pane_stacon

0x361d,	// (0x00057203) stacon_top_pane_g1_ParamLimits

0x361d,	// (0x00057203) stacon_top_pane_g1

0x68d5,	// (0x0005a4bb) title_pane_stacon_ParamLimits

0x68d5,	// (0x0005a4bb) title_pane_stacon

0x68ff,	// (0x0005a4e5) uni_indicator_pane_stacon_ParamLimits

0x68ff,	// (0x0005a4e5) uni_indicator_pane_stacon

0x6914,	// (0x0005a4fa) battery_pane_stacon_ParamLimits

0x6914,	// (0x0005a4fa) battery_pane_stacon

0x6958,	// (0x0005a53e) control_bottom_pane_stacon_ParamLimits

0x6958,	// (0x0005a53e) control_bottom_pane_stacon

0x697b,	// (0x0005a561) navi_pane_stacon_ParamLimits

0x697b,	// (0x0005a561) navi_pane_stacon

0x363f,	// (0x00057225) stacon_bottom_pane_g1_ParamLimits

0x363f,	// (0x00057225) stacon_bottom_pane_g1

0x6312,	// (0x00059ef8) aid_levels_signal_lsc_ParamLimits

0x6312,	// (0x00059ef8) aid_levels_signal_lsc

0x6328,	// (0x00059f0e) signal_pane_stacon_g1_ParamLimits

0x6328,	// (0x00059f0e) signal_pane_stacon_g1

0x633c,	// (0x00059f22) signal_pane_stacon_g2_ParamLimits

0x633c,	// (0x00059f22) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000632a5) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000632a5) signal_pane_stacon_g

0x6371,	// (0x00059f57) title_pane_stacon_t1_ParamLimits

0x6371,	// (0x00059f57) title_pane_stacon_t1

0xf3f4,	// (0x00062fda) uni_indicator_pane_stacon_g1

0xf3fe,	// (0x00062fe4) uni_indicator_pane_stacon_g2

0xf408,	// (0x00062fee) uni_indicator_pane_stacon_g3

0xf412,	// (0x00062ff8) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000632b1) uni_indicator_pane_stacon_g

0x6396,	// (0x00059f7c) control_top_pane_stacon_g1

0x639e,	// (0x00059f84) control_top_pane_stacon_t1_ParamLimits

0x639e,	// (0x00059f84) control_top_pane_stacon_t1

0x63d5,	// (0x00059fbb) aid_levels_battery_lsc_ParamLimits

0x63d5,	// (0x00059fbb) aid_levels_battery_lsc

0x63ec,	// (0x00059fd2) battery_pane_stacon_g1_ParamLimits

0x63ec,	// (0x00059fd2) battery_pane_stacon_g1

0x63ff,	// (0x00059fe5) battery_pane_stacon_g2_ParamLimits

0x63ff,	// (0x00059fe5) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x000632ba) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000632ba) battery_pane_stacon_g

0x643d,	// (0x0005a023) navi_icon_pane_stacon

0x6451,	// (0x0005a037) navi_navi_pane_stacon

0x643d,	// (0x0005a023) navi_text_pane_stacon

0x6396,	// (0x00059f7c) control_bottom_pane_stacon_g1

0x6465,	// (0x0005a04b) control_bottom_pane_stacon_t1_ParamLimits

0x6465,	// (0x0005a04b) control_bottom_pane_stacon_t1

0x649c,	// (0x0005a082) grid_app_pane_ParamLimits

0x649c,	// (0x0005a082) grid_app_pane

0x64c0,	// (0x0005a0a6) scroll_pane_cp15_ParamLimits

0x64c0,	// (0x0005a0a6) scroll_pane_cp15

0x64d3,	// (0x0005a0b9) cell_app_pane_ParamLimits

0x64d3,	// (0x0005a0b9) cell_app_pane

0x64fb,	// (0x0005a0e1) cell_app_pane_g1_ParamLimits

0x64fb,	// (0x0005a0e1) cell_app_pane_g1

0xf436,	// (0x0006301c) cell_app_pane_g2_ParamLimits

0xf436,	// (0x0006301c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x000632bf) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x000632bf) cell_app_pane_g

0x651f,	// (0x0005a105) cell_app_pane_t1_ParamLimits

0x651f,	// (0x0005a105) cell_app_pane_t1

0xf442,	// (0x00063028) grid_highlight_pane_ParamLimits

0xf442,	// (0x00063028) grid_highlight_pane

0xf1c4,	// (0x00062daa) cell_highlight_pane_g1

0xf1cc,	// (0x00062db2) cell_highlight_pane_g2

0xf1d4,	// (0x00062dba) cell_highlight_pane_g3

0xf1dc,	// (0x00062dc2) cell_highlight_pane_g4

0xf1e4,	// (0x00062dca) cell_highlight_pane_g5

0xf1ec,	// (0x00062dd2) cell_highlight_pane_g6

0xf1f4,	// (0x00062dda) cell_highlight_pane_g7

0xf1fc,	// (0x00062de2) cell_highlight_pane_g8

0xf204,	// (0x00062dea) cell_highlight_pane_g9

0xeb59,	// (0x0006273f) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0006326d) cell_highlight_pane_g

0xf453,	// (0x00063039) bg_scroll_pane

0x6549,	// (0x0005a12f) scroll_handle_pane

0xf49a,	// (0x00063080) scroll_bg_pane_g1

0xf4af,	// (0x00063095) scroll_bg_pane_g2

0xf4c7,	// (0x000630ad) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x000632c4) scroll_bg_pane_g

0x6572,	// (0x0005a158) scroll_handle_focus_pane_ParamLimits

0x6572,	// (0x0005a158) scroll_handle_focus_pane

0xf49a,	// (0x00063080) scroll_handle_pane_g1

0xf4dc,	// (0x000630c2) scroll_handle_pane_g2

0xf4c7,	// (0x000630ad) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000632cb) scroll_handle_pane_g

0xf215,	// (0x00062dfb) bg_popup_sub_pane_cp21_ParamLimits

0xf215,	// (0x00062dfb) bg_popup_sub_pane_cp21

0x657f,	// (0x0005a165) popup_fep_japan_predictive_window_t1_ParamLimits

0x657f,	// (0x0005a165) popup_fep_japan_predictive_window_t1

0x6599,	// (0x0005a17f) popup_fep_japan_predictive_window_t2_ParamLimits

0x6599,	// (0x0005a17f) popup_fep_japan_predictive_window_t2

0x65cc,	// (0x0005a1b2) popup_fep_japan_predictive_window_t3_ParamLimits

0x65cc,	// (0x0005a1b2) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000632d2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000632d2) popup_fep_japan_predictive_window_t

0xeb63,	// (0x00062749) bg_popup_sub_pane_cp23

0x2d76,	// (0x0005695c) listscroll_japin_cand_pane

0xf4f0,	// (0x000630d6) popup_fep_japan_candidate_window_t1

0xf4fe,	// (0x000630e4) candidate_pane_ParamLimits

0xf4fe,	// (0x000630e4) candidate_pane

0x6603,	// (0x0005a1e9) scroll_pane_cp30

0xf510,	// (0x000630f6) list_single_popup_jap_candidate_pane_ParamLimits

0xf510,	// (0x000630f6) list_single_popup_jap_candidate_pane

0xeb63,	// (0x00062749) list_highlight_pane_cp30

0xf525,	// (0x0006310b) list_single_popup_jap_candidate_pane_t1

0xf534,	// (0x0006311a) level_1_signal

0xf541,	// (0x00063127) level_2_signal

0x12a8,	// (0x00054e8e) level_3_signal

0x12b5,	// (0x00054e9b) level_4_signal

0x12c2,	// (0x00054ea8) level_5_signal

0x12cf,	// (0x00054eb5) level_6_signal

0x12dc,	// (0x00054ec2) level_7_signal

0xf534,	// (0x0006311a) level_1_battery

0xf541,	// (0x00063127) level_2_battery

0x12a8,	// (0x00054e8e) level_3_battery

0x12b5,	// (0x00054e9b) level_4_battery

0x12c2,	// (0x00054ea8) level_5_battery

0x12cf,	// (0x00054eb5) level_6_battery

0x12dc,	// (0x00054ec2) level_7_battery

0x1301,	// (0x00054ee7) list_menu_pane_ParamLimits

0x1301,	// (0x00054ee7) list_menu_pane

0x1317,	// (0x00054efd) scroll_pane_cp25_ParamLimits

0x1317,	// (0x00054efd) scroll_pane_cp25

0x1330,	// (0x00054f16) list_double2_graphic_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double2_graphic_pane_cp2

0x1330,	// (0x00054f16) list_double2_large_graphic_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double2_large_graphic_pane_cp2

0x1330,	// (0x00054f16) list_double2_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double2_pane_cp2

0x1330,	// (0x00054f16) list_double_graphic_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double_graphic_pane_cp2

0x1330,	// (0x00054f16) list_double_large_graphic_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double_large_graphic_pane_cp2

0x1330,	// (0x00054f16) list_double_number_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double_number_pane_cp2

0x1330,	// (0x00054f16) list_double_pane_cp2_ParamLimits

0x1330,	// (0x00054f16) list_double_pane_cp2

0x663e,	// (0x0005a224) list_single_2graphic_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_2graphic_pane_cp2

0x663e,	// (0x0005a224) list_single_graphic_heading_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_graphic_heading_pane_cp2

0x663e,	// (0x0005a224) list_single_graphic_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_graphic_pane_cp2

0x663e,	// (0x0005a224) list_single_heading_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_heading_pane_cp2

0x1340,	// (0x00054f26) list_single_large_graphic_pane_cp2_ParamLimits

0x1340,	// (0x00054f26) list_single_large_graphic_pane_cp2

0x663e,	// (0x0005a224) list_single_number_heading_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_number_heading_pane_cp2

0x663e,	// (0x0005a224) list_single_number_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_number_pane_cp2

0x663e,	// (0x0005a224) list_single_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_pane_cp2

0x135a,	// (0x00054f40) bg_popup_sub_pane_cp22

0x6716,	// (0x0005a2fc) popup_side_volume_key_window_g1

0x673a,	// (0x0005a320) popup_side_volume_key_window_t1

0x6756,	// (0x0005a33c) volume_small_pane_cp1

0xecdb,	// (0x000628c1) bg_popup_sub_pane_cp24_ParamLimits

0xecdb,	// (0x000628c1) bg_popup_sub_pane_cp24

0x1370,	// (0x00054f56) fep_china_uni_candidate_pane_ParamLimits

0x1370,	// (0x00054f56) fep_china_uni_candidate_pane

0x1384,	// (0x00054f6a) fep_china_uni_entry_pane

0x1394,	// (0x00054f7a) popup_fep_china_uni_window_g1

0x675e,	// (0x0005a344) fep_china_uni_entry_pane_g1

0x6766,	// (0x0005a34c) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00063303) fep_china_uni_entry_pane_g

0x3537,	// (0x0005711d) fep_entry_item_pane

0x3541,	// (0x00057127) fep_candidate_item_pane

0x676e,	// (0x0005a354) fep_china_uni_candidate_pane_g1

0x3549,	// (0x0005712f) fep_china_uni_candidate_pane_g2

0x3551,	// (0x00057137) fep_china_uni_candidate_pane_g3

0x6776,	// (0x0005a35c) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00063308) fep_china_uni_candidate_pane_g

0xeb59,	// (0x0006273f) fep_entry_item_pane_g1

0x3559,	// (0x0005713f) fep_entry_item_pane_t1_ParamLimits

0x3559,	// (0x0005713f) fep_entry_item_pane_t1

0x356f,	// (0x00057155) fep_candidate_item_pane_t1_ParamLimits

0x356f,	// (0x00057155) fep_candidate_item_pane_t1

0x3584,	// (0x0005716a) fep_candidate_item_pane_t2_ParamLimits

0x3584,	// (0x0005716a) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00063311) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00063311) fep_candidate_item_pane_t

0xebb1,	// (0x00062797) list_highlight_pane_cp31_ParamLimits

0xebb1,	// (0x00062797) list_highlight_pane_cp31

0x3596,	// (0x0005717c) level_1_signal_lsc

0x359f,	// (0x00057185) level_2_signal_lsc

0x35a8,	// (0x0005718e) level_3_signal_lsc

0x35b1,	// (0x00057197) level_4_signal_lsc

0x35ba,	// (0x000571a0) level_5_signal_lsc

0x35c3,	// (0x000571a9) level_6_signal_lsc

0x35cc,	// (0x000571b2) level_7_signal_lsc

0x35cc,	// (0x000571b2) level_1_battery_lsc

0x35d5,	// (0x000571bb) level_2_battery_lsc

0x35de,	// (0x000571c4) level_3_battery_lsc

0x35e7,	// (0x000571cd) level_4_battery_lsc

0x35f0,	// (0x000571d6) level_5_battery_lsc

0x35f9,	// (0x000571df) level_6_battery_lsc

0x3596,	// (0x0005717c) level_7_battery_lsc

0x3602,	// (0x000571e8) scroll_handle_focus_pane_g1

0x360b,	// (0x000571f1) scroll_handle_focus_pane_g2

0x3614,	// (0x000571fa) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00063316) scroll_handle_focus_pane_g

0x677e,	// (0x0005a364) list_single_2graphic_pane_g1_ParamLimits

0x677e,	// (0x0005a364) list_single_2graphic_pane_g1

0x5cdc,	// (0x000598c2) list_single_2graphic_pane_g2_ParamLimits

0x5cdc,	// (0x000598c2) list_single_2graphic_pane_g2

0x5c2f,	// (0x00059815) list_single_2graphic_pane_g3_ParamLimits

0x5c2f,	// (0x00059815) list_single_2graphic_pane_g3

0x678a,	// (0x0005a370) list_single_2graphic_pane_g4_ParamLimits

0x678a,	// (0x0005a370) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0006331d) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0006331d) list_single_2graphic_pane_g

0x6796,	// (0x0005a37c) list_single_2graphic_pane_t1_ParamLimits

0x6796,	// (0x0005a37c) list_single_2graphic_pane_t1

0x67c4,	// (0x0005a3aa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x67c4,	// (0x0005a3aa) list_double2_graphic_large_graphic_pane_g1

0x5ec7,	// (0x00059aad) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5ec7,	// (0x00059aad) list_double2_graphic_large_graphic_pane_g2

0x467a,	// (0x00058260) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x467a,	// (0x00058260) list_double2_graphic_large_graphic_pane_g3

0x67d4,	// (0x0005a3ba) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x67d4,	// (0x0005a3ba) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00063326) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00063326) list_double2_graphic_large_graphic_pane_g

0x67e0,	// (0x0005a3c6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x67e0,	// (0x0005a3c6) list_double2_graphic_large_graphic_pane_t1

0x67f6,	// (0x0005a3dc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x67f6,	// (0x0005a3dc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0006332f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0006332f) list_double2_graphic_large_graphic_pane_t

0x69da,	// (0x0005a5c0) popup_fast_swap_window_ParamLimits

0x69da,	// (0x0005a5c0) popup_fast_swap_window

0x69f6,	// (0x0005a5dc) popup_side_volume_key_window

0x6a10,	// (0x0005a5f6) stacon_top_pane

0x6a1a,	// (0x0005a600) status_pane_ParamLimits

0x6a1a,	// (0x0005a600) status_pane

0x6a28,	// (0x0005a60e) status_small_pane

0xeb63,	// (0x00062749) control_pane

0xeb63,	// (0x00062749) stacon_bottom_pane

0xf15b,	// (0x00062d41) scroll_pane_cp121

0xf152,	// (0x00062d38) set_content_pane

0x6808,	// (0x0005a3ee) bg_active_tab_pane_g1_cp1

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp1

0x681a,	// (0x0005a400) bg_active_tab_pane_g3_cp1

0x6808,	// (0x0005a3ee) bg_passive_tab_pane_g1_cp1

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp1

0x681a,	// (0x0005a400) bg_passive_tab_pane_g3_cp1

0x6823,	// (0x0005a409) bg_active_tab_pane_g1_cp2

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp2

0x682c,	// (0x0005a412) bg_active_tab_pane_g3_cp2

0x6823,	// (0x0005a409) bg_passive_tab_pane_g1_cp2

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp2

0x682c,	// (0x0005a412) bg_passive_tab_pane_g3_cp2

0x6835,	// (0x0005a41b) bg_active_tab_pane_g1_cp3

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp3

0x683e,	// (0x0005a424) bg_active_tab_pane_g3_cp3

0x6835,	// (0x0005a41b) bg_passive_tab_pane_g1_cp3

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp3

0x683e,	// (0x0005a424) bg_passive_tab_pane_g3_cp3

0x6847,	// (0x0005a42d) bg_active_tab_pane_g1_cp4

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp4

0x6852,	// (0x0005a438) bg_active_tab_pane_g3_cp4

0x6847,	// (0x0005a42d) bg_passive_tab_pane_g1_cp4

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp4

0x6852,	// (0x0005a438) bg_passive_tab_pane_g3_cp4

0x699e,	// (0x0005a584) bg_active_tab_pane_g1_cp5

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp5

0x69a7,	// (0x0005a58d) bg_active_tab_pane_g3_cp5

0x699e,	// (0x0005a584) bg_passive_tab_pane_g1_cp5

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp5

0x69a7,	// (0x0005a58d) bg_passive_tab_pane_g3_cp5

0x69b0,	// (0x0005a596) list_set_graphic_pane_ParamLimits

0x69b0,	// (0x0005a596) list_set_graphic_pane

0xeb63,	// (0x00062749) bg_set_opt_pane_cp4

0x365b,	// (0x00057241) list_set_graphic_pane_g1_ParamLimits

0x365b,	// (0x00057241) list_set_graphic_pane_g1

0x3667,	// (0x0005724d) list_set_graphic_pane_g2_ParamLimits

0x3667,	// (0x0005724d) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00063334) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00063334) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x000636cc) volume_small_pane_cp_g

0x69ce,	// (0x0005a5b4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x69ce,	// (0x0005a5b4) list_double2_large_graphic_pane_g1_cp2

0x3689,	// (0x0005726f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3689,	// (0x0005726f) list_double2_large_graphic_pane_g2_cp2

0x369a,	// (0x00057280) list_double2_large_graphic_pane_g3_cp2

0x36a2,	// (0x00057288) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x36a2,	// (0x00057288) list_double2_large_graphic_pane_t1_cp2

0x36b8,	// (0x0005729e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x36b8,	// (0x0005729e) list_double2_large_graphic_pane_t2_cp2

0xa418,	// (0x0005dffe) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa418,	// (0x0005dffe) list_double_large_graphic_pane_g1_cp2

0xa429,	// (0x0005e00f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa429,	// (0x0005e00f) list_double_large_graphic_pane_g2_cp2

0x6b35,	// (0x0005a71b) list_double_large_graphic_pane_g3_cp2

0xa43a,	// (0x0005e020) list_double_large_graphic_pane_g4_cp

0xa442,	// (0x0005e028) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa442,	// (0x0005e028) list_double_large_graphic_pane_t1_cp2

0xa459,	// (0x0005e03f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa459,	// (0x0005e03f) list_double_large_graphic_pane_t2_cp2

0x6a33,	// (0x0005a619) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6a33,	// (0x0005a619) list_double2_graphic_pane_g1_cp2

0x6a41,	// (0x0005a627) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6a41,	// (0x0005a627) list_double2_graphic_pane_g2_cp2

0x6a52,	// (0x0005a638) list_double2_graphic_pane_g3_cp2

0x6a5c,	// (0x0005a642) list_double2_graphic_pane_t1_cp2_ParamLimits

0x6a5c,	// (0x0005a642) list_double2_graphic_pane_t1_cp2

0x6a72,	// (0x0005a658) list_double2_graphic_pane_t2_cp2_ParamLimits

0x6a72,	// (0x0005a658) list_double2_graphic_pane_t2_cp2

0x13b0,	// (0x00054f96) list_single_number_heading_pane_g1_cp2_ParamLimits

0x13b0,	// (0x00054f96) list_single_number_heading_pane_g1_cp2

0x6a84,	// (0x0005a66a) list_single_number_heading_pane_g2_cp2

0x6a8c,	// (0x0005a672) list_single_number_heading_pane_t1_cp2_ParamLimits

0x6a8c,	// (0x0005a672) list_single_number_heading_pane_t1_cp2

0x6aa2,	// (0x0005a688) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6aa2,	// (0x0005a688) list_single_number_heading_pane_t2_cp2

0x6ab4,	// (0x0005a69a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x6ab4,	// (0x0005a69a) list_single_number_heading_pane_t3_cp2

0x13b0,	// (0x00054f96) list_single_heading_pane_g1_cp2_ParamLimits

0x13b0,	// (0x00054f96) list_single_heading_pane_g1_cp2

0x6a84,	// (0x0005a66a) list_single_heading_pane_g2_cp2

0x6a8c,	// (0x0005a672) list_single_heading_pane_t1_cp2_ParamLimits

0x6a8c,	// (0x0005a672) list_single_heading_pane_t1_cp2

0xa222,	// (0x0005de08) list_single_heading_pane_t2_cp2_ParamLimits

0xa222,	// (0x0005de08) list_single_heading_pane_t2_cp2

0xa16a,	// (0x0005dd50) list_double_graphic_pane_g1_cp2_ParamLimits

0xa16a,	// (0x0005dd50) list_double_graphic_pane_g1_cp2

0xa176,	// (0x0005dd5c) list_double_graphic_pane_g2_cp2_ParamLimits

0xa176,	// (0x0005dd5c) list_double_graphic_pane_g2_cp2

0xa185,	// (0x0005dd6b) list_double_graphic_pane_g3_cp2

0xa18d,	// (0x0005dd73) list_double_graphic_pane_t1_cp2_ParamLimits

0xa18d,	// (0x0005dd73) list_double_graphic_pane_t1_cp2

0xa1a3,	// (0x0005dd89) list_double_graphic_pane_t2_cp2_ParamLimits

0xa1a3,	// (0x0005dd89) list_double_graphic_pane_t2_cp2

0x6b29,	// (0x0005a70f) list_double_number_pane_g1_cp2_ParamLimits

0x6b29,	// (0x0005a70f) list_double_number_pane_g1_cp2

0x6b35,	// (0x0005a71b) list_double_number_pane_g2_cp2

0xa12e,	// (0x0005dd14) list_double_number_pane_t1_cp2_ParamLimits

0xa12e,	// (0x0005dd14) list_double_number_pane_t1_cp2

0xa142,	// (0x0005dd28) list_double_number_pane_t2_cp2_ParamLimits

0xa142,	// (0x0005dd28) list_double_number_pane_t2_cp2

0xa158,	// (0x0005dd3e) list_double_number_pane_t3_cp2_ParamLimits

0xa158,	// (0x0005dd3e) list_double_number_pane_t3_cp2

0xa017,	// (0x0005dbfd) list_single_graphic_pane_g1_cp2_ParamLimits

0xa017,	// (0x0005dbfd) list_single_graphic_pane_g1_cp2

0x8a1d,	// (0x0005c603) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a1d,	// (0x0005c603) list_single_graphic_pane_g2_cp2

0x8a29,	// (0x0005c60f) list_single_graphic_pane_g3_cp2

0x9fed,	// (0x0005dbd3) list_single_graphic_pane_t1_cp2_ParamLimits

0x9fed,	// (0x0005dbd3) list_single_graphic_pane_t1_cp2

0x8a1d,	// (0x0005c603) list_single_number_pane_g1_cp2_ParamLimits

0x8a1d,	// (0x0005c603) list_single_number_pane_g1_cp2

0x8a29,	// (0x0005c60f) list_single_number_pane_g2_cp2

0x9fed,	// (0x0005dbd3) list_single_number_pane_t1_cp2_ParamLimits

0x9fed,	// (0x0005dbd3) list_single_number_pane_t1_cp2

0xa003,	// (0x0005dbe9) list_single_number_pane_t2_cp2_ParamLimits

0xa003,	// (0x0005dbe9) list_single_number_pane_t2_cp2

0x3689,	// (0x0005726f) list_double2_pane_g1_cp2_ParamLimits

0x3689,	// (0x0005726f) list_double2_pane_g1_cp2

0x369a,	// (0x00057280) list_double2_pane_g2_cp2

0x6b01,	// (0x0005a6e7) list_double2_pane_t1_cp2_ParamLimits

0x6b01,	// (0x0005a6e7) list_double2_pane_t1_cp2

0x6b17,	// (0x0005a6fd) list_double2_pane_t2_cp2_ParamLimits

0x6b17,	// (0x0005a6fd) list_double2_pane_t2_cp2

0x6b29,	// (0x0005a70f) list_double_pane_g1_cp2_ParamLimits

0x6b29,	// (0x0005a70f) list_double_pane_g1_cp2

0x6b35,	// (0x0005a71b) list_double_pane_g2_cp2

0x6b3d,	// (0x0005a723) list_double_pane_t1_cp2_ParamLimits

0x6b3d,	// (0x0005a723) list_double_pane_t1_cp2

0x6b53,	// (0x0005a739) list_double_pane_t2_cp2_ParamLimits

0x6b53,	// (0x0005a739) list_double_pane_t2_cp2

0x6b7d,	// (0x0005a763) list_single_pane_cp2_g3

0x8a1d,	// (0x0005c603) list_single_pane_g1_cp2_ParamLimits

0x8a1d,	// (0x0005c603) list_single_pane_g1_cp2

0x8a29,	// (0x0005c60f) list_single_pane_g2_cp2

0x8a31,	// (0x0005c617) list_single_pane_t1_cp2_ParamLimits

0x8a31,	// (0x0005c617) list_single_pane_t1_cp2

0x8a49,	// (0x0005c62f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a49,	// (0x0005c62f) list_single_large_graphic_pane_g1_cp2

0x8a55,	// (0x0005c63b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a55,	// (0x0005c63b) list_single_large_graphic_pane_g2_cp2

0x8a61,	// (0x0005c647) list_single_large_graphic_pane_g3_cp2

0x8a69,	// (0x0005c64f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a69,	// (0x0005c64f) list_single_large_graphic_pane_g4_cp1

0x8a83,	// (0x0005c669) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a83,	// (0x0005c669) list_single_large_graphic_pane_t1_cp2

0x9fb9,	// (0x0005db9f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9fb9,	// (0x0005db9f) list_single_graphic_heading_pane_g1_cp2

0x9f86,	// (0x0005db6c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9f86,	// (0x0005db6c) list_single_graphic_heading_pane_g4_cp2

0x8a29,	// (0x0005c60f) list_single_graphic_heading_pane_g5_cp2

0x9fc5,	// (0x0005dbab) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9fc5,	// (0x0005dbab) list_single_graphic_heading_pane_t1_cp2

0x9fdb,	// (0x0005dbc1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9fdb,	// (0x0005dbc1) list_single_graphic_heading_pane_t2_cp2

0x9f7a,	// (0x0005db60) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9f7a,	// (0x0005db60) list_single_2graphic_pane_g1_cp2

0x9f86,	// (0x0005db6c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9f86,	// (0x0005db6c) list_single_2graphic_pane_g2_cp2

0x8a29,	// (0x0005c60f) list_single_2graphic_pane_g3_cp2

0x9f97,	// (0x0005db7d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9f97,	// (0x0005db7d) list_single_2graphic_pane_g4_cp2

0x9fa3,	// (0x0005db89) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9fa3,	// (0x0005db89) list_single_2graphic_pane_t1_cp2

0xeb59,	// (0x0006273f) list_highlight_pane_g10_cp1

0x9b62,	// (0x0005d748) list_highlight_pane_g1_cp1

0x9b6a,	// (0x0005d750) list_highlight_pane_g2_cp1

0x9b72,	// (0x0005d758) list_highlight_pane_g3_cp1

0x9b7a,	// (0x0005d760) list_highlight_pane_g4_cp1

0x9b82,	// (0x0005d768) list_highlight_pane_g5_cp1

0x9b8a,	// (0x0005d770) list_highlight_pane_g6_cp1

0x9b92,	// (0x0005d778) list_highlight_pane_g7_cp1

0x9b9a,	// (0x0005d780) list_highlight_pane_g8_cp1

0x9ba2,	// (0x0005d788) list_highlight_pane_g9_cp1

0x9a8a,	// (0x0005d670) form_field_slider_pane_t3

0x9a98,	// (0x0005d67e) form_field_slider_pane_t4

0x9aa6,	// (0x0005d68c) slider_form_pane_ParamLimits

0x9aa6,	// (0x0005d68c) slider_form_pane

0xeb63,	// (0x00062749) control_abbreviations

0xeb63,	// (0x00062749) control_conventions

0xeb63,	// (0x00062749) control_definitions

0xeb63,	// (0x00062749) format_table_attribute

0xa26c,	// (0x0005de52) bg_popup_preview_window_pane_g9

0xeb63,	// (0x00062749) format_table_data2

0xeb63,	// (0x00062749) format_table_data3

0xeb63,	// (0x00062749) format_table_data_example

0x0008,

0xeb63,	// (0x00062749) intro_purpose

0xf8ea,	// (0x000634d0) bg_popup_preview_window_pane_g

0xeb63,	// (0x00062749) texts_category

0xeb63,	// (0x00062749) texts_graphics

0x8a99,	// (0x0005c67f) text_digital

0x8aa8,	// (0x0005c68e) text_primary

0x8ab7,	// (0x0005c69d) text_primary_small

0x8ac6,	// (0x0005c6ac) text_secondary

0x8ad5,	// (0x0005c6bb) text_title

0xab61,	// (0x0005e747) bg_passive_tab_pane_g1_cp3_srt

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp3_srt

0xab6a,	// (0x0005e750) bg_passive_tab_pane_g3_cp3_srt

0xebb1,	// (0x00062797) bg_active_tab_pane_cp3_srt_ParamLimits

0xebb1,	// (0x00062797) bg_active_tab_pane_cp3_srt

0xab73,	// (0x0005e759) tabs_4_active_pane_srt_g1

0xab7b,	// (0x0005e761) tabs_4_active_pane_srt_t1_ParamLimits

0xab7b,	// (0x0005e761) tabs_4_active_pane_srt_t1

0xab61,	// (0x0005e747) bg_active_tab_pane_g1_cp3_copy1

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp3_copy1

0xab6a,	// (0x0005e750) bg_active_tab_pane_g3_cp3_copy1

0xebb1,	// (0x00062797) tabs_2_long_active_pane_srt_ParamLimits

0xebb1,	// (0x00062797) tabs_2_long_active_pane_srt

0xebb1,	// (0x00062797) tabs_2_long_passive_pane_srt_ParamLimits

0xebb1,	// (0x00062797) tabs_2_long_passive_pane_srt

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp4_srt

0xa68d,	// (0x0005e273) bg_passive_tab_pane_g1_cp4_srt

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp4_srt

0xa696,	// (0x0005e27c) bg_passive_tab_pane_g3_cp4_srt

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp4_srt_ParamLimits

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp4_srt

0xa69f,	// (0x0005e285) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa69f,	// (0x0005e285) tabs_2_long_active_pane_srt_t1

0xa68d,	// (0x0005e273) bg_active_tab_pane_g1_cp4_srt

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp4_srt

0xa696,	// (0x0005e27c) bg_active_tab_pane_g3_cp4_srt

0xecdb,	// (0x000628c1) tabs_3_long_active_pane_srt_ParamLimits

0xecdb,	// (0x000628c1) tabs_3_long_active_pane_srt

0xecdb,	// (0x000628c1) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xecdb,	// (0x000628c1) tabs_3_long_passive_pane_cp_srt

0xecdb,	// (0x000628c1) tabs_3_long_passive_pane_srt_ParamLimits

0xecdb,	// (0x000628c1) tabs_3_long_passive_pane_srt

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp5_srt

0x699e,	// (0x0005a584) bg_passive_tab_pane_g1_cp5_srt

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp5_srt

0x69a7,	// (0x0005a58d) bg_passive_tab_pane_g3_cp5_srt

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp5_srt_ParamLimits

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp5_srt

0xa67b,	// (0x0005e261) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa67b,	// (0x0005e261) tabs_3_long_active_pane_srt_t1

0x699e,	// (0x0005a584) bg_active_tab_pane_g1_cp5_srt

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp5_srt

0x69a7,	// (0x0005a58d) bg_active_tab_pane_g3_cp5_srt

0xa66d,	// (0x0005e253) navi_text_pane_srt_t1

0xa665,	// (0x0005e24b) navi_icon_pane_srt_g1

0x8ca6,	// (0x0005c88c) midp_editing_number_pane_srt

0x8ae4,	// (0x0005c6ca) midp_ticker_pane_srt

0x8cae,	// (0x0005c894) midp_ticker_pane_srt_g1

0x8cb6,	// (0x0005c89c) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00063353) midp_ticker_pane_srt_g

0x8cbe,	// (0x0005c8a4) midp_ticker_pane_srt_t1

0xa656,	// (0x0005e23c) midp_editing_number_pane_t1_copy1

0x8aec,	// (0x0005c6d2) listscroll_midp_pane

0x8aec,	// (0x0005c6d2) midp_form_pane

0x8b5e,	// (0x0005c744) midp_info_popup_window_ParamLimits

0x8b5e,	// (0x0005c744) midp_info_popup_window

0xf215,	// (0x00062dfb) bg_popup_sub_pane_cp50_ParamLimits

0xf215,	// (0x00062dfb) bg_popup_sub_pane_cp50

0x97aa,	// (0x0005d390) listscroll_midp_info_pane_ParamLimits

0x97aa,	// (0x0005d390) listscroll_midp_info_pane

0x978a,	// (0x0005d370) listscroll_form_midp_pane_ParamLimits

0x978a,	// (0x0005d370) listscroll_form_midp_pane

0x9796,	// (0x0005d37c) scroll_bar_cp050

0x976a,	// (0x0005d350) list_midp_pane

0xb597,	// (0x0005f17d) signal_pane_g2_cp

0x96a4,	// (0x0005d28a) listscroll_midp_info_pane_t1_ParamLimits

0x96a4,	// (0x0005d28a) listscroll_midp_info_pane_t1

0x96bc,	// (0x0005d2a2) listscroll_midp_info_pane_t2_ParamLimits

0x96bc,	// (0x0005d2a2) listscroll_midp_info_pane_t2

0x96fa,	// (0x0005d2e0) listscroll_midp_info_pane_t3_ParamLimits

0x96fa,	// (0x0005d2e0) listscroll_midp_info_pane_t3

0x9734,	// (0x0005d31a) listscroll_midp_info_pane_t4_ParamLimits

0x9734,	// (0x0005d31a) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0006340b) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0006340b) listscroll_midp_info_pane_t

0xf28b,	// (0x00062e71) scroll_pane_cp21

0x9644,	// (0x0005d22a) form_midp_field_choice_group_pane

0x964d,	// (0x0005d233) form_midp_field_text_pane

0x968a,	// (0x0005d270) form_midp_field_time_pane

0x9692,	// (0x0005d278) form_midp_gauge_slider_pane

0x969b,	// (0x0005d281) form_midp_gauge_wait_pane

0xeb63,	// (0x00062749) form_midp_image_pane

0x74b5,	// (0x0005b09b) list_single_midp_pane_ParamLimits

0x74b5,	// (0x0005b09b) list_single_midp_pane

0x95f9,	// (0x0005d1df) form_midp_field_text_pane_t1

0x93c3,	// (0x0005cfa9) input_focus_pane_cp050

0x9633,	// (0x0005d219) list_midp_form_text_pane

0x95c8,	// (0x0005d1ae) form_midp_field_choice_group_pane_t1

0x95d6,	// (0x0005d1bc) input_focus_pane_cp051

0x95ea,	// (0x0005d1d0) list_midp_choice_pane

0xeb63,	// (0x00062749) status_idle_pane

0x95ac,	// (0x0005d192) form_midp_field_time_pane_t1

0xeb59,	// (0x0006273f) wait_anim_pane_g2_copy1

0x95ba,	// (0x0005d1a0) form_midp_field_time_pane_t2

0x0001,

0x8c0e,	// (0x0005c7f4) aid_navinavi_width_2_pane

0xf820,	// (0x00063406) form_midp_field_time_pane_t

0xeb63,	// (0x00062749) input_focus_pane_cp052

0xeb63,	// (0x00062749) bg_input_focus_pane_cp040

0x956c,	// (0x0005d152) form_midp_gauge_slider_pane_t1

0x957a,	// (0x0005d160) form_midp_gauge_slider_pane_t2

0x9588,	// (0x0005d16e) form_midp_gauge_slider_pane_t3

0x9596,	// (0x0005d17c) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x000633fd) form_midp_gauge_slider_pane_t

0x95a4,	// (0x0005d18a) form_midp_slider_pane

0xebb1,	// (0x00062797) bg_input_focus_pane_cp041_ParamLimits

0xebb1,	// (0x00062797) bg_input_focus_pane_cp041

0x9539,	// (0x0005d11f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9539,	// (0x0005d11f) form_midp_gauge_wait_pane_t1

0x954b,	// (0x0005d131) form_midp_gauge_wait_pane_t2_ParamLimits

0x954b,	// (0x0005d131) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x000633f8) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x000633f8) form_midp_gauge_wait_pane_t

0x955d,	// (0x0005d143) form_midp_wait_pane_ParamLimits

0x955d,	// (0x0005d143) form_midp_wait_pane

0x9503,	// (0x0005d0e9) form_midp_image_pane_g1

0x950c,	// (0x0005d0f2) form_midp_image_pane_t1

0x951b,	// (0x0005d101) form_midp_image_pane_t2

0x952a,	// (0x0005d110) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x000633f1) form_midp_image_pane_t

0x94fa,	// (0x0005d0e0) list_single_midp_pane_g1

0x41f7,	// (0x00057ddd) list_single_midp_pane_t1

0x94d1,	// (0x0005d0b7) list_midp_form_item_pane_ParamLimits

0x94d1,	// (0x0005d0b7) list_midp_form_item_pane

0x8bb6,	// (0x0005c79c) list_midp_form_item_pane_t1

0x8bc5,	// (0x0005c7ab) midp_ticker_pane_g1

0x8bd1,	// (0x0005c7b7) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00063339) midp_ticker_pane_g

0x8bdd,	// (0x0005c7c3) midp_ticker_pane_t1

0xaaa6,	// (0x0005e68c) midp_editing_number_pane_t1

0xa881,	// (0x0005e467) midp_editing_number_pane

0xaa93,	// (0x0005e679) midp_ticker_pane

0xa646,	// (0x0005e22c) ai_message_heading_pane

0xeb63,	// (0x00062749) bg_popup_window_pane_cp14

0xa64e,	// (0x0005e234) listscroll_ai_message_pane

0xa5d0,	// (0x0005e1b6) ai_message_heading_pane_g1_ParamLimits

0xa5d0,	// (0x0005e1b6) ai_message_heading_pane_g1

0xa5dc,	// (0x0005e1c2) ai_message_heading_pane_g2_ParamLimits

0xa5dc,	// (0x0005e1c2) ai_message_heading_pane_g2

0xa5e8,	// (0x0005e1ce) ai_message_heading_pane_g3_ParamLimits

0xa5e8,	// (0x0005e1ce) ai_message_heading_pane_g3

0xa5f4,	// (0x0005e1da) ai_message_heading_pane_g4_ParamLimits

0xa5f4,	// (0x0005e1da) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00063532) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00063532) ai_message_heading_pane_g

0xa600,	// (0x0005e1e6) ai_message_heading_pane_t1_ParamLimits

0xa600,	// (0x0005e1e6) ai_message_heading_pane_t1

0xa61a,	// (0x0005e200) ai_message_heading_pane_t2_ParamLimits

0xa61a,	// (0x0005e200) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0006353b) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0006353b) ai_message_heading_pane_t

0xa62c,	// (0x0005e212) bg_popup_heading_pane_cp1_ParamLimits

0xa62c,	// (0x0005e212) bg_popup_heading_pane_cp1

0xa5be,	// (0x0005e1a4) list_ai_message_pane_ParamLimits

0xa5be,	// (0x0005e1a4) list_ai_message_pane

0xf28b,	// (0x00062e71) scroll_pane_cp10

0xa55a,	// (0x0005e140) list_ai_message_pane_g1

0xa562,	// (0x0005e148) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0006350f) list_ai_message_pane_g

0xa56a,	// (0x0005e150) list_ai_message_pane_t1_ParamLimits

0xa56a,	// (0x0005e150) list_ai_message_pane_t1

0xa57f,	// (0x0005e165) list_ai_message_pane_t2_ParamLimits

0xa57f,	// (0x0005e165) list_ai_message_pane_t2

0xa594,	// (0x0005e17a) list_ai_message_pane_t3_ParamLimits

0xa594,	// (0x0005e17a) list_ai_message_pane_t3

0xa5a9,	// (0x0005e18f) list_ai_message_pane_t4_ParamLimits

0xa5a9,	// (0x0005e18f) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00063514) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00063514) list_ai_message_pane_t

0xa545,	// (0x0005e12b) cell_ai_soft_ind_pane_ParamLimits

0xa545,	// (0x0005e12b) cell_ai_soft_ind_pane

0x8bef,	// (0x0005c7d5) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bef,	// (0x0005c7d5) cell_ai_soft_ind_pane_g1

0xeb63,	// (0x00062749) grid_highlight_cp1

0x8bfc,	// (0x0005c7e2) text_secondary_cp56_ParamLimits

0x8bfc,	// (0x0005c7e2) text_secondary_cp56

0xa51a,	// (0x0005e100) example_general_pane_ParamLimits

0xa51a,	// (0x0005e100) example_general_pane

0xa526,	// (0x0005e10c) example_parent_pane_g1_ParamLimits

0xa526,	// (0x0005e10c) example_parent_pane_g1

0xa532,	// (0x0005e118) example_parent_pane_t1_ParamLimits

0xa532,	// (0x0005e118) example_parent_pane_t1

0x7149,	// (0x0005ad2f) popup_preview_text_window_ParamLimits

0x7149,	// (0x0005ad2f) popup_preview_text_window

0x6b85,	// (0x0005a76b) list_single_pane_cp2_g4

0xed91,	// (0x00062977) bg_popup_preview_window_pane_ParamLimits

0xed91,	// (0x00062977) bg_popup_preview_window_pane

0xa274,	// (0x0005de5a) popup_preview_text_window_t1_ParamLimits

0xa274,	// (0x0005de5a) popup_preview_text_window_t1

0xa292,	// (0x0005de78) popup_preview_text_window_t2_ParamLimits

0xa292,	// (0x0005de78) popup_preview_text_window_t2

0xa2db,	// (0x0005dec1) popup_preview_text_window_t3_ParamLimits

0xa2db,	// (0x0005dec1) popup_preview_text_window_t3

0xa320,	// (0x0005df06) popup_preview_text_window_t4_ParamLimits

0xa320,	// (0x0005df06) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x000634e3) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x000634e3) popup_preview_text_window_t

0xa39e,	// (0x0005df84) scroll_pane_cp11

0x9337,	// (0x0005cf1d) bg_popup_preview_window_pane_g1

0xa234,	// (0x0005de1a) bg_popup_preview_window_pane_g2

0xa23c,	// (0x0005de22) bg_popup_preview_window_pane_g3

0xa244,	// (0x0005de2a) bg_popup_preview_window_pane_g4

0xa24c,	// (0x0005de32) bg_popup_preview_window_pane_g5

0xa254,	// (0x0005de3a) bg_popup_preview_window_pane_g6

0xa25c,	// (0x0005de42) bg_popup_preview_window_pane_g7

0xa264,	// (0x0005de4a) bg_popup_preview_window_pane_g8

0x5277,	// (0x00058e5d) aid_popup_width_pane

0x7127,	// (0x0005ad0d) popup_midp_note_alarm_window_ParamLimits

0x7127,	// (0x0005ad0d) popup_midp_note_alarm_window

0xf16c,	// (0x00062d52) data_form_pane_ParamLimits

0x6113,	// (0x00059cf9) form_field_data_pane_g1

0x611d,	// (0x00059d03) form_field_data_pane_t1_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_ParamLimits

0x34c9,	// (0x000570af) data_form_wide_pane_ParamLimits

0x34da,	// (0x000570c0) form_field_data_wide_pane_g1

0x34e6,	// (0x000570cc) form_field_data_wide_pane_t1_ParamLimits

0xee65,	// (0x00062a4b) input_focus_pane_cp6_ParamLimits

0x627e,	// (0x00059e64) input_popup_find_pane_g1_ParamLimits

0x627e,	// (0x00059e64) input_popup_find_pane_g1

0x6410,	// (0x00059ff6) aid_navi_side_left_pane

0x6425,	// (0x0005a00b) aid_navi_side_right_pane

0x9c5d,	// (0x0005d843) bg_popup_window_pane_cp30_ParamLimits

0x9c5d,	// (0x0005d843) bg_popup_window_pane_cp30

0x9cd7,	// (0x0005d8bd) popup_midp_note_alarm_window_g1_ParamLimits

0x9cd7,	// (0x0005d8bd) popup_midp_note_alarm_window_g1

0x9d07,	// (0x0005d8ed) popup_midp_note_alarm_window_t1_ParamLimits

0x9d07,	// (0x0005d8ed) popup_midp_note_alarm_window_t1

0x9da8,	// (0x0005d98e) popup_midp_note_alarm_window_t2_ParamLimits

0x9da8,	// (0x0005d98e) popup_midp_note_alarm_window_t2

0x9e56,	// (0x0005da3c) popup_midp_note_alarm_window_t3_ParamLimits

0x9e56,	// (0x0005da3c) popup_midp_note_alarm_window_t3

0x9e7e,	// (0x0005da64) popup_midp_note_alarm_window_t4_ParamLimits

0x9e7e,	// (0x0005da64) popup_midp_note_alarm_window_t4

0x9e9e,	// (0x0005da84) popup_midp_note_alarm_window_t5_ParamLimits

0x9e9e,	// (0x0005da84) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00063480) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00063480) popup_midp_note_alarm_window_t

0x9f4a,	// (0x0005db30) wait_bar_pane_cp1_ParamLimits

0x9f4a,	// (0x0005db30) wait_bar_pane_cp1

0xeb63,	// (0x00062749) wait_anim_pane_copy1

0xeb63,	// (0x00062749) wait_border_pane_copy1

0x9953,	// (0x0005d539) wait_border_pane_g1_copy1

0x3500,	// (0x000570e6) form_field_popup_pane_g1

0x6135,	// (0x00059d1b) form_field_popup_pane_t1_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_cp7_ParamLimits

0xf19a,	// (0x00062d80) list_form_pane_ParamLimits

0x3508,	// (0x000570ee) form_field_popup_wide_pane_g1

0x3510,	// (0x000570f6) form_field_popup_wide_pane_t1_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_cp8_ParamLimits

0xf1a6,	// (0x00062d8c) list_form_wide_pane_ParamLimits

0xabf5,	// (0x0005e7db) aid_size_cell_graphic_pane

0x61b0,	// (0x00059d96) data_form_pane_t1_ParamLimits

0x7727,	// (0x0005b30d) data_form_wide_pane_t1_ParamLimits

0x8f01,	// (0x0005cae7) bg_status_flat_pane

0x5680,	// (0x00059266) title_pane_t1_ParamLimits

0xeb79,	// (0x0006275f) title_pane_t2_ParamLimits

0xeb9f,	// (0x00062785) title_pane_t3_ParamLimits

0xf557,	// (0x0006313d) title_pane_t_ParamLimits

0xf534,	// (0x0006311a) level_1_signal_ParamLimits

0xf541,	// (0x00063127) level_2_signal_ParamLimits

0x12a8,	// (0x00054e8e) level_3_signal_ParamLimits

0x12b5,	// (0x00054e9b) level_4_signal_ParamLimits

0x12c2,	// (0x00054ea8) level_5_signal_ParamLimits

0x12cf,	// (0x00054eb5) level_6_signal_ParamLimits

0x12dc,	// (0x00054ec2) level_7_signal_ParamLimits

0xf534,	// (0x0006311a) level_1_battery_ParamLimits

0xf541,	// (0x00063127) level_2_battery_ParamLimits

0x12a8,	// (0x00054e8e) level_3_battery_ParamLimits

0x12b5,	// (0x00054e9b) level_4_battery_ParamLimits

0x12c2,	// (0x00054ea8) level_5_battery_ParamLimits

0x12cf,	// (0x00054eb5) level_6_battery_ParamLimits

0x12dc,	// (0x00054ec2) level_7_battery_ParamLimits

0x9b62,	// (0x0005d748) bg_status_flat_pane_g1

0x9b6a,	// (0x0005d750) bg_status_flat_pane_g2

0x9b72,	// (0x0005d758) bg_status_flat_pane_g3

0x9b7a,	// (0x0005d760) bg_status_flat_pane_g4

0x9b82,	// (0x0005d768) bg_status_flat_pane_g5

0x9b8a,	// (0x0005d770) bg_status_flat_pane_g6

0x9b92,	// (0x0005d778) bg_status_flat_pane_g7

0x56f0,	// (0x000592d6) tabs_3_active_pane_t1_ParamLimits

0x56f0,	// (0x000592d6) tabs_3_passive_pane_t1_ParamLimits

0x570a,	// (0x000592f0) tabs_4_active_pane_t1_ParamLimits

0x570a,	// (0x000592f0) tabs_4_1_passive_pane_t1_ParamLimits

0x62b5,	// (0x00059e9b) tabs_2_active_pane_t1_ParamLimits

0x62b5,	// (0x00059e9b) tabs_2_passive_pane_t1_ParamLimits

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp4_ParamLimits

0x62c7,	// (0x00059ead) tabs_2_long_active_pane_t1_ParamLimits

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp4_ParamLimits

0x7402,	// (0x0005afe8) list_single_midp_graphic_pane_t1_ParamLimits

0x21ee,	// (0x00055dd4) bg_active_tab_pane_cp5_ParamLimits

0x62e6,	// (0x00059ecc) tabs_3_long_active_pane_t1_ParamLimits

0x62da,	// (0x00059ec0) bg_passive_tab_pane_cp5_ParamLimits

0x7402,	// (0x0005afe8) list_single_midp_graphic_pane_t1

0x8f01,	// (0x0005cae7) bg_status_flat_pane_ParamLimits

0x8fca,	// (0x0005cbb0) indicator_pane_cp2_ParamLimits

0x8fca,	// (0x0005cbb0) indicator_pane_cp2

0x90f5,	// (0x0005ccdb) navi_pane_srt_ParamLimits

0x90f5,	// (0x0005ccdb) navi_pane_srt

0x9119,	// (0x0005ccff) popup_clock_digital_analogue_window_cp1

0xebf5,	// (0x000627db) indicator_pane_t1

0x8ae4,	// (0x0005c6ca) copy_highlight_pane

0x8ae4,	// (0x0005c6ca) cursor_graphics_pane

0x8ae4,	// (0x0005c6ca) graphic_within_text_pane

0x8ae4,	// (0x0005c6ca) link_highlight_pane

0xa361,	// (0x0005df47) popup_preview_text_window_t5_ParamLimits

0xa361,	// (0x0005df47) popup_preview_text_window_t5

0x8c16,	// (0x0005c7fc) cursor_digital_pane

0x8c16,	// (0x0005c7fc) cursor_primary_pane

0x8c27,	// (0x0005c80d) cursor_primary_small_pane

0x8c2f,	// (0x0005c815) cursor_secondary_pane

0x8c37,	// (0x0005c81d) cursor_title_pane

0x8c16,	// (0x0005c7fc) link_highlight_digital_pane

0x8c1e,	// (0x0005c804) link_highlight_primary_pane

0x8c27,	// (0x0005c80d) link_highlight_primary_small_pane

0x8c2f,	// (0x0005c815) link_highlight_secondary_pane

0x8c37,	// (0x0005c81d) link_highlight_title_pane

0x8c16,	// (0x0005c7fc) copy_highlight_digital_pane

0x8c16,	// (0x0005c7fc) copy_highlight_primary_pane

0x8c27,	// (0x0005c80d) copy_highlight_primary_small_pane

0x8c2f,	// (0x0005c815) copy_highlight_secondary_pane

0x8c37,	// (0x0005c81d) copy_highlight_title_pane

0x8c2f,	// (0x0005c815) graphic_text_digital_pane

0x9c00,	// (0x0005d7e6) graphic_text_primary_pane

0x9c09,	// (0x0005d7ef) graphic_text_primary_small_pane

0x8c27,	// (0x0005c80d) graphic_text_secondary_pane

0x8c16,	// (0x0005c7fc) graphic_text_title_pane

0x8c3f,	// (0x0005c825) cursor_primary_pane_g1

0x9bf2,	// (0x0005d7d8) cursor_text_primary_t1

0x9bda,	// (0x0005d7c0) cursor_primary_small_pane_g1

0x9be4,	// (0x0005d7ca) cursor_text_primary_small_t1

0x9bc2,	// (0x0005d7a8) cursor_primary_small_pane_g1_copy1

0x9bcc,	// (0x0005d7b2) cursor_text_primary_small_t1_copy1

0x9baa,	// (0x0005d790) cursor_text_title_t1

0x9bb8,	// (0x0005d79e) cursor_title_pane_g1

0x8c3f,	// (0x0005c825) cursor_digital_pane_g1

0x8c49,	// (0x0005c82f) cursor_text_digital_t1

0x8c57,	// (0x0005c83d) link_highlight_primary_pane_g1

0x9b53,	// (0x0005d739) link_highlight_primary_pane_t1

0x8c57,	// (0x0005c83d) link_highlight_primary_small_pane_g1

0x8c5f,	// (0x0005c845) link_highlight_primary_small_pane_t1

0x8c57,	// (0x0005c83d) link_highlight_secondary_pane_g1

0x8c6e,	// (0x0005c854) link_highlight_secondary_pane_t1

0x9ab8,	// (0x0005d69e) link_highlight_title_pane_g1

0x9acf,	// (0x0005d6b5) link_highlight_title_pane_t1

0x9ab8,	// (0x0005d69e) link_highlight_digital_pane_g1

0x9ac0,	// (0x0005d6a6) link_highlight_digital_pane_t1

0x9972,	// (0x0005d558) copy_highlight_primary_pane_g1

0x9998,	// (0x0005d57e) copy_highlight_primary_pane_t1

0x9972,	// (0x0005d558) copy_highlight_primary_small_pane_g1

0x9989,	// (0x0005d56f) copy_highlight_primary_small_pane_t1

0x8c7d,	// (0x0005c863) copy_highlight_secondary_pane_g1

0x8c85,	// (0x0005c86b) copy_highlight_secondary_pane_t1

0x9972,	// (0x0005d558) copy_highlight_title_pane_g1

0x997a,	// (0x0005d560) copy_highlight_title_pane_t1

0x9972,	// (0x0005d558) copy_highlight_digital_pane_g1

0xadc3,	// (0x0005e9a9) copy_highlight_digital_pane_t1

0xad17,	// (0x0005e8fd) graphic_text_primary_pane_g1

0xada7,	// (0x0005e98d) graphic_text_primary_pane_t1

0xadb5,	// (0x0005e99b) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000635af) graphic_text_primary_pane_t

0xad83,	// (0x0005e969) graphic_text_primary_small_pane_g1

0xad8b,	// (0x0005e971) graphic_text_primary_small_pane_t1

0xad99,	// (0x0005e97f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000635aa) graphic_text_primary_small_pane_t

0xad5f,	// (0x0005e945) graphic_text_secondary_pane_g1

0xad67,	// (0x0005e94d) graphic_text_secondary_pane_t1

0xad75,	// (0x0005e95b) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000635a5) graphic_text_secondary_pane_t

0xad3b,	// (0x0005e921) graphic_text_title_pane_g1

0xad43,	// (0x0005e929) graphic_text_title_pane_t1

0xad51,	// (0x0005e937) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x000635a0) graphic_text_title_pane_t

0xad17,	// (0x0005e8fd) graphic_text_digital_pane_g1

0xad1f,	// (0x0005e905) graphic_text_digital_pane_t1

0xad2d,	// (0x0005e913) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0006359b) graphic_text_digital_pane_t

0xebb1,	// (0x00062797) navi_icon_pane_srt_ParamLimits

0xebb1,	// (0x00062797) navi_icon_pane_srt

0xeb63,	// (0x00062749) navi_midp_pane_srt

0xeb63,	// (0x00062749) navi_navi_pane_srt

0xebb1,	// (0x00062797) navi_text_pane_srt_ParamLimits

0xebb1,	// (0x00062797) navi_text_pane_srt

0xace2,	// (0x0005e8c8) navi_navi_icon_text_pane_srt

0xacea,	// (0x0005e8d0) navi_navi_pane_srt_g1_ParamLimits

0xacea,	// (0x0005e8d0) navi_navi_pane_srt_g1

0xacfc,	// (0x0005e8e2) navi_navi_pane_srt_g2_ParamLimits

0xacfc,	// (0x0005e8e2) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00063596) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00063596) navi_navi_pane_srt_g

0xad0e,	// (0x0005e8f4) navi_navi_tabs_pane_srt

0xace2,	// (0x0005e8c8) navi_navi_text_pane_srt

0xace2,	// (0x0005e8c8) navi_navi_volume_pane_srt

0xacd3,	// (0x0005e8b9) navi_navi_text_pane_srt_t1

0x7841,	// (0x0005b427) navi_navi_volume_pane_srt_g1

0x7849,	// (0x0005b42f) volume_small_pane_srt_ParamLimits

0x7849,	// (0x0005b42f) volume_small_pane_srt

0x6b8d,	// (0x0005a773) volume_small_pane_srt_g1_ParamLimits

0x6b8d,	// (0x0005a773) volume_small_pane_srt_g1

0x6b9d,	// (0x0005a783) volume_small_pane_srt_g2_ParamLimits

0x6b9d,	// (0x0005a783) volume_small_pane_srt_g2

0x6bae,	// (0x0005a794) volume_small_pane_srt_g3_ParamLimits

0x6bae,	// (0x0005a794) volume_small_pane_srt_g3

0x6bbf,	// (0x0005a7a5) volume_small_pane_srt_g4_ParamLimits

0x6bbf,	// (0x0005a7a5) volume_small_pane_srt_g4

0x6bd0,	// (0x0005a7b6) volume_small_pane_srt_g5_ParamLimits

0x6bd0,	// (0x0005a7b6) volume_small_pane_srt_g5

0x6be1,	// (0x0005a7c7) volume_small_pane_srt_g6_ParamLimits

0x6be1,	// (0x0005a7c7) volume_small_pane_srt_g6

0x6bf2,	// (0x0005a7d8) volume_small_pane_srt_g7_ParamLimits

0x6bf2,	// (0x0005a7d8) volume_small_pane_srt_g7

0x6c03,	// (0x0005a7e9) volume_small_pane_srt_g8_ParamLimits

0x6c03,	// (0x0005a7e9) volume_small_pane_srt_g8

0x6c14,	// (0x0005a7fa) volume_small_pane_srt_g9_ParamLimits

0x6c14,	// (0x0005a7fa) volume_small_pane_srt_g9

0x6c25,	// (0x0005a80b) volume_small_pane_srt_g10_ParamLimits

0x6c25,	// (0x0005a80b) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0006333e) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0006333e) volume_small_pane_srt_g

0x5931,	// (0x00059517) query_popup_data_pane_cp2

0xacb9,	// (0x0005e89f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xacb9,	// (0x0005e89f) navi_navi_icon_text_pane_srt_t1

0x9c00,	// (0x0005d7e6) navi_tabs_2_long_pane_srt

0x9c00,	// (0x0005d7e6) navi_tabs_2_pane_srt

0x9c00,	// (0x0005d7e6) navi_tabs_3_long_pane_srt

0x9c00,	// (0x0005d7e6) navi_tabs_3_pane_srt

0x9c00,	// (0x0005d7e6) navi_tabs_4_pane_srt

0x7821,	// (0x0005b407) tabs_2_active_pane_srt_ParamLimits

0x7821,	// (0x0005b407) tabs_2_active_pane_srt

0x7831,	// (0x0005b417) tabs_2_passive_pane_srt_ParamLimits

0x7831,	// (0x0005b417) tabs_2_passive_pane_srt

0x8e2a,	// (0x0005ca10) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e2a,	// (0x0005ca10) bg_passive_tab_pane_cp1_srt

0xac85,	// (0x0005e86b) bg_passive_tab_pane_g1_cp1_srt

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp1_srt

0xac8e,	// (0x0005e874) bg_passive_tab_pane_g3_cp1_srt

0xebb1,	// (0x00062797) bg_active_tab_pane_cp1_srt_ParamLimits

0xebb1,	// (0x00062797) bg_active_tab_pane_cp1_srt

0xac97,	// (0x0005e87d) tabs_2_active_pane_srt_g1

0xac9f,	// (0x0005e885) tabs_2_active_pane_srt_t1_ParamLimits

0xac9f,	// (0x0005e885) tabs_2_active_pane_srt_t1

0xac85,	// (0x0005e86b) bg_active_tab_pane_g1_cp1_srt

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp1_srt

0xac8e,	// (0x0005e874) bg_active_tab_pane_g3_cp1_srt

0x77ee,	// (0x0005b3d4) tabs_3_active_pane_srt_ParamLimits

0x77ee,	// (0x0005b3d4) tabs_3_active_pane_srt

0x77ff,	// (0x0005b3e5) tabs_3_passive_pane_cp_srt_ParamLimits

0x77ff,	// (0x0005b3e5) tabs_3_passive_pane_cp_srt

0x7810,	// (0x0005b3f6) tabs_3_passive_pane_srt_ParamLimits

0x7810,	// (0x0005b3f6) tabs_3_passive_pane_srt

0x8e2a,	// (0x0005ca10) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e2a,	// (0x0005ca10) bg_passive_tab_pane_cp2_srt

0x8c94,	// (0x0005c87a) bg_passive_tab_pane_g1_cp2_srt

0x6811,	// (0x0005a3f7) bg_passive_tab_pane_g2_cp2_srt

0x8c9d,	// (0x0005c883) bg_passive_tab_pane_g3_cp2_srt

0xebb1,	// (0x00062797) bg_active_tab_pane_cp2_srt_ParamLimits

0xebb1,	// (0x00062797) bg_active_tab_pane_cp2_srt

0xac6b,	// (0x0005e851) tabs_3_active_pane_srt_g1

0xac73,	// (0x0005e859) tabs_3_active_pane_srt_t1_ParamLimits

0xac73,	// (0x0005e859) tabs_3_active_pane_srt_t1

0x8c94,	// (0x0005c87a) bg_active_tab_pane_g1_cp2_srt

0x6811,	// (0x0005a3f7) bg_active_tab_pane_g2_cp2_srt

0x8c9d,	// (0x0005c883) bg_active_tab_pane_g3_cp2_srt

0x77a6,	// (0x0005b38c) tabs_4_active_pane_srt_ParamLimits

0x77a6,	// (0x0005b38c) tabs_4_active_pane_srt

0x77b8,	// (0x0005b39e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x77b8,	// (0x0005b39e) tabs_4_passive_pane_cp2_srt

0x6d94,	// (0x0005a97a) aid_size_cell_toolbar

0x62da,	// (0x00059ec0) main_idle_act_pane_ParamLimits

0x6f59,	// (0x0005ab3f) popup_large_graphic_colour_window_ParamLimits

0x72c4,	// (0x0005aeaa) popup_toolbar_window_ParamLimits

0x72c4,	// (0x0005aeaa) popup_toolbar_window

0xaab5,	// (0x0005e69b) list_single_graphic_2heading_pane_ParamLimits

0xaab5,	// (0x0005e69b) list_single_graphic_2heading_pane

0xf41c,	// (0x00063002) aid_size_cell_apps_grid_lsc_pane

0xf42e,	// (0x00063014) aid_size_cell_apps_grid_prt_pane

0x8e2a,	// (0x0005ca10) bg_wml_button_pane_cp1_ParamLimits

0x8e2a,	// (0x0005ca10) bg_wml_button_pane_cp1

0x95f9,	// (0x0005d1df) form_midp_field_text_pane_t1_ParamLimits

0x93c3,	// (0x0005cfa9) input_focus_pane_cp050_ParamLimits

0x9633,	// (0x0005d219) list_midp_form_text_pane_ParamLimits

0x95d6,	// (0x0005d1bc) input_focus_pane_cp051_ParamLimits

0x95ea,	// (0x0005d1d0) list_midp_choice_pane_ParamLimits

0x9479,	// (0x0005d05f) list_single_2graphic_pane_cp3_ParamLimits

0x9479,	// (0x0005d05f) list_single_2graphic_pane_cp3

0x949e,	// (0x0005d084) list_single_midp_graphic_pane_ParamLimits

0x949e,	// (0x0005d084) list_single_midp_graphic_pane

0x51e5,	// (0x00058dcb) list_single_graphic_2heading_pane_g1_ParamLimits

0x51e5,	// (0x00058dcb) list_single_graphic_2heading_pane_g1

0x51f1,	// (0x00058dd7) list_single_graphic_2heading_pane_g4_ParamLimits

0x51f1,	// (0x00058dd7) list_single_graphic_2heading_pane_g4

0x51fd,	// (0x00058de3) list_single_graphic_2heading_pane_g5_ParamLimits

0x51fd,	// (0x00058de3) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00063391) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00063391) list_single_graphic_2heading_pane_g

0x5209,	// (0x00058def) list_single_graphic_2heading_pane_t1_ParamLimits

0x5209,	// (0x00058def) list_single_graphic_2heading_pane_t1

0x521d,	// (0x00058e03) list_single_graphic_2heading_pane_t2_ParamLimits

0x521d,	// (0x00058e03) list_single_graphic_2heading_pane_t2

0x5237,	// (0x00058e1d) list_single_graphic_2heading_pane_t3_ParamLimits

0x5237,	// (0x00058e1d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00063398) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00063398) list_single_graphic_2heading_pane_t

0x9275,	// (0x0005ce5b) bg_popup_sub_pane_cp2

0x929f,	// (0x0005ce85) grid_toobar_pane

0x7371,	// (0x0005af57) cell_toolbar_pane_ParamLimits

0x7371,	// (0x0005af57) cell_toolbar_pane

0x92db,	// (0x0005cec1) cell_toolbar_pane_g1_ParamLimits

0x92db,	// (0x0005cec1) cell_toolbar_pane_g1

0x92ef,	// (0x0005ced5) cell_toolbar_pane_g2_ParamLimits

0x92ef,	// (0x0005ced5) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000633a6) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000633a6) cell_toolbar_pane_g

0x9311,	// (0x0005cef7) grid_highlight_pane_cp2_ParamLimits

0x9311,	// (0x0005cef7) grid_highlight_pane_cp2

0x932b,	// (0x0005cf11) toolbar_button_pane

0x9337,	// (0x0005cf1d) toolbar_button_pane_g1

0x933f,	// (0x0005cf25) toolbar_button_pane_g2

0x9347,	// (0x0005cf2d) toolbar_button_pane_g3

0x934f,	// (0x0005cf35) toolbar_button_pane_g4

0x9357,	// (0x0005cf3d) toolbar_button_pane_g5

0x935f,	// (0x0005cf45) toolbar_button_pane_g6

0x9367,	// (0x0005cf4d) toolbar_button_pane_g7

0x936f,	// (0x0005cf55) toolbar_button_pane_g8

0x9377,	// (0x0005cf5d) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000633ab) toolbar_button_pane_g

0x73a9,	// (0x0005af8f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x73a9,	// (0x0005af8f) list_single_2graphic_pane_g1_cp3

0x73b5,	// (0x0005af9b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x73b5,	// (0x0005af9b) list_single_2graphic_pane_g2_cp3

0x73c6,	// (0x0005afac) list_single_2graphic_pane_g3_cp3

0x73ce,	// (0x0005afb4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x73ce,	// (0x0005afb4) list_single_2graphic_pane_g4_cp3

0x73da,	// (0x0005afc0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x73da,	// (0x0005afc0) list_single_2graphic_pane_t1_cp3

0x73f6,	// (0x0005afdc) list_single_midp_graphic_pane_g2_ParamLimits

0x73f6,	// (0x0005afdc) list_single_midp_graphic_pane_g2

0x51dd,	// (0x00058dc3) aid_zoom_text_primary

0x6d9c,	// (0x0005a982) aid_zoom_text_secondary

0x8d4e,	// (0x0005c934) status_small_pane_g7_ParamLimits

0x8d4e,	// (0x0005c934) status_small_pane_g7

0x8d71,	// (0x0005c957) status_small_pane_t1_ParamLimits

0x5663,	// (0x00059249) title_pane_g2

0x0003,

0xf54e,	// (0x00063134) title_pane_g

0x598b,	// (0x00059571) aid_size_cell_colour_1_pane_ParamLimits

0x598b,	// (0x00059571) aid_size_cell_colour_1_pane

0x599f,	// (0x00059585) aid_size_cell_colour_2_pane_ParamLimits

0x599f,	// (0x00059585) aid_size_cell_colour_2_pane

0x59b3,	// (0x00059599) aid_size_cell_colour_3_pane_ParamLimits

0x59b3,	// (0x00059599) aid_size_cell_colour_3_pane

0x59c7,	// (0x000595ad) aid_size_cell_colour_4_pane_ParamLimits

0x59c7,	// (0x000595ad) aid_size_cell_colour_4_pane

0x634d,	// (0x00059f33) title_pane_stacon_g1_ParamLimits

0x634d,	// (0x00059f33) title_pane_stacon_g1

0x99ef,	// (0x0005d5d5) popup_note_wait_window_g3_ParamLimits

0x99ef,	// (0x0005d5d5) popup_note_wait_window_g3

0x9a65,	// (0x0005d64b) popup_note_wait_window_t5_ParamLimits

0x9a65,	// (0x0005d64b) popup_note_wait_window_t5

0xeb63,	// (0x00062749) main_feb_china_hwr_fs_writing_pane

0x6e40,	// (0x0005aa26) popup_feb_china_hwr_fs_window_ParamLimits

0x6e40,	// (0x0005aa26) popup_feb_china_hwr_fs_window

0x7418,	// (0x0005affe) aid_size_cell_hwr_fs_ParamLimits

0x7418,	// (0x0005affe) aid_size_cell_hwr_fs

0x93c3,	// (0x0005cfa9) bg_popup_sub_pane_cp3_ParamLimits

0x93c3,	// (0x0005cfa9) bg_popup_sub_pane_cp3

0x742d,	// (0x0005b013) grid_hwr_fs_pane_ParamLimits

0x742d,	// (0x0005b013) grid_hwr_fs_pane

0x7445,	// (0x0005b02b) linegrid_hwr_fs_pane_ParamLimits

0x7445,	// (0x0005b02b) linegrid_hwr_fs_pane

0x7455,	// (0x0005b03b) cell_hwr_fs_pane_ParamLimits

0x7455,	// (0x0005b03b) cell_hwr_fs_pane

0x93cf,	// (0x0005cfb5) linegrid_hwr_fs_pane_g1_ParamLimits

0x93cf,	// (0x0005cfb5) linegrid_hwr_fs_pane_g1

0x93db,	// (0x0005cfc1) linegrid_hwr_fs_pane_g2_ParamLimits

0x93db,	// (0x0005cfc1) linegrid_hwr_fs_pane_g2

0x93ed,	// (0x0005cfd3) linegrid_hwr_fs_pane_g3_ParamLimits

0x93ed,	// (0x0005cfd3) linegrid_hwr_fs_pane_g3

0x7477,	// (0x0005b05d) linegrid_hwr_fs_pane_g4_ParamLimits

0x7477,	// (0x0005b05d) linegrid_hwr_fs_pane_g4

0x7491,	// (0x0005b077) linegrid_hwr_fs_pane_g5_ParamLimits

0x7491,	// (0x0005b077) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x000633d6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x000633d6) linegrid_hwr_fs_pane_g

0x93f9,	// (0x0005cfdf) cell_hwr_fs_pane_g1_ParamLimits

0x93f9,	// (0x0005cfdf) cell_hwr_fs_pane_g1

0x91af,	// (0x0005cd95) cell_hwr_fs_pane_g2_ParamLimits

0x91af,	// (0x0005cd95) cell_hwr_fs_pane_g2

0x940f,	// (0x0005cff5) cell_hwr_fs_pane_g3_ParamLimits

0x940f,	// (0x0005cff5) cell_hwr_fs_pane_g3

0x941c,	// (0x0005d002) cell_hwr_fs_pane_g4_ParamLimits

0x941c,	// (0x0005d002) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x000633e1) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000633e1) cell_hwr_fs_pane_g

0x74a7,	// (0x0005b08d) cell_hwr_fs_pane_t1

0xeb63,	// (0x00062749) grid_highlight_pane_cp6

0xeb63,	// (0x00062749) main_idle_act2_pane

0xf272,	// (0x00062e58) aid_inside_area_popup_secondary

0xa084,	// (0x0005dc6a) aid_inside_area_window_primary_ParamLimits

0xa084,	// (0x0005dc6a) aid_inside_area_window_primary

0xadd2,	// (0x0005e9b8) ai2_news_ticker_pane

0xadda,	// (0x0005e9c0) aid_size_cell_ai1_link_ParamLimits

0xadda,	// (0x0005e9c0) aid_size_cell_ai1_link

0xadf4,	// (0x0005e9da) popup_ai2_data_window_ParamLimits

0xadf4,	// (0x0005e9da) popup_ai2_data_window

0xae0a,	// (0x0005e9f0) popup_ai2_link_window_ParamLimits

0xae0a,	// (0x0005e9f0) popup_ai2_link_window

0x93c3,	// (0x0005cfa9) bg_popup_sub_pane_cp4_ParamLimits

0x93c3,	// (0x0005cfa9) bg_popup_sub_pane_cp4

0xae1e,	// (0x0005ea04) grid_ai2_link_pane_ParamLimits

0xae1e,	// (0x0005ea04) grid_ai2_link_pane

0xae35,	// (0x0005ea1b) popup_ai2_link_window_g1_ParamLimits

0xae35,	// (0x0005ea1b) popup_ai2_link_window_g1

0xae41,	// (0x0005ea27) popup_ai2_link_window_g2_ParamLimits

0xae41,	// (0x0005ea27) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000635b4) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000635b4) popup_ai2_link_window_g

0xae50,	// (0x0005ea36) ai2_mp_button_pane

0xae58,	// (0x0005ea3e) ai2_mp_volume_pane

0x95d6,	// (0x0005d1bc) bg_popup_sub_pane_cp5_ParamLimits

0x95d6,	// (0x0005d1bc) bg_popup_sub_pane_cp5

0xae60,	// (0x0005ea46) heading_ai2_gene_pane_ParamLimits

0xae60,	// (0x0005ea46) heading_ai2_gene_pane

0xae6c,	// (0x0005ea52) list_ai2_gene_pane_ParamLimits

0xae6c,	// (0x0005ea52) list_ai2_gene_pane

0xaeb4,	// (0x0005ea9a) cell_ai2_link_pane_ParamLimits

0xaeb4,	// (0x0005ea9a) cell_ai2_link_pane

0xaeca,	// (0x0005eab0) cell_ai2_link_pane_g1

0xeb63,	// (0x00062749) grid_highlight_pane_cp7

0x785e,	// (0x0005b444) ai2_mp_volume_pane_g1

0xaf9a,	// (0x0005eb80) ai2_mp_volume_pane_g2

0xaf0f,	// (0x0005eaf5) list_ai2_gene_pane_t1

0xafa2,	// (0x0005eb88) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x000635cd) ai2_mp_volume_pane_g

0x7866,	// (0x0005b44c) volume_small_pane_cp3

0xafaa,	// (0x0005eb90) aid_size_cell_ai2_button

0xafb2,	// (0x0005eb98) grid_ai2_button_pane

0xafbb,	// (0x0005eba1) cell_ai2_button_pane_ParamLimits

0xafbb,	// (0x0005eba1) cell_ai2_button_pane

0xeb59,	// (0x0006273f) cell_ai2_button_pane_g1

0xeb63,	// (0x00062749) grid_highlight_pane_cp8

0xaf5a,	// (0x0005eb40) ai2_gene_pane_t1_ParamLimits

0xaf5a,	// (0x0005eb40) ai2_gene_pane_t1

0x6d8a,	// (0x0005a970) aid_height_parent_landscape

0xa6ed,	// (0x0005e2d3) aid_height_set_list

0xa6fe,	// (0x0005e2e4) aid_size_parent

0xabf5,	// (0x0005e7db) aid_size_cell_graphic_pane_ParamLimits

0xae7c,	// (0x0005ea62) popup_ai2_data_window_g1_ParamLimits

0xae7c,	// (0x0005ea62) popup_ai2_data_window_g1

0xae88,	// (0x0005ea6e) ai2_news_ticker_pane_g1

0xae90,	// (0x0005ea76) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x000635b9) ai2_news_ticker_pane_g

0xae98,	// (0x0005ea7e) ai2_news_ticker_pane_t1

0xaea6,	// (0x0005ea8c) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x000635be) ai2_news_ticker_pane_t

0xaed3,	// (0x0005eab9) heading_ai2_gene_pane_g1

0xaedb,	// (0x0005eac1) heading_ai2_gene_pane_t1_ParamLimits

0xaedb,	// (0x0005eac1) heading_ai2_gene_pane_t1

0xaef0,	// (0x0005ead6) list_highlight_pane_cp6

0xaef8,	// (0x0005eade) ai2_gene_pane_ParamLimits

0xaef8,	// (0x0005eade) ai2_gene_pane

0xaf1d,	// (0x0005eb03) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x000635c3) list_ai2_gene_pane_t

0xaf2b,	// (0x0005eb11) list_highlight_pane_cp8_ParamLimits

0xaf2b,	// (0x0005eb11) list_highlight_pane_cp8

0xaf3c,	// (0x0005eb22) ai2_gene_pane_g1_ParamLimits

0xaf3c,	// (0x0005eb22) ai2_gene_pane_g1

0xaf4e,	// (0x0005eb34) ai2_gene_pane_g2_ParamLimits

0xaf4e,	// (0x0005eb34) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x000635c8) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x000635c8) ai2_gene_pane_g

0xef10,	// (0x00062af6) scroll_pane_cp12

0x6d47,	// (0x0005a92d) control_pane_t3_ParamLimits

0x6d47,	// (0x0005a92d) control_pane_t3

0x8d62,	// (0x0005c948) status_small_pane_g8_ParamLimits

0x8d62,	// (0x0005c948) status_small_pane_g8

0x6f22,	// (0x0005ab08) popup_find_window_ParamLimits

0x713b,	// (0x0005ad21) popup_note_image_window_ParamLimits

0x346a,	// (0x00057050) list_double2_graphic_pane_vc_g1_ParamLimits

0x346a,	// (0x00057050) list_double2_graphic_pane_vc_g1

0x4662,	// (0x00058248) list_double2_graphic_pane_vc_g2_ParamLimits

0x4662,	// (0x00058248) list_double2_graphic_pane_vc_g2

0x466e,	// (0x00058254) list_double2_graphic_pane_vc_g3_ParamLimits

0x466e,	// (0x00058254) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0006339f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0006339f) list_double2_graphic_pane_vc_g

0x3476,	// (0x0005705c) list_double2_graphic_pane_vc_t1_ParamLimits

0x3476,	// (0x0005705c) list_double2_graphic_pane_vc_t1

0x4662,	// (0x00058248) list_single_heading_pane_vc_g1_ParamLimits

0x4662,	// (0x00058248) list_single_heading_pane_vc_g1

0x466e,	// (0x00058254) list_single_heading_pane_vc_g2_ParamLimits

0x466e,	// (0x00058254) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x000633c0) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x000633c0) list_single_heading_pane_vc_g

0x3744,	// (0x0005732a) list_single_heading_pane_vc_t1_ParamLimits

0x3744,	// (0x0005732a) list_single_heading_pane_vc_t1

0x375a,	// (0x00057340) list_single_heading_pane_vc_t2_ParamLimits

0x375a,	// (0x00057340) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x000633c5) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x000633c5) list_single_heading_pane_vc_t

0x937f,	// (0x0005cf65) list_setting_number_pane_vc_g1_ParamLimits

0x937f,	// (0x0005cf65) list_setting_number_pane_vc_g1

0x938b,	// (0x0005cf71) list_setting_number_pane_vc_g2_ParamLimits

0x938b,	// (0x0005cf71) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633ca) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633ca) list_setting_number_pane_vc_g

0x376c,	// (0x00057352) list_setting_number_pane_vc_t1_ParamLimits

0x376c,	// (0x00057352) list_setting_number_pane_vc_t1

0x3780,	// (0x00057366) list_setting_number_pane_vc_t2_ParamLimits

0x3780,	// (0x00057366) list_setting_number_pane_vc_t2

0x379c,	// (0x00057382) list_setting_number_pane_vc_t3_ParamLimits

0x379c,	// (0x00057382) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x000633cf) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x000633cf) list_setting_number_pane_vc_t

0x37c6,	// (0x000573ac) set_value_pane_vc_ParamLimits

0x37c6,	// (0x000573ac) set_value_pane_vc

0xaab5,	// (0x0005e69b) list_double2_graphic_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double2_graphic_pane_vc

0xaab5,	// (0x0005e69b) list_double2_large_graphic_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double2_large_graphic_pane_vc

0xaab5,	// (0x0005e69b) list_double2_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double2_pane_vc

0xaab5,	// (0x0005e69b) list_double_graphic_heading_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double_graphic_heading_pane_vc

0xaab5,	// (0x0005e69b) list_double_graphic_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double_graphic_pane_vc

0xaab5,	// (0x0005e69b) list_double_heading_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double_heading_pane_vc

0xaac7,	// (0x0005e6ad) list_double_large_graphic_pane_vc_ParamLimits

0xaac7,	// (0x0005e6ad) list_double_large_graphic_pane_vc

0xaab5,	// (0x0005e69b) list_double_number_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double_number_pane_vc

0xaab5,	// (0x0005e69b) list_double_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double_pane_vc

0xaab5,	// (0x0005e69b) list_double_time_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_double_time_pane_vc

0xaab5,	// (0x0005e69b) list_setting_number_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_setting_number_pane_vc

0xaab5,	// (0x0005e69b) list_setting_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_setting_pane_vc

0xaab5,	// (0x0005e69b) list_single_graphic_heading_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_single_graphic_heading_pane_vc

0xaab5,	// (0x0005e69b) list_single_heading_pane_vc_ParamLimits

0xaab5,	// (0x0005e69b) list_single_heading_pane_vc

0xa890,	// (0x0005e476) list_single_number_heading_pane_vc_ParamLimits

0xa890,	// (0x0005e476) list_single_number_heading_pane_vc

0x4206,	// (0x00057dec) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4206,	// (0x00057dec) list_double_graphic_heading_pane_vc_g1

0x4662,	// (0x00058248) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4662,	// (0x00058248) list_double_graphic_heading_pane_vc_g2

0x466e,	// (0x00058254) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x466e,	// (0x00058254) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000635d4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000635d4) list_double_graphic_heading_pane_vc_g

0x4212,	// (0x00057df8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4212,	// (0x00057df8) list_double_graphic_heading_pane_vc_t1

0x4226,	// (0x00057e0c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4226,	// (0x00057e0c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000635db) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000635db) list_double_graphic_heading_pane_vc_t

0x937f,	// (0x0005cf65) list_setting_pane_vc_g1_ParamLimits

0x937f,	// (0x0005cf65) list_setting_pane_vc_g1

0x938b,	// (0x0005cf71) list_setting_pane_vc_g2_ParamLimits

0x938b,	// (0x0005cf71) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x000633ca) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x000633ca) list_setting_pane_vc_g

0x423e,	// (0x00057e24) list_setting_pane_vc_t1_ParamLimits

0x423e,	// (0x00057e24) list_setting_pane_vc_t1

0x425a,	// (0x00057e40) list_setting_pane_vc_t2_ParamLimits

0x425a,	// (0x00057e40) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x0006361e) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x0006361e) list_setting_pane_vc_t

0x37c6,	// (0x000573ac) set_value_pane_cp_vc_ParamLimits

0x37c6,	// (0x000573ac) set_value_pane_cp_vc

0x4662,	// (0x00058248) list_single_number_heading_pane_vc_g1_ParamLimits

0x4662,	// (0x00058248) list_single_number_heading_pane_vc_g1

0x466e,	// (0x00058254) list_single_number_heading_pane_vc_g2_ParamLimits

0x466e,	// (0x00058254) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x000633c0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x000633c0) list_single_number_heading_pane_vc_g

0x4274,	// (0x00057e5a) list_single_number_heading_pane_vc_t1_ParamLimits

0x4274,	// (0x00057e5a) list_single_number_heading_pane_vc_t1

0x428a,	// (0x00057e70) list_single_number_heading_pane_vc_t2_ParamLimits

0x428a,	// (0x00057e70) list_single_number_heading_pane_vc_t2

0x429c,	// (0x00057e82) list_single_number_heading_pane_vc_t3_ParamLimits

0x429c,	// (0x00057e82) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00063623) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00063623) list_single_number_heading_pane_vc_t

0x42ae,	// (0x00057e94) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x42ae,	// (0x00057e94) list_single_graphic_heading_pane_vc_g1

0x4662,	// (0x00058248) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4662,	// (0x00058248) list_single_graphic_heading_pane_vc_g4

0x466e,	// (0x00058254) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x466e,	// (0x00058254) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x0006362a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x0006362a) list_single_graphic_heading_pane_vc_g

0x3744,	// (0x0005732a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3744,	// (0x0005732a) list_single_graphic_heading_pane_vc_t1

0x42ba,	// (0x00057ea0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x42ba,	// (0x00057ea0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x00063631) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x00063631) list_single_graphic_heading_pane_vc_t

0x4662,	// (0x00058248) list_double2_pane_vc_g1_ParamLimits

0x4662,	// (0x00058248) list_double2_pane_vc_g1

0x466e,	// (0x00058254) list_double2_pane_vc_g2_ParamLimits

0x466e,	// (0x00058254) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x000633c0) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x000633c0) list_double2_pane_vc_g

0x42cc,	// (0x00057eb2) list_double2_pane_vc_t1_ParamLimits

0x42cc,	// (0x00057eb2) list_double2_pane_vc_t1

0xa92c,	// (0x0005e512) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa92c,	// (0x0005e512) list_double2_large_graphic_pane_vc_g1

0x4662,	// (0x00058248) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4662,	// (0x00058248) list_double2_large_graphic_pane_vc_g2

0x466e,	// (0x00058254) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x466e,	// (0x00058254) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x00063636) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x00063636) list_double2_large_graphic_pane_vc_g

0x3476,	// (0x0005705c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3476,	// (0x0005705c) list_double2_large_graphic_pane_vc_t1

0xa938,	// (0x0005e51e) list_double_time_pane_vc_g1_ParamLimits

0xa938,	// (0x0005e51e) list_double_time_pane_vc_g1

0xa944,	// (0x0005e52a) list_double_time_pane_vc_g2_ParamLimits

0xa944,	// (0x0005e52a) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x0006363d) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x0006363d) list_double_time_pane_vc_g

0x42e4,	// (0x00057eca) list_double_time_pane_vc_t1_ParamLimits

0x42e4,	// (0x00057eca) list_double_time_pane_vc_t1

0x4308,	// (0x00057eee) list_double_time_pane_vc_t2_ParamLimits

0x4308,	// (0x00057eee) list_double_time_pane_vc_t2

0x4357,	// (0x00057f3d) list_double_time_pane_vc_t3_ParamLimits

0x4357,	// (0x00057f3d) list_double_time_pane_vc_t3

0x4369,	// (0x00057f4f) list_double_time_pane_vc_t4_ParamLimits

0x4369,	// (0x00057f4f) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x00063642) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x00063642) list_double_time_pane_vc_t

0x4662,	// (0x00058248) list_double_pane_vc_g1_ParamLimits

0x4662,	// (0x00058248) list_double_pane_vc_g1

0x466e,	// (0x00058254) list_double_pane_vc_g2_ParamLimits

0x466e,	// (0x00058254) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x000633c0) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x000633c0) list_double_pane_vc_g

0x437d,	// (0x00057f63) list_double_pane_vc_t1_ParamLimits

0x437d,	// (0x00057f63) list_double_pane_vc_t1

0x4391,	// (0x00057f77) list_double_pane_vc_t2_ParamLimits

0x4391,	// (0x00057f77) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x0006364b) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x0006364b) list_double_pane_vc_t

0x4662,	// (0x00058248) list_double_number_pane_vc_g1_ParamLimits

0x4662,	// (0x00058248) list_double_number_pane_vc_g1

0x466e,	// (0x00058254) list_double_number_pane_vc_g2_ParamLimits

0x466e,	// (0x00058254) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x000633c0) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x000633c0) list_double_number_pane_vc_g

0x43a9,	// (0x00057f8f) list_double_number_pane_vc_t1_ParamLimits

0x43a9,	// (0x00057f8f) list_double_number_pane_vc_t1

0x437d,	// (0x00057f63) list_double_number_pane_vc_t2_ParamLimits

0x437d,	// (0x00057f63) list_double_number_pane_vc_t2

0x43bb,	// (0x00057fa1) list_double_number_pane_vc_t3_ParamLimits

0x43bb,	// (0x00057fa1) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x00063650) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x00063650) list_double_number_pane_vc_t

0xa950,	// (0x0005e536) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa950,	// (0x0005e536) list_double_large_graphic_pane_vc_g1

0xa972,	// (0x0005e558) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa972,	// (0x0005e558) list_double_large_graphic_pane_vc_g2

0xa986,	// (0x0005e56c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa986,	// (0x0005e56c) list_double_large_graphic_pane_vc_g3

0x43d3,	// (0x00057fb9) list_double_large_graphic_pane_vc_g4_ParamLimits

0x43d3,	// (0x00057fb9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x00063657) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x00063657) list_double_large_graphic_pane_vc_g

0x43df,	// (0x00057fc5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x43df,	// (0x00057fc5) list_double_large_graphic_pane_vc_t1

0x43fb,	// (0x00057fe1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x43fb,	// (0x00057fe1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x00063660) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x00063660) list_double_large_graphic_pane_vc_t

0x4662,	// (0x00058248) list_double_heading_pane_vc_g1_ParamLimits

0x4662,	// (0x00058248) list_double_heading_pane_vc_g1

0x466e,	// (0x00058254) list_double_heading_pane_vc_g2_ParamLimits

0x466e,	// (0x00058254) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x000633c0) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x000633c0) list_double_heading_pane_vc_g

0x441d,	// (0x00058003) list_double_heading_pane_vc_t1_ParamLimits

0x441d,	// (0x00058003) list_double_heading_pane_vc_t1

0x4431,	// (0x00058017) list_double_heading_pane_vc_t2_ParamLimits

0x4431,	// (0x00058017) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x00063665) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x00063665) list_double_heading_pane_vc_t

0x4449,	// (0x0005802f) list_double_graphic_pane_vc_g1_ParamLimits

0x4449,	// (0x0005802f) list_double_graphic_pane_vc_g1

0xa995,	// (0x0005e57b) list_double_graphic_pane_vc_g2_ParamLimits

0xa995,	// (0x0005e57b) list_double_graphic_pane_vc_g2

0x4662,	// (0x00058248) list_double_graphic_pane_vc_g3_ParamLimits

0x4662,	// (0x00058248) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x0006366a) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x0006366a) list_double_graphic_pane_vc_g

0x445c,	// (0x00058042) list_double_graphic_pane_vc_t1_ParamLimits

0x445c,	// (0x00058042) list_double_graphic_pane_vc_t1

0x447b,	// (0x00058061) list_double_graphic_pane_vc_t2_ParamLimits

0x447b,	// (0x00058061) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00063673) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00063673) list_double_graphic_pane_vc_t

0x5283,	// (0x00058e69) aid_size_cell_fastswap

0x528b,	// (0x00058e71) aid_size_cell_touch_ParamLimits

0x528b,	// (0x00058e71) aid_size_cell_touch

0x54f0,	// (0x000590d6) popup_fast_swap_wide_window_ParamLimits

0x54f0,	// (0x000590d6) popup_fast_swap_wide_window

0x55f6,	// (0x000591dc) touch_pane_ParamLimits

0x55f6,	// (0x000591dc) touch_pane

0xf164,	// (0x00062d4a) button_value_adjust_pane_cp2

0x34a6,	// (0x0005708c) button_value_adjust_pane_cp4

0x34ae,	// (0x00057094) form_field_data_pane_cp2

0x60b9,	// (0x00059c9f) form_field_data_wide_pane_cp2

0xf453,	// (0x00063039) bg_scroll_pane_ParamLimits

0x6549,	// (0x0005a12f) scroll_handle_pane_ParamLimits

0x655d,	// (0x0005a143) scroll_sc2_down_pane_ParamLimits

0x655d,	// (0x0005a143) scroll_sc2_down_pane

0xf484,	// (0x0006306a) scroll_sc2_up_pane_ParamLimits

0xf484,	// (0x0006306a) scroll_sc2_up_pane

0xb670,	// (0x0005f256) grid_wheel_folder_pane_g1_ParamLimits

0xb670,	// (0x0005f256) grid_wheel_folder_pane_g1

0x6936,	// (0x0005a51c) clock_nsta_pane_cp2_ParamLimits

0x6936,	// (0x0005a51c) clock_nsta_pane_cp2

0x8aec,	// (0x0005c6d2) listscroll_midp_pane_ParamLimits

0x8af8,	// (0x0005c6de) midp_canvas_pane

0x8ddc,	// (0x0005c9c2) nsta_clock_indic_pane

0x8e10,	// (0x0005c9f6) listscroll_form_pane_vc

0x8e18,	// (0x0005c9fe) listscroll_set_pane_vc_ParamLimits

0x8e18,	// (0x0005c9fe) listscroll_set_pane_vc

0x8f1d,	// (0x0005cb03) clock_nsta_pane

0x8f98,	// (0x0005cb7e) indicator_nsta_pane

0x9275,	// (0x0005ce5b) bg_popup_sub_pane_cp2_ParamLimits

0x9289,	// (0x0005ce6f) find_pane_cp2_ParamLimits

0x9289,	// (0x0005ce6f) find_pane_cp2

0x929f,	// (0x0005ce85) grid_toobar_pane_ParamLimits

0x9397,	// (0x0005cf7d) list_form_gen_pane_vc_ParamLimits

0x9397,	// (0x0005cf7d) list_form_gen_pane_vc

0x93ad,	// (0x0005cf93) scroll_pane_cp8_vc_ParamLimits

0x93ad,	// (0x0005cf93) scroll_pane_cp8_vc

0x9429,	// (0x0005d00f) data_form_wide_pane_vc_ParamLimits

0x9429,	// (0x0005d00f) data_form_wide_pane_vc

0x9435,	// (0x0005d01b) form_field_data_wide_pane_vc_g1

0x943d,	// (0x0005d023) form_field_data_wide_pane_vc_t1_ParamLimits

0x943d,	// (0x0005d023) form_field_data_wide_pane_vc_t1

0xf178,	// (0x00062d5e) input_focus_pane_cp6_vc_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_cp6_vc

0x976a,	// (0x0005d350) list_midp_pane_ParamLimits

0x9776,	// (0x0005d35c) scroll_pane_cp16_ParamLimits

0x9776,	// (0x0005d35c) scroll_pane_cp16

0x97cc,	// (0x0005d3b2) button_value_adjust_pane_ParamLimits

0x97cc,	// (0x0005d3b2) button_value_adjust_pane

0xa710,	// (0x0005e2f6) button_value_adjust_pane_cp6_ParamLimits

0xa710,	// (0x0005e2f6) button_value_adjust_pane_cp6

0xa836,	// (0x0005e41c) settings_code_pane_cp_ParamLimits

0xa836,	// (0x0005e41c) settings_code_pane_cp

0xeb59,	// (0x0006273f) cell_touch_pane_g1

0xeb59,	// (0x0006273f) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000632e4) cell_touch_pane_g

0xafcd,	// (0x0005ebb3) cell_touch_pane_cp_ParamLimits

0xafcd,	// (0x0005ebb3) cell_touch_pane_cp

0xafdd,	// (0x0005ebc3) cell_touch_pane_ParamLimits

0xafdd,	// (0x0005ebc3) cell_touch_pane

0xeb59,	// (0x0006273f) scroll_sc2_down_pane_g1

0xeb59,	// (0x0006273f) scroll_sc2_up_pane_g1

0xeb63,	// (0x00062749) bg_set_opt_pane_cp4_vc

0xafef,	// (0x0005ebd5) list_set_graphic_pane_vc_g1_ParamLimits

0xafef,	// (0x0005ebd5) list_set_graphic_pane_vc_g1

0xaffb,	// (0x0005ebe1) list_set_graphic_pane_vc_g2_ParamLimits

0xaffb,	// (0x0005ebe1) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x000635e0) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x000635e0) list_set_graphic_pane_vc_g

0xb007,	// (0x0005ebed) text_primary_small_cp13_vc_ParamLimits

0xb007,	// (0x0005ebed) text_primary_small_cp13_vc

0xb01f,	// (0x0005ec05) list_set_graphic_pane_vc_ParamLimits

0xb01f,	// (0x0005ec05) list_set_graphic_pane_vc

0xeb63,	// (0x00062749) input_focus_pane_cp2_vc

0xeb59,	// (0x0006273f) setting_code_pane_vc_g1

0xebc8,	// (0x000627ae) setting_code_pane_vc_t1

0xb032,	// (0x0005ec18) set_text_pane_vc_t1_ParamLimits

0xb032,	// (0x0005ec18) set_text_pane_vc_t1

0xeb63,	// (0x00062749) input_focus_pane_cp1_vc

0xb04e,	// (0x0005ec34) list_set_text_pane_vc

0xeb59,	// (0x0006273f) setting_text_pane_vc_g1

0xeb63,	// (0x00062749) bg_set_opt_pane_cp2_vc

0xebbf,	// (0x000627a5) setting_slider_graphic_pane_vc_g1

0xb058,	// (0x0005ec3e) setting_slider_graphic_pane_vc_t1

0xb068,	// (0x0005ec4e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x000635e5) setting_slider_graphic_pane_vc_t

0xb078,	// (0x0005ec5e) slider_set_pane_cp_vc

0xb080,	// (0x0005ec66) slider_set_pane_vc_g1

0xb089,	// (0x0005ec6f) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x000635ea) slider_set_pane_vc_g

0xf1c4,	// (0x00062daa) set_opt_bg_pane_g1_copy1

0xf1cc,	// (0x00062db2) set_opt_bg_pane_g2_copy1

0xb0b5,	// (0x0005ec9b) set_opt_bg_pane_g3_copy1

0xf1dc,	// (0x00062dc2) set_opt_bg_pane_g4_copy1

0xf1e4,	// (0x00062dca) set_opt_bg_pane_g5_copy1

0xf1ec,	// (0x00062dd2) set_opt_bg_pane_g6_copy1

0xb0bd,	// (0x0005eca3) set_opt_bg_pane_g7_copy1

0xb0c5,	// (0x0005ecab) set_opt_bg_pane_g8_copy1

0xb0cd,	// (0x0005ecb3) set_opt_bg_pane_g9_copy1

0xeb63,	// (0x00062749) bg_set_opt_pane_cp_vc

0xb0d5,	// (0x0005ecbb) setting_slider_pane_vc_t1

0xb0e4,	// (0x0005ecca) setting_slider_pane_vc_t2

0xb0f4,	// (0x0005ecda) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x000635f9) setting_slider_pane_vc_t

0xb104,	// (0x0005ecea) slider_set_pane_vc

0x74e3,	// (0x0005b0c9) volume_set_pane_vc_g1

0x786f,	// (0x0005b455) volume_set_pane_vc_g2

0x7878,	// (0x0005b45e) volume_set_pane_vc_g3

0x7881,	// (0x0005b467) volume_set_pane_vc_g4

0x788a,	// (0x0005b470) volume_set_pane_vc_g5

0x7893,	// (0x0005b479) volume_set_pane_vc_g6

0x789c,	// (0x0005b482) volume_set_pane_vc_g7

0x78a5,	// (0x0005b48b) volume_set_pane_vc_g8

0x78ae,	// (0x0005b494) volume_set_pane_vc_g9

0x78b7,	// (0x0005b49d) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00063600) volume_set_pane_vc_g

0xb10c,	// (0x0005ecf2) volume_set_pane_vc

0xb114,	// (0x0005ecfa) button_value_adjust_pane_cp1_vc

0xb11e,	// (0x0005ed04) list_highlight_pane_cp2_vc

0xb127,	// (0x0005ed0d) list_set_pane_vc_ParamLimits

0xb127,	// (0x0005ed0d) list_set_pane_vc

0xb185,	// (0x0005ed6b) main_pane_set_vc_t1_ParamLimits

0xb185,	// (0x0005ed6b) main_pane_set_vc_t1

0xb19a,	// (0x0005ed80) main_pane_set_vc_t2_ParamLimits

0xb19a,	// (0x0005ed80) main_pane_set_vc_t2

0xb1ac,	// (0x0005ed92) main_pane_set_vc_t3_ParamLimits

0xb1ac,	// (0x0005ed92) main_pane_set_vc_t3

0xb1be,	// (0x0005eda4) main_pane_set_vc_t4_ParamLimits

0xb1be,	// (0x0005eda4) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00063615) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00063615) main_pane_set_vc_t

0xb1d0,	// (0x0005edb6) setting_code_pane_vc_ParamLimits

0xb1d0,	// (0x0005edb6) setting_code_pane_vc

0xb1df,	// (0x0005edc5) setting_slider_graphic_pane_vc

0xb1df,	// (0x0005edc5) setting_slider_pane_vc

0xb1df,	// (0x0005edc5) setting_text_pane_vc

0xb1df,	// (0x0005edc5) setting_volume_pane_vc

0xb1e7,	// (0x0005edcd) scroll_pane_cp121_vc

0xf152,	// (0x00062d38) set_content_pane_vc

0xb1ef,	// (0x0005edd5) button_value_adjust_pane_g1

0xb1f8,	// (0x0005edde) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00063678) button_value_adjust_pane_g

0xb201,	// (0x0005ede7) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb201,	// (0x0005ede7) form_field_slider_wide_pane_vc_t1

0xb215,	// (0x0005edfb) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb215,	// (0x0005edfb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x0006367d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0006367d) form_field_slider_wide_pane_vc_t

0xecdb,	// (0x000628c1) input_focus_pane_cp10_vc_ParamLimits

0xecdb,	// (0x000628c1) input_focus_pane_cp10_vc

0xb243,	// (0x0005ee29) slider_cont_pane_cp1_vc_ParamLimits

0xb243,	// (0x0005ee29) slider_cont_pane_cp1_vc

0xb255,	// (0x0005ee3b) slider_form_pane_g1_cp2

0xb089,	// (0x0005ec6f) slider_form_pane_g2_cp2

0xb282,	// (0x0005ee68) form_field_slider_pane_vc_t3

0xb290,	// (0x0005ee76) form_field_slider_pane_vc_t4

0xb29e,	// (0x0005ee84) slider_form_pane_vc_ParamLimits

0xb29e,	// (0x0005ee84) slider_form_pane_vc

0xb2ab,	// (0x0005ee91) form_field_slider_pane_vc_t1_ParamLimits

0xb2ab,	// (0x0005ee91) form_field_slider_pane_vc_t1

0xb215,	// (0x0005edfb) form_field_slider_pane_vc_t2_ParamLimits

0xb215,	// (0x0005edfb) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0006368f) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0006368f) form_field_slider_pane_vc_t

0xecdb,	// (0x000628c1) input_focus_pane_cp9_vc_ParamLimits

0xecdb,	// (0x000628c1) input_focus_pane_cp9_vc

0xb2c7,	// (0x0005eead) slider_cont_pane_vc_ParamLimits

0xb2c7,	// (0x0005eead) slider_cont_pane_vc

0xb2db,	// (0x0005eec1) list_form_graphic_pane_cp_vc_ParamLimits

0xb2db,	// (0x0005eec1) list_form_graphic_pane_cp_vc

0x9435,	// (0x0005d01b) form_field_popup_wide_pane_vc_g1

0xb2f0,	// (0x0005eed6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb2f0,	// (0x0005eed6) form_field_popup_wide_pane_vc_t1

0xf178,	// (0x00062d5e) input_focus_pane_cp8_vc_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_cp8_vc

0xb335,	// (0x0005ef1b) list_form_wide_pane_vc_ParamLimits

0xb335,	// (0x0005ef1b) list_form_wide_pane_vc

0xb341,	// (0x0005ef27) list_form_graphic_pane_vc_g1

0xb349,	// (0x0005ef2f) list_form_graphic_pane_vc_t1_ParamLimits

0xb349,	// (0x0005ef2f) list_form_graphic_pane_vc_t1

0xebb1,	// (0x00062797) list_highlight_pane_cp5_vc_ParamLimits

0xebb1,	// (0x00062797) list_highlight_pane_cp5_vc

0xb365,	// (0x0005ef4b) list_form_graphic_pane_vc_ParamLimits

0xb365,	// (0x0005ef4b) list_form_graphic_pane_vc

0x9435,	// (0x0005d01b) form_field_popup_pane_vc_g1

0xb37b,	// (0x0005ef61) form_field_popup_pane_vc_t1_ParamLimits

0xb37b,	// (0x0005ef61) form_field_popup_pane_vc_t1

0xf178,	// (0x00062d5e) input_focus_pane_cp7_vc_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_cp7_vc

0xb392,	// (0x0005ef78) list_form_pane_vc_ParamLimits

0xb392,	// (0x0005ef78) list_form_pane_vc

0xb39e,	// (0x0005ef84) data_form_pane_vc_t1_ParamLimits

0xb39e,	// (0x0005ef84) data_form_pane_vc_t1

0xf1c4,	// (0x00062daa) input_focus_pane_vc_g1

0xf1cc,	// (0x00062db2) input_focus_pane_vc_g2

0xf1d4,	// (0x00062dba) input_focus_pane_vc_g3

0xf1dc,	// (0x00062dc2) input_focus_pane_vc_g4

0xf1e4,	// (0x00062dca) input_focus_pane_vc_g5

0xf1ec,	// (0x00062dd2) input_focus_pane_vc_g6

0xf1f4,	// (0x00062dda) input_focus_pane_vc_g7

0xf1fc,	// (0x00062de2) input_focus_pane_vc_g8

0xf204,	// (0x00062dea) input_focus_pane_vc_g9

0xeb59,	// (0x0006273f) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0006326d) input_focus_pane_vc_g

0x9429,	// (0x0005d00f) data_form_pane_vc_ParamLimits

0x9429,	// (0x0005d00f) data_form_pane_vc

0x9435,	// (0x0005d01b) form_field_data_pane_vc_g1

0xb3b9,	// (0x0005ef9f) form_field_data_pane_vc_t1_ParamLimits

0xb3b9,	// (0x0005ef9f) form_field_data_pane_vc_t1

0xf178,	// (0x00062d5e) input_focus_pane_vc_ParamLimits

0xf178,	// (0x00062d5e) input_focus_pane_vc

0xb3d3,	// (0x0005efb9) button_value_adjust_pane_cp3_vc

0xb3db,	// (0x0005efc1) button_value_adjust_pane_cp5_vc

0xb3e3,	// (0x0005efc9) form_field_data_pane_vc_ParamLimits

0xb3e3,	// (0x0005efc9) form_field_data_pane_vc

0xb3fa,	// (0x0005efe0) form_field_data_pane_vc_cp2

0xb402,	// (0x0005efe8) form_field_data_wide_pane_vc_ParamLimits

0xb402,	// (0x0005efe8) form_field_data_wide_pane_vc

0xb418,	// (0x0005effe) form_field_data_wide_pane_vc_cp2

0xb420,	// (0x0005f006) form_field_popup_pane_vc_ParamLimits

0xb420,	// (0x0005f006) form_field_popup_pane_vc

0xb437,	// (0x0005f01d) form_field_popup_wide_pane_vc_ParamLimits

0xb437,	// (0x0005f01d) form_field_popup_wide_pane_vc

0xb44d,	// (0x0005f033) form_field_slider_pane_vc_ParamLimits

0xb44d,	// (0x0005f033) form_field_slider_pane_vc

0xb460,	// (0x0005f046) form_field_slider_wide_pane_vc_ParamLimits

0xb460,	// (0x0005f046) form_field_slider_wide_pane_vc

0xb473,	// (0x0005f059) grid_touch_1_pane_ParamLimits

0xb473,	// (0x0005f059) grid_touch_1_pane

0xb47f,	// (0x0005f065) grid_touch_2_pane_ParamLimits

0xb47f,	// (0x0005f065) grid_touch_2_pane

0x8da7,	// (0x0005c98d) touch_pane_g1_ParamLimits

0x8da7,	// (0x0005c98d) touch_pane_g1

0xb497,	// (0x0005f07d) cell_app_pane_cp_wide_ParamLimits

0xb497,	// (0x0005f07d) cell_app_pane_cp_wide

0xb4a8,	// (0x0005f08e) grid_popup_fast_wide_pane_ParamLimits

0xb4a8,	// (0x0005f08e) grid_popup_fast_wide_pane

0xb4bc,	// (0x0005f0a2) scroll_pane_cp19_ParamLimits

0xb4bc,	// (0x0005f0a2) scroll_pane_cp19

0xeb63,	// (0x00062749) bg_popup_window_pane_cp20

0xb4d0,	// (0x0005f0b6) listscroll_popup_fast_wide_pane

0xebb1,	// (0x00062797) grid_indicator_nsta_pane

0xb4d8,	// (0x0005f0be) clock_nsta_pane_g1

0xb4e1,	// (0x0005f0c7) clock_nsta_pane_t1

0xb4fd,	// (0x0005f0e3) cell_indicator_nsta_pane_ParamLimits

0xb4fd,	// (0x0005f0e3) cell_indicator_nsta_pane

0xb52e,	// (0x0005f114) cell_indicator_nsta_pane_g1

0xb53c,	// (0x0005f122) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x000636a0) cell_indicator_nsta_pane_g

0xb549,	// (0x0005f12f) clock_nsta_pane_cp

0xb551,	// (0x0005f137) indicator_nsta_pane_cp

0xb559,	// (0x0005f13f) nsta_clock_indic_pane_g1

0xebed,	// (0x000627d3) grid_indicator_pane

0x65fb,	// (0x0005a1e1) scroll_pane_cp29

0x6885,	// (0x0005a46b) indicator_nsta_pane_cp2_ParamLimits

0x6885,	// (0x0005a46b) indicator_nsta_pane_cp2

0xebb1,	// (0x00062797) main_apps_wheel_pane

0x964d,	// (0x0005d233) form_midp_field_text_pane_ParamLimits

0x9796,	// (0x0005d37c) scroll_bar_cp050_ParamLimits

0xb5a9,	// (0x0005f18f) cell_indicator_pane_ParamLimits

0xb5a9,	// (0x0005f18f) cell_indicator_pane

0xb5c2,	// (0x0005f1a8) cell_indicator_pane_g1

0xb5cc,	// (0x0005f1b2) grid_wheel_folder_pane_ParamLimits

0xb5cc,	// (0x0005f1b2) grid_wheel_folder_pane

0xb5e2,	// (0x0005f1c8) list_wheel_apps_pane_ParamLimits

0xb5e2,	// (0x0005f1c8) list_wheel_apps_pane

0xb5f3,	// (0x0005f1d9) main_apps_wheel_pane_g1_ParamLimits

0xb5f3,	// (0x0005f1d9) main_apps_wheel_pane_g1

0xb607,	// (0x0005f1ed) main_apps_wheel_pane_g2_ParamLimits

0xb607,	// (0x0005f1ed) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x000636bc) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x000636bc) main_apps_wheel_pane_g

0xb61f,	// (0x0005f205) main_apps_wheel_pane_t1_ParamLimits

0xb61f,	// (0x0005f205) main_apps_wheel_pane_t1

0xb642,	// (0x0005f228) list_wheel_apps_pane_g1

0xb64a,	// (0x0005f230) list_wheel_apps_pane_g2

0xb652,	// (0x0005f238) list_wheel_apps_pane_g3

0xb65c,	// (0x0005f242) list_wheel_apps_pane_g4

0xb666,	// (0x0005f24c) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x000636c1) list_wheel_apps_pane_g

0x6ad4,	// (0x0005a6ba) navi_icon_text_pane

0x8e4c,	// (0x0005ca32) aid_fill_nsta

0xb689,	// (0x0005f26f) navi_icon_text_pane_g1

0xb695,	// (0x0005f27b) navi_icon_text_pane_t1

0x3673,	// (0x00057259) list_set_graphic_pane_t1_ParamLimits

0x3673,	// (0x00057259) list_set_graphic_pane_t1

0x9ecd,	// (0x0005dab3) popup_midp_note_alarm_window_t6_ParamLimits

0x9ecd,	// (0x0005dab3) popup_midp_note_alarm_window_t6

0x9edf,	// (0x0005dac5) popup_midp_note_alarm_window_t7_ParamLimits

0x9edf,	// (0x0005dac5) popup_midp_note_alarm_window_t7

0x9ef1,	// (0x0005dad7) popup_midp_note_alarm_window_t8_ParamLimits

0x9ef1,	// (0x0005dad7) popup_midp_note_alarm_window_t8

0x9f03,	// (0x0005dae9) popup_midp_note_alarm_window_t9_ParamLimits

0x9f03,	// (0x0005dae9) popup_midp_note_alarm_window_t9

0x9f15,	// (0x0005dafb) popup_midp_note_alarm_window_t10_ParamLimits

0x9f15,	// (0x0005dafb) popup_midp_note_alarm_window_t10

0x9f27,	// (0x0005db0d) popup_midp_note_alarm_window_t11_ParamLimits

0x9f27,	// (0x0005db0d) popup_midp_note_alarm_window_t11

0x9f39,	// (0x0005db1f) scroll_pane_cp17_ParamLimits

0x9f39,	// (0x0005db1f) scroll_pane_cp17

0x74e3,	// (0x0005b0c9) volume_small_pane_cp_g1

0x78c0,	// (0x0005b4a6) volume_small_pane_cp_g2

0x78c9,	// (0x0005b4af) volume_small_pane_cp_g3

0x78d2,	// (0x0005b4b8) volume_small_pane_cp_g4

0x78db,	// (0x0005b4c1) volume_small_pane_cp_g5

0x788a,	// (0x0005b470) volume_small_pane_cp_g6

0x78e4,	// (0x0005b4ca) volume_small_pane_cp_g7

0x78ed,	// (0x0005b4d3) volume_small_pane_cp_g8

0x78f6,	// (0x0005b4dc) volume_small_pane_cp_g9

0x78ff,	// (0x0005b4e5) volume_small_pane_cp_g10

0x8bc5,	// (0x0005c7ab) midp_ticker_pane_g1_ParamLimits

0x8bd1,	// (0x0005c7b7) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00063339) midp_ticker_pane_g_ParamLimits

0x8bdd,	// (0x0005c7c3) midp_ticker_pane_t1_ParamLimits

0x8e62,	// (0x0005ca48) aid_fill_nsta_2

0x9782,	// (0x0005d368) list_form2_midp_pane

0xa881,	// (0x0005e467) midp_editing_number_pane_ParamLimits

0xaa93,	// (0x0005e679) midp_ticker_pane_ParamLimits

0xb6a7,	// (0x0005f28d) form2_midp_field_pane

0xb6cb,	// (0x0005f2b1) scroll_pane_cp51

0xb6eb,	// (0x0005f2d1) form2_midp_button_pane_ParamLimits

0xb6eb,	// (0x0005f2d1) form2_midp_button_pane

0xb6fd,	// (0x0005f2e3) form2_midp_content_pane_ParamLimits

0xb6fd,	// (0x0005f2e3) form2_midp_content_pane

0xb717,	// (0x0005f2fd) form2_midp_field_choice_group_pane

0xb71f,	// (0x0005f305) form2_midp_field_pane_g1

0xb727,	// (0x0005f30d) form2_midp_field_pane_g2

0xb72f,	// (0x0005f315) form2_midp_field_pane_g3

0xb737,	// (0x0005f31d) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x000636e6) form2_midp_field_pane_g

0xb73f,	// (0x0005f325) form2_midp_gauge_slider_pane

0xb747,	// (0x0005f32d) form2_midp_gauge_wait_pane

0xb74f,	// (0x0005f335) form2_midp_image_pane_ParamLimits

0xb74f,	// (0x0005f335) form2_midp_image_pane

0xb76a,	// (0x0005f350) form2_midp_label_pane_ParamLimits

0xb76a,	// (0x0005f350) form2_midp_label_pane

0xb783,	// (0x0005f369) form2_midp_label_pane_cp_ParamLimits

0xb783,	// (0x0005f369) form2_midp_label_pane_cp

0xb7a4,	// (0x0005f38a) form2_midp_string_pane_ParamLimits

0xb7a4,	// (0x0005f38a) form2_midp_string_pane

0x7908,	// (0x0005b4ee) form2_midp_text_pane_ParamLimits

0x7908,	// (0x0005b4ee) form2_midp_text_pane

0xb7b6,	// (0x0005f39c) form2_midp_time_pane

0xb7c6,	// (0x0005f3ac) input_focus_pane_cp51_ParamLimits

0xb7c6,	// (0x0005f3ac) input_focus_pane_cp51

0xb7de,	// (0x0005f3c4) form2_midp_label_pane_t1_ParamLimits

0xb7de,	// (0x0005f3c4) form2_midp_label_pane_t1

0x7925,	// (0x0005b50b) form2_mdip_text_pane_t1_ParamLimits

0x7925,	// (0x0005b50b) form2_mdip_text_pane_t1

0x44a5,	// (0x0005808b) form2_midp_time_pane_t1

0xb827,	// (0x0005f40d) form2_midp_gauge_slider_pane_t1

0xb839,	// (0x0005f41f) form2_midp_gauge_slider_pane_t2

0xb84b,	// (0x0005f431) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x000636ef) form2_midp_gauge_slider_pane_t

0xb85d,	// (0x0005f443) form2_midp_slider_pane

0xb869,	// (0x0005f44f) form2_midp_gauge_wait_pane_t1

0xb877,	// (0x0005f45d) form2_midp_wait_pane_ParamLimits

0xb877,	// (0x0005f45d) form2_midp_wait_pane

0xb8a2,	// (0x0005f488) list_single_2graphic_pane_cp4_ParamLimits

0xb8a2,	// (0x0005f488) list_single_2graphic_pane_cp4

0x949e,	// (0x0005d084) list_single_midp_graphic_pane_cp_ParamLimits

0x949e,	// (0x0005d084) list_single_midp_graphic_pane_cp

0xeb63,	// (0x00062749) list_highlight_pane_cp20

0xb8ca,	// (0x0005f4b0) list_single_2graphic_pane_g1_cp4

0xaed3,	// (0x0005eab9) list_single_2graphic_pane_g2_cp4

0xb8d2,	// (0x0005f4b8) list_single_2graphic_pane_t1_cp4

0xebb1,	// (0x00062797) list_highlight_pane_cp21

0xb8e1,	// (0x0005f4c7) list_single_midp_graphic_pane_g4_cp

0xb8f0,	// (0x0005f4d6) list_single_midp_graphic_pane_t1_cp

0xb905,	// (0x0005f4eb) form2_mdip_string_pane_t1_ParamLimits

0xb905,	// (0x0005f4eb) form2_mdip_string_pane_t1

0xeb63,	// (0x00062749) bg_wml_button_pane_cp2

0xeb59,	// (0x0006273f) form2_midp_image_pane_g1

0x4686,	// (0x0005826c) list_double_large_graphic_pane_g5_ParamLimits

0x4686,	// (0x0005826c) list_double_large_graphic_pane_g5

0x8aec,	// (0x0005c6d2) midp_form_pane_ParamLimits

0xebb1,	// (0x00062797) main_apps_wheel_pane_ParamLimits

0x7161,	// (0x0005ad47) popup_preview_window_ParamLimits

0x7161,	// (0x0005ad47) popup_preview_window

0x731c,	// (0x0005af02) popup_touch_info_window_ParamLimits

0x731c,	// (0x0005af02) popup_touch_info_window

0x733a,	// (0x0005af20) popup_touch_menu_window_ParamLimits

0x733a,	// (0x0005af20) popup_touch_menu_window

0xeb4f,	// (0x00062735) bg_popup_sub_pane_cp6

0xba06,	// (0x0005f5ec) list_touch_menu_pane

0xba0e,	// (0x0005f5f4) list_single_touch_menu_pane_ParamLimits

0xba0e,	// (0x0005f5f4) list_single_touch_menu_pane

0xba24,	// (0x0005f60a) list_single_touch_menu_pane_t1

0xebb1,	// (0x00062797) bg_popup_sub_pane_cp7_ParamLimits

0xebb1,	// (0x00062797) bg_popup_sub_pane_cp7

0xba32,	// (0x0005f618) heading_sub_pane

0xba3a,	// (0x0005f620) list_touch_info_pane_ParamLimits

0xba3a,	// (0x0005f620) list_touch_info_pane

0xba49,	// (0x0005f62f) list_single_touch_info_pane_ParamLimits

0xba49,	// (0x0005f62f) list_single_touch_info_pane

0xba5b,	// (0x0005f641) list_single_touch_info_pane_t1

0xba69,	// (0x0005f64f) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x000636fd) list_single_touch_info_pane_t

0x8ae4,	// (0x0005c6ca) bg_popup_heading_pane_cp

0xba77,	// (0x0005f65d) heading_sub_pane_t1

0x93c3,	// (0x0005cfa9) bg_popup_preview_window_pane_cp_ParamLimits

0x93c3,	// (0x0005cfa9) bg_popup_preview_window_pane_cp

0xba32,	// (0x0005f618) heading_preview_pane

0xba3a,	// (0x0005f620) list_preview_pane_ParamLimits

0xba3a,	// (0x0005f620) list_preview_pane

0xba85,	// (0x0005f66b) popup_preview_window_g1

0xba49,	// (0x0005f62f) list_single_preview_pane_ParamLimits

0xba49,	// (0x0005f62f) list_single_preview_pane

0xba8d,	// (0x0005f673) list_single_preview_pane_g1

0xba95,	// (0x0005f67b) list_single_preview_pane_t1

0xba5b,	// (0x0005f641) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00063702) list_single_preview_pane_t

0xbaa3,	// (0x0005f689) bg_popup_heading_pane_cp2_ParamLimits

0xbaa3,	// (0x0005f689) bg_popup_heading_pane_cp2

0xbab9,	// (0x0005f69f) heading_preview_pane_g1

0xbac1,	// (0x0005f6a7) heading_preview_pane_t1_ParamLimits

0xbac1,	// (0x0005f6a7) heading_preview_pane_t1

0xec04,	// (0x000627ea) soft_indicator_pane_t1_ParamLimits

0xeeed,	// (0x00062ad3) scroll_pane_ParamLimits

0xf472,	// (0x00063058) scroll_sc2_left_pane

0xf47b,	// (0x00063061) scroll_sc2_right_pane

0xf49a,	// (0x00063080) scroll_bg_pane_g1_ParamLimits

0xf4af,	// (0x00063095) scroll_bg_pane_g2_ParamLimits

0xf4c7,	// (0x000630ad) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x000632c4) scroll_bg_pane_g_ParamLimits

0xf49a,	// (0x00063080) scroll_handle_pane_g1_ParamLimits

0xf4dc,	// (0x000630c2) scroll_handle_pane_g2_ParamLimits

0xf4c7,	// (0x000630ad) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000632cb) scroll_handle_pane_g_ParamLimits

0x6de4,	// (0x0005a9ca) popup_choice_list_window_ParamLimits

0x6de4,	// (0x0005a9ca) popup_choice_list_window

0x9281,	// (0x0005ce67) choice_list_pane

0x9303,	// (0x0005cee9) cell_toolbar_pane_t1

0x932b,	// (0x0005cf11) toolbar_button_pane_ParamLimits

0xa3f3,	// (0x0005dfd9) ai_gene_pane_1_t2_ParamLimits

0xa3f3,	// (0x0005dfd9) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x000634f3) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x000634f3) ai_gene_pane_1_t

0xbade,	// (0x0005f6c4) scroll_sc2_left_pane_g1

0xbade,	// (0x0005f6c4) scroll_sc2_right_pane_g1

0x8e2a,	// (0x0005ca10) bg_popup_sub_pane_cp10

0xbae8,	// (0x0005f6ce) list_choice_list_pane

0xbb01,	// (0x0005f6e7) list_single_choice_list_pane_ParamLimits

0xbb01,	// (0x0005f6e7) list_single_choice_list_pane

0xbb14,	// (0x0005f6fa) list_single_choice_list_pane_g1

0x62a0,	// (0x00059e86) list_single_choice_list_pane_t1_ParamLimits

0x62a0,	// (0x00059e86) list_single_choice_list_pane_t1

0xbb1c,	// (0x0005f702) choice_list_pane_g1

0xbb24,	// (0x0005f70a) choice_list_pane_t1

0xeb4f,	// (0x00062735) input_focus_pane_cp11

0xf3e7,	// (0x00062fcd) title_pane_stacon_g2_ParamLimits

0xf3e7,	// (0x00062fcd) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000632aa) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000632aa) title_pane_stacon_g

0x8ae4,	// (0x0005c6ca) cursor_press_pane

0x6e8c,	// (0x0005aa72) popup_fep_hwr_window_ParamLimits

0x6e8c,	// (0x0005aa72) popup_fep_hwr_window

0x6f04,	// (0x0005aaea) popup_fep_vkb_window_ParamLimits

0x6f04,	// (0x0005aaea) popup_fep_vkb_window

0xbb32,	// (0x0005f718) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x0006372b) fep_vkb_side_pane_g_ParamLimits

0x797c,	// (0x0005b562) fep_hwr_candidate_pane_ParamLimits

0x797c,	// (0x0005b562) fep_hwr_candidate_pane

0x79a6,	// (0x0005b58c) fep_hwr_side_pane_ParamLimits

0x79a6,	// (0x0005b58c) fep_hwr_side_pane

0x79c6,	// (0x0005b5ac) fep_hwr_top_pane_ParamLimits

0x79c6,	// (0x0005b5ac) fep_hwr_top_pane

0x79de,	// (0x0005b5c4) fep_hwr_write_pane_ParamLimits

0x79de,	// (0x0005b5c4) fep_hwr_write_pane

0xfb45,	// (0x0006372b) fep_vkb_side_pane_g

0xbb3a,	// (0x0005f720) fep_hwr_top_pane_g1

0xbb4c,	// (0x0005f732) fep_hwr_top_pane_g2

0x7a18,	// (0x0005b5fe) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00063707) fep_hwr_top_pane_g

0x7a2d,	// (0x0005b613) fep_hwr_top_text_pane

0x12f9,	// (0x00054edf) fep_hwr_top_text_pane_g1

0xbb82,	// (0x0005f768) fep_hwr_top_text_pane_t1

0x7b23,	// (0x0005b709) fep_hwr_candidate_pane_g1

0xbdc7,	// (0x0005f9ad) fep_vkb_keypad_pane_g3_ParamLimits

0xbdc7,	// (0x0005f9ad) fep_vkb_keypad_pane_g3

0xbdef,	// (0x0005f9d5) fep_vkb_keypad_pane_g4_ParamLimits

0xbdef,	// (0x0005f9d5) fep_vkb_keypad_pane_g4

0xbe5e,	// (0x0005fa44) fep_vkb_bottom_pane_g2_ParamLimits

0xbe5e,	// (0x0005fa44) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00063732) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00063732) fep_vkb_bottom_pane_g

0xbade,	// (0x0005f6c4) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x0006373c) cell_vkb_side_pane_g

0xbee9,	// (0x0005facf) cell_vkb_side_pane_t1

0xbef7,	// (0x0005fadd) cell_vkb_side_pane_t1_copy1

0xbade,	// (0x0005f6c4) bg_fep_vkb_candidate_pane_g2

0xc023,	// (0x0005fc09) cell_vkb_candidate_pane_ParamLimits

0xbb90,	// (0x0005f776) aid_size_cell_vkb_ParamLimits

0xbb90,	// (0x0005f776) aid_size_cell_vkb

0xc023,	// (0x0005fc09) cell_vkb_candidate_pane

0x7b4a,	// (0x0005b730) bg_popup_fep_shadow_pane_g1

0xbc1e,	// (0x0005f804) fep_vkb_bottom_pane_ParamLimits

0xbc1e,	// (0x0005f804) fep_vkb_bottom_pane

0xbc54,	// (0x0005f83a) fep_vkb_candidate_pane_ParamLimits

0xbc54,	// (0x0005f83a) fep_vkb_candidate_pane

0xbc70,	// (0x0005f856) fep_vkb_keypad_pane_ParamLimits

0xbc70,	// (0x0005f856) fep_vkb_keypad_pane

0xbcaf,	// (0x0005f895) fep_vkb_side_pane_ParamLimits

0xbcaf,	// (0x0005f895) fep_vkb_side_pane

0xbceb,	// (0x0005f8d1) fep_vkb_top_pane_ParamLimits

0xbceb,	// (0x0005f8d1) fep_vkb_top_pane

0xbd20,	// (0x0005f906) fep_vkb_top_pane_g1_ParamLimits

0xbd20,	// (0x0005f906) fep_vkb_top_pane_g1

0xbd2f,	// (0x0005f915) fep_vkb_top_pane_g2_ParamLimits

0xbd2f,	// (0x0005f915) fep_vkb_top_pane_g2

0xbd3e,	// (0x0005f924) fep_vkb_top_pane_g3_ParamLimits

0xbd3e,	// (0x0005f924) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00063722) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00063722) fep_vkb_top_pane_g

0xbd5c,	// (0x0005f942) fep_vkb_top_text_pane_ParamLimits

0xbd5c,	// (0x0005f942) fep_vkb_top_text_pane

0xbd6d,	// (0x0005f953) fep_vkb_side_pane_g1_ParamLimits

0xbd6d,	// (0x0005f953) fep_vkb_side_pane_g1

0xbdb6,	// (0x0005f99c) grid_vkb_side_pane_ParamLimits

0xbdb6,	// (0x0005f99c) grid_vkb_side_pane

0x7b52,	// (0x0005b738) bg_popup_fep_shadow_pane_g2

0x7b5b,	// (0x0005b741) bg_popup_fep_shadow_pane_g3

0x7b63,	// (0x0005b749) bg_popup_fep_shadow_pane_g4

0x7b6c,	// (0x0005b752) bg_popup_fep_shadow_pane_g5

0x7b76,	// (0x0005b75c) bg_popup_fep_shadow_pane_g6

0x7b7e,	// (0x0005b764) bg_popup_fep_shadow_pane_g7

0xf1dc,	// (0x00062dc2) bg_popup_fep_shadow_pane_g8

0xbe0d,	// (0x0005f9f3) grid_vkb_keypad_number_pane_ParamLimits

0xbe0d,	// (0x0005f9f3) grid_vkb_keypad_number_pane

0xbe1d,	// (0x0005fa03) grid_vkb_keypad_pane_ParamLimits

0xbe1d,	// (0x0005fa03) grid_vkb_keypad_pane

0xbe43,	// (0x0005fa29) fep_vkb_bottom_pane_g1_ParamLimits

0xbe43,	// (0x0005fa29) fep_vkb_bottom_pane_g1

0xbe6c,	// (0x0005fa52) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbe6c,	// (0x0005fa52) grid_vkb_keypad_bottom_left_pane

0xbe81,	// (0x0005fa67) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbe81,	// (0x0005fa67) grid_vkb_keypad_bottom_right_pane

0xbe96,	// (0x0005fa7c) fep_vkb_top_text_pane_g1

0xbeb1,	// (0x0005fa97) fep_vkb_top_text_pane_t1

0xbec6,	// (0x0005faac) cell_vkb_side_pane_ParamLimits

0xbec6,	// (0x0005faac) cell_vkb_side_pane

0xbade,	// (0x0005f6c4) cell_vkb_side_pane_g1

0xbf05,	// (0x0005faeb) cell_vkb_keypad_pane_ParamLimits

0xbf05,	// (0x0005faeb) cell_vkb_keypad_pane

0xbf7a,	// (0x0005fb60) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x0006374f) bg_popup_fep_shadow_pane_g

0x7b90,	// (0x0005b776) cell_hwr_side_pane_g1

0x7b90,	// (0x0005b776) cell_hwr_side_pane_g2

0xbf84,	// (0x0005fb6a) cell_vkb_keypad_pane_t1

0xbf92,	// (0x0005fb78) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbf92,	// (0x0005fb78) cell_vkb_keypad_bottom_left_pane

0xbfaf,	// (0x0005fb95) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbfaf,	// (0x0005fb95) cell_vkb_keypad_bottom_right_pane

0xbade,	// (0x0005f6c4) cell_vkb_keypad_bottom_left_pane_g1

0xbade,	// (0x0005f6c4) cell_vkb_keypad_bottom_right_pane_g1

0xbfe8,	// (0x0005fbce) cell_vkb_keypad_number_pane_ParamLimits

0xbfe8,	// (0x0005fbce) cell_vkb_keypad_number_pane

0xc007,	// (0x0005fbed) cell_vkb_keypad_number_pane_g1

0xc011,	// (0x0005fbf7) cell_vkb_keypad_number_pane_g2

0xc01a,	// (0x0005fc00) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00063741) cell_vkb_keypad_number_pane_g

0xbf84,	// (0x0005fb6a) cell_vkb_keypad_number_pane_t1

0xc03e,	// (0x0005fc24) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x00063762) cell_hwr_side_pane_g

0xc057,	// (0x0005fc3d) cell_hwr_side_pane_t1

0x7b9a,	// (0x0005b780) cell_hwr_side_pane_t1_copy1

0x7ba8,	// (0x0005b78e) cell_hwr_candidate_pane_g1

0x7bd7,	// (0x0005b7bd) cell_hwr_candidate_pane_t1

0xbade,	// (0x0005f6c4) cell_vkb_candidate_pane_g2

0xc09b,	// (0x0005fc81) cell_vkb_candidate_pane_t1

0x7943,	// (0x0005b529) bg_popup_fep_shadow_pane_ParamLimits

0x7943,	// (0x0005b529) bg_popup_fep_shadow_pane

0x79f8,	// (0x0005b5de) bg_fep_hwr_top_pane_g4

0xbb5e,	// (0x0005f744) bg_hwr_side_pane_g1_ParamLimits

0xbb5e,	// (0x0005f744) bg_hwr_side_pane_g1

0x7a69,	// (0x0005b64f) cell_hwr_side_pane_ParamLimits

0x7a69,	// (0x0005b64f) cell_hwr_side_pane

0x7aa4,	// (0x0005b68a) fep_hwr_write_pane_g1_ParamLimits

0x7aa4,	// (0x0005b68a) fep_hwr_write_pane_g1

0x7ab1,	// (0x0005b697) fep_hwr_write_pane_g2_ParamLimits

0x7ab1,	// (0x0005b697) fep_hwr_write_pane_g2

0x7abe,	// (0x0005b6a4) fep_hwr_write_pane_g3_ParamLimits

0x7abe,	// (0x0005b6a4) fep_hwr_write_pane_g3

0x7acc,	// (0x0005b6b2) fep_hwr_write_pane_g4_ParamLimits

0x7acc,	// (0x0005b6b2) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x0006370e) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x0006370e) fep_hwr_write_pane_g

0x79f8,	// (0x0005b5de) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x79f8,	// (0x0005b5de) bg_fep_hwr_candidate_pane_g2

0x7ae1,	// (0x0005b6c7) cell_hwr_candidate_pane_ParamLimits

0x7ae1,	// (0x0005b6c7) cell_hwr_candidate_pane

0x7b23,	// (0x0005b709) fep_hwr_candidate_pane_g1_ParamLimits

0xbbbe,	// (0x0005f7a4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbbbe,	// (0x0005f7a4) bg_popup_fep_shadow_pane_cp2

0xbd4e,	// (0x0005f934) fep_vkb_top_pane_g4_ParamLimits

0xbd4e,	// (0x0005f934) fep_vkb_top_pane_g4

0xbd94,	// (0x0005f97a) fep_vkb_side_pane_g2_ParamLimits

0xbd94,	// (0x0005f97a) fep_vkb_side_pane_g2

0x5fb8,	// (0x00059b9e) list_setting_pane_t4_ParamLimits

0x5fb8,	// (0x00059b9e) list_setting_pane_t4

0x6052,	// (0x00059c38) list_setting_number_pane_t5_ParamLimits

0x6052,	// (0x00059c38) list_setting_number_pane_t5

0x662a,	// (0x0005a210) list_double_heading_pane_cp2_ParamLimits

0x662a,	// (0x0005a210) list_double_heading_pane_cp2

0xaa87,	// (0x0005e66d) list_double_heading_pane_g1_cp2_ParamLimits

0xaa87,	// (0x0005e66d) list_double_heading_pane_g1_cp2

0xc0a9,	// (0x0005fc8f) list_double_heading_pane_g2_cp2_ParamLimits

0xc0a9,	// (0x0005fc8f) list_double_heading_pane_g2_cp2

0xc0bd,	// (0x0005fca3) list_double_heading_pane_t1_cp2_ParamLimits

0xc0bd,	// (0x0005fca3) list_double_heading_pane_t1_cp2

0xc0d3,	// (0x0005fcb9) list_double_heading_pane_t2_cp2_ParamLimits

0xc0d3,	// (0x0005fcb9) list_double_heading_pane_t2_cp2

0xeb47,	// (0x0006272d) aid_value_unit2

0x553c,	// (0x00059122) popup_preview_fixed_window

0xece9,	// (0x000628cf) bg_popup_preview_window_pane_cp02

0xc0e5,	// (0x0005fccb) list_preview_fixed_pane

0xc12b,	// (0x0005fd11) list_empty_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_empty_pane_fp

0xc12b,	// (0x0005fd11) list_single_cale_day_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_single_cale_day_pane_fp

0xc12b,	// (0x0005fd11) list_single_graphic_heading_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_single_graphic_heading_pane_fp

0xc12b,	// (0x0005fd11) list_single_graphic_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_single_graphic_pane_fp

0xc12b,	// (0x0005fd11) list_single_heading_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_single_heading_pane_fp

0xc12b,	// (0x0005fd11) list_single_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_single_pane_fp

0xc141,	// (0x0005fd27) list_single_pane_fp_g1_ParamLimits

0xc141,	// (0x0005fd27) list_single_pane_fp_g1

0xc14d,	// (0x0005fd33) list_single_pane_fp_g2_ParamLimits

0xc14d,	// (0x0005fd33) list_single_pane_fp_g2

0xc159,	// (0x0005fd3f) list_single_pane_fp_g3_ParamLimits

0xc159,	// (0x0005fd3f) list_single_pane_fp_g3

0xc16d,	// (0x0005fd53) list_single_pane_fp_g4_ParamLimits

0xc16d,	// (0x0005fd53) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00063775) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00063775) list_single_pane_fp_g

0x44b8,	// (0x0005809e) list_single_pane_fp_t1_ParamLimits

0x44b8,	// (0x0005809e) list_single_pane_fp_t1

0x44cf,	// (0x000580b5) list_single_graphic_pane_fp_g1_ParamLimits

0x44cf,	// (0x000580b5) list_single_graphic_pane_fp_g1

0xc141,	// (0x0005fd27) list_single_graphic_pane_fp_g2_ParamLimits

0xc141,	// (0x0005fd27) list_single_graphic_pane_fp_g2

0xc14d,	// (0x0005fd33) list_single_graphic_pane_fp_g3_ParamLimits

0xc14d,	// (0x0005fd33) list_single_graphic_pane_fp_g3

0xc159,	// (0x0005fd3f) list_single_graphic_pane_fp_g4_ParamLimits

0xc159,	// (0x0005fd3f) list_single_graphic_pane_fp_g4

0xc16d,	// (0x0005fd53) list_single_graphic_pane_fp_g5_ParamLimits

0xc16d,	// (0x0005fd53) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x0006377e) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x0006377e) list_single_graphic_pane_fp_g

0x44db,	// (0x000580c1) list_single_graphic_pane_fp_t1_ParamLimits

0x44db,	// (0x000580c1) list_single_graphic_pane_fp_t1

0x44cf,	// (0x000580b5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x44cf,	// (0x000580b5) list_single_graphic_heading_pane_fp_g1

0xc141,	// (0x0005fd27) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc141,	// (0x0005fd27) list_single_graphic_heading_pane_fp_g2

0xc14d,	// (0x0005fd33) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc14d,	// (0x0005fd33) list_single_graphic_heading_pane_fp_g3

0xc159,	// (0x0005fd3f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc159,	// (0x0005fd3f) list_single_graphic_heading_pane_fp_g4

0xc16d,	// (0x0005fd53) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc16d,	// (0x0005fd53) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x0006377e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x0006377e) list_single_graphic_heading_pane_fp_g

0x44f1,	// (0x000580d7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x44f1,	// (0x000580d7) list_single_graphic_heading_pane_fp_t1

0x4507,	// (0x000580ed) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4507,	// (0x000580ed) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00063789) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00063789) list_single_graphic_heading_pane_fp_t

0x4519,	// (0x000580ff) list_single_cale_day_pane_fp_g1_ParamLimits

0x4519,	// (0x000580ff) list_single_cale_day_pane_fp_g1

0xc179,	// (0x0005fd5f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc179,	// (0x0005fd5f) list_single_cale_day_pane_fp_g2

0xa9b2,	// (0x0005e598) list_single_cale_day_pane_fp_g3_ParamLimits

0xa9b2,	// (0x0005e598) list_single_cale_day_pane_fp_g3

0xa9da,	// (0x0005e5c0) list_single_cale_day_pane_fp_g4_ParamLimits

0xa9da,	// (0x0005e5c0) list_single_cale_day_pane_fp_g4

0xa9fe,	// (0x0005e5e4) list_single_cale_day_pane_fp_g5_ParamLimits

0xa9fe,	// (0x0005e5e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x0006378e) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x0006378e) list_single_cale_day_pane_fp_g

0x4551,	// (0x00058137) list_single_cale_day_pane_fp_t1_ParamLimits

0x4551,	// (0x00058137) list_single_cale_day_pane_fp_t1

0x4577,	// (0x0005815d) list_single_cale_day_pane_fp_t2_ParamLimits

0x4577,	// (0x0005815d) list_single_cale_day_pane_fp_t2

0x4590,	// (0x00058176) list_single_cale_day_pane_fp_t3_ParamLimits

0x4590,	// (0x00058176) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00063799) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00063799) list_single_cale_day_pane_fp_t

0xc141,	// (0x0005fd27) list_empty_pane_fp_g1_ParamLimits

0xc141,	// (0x0005fd27) list_empty_pane_fp_g1

0x45a9,	// (0x0005818f) list_empty_pane_fp_t1

0x45b7,	// (0x0005819d) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x000637a0) list_empty_pane_fp_t

0xc141,	// (0x0005fd27) list_single_heading_pane_fp_g1_ParamLimits

0xc141,	// (0x0005fd27) list_single_heading_pane_fp_g1

0xc14d,	// (0x0005fd33) list_single_heading_pane_fp_g2_ParamLimits

0xc14d,	// (0x0005fd33) list_single_heading_pane_fp_g2

0xc159,	// (0x0005fd3f) list_single_heading_pane_fp_g3_ParamLimits

0xc159,	// (0x0005fd3f) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x000637a5) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x000637a5) list_single_heading_pane_fp_g

0x45c5,	// (0x000581ab) list_single_heading_pane_fp_t1_ParamLimits

0x45c5,	// (0x000581ab) list_single_heading_pane_fp_t1

0x45d7,	// (0x000581bd) list_single_heading_pane_fp_t2_ParamLimits

0x45d7,	// (0x000581bd) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x000637ac) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x000637ac) list_single_heading_pane_fp_t

0x62f8,	// (0x00059ede) aid_size_cell_fast

0xecbe,	// (0x000628a4) soft_indicator_pane_cp1_t1

0x6301,	// (0x00059ee7) cell_app_pane_cp2_ParamLimits

0x6301,	// (0x00059ee7) cell_app_pane_cp2

0x7965,	// (0x0005b54b) fep_hwr_candidate_drop_down_list_pane

0x7b3d,	// (0x0005b723) fep_hwr_candidate_pane_g3_ParamLimits

0x7b3d,	// (0x0005b723) fep_hwr_candidate_pane_g3

0x3444,	// (0x0005702a) fep_hwr_candidate_pane_g4_ParamLimits

0x3444,	// (0x0005702a) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x0006371b) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x0006371b) fep_hwr_candidate_pane_g

0xbc43,	// (0x0005f829) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbc43,	// (0x0005f829) fep_vkb_candidate_drop_down_list_pane

0xc046,	// (0x0005fc2c) fep_vkb_candidate_pane_g3

0xc04e,	// (0x0005fc34) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00063748) fep_vkb_candidate_pane_g

0x7ba8,	// (0x0005b78e) cell_hwr_candidate_pane_g1_ParamLimits

0x7bb6,	// (0x0005b79c) cell_hwr_candidate_pane_g3_ParamLimits

0x7bb6,	// (0x0005b79c) cell_hwr_candidate_pane_g3

0xcae4,	// (0x000606ca) cell_hwr_candidate_pane_g4_ParamLimits

0xcae4,	// (0x000606ca) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00063767) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00063767) cell_hwr_candidate_pane_g

0xc065,	// (0x0005fc4b) cell_vkb_candidate_pane_g3_ParamLimits

0xc065,	// (0x0005fc4b) cell_vkb_candidate_pane_g3

0xc080,	// (0x0005fc66) cell_vkb_candidate_pane_g4_ParamLimits

0xc080,	// (0x0005fc66) cell_vkb_candidate_pane_g4

0xc185,	// (0x0005fd6b) cell_app_pane_cp2_g1_ParamLimits

0xc185,	// (0x0005fd6b) cell_app_pane_cp2_g1

0xc1a3,	// (0x0005fd89) cell_app_pane_cp2_g2_ParamLimits

0xc1a3,	// (0x0005fd89) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x000637b1) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x000637b1) cell_app_pane_cp2_g

0xc1af,	// (0x0005fd95) cell_app_pane_cp2_t1_ParamLimits

0xc1af,	// (0x0005fd95) cell_app_pane_cp2_t1

0xf178,	// (0x00062d5e) grid_highlight_pane_cp1_ParamLimits

0xf178,	// (0x00062d5e) grid_highlight_pane_cp1

0x7bf5,	// (0x0005b7db) cell_hwr_candidate_pane_cp1_ParamLimits

0x7bf5,	// (0x0005b7db) cell_hwr_candidate_pane_cp1

0x7ba8,	// (0x0005b78e) fep_hwr_candidate_drop_down_list_pane_g1

0x7c14,	// (0x0005b7fa) fep_hwr_candidate_drop_down_list_pane_g2

0x7c21,	// (0x0005b807) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x000637b6) fep_hwr_candidate_drop_down_list_pane_g

0x7c2e,	// (0x0005b814) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c37,	// (0x0005b81d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c37,	// (0x0005b81d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c44,	// (0x0005b82a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c44,	// (0x0005b82a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c51,	// (0x0005b837) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c51,	// (0x0005b837) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c5e,	// (0x0005b844) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c5e,	// (0x0005b844) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c79,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c79,	// (0x0005b85f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7c94,	// (0x0005b87a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c94,	// (0x0005b87a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7caf,	// (0x0005b895) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7caf,	// (0x0005b895) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7cca,	// (0x0005b8b0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cca,	// (0x0005b8b0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x000637bd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x000637bd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc1c1,	// (0x0005fda7) cell_vkb_candidate_pane_cp1_ParamLimits

0xc1c1,	// (0x0005fda7) cell_vkb_candidate_pane_cp1

0xbd4e,	// (0x0005f934) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd4e,	// (0x0005f934) fep_vkb_candidate_drop_down_list_pane_g1

0xc1e1,	// (0x0005fdc7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc1e1,	// (0x0005fdc7) fep_vkb_candidate_drop_down_list_pane_g2

0xc1ee,	// (0x0005fdd4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc1ee,	// (0x0005fdd4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x000637ce) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x000637ce) fep_vkb_candidate_drop_down_list_pane_g

0xc1fb,	// (0x0005fde1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc1fb,	// (0x0005fde1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc208,	// (0x0005fdee) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc208,	// (0x0005fdee) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc215,	// (0x0005fdfb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc215,	// (0x0005fdfb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc221,	// (0x0005fe07) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc221,	// (0x0005fe07) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc22d,	// (0x0005fe13) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc22d,	// (0x0005fe13) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc24e,	// (0x0005fe34) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc24e,	// (0x0005fe34) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc26f,	// (0x0005fe55) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc26f,	// (0x0005fe55) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc290,	// (0x0005fe76) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc290,	// (0x0005fe76) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc2b1,	// (0x0005fe97) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc2b1,	// (0x0005fe97) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x000637d5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x000637d5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5656,	// (0x0005923c) title_pane_g1_ParamLimits

0x5663,	// (0x00059249) title_pane_g2_ParamLimits

0xf54e,	// (0x00063134) title_pane_g_ParamLimits

0x12f1,	// (0x00054ed7) aid_call2_pane

0x12e9,	// (0x00054ecf) aid_call_pane

0x12f9,	// (0x00054edf) popup_clock_analogue_window_g1

0x12f9,	// (0x00054edf) popup_clock_analogue_window_g2

0x660b,	// (0x0005a1f1) popup_clock_analogue_window_g3

0x6614,	// (0x0005a1fa) popup_clock_analogue_window_g4

0xeb59,	// (0x0006273f) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x000632d9) popup_clock_analogue_window_g

0x661c,	// (0x0005a202) popup_clock_analogue_window_t1

0x6654,	// (0x0005a23a) clock_digital_number_pane_ParamLimits

0x6654,	// (0x0005a23a) clock_digital_number_pane

0x6660,	// (0x0005a246) clock_digital_number_pane_cp02_ParamLimits

0x6660,	// (0x0005a246) clock_digital_number_pane_cp02

0x666c,	// (0x0005a252) clock_digital_number_pane_cp03_ParamLimits

0x666c,	// (0x0005a252) clock_digital_number_pane_cp03

0x6678,	// (0x0005a25e) clock_digital_number_pane_cp04_ParamLimits

0x6678,	// (0x0005a25e) clock_digital_number_pane_cp04

0x6684,	// (0x0005a26a) clock_digital_separator_pane_ParamLimits

0x6684,	// (0x0005a26a) clock_digital_separator_pane

0x6690,	// (0x0005a276) popup_clock_digital_window_t1_ParamLimits

0x6690,	// (0x0005a276) popup_clock_digital_window_t1

0xeb59,	// (0x0006273f) clock_digital_number_pane_g1

0xeb59,	// (0x0006273f) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000632e4) clock_digital_number_pane_g

0xeb59,	// (0x0006273f) clock_digital_separator_pane_g1

0xeb59,	// (0x0006273f) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000632e4) clock_digital_separator_pane_g

0x8e4c,	// (0x0005ca32) aid_fill_nsta_ParamLimits

0x8f98,	// (0x0005cb7e) indicator_nsta_pane_ParamLimits

0x9111,	// (0x0005ccf7) popup_clock_analogue_window

0x9111,	// (0x0005ccf7) popup_clock_digital_window

0xebb1,	// (0x00062797) grid_indicator_nsta_pane_ParamLimits

0xb4ef,	// (0x0005f0d5) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x0006369b) clock_nsta_pane_t

0x6536,	// (0x0005a11c) aid_size_max_handle

0x6540,	// (0x0005a126) aid_size_min_handle

0x8ae4,	// (0x0005c6ca) editor_scroll_pane

0xc2cc,	// (0x0005feb2) ex_editor_pane

0xf28b,	// (0x00062e71) scroll_pane_cp13

0xef19,	// (0x00062aff) scroll_pane_cp14

0x1328,	// (0x00054f0e) scroll_pane_cp36

0x663e,	// (0x0005a224) list_single_graphic_hl_pane_cp2_ParamLimits

0x663e,	// (0x0005a224) list_single_graphic_hl_pane_cp2

0x7788,	// (0x0005b36e) list_single_graphic_hl_pane_ParamLimits

0x7788,	// (0x0005b36e) list_single_graphic_hl_pane

0x7ce5,	// (0x0005b8cb) aid_size_min_hl_cp1

0xc2d4,	// (0x0005feba) list_highlight_pane_cp34_ParamLimits

0xc2d4,	// (0x0005feba) list_highlight_pane_cp34

0xc2e5,	// (0x0005fecb) list_single_graphic_hl_pane_g1_ParamLimits

0xc2e5,	// (0x0005fecb) list_single_graphic_hl_pane_g1

0x7cee,	// (0x0005b8d4) list_single_graphic_hl_pane_g2_ParamLimits

0x7cee,	// (0x0005b8d4) list_single_graphic_hl_pane_g2

0x7cee,	// (0x0005b8d4) list_single_graphic_hl_pane_g3_ParamLimits

0x7cee,	// (0x0005b8d4) list_single_graphic_hl_pane_g3

0x8a55,	// (0x0005c63b) list_single_graphic_hl_pane_g4_ParamLimits

0x8a55,	// (0x0005c63b) list_single_graphic_hl_pane_g4

0x7cfa,	// (0x0005b8e0) list_single_graphic_hl_pane_g5_ParamLimits

0x7cfa,	// (0x0005b8e0) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x000637e6) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x000637e6) list_single_graphic_hl_pane_g

0x7d0e,	// (0x0005b8f4) list_single_graphic_hl_pane_t1_ParamLimits

0x7d0e,	// (0x0005b8f4) list_single_graphic_hl_pane_t1

0xc2f2,	// (0x0005fed8) aid_size_min_hl_cp2

0xc2fb,	// (0x0005fee1) list_highlight_pane_cp34_cp2_ParamLimits

0xc2fb,	// (0x0005fee1) list_highlight_pane_cp34_cp2

0xc2e5,	// (0x0005fecb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc2e5,	// (0x0005fecb) list_single_graphic_hl_pane_g1_cp2

0xc308,	// (0x0005feee) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc308,	// (0x0005feee) list_single_graphic_hl_pane_g2_cp2

0xc314,	// (0x0005fefa) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc314,	// (0x0005fefa) list_single_graphic_hl_pane_g3_cp2

0x8a1d,	// (0x0005c603) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8a1d,	// (0x0005c603) list_single_graphic_hl_pane_g4_cp2

0xc322,	// (0x0005ff08) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc322,	// (0x0005ff08) list_single_graphic_hl_pane_g5_cp2

0x6c84,	// (0x0005a86a) control_pane_g4_ParamLimits

0x6c84,	// (0x0005a86a) control_pane_g4

0x8e2a,	// (0x0005ca10) bg_popup_sub_pane_cp10_ParamLimits

0xbae8,	// (0x0005f6ce) list_choice_list_pane_ParamLimits

0xbaf7,	// (0x0005f6dd) scroll_pane_cp23

0xece9,	// (0x000628cf) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0e5,	// (0x0005fccb) list_preview_fixed_pane_ParamLimits

0xc0fb,	// (0x0005fce1) list_preview_fixed_pane_cp_ParamLimits

0xc0fb,	// (0x0005fce1) list_preview_fixed_pane_cp

0xc107,	// (0x0005fced) popup_preview_fixed_window_g1_ParamLimits

0xc107,	// (0x0005fced) popup_preview_fixed_window_g1

0xc113,	// (0x0005fcf9) popup_preview_fixed_window_g2_ParamLimits

0xc113,	// (0x0005fcf9) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x0006376e) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x0006376e) popup_preview_fixed_window_g

0x6410,	// (0x00059ff6) aid_navi_side_left_pane_ParamLimits

0x6425,	// (0x0005a00b) aid_navi_side_right_pane_ParamLimits

0x643d,	// (0x0005a023) navi_icon_pane_stacon_ParamLimits

0x6451,	// (0x0005a037) navi_navi_pane_stacon_ParamLimits

0x643d,	// (0x0005a023) navi_text_pane_stacon_ParamLimits

0x540b,	// (0x00058ff1) main_text_info_pane

0xc34c,	// (0x0005ff32) listscroll_text_info_pane

0xc354,	// (0x0005ff3a) list_text_info_pane_ParamLimits

0xc354,	// (0x0005ff3a) list_text_info_pane

0xc363,	// (0x0005ff49) scroll_pane_cp24_ParamLimits

0xc363,	// (0x0005ff49) scroll_pane_cp24

0xc381,	// (0x0005ff67) list_text_info_pane_t1_ParamLimits

0xc381,	// (0x0005ff67) list_text_info_pane_t1

0x6e00,	// (0x0005a9e6) popup_fast_swap2_window_ParamLimits

0x6e00,	// (0x0005a9e6) popup_fast_swap2_window

0xc3b5,	// (0x0005ff9b) aid_size_cell_fast2

0xeb4f,	// (0x00062735) bg_popup_window_pane_cp17

0x97b6,	// (0x0005d39c) heading_pane_cp2

0xee1d,	// (0x00062a03) listscroll_fast2_pane

0xc3bf,	// (0x0005ffa5) grid_fast2_pane

0xc3c9,	// (0x0005ffaf) listscroll_fast2_pane_g1

0xc3d1,	// (0x0005ffb7) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x000637f1) listscroll_fast2_pane_g

0xf28b,	// (0x00062e71) scroll_pane_cp26

0xc3db,	// (0x0005ffc1) cell_fast2_pane_ParamLimits

0xc3db,	// (0x0005ffc1) cell_fast2_pane

0xc3f0,	// (0x0005ffd6) cell_fast2_pane_g1

0xc3f9,	// (0x0005ffdf) cell_fast2_pane_g2

0xc402,	// (0x0005ffe8) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x000637f6) cell_fast2_pane_g

0xee50,	// (0x00062a36) grid_highlight_pane_cp9

0x6dc8,	// (0x0005a9ae) main_eswt_pane_ParamLimits

0x6dc8,	// (0x0005a9ae) main_eswt_pane

0xc378,	// (0x0005ff5e) list_single_text_info_pane

0xc40a,	// (0x0005fff0) eswt_ctrl_button_pane

0xc40a,	// (0x0005fff0) eswt_ctrl_canvas_pane

0xc412,	// (0x0005fff8) eswt_ctrl_combo_pane

0xc40a,	// (0x0005fff0) eswt_ctrl_default_pane

0xc40a,	// (0x0005fff0) eswt_ctrl_label_pane

0xc41a,	// (0x00060000) eswt_ctrl_wait_pane

0xc422,	// (0x00060008) eswt_shell_pane

0xeb4f,	// (0x00062735) listscroll_eswt_app_pane

0xc442,	// (0x00060028) popup_eswt_tasktip_window_ParamLimits

0xc442,	// (0x00060028) popup_eswt_tasktip_window

0x93c3,	// (0x0005cfa9) bg_popup_window_pane_cp18

0xc453,	// (0x00060039) eswt_control_pane_g1_ParamLimits

0xc453,	// (0x00060039) eswt_control_pane_g1

0xc460,	// (0x00060046) eswt_control_pane_g2_ParamLimits

0xc460,	// (0x00060046) eswt_control_pane_g2

0xc46d,	// (0x00060053) eswt_control_pane_g3_ParamLimits

0xc46d,	// (0x00060053) eswt_control_pane_g3

0xc47a,	// (0x00060060) eswt_control_pane_g4_ParamLimits

0xc47a,	// (0x00060060) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x000637fd) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x000637fd) eswt_control_pane_g

0xf178,	// (0x00062d5e) bg_button_pane_ParamLimits

0xf178,	// (0x00062d5e) bg_button_pane

0xee65,	// (0x00062a4b) common_borders_pane_copy2_ParamLimits

0xee65,	// (0x00062a4b) common_borders_pane_copy2

0xc487,	// (0x0006006d) control_button_pane_g1_ParamLimits

0xc487,	// (0x0006006d) control_button_pane_g1

0xc493,	// (0x00060079) control_button_pane_g2_ParamLimits

0xc493,	// (0x00060079) control_button_pane_g2

0xc49f,	// (0x00060085) control_button_pane_g3_ParamLimits

0xc49f,	// (0x00060085) control_button_pane_g3

0x0002,

0xfc20,	// (0x00063806) control_button_pane_g_ParamLimits

0xfc20,	// (0x00063806) control_button_pane_g

0xc4b3,	// (0x00060099) control_button_pane_t1

0xc4c1,	// (0x000600a7) control_button_pane_t2

0x0001,

0xfc27,	// (0x0006380d) control_button_pane_t

0x9337,	// (0x0005cf1d) bg_button_pane_g1

0x9347,	// (0x0005cf2d) bg_button_pane_g2

0x933f,	// (0x0005cf25) bg_button_pane_g3

0x9357,	// (0x0005cf3d) bg_button_pane_g4

0x934f,	// (0x0005cf35) bg_button_pane_g5

0x935f,	// (0x0005cf45) bg_button_pane_g6

0x9367,	// (0x0005cf4d) bg_button_pane_g7

0x9377,	// (0x0005cf5d) bg_button_pane_g8

0x936f,	// (0x0005cf55) bg_button_pane_g9

0x0008,

0xf861,	// (0x00063447) bg_button_pane_g

0xbaa3,	// (0x0005f689) common_borders_pane_ParamLimits

0xbaa3,	// (0x0005f689) common_borders_pane

0xc453,	// (0x00060039) eswt_control_pane_g1_copy1_ParamLimits

0xc453,	// (0x00060039) eswt_control_pane_g1_copy1

0xc460,	// (0x00060046) eswt_control_pane_g2_copy1_ParamLimits

0xc460,	// (0x00060046) eswt_control_pane_g2_copy1

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy1_ParamLimits

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy1

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy1_ParamLimits

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy1

0xbade,	// (0x0005f6c4) bg_eswt_ctrl_canvas_pane_g1

0xbaa3,	// (0x0005f689) common_borders_pane_cp2_ParamLimits

0xbaa3,	// (0x0005f689) common_borders_pane_cp2

0xbaa3,	// (0x0005f689) common_borders_pane_cp3_ParamLimits

0xbaa3,	// (0x0005f689) common_borders_pane_cp3

0xc4cf,	// (0x000600b5) separator_horizontal_pane

0xc4d7,	// (0x000600bd) separator_vertical_pane

0xc453,	// (0x00060039) eswt_control_pane_g1_copy2_ParamLimits

0xc453,	// (0x00060039) eswt_control_pane_g1_copy2

0xc460,	// (0x00060046) eswt_control_pane_g2_copy2_ParamLimits

0xc460,	// (0x00060046) eswt_control_pane_g2_copy2

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy2_ParamLimits

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy2

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy2_ParamLimits

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy2

0xeb4f,	// (0x00062735) common_borders_pane_cp4

0xc4e0,	// (0x000600c6) separator_horizontal_pane_g1

0xc4e9,	// (0x000600cf) separator_horizontal_pane_g2

0xc4f2,	// (0x000600d8) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x00063812) separator_horizontal_pane_g

0xc453,	// (0x00060039) eswt_control_pane_g1_copy3_ParamLimits

0xc453,	// (0x00060039) eswt_control_pane_g1_copy3

0xc460,	// (0x00060046) eswt_control_pane_g2_copy3_ParamLimits

0xc460,	// (0x00060046) eswt_control_pane_g2_copy3

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy3_ParamLimits

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy3

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy3_ParamLimits

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy3

0xeb4f,	// (0x00062735) common_borders_pane_cp5

0xc4fb,	// (0x000600e1) separator_vertical_pane_g1

0xc504,	// (0x000600ea) separator_vertical_pane_g2

0xc50d,	// (0x000600f3) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x00063819) separator_vertical_pane_g

0xc453,	// (0x00060039) eswt_control_pane_g1_copy4_ParamLimits

0xc453,	// (0x00060039) eswt_control_pane_g1_copy4

0xc460,	// (0x00060046) eswt_control_pane_g2_copy4_ParamLimits

0xc460,	// (0x00060046) eswt_control_pane_g2_copy4

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy4_ParamLimits

0xc46d,	// (0x00060053) eswt_control_pane_g3_copy4

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy4_ParamLimits

0xc47a,	// (0x00060060) eswt_control_pane_g4_copy4

0xc516,	// (0x000600fc) eswt_ctrl_combo_button_pane

0xc51e,	// (0x00060104) eswt_ctrl_input_pane

0xc526,	// (0x0006010c) popup_choice_list_window_cp70

0xc52e,	// (0x00060114) eswt_ctrl_input_pane_t1

0xeb4f,	// (0x00062735) input_focus_pane_cp70

0xbaa3,	// (0x0005f689) bg_button_pane_cp70_ParamLimits

0xbaa3,	// (0x0005f689) bg_button_pane_cp70

0xc53c,	// (0x00060122) eswt_ctrl_combo_button_pane_g1

0xc544,	// (0x0006012a) wait_bar_pane_cp70

0x93c3,	// (0x0005cfa9) bg_popup_window_pane_cp70_ParamLimits

0x93c3,	// (0x0005cfa9) bg_popup_window_pane_cp70

0xc54c,	// (0x00060132) popup_eswt_tasktip_window_t1

0xc562,	// (0x00060148) wait_bar_pane_cp71_ParamLimits

0xc562,	// (0x00060148) wait_bar_pane_cp71

0xc56e,	// (0x00060154) grid_eswt_app_pane

0xf472,	// (0x00063058) scroll_pane_cp70

0xc577,	// (0x0006015d) cell_eswt_app_pane_ParamLimits

0xc577,	// (0x0006015d) cell_eswt_app_pane

0xc5a7,	// (0x0006018d) cell_eswt_app_pane_g1_ParamLimits

0xc5a7,	// (0x0006018d) cell_eswt_app_pane_g1

0xc5d6,	// (0x000601bc) cell_eswt_app_pane_g2_ParamLimits

0xc5d6,	// (0x000601bc) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x00063820) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x00063820) cell_eswt_app_pane_g

0xc5fa,	// (0x000601e0) cell_eswt_app_pane_t1_ParamLimits

0xc5fa,	// (0x000601e0) cell_eswt_app_pane_t1

0xc62c,	// (0x00060212) grid_highlight_pane_cp70_ParamLimits

0xc62c,	// (0x00060212) grid_highlight_pane_cp70

0x6b29,	// (0x0005a70f) set_content_pane_g1

0x8d8b,	// (0x0005c971) status_small_volume_pane

0x7d24,	// (0x0005b90a) status_small_volume_pane_g1

0x7d2c,	// (0x0005b912) volume_small2_pane

0x7d35,	// (0x0005b91b) volume_small2_pane_g1

0x7d3e,	// (0x0005b924) volume_small2_pane_g2

0x7d47,	// (0x0005b92d) volume_small2_pane_g3

0x7d50,	// (0x0005b936) volume_small2_pane_g4

0x7d59,	// (0x0005b93f) volume_small2_pane_g5

0x7d62,	// (0x0005b948) volume_small2_pane_g6

0x7d6b,	// (0x0005b951) volume_small2_pane_g7

0x7d74,	// (0x0005b95a) volume_small2_pane_g8

0x7d7d,	// (0x0005b963) volume_small2_pane_g9

0x7d86,	// (0x0005b96c) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x00063825) volume_small2_pane_g

0xbe96,	// (0x0005fa7c) fep_vkb_top_text_pane_g1_ParamLimits

0xbeb1,	// (0x0005fa97) fep_vkb_top_text_pane_t1_ParamLimits

0xc11f,	// (0x0005fd05) popup_preview_fixed_window_g3_ParamLimits

0xc11f,	// (0x0005fd05) popup_preview_fixed_window_g3

0x72af,	// (0x0005ae95) popup_toolbar_trans_pane

0xa6ed,	// (0x0005e2d3) aid_height_set_list_ParamLimits

0xa6fe,	// (0x0005e2e4) aid_size_parent_ParamLimits

0x8e2a,	// (0x0005ca10) list_highlight_pane_cp2_ParamLimits

0x6b29,	// (0x0005a70f) set_content_pane_g1_ParamLimits

0xa8ef,	// (0x0005e4d5) list_single_image_pane_ParamLimits

0xa8ef,	// (0x0005e4d5) list_single_image_pane

0xc638,	// (0x0006021e) aid_size_cell_image_ParamLimits

0xc638,	// (0x0006021e) aid_size_cell_image

0xc645,	// (0x0006022b) grid_single_image_pane_ParamLimits

0xc645,	// (0x0006022b) grid_single_image_pane

0xc14d,	// (0x0005fd33) list_single_image_pane_g1_ParamLimits

0xc14d,	// (0x0005fd33) list_single_image_pane_g1

0xc159,	// (0x0005fd3f) list_single_image_pane_g2_ParamLimits

0xc159,	// (0x0005fd3f) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x0006383a) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x0006383a) list_single_image_pane_g

0xc653,	// (0x00060239) list_single_image_pane_t1_ParamLimits

0xc653,	// (0x00060239) list_single_image_pane_t1

0xc669,	// (0x0006024f) cell_image_list_pane_ParamLimits

0xc669,	// (0x0006024f) cell_image_list_pane

0xc67d,	// (0x00060263) cell_image_list_pane_g1

0xc686,	// (0x0006026c) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x0006383f) cell_image_list_pane_g

0xc68f,	// (0x00060275) aid_size_cell_tb_trans_pane

0xf178,	// (0x00062d5e) bg_tb_trans_pane

0xc6a1,	// (0x00060287) grid_tb_trans_pane

0x9337,	// (0x0005cf1d) bg_tb_trans_pane_g1

0x9347,	// (0x0005cf2d) bg_tb_trans_pane_g2

0x933f,	// (0x0005cf25) bg_tb_trans_pane_g3

0x9357,	// (0x0005cf3d) bg_tb_trans_pane_g4

0x934f,	// (0x0005cf35) bg_tb_trans_pane_g5

0x9377,	// (0x0005cf5d) bg_tb_trans_pane_g6

0x936f,	// (0x0005cf55) bg_tb_trans_pane_g7

0x935f,	// (0x0005cf45) bg_tb_trans_pane_g8

0x9367,	// (0x0005cf4d) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x00063844) bg_tb_trans_pane_g

0xc6b5,	// (0x0006029b) cell_toolbar_trans_pane_ParamLimits

0xc6b5,	// (0x0006029b) cell_toolbar_trans_pane

0xbade,	// (0x0005f6c4) cell_toolbar_trans_pane_g1

0xb6af,	// (0x0005f295) list_form2_midp_pane_t1

0xb6bd,	// (0x0005f2a3) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x000636e1) list_form2_midp_pane_t

0xb6cb,	// (0x0005f2b1) scroll_pane_cp51_ParamLimits

0xb887,	// (0x0005f46d) form2_midp_wait_pane_g1

0xb890,	// (0x0005f476) form2_midp_wait_pane_g2

0xb899,	// (0x0005f47f) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x000636f6) form2_midp_wait_pane_g

0xebb1,	// (0x00062797) list_highlight_pane_cp21_ParamLimits

0xb8e1,	// (0x0005f4c7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8f0,	// (0x0005f4d6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa890,	// (0x0005e476) list_single_2graphic_im_pane_ParamLimits

0xa890,	// (0x0005e476) list_single_2graphic_im_pane

0xc6db,	// (0x000602c1) list_single_2graphic_im_pane_g1_ParamLimits

0xc6db,	// (0x000602c1) list_single_2graphic_im_pane_g1

0xc6ec,	// (0x000602d2) list_single_2graphic_im_pane_g2_ParamLimits

0xc6ec,	// (0x000602d2) list_single_2graphic_im_pane_g2

0xc6f8,	// (0x000602de) list_single_2graphic_im_pane_g3_ParamLimits

0xc6f8,	// (0x000602de) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x00063857) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x00063857) list_single_2graphic_im_pane_g

0xc718,	// (0x000602fe) list_single_2graphic_im_pane_t1_ParamLimits

0xc718,	// (0x000602fe) list_single_2graphic_im_pane_t1

0xc12b,	// (0x0005fd11) list_single_graphic_2heading_pane_fp_ParamLimits

0xc12b,	// (0x0005fd11) list_single_graphic_2heading_pane_fp

0x44cf,	// (0x000580b5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x44cf,	// (0x000580b5) list_single_graphic_2heading_pane_fp_g1

0xc141,	// (0x0005fd27) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc141,	// (0x0005fd27) list_single_graphic_2heading_pane_fp_g2

0xc14d,	// (0x0005fd33) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc14d,	// (0x0005fd33) list_single_graphic_2heading_pane_fp_g3

0xc159,	// (0x0005fd3f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc159,	// (0x0005fd3f) list_single_graphic_2heading_pane_fp_g4

0xc16d,	// (0x0005fd53) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc16d,	// (0x0005fd53) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x0006377e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x0006377e) list_single_graphic_2heading_pane_fp_g

0x45ed,	// (0x000581d3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x45ed,	// (0x000581d3) list_single_graphic_2heading_pane_fp_t1

0x4507,	// (0x000580ed) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4507,	// (0x000580ed) list_single_graphic_2heading_pane_fp_t2

0x4603,	// (0x000581e9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4603,	// (0x000581e9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x00063860) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x00063860) list_single_graphic_2heading_pane_fp_t

0xbb6a,	// (0x0005f750) fep_hwr_write_pane_g5_ParamLimits

0xbb6a,	// (0x0005f750) fep_hwr_write_pane_g5

0xbb76,	// (0x0005f75c) fep_hwr_write_pane_g6_ParamLimits

0xbb76,	// (0x0005f75c) fep_hwr_write_pane_g6

0xc422,	// (0x00060008) eswt_shell_pane_ParamLimits

0x93c3,	// (0x0005cfa9) bg_popup_window_pane_cp18_ParamLimits

0xa646,	// (0x0005e22c) heading_pane_cp70

0xc54c,	// (0x00060132) popup_eswt_tasktip_window_t1_ParamLimits

0x8ea1,	// (0x0005ca87) aid_touch_tab_arrow_left

0x8eb0,	// (0x0005ca96) aid_touch_tab_arrow_right

0x5674,	// (0x0005925a) title_pane_g3_ParamLimits

0x5674,	// (0x0005925a) title_pane_g3

0xef39,	// (0x00062b1f) set_value_pane_g1

0x72af,	// (0x0005ae95) popup_toolbar_trans_pane_ParamLimits

0xc68f,	// (0x00060275) aid_size_cell_tb_trans_pane_ParamLimits

0xf178,	// (0x00062d5e) bg_tb_trans_pane_ParamLimits

0xc6a1,	// (0x00060287) grid_tb_trans_pane_ParamLimits

0xece9,	// (0x000628cf) cont_note_pane_ParamLimits

0xece9,	// (0x000628cf) cont_note_pane

0xee65,	// (0x00062a4b) cont_snote2_single_text_pane_ParamLimits

0xee65,	// (0x00062a4b) cont_snote2_single_text_pane

0xee65,	// (0x00062a4b) cont_snote2_single_graphic_pane_ParamLimits

0xee65,	// (0x00062a4b) cont_snote2_single_graphic_pane

0x99c9,	// (0x0005d5af) cont_note_wait_pane_ParamLimits

0x99c9,	// (0x0005d5af) cont_note_wait_pane

0x99c9,	// (0x0005d5af) cont_note_image_pane_ParamLimits

0x99c9,	// (0x0005d5af) cont_note_image_pane

0xc749,	// (0x0006032f) popup_note2_window_g1_ParamLimits

0xc749,	// (0x0006032f) popup_note2_window_g1

0xc77a,	// (0x00060360) popup_note2_window_t1_ParamLimits

0xc77a,	// (0x00060360) popup_note2_window_t1

0xc7bf,	// (0x000603a5) popup_note2_window_t2_ParamLimits

0xc7bf,	// (0x000603a5) popup_note2_window_t2

0xc804,	// (0x000603ea) popup_note2_window_t3_ParamLimits

0xc804,	// (0x000603ea) popup_note2_window_t3

0xc849,	// (0x0006042f) popup_note2_window_t4_ParamLimits

0xc849,	// (0x0006042f) popup_note2_window_t4

0xed6d,	// (0x00062953) popup_note2_window_t5_ParamLimits

0xed6d,	// (0x00062953) popup_note2_window_t5

0x0004,

0xfc86,	// (0x0006386c) popup_note2_window_t_ParamLimits

0xfc86,	// (0x0006386c) popup_note2_window_t

0xc878,	// (0x0006045e) popup_note2_image_window_g1_ParamLimits

0xc878,	// (0x0006045e) popup_note2_image_window_g1

0xc884,	// (0x0006046a) popup_note2_image_window_g2_ParamLimits

0xc884,	// (0x0006046a) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x00063877) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x00063877) popup_note2_image_window_g

0xc896,	// (0x0006047c) popup_note2_image_window_t1_ParamLimits

0xc896,	// (0x0006047c) popup_note2_image_window_t1

0xc8ae,	// (0x00060494) popup_note2_image_window_t2_ParamLimits

0xc8ae,	// (0x00060494) popup_note2_image_window_t2

0xc8c6,	// (0x000604ac) popup_note2_image_window_t3_ParamLimits

0xc8c6,	// (0x000604ac) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x0006387c) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x0006387c) popup_note2_image_window_t

0x99d7,	// (0x0005d5bd) popup_note2_wait_window_g1_ParamLimits

0x99d7,	// (0x0005d5bd) popup_note2_wait_window_g1

0x99e3,	// (0x0005d5c9) popup_note2_wait_window_g2_ParamLimits

0x99e3,	// (0x0005d5c9) popup_note2_wait_window_g2

0x99ef,	// (0x0005d5d5) popup_note2_wait_window_g3_ParamLimits

0x99ef,	// (0x0005d5d5) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x00063429) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x00063429) popup_note2_wait_window_g

0xc8e2,	// (0x000604c8) popup_note2_wait_window_t1_ParamLimits

0xc8e2,	// (0x000604c8) popup_note2_wait_window_t1

0xc900,	// (0x000604e6) popup_note2_wait_window_t2_ParamLimits

0xc900,	// (0x000604e6) popup_note2_wait_window_t2

0xc91e,	// (0x00060504) popup_note2_wait_window_t3_ParamLimits

0xc91e,	// (0x00060504) popup_note2_wait_window_t3

0xc930,	// (0x00060516) popup_note2_wait_window_t4_ParamLimits

0xc930,	// (0x00060516) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x00063883) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x00063883) popup_note2_wait_window_t

0xc942,	// (0x00060528) wait_bar2_pane_ParamLimits

0xc942,	// (0x00060528) wait_bar2_pane

0xc95a,	// (0x00060540) popup_snote2_single_text_window_g1_ParamLimits

0xc95a,	// (0x00060540) popup_snote2_single_text_window_g1

0xc982,	// (0x00060568) popup_snote2_single_text_window_t1_ParamLimits

0xc982,	// (0x00060568) popup_snote2_single_text_window_t1

0xc9ce,	// (0x000605b4) popup_snote2_single_text_window_t2_ParamLimits

0xc9ce,	// (0x000605b4) popup_snote2_single_text_window_t2

0xca1a,	// (0x00060600) popup_snote2_single_text_window_t3_ParamLimits

0xca1a,	// (0x00060600) popup_snote2_single_text_window_t3

0xca5b,	// (0x00060641) popup_snote2_single_text_window_t4_ParamLimits

0xca5b,	// (0x00060641) popup_snote2_single_text_window_t4

0xca91,	// (0x00060677) popup_snote2_single_text_window_t5_ParamLimits

0xca91,	// (0x00060677) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0006388c) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0006388c) popup_snote2_single_text_window_t

0xcabc,	// (0x000606a2) popup_snote2_single_graphic_window_g1_ParamLimits

0xcabc,	// (0x000606a2) popup_snote2_single_graphic_window_g1

0xcb05,	// (0x000606eb) popup_snote2_single_graphic_window_g2_ParamLimits

0xcb05,	// (0x000606eb) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x00063897) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x00063897) popup_snote2_single_graphic_window_g

0xcb2d,	// (0x00060713) popup_snote2_single_graphic_window_t1_ParamLimits

0xcb2d,	// (0x00060713) popup_snote2_single_graphic_window_t1

0xcb79,	// (0x0006075f) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb79,	// (0x0006075f) popup_snote2_single_graphic_window_t2

0xca1a,	// (0x00060600) popup_snote2_single_graphic_window_t3_ParamLimits

0xca1a,	// (0x00060600) popup_snote2_single_graphic_window_t3

0xca5b,	// (0x00060641) popup_snote2_single_graphic_window_t4_ParamLimits

0xca5b,	// (0x00060641) popup_snote2_single_graphic_window_t4

0xca91,	// (0x00060677) popup_snote2_single_graphic_window_t5_ParamLimits

0xca91,	// (0x00060677) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0006389c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0006389c) popup_snote2_single_graphic_window_t

0xb588,	// (0x0005f16e) clock_nsta_pane_cp2_t1

0xb588,	// (0x0005f16e) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x000636b7) clock_nsta_pane_cp2_t

0x34da,	// (0x000570c0) form_field_data_wide_pane_g1_ParamLimits

0xef4b,	// (0x00062b31) form_field_data_wide_pane_g2_ParamLimits

0xef4b,	// (0x00062b31) form_field_data_wide_pane_g2

0xf186,	// (0x00062d6c) form_field_data_wide_pane_g3_ParamLimits

0xf186,	// (0x00062d6c) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0006325c) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0006325c) form_field_data_wide_pane_g

0xb48b,	// (0x0005f071) grid_touch_3_pane_ParamLimits

0xb48b,	// (0x0005f071) grid_touch_3_pane

0xcbc5,	// (0x000607ab) cell_touch_3_pane_ParamLimits

0xcbc5,	// (0x000607ab) cell_touch_3_pane

0xbade,	// (0x0005f6c4) cell_touch_3_pane_g1

0xbade,	// (0x0005f6c4) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x0006373c) cell_touch_3_pane_g

0xed9f,	// (0x00062985) cont_query_data_pane

0xeda7,	// (0x0006298d) cont_query_data_pane_cp1

0xcbf3,	// (0x000607d9) button_value_adjust_pane_cp7

0xcbfb,	// (0x000607e1) query_popup_pane_cp3

0x135a,	// (0x00054f40) bg_popup_sub_pane_cp22_ParamLimits

0x670a,	// (0x0005a2f0) navi_navi_volume_pane_cp2

0x6722,	// (0x0005a308) popup_side_volume_key_window_g2

0x672e,	// (0x0005a314) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x000632f2) popup_side_volume_key_window_g

0x6748,	// (0x0005a32e) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x000632f9) popup_side_volume_key_window_t

0x69f6,	// (0x0005a5dc) popup_side_volume_key_window_ParamLimits

0x5e09,	// (0x000599ef) list_double_graphic_pane_g4_ParamLimits

0x5e09,	// (0x000599ef) list_double_graphic_pane_g4

0xa8cf,	// (0x0005e4b5) list_single_2heading_msg_pane_ParamLimits

0xa8cf,	// (0x0005e4b5) list_single_2heading_msg_pane

0xaa22,	// (0x0005e608) list_single_2heading_msg_pane_g1_ParamLimits

0xaa22,	// (0x0005e608) list_single_2heading_msg_pane_g1

0x5c23,	// (0x00059809) list_single_2heading_msg_pane_g2_ParamLimits

0x5c23,	// (0x00059809) list_single_2heading_msg_pane_g2

0xaa2e,	// (0x0005e614) list_single_2heading_msg_pane_g3_ParamLimits

0xaa2e,	// (0x0005e614) list_single_2heading_msg_pane_g3

0xaa3a,	// (0x0005e620) list_single_2heading_msg_pane_g4_ParamLimits

0xaa3a,	// (0x0005e620) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x000638a7) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x000638a7) list_single_2heading_msg_pane_g

0x7d8f,	// (0x0005b975) list_single_2heading_msg_pane_t1_ParamLimits

0x7d8f,	// (0x0005b975) list_single_2heading_msg_pane_t1

0x7db7,	// (0x0005b99d) list_single_2heading_msg_pane_t2_ParamLimits

0x7db7,	// (0x0005b99d) list_single_2heading_msg_pane_t2

0x7de6,	// (0x0005b9cc) list_single_2heading_msg_pane_t3_ParamLimits

0x7de6,	// (0x0005b9cc) list_single_2heading_msg_pane_t3

0x4623,	// (0x00058209) list_single_2heading_msg_pane_t4_ParamLimits

0x4623,	// (0x00058209) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x000638b0) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x000638b0) list_single_2heading_msg_pane_t

0xeb6d,	// (0x00062753) title_pane_g4_ParamLimits

0xeb6d,	// (0x00062753) title_pane_g4

0x6361,	// (0x00059f47) title_pane_stacon_g3_ParamLimits

0x6361,	// (0x00059f47) title_pane_stacon_g3

0xc70c,	// (0x000602f2) list_single_2graphic_im_pane_g4_ParamLimits

0xc70c,	// (0x000602f2) list_single_2graphic_im_pane_g4

0xa410,	// (0x0005dff6) popup_side_volume_key_window_cp

0xade6,	// (0x0005e9cc) main_idle_act2_pane_t1

0x73a1,	// (0x0005af87) toolbar_button_pane_g10

0x5c0d,	// (0x000597f3) popup_toolbar_window_cp1

0xb579,	// (0x0005f15f) clock_nsta_pane_cp_t1

0xb579,	// (0x0005f15f) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x000636b2) clock_nsta_pane_cp_t

0x670a,	// (0x0005a2f0) navi_navi_volume_pane_cp2_ParamLimits

0x6716,	// (0x0005a2fc) popup_side_volume_key_window_g1_ParamLimits

0x6722,	// (0x0005a308) popup_side_volume_key_window_g2_ParamLimits

0x672e,	// (0x0005a314) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x000632f2) popup_side_volume_key_window_g_ParamLimits

0x7951,	// (0x0005b537) fep_hwr_aid_pane

0x79f8,	// (0x0005b5de) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb3a,	// (0x0005f720) fep_hwr_top_pane_g1_ParamLimits

0xbb4c,	// (0x0005f732) fep_hwr_top_pane_g2_ParamLimits

0x7a18,	// (0x0005b5fe) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00063707) fep_hwr_top_pane_g_ParamLimits

0x7a2d,	// (0x0005b613) fep_hwr_top_text_pane_ParamLimits

0xa1d3,	// (0x0005ddb9) aid_touch_tab_arrow_arrow_2

0xa1dc,	// (0x0005ddc2) aid_touch_tab_arrow_left_2

0x7965,	// (0x0005b54b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x799c,	// (0x0005b582) fep_hwr_prediction_pane

0xbca5,	// (0x0005f88b) fep_vkb_prediction_pane

0xbda2,	// (0x0005f988) fep_vkb_side_pane_g3_ParamLimits

0xbda2,	// (0x0005f988) fep_vkb_side_pane_g3

0x7ba8,	// (0x0005b78e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c14,	// (0x0005b7fa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c21,	// (0x0005b807) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x000637b6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e1f,	// (0x0005ba05) fep_hwr_prediction_pane_g1

0x7e29,	// (0x0005ba0f) fep_hwr_prediction_pane_g2

0x7e31,	// (0x0005ba17) fep_hwr_prediction_pane_g3

0x7e39,	// (0x0005ba1f) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x000638b9) fep_hwr_prediction_pane_g

0xcc20,	// (0x00060806) fep_vkb_prediction_pane_g1

0xcc2a,	// (0x00060810) fep_vkb_prediction_pane_g2

0xcc32,	// (0x00060818) fep_vkb_prediction_pane_g3

0xcc3a,	// (0x00060820) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x000638c2) fep_vkb_prediction_pane_g

0x76cf,	// (0x0005b2b5) slider_set_pane_g3

0x76e3,	// (0x0005b2c9) slider_set_pane_g4

0x76fb,	// (0x0005b2e1) slider_set_pane_g5

0x76cf,	// (0x0005b2b5) slider_set_pane_g6

0x7711,	// (0x0005b2f7) slider_set_pane_g7

0xa85f,	// (0x0005e445) slider_form_pane_g3

0xa868,	// (0x0005e44e) slider_form_pane_g4

0xa870,	// (0x0005e456) slider_form_pane_g5

0xa85f,	// (0x0005e445) slider_form_pane_g6

0xa878,	// (0x0005e45e) slider_form_pane_g7

0xb091,	// (0x0005ec77) slider_set_pane_vc_g3

0xb09a,	// (0x0005ec80) slider_set_pane_vc_g4

0xb0a3,	// (0x0005ec89) slider_set_pane_vc_g5

0xb091,	// (0x0005ec77) slider_set_pane_vc_g6

0xb0ac,	// (0x0005ec92) slider_set_pane_vc_g7

0xb25e,	// (0x0005ee44) slider_form_pane_vc_g1

0xb267,	// (0x0005ee4d) slider_form_pane_vc_g2

0xb270,	// (0x0005ee56) slider_form_pane_vc_g3

0xb25e,	// (0x0005ee44) slider_form_pane_vc_g4

0xb279,	// (0x0005ee5f) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00063684) slider_form_pane_vc_g

0x540b,	// (0x00058ff1) main_idle_act3_pane

0xcc42,	// (0x00060828) ai3_links_pane

0xcc4b,	// (0x00060831) popup_ai3_data_window_ParamLimits

0xcc4b,	// (0x00060831) popup_ai3_data_window

0xeb4f,	// (0x00062735) grid_ai3_links_pane

0xcc63,	// (0x00060849) cell_ai3_links_pane_ParamLimits

0xcc63,	// (0x00060849) cell_ai3_links_pane

0xcc7b,	// (0x00060861) bg_popup_sub_pane_cp11

0xcc88,	// (0x0006086e) cell_ai3_links_pane_g1

0xeb4f,	// (0x00062735) bg_popup_sub_pane_cp12

0xccad,	// (0x00060893) heading_ai3_data_pane

0xccb5,	// (0x0006089b) list_ai3_gene_pane

0xccc1,	// (0x000608a7) popup_ai3_data_window_g1

0xccc9,	// (0x000608af) heading_ai3_data_pane_g1

0xccd1,	// (0x000608b7) heading_ai3_data_pane_t1

0xccdf,	// (0x000608c5) list_double_ai3_gene_pane_ParamLimits

0xccdf,	// (0x000608c5) list_double_ai3_gene_pane

0xccec,	// (0x000608d2) list_single_ai3_gene_pane_ParamLimits

0xccec,	// (0x000608d2) list_single_ai3_gene_pane

0xbaa3,	// (0x0005f689) list_highlight_pane_cp7_ParamLimits

0xbaa3,	// (0x0005f689) list_highlight_pane_cp7

0xccf9,	// (0x000608df) list_single_a13_gene_pane_t1_ParamLimits

0xccf9,	// (0x000608df) list_single_a13_gene_pane_t1

0xcd10,	// (0x000608f6) list_single_ai3_gene_pane_g1

0xcd19,	// (0x000608ff) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x000638cb) list_single_ai3_gene_pane_g

0xcd21,	// (0x00060907) list_double_ai3_gene_pane_g1_ParamLimits

0xcd21,	// (0x00060907) list_double_ai3_gene_pane_g1

0xcd2d,	// (0x00060913) list_double_ai3_gene_pane_t1_ParamLimits

0xcd2d,	// (0x00060913) list_double_ai3_gene_pane_t1

0xcd49,	// (0x0006092f) list_double_ai3_gene_pane_t2_ParamLimits

0xcd49,	// (0x0006092f) list_double_ai3_gene_pane_t2

0xcd5e,	// (0x00060944) list_double_ai3_gene_pane_t3_ParamLimits

0xcd5e,	// (0x00060944) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x000638d0) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x000638d0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4619,	// (0x000581ff) aid_size_min_col_2

0xcc0c,	// (0x000607f2) aid_size_min_msg_ParamLimits

0xcc0c,	// (0x000607f2) aid_size_min_msg

0xbea2,	// (0x0005fa88) fep_vkb_top_text_pane_g2_ParamLimits

0xbea2,	// (0x0005fa88) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00063737) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00063737) fep_vkb_top_text_pane_g

0x540b,	// (0x00058ff1) main_hc_apps_shell_pane

0xcd7b,	// (0x00060961) grid_hc_apps_pane_ParamLimits

0xcd7b,	// (0x00060961) grid_hc_apps_pane

0xcd8a,	// (0x00060970) list_hc_apps_pane

0xcd92,	// (0x00060978) scroll_pane_cp37_ParamLimits

0xcd92,	// (0x00060978) scroll_pane_cp37

0xcd9e,	// (0x00060984) cell_hc_apps_pane_ParamLimits

0xcd9e,	// (0x00060984) cell_hc_apps_pane

0xce4c,	// (0x00060a32) cell_hc_apps_pane_g1_ParamLimits

0xce4c,	// (0x00060a32) cell_hc_apps_pane_g1

0xce7d,	// (0x00060a63) cell_hc_apps_pane_g2_ParamLimits

0xce7d,	// (0x00060a63) cell_hc_apps_pane_g2

0xce99,	// (0x00060a7f) cell_hc_apps_pane_g3_ParamLimits

0xce99,	// (0x00060a7f) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x000638d7) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x000638d7) cell_hc_apps_pane_g

0xcebb,	// (0x00060aa1) cell_hc_apps_pane_t1_ParamLimits

0xcebb,	// (0x00060aa1) cell_hc_apps_pane_t1

0xece9,	// (0x000628cf) grid_highlight_pane_cp10_ParamLimits

0xece9,	// (0x000628cf) grid_highlight_pane_cp10

0xcefb,	// (0x00060ae1) list_single_hc_apps_pane_ParamLimits

0xcefb,	// (0x00060ae1) list_single_hc_apps_pane

0xcf5e,	// (0x00060b44) list_single_hc_apps_pane_g1

0xaa52,	// (0x0005e638) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x000638de) list_single_hc_apps_pane_g

0xaa6b,	// (0x0005e651) list_single_hc_apps_pane_g2_copy1

0x7e41,	// (0x0005ba27) list_single_hc_apps_pane_t1

0xebb1,	// (0x00062797) bg_set_opt_pane_cp_ParamLimits

0x5724,	// (0x0005930a) setting_slider_pane_t1_ParamLimits

0x573d,	// (0x00059323) setting_slider_pane_t2_ParamLimits

0x5757,	// (0x0005933d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00063144) setting_slider_pane_t_ParamLimits

0x576f,	// (0x00059355) slider_set_pane_ParamLimits

0x6c98,	// (0x0005a87e) control_pane_g5_ParamLimits

0x6c98,	// (0x0005a87e) control_pane_g5

0xa6b2,	// (0x0005e298) slider_set_pane_g1_ParamLimits

0x76c3,	// (0x0005b2a9) slider_set_pane_g2_ParamLimits

0x76cf,	// (0x0005b2b5) slider_set_pane_g3_ParamLimits

0x76e3,	// (0x0005b2c9) slider_set_pane_g4_ParamLimits

0x76fb,	// (0x0005b2e1) slider_set_pane_g5_ParamLimits

0x76cf,	// (0x0005b2b5) slider_set_pane_g6_ParamLimits

0x7711,	// (0x0005b2f7) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00063545) slider_set_pane_g_ParamLimits

0x6ad4,	// (0x0005a6ba) navi_icon_text_pane_ParamLimits

0x8e62,	// (0x0005ca48) aid_fill_nsta_2_ParamLimits

0x8ea1,	// (0x0005ca87) aid_touch_tab_arrow_left_ParamLimits

0x8eb0,	// (0x0005ca96) aid_touch_tab_arrow_right_ParamLimits

0x8f1d,	// (0x0005cb03) clock_nsta_pane_ParamLimits

0xa1b5,	// (0x0005dd9b) navi_icon_pane_g1_ParamLimits

0xa1c1,	// (0x0005dda7) navi_text_pane_t1_ParamLimits

0xb689,	// (0x0005f26f) navi_icon_text_pane_g1_ParamLimits

0xb695,	// (0x0005f27b) navi_icon_text_pane_t1_ParamLimits

0xcf5e,	// (0x00060b44) list_single_hc_apps_pane_g1_ParamLimits

0xaa52,	// (0x0005e638) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x000638de) list_single_hc_apps_pane_g_ParamLimits

0xaa6b,	// (0x0005e651) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e41,	// (0x0005ba27) list_single_hc_apps_pane_t1_ParamLimits

0x5568,	// (0x0005914e) popup_toolbar2_fixed_window_ParamLimits

0x5568,	// (0x0005914e) popup_toolbar2_fixed_window

0x72a5,	// (0x0005ae8b) popup_toolbar2_float_window

0xeb4f,	// (0x00062735) bg_popup_sub_pane_cp27

0xcf77,	// (0x00060b5d) grid_toolbar2_float_pane

0xeb4f,	// (0x00062735) bg_popup_sub_pane_cp26

0xcf77,	// (0x00060b5d) grid_toolbar2_fixed_pane

0xcf7f,	// (0x00060b65) cell_toolbar2_fixed_pane_ParamLimits

0xcf7f,	// (0x00060b65) cell_toolbar2_fixed_pane

0xcf8f,	// (0x00060b75) cell_toolbar2_fixed_pane_g1

0x7177,	// (0x0005ad5d) toolbar2_fixed_button_pane

0x9337,	// (0x0005cf1d) toolbar2_fixed_button_pane_g1

0x9347,	// (0x0005cf2d) toolbar2_fixed_button_pane_g2

0x933f,	// (0x0005cf25) toolbar2_fixed_button_pane_g3

0x9357,	// (0x0005cf3d) toolbar2_fixed_button_pane_g4

0x934f,	// (0x0005cf35) toolbar2_fixed_button_pane_g5

0x935f,	// (0x0005cf45) toolbar2_fixed_button_pane_g6

0x9367,	// (0x0005cf4d) toolbar2_fixed_button_pane_g7

0x9377,	// (0x0005cf5d) toolbar2_fixed_button_pane_g8

0x936f,	// (0x0005cf55) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00063447) toolbar2_fixed_button_pane_g

0xcf98,	// (0x00060b7e) cell_toolbar2_float_pane_ParamLimits

0xcf98,	// (0x00060b7e) cell_toolbar2_float_pane

0xcfa9,	// (0x00060b8f) cell_toolbar2_float_pane_g1

0x7177,	// (0x0005ad5d) toolbar2_fixed_button_pane_cp

0xbc0c,	// (0x0005f7f2) fep_vkb_accented_list_pane_ParamLimits

0xbc0c,	// (0x0005f7f2) fep_vkb_accented_list_pane

0x7b88,	// (0x0005b76e) bg_popup_fep_shadow_pane_g9

0x8ae4,	// (0x0005c6ca) bg_popup_fep_shadow_pane_cp3

0xf272,	// (0x00062e58) list_accented_list_pane

0xcfb2,	// (0x00060b98) list_single_accented_list_pane_ParamLimits

0xcfb2,	// (0x00060b98) list_single_accented_list_pane

0x8ae4,	// (0x0005c6ca) list_highlight_pane_cp10

0xcfc3,	// (0x00060ba9) list_single_accented_list_pane_t1

0x71f5,	// (0x0005addb) popup_slider_window_ParamLimits

0x71f5,	// (0x0005addb) popup_slider_window

0xcc03,	// (0x000607e9) aid_indentation_list_msg

0xd079,	// (0x00060c5f) bg_popup_window_pane_cp19

0xd0e3,	// (0x00060cc9) popup_slider_window_g1

0xd0ff,	// (0x00060ce5) popup_slider_window_g2

0xd11b,	// (0x00060d01) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x000638e3) popup_slider_window_g

0xd177,	// (0x00060d5d) popup_slider_window_t1

0xd1eb,	// (0x00060dd1) small_volume_slider_vertical_pane

0xbade,	// (0x0005f6c4) small_volume_slider_vertical_pane_g1

0xbade,	// (0x0005f6c4) small_volume_slider_vertical_pane_g2

0xd207,	// (0x00060ded) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x000638f5) small_volume_slider_vertical_pane_g

0x532e,	// (0x00058f14) area_side_right_pane_ParamLimits

0x532e,	// (0x00058f14) area_side_right_pane

0x7e6f,	// (0x0005ba55) aid_size_side_button_ParamLimits

0x7e6f,	// (0x0005ba55) aid_size_side_button

0x7e83,	// (0x0005ba69) grid_sctrl_middle_pane_ParamLimits

0x7e83,	// (0x0005ba69) grid_sctrl_middle_pane

0x7ea2,	// (0x0005ba88) sctrl_sk_bottom_pane

0x7eb3,	// (0x0005ba99) sctrl_sk_top_pane

0x7ec5,	// (0x0005baab) aid_touch_sctrl_top

0x7ed2,	// (0x0005bab8) bg_sctrl_sk_pane_ParamLimits

0x7ed2,	// (0x0005bab8) bg_sctrl_sk_pane

0x7ee0,	// (0x0005bac6) sctrl_sk_top_pane_g1

0x7eed,	// (0x0005bad3) sctrl_sk_top_pane_t1

0x7ec5,	// (0x0005baab) aid_touch_sctrl_bottom

0x7ed2,	// (0x0005bab8) bg_sctrl_sk_pane_cp_ParamLimits

0x7ed2,	// (0x0005bab8) bg_sctrl_sk_pane_cp

0x7f08,	// (0x0005baee) sctrl_sk_bottom_pane_g1

0x7eed,	// (0x0005bad3) sctrl_sk_bottom_pane_t1

0x7f11,	// (0x0005baf7) cell_sctrl_middle_pane_ParamLimits

0x7f11,	// (0x0005baf7) cell_sctrl_middle_pane

0x7f2c,	// (0x0005bb12) aid_touch_sctrl_middle_ParamLimits

0x7f2c,	// (0x0005bb12) aid_touch_sctrl_middle

0x7f3e,	// (0x0005bb24) bg_sctrl_middle_pane_ParamLimits

0x7f3e,	// (0x0005bb24) bg_sctrl_middle_pane

0x7ba8,	// (0x0005b78e) cell_sctrl_middle_pane_g1_ParamLimits

0x7ba8,	// (0x0005b78e) cell_sctrl_middle_pane_g1

0x7f4c,	// (0x0005bb32) cell_sctrl_middle_pane_g2_ParamLimits

0x7f4c,	// (0x0005bb32) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x00063901) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x00063901) cell_sctrl_middle_pane_g

0x9337,	// (0x0005cf1d) bg_sctrl_middle_pane_g1

0x933f,	// (0x0005cf25) bg_sctrl_middle_pane_g2

0x9347,	// (0x0005cf2d) bg_sctrl_middle_pane_g3

0x934f,	// (0x0005cf35) bg_sctrl_middle_pane_g4

0x9357,	// (0x0005cf3d) bg_sctrl_middle_pane_g5

0x935f,	// (0x0005cf45) bg_sctrl_middle_pane_g6

0x9367,	// (0x0005cf4d) bg_sctrl_middle_pane_g7

0x936f,	// (0x0005cf55) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x00063906) bg_sctrl_middle_pane_g

0x9377,	// (0x0005cf5d) bg_sctrl_middle_pane_g8_copy1

0x9337,	// (0x0005cf1d) bg_sctrl_sk_pane_g1

0x9347,	// (0x0005cf2d) bg_sctrl_sk_pane_g2

0x933f,	// (0x0005cf25) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00063447) bg_sctrl_sk_pane_g

0xeeb3,	// (0x00062a99) aid_size_touch_scroll_bar

0x9357,	// (0x0005cf3d) bg_sctrl_sk_pane_g4

0x934f,	// (0x0005cf35) bg_sctrl_sk_pane_g5

0x935f,	// (0x0005cf45) bg_sctrl_sk_pane_g6

0x9367,	// (0x0005cf4d) bg_sctrl_sk_pane_g7

0x9377,	// (0x0005cf5d) bg_sctrl_sk_pane_g8

0x936f,	// (0x0005cf55) bg_sctrl_sk_pane_g9

0x6e5e,	// (0x0005aa44) popup_fep_china_hwr2_fs_candidate_window

0x6e68,	// (0x0005aa4e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6e68,	// (0x0005aa4e) popup_fep_china_hwr2_fs_control_window

0x7ba8,	// (0x0005b78e) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x000638fc) sctrl_sk_top_pane_g

0xd210,	// (0x00060df6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd210,	// (0x00060df6) aid_fep_china_hwr2_fs_cell

0xd222,	// (0x00060e08) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd222,	// (0x00060e08) bg_popup_fep_shadow_pane_cp4

0xd239,	// (0x00060e1f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd239,	// (0x00060e1f) bg_popup_fep_shadow_pane_cp5

0xd24b,	// (0x00060e31) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd24b,	// (0x00060e31) popup_fep_china_hwr2_fs_control_bar_grid

0xd25b,	// (0x00060e41) popup_fep_china_hwr2_fs_control_funtion_grid

0xd263,	// (0x00060e49) aid_fep_china_hwr2_fs_candi_cell

0xeb4f,	// (0x00062735) bg_popup_fep_shadow_pane_cp6

0xd26d,	// (0x00060e53) popup_fep_china_hwr2_fs_candidate_grid

0xd277,	// (0x00060e5d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd277,	// (0x00060e5d) cell_fep_china_hwr2_fs_funtion_grid

0xbade,	// (0x0005f6c4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd28f,	// (0x00060e75) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd28f,	// (0x00060e75) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd29d,	// (0x00060e83) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd29d,	// (0x00060e83) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x00063917) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x00063917) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2b3,	// (0x00060e99) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2b3,	// (0x00060e99) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2c8,	// (0x00060eae) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2c8,	// (0x00060eae) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0006391c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0006391c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd2e4,	// (0x00060eca) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd2ec,	// (0x00060ed2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd2f4,	// (0x00060eda) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x00063921) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd2fc,	// (0x00060ee2) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd2fc,	// (0x00060ee2) cell_fep_china_hwr2_fs_candidate_grid

0xd315,	// (0x00060efb) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd31d,	// (0x00060f03) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbade,	// (0x0005f6c4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbade,	// (0x0005f6c4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x0006373c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd325,	// (0x00060f0b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8f30,	// (0x0005cb16) clock_nsta_pane_cp_24_ParamLimits

0x8f30,	// (0x0005cb16) clock_nsta_pane_cp_24

0x8fae,	// (0x0005cb94) indicator_nsta_pane_cp_24_ParamLimits

0x8fae,	// (0x0005cb94) indicator_nsta_pane_cp_24

0xa031,	// (0x0005dc17) heading_pane_g1

0x0001,

0xf8c6,	// (0x000634ac) heading_pane_g

0xac2f,	// (0x0005e815) grid_sct_catagory_button_pane

0xac5f,	// (0x0005e845) scroll_pane_cp5_ParamLimits

0xb6d7,	// (0x0005f2bd) button_value_adjust_pane_cp5_ParamLimits

0xb6d7,	// (0x0005f2bd) button_value_adjust_pane_cp5

0xb7b6,	// (0x0005f39c) form2_midp_time_pane_ParamLimits

0xd333,	// (0x00060f19) cell_sct_catagory_button_pane_ParamLimits

0xd333,	// (0x00060f19) cell_sct_catagory_button_pane

0xbaa3,	// (0x0005f689) bg_button_pane_cp01_ParamLimits

0xbaa3,	// (0x0005f689) bg_button_pane_cp01

0xbade,	// (0x0005f6c4) cell_sct_catagory_button_pane_g1

0x7234,	// (0x0005ae1a) popup_tb_extension_window

0xd345,	// (0x00060f2b) aid_size_cell_ext_ParamLimits

0xd345,	// (0x00060f2b) aid_size_cell_ext

0xece9,	// (0x000628cf) bg_tb_trans_pane_cp1_ParamLimits

0xece9,	// (0x000628cf) bg_tb_trans_pane_cp1

0xd365,	// (0x00060f4b) grid_tb_ext_pane_ParamLimits

0xd365,	// (0x00060f4b) grid_tb_ext_pane

0xd395,	// (0x00060f7b) cell_tb_ext_pane_ParamLimits

0xd395,	// (0x00060f7b) cell_tb_ext_pane

0xd3ac,	// (0x00060f92) cell_tb_ext_pane_g1_ParamLimits

0xd3ac,	// (0x00060f92) cell_tb_ext_pane_g1

0xd3c9,	// (0x00060faf) cell_tb_ext_pane_t1

0xece9,	// (0x000628cf) list_highlight_pane_cp11_ParamLimits

0xece9,	// (0x000628cf) list_highlight_pane_cp11

0x5587,	// (0x0005916d) popup_uni_indicator_window_ParamLimits

0x5587,	// (0x0005916d) popup_uni_indicator_window

0xf178,	// (0x00062d5e) bg_popup_sub_pane_cp14

0xd3e5,	// (0x00060fcb) list_uniindi_pane

0xd3f1,	// (0x00060fd7) uniindi_top_pane

0xece9,	// (0x000628cf) bg_uniindi_top_pane

0xd410,	// (0x00060ff6) uniindi_top_pane_g1

0xd426,	// (0x0006100c) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x00063928) uniindi_top_pane_g

0xd450,	// (0x00061036) uniindi_top_pane_t1

0xd47a,	// (0x00061060) list_single_uniindi_pane_ParamLimits

0xd47a,	// (0x00061060) list_single_uniindi_pane

0xbade,	// (0x0005f6c4) bg_uniindi_top_pane_g1

0xd48c,	// (0x00061072) list_single_uniindi_pane_g1

0xd49f,	// (0x00061085) list_single_uniindi_pane_t1

0x540b,	// (0x00058ff1) control_bg_pane

0xd4c4,	// (0x000610aa) bg_sctrl_sk_pane_cp1

0xd4cd,	// (0x000610b3) bg_sctrl_sk_pane_cp2

0xd4d6,	// (0x000610bc) control_bg_pane_g1

0xd4df,	// (0x000610c5) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x00063931) control_bg_pane_g

0xb52e,	// (0x0005f114) cell_indicator_nsta_pane_g1_ParamLimits

0xb53c,	// (0x0005f122) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x000636a0) cell_indicator_nsta_pane_g_ParamLimits

0x44a5,	// (0x0005808b) form2_midp_time_pane_t1_ParamLimits

0x6dc8,	// (0x0005a9ae) main_idle_act4_pane_ParamLimits

0x6dc8,	// (0x0005a9ae) main_idle_act4_pane

0x7234,	// (0x0005ae1a) popup_tb_extension_window_ParamLimits

0xd385,	// (0x00060f6b) tb_ext_find_pane_ParamLimits

0xd385,	// (0x00060f6b) tb_ext_find_pane

0xd4e8,	// (0x000610ce) ai_gene_pane_1_cp1

0x8c2f,	// (0x0005c815) ai_gene_pane_2_cp1

0xd4f0,	// (0x000610d6) list_single_idle_plugin_calendar_pane

0xd4f9,	// (0x000610df) list_single_idle_plugin_notification_pane

0xd502,	// (0x000610e8) list_single_idle_plugin_player_pane

0xd50b,	// (0x000610f1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd50b,	// (0x000610f1) list_single_idle_plugin_shortcut_pane

0xd52d,	// (0x00061113) main_idle_act4_pane_t1

0xd53f,	// (0x00061125) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x00063936) main_idle_act4_pane_t

0xd551,	// (0x00061137) middle_sk_idle_act4_pane_ParamLimits

0xd551,	// (0x00061137) middle_sk_idle_act4_pane

0xd567,	// (0x0006114d) popup_clock_digital_analogue_window_cp2

0xd581,	// (0x00061167) shortcut_wheel_idle_act4_pane_ParamLimits

0xd581,	// (0x00061167) shortcut_wheel_idle_act4_pane

0xbade,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g1

0xbade,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g2

0xbade,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g3

0xbade,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g4

0xbade,	// (0x0005f6c4) shortcut_wheel_idle_act4_pane_g5

0xd595,	// (0x0006117b) shortcut_wheel_idle_act4_pane_g6

0xd59d,	// (0x00061183) shortcut_wheel_idle_act4_pane_g7

0xd5a5,	// (0x0006118b) shortcut_wheel_idle_act4_pane_g8

0xd5ad,	// (0x00061193) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0006393b) shortcut_wheel_idle_act4_pane_g

0xbd4e,	// (0x0005f934) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd4e,	// (0x0005f934) middle_sk_idle_act4_pane_g1

0xd611,	// (0x000611f7) middle_sk_idle_act4_pane_g2_ParamLimits

0xd611,	// (0x000611f7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0006395e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0006395e) middle_sk_idle_act4_pane_g

0xd61d,	// (0x00061203) middle_sk_idle_act4_pane_t1_ParamLimits

0xd61d,	// (0x00061203) middle_sk_idle_act4_pane_t1

0xd63a,	// (0x00061220) grid_ai_shortcut_pane_ParamLimits

0xd63a,	// (0x00061220) grid_ai_shortcut_pane

0xd653,	// (0x00061239) list_highlight_pane_cp16_ParamLimits

0xd653,	// (0x00061239) list_highlight_pane_cp16

0xd660,	// (0x00061246) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd660,	// (0x00061246) list_single_idle_plugin_shortcut_pane_g1

0xd66c,	// (0x00061252) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd66c,	// (0x00061252) list_single_idle_plugin_shortcut_pane_g2

0xd684,	// (0x0006126a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd684,	// (0x0006126a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x00063963) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x00063963) list_single_idle_plugin_shortcut_pane_g

0xd697,	// (0x0006127d) cell_ai_shortcut_pane_ParamLimits

0xd697,	// (0x0006127d) cell_ai_shortcut_pane

0xd6bb,	// (0x000612a1) cell_ai_shortcut_pane_g1_ParamLimits

0xd6bb,	// (0x000612a1) cell_ai_shortcut_pane_g1

0xd4e8,	// (0x000610ce) ai_gene_pane_1_cp2

0xd6dd,	// (0x000612c3) ai_gene_pane_2_cp2

0xd6e5,	// (0x000612cb) list_highlight_pane_cp15

0xd6ee,	// (0x000612d4) list_single_idle_plugin_calendar_pane_g1

0xd6e5,	// (0x000612cb) list_highlight_pane_cp17

0xd6f6,	// (0x000612dc) list_single_idle_plugin_calendar_pane_g1_copy1

0xd6fe,	// (0x000612e4) list_single_idle_plugin_player_pane_g1

0xae88,	// (0x0005ea6e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0006396a) list_single_idle_plugin_player_pane_g

0xd706,	// (0x000612ec) list_single_idle_plugin_player_pane_t1

0xd714,	// (0x000612fa) list_single_idle_plugin_player_pane_t2

0xd722,	// (0x00061308) list_single_idle_plugin_player_pane_t3

0xd730,	// (0x00061316) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0006396f) list_single_idle_plugin_player_pane_t

0xd73e,	// (0x00061324) wait_bar_pane_cp15

0xd746,	// (0x0006132c) grid_ai_notification_pane

0xae88,	// (0x0005ea6e) list_single_idle_plugin_notification_pane_g1

0xd74f,	// (0x00061335) cell_ai_notification_pane_ParamLimits

0xd74f,	// (0x00061335) cell_ai_notification_pane

0xd75c,	// (0x00061342) cell_ai_notification_pane_g1

0xd764,	// (0x0006134a) cell_ai_notification_pane_t1

0xd772,	// (0x00061358) tb_ext_find_button_pane

0xd77a,	// (0x00061360) tb_ext_find_pane_g1

0xd782,	// (0x00061368) tb_ext_find_pane_t1

0x12f9,	// (0x00054edf) tb_ext_find_button_pane_g1

0xd790,	// (0x00061376) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x00063978) tb_ext_find_button_pane_g

0xd52d,	// (0x00061113) main_idle_act4_pane_t1_ParamLimits

0xd53f,	// (0x00061125) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x00063936) main_idle_act4_pane_t_ParamLimits

0xd567,	// (0x0006114d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd575,	// (0x0006115b) sat_plugin_idle_act4_pane_ParamLimits

0xd575,	// (0x0006115b) sat_plugin_idle_act4_pane

0xd799,	// (0x0006137f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd799,	// (0x0006137f) sat_plugin_idle_act4_pane_t1

0xd7ac,	// (0x00061392) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd7ac,	// (0x00061392) sat_plugin_idle_act4_pane_t2

0xd7bf,	// (0x000613a5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd7bf,	// (0x000613a5) sat_plugin_idle_act4_pane_t3

0xd7d2,	// (0x000613b8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7d2,	// (0x000613b8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0006397d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0006397d) sat_plugin_idle_act4_pane_t

0x54d0,	// (0x000590b6) popup_battery_window_ParamLimits

0x54d0,	// (0x000590b6) popup_battery_window

0xece9,	// (0x000628cf) bg_popup_sub_pane_cp25_ParamLimits

0xece9,	// (0x000628cf) bg_popup_sub_pane_cp25

0xd7e5,	// (0x000613cb) popup_battery_window_g1_ParamLimits

0xd7e5,	// (0x000613cb) popup_battery_window_g1

0xd7f1,	// (0x000613d7) popup_battery_window_t1_ParamLimits

0xd7f1,	// (0x000613d7) popup_battery_window_t1

0xd803,	// (0x000613e9) popup_battery_window_t2_ParamLimits

0xd803,	// (0x000613e9) popup_battery_window_t2

0x0001,

0xfda0,	// (0x00063986) popup_battery_window_t_ParamLimits

0xfda0,	// (0x00063986) popup_battery_window_t

0x8af8,	// (0x0005c6de) midp_canvas_pane_ParamLimits

0x8b71,	// (0x0005c757) midp_keypad_pane_ParamLimits

0x8b71,	// (0x0005c757) midp_keypad_pane

0x8e2a,	// (0x0005ca10) main_midp_pane_ParamLimits

0xb597,	// (0x0005f17d) signal_pane_g2_cp_ParamLimits

0xd820,	// (0x00061406) aid_size_cell_midp_keypad_ParamLimits

0xd820,	// (0x00061406) aid_size_cell_midp_keypad

0xd83a,	// (0x00061420) midp_keyp_game_grid_pane_ParamLimits

0xd83a,	// (0x00061420) midp_keyp_game_grid_pane

0xd85a,	// (0x00061440) midp_keyp_rocker_pane_ParamLimits

0xd85a,	// (0x00061440) midp_keyp_rocker_pane

0xd893,	// (0x00061479) midp_keyp_sk_left_pane_ParamLimits

0xd893,	// (0x00061479) midp_keyp_sk_left_pane

0xd8ed,	// (0x000614d3) midp_keyp_sk_right_pane_ParamLimits

0xd8ed,	// (0x000614d3) midp_keyp_sk_right_pane

0xeb4f,	// (0x00062735) bg_button_pane_cp03

0xd947,	// (0x0006152d) midp_keyp_sk_left_pane_g1

0xeb4f,	// (0x00062735) bg_button_pane_cp04

0xd947,	// (0x0006152d) midp_keyp_sk_right_pane_g1

0xbade,	// (0x0005f6c4) midp_keyp_rocker_pane_g1

0xd950,	// (0x00061536) keyp_game_cell_pane_ParamLimits

0xd950,	// (0x00061536) keyp_game_cell_pane

0xeb4f,	// (0x00062735) bg_button_pane_cp02

0xd963,	// (0x00061549) keyp_game_cell_pane_g1

0x5506,	// (0x000590ec) popup_fep_vkb2_window_ParamLimits

0x5506,	// (0x000590ec) popup_fep_vkb2_window

0x7f6a,	// (0x0005bb50) aid_size_cell_vkb2_ParamLimits

0x7f6a,	// (0x0005bb50) aid_size_cell_vkb2

0x7fbe,	// (0x0005bba4) popup_fep_vkb2_window_g1_ParamLimits

0x7fbe,	// (0x0005bba4) popup_fep_vkb2_window_g1

0x8006,	// (0x0005bbec) vkb2_area_bottom_pane_ParamLimits

0x8006,	// (0x0005bbec) vkb2_area_bottom_pane

0x8052,	// (0x0005bc38) vkb2_area_keypad_pane_ParamLimits

0x8052,	// (0x0005bc38) vkb2_area_keypad_pane

0x8094,	// (0x0005bc7a) vkb2_area_top_pane_ParamLimits

0x8094,	// (0x0005bc7a) vkb2_area_top_pane

0x810e,	// (0x0005bcf4) vkb2_top_entry_pane_ParamLimits

0x810e,	// (0x0005bcf4) vkb2_top_entry_pane

0x8138,	// (0x0005bd1e) vkb2_top_grid_left_pane_ParamLimits

0x8138,	// (0x0005bd1e) vkb2_top_grid_left_pane

0x8156,	// (0x0005bd3c) vkb2_top_grid_right_pane_ParamLimits

0x8156,	// (0x0005bd3c) vkb2_top_grid_right_pane

0x8174,	// (0x0005bd5a) vkb2_cell_keypad_pane_ParamLimits

0x8174,	// (0x0005bd5a) vkb2_cell_keypad_pane

0x8245,	// (0x0005be2b) vkb2_area_bottom_grid_pane_ParamLimits

0x8245,	// (0x0005be2b) vkb2_area_bottom_grid_pane

0x826b,	// (0x0005be51) vkb2_area_bottom_pane_g1_ParamLimits

0x826b,	// (0x0005be51) vkb2_area_bottom_pane_g1

0x828f,	// (0x0005be75) vkb2_area_bottom_pane_g2_ParamLimits

0x828f,	// (0x0005be75) vkb2_area_bottom_pane_g2

0x82bd,	// (0x0005bea3) vkb2_area_bottom_pane_g3_ParamLimits

0x82bd,	// (0x0005bea3) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0006398b) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0006398b) vkb2_area_bottom_pane_g

0x831e,	// (0x0005bf04) vkb2_top_cell_left_pane_ParamLimits

0x831e,	// (0x0005bf04) vkb2_top_cell_left_pane

0xd974,	// (0x0006155a) vkb2_top_entry_pane_g1_ParamLimits

0xd974,	// (0x0006155a) vkb2_top_entry_pane_g1

0xd982,	// (0x00061568) vkb2_top_entry_pane_t1_ParamLimits

0xd982,	// (0x00061568) vkb2_top_entry_pane_t1

0xd9b4,	// (0x0006159a) vkb2_top_entry_pane_t2_ParamLimits

0xd9b4,	// (0x0006159a) vkb2_top_entry_pane_t2

0xd9e6,	// (0x000615cc) vkb2_top_entry_pane_t3_ParamLimits

0xd9e6,	// (0x000615cc) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x00063992) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x00063992) vkb2_top_entry_pane_t

0x836b,	// (0x0005bf51) vkb2_top_grid_right_pane_g1_ParamLimits

0x836b,	// (0x0005bf51) vkb2_top_grid_right_pane_g1

0x8381,	// (0x0005bf67) vkb2_top_grid_right_pane_g2_ParamLimits

0x8381,	// (0x0005bf67) vkb2_top_grid_right_pane_g2

0x8399,	// (0x0005bf7f) vkb2_top_grid_right_pane_g3_ParamLimits

0x8399,	// (0x0005bf7f) vkb2_top_grid_right_pane_g3

0x83b1,	// (0x0005bf97) vkb2_top_grid_right_pane_g4_ParamLimits

0x83b1,	// (0x0005bf97) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x00063999) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x00063999) vkb2_top_grid_right_pane_g

0x83c7,	// (0x0005bfad) vkb2_top_cell_left_pane_g1

0x83de,	// (0x0005bfc4) vkb2_cell_keypad_pane_g1_ParamLimits

0x83de,	// (0x0005bfc4) vkb2_cell_keypad_pane_g1

0xda0a,	// (0x000615f0) vkb2_cell_keypad_pane_t1_ParamLimits

0xda0a,	// (0x000615f0) vkb2_cell_keypad_pane_t1

0x83ec,	// (0x0005bfd2) vkb2_cell_bottom_grid_pane_ParamLimits

0x83ec,	// (0x0005bfd2) vkb2_cell_bottom_grid_pane

0x8425,	// (0x0005c00b) vkb2_cell_bottom_grid_pane_g1

0xd5b5,	// (0x0006119b) aid_call2_pane_cp02

0xd5bd,	// (0x000611a3) aid_call_pane_cp02

0xd5c5,	// (0x000611ab) clock_digital_number_pane_cp10

0xd5cd,	// (0x000611b3) clock_digital_number_pane_cp11

0xd5d5,	// (0x000611bb) clock_digital_number_pane_cp12

0xd5dd,	// (0x000611c3) clock_digital_number_pane_cp13

0xd5e5,	// (0x000611cb) clock_digital_separator_pane_cp10

0x12f9,	// (0x00054edf) popup_clock_digital_analogue_window_cp2_g1

0x12f9,	// (0x00054edf) popup_clock_digital_analogue_window_cp2_g2

0xd5ed,	// (0x000611d3) popup_clock_digital_analogue_window_cp2_g3

0x12f9,	// (0x00054edf) popup_clock_digital_analogue_window_cp2_g4

0xd5ed,	// (0x000611d3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0006394e) popup_clock_digital_analogue_window_cp2_g

0xd5f5,	// (0x000611db) popup_clock_digital_analogue_window_cp2_t1

0xd603,	// (0x000611e9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x00063959) popup_clock_digital_analogue_window_cp2_t

0xbade,	// (0x0005f6c4) clock_digital_number_pane_cp10_g1

0xbade,	// (0x0005f6c4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x0006373c) clock_digital_number_pane_cp10_g

0xbade,	// (0x0005f6c4) clock_digital_separator_pane_cp10_g1

0xbade,	// (0x0005f6c4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x0006373c) clock_digital_separator_pane_cp10_g

0xd432,	// (0x00061018) uniindi_top_pane_g3

0xd443,	// (0x00061029) uniindi_top_pane_g4

0x81ff,	// (0x0005bde5) vkb2_row_keypad_pane_ParamLimits

0x81ff,	// (0x0005bde5) vkb2_row_keypad_pane

0x8441,	// (0x0005c027) vkb2_cell_t_keypad_pane_ParamLimits

0x8441,	// (0x0005c027) vkb2_cell_t_keypad_pane

0x8451,	// (0x0005c037) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8451,	// (0x0005c037) vkb2_cell_t_keypad_pane_cp08

0x8464,	// (0x0005c04a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8464,	// (0x0005c04a) vkb2_cell_t_keypad_pane_cp09

0x8478,	// (0x0005c05e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8478,	// (0x0005c05e) vkb2_cell_t_keypad_pane_cp01

0x8489,	// (0x0005c06f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8489,	// (0x0005c06f) vkb2_cell_t_keypad_pane_cp02

0x849a,	// (0x0005c080) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x849a,	// (0x0005c080) vkb2_cell_t_keypad_pane_cp03

0x84ab,	// (0x0005c091) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x84ab,	// (0x0005c091) vkb2_cell_t_keypad_pane_cp04

0x84bc,	// (0x0005c0a2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x84bc,	// (0x0005c0a2) vkb2_cell_t_keypad_pane_cp05

0x84cd,	// (0x0005c0b3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x84cd,	// (0x0005c0b3) vkb2_cell_t_keypad_pane_cp06

0x84de,	// (0x0005c0c4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x84de,	// (0x0005c0c4) vkb2_cell_t_keypad_pane_cp07

0x84ef,	// (0x0005c0d5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x84ef,	// (0x0005c0d5) vkb2_cell_t_keypad_pane_cp10

0x7ba8,	// (0x0005b78e) vkb2_cell_t_keypad_pane_g1

0xda21,	// (0x00061607) vkb2_cell_t_keypad_pane_t1

0x540b,	// (0x00058ff1) popup_grid_graphic2_window

0xda33,	// (0x00061619) aid_size_cell_graphic2_ParamLimits

0xda33,	// (0x00061619) aid_size_cell_graphic2

0xda6b,	// (0x00061651) bg_popup_window_pane_cp21_ParamLimits

0xda6b,	// (0x00061651) bg_popup_window_pane_cp21

0xda79,	// (0x0006165f) graphic2_pages_pane_ParamLimits

0xda79,	// (0x0006165f) graphic2_pages_pane

0xdabf,	// (0x000616a5) grid_graphic2_control_pane_ParamLimits

0xdabf,	// (0x000616a5) grid_graphic2_control_pane

0xdafd,	// (0x000616e3) grid_graphic2_pane_ParamLimits

0xdafd,	// (0x000616e3) grid_graphic2_pane

0xdb71,	// (0x00061757) cell_graphic2_pane

0x540b,	// (0x00058ff1) main_comp_mode_pane

0xccb5,	// (0x0006089b) list_ai3_gene_pane_ParamLimits

0xd079,	// (0x00060c5f) bg_popup_window_pane_cp19_ParamLimits

0xd085,	// (0x00060c6b) bg_touch_area_indi_pane_ParamLimits

0xd085,	// (0x00060c6b) bg_touch_area_indi_pane

0xd09b,	// (0x00060c81) bg_touch_area_indi_pane_cp01_ParamLimits

0xd09b,	// (0x00060c81) bg_touch_area_indi_pane_cp01

0xd0b1,	// (0x00060c97) bg_touch_area_indi_pane_cp02_ParamLimits

0xd0b1,	// (0x00060c97) bg_touch_area_indi_pane_cp02

0xd0c9,	// (0x00060caf) bg_touch_area_indi_pane_cp03_ParamLimits

0xd0c9,	// (0x00060caf) bg_touch_area_indi_pane_cp03

0xd0e3,	// (0x00060cc9) popup_slider_window_g1_ParamLimits

0xd0ff,	// (0x00060ce5) popup_slider_window_g2_ParamLimits

0xd11b,	// (0x00060d01) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x000638e3) popup_slider_window_g_ParamLimits

0xd177,	// (0x00060d5d) popup_slider_window_t1_ParamLimits

0xd1eb,	// (0x00060dd1) small_volume_slider_vertical_pane_ParamLimits

0xdb71,	// (0x00061757) cell_graphic2_pane_ParamLimits

0xdbc0,	// (0x000617a6) bg_button_pane_cp10_ParamLimits

0xdbc0,	// (0x000617a6) bg_button_pane_cp10

0xdbd3,	// (0x000617b9) bg_button_pane_cp11_ParamLimits

0xdbd3,	// (0x000617b9) bg_button_pane_cp11

0xdbe6,	// (0x000617cc) graphic2_pages_pane_g1_ParamLimits

0xdbe6,	// (0x000617cc) graphic2_pages_pane_g1

0xdc01,	// (0x000617e7) graphic2_pages_pane_g2_ParamLimits

0xdc01,	// (0x000617e7) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x000639a7) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x000639a7) graphic2_pages_pane_g

0xdc19,	// (0x000617ff) graphic2_pages_pane_t1_ParamLimits

0xdc19,	// (0x000617ff) graphic2_pages_pane_t1

0xdc31,	// (0x00061817) cell_graphic2_control_pane_ParamLimits

0xdc31,	// (0x00061817) cell_graphic2_control_pane

0xdc4f,	// (0x00061835) cell_graphic2_pane_g1_ParamLimits

0xdc4f,	// (0x00061835) cell_graphic2_pane_g1

0xdc5c,	// (0x00061842) cell_graphic2_pane_g2_ParamLimits

0xdc5c,	// (0x00061842) cell_graphic2_pane_g2

0xdc69,	// (0x0006184f) cell_graphic2_pane_g3_ParamLimits

0xdc69,	// (0x0006184f) cell_graphic2_pane_g3

0xdc76,	// (0x0006185c) cell_graphic2_pane_g4_ParamLimits

0xdc76,	// (0x0006185c) cell_graphic2_pane_g4

0xdc83,	// (0x00061869) cell_graphic2_pane_g5_ParamLimits

0xdc83,	// (0x00061869) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x000639ac) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x000639ac) cell_graphic2_pane_g

0xdc9e,	// (0x00061884) cell_graphic2_pane_t1_ParamLimits

0xdc9e,	// (0x00061884) cell_graphic2_pane_t1

0x93c3,	// (0x0005cfa9) grid_highlight_pane_cp11_ParamLimits

0x93c3,	// (0x0005cfa9) grid_highlight_pane_cp11

0xece9,	// (0x000628cf) bg_button_pane_cp05

0xdcd5,	// (0x000618bb) cell_graphic2_control_pane_g1

0xbade,	// (0x0005f6c4) bg_touch_area_indi_pane_g1

0xdcfd,	// (0x000618e3) aid_cmod_rocker_key_size

0xdd07,	// (0x000618ed) aid_cmode_itu_key_size

0xdd11,	// (0x000618f7) main_cmode_video_pane

0xdd1b,	// (0x00061901) main_comp_mode_itu_pane

0xdd27,	// (0x0006190d) main_comp_mode_rocker_pane

0xdd33,	// (0x00061919) cell_cmode_rocker_pane_ParamLimits

0xdd33,	// (0x00061919) cell_cmode_rocker_pane

0xdd45,	// (0x0006192b) cell_cmode_itu_pane_ParamLimits

0xdd45,	// (0x0006192b) cell_cmode_itu_pane

0xf178,	// (0x00062d5e) bg_button_pane_cp06_ParamLimits

0xf178,	// (0x00062d5e) bg_button_pane_cp06

0xbd4e,	// (0x0005f934) cell_cmode_rocker_pane_g1_ParamLimits

0xbd4e,	// (0x0005f934) cell_cmode_rocker_pane_g1

0xd28f,	// (0x00060e75) cell_cmode_rocker_pane_g2_ParamLimits

0xd28f,	// (0x00060e75) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x000639bc) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x000639bc) cell_cmode_rocker_pane_g

0xeb4f,	// (0x00062735) bg_button_pane_cp07

0xdd5a,	// (0x00061940) cell_cmode_itu_pane_g1

0xdd63,	// (0x00061949) cell_cmode_itu_pane_t1

0xdd71,	// (0x00061957) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x000639c1) cell_cmode_itu_pane_t

0xd4b4,	// (0x0006109a) aid_touch_ctrl_left

0xd4bc,	// (0x000610a2) aid_touch_ctrl_right

0xeb4f,	// (0x00062735) compa_mode_pane

0xdd7f,	// (0x00061965) aid_cmod_rocker_key_size_cp

0xdd89,	// (0x0006196f) aid_cmode_itu_key_size_cp

0xdd93,	// (0x00061979) compa_mode_pane_g1

0xdd9b,	// (0x00061981) compa_mode_pane_g2

0xdda3,	// (0x00061989) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x000639c6) compa_mode_pane_g

0xddab,	// (0x00061991) main_comp_mode_itu_pane_cp

0xddb3,	// (0x00061999) main_comp_mode_rocker_pane_cp

0xddbb,	// (0x000619a1) cell_cmode_itu_pane_cp_ParamLimits

0xddbb,	// (0x000619a1) cell_cmode_itu_pane_cp

0xddd0,	// (0x000619b6) cell_cmode_rocker_pane_cp_ParamLimits

0xddd0,	// (0x000619b6) cell_cmode_rocker_pane_cp

0xf178,	// (0x00062d5e) bg_button_pane_cp06_cp_ParamLimits

0xf178,	// (0x00062d5e) bg_button_pane_cp06_cp

0xbd4e,	// (0x0005f934) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd4e,	// (0x0005f934) cell_cmode_rocker_pane_g1_cp

0xbade,	// (0x0005f6c4) cell_cmode_rocker_pane_g2_cp

0xeb4f,	// (0x00062735) bg_button_pane_cp07_cp

0xdde2,	// (0x000619c8) cell_cmode_itu_pane_g1_cp

0xddeb,	// (0x000619d1) cell_cmode_itu_pane_t1_cp

0xddeb,	// (0x000619d1) cell_cmode_itu_pane_t2_cp

0xa84c,	// (0x0005e432) settings_code_pane_cp2

0xebb1,	// (0x00062797) bg_popup_window_pane_cp3_ParamLimits

0xee02,	// (0x000629e8) heading_pane_cp3_ParamLimits

0xee0e,	// (0x000629f4) listscroll_popup_graphic_pane_ParamLimits

0x7951,	// (0x0005b537) fep_hwr_aid_pane_ParamLimits

0x7ec5,	// (0x0005baab) aid_touch_sctrl_top_ParamLimits

0x7ee0,	// (0x0005bac6) sctrl_sk_top_pane_g1_ParamLimits

0x7ba8,	// (0x0005b78e) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x000638fc) sctrl_sk_top_pane_g_ParamLimits

0x7eed,	// (0x0005bad3) sctrl_sk_top_pane_t1_ParamLimits

0x7ec5,	// (0x0005baab) aid_touch_sctrl_bottom_ParamLimits

0x7eed,	// (0x0005bad3) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3fe,	// (0x00060fe4) aid_area_touch_clock

0x80d6,	// (0x0005bcbc) aid_vkb2_area_top_pane_cell_ParamLimits

0x80d6,	// (0x0005bcbc) aid_vkb2_area_top_pane_cell

0x8221,	// (0x0005be07) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8221,	// (0x0005be07) aid_vkb2_area_bottom_pane_cell

0xd96c,	// (0x00061552) popup_char_count_window

0xddf9,	// (0x000619df) popup_char_count_window_g1

0xde02,	// (0x000619e8) popup_char_count_window_g2

0xde0b,	// (0x000619f1) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x000639cd) popup_char_count_window_g

0xde14,	// (0x000619fa) popup_char_count_window_t1

0x7f9c,	// (0x0005bb82) popup_fep_char_preview_window_ParamLimits

0x7f9c,	// (0x0005bb82) popup_fep_char_preview_window

0x80f4,	// (0x0005bcda) vkb2_top_candi_pane_ParamLimits

0x80f4,	// (0x0005bcda) vkb2_top_candi_pane

0xde22,	// (0x00061a08) cell_vkb2_top_candi_pane_ParamLimits

0xde22,	// (0x00061a08) cell_vkb2_top_candi_pane

0x8504,	// (0x0005c0ea) bg_popup_fep_char_preview_window_ParamLimits

0x8504,	// (0x0005c0ea) bg_popup_fep_char_preview_window

0x8512,	// (0x0005c0f8) popup_fep_char_preview_window_t1_ParamLimits

0x8512,	// (0x0005c0f8) popup_fep_char_preview_window_t1

0xde6f,	// (0x00061a55) bg_popup_fep_char_preview_window_g1

0xde77,	// (0x00061a5d) bg_popup_fep_char_preview_window_g2

0xde7f,	// (0x00061a65) bg_popup_fep_char_preview_window_g3

0xde87,	// (0x00061a6d) bg_popup_fep_char_preview_window_g4

0xde8f,	// (0x00061a75) bg_popup_fep_char_preview_window_g5

0x854c,	// (0x0005c132) bg_popup_fep_char_preview_window_g6

0xde97,	// (0x00061a7d) bg_popup_fep_char_preview_window_g7

0xde9f,	// (0x00061a85) bg_popup_fep_char_preview_window_g8

0xdea7,	// (0x00061a8d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x000639d4) bg_popup_fep_char_preview_window_g

0x7ba8,	// (0x0005b78e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7ba8,	// (0x0005b78e) cell_vkb2_top_candi_pane_g1

0x7bb6,	// (0x0005b79c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7bb6,	// (0x0005b79c) cell_vkb2_top_candi_pane_g2

0xcae4,	// (0x000606ca) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcae4,	// (0x000606ca) cell_vkb2_top_candi_pane_g3

0x8554,	// (0x0005c13a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8554,	// (0x0005c13a) cell_vkb2_top_candi_pane_g4

0xc24e,	// (0x0005fe34) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc24e,	// (0x0005fe34) cell_vkb2_top_candi_pane_g5

0x8575,	// (0x0005c15b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8575,	// (0x0005c15b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x000639e7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x000639e7) cell_vkb2_top_candi_pane_g

0x8583,	// (0x0005c169) cell_vkb2_top_candi_pane_t1

0x76af,	// (0x0005b295) aid_size_touch_slider_mark_ParamLimits

0x76af,	// (0x0005b295) aid_size_touch_slider_mark

0xdaaf,	// (0x00061695) grid_graphic2_catg_pane_ParamLimits

0xdaaf,	// (0x00061695) grid_graphic2_catg_pane

0xdb4d,	// (0x00061733) popup_grid_graphic2_window_t1_ParamLimits

0xdb4d,	// (0x00061733) popup_grid_graphic2_window_t1

0xdb5f,	// (0x00061745) popup_grid_graphic2_window_t2_ParamLimits

0xdb5f,	// (0x00061745) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x000639a2) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x000639a2) popup_grid_graphic2_window_t

0xece9,	// (0x000628cf) bg_button_pane_cp05_ParamLimits

0xdcd5,	// (0x000618bb) cell_graphic2_control_pane_g1_ParamLimits

0xdeaf,	// (0x00061a95) cell_graphic2_catg_pane_ParamLimits

0xdeaf,	// (0x00061a95) cell_graphic2_catg_pane

0xeb4f,	// (0x00062735) bg_button_pane_cp12

0xdec1,	// (0x00061aa7) cell_graphic2_catg_pane_g1

0xd3c9,	// (0x00060faf) cell_tb_ext_pane_t1_ParamLimits

0x833e,	// (0x0005bf24) vkb2_top_cell_right_narrow_pane_ParamLimits

0x833e,	// (0x0005bf24) vkb2_top_cell_right_narrow_pane

0x8356,	// (0x0005bf3c) vkb2_top_cell_right_wide_pane_ParamLimits

0x8356,	// (0x0005bf3c) vkb2_top_cell_right_wide_pane

0x7943,	// (0x0005b529) bg_vkb2_func_pane_ParamLimits

0x7943,	// (0x0005b529) bg_vkb2_func_pane

0x83c7,	// (0x0005bfad) vkb2_top_cell_left_pane_g1_ParamLimits

0x7943,	// (0x0005b529) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7943,	// (0x0005b529) bg_vkb2_fuc_pane_cp03

0x8425,	// (0x0005c00b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x933f,	// (0x0005cf25) bg_vkb2_func_pane_g1

0x9347,	// (0x0005cf2d) bg_vkb2_func_pane_g2

0x9357,	// (0x0005cf3d) bg_vkb2_func_pane_g3

0x934f,	// (0x0005cf35) bg_vkb2_func_pane_g4

0x935f,	// (0x0005cf45) bg_vkb2_func_pane_g5

0x9367,	// (0x0005cf4d) bg_vkb2_func_pane_g6

0x936f,	// (0x0005cf55) bg_vkb2_func_pane_g7

0x9377,	// (0x0005cf5d) bg_vkb2_func_pane_g8

0x9337,	// (0x0005cf1d) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x000639f4) bg_vkb2_func_pane_g

0x7943,	// (0x0005b529) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7943,	// (0x0005b529) bg_vkb2_fuc_pane_cp01

0x83c7,	// (0x0005bfad) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x83c7,	// (0x0005bfad) vkb2_top_cell_right_wide_pane_g1

0x7943,	// (0x0005b529) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7943,	// (0x0005b529) bg_vkb2_fuc_pane_cp02

0x8425,	// (0x0005c00b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8425,	// (0x0005c00b) vkb2_top_cell_right_narrow_pane_g1

0xcffb,	// (0x00060be1) aid_touch_area_decrease_ParamLimits

0xcffb,	// (0x00060be1) aid_touch_area_decrease

0xd01b,	// (0x00060c01) aid_touch_area_increase_ParamLimits

0xd01b,	// (0x00060c01) aid_touch_area_increase

0xd027,	// (0x00060c0d) aid_touch_area_mute_ParamLimits

0xd027,	// (0x00060c0d) aid_touch_area_mute

0xd04b,	// (0x00060c31) aid_touch_area_slider_ParamLimits

0xd04b,	// (0x00060c31) aid_touch_area_slider

0xd137,	// (0x00060d1d) popup_slider_window_g4_ParamLimits

0xd137,	// (0x00060d1d) popup_slider_window_g4

0xd143,	// (0x00060d29) popup_slider_window_g5_ParamLimits

0xd143,	// (0x00060d29) popup_slider_window_g5

0xd165,	// (0x00060d4b) popup_slider_window_g6_ParamLimits

0xd165,	// (0x00060d4b) popup_slider_window_g6

0xd1a5,	// (0x00060d8b) popup_slider_window_t2_ParamLimits

0xd1a5,	// (0x00060d8b) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x000638f0) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x000638f0) popup_slider_window_t

0xd1bd,	// (0x00060da3) slider_pane_ParamLimits

0xd1bd,	// (0x00060da3) slider_pane

0xdeca,	// (0x00061ab0) slider_pane_g1_ParamLimits

0xdeca,	// (0x00061ab0) slider_pane_g1

0xdede,	// (0x00061ac4) slider_pane_g2_ParamLimits

0xdede,	// (0x00061ac4) slider_pane_g2

0xdef4,	// (0x00061ada) slider_pane_g3_ParamLimits

0xdef4,	// (0x00061ada) slider_pane_g3

0x0003,

0xfe21,	// (0x00063a07) slider_pane_g_ParamLimits

0xfe21,	// (0x00063a07) slider_pane_g

0x7290,	// (0x0005ae76) popup_tb_float_extension_window_ParamLimits

0x7290,	// (0x0005ae76) popup_tb_float_extension_window

0xdf20,	// (0x00061b06) aid_size_cell_tb_float_ext

0xeb4f,	// (0x00062735) bg_popup_sub_window_cp28

0xdf2c,	// (0x00061b12) grid_tb_float_ext_pane

0xdf36,	// (0x00061b1c) cell_tb_float_ext_pane_ParamLimits

0xdf36,	// (0x00061b1c) cell_tb_float_ext_pane

0xdf50,	// (0x00061b36) cell_tb_float_ext_pane_g1

0xdf59,	// (0x00061b3f) grid_highlight_pane_cp12

0x7a92,	// (0x0005b678) cell_last_hwr_side_pane_ParamLimits

0x7a92,	// (0x0005b678) cell_last_hwr_side_pane

0xbade,	// (0x0005f6c4) cell_last_hwr_side_pane_g1

0xdf62,	// (0x00061b48) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x00063a10) cell_last_hwr_side_pane_g

0x82ed,	// (0x0005bed3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x82ed,	// (0x0005bed3) vkb2_area_bottom_space_btn_pane

0x7ba8,	// (0x0005b78e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xda21,	// (0x00061607) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8583,	// (0x0005c169) cell_vkb2_top_candi_pane_t1_ParamLimits

0x85a2,	// (0x0005c188) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x85a2,	// (0x0005c188) vkb2_area_bottom_space_btn_pane_g1

0x85dc,	// (0x0005c1c2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x85dc,	// (0x0005c1c2) vkb2_area_bottom_space_btn_pane_g2

0x8612,	// (0x0005c1f8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8612,	// (0x0005c1f8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x00063a15) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x00063a15) vkb2_area_bottom_space_btn_pane_g

0x7a06,	// (0x0005b5ec) cel_fep_hwr_func_pane_ParamLimits

0x7a06,	// (0x0005b5ec) cel_fep_hwr_func_pane

0x7a42,	// (0x0005b628) cell_hwr_side_button_pane_ParamLimits

0x7a42,	// (0x0005b628) cell_hwr_side_button_pane

0xd3fe,	// (0x00060fe4) aid_area_touch_clock_ParamLimits

0xece9,	// (0x000628cf) bg_uniindi_top_pane_ParamLimits

0xd410,	// (0x00060ff6) uniindi_top_pane_g1_ParamLimits

0xd426,	// (0x0006100c) uniindi_top_pane_g2_ParamLimits

0xd432,	// (0x00061018) uniindi_top_pane_g3_ParamLimits

0xd443,	// (0x00061029) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x00063928) uniindi_top_pane_g_ParamLimits

0xd450,	// (0x00061036) uniindi_top_pane_t1_ParamLimits

0xece9,	// (0x000628cf) bg_vkb2_func_pane_cp01_ParamLimits

0xece9,	// (0x000628cf) bg_vkb2_func_pane_cp01

0xdf6b,	// (0x00061b51) cel_fep_hwr_func_pane_g1_ParamLimits

0xdf6b,	// (0x00061b51) cel_fep_hwr_func_pane_g1

0xece9,	// (0x000628cf) bg_vkb2_func_pane_cp02_ParamLimits

0xece9,	// (0x000628cf) bg_vkb2_func_pane_cp02

0xdf6b,	// (0x00061b51) cell_hwr_side_button_pane_g1_ParamLimits

0xdf6b,	// (0x00061b51) cell_hwr_side_button_pane_g1

0x91bb,	// (0x0005cda1) status_pane_g4_ParamLimits

0x91bb,	// (0x0005cda1) status_pane_g4

0x91d5,	// (0x0005cdbb) status_pane_t1

0xb81f,	// (0x0005f405) form2_midp_gauge_slider_cont_pane

0xb827,	// (0x0005f40d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb839,	// (0x0005f41f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb84b,	// (0x0005f431) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x000636ef) form2_midp_gauge_slider_pane_t_ParamLimits

0xb85d,	// (0x0005f443) form2_midp_slider_pane_ParamLimits

0x7f5c,	// (0x0005bb42) aid_size_cell_func_vkb2_ParamLimits

0x7f5c,	// (0x0005bb42) aid_size_cell_func_vkb2

0xdf0c,	// (0x00061af2) slider_pane_g4_ParamLimits

0xdf0c,	// (0x00061af2) slider_pane_g4

0x865c,	// (0x0005c242) form2_midp_gauge_slider_pane_t2_cp01

0x866a,	// (0x0005c250) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x866a,	// (0x0005c250) form2_midp_gauge_slider_pane_t3_cp01

0x8687,	// (0x0005c26d) form2_midp_slider_pane_cp01

0xeb4f,	// (0x00062735) navi_smil_pane

0xdfa4,	// (0x00061b8a) navi_smil_pane_g1

0xdfac,	// (0x00061b92) navi_smil_pane_t1

0xdf79,	// (0x00061b5f) form2_midp_slider_pane_g1

0xdf82,	// (0x00061b68) form2_midp_slider_pane_g2

0xdf8a,	// (0x00061b70) form2_midp_slider_pane_g3

0xdf79,	// (0x00061b5f) form2_midp_slider_pane_g4

0xdf92,	// (0x00061b78) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x00063a1e) form2_midp_slider_pane_g

0x864c,	// (0x0005c232) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x864c,	// (0x0005c232) vkb2_area_bottom_space_btn_pane_g4

0x8fea,	// (0x0005cbd0) lc0_navi_pane_ParamLimits

0x8fea,	// (0x0005cbd0) lc0_navi_pane

0x9060,	// (0x0005cc46) lc0_stat_indi_pane_ParamLimits

0x9060,	// (0x0005cc46) lc0_stat_indi_pane

0x9077,	// (0x0005cc5d) ls0_title_pane_ParamLimits

0x9077,	// (0x0005cc5d) ls0_title_pane

0xf178,	// (0x00062d5e) bg_popup_sub_pane_cp14_ParamLimits

0xd3e5,	// (0x00060fcb) list_uniindi_pane_ParamLimits

0xd3f1,	// (0x00060fd7) uniindi_top_pane_ParamLimits

0xd48c,	// (0x00061072) list_single_uniindi_pane_g1_ParamLimits

0xd49f,	// (0x00061085) list_single_uniindi_pane_t1_ParamLimits

0x8690,	// (0x0005c276) lc0_stat_clock_pane_ParamLimits

0x8690,	// (0x0005c276) lc0_stat_clock_pane

0xdfba,	// (0x00061ba0) lc0_stat_indi_pane_g1_ParamLimits

0xdfba,	// (0x00061ba0) lc0_stat_indi_pane_g1

0xdfc7,	// (0x00061bad) lc0_stat_indi_pane_g2_ParamLimits

0xdfc7,	// (0x00061bad) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x00063a29) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x00063a29) lc0_stat_indi_pane_g

0x869d,	// (0x0005c283) lc0_uni_indicator_pane_ParamLimits

0x869d,	// (0x0005c283) lc0_uni_indicator_pane

0xdfd4,	// (0x00061bba) ls0_title_pane_g1_ParamLimits

0xdfd4,	// (0x00061bba) ls0_title_pane_g1

0xdfe8,	// (0x00061bce) ls0_title_pane_t1_ParamLimits

0xdfe8,	// (0x00061bce) ls0_title_pane_t1

0x86aa,	// (0x0005c290) lc0_uni_indicator_pane_g1_ParamLimits

0x86aa,	// (0x0005c290) lc0_uni_indicator_pane_g1

0xe01e,	// (0x00061c04) lc0_stat_clock_pane_t1

0x540b,	// (0x00058ff1) main_ai5_pane

0xe02c,	// (0x00061c12) ai5_sk_pane_ParamLimits

0xe02c,	// (0x00061c12) ai5_sk_pane

0xe039,	// (0x00061c1f) cell_ai5_widget_pane_ParamLimits

0xe039,	// (0x00061c1f) cell_ai5_widget_pane

0xe0eb,	// (0x00061cd1) aid_size_cell_widget_grid

0xe0f9,	// (0x00061cdf) bg_ai5_widget_pane_ParamLimits

0xe0f9,	// (0x00061cdf) bg_ai5_widget_pane

0xe16d,	// (0x00061d53) cell_ai5_widget_pane_g2

0xe17d,	// (0x00061d63) cell_ai5_widget_pane_g3

0xe194,	// (0x00061d7a) cell_ai5_widget_pane_g4

0xe1a0,	// (0x00061d86) cell_ai5_widget_pane_g5

0xe1ac,	// (0x00061d92) cell_ai5_widget_pane_g6

0xe1b8,	// (0x00061d9e) cell_ai5_widget_pane_g7

0xe200,	// (0x00061de6) cell_ai5_widget_pane_t1_ParamLimits

0xe200,	// (0x00061de6) cell_ai5_widget_pane_t1

0xe21d,	// (0x00061e03) cell_ai5_widget_pane_t2_ParamLimits

0xe21d,	// (0x00061e03) cell_ai5_widget_pane_t2

0xe235,	// (0x00061e1b) cell_ai5_widget_pane_t3_ParamLimits

0xe235,	// (0x00061e1b) cell_ai5_widget_pane_t3

0xe24d,	// (0x00061e33) cell_ai5_widget_pane_t4_ParamLimits

0xe24d,	// (0x00061e33) cell_ai5_widget_pane_t4

0xe26a,	// (0x00061e50) cell_ai5_widget_pane_t5_ParamLimits

0xe26a,	// (0x00061e50) cell_ai5_widget_pane_t5

0xe289,	// (0x00061e6f) cell_ai5_widget_pane_t6_ParamLimits

0xe289,	// (0x00061e6f) cell_ai5_widget_pane_t6

0xe29b,	// (0x00061e81) cell_ai5_widget_pane_t7_ParamLimits

0xe29b,	// (0x00061e81) cell_ai5_widget_pane_t7

0xe2b4,	// (0x00061e9a) cell_ai5_widget_pane_t8_ParamLimits

0xe2b4,	// (0x00061e9a) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x00063a43) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x00063a43) cell_ai5_widget_pane_t

0xe308,	// (0x00061eee) grid_ai5_widget_pane

0xf178,	// (0x00062d5e) highlight_cell_ai5_widget_pane_ParamLimits

0xf178,	// (0x00062d5e) highlight_cell_ai5_widget_pane

0xe316,	// (0x00061efc) ai5_sk_left_pane

0xe320,	// (0x00061f06) ai5_sk_middle_pane

0xe32a,	// (0x00061f10) ai5_sk_right_pane

0xe334,	// (0x00061f1a) bg_ai5_widget_pane_g1_ParamLimits

0xe334,	// (0x00061f1a) bg_ai5_widget_pane_g1

0xe340,	// (0x00061f26) bg_ai5_widget_pane_g2_ParamLimits

0xe340,	// (0x00061f26) bg_ai5_widget_pane_g2

0xe34c,	// (0x00061f32) bg_ai5_widget_pane_g3_ParamLimits

0xe34c,	// (0x00061f32) bg_ai5_widget_pane_g3

0xe358,	// (0x00061f3e) bg_ai5_widget_pane_g4_ParamLimits

0xe358,	// (0x00061f3e) bg_ai5_widget_pane_g4

0xe364,	// (0x00061f4a) bg_ai5_widget_pane_g5_ParamLimits

0xe364,	// (0x00061f4a) bg_ai5_widget_pane_g5

0xe370,	// (0x00061f56) bg_ai5_widget_pane_g6_ParamLimits

0xe370,	// (0x00061f56) bg_ai5_widget_pane_g6

0xe37c,	// (0x00061f62) bg_ai5_widget_pane_g7_ParamLimits

0xe37c,	// (0x00061f62) bg_ai5_widget_pane_g7

0xe388,	// (0x00061f6e) bg_ai5_widget_pane_g8_ParamLimits

0xe388,	// (0x00061f6e) bg_ai5_widget_pane_g8

0xe394,	// (0x00061f7a) bg_ai5_widget_pane_g9_ParamLimits

0xe394,	// (0x00061f7a) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x00063a58) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x00063a58) bg_ai5_widget_pane_g

0xe3c6,	// (0x00061fac) cell_shortcut_ai5_widget_pane_ParamLimits

0xe3c6,	// (0x00061fac) cell_shortcut_ai5_widget_pane

0x8ae4,	// (0x0005c6ca) bg_cell_shortcut_ai5_widget_pane

0xe3d7,	// (0x00061fbd) cell_grid_ai5_widget_pane_g1

0x8ae4,	// (0x0005c6ca) highlight_cell_shortcut_ai5_widget_pane

0x933f,	// (0x0005cf25) ai5_sk_left_pane_g1

0xe3e0,	// (0x00061fc6) ai5_sk_left_pane_g2

0xe3e8,	// (0x00061fce) ai5_sk_left_pane_g3

0xe3f0,	// (0x00061fd6) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x00063a6b) ai5_sk_left_pane_g

0xe3f8,	// (0x00061fde) ai5_sk_left_pane_t1

0x9347,	// (0x0005cf2d) ai5_sk_right_pane_g1

0xe406,	// (0x00061fec) ai5_sk_right_pane_g2

0xe40e,	// (0x00061ff4) ai5_sk_right_pane_g3

0xe416,	// (0x00061ffc) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x00063a74) ai5_sk_right_pane_g

0xe41e,	// (0x00062004) ai5_sk_right_pane_t1

0x9347,	// (0x0005cf2d) ai5_sk_middle_pane_g1

0x933f,	// (0x0005cf25) ai5_sk_middle_pane_g2

0x935f,	// (0x0005cf45) ai5_sk_middle_pane_g3

0xe40e,	// (0x00061ff4) ai5_sk_middle_pane_g4

0xe3e8,	// (0x00061fce) ai5_sk_middle_pane_g5

0xe42c,	// (0x00062012) ai5_sk_middle_pane_g6

0xe434,	// (0x0006201a) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x00063a7d) ai5_sk_middle_pane_g

0x8e70,	// (0x0005ca56) aid_touch_area_size_lc0_ParamLimits

0x8e70,	// (0x0005ca56) aid_touch_area_size_lc0

0x7bd7,	// (0x0005b7bd) cell_hwr_candidate_pane_t1_ParamLimits

0x8e8c,	// (0x0005ca72) aid_touch_navi_pane

0x9165,	// (0x0005cd4b) status_dt_navi_pane_ParamLimits

0x9165,	// (0x0005cd4b) status_dt_navi_pane

0x9172,	// (0x0005cd58) status_dt_sta_pane_ParamLimits

0x9172,	// (0x0005cd58) status_dt_sta_pane

0xe43c,	// (0x00062022) dt_sta_controll_pane

0xe449,	// (0x0006202f) dt_sta_indi_pane

0xe45a,	// (0x00062040) dt_sta_title_pane

0xece9,	// (0x000628cf) bg_dt_sta_indi_pane_ParamLimits

0xece9,	// (0x000628cf) bg_dt_sta_indi_pane

0xe46d,	// (0x00062053) dt_sta_battery_pane

0xe475,	// (0x0006205b) dt_sta_indi_pane_g1

0xe47e,	// (0x00062064) dt_sta_indi_pane_g2

0xe487,	// (0x0006206d) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x00063a8c) dt_sta_indi_pane_g

0xe490,	// (0x00062076) dt_sta_signal_pane

0xf178,	// (0x00062d5e) bg_dt_sta_title_pane_ParamLimits

0xf178,	// (0x00062d5e) bg_dt_sta_title_pane

0xa185,	// (0x0005dd6b) dt_sta_title_pane_g1

0xe499,	// (0x0006207f) dt_sta_title_pane_t1_ParamLimits

0xe499,	// (0x0006207f) dt_sta_title_pane_t1

0xeb4f,	// (0x00062735) bg_dt_sta_control_pane

0xe4ae,	// (0x00062094) dt_sta_controll_pane_g1

0xe4b7,	// (0x0006209d) bg_dt_sta_title_pane_g1

0xe4c0,	// (0x000620a6) bg_dt_sta_title_pane_g2

0xe4c9,	// (0x000620af) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x00063a93) bg_dt_sta_title_pane_g

0xbade,	// (0x0005f6c4) bg_dt_sta_indi_pane_g1

0xe4d2,	// (0x000620b8) dt_sta_signal_pane_g1

0xe4da,	// (0x000620c0) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x00063a9a) dt_sta_signal_pane_g

0xe4e2,	// (0x000620c8) dt_sta_battery_pane_g1

0xe4eb,	// (0x000620d1) dt_sta_battery_pane_t1

0xbade,	// (0x0005f6c4) bg_dt_sta_control_pane_g1

0x137c,	// (0x00054f62) fep_china_uni_eep_pane

0x1384,	// (0x00054f6a) fep_china_uni_entry_pane_ParamLimits

0x1394,	// (0x00054f7a) popup_fep_china_uni_window_g1_ParamLimits

0x13a4,	// (0x00054f8a) popup_fep_china_uni_window_g2_ParamLimits

0x13a4,	// (0x00054f8a) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000632fe) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000632fe) popup_fep_china_uni_window_g

0xe4fa,	// (0x000620e0) fep_china_uni_eep_pane_g1

0xe502,	// (0x000620e8) fep_china_uni_eep_pane_t1

0xdf9b,	// (0x00061b81) aid_touch_area_size_smil_player

0x8fe2,	// (0x0005cbc8) lc0_clock_pane

0x91c9,	// (0x0005cdaf) status_pane_g5_ParamLimits

0x91c9,	// (0x0005cdaf) status_pane_g5

0x6f51,	// (0x0005ab37) popup_keymap_window

0x9187,	// (0x0005cd6d) status_icon_pane

0xe17d,	// (0x00061d63) cell_ai5_widget_pane_g3_ParamLimits

0xe194,	// (0x00061d7a) cell_ai5_widget_pane_g4_ParamLimits

0xe1a0,	// (0x00061d86) cell_ai5_widget_pane_g5_ParamLimits

0xe1c4,	// (0x00061daa) cell_ai5_widget_pane_g8_ParamLimits

0xe1c4,	// (0x00061daa) cell_ai5_widget_pane_g8

0xe1d8,	// (0x00061dbe) cell_ai5_widget_pane_g9_ParamLimits

0xe1d8,	// (0x00061dbe) cell_ai5_widget_pane_g9

0xe1ec,	// (0x00061dd2) cell_ai5_widget_pane_g10_ParamLimits

0xe1ec,	// (0x00061dd2) cell_ai5_widget_pane_g10

0xe511,	// (0x000620f7) status_icon_pane_g1

0xeb4f,	// (0x00062735) bg_popup_sub_pane_cp13

0xe519,	// (0x000620ff) popup_keymap_window_t1

0x8db5,	// (0x0005c99b) control_pane_g6_ParamLimits

0x8db5,	// (0x0005c99b) control_pane_g6

0x8dc2,	// (0x0005c9a8) control_pane_g7_ParamLimits

0x8dc2,	// (0x0005c9a8) control_pane_g7

0x8dcf,	// (0x0005c9b5) control_pane_g8_ParamLimits

0x8dcf,	// (0x0005c9b5) control_pane_g8

0xe43c,	// (0x00062022) dt_sta_controll_pane_ParamLimits

0xe449,	// (0x0006202f) dt_sta_indi_pane_ParamLimits

0xe45a,	// (0x00062040) dt_sta_title_pane_ParamLimits

0xeebc,	// (0x00062aa2) aid_size_touch_scroll_bar_cale

0x54e4,	// (0x000590ca) popup_discreet_window_ParamLimits

0x54e4,	// (0x000590ca) popup_discreet_window

0x555e,	// (0x00059144) popup_sk_window

0x99c9,	// (0x0005d5af) bg_popup_sub_pane_cp28_ParamLimits

0x99c9,	// (0x0005d5af) bg_popup_sub_pane_cp28

0xe527,	// (0x0006210d) popup_discreet_window_g1_ParamLimits

0xe527,	// (0x0006210d) popup_discreet_window_g1

0xe547,	// (0x0006212d) popup_discreet_window_t1_ParamLimits

0xe547,	// (0x0006212d) popup_discreet_window_t1

0xe565,	// (0x0006214b) popup_discreet_window_t2_ParamLimits

0xe565,	// (0x0006214b) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x00063a9f) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x00063a9f) popup_discreet_window_t

0x86be,	// (0x0005c2a4) popup_sk_window_g1

0x86c8,	// (0x0005c2ae) popup_sk_window_g2

0x0001,

0xfec0,	// (0x00063aa6) popup_sk_window_g

0x86d0,	// (0x0005c2b6) popup_sk_window_t1

0x86de,	// (0x0005c2c4) popup_sk_window_t1_copy1

0xe16d,	// (0x00061d53) cell_ai5_widget_pane_g2_ParamLimits

0xe2c6,	// (0x00061eac) cell_ai5_widget_pane_t9_ParamLimits

0xe2c6,	// (0x00061eac) cell_ai5_widget_pane_t9

0xeb4f,	// (0x00062735) main_fep_fshwr2_pane

0x86ec,	// (0x0005c2d2) aid_fshwr2_btn_pane

0x86f8,	// (0x0005c2de) aid_fshwr2_syb_pane

0x8709,	// (0x0005c2ef) aid_fshwr2_txt_pane

0x8715,	// (0x0005c2fb) fshwr2_func_candi_pane

0x872d,	// (0x0005c313) fshwr2_hwr_syb_pane

0x8744,	// (0x0005c32a) fshwr2_icf_pane

0x540b,	// (0x00058ff1) fshwr2_icf_bg_pane

0x876d,	// (0x0005c353) fshwr2_icf_pane_t1_ParamLimits

0x876d,	// (0x0005c353) fshwr2_icf_pane_t1

0x12f9,	// (0x00054edf) fshwr2_func_candi_pane_g1

0xe5b7,	// (0x0006219d) fshwr2_func_candi_row_pane_ParamLimits

0xe5b7,	// (0x0006219d) fshwr2_func_candi_row_pane

0x8786,	// (0x0005c36c) cell_fshwr2_syb_pane_ParamLimits

0x8786,	// (0x0005c36c) cell_fshwr2_syb_pane

0x7ba8,	// (0x0005b78e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7ba8,	// (0x0005b78e) fshwr2_hwr_syb_pane_g1

0x540b,	// (0x00058ff1) bg_popup_call_pane_cp01

0x879c,	// (0x0005c382) fshwr2_func_candi_cell_pane_ParamLimits

0x879c,	// (0x0005c382) fshwr2_func_candi_cell_pane

0xa025,	// (0x0005dc0b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa025,	// (0x0005dc0b) fshwr2_func_candi_cell_bg_pane

0x87e7,	// (0x0005c3cd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x87e7,	// (0x0005c3cd) fshwr2_func_candi_cell_pane_g1

0x880f,	// (0x0005c3f5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x880f,	// (0x0005c3f5) fshwr2_func_candi_cell_pane_t1

0x540b,	// (0x00058ff1) bg_button_pane_cp08

0xe5c7,	// (0x000621ad) cell_fshwr2_syb_bg_pane

0x8822,	// (0x0005c408) cell_fshwr2_syb_bg_pane_g1

0x882a,	// (0x0005c410) cell_fshwr2_syb_bg_pane_t1

0xf178,	// (0x00062d5e) main_tmo_pane

0xa4be,	// (0x0005e0a4) uni_indicator_pane_g1_ParamLimits

0xa4d1,	// (0x0005e0b7) uni_indicator_pane_g2_ParamLimits

0xa4e3,	// (0x0005e0c9) uni_indicator_pane_g3_ParamLimits

0xa4f2,	// (0x0005e0d8) uni_indicator_pane_g4_ParamLimits

0xa4f2,	// (0x0005e0d8) uni_indicator_pane_g4

0xa506,	// (0x0005e0ec) uni_indicator_pane_g5_ParamLimits

0xa506,	// (0x0005e0ec) uni_indicator_pane_g5

0xa506,	// (0x0005e0ec) uni_indicator_pane_g6_ParamLimits

0xa506,	// (0x0005e0ec) uni_indicator_pane_g6

0xf91c,	// (0x00063502) uni_indicator_pane_g_ParamLimits

0xcfdd,	// (0x00060bc3) popup_tmo_note_window_ParamLimits

0xcfdd,	// (0x00060bc3) popup_tmo_note_window

0x7f3e,	// (0x0005bb24) fshwr2_bg_pane

0x8800,	// (0x0005c3e6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8800,	// (0x0005c3e6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x00063aab) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x00063aab) fshwr2_func_candi_cell_pane_g

0x7b90,	// (0x0005b776) bg_popup_window_pane_cp01

0x8839,	// (0x0005c41f) bg_popup_window_pane_g1_cp01

0xe5cf,	// (0x000621b5) bg_popup_window_pane_cp22_ParamLimits

0xe5cf,	// (0x000621b5) bg_popup_window_pane_cp22

0xe5dd,	// (0x000621c3) listscroll_tmo_link_pane_ParamLimits

0xe5dd,	// (0x000621c3) listscroll_tmo_link_pane

0xe61d,	// (0x00062203) popup_tmo_note_window_g1_ParamLimits

0xe61d,	// (0x00062203) popup_tmo_note_window_g1

0xe62a,	// (0x00062210) tmo_note_info_pane_ParamLimits

0xe62a,	// (0x00062210) tmo_note_info_pane

0xe644,	// (0x0006222a) list_tmo_note_info_pane_g1_ParamLimits

0xe644,	// (0x0006222a) list_tmo_note_info_pane_g1

0xe65b,	// (0x00062241) list_tmo_note_info_pane_g2_ParamLimits

0xe65b,	// (0x00062241) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x00063ab0) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x00063ab0) list_tmo_note_info_pane_g

0xe677,	// (0x0006225d) list_tmo_note_info_text_pane_ParamLimits

0xe677,	// (0x0006225d) list_tmo_note_info_text_pane

0xe6f8,	// (0x000622de) list_tmo_link_pane

0xe705,	// (0x000622eb) scroll_pane_cp20

0xe712,	// (0x000622f8) list_single_tmo_link_pane_ParamLimits

0xe712,	// (0x000622f8) list_single_tmo_link_pane

0xe722,	// (0x00062308) list_single_tmo_link_pane_t1

0xe730,	// (0x00062316) list_tmo_note_info_text_pane_t1_ParamLimits

0xe730,	// (0x00062316) list_tmo_note_info_text_pane_t1

0x6240,	// (0x00059e26) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6240,	// (0x00059e26) aid_size_touch_scroll_bar_cp01

0x614d,	// (0x00059d33) aid_size_touch_slider_marker

0x5546,	// (0x0005912c) popup_settings_window_ParamLimits

0x5546,	// (0x0005912c) popup_settings_window

0x36d2,	// (0x000572b8) popup_candi_list_indi_window

0x8e8c,	// (0x0005ca72) aid_touch_navi_pane_ParamLimits

0x7e99,	// (0x0005ba7f) rs_clock_indi_pane

0x7ea2,	// (0x0005ba88) sctrl_sk_bottom_pane_ParamLimits

0x7eb3,	// (0x0005ba99) sctrl_sk_top_pane_ParamLimits

0x7fb6,	// (0x0005bb9c) popup_fep_tooltip_window

0xe0eb,	// (0x00061cd1) aid_size_cell_widget_grid_ParamLimits

0xe158,	// (0x00061d3e) cell_ai5_widget_pane_g1_ParamLimits

0xe158,	// (0x00061d3e) cell_ai5_widget_pane_g1

0xe1ac,	// (0x00061d92) cell_ai5_widget_pane_g6_ParamLimits

0xe1b8,	// (0x00061d9e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x00063a2e) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x00063a2e) cell_ai5_widget_pane_g

0xe2ea,	// (0x00061ed0) cell_ai5_widget_pane_t10_ParamLimits

0xe2ea,	// (0x00061ed0) cell_ai5_widget_pane_t10

0xe308,	// (0x00061eee) grid_ai5_widget_pane_ParamLimits

0xe3a0,	// (0x00061f86) cell_contacts_ai5_widget_pane_ParamLimits

0xe3a0,	// (0x00061f86) cell_contacts_ai5_widget_pane

0xe57a,	// (0x00062160) popup_discreet_window_t3_ParamLimits

0xe57a,	// (0x00062160) popup_discreet_window_t3

0x8759,	// (0x0005c33f) popup_fshwr2_char_preview_window_ParamLimits

0x8759,	// (0x0005c33f) popup_fshwr2_char_preview_window

0xe695,	// (0x0006227b) tmo_note_info_pane_t1

0xe6aa,	// (0x00062290) tmo_note_info_pane_t2

0xe6bf,	// (0x000622a5) tmo_note_info_pane_t3

0xe6d4,	// (0x000622ba) tmo_note_info_pane_t4

0xe6e6,	// (0x000622cc) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x00063ab5) tmo_note_info_pane_t

0xe6f8,	// (0x000622de) list_tmo_link_pane_ParamLimits

0xe705,	// (0x000622eb) scroll_pane_cp20_ParamLimits

0x540b,	// (0x00058ff1) bg_popup_fep_char_preview_window_cp01

0xe749,	// (0x0006232f) popup_fshwr2_char_preview_window_t1

0xe757,	// (0x0006233d) popup_candi_list_indi_window_g1

0xe760,	// (0x00062346) bg_cell_contacts_ai5_widget_pane

0xe76c,	// (0x00062352) cell_contacts_ai5_widget_pane_g1

0xc1a3,	// (0x0005fd89) cell_contacts_ai5_widget_pane_g2

0xe781,	// (0x00062367) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x00063ac0) cell_contacts_ai5_widget_pane_g

0xe78d,	// (0x00062373) cell_contacts_ai5_widget_pane_t1

0xf178,	// (0x00062d5e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe804,	// (0x000623ea) settings_container_pane

0x8ae4,	// (0x0005c6ca) listscroll_set_pane_copy1

0xb1e7,	// (0x0005edcd) scroll_pane_cp121_copy1

0x9782,	// (0x0005d368) set_content_pane_copy1

0xe810,	// (0x000623f6) aid_height_set_list_copy1_ParamLimits

0xe810,	// (0x000623f6) aid_height_set_list_copy1

0xa6fe,	// (0x0005e2e4) aid_size_parent_copy1_ParamLimits

0xa6fe,	// (0x0005e2e4) aid_size_parent_copy1

0xe81c,	// (0x00062402) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe81c,	// (0x00062402) button_value_adjust_pane_cp6_copy1

0x8e2a,	// (0x0005ca10) list_highlight_pane_cp2_copy1_ParamLimits

0x8e2a,	// (0x0005ca10) list_highlight_pane_cp2_copy1

0xe830,	// (0x00062416) list_set_pane_copy1_ParamLimits

0xe830,	// (0x00062416) list_set_pane_copy1

0xe79f,	// (0x00062385) main_pane_set_t1_copy1_ParamLimits

0xe79f,	// (0x00062385) main_pane_set_t1_copy1

0xe7d9,	// (0x000623bf) main_pane_set_t2_copy1_ParamLimits

0xe7d9,	// (0x000623bf) main_pane_set_t2_copy1

0xe8dd,	// (0x000624c3) main_pane_set_t3_copy1

0xe8eb,	// (0x000624d1) main_pane_set_t4_copy1

0xe7f8,	// (0x000623de) set_content_pane_g1_copy1_ParamLimits

0xe7f8,	// (0x000623de) set_content_pane_g1_copy1

0xe8f9,	// (0x000624df) setting_code_pane_copy1

0xe901,	// (0x000624e7) setting_slider_graphic_pane_copy1

0xe901,	// (0x000624e7) setting_slider_pane_copy1

0xe901,	// (0x000624e7) setting_text_pane_copy1

0xe901,	// (0x000624e7) setting_volume_pane_copy1

0xe8f9,	// (0x000624df) settings_code_pane_cp2_copy1

0xe909,	// (0x000624ef) settings_code_pane_cp_copy1_ParamLimits

0xe909,	// (0x000624ef) settings_code_pane_cp_copy1

0x8842,	// (0x0005c428) volume_set_pane_copy1

0xe91d,	// (0x00062503) volume_set_pane_g10_copy1

0xe925,	// (0x0006250b) volume_set_pane_g1_copy1

0xe92d,	// (0x00062513) volume_set_pane_g2_copy1

0xe935,	// (0x0006251b) volume_set_pane_g3_copy1

0xe93d,	// (0x00062523) volume_set_pane_g4_copy1

0xe945,	// (0x0006252b) volume_set_pane_g5_copy1

0xe94d,	// (0x00062533) volume_set_pane_g6_copy1

0xe955,	// (0x0006253b) volume_set_pane_g7_copy1

0xe95d,	// (0x00062543) volume_set_pane_g8_copy1

0xe965,	// (0x0006254b) volume_set_pane_g9_copy1

0xebb1,	// (0x00062797) bg_set_opt_pane_cp_copy1_ParamLimits

0xebb1,	// (0x00062797) bg_set_opt_pane_cp_copy1

0x884a,	// (0x0005c430) setting_slider_pane_t1_copy1_ParamLimits

0x884a,	// (0x0005c430) setting_slider_pane_t1_copy1

0x8868,	// (0x0005c44e) setting_slider_pane_t2_copy1_ParamLimits

0x8868,	// (0x0005c44e) setting_slider_pane_t2_copy1

0x8882,	// (0x0005c468) setting_slider_pane_t3_copy1_ParamLimits

0x8882,	// (0x0005c468) setting_slider_pane_t3_copy1

0x889a,	// (0x0005c480) slider_set_pane_copy1_ParamLimits

0x889a,	// (0x0005c480) slider_set_pane_copy1

0xf1c4,	// (0x00062daa) set_opt_bg_pane_g1_copy2

0xf1cc,	// (0x00062db2) set_opt_bg_pane_g2_copy2

0xe96d,	// (0x00062553) set_opt_bg_pane_g3_copy2

0xf1dc,	// (0x00062dc2) set_opt_bg_pane_g4_copy2

0xf1e4,	// (0x00062dca) set_opt_bg_pane_g5_copy2

0xf1ec,	// (0x00062dd2) set_opt_bg_pane_g6_copy2

0xe977,	// (0x0006255d) set_opt_bg_pane_g7_copy2

0xe97f,	// (0x00062565) set_opt_bg_pane_g8_copy2

0xe989,	// (0x0006256f) set_opt_bg_pane_g9_copy2

0x88b0,	// (0x0005c496) aid_size_touch_slider_mark_copy1_ParamLimits

0x88b0,	// (0x0005c496) aid_size_touch_slider_mark_copy1

0xe993,	// (0x00062579) slider_set_pane_g1_copy1

0x88c4,	// (0x0005c4aa) slider_set_pane_g2_copy1

0x76cf,	// (0x0005b2b5) slider_set_pane_g3_copy1_ParamLimits

0x76cf,	// (0x0005b2b5) slider_set_pane_g3_copy1

0x76e3,	// (0x0005b2c9) slider_set_pane_g4_copy1_ParamLimits

0x76e3,	// (0x0005b2c9) slider_set_pane_g4_copy1

0x76fb,	// (0x0005b2e1) slider_set_pane_g5_copy1_ParamLimits

0x76fb,	// (0x0005b2e1) slider_set_pane_g5_copy1

0x76cf,	// (0x0005b2b5) slider_set_pane_g6_copy1_ParamLimits

0x76cf,	// (0x0005b2b5) slider_set_pane_g6_copy1

0x88cc,	// (0x0005c4b2) slider_set_pane_g7_copy1_ParamLimits

0x88cc,	// (0x0005c4b2) slider_set_pane_g7_copy1

0xeb63,	// (0x00062749) bg_set_opt_pane_cp2_copy1

0xe99c,	// (0x00062582) setting_slider_graphic_pane_g1_copy1

0xe9a5,	// (0x0006258b) setting_slider_graphic_pane_t1_copy1

0xe9b5,	// (0x0006259b) setting_slider_graphic_pane_t2_copy1

0xe9c5,	// (0x000625ab) slider_set_pane_cp_copy1

0xe9d5,	// (0x000625bb) input_focus_pane_cp1_copy1

0xe9de,	// (0x000625c4) list_set_text_pane_copy1

0xe9e6,	// (0x000625cc) setting_text_pane_g1_copy1

0x4648,	// (0x0005822e) set_text_pane_t1_copy1

0xe9d5,	// (0x000625bb) input_focus_pane_cp2_copy1

0xe9e6,	// (0x000625cc) setting_code_pane_g1_copy1

0xe9ef,	// (0x000625d5) setting_code_pane_t1_copy1

0xe9fd,	// (0x000625e3) list_set_graphic_pane_copy1

0xeb63,	// (0x00062749) bg_set_opt_pane_cp4_copy1

0x365b,	// (0x00057241) list_set_graphic_pane_g1_copy1_ParamLimits

0x365b,	// (0x00057241) list_set_graphic_pane_g1_copy1

0xea11,	// (0x000625f7) list_set_graphic_pane_g2_copy1

0x3673,	// (0x00057259) list_set_graphic_pane_t1_copy1_ParamLimits

0x3673,	// (0x00057259) list_set_graphic_pane_t1_copy1

0xbade,	// (0x0005f6c4) rs_clock_indi_pane_g1

0xea19,	// (0x000625ff) rs_clock_indi_pane_t1

0xea27,	// (0x0006260d) rs_indi_pane

0xea2f,	// (0x00062615) rs_indi_pane_g1

0xea38,	// (0x0006261e) rs_indi_pane_g2

0xe757,	// (0x0006233d) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x00063ac7) rs_indi_pane_g

0x8ae4,	// (0x0005c6ca) bg_popup_preview_window_pane_cp03

0xea41,	// (0x00062627) popup_fep_tooltip_window_t1

0xc76d,	// (0x00060353) popup_note2_window_g2_ParamLimits

0xc76d,	// (0x00060353) popup_note2_window_g2

0x0001,

0xfc81,	// (0x00063867) popup_note2_window_g_ParamLimits

0xfc81,	// (0x00063867) popup_note2_window_g

0xcc7b,	// (0x00060861) bg_popup_sub_pane_cp11_ParamLimits

0xcc88,	// (0x0006086e) cell_ai3_links_pane_g1_ParamLimits

0xcc9f,	// (0x00060885) cell_ai3_links_pane_t1

0x4648,	// (0x0005822e) set_text_pane_t1_copy1_ParamLimits

0x6b65,	// (0x0005a74b) cell_graphic_popup_pane_cp2_ParamLimits

0x6b65,	// (0x0005a74b) cell_graphic_popup_pane_cp2

0xea4f,	// (0x00062635) cell_graphic_popup_pane_g1_cp2

0xee3f,	// (0x00062a25) cell_graphic_popup_pane_g2_cp2

0xea57,	// (0x0006263d) cell_graphic_popup_pane_g3_cp2

0xea5f,	// (0x00062645) cell_graphic_popup_pane_t2_cp2

0xee50,	// (0x00062a36) grid_highlight_pane_cp3_cp2

0xf41c,	// (0x00063002) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf178,	// (0x00062d5e) main_tmo_pane_ParamLimits

0xcfd1,	// (0x00060bb7) popup_tmo_big_image_note_window

0xe147,	// (0x00061d2d) cell_ai5_widget_list_pane

0xe14f,	// (0x00061d35) cell_ai5_widget_lrg_icon_pane

0xe695,	// (0x0006227b) tmo_note_info_pane_t1_ParamLimits

0xe6aa,	// (0x00062290) tmo_note_info_pane_t2_ParamLimits

0xe6bf,	// (0x000622a5) tmo_note_info_pane_t3_ParamLimits

0xe6d4,	// (0x000622ba) tmo_note_info_pane_t4_ParamLimits

0xe6e6,	// (0x000622cc) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x00063ab5) tmo_note_info_pane_t_ParamLimits

0xe804,	// (0x000623ea) settings_container_pane_ParamLimits

0xe9cd,	// (0x000625b3) indicator_popup_pane_cp5

0xe9cd,	// (0x000625b3) indicator_popup_pane_cp6

0xe9fd,	// (0x000625e3) list_set_graphic_pane_copy1_ParamLimits

0xeb4f,	// (0x00062735) bg_popup_window_pane_cp23

0xea6d,	// (0x00062653) popup_tmo_big_image_note_window_g1

0xea76,	// (0x0006265c) popup_tmo_big_image_note_window_t1

0xea86,	// (0x0006266c) popup_tmo_big_image_note_window_t2

0xea96,	// (0x0006267c) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x00063ace) popup_tmo_big_image_note_window_t

0xbade,	// (0x0005f6c4) cell_ai5_widget_lrg_icon_pane_g1

0xeaa6,	// (0x0006268c) cell_ai5_widget_lrg_icon_pane_t1

0xeab4,	// (0x0006269a) cell_ai5_widget_list_row_pane_ParamLimits

0xeab4,	// (0x0006269a) cell_ai5_widget_list_row_pane

0xeacb,	// (0x000626b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeacb,	// (0x000626b1) cell_ai5_widget_list_row_pane_g1

0xead8,	// (0x000626be) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xead8,	// (0x000626be) cell_ai5_widget_list_row_pane_t1

0xeb03,	// (0x000626e9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeb03,	// (0x000626e9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeef,	// (0x00063ad5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x00063ad5) cell_ai5_widget_list_row_pane_t

0x540b,	// (0x00058ff1) main_fep_vtchi_ss_pane

0xef57,	// (0x00062b3d) popup_fep_char_pre_window

0xef5f,	// (0x00062b45) popup_fep_ituss_window

0xef80,	// (0x00062b66) popup_fep_vkbss_window

0xefaa,	// (0x00062b90) grid_vkbss_keypad_pane_ParamLimits

0xefaa,	// (0x00062b90) grid_vkbss_keypad_pane

0xefb6,	// (0x00062b9c) ituss_keypad_pane

0x88ee,	// (0x0005c4d4) aid_vkbss_key_offset_ParamLimits

0x88ee,	// (0x0005c4d4) aid_vkbss_key_offset

0x88fa,	// (0x0005c4e0) cell_vkbss_key_pane_ParamLimits

0x88fa,	// (0x0005c4e0) cell_vkbss_key_pane

0x91a3,	// (0x0005cd89) bg_cell_vkbss_key_g1_ParamLimits

0x91a3,	// (0x0005cd89) bg_cell_vkbss_key_g1

0xefc5,	// (0x00062bab) cell_vkbss_key_3p_pane_ParamLimits

0xefc5,	// (0x00062bab) cell_vkbss_key_3p_pane

0xefd9,	// (0x00062bbf) cell_vkbss_key_g1_ParamLimits

0xefd9,	// (0x00062bbf) cell_vkbss_key_g1

0xefed,	// (0x00062bd3) cell_vkbss_key_t1_ParamLimits

0xefed,	// (0x00062bd3) cell_vkbss_key_t1

0x8910,	// (0x0005c4f6) cell_ituss_key_pane_ParamLimits

0x8910,	// (0x0005c4f6) cell_ituss_key_pane

0xf018,	// (0x00062bfe) bg_cell_ituss_key_g1_ParamLimits

0xf018,	// (0x00062bfe) bg_cell_ituss_key_g1

0xf024,	// (0x00062c0a) cell_ituss_key_pane_g1_ParamLimits

0xf024,	// (0x00062c0a) cell_ituss_key_pane_g1

0x8921,	// (0x0005c507) cell_ituss_key_pane_g2_ParamLimits

0x8921,	// (0x0005c507) cell_ituss_key_pane_g2

0x0002,

0xfef6,	// (0x00063adc) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x00063adc) cell_ituss_key_pane_g

0x894d,	// (0x0005c533) cell_ituss_key_t1_ParamLimits

0x894d,	// (0x0005c533) cell_ituss_key_t1

0x8987,	// (0x0005c56d) cell_ituss_key_t2_ParamLimits

0x8987,	// (0x0005c56d) cell_ituss_key_t2

0x89b8,	// (0x0005c59e) cell_ituss_key_t3_ParamLimits

0x89b8,	// (0x0005c59e) cell_ituss_key_t3

0x8987,	// (0x0005c56d) cell_ituss_key_t4_ParamLimits

0x8987,	// (0x0005c56d) cell_ituss_key_t4

0x0004,

0xfefd,	// (0x00063ae3) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x00063ae3) cell_ituss_key_t

0xf04a,	// (0x00062c30) cell_vkbss_key_3p_pane_g1

0xf052,	// (0x00062c38) cell_vkbss_key_3p_pane_g2

0xf05a,	// (0x00062c40) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x00063aee) cell_vkbss_key_3p_pane_g

0x540b,	// (0x00058ff1) bg_popup_fep_char_preview_window_cp02

0x89fb,	// (0x0005c5e1) popup_fep_char_pre_window_t1

0xe0e1,	// (0x00061cc7) main_ai5_sk_pane

0xe760,	// (0x00062346) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe76c,	// (0x00062352) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc1a3,	// (0x0005fd89) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe781,	// (0x00062367) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x00063ac0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe78d,	// (0x00062373) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf178,	// (0x00062d5e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf062,	// (0x00062c48) main_ai5_sk_pane_g1

0x980a,	// (0x0005d3f0) popup_query_code_window_g1

0xef75,	// (0x00062b5b) popup_fep_vkb_icf_pane

0xef94,	// (0x00062b7a) popup_fep_vtchi_icf_pane

0xf06b,	// (0x00062c51) bg_icf_pane

0xf077,	// (0x00062c5d) list_vkb_icf_pane

0xf086,	// (0x00062c6c) bg_icf_pane_cp01

0xf099,	// (0x00062c7f) vtchi_icf_list_pane

0xf0a9,	// (0x00062c8f) list_vkb_icf_pane_t1_ParamLimits

0xf0a9,	// (0x00062c8f) list_vkb_icf_pane_t1

0xf0c0,	// (0x00062ca6) vtchi_icf_list_pane_t1_ParamLimits

0xf0c0,	// (0x00062ca6) vtchi_icf_list_pane_t1

0xef5f,	// (0x00062b45) popup_fep_ituss_window_ParamLimits

0xef94,	// (0x00062b7a) popup_fep_vtchi_icf_pane_ParamLimits

0xefb6,	// (0x00062b9c) ituss_keypad_pane_ParamLimits

0x88e2,	// (0x0005c4c8) ituss_sks_pane

0xf06b,	// (0x00062c51) bg_icf_pane_ParamLimits

0xeb2b,	// (0x00062711) icf_edit_indi_pane_ParamLimits

0xeb2b,	// (0x00062711) icf_edit_indi_pane

0xf077,	// (0x00062c5d) list_vkb_icf_pane_ParamLimits

0xf086,	// (0x00062c6c) bg_icf_pane_cp01_ParamLimits

0xeb3a,	// (0x00062720) icf_edit_indi_pane_cp01_ParamLimits

0xeb3a,	// (0x00062720) icf_edit_indi_pane_cp01

0xf0a1,	// (0x00062c87) vtchi_query_pane

0xbd4e,	// (0x0005f934) icf_edit_indi_pane_g1_ParamLimits

0xbd4e,	// (0x0005f934) icf_edit_indi_pane_g1

0xf135,	// (0x00062d1b) icf_edit_indi_pane_g2_ParamLimits

0xf135,	// (0x00062d1b) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x00063b06) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x00063b06) icf_edit_indi_pane_g

0xf144,	// (0x00062d2a) icf_edit_indi_pane_t1

0xf0de,	// (0x00062cc4) bg_input_focus_pane_cp042

0xeeb3,	// (0x00062a99) vtchi_button_pane

0xf0e7,	// (0x00062ccd) vtchi_query_pane_t1

0xf0f5,	// (0x00062cdb) vtchi_query_pane_t2

0xf103,	// (0x00062ce9) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x00063af5) vtchi_query_pane_t

0x540b,	// (0x00058ff1) bg_button_pane_cp13

0xf111,	// (0x00062cf7) vtchi_button_pane_g1

0x8a0a,	// (0x0005c5f0) ituss_sks_pane_g1

0x8a15,	// (0x0005c5fb) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x00063afc) ituss_sks_pane_g

0xf119,	// (0x00062cff) ituss_sks_pane_t1

0xf127,	// (0x00062d0d) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x00063b01) ituss_sks_pane_t

0xb561,	// (0x0005f147) indicator_nsta_pane_cp_g1

0xb569,	// (0x0005f14f) indicator_nsta_pane_cp_g2

0xb571,	// (0x0005f157) indicator_nsta_pane_cp_g3

0xb561,	// (0x0005f147) indicator_nsta_pane_cp_g4

0xb569,	// (0x0005f14f) indicator_nsta_pane_cp_g5

0xb571,	// (0x0005f157) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x000636a5) indicator_nsta_pane_cp_g

0xdcc2,	// (0x000618a8) cell_graphic2_pane_t2_ParamLimits

0xdcc2,	// (0x000618a8) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x000639b7) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x000639b7) cell_graphic2_pane_t

0xdcef,	// (0x000618d5) cell_graphic2_control_pane_t1

0x66e8,	// (0x0005a2ce) signal_pane_g3_ParamLimits

0x66e8,	// (0x0005a2ce) signal_pane_g3

0x66fa,	// (0x0005a2e0) signal_pane_g4_ParamLimits

0x66fa,	// (0x0005a2e0) signal_pane_g4

0xeb15,	// (0x000626fb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeb15,	// (0x000626fb) cell_ai5_widget_list_row_pane_t3

0xf038,	// (0x00062c1e) cell_ituss_key_pane_t1_ParamLimits

0xf038,	// (0x00062c1e) cell_ituss_key_pane_t1

0x9451,	// (0x0005d037) form_field_data_wide_pane_vc_t2_ParamLimits

0x9451,	// (0x0005d037) form_field_data_wide_pane_vc_t2

0x9465,	// (0x0005d04b) form_field_data_wide_pane_vc_t3_ParamLimits

0x9465,	// (0x0005d04b) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x000633ea) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x000633ea) form_field_data_wide_pane_vc_t

0xb229,	// (0x0005ee0f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb229,	// (0x0005ee0f) form_field_slider_wide_pane_vc_t3

0xb307,	// (0x0005eeed) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb307,	// (0x0005eeed) form_field_popup_wide_pane_vc_t2

0xb31e,	// (0x0005ef04) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb31e,	// (0x0005ef04) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00063694) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00063694) form_field_popup_wide_pane_vc_t

0x86ec,	// (0x0005c2d2) aid_fshwr2_btn_pane_ParamLimits

0x86f8,	// (0x0005c2de) aid_fshwr2_syb_pane_ParamLimits

0x8709,	// (0x0005c2ef) aid_fshwr2_txt_pane_ParamLimits

0x7f3e,	// (0x0005bb24) fshwr2_bg_pane_ParamLimits

0x8715,	// (0x0005c2fb) fshwr2_func_candi_pane_ParamLimits

0x872d,	// (0x0005c313) fshwr2_hwr_syb_pane_ParamLimits

0x8744,	// (0x0005c32a) fshwr2_icf_pane_ParamLimits

0xa9a6,	// (0x0005e58c) list_double_graphic_pane_vc_g4_ParamLimits

0xa9a6,	// (0x0005e58c) list_double_graphic_pane_vc_g4

0x8941,	// (0x0005c527) cell_ituss_key_pane_g3_ParamLimits

0x8941,	// (0x0005c527) cell_ituss_key_pane_g3

0x89e9,	// (0x0005c5cf) cell_ituss_key_t5_ParamLimits

0x89e9,	// (0x0005c5cf) cell_ituss_key_t5

0xef80,	// (0x00062b66) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000b1d3 };

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
0x00a8,	// (0x0000b27b) Screen

0x00b4,	// (0x0000b287) application_window_ParamLimits

0x00b4,	// (0x0000b287) application_window

0x5ca1,	// (0x00010e74) screen_g1

0xde47,	// (0x0001901a) area_bottom_pane_ParamLimits

0xde47,	// (0x0001901a) area_bottom_pane

0x4144,	// (0x0000f317) area_top_pane_ParamLimits

0x4144,	// (0x0000f317) area_top_pane

0x41e2,	// (0x0000f3b5) main_pane_ParamLimits

0x41e2,	// (0x0000f3b5) main_pane

0x5cab,	// (0x00010e7e) misc_graphics

0x16c0,	// (0x0000c893) battery_pane_ParamLimits

0x16c0,	// (0x0000c893) battery_pane

0x911f,	// (0x000142f2) bg_status_flat_pane_g8

0x9127,	// (0x000142fa) bg_status_flat_pane_g9

0x841c,	// (0x000135ef) context_pane_ParamLimits

0x841c,	// (0x000135ef) context_pane

0x182b,	// (0x0000c9fe) navi_pane_ParamLimits

0x182b,	// (0x0000c9fe) navi_pane

0x18a2,	// (0x0000ca75) signal_pane_ParamLimits

0x18a2,	// (0x0000ca75) signal_pane

0x0008,

0xf880,	// (0x0001aa53) bg_status_flat_pane_g

0x1932,	// (0x0000cb05) status_pane_g1_ParamLimits

0x1932,	// (0x0000cb05) status_pane_g1

0x1948,	// (0x0000cb1b) status_pane_g2_ParamLimits

0x1948,	// (0x0000cb1b) status_pane_g2

0x863c,	// (0x0001380f) status_pane_g3_ParamLimits

0x863c,	// (0x0001380f) status_pane_g3

0x0004,

0xf7b3,	// (0x0001a986) status_pane_g_ParamLimits

0xf7b3,	// (0x0001a986) status_pane_g

0x1954,	// (0x0000cb27) title_pane_ParamLimits

0x1954,	// (0x0000cb27) title_pane

0x19b5,	// (0x0000cb88) uni_indicator_pane_ParamLimits

0x19b5,	// (0x0000cb88) uni_indicator_pane

0x7cd3,	// (0x00012ea6) bg_list_pane_ParamLimits

0x7cd3,	// (0x00012ea6) bg_list_pane

0x0f92,	// (0x0000c165) find_pane

0x0f9a,	// (0x0000c16d) listscroll_app_pane_ParamLimits

0x0f9a,	// (0x0000c16d) listscroll_app_pane

0x7d07,	// (0x00012eda) listscroll_form_pane

0x0fa6,	// (0x0000c179) listscroll_gen_pane_ParamLimits

0x0fa6,	// (0x0000c179) listscroll_gen_pane

0x7d07,	// (0x00012eda) listscroll_set_pane

0x9cd3,	// (0x00014ea6) main_idle_act_pane

0x79af,	// (0x00012b82) main_idle_trad_pane

0x79af,	// (0x00012b82) main_list_empty_pane

0x7d35,	// (0x00012f08) main_midp_pane

0x7d41,	// (0x00012f14) main_pane_g1_ParamLimits

0x7d41,	// (0x00012f14) main_pane_g1

0x0fba,	// (0x0000c18d) popup_ai_message_window_ParamLimits

0x0fba,	// (0x0000c18d) popup_ai_message_window

0x104b,	// (0x0000c21e) popup_fep_china_uni_window_ParamLimits

0x104b,	// (0x0000c21e) popup_fep_china_uni_window

0x7e53,	// (0x00013026) popup_fep_japan_candidate_window_ParamLimits

0x7e53,	// (0x00013026) popup_fep_japan_candidate_window

0x7e71,	// (0x00013044) popup_fep_japan_predictive_window_ParamLimits

0x7e71,	// (0x00013044) popup_fep_japan_predictive_window

0x10a5,	// (0x0000c278) popup_find_window

0x10c2,	// (0x0000c295) popup_grid_graphic_window_ParamLimits

0x10c2,	// (0x0000c295) popup_grid_graphic_window

0x7ed4,	// (0x000130a7) popup_large_graphic_colour_window

0x1154,	// (0x0000c327) popup_menu_window_ParamLimits

0x1154,	// (0x0000c327) popup_menu_window

0x1320,	// (0x0000c4f3) popup_note_image_window

0x12e6,	// (0x0000c4b9) popup_note_wait_window_ParamLimits

0x12e6,	// (0x0000c4b9) popup_note_wait_window

0x1338,	// (0x0000c50b) popup_note_window_ParamLimits

0x1338,	// (0x0000c50b) popup_note_window

0x13de,	// (0x0000c5b1) popup_query_code_window_ParamLimits

0x13de,	// (0x0000c5b1) popup_query_code_window

0x811e,	// (0x000132f1) popup_query_data_code_window_ParamLimits

0x811e,	// (0x000132f1) popup_query_data_code_window

0x1418,	// (0x0000c5eb) popup_query_data_window_ParamLimits

0x1418,	// (0x0000c5eb) popup_query_data_window

0x148e,	// (0x0000c661) popup_query_sat_info_window_ParamLimits

0x148e,	// (0x0000c661) popup_query_sat_info_window

0x1525,	// (0x0000c6f8) popup_snote_single_graphic_window_ParamLimits

0x1525,	// (0x0000c6f8) popup_snote_single_graphic_window

0x1525,	// (0x0000c6f8) popup_snote_single_text_window_ParamLimits

0x1525,	// (0x0000c6f8) popup_snote_single_text_window

0x819b,	// (0x0001336e) popup_sub_window_general

0x82c9,	// (0x0001349c) popup_window_general_ParamLimits

0x82c9,	// (0x0001349c) popup_window_general

0x82de,	// (0x000134b1) power_save_pane

0xdfc9,	// (0x0001919c) control_pane_g1_ParamLimits

0xdfc9,	// (0x0001919c) control_pane_g1

0xdff2,	// (0x000191c5) control_pane_g2_ParamLimits

0xdff2,	// (0x000191c5) control_pane_g2

0x7c74,	// (0x00012e47) control_pane_g3_ParamLimits

0x7c74,	// (0x00012e47) control_pane_g3

0x0007,

0xf79b,	// (0x0001a96e) control_pane_g_ParamLimits

0xf79b,	// (0x0001a96e) control_pane_g

0xe02d,	// (0x00019200) control_pane_t1_ParamLimits

0xe02d,	// (0x00019200) control_pane_t1

0xe08b,	// (0x0001925e) control_pane_t2_ParamLimits

0xe08b,	// (0x0001925e) control_pane_t2

0x0002,

0xf7ac,	// (0x0001a97f) control_pane_t_ParamLimits

0xf7ac,	// (0x0001a97f) control_pane_t

0x7b95,	// (0x00012d68) navi_navi_volume_pane_cp1

0x7b9e,	// (0x00012d71) status_small_icon_pane

0x7ba6,	// (0x00012d79) status_small_pane_g1_ParamLimits

0x7ba6,	// (0x00012d79) status_small_pane_g1

0x7bda,	// (0x00012dad) status_small_pane_g2_ParamLimits

0x7bda,	// (0x00012dad) status_small_pane_g2

0x7be6,	// (0x00012db9) status_small_pane_g3_ParamLimits

0x7be6,	// (0x00012db9) status_small_pane_g3

0x7bf2,	// (0x00012dc5) status_small_pane_g4_ParamLimits

0x7bf2,	// (0x00012dc5) status_small_pane_g4

0x7bfe,	// (0x00012dd1) status_small_pane_g5_ParamLimits

0x7bfe,	// (0x00012dd1) status_small_pane_g5

0x7c0d,	// (0x00012de0) status_small_pane_g6_ParamLimits

0x7c0d,	// (0x00012de0) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001a95d) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001a95d) status_small_pane_g

0x7c3d,	// (0x00012e10) status_small_pane_t1

0x7c60,	// (0x00012e33) status_small_wait_pane_ParamLimits

0x7c60,	// (0x00012e33) status_small_wait_pane

0x0c15,	// (0x0000bde8) aid_levels_signal_ParamLimits

0x0c15,	// (0x0000bde8) aid_levels_signal

0x0c2d,	// (0x0000be00) signal_pane_g1_ParamLimits

0x0c2d,	// (0x0000be00) signal_pane_g1

0x0c48,	// (0x0000be1b) signal_pane_g2_ParamLimits

0x0c48,	// (0x0000be1b) signal_pane_g2

0x0001,

0xf71f,	// (0x0001a8f2) signal_pane_g_ParamLimits

0xf71f,	// (0x0001a8f2) signal_pane_g

0x73fa,	// (0x000125cd) context_pane_g1

0x0265,	// (0x0000b438) title_pane_g1

0x029a,	// (0x0000b46d) title_pane_t1

0x5d53,	// (0x00010f26) title_pane_t2

0x5d79,	// (0x00010f4c) title_pane_t3

0x0002,

0xf573,	// (0x0001a746) title_pane_t

0x19dd,	// (0x0000cbb0) aid_levels_battery_ParamLimits

0x19dd,	// (0x0000cbb0) aid_levels_battery

0x19f9,	// (0x0000cbcc) battery_pane_g1_ParamLimits

0x19f9,	// (0x0000cbcc) battery_pane_g1

0x1a16,	// (0x0000cbe9) battery_pane_g2_ParamLimits

0x1a16,	// (0x0000cbe9) battery_pane_g2

0x0001,

0xf7be,	// (0x0001a991) battery_pane_g_ParamLimits

0xf7be,	// (0x0001a991) battery_pane_g

0x1e36,	// (0x0000d009) uni_indicator_pane_g1

0x1e4b,	// (0x0000d01e) uni_indicator_pane_g2

0x1e60,	// (0x0000d033) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0001aafb) uni_indicator_pane_g

0x781f,	// (0x000129f2) navi_icon_pane_ParamLimits

0x781f,	// (0x000129f2) navi_icon_pane

0x7766,	// (0x00012939) navi_midp_pane

0x783b,	// (0x00012a0e) navi_navi_pane

0x7845,	// (0x00012a18) navi_text_pane_ParamLimits

0x7845,	// (0x00012a18) navi_text_pane

0x5ca1,	// (0x00010e74) status_small_wait_pane_g1

0x61b6,	// (0x00011389) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0001aaf6) status_small_wait_pane_g

0x1dd5,	// (0x0000cfa8) navi_navi_icon_text_pane

0x1def,	// (0x0000cfc2) navi_navi_pane_g1_ParamLimits

0x1def,	// (0x0000cfc2) navi_navi_pane_g1

0x1ddd,	// (0x0000cfb0) navi_navi_pane_g2_ParamLimits

0x1ddd,	// (0x0000cfb0) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0001aac4) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0001aac4) navi_navi_pane_g

0x979e,	// (0x00014971) navi_navi_tabs_pane

0x1e01,	// (0x0000cfd4) navi_navi_text_pane

0x1dd5,	// (0x0000cfa8) navi_navi_volume_pane

0x1dc3,	// (0x0000cf96) navi_text_pane_t1

0x1db7,	// (0x0000cf8a) navi_icon_pane_g1

0x968f,	// (0x00014862) navi_navi_text_pane_t1

0xe2d8,	// (0x000194ab) navi_navi_volume_pane_g1

0xe2e0,	// (0x000194b3) volume_small_pane

0x1d02,	// (0x0000ced5) navi_navi_icon_text_pane_g1

0x1d0a,	// (0x0000cedd) navi_navi_icon_text_pane_t1

0x783b,	// (0x00012a0e) navi_tabs_2_long_pane

0x783b,	// (0x00012a0e) navi_tabs_2_pane

0x783b,	// (0x00012a0e) navi_tabs_3_long_pane

0x783b,	// (0x00012a0e) navi_tabs_3_pane

0x783b,	// (0x00012a0e) navi_tabs_4_pane

0xe2b8,	// (0x0001948b) tabs_2_active_pane_ParamLimits

0xe2b8,	// (0x0001948b) tabs_2_active_pane

0xe2c8,	// (0x0001949b) tabs_2_passive_pane_ParamLimits

0xe2c8,	// (0x0001949b) tabs_2_passive_pane

0xe286,	// (0x00019459) tabs_3_active_pane_ParamLimits

0xe286,	// (0x00019459) tabs_3_active_pane

0xe296,	// (0x00019469) tabs_3_passive_pane_ParamLimits

0xe296,	// (0x00019469) tabs_3_passive_pane

0xe2a7,	// (0x0001947a) tabs_3_passive_pane_cp_ParamLimits

0xe2a7,	// (0x0001947a) tabs_3_passive_pane_cp

0xe242,	// (0x00019415) tabs_4_active_pane_ParamLimits

0xe242,	// (0x00019415) tabs_4_active_pane

0xe253,	// (0x00019426) tabs_4_passive_pane_ParamLimits

0xe253,	// (0x00019426) tabs_4_passive_pane

0xe264,	// (0x00019437) tabs_4_passive_pane_cp_ParamLimits

0xe264,	// (0x00019437) tabs_4_passive_pane_cp

0xe275,	// (0x00019448) tabs_4_passive_pane_cp2_ParamLimits

0xe275,	// (0x00019448) tabs_4_passive_pane_cp2

0xe222,	// (0x000193f5) tabs_2_long_active_pane_ParamLimits

0xe222,	// (0x000193f5) tabs_2_long_active_pane

0xe232,	// (0x00019405) tabs_2_long_passive_pane_ParamLimits

0xe232,	// (0x00019405) tabs_2_long_passive_pane

0xe1ed,	// (0x000193c0) tabs_3_long_active_pane_ParamLimits

0xe1ed,	// (0x000193c0) tabs_3_long_active_pane

0xe1fe,	// (0x000193d1) tabs_3_long_passive_pane_ParamLimits

0xe1fe,	// (0x000193d1) tabs_3_long_passive_pane

0xe211,	// (0x000193e4) tabs_3_long_passive_pane_cp_ParamLimits

0xe211,	// (0x000193e4) tabs_3_long_passive_pane_cp

0x4c1b,	// (0x0000fdee) volume_small_pane_g1

0xe19c,	// (0x0001936f) volume_small_pane_g2

0xe1a5,	// (0x00019378) volume_small_pane_g3

0xe1ae,	// (0x00019381) volume_small_pane_g4

0xe1b7,	// (0x0001938a) volume_small_pane_g5

0xe1c0,	// (0x00019393) volume_small_pane_g6

0xe1c9,	// (0x0001939c) volume_small_pane_g7

0xe1d2,	// (0x000193a5) volume_small_pane_g8

0xe1db,	// (0x000193ae) volume_small_pane_g9

0xe1e4,	// (0x000193b7) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0001aa90) volume_small_pane_g

0x6020,	// (0x000111f3) bg_active_tab_pane_cp2_ParamLimits

0x6020,	// (0x000111f3) bg_active_tab_pane_cp2

0x0326,	// (0x0000b4f9) tabs_3_active_pane_g1

0x032e,	// (0x0000b501) tabs_3_active_pane_t1

0x6020,	// (0x000111f3) bg_passive_tab_pane_cp2_ParamLimits

0x6020,	// (0x000111f3) bg_passive_tab_pane_cp2

0x0326,	// (0x0000b4f9) tabs_3_passive_pane_g1

0x032e,	// (0x0000b501) tabs_3_passive_pane_t1

0x6020,	// (0x000111f3) bg_active_tab_pane_cp3_ParamLimits

0x6020,	// (0x000111f3) bg_active_tab_pane_cp3

0x0340,	// (0x0000b513) tabs_4_active_pane_g1

0x0348,	// (0x0000b51b) tabs_4_active_pane_t1

0x6020,	// (0x000111f3) bg_passive_tab_pane_cp3_ParamLimits

0x6020,	// (0x000111f3) bg_passive_tab_pane_cp3

0x0340,	// (0x0000b513) tabs_4_1_passive_pane_g1

0x0348,	// (0x0000b51b) tabs_4_1_passive_pane_t1

0x7d35,	// (0x00012f08) list_highlight_pane_cp2

0x1eff,	// (0x0000d0d2) list_set_pane_ParamLimits

0x1eff,	// (0x0000d0d2) list_set_pane

0x1f99,	// (0x0000d16c) main_pane_set_t1_ParamLimits

0x1f99,	// (0x0000d16c) main_pane_set_t1

0x1fb9,	// (0x0000d18c) main_pane_set_t2_ParamLimits

0x1fb9,	// (0x0000d18c) main_pane_set_t2

0x1fcd,	// (0x0000d1a0) main_pane_set_t3_ParamLimits

0x1fcd,	// (0x0000d1a0) main_pane_set_t3

0x1fdf,	// (0x0000d1b2) main_pane_set_t4_ParamLimits

0x1fdf,	// (0x0000d1b2) main_pane_set_t4

0x0003,

0xf98d,	// (0x0001ab60) main_pane_set_t_ParamLimits

0xf98d,	// (0x0001ab60) main_pane_set_t

0x1ff1,	// (0x0000d1c4) setting_code_pane

0x1ff9,	// (0x0000d1cc) setting_slider_graphic_pane

0x1ff9,	// (0x0000d1cc) setting_slider_pane

0x1ff9,	// (0x0000d1cc) setting_text_pane

0x1ff9,	// (0x0000d1cc) setting_volume_pane

0x4413,	// (0x0000f5e6) volume_set_pane

0x5d8b,	// (0x00010f5e) bg_set_opt_pane_cp

0x441b,	// (0x0000f5ee) setting_slider_pane_t1

0x4434,	// (0x0000f607) setting_slider_pane_t2

0x444d,	// (0x0000f620) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001a74d) setting_slider_pane_t

0x4464,	// (0x0000f637) slider_set_pane

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp2

0x5dcd,	// (0x00010fa0) setting_slider_graphic_pane_g1

0x447a,	// (0x0000f64d) setting_slider_graphic_pane_t1

0x4489,	// (0x0000f65c) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001a754) setting_slider_graphic_pane_t

0x4498,	// (0x0000f66b) slider_set_pane_cp

0x5cab,	// (0x00010e7e) input_focus_pane_cp1

0x9cba,	// (0x00014e8d) list_set_text_pane

0x5ca1,	// (0x00010e74) setting_text_pane_g1

0x5cab,	// (0x00010e7e) input_focus_pane_cp2

0x5ca1,	// (0x00010e74) setting_code_pane_g1

0x5dd6,	// (0x00010fa9) setting_code_pane_t1

0x5de4,	// (0x00010fb7) set_text_pane_t1_ParamLimits

0x5de4,	// (0x00010fb7) set_text_pane_t1

0x6ca0,	// (0x00011e73) set_opt_bg_pane_g1

0x6ca8,	// (0x00011e7b) set_opt_bg_pane_g2

0x9c9a,	// (0x00014e6d) set_opt_bg_pane_g3

0x6cb8,	// (0x00011e8b) set_opt_bg_pane_g4

0x6cc0,	// (0x00011e93) set_opt_bg_pane_g5

0x6cc8,	// (0x00011e9b) set_opt_bg_pane_g6

0x9ca2,	// (0x00014e75) set_opt_bg_pane_g7

0x9caa,	// (0x00014e7d) set_opt_bg_pane_g8

0x9cb2,	// (0x00014e85) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0001ab4d) set_opt_bg_pane_g

0x9c8d,	// (0x00014e60) slider_set_pane_g1

0x4de9,	// (0x0000ffbc) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0001ab3e) slider_set_pane_g

0x4d85,	// (0x0000ff58) volume_set_pane_g1

0x4d8d,	// (0x0000ff60) volume_set_pane_g2

0x4d95,	// (0x0000ff68) volume_set_pane_g3

0x4d9d,	// (0x0000ff70) volume_set_pane_g4

0x4da5,	// (0x0000ff78) volume_set_pane_g5

0x4dad,	// (0x0000ff80) volume_set_pane_g6

0x4db5,	// (0x0000ff88) volume_set_pane_g7

0x4dbd,	// (0x0000ff90) volume_set_pane_g8

0x4dc5,	// (0x0000ff98) volume_set_pane_g9

0x4dcd,	// (0x0000ffa0) volume_set_pane_g10

0x0009,

0xf943,	// (0x0001ab16) volume_set_pane_g

0x035a,	// (0x0000b52d) indicator_pane_ParamLimits

0x035a,	// (0x0000b52d) indicator_pane

0x0382,	// (0x0000b555) main_idle_pane_g2_ParamLimits

0x0382,	// (0x0000b555) main_idle_pane_g2

0x03ba,	// (0x0000b58d) main_pane_idle_g1_ParamLimits

0x03ba,	// (0x0000b58d) main_pane_idle_g1

0x5e3f,	// (0x00011012) popup_clock_digital_analogue_window_ParamLimits

0x5e3f,	// (0x00011012) popup_clock_digital_analogue_window

0x03e1,	// (0x0000b5b4) soft_indicator_pane_ParamLimits

0x03e1,	// (0x0000b5b4) soft_indicator_pane

0x03fb,	// (0x0000b5ce) wallpaper_pane_ParamLimits

0x03fb,	// (0x0000b5ce) wallpaper_pane

0x5ca1,	// (0x00010e74) wallpaper_pane_g1

0x040d,	// (0x0000b5e0) indicator_pane_g1_ParamLimits

0x040d,	// (0x0000b5e0) indicator_pane_g1

0xa179,	// (0x0001534c) navi_navi_icon_text_pane_srt_g1

0x5e91,	// (0x00011064) soft_indicator_pane_t1

0x5eab,	// (0x0001107e) aid_ps_area_pane

0x0426,	// (0x0000b5f9) aid_ps_clock_pane

0x5eca,	// (0x0001109d) aid_ps_indicator_pane

0x5ed6,	// (0x000110a9) indicator_ps_pane_ParamLimits

0x5ed6,	// (0x000110a9) indicator_ps_pane

0x5ee5,	// (0x000110b8) power_save_pane_g1_ParamLimits

0x5ee5,	// (0x000110b8) power_save_pane_g1

0x5ef1,	// (0x000110c4) power_save_pane_g2_ParamLimits

0x5ef1,	// (0x000110c4) power_save_pane_g2

0x4038,	// (0x0000f20b) aid_navinavi_width_pane

0x5eab,	// (0x0001107e) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001a759) power_save_pane_g_ParamLimits

0xf586,	// (0x0001a759) power_save_pane_g

0x5eff,	// (0x000110d2) power_save_pane_t1_ParamLimits

0x5eff,	// (0x000110d2) power_save_pane_t1

0x0426,	// (0x0000b5f9) aid_ps_clock_pane_ParamLimits

0x5eca,	// (0x0001109d) aid_ps_indicator_pane_ParamLimits

0x5f11,	// (0x000110e4) power_save_pane_t4_ParamLimits

0x5f11,	// (0x000110e4) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001a75e) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001a75e) power_save_pane_t

0x5f3b,	// (0x0001110e) power_save_t3_ParamLimits

0x5f3b,	// (0x0001110e) power_save_t3

0x5f26,	// (0x000110f9) power_save_t2_ParamLimits

0x5f26,	// (0x000110f9) power_save_t2

0x5f50,	// (0x00011123) indicator_ps_pane_g1

0x0434,	// (0x0000b607) ai_gene_pane_ParamLimits

0x0434,	// (0x0000b607) ai_gene_pane

0x044b,	// (0x0000b61e) ai_links_pane_ParamLimits

0x044b,	// (0x0000b61e) ai_links_pane

0x0463,	// (0x0000b636) indicator_pane_cp1_ParamLimits

0x0463,	// (0x0000b636) indicator_pane_cp1

0x0472,	// (0x0000b645) main_pane_idle_g1_cp_ParamLimits

0x0472,	// (0x0000b645) main_pane_idle_g1_cp

0x5f89,	// (0x0001115c) popup_ai_links_title_window

0x048a,	// (0x0000b65d) soft_indicator_pane_cp1_ParamLimits

0x048a,	// (0x0000b65d) soft_indicator_pane_cp1

0x9a3d,	// (0x00014c10) ai_links_pane_g1

0x9a46,	// (0x00014c19) grid_ai_links_pane

0x1e2d,	// (0x0000d000) ai_gene_pane_1

0x9a2b,	// (0x00014bfe) ai_gene_pane_2

0x9a34,	// (0x00014c07) list_highlight_pane_cp4

0x1e09,	// (0x0000cfdc) cell_ai_link_pane_ParamLimits

0x1e09,	// (0x0000cfdc) cell_ai_link_pane

0x99fc,	// (0x00014bcf) cell_ai_link_pane_g1

0x61b6,	// (0x00011389) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0001aaf1) cell_ai_link_pane_g

0x5cab,	// (0x00010e7e) grid_highlight_cp2

0x5cab,	// (0x00010e7e) bg_popup_sub_pane_cp1

0x5fac,	// (0x0001117f) popup_ai_links_title_window_t1

0x994a,	// (0x00014b1d) ai_gene_pane_1_g1_ParamLimits

0x994a,	// (0x00014b1d) ai_gene_pane_1_g1

0x9956,	// (0x00014b29) ai_gene_pane_1_g2_ParamLimits

0x9956,	// (0x00014b29) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0001aae7) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0001aae7) ai_gene_pane_1_g

0x9963,	// (0x00014b36) ai_gene_pane_1_t1_ParamLimits

0x9963,	// (0x00014b36) ai_gene_pane_1_t1

0x9997,	// (0x00014b6a) grid_ai_soft_ind_pane

0x9935,	// (0x00014b08) ai_gene_pane_2_t1_ParamLimits

0x9935,	// (0x00014b08) ai_gene_pane_2_t1

0x049e,	// (0x0000b671) main_pane_empty_t1_ParamLimits

0x049e,	// (0x0000b671) main_pane_empty_t1

0x04b6,	// (0x0000b689) main_pane_empty_t2_ParamLimits

0x04b6,	// (0x0000b689) main_pane_empty_t2

0x04cb,	// (0x0000b69e) main_pane_empty_t3_ParamLimits

0x04cb,	// (0x0000b69e) main_pane_empty_t3

0x04dd,	// (0x0000b6b0) main_pane_empty_t4_ParamLimits

0x04dd,	// (0x0000b6b0) main_pane_empty_t4

0x04ef,	// (0x0000b6c2) main_pane_empty_t5_ParamLimits

0x04ef,	// (0x0000b6c2) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001a763) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001a763) main_pane_empty_t

0x6d99,	// (0x00011f6c) bg_popup_window_pane_ParamLimits

0x6d99,	// (0x00011f6c) bg_popup_window_pane

0x969d,	// (0x00014870) find_popup_pane_cp2_ParamLimits

0x969d,	// (0x00014870) find_popup_pane_cp2

0x96a9,	// (0x0001487c) heading_pane_ParamLimits

0x96a9,	// (0x0001487c) heading_pane

0x5cab,	// (0x00010e7e) bg_popup_sub_pane

0x1d27,	// (0x0000cefa) bg_popup_window_pane_g1_ParamLimits

0x1d27,	// (0x0000cefa) bg_popup_window_pane_g1

0x1d36,	// (0x0000cf09) bg_popup_window_pane_g2_ParamLimits

0x1d36,	// (0x0000cf09) bg_popup_window_pane_g2

0x1d42,	// (0x0000cf15) bg_popup_window_pane_g3_ParamLimits

0x1d42,	// (0x0000cf15) bg_popup_window_pane_g3

0x1d4e,	// (0x0000cf21) bg_popup_window_pane_g4_ParamLimits

0x1d4e,	// (0x0000cf21) bg_popup_window_pane_g4

0x1d5d,	// (0x0000cf30) bg_popup_window_pane_g5_ParamLimits

0x1d5d,	// (0x0000cf30) bg_popup_window_pane_g5

0x1d6d,	// (0x0000cf40) bg_popup_window_pane_g6_ParamLimits

0x1d6d,	// (0x0000cf40) bg_popup_window_pane_g6

0x1d79,	// (0x0000cf4c) bg_popup_window_pane_g7_ParamLimits

0x1d79,	// (0x0000cf4c) bg_popup_window_pane_g7

0x1d88,	// (0x0000cf5b) bg_popup_window_pane_g8_ParamLimits

0x1d88,	// (0x0000cf5b) bg_popup_window_pane_g8

0x1d97,	// (0x0000cf6a) bg_popup_window_pane_g9_ParamLimits

0x1d97,	// (0x0000cf6a) bg_popup_window_pane_g9

0x9683,	// (0x00014856) bg_popup_window_pane_g10_ParamLimits

0x9683,	// (0x00014856) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0001aaaf) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0001aaaf) bg_popup_window_pane_g

0x95ac,	// (0x0001477f) bg_popup_heading_pane_ParamLimits

0x95ac,	// (0x0001477f) bg_popup_heading_pane

0x4e71,	// (0x00010044) tabs_4_passive_pane_cp_srt_ParamLimits

0x4e71,	// (0x00010044) tabs_4_passive_pane_cp_srt

0x4e83,	// (0x00010056) tabs_4_passive_pane_srt_ParamLimits

0x95c0,	// (0x00014793) heading_pane_g2

0x4e83,	// (0x00010056) tabs_4_passive_pane_srt

0x8901,	// (0x00013ad4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8901,	// (0x00013ad4) bg_passive_tab_pane_cp3_srt

0x95c8,	// (0x0001479b) heading_pane_t1_ParamLimits

0x95c8,	// (0x0001479b) heading_pane_t1

0x95df,	// (0x000147b2) heading_pane_t2_ParamLimits

0x95df,	// (0x000147b2) heading_pane_t2

0x0001,

0xf8d7,	// (0x0001aaaa) heading_pane_t_ParamLimits

0xf8d7,	// (0x0001aaaa) heading_pane_t

0x90e7,	// (0x000142ba) bg_popup_heading_pane_g1

0x9196,	// (0x00014369) bg_popup_heading_pane_g2

0x91a0,	// (0x00014373) bg_popup_heading_pane_g3

0x91aa,	// (0x0001437d) bg_popup_heading_pane_g4

0x91b4,	// (0x00014387) bg_popup_heading_pane_g5

0x91be,	// (0x00014391) bg_popup_heading_pane_g6

0x91c6,	// (0x00014399) bg_popup_heading_pane_g7

0x91ce,	// (0x000143a1) bg_popup_heading_pane_g8

0x91d8,	// (0x000143ab) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0001aa66) bg_popup_heading_pane_g

0x87e7,	// (0x000139ba) bg_popup_sub_pane_g1

0x87f7,	// (0x000139ca) bg_popup_sub_pane_g2

0x87ef,	// (0x000139c2) bg_popup_sub_pane_g3

0x8807,	// (0x000139da) bg_popup_sub_pane_g4

0x87ff,	// (0x000139d2) bg_popup_sub_pane_g5

0x880f,	// (0x000139e2) bg_popup_sub_pane_g6

0x8817,	// (0x000139ea) bg_popup_sub_pane_g7

0x8827,	// (0x000139fa) bg_popup_sub_pane_g8

0x881f,	// (0x000139f2) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0001aa40) bg_popup_sub_pane_g

0x6020,	// (0x000111f3) bg_popup_window_pane_cp5_ParamLimits

0x6020,	// (0x000111f3) bg_popup_window_pane_cp5

0x603c,	// (0x0001120f) popup_note_window_g1_ParamLimits

0x603c,	// (0x0001120f) popup_note_window_g1

0x6048,	// (0x0001121b) popup_note_window_t1_ParamLimits

0x6048,	// (0x0001121b) popup_note_window_t1

0x605a,	// (0x0001122d) popup_note_window_t2_ParamLimits

0x605a,	// (0x0001122d) popup_note_window_t2

0x606c,	// (0x0001123f) popup_note_window_t3_ParamLimits

0x606c,	// (0x0001123f) popup_note_window_t3

0x607e,	// (0x00011251) popup_note_window_t4_ParamLimits

0x607e,	// (0x00011251) popup_note_window_t4

0x60a6,	// (0x00011279) popup_note_window_t5_ParamLimits

0x60a6,	// (0x00011279) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001a76e) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001a76e) popup_note_window_t

0x60ca,	// (0x0001129d) bg_popup_window_pane_cp6_ParamLimits

0x60ca,	// (0x0001129d) bg_popup_window_pane_cp6

0x905b,	// (0x0001422e) popup_note_image_window_g1_ParamLimits

0x905b,	// (0x0001422e) popup_note_image_window_g1

0x9067,	// (0x0001423a) popup_note_image_window_g2_ParamLimits

0x9067,	// (0x0001423a) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0001aa34) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0001aa34) popup_note_image_window_g

0x9080,	// (0x00014253) popup_note_image_window_t1_ParamLimits

0x9080,	// (0x00014253) popup_note_image_window_t1

0x9099,	// (0x0001426c) popup_note_image_window_t2_ParamLimits

0x9099,	// (0x0001426c) popup_note_image_window_t2

0x90b2,	// (0x00014285) popup_note_image_window_t3_ParamLimits

0x90b2,	// (0x00014285) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0001aa39) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0001aa39) popup_note_image_window_t

0x8f1c,	// (0x000140ef) bg_popup_window_pane_cp7_ParamLimits

0x8f1c,	// (0x000140ef) bg_popup_window_pane_cp7

0x8f4c,	// (0x0001411f) popup_note_wait_window_g1_ParamLimits

0x8f4c,	// (0x0001411f) popup_note_wait_window_g1

0x8f58,	// (0x0001412b) popup_note_wait_window_g2_ParamLimits

0x8f58,	// (0x0001412b) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0001aa22) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0001aa22) popup_note_wait_window_g

0x8f70,	// (0x00014143) popup_note_wait_window_t1_ParamLimits

0x8f70,	// (0x00014143) popup_note_wait_window_t1

0x8f97,	// (0x0001416a) popup_note_wait_window_t2_ParamLimits

0x8f97,	// (0x0001416a) popup_note_wait_window_t2

0x8fb4,	// (0x00014187) popup_note_wait_window_t3_ParamLimits

0x8fb4,	// (0x00014187) popup_note_wait_window_t3

0x8fc7,	// (0x0001419a) popup_note_wait_window_t4_ParamLimits

0x8fc7,	// (0x0001419a) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0001aa29) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0001aa29) popup_note_wait_window_t

0x8fec,	// (0x000141bf) wait_bar_pane_ParamLimits

0x8fec,	// (0x000141bf) wait_bar_pane

0x5cab,	// (0x00010e7e) wait_anim_pane

0x5cab,	// (0x00010e7e) wait_border_pane

0x5ca1,	// (0x00010e74) wait_anim_pane_g1

0x5ca1,	// (0x00010e74) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001a8ed) wait_anim_pane_g

0x8ec0,	// (0x00014093) wait_border_pane_g1

0x8ecb,	// (0x0001409e) wait_border_pane_g2

0x8ed4,	// (0x000140a7) wait_border_pane_g3

0x0002,

0xf848,	// (0x0001aa1b) wait_border_pane_g

0x8d30,	// (0x00013f03) bg_popup_window_pane_cp16_ParamLimits

0x8d30,	// (0x00013f03) bg_popup_window_pane_cp16

0x8e30,	// (0x00014003) indicator_popup_pane_cp4_ParamLimits

0x8e30,	// (0x00014003) indicator_popup_pane_cp4

0x8e44,	// (0x00014017) popup_query_data_window_t1_ParamLimits

0x8e44,	// (0x00014017) popup_query_data_window_t1

0x8e56,	// (0x00014029) popup_query_data_window_t2_ParamLimits

0x8e56,	// (0x00014029) popup_query_data_window_t2

0x8e6f,	// (0x00014042) popup_query_data_window_t3_ParamLimits

0x8e6f,	// (0x00014042) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0001aa14) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0001aa14) popup_query_data_window_t

0x8e89,	// (0x0001405c) query_popup_data_pane_ParamLimits

0x8e89,	// (0x0001405c) query_popup_data_pane

0x8e9d,	// (0x00014070) query_popup_data_pane_cp1_ParamLimits

0x8e9d,	// (0x00014070) query_popup_data_pane_cp1

0x8d30,	// (0x00013f03) bg_popup_window_pane_cp10_ParamLimits

0x8d30,	// (0x00013f03) bg_popup_window_pane_cp10

0x8d62,	// (0x00013f35) indicator_popup_pane_ParamLimits

0x8d62,	// (0x00013f35) indicator_popup_pane

0x8d84,	// (0x00013f57) popup_query_code_window_t1_ParamLimits

0x8d84,	// (0x00013f57) popup_query_code_window_t1

0x8d9e,	// (0x00013f71) popup_query_code_window_t2_ParamLimits

0x8d9e,	// (0x00013f71) popup_query_code_window_t2

0x8de7,	// (0x00013fba) popup_query_code_window_t3_ParamLimits

0x8de7,	// (0x00013fba) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0001aa0d) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0001aa0d) popup_query_code_window_t

0x8e16,	// (0x00013fe9) query_popup_pane_ParamLimits

0x8e16,	// (0x00013fe9) query_popup_pane

0x60ca,	// (0x0001129d) bg_popup_window_pane_cp15_ParamLimits

0x60ca,	// (0x0001129d) bg_popup_window_pane_cp15

0x60e8,	// (0x000112bb) indicator_popup_pane_cp1_ParamLimits

0x60e8,	// (0x000112bb) indicator_popup_pane_cp1

0x60fb,	// (0x000112ce) indicator_popup_pane_cp2_ParamLimits

0x60fb,	// (0x000112ce) indicator_popup_pane_cp2

0x610e,	// (0x000112e1) popup_query_data_code_window_g1_ParamLimits

0x610e,	// (0x000112e1) popup_query_data_code_window_g1

0x6121,	// (0x000112f4) popup_query_data_code_window_t1_ParamLimits

0x6121,	// (0x000112f4) popup_query_data_code_window_t1

0x6133,	// (0x00011306) popup_query_data_code_window_t2_ParamLimits

0x6133,	// (0x00011306) popup_query_data_code_window_t2

0x6145,	// (0x00011318) popup_query_data_code_window_t3_ParamLimits

0x6145,	// (0x00011318) popup_query_data_code_window_t3

0x615b,	// (0x0001132e) popup_query_data_code_window_t4_ParamLimits

0x615b,	// (0x0001132e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001a779) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001a779) popup_query_data_code_window_t

0x4b2e,	// (0x0000fd01) list_single_midp_graphic_pane_g3

0x6173,	// (0x00011346) query_popup_data_pane_cp2_ParamLimits

0x6186,	// (0x00011359) query_popup_pane_cp2_ParamLimits

0x6186,	// (0x00011359) query_popup_pane_cp2

0x5cab,	// (0x00010e7e) bg_popup_window_pane_cp11

0x8d28,	// (0x00013efb) heading_pane_cp5

0x626e,	// (0x00011441) listscroll_popup_info_pane

0x5cab,	// (0x00010e7e) input_focus_pane_cp3

0x6199,	// (0x0001136c) query_popup_pane_t1

0x61a7,	// (0x0001137a) list_popup_info_pane_ParamLimits

0x61a7,	// (0x0001137a) list_popup_info_pane

0x61b6,	// (0x00011389) listscroll_popup_info_pane_g1

0x61be,	// (0x00011391) scroll_pane_cp7

0x61c8,	// (0x0001139b) popup_info_list_pane_t1_ParamLimits

0x61c8,	// (0x0001139b) popup_info_list_pane_t1

0x61e2,	// (0x000113b5) popup_info_list_pane_t2_ParamLimits

0x61e2,	// (0x000113b5) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001a782) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001a782) popup_info_list_pane_t

0x5cab,	// (0x00010e7e) bg_popup_window_pane_cp12

0xa193,	// (0x00015366) find_popup_pane

0x5d8b,	// (0x00010f5e) bg_popup_window_pane_cp3

0x61fc,	// (0x000113cf) heading_pane_cp3

0x6208,	// (0x000113db) listscroll_popup_graphic_pane

0x5cab,	// (0x00010e7e) bg_popup_window_pane_cp4

0x0551,	// (0x0000b724) heading_pane_cp4

0x626e,	// (0x00011441) listscroll_popup_colour_pane

0x6276,	// (0x00011449) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6276,	// (0x00011449) cell_large_graphic_colour_none_popup_pane

0x0559,	// (0x0000b72c) grid_large_graphic_colour_popup_pane_ParamLimits

0x0559,	// (0x0000b72c) grid_large_graphic_colour_popup_pane

0x62ae,	// (0x00011481) listscroll_popup_colour_pane_g1_ParamLimits

0x62ae,	// (0x00011481) listscroll_popup_colour_pane_g1

0x62c5,	// (0x00011498) listscroll_popup_colour_pane_g2_ParamLimits

0x62c5,	// (0x00011498) listscroll_popup_colour_pane_g2

0x62dc,	// (0x000114af) listscroll_popup_colour_pane_g3_ParamLimits

0x62dc,	// (0x000114af) listscroll_popup_colour_pane_g3

0x057d,	// (0x0000b750) listscroll_popup_colour_pane_g4_ParamLimits

0x057d,	// (0x0000b750) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001a787) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001a787) listscroll_popup_colour_pane_g

0x62fb,	// (0x000114ce) scroll_pane_cp6_ParamLimits

0x62fb,	// (0x000114ce) scroll_pane_cp6

0x058c,	// (0x0000b75f) cell_large_graphic_colour_popup_pane_ParamLimits

0x058c,	// (0x0000b75f) cell_large_graphic_colour_popup_pane

0x632c,	// (0x000114ff) cell_large_graphic_colour_none_popup_pane_t1

0x5cab,	// (0x00010e7e) grid_highlight_pane_cp5

0x633b,	// (0x0001150e) cell_large_graphic_colour_popup_pane_g1

0x6343,	// (0x00011516) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001a790) cell_large_graphic_colour_popup_pane_g

0x634b,	// (0x0001151e) cell_large_graphic_colour_popup_pane_g2_copy1

0x6354,	// (0x00011527) grid_highlight_pane_cp4

0x635c,	// (0x0001152f) bg_popup_window_pane_cp8_ParamLimits

0x635c,	// (0x0001152f) bg_popup_window_pane_cp8

0x6377,	// (0x0001154a) popup_snote_single_text_window_g1_ParamLimits

0x6377,	// (0x0001154a) popup_snote_single_text_window_g1

0x6389,	// (0x0001155c) popup_snote_single_text_window_t1_ParamLimits

0x6389,	// (0x0001155c) popup_snote_single_text_window_t1

0x639c,	// (0x0001156f) popup_snote_single_text_window_t2_ParamLimits

0x639c,	// (0x0001156f) popup_snote_single_text_window_t2

0x63af,	// (0x00011582) popup_snote_single_text_window_t3_ParamLimits

0x63af,	// (0x00011582) popup_snote_single_text_window_t3

0x63e8,	// (0x000115bb) popup_snote_single_text_window_t4_ParamLimits

0x63e8,	// (0x000115bb) popup_snote_single_text_window_t4

0x641c,	// (0x000115ef) popup_snote_single_text_window_t5_ParamLimits

0x641c,	// (0x000115ef) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001a795) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001a795) popup_snote_single_text_window_t

0x644b,	// (0x0001161e) bg_popup_window_pane_cp9_ParamLimits

0x644b,	// (0x0001161e) bg_popup_window_pane_cp9

0x6377,	// (0x0001154a) popup_snote_single_graphic_window_g1_ParamLimits

0x6377,	// (0x0001154a) popup_snote_single_graphic_window_g1

0x6459,	// (0x0001162c) popup_snote_single_graphic_window_g2_ParamLimits

0x6459,	// (0x0001162c) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001a7a0) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001a7a0) popup_snote_single_graphic_window_g

0x6465,	// (0x00011638) popup_snote_single_graphic_window_t1_ParamLimits

0x6465,	// (0x00011638) popup_snote_single_graphic_window_t1

0x6478,	// (0x0001164b) popup_snote_single_graphic_window_t2_ParamLimits

0x6478,	// (0x0001164b) popup_snote_single_graphic_window_t2

0x648b,	// (0x0001165e) popup_snote_single_graphic_window_t3_ParamLimits

0x648b,	// (0x0001165e) popup_snote_single_graphic_window_t3

0x64c4,	// (0x00011697) popup_snote_single_graphic_window_t4_ParamLimits

0x64c4,	// (0x00011697) popup_snote_single_graphic_window_t4

0x64f8,	// (0x000116cb) popup_snote_single_graphic_window_t5_ParamLimits

0x64f8,	// (0x000116cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001a7a5) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001a7a5) popup_snote_single_graphic_window_t

0xa0d3,	// (0x000152a6) grid_graphic_popup_pane_ParamLimits

0xa0d3,	// (0x000152a6) grid_graphic_popup_pane

0xa0ff,	// (0x000152d2) listscroll_popup_graphic_pane_g1_ParamLimits

0xa0ff,	// (0x000152d2) listscroll_popup_graphic_pane_g1

0x213a,	// (0x0000d30d) listscroll_popup_graphic_pane_g2_ParamLimits

0x213a,	// (0x0000d30d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0001ab8a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0001ab8a) listscroll_popup_graphic_pane_g

0xa127,	// (0x000152fa) scroll_pane_cp5

0x20fd,	// (0x0000d2d0) cell_graphic_popup_pane_ParamLimits

0x20fd,	// (0x0000d2d0) cell_graphic_popup_pane

0xa05f,	// (0x00015232) cell_graphic_popup_pane_g1

0xa067,	// (0x0001523a) cell_graphic_popup_pane_g2

0x634b,	// (0x0001151e) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0001ab83) cell_graphic_popup_pane_g

0xa070,	// (0x00015243) cell_graphic_popup_pane_t2

0x6354,	// (0x00011527) grid_highlight_pane_cp3

0x6539,	// (0x0001170c) list_gen_pane_ParamLimits

0x6539,	// (0x0001170c) list_gen_pane

0x656b,	// (0x0001173e) scroll_pane

0x20b8,	// (0x0000d28b) bg_list_pane_g1_ParamLimits

0x20b8,	// (0x0000d28b) bg_list_pane_g1

0x9fdc,	// (0x000151af) bg_list_pane_g2_ParamLimits

0x9fdc,	// (0x000151af) bg_list_pane_g2

0x9fef,	// (0x000151c2) bg_list_pane_g3_ParamLimits

0x9fef,	// (0x000151c2) bg_list_pane_g3

0xa001,	// (0x000151d4) bg_list_pane_g4_ParamLimits

0xa001,	// (0x000151d4) bg_list_pane_g4

0x20d3,	// (0x0000d2a6) bg_list_pane_g5_ParamLimits

0x20d3,	// (0x0000d2a6) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0001ab78) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0001ab78) bg_list_pane_g

0x2057,	// (0x0000d22a) list_double2_graphic_large_graphic_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double2_graphic_large_graphic_pane

0x2057,	// (0x0000d22a) list_double2_graphic_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double2_graphic_pane

0x2057,	// (0x0000d22a) list_double2_large_graphic_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double2_large_graphic_pane

0x2057,	// (0x0000d22a) list_double2_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double2_pane

0x2057,	// (0x0000d22a) list_double_graphic_heading_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_graphic_heading_pane

0x2057,	// (0x0000d22a) list_double_graphic_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_graphic_pane

0x2057,	// (0x0000d22a) list_double_heading_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_heading_pane

0x2057,	// (0x0000d22a) list_double_large_graphic_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_large_graphic_pane

0x2057,	// (0x0000d22a) list_double_number_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_number_pane

0x2057,	// (0x0000d22a) list_double_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_pane

0x2057,	// (0x0000d22a) list_double_time_pane_ParamLimits

0x2057,	// (0x0000d22a) list_double_time_pane

0x2057,	// (0x0000d22a) list_setting_number_pane_ParamLimits

0x2057,	// (0x0000d22a) list_setting_number_pane

0x2057,	// (0x0000d22a) list_setting_pane_ParamLimits

0x2057,	// (0x0000d22a) list_setting_pane

0x206a,	// (0x0000d23d) list_single_2graphic_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_2graphic_pane

0x206a,	// (0x0000d23d) list_single_graphic_heading_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_graphic_heading_pane

0x206a,	// (0x0000d23d) list_single_graphic_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_graphic_pane

0x206a,	// (0x0000d23d) list_single_heading_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_heading_pane

0x206a,	// (0x0000d23d) list_single_large_graphic_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_large_graphic_pane

0x206a,	// (0x0000d23d) list_single_number_heading_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_number_heading_pane

0x206a,	// (0x0000d23d) list_single_number_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_number_pane

0x206a,	// (0x0000d23d) list_single_pane_ParamLimits

0x206a,	// (0x0000d23d) list_single_pane

0x5cab,	// (0x00010e7e) list_highlight_pane_cp1

0x6660,	// (0x00011833) list_single_pane_g1_ParamLimits

0x6660,	// (0x00011833) list_single_pane_g1

0x666c,	// (0x0001183f) list_single_pane_g2_ParamLimits

0x666c,	// (0x0001183f) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_single_pane_g

0xa71e,	// (0x000158f1) list_single_pane_t1_ParamLimits

0xa71e,	// (0x000158f1) list_single_pane_t1

0x6660,	// (0x00011833) list_single_number_pane_g1_ParamLimits

0x6660,	// (0x00011833) list_single_number_pane_g1

0x666c,	// (0x0001183f) list_single_number_pane_g2_ParamLimits

0x666c,	// (0x0001183f) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_single_number_pane_g

0x8775,	// (0x00013948) list_single_number_pane_t1_ParamLimits

0x8775,	// (0x00013948) list_single_number_pane_t1

0x1e9b,	// (0x0000d06e) list_single_number_pane_t2_ParamLimits

0x1e9b,	// (0x0000d06e) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0001ab39) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0001ab39) list_single_number_pane_t

0x05b5,	// (0x0000b788) list_single_graphic_pane_g1_ParamLimits

0x05b5,	// (0x0000b788) list_single_graphic_pane_g1

0x6660,	// (0x00011833) list_single_graphic_pane_g2_ParamLimits

0x6660,	// (0x00011833) list_single_graphic_pane_g2

0x666c,	// (0x0001183f) list_single_graphic_pane_g3_ParamLimits

0x666c,	// (0x0001183f) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001a7b0) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001a7b0) list_single_graphic_pane_g

0x05c1,	// (0x0000b794) list_single_graphic_pane_t1_ParamLimits

0x05c1,	// (0x0000b794) list_single_graphic_pane_t1

0x6660,	// (0x00011833) list_single_heading_pane_g1_ParamLimits

0x6660,	// (0x00011833) list_single_heading_pane_g1

0x666c,	// (0x0001183f) list_single_heading_pane_g2_ParamLimits

0x666c,	// (0x0001183f) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_single_heading_pane_g

0xa740,	// (0x00015913) list_single_heading_pane_t1_ParamLimits

0xa740,	// (0x00015913) list_single_heading_pane_t1

0x05d7,	// (0x0000b7aa) list_single_heading_pane_t2_ParamLimits

0x05d7,	// (0x0000b7aa) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001a7bc) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001a7bc) list_single_heading_pane_t

0x6660,	// (0x00011833) list_single_number_heading_pane_g1_ParamLimits

0x6660,	// (0x00011833) list_single_number_heading_pane_g1

0x666c,	// (0x0001183f) list_single_number_heading_pane_g2_ParamLimits

0x666c,	// (0x0001183f) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_single_number_heading_pane_g

0xa740,	// (0x00015913) list_single_number_heading_pane_t1_ParamLimits

0xa740,	// (0x00015913) list_single_number_heading_pane_t1

0x05e9,	// (0x0000b7bc) list_single_number_heading_pane_t2_ParamLimits

0x05e9,	// (0x0000b7bc) list_single_number_heading_pane_t2

0xa6f8,	// (0x000158cb) list_single_number_heading_pane_t3_ParamLimits

0xa6f8,	// (0x000158cb) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001a7c1) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001a7c1) list_single_number_heading_pane_t

0x8769,	// (0x0001393c) list_single_graphic_heading_pane_g1_ParamLimits

0x8769,	// (0x0001393c) list_single_graphic_heading_pane_g1

0x05fb,	// (0x0000b7ce) list_single_graphic_heading_pane_g4_ParamLimits

0x05fb,	// (0x0000b7ce) list_single_graphic_heading_pane_g4

0x666c,	// (0x0001183f) list_single_graphic_heading_pane_g5_ParamLimits

0x666c,	// (0x0001183f) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001a7c8) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001a7c8) list_single_graphic_heading_pane_g

0xa740,	// (0x00015913) list_single_graphic_heading_pane_t1_ParamLimits

0xa740,	// (0x00015913) list_single_graphic_heading_pane_t1

0x060c,	// (0x0000b7df) list_single_graphic_heading_pane_t2_ParamLimits

0x060c,	// (0x0000b7df) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001a7cf) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001a7cf) list_single_graphic_heading_pane_t

0xa734,	// (0x00015907) list_single_large_graphic_pane_g1_ParamLimits

0xa734,	// (0x00015907) list_single_large_graphic_pane_g1

0x6660,	// (0x00011833) list_single_large_graphic_pane_g2_ParamLimits

0x6660,	// (0x00011833) list_single_large_graphic_pane_g2

0x666c,	// (0x0001183f) list_single_large_graphic_pane_g3_ParamLimits

0x666c,	// (0x0001183f) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001a7d4) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001a7d4) list_single_large_graphic_pane_g

0x8ecb,	// (0x0001409e) wait_border_pane_g2_copy1

0x061e,	// (0x0000b7f1) list_single_large_graphic_pane_g4_cp2

0xa740,	// (0x00015913) list_single_large_graphic_pane_t1_ParamLimits

0xa740,	// (0x00015913) list_single_large_graphic_pane_t1

0x67bc,	// (0x0001198f) list_double_pane_g1_ParamLimits

0x67bc,	// (0x0001198f) list_double_pane_g1

0x66e7,	// (0x000118ba) list_double_pane_g2_ParamLimits

0x66e7,	// (0x000118ba) list_double_pane_g2

0x0001,

0xf608,	// (0x0001a7db) list_double_pane_g_ParamLimits

0xf608,	// (0x0001a7db) list_double_pane_g

0x66f3,	// (0x000118c6) list_double_pane_t1_ParamLimits

0x66f3,	// (0x000118c6) list_double_pane_t1

0x0626,	// (0x0000b7f9) list_double_pane_t2_ParamLimits

0x0626,	// (0x0000b7f9) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001a7e0) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001a7e0) list_double_pane_t

0x0638,	// (0x0000b80b) list_double2_pane_g1_ParamLimits

0x0638,	// (0x0000b80b) list_double2_pane_g1

0x0649,	// (0x0000b81c) list_double2_pane_g2_ParamLimits

0x0649,	// (0x0000b81c) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001a7e5) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001a7e5) list_double2_pane_g

0xbf24,	// (0x000170f7) list_double2_pane_t1_ParamLimits

0xbf24,	// (0x000170f7) list_double2_pane_t1

0x68e5,	// (0x00011ab8) list_double2_pane_t2_ParamLimits

0x68e5,	// (0x00011ab8) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001a7ea) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001a7ea) list_double2_pane_t

0x67bc,	// (0x0001198f) list_double_number_pane_g1_ParamLimits

0x67bc,	// (0x0001198f) list_double_number_pane_g1

0x66e7,	// (0x000118ba) list_double_number_pane_g2_ParamLimits

0x66e7,	// (0x000118ba) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001a7db) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001a7db) list_double_number_pane_g

0x0655,	// (0x0000b828) list_double_number_pane_t1_ParamLimits

0x0655,	// (0x0000b828) list_double_number_pane_t1

0x67c8,	// (0x0001199b) list_double_number_pane_t2_ParamLimits

0x67c8,	// (0x0001199b) list_double_number_pane_t2

0x0667,	// (0x0000b83a) list_double_number_pane_t3_ParamLimits

0x0667,	// (0x0000b83a) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001a7ef) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001a7ef) list_double_number_pane_t

0x67b0,	// (0x00011983) list_double_graphic_pane_g1_ParamLimits

0x67b0,	// (0x00011983) list_double_graphic_pane_g1

0x0679,	// (0x0000b84c) list_double_graphic_pane_g2_ParamLimits

0x0679,	// (0x0000b84c) list_double_graphic_pane_g2

0x0688,	// (0x0000b85b) list_double_graphic_pane_g3_ParamLimits

0x0688,	// (0x0000b85b) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001a7f6) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001a7f6) list_double_graphic_pane_g

0x06a0,	// (0x0000b873) list_double_graphic_pane_t1_ParamLimits

0x06a0,	// (0x0000b873) list_double_graphic_pane_t1

0x06b6,	// (0x0000b889) list_double_graphic_pane_t2_ParamLimits

0x06b6,	// (0x0000b889) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a7ff) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a7ff) list_double_graphic_pane_t

0x06c8,	// (0x0000b89b) list_double2_graphic_pane_g1_ParamLimits

0x06c8,	// (0x0000b89b) list_double2_graphic_pane_g1

0x6b8a,	// (0x00011d5d) list_double2_graphic_pane_g2_ParamLimits

0x6b8a,	// (0x00011d5d) list_double2_graphic_pane_g2

0x0649,	// (0x0000b81c) list_double2_graphic_pane_g3_ParamLimits

0x0649,	// (0x0000b81c) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a804) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a804) list_double2_graphic_pane_g

0x06d4,	// (0x0000b8a7) list_double2_graphic_pane_t1_ParamLimits

0x06d4,	// (0x0000b8a7) list_double2_graphic_pane_t1

0x690d,	// (0x00011ae0) list_double2_graphic_pane_t2_ParamLimits

0x690d,	// (0x00011ae0) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a80b) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a80b) list_double2_graphic_pane_t

0x06ea,	// (0x0000b8bd) list_double_large_graphic_pane_g1_ParamLimits

0x06ea,	// (0x0000b8bd) list_double_large_graphic_pane_g1

0x0715,	// (0x0000b8e8) list_double_large_graphic_pane_g2_ParamLimits

0x0715,	// (0x0000b8e8) list_double_large_graphic_pane_g2

0x66e7,	// (0x000118ba) list_double_large_graphic_pane_g3_ParamLimits

0x66e7,	// (0x000118ba) list_double_large_graphic_pane_g3

0x0726,	// (0x0000b8f9) list_double_large_graphic_pane_g4_ParamLimits

0x0726,	// (0x0000b8f9) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001a810) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001a810) list_double_large_graphic_pane_g

0x0739,	// (0x0000b90c) list_double_large_graphic_pane_t1_ParamLimits

0x0739,	// (0x0000b90c) list_double_large_graphic_pane_t1

0x0752,	// (0x0000b925) list_double_large_graphic_pane_t2_ParamLimits

0x0752,	// (0x0000b925) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001a81b) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001a81b) list_double_large_graphic_pane_t

0x0764,	// (0x0000b937) list_double2_large_graphic_pane_g1_ParamLimits

0x0764,	// (0x0000b937) list_double2_large_graphic_pane_g1

0x0638,	// (0x0000b80b) list_double2_large_graphic_pane_g2_ParamLimits

0x0638,	// (0x0000b80b) list_double2_large_graphic_pane_g2

0x0649,	// (0x0000b81c) list_double2_large_graphic_pane_g3_ParamLimits

0x0649,	// (0x0000b81c) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001a820) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001a820) list_double2_large_graphic_pane_g

0x0770,	// (0x0000b943) list_double2_large_graphic_pane_t1_ParamLimits

0x0770,	// (0x0000b943) list_double2_large_graphic_pane_t1

0x0786,	// (0x0000b959) list_double2_large_graphic_pane_t2_ParamLimits

0x0786,	// (0x0000b959) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a827) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a827) list_double2_large_graphic_pane_t

0x0798,	// (0x0000b96b) list_double_heading_pane_g1_ParamLimits

0x0798,	// (0x0000b96b) list_double_heading_pane_g1

0x07a9,	// (0x0000b97c) list_double_heading_pane_g2_ParamLimits

0x07a9,	// (0x0000b97c) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001a82c) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001a82c) list_double_heading_pane_g

0x07b5,	// (0x0000b988) list_double_heading_pane_t1_ParamLimits

0x07b5,	// (0x0000b988) list_double_heading_pane_t1

0x07cb,	// (0x0000b99e) list_double_heading_pane_t2_ParamLimits

0x07cb,	// (0x0000b99e) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001a831) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001a831) list_double_heading_pane_t

0x67b0,	// (0x00011983) list_double_graphic_heading_pane_g1_ParamLimits

0x67b0,	// (0x00011983) list_double_graphic_heading_pane_g1

0x0798,	// (0x0000b96b) list_double_graphic_heading_pane_g2_ParamLimits

0x0798,	// (0x0000b96b) list_double_graphic_heading_pane_g2

0x07a9,	// (0x0000b97c) list_double_graphic_heading_pane_g3_ParamLimits

0x07a9,	// (0x0000b97c) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001a836) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001a836) list_double_graphic_heading_pane_g

0x07dd,	// (0x0000b9b0) list_double_graphic_heading_pane_t1_ParamLimits

0x07dd,	// (0x0000b9b0) list_double_graphic_heading_pane_t1

0x07f3,	// (0x0000b9c6) list_double_graphic_heading_pane_t2_ParamLimits

0x07f3,	// (0x0000b9c6) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001a83d) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001a83d) list_double_graphic_heading_pane_t

0x0715,	// (0x0000b8e8) list_double_time_pane_g1_ParamLimits

0x0715,	// (0x0000b8e8) list_double_time_pane_g1

0x66e7,	// (0x000118ba) list_double_time_pane_g2_ParamLimits

0x66e7,	// (0x000118ba) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001a842) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001a842) list_double_time_pane_g

0x688a,	// (0x00011a5d) list_double_time_pane_t1_ParamLimits

0x688a,	// (0x00011a5d) list_double_time_pane_t1

0x0805,	// (0x0000b9d8) list_double_time_pane_t2_ParamLimits

0x0805,	// (0x0000b9d8) list_double_time_pane_t2

0x0817,	// (0x0000b9ea) list_double_time_pane_t3_ParamLimits

0x0817,	// (0x0000b9ea) list_double_time_pane_t3

0x0829,	// (0x0000b9fc) list_double_time_pane_t4_ParamLimits

0x0829,	// (0x0000b9fc) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001a847) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001a847) list_double_time_pane_t

0x6b8a,	// (0x00011d5d) list_setting_pane_g1_ParamLimits

0x6b8a,	// (0x00011d5d) list_setting_pane_g1

0x0649,	// (0x0000b81c) list_setting_pane_g2_ParamLimits

0x0649,	// (0x0000b81c) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001a850) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001a850) list_setting_pane_g

0x083b,	// (0x0000ba0e) list_setting_pane_t1_ParamLimits

0x083b,	// (0x0000ba0e) list_setting_pane_t1

0x0852,	// (0x0000ba25) list_setting_pane_t2_ParamLimits

0x0852,	// (0x0000ba25) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001a855) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001a855) list_setting_pane_t

0x088f,	// (0x0000ba62) set_value_pane_cp_ParamLimits

0x088f,	// (0x0000ba62) set_value_pane_cp

0x6b8a,	// (0x00011d5d) list_setting_number_pane_g1_ParamLimits

0x6b8a,	// (0x00011d5d) list_setting_number_pane_g1

0x0649,	// (0x0000b81c) list_setting_number_pane_g2_ParamLimits

0x0649,	// (0x0000b81c) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001a850) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001a850) list_setting_number_pane_g

0x089b,	// (0x0000ba6e) list_setting_number_pane_t1_ParamLimits

0x089b,	// (0x0000ba6e) list_setting_number_pane_t1

0x08af,	// (0x0000ba82) list_setting_number_pane_t2_ParamLimits

0x08af,	// (0x0000ba82) list_setting_number_pane_t2

0x08c6,	// (0x0000ba99) list_setting_number_pane_t3_ParamLimits

0x08c6,	// (0x0000ba99) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001a85c) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001a85c) list_setting_number_pane_t

0x088f,	// (0x0000ba62) set_value_pane_ParamLimits

0x088f,	// (0x0000ba62) set_value_pane

0x6a39,	// (0x00011c0c) bg_set_opt_pane_ParamLimits

0x6a39,	// (0x00011c0c) bg_set_opt_pane

0x6a5a,	// (0x00011c2d) set_value_pane_t1

0x6a68,	// (0x00011c3b) slider_set_pane_cp3

0x6a71,	// (0x00011c44) volume_small_pane_cp

0x6a7a,	// (0x00011c4d) list_form_gen_pane

0x6a83,	// (0x00011c56) scroll_pane_cp8

0x0909,	// (0x0000badc) form_field_data_pane_ParamLimits

0x0909,	// (0x0000badc) form_field_data_pane

0x0920,	// (0x0000baf3) form_field_data_wide_pane_ParamLimits

0x0920,	// (0x0000baf3) form_field_data_wide_pane

0x0940,	// (0x0000bb13) form_field_popup_pane_ParamLimits

0x0940,	// (0x0000bb13) form_field_popup_pane

0x095e,	// (0x0000bb31) form_field_popup_wide_pane_ParamLimits

0x095e,	// (0x0000bb31) form_field_popup_wide_pane

0x6b0e,	// (0x00011ce1) form_field_slider_pane_ParamLimits

0x6b0e,	// (0x00011ce1) form_field_slider_pane

0x6b21,	// (0x00011cf4) form_field_slider_wide_pane_ParamLimits

0x6b21,	// (0x00011cf4) form_field_slider_wide_pane

0x6b34,	// (0x00011d07) data_form_pane

0x097f,	// (0x0000bb52) form_field_data_pane_t1

0x6b64,	// (0x00011d37) input_focus_pane

0x6b72,	// (0x00011d45) data_form_wide_pane

0x6baa,	// (0x00011d7d) form_field_data_wide_pane_t1

0x6369,	// (0x0001153c) input_focus_pane_cp6

0x0999,	// (0x0000bb6c) form_field_popup_pane_t1

0x6b64,	// (0x00011d37) input_focus_pane_cp7

0x6be6,	// (0x00011db9) list_form_pane

0x6bfa,	// (0x00011dcd) form_field_popup_wide_pane_t1

0x6b64,	// (0x00011d37) input_focus_pane_cp8

0x6c0f,	// (0x00011de2) list_form_wide_pane

0x09bb,	// (0x0000bb8e) form_field_slider_pane_t1_ParamLimits

0x09bb,	// (0x0000bb8e) form_field_slider_pane_t1

0x09d3,	// (0x0000bba6) form_field_slider_pane_t2_ParamLimits

0x09d3,	// (0x0000bba6) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001a86c) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001a86c) form_field_slider_pane_t

0x6020,	// (0x000111f3) input_focus_pane_cp9_ParamLimits

0x6020,	// (0x000111f3) input_focus_pane_cp9

0x09e8,	// (0x0000bbbb) slider_cont_pane_ParamLimits

0x09e8,	// (0x0000bbbb) slider_cont_pane

0x6c60,	// (0x00011e33) form_field_slider_wide_pane_t1_ParamLimits

0x6c60,	// (0x00011e33) form_field_slider_wide_pane_t1

0x6c72,	// (0x00011e45) form_field_slider_wide_pane_t2_ParamLimits

0x6c72,	// (0x00011e45) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001a871) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001a871) form_field_slider_wide_pane_t

0x6020,	// (0x000111f3) input_focus_pane_cp10_ParamLimits

0x6020,	// (0x000111f3) input_focus_pane_cp10

0x09fc,	// (0x0000bbcf) slider_cont_pane_cp1_ParamLimits

0x09fc,	// (0x0000bbcf) slider_cont_pane_cp1

0x0a10,	// (0x0000bbe3) slider_form_pane_cp

0x6ca0,	// (0x00011e73) input_focus_pane_g1

0x6ca8,	// (0x00011e7b) input_focus_pane_g2

0x6cb0,	// (0x00011e83) input_focus_pane_g3

0x6cb8,	// (0x00011e8b) input_focus_pane_g4

0x6cc0,	// (0x00011e93) input_focus_pane_g5

0x6cc8,	// (0x00011e9b) input_focus_pane_g6

0x6cd0,	// (0x00011ea3) input_focus_pane_g7

0x6cd8,	// (0x00011eab) input_focus_pane_g8

0x6ce0,	// (0x00011eb3) input_focus_pane_g9

0x5ca1,	// (0x00010e74) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001a876) input_focus_pane_g

0x8ed4,	// (0x000140a7) wait_border_pane_g3_copy1

0x0a18,	// (0x0000bbeb) data_form_pane_t1

0x5ca1,	// (0x00010e74) wait_anim_pane_g1_copy1

0x202c,	// (0x0000d1ff) data_form_wide_pane_t1

0x0a32,	// (0x0000bc05) list_form_graphic_pane_cp_ParamLimits

0x0a32,	// (0x0000bc05) list_form_graphic_pane_cp

0x9e27,	// (0x00014ffa) slider_form_pane_g1

0x9e30,	// (0x00015003) slider_form_pane_g2

0x0006,

0xf996,	// (0x0001ab69) slider_form_pane_g

0x0a45,	// (0x0000bc18) list_form_graphic_pane_ParamLimits

0x0a45,	// (0x0000bc18) list_form_graphic_pane

0x6d34,	// (0x00011f07) list_form_graphic_pane_g1

0x6d3c,	// (0x00011f0f) list_form_graphic_pane_t1_ParamLimits

0x6d3c,	// (0x00011f0f) list_form_graphic_pane_t1

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp5_ParamLimits

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp5

0x0a59,	// (0x0000bc2c) find_pane_g1

0x6d5a,	// (0x00011f2d) input_find_pane

0x0a62,	// (0x0000bc35) input_find_pane_g1_ParamLimits

0x0a62,	// (0x0000bc35) input_find_pane_g1

0x0a6e,	// (0x0000bc41) input_find_pane_t1_ParamLimits

0x0a6e,	// (0x0000bc41) input_find_pane_t1

0x0a83,	// (0x0000bc56) input_find_pane_t2_ParamLimits

0x0a83,	// (0x0000bc56) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001a88b) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001a88b) input_find_pane_t

0x6d99,	// (0x00011f6c) input_focus_pane_cp5_ParamLimits

0x6d99,	// (0x00011f6c) input_focus_pane_cp5

0x0aa4,	// (0x0000bc77) bg_popup_window_pane_cp2_ParamLimits

0x0aa4,	// (0x0000bc77) bg_popup_window_pane_cp2

0x0ab1,	// (0x0000bc84) listscroll_menu_pane_ParamLimits

0x0ab1,	// (0x0000bc84) listscroll_menu_pane

0x0abd,	// (0x0000bc90) popup_submenu_window_ParamLimits

0x0abd,	// (0x0000bc90) popup_submenu_window

0x6df0,	// (0x00011fc3) find_popup_pane_g1

0x6df8,	// (0x00011fcb) input_popup_find_pane_cp

0x6d99,	// (0x00011f6c) input_focus_pane_cp4_ParamLimits

0x6d99,	// (0x00011f6c) input_focus_pane_cp4

0x6e10,	// (0x00011fe3) input_popup_find_pane_t1_ParamLimits

0x6e10,	// (0x00011fe3) input_popup_find_pane_t1

0x5cab,	// (0x00010e7e) bg_popup_sub_pane_cp

0x6e3e,	// (0x00012011) listscroll_popup_sub_pane

0x6e46,	// (0x00012019) list_submenu_pane_ParamLimits

0x6e46,	// (0x00012019) list_submenu_pane

0x6e57,	// (0x0001202a) scroll_pane_cp4

0x6e5f,	// (0x00012032) list_single_popup_submenu_pane_ParamLimits

0x6e5f,	// (0x00012032) list_single_popup_submenu_pane

0x6e72,	// (0x00012045) list_single_popup_submenu_pane_g1

0x6e7a,	// (0x0001204d) list_single_popup_submenu_pane_t1_ParamLimits

0x6e7a,	// (0x0001204d) list_single_popup_submenu_pane_t1

0x6020,	// (0x000111f3) bg_active_tab_pane_cp1_ParamLimits

0x6020,	// (0x000111f3) bg_active_tab_pane_cp1

0x0aef,	// (0x0000bcc2) tabs_2_active_pane_g1

0x0af7,	// (0x0000bcca) tabs_2_active_pane_t1

0x6020,	// (0x000111f3) bg_passive_tab_pane_cp1_ParamLimits

0x6020,	// (0x000111f3) bg_passive_tab_pane_cp1

0x0aef,	// (0x0000bcc2) tabs_2_passive_pane_g1

0x0af7,	// (0x0000bcca) tabs_2_passive_pane_t1

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp4

0x0b09,	// (0x0000bcdc) tabs_2_long_active_pane_t1

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp4

0x4b36,	// (0x0000fd09) list_single_midp_graphic_pane_g4_ParamLimits

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp5

0x0b1c,	// (0x0000bcef) tabs_3_long_active_pane_t1

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp5

0x4b36,	// (0x0000fd09) list_single_midp_graphic_pane_g4

0x5d8b,	// (0x00010f5e) bg_popup_window_pane_cp13_ParamLimits

0x5d8b,	// (0x00010f5e) bg_popup_window_pane_cp13

0x6ef1,	// (0x000120c4) listscroll_popup_fast_pane_ParamLimits

0x6ef1,	// (0x000120c4) listscroll_popup_fast_pane

0x6f00,	// (0x000120d3) grid_popup_fast_pane_ParamLimits

0x6f00,	// (0x000120d3) grid_popup_fast_pane

0x6f12,	// (0x000120e5) scroll_pane_cp9_ParamLimits

0x6f12,	// (0x000120e5) scroll_pane_cp9

0xbbfb,	// (0x00016dce) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbbfb,	// (0x00016dce) list_single_graphic_hl_pane_t1_cp2

0x6f36,	// (0x00012109) input_focus_pane_cp20_ParamLimits

0x6f36,	// (0x00012109) input_focus_pane_cp20

0x6f44,	// (0x00012117) query_popup_data_pane_t1_ParamLimits

0x6f44,	// (0x00012117) query_popup_data_pane_t1

0x6f57,	// (0x0001212a) query_popup_data_pane_t2_ParamLimits

0x6f57,	// (0x0001212a) query_popup_data_pane_t2

0x6f9d,	// (0x00012170) query_popup_data_pane_t3_ParamLimits

0x6f9d,	// (0x00012170) query_popup_data_pane_t3

0x6fde,	// (0x000121b1) query_popup_data_pane_t4_ParamLimits

0x6fde,	// (0x000121b1) query_popup_data_pane_t4

0x701a,	// (0x000121ed) query_popup_data_pane_t5_ParamLimits

0x701a,	// (0x000121ed) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001a890) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001a890) query_popup_data_pane_t

0x6ca0,	// (0x00011e73) bg_set_opt_pane_g1

0x6ca8,	// (0x00011e7b) bg_set_opt_pane_g2

0x6cb0,	// (0x00011e83) bg_set_opt_pane_g3

0x6cb8,	// (0x00011e8b) bg_set_opt_pane_g4

0x6cc0,	// (0x00011e93) bg_set_opt_pane_g5

0x6cc8,	// (0x00011e9b) bg_set_opt_pane_g6

0x6cd0,	// (0x00011ea3) bg_set_opt_pane_g7

0x6cd8,	// (0x00011eab) bg_set_opt_pane_g8

0x6ce0,	// (0x00011eb3) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001a89b) bg_set_opt_pane_g

0x473f,	// (0x0000f912) control_top_pane_stacon_ParamLimits

0x473f,	// (0x0000f912) control_top_pane_stacon

0x4792,	// (0x0000f965) signal_pane_stacon_ParamLimits

0x4792,	// (0x0000f965) signal_pane_stacon

0x7643,	// (0x00012816) stacon_top_pane_g1_ParamLimits

0x7643,	// (0x00012816) stacon_top_pane_g1

0x47b7,	// (0x0000f98a) title_pane_stacon_ParamLimits

0x47b7,	// (0x0000f98a) title_pane_stacon

0x47e1,	// (0x0000f9b4) uni_indicator_pane_stacon_ParamLimits

0x47e1,	// (0x0000f9b4) uni_indicator_pane_stacon

0x47f6,	// (0x0000f9c9) battery_pane_stacon_ParamLimits

0x47f6,	// (0x0000f9c9) battery_pane_stacon

0x483a,	// (0x0000fa0d) control_bottom_pane_stacon_ParamLimits

0x483a,	// (0x0000fa0d) control_bottom_pane_stacon

0x485d,	// (0x0000fa30) navi_pane_stacon_ParamLimits

0x485d,	// (0x0000fa30) navi_pane_stacon

0x7665,	// (0x00012838) stacon_bottom_pane_g1_ParamLimits

0x7665,	// (0x00012838) stacon_bottom_pane_g1

0x44a0,	// (0x0000f673) aid_levels_signal_lsc_ParamLimits

0x44a0,	// (0x0000f673) aid_levels_signal_lsc

0x44b7,	// (0x0000f68a) signal_pane_stacon_g1_ParamLimits

0x44b7,	// (0x0000f68a) signal_pane_stacon_g1

0x44cb,	// (0x0000f69e) signal_pane_stacon_g2_ParamLimits

0x44cb,	// (0x0000f69e) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001a8ae) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001a8ae) signal_pane_stacon_g

0x4500,	// (0x0000f6d3) title_pane_stacon_t1_ParamLimits

0x4500,	// (0x0000f6d3) title_pane_stacon_t1

0x7072,	// (0x00012245) uni_indicator_pane_stacon_g1

0x707c,	// (0x0001224f) uni_indicator_pane_stacon_g2

0x705e,	// (0x00012231) uni_indicator_pane_stacon_g3

0x7068,	// (0x0001223b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001a8ba) uni_indicator_pane_stacon_g

0x4525,	// (0x0000f6f8) control_top_pane_stacon_g1

0x452d,	// (0x0000f700) control_top_pane_stacon_t1_ParamLimits

0x452d,	// (0x0000f700) control_top_pane_stacon_t1

0x4564,	// (0x0000f737) aid_levels_battery_lsc_ParamLimits

0x4564,	// (0x0000f737) aid_levels_battery_lsc

0x457c,	// (0x0000f74f) battery_pane_stacon_g1_ParamLimits

0x457c,	// (0x0000f74f) battery_pane_stacon_g1

0x458f,	// (0x0000f762) battery_pane_stacon_g2_ParamLimits

0x458f,	// (0x0000f762) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001a8c3) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001a8c3) battery_pane_stacon_g

0x45cd,	// (0x0000f7a0) navi_icon_pane_stacon

0x45e1,	// (0x0000f7b4) navi_navi_pane_stacon

0x45cd,	// (0x0000f7a0) navi_text_pane_stacon

0x4525,	// (0x0000f6f8) control_bottom_pane_stacon_g1

0x45f5,	// (0x0000f7c8) control_bottom_pane_stacon_t1_ParamLimits

0x45f5,	// (0x0000f7c8) control_bottom_pane_stacon_t1

0x0b2e,	// (0x0000bd01) grid_app_pane_ParamLimits

0x0b2e,	// (0x0000bd01) grid_app_pane

0x0b64,	// (0x0000bd37) scroll_pane_cp15_ParamLimits

0x0b64,	// (0x0000bd37) scroll_pane_cp15

0x0b7d,	// (0x0000bd50) cell_app_pane_ParamLimits

0x0b7d,	// (0x0000bd50) cell_app_pane

0x0bc4,	// (0x0000bd97) cell_app_pane_g1_ParamLimits

0x0bc4,	// (0x0000bd97) cell_app_pane_g1

0x7125,	// (0x000122f8) cell_app_pane_g2_ParamLimits

0x7125,	// (0x000122f8) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001a8c8) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001a8c8) cell_app_pane_g

0x7131,	// (0x00012304) cell_app_pane_t1_ParamLimits

0x7131,	// (0x00012304) cell_app_pane_t1

0x7148,	// (0x0001231b) grid_highlight_pane_ParamLimits

0x7148,	// (0x0001231b) grid_highlight_pane

0x6ca0,	// (0x00011e73) cell_highlight_pane_g1

0x6ca8,	// (0x00011e7b) cell_highlight_pane_g2

0x6cb0,	// (0x00011e83) cell_highlight_pane_g3

0x6cb8,	// (0x00011e8b) cell_highlight_pane_g4

0x6cc0,	// (0x00011e93) cell_highlight_pane_g5

0x6cc8,	// (0x00011e9b) cell_highlight_pane_g6

0x6cd0,	// (0x00011ea3) cell_highlight_pane_g7

0x6cd8,	// (0x00011eab) cell_highlight_pane_g8

0x6ce0,	// (0x00011eb3) cell_highlight_pane_g9

0x5ca1,	// (0x00010e74) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001a876) cell_highlight_pane_g

0x7159,	// (0x0001232c) bg_scroll_pane

0x463f,	// (0x0000f812) scroll_handle_pane

0x71a0,	// (0x00012373) scroll_bg_pane_g1

0x71b5,	// (0x00012388) scroll_bg_pane_g2

0x71cd,	// (0x000123a0) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001a8cd) scroll_bg_pane_g

0x71e2,	// (0x000123b5) scroll_handle_focus_pane_ParamLimits

0x71e2,	// (0x000123b5) scroll_handle_focus_pane

0x71a0,	// (0x00012373) scroll_handle_pane_g1

0x71ef,	// (0x000123c2) scroll_handle_pane_g2

0x71cd,	// (0x000123a0) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001a8d4) scroll_handle_pane_g

0x6d99,	// (0x00011f6c) bg_popup_sub_pane_cp21_ParamLimits

0x6d99,	// (0x00011f6c) bg_popup_sub_pane_cp21

0x7203,	// (0x000123d6) popup_fep_japan_predictive_window_t1_ParamLimits

0x7203,	// (0x000123d6) popup_fep_japan_predictive_window_t1

0x721a,	// (0x000123ed) popup_fep_japan_predictive_window_t2_ParamLimits

0x721a,	// (0x000123ed) popup_fep_japan_predictive_window_t2

0x724d,	// (0x00012420) popup_fep_japan_predictive_window_t3_ParamLimits

0x724d,	// (0x00012420) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001a8db) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001a8db) popup_fep_japan_predictive_window_t

0x5cab,	// (0x00010e7e) bg_popup_sub_pane_cp23

0x7284,	// (0x00012457) listscroll_japin_cand_pane

0x728c,	// (0x0001245f) popup_fep_japan_candidate_window_t1

0x729a,	// (0x0001246d) candidate_pane_ParamLimits

0x729a,	// (0x0001246d) candidate_pane

0x72ac,	// (0x0001247f) scroll_pane_cp30

0x72b4,	// (0x00012487) list_single_popup_jap_candidate_pane_ParamLimits

0x72b4,	// (0x00012487) list_single_popup_jap_candidate_pane

0x5cab,	// (0x00010e7e) list_highlight_pane_cp30

0x72c8,	// (0x0001249b) list_single_popup_jap_candidate_pane_t1

0x72d7,	// (0x000124aa) level_1_signal

0x72e4,	// (0x000124b7) level_2_signal

0x72f1,	// (0x000124c4) level_3_signal

0x72fe,	// (0x000124d1) level_4_signal

0x730b,	// (0x000124de) level_5_signal

0x7318,	// (0x000124eb) level_6_signal

0x7325,	// (0x000124f8) level_7_signal

0x72d7,	// (0x000124aa) level_1_battery

0x72e4,	// (0x000124b7) level_2_battery

0x72f1,	// (0x000124c4) level_3_battery

0x72fe,	// (0x000124d1) level_4_battery

0x730b,	// (0x000124de) level_5_battery

0x7318,	// (0x000124eb) level_6_battery

0x7325,	// (0x000124f8) level_7_battery

0x734a,	// (0x0001251d) list_menu_pane_ParamLimits

0x734a,	// (0x0001251d) list_menu_pane

0x735b,	// (0x0001252e) scroll_pane_cp25_ParamLimits

0x735b,	// (0x0001252e) scroll_pane_cp25

0x7374,	// (0x00012547) list_double2_graphic_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double2_graphic_pane_cp2

0x7374,	// (0x00012547) list_double2_large_graphic_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double2_large_graphic_pane_cp2

0x7374,	// (0x00012547) list_double2_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double2_pane_cp2

0x7374,	// (0x00012547) list_double_graphic_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double_graphic_pane_cp2

0x7374,	// (0x00012547) list_double_large_graphic_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double_large_graphic_pane_cp2

0x7374,	// (0x00012547) list_double_number_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double_number_pane_cp2

0x7374,	// (0x00012547) list_double_pane_cp2_ParamLimits

0x7374,	// (0x00012547) list_double_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_2graphic_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_2graphic_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_graphic_heading_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_graphic_heading_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_graphic_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_graphic_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_heading_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_heading_pane_cp2

0x73ad,	// (0x00012580) list_single_large_graphic_pane_cp2_ParamLimits

0x73ad,	// (0x00012580) list_single_large_graphic_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_number_heading_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_number_heading_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_number_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_number_pane_cp2

0x0c02,	// (0x0000bdd5) list_single_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_pane_cp2

0x7403,	// (0x000125d6) bg_popup_sub_pane_cp22

0x46f1,	// (0x0000f8c4) popup_side_volume_key_window_g1

0x471b,	// (0x0000f8ee) popup_side_volume_key_window_t1

0x4737,	// (0x0000f90a) volume_small_pane_cp1

0x6020,	// (0x000111f3) bg_popup_sub_pane_cp24_ParamLimits

0x6020,	// (0x000111f3) bg_popup_sub_pane_cp24

0x7419,	// (0x000125ec) fep_china_uni_candidate_pane_ParamLimits

0x7419,	// (0x000125ec) fep_china_uni_candidate_pane

0x742d,	// (0x00012600) fep_china_uni_entry_pane

0x743d,	// (0x00012610) popup_fep_china_uni_window_g1

0x7459,	// (0x0001262c) fep_china_uni_entry_pane_g1

0x7461,	// (0x00012634) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001a908) fep_china_uni_entry_pane_g

0x7469,	// (0x0001263c) fep_entry_item_pane

0x7473,	// (0x00012646) fep_candidate_item_pane

0x747b,	// (0x0001264e) fep_china_uni_candidate_pane_g1

0x7483,	// (0x00012656) fep_china_uni_candidate_pane_g2

0x748b,	// (0x0001265e) fep_china_uni_candidate_pane_g3

0x7493,	// (0x00012666) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001a90d) fep_china_uni_candidate_pane_g

0x5ca1,	// (0x00010e74) fep_entry_item_pane_g1

0x749b,	// (0x0001266e) fep_entry_item_pane_t1_ParamLimits

0x749b,	// (0x0001266e) fep_entry_item_pane_t1

0x74b1,	// (0x00012684) fep_candidate_item_pane_t1_ParamLimits

0x74b1,	// (0x00012684) fep_candidate_item_pane_t1

0x74c6,	// (0x00012699) fep_candidate_item_pane_t2_ParamLimits

0x74c6,	// (0x00012699) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001a916) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001a916) fep_candidate_item_pane_t

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp31_ParamLimits

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp31

0x74d8,	// (0x000126ab) level_1_signal_lsc

0x74e1,	// (0x000126b4) level_2_signal_lsc

0x74ea,	// (0x000126bd) level_3_signal_lsc

0x74f3,	// (0x000126c6) level_4_signal_lsc

0x74fc,	// (0x000126cf) level_5_signal_lsc

0x7505,	// (0x000126d8) level_6_signal_lsc

0x750e,	// (0x000126e1) level_7_signal_lsc

0x750e,	// (0x000126e1) level_1_battery_lsc

0x7517,	// (0x000126ea) level_2_battery_lsc

0x7520,	// (0x000126f3) level_3_battery_lsc

0x7529,	// (0x000126fc) level_4_battery_lsc

0x7532,	// (0x00012705) level_5_battery_lsc

0x753b,	// (0x0001270e) level_6_battery_lsc

0x74d8,	// (0x000126ab) level_7_battery_lsc

0x7544,	// (0x00012717) scroll_handle_focus_pane_g1

0x754d,	// (0x00012720) scroll_handle_focus_pane_g2

0x7556,	// (0x00012729) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001a91b) scroll_handle_focus_pane_g

0x0c64,	// (0x0000be37) list_single_2graphic_pane_g1_ParamLimits

0x0c64,	// (0x0000be37) list_single_2graphic_pane_g1

0x05fb,	// (0x0000b7ce) list_single_2graphic_pane_g2_ParamLimits

0x05fb,	// (0x0000b7ce) list_single_2graphic_pane_g2

0x666c,	// (0x0001183f) list_single_2graphic_pane_g3_ParamLimits

0x666c,	// (0x0001183f) list_single_2graphic_pane_g3

0x0c70,	// (0x0000be43) list_single_2graphic_pane_g4_ParamLimits

0x0c70,	// (0x0000be43) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001a922) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001a922) list_single_2graphic_pane_g

0x0c7c,	// (0x0000be4f) list_single_2graphic_pane_t1_ParamLimits

0x0c7c,	// (0x0000be4f) list_single_2graphic_pane_t1

0x0caa,	// (0x0000be7d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0caa,	// (0x0000be7d) list_double2_graphic_large_graphic_pane_g1

0x0638,	// (0x0000b80b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0638,	// (0x0000b80b) list_double2_graphic_large_graphic_pane_g2

0x0649,	// (0x0000b81c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0649,	// (0x0000b81c) list_double2_graphic_large_graphic_pane_g3

0x0cbc,	// (0x0000be8f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0cbc,	// (0x0000be8f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001a92b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001a92b) list_double2_graphic_large_graphic_pane_g

0x0cc8,	// (0x0000be9b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0cc8,	// (0x0000be9b) list_double2_graphic_large_graphic_pane_t1

0x0cde,	// (0x0000beb1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0cde,	// (0x0000beb1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001a934) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001a934) list_double2_graphic_large_graphic_pane_t

0x7730,	// (0x00012903) popup_fast_swap_window_ParamLimits

0x7730,	// (0x00012903) popup_fast_swap_window

0x774c,	// (0x0001291f) popup_side_volume_key_window

0x7766,	// (0x00012939) stacon_top_pane

0x7770,	// (0x00012943) status_pane_ParamLimits

0x7770,	// (0x00012943) status_pane

0x7766,	// (0x00012939) status_small_pane

0x5cab,	// (0x00010e7e) control_pane

0x5cab,	// (0x00010e7e) stacon_bottom_pane

0x6a83,	// (0x00011c56) scroll_pane_cp121

0x6a7a,	// (0x00011c4d) set_content_pane

0x0cf9,	// (0x0000becc) bg_active_tab_pane_g1_cp1

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp1

0x0cf0,	// (0x0000bec3) bg_active_tab_pane_g3_cp1

0x0cf9,	// (0x0000becc) bg_passive_tab_pane_g1_cp1

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp1

0x0cf0,	// (0x0000bec3) bg_passive_tab_pane_g3_cp1

0x0d0b,	// (0x0000bede) bg_active_tab_pane_g1_cp2

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp2

0x0d02,	// (0x0000bed5) bg_active_tab_pane_g3_cp2

0x0d0b,	// (0x0000bede) bg_passive_tab_pane_g1_cp2

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp2

0x0d02,	// (0x0000bed5) bg_passive_tab_pane_g3_cp2

0x0d1d,	// (0x0000bef0) bg_active_tab_pane_g1_cp3

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp3

0x0d14,	// (0x0000bee7) bg_active_tab_pane_g3_cp3

0x0d1d,	// (0x0000bef0) bg_passive_tab_pane_g1_cp3

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp3

0x0d14,	// (0x0000bee7) bg_passive_tab_pane_g3_cp3

0x0d2f,	// (0x0000bf02) bg_active_tab_pane_g1_cp4

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp4

0x0d26,	// (0x0000bef9) bg_active_tab_pane_g3_cp4

0x0d2f,	// (0x0000bf02) bg_passive_tab_pane_g1_cp4

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp4

0x0d26,	// (0x0000bef9) bg_passive_tab_pane_g3_cp4

0x7681,	// (0x00012854) bg_active_tab_pane_g1_cp5

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp5

0x768a,	// (0x0001285d) bg_active_tab_pane_g3_cp5

0x7681,	// (0x00012854) bg_passive_tab_pane_g1_cp5

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp5

0x768a,	// (0x0001285d) bg_passive_tab_pane_g3_cp5

0xf0fd,	// (0x0001a2d0) list_set_graphic_pane_ParamLimits

0xf0fd,	// (0x0001a2d0) list_set_graphic_pane

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp4

0x76b1,	// (0x00012884) list_set_graphic_pane_g1_ParamLimits

0x76b1,	// (0x00012884) list_set_graphic_pane_g1

0x76bd,	// (0x00012890) list_set_graphic_pane_g2_ParamLimits

0x76bd,	// (0x00012890) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001a939) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001a939) list_set_graphic_pane_g

0x0009,

0xfad2,	// (0x0001aca5) volume_small_pane_cp_g

0x76e1,	// (0x000128b4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x76e1,	// (0x000128b4) list_double2_large_graphic_pane_g1_cp2

0x76ef,	// (0x000128c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x76ef,	// (0x000128c2) list_double2_large_graphic_pane_g2_cp2

0x7700,	// (0x000128d3) list_double2_large_graphic_pane_g3_cp2

0x7708,	// (0x000128db) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7708,	// (0x000128db) list_double2_large_graphic_pane_t1_cp2

0x771e,	// (0x000128f1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x771e,	// (0x000128f1) list_double2_large_graphic_pane_t2_cp2

0x99a7,	// (0x00014b7a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x99a7,	// (0x00014b7a) list_double_large_graphic_pane_g1_cp2

0x99ba,	// (0x00014b8d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x99ba,	// (0x00014b8d) list_double_large_graphic_pane_g2_cp2

0x788e,	// (0x00012a61) list_double_large_graphic_pane_g3_cp2

0x99cb,	// (0x00014b9e) list_double_large_graphic_pane_g4_cp

0x99d3,	// (0x00014ba6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x99d3,	// (0x00014ba6) list_double_large_graphic_pane_t1_cp2

0x99ea,	// (0x00014bbd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x99ea,	// (0x00014bbd) list_double_large_graphic_pane_t2_cp2

0x777e,	// (0x00012951) list_double2_graphic_pane_g1_cp2_ParamLimits

0x777e,	// (0x00012951) list_double2_graphic_pane_g1_cp2

0x778c,	// (0x0001295f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x778c,	// (0x0001295f) list_double2_graphic_pane_g2_cp2

0x779d,	// (0x00012970) list_double2_graphic_pane_g3_cp2

0x77a7,	// (0x0001297a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x77a7,	// (0x0001297a) list_double2_graphic_pane_t1_cp2

0x77bd,	// (0x00012990) list_double2_graphic_pane_t2_cp2_ParamLimits

0x77bd,	// (0x00012990) list_double2_graphic_pane_t2_cp2

0x77cf,	// (0x000129a2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x77cf,	// (0x000129a2) list_single_number_heading_pane_g1_cp2

0x77db,	// (0x000129ae) list_single_number_heading_pane_g2_cp2

0x77e3,	// (0x000129b6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x77e3,	// (0x000129b6) list_single_number_heading_pane_t1_cp2

0x77f9,	// (0x000129cc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x77f9,	// (0x000129cc) list_single_number_heading_pane_t2_cp2

0x780d,	// (0x000129e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x780d,	// (0x000129e0) list_single_number_heading_pane_t3_cp2

0x77cf,	// (0x000129a2) list_single_heading_pane_g1_cp2_ParamLimits

0x77cf,	// (0x000129a2) list_single_heading_pane_g1_cp2

0x77db,	// (0x000129ae) list_single_heading_pane_g2_cp2

0x77e3,	// (0x000129b6) list_single_heading_pane_t1_cp2_ParamLimits

0x77e3,	// (0x000129b6) list_single_heading_pane_t1_cp2

0x97af,	// (0x00014982) list_single_heading_pane_t2_cp2_ParamLimits

0x97af,	// (0x00014982) list_single_heading_pane_t2_cp2

0x96f1,	// (0x000148c4) list_double_graphic_pane_g1_cp2_ParamLimits

0x96f1,	// (0x000148c4) list_double_graphic_pane_g1_cp2

0x96fd,	// (0x000148d0) list_double_graphic_pane_g2_cp2_ParamLimits

0x96fd,	// (0x000148d0) list_double_graphic_pane_g2_cp2

0x970c,	// (0x000148df) list_double_graphic_pane_g3_cp2

0x9714,	// (0x000148e7) list_double_graphic_pane_t1_cp2_ParamLimits

0x9714,	// (0x000148e7) list_double_graphic_pane_t1_cp2

0x972a,	// (0x000148fd) list_double_graphic_pane_t2_cp2_ParamLimits

0x972a,	// (0x000148fd) list_double_graphic_pane_t2_cp2

0x7882,	// (0x00012a55) list_double_number_pane_g1_cp2_ParamLimits

0x7882,	// (0x00012a55) list_double_number_pane_g1_cp2

0x788e,	// (0x00012a61) list_double_number_pane_g2_cp2

0x96b5,	// (0x00014888) list_double_number_pane_t1_cp2_ParamLimits

0x96b5,	// (0x00014888) list_double_number_pane_t1_cp2

0x96c9,	// (0x0001489c) list_double_number_pane_t2_cp2_ParamLimits

0x96c9,	// (0x0001489c) list_double_number_pane_t2_cp2

0x96df,	// (0x000148b2) list_double_number_pane_t3_cp2_ParamLimits

0x96df,	// (0x000148b2) list_double_number_pane_t3_cp2

0x959e,	// (0x00014771) list_single_graphic_pane_g1_cp2_ParamLimits

0x959e,	// (0x00014771) list_single_graphic_pane_g1_cp2

0x78e6,	// (0x00012ab9) list_single_graphic_pane_g2_cp2_ParamLimits

0x78e6,	// (0x00012ab9) list_single_graphic_pane_g2_cp2

0x78f2,	// (0x00012ac5) list_single_graphic_pane_g3_cp2

0x9574,	// (0x00014747) list_single_graphic_pane_t1_cp2_ParamLimits

0x9574,	// (0x00014747) list_single_graphic_pane_t1_cp2

0x78e6,	// (0x00012ab9) list_single_number_pane_g1_cp2_ParamLimits

0x78e6,	// (0x00012ab9) list_single_number_pane_g1_cp2

0x78f2,	// (0x00012ac5) list_single_number_pane_g2_cp2

0x9574,	// (0x00014747) list_single_number_pane_t1_cp2_ParamLimits

0x9574,	// (0x00014747) list_single_number_pane_t1_cp2

0x958a,	// (0x0001475d) list_single_number_pane_t2_cp2_ParamLimits

0x958a,	// (0x0001475d) list_single_number_pane_t2_cp2

0x76ef,	// (0x000128c2) list_double2_pane_g1_cp2_ParamLimits

0x76ef,	// (0x000128c2) list_double2_pane_g1_cp2

0x7700,	// (0x000128d3) list_double2_pane_g2_cp2

0x785a,	// (0x00012a2d) list_double2_pane_t1_cp2_ParamLimits

0x785a,	// (0x00012a2d) list_double2_pane_t1_cp2

0x7870,	// (0x00012a43) list_double2_pane_t2_cp2_ParamLimits

0x7870,	// (0x00012a43) list_double2_pane_t2_cp2

0x7882,	// (0x00012a55) list_double_pane_g1_cp2_ParamLimits

0x7882,	// (0x00012a55) list_double_pane_g1_cp2

0x788e,	// (0x00012a61) list_double_pane_g2_cp2

0x7896,	// (0x00012a69) list_double_pane_t1_cp2_ParamLimits

0x7896,	// (0x00012a69) list_double_pane_t1_cp2

0x78ac,	// (0x00012a7f) list_double_pane_t2_cp2_ParamLimits

0x78ac,	// (0x00012a7f) list_double_pane_t2_cp2

0x78d6,	// (0x00012aa9) list_single_pane_cp2_g3

0x78e6,	// (0x00012ab9) list_single_pane_g1_cp2_ParamLimits

0x78e6,	// (0x00012ab9) list_single_pane_g1_cp2

0x78f2,	// (0x00012ac5) list_single_pane_g2_cp2

0x78fa,	// (0x00012acd) list_single_pane_t1_cp2_ParamLimits

0x78fa,	// (0x00012acd) list_single_pane_t1_cp2

0x7912,	// (0x00012ae5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7912,	// (0x00012ae5) list_single_large_graphic_pane_g1_cp2

0x7920,	// (0x00012af3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7920,	// (0x00012af3) list_single_large_graphic_pane_g2_cp2

0x792c,	// (0x00012aff) list_single_large_graphic_pane_g3_cp2

0x7934,	// (0x00012b07) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7934,	// (0x00012b07) list_single_large_graphic_pane_g4_cp1

0x794e,	// (0x00012b21) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x794e,	// (0x00012b21) list_single_large_graphic_pane_t1_cp2

0x953e,	// (0x00014711) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x953e,	// (0x00014711) list_single_graphic_heading_pane_g1_cp2

0x950b,	// (0x000146de) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x950b,	// (0x000146de) list_single_graphic_heading_pane_g4_cp2

0x78f2,	// (0x00012ac5) list_single_graphic_heading_pane_g5_cp2

0x954a,	// (0x0001471d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x954a,	// (0x0001471d) list_single_graphic_heading_pane_t1_cp2

0x9560,	// (0x00014733) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9560,	// (0x00014733) list_single_graphic_heading_pane_t2_cp2

0x94ff,	// (0x000146d2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x94ff,	// (0x000146d2) list_single_2graphic_pane_g1_cp2

0x950b,	// (0x000146de) list_single_2graphic_pane_g2_cp2_ParamLimits

0x950b,	// (0x000146de) list_single_2graphic_pane_g2_cp2

0x78f2,	// (0x00012ac5) list_single_2graphic_pane_g3_cp2

0x951c,	// (0x000146ef) list_single_2graphic_pane_g4_cp2_ParamLimits

0x951c,	// (0x000146ef) list_single_2graphic_pane_g4_cp2

0x9528,	// (0x000146fb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9528,	// (0x000146fb) list_single_2graphic_pane_t1_cp2

0x5ca1,	// (0x00010e74) list_highlight_pane_g10_cp1

0x90e7,	// (0x000142ba) list_highlight_pane_g1_cp1

0x90ef,	// (0x000142c2) list_highlight_pane_g2_cp1

0x90f7,	// (0x000142ca) list_highlight_pane_g3_cp1

0x90ff,	// (0x000142d2) list_highlight_pane_g4_cp1

0x9107,	// (0x000142da) list_highlight_pane_g5_cp1

0x910f,	// (0x000142e2) list_highlight_pane_g6_cp1

0x9117,	// (0x000142ea) list_highlight_pane_g7_cp1

0x911f,	// (0x000142f2) list_highlight_pane_g8_cp1

0x9127,	// (0x000142fa) list_highlight_pane_g9_cp1

0x1b88,	// (0x0000cd5b) form_field_slider_pane_t3

0x1b98,	// (0x0000cd6b) form_field_slider_pane_t4

0x901b,	// (0x000141ee) slider_form_pane_ParamLimits

0x901b,	// (0x000141ee) slider_form_pane

0x5cab,	// (0x00010e7e) control_abbreviations

0x5cab,	// (0x00010e7e) control_conventions

0x5cab,	// (0x00010e7e) control_definitions

0x5cab,	// (0x00010e7e) format_table_attribute

0x97fb,	// (0x000149ce) bg_popup_preview_window_pane_g9

0x5cab,	// (0x00010e7e) format_table_data2

0x5cab,	// (0x00010e7e) format_table_data3

0x5cab,	// (0x00010e7e) format_table_data_example

0x0008,

0x5cab,	// (0x00010e7e) intro_purpose

0xf8f6,	// (0x0001aac9) bg_popup_preview_window_pane_g

0x5cab,	// (0x00010e7e) texts_category

0x5cab,	// (0x00010e7e) texts_graphics

0x7964,	// (0x00012b37) text_digital

0x7973,	// (0x00012b46) text_primary

0x7982,	// (0x00012b55) text_primary_small

0x7991,	// (0x00012b64) text_secondary

0x79a0,	// (0x00012b73) text_title

0xa033,	// (0x00015206) bg_passive_tab_pane_g1_cp3_srt

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp3_srt

0xa03c,	// (0x0001520f) bg_passive_tab_pane_g3_cp3_srt

0x6020,	// (0x000111f3) bg_active_tab_pane_cp3_srt_ParamLimits

0x6020,	// (0x000111f3) bg_active_tab_pane_cp3_srt

0xa045,	// (0x00015218) tabs_4_active_pane_srt_g1

0x20e7,	// (0x0000d2ba) tabs_4_active_pane_srt_t1_ParamLimits

0x20e7,	// (0x0000d2ba) tabs_4_active_pane_srt_t1

0xa033,	// (0x00015206) bg_active_tab_pane_g1_cp3_copy1

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp3_copy1

0xa03c,	// (0x0001520f) bg_active_tab_pane_g3_cp3_copy1

0x5d8b,	// (0x00010f5e) tabs_2_long_active_pane_srt_ParamLimits

0x5d8b,	// (0x00010f5e) tabs_2_long_active_pane_srt

0x5d8b,	// (0x00010f5e) tabs_2_long_passive_pane_srt_ParamLimits

0x5d8b,	// (0x00010f5e) tabs_2_long_passive_pane_srt

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp4_srt

0x9c68,	// (0x00014e3b) bg_passive_tab_pane_g1_cp4_srt

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp4_srt

0x9c71,	// (0x00014e44) bg_passive_tab_pane_g3_cp4_srt

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp4_srt_ParamLimits

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp4_srt

0x1ec3,	// (0x0000d096) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1ec3,	// (0x0000d096) tabs_2_long_active_pane_srt_t1

0x9c68,	// (0x00014e3b) bg_active_tab_pane_g1_cp4_srt

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp4_srt

0x9c71,	// (0x00014e44) bg_active_tab_pane_g3_cp4_srt

0x6020,	// (0x000111f3) tabs_3_long_active_pane_srt_ParamLimits

0x6020,	// (0x000111f3) tabs_3_long_active_pane_srt

0x6020,	// (0x000111f3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6020,	// (0x000111f3) tabs_3_long_passive_pane_cp_srt

0x6020,	// (0x000111f3) tabs_3_long_passive_pane_srt_ParamLimits

0x6020,	// (0x000111f3) tabs_3_long_passive_pane_srt

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp5_srt

0x7681,	// (0x00012854) bg_passive_tab_pane_g1_cp5_srt

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp5_srt

0x768a,	// (0x0001285d) bg_passive_tab_pane_g3_cp5_srt

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp5_srt_ParamLimits

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp5_srt

0x1ead,	// (0x0000d080) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1ead,	// (0x0000d080) tabs_3_long_active_pane_srt_t1

0x7681,	// (0x00012854) bg_active_tab_pane_g1_cp5_srt

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp5_srt

0x768a,	// (0x0001285d) bg_active_tab_pane_g3_cp5_srt

0x9c48,	// (0x00014e1b) navi_text_pane_srt_t1

0x9c40,	// (0x00014e13) navi_icon_pane_srt_g1

0x7b6f,	// (0x00012d42) midp_editing_number_pane_srt

0x79af,	// (0x00012b82) midp_ticker_pane_srt

0x7b77,	// (0x00012d4a) midp_ticker_pane_srt_g1

0x7b7f,	// (0x00012d52) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001a958) midp_ticker_pane_srt_g

0x7b87,	// (0x00012d5a) midp_ticker_pane_srt_t1

0x9c31,	// (0x00014e04) midp_editing_number_pane_t1_copy1

0x0d38,	// (0x0000bf0b) listscroll_midp_pane

0x0d38,	// (0x0000bf0b) midp_form_pane

0x7a27,	// (0x00012bfa) midp_info_popup_window_ParamLimits

0x7a27,	// (0x00012bfa) midp_info_popup_window

0x6d99,	// (0x00011f6c) bg_popup_sub_pane_cp50_ParamLimits

0x6d99,	// (0x00011f6c) bg_popup_sub_pane_cp50

0x8d1c,	// (0x00013eef) listscroll_midp_info_pane_ParamLimits

0x8d1c,	// (0x00013eef) listscroll_midp_info_pane

0x8d04,	// (0x00013ed7) listscroll_form_midp_pane_ParamLimits

0x8d04,	// (0x00013ed7) listscroll_form_midp_pane

0x8d10,	// (0x00013ee3) scroll_bar_cp050

0x1b7c,	// (0x0000cd4f) list_midp_pane

0xac16,	// (0x00015de9) signal_pane_g2_cp

0x8c1e,	// (0x00013df1) listscroll_midp_info_pane_t1_ParamLimits

0x8c1e,	// (0x00013df1) listscroll_midp_info_pane_t1

0x8c36,	// (0x00013e09) listscroll_midp_info_pane_t2_ParamLimits

0x8c36,	// (0x00013e09) listscroll_midp_info_pane_t2

0x8c74,	// (0x00013e47) listscroll_midp_info_pane_t3_ParamLimits

0x8c74,	// (0x00013e47) listscroll_midp_info_pane_t3

0x8cae,	// (0x00013e81) listscroll_midp_info_pane_t4_ParamLimits

0x8cae,	// (0x00013e81) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0001aa04) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0001aa04) listscroll_midp_info_pane_t

0x6e57,	// (0x0001202a) scroll_pane_cp21

0x8bc2,	// (0x00013d95) form_midp_field_choice_group_pane

0x8bcb,	// (0x00013d9e) form_midp_field_text_pane

0x8c04,	// (0x00013dd7) form_midp_field_time_pane

0x8c0c,	// (0x00013ddf) form_midp_gauge_slider_pane

0x8c15,	// (0x00013de8) form_midp_gauge_wait_pane

0x5cab,	// (0x00010e7e) form_midp_image_pane

0x1b60,	// (0x0000cd33) list_single_midp_pane_ParamLimits

0x1b60,	// (0x0000cd33) list_single_midp_pane

0x1b3c,	// (0x0000cd0f) form_midp_field_text_pane_t1

0x8901,	// (0x00013ad4) input_focus_pane_cp050

0x8b75,	// (0x00013d48) list_midp_form_text_pane

0x8b05,	// (0x00013cd8) form_midp_field_choice_group_pane_t1

0x8b13,	// (0x00013ce6) input_focus_pane_cp051

0x8b27,	// (0x00013cfa) list_midp_choice_pane

0x5cab,	// (0x00010e7e) status_idle_pane

0x8ae9,	// (0x00013cbc) form_midp_field_time_pane_t1

0x5ca1,	// (0x00010e74) wait_anim_pane_g2_copy1

0x8af7,	// (0x00013cca) form_midp_field_time_pane_t2

0x0001,

0x7ad7,	// (0x00012caa) aid_navinavi_width_2_pane

0xf82c,	// (0x0001a9ff) form_midp_field_time_pane_t

0x5cab,	// (0x00010e7e) input_focus_pane_cp052

0x5cab,	// (0x00010e7e) bg_input_focus_pane_cp040

0x8aa9,	// (0x00013c7c) form_midp_gauge_slider_pane_t1

0x8ab7,	// (0x00013c8a) form_midp_gauge_slider_pane_t2

0x1b20,	// (0x0000ccf3) form_midp_gauge_slider_pane_t3

0x1b2e,	// (0x0000cd01) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0001a9f6) form_midp_gauge_slider_pane_t

0x8ae1,	// (0x00013cb4) form_midp_slider_pane

0x5d8b,	// (0x00010f5e) bg_input_focus_pane_cp041_ParamLimits

0x5d8b,	// (0x00010f5e) bg_input_focus_pane_cp041

0x8a76,	// (0x00013c49) form_midp_gauge_wait_pane_t1_ParamLimits

0x8a76,	// (0x00013c49) form_midp_gauge_wait_pane_t1

0x8a88,	// (0x00013c5b) form_midp_gauge_wait_pane_t2_ParamLimits

0x8a88,	// (0x00013c5b) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0001a9f1) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0001a9f1) form_midp_gauge_wait_pane_t

0x8a9a,	// (0x00013c6d) form_midp_wait_pane_ParamLimits

0x8a9a,	// (0x00013c6d) form_midp_wait_pane

0x8a40,	// (0x00013c13) form_midp_image_pane_g1

0x8a49,	// (0x00013c1c) form_midp_image_pane_t1

0x8a58,	// (0x00013c2b) form_midp_image_pane_t2

0x8a67,	// (0x00013c3a) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0001a9ea) form_midp_image_pane_t

0x8a28,	// (0x00013bfb) list_single_midp_pane_g1

0x8a31,	// (0x00013c04) list_single_midp_pane_t1

0x1b09,	// (0x0000ccdc) list_midp_form_item_pane_ParamLimits

0x1b09,	// (0x0000ccdc) list_midp_form_item_pane

0x7a7f,	// (0x00012c52) list_midp_form_item_pane_t1

0x7a8e,	// (0x00012c61) midp_ticker_pane_g1

0x7a9a,	// (0x00012c6d) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001a93e) midp_ticker_pane_g

0x0de4,	// (0x0000bfb7) midp_ticker_pane_t1

0x2048,	// (0x0000d21b) midp_editing_number_pane_t1

0x9e85,	// (0x00015058) midp_editing_number_pane

0x9e94,	// (0x00015067) midp_ticker_pane

0x9bf9,	// (0x00014dcc) ai_message_heading_pane

0x5cab,	// (0x00010e7e) bg_popup_window_pane_cp14

0x9c01,	// (0x00014dd4) listscroll_ai_message_pane

0x9b83,	// (0x00014d56) ai_message_heading_pane_g1_ParamLimits

0x9b83,	// (0x00014d56) ai_message_heading_pane_g1

0x9b8f,	// (0x00014d62) ai_message_heading_pane_g2_ParamLimits

0x9b8f,	// (0x00014d62) ai_message_heading_pane_g2

0x9b9b,	// (0x00014d6e) ai_message_heading_pane_g3_ParamLimits

0x9b9b,	// (0x00014d6e) ai_message_heading_pane_g3

0x9ba7,	// (0x00014d7a) ai_message_heading_pane_g4_ParamLimits

0x9ba7,	// (0x00014d7a) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0001ab2b) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0001ab2b) ai_message_heading_pane_g

0x9bb3,	// (0x00014d86) ai_message_heading_pane_t1_ParamLimits

0x9bb3,	// (0x00014d86) ai_message_heading_pane_t1

0x9bcd,	// (0x00014da0) ai_message_heading_pane_t2_ParamLimits

0x9bcd,	// (0x00014da0) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0001ab34) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0001ab34) ai_message_heading_pane_t

0x9bdf,	// (0x00014db2) bg_popup_heading_pane_cp1_ParamLimits

0x9bdf,	// (0x00014db2) bg_popup_heading_pane_cp1

0x9b71,	// (0x00014d44) list_ai_message_pane_ParamLimits

0x9b71,	// (0x00014d44) list_ai_message_pane

0x6e57,	// (0x0001202a) scroll_pane_cp10

0x9b0d,	// (0x00014ce0) list_ai_message_pane_g1

0x9b15,	// (0x00014ce8) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0001ab08) list_ai_message_pane_g

0x9b1d,	// (0x00014cf0) list_ai_message_pane_t1_ParamLimits

0x9b1d,	// (0x00014cf0) list_ai_message_pane_t1

0x9b32,	// (0x00014d05) list_ai_message_pane_t2_ParamLimits

0x9b32,	// (0x00014d05) list_ai_message_pane_t2

0x9b47,	// (0x00014d1a) list_ai_message_pane_t3_ParamLimits

0x9b47,	// (0x00014d1a) list_ai_message_pane_t3

0x9b5c,	// (0x00014d2f) list_ai_message_pane_t4_ParamLimits

0x9b5c,	// (0x00014d2f) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0001ab0d) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0001ab0d) list_ai_message_pane_t

0x1e76,	// (0x0000d049) cell_ai_soft_ind_pane_ParamLimits

0x1e76,	// (0x0000d049) cell_ai_soft_ind_pane

0x7ab8,	// (0x00012c8b) cell_ai_soft_ind_pane_g1_ParamLimits

0x7ab8,	// (0x00012c8b) cell_ai_soft_ind_pane_g1

0x5cab,	// (0x00010e7e) grid_highlight_cp1

0x7ac5,	// (0x00012c98) text_secondary_cp56_ParamLimits

0x7ac5,	// (0x00012c98) text_secondary_cp56

0x9acc,	// (0x00014c9f) example_general_pane_ParamLimits

0x9acc,	// (0x00014c9f) example_general_pane

0x9ad8,	// (0x00014cab) example_parent_pane_g1_ParamLimits

0x9ad8,	// (0x00014cab) example_parent_pane_g1

0x9ae4,	// (0x00014cb7) example_parent_pane_t1_ParamLimits

0x9ae4,	// (0x00014cb7) example_parent_pane_t1

0x136a,	// (0x0000c53d) popup_preview_text_window_ParamLimits

0x136a,	// (0x0000c53d) popup_preview_text_window

0x78de,	// (0x00012ab1) list_single_pane_cp2_g4

0x60ca,	// (0x0001129d) bg_popup_preview_window_pane_ParamLimits

0x60ca,	// (0x0001129d) bg_popup_preview_window_pane

0x9803,	// (0x000149d6) popup_preview_text_window_t1_ParamLimits

0x9803,	// (0x000149d6) popup_preview_text_window_t1

0x9821,	// (0x000149f4) popup_preview_text_window_t2_ParamLimits

0x9821,	// (0x000149f4) popup_preview_text_window_t2

0x986a,	// (0x00014a3d) popup_preview_text_window_t3_ParamLimits

0x986a,	// (0x00014a3d) popup_preview_text_window_t3

0x98af,	// (0x00014a82) popup_preview_text_window_t4_ParamLimits

0x98af,	// (0x00014a82) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0001aadc) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0001aadc) popup_preview_text_window_t

0x992d,	// (0x00014b00) scroll_pane_cp11

0x87e7,	// (0x000139ba) bg_popup_preview_window_pane_g1

0x97c3,	// (0x00014996) bg_popup_preview_window_pane_g2

0x97cb,	// (0x0001499e) bg_popup_preview_window_pane_g3

0x97d3,	// (0x000149a6) bg_popup_preview_window_pane_g4

0x97db,	// (0x000149ae) bg_popup_preview_window_pane_g5

0x97e3,	// (0x000149b6) bg_popup_preview_window_pane_g6

0x97eb,	// (0x000149be) bg_popup_preview_window_pane_g7

0x97f3,	// (0x000149c6) bg_popup_preview_window_pane_g8

0x4044,	// (0x0000f217) aid_popup_width_pane

0x12e6,	// (0x0000c4b9) popup_midp_note_alarm_window_ParamLimits

0x12e6,	// (0x0000c4b9) popup_midp_note_alarm_window

0x6b34,	// (0x00011d07) data_form_pane_ParamLimits

0x0975,	// (0x0000bb48) form_field_data_pane_g1

0x097f,	// (0x0000bb52) form_field_data_pane_t1_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_ParamLimits

0x6b72,	// (0x00011d45) data_form_wide_pane_ParamLimits

0x6b7e,	// (0x00011d51) form_field_data_wide_pane_g1

0x6baa,	// (0x00011d7d) form_field_data_wide_pane_t1_ParamLimits

0x6369,	// (0x0001153c) input_focus_pane_cp6_ParamLimits

0x0ae1,	// (0x0000bcb4) input_popup_find_pane_g1_ParamLimits

0x0ae1,	// (0x0000bcb4) input_popup_find_pane_g1

0x45a0,	// (0x0000f773) aid_navi_side_left_pane

0x45b5,	// (0x0000f788) aid_navi_side_right_pane

0x91e2,	// (0x000143b5) bg_popup_window_pane_cp30_ParamLimits

0x91e2,	// (0x000143b5) bg_popup_window_pane_cp30

0x925c,	// (0x0001442f) popup_midp_note_alarm_window_g1_ParamLimits

0x925c,	// (0x0001442f) popup_midp_note_alarm_window_g1

0x928c,	// (0x0001445f) popup_midp_note_alarm_window_t1_ParamLimits

0x928c,	// (0x0001445f) popup_midp_note_alarm_window_t1

0x932d,	// (0x00014500) popup_midp_note_alarm_window_t2_ParamLimits

0x932d,	// (0x00014500) popup_midp_note_alarm_window_t2

0x93db,	// (0x000145ae) popup_midp_note_alarm_window_t3_ParamLimits

0x93db,	// (0x000145ae) popup_midp_note_alarm_window_t3

0x9403,	// (0x000145d6) popup_midp_note_alarm_window_t4_ParamLimits

0x9403,	// (0x000145d6) popup_midp_note_alarm_window_t4

0x9423,	// (0x000145f6) popup_midp_note_alarm_window_t5_ParamLimits

0x9423,	// (0x000145f6) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0001aa79) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0001aa79) popup_midp_note_alarm_window_t

0x94cf,	// (0x000146a2) wait_bar_pane_cp1_ParamLimits

0x94cf,	// (0x000146a2) wait_bar_pane_cp1

0x5cab,	// (0x00010e7e) wait_anim_pane_copy1

0x5cab,	// (0x00010e7e) wait_border_pane_copy1

0x8ec0,	// (0x00014093) wait_border_pane_g1_copy1

0x6bc4,	// (0x00011d97) form_field_popup_pane_g1

0x0999,	// (0x0000bb6c) form_field_popup_pane_t1_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_cp7_ParamLimits

0x6be6,	// (0x00011db9) list_form_pane_ParamLimits

0x6bf2,	// (0x00011dc5) form_field_popup_wide_pane_g1

0x6bfa,	// (0x00011dcd) form_field_popup_wide_pane_t1_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_cp8_ParamLimits

0x6c0f,	// (0x00011de2) list_form_wide_pane_ParamLimits

0xa0bd,	// (0x00015290) aid_size_cell_graphic_pane

0x0a18,	// (0x0000bbeb) data_form_pane_t1_ParamLimits

0x202c,	// (0x0000d1ff) data_form_wide_pane_t1_ParamLimits

0x171f,	// (0x0000c8f2) bg_status_flat_pane

0x029a,	// (0x0000b46d) title_pane_t1_ParamLimits

0x5d53,	// (0x00010f26) title_pane_t2_ParamLimits

0x5d79,	// (0x00010f4c) title_pane_t3_ParamLimits

0xf573,	// (0x0001a746) title_pane_t_ParamLimits

0x72d7,	// (0x000124aa) level_1_signal_ParamLimits

0x72e4,	// (0x000124b7) level_2_signal_ParamLimits

0x72f1,	// (0x000124c4) level_3_signal_ParamLimits

0x72fe,	// (0x000124d1) level_4_signal_ParamLimits

0x730b,	// (0x000124de) level_5_signal_ParamLimits

0x7318,	// (0x000124eb) level_6_signal_ParamLimits

0x7325,	// (0x000124f8) level_7_signal_ParamLimits

0x72d7,	// (0x000124aa) level_1_battery_ParamLimits

0x72e4,	// (0x000124b7) level_2_battery_ParamLimits

0x72f1,	// (0x000124c4) level_3_battery_ParamLimits

0x72fe,	// (0x000124d1) level_4_battery_ParamLimits

0x730b,	// (0x000124de) level_5_battery_ParamLimits

0x7318,	// (0x000124eb) level_6_battery_ParamLimits

0x7325,	// (0x000124f8) level_7_battery_ParamLimits

0x90e7,	// (0x000142ba) bg_status_flat_pane_g1

0x90ef,	// (0x000142c2) bg_status_flat_pane_g2

0x90f7,	// (0x000142ca) bg_status_flat_pane_g3

0x90ff,	// (0x000142d2) bg_status_flat_pane_g4

0x9107,	// (0x000142da) bg_status_flat_pane_g5

0x910f,	// (0x000142e2) bg_status_flat_pane_g6

0x9117,	// (0x000142ea) bg_status_flat_pane_g7

0x032e,	// (0x0000b501) tabs_3_active_pane_t1_ParamLimits

0x032e,	// (0x0000b501) tabs_3_passive_pane_t1_ParamLimits

0x0348,	// (0x0000b51b) tabs_4_active_pane_t1_ParamLimits

0x0348,	// (0x0000b51b) tabs_4_1_passive_pane_t1_ParamLimits

0x0af7,	// (0x0000bcca) tabs_2_active_pane_t1_ParamLimits

0x0af7,	// (0x0000bcca) tabs_2_passive_pane_t1_ParamLimits

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp4_ParamLimits

0x0b09,	// (0x0000bcdc) tabs_2_long_active_pane_t1_ParamLimits

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp4_ParamLimits

0x4b68,	// (0x0000fd3b) list_single_midp_graphic_pane_t1_ParamLimits

0x5d8b,	// (0x00010f5e) bg_active_tab_pane_cp5_ParamLimits

0x0b1c,	// (0x0000bcef) tabs_3_long_active_pane_t1_ParamLimits

0x7d35,	// (0x00012f08) bg_passive_tab_pane_cp5_ParamLimits

0x4b68,	// (0x0000fd3b) list_single_midp_graphic_pane_t1

0x171f,	// (0x0000c8f2) bg_status_flat_pane_ParamLimits

0x845e,	// (0x00013631) indicator_pane_cp2_ParamLimits

0x845e,	// (0x00013631) indicator_pane_cp2

0x1896,	// (0x0000ca69) navi_pane_srt_ParamLimits

0x1896,	// (0x0000ca69) navi_pane_srt

0x85a6,	// (0x00013779) popup_clock_digital_analogue_window_cp1

0x5e82,	// (0x00011055) indicator_pane_t1

0x79af,	// (0x00012b82) copy_highlight_pane

0x79af,	// (0x00012b82) cursor_graphics_pane

0x79af,	// (0x00012b82) graphic_within_text_pane

0x79af,	// (0x00012b82) link_highlight_pane

0x98f0,	// (0x00014ac3) popup_preview_text_window_t5_ParamLimits

0x98f0,	// (0x00014ac3) popup_preview_text_window_t5

0x7adf,	// (0x00012cb2) cursor_digital_pane

0x7adf,	// (0x00012cb2) cursor_primary_pane

0x7af0,	// (0x00012cc3) cursor_primary_small_pane

0x7af8,	// (0x00012ccb) cursor_secondary_pane

0x7b00,	// (0x00012cd3) cursor_title_pane

0x7adf,	// (0x00012cb2) link_highlight_digital_pane

0x7ae7,	// (0x00012cba) link_highlight_primary_pane

0x7af0,	// (0x00012cc3) link_highlight_primary_small_pane

0x7af8,	// (0x00012ccb) link_highlight_secondary_pane

0x7b00,	// (0x00012cd3) link_highlight_title_pane

0x7adf,	// (0x00012cb2) copy_highlight_digital_pane

0x7adf,	// (0x00012cb2) copy_highlight_primary_pane

0x7af0,	// (0x00012cc3) copy_highlight_primary_small_pane

0x7af8,	// (0x00012ccb) copy_highlight_secondary_pane

0x7b00,	// (0x00012cd3) copy_highlight_title_pane

0x7af8,	// (0x00012ccb) graphic_text_digital_pane

0x9185,	// (0x00014358) graphic_text_primary_pane

0x918e,	// (0x00014361) graphic_text_primary_small_pane

0x7af0,	// (0x00012cc3) graphic_text_secondary_pane

0x7adf,	// (0x00012cb2) graphic_text_title_pane

0x0df6,	// (0x0000bfc9) cursor_primary_pane_g1

0x9177,	// (0x0001434a) cursor_text_primary_t1

0x1bbc,	// (0x0000cd8f) cursor_primary_small_pane_g1

0x9169,	// (0x0001433c) cursor_text_primary_small_t1

0x1bb2,	// (0x0000cd85) cursor_primary_small_pane_g1_copy1

0x9151,	// (0x00014324) cursor_text_primary_small_t1_copy1

0x912f,	// (0x00014302) cursor_text_title_t1

0x1ba8,	// (0x0000cd7b) cursor_title_pane_g1

0x0df6,	// (0x0000bfc9) cursor_digital_pane_g1

0x7b12,	// (0x00012ce5) cursor_text_digital_t1

0x90d0,	// (0x000142a3) link_highlight_primary_pane_g1

0x90d8,	// (0x000142ab) link_highlight_primary_pane_t1

0x7b20,	// (0x00012cf3) link_highlight_primary_small_pane_g1

0x7b28,	// (0x00012cfb) link_highlight_primary_small_pane_t1

0x7b20,	// (0x00012cf3) link_highlight_secondary_pane_g1

0x7b37,	// (0x00012d0a) link_highlight_secondary_pane_t1

0x9044,	// (0x00014217) link_highlight_title_pane_g1

0x904c,	// (0x0001421f) link_highlight_title_pane_t1

0x902d,	// (0x00014200) link_highlight_digital_pane_g1

0x9035,	// (0x00014208) link_highlight_digital_pane_t1

0x8f05,	// (0x000140d8) copy_highlight_primary_pane_g1

0x8f0d,	// (0x000140e0) copy_highlight_primary_pane_t1

0x8edf,	// (0x000140b2) copy_highlight_primary_small_pane_g1

0x8ef6,	// (0x000140c9) copy_highlight_primary_small_pane_t1

0x7b46,	// (0x00012d19) copy_highlight_secondary_pane_g1

0x7b4e,	// (0x00012d21) copy_highlight_secondary_pane_t1

0x8edf,	// (0x000140b2) copy_highlight_title_pane_g1

0x8ee7,	// (0x000140ba) copy_highlight_title_pane_t1

0x8f05,	// (0x000140d8) copy_highlight_digital_pane_g1

0xa28b,	// (0x0001545e) copy_highlight_digital_pane_t1

0xa1df,	// (0x000153b2) graphic_text_primary_pane_g1

0xa26f,	// (0x00015442) graphic_text_primary_pane_t1

0xa27d,	// (0x00015450) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0001aba8) graphic_text_primary_pane_t

0xa24b,	// (0x0001541e) graphic_text_primary_small_pane_g1

0xa253,	// (0x00015426) graphic_text_primary_small_pane_t1

0xa261,	// (0x00015434) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0001aba3) graphic_text_primary_small_pane_t

0xa227,	// (0x000153fa) graphic_text_secondary_pane_g1

0xa22f,	// (0x00015402) graphic_text_secondary_pane_t1

0xa23d,	// (0x00015410) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0001ab9e) graphic_text_secondary_pane_t

0xa203,	// (0x000153d6) graphic_text_title_pane_g1

0xa20b,	// (0x000153de) graphic_text_title_pane_t1

0xa219,	// (0x000153ec) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0001ab99) graphic_text_title_pane_t

0xa1df,	// (0x000153b2) graphic_text_digital_pane_g1

0xa1e7,	// (0x000153ba) graphic_text_digital_pane_t1

0xa1f5,	// (0x000153c8) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0001ab94) graphic_text_digital_pane_t

0x5d8b,	// (0x00010f5e) navi_icon_pane_srt_ParamLimits

0x5d8b,	// (0x00010f5e) navi_icon_pane_srt

0x5cab,	// (0x00010e7e) navi_midp_pane_srt

0x5cab,	// (0x00010e7e) navi_navi_pane_srt

0x5d8b,	// (0x00010f5e) navi_text_pane_srt_ParamLimits

0x5d8b,	// (0x00010f5e) navi_text_pane_srt

0xa1aa,	// (0x0001537d) navi_navi_icon_text_pane_srt

0xa1b2,	// (0x00015385) navi_navi_pane_srt_g1_ParamLimits

0xa1b2,	// (0x00015385) navi_navi_pane_srt_g1

0xa1c4,	// (0x00015397) navi_navi_pane_srt_g2_ParamLimits

0xa1c4,	// (0x00015397) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0001ab8f) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0001ab8f) navi_navi_pane_srt_g

0xa1d6,	// (0x000153a9) navi_navi_tabs_pane_srt

0xa1aa,	// (0x0001537d) navi_navi_text_pane_srt

0xa1aa,	// (0x0001537d) navi_navi_volume_pane_srt

0xa19b,	// (0x0001536e) navi_navi_text_pane_srt_t1

0x4ee8,	// (0x000100bb) navi_navi_volume_pane_srt_g1

0x4ef0,	// (0x000100c3) volume_small_pane_srt_ParamLimits

0x4ef0,	// (0x000100c3) volume_small_pane_srt

0x4880,	// (0x0000fa53) volume_small_pane_srt_g1_ParamLimits

0x4880,	// (0x0000fa53) volume_small_pane_srt_g1

0x4890,	// (0x0000fa63) volume_small_pane_srt_g2_ParamLimits

0x4890,	// (0x0000fa63) volume_small_pane_srt_g2

0x48a1,	// (0x0000fa74) volume_small_pane_srt_g3_ParamLimits

0x48a1,	// (0x0000fa74) volume_small_pane_srt_g3

0x48b2,	// (0x0000fa85) volume_small_pane_srt_g4_ParamLimits

0x48b2,	// (0x0000fa85) volume_small_pane_srt_g4

0x48c3,	// (0x0000fa96) volume_small_pane_srt_g5_ParamLimits

0x48c3,	// (0x0000fa96) volume_small_pane_srt_g5

0x48d4,	// (0x0000faa7) volume_small_pane_srt_g6_ParamLimits

0x48d4,	// (0x0000faa7) volume_small_pane_srt_g6

0x48e5,	// (0x0000fab8) volume_small_pane_srt_g7_ParamLimits

0x48e5,	// (0x0000fab8) volume_small_pane_srt_g7

0x48f6,	// (0x0000fac9) volume_small_pane_srt_g8_ParamLimits

0x48f6,	// (0x0000fac9) volume_small_pane_srt_g8

0x4907,	// (0x0000fada) volume_small_pane_srt_g9_ParamLimits

0x4907,	// (0x0000fada) volume_small_pane_srt_g9

0x4918,	// (0x0000faeb) volume_small_pane_srt_g10_ParamLimits

0x4918,	// (0x0000faeb) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001a943) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001a943) volume_small_pane_srt_g

0x6173,	// (0x00011346) query_popup_data_pane_cp2

0xa181,	// (0x00015354) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa181,	// (0x00015354) navi_navi_icon_text_pane_srt_t1

0x9185,	// (0x00014358) navi_tabs_2_long_pane_srt

0x9185,	// (0x00014358) navi_tabs_2_pane_srt

0x9185,	// (0x00014358) navi_tabs_3_long_pane_srt

0x9185,	// (0x00014358) navi_tabs_3_pane_srt

0x9185,	// (0x00014358) navi_tabs_4_pane_srt

0x4ec8,	// (0x0001009b) tabs_2_active_pane_srt_ParamLimits

0x4ec8,	// (0x0001009b) tabs_2_active_pane_srt

0x4ed8,	// (0x000100ab) tabs_2_passive_pane_srt_ParamLimits

0x4ed8,	// (0x000100ab) tabs_2_passive_pane_srt

0x8901,	// (0x00013ad4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8901,	// (0x00013ad4) bg_passive_tab_pane_cp1_srt

0xa14d,	// (0x00015320) bg_passive_tab_pane_g1_cp1_srt

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp1_srt

0xa156,	// (0x00015329) bg_passive_tab_pane_g3_cp1_srt

0x6020,	// (0x000111f3) bg_active_tab_pane_cp1_srt_ParamLimits

0x6020,	// (0x000111f3) bg_active_tab_pane_cp1_srt

0xa15f,	// (0x00015332) tabs_2_active_pane_srt_g1

0x2164,	// (0x0000d337) tabs_2_active_pane_srt_t1_ParamLimits

0x2164,	// (0x0000d337) tabs_2_active_pane_srt_t1

0xa14d,	// (0x00015320) bg_active_tab_pane_g1_cp1_srt

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp1_srt

0xa156,	// (0x00015329) bg_active_tab_pane_g3_cp1_srt

0x4e95,	// (0x00010068) tabs_3_active_pane_srt_ParamLimits

0x4e95,	// (0x00010068) tabs_3_active_pane_srt

0x4ea6,	// (0x00010079) tabs_3_passive_pane_cp_srt_ParamLimits

0x4ea6,	// (0x00010079) tabs_3_passive_pane_cp_srt

0x4eb7,	// (0x0001008a) tabs_3_passive_pane_srt_ParamLimits

0x4eb7,	// (0x0001008a) tabs_3_passive_pane_srt

0x8901,	// (0x00013ad4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8901,	// (0x00013ad4) bg_passive_tab_pane_cp2_srt

0x7b5d,	// (0x00012d30) bg_passive_tab_pane_g1_cp2_srt

0x75f7,	// (0x000127ca) bg_passive_tab_pane_g2_cp2_srt

0x7b66,	// (0x00012d39) bg_passive_tab_pane_g3_cp2_srt

0x6020,	// (0x000111f3) bg_active_tab_pane_cp2_srt_ParamLimits

0x6020,	// (0x000111f3) bg_active_tab_pane_cp2_srt

0xa133,	// (0x00015306) tabs_3_active_pane_srt_g1

0x214e,	// (0x0000d321) tabs_3_active_pane_srt_t1_ParamLimits

0x214e,	// (0x0000d321) tabs_3_active_pane_srt_t1

0x7b5d,	// (0x00012d30) bg_active_tab_pane_g1_cp2_srt

0x75f7,	// (0x000127ca) bg_active_tab_pane_g2_cp2_srt

0x7b66,	// (0x00012d39) bg_active_tab_pane_g3_cp2_srt

0x4e4d,	// (0x00010020) tabs_4_active_pane_srt_ParamLimits

0x4e4d,	// (0x00010020) tabs_4_active_pane_srt

0x4e5f,	// (0x00010032) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4e5f,	// (0x00010032) tabs_4_passive_pane_cp2_srt

0x7cbb,	// (0x00012e8e) aid_size_cell_toolbar

0x9cd3,	// (0x00014ea6) main_idle_act_pane_ParamLimits

0x7ed4,	// (0x000130a7) popup_large_graphic_colour_window_ParamLimits

0x15ea,	// (0x0000c7bd) popup_toolbar_window_ParamLimits

0x15ea,	// (0x0000c7bd) popup_toolbar_window

0x9ed5,	// (0x000150a8) list_single_graphic_2heading_pane_ParamLimits

0x9ed5,	// (0x000150a8) list_single_graphic_2heading_pane

0x7086,	// (0x00012259) aid_size_cell_apps_grid_lsc_pane

0x7098,	// (0x0001226b) aid_size_cell_apps_grid_prt_pane

0x7d35,	// (0x00012f08) bg_wml_button_pane_cp1_ParamLimits

0x7d35,	// (0x00012f08) bg_wml_button_pane_cp1

0x1b3c,	// (0x0000cd0f) form_midp_field_text_pane_t1_ParamLimits

0x8901,	// (0x00013ad4) input_focus_pane_cp050_ParamLimits

0x8b75,	// (0x00013d48) list_midp_form_text_pane_ParamLimits

0x8b13,	// (0x00013ce6) input_focus_pane_cp051_ParamLimits

0x8b27,	// (0x00013cfa) list_midp_choice_pane_ParamLimits

0x1ad1,	// (0x0000cca4) list_single_2graphic_pane_cp3_ParamLimits

0x1ad1,	// (0x0000cca4) list_single_2graphic_pane_cp3

0x1ae7,	// (0x0000ccba) list_single_midp_graphic_pane_ParamLimits

0x1ae7,	// (0x0000ccba) list_single_midp_graphic_pane

0x4a6d,	// (0x0000fc40) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a6d,	// (0x0000fc40) list_single_graphic_2heading_pane_g1

0x4a79,	// (0x0000fc4c) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a79,	// (0x0000fc4c) list_single_graphic_2heading_pane_g4

0x4a85,	// (0x0000fc58) list_single_graphic_2heading_pane_g5_ParamLimits

0x4a85,	// (0x0000fc58) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001a996) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001a996) list_single_graphic_2heading_pane_g

0x4a91,	// (0x0000fc64) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a91,	// (0x0000fc64) list_single_graphic_2heading_pane_t1

0x4aa5,	// (0x0000fc78) list_single_graphic_2heading_pane_t2_ParamLimits

0x4aa5,	// (0x0000fc78) list_single_graphic_2heading_pane_t2

0x4ac1,	// (0x0000fc94) list_single_graphic_2heading_pane_t3_ParamLimits

0x4ac1,	// (0x0000fc94) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001a99d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001a99d) list_single_graphic_2heading_pane_t

0x8703,	// (0x000138d6) bg_popup_sub_pane_cp2

0x872d,	// (0x00013900) grid_toobar_pane

0x4ad9,	// (0x0000fcac) cell_toolbar_pane_ParamLimits

0x4ad9,	// (0x0000fcac) cell_toolbar_pane

0x878b,	// (0x0001395e) cell_toolbar_pane_g1_ParamLimits

0x878b,	// (0x0001395e) cell_toolbar_pane_g1

0x879f,	// (0x00013972) cell_toolbar_pane_g2_ParamLimits

0x879f,	// (0x00013972) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001a9ab) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001a9ab) cell_toolbar_pane_g

0x87c1,	// (0x00013994) grid_highlight_pane_cp2_ParamLimits

0x87c1,	// (0x00013994) grid_highlight_pane_cp2

0x87db,	// (0x000139ae) toolbar_button_pane

0x87e7,	// (0x000139ba) toolbar_button_pane_g1

0x87ef,	// (0x000139c2) toolbar_button_pane_g2

0x87f7,	// (0x000139ca) toolbar_button_pane_g3

0x87ff,	// (0x000139d2) toolbar_button_pane_g4

0x8807,	// (0x000139da) toolbar_button_pane_g5

0x880f,	// (0x000139e2) toolbar_button_pane_g6

0x8817,	// (0x000139ea) toolbar_button_pane_g7

0x881f,	// (0x000139f2) toolbar_button_pane_g8

0x8827,	// (0x000139fa) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001a9b0) toolbar_button_pane_g

0x4b11,	// (0x0000fce4) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4b11,	// (0x0000fce4) list_single_2graphic_pane_g1_cp3

0xe12a,	// (0x000192fd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe12a,	// (0x000192fd) list_single_2graphic_pane_g2_cp3

0x4b2e,	// (0x0000fd01) list_single_2graphic_pane_g3_cp3

0x4b36,	// (0x0000fd09) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4b36,	// (0x0000fd09) list_single_2graphic_pane_g4_cp3

0x4b42,	// (0x0000fd15) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4b42,	// (0x0000fd15) list_single_2graphic_pane_t1_cp3

0x4b5c,	// (0x0000fd2f) list_single_midp_graphic_pane_g2_ParamLimits

0x4b5c,	// (0x0000fd2f) list_single_midp_graphic_pane_g2

0x7cc3,	// (0x00012e96) aid_zoom_text_primary

0x7ccb,	// (0x00012e9e) aid_zoom_text_secondary

0x7c1a,	// (0x00012ded) status_small_pane_g7_ParamLimits

0x7c1a,	// (0x00012ded) status_small_pane_g7

0x7c3d,	// (0x00012e10) status_small_pane_t1_ParamLimits

0x0276,	// (0x0000b449) title_pane_g2

0x0003,

0xf56a,	// (0x0001a73d) title_pane_g

0x0501,	// (0x0000b6d4) aid_size_cell_colour_1_pane_ParamLimits

0x0501,	// (0x0000b6d4) aid_size_cell_colour_1_pane

0x0515,	// (0x0000b6e8) aid_size_cell_colour_2_pane_ParamLimits

0x0515,	// (0x0000b6e8) aid_size_cell_colour_2_pane

0x0529,	// (0x0000b6fc) aid_size_cell_colour_3_pane_ParamLimits

0x0529,	// (0x0000b6fc) aid_size_cell_colour_3_pane

0x053d,	// (0x0000b710) aid_size_cell_colour_4_pane_ParamLimits

0x053d,	// (0x0000b710) aid_size_cell_colour_4_pane

0x44dc,	// (0x0000f6af) title_pane_stacon_g1_ParamLimits

0x44dc,	// (0x0000f6af) title_pane_stacon_g1

0x8f64,	// (0x00014137) popup_note_wait_window_g3_ParamLimits

0x8f64,	// (0x00014137) popup_note_wait_window_g3

0x8fda,	// (0x000141ad) popup_note_wait_window_t5_ParamLimits

0x8fda,	// (0x000141ad) popup_note_wait_window_t5

0x5cab,	// (0x00010e7e) main_feb_china_hwr_fs_writing_pane

0x1012,	// (0x0000c1e5) popup_feb_china_hwr_fs_window_ParamLimits

0x1012,	// (0x0000c1e5) popup_feb_china_hwr_fs_window

0xe13b,	// (0x0001930e) aid_size_cell_hwr_fs_ParamLimits

0xe13b,	// (0x0001930e) aid_size_cell_hwr_fs

0x8901,	// (0x00013ad4) bg_popup_sub_pane_cp3_ParamLimits

0x8901,	// (0x00013ad4) bg_popup_sub_pane_cp3

0xe150,	// (0x00019323) grid_hwr_fs_pane_ParamLimits

0xe150,	// (0x00019323) grid_hwr_fs_pane

0x4bab,	// (0x0000fd7e) linegrid_hwr_fs_pane_ParamLimits

0x4bab,	// (0x0000fd7e) linegrid_hwr_fs_pane

0xe168,	// (0x0001933b) cell_hwr_fs_pane_ParamLimits

0xe168,	// (0x0001933b) cell_hwr_fs_pane

0x890d,	// (0x00013ae0) linegrid_hwr_fs_pane_g1_ParamLimits

0x890d,	// (0x00013ae0) linegrid_hwr_fs_pane_g1

0x1a97,	// (0x0000cc6a) linegrid_hwr_fs_pane_g2_ParamLimits

0x1a97,	// (0x0000cc6a) linegrid_hwr_fs_pane_g2

0x892b,	// (0x00013afe) linegrid_hwr_fs_pane_g3_ParamLimits

0x892b,	// (0x00013afe) linegrid_hwr_fs_pane_g3

0x4bdd,	// (0x0000fdb0) linegrid_hwr_fs_pane_g4_ParamLimits

0x4bdd,	// (0x0000fdb0) linegrid_hwr_fs_pane_g4

0x4bf7,	// (0x0000fdca) linegrid_hwr_fs_pane_g5_ParamLimits

0x4bf7,	// (0x0000fdca) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0001a9d6) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0001a9d6) linegrid_hwr_fs_pane_g

0x8937,	// (0x00013b0a) cell_hwr_fs_pane_g1_ParamLimits

0x8937,	// (0x00013b0a) cell_hwr_fs_pane_g1

0x863c,	// (0x0001380f) cell_hwr_fs_pane_g2_ParamLimits

0x863c,	// (0x0001380f) cell_hwr_fs_pane_g2

0x1aa9,	// (0x0000cc7c) cell_hwr_fs_pane_g3_ParamLimits

0x1aa9,	// (0x0000cc7c) cell_hwr_fs_pane_g3

0x1ab6,	// (0x0000cc89) cell_hwr_fs_pane_g4_ParamLimits

0x1ab6,	// (0x0000cc89) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0001a9e1) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0001a9e1) cell_hwr_fs_pane_g

0xe18e,	// (0x00019361) cell_hwr_fs_pane_t1

0x5cab,	// (0x00010e7e) grid_highlight_pane_cp6

0x5cab,	// (0x00010e7e) main_idle_act2_pane

0x6e3e,	// (0x00012011) aid_inside_area_popup_secondary

0x1d18,	// (0x0000ceeb) aid_inside_area_window_primary_ParamLimits

0x1d18,	// (0x0000ceeb) aid_inside_area_window_primary

0xa29a,	// (0x0001546d) ai2_news_ticker_pane

0xa2a2,	// (0x00015475) aid_size_cell_ai1_link_ParamLimits

0xa2a2,	// (0x00015475) aid_size_cell_ai1_link

0xa2bc,	// (0x0001548f) popup_ai2_data_window_ParamLimits

0xa2bc,	// (0x0001548f) popup_ai2_data_window

0xa2d0,	// (0x000154a3) popup_ai2_link_window_ParamLimits

0xa2d0,	// (0x000154a3) popup_ai2_link_window

0x8901,	// (0x00013ad4) bg_popup_sub_pane_cp4_ParamLimits

0x8901,	// (0x00013ad4) bg_popup_sub_pane_cp4

0xa2e4,	// (0x000154b7) grid_ai2_link_pane_ParamLimits

0xa2e4,	// (0x000154b7) grid_ai2_link_pane

0xa2fb,	// (0x000154ce) popup_ai2_link_window_g1_ParamLimits

0xa2fb,	// (0x000154ce) popup_ai2_link_window_g1

0xa307,	// (0x000154da) popup_ai2_link_window_g2_ParamLimits

0xa307,	// (0x000154da) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0001abad) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0001abad) popup_ai2_link_window_g

0xa316,	// (0x000154e9) ai2_mp_button_pane

0xa31e,	// (0x000154f1) ai2_mp_volume_pane

0x8b13,	// (0x00013ce6) bg_popup_sub_pane_cp5_ParamLimits

0x8b13,	// (0x00013ce6) bg_popup_sub_pane_cp5

0xa326,	// (0x000154f9) heading_ai2_gene_pane_ParamLimits

0xa326,	// (0x000154f9) heading_ai2_gene_pane

0xa332,	// (0x00015505) list_ai2_gene_pane_ParamLimits

0xa332,	// (0x00015505) list_ai2_gene_pane

0xa37a,	// (0x0001554d) cell_ai2_link_pane_ParamLimits

0xa37a,	// (0x0001554d) cell_ai2_link_pane

0xa390,	// (0x00015563) cell_ai2_link_pane_g1

0x5cab,	// (0x00010e7e) grid_highlight_pane_cp7

0x4f05,	// (0x000100d8) ai2_mp_volume_pane_g1

0xa461,	// (0x00015634) ai2_mp_volume_pane_g2

0xa3d6,	// (0x000155a9) list_ai2_gene_pane_t1

0xa469,	// (0x0001563c) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0001abc6) ai2_mp_volume_pane_g

0x4f0d,	// (0x000100e0) volume_small_pane_cp3

0xa471,	// (0x00015644) aid_size_cell_ai2_button

0xa479,	// (0x0001564c) grid_ai2_button_pane

0xa482,	// (0x00015655) cell_ai2_button_pane_ParamLimits

0xa482,	// (0x00015655) cell_ai2_button_pane

0x5ca1,	// (0x00010e74) cell_ai2_button_pane_g1

0x5cab,	// (0x00010e7e) grid_highlight_pane_cp8

0xa421,	// (0x000155f4) ai2_gene_pane_t1_ParamLimits

0xa421,	// (0x000155f4) ai2_gene_pane_t1

0x0f88,	// (0x0000c15b) aid_height_parent_landscape

0x1eda,	// (0x0000d0ad) aid_height_set_list

0x9cd3,	// (0x00014ea6) aid_size_parent

0xa0bd,	// (0x00015290) aid_size_cell_graphic_pane_ParamLimits

0xa342,	// (0x00015515) popup_ai2_data_window_g1_ParamLimits

0xa342,	// (0x00015515) popup_ai2_data_window_g1

0xa34e,	// (0x00015521) ai2_news_ticker_pane_g1

0xa356,	// (0x00015529) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0001abb2) ai2_news_ticker_pane_g

0xa35e,	// (0x00015531) ai2_news_ticker_pane_t1

0xa36c,	// (0x0001553f) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0001abb7) ai2_news_ticker_pane_t

0xa399,	// (0x0001556c) heading_ai2_gene_pane_g1

0xa3a1,	// (0x00015574) heading_ai2_gene_pane_t1_ParamLimits

0xa3a1,	// (0x00015574) heading_ai2_gene_pane_t1

0xa3b6,	// (0x00015589) list_highlight_pane_cp6

0xa3be,	// (0x00015591) ai2_gene_pane_ParamLimits

0xa3be,	// (0x00015591) ai2_gene_pane

0xa3e4,	// (0x000155b7) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0001abbc) list_ai2_gene_pane_t

0xa3f2,	// (0x000155c5) list_highlight_pane_cp8_ParamLimits

0xa3f2,	// (0x000155c5) list_highlight_pane_cp8

0xa403,	// (0x000155d6) ai2_gene_pane_g1_ParamLimits

0xa403,	// (0x000155d6) ai2_gene_pane_g1

0xa415,	// (0x000155e8) ai2_gene_pane_g2_ParamLimits

0xa415,	// (0x000155e8) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0001abc1) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0001abc1) ai2_gene_pane_g

0x658e,	// (0x00011761) scroll_pane_cp12

0xe0e9,	// (0x000192bc) control_pane_t3_ParamLimits

0xe0e9,	// (0x000192bc) control_pane_t3

0x7c2e,	// (0x00012e01) status_small_pane_g8_ParamLimits

0x7c2e,	// (0x00012e01) status_small_pane_g8

0x10a5,	// (0x0000c278) popup_find_window_ParamLimits

0x1320,	// (0x0000c4f3) popup_note_image_window_ParamLimits

0x8769,	// (0x0001393c) list_double2_graphic_pane_vc_g1_ParamLimits

0x8769,	// (0x0001393c) list_double2_graphic_pane_vc_g1

0x6660,	// (0x00011833) list_double2_graphic_pane_vc_g2_ParamLimits

0x6660,	// (0x00011833) list_double2_graphic_pane_vc_g2

0x666c,	// (0x0001183f) list_double2_graphic_pane_vc_g3_ParamLimits

0x666c,	// (0x0001183f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001a9a4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a9a4) list_double2_graphic_pane_vc_g

0x8775,	// (0x00013948) list_double2_graphic_pane_vc_t1_ParamLimits

0x8775,	// (0x00013948) list_double2_graphic_pane_vc_t1

0x6660,	// (0x00011833) list_single_heading_pane_vc_g1_ParamLimits

0x6660,	// (0x00011833) list_single_heading_pane_vc_g1

0x666c,	// (0x0001183f) list_single_heading_pane_vc_g2_ParamLimits

0x666c,	// (0x0001183f) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_single_heading_pane_vc_g

0x882f,	// (0x00013a02) list_single_heading_pane_vc_t1_ParamLimits

0x882f,	// (0x00013a02) list_single_heading_pane_vc_t1

0x8845,	// (0x00013a18) list_single_heading_pane_vc_t2_ParamLimits

0x8845,	// (0x00013a18) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0001a9c5) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0001a9c5) list_single_heading_pane_vc_t

0x8859,	// (0x00013a2c) list_setting_number_pane_vc_g1_ParamLimits

0x8859,	// (0x00013a2c) list_setting_number_pane_vc_g1

0x8865,	// (0x00013a38) list_setting_number_pane_vc_g2_ParamLimits

0x8865,	// (0x00013a38) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001a9ca) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001a9ca) list_setting_number_pane_vc_g

0x8871,	// (0x00013a44) list_setting_number_pane_vc_t1_ParamLimits

0x8871,	// (0x00013a44) list_setting_number_pane_vc_t1

0x8885,	// (0x00013a58) list_setting_number_pane_vc_t2_ParamLimits

0x8885,	// (0x00013a58) list_setting_number_pane_vc_t2

0x88a1,	// (0x00013a74) list_setting_number_pane_vc_t3_ParamLimits

0x88a1,	// (0x00013a74) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0001a9cf) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001a9cf) list_setting_number_pane_vc_t

0x88c9,	// (0x00013a9c) set_value_pane_vc_ParamLimits

0x88c9,	// (0x00013a9c) set_value_pane_vc

0x9ed5,	// (0x000150a8) list_double2_graphic_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double2_graphic_pane_vc

0x9ed5,	// (0x000150a8) list_double2_large_graphic_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double2_large_graphic_pane_vc

0x9ed5,	// (0x000150a8) list_double2_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double2_pane_vc

0x9ed5,	// (0x000150a8) list_double_graphic_heading_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_graphic_heading_pane_vc

0x9ed5,	// (0x000150a8) list_double_graphic_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_graphic_pane_vc

0x9ed5,	// (0x000150a8) list_double_heading_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_heading_pane_vc

0x9ed5,	// (0x000150a8) list_double_large_graphic_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_large_graphic_pane_vc

0x9ed5,	// (0x000150a8) list_double_number_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_number_pane_vc

0x9ed5,	// (0x000150a8) list_double_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_pane_vc

0x9ed5,	// (0x000150a8) list_double_time_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_double_time_pane_vc

0x9ed5,	// (0x000150a8) list_setting_number_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_setting_number_pane_vc

0x9ed5,	// (0x000150a8) list_setting_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_setting_pane_vc

0x9ed5,	// (0x000150a8) list_single_graphic_heading_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_single_graphic_heading_pane_vc

0x9ed5,	// (0x000150a8) list_single_heading_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_single_heading_pane_vc

0x9ed5,	// (0x000150a8) list_single_number_heading_pane_vc_ParamLimits

0x9ed5,	// (0x000150a8) list_single_number_heading_pane_vc

0x8769,	// (0x0001393c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8769,	// (0x0001393c) list_double_graphic_heading_pane_vc_g1

0x6660,	// (0x00011833) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6660,	// (0x00011833) list_double_graphic_heading_pane_vc_g2

0x666c,	// (0x0001183f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x666c,	// (0x0001183f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001a9a4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a9a4) list_double_graphic_heading_pane_vc_g

0xa4b6,	// (0x00015689) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa4b6,	// (0x00015689) list_double_graphic_heading_pane_vc_t1

0x882f,	// (0x00013a02) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x882f,	// (0x00013a02) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001abcd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0001abcd) list_double_graphic_heading_pane_vc_t

0x8859,	// (0x00013a2c) list_setting_pane_vc_g1_ParamLimits

0x8859,	// (0x00013a2c) list_setting_pane_vc_g1

0x8865,	// (0x00013a38) list_setting_pane_vc_g2_ParamLimits

0x8865,	// (0x00013a38) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001a9ca) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001a9ca) list_setting_pane_vc_g

0xa6ae,	// (0x00015881) list_setting_pane_vc_t1_ParamLimits

0xa6ae,	// (0x00015881) list_setting_pane_vc_t1

0xa6c2,	// (0x00015895) list_setting_pane_vc_t2_ParamLimits

0xa6c2,	// (0x00015895) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001ac10) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001ac10) list_setting_pane_vc_t

0x88c9,	// (0x00013a9c) set_value_pane_cp_vc_ParamLimits

0x88c9,	// (0x00013a9c) set_value_pane_cp_vc

0x6660,	// (0x00011833) list_single_number_heading_pane_vc_g1_ParamLimits

0x6660,	// (0x00011833) list_single_number_heading_pane_vc_g1

0x666c,	// (0x0001183f) list_single_number_heading_pane_vc_g2_ParamLimits

0x666c,	// (0x0001183f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_single_number_heading_pane_vc_g

0x882f,	// (0x00013a02) list_single_number_heading_pane_vc_t1_ParamLimits

0x882f,	// (0x00013a02) list_single_number_heading_pane_vc_t1

0xa6e4,	// (0x000158b7) list_single_number_heading_pane_vc_t2_ParamLimits

0xa6e4,	// (0x000158b7) list_single_number_heading_pane_vc_t2

0xa6f8,	// (0x000158cb) list_single_number_heading_pane_vc_t3_ParamLimits

0xa6f8,	// (0x000158cb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0001ac15) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001ac15) list_single_number_heading_pane_vc_t

0x8769,	// (0x0001393c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8769,	// (0x0001393c) list_single_graphic_heading_pane_vc_g1

0x6660,	// (0x00011833) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6660,	// (0x00011833) list_single_graphic_heading_pane_vc_g4

0x666c,	// (0x0001183f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x666c,	// (0x0001183f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001a9a4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a9a4) list_single_graphic_heading_pane_vc_g

0x882f,	// (0x00013a02) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x882f,	// (0x00013a02) list_single_graphic_heading_pane_vc_t1

0xa70a,	// (0x000158dd) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa70a,	// (0x000158dd) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0001ac1c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001ac1c) list_single_graphic_heading_pane_vc_t

0x6660,	// (0x00011833) list_double2_pane_vc_g1_ParamLimits

0x6660,	// (0x00011833) list_double2_pane_vc_g1

0x666c,	// (0x0001183f) list_double2_pane_vc_g2_ParamLimits

0x666c,	// (0x0001183f) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_double2_pane_vc_g

0xa71e,	// (0x000158f1) list_double2_pane_vc_t1_ParamLimits

0xa71e,	// (0x000158f1) list_double2_pane_vc_t1

0xa734,	// (0x00015907) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa734,	// (0x00015907) list_double2_large_graphic_pane_vc_g1

0x6660,	// (0x00011833) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6660,	// (0x00011833) list_double2_large_graphic_pane_vc_g2

0x666c,	// (0x0001183f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x666c,	// (0x0001183f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0001a7d4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0001a7d4) list_double2_large_graphic_pane_vc_g

0xa740,	// (0x00015913) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa740,	// (0x00015913) list_double2_large_graphic_pane_vc_t1

0xa756,	// (0x00015929) list_double_time_pane_vc_g1_ParamLimits

0xa756,	// (0x00015929) list_double_time_pane_vc_g1

0xa762,	// (0x00015935) list_double_time_pane_vc_g2_ParamLimits

0xa762,	// (0x00015935) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0001ac21) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001ac21) list_double_time_pane_vc_g

0xa76e,	// (0x00015941) list_double_time_pane_vc_t1_ParamLimits

0xa76e,	// (0x00015941) list_double_time_pane_vc_t1

0xa787,	// (0x0001595a) list_double_time_pane_vc_t2_ParamLimits

0xa787,	// (0x0001595a) list_double_time_pane_vc_t2

0xa7a7,	// (0x0001597a) list_double_time_pane_vc_t3_ParamLimits

0xa7a7,	// (0x0001597a) list_double_time_pane_vc_t3

0xa7bf,	// (0x00015992) list_double_time_pane_vc_t4_ParamLimits

0xa7bf,	// (0x00015992) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0001ac26) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0001ac26) list_double_time_pane_vc_t

0x6660,	// (0x00011833) list_double_pane_vc_g1_ParamLimits

0x6660,	// (0x00011833) list_double_pane_vc_g1

0x666c,	// (0x0001183f) list_double_pane_vc_g2_ParamLimits

0x666c,	// (0x0001183f) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_double_pane_vc_g

0xa7d3,	// (0x000159a6) list_double_pane_vc_t1_ParamLimits

0xa7d3,	// (0x000159a6) list_double_pane_vc_t1

0xa7e5,	// (0x000159b8) list_double_pane_vc_t2_ParamLimits

0xa7e5,	// (0x000159b8) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001ac2f) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001ac2f) list_double_pane_vc_t

0x6660,	// (0x00011833) list_double_number_pane_vc_g1_ParamLimits

0x6660,	// (0x00011833) list_double_number_pane_vc_g1

0x666c,	// (0x0001183f) list_double_number_pane_vc_g2_ParamLimits

0x666c,	// (0x0001183f) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_double_number_pane_vc_g

0xa7fd,	// (0x000159d0) list_double_number_pane_vc_t1_ParamLimits

0xa7fd,	// (0x000159d0) list_double_number_pane_vc_t1

0xa811,	// (0x000159e4) list_double_number_pane_vc_t2_ParamLimits

0xa811,	// (0x000159e4) list_double_number_pane_vc_t2

0xa7e5,	// (0x000159b8) list_double_number_pane_vc_t3_ParamLimits

0xa7e5,	// (0x000159b8) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0001ac34) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0001ac34) list_double_number_pane_vc_t

0xa823,	// (0x000159f6) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa823,	// (0x000159f6) list_double_large_graphic_pane_vc_g1

0xa82f,	// (0x00015a02) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa82f,	// (0x00015a02) list_double_large_graphic_pane_vc_g2

0x666c,	// (0x0001183f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x666c,	// (0x0001183f) list_double_large_graphic_pane_vc_g3

0xa83e,	// (0x00015a11) list_double_large_graphic_pane_vc_g4_ParamLimits

0xa83e,	// (0x00015a11) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0001ac3b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0001ac3b) list_double_large_graphic_pane_vc_g

0xa84a,	// (0x00015a1d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xa84a,	// (0x00015a1d) list_double_large_graphic_pane_vc_t1

0xa85c,	// (0x00015a2f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xa85c,	// (0x00015a2f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001ac44) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001ac44) list_double_large_graphic_pane_vc_t

0x6660,	// (0x00011833) list_double_heading_pane_vc_g1_ParamLimits

0x6660,	// (0x00011833) list_double_heading_pane_vc_g1

0x666c,	// (0x0001183f) list_double_heading_pane_vc_g2_ParamLimits

0x666c,	// (0x0001183f) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a7b7) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a7b7) list_double_heading_pane_vc_g

0xa875,	// (0x00015a48) list_double_heading_pane_vc_t1_ParamLimits

0xa875,	// (0x00015a48) list_double_heading_pane_vc_t1

0x882f,	// (0x00013a02) list_double_heading_pane_vc_t2_ParamLimits

0x882f,	// (0x00013a02) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0001ac49) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0001ac49) list_double_heading_pane_vc_t

0x8769,	// (0x0001393c) list_double_graphic_pane_vc_g1_ParamLimits

0x8769,	// (0x0001393c) list_double_graphic_pane_vc_g1

0xa889,	// (0x00015a5c) list_double_graphic_pane_vc_g2_ParamLimits

0xa889,	// (0x00015a5c) list_double_graphic_pane_vc_g2

0xa898,	// (0x00015a6b) list_double_graphic_pane_vc_g3_ParamLimits

0xa898,	// (0x00015a6b) list_double_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x0001ac4e) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001ac4e) list_double_graphic_pane_vc_g

0xa8a4,	// (0x00015a77) list_double_graphic_pane_vc_t1_ParamLimits

0xa8a4,	// (0x00015a77) list_double_graphic_pane_vc_t1

0xa7e5,	// (0x000159b8) list_double_graphic_pane_vc_t2_ParamLimits

0xa7e5,	// (0x000159b8) list_double_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x0001ac55) list_double_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x0001ac55) list_double_graphic_pane_vc_t

0x4050,	// (0x0000f223) aid_size_cell_fastswap

0xde1f,	// (0x00018ff2) aid_size_cell_touch_ParamLimits

0xde1f,	// (0x00018ff2) aid_size_cell_touch

0x42bd,	// (0x0000f490) popup_fast_swap_wide_window_ParamLimits

0x42bd,	// (0x0000f490) popup_fast_swap_wide_window

0xdf6a,	// (0x0001913d) touch_pane_ParamLimits

0xdf6a,	// (0x0001913d) touch_pane

0x6a8c,	// (0x00011c5f) button_value_adjust_pane_cp2

0x6a8c,	// (0x00011c5f) button_value_adjust_pane_cp4

0x6aac,	// (0x00011c7f) form_field_data_pane_cp2

0x0936,	// (0x0000bb09) form_field_data_wide_pane_cp2

0x7159,	// (0x0001232c) bg_scroll_pane_ParamLimits

0x463f,	// (0x0000f812) scroll_handle_pane_ParamLimits

0x4653,	// (0x0000f826) scroll_sc2_down_pane_ParamLimits

0x4653,	// (0x0000f826) scroll_sc2_down_pane

0x718a,	// (0x0001235d) scroll_sc2_up_pane_ParamLimits

0x718a,	// (0x0001235d) scroll_sc2_up_pane

0x229b,	// (0x0000d46e) grid_wheel_folder_pane_g1_ParamLimits

0x229b,	// (0x0000d46e) grid_wheel_folder_pane_g1

0x4818,	// (0x0000f9eb) clock_nsta_pane_cp2_ParamLimits

0x4818,	// (0x0000f9eb) clock_nsta_pane_cp2

0x0d38,	// (0x0000bf0b) listscroll_midp_pane_ParamLimits

0x0d49,	// (0x0000bf1c) midp_canvas_pane

0x7ca9,	// (0x00012e7c) nsta_clock_indic_pane

0x7d07,	// (0x00012eda) listscroll_form_pane_vc

0x7d23,	// (0x00012ef6) listscroll_set_pane_vc_ParamLimits

0x7d23,	// (0x00012ef6) listscroll_set_pane_vc

0x1747,	// (0x0000c91a) clock_nsta_pane

0x1771,	// (0x0000c944) indicator_nsta_pane

0x8703,	// (0x000138d6) bg_popup_sub_pane_cp2_ParamLimits

0x8717,	// (0x000138ea) find_pane_cp2_ParamLimits

0x8717,	// (0x000138ea) find_pane_cp2

0x872d,	// (0x00013900) grid_toobar_pane_ParamLimits

0x88d5,	// (0x00013aa8) list_form_gen_pane_vc_ParamLimits

0x88d5,	// (0x00013aa8) list_form_gen_pane_vc

0x88eb,	// (0x00013abe) scroll_pane_cp8_vc_ParamLimits

0x88eb,	// (0x00013abe) scroll_pane_cp8_vc

0x8967,	// (0x00013b3a) data_form_wide_pane_vc_ParamLimits

0x8967,	// (0x00013b3a) data_form_wide_pane_vc

0x8973,	// (0x00013b46) form_field_data_wide_pane_vc_g1

0x897b,	// (0x00013b4e) form_field_data_wide_pane_vc_t1_ParamLimits

0x897b,	// (0x00013b4e) form_field_data_wide_pane_vc_t1

0x6b64,	// (0x00011d37) input_focus_pane_cp6_vc_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_cp6_vc

0x1b7c,	// (0x0000cd4f) list_midp_pane_ParamLimits

0xa127,	// (0x000152fa) scroll_pane_cp16_ParamLimits

0xa127,	// (0x000152fa) scroll_pane_cp16

0x8d3e,	// (0x00013f11) button_value_adjust_pane_ParamLimits

0x8d3e,	// (0x00013f11) button_value_adjust_pane

0x1eeb,	// (0x0000d0be) button_value_adjust_pane_cp6_ParamLimits

0x1eeb,	// (0x0000d0be) button_value_adjust_pane_cp6

0x2001,	// (0x0000d1d4) settings_code_pane_cp_ParamLimits

0x2001,	// (0x0000d1d4) settings_code_pane_cp

0x5ca1,	// (0x00010e74) cell_touch_pane_g1

0x5ca1,	// (0x00010e74) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001a8ed) cell_touch_pane_g

0x217a,	// (0x0000d34d) cell_touch_pane_cp_ParamLimits

0x217a,	// (0x0000d34d) cell_touch_pane_cp

0x2196,	// (0x0000d369) cell_touch_pane_ParamLimits

0x2196,	// (0x0000d369) cell_touch_pane

0x5ca1,	// (0x00010e74) scroll_sc2_down_pane_g1

0x5ca1,	// (0x00010e74) scroll_sc2_up_pane_g1

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp4_vc

0xa4ca,	// (0x0001569d) list_set_graphic_pane_vc_g1_ParamLimits

0xa4ca,	// (0x0001569d) list_set_graphic_pane_vc_g1

0xa4d6,	// (0x000156a9) list_set_graphic_pane_vc_g2_ParamLimits

0xa4d6,	// (0x000156a9) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0001abd2) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001abd2) list_set_graphic_pane_vc_g

0xa4e2,	// (0x000156b5) text_primary_small_cp13_vc_ParamLimits

0xa4e2,	// (0x000156b5) text_primary_small_cp13_vc

0xa4fa,	// (0x000156cd) list_set_graphic_pane_vc_ParamLimits

0xa4fa,	// (0x000156cd) list_set_graphic_pane_vc

0x5cab,	// (0x00010e7e) input_focus_pane_cp2_vc

0x5ca1,	// (0x00010e74) setting_code_pane_vc_g1

0xa50e,	// (0x000156e1) setting_code_pane_vc_t1

0xa51c,	// (0x000156ef) set_text_pane_vc_t1_ParamLimits

0xa51c,	// (0x000156ef) set_text_pane_vc_t1

0x5cab,	// (0x00010e7e) input_focus_pane_cp1_vc

0xa53b,	// (0x0001570e) list_set_text_pane_vc

0x5ca1,	// (0x00010e74) setting_text_pane_vc_g1

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp2_vc

0xa545,	// (0x00015718) setting_slider_graphic_pane_vc_g1

0xa54d,	// (0x00015720) setting_slider_graphic_pane_vc_t1

0xa55b,	// (0x0001572e) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0001abd7) setting_slider_graphic_pane_vc_t

0xa569,	// (0x0001573c) slider_set_pane_cp_vc

0xa571,	// (0x00015744) slider_set_pane_vc_g1

0xa57a,	// (0x0001574d) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0001abdc) slider_set_pane_vc_g

0x6ca0,	// (0x00011e73) set_opt_bg_pane_g1_copy1

0x6ca8,	// (0x00011e7b) set_opt_bg_pane_g2_copy1

0xa5a6,	// (0x00015779) set_opt_bg_pane_g3_copy1

0x6cb8,	// (0x00011e8b) set_opt_bg_pane_g4_copy1

0x6cc0,	// (0x00011e93) set_opt_bg_pane_g5_copy1

0x6cc8,	// (0x00011e9b) set_opt_bg_pane_g6_copy1

0xa5ae,	// (0x00015781) set_opt_bg_pane_g7_copy1

0xa5b8,	// (0x0001578b) set_opt_bg_pane_g8_copy1

0xa5c0,	// (0x00015793) set_opt_bg_pane_g9_copy1

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp_vc

0xa5c8,	// (0x0001579b) setting_slider_pane_vc_t1

0xa54d,	// (0x00015720) setting_slider_pane_vc_t2

0xa55b,	// (0x0001572e) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0001abeb) setting_slider_pane_vc_t

0xa569,	// (0x0001573c) slider_set_pane_vc

0x4c1b,	// (0x0000fdee) volume_set_pane_vc_g1

0x4f16,	// (0x000100e9) volume_set_pane_vc_g2

0x4f1f,	// (0x000100f2) volume_set_pane_vc_g3

0x4f28,	// (0x000100fb) volume_set_pane_vc_g4

0x4f31,	// (0x00010104) volume_set_pane_vc_g5

0x4f3a,	// (0x0001010d) volume_set_pane_vc_g6

0x4f43,	// (0x00010116) volume_set_pane_vc_g7

0x4f4c,	// (0x0001011f) volume_set_pane_vc_g8

0x4f55,	// (0x00010128) volume_set_pane_vc_g9

0x4f5e,	// (0x00010131) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0001abf2) volume_set_pane_vc_g

0xa5d7,	// (0x000157aa) volume_set_pane_vc

0xa5df,	// (0x000157b2) button_value_adjust_pane_cp1_vc

0xa5e9,	// (0x000157bc) list_highlight_pane_cp2_vc

0xa5f2,	// (0x000157c5) list_set_pane_vc_ParamLimits

0xa5f2,	// (0x000157c5) list_set_pane_vc

0xa644,	// (0x00015817) main_pane_set_vc_t1_ParamLimits

0xa644,	// (0x00015817) main_pane_set_vc_t1

0xa659,	// (0x0001582c) main_pane_set_vc_t2_ParamLimits

0xa659,	// (0x0001582c) main_pane_set_vc_t2

0xa66b,	// (0x0001583e) main_pane_set_vc_t3_ParamLimits

0xa66b,	// (0x0001583e) main_pane_set_vc_t3

0xa67d,	// (0x00015850) main_pane_set_vc_t4_ParamLimits

0xa67d,	// (0x00015850) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0001ac07) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0001ac07) main_pane_set_vc_t

0xa68f,	// (0x00015862) setting_code_pane_vc_ParamLimits

0xa68f,	// (0x00015862) setting_code_pane_vc

0xa69e,	// (0x00015871) setting_slider_graphic_pane_vc

0xa69e,	// (0x00015871) setting_slider_pane_vc

0xa69e,	// (0x00015871) setting_text_pane_vc

0xa69e,	// (0x00015871) setting_volume_pane_vc

0xa6a6,	// (0x00015879) scroll_pane_cp121_vc

0x6a7a,	// (0x00011c4d) set_content_pane_vc

0xa8b6,	// (0x00015a89) button_value_adjust_pane_g1

0xa8bf,	// (0x00015a92) button_value_adjust_pane_g2

0x0001,

0xfa87,	// (0x0001ac5a) button_value_adjust_pane_g

0xa8c8,	// (0x00015a9b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa8c8,	// (0x00015a9b) form_field_slider_wide_pane_vc_t1

0xa8dc,	// (0x00015aaf) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa8dc,	// (0x00015aaf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8c,	// (0x0001ac5f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x0001ac5f) form_field_slider_wide_pane_vc_t

0x6020,	// (0x000111f3) input_focus_pane_cp10_vc_ParamLimits

0x6020,	// (0x000111f3) input_focus_pane_cp10_vc

0xa8ee,	// (0x00015ac1) slider_cont_pane_cp1_vc_ParamLimits

0xa8ee,	// (0x00015ac1) slider_cont_pane_cp1_vc

0xa571,	// (0x00015744) slider_form_pane_g1_cp2

0xa57a,	// (0x0001574d) slider_form_pane_g2_cp2

0xa907,	// (0x00015ada) form_field_slider_pane_vc_t3

0xa915,	// (0x00015ae8) form_field_slider_pane_vc_t4

0xa923,	// (0x00015af6) slider_form_pane_vc_ParamLimits

0xa923,	// (0x00015af6) slider_form_pane_vc

0xa930,	// (0x00015b03) form_field_slider_pane_vc_t1_ParamLimits

0xa930,	// (0x00015b03) form_field_slider_pane_vc_t1

0xa8dc,	// (0x00015aaf) form_field_slider_pane_vc_t2_ParamLimits

0xa8dc,	// (0x00015aaf) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x0001ac6f) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x0001ac6f) form_field_slider_pane_vc_t

0x6020,	// (0x000111f3) input_focus_pane_cp9_vc_ParamLimits

0x6020,	// (0x000111f3) input_focus_pane_cp9_vc

0xa94c,	// (0x00015b1f) slider_cont_pane_vc_ParamLimits

0xa94c,	// (0x00015b1f) slider_cont_pane_vc

0xa95e,	// (0x00015b31) list_form_graphic_pane_cp_vc_ParamLimits

0xa95e,	// (0x00015b31) list_form_graphic_pane_cp_vc

0x8973,	// (0x00013b46) form_field_popup_wide_pane_vc_g1

0xa973,	// (0x00015b46) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa973,	// (0x00015b46) form_field_popup_wide_pane_vc_t1

0x6b64,	// (0x00011d37) input_focus_pane_cp8_vc_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_cp8_vc

0xa98a,	// (0x00015b5d) list_form_wide_pane_vc_ParamLimits

0xa98a,	// (0x00015b5d) list_form_wide_pane_vc

0xa996,	// (0x00015b69) list_form_graphic_pane_vc_g1

0xa99e,	// (0x00015b71) list_form_graphic_pane_vc_t1_ParamLimits

0xa99e,	// (0x00015b71) list_form_graphic_pane_vc_t1

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp5_vc_ParamLimits

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp5_vc

0xa9ba,	// (0x00015b8d) list_form_graphic_pane_vc_ParamLimits

0xa9ba,	// (0x00015b8d) list_form_graphic_pane_vc

0x8973,	// (0x00013b46) form_field_popup_pane_vc_g1

0xa9d0,	// (0x00015ba3) form_field_popup_pane_vc_t1_ParamLimits

0xa9d0,	// (0x00015ba3) form_field_popup_pane_vc_t1

0x6b64,	// (0x00011d37) input_focus_pane_cp7_vc_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_cp7_vc

0xa9e7,	// (0x00015bba) list_form_pane_vc_ParamLimits

0xa9e7,	// (0x00015bba) list_form_pane_vc

0xa9f3,	// (0x00015bc6) data_form_pane_vc_t1_ParamLimits

0xa9f3,	// (0x00015bc6) data_form_pane_vc_t1

0x6ca0,	// (0x00011e73) input_focus_pane_vc_g1

0x6ca8,	// (0x00011e7b) input_focus_pane_vc_g2

0x6cb0,	// (0x00011e83) input_focus_pane_vc_g3

0x6cb8,	// (0x00011e8b) input_focus_pane_vc_g4

0x6cc0,	// (0x00011e93) input_focus_pane_vc_g5

0x6cc8,	// (0x00011e9b) input_focus_pane_vc_g6

0x6cd0,	// (0x00011ea3) input_focus_pane_vc_g7

0x6cd8,	// (0x00011eab) input_focus_pane_vc_g8

0x6ce0,	// (0x00011eb3) input_focus_pane_vc_g9

0x5ca1,	// (0x00010e74) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001a876) input_focus_pane_vc_g

0x8967,	// (0x00013b3a) data_form_pane_vc_ParamLimits

0x8967,	// (0x00013b3a) data_form_pane_vc

0x8973,	// (0x00013b46) form_field_data_pane_vc_g1

0xaa0e,	// (0x00015be1) form_field_data_pane_vc_t1_ParamLimits

0xaa0e,	// (0x00015be1) form_field_data_pane_vc_t1

0x6b64,	// (0x00011d37) input_focus_pane_vc_ParamLimits

0x6b64,	// (0x00011d37) input_focus_pane_vc

0xaa28,	// (0x00015bfb) button_value_adjust_pane_cp3_vc

0xaa30,	// (0x00015c03) button_value_adjust_pane_cp5_vc

0xaa38,	// (0x00015c0b) form_field_data_pane_vc_ParamLimits

0xaa38,	// (0x00015c0b) form_field_data_pane_vc

0xaa4f,	// (0x00015c22) form_field_data_pane_vc_cp2

0xaa57,	// (0x00015c2a) form_field_data_wide_pane_vc_ParamLimits

0xaa57,	// (0x00015c2a) form_field_data_wide_pane_vc

0xaa6d,	// (0x00015c40) form_field_data_wide_pane_vc_cp2

0xaa75,	// (0x00015c48) form_field_popup_pane_vc_ParamLimits

0xaa75,	// (0x00015c48) form_field_popup_pane_vc

0xaa8c,	// (0x00015c5f) form_field_popup_wide_pane_vc_ParamLimits

0xaa8c,	// (0x00015c5f) form_field_popup_wide_pane_vc

0xaaa2,	// (0x00015c75) form_field_slider_pane_vc_ParamLimits

0xaaa2,	// (0x00015c75) form_field_slider_pane_vc

0xaab5,	// (0x00015c88) form_field_slider_wide_pane_vc_ParamLimits

0xaab5,	// (0x00015c88) form_field_slider_wide_pane_vc

0x21b4,	// (0x0000d387) grid_touch_1_pane_ParamLimits

0x21b4,	// (0x0000d387) grid_touch_1_pane

0x21c8,	// (0x0000d39b) grid_touch_2_pane_ParamLimits

0x21c8,	// (0x0000d39b) grid_touch_2_pane

0xab8a,	// (0x00015d5d) touch_pane_g1_ParamLimits

0xab8a,	// (0x00015d5d) touch_pane_g1

0xaaec,	// (0x00015cbf) cell_app_pane_cp_wide_ParamLimits

0xaaec,	// (0x00015cbf) cell_app_pane_cp_wide

0xaafd,	// (0x00015cd0) grid_popup_fast_wide_pane_ParamLimits

0xaafd,	// (0x00015cd0) grid_popup_fast_wide_pane

0xab11,	// (0x00015ce4) scroll_pane_cp19_ParamLimits

0xab11,	// (0x00015ce4) scroll_pane_cp19

0x5cab,	// (0x00010e7e) bg_popup_window_pane_cp20

0xab25,	// (0x00015cf8) listscroll_popup_fast_wide_pane

0x6ea9,	// (0x0001207c) grid_indicator_nsta_pane

0xab2d,	// (0x00015d00) clock_nsta_pane_g1

0xab36,	// (0x00015d09) clock_nsta_pane_t1

0x21f2,	// (0x0000d3c5) cell_indicator_nsta_pane_ParamLimits

0x21f2,	// (0x0000d3c5) cell_indicator_nsta_pane

0xab8a,	// (0x00015d5d) cell_indicator_nsta_pane_g1

0x220f,	// (0x0000d3e2) cell_indicator_nsta_pane_g2

0x0001,

0xfaa6,	// (0x0001ac79) cell_indicator_nsta_pane_g

0xabae,	// (0x00015d81) clock_nsta_pane_cp

0xabb6,	// (0x00015d89) indicator_nsta_pane_cp

0xabbf,	// (0x00015d92) nsta_clock_indic_pane_g1

0x5e6e,	// (0x00011041) grid_indicator_pane

0x727c,	// (0x0001244f) scroll_pane_cp29

0x4767,	// (0x0000f93a) indicator_nsta_pane_cp2_ParamLimits

0x4767,	// (0x0000f93a) indicator_nsta_pane_cp2

0x5d8b,	// (0x00010f5e) main_apps_wheel_pane

0x8bcb,	// (0x00013d9e) form_midp_field_text_pane_ParamLimits

0x8d10,	// (0x00013ee3) scroll_bar_cp050_ParamLimits

0xac28,	// (0x00015dfb) cell_indicator_pane_ParamLimits

0xac28,	// (0x00015dfb) cell_indicator_pane

0xac45,	// (0x00015e18) cell_indicator_pane_g1

0x2225,	// (0x0000d3f8) grid_wheel_folder_pane_ParamLimits

0x2225,	// (0x0000d3f8) grid_wheel_folder_pane

0x2233,	// (0x0000d406) list_wheel_apps_pane_ParamLimits

0x2233,	// (0x0000d406) list_wheel_apps_pane

0x2241,	// (0x0000d414) main_apps_wheel_pane_g1_ParamLimits

0x2241,	// (0x0000d414) main_apps_wheel_pane_g1

0x224d,	// (0x0000d420) main_apps_wheel_pane_g2_ParamLimits

0x224d,	// (0x0000d420) main_apps_wheel_pane_g2

0x0001,

0xfac2,	// (0x0001ac95) main_apps_wheel_pane_g_ParamLimits

0xfac2,	// (0x0001ac95) main_apps_wheel_pane_g

0x225b,	// (0x0000d42e) main_apps_wheel_pane_t1_ParamLimits

0x225b,	// (0x0000d42e) main_apps_wheel_pane_t1

0x226f,	// (0x0000d442) list_wheel_apps_pane_g1

0x2277,	// (0x0000d44a) list_wheel_apps_pane_g2

0x227f,	// (0x0000d452) list_wheel_apps_pane_g3

0x2287,	// (0x0000d45a) list_wheel_apps_pane_g4

0x2291,	// (0x0000d464) list_wheel_apps_pane_g5

0x0004,

0xfac7,	// (0x0001ac9a) list_wheel_apps_pane_g

0x782d,	// (0x00012a00) navi_icon_text_pane

0x1642,	// (0x0000c815) aid_fill_nsta

0x22a8,	// (0x0000d47b) navi_icon_text_pane_g1

0x22b4,	// (0x0000d487) navi_icon_text_pane_t1

0x76c9,	// (0x0001289c) list_set_graphic_pane_t1_ParamLimits

0x76c9,	// (0x0001289c) list_set_graphic_pane_t1

0x9452,	// (0x00014625) popup_midp_note_alarm_window_t6_ParamLimits

0x9452,	// (0x00014625) popup_midp_note_alarm_window_t6

0x9464,	// (0x00014637) popup_midp_note_alarm_window_t7_ParamLimits

0x9464,	// (0x00014637) popup_midp_note_alarm_window_t7

0x9476,	// (0x00014649) popup_midp_note_alarm_window_t8_ParamLimits

0x9476,	// (0x00014649) popup_midp_note_alarm_window_t8

0x9488,	// (0x0001465b) popup_midp_note_alarm_window_t9_ParamLimits

0x9488,	// (0x0001465b) popup_midp_note_alarm_window_t9

0x949a,	// (0x0001466d) popup_midp_note_alarm_window_t10_ParamLimits

0x949a,	// (0x0001466d) popup_midp_note_alarm_window_t10

0x94ac,	// (0x0001467f) popup_midp_note_alarm_window_t11_ParamLimits

0x94ac,	// (0x0001467f) popup_midp_note_alarm_window_t11

0x94be,	// (0x00014691) scroll_pane_cp17_ParamLimits

0x94be,	// (0x00014691) scroll_pane_cp17

0x4c1b,	// (0x0000fdee) volume_small_pane_cp_g1

0x4f67,	// (0x0001013a) volume_small_pane_cp_g2

0x4f70,	// (0x00010143) volume_small_pane_cp_g3

0x4f79,	// (0x0001014c) volume_small_pane_cp_g4

0x4f82,	// (0x00010155) volume_small_pane_cp_g5

0x4f8b,	// (0x0001015e) volume_small_pane_cp_g6

0x4f94,	// (0x00010167) volume_small_pane_cp_g7

0x4f9d,	// (0x00010170) volume_small_pane_cp_g8

0x4fa6,	// (0x00010179) volume_small_pane_cp_g9

0x4faf,	// (0x00010182) volume_small_pane_cp_g10

0x7a8e,	// (0x00012c61) midp_ticker_pane_g1_ParamLimits

0x7a9a,	// (0x00012c6d) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001a93e) midp_ticker_pane_g_ParamLimits

0x0de4,	// (0x0000bfb7) midp_ticker_pane_t1_ParamLimits

0x1662,	// (0x0000c835) aid_fill_nsta_2

0x8cfc,	// (0x00013ecf) list_form2_midp_pane

0x9e85,	// (0x00015058) midp_editing_number_pane_ParamLimits

0x9e94,	// (0x00015067) midp_ticker_pane_ParamLimits

0xad2e,	// (0x00015f01) form2_midp_field_pane

0xad52,	// (0x00015f25) scroll_pane_cp51

0xad72,	// (0x00015f45) form2_midp_button_pane_ParamLimits

0xad72,	// (0x00015f45) form2_midp_button_pane

0xad84,	// (0x00015f57) form2_midp_content_pane_ParamLimits

0xad84,	// (0x00015f57) form2_midp_content_pane

0xad9e,	// (0x00015f71) form2_midp_field_choice_group_pane

0xada6,	// (0x00015f79) form2_midp_field_pane_g1

0xadae,	// (0x00015f81) form2_midp_field_pane_g2

0xadb6,	// (0x00015f89) form2_midp_field_pane_g3

0xadbe,	// (0x00015f91) form2_midp_field_pane_g4

0x0003,

0xfaec,	// (0x0001acbf) form2_midp_field_pane_g

0xadc6,	// (0x00015f99) form2_midp_gauge_slider_pane

0xadce,	// (0x00015fa1) form2_midp_gauge_wait_pane

0xadd6,	// (0x00015fa9) form2_midp_image_pane_ParamLimits

0xadd6,	// (0x00015fa9) form2_midp_image_pane

0xadf1,	// (0x00015fc4) form2_midp_label_pane_ParamLimits

0xadf1,	// (0x00015fc4) form2_midp_label_pane

0x22e2,	// (0x0000d4b5) form2_midp_label_pane_cp_ParamLimits

0x22e2,	// (0x0000d4b5) form2_midp_label_pane_cp

0xae2b,	// (0x00015ffe) form2_midp_string_pane_ParamLimits

0xae2b,	// (0x00015ffe) form2_midp_string_pane

0xae3d,	// (0x00016010) form2_midp_text_pane_ParamLimits

0xae3d,	// (0x00016010) form2_midp_text_pane

0xae56,	// (0x00016029) form2_midp_time_pane

0xae66,	// (0x00016039) input_focus_pane_cp51_ParamLimits

0xae66,	// (0x00016039) input_focus_pane_cp51

0xae7e,	// (0x00016051) form2_midp_label_pane_t1_ParamLimits

0xae7e,	// (0x00016051) form2_midp_label_pane_t1

0xaebe,	// (0x00016091) form2_mdip_text_pane_t1_ParamLimits

0xaebe,	// (0x00016091) form2_mdip_text_pane_t1

0xaeda,	// (0x000160ad) form2_midp_time_pane_t1

0xaef5,	// (0x000160c8) form2_midp_gauge_slider_pane_t1

0x2303,	// (0x0000d4d6) form2_midp_gauge_slider_pane_t2

0x2315,	// (0x0000d4e8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf5,	// (0x0001acc8) form2_midp_gauge_slider_pane_t

0xaf2b,	// (0x000160fe) form2_midp_slider_pane

0xaf37,	// (0x0001610a) form2_midp_gauge_wait_pane_t1

0xaf45,	// (0x00016118) form2_midp_wait_pane_ParamLimits

0xaf45,	// (0x00016118) form2_midp_wait_pane

0x2327,	// (0x0000d4fa) list_single_2graphic_pane_cp4_ParamLimits

0x2327,	// (0x0000d4fa) list_single_2graphic_pane_cp4

0x1ae7,	// (0x0000ccba) list_single_midp_graphic_pane_cp_ParamLimits

0x1ae7,	// (0x0000ccba) list_single_midp_graphic_pane_cp

0x5cab,	// (0x00010e7e) list_highlight_pane_cp20

0xaf9f,	// (0x00016172) list_single_2graphic_pane_g1_cp4

0xa399,	// (0x0001556c) list_single_2graphic_pane_g2_cp4

0xafa7,	// (0x0001617a) list_single_2graphic_pane_t1_cp4

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp21

0xafb6,	// (0x00016189) list_single_midp_graphic_pane_g4_cp

0xafc5,	// (0x00016198) list_single_midp_graphic_pane_t1_cp

0x233e,	// (0x0000d511) form2_mdip_string_pane_t1_ParamLimits

0x233e,	// (0x0000d511) form2_mdip_string_pane_t1

0x5cab,	// (0x00010e7e) bg_wml_button_pane_cp2

0x5ca1,	// (0x00010e74) form2_midp_image_pane_g1

0x683e,	// (0x00011a11) list_double_large_graphic_pane_g5_ParamLimits

0x683e,	// (0x00011a11) list_double_large_graphic_pane_g5

0x0d38,	// (0x0000bf0b) midp_form_pane_ParamLimits

0x5d8b,	// (0x00010f5e) main_apps_wheel_pane_ParamLimits

0x139e,	// (0x0000c571) popup_preview_window_ParamLimits

0x139e,	// (0x0000c571) popup_preview_window

0x828b,	// (0x0001345e) popup_touch_info_window_ParamLimits

0x828b,	// (0x0001345e) popup_touch_info_window

0x82a9,	// (0x0001347c) popup_touch_menu_window_ParamLimits

0x82a9,	// (0x0001347c) popup_touch_menu_window

0x5c97,	// (0x00010e6a) bg_popup_sub_pane_cp6

0xb114,	// (0x000162e7) list_touch_menu_pane

0xb11c,	// (0x000162ef) list_single_touch_menu_pane_ParamLimits

0xb11c,	// (0x000162ef) list_single_touch_menu_pane

0xb131,	// (0x00016304) list_single_touch_menu_pane_t1

0x5d8b,	// (0x00010f5e) bg_popup_sub_pane_cp7_ParamLimits

0x5d8b,	// (0x00010f5e) bg_popup_sub_pane_cp7

0xb13f,	// (0x00016312) heading_sub_pane

0xb147,	// (0x0001631a) list_touch_info_pane_ParamLimits

0xb147,	// (0x0001631a) list_touch_info_pane

0xb156,	// (0x00016329) list_single_touch_info_pane_ParamLimits

0xb156,	// (0x00016329) list_single_touch_info_pane

0xb168,	// (0x0001633b) list_single_touch_info_pane_t1

0xb176,	// (0x00016349) list_single_touch_info_pane_t2

0x0001,

0xfb03,	// (0x0001acd6) list_single_touch_info_pane_t

0x79af,	// (0x00012b82) bg_popup_heading_pane_cp

0xb184,	// (0x00016357) heading_sub_pane_t1

0x8901,	// (0x00013ad4) bg_popup_preview_window_pane_cp_ParamLimits

0x8901,	// (0x00013ad4) bg_popup_preview_window_pane_cp

0xb13f,	// (0x00016312) heading_preview_pane

0xb147,	// (0x0001631a) list_preview_pane_ParamLimits

0xb147,	// (0x0001631a) list_preview_pane

0xb192,	// (0x00016365) popup_preview_window_g1

0xb156,	// (0x00016329) list_single_preview_pane_ParamLimits

0xb156,	// (0x00016329) list_single_preview_pane

0xb19a,	// (0x0001636d) list_single_preview_pane_g1

0xb1a2,	// (0x00016375) list_single_preview_pane_t1

0xb168,	// (0x0001633b) list_single_preview_pane_t2

0x0001,

0xfb08,	// (0x0001acdb) list_single_preview_pane_t

0xb1b0,	// (0x00016383) bg_popup_heading_pane_cp2_ParamLimits

0xb1b0,	// (0x00016383) bg_popup_heading_pane_cp2

0xb1c6,	// (0x00016399) heading_preview_pane_g1

0xb1ce,	// (0x000163a1) heading_preview_pane_t1_ParamLimits

0xb1ce,	// (0x000163a1) heading_preview_pane_t1

0x5e91,	// (0x00011064) soft_indicator_pane_t1_ParamLimits

0x656b,	// (0x0001173e) scroll_pane_ParamLimits

0x7178,	// (0x0001234b) scroll_sc2_left_pane

0x7181,	// (0x00012354) scroll_sc2_right_pane

0x71a0,	// (0x00012373) scroll_bg_pane_g1_ParamLimits

0x71b5,	// (0x00012388) scroll_bg_pane_g2_ParamLimits

0x71cd,	// (0x000123a0) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001a8cd) scroll_bg_pane_g_ParamLimits

0x71a0,	// (0x00012373) scroll_handle_pane_g1_ParamLimits

0x71ef,	// (0x000123c2) scroll_handle_pane_g2_ParamLimits

0x71cd,	// (0x000123a0) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001a8d4) scroll_handle_pane_g_ParamLimits

0x7d65,	// (0x00012f38) popup_choice_list_window_ParamLimits

0x7d65,	// (0x00012f38) popup_choice_list_window

0x870f,	// (0x000138e2) choice_list_pane

0x87b3,	// (0x00013986) cell_toolbar_pane_t1

0x87db,	// (0x000139ae) toolbar_button_pane_ParamLimits

0x9982,	// (0x00014b55) ai_gene_pane_1_t2_ParamLimits

0x9982,	// (0x00014b55) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0001aaec) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0001aaec) ai_gene_pane_1_t

0xb1eb,	// (0x000163be) scroll_sc2_left_pane_g1

0xb1eb,	// (0x000163be) scroll_sc2_right_pane_g1

0x7d35,	// (0x00012f08) bg_popup_sub_pane_cp10

0xb1f5,	// (0x000163c8) list_choice_list_pane

0xb20c,	// (0x000163df) list_single_choice_list_pane_ParamLimits

0xb20c,	// (0x000163df) list_single_choice_list_pane

0xb220,	// (0x000163f3) list_single_choice_list_pane_g1

0xb228,	// (0x000163fb) list_single_choice_list_pane_t1_ParamLimits

0xb228,	// (0x000163fb) list_single_choice_list_pane_t1

0xb23d,	// (0x00016410) choice_list_pane_g1

0xb245,	// (0x00016418) choice_list_pane_t1

0x5c97,	// (0x00010e6a) input_focus_pane_cp11

0x7051,	// (0x00012224) title_pane_stacon_g2_ParamLimits

0x7051,	// (0x00012224) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001a8b3) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001a8b3) title_pane_stacon_g

0x79af,	// (0x00012b82) cursor_press_pane

0x105d,	// (0x0000c230) popup_fep_hwr_window_ParamLimits

0x105d,	// (0x0000c230) popup_fep_hwr_window

0x7e83,	// (0x00013056) popup_fep_vkb_window_ParamLimits

0x7e83,	// (0x00013056) popup_fep_vkb_window

0xb253,	// (0x00016426) cursor_press_pane_g1

0x0002,

0xfb31,	// (0x0001ad04) fep_vkb_side_pane_g_ParamLimits

0x4ff1,	// (0x000101c4) fep_hwr_candidate_pane_ParamLimits

0x4ff1,	// (0x000101c4) fep_hwr_candidate_pane

0x501b,	// (0x000101ee) fep_hwr_side_pane_ParamLimits

0x501b,	// (0x000101ee) fep_hwr_side_pane

0x503b,	// (0x0001020e) fep_hwr_top_pane_ParamLimits

0x503b,	// (0x0001020e) fep_hwr_top_pane

0x5053,	// (0x00010226) fep_hwr_write_pane_ParamLimits

0x5053,	// (0x00010226) fep_hwr_write_pane

0xfb31,	// (0x0001ad04) fep_vkb_side_pane_g

0xb25b,	// (0x0001642e) fep_hwr_top_pane_g1

0xb26d,	// (0x00016440) fep_hwr_top_pane_g2

0x508d,	// (0x00010260) fep_hwr_top_pane_g3

0x0002,

0xfb0d,	// (0x0001ace0) fep_hwr_top_pane_g

0x50a2,	// (0x00010275) fep_hwr_top_text_pane

0x7342,	// (0x00012515) fep_hwr_top_text_pane_g1

0xb2a3,	// (0x00016476) fep_hwr_top_text_pane_t1

0x5198,	// (0x0001036b) fep_hwr_candidate_pane_g1

0xb4fd,	// (0x000166d0) fep_vkb_keypad_pane_g3_ParamLimits

0xb4fd,	// (0x000166d0) fep_vkb_keypad_pane_g3

0xb525,	// (0x000166f8) fep_vkb_keypad_pane_g4_ParamLimits

0xb525,	// (0x000166f8) fep_vkb_keypad_pane_g4

0xb594,	// (0x00016767) fep_vkb_bottom_pane_g2_ParamLimits

0xb594,	// (0x00016767) fep_vkb_bottom_pane_g2

0x0001,

0xfb38,	// (0x0001ad0b) fep_vkb_bottom_pane_g_ParamLimits

0xfb38,	// (0x0001ad0b) fep_vkb_bottom_pane_g

0xb1eb,	// (0x000163be) cell_vkb_side_pane_g2

0x0001,

0xfb42,	// (0x0001ad15) cell_vkb_side_pane_g

0xb61f,	// (0x000167f2) cell_vkb_side_pane_t1

0xb62d,	// (0x00016800) cell_vkb_side_pane_t1_copy1

0xb1eb,	// (0x000163be) bg_fep_vkb_candidate_pane_g2

0xb75f,	// (0x00016932) cell_vkb_candidate_pane_ParamLimits

0xb2b1,	// (0x00016484) aid_size_cell_vkb_ParamLimits

0xb2b1,	// (0x00016484) aid_size_cell_vkb

0xb75f,	// (0x00016932) cell_vkb_candidate_pane

0x51bf,	// (0x00010392) bg_popup_fep_shadow_pane_g1

0xb33f,	// (0x00016512) fep_vkb_bottom_pane_ParamLimits

0xb33f,	// (0x00016512) fep_vkb_bottom_pane

0xb37c,	// (0x0001654f) fep_vkb_candidate_pane_ParamLimits

0xb37c,	// (0x0001654f) fep_vkb_candidate_pane

0xb398,	// (0x0001656b) fep_vkb_keypad_pane_ParamLimits

0xb398,	// (0x0001656b) fep_vkb_keypad_pane

0xb3de,	// (0x000165b1) fep_vkb_side_pane_ParamLimits

0xb3de,	// (0x000165b1) fep_vkb_side_pane

0xb41a,	// (0x000165ed) fep_vkb_top_pane_ParamLimits

0xb41a,	// (0x000165ed) fep_vkb_top_pane

0xb456,	// (0x00016629) fep_vkb_top_pane_g1_ParamLimits

0xb456,	// (0x00016629) fep_vkb_top_pane_g1

0xb465,	// (0x00016638) fep_vkb_top_pane_g2_ParamLimits

0xb465,	// (0x00016638) fep_vkb_top_pane_g2

0xb474,	// (0x00016647) fep_vkb_top_pane_g3_ParamLimits

0xb474,	// (0x00016647) fep_vkb_top_pane_g3

0x0003,

0xfb28,	// (0x0001acfb) fep_vkb_top_pane_g_ParamLimits

0xfb28,	// (0x0001acfb) fep_vkb_top_pane_g

0xb492,	// (0x00016665) fep_vkb_top_text_pane_ParamLimits

0xb492,	// (0x00016665) fep_vkb_top_text_pane

0x2423,	// (0x0000d5f6) fep_vkb_side_pane_g1_ParamLimits

0x2423,	// (0x0000d5f6) fep_vkb_side_pane_g1

0xb4ec,	// (0x000166bf) grid_vkb_side_pane_ParamLimits

0xb4ec,	// (0x000166bf) grid_vkb_side_pane

0x51c7,	// (0x0001039a) bg_popup_fep_shadow_pane_g2

0x51d0,	// (0x000103a3) bg_popup_fep_shadow_pane_g3

0x51d8,	// (0x000103ab) bg_popup_fep_shadow_pane_g4

0x51e1,	// (0x000103b4) bg_popup_fep_shadow_pane_g5

0x51eb,	// (0x000103be) bg_popup_fep_shadow_pane_g6

0x51f3,	// (0x000103c6) bg_popup_fep_shadow_pane_g7

0x6cb8,	// (0x00011e8b) bg_popup_fep_shadow_pane_g8

0xb543,	// (0x00016716) grid_vkb_keypad_number_pane_ParamLimits

0xb543,	// (0x00016716) grid_vkb_keypad_number_pane

0xb553,	// (0x00016726) grid_vkb_keypad_pane_ParamLimits

0xb553,	// (0x00016726) grid_vkb_keypad_pane

0xb579,	// (0x0001674c) fep_vkb_bottom_pane_g1_ParamLimits

0xb579,	// (0x0001674c) fep_vkb_bottom_pane_g1

0xb5a2,	// (0x00016775) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb5a2,	// (0x00016775) grid_vkb_keypad_bottom_left_pane

0xb5b7,	// (0x0001678a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb5b7,	// (0x0001678a) grid_vkb_keypad_bottom_right_pane

0xb5cc,	// (0x0001679f) fep_vkb_top_text_pane_g1

0x246a,	// (0x0000d63d) fep_vkb_top_text_pane_t1

0x247c,	// (0x0000d64f) cell_vkb_side_pane_ParamLimits

0x247c,	// (0x0000d64f) cell_vkb_side_pane

0xb1eb,	// (0x000163be) cell_vkb_side_pane_g1

0xb63b,	// (0x0001680e) cell_vkb_keypad_pane_ParamLimits

0xb63b,	// (0x0001680e) cell_vkb_keypad_pane

0xb6b6,	// (0x00016889) cell_vkb_keypad_pane_g1

0x0008,

0xfb55,	// (0x0001ad28) bg_popup_fep_shadow_pane_g

0x5205,	// (0x000103d8) cell_hwr_side_pane_g1

0x5205,	// (0x000103d8) cell_hwr_side_pane_g2

0xb6c0,	// (0x00016893) cell_vkb_keypad_pane_t1

0x2492,	// (0x0000d665) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2492,	// (0x0000d665) cell_vkb_keypad_bottom_left_pane

0x24a7,	// (0x0000d67a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x24a7,	// (0x0000d67a) cell_vkb_keypad_bottom_right_pane

0xb1eb,	// (0x000163be) cell_vkb_keypad_bottom_left_pane_g1

0xb1eb,	// (0x000163be) cell_vkb_keypad_bottom_right_pane_g1

0xb724,	// (0x000168f7) cell_vkb_keypad_number_pane_ParamLimits

0xb724,	// (0x000168f7) cell_vkb_keypad_number_pane

0xb743,	// (0x00016916) cell_vkb_keypad_number_pane_g1

0xb74d,	// (0x00016920) cell_vkb_keypad_number_pane_g2

0xb756,	// (0x00016929) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb47,	// (0x0001ad1a) cell_vkb_keypad_number_pane_g

0xb6c0,	// (0x00016893) cell_vkb_keypad_number_pane_t1

0xb77c,	// (0x0001694f) fep_vkb_candidate_pane_g1

0x0001,

0xfb68,	// (0x0001ad3b) cell_hwr_side_pane_g

0xb795,	// (0x00016968) cell_hwr_side_pane_t1

0x520f,	// (0x000103e2) cell_hwr_side_pane_t1_copy1

0x521d,	// (0x000103f0) cell_hwr_candidate_pane_g1

0x524c,	// (0x0001041f) cell_hwr_candidate_pane_t1

0xb1eb,	// (0x000163be) cell_vkb_candidate_pane_g2

0xb7d9,	// (0x000169ac) cell_vkb_candidate_pane_t1

0x4fb8,	// (0x0001018b) bg_popup_fep_shadow_pane_ParamLimits

0x4fb8,	// (0x0001018b) bg_popup_fep_shadow_pane

0x506d,	// (0x00010240) bg_fep_hwr_top_pane_g4

0xb27f,	// (0x00016452) bg_hwr_side_pane_g1_ParamLimits

0xb27f,	// (0x00016452) bg_hwr_side_pane_g1

0xe301,	// (0x000194d4) cell_hwr_side_pane_ParamLimits

0xe301,	// (0x000194d4) cell_hwr_side_pane

0x5119,	// (0x000102ec) fep_hwr_write_pane_g1_ParamLimits

0x5119,	// (0x000102ec) fep_hwr_write_pane_g1

0x5126,	// (0x000102f9) fep_hwr_write_pane_g2_ParamLimits

0x5126,	// (0x000102f9) fep_hwr_write_pane_g2

0x5133,	// (0x00010306) fep_hwr_write_pane_g3_ParamLimits

0x5133,	// (0x00010306) fep_hwr_write_pane_g3

0xe321,	// (0x000194f4) fep_hwr_write_pane_g4_ParamLimits

0xe321,	// (0x000194f4) fep_hwr_write_pane_g4

0x0005,

0xfb14,	// (0x0001ace7) fep_hwr_write_pane_g_ParamLimits

0xfb14,	// (0x0001ace7) fep_hwr_write_pane_g

0x506d,	// (0x00010240) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x506d,	// (0x00010240) bg_fep_hwr_candidate_pane_g2

0x5156,	// (0x00010329) cell_hwr_candidate_pane_ParamLimits

0x5156,	// (0x00010329) cell_hwr_candidate_pane

0x5198,	// (0x0001036b) fep_hwr_candidate_pane_g1_ParamLimits

0xb2df,	// (0x000164b2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb2df,	// (0x000164b2) bg_popup_fep_shadow_pane_cp2

0xb484,	// (0x00016657) fep_vkb_top_pane_g4_ParamLimits

0xb484,	// (0x00016657) fep_vkb_top_pane_g4

0xb4ca,	// (0x0001669d) fep_vkb_side_pane_g2_ParamLimits

0xb4ca,	// (0x0001669d) fep_vkb_side_pane_g2

0x0864,	// (0x0000ba37) list_setting_pane_t4_ParamLimits

0x0864,	// (0x0000ba37) list_setting_pane_t4

0x08de,	// (0x0000bab1) list_setting_number_pane_t5_ParamLimits

0x08de,	// (0x0000bab1) list_setting_number_pane_t5

0x0bf1,	// (0x0000bdc4) list_double_heading_pane_cp2_ParamLimits

0x0bf1,	// (0x0000bdc4) list_double_heading_pane_cp2

0x6b8a,	// (0x00011d5d) list_double_heading_pane_g1_cp2_ParamLimits

0x6b8a,	// (0x00011d5d) list_double_heading_pane_g1_cp2

0x6b96,	// (0x00011d69) list_double_heading_pane_g2_cp2_ParamLimits

0x6b96,	// (0x00011d69) list_double_heading_pane_g2_cp2

0xb7e7,	// (0x000169ba) list_double_heading_pane_t1_cp2_ParamLimits

0xb7e7,	// (0x000169ba) list_double_heading_pane_t1_cp2

0xb7fd,	// (0x000169d0) list_double_heading_pane_t2_cp2_ParamLimits

0xb7fd,	// (0x000169d0) list_double_heading_pane_t2_cp2

0x5c7f,	// (0x00010e52) aid_value_unit2

0x4309,	// (0x0000f4dc) popup_preview_fixed_window

0x602e,	// (0x00011201) bg_popup_preview_window_pane_cp02

0xb80f,	// (0x000169e2) list_preview_fixed_pane

0xb855,	// (0x00016a28) list_empty_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_empty_pane_fp

0xb855,	// (0x00016a28) list_single_cale_day_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_single_cale_day_pane_fp

0xb855,	// (0x00016a28) list_single_graphic_heading_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_single_graphic_heading_pane_fp

0xb855,	// (0x00016a28) list_single_graphic_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_single_graphic_pane_fp

0xb855,	// (0x00016a28) list_single_heading_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_single_heading_pane_fp

0xb855,	// (0x00016a28) list_single_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_single_pane_fp

0xb86c,	// (0x00016a3f) list_single_pane_fp_g1_ParamLimits

0xb86c,	// (0x00016a3f) list_single_pane_fp_g1

0x6b8a,	// (0x00011d5d) list_single_pane_fp_g2_ParamLimits

0x6b8a,	// (0x00011d5d) list_single_pane_fp_g2

0x6b96,	// (0x00011d69) list_single_pane_fp_g3_ParamLimits

0x6b96,	// (0x00011d69) list_single_pane_fp_g3

0xb878,	// (0x00016a4b) list_single_pane_fp_g4_ParamLimits

0xb878,	// (0x00016a4b) list_single_pane_fp_g4

0x0003,

0xfb7b,	// (0x0001ad4e) list_single_pane_fp_g_ParamLimits

0xfb7b,	// (0x0001ad4e) list_single_pane_fp_g

0xb884,	// (0x00016a57) list_single_pane_fp_t1_ParamLimits

0xb884,	// (0x00016a57) list_single_pane_fp_t1

0xb89b,	// (0x00016a6e) list_single_graphic_pane_fp_g1_ParamLimits

0xb89b,	// (0x00016a6e) list_single_graphic_pane_fp_g1

0xb86c,	// (0x00016a3f) list_single_graphic_pane_fp_g2_ParamLimits

0xb86c,	// (0x00016a3f) list_single_graphic_pane_fp_g2

0x6b8a,	// (0x00011d5d) list_single_graphic_pane_fp_g3_ParamLimits

0x6b8a,	// (0x00011d5d) list_single_graphic_pane_fp_g3

0x6b96,	// (0x00011d69) list_single_graphic_pane_fp_g4_ParamLimits

0x6b96,	// (0x00011d69) list_single_graphic_pane_fp_g4

0xb878,	// (0x00016a4b) list_single_graphic_pane_fp_g5_ParamLimits

0xb878,	// (0x00016a4b) list_single_graphic_pane_fp_g5

0x0004,

0xfb84,	// (0x0001ad57) list_single_graphic_pane_fp_g_ParamLimits

0xfb84,	// (0x0001ad57) list_single_graphic_pane_fp_g

0xb8a7,	// (0x00016a7a) list_single_graphic_pane_fp_t1_ParamLimits

0xb8a7,	// (0x00016a7a) list_single_graphic_pane_fp_t1

0xb89b,	// (0x00016a6e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb89b,	// (0x00016a6e) list_single_graphic_heading_pane_fp_g1

0xb86c,	// (0x00016a3f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb86c,	// (0x00016a3f) list_single_graphic_heading_pane_fp_g2

0x6b8a,	// (0x00011d5d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6b8a,	// (0x00011d5d) list_single_graphic_heading_pane_fp_g3

0x6b96,	// (0x00011d69) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6b96,	// (0x00011d69) list_single_graphic_heading_pane_fp_g4

0xb878,	// (0x00016a4b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb878,	// (0x00016a4b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0001ad57) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0001ad57) list_single_graphic_heading_pane_fp_g

0xb8bd,	// (0x00016a90) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb8bd,	// (0x00016a90) list_single_graphic_heading_pane_fp_t1

0xb8d3,	// (0x00016aa6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb8d3,	// (0x00016aa6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0001ad62) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0001ad62) list_single_graphic_heading_pane_fp_t

0xb8e5,	// (0x00016ab8) list_single_cale_day_pane_fp_g1_ParamLimits

0xb8e5,	// (0x00016ab8) list_single_cale_day_pane_fp_g1

0xb91d,	// (0x00016af0) list_single_cale_day_pane_fp_g2_ParamLimits

0xb91d,	// (0x00016af0) list_single_cale_day_pane_fp_g2

0xb929,	// (0x00016afc) list_single_cale_day_pane_fp_g3_ParamLimits

0xb929,	// (0x00016afc) list_single_cale_day_pane_fp_g3

0xb951,	// (0x00016b24) list_single_cale_day_pane_fp_g4_ParamLimits

0xb951,	// (0x00016b24) list_single_cale_day_pane_fp_g4

0xb975,	// (0x00016b48) list_single_cale_day_pane_fp_g5_ParamLimits

0xb975,	// (0x00016b48) list_single_cale_day_pane_fp_g5

0x0004,

0xfb94,	// (0x0001ad67) list_single_cale_day_pane_fp_g_ParamLimits

0xfb94,	// (0x0001ad67) list_single_cale_day_pane_fp_g

0xb999,	// (0x00016b6c) list_single_cale_day_pane_fp_t1_ParamLimits

0xb999,	// (0x00016b6c) list_single_cale_day_pane_fp_t1

0xb9bf,	// (0x00016b92) list_single_cale_day_pane_fp_t2_ParamLimits

0xb9bf,	// (0x00016b92) list_single_cale_day_pane_fp_t2

0xb9d8,	// (0x00016bab) list_single_cale_day_pane_fp_t3_ParamLimits

0xb9d8,	// (0x00016bab) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9f,	// (0x0001ad72) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9f,	// (0x0001ad72) list_single_cale_day_pane_fp_t

0xb86c,	// (0x00016a3f) list_empty_pane_fp_g1_ParamLimits

0xb86c,	// (0x00016a3f) list_empty_pane_fp_g1

0xb9f1,	// (0x00016bc4) list_empty_pane_fp_t1

0xb9ff,	// (0x00016bd2) list_empty_pane_fp_t2

0x0001,

0xfba6,	// (0x0001ad79) list_empty_pane_fp_t

0xb86c,	// (0x00016a3f) list_single_heading_pane_fp_g1_ParamLimits

0xb86c,	// (0x00016a3f) list_single_heading_pane_fp_g1

0x6b8a,	// (0x00011d5d) list_single_heading_pane_fp_g2_ParamLimits

0x6b8a,	// (0x00011d5d) list_single_heading_pane_fp_g2

0x6b96,	// (0x00011d69) list_single_heading_pane_fp_g3_ParamLimits

0x6b96,	// (0x00011d69) list_single_heading_pane_fp_g3

0x0002,

0xfbab,	// (0x0001ad7e) list_single_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001ad7e) list_single_heading_pane_fp_g

0xba0d,	// (0x00016be0) list_single_heading_pane_fp_t1_ParamLimits

0xba0d,	// (0x00016be0) list_single_heading_pane_fp_t1

0xba1f,	// (0x00016bf2) list_single_heading_pane_fp_t2_ParamLimits

0xba1f,	// (0x00016bf2) list_single_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0001ad85) list_single_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0001ad85) list_single_heading_pane_fp_t

0x6ee8,	// (0x000120bb) aid_size_cell_fast

0x5f9e,	// (0x00011171) soft_indicator_pane_cp1_t1

0x6f25,	// (0x000120f8) cell_app_pane_cp2_ParamLimits

0x6f25,	// (0x000120f8) cell_app_pane_cp2

0x4fda,	// (0x000101ad) fep_hwr_candidate_drop_down_list_pane

0x51b2,	// (0x00010385) fep_hwr_candidate_pane_g3_ParamLimits

0x51b2,	// (0x00010385) fep_hwr_candidate_pane_g3

0x373f,	// (0x0000e912) fep_hwr_candidate_pane_g4_ParamLimits

0x373f,	// (0x0000e912) fep_hwr_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001acf4) fep_hwr_candidate_pane_g_ParamLimits

0xfb21,	// (0x0001acf4) fep_hwr_candidate_pane_g

0xb36b,	// (0x0001653e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb36b,	// (0x0001653e) fep_vkb_candidate_drop_down_list_pane

0xb784,	// (0x00016957) fep_vkb_candidate_pane_g3

0xb78c,	// (0x0001695f) fep_vkb_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0001ad21) fep_vkb_candidate_pane_g

0x521d,	// (0x000103f0) cell_hwr_candidate_pane_g1_ParamLimits

0x522b,	// (0x000103fe) cell_hwr_candidate_pane_g3_ParamLimits

0x522b,	// (0x000103fe) cell_hwr_candidate_pane_g3

0xe76c,	// (0x0001993f) cell_hwr_candidate_pane_g4_ParamLimits

0xe76c,	// (0x0001993f) cell_hwr_candidate_pane_g4

0x0002,

0xfb6d,	// (0x0001ad40) cell_hwr_candidate_pane_g_ParamLimits

0xfb6d,	// (0x0001ad40) cell_hwr_candidate_pane_g

0xb7a3,	// (0x00016976) cell_vkb_candidate_pane_g3_ParamLimits

0xb7a3,	// (0x00016976) cell_vkb_candidate_pane_g3

0xb7be,	// (0x00016991) cell_vkb_candidate_pane_g4_ParamLimits

0xb7be,	// (0x00016991) cell_vkb_candidate_pane_g4

0xba35,	// (0x00016c08) cell_app_pane_cp2_g1_ParamLimits

0xba35,	// (0x00016c08) cell_app_pane_cp2_g1

0xba53,	// (0x00016c26) cell_app_pane_cp2_g2_ParamLimits

0xba53,	// (0x00016c26) cell_app_pane_cp2_g2

0x0001,

0xfbb7,	// (0x0001ad8a) cell_app_pane_cp2_g_ParamLimits

0xfbb7,	// (0x0001ad8a) cell_app_pane_cp2_g

0xba5f,	// (0x00016c32) cell_app_pane_cp2_t1_ParamLimits

0xba5f,	// (0x00016c32) cell_app_pane_cp2_t1

0x6b64,	// (0x00011d37) grid_highlight_pane_cp1_ParamLimits

0x6b64,	// (0x00011d37) grid_highlight_pane_cp1

0x526a,	// (0x0001043d) cell_hwr_candidate_pane_cp1_ParamLimits

0x526a,	// (0x0001043d) cell_hwr_candidate_pane_cp1

0x521d,	// (0x000103f0) fep_hwr_candidate_drop_down_list_pane_g1

0x5289,	// (0x0001045c) fep_hwr_candidate_drop_down_list_pane_g2

0x5296,	// (0x00010469) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x0001ad8f) fep_hwr_candidate_drop_down_list_pane_g

0x52a3,	// (0x00010476) fep_hwr_candidate_drop_down_list_scroll_pane

0x52ac,	// (0x0001047f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x52ac,	// (0x0001047f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x52b9,	// (0x0001048c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x52b9,	// (0x0001048c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x52c6,	// (0x00010499) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x52c6,	// (0x00010499) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x52d3,	// (0x000104a6) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x52d3,	// (0x000104a6) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x52ee,	// (0x000104c1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x52ee,	// (0x000104c1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5309,	// (0x000104dc) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5309,	// (0x000104dc) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5324,	// (0x000104f7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5324,	// (0x000104f7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x533f,	// (0x00010512) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x533f,	// (0x00010512) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc3,	// (0x0001ad96) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc3,	// (0x0001ad96) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xba71,	// (0x00016c44) cell_vkb_candidate_pane_cp1_ParamLimits

0xba71,	// (0x00016c44) cell_vkb_candidate_pane_cp1

0xb484,	// (0x00016657) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb484,	// (0x00016657) fep_vkb_candidate_drop_down_list_pane_g1

0xba91,	// (0x00016c64) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xba91,	// (0x00016c64) fep_vkb_candidate_drop_down_list_pane_g2

0xba9e,	// (0x00016c71) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xba9e,	// (0x00016c71) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd4,	// (0x0001ada7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd4,	// (0x0001ada7) fep_vkb_candidate_drop_down_list_pane_g

0xbaab,	// (0x00016c7e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbaab,	// (0x00016c7e) fep_vkb_candidate_drop_down_list_scroll_pane

0xbab8,	// (0x00016c8b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbab8,	// (0x00016c8b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbac5,	// (0x00016c98) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbac5,	// (0x00016c98) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbad1,	// (0x00016ca4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbad1,	// (0x00016ca4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbadd,	// (0x00016cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbadd,	// (0x00016cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbafe,	// (0x00016cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbafe,	// (0x00016cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbb1f,	// (0x00016cf2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbb1f,	// (0x00016cf2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbb40,	// (0x00016d13) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbb40,	// (0x00016d13) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbb61,	// (0x00016d34) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbb61,	// (0x00016d34) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdb,	// (0x0001adae) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdb,	// (0x0001adae) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0265,	// (0x0000b438) title_pane_g1_ParamLimits

0x0276,	// (0x0000b449) title_pane_g2_ParamLimits

0xf56a,	// (0x0001a73d) title_pane_g_ParamLimits

0x7332,	// (0x00012505) aid_call2_pane

0x733a,	// (0x0001250d) aid_call_pane

0x7342,	// (0x00012515) popup_clock_analogue_window_g1

0x7342,	// (0x00012515) popup_clock_analogue_window_g2

0x4668,	// (0x0000f83b) popup_clock_analogue_window_g3

0x4671,	// (0x0000f844) popup_clock_analogue_window_g4

0x5ca1,	// (0x00010e74) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001a8e2) popup_clock_analogue_window_g

0x4679,	// (0x0000f84c) popup_clock_analogue_window_t1

0x4687,	// (0x0000f85a) clock_digital_number_pane_ParamLimits

0x4687,	// (0x0000f85a) clock_digital_number_pane

0x4693,	// (0x0000f866) clock_digital_number_pane_cp02_ParamLimits

0x4693,	// (0x0000f866) clock_digital_number_pane_cp02

0x469f,	// (0x0000f872) clock_digital_number_pane_cp03_ParamLimits

0x469f,	// (0x0000f872) clock_digital_number_pane_cp03

0x46ab,	// (0x0000f87e) clock_digital_number_pane_cp04_ParamLimits

0x46ab,	// (0x0000f87e) clock_digital_number_pane_cp04

0x46b7,	// (0x0000f88a) clock_digital_separator_pane_ParamLimits

0x46b7,	// (0x0000f88a) clock_digital_separator_pane

0x46c3,	// (0x0000f896) popup_clock_digital_window_t1_ParamLimits

0x46c3,	// (0x0000f896) popup_clock_digital_window_t1

0x5ca1,	// (0x00010e74) clock_digital_number_pane_g1

0x5ca1,	// (0x00010e74) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001a8ed) clock_digital_number_pane_g

0x5ca1,	// (0x00010e74) clock_digital_separator_pane_g1

0x5ca1,	// (0x00010e74) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001a8ed) clock_digital_separator_pane_g

0x1642,	// (0x0000c815) aid_fill_nsta_ParamLimits

0x1771,	// (0x0000c944) indicator_nsta_pane_ParamLimits

0x859e,	// (0x00013771) popup_clock_analogue_window

0x859e,	// (0x00013771) popup_clock_digital_window

0x6ea9,	// (0x0001207c) grid_indicator_nsta_pane_ParamLimits

0xab44,	// (0x00015d17) clock_nsta_pane_t2

0x0001,

0xfaa1,	// (0x0001ac74) clock_nsta_pane_t

0x462c,	// (0x0000f7ff) aid_size_max_handle

0xdfc0,	// (0x00019193) aid_size_min_handle

0x79af,	// (0x00012b82) editor_scroll_pane

0xbb7c,	// (0x00016d4f) ex_editor_pane

0x6e57,	// (0x0001202a) scroll_pane_cp13

0x6597,	// (0x0001176a) scroll_pane_cp14

0x736c,	// (0x0001253f) scroll_pane_cp36

0x0c02,	// (0x0000bdd5) list_single_graphic_hl_pane_cp2_ParamLimits

0x0c02,	// (0x0000bdd5) list_single_graphic_hl_pane_cp2

0x2092,	// (0x0000d265) list_single_graphic_hl_pane_ParamLimits

0x2092,	// (0x0000d265) list_single_graphic_hl_pane

0xbb84,	// (0x00016d57) aid_size_min_hl_cp1

0xbb8d,	// (0x00016d60) list_highlight_pane_cp34_ParamLimits

0xbb8d,	// (0x00016d60) list_highlight_pane_cp34

0xbb9e,	// (0x00016d71) list_single_graphic_hl_pane_g1_ParamLimits

0xbb9e,	// (0x00016d71) list_single_graphic_hl_pane_g1

0x659f,	// (0x00011772) list_single_graphic_hl_pane_g2_ParamLimits

0x659f,	// (0x00011772) list_single_graphic_hl_pane_g2

0x659f,	// (0x00011772) list_single_graphic_hl_pane_g3_ParamLimits

0x659f,	// (0x00011772) list_single_graphic_hl_pane_g3

0x65ab,	// (0x0001177e) list_single_graphic_hl_pane_g4_ParamLimits

0x65ab,	// (0x0001177e) list_single_graphic_hl_pane_g4

0x24c2,	// (0x0000d695) list_single_graphic_hl_pane_g5_ParamLimits

0x24c2,	// (0x0000d695) list_single_graphic_hl_pane_g5

0x0004,

0xfbec,	// (0x0001adbf) list_single_graphic_hl_pane_g_ParamLimits

0xfbec,	// (0x0001adbf) list_single_graphic_hl_pane_g

0x24d6,	// (0x0000d6a9) list_single_graphic_hl_pane_t1_ParamLimits

0x24d6,	// (0x0000d6a9) list_single_graphic_hl_pane_t1

0xbbcb,	// (0x00016d9e) aid_size_min_hl_cp2

0xbbd4,	// (0x00016da7) list_highlight_pane_cp34_cp2_ParamLimits

0xbbd4,	// (0x00016da7) list_highlight_pane_cp34_cp2

0xbb9e,	// (0x00016d71) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbb9e,	// (0x00016d71) list_single_graphic_hl_pane_g1_cp2

0xbbe1,	// (0x00016db4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbbe1,	// (0x00016db4) list_single_graphic_hl_pane_g2_cp2

0xbbed,	// (0x00016dc0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbbed,	// (0x00016dc0) list_single_graphic_hl_pane_g3_cp2

0x78e6,	// (0x00012ab9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x78e6,	// (0x00012ab9) list_single_graphic_hl_pane_g4_cp2

0xbbb7,	// (0x00016d8a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbbb7,	// (0x00016d8a) list_single_graphic_hl_pane_g5_cp2

0xe017,	// (0x000191ea) control_pane_g4_ParamLimits

0xe017,	// (0x000191ea) control_pane_g4

0x7d35,	// (0x00012f08) bg_popup_sub_pane_cp10_ParamLimits

0xb1f5,	// (0x000163c8) list_choice_list_pane_ParamLimits

0xb204,	// (0x000163d7) scroll_pane_cp23

0x602e,	// (0x00011201) bg_popup_preview_window_pane_cp02_ParamLimits

0xb80f,	// (0x000169e2) list_preview_fixed_pane_ParamLimits

0xb825,	// (0x000169f8) list_preview_fixed_pane_cp_ParamLimits

0xb825,	// (0x000169f8) list_preview_fixed_pane_cp

0xb831,	// (0x00016a04) popup_preview_fixed_window_g1_ParamLimits

0xb831,	// (0x00016a04) popup_preview_fixed_window_g1

0xb83d,	// (0x00016a10) popup_preview_fixed_window_g2_ParamLimits

0xb83d,	// (0x00016a10) popup_preview_fixed_window_g2

0x0002,

0xfb74,	// (0x0001ad47) popup_preview_fixed_window_g_ParamLimits

0xfb74,	// (0x0001ad47) popup_preview_fixed_window_g

0x45a0,	// (0x0000f773) aid_navi_side_left_pane_ParamLimits

0x45b5,	// (0x0000f788) aid_navi_side_right_pane_ParamLimits

0x45cd,	// (0x0000f7a0) navi_icon_pane_stacon_ParamLimits

0x45e1,	// (0x0000f7b4) navi_navi_pane_stacon_ParamLimits

0x45cd,	// (0x0000f7a0) navi_text_pane_stacon_ParamLimits

0x5c97,	// (0x00010e6a) main_text_info_pane

0xbc11,	// (0x00016de4) listscroll_text_info_pane

0xbc19,	// (0x00016dec) list_text_info_pane_ParamLimits

0xbc19,	// (0x00016dec) list_text_info_pane

0xbc28,	// (0x00016dfb) scroll_pane_cp24_ParamLimits

0xbc28,	// (0x00016dfb) scroll_pane_cp24

0x24ec,	// (0x0000d6bf) list_text_info_pane_t1_ParamLimits

0x24ec,	// (0x0000d6bf) list_text_info_pane_t1

0x0fd2,	// (0x0000c1a5) popup_fast_swap2_window_ParamLimits

0x0fd2,	// (0x0000c1a5) popup_fast_swap2_window

0xbc7f,	// (0x00016e52) aid_size_cell_fast2

0x5c97,	// (0x00010e6a) bg_popup_window_pane_cp17

0x8d28,	// (0x00013efb) heading_pane_cp2

0x626e,	// (0x00011441) listscroll_fast2_pane

0xbc89,	// (0x00016e5c) grid_fast2_pane

0xbc93,	// (0x00016e66) listscroll_fast2_pane_g1

0xbc9b,	// (0x00016e6e) listscroll_fast2_pane_g2

0x0001,

0xfbf7,	// (0x0001adca) listscroll_fast2_pane_g

0x6e57,	// (0x0001202a) scroll_pane_cp26

0xbca5,	// (0x00016e78) cell_fast2_pane_ParamLimits

0xbca5,	// (0x00016e78) cell_fast2_pane

0xbcba,	// (0x00016e8d) cell_fast2_pane_g1

0xbcc3,	// (0x00016e96) cell_fast2_pane_g2

0xbccc,	// (0x00016e9f) cell_fast2_pane_g3

0x0002,

0xfbfc,	// (0x0001adcf) cell_fast2_pane_g

0x6354,	// (0x00011527) grid_highlight_pane_cp9

0x6369,	// (0x0001153c) main_eswt_pane_ParamLimits

0x6369,	// (0x0001153c) main_eswt_pane

0xbc3d,	// (0x00016e10) list_single_text_info_pane

0xbcd4,	// (0x00016ea7) eswt_ctrl_button_pane

0xbcd4,	// (0x00016ea7) eswt_ctrl_canvas_pane

0xbcdc,	// (0x00016eaf) eswt_ctrl_combo_pane

0xbcd4,	// (0x00016ea7) eswt_ctrl_default_pane

0xbcd4,	// (0x00016ea7) eswt_ctrl_label_pane

0xbce4,	// (0x00016eb7) eswt_ctrl_wait_pane

0xbcec,	// (0x00016ebf) eswt_shell_pane

0x5c97,	// (0x00010e6a) listscroll_eswt_app_pane

0xbd0c,	// (0x00016edf) popup_eswt_tasktip_window_ParamLimits

0xbd0c,	// (0x00016edf) popup_eswt_tasktip_window

0x8901,	// (0x00013ad4) bg_popup_window_pane_cp18

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_ParamLimits

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_ParamLimits

0xbd2a,	// (0x00016efd) eswt_control_pane_g2

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_ParamLimits

0xbd37,	// (0x00016f0a) eswt_control_pane_g3

0xbd44,	// (0x00016f17) eswt_control_pane_g4_ParamLimits

0xbd44,	// (0x00016f17) eswt_control_pane_g4

0x0003,

0xfc03,	// (0x0001add6) eswt_control_pane_g_ParamLimits

0xfc03,	// (0x0001add6) eswt_control_pane_g

0x6b64,	// (0x00011d37) bg_button_pane_ParamLimits

0x6b64,	// (0x00011d37) bg_button_pane

0x6369,	// (0x0001153c) common_borders_pane_copy2_ParamLimits

0x6369,	// (0x0001153c) common_borders_pane_copy2

0xbd51,	// (0x00016f24) control_button_pane_g1_ParamLimits

0xbd51,	// (0x00016f24) control_button_pane_g1

0xbd5d,	// (0x00016f30) control_button_pane_g2_ParamLimits

0xbd5d,	// (0x00016f30) control_button_pane_g2

0xbd69,	// (0x00016f3c) control_button_pane_g3_ParamLimits

0xbd69,	// (0x00016f3c) control_button_pane_g3

0x0002,

0xfc0c,	// (0x0001addf) control_button_pane_g_ParamLimits

0xfc0c,	// (0x0001addf) control_button_pane_g

0xbd7d,	// (0x00016f50) control_button_pane_t1

0xbd8b,	// (0x00016f5e) control_button_pane_t2

0x0001,

0xfc13,	// (0x0001ade6) control_button_pane_t

0x87e7,	// (0x000139ba) bg_button_pane_g1

0x87f7,	// (0x000139ca) bg_button_pane_g2

0x87ef,	// (0x000139c2) bg_button_pane_g3

0x8807,	// (0x000139da) bg_button_pane_g4

0x87ff,	// (0x000139d2) bg_button_pane_g5

0x880f,	// (0x000139e2) bg_button_pane_g6

0x8817,	// (0x000139ea) bg_button_pane_g7

0x8827,	// (0x000139fa) bg_button_pane_g8

0x881f,	// (0x000139f2) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0001aa40) bg_button_pane_g

0xb1b0,	// (0x00016383) common_borders_pane_ParamLimits

0xb1b0,	// (0x00016383) common_borders_pane

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy1_ParamLimits

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy1

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy1_ParamLimits

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy1

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy1_ParamLimits

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy1

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy1_ParamLimits

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy1

0xb1eb,	// (0x000163be) bg_eswt_ctrl_canvas_pane_g1

0xb1b0,	// (0x00016383) common_borders_pane_cp2_ParamLimits

0xb1b0,	// (0x00016383) common_borders_pane_cp2

0xb1b0,	// (0x00016383) common_borders_pane_cp3_ParamLimits

0xb1b0,	// (0x00016383) common_borders_pane_cp3

0xbd99,	// (0x00016f6c) separator_horizontal_pane

0xbda1,	// (0x00016f74) separator_vertical_pane

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy2_ParamLimits

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy2

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy2_ParamLimits

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy2

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy2_ParamLimits

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy2

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy2_ParamLimits

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy2

0x5c97,	// (0x00010e6a) common_borders_pane_cp4

0xbdaa,	// (0x00016f7d) separator_horizontal_pane_g1

0xbdb3,	// (0x00016f86) separator_horizontal_pane_g2

0xbdbc,	// (0x00016f8f) separator_horizontal_pane_g3

0x0002,

0xfc18,	// (0x0001adeb) separator_horizontal_pane_g

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy3_ParamLimits

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy3

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy3_ParamLimits

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy3

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy3_ParamLimits

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy3

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy3_ParamLimits

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy3

0x5c97,	// (0x00010e6a) common_borders_pane_cp5

0xbdc5,	// (0x00016f98) separator_vertical_pane_g1

0xbdce,	// (0x00016fa1) separator_vertical_pane_g2

0xbdd7,	// (0x00016faa) separator_vertical_pane_g3

0x0002,

0xfc1f,	// (0x0001adf2) separator_vertical_pane_g

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy4_ParamLimits

0xbd1d,	// (0x00016ef0) eswt_control_pane_g1_copy4

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy4_ParamLimits

0xbd2a,	// (0x00016efd) eswt_control_pane_g2_copy4

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy4_ParamLimits

0xbd37,	// (0x00016f0a) eswt_control_pane_g3_copy4

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy4_ParamLimits

0xbd44,	// (0x00016f17) eswt_control_pane_g4_copy4

0x250a,	// (0x0000d6dd) eswt_ctrl_combo_button_pane

0x2512,	// (0x0000d6e5) eswt_ctrl_input_pane

0x251a,	// (0x0000d6ed) popup_choice_list_window_cp70

0x2522,	// (0x0000d6f5) eswt_ctrl_input_pane_t1

0x5c97,	// (0x00010e6a) input_focus_pane_cp70

0xb1b0,	// (0x00016383) bg_button_pane_cp70_ParamLimits

0xb1b0,	// (0x00016383) bg_button_pane_cp70

0x2530,	// (0x0000d703) eswt_ctrl_combo_button_pane_g1

0xbe0e,	// (0x00016fe1) wait_bar_pane_cp70

0x8901,	// (0x00013ad4) bg_popup_window_pane_cp70_ParamLimits

0x8901,	// (0x00013ad4) bg_popup_window_pane_cp70

0xbe16,	// (0x00016fe9) popup_eswt_tasktip_window_t1

0xbe2c,	// (0x00016fff) wait_bar_pane_cp71_ParamLimits

0xbe2c,	// (0x00016fff) wait_bar_pane_cp71

0xbe38,	// (0x0001700b) grid_eswt_app_pane

0x7178,	// (0x0001234b) scroll_pane_cp70

0x2538,	// (0x0000d70b) cell_eswt_app_pane_ParamLimits

0x2538,	// (0x0000d70b) cell_eswt_app_pane

0x2562,	// (0x0000d735) cell_eswt_app_pane_g1_ParamLimits

0x2562,	// (0x0000d735) cell_eswt_app_pane_g1

0x2591,	// (0x0000d764) cell_eswt_app_pane_g2_ParamLimits

0x2591,	// (0x0000d764) cell_eswt_app_pane_g2

0x0001,

0xfc26,	// (0x0001adf9) cell_eswt_app_pane_g_ParamLimits

0xfc26,	// (0x0001adf9) cell_eswt_app_pane_g

0x25ba,	// (0x0000d78d) cell_eswt_app_pane_t1_ParamLimits

0x25ba,	// (0x0000d78d) cell_eswt_app_pane_t1

0xbeff,	// (0x000170d2) grid_highlight_pane_cp70_ParamLimits

0xbeff,	// (0x000170d2) grid_highlight_pane_cp70

0x7882,	// (0x00012a55) set_content_pane_g1

0x7c57,	// (0x00012e2a) status_small_volume_pane

0x535a,	// (0x0001052d) status_small_volume_pane_g1

0x5362,	// (0x00010535) volume_small2_pane

0x536b,	// (0x0001053e) volume_small2_pane_g1

0x5374,	// (0x00010547) volume_small2_pane_g2

0x537d,	// (0x00010550) volume_small2_pane_g3

0x5386,	// (0x00010559) volume_small2_pane_g4

0x538f,	// (0x00010562) volume_small2_pane_g5

0x5398,	// (0x0001056b) volume_small2_pane_g6

0x53a1,	// (0x00010574) volume_small2_pane_g7

0x53aa,	// (0x0001057d) volume_small2_pane_g8

0x53b3,	// (0x00010586) volume_small2_pane_g9

0x53bc,	// (0x0001058f) volume_small2_pane_g10

0x0009,

0xfc2b,	// (0x0001adfe) volume_small2_pane_g

0xb5cc,	// (0x0001679f) fep_vkb_top_text_pane_g1_ParamLimits

0x246a,	// (0x0000d63d) fep_vkb_top_text_pane_t1_ParamLimits

0xb849,	// (0x00016a1c) popup_preview_fixed_window_g3_ParamLimits

0xb849,	// (0x00016a1c) popup_preview_fixed_window_g3

0x15d5,	// (0x0000c7a8) popup_toolbar_trans_pane

0x1eda,	// (0x0000d0ad) aid_height_set_list_ParamLimits

0x9cd3,	// (0x00014ea6) aid_size_parent_ParamLimits

0x7d35,	// (0x00012f08) list_highlight_pane_cp2_ParamLimits

0x7882,	// (0x00012a55) set_content_pane_g1_ParamLimits

0x20a5,	// (0x0000d278) list_single_image_pane_ParamLimits

0x20a5,	// (0x0000d278) list_single_image_pane

0x25ec,	// (0x0000d7bf) aid_size_cell_image_ParamLimits

0x25ec,	// (0x0000d7bf) aid_size_cell_image

0x25f9,	// (0x0000d7cc) grid_single_image_pane_ParamLimits

0x25f9,	// (0x0000d7cc) grid_single_image_pane

0x6b8a,	// (0x00011d5d) list_single_image_pane_g1_ParamLimits

0x6b8a,	// (0x00011d5d) list_single_image_pane_g1

0x6b96,	// (0x00011d69) list_single_image_pane_g2_ParamLimits

0x6b96,	// (0x00011d69) list_single_image_pane_g2

0x0001,

0xfc40,	// (0x0001ae13) list_single_image_pane_g_ParamLimits

0xfc40,	// (0x0001ae13) list_single_image_pane_g

0xbf24,	// (0x000170f7) list_single_image_pane_t1_ParamLimits

0xbf24,	// (0x000170f7) list_single_image_pane_t1

0x2605,	// (0x0000d7d8) cell_image_list_pane_ParamLimits

0x2605,	// (0x0000d7d8) cell_image_list_pane

0x2619,	// (0x0000d7ec) cell_image_list_pane_g1

0x2622,	// (0x0000d7f5) cell_image_list_pane_g2

0x0001,

0xfc45,	// (0x0001ae18) cell_image_list_pane_g

0xbf60,	// (0x00017133) aid_size_cell_tb_trans_pane

0x6b64,	// (0x00011d37) bg_tb_trans_pane

0xbf72,	// (0x00017145) grid_tb_trans_pane

0x87e7,	// (0x000139ba) bg_tb_trans_pane_g1

0x87f7,	// (0x000139ca) bg_tb_trans_pane_g2

0x87ef,	// (0x000139c2) bg_tb_trans_pane_g3

0x8807,	// (0x000139da) bg_tb_trans_pane_g4

0x87ff,	// (0x000139d2) bg_tb_trans_pane_g5

0x8827,	// (0x000139fa) bg_tb_trans_pane_g6

0x881f,	// (0x000139f2) bg_tb_trans_pane_g7

0x880f,	// (0x000139e2) bg_tb_trans_pane_g8

0x8817,	// (0x000139ea) bg_tb_trans_pane_g9

0x0008,

0xfc4a,	// (0x0001ae1d) bg_tb_trans_pane_g

0xbf86,	// (0x00017159) cell_toolbar_trans_pane_ParamLimits

0xbf86,	// (0x00017159) cell_toolbar_trans_pane

0xb1eb,	// (0x000163be) cell_toolbar_trans_pane_g1

0x22c6,	// (0x0000d499) list_form2_midp_pane_t1

0x22d4,	// (0x0000d4a7) list_form2_midp_pane_t2

0x0001,

0xfae7,	// (0x0001acba) list_form2_midp_pane_t

0xad52,	// (0x00015f25) scroll_pane_cp51_ParamLimits

0xaf55,	// (0x00016128) form2_midp_wait_pane_g1

0xaf5e,	// (0x00016131) form2_midp_wait_pane_g2

0xaf67,	// (0x0001613a) form2_midp_wait_pane_g3

0x0002,

0xfafc,	// (0x0001accf) form2_midp_wait_pane_g

0x5d8b,	// (0x00010f5e) list_highlight_pane_cp21_ParamLimits

0xafb6,	// (0x00016189) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xafc5,	// (0x00016198) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9ed5,	// (0x000150a8) list_single_2graphic_im_pane_ParamLimits

0x9ed5,	// (0x000150a8) list_single_2graphic_im_pane

0x262b,	// (0x0000d7fe) list_single_2graphic_im_pane_g1_ParamLimits

0x262b,	// (0x0000d7fe) list_single_2graphic_im_pane_g1

0x263c,	// (0x0000d80f) list_single_2graphic_im_pane_g2_ParamLimits

0x263c,	// (0x0000d80f) list_single_2graphic_im_pane_g2

0x2648,	// (0x0000d81b) list_single_2graphic_im_pane_g3_ParamLimits

0x2648,	// (0x0000d81b) list_single_2graphic_im_pane_g3

0x0003,

0xfc5d,	// (0x0001ae30) list_single_2graphic_im_pane_g_ParamLimits

0xfc5d,	// (0x0001ae30) list_single_2graphic_im_pane_g

0x265c,	// (0x0000d82f) list_single_2graphic_im_pane_t1_ParamLimits

0x265c,	// (0x0000d82f) list_single_2graphic_im_pane_t1

0xb855,	// (0x00016a28) list_single_graphic_2heading_pane_fp_ParamLimits

0xb855,	// (0x00016a28) list_single_graphic_2heading_pane_fp

0xb89b,	// (0x00016a6e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb89b,	// (0x00016a6e) list_single_graphic_2heading_pane_fp_g1

0xb86c,	// (0x00016a3f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb86c,	// (0x00016a3f) list_single_graphic_2heading_pane_fp_g2

0x6b8a,	// (0x00011d5d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6b8a,	// (0x00011d5d) list_single_graphic_2heading_pane_fp_g3

0x6b96,	// (0x00011d69) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6b96,	// (0x00011d69) list_single_graphic_2heading_pane_fp_g4

0xb878,	// (0x00016a4b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb878,	// (0x00016a4b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0001ad57) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0001ad57) list_single_graphic_2heading_pane_fp_g

0xc01a,	// (0x000171ed) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc01a,	// (0x000171ed) list_single_graphic_2heading_pane_fp_t1

0xb8d3,	// (0x00016aa6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb8d3,	// (0x00016aa6) list_single_graphic_2heading_pane_fp_t2

0xc030,	// (0x00017203) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc030,	// (0x00017203) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc66,	// (0x0001ae39) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc66,	// (0x0001ae39) list_single_graphic_2heading_pane_fp_t

0xb28b,	// (0x0001645e) fep_hwr_write_pane_g5_ParamLimits

0xb28b,	// (0x0001645e) fep_hwr_write_pane_g5

0xb297,	// (0x0001646a) fep_hwr_write_pane_g6_ParamLimits

0xb297,	// (0x0001646a) fep_hwr_write_pane_g6

0xbcec,	// (0x00016ebf) eswt_shell_pane_ParamLimits

0x8901,	// (0x00013ad4) bg_popup_window_pane_cp18_ParamLimits

0x9bf9,	// (0x00014dcc) heading_pane_cp70

0xbe16,	// (0x00016fe9) popup_eswt_tasktip_window_t1_ParamLimits

0x1696,	// (0x0000c869) aid_touch_tab_arrow_left

0x16ac,	// (0x0000c87f) aid_touch_tab_arrow_right

0x028e,	// (0x0000b461) title_pane_g3_ParamLimits

0x028e,	// (0x0000b461) title_pane_g3

0x6a51,	// (0x00011c24) set_value_pane_g1

0x15d5,	// (0x0000c7a8) popup_toolbar_trans_pane_ParamLimits

0xbf60,	// (0x00017133) aid_size_cell_tb_trans_pane_ParamLimits

0x6b64,	// (0x00011d37) bg_tb_trans_pane_ParamLimits

0xbf72,	// (0x00017145) grid_tb_trans_pane_ParamLimits

0x602e,	// (0x00011201) cont_note_pane_ParamLimits

0x602e,	// (0x00011201) cont_note_pane

0x6369,	// (0x0001153c) cont_snote2_single_text_pane_ParamLimits

0x6369,	// (0x0001153c) cont_snote2_single_text_pane

0x6369,	// (0x0001153c) cont_snote2_single_graphic_pane_ParamLimits

0x6369,	// (0x0001153c) cont_snote2_single_graphic_pane

0x8f3e,	// (0x00014111) cont_note_wait_pane_ParamLimits

0x8f3e,	// (0x00014111) cont_note_wait_pane

0x8f3e,	// (0x00014111) cont_note_image_pane_ParamLimits

0x8f3e,	// (0x00014111) cont_note_image_pane

0xc046,	// (0x00017219) popup_note2_window_g1_ParamLimits

0xc046,	// (0x00017219) popup_note2_window_g1

0xc077,	// (0x0001724a) popup_note2_window_t1_ParamLimits

0xc077,	// (0x0001724a) popup_note2_window_t1

0xc0bc,	// (0x0001728f) popup_note2_window_t2_ParamLimits

0xc0bc,	// (0x0001728f) popup_note2_window_t2

0xc101,	// (0x000172d4) popup_note2_window_t3_ParamLimits

0xc101,	// (0x000172d4) popup_note2_window_t3

0xc146,	// (0x00017319) popup_note2_window_t4_ParamLimits

0xc146,	// (0x00017319) popup_note2_window_t4

0x60a6,	// (0x00011279) popup_note2_window_t5_ParamLimits

0x60a6,	// (0x00011279) popup_note2_window_t5

0x0004,

0xfc72,	// (0x0001ae45) popup_note2_window_t_ParamLimits

0xfc72,	// (0x0001ae45) popup_note2_window_t

0xc175,	// (0x00017348) popup_note2_image_window_g1_ParamLimits

0xc175,	// (0x00017348) popup_note2_image_window_g1

0xc181,	// (0x00017354) popup_note2_image_window_g2_ParamLimits

0xc181,	// (0x00017354) popup_note2_image_window_g2

0x0001,

0xfc7d,	// (0x0001ae50) popup_note2_image_window_g_ParamLimits

0xfc7d,	// (0x0001ae50) popup_note2_image_window_g

0xc193,	// (0x00017366) popup_note2_image_window_t1_ParamLimits

0xc193,	// (0x00017366) popup_note2_image_window_t1

0xc1ab,	// (0x0001737e) popup_note2_image_window_t2_ParamLimits

0xc1ab,	// (0x0001737e) popup_note2_image_window_t2

0xc1c3,	// (0x00017396) popup_note2_image_window_t3_ParamLimits

0xc1c3,	// (0x00017396) popup_note2_image_window_t3

0x0002,

0xfc82,	// (0x0001ae55) popup_note2_image_window_t_ParamLimits

0xfc82,	// (0x0001ae55) popup_note2_image_window_t

0x8f4c,	// (0x0001411f) popup_note2_wait_window_g1_ParamLimits

0x8f4c,	// (0x0001411f) popup_note2_wait_window_g1

0x8f58,	// (0x0001412b) popup_note2_wait_window_g2_ParamLimits

0x8f58,	// (0x0001412b) popup_note2_wait_window_g2

0x8f64,	// (0x00014137) popup_note2_wait_window_g3_ParamLimits

0x8f64,	// (0x00014137) popup_note2_wait_window_g3

0x0002,

0xf84f,	// (0x0001aa22) popup_note2_wait_window_g_ParamLimits

0xf84f,	// (0x0001aa22) popup_note2_wait_window_g

0xc1df,	// (0x000173b2) popup_note2_wait_window_t1_ParamLimits

0xc1df,	// (0x000173b2) popup_note2_wait_window_t1

0xc1fd,	// (0x000173d0) popup_note2_wait_window_t2_ParamLimits

0xc1fd,	// (0x000173d0) popup_note2_wait_window_t2

0xc21b,	// (0x000173ee) popup_note2_wait_window_t3_ParamLimits

0xc21b,	// (0x000173ee) popup_note2_wait_window_t3

0xc22d,	// (0x00017400) popup_note2_wait_window_t4_ParamLimits

0xc22d,	// (0x00017400) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x0001ae5c) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x0001ae5c) popup_note2_wait_window_t

0xc23f,	// (0x00017412) wait_bar2_pane_ParamLimits

0xc23f,	// (0x00017412) wait_bar2_pane

0xc257,	// (0x0001742a) popup_snote2_single_text_window_g1_ParamLimits

0xc257,	// (0x0001742a) popup_snote2_single_text_window_g1

0xc27f,	// (0x00017452) popup_snote2_single_text_window_t1_ParamLimits

0xc27f,	// (0x00017452) popup_snote2_single_text_window_t1

0xc2cb,	// (0x0001749e) popup_snote2_single_text_window_t2_ParamLimits

0xc2cb,	// (0x0001749e) popup_snote2_single_text_window_t2

0xc317,	// (0x000174ea) popup_snote2_single_text_window_t3_ParamLimits

0xc317,	// (0x000174ea) popup_snote2_single_text_window_t3

0xc358,	// (0x0001752b) popup_snote2_single_text_window_t4_ParamLimits

0xc358,	// (0x0001752b) popup_snote2_single_text_window_t4

0xc38e,	// (0x00017561) popup_snote2_single_text_window_t5_ParamLimits

0xc38e,	// (0x00017561) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x0001ae65) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x0001ae65) popup_snote2_single_text_window_t

0xc3b9,	// (0x0001758c) popup_snote2_single_graphic_window_g1_ParamLimits

0xc3b9,	// (0x0001758c) popup_snote2_single_graphic_window_g1

0xc3e1,	// (0x000175b4) popup_snote2_single_graphic_window_g2_ParamLimits

0xc3e1,	// (0x000175b4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x0001ae70) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x0001ae70) popup_snote2_single_graphic_window_g

0xc409,	// (0x000175dc) popup_snote2_single_graphic_window_t1_ParamLimits

0xc409,	// (0x000175dc) popup_snote2_single_graphic_window_t1

0xc455,	// (0x00017628) popup_snote2_single_graphic_window_t2_ParamLimits

0xc455,	// (0x00017628) popup_snote2_single_graphic_window_t2

0xc317,	// (0x000174ea) popup_snote2_single_graphic_window_t3_ParamLimits

0xc317,	// (0x000174ea) popup_snote2_single_graphic_window_t3

0xc358,	// (0x0001752b) popup_snote2_single_graphic_window_t4_ParamLimits

0xc358,	// (0x0001752b) popup_snote2_single_graphic_window_t4

0xc38e,	// (0x00017561) popup_snote2_single_graphic_window_t5_ParamLimits

0xc38e,	// (0x00017561) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x0001ae75) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x0001ae75) popup_snote2_single_graphic_window_t

0xac07,	// (0x00015dda) clock_nsta_pane_cp2_t1

0xac07,	// (0x00015dda) clock_nsta_pane_cp2_t2

0x0001,

0xfabd,	// (0x0001ac90) clock_nsta_pane_cp2_t

0x6b7e,	// (0x00011d51) form_field_data_wide_pane_g1_ParamLimits

0x6b8a,	// (0x00011d5d) form_field_data_wide_pane_g2_ParamLimits

0x6b8a,	// (0x00011d5d) form_field_data_wide_pane_g2

0x6b96,	// (0x00011d69) form_field_data_wide_pane_g3_ParamLimits

0x6b96,	// (0x00011d69) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001a865) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001a865) form_field_data_wide_pane_g

0x21dc,	// (0x0000d3af) grid_touch_3_pane_ParamLimits

0x21dc,	// (0x0000d3af) grid_touch_3_pane

0x268d,	// (0x0000d860) cell_touch_3_pane_ParamLimits

0x268d,	// (0x0000d860) cell_touch_3_pane

0xb1eb,	// (0x000163be) cell_touch_3_pane_g1

0xb1eb,	// (0x000163be) cell_touch_3_pane_g2

0x0001,

0xfb42,	// (0x0001ad15) cell_touch_3_pane_g

0x60d8,	// (0x000112ab) cont_query_data_pane

0x60e0,	// (0x000112b3) cont_query_data_pane_cp1

0xc4d0,	// (0x000176a3) button_value_adjust_pane_cp7

0xc4d8,	// (0x000176ab) query_popup_pane_cp3

0x7403,	// (0x000125d6) bg_popup_sub_pane_cp22_ParamLimits

0x46e2,	// (0x0000f8b5) navi_navi_volume_pane_cp2

0x46fd,	// (0x0000f8d0) popup_side_volume_key_window_g2

0x470c,	// (0x0000f8df) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001a8f7) popup_side_volume_key_window_g

0x4729,	// (0x0000f8fc) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001a8fe) popup_side_volume_key_window_t

0x774c,	// (0x0001291f) popup_side_volume_key_window_ParamLimits

0x0694,	// (0x0000b867) list_double_graphic_pane_g4_ParamLimits

0x0694,	// (0x0000b867) list_double_graphic_pane_g4

0x207e,	// (0x0000d251) list_single_2heading_msg_pane_ParamLimits

0x207e,	// (0x0000d251) list_single_2heading_msg_pane

0x26d6,	// (0x0000d8a9) list_single_2heading_msg_pane_g1_ParamLimits

0x26d6,	// (0x0000d8a9) list_single_2heading_msg_pane_g1

0x26e2,	// (0x0000d8b5) list_single_2heading_msg_pane_g2_ParamLimits

0x26e2,	// (0x0000d8b5) list_single_2heading_msg_pane_g2

0x26f5,	// (0x0000d8c8) list_single_2heading_msg_pane_g3_ParamLimits

0x26f5,	// (0x0000d8c8) list_single_2heading_msg_pane_g3

0x2701,	// (0x0000d8d4) list_single_2heading_msg_pane_g4_ParamLimits

0x2701,	// (0x0000d8d4) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x0001ae80) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x0001ae80) list_single_2heading_msg_pane_g

0x2719,	// (0x0000d8ec) list_single_2heading_msg_pane_t1_ParamLimits

0x2719,	// (0x0000d8ec) list_single_2heading_msg_pane_t1

0x2741,	// (0x0000d914) list_single_2heading_msg_pane_t2_ParamLimits

0x2741,	// (0x0000d914) list_single_2heading_msg_pane_t2

0x27ac,	// (0x0000d97f) list_single_2heading_msg_pane_t3_ParamLimits

0x27ac,	// (0x0000d97f) list_single_2heading_msg_pane_t3

0xc5cc,	// (0x0001779f) list_single_2heading_msg_pane_t4_ParamLimits

0xc5cc,	// (0x0001779f) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x0001ae89) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x0001ae89) list_single_2heading_msg_pane_t

0x5cdf,	// (0x00010eb2) title_pane_g4_ParamLimits

0x5cdf,	// (0x00010eb2) title_pane_g4

0x44f0,	// (0x0000f6c3) title_pane_stacon_g3_ParamLimits

0x44f0,	// (0x0000f6c3) title_pane_stacon_g3

0xbfdd,	// (0x000171b0) list_single_2graphic_im_pane_g4_ParamLimits

0xbfdd,	// (0x000171b0) list_single_2graphic_im_pane_g4

0x999f,	// (0x00014b72) popup_side_volume_key_window_cp

0xa2ae,	// (0x00015481) main_idle_act2_pane_t1

0x4b09,	// (0x0000fcdc) toolbar_button_pane_g10

0x05ab,	// (0x0000b77e) popup_toolbar_window_cp1

0xabf8,	// (0x00015dcb) clock_nsta_pane_cp_t1

0xabf8,	// (0x00015dcb) clock_nsta_pane_cp_t2

0x0001,

0xfab8,	// (0x0001ac8b) clock_nsta_pane_cp_t

0x46e2,	// (0x0000f8b5) navi_navi_volume_pane_cp2_ParamLimits

0x46f1,	// (0x0000f8c4) popup_side_volume_key_window_g1_ParamLimits

0x46fd,	// (0x0000f8d0) popup_side_volume_key_window_g2_ParamLimits

0x470c,	// (0x0000f8df) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001a8f7) popup_side_volume_key_window_g_ParamLimits

0x4fc6,	// (0x00010199) fep_hwr_aid_pane

0x506d,	// (0x00010240) bg_fep_hwr_top_pane_g4_ParamLimits

0xb25b,	// (0x0001642e) fep_hwr_top_pane_g1_ParamLimits

0xb26d,	// (0x00016440) fep_hwr_top_pane_g2_ParamLimits

0x508d,	// (0x00010260) fep_hwr_top_pane_g3_ParamLimits

0xfb0d,	// (0x0001ace0) fep_hwr_top_pane_g_ParamLimits

0x50a2,	// (0x00010275) fep_hwr_top_text_pane_ParamLimits

0x9760,	// (0x00014933) aid_touch_tab_arrow_arrow_2

0x9769,	// (0x0001493c) aid_touch_tab_arrow_left_2

0x4fda,	// (0x000101ad) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5011,	// (0x000101e4) fep_hwr_prediction_pane

0xb3d4,	// (0x000165a7) fep_vkb_prediction_pane

0x244a,	// (0x0000d61d) fep_vkb_side_pane_g3_ParamLimits

0x244a,	// (0x0000d61d) fep_vkb_side_pane_g3

0x521d,	// (0x000103f0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5289,	// (0x0001045c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5296,	// (0x00010469) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbc,	// (0x0001ad8f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x53c5,	// (0x00010598) fep_hwr_prediction_pane_g1

0x53cf,	// (0x000105a2) fep_hwr_prediction_pane_g2

0xb253,	// (0x00016426) fep_hwr_prediction_pane_g3

0x53d7,	// (0x000105aa) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0001ae92) fep_hwr_prediction_pane_g

0xc5f1,	// (0x000177c4) fep_vkb_prediction_pane_g1

0xc5fb,	// (0x000177ce) fep_vkb_prediction_pane_g2

0xc603,	// (0x000177d6) fep_vkb_prediction_pane_g3

0xc60b,	// (0x000177de) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x0001ae9b) fep_vkb_prediction_pane_g

0x4df5,	// (0x0000ffc8) slider_set_pane_g3

0x4e09,	// (0x0000ffdc) slider_set_pane_g4

0x4e21,	// (0x0000fff4) slider_set_pane_g5

0x4df5,	// (0x0000ffc8) slider_set_pane_g6

0x4e37,	// (0x0001000a) slider_set_pane_g7

0x9e30,	// (0x00015003) slider_form_pane_g3

0x9e39,	// (0x0001500c) slider_form_pane_g4

0x9e41,	// (0x00015014) slider_form_pane_g5

0x9e30,	// (0x00015003) slider_form_pane_g6

0x2021,	// (0x0000d1f4) slider_form_pane_g7

0xa582,	// (0x00015755) slider_set_pane_vc_g3

0xa58b,	// (0x0001575e) slider_set_pane_vc_g4

0xa594,	// (0x00015767) slider_set_pane_vc_g5

0xa582,	// (0x00015755) slider_set_pane_vc_g6

0xa59d,	// (0x00015770) slider_set_pane_vc_g7

0xa582,	// (0x00015755) slider_form_pane_vc_g1

0xa58b,	// (0x0001575e) slider_form_pane_vc_g2

0xa594,	// (0x00015767) slider_form_pane_vc_g3

0xa582,	// (0x00015755) slider_form_pane_vc_g4

0xa8fe,	// (0x00015ad1) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x0001ac64) slider_form_pane_vc_g

0x5c97,	// (0x00010e6a) main_idle_act3_pane

0xc613,	// (0x000177e6) ai3_links_pane

0x281a,	// (0x0000d9ed) popup_ai3_data_window_ParamLimits

0x281a,	// (0x0000d9ed) popup_ai3_data_window

0x5c97,	// (0x00010e6a) grid_ai3_links_pane

0x2832,	// (0x0000da05) cell_ai3_links_pane_ParamLimits

0x2832,	// (0x0000da05) cell_ai3_links_pane

0xc64c,	// (0x0001781f) bg_popup_sub_pane_cp11

0xc659,	// (0x0001782c) cell_ai3_links_pane_g1

0x5c97,	// (0x00010e6a) bg_popup_sub_pane_cp12

0xc67e,	// (0x00017851) heading_ai3_data_pane

0xc686,	// (0x00017859) list_ai3_gene_pane

0xc692,	// (0x00017865) popup_ai3_data_window_g1

0xc69a,	// (0x0001786d) heading_ai3_data_pane_g1

0xc6a2,	// (0x00017875) heading_ai3_data_pane_t1

0xc6b0,	// (0x00017883) list_double_ai3_gene_pane_ParamLimits

0xc6b0,	// (0x00017883) list_double_ai3_gene_pane

0xc6bd,	// (0x00017890) list_single_ai3_gene_pane_ParamLimits

0xc6bd,	// (0x00017890) list_single_ai3_gene_pane

0xb1b0,	// (0x00016383) list_highlight_pane_cp7_ParamLimits

0xb1b0,	// (0x00016383) list_highlight_pane_cp7

0xc6ca,	// (0x0001789d) list_single_a13_gene_pane_t1_ParamLimits

0xc6ca,	// (0x0001789d) list_single_a13_gene_pane_t1

0xc6e1,	// (0x000178b4) list_single_ai3_gene_pane_g1

0xc6ea,	// (0x000178bd) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x0001aea4) list_single_ai3_gene_pane_g

0xc6f2,	// (0x000178c5) list_double_ai3_gene_pane_g1_ParamLimits

0xc6f2,	// (0x000178c5) list_double_ai3_gene_pane_g1

0xc6fe,	// (0x000178d1) list_double_ai3_gene_pane_t1_ParamLimits

0xc6fe,	// (0x000178d1) list_double_ai3_gene_pane_t1

0xc71a,	// (0x000178ed) list_double_ai3_gene_pane_t2_ParamLimits

0xc71a,	// (0x000178ed) list_double_ai3_gene_pane_t2

0xc72f,	// (0x00017902) list_double_ai3_gene_pane_t3_ParamLimits

0xc72f,	// (0x00017902) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x0001aea9) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x0001aea9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc4e9,	// (0x000176bc) aid_size_min_col_2

0x26c0,	// (0x0000d893) aid_size_min_msg_ParamLimits

0x26c0,	// (0x0000d893) aid_size_min_msg

0x245e,	// (0x0000d631) fep_vkb_top_text_pane_g2_ParamLimits

0x245e,	// (0x0000d631) fep_vkb_top_text_pane_g2

0x0001,

0xfb3d,	// (0x0001ad10) fep_vkb_top_text_pane_g_ParamLimits

0xfb3d,	// (0x0001ad10) fep_vkb_top_text_pane_g

0x5c97,	// (0x00010e6a) main_hc_apps_shell_pane

0xc74c,	// (0x0001791f) grid_hc_apps_pane_ParamLimits

0xc74c,	// (0x0001791f) grid_hc_apps_pane

0xc75b,	// (0x0001792e) list_hc_apps_pane

0xc763,	// (0x00017936) scroll_pane_cp37_ParamLimits

0xc763,	// (0x00017936) scroll_pane_cp37

0x284c,	// (0x0000da1f) cell_hc_apps_pane_ParamLimits

0x284c,	// (0x0000da1f) cell_hc_apps_pane

0x290c,	// (0x0000dadf) cell_hc_apps_pane_g1_ParamLimits

0x290c,	// (0x0000dadf) cell_hc_apps_pane_g1

0xc850,	// (0x00017a23) cell_hc_apps_pane_g2_ParamLimits

0xc850,	// (0x00017a23) cell_hc_apps_pane_g2

0xc86c,	// (0x00017a3f) cell_hc_apps_pane_g3_ParamLimits

0xc86c,	// (0x00017a3f) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x0001aeb0) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x0001aeb0) cell_hc_apps_pane_g

0x2939,	// (0x0000db0c) cell_hc_apps_pane_t1_ParamLimits

0x2939,	// (0x0000db0c) cell_hc_apps_pane_t1

0x602e,	// (0x00011201) grid_highlight_pane_cp10_ParamLimits

0x602e,	// (0x00011201) grid_highlight_pane_cp10

0x2977,	// (0x0000db4a) list_single_hc_apps_pane_ParamLimits

0x2977,	// (0x0000db4a) list_single_hc_apps_pane

0xc941,	// (0x00017b14) list_single_hc_apps_pane_g1

0xc95a,	// (0x00017b2d) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x0001aeb7) list_single_hc_apps_pane_g

0xc973,	// (0x00017b46) list_single_hc_apps_pane_g2_copy1

0xc98f,	// (0x00017b62) list_single_hc_apps_pane_t1

0x5d8b,	// (0x00010f5e) bg_set_opt_pane_cp_ParamLimits

0x441b,	// (0x0000f5ee) setting_slider_pane_t1_ParamLimits

0x4434,	// (0x0000f607) setting_slider_pane_t2_ParamLimits

0x444d,	// (0x0000f620) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001a74d) setting_slider_pane_t_ParamLimits

0x4464,	// (0x0000f637) slider_set_pane_ParamLimits

0x4987,	// (0x0000fb5a) control_pane_g5_ParamLimits

0x4987,	// (0x0000fb5a) control_pane_g5

0x9c8d,	// (0x00014e60) slider_set_pane_g1_ParamLimits

0x4de9,	// (0x0000ffbc) slider_set_pane_g2_ParamLimits

0x4df5,	// (0x0000ffc8) slider_set_pane_g3_ParamLimits

0x4e09,	// (0x0000ffdc) slider_set_pane_g4_ParamLimits

0x4e21,	// (0x0000fff4) slider_set_pane_g5_ParamLimits

0x4df5,	// (0x0000ffc8) slider_set_pane_g6_ParamLimits

0x4e37,	// (0x0001000a) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0001ab3e) slider_set_pane_g_ParamLimits

0x782d,	// (0x00012a00) navi_icon_text_pane_ParamLimits

0x1662,	// (0x0000c835) aid_fill_nsta_2_ParamLimits

0x1696,	// (0x0000c869) aid_touch_tab_arrow_left_ParamLimits

0x16ac,	// (0x0000c87f) aid_touch_tab_arrow_right_ParamLimits

0x1747,	// (0x0000c91a) clock_nsta_pane_ParamLimits

0x1db7,	// (0x0000cf8a) navi_icon_pane_g1_ParamLimits

0x1dc3,	// (0x0000cf96) navi_text_pane_t1_ParamLimits

0x22a8,	// (0x0000d47b) navi_icon_text_pane_g1_ParamLimits

0x22b4,	// (0x0000d487) navi_icon_text_pane_t1_ParamLimits

0xc941,	// (0x00017b14) list_single_hc_apps_pane_g1_ParamLimits

0xc95a,	// (0x00017b2d) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x0001aeb7) list_single_hc_apps_pane_g_ParamLimits

0xc973,	// (0x00017b46) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc98f,	// (0x00017b62) list_single_hc_apps_pane_t1_ParamLimits

0xdf55,	// (0x00019128) popup_toolbar2_fixed_window_ParamLimits

0xdf55,	// (0x00019128) popup_toolbar2_fixed_window

0x15cb,	// (0x0000c79e) popup_toolbar2_float_window

0x5c97,	// (0x00010e6a) bg_popup_sub_pane_cp27

0xc9bd,	// (0x00017b90) grid_toolbar2_float_pane

0x5c97,	// (0x00010e6a) bg_popup_sub_pane_cp26

0xc9bd,	// (0x00017b90) grid_toolbar2_fixed_pane

0x29aa,	// (0x0000db7d) cell_toolbar2_fixed_pane_ParamLimits

0x29aa,	// (0x0000db7d) cell_toolbar2_fixed_pane

0x29c5,	// (0x0000db98) cell_toolbar2_fixed_pane_g1

0xc9df,	// (0x00017bb2) toolbar2_fixed_button_pane

0x87e7,	// (0x000139ba) toolbar2_fixed_button_pane_g1

0x87f7,	// (0x000139ca) toolbar2_fixed_button_pane_g2

0x87ef,	// (0x000139c2) toolbar2_fixed_button_pane_g3

0x8807,	// (0x000139da) toolbar2_fixed_button_pane_g4

0x87ff,	// (0x000139d2) toolbar2_fixed_button_pane_g5

0x880f,	// (0x000139e2) toolbar2_fixed_button_pane_g6

0x8817,	// (0x000139ea) toolbar2_fixed_button_pane_g7

0x8827,	// (0x000139fa) toolbar2_fixed_button_pane_g8

0x881f,	// (0x000139f2) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0001aa40) toolbar2_fixed_button_pane_g

0xc9e7,	// (0x00017bba) cell_toolbar2_float_pane_ParamLimits

0xc9e7,	// (0x00017bba) cell_toolbar2_float_pane

0xc9f8,	// (0x00017bcb) cell_toolbar2_float_pane_g1

0xc9df,	// (0x00017bb2) toolbar2_fixed_button_pane_cp

0x2411,	// (0x0000d5e4) fep_vkb_accented_list_pane_ParamLimits

0x2411,	// (0x0000d5e4) fep_vkb_accented_list_pane

0x51fd,	// (0x000103d0) bg_popup_fep_shadow_pane_g9

0x79af,	// (0x00012b82) bg_popup_fep_shadow_pane_cp3

0x6e3e,	// (0x00012011) list_accented_list_pane

0xca01,	// (0x00017bd4) list_single_accented_list_pane_ParamLimits

0xca01,	// (0x00017bd4) list_single_accented_list_pane

0x79af,	// (0x00012b82) list_highlight_pane_cp10

0xca12,	// (0x00017be5) list_single_accented_list_pane_t1

0x14f5,	// (0x0000c6c8) popup_slider_window_ParamLimits

0x14f5,	// (0x0000c6c8) popup_slider_window

0xc4e0,	// (0x000176b3) aid_indentation_list_msg

0x2abe,	// (0x0000dc91) bg_popup_window_pane_cp19

0xcb36,	// (0x00017d09) popup_slider_window_g1

0xcb52,	// (0x00017d25) popup_slider_window_g2

0xcb6e,	// (0x00017d41) popup_slider_window_g3

0x0005,

0xfce9,	// (0x0001aebc) popup_slider_window_g

0xcbca,	// (0x00017d9d) popup_slider_window_t1

0xcc3e,	// (0x00017e11) small_volume_slider_vertical_pane

0xb1eb,	// (0x000163be) small_volume_slider_vertical_pane_g1

0xb1eb,	// (0x000163be) small_volume_slider_vertical_pane_g2

0xcc5a,	// (0x00017e2d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x0001aece) small_volume_slider_vertical_pane_g

0xdec3,	// (0x00019096) area_side_right_pane_ParamLimits

0xdec3,	// (0x00019096) area_side_right_pane

0xe336,	// (0x00019509) aid_size_side_button_ParamLimits

0xe336,	// (0x00019509) aid_size_side_button

0xe34f,	// (0x00019522) grid_sctrl_middle_pane_ParamLimits

0xe34f,	// (0x00019522) grid_sctrl_middle_pane

0x5413,	// (0x000105e6) sctrl_sk_bottom_pane

0x5424,	// (0x000105f7) sctrl_sk_top_pane

0x5436,	// (0x00010609) aid_touch_sctrl_top

0x5443,	// (0x00010616) bg_sctrl_sk_pane_ParamLimits

0x5443,	// (0x00010616) bg_sctrl_sk_pane

0x5451,	// (0x00010624) sctrl_sk_top_pane_g1

0x545e,	// (0x00010631) sctrl_sk_top_pane_t1

0x5436,	// (0x00010609) aid_touch_sctrl_bottom

0x5443,	// (0x00010616) bg_sctrl_sk_pane_cp_ParamLimits

0x5443,	// (0x00010616) bg_sctrl_sk_pane_cp

0x5479,	// (0x0001064c) sctrl_sk_bottom_pane_g1

0x545e,	// (0x00010631) sctrl_sk_bottom_pane_t1

0xe369,	// (0x0001953c) cell_sctrl_middle_pane_ParamLimits

0xe369,	// (0x0001953c) cell_sctrl_middle_pane

0xe37a,	// (0x0001954d) aid_touch_sctrl_middle_ParamLimits

0xe37a,	// (0x0001954d) aid_touch_sctrl_middle

0xe387,	// (0x0001955a) bg_sctrl_middle_pane_ParamLimits

0xe387,	// (0x0001955a) bg_sctrl_middle_pane

0x5ae2,	// (0x00010cb5) cell_sctrl_middle_pane_g1_ParamLimits

0x5ae2,	// (0x00010cb5) cell_sctrl_middle_pane_g1

0xe395,	// (0x00019568) cell_sctrl_middle_pane_g2_ParamLimits

0xe395,	// (0x00019568) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x0001aeda) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x0001aeda) cell_sctrl_middle_pane_g

0x87e7,	// (0x000139ba) bg_sctrl_middle_pane_g1

0x87ef,	// (0x000139c2) bg_sctrl_middle_pane_g2

0x87f7,	// (0x000139ca) bg_sctrl_middle_pane_g3

0x87ff,	// (0x000139d2) bg_sctrl_middle_pane_g4

0x8807,	// (0x000139da) bg_sctrl_middle_pane_g5

0x880f,	// (0x000139e2) bg_sctrl_middle_pane_g6

0x8817,	// (0x000139ea) bg_sctrl_middle_pane_g7

0x881f,	// (0x000139f2) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x0001aedf) bg_sctrl_middle_pane_g

0x8827,	// (0x000139fa) bg_sctrl_middle_pane_g8_copy1

0x87e7,	// (0x000139ba) bg_sctrl_sk_pane_g1

0x87f7,	// (0x000139ca) bg_sctrl_sk_pane_g2

0x87ef,	// (0x000139c2) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0001aa40) bg_sctrl_sk_pane_g

0x6527,	// (0x000116fa) aid_size_touch_scroll_bar

0x8807,	// (0x000139da) bg_sctrl_sk_pane_g4

0x87ff,	// (0x000139d2) bg_sctrl_sk_pane_g5

0x880f,	// (0x000139e2) bg_sctrl_sk_pane_g6

0x8817,	// (0x000139ea) bg_sctrl_sk_pane_g7

0x8827,	// (0x000139fa) bg_sctrl_sk_pane_g8

0x881f,	// (0x000139f2) bg_sctrl_sk_pane_g9

0x7ddd,	// (0x00012fb0) popup_fep_china_hwr2_fs_candidate_window

0x102f,	// (0x0000c202) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x102f,	// (0x0000c202) popup_fep_china_hwr2_fs_control_window

0x521d,	// (0x000103f0) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x0001aed5) sctrl_sk_top_pane_g

0x2be1,	// (0x0000ddb4) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2be1,	// (0x0000ddb4) aid_fep_china_hwr2_fs_cell

0x2bf5,	// (0x0000ddc8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2bf5,	// (0x0000ddc8) bg_popup_fep_shadow_pane_cp4

0x2c0c,	// (0x0000dddf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2c0c,	// (0x0000dddf) bg_popup_fep_shadow_pane_cp5

0x2c1e,	// (0x0000ddf1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2c1e,	// (0x0000ddf1) popup_fep_china_hwr2_fs_control_bar_grid

0x2c32,	// (0x0000de05) popup_fep_china_hwr2_fs_control_funtion_grid

0xccb6,	// (0x00017e89) aid_fep_china_hwr2_fs_candi_cell

0x5c97,	// (0x00010e6a) bg_popup_fep_shadow_pane_cp6

0xccc0,	// (0x00017e93) popup_fep_china_hwr2_fs_candidate_grid

0x2c3a,	// (0x0000de0d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2c3a,	// (0x0000de0d) cell_fep_china_hwr2_fs_funtion_grid

0xb1eb,	// (0x000163be) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcce2,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcce2,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xccf0,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xccf0,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x0001aef0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x0001aef0) cell_fep_china_hwr2_fs_funtion_grid_g

0x2c52,	// (0x0000de25) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2c52,	// (0x0000de25) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2c67,	// (0x0000de3a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2c67,	// (0x0000de3a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x0001aef5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x0001aef5) cell_fep_china_hwr2_fs_funtion_grid_t

0xcd37,	// (0x00017f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcd3f,	// (0x00017f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcd47,	// (0x00017f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x0001aefa) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcd4f,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcd4f,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid

0xcd68,	// (0x00017f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcd70,	// (0x00017f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb1eb,	// (0x000163be) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb1eb,	// (0x000163be) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb42,	// (0x0001ad15) cell_fep_china_hwr2_fs_candidate_grid_g

0xcd78,	// (0x00017f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x83c4,	// (0x00013597) clock_nsta_pane_cp_24_ParamLimits

0x83c4,	// (0x00013597) clock_nsta_pane_cp_24

0x8442,	// (0x00013615) indicator_nsta_pane_cp_24_ParamLimits

0x8442,	// (0x00013615) indicator_nsta_pane_cp_24

0x95b8,	// (0x0001478b) heading_pane_g1

0x0001,

0xf8d2,	// (0x0001aaa5) heading_pane_g

0xa0f5,	// (0x000152c8) grid_sct_catagory_button_pane

0xa127,	// (0x000152fa) scroll_pane_cp5_ParamLimits

0xad5e,	// (0x00015f31) button_value_adjust_pane_cp5_ParamLimits

0xad5e,	// (0x00015f31) button_value_adjust_pane_cp5

0xae56,	// (0x00016029) form2_midp_time_pane_ParamLimits

0xcd86,	// (0x00017f59) cell_sct_catagory_button_pane_ParamLimits

0xcd86,	// (0x00017f59) cell_sct_catagory_button_pane

0xb1b0,	// (0x00016383) bg_button_pane_cp01_ParamLimits

0xb1b0,	// (0x00016383) bg_button_pane_cp01

0xb1eb,	// (0x000163be) cell_sct_catagory_button_pane_g1

0x156e,	// (0x0000c741) popup_tb_extension_window

0x2c83,	// (0x0000de56) aid_size_cell_ext_ParamLimits

0x2c83,	// (0x0000de56) aid_size_cell_ext

0x6369,	// (0x0001153c) bg_tb_trans_pane_cp1_ParamLimits

0x6369,	// (0x0001153c) bg_tb_trans_pane_cp1

0x2ca9,	// (0x0000de7c) grid_tb_ext_pane_ParamLimits

0x2ca9,	// (0x0000de7c) grid_tb_ext_pane

0x2ce9,	// (0x0000debc) cell_tb_ext_pane_ParamLimits

0x2ce9,	// (0x0000debc) cell_tb_ext_pane

0x2d11,	// (0x0000dee4) cell_tb_ext_pane_g1_ParamLimits

0x2d11,	// (0x0000dee4) cell_tb_ext_pane_g1

0xce1e,	// (0x00017ff1) cell_tb_ext_pane_t1

0x602e,	// (0x00011201) list_highlight_pane_cp11_ParamLimits

0x602e,	// (0x00011201) list_highlight_pane_cp11

0x4354,	// (0x0000f527) popup_uni_indicator_window_ParamLimits

0x4354,	// (0x0000f527) popup_uni_indicator_window

0x6b64,	// (0x00011d37) bg_popup_sub_pane_cp14

0xce39,	// (0x0001800c) list_uniindi_pane

0xce45,	// (0x00018018) uniindi_top_pane

0x602e,	// (0x00011201) bg_uniindi_top_pane

0xce64,	// (0x00018037) uniindi_top_pane_g1

0xce7a,	// (0x0001804d) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x0001af01) uniindi_top_pane_g

0xcea4,	// (0x00018077) uniindi_top_pane_t1

0xcece,	// (0x000180a1) list_single_uniindi_pane_ParamLimits

0xcece,	// (0x000180a1) list_single_uniindi_pane

0xb1eb,	// (0x000163be) bg_uniindi_top_pane_g1

0xcee0,	// (0x000180b3) list_single_uniindi_pane_g1

0xcef3,	// (0x000180c6) list_single_uniindi_pane_t1

0x41d8,	// (0x0000f3ab) control_bg_pane

0xcf18,	// (0x000180eb) bg_sctrl_sk_pane_cp1

0xcf21,	// (0x000180f4) bg_sctrl_sk_pane_cp2

0xcf2a,	// (0x000180fd) control_bg_pane_g1

0xcf33,	// (0x00018106) control_bg_pane_g2

0x0001,

0xfd37,	// (0x0001af0a) control_bg_pane_g

0xab8a,	// (0x00015d5d) cell_indicator_nsta_pane_g1_ParamLimits

0x220f,	// (0x0000d3e2) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa6,	// (0x0001ac79) cell_indicator_nsta_pane_g_ParamLimits

0xaeda,	// (0x000160ad) form2_midp_time_pane_t1_ParamLimits

0xe75e,	// (0x00019931) main_idle_act4_pane_ParamLimits

0xe75e,	// (0x00019931) main_idle_act4_pane

0x156e,	// (0x0000c741) popup_tb_extension_window_ParamLimits

0x2cd0,	// (0x0000dea3) tb_ext_find_pane_ParamLimits

0x2cd0,	// (0x0000dea3) tb_ext_find_pane

0xcf3c,	// (0x0001810f) ai_gene_pane_1_cp1

0x7af8,	// (0x00012ccb) ai_gene_pane_2_cp1

0xcf44,	// (0x00018117) list_single_idle_plugin_calendar_pane

0xcf4d,	// (0x00018120) list_single_idle_plugin_notification_pane

0xcf56,	// (0x00018129) list_single_idle_plugin_player_pane

0x2d2e,	// (0x0000df01) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2d2e,	// (0x0000df01) list_single_idle_plugin_shortcut_pane

0x2d56,	// (0x0000df29) main_idle_act4_pane_t1

0x2d6c,	// (0x0000df3f) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x0001af0f) main_idle_act4_pane_t

0x2d84,	// (0x0000df57) middle_sk_idle_act4_pane_ParamLimits

0x2d84,	// (0x0000df57) middle_sk_idle_act4_pane

0x2da0,	// (0x0000df73) popup_clock_digital_analogue_window_cp2

0x2dc7,	// (0x0000df9a) shortcut_wheel_idle_act4_pane_ParamLimits

0x2dc7,	// (0x0000df9a) shortcut_wheel_idle_act4_pane

0xb1eb,	// (0x000163be) shortcut_wheel_idle_act4_pane_g1

0xb1eb,	// (0x000163be) shortcut_wheel_idle_act4_pane_g2

0xb1eb,	// (0x000163be) shortcut_wheel_idle_act4_pane_g3

0xb1eb,	// (0x000163be) shortcut_wheel_idle_act4_pane_g4

0xb1eb,	// (0x000163be) shortcut_wheel_idle_act4_pane_g5

0xcfe9,	// (0x000181bc) shortcut_wheel_idle_act4_pane_g6

0xcff1,	// (0x000181c4) shortcut_wheel_idle_act4_pane_g7

0xcff9,	// (0x000181cc) shortcut_wheel_idle_act4_pane_g8

0xd001,	// (0x000181d4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x0001af14) shortcut_wheel_idle_act4_pane_g

0xe78d,	// (0x00019960) middle_sk_idle_act4_pane_g1_ParamLimits

0xe78d,	// (0x00019960) middle_sk_idle_act4_pane_g1

0x2e44,	// (0x0000e017) middle_sk_idle_act4_pane_g2_ParamLimits

0x2e44,	// (0x0000e017) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x0001af37) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x0001af37) middle_sk_idle_act4_pane_g

0x2e5c,	// (0x0000e02f) middle_sk_idle_act4_pane_t1_ParamLimits

0x2e5c,	// (0x0000e02f) middle_sk_idle_act4_pane_t1

0x2e8b,	// (0x0000e05e) grid_ai_shortcut_pane_ParamLimits

0x2e8b,	// (0x0000e05e) grid_ai_shortcut_pane

0x2ea8,	// (0x0000e07b) list_highlight_pane_cp16_ParamLimits

0x2ea8,	// (0x0000e07b) list_highlight_pane_cp16

0x2eb5,	// (0x0000e088) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2eb5,	// (0x0000e088) list_single_idle_plugin_shortcut_pane_g1

0x2ec1,	// (0x0000e094) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2ec1,	// (0x0000e094) list_single_idle_plugin_shortcut_pane_g2

0x2edd,	// (0x0000e0b0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2edd,	// (0x0000e0b0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x0001af3c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x0001af3c) list_single_idle_plugin_shortcut_pane_g

0x2ef2,	// (0x0000e0c5) cell_ai_shortcut_pane_ParamLimits

0x2ef2,	// (0x0000e0c5) cell_ai_shortcut_pane

0x2f08,	// (0x0000e0db) cell_ai_shortcut_pane_g1_ParamLimits

0x2f08,	// (0x0000e0db) cell_ai_shortcut_pane_g1

0xcf3c,	// (0x0001810f) ai_gene_pane_1_cp2

0xd12e,	// (0x00018301) ai_gene_pane_2_cp2

0xd136,	// (0x00018309) list_highlight_pane_cp15

0xd13f,	// (0x00018312) list_single_idle_plugin_calendar_pane_g1

0xd136,	// (0x00018309) list_highlight_pane_cp17

0xd147,	// (0x0001831a) list_single_idle_plugin_calendar_pane_g1_copy1

0xd14f,	// (0x00018322) list_single_idle_plugin_player_pane_g1

0xa34e,	// (0x00015521) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x0001af43) list_single_idle_plugin_player_pane_g

0xd157,	// (0x0001832a) list_single_idle_plugin_player_pane_t1

0xd165,	// (0x00018338) list_single_idle_plugin_player_pane_t2

0xd173,	// (0x00018346) list_single_idle_plugin_player_pane_t3

0xd181,	// (0x00018354) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x0001af48) list_single_idle_plugin_player_pane_t

0xd18f,	// (0x00018362) wait_bar_pane_cp15

0xd197,	// (0x0001836a) grid_ai_notification_pane

0xa34e,	// (0x00015521) list_single_idle_plugin_notification_pane_g1

0x2f2a,	// (0x0000e0fd) cell_ai_notification_pane_ParamLimits

0x2f2a,	// (0x0000e0fd) cell_ai_notification_pane

0xd1ad,	// (0x00018380) cell_ai_notification_pane_g1

0xd1b5,	// (0x00018388) cell_ai_notification_pane_t1

0x2f37,	// (0x0000e10a) tb_ext_find_button_pane

0x2f3f,	// (0x0000e112) tb_ext_find_pane_g1

0x2f47,	// (0x0000e11a) tb_ext_find_pane_t1

0x7342,	// (0x00012515) tb_ext_find_button_pane_g1

0xd1e1,	// (0x000183b4) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x0001af51) tb_ext_find_button_pane_g

0x2d56,	// (0x0000df29) main_idle_act4_pane_t1_ParamLimits

0x2d6c,	// (0x0000df3f) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x0001af0f) main_idle_act4_pane_t_ParamLimits

0x2da0,	// (0x0000df73) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2db7,	// (0x0000df8a) sat_plugin_idle_act4_pane_ParamLimits

0x2db7,	// (0x0000df8a) sat_plugin_idle_act4_pane

0x2f55,	// (0x0000e128) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2f55,	// (0x0000e128) sat_plugin_idle_act4_pane_t1

0x2f6d,	// (0x0000e140) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2f6d,	// (0x0000e140) sat_plugin_idle_act4_pane_t2

0x2f85,	// (0x0000e158) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2f85,	// (0x0000e158) sat_plugin_idle_act4_pane_t3

0x2f9d,	// (0x0000e170) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2f9d,	// (0x0000e170) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x0001af56) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x0001af56) sat_plugin_idle_act4_pane_t

0x429d,	// (0x0000f470) popup_battery_window_ParamLimits

0x429d,	// (0x0000f470) popup_battery_window

0x602e,	// (0x00011201) bg_popup_sub_pane_cp25_ParamLimits

0x602e,	// (0x00011201) bg_popup_sub_pane_cp25

0xd236,	// (0x00018409) popup_battery_window_g1_ParamLimits

0xd236,	// (0x00018409) popup_battery_window_g1

0xd242,	// (0x00018415) popup_battery_window_t1_ParamLimits

0xd242,	// (0x00018415) popup_battery_window_t1

0xd254,	// (0x00018427) popup_battery_window_t2_ParamLimits

0xd254,	// (0x00018427) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x0001af5f) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x0001af5f) popup_battery_window_t

0x0d49,	// (0x0000bf1c) midp_canvas_pane_ParamLimits

0x0da6,	// (0x0000bf79) midp_keypad_pane_ParamLimits

0x0da6,	// (0x0000bf79) midp_keypad_pane

0x7d35,	// (0x00012f08) main_midp_pane_ParamLimits

0xac16,	// (0x00015de9) signal_pane_g2_cp_ParamLimits

0x2fb5,	// (0x0000e188) aid_size_cell_midp_keypad_ParamLimits

0x2fb5,	// (0x0000e188) aid_size_cell_midp_keypad

0x2fd3,	// (0x0000e1a6) midp_keyp_game_grid_pane_ParamLimits

0x2fd3,	// (0x0000e1a6) midp_keyp_game_grid_pane

0x2ffa,	// (0x0000e1cd) midp_keyp_rocker_pane_ParamLimits

0x2ffa,	// (0x0000e1cd) midp_keyp_rocker_pane

0x3053,	// (0x0000e226) midp_keyp_sk_left_pane_ParamLimits

0x3053,	// (0x0000e226) midp_keyp_sk_left_pane

0x30a7,	// (0x0000e27a) midp_keyp_sk_right_pane_ParamLimits

0x30a7,	// (0x0000e27a) midp_keyp_sk_right_pane

0x5c97,	// (0x00010e6a) bg_button_pane_cp03

0x30fb,	// (0x0000e2ce) midp_keyp_sk_left_pane_g1

0x5c97,	// (0x00010e6a) bg_button_pane_cp04

0x30fb,	// (0x0000e2ce) midp_keyp_sk_right_pane_g1

0xb1eb,	// (0x000163be) midp_keyp_rocker_pane_g1

0x3104,	// (0x0000e2d7) keyp_game_cell_pane_ParamLimits

0x3104,	// (0x0000e2d7) keyp_game_cell_pane

0x5c97,	// (0x00010e6a) bg_button_pane_cp02

0x3128,	// (0x0000e2fb) keyp_game_cell_pane_g1

0xdf05,	// (0x000190d8) popup_fep_vkb2_window_ParamLimits

0xdf05,	// (0x000190d8) popup_fep_vkb2_window

0xe3a1,	// (0x00019574) aid_size_cell_vkb2_ParamLimits

0xe3a1,	// (0x00019574) aid_size_cell_vkb2

0xe3d7,	// (0x000195aa) popup_fep_vkb2_window_g1_ParamLimits

0xe3d7,	// (0x000195aa) popup_fep_vkb2_window_g1

0xe41e,	// (0x000195f1) vkb2_area_bottom_pane_ParamLimits

0xe41e,	// (0x000195f1) vkb2_area_bottom_pane

0xe472,	// (0x00019645) vkb2_area_keypad_pane_ParamLimits

0xe472,	// (0x00019645) vkb2_area_keypad_pane

0xe4ba,	// (0x0001968d) vkb2_area_top_pane_ParamLimits

0xe4ba,	// (0x0001968d) vkb2_area_top_pane

0xe540,	// (0x00019713) vkb2_top_entry_pane_ParamLimits

0xe540,	// (0x00019713) vkb2_top_entry_pane

0xe56d,	// (0x00019740) vkb2_top_grid_left_pane_ParamLimits

0xe56d,	// (0x00019740) vkb2_top_grid_left_pane

0xe58d,	// (0x00019760) vkb2_top_grid_right_pane_ParamLimits

0xe58d,	// (0x00019760) vkb2_top_grid_right_pane

0x56dd,	// (0x000108b0) vkb2_cell_keypad_pane_ParamLimits

0x56dd,	// (0x000108b0) vkb2_cell_keypad_pane

0xe5d3,	// (0x000197a6) vkb2_area_bottom_grid_pane_ParamLimits

0xe5d3,	// (0x000197a6) vkb2_area_bottom_grid_pane

0xe5fd,	// (0x000197d0) vkb2_area_bottom_pane_g1_ParamLimits

0xe5fd,	// (0x000197d0) vkb2_area_bottom_pane_g1

0xe623,	// (0x000197f6) vkb2_area_bottom_pane_g2_ParamLimits

0xe623,	// (0x000197f6) vkb2_area_bottom_pane_g2

0xe654,	// (0x00019827) vkb2_area_bottom_pane_g3_ParamLimits

0xe654,	// (0x00019827) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x0001af64) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x0001af64) vkb2_area_bottom_pane_g

0x5887,	// (0x00010a5a) vkb2_top_cell_left_pane_ParamLimits

0x5887,	// (0x00010a5a) vkb2_top_cell_left_pane

0x344e,	// (0x0000e621) vkb2_top_entry_pane_g1_ParamLimits

0x344e,	// (0x0000e621) vkb2_top_entry_pane_g1

0x345c,	// (0x0000e62f) vkb2_top_entry_pane_t1_ParamLimits

0x345c,	// (0x0000e62f) vkb2_top_entry_pane_t1

0xd405,	// (0x000185d8) vkb2_top_entry_pane_t2_ParamLimits

0xd405,	// (0x000185d8) vkb2_top_entry_pane_t2

0xd437,	// (0x0001860a) vkb2_top_entry_pane_t3_ParamLimits

0xd437,	// (0x0001860a) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x0001af6b) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x0001af6b) vkb2_top_entry_pane_t

0xe6be,	// (0x00019891) vkb2_top_grid_right_pane_g1_ParamLimits

0xe6be,	// (0x00019891) vkb2_top_grid_right_pane_g1

0x58ea,	// (0x00010abd) vkb2_top_grid_right_pane_g2_ParamLimits

0x58ea,	// (0x00010abd) vkb2_top_grid_right_pane_g2

0x5902,	// (0x00010ad5) vkb2_top_grid_right_pane_g3_ParamLimits

0x5902,	// (0x00010ad5) vkb2_top_grid_right_pane_g3

0xe6d4,	// (0x000198a7) vkb2_top_grid_right_pane_g4_ParamLimits

0xe6d4,	// (0x000198a7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x0001af72) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x0001af72) vkb2_top_grid_right_pane_g

0x5930,	// (0x00010b03) vkb2_top_cell_left_pane_g1

0x5947,	// (0x00010b1a) vkb2_cell_keypad_pane_g1_ParamLimits

0x5947,	// (0x00010b1a) vkb2_cell_keypad_pane_g1

0xd45b,	// (0x0001862e) vkb2_cell_keypad_pane_t1_ParamLimits

0xd45b,	// (0x0001862e) vkb2_cell_keypad_pane_t1

0x5955,	// (0x00010b28) vkb2_cell_bottom_grid_pane_ParamLimits

0x5955,	// (0x00010b28) vkb2_cell_bottom_grid_pane

0x598e,	// (0x00010b61) vkb2_cell_bottom_grid_pane_g1

0x2de8,	// (0x0000dfbb) aid_call2_pane_cp02

0x2df0,	// (0x0000dfc3) aid_call_pane_cp02

0x2df8,	// (0x0000dfcb) clock_digital_number_pane_cp10

0x2e00,	// (0x0000dfd3) clock_digital_number_pane_cp11

0x2e08,	// (0x0000dfdb) clock_digital_number_pane_cp12

0x2e10,	// (0x0000dfe3) clock_digital_number_pane_cp13

0x2e18,	// (0x0000dfeb) clock_digital_separator_pane_cp10

0x7342,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g1

0x7342,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g2

0x2e20,	// (0x0000dff3) popup_clock_digital_analogue_window_cp2_g3

0x7342,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g4

0x2e20,	// (0x0000dff3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x0001af27) popup_clock_digital_analogue_window_cp2_g

0x2e28,	// (0x0000dffb) popup_clock_digital_analogue_window_cp2_t1

0x2e36,	// (0x0000e009) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x0001af32) popup_clock_digital_analogue_window_cp2_t

0xb1eb,	// (0x000163be) clock_digital_number_pane_cp10_g1

0xb1eb,	// (0x000163be) clock_digital_number_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001ad15) clock_digital_number_pane_cp10_g

0xb1eb,	// (0x000163be) clock_digital_separator_pane_cp10_g1

0xb1eb,	// (0x000163be) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001ad15) clock_digital_separator_pane_cp10_g

0xce86,	// (0x00018059) uniindi_top_pane_g3

0xce97,	// (0x0001806a) uniindi_top_pane_g4

0x5768,	// (0x0001093b) vkb2_row_keypad_pane_ParamLimits

0x5768,	// (0x0001093b) vkb2_row_keypad_pane

0x59ae,	// (0x00010b81) vkb2_cell_t_keypad_pane_ParamLimits

0x59ae,	// (0x00010b81) vkb2_cell_t_keypad_pane

0x59be,	// (0x00010b91) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x59be,	// (0x00010b91) vkb2_cell_t_keypad_pane_cp08

0x59d1,	// (0x00010ba4) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x59d1,	// (0x00010ba4) vkb2_cell_t_keypad_pane_cp09

0x59e5,	// (0x00010bb8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x59e5,	// (0x00010bb8) vkb2_cell_t_keypad_pane_cp01

0x59f6,	// (0x00010bc9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x59f6,	// (0x00010bc9) vkb2_cell_t_keypad_pane_cp02

0x5a07,	// (0x00010bda) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5a07,	// (0x00010bda) vkb2_cell_t_keypad_pane_cp03

0x5a18,	// (0x00010beb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5a18,	// (0x00010beb) vkb2_cell_t_keypad_pane_cp04

0x5a29,	// (0x00010bfc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5a29,	// (0x00010bfc) vkb2_cell_t_keypad_pane_cp05

0x5a3a,	// (0x00010c0d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5a3a,	// (0x00010c0d) vkb2_cell_t_keypad_pane_cp06

0x5a4b,	// (0x00010c1e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5a4b,	// (0x00010c1e) vkb2_cell_t_keypad_pane_cp07

0x5a5c,	// (0x00010c2f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5a5c,	// (0x00010c2f) vkb2_cell_t_keypad_pane_cp10

0x521d,	// (0x000103f0) vkb2_cell_t_keypad_pane_g1

0xe79b,	// (0x0001996e) vkb2_cell_t_keypad_pane_t1

0x41d8,	// (0x0000f3ab) popup_grid_graphic2_window

0x34c1,	// (0x0000e694) aid_size_cell_graphic2_ParamLimits

0x34c1,	// (0x0000e694) aid_size_cell_graphic2

0x34ff,	// (0x0000e6d2) bg_popup_window_pane_cp21_ParamLimits

0x34ff,	// (0x0000e6d2) bg_popup_window_pane_cp21

0x350d,	// (0x0000e6e0) graphic2_pages_pane_ParamLimits

0x350d,	// (0x0000e6e0) graphic2_pages_pane

0x3563,	// (0x0000e736) grid_graphic2_control_pane_ParamLimits

0x3563,	// (0x0000e736) grid_graphic2_control_pane

0x35ab,	// (0x0000e77e) grid_graphic2_pane_ParamLimits

0x35ab,	// (0x0000e77e) grid_graphic2_pane

0x3632,	// (0x0000e805) cell_graphic2_pane

0x5c97,	// (0x00010e6a) main_comp_mode_pane

0xc686,	// (0x00017859) list_ai3_gene_pane_ParamLimits

0x2abe,	// (0x0000dc91) bg_popup_window_pane_cp19_ParamLimits

0xcad8,	// (0x00017cab) bg_touch_area_indi_pane_ParamLimits

0xcad8,	// (0x00017cab) bg_touch_area_indi_pane

0xcaee,	// (0x00017cc1) bg_touch_area_indi_pane_cp01_ParamLimits

0xcaee,	// (0x00017cc1) bg_touch_area_indi_pane_cp01

0xcb04,	// (0x00017cd7) bg_touch_area_indi_pane_cp02_ParamLimits

0xcb04,	// (0x00017cd7) bg_touch_area_indi_pane_cp02

0xcb1c,	// (0x00017cef) bg_touch_area_indi_pane_cp03_ParamLimits

0xcb1c,	// (0x00017cef) bg_touch_area_indi_pane_cp03

0xcb36,	// (0x00017d09) popup_slider_window_g1_ParamLimits

0xcb52,	// (0x00017d25) popup_slider_window_g2_ParamLimits

0xcb6e,	// (0x00017d41) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x0001aebc) popup_slider_window_g_ParamLimits

0xcbca,	// (0x00017d9d) popup_slider_window_t1_ParamLimits

0xcc3e,	// (0x00017e11) small_volume_slider_vertical_pane_ParamLimits

0x3632,	// (0x0000e805) cell_graphic2_pane_ParamLimits

0x368f,	// (0x0000e862) bg_button_pane_cp10_ParamLimits

0x368f,	// (0x0000e862) bg_button_pane_cp10

0x36a2,	// (0x0000e875) bg_button_pane_cp11_ParamLimits

0x36a2,	// (0x0000e875) bg_button_pane_cp11

0x36b5,	// (0x0000e888) graphic2_pages_pane_g1_ParamLimits

0x36b5,	// (0x0000e888) graphic2_pages_pane_g1

0x36d0,	// (0x0000e8a3) graphic2_pages_pane_g2_ParamLimits

0x36d0,	// (0x0000e8a3) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x0001af80) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x0001af80) graphic2_pages_pane_g

0x36e8,	// (0x0000e8bb) graphic2_pages_pane_t1_ParamLimits

0x36e8,	// (0x0000e8bb) graphic2_pages_pane_t1

0x3700,	// (0x0000e8d3) cell_graphic2_control_pane_ParamLimits

0x3700,	// (0x0000e8d3) cell_graphic2_control_pane

0x3732,	// (0x0000e905) cell_graphic2_pane_g1_ParamLimits

0x3732,	// (0x0000e905) cell_graphic2_pane_g1

0xe7ad,	// (0x00019980) cell_graphic2_pane_g2_ParamLimits

0xe7ad,	// (0x00019980) cell_graphic2_pane_g2

0x373f,	// (0x0000e912) cell_graphic2_pane_g3_ParamLimits

0x373f,	// (0x0000e912) cell_graphic2_pane_g3

0xe7ba,	// (0x0001998d) cell_graphic2_pane_g4_ParamLimits

0xe7ba,	// (0x0001998d) cell_graphic2_pane_g4

0x374c,	// (0x0000e91f) cell_graphic2_pane_g5_ParamLimits

0x374c,	// (0x0000e91f) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x0001af85) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x0001af85) cell_graphic2_pane_g

0x376c,	// (0x0000e93f) cell_graphic2_pane_t1_ParamLimits

0x376c,	// (0x0000e93f) cell_graphic2_pane_t1

0x95ac,	// (0x0001477f) grid_highlight_pane_cp11_ParamLimits

0x95ac,	// (0x0001477f) grid_highlight_pane_cp11

0x602e,	// (0x00011201) bg_button_pane_cp05

0x37a1,	// (0x0000e974) cell_graphic2_control_pane_g1

0xb1eb,	// (0x000163be) bg_touch_area_indi_pane_g1

0xe7c7,	// (0x0001999a) aid_cmod_rocker_key_size

0xe7d1,	// (0x000199a4) aid_cmode_itu_key_size

0xe7db,	// (0x000199ae) main_cmode_video_pane

0xe7e5,	// (0x000199b8) main_comp_mode_itu_pane

0xe7f1,	// (0x000199c4) main_comp_mode_rocker_pane

0xe7fd,	// (0x000199d0) cell_cmode_rocker_pane_ParamLimits

0xe7fd,	// (0x000199d0) cell_cmode_rocker_pane

0xe80f,	// (0x000199e2) cell_cmode_itu_pane_ParamLimits

0xe80f,	// (0x000199e2) cell_cmode_itu_pane

0x6b64,	// (0x00011d37) bg_button_pane_cp06_ParamLimits

0x6b64,	// (0x00011d37) bg_button_pane_cp06

0xb484,	// (0x00016657) cell_cmode_rocker_pane_g1_ParamLimits

0xb484,	// (0x00016657) cell_cmode_rocker_pane_g1

0xcce2,	// (0x00017eb5) cell_cmode_rocker_pane_g2_ParamLimits

0xcce2,	// (0x00017eb5) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x0001af95) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x0001af95) cell_cmode_rocker_pane_g

0x5c97,	// (0x00010e6a) bg_button_pane_cp07

0xe824,	// (0x000199f7) cell_cmode_itu_pane_g1

0xe82d,	// (0x00019a00) cell_cmode_itu_pane_t1

0xe83b,	// (0x00019a0e) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x0001af9a) cell_cmode_itu_pane_t

0xcf08,	// (0x000180db) aid_touch_ctrl_left

0xcf10,	// (0x000180e3) aid_touch_ctrl_right

0x5c97,	// (0x00010e6a) compa_mode_pane

0x37c7,	// (0x0000e99a) aid_cmod_rocker_key_size_cp

0x37d1,	// (0x0000e9a4) aid_cmode_itu_key_size_cp

0xe849,	// (0x00019a1c) compa_mode_pane_g1

0xe851,	// (0x00019a24) compa_mode_pane_g2

0xe859,	// (0x00019a2c) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x0001af9f) compa_mode_pane_g

0x37db,	// (0x0000e9ae) main_comp_mode_itu_pane_cp

0x37e3,	// (0x0000e9b6) main_comp_mode_rocker_pane_cp

0x37eb,	// (0x0000e9be) cell_cmode_itu_pane_cp_ParamLimits

0x37eb,	// (0x0000e9be) cell_cmode_itu_pane_cp

0x3800,	// (0x0000e9d3) cell_cmode_rocker_pane_cp_ParamLimits

0x3800,	// (0x0000e9d3) cell_cmode_rocker_pane_cp

0x6b64,	// (0x00011d37) bg_button_pane_cp06_cp_ParamLimits

0x6b64,	// (0x00011d37) bg_button_pane_cp06_cp

0xb484,	// (0x00016657) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb484,	// (0x00016657) cell_cmode_rocker_pane_g1_cp

0xb1eb,	// (0x000163be) cell_cmode_rocker_pane_g2_cp

0x5c97,	// (0x00010e6a) bg_button_pane_cp07_cp

0x3812,	// (0x0000e9e5) cell_cmode_itu_pane_g1_cp

0x381b,	// (0x0000e9ee) cell_cmode_itu_pane_t1_cp

0x381b,	// (0x0000e9ee) cell_cmode_itu_pane_t2_cp

0x2017,	// (0x0000d1ea) settings_code_pane_cp2

0x5d8b,	// (0x00010f5e) bg_popup_window_pane_cp3_ParamLimits

0x61fc,	// (0x000113cf) heading_pane_cp3_ParamLimits

0x6208,	// (0x000113db) listscroll_popup_graphic_pane_ParamLimits

0x4fc6,	// (0x00010199) fep_hwr_aid_pane_ParamLimits

0x5436,	// (0x00010609) aid_touch_sctrl_top_ParamLimits

0x5451,	// (0x00010624) sctrl_sk_top_pane_g1_ParamLimits

0x521d,	// (0x000103f0) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x0001aed5) sctrl_sk_top_pane_g_ParamLimits

0x545e,	// (0x00010631) sctrl_sk_top_pane_t1_ParamLimits

0x5436,	// (0x00010609) aid_touch_sctrl_bottom_ParamLimits

0x545e,	// (0x00010631) sctrl_sk_bottom_pane_t1_ParamLimits

0xce52,	// (0x00018025) aid_area_touch_clock

0xe502,	// (0x000196d5) aid_vkb2_area_top_pane_cell_ParamLimits

0xe502,	// (0x000196d5) aid_vkb2_area_top_pane_cell

0xe5ad,	// (0x00019780) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe5ad,	// (0x00019780) aid_vkb2_area_bottom_pane_cell

0xd3bd,	// (0x00018590) popup_char_count_window

0xe861,	// (0x00019a34) popup_char_count_window_g1

0xe86a,	// (0x00019a3d) popup_char_count_window_g2

0xe873,	// (0x00019a46) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x0001afa6) popup_char_count_window_g

0xe87c,	// (0x00019a4f) popup_char_count_window_t1

0x550d,	// (0x000106e0) popup_fep_char_preview_window_ParamLimits

0x550d,	// (0x000106e0) popup_fep_char_preview_window

0xe522,	// (0x000196f5) vkb2_top_candi_pane_ParamLimits

0xe522,	// (0x000196f5) vkb2_top_candi_pane

0x3829,	// (0x0000e9fc) cell_vkb2_top_candi_pane_ParamLimits

0x3829,	// (0x0000e9fc) cell_vkb2_top_candi_pane

0x5a71,	// (0x00010c44) bg_popup_fep_char_preview_window_ParamLimits

0x5a71,	// (0x00010c44) bg_popup_fep_char_preview_window

0x5a7f,	// (0x00010c52) popup_fep_char_preview_window_t1_ParamLimits

0x5a7f,	// (0x00010c52) popup_fep_char_preview_window_t1

0xe88a,	// (0x00019a5d) bg_popup_fep_char_preview_window_g1

0xe892,	// (0x00019a65) bg_popup_fep_char_preview_window_g2

0xe89a,	// (0x00019a6d) bg_popup_fep_char_preview_window_g3

0xe8a2,	// (0x00019a75) bg_popup_fep_char_preview_window_g4

0xe8aa,	// (0x00019a7d) bg_popup_fep_char_preview_window_g5

0x5ab9,	// (0x00010c8c) bg_popup_fep_char_preview_window_g6

0xe8b2,	// (0x00019a85) bg_popup_fep_char_preview_window_g7

0xe8ba,	// (0x00019a8d) bg_popup_fep_char_preview_window_g8

0xe8c2,	// (0x00019a95) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x0001afad) bg_popup_fep_char_preview_window_g

0x521d,	// (0x000103f0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x521d,	// (0x000103f0) cell_vkb2_top_candi_pane_g1

0x522b,	// (0x000103fe) cell_vkb2_top_candi_pane_g2_ParamLimits

0x522b,	// (0x000103fe) cell_vkb2_top_candi_pane_g2

0xe76c,	// (0x0001993f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe76c,	// (0x0001993f) cell_vkb2_top_candi_pane_g3

0x5ac1,	// (0x00010c94) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5ac1,	// (0x00010c94) cell_vkb2_top_candi_pane_g4

0xbafe,	// (0x00016cd1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbafe,	// (0x00016cd1) cell_vkb2_top_candi_pane_g5

0x5ae2,	// (0x00010cb5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5ae2,	// (0x00010cb5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x0001afc0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x0001afc0) cell_vkb2_top_candi_pane_g

0x5af0,	// (0x00010cc3) cell_vkb2_top_candi_pane_t1

0x4dd5,	// (0x0000ffa8) aid_size_touch_slider_mark_ParamLimits

0x4dd5,	// (0x0000ffa8) aid_size_touch_slider_mark

0x3549,	// (0x0000e71c) grid_graphic2_catg_pane_ParamLimits

0x3549,	// (0x0000e71c) grid_graphic2_catg_pane

0x3605,	// (0x0000e7d8) popup_grid_graphic2_window_t1_ParamLimits

0x3605,	// (0x0000e7d8) popup_grid_graphic2_window_t1

0x361b,	// (0x0000e7ee) popup_grid_graphic2_window_t2_ParamLimits

0x361b,	// (0x0000e7ee) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x0001af7b) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x0001af7b) popup_grid_graphic2_window_t

0x602e,	// (0x00011201) bg_button_pane_cp05_ParamLimits

0x37a1,	// (0x0000e974) cell_graphic2_control_pane_g1_ParamLimits

0x388f,	// (0x0000ea62) cell_graphic2_catg_pane_ParamLimits

0x388f,	// (0x0000ea62) cell_graphic2_catg_pane

0x5c97,	// (0x00010e6a) bg_button_pane_cp12

0x38a1,	// (0x0000ea74) cell_graphic2_catg_pane_g1

0xce1e,	// (0x00017ff1) cell_tb_ext_pane_t1_ParamLimits

0x58a7,	// (0x00010a7a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x58a7,	// (0x00010a7a) vkb2_top_cell_right_narrow_pane

0x58bf,	// (0x00010a92) vkb2_top_cell_right_wide_pane_ParamLimits

0x58bf,	// (0x00010a92) vkb2_top_cell_right_wide_pane

0x4fb8,	// (0x0001018b) bg_vkb2_func_pane_ParamLimits

0x4fb8,	// (0x0001018b) bg_vkb2_func_pane

0x5930,	// (0x00010b03) vkb2_top_cell_left_pane_g1_ParamLimits

0x4fb8,	// (0x0001018b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4fb8,	// (0x0001018b) bg_vkb2_fuc_pane_cp03

0x598e,	// (0x00010b61) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x87ef,	// (0x000139c2) bg_vkb2_func_pane_g1

0x87f7,	// (0x000139ca) bg_vkb2_func_pane_g2

0x8807,	// (0x000139da) bg_vkb2_func_pane_g3

0x87ff,	// (0x000139d2) bg_vkb2_func_pane_g4

0x880f,	// (0x000139e2) bg_vkb2_func_pane_g5

0x8817,	// (0x000139ea) bg_vkb2_func_pane_g6

0x881f,	// (0x000139f2) bg_vkb2_func_pane_g7

0x8827,	// (0x000139fa) bg_vkb2_func_pane_g8

0x87e7,	// (0x000139ba) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x0001afcd) bg_vkb2_func_pane_g

0x4fb8,	// (0x0001018b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4fb8,	// (0x0001018b) bg_vkb2_fuc_pane_cp01

0x5930,	// (0x00010b03) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5930,	// (0x00010b03) vkb2_top_cell_right_wide_pane_g1

0x4fb8,	// (0x0001018b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4fb8,	// (0x0001018b) bg_vkb2_fuc_pane_cp02

0x598e,	// (0x00010b61) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x598e,	// (0x00010b61) vkb2_top_cell_right_narrow_pane_g1

0x29f8,	// (0x0000dbcb) aid_touch_area_decrease_ParamLimits

0x29f8,	// (0x0000dbcb) aid_touch_area_decrease

0x2a32,	// (0x0000dc05) aid_touch_area_increase_ParamLimits

0x2a32,	// (0x0000dc05) aid_touch_area_increase

0x2a5a,	// (0x0000dc2d) aid_touch_area_mute_ParamLimits

0x2a5a,	// (0x0000dc2d) aid_touch_area_mute

0x2a8a,	// (0x0000dc5d) aid_touch_area_slider_ParamLimits

0x2a8a,	// (0x0000dc5d) aid_touch_area_slider

0x2aca,	// (0x0000dc9d) popup_slider_window_g4_ParamLimits

0x2aca,	// (0x0000dc9d) popup_slider_window_g4

0x2af2,	// (0x0000dcc5) popup_slider_window_g5_ParamLimits

0x2af2,	// (0x0000dcc5) popup_slider_window_g5

0x2b26,	// (0x0000dcf9) popup_slider_window_g6_ParamLimits

0x2b26,	// (0x0000dcf9) popup_slider_window_g6

0xcbf8,	// (0x00017dcb) popup_slider_window_t2_ParamLimits

0xcbf8,	// (0x00017dcb) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x0001aec9) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x0001aec9) popup_slider_window_t

0x2b42,	// (0x0000dd15) slider_pane_ParamLimits

0x2b42,	// (0x0000dd15) slider_pane

0xe8ca,	// (0x00019a9d) slider_pane_g1_ParamLimits

0xe8ca,	// (0x00019a9d) slider_pane_g1

0xe8de,	// (0x00019ab1) slider_pane_g2_ParamLimits

0xe8de,	// (0x00019ab1) slider_pane_g2

0xe8f4,	// (0x00019ac7) slider_pane_g3_ParamLimits

0xe8f4,	// (0x00019ac7) slider_pane_g3

0x0003,

0xfe0d,	// (0x0001afe0) slider_pane_g_ParamLimits

0xfe0d,	// (0x0001afe0) slider_pane_g

0x15b6,	// (0x0000c789) popup_tb_float_extension_window_ParamLimits

0x15b6,	// (0x0000c789) popup_tb_float_extension_window

0xe920,	// (0x00019af3) aid_size_cell_tb_float_ext

0x5c97,	// (0x00010e6a) bg_popup_sub_window_cp28

0xe92c,	// (0x00019aff) grid_tb_float_ext_pane

0xe936,	// (0x00019b09) cell_tb_float_ext_pane_ParamLimits

0xe936,	// (0x00019b09) cell_tb_float_ext_pane

0xe950,	// (0x00019b23) cell_tb_float_ext_pane_g1

0xe959,	// (0x00019b2c) grid_highlight_pane_cp12

0xe314,	// (0x000194e7) cell_last_hwr_side_pane_ParamLimits

0xe314,	// (0x000194e7) cell_last_hwr_side_pane

0xb1eb,	// (0x000163be) cell_last_hwr_side_pane_g1

0xe962,	// (0x00019b35) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x0001afe9) cell_last_hwr_side_pane_g

0xe689,	// (0x0001985c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe689,	// (0x0001985c) vkb2_area_bottom_space_btn_pane

0x521d,	// (0x000103f0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe79b,	// (0x0001996e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5af0,	// (0x00010cc3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5b0f,	// (0x00010ce2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5b0f,	// (0x00010ce2) vkb2_area_bottom_space_btn_pane_g1

0x5b49,	// (0x00010d1c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5b49,	// (0x00010d1c) vkb2_area_bottom_space_btn_pane_g2

0x5b7f,	// (0x00010d52) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5b7f,	// (0x00010d52) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x0001afee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x0001afee) vkb2_area_bottom_space_btn_pane_g

0x507b,	// (0x0001024e) cel_fep_hwr_func_pane_ParamLimits

0x507b,	// (0x0001024e) cel_fep_hwr_func_pane

0xe2e9,	// (0x000194bc) cell_hwr_side_button_pane_ParamLimits

0xe2e9,	// (0x000194bc) cell_hwr_side_button_pane

0xce52,	// (0x00018025) aid_area_touch_clock_ParamLimits

0x602e,	// (0x00011201) bg_uniindi_top_pane_ParamLimits

0xce64,	// (0x00018037) uniindi_top_pane_g1_ParamLimits

0xce7a,	// (0x0001804d) uniindi_top_pane_g2_ParamLimits

0xce86,	// (0x00018059) uniindi_top_pane_g3_ParamLimits

0xce97,	// (0x0001806a) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x0001af01) uniindi_top_pane_g_ParamLimits

0xcea4,	// (0x00018077) uniindi_top_pane_t1_ParamLimits

0x602e,	// (0x00011201) bg_vkb2_func_pane_cp01_ParamLimits

0x602e,	// (0x00011201) bg_vkb2_func_pane_cp01

0xe96b,	// (0x00019b3e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe96b,	// (0x00019b3e) cel_fep_hwr_func_pane_g1

0x602e,	// (0x00011201) bg_vkb2_func_pane_cp02_ParamLimits

0x602e,	// (0x00011201) bg_vkb2_func_pane_cp02

0xe96b,	// (0x00019b3e) cell_hwr_side_button_pane_g1_ParamLimits

0xe96b,	// (0x00019b3e) cell_hwr_side_button_pane_g1

0x8648,	// (0x0001381b) status_pane_g4_ParamLimits

0x8648,	// (0x0001381b) status_pane_g4

0x8660,	// (0x00013833) status_pane_t1

0xaeed,	// (0x000160c0) form2_midp_gauge_slider_cont_pane

0xaef5,	// (0x000160c8) form2_midp_gauge_slider_pane_t1_ParamLimits

0x2303,	// (0x0000d4d6) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2315,	// (0x0000d4e8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf5,	// (0x0001acc8) form2_midp_gauge_slider_pane_t_ParamLimits

0xaf2b,	// (0x000160fe) form2_midp_slider_pane_ParamLimits

0x54cd,	// (0x000106a0) aid_size_cell_func_vkb2_ParamLimits

0x54cd,	// (0x000106a0) aid_size_cell_func_vkb2

0xe90c,	// (0x00019adf) slider_pane_g4_ParamLimits

0xe90c,	// (0x00019adf) slider_pane_g4

0xe6ea,	// (0x000198bd) form2_midp_gauge_slider_pane_t2_cp01

0xe6f8,	// (0x000198cb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe6f8,	// (0x000198cb) form2_midp_gauge_slider_pane_t3_cp01

0x5bf4,	// (0x00010dc7) form2_midp_slider_pane_cp01

0x5c97,	// (0x00010e6a) navi_smil_pane

0xe99b,	// (0x00019b6e) navi_smil_pane_g1

0xe9a3,	// (0x00019b76) navi_smil_pane_t1

0xe979,	// (0x00019b4c) form2_midp_slider_pane_g1

0xe982,	// (0x00019b55) form2_midp_slider_pane_g2

0xe98a,	// (0x00019b5d) form2_midp_slider_pane_g3

0xe979,	// (0x00019b4c) form2_midp_slider_pane_g4

0x38d5,	// (0x0000eaa8) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x0001aff7) form2_midp_slider_pane_g

0x5bb9,	// (0x00010d8c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5bb9,	// (0x00010d8c) vkb2_area_bottom_space_btn_pane_g4

0x1792,	// (0x0000c965) lc0_navi_pane_ParamLimits

0x1792,	// (0x0000c965) lc0_navi_pane

0x17fc,	// (0x0000c9cf) lc0_stat_indi_pane_ParamLimits

0x17fc,	// (0x0000c9cf) lc0_stat_indi_pane

0x1811,	// (0x0000c9e4) ls0_title_pane_ParamLimits

0x1811,	// (0x0000c9e4) ls0_title_pane

0x6b64,	// (0x00011d37) bg_popup_sub_pane_cp14_ParamLimits

0xce39,	// (0x0001800c) list_uniindi_pane_ParamLimits

0xce45,	// (0x00018018) uniindi_top_pane_ParamLimits

0xcee0,	// (0x000180b3) list_single_uniindi_pane_g1_ParamLimits

0xcef3,	// (0x000180c6) list_single_uniindi_pane_t1_ParamLimits

0xe715,	// (0x000198e8) lc0_stat_clock_pane_ParamLimits

0xe715,	// (0x000198e8) lc0_stat_clock_pane

0x38f8,	// (0x0000eacb) lc0_stat_indi_pane_g1_ParamLimits

0x38f8,	// (0x0000eacb) lc0_stat_indi_pane_g1

0x38eb,	// (0x0000eabe) lc0_stat_indi_pane_g2_ParamLimits

0x38eb,	// (0x0000eabe) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x0001b002) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x0001b002) lc0_stat_indi_pane_g

0xe722,	// (0x000198f5) lc0_uni_indicator_pane_ParamLimits

0xe722,	// (0x000198f5) lc0_uni_indicator_pane

0x3912,	// (0x0000eae5) ls0_title_pane_g1_ParamLimits

0x3912,	// (0x0000eae5) ls0_title_pane_g1

0x3926,	// (0x0000eaf9) ls0_title_pane_t1_ParamLimits

0x3926,	// (0x0000eaf9) ls0_title_pane_t1

0xe72f,	// (0x00019902) lc0_uni_indicator_pane_g1_ParamLimits

0xe72f,	// (0x00019902) lc0_uni_indicator_pane_g1

0xe9b1,	// (0x00019b84) lc0_stat_clock_pane_t1

0x5c97,	// (0x00010e6a) main_ai5_pane

0xe9bf,	// (0x00019b92) ai5_sk_pane_ParamLimits

0xe9bf,	// (0x00019b92) ai5_sk_pane

0x3983,	// (0x0000eb56) cell_ai5_widget_pane_ParamLimits

0x3983,	// (0x0000eb56) cell_ai5_widget_pane

0xe9cc,	// (0x00019b9f) aid_size_cell_widget_grid

0xe9e0,	// (0x00019bb3) bg_ai5_widget_pane_ParamLimits

0xe9e0,	// (0x00019bb3) bg_ai5_widget_pane

0x3a0c,	// (0x0000ebdf) cell_ai5_widget_pane_g2

0x3a1c,	// (0x0000ebef) cell_ai5_widget_pane_g3

0x3a3b,	// (0x0000ec0e) cell_ai5_widget_pane_g4

0x3a47,	// (0x0000ec1a) cell_ai5_widget_pane_g5

0x3a53,	// (0x0000ec26) cell_ai5_widget_pane_g6

0x3a5f,	// (0x0000ec32) cell_ai5_widget_pane_g7

0x3aa7,	// (0x0000ec7a) cell_ai5_widget_pane_t1_ParamLimits

0x3aa7,	// (0x0000ec7a) cell_ai5_widget_pane_t1

0x3ac4,	// (0x0000ec97) cell_ai5_widget_pane_t2_ParamLimits

0x3ac4,	// (0x0000ec97) cell_ai5_widget_pane_t2

0x3adc,	// (0x0000ecaf) cell_ai5_widget_pane_t3_ParamLimits

0x3adc,	// (0x0000ecaf) cell_ai5_widget_pane_t3

0x3af4,	// (0x0000ecc7) cell_ai5_widget_pane_t4_ParamLimits

0x3af4,	// (0x0000ecc7) cell_ai5_widget_pane_t4

0x3b0e,	// (0x0000ece1) cell_ai5_widget_pane_t5_ParamLimits

0x3b0e,	// (0x0000ece1) cell_ai5_widget_pane_t5

0xe9ec,	// (0x00019bbf) cell_ai5_widget_pane_t6_ParamLimits

0xe9ec,	// (0x00019bbf) cell_ai5_widget_pane_t6

0xe9fe,	// (0x00019bd1) cell_ai5_widget_pane_t7_ParamLimits

0xe9fe,	// (0x00019bd1) cell_ai5_widget_pane_t7

0x3b2d,	// (0x0000ed00) cell_ai5_widget_pane_t8_ParamLimits

0x3b2d,	// (0x0000ed00) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x0001b01c) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x0001b01c) cell_ai5_widget_pane_t

0x3b79,	// (0x0000ed4c) grid_ai5_widget_pane

0x6b64,	// (0x00011d37) highlight_cell_ai5_widget_pane_ParamLimits

0x6b64,	// (0x00011d37) highlight_cell_ai5_widget_pane

0x3b8f,	// (0x0000ed62) ai5_sk_left_pane

0x3b99,	// (0x0000ed6c) ai5_sk_middle_pane

0x3ba3,	// (0x0000ed76) ai5_sk_right_pane

0xea17,	// (0x00019bea) bg_ai5_widget_pane_g1_ParamLimits

0xea17,	// (0x00019bea) bg_ai5_widget_pane_g1

0xea23,	// (0x00019bf6) bg_ai5_widget_pane_g2_ParamLimits

0xea23,	// (0x00019bf6) bg_ai5_widget_pane_g2

0xea2f,	// (0x00019c02) bg_ai5_widget_pane_g3_ParamLimits

0xea2f,	// (0x00019c02) bg_ai5_widget_pane_g3

0xea3b,	// (0x00019c0e) bg_ai5_widget_pane_g4_ParamLimits

0xea3b,	// (0x00019c0e) bg_ai5_widget_pane_g4

0xea47,	// (0x00019c1a) bg_ai5_widget_pane_g5_ParamLimits

0xea47,	// (0x00019c1a) bg_ai5_widget_pane_g5

0xea53,	// (0x00019c26) bg_ai5_widget_pane_g6_ParamLimits

0xea53,	// (0x00019c26) bg_ai5_widget_pane_g6

0xea5f,	// (0x00019c32) bg_ai5_widget_pane_g7_ParamLimits

0xea5f,	// (0x00019c32) bg_ai5_widget_pane_g7

0xea6b,	// (0x00019c3e) bg_ai5_widget_pane_g8_ParamLimits

0xea6b,	// (0x00019c3e) bg_ai5_widget_pane_g8

0xea77,	// (0x00019c4a) bg_ai5_widget_pane_g9_ParamLimits

0xea77,	// (0x00019c4a) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x0001b031) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x0001b031) bg_ai5_widget_pane_g

0xeaaa,	// (0x00019c7d) cell_shortcut_ai5_widget_pane_ParamLimits

0xeaaa,	// (0x00019c7d) cell_shortcut_ai5_widget_pane

0x5e6e,	// (0x00011041) bg_cell_shortcut_ai5_widget_pane

0xeabb,	// (0x00019c8e) cell_grid_ai5_widget_pane_g1

0xeac4,	// (0x00019c97) highlight_cell_shortcut_ai5_widget_pane

0x87ef,	// (0x000139c2) ai5_sk_left_pane_g1

0xeacc,	// (0x00019c9f) ai5_sk_left_pane_g2

0xead4,	// (0x00019ca7) ai5_sk_left_pane_g3

0xeadc,	// (0x00019caf) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x0001b044) ai5_sk_left_pane_g

0xeae4,	// (0x00019cb7) ai5_sk_left_pane_t1

0x87f7,	// (0x000139ca) ai5_sk_right_pane_g1

0xeaf2,	// (0x00019cc5) ai5_sk_right_pane_g2

0xeafa,	// (0x00019ccd) ai5_sk_right_pane_g3

0xeb02,	// (0x00019cd5) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x0001b04d) ai5_sk_right_pane_g

0xeb0a,	// (0x00019cdd) ai5_sk_right_pane_t1

0x87f7,	// (0x000139ca) ai5_sk_middle_pane_g1

0x87ef,	// (0x000139c2) ai5_sk_middle_pane_g2

0x880f,	// (0x000139e2) ai5_sk_middle_pane_g3

0xeafa,	// (0x00019ccd) ai5_sk_middle_pane_g4

0xead4,	// (0x00019ca7) ai5_sk_middle_pane_g5

0xeb18,	// (0x00019ceb) ai5_sk_middle_pane_g6

0x3bad,	// (0x0000ed80) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x0001b056) ai5_sk_middle_pane_g

0x167e,	// (0x0000c851) aid_touch_area_size_lc0_ParamLimits

0x167e,	// (0x0000c851) aid_touch_area_size_lc0

0x524c,	// (0x0001041f) cell_hwr_candidate_pane_t1_ParamLimits

0x8326,	// (0x000134f9) aid_touch_navi_pane

0x1903,	// (0x0000cad6) status_dt_navi_pane_ParamLimits

0x1903,	// (0x0000cad6) status_dt_navi_pane

0x191b,	// (0x0000caee) status_dt_sta_pane_ParamLimits

0x191b,	// (0x0000caee) status_dt_sta_pane

0x3bb5,	// (0x0000ed88) dt_sta_controll_pane

0x3bc2,	// (0x0000ed95) dt_sta_indi_pane

0x3bcf,	// (0x0000eda2) dt_sta_title_pane

0x602e,	// (0x00011201) bg_dt_sta_indi_pane_ParamLimits

0x602e,	// (0x00011201) bg_dt_sta_indi_pane

0x3be1,	// (0x0000edb4) dt_sta_battery_pane

0x3be9,	// (0x0000edbc) dt_sta_indi_pane_g1

0xeb20,	// (0x00019cf3) dt_sta_indi_pane_g2

0xeb29,	// (0x00019cfc) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x0001b065) dt_sta_indi_pane_g

0xeb32,	// (0x00019d05) dt_sta_signal_pane

0x6b64,	// (0x00011d37) bg_dt_sta_title_pane_ParamLimits

0x6b64,	// (0x00011d37) bg_dt_sta_title_pane

0x970c,	// (0x000148df) dt_sta_title_pane_g1

0x3bf2,	// (0x0000edc5) dt_sta_title_pane_t1_ParamLimits

0x3bf2,	// (0x0000edc5) dt_sta_title_pane_t1

0x5c97,	// (0x00010e6a) bg_dt_sta_control_pane

0x3c07,	// (0x0000edda) dt_sta_controll_pane_g1

0xeb3b,	// (0x00019d0e) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00019d17) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x00019d20) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x0001b06c) bg_dt_sta_title_pane_g

0xb1eb,	// (0x000163be) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00019d29) dt_sta_signal_pane_g1

0xeb5e,	// (0x00019d31) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x0001b073) dt_sta_signal_pane_g

0xeb66,	// (0x00019d39) dt_sta_battery_pane_g1

0xeb6f,	// (0x00019d42) dt_sta_battery_pane_t1

0xb1eb,	// (0x000163be) bg_dt_sta_control_pane_g1

0x7425,	// (0x000125f8) fep_china_uni_eep_pane

0x742d,	// (0x00012600) fep_china_uni_entry_pane_ParamLimits

0x743d,	// (0x00012610) popup_fep_china_uni_window_g1_ParamLimits

0x744d,	// (0x00012620) popup_fep_china_uni_window_g2_ParamLimits

0x744d,	// (0x00012620) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001a903) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001a903) popup_fep_china_uni_window_g

0xeb7e,	// (0x00019d51) fep_china_uni_eep_pane_g1

0xeb86,	// (0x00019d59) fep_china_uni_eep_pane_t1

0xe992,	// (0x00019b65) aid_touch_area_size_smil_player

0x8476,	// (0x00013649) lc0_clock_pane

0x8654,	// (0x00013827) status_pane_g5_ParamLimits

0x8654,	// (0x00013827) status_pane_g5

0x114a,	// (0x0000c31d) popup_keymap_window

0x8614,	// (0x000137e7) status_icon_pane

0x3a1c,	// (0x0000ebef) cell_ai5_widget_pane_g3_ParamLimits

0x3a3b,	// (0x0000ec0e) cell_ai5_widget_pane_g4_ParamLimits

0x3a47,	// (0x0000ec1a) cell_ai5_widget_pane_g5_ParamLimits

0x3a6b,	// (0x0000ec3e) cell_ai5_widget_pane_g8_ParamLimits

0x3a6b,	// (0x0000ec3e) cell_ai5_widget_pane_g8

0x3a7f,	// (0x0000ec52) cell_ai5_widget_pane_g9_ParamLimits

0x3a7f,	// (0x0000ec52) cell_ai5_widget_pane_g9

0x3a93,	// (0x0000ec66) cell_ai5_widget_pane_g10_ParamLimits

0x3a93,	// (0x0000ec66) cell_ai5_widget_pane_g10

0xeb95,	// (0x00019d68) status_icon_pane_g1

0x5c97,	// (0x00010e6a) bg_popup_sub_pane_cp13

0xeb9d,	// (0x00019d70) popup_keymap_window_t1

0x0e7e,	// (0x0000c051) control_pane_g6_ParamLimits

0x0e7e,	// (0x0000c051) control_pane_g6

0x0e71,	// (0x0000c044) control_pane_g7_ParamLimits

0x0e71,	// (0x0000c044) control_pane_g7

0x0e64,	// (0x0000c037) control_pane_g8_ParamLimits

0x0e64,	// (0x0000c037) control_pane_g8

0x3bb5,	// (0x0000ed88) dt_sta_controll_pane_ParamLimits

0x3bc2,	// (0x0000ed95) dt_sta_indi_pane_ParamLimits

0x3bcf,	// (0x0000eda2) dt_sta_title_pane_ParamLimits

0x6530,	// (0x00011703) aid_size_touch_scroll_bar_cale

0x42b1,	// (0x0000f484) popup_discreet_window_ParamLimits

0x42b1,	// (0x0000f484) popup_discreet_window

0xdf4b,	// (0x0001911e) popup_sk_window

0x8f3e,	// (0x00014111) bg_popup_sub_pane_cp28_ParamLimits

0x8f3e,	// (0x00014111) bg_popup_sub_pane_cp28

0xebab,	// (0x00019d7e) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x00019d7e) popup_discreet_window_g1

0xebcb,	// (0x00019d9e) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x00019d9e) popup_discreet_window_t1

0xebe9,	// (0x00019dbc) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x00019dbc) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x0001b078) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x0001b078) popup_discreet_window_t

0x5c2d,	// (0x00010e00) popup_sk_window_g1

0x5c37,	// (0x00010e0a) popup_sk_window_g2

0x0001,

0xfeac,	// (0x0001b07f) popup_sk_window_g

0xec3b,	// (0x00019e0e) popup_sk_window_t1

0xec49,	// (0x00019e1c) popup_sk_window_t1_copy1

0x3a0c,	// (0x0000ebdf) cell_ai5_widget_pane_g2_ParamLimits

0x3b3f,	// (0x0000ed12) cell_ai5_widget_pane_t9_ParamLimits

0x3b3f,	// (0x0000ed12) cell_ai5_widget_pane_t9

0x5c97,	// (0x00010e6a) main_fep_fshwr2_pane

0x3c10,	// (0x0000ede3) aid_fshwr2_btn_pane

0x3c18,	// (0x0000edeb) aid_fshwr2_syb_pane

0x3c20,	// (0x0000edf3) aid_fshwr2_txt_pane

0x3c28,	// (0x0000edfb) fshwr2_func_candi_pane

0x3c32,	// (0x0000ee05) fshwr2_hwr_syb_pane

0x3c40,	// (0x0000ee13) fshwr2_icf_pane

0x5c97,	// (0x00010e6a) fshwr2_icf_bg_pane

0x3c4a,	// (0x0000ee1d) fshwr2_icf_pane_t1_ParamLimits

0x3c4a,	// (0x0000ee1d) fshwr2_icf_pane_t1

0xb1eb,	// (0x000163be) fshwr2_func_candi_pane_g1

0xec6b,	// (0x00019e3e) fshwr2_func_candi_row_pane_ParamLimits

0xec6b,	// (0x00019e3e) fshwr2_func_candi_row_pane

0x3c64,	// (0x0000ee37) cell_fshwr2_syb_pane_ParamLimits

0x3c64,	// (0x0000ee37) cell_fshwr2_syb_pane

0xb484,	// (0x00016657) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb484,	// (0x00016657) fshwr2_hwr_syb_pane_g1

0x5c97,	// (0x00010e6a) bg_popup_call_pane_cp01

0xec7c,	// (0x00019e4f) fshwr2_func_candi_cell_pane_ParamLimits

0xec7c,	// (0x00019e4f) fshwr2_func_candi_cell_pane

0xecad,	// (0x00019e80) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xecad,	// (0x00019e80) fshwr2_func_candi_cell_bg_pane

0xecc7,	// (0x00019e9a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xecc7,	// (0x00019e9a) fshwr2_func_candi_cell_pane_g1

0xece7,	// (0x00019eba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xece7,	// (0x00019eba) fshwr2_func_candi_cell_pane_t1

0x5c97,	// (0x00010e6a) bg_button_pane_cp08

0x79af,	// (0x00012b82) cell_fshwr2_syb_bg_pane

0x3c7e,	// (0x0000ee51) cell_fshwr2_syb_bg_pane_g1

0xecfa,	// (0x00019ecd) cell_fshwr2_syb_bg_pane_t1

0x6b64,	// (0x00011d37) main_tmo_pane

0x1e36,	// (0x0000d009) uni_indicator_pane_g1_ParamLimits

0x1e4b,	// (0x0000d01e) uni_indicator_pane_g2_ParamLimits

0x1e60,	// (0x0000d033) uni_indicator_pane_g3_ParamLimits

0x9a90,	// (0x00014c63) uni_indicator_pane_g4_ParamLimits

0x9a90,	// (0x00014c63) uni_indicator_pane_g4

0x9aa4,	// (0x00014c77) uni_indicator_pane_g5_ParamLimits

0x9aa4,	// (0x00014c77) uni_indicator_pane_g5

0x9ab8,	// (0x00014c8b) uni_indicator_pane_g6_ParamLimits

0x9ab8,	// (0x00014c8b) uni_indicator_pane_g6

0xf928,	// (0x0001aafb) uni_indicator_pane_g_ParamLimits

0x29da,	// (0x0000dbad) popup_tmo_note_window_ParamLimits

0x29da,	// (0x0000dbad) popup_tmo_note_window

0x5c97,	// (0x00010e6a) fshwr2_bg_pane

0xecd8,	// (0x00019eab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecd8,	// (0x00019eab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x0001b084) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x0001b084) fshwr2_func_candi_cell_pane_g

0xb1eb,	// (0x000163be) bg_popup_window_pane_cp01

0xed09,	// (0x00019edc) bg_popup_window_pane_g1_cp01

0xed12,	// (0x00019ee5) bg_popup_window_pane_cp22_ParamLimits

0xed12,	// (0x00019ee5) bg_popup_window_pane_cp22

0xed20,	// (0x00019ef3) listscroll_tmo_link_pane_ParamLimits

0xed20,	// (0x00019ef3) listscroll_tmo_link_pane

0xed60,	// (0x00019f33) popup_tmo_note_window_g1_ParamLimits

0xed60,	// (0x00019f33) popup_tmo_note_window_g1

0xed6d,	// (0x00019f40) tmo_note_info_pane_ParamLimits

0xed6d,	// (0x00019f40) tmo_note_info_pane

0x3c86,	// (0x0000ee59) list_tmo_note_info_pane_g1_ParamLimits

0x3c86,	// (0x0000ee59) list_tmo_note_info_pane_g1

0xed87,	// (0x00019f5a) list_tmo_note_info_pane_g2_ParamLimits

0xed87,	// (0x00019f5a) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x0001b089) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x0001b089) list_tmo_note_info_pane_g

0xeda3,	// (0x00019f76) list_tmo_note_info_text_pane_ParamLimits

0xeda3,	// (0x00019f76) list_tmo_note_info_text_pane

0xede5,	// (0x00019fb8) list_tmo_link_pane

0xedf2,	// (0x00019fc5) scroll_pane_cp20

0xedff,	// (0x00019fd2) list_single_tmo_link_pane_ParamLimits

0xedff,	// (0x00019fd2) list_single_tmo_link_pane

0xee0f,	// (0x00019fe2) list_single_tmo_link_pane_t1

0xee1d,	// (0x00019ff0) list_tmo_note_info_text_pane_t1_ParamLimits

0xee1d,	// (0x00019ff0) list_tmo_note_info_text_pane_t1

0x0a98,	// (0x0000bc6b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0a98,	// (0x0000bc6b) aid_size_touch_scroll_bar_cp01

0x09b3,	// (0x0000bb86) aid_size_touch_slider_marker

0xdf3b,	// (0x0001910e) popup_settings_window_ParamLimits

0xdf3b,	// (0x0001910e) popup_settings_window

0x7d5d,	// (0x00012f30) popup_candi_list_indi_window

0x8326,	// (0x000134f9) aid_touch_navi_pane_ParamLimits

0x540a,	// (0x000105dd) rs_clock_indi_pane

0x5413,	// (0x000105e6) sctrl_sk_bottom_pane_ParamLimits

0x5424,	// (0x000105f7) sctrl_sk_top_pane_ParamLimits

0x5527,	// (0x000106fa) popup_fep_tooltip_window

0xe9cc,	// (0x00019b9f) aid_size_cell_widget_grid_ParamLimits

0x3a00,	// (0x0000ebd3) cell_ai5_widget_pane_g1_ParamLimits

0x3a00,	// (0x0000ebd3) cell_ai5_widget_pane_g1

0x3a53,	// (0x0000ec26) cell_ai5_widget_pane_g6_ParamLimits

0x3a5f,	// (0x0000ec32) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x0001b007) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x0001b007) cell_ai5_widget_pane_g

0x3b63,	// (0x0000ed36) cell_ai5_widget_pane_t10_ParamLimits

0x3b63,	// (0x0000ed36) cell_ai5_widget_pane_t10

0x3b79,	// (0x0000ed4c) grid_ai5_widget_pane_ParamLimits

0xea83,	// (0x00019c56) cell_contacts_ai5_widget_pane_ParamLimits

0xea83,	// (0x00019c56) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00019dd1) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00019dd1) popup_discreet_window_t3

0xec57,	// (0x00019e2a) popup_fshwr2_char_preview_window_ParamLimits

0xec57,	// (0x00019e2a) popup_fshwr2_char_preview_window

0x3c9d,	// (0x0000ee70) tmo_note_info_pane_t1

0x3cb2,	// (0x0000ee85) tmo_note_info_pane_t2

0x3ccb,	// (0x0000ee9e) tmo_note_info_pane_t3

0xedc1,	// (0x00019f94) tmo_note_info_pane_t4

0xedd3,	// (0x00019fa6) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x0001b08e) tmo_note_info_pane_t

0xede5,	// (0x00019fb8) list_tmo_link_pane_ParamLimits

0xedf2,	// (0x00019fc5) scroll_pane_cp20_ParamLimits

0x5c97,	// (0x00010e6a) bg_popup_fep_char_preview_window_cp01

0xee36,	// (0x0001a009) popup_fshwr2_char_preview_window_t1

0xee44,	// (0x0001a017) popup_candi_list_indi_window_g1

0xee4d,	// (0x0001a020) bg_cell_contacts_ai5_widget_pane

0xee59,	// (0x0001a02c) cell_contacts_ai5_widget_pane_g1

0xee6d,	// (0x0001a040) cell_contacts_ai5_widget_pane_g2

0xee7c,	// (0x0001a04f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x0001b099) cell_contacts_ai5_widget_pane_g

0xee8f,	// (0x0001a062) cell_contacts_ai5_widget_pane_t1

0x6b64,	// (0x00011d37) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef09,	// (0x0001a0dc) settings_container_pane

0x79af,	// (0x00012b82) listscroll_set_pane_copy1

0xa6a6,	// (0x00015879) scroll_pane_cp121_copy1

0xef15,	// (0x0001a0e8) set_content_pane_copy1

0xef1d,	// (0x0001a0f0) aid_height_set_list_copy1_ParamLimits

0xef1d,	// (0x0001a0f0) aid_height_set_list_copy1

0x9cd3,	// (0x00014ea6) aid_size_parent_copy1_ParamLimits

0x9cd3,	// (0x00014ea6) aid_size_parent_copy1

0xef29,	// (0x0001a0fc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef29,	// (0x0001a0fc) button_value_adjust_pane_cp6_copy1

0x7d35,	// (0x00012f08) list_highlight_pane_cp2_copy1_ParamLimits

0x7d35,	// (0x00012f08) list_highlight_pane_cp2_copy1

0xef3d,	// (0x0001a110) list_set_pane_copy1_ParamLimits

0xef3d,	// (0x0001a110) list_set_pane_copy1

0xeea4,	// (0x0001a077) main_pane_set_t1_copy1_ParamLimits

0xeea4,	// (0x0001a077) main_pane_set_t1_copy1

0xeede,	// (0x0001a0b1) main_pane_set_t2_copy1_ParamLimits

0xeede,	// (0x0001a0b1) main_pane_set_t2_copy1

0xefea,	// (0x0001a1bd) main_pane_set_t3_copy1

0xeff8,	// (0x0001a1cb) main_pane_set_t4_copy1

0xeefd,	// (0x0001a0d0) set_content_pane_g1_copy1_ParamLimits

0xeefd,	// (0x0001a0d0) set_content_pane_g1_copy1

0xf006,	// (0x0001a1d9) setting_code_pane_copy1

0xf010,	// (0x0001a1e3) setting_slider_graphic_pane_copy1

0xf010,	// (0x0001a1e3) setting_slider_pane_copy1

0xf010,	// (0x0001a1e3) setting_text_pane_copy1

0xf01a,	// (0x0001a1ed) setting_volume_pane_copy1

0xf023,	// (0x0001a1f6) settings_code_pane_cp2_copy1

0xf02b,	// (0x0001a1fe) settings_code_pane_cp_copy1_ParamLimits

0xf02b,	// (0x0001a1fe) settings_code_pane_cp_copy1

0xf03f,	// (0x0001a212) volume_set_pane_copy1

0xf047,	// (0x0001a21a) volume_set_pane_g10_copy1

0xf04f,	// (0x0001a222) volume_set_pane_g1_copy1

0xf057,	// (0x0001a22a) volume_set_pane_g2_copy1

0xf05f,	// (0x0001a232) volume_set_pane_g3_copy1

0xf067,	// (0x0001a23a) volume_set_pane_g4_copy1

0xf06f,	// (0x0001a242) volume_set_pane_g5_copy1

0xf077,	// (0x0001a24a) volume_set_pane_g6_copy1

0xf07f,	// (0x0001a252) volume_set_pane_g7_copy1

0xf087,	// (0x0001a25a) volume_set_pane_g8_copy1

0xf08f,	// (0x0001a262) volume_set_pane_g9_copy1

0x5d8b,	// (0x00010f5e) bg_set_opt_pane_cp_copy1_ParamLimits

0x5d8b,	// (0x00010f5e) bg_set_opt_pane_cp_copy1

0xf097,	// (0x0001a26a) setting_slider_pane_t1_copy1_ParamLimits

0xf097,	// (0x0001a26a) setting_slider_pane_t1_copy1

0xf0b5,	// (0x0001a288) setting_slider_pane_t2_copy1_ParamLimits

0xf0b5,	// (0x0001a288) setting_slider_pane_t2_copy1

0xf0cf,	// (0x0001a2a2) setting_slider_pane_t3_copy1_ParamLimits

0xf0cf,	// (0x0001a2a2) setting_slider_pane_t3_copy1

0xf0e7,	// (0x0001a2ba) slider_set_pane_copy1_ParamLimits

0xf0e7,	// (0x0001a2ba) slider_set_pane_copy1

0x6ca0,	// (0x00011e73) set_opt_bg_pane_g1_copy2

0x6ca8,	// (0x00011e7b) set_opt_bg_pane_g2_copy2

0xf111,	// (0x0001a2e4) set_opt_bg_pane_g3_copy2

0x6cb8,	// (0x00011e8b) set_opt_bg_pane_g4_copy2

0x6cc0,	// (0x00011e93) set_opt_bg_pane_g5_copy2

0x6cc8,	// (0x00011e9b) set_opt_bg_pane_g6_copy2

0xf11b,	// (0x0001a2ee) set_opt_bg_pane_g7_copy2

0xf123,	// (0x0001a2f6) set_opt_bg_pane_g8_copy2

0xf12d,	// (0x0001a300) set_opt_bg_pane_g9_copy2

0x5c41,	// (0x00010e14) aid_size_touch_slider_mark_copy1_ParamLimits

0x5c41,	// (0x00010e14) aid_size_touch_slider_mark_copy1

0xf137,	// (0x0001a30a) slider_set_pane_g1_copy1

0x5c55,	// (0x00010e28) slider_set_pane_g2_copy1

0x4df5,	// (0x0000ffc8) slider_set_pane_g3_copy1_ParamLimits

0x4df5,	// (0x0000ffc8) slider_set_pane_g3_copy1

0x4e09,	// (0x0000ffdc) slider_set_pane_g4_copy1_ParamLimits

0x4e09,	// (0x0000ffdc) slider_set_pane_g4_copy1

0x4e21,	// (0x0000fff4) slider_set_pane_g5_copy1_ParamLimits

0x4e21,	// (0x0000fff4) slider_set_pane_g5_copy1

0x4df5,	// (0x0000ffc8) slider_set_pane_g6_copy1_ParamLimits

0x4df5,	// (0x0000ffc8) slider_set_pane_g6_copy1

0x5c5d,	// (0x00010e30) slider_set_pane_g7_copy1_ParamLimits

0x5c5d,	// (0x00010e30) slider_set_pane_g7_copy1

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp2_copy1

0xf140,	// (0x0001a313) setting_slider_graphic_pane_g1_copy1

0xf149,	// (0x0001a31c) setting_slider_graphic_pane_t1_copy1

0xf159,	// (0x0001a32c) setting_slider_graphic_pane_t2_copy1

0xf169,	// (0x0001a33c) slider_set_pane_cp_copy1

0xf179,	// (0x0001a34c) input_focus_pane_cp1_copy1

0xf182,	// (0x0001a355) list_set_text_pane_copy1

0xf18a,	// (0x0001a35d) setting_text_pane_g1_copy1

0xf193,	// (0x0001a366) set_text_pane_t1_copy1

0xf179,	// (0x0001a34c) input_focus_pane_cp2_copy1

0xf18a,	// (0x0001a35d) setting_code_pane_g1_copy1

0xf1b0,	// (0x0001a383) setting_code_pane_t1_copy1

0xf0fd,	// (0x0001a2d0) list_set_graphic_pane_copy1

0x5cab,	// (0x00010e7e) bg_set_opt_pane_cp4_copy1

0x76b1,	// (0x00012884) list_set_graphic_pane_g1_copy1_ParamLimits

0x76b1,	// (0x00012884) list_set_graphic_pane_g1_copy1

0xf1be,	// (0x0001a391) list_set_graphic_pane_g2_copy1

0x76c9,	// (0x0001289c) list_set_graphic_pane_t1_copy1_ParamLimits

0x76c9,	// (0x0001289c) list_set_graphic_pane_t1_copy1

0xb1eb,	// (0x000163be) rs_clock_indi_pane_g1

0xf1c6,	// (0x0001a399) rs_clock_indi_pane_t1

0xf1d4,	// (0x0001a3a7) rs_indi_pane

0xf1dc,	// (0x0001a3af) rs_indi_pane_g1

0xf1e5,	// (0x0001a3b8) rs_indi_pane_g2

0xf1ee,	// (0x0001a3c1) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x0001b0a0) rs_indi_pane_g

0x79af,	// (0x00012b82) bg_popup_preview_window_pane_cp03

0xf1f7,	// (0x0001a3ca) popup_fep_tooltip_window_t1

0xc06a,	// (0x0001723d) popup_note2_window_g2_ParamLimits

0xc06a,	// (0x0001723d) popup_note2_window_g2

0x0001,

0xfc6d,	// (0x0001ae40) popup_note2_window_g_ParamLimits

0xfc6d,	// (0x0001ae40) popup_note2_window_g

0xc64c,	// (0x0001781f) bg_popup_sub_pane_cp11_ParamLimits

0xc659,	// (0x0001782c) cell_ai3_links_pane_g1_ParamLimits

0xc670,	// (0x00017843) cell_ai3_links_pane_t1

0xf193,	// (0x0001a366) set_text_pane_t1_copy1_ParamLimits

0x78be,	// (0x00012a91) cell_graphic_popup_pane_cp2_ParamLimits

0x78be,	// (0x00012a91) cell_graphic_popup_pane_cp2

0xf205,	// (0x0001a3d8) cell_graphic_popup_pane_g1_cp2

0x6343,	// (0x00011516) cell_graphic_popup_pane_g2_cp2

0xf20d,	// (0x0001a3e0) cell_graphic_popup_pane_g3_cp2

0xf215,	// (0x0001a3e8) cell_graphic_popup_pane_t2_cp2

0x6354,	// (0x00011527) grid_highlight_pane_cp3_cp2

0x7086,	// (0x00012259) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6b64,	// (0x00011d37) main_tmo_pane_ParamLimits

0x29ce,	// (0x0000dba1) popup_tmo_big_image_note_window

0x39f0,	// (0x0000ebc3) cell_ai5_widget_list_pane

0x39f8,	// (0x0000ebcb) cell_ai5_widget_lrg_icon_pane

0x3c9d,	// (0x0000ee70) tmo_note_info_pane_t1_ParamLimits

0x3cb2,	// (0x0000ee85) tmo_note_info_pane_t2_ParamLimits

0x3ccb,	// (0x0000ee9e) tmo_note_info_pane_t3_ParamLimits

0xedc1,	// (0x00019f94) tmo_note_info_pane_t4_ParamLimits

0xedd3,	// (0x00019fa6) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x0001b08e) tmo_note_info_pane_t_ParamLimits

0xef09,	// (0x0001a0dc) settings_container_pane_ParamLimits

0xf171,	// (0x0001a344) indicator_popup_pane_cp5

0xf171,	// (0x0001a344) indicator_popup_pane_cp6

0xf0fd,	// (0x0001a2d0) list_set_graphic_pane_copy1_ParamLimits

0x5c97,	// (0x00010e6a) bg_popup_window_pane_cp23

0xf223,	// (0x0001a3f6) popup_tmo_big_image_note_window_g1

0xf22e,	// (0x0001a401) popup_tmo_big_image_note_window_t1

0xf23e,	// (0x0001a411) popup_tmo_big_image_note_window_t2

0xf24e,	// (0x0001a421) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x0001b0a7) popup_tmo_big_image_note_window_t

0x3ce0,	// (0x0000eeb3) cell_ai5_widget_lrg_icon_pane_g1

0x3ce8,	// (0x0000eebb) cell_ai5_widget_lrg_icon_pane_t1

0x3cf6,	// (0x0000eec9) cell_ai5_widget_list_row_pane_ParamLimits

0x3cf6,	// (0x0000eec9) cell_ai5_widget_list_row_pane

0x3d0f,	// (0x0000eee2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3d0f,	// (0x0000eee2) cell_ai5_widget_list_row_pane_g1

0x3d1c,	// (0x0000eeef) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3d1c,	// (0x0000eeef) cell_ai5_widget_list_row_pane_t1

0x3d34,	// (0x0000ef07) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3d34,	// (0x0000ef07) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x0001b0ae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x0001b0ae) cell_ai5_widget_list_row_pane_t

0x41d8,	// (0x0000f3ab) main_fep_vtchi_ss_pane

0xf25e,	// (0x0001a431) popup_fep_char_pre_window

0xf266,	// (0x0001a439) popup_fep_ituss_window

0xf287,	// (0x0001a45a) popup_fep_vkbss_window

0xf2a6,	// (0x0001a479) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x0001a479) grid_vkbss_keypad_pane

0xf2b6,	// (0x0001a489) ituss_keypad_pane

0xf2ce,	// (0x0001a4a1) aid_vkbss_key_offset_ParamLimits

0xf2ce,	// (0x0001a4a1) aid_vkbss_key_offset

0xf2da,	// (0x0001a4ad) cell_vkbss_key_pane_ParamLimits

0xf2da,	// (0x0001a4ad) cell_vkbss_key_pane

0x8630,	// (0x00013803) bg_cell_vkbss_key_g1_ParamLimits

0x8630,	// (0x00013803) bg_cell_vkbss_key_g1

0xf2f0,	// (0x0001a4c3) cell_vkbss_key_3p_pane_ParamLimits

0xf2f0,	// (0x0001a4c3) cell_vkbss_key_3p_pane

0xf30a,	// (0x0001a4dd) cell_vkbss_key_g1_ParamLimits

0xf30a,	// (0x0001a4dd) cell_vkbss_key_g1

0xf324,	// (0x0001a4f7) cell_vkbss_key_t1_ParamLimits

0xf324,	// (0x0001a4f7) cell_vkbss_key_t1

0xf34f,	// (0x0001a522) cell_ituss_key_pane_ParamLimits

0xf34f,	// (0x0001a522) cell_ituss_key_pane

0xf35f,	// (0x0001a532) bg_cell_ituss_key_g1_ParamLimits

0xf35f,	// (0x0001a532) bg_cell_ituss_key_g1

0xf36b,	// (0x0001a53e) cell_ituss_key_pane_g1_ParamLimits

0xf36b,	// (0x0001a53e) cell_ituss_key_pane_g1

0xf377,	// (0x0001a54a) cell_ituss_key_pane_g2_ParamLimits

0xf377,	// (0x0001a54a) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0001b0b3) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0001b0b3) cell_ituss_key_pane_g

0xf390,	// (0x0001a563) cell_ituss_key_t1_ParamLimits

0xf390,	// (0x0001a563) cell_ituss_key_t1

0xf3be,	// (0x0001a591) cell_ituss_key_t2_ParamLimits

0xf3be,	// (0x0001a591) cell_ituss_key_t2

0xf3ef,	// (0x0001a5c2) cell_ituss_key_t3_ParamLimits

0xf3ef,	// (0x0001a5c2) cell_ituss_key_t3

0xf420,	// (0x0001a5f3) cell_ituss_key_t4_ParamLimits

0xf420,	// (0x0001a5f3) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x0001b0b8) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0001b0b8) cell_ituss_key_t

0xf451,	// (0x0001a624) cell_vkbss_key_3p_pane_g1

0xf459,	// (0x0001a62c) cell_vkbss_key_3p_pane_g2

0xf461,	// (0x0001a634) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0001b0c1) cell_vkbss_key_3p_pane_g

0x5c97,	// (0x00010e6a) bg_popup_fep_char_preview_window_cp02

0xf469,	// (0x0001a63c) popup_fep_char_pre_window_t1

0x39e6,	// (0x0000ebb9) main_ai5_sk_pane

0xee4d,	// (0x0001a020) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee59,	// (0x0001a02c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee6d,	// (0x0001a040) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee7c,	// (0x0001a04f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x0001b099) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee8f,	// (0x0001a062) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6b64,	// (0x00011d37) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3d46,	// (0x0000ef19) main_ai5_sk_pane_g1

0x8d7c,	// (0x00013f4f) popup_query_code_window_g1

0xf27c,	// (0x0001a44f) popup_fep_vkb_icf_pane

0xf290,	// (0x0001a463) popup_fep_vtchi_icf_pane

0x6b64,	// (0x00011d37) bg_icf_pane

0xf487,	// (0x0001a65a) list_vkb_icf_pane

0x6b64,	// (0x00011d37) bg_icf_pane_cp01

0xf49f,	// (0x0001a672) vtchi_icf_list_pane

0xf4af,	// (0x0001a682) list_vkb_icf_pane_t1_ParamLimits

0xf4af,	// (0x0001a682) list_vkb_icf_pane_t1

0xf4c9,	// (0x0001a69c) vtchi_icf_list_pane_t1_ParamLimits

0xf4c9,	// (0x0001a69c) vtchi_icf_list_pane_t1

0xf266,	// (0x0001a439) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0001a463) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0001a489) ituss_keypad_pane_ParamLimits

0xf2c5,	// (0x0001a498) ituss_sks_pane

0x6b64,	// (0x00011d37) bg_icf_pane_ParamLimits

0xf478,	// (0x0001a64b) icf_edit_indi_pane_ParamLimits

0xf478,	// (0x0001a64b) icf_edit_indi_pane

0xf487,	// (0x0001a65a) list_vkb_icf_pane_ParamLimits

0x6b64,	// (0x00011d37) bg_icf_pane_cp01_ParamLimits

0xf493,	// (0x0001a666) icf_edit_indi_pane_cp01_ParamLimits

0xf493,	// (0x0001a666) icf_edit_indi_pane_cp01

0xf4a7,	// (0x0001a67a) vtchi_query_pane

0xb484,	// (0x00016657) icf_edit_indi_pane_g1_ParamLimits

0xb484,	// (0x00016657) icf_edit_indi_pane_g1

0xf4f0,	// (0x0001a6c3) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0001a6c3) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0001b0c8) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0001b0c8) icf_edit_indi_pane_g

0xf4fc,	// (0x0001a6cf) icf_edit_indi_pane_t1

0xf50a,	// (0x0001a6dd) bg_input_focus_pane_cp042

0x6527,	// (0x000116fa) vtchi_button_pane

0xf513,	// (0x0001a6e6) vtchi_query_pane_t1

0xf521,	// (0x0001a6f4) vtchi_query_pane_t2

0xf52f,	// (0x0001a702) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001b0cd) vtchi_query_pane_t

0x5c97,	// (0x00010e6a) bg_button_pane_cp13

0xf53d,	// (0x0001a710) vtchi_button_pane_g1

0xcf2a,	// (0x000180fd) ituss_sks_pane_g1

0xf545,	// (0x0001a718) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001b0d4) ituss_sks_pane_g

0xf54e,	// (0x0001a721) ituss_sks_pane_t1

0xf55c,	// (0x0001a72f) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001b0d9) ituss_sks_pane_t

0xabc7,	// (0x00015d9a) indicator_nsta_pane_cp_g1

0xabd0,	// (0x00015da3) indicator_nsta_pane_cp_g2

0xabd8,	// (0x00015dab) indicator_nsta_pane_cp_g3

0xabe0,	// (0x00015db3) indicator_nsta_pane_cp_g4

0xabe8,	// (0x00015dbb) indicator_nsta_pane_cp_g5

0xabf0,	// (0x00015dc3) indicator_nsta_pane_cp_g6

0x0005,

0xfaab,	// (0x0001ac7e) indicator_nsta_pane_cp_g

0x3783,	// (0x0000e956) cell_graphic2_pane_t2_ParamLimits

0x3783,	// (0x0000e956) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x0001af90) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x0001af90) cell_graphic2_pane_t

0x37b9,	// (0x0000e98c) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

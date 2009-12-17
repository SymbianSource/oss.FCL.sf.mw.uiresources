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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000abed };

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
0x040b,	// (0x0000aff8) Screen

0x0417,	// (0x0000b004) application_window_ParamLimits

0x0417,	// (0x0000b004) application_window

0x5f40,	// (0x00010b2d) screen_g1

0xdfaf,	// (0x00018b9c) area_bottom_pane_ParamLimits

0xdfaf,	// (0x00018b9c) area_bottom_pane

0x43d9,	// (0x0000efc6) area_top_pane_ParamLimits

0x43d9,	// (0x0000efc6) area_top_pane

0x4477,	// (0x0000f064) main_pane_ParamLimits

0x4477,	// (0x0000f064) main_pane

0x5f4a,	// (0x00010b37) misc_graphics

0x19fc,	// (0x0000c5e9) battery_pane_ParamLimits

0x19fc,	// (0x0000c5e9) battery_pane

0x9388,	// (0x00013f75) bg_status_flat_pane_g8

0x9390,	// (0x00013f7d) bg_status_flat_pane_g9

0x86b6,	// (0x000132a3) context_pane_ParamLimits

0x86b6,	// (0x000132a3) context_pane

0x1b67,	// (0x0000c754) navi_pane_ParamLimits

0x1b67,	// (0x0000c754) navi_pane

0x1bde,	// (0x0000c7cb) signal_pane_ParamLimits

0x1bde,	// (0x0000c7cb) signal_pane

0x0008,

0xf8a8,	// (0x0001a495) bg_status_flat_pane_g

0x1c6e,	// (0x0000c85b) status_pane_g1_ParamLimits

0x1c6e,	// (0x0000c85b) status_pane_g1

0x1c84,	// (0x0000c871) status_pane_g2_ParamLimits

0x1c84,	// (0x0000c871) status_pane_g2

0x88d6,	// (0x000134c3) status_pane_g3_ParamLimits

0x88d6,	// (0x000134c3) status_pane_g3

0x0004,

0xf7db,	// (0x0001a3c8) status_pane_g_ParamLimits

0xf7db,	// (0x0001a3c8) status_pane_g

0x1c90,	// (0x0000c87d) title_pane_ParamLimits

0x1c90,	// (0x0000c87d) title_pane

0x1cf1,	// (0x0000c8de) uni_indicator_pane_ParamLimits

0x1cf1,	// (0x0000c8de) uni_indicator_pane

0x7f6d,	// (0x00012b5a) bg_list_pane_ParamLimits

0x7f6d,	// (0x00012b5a) bg_list_pane

0x12ce,	// (0x0000bebb) find_pane

0x12d6,	// (0x0000bec3) listscroll_app_pane_ParamLimits

0x12d6,	// (0x0000bec3) listscroll_app_pane

0x7fa1,	// (0x00012b8e) listscroll_form_pane

0x12e2,	// (0x0000becf) listscroll_gen_pane_ParamLimits

0x12e2,	// (0x0000becf) listscroll_gen_pane

0x7fa1,	// (0x00012b8e) listscroll_set_pane

0x9f3c,	// (0x00014b29) main_idle_act_pane

0x7c49,	// (0x00012836) main_idle_trad_pane

0x7c49,	// (0x00012836) main_list_empty_pane

0x7fcf,	// (0x00012bbc) main_midp_pane

0x7fdb,	// (0x00012bc8) main_pane_g1_ParamLimits

0x7fdb,	// (0x00012bc8) main_pane_g1

0x12f6,	// (0x0000bee3) popup_ai_message_window_ParamLimits

0x12f6,	// (0x0000bee3) popup_ai_message_window

0x1387,	// (0x0000bf74) popup_fep_china_uni_window_ParamLimits

0x1387,	// (0x0000bf74) popup_fep_china_uni_window

0x80ed,	// (0x00012cda) popup_fep_japan_candidate_window_ParamLimits

0x80ed,	// (0x00012cda) popup_fep_japan_candidate_window

0x810b,	// (0x00012cf8) popup_fep_japan_predictive_window_ParamLimits

0x810b,	// (0x00012cf8) popup_fep_japan_predictive_window

0x13e1,	// (0x0000bfce) popup_find_window

0x13fe,	// (0x0000bfeb) popup_grid_graphic_window_ParamLimits

0x13fe,	// (0x0000bfeb) popup_grid_graphic_window

0x816e,	// (0x00012d5b) popup_large_graphic_colour_window

0x1490,	// (0x0000c07d) popup_menu_window_ParamLimits

0x1490,	// (0x0000c07d) popup_menu_window

0x165c,	// (0x0000c249) popup_note_image_window

0x1622,	// (0x0000c20f) popup_note_wait_window_ParamLimits

0x1622,	// (0x0000c20f) popup_note_wait_window

0x1674,	// (0x0000c261) popup_note_window_ParamLimits

0x1674,	// (0x0000c261) popup_note_window

0x171a,	// (0x0000c307) popup_query_code_window_ParamLimits

0x171a,	// (0x0000c307) popup_query_code_window

0x83b8,	// (0x00012fa5) popup_query_data_code_window_ParamLimits

0x83b8,	// (0x00012fa5) popup_query_data_code_window

0x1754,	// (0x0000c341) popup_query_data_window_ParamLimits

0x1754,	// (0x0000c341) popup_query_data_window

0x17ca,	// (0x0000c3b7) popup_query_sat_info_window_ParamLimits

0x17ca,	// (0x0000c3b7) popup_query_sat_info_window

0x1861,	// (0x0000c44e) popup_snote_single_graphic_window_ParamLimits

0x1861,	// (0x0000c44e) popup_snote_single_graphic_window

0x1861,	// (0x0000c44e) popup_snote_single_text_window_ParamLimits

0x1861,	// (0x0000c44e) popup_snote_single_text_window

0x8435,	// (0x00013022) popup_sub_window_general

0x8563,	// (0x00013150) popup_window_general_ParamLimits

0x8563,	// (0x00013150) popup_window_general

0x8578,	// (0x00013165) power_save_pane

0xe131,	// (0x00018d1e) control_pane_g1_ParamLimits

0xe131,	// (0x00018d1e) control_pane_g1

0x4be7,	// (0x0000f7d4) control_pane_g2_ParamLimits

0x4be7,	// (0x0000f7d4) control_pane_g2

0x7f0e,	// (0x00012afb) control_pane_g3_ParamLimits

0x7f0e,	// (0x00012afb) control_pane_g3

0x0007,

0xf7c3,	// (0x0001a3b0) control_pane_g_ParamLimits

0xf7c3,	// (0x0001a3b0) control_pane_g

0xe168,	// (0x00018d55) control_pane_t1_ParamLimits

0xe168,	// (0x00018d55) control_pane_t1

0xe1c6,	// (0x00018db3) control_pane_t2_ParamLimits

0xe1c6,	// (0x00018db3) control_pane_t2

0x0002,

0xf7d4,	// (0x0001a3c1) control_pane_t_ParamLimits

0xf7d4,	// (0x0001a3c1) control_pane_t

0x7e2f,	// (0x00012a1c) navi_navi_volume_pane_cp1

0x7e38,	// (0x00012a25) status_small_icon_pane

0x7e40,	// (0x00012a2d) status_small_pane_g1_ParamLimits

0x7e40,	// (0x00012a2d) status_small_pane_g1

0x7e74,	// (0x00012a61) status_small_pane_g2_ParamLimits

0x7e74,	// (0x00012a61) status_small_pane_g2

0x7e80,	// (0x00012a6d) status_small_pane_g3_ParamLimits

0x7e80,	// (0x00012a6d) status_small_pane_g3

0x7e8c,	// (0x00012a79) status_small_pane_g4_ParamLimits

0x7e8c,	// (0x00012a79) status_small_pane_g4

0x7e98,	// (0x00012a85) status_small_pane_g5_ParamLimits

0x7e98,	// (0x00012a85) status_small_pane_g5

0x7ea7,	// (0x00012a94) status_small_pane_g6_ParamLimits

0x7ea7,	// (0x00012a94) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001a39f) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001a39f) status_small_pane_g

0x7ed7,	// (0x00012ac4) status_small_pane_t1

0x7efa,	// (0x00012ae7) status_small_wait_pane_ParamLimits

0x7efa,	// (0x00012ae7) status_small_wait_pane

0x0f7c,	// (0x0000bb69) aid_levels_signal_ParamLimits

0x0f7c,	// (0x0000bb69) aid_levels_signal

0x0f94,	// (0x0000bb81) signal_pane_g1_ParamLimits

0x0f94,	// (0x0000bb81) signal_pane_g1

0x0faf,	// (0x0000bb9c) signal_pane_g2_ParamLimits

0x0faf,	// (0x0000bb9c) signal_pane_g2

0x0001,

0xf747,	// (0x0001a334) signal_pane_g_ParamLimits

0xf747,	// (0x0001a334) signal_pane_g

0x7694,	// (0x00012281) context_pane_g1

0x05c8,	// (0x0000b1b5) title_pane_g1

0x05fd,	// (0x0000b1ea) title_pane_t1

0x5ff2,	// (0x00010bdf) title_pane_t2

0x6018,	// (0x00010c05) title_pane_t3

0x0002,

0xf59b,	// (0x0001a188) title_pane_t

0x1d19,	// (0x0000c906) aid_levels_battery_ParamLimits

0x1d19,	// (0x0000c906) aid_levels_battery

0x1d35,	// (0x0000c922) battery_pane_g1_ParamLimits

0x1d35,	// (0x0000c922) battery_pane_g1

0x1d52,	// (0x0000c93f) battery_pane_g2_ParamLimits

0x1d52,	// (0x0000c93f) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001a3d3) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001a3d3) battery_pane_g

0x2172,	// (0x0000cd5f) uni_indicator_pane_g1

0x2187,	// (0x0000cd74) uni_indicator_pane_g2

0x219c,	// (0x0000cd89) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0001a53d) uni_indicator_pane_g

0x7ab9,	// (0x000126a6) navi_icon_pane_ParamLimits

0x7ab9,	// (0x000126a6) navi_icon_pane

0x7a00,	// (0x000125ed) navi_midp_pane

0x7ad5,	// (0x000126c2) navi_navi_pane

0x7adf,	// (0x000126cc) navi_text_pane_ParamLimits

0x7adf,	// (0x000126cc) navi_text_pane

0x5f40,	// (0x00010b2d) status_small_wait_pane_g1

0x6455,	// (0x00011042) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0001a538) status_small_wait_pane_g

0x2111,	// (0x0000ccfe) navi_navi_icon_text_pane

0x212b,	// (0x0000cd18) navi_navi_pane_g1_ParamLimits

0x212b,	// (0x0000cd18) navi_navi_pane_g1

0x2119,	// (0x0000cd06) navi_navi_pane_g2_ParamLimits

0x2119,	// (0x0000cd06) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0001a506) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0001a506) navi_navi_pane_g

0x9a07,	// (0x000145f4) navi_navi_tabs_pane

0x213d,	// (0x0000cd2a) navi_navi_text_pane

0x2111,	// (0x0000ccfe) navi_navi_volume_pane

0x20ff,	// (0x0000ccec) navi_text_pane_t1

0x20f3,	// (0x0000cce0) navi_icon_pane_g1

0x98f8,	// (0x000144e5) navi_navi_text_pane_t1

0xe415,	// (0x00019002) navi_navi_volume_pane_g1

0xe41d,	// (0x0001900a) volume_small_pane

0x203e,	// (0x0000cc2b) navi_navi_icon_text_pane_g1

0x2046,	// (0x0000cc33) navi_navi_icon_text_pane_t1

0x7ad5,	// (0x000126c2) navi_tabs_2_long_pane

0x7ad5,	// (0x000126c2) navi_tabs_2_pane

0x7ad5,	// (0x000126c2) navi_tabs_3_long_pane

0x7ad5,	// (0x000126c2) navi_tabs_3_pane

0x7ad5,	// (0x000126c2) navi_tabs_4_pane

0xe3f5,	// (0x00018fe2) tabs_2_active_pane_ParamLimits

0xe3f5,	// (0x00018fe2) tabs_2_active_pane

0xe405,	// (0x00018ff2) tabs_2_passive_pane_ParamLimits

0xe405,	// (0x00018ff2) tabs_2_passive_pane

0xe3c3,	// (0x00018fb0) tabs_3_active_pane_ParamLimits

0xe3c3,	// (0x00018fb0) tabs_3_active_pane

0xe3d3,	// (0x00018fc0) tabs_3_passive_pane_ParamLimits

0xe3d3,	// (0x00018fc0) tabs_3_passive_pane

0xe3e4,	// (0x00018fd1) tabs_3_passive_pane_cp_ParamLimits

0xe3e4,	// (0x00018fd1) tabs_3_passive_pane_cp

0xe37f,	// (0x00018f6c) tabs_4_active_pane_ParamLimits

0xe37f,	// (0x00018f6c) tabs_4_active_pane

0xe390,	// (0x00018f7d) tabs_4_passive_pane_ParamLimits

0xe390,	// (0x00018f7d) tabs_4_passive_pane

0xe3a1,	// (0x00018f8e) tabs_4_passive_pane_cp_ParamLimits

0xe3a1,	// (0x00018f8e) tabs_4_passive_pane_cp

0xe3b2,	// (0x00018f9f) tabs_4_passive_pane_cp2_ParamLimits

0xe3b2,	// (0x00018f9f) tabs_4_passive_pane_cp2

0xe35f,	// (0x00018f4c) tabs_2_long_active_pane_ParamLimits

0xe35f,	// (0x00018f4c) tabs_2_long_active_pane

0xe36f,	// (0x00018f5c) tabs_2_long_passive_pane_ParamLimits

0xe36f,	// (0x00018f5c) tabs_2_long_passive_pane

0xe32a,	// (0x00018f17) tabs_3_long_active_pane_ParamLimits

0xe32a,	// (0x00018f17) tabs_3_long_active_pane

0xe33b,	// (0x00018f28) tabs_3_long_passive_pane_ParamLimits

0xe33b,	// (0x00018f28) tabs_3_long_passive_pane

0xe34e,	// (0x00018f3b) tabs_3_long_passive_pane_cp_ParamLimits

0xe34e,	// (0x00018f3b) tabs_3_long_passive_pane_cp

0x4eb6,	// (0x0000faa3) volume_small_pane_g1

0xe2d9,	// (0x00018ec6) volume_small_pane_g2

0xe2e2,	// (0x00018ecf) volume_small_pane_g3

0xe2eb,	// (0x00018ed8) volume_small_pane_g4

0xe2f4,	// (0x00018ee1) volume_small_pane_g5

0xe2fd,	// (0x00018eea) volume_small_pane_g6

0xe306,	// (0x00018ef3) volume_small_pane_g7

0xe30f,	// (0x00018efc) volume_small_pane_g8

0xe318,	// (0x00018f05) volume_small_pane_g9

0xe321,	// (0x00018f0e) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0001a4d2) volume_small_pane_g

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp2_ParamLimits

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp2

0x0689,	// (0x0000b276) tabs_3_active_pane_g1

0x0691,	// (0x0000b27e) tabs_3_active_pane_t1

0x62bf,	// (0x00010eac) bg_passive_tab_pane_cp2_ParamLimits

0x62bf,	// (0x00010eac) bg_passive_tab_pane_cp2

0x0689,	// (0x0000b276) tabs_3_passive_pane_g1

0x0691,	// (0x0000b27e) tabs_3_passive_pane_t1

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp3_ParamLimits

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp3

0x06a3,	// (0x0000b290) tabs_4_active_pane_g1

0x06ab,	// (0x0000b298) tabs_4_active_pane_t1

0x62bf,	// (0x00010eac) bg_passive_tab_pane_cp3_ParamLimits

0x62bf,	// (0x00010eac) bg_passive_tab_pane_cp3

0x06a3,	// (0x0000b290) tabs_4_1_passive_pane_g1

0x06ab,	// (0x0000b298) tabs_4_1_passive_pane_t1

0x7fcf,	// (0x00012bbc) list_highlight_pane_cp2

0x223b,	// (0x0000ce28) list_set_pane_ParamLimits

0x223b,	// (0x0000ce28) list_set_pane

0x22d5,	// (0x0000cec2) main_pane_set_t1_ParamLimits

0x22d5,	// (0x0000cec2) main_pane_set_t1

0x22f5,	// (0x0000cee2) main_pane_set_t2_ParamLimits

0x22f5,	// (0x0000cee2) main_pane_set_t2

0x2309,	// (0x0000cef6) main_pane_set_t3_ParamLimits

0x2309,	// (0x0000cef6) main_pane_set_t3

0x231b,	// (0x0000cf08) main_pane_set_t4_ParamLimits

0x231b,	// (0x0000cf08) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0001a5a2) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0001a5a2) main_pane_set_t

0x232d,	// (0x0000cf1a) setting_code_pane

0x2335,	// (0x0000cf22) setting_slider_graphic_pane

0x2335,	// (0x0000cf22) setting_slider_pane

0x2335,	// (0x0000cf22) setting_text_pane

0x2335,	// (0x0000cf22) setting_volume_pane

0x46a8,	// (0x0000f295) volume_set_pane

0x602a,	// (0x00010c17) bg_set_opt_pane_cp

0x46b0,	// (0x0000f29d) setting_slider_pane_t1

0x46c9,	// (0x0000f2b6) setting_slider_pane_t2

0x46e2,	// (0x0000f2cf) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001a18f) setting_slider_pane_t

0x46f9,	// (0x0000f2e6) slider_set_pane

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp2

0x606c,	// (0x00010c59) setting_slider_graphic_pane_g1

0x470f,	// (0x0000f2fc) setting_slider_graphic_pane_t1

0x471e,	// (0x0000f30b) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001a196) setting_slider_graphic_pane_t

0x472d,	// (0x0000f31a) slider_set_pane_cp

0x5f4a,	// (0x00010b37) input_focus_pane_cp1

0x9f23,	// (0x00014b10) list_set_text_pane

0x5f40,	// (0x00010b2d) setting_text_pane_g1

0x5f4a,	// (0x00010b37) input_focus_pane_cp2

0x5f40,	// (0x00010b2d) setting_code_pane_g1

0x6075,	// (0x00010c62) setting_code_pane_t1

0x6083,	// (0x00010c70) set_text_pane_t1_ParamLimits

0x6083,	// (0x00010c70) set_text_pane_t1

0x6f3f,	// (0x00011b2c) set_opt_bg_pane_g1

0x6f47,	// (0x00011b34) set_opt_bg_pane_g2

0x9f03,	// (0x00014af0) set_opt_bg_pane_g3

0x6f57,	// (0x00011b44) set_opt_bg_pane_g4

0x6f5f,	// (0x00011b4c) set_opt_bg_pane_g5

0x6f67,	// (0x00011b54) set_opt_bg_pane_g6

0x9f0b,	// (0x00014af8) set_opt_bg_pane_g7

0x9f13,	// (0x00014b00) set_opt_bg_pane_g8

0x9f1b,	// (0x00014b08) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0001a58f) set_opt_bg_pane_g

0x9ef6,	// (0x00014ae3) slider_set_pane_g1

0x5084,	// (0x0000fc71) slider_set_pane_g2

0x0006,

0xf993,	// (0x0001a580) slider_set_pane_g

0x5020,	// (0x0000fc0d) volume_set_pane_g1

0x5028,	// (0x0000fc15) volume_set_pane_g2

0x5030,	// (0x0000fc1d) volume_set_pane_g3

0x5038,	// (0x0000fc25) volume_set_pane_g4

0x5040,	// (0x0000fc2d) volume_set_pane_g5

0x5048,	// (0x0000fc35) volume_set_pane_g6

0x5050,	// (0x0000fc3d) volume_set_pane_g7

0x5058,	// (0x0000fc45) volume_set_pane_g8

0x5060,	// (0x0000fc4d) volume_set_pane_g9

0x5068,	// (0x0000fc55) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0001a558) volume_set_pane_g

0x06bd,	// (0x0000b2aa) indicator_pane_ParamLimits

0x06bd,	// (0x0000b2aa) indicator_pane

0x06e5,	// (0x0000b2d2) main_idle_pane_g2_ParamLimits

0x06e5,	// (0x0000b2d2) main_idle_pane_g2

0x071d,	// (0x0000b30a) main_pane_idle_g1_ParamLimits

0x071d,	// (0x0000b30a) main_pane_idle_g1

0x60de,	// (0x00010ccb) popup_clock_digital_analogue_window_ParamLimits

0x60de,	// (0x00010ccb) popup_clock_digital_analogue_window

0x0744,	// (0x0000b331) soft_indicator_pane_ParamLimits

0x0744,	// (0x0000b331) soft_indicator_pane

0x075e,	// (0x0000b34b) wallpaper_pane_ParamLimits

0x075e,	// (0x0000b34b) wallpaper_pane

0x5f40,	// (0x00010b2d) wallpaper_pane_g1

0x0770,	// (0x0000b35d) indicator_pane_g1_ParamLimits

0x0770,	// (0x0000b35d) indicator_pane_g1

0xa3e2,	// (0x00014fcf) navi_navi_icon_text_pane_srt_g1

0x6130,	// (0x00010d1d) soft_indicator_pane_t1

0x614a,	// (0x00010d37) aid_ps_area_pane

0x0789,	// (0x0000b376) aid_ps_clock_pane

0x6169,	// (0x00010d56) aid_ps_indicator_pane

0x6175,	// (0x00010d62) indicator_ps_pane_ParamLimits

0x6175,	// (0x00010d62) indicator_ps_pane

0x6184,	// (0x00010d71) power_save_pane_g1_ParamLimits

0x6184,	// (0x00010d71) power_save_pane_g1

0x6190,	// (0x00010d7d) power_save_pane_g2_ParamLimits

0x6190,	// (0x00010d7d) power_save_pane_g2

0x42cd,	// (0x0000eeba) aid_navinavi_width_pane

0x614a,	// (0x00010d37) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001a19b) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001a19b) power_save_pane_g

0x619e,	// (0x00010d8b) power_save_pane_t1_ParamLimits

0x619e,	// (0x00010d8b) power_save_pane_t1

0x0789,	// (0x0000b376) aid_ps_clock_pane_ParamLimits

0x6169,	// (0x00010d56) aid_ps_indicator_pane_ParamLimits

0x61b0,	// (0x00010d9d) power_save_pane_t4_ParamLimits

0x61b0,	// (0x00010d9d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001a1a0) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001a1a0) power_save_pane_t

0x61da,	// (0x00010dc7) power_save_t3_ParamLimits

0x61da,	// (0x00010dc7) power_save_t3

0x61c5,	// (0x00010db2) power_save_t2_ParamLimits

0x61c5,	// (0x00010db2) power_save_t2

0x61ef,	// (0x00010ddc) indicator_ps_pane_g1

0x0797,	// (0x0000b384) ai_gene_pane_ParamLimits

0x0797,	// (0x0000b384) ai_gene_pane

0x07ae,	// (0x0000b39b) ai_links_pane_ParamLimits

0x07ae,	// (0x0000b39b) ai_links_pane

0x07c6,	// (0x0000b3b3) indicator_pane_cp1_ParamLimits

0x07c6,	// (0x0000b3b3) indicator_pane_cp1

0x07d5,	// (0x0000b3c2) main_pane_idle_g1_cp_ParamLimits

0x07d5,	// (0x0000b3c2) main_pane_idle_g1_cp

0x6228,	// (0x00010e15) popup_ai_links_title_window

0x07ed,	// (0x0000b3da) soft_indicator_pane_cp1_ParamLimits

0x07ed,	// (0x0000b3da) soft_indicator_pane_cp1

0x9ca6,	// (0x00014893) ai_links_pane_g1

0x9caf,	// (0x0001489c) grid_ai_links_pane

0x2169,	// (0x0000cd56) ai_gene_pane_1

0x9c94,	// (0x00014881) ai_gene_pane_2

0x9c9d,	// (0x0001488a) list_highlight_pane_cp4

0x2145,	// (0x0000cd32) cell_ai_link_pane_ParamLimits

0x2145,	// (0x0000cd32) cell_ai_link_pane

0x9c65,	// (0x00014852) cell_ai_link_pane_g1

0x6455,	// (0x00011042) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0001a533) cell_ai_link_pane_g

0x5f4a,	// (0x00010b37) grid_highlight_cp2

0x5f4a,	// (0x00010b37) bg_popup_sub_pane_cp1

0x624b,	// (0x00010e38) popup_ai_links_title_window_t1

0x9bb3,	// (0x000147a0) ai_gene_pane_1_g1_ParamLimits

0x9bb3,	// (0x000147a0) ai_gene_pane_1_g1

0x9bbf,	// (0x000147ac) ai_gene_pane_1_g2_ParamLimits

0x9bbf,	// (0x000147ac) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0001a529) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0001a529) ai_gene_pane_1_g

0x9bcc,	// (0x000147b9) ai_gene_pane_1_t1_ParamLimits

0x9bcc,	// (0x000147b9) ai_gene_pane_1_t1

0x9c00,	// (0x000147ed) grid_ai_soft_ind_pane

0x9b9e,	// (0x0001478b) ai_gene_pane_2_t1_ParamLimits

0x9b9e,	// (0x0001478b) ai_gene_pane_2_t1

0x0801,	// (0x0000b3ee) main_pane_empty_t1_ParamLimits

0x0801,	// (0x0000b3ee) main_pane_empty_t1

0x0819,	// (0x0000b406) main_pane_empty_t2_ParamLimits

0x0819,	// (0x0000b406) main_pane_empty_t2

0x082e,	// (0x0000b41b) main_pane_empty_t3_ParamLimits

0x082e,	// (0x0000b41b) main_pane_empty_t3

0x0840,	// (0x0000b42d) main_pane_empty_t4_ParamLimits

0x0840,	// (0x0000b42d) main_pane_empty_t4

0x0852,	// (0x0000b43f) main_pane_empty_t5_ParamLimits

0x0852,	// (0x0000b43f) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001a1a5) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001a1a5) main_pane_empty_t

0x7038,	// (0x00011c25) bg_popup_window_pane_ParamLimits

0x7038,	// (0x00011c25) bg_popup_window_pane

0x9906,	// (0x000144f3) find_popup_pane_cp2_ParamLimits

0x9906,	// (0x000144f3) find_popup_pane_cp2

0x9912,	// (0x000144ff) heading_pane_ParamLimits

0x9912,	// (0x000144ff) heading_pane

0x5f4a,	// (0x00010b37) bg_popup_sub_pane

0x2063,	// (0x0000cc50) bg_popup_window_pane_g1_ParamLimits

0x2063,	// (0x0000cc50) bg_popup_window_pane_g1

0x2072,	// (0x0000cc5f) bg_popup_window_pane_g2_ParamLimits

0x2072,	// (0x0000cc5f) bg_popup_window_pane_g2

0x207e,	// (0x0000cc6b) bg_popup_window_pane_g3_ParamLimits

0x207e,	// (0x0000cc6b) bg_popup_window_pane_g3

0x208a,	// (0x0000cc77) bg_popup_window_pane_g4_ParamLimits

0x208a,	// (0x0000cc77) bg_popup_window_pane_g4

0x2099,	// (0x0000cc86) bg_popup_window_pane_g5_ParamLimits

0x2099,	// (0x0000cc86) bg_popup_window_pane_g5

0x20a9,	// (0x0000cc96) bg_popup_window_pane_g6_ParamLimits

0x20a9,	// (0x0000cc96) bg_popup_window_pane_g6

0x20b5,	// (0x0000cca2) bg_popup_window_pane_g7_ParamLimits

0x20b5,	// (0x0000cca2) bg_popup_window_pane_g7

0x20c4,	// (0x0000ccb1) bg_popup_window_pane_g8_ParamLimits

0x20c4,	// (0x0000ccb1) bg_popup_window_pane_g8

0x20d3,	// (0x0000ccc0) bg_popup_window_pane_g9_ParamLimits

0x20d3,	// (0x0000ccc0) bg_popup_window_pane_g9

0x98ec,	// (0x000144d9) bg_popup_window_pane_g10_ParamLimits

0x98ec,	// (0x000144d9) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0001a4f1) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0001a4f1) bg_popup_window_pane_g

0x9815,	// (0x00014402) bg_popup_heading_pane_ParamLimits

0x9815,	// (0x00014402) bg_popup_heading_pane

0x510c,	// (0x0000fcf9) tabs_4_passive_pane_cp_srt_ParamLimits

0x510c,	// (0x0000fcf9) tabs_4_passive_pane_cp_srt

0x511e,	// (0x0000fd0b) tabs_4_passive_pane_srt_ParamLimits

0x9829,	// (0x00014416) heading_pane_g2

0x511e,	// (0x0000fd0b) tabs_4_passive_pane_srt

0x8b9b,	// (0x00013788) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b9b,	// (0x00013788) bg_passive_tab_pane_cp3_srt

0x9831,	// (0x0001441e) heading_pane_t1_ParamLimits

0x9831,	// (0x0001441e) heading_pane_t1

0x9848,	// (0x00014435) heading_pane_t2_ParamLimits

0x9848,	// (0x00014435) heading_pane_t2

0x0001,

0xf8ff,	// (0x0001a4ec) heading_pane_t_ParamLimits

0xf8ff,	// (0x0001a4ec) heading_pane_t

0x9350,	// (0x00013f3d) bg_popup_heading_pane_g1

0x93ff,	// (0x00013fec) bg_popup_heading_pane_g2

0x9409,	// (0x00013ff6) bg_popup_heading_pane_g3

0x9413,	// (0x00014000) bg_popup_heading_pane_g4

0x941d,	// (0x0001400a) bg_popup_heading_pane_g5

0x9427,	// (0x00014014) bg_popup_heading_pane_g6

0x942f,	// (0x0001401c) bg_popup_heading_pane_g7

0x9437,	// (0x00014024) bg_popup_heading_pane_g8

0x9441,	// (0x0001402e) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0001a4a8) bg_popup_heading_pane_g

0x8a81,	// (0x0001366e) bg_popup_sub_pane_g1

0x8a91,	// (0x0001367e) bg_popup_sub_pane_g2

0x8a89,	// (0x00013676) bg_popup_sub_pane_g3

0x8aa1,	// (0x0001368e) bg_popup_sub_pane_g4

0x8a99,	// (0x00013686) bg_popup_sub_pane_g5

0x8aa9,	// (0x00013696) bg_popup_sub_pane_g6

0x8ab1,	// (0x0001369e) bg_popup_sub_pane_g7

0x8ac1,	// (0x000136ae) bg_popup_sub_pane_g8

0x8ab9,	// (0x000136a6) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0001a482) bg_popup_sub_pane_g

0x62bf,	// (0x00010eac) bg_popup_window_pane_cp5_ParamLimits

0x62bf,	// (0x00010eac) bg_popup_window_pane_cp5

0x62db,	// (0x00010ec8) popup_note_window_g1_ParamLimits

0x62db,	// (0x00010ec8) popup_note_window_g1

0x62e7,	// (0x00010ed4) popup_note_window_t1_ParamLimits

0x62e7,	// (0x00010ed4) popup_note_window_t1

0x62f9,	// (0x00010ee6) popup_note_window_t2_ParamLimits

0x62f9,	// (0x00010ee6) popup_note_window_t2

0x630b,	// (0x00010ef8) popup_note_window_t3_ParamLimits

0x630b,	// (0x00010ef8) popup_note_window_t3

0x631d,	// (0x00010f0a) popup_note_window_t4_ParamLimits

0x631d,	// (0x00010f0a) popup_note_window_t4

0x6345,	// (0x00010f32) popup_note_window_t5_ParamLimits

0x6345,	// (0x00010f32) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001a1b0) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001a1b0) popup_note_window_t

0x6369,	// (0x00010f56) bg_popup_window_pane_cp6_ParamLimits

0x6369,	// (0x00010f56) bg_popup_window_pane_cp6

0x92c4,	// (0x00013eb1) popup_note_image_window_g1_ParamLimits

0x92c4,	// (0x00013eb1) popup_note_image_window_g1

0x92d0,	// (0x00013ebd) popup_note_image_window_g2_ParamLimits

0x92d0,	// (0x00013ebd) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0001a476) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0001a476) popup_note_image_window_g

0x92e9,	// (0x00013ed6) popup_note_image_window_t1_ParamLimits

0x92e9,	// (0x00013ed6) popup_note_image_window_t1

0x9302,	// (0x00013eef) popup_note_image_window_t2_ParamLimits

0x9302,	// (0x00013eef) popup_note_image_window_t2

0x931b,	// (0x00013f08) popup_note_image_window_t3_ParamLimits

0x931b,	// (0x00013f08) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0001a47b) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0001a47b) popup_note_image_window_t

0x9185,	// (0x00013d72) bg_popup_window_pane_cp7_ParamLimits

0x9185,	// (0x00013d72) bg_popup_window_pane_cp7

0x91b5,	// (0x00013da2) popup_note_wait_window_g1_ParamLimits

0x91b5,	// (0x00013da2) popup_note_wait_window_g1

0x91c1,	// (0x00013dae) popup_note_wait_window_g2_ParamLimits

0x91c1,	// (0x00013dae) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0001a464) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0001a464) popup_note_wait_window_g

0x91d9,	// (0x00013dc6) popup_note_wait_window_t1_ParamLimits

0x91d9,	// (0x00013dc6) popup_note_wait_window_t1

0x9200,	// (0x00013ded) popup_note_wait_window_t2_ParamLimits

0x9200,	// (0x00013ded) popup_note_wait_window_t2

0x921d,	// (0x00013e0a) popup_note_wait_window_t3_ParamLimits

0x921d,	// (0x00013e0a) popup_note_wait_window_t3

0x9230,	// (0x00013e1d) popup_note_wait_window_t4_ParamLimits

0x9230,	// (0x00013e1d) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0001a46b) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0001a46b) popup_note_wait_window_t

0x9255,	// (0x00013e42) wait_bar_pane_ParamLimits

0x9255,	// (0x00013e42) wait_bar_pane

0x5f4a,	// (0x00010b37) wait_anim_pane

0x5f4a,	// (0x00010b37) wait_border_pane

0x5f40,	// (0x00010b2d) wait_anim_pane_g1

0x5f40,	// (0x00010b2d) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001a32f) wait_anim_pane_g

0x9129,	// (0x00013d16) wait_border_pane_g1

0x9134,	// (0x00013d21) wait_border_pane_g2

0x913d,	// (0x00013d2a) wait_border_pane_g3

0x0002,

0xf870,	// (0x0001a45d) wait_border_pane_g

0x908b,	// (0x00013c78) bg_popup_window_pane_cp16_ParamLimits

0x908b,	// (0x00013c78) bg_popup_window_pane_cp16

0x9099,	// (0x00013c86) indicator_popup_pane_cp4_ParamLimits

0x9099,	// (0x00013c86) indicator_popup_pane_cp4

0x90ad,	// (0x00013c9a) popup_query_data_window_t1_ParamLimits

0x90ad,	// (0x00013c9a) popup_query_data_window_t1

0x90bf,	// (0x00013cac) popup_query_data_window_t2_ParamLimits

0x90bf,	// (0x00013cac) popup_query_data_window_t2

0x90d8,	// (0x00013cc5) popup_query_data_window_t3_ParamLimits

0x90d8,	// (0x00013cc5) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0001a456) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0001a456) popup_query_data_window_t

0x90f2,	// (0x00013cdf) query_popup_data_pane_ParamLimits

0x90f2,	// (0x00013cdf) query_popup_data_pane

0x9106,	// (0x00013cf3) query_popup_data_pane_cp1_ParamLimits

0x9106,	// (0x00013cf3) query_popup_data_pane_cp1

0x6369,	// (0x00010f56) bg_popup_window_pane_cp10_ParamLimits

0x6369,	// (0x00010f56) bg_popup_window_pane_cp10

0x8fee,	// (0x00013bdb) indicator_popup_pane_ParamLimits

0x8fee,	// (0x00013bdb) indicator_popup_pane

0x63c0,	// (0x00010fad) popup_query_code_window_t1_ParamLimits

0x63c0,	// (0x00010fad) popup_query_code_window_t1

0x9006,	// (0x00013bf3) popup_query_code_window_t2_ParamLimits

0x9006,	// (0x00013bf3) popup_query_code_window_t2

0x9044,	// (0x00013c31) popup_query_code_window_t3_ParamLimits

0x9044,	// (0x00013c31) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0001a44f) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0001a44f) popup_query_code_window_t

0x9073,	// (0x00013c60) query_popup_pane_ParamLimits

0x9073,	// (0x00013c60) query_popup_pane

0x6369,	// (0x00010f56) bg_popup_window_pane_cp15_ParamLimits

0x6369,	// (0x00010f56) bg_popup_window_pane_cp15

0x6387,	// (0x00010f74) indicator_popup_pane_cp1_ParamLimits

0x6387,	// (0x00010f74) indicator_popup_pane_cp1

0x639a,	// (0x00010f87) indicator_popup_pane_cp2_ParamLimits

0x639a,	// (0x00010f87) indicator_popup_pane_cp2

0x63ad,	// (0x00010f9a) popup_query_data_code_window_g1_ParamLimits

0x63ad,	// (0x00010f9a) popup_query_data_code_window_g1

0x63c0,	// (0x00010fad) popup_query_data_code_window_t1_ParamLimits

0x63c0,	// (0x00010fad) popup_query_data_code_window_t1

0x63d2,	// (0x00010fbf) popup_query_data_code_window_t2_ParamLimits

0x63d2,	// (0x00010fbf) popup_query_data_code_window_t2

0x63e4,	// (0x00010fd1) popup_query_data_code_window_t3_ParamLimits

0x63e4,	// (0x00010fd1) popup_query_data_code_window_t3

0x63fa,	// (0x00010fe7) popup_query_data_code_window_t4_ParamLimits

0x63fa,	// (0x00010fe7) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001a1bb) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001a1bb) popup_query_data_code_window_t

0x4dc9,	// (0x0000f9b6) list_single_midp_graphic_pane_g3

0x6412,	// (0x00010fff) query_popup_data_pane_cp2_ParamLimits

0x6425,	// (0x00011012) query_popup_pane_cp2_ParamLimits

0x6425,	// (0x00011012) query_popup_pane_cp2

0x5f4a,	// (0x00010b37) bg_popup_window_pane_cp11

0x8fc2,	// (0x00013baf) heading_pane_cp5

0x650d,	// (0x000110fa) listscroll_popup_info_pane

0x5f4a,	// (0x00010b37) input_focus_pane_cp3

0x6438,	// (0x00011025) query_popup_pane_t1

0x6446,	// (0x00011033) list_popup_info_pane_ParamLimits

0x6446,	// (0x00011033) list_popup_info_pane

0x6455,	// (0x00011042) listscroll_popup_info_pane_g1

0x645d,	// (0x0001104a) scroll_pane_cp7

0x6467,	// (0x00011054) popup_info_list_pane_t1_ParamLimits

0x6467,	// (0x00011054) popup_info_list_pane_t1

0x6481,	// (0x0001106e) popup_info_list_pane_t2_ParamLimits

0x6481,	// (0x0001106e) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001a1c4) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001a1c4) popup_info_list_pane_t

0x5f4a,	// (0x00010b37) bg_popup_window_pane_cp12

0xa3fc,	// (0x00014fe9) find_popup_pane

0x602a,	// (0x00010c17) bg_popup_window_pane_cp3

0x649b,	// (0x00011088) heading_pane_cp3

0x64a7,	// (0x00011094) listscroll_popup_graphic_pane

0x5f4a,	// (0x00010b37) bg_popup_window_pane_cp4

0x08b4,	// (0x0000b4a1) heading_pane_cp4

0x650d,	// (0x000110fa) listscroll_popup_colour_pane

0x6515,	// (0x00011102) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6515,	// (0x00011102) cell_large_graphic_colour_none_popup_pane

0x08bc,	// (0x0000b4a9) grid_large_graphic_colour_popup_pane_ParamLimits

0x08bc,	// (0x0000b4a9) grid_large_graphic_colour_popup_pane

0x654d,	// (0x0001113a) listscroll_popup_colour_pane_g1_ParamLimits

0x654d,	// (0x0001113a) listscroll_popup_colour_pane_g1

0x6564,	// (0x00011151) listscroll_popup_colour_pane_g2_ParamLimits

0x6564,	// (0x00011151) listscroll_popup_colour_pane_g2

0x657b,	// (0x00011168) listscroll_popup_colour_pane_g3_ParamLimits

0x657b,	// (0x00011168) listscroll_popup_colour_pane_g3

0x08e0,	// (0x0000b4cd) listscroll_popup_colour_pane_g4_ParamLimits

0x08e0,	// (0x0000b4cd) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001a1c9) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001a1c9) listscroll_popup_colour_pane_g

0x659a,	// (0x00011187) scroll_pane_cp6_ParamLimits

0x659a,	// (0x00011187) scroll_pane_cp6

0x08ef,	// (0x0000b4dc) cell_large_graphic_colour_popup_pane_ParamLimits

0x08ef,	// (0x0000b4dc) cell_large_graphic_colour_popup_pane

0x65cb,	// (0x000111b8) cell_large_graphic_colour_none_popup_pane_t1

0x5f4a,	// (0x00010b37) grid_highlight_pane_cp5

0x65da,	// (0x000111c7) cell_large_graphic_colour_popup_pane_g1

0x65e2,	// (0x000111cf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001a1d2) cell_large_graphic_colour_popup_pane_g

0x65ea,	// (0x000111d7) cell_large_graphic_colour_popup_pane_g2_copy1

0x65f3,	// (0x000111e0) grid_highlight_pane_cp4

0x65fb,	// (0x000111e8) bg_popup_window_pane_cp8_ParamLimits

0x65fb,	// (0x000111e8) bg_popup_window_pane_cp8

0x6616,	// (0x00011203) popup_snote_single_text_window_g1_ParamLimits

0x6616,	// (0x00011203) popup_snote_single_text_window_g1

0x6628,	// (0x00011215) popup_snote_single_text_window_t1_ParamLimits

0x6628,	// (0x00011215) popup_snote_single_text_window_t1

0x663b,	// (0x00011228) popup_snote_single_text_window_t2_ParamLimits

0x663b,	// (0x00011228) popup_snote_single_text_window_t2

0x664e,	// (0x0001123b) popup_snote_single_text_window_t3_ParamLimits

0x664e,	// (0x0001123b) popup_snote_single_text_window_t3

0x6687,	// (0x00011274) popup_snote_single_text_window_t4_ParamLimits

0x6687,	// (0x00011274) popup_snote_single_text_window_t4

0x66bb,	// (0x000112a8) popup_snote_single_text_window_t5_ParamLimits

0x66bb,	// (0x000112a8) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001a1d7) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001a1d7) popup_snote_single_text_window_t

0x66ea,	// (0x000112d7) bg_popup_window_pane_cp9_ParamLimits

0x66ea,	// (0x000112d7) bg_popup_window_pane_cp9

0x6616,	// (0x00011203) popup_snote_single_graphic_window_g1_ParamLimits

0x6616,	// (0x00011203) popup_snote_single_graphic_window_g1

0x66f8,	// (0x000112e5) popup_snote_single_graphic_window_g2_ParamLimits

0x66f8,	// (0x000112e5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001a1e2) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001a1e2) popup_snote_single_graphic_window_g

0x6704,	// (0x000112f1) popup_snote_single_graphic_window_t1_ParamLimits

0x6704,	// (0x000112f1) popup_snote_single_graphic_window_t1

0x6717,	// (0x00011304) popup_snote_single_graphic_window_t2_ParamLimits

0x6717,	// (0x00011304) popup_snote_single_graphic_window_t2

0x672a,	// (0x00011317) popup_snote_single_graphic_window_t3_ParamLimits

0x672a,	// (0x00011317) popup_snote_single_graphic_window_t3

0x6763,	// (0x00011350) popup_snote_single_graphic_window_t4_ParamLimits

0x6763,	// (0x00011350) popup_snote_single_graphic_window_t4

0x6797,	// (0x00011384) popup_snote_single_graphic_window_t5_ParamLimits

0x6797,	// (0x00011384) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001a1e7) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001a1e7) popup_snote_single_graphic_window_t

0xa33c,	// (0x00014f29) grid_graphic_popup_pane_ParamLimits

0xa33c,	// (0x00014f29) grid_graphic_popup_pane

0xa368,	// (0x00014f55) listscroll_popup_graphic_pane_g1_ParamLimits

0xa368,	// (0x00014f55) listscroll_popup_graphic_pane_g1

0x2476,	// (0x0000d063) listscroll_popup_graphic_pane_g2_ParamLimits

0x2476,	// (0x0000d063) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0001a5cc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0001a5cc) listscroll_popup_graphic_pane_g

0xa390,	// (0x00014f7d) scroll_pane_cp5

0x2439,	// (0x0000d026) cell_graphic_popup_pane_ParamLimits

0x2439,	// (0x0000d026) cell_graphic_popup_pane

0xa2c8,	// (0x00014eb5) cell_graphic_popup_pane_g1

0xa2d0,	// (0x00014ebd) cell_graphic_popup_pane_g2

0x65ea,	// (0x000111d7) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0001a5c5) cell_graphic_popup_pane_g

0xa2d9,	// (0x00014ec6) cell_graphic_popup_pane_t2

0x65f3,	// (0x000111e0) grid_highlight_pane_cp3

0x67d8,	// (0x000113c5) list_gen_pane_ParamLimits

0x67d8,	// (0x000113c5) list_gen_pane

0x680a,	// (0x000113f7) scroll_pane

0x23f4,	// (0x0000cfe1) bg_list_pane_g1_ParamLimits

0x23f4,	// (0x0000cfe1) bg_list_pane_g1

0xa245,	// (0x00014e32) bg_list_pane_g2_ParamLimits

0xa245,	// (0x00014e32) bg_list_pane_g2

0xa258,	// (0x00014e45) bg_list_pane_g3_ParamLimits

0xa258,	// (0x00014e45) bg_list_pane_g3

0xa26a,	// (0x00014e57) bg_list_pane_g4_ParamLimits

0xa26a,	// (0x00014e57) bg_list_pane_g4

0x240f,	// (0x0000cffc) bg_list_pane_g5_ParamLimits

0x240f,	// (0x0000cffc) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0001a5ba) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0001a5ba) bg_list_pane_g

0x2393,	// (0x0000cf80) list_double2_graphic_large_graphic_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double2_graphic_large_graphic_pane

0x2393,	// (0x0000cf80) list_double2_graphic_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double2_graphic_pane

0x2393,	// (0x0000cf80) list_double2_large_graphic_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double2_large_graphic_pane

0x2393,	// (0x0000cf80) list_double2_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double2_pane

0x2393,	// (0x0000cf80) list_double_graphic_heading_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_graphic_heading_pane

0x2393,	// (0x0000cf80) list_double_graphic_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_graphic_pane

0x2393,	// (0x0000cf80) list_double_heading_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_heading_pane

0x2393,	// (0x0000cf80) list_double_large_graphic_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_large_graphic_pane

0x2393,	// (0x0000cf80) list_double_number_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_number_pane

0x2393,	// (0x0000cf80) list_double_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_pane

0x2393,	// (0x0000cf80) list_double_time_pane_ParamLimits

0x2393,	// (0x0000cf80) list_double_time_pane

0x2393,	// (0x0000cf80) list_setting_number_pane_ParamLimits

0x2393,	// (0x0000cf80) list_setting_number_pane

0x2393,	// (0x0000cf80) list_setting_pane_ParamLimits

0x2393,	// (0x0000cf80) list_setting_pane

0x23a6,	// (0x0000cf93) list_single_2graphic_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_2graphic_pane

0x23a6,	// (0x0000cf93) list_single_graphic_heading_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_graphic_heading_pane

0x23a6,	// (0x0000cf93) list_single_graphic_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_graphic_pane

0x23a6,	// (0x0000cf93) list_single_heading_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_heading_pane

0x23a6,	// (0x0000cf93) list_single_large_graphic_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_large_graphic_pane

0x23a6,	// (0x0000cf93) list_single_number_heading_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_number_heading_pane

0x23a6,	// (0x0000cf93) list_single_number_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_number_pane

0x23a6,	// (0x0000cf93) list_single_pane_ParamLimits

0x23a6,	// (0x0000cf93) list_single_pane

0x5f4a,	// (0x00010b37) list_highlight_pane_cp1

0x68ff,	// (0x000114ec) list_single_pane_g1_ParamLimits

0x68ff,	// (0x000114ec) list_single_pane_g1

0x690b,	// (0x000114f8) list_single_pane_g2_ParamLimits

0x690b,	// (0x000114f8) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_single_pane_g

0xa987,	// (0x00015574) list_single_pane_t1_ParamLimits

0xa987,	// (0x00015574) list_single_pane_t1

0x68ff,	// (0x000114ec) list_single_number_pane_g1_ParamLimits

0x68ff,	// (0x000114ec) list_single_number_pane_g1

0x690b,	// (0x000114f8) list_single_number_pane_g2_ParamLimits

0x690b,	// (0x000114f8) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_single_number_pane_g

0x8a0f,	// (0x000135fc) list_single_number_pane_t1_ParamLimits

0x8a0f,	// (0x000135fc) list_single_number_pane_t1

0x21d7,	// (0x0000cdc4) list_single_number_pane_t2_ParamLimits

0x21d7,	// (0x0000cdc4) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0001a57b) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0001a57b) list_single_number_pane_t

0x0918,	// (0x0000b505) list_single_graphic_pane_g1_ParamLimits

0x0918,	// (0x0000b505) list_single_graphic_pane_g1

0x68ff,	// (0x000114ec) list_single_graphic_pane_g2_ParamLimits

0x68ff,	// (0x000114ec) list_single_graphic_pane_g2

0x690b,	// (0x000114f8) list_single_graphic_pane_g3_ParamLimits

0x690b,	// (0x000114f8) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001a1f2) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001a1f2) list_single_graphic_pane_g

0x0924,	// (0x0000b511) list_single_graphic_pane_t1_ParamLimits

0x0924,	// (0x0000b511) list_single_graphic_pane_t1

0x68ff,	// (0x000114ec) list_single_heading_pane_g1_ParamLimits

0x68ff,	// (0x000114ec) list_single_heading_pane_g1

0x690b,	// (0x000114f8) list_single_heading_pane_g2_ParamLimits

0x690b,	// (0x000114f8) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_single_heading_pane_g

0xa9a9,	// (0x00015596) list_single_heading_pane_t1_ParamLimits

0xa9a9,	// (0x00015596) list_single_heading_pane_t1

0x093a,	// (0x0000b527) list_single_heading_pane_t2_ParamLimits

0x093a,	// (0x0000b527) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001a1fe) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001a1fe) list_single_heading_pane_t

0x68ff,	// (0x000114ec) list_single_number_heading_pane_g1_ParamLimits

0x68ff,	// (0x000114ec) list_single_number_heading_pane_g1

0x690b,	// (0x000114f8) list_single_number_heading_pane_g2_ParamLimits

0x690b,	// (0x000114f8) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_single_number_heading_pane_g

0xa9a9,	// (0x00015596) list_single_number_heading_pane_t1_ParamLimits

0xa9a9,	// (0x00015596) list_single_number_heading_pane_t1

0x094c,	// (0x0000b539) list_single_number_heading_pane_t2_ParamLimits

0x094c,	// (0x0000b539) list_single_number_heading_pane_t2

0xa961,	// (0x0001554e) list_single_number_heading_pane_t3_ParamLimits

0xa961,	// (0x0001554e) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001a203) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001a203) list_single_number_heading_pane_t

0x8a03,	// (0x000135f0) list_single_graphic_heading_pane_g1_ParamLimits

0x8a03,	// (0x000135f0) list_single_graphic_heading_pane_g1

0x095e,	// (0x0000b54b) list_single_graphic_heading_pane_g4_ParamLimits

0x095e,	// (0x0000b54b) list_single_graphic_heading_pane_g4

0x690b,	// (0x000114f8) list_single_graphic_heading_pane_g5_ParamLimits

0x690b,	// (0x000114f8) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001a20a) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001a20a) list_single_graphic_heading_pane_g

0xa9a9,	// (0x00015596) list_single_graphic_heading_pane_t1_ParamLimits

0xa9a9,	// (0x00015596) list_single_graphic_heading_pane_t1

0x096f,	// (0x0000b55c) list_single_graphic_heading_pane_t2_ParamLimits

0x096f,	// (0x0000b55c) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001a211) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001a211) list_single_graphic_heading_pane_t

0xa99d,	// (0x0001558a) list_single_large_graphic_pane_g1_ParamLimits

0xa99d,	// (0x0001558a) list_single_large_graphic_pane_g1

0x68ff,	// (0x000114ec) list_single_large_graphic_pane_g2_ParamLimits

0x68ff,	// (0x000114ec) list_single_large_graphic_pane_g2

0x690b,	// (0x000114f8) list_single_large_graphic_pane_g3_ParamLimits

0x690b,	// (0x000114f8) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001a216) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001a216) list_single_large_graphic_pane_g

0x9134,	// (0x00013d21) wait_border_pane_g2_copy1

0x0981,	// (0x0000b56e) list_single_large_graphic_pane_g4_cp2

0xa9a9,	// (0x00015596) list_single_large_graphic_pane_t1_ParamLimits

0xa9a9,	// (0x00015596) list_single_large_graphic_pane_t1

0x6a5b,	// (0x00011648) list_double_pane_g1_ParamLimits

0x6a5b,	// (0x00011648) list_double_pane_g1

0x6986,	// (0x00011573) list_double_pane_g2_ParamLimits

0x6986,	// (0x00011573) list_double_pane_g2

0x0001,

0xf630,	// (0x0001a21d) list_double_pane_g_ParamLimits

0xf630,	// (0x0001a21d) list_double_pane_g

0x6992,	// (0x0001157f) list_double_pane_t1_ParamLimits

0x6992,	// (0x0001157f) list_double_pane_t1

0x0989,	// (0x0000b576) list_double_pane_t2_ParamLimits

0x0989,	// (0x0000b576) list_double_pane_t2

0x0001,

0xf635,	// (0x0001a222) list_double_pane_t_ParamLimits

0xf635,	// (0x0001a222) list_double_pane_t

0x099b,	// (0x0000b588) list_double2_pane_g1_ParamLimits

0x099b,	// (0x0000b588) list_double2_pane_g1

0x09ac,	// (0x0000b599) list_double2_pane_g2_ParamLimits

0x09ac,	// (0x0000b599) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001a227) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001a227) list_double2_pane_g

0xc169,	// (0x00016d56) list_double2_pane_t1_ParamLimits

0xc169,	// (0x00016d56) list_double2_pane_t1

0x6b84,	// (0x00011771) list_double2_pane_t2_ParamLimits

0x6b84,	// (0x00011771) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001a22c) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001a22c) list_double2_pane_t

0x6a5b,	// (0x00011648) list_double_number_pane_g1_ParamLimits

0x6a5b,	// (0x00011648) list_double_number_pane_g1

0x6986,	// (0x00011573) list_double_number_pane_g2_ParamLimits

0x6986,	// (0x00011573) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001a21d) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001a21d) list_double_number_pane_g

0x09b8,	// (0x0000b5a5) list_double_number_pane_t1_ParamLimits

0x09b8,	// (0x0000b5a5) list_double_number_pane_t1

0x6a67,	// (0x00011654) list_double_number_pane_t2_ParamLimits

0x6a67,	// (0x00011654) list_double_number_pane_t2

0x09ca,	// (0x0000b5b7) list_double_number_pane_t3_ParamLimits

0x09ca,	// (0x0000b5b7) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001a231) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001a231) list_double_number_pane_t

0x6a4f,	// (0x0001163c) list_double_graphic_pane_g1_ParamLimits

0x6a4f,	// (0x0001163c) list_double_graphic_pane_g1

0x09dc,	// (0x0000b5c9) list_double_graphic_pane_g2_ParamLimits

0x09dc,	// (0x0000b5c9) list_double_graphic_pane_g2

0x09eb,	// (0x0000b5d8) list_double_graphic_pane_g3_ParamLimits

0x09eb,	// (0x0000b5d8) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001a238) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001a238) list_double_graphic_pane_g

0x0a03,	// (0x0000b5f0) list_double_graphic_pane_t1_ParamLimits

0x0a03,	// (0x0000b5f0) list_double_graphic_pane_t1

0x0a19,	// (0x0000b606) list_double_graphic_pane_t2_ParamLimits

0x0a19,	// (0x0000b606) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a241) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a241) list_double_graphic_pane_t

0x0a2b,	// (0x0000b618) list_double2_graphic_pane_g1_ParamLimits

0x0a2b,	// (0x0000b618) list_double2_graphic_pane_g1

0x6e29,	// (0x00011a16) list_double2_graphic_pane_g2_ParamLimits

0x6e29,	// (0x00011a16) list_double2_graphic_pane_g2

0x09ac,	// (0x0000b599) list_double2_graphic_pane_g3_ParamLimits

0x09ac,	// (0x0000b599) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001a246) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001a246) list_double2_graphic_pane_g

0x0a37,	// (0x0000b624) list_double2_graphic_pane_t1_ParamLimits

0x0a37,	// (0x0000b624) list_double2_graphic_pane_t1

0x6bac,	// (0x00011799) list_double2_graphic_pane_t2_ParamLimits

0x6bac,	// (0x00011799) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001a24d) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001a24d) list_double2_graphic_pane_t

0x0a4d,	// (0x0000b63a) list_double_large_graphic_pane_g1_ParamLimits

0x0a4d,	// (0x0000b63a) list_double_large_graphic_pane_g1

0x0a78,	// (0x0000b665) list_double_large_graphic_pane_g2_ParamLimits

0x0a78,	// (0x0000b665) list_double_large_graphic_pane_g2

0x6986,	// (0x00011573) list_double_large_graphic_pane_g3_ParamLimits

0x6986,	// (0x00011573) list_double_large_graphic_pane_g3

0x0a89,	// (0x0000b676) list_double_large_graphic_pane_g4_ParamLimits

0x0a89,	// (0x0000b676) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001a252) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001a252) list_double_large_graphic_pane_g

0x0a9c,	// (0x0000b689) list_double_large_graphic_pane_t1_ParamLimits

0x0a9c,	// (0x0000b689) list_double_large_graphic_pane_t1

0x0ab5,	// (0x0000b6a2) list_double_large_graphic_pane_t2_ParamLimits

0x0ab5,	// (0x0000b6a2) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001a25d) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001a25d) list_double_large_graphic_pane_t

0x0ac7,	// (0x0000b6b4) list_double2_large_graphic_pane_g1_ParamLimits

0x0ac7,	// (0x0000b6b4) list_double2_large_graphic_pane_g1

0x099b,	// (0x0000b588) list_double2_large_graphic_pane_g2_ParamLimits

0x099b,	// (0x0000b588) list_double2_large_graphic_pane_g2

0x09ac,	// (0x0000b599) list_double2_large_graphic_pane_g3_ParamLimits

0x09ac,	// (0x0000b599) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001a262) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001a262) list_double2_large_graphic_pane_g

0x0ad3,	// (0x0000b6c0) list_double2_large_graphic_pane_t1_ParamLimits

0x0ad3,	// (0x0000b6c0) list_double2_large_graphic_pane_t1

0x0ae9,	// (0x0000b6d6) list_double2_large_graphic_pane_t2_ParamLimits

0x0ae9,	// (0x0000b6d6) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001a269) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001a269) list_double2_large_graphic_pane_t

0x0afb,	// (0x0000b6e8) list_double_heading_pane_g1_ParamLimits

0x0afb,	// (0x0000b6e8) list_double_heading_pane_g1

0x0b0c,	// (0x0000b6f9) list_double_heading_pane_g2_ParamLimits

0x0b0c,	// (0x0000b6f9) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001a26e) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001a26e) list_double_heading_pane_g

0x0b18,	// (0x0000b705) list_double_heading_pane_t1_ParamLimits

0x0b18,	// (0x0000b705) list_double_heading_pane_t1

0x0b2e,	// (0x0000b71b) list_double_heading_pane_t2_ParamLimits

0x0b2e,	// (0x0000b71b) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001a273) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001a273) list_double_heading_pane_t

0x6a4f,	// (0x0001163c) list_double_graphic_heading_pane_g1_ParamLimits

0x6a4f,	// (0x0001163c) list_double_graphic_heading_pane_g1

0x0afb,	// (0x0000b6e8) list_double_graphic_heading_pane_g2_ParamLimits

0x0afb,	// (0x0000b6e8) list_double_graphic_heading_pane_g2

0x0b0c,	// (0x0000b6f9) list_double_graphic_heading_pane_g3_ParamLimits

0x0b0c,	// (0x0000b6f9) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001a278) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001a278) list_double_graphic_heading_pane_g

0x0b40,	// (0x0000b72d) list_double_graphic_heading_pane_t1_ParamLimits

0x0b40,	// (0x0000b72d) list_double_graphic_heading_pane_t1

0x0b56,	// (0x0000b743) list_double_graphic_heading_pane_t2_ParamLimits

0x0b56,	// (0x0000b743) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001a27f) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001a27f) list_double_graphic_heading_pane_t

0x0a78,	// (0x0000b665) list_double_time_pane_g1_ParamLimits

0x0a78,	// (0x0000b665) list_double_time_pane_g1

0x6986,	// (0x00011573) list_double_time_pane_g2_ParamLimits

0x6986,	// (0x00011573) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001a284) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001a284) list_double_time_pane_g

0x6b29,	// (0x00011716) list_double_time_pane_t1_ParamLimits

0x6b29,	// (0x00011716) list_double_time_pane_t1

0x0b68,	// (0x0000b755) list_double_time_pane_t2_ParamLimits

0x0b68,	// (0x0000b755) list_double_time_pane_t2

0x0b7a,	// (0x0000b767) list_double_time_pane_t3_ParamLimits

0x0b7a,	// (0x0000b767) list_double_time_pane_t3

0x0b8c,	// (0x0000b779) list_double_time_pane_t4_ParamLimits

0x0b8c,	// (0x0000b779) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001a289) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001a289) list_double_time_pane_t

0x6e29,	// (0x00011a16) list_setting_pane_g1_ParamLimits

0x6e29,	// (0x00011a16) list_setting_pane_g1

0x09ac,	// (0x0000b599) list_setting_pane_g2_ParamLimits

0x09ac,	// (0x0000b599) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001a292) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001a292) list_setting_pane_g

0x0b9e,	// (0x0000b78b) list_setting_pane_t1_ParamLimits

0x0b9e,	// (0x0000b78b) list_setting_pane_t1

0x0bb5,	// (0x0000b7a2) list_setting_pane_t2_ParamLimits

0x0bb5,	// (0x0000b7a2) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001a297) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001a297) list_setting_pane_t

0x0bf2,	// (0x0000b7df) set_value_pane_cp_ParamLimits

0x0bf2,	// (0x0000b7df) set_value_pane_cp

0x6e29,	// (0x00011a16) list_setting_number_pane_g1_ParamLimits

0x6e29,	// (0x00011a16) list_setting_number_pane_g1

0x09ac,	// (0x0000b599) list_setting_number_pane_g2_ParamLimits

0x09ac,	// (0x0000b599) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001a292) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001a292) list_setting_number_pane_g

0x0bfe,	// (0x0000b7eb) list_setting_number_pane_t1_ParamLimits

0x0bfe,	// (0x0000b7eb) list_setting_number_pane_t1

0x0c12,	// (0x0000b7ff) list_setting_number_pane_t2_ParamLimits

0x0c12,	// (0x0000b7ff) list_setting_number_pane_t2

0x0c29,	// (0x0000b816) list_setting_number_pane_t3_ParamLimits

0x0c29,	// (0x0000b816) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001a29e) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001a29e) list_setting_number_pane_t

0x0bf2,	// (0x0000b7df) set_value_pane_ParamLimits

0x0bf2,	// (0x0000b7df) set_value_pane

0x6cd8,	// (0x000118c5) bg_set_opt_pane_ParamLimits

0x6cd8,	// (0x000118c5) bg_set_opt_pane

0x6cf9,	// (0x000118e6) set_value_pane_t1

0x6d07,	// (0x000118f4) slider_set_pane_cp3

0x6d10,	// (0x000118fd) volume_small_pane_cp

0x6d19,	// (0x00011906) list_form_gen_pane

0x6d22,	// (0x0001190f) scroll_pane_cp8

0x0c6c,	// (0x0000b859) form_field_data_pane_ParamLimits

0x0c6c,	// (0x0000b859) form_field_data_pane

0x0c83,	// (0x0000b870) form_field_data_wide_pane_ParamLimits

0x0c83,	// (0x0000b870) form_field_data_wide_pane

0x0ca3,	// (0x0000b890) form_field_popup_pane_ParamLimits

0x0ca3,	// (0x0000b890) form_field_popup_pane

0x0cc1,	// (0x0000b8ae) form_field_popup_wide_pane_ParamLimits

0x0cc1,	// (0x0000b8ae) form_field_popup_wide_pane

0x6dad,	// (0x0001199a) form_field_slider_pane_ParamLimits

0x6dad,	// (0x0001199a) form_field_slider_pane

0x6dc0,	// (0x000119ad) form_field_slider_wide_pane_ParamLimits

0x6dc0,	// (0x000119ad) form_field_slider_wide_pane

0x6dd3,	// (0x000119c0) data_form_pane

0x0ce2,	// (0x0000b8cf) form_field_data_pane_t1

0x6e03,	// (0x000119f0) input_focus_pane

0x6e11,	// (0x000119fe) data_form_wide_pane

0x6e49,	// (0x00011a36) form_field_data_wide_pane_t1

0x6608,	// (0x000111f5) input_focus_pane_cp6

0x0cfc,	// (0x0000b8e9) form_field_popup_pane_t1

0x6e03,	// (0x000119f0) input_focus_pane_cp7

0x6e85,	// (0x00011a72) list_form_pane

0x6e99,	// (0x00011a86) form_field_popup_wide_pane_t1

0x6e03,	// (0x000119f0) input_focus_pane_cp8

0x6eae,	// (0x00011a9b) list_form_wide_pane

0x0d1e,	// (0x0000b90b) form_field_slider_pane_t1_ParamLimits

0x0d1e,	// (0x0000b90b) form_field_slider_pane_t1

0x0d36,	// (0x0000b923) form_field_slider_pane_t2_ParamLimits

0x0d36,	// (0x0000b923) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001a2ae) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001a2ae) form_field_slider_pane_t

0x62bf,	// (0x00010eac) input_focus_pane_cp9_ParamLimits

0x62bf,	// (0x00010eac) input_focus_pane_cp9

0x0d4b,	// (0x0000b938) slider_cont_pane_ParamLimits

0x0d4b,	// (0x0000b938) slider_cont_pane

0x6eff,	// (0x00011aec) form_field_slider_wide_pane_t1_ParamLimits

0x6eff,	// (0x00011aec) form_field_slider_wide_pane_t1

0x6f11,	// (0x00011afe) form_field_slider_wide_pane_t2_ParamLimits

0x6f11,	// (0x00011afe) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001a2b3) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001a2b3) form_field_slider_wide_pane_t

0x62bf,	// (0x00010eac) input_focus_pane_cp10_ParamLimits

0x62bf,	// (0x00010eac) input_focus_pane_cp10

0x0d5f,	// (0x0000b94c) slider_cont_pane_cp1_ParamLimits

0x0d5f,	// (0x0000b94c) slider_cont_pane_cp1

0x0d73,	// (0x0000b960) slider_form_pane_cp

0x6f3f,	// (0x00011b2c) input_focus_pane_g1

0x6f47,	// (0x00011b34) input_focus_pane_g2

0x6f4f,	// (0x00011b3c) input_focus_pane_g3

0x6f57,	// (0x00011b44) input_focus_pane_g4

0x6f5f,	// (0x00011b4c) input_focus_pane_g5

0x6f67,	// (0x00011b54) input_focus_pane_g6

0x6f6f,	// (0x00011b5c) input_focus_pane_g7

0x6f77,	// (0x00011b64) input_focus_pane_g8

0x6f7f,	// (0x00011b6c) input_focus_pane_g9

0x5f40,	// (0x00010b2d) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001a2b8) input_focus_pane_g

0x913d,	// (0x00013d2a) wait_border_pane_g3_copy1

0x0d7b,	// (0x0000b968) data_form_pane_t1

0x5f40,	// (0x00010b2d) wait_anim_pane_g1_copy1

0x2368,	// (0x0000cf55) data_form_wide_pane_t1

0x0d95,	// (0x0000b982) list_form_graphic_pane_cp_ParamLimits

0x0d95,	// (0x0000b982) list_form_graphic_pane_cp

0xa090,	// (0x00014c7d) slider_form_pane_g1

0xa099,	// (0x00014c86) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0001a5ab) slider_form_pane_g

0x0da8,	// (0x0000b995) list_form_graphic_pane_ParamLimits

0x0da8,	// (0x0000b995) list_form_graphic_pane

0x6fd3,	// (0x00011bc0) list_form_graphic_pane_g1

0x6fdb,	// (0x00011bc8) list_form_graphic_pane_t1_ParamLimits

0x6fdb,	// (0x00011bc8) list_form_graphic_pane_t1

0x602a,	// (0x00010c17) list_highlight_pane_cp5_ParamLimits

0x602a,	// (0x00010c17) list_highlight_pane_cp5

0x0dbc,	// (0x0000b9a9) find_pane_g1

0x6ff9,	// (0x00011be6) input_find_pane

0x0dc5,	// (0x0000b9b2) input_find_pane_g1_ParamLimits

0x0dc5,	// (0x0000b9b2) input_find_pane_g1

0x0dd1,	// (0x0000b9be) input_find_pane_t1_ParamLimits

0x0dd1,	// (0x0000b9be) input_find_pane_t1

0x0de6,	// (0x0000b9d3) input_find_pane_t2_ParamLimits

0x0de6,	// (0x0000b9d3) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001a2cd) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001a2cd) input_find_pane_t

0x7038,	// (0x00011c25) input_focus_pane_cp5_ParamLimits

0x7038,	// (0x00011c25) input_focus_pane_cp5

0x0e07,	// (0x0000b9f4) bg_popup_window_pane_cp2_ParamLimits

0x0e07,	// (0x0000b9f4) bg_popup_window_pane_cp2

0x0e14,	// (0x0000ba01) listscroll_menu_pane_ParamLimits

0x0e14,	// (0x0000ba01) listscroll_menu_pane

0x0e20,	// (0x0000ba0d) popup_submenu_window_ParamLimits

0x0e20,	// (0x0000ba0d) popup_submenu_window

0x708f,	// (0x00011c7c) find_popup_pane_g1

0x7097,	// (0x00011c84) input_popup_find_pane_cp

0x7038,	// (0x00011c25) input_focus_pane_cp4_ParamLimits

0x7038,	// (0x00011c25) input_focus_pane_cp4

0x70af,	// (0x00011c9c) input_popup_find_pane_t1_ParamLimits

0x70af,	// (0x00011c9c) input_popup_find_pane_t1

0x5f4a,	// (0x00010b37) bg_popup_sub_pane_cp

0x70dd,	// (0x00011cca) listscroll_popup_sub_pane

0x70e5,	// (0x00011cd2) list_submenu_pane_ParamLimits

0x70e5,	// (0x00011cd2) list_submenu_pane

0x70f6,	// (0x00011ce3) scroll_pane_cp4

0x70fe,	// (0x00011ceb) list_single_popup_submenu_pane_ParamLimits

0x70fe,	// (0x00011ceb) list_single_popup_submenu_pane

0x7111,	// (0x00011cfe) list_single_popup_submenu_pane_g1

0x7119,	// (0x00011d06) list_single_popup_submenu_pane_t1_ParamLimits

0x7119,	// (0x00011d06) list_single_popup_submenu_pane_t1

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp1_ParamLimits

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp1

0x0e52,	// (0x0000ba3f) tabs_2_active_pane_g1

0x0e5a,	// (0x0000ba47) tabs_2_active_pane_t1

0x62bf,	// (0x00010eac) bg_passive_tab_pane_cp1_ParamLimits

0x62bf,	// (0x00010eac) bg_passive_tab_pane_cp1

0x0e52,	// (0x0000ba3f) tabs_2_passive_pane_g1

0x0e5a,	// (0x0000ba47) tabs_2_passive_pane_t1

0x602a,	// (0x00010c17) bg_active_tab_pane_cp4

0x0e6c,	// (0x0000ba59) tabs_2_long_active_pane_t1

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp4

0x4dd1,	// (0x0000f9be) list_single_midp_graphic_pane_g4_ParamLimits

0x602a,	// (0x00010c17) bg_active_tab_pane_cp5

0x0e7f,	// (0x0000ba6c) tabs_3_long_active_pane_t1

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp5

0x4dd1,	// (0x0000f9be) list_single_midp_graphic_pane_g4

0x602a,	// (0x00010c17) bg_popup_window_pane_cp13_ParamLimits

0x602a,	// (0x00010c17) bg_popup_window_pane_cp13

0x7190,	// (0x00011d7d) listscroll_popup_fast_pane_ParamLimits

0x7190,	// (0x00011d7d) listscroll_popup_fast_pane

0x719f,	// (0x00011d8c) grid_popup_fast_pane_ParamLimits

0x719f,	// (0x00011d8c) grid_popup_fast_pane

0x71b1,	// (0x00011d9e) scroll_pane_cp9_ParamLimits

0x71b1,	// (0x00011d9e) scroll_pane_cp9

0xbe40,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbe40,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2

0x71d5,	// (0x00011dc2) input_focus_pane_cp20_ParamLimits

0x71d5,	// (0x00011dc2) input_focus_pane_cp20

0x71e3,	// (0x00011dd0) query_popup_data_pane_t1_ParamLimits

0x71e3,	// (0x00011dd0) query_popup_data_pane_t1

0x71f6,	// (0x00011de3) query_popup_data_pane_t2_ParamLimits

0x71f6,	// (0x00011de3) query_popup_data_pane_t2

0x723c,	// (0x00011e29) query_popup_data_pane_t3_ParamLimits

0x723c,	// (0x00011e29) query_popup_data_pane_t3

0x727d,	// (0x00011e6a) query_popup_data_pane_t4_ParamLimits

0x727d,	// (0x00011e6a) query_popup_data_pane_t4

0x72b9,	// (0x00011ea6) query_popup_data_pane_t5_ParamLimits

0x72b9,	// (0x00011ea6) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001a2d2) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001a2d2) query_popup_data_pane_t

0x6f3f,	// (0x00011b2c) bg_set_opt_pane_g1

0x6f47,	// (0x00011b34) bg_set_opt_pane_g2

0x6f4f,	// (0x00011b3c) bg_set_opt_pane_g3

0x6f57,	// (0x00011b44) bg_set_opt_pane_g4

0x6f5f,	// (0x00011b4c) bg_set_opt_pane_g5

0x6f67,	// (0x00011b54) bg_set_opt_pane_g6

0x6f6f,	// (0x00011b5c) bg_set_opt_pane_g7

0x6f77,	// (0x00011b64) bg_set_opt_pane_g8

0x6f7f,	// (0x00011b6c) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001a2dd) bg_set_opt_pane_g

0x49d4,	// (0x0000f5c1) control_top_pane_stacon_ParamLimits

0x49d4,	// (0x0000f5c1) control_top_pane_stacon

0x4a27,	// (0x0000f614) signal_pane_stacon_ParamLimits

0x4a27,	// (0x0000f614) signal_pane_stacon

0x78dd,	// (0x000124ca) stacon_top_pane_g1_ParamLimits

0x78dd,	// (0x000124ca) stacon_top_pane_g1

0x4a4c,	// (0x0000f639) title_pane_stacon_ParamLimits

0x4a4c,	// (0x0000f639) title_pane_stacon

0x4a76,	// (0x0000f663) uni_indicator_pane_stacon_ParamLimits

0x4a76,	// (0x0000f663) uni_indicator_pane_stacon

0x4a8b,	// (0x0000f678) battery_pane_stacon_ParamLimits

0x4a8b,	// (0x0000f678) battery_pane_stacon

0x4acf,	// (0x0000f6bc) control_bottom_pane_stacon_ParamLimits

0x4acf,	// (0x0000f6bc) control_bottom_pane_stacon

0x4af2,	// (0x0000f6df) navi_pane_stacon_ParamLimits

0x4af2,	// (0x0000f6df) navi_pane_stacon

0x78ff,	// (0x000124ec) stacon_bottom_pane_g1_ParamLimits

0x78ff,	// (0x000124ec) stacon_bottom_pane_g1

0x4735,	// (0x0000f322) aid_levels_signal_lsc_ParamLimits

0x4735,	// (0x0000f322) aid_levels_signal_lsc

0x474c,	// (0x0000f339) signal_pane_stacon_g1_ParamLimits

0x474c,	// (0x0000f339) signal_pane_stacon_g1

0x4760,	// (0x0000f34d) signal_pane_stacon_g2_ParamLimits

0x4760,	// (0x0000f34d) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001a2f0) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001a2f0) signal_pane_stacon_g

0x4795,	// (0x0000f382) title_pane_stacon_t1_ParamLimits

0x4795,	// (0x0000f382) title_pane_stacon_t1

0x72fd,	// (0x00011eea) uni_indicator_pane_stacon_g1

0x7307,	// (0x00011ef4) uni_indicator_pane_stacon_g2

0x7311,	// (0x00011efe) uni_indicator_pane_stacon_g3

0x731b,	// (0x00011f08) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001a2fc) uni_indicator_pane_stacon_g

0x47ba,	// (0x0000f3a7) control_top_pane_stacon_g1

0x47c2,	// (0x0000f3af) control_top_pane_stacon_t1_ParamLimits

0x47c2,	// (0x0000f3af) control_top_pane_stacon_t1

0x47f9,	// (0x0000f3e6) aid_levels_battery_lsc_ParamLimits

0x47f9,	// (0x0000f3e6) aid_levels_battery_lsc

0x4811,	// (0x0000f3fe) battery_pane_stacon_g1_ParamLimits

0x4811,	// (0x0000f3fe) battery_pane_stacon_g1

0x4824,	// (0x0000f411) battery_pane_stacon_g2_ParamLimits

0x4824,	// (0x0000f411) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001a305) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001a305) battery_pane_stacon_g

0x4862,	// (0x0000f44f) navi_icon_pane_stacon

0x4876,	// (0x0000f463) navi_navi_pane_stacon

0x4862,	// (0x0000f44f) navi_text_pane_stacon

0x47ba,	// (0x0000f3a7) control_bottom_pane_stacon_g1

0x488a,	// (0x0000f477) control_bottom_pane_stacon_t1_ParamLimits

0x488a,	// (0x0000f477) control_bottom_pane_stacon_t1

0x0e91,	// (0x0000ba7e) grid_app_pane_ParamLimits

0x0e91,	// (0x0000ba7e) grid_app_pane

0x0ec7,	// (0x0000bab4) scroll_pane_cp15_ParamLimits

0x0ec7,	// (0x0000bab4) scroll_pane_cp15

0x0ee4,	// (0x0000bad1) cell_app_pane_ParamLimits

0x0ee4,	// (0x0000bad1) cell_app_pane

0x0f2b,	// (0x0000bb18) cell_app_pane_g1_ParamLimits

0x0f2b,	// (0x0000bb18) cell_app_pane_g1

0x73c4,	// (0x00011fb1) cell_app_pane_g2_ParamLimits

0x73c4,	// (0x00011fb1) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001a30a) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001a30a) cell_app_pane_g

0x73d0,	// (0x00011fbd) cell_app_pane_t1_ParamLimits

0x73d0,	// (0x00011fbd) cell_app_pane_t1

0x73e2,	// (0x00011fcf) grid_highlight_pane_ParamLimits

0x73e2,	// (0x00011fcf) grid_highlight_pane

0x6f3f,	// (0x00011b2c) cell_highlight_pane_g1

0x6f47,	// (0x00011b34) cell_highlight_pane_g2

0x6f4f,	// (0x00011b3c) cell_highlight_pane_g3

0x6f57,	// (0x00011b44) cell_highlight_pane_g4

0x6f5f,	// (0x00011b4c) cell_highlight_pane_g5

0x6f67,	// (0x00011b54) cell_highlight_pane_g6

0x6f6f,	// (0x00011b5c) cell_highlight_pane_g7

0x6f77,	// (0x00011b64) cell_highlight_pane_g8

0x6f7f,	// (0x00011b6c) cell_highlight_pane_g9

0x5f40,	// (0x00010b2d) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001a2b8) cell_highlight_pane_g

0x73f3,	// (0x00011fe0) bg_scroll_pane

0x48d4,	// (0x0000f4c1) scroll_handle_pane

0x743a,	// (0x00012027) scroll_bg_pane_g1

0x744f,	// (0x0001203c) scroll_bg_pane_g2

0x7467,	// (0x00012054) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001a30f) scroll_bg_pane_g

0x747c,	// (0x00012069) scroll_handle_focus_pane_ParamLimits

0x747c,	// (0x00012069) scroll_handle_focus_pane

0x743a,	// (0x00012027) scroll_handle_pane_g1

0x7489,	// (0x00012076) scroll_handle_pane_g2

0x7467,	// (0x00012054) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001a316) scroll_handle_pane_g

0x7038,	// (0x00011c25) bg_popup_sub_pane_cp21_ParamLimits

0x7038,	// (0x00011c25) bg_popup_sub_pane_cp21

0x749d,	// (0x0001208a) popup_fep_japan_predictive_window_t1_ParamLimits

0x749d,	// (0x0001208a) popup_fep_japan_predictive_window_t1

0x74b4,	// (0x000120a1) popup_fep_japan_predictive_window_t2_ParamLimits

0x74b4,	// (0x000120a1) popup_fep_japan_predictive_window_t2

0x74e7,	// (0x000120d4) popup_fep_japan_predictive_window_t3_ParamLimits

0x74e7,	// (0x000120d4) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001a31d) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001a31d) popup_fep_japan_predictive_window_t

0x5f4a,	// (0x00010b37) bg_popup_sub_pane_cp23

0x751e,	// (0x0001210b) listscroll_japin_cand_pane

0x7526,	// (0x00012113) popup_fep_japan_candidate_window_t1

0x7534,	// (0x00012121) candidate_pane_ParamLimits

0x7534,	// (0x00012121) candidate_pane

0x7546,	// (0x00012133) scroll_pane_cp30

0x754e,	// (0x0001213b) list_single_popup_jap_candidate_pane_ParamLimits

0x754e,	// (0x0001213b) list_single_popup_jap_candidate_pane

0x5f4a,	// (0x00010b37) list_highlight_pane_cp30

0x7562,	// (0x0001214f) list_single_popup_jap_candidate_pane_t1

0x7571,	// (0x0001215e) level_1_signal

0x757e,	// (0x0001216b) level_2_signal

0x758b,	// (0x00012178) level_3_signal

0x7598,	// (0x00012185) level_4_signal

0x75a5,	// (0x00012192) level_5_signal

0x75b2,	// (0x0001219f) level_6_signal

0x75bf,	// (0x000121ac) level_7_signal

0x7571,	// (0x0001215e) level_1_battery

0x757e,	// (0x0001216b) level_2_battery

0x758b,	// (0x00012178) level_3_battery

0x7598,	// (0x00012185) level_4_battery

0x75a5,	// (0x00012192) level_5_battery

0x75b2,	// (0x0001219f) level_6_battery

0x75bf,	// (0x000121ac) level_7_battery

0x75e4,	// (0x000121d1) list_menu_pane_ParamLimits

0x75e4,	// (0x000121d1) list_menu_pane

0x75f5,	// (0x000121e2) scroll_pane_cp25_ParamLimits

0x75f5,	// (0x000121e2) scroll_pane_cp25

0x760e,	// (0x000121fb) list_double2_graphic_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double2_graphic_pane_cp2

0x760e,	// (0x000121fb) list_double2_large_graphic_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double2_large_graphic_pane_cp2

0x760e,	// (0x000121fb) list_double2_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double2_pane_cp2

0x760e,	// (0x000121fb) list_double_graphic_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double_graphic_pane_cp2

0x760e,	// (0x000121fb) list_double_large_graphic_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double_large_graphic_pane_cp2

0x760e,	// (0x000121fb) list_double_number_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double_number_pane_cp2

0x760e,	// (0x000121fb) list_double_pane_cp2_ParamLimits

0x760e,	// (0x000121fb) list_double_pane_cp2

0x0f69,	// (0x0000bb56) list_single_2graphic_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_2graphic_pane_cp2

0x0f69,	// (0x0000bb56) list_single_graphic_heading_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_graphic_heading_pane_cp2

0x0f69,	// (0x0000bb56) list_single_graphic_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_graphic_pane_cp2

0x0f69,	// (0x0000bb56) list_single_heading_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_heading_pane_cp2

0x7647,	// (0x00012234) list_single_large_graphic_pane_cp2_ParamLimits

0x7647,	// (0x00012234) list_single_large_graphic_pane_cp2

0x0f69,	// (0x0000bb56) list_single_number_heading_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_number_heading_pane_cp2

0x0f69,	// (0x0000bb56) list_single_number_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_number_pane_cp2

0x0f69,	// (0x0000bb56) list_single_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_pane_cp2

0x769d,	// (0x0001228a) bg_popup_sub_pane_cp22

0x4986,	// (0x0000f573) popup_side_volume_key_window_g1

0x49b0,	// (0x0000f59d) popup_side_volume_key_window_t1

0x49cc,	// (0x0000f5b9) volume_small_pane_cp1

0x62bf,	// (0x00010eac) bg_popup_sub_pane_cp24_ParamLimits

0x62bf,	// (0x00010eac) bg_popup_sub_pane_cp24

0x76b3,	// (0x000122a0) fep_china_uni_candidate_pane_ParamLimits

0x76b3,	// (0x000122a0) fep_china_uni_candidate_pane

0x76c7,	// (0x000122b4) fep_china_uni_entry_pane

0x76d7,	// (0x000122c4) popup_fep_china_uni_window_g1

0x76f3,	// (0x000122e0) fep_china_uni_entry_pane_g1

0x76fb,	// (0x000122e8) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001a34a) fep_china_uni_entry_pane_g

0x7703,	// (0x000122f0) fep_entry_item_pane

0x770d,	// (0x000122fa) fep_candidate_item_pane

0x7715,	// (0x00012302) fep_china_uni_candidate_pane_g1

0x771d,	// (0x0001230a) fep_china_uni_candidate_pane_g2

0x7725,	// (0x00012312) fep_china_uni_candidate_pane_g3

0x772d,	// (0x0001231a) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001a34f) fep_china_uni_candidate_pane_g

0x5f40,	// (0x00010b2d) fep_entry_item_pane_g1

0x7735,	// (0x00012322) fep_entry_item_pane_t1_ParamLimits

0x7735,	// (0x00012322) fep_entry_item_pane_t1

0x774b,	// (0x00012338) fep_candidate_item_pane_t1_ParamLimits

0x774b,	// (0x00012338) fep_candidate_item_pane_t1

0x7760,	// (0x0001234d) fep_candidate_item_pane_t2_ParamLimits

0x7760,	// (0x0001234d) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001a358) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001a358) fep_candidate_item_pane_t

0x602a,	// (0x00010c17) list_highlight_pane_cp31_ParamLimits

0x602a,	// (0x00010c17) list_highlight_pane_cp31

0x7772,	// (0x0001235f) level_1_signal_lsc

0x777b,	// (0x00012368) level_2_signal_lsc

0x7784,	// (0x00012371) level_3_signal_lsc

0x778d,	// (0x0001237a) level_4_signal_lsc

0x7796,	// (0x00012383) level_5_signal_lsc

0x779f,	// (0x0001238c) level_6_signal_lsc

0x77a8,	// (0x00012395) level_7_signal_lsc

0x77a8,	// (0x00012395) level_1_battery_lsc

0x77b1,	// (0x0001239e) level_2_battery_lsc

0x77ba,	// (0x000123a7) level_3_battery_lsc

0x77c3,	// (0x000123b0) level_4_battery_lsc

0x77cc,	// (0x000123b9) level_5_battery_lsc

0x77d5,	// (0x000123c2) level_6_battery_lsc

0x7772,	// (0x0001235f) level_7_battery_lsc

0x77de,	// (0x000123cb) scroll_handle_focus_pane_g1

0x77e7,	// (0x000123d4) scroll_handle_focus_pane_g2

0x77f0,	// (0x000123dd) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001a35d) scroll_handle_focus_pane_g

0x0fcb,	// (0x0000bbb8) list_single_2graphic_pane_g1_ParamLimits

0x0fcb,	// (0x0000bbb8) list_single_2graphic_pane_g1

0x095e,	// (0x0000b54b) list_single_2graphic_pane_g2_ParamLimits

0x095e,	// (0x0000b54b) list_single_2graphic_pane_g2

0x690b,	// (0x000114f8) list_single_2graphic_pane_g3_ParamLimits

0x690b,	// (0x000114f8) list_single_2graphic_pane_g3

0x0fd7,	// (0x0000bbc4) list_single_2graphic_pane_g4_ParamLimits

0x0fd7,	// (0x0000bbc4) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001a364) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001a364) list_single_2graphic_pane_g

0x0fe3,	// (0x0000bbd0) list_single_2graphic_pane_t1_ParamLimits

0x0fe3,	// (0x0000bbd0) list_single_2graphic_pane_t1

0x1011,	// (0x0000bbfe) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1011,	// (0x0000bbfe) list_double2_graphic_large_graphic_pane_g1

0x099b,	// (0x0000b588) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x099b,	// (0x0000b588) list_double2_graphic_large_graphic_pane_g2

0x09ac,	// (0x0000b599) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x09ac,	// (0x0000b599) list_double2_graphic_large_graphic_pane_g3

0x1023,	// (0x0000bc10) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1023,	// (0x0000bc10) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001a36d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001a36d) list_double2_graphic_large_graphic_pane_g

0x102f,	// (0x0000bc1c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x102f,	// (0x0000bc1c) list_double2_graphic_large_graphic_pane_t1

0x1045,	// (0x0000bc32) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x1045,	// (0x0000bc32) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001a376) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001a376) list_double2_graphic_large_graphic_pane_t

0x79ca,	// (0x000125b7) popup_fast_swap_window_ParamLimits

0x79ca,	// (0x000125b7) popup_fast_swap_window

0x79e6,	// (0x000125d3) popup_side_volume_key_window

0x7a00,	// (0x000125ed) stacon_top_pane

0x7a0a,	// (0x000125f7) status_pane_ParamLimits

0x7a0a,	// (0x000125f7) status_pane

0x7a00,	// (0x000125ed) status_small_pane

0x5f4a,	// (0x00010b37) control_pane

0x5f4a,	// (0x00010b37) stacon_bottom_pane

0x6d22,	// (0x0001190f) scroll_pane_cp121

0x6d19,	// (0x00011906) set_content_pane

0x1060,	// (0x0000bc4d) bg_active_tab_pane_g1_cp1

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp1

0x1057,	// (0x0000bc44) bg_active_tab_pane_g3_cp1

0x1060,	// (0x0000bc4d) bg_passive_tab_pane_g1_cp1

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp1

0x1057,	// (0x0000bc44) bg_passive_tab_pane_g3_cp1

0x1072,	// (0x0000bc5f) bg_active_tab_pane_g1_cp2

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp2

0x1069,	// (0x0000bc56) bg_active_tab_pane_g3_cp2

0x1072,	// (0x0000bc5f) bg_passive_tab_pane_g1_cp2

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp2

0x1069,	// (0x0000bc56) bg_passive_tab_pane_g3_cp2

0x1084,	// (0x0000bc71) bg_active_tab_pane_g1_cp3

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp3

0x107b,	// (0x0000bc68) bg_active_tab_pane_g3_cp3

0x1084,	// (0x0000bc71) bg_passive_tab_pane_g1_cp3

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp3

0x107b,	// (0x0000bc68) bg_passive_tab_pane_g3_cp3

0x1096,	// (0x0000bc83) bg_active_tab_pane_g1_cp4

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp4

0x108d,	// (0x0000bc7a) bg_active_tab_pane_g3_cp4

0x1096,	// (0x0000bc83) bg_passive_tab_pane_g1_cp4

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp4

0x108d,	// (0x0000bc7a) bg_passive_tab_pane_g3_cp4

0x791b,	// (0x00012508) bg_active_tab_pane_g1_cp5

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp5

0x7924,	// (0x00012511) bg_active_tab_pane_g3_cp5

0x791b,	// (0x00012508) bg_passive_tab_pane_g1_cp5

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp5

0x7924,	// (0x00012511) bg_passive_tab_pane_g3_cp5

0xef11,	// (0x00019afe) list_set_graphic_pane_ParamLimits

0xef11,	// (0x00019afe) list_set_graphic_pane

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp4

0x794b,	// (0x00012538) list_set_graphic_pane_g1_ParamLimits

0x794b,	// (0x00012538) list_set_graphic_pane_g1

0x7957,	// (0x00012544) list_set_graphic_pane_g2_ParamLimits

0x7957,	// (0x00012544) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001a37b) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001a37b) list_set_graphic_pane_g

0x0009,

0xfaed,	// (0x0001a6da) volume_small_pane_cp_g

0x797b,	// (0x00012568) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x797b,	// (0x00012568) list_double2_large_graphic_pane_g1_cp2

0x7989,	// (0x00012576) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7989,	// (0x00012576) list_double2_large_graphic_pane_g2_cp2

0x799a,	// (0x00012587) list_double2_large_graphic_pane_g3_cp2

0x79a2,	// (0x0001258f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x79a2,	// (0x0001258f) list_double2_large_graphic_pane_t1_cp2

0x79b8,	// (0x000125a5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x79b8,	// (0x000125a5) list_double2_large_graphic_pane_t2_cp2

0x9c10,	// (0x000147fd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9c10,	// (0x000147fd) list_double_large_graphic_pane_g1_cp2

0x9c23,	// (0x00014810) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9c23,	// (0x00014810) list_double_large_graphic_pane_g2_cp2

0x7b28,	// (0x00012715) list_double_large_graphic_pane_g3_cp2

0x9c34,	// (0x00014821) list_double_large_graphic_pane_g4_cp

0x9c3c,	// (0x00014829) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9c3c,	// (0x00014829) list_double_large_graphic_pane_t1_cp2

0x9c53,	// (0x00014840) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9c53,	// (0x00014840) list_double_large_graphic_pane_t2_cp2

0x7a18,	// (0x00012605) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7a18,	// (0x00012605) list_double2_graphic_pane_g1_cp2

0x7a26,	// (0x00012613) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7a26,	// (0x00012613) list_double2_graphic_pane_g2_cp2

0x7a37,	// (0x00012624) list_double2_graphic_pane_g3_cp2

0x7a41,	// (0x0001262e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7a41,	// (0x0001262e) list_double2_graphic_pane_t1_cp2

0x7a57,	// (0x00012644) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7a57,	// (0x00012644) list_double2_graphic_pane_t2_cp2

0x7a69,	// (0x00012656) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7a69,	// (0x00012656) list_single_number_heading_pane_g1_cp2

0x7a75,	// (0x00012662) list_single_number_heading_pane_g2_cp2

0x7a7d,	// (0x0001266a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7a7d,	// (0x0001266a) list_single_number_heading_pane_t1_cp2

0x7a93,	// (0x00012680) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7a93,	// (0x00012680) list_single_number_heading_pane_t2_cp2

0x7aa7,	// (0x00012694) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7aa7,	// (0x00012694) list_single_number_heading_pane_t3_cp2

0x7a69,	// (0x00012656) list_single_heading_pane_g1_cp2_ParamLimits

0x7a69,	// (0x00012656) list_single_heading_pane_g1_cp2

0x7a75,	// (0x00012662) list_single_heading_pane_g2_cp2

0x7a7d,	// (0x0001266a) list_single_heading_pane_t1_cp2_ParamLimits

0x7a7d,	// (0x0001266a) list_single_heading_pane_t1_cp2

0x9a18,	// (0x00014605) list_single_heading_pane_t2_cp2_ParamLimits

0x9a18,	// (0x00014605) list_single_heading_pane_t2_cp2

0x995a,	// (0x00014547) list_double_graphic_pane_g1_cp2_ParamLimits

0x995a,	// (0x00014547) list_double_graphic_pane_g1_cp2

0x9966,	// (0x00014553) list_double_graphic_pane_g2_cp2_ParamLimits

0x9966,	// (0x00014553) list_double_graphic_pane_g2_cp2

0x9975,	// (0x00014562) list_double_graphic_pane_g3_cp2

0x997d,	// (0x0001456a) list_double_graphic_pane_t1_cp2_ParamLimits

0x997d,	// (0x0001456a) list_double_graphic_pane_t1_cp2

0x9993,	// (0x00014580) list_double_graphic_pane_t2_cp2_ParamLimits

0x9993,	// (0x00014580) list_double_graphic_pane_t2_cp2

0x7b1c,	// (0x00012709) list_double_number_pane_g1_cp2_ParamLimits

0x7b1c,	// (0x00012709) list_double_number_pane_g1_cp2

0x7b28,	// (0x00012715) list_double_number_pane_g2_cp2

0x991e,	// (0x0001450b) list_double_number_pane_t1_cp2_ParamLimits

0x991e,	// (0x0001450b) list_double_number_pane_t1_cp2

0x9932,	// (0x0001451f) list_double_number_pane_t2_cp2_ParamLimits

0x9932,	// (0x0001451f) list_double_number_pane_t2_cp2

0x9948,	// (0x00014535) list_double_number_pane_t3_cp2_ParamLimits

0x9948,	// (0x00014535) list_double_number_pane_t3_cp2

0x9807,	// (0x000143f4) list_single_graphic_pane_g1_cp2_ParamLimits

0x9807,	// (0x000143f4) list_single_graphic_pane_g1_cp2

0x7b80,	// (0x0001276d) list_single_graphic_pane_g2_cp2_ParamLimits

0x7b80,	// (0x0001276d) list_single_graphic_pane_g2_cp2

0x7b8c,	// (0x00012779) list_single_graphic_pane_g3_cp2

0x97dd,	// (0x000143ca) list_single_graphic_pane_t1_cp2_ParamLimits

0x97dd,	// (0x000143ca) list_single_graphic_pane_t1_cp2

0x7b80,	// (0x0001276d) list_single_number_pane_g1_cp2_ParamLimits

0x7b80,	// (0x0001276d) list_single_number_pane_g1_cp2

0x7b8c,	// (0x00012779) list_single_number_pane_g2_cp2

0x97dd,	// (0x000143ca) list_single_number_pane_t1_cp2_ParamLimits

0x97dd,	// (0x000143ca) list_single_number_pane_t1_cp2

0x97f3,	// (0x000143e0) list_single_number_pane_t2_cp2_ParamLimits

0x97f3,	// (0x000143e0) list_single_number_pane_t2_cp2

0x7989,	// (0x00012576) list_double2_pane_g1_cp2_ParamLimits

0x7989,	// (0x00012576) list_double2_pane_g1_cp2

0x799a,	// (0x00012587) list_double2_pane_g2_cp2

0x7af4,	// (0x000126e1) list_double2_pane_t1_cp2_ParamLimits

0x7af4,	// (0x000126e1) list_double2_pane_t1_cp2

0x7b0a,	// (0x000126f7) list_double2_pane_t2_cp2_ParamLimits

0x7b0a,	// (0x000126f7) list_double2_pane_t2_cp2

0x7b1c,	// (0x00012709) list_double_pane_g1_cp2_ParamLimits

0x7b1c,	// (0x00012709) list_double_pane_g1_cp2

0x7b28,	// (0x00012715) list_double_pane_g2_cp2

0x7b30,	// (0x0001271d) list_double_pane_t1_cp2_ParamLimits

0x7b30,	// (0x0001271d) list_double_pane_t1_cp2

0x7b46,	// (0x00012733) list_double_pane_t2_cp2_ParamLimits

0x7b46,	// (0x00012733) list_double_pane_t2_cp2

0x7b70,	// (0x0001275d) list_single_pane_cp2_g3

0x7b80,	// (0x0001276d) list_single_pane_g1_cp2_ParamLimits

0x7b80,	// (0x0001276d) list_single_pane_g1_cp2

0x7b8c,	// (0x00012779) list_single_pane_g2_cp2

0x7b94,	// (0x00012781) list_single_pane_t1_cp2_ParamLimits

0x7b94,	// (0x00012781) list_single_pane_t1_cp2

0x7bac,	// (0x00012799) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7bac,	// (0x00012799) list_single_large_graphic_pane_g1_cp2

0x7bba,	// (0x000127a7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7bba,	// (0x000127a7) list_single_large_graphic_pane_g2_cp2

0x7bc6,	// (0x000127b3) list_single_large_graphic_pane_g3_cp2

0x7bce,	// (0x000127bb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7bce,	// (0x000127bb) list_single_large_graphic_pane_g4_cp1

0x7be8,	// (0x000127d5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7be8,	// (0x000127d5) list_single_large_graphic_pane_t1_cp2

0x97a7,	// (0x00014394) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x97a7,	// (0x00014394) list_single_graphic_heading_pane_g1_cp2

0x9774,	// (0x00014361) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9774,	// (0x00014361) list_single_graphic_heading_pane_g4_cp2

0x7b8c,	// (0x00012779) list_single_graphic_heading_pane_g5_cp2

0x97b3,	// (0x000143a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x97b3,	// (0x000143a0) list_single_graphic_heading_pane_t1_cp2

0x97c9,	// (0x000143b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x97c9,	// (0x000143b6) list_single_graphic_heading_pane_t2_cp2

0x9768,	// (0x00014355) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9768,	// (0x00014355) list_single_2graphic_pane_g1_cp2

0x9774,	// (0x00014361) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9774,	// (0x00014361) list_single_2graphic_pane_g2_cp2

0x7b8c,	// (0x00012779) list_single_2graphic_pane_g3_cp2

0x9785,	// (0x00014372) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9785,	// (0x00014372) list_single_2graphic_pane_g4_cp2

0x9791,	// (0x0001437e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9791,	// (0x0001437e) list_single_2graphic_pane_t1_cp2

0x5f40,	// (0x00010b2d) list_highlight_pane_g10_cp1

0x9350,	// (0x00013f3d) list_highlight_pane_g1_cp1

0x9358,	// (0x00013f45) list_highlight_pane_g2_cp1

0x9360,	// (0x00013f4d) list_highlight_pane_g3_cp1

0x9368,	// (0x00013f55) list_highlight_pane_g4_cp1

0x9370,	// (0x00013f5d) list_highlight_pane_g5_cp1

0x9378,	// (0x00013f65) list_highlight_pane_g6_cp1

0x9380,	// (0x00013f6d) list_highlight_pane_g7_cp1

0x9388,	// (0x00013f75) list_highlight_pane_g8_cp1

0x9390,	// (0x00013f7d) list_highlight_pane_g9_cp1

0x1ec4,	// (0x0000cab1) form_field_slider_pane_t3

0x1ed4,	// (0x0000cac1) form_field_slider_pane_t4

0x9284,	// (0x00013e71) slider_form_pane_ParamLimits

0x9284,	// (0x00013e71) slider_form_pane

0x5f4a,	// (0x00010b37) control_abbreviations

0x5f4a,	// (0x00010b37) control_conventions

0x5f4a,	// (0x00010b37) control_definitions

0x5f4a,	// (0x00010b37) format_table_attribute

0x9a64,	// (0x00014651) bg_popup_preview_window_pane_g9

0x5f4a,	// (0x00010b37) format_table_data2

0x5f4a,	// (0x00010b37) format_table_data3

0x5f4a,	// (0x00010b37) format_table_data_example

0x0008,

0x5f4a,	// (0x00010b37) intro_purpose

0xf91e,	// (0x0001a50b) bg_popup_preview_window_pane_g

0x5f4a,	// (0x00010b37) texts_category

0x5f4a,	// (0x00010b37) texts_graphics

0x7bfe,	// (0x000127eb) text_digital

0x7c0d,	// (0x000127fa) text_primary

0x7c1c,	// (0x00012809) text_primary_small

0x7c2b,	// (0x00012818) text_secondary

0x7c3a,	// (0x00012827) text_title

0xa29c,	// (0x00014e89) bg_passive_tab_pane_g1_cp3_srt

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp3_srt

0xa2a5,	// (0x00014e92) bg_passive_tab_pane_g3_cp3_srt

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp3_srt_ParamLimits

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp3_srt

0xa2ae,	// (0x00014e9b) tabs_4_active_pane_srt_g1

0x2423,	// (0x0000d010) tabs_4_active_pane_srt_t1_ParamLimits

0x2423,	// (0x0000d010) tabs_4_active_pane_srt_t1

0xa29c,	// (0x00014e89) bg_active_tab_pane_g1_cp3_copy1

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp3_copy1

0xa2a5,	// (0x00014e92) bg_active_tab_pane_g3_cp3_copy1

0x602a,	// (0x00010c17) tabs_2_long_active_pane_srt_ParamLimits

0x602a,	// (0x00010c17) tabs_2_long_active_pane_srt

0x602a,	// (0x00010c17) tabs_2_long_passive_pane_srt_ParamLimits

0x602a,	// (0x00010c17) tabs_2_long_passive_pane_srt

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp4_srt

0x9ed1,	// (0x00014abe) bg_passive_tab_pane_g1_cp4_srt

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp4_srt

0x9eda,	// (0x00014ac7) bg_passive_tab_pane_g3_cp4_srt

0x602a,	// (0x00010c17) bg_active_tab_pane_cp4_srt_ParamLimits

0x602a,	// (0x00010c17) bg_active_tab_pane_cp4_srt

0x21ff,	// (0x0000cdec) tabs_2_long_active_pane_srt_t1_ParamLimits

0x21ff,	// (0x0000cdec) tabs_2_long_active_pane_srt_t1

0x9ed1,	// (0x00014abe) bg_active_tab_pane_g1_cp4_srt

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp4_srt

0x9eda,	// (0x00014ac7) bg_active_tab_pane_g3_cp4_srt

0x62bf,	// (0x00010eac) tabs_3_long_active_pane_srt_ParamLimits

0x62bf,	// (0x00010eac) tabs_3_long_active_pane_srt

0x62bf,	// (0x00010eac) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x62bf,	// (0x00010eac) tabs_3_long_passive_pane_cp_srt

0x62bf,	// (0x00010eac) tabs_3_long_passive_pane_srt_ParamLimits

0x62bf,	// (0x00010eac) tabs_3_long_passive_pane_srt

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp5_srt

0x791b,	// (0x00012508) bg_passive_tab_pane_g1_cp5_srt

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp5_srt

0x7924,	// (0x00012511) bg_passive_tab_pane_g3_cp5_srt

0x602a,	// (0x00010c17) bg_active_tab_pane_cp5_srt_ParamLimits

0x602a,	// (0x00010c17) bg_active_tab_pane_cp5_srt

0x21e9,	// (0x0000cdd6) tabs_3_long_active_pane_srt_t1_ParamLimits

0x21e9,	// (0x0000cdd6) tabs_3_long_active_pane_srt_t1

0x791b,	// (0x00012508) bg_active_tab_pane_g1_cp5_srt

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp5_srt

0x7924,	// (0x00012511) bg_active_tab_pane_g3_cp5_srt

0x9eb1,	// (0x00014a9e) navi_text_pane_srt_t1

0x9ea9,	// (0x00014a96) navi_icon_pane_srt_g1

0x7e09,	// (0x000129f6) midp_editing_number_pane_srt

0x7c49,	// (0x00012836) midp_ticker_pane_srt

0x7e11,	// (0x000129fe) midp_ticker_pane_srt_g1

0x7e19,	// (0x00012a06) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001a39a) midp_ticker_pane_srt_g

0x7e21,	// (0x00012a0e) midp_ticker_pane_srt_t1

0x9e9a,	// (0x00014a87) midp_editing_number_pane_t1_copy1

0x109f,	// (0x0000bc8c) listscroll_midp_pane

0x109f,	// (0x0000bc8c) midp_form_pane

0x7cc1,	// (0x000128ae) midp_info_popup_window_ParamLimits

0x7cc1,	// (0x000128ae) midp_info_popup_window

0x7038,	// (0x00011c25) bg_popup_sub_pane_cp50_ParamLimits

0x7038,	// (0x00011c25) bg_popup_sub_pane_cp50

0x8fb6,	// (0x00013ba3) listscroll_midp_info_pane_ParamLimits

0x8fb6,	// (0x00013ba3) listscroll_midp_info_pane

0x8f9e,	// (0x00013b8b) listscroll_form_midp_pane_ParamLimits

0x8f9e,	// (0x00013b8b) listscroll_form_midp_pane

0x8faa,	// (0x00013b97) scroll_bar_cp050

0x1eb8,	// (0x0000caa5) list_midp_pane

0xae4d,	// (0x00015a3a) signal_pane_g2_cp

0x8eb8,	// (0x00013aa5) listscroll_midp_info_pane_t1_ParamLimits

0x8eb8,	// (0x00013aa5) listscroll_midp_info_pane_t1

0x8ed0,	// (0x00013abd) listscroll_midp_info_pane_t2_ParamLimits

0x8ed0,	// (0x00013abd) listscroll_midp_info_pane_t2

0x8f0e,	// (0x00013afb) listscroll_midp_info_pane_t3_ParamLimits

0x8f0e,	// (0x00013afb) listscroll_midp_info_pane_t3

0x8f48,	// (0x00013b35) listscroll_midp_info_pane_t4_ParamLimits

0x8f48,	// (0x00013b35) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0001a446) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0001a446) listscroll_midp_info_pane_t

0x70f6,	// (0x00011ce3) scroll_pane_cp21

0x8e5c,	// (0x00013a49) form_midp_field_choice_group_pane

0x8e65,	// (0x00013a52) form_midp_field_text_pane

0x8e9e,	// (0x00013a8b) form_midp_field_time_pane

0x8ea6,	// (0x00013a93) form_midp_gauge_slider_pane

0x8eaf,	// (0x00013a9c) form_midp_gauge_wait_pane

0x5f4a,	// (0x00010b37) form_midp_image_pane

0x1e9c,	// (0x0000ca89) list_single_midp_pane_ParamLimits

0x1e9c,	// (0x0000ca89) list_single_midp_pane

0x1e78,	// (0x0000ca65) form_midp_field_text_pane_t1

0x8b9b,	// (0x00013788) input_focus_pane_cp050

0x8e0f,	// (0x000139fc) list_midp_form_text_pane

0x8d9f,	// (0x0001398c) form_midp_field_choice_group_pane_t1

0x8dad,	// (0x0001399a) input_focus_pane_cp051

0x8dc1,	// (0x000139ae) list_midp_choice_pane

0x5f4a,	// (0x00010b37) status_idle_pane

0x8d83,	// (0x00013970) form_midp_field_time_pane_t1

0x5f40,	// (0x00010b2d) wait_anim_pane_g2_copy1

0x8d91,	// (0x0001397e) form_midp_field_time_pane_t2

0x0001,

0x7d71,	// (0x0001295e) aid_navinavi_width_2_pane

0xf854,	// (0x0001a441) form_midp_field_time_pane_t

0x5f4a,	// (0x00010b37) input_focus_pane_cp052

0x5f4a,	// (0x00010b37) bg_input_focus_pane_cp040

0x8d43,	// (0x00013930) form_midp_gauge_slider_pane_t1

0x8d51,	// (0x0001393e) form_midp_gauge_slider_pane_t2

0x1e5c,	// (0x0000ca49) form_midp_gauge_slider_pane_t3

0x1e6a,	// (0x0000ca57) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0001a438) form_midp_gauge_slider_pane_t

0x8d7b,	// (0x00013968) form_midp_slider_pane

0x602a,	// (0x00010c17) bg_input_focus_pane_cp041_ParamLimits

0x602a,	// (0x00010c17) bg_input_focus_pane_cp041

0x8d10,	// (0x000138fd) form_midp_gauge_wait_pane_t1_ParamLimits

0x8d10,	// (0x000138fd) form_midp_gauge_wait_pane_t1

0x8d22,	// (0x0001390f) form_midp_gauge_wait_pane_t2_ParamLimits

0x8d22,	// (0x0001390f) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0001a433) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0001a433) form_midp_gauge_wait_pane_t

0x8d34,	// (0x00013921) form_midp_wait_pane_ParamLimits

0x8d34,	// (0x00013921) form_midp_wait_pane

0x8cda,	// (0x000138c7) form_midp_image_pane_g1

0x8ce3,	// (0x000138d0) form_midp_image_pane_t1

0x8cf2,	// (0x000138df) form_midp_image_pane_t2

0x8d01,	// (0x000138ee) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0001a42c) form_midp_image_pane_t

0x8cc2,	// (0x000138af) list_single_midp_pane_g1

0x8ccb,	// (0x000138b8) list_single_midp_pane_t1

0x1e45,	// (0x0000ca32) list_midp_form_item_pane_ParamLimits

0x1e45,	// (0x0000ca32) list_midp_form_item_pane

0x7d19,	// (0x00012906) list_midp_form_item_pane_t1

0x7d28,	// (0x00012915) midp_ticker_pane_g1

0x7d34,	// (0x00012921) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001a380) midp_ticker_pane_g

0x114b,	// (0x0000bd38) midp_ticker_pane_t1

0x2384,	// (0x0000cf71) midp_editing_number_pane_t1

0xa0ee,	// (0x00014cdb) midp_editing_number_pane

0xa0fd,	// (0x00014cea) midp_ticker_pane

0x9e62,	// (0x00014a4f) ai_message_heading_pane

0x5f4a,	// (0x00010b37) bg_popup_window_pane_cp14

0x9e6a,	// (0x00014a57) listscroll_ai_message_pane

0x9dec,	// (0x000149d9) ai_message_heading_pane_g1_ParamLimits

0x9dec,	// (0x000149d9) ai_message_heading_pane_g1

0x9df8,	// (0x000149e5) ai_message_heading_pane_g2_ParamLimits

0x9df8,	// (0x000149e5) ai_message_heading_pane_g2

0x9e04,	// (0x000149f1) ai_message_heading_pane_g3_ParamLimits

0x9e04,	// (0x000149f1) ai_message_heading_pane_g3

0x9e10,	// (0x000149fd) ai_message_heading_pane_g4_ParamLimits

0x9e10,	// (0x000149fd) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0001a56d) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0001a56d) ai_message_heading_pane_g

0x9e1c,	// (0x00014a09) ai_message_heading_pane_t1_ParamLimits

0x9e1c,	// (0x00014a09) ai_message_heading_pane_t1

0x9e36,	// (0x00014a23) ai_message_heading_pane_t2_ParamLimits

0x9e36,	// (0x00014a23) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0001a576) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0001a576) ai_message_heading_pane_t

0x9e48,	// (0x00014a35) bg_popup_heading_pane_cp1_ParamLimits

0x9e48,	// (0x00014a35) bg_popup_heading_pane_cp1

0x9dda,	// (0x000149c7) list_ai_message_pane_ParamLimits

0x9dda,	// (0x000149c7) list_ai_message_pane

0x70f6,	// (0x00011ce3) scroll_pane_cp10

0x9d76,	// (0x00014963) list_ai_message_pane_g1

0x9d7e,	// (0x0001496b) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0001a54a) list_ai_message_pane_g

0x9d86,	// (0x00014973) list_ai_message_pane_t1_ParamLimits

0x9d86,	// (0x00014973) list_ai_message_pane_t1

0x9d9b,	// (0x00014988) list_ai_message_pane_t2_ParamLimits

0x9d9b,	// (0x00014988) list_ai_message_pane_t2

0x9db0,	// (0x0001499d) list_ai_message_pane_t3_ParamLimits

0x9db0,	// (0x0001499d) list_ai_message_pane_t3

0x9dc5,	// (0x000149b2) list_ai_message_pane_t4_ParamLimits

0x9dc5,	// (0x000149b2) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0001a54f) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0001a54f) list_ai_message_pane_t

0x21b2,	// (0x0000cd9f) cell_ai_soft_ind_pane_ParamLimits

0x21b2,	// (0x0000cd9f) cell_ai_soft_ind_pane

0x7d52,	// (0x0001293f) cell_ai_soft_ind_pane_g1_ParamLimits

0x7d52,	// (0x0001293f) cell_ai_soft_ind_pane_g1

0x5f4a,	// (0x00010b37) grid_highlight_cp1

0x7d5f,	// (0x0001294c) text_secondary_cp56_ParamLimits

0x7d5f,	// (0x0001294c) text_secondary_cp56

0x9d35,	// (0x00014922) example_general_pane_ParamLimits

0x9d35,	// (0x00014922) example_general_pane

0x9d41,	// (0x0001492e) example_parent_pane_g1_ParamLimits

0x9d41,	// (0x0001492e) example_parent_pane_g1

0x9d4d,	// (0x0001493a) example_parent_pane_t1_ParamLimits

0x9d4d,	// (0x0001493a) example_parent_pane_t1

0x16a6,	// (0x0000c293) popup_preview_text_window_ParamLimits

0x16a6,	// (0x0000c293) popup_preview_text_window

0x7b78,	// (0x00012765) list_single_pane_cp2_g4

0x6369,	// (0x00010f56) bg_popup_preview_window_pane_ParamLimits

0x6369,	// (0x00010f56) bg_popup_preview_window_pane

0x9a6c,	// (0x00014659) popup_preview_text_window_t1_ParamLimits

0x9a6c,	// (0x00014659) popup_preview_text_window_t1

0x9a8a,	// (0x00014677) popup_preview_text_window_t2_ParamLimits

0x9a8a,	// (0x00014677) popup_preview_text_window_t2

0x9ad3,	// (0x000146c0) popup_preview_text_window_t3_ParamLimits

0x9ad3,	// (0x000146c0) popup_preview_text_window_t3

0x9b18,	// (0x00014705) popup_preview_text_window_t4_ParamLimits

0x9b18,	// (0x00014705) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0001a51e) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0001a51e) popup_preview_text_window_t

0x9b96,	// (0x00014783) scroll_pane_cp11

0x8a81,	// (0x0001366e) bg_popup_preview_window_pane_g1

0x9a2c,	// (0x00014619) bg_popup_preview_window_pane_g2

0x9a34,	// (0x00014621) bg_popup_preview_window_pane_g3

0x9a3c,	// (0x00014629) bg_popup_preview_window_pane_g4

0x9a44,	// (0x00014631) bg_popup_preview_window_pane_g5

0x9a4c,	// (0x00014639) bg_popup_preview_window_pane_g6

0x9a54,	// (0x00014641) bg_popup_preview_window_pane_g7

0x9a5c,	// (0x00014649) bg_popup_preview_window_pane_g8

0x42d9,	// (0x0000eec6) aid_popup_width_pane

0x1622,	// (0x0000c20f) popup_midp_note_alarm_window_ParamLimits

0x1622,	// (0x0000c20f) popup_midp_note_alarm_window

0x6dd3,	// (0x000119c0) data_form_pane_ParamLimits

0x0cd8,	// (0x0000b8c5) form_field_data_pane_g1

0x0ce2,	// (0x0000b8cf) form_field_data_pane_t1_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_ParamLimits

0x6e11,	// (0x000119fe) data_form_wide_pane_ParamLimits

0x6e1d,	// (0x00011a0a) form_field_data_wide_pane_g1

0x6e49,	// (0x00011a36) form_field_data_wide_pane_t1_ParamLimits

0x6608,	// (0x000111f5) input_focus_pane_cp6_ParamLimits

0x0e44,	// (0x0000ba31) input_popup_find_pane_g1_ParamLimits

0x0e44,	// (0x0000ba31) input_popup_find_pane_g1

0x4835,	// (0x0000f422) aid_navi_side_left_pane

0x484a,	// (0x0000f437) aid_navi_side_right_pane

0x944b,	// (0x00014038) bg_popup_window_pane_cp30_ParamLimits

0x944b,	// (0x00014038) bg_popup_window_pane_cp30

0x94c5,	// (0x000140b2) popup_midp_note_alarm_window_g1_ParamLimits

0x94c5,	// (0x000140b2) popup_midp_note_alarm_window_g1

0x94f5,	// (0x000140e2) popup_midp_note_alarm_window_t1_ParamLimits

0x94f5,	// (0x000140e2) popup_midp_note_alarm_window_t1

0x9596,	// (0x00014183) popup_midp_note_alarm_window_t2_ParamLimits

0x9596,	// (0x00014183) popup_midp_note_alarm_window_t2

0x9644,	// (0x00014231) popup_midp_note_alarm_window_t3_ParamLimits

0x9644,	// (0x00014231) popup_midp_note_alarm_window_t3

0x966c,	// (0x00014259) popup_midp_note_alarm_window_t4_ParamLimits

0x966c,	// (0x00014259) popup_midp_note_alarm_window_t4

0x968c,	// (0x00014279) popup_midp_note_alarm_window_t5_ParamLimits

0x968c,	// (0x00014279) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0001a4bb) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0001a4bb) popup_midp_note_alarm_window_t

0x9738,	// (0x00014325) wait_bar_pane_cp1_ParamLimits

0x9738,	// (0x00014325) wait_bar_pane_cp1

0x5f4a,	// (0x00010b37) wait_anim_pane_copy1

0x5f4a,	// (0x00010b37) wait_border_pane_copy1

0x9129,	// (0x00013d16) wait_border_pane_g1_copy1

0x6e63,	// (0x00011a50) form_field_popup_pane_g1

0x0cfc,	// (0x0000b8e9) form_field_popup_pane_t1_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_cp7_ParamLimits

0x6e85,	// (0x00011a72) list_form_pane_ParamLimits

0x6e91,	// (0x00011a7e) form_field_popup_wide_pane_g1

0x6e99,	// (0x00011a86) form_field_popup_wide_pane_t1_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_cp8_ParamLimits

0x6eae,	// (0x00011a9b) list_form_wide_pane_ParamLimits

0xa326,	// (0x00014f13) aid_size_cell_graphic_pane

0x0d7b,	// (0x0000b968) data_form_pane_t1_ParamLimits

0x2368,	// (0x0000cf55) data_form_wide_pane_t1_ParamLimits

0x1a5b,	// (0x0000c648) bg_status_flat_pane

0x05fd,	// (0x0000b1ea) title_pane_t1_ParamLimits

0x5ff2,	// (0x00010bdf) title_pane_t2_ParamLimits

0x6018,	// (0x00010c05) title_pane_t3_ParamLimits

0xf59b,	// (0x0001a188) title_pane_t_ParamLimits

0x7571,	// (0x0001215e) level_1_signal_ParamLimits

0x757e,	// (0x0001216b) level_2_signal_ParamLimits

0x758b,	// (0x00012178) level_3_signal_ParamLimits

0x7598,	// (0x00012185) level_4_signal_ParamLimits

0x75a5,	// (0x00012192) level_5_signal_ParamLimits

0x75b2,	// (0x0001219f) level_6_signal_ParamLimits

0x75bf,	// (0x000121ac) level_7_signal_ParamLimits

0x7571,	// (0x0001215e) level_1_battery_ParamLimits

0x757e,	// (0x0001216b) level_2_battery_ParamLimits

0x758b,	// (0x00012178) level_3_battery_ParamLimits

0x7598,	// (0x00012185) level_4_battery_ParamLimits

0x75a5,	// (0x00012192) level_5_battery_ParamLimits

0x75b2,	// (0x0001219f) level_6_battery_ParamLimits

0x75bf,	// (0x000121ac) level_7_battery_ParamLimits

0x9350,	// (0x00013f3d) bg_status_flat_pane_g1

0x9358,	// (0x00013f45) bg_status_flat_pane_g2

0x9360,	// (0x00013f4d) bg_status_flat_pane_g3

0x9368,	// (0x00013f55) bg_status_flat_pane_g4

0x9370,	// (0x00013f5d) bg_status_flat_pane_g5

0x9378,	// (0x00013f65) bg_status_flat_pane_g6

0x9380,	// (0x00013f6d) bg_status_flat_pane_g7

0x0691,	// (0x0000b27e) tabs_3_active_pane_t1_ParamLimits

0x0691,	// (0x0000b27e) tabs_3_passive_pane_t1_ParamLimits

0x06ab,	// (0x0000b298) tabs_4_active_pane_t1_ParamLimits

0x06ab,	// (0x0000b298) tabs_4_1_passive_pane_t1_ParamLimits

0x0e5a,	// (0x0000ba47) tabs_2_active_pane_t1_ParamLimits

0x0e5a,	// (0x0000ba47) tabs_2_passive_pane_t1_ParamLimits

0x602a,	// (0x00010c17) bg_active_tab_pane_cp4_ParamLimits

0x0e6c,	// (0x0000ba59) tabs_2_long_active_pane_t1_ParamLimits

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp4_ParamLimits

0x4e03,	// (0x0000f9f0) list_single_midp_graphic_pane_t1_ParamLimits

0x602a,	// (0x00010c17) bg_active_tab_pane_cp5_ParamLimits

0x0e7f,	// (0x0000ba6c) tabs_3_long_active_pane_t1_ParamLimits

0x7fcf,	// (0x00012bbc) bg_passive_tab_pane_cp5_ParamLimits

0x4e03,	// (0x0000f9f0) list_single_midp_graphic_pane_t1

0x1a5b,	// (0x0000c648) bg_status_flat_pane_ParamLimits

0x86f8,	// (0x000132e5) indicator_pane_cp2_ParamLimits

0x86f8,	// (0x000132e5) indicator_pane_cp2

0x1bd2,	// (0x0000c7bf) navi_pane_srt_ParamLimits

0x1bd2,	// (0x0000c7bf) navi_pane_srt

0x8840,	// (0x0001342d) popup_clock_digital_analogue_window_cp1

0x6121,	// (0x00010d0e) indicator_pane_t1

0x7c49,	// (0x00012836) copy_highlight_pane

0x7c49,	// (0x00012836) cursor_graphics_pane

0x7c49,	// (0x00012836) graphic_within_text_pane

0x7c49,	// (0x00012836) link_highlight_pane

0x9b59,	// (0x00014746) popup_preview_text_window_t5_ParamLimits

0x9b59,	// (0x00014746) popup_preview_text_window_t5

0x7d79,	// (0x00012966) cursor_digital_pane

0x7d79,	// (0x00012966) cursor_primary_pane

0x7d8a,	// (0x00012977) cursor_primary_small_pane

0x7d92,	// (0x0001297f) cursor_secondary_pane

0x7d9a,	// (0x00012987) cursor_title_pane

0x7d79,	// (0x00012966) link_highlight_digital_pane

0x7d81,	// (0x0001296e) link_highlight_primary_pane

0x7d8a,	// (0x00012977) link_highlight_primary_small_pane

0x7d92,	// (0x0001297f) link_highlight_secondary_pane

0x7d9a,	// (0x00012987) link_highlight_title_pane

0x7d79,	// (0x00012966) copy_highlight_digital_pane

0x7d79,	// (0x00012966) copy_highlight_primary_pane

0x7d8a,	// (0x00012977) copy_highlight_primary_small_pane

0x7d92,	// (0x0001297f) copy_highlight_secondary_pane

0x7d9a,	// (0x00012987) copy_highlight_title_pane

0x7d92,	// (0x0001297f) graphic_text_digital_pane

0x93ee,	// (0x00013fdb) graphic_text_primary_pane

0x93f7,	// (0x00013fe4) graphic_text_primary_small_pane

0x7d8a,	// (0x00012977) graphic_text_secondary_pane

0x7d79,	// (0x00012966) graphic_text_title_pane

0x115d,	// (0x0000bd4a) cursor_primary_pane_g1

0x93e0,	// (0x00013fcd) cursor_text_primary_t1

0x1ef8,	// (0x0000cae5) cursor_primary_small_pane_g1

0x93d2,	// (0x00013fbf) cursor_text_primary_small_t1

0x1eee,	// (0x0000cadb) cursor_primary_small_pane_g1_copy1

0x93ba,	// (0x00013fa7) cursor_text_primary_small_t1_copy1

0x9398,	// (0x00013f85) cursor_text_title_t1

0x1ee4,	// (0x0000cad1) cursor_title_pane_g1

0x115d,	// (0x0000bd4a) cursor_digital_pane_g1

0x7dac,	// (0x00012999) cursor_text_digital_t1

0x9339,	// (0x00013f26) link_highlight_primary_pane_g1

0x9341,	// (0x00013f2e) link_highlight_primary_pane_t1

0x7dba,	// (0x000129a7) link_highlight_primary_small_pane_g1

0x7dc2,	// (0x000129af) link_highlight_primary_small_pane_t1

0x7dba,	// (0x000129a7) link_highlight_secondary_pane_g1

0x7dd1,	// (0x000129be) link_highlight_secondary_pane_t1

0x92ad,	// (0x00013e9a) link_highlight_title_pane_g1

0x92b5,	// (0x00013ea2) link_highlight_title_pane_t1

0x9296,	// (0x00013e83) link_highlight_digital_pane_g1

0x929e,	// (0x00013e8b) link_highlight_digital_pane_t1

0x916e,	// (0x00013d5b) copy_highlight_primary_pane_g1

0x9176,	// (0x00013d63) copy_highlight_primary_pane_t1

0x9148,	// (0x00013d35) copy_highlight_primary_small_pane_g1

0x915f,	// (0x00013d4c) copy_highlight_primary_small_pane_t1

0x7de0,	// (0x000129cd) copy_highlight_secondary_pane_g1

0x7de8,	// (0x000129d5) copy_highlight_secondary_pane_t1

0x9148,	// (0x00013d35) copy_highlight_title_pane_g1

0x9150,	// (0x00013d3d) copy_highlight_title_pane_t1

0x916e,	// (0x00013d5b) copy_highlight_digital_pane_g1

0xa4f4,	// (0x000150e1) copy_highlight_digital_pane_t1

0xa448,	// (0x00015035) graphic_text_primary_pane_g1

0xa4d8,	// (0x000150c5) graphic_text_primary_pane_t1

0xa4e6,	// (0x000150d3) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0001a5ea) graphic_text_primary_pane_t

0xa4b4,	// (0x000150a1) graphic_text_primary_small_pane_g1

0xa4bc,	// (0x000150a9) graphic_text_primary_small_pane_t1

0xa4ca,	// (0x000150b7) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0001a5e5) graphic_text_primary_small_pane_t

0xa490,	// (0x0001507d) graphic_text_secondary_pane_g1

0xa498,	// (0x00015085) graphic_text_secondary_pane_t1

0xa4a6,	// (0x00015093) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0001a5e0) graphic_text_secondary_pane_t

0xa46c,	// (0x00015059) graphic_text_title_pane_g1

0xa474,	// (0x00015061) graphic_text_title_pane_t1

0xa482,	// (0x0001506f) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0001a5db) graphic_text_title_pane_t

0xa448,	// (0x00015035) graphic_text_digital_pane_g1

0xa450,	// (0x0001503d) graphic_text_digital_pane_t1

0xa45e,	// (0x0001504b) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0001a5d6) graphic_text_digital_pane_t

0x602a,	// (0x00010c17) navi_icon_pane_srt_ParamLimits

0x602a,	// (0x00010c17) navi_icon_pane_srt

0x5f4a,	// (0x00010b37) navi_midp_pane_srt

0x5f4a,	// (0x00010b37) navi_navi_pane_srt

0x602a,	// (0x00010c17) navi_text_pane_srt_ParamLimits

0x602a,	// (0x00010c17) navi_text_pane_srt

0xa413,	// (0x00015000) navi_navi_icon_text_pane_srt

0xa41b,	// (0x00015008) navi_navi_pane_srt_g1_ParamLimits

0xa41b,	// (0x00015008) navi_navi_pane_srt_g1

0xa42d,	// (0x0001501a) navi_navi_pane_srt_g2_ParamLimits

0xa42d,	// (0x0001501a) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0001a5d1) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0001a5d1) navi_navi_pane_srt_g

0xa43f,	// (0x0001502c) navi_navi_tabs_pane_srt

0xa413,	// (0x00015000) navi_navi_text_pane_srt

0xa413,	// (0x00015000) navi_navi_volume_pane_srt

0xa404,	// (0x00014ff1) navi_navi_text_pane_srt_t1

0x5183,	// (0x0000fd70) navi_navi_volume_pane_srt_g1

0x518b,	// (0x0000fd78) volume_small_pane_srt_ParamLimits

0x518b,	// (0x0000fd78) volume_small_pane_srt

0x4b15,	// (0x0000f702) volume_small_pane_srt_g1_ParamLimits

0x4b15,	// (0x0000f702) volume_small_pane_srt_g1

0x4b25,	// (0x0000f712) volume_small_pane_srt_g2_ParamLimits

0x4b25,	// (0x0000f712) volume_small_pane_srt_g2

0x4b36,	// (0x0000f723) volume_small_pane_srt_g3_ParamLimits

0x4b36,	// (0x0000f723) volume_small_pane_srt_g3

0x4b47,	// (0x0000f734) volume_small_pane_srt_g4_ParamLimits

0x4b47,	// (0x0000f734) volume_small_pane_srt_g4

0x4b58,	// (0x0000f745) volume_small_pane_srt_g5_ParamLimits

0x4b58,	// (0x0000f745) volume_small_pane_srt_g5

0x4b69,	// (0x0000f756) volume_small_pane_srt_g6_ParamLimits

0x4b69,	// (0x0000f756) volume_small_pane_srt_g6

0x4b7a,	// (0x0000f767) volume_small_pane_srt_g7_ParamLimits

0x4b7a,	// (0x0000f767) volume_small_pane_srt_g7

0x4b8b,	// (0x0000f778) volume_small_pane_srt_g8_ParamLimits

0x4b8b,	// (0x0000f778) volume_small_pane_srt_g8

0x4b9c,	// (0x0000f789) volume_small_pane_srt_g9_ParamLimits

0x4b9c,	// (0x0000f789) volume_small_pane_srt_g9

0x4bad,	// (0x0000f79a) volume_small_pane_srt_g10_ParamLimits

0x4bad,	// (0x0000f79a) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001a385) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001a385) volume_small_pane_srt_g

0x6412,	// (0x00010fff) query_popup_data_pane_cp2

0xa3ea,	// (0x00014fd7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa3ea,	// (0x00014fd7) navi_navi_icon_text_pane_srt_t1

0x93ee,	// (0x00013fdb) navi_tabs_2_long_pane_srt

0x93ee,	// (0x00013fdb) navi_tabs_2_pane_srt

0x93ee,	// (0x00013fdb) navi_tabs_3_long_pane_srt

0x93ee,	// (0x00013fdb) navi_tabs_3_pane_srt

0x93ee,	// (0x00013fdb) navi_tabs_4_pane_srt

0x5163,	// (0x0000fd50) tabs_2_active_pane_srt_ParamLimits

0x5163,	// (0x0000fd50) tabs_2_active_pane_srt

0x5173,	// (0x0000fd60) tabs_2_passive_pane_srt_ParamLimits

0x5173,	// (0x0000fd60) tabs_2_passive_pane_srt

0x8b9b,	// (0x00013788) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b9b,	// (0x00013788) bg_passive_tab_pane_cp1_srt

0xa3b6,	// (0x00014fa3) bg_passive_tab_pane_g1_cp1_srt

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp1_srt

0xa3bf,	// (0x00014fac) bg_passive_tab_pane_g3_cp1_srt

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp1_srt_ParamLimits

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp1_srt

0xa3c8,	// (0x00014fb5) tabs_2_active_pane_srt_g1

0x24a0,	// (0x0000d08d) tabs_2_active_pane_srt_t1_ParamLimits

0x24a0,	// (0x0000d08d) tabs_2_active_pane_srt_t1

0xa3b6,	// (0x00014fa3) bg_active_tab_pane_g1_cp1_srt

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp1_srt

0xa3bf,	// (0x00014fac) bg_active_tab_pane_g3_cp1_srt

0x5130,	// (0x0000fd1d) tabs_3_active_pane_srt_ParamLimits

0x5130,	// (0x0000fd1d) tabs_3_active_pane_srt

0x5141,	// (0x0000fd2e) tabs_3_passive_pane_cp_srt_ParamLimits

0x5141,	// (0x0000fd2e) tabs_3_passive_pane_cp_srt

0x5152,	// (0x0000fd3f) tabs_3_passive_pane_srt_ParamLimits

0x5152,	// (0x0000fd3f) tabs_3_passive_pane_srt

0x8b9b,	// (0x00013788) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b9b,	// (0x00013788) bg_passive_tab_pane_cp2_srt

0x7df7,	// (0x000129e4) bg_passive_tab_pane_g1_cp2_srt

0x7891,	// (0x0001247e) bg_passive_tab_pane_g2_cp2_srt

0x7e00,	// (0x000129ed) bg_passive_tab_pane_g3_cp2_srt

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp2_srt_ParamLimits

0x62bf,	// (0x00010eac) bg_active_tab_pane_cp2_srt

0xa39c,	// (0x00014f89) tabs_3_active_pane_srt_g1

0x248a,	// (0x0000d077) tabs_3_active_pane_srt_t1_ParamLimits

0x248a,	// (0x0000d077) tabs_3_active_pane_srt_t1

0x7df7,	// (0x000129e4) bg_active_tab_pane_g1_cp2_srt

0x7891,	// (0x0001247e) bg_active_tab_pane_g2_cp2_srt

0x7e00,	// (0x000129ed) bg_active_tab_pane_g3_cp2_srt

0x50e8,	// (0x0000fcd5) tabs_4_active_pane_srt_ParamLimits

0x50e8,	// (0x0000fcd5) tabs_4_active_pane_srt

0x50fa,	// (0x0000fce7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x50fa,	// (0x0000fce7) tabs_4_passive_pane_cp2_srt

0x7f55,	// (0x00012b42) aid_size_cell_toolbar

0x9f3c,	// (0x00014b29) main_idle_act_pane_ParamLimits

0x816e,	// (0x00012d5b) popup_large_graphic_colour_window_ParamLimits

0x1926,	// (0x0000c513) popup_toolbar_window_ParamLimits

0x1926,	// (0x0000c513) popup_toolbar_window

0xa13e,	// (0x00014d2b) list_single_graphic_2heading_pane_ParamLimits

0xa13e,	// (0x00014d2b) list_single_graphic_2heading_pane

0x7325,	// (0x00011f12) aid_size_cell_apps_grid_lsc_pane

0x7337,	// (0x00011f24) aid_size_cell_apps_grid_prt_pane

0x7fcf,	// (0x00012bbc) bg_wml_button_pane_cp1_ParamLimits

0x7fcf,	// (0x00012bbc) bg_wml_button_pane_cp1

0x1e78,	// (0x0000ca65) form_midp_field_text_pane_t1_ParamLimits

0x8b9b,	// (0x00013788) input_focus_pane_cp050_ParamLimits

0x8e0f,	// (0x000139fc) list_midp_form_text_pane_ParamLimits

0x8dad,	// (0x0001399a) input_focus_pane_cp051_ParamLimits

0x8dc1,	// (0x000139ae) list_midp_choice_pane_ParamLimits

0x1e0d,	// (0x0000c9fa) list_single_2graphic_pane_cp3_ParamLimits

0x1e0d,	// (0x0000c9fa) list_single_2graphic_pane_cp3

0x1e23,	// (0x0000ca10) list_single_midp_graphic_pane_ParamLimits

0x1e23,	// (0x0000ca10) list_single_midp_graphic_pane

0x4d08,	// (0x0000f8f5) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d08,	// (0x0000f8f5) list_single_graphic_2heading_pane_g1

0x4d14,	// (0x0000f901) list_single_graphic_2heading_pane_g4_ParamLimits

0x4d14,	// (0x0000f901) list_single_graphic_2heading_pane_g4

0x4d20,	// (0x0000f90d) list_single_graphic_2heading_pane_g5_ParamLimits

0x4d20,	// (0x0000f90d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001a3d8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001a3d8) list_single_graphic_2heading_pane_g

0x4d2c,	// (0x0000f919) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d2c,	// (0x0000f919) list_single_graphic_2heading_pane_t1

0x4d40,	// (0x0000f92d) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d40,	// (0x0000f92d) list_single_graphic_2heading_pane_t2

0x4d5c,	// (0x0000f949) list_single_graphic_2heading_pane_t3_ParamLimits

0x4d5c,	// (0x0000f949) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001a3df) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001a3df) list_single_graphic_2heading_pane_t

0x899d,	// (0x0001358a) bg_popup_sub_pane_cp2

0x89c7,	// (0x000135b4) grid_toobar_pane

0x4d74,	// (0x0000f961) cell_toolbar_pane_ParamLimits

0x4d74,	// (0x0000f961) cell_toolbar_pane

0x8a25,	// (0x00013612) cell_toolbar_pane_g1_ParamLimits

0x8a25,	// (0x00013612) cell_toolbar_pane_g1

0x8a39,	// (0x00013626) cell_toolbar_pane_g2_ParamLimits

0x8a39,	// (0x00013626) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001a3ed) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001a3ed) cell_toolbar_pane_g

0x8a5b,	// (0x00013648) grid_highlight_pane_cp2_ParamLimits

0x8a5b,	// (0x00013648) grid_highlight_pane_cp2

0x8a75,	// (0x00013662) toolbar_button_pane

0x8a81,	// (0x0001366e) toolbar_button_pane_g1

0x8a89,	// (0x00013676) toolbar_button_pane_g2

0x8a91,	// (0x0001367e) toolbar_button_pane_g3

0x8a99,	// (0x00013686) toolbar_button_pane_g4

0x8aa1,	// (0x0001368e) toolbar_button_pane_g5

0x8aa9,	// (0x00013696) toolbar_button_pane_g6

0x8ab1,	// (0x0001369e) toolbar_button_pane_g7

0x8ab9,	// (0x000136a6) toolbar_button_pane_g8

0x8ac1,	// (0x000136ae) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001a3f2) toolbar_button_pane_g

0x4dac,	// (0x0000f999) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4dac,	// (0x0000f999) list_single_2graphic_pane_g1_cp3

0xe267,	// (0x00018e54) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe267,	// (0x00018e54) list_single_2graphic_pane_g2_cp3

0x4dc9,	// (0x0000f9b6) list_single_2graphic_pane_g3_cp3

0x4dd1,	// (0x0000f9be) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4dd1,	// (0x0000f9be) list_single_2graphic_pane_g4_cp3

0x4ddd,	// (0x0000f9ca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4ddd,	// (0x0000f9ca) list_single_2graphic_pane_t1_cp3

0x4df7,	// (0x0000f9e4) list_single_midp_graphic_pane_g2_ParamLimits

0x4df7,	// (0x0000f9e4) list_single_midp_graphic_pane_g2

0x7f5d,	// (0x00012b4a) aid_zoom_text_primary

0x7f65,	// (0x00012b52) aid_zoom_text_secondary

0x7eb4,	// (0x00012aa1) status_small_pane_g7_ParamLimits

0x7eb4,	// (0x00012aa1) status_small_pane_g7

0x7ed7,	// (0x00012ac4) status_small_pane_t1_ParamLimits

0x05d9,	// (0x0000b1c6) title_pane_g2

0x0003,

0xf592,	// (0x0001a17f) title_pane_g

0x0864,	// (0x0000b451) aid_size_cell_colour_1_pane_ParamLimits

0x0864,	// (0x0000b451) aid_size_cell_colour_1_pane

0x0878,	// (0x0000b465) aid_size_cell_colour_2_pane_ParamLimits

0x0878,	// (0x0000b465) aid_size_cell_colour_2_pane

0x088c,	// (0x0000b479) aid_size_cell_colour_3_pane_ParamLimits

0x088c,	// (0x0000b479) aid_size_cell_colour_3_pane

0x08a0,	// (0x0000b48d) aid_size_cell_colour_4_pane_ParamLimits

0x08a0,	// (0x0000b48d) aid_size_cell_colour_4_pane

0x4771,	// (0x0000f35e) title_pane_stacon_g1_ParamLimits

0x4771,	// (0x0000f35e) title_pane_stacon_g1

0x91cd,	// (0x00013dba) popup_note_wait_window_g3_ParamLimits

0x91cd,	// (0x00013dba) popup_note_wait_window_g3

0x9243,	// (0x00013e30) popup_note_wait_window_t5_ParamLimits

0x9243,	// (0x00013e30) popup_note_wait_window_t5

0x5f4a,	// (0x00010b37) main_feb_china_hwr_fs_writing_pane

0x134e,	// (0x0000bf3b) popup_feb_china_hwr_fs_window_ParamLimits

0x134e,	// (0x0000bf3b) popup_feb_china_hwr_fs_window

0xe278,	// (0x00018e65) aid_size_cell_hwr_fs_ParamLimits

0xe278,	// (0x00018e65) aid_size_cell_hwr_fs

0x8b9b,	// (0x00013788) bg_popup_sub_pane_cp3_ParamLimits

0x8b9b,	// (0x00013788) bg_popup_sub_pane_cp3

0xe28d,	// (0x00018e7a) grid_hwr_fs_pane_ParamLimits

0xe28d,	// (0x00018e7a) grid_hwr_fs_pane

0x4e46,	// (0x0000fa33) linegrid_hwr_fs_pane_ParamLimits

0x4e46,	// (0x0000fa33) linegrid_hwr_fs_pane

0xe2a5,	// (0x00018e92) cell_hwr_fs_pane_ParamLimits

0xe2a5,	// (0x00018e92) cell_hwr_fs_pane

0x8ba7,	// (0x00013794) linegrid_hwr_fs_pane_g1_ParamLimits

0x8ba7,	// (0x00013794) linegrid_hwr_fs_pane_g1

0x1dd3,	// (0x0000c9c0) linegrid_hwr_fs_pane_g2_ParamLimits

0x1dd3,	// (0x0000c9c0) linegrid_hwr_fs_pane_g2

0x8bc5,	// (0x000137b2) linegrid_hwr_fs_pane_g3_ParamLimits

0x8bc5,	// (0x000137b2) linegrid_hwr_fs_pane_g3

0x4e78,	// (0x0000fa65) linegrid_hwr_fs_pane_g4_ParamLimits

0x4e78,	// (0x0000fa65) linegrid_hwr_fs_pane_g4

0x4e92,	// (0x0000fa7f) linegrid_hwr_fs_pane_g5_ParamLimits

0x4e92,	// (0x0000fa7f) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0001a418) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0001a418) linegrid_hwr_fs_pane_g

0x8bd1,	// (0x000137be) cell_hwr_fs_pane_g1_ParamLimits

0x8bd1,	// (0x000137be) cell_hwr_fs_pane_g1

0x88d6,	// (0x000134c3) cell_hwr_fs_pane_g2_ParamLimits

0x88d6,	// (0x000134c3) cell_hwr_fs_pane_g2

0x1de5,	// (0x0000c9d2) cell_hwr_fs_pane_g3_ParamLimits

0x1de5,	// (0x0000c9d2) cell_hwr_fs_pane_g3

0x1df2,	// (0x0000c9df) cell_hwr_fs_pane_g4_ParamLimits

0x1df2,	// (0x0000c9df) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0001a423) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0001a423) cell_hwr_fs_pane_g

0xe2cb,	// (0x00018eb8) cell_hwr_fs_pane_t1

0x5f4a,	// (0x00010b37) grid_highlight_pane_cp6

0x5f4a,	// (0x00010b37) main_idle_act2_pane

0x70dd,	// (0x00011cca) aid_inside_area_popup_secondary

0x2054,	// (0x0000cc41) aid_inside_area_window_primary_ParamLimits

0x2054,	// (0x0000cc41) aid_inside_area_window_primary

0xa503,	// (0x000150f0) ai2_news_ticker_pane

0xa50b,	// (0x000150f8) aid_size_cell_ai1_link_ParamLimits

0xa50b,	// (0x000150f8) aid_size_cell_ai1_link

0xa525,	// (0x00015112) popup_ai2_data_window_ParamLimits

0xa525,	// (0x00015112) popup_ai2_data_window

0xa539,	// (0x00015126) popup_ai2_link_window_ParamLimits

0xa539,	// (0x00015126) popup_ai2_link_window

0x8b9b,	// (0x00013788) bg_popup_sub_pane_cp4_ParamLimits

0x8b9b,	// (0x00013788) bg_popup_sub_pane_cp4

0xa54d,	// (0x0001513a) grid_ai2_link_pane_ParamLimits

0xa54d,	// (0x0001513a) grid_ai2_link_pane

0xa564,	// (0x00015151) popup_ai2_link_window_g1_ParamLimits

0xa564,	// (0x00015151) popup_ai2_link_window_g1

0xa570,	// (0x0001515d) popup_ai2_link_window_g2_ParamLimits

0xa570,	// (0x0001515d) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0001a5ef) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0001a5ef) popup_ai2_link_window_g

0xa57f,	// (0x0001516c) ai2_mp_button_pane

0xa587,	// (0x00015174) ai2_mp_volume_pane

0x8dad,	// (0x0001399a) bg_popup_sub_pane_cp5_ParamLimits

0x8dad,	// (0x0001399a) bg_popup_sub_pane_cp5

0xa58f,	// (0x0001517c) heading_ai2_gene_pane_ParamLimits

0xa58f,	// (0x0001517c) heading_ai2_gene_pane

0xa59b,	// (0x00015188) list_ai2_gene_pane_ParamLimits

0xa59b,	// (0x00015188) list_ai2_gene_pane

0xa5e3,	// (0x000151d0) cell_ai2_link_pane_ParamLimits

0xa5e3,	// (0x000151d0) cell_ai2_link_pane

0xa5f9,	// (0x000151e6) cell_ai2_link_pane_g1

0x5f4a,	// (0x00010b37) grid_highlight_pane_cp7

0x51a0,	// (0x0000fd8d) ai2_mp_volume_pane_g1

0xa6ca,	// (0x000152b7) ai2_mp_volume_pane_g2

0xa63f,	// (0x0001522c) list_ai2_gene_pane_t1

0xa6d2,	// (0x000152bf) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0001a608) ai2_mp_volume_pane_g

0x51a8,	// (0x0000fd95) volume_small_pane_cp3

0xa6da,	// (0x000152c7) aid_size_cell_ai2_button

0xa6e2,	// (0x000152cf) grid_ai2_button_pane

0xa6eb,	// (0x000152d8) cell_ai2_button_pane_ParamLimits

0xa6eb,	// (0x000152d8) cell_ai2_button_pane

0x5f40,	// (0x00010b2d) cell_ai2_button_pane_g1

0x5f4a,	// (0x00010b37) grid_highlight_pane_cp8

0xa68a,	// (0x00015277) ai2_gene_pane_t1_ParamLimits

0xa68a,	// (0x00015277) ai2_gene_pane_t1

0x12c4,	// (0x0000beb1) aid_height_parent_landscape

0x2216,	// (0x0000ce03) aid_height_set_list

0x9f3c,	// (0x00014b29) aid_size_parent

0xa326,	// (0x00014f13) aid_size_cell_graphic_pane_ParamLimits

0xa5ab,	// (0x00015198) popup_ai2_data_window_g1_ParamLimits

0xa5ab,	// (0x00015198) popup_ai2_data_window_g1

0xa5b7,	// (0x000151a4) ai2_news_ticker_pane_g1

0xa5bf,	// (0x000151ac) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0001a5f4) ai2_news_ticker_pane_g

0xa5c7,	// (0x000151b4) ai2_news_ticker_pane_t1

0xa5d5,	// (0x000151c2) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0001a5f9) ai2_news_ticker_pane_t

0xa602,	// (0x000151ef) heading_ai2_gene_pane_g1

0xa60a,	// (0x000151f7) heading_ai2_gene_pane_t1_ParamLimits

0xa60a,	// (0x000151f7) heading_ai2_gene_pane_t1

0xa61f,	// (0x0001520c) list_highlight_pane_cp6

0xa627,	// (0x00015214) ai2_gene_pane_ParamLimits

0xa627,	// (0x00015214) ai2_gene_pane

0xa64d,	// (0x0001523a) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0001a5fe) list_ai2_gene_pane_t

0xa65b,	// (0x00015248) list_highlight_pane_cp8_ParamLimits

0xa65b,	// (0x00015248) list_highlight_pane_cp8

0xa66c,	// (0x00015259) ai2_gene_pane_g1_ParamLimits

0xa66c,	// (0x00015259) ai2_gene_pane_g1

0xa67e,	// (0x0001526b) ai2_gene_pane_g2_ParamLimits

0xa67e,	// (0x0001526b) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0001a603) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0001a603) ai2_gene_pane_g

0x682d,	// (0x0001141a) scroll_pane_cp12

0xe224,	// (0x00018e11) control_pane_t3_ParamLimits

0xe224,	// (0x00018e11) control_pane_t3

0x7ec8,	// (0x00012ab5) status_small_pane_g8_ParamLimits

0x7ec8,	// (0x00012ab5) status_small_pane_g8

0x13e1,	// (0x0000bfce) popup_find_window_ParamLimits

0x165c,	// (0x0000c249) popup_note_image_window_ParamLimits

0x8a03,	// (0x000135f0) list_double2_graphic_pane_vc_g1_ParamLimits

0x8a03,	// (0x000135f0) list_double2_graphic_pane_vc_g1

0x68ff,	// (0x000114ec) list_double2_graphic_pane_vc_g2_ParamLimits

0x68ff,	// (0x000114ec) list_double2_graphic_pane_vc_g2

0x690b,	// (0x000114f8) list_double2_graphic_pane_vc_g3_ParamLimits

0x690b,	// (0x000114f8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a3e6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a3e6) list_double2_graphic_pane_vc_g

0x8a0f,	// (0x000135fc) list_double2_graphic_pane_vc_t1_ParamLimits

0x8a0f,	// (0x000135fc) list_double2_graphic_pane_vc_t1

0x68ff,	// (0x000114ec) list_single_heading_pane_vc_g1_ParamLimits

0x68ff,	// (0x000114ec) list_single_heading_pane_vc_g1

0x690b,	// (0x000114f8) list_single_heading_pane_vc_g2_ParamLimits

0x690b,	// (0x000114f8) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_single_heading_pane_vc_g

0x8ac9,	// (0x000136b6) list_single_heading_pane_vc_t1_ParamLimits

0x8ac9,	// (0x000136b6) list_single_heading_pane_vc_t1

0x8adf,	// (0x000136cc) list_single_heading_pane_vc_t2_ParamLimits

0x8adf,	// (0x000136cc) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0001a407) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0001a407) list_single_heading_pane_vc_t

0x8af3,	// (0x000136e0) list_setting_number_pane_vc_g1_ParamLimits

0x8af3,	// (0x000136e0) list_setting_number_pane_vc_g1

0x8aff,	// (0x000136ec) list_setting_number_pane_vc_g2_ParamLimits

0x8aff,	// (0x000136ec) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a40c) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a40c) list_setting_number_pane_vc_g

0x8b0b,	// (0x000136f8) list_setting_number_pane_vc_t1_ParamLimits

0x8b0b,	// (0x000136f8) list_setting_number_pane_vc_t1

0x8b1f,	// (0x0001370c) list_setting_number_pane_vc_t2_ParamLimits

0x8b1f,	// (0x0001370c) list_setting_number_pane_vc_t2

0x8b3b,	// (0x00013728) list_setting_number_pane_vc_t3_ParamLimits

0x8b3b,	// (0x00013728) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0001a411) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0001a411) list_setting_number_pane_vc_t

0x8b63,	// (0x00013750) set_value_pane_vc_ParamLimits

0x8b63,	// (0x00013750) set_value_pane_vc

0xa13e,	// (0x00014d2b) list_double2_graphic_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double2_graphic_pane_vc

0xa13e,	// (0x00014d2b) list_double2_large_graphic_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double2_large_graphic_pane_vc

0xa13e,	// (0x00014d2b) list_double2_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double2_pane_vc

0xa13e,	// (0x00014d2b) list_double_graphic_heading_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_graphic_heading_pane_vc

0xa13e,	// (0x00014d2b) list_double_graphic_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_graphic_pane_vc

0xa13e,	// (0x00014d2b) list_double_heading_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_heading_pane_vc

0xa13e,	// (0x00014d2b) list_double_large_graphic_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_large_graphic_pane_vc

0xa13e,	// (0x00014d2b) list_double_number_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_number_pane_vc

0xa13e,	// (0x00014d2b) list_double_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_pane_vc

0xa13e,	// (0x00014d2b) list_double_time_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_double_time_pane_vc

0xa13e,	// (0x00014d2b) list_setting_number_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_setting_number_pane_vc

0xa13e,	// (0x00014d2b) list_setting_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_setting_pane_vc

0xa13e,	// (0x00014d2b) list_single_graphic_heading_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_single_graphic_heading_pane_vc

0xa13e,	// (0x00014d2b) list_single_heading_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_single_heading_pane_vc

0xa13e,	// (0x00014d2b) list_single_number_heading_pane_vc_ParamLimits

0xa13e,	// (0x00014d2b) list_single_number_heading_pane_vc

0x8a03,	// (0x000135f0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8a03,	// (0x000135f0) list_double_graphic_heading_pane_vc_g1

0x68ff,	// (0x000114ec) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x68ff,	// (0x000114ec) list_double_graphic_heading_pane_vc_g2

0x690b,	// (0x000114f8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x690b,	// (0x000114f8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a3e6) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a3e6) list_double_graphic_heading_pane_vc_g

0xa71f,	// (0x0001530c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa71f,	// (0x0001530c) list_double_graphic_heading_pane_vc_t1

0x8ac9,	// (0x000136b6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8ac9,	// (0x000136b6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x0001a60f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x0001a60f) list_double_graphic_heading_pane_vc_t

0x8af3,	// (0x000136e0) list_setting_pane_vc_g1_ParamLimits

0x8af3,	// (0x000136e0) list_setting_pane_vc_g1

0x8aff,	// (0x000136ec) list_setting_pane_vc_g2_ParamLimits

0x8aff,	// (0x000136ec) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a40c) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a40c) list_setting_pane_vc_g

0xa917,	// (0x00015504) list_setting_pane_vc_t1_ParamLimits

0xa917,	// (0x00015504) list_setting_pane_vc_t1

0xa92b,	// (0x00015518) list_setting_pane_vc_t2_ParamLimits

0xa92b,	// (0x00015518) list_setting_pane_vc_t2

0x0001,

0xfa65,	// (0x0001a652) list_setting_pane_vc_t_ParamLimits

0xfa65,	// (0x0001a652) list_setting_pane_vc_t

0x8b63,	// (0x00013750) set_value_pane_cp_vc_ParamLimits

0x8b63,	// (0x00013750) set_value_pane_cp_vc

0x68ff,	// (0x000114ec) list_single_number_heading_pane_vc_g1_ParamLimits

0x68ff,	// (0x000114ec) list_single_number_heading_pane_vc_g1

0x690b,	// (0x000114f8) list_single_number_heading_pane_vc_g2_ParamLimits

0x690b,	// (0x000114f8) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_single_number_heading_pane_vc_g

0x8ac9,	// (0x000136b6) list_single_number_heading_pane_vc_t1_ParamLimits

0x8ac9,	// (0x000136b6) list_single_number_heading_pane_vc_t1

0xa94d,	// (0x0001553a) list_single_number_heading_pane_vc_t2_ParamLimits

0xa94d,	// (0x0001553a) list_single_number_heading_pane_vc_t2

0xa961,	// (0x0001554e) list_single_number_heading_pane_vc_t3_ParamLimits

0xa961,	// (0x0001554e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6a,	// (0x0001a657) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001a657) list_single_number_heading_pane_vc_t

0x8a03,	// (0x000135f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8a03,	// (0x000135f0) list_single_graphic_heading_pane_vc_g1

0x68ff,	// (0x000114ec) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x68ff,	// (0x000114ec) list_single_graphic_heading_pane_vc_g4

0x690b,	// (0x000114f8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x690b,	// (0x000114f8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001a3e6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a3e6) list_single_graphic_heading_pane_vc_g

0x8ac9,	// (0x000136b6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8ac9,	// (0x000136b6) list_single_graphic_heading_pane_vc_t1

0xa973,	// (0x00015560) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa973,	// (0x00015560) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001a65e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001a65e) list_single_graphic_heading_pane_vc_t

0x68ff,	// (0x000114ec) list_double2_pane_vc_g1_ParamLimits

0x68ff,	// (0x000114ec) list_double2_pane_vc_g1

0x690b,	// (0x000114f8) list_double2_pane_vc_g2_ParamLimits

0x690b,	// (0x000114f8) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_double2_pane_vc_g

0xa987,	// (0x00015574) list_double2_pane_vc_t1_ParamLimits

0xa987,	// (0x00015574) list_double2_pane_vc_t1

0xa99d,	// (0x0001558a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa99d,	// (0x0001558a) list_double2_large_graphic_pane_vc_g1

0x68ff,	// (0x000114ec) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x68ff,	// (0x000114ec) list_double2_large_graphic_pane_vc_g2

0x690b,	// (0x000114f8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x690b,	// (0x000114f8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0001a216) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0001a216) list_double2_large_graphic_pane_vc_g

0xa9a9,	// (0x00015596) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa9a9,	// (0x00015596) list_double2_large_graphic_pane_vc_t1

0xa9bf,	// (0x000155ac) list_double_time_pane_vc_g1_ParamLimits

0xa9bf,	// (0x000155ac) list_double_time_pane_vc_g1

0xa9cb,	// (0x000155b8) list_double_time_pane_vc_g2_ParamLimits

0xa9cb,	// (0x000155b8) list_double_time_pane_vc_g2

0x0001,

0xfa76,	// (0x0001a663) list_double_time_pane_vc_g_ParamLimits

0xfa76,	// (0x0001a663) list_double_time_pane_vc_g

0xa9d7,	// (0x000155c4) list_double_time_pane_vc_t1_ParamLimits

0xa9d7,	// (0x000155c4) list_double_time_pane_vc_t1

0xa9f0,	// (0x000155dd) list_double_time_pane_vc_t2_ParamLimits

0xa9f0,	// (0x000155dd) list_double_time_pane_vc_t2

0xaa10,	// (0x000155fd) list_double_time_pane_vc_t3_ParamLimits

0xaa10,	// (0x000155fd) list_double_time_pane_vc_t3

0xaa28,	// (0x00015615) list_double_time_pane_vc_t4_ParamLimits

0xaa28,	// (0x00015615) list_double_time_pane_vc_t4

0x0003,

0xfa7b,	// (0x0001a668) list_double_time_pane_vc_t_ParamLimits

0xfa7b,	// (0x0001a668) list_double_time_pane_vc_t

0x68ff,	// (0x000114ec) list_double_pane_vc_g1_ParamLimits

0x68ff,	// (0x000114ec) list_double_pane_vc_g1

0x690b,	// (0x000114f8) list_double_pane_vc_g2_ParamLimits

0x690b,	// (0x000114f8) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_double_pane_vc_g

0xaa3c,	// (0x00015629) list_double_pane_vc_t1_ParamLimits

0xaa3c,	// (0x00015629) list_double_pane_vc_t1

0xaa4e,	// (0x0001563b) list_double_pane_vc_t2_ParamLimits

0xaa4e,	// (0x0001563b) list_double_pane_vc_t2

0x0001,

0xfa84,	// (0x0001a671) list_double_pane_vc_t_ParamLimits

0xfa84,	// (0x0001a671) list_double_pane_vc_t

0x68ff,	// (0x000114ec) list_double_number_pane_vc_g1_ParamLimits

0x68ff,	// (0x000114ec) list_double_number_pane_vc_g1

0x690b,	// (0x000114f8) list_double_number_pane_vc_g2_ParamLimits

0x690b,	// (0x000114f8) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_double_number_pane_vc_g

0xaa66,	// (0x00015653) list_double_number_pane_vc_t1_ParamLimits

0xaa66,	// (0x00015653) list_double_number_pane_vc_t1

0xaa7a,	// (0x00015667) list_double_number_pane_vc_t2_ParamLimits

0xaa7a,	// (0x00015667) list_double_number_pane_vc_t2

0xaa4e,	// (0x0001563b) list_double_number_pane_vc_t3_ParamLimits

0xaa4e,	// (0x0001563b) list_double_number_pane_vc_t3

0x0002,

0xfa89,	// (0x0001a676) list_double_number_pane_vc_t_ParamLimits

0xfa89,	// (0x0001a676) list_double_number_pane_vc_t

0xaa8c,	// (0x00015679) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaa8c,	// (0x00015679) list_double_large_graphic_pane_vc_g1

0xaa98,	// (0x00015685) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaa98,	// (0x00015685) list_double_large_graphic_pane_vc_g2

0x690b,	// (0x000114f8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x690b,	// (0x000114f8) list_double_large_graphic_pane_vc_g3

0xaaa7,	// (0x00015694) list_double_large_graphic_pane_vc_g4_ParamLimits

0xaaa7,	// (0x00015694) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa90,	// (0x0001a67d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa90,	// (0x0001a67d) list_double_large_graphic_pane_vc_g

0xaab3,	// (0x000156a0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xaab3,	// (0x000156a0) list_double_large_graphic_pane_vc_t1

0xaac5,	// (0x000156b2) list_double_large_graphic_pane_vc_t2_ParamLimits

0xaac5,	// (0x000156b2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa99,	// (0x0001a686) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa99,	// (0x0001a686) list_double_large_graphic_pane_vc_t

0x68ff,	// (0x000114ec) list_double_heading_pane_vc_g1_ParamLimits

0x68ff,	// (0x000114ec) list_double_heading_pane_vc_g1

0x690b,	// (0x000114f8) list_double_heading_pane_vc_g2_ParamLimits

0x690b,	// (0x000114f8) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a1f9) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a1f9) list_double_heading_pane_vc_g

0xaade,	// (0x000156cb) list_double_heading_pane_vc_t1_ParamLimits

0xaade,	// (0x000156cb) list_double_heading_pane_vc_t1

0x8ac9,	// (0x000136b6) list_double_heading_pane_vc_t2_ParamLimits

0x8ac9,	// (0x000136b6) list_double_heading_pane_vc_t2

0x0001,

0xfa9e,	// (0x0001a68b) list_double_heading_pane_vc_t_ParamLimits

0xfa9e,	// (0x0001a68b) list_double_heading_pane_vc_t

0x8a03,	// (0x000135f0) list_double_graphic_pane_vc_g1_ParamLimits

0x8a03,	// (0x000135f0) list_double_graphic_pane_vc_g1

0xaaf2,	// (0x000156df) list_double_graphic_pane_vc_g2_ParamLimits

0xaaf2,	// (0x000156df) list_double_graphic_pane_vc_g2

0xab01,	// (0x000156ee) list_double_graphic_pane_vc_g3_ParamLimits

0xab01,	// (0x000156ee) list_double_graphic_pane_vc_g3

0x0002,

0xfaa3,	// (0x0001a690) list_double_graphic_pane_vc_g_ParamLimits

0xfaa3,	// (0x0001a690) list_double_graphic_pane_vc_g

0xab0d,	// (0x000156fa) list_double_graphic_pane_vc_t1_ParamLimits

0xab0d,	// (0x000156fa) list_double_graphic_pane_vc_t1

0xaa4e,	// (0x0001563b) list_double_graphic_pane_vc_t2_ParamLimits

0xaa4e,	// (0x0001563b) list_double_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001a697) list_double_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001a697) list_double_graphic_pane_vc_t

0x42e5,	// (0x0000eed2) aid_size_cell_fastswap

0xdf87,	// (0x00018b74) aid_size_cell_touch_ParamLimits

0xdf87,	// (0x00018b74) aid_size_cell_touch

0x4552,	// (0x0000f13f) popup_fast_swap_wide_window_ParamLimits

0x4552,	// (0x0000f13f) popup_fast_swap_wide_window

0xe0d2,	// (0x00018cbf) touch_pane_ParamLimits

0xe0d2,	// (0x00018cbf) touch_pane

0x6d2b,	// (0x00011918) button_value_adjust_pane_cp2

0x6d2b,	// (0x00011918) button_value_adjust_pane_cp4

0x6d4b,	// (0x00011938) form_field_data_pane_cp2

0x0c99,	// (0x0000b886) form_field_data_wide_pane_cp2

0x73f3,	// (0x00011fe0) bg_scroll_pane_ParamLimits

0x48d4,	// (0x0000f4c1) scroll_handle_pane_ParamLimits

0x48e8,	// (0x0000f4d5) scroll_sc2_down_pane_ParamLimits

0x48e8,	// (0x0000f4d5) scroll_sc2_down_pane

0x7424,	// (0x00012011) scroll_sc2_up_pane_ParamLimits

0x7424,	// (0x00012011) scroll_sc2_up_pane

0x25d7,	// (0x0000d1c4) grid_wheel_folder_pane_g1_ParamLimits

0x25d7,	// (0x0000d1c4) grid_wheel_folder_pane_g1

0x4aad,	// (0x0000f69a) clock_nsta_pane_cp2_ParamLimits

0x4aad,	// (0x0000f69a) clock_nsta_pane_cp2

0x109f,	// (0x0000bc8c) listscroll_midp_pane_ParamLimits

0x10b0,	// (0x0000bc9d) midp_canvas_pane

0x7f43,	// (0x00012b30) nsta_clock_indic_pane

0x7fa1,	// (0x00012b8e) listscroll_form_pane_vc

0x7fbd,	// (0x00012baa) listscroll_set_pane_vc_ParamLimits

0x7fbd,	// (0x00012baa) listscroll_set_pane_vc

0x1a83,	// (0x0000c670) clock_nsta_pane

0x1aad,	// (0x0000c69a) indicator_nsta_pane

0x899d,	// (0x0001358a) bg_popup_sub_pane_cp2_ParamLimits

0x89b1,	// (0x0001359e) find_pane_cp2_ParamLimits

0x89b1,	// (0x0001359e) find_pane_cp2

0x89c7,	// (0x000135b4) grid_toobar_pane_ParamLimits

0x8b6f,	// (0x0001375c) list_form_gen_pane_vc_ParamLimits

0x8b6f,	// (0x0001375c) list_form_gen_pane_vc

0x8b85,	// (0x00013772) scroll_pane_cp8_vc_ParamLimits

0x8b85,	// (0x00013772) scroll_pane_cp8_vc

0x8c01,	// (0x000137ee) data_form_wide_pane_vc_ParamLimits

0x8c01,	// (0x000137ee) data_form_wide_pane_vc

0x8c0d,	// (0x000137fa) form_field_data_wide_pane_vc_g1

0x8c15,	// (0x00013802) form_field_data_wide_pane_vc_t1_ParamLimits

0x8c15,	// (0x00013802) form_field_data_wide_pane_vc_t1

0x6e03,	// (0x000119f0) input_focus_pane_cp6_vc_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_cp6_vc

0x1eb8,	// (0x0000caa5) list_midp_pane_ParamLimits

0xa390,	// (0x00014f7d) scroll_pane_cp16_ParamLimits

0xa390,	// (0x00014f7d) scroll_pane_cp16

0x8fca,	// (0x00013bb7) button_value_adjust_pane_ParamLimits

0x8fca,	// (0x00013bb7) button_value_adjust_pane

0x2227,	// (0x0000ce14) button_value_adjust_pane_cp6_ParamLimits

0x2227,	// (0x0000ce14) button_value_adjust_pane_cp6

0x233d,	// (0x0000cf2a) settings_code_pane_cp_ParamLimits

0x233d,	// (0x0000cf2a) settings_code_pane_cp

0x5f40,	// (0x00010b2d) cell_touch_pane_g1

0x5f40,	// (0x00010b2d) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001a32f) cell_touch_pane_g

0x24b6,	// (0x0000d0a3) cell_touch_pane_cp_ParamLimits

0x24b6,	// (0x0000d0a3) cell_touch_pane_cp

0x24d2,	// (0x0000d0bf) cell_touch_pane_ParamLimits

0x24d2,	// (0x0000d0bf) cell_touch_pane

0x5f40,	// (0x00010b2d) scroll_sc2_down_pane_g1

0x5f40,	// (0x00010b2d) scroll_sc2_up_pane_g1

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp4_vc

0xa733,	// (0x00015320) list_set_graphic_pane_vc_g1_ParamLimits

0xa733,	// (0x00015320) list_set_graphic_pane_vc_g1

0xa73f,	// (0x0001532c) list_set_graphic_pane_vc_g2_ParamLimits

0xa73f,	// (0x0001532c) list_set_graphic_pane_vc_g2

0x0001,

0xfa27,	// (0x0001a614) list_set_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x0001a614) list_set_graphic_pane_vc_g

0xa74b,	// (0x00015338) text_primary_small_cp13_vc_ParamLimits

0xa74b,	// (0x00015338) text_primary_small_cp13_vc

0xa763,	// (0x00015350) list_set_graphic_pane_vc_ParamLimits

0xa763,	// (0x00015350) list_set_graphic_pane_vc

0x5f4a,	// (0x00010b37) input_focus_pane_cp2_vc

0x5f40,	// (0x00010b2d) setting_code_pane_vc_g1

0xa777,	// (0x00015364) setting_code_pane_vc_t1

0xa785,	// (0x00015372) set_text_pane_vc_t1_ParamLimits

0xa785,	// (0x00015372) set_text_pane_vc_t1

0x5f4a,	// (0x00010b37) input_focus_pane_cp1_vc

0xa7a4,	// (0x00015391) list_set_text_pane_vc

0x5f40,	// (0x00010b2d) setting_text_pane_vc_g1

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp2_vc

0xa7ae,	// (0x0001539b) setting_slider_graphic_pane_vc_g1

0xa7b6,	// (0x000153a3) setting_slider_graphic_pane_vc_t1

0xa7c4,	// (0x000153b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001a619) setting_slider_graphic_pane_vc_t

0xa7d2,	// (0x000153bf) slider_set_pane_cp_vc

0xa7da,	// (0x000153c7) slider_set_pane_vc_g1

0xa7e3,	// (0x000153d0) slider_set_pane_vc_g2

0x0006,

0xfa31,	// (0x0001a61e) slider_set_pane_vc_g

0x6f3f,	// (0x00011b2c) set_opt_bg_pane_g1_copy1

0x6f47,	// (0x00011b34) set_opt_bg_pane_g2_copy1

0xa80f,	// (0x000153fc) set_opt_bg_pane_g3_copy1

0x6f57,	// (0x00011b44) set_opt_bg_pane_g4_copy1

0x6f5f,	// (0x00011b4c) set_opt_bg_pane_g5_copy1

0x6f67,	// (0x00011b54) set_opt_bg_pane_g6_copy1

0xa817,	// (0x00015404) set_opt_bg_pane_g7_copy1

0xa821,	// (0x0001540e) set_opt_bg_pane_g8_copy1

0xa829,	// (0x00015416) set_opt_bg_pane_g9_copy1

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp_vc

0xa831,	// (0x0001541e) setting_slider_pane_vc_t1

0xa7b6,	// (0x000153a3) setting_slider_pane_vc_t2

0xa7c4,	// (0x000153b1) setting_slider_pane_vc_t3

0x0002,

0xfa40,	// (0x0001a62d) setting_slider_pane_vc_t

0xa7d2,	// (0x000153bf) slider_set_pane_vc

0x4eb6,	// (0x0000faa3) volume_set_pane_vc_g1

0x51b1,	// (0x0000fd9e) volume_set_pane_vc_g2

0x51ba,	// (0x0000fda7) volume_set_pane_vc_g3

0x51c3,	// (0x0000fdb0) volume_set_pane_vc_g4

0x51cc,	// (0x0000fdb9) volume_set_pane_vc_g5

0x51d5,	// (0x0000fdc2) volume_set_pane_vc_g6

0x51de,	// (0x0000fdcb) volume_set_pane_vc_g7

0x51e7,	// (0x0000fdd4) volume_set_pane_vc_g8

0x51f0,	// (0x0000fddd) volume_set_pane_vc_g9

0x51f9,	// (0x0000fde6) volume_set_pane_vc_g10

0x0009,

0xfa47,	// (0x0001a634) volume_set_pane_vc_g

0xa840,	// (0x0001542d) volume_set_pane_vc

0xa848,	// (0x00015435) button_value_adjust_pane_cp1_vc

0xa852,	// (0x0001543f) list_highlight_pane_cp2_vc

0xa85b,	// (0x00015448) list_set_pane_vc_ParamLimits

0xa85b,	// (0x00015448) list_set_pane_vc

0xa8ad,	// (0x0001549a) main_pane_set_vc_t1_ParamLimits

0xa8ad,	// (0x0001549a) main_pane_set_vc_t1

0xa8c2,	// (0x000154af) main_pane_set_vc_t2_ParamLimits

0xa8c2,	// (0x000154af) main_pane_set_vc_t2

0xa8d4,	// (0x000154c1) main_pane_set_vc_t3_ParamLimits

0xa8d4,	// (0x000154c1) main_pane_set_vc_t3

0xa8e6,	// (0x000154d3) main_pane_set_vc_t4_ParamLimits

0xa8e6,	// (0x000154d3) main_pane_set_vc_t4

0x0003,

0xfa5c,	// (0x0001a649) main_pane_set_vc_t_ParamLimits

0xfa5c,	// (0x0001a649) main_pane_set_vc_t

0xa8f8,	// (0x000154e5) setting_code_pane_vc_ParamLimits

0xa8f8,	// (0x000154e5) setting_code_pane_vc

0xa907,	// (0x000154f4) setting_slider_graphic_pane_vc

0xa907,	// (0x000154f4) setting_slider_pane_vc

0xa907,	// (0x000154f4) setting_text_pane_vc

0xa907,	// (0x000154f4) setting_volume_pane_vc

0xa90f,	// (0x000154fc) scroll_pane_cp121_vc

0x6d19,	// (0x00011906) set_content_pane_vc

0xab1f,	// (0x0001570c) button_value_adjust_pane_g1

0xab28,	// (0x00015715) button_value_adjust_pane_g2

0x0001,

0xfaaf,	// (0x0001a69c) button_value_adjust_pane_g

0xab31,	// (0x0001571e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xab31,	// (0x0001571e) form_field_slider_wide_pane_vc_t1

0xab45,	// (0x00015732) form_field_slider_wide_pane_vc_t2_ParamLimits

0xab45,	// (0x00015732) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab4,	// (0x0001a6a1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab4,	// (0x0001a6a1) form_field_slider_wide_pane_vc_t

0x62bf,	// (0x00010eac) input_focus_pane_cp10_vc_ParamLimits

0x62bf,	// (0x00010eac) input_focus_pane_cp10_vc

0xab57,	// (0x00015744) slider_cont_pane_cp1_vc_ParamLimits

0xab57,	// (0x00015744) slider_cont_pane_cp1_vc

0xa7da,	// (0x000153c7) slider_form_pane_g1_cp2

0xa7e3,	// (0x000153d0) slider_form_pane_g2_cp2

0xab70,	// (0x0001575d) form_field_slider_pane_vc_t3

0xab7e,	// (0x0001576b) form_field_slider_pane_vc_t4

0xab8c,	// (0x00015779) slider_form_pane_vc_ParamLimits

0xab8c,	// (0x00015779) slider_form_pane_vc

0xab99,	// (0x00015786) form_field_slider_pane_vc_t1_ParamLimits

0xab99,	// (0x00015786) form_field_slider_pane_vc_t1

0xab45,	// (0x00015732) form_field_slider_pane_vc_t2_ParamLimits

0xab45,	// (0x00015732) form_field_slider_pane_vc_t2

0x0001,

0xfac4,	// (0x0001a6b1) form_field_slider_pane_vc_t_ParamLimits

0xfac4,	// (0x0001a6b1) form_field_slider_pane_vc_t

0x62bf,	// (0x00010eac) input_focus_pane_cp9_vc_ParamLimits

0x62bf,	// (0x00010eac) input_focus_pane_cp9_vc

0xabb5,	// (0x000157a2) slider_cont_pane_vc_ParamLimits

0xabb5,	// (0x000157a2) slider_cont_pane_vc

0xabc7,	// (0x000157b4) list_form_graphic_pane_cp_vc_ParamLimits

0xabc7,	// (0x000157b4) list_form_graphic_pane_cp_vc

0x8c0d,	// (0x000137fa) form_field_popup_wide_pane_vc_g1

0xabdc,	// (0x000157c9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xabdc,	// (0x000157c9) form_field_popup_wide_pane_vc_t1

0x6e03,	// (0x000119f0) input_focus_pane_cp8_vc_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_cp8_vc

0xabf3,	// (0x000157e0) list_form_wide_pane_vc_ParamLimits

0xabf3,	// (0x000157e0) list_form_wide_pane_vc

0xabff,	// (0x000157ec) list_form_graphic_pane_vc_g1

0xac07,	// (0x000157f4) list_form_graphic_pane_vc_t1_ParamLimits

0xac07,	// (0x000157f4) list_form_graphic_pane_vc_t1

0x602a,	// (0x00010c17) list_highlight_pane_cp5_vc_ParamLimits

0x602a,	// (0x00010c17) list_highlight_pane_cp5_vc

0xac23,	// (0x00015810) list_form_graphic_pane_vc_ParamLimits

0xac23,	// (0x00015810) list_form_graphic_pane_vc

0x8c0d,	// (0x000137fa) form_field_popup_pane_vc_g1

0xac39,	// (0x00015826) form_field_popup_pane_vc_t1_ParamLimits

0xac39,	// (0x00015826) form_field_popup_pane_vc_t1

0x6e03,	// (0x000119f0) input_focus_pane_cp7_vc_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_cp7_vc

0xac50,	// (0x0001583d) list_form_pane_vc_ParamLimits

0xac50,	// (0x0001583d) list_form_pane_vc

0xac5c,	// (0x00015849) data_form_pane_vc_t1_ParamLimits

0xac5c,	// (0x00015849) data_form_pane_vc_t1

0x6f3f,	// (0x00011b2c) input_focus_pane_vc_g1

0x6f47,	// (0x00011b34) input_focus_pane_vc_g2

0x6f4f,	// (0x00011b3c) input_focus_pane_vc_g3

0x6f57,	// (0x00011b44) input_focus_pane_vc_g4

0x6f5f,	// (0x00011b4c) input_focus_pane_vc_g5

0x6f67,	// (0x00011b54) input_focus_pane_vc_g6

0x6f6f,	// (0x00011b5c) input_focus_pane_vc_g7

0x6f77,	// (0x00011b64) input_focus_pane_vc_g8

0x6f7f,	// (0x00011b6c) input_focus_pane_vc_g9

0x5f40,	// (0x00010b2d) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001a2b8) input_focus_pane_vc_g

0x8c01,	// (0x000137ee) data_form_pane_vc_ParamLimits

0x8c01,	// (0x000137ee) data_form_pane_vc

0x8c0d,	// (0x000137fa) form_field_data_pane_vc_g1

0xac77,	// (0x00015864) form_field_data_pane_vc_t1_ParamLimits

0xac77,	// (0x00015864) form_field_data_pane_vc_t1

0x6e03,	// (0x000119f0) input_focus_pane_vc_ParamLimits

0x6e03,	// (0x000119f0) input_focus_pane_vc

0xac91,	// (0x0001587e) button_value_adjust_pane_cp3_vc

0xac99,	// (0x00015886) button_value_adjust_pane_cp5_vc

0xaca1,	// (0x0001588e) form_field_data_pane_vc_ParamLimits

0xaca1,	// (0x0001588e) form_field_data_pane_vc

0xacb8,	// (0x000158a5) form_field_data_pane_vc_cp2

0xacc0,	// (0x000158ad) form_field_data_wide_pane_vc_ParamLimits

0xacc0,	// (0x000158ad) form_field_data_wide_pane_vc

0xacd6,	// (0x000158c3) form_field_data_wide_pane_vc_cp2

0xacde,	// (0x000158cb) form_field_popup_pane_vc_ParamLimits

0xacde,	// (0x000158cb) form_field_popup_pane_vc

0xacf5,	// (0x000158e2) form_field_popup_wide_pane_vc_ParamLimits

0xacf5,	// (0x000158e2) form_field_popup_wide_pane_vc

0xad0b,	// (0x000158f8) form_field_slider_pane_vc_ParamLimits

0xad0b,	// (0x000158f8) form_field_slider_pane_vc

0xad1e,	// (0x0001590b) form_field_slider_wide_pane_vc_ParamLimits

0xad1e,	// (0x0001590b) form_field_slider_wide_pane_vc

0x24f0,	// (0x0000d0dd) grid_touch_1_pane_ParamLimits

0x24f0,	// (0x0000d0dd) grid_touch_1_pane

0x2504,	// (0x0000d0f1) grid_touch_2_pane_ParamLimits

0x2504,	// (0x0000d0f1) grid_touch_2_pane

0xadf3,	// (0x000159e0) touch_pane_g1_ParamLimits

0xadf3,	// (0x000159e0) touch_pane_g1

0xad55,	// (0x00015942) cell_app_pane_cp_wide_ParamLimits

0xad55,	// (0x00015942) cell_app_pane_cp_wide

0xad66,	// (0x00015953) grid_popup_fast_wide_pane_ParamLimits

0xad66,	// (0x00015953) grid_popup_fast_wide_pane

0xad7a,	// (0x00015967) scroll_pane_cp19_ParamLimits

0xad7a,	// (0x00015967) scroll_pane_cp19

0x5f4a,	// (0x00010b37) bg_popup_window_pane_cp20

0xad8e,	// (0x0001597b) listscroll_popup_fast_wide_pane

0x7148,	// (0x00011d35) grid_indicator_nsta_pane

0xad96,	// (0x00015983) clock_nsta_pane_g1

0xad9f,	// (0x0001598c) clock_nsta_pane_t1

0x252e,	// (0x0000d11b) cell_indicator_nsta_pane_ParamLimits

0x252e,	// (0x0000d11b) cell_indicator_nsta_pane

0xadf3,	// (0x000159e0) cell_indicator_nsta_pane_g1

0x254b,	// (0x0000d138) cell_indicator_nsta_pane_g2

0x0001,

0xface,	// (0x0001a6bb) cell_indicator_nsta_pane_g

0xae17,	// (0x00015a04) clock_nsta_pane_cp

0xae1f,	// (0x00015a0c) indicator_nsta_pane_cp

0xae27,	// (0x00015a14) nsta_clock_indic_pane_g1

0x610d,	// (0x00010cfa) grid_indicator_pane

0x7516,	// (0x00012103) scroll_pane_cp29

0x49fc,	// (0x0000f5e9) indicator_nsta_pane_cp2_ParamLimits

0x49fc,	// (0x0000f5e9) indicator_nsta_pane_cp2

0x602a,	// (0x00010c17) main_apps_wheel_pane

0x8e65,	// (0x00013a52) form_midp_field_text_pane_ParamLimits

0x8faa,	// (0x00013b97) scroll_bar_cp050_ParamLimits

0xae5f,	// (0x00015a4c) cell_indicator_pane_ParamLimits

0xae5f,	// (0x00015a4c) cell_indicator_pane

0xae7c,	// (0x00015a69) cell_indicator_pane_g1

0x2561,	// (0x0000d14e) grid_wheel_folder_pane_ParamLimits

0x2561,	// (0x0000d14e) grid_wheel_folder_pane

0x256f,	// (0x0000d15c) list_wheel_apps_pane_ParamLimits

0x256f,	// (0x0000d15c) list_wheel_apps_pane

0x257d,	// (0x0000d16a) main_apps_wheel_pane_g1_ParamLimits

0x257d,	// (0x0000d16a) main_apps_wheel_pane_g1

0x2589,	// (0x0000d176) main_apps_wheel_pane_g2_ParamLimits

0x2589,	// (0x0000d176) main_apps_wheel_pane_g2

0x0001,

0xfadd,	// (0x0001a6ca) main_apps_wheel_pane_g_ParamLimits

0xfadd,	// (0x0001a6ca) main_apps_wheel_pane_g

0x2597,	// (0x0000d184) main_apps_wheel_pane_t1_ParamLimits

0x2597,	// (0x0000d184) main_apps_wheel_pane_t1

0x25ab,	// (0x0000d198) list_wheel_apps_pane_g1

0x25b3,	// (0x0000d1a0) list_wheel_apps_pane_g2

0x25bb,	// (0x0000d1a8) list_wheel_apps_pane_g3

0x25c3,	// (0x0000d1b0) list_wheel_apps_pane_g4

0x25cd,	// (0x0000d1ba) list_wheel_apps_pane_g5

0x0004,

0xfae2,	// (0x0001a6cf) list_wheel_apps_pane_g

0x7ac7,	// (0x000126b4) navi_icon_text_pane

0x197e,	// (0x0000c56b) aid_fill_nsta

0x25e4,	// (0x0000d1d1) navi_icon_text_pane_g1

0x25f0,	// (0x0000d1dd) navi_icon_text_pane_t1

0x7963,	// (0x00012550) list_set_graphic_pane_t1_ParamLimits

0x7963,	// (0x00012550) list_set_graphic_pane_t1

0x96bb,	// (0x000142a8) popup_midp_note_alarm_window_t6_ParamLimits

0x96bb,	// (0x000142a8) popup_midp_note_alarm_window_t6

0x96cd,	// (0x000142ba) popup_midp_note_alarm_window_t7_ParamLimits

0x96cd,	// (0x000142ba) popup_midp_note_alarm_window_t7

0x96df,	// (0x000142cc) popup_midp_note_alarm_window_t8_ParamLimits

0x96df,	// (0x000142cc) popup_midp_note_alarm_window_t8

0x96f1,	// (0x000142de) popup_midp_note_alarm_window_t9_ParamLimits

0x96f1,	// (0x000142de) popup_midp_note_alarm_window_t9

0x9703,	// (0x000142f0) popup_midp_note_alarm_window_t10_ParamLimits

0x9703,	// (0x000142f0) popup_midp_note_alarm_window_t10

0x9715,	// (0x00014302) popup_midp_note_alarm_window_t11_ParamLimits

0x9715,	// (0x00014302) popup_midp_note_alarm_window_t11

0x9727,	// (0x00014314) scroll_pane_cp17_ParamLimits

0x9727,	// (0x00014314) scroll_pane_cp17

0x4eb6,	// (0x0000faa3) volume_small_pane_cp_g1

0x5202,	// (0x0000fdef) volume_small_pane_cp_g2

0x520b,	// (0x0000fdf8) volume_small_pane_cp_g3

0x5214,	// (0x0000fe01) volume_small_pane_cp_g4

0x521d,	// (0x0000fe0a) volume_small_pane_cp_g5

0x5226,	// (0x0000fe13) volume_small_pane_cp_g6

0x522f,	// (0x0000fe1c) volume_small_pane_cp_g7

0x5238,	// (0x0000fe25) volume_small_pane_cp_g8

0x5241,	// (0x0000fe2e) volume_small_pane_cp_g9

0x524a,	// (0x0000fe37) volume_small_pane_cp_g10

0x7d28,	// (0x00012915) midp_ticker_pane_g1_ParamLimits

0x7d34,	// (0x00012921) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001a380) midp_ticker_pane_g_ParamLimits

0x114b,	// (0x0000bd38) midp_ticker_pane_t1_ParamLimits

0x199e,	// (0x0000c58b) aid_fill_nsta_2

0x8f96,	// (0x00013b83) list_form2_midp_pane

0xa0ee,	// (0x00014cdb) midp_editing_number_pane_ParamLimits

0xa0fd,	// (0x00014cea) midp_ticker_pane_ParamLimits

0xaf65,	// (0x00015b52) form2_midp_field_pane

0xaf89,	// (0x00015b76) scroll_pane_cp51

0xafa9,	// (0x00015b96) form2_midp_button_pane_ParamLimits

0xafa9,	// (0x00015b96) form2_midp_button_pane

0xafbb,	// (0x00015ba8) form2_midp_content_pane_ParamLimits

0xafbb,	// (0x00015ba8) form2_midp_content_pane

0xafd5,	// (0x00015bc2) form2_midp_field_choice_group_pane

0xafdd,	// (0x00015bca) form2_midp_field_pane_g1

0xafe5,	// (0x00015bd2) form2_midp_field_pane_g2

0xafed,	// (0x00015bda) form2_midp_field_pane_g3

0xaff5,	// (0x00015be2) form2_midp_field_pane_g4

0x0003,

0xfb07,	// (0x0001a6f4) form2_midp_field_pane_g

0xaffd,	// (0x00015bea) form2_midp_gauge_slider_pane

0xb005,	// (0x00015bf2) form2_midp_gauge_wait_pane

0xb00d,	// (0x00015bfa) form2_midp_image_pane_ParamLimits

0xb00d,	// (0x00015bfa) form2_midp_image_pane

0xb028,	// (0x00015c15) form2_midp_label_pane_ParamLimits

0xb028,	// (0x00015c15) form2_midp_label_pane

0x261e,	// (0x0000d20b) form2_midp_label_pane_cp_ParamLimits

0x261e,	// (0x0000d20b) form2_midp_label_pane_cp

0xb062,	// (0x00015c4f) form2_midp_string_pane_ParamLimits

0xb062,	// (0x00015c4f) form2_midp_string_pane

0xb074,	// (0x00015c61) form2_midp_text_pane_ParamLimits

0xb074,	// (0x00015c61) form2_midp_text_pane

0xb08d,	// (0x00015c7a) form2_midp_time_pane

0xb09d,	// (0x00015c8a) input_focus_pane_cp51_ParamLimits

0xb09d,	// (0x00015c8a) input_focus_pane_cp51

0xb0b5,	// (0x00015ca2) form2_midp_label_pane_t1_ParamLimits

0xb0b5,	// (0x00015ca2) form2_midp_label_pane_t1

0xb0f5,	// (0x00015ce2) form2_mdip_text_pane_t1_ParamLimits

0xb0f5,	// (0x00015ce2) form2_mdip_text_pane_t1

0xb111,	// (0x00015cfe) form2_midp_time_pane_t1

0xb12c,	// (0x00015d19) form2_midp_gauge_slider_pane_t1

0x263f,	// (0x0000d22c) form2_midp_gauge_slider_pane_t2

0x2651,	// (0x0000d23e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb10,	// (0x0001a6fd) form2_midp_gauge_slider_pane_t

0xb162,	// (0x00015d4f) form2_midp_slider_pane

0xb16e,	// (0x00015d5b) form2_midp_gauge_wait_pane_t1

0xb17c,	// (0x00015d69) form2_midp_wait_pane_ParamLimits

0xb17c,	// (0x00015d69) form2_midp_wait_pane

0x2663,	// (0x0000d250) list_single_2graphic_pane_cp4_ParamLimits

0x2663,	// (0x0000d250) list_single_2graphic_pane_cp4

0x1e23,	// (0x0000ca10) list_single_midp_graphic_pane_cp_ParamLimits

0x1e23,	// (0x0000ca10) list_single_midp_graphic_pane_cp

0x5f4a,	// (0x00010b37) list_highlight_pane_cp20

0xb1d6,	// (0x00015dc3) list_single_2graphic_pane_g1_cp4

0xa602,	// (0x000151ef) list_single_2graphic_pane_g2_cp4

0xb1de,	// (0x00015dcb) list_single_2graphic_pane_t1_cp4

0x602a,	// (0x00010c17) list_highlight_pane_cp21

0xb1ed,	// (0x00015dda) list_single_midp_graphic_pane_g4_cp

0xb1fc,	// (0x00015de9) list_single_midp_graphic_pane_t1_cp

0x267a,	// (0x0000d267) form2_mdip_string_pane_t1_ParamLimits

0x267a,	// (0x0000d267) form2_mdip_string_pane_t1

0x5f4a,	// (0x00010b37) bg_wml_button_pane_cp2

0x5f40,	// (0x00010b2d) form2_midp_image_pane_g1

0x6add,	// (0x000116ca) list_double_large_graphic_pane_g5_ParamLimits

0x6add,	// (0x000116ca) list_double_large_graphic_pane_g5

0x109f,	// (0x0000bc8c) midp_form_pane_ParamLimits

0x602a,	// (0x00010c17) main_apps_wheel_pane_ParamLimits

0x16da,	// (0x0000c2c7) popup_preview_window_ParamLimits

0x16da,	// (0x0000c2c7) popup_preview_window

0x8525,	// (0x00013112) popup_touch_info_window_ParamLimits

0x8525,	// (0x00013112) popup_touch_info_window

0x8543,	// (0x00013130) popup_touch_menu_window_ParamLimits

0x8543,	// (0x00013130) popup_touch_menu_window

0x5f36,	// (0x00010b23) bg_popup_sub_pane_cp6

0xb34b,	// (0x00015f38) list_touch_menu_pane

0xb353,	// (0x00015f40) list_single_touch_menu_pane_ParamLimits

0xb353,	// (0x00015f40) list_single_touch_menu_pane

0xb368,	// (0x00015f55) list_single_touch_menu_pane_t1

0x602a,	// (0x00010c17) bg_popup_sub_pane_cp7_ParamLimits

0x602a,	// (0x00010c17) bg_popup_sub_pane_cp7

0xb376,	// (0x00015f63) heading_sub_pane

0xb37e,	// (0x00015f6b) list_touch_info_pane_ParamLimits

0xb37e,	// (0x00015f6b) list_touch_info_pane

0xb38d,	// (0x00015f7a) list_single_touch_info_pane_ParamLimits

0xb38d,	// (0x00015f7a) list_single_touch_info_pane

0xb39f,	// (0x00015f8c) list_single_touch_info_pane_t1

0xb3ad,	// (0x00015f9a) list_single_touch_info_pane_t2

0x0001,

0xfb1e,	// (0x0001a70b) list_single_touch_info_pane_t

0x7c49,	// (0x00012836) bg_popup_heading_pane_cp

0xb3bb,	// (0x00015fa8) heading_sub_pane_t1

0x8b9b,	// (0x00013788) bg_popup_preview_window_pane_cp_ParamLimits

0x8b9b,	// (0x00013788) bg_popup_preview_window_pane_cp

0xb376,	// (0x00015f63) heading_preview_pane

0xb37e,	// (0x00015f6b) list_preview_pane_ParamLimits

0xb37e,	// (0x00015f6b) list_preview_pane

0xb3c9,	// (0x00015fb6) popup_preview_window_g1

0xb38d,	// (0x00015f7a) list_single_preview_pane_ParamLimits

0xb38d,	// (0x00015f7a) list_single_preview_pane

0xb3d1,	// (0x00015fbe) list_single_preview_pane_g1

0xb3d9,	// (0x00015fc6) list_single_preview_pane_t1

0xb39f,	// (0x00015f8c) list_single_preview_pane_t2

0x0001,

0xfb23,	// (0x0001a710) list_single_preview_pane_t

0xb3e7,	// (0x00015fd4) bg_popup_heading_pane_cp2_ParamLimits

0xb3e7,	// (0x00015fd4) bg_popup_heading_pane_cp2

0xb3fd,	// (0x00015fea) heading_preview_pane_g1

0xb405,	// (0x00015ff2) heading_preview_pane_t1_ParamLimits

0xb405,	// (0x00015ff2) heading_preview_pane_t1

0x6130,	// (0x00010d1d) soft_indicator_pane_t1_ParamLimits

0x680a,	// (0x000113f7) scroll_pane_ParamLimits

0x7412,	// (0x00011fff) scroll_sc2_left_pane

0x741b,	// (0x00012008) scroll_sc2_right_pane

0x743a,	// (0x00012027) scroll_bg_pane_g1_ParamLimits

0x744f,	// (0x0001203c) scroll_bg_pane_g2_ParamLimits

0x7467,	// (0x00012054) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001a30f) scroll_bg_pane_g_ParamLimits

0x743a,	// (0x00012027) scroll_handle_pane_g1_ParamLimits

0x7489,	// (0x00012076) scroll_handle_pane_g2_ParamLimits

0x7467,	// (0x00012054) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001a316) scroll_handle_pane_g_ParamLimits

0x7fff,	// (0x00012bec) popup_choice_list_window_ParamLimits

0x7fff,	// (0x00012bec) popup_choice_list_window

0x89a9,	// (0x00013596) choice_list_pane

0x8a4d,	// (0x0001363a) cell_toolbar_pane_t1

0x8a75,	// (0x00013662) toolbar_button_pane_ParamLimits

0x9beb,	// (0x000147d8) ai_gene_pane_1_t2_ParamLimits

0x9beb,	// (0x000147d8) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0001a52e) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0001a52e) ai_gene_pane_1_t

0xb422,	// (0x0001600f) scroll_sc2_left_pane_g1

0xb422,	// (0x0001600f) scroll_sc2_right_pane_g1

0x7fcf,	// (0x00012bbc) bg_popup_sub_pane_cp10

0xb42c,	// (0x00016019) list_choice_list_pane

0xb443,	// (0x00016030) list_single_choice_list_pane_ParamLimits

0xb443,	// (0x00016030) list_single_choice_list_pane

0xb457,	// (0x00016044) list_single_choice_list_pane_g1

0xb45f,	// (0x0001604c) list_single_choice_list_pane_t1_ParamLimits

0xb45f,	// (0x0001604c) list_single_choice_list_pane_t1

0xb474,	// (0x00016061) choice_list_pane_g1

0xb47c,	// (0x00016069) choice_list_pane_t1

0x5f36,	// (0x00010b23) input_focus_pane_cp11

0x72f0,	// (0x00011edd) title_pane_stacon_g2_ParamLimits

0x72f0,	// (0x00011edd) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001a2f5) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001a2f5) title_pane_stacon_g

0x7c49,	// (0x00012836) cursor_press_pane

0x1399,	// (0x0000bf86) popup_fep_hwr_window_ParamLimits

0x1399,	// (0x0000bf86) popup_fep_hwr_window

0x811d,	// (0x00012d0a) popup_fep_vkb_window_ParamLimits

0x811d,	// (0x00012d0a) popup_fep_vkb_window

0xb48a,	// (0x00016077) cursor_press_pane_g1

0x0002,

0xfb4c,	// (0x0001a739) fep_vkb_side_pane_g_ParamLimits

0x528c,	// (0x0000fe79) fep_hwr_candidate_pane_ParamLimits

0x528c,	// (0x0000fe79) fep_hwr_candidate_pane

0x52b6,	// (0x0000fea3) fep_hwr_side_pane_ParamLimits

0x52b6,	// (0x0000fea3) fep_hwr_side_pane

0x52d6,	// (0x0000fec3) fep_hwr_top_pane_ParamLimits

0x52d6,	// (0x0000fec3) fep_hwr_top_pane

0x52ee,	// (0x0000fedb) fep_hwr_write_pane_ParamLimits

0x52ee,	// (0x0000fedb) fep_hwr_write_pane

0xfb4c,	// (0x0001a739) fep_vkb_side_pane_g

0xb492,	// (0x0001607f) fep_hwr_top_pane_g1

0xb4a4,	// (0x00016091) fep_hwr_top_pane_g2

0x5328,	// (0x0000ff15) fep_hwr_top_pane_g3

0x0002,

0xfb28,	// (0x0001a715) fep_hwr_top_pane_g

0x533d,	// (0x0000ff2a) fep_hwr_top_text_pane

0x75dc,	// (0x000121c9) fep_hwr_top_text_pane_g1

0xb4e8,	// (0x000160d5) fep_hwr_top_text_pane_t1

0x5433,	// (0x00010020) fep_hwr_candidate_pane_g1

0xb742,	// (0x0001632f) fep_vkb_keypad_pane_g3_ParamLimits

0xb742,	// (0x0001632f) fep_vkb_keypad_pane_g3

0xb76a,	// (0x00016357) fep_vkb_keypad_pane_g4_ParamLimits

0xb76a,	// (0x00016357) fep_vkb_keypad_pane_g4

0xb7d9,	// (0x000163c6) fep_vkb_bottom_pane_g2_ParamLimits

0xb7d9,	// (0x000163c6) fep_vkb_bottom_pane_g2

0x0001,

0xfb53,	// (0x0001a740) fep_vkb_bottom_pane_g_ParamLimits

0xfb53,	// (0x0001a740) fep_vkb_bottom_pane_g

0xb422,	// (0x0001600f) cell_vkb_side_pane_g2

0x0001,

0xfb5d,	// (0x0001a74a) cell_vkb_side_pane_g

0xb864,	// (0x00016451) cell_vkb_side_pane_t1

0xb872,	// (0x0001645f) cell_vkb_side_pane_t1_copy1

0xb422,	// (0x0001600f) bg_fep_vkb_candidate_pane_g2

0xb9a4,	// (0x00016591) cell_vkb_candidate_pane_ParamLimits

0xb4f6,	// (0x000160e3) aid_size_cell_vkb_ParamLimits

0xb4f6,	// (0x000160e3) aid_size_cell_vkb

0xb9a4,	// (0x00016591) cell_vkb_candidate_pane

0x545a,	// (0x00010047) bg_popup_fep_shadow_pane_g1

0xb584,	// (0x00016171) fep_vkb_bottom_pane_ParamLimits

0xb584,	// (0x00016171) fep_vkb_bottom_pane

0xb5c1,	// (0x000161ae) fep_vkb_candidate_pane_ParamLimits

0xb5c1,	// (0x000161ae) fep_vkb_candidate_pane

0xb5dd,	// (0x000161ca) fep_vkb_keypad_pane_ParamLimits

0xb5dd,	// (0x000161ca) fep_vkb_keypad_pane

0xb623,	// (0x00016210) fep_vkb_side_pane_ParamLimits

0xb623,	// (0x00016210) fep_vkb_side_pane

0xb65f,	// (0x0001624c) fep_vkb_top_pane_ParamLimits

0xb65f,	// (0x0001624c) fep_vkb_top_pane

0xb69b,	// (0x00016288) fep_vkb_top_pane_g1_ParamLimits

0xb69b,	// (0x00016288) fep_vkb_top_pane_g1

0xb6aa,	// (0x00016297) fep_vkb_top_pane_g2_ParamLimits

0xb6aa,	// (0x00016297) fep_vkb_top_pane_g2

0xb6b9,	// (0x000162a6) fep_vkb_top_pane_g3_ParamLimits

0xb6b9,	// (0x000162a6) fep_vkb_top_pane_g3

0x0003,

0xfb43,	// (0x0001a730) fep_vkb_top_pane_g_ParamLimits

0xfb43,	// (0x0001a730) fep_vkb_top_pane_g

0xb6d7,	// (0x000162c4) fep_vkb_top_text_pane_ParamLimits

0xb6d7,	// (0x000162c4) fep_vkb_top_text_pane

0x275f,	// (0x0000d34c) fep_vkb_side_pane_g1_ParamLimits

0x275f,	// (0x0000d34c) fep_vkb_side_pane_g1

0xb731,	// (0x0001631e) grid_vkb_side_pane_ParamLimits

0xb731,	// (0x0001631e) grid_vkb_side_pane

0x5462,	// (0x0001004f) bg_popup_fep_shadow_pane_g2

0x546b,	// (0x00010058) bg_popup_fep_shadow_pane_g3

0x5473,	// (0x00010060) bg_popup_fep_shadow_pane_g4

0x547c,	// (0x00010069) bg_popup_fep_shadow_pane_g5

0x5486,	// (0x00010073) bg_popup_fep_shadow_pane_g6

0x548e,	// (0x0001007b) bg_popup_fep_shadow_pane_g7

0x6f57,	// (0x00011b44) bg_popup_fep_shadow_pane_g8

0xb788,	// (0x00016375) grid_vkb_keypad_number_pane_ParamLimits

0xb788,	// (0x00016375) grid_vkb_keypad_number_pane

0xb798,	// (0x00016385) grid_vkb_keypad_pane_ParamLimits

0xb798,	// (0x00016385) grid_vkb_keypad_pane

0xb7be,	// (0x000163ab) fep_vkb_bottom_pane_g1_ParamLimits

0xb7be,	// (0x000163ab) fep_vkb_bottom_pane_g1

0xb7e7,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb7e7,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane

0xb7fc,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb7fc,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane

0xb811,	// (0x000163fe) fep_vkb_top_text_pane_g1

0x27a6,	// (0x0000d393) fep_vkb_top_text_pane_t1

0x27b8,	// (0x0000d3a5) cell_vkb_side_pane_ParamLimits

0x27b8,	// (0x0000d3a5) cell_vkb_side_pane

0xb422,	// (0x0001600f) cell_vkb_side_pane_g1

0xb880,	// (0x0001646d) cell_vkb_keypad_pane_ParamLimits

0xb880,	// (0x0001646d) cell_vkb_keypad_pane

0xb8fb,	// (0x000164e8) cell_vkb_keypad_pane_g1

0x0008,

0xfb70,	// (0x0001a75d) bg_popup_fep_shadow_pane_g

0x54a0,	// (0x0001008d) cell_hwr_side_pane_g1

0x54a0,	// (0x0001008d) cell_hwr_side_pane_g2

0xb905,	// (0x000164f2) cell_vkb_keypad_pane_t1

0x27ce,	// (0x0000d3bb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x27ce,	// (0x0000d3bb) cell_vkb_keypad_bottom_left_pane

0x27e3,	// (0x0000d3d0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x27e3,	// (0x0000d3d0) cell_vkb_keypad_bottom_right_pane

0xb422,	// (0x0001600f) cell_vkb_keypad_bottom_left_pane_g1

0xb422,	// (0x0001600f) cell_vkb_keypad_bottom_right_pane_g1

0xb969,	// (0x00016556) cell_vkb_keypad_number_pane_ParamLimits

0xb969,	// (0x00016556) cell_vkb_keypad_number_pane

0xb988,	// (0x00016575) cell_vkb_keypad_number_pane_g1

0xb992,	// (0x0001657f) cell_vkb_keypad_number_pane_g2

0xb99b,	// (0x00016588) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb62,	// (0x0001a74f) cell_vkb_keypad_number_pane_g

0xb905,	// (0x000164f2) cell_vkb_keypad_number_pane_t1

0xb9c1,	// (0x000165ae) fep_vkb_candidate_pane_g1

0x0001,

0xfb83,	// (0x0001a770) cell_hwr_side_pane_g

0xb9da,	// (0x000165c7) cell_hwr_side_pane_t1

0x54aa,	// (0x00010097) cell_hwr_side_pane_t1_copy1

0x54b8,	// (0x000100a5) cell_hwr_candidate_pane_g1

0x54e7,	// (0x000100d4) cell_hwr_candidate_pane_t1

0xb422,	// (0x0001600f) cell_vkb_candidate_pane_g2

0xba1e,	// (0x0001660b) cell_vkb_candidate_pane_t1

0x5253,	// (0x0000fe40) bg_popup_fep_shadow_pane_ParamLimits

0x5253,	// (0x0000fe40) bg_popup_fep_shadow_pane

0x5308,	// (0x0000fef5) bg_fep_hwr_top_pane_g4

0xb4c4,	// (0x000160b1) bg_hwr_side_pane_g1_ParamLimits

0xb4c4,	// (0x000160b1) bg_hwr_side_pane_g1

0xe43e,	// (0x0001902b) cell_hwr_side_pane_ParamLimits

0xe43e,	// (0x0001902b) cell_hwr_side_pane

0x53b4,	// (0x0000ffa1) fep_hwr_write_pane_g1_ParamLimits

0x53b4,	// (0x0000ffa1) fep_hwr_write_pane_g1

0x53c1,	// (0x0000ffae) fep_hwr_write_pane_g2_ParamLimits

0x53c1,	// (0x0000ffae) fep_hwr_write_pane_g2

0x53ce,	// (0x0000ffbb) fep_hwr_write_pane_g3_ParamLimits

0x53ce,	// (0x0000ffbb) fep_hwr_write_pane_g3

0xe45e,	// (0x0001904b) fep_hwr_write_pane_g4_ParamLimits

0xe45e,	// (0x0001904b) fep_hwr_write_pane_g4

0x0005,

0xfb2f,	// (0x0001a71c) fep_hwr_write_pane_g_ParamLimits

0xfb2f,	// (0x0001a71c) fep_hwr_write_pane_g

0x5308,	// (0x0000fef5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5308,	// (0x0000fef5) bg_fep_hwr_candidate_pane_g2

0x53f1,	// (0x0000ffde) cell_hwr_candidate_pane_ParamLimits

0x53f1,	// (0x0000ffde) cell_hwr_candidate_pane

0x5433,	// (0x00010020) fep_hwr_candidate_pane_g1_ParamLimits

0xb524,	// (0x00016111) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb524,	// (0x00016111) bg_popup_fep_shadow_pane_cp2

0xb6c9,	// (0x000162b6) fep_vkb_top_pane_g4_ParamLimits

0xb6c9,	// (0x000162b6) fep_vkb_top_pane_g4

0xb70f,	// (0x000162fc) fep_vkb_side_pane_g2_ParamLimits

0xb70f,	// (0x000162fc) fep_vkb_side_pane_g2

0x0bc7,	// (0x0000b7b4) list_setting_pane_t4_ParamLimits

0x0bc7,	// (0x0000b7b4) list_setting_pane_t4

0x0c41,	// (0x0000b82e) list_setting_number_pane_t5_ParamLimits

0x0c41,	// (0x0000b82e) list_setting_number_pane_t5

0x0f58,	// (0x0000bb45) list_double_heading_pane_cp2_ParamLimits

0x0f58,	// (0x0000bb45) list_double_heading_pane_cp2

0x6e29,	// (0x00011a16) list_double_heading_pane_g1_cp2_ParamLimits

0x6e29,	// (0x00011a16) list_double_heading_pane_g1_cp2

0x6e35,	// (0x00011a22) list_double_heading_pane_g2_cp2_ParamLimits

0x6e35,	// (0x00011a22) list_double_heading_pane_g2_cp2

0xba2c,	// (0x00016619) list_double_heading_pane_t1_cp2_ParamLimits

0xba2c,	// (0x00016619) list_double_heading_pane_t1_cp2

0xba42,	// (0x0001662f) list_double_heading_pane_t2_cp2_ParamLimits

0xba42,	// (0x0001662f) list_double_heading_pane_t2_cp2

0x5f1e,	// (0x00010b0b) aid_value_unit2

0x459e,	// (0x0000f18b) popup_preview_fixed_window

0x62cd,	// (0x00010eba) bg_popup_preview_window_pane_cp02

0xba54,	// (0x00016641) list_preview_fixed_pane

0xba9a,	// (0x00016687) list_empty_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_empty_pane_fp

0xba9a,	// (0x00016687) list_single_cale_day_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_single_cale_day_pane_fp

0xba9a,	// (0x00016687) list_single_graphic_heading_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_single_graphic_heading_pane_fp

0xba9a,	// (0x00016687) list_single_graphic_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_single_graphic_pane_fp

0xba9a,	// (0x00016687) list_single_heading_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_single_heading_pane_fp

0xba9a,	// (0x00016687) list_single_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_single_pane_fp

0xbab1,	// (0x0001669e) list_single_pane_fp_g1_ParamLimits

0xbab1,	// (0x0001669e) list_single_pane_fp_g1

0x6e29,	// (0x00011a16) list_single_pane_fp_g2_ParamLimits

0x6e29,	// (0x00011a16) list_single_pane_fp_g2

0x6e35,	// (0x00011a22) list_single_pane_fp_g3_ParamLimits

0x6e35,	// (0x00011a22) list_single_pane_fp_g3

0xbabd,	// (0x000166aa) list_single_pane_fp_g4_ParamLimits

0xbabd,	// (0x000166aa) list_single_pane_fp_g4

0x0003,

0xfb96,	// (0x0001a783) list_single_pane_fp_g_ParamLimits

0xfb96,	// (0x0001a783) list_single_pane_fp_g

0xbac9,	// (0x000166b6) list_single_pane_fp_t1_ParamLimits

0xbac9,	// (0x000166b6) list_single_pane_fp_t1

0xbae0,	// (0x000166cd) list_single_graphic_pane_fp_g1_ParamLimits

0xbae0,	// (0x000166cd) list_single_graphic_pane_fp_g1

0xbab1,	// (0x0001669e) list_single_graphic_pane_fp_g2_ParamLimits

0xbab1,	// (0x0001669e) list_single_graphic_pane_fp_g2

0x6e29,	// (0x00011a16) list_single_graphic_pane_fp_g3_ParamLimits

0x6e29,	// (0x00011a16) list_single_graphic_pane_fp_g3

0x6e35,	// (0x00011a22) list_single_graphic_pane_fp_g4_ParamLimits

0x6e35,	// (0x00011a22) list_single_graphic_pane_fp_g4

0xbabd,	// (0x000166aa) list_single_graphic_pane_fp_g5_ParamLimits

0xbabd,	// (0x000166aa) list_single_graphic_pane_fp_g5

0x0004,

0xfb9f,	// (0x0001a78c) list_single_graphic_pane_fp_g_ParamLimits

0xfb9f,	// (0x0001a78c) list_single_graphic_pane_fp_g

0xbaec,	// (0x000166d9) list_single_graphic_pane_fp_t1_ParamLimits

0xbaec,	// (0x000166d9) list_single_graphic_pane_fp_t1

0xbae0,	// (0x000166cd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbae0,	// (0x000166cd) list_single_graphic_heading_pane_fp_g1

0xbab1,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbab1,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2

0x6e29,	// (0x00011a16) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6e29,	// (0x00011a16) list_single_graphic_heading_pane_fp_g3

0x6e35,	// (0x00011a22) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6e35,	// (0x00011a22) list_single_graphic_heading_pane_fp_g4

0xbabd,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbabd,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0001a78c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0001a78c) list_single_graphic_heading_pane_fp_g

0xbb02,	// (0x000166ef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbb02,	// (0x000166ef) list_single_graphic_heading_pane_fp_t1

0xbb18,	// (0x00016705) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbb18,	// (0x00016705) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x0001a797) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x0001a797) list_single_graphic_heading_pane_fp_t

0xbb2a,	// (0x00016717) list_single_cale_day_pane_fp_g1_ParamLimits

0xbb2a,	// (0x00016717) list_single_cale_day_pane_fp_g1

0xbb62,	// (0x0001674f) list_single_cale_day_pane_fp_g2_ParamLimits

0xbb62,	// (0x0001674f) list_single_cale_day_pane_fp_g2

0xbb6e,	// (0x0001675b) list_single_cale_day_pane_fp_g3_ParamLimits

0xbb6e,	// (0x0001675b) list_single_cale_day_pane_fp_g3

0xbb96,	// (0x00016783) list_single_cale_day_pane_fp_g4_ParamLimits

0xbb96,	// (0x00016783) list_single_cale_day_pane_fp_g4

0xbbba,	// (0x000167a7) list_single_cale_day_pane_fp_g5_ParamLimits

0xbbba,	// (0x000167a7) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaf,	// (0x0001a79c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaf,	// (0x0001a79c) list_single_cale_day_pane_fp_g

0xbbde,	// (0x000167cb) list_single_cale_day_pane_fp_t1_ParamLimits

0xbbde,	// (0x000167cb) list_single_cale_day_pane_fp_t1

0xbc04,	// (0x000167f1) list_single_cale_day_pane_fp_t2_ParamLimits

0xbc04,	// (0x000167f1) list_single_cale_day_pane_fp_t2

0xbc1d,	// (0x0001680a) list_single_cale_day_pane_fp_t3_ParamLimits

0xbc1d,	// (0x0001680a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbba,	// (0x0001a7a7) list_single_cale_day_pane_fp_t_ParamLimits

0xfbba,	// (0x0001a7a7) list_single_cale_day_pane_fp_t

0xbab1,	// (0x0001669e) list_empty_pane_fp_g1_ParamLimits

0xbab1,	// (0x0001669e) list_empty_pane_fp_g1

0xbc36,	// (0x00016823) list_empty_pane_fp_t1

0xbc44,	// (0x00016831) list_empty_pane_fp_t2

0x0001,

0xfbc1,	// (0x0001a7ae) list_empty_pane_fp_t

0xbab1,	// (0x0001669e) list_single_heading_pane_fp_g1_ParamLimits

0xbab1,	// (0x0001669e) list_single_heading_pane_fp_g1

0x6e29,	// (0x00011a16) list_single_heading_pane_fp_g2_ParamLimits

0x6e29,	// (0x00011a16) list_single_heading_pane_fp_g2

0x6e35,	// (0x00011a22) list_single_heading_pane_fp_g3_ParamLimits

0x6e35,	// (0x00011a22) list_single_heading_pane_fp_g3

0x0002,

0xfbc6,	// (0x0001a7b3) list_single_heading_pane_fp_g_ParamLimits

0xfbc6,	// (0x0001a7b3) list_single_heading_pane_fp_g

0xbc52,	// (0x0001683f) list_single_heading_pane_fp_t1_ParamLimits

0xbc52,	// (0x0001683f) list_single_heading_pane_fp_t1

0xbc64,	// (0x00016851) list_single_heading_pane_fp_t2_ParamLimits

0xbc64,	// (0x00016851) list_single_heading_pane_fp_t2

0x0001,

0xfbcd,	// (0x0001a7ba) list_single_heading_pane_fp_t_ParamLimits

0xfbcd,	// (0x0001a7ba) list_single_heading_pane_fp_t

0x7187,	// (0x00011d74) aid_size_cell_fast

0x623d,	// (0x00010e2a) soft_indicator_pane_cp1_t1

0x71c4,	// (0x00011db1) cell_app_pane_cp2_ParamLimits

0x71c4,	// (0x00011db1) cell_app_pane_cp2

0x5275,	// (0x0000fe62) fep_hwr_candidate_drop_down_list_pane

0x544d,	// (0x0001003a) fep_hwr_candidate_pane_g3_ParamLimits

0x544d,	// (0x0001003a) fep_hwr_candidate_pane_g3

0x3a1f,	// (0x0000e60c) fep_hwr_candidate_pane_g4_ParamLimits

0x3a1f,	// (0x0000e60c) fep_hwr_candidate_pane_g4

0x0002,

0xfb3c,	// (0x0001a729) fep_hwr_candidate_pane_g_ParamLimits

0xfb3c,	// (0x0001a729) fep_hwr_candidate_pane_g

0xb5b0,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb5b0,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane

0xb9c9,	// (0x000165b6) fep_vkb_candidate_pane_g3

0xb9d1,	// (0x000165be) fep_vkb_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001a756) fep_vkb_candidate_pane_g

0x54b8,	// (0x000100a5) cell_hwr_candidate_pane_g1_ParamLimits

0x54c6,	// (0x000100b3) cell_hwr_candidate_pane_g3_ParamLimits

0x54c6,	// (0x000100b3) cell_hwr_candidate_pane_g3

0xe89b,	// (0x00019488) cell_hwr_candidate_pane_g4_ParamLimits

0xe89b,	// (0x00019488) cell_hwr_candidate_pane_g4

0x0002,

0xfb88,	// (0x0001a775) cell_hwr_candidate_pane_g_ParamLimits

0xfb88,	// (0x0001a775) cell_hwr_candidate_pane_g

0xb9e8,	// (0x000165d5) cell_vkb_candidate_pane_g3_ParamLimits

0xb9e8,	// (0x000165d5) cell_vkb_candidate_pane_g3

0xba03,	// (0x000165f0) cell_vkb_candidate_pane_g4_ParamLimits

0xba03,	// (0x000165f0) cell_vkb_candidate_pane_g4

0xbcbc,	// (0x000168a9) cell_app_pane_cp2_g1_ParamLimits

0xbcbc,	// (0x000168a9) cell_app_pane_cp2_g1

0xbcda,	// (0x000168c7) cell_app_pane_cp2_g2_ParamLimits

0xbcda,	// (0x000168c7) cell_app_pane_cp2_g2

0x0001,

0xfbd2,	// (0x0001a7bf) cell_app_pane_cp2_g_ParamLimits

0xfbd2,	// (0x0001a7bf) cell_app_pane_cp2_g

0xbce6,	// (0x000168d3) cell_app_pane_cp2_t1_ParamLimits

0xbce6,	// (0x000168d3) cell_app_pane_cp2_t1

0x6e03,	// (0x000119f0) grid_highlight_pane_cp1_ParamLimits

0x6e03,	// (0x000119f0) grid_highlight_pane_cp1

0x5505,	// (0x000100f2) cell_hwr_candidate_pane_cp1_ParamLimits

0x5505,	// (0x000100f2) cell_hwr_candidate_pane_cp1

0x54b8,	// (0x000100a5) fep_hwr_candidate_drop_down_list_pane_g1

0x5524,	// (0x00010111) fep_hwr_candidate_drop_down_list_pane_g2

0x5531,	// (0x0001011e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0001a7c4) fep_hwr_candidate_drop_down_list_pane_g

0x553e,	// (0x0001012b) fep_hwr_candidate_drop_down_list_scroll_pane

0x5547,	// (0x00010134) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5547,	// (0x00010134) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5554,	// (0x00010141) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5554,	// (0x00010141) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5561,	// (0x0001014e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5561,	// (0x0001014e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x556e,	// (0x0001015b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x556e,	// (0x0001015b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5589,	// (0x00010176) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5589,	// (0x00010176) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x55a4,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x55a4,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x55bf,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x55bf,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x55da,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x55da,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0001a7cb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0001a7cb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbcf8,	// (0x000168e5) cell_vkb_candidate_pane_cp1_ParamLimits

0xbcf8,	// (0x000168e5) cell_vkb_candidate_pane_cp1

0xb6c9,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb6c9,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1

0xbd18,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbd18,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2

0xbd25,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbd25,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbef,	// (0x0001a7dc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbef,	// (0x0001a7dc) fep_vkb_candidate_drop_down_list_pane_g

0xbd32,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbd32,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane

0xbd3f,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbd3f,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbd4c,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbd4c,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbd58,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbd58,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbc7a,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbc7a,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbc9b,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbc9b,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbd64,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbd64,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbd85,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbd85,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbda6,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbda6,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf6,	// (0x0001a7e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf6,	// (0x0001a7e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x05c8,	// (0x0000b1b5) title_pane_g1_ParamLimits

0x05d9,	// (0x0000b1c6) title_pane_g2_ParamLimits

0xf592,	// (0x0001a17f) title_pane_g_ParamLimits

0x75cc,	// (0x000121b9) aid_call2_pane

0x75d4,	// (0x000121c1) aid_call_pane

0x75dc,	// (0x000121c9) popup_clock_analogue_window_g1

0x75dc,	// (0x000121c9) popup_clock_analogue_window_g2

0x48fd,	// (0x0000f4ea) popup_clock_analogue_window_g3

0x4906,	// (0x0000f4f3) popup_clock_analogue_window_g4

0x5f40,	// (0x00010b2d) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001a324) popup_clock_analogue_window_g

0x490e,	// (0x0000f4fb) popup_clock_analogue_window_t1

0x491c,	// (0x0000f509) clock_digital_number_pane_ParamLimits

0x491c,	// (0x0000f509) clock_digital_number_pane

0x4928,	// (0x0000f515) clock_digital_number_pane_cp02_ParamLimits

0x4928,	// (0x0000f515) clock_digital_number_pane_cp02

0x4934,	// (0x0000f521) clock_digital_number_pane_cp03_ParamLimits

0x4934,	// (0x0000f521) clock_digital_number_pane_cp03

0x4940,	// (0x0000f52d) clock_digital_number_pane_cp04_ParamLimits

0x4940,	// (0x0000f52d) clock_digital_number_pane_cp04

0x494c,	// (0x0000f539) clock_digital_separator_pane_ParamLimits

0x494c,	// (0x0000f539) clock_digital_separator_pane

0x4958,	// (0x0000f545) popup_clock_digital_window_t1_ParamLimits

0x4958,	// (0x0000f545) popup_clock_digital_window_t1

0x5f40,	// (0x00010b2d) clock_digital_number_pane_g1

0x5f40,	// (0x00010b2d) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001a32f) clock_digital_number_pane_g

0x5f40,	// (0x00010b2d) clock_digital_separator_pane_g1

0x5f40,	// (0x00010b2d) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001a32f) clock_digital_separator_pane_g

0x197e,	// (0x0000c56b) aid_fill_nsta_ParamLimits

0x1aad,	// (0x0000c69a) indicator_nsta_pane_ParamLimits

0x8838,	// (0x00013425) popup_clock_analogue_window

0x8838,	// (0x00013425) popup_clock_digital_window

0x7148,	// (0x00011d35) grid_indicator_nsta_pane_ParamLimits

0xadad,	// (0x0001599a) clock_nsta_pane_t2

0x0001,

0xfac9,	// (0x0001a6b6) clock_nsta_pane_t

0x48c1,	// (0x0000f4ae) aid_size_max_handle

0xe128,	// (0x00018d15) aid_size_min_handle

0x7c49,	// (0x00012836) editor_scroll_pane

0xbdc1,	// (0x000169ae) ex_editor_pane

0x70f6,	// (0x00011ce3) scroll_pane_cp13

0x6836,	// (0x00011423) scroll_pane_cp14

0x7606,	// (0x000121f3) scroll_pane_cp36

0x0f69,	// (0x0000bb56) list_single_graphic_hl_pane_cp2_ParamLimits

0x0f69,	// (0x0000bb56) list_single_graphic_hl_pane_cp2

0x23ce,	// (0x0000cfbb) list_single_graphic_hl_pane_ParamLimits

0x23ce,	// (0x0000cfbb) list_single_graphic_hl_pane

0xbdc9,	// (0x000169b6) aid_size_min_hl_cp1

0xbdd2,	// (0x000169bf) list_highlight_pane_cp34_ParamLimits

0xbdd2,	// (0x000169bf) list_highlight_pane_cp34

0xbde3,	// (0x000169d0) list_single_graphic_hl_pane_g1_ParamLimits

0xbde3,	// (0x000169d0) list_single_graphic_hl_pane_g1

0x683e,	// (0x0001142b) list_single_graphic_hl_pane_g2_ParamLimits

0x683e,	// (0x0001142b) list_single_graphic_hl_pane_g2

0x683e,	// (0x0001142b) list_single_graphic_hl_pane_g3_ParamLimits

0x683e,	// (0x0001142b) list_single_graphic_hl_pane_g3

0x684a,	// (0x00011437) list_single_graphic_hl_pane_g4_ParamLimits

0x684a,	// (0x00011437) list_single_graphic_hl_pane_g4

0x27fe,	// (0x0000d3eb) list_single_graphic_hl_pane_g5_ParamLimits

0x27fe,	// (0x0000d3eb) list_single_graphic_hl_pane_g5

0x0004,

0xfc07,	// (0x0001a7f4) list_single_graphic_hl_pane_g_ParamLimits

0xfc07,	// (0x0001a7f4) list_single_graphic_hl_pane_g

0x2812,	// (0x0000d3ff) list_single_graphic_hl_pane_t1_ParamLimits

0x2812,	// (0x0000d3ff) list_single_graphic_hl_pane_t1

0xbe10,	// (0x000169fd) aid_size_min_hl_cp2

0xbe19,	// (0x00016a06) list_highlight_pane_cp34_cp2_ParamLimits

0xbe19,	// (0x00016a06) list_highlight_pane_cp34_cp2

0xbde3,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbde3,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2

0xbe26,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbe26,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2

0xbe32,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbe32,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2

0x7b80,	// (0x0001276d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7b80,	// (0x0001276d) list_single_graphic_hl_pane_g4_cp2

0xbdfc,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbdfc,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2

0xe15a,	// (0x00018d47) control_pane_g4_ParamLimits

0xe15a,	// (0x00018d47) control_pane_g4

0x7fcf,	// (0x00012bbc) bg_popup_sub_pane_cp10_ParamLimits

0xb42c,	// (0x00016019) list_choice_list_pane_ParamLimits

0xb43b,	// (0x00016028) scroll_pane_cp23

0x62cd,	// (0x00010eba) bg_popup_preview_window_pane_cp02_ParamLimits

0xba54,	// (0x00016641) list_preview_fixed_pane_ParamLimits

0xba6a,	// (0x00016657) list_preview_fixed_pane_cp_ParamLimits

0xba6a,	// (0x00016657) list_preview_fixed_pane_cp

0xba76,	// (0x00016663) popup_preview_fixed_window_g1_ParamLimits

0xba76,	// (0x00016663) popup_preview_fixed_window_g1

0xba82,	// (0x0001666f) popup_preview_fixed_window_g2_ParamLimits

0xba82,	// (0x0001666f) popup_preview_fixed_window_g2

0x0002,

0xfb8f,	// (0x0001a77c) popup_preview_fixed_window_g_ParamLimits

0xfb8f,	// (0x0001a77c) popup_preview_fixed_window_g

0x4835,	// (0x0000f422) aid_navi_side_left_pane_ParamLimits

0x484a,	// (0x0000f437) aid_navi_side_right_pane_ParamLimits

0x4862,	// (0x0000f44f) navi_icon_pane_stacon_ParamLimits

0x4876,	// (0x0000f463) navi_navi_pane_stacon_ParamLimits

0x4862,	// (0x0000f44f) navi_text_pane_stacon_ParamLimits

0x5f36,	// (0x00010b23) main_text_info_pane

0xbe56,	// (0x00016a43) listscroll_text_info_pane

0xbe5e,	// (0x00016a4b) list_text_info_pane_ParamLimits

0xbe5e,	// (0x00016a4b) list_text_info_pane

0xbe6d,	// (0x00016a5a) scroll_pane_cp24_ParamLimits

0xbe6d,	// (0x00016a5a) scroll_pane_cp24

0x2828,	// (0x0000d415) list_text_info_pane_t1_ParamLimits

0x2828,	// (0x0000d415) list_text_info_pane_t1

0x130e,	// (0x0000befb) popup_fast_swap2_window_ParamLimits

0x130e,	// (0x0000befb) popup_fast_swap2_window

0xbec4,	// (0x00016ab1) aid_size_cell_fast2

0x5f36,	// (0x00010b23) bg_popup_window_pane_cp17

0x8fc2,	// (0x00013baf) heading_pane_cp2

0x650d,	// (0x000110fa) listscroll_fast2_pane

0xbece,	// (0x00016abb) grid_fast2_pane

0xbed8,	// (0x00016ac5) listscroll_fast2_pane_g1

0xbee0,	// (0x00016acd) listscroll_fast2_pane_g2

0x0001,

0xfc12,	// (0x0001a7ff) listscroll_fast2_pane_g

0x70f6,	// (0x00011ce3) scroll_pane_cp26

0xbeea,	// (0x00016ad7) cell_fast2_pane_ParamLimits

0xbeea,	// (0x00016ad7) cell_fast2_pane

0xbeff,	// (0x00016aec) cell_fast2_pane_g1

0xbf08,	// (0x00016af5) cell_fast2_pane_g2

0xbf11,	// (0x00016afe) cell_fast2_pane_g3

0x0002,

0xfc17,	// (0x0001a804) cell_fast2_pane_g

0x65f3,	// (0x000111e0) grid_highlight_pane_cp9

0x6608,	// (0x000111f5) main_eswt_pane_ParamLimits

0x6608,	// (0x000111f5) main_eswt_pane

0xbe82,	// (0x00016a6f) list_single_text_info_pane

0xbf19,	// (0x00016b06) eswt_ctrl_button_pane

0xbf19,	// (0x00016b06) eswt_ctrl_canvas_pane

0xbf21,	// (0x00016b0e) eswt_ctrl_combo_pane

0xbf19,	// (0x00016b06) eswt_ctrl_default_pane

0xbf19,	// (0x00016b06) eswt_ctrl_label_pane

0xbf29,	// (0x00016b16) eswt_ctrl_wait_pane

0xbf31,	// (0x00016b1e) eswt_shell_pane

0x5f36,	// (0x00010b23) listscroll_eswt_app_pane

0xbf51,	// (0x00016b3e) popup_eswt_tasktip_window_ParamLimits

0xbf51,	// (0x00016b3e) popup_eswt_tasktip_window

0x8b9b,	// (0x00013788) bg_popup_window_pane_cp18

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_ParamLimits

0xbf62,	// (0x00016b4f) eswt_control_pane_g1

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_ParamLimits

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_ParamLimits

0xbf7c,	// (0x00016b69) eswt_control_pane_g3

0xbf89,	// (0x00016b76) eswt_control_pane_g4_ParamLimits

0xbf89,	// (0x00016b76) eswt_control_pane_g4

0x0003,

0xfc1e,	// (0x0001a80b) eswt_control_pane_g_ParamLimits

0xfc1e,	// (0x0001a80b) eswt_control_pane_g

0x6e03,	// (0x000119f0) bg_button_pane_ParamLimits

0x6e03,	// (0x000119f0) bg_button_pane

0x6608,	// (0x000111f5) common_borders_pane_copy2_ParamLimits

0x6608,	// (0x000111f5) common_borders_pane_copy2

0xbf96,	// (0x00016b83) control_button_pane_g1_ParamLimits

0xbf96,	// (0x00016b83) control_button_pane_g1

0xbfa2,	// (0x00016b8f) control_button_pane_g2_ParamLimits

0xbfa2,	// (0x00016b8f) control_button_pane_g2

0xbfae,	// (0x00016b9b) control_button_pane_g3_ParamLimits

0xbfae,	// (0x00016b9b) control_button_pane_g3

0x0002,

0xfc27,	// (0x0001a814) control_button_pane_g_ParamLimits

0xfc27,	// (0x0001a814) control_button_pane_g

0xbfc2,	// (0x00016baf) control_button_pane_t1

0xbfd0,	// (0x00016bbd) control_button_pane_t2

0x0001,

0xfc2e,	// (0x0001a81b) control_button_pane_t

0x8a81,	// (0x0001366e) bg_button_pane_g1

0x8a91,	// (0x0001367e) bg_button_pane_g2

0x8a89,	// (0x00013676) bg_button_pane_g3

0x8aa1,	// (0x0001368e) bg_button_pane_g4

0x8a99,	// (0x00013686) bg_button_pane_g5

0x8aa9,	// (0x00013696) bg_button_pane_g6

0x8ab1,	// (0x0001369e) bg_button_pane_g7

0x8ac1,	// (0x000136ae) bg_button_pane_g8

0x8ab9,	// (0x000136a6) bg_button_pane_g9

0x0008,

0xf895,	// (0x0001a482) bg_button_pane_g

0xb3e7,	// (0x00015fd4) common_borders_pane_ParamLimits

0xb3e7,	// (0x00015fd4) common_borders_pane

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy1_ParamLimits

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy1

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy1_ParamLimits

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy1

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy1_ParamLimits

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy1

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy1_ParamLimits

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy1

0xb422,	// (0x0001600f) bg_eswt_ctrl_canvas_pane_g1

0xb3e7,	// (0x00015fd4) common_borders_pane_cp2_ParamLimits

0xb3e7,	// (0x00015fd4) common_borders_pane_cp2

0xb3e7,	// (0x00015fd4) common_borders_pane_cp3_ParamLimits

0xb3e7,	// (0x00015fd4) common_borders_pane_cp3

0xbfde,	// (0x00016bcb) separator_horizontal_pane

0xbfe6,	// (0x00016bd3) separator_vertical_pane

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy2_ParamLimits

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy2

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy2_ParamLimits

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy2

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy2_ParamLimits

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy2

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy2_ParamLimits

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy2

0x5f36,	// (0x00010b23) common_borders_pane_cp4

0xbfef,	// (0x00016bdc) separator_horizontal_pane_g1

0xbff8,	// (0x00016be5) separator_horizontal_pane_g2

0xc001,	// (0x00016bee) separator_horizontal_pane_g3

0x0002,

0xfc33,	// (0x0001a820) separator_horizontal_pane_g

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy3_ParamLimits

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy3

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy3_ParamLimits

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy3

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy3_ParamLimits

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy3

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy3_ParamLimits

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy3

0x5f36,	// (0x00010b23) common_borders_pane_cp5

0xc00a,	// (0x00016bf7) separator_vertical_pane_g1

0xc013,	// (0x00016c00) separator_vertical_pane_g2

0xc01c,	// (0x00016c09) separator_vertical_pane_g3

0x0002,

0xfc3a,	// (0x0001a827) separator_vertical_pane_g

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy4_ParamLimits

0xbf62,	// (0x00016b4f) eswt_control_pane_g1_copy4

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy4_ParamLimits

0xbf6f,	// (0x00016b5c) eswt_control_pane_g2_copy4

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy4_ParamLimits

0xbf7c,	// (0x00016b69) eswt_control_pane_g3_copy4

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy4_ParamLimits

0xbf89,	// (0x00016b76) eswt_control_pane_g4_copy4

0x2846,	// (0x0000d433) eswt_ctrl_combo_button_pane

0x284e,	// (0x0000d43b) eswt_ctrl_input_pane

0x2856,	// (0x0000d443) popup_choice_list_window_cp70

0x285e,	// (0x0000d44b) eswt_ctrl_input_pane_t1

0x5f36,	// (0x00010b23) input_focus_pane_cp70

0xb3e7,	// (0x00015fd4) bg_button_pane_cp70_ParamLimits

0xb3e7,	// (0x00015fd4) bg_button_pane_cp70

0x286c,	// (0x0000d459) eswt_ctrl_combo_button_pane_g1

0xc053,	// (0x00016c40) wait_bar_pane_cp70

0x8b9b,	// (0x00013788) bg_popup_window_pane_cp70_ParamLimits

0x8b9b,	// (0x00013788) bg_popup_window_pane_cp70

0xc05b,	// (0x00016c48) popup_eswt_tasktip_window_t1

0xc071,	// (0x00016c5e) wait_bar_pane_cp71_ParamLimits

0xc071,	// (0x00016c5e) wait_bar_pane_cp71

0xc07d,	// (0x00016c6a) grid_eswt_app_pane

0x7412,	// (0x00011fff) scroll_pane_cp70

0x2874,	// (0x0000d461) cell_eswt_app_pane_ParamLimits

0x2874,	// (0x0000d461) cell_eswt_app_pane

0x289e,	// (0x0000d48b) cell_eswt_app_pane_g1_ParamLimits

0x289e,	// (0x0000d48b) cell_eswt_app_pane_g1

0x28cd,	// (0x0000d4ba) cell_eswt_app_pane_g2_ParamLimits

0x28cd,	// (0x0000d4ba) cell_eswt_app_pane_g2

0x0001,

0xfc41,	// (0x0001a82e) cell_eswt_app_pane_g_ParamLimits

0xfc41,	// (0x0001a82e) cell_eswt_app_pane_g

0x28f6,	// (0x0000d4e3) cell_eswt_app_pane_t1_ParamLimits

0x28f6,	// (0x0000d4e3) cell_eswt_app_pane_t1

0xc144,	// (0x00016d31) grid_highlight_pane_cp70_ParamLimits

0xc144,	// (0x00016d31) grid_highlight_pane_cp70

0x7b1c,	// (0x00012709) set_content_pane_g1

0x7ef1,	// (0x00012ade) status_small_volume_pane

0x55f5,	// (0x000101e2) status_small_volume_pane_g1

0x55fd,	// (0x000101ea) volume_small2_pane

0x5606,	// (0x000101f3) volume_small2_pane_g1

0x560f,	// (0x000101fc) volume_small2_pane_g2

0x5618,	// (0x00010205) volume_small2_pane_g3

0x5621,	// (0x0001020e) volume_small2_pane_g4

0x562a,	// (0x00010217) volume_small2_pane_g5

0x5633,	// (0x00010220) volume_small2_pane_g6

0x563c,	// (0x00010229) volume_small2_pane_g7

0x5645,	// (0x00010232) volume_small2_pane_g8

0x564e,	// (0x0001023b) volume_small2_pane_g9

0x5657,	// (0x00010244) volume_small2_pane_g10

0x0009,

0xfc46,	// (0x0001a833) volume_small2_pane_g

0xb811,	// (0x000163fe) fep_vkb_top_text_pane_g1_ParamLimits

0x27a6,	// (0x0000d393) fep_vkb_top_text_pane_t1_ParamLimits

0xba8e,	// (0x0001667b) popup_preview_fixed_window_g3_ParamLimits

0xba8e,	// (0x0001667b) popup_preview_fixed_window_g3

0x1911,	// (0x0000c4fe) popup_toolbar_trans_pane

0x2216,	// (0x0000ce03) aid_height_set_list_ParamLimits

0x9f3c,	// (0x00014b29) aid_size_parent_ParamLimits

0x7fcf,	// (0x00012bbc) list_highlight_pane_cp2_ParamLimits

0x7b1c,	// (0x00012709) set_content_pane_g1_ParamLimits

0x23e1,	// (0x0000cfce) list_single_image_pane_ParamLimits

0x23e1,	// (0x0000cfce) list_single_image_pane

0x2928,	// (0x0000d515) aid_size_cell_image_ParamLimits

0x2928,	// (0x0000d515) aid_size_cell_image

0x2935,	// (0x0000d522) grid_single_image_pane_ParamLimits

0x2935,	// (0x0000d522) grid_single_image_pane

0x6e29,	// (0x00011a16) list_single_image_pane_g1_ParamLimits

0x6e29,	// (0x00011a16) list_single_image_pane_g1

0x6e35,	// (0x00011a22) list_single_image_pane_g2_ParamLimits

0x6e35,	// (0x00011a22) list_single_image_pane_g2

0x0001,

0xfc5b,	// (0x0001a848) list_single_image_pane_g_ParamLimits

0xfc5b,	// (0x0001a848) list_single_image_pane_g

0xc169,	// (0x00016d56) list_single_image_pane_t1_ParamLimits

0xc169,	// (0x00016d56) list_single_image_pane_t1

0x2941,	// (0x0000d52e) cell_image_list_pane_ParamLimits

0x2941,	// (0x0000d52e) cell_image_list_pane

0x2955,	// (0x0000d542) cell_image_list_pane_g1

0x295e,	// (0x0000d54b) cell_image_list_pane_g2

0x0001,

0xfc60,	// (0x0001a84d) cell_image_list_pane_g

0xc1a5,	// (0x00016d92) aid_size_cell_tb_trans_pane

0x6e03,	// (0x000119f0) bg_tb_trans_pane

0xc1b7,	// (0x00016da4) grid_tb_trans_pane

0x8a81,	// (0x0001366e) bg_tb_trans_pane_g1

0x8a91,	// (0x0001367e) bg_tb_trans_pane_g2

0x8a89,	// (0x00013676) bg_tb_trans_pane_g3

0x8aa1,	// (0x0001368e) bg_tb_trans_pane_g4

0x8a99,	// (0x00013686) bg_tb_trans_pane_g5

0x8ac1,	// (0x000136ae) bg_tb_trans_pane_g6

0x8ab9,	// (0x000136a6) bg_tb_trans_pane_g7

0x8aa9,	// (0x00013696) bg_tb_trans_pane_g8

0x8ab1,	// (0x0001369e) bg_tb_trans_pane_g9

0x0008,

0xfc65,	// (0x0001a852) bg_tb_trans_pane_g

0xc1cb,	// (0x00016db8) cell_toolbar_trans_pane_ParamLimits

0xc1cb,	// (0x00016db8) cell_toolbar_trans_pane

0xb422,	// (0x0001600f) cell_toolbar_trans_pane_g1

0x2602,	// (0x0000d1ef) list_form2_midp_pane_t1

0x2610,	// (0x0000d1fd) list_form2_midp_pane_t2

0x0001,

0xfb02,	// (0x0001a6ef) list_form2_midp_pane_t

0xaf89,	// (0x00015b76) scroll_pane_cp51_ParamLimits

0xb18c,	// (0x00015d79) form2_midp_wait_pane_g1

0xb195,	// (0x00015d82) form2_midp_wait_pane_g2

0xb19e,	// (0x00015d8b) form2_midp_wait_pane_g3

0x0002,

0xfb17,	// (0x0001a704) form2_midp_wait_pane_g

0x602a,	// (0x00010c17) list_highlight_pane_cp21_ParamLimits

0xb1ed,	// (0x00015dda) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb1fc,	// (0x00015de9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa13e,	// (0x00014d2b) list_single_2graphic_im_pane_ParamLimits

0xa13e,	// (0x00014d2b) list_single_2graphic_im_pane

0x2967,	// (0x0000d554) list_single_2graphic_im_pane_g1_ParamLimits

0x2967,	// (0x0000d554) list_single_2graphic_im_pane_g1

0x2978,	// (0x0000d565) list_single_2graphic_im_pane_g2_ParamLimits

0x2978,	// (0x0000d565) list_single_2graphic_im_pane_g2

0x2984,	// (0x0000d571) list_single_2graphic_im_pane_g3_ParamLimits

0x2984,	// (0x0000d571) list_single_2graphic_im_pane_g3

0x0003,

0xfc78,	// (0x0001a865) list_single_2graphic_im_pane_g_ParamLimits

0xfc78,	// (0x0001a865) list_single_2graphic_im_pane_g

0x2998,	// (0x0000d585) list_single_2graphic_im_pane_t1_ParamLimits

0x2998,	// (0x0000d585) list_single_2graphic_im_pane_t1

0xba9a,	// (0x00016687) list_single_graphic_2heading_pane_fp_ParamLimits

0xba9a,	// (0x00016687) list_single_graphic_2heading_pane_fp

0xbae0,	// (0x000166cd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbae0,	// (0x000166cd) list_single_graphic_2heading_pane_fp_g1

0xbab1,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbab1,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2

0x6e29,	// (0x00011a16) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6e29,	// (0x00011a16) list_single_graphic_2heading_pane_fp_g3

0x6e35,	// (0x00011a22) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6e35,	// (0x00011a22) list_single_graphic_2heading_pane_fp_g4

0xbabd,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbabd,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0001a78c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0001a78c) list_single_graphic_2heading_pane_fp_g

0xc25f,	// (0x00016e4c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc25f,	// (0x00016e4c) list_single_graphic_2heading_pane_fp_t1

0xbb18,	// (0x00016705) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbb18,	// (0x00016705) list_single_graphic_2heading_pane_fp_t2

0xc275,	// (0x00016e62) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc275,	// (0x00016e62) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc81,	// (0x0001a86e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc81,	// (0x0001a86e) list_single_graphic_2heading_pane_fp_t

0xb4d0,	// (0x000160bd) fep_hwr_write_pane_g5_ParamLimits

0xb4d0,	// (0x000160bd) fep_hwr_write_pane_g5

0xb4dc,	// (0x000160c9) fep_hwr_write_pane_g6_ParamLimits

0xb4dc,	// (0x000160c9) fep_hwr_write_pane_g6

0xbf31,	// (0x00016b1e) eswt_shell_pane_ParamLimits

0x8b9b,	// (0x00013788) bg_popup_window_pane_cp18_ParamLimits

0x9e62,	// (0x00014a4f) heading_pane_cp70

0xc05b,	// (0x00016c48) popup_eswt_tasktip_window_t1_ParamLimits

0x19d2,	// (0x0000c5bf) aid_touch_tab_arrow_left

0x19e8,	// (0x0000c5d5) aid_touch_tab_arrow_right

0x05f1,	// (0x0000b1de) title_pane_g3_ParamLimits

0x05f1,	// (0x0000b1de) title_pane_g3

0x6cf0,	// (0x000118dd) set_value_pane_g1

0x1911,	// (0x0000c4fe) popup_toolbar_trans_pane_ParamLimits

0xc1a5,	// (0x00016d92) aid_size_cell_tb_trans_pane_ParamLimits

0x6e03,	// (0x000119f0) bg_tb_trans_pane_ParamLimits

0xc1b7,	// (0x00016da4) grid_tb_trans_pane_ParamLimits

0x62cd,	// (0x00010eba) cont_note_pane_ParamLimits

0x62cd,	// (0x00010eba) cont_note_pane

0x6608,	// (0x000111f5) cont_snote2_single_text_pane_ParamLimits

0x6608,	// (0x000111f5) cont_snote2_single_text_pane

0x6608,	// (0x000111f5) cont_snote2_single_graphic_pane_ParamLimits

0x6608,	// (0x000111f5) cont_snote2_single_graphic_pane

0x91a7,	// (0x00013d94) cont_note_wait_pane_ParamLimits

0x91a7,	// (0x00013d94) cont_note_wait_pane

0x91a7,	// (0x00013d94) cont_note_image_pane_ParamLimits

0x91a7,	// (0x00013d94) cont_note_image_pane

0xc28b,	// (0x00016e78) popup_note2_window_g1_ParamLimits

0xc28b,	// (0x00016e78) popup_note2_window_g1

0xc2bc,	// (0x00016ea9) popup_note2_window_t1_ParamLimits

0xc2bc,	// (0x00016ea9) popup_note2_window_t1

0xc301,	// (0x00016eee) popup_note2_window_t2_ParamLimits

0xc301,	// (0x00016eee) popup_note2_window_t2

0xc346,	// (0x00016f33) popup_note2_window_t3_ParamLimits

0xc346,	// (0x00016f33) popup_note2_window_t3

0xc38b,	// (0x00016f78) popup_note2_window_t4_ParamLimits

0xc38b,	// (0x00016f78) popup_note2_window_t4

0x6345,	// (0x00010f32) popup_note2_window_t5_ParamLimits

0x6345,	// (0x00010f32) popup_note2_window_t5

0x0004,

0xfc8d,	// (0x0001a87a) popup_note2_window_t_ParamLimits

0xfc8d,	// (0x0001a87a) popup_note2_window_t

0xc3ba,	// (0x00016fa7) popup_note2_image_window_g1_ParamLimits

0xc3ba,	// (0x00016fa7) popup_note2_image_window_g1

0xc3c6,	// (0x00016fb3) popup_note2_image_window_g2_ParamLimits

0xc3c6,	// (0x00016fb3) popup_note2_image_window_g2

0x0001,

0xfc98,	// (0x0001a885) popup_note2_image_window_g_ParamLimits

0xfc98,	// (0x0001a885) popup_note2_image_window_g

0xc3d8,	// (0x00016fc5) popup_note2_image_window_t1_ParamLimits

0xc3d8,	// (0x00016fc5) popup_note2_image_window_t1

0xc3f0,	// (0x00016fdd) popup_note2_image_window_t2_ParamLimits

0xc3f0,	// (0x00016fdd) popup_note2_image_window_t2

0xc408,	// (0x00016ff5) popup_note2_image_window_t3_ParamLimits

0xc408,	// (0x00016ff5) popup_note2_image_window_t3

0x0002,

0xfc9d,	// (0x0001a88a) popup_note2_image_window_t_ParamLimits

0xfc9d,	// (0x0001a88a) popup_note2_image_window_t

0x91b5,	// (0x00013da2) popup_note2_wait_window_g1_ParamLimits

0x91b5,	// (0x00013da2) popup_note2_wait_window_g1

0x91c1,	// (0x00013dae) popup_note2_wait_window_g2_ParamLimits

0x91c1,	// (0x00013dae) popup_note2_wait_window_g2

0x91cd,	// (0x00013dba) popup_note2_wait_window_g3_ParamLimits

0x91cd,	// (0x00013dba) popup_note2_wait_window_g3

0x0002,

0xf877,	// (0x0001a464) popup_note2_wait_window_g_ParamLimits

0xf877,	// (0x0001a464) popup_note2_wait_window_g

0xc424,	// (0x00017011) popup_note2_wait_window_t1_ParamLimits

0xc424,	// (0x00017011) popup_note2_wait_window_t1

0xc442,	// (0x0001702f) popup_note2_wait_window_t2_ParamLimits

0xc442,	// (0x0001702f) popup_note2_wait_window_t2

0xc460,	// (0x0001704d) popup_note2_wait_window_t3_ParamLimits

0xc460,	// (0x0001704d) popup_note2_wait_window_t3

0xc472,	// (0x0001705f) popup_note2_wait_window_t4_ParamLimits

0xc472,	// (0x0001705f) popup_note2_wait_window_t4

0x0003,

0xfca4,	// (0x0001a891) popup_note2_wait_window_t_ParamLimits

0xfca4,	// (0x0001a891) popup_note2_wait_window_t

0xc484,	// (0x00017071) wait_bar2_pane_ParamLimits

0xc484,	// (0x00017071) wait_bar2_pane

0xc49c,	// (0x00017089) popup_snote2_single_text_window_g1_ParamLimits

0xc49c,	// (0x00017089) popup_snote2_single_text_window_g1

0xc4c4,	// (0x000170b1) popup_snote2_single_text_window_t1_ParamLimits

0xc4c4,	// (0x000170b1) popup_snote2_single_text_window_t1

0xc510,	// (0x000170fd) popup_snote2_single_text_window_t2_ParamLimits

0xc510,	// (0x000170fd) popup_snote2_single_text_window_t2

0xc55c,	// (0x00017149) popup_snote2_single_text_window_t3_ParamLimits

0xc55c,	// (0x00017149) popup_snote2_single_text_window_t3

0xc59d,	// (0x0001718a) popup_snote2_single_text_window_t4_ParamLimits

0xc59d,	// (0x0001718a) popup_snote2_single_text_window_t4

0xc5d3,	// (0x000171c0) popup_snote2_single_text_window_t5_ParamLimits

0xc5d3,	// (0x000171c0) popup_snote2_single_text_window_t5

0x0004,

0xfcad,	// (0x0001a89a) popup_snote2_single_text_window_t_ParamLimits

0xfcad,	// (0x0001a89a) popup_snote2_single_text_window_t

0xc5fe,	// (0x000171eb) popup_snote2_single_graphic_window_g1_ParamLimits

0xc5fe,	// (0x000171eb) popup_snote2_single_graphic_window_g1

0xc626,	// (0x00017213) popup_snote2_single_graphic_window_g2_ParamLimits

0xc626,	// (0x00017213) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb8,	// (0x0001a8a5) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb8,	// (0x0001a8a5) popup_snote2_single_graphic_window_g

0xc64e,	// (0x0001723b) popup_snote2_single_graphic_window_t1_ParamLimits

0xc64e,	// (0x0001723b) popup_snote2_single_graphic_window_t1

0xc69a,	// (0x00017287) popup_snote2_single_graphic_window_t2_ParamLimits

0xc69a,	// (0x00017287) popup_snote2_single_graphic_window_t2

0xc55c,	// (0x00017149) popup_snote2_single_graphic_window_t3_ParamLimits

0xc55c,	// (0x00017149) popup_snote2_single_graphic_window_t3

0xc59d,	// (0x0001718a) popup_snote2_single_graphic_window_t4_ParamLimits

0xc59d,	// (0x0001718a) popup_snote2_single_graphic_window_t4

0xc5d3,	// (0x000171c0) popup_snote2_single_graphic_window_t5_ParamLimits

0xc5d3,	// (0x000171c0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbd,	// (0x0001a8aa) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbd,	// (0x0001a8aa) popup_snote2_single_graphic_window_t

0xae3e,	// (0x00015a2b) clock_nsta_pane_cp2_t1

0xae3e,	// (0x00015a2b) clock_nsta_pane_cp2_t2

0x0001,

0xfad8,	// (0x0001a6c5) clock_nsta_pane_cp2_t

0x6e1d,	// (0x00011a0a) form_field_data_wide_pane_g1_ParamLimits

0x6e29,	// (0x00011a16) form_field_data_wide_pane_g2_ParamLimits

0x6e29,	// (0x00011a16) form_field_data_wide_pane_g2

0x6e35,	// (0x00011a22) form_field_data_wide_pane_g3_ParamLimits

0x6e35,	// (0x00011a22) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001a2a7) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001a2a7) form_field_data_wide_pane_g

0x2518,	// (0x0000d105) grid_touch_3_pane_ParamLimits

0x2518,	// (0x0000d105) grid_touch_3_pane

0x29c9,	// (0x0000d5b6) cell_touch_3_pane_ParamLimits

0x29c9,	// (0x0000d5b6) cell_touch_3_pane

0xb422,	// (0x0001600f) cell_touch_3_pane_g1

0xb422,	// (0x0001600f) cell_touch_3_pane_g2

0x0001,

0xfb5d,	// (0x0001a74a) cell_touch_3_pane_g

0x6377,	// (0x00010f64) cont_query_data_pane

0x637f,	// (0x00010f6c) cont_query_data_pane_cp1

0xc715,	// (0x00017302) button_value_adjust_pane_cp7

0xc71d,	// (0x0001730a) query_popup_pane_cp3

0x769d,	// (0x0001228a) bg_popup_sub_pane_cp22_ParamLimits

0x4977,	// (0x0000f564) navi_navi_volume_pane_cp2

0x4992,	// (0x0000f57f) popup_side_volume_key_window_g2

0x49a1,	// (0x0000f58e) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001a339) popup_side_volume_key_window_g

0x49be,	// (0x0000f5ab) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001a340) popup_side_volume_key_window_t

0x79e6,	// (0x000125d3) popup_side_volume_key_window_ParamLimits

0x09f7,	// (0x0000b5e4) list_double_graphic_pane_g4_ParamLimits

0x09f7,	// (0x0000b5e4) list_double_graphic_pane_g4

0x23ba,	// (0x0000cfa7) list_single_2heading_msg_pane_ParamLimits

0x23ba,	// (0x0000cfa7) list_single_2heading_msg_pane

0x2a12,	// (0x0000d5ff) list_single_2heading_msg_pane_g1_ParamLimits

0x2a12,	// (0x0000d5ff) list_single_2heading_msg_pane_g1

0x2a1e,	// (0x0000d60b) list_single_2heading_msg_pane_g2_ParamLimits

0x2a1e,	// (0x0000d60b) list_single_2heading_msg_pane_g2

0x2a31,	// (0x0000d61e) list_single_2heading_msg_pane_g3_ParamLimits

0x2a31,	// (0x0000d61e) list_single_2heading_msg_pane_g3

0x2a3d,	// (0x0000d62a) list_single_2heading_msg_pane_g4_ParamLimits

0x2a3d,	// (0x0000d62a) list_single_2heading_msg_pane_g4

0x0003,

0xfcc8,	// (0x0001a8b5) list_single_2heading_msg_pane_g_ParamLimits

0xfcc8,	// (0x0001a8b5) list_single_2heading_msg_pane_g

0x2a55,	// (0x0000d642) list_single_2heading_msg_pane_t1_ParamLimits

0x2a55,	// (0x0000d642) list_single_2heading_msg_pane_t1

0x2a7d,	// (0x0000d66a) list_single_2heading_msg_pane_t2_ParamLimits

0x2a7d,	// (0x0000d66a) list_single_2heading_msg_pane_t2

0x2ae8,	// (0x0000d6d5) list_single_2heading_msg_pane_t3_ParamLimits

0x2ae8,	// (0x0000d6d5) list_single_2heading_msg_pane_t3

0xc811,	// (0x000173fe) list_single_2heading_msg_pane_t4_ParamLimits

0xc811,	// (0x000173fe) list_single_2heading_msg_pane_t4

0x0003,

0xfcd1,	// (0x0001a8be) list_single_2heading_msg_pane_t_ParamLimits

0xfcd1,	// (0x0001a8be) list_single_2heading_msg_pane_t

0x5f7e,	// (0x00010b6b) title_pane_g4_ParamLimits

0x5f7e,	// (0x00010b6b) title_pane_g4

0x4785,	// (0x0000f372) title_pane_stacon_g3_ParamLimits

0x4785,	// (0x0000f372) title_pane_stacon_g3

0xc222,	// (0x00016e0f) list_single_2graphic_im_pane_g4_ParamLimits

0xc222,	// (0x00016e0f) list_single_2graphic_im_pane_g4

0x9c08,	// (0x000147f5) popup_side_volume_key_window_cp

0xa517,	// (0x00015104) main_idle_act2_pane_t1

0x4da4,	// (0x0000f991) toolbar_button_pane_g10

0x090e,	// (0x0000b4fb) popup_toolbar_window_cp1

0xae2f,	// (0x00015a1c) clock_nsta_pane_cp_t1

0xae2f,	// (0x00015a1c) clock_nsta_pane_cp_t2

0x0001,

0xfad3,	// (0x0001a6c0) clock_nsta_pane_cp_t

0x4977,	// (0x0000f564) navi_navi_volume_pane_cp2_ParamLimits

0x4986,	// (0x0000f573) popup_side_volume_key_window_g1_ParamLimits

0x4992,	// (0x0000f57f) popup_side_volume_key_window_g2_ParamLimits

0x49a1,	// (0x0000f58e) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001a339) popup_side_volume_key_window_g_ParamLimits

0x5261,	// (0x0000fe4e) fep_hwr_aid_pane

0x5308,	// (0x0000fef5) bg_fep_hwr_top_pane_g4_ParamLimits

0xb492,	// (0x0001607f) fep_hwr_top_pane_g1_ParamLimits

0xb4a4,	// (0x00016091) fep_hwr_top_pane_g2_ParamLimits

0x5328,	// (0x0000ff15) fep_hwr_top_pane_g3_ParamLimits

0xfb28,	// (0x0001a715) fep_hwr_top_pane_g_ParamLimits

0x533d,	// (0x0000ff2a) fep_hwr_top_text_pane_ParamLimits

0x99c9,	// (0x000145b6) aid_touch_tab_arrow_arrow_2

0x99d2,	// (0x000145bf) aid_touch_tab_arrow_left_2

0x5275,	// (0x0000fe62) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x52ac,	// (0x0000fe99) fep_hwr_prediction_pane

0xb619,	// (0x00016206) fep_vkb_prediction_pane

0x2786,	// (0x0000d373) fep_vkb_side_pane_g3_ParamLimits

0x2786,	// (0x0000d373) fep_vkb_side_pane_g3

0x54b8,	// (0x000100a5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5524,	// (0x00010111) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5531,	// (0x0001011e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd7,	// (0x0001a7c4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5660,	// (0x0001024d) fep_hwr_prediction_pane_g1

0x566a,	// (0x00010257) fep_hwr_prediction_pane_g2

0xb48a,	// (0x00016077) fep_hwr_prediction_pane_g3

0x5672,	// (0x0001025f) fep_hwr_prediction_pane_g4

0x0003,

0xfcda,	// (0x0001a8c7) fep_hwr_prediction_pane_g

0xc836,	// (0x00017423) fep_vkb_prediction_pane_g1

0xc840,	// (0x0001742d) fep_vkb_prediction_pane_g2

0xc848,	// (0x00017435) fep_vkb_prediction_pane_g3

0xc850,	// (0x0001743d) fep_vkb_prediction_pane_g4

0x0003,

0xfce3,	// (0x0001a8d0) fep_vkb_prediction_pane_g

0x5090,	// (0x0000fc7d) slider_set_pane_g3

0x50a4,	// (0x0000fc91) slider_set_pane_g4

0x50bc,	// (0x0000fca9) slider_set_pane_g5

0x5090,	// (0x0000fc7d) slider_set_pane_g6

0x50d2,	// (0x0000fcbf) slider_set_pane_g7

0xa099,	// (0x00014c86) slider_form_pane_g3

0xa0a2,	// (0x00014c8f) slider_form_pane_g4

0xa0aa,	// (0x00014c97) slider_form_pane_g5

0xa099,	// (0x00014c86) slider_form_pane_g6

0x235d,	// (0x0000cf4a) slider_form_pane_g7

0xa7eb,	// (0x000153d8) slider_set_pane_vc_g3

0xa7f4,	// (0x000153e1) slider_set_pane_vc_g4

0xa7fd,	// (0x000153ea) slider_set_pane_vc_g5

0xa7eb,	// (0x000153d8) slider_set_pane_vc_g6

0xa806,	// (0x000153f3) slider_set_pane_vc_g7

0xa7eb,	// (0x000153d8) slider_form_pane_vc_g1

0xa7f4,	// (0x000153e1) slider_form_pane_vc_g2

0xa7fd,	// (0x000153ea) slider_form_pane_vc_g3

0xa7eb,	// (0x000153d8) slider_form_pane_vc_g4

0xab67,	// (0x00015754) slider_form_pane_vc_g5

0x0004,

0xfab9,	// (0x0001a6a6) slider_form_pane_vc_g

0x5f36,	// (0x00010b23) main_idle_act3_pane

0xc858,	// (0x00017445) ai3_links_pane

0x2b56,	// (0x0000d743) popup_ai3_data_window_ParamLimits

0x2b56,	// (0x0000d743) popup_ai3_data_window

0x5f36,	// (0x00010b23) grid_ai3_links_pane

0x2b6e,	// (0x0000d75b) cell_ai3_links_pane_ParamLimits

0x2b6e,	// (0x0000d75b) cell_ai3_links_pane

0xc891,	// (0x0001747e) bg_popup_sub_pane_cp11

0xc89e,	// (0x0001748b) cell_ai3_links_pane_g1

0x5f36,	// (0x00010b23) bg_popup_sub_pane_cp12

0xc8c3,	// (0x000174b0) heading_ai3_data_pane

0xc8cb,	// (0x000174b8) list_ai3_gene_pane

0xc8d7,	// (0x000174c4) popup_ai3_data_window_g1

0xc8df,	// (0x000174cc) heading_ai3_data_pane_g1

0xc8e7,	// (0x000174d4) heading_ai3_data_pane_t1

0xc8f5,	// (0x000174e2) list_double_ai3_gene_pane_ParamLimits

0xc8f5,	// (0x000174e2) list_double_ai3_gene_pane

0xc902,	// (0x000174ef) list_single_ai3_gene_pane_ParamLimits

0xc902,	// (0x000174ef) list_single_ai3_gene_pane

0xb3e7,	// (0x00015fd4) list_highlight_pane_cp7_ParamLimits

0xb3e7,	// (0x00015fd4) list_highlight_pane_cp7

0xc90f,	// (0x000174fc) list_single_a13_gene_pane_t1_ParamLimits

0xc90f,	// (0x000174fc) list_single_a13_gene_pane_t1

0xc926,	// (0x00017513) list_single_ai3_gene_pane_g1

0xc92f,	// (0x0001751c) list_single_ai3_gene_pane_g2

0x0001,

0xfcec,	// (0x0001a8d9) list_single_ai3_gene_pane_g

0xc937,	// (0x00017524) list_double_ai3_gene_pane_g1_ParamLimits

0xc937,	// (0x00017524) list_double_ai3_gene_pane_g1

0xc943,	// (0x00017530) list_double_ai3_gene_pane_t1_ParamLimits

0xc943,	// (0x00017530) list_double_ai3_gene_pane_t1

0xc95f,	// (0x0001754c) list_double_ai3_gene_pane_t2_ParamLimits

0xc95f,	// (0x0001754c) list_double_ai3_gene_pane_t2

0xc974,	// (0x00017561) list_double_ai3_gene_pane_t3_ParamLimits

0xc974,	// (0x00017561) list_double_ai3_gene_pane_t3

0x0002,

0xfcf1,	// (0x0001a8de) list_double_ai3_gene_pane_t_ParamLimits

0xfcf1,	// (0x0001a8de) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc72e,	// (0x0001731b) aid_size_min_col_2

0x29fc,	// (0x0000d5e9) aid_size_min_msg_ParamLimits

0x29fc,	// (0x0000d5e9) aid_size_min_msg

0x279a,	// (0x0000d387) fep_vkb_top_text_pane_g2_ParamLimits

0x279a,	// (0x0000d387) fep_vkb_top_text_pane_g2

0x0001,

0xfb58,	// (0x0001a745) fep_vkb_top_text_pane_g_ParamLimits

0xfb58,	// (0x0001a745) fep_vkb_top_text_pane_g

0x5f36,	// (0x00010b23) main_hc_apps_shell_pane

0xc991,	// (0x0001757e) grid_hc_apps_pane_ParamLimits

0xc991,	// (0x0001757e) grid_hc_apps_pane

0xc9a0,	// (0x0001758d) list_hc_apps_pane

0xc9a8,	// (0x00017595) scroll_pane_cp37_ParamLimits

0xc9a8,	// (0x00017595) scroll_pane_cp37

0x2b88,	// (0x0000d775) cell_hc_apps_pane_ParamLimits

0x2b88,	// (0x0000d775) cell_hc_apps_pane

0x2c48,	// (0x0000d835) cell_hc_apps_pane_g1_ParamLimits

0x2c48,	// (0x0000d835) cell_hc_apps_pane_g1

0xca95,	// (0x00017682) cell_hc_apps_pane_g2_ParamLimits

0xca95,	// (0x00017682) cell_hc_apps_pane_g2

0xcab1,	// (0x0001769e) cell_hc_apps_pane_g3_ParamLimits

0xcab1,	// (0x0001769e) cell_hc_apps_pane_g3

0x0002,

0xfcf8,	// (0x0001a8e5) cell_hc_apps_pane_g_ParamLimits

0xfcf8,	// (0x0001a8e5) cell_hc_apps_pane_g

0x2c75,	// (0x0000d862) cell_hc_apps_pane_t1_ParamLimits

0x2c75,	// (0x0000d862) cell_hc_apps_pane_t1

0x62cd,	// (0x00010eba) grid_highlight_pane_cp10_ParamLimits

0x62cd,	// (0x00010eba) grid_highlight_pane_cp10

0x2cb3,	// (0x0000d8a0) list_single_hc_apps_pane_ParamLimits

0x2cb3,	// (0x0000d8a0) list_single_hc_apps_pane

0xcb86,	// (0x00017773) list_single_hc_apps_pane_g1

0xcb9f,	// (0x0001778c) list_single_hc_apps_pane_g2

0x0001,

0xfcff,	// (0x0001a8ec) list_single_hc_apps_pane_g

0xcbb8,	// (0x000177a5) list_single_hc_apps_pane_g2_copy1

0xcbd4,	// (0x000177c1) list_single_hc_apps_pane_t1

0x602a,	// (0x00010c17) bg_set_opt_pane_cp_ParamLimits

0x46b0,	// (0x0000f29d) setting_slider_pane_t1_ParamLimits

0x46c9,	// (0x0000f2b6) setting_slider_pane_t2_ParamLimits

0x46e2,	// (0x0000f2cf) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001a18f) setting_slider_pane_t_ParamLimits

0x46f9,	// (0x0000f2e6) slider_set_pane_ParamLimits

0x4c16,	// (0x0000f803) control_pane_g5_ParamLimits

0x4c16,	// (0x0000f803) control_pane_g5

0x9ef6,	// (0x00014ae3) slider_set_pane_g1_ParamLimits

0x5084,	// (0x0000fc71) slider_set_pane_g2_ParamLimits

0x5090,	// (0x0000fc7d) slider_set_pane_g3_ParamLimits

0x50a4,	// (0x0000fc91) slider_set_pane_g4_ParamLimits

0x50bc,	// (0x0000fca9) slider_set_pane_g5_ParamLimits

0x5090,	// (0x0000fc7d) slider_set_pane_g6_ParamLimits

0x50d2,	// (0x0000fcbf) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0001a580) slider_set_pane_g_ParamLimits

0x7ac7,	// (0x000126b4) navi_icon_text_pane_ParamLimits

0x199e,	// (0x0000c58b) aid_fill_nsta_2_ParamLimits

0x19d2,	// (0x0000c5bf) aid_touch_tab_arrow_left_ParamLimits

0x19e8,	// (0x0000c5d5) aid_touch_tab_arrow_right_ParamLimits

0x1a83,	// (0x0000c670) clock_nsta_pane_ParamLimits

0x20f3,	// (0x0000cce0) navi_icon_pane_g1_ParamLimits

0x20ff,	// (0x0000ccec) navi_text_pane_t1_ParamLimits

0x25e4,	// (0x0000d1d1) navi_icon_text_pane_g1_ParamLimits

0x25f0,	// (0x0000d1dd) navi_icon_text_pane_t1_ParamLimits

0xcb86,	// (0x00017773) list_single_hc_apps_pane_g1_ParamLimits

0xcb9f,	// (0x0001778c) list_single_hc_apps_pane_g2_ParamLimits

0xfcff,	// (0x0001a8ec) list_single_hc_apps_pane_g_ParamLimits

0xcbb8,	// (0x000177a5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcbd4,	// (0x000177c1) list_single_hc_apps_pane_t1_ParamLimits

0xe0bd,	// (0x00018caa) popup_toolbar2_fixed_window_ParamLimits

0xe0bd,	// (0x00018caa) popup_toolbar2_fixed_window

0x1907,	// (0x0000c4f4) popup_toolbar2_float_window

0x5f36,	// (0x00010b23) bg_popup_sub_pane_cp27

0xcc02,	// (0x000177ef) grid_toolbar2_float_pane

0x5f36,	// (0x00010b23) bg_popup_sub_pane_cp26

0xcc02,	// (0x000177ef) grid_toolbar2_fixed_pane

0x2ce6,	// (0x0000d8d3) cell_toolbar2_fixed_pane_ParamLimits

0x2ce6,	// (0x0000d8d3) cell_toolbar2_fixed_pane

0x2d01,	// (0x0000d8ee) cell_toolbar2_fixed_pane_g1

0xcc24,	// (0x00017811) toolbar2_fixed_button_pane

0x8a81,	// (0x0001366e) toolbar2_fixed_button_pane_g1

0x8a91,	// (0x0001367e) toolbar2_fixed_button_pane_g2

0x8a89,	// (0x00013676) toolbar2_fixed_button_pane_g3

0x8aa1,	// (0x0001368e) toolbar2_fixed_button_pane_g4

0x8a99,	// (0x00013686) toolbar2_fixed_button_pane_g5

0x8aa9,	// (0x00013696) toolbar2_fixed_button_pane_g6

0x8ab1,	// (0x0001369e) toolbar2_fixed_button_pane_g7

0x8ac1,	// (0x000136ae) toolbar2_fixed_button_pane_g8

0x8ab9,	// (0x000136a6) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0001a482) toolbar2_fixed_button_pane_g

0xcc2c,	// (0x00017819) cell_toolbar2_float_pane_ParamLimits

0xcc2c,	// (0x00017819) cell_toolbar2_float_pane

0xcc3d,	// (0x0001782a) cell_toolbar2_float_pane_g1

0xcc24,	// (0x00017811) toolbar2_fixed_button_pane_cp

0x274d,	// (0x0000d33a) fep_vkb_accented_list_pane_ParamLimits

0x274d,	// (0x0000d33a) fep_vkb_accented_list_pane

0x5498,	// (0x00010085) bg_popup_fep_shadow_pane_g9

0x7c49,	// (0x00012836) bg_popup_fep_shadow_pane_cp3

0x70dd,	// (0x00011cca) list_accented_list_pane

0xcc46,	// (0x00017833) list_single_accented_list_pane_ParamLimits

0xcc46,	// (0x00017833) list_single_accented_list_pane

0x7c49,	// (0x00012836) list_highlight_pane_cp10

0xcc57,	// (0x00017844) list_single_accented_list_pane_t1

0x1831,	// (0x0000c41e) popup_slider_window_ParamLimits

0x1831,	// (0x0000c41e) popup_slider_window

0xc725,	// (0x00017312) aid_indentation_list_msg

0x2dfa,	// (0x0000d9e7) bg_popup_window_pane_cp19

0xcd7b,	// (0x00017968) popup_slider_window_g1

0xcd97,	// (0x00017984) popup_slider_window_g2

0xcdb3,	// (0x000179a0) popup_slider_window_g3

0x0005,

0xfd04,	// (0x0001a8f1) popup_slider_window_g

0xce0f,	// (0x000179fc) popup_slider_window_t1

0xce83,	// (0x00017a70) small_volume_slider_vertical_pane

0xb422,	// (0x0001600f) small_volume_slider_vertical_pane_g1

0xb422,	// (0x0001600f) small_volume_slider_vertical_pane_g2

0xce9f,	// (0x00017a8c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd16,	// (0x0001a903) small_volume_slider_vertical_pane_g

0xe02b,	// (0x00018c18) area_side_right_pane_ParamLimits

0xe02b,	// (0x00018c18) area_side_right_pane

0xe473,	// (0x00019060) aid_size_side_button_ParamLimits

0xe473,	// (0x00019060) aid_size_side_button

0xe48c,	// (0x00019079) grid_sctrl_middle_pane_ParamLimits

0xe48c,	// (0x00019079) grid_sctrl_middle_pane

0x56ae,	// (0x0001029b) sctrl_sk_bottom_pane

0x56bf,	// (0x000102ac) sctrl_sk_top_pane

0x56d1,	// (0x000102be) aid_touch_sctrl_top

0x56de,	// (0x000102cb) bg_sctrl_sk_pane_ParamLimits

0x56de,	// (0x000102cb) bg_sctrl_sk_pane

0x56ec,	// (0x000102d9) sctrl_sk_top_pane_g1

0x56f9,	// (0x000102e6) sctrl_sk_top_pane_t1

0x56d1,	// (0x000102be) aid_touch_sctrl_bottom

0x56de,	// (0x000102cb) bg_sctrl_sk_pane_cp_ParamLimits

0x56de,	// (0x000102cb) bg_sctrl_sk_pane_cp

0x5714,	// (0x00010301) sctrl_sk_bottom_pane_g1

0x56f9,	// (0x000102e6) sctrl_sk_bottom_pane_t1

0xe4a6,	// (0x00019093) cell_sctrl_middle_pane_ParamLimits

0xe4a6,	// (0x00019093) cell_sctrl_middle_pane

0xe4b7,	// (0x000190a4) aid_touch_sctrl_middle_ParamLimits

0xe4b7,	// (0x000190a4) aid_touch_sctrl_middle

0xe4c4,	// (0x000190b1) bg_sctrl_middle_pane_ParamLimits

0xe4c4,	// (0x000190b1) bg_sctrl_middle_pane

0x5d81,	// (0x0001096e) cell_sctrl_middle_pane_g1_ParamLimits

0x5d81,	// (0x0001096e) cell_sctrl_middle_pane_g1

0xe4d2,	// (0x000190bf) cell_sctrl_middle_pane_g2_ParamLimits

0xe4d2,	// (0x000190bf) cell_sctrl_middle_pane_g2

0x0001,

0xfd22,	// (0x0001a90f) cell_sctrl_middle_pane_g_ParamLimits

0xfd22,	// (0x0001a90f) cell_sctrl_middle_pane_g

0x8a81,	// (0x0001366e) bg_sctrl_middle_pane_g1

0x8a89,	// (0x00013676) bg_sctrl_middle_pane_g2

0x8a91,	// (0x0001367e) bg_sctrl_middle_pane_g3

0x8a99,	// (0x00013686) bg_sctrl_middle_pane_g4

0x8aa1,	// (0x0001368e) bg_sctrl_middle_pane_g5

0x8aa9,	// (0x00013696) bg_sctrl_middle_pane_g6

0x8ab1,	// (0x0001369e) bg_sctrl_middle_pane_g7

0x8ab9,	// (0x000136a6) bg_sctrl_middle_pane_g8

0x0007,

0xfd27,	// (0x0001a914) bg_sctrl_middle_pane_g

0x8ac1,	// (0x000136ae) bg_sctrl_middle_pane_g8_copy1

0x8a81,	// (0x0001366e) bg_sctrl_sk_pane_g1

0x8a91,	// (0x0001367e) bg_sctrl_sk_pane_g2

0x8a89,	// (0x00013676) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0001a482) bg_sctrl_sk_pane_g

0x67c6,	// (0x000113b3) aid_size_touch_scroll_bar

0x8aa1,	// (0x0001368e) bg_sctrl_sk_pane_g4

0x8a99,	// (0x00013686) bg_sctrl_sk_pane_g5

0x8aa9,	// (0x00013696) bg_sctrl_sk_pane_g6

0x8ab1,	// (0x0001369e) bg_sctrl_sk_pane_g7

0x8ac1,	// (0x000136ae) bg_sctrl_sk_pane_g8

0x8ab9,	// (0x000136a6) bg_sctrl_sk_pane_g9

0x8077,	// (0x00012c64) popup_fep_china_hwr2_fs_candidate_window

0x136b,	// (0x0000bf58) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x136b,	// (0x0000bf58) popup_fep_china_hwr2_fs_control_window

0x54b8,	// (0x000100a5) sctrl_sk_top_pane_g2

0x0001,

0xfd1d,	// (0x0001a90a) sctrl_sk_top_pane_g

0x2f1d,	// (0x0000db0a) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2f1d,	// (0x0000db0a) aid_fep_china_hwr2_fs_cell

0x2f31,	// (0x0000db1e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2f31,	// (0x0000db1e) bg_popup_fep_shadow_pane_cp4

0x2f48,	// (0x0000db35) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2f48,	// (0x0000db35) bg_popup_fep_shadow_pane_cp5

0x2f5a,	// (0x0000db47) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2f5a,	// (0x0000db47) popup_fep_china_hwr2_fs_control_bar_grid

0x2f6e,	// (0x0000db5b) popup_fep_china_hwr2_fs_control_funtion_grid

0xcefb,	// (0x00017ae8) aid_fep_china_hwr2_fs_candi_cell

0x5f36,	// (0x00010b23) bg_popup_fep_shadow_pane_cp6

0xcf05,	// (0x00017af2) popup_fep_china_hwr2_fs_candidate_grid

0x2f76,	// (0x0000db63) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2f76,	// (0x0000db63) cell_fep_china_hwr2_fs_funtion_grid

0xb422,	// (0x0001600f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf27,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf27,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf35,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf35,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd38,	// (0x0001a925) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd38,	// (0x0001a925) cell_fep_china_hwr2_fs_funtion_grid_g

0x2f8e,	// (0x0000db7b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2f8e,	// (0x0000db7b) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2fa3,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2fa3,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3d,	// (0x0001a92a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3d,	// (0x0001a92a) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf7c,	// (0x00017b69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf84,	// (0x00017b71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf8c,	// (0x00017b79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd42,	// (0x0001a92f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf94,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf94,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid

0xcfad,	// (0x00017b9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcfb5,	// (0x00017ba2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb422,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb422,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5d,	// (0x0001a74a) cell_fep_china_hwr2_fs_candidate_grid_g

0xcfbd,	// (0x00017baa) cell_fep_china_hwr2_fs_candidate_grid_t1

0x865e,	// (0x0001324b) clock_nsta_pane_cp_24_ParamLimits

0x865e,	// (0x0001324b) clock_nsta_pane_cp_24

0x86dc,	// (0x000132c9) indicator_nsta_pane_cp_24_ParamLimits

0x86dc,	// (0x000132c9) indicator_nsta_pane_cp_24

0x9821,	// (0x0001440e) heading_pane_g1

0x0001,

0xf8fa,	// (0x0001a4e7) heading_pane_g

0xa35e,	// (0x00014f4b) grid_sct_catagory_button_pane

0xa390,	// (0x00014f7d) scroll_pane_cp5_ParamLimits

0xaf95,	// (0x00015b82) button_value_adjust_pane_cp5_ParamLimits

0xaf95,	// (0x00015b82) button_value_adjust_pane_cp5

0xb08d,	// (0x00015c7a) form2_midp_time_pane_ParamLimits

0xcfcb,	// (0x00017bb8) cell_sct_catagory_button_pane_ParamLimits

0xcfcb,	// (0x00017bb8) cell_sct_catagory_button_pane

0xb3e7,	// (0x00015fd4) bg_button_pane_cp01_ParamLimits

0xb3e7,	// (0x00015fd4) bg_button_pane_cp01

0xb422,	// (0x0001600f) cell_sct_catagory_button_pane_g1

0x18aa,	// (0x0000c497) popup_tb_extension_window

0x2fbf,	// (0x0000dbac) aid_size_cell_ext_ParamLimits

0x2fbf,	// (0x0000dbac) aid_size_cell_ext

0x6608,	// (0x000111f5) bg_tb_trans_pane_cp1_ParamLimits

0x6608,	// (0x000111f5) bg_tb_trans_pane_cp1

0x2fe5,	// (0x0000dbd2) grid_tb_ext_pane_ParamLimits

0x2fe5,	// (0x0000dbd2) grid_tb_ext_pane

0x3025,	// (0x0000dc12) cell_tb_ext_pane_ParamLimits

0x3025,	// (0x0000dc12) cell_tb_ext_pane

0x304d,	// (0x0000dc3a) cell_tb_ext_pane_g1_ParamLimits

0x304d,	// (0x0000dc3a) cell_tb_ext_pane_g1

0xd063,	// (0x00017c50) cell_tb_ext_pane_t1

0x62cd,	// (0x00010eba) list_highlight_pane_cp11_ParamLimits

0x62cd,	// (0x00010eba) list_highlight_pane_cp11

0x45e9,	// (0x0000f1d6) popup_uni_indicator_window_ParamLimits

0x45e9,	// (0x0000f1d6) popup_uni_indicator_window

0x6e03,	// (0x000119f0) bg_popup_sub_pane_cp14

0xd07e,	// (0x00017c6b) list_uniindi_pane

0xd08a,	// (0x00017c77) uniindi_top_pane

0x62cd,	// (0x00010eba) bg_uniindi_top_pane

0xd0a9,	// (0x00017c96) uniindi_top_pane_g1

0xd0bf,	// (0x00017cac) uniindi_top_pane_g2

0x0003,

0xfd49,	// (0x0001a936) uniindi_top_pane_g

0xd0e9,	// (0x00017cd6) uniindi_top_pane_t1

0xd113,	// (0x00017d00) list_single_uniindi_pane_ParamLimits

0xd113,	// (0x00017d00) list_single_uniindi_pane

0xb422,	// (0x0001600f) bg_uniindi_top_pane_g1

0xd125,	// (0x00017d12) list_single_uniindi_pane_g1

0xd138,	// (0x00017d25) list_single_uniindi_pane_t1

0x446d,	// (0x0000f05a) control_bg_pane

0xd15d,	// (0x00017d4a) bg_sctrl_sk_pane_cp1

0xd166,	// (0x00017d53) bg_sctrl_sk_pane_cp2

0xd16f,	// (0x00017d5c) control_bg_pane_g1

0xd178,	// (0x00017d65) control_bg_pane_g2

0x0001,

0xfd52,	// (0x0001a93f) control_bg_pane_g

0xadf3,	// (0x000159e0) cell_indicator_nsta_pane_g1_ParamLimits

0x254b,	// (0x0000d138) cell_indicator_nsta_pane_g2_ParamLimits

0xface,	// (0x0001a6bb) cell_indicator_nsta_pane_g_ParamLimits

0xb111,	// (0x00015cfe) form2_midp_time_pane_t1_ParamLimits

0xb4b6,	// (0x000160a3) main_idle_act4_pane_ParamLimits

0xb4b6,	// (0x000160a3) main_idle_act4_pane

0x18aa,	// (0x0000c497) popup_tb_extension_window_ParamLimits

0x300c,	// (0x0000dbf9) tb_ext_find_pane_ParamLimits

0x300c,	// (0x0000dbf9) tb_ext_find_pane

0xd181,	// (0x00017d6e) ai_gene_pane_1_cp1

0x7d92,	// (0x0001297f) ai_gene_pane_2_cp1

0xd189,	// (0x00017d76) list_single_idle_plugin_calendar_pane

0xd192,	// (0x00017d7f) list_single_idle_plugin_notification_pane

0xd19b,	// (0x00017d88) list_single_idle_plugin_player_pane

0x306a,	// (0x0000dc57) list_single_idle_plugin_shortcut_pane_ParamLimits

0x306a,	// (0x0000dc57) list_single_idle_plugin_shortcut_pane

0x3092,	// (0x0000dc7f) main_idle_act4_pane_t1

0x30a8,	// (0x0000dc95) main_idle_act4_pane_t2

0x0001,

0xfd57,	// (0x0001a944) main_idle_act4_pane_t

0x30c0,	// (0x0000dcad) middle_sk_idle_act4_pane_ParamLimits

0x30c0,	// (0x0000dcad) middle_sk_idle_act4_pane

0x30dc,	// (0x0000dcc9) popup_clock_digital_analogue_window_cp2

0x3103,	// (0x0000dcf0) shortcut_wheel_idle_act4_pane_ParamLimits

0x3103,	// (0x0000dcf0) shortcut_wheel_idle_act4_pane

0xb422,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g1

0xb422,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g2

0xb422,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g3

0xb422,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g4

0xb422,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g5

0xd22e,	// (0x00017e1b) shortcut_wheel_idle_act4_pane_g6

0xd236,	// (0x00017e23) shortcut_wheel_idle_act4_pane_g7

0xd23e,	// (0x00017e2b) shortcut_wheel_idle_act4_pane_g8

0xd246,	// (0x00017e33) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5c,	// (0x0001a949) shortcut_wheel_idle_act4_pane_g

0xe8bc,	// (0x000194a9) middle_sk_idle_act4_pane_g1_ParamLimits

0xe8bc,	// (0x000194a9) middle_sk_idle_act4_pane_g1

0x3180,	// (0x0000dd6d) middle_sk_idle_act4_pane_g2_ParamLimits

0x3180,	// (0x0000dd6d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7f,	// (0x0001a96c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7f,	// (0x0001a96c) middle_sk_idle_act4_pane_g

0x3198,	// (0x0000dd85) middle_sk_idle_act4_pane_t1_ParamLimits

0x3198,	// (0x0000dd85) middle_sk_idle_act4_pane_t1

0x31c7,	// (0x0000ddb4) grid_ai_shortcut_pane_ParamLimits

0x31c7,	// (0x0000ddb4) grid_ai_shortcut_pane

0x31e4,	// (0x0000ddd1) list_highlight_pane_cp16_ParamLimits

0x31e4,	// (0x0000ddd1) list_highlight_pane_cp16

0x31f1,	// (0x0000ddde) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x31f1,	// (0x0000ddde) list_single_idle_plugin_shortcut_pane_g1

0x31fd,	// (0x0000ddea) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x31fd,	// (0x0000ddea) list_single_idle_plugin_shortcut_pane_g2

0x3219,	// (0x0000de06) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x3219,	// (0x0000de06) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd84,	// (0x0001a971) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd84,	// (0x0001a971) list_single_idle_plugin_shortcut_pane_g

0x322e,	// (0x0000de1b) cell_ai_shortcut_pane_ParamLimits

0x322e,	// (0x0000de1b) cell_ai_shortcut_pane

0x3244,	// (0x0000de31) cell_ai_shortcut_pane_g1_ParamLimits

0x3244,	// (0x0000de31) cell_ai_shortcut_pane_g1

0xd181,	// (0x00017d6e) ai_gene_pane_1_cp2

0xd373,	// (0x00017f60) ai_gene_pane_2_cp2

0xd37b,	// (0x00017f68) list_highlight_pane_cp15

0xd384,	// (0x00017f71) list_single_idle_plugin_calendar_pane_g1

0xd37b,	// (0x00017f68) list_highlight_pane_cp17

0xd38c,	// (0x00017f79) list_single_idle_plugin_calendar_pane_g1_copy1

0xd394,	// (0x00017f81) list_single_idle_plugin_player_pane_g1

0xa5b7,	// (0x000151a4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8b,	// (0x0001a978) list_single_idle_plugin_player_pane_g

0xd39c,	// (0x00017f89) list_single_idle_plugin_player_pane_t1

0xd3aa,	// (0x00017f97) list_single_idle_plugin_player_pane_t2

0xd3b8,	// (0x00017fa5) list_single_idle_plugin_player_pane_t3

0xd3c6,	// (0x00017fb3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd90,	// (0x0001a97d) list_single_idle_plugin_player_pane_t

0xd3d4,	// (0x00017fc1) wait_bar_pane_cp15

0xd3dc,	// (0x00017fc9) grid_ai_notification_pane

0xa5b7,	// (0x000151a4) list_single_idle_plugin_notification_pane_g1

0x3266,	// (0x0000de53) cell_ai_notification_pane_ParamLimits

0x3266,	// (0x0000de53) cell_ai_notification_pane

0xd3f2,	// (0x00017fdf) cell_ai_notification_pane_g1

0xd3fa,	// (0x00017fe7) cell_ai_notification_pane_t1

0x3273,	// (0x0000de60) tb_ext_find_button_pane

0x327b,	// (0x0000de68) tb_ext_find_pane_g1

0x3283,	// (0x0000de70) tb_ext_find_pane_t1

0x75dc,	// (0x000121c9) tb_ext_find_button_pane_g1

0xd426,	// (0x00018013) tb_ext_find_button_pane_g2

0x0001,

0xfd99,	// (0x0001a986) tb_ext_find_button_pane_g

0x3092,	// (0x0000dc7f) main_idle_act4_pane_t1_ParamLimits

0x30a8,	// (0x0000dc95) main_idle_act4_pane_t2_ParamLimits

0xfd57,	// (0x0001a944) main_idle_act4_pane_t_ParamLimits

0x30dc,	// (0x0000dcc9) popup_clock_digital_analogue_window_cp2_ParamLimits

0x30f3,	// (0x0000dce0) sat_plugin_idle_act4_pane_ParamLimits

0x30f3,	// (0x0000dce0) sat_plugin_idle_act4_pane

0x3291,	// (0x0000de7e) sat_plugin_idle_act4_pane_t1_ParamLimits

0x3291,	// (0x0000de7e) sat_plugin_idle_act4_pane_t1

0x32a9,	// (0x0000de96) sat_plugin_idle_act4_pane_t2_ParamLimits

0x32a9,	// (0x0000de96) sat_plugin_idle_act4_pane_t2

0x32c1,	// (0x0000deae) sat_plugin_idle_act4_pane_t3_ParamLimits

0x32c1,	// (0x0000deae) sat_plugin_idle_act4_pane_t3

0x32d9,	// (0x0000dec6) sat_plugin_idle_act4_pane_t4_ParamLimits

0x32d9,	// (0x0000dec6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9e,	// (0x0001a98b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9e,	// (0x0001a98b) sat_plugin_idle_act4_pane_t

0x4532,	// (0x0000f11f) popup_battery_window_ParamLimits

0x4532,	// (0x0000f11f) popup_battery_window

0x62cd,	// (0x00010eba) bg_popup_sub_pane_cp25_ParamLimits

0x62cd,	// (0x00010eba) bg_popup_sub_pane_cp25

0xd47b,	// (0x00018068) popup_battery_window_g1_ParamLimits

0xd47b,	// (0x00018068) popup_battery_window_g1

0xd487,	// (0x00018074) popup_battery_window_t1_ParamLimits

0xd487,	// (0x00018074) popup_battery_window_t1

0xd499,	// (0x00018086) popup_battery_window_t2_ParamLimits

0xd499,	// (0x00018086) popup_battery_window_t2

0x0001,

0xfda7,	// (0x0001a994) popup_battery_window_t_ParamLimits

0xfda7,	// (0x0001a994) popup_battery_window_t

0x10b0,	// (0x0000bc9d) midp_canvas_pane_ParamLimits

0x110d,	// (0x0000bcfa) midp_keypad_pane_ParamLimits

0x110d,	// (0x0000bcfa) midp_keypad_pane

0x7fcf,	// (0x00012bbc) main_midp_pane_ParamLimits

0xae4d,	// (0x00015a3a) signal_pane_g2_cp_ParamLimits

0x32f1,	// (0x0000dede) aid_size_cell_midp_keypad_ParamLimits

0x32f1,	// (0x0000dede) aid_size_cell_midp_keypad

0x330f,	// (0x0000defc) midp_keyp_game_grid_pane_ParamLimits

0x330f,	// (0x0000defc) midp_keyp_game_grid_pane

0x3336,	// (0x0000df23) midp_keyp_rocker_pane_ParamLimits

0x3336,	// (0x0000df23) midp_keyp_rocker_pane

0x338f,	// (0x0000df7c) midp_keyp_sk_left_pane_ParamLimits

0x338f,	// (0x0000df7c) midp_keyp_sk_left_pane

0x33e3,	// (0x0000dfd0) midp_keyp_sk_right_pane_ParamLimits

0x33e3,	// (0x0000dfd0) midp_keyp_sk_right_pane

0x5f36,	// (0x00010b23) bg_button_pane_cp03

0x3437,	// (0x0000e024) midp_keyp_sk_left_pane_g1

0x5f36,	// (0x00010b23) bg_button_pane_cp04

0x3437,	// (0x0000e024) midp_keyp_sk_right_pane_g1

0xb422,	// (0x0001600f) midp_keyp_rocker_pane_g1

0x3440,	// (0x0000e02d) keyp_game_cell_pane_ParamLimits

0x3440,	// (0x0000e02d) keyp_game_cell_pane

0x5f36,	// (0x00010b23) bg_button_pane_cp02

0x3464,	// (0x0000e051) keyp_game_cell_pane_g1

0xe06d,	// (0x00018c5a) popup_fep_vkb2_window_ParamLimits

0xe06d,	// (0x00018c5a) popup_fep_vkb2_window

0xe4de,	// (0x000190cb) aid_size_cell_vkb2_ParamLimits

0xe4de,	// (0x000190cb) aid_size_cell_vkb2

0xe514,	// (0x00019101) popup_fep_vkb2_window_g1_ParamLimits

0xe514,	// (0x00019101) popup_fep_vkb2_window_g1

0xe55b,	// (0x00019148) vkb2_area_bottom_pane_ParamLimits

0xe55b,	// (0x00019148) vkb2_area_bottom_pane

0xe5af,	// (0x0001919c) vkb2_area_keypad_pane_ParamLimits

0xe5af,	// (0x0001919c) vkb2_area_keypad_pane

0xe5f7,	// (0x000191e4) vkb2_area_top_pane_ParamLimits

0xe5f7,	// (0x000191e4) vkb2_area_top_pane

0xe67d,	// (0x0001926a) vkb2_top_entry_pane_ParamLimits

0xe67d,	// (0x0001926a) vkb2_top_entry_pane

0xe6aa,	// (0x00019297) vkb2_top_grid_left_pane_ParamLimits

0xe6aa,	// (0x00019297) vkb2_top_grid_left_pane

0xe6ca,	// (0x000192b7) vkb2_top_grid_right_pane_ParamLimits

0xe6ca,	// (0x000192b7) vkb2_top_grid_right_pane

0x597c,	// (0x00010569) vkb2_cell_keypad_pane_ParamLimits

0x597c,	// (0x00010569) vkb2_cell_keypad_pane

0xe710,	// (0x000192fd) vkb2_area_bottom_grid_pane_ParamLimits

0xe710,	// (0x000192fd) vkb2_area_bottom_grid_pane

0xe73a,	// (0x00019327) vkb2_area_bottom_pane_g1_ParamLimits

0xe73a,	// (0x00019327) vkb2_area_bottom_pane_g1

0xe760,	// (0x0001934d) vkb2_area_bottom_pane_g2_ParamLimits

0xe760,	// (0x0001934d) vkb2_area_bottom_pane_g2

0xe791,	// (0x0001937e) vkb2_area_bottom_pane_g3_ParamLimits

0xe791,	// (0x0001937e) vkb2_area_bottom_pane_g3

0x0002,

0xfdac,	// (0x0001a999) vkb2_area_bottom_pane_g_ParamLimits

0xfdac,	// (0x0001a999) vkb2_area_bottom_pane_g

0x5b26,	// (0x00010713) vkb2_top_cell_left_pane_ParamLimits

0x5b26,	// (0x00010713) vkb2_top_cell_left_pane

0x378a,	// (0x0000e377) vkb2_top_entry_pane_g1_ParamLimits

0x378a,	// (0x0000e377) vkb2_top_entry_pane_g1

0x3798,	// (0x0000e385) vkb2_top_entry_pane_t1_ParamLimits

0x3798,	// (0x0000e385) vkb2_top_entry_pane_t1

0xe8d2,	// (0x000194bf) vkb2_top_entry_pane_t2_ParamLimits

0xe8d2,	// (0x000194bf) vkb2_top_entry_pane_t2

0xe904,	// (0x000194f1) vkb2_top_entry_pane_t3_ParamLimits

0xe904,	// (0x000194f1) vkb2_top_entry_pane_t3

0x0002,

0xfdb3,	// (0x0001a9a0) vkb2_top_entry_pane_t_ParamLimits

0xfdb3,	// (0x0001a9a0) vkb2_top_entry_pane_t

0xe7fb,	// (0x000193e8) vkb2_top_grid_right_pane_g1_ParamLimits

0xe7fb,	// (0x000193e8) vkb2_top_grid_right_pane_g1

0x5b89,	// (0x00010776) vkb2_top_grid_right_pane_g2_ParamLimits

0x5b89,	// (0x00010776) vkb2_top_grid_right_pane_g2

0x5ba1,	// (0x0001078e) vkb2_top_grid_right_pane_g3_ParamLimits

0x5ba1,	// (0x0001078e) vkb2_top_grid_right_pane_g3

0xe811,	// (0x000193fe) vkb2_top_grid_right_pane_g4_ParamLimits

0xe811,	// (0x000193fe) vkb2_top_grid_right_pane_g4

0x0003,

0xfdba,	// (0x0001a9a7) vkb2_top_grid_right_pane_g_ParamLimits

0xfdba,	// (0x0001a9a7) vkb2_top_grid_right_pane_g

0x5bcf,	// (0x000107bc) vkb2_top_cell_left_pane_g1

0x5be6,	// (0x000107d3) vkb2_cell_keypad_pane_g1_ParamLimits

0x5be6,	// (0x000107d3) vkb2_cell_keypad_pane_g1

0xe91a,	// (0x00019507) vkb2_cell_keypad_pane_t1_ParamLimits

0xe91a,	// (0x00019507) vkb2_cell_keypad_pane_t1

0x5bf4,	// (0x000107e1) vkb2_cell_bottom_grid_pane_ParamLimits

0x5bf4,	// (0x000107e1) vkb2_cell_bottom_grid_pane

0x5c2d,	// (0x0001081a) vkb2_cell_bottom_grid_pane_g1

0x3124,	// (0x0000dd11) aid_call2_pane_cp02

0x312c,	// (0x0000dd19) aid_call_pane_cp02

0x3134,	// (0x0000dd21) clock_digital_number_pane_cp10

0x313c,	// (0x0000dd29) clock_digital_number_pane_cp11

0x3144,	// (0x0000dd31) clock_digital_number_pane_cp12

0x314c,	// (0x0000dd39) clock_digital_number_pane_cp13

0x3154,	// (0x0000dd41) clock_digital_separator_pane_cp10

0x75dc,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g1

0x75dc,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g2

0x315c,	// (0x0000dd49) popup_clock_digital_analogue_window_cp2_g3

0x75dc,	// (0x000121c9) popup_clock_digital_analogue_window_cp2_g4

0x315c,	// (0x0000dd49) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6f,	// (0x0001a95c) popup_clock_digital_analogue_window_cp2_g

0x3164,	// (0x0000dd51) popup_clock_digital_analogue_window_cp2_t1

0x3172,	// (0x0000dd5f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7a,	// (0x0001a967) popup_clock_digital_analogue_window_cp2_t

0xb422,	// (0x0001600f) clock_digital_number_pane_cp10_g1

0xb422,	// (0x0001600f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001a74a) clock_digital_number_pane_cp10_g

0xb422,	// (0x0001600f) clock_digital_separator_pane_cp10_g1

0xb422,	// (0x0001600f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001a74a) clock_digital_separator_pane_cp10_g

0xd0cb,	// (0x00017cb8) uniindi_top_pane_g3

0xd0dc,	// (0x00017cc9) uniindi_top_pane_g4

0x5a07,	// (0x000105f4) vkb2_row_keypad_pane_ParamLimits

0x5a07,	// (0x000105f4) vkb2_row_keypad_pane

0x5c4d,	// (0x0001083a) vkb2_cell_t_keypad_pane_ParamLimits

0x5c4d,	// (0x0001083a) vkb2_cell_t_keypad_pane

0x5c5d,	// (0x0001084a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5c5d,	// (0x0001084a) vkb2_cell_t_keypad_pane_cp08

0x5c70,	// (0x0001085d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5c70,	// (0x0001085d) vkb2_cell_t_keypad_pane_cp09

0x5c84,	// (0x00010871) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5c84,	// (0x00010871) vkb2_cell_t_keypad_pane_cp01

0x5c95,	// (0x00010882) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5c95,	// (0x00010882) vkb2_cell_t_keypad_pane_cp02

0x5ca6,	// (0x00010893) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5ca6,	// (0x00010893) vkb2_cell_t_keypad_pane_cp03

0x5cb7,	// (0x000108a4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5cb7,	// (0x000108a4) vkb2_cell_t_keypad_pane_cp04

0x5cc8,	// (0x000108b5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5cc8,	// (0x000108b5) vkb2_cell_t_keypad_pane_cp05

0x5cd9,	// (0x000108c6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5cd9,	// (0x000108c6) vkb2_cell_t_keypad_pane_cp06

0x5cea,	// (0x000108d7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5cea,	// (0x000108d7) vkb2_cell_t_keypad_pane_cp07

0x5cfb,	// (0x000108e8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5cfb,	// (0x000108e8) vkb2_cell_t_keypad_pane_cp10

0x54b8,	// (0x000100a5) vkb2_cell_t_keypad_pane_g1

0xe931,	// (0x0001951e) vkb2_cell_t_keypad_pane_t1

0x446d,	// (0x0000f05a) popup_grid_graphic2_window

0x37fd,	// (0x0000e3ea) aid_size_cell_graphic2_ParamLimits

0x37fd,	// (0x0000e3ea) aid_size_cell_graphic2

0x91a7,	// (0x00013d94) bg_popup_window_pane_cp21_ParamLimits

0x91a7,	// (0x00013d94) bg_popup_window_pane_cp21

0x382f,	// (0x0000e41c) graphic2_pages_pane_ParamLimits

0x382f,	// (0x0000e41c) graphic2_pages_pane

0x3885,	// (0x0000e472) grid_graphic2_control_pane_ParamLimits

0x3885,	// (0x0000e472) grid_graphic2_control_pane

0x38b9,	// (0x0000e4a6) grid_graphic2_pane_ParamLimits

0x38b9,	// (0x0000e4a6) grid_graphic2_pane

0x392c,	// (0x0000e519) cell_graphic2_pane

0x5f36,	// (0x00010b23) main_comp_mode_pane

0xc8cb,	// (0x000174b8) list_ai3_gene_pane_ParamLimits

0x2dfa,	// (0x0000d9e7) bg_popup_window_pane_cp19_ParamLimits

0xcd1d,	// (0x0001790a) bg_touch_area_indi_pane_ParamLimits

0xcd1d,	// (0x0001790a) bg_touch_area_indi_pane

0xcd33,	// (0x00017920) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd33,	// (0x00017920) bg_touch_area_indi_pane_cp01

0xcd49,	// (0x00017936) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd49,	// (0x00017936) bg_touch_area_indi_pane_cp02

0xcd61,	// (0x0001794e) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd61,	// (0x0001794e) bg_touch_area_indi_pane_cp03

0xcd7b,	// (0x00017968) popup_slider_window_g1_ParamLimits

0xcd97,	// (0x00017984) popup_slider_window_g2_ParamLimits

0xcdb3,	// (0x000179a0) popup_slider_window_g3_ParamLimits

0xfd04,	// (0x0001a8f1) popup_slider_window_g_ParamLimits

0xce0f,	// (0x000179fc) popup_slider_window_t1_ParamLimits

0xce83,	// (0x00017a70) small_volume_slider_vertical_pane_ParamLimits

0x392c,	// (0x0000e519) cell_graphic2_pane_ParamLimits

0x3987,	// (0x0000e574) bg_button_pane_cp10_ParamLimits

0x3987,	// (0x0000e574) bg_button_pane_cp10

0x399a,	// (0x0000e587) bg_button_pane_cp11_ParamLimits

0x399a,	// (0x0000e587) bg_button_pane_cp11

0x39ad,	// (0x0000e59a) graphic2_pages_pane_g1_ParamLimits

0x39ad,	// (0x0000e59a) graphic2_pages_pane_g1

0x39c8,	// (0x0000e5b5) graphic2_pages_pane_g2_ParamLimits

0x39c8,	// (0x0000e5b5) graphic2_pages_pane_g2

0x0001,

0xfdc8,	// (0x0001a9b5) graphic2_pages_pane_g_ParamLimits

0xfdc8,	// (0x0001a9b5) graphic2_pages_pane_g

0x39e0,	// (0x0000e5cd) graphic2_pages_pane_t1_ParamLimits

0x39e0,	// (0x0000e5cd) graphic2_pages_pane_t1

0x39f8,	// (0x0000e5e5) cell_graphic2_control_pane_ParamLimits

0x39f8,	// (0x0000e5e5) cell_graphic2_control_pane

0x3a12,	// (0x0000e5ff) cell_graphic2_pane_g1_ParamLimits

0x3a12,	// (0x0000e5ff) cell_graphic2_pane_g1

0xe943,	// (0x00019530) cell_graphic2_pane_g2_ParamLimits

0xe943,	// (0x00019530) cell_graphic2_pane_g2

0x3a1f,	// (0x0000e60c) cell_graphic2_pane_g3_ParamLimits

0x3a1f,	// (0x0000e60c) cell_graphic2_pane_g3

0xe950,	// (0x0001953d) cell_graphic2_pane_g4_ParamLimits

0xe950,	// (0x0001953d) cell_graphic2_pane_g4

0x3a2c,	// (0x0000e619) cell_graphic2_pane_g5_ParamLimits

0x3a2c,	// (0x0000e619) cell_graphic2_pane_g5

0x0004,

0xfdcd,	// (0x0001a9ba) cell_graphic2_pane_g_ParamLimits

0xfdcd,	// (0x0001a9ba) cell_graphic2_pane_g

0x3a4c,	// (0x0000e639) cell_graphic2_pane_t1_ParamLimits

0x3a4c,	// (0x0000e639) cell_graphic2_pane_t1

0x9815,	// (0x00014402) grid_highlight_pane_cp11_ParamLimits

0x9815,	// (0x00014402) grid_highlight_pane_cp11

0x6e03,	// (0x000119f0) bg_button_pane_cp05

0x3a63,	// (0x0000e650) cell_graphic2_control_pane_g1

0xb422,	// (0x0001600f) bg_touch_area_indi_pane_g1

0xe95d,	// (0x0001954a) aid_cmod_rocker_key_size

0xe967,	// (0x00019554) aid_cmode_itu_key_size

0xe971,	// (0x0001955e) main_cmode_video_pane

0xe97b,	// (0x00019568) main_comp_mode_itu_pane

0xe987,	// (0x00019574) main_comp_mode_rocker_pane

0xe993,	// (0x00019580) cell_cmode_rocker_pane_ParamLimits

0xe993,	// (0x00019580) cell_cmode_rocker_pane

0xe9a5,	// (0x00019592) cell_cmode_itu_pane_ParamLimits

0xe9a5,	// (0x00019592) cell_cmode_itu_pane

0x6e03,	// (0x000119f0) bg_button_pane_cp06_ParamLimits

0x6e03,	// (0x000119f0) bg_button_pane_cp06

0xb6c9,	// (0x000162b6) cell_cmode_rocker_pane_g1_ParamLimits

0xb6c9,	// (0x000162b6) cell_cmode_rocker_pane_g1

0xcf27,	// (0x00017b14) cell_cmode_rocker_pane_g2_ParamLimits

0xcf27,	// (0x00017b14) cell_cmode_rocker_pane_g2

0x0001,

0xfdd8,	// (0x0001a9c5) cell_cmode_rocker_pane_g_ParamLimits

0xfdd8,	// (0x0001a9c5) cell_cmode_rocker_pane_g

0x5f36,	// (0x00010b23) bg_button_pane_cp07

0xe9ba,	// (0x000195a7) cell_cmode_itu_pane_g1

0xe9c3,	// (0x000195b0) cell_cmode_itu_pane_t1

0xe9d1,	// (0x000195be) cell_cmode_itu_pane_t2

0x0001,

0xfddd,	// (0x0001a9ca) cell_cmode_itu_pane_t

0xd14d,	// (0x00017d3a) aid_touch_ctrl_left

0xd155,	// (0x00017d42) aid_touch_ctrl_right

0x5f36,	// (0x00010b23) compa_mode_pane

0x3a70,	// (0x0000e65d) aid_cmod_rocker_key_size_cp

0x3a7a,	// (0x0000e667) aid_cmode_itu_key_size_cp

0xe9df,	// (0x000195cc) compa_mode_pane_g1

0xe9e7,	// (0x000195d4) compa_mode_pane_g2

0xe9ef,	// (0x000195dc) compa_mode_pane_g3

0x0002,

0xfde2,	// (0x0001a9cf) compa_mode_pane_g

0x3a84,	// (0x0000e671) main_comp_mode_itu_pane_cp

0x3a8c,	// (0x0000e679) main_comp_mode_rocker_pane_cp

0x3a94,	// (0x0000e681) cell_cmode_itu_pane_cp_ParamLimits

0x3a94,	// (0x0000e681) cell_cmode_itu_pane_cp

0x3aa9,	// (0x0000e696) cell_cmode_rocker_pane_cp_ParamLimits

0x3aa9,	// (0x0000e696) cell_cmode_rocker_pane_cp

0x6e03,	// (0x000119f0) bg_button_pane_cp06_cp_ParamLimits

0x6e03,	// (0x000119f0) bg_button_pane_cp06_cp

0xb6c9,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb6c9,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp

0xb422,	// (0x0001600f) cell_cmode_rocker_pane_g2_cp

0x5f36,	// (0x00010b23) bg_button_pane_cp07_cp

0x3abb,	// (0x0000e6a8) cell_cmode_itu_pane_g1_cp

0x3ac4,	// (0x0000e6b1) cell_cmode_itu_pane_t1_cp

0x3ac4,	// (0x0000e6b1) cell_cmode_itu_pane_t2_cp

0x2353,	// (0x0000cf40) settings_code_pane_cp2

0x602a,	// (0x00010c17) bg_popup_window_pane_cp3_ParamLimits

0x649b,	// (0x00011088) heading_pane_cp3_ParamLimits

0x64a7,	// (0x00011094) listscroll_popup_graphic_pane_ParamLimits

0x5261,	// (0x0000fe4e) fep_hwr_aid_pane_ParamLimits

0x56d1,	// (0x000102be) aid_touch_sctrl_top_ParamLimits

0x56ec,	// (0x000102d9) sctrl_sk_top_pane_g1_ParamLimits

0x54b8,	// (0x000100a5) sctrl_sk_top_pane_g2_ParamLimits

0xfd1d,	// (0x0001a90a) sctrl_sk_top_pane_g_ParamLimits

0x56f9,	// (0x000102e6) sctrl_sk_top_pane_t1_ParamLimits

0x56d1,	// (0x000102be) aid_touch_sctrl_bottom_ParamLimits

0x56f9,	// (0x000102e6) sctrl_sk_bottom_pane_t1_ParamLimits

0xd097,	// (0x00017c84) aid_area_touch_clock

0xe63f,	// (0x0001922c) aid_vkb2_area_top_pane_cell_ParamLimits

0xe63f,	// (0x0001922c) aid_vkb2_area_top_pane_cell

0xe6ea,	// (0x000192d7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe6ea,	// (0x000192d7) aid_vkb2_area_bottom_pane_cell

0xe8ca,	// (0x000194b7) popup_char_count_window

0xe9f7,	// (0x000195e4) popup_char_count_window_g1

0xea00,	// (0x000195ed) popup_char_count_window_g2

0xea09,	// (0x000195f6) popup_char_count_window_g3

0x0002,

0xfde9,	// (0x0001a9d6) popup_char_count_window_g

0xea12,	// (0x000195ff) popup_char_count_window_t1

0x57ac,	// (0x00010399) popup_fep_char_preview_window_ParamLimits

0x57ac,	// (0x00010399) popup_fep_char_preview_window

0xe65f,	// (0x0001924c) vkb2_top_candi_pane_ParamLimits

0xe65f,	// (0x0001924c) vkb2_top_candi_pane

0x3ad2,	// (0x0000e6bf) cell_vkb2_top_candi_pane_ParamLimits

0x3ad2,	// (0x0000e6bf) cell_vkb2_top_candi_pane

0x5d10,	// (0x000108fd) bg_popup_fep_char_preview_window_ParamLimits

0x5d10,	// (0x000108fd) bg_popup_fep_char_preview_window

0x5d1e,	// (0x0001090b) popup_fep_char_preview_window_t1_ParamLimits

0x5d1e,	// (0x0001090b) popup_fep_char_preview_window_t1

0xea20,	// (0x0001960d) bg_popup_fep_char_preview_window_g1

0xea28,	// (0x00019615) bg_popup_fep_char_preview_window_g2

0xea30,	// (0x0001961d) bg_popup_fep_char_preview_window_g3

0xea38,	// (0x00019625) bg_popup_fep_char_preview_window_g4

0xea40,	// (0x0001962d) bg_popup_fep_char_preview_window_g5

0x5d58,	// (0x00010945) bg_popup_fep_char_preview_window_g6

0xea48,	// (0x00019635) bg_popup_fep_char_preview_window_g7

0xea50,	// (0x0001963d) bg_popup_fep_char_preview_window_g8

0xea58,	// (0x00019645) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf0,	// (0x0001a9dd) bg_popup_fep_char_preview_window_g

0x54b8,	// (0x000100a5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x54b8,	// (0x000100a5) cell_vkb2_top_candi_pane_g1

0x54c6,	// (0x000100b3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x54c6,	// (0x000100b3) cell_vkb2_top_candi_pane_g2

0xe89b,	// (0x00019488) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe89b,	// (0x00019488) cell_vkb2_top_candi_pane_g3

0x5d60,	// (0x0001094d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5d60,	// (0x0001094d) cell_vkb2_top_candi_pane_g4

0xbc9b,	// (0x00016888) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbc9b,	// (0x00016888) cell_vkb2_top_candi_pane_g5

0x5d81,	// (0x0001096e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5d81,	// (0x0001096e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe03,	// (0x0001a9f0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe03,	// (0x0001a9f0) cell_vkb2_top_candi_pane_g

0x5d8f,	// (0x0001097c) cell_vkb2_top_candi_pane_t1

0x5070,	// (0x0000fc5d) aid_size_touch_slider_mark_ParamLimits

0x5070,	// (0x0000fc5d) aid_size_touch_slider_mark

0x386b,	// (0x0000e458) grid_graphic2_catg_pane_ParamLimits

0x386b,	// (0x0000e458) grid_graphic2_catg_pane

0x38ff,	// (0x0000e4ec) popup_grid_graphic2_window_t1_ParamLimits

0x38ff,	// (0x0000e4ec) popup_grid_graphic2_window_t1

0x3915,	// (0x0000e502) popup_grid_graphic2_window_t2_ParamLimits

0x3915,	// (0x0000e502) popup_grid_graphic2_window_t2

0x0001,

0xfdc3,	// (0x0001a9b0) popup_grid_graphic2_window_t_ParamLimits

0xfdc3,	// (0x0001a9b0) popup_grid_graphic2_window_t

0x6e03,	// (0x000119f0) bg_button_pane_cp05_ParamLimits

0x3a63,	// (0x0000e650) cell_graphic2_control_pane_g1_ParamLimits

0x3b38,	// (0x0000e725) cell_graphic2_catg_pane_ParamLimits

0x3b38,	// (0x0000e725) cell_graphic2_catg_pane

0x5f36,	// (0x00010b23) bg_button_pane_cp12

0x3b4a,	// (0x0000e737) cell_graphic2_catg_pane_g1

0xd063,	// (0x00017c50) cell_tb_ext_pane_t1_ParamLimits

0x5b46,	// (0x00010733) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5b46,	// (0x00010733) vkb2_top_cell_right_narrow_pane

0x5b5e,	// (0x0001074b) vkb2_top_cell_right_wide_pane_ParamLimits

0x5b5e,	// (0x0001074b) vkb2_top_cell_right_wide_pane

0x5253,	// (0x0000fe40) bg_vkb2_func_pane_ParamLimits

0x5253,	// (0x0000fe40) bg_vkb2_func_pane

0x5bcf,	// (0x000107bc) vkb2_top_cell_left_pane_g1_ParamLimits

0x5253,	// (0x0000fe40) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5253,	// (0x0000fe40) bg_vkb2_fuc_pane_cp03

0x5c2d,	// (0x0001081a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8a89,	// (0x00013676) bg_vkb2_func_pane_g1

0x8a91,	// (0x0001367e) bg_vkb2_func_pane_g2

0x8aa1,	// (0x0001368e) bg_vkb2_func_pane_g3

0x8a99,	// (0x00013686) bg_vkb2_func_pane_g4

0x8aa9,	// (0x00013696) bg_vkb2_func_pane_g5

0x8ab1,	// (0x0001369e) bg_vkb2_func_pane_g6

0x8ab9,	// (0x000136a6) bg_vkb2_func_pane_g7

0x8ac1,	// (0x000136ae) bg_vkb2_func_pane_g8

0x8a81,	// (0x0001366e) bg_vkb2_func_pane_g9

0x0008,

0xfe10,	// (0x0001a9fd) bg_vkb2_func_pane_g

0x5253,	// (0x0000fe40) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5253,	// (0x0000fe40) bg_vkb2_fuc_pane_cp01

0x5bcf,	// (0x000107bc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5bcf,	// (0x000107bc) vkb2_top_cell_right_wide_pane_g1

0x5253,	// (0x0000fe40) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5253,	// (0x0000fe40) bg_vkb2_fuc_pane_cp02

0x5c2d,	// (0x0001081a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5c2d,	// (0x0001081a) vkb2_top_cell_right_narrow_pane_g1

0x2d34,	// (0x0000d921) aid_touch_area_decrease_ParamLimits

0x2d34,	// (0x0000d921) aid_touch_area_decrease

0x2d6e,	// (0x0000d95b) aid_touch_area_increase_ParamLimits

0x2d6e,	// (0x0000d95b) aid_touch_area_increase

0x2d96,	// (0x0000d983) aid_touch_area_mute_ParamLimits

0x2d96,	// (0x0000d983) aid_touch_area_mute

0x2dc6,	// (0x0000d9b3) aid_touch_area_slider_ParamLimits

0x2dc6,	// (0x0000d9b3) aid_touch_area_slider

0x2e06,	// (0x0000d9f3) popup_slider_window_g4_ParamLimits

0x2e06,	// (0x0000d9f3) popup_slider_window_g4

0x2e2e,	// (0x0000da1b) popup_slider_window_g5_ParamLimits

0x2e2e,	// (0x0000da1b) popup_slider_window_g5

0x2e62,	// (0x0000da4f) popup_slider_window_g6_ParamLimits

0x2e62,	// (0x0000da4f) popup_slider_window_g6

0xce3d,	// (0x00017a2a) popup_slider_window_t2_ParamLimits

0xce3d,	// (0x00017a2a) popup_slider_window_t2

0x0001,

0xfd11,	// (0x0001a8fe) popup_slider_window_t_ParamLimits

0xfd11,	// (0x0001a8fe) popup_slider_window_t

0x2e7e,	// (0x0000da6b) slider_pane_ParamLimits

0x2e7e,	// (0x0000da6b) slider_pane

0xea60,	// (0x0001964d) slider_pane_g1_ParamLimits

0xea60,	// (0x0001964d) slider_pane_g1

0xea74,	// (0x00019661) slider_pane_g2_ParamLimits

0xea74,	// (0x00019661) slider_pane_g2

0xea8a,	// (0x00019677) slider_pane_g3_ParamLimits

0xea8a,	// (0x00019677) slider_pane_g3

0x0003,

0xfe23,	// (0x0001aa10) slider_pane_g_ParamLimits

0xfe23,	// (0x0001aa10) slider_pane_g

0x18f2,	// (0x0000c4df) popup_tb_float_extension_window_ParamLimits

0x18f2,	// (0x0000c4df) popup_tb_float_extension_window

0xeab6,	// (0x000196a3) aid_size_cell_tb_float_ext

0x5f36,	// (0x00010b23) bg_popup_sub_window_cp28

0xeac2,	// (0x000196af) grid_tb_float_ext_pane

0xeacc,	// (0x000196b9) cell_tb_float_ext_pane_ParamLimits

0xeacc,	// (0x000196b9) cell_tb_float_ext_pane

0xeae6,	// (0x000196d3) cell_tb_float_ext_pane_g1

0xeaef,	// (0x000196dc) grid_highlight_pane_cp12

0xe451,	// (0x0001903e) cell_last_hwr_side_pane_ParamLimits

0xe451,	// (0x0001903e) cell_last_hwr_side_pane

0xb422,	// (0x0001600f) cell_last_hwr_side_pane_g1

0xeaf8,	// (0x000196e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe2c,	// (0x0001aa19) cell_last_hwr_side_pane_g

0xe7c6,	// (0x000193b3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe7c6,	// (0x000193b3) vkb2_area_bottom_space_btn_pane

0x54b8,	// (0x000100a5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe931,	// (0x0001951e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5d8f,	// (0x0001097c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5dae,	// (0x0001099b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5dae,	// (0x0001099b) vkb2_area_bottom_space_btn_pane_g1

0x5de8,	// (0x000109d5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5de8,	// (0x000109d5) vkb2_area_bottom_space_btn_pane_g2

0x5e1e,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5e1e,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe31,	// (0x0001aa1e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe31,	// (0x0001aa1e) vkb2_area_bottom_space_btn_pane_g

0x5316,	// (0x0000ff03) cel_fep_hwr_func_pane_ParamLimits

0x5316,	// (0x0000ff03) cel_fep_hwr_func_pane

0xe426,	// (0x00019013) cell_hwr_side_button_pane_ParamLimits

0xe426,	// (0x00019013) cell_hwr_side_button_pane

0xd097,	// (0x00017c84) aid_area_touch_clock_ParamLimits

0x62cd,	// (0x00010eba) bg_uniindi_top_pane_ParamLimits

0xd0a9,	// (0x00017c96) uniindi_top_pane_g1_ParamLimits

0xd0bf,	// (0x00017cac) uniindi_top_pane_g2_ParamLimits

0xd0cb,	// (0x00017cb8) uniindi_top_pane_g3_ParamLimits

0xd0dc,	// (0x00017cc9) uniindi_top_pane_g4_ParamLimits

0xfd49,	// (0x0001a936) uniindi_top_pane_g_ParamLimits

0xd0e9,	// (0x00017cd6) uniindi_top_pane_t1_ParamLimits

0x62cd,	// (0x00010eba) bg_vkb2_func_pane_cp01_ParamLimits

0x62cd,	// (0x00010eba) bg_vkb2_func_pane_cp01

0xeb01,	// (0x000196ee) cel_fep_hwr_func_pane_g1_ParamLimits

0xeb01,	// (0x000196ee) cel_fep_hwr_func_pane_g1

0x62cd,	// (0x00010eba) bg_vkb2_func_pane_cp02_ParamLimits

0x62cd,	// (0x00010eba) bg_vkb2_func_pane_cp02

0xeb01,	// (0x000196ee) cell_hwr_side_button_pane_g1_ParamLimits

0xeb01,	// (0x000196ee) cell_hwr_side_button_pane_g1

0x88e2,	// (0x000134cf) status_pane_g4_ParamLimits

0x88e2,	// (0x000134cf) status_pane_g4

0x88fa,	// (0x000134e7) status_pane_t1

0xb124,	// (0x00015d11) form2_midp_gauge_slider_cont_pane

0xb12c,	// (0x00015d19) form2_midp_gauge_slider_pane_t1_ParamLimits

0x263f,	// (0x0000d22c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2651,	// (0x0000d23e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb10,	// (0x0001a6fd) form2_midp_gauge_slider_pane_t_ParamLimits

0xb162,	// (0x00015d4f) form2_midp_slider_pane_ParamLimits

0x576c,	// (0x00010359) aid_size_cell_func_vkb2_ParamLimits

0x576c,	// (0x00010359) aid_size_cell_func_vkb2

0xeaa2,	// (0x0001968f) slider_pane_g4_ParamLimits

0xeaa2,	// (0x0001968f) slider_pane_g4

0xe827,	// (0x00019414) form2_midp_gauge_slider_pane_t2_cp01

0xe835,	// (0x00019422) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe835,	// (0x00019422) form2_midp_gauge_slider_pane_t3_cp01

0x5e93,	// (0x00010a80) form2_midp_slider_pane_cp01

0x5f36,	// (0x00010b23) navi_smil_pane

0xeb31,	// (0x0001971e) navi_smil_pane_g1

0xeb39,	// (0x00019726) navi_smil_pane_t1

0xeb0f,	// (0x000196fc) form2_midp_slider_pane_g1

0xeb18,	// (0x00019705) form2_midp_slider_pane_g2

0xeb20,	// (0x0001970d) form2_midp_slider_pane_g3

0xeb0f,	// (0x000196fc) form2_midp_slider_pane_g4

0x3b7e,	// (0x0000e76b) form2_midp_slider_pane_g5

0x0004,

0xfe3a,	// (0x0001aa27) form2_midp_slider_pane_g

0x5e58,	// (0x00010a45) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5e58,	// (0x00010a45) vkb2_area_bottom_space_btn_pane_g4

0x1ace,	// (0x0000c6bb) lc0_navi_pane_ParamLimits

0x1ace,	// (0x0000c6bb) lc0_navi_pane

0x1b38,	// (0x0000c725) lc0_stat_indi_pane_ParamLimits

0x1b38,	// (0x0000c725) lc0_stat_indi_pane

0x1b4d,	// (0x0000c73a) ls0_title_pane_ParamLimits

0x1b4d,	// (0x0000c73a) ls0_title_pane

0x6e03,	// (0x000119f0) bg_popup_sub_pane_cp14_ParamLimits

0xd07e,	// (0x00017c6b) list_uniindi_pane_ParamLimits

0xd08a,	// (0x00017c77) uniindi_top_pane_ParamLimits

0xd125,	// (0x00017d12) list_single_uniindi_pane_g1_ParamLimits

0xd138,	// (0x00017d25) list_single_uniindi_pane_t1_ParamLimits

0xe852,	// (0x0001943f) lc0_stat_clock_pane_ParamLimits

0xe852,	// (0x0001943f) lc0_stat_clock_pane

0x3ba1,	// (0x0000e78e) lc0_stat_indi_pane_g1_ParamLimits

0x3ba1,	// (0x0000e78e) lc0_stat_indi_pane_g1

0x3b94,	// (0x0000e781) lc0_stat_indi_pane_g2_ParamLimits

0x3b94,	// (0x0000e781) lc0_stat_indi_pane_g2

0x0001,

0xfe45,	// (0x0001aa32) lc0_stat_indi_pane_g_ParamLimits

0xfe45,	// (0x0001aa32) lc0_stat_indi_pane_g

0xe85f,	// (0x0001944c) lc0_uni_indicator_pane_ParamLimits

0xe85f,	// (0x0001944c) lc0_uni_indicator_pane

0x3bbb,	// (0x0000e7a8) ls0_title_pane_g1_ParamLimits

0x3bbb,	// (0x0000e7a8) ls0_title_pane_g1

0x3bcf,	// (0x0000e7bc) ls0_title_pane_t1_ParamLimits

0x3bcf,	// (0x0000e7bc) ls0_title_pane_t1

0xe86c,	// (0x00019459) lc0_uni_indicator_pane_g1_ParamLimits

0xe86c,	// (0x00019459) lc0_uni_indicator_pane_g1

0xeb47,	// (0x00019734) lc0_stat_clock_pane_t1

0x5f36,	// (0x00010b23) main_ai5_pane

0xeb55,	// (0x00019742) ai5_sk_pane_ParamLimits

0xeb55,	// (0x00019742) ai5_sk_pane

0x3c2c,	// (0x0000e819) cell_ai5_widget_pane_ParamLimits

0x3c2c,	// (0x0000e819) cell_ai5_widget_pane

0xeb62,	// (0x0001974f) aid_size_cell_widget_grid

0xeb74,	// (0x00019761) bg_ai5_widget_pane_ParamLimits

0xeb74,	// (0x00019761) bg_ai5_widget_pane

0x3cb5,	// (0x0000e8a2) cell_ai5_widget_pane_g2

0x3cc5,	// (0x0000e8b2) cell_ai5_widget_pane_g3

0x3cd9,	// (0x0000e8c6) cell_ai5_widget_pane_g4

0x3ce5,	// (0x0000e8d2) cell_ai5_widget_pane_g5

0x3cf1,	// (0x0000e8de) cell_ai5_widget_pane_g6

0x3cfd,	// (0x0000e8ea) cell_ai5_widget_pane_g7

0x3d45,	// (0x0000e932) cell_ai5_widget_pane_t1_ParamLimits

0x3d45,	// (0x0000e932) cell_ai5_widget_pane_t1

0x3d62,	// (0x0000e94f) cell_ai5_widget_pane_t2_ParamLimits

0x3d62,	// (0x0000e94f) cell_ai5_widget_pane_t2

0x3d7a,	// (0x0000e967) cell_ai5_widget_pane_t3_ParamLimits

0x3d7a,	// (0x0000e967) cell_ai5_widget_pane_t3

0x3d92,	// (0x0000e97f) cell_ai5_widget_pane_t4_ParamLimits

0x3d92,	// (0x0000e97f) cell_ai5_widget_pane_t4

0x3dac,	// (0x0000e999) cell_ai5_widget_pane_t5_ParamLimits

0x3dac,	// (0x0000e999) cell_ai5_widget_pane_t5

0xeb80,	// (0x0001976d) cell_ai5_widget_pane_t6_ParamLimits

0xeb80,	// (0x0001976d) cell_ai5_widget_pane_t6

0xeb92,	// (0x0001977f) cell_ai5_widget_pane_t7_ParamLimits

0xeb92,	// (0x0001977f) cell_ai5_widget_pane_t7

0x3dcb,	// (0x0000e9b8) cell_ai5_widget_pane_t8_ParamLimits

0x3dcb,	// (0x0000e9b8) cell_ai5_widget_pane_t8

0x0009,

0xfe5f,	// (0x0001aa4c) cell_ai5_widget_pane_t_ParamLimits

0xfe5f,	// (0x0001aa4c) cell_ai5_widget_pane_t

0x3e13,	// (0x0000ea00) grid_ai5_widget_pane

0x6e03,	// (0x000119f0) highlight_cell_ai5_widget_pane_ParamLimits

0x6e03,	// (0x000119f0) highlight_cell_ai5_widget_pane

0x3e29,	// (0x0000ea16) ai5_sk_left_pane

0x3e33,	// (0x0000ea20) ai5_sk_middle_pane

0x3e3d,	// (0x0000ea2a) ai5_sk_right_pane

0xebab,	// (0x00019798) bg_ai5_widget_pane_g1_ParamLimits

0xebab,	// (0x00019798) bg_ai5_widget_pane_g1

0xebb7,	// (0x000197a4) bg_ai5_widget_pane_g2_ParamLimits

0xebb7,	// (0x000197a4) bg_ai5_widget_pane_g2

0xebc3,	// (0x000197b0) bg_ai5_widget_pane_g3_ParamLimits

0xebc3,	// (0x000197b0) bg_ai5_widget_pane_g3

0xebcf,	// (0x000197bc) bg_ai5_widget_pane_g4_ParamLimits

0xebcf,	// (0x000197bc) bg_ai5_widget_pane_g4

0xebdb,	// (0x000197c8) bg_ai5_widget_pane_g5_ParamLimits

0xebdb,	// (0x000197c8) bg_ai5_widget_pane_g5

0xebe7,	// (0x000197d4) bg_ai5_widget_pane_g6_ParamLimits

0xebe7,	// (0x000197d4) bg_ai5_widget_pane_g6

0xebf3,	// (0x000197e0) bg_ai5_widget_pane_g7_ParamLimits

0xebf3,	// (0x000197e0) bg_ai5_widget_pane_g7

0xebff,	// (0x000197ec) bg_ai5_widget_pane_g8_ParamLimits

0xebff,	// (0x000197ec) bg_ai5_widget_pane_g8

0xec0b,	// (0x000197f8) bg_ai5_widget_pane_g9_ParamLimits

0xec0b,	// (0x000197f8) bg_ai5_widget_pane_g9

0x0008,

0xfe74,	// (0x0001aa61) bg_ai5_widget_pane_g_ParamLimits

0xfe74,	// (0x0001aa61) bg_ai5_widget_pane_g

0xec33,	// (0x00019820) cell_shortcut_ai5_widget_pane_ParamLimits

0xec33,	// (0x00019820) cell_shortcut_ai5_widget_pane

0x610d,	// (0x00010cfa) bg_cell_shortcut_ai5_widget_pane

0xec45,	// (0x00019832) cell_grid_ai5_widget_pane_g1

0xec4e,	// (0x0001983b) highlight_cell_shortcut_ai5_widget_pane

0x8a89,	// (0x00013676) ai5_sk_left_pane_g1

0xec56,	// (0x00019843) ai5_sk_left_pane_g2

0xec5e,	// (0x0001984b) ai5_sk_left_pane_g3

0xec66,	// (0x00019853) ai5_sk_left_pane_g4

0x0003,

0xfe87,	// (0x0001aa74) ai5_sk_left_pane_g

0xec6e,	// (0x0001985b) ai5_sk_left_pane_t1

0x8a91,	// (0x0001367e) ai5_sk_right_pane_g1

0xec7c,	// (0x00019869) ai5_sk_right_pane_g2

0xec84,	// (0x00019871) ai5_sk_right_pane_g3

0xec8c,	// (0x00019879) ai5_sk_right_pane_g4

0x0003,

0xfe90,	// (0x0001aa7d) ai5_sk_right_pane_g

0xec94,	// (0x00019881) ai5_sk_right_pane_t1

0x8a91,	// (0x0001367e) ai5_sk_middle_pane_g1

0x8a89,	// (0x00013676) ai5_sk_middle_pane_g2

0x8aa9,	// (0x00013696) ai5_sk_middle_pane_g3

0xec84,	// (0x00019871) ai5_sk_middle_pane_g4

0xec5e,	// (0x0001984b) ai5_sk_middle_pane_g5

0xeca2,	// (0x0001988f) ai5_sk_middle_pane_g6

0x3e47,	// (0x0000ea34) ai5_sk_middle_pane_g7

0x0006,

0xfe99,	// (0x0001aa86) ai5_sk_middle_pane_g

0x19ba,	// (0x0000c5a7) aid_touch_area_size_lc0_ParamLimits

0x19ba,	// (0x0000c5a7) aid_touch_area_size_lc0

0x54e7,	// (0x000100d4) cell_hwr_candidate_pane_t1_ParamLimits

0x85c0,	// (0x000131ad) aid_touch_navi_pane

0x1c3f,	// (0x0000c82c) status_dt_navi_pane_ParamLimits

0x1c3f,	// (0x0000c82c) status_dt_navi_pane

0x1c57,	// (0x0000c844) status_dt_sta_pane_ParamLimits

0x1c57,	// (0x0000c844) status_dt_sta_pane

0x3e4f,	// (0x0000ea3c) dt_sta_controll_pane

0x3e5c,	// (0x0000ea49) dt_sta_indi_pane

0x3e69,	// (0x0000ea56) dt_sta_title_pane

0x62cd,	// (0x00010eba) bg_dt_sta_indi_pane_ParamLimits

0x62cd,	// (0x00010eba) bg_dt_sta_indi_pane

0x3e7b,	// (0x0000ea68) dt_sta_battery_pane

0x3e83,	// (0x0000ea70) dt_sta_indi_pane_g1

0xecaa,	// (0x00019897) dt_sta_indi_pane_g2

0xecb3,	// (0x000198a0) dt_sta_indi_pane_g3

0x0002,

0xfea8,	// (0x0001aa95) dt_sta_indi_pane_g

0xecbc,	// (0x000198a9) dt_sta_signal_pane

0x6e03,	// (0x000119f0) bg_dt_sta_title_pane_ParamLimits

0x6e03,	// (0x000119f0) bg_dt_sta_title_pane

0x9975,	// (0x00014562) dt_sta_title_pane_g1

0x3e8c,	// (0x0000ea79) dt_sta_title_pane_t1_ParamLimits

0x3e8c,	// (0x0000ea79) dt_sta_title_pane_t1

0x5f36,	// (0x00010b23) bg_dt_sta_control_pane

0x3ea1,	// (0x0000ea8e) dt_sta_controll_pane_g1

0xecc5,	// (0x000198b2) bg_dt_sta_title_pane_g1

0xecce,	// (0x000198bb) bg_dt_sta_title_pane_g2

0xecd7,	// (0x000198c4) bg_dt_sta_title_pane_g3

0x0002,

0xfeaf,	// (0x0001aa9c) bg_dt_sta_title_pane_g

0xb422,	// (0x0001600f) bg_dt_sta_indi_pane_g1

0xece0,	// (0x000198cd) dt_sta_signal_pane_g1

0xece8,	// (0x000198d5) dt_sta_signal_pane_g2

0x0001,

0xfeb6,	// (0x0001aaa3) dt_sta_signal_pane_g

0xecf0,	// (0x000198dd) dt_sta_battery_pane_g1

0xecf9,	// (0x000198e6) dt_sta_battery_pane_t1

0xb422,	// (0x0001600f) bg_dt_sta_control_pane_g1

0x76bf,	// (0x000122ac) fep_china_uni_eep_pane

0x76c7,	// (0x000122b4) fep_china_uni_entry_pane_ParamLimits

0x76d7,	// (0x000122c4) popup_fep_china_uni_window_g1_ParamLimits

0x76e7,	// (0x000122d4) popup_fep_china_uni_window_g2_ParamLimits

0x76e7,	// (0x000122d4) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001a345) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001a345) popup_fep_china_uni_window_g

0xed08,	// (0x000198f5) fep_china_uni_eep_pane_g1

0xed10,	// (0x000198fd) fep_china_uni_eep_pane_t1

0xeb28,	// (0x00019715) aid_touch_area_size_smil_player

0x8710,	// (0x000132fd) lc0_clock_pane

0x88ee,	// (0x000134db) status_pane_g5_ParamLimits

0x88ee,	// (0x000134db) status_pane_g5

0x1486,	// (0x0000c073) popup_keymap_window

0x88ae,	// (0x0001349b) status_icon_pane

0x3cc5,	// (0x0000e8b2) cell_ai5_widget_pane_g3_ParamLimits

0x3cd9,	// (0x0000e8c6) cell_ai5_widget_pane_g4_ParamLimits

0x3ce5,	// (0x0000e8d2) cell_ai5_widget_pane_g5_ParamLimits

0x3d09,	// (0x0000e8f6) cell_ai5_widget_pane_g8_ParamLimits

0x3d09,	// (0x0000e8f6) cell_ai5_widget_pane_g8

0x3d1d,	// (0x0000e90a) cell_ai5_widget_pane_g9_ParamLimits

0x3d1d,	// (0x0000e90a) cell_ai5_widget_pane_g9

0x3d31,	// (0x0000e91e) cell_ai5_widget_pane_g10_ParamLimits

0x3d31,	// (0x0000e91e) cell_ai5_widget_pane_g10

0xed1f,	// (0x0001990c) status_icon_pane_g1

0x5f36,	// (0x00010b23) bg_popup_sub_pane_cp13

0xed27,	// (0x00019914) popup_keymap_window_t1

0x11b8,	// (0x0000bda5) control_pane_g6_ParamLimits

0x11b8,	// (0x0000bda5) control_pane_g6

0x11ab,	// (0x0000bd98) control_pane_g7_ParamLimits

0x11ab,	// (0x0000bd98) control_pane_g7

0x119e,	// (0x0000bd8b) control_pane_g8_ParamLimits

0x119e,	// (0x0000bd8b) control_pane_g8

0x3e4f,	// (0x0000ea3c) dt_sta_controll_pane_ParamLimits

0x3e5c,	// (0x0000ea49) dt_sta_indi_pane_ParamLimits

0x3e69,	// (0x0000ea56) dt_sta_title_pane_ParamLimits

0x67cf,	// (0x000113bc) aid_size_touch_scroll_bar_cale

0x4546,	// (0x0000f133) popup_discreet_window_ParamLimits

0x4546,	// (0x0000f133) popup_discreet_window

0xe0b3,	// (0x00018ca0) popup_sk_window

0x91a7,	// (0x00013d94) bg_popup_sub_pane_cp28_ParamLimits

0x91a7,	// (0x00013d94) bg_popup_sub_pane_cp28

0xed35,	// (0x00019922) popup_discreet_window_g1_ParamLimits

0xed35,	// (0x00019922) popup_discreet_window_g1

0xed55,	// (0x00019942) popup_discreet_window_t1_ParamLimits

0xed55,	// (0x00019942) popup_discreet_window_t1

0xed73,	// (0x00019960) popup_discreet_window_t2_ParamLimits

0xed73,	// (0x00019960) popup_discreet_window_t2

0x0002,

0xfebb,	// (0x0001aaa8) popup_discreet_window_t_ParamLimits

0xfebb,	// (0x0001aaa8) popup_discreet_window_t

0x5ecc,	// (0x00010ab9) popup_sk_window_g1

0x5ed6,	// (0x00010ac3) popup_sk_window_g2

0x0001,

0xfec2,	// (0x0001aaaf) popup_sk_window_g

0xedc5,	// (0x000199b2) popup_sk_window_t1

0xedd3,	// (0x000199c0) popup_sk_window_t1_copy1

0x3cb5,	// (0x0000e8a2) cell_ai5_widget_pane_g2_ParamLimits

0x3ddd,	// (0x0000e9ca) cell_ai5_widget_pane_t9_ParamLimits

0x3ddd,	// (0x0000e9ca) cell_ai5_widget_pane_t9

0x5f36,	// (0x00010b23) main_fep_fshwr2_pane

0x3eaa,	// (0x0000ea97) aid_fshwr2_btn_pane

0x3eb2,	// (0x0000ea9f) aid_fshwr2_syb_pane

0x3eba,	// (0x0000eaa7) aid_fshwr2_txt_pane

0x3ec2,	// (0x0000eaaf) fshwr2_func_candi_pane

0x3ecc,	// (0x0000eab9) fshwr2_hwr_syb_pane

0x3eda,	// (0x0000eac7) fshwr2_icf_pane

0x5f36,	// (0x00010b23) fshwr2_icf_bg_pane

0x3ee4,	// (0x0000ead1) fshwr2_icf_pane_t1_ParamLimits

0x3ee4,	// (0x0000ead1) fshwr2_icf_pane_t1

0xb422,	// (0x0001600f) fshwr2_func_candi_pane_g1

0xedf5,	// (0x000199e2) fshwr2_func_candi_row_pane_ParamLimits

0xedf5,	// (0x000199e2) fshwr2_func_candi_row_pane

0x3efe,	// (0x0000eaeb) cell_fshwr2_syb_pane_ParamLimits

0x3efe,	// (0x0000eaeb) cell_fshwr2_syb_pane

0xb6c9,	// (0x000162b6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb6c9,	// (0x000162b6) fshwr2_hwr_syb_pane_g1

0x5f36,	// (0x00010b23) bg_popup_call_pane_cp01

0xee06,	// (0x000199f3) fshwr2_func_candi_cell_pane_ParamLimits

0xee06,	// (0x000199f3) fshwr2_func_candi_cell_pane

0xee37,	// (0x00019a24) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee37,	// (0x00019a24) fshwr2_func_candi_cell_bg_pane

0xee51,	// (0x00019a3e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee51,	// (0x00019a3e) fshwr2_func_candi_cell_pane_g1

0xee71,	// (0x00019a5e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee71,	// (0x00019a5e) fshwr2_func_candi_cell_pane_t1

0x5f36,	// (0x00010b23) bg_button_pane_cp08

0x7c49,	// (0x00012836) cell_fshwr2_syb_bg_pane

0x3f18,	// (0x0000eb05) cell_fshwr2_syb_bg_pane_g1

0xee84,	// (0x00019a71) cell_fshwr2_syb_bg_pane_t1

0x6e03,	// (0x000119f0) main_tmo_pane

0x2172,	// (0x0000cd5f) uni_indicator_pane_g1_ParamLimits

0x2187,	// (0x0000cd74) uni_indicator_pane_g2_ParamLimits

0x219c,	// (0x0000cd89) uni_indicator_pane_g3_ParamLimits

0x9cf9,	// (0x000148e6) uni_indicator_pane_g4_ParamLimits

0x9cf9,	// (0x000148e6) uni_indicator_pane_g4

0x9d0d,	// (0x000148fa) uni_indicator_pane_g5_ParamLimits

0x9d0d,	// (0x000148fa) uni_indicator_pane_g5

0x9d21,	// (0x0001490e) uni_indicator_pane_g6_ParamLimits

0x9d21,	// (0x0001490e) uni_indicator_pane_g6

0xf950,	// (0x0001a53d) uni_indicator_pane_g_ParamLimits

0x2d16,	// (0x0000d903) popup_tmo_note_window_ParamLimits

0x2d16,	// (0x0000d903) popup_tmo_note_window

0x5f36,	// (0x00010b23) fshwr2_bg_pane

0xee62,	// (0x00019a4f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee62,	// (0x00019a4f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec7,	// (0x0001aab4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec7,	// (0x0001aab4) fshwr2_func_candi_cell_pane_g

0xb422,	// (0x0001600f) bg_popup_window_pane_cp01

0xee93,	// (0x00019a80) bg_popup_window_pane_g1_cp01

0xee9c,	// (0x00019a89) bg_popup_window_pane_cp22_ParamLimits

0xee9c,	// (0x00019a89) bg_popup_window_pane_cp22

0xeeaa,	// (0x00019a97) listscroll_tmo_link_pane_ParamLimits

0xeeaa,	// (0x00019a97) listscroll_tmo_link_pane

0xeeea,	// (0x00019ad7) popup_tmo_note_window_g1_ParamLimits

0xeeea,	// (0x00019ad7) popup_tmo_note_window_g1

0xeef7,	// (0x00019ae4) tmo_note_info_pane_ParamLimits

0xeef7,	// (0x00019ae4) tmo_note_info_pane

0x3f20,	// (0x0000eb0d) list_tmo_note_info_pane_g1_ParamLimits

0x3f20,	// (0x0000eb0d) list_tmo_note_info_pane_g1

0xef25,	// (0x00019b12) list_tmo_note_info_pane_g2_ParamLimits

0xef25,	// (0x00019b12) list_tmo_note_info_pane_g2

0x0001,

0xfecc,	// (0x0001aab9) list_tmo_note_info_pane_g_ParamLimits

0xfecc,	// (0x0001aab9) list_tmo_note_info_pane_g

0xef41,	// (0x00019b2e) list_tmo_note_info_text_pane_ParamLimits

0xef41,	// (0x00019b2e) list_tmo_note_info_text_pane

0xef83,	// (0x00019b70) list_tmo_link_pane

0xef90,	// (0x00019b7d) scroll_pane_cp20

0xef9d,	// (0x00019b8a) list_single_tmo_link_pane_ParamLimits

0xef9d,	// (0x00019b8a) list_single_tmo_link_pane

0xefad,	// (0x00019b9a) list_single_tmo_link_pane_t1

0xefbb,	// (0x00019ba8) list_tmo_note_info_text_pane_t1_ParamLimits

0xefbb,	// (0x00019ba8) list_tmo_note_info_text_pane_t1

0x0dfb,	// (0x0000b9e8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0dfb,	// (0x0000b9e8) aid_size_touch_scroll_bar_cp01

0x0d16,	// (0x0000b903) aid_size_touch_slider_marker

0xe0a3,	// (0x00018c90) popup_settings_window_ParamLimits

0xe0a3,	// (0x00018c90) popup_settings_window

0x7ff7,	// (0x00012be4) popup_candi_list_indi_window

0x85c0,	// (0x000131ad) aid_touch_navi_pane_ParamLimits

0x56a5,	// (0x00010292) rs_clock_indi_pane

0x56ae,	// (0x0001029b) sctrl_sk_bottom_pane_ParamLimits

0x56bf,	// (0x000102ac) sctrl_sk_top_pane_ParamLimits

0x57c6,	// (0x000103b3) popup_fep_tooltip_window

0xeb62,	// (0x0001974f) aid_size_cell_widget_grid_ParamLimits

0x3ca9,	// (0x0000e896) cell_ai5_widget_pane_g1_ParamLimits

0x3ca9,	// (0x0000e896) cell_ai5_widget_pane_g1

0x3cf1,	// (0x0000e8de) cell_ai5_widget_pane_g6_ParamLimits

0x3cfd,	// (0x0000e8ea) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4a,	// (0x0001aa37) cell_ai5_widget_pane_g_ParamLimits

0xfe4a,	// (0x0001aa37) cell_ai5_widget_pane_g

0x3e01,	// (0x0000e9ee) cell_ai5_widget_pane_t10_ParamLimits

0x3e01,	// (0x0000e9ee) cell_ai5_widget_pane_t10

0x3e13,	// (0x0000ea00) grid_ai5_widget_pane_ParamLimits

0xec17,	// (0x00019804) cell_contacts_ai5_widget_pane_ParamLimits

0xec17,	// (0x00019804) cell_contacts_ai5_widget_pane

0xed88,	// (0x00019975) popup_discreet_window_t3_ParamLimits

0xed88,	// (0x00019975) popup_discreet_window_t3

0xede1,	// (0x000199ce) popup_fshwr2_char_preview_window_ParamLimits

0xede1,	// (0x000199ce) popup_fshwr2_char_preview_window

0x3f37,	// (0x0000eb24) tmo_note_info_pane_t1

0x3f4c,	// (0x0000eb39) tmo_note_info_pane_t2

0x3f65,	// (0x0000eb52) tmo_note_info_pane_t3

0xef5f,	// (0x00019b4c) tmo_note_info_pane_t4

0xef71,	// (0x00019b5e) tmo_note_info_pane_t5

0x0004,

0xfed1,	// (0x0001aabe) tmo_note_info_pane_t

0xef83,	// (0x00019b70) list_tmo_link_pane_ParamLimits

0xef90,	// (0x00019b7d) scroll_pane_cp20_ParamLimits

0x5f36,	// (0x00010b23) bg_popup_fep_char_preview_window_cp01

0xefd4,	// (0x00019bc1) popup_fshwr2_char_preview_window_t1

0xefe2,	// (0x00019bcf) popup_candi_list_indi_window_g1

0xefeb,	// (0x00019bd8) bg_cell_contacts_ai5_widget_pane

0xeff7,	// (0x00019be4) cell_contacts_ai5_widget_pane_g1

0xf00b,	// (0x00019bf8) cell_contacts_ai5_widget_pane_g2

0xf01a,	// (0x00019c07) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedc,	// (0x0001aac9) cell_contacts_ai5_widget_pane_g

0xf02d,	// (0x00019c1a) cell_contacts_ai5_widget_pane_t1

0x6e03,	// (0x000119f0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0a7,	// (0x00019c94) settings_container_pane

0x7c49,	// (0x00012836) listscroll_set_pane_copy1

0xa90f,	// (0x000154fc) scroll_pane_cp121_copy1

0xf0b3,	// (0x00019ca0) set_content_pane_copy1

0xf0bb,	// (0x00019ca8) aid_height_set_list_copy1_ParamLimits

0xf0bb,	// (0x00019ca8) aid_height_set_list_copy1

0x9f3c,	// (0x00014b29) aid_size_parent_copy1_ParamLimits

0x9f3c,	// (0x00014b29) aid_size_parent_copy1

0xf0c7,	// (0x00019cb4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0c7,	// (0x00019cb4) button_value_adjust_pane_cp6_copy1

0x7fcf,	// (0x00012bbc) list_highlight_pane_cp2_copy1_ParamLimits

0x7fcf,	// (0x00012bbc) list_highlight_pane_cp2_copy1

0xf0db,	// (0x00019cc8) list_set_pane_copy1_ParamLimits

0xf0db,	// (0x00019cc8) list_set_pane_copy1

0xf042,	// (0x00019c2f) main_pane_set_t1_copy1_ParamLimits

0xf042,	// (0x00019c2f) main_pane_set_t1_copy1

0xf07c,	// (0x00019c69) main_pane_set_t2_copy1_ParamLimits

0xf07c,	// (0x00019c69) main_pane_set_t2_copy1

0xf188,	// (0x00019d75) main_pane_set_t3_copy1

0xf196,	// (0x00019d83) main_pane_set_t4_copy1

0xf09b,	// (0x00019c88) set_content_pane_g1_copy1_ParamLimits

0xf09b,	// (0x00019c88) set_content_pane_g1_copy1

0xf1a4,	// (0x00019d91) setting_code_pane_copy1

0xf1ae,	// (0x00019d9b) setting_slider_graphic_pane_copy1

0xf1ae,	// (0x00019d9b) setting_slider_pane_copy1

0xf1b8,	// (0x00019da5) setting_text_pane_copy1

0xf1c2,	// (0x00019daf) setting_volume_pane_copy1

0xf1cb,	// (0x00019db8) settings_code_pane_cp2_copy1

0xf1d3,	// (0x00019dc0) settings_code_pane_cp_copy1_ParamLimits

0xf1d3,	// (0x00019dc0) settings_code_pane_cp_copy1

0xf1e7,	// (0x00019dd4) volume_set_pane_copy1

0xf1ef,	// (0x00019ddc) volume_set_pane_g10_copy1

0xf1f7,	// (0x00019de4) volume_set_pane_g1_copy1

0xf1ff,	// (0x00019dec) volume_set_pane_g2_copy1

0xf207,	// (0x00019df4) volume_set_pane_g3_copy1

0xf20f,	// (0x00019dfc) volume_set_pane_g4_copy1

0xf217,	// (0x00019e04) volume_set_pane_g5_copy1

0xf21f,	// (0x00019e0c) volume_set_pane_g6_copy1

0xf227,	// (0x00019e14) volume_set_pane_g7_copy1

0xf22f,	// (0x00019e1c) volume_set_pane_g8_copy1

0xf237,	// (0x00019e24) volume_set_pane_g9_copy1

0x602a,	// (0x00010c17) bg_set_opt_pane_cp_copy1_ParamLimits

0x602a,	// (0x00010c17) bg_set_opt_pane_cp_copy1

0xf23f,	// (0x00019e2c) setting_slider_pane_t1_copy1_ParamLimits

0xf23f,	// (0x00019e2c) setting_slider_pane_t1_copy1

0xf25d,	// (0x00019e4a) setting_slider_pane_t2_copy1_ParamLimits

0xf25d,	// (0x00019e4a) setting_slider_pane_t2_copy1

0xf277,	// (0x00019e64) setting_slider_pane_t3_copy1_ParamLimits

0xf277,	// (0x00019e64) setting_slider_pane_t3_copy1

0xf28f,	// (0x00019e7c) slider_set_pane_copy1_ParamLimits

0xf28f,	// (0x00019e7c) slider_set_pane_copy1

0x6f3f,	// (0x00011b2c) set_opt_bg_pane_g1_copy2

0x6f47,	// (0x00011b34) set_opt_bg_pane_g2_copy2

0xf2a5,	// (0x00019e92) set_opt_bg_pane_g3_copy2

0x6f57,	// (0x00011b44) set_opt_bg_pane_g4_copy2

0x6f5f,	// (0x00011b4c) set_opt_bg_pane_g5_copy2

0x6f67,	// (0x00011b54) set_opt_bg_pane_g6_copy2

0xf2af,	// (0x00019e9c) set_opt_bg_pane_g7_copy2

0xf2b7,	// (0x00019ea4) set_opt_bg_pane_g8_copy2

0xf2c1,	// (0x00019eae) set_opt_bg_pane_g9_copy2

0x5ee0,	// (0x00010acd) aid_size_touch_slider_mark_copy1_ParamLimits

0x5ee0,	// (0x00010acd) aid_size_touch_slider_mark_copy1

0xf2cb,	// (0x00019eb8) slider_set_pane_g1_copy1

0x5ef4,	// (0x00010ae1) slider_set_pane_g2_copy1

0x5090,	// (0x0000fc7d) slider_set_pane_g3_copy1_ParamLimits

0x5090,	// (0x0000fc7d) slider_set_pane_g3_copy1

0x50a4,	// (0x0000fc91) slider_set_pane_g4_copy1_ParamLimits

0x50a4,	// (0x0000fc91) slider_set_pane_g4_copy1

0x50bc,	// (0x0000fca9) slider_set_pane_g5_copy1_ParamLimits

0x50bc,	// (0x0000fca9) slider_set_pane_g5_copy1

0x5090,	// (0x0000fc7d) slider_set_pane_g6_copy1_ParamLimits

0x5090,	// (0x0000fc7d) slider_set_pane_g6_copy1

0x5efc,	// (0x00010ae9) slider_set_pane_g7_copy1_ParamLimits

0x5efc,	// (0x00010ae9) slider_set_pane_g7_copy1

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp2_copy1

0xf2d4,	// (0x00019ec1) setting_slider_graphic_pane_g1_copy1

0xf2dd,	// (0x00019eca) setting_slider_graphic_pane_t1_copy1

0xf2ed,	// (0x00019eda) setting_slider_graphic_pane_t2_copy1

0xf2fd,	// (0x00019eea) slider_set_pane_cp_copy1

0xf30d,	// (0x00019efa) input_focus_pane_cp1_copy1

0xf316,	// (0x00019f03) list_set_text_pane_copy1

0xf31e,	// (0x00019f0b) setting_text_pane_g1_copy1

0xf327,	// (0x00019f14) set_text_pane_t1_copy1

0xf30d,	// (0x00019efa) input_focus_pane_cp2_copy1

0xf31e,	// (0x00019f0b) setting_code_pane_g1_copy1

0xf344,	// (0x00019f31) setting_code_pane_t1_copy1

0xef11,	// (0x00019afe) list_set_graphic_pane_copy1

0x5f4a,	// (0x00010b37) bg_set_opt_pane_cp4_copy1

0x794b,	// (0x00012538) list_set_graphic_pane_g1_copy1_ParamLimits

0x794b,	// (0x00012538) list_set_graphic_pane_g1_copy1

0xf352,	// (0x00019f3f) list_set_graphic_pane_g2_copy1

0x7963,	// (0x00012550) list_set_graphic_pane_t1_copy1_ParamLimits

0x7963,	// (0x00012550) list_set_graphic_pane_t1_copy1

0xb422,	// (0x0001600f) rs_clock_indi_pane_g1

0xf35a,	// (0x00019f47) rs_clock_indi_pane_t1

0xf368,	// (0x00019f55) rs_indi_pane

0xf370,	// (0x00019f5d) rs_indi_pane_g1

0xf379,	// (0x00019f66) rs_indi_pane_g2

0xf382,	// (0x00019f6f) rs_indi_pane_g3

0x0002,

0xfee3,	// (0x0001aad0) rs_indi_pane_g

0x7c49,	// (0x00012836) bg_popup_preview_window_pane_cp03

0xf38b,	// (0x00019f78) popup_fep_tooltip_window_t1

0xc2af,	// (0x00016e9c) popup_note2_window_g2_ParamLimits

0xc2af,	// (0x00016e9c) popup_note2_window_g2

0x0001,

0xfc88,	// (0x0001a875) popup_note2_window_g_ParamLimits

0xfc88,	// (0x0001a875) popup_note2_window_g

0xc891,	// (0x0001747e) bg_popup_sub_pane_cp11_ParamLimits

0xc89e,	// (0x0001748b) cell_ai3_links_pane_g1_ParamLimits

0xc8b5,	// (0x000174a2) cell_ai3_links_pane_t1

0xf327,	// (0x00019f14) set_text_pane_t1_copy1_ParamLimits

0x7b58,	// (0x00012745) cell_graphic_popup_pane_cp2_ParamLimits

0x7b58,	// (0x00012745) cell_graphic_popup_pane_cp2

0xf399,	// (0x00019f86) cell_graphic_popup_pane_g1_cp2

0x65e2,	// (0x000111cf) cell_graphic_popup_pane_g2_cp2

0xf3a1,	// (0x00019f8e) cell_graphic_popup_pane_g3_cp2

0xf3a9,	// (0x00019f96) cell_graphic_popup_pane_t2_cp2

0x65f3,	// (0x000111e0) grid_highlight_pane_cp3_cp2

0x7325,	// (0x00011f12) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6e03,	// (0x000119f0) main_tmo_pane_ParamLimits

0x2d0a,	// (0x0000d8f7) popup_tmo_big_image_note_window

0x3c99,	// (0x0000e886) cell_ai5_widget_list_pane

0x3ca1,	// (0x0000e88e) cell_ai5_widget_lrg_icon_pane

0x3f37,	// (0x0000eb24) tmo_note_info_pane_t1_ParamLimits

0x3f4c,	// (0x0000eb39) tmo_note_info_pane_t2_ParamLimits

0x3f65,	// (0x0000eb52) tmo_note_info_pane_t3_ParamLimits

0xef5f,	// (0x00019b4c) tmo_note_info_pane_t4_ParamLimits

0xef71,	// (0x00019b5e) tmo_note_info_pane_t5_ParamLimits

0xfed1,	// (0x0001aabe) tmo_note_info_pane_t_ParamLimits

0xf0a7,	// (0x00019c94) settings_container_pane_ParamLimits

0xf305,	// (0x00019ef2) indicator_popup_pane_cp5

0xf305,	// (0x00019ef2) indicator_popup_pane_cp6

0xef11,	// (0x00019afe) list_set_graphic_pane_copy1_ParamLimits

0x5f36,	// (0x00010b23) bg_popup_window_pane_cp23

0xf3b7,	// (0x00019fa4) popup_tmo_big_image_note_window_g1

0xf3c2,	// (0x00019faf) popup_tmo_big_image_note_window_t1

0xf3d2,	// (0x00019fbf) popup_tmo_big_image_note_window_t2

0xf3e2,	// (0x00019fcf) popup_tmo_big_image_note_window_t3

0x0002,

0xfeea,	// (0x0001aad7) popup_tmo_big_image_note_window_t

0x3f7a,	// (0x0000eb67) cell_ai5_widget_lrg_icon_pane_g1

0x3f82,	// (0x0000eb6f) cell_ai5_widget_lrg_icon_pane_t1

0x3f90,	// (0x0000eb7d) cell_ai5_widget_list_row_pane_ParamLimits

0x3f90,	// (0x0000eb7d) cell_ai5_widget_list_row_pane

0x3fa9,	// (0x0000eb96) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3fa9,	// (0x0000eb96) cell_ai5_widget_list_row_pane_g1

0x3fb6,	// (0x0000eba3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3fb6,	// (0x0000eba3) cell_ai5_widget_list_row_pane_t1

0x3fce,	// (0x0000ebbb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3fce,	// (0x0000ebbb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef1,	// (0x0001aade) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef1,	// (0x0001aade) cell_ai5_widget_list_row_pane_t

0x446d,	// (0x0000f05a) main_fep_vtchi_ss_pane

0xf3f2,	// (0x00019fdf) popup_fep_char_pre_window

0xf3fa,	// (0x00019fe7) popup_fep_ituss_window

0xf405,	// (0x00019ff2) popup_fep_vkbss_window

0xf40e,	// (0x00019ffb) grid_vkbss_keypad_pane_ParamLimits

0xf40e,	// (0x00019ffb) grid_vkbss_keypad_pane

0xf41e,	// (0x0001a00b) ituss_keypad_pane

0xf426,	// (0x0001a013) aid_vkbss_key_offset_ParamLimits

0xf426,	// (0x0001a013) aid_vkbss_key_offset

0xf435,	// (0x0001a022) cell_vkbss_key_pane_ParamLimits

0xf435,	// (0x0001a022) cell_vkbss_key_pane

0xf44b,	// (0x0001a038) bg_cell_vkbss_key_g1_ParamLimits

0xf44b,	// (0x0001a038) bg_cell_vkbss_key_g1

0xf457,	// (0x0001a044) cell_vkbss_key_3p_pane_ParamLimits

0xf457,	// (0x0001a044) cell_vkbss_key_3p_pane

0xf471,	// (0x0001a05e) cell_vkbss_key_g1_ParamLimits

0xf471,	// (0x0001a05e) cell_vkbss_key_g1

0xf48b,	// (0x0001a078) cell_vkbss_key_t1_ParamLimits

0xf48b,	// (0x0001a078) cell_vkbss_key_t1

0xf4b6,	// (0x0001a0a3) cell_ituss_key_pane_ParamLimits

0xf4b6,	// (0x0001a0a3) cell_ituss_key_pane

0xf4c5,	// (0x0001a0b2) bg_cell_ituss_key_g1_ParamLimits

0xf4c5,	// (0x0001a0b2) bg_cell_ituss_key_g1

0xf4d1,	// (0x0001a0be) cell_ituss_key_pane_g1_ParamLimits

0xf4d1,	// (0x0001a0be) cell_ituss_key_pane_g1

0xf4dd,	// (0x0001a0ca) cell_ituss_key_pane_g2_ParamLimits

0xf4dd,	// (0x0001a0ca) cell_ituss_key_pane_g2

0x0001,

0xfef6,	// (0x0001aae3) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x0001aae3) cell_ituss_key_pane_g

0xf4f0,	// (0x0001a0dd) cell_ituss_key_t1_ParamLimits

0xf4f0,	// (0x0001a0dd) cell_ituss_key_t1

0xf50e,	// (0x0001a0fb) cell_ituss_key_t2_ParamLimits

0xf50e,	// (0x0001a0fb) cell_ituss_key_t2

0xf52d,	// (0x0001a11a) cell_ituss_key_t3_ParamLimits

0xf52d,	// (0x0001a11a) cell_ituss_key_t3

0xf54c,	// (0x0001a139) cell_ituss_key_t4_ParamLimits

0xf54c,	// (0x0001a139) cell_ituss_key_t4

0x0003,

0xfefb,	// (0x0001aae8) cell_ituss_key_t_ParamLimits

0xfefb,	// (0x0001aae8) cell_ituss_key_t

0xf56b,	// (0x0001a158) cell_vkbss_key_3p_pane_g1

0xf573,	// (0x0001a160) cell_vkbss_key_3p_pane_g2

0xf57b,	// (0x0001a168) cell_vkbss_key_3p_pane_g3

0x0002,

0xff04,	// (0x0001aaf1) cell_vkbss_key_3p_pane_g

0x5f36,	// (0x00010b23) bg_popup_fep_char_preview_window_cp02

0xf583,	// (0x0001a170) popup_fep_char_pre_window_t1

0x3c8f,	// (0x0000e87c) main_ai5_sk_pane

0xefeb,	// (0x00019bd8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeff7,	// (0x00019be4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf00b,	// (0x00019bf8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf01a,	// (0x00019c07) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedc,	// (0x0001aac9) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf02d,	// (0x00019c1a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6e03,	// (0x000119f0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3fe0,	// (0x0000ebcd) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

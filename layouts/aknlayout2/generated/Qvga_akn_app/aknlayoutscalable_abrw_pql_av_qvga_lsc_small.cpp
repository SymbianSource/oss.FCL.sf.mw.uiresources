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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001c7c0 };

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
0x0e82,	// (0x0001d642) Screen

0x0e8c,	// (0x0001d64c) application_window_ParamLimits

0x0e8c,	// (0x0001d64c) application_window

0x413d,	// (0x000208fd) screen_g1

0x0eba,	// (0x0001d67a) area_bottom_pane_ParamLimits

0x0eba,	// (0x0001d67a) area_bottom_pane

0x4147,	// (0x00020907) area_top_pane_ParamLimits

0x4147,	// (0x00020907) area_top_pane

0x6e8b,	// (0x0002364b) main_pane_ParamLimits

0x6e8b,	// (0x0002364b) main_pane

0x41bf,	// (0x0002097f) misc_graphics

0x1e5c,	// (0x0001e61c) battery_pane_ParamLimits

0x1e5c,	// (0x0001e61c) battery_pane

0x5f95,	// (0x00022755) bg_status_flat_pane_g8

0x5f9d,	// (0x0002275d) bg_status_flat_pane_g9

0x56f5,	// (0x00021eb5) context_pane_ParamLimits

0x56f5,	// (0x00021eb5) context_pane

0x1fb6,	// (0x0001e776) navi_pane_ParamLimits

0x1fb6,	// (0x0001e776) navi_pane

0x202b,	// (0x0001e7eb) signal_pane_ParamLimits

0x202b,	// (0x0001e7eb) signal_pane

0x0008,

0xf87e,	// (0x0002c03e) bg_status_flat_pane_g

0x20b7,	// (0x0001e877) status_pane_g1_ParamLimits

0x20b7,	// (0x0001e877) status_pane_g1

0x20c3,	// (0x0001e883) status_pane_g2_ParamLimits

0x20c3,	// (0x0001e883) status_pane_g2

0x575b,	// (0x00021f1b) status_pane_g3_ParamLimits

0x575b,	// (0x00021f1b) status_pane_g3

0x0004,

0xf7b8,	// (0x0002bf78) status_pane_g_ParamLimits

0xf7b8,	// (0x0002bf78) status_pane_g

0x20cf,	// (0x0001e88f) title_pane_ParamLimits

0x20cf,	// (0x0001e88f) title_pane

0x212a,	// (0x0001e8ea) uni_indicator_pane_ParamLimits

0x212a,	// (0x0001e8ea) uni_indicator_pane

0x5557,	// (0x00021d17) bg_list_pane_ParamLimits

0x5557,	// (0x00021d17) bg_list_pane

0x0be0,	// (0x0001d3a0) find_pane

0x1841,	// (0x0001e001) listscroll_app_pane_ParamLimits

0x1841,	// (0x0001e001) listscroll_app_pane

0x5577,	// (0x00021d37) listscroll_form_pane

0x0be8,	// (0x0001d3a8) listscroll_gen_pane_ParamLimits

0x0be8,	// (0x0001d3a8) listscroll_gen_pane

0x5577,	// (0x00021d37) listscroll_set_pane

0x184d,	// (0x0001e00d) main_idle_act_pane

0x532d,	// (0x00021aed) main_idle_trad_pane

0x532d,	// (0x00021aed) main_list_empty_pane

0x4cd5,	// (0x00021495) main_midp_pane

0x5591,	// (0x00021d51) main_pane_g1_ParamLimits

0x5591,	// (0x00021d51) main_pane_g1

0x1860,	// (0x0001e020) popup_ai_message_window_ParamLimits

0x1860,	// (0x0001e020) popup_ai_message_window

0x18e4,	// (0x0001e0a4) popup_fep_china_uni_window_ParamLimits

0x18e4,	// (0x0001e0a4) popup_fep_china_uni_window

0x55c1,	// (0x00021d81) popup_fep_japan_candidate_window_ParamLimits

0x55c1,	// (0x00021d81) popup_fep_japan_candidate_window

0x55df,	// (0x00021d9f) popup_fep_japan_predictive_window_ParamLimits

0x55df,	// (0x00021d9f) popup_fep_japan_predictive_window

0x1922,	// (0x0001e0e2) popup_find_window

0x193b,	// (0x0001e0fb) popup_grid_graphic_window_ParamLimits

0x193b,	// (0x0001e0fb) popup_grid_graphic_window

0x560b,	// (0x00021dcb) popup_large_graphic_colour_window

0x19b7,	// (0x0001e177) popup_menu_window_ParamLimits

0x19b7,	// (0x0001e177) popup_menu_window

0x1b15,	// (0x0001e2d5) popup_note_image_window

0x1add,	// (0x0001e29d) popup_note_wait_window_ParamLimits

0x1add,	// (0x0001e29d) popup_note_wait_window

0x1b2b,	// (0x0001e2eb) popup_note_window_ParamLimits

0x1b2b,	// (0x0001e2eb) popup_note_window

0x1bbf,	// (0x0001e37f) popup_query_code_window_ParamLimits

0x1bbf,	// (0x0001e37f) popup_query_code_window

0x562a,	// (0x00021dea) popup_query_data_code_window_ParamLimits

0x562a,	// (0x00021dea) popup_query_data_code_window

0x1bf7,	// (0x0001e3b7) popup_query_data_window_ParamLimits

0x1bf7,	// (0x0001e3b7) popup_query_data_window

0x1c6b,	// (0x0001e42b) popup_query_sat_info_window_ParamLimits

0x1c6b,	// (0x0001e42b) popup_query_sat_info_window

0x1cf8,	// (0x0001e4b8) popup_snote_single_graphic_window_ParamLimits

0x1cf8,	// (0x0001e4b8) popup_snote_single_graphic_window

0x1cf8,	// (0x0001e4b8) popup_snote_single_text_window_ParamLimits

0x1cf8,	// (0x0001e4b8) popup_snote_single_text_window

0x563f,	// (0x00021dff) popup_sub_window_general

0x5681,	// (0x00021e41) popup_window_general_ParamLimits

0x5681,	// (0x00021e41) popup_window_general

0x5694,	// (0x00021e54) power_save_pane

0xe292,	// (0x0002aa52) control_pane_g1_ParamLimits

0xe292,	// (0x0002aa52) control_pane_g1

0x7aa6,	// (0x00024266) control_pane_g2_ParamLimits

0x7aa6,	// (0x00024266) control_pane_g2

0x5539,	// (0x00021cf9) control_pane_g3_ParamLimits

0x5539,	// (0x00021cf9) control_pane_g3

0x0007,

0xf7a0,	// (0x0002bf60) control_pane_g_ParamLimits

0xf7a0,	// (0x0002bf60) control_pane_g

0xe2c8,	// (0x0002aa88) control_pane_t1_ParamLimits

0xe2c8,	// (0x0002aa88) control_pane_t1

0xe324,	// (0x0002aae4) control_pane_t2_ParamLimits

0xe324,	// (0x0002aae4) control_pane_t2

0x0002,

0xf7b1,	// (0x0002bf71) control_pane_t_ParamLimits

0xf7b1,	// (0x0002bf71) control_pane_t

0x545c,	// (0x00021c1c) navi_navi_volume_pane_cp1

0x5465,	// (0x00021c25) status_small_icon_pane

0x546d,	// (0x00021c2d) status_small_pane_g1_ParamLimits

0x546d,	// (0x00021c2d) status_small_pane_g1

0x54a1,	// (0x00021c61) status_small_pane_g2_ParamLimits

0x54a1,	// (0x00021c61) status_small_pane_g2

0x54ad,	// (0x00021c6d) status_small_pane_g3_ParamLimits

0x54ad,	// (0x00021c6d) status_small_pane_g3

0x54b9,	// (0x00021c79) status_small_pane_g4_ParamLimits

0x54b9,	// (0x00021c79) status_small_pane_g4

0x54c5,	// (0x00021c85) status_small_pane_g5_ParamLimits

0x54c5,	// (0x00021c85) status_small_pane_g5

0x54d2,	// (0x00021c92) status_small_pane_g6_ParamLimits

0x54d2,	// (0x00021c92) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002bf4f) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002bf4f) status_small_pane_g

0x5502,	// (0x00021cc2) status_small_pane_t1

0x5525,	// (0x00021ce5) status_small_wait_pane_ParamLimits

0x5525,	// (0x00021ce5) status_small_wait_pane

0x15b0,	// (0x0001dd70) aid_levels_signal_ParamLimits

0x15b0,	// (0x0001dd70) aid_levels_signal

0x15c4,	// (0x0001dd84) signal_pane_g1_ParamLimits

0x15c4,	// (0x0001dd84) signal_pane_g1

0x15de,	// (0x0001dd9e) signal_pane_g2_ParamLimits

0x15de,	// (0x0001dd9e) signal_pane_g2

0x0001,

0xf724,	// (0x0002bee4) signal_pane_g_ParamLimits

0xf724,	// (0x0002bee4) signal_pane_g

0x4ed2,	// (0x00021692) context_pane_g1

0x100a,	// (0x0001d7ca) title_pane_g1

0x104c,	// (0x0001d80c) title_pane_t1

0x41d5,	// (0x00020995) title_pane_t2

0x41fb,	// (0x000209bb) title_pane_t3

0x0002,

0xf573,	// (0x0002bd33) title_pane_t

0x2150,	// (0x0001e910) aid_levels_battery_ParamLimits

0x2150,	// (0x0001e910) aid_levels_battery

0x2168,	// (0x0001e928) battery_pane_g1_ParamLimits

0x2168,	// (0x0001e928) battery_pane_g1

0x2183,	// (0x0001e943) battery_pane_g2_ParamLimits

0x2183,	// (0x0001e943) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002bf83) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002bf83) battery_pane_g

0x24f2,	// (0x0001ecb2) uni_indicator_pane_g1

0x2507,	// (0x0001ecc7) uni_indicator_pane_g2

0x251d,	// (0x0001ecdd) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0002c0e6) uni_indicator_pane_g

0x4883,	// (0x00021043) navi_icon_pane_ParamLimits

0x4883,	// (0x00021043) navi_icon_pane

0x41bf,	// (0x0002097f) navi_midp_pane

0x41bf,	// (0x0002097f) navi_navi_pane

0x4883,	// (0x00021043) navi_text_pane_ParamLimits

0x4883,	// (0x00021043) navi_text_pane

0x413d,	// (0x000208fd) status_small_wait_pane_g1

0x4516,	// (0x00020cd6) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0002c0e1) status_small_wait_pane_g

0x2498,	// (0x0001ec58) navi_navi_icon_text_pane

0x24b2,	// (0x0001ec72) navi_navi_pane_g1_ParamLimits

0x24b2,	// (0x0001ec72) navi_navi_pane_g1

0x24a0,	// (0x0001ec60) navi_navi_pane_g2_ParamLimits

0x24a0,	// (0x0001ec60) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0002c0af) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0002c0af) navi_navi_pane_g

0x24c4,	// (0x0001ec84) navi_navi_tabs_pane

0x2498,	// (0x0001ec58) navi_navi_text_pane

0x2498,	// (0x0001ec58) navi_navi_volume_pane

0x9596,	// (0x00025d56) navi_text_pane_t1

0x958a,	// (0x00025d4a) navi_icon_pane_g1

0x94de,	// (0x00025c9e) navi_navi_text_pane_t1

0x8611,	// (0x00024dd1) navi_navi_volume_pane_g1

0xe513,	// (0x0002acd3) volume_small_pane

0x23eb,	// (0x0001ebab) navi_navi_icon_text_pane_g1

0x23f3,	// (0x0001ebb3) navi_navi_icon_text_pane_t1

0x5fdd,	// (0x0002279d) navi_tabs_2_long_pane

0x5fdd,	// (0x0002279d) navi_tabs_2_pane

0x5fdd,	// (0x0002279d) navi_tabs_3_long_pane

0x5fdd,	// (0x0002279d) navi_tabs_3_pane

0x5fdd,	// (0x0002279d) navi_tabs_4_pane

0xe4f3,	// (0x0002acb3) tabs_2_active_pane_ParamLimits

0xe4f3,	// (0x0002acb3) tabs_2_active_pane

0xe503,	// (0x0002acc3) tabs_2_passive_pane_ParamLimits

0xe503,	// (0x0002acc3) tabs_2_passive_pane

0xe4c1,	// (0x0002ac81) tabs_3_active_pane_ParamLimits

0xe4c1,	// (0x0002ac81) tabs_3_active_pane

0xe4d1,	// (0x0002ac91) tabs_3_passive_pane_ParamLimits

0xe4d1,	// (0x0002ac91) tabs_3_passive_pane

0xe4e2,	// (0x0002aca2) tabs_3_passive_pane_cp_ParamLimits

0xe4e2,	// (0x0002aca2) tabs_3_passive_pane_cp

0xe47d,	// (0x0002ac3d) tabs_4_active_pane_ParamLimits

0xe47d,	// (0x0002ac3d) tabs_4_active_pane

0xe48e,	// (0x0002ac4e) tabs_4_passive_pane_ParamLimits

0xe48e,	// (0x0002ac4e) tabs_4_passive_pane

0xe49f,	// (0x0002ac5f) tabs_4_passive_pane_cp_ParamLimits

0xe49f,	// (0x0002ac5f) tabs_4_passive_pane_cp

0xe4b0,	// (0x0002ac70) tabs_4_passive_pane_cp2_ParamLimits

0xe4b0,	// (0x0002ac70) tabs_4_passive_pane_cp2

0xe45d,	// (0x0002ac1d) tabs_2_long_active_pane_ParamLimits

0xe45d,	// (0x0002ac1d) tabs_2_long_active_pane

0xe46d,	// (0x0002ac2d) tabs_2_long_passive_pane_ParamLimits

0xe46d,	// (0x0002ac2d) tabs_2_long_passive_pane

0xe426,	// (0x0002abe6) tabs_3_long_active_pane_ParamLimits

0xe426,	// (0x0002abe6) tabs_3_long_active_pane

0xe439,	// (0x0002abf9) tabs_3_long_passive_pane_ParamLimits

0xe439,	// (0x0002abf9) tabs_3_long_passive_pane

0xe44a,	// (0x0002ac0a) tabs_3_long_passive_pane_cp_ParamLimits

0xe44a,	// (0x0002ac0a) tabs_3_long_passive_pane_cp

0x84cc,	// (0x00024c8c) volume_small_pane_g1

0x84d5,	// (0x00024c95) volume_small_pane_g2

0x84de,	// (0x00024c9e) volume_small_pane_g3

0x84e7,	// (0x00024ca7) volume_small_pane_g4

0x84f0,	// (0x00024cb0) volume_small_pane_g5

0x84f9,	// (0x00024cb9) volume_small_pane_g6

0x8502,	// (0x00024cc2) volume_small_pane_g7

0x850b,	// (0x00024ccb) volume_small_pane_g8

0x8514,	// (0x00024cd4) volume_small_pane_g9

0x851d,	// (0x00024cdd) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0002c07b) volume_small_pane_g

0x420d,	// (0x000209cd) bg_active_tab_pane_cp2_ParamLimits

0x420d,	// (0x000209cd) bg_active_tab_pane_cp2

0x421b,	// (0x000209db) tabs_3_active_pane_g1

0x10d9,	// (0x0001d899) tabs_3_active_pane_t1

0x420d,	// (0x000209cd) bg_passive_tab_pane_cp2_ParamLimits

0x420d,	// (0x000209cd) bg_passive_tab_pane_cp2

0x421b,	// (0x000209db) tabs_3_passive_pane_g1

0x10d9,	// (0x0001d899) tabs_3_passive_pane_t1

0x420d,	// (0x000209cd) bg_active_tab_pane_cp3_ParamLimits

0x420d,	// (0x000209cd) bg_active_tab_pane_cp3

0x9ad8,	// (0x00026298) tabs_4_active_pane_g1

0x10ef,	// (0x0001d8af) tabs_4_active_pane_t1

0x420d,	// (0x000209cd) bg_passive_tab_pane_cp3_ParamLimits

0x420d,	// (0x000209cd) bg_passive_tab_pane_cp3

0x9ad8,	// (0x00026298) tabs_4_1_passive_pane_g1

0x10ef,	// (0x0001d8af) tabs_4_1_passive_pane_t1

0x4cd5,	// (0x00021495) list_highlight_pane_cp2

0x25d9,	// (0x0001ed99) list_set_pane_ParamLimits

0x25d9,	// (0x0001ed99) list_set_pane

0x2667,	// (0x0001ee27) main_pane_set_t1_ParamLimits

0x2667,	// (0x0001ee27) main_pane_set_t1

0x2687,	// (0x0001ee47) main_pane_set_t2_ParamLimits

0x2687,	// (0x0001ee47) main_pane_set_t2

0x269b,	// (0x0001ee5b) main_pane_set_t3_ParamLimits

0x269b,	// (0x0001ee5b) main_pane_set_t3

0x26ad,	// (0x0001ee6d) main_pane_set_t4_ParamLimits

0x26ad,	// (0x0001ee6d) main_pane_set_t4

0x0003,

0xf98b,	// (0x0002c14b) main_pane_set_t_ParamLimits

0xf98b,	// (0x0002c14b) main_pane_set_t

0x26bf,	// (0x0001ee7f) setting_code_pane

0x26c7,	// (0x0001ee87) setting_slider_graphic_pane

0x26c7,	// (0x0001ee87) setting_slider_pane

0x26c7,	// (0x0001ee87) setting_text_pane

0x26c7,	// (0x0001ee87) setting_volume_pane

0xe22b,	// (0x0002a9eb) volume_set_pane

0x4223,	// (0x000209e3) bg_set_opt_pane_cp

0x7150,	// (0x00023910) setting_slider_pane_t1

0xe233,	// (0x0002a9f3) setting_slider_pane_t2

0xe24c,	// (0x0002aa0c) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002bd3a) setting_slider_pane_t

0x7196,	// (0x00023956) slider_set_pane

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp2

0x425d,	// (0x00020a1d) setting_slider_graphic_pane_g1

0xe263,	// (0x0002aa23) setting_slider_graphic_pane_t1

0xe272,	// (0x0002aa32) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002bd41) setting_slider_graphic_pane_t

0xe281,	// (0x0002aa41) slider_set_pane_cp

0x41bf,	// (0x0002097f) input_focus_pane_cp1

0x9a1b,	// (0x000261db) list_set_text_pane

0x413d,	// (0x000208fd) setting_text_pane_g1

0x41bf,	// (0x0002097f) input_focus_pane_cp2

0x413d,	// (0x000208fd) setting_code_pane_g1

0x4266,	// (0x00020a26) setting_code_pane_t1

0x0669,	// (0x0001ce29) set_text_pane_t1_ParamLimits

0x0669,	// (0x0001ce29) set_text_pane_t1

0x481e,	// (0x00020fde) set_opt_bg_pane_g1

0x4826,	// (0x00020fe6) set_opt_bg_pane_g2

0x2599,	// (0x0001ed59) set_opt_bg_pane_g3

0x4836,	// (0x00020ff6) set_opt_bg_pane_g4

0x483e,	// (0x00020ffe) set_opt_bg_pane_g5

0x4846,	// (0x00021006) set_opt_bg_pane_g6

0x25a1,	// (0x0001ed61) set_opt_bg_pane_g7

0x25a9,	// (0x0001ed69) set_opt_bg_pane_g8

0x25b1,	// (0x0001ed71) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0002c138) set_opt_bg_pane_g

0x9a0e,	// (0x000261ce) slider_set_pane_g1

0x8686,	// (0x00024e46) slider_set_pane_g2

0x0006,

0xf969,	// (0x0002c129) slider_set_pane_g

0xe51c,	// (0x0002acdc) volume_set_pane_g1

0xe524,	// (0x0002ace4) volume_set_pane_g2

0xe52c,	// (0x0002acec) volume_set_pane_g3

0xe534,	// (0x0002acf4) volume_set_pane_g4

0xe53c,	// (0x0002acfc) volume_set_pane_g5

0xe544,	// (0x0002ad04) volume_set_pane_g6

0xe54c,	// (0x0002ad0c) volume_set_pane_g7

0xe554,	// (0x0002ad14) volume_set_pane_g8

0xe55c,	// (0x0002ad1c) volume_set_pane_g9

0xe564,	// (0x0002ad24) volume_set_pane_g10

0x0009,

0xf941,	// (0x0002c101) volume_set_pane_g

0x1163,	// (0x0001d923) indicator_pane_ParamLimits

0x1163,	// (0x0001d923) indicator_pane

0x118b,	// (0x0001d94b) main_idle_pane_g2_ParamLimits

0x118b,	// (0x0001d94b) main_idle_pane_g2

0x11bb,	// (0x0001d97b) main_pane_idle_g1_ParamLimits

0x11bb,	// (0x0001d97b) main_pane_idle_g1

0x4274,	// (0x00020a34) popup_clock_digital_analogue_window_ParamLimits

0x4274,	// (0x00020a34) popup_clock_digital_analogue_window

0x11e0,	// (0x0001d9a0) soft_indicator_pane_ParamLimits

0x11e0,	// (0x0001d9a0) soft_indicator_pane

0x11fa,	// (0x0001d9ba) wallpaper_pane_ParamLimits

0x11fa,	// (0x0001d9ba) wallpaper_pane

0x413d,	// (0x000208fd) wallpaper_pane_g1

0x120c,	// (0x0001d9cc) indicator_pane_g1_ParamLimits

0x120c,	// (0x0001d9cc) indicator_pane_g1

0x9b43,	// (0x00026303) navi_navi_icon_text_pane_srt_g1

0x42a2,	// (0x00020a62) soft_indicator_pane_t1

0x42bc,	// (0x00020a7c) aid_ps_area_pane

0x1225,	// (0x0001d9e5) aid_ps_clock_pane

0x42cd,	// (0x00020a8d) aid_ps_indicator_pane

0x42d9,	// (0x00020a99) indicator_ps_pane_ParamLimits

0x42d9,	// (0x00020a99) indicator_ps_pane

0x42e8,	// (0x00020aa8) power_save_pane_g1_ParamLimits

0x42e8,	// (0x00020aa8) power_save_pane_g1

0x42f4,	// (0x00020ab4) power_save_pane_g2_ParamLimits

0x42f4,	// (0x00020ab4) power_save_pane_g2

0x6d98,	// (0x00023558) aid_navinavi_width_pane

0x42bc,	// (0x00020a7c) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002bd46) power_save_pane_g_ParamLimits

0xf586,	// (0x0002bd46) power_save_pane_g

0x4302,	// (0x00020ac2) power_save_pane_t1_ParamLimits

0x4302,	// (0x00020ac2) power_save_pane_t1

0x1225,	// (0x0001d9e5) aid_ps_clock_pane_ParamLimits

0x42cd,	// (0x00020a8d) aid_ps_indicator_pane_ParamLimits

0x4314,	// (0x00020ad4) power_save_pane_t4_ParamLimits

0x4314,	// (0x00020ad4) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002bd4b) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002bd4b) power_save_pane_t

0x433e,	// (0x00020afe) power_save_t3_ParamLimits

0x433e,	// (0x00020afe) power_save_t3

0x4329,	// (0x00020ae9) power_save_t2_ParamLimits

0x4329,	// (0x00020ae9) power_save_t2

0x4353,	// (0x00020b13) indicator_ps_pane_g1

0x1231,	// (0x0001d9f1) ai_gene_pane_ParamLimits

0x1231,	// (0x0001d9f1) ai_gene_pane

0x1248,	// (0x0001da08) ai_links_pane_ParamLimits

0x1248,	// (0x0001da08) ai_links_pane

0x125a,	// (0x0001da1a) indicator_pane_cp1_ParamLimits

0x125a,	// (0x0001da1a) indicator_pane_cp1

0x1269,	// (0x0001da29) main_pane_idle_g1_cp_ParamLimits

0x1269,	// (0x0001da29) main_pane_idle_g1_cp

0x435c,	// (0x00020b1c) popup_ai_links_title_window

0x1281,	// (0x0001da41) soft_indicator_pane_cp1_ParamLimits

0x1281,	// (0x0001da41) soft_indicator_pane_cp1

0x9850,	// (0x00026010) ai_links_pane_g1

0x9859,	// (0x00026019) grid_ai_links_pane

0x24e9,	// (0x0001eca9) ai_gene_pane_1

0x983e,	// (0x00025ffe) ai_gene_pane_2

0x9847,	// (0x00026007) list_highlight_pane_cp4

0x24cd,	// (0x0001ec8d) cell_ai_link_pane_ParamLimits

0x24cd,	// (0x0001ec8d) cell_ai_link_pane

0x9836,	// (0x00025ff6) cell_ai_link_pane_g1

0x4516,	// (0x00020cd6) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0002c0dc) cell_ai_link_pane_g

0x41bf,	// (0x0002097f) grid_highlight_cp2

0x41bf,	// (0x0002097f) bg_popup_sub_pane_cp1

0x4373,	// (0x00020b33) popup_ai_links_title_window_t1

0x9788,	// (0x00025f48) ai_gene_pane_1_g1_ParamLimits

0x9788,	// (0x00025f48) ai_gene_pane_1_g1

0x9794,	// (0x00025f54) ai_gene_pane_1_g2_ParamLimits

0x9794,	// (0x00025f54) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0002c0d2) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0002c0d2) ai_gene_pane_1_g

0x97a1,	// (0x00025f61) ai_gene_pane_1_t1_ParamLimits

0x97a1,	// (0x00025f61) ai_gene_pane_1_t1

0x97d5,	// (0x00025f95) grid_ai_soft_ind_pane

0x9773,	// (0x00025f33) ai_gene_pane_2_t1_ParamLimits

0x9773,	// (0x00025f33) ai_gene_pane_2_t1

0x1295,	// (0x0001da55) main_pane_empty_t1_ParamLimits

0x1295,	// (0x0001da55) main_pane_empty_t1

0x12b2,	// (0x0001da72) main_pane_empty_t2_ParamLimits

0x12b2,	// (0x0001da72) main_pane_empty_t2

0x12ca,	// (0x0001da8a) main_pane_empty_t3_ParamLimits

0x12ca,	// (0x0001da8a) main_pane_empty_t3

0x12dd,	// (0x0001da9d) main_pane_empty_t4_ParamLimits

0x12dd,	// (0x0001da9d) main_pane_empty_t4

0x12f0,	// (0x0001dab0) main_pane_empty_t5_ParamLimits

0x12f0,	// (0x0001dab0) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002bd50) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002bd50) main_pane_empty_t

0x4883,	// (0x00021043) bg_popup_window_pane_ParamLimits

0x4883,	// (0x00021043) bg_popup_window_pane

0x94ed,	// (0x00025cad) find_popup_pane_cp2_ParamLimits

0x94ed,	// (0x00025cad) find_popup_pane_cp2

0x94f9,	// (0x00025cb9) heading_pane_ParamLimits

0x94f9,	// (0x00025cb9) heading_pane

0x41bf,	// (0x0002097f) bg_popup_sub_pane

0x2410,	// (0x0001ebd0) bg_popup_window_pane_g1_ParamLimits

0x2410,	// (0x0001ebd0) bg_popup_window_pane_g1

0x241f,	// (0x0001ebdf) bg_popup_window_pane_g2_ParamLimits

0x241f,	// (0x0001ebdf) bg_popup_window_pane_g2

0x242b,	// (0x0001ebeb) bg_popup_window_pane_g3_ParamLimits

0x242b,	// (0x0001ebeb) bg_popup_window_pane_g3

0x2437,	// (0x0001ebf7) bg_popup_window_pane_g4_ParamLimits

0x2437,	// (0x0001ebf7) bg_popup_window_pane_g4

0x2446,	// (0x0001ec06) bg_popup_window_pane_g5_ParamLimits

0x2446,	// (0x0001ec06) bg_popup_window_pane_g5

0x2456,	// (0x0001ec16) bg_popup_window_pane_g6_ParamLimits

0x2456,	// (0x0001ec16) bg_popup_window_pane_g6

0x2462,	// (0x0001ec22) bg_popup_window_pane_g7_ParamLimits

0x2462,	// (0x0001ec22) bg_popup_window_pane_g7

0x2471,	// (0x0001ec31) bg_popup_window_pane_g8_ParamLimits

0x2471,	// (0x0001ec31) bg_popup_window_pane_g8

0x2480,	// (0x0001ec40) bg_popup_window_pane_g9_ParamLimits

0x2480,	// (0x0001ec40) bg_popup_window_pane_g9

0x94d2,	// (0x00025c92) bg_popup_window_pane_g10_ParamLimits

0x94d2,	// (0x00025c92) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0002c09a) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0002c09a) bg_popup_window_pane_g

0x9489,	// (0x00025c49) bg_popup_heading_pane_ParamLimits

0x9489,	// (0x00025c49) bg_popup_heading_pane

0x870e,	// (0x00024ece) tabs_4_passive_pane_cp_srt_ParamLimits

0x870e,	// (0x00024ece) tabs_4_passive_pane_cp_srt

0x8720,	// (0x00024ee0) tabs_4_passive_pane_srt_ParamLimits

0x949d,	// (0x00025c5d) heading_pane_g2

0x8720,	// (0x00024ee0) tabs_4_passive_pane_srt

0x593d,	// (0x000220fd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x593d,	// (0x000220fd) bg_passive_tab_pane_cp3_srt

0x94a5,	// (0x00025c65) heading_pane_t1_ParamLimits

0x94a5,	// (0x00025c65) heading_pane_t1

0x94bc,	// (0x00025c7c) heading_pane_t2_ParamLimits

0x94bc,	// (0x00025c7c) heading_pane_t2

0x0001,

0xf8d5,	// (0x0002c095) heading_pane_t_ParamLimits

0xf8d5,	// (0x0002c095) heading_pane_t

0x5f5d,	// (0x0002271d) bg_popup_heading_pane_g1

0x5fee,	// (0x000227ae) bg_popup_heading_pane_g2

0x5ff6,	// (0x000227b6) bg_popup_heading_pane_g3

0x5ffe,	// (0x000227be) bg_popup_heading_pane_g4

0x6006,	// (0x000227c6) bg_popup_heading_pane_g5

0x600e,	// (0x000227ce) bg_popup_heading_pane_g6

0x6016,	// (0x000227d6) bg_popup_heading_pane_g7

0x601e,	// (0x000227de) bg_popup_heading_pane_g8

0x6026,	// (0x000227e6) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0002c051) bg_popup_heading_pane_g

0x5843,	// (0x00022003) bg_popup_sub_pane_g1

0x584b,	// (0x0002200b) bg_popup_sub_pane_g2

0x5853,	// (0x00022013) bg_popup_sub_pane_g3

0x585b,	// (0x0002201b) bg_popup_sub_pane_g4

0x5863,	// (0x00022023) bg_popup_sub_pane_g5

0x586b,	// (0x0002202b) bg_popup_sub_pane_g6

0x5873,	// (0x00022033) bg_popup_sub_pane_g7

0x587b,	// (0x0002203b) bg_popup_sub_pane_g8

0x5883,	// (0x00022043) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0002c02b) bg_popup_sub_pane_g

0x420d,	// (0x000209cd) bg_popup_window_pane_cp5_ParamLimits

0x420d,	// (0x000209cd) bg_popup_window_pane_cp5

0x4390,	// (0x00020b50) popup_note_window_g1_ParamLimits

0x4390,	// (0x00020b50) popup_note_window_g1

0x439c,	// (0x00020b5c) popup_note_window_t1_ParamLimits

0x439c,	// (0x00020b5c) popup_note_window_t1

0x43b2,	// (0x00020b72) popup_note_window_t2_ParamLimits

0x43b2,	// (0x00020b72) popup_note_window_t2

0x43c8,	// (0x00020b88) popup_note_window_t3_ParamLimits

0x43c8,	// (0x00020b88) popup_note_window_t3

0x43de,	// (0x00020b9e) popup_note_window_t4_ParamLimits

0x43de,	// (0x00020b9e) popup_note_window_t4

0x4406,	// (0x00020bc6) popup_note_window_t5_ParamLimits

0x4406,	// (0x00020bc6) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002bd5b) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002bd5b) popup_note_window_t

0x442a,	// (0x00020bea) bg_popup_window_pane_cp6_ParamLimits

0x442a,	// (0x00020bea) bg_popup_window_pane_cp6

0x5ed9,	// (0x00022699) popup_note_image_window_g1_ParamLimits

0x5ed9,	// (0x00022699) popup_note_image_window_g1

0x5ee5,	// (0x000226a5) popup_note_image_window_g2_ParamLimits

0x5ee5,	// (0x000226a5) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0002c01f) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0002c01f) popup_note_image_window_g

0x5efe,	// (0x000226be) popup_note_image_window_t1_ParamLimits

0x5efe,	// (0x000226be) popup_note_image_window_t1

0x5f17,	// (0x000226d7) popup_note_image_window_t2_ParamLimits

0x5f17,	// (0x000226d7) popup_note_image_window_t2

0x5f30,	// (0x000226f0) popup_note_image_window_t3_ParamLimits

0x5f30,	// (0x000226f0) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0002c024) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0002c024) popup_note_image_window_t

0x5dc4,	// (0x00022584) bg_popup_window_pane_cp7_ParamLimits

0x5dc4,	// (0x00022584) bg_popup_window_pane_cp7

0x5df4,	// (0x000225b4) popup_note_wait_window_g1_ParamLimits

0x5df4,	// (0x000225b4) popup_note_wait_window_g1

0x5e00,	// (0x000225c0) popup_note_wait_window_g2_ParamLimits

0x5e00,	// (0x000225c0) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0002c00d) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0002c00d) popup_note_wait_window_g

0x5e18,	// (0x000225d8) popup_note_wait_window_t1_ParamLimits

0x5e18,	// (0x000225d8) popup_note_wait_window_t1

0x5e3f,	// (0x000225ff) popup_note_wait_window_t2_ParamLimits

0x5e3f,	// (0x000225ff) popup_note_wait_window_t2

0x5e5c,	// (0x0002261c) popup_note_wait_window_t3_ParamLimits

0x5e5c,	// (0x0002261c) popup_note_wait_window_t3

0x5e6f,	// (0x0002262f) popup_note_wait_window_t4_ParamLimits

0x5e6f,	// (0x0002262f) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0002c014) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0002c014) popup_note_wait_window_t

0x5e94,	// (0x00022654) wait_bar_pane_ParamLimits

0x5e94,	// (0x00022654) wait_bar_pane

0x41bf,	// (0x0002097f) wait_anim_pane

0x41bf,	// (0x0002097f) wait_border_pane

0x413d,	// (0x000208fd) wait_anim_pane_g1

0x413d,	// (0x000208fd) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002bedf) wait_anim_pane_g

0x5d74,	// (0x00022534) wait_border_pane_g1

0x5d7d,	// (0x0002253d) wait_border_pane_g2

0x5d86,	// (0x00022546) wait_border_pane_g3

0x0002,

0xf846,	// (0x0002c006) wait_border_pane_g

0x5be4,	// (0x000223a4) bg_popup_window_pane_cp16_ParamLimits

0x5be4,	// (0x000223a4) bg_popup_window_pane_cp16

0x5ce4,	// (0x000224a4) indicator_popup_pane_cp4_ParamLimits

0x5ce4,	// (0x000224a4) indicator_popup_pane_cp4

0x5cf8,	// (0x000224b8) popup_query_data_window_t1_ParamLimits

0x5cf8,	// (0x000224b8) popup_query_data_window_t1

0x5d0a,	// (0x000224ca) popup_query_data_window_t2_ParamLimits

0x5d0a,	// (0x000224ca) popup_query_data_window_t2

0x5d23,	// (0x000224e3) popup_query_data_window_t3_ParamLimits

0x5d23,	// (0x000224e3) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0002bfff) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0002bfff) popup_query_data_window_t

0x5d3d,	// (0x000224fd) query_popup_data_pane_ParamLimits

0x5d3d,	// (0x000224fd) query_popup_data_pane

0x5d51,	// (0x00022511) query_popup_data_pane_cp1_ParamLimits

0x5d51,	// (0x00022511) query_popup_data_pane_cp1

0x5be4,	// (0x000223a4) bg_popup_window_pane_cp10_ParamLimits

0x5be4,	// (0x000223a4) bg_popup_window_pane_cp10

0x5c16,	// (0x000223d6) indicator_popup_pane_ParamLimits

0x5c16,	// (0x000223d6) indicator_popup_pane

0x5c38,	// (0x000223f8) popup_query_code_window_t1_ParamLimits

0x5c38,	// (0x000223f8) popup_query_code_window_t1

0x5c52,	// (0x00022412) popup_query_code_window_t2_ParamLimits

0x5c52,	// (0x00022412) popup_query_code_window_t2

0x5c9b,	// (0x0002245b) popup_query_code_window_t3_ParamLimits

0x5c9b,	// (0x0002245b) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0002bff8) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0002bff8) popup_query_code_window_t

0x5cca,	// (0x0002248a) query_popup_pane_ParamLimits

0x5cca,	// (0x0002248a) query_popup_pane

0x442a,	// (0x00020bea) bg_popup_window_pane_cp15_ParamLimits

0x442a,	// (0x00020bea) bg_popup_window_pane_cp15

0x4448,	// (0x00020c08) indicator_popup_pane_cp1_ParamLimits

0x4448,	// (0x00020c08) indicator_popup_pane_cp1

0x445b,	// (0x00020c1b) indicator_popup_pane_cp2_ParamLimits

0x445b,	// (0x00020c1b) indicator_popup_pane_cp2

0x446e,	// (0x00020c2e) popup_query_data_code_window_g1_ParamLimits

0x446e,	// (0x00020c2e) popup_query_data_code_window_g1

0x4481,	// (0x00020c41) popup_query_data_code_window_t1_ParamLimits

0x4481,	// (0x00020c41) popup_query_data_code_window_t1

0x4493,	// (0x00020c53) popup_query_data_code_window_t2_ParamLimits

0x4493,	// (0x00020c53) popup_query_data_code_window_t2

0x44a5,	// (0x00020c65) popup_query_data_code_window_t3_ParamLimits

0x44a5,	// (0x00020c65) popup_query_data_code_window_t3

0x44bb,	// (0x00020c7b) popup_query_data_code_window_t4_ParamLimits

0x44bb,	// (0x00020c7b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002bd66) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002bd66) popup_query_data_code_window_t

0x82e6,	// (0x00024aa6) list_single_midp_graphic_pane_g3

0x44d3,	// (0x00020c93) query_popup_data_pane_cp2_ParamLimits

0x44e6,	// (0x00020ca6) query_popup_pane_cp2_ParamLimits

0x44e6,	// (0x00020ca6) query_popup_pane_cp2

0x41bf,	// (0x0002097f) bg_popup_window_pane_cp11

0x5bdc,	// (0x0002239c) heading_pane_cp5

0x4572,	// (0x00020d32) listscroll_popup_info_pane

0x41bf,	// (0x0002097f) input_focus_pane_cp3

0x44f9,	// (0x00020cb9) query_popup_pane_t1

0x4507,	// (0x00020cc7) list_popup_info_pane_ParamLimits

0x4507,	// (0x00020cc7) list_popup_info_pane

0x4516,	// (0x00020cd6) listscroll_popup_info_pane_g1

0x451e,	// (0x00020cde) scroll_pane_cp7

0x4526,	// (0x00020ce6) popup_info_list_pane_t1_ParamLimits

0x4526,	// (0x00020ce6) popup_info_list_pane_t1

0x4540,	// (0x00020d00) popup_info_list_pane_t2_ParamLimits

0x4540,	// (0x00020d00) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002bd6f) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002bd6f) popup_info_list_pane_t

0x41bf,	// (0x0002097f) bg_popup_window_pane_cp12

0x9b5d,	// (0x0002631d) find_popup_pane

0x4223,	// (0x000209e3) bg_popup_window_pane_cp3

0x455a,	// (0x00020d1a) heading_pane_cp3

0x4566,	// (0x00020d26) listscroll_popup_graphic_pane

0x41bf,	// (0x0002097f) bg_popup_window_pane_cp4

0x1353,	// (0x0001db13) heading_pane_cp4

0x4572,	// (0x00020d32) listscroll_popup_colour_pane

0x457a,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x457a,	// (0x00020d3a) cell_large_graphic_colour_none_popup_pane

0x135b,	// (0x0001db1b) grid_large_graphic_colour_popup_pane_ParamLimits

0x135b,	// (0x0001db1b) grid_large_graphic_colour_popup_pane

0x1377,	// (0x0001db37) listscroll_popup_colour_pane_g1_ParamLimits

0x1377,	// (0x0001db37) listscroll_popup_colour_pane_g1

0x138e,	// (0x0001db4e) listscroll_popup_colour_pane_g2_ParamLimits

0x138e,	// (0x0001db4e) listscroll_popup_colour_pane_g2

0x458a,	// (0x00020d4a) listscroll_popup_colour_pane_g3_ParamLimits

0x458a,	// (0x00020d4a) listscroll_popup_colour_pane_g3

0x13a2,	// (0x0001db62) listscroll_popup_colour_pane_g4_ParamLimits

0x13a2,	// (0x0001db62) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002bd74) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002bd74) listscroll_popup_colour_pane_g

0x459a,	// (0x00020d5a) scroll_pane_cp6_ParamLimits

0x459a,	// (0x00020d5a) scroll_pane_cp6

0x13b1,	// (0x0001db71) cell_large_graphic_colour_popup_pane_ParamLimits

0x13b1,	// (0x0001db71) cell_large_graphic_colour_popup_pane

0x45ac,	// (0x00020d6c) cell_large_graphic_colour_none_popup_pane_t1

0x41bf,	// (0x0002097f) grid_highlight_pane_cp5

0x45bb,	// (0x00020d7b) cell_large_graphic_colour_popup_pane_g1

0x45c3,	// (0x00020d83) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002bd7d) cell_large_graphic_colour_popup_pane_g

0x45cb,	// (0x00020d8b) cell_large_graphic_colour_popup_pane_g2_copy1

0x45d4,	// (0x00020d94) grid_highlight_pane_cp4

0x45dc,	// (0x00020d9c) bg_popup_window_pane_cp8_ParamLimits

0x45dc,	// (0x00020d9c) bg_popup_window_pane_cp8

0x45f7,	// (0x00020db7) popup_snote_single_text_window_g1_ParamLimits

0x45f7,	// (0x00020db7) popup_snote_single_text_window_g1

0x4609,	// (0x00020dc9) popup_snote_single_text_window_t1_ParamLimits

0x4609,	// (0x00020dc9) popup_snote_single_text_window_t1

0x461c,	// (0x00020ddc) popup_snote_single_text_window_t2_ParamLimits

0x461c,	// (0x00020ddc) popup_snote_single_text_window_t2

0x462f,	// (0x00020def) popup_snote_single_text_window_t3_ParamLimits

0x462f,	// (0x00020def) popup_snote_single_text_window_t3

0x4668,	// (0x00020e28) popup_snote_single_text_window_t4_ParamLimits

0x4668,	// (0x00020e28) popup_snote_single_text_window_t4

0x469c,	// (0x00020e5c) popup_snote_single_text_window_t5_ParamLimits

0x469c,	// (0x00020e5c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002bd82) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002bd82) popup_snote_single_text_window_t

0x46cb,	// (0x00020e8b) bg_popup_window_pane_cp9_ParamLimits

0x46cb,	// (0x00020e8b) bg_popup_window_pane_cp9

0x45f7,	// (0x00020db7) popup_snote_single_graphic_window_g1_ParamLimits

0x45f7,	// (0x00020db7) popup_snote_single_graphic_window_g1

0x46d9,	// (0x00020e99) popup_snote_single_graphic_window_g2_ParamLimits

0x46d9,	// (0x00020e99) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002bd8d) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002bd8d) popup_snote_single_graphic_window_g

0x46e5,	// (0x00020ea5) popup_snote_single_graphic_window_t1_ParamLimits

0x46e5,	// (0x00020ea5) popup_snote_single_graphic_window_t1

0x46f8,	// (0x00020eb8) popup_snote_single_graphic_window_t2_ParamLimits

0x46f8,	// (0x00020eb8) popup_snote_single_graphic_window_t2

0x462f,	// (0x00020def) popup_snote_single_graphic_window_t3_ParamLimits

0x462f,	// (0x00020def) popup_snote_single_graphic_window_t3

0x4668,	// (0x00020e28) popup_snote_single_graphic_window_t4_ParamLimits

0x4668,	// (0x00020e28) popup_snote_single_graphic_window_t4

0x469c,	// (0x00020e5c) popup_snote_single_graphic_window_t5_ParamLimits

0x469c,	// (0x00020e5c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002bd92) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002bd92) popup_snote_single_graphic_window_t

0x27c2,	// (0x0001ef82) grid_graphic_popup_pane_ParamLimits

0x27c2,	// (0x0001ef82) grid_graphic_popup_pane

0x27e5,	// (0x0001efa5) listscroll_popup_graphic_pane_g1_ParamLimits

0x27e5,	// (0x0001efa5) listscroll_popup_graphic_pane_g1

0x27f9,	// (0x0001efb9) listscroll_popup_graphic_pane_g2_ParamLimits

0x27f9,	// (0x0001efb9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0002c175) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0002c175) listscroll_popup_graphic_pane_g

0x9b15,	// (0x000262d5) scroll_pane_cp5

0x277d,	// (0x0001ef3d) cell_graphic_popup_pane_ParamLimits

0x277d,	// (0x0001ef3d) cell_graphic_popup_pane

0x9ae0,	// (0x000262a0) cell_graphic_popup_pane_g1

0x9ae8,	// (0x000262a8) cell_graphic_popup_pane_g2

0x45cb,	// (0x00020d8b) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0002c16e) cell_graphic_popup_pane_g

0x9af1,	// (0x000262b1) cell_graphic_popup_pane_t2

0x45d4,	// (0x00020d94) grid_highlight_pane_cp3

0x471d,	// (0x00020edd) list_gen_pane_ParamLimits

0x471d,	// (0x00020edd) list_gen_pane

0x4746,	// (0x00020f06) scroll_pane

0x2750,	// (0x0001ef10) bg_list_pane_g1_ParamLimits

0x2750,	// (0x0001ef10) bg_list_pane_g1

0x9a8f,	// (0x0002624f) bg_list_pane_g2_ParamLimits

0x9a8f,	// (0x0002624f) bg_list_pane_g2

0x9aa2,	// (0x00026262) bg_list_pane_g3_ParamLimits

0x9aa2,	// (0x00026262) bg_list_pane_g3

0x9ab4,	// (0x00026274) bg_list_pane_g4_ParamLimits

0x9ab4,	// (0x00026274) bg_list_pane_g4

0x276b,	// (0x0001ef2b) bg_list_pane_g5_ParamLimits

0x276b,	// (0x0001ef2b) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0002c163) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0002c163) bg_list_pane_g

0x26f4,	// (0x0001eeb4) list_double2_graphic_large_graphic_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double2_graphic_large_graphic_pane

0x26f4,	// (0x0001eeb4) list_double2_graphic_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double2_graphic_pane

0x26f4,	// (0x0001eeb4) list_double2_large_graphic_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double2_large_graphic_pane

0x2706,	// (0x0001eec6) list_double2_pane_ParamLimits

0x2706,	// (0x0001eec6) list_double2_pane

0x26f4,	// (0x0001eeb4) list_double_graphic_heading_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_graphic_heading_pane

0x26f4,	// (0x0001eeb4) list_double_graphic_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_graphic_pane

0x26f4,	// (0x0001eeb4) list_double_heading_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_heading_pane

0x26f4,	// (0x0001eeb4) list_double_large_graphic_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_large_graphic_pane

0x26f4,	// (0x0001eeb4) list_double_number_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_number_pane

0x26f4,	// (0x0001eeb4) list_double_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_pane

0x26f4,	// (0x0001eeb4) list_double_time_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_double_time_pane

0x26f4,	// (0x0001eeb4) list_setting_number_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_setting_number_pane

0x26f4,	// (0x0001eeb4) list_setting_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_setting_pane

0x0c50,	// (0x0001d410) list_single_2graphic_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_2graphic_pane

0x0c50,	// (0x0001d410) list_single_graphic_heading_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_graphic_heading_pane

0x0c50,	// (0x0001d410) list_single_graphic_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_graphic_pane

0x0c50,	// (0x0001d410) list_single_heading_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_heading_pane

0x26f4,	// (0x0001eeb4) list_single_large_graphic_pane_ParamLimits

0x26f4,	// (0x0001eeb4) list_single_large_graphic_pane

0x0c50,	// (0x0001d410) list_single_number_heading_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_number_heading_pane

0x0c50,	// (0x0001d410) list_single_number_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_number_pane

0x0c50,	// (0x0001d410) list_single_pane_ParamLimits

0x0c50,	// (0x0001d410) list_single_pane

0x41bf,	// (0x0002097f) list_highlight_pane_cp1

0xb74d,	// (0x00027f0d) list_single_pane_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_single_pane_g1

0xb759,	// (0x00027f19) list_single_pane_g2_ParamLimits

0xb759,	// (0x00027f19) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_single_pane_g

0xb8cc,	// (0x0002808c) list_single_pane_t1_ParamLimits

0xb8cc,	// (0x0002808c) list_single_pane_t1

0xb74d,	// (0x00027f0d) list_single_number_pane_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_single_number_pane_g1

0xb759,	// (0x00027f19) list_single_number_pane_g2_ParamLimits

0xb759,	// (0x00027f19) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_single_number_pane_g

0xb765,	// (0x00027f25) list_single_number_pane_t1_ParamLimits

0xb765,	// (0x00027f25) list_single_number_pane_t1

0x0c13,	// (0x0001d3d3) list_single_number_pane_t2_ParamLimits

0x0c13,	// (0x0001d3d3) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0002c124) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0002c124) list_single_number_pane_t

0xb022,	// (0x000277e2) list_single_graphic_pane_g1_ParamLimits

0xb022,	// (0x000277e2) list_single_graphic_pane_g1

0xb74d,	// (0x00027f0d) list_single_graphic_pane_g2_ParamLimits

0xb74d,	// (0x00027f0d) list_single_graphic_pane_g2

0xb759,	// (0x00027f19) list_single_graphic_pane_g3_ParamLimits

0xb759,	// (0x00027f19) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002bd9d) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002bd9d) list_single_graphic_pane_g

0xb765,	// (0x00027f25) list_single_graphic_pane_t1_ParamLimits

0xb765,	// (0x00027f25) list_single_graphic_pane_t1

0xb74d,	// (0x00027f0d) list_single_heading_pane_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_single_heading_pane_g1

0xb759,	// (0x00027f19) list_single_heading_pane_g2_ParamLimits

0xb759,	// (0x00027f19) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_single_heading_pane_g

0x0683,	// (0x0001ce43) list_single_heading_pane_t1_ParamLimits

0x0683,	// (0x0001ce43) list_single_heading_pane_t1

0x0699,	// (0x0001ce59) list_single_heading_pane_t2_ParamLimits

0x0699,	// (0x0001ce59) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002bda9) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002bda9) list_single_heading_pane_t

0xb74d,	// (0x00027f0d) list_single_number_heading_pane_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_single_number_heading_pane_g1

0xb759,	// (0x00027f19) list_single_number_heading_pane_g2_ParamLimits

0xb759,	// (0x00027f19) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_single_number_heading_pane_g

0x0683,	// (0x0001ce43) list_single_number_heading_pane_t1_ParamLimits

0x0683,	// (0x0001ce43) list_single_number_heading_pane_t1

0x06ab,	// (0x0001ce6b) list_single_number_heading_pane_t2_ParamLimits

0x06ab,	// (0x0001ce6b) list_single_number_heading_pane_t2

0xb8a8,	// (0x00028068) list_single_number_heading_pane_t3_ParamLimits

0xb8a8,	// (0x00028068) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002bdae) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002bdae) list_single_number_heading_pane_t

0xb022,	// (0x000277e2) list_single_graphic_heading_pane_g1_ParamLimits

0xb022,	// (0x000277e2) list_single_graphic_heading_pane_g1

0x06bd,	// (0x0001ce7d) list_single_graphic_heading_pane_g4_ParamLimits

0x06bd,	// (0x0001ce7d) list_single_graphic_heading_pane_g4

0xb759,	// (0x00027f19) list_single_graphic_heading_pane_g5_ParamLimits

0xb759,	// (0x00027f19) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002bdb5) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002bdb5) list_single_graphic_heading_pane_g

0x0683,	// (0x0001ce43) list_single_graphic_heading_pane_t1_ParamLimits

0x0683,	// (0x0001ce43) list_single_graphic_heading_pane_t1

0x06ce,	// (0x0001ce8e) list_single_graphic_heading_pane_t2_ParamLimits

0x06ce,	// (0x0001ce8e) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002bdbc) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002bdbc) list_single_graphic_heading_pane_t

0xb8e2,	// (0x000280a2) list_single_large_graphic_pane_g1_ParamLimits

0xb8e2,	// (0x000280a2) list_single_large_graphic_pane_g1

0xb8ee,	// (0x000280ae) list_single_large_graphic_pane_g2_ParamLimits

0xb8ee,	// (0x000280ae) list_single_large_graphic_pane_g2

0xb8fa,	// (0x000280ba) list_single_large_graphic_pane_g3_ParamLimits

0xb8fa,	// (0x000280ba) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002bdc1) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002bdc1) list_single_large_graphic_pane_g

0x5d7d,	// (0x0002253d) wait_border_pane_g2_copy1

0x06e0,	// (0x0001cea0) list_single_large_graphic_pane_g4_cp2

0xb906,	// (0x000280c6) list_single_large_graphic_pane_t1_ParamLimits

0xb906,	// (0x000280c6) list_single_large_graphic_pane_t1

0xb02e,	// (0x000277ee) list_double_pane_g1_ParamLimits

0xb02e,	// (0x000277ee) list_double_pane_g1

0xb03a,	// (0x000277fa) list_double_pane_g2_ParamLimits

0xb03a,	// (0x000277fa) list_double_pane_g2

0x0001,

0xf608,	// (0x0002bdc8) list_double_pane_g_ParamLimits

0xf608,	// (0x0002bdc8) list_double_pane_g

0xb80a,	// (0x00027fca) list_double_pane_t1_ParamLimits

0xb80a,	// (0x00027fca) list_double_pane_t1

0x06e8,	// (0x0001cea8) list_double_pane_t2_ParamLimits

0x06e8,	// (0x0001cea8) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002bdcd) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002bdcd) list_double_pane_t

0x06fa,	// (0x0001ceba) list_double2_pane_g1_ParamLimits

0x06fa,	// (0x0001ceba) list_double2_pane_g1

0xb20d,	// (0x000279cd) list_double2_pane_g2_ParamLimits

0xb20d,	// (0x000279cd) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002bdd2) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002bdd2) list_double2_pane_g

0x070b,	// (0x0001cecb) list_double2_pane_t1_ParamLimits

0x070b,	// (0x0001cecb) list_double2_pane_t1

0x0721,	// (0x0001cee1) list_double2_pane_t2_ParamLimits

0x0721,	// (0x0001cee1) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002bdd7) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002bdd7) list_double2_pane_t

0xb02e,	// (0x000277ee) list_double_number_pane_g1_ParamLimits

0xb02e,	// (0x000277ee) list_double_number_pane_g1

0xb03a,	// (0x000277fa) list_double_number_pane_g2_ParamLimits

0xb03a,	// (0x000277fa) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002bdc8) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002bdc8) list_double_number_pane_g

0x0733,	// (0x0001cef3) list_double_number_pane_t1_ParamLimits

0x0733,	// (0x0001cef3) list_double_number_pane_t1

0xb046,	// (0x00027806) list_double_number_pane_t2_ParamLimits

0xb046,	// (0x00027806) list_double_number_pane_t2

0x0745,	// (0x0001cf05) list_double_number_pane_t3_ParamLimits

0x0745,	// (0x0001cf05) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002bddc) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002bddc) list_double_number_pane_t

0xb022,	// (0x000277e2) list_double_graphic_pane_g1_ParamLimits

0xb022,	// (0x000277e2) list_double_graphic_pane_g1

0x0757,	// (0x0001cf17) list_double_graphic_pane_g2_ParamLimits

0x0757,	// (0x0001cf17) list_double_graphic_pane_g2

0x0766,	// (0x0001cf26) list_double_graphic_pane_g3_ParamLimits

0x0766,	// (0x0001cf26) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002bde3) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002bde3) list_double_graphic_pane_g

0x077e,	// (0x0001cf3e) list_double_graphic_pane_t1_ParamLimits

0x077e,	// (0x0001cf3e) list_double_graphic_pane_t1

0x0794,	// (0x0001cf54) list_double_graphic_pane_t2_ParamLimits

0x0794,	// (0x0001cf54) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002bdec) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002bdec) list_double_graphic_pane_t

0x07a6,	// (0x0001cf66) list_double2_graphic_pane_g1_ParamLimits

0x07a6,	// (0x0001cf66) list_double2_graphic_pane_g1

0xb02e,	// (0x000277ee) list_double2_graphic_pane_g2_ParamLimits

0xb02e,	// (0x000277ee) list_double2_graphic_pane_g2

0xb03a,	// (0x000277fa) list_double2_graphic_pane_g3_ParamLimits

0xb03a,	// (0x000277fa) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002bdf1) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002bdf1) list_double2_graphic_pane_g

0x07b2,	// (0x0001cf72) list_double2_graphic_pane_t1_ParamLimits

0x07b2,	// (0x0001cf72) list_double2_graphic_pane_t1

0x07c8,	// (0x0001cf88) list_double2_graphic_pane_t2_ParamLimits

0x07c8,	// (0x0001cf88) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002bdf8) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002bdf8) list_double2_graphic_pane_t

0x07da,	// (0x0001cf9a) list_double_large_graphic_pane_g1_ParamLimits

0x07da,	// (0x0001cf9a) list_double_large_graphic_pane_g1

0x0803,	// (0x0001cfc3) list_double_large_graphic_pane_g2_ParamLimits

0x0803,	// (0x0001cfc3) list_double_large_graphic_pane_g2

0xb03a,	// (0x000277fa) list_double_large_graphic_pane_g3_ParamLimits

0xb03a,	// (0x000277fa) list_double_large_graphic_pane_g3

0x0814,	// (0x0001cfd4) list_double_large_graphic_pane_g4_ParamLimits

0x0814,	// (0x0001cfd4) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002bdfd) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002bdfd) list_double_large_graphic_pane_g

0x0825,	// (0x0001cfe5) list_double_large_graphic_pane_t1_ParamLimits

0x0825,	// (0x0001cfe5) list_double_large_graphic_pane_t1

0x083e,	// (0x0001cffe) list_double_large_graphic_pane_t2_ParamLimits

0x083e,	// (0x0001cffe) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002be08) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002be08) list_double_large_graphic_pane_t

0x0850,	// (0x0001d010) list_double2_large_graphic_pane_g1_ParamLimits

0x0850,	// (0x0001d010) list_double2_large_graphic_pane_g1

0x085c,	// (0x0001d01c) list_double2_large_graphic_pane_g2_ParamLimits

0x085c,	// (0x0001d01c) list_double2_large_graphic_pane_g2

0x086d,	// (0x0001d02d) list_double2_large_graphic_pane_g3_ParamLimits

0x086d,	// (0x0001d02d) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002be0d) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002be0d) list_double2_large_graphic_pane_g

0x0879,	// (0x0001d039) list_double2_large_graphic_pane_t1_ParamLimits

0x0879,	// (0x0001d039) list_double2_large_graphic_pane_t1

0x088f,	// (0x0001d04f) list_double2_large_graphic_pane_t2_ParamLimits

0x088f,	// (0x0001d04f) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002be14) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002be14) list_double2_large_graphic_pane_t

0x08a1,	// (0x0001d061) list_double_heading_pane_g1_ParamLimits

0x08a1,	// (0x0001d061) list_double_heading_pane_g1

0x08b2,	// (0x0001d072) list_double_heading_pane_g2_ParamLimits

0x08b2,	// (0x0001d072) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002be19) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002be19) list_double_heading_pane_g

0x08be,	// (0x0001d07e) list_double_heading_pane_t1_ParamLimits

0x08be,	// (0x0001d07e) list_double_heading_pane_t1

0x08d4,	// (0x0001d094) list_double_heading_pane_t2_ParamLimits

0x08d4,	// (0x0001d094) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002be1e) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002be1e) list_double_heading_pane_t

0x08e6,	// (0x0001d0a6) list_double_graphic_heading_pane_g1_ParamLimits

0x08e6,	// (0x0001d0a6) list_double_graphic_heading_pane_g1

0x08a1,	// (0x0001d061) list_double_graphic_heading_pane_g2_ParamLimits

0x08a1,	// (0x0001d061) list_double_graphic_heading_pane_g2

0x08b2,	// (0x0001d072) list_double_graphic_heading_pane_g3_ParamLimits

0x08b2,	// (0x0001d072) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002be23) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002be23) list_double_graphic_heading_pane_g

0x08f2,	// (0x0001d0b2) list_double_graphic_heading_pane_t1_ParamLimits

0x08f2,	// (0x0001d0b2) list_double_graphic_heading_pane_t1

0x07c8,	// (0x0001cf88) list_double_graphic_heading_pane_t2_ParamLimits

0x07c8,	// (0x0001cf88) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002be2a) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002be2a) list_double_graphic_heading_pane_t

0x0803,	// (0x0001cfc3) list_double_time_pane_g1_ParamLimits

0x0803,	// (0x0001cfc3) list_double_time_pane_g1

0xb03a,	// (0x000277fa) list_double_time_pane_g2_ParamLimits

0xb03a,	// (0x000277fa) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0002be2f) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0002be2f) list_double_time_pane_g

0xb05c,	// (0x0002781c) list_double_time_pane_t1_ParamLimits

0xb05c,	// (0x0002781c) list_double_time_pane_t1

0x0908,	// (0x0001d0c8) list_double_time_pane_t2_ParamLimits

0x0908,	// (0x0001d0c8) list_double_time_pane_t2

0x091a,	// (0x0001d0da) list_double_time_pane_t3_ParamLimits

0x091a,	// (0x0001d0da) list_double_time_pane_t3

0x092c,	// (0x0001d0ec) list_double_time_pane_t4_ParamLimits

0x092c,	// (0x0001d0ec) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0002be34) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0002be34) list_double_time_pane_t

0x093e,	// (0x0001d0fe) list_setting_pane_g1_ParamLimits

0x093e,	// (0x0001d0fe) list_setting_pane_g1

0x08b2,	// (0x0001d072) list_setting_pane_g2_ParamLimits

0x08b2,	// (0x0001d072) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002be3d) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002be3d) list_setting_pane_g

0x094a,	// (0x0001d10a) list_setting_pane_t1_ParamLimits

0x094a,	// (0x0001d10a) list_setting_pane_t1

0x0961,	// (0x0001d121) list_setting_pane_t2_ParamLimits

0x0961,	// (0x0001d121) list_setting_pane_t2

0x0002,

0xf682,	// (0x0002be42) list_setting_pane_t_ParamLimits

0xf682,	// (0x0002be42) list_setting_pane_t

0x099e,	// (0x0001d15e) set_value_pane_cp_ParamLimits

0x099e,	// (0x0001d15e) set_value_pane_cp

0x09aa,	// (0x0001d16a) list_setting_number_pane_g1_ParamLimits

0x09aa,	// (0x0001d16a) list_setting_number_pane_g1

0x09b6,	// (0x0001d176) list_setting_number_pane_g2_ParamLimits

0x09b6,	// (0x0001d176) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0002be49) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0002be49) list_setting_number_pane_g

0x09c2,	// (0x0001d182) list_setting_number_pane_t1_ParamLimits

0x09c2,	// (0x0001d182) list_setting_number_pane_t1

0x09d6,	// (0x0001d196) list_setting_number_pane_t2_ParamLimits

0x09d6,	// (0x0001d196) list_setting_number_pane_t2

0x09ed,	// (0x0001d1ad) list_setting_number_pane_t3_ParamLimits

0x09ed,	// (0x0001d1ad) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0002be4e) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0002be4e) list_setting_number_pane_t

0x099e,	// (0x0001d15e) set_value_pane_ParamLimits

0x099e,	// (0x0001d15e) set_value_pane

0x477b,	// (0x00020f3b) bg_set_opt_pane_ParamLimits

0x477b,	// (0x00020f3b) bg_set_opt_pane

0xb480,	// (0x00027c40) set_value_pane_t1

0x479c,	// (0x00020f5c) slider_set_pane_cp3

0x47a5,	// (0x00020f65) volume_small_pane_cp

0x47ae,	// (0x00020f6e) list_form_gen_pane

0x476a,	// (0x00020f2a) scroll_pane_cp8

0x0a30,	// (0x0001d1f0) form_field_data_pane_ParamLimits

0x0a30,	// (0x0001d1f0) form_field_data_pane

0x0a47,	// (0x0001d207) form_field_data_wide_pane_ParamLimits

0x0a47,	// (0x0001d207) form_field_data_wide_pane

0x0a67,	// (0x0001d227) form_field_popup_pane_ParamLimits

0x0a67,	// (0x0001d227) form_field_popup_pane

0x0a7f,	// (0x0001d23f) form_field_popup_wide_pane_ParamLimits

0x0a7f,	// (0x0001d23f) form_field_popup_wide_pane

0xb504,	// (0x00027cc4) form_field_slider_pane_ParamLimits

0xb504,	// (0x00027cc4) form_field_slider_pane

0xb517,	// (0x00027cd7) form_field_slider_wide_pane_ParamLimits

0xb517,	// (0x00027cd7) form_field_slider_wide_pane

0x47b7,	// (0x00020f77) data_form_pane

0x13d8,	// (0x0001db98) form_field_data_pane_t1

0x47c3,	// (0x00020f83) input_focus_pane

0x47d1,	// (0x00020f91) data_form_wide_pane

0xb53e,	// (0x00027cfe) form_field_data_wide_pane_t1

0x45e9,	// (0x00020da9) input_focus_pane_cp6

0x0aa0,	// (0x0001d260) form_field_popup_pane_t1

0x47c3,	// (0x00020f83) input_focus_pane_cp7

0x47b7,	// (0x00020f77) list_form_pane

0xb580,	// (0x00027d40) form_field_popup_wide_pane_t1

0x47c3,	// (0x00020f83) input_focus_pane_cp8

0x47fd,	// (0x00020fbd) list_form_wide_pane

0x0ac0,	// (0x0001d280) form_field_slider_pane_t1_ParamLimits

0x0ac0,	// (0x0001d280) form_field_slider_pane_t1

0x0ad6,	// (0x0001d296) form_field_slider_pane_t2_ParamLimits

0x0ad6,	// (0x0001d296) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0002be5e) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0002be5e) form_field_slider_pane_t

0x420d,	// (0x000209cd) input_focus_pane_cp9_ParamLimits

0x420d,	// (0x000209cd) input_focus_pane_cp9

0x0aeb,	// (0x0001d2ab) slider_cont_pane_ParamLimits

0x0aeb,	// (0x0001d2ab) slider_cont_pane

0x480c,	// (0x00020fcc) form_field_slider_wide_pane_t1_ParamLimits

0x480c,	// (0x00020fcc) form_field_slider_wide_pane_t1

0xb5d5,	// (0x00027d95) form_field_slider_wide_pane_t2_ParamLimits

0xb5d5,	// (0x00027d95) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0002be63) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0002be63) form_field_slider_wide_pane_t

0x420d,	// (0x000209cd) input_focus_pane_cp10_ParamLimits

0x420d,	// (0x000209cd) input_focus_pane_cp10

0x0aff,	// (0x0001d2bf) slider_cont_pane_cp1_ParamLimits

0x0aff,	// (0x0001d2bf) slider_cont_pane_cp1

0x0b15,	// (0x0001d2d5) slider_form_pane_cp

0x481e,	// (0x00020fde) input_focus_pane_g1

0x4826,	// (0x00020fe6) input_focus_pane_g2

0x482e,	// (0x00020fee) input_focus_pane_g3

0x4836,	// (0x00020ff6) input_focus_pane_g4

0x483e,	// (0x00020ffe) input_focus_pane_g5

0x4846,	// (0x00021006) input_focus_pane_g6

0x484e,	// (0x0002100e) input_focus_pane_g7

0x4856,	// (0x00021016) input_focus_pane_g8

0x485e,	// (0x0002101e) input_focus_pane_g9

0x413d,	// (0x000208fd) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0002be68) input_focus_pane_g

0x5d86,	// (0x00022546) wait_border_pane_g3_copy1

0x0b1d,	// (0x0001d2dd) data_form_pane_t1

0x413d,	// (0x000208fd) wait_anim_pane_g1_copy1

0x0c25,	// (0x0001d3e5) data_form_wide_pane_t1

0x4866,	// (0x00021026) list_form_graphic_pane_cp_ParamLimits

0x4866,	// (0x00021026) list_form_graphic_pane_cp

0x9a35,	// (0x000261f5) slider_form_pane_g1

0x9a3e,	// (0x000261fe) slider_form_pane_g2

0x0006,

0xf994,	// (0x0002c154) slider_form_pane_g

0x0b36,	// (0x0001d2f6) list_form_graphic_pane_ParamLimits

0x0b36,	// (0x0001d2f6) list_form_graphic_pane

0xb635,	// (0x00027df5) list_form_graphic_pane_g1

0xb63d,	// (0x00027dfd) list_form_graphic_pane_t1_ParamLimits

0xb63d,	// (0x00027dfd) list_form_graphic_pane_t1

0x4223,	// (0x000209e3) list_highlight_pane_cp5_ParamLimits

0x4223,	// (0x000209e3) list_highlight_pane_cp5

0x0b4b,	// (0x0001d30b) find_pane_g1

0x487a,	// (0x0002103a) input_find_pane

0x0b56,	// (0x0001d316) input_find_pane_g1_ParamLimits

0x0b56,	// (0x0001d316) input_find_pane_g1

0xb667,	// (0x00027e27) input_find_pane_t1_ParamLimits

0xb667,	// (0x00027e27) input_find_pane_t1

0xb67c,	// (0x00027e3c) input_find_pane_t2_ParamLimits

0xb67c,	// (0x00027e3c) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0002be7d) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0002be7d) input_find_pane_t

0x4883,	// (0x00021043) input_focus_pane_cp5_ParamLimits

0x4883,	// (0x00021043) input_focus_pane_cp5

0x420d,	// (0x000209cd) bg_popup_window_pane_cp2_ParamLimits

0x420d,	// (0x000209cd) bg_popup_window_pane_cp2

0x489d,	// (0x0002105d) listscroll_menu_pane_ParamLimits

0x489d,	// (0x0002105d) listscroll_menu_pane

0x48a9,	// (0x00021069) popup_submenu_window_ParamLimits

0x48a9,	// (0x00021069) popup_submenu_window

0x48cd,	// (0x0002108d) find_popup_pane_g1

0x48d5,	// (0x00021095) input_popup_find_pane_cp

0x4883,	// (0x00021043) input_focus_pane_cp4_ParamLimits

0x4883,	// (0x00021043) input_focus_pane_cp4

0x48df,	// (0x0002109f) input_popup_find_pane_t1_ParamLimits

0x48df,	// (0x0002109f) input_popup_find_pane_t1

0x41bf,	// (0x0002097f) bg_popup_sub_pane_cp

0x490d,	// (0x000210cd) listscroll_popup_sub_pane

0x4915,	// (0x000210d5) list_submenu_pane_ParamLimits

0x4915,	// (0x000210d5) list_submenu_pane

0x4926,	// (0x000210e6) scroll_pane_cp4

0x4866,	// (0x00021026) list_single_popup_submenu_pane_ParamLimits

0x4866,	// (0x00021026) list_single_popup_submenu_pane

0x492e,	// (0x000210ee) list_single_popup_submenu_pane_g1

0x4936,	// (0x000210f6) list_single_popup_submenu_pane_t1_ParamLimits

0x4936,	// (0x000210f6) list_single_popup_submenu_pane_t1

0x420d,	// (0x000209cd) bg_active_tab_pane_cp1_ParamLimits

0x420d,	// (0x000209cd) bg_active_tab_pane_cp1

0x9b3b,	// (0x000262fb) tabs_2_active_pane_g1

0x13fc,	// (0x0001dbbc) tabs_2_active_pane_t1

0x420d,	// (0x000209cd) bg_passive_tab_pane_cp1_ParamLimits

0x420d,	// (0x000209cd) bg_passive_tab_pane_cp1

0x9b3b,	// (0x000262fb) tabs_2_passive_pane_g1

0x13fc,	// (0x0001dbbc) tabs_2_passive_pane_t1

0x4223,	// (0x000209e3) bg_active_tab_pane_cp4

0x1412,	// (0x0001dbd2) tabs_2_long_active_pane_t1

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp4

0x82ee,	// (0x00024aae) list_single_midp_graphic_pane_g4_ParamLimits

0x4223,	// (0x000209e3) bg_active_tab_pane_cp5

0x1429,	// (0x0001dbe9) tabs_3_long_active_pane_t1

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp5

0x82ee,	// (0x00024aae) list_single_midp_graphic_pane_g4

0x4223,	// (0x000209e3) bg_popup_window_pane_cp13_ParamLimits

0x4223,	// (0x000209e3) bg_popup_window_pane_cp13

0x4954,	// (0x00021114) listscroll_popup_fast_pane_ParamLimits

0x4954,	// (0x00021114) listscroll_popup_fast_pane

0x4963,	// (0x00021123) grid_popup_fast_pane_ParamLimits

0x4963,	// (0x00021123) grid_popup_fast_pane

0x4975,	// (0x00021135) scroll_pane_cp9_ParamLimits

0x4975,	// (0x00021135) scroll_pane_cp9

0xac9e,	// (0x0002745e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xac9e,	// (0x0002745e) list_single_graphic_hl_pane_t1_cp2

0x4999,	// (0x00021159) input_focus_pane_cp20_ParamLimits

0x4999,	// (0x00021159) input_focus_pane_cp20

0x49a7,	// (0x00021167) query_popup_data_pane_t1_ParamLimits

0x49a7,	// (0x00021167) query_popup_data_pane_t1

0x49ba,	// (0x0002117a) query_popup_data_pane_t2_ParamLimits

0x49ba,	// (0x0002117a) query_popup_data_pane_t2

0x4a00,	// (0x000211c0) query_popup_data_pane_t3_ParamLimits

0x4a00,	// (0x000211c0) query_popup_data_pane_t3

0x4a41,	// (0x00021201) query_popup_data_pane_t4_ParamLimits

0x4a41,	// (0x00021201) query_popup_data_pane_t4

0x4a7d,	// (0x0002123d) query_popup_data_pane_t5_ParamLimits

0x4a7d,	// (0x0002123d) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0002be82) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0002be82) query_popup_data_pane_t

0x481e,	// (0x00020fde) bg_set_opt_pane_g1

0x4826,	// (0x00020fe6) bg_set_opt_pane_g2

0x482e,	// (0x00020fee) bg_set_opt_pane_g3

0x4836,	// (0x00020ff6) bg_set_opt_pane_g4

0x483e,	// (0x00020ffe) bg_set_opt_pane_g5

0x4846,	// (0x00021006) bg_set_opt_pane_g6

0x484e,	// (0x0002100e) bg_set_opt_pane_g7

0x4856,	// (0x00021016) bg_set_opt_pane_g8

0x485e,	// (0x0002101e) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0002be8d) bg_set_opt_pane_g

0x77ec,	// (0x00023fac) control_top_pane_stacon_ParamLimits

0x77ec,	// (0x00023fac) control_top_pane_stacon

0x783f,	// (0x00023fff) signal_pane_stacon_ParamLimits

0x783f,	// (0x00023fff) signal_pane_stacon

0x5040,	// (0x00021800) stacon_top_pane_g1_ParamLimits

0x5040,	// (0x00021800) stacon_top_pane_g1

0x7864,	// (0x00024024) title_pane_stacon_ParamLimits

0x7864,	// (0x00024024) title_pane_stacon

0x7886,	// (0x00024046) uni_indicator_pane_stacon_ParamLimits

0x7886,	// (0x00024046) uni_indicator_pane_stacon

0x789b,	// (0x0002405b) battery_pane_stacon_ParamLimits

0x789b,	// (0x0002405b) battery_pane_stacon

0x78db,	// (0x0002409b) control_bottom_pane_stacon_ParamLimits

0x78db,	// (0x0002409b) control_bottom_pane_stacon

0x78fa,	// (0x000240ba) navi_pane_stacon_ParamLimits

0x78fa,	// (0x000240ba) navi_pane_stacon

0x5062,	// (0x00021822) stacon_bottom_pane_g1_ParamLimits

0x5062,	// (0x00021822) stacon_bottom_pane_g1

0x4ab4,	// (0x00021274) aid_levels_signal_lsc_ParamLimits

0x4ab4,	// (0x00021274) aid_levels_signal_lsc

0x742d,	// (0x00023bed) signal_pane_stacon_g1_ParamLimits

0x742d,	// (0x00023bed) signal_pane_stacon_g1

0x7439,	// (0x00023bf9) signal_pane_stacon_g2_ParamLimits

0x7439,	// (0x00023bf9) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0002bea0) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002bea0) signal_pane_stacon_g

0x746d,	// (0x00023c2d) title_pane_stacon_t1_ParamLimits

0x746d,	// (0x00023c2d) title_pane_stacon_t1

0x4ae2,	// (0x000212a2) uni_indicator_pane_stacon_g1

0x4aec,	// (0x000212ac) uni_indicator_pane_stacon_g2

0x4ace,	// (0x0002128e) uni_indicator_pane_stacon_g3

0x4ad8,	// (0x00021298) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002beac) uni_indicator_pane_stacon_g

0x7492,	// (0x00023c52) control_top_pane_stacon_g1

0x749a,	// (0x00023c5a) control_top_pane_stacon_t1_ParamLimits

0x749a,	// (0x00023c5a) control_top_pane_stacon_t1

0x4af6,	// (0x000212b6) aid_levels_battery_lsc_ParamLimits

0x4af6,	// (0x000212b6) aid_levels_battery_lsc

0x74cb,	// (0x00023c8b) battery_pane_stacon_g1_ParamLimits

0x74cb,	// (0x00023c8b) battery_pane_stacon_g1

0x74d7,	// (0x00023c97) battery_pane_stacon_g2_ParamLimits

0x74d7,	// (0x00023c97) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002beb5) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002beb5) battery_pane_stacon_g

0x7506,	// (0x00023cc6) navi_icon_pane_stacon

0x7516,	// (0x00023cd6) navi_navi_pane_stacon

0x7506,	// (0x00023cc6) navi_text_pane_stacon

0x7492,	// (0x00023c52) control_bottom_pane_stacon_g1

0x7526,	// (0x00023ce6) control_bottom_pane_stacon_t1_ParamLimits

0x7526,	// (0x00023ce6) control_bottom_pane_stacon_t1

0x143f,	// (0x0001dbff) grid_app_pane_ParamLimits

0x143f,	// (0x0001dbff) grid_app_pane

0x146d,	// (0x0001dc2d) scroll_pane_cp15_ParamLimits

0x146d,	// (0x0001dc2d) scroll_pane_cp15

0x1484,	// (0x0001dc44) cell_app_pane_ParamLimits

0x1484,	// (0x0001dc44) cell_app_pane

0x14c3,	// (0x0001dc83) cell_app_pane_g1_ParamLimits

0x14c3,	// (0x0001dc83) cell_app_pane_g1

0x4ce1,	// (0x000214a1) cell_app_pane_g2_ParamLimits

0x4ce1,	// (0x000214a1) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0002beba) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0002beba) cell_app_pane_g

0x4ced,	// (0x000214ad) cell_app_pane_t1_ParamLimits

0x4ced,	// (0x000214ad) cell_app_pane_t1

0x4cff,	// (0x000214bf) grid_highlight_pane_ParamLimits

0x4cff,	// (0x000214bf) grid_highlight_pane

0x481e,	// (0x00020fde) cell_highlight_pane_g1

0x4826,	// (0x00020fe6) cell_highlight_pane_g2

0x482e,	// (0x00020fee) cell_highlight_pane_g3

0x4836,	// (0x00020ff6) cell_highlight_pane_g4

0x483e,	// (0x00020ffe) cell_highlight_pane_g5

0x4846,	// (0x00021006) cell_highlight_pane_g6

0x484e,	// (0x0002100e) cell_highlight_pane_g7

0x4856,	// (0x00021016) cell_highlight_pane_g8

0x485e,	// (0x0002101e) cell_highlight_pane_g9

0x413d,	// (0x000208fd) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0002be68) cell_highlight_pane_g

0x4d10,	// (0x000214d0) bg_scroll_pane

0x75df,	// (0x00023d9f) scroll_handle_pane

0x4d57,	// (0x00021517) scroll_bg_pane_g1

0x4d6c,	// (0x0002152c) scroll_bg_pane_g2

0x4d84,	// (0x00021544) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002bebf) scroll_bg_pane_g

0x4d99,	// (0x00021559) scroll_handle_focus_pane_ParamLimits

0x4d99,	// (0x00021559) scroll_handle_focus_pane

0x4d57,	// (0x00021517) scroll_handle_pane_g1

0x4da6,	// (0x00021566) scroll_handle_pane_g2

0x4d84,	// (0x00021544) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002bec6) scroll_handle_pane_g

0x4883,	// (0x00021043) bg_popup_sub_pane_cp21_ParamLimits

0x4883,	// (0x00021043) bg_popup_sub_pane_cp21

0x4dba,	// (0x0002157a) popup_fep_japan_predictive_window_t1_ParamLimits

0x4dba,	// (0x0002157a) popup_fep_japan_predictive_window_t1

0x4dd1,	// (0x00021591) popup_fep_japan_predictive_window_t2_ParamLimits

0x4dd1,	// (0x00021591) popup_fep_japan_predictive_window_t2

0x4e04,	// (0x000215c4) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e04,	// (0x000215c4) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002becd) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002becd) popup_fep_japan_predictive_window_t

0x41bf,	// (0x0002097f) bg_popup_sub_pane_cp23

0x4e3b,	// (0x000215fb) listscroll_japin_cand_pane

0x4e43,	// (0x00021603) popup_fep_japan_candidate_window_t1

0x4e51,	// (0x00021611) candidate_pane_ParamLimits

0x4e51,	// (0x00021611) candidate_pane

0x4e64,	// (0x00021624) scroll_pane_cp30

0x4e6c,	// (0x0002162c) list_single_popup_jap_candidate_pane_ParamLimits

0x4e6c,	// (0x0002162c) list_single_popup_jap_candidate_pane

0x41bf,	// (0x0002097f) list_highlight_pane_cp30

0x4e81,	// (0x00021641) list_single_popup_jap_candidate_pane_t1

0x14f0,	// (0x0001dcb0) level_1_signal

0x1502,	// (0x0001dcc2) level_2_signal

0x1515,	// (0x0001dcd5) level_3_signal

0x1528,	// (0x0001dce8) level_4_signal

0x153b,	// (0x0001dcfb) level_5_signal

0x154e,	// (0x0001dd0e) level_6_signal

0x1561,	// (0x0001dd21) level_7_signal

0x14f0,	// (0x0001dcb0) level_1_battery

0x1502,	// (0x0001dcc2) level_2_battery

0x1515,	// (0x0001dcd5) level_3_battery

0x1528,	// (0x0001dce8) level_4_battery

0x153b,	// (0x0001dcfb) level_5_battery

0x154e,	// (0x0001dd0e) level_6_battery

0x1561,	// (0x0001dd21) level_7_battery

0x4ea8,	// (0x00021668) list_menu_pane_ParamLimits

0x4ea8,	// (0x00021668) list_menu_pane

0x4eb9,	// (0x00021679) scroll_pane_cp25_ParamLimits

0x4eb9,	// (0x00021679) scroll_pane_cp25

0x1574,	// (0x0001dd34) list_double2_graphic_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double2_graphic_pane_cp2

0x1574,	// (0x0001dd34) list_double2_large_graphic_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double2_large_graphic_pane_cp2

0x1574,	// (0x0001dd34) list_double2_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double2_pane_cp2

0x1574,	// (0x0001dd34) list_double_graphic_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double_graphic_pane_cp2

0x1574,	// (0x0001dd34) list_double_large_graphic_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double_large_graphic_pane_cp2

0x1574,	// (0x0001dd34) list_double_number_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double_number_pane_cp2

0x1574,	// (0x0001dd34) list_double_pane_cp2_ParamLimits

0x1574,	// (0x0001dd34) list_double_pane_cp2

0x158f,	// (0x0001dd4f) list_single_2graphic_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_2graphic_pane_cp2

0x158f,	// (0x0001dd4f) list_single_graphic_heading_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_graphic_heading_pane_cp2

0x158f,	// (0x0001dd4f) list_single_graphic_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_graphic_pane_cp2

0x158f,	// (0x0001dd4f) list_single_heading_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_heading_pane_cp2

0x15a0,	// (0x0001dd60) list_single_large_graphic_pane_cp2_ParamLimits

0x15a0,	// (0x0001dd60) list_single_large_graphic_pane_cp2

0x158f,	// (0x0001dd4f) list_single_number_heading_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_number_heading_pane_cp2

0x158f,	// (0x0001dd4f) list_single_number_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_number_pane_cp2

0x158f,	// (0x0001dd4f) list_single_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_pane_cp2

0x4edb,	// (0x0002169b) bg_popup_sub_pane_cp22

0x775c,	// (0x00023f1c) popup_side_volume_key_window_g1

0x7780,	// (0x00023f40) popup_side_volume_key_window_t1

0x779c,	// (0x00023f5c) volume_small_pane_cp1

0x420d,	// (0x000209cd) bg_popup_sub_pane_cp24_ParamLimits

0x420d,	// (0x000209cd) bg_popup_sub_pane_cp24

0x4ef1,	// (0x000216b1) fep_china_uni_candidate_pane_ParamLimits

0x4ef1,	// (0x000216b1) fep_china_uni_candidate_pane

0x4f05,	// (0x000216c5) fep_china_uni_entry_pane

0x4f15,	// (0x000216d5) popup_fep_china_uni_window_g1

0x4f31,	// (0x000216f1) fep_china_uni_entry_pane_g1

0x4f39,	// (0x000216f9) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002befa) fep_china_uni_entry_pane_g

0x4f41,	// (0x00021701) fep_entry_item_pane

0x4f4b,	// (0x0002170b) fep_candidate_item_pane

0x4f53,	// (0x00021713) fep_china_uni_candidate_pane_g1

0x4f5b,	// (0x0002171b) fep_china_uni_candidate_pane_g2

0x4f63,	// (0x00021723) fep_china_uni_candidate_pane_g3

0x4f6b,	// (0x0002172b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002beff) fep_china_uni_candidate_pane_g

0x413d,	// (0x000208fd) fep_entry_item_pane_g1

0x4f73,	// (0x00021733) fep_entry_item_pane_t1_ParamLimits

0x4f73,	// (0x00021733) fep_entry_item_pane_t1

0x4f89,	// (0x00021749) fep_candidate_item_pane_t1_ParamLimits

0x4f89,	// (0x00021749) fep_candidate_item_pane_t1

0x4f9e,	// (0x0002175e) fep_candidate_item_pane_t2_ParamLimits

0x4f9e,	// (0x0002175e) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002bf08) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002bf08) fep_candidate_item_pane_t

0x4223,	// (0x000209e3) list_highlight_pane_cp31_ParamLimits

0x4223,	// (0x000209e3) list_highlight_pane_cp31

0x4fb0,	// (0x00021770) level_1_signal_lsc

0x4fb9,	// (0x00021779) level_2_signal_lsc

0x4fc2,	// (0x00021782) level_3_signal_lsc

0x4fcb,	// (0x0002178b) level_4_signal_lsc

0x4fd4,	// (0x00021794) level_5_signal_lsc

0x4fdd,	// (0x0002179d) level_6_signal_lsc

0x4fe6,	// (0x000217a6) level_7_signal_lsc

0x4fe6,	// (0x000217a6) level_1_battery_lsc

0x4fef,	// (0x000217af) level_2_battery_lsc

0x4ff8,	// (0x000217b8) level_3_battery_lsc

0x5001,	// (0x000217c1) level_4_battery_lsc

0x500a,	// (0x000217ca) level_5_battery_lsc

0x5013,	// (0x000217d3) level_6_battery_lsc

0x4fb0,	// (0x00021770) level_7_battery_lsc

0x501c,	// (0x000217dc) scroll_handle_focus_pane_g1

0x5025,	// (0x000217e5) scroll_handle_focus_pane_g2

0x502e,	// (0x000217ee) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002bf0d) scroll_handle_focus_pane_g

0xb691,	// (0x00027e51) list_single_2graphic_pane_g1_ParamLimits

0xb691,	// (0x00027e51) list_single_2graphic_pane_g1

0x06bd,	// (0x0001ce7d) list_single_2graphic_pane_g2_ParamLimits

0x06bd,	// (0x0001ce7d) list_single_2graphic_pane_g2

0xb759,	// (0x00027f19) list_single_2graphic_pane_g3_ParamLimits

0xb759,	// (0x00027f19) list_single_2graphic_pane_g3

0x0b62,	// (0x0001d322) list_single_2graphic_pane_g4_ParamLimits

0x0b62,	// (0x0001d322) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002bf14) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002bf14) list_single_2graphic_pane_g

0x0b6e,	// (0x0001d32e) list_single_2graphic_pane_t1_ParamLimits

0x0b6e,	// (0x0001d32e) list_single_2graphic_pane_t1

0x0b9c,	// (0x0001d35c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0b9c,	// (0x0001d35c) list_double2_graphic_large_graphic_pane_g1

0x085c,	// (0x0001d01c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x085c,	// (0x0001d01c) list_double2_graphic_large_graphic_pane_g2

0x086d,	// (0x0001d02d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x086d,	// (0x0001d02d) list_double2_graphic_large_graphic_pane_g3

0x0bac,	// (0x0001d36c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0bac,	// (0x0001d36c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002bf1d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002bf1d) list_double2_graphic_large_graphic_pane_g

0x0bb8,	// (0x0001d378) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0bb8,	// (0x0001d378) list_double2_graphic_large_graphic_pane_t1

0x0bce,	// (0x0001d38e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0bce,	// (0x0001d38e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002bf26) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002bf26) list_double2_graphic_large_graphic_pane_t

0x5109,	// (0x000218c9) popup_fast_swap_window_ParamLimits

0x5109,	// (0x000218c9) popup_fast_swap_window

0x5125,	// (0x000218e5) popup_side_volume_key_window

0x513f,	// (0x000218ff) stacon_top_pane

0x5149,	// (0x00021909) status_pane_ParamLimits

0x5149,	// (0x00021909) status_pane

0x513f,	// (0x000218ff) status_small_pane

0x41bf,	// (0x0002097f) control_pane

0x41bf,	// (0x0002097f) stacon_bottom_pane

0x476a,	// (0x00020f2a) scroll_pane_cp121

0x47ae,	// (0x00020f6e) set_content_pane

0x9b29,	// (0x000262e9) bg_active_tab_pane_g1_cp1

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp1

0x9b32,	// (0x000262f2) bg_active_tab_pane_g3_cp1

0x9b29,	// (0x000262e9) bg_passive_tab_pane_g1_cp1

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp1

0x9b32,	// (0x000262f2) bg_passive_tab_pane_g3_cp1

0x1602,	// (0x0001ddc2) bg_active_tab_pane_g1_cp2

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp2

0x15f9,	// (0x0001ddb9) bg_active_tab_pane_g3_cp2

0x1602,	// (0x0001ddc2) bg_passive_tab_pane_g1_cp2

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp2

0x15f9,	// (0x0001ddb9) bg_passive_tab_pane_g3_cp2

0x1614,	// (0x0001ddd4) bg_active_tab_pane_g1_cp3

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp3

0x160b,	// (0x0001ddcb) bg_active_tab_pane_g3_cp3

0x1614,	// (0x0001ddd4) bg_passive_tab_pane_g1_cp3

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp3

0x160b,	// (0x0001ddcb) bg_passive_tab_pane_g3_cp3

0x1626,	// (0x0001dde6) bg_active_tab_pane_g1_cp4

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp4

0x161d,	// (0x0001dddd) bg_active_tab_pane_g3_cp4

0x1626,	// (0x0001dde6) bg_passive_tab_pane_g1_cp4

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp4

0x161d,	// (0x0001dddd) bg_passive_tab_pane_g3_cp4

0x5087,	// (0x00021847) bg_active_tab_pane_g1_cp5

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp5

0x507e,	// (0x0002183e) bg_active_tab_pane_g3_cp5

0x5087,	// (0x00021847) bg_passive_tab_pane_g1_cp5

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp5

0x507e,	// (0x0002183e) bg_passive_tab_pane_g3_cp5

0x162f,	// (0x0001ddef) list_set_graphic_pane_ParamLimits

0x162f,	// (0x0001ddef) list_set_graphic_pane

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp4

0x5090,	// (0x00021850) list_set_graphic_pane_g1_ParamLimits

0x5090,	// (0x00021850) list_set_graphic_pane_g1

0x509c,	// (0x0002185c) list_set_graphic_pane_g2_ParamLimits

0x509c,	// (0x0002185c) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002bf2b) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002bf2b) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0002c297) volume_small_pane_cp_g

0x50be,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x50be,	// (0x0002187e) list_double2_large_graphic_pane_g1_cp2

0x50ca,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x50ca,	// (0x0002188a) list_double2_large_graphic_pane_g2_cp2

0x50d9,	// (0x00021899) list_double2_large_graphic_pane_g3_cp2

0x50e1,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x50e1,	// (0x000218a1) list_double2_large_graphic_pane_t1_cp2

0x50f7,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x50f7,	// (0x000218b7) list_double2_large_graphic_pane_t2_cp2

0x97e5,	// (0x00025fa5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x97e5,	// (0x00025fa5) list_double_large_graphic_pane_g1_cp2

0x97f6,	// (0x00025fb6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x97f6,	// (0x00025fb6) list_double_large_graphic_pane_g2_cp2

0x5224,	// (0x000219e4) list_double_large_graphic_pane_g3_cp2

0x9805,	// (0x00025fc5) list_double_large_graphic_pane_g4_cp

0x980d,	// (0x00025fcd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x980d,	// (0x00025fcd) list_double_large_graphic_pane_t1_cp2

0x9824,	// (0x00025fe4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9824,	// (0x00025fe4) list_double_large_graphic_pane_t2_cp2

0x5157,	// (0x00021917) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5157,	// (0x00021917) list_double2_graphic_pane_g1_cp2

0x5163,	// (0x00021923) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5163,	// (0x00021923) list_double2_graphic_pane_g2_cp2

0x5172,	// (0x00021932) list_double2_graphic_pane_g3_cp2

0x517a,	// (0x0002193a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x517a,	// (0x0002193a) list_double2_graphic_pane_t1_cp2

0x5190,	// (0x00021950) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5190,	// (0x00021950) list_double2_graphic_pane_t2_cp2

0x51a2,	// (0x00021962) list_single_number_heading_pane_g1_cp2_ParamLimits

0x51a2,	// (0x00021962) list_single_number_heading_pane_g1_cp2

0x51ae,	// (0x0002196e) list_single_number_heading_pane_g2_cp2

0x51b6,	// (0x00021976) list_single_number_heading_pane_t1_cp2_ParamLimits

0x51b6,	// (0x00021976) list_single_number_heading_pane_t1_cp2

0x51cc,	// (0x0002198c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x51cc,	// (0x0002198c) list_single_number_heading_pane_t2_cp2

0x51de,	// (0x0002199e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x51de,	// (0x0002199e) list_single_number_heading_pane_t3_cp2

0x51a2,	// (0x00021962) list_single_heading_pane_g1_cp2_ParamLimits

0x51a2,	// (0x00021962) list_single_heading_pane_g1_cp2

0x51ae,	// (0x0002196e) list_single_heading_pane_g2_cp2

0x51b6,	// (0x00021976) list_single_heading_pane_t1_cp2_ParamLimits

0x51b6,	// (0x00021976) list_single_heading_pane_t1_cp2

0x95ef,	// (0x00025daf) list_single_heading_pane_t2_cp2_ParamLimits

0x95ef,	// (0x00025daf) list_single_heading_pane_t2_cp2

0x953f,	// (0x00025cff) list_double_graphic_pane_g1_cp2_ParamLimits

0x953f,	// (0x00025cff) list_double_graphic_pane_g1_cp2

0x954b,	// (0x00025d0b) list_double_graphic_pane_g2_cp2_ParamLimits

0x954b,	// (0x00025d0b) list_double_graphic_pane_g2_cp2

0x955a,	// (0x00025d1a) list_double_graphic_pane_g3_cp2

0x9562,	// (0x00025d22) list_double_graphic_pane_t1_cp2_ParamLimits

0x9562,	// (0x00025d22) list_double_graphic_pane_t1_cp2

0x9578,	// (0x00025d38) list_double_graphic_pane_t2_cp2_ParamLimits

0x9578,	// (0x00025d38) list_double_graphic_pane_t2_cp2

0x5218,	// (0x000219d8) list_double_number_pane_g1_cp2_ParamLimits

0x5218,	// (0x000219d8) list_double_number_pane_g1_cp2

0x5224,	// (0x000219e4) list_double_number_pane_g2_cp2

0x9505,	// (0x00025cc5) list_double_number_pane_t1_cp2_ParamLimits

0x9505,	// (0x00025cc5) list_double_number_pane_t1_cp2

0x9517,	// (0x00025cd7) list_double_number_pane_t2_cp2_ParamLimits

0x9517,	// (0x00025cd7) list_double_number_pane_t2_cp2

0x952d,	// (0x00025ced) list_double_number_pane_t3_cp2_ParamLimits

0x952d,	// (0x00025ced) list_double_number_pane_t3_cp2

0x947d,	// (0x00025c3d) list_single_graphic_pane_g1_cp2_ParamLimits

0x947d,	// (0x00025c3d) list_single_graphic_pane_g1_cp2

0x51a2,	// (0x00021962) list_single_graphic_pane_g2_cp2_ParamLimits

0x51a2,	// (0x00021962) list_single_graphic_pane_g2_cp2

0x51ae,	// (0x0002196e) list_single_graphic_pane_g3_cp2

0x9455,	// (0x00025c15) list_single_graphic_pane_t1_cp2_ParamLimits

0x9455,	// (0x00025c15) list_single_graphic_pane_t1_cp2

0x51a2,	// (0x00021962) list_single_number_pane_g1_cp2_ParamLimits

0x51a2,	// (0x00021962) list_single_number_pane_g1_cp2

0x51ae,	// (0x0002196e) list_single_number_pane_g2_cp2

0x9455,	// (0x00025c15) list_single_number_pane_t1_cp2_ParamLimits

0x9455,	// (0x00025c15) list_single_number_pane_t1_cp2

0x946b,	// (0x00025c2b) list_single_number_pane_t2_cp2_ParamLimits

0x946b,	// (0x00025c2b) list_single_number_pane_t2_cp2

0x50ca,	// (0x0002188a) list_double2_pane_g1_cp2_ParamLimits

0x50ca,	// (0x0002188a) list_double2_pane_g1_cp2

0x50d9,	// (0x00021899) list_double2_pane_g2_cp2

0x51f0,	// (0x000219b0) list_double2_pane_t1_cp2_ParamLimits

0x51f0,	// (0x000219b0) list_double2_pane_t1_cp2

0x5206,	// (0x000219c6) list_double2_pane_t2_cp2_ParamLimits

0x5206,	// (0x000219c6) list_double2_pane_t2_cp2

0x5218,	// (0x000219d8) list_double_pane_g1_cp2_ParamLimits

0x5218,	// (0x000219d8) list_double_pane_g1_cp2

0x5224,	// (0x000219e4) list_double_pane_g2_cp2

0x522c,	// (0x000219ec) list_double_pane_t1_cp2_ParamLimits

0x522c,	// (0x000219ec) list_double_pane_t1_cp2

0x5242,	// (0x00021a02) list_double_pane_t2_cp2_ParamLimits

0x5242,	// (0x00021a02) list_double_pane_t2_cp2

0x526a,	// (0x00021a2a) list_single_pane_cp2_g3

0x51a2,	// (0x00021962) list_single_pane_g1_cp2_ParamLimits

0x51a2,	// (0x00021962) list_single_pane_g1_cp2

0x51ae,	// (0x0002196e) list_single_pane_g2_cp2

0x527a,	// (0x00021a3a) list_single_pane_t1_cp2_ParamLimits

0x527a,	// (0x00021a3a) list_single_pane_t1_cp2

0x5292,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5292,	// (0x00021a52) list_single_large_graphic_pane_g1_cp2

0x529e,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x529e,	// (0x00021a5e) list_single_large_graphic_pane_g2_cp2

0x52aa,	// (0x00021a6a) list_single_large_graphic_pane_g3_cp2

0x52b2,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x52b2,	// (0x00021a72) list_single_large_graphic_pane_g4_cp1

0x52cc,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x52cc,	// (0x00021a8c) list_single_large_graphic_pane_t1_cp2

0x637c,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x637c,	// (0x00022b3c) list_single_graphic_heading_pane_g1_cp2

0x6357,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6357,	// (0x00022b17) list_single_graphic_heading_pane_g4_cp2

0x51ae,	// (0x0002196e) list_single_graphic_heading_pane_g5_cp2

0x51b6,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x51b6,	// (0x00021976) list_single_graphic_heading_pane_t1_cp2

0x6388,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6388,	// (0x00022b48) list_single_graphic_heading_pane_t2_cp2

0x634b,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x634b,	// (0x00022b0b) list_single_2graphic_pane_g1_cp2

0x6357,	// (0x00022b17) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6357,	// (0x00022b17) list_single_2graphic_pane_g2_cp2

0x51ae,	// (0x0002196e) list_single_2graphic_pane_g3_cp2

0x588b,	// (0x0002204b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x588b,	// (0x0002204b) list_single_2graphic_pane_g4_cp2

0x6366,	// (0x00022b26) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6366,	// (0x00022b26) list_single_2graphic_pane_t1_cp2

0x413d,	// (0x000208fd) list_highlight_pane_g10_cp1

0x5f5d,	// (0x0002271d) list_highlight_pane_g1_cp1

0x5f65,	// (0x00022725) list_highlight_pane_g2_cp1

0x5f6d,	// (0x0002272d) list_highlight_pane_g3_cp1

0x5f75,	// (0x00022735) list_highlight_pane_g4_cp1

0x5f7d,	// (0x0002273d) list_highlight_pane_g5_cp1

0x5f85,	// (0x00022745) list_highlight_pane_g6_cp1

0x5f8d,	// (0x0002274d) list_highlight_pane_g7_cp1

0x5f95,	// (0x00022755) list_highlight_pane_g8_cp1

0x5f9d,	// (0x0002275d) list_highlight_pane_g9_cp1

0x22c4,	// (0x0001ea84) form_field_slider_pane_t3

0x22d2,	// (0x0001ea92) form_field_slider_pane_t4

0x5ea7,	// (0x00022667) slider_form_pane_ParamLimits

0x5ea7,	// (0x00022667) slider_form_pane

0x41bf,	// (0x0002097f) control_abbreviations

0x41bf,	// (0x0002097f) control_conventions

0x41bf,	// (0x0002097f) control_definitions

0x41bf,	// (0x0002097f) format_table_attribute

0x9639,	// (0x00025df9) bg_popup_preview_window_pane_g9

0x41bf,	// (0x0002097f) format_table_data2

0x41bf,	// (0x0002097f) format_table_data3

0x41bf,	// (0x0002097f) format_table_data_example

0x0008,

0x41bf,	// (0x0002097f) intro_purpose

0xf8f4,	// (0x0002c0b4) bg_popup_preview_window_pane_g

0x41bf,	// (0x0002097f) texts_category

0x41bf,	// (0x0002097f) texts_graphics

0x52e2,	// (0x00021aa2) text_digital

0x52f1,	// (0x00021ab1) text_primary

0x5300,	// (0x00021ac0) text_primary_small

0x530f,	// (0x00021acf) text_secondary

0x531e,	// (0x00021ade) text_title

0x9ac6,	// (0x00026286) bg_passive_tab_pane_g1_cp3_srt

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp3_srt

0x9acf,	// (0x0002628f) bg_passive_tab_pane_g3_cp3_srt

0x420d,	// (0x000209cd) bg_active_tab_pane_cp3_srt_ParamLimits

0x420d,	// (0x000209cd) bg_active_tab_pane_cp3_srt

0x9ad8,	// (0x00026298) tabs_4_active_pane_srt_g1

0x10ef,	// (0x0001d8af) tabs_4_active_pane_srt_t1_ParamLimits

0x10ef,	// (0x0001d8af) tabs_4_active_pane_srt_t1

0x9ac6,	// (0x00026286) bg_active_tab_pane_g1_cp3_copy1

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp3_copy1

0x9acf,	// (0x0002628f) bg_active_tab_pane_g3_cp3_copy1

0x4223,	// (0x000209e3) tabs_2_long_active_pane_srt_ParamLimits

0x4223,	// (0x000209e3) tabs_2_long_active_pane_srt

0x4223,	// (0x000209e3) tabs_2_long_passive_pane_srt_ParamLimits

0x4223,	// (0x000209e3) tabs_2_long_passive_pane_srt

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp4_srt

0x99fc,	// (0x000261bc) bg_passive_tab_pane_g1_cp4_srt

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp4_srt

0x9a05,	// (0x000261c5) bg_passive_tab_pane_g3_cp4_srt

0x4223,	// (0x000209e3) bg_active_tab_pane_cp4_srt_ParamLimits

0x4223,	// (0x000209e3) bg_active_tab_pane_cp4_srt

0x1412,	// (0x0001dbd2) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1412,	// (0x0001dbd2) tabs_2_long_active_pane_srt_t1

0x99fc,	// (0x000261bc) bg_active_tab_pane_g1_cp4_srt

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp4_srt

0x9a05,	// (0x000261c5) bg_active_tab_pane_g3_cp4_srt

0x420d,	// (0x000209cd) tabs_3_long_active_pane_srt_ParamLimits

0x420d,	// (0x000209cd) tabs_3_long_active_pane_srt

0x420d,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x420d,	// (0x000209cd) tabs_3_long_passive_pane_cp_srt

0x420d,	// (0x000209cd) tabs_3_long_passive_pane_srt_ParamLimits

0x420d,	// (0x000209cd) tabs_3_long_passive_pane_srt

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp5_srt

0x5087,	// (0x00021847) bg_passive_tab_pane_g1_cp5_srt

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp5_srt

0x507e,	// (0x0002183e) bg_passive_tab_pane_g3_cp5_srt

0x4223,	// (0x000209e3) bg_active_tab_pane_cp5_srt_ParamLimits

0x4223,	// (0x000209e3) bg_active_tab_pane_cp5_srt

0x1429,	// (0x0001dbe9) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1429,	// (0x0001dbe9) tabs_3_long_active_pane_srt_t1

0x5087,	// (0x00021847) bg_active_tab_pane_g1_cp5_srt

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp5_srt

0x507e,	// (0x0002183e) bg_active_tab_pane_g3_cp5_srt

0x99ee,	// (0x000261ae) navi_text_pane_srt_t1

0x99e6,	// (0x000261a6) navi_icon_pane_srt_g1

0x5436,	// (0x00021bf6) midp_editing_number_pane_srt

0x532d,	// (0x00021aed) midp_ticker_pane_srt

0x543e,	// (0x00021bfe) midp_ticker_pane_srt_g1

0x5446,	// (0x00021c06) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002bf4a) midp_ticker_pane_srt_g

0x544e,	// (0x00021c0e) midp_ticker_pane_srt_t1

0x99d7,	// (0x00026197) midp_editing_number_pane_t1_copy1

0x1643,	// (0x0001de03) listscroll_midp_pane

0x1643,	// (0x0001de03) midp_form_pane

0x5335,	// (0x00021af5) midp_info_popup_window_ParamLimits

0x5335,	// (0x00021af5) midp_info_popup_window

0x4883,	// (0x00021043) bg_popup_sub_pane_cp50_ParamLimits

0x4883,	// (0x00021043) bg_popup_sub_pane_cp50

0x5bd0,	// (0x00022390) listscroll_midp_info_pane_ParamLimits

0x5bd0,	// (0x00022390) listscroll_midp_info_pane

0x5bb8,	// (0x00022378) listscroll_form_midp_pane_ParamLimits

0x5bb8,	// (0x00022378) listscroll_form_midp_pane

0x5bc4,	// (0x00022384) scroll_bar_cp050

0x22b8,	// (0x0001ea78) list_midp_pane

0xa2cc,	// (0x00026a8c) signal_pane_g2_cp

0x5aea,	// (0x000222aa) listscroll_midp_info_pane_t1_ParamLimits

0x5aea,	// (0x000222aa) listscroll_midp_info_pane_t1

0x5b02,	// (0x000222c2) listscroll_midp_info_pane_t2_ParamLimits

0x5b02,	// (0x000222c2) listscroll_midp_info_pane_t2

0x5b40,	// (0x00022300) listscroll_midp_info_pane_t3_ParamLimits

0x5b40,	// (0x00022300) listscroll_midp_info_pane_t3

0x5b7a,	// (0x0002233a) listscroll_midp_info_pane_t4_ParamLimits

0x5b7a,	// (0x0002233a) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0002bfef) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0002bfef) listscroll_midp_info_pane_t

0x4926,	// (0x000210e6) scroll_pane_cp21

0x5a8e,	// (0x0002224e) form_midp_field_choice_group_pane

0x5a97,	// (0x00022257) form_midp_field_text_pane

0x5ad0,	// (0x00022290) form_midp_field_time_pane

0x5ad8,	// (0x00022298) form_midp_gauge_slider_pane

0x5ae1,	// (0x000222a1) form_midp_gauge_wait_pane

0x41bf,	// (0x0002097f) form_midp_image_pane

0x0bfd,	// (0x0001d3bd) list_single_midp_pane_ParamLimits

0x0bfd,	// (0x0001d3bd) list_single_midp_pane

0x2297,	// (0x0001ea57) form_midp_field_text_pane_t1

0x593d,	// (0x000220fd) input_focus_pane_cp050

0x5a7d,	// (0x0002223d) list_midp_form_text_pane

0x5a4c,	// (0x0002220c) form_midp_field_choice_group_pane_t1

0x5a5a,	// (0x0002221a) input_focus_pane_cp051

0x5a6e,	// (0x0002222e) list_midp_choice_pane

0x41bf,	// (0x0002097f) status_idle_pane

0x5a30,	// (0x000221f0) form_midp_field_time_pane_t1

0x413d,	// (0x000208fd) wait_anim_pane_g2_copy1

0x5a3e,	// (0x000221fe) form_midp_field_time_pane_t2

0x0001,

0x53a0,	// (0x00021b60) aid_navinavi_width_2_pane

0xf82a,	// (0x0002bfea) form_midp_field_time_pane_t

0x41bf,	// (0x0002097f) input_focus_pane_cp052

0x41bf,	// (0x0002097f) bg_input_focus_pane_cp040

0x5a0c,	// (0x000221cc) form_midp_gauge_slider_pane_t1

0x5a1a,	// (0x000221da) form_midp_gauge_slider_pane_t2

0x227b,	// (0x0001ea3b) form_midp_gauge_slider_pane_t3

0x2289,	// (0x0001ea49) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0002bfe1) form_midp_gauge_slider_pane_t

0x5a28,	// (0x000221e8) form_midp_slider_pane

0x4223,	// (0x000209e3) bg_input_focus_pane_cp041_ParamLimits

0x4223,	// (0x000209e3) bg_input_focus_pane_cp041

0x59dc,	// (0x0002219c) form_midp_gauge_wait_pane_t1_ParamLimits

0x59dc,	// (0x0002219c) form_midp_gauge_wait_pane_t1

0x59ee,	// (0x000221ae) form_midp_gauge_wait_pane_t2_ParamLimits

0x59ee,	// (0x000221ae) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0002bfdc) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0002bfdc) form_midp_gauge_wait_pane_t

0x5a00,	// (0x000221c0) form_midp_wait_pane_ParamLimits

0x5a00,	// (0x000221c0) form_midp_wait_pane

0x59a6,	// (0x00022166) form_midp_image_pane_g1

0x59af,	// (0x0002216f) form_midp_image_pane_t1

0x59be,	// (0x0002217e) form_midp_image_pane_t2

0x59cd,	// (0x0002218d) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0002bfd5) form_midp_image_pane_t

0x599d,	// (0x0002215d) list_single_midp_pane_g1

0xb7a3,	// (0x00027f63) list_single_midp_pane_t1

0x2267,	// (0x0001ea27) list_midp_form_item_pane_ParamLimits

0x2267,	// (0x0001ea27) list_midp_form_item_pane

0x5348,	// (0x00021b08) list_midp_form_item_pane_t1

0x5357,	// (0x00021b17) midp_ticker_pane_g1

0x5363,	// (0x00021b23) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002bf30) midp_ticker_pane_g

0x536f,	// (0x00021b2f) midp_ticker_pane_t1

0x99d7,	// (0x00026197) midp_editing_number_pane_t1

0x9a5f,	// (0x0002621f) midp_editing_number_pane

0x9a6b,	// (0x0002622b) midp_ticker_pane

0x99c7,	// (0x00026187) ai_message_heading_pane

0x41bf,	// (0x0002097f) bg_popup_window_pane_cp14

0x99cf,	// (0x0002618f) listscroll_ai_message_pane

0x9951,	// (0x00026111) ai_message_heading_pane_g1_ParamLimits

0x9951,	// (0x00026111) ai_message_heading_pane_g1

0x995d,	// (0x0002611d) ai_message_heading_pane_g2_ParamLimits

0x995d,	// (0x0002611d) ai_message_heading_pane_g2

0x9969,	// (0x00026129) ai_message_heading_pane_g3_ParamLimits

0x9969,	// (0x00026129) ai_message_heading_pane_g3

0x9975,	// (0x00026135) ai_message_heading_pane_g4_ParamLimits

0x9975,	// (0x00026135) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0002c116) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0002c116) ai_message_heading_pane_g

0x9981,	// (0x00026141) ai_message_heading_pane_t1_ParamLimits

0x9981,	// (0x00026141) ai_message_heading_pane_t1

0x999b,	// (0x0002615b) ai_message_heading_pane_t2_ParamLimits

0x999b,	// (0x0002615b) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0002c11f) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0002c11f) ai_message_heading_pane_t

0x99ad,	// (0x0002616d) bg_popup_heading_pane_cp1_ParamLimits

0x99ad,	// (0x0002616d) bg_popup_heading_pane_cp1

0x993f,	// (0x000260ff) list_ai_message_pane_ParamLimits

0x993f,	// (0x000260ff) list_ai_message_pane

0x4926,	// (0x000210e6) scroll_pane_cp10

0x98db,	// (0x0002609b) list_ai_message_pane_g1

0x98e3,	// (0x000260a3) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0002c0f3) list_ai_message_pane_g

0x98eb,	// (0x000260ab) list_ai_message_pane_t1_ParamLimits

0x98eb,	// (0x000260ab) list_ai_message_pane_t1

0x9900,	// (0x000260c0) list_ai_message_pane_t2_ParamLimits

0x9900,	// (0x000260c0) list_ai_message_pane_t2

0x9915,	// (0x000260d5) list_ai_message_pane_t3_ParamLimits

0x9915,	// (0x000260d5) list_ai_message_pane_t3

0x992a,	// (0x000260ea) list_ai_message_pane_t4_ParamLimits

0x992a,	// (0x000260ea) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0002c0f8) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0002c0f8) list_ai_message_pane_t

0x98c9,	// (0x00026089) cell_ai_soft_ind_pane_ParamLimits

0x98c9,	// (0x00026089) cell_ai_soft_ind_pane

0x5381,	// (0x00021b41) cell_ai_soft_ind_pane_g1_ParamLimits

0x5381,	// (0x00021b41) cell_ai_soft_ind_pane_g1

0x41bf,	// (0x0002097f) grid_highlight_cp1

0x538e,	// (0x00021b4e) text_secondary_cp56_ParamLimits

0x538e,	// (0x00021b4e) text_secondary_cp56

0x989e,	// (0x0002605e) example_general_pane_ParamLimits

0x989e,	// (0x0002605e) example_general_pane

0x98aa,	// (0x0002606a) example_parent_pane_g1_ParamLimits

0x98aa,	// (0x0002606a) example_parent_pane_g1

0x98b6,	// (0x00026076) example_parent_pane_t1_ParamLimits

0x98b6,	// (0x00026076) example_parent_pane_t1

0x1b5b,	// (0x0001e31b) popup_preview_text_window_ParamLimits

0x1b5b,	// (0x0001e31b) popup_preview_text_window

0x5272,	// (0x00021a32) list_single_pane_cp2_g4

0x442a,	// (0x00020bea) bg_popup_preview_window_pane_ParamLimits

0x442a,	// (0x00020bea) bg_popup_preview_window_pane

0x9641,	// (0x00025e01) popup_preview_text_window_t1_ParamLimits

0x9641,	// (0x00025e01) popup_preview_text_window_t1

0x965f,	// (0x00025e1f) popup_preview_text_window_t2_ParamLimits

0x965f,	// (0x00025e1f) popup_preview_text_window_t2

0x96a8,	// (0x00025e68) popup_preview_text_window_t3_ParamLimits

0x96a8,	// (0x00025e68) popup_preview_text_window_t3

0x96ed,	// (0x00025ead) popup_preview_text_window_t4_ParamLimits

0x96ed,	// (0x00025ead) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0002c0c7) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0002c0c7) popup_preview_text_window_t

0x976b,	// (0x00025f2b) scroll_pane_cp11

0x5843,	// (0x00022003) bg_popup_preview_window_pane_g1

0x9601,	// (0x00025dc1) bg_popup_preview_window_pane_g2

0x9609,	// (0x00025dc9) bg_popup_preview_window_pane_g3

0x9611,	// (0x00025dd1) bg_popup_preview_window_pane_g4

0x9619,	// (0x00025dd9) bg_popup_preview_window_pane_g5

0x9621,	// (0x00025de1) bg_popup_preview_window_pane_g6

0x9629,	// (0x00025de9) bg_popup_preview_window_pane_g7

0x9631,	// (0x00025df1) bg_popup_preview_window_pane_g8

0x6da0,	// (0x00023560) aid_popup_width_pane

0x1add,	// (0x0001e29d) popup_midp_note_alarm_window_ParamLimits

0x1add,	// (0x0001e29d) popup_midp_note_alarm_window

0x47b7,	// (0x00020f77) data_form_pane_ParamLimits

0x0a96,	// (0x0001d256) form_field_data_pane_g1

0x13d8,	// (0x0001db98) form_field_data_pane_t1_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_ParamLimits

0x47d1,	// (0x00020f91) data_form_wide_pane_ParamLimits

0xb532,	// (0x00027cf2) form_field_data_wide_pane_g1

0xb53e,	// (0x00027cfe) form_field_data_wide_pane_t1_ParamLimits

0x45e9,	// (0x00020da9) input_focus_pane_cp6_ParamLimits

0x13f0,	// (0x0001dbb0) input_popup_find_pane_g1_ParamLimits

0x13f0,	// (0x0001dbb0) input_popup_find_pane_g1

0x74e7,	// (0x00023ca7) aid_navi_side_left_pane

0x74f7,	// (0x00023cb7) aid_navi_side_right_pane

0x602e,	// (0x000227ee) bg_popup_window_pane_cp30_ParamLimits

0x602e,	// (0x000227ee) bg_popup_window_pane_cp30

0x60a8,	// (0x00022868) popup_midp_note_alarm_window_g1_ParamLimits

0x60a8,	// (0x00022868) popup_midp_note_alarm_window_g1

0x60d8,	// (0x00022898) popup_midp_note_alarm_window_t1_ParamLimits

0x60d8,	// (0x00022898) popup_midp_note_alarm_window_t1

0x6179,	// (0x00022939) popup_midp_note_alarm_window_t2_ParamLimits

0x6179,	// (0x00022939) popup_midp_note_alarm_window_t2

0x6227,	// (0x000229e7) popup_midp_note_alarm_window_t3_ParamLimits

0x6227,	// (0x000229e7) popup_midp_note_alarm_window_t3

0x624f,	// (0x00022a0f) popup_midp_note_alarm_window_t4_ParamLimits

0x624f,	// (0x00022a0f) popup_midp_note_alarm_window_t4

0x626f,	// (0x00022a2f) popup_midp_note_alarm_window_t5_ParamLimits

0x626f,	// (0x00022a2f) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0002c064) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0002c064) popup_midp_note_alarm_window_t

0x631b,	// (0x00022adb) wait_bar_pane_cp1_ParamLimits

0x631b,	// (0x00022adb) wait_bar_pane_cp1

0x41bf,	// (0x0002097f) wait_anim_pane_copy1

0x41bf,	// (0x0002097f) wait_border_pane_copy1

0x5d74,	// (0x00022534) wait_border_pane_g1_copy1

0xb558,	// (0x00027d18) form_field_popup_pane_g1

0x0aa0,	// (0x0001d260) form_field_popup_pane_t1_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_cp7_ParamLimits

0x47b7,	// (0x00020f77) list_form_pane_ParamLimits

0xb578,	// (0x00027d38) form_field_popup_wide_pane_g1

0xb580,	// (0x00027d40) form_field_popup_wide_pane_t1_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_cp8_ParamLimits

0x47fd,	// (0x00020fbd) list_form_wide_pane_ParamLimits

0x9aff,	// (0x000262bf) aid_size_cell_graphic_pane

0x0b1d,	// (0x0001d2dd) data_form_pane_t1_ParamLimits

0x0c25,	// (0x0001d3e5) data_form_wide_pane_t1_ParamLimits

0x1eb9,	// (0x0001e679) bg_status_flat_pane

0x104c,	// (0x0001d80c) title_pane_t1_ParamLimits

0x41d5,	// (0x00020995) title_pane_t2_ParamLimits

0x41fb,	// (0x000209bb) title_pane_t3_ParamLimits

0xf573,	// (0x0002bd33) title_pane_t_ParamLimits

0x14f0,	// (0x0001dcb0) level_1_signal_ParamLimits

0x1502,	// (0x0001dcc2) level_2_signal_ParamLimits

0x1515,	// (0x0001dcd5) level_3_signal_ParamLimits

0x1528,	// (0x0001dce8) level_4_signal_ParamLimits

0x153b,	// (0x0001dcfb) level_5_signal_ParamLimits

0x154e,	// (0x0001dd0e) level_6_signal_ParamLimits

0x1561,	// (0x0001dd21) level_7_signal_ParamLimits

0x14f0,	// (0x0001dcb0) level_1_battery_ParamLimits

0x1502,	// (0x0001dcc2) level_2_battery_ParamLimits

0x1515,	// (0x0001dcd5) level_3_battery_ParamLimits

0x1528,	// (0x0001dce8) level_4_battery_ParamLimits

0x153b,	// (0x0001dcfb) level_5_battery_ParamLimits

0x154e,	// (0x0001dd0e) level_6_battery_ParamLimits

0x1561,	// (0x0001dd21) level_7_battery_ParamLimits

0x5f5d,	// (0x0002271d) bg_status_flat_pane_g1

0x5f65,	// (0x00022725) bg_status_flat_pane_g2

0x5f6d,	// (0x0002272d) bg_status_flat_pane_g3

0x5f75,	// (0x00022735) bg_status_flat_pane_g4

0x5f7d,	// (0x0002273d) bg_status_flat_pane_g5

0x5f85,	// (0x00022745) bg_status_flat_pane_g6

0x5f8d,	// (0x0002274d) bg_status_flat_pane_g7

0x10d9,	// (0x0001d899) tabs_3_active_pane_t1_ParamLimits

0x10d9,	// (0x0001d899) tabs_3_passive_pane_t1_ParamLimits

0x10ef,	// (0x0001d8af) tabs_4_active_pane_t1_ParamLimits

0x10ef,	// (0x0001d8af) tabs_4_1_passive_pane_t1_ParamLimits

0x13fc,	// (0x0001dbbc) tabs_2_active_pane_t1_ParamLimits

0x13fc,	// (0x0001dbbc) tabs_2_passive_pane_t1_ParamLimits

0x4223,	// (0x000209e3) bg_active_tab_pane_cp4_ParamLimits

0x1412,	// (0x0001dbd2) tabs_2_long_active_pane_t1_ParamLimits

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp4_ParamLimits

0x8320,	// (0x00024ae0) list_single_midp_graphic_pane_t1_ParamLimits

0x4223,	// (0x000209e3) bg_active_tab_pane_cp5_ParamLimits

0x1429,	// (0x0001dbe9) tabs_3_long_active_pane_t1_ParamLimits

0x4cd5,	// (0x00021495) bg_passive_tab_pane_cp5_ParamLimits

0x8320,	// (0x00024ae0) list_single_midp_graphic_pane_t1

0x1eb9,	// (0x0001e679) bg_status_flat_pane_ParamLimits

0x5722,	// (0x00021ee2) indicator_pane_cp2_ParamLimits

0x5722,	// (0x00021ee2) indicator_pane_cp2

0x201f,	// (0x0001e7df) navi_pane_srt_ParamLimits

0x201f,	// (0x0001e7df) navi_pane_srt

0x574a,	// (0x00021f0a) popup_clock_digital_analogue_window_cp1

0x4293,	// (0x00020a53) indicator_pane_t1

0x532d,	// (0x00021aed) copy_highlight_pane

0x532d,	// (0x00021aed) cursor_graphics_pane

0x532d,	// (0x00021aed) graphic_within_text_pane

0x532d,	// (0x00021aed) link_highlight_pane

0x972e,	// (0x00025eee) popup_preview_text_window_t5_ParamLimits

0x972e,	// (0x00025eee) popup_preview_text_window_t5

0x53a8,	// (0x00021b68) cursor_digital_pane

0x53a8,	// (0x00021b68) cursor_primary_pane

0x53b9,	// (0x00021b79) cursor_primary_small_pane

0x53c1,	// (0x00021b81) cursor_secondary_pane

0x53c9,	// (0x00021b89) cursor_title_pane

0x53a8,	// (0x00021b68) link_highlight_digital_pane

0x53b0,	// (0x00021b70) link_highlight_primary_pane

0x53b9,	// (0x00021b79) link_highlight_primary_small_pane

0x53c1,	// (0x00021b81) link_highlight_secondary_pane

0x53c9,	// (0x00021b89) link_highlight_title_pane

0x53a8,	// (0x00021b68) copy_highlight_digital_pane

0x53a8,	// (0x00021b68) copy_highlight_primary_pane

0x53b9,	// (0x00021b79) copy_highlight_primary_small_pane

0x53c1,	// (0x00021b81) copy_highlight_secondary_pane

0x53c9,	// (0x00021b89) copy_highlight_title_pane

0x53c1,	// (0x00021b81) graphic_text_digital_pane

0x5fdd,	// (0x0002279d) graphic_text_primary_pane

0x5fe6,	// (0x000227a6) graphic_text_primary_small_pane

0x53b9,	// (0x00021b79) graphic_text_secondary_pane

0x53a8,	// (0x00021b68) graphic_text_title_pane

0x16e0,	// (0x0001dea0) cursor_primary_pane_g1

0x5fcf,	// (0x0002278f) cursor_text_primary_t1

0x22f4,	// (0x0001eab4) cursor_primary_small_pane_g1

0x5fc1,	// (0x00022781) cursor_text_primary_small_t1

0x22ea,	// (0x0001eaaa) cursor_primary_small_pane_g1_copy1

0x5fb3,	// (0x00022773) cursor_text_primary_small_t1_copy1

0x5fa5,	// (0x00022765) cursor_text_title_t1

0x22e0,	// (0x0001eaa0) cursor_title_pane_g1

0x16e0,	// (0x0001dea0) cursor_digital_pane_g1

0x53d1,	// (0x00021b91) cursor_text_digital_t1

0x53df,	// (0x00021b9f) link_highlight_primary_pane_g1

0x5f4e,	// (0x0002270e) link_highlight_primary_pane_t1

0x53df,	// (0x00021b9f) link_highlight_primary_small_pane_g1

0x53e7,	// (0x00021ba7) link_highlight_primary_small_pane_t1

0x53f6,	// (0x00021bb6) link_highlight_secondary_pane_g1

0x53fe,	// (0x00021bbe) link_highlight_secondary_pane_t1

0x5eb3,	// (0x00022673) link_highlight_title_pane_g1

0x5eca,	// (0x0002268a) link_highlight_title_pane_t1

0x5eb3,	// (0x00022673) link_highlight_digital_pane_g1

0x5ebb,	// (0x0002267b) link_highlight_digital_pane_t1

0x5d8f,	// (0x0002254f) copy_highlight_primary_pane_g1

0x5db5,	// (0x00022575) copy_highlight_primary_pane_t1

0x5d8f,	// (0x0002254f) copy_highlight_primary_small_pane_g1

0x5da6,	// (0x00022566) copy_highlight_primary_small_pane_t1

0x540d,	// (0x00021bcd) copy_highlight_secondary_pane_g1

0x5415,	// (0x00021bd5) copy_highlight_secondary_pane_t1

0x5d8f,	// (0x0002254f) copy_highlight_title_pane_g1

0x5d97,	// (0x00022557) copy_highlight_title_pane_t1

0x5d8f,	// (0x0002254f) copy_highlight_digital_pane_g1

0x9c20,	// (0x000263e0) copy_highlight_digital_pane_t1

0x9b74,	// (0x00026334) graphic_text_primary_pane_g1

0x9c04,	// (0x000263c4) graphic_text_primary_pane_t1

0x9c12,	// (0x000263d2) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0002c193) graphic_text_primary_pane_t

0x9be0,	// (0x000263a0) graphic_text_primary_small_pane_g1

0x9be8,	// (0x000263a8) graphic_text_primary_small_pane_t1

0x9bf6,	// (0x000263b6) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0002c18e) graphic_text_primary_small_pane_t

0x9bbc,	// (0x0002637c) graphic_text_secondary_pane_g1

0x9bc4,	// (0x00026384) graphic_text_secondary_pane_t1

0x9bd2,	// (0x00026392) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0002c189) graphic_text_secondary_pane_t

0x9b98,	// (0x00026358) graphic_text_title_pane_g1

0x9ba0,	// (0x00026360) graphic_text_title_pane_t1

0x9bae,	// (0x0002636e) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0002c184) graphic_text_title_pane_t

0x9b74,	// (0x00026334) graphic_text_digital_pane_g1

0x9b7c,	// (0x0002633c) graphic_text_digital_pane_t1

0x9b8a,	// (0x0002634a) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0002c17f) graphic_text_digital_pane_t

0x4223,	// (0x000209e3) navi_icon_pane_srt_ParamLimits

0x4223,	// (0x000209e3) navi_icon_pane_srt

0x41bf,	// (0x0002097f) navi_midp_pane_srt

0x41bf,	// (0x0002097f) navi_navi_pane_srt

0x4223,	// (0x000209e3) navi_text_pane_srt_ParamLimits

0x4223,	// (0x000209e3) navi_text_pane_srt

0x95ba,	// (0x00025d7a) navi_navi_icon_text_pane_srt

0x95c2,	// (0x00025d82) navi_navi_pane_srt_g1_ParamLimits

0x95c2,	// (0x00025d82) navi_navi_pane_srt_g1

0x95d4,	// (0x00025d94) navi_navi_pane_srt_g2_ParamLimits

0x95d4,	// (0x00025d94) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0002c17a) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0002c17a) navi_navi_pane_srt_g

0x95e6,	// (0x00025da6) navi_navi_tabs_pane_srt

0x95ba,	// (0x00025d7a) navi_navi_text_pane_srt

0x95ba,	// (0x00025d7a) navi_navi_volume_pane_srt

0x9b65,	// (0x00026325) navi_navi_text_pane_srt_t1

0x8785,	// (0x00024f45) navi_navi_volume_pane_srt_g1

0x878d,	// (0x00024f4d) volume_small_pane_srt_ParamLimits

0x878d,	// (0x00024f4d) volume_small_pane_srt

0x79dc,	// (0x0002419c) volume_small_pane_srt_g1_ParamLimits

0x79dc,	// (0x0002419c) volume_small_pane_srt_g1

0x79ec,	// (0x000241ac) volume_small_pane_srt_g2_ParamLimits

0x79ec,	// (0x000241ac) volume_small_pane_srt_g2

0x79fd,	// (0x000241bd) volume_small_pane_srt_g3_ParamLimits

0x79fd,	// (0x000241bd) volume_small_pane_srt_g3

0x7a0e,	// (0x000241ce) volume_small_pane_srt_g4_ParamLimits

0x7a0e,	// (0x000241ce) volume_small_pane_srt_g4

0x7a1f,	// (0x000241df) volume_small_pane_srt_g5_ParamLimits

0x7a1f,	// (0x000241df) volume_small_pane_srt_g5

0x7a30,	// (0x000241f0) volume_small_pane_srt_g6_ParamLimits

0x7a30,	// (0x000241f0) volume_small_pane_srt_g6

0x7a41,	// (0x00024201) volume_small_pane_srt_g7_ParamLimits

0x7a41,	// (0x00024201) volume_small_pane_srt_g7

0x7a52,	// (0x00024212) volume_small_pane_srt_g8_ParamLimits

0x7a52,	// (0x00024212) volume_small_pane_srt_g8

0x7a63,	// (0x00024223) volume_small_pane_srt_g9_ParamLimits

0x7a63,	// (0x00024223) volume_small_pane_srt_g9

0x7a74,	// (0x00024234) volume_small_pane_srt_g10_ParamLimits

0x7a74,	// (0x00024234) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002bf35) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002bf35) volume_small_pane_srt_g

0x44d3,	// (0x00020c93) query_popup_data_pane_cp2

0x9b4b,	// (0x0002630b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9b4b,	// (0x0002630b) navi_navi_icon_text_pane_srt_t1

0x5fdd,	// (0x0002279d) navi_tabs_2_long_pane_srt

0x5fdd,	// (0x0002279d) navi_tabs_2_pane_srt

0x5fdd,	// (0x0002279d) navi_tabs_3_long_pane_srt

0x5fdd,	// (0x0002279d) navi_tabs_3_pane_srt

0x5fdd,	// (0x0002279d) navi_tabs_4_pane_srt

0x8765,	// (0x00024f25) tabs_2_active_pane_srt_ParamLimits

0x8765,	// (0x00024f25) tabs_2_active_pane_srt

0x8775,	// (0x00024f35) tabs_2_passive_pane_srt_ParamLimits

0x8775,	// (0x00024f35) tabs_2_passive_pane_srt

0x593d,	// (0x000220fd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x593d,	// (0x000220fd) bg_passive_tab_pane_cp1_srt

0x9b29,	// (0x000262e9) bg_passive_tab_pane_g1_cp1_srt

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp1_srt

0x9b32,	// (0x000262f2) bg_passive_tab_pane_g3_cp1_srt

0x420d,	// (0x000209cd) bg_active_tab_pane_cp1_srt_ParamLimits

0x420d,	// (0x000209cd) bg_active_tab_pane_cp1_srt

0x9b3b,	// (0x000262fb) tabs_2_active_pane_srt_g1

0x13fc,	// (0x0001dbbc) tabs_2_active_pane_srt_t1_ParamLimits

0x13fc,	// (0x0001dbbc) tabs_2_active_pane_srt_t1

0x9b29,	// (0x000262e9) bg_active_tab_pane_g1_cp1_srt

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp1_srt

0x9b32,	// (0x000262f2) bg_active_tab_pane_g3_cp1_srt

0x8732,	// (0x00024ef2) tabs_3_active_pane_srt_ParamLimits

0x8732,	// (0x00024ef2) tabs_3_active_pane_srt

0x8743,	// (0x00024f03) tabs_3_passive_pane_cp_srt_ParamLimits

0x8743,	// (0x00024f03) tabs_3_passive_pane_cp_srt

0x8754,	// (0x00024f14) tabs_3_passive_pane_srt_ParamLimits

0x8754,	// (0x00024f14) tabs_3_passive_pane_srt

0x593d,	// (0x000220fd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x593d,	// (0x000220fd) bg_passive_tab_pane_cp2_srt

0x542d,	// (0x00021bed) bg_passive_tab_pane_g1_cp2_srt

0x5037,	// (0x000217f7) bg_passive_tab_pane_g2_cp2_srt

0x5424,	// (0x00021be4) bg_passive_tab_pane_g3_cp2_srt

0x420d,	// (0x000209cd) bg_active_tab_pane_cp2_srt_ParamLimits

0x420d,	// (0x000209cd) bg_active_tab_pane_cp2_srt

0x9b21,	// (0x000262e1) tabs_3_active_pane_srt_g1

0x10d9,	// (0x0001d899) tabs_3_active_pane_srt_t1_ParamLimits

0x10d9,	// (0x0001d899) tabs_3_active_pane_srt_t1

0x542d,	// (0x00021bed) bg_active_tab_pane_g1_cp2_srt

0x5037,	// (0x000217f7) bg_active_tab_pane_g2_cp2_srt

0x5424,	// (0x00021be4) bg_active_tab_pane_g3_cp2_srt

0x86ea,	// (0x00024eaa) tabs_4_active_pane_srt_ParamLimits

0x86ea,	// (0x00024eaa) tabs_4_active_pane_srt

0x86fc,	// (0x00024ebc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x86fc,	// (0x00024ebc) tabs_4_passive_pane_cp2_srt

0x5547,	// (0x00021d07) aid_size_cell_toolbar

0x184d,	// (0x0001e00d) main_idle_act_pane_ParamLimits

0x560b,	// (0x00021dcb) popup_large_graphic_colour_window_ParamLimits

0x1dab,	// (0x0001e56b) popup_toolbar_window_ParamLimits

0x1dab,	// (0x0001e56b) popup_toolbar_window

0xb820,	// (0x00027fe0) list_single_graphic_2heading_pane_ParamLimits

0xb820,	// (0x00027fe0) list_single_graphic_2heading_pane

0x4b04,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane

0x4b16,	// (0x000212d6) aid_size_cell_apps_grid_prt_pane

0x4cd5,	// (0x00021495) bg_wml_button_pane_cp1_ParamLimits

0x4cd5,	// (0x00021495) bg_wml_button_pane_cp1

0x2297,	// (0x0001ea57) form_midp_field_text_pane_t1_ParamLimits

0x593d,	// (0x000220fd) input_focus_pane_cp050_ParamLimits

0x5a7d,	// (0x0002223d) list_midp_form_text_pane_ParamLimits

0x5a5a,	// (0x0002221a) input_focus_pane_cp051_ParamLimits

0x5a6e,	// (0x0002222e) list_midp_choice_pane_ParamLimits

0x2235,	// (0x0001e9f5) list_single_2graphic_pane_cp3_ParamLimits

0x2235,	// (0x0001e9f5) list_single_2graphic_pane_cp3

0x2248,	// (0x0001ea08) list_single_midp_graphic_pane_ParamLimits

0x2248,	// (0x0001ea08) list_single_midp_graphic_pane

0x6d16,	// (0x000234d6) list_single_graphic_2heading_pane_g1_ParamLimits

0x6d16,	// (0x000234d6) list_single_graphic_2heading_pane_g1

0x6d22,	// (0x000234e2) list_single_graphic_2heading_pane_g4_ParamLimits

0x6d22,	// (0x000234e2) list_single_graphic_2heading_pane_g4

0x6d2e,	// (0x000234ee) list_single_graphic_2heading_pane_g5_ParamLimits

0x6d2e,	// (0x000234ee) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002bf88) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002bf88) list_single_graphic_2heading_pane_g

0x6d3a,	// (0x000234fa) list_single_graphic_2heading_pane_t1_ParamLimits

0x6d3a,	// (0x000234fa) list_single_graphic_2heading_pane_t1

0x6d4e,	// (0x0002350e) list_single_graphic_2heading_pane_t2_ParamLimits

0x6d4e,	// (0x0002350e) list_single_graphic_2heading_pane_t2

0x6d68,	// (0x00023528) list_single_graphic_2heading_pane_t3_ParamLimits

0x6d68,	// (0x00023528) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002bf8f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002bf8f) list_single_graphic_2heading_pane_t

0x578d,	// (0x00021f4d) bg_popup_sub_pane_cp2

0x57b3,	// (0x00021f73) grid_toobar_pane

0x829c,	// (0x00024a5c) cell_toolbar_pane_ParamLimits

0x829c,	// (0x00024a5c) cell_toolbar_pane

0x57e9,	// (0x00021fa9) cell_toolbar_pane_g1_ParamLimits

0x57e9,	// (0x00021fa9) cell_toolbar_pane_g1

0x57fb,	// (0x00021fbb) cell_toolbar_pane_g2_ParamLimits

0x57fb,	// (0x00021fbb) cell_toolbar_pane_g2

0x0001,

0xf7d6,	// (0x0002bf96) cell_toolbar_pane_g_ParamLimits

0xf7d6,	// (0x0002bf96) cell_toolbar_pane_g

0x581d,	// (0x00021fdd) grid_highlight_pane_cp2_ParamLimits

0x581d,	// (0x00021fdd) grid_highlight_pane_cp2

0x5837,	// (0x00021ff7) toolbar_button_pane

0x5843,	// (0x00022003) toolbar_button_pane_g1

0x5853,	// (0x00022013) toolbar_button_pane_g2

0x584b,	// (0x0002200b) toolbar_button_pane_g3

0x5863,	// (0x00022023) toolbar_button_pane_g4

0x585b,	// (0x0002201b) toolbar_button_pane_g5

0x586b,	// (0x0002202b) toolbar_button_pane_g6

0x5873,	// (0x00022033) toolbar_button_pane_g7

0x5883,	// (0x00022043) toolbar_button_pane_g8

0x587b,	// (0x0002203b) toolbar_button_pane_g9

0x0009,

0xf7db,	// (0x0002bf9b) toolbar_button_pane_g

0x82cb,	// (0x00024a8b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x82cb,	// (0x00024a8b) list_single_2graphic_pane_g1_cp3

0xe3ba,	// (0x0002ab7a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe3ba,	// (0x0002ab7a) list_single_2graphic_pane_g2_cp3

0x82e6,	// (0x00024aa6) list_single_2graphic_pane_g3_cp3

0x82ee,	// (0x00024aae) list_single_2graphic_pane_g4_cp3_ParamLimits

0x82ee,	// (0x00024aae) list_single_2graphic_pane_g4_cp3

0x82fa,	// (0x00024aba) list_single_2graphic_pane_t1_cp3_ParamLimits

0x82fa,	// (0x00024aba) list_single_2graphic_pane_t1_cp3

0x8314,	// (0x00024ad4) list_single_midp_graphic_pane_g2_ParamLimits

0x8314,	// (0x00024ad4) list_single_midp_graphic_pane_g2

0x554f,	// (0x00021d0f) aid_zoom_text_primary

0xb720,	// (0x00027ee0) aid_zoom_text_secondary

0x54df,	// (0x00021c9f) status_small_pane_g7_ParamLimits

0x54df,	// (0x00021c9f) status_small_pane_g7

0x5502,	// (0x00021cc2) status_small_pane_t1_ParamLimits

0x1021,	// (0x0001d7e1) title_pane_g2

0x0003,

0xf56a,	// (0x0002bd2a) title_pane_g

0x1303,	// (0x0001dac3) aid_size_cell_colour_1_pane_ParamLimits

0x1303,	// (0x0001dac3) aid_size_cell_colour_1_pane

0x1317,	// (0x0001dad7) aid_size_cell_colour_2_pane_ParamLimits

0x1317,	// (0x0001dad7) aid_size_cell_colour_2_pane

0x132b,	// (0x0001daeb) aid_size_cell_colour_3_pane_ParamLimits

0x132b,	// (0x0001daeb) aid_size_cell_colour_3_pane

0x133f,	// (0x0001daff) aid_size_cell_colour_4_pane_ParamLimits

0x133f,	// (0x0001daff) aid_size_cell_colour_4_pane

0x7449,	// (0x00023c09) title_pane_stacon_g1_ParamLimits

0x7449,	// (0x00023c09) title_pane_stacon_g1

0x5e0c,	// (0x000225cc) popup_note_wait_window_g3_ParamLimits

0x5e0c,	// (0x000225cc) popup_note_wait_window_g3

0x5e82,	// (0x00022642) popup_note_wait_window_t5_ParamLimits

0x5e82,	// (0x00022642) popup_note_wait_window_t5

0x41bf,	// (0x0002097f) main_feb_china_hwr_fs_writing_pane

0x18ae,	// (0x0001e06e) popup_feb_china_hwr_fs_window_ParamLimits

0x18ae,	// (0x0001e06e) popup_feb_china_hwr_fs_window

0xe3cb,	// (0x0002ab8b) aid_size_cell_hwr_fs_ParamLimits

0xe3cb,	// (0x0002ab8b) aid_size_cell_hwr_fs

0x593d,	// (0x000220fd) bg_popup_sub_pane_cp3_ParamLimits

0x593d,	// (0x000220fd) bg_popup_sub_pane_cp3

0xe3e0,	// (0x0002aba0) grid_hwr_fs_pane_ParamLimits

0xe3e0,	// (0x0002aba0) grid_hwr_fs_pane

0x835f,	// (0x00024b1f) linegrid_hwr_fs_pane_ParamLimits

0x835f,	// (0x00024b1f) linegrid_hwr_fs_pane

0xe3f8,	// (0x0002abb8) cell_hwr_fs_pane_ParamLimits

0xe3f8,	// (0x0002abb8) cell_hwr_fs_pane

0x5949,	// (0x00022109) linegrid_hwr_fs_pane_g1_ParamLimits

0x5949,	// (0x00022109) linegrid_hwr_fs_pane_g1

0x21fb,	// (0x0001e9bb) linegrid_hwr_fs_pane_g2_ParamLimits

0x21fb,	// (0x0001e9bb) linegrid_hwr_fs_pane_g2

0x5955,	// (0x00022115) linegrid_hwr_fs_pane_g3_ParamLimits

0x5955,	// (0x00022115) linegrid_hwr_fs_pane_g3

0x839f,	// (0x00024b5f) linegrid_hwr_fs_pane_g4_ParamLimits

0x839f,	// (0x00024b5f) linegrid_hwr_fs_pane_g4

0x83b9,	// (0x00024b79) linegrid_hwr_fs_pane_g5_ParamLimits

0x83b9,	// (0x00024b79) linegrid_hwr_fs_pane_g5

0x0004,

0xf801,	// (0x0002bfc1) linegrid_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0002bfc1) linegrid_hwr_fs_pane_g

0x5961,	// (0x00022121) cell_hwr_fs_pane_g1_ParamLimits

0x5961,	// (0x00022121) cell_hwr_fs_pane_g1

0x575b,	// (0x00021f1b) cell_hwr_fs_pane_g2_ParamLimits

0x575b,	// (0x00021f1b) cell_hwr_fs_pane_g2

0x220d,	// (0x0001e9cd) cell_hwr_fs_pane_g3_ParamLimits

0x220d,	// (0x0001e9cd) cell_hwr_fs_pane_g3

0x221a,	// (0x0001e9da) cell_hwr_fs_pane_g4_ParamLimits

0x221a,	// (0x0001e9da) cell_hwr_fs_pane_g4

0x0003,

0xf80c,	// (0x0002bfcc) cell_hwr_fs_pane_g_ParamLimits

0xf80c,	// (0x0002bfcc) cell_hwr_fs_pane_g

0xe418,	// (0x0002abd8) cell_hwr_fs_pane_t1

0x41bf,	// (0x0002097f) grid_highlight_pane_cp6

0x41bf,	// (0x0002097f) main_idle_act2_pane

0x490d,	// (0x000210cd) aid_inside_area_popup_secondary

0x2401,	// (0x0001ebc1) aid_inside_area_window_primary_ParamLimits

0x2401,	// (0x0001ebc1) aid_inside_area_window_primary

0x9c2f,	// (0x000263ef) ai2_news_ticker_pane

0x9c37,	// (0x000263f7) aid_size_cell_ai1_link_ParamLimits

0x9c37,	// (0x000263f7) aid_size_cell_ai1_link

0x280d,	// (0x0001efcd) popup_ai2_data_window_ParamLimits

0x280d,	// (0x0001efcd) popup_ai2_data_window

0x9c51,	// (0x00026411) popup_ai2_link_window_ParamLimits

0x9c51,	// (0x00026411) popup_ai2_link_window

0x593d,	// (0x000220fd) bg_popup_sub_pane_cp4_ParamLimits

0x593d,	// (0x000220fd) bg_popup_sub_pane_cp4

0x9c65,	// (0x00026425) grid_ai2_link_pane_ParamLimits

0x9c65,	// (0x00026425) grid_ai2_link_pane

0x9c7c,	// (0x0002643c) popup_ai2_link_window_g1_ParamLimits

0x9c7c,	// (0x0002643c) popup_ai2_link_window_g1

0x9c88,	// (0x00026448) popup_ai2_link_window_g2_ParamLimits

0x9c88,	// (0x00026448) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0002c198) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0002c198) popup_ai2_link_window_g

0x9c97,	// (0x00026457) ai2_mp_button_pane

0x9c9f,	// (0x0002645f) ai2_mp_volume_pane

0x5a5a,	// (0x0002221a) bg_popup_sub_pane_cp5_ParamLimits

0x5a5a,	// (0x0002221a) bg_popup_sub_pane_cp5

0x9ca7,	// (0x00026467) heading_ai2_gene_pane_ParamLimits

0x9ca7,	// (0x00026467) heading_ai2_gene_pane

0x9cb3,	// (0x00026473) list_ai2_gene_pane_ParamLimits

0x9cb3,	// (0x00026473) list_ai2_gene_pane

0x9cfb,	// (0x000264bb) cell_ai2_link_pane_ParamLimits

0x9cfb,	// (0x000264bb) cell_ai2_link_pane

0x9d11,	// (0x000264d1) cell_ai2_link_pane_g1

0x41bf,	// (0x0002097f) grid_highlight_pane_cp7

0x87a2,	// (0x00024f62) ai2_mp_volume_pane_g1

0x9da6,	// (0x00026566) ai2_mp_volume_pane_g2

0x2837,	// (0x0001eff7) list_ai2_gene_pane_t1

0x9dae,	// (0x0002656e) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0002c1b1) ai2_mp_volume_pane_g

0x87aa,	// (0x00024f6a) volume_small_pane_cp3

0x9db6,	// (0x00026576) aid_size_cell_ai2_button

0x9dbe,	// (0x0002657e) grid_ai2_button_pane

0x9dc7,	// (0x00026587) cell_ai2_button_pane_ParamLimits

0x9dc7,	// (0x00026587) cell_ai2_button_pane

0x413d,	// (0x000208fd) cell_ai2_button_pane_g1

0x41bf,	// (0x0002097f) grid_highlight_pane_cp8

0x9d66,	// (0x00026526) ai2_gene_pane_t1_ParamLimits

0x9d66,	// (0x00026526) ai2_gene_pane_t1

0x1839,	// (0x0001dff9) aid_height_parent_landscape

0x25b9,	// (0x0001ed79) aid_height_set_list

0x9a23,	// (0x000261e3) aid_size_parent

0x9aff,	// (0x000262bf) aid_size_cell_graphic_pane_ParamLimits

0x9cc3,	// (0x00026483) popup_ai2_data_window_g1_ParamLimits

0x9cc3,	// (0x00026483) popup_ai2_data_window_g1

0x9ccf,	// (0x0002648f) ai2_news_ticker_pane_g1

0x9cd7,	// (0x00026497) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0002c19d) ai2_news_ticker_pane_g

0x9cdf,	// (0x0002649f) ai2_news_ticker_pane_t1

0x9ced,	// (0x000264ad) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0002c1a2) ai2_news_ticker_pane_t

0x9ae0,	// (0x000262a0) heading_ai2_gene_pane_g1

0x9d1a,	// (0x000264da) heading_ai2_gene_pane_t1_ParamLimits

0x9d1a,	// (0x000264da) heading_ai2_gene_pane_t1

0x9d2f,	// (0x000264ef) list_highlight_pane_cp6

0x2821,	// (0x0001efe1) ai2_gene_pane_ParamLimits

0x2821,	// (0x0001efe1) ai2_gene_pane

0x2845,	// (0x0001f005) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0002c1a7) list_ai2_gene_pane_t

0x9d37,	// (0x000264f7) list_highlight_pane_cp8_ParamLimits

0x9d37,	// (0x000264f7) list_highlight_pane_cp8

0x9d48,	// (0x00026508) ai2_gene_pane_g1_ParamLimits

0x9d48,	// (0x00026508) ai2_gene_pane_g1

0x9d5a,	// (0x0002651a) ai2_gene_pane_g2_ParamLimits

0x9d5a,	// (0x0002651a) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0002c1ac) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0002c1ac) ai2_gene_pane_g

0x476a,	// (0x00020f2a) scroll_pane_cp12

0xe379,	// (0x0002ab39) control_pane_t3_ParamLimits

0xe379,	// (0x0002ab39) control_pane_t3

0x54f3,	// (0x00021cb3) status_small_pane_g8_ParamLimits

0x54f3,	// (0x00021cb3) status_small_pane_g8

0x1922,	// (0x0001e0e2) popup_find_window_ParamLimits

0x1b15,	// (0x0001e2d5) popup_note_image_window_ParamLimits

0xb022,	// (0x000277e2) list_double2_graphic_pane_vc_g1_ParamLimits

0xb022,	// (0x000277e2) list_double2_graphic_pane_vc_g1

0xb74d,	// (0x00027f0d) list_double2_graphic_pane_vc_g2_ParamLimits

0xb74d,	// (0x00027f0d) list_double2_graphic_pane_vc_g2

0xb759,	// (0x00027f19) list_double2_graphic_pane_vc_g3_ParamLimits

0xb759,	// (0x00027f19) list_double2_graphic_pane_vc_g3

0x0002,

0xf5dd,	// (0x0002bd9d) list_double2_graphic_pane_vc_g_ParamLimits

0xf5dd,	// (0x0002bd9d) list_double2_graphic_pane_vc_g

0xb765,	// (0x00027f25) list_double2_graphic_pane_vc_t1_ParamLimits

0xb765,	// (0x00027f25) list_double2_graphic_pane_vc_t1

0xb74d,	// (0x00027f0d) list_single_heading_pane_vc_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_single_heading_pane_vc_g1

0xb759,	// (0x00027f19) list_single_heading_pane_vc_g2_ParamLimits

0xb759,	// (0x00027f19) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_single_heading_pane_vc_g

0xb77b,	// (0x00027f3b) list_single_heading_pane_vc_t1_ParamLimits

0xb77b,	// (0x00027f3b) list_single_heading_pane_vc_t1

0xb791,	// (0x00027f51) list_single_heading_pane_vc_t2_ParamLimits

0xb791,	// (0x00027f51) list_single_heading_pane_vc_t2

0x0001,

0xf7f0,	// (0x0002bfb0) list_single_heading_pane_vc_t_ParamLimits

0xf7f0,	// (0x0002bfb0) list_single_heading_pane_vc_t

0x5897,	// (0x00022057) list_setting_number_pane_vc_g1_ParamLimits

0x5897,	// (0x00022057) list_setting_number_pane_vc_g1

0x58a3,	// (0x00022063) list_setting_number_pane_vc_g2_ParamLimits

0x58a3,	// (0x00022063) list_setting_number_pane_vc_g2

0x0001,

0xf7f5,	// (0x0002bfb5) list_setting_number_pane_vc_g_ParamLimits

0xf7f5,	// (0x0002bfb5) list_setting_number_pane_vc_g

0x58af,	// (0x0002206f) list_setting_number_pane_vc_t1_ParamLimits

0x58af,	// (0x0002206f) list_setting_number_pane_vc_t1

0x58c3,	// (0x00022083) list_setting_number_pane_vc_t2_ParamLimits

0x58c3,	// (0x00022083) list_setting_number_pane_vc_t2

0x58df,	// (0x0002209f) list_setting_number_pane_vc_t3_ParamLimits

0x58df,	// (0x0002209f) list_setting_number_pane_vc_t3

0x0002,

0xf7fa,	// (0x0002bfba) list_setting_number_pane_vc_t_ParamLimits

0xf7fa,	// (0x0002bfba) list_setting_number_pane_vc_t

0x5905,	// (0x000220c5) set_value_pane_vc_ParamLimits

0x5905,	// (0x000220c5) set_value_pane_vc

0xb820,	// (0x00027fe0) list_double2_graphic_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double2_graphic_pane_vc

0x9a7e,	// (0x0002623e) list_double2_large_graphic_pane_vc_ParamLimits

0x9a7e,	// (0x0002623e) list_double2_large_graphic_pane_vc

0xb820,	// (0x00027fe0) list_double2_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double2_pane_vc

0xb820,	// (0x00027fe0) list_double_graphic_heading_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double_graphic_heading_pane_vc

0xb820,	// (0x00027fe0) list_double_graphic_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double_graphic_pane_vc

0xb820,	// (0x00027fe0) list_double_heading_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double_heading_pane_vc

0x9a7e,	// (0x0002623e) list_double_large_graphic_pane_vc_ParamLimits

0x9a7e,	// (0x0002623e) list_double_large_graphic_pane_vc

0xb820,	// (0x00027fe0) list_double_number_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double_number_pane_vc

0xb820,	// (0x00027fe0) list_double_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double_pane_vc

0xb820,	// (0x00027fe0) list_double_time_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_double_time_pane_vc

0xb820,	// (0x00027fe0) list_setting_number_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_setting_number_pane_vc

0xb820,	// (0x00027fe0) list_setting_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_setting_pane_vc

0xb820,	// (0x00027fe0) list_single_graphic_heading_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_single_graphic_heading_pane_vc

0xb820,	// (0x00027fe0) list_single_heading_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_single_heading_pane_vc

0xb820,	// (0x00027fe0) list_single_number_heading_pane_vc_ParamLimits

0xb820,	// (0x00027fe0) list_single_number_heading_pane_vc

0xb878,	// (0x00028038) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb878,	// (0x00028038) list_double_graphic_heading_pane_vc_g1

0xb74d,	// (0x00027f0d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb74d,	// (0x00027f0d) list_double_graphic_heading_pane_vc_g2

0xb759,	// (0x00027f19) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb759,	// (0x00027f19) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x0002c1b8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x0002c1b8) list_double_graphic_heading_pane_vc_g

0xb884,	// (0x00028044) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb884,	// (0x00028044) list_double_graphic_heading_pane_vc_t1

0xb77b,	// (0x00027f3b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb77b,	// (0x00027f3b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002c1bf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x0002c1bf) list_double_graphic_heading_pane_vc_t

0x5897,	// (0x00022057) list_setting_pane_vc_g1_ParamLimits

0x5897,	// (0x00022057) list_setting_pane_vc_g1

0x58a3,	// (0x00022063) list_setting_pane_vc_g2_ParamLimits

0x58a3,	// (0x00022063) list_setting_pane_vc_g2

0x0001,

0xf7f5,	// (0x0002bfb5) list_setting_pane_vc_g_ParamLimits

0xf7f5,	// (0x0002bfb5) list_setting_pane_vc_g

0x9fb6,	// (0x00026776) list_setting_pane_vc_t1_ParamLimits

0x9fb6,	// (0x00026776) list_setting_pane_vc_t1

0x9fca,	// (0x0002678a) list_setting_pane_vc_t2_ParamLimits

0x9fca,	// (0x0002678a) list_setting_pane_vc_t2

0x0001,

0xfa42,	// (0x0002c202) list_setting_pane_vc_t_ParamLimits

0xfa42,	// (0x0002c202) list_setting_pane_vc_t

0x5905,	// (0x000220c5) set_value_pane_cp_vc_ParamLimits

0x5905,	// (0x000220c5) set_value_pane_cp_vc

0xb74d,	// (0x00027f0d) list_single_number_heading_pane_vc_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_single_number_heading_pane_vc_g1

0xb759,	// (0x00027f19) list_single_number_heading_pane_vc_g2_ParamLimits

0xb759,	// (0x00027f19) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_single_number_heading_pane_vc_g

0xb77b,	// (0x00027f3b) list_single_number_heading_pane_vc_t1_ParamLimits

0xb77b,	// (0x00027f3b) list_single_number_heading_pane_vc_t1

0xb896,	// (0x00028056) list_single_number_heading_pane_vc_t2_ParamLimits

0xb896,	// (0x00028056) list_single_number_heading_pane_vc_t2

0xb8a8,	// (0x00028068) list_single_number_heading_pane_vc_t3_ParamLimits

0xb8a8,	// (0x00028068) list_single_number_heading_pane_vc_t3

0x0002,

0xfa47,	// (0x0002c207) list_single_number_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x0002c207) list_single_number_heading_pane_vc_t

0xb022,	// (0x000277e2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb022,	// (0x000277e2) list_single_graphic_heading_pane_vc_g1

0xb74d,	// (0x00027f0d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb74d,	// (0x00027f0d) list_single_graphic_heading_pane_vc_g4

0xb759,	// (0x00027f19) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb759,	// (0x00027f19) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5dd,	// (0x0002bd9d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5dd,	// (0x0002bd9d) list_single_graphic_heading_pane_vc_g

0xb77b,	// (0x00027f3b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb77b,	// (0x00027f3b) list_single_graphic_heading_pane_vc_t1

0xb8ba,	// (0x0002807a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb8ba,	// (0x0002807a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002c20e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002c20e) list_single_graphic_heading_pane_vc_t

0xb74d,	// (0x00027f0d) list_double2_pane_vc_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_double2_pane_vc_g1

0xb759,	// (0x00027f19) list_double2_pane_vc_g2_ParamLimits

0xb759,	// (0x00027f19) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_double2_pane_vc_g

0xb8cc,	// (0x0002808c) list_double2_pane_vc_t1_ParamLimits

0xb8cc,	// (0x0002808c) list_double2_pane_vc_t1

0xb8e2,	// (0x000280a2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb8e2,	// (0x000280a2) list_double2_large_graphic_pane_vc_g1

0xb8ee,	// (0x000280ae) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb8ee,	// (0x000280ae) list_double2_large_graphic_pane_vc_g2

0xb8fa,	// (0x000280ba) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb8fa,	// (0x000280ba) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0002bdc1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0002bdc1) list_double2_large_graphic_pane_vc_g

0xb906,	// (0x000280c6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb906,	// (0x000280c6) list_double2_large_graphic_pane_vc_t1

0xb91c,	// (0x000280dc) list_double_time_pane_vc_g1_ParamLimits

0xb91c,	// (0x000280dc) list_double_time_pane_vc_g1

0xb928,	// (0x000280e8) list_double_time_pane_vc_g2_ParamLimits

0xb928,	// (0x000280e8) list_double_time_pane_vc_g2

0x0001,

0xfa53,	// (0x0002c213) list_double_time_pane_vc_g_ParamLimits

0xfa53,	// (0x0002c213) list_double_time_pane_vc_g

0xb934,	// (0x000280f4) list_double_time_pane_vc_t1_ParamLimits

0xb934,	// (0x000280f4) list_double_time_pane_vc_t1

0xb94d,	// (0x0002810d) list_double_time_pane_vc_t2_ParamLimits

0xb94d,	// (0x0002810d) list_double_time_pane_vc_t2

0xb986,	// (0x00028146) list_double_time_pane_vc_t3_ParamLimits

0xb986,	// (0x00028146) list_double_time_pane_vc_t3

0xb99e,	// (0x0002815e) list_double_time_pane_vc_t4_ParamLimits

0xb99e,	// (0x0002815e) list_double_time_pane_vc_t4

0x0003,

0xfa58,	// (0x0002c218) list_double_time_pane_vc_t_ParamLimits

0xfa58,	// (0x0002c218) list_double_time_pane_vc_t

0xb74d,	// (0x00027f0d) list_double_pane_vc_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_double_pane_vc_g1

0xb759,	// (0x00027f19) list_double_pane_vc_g2_ParamLimits

0xb759,	// (0x00027f19) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_double_pane_vc_g

0xb9b0,	// (0x00028170) list_double_pane_vc_t1_ParamLimits

0xb9b0,	// (0x00028170) list_double_pane_vc_t1

0xb9c2,	// (0x00028182) list_double_pane_vc_t2_ParamLimits

0xb9c2,	// (0x00028182) list_double_pane_vc_t2

0x0001,

0xfa61,	// (0x0002c221) list_double_pane_vc_t_ParamLimits

0xfa61,	// (0x0002c221) list_double_pane_vc_t

0xb74d,	// (0x00027f0d) list_double_number_pane_vc_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_double_number_pane_vc_g1

0xb759,	// (0x00027f19) list_double_number_pane_vc_g2_ParamLimits

0xb759,	// (0x00027f19) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_double_number_pane_vc_g

0xb9d8,	// (0x00028198) list_double_number_pane_vc_t1_ParamLimits

0xb9d8,	// (0x00028198) list_double_number_pane_vc_t1

0xb9ec,	// (0x000281ac) list_double_number_pane_vc_t2_ParamLimits

0xb9ec,	// (0x000281ac) list_double_number_pane_vc_t2

0xb9c2,	// (0x00028182) list_double_number_pane_vc_t3_ParamLimits

0xb9c2,	// (0x00028182) list_double_number_pane_vc_t3

0x0002,

0xfa66,	// (0x0002c226) list_double_number_pane_vc_t_ParamLimits

0xfa66,	// (0x0002c226) list_double_number_pane_vc_t

0xb9fe,	// (0x000281be) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb9fe,	// (0x000281be) list_double_large_graphic_pane_vc_g1

0xba0a,	// (0x000281ca) list_double_large_graphic_pane_vc_g2_ParamLimits

0xba0a,	// (0x000281ca) list_double_large_graphic_pane_vc_g2

0xb8fa,	// (0x000280ba) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb8fa,	// (0x000280ba) list_double_large_graphic_pane_vc_g3

0xba19,	// (0x000281d9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xba19,	// (0x000281d9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6d,	// (0x0002c22d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0002c22d) list_double_large_graphic_pane_vc_g

0xba25,	// (0x000281e5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xba25,	// (0x000281e5) list_double_large_graphic_pane_vc_t1

0xba37,	// (0x000281f7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xba37,	// (0x000281f7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0002c236) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0002c236) list_double_large_graphic_pane_vc_t

0xb74d,	// (0x00027f0d) list_double_heading_pane_vc_g1_ParamLimits

0xb74d,	// (0x00027f0d) list_double_heading_pane_vc_g1

0xb759,	// (0x00027f19) list_double_heading_pane_vc_g2_ParamLimits

0xb759,	// (0x00027f19) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002bda4) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002bda4) list_double_heading_pane_vc_g

0xba4e,	// (0x0002820e) list_double_heading_pane_vc_t1_ParamLimits

0xba4e,	// (0x0002820e) list_double_heading_pane_vc_t1

0xb77b,	// (0x00027f3b) list_double_heading_pane_vc_t2_ParamLimits

0xb77b,	// (0x00027f3b) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0002c23b) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002c23b) list_double_heading_pane_vc_t

0xba60,	// (0x00028220) list_double_graphic_pane_vc_g1_ParamLimits

0xba60,	// (0x00028220) list_double_graphic_pane_vc_g1

0xba70,	// (0x00028230) list_double_graphic_pane_vc_g2_ParamLimits

0xba70,	// (0x00028230) list_double_graphic_pane_vc_g2

0xba7f,	// (0x0002823f) list_double_graphic_pane_vc_g3_ParamLimits

0xba7f,	// (0x0002823f) list_double_graphic_pane_vc_g3

0x0002,

0xfa80,	// (0x0002c240) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0002c240) list_double_graphic_pane_vc_g

0xba8b,	// (0x0002824b) list_double_graphic_pane_vc_t1_ParamLimits

0xba8b,	// (0x0002824b) list_double_graphic_pane_vc_t1

0xb9c2,	// (0x00028182) list_double_graphic_pane_vc_t2_ParamLimits

0xb9c2,	// (0x00028182) list_double_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0002c247) list_double_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0002c247) list_double_graphic_pane_vc_t

0x6da8,	// (0x00023568) aid_size_cell_fastswap

0xe124,	// (0x0002a8e4) aid_size_cell_touch_ParamLimits

0xe124,	// (0x0002a8e4) aid_size_cell_touch

0x6f64,	// (0x00023724) popup_fast_swap_wide_window_ParamLimits

0x6f64,	// (0x00023724) popup_fast_swap_wide_window

0xe1d5,	// (0x0002a995) touch_pane_ParamLimits

0xe1d5,	// (0x0002a995) touch_pane

0xb48e,	// (0x00027c4e) button_value_adjust_pane_cp2

0x944d,	// (0x00025c0d) button_value_adjust_pane_cp4

0xb4ae,	// (0x00027c6e) form_field_data_pane_cp2

0x0a5d,	// (0x0001d21d) form_field_data_wide_pane_cp2

0x4d10,	// (0x000214d0) bg_scroll_pane_ParamLimits

0x75df,	// (0x00023d9f) scroll_handle_pane_ParamLimits

0x75f3,	// (0x00023db3) scroll_sc2_down_pane_ParamLimits

0x75f3,	// (0x00023db3) scroll_sc2_down_pane

0x4d41,	// (0x00021501) scroll_sc2_up_pane_ParamLimits

0x4d41,	// (0x00021501) scroll_sc2_up_pane

0x2969,	// (0x0001f129) grid_wheel_folder_pane_g1_ParamLimits

0x2969,	// (0x0001f129) grid_wheel_folder_pane_g1

0x78bd,	// (0x0002407d) clock_nsta_pane_cp2_ParamLimits

0x78bd,	// (0x0002407d) clock_nsta_pane_cp2

0x1643,	// (0x0001de03) listscroll_midp_pane_ParamLimits

0x1653,	// (0x0001de13) midp_canvas_pane

0x7bef,	// (0x000243af) nsta_clock_indic_pane

0x5577,	// (0x00021d37) listscroll_form_pane_vc

0x557f,	// (0x00021d3f) listscroll_set_pane_vc_ParamLimits

0x557f,	// (0x00021d3f) listscroll_set_pane_vc

0x1ee1,	// (0x0001e6a1) clock_nsta_pane

0x1f04,	// (0x0001e6c4) indicator_nsta_pane

0x578d,	// (0x00021f4d) bg_popup_sub_pane_cp2_ParamLimits

0x57a1,	// (0x00021f61) find_pane_cp2_ParamLimits

0x57a1,	// (0x00021f61) find_pane_cp2

0x57b3,	// (0x00021f73) grid_toobar_pane_ParamLimits

0x5911,	// (0x000220d1) list_form_gen_pane_vc_ParamLimits

0x5911,	// (0x000220d1) list_form_gen_pane_vc

0x5927,	// (0x000220e7) scroll_pane_cp8_vc_ParamLimits

0x5927,	// (0x000220e7) scroll_pane_cp8_vc

0x5977,	// (0x00022137) data_form_wide_pane_vc_ParamLimits

0x5977,	// (0x00022137) data_form_wide_pane_vc

0x5983,	// (0x00022143) form_field_data_wide_pane_vc_g1

0x598b,	// (0x0002214b) form_field_data_wide_pane_vc_t1_ParamLimits

0x598b,	// (0x0002214b) form_field_data_wide_pane_vc_t1

0x47c3,	// (0x00020f83) input_focus_pane_cp6_vc_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_cp6_vc

0x22b8,	// (0x0001ea78) list_midp_pane_ParamLimits

0x9b15,	// (0x000262d5) scroll_pane_cp16_ParamLimits

0x9b15,	// (0x000262d5) scroll_pane_cp16

0x5bf2,	// (0x000223b2) button_value_adjust_pane_ParamLimits

0x5bf2,	// (0x000223b2) button_value_adjust_pane

0x25c5,	// (0x0001ed85) button_value_adjust_pane_cp6_ParamLimits

0x25c5,	// (0x0001ed85) button_value_adjust_pane_cp6

0x26cf,	// (0x0001ee8f) settings_code_pane_cp_ParamLimits

0x26cf,	// (0x0001ee8f) settings_code_pane_cp

0x413d,	// (0x000208fd) cell_touch_pane_g1

0x413d,	// (0x000208fd) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002bedf) cell_touch_pane_g

0x2853,	// (0x0001f013) cell_touch_pane_cp_ParamLimits

0x2853,	// (0x0001f013) cell_touch_pane_cp

0x286f,	// (0x0001f02f) cell_touch_pane_ParamLimits

0x286f,	// (0x0001f02f) cell_touch_pane

0x413d,	// (0x000208fd) scroll_sc2_down_pane_g1

0x413d,	// (0x000208fd) scroll_sc2_up_pane_g1

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp4_vc

0x9dd9,	// (0x00026599) list_set_graphic_pane_vc_g1_ParamLimits

0x9dd9,	// (0x00026599) list_set_graphic_pane_vc_g1

0x9de5,	// (0x000265a5) list_set_graphic_pane_vc_g2_ParamLimits

0x9de5,	// (0x000265a5) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x0002c1c4) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x0002c1c4) list_set_graphic_pane_vc_g

0x9df1,	// (0x000265b1) text_primary_small_cp13_vc_ParamLimits

0x9df1,	// (0x000265b1) text_primary_small_cp13_vc

0x9e09,	// (0x000265c9) list_set_graphic_pane_vc_ParamLimits

0x9e09,	// (0x000265c9) list_set_graphic_pane_vc

0x41bf,	// (0x0002097f) input_focus_pane_cp2_vc

0x413d,	// (0x000208fd) setting_code_pane_vc_g1

0x9e1c,	// (0x000265dc) setting_code_pane_vc_t1

0x9e2a,	// (0x000265ea) set_text_pane_vc_t1_ParamLimits

0x9e2a,	// (0x000265ea) set_text_pane_vc_t1

0x41bf,	// (0x0002097f) input_focus_pane_cp1_vc

0x9e45,	// (0x00026605) list_set_text_pane_vc

0x413d,	// (0x000208fd) setting_text_pane_vc_g1

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp2_vc

0x9e4f,	// (0x0002660f) setting_slider_graphic_pane_vc_g1

0x9e57,	// (0x00026617) setting_slider_graphic_pane_vc_t1

0x9e65,	// (0x00026625) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x0002c1c9) setting_slider_graphic_pane_vc_t

0x9e73,	// (0x00026633) slider_set_pane_cp_vc

0x9e7b,	// (0x0002663b) slider_set_pane_vc_g1

0x9e84,	// (0x00026644) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x0002c1ce) slider_set_pane_vc_g

0x481e,	// (0x00020fde) set_opt_bg_pane_g1_copy1

0x4826,	// (0x00020fe6) set_opt_bg_pane_g2_copy1

0x9eb0,	// (0x00026670) set_opt_bg_pane_g3_copy1

0x4836,	// (0x00020ff6) set_opt_bg_pane_g4_copy1

0x483e,	// (0x00020ffe) set_opt_bg_pane_g5_copy1

0x4846,	// (0x00021006) set_opt_bg_pane_g6_copy1

0x9eb8,	// (0x00026678) set_opt_bg_pane_g7_copy1

0x9ec0,	// (0x00026680) set_opt_bg_pane_g8_copy1

0x9ec8,	// (0x00026688) set_opt_bg_pane_g9_copy1

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp_vc

0x9ed0,	// (0x00026690) setting_slider_pane_vc_t1

0x9e57,	// (0x00026617) setting_slider_pane_vc_t2

0x9e65,	// (0x00026625) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x0002c1dd) setting_slider_pane_vc_t

0x9e73,	// (0x00026633) slider_set_pane_vc

0x84cc,	// (0x00024c8c) volume_set_pane_vc_g1

0x87b3,	// (0x00024f73) volume_set_pane_vc_g2

0x87bc,	// (0x00024f7c) volume_set_pane_vc_g3

0x87c5,	// (0x00024f85) volume_set_pane_vc_g4

0x87ce,	// (0x00024f8e) volume_set_pane_vc_g5

0x87d7,	// (0x00024f97) volume_set_pane_vc_g6

0x87e0,	// (0x00024fa0) volume_set_pane_vc_g7

0x87e9,	// (0x00024fa9) volume_set_pane_vc_g8

0x87f2,	// (0x00024fb2) volume_set_pane_vc_g9

0x87fb,	// (0x00024fbb) volume_set_pane_vc_g10

0x0009,

0xfa24,	// (0x0002c1e4) volume_set_pane_vc_g

0x9edf,	// (0x0002669f) volume_set_pane_vc

0x9ee7,	// (0x000266a7) button_value_adjust_pane_cp1_vc

0x9ef1,	// (0x000266b1) list_highlight_pane_cp2_vc

0x9efa,	// (0x000266ba) list_set_pane_vc_ParamLimits

0x9efa,	// (0x000266ba) list_set_pane_vc

0x9f4c,	// (0x0002670c) main_pane_set_vc_t1_ParamLimits

0x9f4c,	// (0x0002670c) main_pane_set_vc_t1

0x9f61,	// (0x00026721) main_pane_set_vc_t2_ParamLimits

0x9f61,	// (0x00026721) main_pane_set_vc_t2

0x9f73,	// (0x00026733) main_pane_set_vc_t3_ParamLimits

0x9f73,	// (0x00026733) main_pane_set_vc_t3

0x9f85,	// (0x00026745) main_pane_set_vc_t4_ParamLimits

0x9f85,	// (0x00026745) main_pane_set_vc_t4

0x0003,

0xfa39,	// (0x0002c1f9) main_pane_set_vc_t_ParamLimits

0xfa39,	// (0x0002c1f9) main_pane_set_vc_t

0x9f97,	// (0x00026757) setting_code_pane_vc_ParamLimits

0x9f97,	// (0x00026757) setting_code_pane_vc

0x9fa6,	// (0x00026766) setting_slider_graphic_pane_vc

0x9fa6,	// (0x00026766) setting_slider_pane_vc

0x9fa6,	// (0x00026766) setting_text_pane_vc

0x9fa6,	// (0x00026766) setting_volume_pane_vc

0x9fae,	// (0x0002676e) scroll_pane_cp121_vc

0x47ae,	// (0x00020f6e) set_content_pane_vc

0x9fec,	// (0x000267ac) button_value_adjust_pane_g1

0x9ff5,	// (0x000267b5) button_value_adjust_pane_g2

0x0001,

0xfa8c,	// (0x0002c24c) button_value_adjust_pane_g

0x9ffe,	// (0x000267be) form_field_slider_wide_pane_vc_t1_ParamLimits

0x9ffe,	// (0x000267be) form_field_slider_wide_pane_vc_t1

0xa014,	// (0x000267d4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa014,	// (0x000267d4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa91,	// (0x0002c251) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0002c251) form_field_slider_wide_pane_vc_t

0x420d,	// (0x000209cd) input_focus_pane_cp10_vc_ParamLimits

0x420d,	// (0x000209cd) input_focus_pane_cp10_vc

0xa029,	// (0x000267e9) slider_cont_pane_cp1_vc_ParamLimits

0xa029,	// (0x000267e9) slider_cont_pane_cp1_vc

0x9e7b,	// (0x0002663b) slider_form_pane_g1_cp2

0x9e84,	// (0x00026644) slider_form_pane_g2_cp2

0xa044,	// (0x00026804) form_field_slider_pane_vc_t3

0xa052,	// (0x00026812) form_field_slider_pane_vc_t4

0xa060,	// (0x00026820) slider_form_pane_vc_ParamLimits

0xa060,	// (0x00026820) slider_form_pane_vc

0xa06d,	// (0x0002682d) form_field_slider_pane_vc_t1_ParamLimits

0xa06d,	// (0x0002682d) form_field_slider_pane_vc_t1

0xa083,	// (0x00026843) form_field_slider_pane_vc_t2_ParamLimits

0xa083,	// (0x00026843) form_field_slider_pane_vc_t2

0x0001,

0xfaa1,	// (0x0002c261) form_field_slider_pane_vc_t_ParamLimits

0xfaa1,	// (0x0002c261) form_field_slider_pane_vc_t

0x420d,	// (0x000209cd) input_focus_pane_cp9_vc_ParamLimits

0x420d,	// (0x000209cd) input_focus_pane_cp9_vc

0xa095,	// (0x00026855) slider_cont_pane_vc_ParamLimits

0xa095,	// (0x00026855) slider_cont_pane_vc

0xa0a7,	// (0x00026867) list_form_graphic_pane_cp_vc_ParamLimits

0xa0a7,	// (0x00026867) list_form_graphic_pane_cp_vc

0x5983,	// (0x00022143) form_field_popup_wide_pane_vc_g1

0xa0bc,	// (0x0002687c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa0bc,	// (0x0002687c) form_field_popup_wide_pane_vc_t1

0x47c3,	// (0x00020f83) input_focus_pane_cp8_vc_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_cp8_vc

0xa0d1,	// (0x00026891) list_form_wide_pane_vc_ParamLimits

0xa0d1,	// (0x00026891) list_form_wide_pane_vc

0xa0dd,	// (0x0002689d) list_form_graphic_pane_vc_g1

0xa0e5,	// (0x000268a5) list_form_graphic_pane_vc_t1_ParamLimits

0xa0e5,	// (0x000268a5) list_form_graphic_pane_vc_t1

0x4223,	// (0x000209e3) list_highlight_pane_cp5_vc_ParamLimits

0x4223,	// (0x000209e3) list_highlight_pane_cp5_vc

0xa101,	// (0x000268c1) list_form_graphic_pane_vc_ParamLimits

0xa101,	// (0x000268c1) list_form_graphic_pane_vc

0x5983,	// (0x00022143) form_field_popup_pane_vc_g1

0xa117,	// (0x000268d7) form_field_popup_pane_vc_t1_ParamLimits

0xa117,	// (0x000268d7) form_field_popup_pane_vc_t1

0x47c3,	// (0x00020f83) input_focus_pane_cp7_vc_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_cp7_vc

0xa12c,	// (0x000268ec) list_form_pane_vc_ParamLimits

0xa12c,	// (0x000268ec) list_form_pane_vc

0xa138,	// (0x000268f8) data_form_pane_vc_t1_ParamLimits

0xa138,	// (0x000268f8) data_form_pane_vc_t1

0x481e,	// (0x00020fde) input_focus_pane_vc_g1

0x4826,	// (0x00020fe6) input_focus_pane_vc_g2

0x482e,	// (0x00020fee) input_focus_pane_vc_g3

0x4836,	// (0x00020ff6) input_focus_pane_vc_g4

0x483e,	// (0x00020ffe) input_focus_pane_vc_g5

0x4846,	// (0x00021006) input_focus_pane_vc_g6

0x484e,	// (0x0002100e) input_focus_pane_vc_g7

0x4856,	// (0x00021016) input_focus_pane_vc_g8

0x485e,	// (0x0002101e) input_focus_pane_vc_g9

0x413d,	// (0x000208fd) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0002be68) input_focus_pane_vc_g

0x5977,	// (0x00022137) data_form_pane_vc_ParamLimits

0x5977,	// (0x00022137) data_form_pane_vc

0x5983,	// (0x00022143) form_field_data_pane_vc_g1

0xa153,	// (0x00026913) form_field_data_pane_vc_t1_ParamLimits

0xa153,	// (0x00026913) form_field_data_pane_vc_t1

0x47c3,	// (0x00020f83) input_focus_pane_vc_ParamLimits

0x47c3,	// (0x00020f83) input_focus_pane_vc

0x4b1e,	// (0x000212de) button_value_adjust_pane_cp3_vc

0x944d,	// (0x00025c0d) button_value_adjust_pane_cp5_vc

0xa169,	// (0x00026929) form_field_data_pane_vc_ParamLimits

0xa169,	// (0x00026929) form_field_data_pane_vc

0x4b26,	// (0x000212e6) form_field_data_pane_vc_cp2

0xa180,	// (0x00026940) form_field_data_wide_pane_vc_ParamLimits

0xa180,	// (0x00026940) form_field_data_wide_pane_vc

0xa196,	// (0x00026956) form_field_data_wide_pane_vc_cp2

0xa19e,	// (0x0002695e) form_field_popup_pane_vc_ParamLimits

0xa19e,	// (0x0002695e) form_field_popup_pane_vc

0xa1b5,	// (0x00026975) form_field_popup_wide_pane_vc_ParamLimits

0xa1b5,	// (0x00026975) form_field_popup_wide_pane_vc

0xa1cb,	// (0x0002698b) form_field_slider_pane_vc_ParamLimits

0xa1cb,	// (0x0002698b) form_field_slider_pane_vc

0xa1de,	// (0x0002699e) form_field_slider_wide_pane_vc_ParamLimits

0xa1de,	// (0x0002699e) form_field_slider_wide_pane_vc

0x288d,	// (0x0001f04d) grid_touch_1_pane_ParamLimits

0x288d,	// (0x0001f04d) grid_touch_1_pane

0x28a1,	// (0x0001f061) grid_touch_2_pane_ParamLimits

0x28a1,	// (0x0001f061) grid_touch_2_pane

0xa256,	// (0x00026a16) touch_pane_g1_ParamLimits

0xa256,	// (0x00026a16) touch_pane_g1

0xa1f1,	// (0x000269b1) cell_app_pane_cp_wide_ParamLimits

0xa1f1,	// (0x000269b1) cell_app_pane_cp_wide

0xa201,	// (0x000269c1) grid_popup_fast_wide_pane_ParamLimits

0xa201,	// (0x000269c1) grid_popup_fast_wide_pane

0xa215,	// (0x000269d5) scroll_pane_cp19_ParamLimits

0xa215,	// (0x000269d5) scroll_pane_cp19

0x41bf,	// (0x0002097f) bg_popup_window_pane_cp20

0xa229,	// (0x000269e9) listscroll_popup_fast_wide_pane

0x4b2e,	// (0x000212ee) grid_indicator_nsta_pane

0xa231,	// (0x000269f1) clock_nsta_pane_g1

0xa23a,	// (0x000269fa) clock_nsta_pane_t1

0x28cb,	// (0x0001f08b) cell_indicator_nsta_pane_ParamLimits

0x28cb,	// (0x0001f08b) cell_indicator_nsta_pane

0xa256,	// (0x00026a16) cell_indicator_nsta_pane_g1

0x28e8,	// (0x0001f0a8) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0002c26b) cell_indicator_nsta_pane_g

0xa264,	// (0x00026a24) clock_nsta_pane_cp

0xa26c,	// (0x00026a2c) indicator_nsta_pane_cp

0xa275,	// (0x00026a35) nsta_clock_indic_pane_g1

0x428b,	// (0x00020a4b) grid_indicator_pane

0x4e33,	// (0x000215f3) scroll_pane_cp29

0x7814,	// (0x00023fd4) indicator_nsta_pane_cp2_ParamLimits

0x7814,	// (0x00023fd4) indicator_nsta_pane_cp2

0x4223,	// (0x000209e3) main_apps_wheel_pane

0x5a97,	// (0x00022257) form_midp_field_text_pane_ParamLimits

0x5bc4,	// (0x00022384) scroll_bar_cp050_ParamLimits

0xa2de,	// (0x00026a9e) cell_indicator_pane_ParamLimits

0xa2de,	// (0x00026a9e) cell_indicator_pane

0xa2f4,	// (0x00026ab4) cell_indicator_pane_g1

0x28fd,	// (0x0001f0bd) grid_wheel_folder_pane_ParamLimits

0x28fd,	// (0x0001f0bd) grid_wheel_folder_pane

0x290b,	// (0x0001f0cb) list_wheel_apps_pane_ParamLimits

0x290b,	// (0x0001f0cb) list_wheel_apps_pane

0x2917,	// (0x0001f0d7) main_apps_wheel_pane_g1_ParamLimits

0x2917,	// (0x0001f0d7) main_apps_wheel_pane_g1

0x2923,	// (0x0001f0e3) main_apps_wheel_pane_g2_ParamLimits

0x2923,	// (0x0001f0e3) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0002c287) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0002c287) main_apps_wheel_pane_g

0x292f,	// (0x0001f0ef) main_apps_wheel_pane_t1_ParamLimits

0x292f,	// (0x0001f0ef) main_apps_wheel_pane_t1

0x2941,	// (0x0001f101) list_wheel_apps_pane_g1

0x2949,	// (0x0001f109) list_wheel_apps_pane_g2

0x2951,	// (0x0001f111) list_wheel_apps_pane_g3

0x2959,	// (0x0001f119) list_wheel_apps_pane_g4

0x2961,	// (0x0001f121) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0002c28c) list_wheel_apps_pane_g

0x4223,	// (0x000209e3) navi_icon_text_pane

0x1ded,	// (0x0001e5ad) aid_fill_nsta

0xa2fe,	// (0x00026abe) navi_icon_text_pane_g1

0xa30a,	// (0x00026aca) navi_icon_text_pane_t1

0x50a8,	// (0x00021868) list_set_graphic_pane_t1_ParamLimits

0x50a8,	// (0x00021868) list_set_graphic_pane_t1

0x629e,	// (0x00022a5e) popup_midp_note_alarm_window_t6_ParamLimits

0x629e,	// (0x00022a5e) popup_midp_note_alarm_window_t6

0x62b0,	// (0x00022a70) popup_midp_note_alarm_window_t7_ParamLimits

0x62b0,	// (0x00022a70) popup_midp_note_alarm_window_t7

0x62c2,	// (0x00022a82) popup_midp_note_alarm_window_t8_ParamLimits

0x62c2,	// (0x00022a82) popup_midp_note_alarm_window_t8

0x62d4,	// (0x00022a94) popup_midp_note_alarm_window_t9_ParamLimits

0x62d4,	// (0x00022a94) popup_midp_note_alarm_window_t9

0x62e6,	// (0x00022aa6) popup_midp_note_alarm_window_t10_ParamLimits

0x62e6,	// (0x00022aa6) popup_midp_note_alarm_window_t10

0x62f8,	// (0x00022ab8) popup_midp_note_alarm_window_t11_ParamLimits

0x62f8,	// (0x00022ab8) popup_midp_note_alarm_window_t11

0x630a,	// (0x00022aca) scroll_pane_cp17_ParamLimits

0x630a,	// (0x00022aca) scroll_pane_cp17

0x84cc,	// (0x00024c8c) volume_small_pane_cp_g1

0x8804,	// (0x00024fc4) volume_small_pane_cp_g2

0x880d,	// (0x00024fcd) volume_small_pane_cp_g3

0x8816,	// (0x00024fd6) volume_small_pane_cp_g4

0x84f9,	// (0x00024cb9) volume_small_pane_cp_g5

0x881f,	// (0x00024fdf) volume_small_pane_cp_g6

0x8828,	// (0x00024fe8) volume_small_pane_cp_g7

0x8831,	// (0x00024ff1) volume_small_pane_cp_g8

0x883a,	// (0x00024ffa) volume_small_pane_cp_g9

0x8843,	// (0x00025003) volume_small_pane_cp_g10

0x5357,	// (0x00021b17) midp_ticker_pane_g1_ParamLimits

0x5363,	// (0x00021b23) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002bf30) midp_ticker_pane_g_ParamLimits

0x536f,	// (0x00021b2f) midp_ticker_pane_t1_ParamLimits

0x1e03,	// (0x0001e5c3) aid_fill_nsta_2

0x5bb0,	// (0x00022370) list_form2_midp_pane

0x9a5f,	// (0x0002621f) midp_editing_number_pane_ParamLimits

0x9a6b,	// (0x0002622b) midp_ticker_pane_ParamLimits

0xa31c,	// (0x00026adc) form2_midp_field_pane

0xa324,	// (0x00026ae4) scroll_pane_cp51

0xa344,	// (0x00026b04) form2_midp_button_pane_ParamLimits

0xa344,	// (0x00026b04) form2_midp_button_pane

0xa356,	// (0x00026b16) form2_midp_content_pane_ParamLimits

0xa356,	// (0x00026b16) form2_midp_content_pane

0xa370,	// (0x00026b30) form2_midp_field_choice_group_pane

0xa378,	// (0x00026b38) form2_midp_field_pane_g1

0xa380,	// (0x00026b40) form2_midp_field_pane_g2

0xa388,	// (0x00026b48) form2_midp_field_pane_g3

0xa390,	// (0x00026b50) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0002c2b1) form2_midp_field_pane_g

0xa398,	// (0x00026b58) form2_midp_gauge_slider_pane

0xa3a0,	// (0x00026b60) form2_midp_gauge_wait_pane

0xa3a8,	// (0x00026b68) form2_midp_image_pane_ParamLimits

0xa3a8,	// (0x00026b68) form2_midp_image_pane

0xa3c3,	// (0x00026b83) form2_midp_label_pane_ParamLimits

0xa3c3,	// (0x00026b83) form2_midp_label_pane

0x2996,	// (0x0001f156) form2_midp_label_pane_cp_ParamLimits

0x2996,	// (0x0001f156) form2_midp_label_pane_cp

0xa3dc,	// (0x00026b9c) form2_midp_string_pane_ParamLimits

0xa3dc,	// (0x00026b9c) form2_midp_string_pane

0x0c65,	// (0x0001d425) form2_midp_text_pane_ParamLimits

0x0c65,	// (0x0001d425) form2_midp_text_pane

0xa3ee,	// (0x00026bae) form2_midp_time_pane

0xa3fe,	// (0x00026bbe) input_focus_pane_cp51_ParamLimits

0xa3fe,	// (0x00026bbe) input_focus_pane_cp51

0xa416,	// (0x00026bd6) form2_midp_label_pane_t1_ParamLimits

0xa416,	// (0x00026bd6) form2_midp_label_pane_t1

0x0c7e,	// (0x0001d43e) form2_mdip_text_pane_t1_ParamLimits

0x0c7e,	// (0x0001d43e) form2_mdip_text_pane_t1

0xbad3,	// (0x00028293) form2_midp_time_pane_t1

0xa45e,	// (0x00026c1e) form2_midp_gauge_slider_pane_t1

0x29b5,	// (0x0001f175) form2_midp_gauge_slider_pane_t2

0x29c7,	// (0x0001f187) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0002c2ba) form2_midp_gauge_slider_pane_t

0xa470,	// (0x00026c30) form2_midp_slider_pane

0xa47c,	// (0x00026c3c) form2_midp_gauge_wait_pane_t1

0xa48a,	// (0x00026c4a) form2_midp_wait_pane_ParamLimits

0xa48a,	// (0x00026c4a) form2_midp_wait_pane

0x2235,	// (0x0001e9f5) list_single_2graphic_pane_cp4_ParamLimits

0x2235,	// (0x0001e9f5) list_single_2graphic_pane_cp4

0x29d9,	// (0x0001f199) list_single_midp_graphic_pane_cp_ParamLimits

0x29d9,	// (0x0001f199) list_single_midp_graphic_pane_cp

0x41bf,	// (0x0002097f) list_highlight_pane_cp20

0xa4b5,	// (0x00026c75) list_single_2graphic_pane_g1_cp4

0x9ae0,	// (0x000262a0) list_single_2graphic_pane_g2_cp4

0xa4bd,	// (0x00026c7d) list_single_2graphic_pane_t1_cp4

0x4223,	// (0x000209e3) list_highlight_pane_cp21

0xa4cc,	// (0x00026c8c) list_single_midp_graphic_pane_g4_cp

0xa4db,	// (0x00026c9b) list_single_midp_graphic_pane_t1_cp

0x29f7,	// (0x0001f1b7) form2_mdip_string_pane_t1_ParamLimits

0x29f7,	// (0x0001f1b7) form2_mdip_string_pane_t1

0x41bf,	// (0x0002097f) bg_wml_button_pane_cp2

0x413d,	// (0x000208fd) form2_midp_image_pane_g1

0xb265,	// (0x00027a25) list_double_large_graphic_pane_g5_ParamLimits

0xb265,	// (0x00027a25) list_double_large_graphic_pane_g5

0x1643,	// (0x0001de03) midp_form_pane_ParamLimits

0x4223,	// (0x000209e3) main_apps_wheel_pane_ParamLimits

0x1b8f,	// (0x0001e34f) popup_preview_window_ParamLimits

0x1b8f,	// (0x0001e34f) popup_preview_window

0x5647,	// (0x00021e07) popup_touch_info_window_ParamLimits

0x5647,	// (0x00021e07) popup_touch_info_window

0x5665,	// (0x00021e25) popup_touch_menu_window_ParamLimits

0x5665,	// (0x00021e25) popup_touch_menu_window

0x4133,	// (0x000208f3) bg_popup_sub_pane_cp6

0xa4f0,	// (0x00026cb0) list_touch_menu_pane

0xa4f8,	// (0x00026cb8) list_single_touch_menu_pane_ParamLimits

0xa4f8,	// (0x00026cb8) list_single_touch_menu_pane

0xa50f,	// (0x00026ccf) list_single_touch_menu_pane_t1

0x4223,	// (0x000209e3) bg_popup_sub_pane_cp7_ParamLimits

0x4223,	// (0x000209e3) bg_popup_sub_pane_cp7

0xa51d,	// (0x00026cdd) heading_sub_pane

0xa525,	// (0x00026ce5) list_touch_info_pane_ParamLimits

0xa525,	// (0x00026ce5) list_touch_info_pane

0xa534,	// (0x00026cf4) list_single_touch_info_pane_ParamLimits

0xa534,	// (0x00026cf4) list_single_touch_info_pane

0xa545,	// (0x00026d05) list_single_touch_info_pane_t1

0xa553,	// (0x00026d13) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0002c2c8) list_single_touch_info_pane_t

0x532d,	// (0x00021aed) bg_popup_heading_pane_cp

0xa561,	// (0x00026d21) heading_sub_pane_t1

0x593d,	// (0x000220fd) bg_popup_preview_window_pane_cp_ParamLimits

0x593d,	// (0x000220fd) bg_popup_preview_window_pane_cp

0xa51d,	// (0x00026cdd) heading_preview_pane

0xa525,	// (0x00026ce5) list_preview_pane_ParamLimits

0xa525,	// (0x00026ce5) list_preview_pane

0xa56f,	// (0x00026d2f) popup_preview_window_g1

0xa534,	// (0x00026cf4) list_single_preview_pane_ParamLimits

0xa534,	// (0x00026cf4) list_single_preview_pane

0xa577,	// (0x00026d37) list_single_preview_pane_g1

0xa57f,	// (0x00026d3f) list_single_preview_pane_t1

0xa545,	// (0x00026d05) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0002c2cd) list_single_preview_pane_t

0xa58d,	// (0x00026d4d) bg_popup_heading_pane_cp2_ParamLimits

0xa58d,	// (0x00026d4d) bg_popup_heading_pane_cp2

0xa5a3,	// (0x00026d63) heading_preview_pane_g1

0xa5ab,	// (0x00026d6b) heading_preview_pane_t1_ParamLimits

0xa5ab,	// (0x00026d6b) heading_preview_pane_t1

0x42a2,	// (0x00020a62) soft_indicator_pane_t1_ParamLimits

0x4746,	// (0x00020f06) scroll_pane_ParamLimits

0x4d38,	// (0x000214f8) scroll_sc2_left_pane

0x4d2f,	// (0x000214ef) scroll_sc2_right_pane

0x4d57,	// (0x00021517) scroll_bg_pane_g1_ParamLimits

0x4d6c,	// (0x0002152c) scroll_bg_pane_g2_ParamLimits

0x4d84,	// (0x00021544) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002bebf) scroll_bg_pane_g_ParamLimits

0x4d57,	// (0x00021517) scroll_handle_pane_g1_ParamLimits

0x4da6,	// (0x00021566) scroll_handle_pane_g2_ParamLimits

0x4d84,	// (0x00021544) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002bec6) scroll_handle_pane_g_ParamLimits

0x559f,	// (0x00021d5f) popup_choice_list_window_ParamLimits

0x559f,	// (0x00021d5f) popup_choice_list_window

0x5799,	// (0x00021f59) choice_list_pane

0x580f,	// (0x00021fcf) cell_toolbar_pane_t1

0x5837,	// (0x00021ff7) toolbar_button_pane_ParamLimits

0x97c0,	// (0x00025f80) ai_gene_pane_1_t2_ParamLimits

0x97c0,	// (0x00025f80) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0002c0d7) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0002c0d7) ai_gene_pane_1_t

0xa5c8,	// (0x00026d88) scroll_sc2_left_pane_g1

0xa5c8,	// (0x00026d88) scroll_sc2_right_pane_g1

0x4cd5,	// (0x00021495) bg_popup_sub_pane_cp10

0xa5d2,	// (0x00026d92) list_choice_list_pane

0xa5e9,	// (0x00026da9) list_single_choice_list_pane_ParamLimits

0xa5e9,	// (0x00026da9) list_single_choice_list_pane

0xa5fd,	// (0x00026dbd) list_single_choice_list_pane_g1

0x4936,	// (0x000210f6) list_single_choice_list_pane_t1_ParamLimits

0x4936,	// (0x000210f6) list_single_choice_list_pane_t1

0xa605,	// (0x00026dc5) choice_list_pane_g1

0xa60d,	// (0x00026dcd) choice_list_pane_t1

0x4133,	// (0x000208f3) input_focus_pane_cp11

0x4ac1,	// (0x00021281) title_pane_stacon_g2_ParamLimits

0x4ac1,	// (0x00021281) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002bea5) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002bea5) title_pane_stacon_g

0x532d,	// (0x00021aed) cursor_press_pane

0x18f6,	// (0x0001e0b6) popup_fep_hwr_window_ParamLimits

0x18f6,	// (0x0001e0b6) popup_fep_hwr_window

0x55f1,	// (0x00021db1) popup_fep_vkb_window_ParamLimits

0x55f1,	// (0x00021db1) popup_fep_vkb_window

0xa61b,	// (0x00026ddb) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0002c2f6) fep_vkb_side_pane_g_ParamLimits

0x8881,	// (0x00025041) fep_hwr_candidate_pane_ParamLimits

0x8881,	// (0x00025041) fep_hwr_candidate_pane

0x88a9,	// (0x00025069) fep_hwr_side_pane_ParamLimits

0x88a9,	// (0x00025069) fep_hwr_side_pane

0x88c9,	// (0x00025089) fep_hwr_top_pane_ParamLimits

0x88c9,	// (0x00025089) fep_hwr_top_pane

0x88e1,	// (0x000250a1) fep_hwr_write_pane_ParamLimits

0x88e1,	// (0x000250a1) fep_hwr_write_pane

0xfb36,	// (0x0002c2f6) fep_vkb_side_pane_g

0xa623,	// (0x00026de3) fep_hwr_top_pane_g1

0xa635,	// (0x00026df5) fep_hwr_top_pane_g2

0x891b,	// (0x000250db) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0002c2d2) fep_hwr_top_pane_g

0x8930,	// (0x000250f0) fep_hwr_top_text_pane

0x4ea0,	// (0x00021660) fep_hwr_top_text_pane_g1

0xa66b,	// (0x00026e2b) fep_hwr_top_text_pane_t1

0x8a1e,	// (0x000251de) fep_hwr_candidate_pane_g1

0xa834,	// (0x00026ff4) fep_vkb_keypad_pane_g3_ParamLimits

0xa834,	// (0x00026ff4) fep_vkb_keypad_pane_g3

0xa856,	// (0x00027016) fep_vkb_keypad_pane_g4_ParamLimits

0xa856,	// (0x00027016) fep_vkb_keypad_pane_g4

0xa8c5,	// (0x00027085) fep_vkb_bottom_pane_g2_ParamLimits

0xa8c5,	// (0x00027085) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0002c2fd) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0002c2fd) fep_vkb_bottom_pane_g

0xa5c8,	// (0x00026d88) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0002c307) cell_vkb_side_pane_g

0xa909,	// (0x000270c9) cell_vkb_side_pane_t1

0xa917,	// (0x000270d7) cell_vkb_side_pane_t1_copy1

0xa5c8,	// (0x00026d88) bg_fep_vkb_candidate_pane_g2

0xa9e5,	// (0x000271a5) cell_vkb_candidate_pane_ParamLimits

0xa679,	// (0x00026e39) aid_size_cell_vkb_ParamLimits

0xa679,	// (0x00026e39) aid_size_cell_vkb

0xa9e5,	// (0x000271a5) cell_vkb_candidate_pane

0x8a45,	// (0x00025205) bg_popup_fep_shadow_pane_g1

0xa6e3,	// (0x00026ea3) fep_vkb_bottom_pane_ParamLimits

0xa6e3,	// (0x00026ea3) fep_vkb_bottom_pane

0xa720,	// (0x00026ee0) fep_vkb_candidate_pane_ParamLimits

0xa720,	// (0x00026ee0) fep_vkb_candidate_pane

0xa73c,	// (0x00026efc) fep_vkb_keypad_pane_ParamLimits

0xa73c,	// (0x00026efc) fep_vkb_keypad_pane

0xa770,	// (0x00026f30) fep_vkb_side_pane_ParamLimits

0xa770,	// (0x00026f30) fep_vkb_side_pane

0xa79c,	// (0x00026f5c) fep_vkb_top_pane_ParamLimits

0xa79c,	// (0x00026f5c) fep_vkb_top_pane

0xa7c8,	// (0x00026f88) fep_vkb_top_pane_g1_ParamLimits

0xa7c8,	// (0x00026f88) fep_vkb_top_pane_g1

0xa7d7,	// (0x00026f97) fep_vkb_top_pane_g2_ParamLimits

0xa7d7,	// (0x00026f97) fep_vkb_top_pane_g2

0xa7e6,	// (0x00026fa6) fep_vkb_top_pane_g3_ParamLimits

0xa7e6,	// (0x00026fa6) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0002c2ed) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0002c2ed) fep_vkb_top_pane_g

0xa804,	// (0x00026fc4) fep_vkb_top_text_pane_ParamLimits

0xa804,	// (0x00026fc4) fep_vkb_top_text_pane

0x2abe,	// (0x0001f27e) fep_vkb_side_pane_g1_ParamLimits

0x2abe,	// (0x0001f27e) fep_vkb_side_pane_g1

0xa823,	// (0x00026fe3) grid_vkb_side_pane_ParamLimits

0xa823,	// (0x00026fe3) grid_vkb_side_pane

0x8a4d,	// (0x0002520d) bg_popup_fep_shadow_pane_g2

0x8a56,	// (0x00025216) bg_popup_fep_shadow_pane_g3

0x8a5e,	// (0x0002521e) bg_popup_fep_shadow_pane_g4

0x8a67,	// (0x00025227) bg_popup_fep_shadow_pane_g5

0x8a6f,	// (0x0002522f) bg_popup_fep_shadow_pane_g6

0x8a77,	// (0x00025237) bg_popup_fep_shadow_pane_g7

0x4836,	// (0x00020ff6) bg_popup_fep_shadow_pane_g8

0xa874,	// (0x00027034) grid_vkb_keypad_number_pane_ParamLimits

0xa874,	// (0x00027034) grid_vkb_keypad_number_pane

0xa884,	// (0x00027044) grid_vkb_keypad_pane_ParamLimits

0xa884,	// (0x00027044) grid_vkb_keypad_pane

0xa8aa,	// (0x0002706a) fep_vkb_bottom_pane_g1_ParamLimits

0xa8aa,	// (0x0002706a) fep_vkb_bottom_pane_g1

0xa8d3,	// (0x00027093) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xa8d3,	// (0x00027093) grid_vkb_keypad_bottom_left_pane

0xa8e8,	// (0x000270a8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xa8e8,	// (0x000270a8) grid_vkb_keypad_bottom_right_pane

0xa8fd,	// (0x000270bd) fep_vkb_top_text_pane_g1

0x2b05,	// (0x0001f2c5) fep_vkb_top_text_pane_t1

0x2b17,	// (0x0001f2d7) cell_vkb_side_pane_ParamLimits

0x2b17,	// (0x0001f2d7) cell_vkb_side_pane

0xa5c8,	// (0x00026d88) cell_vkb_side_pane_g1

0xa925,	// (0x000270e5) cell_vkb_keypad_pane_ParamLimits

0xa925,	// (0x000270e5) cell_vkb_keypad_pane

0xa992,	// (0x00027152) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0002c31a) bg_popup_fep_shadow_pane_g

0x8a87,	// (0x00025247) cell_hwr_side_pane_g1

0x8a87,	// (0x00025247) cell_hwr_side_pane_g2

0xa99c,	// (0x0002715c) cell_vkb_keypad_pane_t1

0x2b2d,	// (0x0001f2ed) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2b2d,	// (0x0001f2ed) cell_vkb_keypad_bottom_left_pane

0x2b42,	// (0x0001f302) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2b42,	// (0x0001f302) cell_vkb_keypad_bottom_right_pane

0xa5c8,	// (0x00026d88) cell_vkb_keypad_bottom_left_pane_g1

0xa5c8,	// (0x00026d88) cell_vkb_keypad_bottom_right_pane_g1

0xa9aa,	// (0x0002716a) cell_vkb_keypad_number_pane_ParamLimits

0xa9aa,	// (0x0002716a) cell_vkb_keypad_number_pane

0xa9c9,	// (0x00027189) cell_vkb_keypad_number_pane_g1

0xa9d3,	// (0x00027193) cell_vkb_keypad_number_pane_g2

0xa9dc,	// (0x0002719c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0002c30c) cell_vkb_keypad_number_pane_g

0xa99c,	// (0x0002715c) cell_vkb_keypad_number_pane_t1

0xa9fe,	// (0x000271be) fep_vkb_candidate_pane_g1

0x0001,

0xfb6d,	// (0x0002c32d) cell_hwr_side_pane_g

0xaa17,	// (0x000271d7) cell_hwr_side_pane_t1

0x8a91,	// (0x00025251) cell_hwr_side_pane_t1_copy1

0x8a9f,	// (0x0002525f) cell_hwr_candidate_pane_g1

0x8ace,	// (0x0002528e) cell_hwr_candidate_pane_t1

0xa5c8,	// (0x00026d88) cell_vkb_candidate_pane_g2

0xaa5b,	// (0x0002721b) cell_vkb_candidate_pane_t1

0x884c,	// (0x0002500c) bg_popup_fep_shadow_pane_ParamLimits

0x884c,	// (0x0002500c) bg_popup_fep_shadow_pane

0x88fb,	// (0x000250bb) bg_fep_hwr_top_pane_g4

0xa647,	// (0x00026e07) bg_hwr_side_pane_g1_ParamLimits

0xa647,	// (0x00026e07) bg_hwr_side_pane_g1

0xe59a,	// (0x0002ad5a) cell_hwr_side_pane_ParamLimits

0xe59a,	// (0x0002ad5a) cell_hwr_side_pane

0x89a7,	// (0x00025167) fep_hwr_write_pane_g1_ParamLimits

0x89a7,	// (0x00025167) fep_hwr_write_pane_g1

0x89b4,	// (0x00025174) fep_hwr_write_pane_g2_ParamLimits

0x89b4,	// (0x00025174) fep_hwr_write_pane_g2

0x89c1,	// (0x00025181) fep_hwr_write_pane_g3_ParamLimits

0x89c1,	// (0x00025181) fep_hwr_write_pane_g3

0xe5ba,	// (0x0002ad7a) fep_hwr_write_pane_g4_ParamLimits

0xe5ba,	// (0x0002ad7a) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0002c2d9) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0002c2d9) fep_hwr_write_pane_g

0x88fb,	// (0x000250bb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x88fb,	// (0x000250bb) bg_fep_hwr_candidate_pane_g2

0x89e4,	// (0x000251a4) cell_hwr_candidate_pane_ParamLimits

0x89e4,	// (0x000251a4) cell_hwr_candidate_pane

0x8a1e,	// (0x000251de) fep_hwr_candidate_pane_g1_ParamLimits

0xa6a7,	// (0x00026e67) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xa6a7,	// (0x00026e67) bg_popup_fep_shadow_pane_cp2

0xa7f6,	// (0x00026fb6) fep_vkb_top_pane_g4_ParamLimits

0xa7f6,	// (0x00026fb6) fep_vkb_top_pane_g4

0xa815,	// (0x00026fd5) fep_vkb_side_pane_g2_ParamLimits

0xa815,	// (0x00026fd5) fep_vkb_side_pane_g2

0x0973,	// (0x0001d133) list_setting_pane_t4_ParamLimits

0x0973,	// (0x0001d133) list_setting_pane_t4

0x0a05,	// (0x0001d1c5) list_setting_number_pane_t5_ParamLimits

0x0a05,	// (0x0001d1c5) list_setting_number_pane_t5

0x1583,	// (0x0001dd43) list_double_heading_pane_cp2_ParamLimits

0x1583,	// (0x0001dd43) list_double_heading_pane_cp2

0x51a2,	// (0x00021962) list_double_heading_pane_g1_cp2_ParamLimits

0x51a2,	// (0x00021962) list_double_heading_pane_g1_cp2

0xaa69,	// (0x00027229) list_double_heading_pane_g2_cp2_ParamLimits

0xaa69,	// (0x00027229) list_double_heading_pane_g2_cp2

0xaa7d,	// (0x0002723d) list_double_heading_pane_t1_cp2_ParamLimits

0xaa7d,	// (0x0002723d) list_double_heading_pane_t1_cp2

0xaa93,	// (0x00027253) list_double_heading_pane_t2_cp2_ParamLimits

0xaa93,	// (0x00027253) list_double_heading_pane_t2_cp2

0x412b,	// (0x000208eb) aid_value_unit2

0x6fa0,	// (0x00023760) popup_preview_fixed_window

0x4382,	// (0x00020b42) bg_popup_preview_window_pane_cp02

0xaaa5,	// (0x00027265) list_preview_fixed_pane

0xaaeb,	// (0x000272ab) list_empty_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_empty_pane_fp

0xaaeb,	// (0x000272ab) list_single_cale_day_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_single_cale_day_pane_fp

0xaaeb,	// (0x000272ab) list_single_graphic_heading_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_single_graphic_heading_pane_fp

0xaaeb,	// (0x000272ab) list_single_graphic_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_single_graphic_pane_fp

0xaaeb,	// (0x000272ab) list_single_heading_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_single_heading_pane_fp

0xaaeb,	// (0x000272ab) list_single_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_single_pane_fp

0xaaff,	// (0x000272bf) list_single_pane_fp_g1_ParamLimits

0xaaff,	// (0x000272bf) list_single_pane_fp_g1

0xb386,	// (0x00027b46) list_single_pane_fp_g2_ParamLimits

0xb386,	// (0x00027b46) list_single_pane_fp_g2

0xbae6,	// (0x000282a6) list_single_pane_fp_g3_ParamLimits

0xbae6,	// (0x000282a6) list_single_pane_fp_g3

0xab0b,	// (0x000272cb) list_single_pane_fp_g4_ParamLimits

0xab0b,	// (0x000272cb) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0002c340) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0002c340) list_single_pane_fp_g

0xbafa,	// (0x000282ba) list_single_pane_fp_t1_ParamLimits

0xbafa,	// (0x000282ba) list_single_pane_fp_t1

0xbb11,	// (0x000282d1) list_single_graphic_pane_fp_g1_ParamLimits

0xbb11,	// (0x000282d1) list_single_graphic_pane_fp_g1

0xaaff,	// (0x000272bf) list_single_graphic_pane_fp_g2_ParamLimits

0xaaff,	// (0x000272bf) list_single_graphic_pane_fp_g2

0xb386,	// (0x00027b46) list_single_graphic_pane_fp_g3_ParamLimits

0xb386,	// (0x00027b46) list_single_graphic_pane_fp_g3

0xbae6,	// (0x000282a6) list_single_graphic_pane_fp_g4_ParamLimits

0xbae6,	// (0x000282a6) list_single_graphic_pane_fp_g4

0xab0b,	// (0x000272cb) list_single_graphic_pane_fp_g5_ParamLimits

0xab0b,	// (0x000272cb) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0002c349) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0002c349) list_single_graphic_pane_fp_g

0xbb1d,	// (0x000282dd) list_single_graphic_pane_fp_t1_ParamLimits

0xbb1d,	// (0x000282dd) list_single_graphic_pane_fp_t1

0xbb11,	// (0x000282d1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbb11,	// (0x000282d1) list_single_graphic_heading_pane_fp_g1

0xaaff,	// (0x000272bf) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xaaff,	// (0x000272bf) list_single_graphic_heading_pane_fp_g2

0xb386,	// (0x00027b46) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb386,	// (0x00027b46) list_single_graphic_heading_pane_fp_g3

0xbae6,	// (0x000282a6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbae6,	// (0x000282a6) list_single_graphic_heading_pane_fp_g4

0xab0b,	// (0x000272cb) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xab0b,	// (0x000272cb) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002c349) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002c349) list_single_graphic_heading_pane_fp_g

0xbb33,	// (0x000282f3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbb33,	// (0x000282f3) list_single_graphic_heading_pane_fp_t1

0xbb49,	// (0x00028309) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbb49,	// (0x00028309) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0002c354) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0002c354) list_single_graphic_heading_pane_fp_t

0xbb5b,	// (0x0002831b) list_single_cale_day_pane_fp_g1_ParamLimits

0xbb5b,	// (0x0002831b) list_single_cale_day_pane_fp_g1

0xab17,	// (0x000272d7) list_single_cale_day_pane_fp_g2_ParamLimits

0xab17,	// (0x000272d7) list_single_cale_day_pane_fp_g2

0xbb93,	// (0x00028353) list_single_cale_day_pane_fp_g3_ParamLimits

0xbb93,	// (0x00028353) list_single_cale_day_pane_fp_g3

0xbbbb,	// (0x0002837b) list_single_cale_day_pane_fp_g4_ParamLimits

0xbbbb,	// (0x0002837b) list_single_cale_day_pane_fp_g4

0xbbdf,	// (0x0002839f) list_single_cale_day_pane_fp_g5_ParamLimits

0xbbdf,	// (0x0002839f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0002c359) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0002c359) list_single_cale_day_pane_fp_g

0xbc03,	// (0x000283c3) list_single_cale_day_pane_fp_t1_ParamLimits

0xbc03,	// (0x000283c3) list_single_cale_day_pane_fp_t1

0xbc29,	// (0x000283e9) list_single_cale_day_pane_fp_t2_ParamLimits

0xbc29,	// (0x000283e9) list_single_cale_day_pane_fp_t2

0xbc42,	// (0x00028402) list_single_cale_day_pane_fp_t3_ParamLimits

0xbc42,	// (0x00028402) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0002c364) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0002c364) list_single_cale_day_pane_fp_t

0xaaff,	// (0x000272bf) list_empty_pane_fp_g1_ParamLimits

0xaaff,	// (0x000272bf) list_empty_pane_fp_g1

0xc545,	// (0x00028d05) list_empty_pane_fp_t1

0xc553,	// (0x00028d13) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0002c36b) list_empty_pane_fp_t

0xaaff,	// (0x000272bf) list_single_heading_pane_fp_g1_ParamLimits

0xaaff,	// (0x000272bf) list_single_heading_pane_fp_g1

0xb386,	// (0x00027b46) list_single_heading_pane_fp_g2_ParamLimits

0xb386,	// (0x00027b46) list_single_heading_pane_fp_g2

0xbae6,	// (0x000282a6) list_single_heading_pane_fp_g3_ParamLimits

0xbae6,	// (0x000282a6) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0002c370) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0002c370) list_single_heading_pane_fp_g

0xc561,	// (0x00028d21) list_single_heading_pane_fp_t1_ParamLimits

0xc561,	// (0x00028d21) list_single_heading_pane_fp_t1

0xc573,	// (0x00028d33) list_single_heading_pane_fp_t2_ParamLimits

0xc573,	// (0x00028d33) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0002c377) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0002c377) list_single_heading_pane_fp_t

0x494b,	// (0x0002110b) aid_size_cell_fast

0x4365,	// (0x00020b25) soft_indicator_pane_cp1_t1

0x4988,	// (0x00021148) cell_app_pane_cp2_ParamLimits

0x4988,	// (0x00021148) cell_app_pane_cp2

0x886e,	// (0x0002502e) fep_hwr_candidate_drop_down_list_pane

0x8a38,	// (0x000251f8) fep_hwr_candidate_pane_g3_ParamLimits

0x8a38,	// (0x000251f8) fep_hwr_candidate_pane_g3

0x3b3f,	// (0x000202ff) fep_hwr_candidate_pane_g4_ParamLimits

0x3b3f,	// (0x000202ff) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002c2e6) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0002c2e6) fep_hwr_candidate_pane_g

0xa70f,	// (0x00026ecf) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xa70f,	// (0x00026ecf) fep_vkb_candidate_drop_down_list_pane

0xaa06,	// (0x000271c6) fep_vkb_candidate_pane_g3

0xaa0e,	// (0x000271ce) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0002c313) fep_vkb_candidate_pane_g

0x8a9f,	// (0x0002525f) cell_hwr_candidate_pane_g1_ParamLimits

0x8aad,	// (0x0002526d) cell_hwr_candidate_pane_g3_ParamLimits

0x8aad,	// (0x0002526d) cell_hwr_candidate_pane_g3

0xe5cf,	// (0x0002ad8f) cell_hwr_candidate_pane_g4_ParamLimits

0xe5cf,	// (0x0002ad8f) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0002c332) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0002c332) cell_hwr_candidate_pane_g

0xaa25,	// (0x000271e5) cell_vkb_candidate_pane_g3_ParamLimits

0xaa25,	// (0x000271e5) cell_vkb_candidate_pane_g3

0xaa40,	// (0x00027200) cell_vkb_candidate_pane_g4_ParamLimits

0xaa40,	// (0x00027200) cell_vkb_candidate_pane_g4

0xab23,	// (0x000272e3) cell_app_pane_cp2_g1_ParamLimits

0xab23,	// (0x000272e3) cell_app_pane_cp2_g1

0xab41,	// (0x00027301) cell_app_pane_cp2_g2_ParamLimits

0xab41,	// (0x00027301) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0002c37c) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0002c37c) cell_app_pane_cp2_g

0xab4d,	// (0x0002730d) cell_app_pane_cp2_t1_ParamLimits

0xab4d,	// (0x0002730d) cell_app_pane_cp2_t1

0x47c3,	// (0x00020f83) grid_highlight_pane_cp1_ParamLimits

0x47c3,	// (0x00020f83) grid_highlight_pane_cp1

0x8aeb,	// (0x000252ab) cell_hwr_candidate_pane_cp1_ParamLimits

0x8aeb,	// (0x000252ab) cell_hwr_candidate_pane_cp1

0x8a9f,	// (0x0002525f) fep_hwr_candidate_drop_down_list_pane_g1

0x8b09,	// (0x000252c9) fep_hwr_candidate_drop_down_list_pane_g2

0x8b16,	// (0x000252d6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0002c381) fep_hwr_candidate_drop_down_list_pane_g

0x8b23,	// (0x000252e3) fep_hwr_candidate_drop_down_list_scroll_pane

0x8b2c,	// (0x000252ec) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8b2c,	// (0x000252ec) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8b39,	// (0x000252f9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8b39,	// (0x000252f9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8b46,	// (0x00025306) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8b46,	// (0x00025306) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8b53,	// (0x00025313) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8b53,	// (0x00025313) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8b6e,	// (0x0002532e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8b6e,	// (0x0002532e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8b89,	// (0x00025349) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8b89,	// (0x00025349) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8ba4,	// (0x00025364) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8ba4,	// (0x00025364) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8bbf,	// (0x0002537f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8bbf,	// (0x0002537f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0002c388) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0002c388) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x2b5d,	// (0x0001f31d) cell_vkb_candidate_pane_cp1_ParamLimits

0x2b5d,	// (0x0001f31d) cell_vkb_candidate_pane_cp1

0xa7f6,	// (0x00026fb6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xa7f6,	// (0x00026fb6) fep_vkb_candidate_drop_down_list_pane_g1

0xab5f,	// (0x0002731f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xab5f,	// (0x0002731f) fep_vkb_candidate_drop_down_list_pane_g2

0xab6c,	// (0x0002732c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xab6c,	// (0x0002732c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0002c399) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0002c399) fep_vkb_candidate_drop_down_list_pane_g

0xab79,	// (0x00027339) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xab79,	// (0x00027339) fep_vkb_candidate_drop_down_list_scroll_pane

0xab86,	// (0x00027346) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xab86,	// (0x00027346) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xab93,	// (0x00027353) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xab93,	// (0x00027353) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xab9f,	// (0x0002735f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xab9f,	// (0x0002735f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xabab,	// (0x0002736b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xabab,	// (0x0002736b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xabcc,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xabcc,	// (0x0002738c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xabed,	// (0x000273ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xabed,	// (0x000273ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xac0e,	// (0x000273ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xac0e,	// (0x000273ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xac2f,	// (0x000273ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xac2f,	// (0x000273ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0002c3a0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0002c3a0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x100a,	// (0x0001d7ca) title_pane_g1_ParamLimits

0x1021,	// (0x0001d7e1) title_pane_g2_ParamLimits

0xf56a,	// (0x0002bd2a) title_pane_g_ParamLimits

0x4e98,	// (0x00021658) aid_call2_pane

0x4e90,	// (0x00021650) aid_call_pane

0x4ea0,	// (0x00021660) popup_clock_analogue_window_g1

0x4ea0,	// (0x00021660) popup_clock_analogue_window_g2

0x7663,	// (0x00023e23) popup_clock_analogue_window_g3

0x766c,	// (0x00023e2c) popup_clock_analogue_window_g4

0x413d,	// (0x000208fd) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002bed4) popup_clock_analogue_window_g

0x7674,	// (0x00023e34) popup_clock_analogue_window_t1

0x76b8,	// (0x00023e78) clock_digital_number_pane_ParamLimits

0x76b8,	// (0x00023e78) clock_digital_number_pane

0x76c4,	// (0x00023e84) clock_digital_number_pane_cp02_ParamLimits

0x76c4,	// (0x00023e84) clock_digital_number_pane_cp02

0x76d0,	// (0x00023e90) clock_digital_number_pane_cp03_ParamLimits

0x76d0,	// (0x00023e90) clock_digital_number_pane_cp03

0x76dc,	// (0x00023e9c) clock_digital_number_pane_cp04_ParamLimits

0x76dc,	// (0x00023e9c) clock_digital_number_pane_cp04

0x76e8,	// (0x00023ea8) clock_digital_separator_pane_ParamLimits

0x76e8,	// (0x00023ea8) clock_digital_separator_pane

0x76f4,	// (0x00023eb4) popup_clock_digital_window_t1_ParamLimits

0x76f4,	// (0x00023eb4) popup_clock_digital_window_t1

0x413d,	// (0x000208fd) clock_digital_number_pane_g1

0x413d,	// (0x000208fd) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002bedf) clock_digital_number_pane_g

0x413d,	// (0x000208fd) clock_digital_separator_pane_g1

0x413d,	// (0x000208fd) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002bedf) clock_digital_separator_pane_g

0x1ded,	// (0x0001e5ad) aid_fill_nsta_ParamLimits

0x1f04,	// (0x0001e6c4) indicator_nsta_pane_ParamLimits

0x5742,	// (0x00021f02) popup_clock_analogue_window

0x5742,	// (0x00021f02) popup_clock_digital_window

0x4b2e,	// (0x000212ee) grid_indicator_nsta_pane_ParamLimits

0xa248,	// (0x00026a08) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0002c266) clock_nsta_pane_t

0x75cc,	// (0x00023d8c) aid_size_max_handle

0xe289,	// (0x0002aa49) aid_size_min_handle

0x532d,	// (0x00021aed) editor_scroll_pane

0xac4a,	// (0x0002740a) ex_editor_pane

0x4926,	// (0x000210e6) scroll_pane_cp13

0x4773,	// (0x00020f33) scroll_pane_cp14

0x4eca,	// (0x0002168a) scroll_pane_cp36

0x158f,	// (0x0001dd4f) list_single_graphic_hl_pane_cp2_ParamLimits

0x158f,	// (0x0001dd4f) list_single_graphic_hl_pane_cp2

0x272c,	// (0x0001eeec) list_single_graphic_hl_pane_ParamLimits

0x272c,	// (0x0001eeec) list_single_graphic_hl_pane

0xc589,	// (0x00028d49) aid_size_min_hl_cp1

0xac52,	// (0x00027412) list_highlight_pane_cp34_ParamLimits

0xac52,	// (0x00027412) list_highlight_pane_cp34

0xac63,	// (0x00027423) list_single_graphic_hl_pane_g1_ParamLimits

0xac63,	// (0x00027423) list_single_graphic_hl_pane_g1

0x0c99,	// (0x0001d459) list_single_graphic_hl_pane_g2_ParamLimits

0x0c99,	// (0x0001d459) list_single_graphic_hl_pane_g2

0x0c99,	// (0x0001d459) list_single_graphic_hl_pane_g3_ParamLimits

0x0c99,	// (0x0001d459) list_single_graphic_hl_pane_g3

0x0ca5,	// (0x0001d465) list_single_graphic_hl_pane_g4_ParamLimits

0x0ca5,	// (0x0001d465) list_single_graphic_hl_pane_g4

0x0cb1,	// (0x0001d471) list_single_graphic_hl_pane_g5_ParamLimits

0x0cb1,	// (0x0001d471) list_single_graphic_hl_pane_g5

0x0004,

0xfbf1,	// (0x0002c3b1) list_single_graphic_hl_pane_g_ParamLimits

0xfbf1,	// (0x0002c3b1) list_single_graphic_hl_pane_g

0x0cc5,	// (0x0001d485) list_single_graphic_hl_pane_t1_ParamLimits

0x0cc5,	// (0x0001d485) list_single_graphic_hl_pane_t1

0xac70,	// (0x00027430) aid_size_min_hl_cp2

0xac79,	// (0x00027439) list_highlight_pane_cp34_cp2_ParamLimits

0xac79,	// (0x00027439) list_highlight_pane_cp34_cp2

0xac63,	// (0x00027423) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xac63,	// (0x00027423) list_single_graphic_hl_pane_g1_cp2

0xac86,	// (0x00027446) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xac86,	// (0x00027446) list_single_graphic_hl_pane_g2_cp2

0xac92,	// (0x00027452) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xac92,	// (0x00027452) list_single_graphic_hl_pane_g3_cp2

0x51a2,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x51a2,	// (0x00021962) list_single_graphic_hl_pane_g4_cp2

0xaa69,	// (0x00027229) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xaa69,	// (0x00027229) list_single_graphic_hl_pane_g5_cp2

0xe2b3,	// (0x0002aa73) control_pane_g4_ParamLimits

0xe2b3,	// (0x0002aa73) control_pane_g4

0x4cd5,	// (0x00021495) bg_popup_sub_pane_cp10_ParamLimits

0xa5d2,	// (0x00026d92) list_choice_list_pane_ParamLimits

0xa5e1,	// (0x00026da1) scroll_pane_cp23

0x4382,	// (0x00020b42) bg_popup_preview_window_pane_cp02_ParamLimits

0xaaa5,	// (0x00027265) list_preview_fixed_pane_ParamLimits

0xaabb,	// (0x0002727b) list_preview_fixed_pane_cp_ParamLimits

0xaabb,	// (0x0002727b) list_preview_fixed_pane_cp

0xaac7,	// (0x00027287) popup_preview_fixed_window_g1_ParamLimits

0xaac7,	// (0x00027287) popup_preview_fixed_window_g1

0xaad3,	// (0x00027293) popup_preview_fixed_window_g2_ParamLimits

0xaad3,	// (0x00027293) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0002c339) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0002c339) popup_preview_fixed_window_g

0x74e7,	// (0x00023ca7) aid_navi_side_left_pane_ParamLimits

0x74f7,	// (0x00023cb7) aid_navi_side_right_pane_ParamLimits

0x7506,	// (0x00023cc6) navi_icon_pane_stacon_ParamLimits

0x7516,	// (0x00023cd6) navi_navi_pane_stacon_ParamLimits

0x7506,	// (0x00023cc6) navi_text_pane_stacon_ParamLimits

0x4133,	// (0x000208f3) main_text_info_pane

0xacb4,	// (0x00027474) listscroll_text_info_pane

0xacbc,	// (0x0002747c) list_text_info_pane_ParamLimits

0xacbc,	// (0x0002747c) list_text_info_pane

0xaccb,	// (0x0002748b) scroll_pane_cp24_ParamLimits

0xaccb,	// (0x0002748b) scroll_pane_cp24

0x2b7d,	// (0x0001f33d) list_text_info_pane_t1_ParamLimits

0x2b7d,	// (0x0001f33d) list_text_info_pane_t1

0x1876,	// (0x0001e036) popup_fast_swap2_window_ParamLimits

0x1876,	// (0x0001e036) popup_fast_swap2_window

0xace9,	// (0x000274a9) aid_size_cell_fast2

0x4133,	// (0x000208f3) bg_popup_window_pane_cp17

0x5bdc,	// (0x0002239c) heading_pane_cp2

0x4572,	// (0x00020d32) listscroll_fast2_pane

0xacf3,	// (0x000274b3) grid_fast2_pane

0xacfb,	// (0x000274bb) listscroll_fast2_pane_g1

0xad03,	// (0x000274c3) listscroll_fast2_pane_g2

0x0001,

0xfbfc,	// (0x0002c3bc) listscroll_fast2_pane_g

0x4926,	// (0x000210e6) scroll_pane_cp26

0xad0b,	// (0x000274cb) cell_fast2_pane_ParamLimits

0xad0b,	// (0x000274cb) cell_fast2_pane

0xad21,	// (0x000274e1) cell_fast2_pane_g1

0xad2a,	// (0x000274ea) cell_fast2_pane_g2

0xad33,	// (0x000274f3) cell_fast2_pane_g3

0x0002,

0xfc01,	// (0x0002c3c1) cell_fast2_pane_g

0x45d4,	// (0x00020d94) grid_highlight_pane_cp9

0x45e9,	// (0x00020da9) main_eswt_pane_ParamLimits

0x45e9,	// (0x00020da9) main_eswt_pane

0xace0,	// (0x000274a0) list_single_text_info_pane

0xad3b,	// (0x000274fb) eswt_ctrl_button_pane

0xad3b,	// (0x000274fb) eswt_ctrl_canvas_pane

0xad43,	// (0x00027503) eswt_ctrl_combo_pane

0xad3b,	// (0x000274fb) eswt_ctrl_default_pane

0xad3b,	// (0x000274fb) eswt_ctrl_label_pane

0xad4b,	// (0x0002750b) eswt_ctrl_wait_pane

0xad53,	// (0x00027513) eswt_shell_pane

0x4133,	// (0x000208f3) listscroll_eswt_app_pane

0xad6f,	// (0x0002752f) popup_eswt_tasktip_window_ParamLimits

0xad6f,	// (0x0002752f) popup_eswt_tasktip_window

0x593d,	// (0x000220fd) bg_popup_window_pane_cp18

0xad80,	// (0x00027540) eswt_control_pane_g1_ParamLimits

0xad80,	// (0x00027540) eswt_control_pane_g1

0xad8d,	// (0x0002754d) eswt_control_pane_g2_ParamLimits

0xad8d,	// (0x0002754d) eswt_control_pane_g2

0xad9a,	// (0x0002755a) eswt_control_pane_g3_ParamLimits

0xad9a,	// (0x0002755a) eswt_control_pane_g3

0xada7,	// (0x00027567) eswt_control_pane_g4_ParamLimits

0xada7,	// (0x00027567) eswt_control_pane_g4

0x0003,

0xfc08,	// (0x0002c3c8) eswt_control_pane_g_ParamLimits

0xfc08,	// (0x0002c3c8) eswt_control_pane_g

0x47c3,	// (0x00020f83) bg_button_pane_ParamLimits

0x47c3,	// (0x00020f83) bg_button_pane

0x45e9,	// (0x00020da9) common_borders_pane_copy2_ParamLimits

0x45e9,	// (0x00020da9) common_borders_pane_copy2

0xadb4,	// (0x00027574) control_button_pane_g1_ParamLimits

0xadb4,	// (0x00027574) control_button_pane_g1

0xadc0,	// (0x00027580) control_button_pane_g2_ParamLimits

0xadc0,	// (0x00027580) control_button_pane_g2

0xadcc,	// (0x0002758c) control_button_pane_g3_ParamLimits

0xadcc,	// (0x0002758c) control_button_pane_g3

0x0002,

0xfc11,	// (0x0002c3d1) control_button_pane_g_ParamLimits

0xfc11,	// (0x0002c3d1) control_button_pane_g

0xade0,	// (0x000275a0) control_button_pane_t1

0xadee,	// (0x000275ae) control_button_pane_t2

0x0001,

0xfc18,	// (0x0002c3d8) control_button_pane_t

0x5843,	// (0x00022003) bg_button_pane_g1

0x584b,	// (0x0002200b) bg_button_pane_g2

0x5853,	// (0x00022013) bg_button_pane_g3

0x585b,	// (0x0002201b) bg_button_pane_g4

0x5863,	// (0x00022023) bg_button_pane_g5

0x586b,	// (0x0002202b) bg_button_pane_g6

0x5873,	// (0x00022033) bg_button_pane_g7

0x587b,	// (0x0002203b) bg_button_pane_g8

0x5883,	// (0x00022043) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0002c02b) bg_button_pane_g

0xa58d,	// (0x00026d4d) common_borders_pane_ParamLimits

0xa58d,	// (0x00026d4d) common_borders_pane

0xad80,	// (0x00027540) eswt_control_pane_g1_copy1_ParamLimits

0xad80,	// (0x00027540) eswt_control_pane_g1_copy1

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy1_ParamLimits

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy1

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy1_ParamLimits

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy1

0xada7,	// (0x00027567) eswt_control_pane_g4_copy1_ParamLimits

0xada7,	// (0x00027567) eswt_control_pane_g4_copy1

0xa5c8,	// (0x00026d88) bg_eswt_ctrl_canvas_pane_g1

0xa58d,	// (0x00026d4d) common_borders_pane_cp2_ParamLimits

0xa58d,	// (0x00026d4d) common_borders_pane_cp2

0xa58d,	// (0x00026d4d) common_borders_pane_cp3_ParamLimits

0xa58d,	// (0x00026d4d) common_borders_pane_cp3

0xadfc,	// (0x000275bc) separator_horizontal_pane

0x4d2f,	// (0x000214ef) separator_vertical_pane

0xad80,	// (0x00027540) eswt_control_pane_g1_copy2_ParamLimits

0xad80,	// (0x00027540) eswt_control_pane_g1_copy2

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy2_ParamLimits

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy2

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy2_ParamLimits

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy2

0xada7,	// (0x00027567) eswt_control_pane_g4_copy2_ParamLimits

0xada7,	// (0x00027567) eswt_control_pane_g4_copy2

0x4133,	// (0x000208f3) common_borders_pane_cp4

0xae04,	// (0x000275c4) separator_horizontal_pane_g1

0xae0d,	// (0x000275cd) separator_horizontal_pane_g2

0xae16,	// (0x000275d6) separator_horizontal_pane_g3

0x0002,

0xfc1d,	// (0x0002c3dd) separator_horizontal_pane_g

0xad80,	// (0x00027540) eswt_control_pane_g1_copy3_ParamLimits

0xad80,	// (0x00027540) eswt_control_pane_g1_copy3

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy3_ParamLimits

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy3

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy3_ParamLimits

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy3

0xada7,	// (0x00027567) eswt_control_pane_g4_copy3_ParamLimits

0xada7,	// (0x00027567) eswt_control_pane_g4_copy3

0x4133,	// (0x000208f3) common_borders_pane_cp5

0xae1f,	// (0x000275df) separator_vertical_pane_g1

0xae28,	// (0x000275e8) separator_vertical_pane_g2

0xae31,	// (0x000275f1) separator_vertical_pane_g3

0x0002,

0xfc24,	// (0x0002c3e4) separator_vertical_pane_g

0xad80,	// (0x00027540) eswt_control_pane_g1_copy4_ParamLimits

0xad80,	// (0x00027540) eswt_control_pane_g1_copy4

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy4_ParamLimits

0xad8d,	// (0x0002754d) eswt_control_pane_g2_copy4

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy4_ParamLimits

0xad9a,	// (0x0002755a) eswt_control_pane_g3_copy4

0xada7,	// (0x00027567) eswt_control_pane_g4_copy4_ParamLimits

0xada7,	// (0x00027567) eswt_control_pane_g4_copy4

0x2b98,	// (0x0001f358) eswt_ctrl_combo_button_pane

0x2ba0,	// (0x0001f360) eswt_ctrl_input_pane

0x2ba8,	// (0x0001f368) popup_choice_list_window_cp70

0x2bb0,	// (0x0001f370) eswt_ctrl_input_pane_t1

0x4133,	// (0x000208f3) input_focus_pane_cp70

0xa58d,	// (0x00026d4d) bg_button_pane_cp70_ParamLimits

0xa58d,	// (0x00026d4d) bg_button_pane_cp70

0x2bbe,	// (0x0001f37e) eswt_ctrl_combo_button_pane_g1

0xae3a,	// (0x000275fa) wait_bar_pane_cp70

0x593d,	// (0x000220fd) bg_popup_window_pane_cp70_ParamLimits

0x593d,	// (0x000220fd) bg_popup_window_pane_cp70

0xae42,	// (0x00027602) popup_eswt_tasktip_window_t1

0xae58,	// (0x00027618) wait_bar_pane_cp71_ParamLimits

0xae58,	// (0x00027618) wait_bar_pane_cp71

0xae64,	// (0x00027624) grid_eswt_app_pane

0x4d38,	// (0x000214f8) scroll_pane_cp70

0x2bc6,	// (0x0001f386) cell_eswt_app_pane_ParamLimits

0x2bc6,	// (0x0001f386) cell_eswt_app_pane

0x2bee,	// (0x0001f3ae) cell_eswt_app_pane_g1_ParamLimits

0x2bee,	// (0x0001f3ae) cell_eswt_app_pane_g1

0x2c1d,	// (0x0001f3dd) cell_eswt_app_pane_g2_ParamLimits

0x2c1d,	// (0x0001f3dd) cell_eswt_app_pane_g2

0x0001,

0xfc2b,	// (0x0002c3eb) cell_eswt_app_pane_g_ParamLimits

0xfc2b,	// (0x0002c3eb) cell_eswt_app_pane_g

0x2c46,	// (0x0001f406) cell_eswt_app_pane_t1_ParamLimits

0x2c46,	// (0x0001f406) cell_eswt_app_pane_t1

0xae6d,	// (0x0002762d) grid_highlight_pane_cp70_ParamLimits

0xae6d,	// (0x0002762d) grid_highlight_pane_cp70

0x47dd,	// (0x00020f9d) set_content_pane_g1

0x551c,	// (0x00021cdc) status_small_volume_pane

0x8bda,	// (0x0002539a) status_small_volume_pane_g1

0x8be2,	// (0x000253a2) volume_small2_pane

0x8beb,	// (0x000253ab) volume_small2_pane_g1

0x8bf4,	// (0x000253b4) volume_small2_pane_g2

0x8bfd,	// (0x000253bd) volume_small2_pane_g3

0x8c06,	// (0x000253c6) volume_small2_pane_g4

0x8c0f,	// (0x000253cf) volume_small2_pane_g5

0x8c18,	// (0x000253d8) volume_small2_pane_g6

0x8c21,	// (0x000253e1) volume_small2_pane_g7

0x8c2a,	// (0x000253ea) volume_small2_pane_g8

0x8c33,	// (0x000253f3) volume_small2_pane_g9

0x8c3c,	// (0x000253fc) volume_small2_pane_g10

0x0009,

0xfc30,	// (0x0002c3f0) volume_small2_pane_g

0xa8fd,	// (0x000270bd) fep_vkb_top_text_pane_g1_ParamLimits

0x2b05,	// (0x0001f2c5) fep_vkb_top_text_pane_t1_ParamLimits

0xaadf,	// (0x0002729f) popup_preview_fixed_window_g3_ParamLimits

0xaadf,	// (0x0002729f) popup_preview_fixed_window_g3

0x1d96,	// (0x0001e556) popup_toolbar_trans_pane

0x25b9,	// (0x0001ed79) aid_height_set_list_ParamLimits

0x9a23,	// (0x000261e3) aid_size_parent_ParamLimits

0x4cd5,	// (0x00021495) list_highlight_pane_cp2_ParamLimits

0x47dd,	// (0x00020f9d) set_content_pane_g1_ParamLimits

0x273f,	// (0x0001eeff) list_single_image_pane_ParamLimits

0x273f,	// (0x0001eeff) list_single_image_pane

0x2c78,	// (0x0001f438) aid_size_cell_image_ParamLimits

0x2c78,	// (0x0001f438) aid_size_cell_image

0x2c85,	// (0x0001f445) grid_single_image_pane_ParamLimits

0x2c85,	// (0x0001f445) grid_single_image_pane

0x47dd,	// (0x00020f9d) list_single_image_pane_g1_ParamLimits

0x47dd,	// (0x00020f9d) list_single_image_pane_g1

0x47e9,	// (0x00020fa9) list_single_image_pane_g2_ParamLimits

0x47e9,	// (0x00020fa9) list_single_image_pane_g2

0x0001,

0xfc45,	// (0x0002c405) list_single_image_pane_g_ParamLimits

0xfc45,	// (0x0002c405) list_single_image_pane_g

0xae79,	// (0x00027639) list_single_image_pane_t1_ParamLimits

0xae79,	// (0x00027639) list_single_image_pane_t1

0x2c91,	// (0x0001f451) cell_image_list_pane_ParamLimits

0x2c91,	// (0x0001f451) cell_image_list_pane

0x2ca5,	// (0x0001f465) cell_image_list_pane_g1

0x2cae,	// (0x0001f46e) cell_image_list_pane_g2

0x0001,

0xfc4a,	// (0x0002c40a) cell_image_list_pane_g

0xae8f,	// (0x0002764f) aid_size_cell_tb_trans_pane

0x47c3,	// (0x00020f83) bg_tb_trans_pane

0xaea1,	// (0x00027661) grid_tb_trans_pane

0x5843,	// (0x00022003) bg_tb_trans_pane_g1

0x584b,	// (0x0002200b) bg_tb_trans_pane_g2

0x5853,	// (0x00022013) bg_tb_trans_pane_g3

0x585b,	// (0x0002201b) bg_tb_trans_pane_g4

0x5863,	// (0x00022023) bg_tb_trans_pane_g5

0x587b,	// (0x0002203b) bg_tb_trans_pane_g6

0x5883,	// (0x00022043) bg_tb_trans_pane_g7

0x586b,	// (0x0002202b) bg_tb_trans_pane_g8

0x5873,	// (0x00022033) bg_tb_trans_pane_g9

0x0008,

0xfc4f,	// (0x0002c40f) bg_tb_trans_pane_g

0xaeb5,	// (0x00027675) cell_toolbar_trans_pane_ParamLimits

0xaeb5,	// (0x00027675) cell_toolbar_trans_pane

0xa5c8,	// (0x00026d88) cell_toolbar_trans_pane_g1

0x297a,	// (0x0001f13a) list_form2_midp_pane_t1

0x2988,	// (0x0001f148) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0002c2ac) list_form2_midp_pane_t

0xa324,	// (0x00026ae4) scroll_pane_cp51_ParamLimits

0xa49a,	// (0x00026c5a) form2_midp_wait_pane_g1

0xa4a3,	// (0x00026c63) form2_midp_wait_pane_g2

0xa4ac,	// (0x00026c6c) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0002c2c1) form2_midp_wait_pane_g

0x4223,	// (0x000209e3) list_highlight_pane_cp21_ParamLimits

0xa4cc,	// (0x00026c8c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xa4db,	// (0x00026c9b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb820,	// (0x00027fe0) list_single_2graphic_im_pane_ParamLimits

0xb820,	// (0x00027fe0) list_single_2graphic_im_pane

0x2cb7,	// (0x0001f477) list_single_2graphic_im_pane_g1_ParamLimits

0x2cb7,	// (0x0001f477) list_single_2graphic_im_pane_g1

0x2cc8,	// (0x0001f488) list_single_2graphic_im_pane_g2_ParamLimits

0x2cc8,	// (0x0001f488) list_single_2graphic_im_pane_g2

0x2cd4,	// (0x0001f494) list_single_2graphic_im_pane_g3_ParamLimits

0x2cd4,	// (0x0001f494) list_single_2graphic_im_pane_g3

0x0003,

0xfc62,	// (0x0002c422) list_single_2graphic_im_pane_g_ParamLimits

0xfc62,	// (0x0002c422) list_single_2graphic_im_pane_g

0x2ce8,	// (0x0001f4a8) list_single_2graphic_im_pane_t1_ParamLimits

0x2ce8,	// (0x0001f4a8) list_single_2graphic_im_pane_t1

0xaaeb,	// (0x000272ab) list_single_graphic_2heading_pane_fp_ParamLimits

0xaaeb,	// (0x000272ab) list_single_graphic_2heading_pane_fp

0xbb11,	// (0x000282d1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbb11,	// (0x000282d1) list_single_graphic_2heading_pane_fp_g1

0xaaff,	// (0x000272bf) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xaaff,	// (0x000272bf) list_single_graphic_2heading_pane_fp_g2

0xb386,	// (0x00027b46) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb386,	// (0x00027b46) list_single_graphic_2heading_pane_fp_g3

0xbae6,	// (0x000282a6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbae6,	// (0x000282a6) list_single_graphic_2heading_pane_fp_g4

0xab0b,	// (0x000272cb) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xab0b,	// (0x000272cb) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0002c349) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002c349) list_single_graphic_2heading_pane_fp_g

0xc5c8,	// (0x00028d88) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc5c8,	// (0x00028d88) list_single_graphic_2heading_pane_fp_t1

0xbb49,	// (0x00028309) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbb49,	// (0x00028309) list_single_graphic_2heading_pane_fp_t2

0xc5de,	// (0x00028d9e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc5de,	// (0x00028d9e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6b,	// (0x0002c42b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6b,	// (0x0002c42b) list_single_graphic_2heading_pane_fp_t

0xa653,	// (0x00026e13) fep_hwr_write_pane_g5_ParamLimits

0xa653,	// (0x00026e13) fep_hwr_write_pane_g5

0xa65f,	// (0x00026e1f) fep_hwr_write_pane_g6_ParamLimits

0xa65f,	// (0x00026e1f) fep_hwr_write_pane_g6

0xad53,	// (0x00027513) eswt_shell_pane_ParamLimits

0x593d,	// (0x000220fd) bg_popup_window_pane_cp18_ParamLimits

0x99c7,	// (0x00026187) heading_pane_cp70

0xae42,	// (0x00027602) popup_eswt_tasktip_window_t1_ParamLimits

0x1e31,	// (0x0001e5f1) aid_touch_tab_arrow_left

0x1e45,	// (0x0001e605) aid_touch_tab_arrow_right

0x1040,	// (0x0001d800) title_pane_g3_ParamLimits

0x1040,	// (0x0001d800) title_pane_g3

0x4793,	// (0x00020f53) set_value_pane_g1

0x1d96,	// (0x0001e556) popup_toolbar_trans_pane_ParamLimits

0xae8f,	// (0x0002764f) aid_size_cell_tb_trans_pane_ParamLimits

0x47c3,	// (0x00020f83) bg_tb_trans_pane_ParamLimits

0xaea1,	// (0x00027661) grid_tb_trans_pane_ParamLimits

0x4382,	// (0x00020b42) cont_note_pane_ParamLimits

0x4382,	// (0x00020b42) cont_note_pane

0x45e9,	// (0x00020da9) cont_snote2_single_text_pane_ParamLimits

0x45e9,	// (0x00020da9) cont_snote2_single_text_pane

0x45e9,	// (0x00020da9) cont_snote2_single_graphic_pane_ParamLimits

0x45e9,	// (0x00020da9) cont_snote2_single_graphic_pane

0x5de6,	// (0x000225a6) cont_note_wait_pane_ParamLimits

0x5de6,	// (0x000225a6) cont_note_wait_pane

0x5de6,	// (0x000225a6) cont_note_image_pane_ParamLimits

0x5de6,	// (0x000225a6) cont_note_image_pane

0xaee7,	// (0x000276a7) popup_note2_window_g1_ParamLimits

0xaee7,	// (0x000276a7) popup_note2_window_g1

0xaf18,	// (0x000276d8) popup_note2_window_t1_ParamLimits

0xaf18,	// (0x000276d8) popup_note2_window_t1

0xaf5d,	// (0x0002771d) popup_note2_window_t2_ParamLimits

0xaf5d,	// (0x0002771d) popup_note2_window_t2

0xbc5b,	// (0x0002841b) popup_note2_window_t3_ParamLimits

0xbc5b,	// (0x0002841b) popup_note2_window_t3

0xbca0,	// (0x00028460) popup_note2_window_t4_ParamLimits

0xbca0,	// (0x00028460) popup_note2_window_t4

0x4406,	// (0x00020bc6) popup_note2_window_t5_ParamLimits

0x4406,	// (0x00020bc6) popup_note2_window_t5

0x0004,

0xfc77,	// (0x0002c437) popup_note2_window_t_ParamLimits

0xfc77,	// (0x0002c437) popup_note2_window_t

0xbccf,	// (0x0002848f) popup_note2_image_window_g1_ParamLimits

0xbccf,	// (0x0002848f) popup_note2_image_window_g1

0xbcdb,	// (0x0002849b) popup_note2_image_window_g2_ParamLimits

0xbcdb,	// (0x0002849b) popup_note2_image_window_g2

0x0001,

0xfc82,	// (0x0002c442) popup_note2_image_window_g_ParamLimits

0xfc82,	// (0x0002c442) popup_note2_image_window_g

0xbced,	// (0x000284ad) popup_note2_image_window_t1_ParamLimits

0xbced,	// (0x000284ad) popup_note2_image_window_t1

0xbd05,	// (0x000284c5) popup_note2_image_window_t2_ParamLimits

0xbd05,	// (0x000284c5) popup_note2_image_window_t2

0xbd1d,	// (0x000284dd) popup_note2_image_window_t3_ParamLimits

0xbd1d,	// (0x000284dd) popup_note2_image_window_t3

0x0002,

0xfc87,	// (0x0002c447) popup_note2_image_window_t_ParamLimits

0xfc87,	// (0x0002c447) popup_note2_image_window_t

0x5df4,	// (0x000225b4) popup_note2_wait_window_g1_ParamLimits

0x5df4,	// (0x000225b4) popup_note2_wait_window_g1

0x5e00,	// (0x000225c0) popup_note2_wait_window_g2_ParamLimits

0x5e00,	// (0x000225c0) popup_note2_wait_window_g2

0x5e0c,	// (0x000225cc) popup_note2_wait_window_g3_ParamLimits

0x5e0c,	// (0x000225cc) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x0002c00d) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x0002c00d) popup_note2_wait_window_g

0xbd39,	// (0x000284f9) popup_note2_wait_window_t1_ParamLimits

0xbd39,	// (0x000284f9) popup_note2_wait_window_t1

0xbd57,	// (0x00028517) popup_note2_wait_window_t2_ParamLimits

0xbd57,	// (0x00028517) popup_note2_wait_window_t2

0xbd75,	// (0x00028535) popup_note2_wait_window_t3_ParamLimits

0xbd75,	// (0x00028535) popup_note2_wait_window_t3

0xbd87,	// (0x00028547) popup_note2_wait_window_t4_ParamLimits

0xbd87,	// (0x00028547) popup_note2_wait_window_t4

0x0003,

0xfc8e,	// (0x0002c44e) popup_note2_wait_window_t_ParamLimits

0xfc8e,	// (0x0002c44e) popup_note2_wait_window_t

0xbd99,	// (0x00028559) wait_bar2_pane_ParamLimits

0xbd99,	// (0x00028559) wait_bar2_pane

0xbdb1,	// (0x00028571) popup_snote2_single_text_window_g1_ParamLimits

0xbdb1,	// (0x00028571) popup_snote2_single_text_window_g1

0xbdd9,	// (0x00028599) popup_snote2_single_text_window_t1_ParamLimits

0xbdd9,	// (0x00028599) popup_snote2_single_text_window_t1

0xbe25,	// (0x000285e5) popup_snote2_single_text_window_t2_ParamLimits

0xbe25,	// (0x000285e5) popup_snote2_single_text_window_t2

0xbe71,	// (0x00028631) popup_snote2_single_text_window_t3_ParamLimits

0xbe71,	// (0x00028631) popup_snote2_single_text_window_t3

0xbeb2,	// (0x00028672) popup_snote2_single_text_window_t4_ParamLimits

0xbeb2,	// (0x00028672) popup_snote2_single_text_window_t4

0xbee8,	// (0x000286a8) popup_snote2_single_text_window_t5_ParamLimits

0xbee8,	// (0x000286a8) popup_snote2_single_text_window_t5

0x0004,

0xfc97,	// (0x0002c457) popup_snote2_single_text_window_t_ParamLimits

0xfc97,	// (0x0002c457) popup_snote2_single_text_window_t

0xbf13,	// (0x000286d3) popup_snote2_single_graphic_window_g1_ParamLimits

0xbf13,	// (0x000286d3) popup_snote2_single_graphic_window_g1

0xbf3b,	// (0x000286fb) popup_snote2_single_graphic_window_g2_ParamLimits

0xbf3b,	// (0x000286fb) popup_snote2_single_graphic_window_g2

0x0001,

0xfca2,	// (0x0002c462) popup_snote2_single_graphic_window_g_ParamLimits

0xfca2,	// (0x0002c462) popup_snote2_single_graphic_window_g

0xbf63,	// (0x00028723) popup_snote2_single_graphic_window_t1_ParamLimits

0xbf63,	// (0x00028723) popup_snote2_single_graphic_window_t1

0xbfaf,	// (0x0002876f) popup_snote2_single_graphic_window_t2_ParamLimits

0xbfaf,	// (0x0002876f) popup_snote2_single_graphic_window_t2

0xbe71,	// (0x00028631) popup_snote2_single_graphic_window_t3_ParamLimits

0xbe71,	// (0x00028631) popup_snote2_single_graphic_window_t3

0xbeb2,	// (0x00028672) popup_snote2_single_graphic_window_t4_ParamLimits

0xbeb2,	// (0x00028672) popup_snote2_single_graphic_window_t4

0xbee8,	// (0x000286a8) popup_snote2_single_graphic_window_t5_ParamLimits

0xbee8,	// (0x000286a8) popup_snote2_single_graphic_window_t5

0x0004,

0xfca7,	// (0x0002c467) popup_snote2_single_graphic_window_t_ParamLimits

0xfca7,	// (0x0002c467) popup_snote2_single_graphic_window_t

0xa2bd,	// (0x00026a7d) clock_nsta_pane_cp2_t1

0xa2bd,	// (0x00026a7d) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0002c282) clock_nsta_pane_cp2_t

0xb532,	// (0x00027cf2) form_field_data_wide_pane_g1_ParamLimits

0x47dd,	// (0x00020f9d) form_field_data_wide_pane_g2_ParamLimits

0x47dd,	// (0x00020f9d) form_field_data_wide_pane_g2

0x47e9,	// (0x00020fa9) form_field_data_wide_pane_g3_ParamLimits

0x47e9,	// (0x00020fa9) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0002be57) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0002be57) form_field_data_wide_pane_g

0x28b5,	// (0x0001f075) grid_touch_3_pane_ParamLimits

0x28b5,	// (0x0001f075) grid_touch_3_pane

0x2d19,	// (0x0001f4d9) cell_touch_3_pane_ParamLimits

0x2d19,	// (0x0001f4d9) cell_touch_3_pane

0xa5c8,	// (0x00026d88) cell_touch_3_pane_g1

0xa5c8,	// (0x00026d88) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0002c307) cell_touch_3_pane_g

0x4438,	// (0x00020bf8) cont_query_data_pane

0x4440,	// (0x00020c00) cont_query_data_pane_cp1

0xbffb,	// (0x000287bb) button_value_adjust_pane_cp7

0xc003,	// (0x000287c3) query_popup_pane_cp3

0x4edb,	// (0x0002169b) bg_popup_sub_pane_cp22_ParamLimits

0x7750,	// (0x00023f10) navi_navi_volume_pane_cp2

0x7768,	// (0x00023f28) popup_side_volume_key_window_g2

0x7774,	// (0x00023f34) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002bee9) popup_side_volume_key_window_g

0x778e,	// (0x00023f4e) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002bef0) popup_side_volume_key_window_t

0x5125,	// (0x000218e5) popup_side_volume_key_window_ParamLimits

0x0772,	// (0x0001cf32) list_double_graphic_pane_g4_ParamLimits

0x0772,	// (0x0001cf32) list_double_graphic_pane_g4

0x2717,	// (0x0001eed7) list_single_2heading_msg_pane_ParamLimits

0x2717,	// (0x0001eed7) list_single_2heading_msg_pane

0x0cdb,	// (0x0001d49b) list_single_2heading_msg_pane_g1_ParamLimits

0x0cdb,	// (0x0001d49b) list_single_2heading_msg_pane_g1

0x0ce7,	// (0x0001d4a7) list_single_2heading_msg_pane_g2_ParamLimits

0x0ce7,	// (0x0001d4a7) list_single_2heading_msg_pane_g2

0x0cfa,	// (0x0001d4ba) list_single_2heading_msg_pane_g3_ParamLimits

0x0cfa,	// (0x0001d4ba) list_single_2heading_msg_pane_g3

0x0d06,	// (0x0001d4c6) list_single_2heading_msg_pane_g4_ParamLimits

0x0d06,	// (0x0001d4c6) list_single_2heading_msg_pane_g4

0x0003,

0xfcb2,	// (0x0002c472) list_single_2heading_msg_pane_g_ParamLimits

0xfcb2,	// (0x0002c472) list_single_2heading_msg_pane_g

0x0d1e,	// (0x0001d4de) list_single_2heading_msg_pane_t1_ParamLimits

0x0d1e,	// (0x0001d4de) list_single_2heading_msg_pane_t1

0x0d46,	// (0x0001d506) list_single_2heading_msg_pane_t2_ParamLimits

0x0d46,	// (0x0001d506) list_single_2heading_msg_pane_t2

0x0db1,	// (0x0001d571) list_single_2heading_msg_pane_t3_ParamLimits

0x0db1,	// (0x0001d571) list_single_2heading_msg_pane_t3

0xc6c1,	// (0x00028e81) list_single_2heading_msg_pane_t4_ParamLimits

0xc6c1,	// (0x00028e81) list_single_2heading_msg_pane_t4

0x0003,

0xfcbb,	// (0x0002c47b) list_single_2heading_msg_pane_t_ParamLimits

0xfcbb,	// (0x0002c47b) list_single_2heading_msg_pane_t

0x41c9,	// (0x00020989) title_pane_g4_ParamLimits

0x41c9,	// (0x00020989) title_pane_g4

0x745d,	// (0x00023c1d) title_pane_stacon_g3_ParamLimits

0x745d,	// (0x00023c1d) title_pane_stacon_g3

0xaedb,	// (0x0002769b) list_single_2graphic_im_pane_g4_ParamLimits

0xaedb,	// (0x0002769b) list_single_2graphic_im_pane_g4

0x97dd,	// (0x00025f9d) popup_side_volume_key_window_cp

0x9c43,	// (0x00026403) main_idle_act2_pane_t1

0x82c3,	// (0x00024a83) toolbar_button_pane_g10

0x13d0,	// (0x0001db90) popup_toolbar_window_cp1

0xa2ae,	// (0x00026a6e) clock_nsta_pane_cp_t1

0xa2ae,	// (0x00026a6e) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0002c27d) clock_nsta_pane_cp_t

0x7750,	// (0x00023f10) navi_navi_volume_pane_cp2_ParamLimits

0x775c,	// (0x00023f1c) popup_side_volume_key_window_g1_ParamLimits

0x7768,	// (0x00023f28) popup_side_volume_key_window_g2_ParamLimits

0x7774,	// (0x00023f34) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002bee9) popup_side_volume_key_window_g_ParamLimits

0x885a,	// (0x0002501a) fep_hwr_aid_pane

0x88fb,	// (0x000250bb) bg_fep_hwr_top_pane_g4_ParamLimits

0xa623,	// (0x00026de3) fep_hwr_top_pane_g1_ParamLimits

0xa635,	// (0x00026df5) fep_hwr_top_pane_g2_ParamLimits

0x891b,	// (0x000250db) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0002c2d2) fep_hwr_top_pane_g_ParamLimits

0x8930,	// (0x000250f0) fep_hwr_top_text_pane_ParamLimits

0x95a8,	// (0x00025d68) aid_touch_tab_arrow_arrow_2

0x95b1,	// (0x00025d71) aid_touch_tab_arrow_left_2

0x886e,	// (0x0002502e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x88a1,	// (0x00025061) fep_hwr_prediction_pane

0xa768,	// (0x00026f28) fep_vkb_prediction_pane

0x2ae5,	// (0x0001f2a5) fep_vkb_side_pane_g3_ParamLimits

0x2ae5,	// (0x0001f2a5) fep_vkb_side_pane_g3

0x8a9f,	// (0x0002525f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8b09,	// (0x000252c9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8b16,	// (0x000252d6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0002c381) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8c45,	// (0x00025405) fep_hwr_prediction_pane_g1

0x8c4f,	// (0x0002540f) fep_hwr_prediction_pane_g2

0x8c57,	// (0x00025417) fep_hwr_prediction_pane_g3

0x8c5f,	// (0x0002541f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0002c484) fep_hwr_prediction_pane_g

0xc014,	// (0x000287d4) fep_vkb_prediction_pane_g1

0xc01e,	// (0x000287de) fep_vkb_prediction_pane_g2

0xc026,	// (0x000287e6) fep_vkb_prediction_pane_g3

0xc02e,	// (0x000287ee) fep_vkb_prediction_pane_g4

0x0003,

0xfccd,	// (0x0002c48d) fep_vkb_prediction_pane_g

0x8692,	// (0x00024e52) slider_set_pane_g3

0x86a6,	// (0x00024e66) slider_set_pane_g4

0x86be,	// (0x00024e7e) slider_set_pane_g5

0x8692,	// (0x00024e52) slider_set_pane_g6

0xe56c,	// (0x0002ad2c) slider_set_pane_g7

0x9a46,	// (0x00026206) slider_form_pane_g3

0x9a4f,	// (0x0002620f) slider_form_pane_g4

0x9a57,	// (0x00026217) slider_form_pane_g5

0x9a46,	// (0x00026206) slider_form_pane_g6

0x26eb,	// (0x0001eeab) slider_form_pane_g7

0x9e8c,	// (0x0002664c) slider_set_pane_vc_g3

0x9e95,	// (0x00026655) slider_set_pane_vc_g4

0x9e9e,	// (0x0002665e) slider_set_pane_vc_g5

0x9e8c,	// (0x0002664c) slider_set_pane_vc_g6

0x9ea7,	// (0x00026667) slider_set_pane_vc_g7

0x9e8c,	// (0x0002664c) slider_form_pane_vc_g1

0x9e95,	// (0x00026655) slider_form_pane_vc_g2

0x9e9e,	// (0x0002665e) slider_form_pane_vc_g3

0x9e8c,	// (0x0002664c) slider_form_pane_vc_g4

0xa03b,	// (0x000267fb) slider_form_pane_vc_g5

0x0004,

0xfa96,	// (0x0002c256) slider_form_pane_vc_g

0x4133,	// (0x000208f3) main_idle_act3_pane

0xc036,	// (0x000287f6) ai3_links_pane

0x2d60,	// (0x0001f520) popup_ai3_data_window_ParamLimits

0x2d60,	// (0x0001f520) popup_ai3_data_window

0x4133,	// (0x000208f3) grid_ai3_links_pane

0x2d78,	// (0x0001f538) cell_ai3_links_pane_ParamLimits

0x2d78,	// (0x0001f538) cell_ai3_links_pane

0xc03f,	// (0x000287ff) bg_popup_sub_pane_cp11

0xc04c,	// (0x0002880c) cell_ai3_links_pane_g1

0x4133,	// (0x000208f3) bg_popup_sub_pane_cp12

0xc071,	// (0x00028831) heading_ai3_data_pane

0xc079,	// (0x00028839) list_ai3_gene_pane

0xc085,	// (0x00028845) popup_ai3_data_window_g1

0xc08d,	// (0x0002884d) heading_ai3_data_pane_g1

0xc095,	// (0x00028855) heading_ai3_data_pane_t1

0xc0a3,	// (0x00028863) list_double_ai3_gene_pane_ParamLimits

0xc0a3,	// (0x00028863) list_double_ai3_gene_pane

0xc0b0,	// (0x00028870) list_single_ai3_gene_pane_ParamLimits

0xc0b0,	// (0x00028870) list_single_ai3_gene_pane

0xa58d,	// (0x00026d4d) list_highlight_pane_cp7_ParamLimits

0xa58d,	// (0x00026d4d) list_highlight_pane_cp7

0xc0bd,	// (0x0002887d) list_single_a13_gene_pane_t1_ParamLimits

0xc0bd,	// (0x0002887d) list_single_a13_gene_pane_t1

0xc0d4,	// (0x00028894) list_single_ai3_gene_pane_g1

0xc0dd,	// (0x0002889d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd6,	// (0x0002c496) list_single_ai3_gene_pane_g

0xc0e5,	// (0x000288a5) list_double_ai3_gene_pane_g1_ParamLimits

0xc0e5,	// (0x000288a5) list_double_ai3_gene_pane_g1

0xc0f1,	// (0x000288b1) list_double_ai3_gene_pane_t1_ParamLimits

0xc0f1,	// (0x000288b1) list_double_ai3_gene_pane_t1

0xc10d,	// (0x000288cd) list_double_ai3_gene_pane_t2_ParamLimits

0xc10d,	// (0x000288cd) list_double_ai3_gene_pane_t2

0xc122,	// (0x000288e2) list_double_ai3_gene_pane_t3_ParamLimits

0xc122,	// (0x000288e2) list_double_ai3_gene_pane_t3

0x0002,

0xfcdb,	// (0x0002c49b) list_double_ai3_gene_pane_t_ParamLimits

0xfcdb,	// (0x0002c49b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc5f4,	// (0x00028db4) aid_size_min_col_2

0x2d4c,	// (0x0001f50c) aid_size_min_msg_ParamLimits

0x2d4c,	// (0x0001f50c) aid_size_min_msg

0x2af9,	// (0x0001f2b9) fep_vkb_top_text_pane_g2_ParamLimits

0x2af9,	// (0x0001f2b9) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0002c302) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0002c302) fep_vkb_top_text_pane_g

0x4133,	// (0x000208f3) main_hc_apps_shell_pane

0xc13f,	// (0x000288ff) grid_hc_apps_pane_ParamLimits

0xc13f,	// (0x000288ff) grid_hc_apps_pane

0xc14e,	// (0x0002890e) list_hc_apps_pane

0xc156,	// (0x00028916) scroll_pane_cp37_ParamLimits

0xc156,	// (0x00028916) scroll_pane_cp37

0x2d8e,	// (0x0001f54e) cell_hc_apps_pane_ParamLimits

0x2d8e,	// (0x0001f54e) cell_hc_apps_pane

0x2e28,	// (0x0001f5e8) cell_hc_apps_pane_g1_ParamLimits

0x2e28,	// (0x0001f5e8) cell_hc_apps_pane_g1

0xc162,	// (0x00028922) cell_hc_apps_pane_g2_ParamLimits

0xc162,	// (0x00028922) cell_hc_apps_pane_g2

0xc17e,	// (0x0002893e) cell_hc_apps_pane_g3_ParamLimits

0xc17e,	// (0x0002893e) cell_hc_apps_pane_g3

0x0002,

0xfce2,	// (0x0002c4a2) cell_hc_apps_pane_g_ParamLimits

0xfce2,	// (0x0002c4a2) cell_hc_apps_pane_g

0x2e55,	// (0x0001f615) cell_hc_apps_pane_t1_ParamLimits

0x2e55,	// (0x0001f615) cell_hc_apps_pane_t1

0x4382,	// (0x00020b42) grid_highlight_pane_cp10_ParamLimits

0x4382,	// (0x00020b42) grid_highlight_pane_cp10

0x2e93,	// (0x0001f653) list_single_hc_apps_pane_ParamLimits

0x2e93,	// (0x0001f653) list_single_hc_apps_pane

0x2ebf,	// (0x0001f67f) list_single_hc_apps_pane_g1

0x0e1f,	// (0x0001d5df) list_single_hc_apps_pane_g2

0x0001,

0xfce9,	// (0x0002c4a9) list_single_hc_apps_pane_g

0x0e38,	// (0x0001d5f8) list_single_hc_apps_pane_g2_copy1

0x0e54,	// (0x0001d614) list_single_hc_apps_pane_t1

0x4223,	// (0x000209e3) bg_set_opt_pane_cp_ParamLimits

0x7150,	// (0x00023910) setting_slider_pane_t1_ParamLimits

0xe233,	// (0x0002a9f3) setting_slider_pane_t2_ParamLimits

0xe24c,	// (0x0002aa0c) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002bd3a) setting_slider_pane_t_ParamLimits

0x7196,	// (0x00023956) slider_set_pane_ParamLimits

0x7adc,	// (0x0002429c) control_pane_g5_ParamLimits

0x7adc,	// (0x0002429c) control_pane_g5

0x9a0e,	// (0x000261ce) slider_set_pane_g1_ParamLimits

0x8686,	// (0x00024e46) slider_set_pane_g2_ParamLimits

0x8692,	// (0x00024e52) slider_set_pane_g3_ParamLimits

0x86a6,	// (0x00024e66) slider_set_pane_g4_ParamLimits

0x86be,	// (0x00024e7e) slider_set_pane_g5_ParamLimits

0x8692,	// (0x00024e52) slider_set_pane_g6_ParamLimits

0xe56c,	// (0x0002ad2c) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0002c129) slider_set_pane_g_ParamLimits

0x4223,	// (0x000209e3) navi_icon_text_pane_ParamLimits

0x1e03,	// (0x0001e5c3) aid_fill_nsta_2_ParamLimits

0x1e31,	// (0x0001e5f1) aid_touch_tab_arrow_left_ParamLimits

0x1e45,	// (0x0001e605) aid_touch_tab_arrow_right_ParamLimits

0x1ee1,	// (0x0001e6a1) clock_nsta_pane_ParamLimits

0x958a,	// (0x00025d4a) navi_icon_pane_g1_ParamLimits

0x9596,	// (0x00025d56) navi_text_pane_t1_ParamLimits

0xa2fe,	// (0x00026abe) navi_icon_text_pane_g1_ParamLimits

0xa30a,	// (0x00026aca) navi_icon_text_pane_t1_ParamLimits

0x2ebf,	// (0x0001f67f) list_single_hc_apps_pane_g1_ParamLimits

0x0e1f,	// (0x0001d5df) list_single_hc_apps_pane_g2_ParamLimits

0xfce9,	// (0x0002c4a9) list_single_hc_apps_pane_g_ParamLimits

0x0e38,	// (0x0001d5f8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0e54,	// (0x0001d614) list_single_hc_apps_pane_t1_ParamLimits

0xe1c0,	// (0x0002a980) popup_toolbar2_fixed_window_ParamLimits

0xe1c0,	// (0x0002a980) popup_toolbar2_fixed_window

0x1d8e,	// (0x0001e54e) popup_toolbar2_float_window

0x4133,	// (0x000208f3) bg_popup_sub_pane_cp27

0xcdc6,	// (0x00029586) grid_toolbar2_float_pane

0x4133,	// (0x000208f3) bg_popup_sub_pane_cp26

0xcdc6,	// (0x00029586) grid_toolbar2_fixed_pane

0x2ed8,	// (0x0001f698) cell_toolbar2_fixed_pane_ParamLimits

0x2ed8,	// (0x0001f698) cell_toolbar2_fixed_pane

0x2ef3,	// (0x0001f6b3) cell_toolbar2_fixed_pane_g1

0xcde8,	// (0x000295a8) toolbar2_fixed_button_pane

0x5843,	// (0x00022003) toolbar2_fixed_button_pane_g1

0x584b,	// (0x0002200b) toolbar2_fixed_button_pane_g2

0x5853,	// (0x00022013) toolbar2_fixed_button_pane_g3

0x585b,	// (0x0002201b) toolbar2_fixed_button_pane_g4

0x5863,	// (0x00022023) toolbar2_fixed_button_pane_g5

0x586b,	// (0x0002202b) toolbar2_fixed_button_pane_g6

0x5873,	// (0x00022033) toolbar2_fixed_button_pane_g7

0x587b,	// (0x0002203b) toolbar2_fixed_button_pane_g8

0x5883,	// (0x00022043) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0002c02b) toolbar2_fixed_button_pane_g

0xcdf0,	// (0x000295b0) cell_toolbar2_float_pane_ParamLimits

0xcdf0,	// (0x000295b0) cell_toolbar2_float_pane

0xce01,	// (0x000295c1) cell_toolbar2_float_pane_g1

0xcde8,	// (0x000295a8) toolbar2_fixed_button_pane_cp

0x2aae,	// (0x0001f26e) fep_vkb_accented_list_pane_ParamLimits

0x2aae,	// (0x0001f26e) fep_vkb_accented_list_pane

0x8a7f,	// (0x0002523f) bg_popup_fep_shadow_pane_g9

0x532d,	// (0x00021aed) bg_popup_fep_shadow_pane_cp3

0x490d,	// (0x000210cd) list_accented_list_pane

0xce0a,	// (0x000295ca) list_single_accented_list_pane_ParamLimits

0xce0a,	// (0x000295ca) list_single_accented_list_pane

0x532d,	// (0x00021aed) list_highlight_pane_cp10

0xce1b,	// (0x000295db) list_single_accented_list_pane_t1

0x1cd0,	// (0x0001e490) popup_slider_window_ParamLimits

0x1cd0,	// (0x0001e490) popup_slider_window

0xc00b,	// (0x000287cb) aid_indentation_list_msg

0x2fd2,	// (0x0001f792) bg_popup_window_pane_cp19

0xcf1f,	// (0x000296df) popup_slider_window_g1

0xcf3b,	// (0x000296fb) popup_slider_window_g2

0xcf57,	// (0x00029717) popup_slider_window_g3

0x0005,

0xfcee,	// (0x0002c4ae) popup_slider_window_g

0xcfb3,	// (0x00029773) popup_slider_window_t1

0xd025,	// (0x000297e5) small_volume_slider_vertical_pane

0xa5c8,	// (0x00026d88) small_volume_slider_vertical_pane_g1

0xa5c8,	// (0x00026d88) small_volume_slider_vertical_pane_g2

0xd041,	// (0x00029801) small_volume_slider_vertical_pane_g3

0x0002,

0xfd00,	// (0x0002c4c0) small_volume_slider_vertical_pane_g

0xe144,	// (0x0002a904) area_side_right_pane_ParamLimits

0xe144,	// (0x0002a904) area_side_right_pane

0xe5f0,	// (0x0002adb0) aid_size_side_button_ParamLimits

0xe5f0,	// (0x0002adb0) aid_size_side_button

0xe609,	// (0x0002adc9) grid_sctrl_middle_pane_ParamLimits

0xe609,	// (0x0002adc9) grid_sctrl_middle_pane

0x8c97,	// (0x00025457) sctrl_sk_bottom_pane

0x8ca8,	// (0x00025468) sctrl_sk_top_pane

0x8cba,	// (0x0002547a) aid_touch_sctrl_top

0x8cc7,	// (0x00025487) bg_sctrl_sk_pane_ParamLimits

0x8cc7,	// (0x00025487) bg_sctrl_sk_pane

0x8cd5,	// (0x00025495) sctrl_sk_top_pane_g1

0x8ce2,	// (0x000254a2) sctrl_sk_top_pane_t1

0x8cba,	// (0x0002547a) aid_touch_sctrl_bottom

0x8cc7,	// (0x00025487) bg_sctrl_sk_pane_cp_ParamLimits

0x8cc7,	// (0x00025487) bg_sctrl_sk_pane_cp

0x8cfd,	// (0x000254bd) sctrl_sk_bottom_pane_g1

0x8ce2,	// (0x000254a2) sctrl_sk_bottom_pane_t1

0xe61f,	// (0x0002addf) cell_sctrl_middle_pane_ParamLimits

0xe61f,	// (0x0002addf) cell_sctrl_middle_pane

0xe630,	// (0x0002adf0) aid_touch_sctrl_middle_ParamLimits

0xe630,	// (0x0002adf0) aid_touch_sctrl_middle

0xe63d,	// (0x0002adfd) bg_sctrl_middle_pane_ParamLimits

0xe63d,	// (0x0002adfd) bg_sctrl_middle_pane

0x9305,	// (0x00025ac5) cell_sctrl_middle_pane_g1_ParamLimits

0x9305,	// (0x00025ac5) cell_sctrl_middle_pane_g1

0xe64b,	// (0x0002ae0b) cell_sctrl_middle_pane_g2_ParamLimits

0xe64b,	// (0x0002ae0b) cell_sctrl_middle_pane_g2

0x0001,

0xfd0c,	// (0x0002c4cc) cell_sctrl_middle_pane_g_ParamLimits

0xfd0c,	// (0x0002c4cc) cell_sctrl_middle_pane_g

0x5843,	// (0x00022003) bg_sctrl_middle_pane_g1

0x5853,	// (0x00022013) bg_sctrl_middle_pane_g2

0x584b,	// (0x0002200b) bg_sctrl_middle_pane_g3

0x5863,	// (0x00022023) bg_sctrl_middle_pane_g4

0x585b,	// (0x0002201b) bg_sctrl_middle_pane_g5

0x586b,	// (0x0002202b) bg_sctrl_middle_pane_g6

0x5873,	// (0x00022033) bg_sctrl_middle_pane_g7

0x5883,	// (0x00022043) bg_sctrl_middle_pane_g8

0x0007,

0xfd11,	// (0x0002c4d1) bg_sctrl_middle_pane_g

0x587b,	// (0x0002203b) bg_sctrl_middle_pane_g8_copy1

0x5843,	// (0x00022003) bg_sctrl_sk_pane_g1

0x584b,	// (0x0002200b) bg_sctrl_sk_pane_g2

0x5853,	// (0x00022013) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0002c02b) bg_sctrl_sk_pane_g

0x470b,	// (0x00020ecb) aid_size_touch_scroll_bar

0x585b,	// (0x0002201b) bg_sctrl_sk_pane_g4

0x5863,	// (0x00022023) bg_sctrl_sk_pane_g5

0x586b,	// (0x0002202b) bg_sctrl_sk_pane_g6

0x5873,	// (0x00022033) bg_sctrl_sk_pane_g7

0x587b,	// (0x0002203b) bg_sctrl_sk_pane_g8

0x5883,	// (0x00022043) bg_sctrl_sk_pane_g9

0x55b9,	// (0x00021d79) popup_fep_china_hwr2_fs_candidate_window

0x18cb,	// (0x0001e08b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x18cb,	// (0x0001e08b) popup_fep_china_hwr2_fs_control_window

0x8a9f,	// (0x0002525f) sctrl_sk_top_pane_g2

0x0001,

0xfd07,	// (0x0002c4c7) sctrl_sk_top_pane_g

0x30f2,	// (0x0001f8b2) aid_fep_china_hwr2_fs_cell_ParamLimits

0x30f2,	// (0x0001f8b2) aid_fep_china_hwr2_fs_cell

0x3106,	// (0x0001f8c6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x3106,	// (0x0001f8c6) bg_popup_fep_shadow_pane_cp4

0x311d,	// (0x0001f8dd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x311d,	// (0x0001f8dd) bg_popup_fep_shadow_pane_cp5

0x312f,	// (0x0001f8ef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x312f,	// (0x0001f8ef) popup_fep_china_hwr2_fs_control_bar_grid

0x3143,	// (0x0001f903) popup_fep_china_hwr2_fs_control_funtion_grid

0xd09c,	// (0x0002985c) aid_fep_china_hwr2_fs_candi_cell

0x4133,	// (0x000208f3) bg_popup_fep_shadow_pane_cp6

0xd0a6,	// (0x00029866) popup_fep_china_hwr2_fs_candidate_grid

0x314b,	// (0x0001f90b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x314b,	// (0x0001f90b) cell_fep_china_hwr2_fs_funtion_grid

0xa5c8,	// (0x00026d88) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd0c6,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd0c6,	// (0x00029886) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd0d4,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd0d4,	// (0x00029894) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd22,	// (0x0002c4e2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd22,	// (0x0002c4e2) cell_fep_china_hwr2_fs_funtion_grid_g

0x3163,	// (0x0001f923) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x3163,	// (0x0001f923) cell_fep_china_hwr2_fs_funtion_grid_t1

0x3178,	// (0x0001f938) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x3178,	// (0x0001f938) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd27,	// (0x0002c4e7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd27,	// (0x0002c4e7) cell_fep_china_hwr2_fs_funtion_grid_t

0xd11b,	// (0x000298db) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd123,	// (0x000298e3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd12b,	// (0x000298eb) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2c,	// (0x0002c4ec) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd133,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd133,	// (0x000298f3) cell_fep_china_hwr2_fs_candidate_grid

0xd14c,	// (0x0002990c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd154,	// (0x00029914) popup_fep_china_hwr2_fs_candidate_grid_g21

0xa5c8,	// (0x00026d88) cell_fep_china_hwr2_fs_candidate_grid_g1

0xa5c8,	// (0x00026d88) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0002c307) cell_fep_china_hwr2_fs_candidate_grid_g

0xd15c,	// (0x0002991c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x56a8,	// (0x00021e68) clock_nsta_pane_cp_24_ParamLimits

0x56a8,	// (0x00021e68) clock_nsta_pane_cp_24

0x5705,	// (0x00021ec5) indicator_nsta_pane_cp_24_ParamLimits

0x5705,	// (0x00021ec5) indicator_nsta_pane_cp_24

0x9495,	// (0x00025c55) heading_pane_g1

0x0001,

0xf8d0,	// (0x0002c090) heading_pane_g

0x27dd,	// (0x0001ef9d) grid_sct_catagory_button_pane

0x9b15,	// (0x000262d5) scroll_pane_cp5_ParamLimits

0xa330,	// (0x00026af0) button_value_adjust_pane_cp5_ParamLimits

0xa330,	// (0x00026af0) button_value_adjust_pane_cp5

0xa3ee,	// (0x00026bae) form2_midp_time_pane_ParamLimits

0xd16a,	// (0x0002992a) cell_sct_catagory_button_pane_ParamLimits

0xd16a,	// (0x0002992a) cell_sct_catagory_button_pane

0xa58d,	// (0x00026d4d) bg_button_pane_cp01_ParamLimits

0xa58d,	// (0x00026d4d) bg_button_pane_cp01

0xa5c8,	// (0x00026d88) cell_sct_catagory_button_pane_g1

0x1d3f,	// (0x0001e4ff) popup_tb_extension_window

0x3194,	// (0x0001f954) aid_size_cell_ext_ParamLimits

0x3194,	// (0x0001f954) aid_size_cell_ext

0x45e9,	// (0x00020da9) bg_tb_trans_pane_cp1_ParamLimits

0x45e9,	// (0x00020da9) bg_tb_trans_pane_cp1

0x31ba,	// (0x0001f97a) grid_tb_ext_pane_ParamLimits

0x31ba,	// (0x0001f97a) grid_tb_ext_pane

0x31f0,	// (0x0001f9b0) cell_tb_ext_pane_ParamLimits

0x31f0,	// (0x0001f9b0) cell_tb_ext_pane

0x3214,	// (0x0001f9d4) cell_tb_ext_pane_g1_ParamLimits

0x3214,	// (0x0001f9d4) cell_tb_ext_pane_g1

0xd1f4,	// (0x000299b4) cell_tb_ext_pane_t1

0x4382,	// (0x00020b42) list_highlight_pane_cp11_ParamLimits

0x4382,	// (0x00020b42) list_highlight_pane_cp11

0x6fe3,	// (0x000237a3) popup_uni_indicator_window_ParamLimits

0x6fe3,	// (0x000237a3) popup_uni_indicator_window

0x47c3,	// (0x00020f83) bg_popup_sub_pane_cp14

0xd20f,	// (0x000299cf) list_uniindi_pane

0xd21b,	// (0x000299db) uniindi_top_pane

0x4382,	// (0x00020b42) bg_uniindi_top_pane

0xd23a,	// (0x000299fa) uniindi_top_pane_g1

0xd250,	// (0x00029a10) uniindi_top_pane_g2

0x0003,

0xfd33,	// (0x0002c4f3) uniindi_top_pane_g

0xd27a,	// (0x00029a3a) uniindi_top_pane_t1

0xd2a4,	// (0x00029a64) list_single_uniindi_pane_ParamLimits

0xd2a4,	// (0x00029a64) list_single_uniindi_pane

0xa5c8,	// (0x00026d88) bg_uniindi_top_pane_g1

0xd2b6,	// (0x00029a76) list_single_uniindi_pane_g1

0xd2c9,	// (0x00029a89) list_single_uniindi_pane_t1

0x6e81,	// (0x00023641) control_bg_pane

0xd2ee,	// (0x00029aae) bg_sctrl_sk_pane_cp1

0xd2f7,	// (0x00029ab7) bg_sctrl_sk_pane_cp2

0xd300,	// (0x00029ac0) control_bg_pane_g1

0xd309,	// (0x00029ac9) control_bg_pane_g2

0x0001,

0xfd3c,	// (0x0002c4fc) control_bg_pane_g

0xa256,	// (0x00026a16) cell_indicator_nsta_pane_g1_ParamLimits

0x28e8,	// (0x0001f0a8) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0002c26b) cell_indicator_nsta_pane_g_ParamLimits

0xbad3,	// (0x00028293) form2_midp_time_pane_t1_ParamLimits

0xafa2,	// (0x00027762) main_idle_act4_pane_ParamLimits

0xafa2,	// (0x00027762) main_idle_act4_pane

0x1d3f,	// (0x0001e4ff) popup_tb_extension_window_ParamLimits

0x31da,	// (0x0001f99a) tb_ext_find_pane_ParamLimits

0x31da,	// (0x0001f99a) tb_ext_find_pane

0xd312,	// (0x00029ad2) ai_gene_pane_1_cp1

0x53c1,	// (0x00021b81) ai_gene_pane_2_cp1

0xd31a,	// (0x00029ada) list_single_idle_plugin_calendar_pane

0xd323,	// (0x00029ae3) list_single_idle_plugin_notification_pane

0xd32c,	// (0x00029aec) list_single_idle_plugin_player_pane

0x3231,	// (0x0001f9f1) list_single_idle_plugin_shortcut_pane_ParamLimits

0x3231,	// (0x0001f9f1) list_single_idle_plugin_shortcut_pane

0x3259,	// (0x0001fa19) main_idle_act4_pane_t1

0x326f,	// (0x0001fa2f) main_idle_act4_pane_t2

0x0001,

0xfd41,	// (0x0002c501) main_idle_act4_pane_t

0x3285,	// (0x0001fa45) middle_sk_idle_act4_pane_ParamLimits

0x3285,	// (0x0001fa45) middle_sk_idle_act4_pane

0x32a1,	// (0x0001fa61) popup_clock_digital_analogue_window_cp2

0x32c7,	// (0x0001fa87) shortcut_wheel_idle_act4_pane_ParamLimits

0x32c7,	// (0x0001fa87) shortcut_wheel_idle_act4_pane

0xa5c8,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g1

0xa5c8,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g2

0xa5c8,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g3

0xa5c8,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g4

0xa5c8,	// (0x00026d88) shortcut_wheel_idle_act4_pane_g5

0xd3bf,	// (0x00029b7f) shortcut_wheel_idle_act4_pane_g6

0xd3c7,	// (0x00029b87) shortcut_wheel_idle_act4_pane_g7

0xd3cf,	// (0x00029b8f) shortcut_wheel_idle_act4_pane_g8

0xd3d7,	// (0x00029b97) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd46,	// (0x0002c506) shortcut_wheel_idle_act4_pane_g

0xe658,	// (0x0002ae18) middle_sk_idle_act4_pane_g1_ParamLimits

0xe658,	// (0x0002ae18) middle_sk_idle_act4_pane_g1

0x3342,	// (0x0001fb02) middle_sk_idle_act4_pane_g2_ParamLimits

0x3342,	// (0x0001fb02) middle_sk_idle_act4_pane_g2

0x0001,

0xfd69,	// (0x0002c529) middle_sk_idle_act4_pane_g_ParamLimits

0xfd69,	// (0x0002c529) middle_sk_idle_act4_pane_g

0x335a,	// (0x0001fb1a) middle_sk_idle_act4_pane_t1_ParamLimits

0x335a,	// (0x0001fb1a) middle_sk_idle_act4_pane_t1

0x3389,	// (0x0001fb49) grid_ai_shortcut_pane_ParamLimits

0x3389,	// (0x0001fb49) grid_ai_shortcut_pane

0x33a6,	// (0x0001fb66) list_highlight_pane_cp16_ParamLimits

0x33a6,	// (0x0001fb66) list_highlight_pane_cp16

0x33b3,	// (0x0001fb73) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x33b3,	// (0x0001fb73) list_single_idle_plugin_shortcut_pane_g1

0x33bf,	// (0x0001fb7f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x33bf,	// (0x0001fb7f) list_single_idle_plugin_shortcut_pane_g2

0x33db,	// (0x0001fb9b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x33db,	// (0x0001fb9b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6e,	// (0x0002c52e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6e,	// (0x0002c52e) list_single_idle_plugin_shortcut_pane_g

0x33f0,	// (0x0001fbb0) cell_ai_shortcut_pane_ParamLimits

0x33f0,	// (0x0001fbb0) cell_ai_shortcut_pane

0x3406,	// (0x0001fbc6) cell_ai_shortcut_pane_g1_ParamLimits

0x3406,	// (0x0001fbc6) cell_ai_shortcut_pane_g1

0xd312,	// (0x00029ad2) ai_gene_pane_1_cp2

0xd504,	// (0x00029cc4) ai_gene_pane_2_cp2

0xd50c,	// (0x00029ccc) list_highlight_pane_cp15

0xd515,	// (0x00029cd5) list_single_idle_plugin_calendar_pane_g1

0xd50c,	// (0x00029ccc) list_highlight_pane_cp17

0xd51d,	// (0x00029cdd) list_single_idle_plugin_calendar_pane_g1_copy1

0xd525,	// (0x00029ce5) list_single_idle_plugin_player_pane_g1

0x9ccf,	// (0x0002648f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd75,	// (0x0002c535) list_single_idle_plugin_player_pane_g

0xd52d,	// (0x00029ced) list_single_idle_plugin_player_pane_t1

0xd53b,	// (0x00029cfb) list_single_idle_plugin_player_pane_t2

0xd549,	// (0x00029d09) list_single_idle_plugin_player_pane_t3

0xd557,	// (0x00029d17) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7a,	// (0x0002c53a) list_single_idle_plugin_player_pane_t

0xd565,	// (0x00029d25) wait_bar_pane_cp15

0xd56d,	// (0x00029d2d) grid_ai_notification_pane

0x9ccf,	// (0x0002648f) list_single_idle_plugin_notification_pane_g1

0x3428,	// (0x0001fbe8) cell_ai_notification_pane_ParamLimits

0x3428,	// (0x0001fbe8) cell_ai_notification_pane

0xd583,	// (0x00029d43) cell_ai_notification_pane_g1

0xd58b,	// (0x00029d4b) cell_ai_notification_pane_t1

0x3435,	// (0x0001fbf5) tb_ext_find_button_pane

0x343d,	// (0x0001fbfd) tb_ext_find_pane_g1

0x3445,	// (0x0001fc05) tb_ext_find_pane_t1

0x4ea0,	// (0x00021660) tb_ext_find_button_pane_g1

0xd5b7,	// (0x00029d77) tb_ext_find_button_pane_g2

0x0001,

0xfd83,	// (0x0002c543) tb_ext_find_button_pane_g

0x3259,	// (0x0001fa19) main_idle_act4_pane_t1_ParamLimits

0x326f,	// (0x0001fa2f) main_idle_act4_pane_t2_ParamLimits

0xfd41,	// (0x0002c501) main_idle_act4_pane_t_ParamLimits

0x32a1,	// (0x0001fa61) popup_clock_digital_analogue_window_cp2_ParamLimits

0x32b7,	// (0x0001fa77) sat_plugin_idle_act4_pane_ParamLimits

0x32b7,	// (0x0001fa77) sat_plugin_idle_act4_pane

0x3453,	// (0x0001fc13) sat_plugin_idle_act4_pane_t1_ParamLimits

0x3453,	// (0x0001fc13) sat_plugin_idle_act4_pane_t1

0x346b,	// (0x0001fc2b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x346b,	// (0x0001fc2b) sat_plugin_idle_act4_pane_t2

0x3483,	// (0x0001fc43) sat_plugin_idle_act4_pane_t3_ParamLimits

0x3483,	// (0x0001fc43) sat_plugin_idle_act4_pane_t3

0x349b,	// (0x0001fc5b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x349b,	// (0x0001fc5b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd88,	// (0x0002c548) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd88,	// (0x0002c548) sat_plugin_idle_act4_pane_t

0x6f44,	// (0x00023704) popup_battery_window_ParamLimits

0x6f44,	// (0x00023704) popup_battery_window

0x4382,	// (0x00020b42) bg_popup_sub_pane_cp25_ParamLimits

0x4382,	// (0x00020b42) bg_popup_sub_pane_cp25

0xd60c,	// (0x00029dcc) popup_battery_window_g1_ParamLimits

0xd60c,	// (0x00029dcc) popup_battery_window_g1

0xd618,	// (0x00029dd8) popup_battery_window_t1_ParamLimits

0xd618,	// (0x00029dd8) popup_battery_window_t1

0xd62a,	// (0x00029dea) popup_battery_window_t2_ParamLimits

0xd62a,	// (0x00029dea) popup_battery_window_t2

0x0001,

0xfd91,	// (0x0002c551) popup_battery_window_t_ParamLimits

0xfd91,	// (0x0002c551) popup_battery_window_t

0x1653,	// (0x0001de13) midp_canvas_pane_ParamLimits

0x16a8,	// (0x0001de68) midp_keypad_pane_ParamLimits

0x16a8,	// (0x0001de68) midp_keypad_pane

0x4cd5,	// (0x00021495) main_midp_pane_ParamLimits

0xa2cc,	// (0x00026a8c) signal_pane_g2_cp_ParamLimits

0x34b3,	// (0x0001fc73) aid_size_cell_midp_keypad_ParamLimits

0x34b3,	// (0x0001fc73) aid_size_cell_midp_keypad

0x34d1,	// (0x0001fc91) midp_keyp_game_grid_pane_ParamLimits

0x34d1,	// (0x0001fc91) midp_keyp_game_grid_pane

0x34f0,	// (0x0001fcb0) midp_keyp_rocker_pane_ParamLimits

0x34f0,	// (0x0001fcb0) midp_keyp_rocker_pane

0x3531,	// (0x0001fcf1) midp_keyp_sk_left_pane_ParamLimits

0x3531,	// (0x0001fcf1) midp_keyp_sk_left_pane

0x3583,	// (0x0001fd43) midp_keyp_sk_right_pane_ParamLimits

0x3583,	// (0x0001fd43) midp_keyp_sk_right_pane

0x4133,	// (0x000208f3) bg_button_pane_cp03

0x35cf,	// (0x0001fd8f) midp_keyp_sk_left_pane_g1

0x4133,	// (0x000208f3) bg_button_pane_cp04

0x35cf,	// (0x0001fd8f) midp_keyp_sk_right_pane_g1

0xa5c8,	// (0x00026d88) midp_keyp_rocker_pane_g1

0x35d8,	// (0x0001fd98) keyp_game_cell_pane_ParamLimits

0x35d8,	// (0x0001fd98) keyp_game_cell_pane

0x4133,	// (0x000208f3) bg_button_pane_cp02

0x35fa,	// (0x0001fdba) keyp_game_cell_pane_g1

0xe186,	// (0x0002a946) popup_fep_vkb2_window_ParamLimits

0xe186,	// (0x0002a946) popup_fep_vkb2_window

0xe666,	// (0x0002ae26) aid_size_cell_vkb2_ParamLimits

0xe666,	// (0x0002ae26) aid_size_cell_vkb2

0xe69c,	// (0x0002ae5c) popup_fep_vkb2_window_g1_ParamLimits

0xe69c,	// (0x0002ae5c) popup_fep_vkb2_window_g1

0xe6ec,	// (0x0002aeac) vkb2_area_bottom_pane_ParamLimits

0xe6ec,	// (0x0002aeac) vkb2_area_bottom_pane

0xe72a,	// (0x0002aeea) vkb2_area_keypad_pane_ParamLimits

0xe72a,	// (0x0002aeea) vkb2_area_keypad_pane

0xe768,	// (0x0002af28) vkb2_area_top_pane_ParamLimits

0xe768,	// (0x0002af28) vkb2_area_top_pane

0xe7e4,	// (0x0002afa4) vkb2_top_entry_pane_ParamLimits

0xe7e4,	// (0x0002afa4) vkb2_top_entry_pane

0xe811,	// (0x0002afd1) vkb2_top_grid_left_pane_ParamLimits

0xe811,	// (0x0002afd1) vkb2_top_grid_left_pane

0xe831,	// (0x0002aff1) vkb2_top_grid_right_pane_ParamLimits

0xe831,	// (0x0002aff1) vkb2_top_grid_right_pane

0x8f46,	// (0x00025706) vkb2_cell_keypad_pane_ParamLimits

0x8f46,	// (0x00025706) vkb2_cell_keypad_pane

0xe877,	// (0x0002b037) vkb2_area_bottom_grid_pane_ParamLimits

0xe877,	// (0x0002b037) vkb2_area_bottom_grid_pane

0xe89d,	// (0x0002b05d) vkb2_area_bottom_pane_g1_ParamLimits

0xe89d,	// (0x0002b05d) vkb2_area_bottom_pane_g1

0xe8c3,	// (0x0002b083) vkb2_area_bottom_pane_g2_ParamLimits

0xe8c3,	// (0x0002b083) vkb2_area_bottom_pane_g2

0xe8f4,	// (0x0002b0b4) vkb2_area_bottom_pane_g3_ParamLimits

0xe8f4,	// (0x0002b0b4) vkb2_area_bottom_pane_g3

0x0002,

0xfd96,	// (0x0002c556) vkb2_area_bottom_pane_g_ParamLimits

0xfd96,	// (0x0002c556) vkb2_area_bottom_pane_g

0x90be,	// (0x0002587e) vkb2_top_cell_left_pane_ParamLimits

0x90be,	// (0x0002587e) vkb2_top_cell_left_pane

0x38e7,	// (0x000200a7) vkb2_top_entry_pane_g1_ParamLimits

0x38e7,	// (0x000200a7) vkb2_top_entry_pane_g1

0x38f5,	// (0x000200b5) vkb2_top_entry_pane_t1_ParamLimits

0x38f5,	// (0x000200b5) vkb2_top_entry_pane_t1

0xe952,	// (0x0002b112) vkb2_top_entry_pane_t2_ParamLimits

0xe952,	// (0x0002b112) vkb2_top_entry_pane_t2

0xe984,	// (0x0002b144) vkb2_top_entry_pane_t3_ParamLimits

0xe984,	// (0x0002b144) vkb2_top_entry_pane_t3

0x0002,

0xfd9d,	// (0x0002c55d) vkb2_top_entry_pane_t_ParamLimits

0xfd9d,	// (0x0002c55d) vkb2_top_entry_pane_t

0xe99a,	// (0x0002b15a) vkb2_top_grid_right_pane_g1_ParamLimits

0xe99a,	// (0x0002b15a) vkb2_top_grid_right_pane_g1

0x9121,	// (0x000258e1) vkb2_top_grid_right_pane_g2_ParamLimits

0x9121,	// (0x000258e1) vkb2_top_grid_right_pane_g2

0x9139,	// (0x000258f9) vkb2_top_grid_right_pane_g3_ParamLimits

0x9139,	// (0x000258f9) vkb2_top_grid_right_pane_g3

0xe9b0,	// (0x0002b170) vkb2_top_grid_right_pane_g4_ParamLimits

0xe9b0,	// (0x0002b170) vkb2_top_grid_right_pane_g4

0x0003,

0xfda4,	// (0x0002c564) vkb2_top_grid_right_pane_g_ParamLimits

0xfda4,	// (0x0002c564) vkb2_top_grid_right_pane_g

0x9167,	// (0x00025927) vkb2_top_cell_left_pane_g1

0x917e,	// (0x0002593e) vkb2_cell_keypad_pane_g1_ParamLimits

0x917e,	// (0x0002593e) vkb2_cell_keypad_pane_g1

0xe9c6,	// (0x0002b186) vkb2_cell_keypad_pane_t1_ParamLimits

0xe9c6,	// (0x0002b186) vkb2_cell_keypad_pane_t1

0x918c,	// (0x0002594c) vkb2_cell_bottom_grid_pane_ParamLimits

0x918c,	// (0x0002594c) vkb2_cell_bottom_grid_pane

0x91c5,	// (0x00025985) vkb2_cell_bottom_grid_pane_g1

0x32e6,	// (0x0001faa6) aid_call2_pane_cp02

0x32ee,	// (0x0001faae) aid_call_pane_cp02

0x32f6,	// (0x0001fab6) clock_digital_number_pane_cp10

0x32fe,	// (0x0001fabe) clock_digital_number_pane_cp11

0x3306,	// (0x0001fac6) clock_digital_number_pane_cp12

0x330e,	// (0x0001face) clock_digital_number_pane_cp13

0x3316,	// (0x0001fad6) clock_digital_separator_pane_cp10

0x4ea0,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g1

0x4ea0,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g2

0x331e,	// (0x0001fade) popup_clock_digital_analogue_window_cp2_g3

0x4ea0,	// (0x00021660) popup_clock_digital_analogue_window_cp2_g4

0x331e,	// (0x0001fade) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd59,	// (0x0002c519) popup_clock_digital_analogue_window_cp2_g

0x3326,	// (0x0001fae6) popup_clock_digital_analogue_window_cp2_t1

0x3334,	// (0x0001faf4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd64,	// (0x0002c524) popup_clock_digital_analogue_window_cp2_t

0xa5c8,	// (0x00026d88) clock_digital_number_pane_cp10_g1

0xa5c8,	// (0x00026d88) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0002c307) clock_digital_number_pane_cp10_g

0xa5c8,	// (0x00026d88) clock_digital_separator_pane_cp10_g1

0xa5c8,	// (0x00026d88) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0002c307) clock_digital_separator_pane_cp10_g

0xd25c,	// (0x00029a1c) uniindi_top_pane_g3

0xd26d,	// (0x00029a2d) uniindi_top_pane_g4

0x8fb1,	// (0x00025771) vkb2_row_keypad_pane_ParamLimits

0x8fb1,	// (0x00025771) vkb2_row_keypad_pane

0x91e1,	// (0x000259a1) vkb2_cell_t_keypad_pane_ParamLimits

0x91e1,	// (0x000259a1) vkb2_cell_t_keypad_pane

0x91ee,	// (0x000259ae) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91ee,	// (0x000259ae) vkb2_cell_t_keypad_pane_cp08

0x91fe,	// (0x000259be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91fe,	// (0x000259be) vkb2_cell_t_keypad_pane_cp09

0x920f,	// (0x000259cf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x920f,	// (0x000259cf) vkb2_cell_t_keypad_pane_cp01

0x921f,	// (0x000259df) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x921f,	// (0x000259df) vkb2_cell_t_keypad_pane_cp02

0x922f,	// (0x000259ef) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x922f,	// (0x000259ef) vkb2_cell_t_keypad_pane_cp03

0x923f,	// (0x000259ff) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x923f,	// (0x000259ff) vkb2_cell_t_keypad_pane_cp04

0x924f,	// (0x00025a0f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x924f,	// (0x00025a0f) vkb2_cell_t_keypad_pane_cp05

0x925f,	// (0x00025a1f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x925f,	// (0x00025a1f) vkb2_cell_t_keypad_pane_cp06

0x926f,	// (0x00025a2f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x926f,	// (0x00025a2f) vkb2_cell_t_keypad_pane_cp07

0x927f,	// (0x00025a3f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x927f,	// (0x00025a3f) vkb2_cell_t_keypad_pane_cp10

0x8a9f,	// (0x0002525f) vkb2_cell_t_keypad_pane_g1

0xe9dd,	// (0x0002b19d) vkb2_cell_t_keypad_pane_t1

0x6e81,	// (0x00023641) popup_grid_graphic2_window

0x395a,	// (0x0002011a) aid_size_cell_graphic2_ParamLimits

0x395a,	// (0x0002011a) aid_size_cell_graphic2

0x5de6,	// (0x000225a6) bg_popup_window_pane_cp21_ParamLimits

0x5de6,	// (0x000225a6) bg_popup_window_pane_cp21

0x398c,	// (0x0002014c) graphic2_pages_pane_ParamLimits

0x398c,	// (0x0002014c) graphic2_pages_pane

0x39d5,	// (0x00020195) grid_graphic2_control_pane_ParamLimits

0x39d5,	// (0x00020195) grid_graphic2_control_pane

0x3a03,	// (0x000201c3) grid_graphic2_pane_ParamLimits

0x3a03,	// (0x000201c3) grid_graphic2_pane

0x3a62,	// (0x00020222) cell_graphic2_pane

0x4133,	// (0x000208f3) main_comp_mode_pane

0xc079,	// (0x00028839) list_ai3_gene_pane_ParamLimits

0x2fd2,	// (0x0001f792) bg_popup_window_pane_cp19_ParamLimits

0xcec7,	// (0x00029687) bg_touch_area_indi_pane_ParamLimits

0xcec7,	// (0x00029687) bg_touch_area_indi_pane

0xcedd,	// (0x0002969d) bg_touch_area_indi_pane_cp01_ParamLimits

0xcedd,	// (0x0002969d) bg_touch_area_indi_pane_cp01

0xcef3,	// (0x000296b3) bg_touch_area_indi_pane_cp02_ParamLimits

0xcef3,	// (0x000296b3) bg_touch_area_indi_pane_cp02

0xcf09,	// (0x000296c9) bg_touch_area_indi_pane_cp03_ParamLimits

0xcf09,	// (0x000296c9) bg_touch_area_indi_pane_cp03

0xcf1f,	// (0x000296df) popup_slider_window_g1_ParamLimits

0xcf3b,	// (0x000296fb) popup_slider_window_g2_ParamLimits

0xcf57,	// (0x00029717) popup_slider_window_g3_ParamLimits

0xfcee,	// (0x0002c4ae) popup_slider_window_g_ParamLimits

0xcfb3,	// (0x00029773) popup_slider_window_t1_ParamLimits

0xd025,	// (0x000297e5) small_volume_slider_vertical_pane_ParamLimits

0x3a62,	// (0x00020222) cell_graphic2_pane_ParamLimits

0x3aab,	// (0x0002026b) bg_button_pane_cp10_ParamLimits

0x3aab,	// (0x0002026b) bg_button_pane_cp10

0x3abc,	// (0x0002027c) bg_button_pane_cp11_ParamLimits

0x3abc,	// (0x0002027c) bg_button_pane_cp11

0x3acd,	// (0x0002028d) graphic2_pages_pane_g1_ParamLimits

0x3acd,	// (0x0002028d) graphic2_pages_pane_g1

0x3ae8,	// (0x000202a8) graphic2_pages_pane_g2_ParamLimits

0x3ae8,	// (0x000202a8) graphic2_pages_pane_g2

0x0001,

0xfdb2,	// (0x0002c572) graphic2_pages_pane_g_ParamLimits

0xfdb2,	// (0x0002c572) graphic2_pages_pane_g

0x3b00,	// (0x000202c0) graphic2_pages_pane_t1_ParamLimits

0x3b00,	// (0x000202c0) graphic2_pages_pane_t1

0x3b18,	// (0x000202d8) cell_graphic2_control_pane_ParamLimits

0x3b18,	// (0x000202d8) cell_graphic2_control_pane

0x3b32,	// (0x000202f2) cell_graphic2_pane_g1_ParamLimits

0x3b32,	// (0x000202f2) cell_graphic2_pane_g1

0xe9ef,	// (0x0002b1af) cell_graphic2_pane_g2_ParamLimits

0xe9ef,	// (0x0002b1af) cell_graphic2_pane_g2

0x3b3f,	// (0x000202ff) cell_graphic2_pane_g3_ParamLimits

0x3b3f,	// (0x000202ff) cell_graphic2_pane_g3

0xe9fc,	// (0x0002b1bc) cell_graphic2_pane_g4_ParamLimits

0xe9fc,	// (0x0002b1bc) cell_graphic2_pane_g4

0x3b4c,	// (0x0002030c) cell_graphic2_pane_g5_ParamLimits

0x3b4c,	// (0x0002030c) cell_graphic2_pane_g5

0x0004,

0xfdb7,	// (0x0002c577) cell_graphic2_pane_g_ParamLimits

0xfdb7,	// (0x0002c577) cell_graphic2_pane_g

0x3b6c,	// (0x0002032c) cell_graphic2_pane_t1_ParamLimits

0x3b6c,	// (0x0002032c) cell_graphic2_pane_t1

0x9489,	// (0x00025c49) grid_highlight_pane_cp11_ParamLimits

0x9489,	// (0x00025c49) grid_highlight_pane_cp11

0x47c3,	// (0x00020f83) bg_button_pane_cp05

0x3ba1,	// (0x00020361) cell_graphic2_control_pane_g1

0xa5c8,	// (0x00026d88) bg_touch_area_indi_pane_g1

0xea09,	// (0x0002b1c9) aid_cmod_rocker_key_size

0xea13,	// (0x0002b1d3) aid_cmode_itu_key_size

0xea1d,	// (0x0002b1dd) main_cmode_video_pane

0xea25,	// (0x0002b1e5) main_comp_mode_itu_pane

0xea2f,	// (0x0002b1ef) main_comp_mode_rocker_pane

0xea37,	// (0x0002b1f7) cell_cmode_rocker_pane_ParamLimits

0xea37,	// (0x0002b1f7) cell_cmode_rocker_pane

0xea49,	// (0x0002b209) cell_cmode_itu_pane_ParamLimits

0xea49,	// (0x0002b209) cell_cmode_itu_pane

0x47c3,	// (0x00020f83) bg_button_pane_cp06_ParamLimits

0x47c3,	// (0x00020f83) bg_button_pane_cp06

0xa7f6,	// (0x00026fb6) cell_cmode_rocker_pane_g1_ParamLimits

0xa7f6,	// (0x00026fb6) cell_cmode_rocker_pane_g1

0xd0c6,	// (0x00029886) cell_cmode_rocker_pane_g2_ParamLimits

0xd0c6,	// (0x00029886) cell_cmode_rocker_pane_g2

0x0001,

0xfdc7,	// (0x0002c587) cell_cmode_rocker_pane_g_ParamLimits

0xfdc7,	// (0x0002c587) cell_cmode_rocker_pane_g

0x4133,	// (0x000208f3) bg_button_pane_cp07

0xea5e,	// (0x0002b21e) cell_cmode_itu_pane_g1

0xea67,	// (0x0002b227) cell_cmode_itu_pane_t1

0xea75,	// (0x0002b235) cell_cmode_itu_pane_t2

0x0001,

0xfdcc,	// (0x0002c58c) cell_cmode_itu_pane_t

0xd2de,	// (0x00029a9e) aid_touch_ctrl_left

0xd2e6,	// (0x00029aa6) aid_touch_ctrl_right

0x4133,	// (0x000208f3) compa_mode_pane

0x3bae,	// (0x0002036e) aid_cmod_rocker_key_size_cp

0x3bb8,	// (0x00020378) aid_cmode_itu_key_size_cp

0xea83,	// (0x0002b243) compa_mode_pane_g1

0xea8b,	// (0x0002b24b) compa_mode_pane_g2

0xea93,	// (0x0002b253) compa_mode_pane_g3

0x0002,

0xfdd1,	// (0x0002c591) compa_mode_pane_g

0x3bc2,	// (0x00020382) main_comp_mode_itu_pane_cp

0x3bcc,	// (0x0002038c) main_comp_mode_rocker_pane_cp

0x3bd6,	// (0x00020396) cell_cmode_itu_pane_cp_ParamLimits

0x3bd6,	// (0x00020396) cell_cmode_itu_pane_cp

0x3beb,	// (0x000203ab) cell_cmode_rocker_pane_cp_ParamLimits

0x3beb,	// (0x000203ab) cell_cmode_rocker_pane_cp

0x47c3,	// (0x00020f83) bg_button_pane_cp06_cp_ParamLimits

0x47c3,	// (0x00020f83) bg_button_pane_cp06_cp

0xa7f6,	// (0x00026fb6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xa7f6,	// (0x00026fb6) cell_cmode_rocker_pane_g1_cp

0xa5c8,	// (0x00026d88) cell_cmode_rocker_pane_g2_cp

0x4133,	// (0x000208f3) bg_button_pane_cp07_cp

0x3bfd,	// (0x000203bd) cell_cmode_itu_pane_g1_cp

0x3c06,	// (0x000203c6) cell_cmode_itu_pane_t1_cp

0x3c14,	// (0x000203d4) cell_cmode_itu_pane_t2_cp

0x26e3,	// (0x0001eea3) settings_code_pane_cp2

0x4223,	// (0x000209e3) bg_popup_window_pane_cp3_ParamLimits

0x455a,	// (0x00020d1a) heading_pane_cp3_ParamLimits

0x4566,	// (0x00020d26) listscroll_popup_graphic_pane_ParamLimits

0x885a,	// (0x0002501a) fep_hwr_aid_pane_ParamLimits

0x8cba,	// (0x0002547a) aid_touch_sctrl_top_ParamLimits

0x8cd5,	// (0x00025495) sctrl_sk_top_pane_g1_ParamLimits

0x8a9f,	// (0x0002525f) sctrl_sk_top_pane_g2_ParamLimits

0xfd07,	// (0x0002c4c7) sctrl_sk_top_pane_g_ParamLimits

0x8ce2,	// (0x000254a2) sctrl_sk_top_pane_t1_ParamLimits

0x8cba,	// (0x0002547a) aid_touch_sctrl_bottom_ParamLimits

0x8ce2,	// (0x000254a2) sctrl_sk_bottom_pane_t1_ParamLimits

0xd228,	// (0x000299e8) aid_area_touch_clock

0xe7a6,	// (0x0002af66) aid_vkb2_area_top_pane_cell_ParamLimits

0xe7a6,	// (0x0002af66) aid_vkb2_area_top_pane_cell

0xe851,	// (0x0002b011) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe851,	// (0x0002b011) aid_vkb2_area_bottom_pane_cell

0xe94a,	// (0x0002b10a) popup_char_count_window

0xea9b,	// (0x0002b25b) popup_char_count_window_g1

0xeaa4,	// (0x0002b264) popup_char_count_window_g2

0xeaad,	// (0x0002b26d) popup_char_count_window_g3

0x0002,

0xfdd8,	// (0x0002c598) popup_char_count_window_g

0xeab6,	// (0x0002b276) popup_char_count_window_t1

0x8d96,	// (0x00025556) popup_fep_char_preview_window_ParamLimits

0x8d96,	// (0x00025556) popup_fep_char_preview_window

0xe7c6,	// (0x0002af86) vkb2_top_candi_pane_ParamLimits

0xe7c6,	// (0x0002af86) vkb2_top_candi_pane

0x3c22,	// (0x000203e2) cell_vkb2_top_candi_pane_ParamLimits

0x3c22,	// (0x000203e2) cell_vkb2_top_candi_pane

0x9294,	// (0x00025a54) bg_popup_fep_char_preview_window_ParamLimits

0x9294,	// (0x00025a54) bg_popup_fep_char_preview_window

0x92a2,	// (0x00025a62) popup_fep_char_preview_window_t1_ParamLimits

0x92a2,	// (0x00025a62) popup_fep_char_preview_window_t1

0xeac4,	// (0x0002b284) bg_popup_fep_char_preview_window_g1

0xeacc,	// (0x0002b28c) bg_popup_fep_char_preview_window_g2

0xead4,	// (0x0002b294) bg_popup_fep_char_preview_window_g3

0xeadc,	// (0x0002b29c) bg_popup_fep_char_preview_window_g4

0xeae4,	// (0x0002b2a4) bg_popup_fep_char_preview_window_g5

0x92dc,	// (0x00025a9c) bg_popup_fep_char_preview_window_g6

0xeaec,	// (0x0002b2ac) bg_popup_fep_char_preview_window_g7

0xeaf4,	// (0x0002b2b4) bg_popup_fep_char_preview_window_g8

0xeafc,	// (0x0002b2bc) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddf,	// (0x0002c59f) bg_popup_fep_char_preview_window_g

0x8a9f,	// (0x0002525f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8a9f,	// (0x0002525f) cell_vkb2_top_candi_pane_g1

0x8aad,	// (0x0002526d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8aad,	// (0x0002526d) cell_vkb2_top_candi_pane_g2

0xe5cf,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe5cf,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g3

0x92e4,	// (0x00025aa4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x92e4,	// (0x00025aa4) cell_vkb2_top_candi_pane_g4

0xabcc,	// (0x0002738c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xabcc,	// (0x0002738c) cell_vkb2_top_candi_pane_g5

0x9305,	// (0x00025ac5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9305,	// (0x00025ac5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf2,	// (0x0002c5b2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf2,	// (0x0002c5b2) cell_vkb2_top_candi_pane_g

0x9313,	// (0x00025ad3) cell_vkb2_top_candi_pane_t1

0x8672,	// (0x00024e32) aid_size_touch_slider_mark_ParamLimits

0x8672,	// (0x00024e32) aid_size_touch_slider_mark

0x39c0,	// (0x00020180) grid_graphic2_catg_pane_ParamLimits

0x39c0,	// (0x00020180) grid_graphic2_catg_pane

0x3a37,	// (0x000201f7) popup_grid_graphic2_window_t1_ParamLimits

0x3a37,	// (0x000201f7) popup_grid_graphic2_window_t1

0x3a4c,	// (0x0002020c) popup_grid_graphic2_window_t2_ParamLimits

0x3a4c,	// (0x0002020c) popup_grid_graphic2_window_t2

0x0001,

0xfdad,	// (0x0002c56d) popup_grid_graphic2_window_t_ParamLimits

0xfdad,	// (0x0002c56d) popup_grid_graphic2_window_t

0x47c3,	// (0x00020f83) bg_button_pane_cp05_ParamLimits

0x3ba1,	// (0x00020361) cell_graphic2_control_pane_g1_ParamLimits

0xd2a4,	// (0x00029a64) cell_graphic2_catg_pane_ParamLimits

0xd2a4,	// (0x00029a64) cell_graphic2_catg_pane

0x4133,	// (0x000208f3) bg_button_pane_cp12

0x3c6c,	// (0x0002042c) cell_graphic2_catg_pane_g1

0xd1f4,	// (0x000299b4) cell_tb_ext_pane_t1_ParamLimits

0x90de,	// (0x0002589e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90de,	// (0x0002589e) vkb2_top_cell_right_narrow_pane

0x90f6,	// (0x000258b6) vkb2_top_cell_right_wide_pane_ParamLimits

0x90f6,	// (0x000258b6) vkb2_top_cell_right_wide_pane

0x884c,	// (0x0002500c) bg_vkb2_func_pane_ParamLimits

0x884c,	// (0x0002500c) bg_vkb2_func_pane

0x9167,	// (0x00025927) vkb2_top_cell_left_pane_g1_ParamLimits

0x884c,	// (0x0002500c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x884c,	// (0x0002500c) bg_vkb2_fuc_pane_cp03

0x91c5,	// (0x00025985) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5853,	// (0x00022013) bg_vkb2_func_pane_g1

0x584b,	// (0x0002200b) bg_vkb2_func_pane_g2

0x585b,	// (0x0002201b) bg_vkb2_func_pane_g3

0x5863,	// (0x00022023) bg_vkb2_func_pane_g4

0x586b,	// (0x0002202b) bg_vkb2_func_pane_g5

0x5873,	// (0x00022033) bg_vkb2_func_pane_g6

0x5883,	// (0x00022043) bg_vkb2_func_pane_g7

0x587b,	// (0x0002203b) bg_vkb2_func_pane_g8

0x5843,	// (0x00022003) bg_vkb2_func_pane_g9

0x0008,

0xfdff,	// (0x0002c5bf) bg_vkb2_func_pane_g

0x884c,	// (0x0002500c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x884c,	// (0x0002500c) bg_vkb2_fuc_pane_cp01

0x9167,	// (0x00025927) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9167,	// (0x00025927) vkb2_top_cell_right_wide_pane_g1

0x884c,	// (0x0002500c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x884c,	// (0x0002500c) bg_vkb2_fuc_pane_cp02

0x91c5,	// (0x00025985) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x91c5,	// (0x00025985) vkb2_top_cell_right_narrow_pane_g1

0x2f20,	// (0x0001f6e0) aid_touch_area_decrease_ParamLimits

0x2f20,	// (0x0001f6e0) aid_touch_area_decrease

0x2f4e,	// (0x0001f70e) aid_touch_area_increase_ParamLimits

0x2f4e,	// (0x0001f70e) aid_touch_area_increase

0x2f76,	// (0x0001f736) aid_touch_area_mute_ParamLimits

0x2f76,	// (0x0001f736) aid_touch_area_mute

0x2f9e,	// (0x0001f75e) aid_touch_area_slider_ParamLimits

0x2f9e,	// (0x0001f75e) aid_touch_area_slider

0x2fde,	// (0x0001f79e) popup_slider_window_g4_ParamLimits

0x2fde,	// (0x0001f79e) popup_slider_window_g4

0x3006,	// (0x0001f7c6) popup_slider_window_g5_ParamLimits

0x3006,	// (0x0001f7c6) popup_slider_window_g5

0x303a,	// (0x0001f7fa) popup_slider_window_g6_ParamLimits

0x303a,	// (0x0001f7fa) popup_slider_window_g6

0xcfdf,	// (0x0002979f) popup_slider_window_t2_ParamLimits

0xcfdf,	// (0x0002979f) popup_slider_window_t2

0x0001,

0xfcfb,	// (0x0002c4bb) popup_slider_window_t_ParamLimits

0xfcfb,	// (0x0002c4bb) popup_slider_window_t

0x3056,	// (0x0001f816) slider_pane_ParamLimits

0x3056,	// (0x0001f816) slider_pane

0xeb04,	// (0x0002b2c4) slider_pane_g1_ParamLimits

0xeb04,	// (0x0002b2c4) slider_pane_g1

0xeb18,	// (0x0002b2d8) slider_pane_g2_ParamLimits

0xeb18,	// (0x0002b2d8) slider_pane_g2

0xeb88,	// (0x0002b348) slider_pane_g3_ParamLimits

0xeb88,	// (0x0002b348) slider_pane_g3

0x0003,

0xfe12,	// (0x0002c5d2) slider_pane_g_ParamLimits

0xfe12,	// (0x0002c5d2) slider_pane_g

0x1d7b,	// (0x0001e53b) popup_tb_float_extension_window_ParamLimits

0x1d7b,	// (0x0001e53b) popup_tb_float_extension_window

0xebb4,	// (0x0002b374) aid_size_cell_tb_float_ext

0x4133,	// (0x000208f3) bg_popup_sub_window_cp28

0xebbf,	// (0x0002b37f) grid_tb_float_ext_pane

0xebc7,	// (0x0002b387) cell_tb_float_ext_pane_ParamLimits

0xebc7,	// (0x0002b387) cell_tb_float_ext_pane

0xebdf,	// (0x0002b39f) cell_tb_float_ext_pane_g1

0xebe8,	// (0x0002b3a8) grid_highlight_pane_cp12

0xe5ad,	// (0x0002ad6d) cell_last_hwr_side_pane_ParamLimits

0xe5ad,	// (0x0002ad6d) cell_last_hwr_side_pane

0xa5c8,	// (0x00026d88) cell_last_hwr_side_pane_g1

0xebf1,	// (0x0002b3b1) cell_last_hwr_side_pane_g2

0x0001,

0xfe1b,	// (0x0002c5db) cell_last_hwr_side_pane_g

0xe925,	// (0x0002b0e5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe925,	// (0x0002b0e5) vkb2_area_bottom_space_btn_pane

0x8a9f,	// (0x0002525f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe9dd,	// (0x0002b19d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9313,	// (0x00025ad3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9329,	// (0x00025ae9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9329,	// (0x00025ae9) vkb2_area_bottom_space_btn_pane_g1

0x935f,	// (0x00025b1f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x935f,	// (0x00025b1f) vkb2_area_bottom_space_btn_pane_g2

0x9395,	// (0x00025b55) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9395,	// (0x00025b55) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe20,	// (0x0002c5e0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe20,	// (0x0002c5e0) vkb2_area_bottom_space_btn_pane_g

0x8909,	// (0x000250c9) cel_fep_hwr_func_pane_ParamLimits

0x8909,	// (0x000250c9) cel_fep_hwr_func_pane

0xe582,	// (0x0002ad42) cell_hwr_side_button_pane_ParamLimits

0xe582,	// (0x0002ad42) cell_hwr_side_button_pane

0xd228,	// (0x000299e8) aid_area_touch_clock_ParamLimits

0x4382,	// (0x00020b42) bg_uniindi_top_pane_ParamLimits

0xd23a,	// (0x000299fa) uniindi_top_pane_g1_ParamLimits

0xd250,	// (0x00029a10) uniindi_top_pane_g2_ParamLimits

0xd25c,	// (0x00029a1c) uniindi_top_pane_g3_ParamLimits

0xd26d,	// (0x00029a2d) uniindi_top_pane_g4_ParamLimits

0xfd33,	// (0x0002c4f3) uniindi_top_pane_g_ParamLimits

0xd27a,	// (0x00029a3a) uniindi_top_pane_t1_ParamLimits

0x4382,	// (0x00020b42) bg_vkb2_func_pane_cp01_ParamLimits

0x4382,	// (0x00020b42) bg_vkb2_func_pane_cp01

0xebfa,	// (0x0002b3ba) cel_fep_hwr_func_pane_g1_ParamLimits

0xebfa,	// (0x0002b3ba) cel_fep_hwr_func_pane_g1

0x4382,	// (0x00020b42) bg_vkb2_func_pane_cp02_ParamLimits

0x4382,	// (0x00020b42) bg_vkb2_func_pane_cp02

0xebfa,	// (0x0002b3ba) cell_hwr_side_button_pane_g1_ParamLimits

0xebfa,	// (0x0002b3ba) cell_hwr_side_button_pane_g1

0x5767,	// (0x00021f27) status_pane_g4_ParamLimits

0x5767,	// (0x00021f27) status_pane_g4

0x577f,	// (0x00021f3f) status_pane_t1

0xa456,	// (0x00026c16) form2_midp_gauge_slider_cont_pane

0xa45e,	// (0x00026c1e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x29b5,	// (0x0001f175) form2_midp_gauge_slider_pane_t2_ParamLimits

0x29c7,	// (0x0001f187) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0002c2ba) form2_midp_gauge_slider_pane_t_ParamLimits

0xa470,	// (0x00026c30) form2_midp_slider_pane_ParamLimits

0x8d56,	// (0x00025516) aid_size_cell_func_vkb2_ParamLimits

0x8d56,	// (0x00025516) aid_size_cell_func_vkb2

0xeba0,	// (0x0002b360) slider_pane_g4_ParamLimits

0xeba0,	// (0x0002b360) slider_pane_g4

0xeb2e,	// (0x0002b2ee) form2_midp_gauge_slider_pane_t2_cp01

0xeb3c,	// (0x0002b2fc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb3c,	// (0x0002b2fc) form2_midp_gauge_slider_pane_t3_cp01

0x9406,	// (0x00025bc6) form2_midp_slider_pane_cp01

0x4133,	// (0x000208f3) navi_smil_pane

0xec2a,	// (0x0002b3ea) navi_smil_pane_g1

0xec32,	// (0x0002b3f2) navi_smil_pane_t1

0xec08,	// (0x0002b3c8) form2_midp_slider_pane_g1

0xec11,	// (0x0002b3d1) form2_midp_slider_pane_g2

0xec19,	// (0x0002b3d9) form2_midp_slider_pane_g3

0xec08,	// (0x0002b3c8) form2_midp_slider_pane_g4

0x3ca0,	// (0x00020460) form2_midp_slider_pane_g5

0x0004,

0xfe29,	// (0x0002c5e9) form2_midp_slider_pane_g

0x93cb,	// (0x00025b8b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x93cb,	// (0x00025b8b) vkb2_area_bottom_space_btn_pane_g4

0x1f1d,	// (0x0001e6dd) lc0_navi_pane_ParamLimits

0x1f1d,	// (0x0001e6dd) lc0_navi_pane

0x1f87,	// (0x0001e747) lc0_stat_indi_pane_ParamLimits

0x1f87,	// (0x0001e747) lc0_stat_indi_pane

0x1f9c,	// (0x0001e75c) ls0_title_pane_ParamLimits

0x1f9c,	// (0x0001e75c) ls0_title_pane

0x47c3,	// (0x00020f83) bg_popup_sub_pane_cp14_ParamLimits

0xd20f,	// (0x000299cf) list_uniindi_pane_ParamLimits

0xd21b,	// (0x000299db) uniindi_top_pane_ParamLimits

0xd2b6,	// (0x00029a76) list_single_uniindi_pane_g1_ParamLimits

0xd2c9,	// (0x00029a89) list_single_uniindi_pane_t1_ParamLimits

0xeb59,	// (0x0002b319) lc0_stat_clock_pane_ParamLimits

0xeb59,	// (0x0002b319) lc0_stat_clock_pane

0x3cc3,	// (0x00020483) lc0_stat_indi_pane_g1_ParamLimits

0x3cc3,	// (0x00020483) lc0_stat_indi_pane_g1

0x3cb6,	// (0x00020476) lc0_stat_indi_pane_g2_ParamLimits

0x3cb6,	// (0x00020476) lc0_stat_indi_pane_g2

0x0001,

0xfe34,	// (0x0002c5f4) lc0_stat_indi_pane_g_ParamLimits

0xfe34,	// (0x0002c5f4) lc0_stat_indi_pane_g

0xeb66,	// (0x0002b326) lc0_uni_indicator_pane_ParamLimits

0xeb66,	// (0x0002b326) lc0_uni_indicator_pane

0xec40,	// (0x0002b400) ls0_title_pane_g1_ParamLimits

0xec40,	// (0x0002b400) ls0_title_pane_g1

0x3cdd,	// (0x0002049d) ls0_title_pane_t1_ParamLimits

0x3cdd,	// (0x0002049d) ls0_title_pane_t1

0xeb73,	// (0x0002b333) lc0_uni_indicator_pane_g1_ParamLimits

0xeb73,	// (0x0002b333) lc0_uni_indicator_pane_g1

0xec54,	// (0x0002b414) lc0_stat_clock_pane_t1

0x4133,	// (0x000208f3) main_ai5_pane

0xec62,	// (0x0002b422) ai5_sk_pane_ParamLimits

0xec62,	// (0x0002b422) ai5_sk_pane

0x3d20,	// (0x000204e0) cell_ai5_widget_pane_ParamLimits

0x3d20,	// (0x000204e0) cell_ai5_widget_pane

0xec6f,	// (0x0002b42f) aid_size_cell_widget_grid

0xec81,	// (0x0002b441) bg_ai5_widget_pane_ParamLimits

0xec81,	// (0x0002b441) bg_ai5_widget_pane

0x3da1,	// (0x00020561) cell_ai5_widget_pane_g2

0x3db1,	// (0x00020571) cell_ai5_widget_pane_g3

0x3dd0,	// (0x00020590) cell_ai5_widget_pane_g4

0x3ddc,	// (0x0002059c) cell_ai5_widget_pane_g5

0x3de8,	// (0x000205a8) cell_ai5_widget_pane_g6

0x3df4,	// (0x000205b4) cell_ai5_widget_pane_g7

0x3e3c,	// (0x000205fc) cell_ai5_widget_pane_t1_ParamLimits

0x3e3c,	// (0x000205fc) cell_ai5_widget_pane_t1

0x3e59,	// (0x00020619) cell_ai5_widget_pane_t2_ParamLimits

0x3e59,	// (0x00020619) cell_ai5_widget_pane_t2

0x3e71,	// (0x00020631) cell_ai5_widget_pane_t3_ParamLimits

0x3e71,	// (0x00020631) cell_ai5_widget_pane_t3

0x3e89,	// (0x00020649) cell_ai5_widget_pane_t4_ParamLimits

0x3e89,	// (0x00020649) cell_ai5_widget_pane_t4

0x3ea3,	// (0x00020663) cell_ai5_widget_pane_t5_ParamLimits

0x3ea3,	// (0x00020663) cell_ai5_widget_pane_t5

0xec8d,	// (0x0002b44d) cell_ai5_widget_pane_t6_ParamLimits

0xec8d,	// (0x0002b44d) cell_ai5_widget_pane_t6

0xec9f,	// (0x0002b45f) cell_ai5_widget_pane_t7_ParamLimits

0xec9f,	// (0x0002b45f) cell_ai5_widget_pane_t7

0x3ec2,	// (0x00020682) cell_ai5_widget_pane_t8_ParamLimits

0x3ec2,	// (0x00020682) cell_ai5_widget_pane_t8

0x0009,

0xfe4e,	// (0x0002c60e) cell_ai5_widget_pane_t_ParamLimits

0xfe4e,	// (0x0002c60e) cell_ai5_widget_pane_t

0x3f0d,	// (0x000206cd) grid_ai5_widget_pane

0x47c3,	// (0x00020f83) highlight_cell_ai5_widget_pane_ParamLimits

0x47c3,	// (0x00020f83) highlight_cell_ai5_widget_pane

0x3f21,	// (0x000206e1) ai5_sk_left_pane

0x3f2b,	// (0x000206eb) ai5_sk_middle_pane

0x3f35,	// (0x000206f5) ai5_sk_right_pane

0xecb8,	// (0x0002b478) bg_ai5_widget_pane_g1_ParamLimits

0xecb8,	// (0x0002b478) bg_ai5_widget_pane_g1

0xecc4,	// (0x0002b484) bg_ai5_widget_pane_g2_ParamLimits

0xecc4,	// (0x0002b484) bg_ai5_widget_pane_g2

0xecd0,	// (0x0002b490) bg_ai5_widget_pane_g3_ParamLimits

0xecd0,	// (0x0002b490) bg_ai5_widget_pane_g3

0xecdc,	// (0x0002b49c) bg_ai5_widget_pane_g4_ParamLimits

0xecdc,	// (0x0002b49c) bg_ai5_widget_pane_g4

0xece8,	// (0x0002b4a8) bg_ai5_widget_pane_g5_ParamLimits

0xece8,	// (0x0002b4a8) bg_ai5_widget_pane_g5

0xecf4,	// (0x0002b4b4) bg_ai5_widget_pane_g6_ParamLimits

0xecf4,	// (0x0002b4b4) bg_ai5_widget_pane_g6

0xed00,	// (0x0002b4c0) bg_ai5_widget_pane_g7_ParamLimits

0xed00,	// (0x0002b4c0) bg_ai5_widget_pane_g7

0xed0c,	// (0x0002b4cc) bg_ai5_widget_pane_g8_ParamLimits

0xed0c,	// (0x0002b4cc) bg_ai5_widget_pane_g8

0xed18,	// (0x0002b4d8) bg_ai5_widget_pane_g9_ParamLimits

0xed18,	// (0x0002b4d8) bg_ai5_widget_pane_g9

0x0008,

0xfe63,	// (0x0002c623) bg_ai5_widget_pane_g_ParamLimits

0xfe63,	// (0x0002c623) bg_ai5_widget_pane_g

0xed4a,	// (0x0002b50a) cell_shortcut_ai5_widget_pane_ParamLimits

0xed4a,	// (0x0002b50a) cell_shortcut_ai5_widget_pane

0x428b,	// (0x00020a4b) bg_cell_shortcut_ai5_widget_pane

0xed56,	// (0x0002b516) cell_grid_ai5_widget_pane_g1

0xed5f,	// (0x0002b51f) highlight_cell_shortcut_ai5_widget_pane

0x5853,	// (0x00022013) ai5_sk_left_pane_g1

0xed67,	// (0x0002b527) ai5_sk_left_pane_g2

0xed6f,	// (0x0002b52f) ai5_sk_left_pane_g3

0xed77,	// (0x0002b537) ai5_sk_left_pane_g4

0x0003,

0xfe76,	// (0x0002c636) ai5_sk_left_pane_g

0xed7f,	// (0x0002b53f) ai5_sk_left_pane_t1

0x584b,	// (0x0002200b) ai5_sk_right_pane_g1

0xed8d,	// (0x0002b54d) ai5_sk_right_pane_g2

0xed95,	// (0x0002b555) ai5_sk_right_pane_g3

0xed9d,	// (0x0002b55d) ai5_sk_right_pane_g4

0x0003,

0xfe7f,	// (0x0002c63f) ai5_sk_right_pane_g

0xeda5,	// (0x0002b565) ai5_sk_right_pane_t1

0x584b,	// (0x0002200b) ai5_sk_middle_pane_g1

0x5853,	// (0x00022013) ai5_sk_middle_pane_g2

0x586b,	// (0x0002202b) ai5_sk_middle_pane_g3

0xed95,	// (0x0002b555) ai5_sk_middle_pane_g4

0xed6f,	// (0x0002b52f) ai5_sk_middle_pane_g5

0xedb3,	// (0x0002b573) ai5_sk_middle_pane_g6

0x3f3f,	// (0x000206ff) ai5_sk_middle_pane_g7

0x0006,

0xfe88,	// (0x0002c648) ai5_sk_middle_pane_g

0x1e1b,	// (0x0001e5db) aid_touch_area_size_lc0_ParamLimits

0x1e1b,	// (0x0001e5db) aid_touch_area_size_lc0

0x8ace,	// (0x0002528e) cell_hwr_candidate_pane_t1_ParamLimits

0x569c,	// (0x00021e5c) aid_touch_navi_pane

0x2088,	// (0x0001e848) status_dt_navi_pane_ParamLimits

0x2088,	// (0x0001e848) status_dt_navi_pane

0x20a0,	// (0x0001e860) status_dt_sta_pane_ParamLimits

0x20a0,	// (0x0001e860) status_dt_sta_pane

0x3f47,	// (0x00020707) dt_sta_controll_pane

0x3f54,	// (0x00020714) dt_sta_indi_pane

0x3f61,	// (0x00020721) dt_sta_title_pane

0x4382,	// (0x00020b42) bg_dt_sta_indi_pane_ParamLimits

0x4382,	// (0x00020b42) bg_dt_sta_indi_pane

0x3f73,	// (0x00020733) dt_sta_battery_pane

0x3f7b,	// (0x0002073b) dt_sta_indi_pane_g1

0x3f84,	// (0x00020744) dt_sta_indi_pane_g2

0x3f8d,	// (0x0002074d) dt_sta_indi_pane_g3

0x0002,

0xfe97,	// (0x0002c657) dt_sta_indi_pane_g

0x3f96,	// (0x00020756) dt_sta_signal_pane

0x47c3,	// (0x00020f83) bg_dt_sta_title_pane_ParamLimits

0x47c3,	// (0x00020f83) bg_dt_sta_title_pane

0x3f9f,	// (0x0002075f) dt_sta_title_pane_g1

0x3fa7,	// (0x00020767) dt_sta_title_pane_t1_ParamLimits

0x3fa7,	// (0x00020767) dt_sta_title_pane_t1

0x4133,	// (0x000208f3) bg_dt_sta_control_pane

0x3fbc,	// (0x0002077c) dt_sta_controll_pane_g1

0x3fc5,	// (0x00020785) bg_dt_sta_title_pane_g1

0x3fce,	// (0x0002078e) bg_dt_sta_title_pane_g2

0x3fd7,	// (0x00020797) bg_dt_sta_title_pane_g3

0x0002,

0xfe9e,	// (0x0002c65e) bg_dt_sta_title_pane_g

0xa5c8,	// (0x00026d88) bg_dt_sta_indi_pane_g1

0x3fe0,	// (0x000207a0) dt_sta_signal_pane_g1

0x3fe8,	// (0x000207a8) dt_sta_signal_pane_g2

0x0001,

0xfea5,	// (0x0002c665) dt_sta_signal_pane_g

0xedbb,	// (0x0002b57b) dt_sta_battery_pane_g1

0xedc4,	// (0x0002b584) dt_sta_battery_pane_t1

0xa5c8,	// (0x00026d88) bg_dt_sta_control_pane_g1

0x4efd,	// (0x000216bd) fep_china_uni_eep_pane

0x4f05,	// (0x000216c5) fep_china_uni_entry_pane_ParamLimits

0x4f15,	// (0x000216d5) popup_fep_china_uni_window_g1_ParamLimits

0x4f25,	// (0x000216e5) popup_fep_china_uni_window_g2_ParamLimits

0x4f25,	// (0x000216e5) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002bef5) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002bef5) popup_fep_china_uni_window_g

0xedd3,	// (0x0002b593) fep_china_uni_eep_pane_g1

0xeddb,	// (0x0002b59b) fep_china_uni_eep_pane_t1

0xec21,	// (0x0002b3e1) aid_touch_area_size_smil_player

0x573a,	// (0x00021efa) lc0_clock_pane

0x5773,	// (0x00021f33) status_pane_g5_ParamLimits

0x5773,	// (0x00021f33) status_pane_g5

0x19af,	// (0x0001e16f) popup_keymap_window

0x5753,	// (0x00021f13) status_icon_pane

0x3db1,	// (0x00020571) cell_ai5_widget_pane_g3_ParamLimits

0x3dd0,	// (0x00020590) cell_ai5_widget_pane_g4_ParamLimits

0x3ddc,	// (0x0002059c) cell_ai5_widget_pane_g5_ParamLimits

0x3e00,	// (0x000205c0) cell_ai5_widget_pane_g8_ParamLimits

0x3e00,	// (0x000205c0) cell_ai5_widget_pane_g8

0x3e14,	// (0x000205d4) cell_ai5_widget_pane_g9_ParamLimits

0x3e14,	// (0x000205d4) cell_ai5_widget_pane_g9

0x3e28,	// (0x000205e8) cell_ai5_widget_pane_g10_ParamLimits

0x3e28,	// (0x000205e8) cell_ai5_widget_pane_g10

0xedea,	// (0x0002b5aa) status_icon_pane_g1

0x4133,	// (0x000208f3) bg_popup_sub_pane_cp13

0xedf2,	// (0x0002b5b2) popup_keymap_window_t1

0x173a,	// (0x0001defa) control_pane_g6_ParamLimits

0x173a,	// (0x0001defa) control_pane_g6

0x172d,	// (0x0001deed) control_pane_g7_ParamLimits

0x172d,	// (0x0001deed) control_pane_g7

0x1720,	// (0x0001dee0) control_pane_g8_ParamLimits

0x1720,	// (0x0001dee0) control_pane_g8

0x3f47,	// (0x00020707) dt_sta_controll_pane_ParamLimits

0x3f54,	// (0x00020714) dt_sta_indi_pane_ParamLimits

0x3f61,	// (0x00020721) dt_sta_title_pane_ParamLimits

0x4714,	// (0x00020ed4) aid_size_touch_scroll_bar_cale

0x6f58,	// (0x00023718) popup_discreet_window_ParamLimits

0x6f58,	// (0x00023718) popup_discreet_window

0xe1b8,	// (0x0002a978) popup_sk_window

0x5de6,	// (0x000225a6) bg_popup_sub_pane_cp28_ParamLimits

0x5de6,	// (0x000225a6) bg_popup_sub_pane_cp28

0xee00,	// (0x0002b5c0) popup_discreet_window_g1_ParamLimits

0xee00,	// (0x0002b5c0) popup_discreet_window_g1

0xee20,	// (0x0002b5e0) popup_discreet_window_t1_ParamLimits

0xee20,	// (0x0002b5e0) popup_discreet_window_t1

0xee3e,	// (0x0002b5fe) popup_discreet_window_t2_ParamLimits

0xee3e,	// (0x0002b5fe) popup_discreet_window_t2

0x0002,

0xfeaa,	// (0x0002c66a) popup_discreet_window_t_ParamLimits

0xfeaa,	// (0x0002c66a) popup_discreet_window_t

0x943b,	// (0x00025bfb) popup_sk_window_g1

0x9444,	// (0x00025c04) popup_sk_window_g2

0x0001,

0xfeb1,	// (0x0002c671) popup_sk_window_g

0xee90,	// (0x0002b650) popup_sk_window_t1

0xee9e,	// (0x0002b65e) popup_sk_window_t1_copy1

0x3da1,	// (0x00020561) cell_ai5_widget_pane_g2_ParamLimits

0x3ed4,	// (0x00020694) cell_ai5_widget_pane_t9_ParamLimits

0x3ed4,	// (0x00020694) cell_ai5_widget_pane_t9

0x4133,	// (0x000208f3) main_fep_fshwr2_pane

0x3ff0,	// (0x000207b0) aid_fshwr2_btn_pane

0x3ff8,	// (0x000207b8) aid_fshwr2_syb_pane

0x4000,	// (0x000207c0) aid_fshwr2_txt_pane

0x4008,	// (0x000207c8) fshwr2_func_candi_pane

0x4010,	// (0x000207d0) fshwr2_hwr_syb_pane

0x4018,	// (0x000207d8) fshwr2_icf_pane

0x4133,	// (0x000208f3) fshwr2_icf_bg_pane

0x4020,	// (0x000207e0) fshwr2_icf_pane_t1_ParamLimits

0x4020,	// (0x000207e0) fshwr2_icf_pane_t1

0xa5c8,	// (0x00026d88) fshwr2_func_candi_pane_g1

0xeebe,	// (0x0002b67e) fshwr2_func_candi_row_pane_ParamLimits

0xeebe,	// (0x0002b67e) fshwr2_func_candi_row_pane

0x4038,	// (0x000207f8) cell_fshwr2_syb_pane_ParamLimits

0x4038,	// (0x000207f8) cell_fshwr2_syb_pane

0xa7f6,	// (0x00026fb6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xa7f6,	// (0x00026fb6) fshwr2_hwr_syb_pane_g1

0x4133,	// (0x000208f3) bg_popup_call_pane_cp01

0xeecf,	// (0x0002b68f) fshwr2_func_candi_cell_pane_ParamLimits

0xeecf,	// (0x0002b68f) fshwr2_func_candi_cell_pane

0xeefa,	// (0x0002b6ba) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeefa,	// (0x0002b6ba) fshwr2_func_candi_cell_bg_pane

0xef14,	// (0x0002b6d4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xef14,	// (0x0002b6d4) fshwr2_func_candi_cell_pane_g1

0xef34,	// (0x0002b6f4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xef34,	// (0x0002b6f4) fshwr2_func_candi_cell_pane_t1

0x4133,	// (0x000208f3) bg_button_pane_cp08

0x532d,	// (0x00021aed) cell_fshwr2_syb_bg_pane

0x404f,	// (0x0002080f) cell_fshwr2_syb_bg_pane_g1

0x4057,	// (0x00020817) cell_fshwr2_syb_bg_pane_t1

0x47c3,	// (0x00020f83) main_tmo_pane

0x24f2,	// (0x0001ecb2) uni_indicator_pane_g1_ParamLimits

0x2507,	// (0x0001ecc7) uni_indicator_pane_g2_ParamLimits

0x251d,	// (0x0001ecdd) uni_indicator_pane_g3_ParamLimits

0x9862,	// (0x00026022) uni_indicator_pane_g4_ParamLimits

0x9862,	// (0x00026022) uni_indicator_pane_g4

0x9876,	// (0x00026036) uni_indicator_pane_g5_ParamLimits

0x9876,	// (0x00026036) uni_indicator_pane_g5

0x988a,	// (0x0002604a) uni_indicator_pane_g6_ParamLimits

0x988a,	// (0x0002604a) uni_indicator_pane_g6

0xf926,	// (0x0002c0e6) uni_indicator_pane_g_ParamLimits

0x2f04,	// (0x0001f6c4) popup_tmo_note_window_ParamLimits

0x2f04,	// (0x0001f6c4) popup_tmo_note_window

0x4133,	// (0x000208f3) fshwr2_bg_pane

0xef25,	// (0x0002b6e5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xef25,	// (0x0002b6e5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb6,	// (0x0002c676) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb6,	// (0x0002c676) fshwr2_func_candi_cell_pane_g

0xa5c8,	// (0x00026d88) bg_popup_window_pane_cp01

0xef47,	// (0x0002b707) bg_popup_window_pane_g1_cp01

0xef50,	// (0x0002b710) bg_popup_window_pane_cp22_ParamLimits

0xef50,	// (0x0002b710) bg_popup_window_pane_cp22

0xef5e,	// (0x0002b71e) listscroll_tmo_link_pane_ParamLimits

0xef5e,	// (0x0002b71e) listscroll_tmo_link_pane

0xef9e,	// (0x0002b75e) popup_tmo_note_window_g1_ParamLimits

0xef9e,	// (0x0002b75e) popup_tmo_note_window_g1

0xefab,	// (0x0002b76b) tmo_note_info_pane_ParamLimits

0xefab,	// (0x0002b76b) tmo_note_info_pane

0x4066,	// (0x00020826) list_tmo_note_info_pane_g1_ParamLimits

0x4066,	// (0x00020826) list_tmo_note_info_pane_g1

0xefc5,	// (0x0002b785) list_tmo_note_info_pane_g2_ParamLimits

0xefc5,	// (0x0002b785) list_tmo_note_info_pane_g2

0x0001,

0xfebb,	// (0x0002c67b) list_tmo_note_info_pane_g_ParamLimits

0xfebb,	// (0x0002c67b) list_tmo_note_info_pane_g

0xefe1,	// (0x0002b7a1) list_tmo_note_info_text_pane_ParamLimits

0xefe1,	// (0x0002b7a1) list_tmo_note_info_text_pane

0xf023,	// (0x0002b7e3) list_tmo_link_pane

0xf030,	// (0x0002b7f0) scroll_pane_cp20

0xf03d,	// (0x0002b7fd) list_single_tmo_link_pane_ParamLimits

0xf03d,	// (0x0002b7fd) list_single_tmo_link_pane

0xf04d,	// (0x0002b80d) list_single_tmo_link_pane_t1

0xf05b,	// (0x0002b81b) list_tmo_note_info_text_pane_t1_ParamLimits

0xf05b,	// (0x0002b81b) list_tmo_note_info_text_pane_t1

0x4891,	// (0x00021051) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4891,	// (0x00021051) aid_size_touch_scroll_bar_cp01

0x0ab8,	// (0x0001d278) aid_size_touch_slider_marker

0xe1ac,	// (0x0002a96c) popup_settings_window_ParamLimits

0xe1ac,	// (0x0002a96c) popup_settings_window

0xb745,	// (0x00027f05) popup_candi_list_indi_window

0x569c,	// (0x00021e5c) aid_touch_navi_pane_ParamLimits

0x8c8e,	// (0x0002544e) rs_clock_indi_pane

0x8c97,	// (0x00025457) sctrl_sk_bottom_pane_ParamLimits

0x8ca8,	// (0x00025468) sctrl_sk_top_pane_ParamLimits

0x8db0,	// (0x00025570) popup_fep_tooltip_window

0xec6f,	// (0x0002b42f) aid_size_cell_widget_grid_ParamLimits

0x3d95,	// (0x00020555) cell_ai5_widget_pane_g1_ParamLimits

0x3d95,	// (0x00020555) cell_ai5_widget_pane_g1

0x3de8,	// (0x000205a8) cell_ai5_widget_pane_g6_ParamLimits

0x3df4,	// (0x000205b4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe39,	// (0x0002c5f9) cell_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0002c5f9) cell_ai5_widget_pane_g

0x3ef8,	// (0x000206b8) cell_ai5_widget_pane_t10_ParamLimits

0x3ef8,	// (0x000206b8) cell_ai5_widget_pane_t10

0x3f0d,	// (0x000206cd) grid_ai5_widget_pane_ParamLimits

0xed24,	// (0x0002b4e4) cell_contacts_ai5_widget_pane_ParamLimits

0xed24,	// (0x0002b4e4) cell_contacts_ai5_widget_pane

0xee53,	// (0x0002b613) popup_discreet_window_t3_ParamLimits

0xee53,	// (0x0002b613) popup_discreet_window_t3

0xeeac,	// (0x0002b66c) popup_fshwr2_char_preview_window_ParamLimits

0xeeac,	// (0x0002b66c) popup_fshwr2_char_preview_window

0x407d,	// (0x0002083d) tmo_note_info_pane_t1

0x4092,	// (0x00020852) tmo_note_info_pane_t2

0x40a7,	// (0x00020867) tmo_note_info_pane_t3

0xefff,	// (0x0002b7bf) tmo_note_info_pane_t4

0xf011,	// (0x0002b7d1) tmo_note_info_pane_t5

0x0004,

0xfec0,	// (0x0002c680) tmo_note_info_pane_t

0xf023,	// (0x0002b7e3) list_tmo_link_pane_ParamLimits

0xf030,	// (0x0002b7f0) scroll_pane_cp20_ParamLimits

0x4133,	// (0x000208f3) bg_popup_fep_char_preview_window_cp01

0xf074,	// (0x0002b834) popup_fshwr2_char_preview_window_t1

0xf082,	// (0x0002b842) popup_candi_list_indi_window_g1

0xf08b,	// (0x0002b84b) bg_cell_contacts_ai5_widget_pane

0xf097,	// (0x0002b857) cell_contacts_ai5_widget_pane_g1

0xf0ab,	// (0x0002b86b) cell_contacts_ai5_widget_pane_g2

0xf0ba,	// (0x0002b87a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecb,	// (0x0002c68b) cell_contacts_ai5_widget_pane_g

0xf0cd,	// (0x0002b88d) cell_contacts_ai5_widget_pane_t1

0x47c3,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01

0x411f,	// (0x000208df) settings_container_pane

0x532d,	// (0x00021aed) listscroll_set_pane_copy1

0x9fae,	// (0x0002676e) scroll_pane_cp121_copy1

0xf0e2,	// (0x0002b8a2) set_content_pane_copy1

0xf0ea,	// (0x0002b8aa) aid_height_set_list_copy1_ParamLimits

0xf0ea,	// (0x0002b8aa) aid_height_set_list_copy1

0x9a23,	// (0x000261e3) aid_size_parent_copy1_ParamLimits

0x9a23,	// (0x000261e3) aid_size_parent_copy1

0xf0f6,	// (0x0002b8b6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0f6,	// (0x0002b8b6) button_value_adjust_pane_cp6_copy1

0x4cd5,	// (0x00021495) list_highlight_pane_cp2_copy1_ParamLimits

0x4cd5,	// (0x00021495) list_highlight_pane_cp2_copy1

0x4b3c,	// (0x000212fc) list_set_pane_copy1_ParamLimits

0x4b3c,	// (0x000212fc) list_set_pane_copy1

0x40bc,	// (0x0002087c) main_pane_set_t1_copy1_ParamLimits

0x40bc,	// (0x0002087c) main_pane_set_t1_copy1

0x40f6,	// (0x000208b6) main_pane_set_t2_copy1_ParamLimits

0x40f6,	// (0x000208b6) main_pane_set_t2_copy1

0xf10a,	// (0x0002b8ca) main_pane_set_t3_copy1

0xf118,	// (0x0002b8d8) main_pane_set_t4_copy1

0x4113,	// (0x000208d3) set_content_pane_g1_copy1_ParamLimits

0x4113,	// (0x000208d3) set_content_pane_g1_copy1

0xf126,	// (0x0002b8e6) setting_code_pane_copy1

0xf12e,	// (0x0002b8ee) setting_slider_graphic_pane_copy1

0xf12e,	// (0x0002b8ee) setting_slider_pane_copy1

0xf12e,	// (0x0002b8ee) setting_text_pane_copy1

0xf12e,	// (0x0002b8ee) setting_volume_pane_copy1

0xf136,	// (0x0002b8f6) settings_code_pane_cp2_copy1

0xf13e,	// (0x0002b8fe) settings_code_pane_cp_copy1_ParamLimits

0xf13e,	// (0x0002b8fe) settings_code_pane_cp_copy1

0x4bca,	// (0x0002138a) volume_set_pane_copy1

0x4bd2,	// (0x00021392) volume_set_pane_g10_copy1

0x4bda,	// (0x0002139a) volume_set_pane_g1_copy1

0x4be2,	// (0x000213a2) volume_set_pane_g2_copy1

0x4bea,	// (0x000213aa) volume_set_pane_g3_copy1

0x4bf2,	// (0x000213b2) volume_set_pane_g4_copy1

0x4bfa,	// (0x000213ba) volume_set_pane_g5_copy1

0x4c02,	// (0x000213c2) volume_set_pane_g6_copy1

0x4c0a,	// (0x000213ca) volume_set_pane_g7_copy1

0x4c12,	// (0x000213d2) volume_set_pane_g8_copy1

0x4c1a,	// (0x000213da) volume_set_pane_g9_copy1

0x4223,	// (0x000209e3) bg_set_opt_pane_cp_copy1_ParamLimits

0x4223,	// (0x000209e3) bg_set_opt_pane_cp_copy1

0x4231,	// (0x000209f1) setting_slider_pane_t1_copy1_ParamLimits

0x4231,	// (0x000209f1) setting_slider_pane_t1_copy1

0xf152,	// (0x0002b912) setting_slider_pane_t2_copy1_ParamLimits

0xf152,	// (0x0002b912) setting_slider_pane_t2_copy1

0xf16b,	// (0x0002b92b) setting_slider_pane_t3_copy1_ParamLimits

0xf16b,	// (0x0002b92b) setting_slider_pane_t3_copy1

0x4247,	// (0x00020a07) slider_set_pane_copy1_ParamLimits

0x4247,	// (0x00020a07) slider_set_pane_copy1

0x481e,	// (0x00020fde) set_opt_bg_pane_g1_copy2

0x4826,	// (0x00020fe6) set_opt_bg_pane_g2_copy2

0xf182,	// (0x0002b942) set_opt_bg_pane_g3_copy2

0x4836,	// (0x00020ff6) set_opt_bg_pane_g4_copy2

0x483e,	// (0x00020ffe) set_opt_bg_pane_g5_copy2

0x4846,	// (0x00021006) set_opt_bg_pane_g6_copy2

0x4c22,	// (0x000213e2) set_opt_bg_pane_g7_copy2

0xf18a,	// (0x0002b94a) set_opt_bg_pane_g8_copy2

0xf192,	// (0x0002b952) set_opt_bg_pane_g9_copy2

0xafb0,	// (0x00027770) aid_size_touch_slider_mark_copy1_ParamLimits

0xafb0,	// (0x00027770) aid_size_touch_slider_mark_copy1

0x9a35,	// (0x000261f5) slider_set_pane_g1_copy1

0x9a3e,	// (0x000261fe) slider_set_pane_g2_copy1

0xafc4,	// (0x00027784) slider_set_pane_g3_copy1_ParamLimits

0xafc4,	// (0x00027784) slider_set_pane_g3_copy1

0xafd8,	// (0x00027798) slider_set_pane_g4_copy1_ParamLimits

0xafd8,	// (0x00027798) slider_set_pane_g4_copy1

0xaff0,	// (0x000277b0) slider_set_pane_g5_copy1_ParamLimits

0xaff0,	// (0x000277b0) slider_set_pane_g5_copy1

0xafc4,	// (0x00027784) slider_set_pane_g6_copy1_ParamLimits

0xafc4,	// (0x00027784) slider_set_pane_g6_copy1

0x4c2a,	// (0x000213ea) slider_set_pane_g7_copy1_ParamLimits

0x4c2a,	// (0x000213ea) slider_set_pane_g7_copy1

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp2_copy1

0x425d,	// (0x00020a1d) setting_slider_graphic_pane_g1_copy1

0x4c40,	// (0x00021400) setting_slider_graphic_pane_t1_copy1

0x4c4f,	// (0x0002140f) setting_slider_graphic_pane_t2_copy1

0x4c5e,	// (0x0002141e) slider_set_pane_cp_copy1

0xf1a2,	// (0x0002b962) input_focus_pane_cp1_copy1

0xf1ab,	// (0x0002b96b) list_set_text_pane_copy1

0xf1b3,	// (0x0002b973) setting_text_pane_g1_copy1

0xc749,	// (0x00028f09) set_text_pane_t1_copy1

0xf1a2,	// (0x0002b962) input_focus_pane_cp2_copy1

0xf1b3,	// (0x0002b973) setting_code_pane_g1_copy1

0xf1bc,	// (0x0002b97c) setting_code_pane_t1_copy1

0x162f,	// (0x0001ddef) list_set_graphic_pane_copy1

0x41bf,	// (0x0002097f) bg_set_opt_pane_cp4_copy1

0xf1ca,	// (0x0002b98a) list_set_graphic_pane_g1_copy1_ParamLimits

0xf1ca,	// (0x0002b98a) list_set_graphic_pane_g1_copy1

0xf1d6,	// (0x0002b996) list_set_graphic_pane_g2_copy1

0x50a8,	// (0x00021868) list_set_graphic_pane_t1_copy1_ParamLimits

0x50a8,	// (0x00021868) list_set_graphic_pane_t1_copy1

0xa5c8,	// (0x00026d88) rs_clock_indi_pane_g1

0xf1de,	// (0x0002b99e) rs_clock_indi_pane_t1

0xf1ec,	// (0x0002b9ac) rs_indi_pane

0xf1f4,	// (0x0002b9b4) rs_indi_pane_g1

0xf1fd,	// (0x0002b9bd) rs_indi_pane_g2

0xf082,	// (0x0002b842) rs_indi_pane_g3

0x0002,

0xfed2,	// (0x0002c692) rs_indi_pane_g

0x532d,	// (0x00021aed) bg_popup_preview_window_pane_cp03

0xf206,	// (0x0002b9c6) popup_fep_tooltip_window_t1

0xaf0b,	// (0x000276cb) popup_note2_window_g2_ParamLimits

0xaf0b,	// (0x000276cb) popup_note2_window_g2

0x0001,

0xfc72,	// (0x0002c432) popup_note2_window_g_ParamLimits

0xfc72,	// (0x0002c432) popup_note2_window_g

0xc03f,	// (0x000287ff) bg_popup_sub_pane_cp11_ParamLimits

0xc04c,	// (0x0002880c) cell_ai3_links_pane_g1_ParamLimits

0xc063,	// (0x00028823) cell_ai3_links_pane_t1

0xc749,	// (0x00028f09) set_text_pane_t1_copy1_ParamLimits

0x5254,	// (0x00021a14) cell_graphic_popup_pane_cp2_ParamLimits

0x5254,	// (0x00021a14) cell_graphic_popup_pane_cp2

0xf214,	// (0x0002b9d4) cell_graphic_popup_pane_g1_cp2

0x45c3,	// (0x00020d83) cell_graphic_popup_pane_g2_cp2

0xf21c,	// (0x0002b9dc) cell_graphic_popup_pane_g3_cp2

0xf224,	// (0x0002b9e4) cell_graphic_popup_pane_t2_cp2

0x45d4,	// (0x00020d94) grid_highlight_pane_cp3_cp2

0x4b04,	// (0x000212c4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x47c3,	// (0x00020f83) main_tmo_pane_ParamLimits

0x2efc,	// (0x0001f6bc) popup_tmo_big_image_note_window

0x3d85,	// (0x00020545) cell_ai5_widget_list_pane

0x3d8d,	// (0x0002054d) cell_ai5_widget_lrg_icon_pane

0x407d,	// (0x0002083d) tmo_note_info_pane_t1_ParamLimits

0x4092,	// (0x00020852) tmo_note_info_pane_t2_ParamLimits

0x40a7,	// (0x00020867) tmo_note_info_pane_t3_ParamLimits

0xefff,	// (0x0002b7bf) tmo_note_info_pane_t4_ParamLimits

0xf011,	// (0x0002b7d1) tmo_note_info_pane_t5_ParamLimits

0xfec0,	// (0x0002c680) tmo_note_info_pane_t_ParamLimits

0x411f,	// (0x000208df) settings_container_pane_ParamLimits

0xf19a,	// (0x0002b95a) indicator_popup_pane_cp5

0xf19a,	// (0x0002b95a) indicator_popup_pane_cp6

0x162f,	// (0x0001ddef) list_set_graphic_pane_copy1_ParamLimits

0x4133,	// (0x000208f3) bg_popup_window_pane_cp23

0xf232,	// (0x0002b9f2) popup_tmo_big_image_note_window_g1

0xf23b,	// (0x0002b9fb) popup_tmo_big_image_note_window_t1

0xf249,	// (0x0002ba09) popup_tmo_big_image_note_window_t2

0xf257,	// (0x0002ba17) popup_tmo_big_image_note_window_t3

0x0002,

0xfed9,	// (0x0002c699) popup_tmo_big_image_note_window_t

0x4c66,	// (0x00021426) cell_ai5_widget_lrg_icon_pane_g1

0x4c6e,	// (0x0002142e) cell_ai5_widget_lrg_icon_pane_t1

0x4c7c,	// (0x0002143c) cell_ai5_widget_list_row_pane_ParamLimits

0x4c7c,	// (0x0002143c) cell_ai5_widget_list_row_pane

0x4c95,	// (0x00021455) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x4c95,	// (0x00021455) cell_ai5_widget_list_row_pane_g1

0x4ca2,	// (0x00021462) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x4ca2,	// (0x00021462) cell_ai5_widget_list_row_pane_t1

0x4cba,	// (0x0002147a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x4cba,	// (0x0002147a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee0,	// (0x0002c6a0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee0,	// (0x0002c6a0) cell_ai5_widget_list_row_pane_t

0x6e81,	// (0x00023641) main_fep_vtchi_ss_pane

0xf265,	// (0x0002ba25) popup_fep_char_pre_window

0xf26d,	// (0x0002ba2d) popup_fep_ituss_window

0xf28a,	// (0x0002ba4a) popup_fep_vkbss_window

0xf2a9,	// (0x0002ba69) grid_vkbss_keypad_pane_ParamLimits

0xf2a9,	// (0x0002ba69) grid_vkbss_keypad_pane

0xf2b9,	// (0x0002ba79) ituss_keypad_pane

0xf2d2,	// (0x0002ba92) aid_vkbss_key_offset_ParamLimits

0xf2d2,	// (0x0002ba92) aid_vkbss_key_offset

0xf2de,	// (0x0002ba9e) cell_vkbss_key_pane_ParamLimits

0xf2de,	// (0x0002ba9e) cell_vkbss_key_pane

0xf2f4,	// (0x0002bab4) bg_cell_vkbss_key_g1_ParamLimits

0xf2f4,	// (0x0002bab4) bg_cell_vkbss_key_g1

0xf300,	// (0x0002bac0) cell_vkbss_key_3p_pane_ParamLimits

0xf300,	// (0x0002bac0) cell_vkbss_key_3p_pane

0xf31a,	// (0x0002bada) cell_vkbss_key_g1_ParamLimits

0xf31a,	// (0x0002bada) cell_vkbss_key_g1

0xf334,	// (0x0002baf4) cell_vkbss_key_t1_ParamLimits

0xf334,	// (0x0002baf4) cell_vkbss_key_t1

0xf35f,	// (0x0002bb1f) cell_ituss_key_pane_ParamLimits

0xf35f,	// (0x0002bb1f) cell_ituss_key_pane

0xf36f,	// (0x0002bb2f) bg_cell_ituss_key_g1_ParamLimits

0xf36f,	// (0x0002bb2f) bg_cell_ituss_key_g1

0xf37b,	// (0x0002bb3b) cell_ituss_key_pane_g1_ParamLimits

0xf37b,	// (0x0002bb3b) cell_ituss_key_pane_g1

0xf387,	// (0x0002bb47) cell_ituss_key_pane_g2_ParamLimits

0xf387,	// (0x0002bb47) cell_ituss_key_pane_g2

0x0001,

0xfee5,	// (0x0002c6a5) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0002c6a5) cell_ituss_key_pane_g

0xf3a0,	// (0x0002bb60) cell_ituss_key_t1_ParamLimits

0xf3a0,	// (0x0002bb60) cell_ituss_key_t1

0xf3ce,	// (0x0002bb8e) cell_ituss_key_t2_ParamLimits

0xf3ce,	// (0x0002bb8e) cell_ituss_key_t2

0xf3ff,	// (0x0002bbbf) cell_ituss_key_t3_ParamLimits

0xf3ff,	// (0x0002bbbf) cell_ituss_key_t3

0xf430,	// (0x0002bbf0) cell_ituss_key_t4_ParamLimits

0xf430,	// (0x0002bbf0) cell_ituss_key_t4

0x0003,

0xfeea,	// (0x0002c6aa) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x0002c6aa) cell_ituss_key_t

0xf461,	// (0x0002bc21) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0002bc29) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0002bc31) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0002c6b3) cell_vkbss_key_3p_pane_g

0x4133,	// (0x000208f3) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0002bc39) popup_fep_char_pre_window_t1

0x3d7b,	// (0x0002053b) main_ai5_sk_pane

0xf08b,	// (0x0002b84b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf097,	// (0x0002b857) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf0ab,	// (0x0002b86b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf0ba,	// (0x0002b87a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecb,	// (0x0002c68b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf0cd,	// (0x0002b88d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x47c3,	// (0x00020f83) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x4ccc,	// (0x0002148c) main_ai5_sk_pane_g1

0x5c30,	// (0x000223f0) popup_query_code_window_g1

0xf27f,	// (0x0002ba3f) popup_fep_vkb_icf_pane

0xf293,	// (0x0002ba53) popup_fep_vtchi_icf_pane

0x47c3,	// (0x00020f83) bg_icf_pane

0xf497,	// (0x0002bc57) list_vkb_icf_pane

0x47c3,	// (0x00020f83) bg_icf_pane_cp01

0xcde8,	// (0x000295a8) vtchi_icf_list_pane

0xf4b7,	// (0x0002bc77) list_vkb_icf_pane_t1_ParamLimits

0xf4b7,	// (0x0002bc77) list_vkb_icf_pane_t1

0xf4ce,	// (0x0002bc8e) vtchi_icf_list_pane_t1_ParamLimits

0xf4ce,	// (0x0002bc8e) vtchi_icf_list_pane_t1

0xf26d,	// (0x0002ba2d) popup_fep_ituss_window_ParamLimits

0xf293,	// (0x0002ba53) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b9,	// (0x0002ba79) ituss_keypad_pane_ParamLimits

0xf2c9,	// (0x0002ba89) ituss_sks_pane

0x47c3,	// (0x00020f83) bg_icf_pane_ParamLimits

0xf488,	// (0x0002bc48) icf_edit_indi_pane_ParamLimits

0xf488,	// (0x0002bc48) icf_edit_indi_pane

0xf497,	// (0x0002bc57) list_vkb_icf_pane_ParamLimits

0x47c3,	// (0x00020f83) bg_icf_pane_cp01_ParamLimits

0xf4a3,	// (0x0002bc63) icf_edit_indi_pane_cp01_ParamLimits

0xf4a3,	// (0x0002bc63) icf_edit_indi_pane_cp01

0xf4af,	// (0x0002bc6f) vtchi_query_pane

0xa7f6,	// (0x00026fb6) icf_edit_indi_pane_g1_ParamLimits

0xa7f6,	// (0x00026fb6) icf_edit_indi_pane_g1

0xf4e7,	// (0x0002bca7) icf_edit_indi_pane_g2_ParamLimits

0xf4e7,	// (0x0002bca7) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x0002c6ba) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x0002c6ba) icf_edit_indi_pane_g

0xf4f3,	// (0x0002bcb3) icf_edit_indi_pane_t1

0xf501,	// (0x0002bcc1) bg_input_focus_pane_cp042

0xf50a,	// (0x0002bcca) vtchi_button_pane

0xf513,	// (0x0002bcd3) vtchi_query_pane_t1

0xf521,	// (0x0002bce1) vtchi_query_pane_t2

0xf52f,	// (0x0002bcef) vtchi_query_pane_t3

0x0002,

0x0658,	// (0x0001ce18) vtchi_query_pane_t

0x4133,	// (0x000208f3) bg_button_pane_cp13

0xf53d,	// (0x0002bcfd) vtchi_button_pane_g1

0xd300,	// (0x00029ac0) ituss_sks_pane_g1

0xf545,	// (0x0002bd05) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0002c6bf) ituss_sks_pane_g

0xf54e,	// (0x0002bd0e) ituss_sks_pane_t1

0xf55c,	// (0x0002bd1c) ituss_sks_pane_t2

0x0001,

0x0664,	// (0x0001ce24) ituss_sks_pane_t

0xa27d,	// (0x00026a3d) indicator_nsta_pane_cp_g1

0xa286,	// (0x00026a46) indicator_nsta_pane_cp_g2

0xa28e,	// (0x00026a4e) indicator_nsta_pane_cp_g3

0xa296,	// (0x00026a56) indicator_nsta_pane_cp_g4

0xa29e,	// (0x00026a5e) indicator_nsta_pane_cp_g5

0xa2a6,	// (0x00026a66) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0002c270) indicator_nsta_pane_cp_g

0x3b83,	// (0x00020343) cell_graphic2_pane_t2_ParamLimits

0x3b83,	// (0x00020343) cell_graphic2_pane_t2

0x0001,

0xfdc2,	// (0x0002c582) cell_graphic2_pane_t_ParamLimits

0xfdc2,	// (0x0002c582) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

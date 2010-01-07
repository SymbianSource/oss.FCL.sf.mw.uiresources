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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000ac47 };

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
0x03d4,	// (0x0000b01b) Screen

0x03e0,	// (0x0000b027) application_window_ParamLimits

0x03e0,	// (0x0000b027) application_window

0x5f1c,	// (0x00010b63) screen_g1

0xdf8b,	// (0x00018bd2) area_bottom_pane_ParamLimits

0xdf8b,	// (0x00018bd2) area_bottom_pane

0x43ac,	// (0x0000eff3) area_top_pane_ParamLimits

0x43ac,	// (0x0000eff3) area_top_pane

0x444a,	// (0x0000f091) main_pane_ParamLimits

0x444a,	// (0x0000f091) main_pane

0x5f26,	// (0x00010b6d) misc_graphics

0x19cf,	// (0x0000c616) battery_pane_ParamLimits

0x19cf,	// (0x0000c616) battery_pane

0x9364,	// (0x00013fab) bg_status_flat_pane_g8

0x936c,	// (0x00013fb3) bg_status_flat_pane_g9

0x8692,	// (0x000132d9) context_pane_ParamLimits

0x8692,	// (0x000132d9) context_pane

0x1b3a,	// (0x0000c781) navi_pane_ParamLimits

0x1b3a,	// (0x0000c781) navi_pane

0x1bb1,	// (0x0000c7f8) signal_pane_ParamLimits

0x1bb1,	// (0x0000c7f8) signal_pane

0x0008,

0xf8a8,	// (0x0001a4ef) bg_status_flat_pane_g

0x1c41,	// (0x0000c888) status_pane_g1_ParamLimits

0x1c41,	// (0x0000c888) status_pane_g1

0x1c57,	// (0x0000c89e) status_pane_g2_ParamLimits

0x1c57,	// (0x0000c89e) status_pane_g2

0x88b2,	// (0x000134f9) status_pane_g3_ParamLimits

0x88b2,	// (0x000134f9) status_pane_g3

0x0004,

0xf7db,	// (0x0001a422) status_pane_g_ParamLimits

0xf7db,	// (0x0001a422) status_pane_g

0x1c63,	// (0x0000c8aa) title_pane_ParamLimits

0x1c63,	// (0x0000c8aa) title_pane

0x1cc4,	// (0x0000c90b) uni_indicator_pane_ParamLimits

0x1cc4,	// (0x0000c90b) uni_indicator_pane

0x7f49,	// (0x00012b90) bg_list_pane_ParamLimits

0x7f49,	// (0x00012b90) bg_list_pane

0x12a1,	// (0x0000bee8) find_pane

0x12a9,	// (0x0000bef0) listscroll_app_pane_ParamLimits

0x12a9,	// (0x0000bef0) listscroll_app_pane

0x7f7d,	// (0x00012bc4) listscroll_form_pane

0x12b5,	// (0x0000befc) listscroll_gen_pane_ParamLimits

0x12b5,	// (0x0000befc) listscroll_gen_pane

0x7f7d,	// (0x00012bc4) listscroll_set_pane

0x9f18,	// (0x00014b5f) main_idle_act_pane

0x7c25,	// (0x0001286c) main_idle_trad_pane

0x7c25,	// (0x0001286c) main_list_empty_pane

0x7fab,	// (0x00012bf2) main_midp_pane

0x7fb7,	// (0x00012bfe) main_pane_g1_ParamLimits

0x7fb7,	// (0x00012bfe) main_pane_g1

0x12c9,	// (0x0000bf10) popup_ai_message_window_ParamLimits

0x12c9,	// (0x0000bf10) popup_ai_message_window

0x135a,	// (0x0000bfa1) popup_fep_china_uni_window_ParamLimits

0x135a,	// (0x0000bfa1) popup_fep_china_uni_window

0x80c9,	// (0x00012d10) popup_fep_japan_candidate_window_ParamLimits

0x80c9,	// (0x00012d10) popup_fep_japan_candidate_window

0x80e7,	// (0x00012d2e) popup_fep_japan_predictive_window_ParamLimits

0x80e7,	// (0x00012d2e) popup_fep_japan_predictive_window

0x13b4,	// (0x0000bffb) popup_find_window

0x13d1,	// (0x0000c018) popup_grid_graphic_window_ParamLimits

0x13d1,	// (0x0000c018) popup_grid_graphic_window

0x814a,	// (0x00012d91) popup_large_graphic_colour_window

0x1463,	// (0x0000c0aa) popup_menu_window_ParamLimits

0x1463,	// (0x0000c0aa) popup_menu_window

0x162f,	// (0x0000c276) popup_note_image_window

0x15f5,	// (0x0000c23c) popup_note_wait_window_ParamLimits

0x15f5,	// (0x0000c23c) popup_note_wait_window

0x1647,	// (0x0000c28e) popup_note_window_ParamLimits

0x1647,	// (0x0000c28e) popup_note_window

0x16ed,	// (0x0000c334) popup_query_code_window_ParamLimits

0x16ed,	// (0x0000c334) popup_query_code_window

0x8394,	// (0x00012fdb) popup_query_data_code_window_ParamLimits

0x8394,	// (0x00012fdb) popup_query_data_code_window

0x1727,	// (0x0000c36e) popup_query_data_window_ParamLimits

0x1727,	// (0x0000c36e) popup_query_data_window

0x179d,	// (0x0000c3e4) popup_query_sat_info_window_ParamLimits

0x179d,	// (0x0000c3e4) popup_query_sat_info_window

0x1834,	// (0x0000c47b) popup_snote_single_graphic_window_ParamLimits

0x1834,	// (0x0000c47b) popup_snote_single_graphic_window

0x1834,	// (0x0000c47b) popup_snote_single_text_window_ParamLimits

0x1834,	// (0x0000c47b) popup_snote_single_text_window

0x8411,	// (0x00013058) popup_sub_window_general

0x853f,	// (0x00013186) popup_window_general_ParamLimits

0x853f,	// (0x00013186) popup_window_general

0x8554,	// (0x0001319b) power_save_pane

0xe10d,	// (0x00018d54) control_pane_g1_ParamLimits

0xe10d,	// (0x00018d54) control_pane_g1

0x4bba,	// (0x0000f801) control_pane_g2_ParamLimits

0x4bba,	// (0x0000f801) control_pane_g2

0x7eea,	// (0x00012b31) control_pane_g3_ParamLimits

0x7eea,	// (0x00012b31) control_pane_g3

0x0007,

0xf7c3,	// (0x0001a40a) control_pane_g_ParamLimits

0xf7c3,	// (0x0001a40a) control_pane_g

0xe14e,	// (0x00018d95) control_pane_t1_ParamLimits

0xe14e,	// (0x00018d95) control_pane_t1

0xe1ac,	// (0x00018df3) control_pane_t2_ParamLimits

0xe1ac,	// (0x00018df3) control_pane_t2

0x0002,

0xf7d4,	// (0x0001a41b) control_pane_t_ParamLimits

0xf7d4,	// (0x0001a41b) control_pane_t

0x7e0b,	// (0x00012a52) navi_navi_volume_pane_cp1

0x7e14,	// (0x00012a5b) status_small_icon_pane

0x7e1c,	// (0x00012a63) status_small_pane_g1_ParamLimits

0x7e1c,	// (0x00012a63) status_small_pane_g1

0x7e50,	// (0x00012a97) status_small_pane_g2_ParamLimits

0x7e50,	// (0x00012a97) status_small_pane_g2

0x7e5c,	// (0x00012aa3) status_small_pane_g3_ParamLimits

0x7e5c,	// (0x00012aa3) status_small_pane_g3

0x7e68,	// (0x00012aaf) status_small_pane_g4_ParamLimits

0x7e68,	// (0x00012aaf) status_small_pane_g4

0x7e74,	// (0x00012abb) status_small_pane_g5_ParamLimits

0x7e74,	// (0x00012abb) status_small_pane_g5

0x7e83,	// (0x00012aca) status_small_pane_g6_ParamLimits

0x7e83,	// (0x00012aca) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001a3f9) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001a3f9) status_small_pane_g

0x7eb3,	// (0x00012afa) status_small_pane_t1

0x7ed6,	// (0x00012b1d) status_small_wait_pane_ParamLimits

0x7ed6,	// (0x00012b1d) status_small_wait_pane

0x0f45,	// (0x0000bb8c) aid_levels_signal_ParamLimits

0x0f45,	// (0x0000bb8c) aid_levels_signal

0x0f5d,	// (0x0000bba4) signal_pane_g1_ParamLimits

0x0f5d,	// (0x0000bba4) signal_pane_g1

0x0f78,	// (0x0000bbbf) signal_pane_g2_ParamLimits

0x0f78,	// (0x0000bbbf) signal_pane_g2

0x0001,

0xf747,	// (0x0001a38e) signal_pane_g_ParamLimits

0xf747,	// (0x0001a38e) signal_pane_g

0x7670,	// (0x000122b7) context_pane_g1

0x0591,	// (0x0000b1d8) title_pane_g1

0x05c6,	// (0x0000b20d) title_pane_t1

0x5fce,	// (0x00010c15) title_pane_t2

0x5ff4,	// (0x00010c3b) title_pane_t3

0x0002,

0xf59b,	// (0x0001a1e2) title_pane_t

0x1cec,	// (0x0000c933) aid_levels_battery_ParamLimits

0x1cec,	// (0x0000c933) aid_levels_battery

0x1d08,	// (0x0000c94f) battery_pane_g1_ParamLimits

0x1d08,	// (0x0000c94f) battery_pane_g1

0x1d25,	// (0x0000c96c) battery_pane_g2_ParamLimits

0x1d25,	// (0x0000c96c) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001a42d) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001a42d) battery_pane_g

0x2145,	// (0x0000cd8c) uni_indicator_pane_g1

0x215a,	// (0x0000cda1) uni_indicator_pane_g2

0x216f,	// (0x0000cdb6) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0001a597) uni_indicator_pane_g

0x7a95,	// (0x000126dc) navi_icon_pane_ParamLimits

0x7a95,	// (0x000126dc) navi_icon_pane

0x79dc,	// (0x00012623) navi_midp_pane

0x7ab1,	// (0x000126f8) navi_navi_pane

0x7abb,	// (0x00012702) navi_text_pane_ParamLimits

0x7abb,	// (0x00012702) navi_text_pane

0x5f1c,	// (0x00010b63) status_small_wait_pane_g1

0x6431,	// (0x00011078) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0001a592) status_small_wait_pane_g

0x20e4,	// (0x0000cd2b) navi_navi_icon_text_pane

0x20fe,	// (0x0000cd45) navi_navi_pane_g1_ParamLimits

0x20fe,	// (0x0000cd45) navi_navi_pane_g1

0x20ec,	// (0x0000cd33) navi_navi_pane_g2_ParamLimits

0x20ec,	// (0x0000cd33) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0001a560) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0001a560) navi_navi_pane_g

0x99e3,	// (0x0001462a) navi_navi_tabs_pane

0x2110,	// (0x0000cd57) navi_navi_text_pane

0x20e4,	// (0x0000cd2b) navi_navi_volume_pane

0x20d2,	// (0x0000cd19) navi_text_pane_t1

0x20c6,	// (0x0000cd0d) navi_icon_pane_g1

0x98d4,	// (0x0001451b) navi_navi_text_pane_t1

0xe3fb,	// (0x00019042) navi_navi_volume_pane_g1

0xe403,	// (0x0001904a) volume_small_pane

0x2011,	// (0x0000cc58) navi_navi_icon_text_pane_g1

0x2019,	// (0x0000cc60) navi_navi_icon_text_pane_t1

0x7ab1,	// (0x000126f8) navi_tabs_2_long_pane

0x7ab1,	// (0x000126f8) navi_tabs_2_pane

0x7ab1,	// (0x000126f8) navi_tabs_3_long_pane

0x7ab1,	// (0x000126f8) navi_tabs_3_pane

0x7ab1,	// (0x000126f8) navi_tabs_4_pane

0xe3db,	// (0x00019022) tabs_2_active_pane_ParamLimits

0xe3db,	// (0x00019022) tabs_2_active_pane

0xe3eb,	// (0x00019032) tabs_2_passive_pane_ParamLimits

0xe3eb,	// (0x00019032) tabs_2_passive_pane

0xe3a9,	// (0x00018ff0) tabs_3_active_pane_ParamLimits

0xe3a9,	// (0x00018ff0) tabs_3_active_pane

0xe3b9,	// (0x00019000) tabs_3_passive_pane_ParamLimits

0xe3b9,	// (0x00019000) tabs_3_passive_pane

0xe3ca,	// (0x00019011) tabs_3_passive_pane_cp_ParamLimits

0xe3ca,	// (0x00019011) tabs_3_passive_pane_cp

0xe365,	// (0x00018fac) tabs_4_active_pane_ParamLimits

0xe365,	// (0x00018fac) tabs_4_active_pane

0xe376,	// (0x00018fbd) tabs_4_passive_pane_ParamLimits

0xe376,	// (0x00018fbd) tabs_4_passive_pane

0xe387,	// (0x00018fce) tabs_4_passive_pane_cp_ParamLimits

0xe387,	// (0x00018fce) tabs_4_passive_pane_cp

0xe398,	// (0x00018fdf) tabs_4_passive_pane_cp2_ParamLimits

0xe398,	// (0x00018fdf) tabs_4_passive_pane_cp2

0xe345,	// (0x00018f8c) tabs_2_long_active_pane_ParamLimits

0xe345,	// (0x00018f8c) tabs_2_long_active_pane

0xe355,	// (0x00018f9c) tabs_2_long_passive_pane_ParamLimits

0xe355,	// (0x00018f9c) tabs_2_long_passive_pane

0xe310,	// (0x00018f57) tabs_3_long_active_pane_ParamLimits

0xe310,	// (0x00018f57) tabs_3_long_active_pane

0xe321,	// (0x00018f68) tabs_3_long_passive_pane_ParamLimits

0xe321,	// (0x00018f68) tabs_3_long_passive_pane

0xe334,	// (0x00018f7b) tabs_3_long_passive_pane_cp_ParamLimits

0xe334,	// (0x00018f7b) tabs_3_long_passive_pane_cp

0x4e92,	// (0x0000fad9) volume_small_pane_g1

0xe2bf,	// (0x00018f06) volume_small_pane_g2

0xe2c8,	// (0x00018f0f) volume_small_pane_g3

0xe2d1,	// (0x00018f18) volume_small_pane_g4

0xe2da,	// (0x00018f21) volume_small_pane_g5

0xe2e3,	// (0x00018f2a) volume_small_pane_g6

0xe2ec,	// (0x00018f33) volume_small_pane_g7

0xe2f5,	// (0x00018f3c) volume_small_pane_g8

0xe2fe,	// (0x00018f45) volume_small_pane_g9

0xe307,	// (0x00018f4e) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0001a52c) volume_small_pane_g

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp2_ParamLimits

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp2

0x0652,	// (0x0000b299) tabs_3_active_pane_g1

0x065a,	// (0x0000b2a1) tabs_3_active_pane_t1

0x629b,	// (0x00010ee2) bg_passive_tab_pane_cp2_ParamLimits

0x629b,	// (0x00010ee2) bg_passive_tab_pane_cp2

0x0652,	// (0x0000b299) tabs_3_passive_pane_g1

0x065a,	// (0x0000b2a1) tabs_3_passive_pane_t1

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp3_ParamLimits

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp3

0x066c,	// (0x0000b2b3) tabs_4_active_pane_g1

0x0674,	// (0x0000b2bb) tabs_4_active_pane_t1

0x629b,	// (0x00010ee2) bg_passive_tab_pane_cp3_ParamLimits

0x629b,	// (0x00010ee2) bg_passive_tab_pane_cp3

0x066c,	// (0x0000b2b3) tabs_4_1_passive_pane_g1

0x0674,	// (0x0000b2bb) tabs_4_1_passive_pane_t1

0x7fab,	// (0x00012bf2) list_highlight_pane_cp2

0x220e,	// (0x0000ce55) list_set_pane_ParamLimits

0x220e,	// (0x0000ce55) list_set_pane

0x22a8,	// (0x0000ceef) main_pane_set_t1_ParamLimits

0x22a8,	// (0x0000ceef) main_pane_set_t1

0x22c8,	// (0x0000cf0f) main_pane_set_t2_ParamLimits

0x22c8,	// (0x0000cf0f) main_pane_set_t2

0x22dc,	// (0x0000cf23) main_pane_set_t3_ParamLimits

0x22dc,	// (0x0000cf23) main_pane_set_t3

0x22ee,	// (0x0000cf35) main_pane_set_t4_ParamLimits

0x22ee,	// (0x0000cf35) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0001a5fc) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0001a5fc) main_pane_set_t

0x2300,	// (0x0000cf47) setting_code_pane

0x2308,	// (0x0000cf4f) setting_slider_graphic_pane

0x2308,	// (0x0000cf4f) setting_slider_pane

0x2308,	// (0x0000cf4f) setting_text_pane

0x2308,	// (0x0000cf4f) setting_volume_pane

0x467b,	// (0x0000f2c2) volume_set_pane

0x6006,	// (0x00010c4d) bg_set_opt_pane_cp

0x4683,	// (0x0000f2ca) setting_slider_pane_t1

0x469c,	// (0x0000f2e3) setting_slider_pane_t2

0x46b5,	// (0x0000f2fc) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001a1e9) setting_slider_pane_t

0x46cc,	// (0x0000f313) slider_set_pane

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp2

0x6048,	// (0x00010c8f) setting_slider_graphic_pane_g1

0x46e2,	// (0x0000f329) setting_slider_graphic_pane_t1

0x46f1,	// (0x0000f338) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001a1f0) setting_slider_graphic_pane_t

0x4700,	// (0x0000f347) slider_set_pane_cp

0x5f26,	// (0x00010b6d) input_focus_pane_cp1

0x9eff,	// (0x00014b46) list_set_text_pane

0x5f1c,	// (0x00010b63) setting_text_pane_g1

0x5f26,	// (0x00010b6d) input_focus_pane_cp2

0x5f1c,	// (0x00010b63) setting_code_pane_g1

0x6051,	// (0x00010c98) setting_code_pane_t1

0x605f,	// (0x00010ca6) set_text_pane_t1_ParamLimits

0x605f,	// (0x00010ca6) set_text_pane_t1

0x6f1b,	// (0x00011b62) set_opt_bg_pane_g1

0x6f23,	// (0x00011b6a) set_opt_bg_pane_g2

0x9edf,	// (0x00014b26) set_opt_bg_pane_g3

0x6f33,	// (0x00011b7a) set_opt_bg_pane_g4

0x6f3b,	// (0x00011b82) set_opt_bg_pane_g5

0x6f43,	// (0x00011b8a) set_opt_bg_pane_g6

0x9ee7,	// (0x00014b2e) set_opt_bg_pane_g7

0x9eef,	// (0x00014b36) set_opt_bg_pane_g8

0x9ef7,	// (0x00014b3e) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0001a5e9) set_opt_bg_pane_g

0x9ed2,	// (0x00014b19) slider_set_pane_g1

0x5060,	// (0x0000fca7) slider_set_pane_g2

0x0006,

0xf993,	// (0x0001a5da) slider_set_pane_g

0x4ffc,	// (0x0000fc43) volume_set_pane_g1

0x5004,	// (0x0000fc4b) volume_set_pane_g2

0x500c,	// (0x0000fc53) volume_set_pane_g3

0x5014,	// (0x0000fc5b) volume_set_pane_g4

0x501c,	// (0x0000fc63) volume_set_pane_g5

0x5024,	// (0x0000fc6b) volume_set_pane_g6

0x502c,	// (0x0000fc73) volume_set_pane_g7

0x5034,	// (0x0000fc7b) volume_set_pane_g8

0x503c,	// (0x0000fc83) volume_set_pane_g9

0x5044,	// (0x0000fc8b) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0001a5b2) volume_set_pane_g

0x0686,	// (0x0000b2cd) indicator_pane_ParamLimits

0x0686,	// (0x0000b2cd) indicator_pane

0x06ae,	// (0x0000b2f5) main_idle_pane_g2_ParamLimits

0x06ae,	// (0x0000b2f5) main_idle_pane_g2

0x06e6,	// (0x0000b32d) main_pane_idle_g1_ParamLimits

0x06e6,	// (0x0000b32d) main_pane_idle_g1

0x60ba,	// (0x00010d01) popup_clock_digital_analogue_window_ParamLimits

0x60ba,	// (0x00010d01) popup_clock_digital_analogue_window

0x070d,	// (0x0000b354) soft_indicator_pane_ParamLimits

0x070d,	// (0x0000b354) soft_indicator_pane

0x0727,	// (0x0000b36e) wallpaper_pane_ParamLimits

0x0727,	// (0x0000b36e) wallpaper_pane

0x5f1c,	// (0x00010b63) wallpaper_pane_g1

0x0739,	// (0x0000b380) indicator_pane_g1_ParamLimits

0x0739,	// (0x0000b380) indicator_pane_g1

0xa3be,	// (0x00015005) navi_navi_icon_text_pane_srt_g1

0x610c,	// (0x00010d53) soft_indicator_pane_t1

0x6126,	// (0x00010d6d) aid_ps_area_pane

0x0752,	// (0x0000b399) aid_ps_clock_pane

0x6145,	// (0x00010d8c) aid_ps_indicator_pane

0x6151,	// (0x00010d98) indicator_ps_pane_ParamLimits

0x6151,	// (0x00010d98) indicator_ps_pane

0x6160,	// (0x00010da7) power_save_pane_g1_ParamLimits

0x6160,	// (0x00010da7) power_save_pane_g1

0x616c,	// (0x00010db3) power_save_pane_g2_ParamLimits

0x616c,	// (0x00010db3) power_save_pane_g2

0x42a0,	// (0x0000eee7) aid_navinavi_width_pane

0x6126,	// (0x00010d6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001a1f5) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001a1f5) power_save_pane_g

0x617a,	// (0x00010dc1) power_save_pane_t1_ParamLimits

0x617a,	// (0x00010dc1) power_save_pane_t1

0x0752,	// (0x0000b399) aid_ps_clock_pane_ParamLimits

0x6145,	// (0x00010d8c) aid_ps_indicator_pane_ParamLimits

0x618c,	// (0x00010dd3) power_save_pane_t4_ParamLimits

0x618c,	// (0x00010dd3) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001a1fa) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001a1fa) power_save_pane_t

0x61b6,	// (0x00010dfd) power_save_t3_ParamLimits

0x61b6,	// (0x00010dfd) power_save_t3

0x61a1,	// (0x00010de8) power_save_t2_ParamLimits

0x61a1,	// (0x00010de8) power_save_t2

0x61cb,	// (0x00010e12) indicator_ps_pane_g1

0x0760,	// (0x0000b3a7) ai_gene_pane_ParamLimits

0x0760,	// (0x0000b3a7) ai_gene_pane

0x0777,	// (0x0000b3be) ai_links_pane_ParamLimits

0x0777,	// (0x0000b3be) ai_links_pane

0x078f,	// (0x0000b3d6) indicator_pane_cp1_ParamLimits

0x078f,	// (0x0000b3d6) indicator_pane_cp1

0x079e,	// (0x0000b3e5) main_pane_idle_g1_cp_ParamLimits

0x079e,	// (0x0000b3e5) main_pane_idle_g1_cp

0x6204,	// (0x00010e4b) popup_ai_links_title_window

0x07b6,	// (0x0000b3fd) soft_indicator_pane_cp1_ParamLimits

0x07b6,	// (0x0000b3fd) soft_indicator_pane_cp1

0x9c82,	// (0x000148c9) ai_links_pane_g1

0x9c8b,	// (0x000148d2) grid_ai_links_pane

0x213c,	// (0x0000cd83) ai_gene_pane_1

0x9c70,	// (0x000148b7) ai_gene_pane_2

0x9c79,	// (0x000148c0) list_highlight_pane_cp4

0x2118,	// (0x0000cd5f) cell_ai_link_pane_ParamLimits

0x2118,	// (0x0000cd5f) cell_ai_link_pane

0x9c41,	// (0x00014888) cell_ai_link_pane_g1

0x6431,	// (0x00011078) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0001a58d) cell_ai_link_pane_g

0x5f26,	// (0x00010b6d) grid_highlight_cp2

0x5f26,	// (0x00010b6d) bg_popup_sub_pane_cp1

0x6227,	// (0x00010e6e) popup_ai_links_title_window_t1

0x9b8f,	// (0x000147d6) ai_gene_pane_1_g1_ParamLimits

0x9b8f,	// (0x000147d6) ai_gene_pane_1_g1

0x9b9b,	// (0x000147e2) ai_gene_pane_1_g2_ParamLimits

0x9b9b,	// (0x000147e2) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0001a583) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0001a583) ai_gene_pane_1_g

0x9ba8,	// (0x000147ef) ai_gene_pane_1_t1_ParamLimits

0x9ba8,	// (0x000147ef) ai_gene_pane_1_t1

0x9bdc,	// (0x00014823) grid_ai_soft_ind_pane

0x9b7a,	// (0x000147c1) ai_gene_pane_2_t1_ParamLimits

0x9b7a,	// (0x000147c1) ai_gene_pane_2_t1

0x07ca,	// (0x0000b411) main_pane_empty_t1_ParamLimits

0x07ca,	// (0x0000b411) main_pane_empty_t1

0x07e2,	// (0x0000b429) main_pane_empty_t2_ParamLimits

0x07e2,	// (0x0000b429) main_pane_empty_t2

0x07f7,	// (0x0000b43e) main_pane_empty_t3_ParamLimits

0x07f7,	// (0x0000b43e) main_pane_empty_t3

0x0809,	// (0x0000b450) main_pane_empty_t4_ParamLimits

0x0809,	// (0x0000b450) main_pane_empty_t4

0x081b,	// (0x0000b462) main_pane_empty_t5_ParamLimits

0x081b,	// (0x0000b462) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001a1ff) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001a1ff) main_pane_empty_t

0x7014,	// (0x00011c5b) bg_popup_window_pane_ParamLimits

0x7014,	// (0x00011c5b) bg_popup_window_pane

0x98e2,	// (0x00014529) find_popup_pane_cp2_ParamLimits

0x98e2,	// (0x00014529) find_popup_pane_cp2

0x98ee,	// (0x00014535) heading_pane_ParamLimits

0x98ee,	// (0x00014535) heading_pane

0x5f26,	// (0x00010b6d) bg_popup_sub_pane

0x2036,	// (0x0000cc7d) bg_popup_window_pane_g1_ParamLimits

0x2036,	// (0x0000cc7d) bg_popup_window_pane_g1

0x2045,	// (0x0000cc8c) bg_popup_window_pane_g2_ParamLimits

0x2045,	// (0x0000cc8c) bg_popup_window_pane_g2

0x2051,	// (0x0000cc98) bg_popup_window_pane_g3_ParamLimits

0x2051,	// (0x0000cc98) bg_popup_window_pane_g3

0x205d,	// (0x0000cca4) bg_popup_window_pane_g4_ParamLimits

0x205d,	// (0x0000cca4) bg_popup_window_pane_g4

0x206c,	// (0x0000ccb3) bg_popup_window_pane_g5_ParamLimits

0x206c,	// (0x0000ccb3) bg_popup_window_pane_g5

0x207c,	// (0x0000ccc3) bg_popup_window_pane_g6_ParamLimits

0x207c,	// (0x0000ccc3) bg_popup_window_pane_g6

0x2088,	// (0x0000cccf) bg_popup_window_pane_g7_ParamLimits

0x2088,	// (0x0000cccf) bg_popup_window_pane_g7

0x2097,	// (0x0000ccde) bg_popup_window_pane_g8_ParamLimits

0x2097,	// (0x0000ccde) bg_popup_window_pane_g8

0x20a6,	// (0x0000cced) bg_popup_window_pane_g9_ParamLimits

0x20a6,	// (0x0000cced) bg_popup_window_pane_g9

0x98c8,	// (0x0001450f) bg_popup_window_pane_g10_ParamLimits

0x98c8,	// (0x0001450f) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0001a54b) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0001a54b) bg_popup_window_pane_g

0x97f1,	// (0x00014438) bg_popup_heading_pane_ParamLimits

0x97f1,	// (0x00014438) bg_popup_heading_pane

0x50e8,	// (0x0000fd2f) tabs_4_passive_pane_cp_srt_ParamLimits

0x50e8,	// (0x0000fd2f) tabs_4_passive_pane_cp_srt

0x50fa,	// (0x0000fd41) tabs_4_passive_pane_srt_ParamLimits

0x9805,	// (0x0001444c) heading_pane_g2

0x50fa,	// (0x0000fd41) tabs_4_passive_pane_srt

0x8b77,	// (0x000137be) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b77,	// (0x000137be) bg_passive_tab_pane_cp3_srt

0x980d,	// (0x00014454) heading_pane_t1_ParamLimits

0x980d,	// (0x00014454) heading_pane_t1

0x9824,	// (0x0001446b) heading_pane_t2_ParamLimits

0x9824,	// (0x0001446b) heading_pane_t2

0x0001,

0xf8ff,	// (0x0001a546) heading_pane_t_ParamLimits

0xf8ff,	// (0x0001a546) heading_pane_t

0x932c,	// (0x00013f73) bg_popup_heading_pane_g1

0x93db,	// (0x00014022) bg_popup_heading_pane_g2

0x93e5,	// (0x0001402c) bg_popup_heading_pane_g3

0x93ef,	// (0x00014036) bg_popup_heading_pane_g4

0x93f9,	// (0x00014040) bg_popup_heading_pane_g5

0x9403,	// (0x0001404a) bg_popup_heading_pane_g6

0x940b,	// (0x00014052) bg_popup_heading_pane_g7

0x9413,	// (0x0001405a) bg_popup_heading_pane_g8

0x941d,	// (0x00014064) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0001a502) bg_popup_heading_pane_g

0x8a5d,	// (0x000136a4) bg_popup_sub_pane_g1

0x8a6d,	// (0x000136b4) bg_popup_sub_pane_g2

0x8a65,	// (0x000136ac) bg_popup_sub_pane_g3

0x8a7d,	// (0x000136c4) bg_popup_sub_pane_g4

0x8a75,	// (0x000136bc) bg_popup_sub_pane_g5

0x8a85,	// (0x000136cc) bg_popup_sub_pane_g6

0x8a8d,	// (0x000136d4) bg_popup_sub_pane_g7

0x8a9d,	// (0x000136e4) bg_popup_sub_pane_g8

0x8a95,	// (0x000136dc) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0001a4dc) bg_popup_sub_pane_g

0x629b,	// (0x00010ee2) bg_popup_window_pane_cp5_ParamLimits

0x629b,	// (0x00010ee2) bg_popup_window_pane_cp5

0x62b7,	// (0x00010efe) popup_note_window_g1_ParamLimits

0x62b7,	// (0x00010efe) popup_note_window_g1

0x62c3,	// (0x00010f0a) popup_note_window_t1_ParamLimits

0x62c3,	// (0x00010f0a) popup_note_window_t1

0x62d5,	// (0x00010f1c) popup_note_window_t2_ParamLimits

0x62d5,	// (0x00010f1c) popup_note_window_t2

0x62e7,	// (0x00010f2e) popup_note_window_t3_ParamLimits

0x62e7,	// (0x00010f2e) popup_note_window_t3

0x62f9,	// (0x00010f40) popup_note_window_t4_ParamLimits

0x62f9,	// (0x00010f40) popup_note_window_t4

0x6321,	// (0x00010f68) popup_note_window_t5_ParamLimits

0x6321,	// (0x00010f68) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001a20a) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001a20a) popup_note_window_t

0x6345,	// (0x00010f8c) bg_popup_window_pane_cp6_ParamLimits

0x6345,	// (0x00010f8c) bg_popup_window_pane_cp6

0x92a0,	// (0x00013ee7) popup_note_image_window_g1_ParamLimits

0x92a0,	// (0x00013ee7) popup_note_image_window_g1

0x92ac,	// (0x00013ef3) popup_note_image_window_g2_ParamLimits

0x92ac,	// (0x00013ef3) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0001a4d0) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0001a4d0) popup_note_image_window_g

0x92c5,	// (0x00013f0c) popup_note_image_window_t1_ParamLimits

0x92c5,	// (0x00013f0c) popup_note_image_window_t1

0x92de,	// (0x00013f25) popup_note_image_window_t2_ParamLimits

0x92de,	// (0x00013f25) popup_note_image_window_t2

0x92f7,	// (0x00013f3e) popup_note_image_window_t3_ParamLimits

0x92f7,	// (0x00013f3e) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0001a4d5) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0001a4d5) popup_note_image_window_t

0x9161,	// (0x00013da8) bg_popup_window_pane_cp7_ParamLimits

0x9161,	// (0x00013da8) bg_popup_window_pane_cp7

0x9191,	// (0x00013dd8) popup_note_wait_window_g1_ParamLimits

0x9191,	// (0x00013dd8) popup_note_wait_window_g1

0x919d,	// (0x00013de4) popup_note_wait_window_g2_ParamLimits

0x919d,	// (0x00013de4) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0001a4be) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0001a4be) popup_note_wait_window_g

0x91b5,	// (0x00013dfc) popup_note_wait_window_t1_ParamLimits

0x91b5,	// (0x00013dfc) popup_note_wait_window_t1

0x91dc,	// (0x00013e23) popup_note_wait_window_t2_ParamLimits

0x91dc,	// (0x00013e23) popup_note_wait_window_t2

0x91f9,	// (0x00013e40) popup_note_wait_window_t3_ParamLimits

0x91f9,	// (0x00013e40) popup_note_wait_window_t3

0x920c,	// (0x00013e53) popup_note_wait_window_t4_ParamLimits

0x920c,	// (0x00013e53) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0001a4c5) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0001a4c5) popup_note_wait_window_t

0x9231,	// (0x00013e78) wait_bar_pane_ParamLimits

0x9231,	// (0x00013e78) wait_bar_pane

0x5f26,	// (0x00010b6d) wait_anim_pane

0x5f26,	// (0x00010b6d) wait_border_pane

0x5f1c,	// (0x00010b63) wait_anim_pane_g1

0x5f1c,	// (0x00010b63) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001a389) wait_anim_pane_g

0x9105,	// (0x00013d4c) wait_border_pane_g1

0x9110,	// (0x00013d57) wait_border_pane_g2

0x9119,	// (0x00013d60) wait_border_pane_g3

0x0002,

0xf870,	// (0x0001a4b7) wait_border_pane_g

0x9067,	// (0x00013cae) bg_popup_window_pane_cp16_ParamLimits

0x9067,	// (0x00013cae) bg_popup_window_pane_cp16

0x9075,	// (0x00013cbc) indicator_popup_pane_cp4_ParamLimits

0x9075,	// (0x00013cbc) indicator_popup_pane_cp4

0x9089,	// (0x00013cd0) popup_query_data_window_t1_ParamLimits

0x9089,	// (0x00013cd0) popup_query_data_window_t1

0x909b,	// (0x00013ce2) popup_query_data_window_t2_ParamLimits

0x909b,	// (0x00013ce2) popup_query_data_window_t2

0x90b4,	// (0x00013cfb) popup_query_data_window_t3_ParamLimits

0x90b4,	// (0x00013cfb) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0001a4b0) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0001a4b0) popup_query_data_window_t

0x90ce,	// (0x00013d15) query_popup_data_pane_ParamLimits

0x90ce,	// (0x00013d15) query_popup_data_pane

0x90e2,	// (0x00013d29) query_popup_data_pane_cp1_ParamLimits

0x90e2,	// (0x00013d29) query_popup_data_pane_cp1

0x6345,	// (0x00010f8c) bg_popup_window_pane_cp10_ParamLimits

0x6345,	// (0x00010f8c) bg_popup_window_pane_cp10

0x8fca,	// (0x00013c11) indicator_popup_pane_ParamLimits

0x8fca,	// (0x00013c11) indicator_popup_pane

0x639c,	// (0x00010fe3) popup_query_code_window_t1_ParamLimits

0x639c,	// (0x00010fe3) popup_query_code_window_t1

0x8fe2,	// (0x00013c29) popup_query_code_window_t2_ParamLimits

0x8fe2,	// (0x00013c29) popup_query_code_window_t2

0x9020,	// (0x00013c67) popup_query_code_window_t3_ParamLimits

0x9020,	// (0x00013c67) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0001a4a9) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0001a4a9) popup_query_code_window_t

0x904f,	// (0x00013c96) query_popup_pane_ParamLimits

0x904f,	// (0x00013c96) query_popup_pane

0x6345,	// (0x00010f8c) bg_popup_window_pane_cp15_ParamLimits

0x6345,	// (0x00010f8c) bg_popup_window_pane_cp15

0x6363,	// (0x00010faa) indicator_popup_pane_cp1_ParamLimits

0x6363,	// (0x00010faa) indicator_popup_pane_cp1

0x6376,	// (0x00010fbd) indicator_popup_pane_cp2_ParamLimits

0x6376,	// (0x00010fbd) indicator_popup_pane_cp2

0x6389,	// (0x00010fd0) popup_query_data_code_window_g1_ParamLimits

0x6389,	// (0x00010fd0) popup_query_data_code_window_g1

0x639c,	// (0x00010fe3) popup_query_data_code_window_t1_ParamLimits

0x639c,	// (0x00010fe3) popup_query_data_code_window_t1

0x63ae,	// (0x00010ff5) popup_query_data_code_window_t2_ParamLimits

0x63ae,	// (0x00010ff5) popup_query_data_code_window_t2

0x63c0,	// (0x00011007) popup_query_data_code_window_t3_ParamLimits

0x63c0,	// (0x00011007) popup_query_data_code_window_t3

0x63d6,	// (0x0001101d) popup_query_data_code_window_t4_ParamLimits

0x63d6,	// (0x0001101d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001a215) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001a215) popup_query_data_code_window_t

0x4da5,	// (0x0000f9ec) list_single_midp_graphic_pane_g3

0x63ee,	// (0x00011035) query_popup_data_pane_cp2_ParamLimits

0x6401,	// (0x00011048) query_popup_pane_cp2_ParamLimits

0x6401,	// (0x00011048) query_popup_pane_cp2

0x5f26,	// (0x00010b6d) bg_popup_window_pane_cp11

0x8f9e,	// (0x00013be5) heading_pane_cp5

0x64e9,	// (0x00011130) listscroll_popup_info_pane

0x5f26,	// (0x00010b6d) input_focus_pane_cp3

0x6414,	// (0x0001105b) query_popup_pane_t1

0x6422,	// (0x00011069) list_popup_info_pane_ParamLimits

0x6422,	// (0x00011069) list_popup_info_pane

0x6431,	// (0x00011078) listscroll_popup_info_pane_g1

0x6439,	// (0x00011080) scroll_pane_cp7

0x6443,	// (0x0001108a) popup_info_list_pane_t1_ParamLimits

0x6443,	// (0x0001108a) popup_info_list_pane_t1

0x645d,	// (0x000110a4) popup_info_list_pane_t2_ParamLimits

0x645d,	// (0x000110a4) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001a21e) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001a21e) popup_info_list_pane_t

0x5f26,	// (0x00010b6d) bg_popup_window_pane_cp12

0xa3d8,	// (0x0001501f) find_popup_pane

0x6006,	// (0x00010c4d) bg_popup_window_pane_cp3

0x6477,	// (0x000110be) heading_pane_cp3

0x6483,	// (0x000110ca) listscroll_popup_graphic_pane

0x5f26,	// (0x00010b6d) bg_popup_window_pane_cp4

0x087d,	// (0x0000b4c4) heading_pane_cp4

0x64e9,	// (0x00011130) listscroll_popup_colour_pane

0x64f1,	// (0x00011138) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x64f1,	// (0x00011138) cell_large_graphic_colour_none_popup_pane

0x0885,	// (0x0000b4cc) grid_large_graphic_colour_popup_pane_ParamLimits

0x0885,	// (0x0000b4cc) grid_large_graphic_colour_popup_pane

0x6529,	// (0x00011170) listscroll_popup_colour_pane_g1_ParamLimits

0x6529,	// (0x00011170) listscroll_popup_colour_pane_g1

0x6540,	// (0x00011187) listscroll_popup_colour_pane_g2_ParamLimits

0x6540,	// (0x00011187) listscroll_popup_colour_pane_g2

0x6557,	// (0x0001119e) listscroll_popup_colour_pane_g3_ParamLimits

0x6557,	// (0x0001119e) listscroll_popup_colour_pane_g3

0x08a9,	// (0x0000b4f0) listscroll_popup_colour_pane_g4_ParamLimits

0x08a9,	// (0x0000b4f0) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001a223) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001a223) listscroll_popup_colour_pane_g

0x6576,	// (0x000111bd) scroll_pane_cp6_ParamLimits

0x6576,	// (0x000111bd) scroll_pane_cp6

0x08b8,	// (0x0000b4ff) cell_large_graphic_colour_popup_pane_ParamLimits

0x08b8,	// (0x0000b4ff) cell_large_graphic_colour_popup_pane

0x65a7,	// (0x000111ee) cell_large_graphic_colour_none_popup_pane_t1

0x5f26,	// (0x00010b6d) grid_highlight_pane_cp5

0x65b6,	// (0x000111fd) cell_large_graphic_colour_popup_pane_g1

0x65be,	// (0x00011205) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001a22c) cell_large_graphic_colour_popup_pane_g

0x65c6,	// (0x0001120d) cell_large_graphic_colour_popup_pane_g2_copy1

0x65cf,	// (0x00011216) grid_highlight_pane_cp4

0x65d7,	// (0x0001121e) bg_popup_window_pane_cp8_ParamLimits

0x65d7,	// (0x0001121e) bg_popup_window_pane_cp8

0x65f2,	// (0x00011239) popup_snote_single_text_window_g1_ParamLimits

0x65f2,	// (0x00011239) popup_snote_single_text_window_g1

0x6604,	// (0x0001124b) popup_snote_single_text_window_t1_ParamLimits

0x6604,	// (0x0001124b) popup_snote_single_text_window_t1

0x6617,	// (0x0001125e) popup_snote_single_text_window_t2_ParamLimits

0x6617,	// (0x0001125e) popup_snote_single_text_window_t2

0x662a,	// (0x00011271) popup_snote_single_text_window_t3_ParamLimits

0x662a,	// (0x00011271) popup_snote_single_text_window_t3

0x6663,	// (0x000112aa) popup_snote_single_text_window_t4_ParamLimits

0x6663,	// (0x000112aa) popup_snote_single_text_window_t4

0x6697,	// (0x000112de) popup_snote_single_text_window_t5_ParamLimits

0x6697,	// (0x000112de) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001a231) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001a231) popup_snote_single_text_window_t

0x66c6,	// (0x0001130d) bg_popup_window_pane_cp9_ParamLimits

0x66c6,	// (0x0001130d) bg_popup_window_pane_cp9

0x65f2,	// (0x00011239) popup_snote_single_graphic_window_g1_ParamLimits

0x65f2,	// (0x00011239) popup_snote_single_graphic_window_g1

0x66d4,	// (0x0001131b) popup_snote_single_graphic_window_g2_ParamLimits

0x66d4,	// (0x0001131b) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001a23c) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001a23c) popup_snote_single_graphic_window_g

0x66e0,	// (0x00011327) popup_snote_single_graphic_window_t1_ParamLimits

0x66e0,	// (0x00011327) popup_snote_single_graphic_window_t1

0x66f3,	// (0x0001133a) popup_snote_single_graphic_window_t2_ParamLimits

0x66f3,	// (0x0001133a) popup_snote_single_graphic_window_t2

0x6706,	// (0x0001134d) popup_snote_single_graphic_window_t3_ParamLimits

0x6706,	// (0x0001134d) popup_snote_single_graphic_window_t3

0x673f,	// (0x00011386) popup_snote_single_graphic_window_t4_ParamLimits

0x673f,	// (0x00011386) popup_snote_single_graphic_window_t4

0x6773,	// (0x000113ba) popup_snote_single_graphic_window_t5_ParamLimits

0x6773,	// (0x000113ba) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001a241) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001a241) popup_snote_single_graphic_window_t

0xa318,	// (0x00014f5f) grid_graphic_popup_pane_ParamLimits

0xa318,	// (0x00014f5f) grid_graphic_popup_pane

0xa344,	// (0x00014f8b) listscroll_popup_graphic_pane_g1_ParamLimits

0xa344,	// (0x00014f8b) listscroll_popup_graphic_pane_g1

0x2449,	// (0x0000d090) listscroll_popup_graphic_pane_g2_ParamLimits

0x2449,	// (0x0000d090) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0001a626) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0001a626) listscroll_popup_graphic_pane_g

0xa36c,	// (0x00014fb3) scroll_pane_cp5

0x240c,	// (0x0000d053) cell_graphic_popup_pane_ParamLimits

0x240c,	// (0x0000d053) cell_graphic_popup_pane

0xa2a4,	// (0x00014eeb) cell_graphic_popup_pane_g1

0xa2ac,	// (0x00014ef3) cell_graphic_popup_pane_g2

0x65c6,	// (0x0001120d) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0001a61f) cell_graphic_popup_pane_g

0xa2b5,	// (0x00014efc) cell_graphic_popup_pane_t2

0x65cf,	// (0x00011216) grid_highlight_pane_cp3

0x67b4,	// (0x000113fb) list_gen_pane_ParamLimits

0x67b4,	// (0x000113fb) list_gen_pane

0x67e6,	// (0x0001142d) scroll_pane

0x23c7,	// (0x0000d00e) bg_list_pane_g1_ParamLimits

0x23c7,	// (0x0000d00e) bg_list_pane_g1

0xa221,	// (0x00014e68) bg_list_pane_g2_ParamLimits

0xa221,	// (0x00014e68) bg_list_pane_g2

0xa234,	// (0x00014e7b) bg_list_pane_g3_ParamLimits

0xa234,	// (0x00014e7b) bg_list_pane_g3

0xa246,	// (0x00014e8d) bg_list_pane_g4_ParamLimits

0xa246,	// (0x00014e8d) bg_list_pane_g4

0x23e2,	// (0x0000d029) bg_list_pane_g5_ParamLimits

0x23e2,	// (0x0000d029) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0001a614) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0001a614) bg_list_pane_g

0x2366,	// (0x0000cfad) list_double2_graphic_large_graphic_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double2_graphic_large_graphic_pane

0x2366,	// (0x0000cfad) list_double2_graphic_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double2_graphic_pane

0x2366,	// (0x0000cfad) list_double2_large_graphic_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double2_large_graphic_pane

0x2366,	// (0x0000cfad) list_double2_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double2_pane

0x2366,	// (0x0000cfad) list_double_graphic_heading_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_graphic_heading_pane

0x2366,	// (0x0000cfad) list_double_graphic_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_graphic_pane

0x2366,	// (0x0000cfad) list_double_heading_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_heading_pane

0x2366,	// (0x0000cfad) list_double_large_graphic_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_large_graphic_pane

0x2366,	// (0x0000cfad) list_double_number_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_number_pane

0x2366,	// (0x0000cfad) list_double_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_pane

0x2366,	// (0x0000cfad) list_double_time_pane_ParamLimits

0x2366,	// (0x0000cfad) list_double_time_pane

0x2366,	// (0x0000cfad) list_setting_number_pane_ParamLimits

0x2366,	// (0x0000cfad) list_setting_number_pane

0x2366,	// (0x0000cfad) list_setting_pane_ParamLimits

0x2366,	// (0x0000cfad) list_setting_pane

0x2379,	// (0x0000cfc0) list_single_2graphic_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_2graphic_pane

0x2379,	// (0x0000cfc0) list_single_graphic_heading_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_graphic_heading_pane

0x2379,	// (0x0000cfc0) list_single_graphic_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_graphic_pane

0x2379,	// (0x0000cfc0) list_single_heading_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_heading_pane

0x2379,	// (0x0000cfc0) list_single_large_graphic_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_large_graphic_pane

0x2379,	// (0x0000cfc0) list_single_number_heading_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_number_heading_pane

0x2379,	// (0x0000cfc0) list_single_number_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_number_pane

0x2379,	// (0x0000cfc0) list_single_pane_ParamLimits

0x2379,	// (0x0000cfc0) list_single_pane

0x5f26,	// (0x00010b6d) list_highlight_pane_cp1

0x68db,	// (0x00011522) list_single_pane_g1_ParamLimits

0x68db,	// (0x00011522) list_single_pane_g1

0x68e7,	// (0x0001152e) list_single_pane_g2_ParamLimits

0x68e7,	// (0x0001152e) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001a253) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001a253) list_single_pane_g

0xa963,	// (0x000155aa) list_single_pane_t1_ParamLimits

0xa963,	// (0x000155aa) list_single_pane_t1

0x68db,	// (0x00011522) list_single_number_pane_g1_ParamLimits

0x68db,	// (0x00011522) list_single_number_pane_g1

0x68e7,	// (0x0001152e) list_single_number_pane_g2_ParamLimits

0x68e7,	// (0x0001152e) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001a253) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001a253) list_single_number_pane_g

0x89eb,	// (0x00013632) list_single_number_pane_t1_ParamLimits

0x89eb,	// (0x00013632) list_single_number_pane_t1

0x21aa,	// (0x0000cdf1) list_single_number_pane_t2_ParamLimits

0x21aa,	// (0x0000cdf1) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0001a5d5) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0001a5d5) list_single_number_pane_t

0x08e1,	// (0x0000b528) list_single_graphic_pane_g1_ParamLimits

0x08e1,	// (0x0000b528) list_single_graphic_pane_g1

0x68db,	// (0x00011522) list_single_graphic_pane_g2_ParamLimits

0x68db,	// (0x00011522) list_single_graphic_pane_g2

0x68e7,	// (0x0001152e) list_single_graphic_pane_g3_ParamLimits

0x68e7,	// (0x0001152e) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001a24c) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001a24c) list_single_graphic_pane_g

0x08ed,	// (0x0000b534) list_single_graphic_pane_t1_ParamLimits

0x08ed,	// (0x0000b534) list_single_graphic_pane_t1

0x68db,	// (0x00011522) list_single_heading_pane_g1_ParamLimits

0x68db,	// (0x00011522) list_single_heading_pane_g1

0x68e7,	// (0x0001152e) list_single_heading_pane_g2_ParamLimits

0x68e7,	// (0x0001152e) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a253) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a253) list_single_heading_pane_g

0xa985,	// (0x000155cc) list_single_heading_pane_t1_ParamLimits

0xa985,	// (0x000155cc) list_single_heading_pane_t1

0x0903,	// (0x0000b54a) list_single_heading_pane_t2_ParamLimits

0x0903,	// (0x0000b54a) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001a258) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001a258) list_single_heading_pane_t

0x68db,	// (0x00011522) list_single_number_heading_pane_g1_ParamLimits

0x68db,	// (0x00011522) list_single_number_heading_pane_g1

0x68e7,	// (0x0001152e) list_single_number_heading_pane_g2_ParamLimits

0x68e7,	// (0x0001152e) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001a253) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001a253) list_single_number_heading_pane_g

0xa985,	// (0x000155cc) list_single_number_heading_pane_t1_ParamLimits

0xa985,	// (0x000155cc) list_single_number_heading_pane_t1

0x0915,	// (0x0000b55c) list_single_number_heading_pane_t2_ParamLimits

0x0915,	// (0x0000b55c) list_single_number_heading_pane_t2

0xa93d,	// (0x00015584) list_single_number_heading_pane_t3_ParamLimits

0xa93d,	// (0x00015584) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001a25d) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001a25d) list_single_number_heading_pane_t

0x89df,	// (0x00013626) list_single_graphic_heading_pane_g1_ParamLimits

0x89df,	// (0x00013626) list_single_graphic_heading_pane_g1

0x0927,	// (0x0000b56e) list_single_graphic_heading_pane_g4_ParamLimits

0x0927,	// (0x0000b56e) list_single_graphic_heading_pane_g4

0x68e7,	// (0x0001152e) list_single_graphic_heading_pane_g5_ParamLimits

0x68e7,	// (0x0001152e) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001a264) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001a264) list_single_graphic_heading_pane_g

0xa985,	// (0x000155cc) list_single_graphic_heading_pane_t1_ParamLimits

0xa985,	// (0x000155cc) list_single_graphic_heading_pane_t1

0x0938,	// (0x0000b57f) list_single_graphic_heading_pane_t2_ParamLimits

0x0938,	// (0x0000b57f) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001a26b) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001a26b) list_single_graphic_heading_pane_t

0xa979,	// (0x000155c0) list_single_large_graphic_pane_g1_ParamLimits

0xa979,	// (0x000155c0) list_single_large_graphic_pane_g1

0x68db,	// (0x00011522) list_single_large_graphic_pane_g2_ParamLimits

0x68db,	// (0x00011522) list_single_large_graphic_pane_g2

0x68e7,	// (0x0001152e) list_single_large_graphic_pane_g3_ParamLimits

0x68e7,	// (0x0001152e) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001a270) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001a270) list_single_large_graphic_pane_g

0x9110,	// (0x00013d57) wait_border_pane_g2_copy1

0x094a,	// (0x0000b591) list_single_large_graphic_pane_g4_cp2

0xa985,	// (0x000155cc) list_single_large_graphic_pane_t1_ParamLimits

0xa985,	// (0x000155cc) list_single_large_graphic_pane_t1

0x6a37,	// (0x0001167e) list_double_pane_g1_ParamLimits

0x6a37,	// (0x0001167e) list_double_pane_g1

0x6962,	// (0x000115a9) list_double_pane_g2_ParamLimits

0x6962,	// (0x000115a9) list_double_pane_g2

0x0001,

0xf630,	// (0x0001a277) list_double_pane_g_ParamLimits

0xf630,	// (0x0001a277) list_double_pane_g

0x696e,	// (0x000115b5) list_double_pane_t1_ParamLimits

0x696e,	// (0x000115b5) list_double_pane_t1

0x0952,	// (0x0000b599) list_double_pane_t2_ParamLimits

0x0952,	// (0x0000b599) list_double_pane_t2

0x0001,

0xf635,	// (0x0001a27c) list_double_pane_t_ParamLimits

0xf635,	// (0x0001a27c) list_double_pane_t

0x0964,	// (0x0000b5ab) list_double2_pane_g1_ParamLimits

0x0964,	// (0x0000b5ab) list_double2_pane_g1

0x0975,	// (0x0000b5bc) list_double2_pane_g2_ParamLimits

0x0975,	// (0x0000b5bc) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001a281) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001a281) list_double2_pane_g

0xc145,	// (0x00016d8c) list_double2_pane_t1_ParamLimits

0xc145,	// (0x00016d8c) list_double2_pane_t1

0x6b60,	// (0x000117a7) list_double2_pane_t2_ParamLimits

0x6b60,	// (0x000117a7) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001a286) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001a286) list_double2_pane_t

0x6a37,	// (0x0001167e) list_double_number_pane_g1_ParamLimits

0x6a37,	// (0x0001167e) list_double_number_pane_g1

0x6962,	// (0x000115a9) list_double_number_pane_g2_ParamLimits

0x6962,	// (0x000115a9) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001a277) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001a277) list_double_number_pane_g

0x0981,	// (0x0000b5c8) list_double_number_pane_t1_ParamLimits

0x0981,	// (0x0000b5c8) list_double_number_pane_t1

0x6a43,	// (0x0001168a) list_double_number_pane_t2_ParamLimits

0x6a43,	// (0x0001168a) list_double_number_pane_t2

0x0993,	// (0x0000b5da) list_double_number_pane_t3_ParamLimits

0x0993,	// (0x0000b5da) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001a28b) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001a28b) list_double_number_pane_t

0x6a2b,	// (0x00011672) list_double_graphic_pane_g1_ParamLimits

0x6a2b,	// (0x00011672) list_double_graphic_pane_g1

0x09a5,	// (0x0000b5ec) list_double_graphic_pane_g2_ParamLimits

0x09a5,	// (0x0000b5ec) list_double_graphic_pane_g2

0x09b4,	// (0x0000b5fb) list_double_graphic_pane_g3_ParamLimits

0x09b4,	// (0x0000b5fb) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001a292) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001a292) list_double_graphic_pane_g

0x09cc,	// (0x0000b613) list_double_graphic_pane_t1_ParamLimits

0x09cc,	// (0x0000b613) list_double_graphic_pane_t1

0x09e2,	// (0x0000b629) list_double_graphic_pane_t2_ParamLimits

0x09e2,	// (0x0000b629) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a29b) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a29b) list_double_graphic_pane_t

0x09f4,	// (0x0000b63b) list_double2_graphic_pane_g1_ParamLimits

0x09f4,	// (0x0000b63b) list_double2_graphic_pane_g1

0x6e05,	// (0x00011a4c) list_double2_graphic_pane_g2_ParamLimits

0x6e05,	// (0x00011a4c) list_double2_graphic_pane_g2

0x0975,	// (0x0000b5bc) list_double2_graphic_pane_g3_ParamLimits

0x0975,	// (0x0000b5bc) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001a2a0) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001a2a0) list_double2_graphic_pane_g

0x0a00,	// (0x0000b647) list_double2_graphic_pane_t1_ParamLimits

0x0a00,	// (0x0000b647) list_double2_graphic_pane_t1

0x6b88,	// (0x000117cf) list_double2_graphic_pane_t2_ParamLimits

0x6b88,	// (0x000117cf) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001a2a7) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001a2a7) list_double2_graphic_pane_t

0x0a16,	// (0x0000b65d) list_double_large_graphic_pane_g1_ParamLimits

0x0a16,	// (0x0000b65d) list_double_large_graphic_pane_g1

0x0a41,	// (0x0000b688) list_double_large_graphic_pane_g2_ParamLimits

0x0a41,	// (0x0000b688) list_double_large_graphic_pane_g2

0x6962,	// (0x000115a9) list_double_large_graphic_pane_g3_ParamLimits

0x6962,	// (0x000115a9) list_double_large_graphic_pane_g3

0x0a52,	// (0x0000b699) list_double_large_graphic_pane_g4_ParamLimits

0x0a52,	// (0x0000b699) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001a2ac) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001a2ac) list_double_large_graphic_pane_g

0x0a65,	// (0x0000b6ac) list_double_large_graphic_pane_t1_ParamLimits

0x0a65,	// (0x0000b6ac) list_double_large_graphic_pane_t1

0x0a7e,	// (0x0000b6c5) list_double_large_graphic_pane_t2_ParamLimits

0x0a7e,	// (0x0000b6c5) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001a2b7) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001a2b7) list_double_large_graphic_pane_t

0x0a90,	// (0x0000b6d7) list_double2_large_graphic_pane_g1_ParamLimits

0x0a90,	// (0x0000b6d7) list_double2_large_graphic_pane_g1

0x0964,	// (0x0000b5ab) list_double2_large_graphic_pane_g2_ParamLimits

0x0964,	// (0x0000b5ab) list_double2_large_graphic_pane_g2

0x0975,	// (0x0000b5bc) list_double2_large_graphic_pane_g3_ParamLimits

0x0975,	// (0x0000b5bc) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001a2bc) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001a2bc) list_double2_large_graphic_pane_g

0x0a9c,	// (0x0000b6e3) list_double2_large_graphic_pane_t1_ParamLimits

0x0a9c,	// (0x0000b6e3) list_double2_large_graphic_pane_t1

0x0ab2,	// (0x0000b6f9) list_double2_large_graphic_pane_t2_ParamLimits

0x0ab2,	// (0x0000b6f9) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001a2c3) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001a2c3) list_double2_large_graphic_pane_t

0x0ac4,	// (0x0000b70b) list_double_heading_pane_g1_ParamLimits

0x0ac4,	// (0x0000b70b) list_double_heading_pane_g1

0x0ad5,	// (0x0000b71c) list_double_heading_pane_g2_ParamLimits

0x0ad5,	// (0x0000b71c) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001a2c8) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001a2c8) list_double_heading_pane_g

0x0ae1,	// (0x0000b728) list_double_heading_pane_t1_ParamLimits

0x0ae1,	// (0x0000b728) list_double_heading_pane_t1

0x0af7,	// (0x0000b73e) list_double_heading_pane_t2_ParamLimits

0x0af7,	// (0x0000b73e) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001a2cd) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001a2cd) list_double_heading_pane_t

0x6a2b,	// (0x00011672) list_double_graphic_heading_pane_g1_ParamLimits

0x6a2b,	// (0x00011672) list_double_graphic_heading_pane_g1

0x0ac4,	// (0x0000b70b) list_double_graphic_heading_pane_g2_ParamLimits

0x0ac4,	// (0x0000b70b) list_double_graphic_heading_pane_g2

0x0ad5,	// (0x0000b71c) list_double_graphic_heading_pane_g3_ParamLimits

0x0ad5,	// (0x0000b71c) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001a2d2) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001a2d2) list_double_graphic_heading_pane_g

0x0b09,	// (0x0000b750) list_double_graphic_heading_pane_t1_ParamLimits

0x0b09,	// (0x0000b750) list_double_graphic_heading_pane_t1

0x0b1f,	// (0x0000b766) list_double_graphic_heading_pane_t2_ParamLimits

0x0b1f,	// (0x0000b766) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001a2d9) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001a2d9) list_double_graphic_heading_pane_t

0x0a41,	// (0x0000b688) list_double_time_pane_g1_ParamLimits

0x0a41,	// (0x0000b688) list_double_time_pane_g1

0x6962,	// (0x000115a9) list_double_time_pane_g2_ParamLimits

0x6962,	// (0x000115a9) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001a2de) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001a2de) list_double_time_pane_g

0x6b05,	// (0x0001174c) list_double_time_pane_t1_ParamLimits

0x6b05,	// (0x0001174c) list_double_time_pane_t1

0x0b31,	// (0x0000b778) list_double_time_pane_t2_ParamLimits

0x0b31,	// (0x0000b778) list_double_time_pane_t2

0x0b43,	// (0x0000b78a) list_double_time_pane_t3_ParamLimits

0x0b43,	// (0x0000b78a) list_double_time_pane_t3

0x0b55,	// (0x0000b79c) list_double_time_pane_t4_ParamLimits

0x0b55,	// (0x0000b79c) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001a2e3) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001a2e3) list_double_time_pane_t

0x6e05,	// (0x00011a4c) list_setting_pane_g1_ParamLimits

0x6e05,	// (0x00011a4c) list_setting_pane_g1

0x0975,	// (0x0000b5bc) list_setting_pane_g2_ParamLimits

0x0975,	// (0x0000b5bc) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001a2ec) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001a2ec) list_setting_pane_g

0x0b67,	// (0x0000b7ae) list_setting_pane_t1_ParamLimits

0x0b67,	// (0x0000b7ae) list_setting_pane_t1

0x0b7e,	// (0x0000b7c5) list_setting_pane_t2_ParamLimits

0x0b7e,	// (0x0000b7c5) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001a2f1) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001a2f1) list_setting_pane_t

0x0bbb,	// (0x0000b802) set_value_pane_cp_ParamLimits

0x0bbb,	// (0x0000b802) set_value_pane_cp

0x6e05,	// (0x00011a4c) list_setting_number_pane_g1_ParamLimits

0x6e05,	// (0x00011a4c) list_setting_number_pane_g1

0x0975,	// (0x0000b5bc) list_setting_number_pane_g2_ParamLimits

0x0975,	// (0x0000b5bc) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001a2ec) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001a2ec) list_setting_number_pane_g

0x0bc7,	// (0x0000b80e) list_setting_number_pane_t1_ParamLimits

0x0bc7,	// (0x0000b80e) list_setting_number_pane_t1

0x0bdb,	// (0x0000b822) list_setting_number_pane_t2_ParamLimits

0x0bdb,	// (0x0000b822) list_setting_number_pane_t2

0x0bf2,	// (0x0000b839) list_setting_number_pane_t3_ParamLimits

0x0bf2,	// (0x0000b839) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001a2f8) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001a2f8) list_setting_number_pane_t

0x0bbb,	// (0x0000b802) set_value_pane_ParamLimits

0x0bbb,	// (0x0000b802) set_value_pane

0x6cb4,	// (0x000118fb) bg_set_opt_pane_ParamLimits

0x6cb4,	// (0x000118fb) bg_set_opt_pane

0x6cd5,	// (0x0001191c) set_value_pane_t1

0x6ce3,	// (0x0001192a) slider_set_pane_cp3

0x6cec,	// (0x00011933) volume_small_pane_cp

0x6cf5,	// (0x0001193c) list_form_gen_pane

0x6cfe,	// (0x00011945) scroll_pane_cp8

0x0c35,	// (0x0000b87c) form_field_data_pane_ParamLimits

0x0c35,	// (0x0000b87c) form_field_data_pane

0x0c4c,	// (0x0000b893) form_field_data_wide_pane_ParamLimits

0x0c4c,	// (0x0000b893) form_field_data_wide_pane

0x0c6c,	// (0x0000b8b3) form_field_popup_pane_ParamLimits

0x0c6c,	// (0x0000b8b3) form_field_popup_pane

0x0c8a,	// (0x0000b8d1) form_field_popup_wide_pane_ParamLimits

0x0c8a,	// (0x0000b8d1) form_field_popup_wide_pane

0x6d89,	// (0x000119d0) form_field_slider_pane_ParamLimits

0x6d89,	// (0x000119d0) form_field_slider_pane

0x6d9c,	// (0x000119e3) form_field_slider_wide_pane_ParamLimits

0x6d9c,	// (0x000119e3) form_field_slider_wide_pane

0x6daf,	// (0x000119f6) data_form_pane

0x0cab,	// (0x0000b8f2) form_field_data_pane_t1

0x6ddf,	// (0x00011a26) input_focus_pane

0x6ded,	// (0x00011a34) data_form_wide_pane

0x6e25,	// (0x00011a6c) form_field_data_wide_pane_t1

0x65e4,	// (0x0001122b) input_focus_pane_cp6

0x0cc5,	// (0x0000b90c) form_field_popup_pane_t1

0x6ddf,	// (0x00011a26) input_focus_pane_cp7

0x6e61,	// (0x00011aa8) list_form_pane

0x6e75,	// (0x00011abc) form_field_popup_wide_pane_t1

0x6ddf,	// (0x00011a26) input_focus_pane_cp8

0x6e8a,	// (0x00011ad1) list_form_wide_pane

0x0ce7,	// (0x0000b92e) form_field_slider_pane_t1_ParamLimits

0x0ce7,	// (0x0000b92e) form_field_slider_pane_t1

0x0cff,	// (0x0000b946) form_field_slider_pane_t2_ParamLimits

0x0cff,	// (0x0000b946) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001a308) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001a308) form_field_slider_pane_t

0x629b,	// (0x00010ee2) input_focus_pane_cp9_ParamLimits

0x629b,	// (0x00010ee2) input_focus_pane_cp9

0x0d14,	// (0x0000b95b) slider_cont_pane_ParamLimits

0x0d14,	// (0x0000b95b) slider_cont_pane

0x6edb,	// (0x00011b22) form_field_slider_wide_pane_t1_ParamLimits

0x6edb,	// (0x00011b22) form_field_slider_wide_pane_t1

0x6eed,	// (0x00011b34) form_field_slider_wide_pane_t2_ParamLimits

0x6eed,	// (0x00011b34) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001a30d) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001a30d) form_field_slider_wide_pane_t

0x629b,	// (0x00010ee2) input_focus_pane_cp10_ParamLimits

0x629b,	// (0x00010ee2) input_focus_pane_cp10

0x0d28,	// (0x0000b96f) slider_cont_pane_cp1_ParamLimits

0x0d28,	// (0x0000b96f) slider_cont_pane_cp1

0x0d3c,	// (0x0000b983) slider_form_pane_cp

0x6f1b,	// (0x00011b62) input_focus_pane_g1

0x6f23,	// (0x00011b6a) input_focus_pane_g2

0x6f2b,	// (0x00011b72) input_focus_pane_g3

0x6f33,	// (0x00011b7a) input_focus_pane_g4

0x6f3b,	// (0x00011b82) input_focus_pane_g5

0x6f43,	// (0x00011b8a) input_focus_pane_g6

0x6f4b,	// (0x00011b92) input_focus_pane_g7

0x6f53,	// (0x00011b9a) input_focus_pane_g8

0x6f5b,	// (0x00011ba2) input_focus_pane_g9

0x5f1c,	// (0x00010b63) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001a312) input_focus_pane_g

0x9119,	// (0x00013d60) wait_border_pane_g3_copy1

0x0d44,	// (0x0000b98b) data_form_pane_t1

0x5f1c,	// (0x00010b63) wait_anim_pane_g1_copy1

0x233b,	// (0x0000cf82) data_form_wide_pane_t1

0x0d5e,	// (0x0000b9a5) list_form_graphic_pane_cp_ParamLimits

0x0d5e,	// (0x0000b9a5) list_form_graphic_pane_cp

0xa06c,	// (0x00014cb3) slider_form_pane_g1

0xa075,	// (0x00014cbc) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0001a605) slider_form_pane_g

0x0d71,	// (0x0000b9b8) list_form_graphic_pane_ParamLimits

0x0d71,	// (0x0000b9b8) list_form_graphic_pane

0x6faf,	// (0x00011bf6) list_form_graphic_pane_g1

0x6fb7,	// (0x00011bfe) list_form_graphic_pane_t1_ParamLimits

0x6fb7,	// (0x00011bfe) list_form_graphic_pane_t1

0x6006,	// (0x00010c4d) list_highlight_pane_cp5_ParamLimits

0x6006,	// (0x00010c4d) list_highlight_pane_cp5

0x0d85,	// (0x0000b9cc) find_pane_g1

0x6fd5,	// (0x00011c1c) input_find_pane

0x0d8e,	// (0x0000b9d5) input_find_pane_g1_ParamLimits

0x0d8e,	// (0x0000b9d5) input_find_pane_g1

0x0d9a,	// (0x0000b9e1) input_find_pane_t1_ParamLimits

0x0d9a,	// (0x0000b9e1) input_find_pane_t1

0x0daf,	// (0x0000b9f6) input_find_pane_t2_ParamLimits

0x0daf,	// (0x0000b9f6) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001a327) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001a327) input_find_pane_t

0x7014,	// (0x00011c5b) input_focus_pane_cp5_ParamLimits

0x7014,	// (0x00011c5b) input_focus_pane_cp5

0x0dd0,	// (0x0000ba17) bg_popup_window_pane_cp2_ParamLimits

0x0dd0,	// (0x0000ba17) bg_popup_window_pane_cp2

0x0ddd,	// (0x0000ba24) listscroll_menu_pane_ParamLimits

0x0ddd,	// (0x0000ba24) listscroll_menu_pane

0x0de9,	// (0x0000ba30) popup_submenu_window_ParamLimits

0x0de9,	// (0x0000ba30) popup_submenu_window

0x706b,	// (0x00011cb2) find_popup_pane_g1

0x7073,	// (0x00011cba) input_popup_find_pane_cp

0x7014,	// (0x00011c5b) input_focus_pane_cp4_ParamLimits

0x7014,	// (0x00011c5b) input_focus_pane_cp4

0x708b,	// (0x00011cd2) input_popup_find_pane_t1_ParamLimits

0x708b,	// (0x00011cd2) input_popup_find_pane_t1

0x5f26,	// (0x00010b6d) bg_popup_sub_pane_cp

0x70b9,	// (0x00011d00) listscroll_popup_sub_pane

0x70c1,	// (0x00011d08) list_submenu_pane_ParamLimits

0x70c1,	// (0x00011d08) list_submenu_pane

0x70d2,	// (0x00011d19) scroll_pane_cp4

0x70da,	// (0x00011d21) list_single_popup_submenu_pane_ParamLimits

0x70da,	// (0x00011d21) list_single_popup_submenu_pane

0x70ed,	// (0x00011d34) list_single_popup_submenu_pane_g1

0x70f5,	// (0x00011d3c) list_single_popup_submenu_pane_t1_ParamLimits

0x70f5,	// (0x00011d3c) list_single_popup_submenu_pane_t1

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp1_ParamLimits

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp1

0x0e1b,	// (0x0000ba62) tabs_2_active_pane_g1

0x0e23,	// (0x0000ba6a) tabs_2_active_pane_t1

0x629b,	// (0x00010ee2) bg_passive_tab_pane_cp1_ParamLimits

0x629b,	// (0x00010ee2) bg_passive_tab_pane_cp1

0x0e1b,	// (0x0000ba62) tabs_2_passive_pane_g1

0x0e23,	// (0x0000ba6a) tabs_2_passive_pane_t1

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp4

0x0e35,	// (0x0000ba7c) tabs_2_long_active_pane_t1

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp4

0x4dad,	// (0x0000f9f4) list_single_midp_graphic_pane_g4_ParamLimits

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp5

0x0e48,	// (0x0000ba8f) tabs_3_long_active_pane_t1

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp5

0x4dad,	// (0x0000f9f4) list_single_midp_graphic_pane_g4

0x6006,	// (0x00010c4d) bg_popup_window_pane_cp13_ParamLimits

0x6006,	// (0x00010c4d) bg_popup_window_pane_cp13

0x716c,	// (0x00011db3) listscroll_popup_fast_pane_ParamLimits

0x716c,	// (0x00011db3) listscroll_popup_fast_pane

0x717b,	// (0x00011dc2) grid_popup_fast_pane_ParamLimits

0x717b,	// (0x00011dc2) grid_popup_fast_pane

0x718d,	// (0x00011dd4) scroll_pane_cp9_ParamLimits

0x718d,	// (0x00011dd4) scroll_pane_cp9

0xbe1c,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbe1c,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2

0x71b1,	// (0x00011df8) input_focus_pane_cp20_ParamLimits

0x71b1,	// (0x00011df8) input_focus_pane_cp20

0x71bf,	// (0x00011e06) query_popup_data_pane_t1_ParamLimits

0x71bf,	// (0x00011e06) query_popup_data_pane_t1

0x71d2,	// (0x00011e19) query_popup_data_pane_t2_ParamLimits

0x71d2,	// (0x00011e19) query_popup_data_pane_t2

0x7218,	// (0x00011e5f) query_popup_data_pane_t3_ParamLimits

0x7218,	// (0x00011e5f) query_popup_data_pane_t3

0x7259,	// (0x00011ea0) query_popup_data_pane_t4_ParamLimits

0x7259,	// (0x00011ea0) query_popup_data_pane_t4

0x7295,	// (0x00011edc) query_popup_data_pane_t5_ParamLimits

0x7295,	// (0x00011edc) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001a32c) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001a32c) query_popup_data_pane_t

0x6f1b,	// (0x00011b62) bg_set_opt_pane_g1

0x6f23,	// (0x00011b6a) bg_set_opt_pane_g2

0x6f2b,	// (0x00011b72) bg_set_opt_pane_g3

0x6f33,	// (0x00011b7a) bg_set_opt_pane_g4

0x6f3b,	// (0x00011b82) bg_set_opt_pane_g5

0x6f43,	// (0x00011b8a) bg_set_opt_pane_g6

0x6f4b,	// (0x00011b92) bg_set_opt_pane_g7

0x6f53,	// (0x00011b9a) bg_set_opt_pane_g8

0x6f5b,	// (0x00011ba2) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001a337) bg_set_opt_pane_g

0x49a7,	// (0x0000f5ee) control_top_pane_stacon_ParamLimits

0x49a7,	// (0x0000f5ee) control_top_pane_stacon

0x49fa,	// (0x0000f641) signal_pane_stacon_ParamLimits

0x49fa,	// (0x0000f641) signal_pane_stacon

0x78b9,	// (0x00012500) stacon_top_pane_g1_ParamLimits

0x78b9,	// (0x00012500) stacon_top_pane_g1

0x4a1f,	// (0x0000f666) title_pane_stacon_ParamLimits

0x4a1f,	// (0x0000f666) title_pane_stacon

0x4a49,	// (0x0000f690) uni_indicator_pane_stacon_ParamLimits

0x4a49,	// (0x0000f690) uni_indicator_pane_stacon

0x4a5e,	// (0x0000f6a5) battery_pane_stacon_ParamLimits

0x4a5e,	// (0x0000f6a5) battery_pane_stacon

0x4aa2,	// (0x0000f6e9) control_bottom_pane_stacon_ParamLimits

0x4aa2,	// (0x0000f6e9) control_bottom_pane_stacon

0x4ac5,	// (0x0000f70c) navi_pane_stacon_ParamLimits

0x4ac5,	// (0x0000f70c) navi_pane_stacon

0x78db,	// (0x00012522) stacon_bottom_pane_g1_ParamLimits

0x78db,	// (0x00012522) stacon_bottom_pane_g1

0x4708,	// (0x0000f34f) aid_levels_signal_lsc_ParamLimits

0x4708,	// (0x0000f34f) aid_levels_signal_lsc

0x471f,	// (0x0000f366) signal_pane_stacon_g1_ParamLimits

0x471f,	// (0x0000f366) signal_pane_stacon_g1

0x4733,	// (0x0000f37a) signal_pane_stacon_g2_ParamLimits

0x4733,	// (0x0000f37a) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001a34a) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001a34a) signal_pane_stacon_g

0x4768,	// (0x0000f3af) title_pane_stacon_t1_ParamLimits

0x4768,	// (0x0000f3af) title_pane_stacon_t1

0x72d9,	// (0x00011f20) uni_indicator_pane_stacon_g1

0x72e3,	// (0x00011f2a) uni_indicator_pane_stacon_g2

0x72ed,	// (0x00011f34) uni_indicator_pane_stacon_g3

0x72f7,	// (0x00011f3e) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001a356) uni_indicator_pane_stacon_g

0x478d,	// (0x0000f3d4) control_top_pane_stacon_g1

0x4795,	// (0x0000f3dc) control_top_pane_stacon_t1_ParamLimits

0x4795,	// (0x0000f3dc) control_top_pane_stacon_t1

0x47cc,	// (0x0000f413) aid_levels_battery_lsc_ParamLimits

0x47cc,	// (0x0000f413) aid_levels_battery_lsc

0x47e4,	// (0x0000f42b) battery_pane_stacon_g1_ParamLimits

0x47e4,	// (0x0000f42b) battery_pane_stacon_g1

0x47f7,	// (0x0000f43e) battery_pane_stacon_g2_ParamLimits

0x47f7,	// (0x0000f43e) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001a35f) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001a35f) battery_pane_stacon_g

0x4835,	// (0x0000f47c) navi_icon_pane_stacon

0x4849,	// (0x0000f490) navi_navi_pane_stacon

0x4835,	// (0x0000f47c) navi_text_pane_stacon

0x478d,	// (0x0000f3d4) control_bottom_pane_stacon_g1

0x485d,	// (0x0000f4a4) control_bottom_pane_stacon_t1_ParamLimits

0x485d,	// (0x0000f4a4) control_bottom_pane_stacon_t1

0x0e5a,	// (0x0000baa1) grid_app_pane_ParamLimits

0x0e5a,	// (0x0000baa1) grid_app_pane

0x0e90,	// (0x0000bad7) scroll_pane_cp15_ParamLimits

0x0e90,	// (0x0000bad7) scroll_pane_cp15

0x0ead,	// (0x0000baf4) cell_app_pane_ParamLimits

0x0ead,	// (0x0000baf4) cell_app_pane

0x0ef4,	// (0x0000bb3b) cell_app_pane_g1_ParamLimits

0x0ef4,	// (0x0000bb3b) cell_app_pane_g1

0x73a0,	// (0x00011fe7) cell_app_pane_g2_ParamLimits

0x73a0,	// (0x00011fe7) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001a364) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001a364) cell_app_pane_g

0x73ac,	// (0x00011ff3) cell_app_pane_t1_ParamLimits

0x73ac,	// (0x00011ff3) cell_app_pane_t1

0x73be,	// (0x00012005) grid_highlight_pane_ParamLimits

0x73be,	// (0x00012005) grid_highlight_pane

0x6f1b,	// (0x00011b62) cell_highlight_pane_g1

0x6f23,	// (0x00011b6a) cell_highlight_pane_g2

0x6f2b,	// (0x00011b72) cell_highlight_pane_g3

0x6f33,	// (0x00011b7a) cell_highlight_pane_g4

0x6f3b,	// (0x00011b82) cell_highlight_pane_g5

0x6f43,	// (0x00011b8a) cell_highlight_pane_g6

0x6f4b,	// (0x00011b92) cell_highlight_pane_g7

0x6f53,	// (0x00011b9a) cell_highlight_pane_g8

0x6f5b,	// (0x00011ba2) cell_highlight_pane_g9

0x5f1c,	// (0x00010b63) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001a312) cell_highlight_pane_g

0x73cf,	// (0x00012016) bg_scroll_pane

0x48a7,	// (0x0000f4ee) scroll_handle_pane

0x7416,	// (0x0001205d) scroll_bg_pane_g1

0x742b,	// (0x00012072) scroll_bg_pane_g2

0x7443,	// (0x0001208a) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001a369) scroll_bg_pane_g

0x7458,	// (0x0001209f) scroll_handle_focus_pane_ParamLimits

0x7458,	// (0x0001209f) scroll_handle_focus_pane

0x7416,	// (0x0001205d) scroll_handle_pane_g1

0x7465,	// (0x000120ac) scroll_handle_pane_g2

0x7443,	// (0x0001208a) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001a370) scroll_handle_pane_g

0x7014,	// (0x00011c5b) bg_popup_sub_pane_cp21_ParamLimits

0x7014,	// (0x00011c5b) bg_popup_sub_pane_cp21

0x7479,	// (0x000120c0) popup_fep_japan_predictive_window_t1_ParamLimits

0x7479,	// (0x000120c0) popup_fep_japan_predictive_window_t1

0x7490,	// (0x000120d7) popup_fep_japan_predictive_window_t2_ParamLimits

0x7490,	// (0x000120d7) popup_fep_japan_predictive_window_t2

0x74c3,	// (0x0001210a) popup_fep_japan_predictive_window_t3_ParamLimits

0x74c3,	// (0x0001210a) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001a377) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001a377) popup_fep_japan_predictive_window_t

0x5f26,	// (0x00010b6d) bg_popup_sub_pane_cp23

0x74fa,	// (0x00012141) listscroll_japin_cand_pane

0x7502,	// (0x00012149) popup_fep_japan_candidate_window_t1

0x7510,	// (0x00012157) candidate_pane_ParamLimits

0x7510,	// (0x00012157) candidate_pane

0x7522,	// (0x00012169) scroll_pane_cp30

0x752a,	// (0x00012171) list_single_popup_jap_candidate_pane_ParamLimits

0x752a,	// (0x00012171) list_single_popup_jap_candidate_pane

0x5f26,	// (0x00010b6d) list_highlight_pane_cp30

0x753e,	// (0x00012185) list_single_popup_jap_candidate_pane_t1

0x754d,	// (0x00012194) level_1_signal

0x755a,	// (0x000121a1) level_2_signal

0x7567,	// (0x000121ae) level_3_signal

0x7574,	// (0x000121bb) level_4_signal

0x7581,	// (0x000121c8) level_5_signal

0x758e,	// (0x000121d5) level_6_signal

0x759b,	// (0x000121e2) level_7_signal

0x754d,	// (0x00012194) level_1_battery

0x755a,	// (0x000121a1) level_2_battery

0x7567,	// (0x000121ae) level_3_battery

0x7574,	// (0x000121bb) level_4_battery

0x7581,	// (0x000121c8) level_5_battery

0x758e,	// (0x000121d5) level_6_battery

0x759b,	// (0x000121e2) level_7_battery

0x75c0,	// (0x00012207) list_menu_pane_ParamLimits

0x75c0,	// (0x00012207) list_menu_pane

0x75d1,	// (0x00012218) scroll_pane_cp25_ParamLimits

0x75d1,	// (0x00012218) scroll_pane_cp25

0x75ea,	// (0x00012231) list_double2_graphic_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double2_graphic_pane_cp2

0x75ea,	// (0x00012231) list_double2_large_graphic_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double2_large_graphic_pane_cp2

0x75ea,	// (0x00012231) list_double2_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double2_pane_cp2

0x75ea,	// (0x00012231) list_double_graphic_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double_graphic_pane_cp2

0x75ea,	// (0x00012231) list_double_large_graphic_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double_large_graphic_pane_cp2

0x75ea,	// (0x00012231) list_double_number_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double_number_pane_cp2

0x75ea,	// (0x00012231) list_double_pane_cp2_ParamLimits

0x75ea,	// (0x00012231) list_double_pane_cp2

0x0f32,	// (0x0000bb79) list_single_2graphic_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_2graphic_pane_cp2

0x0f32,	// (0x0000bb79) list_single_graphic_heading_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_graphic_heading_pane_cp2

0x0f32,	// (0x0000bb79) list_single_graphic_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_graphic_pane_cp2

0x0f32,	// (0x0000bb79) list_single_heading_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_heading_pane_cp2

0x7623,	// (0x0001226a) list_single_large_graphic_pane_cp2_ParamLimits

0x7623,	// (0x0001226a) list_single_large_graphic_pane_cp2

0x0f32,	// (0x0000bb79) list_single_number_heading_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_number_heading_pane_cp2

0x0f32,	// (0x0000bb79) list_single_number_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_number_pane_cp2

0x0f32,	// (0x0000bb79) list_single_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_pane_cp2

0x7679,	// (0x000122c0) bg_popup_sub_pane_cp22

0x4959,	// (0x0000f5a0) popup_side_volume_key_window_g1

0x4983,	// (0x0000f5ca) popup_side_volume_key_window_t1

0x499f,	// (0x0000f5e6) volume_small_pane_cp1

0x629b,	// (0x00010ee2) bg_popup_sub_pane_cp24_ParamLimits

0x629b,	// (0x00010ee2) bg_popup_sub_pane_cp24

0x768f,	// (0x000122d6) fep_china_uni_candidate_pane_ParamLimits

0x768f,	// (0x000122d6) fep_china_uni_candidate_pane

0x76a3,	// (0x000122ea) fep_china_uni_entry_pane

0x76b3,	// (0x000122fa) popup_fep_china_uni_window_g1

0x76cf,	// (0x00012316) fep_china_uni_entry_pane_g1

0x76d7,	// (0x0001231e) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001a3a4) fep_china_uni_entry_pane_g

0x76df,	// (0x00012326) fep_entry_item_pane

0x76e9,	// (0x00012330) fep_candidate_item_pane

0x76f1,	// (0x00012338) fep_china_uni_candidate_pane_g1

0x76f9,	// (0x00012340) fep_china_uni_candidate_pane_g2

0x7701,	// (0x00012348) fep_china_uni_candidate_pane_g3

0x7709,	// (0x00012350) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001a3a9) fep_china_uni_candidate_pane_g

0x5f1c,	// (0x00010b63) fep_entry_item_pane_g1

0x7711,	// (0x00012358) fep_entry_item_pane_t1_ParamLimits

0x7711,	// (0x00012358) fep_entry_item_pane_t1

0x7727,	// (0x0001236e) fep_candidate_item_pane_t1_ParamLimits

0x7727,	// (0x0001236e) fep_candidate_item_pane_t1

0x773c,	// (0x00012383) fep_candidate_item_pane_t2_ParamLimits

0x773c,	// (0x00012383) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001a3b2) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001a3b2) fep_candidate_item_pane_t

0x6006,	// (0x00010c4d) list_highlight_pane_cp31_ParamLimits

0x6006,	// (0x00010c4d) list_highlight_pane_cp31

0x774e,	// (0x00012395) level_1_signal_lsc

0x7757,	// (0x0001239e) level_2_signal_lsc

0x7760,	// (0x000123a7) level_3_signal_lsc

0x7769,	// (0x000123b0) level_4_signal_lsc

0x7772,	// (0x000123b9) level_5_signal_lsc

0x777b,	// (0x000123c2) level_6_signal_lsc

0x7784,	// (0x000123cb) level_7_signal_lsc

0x7784,	// (0x000123cb) level_1_battery_lsc

0x778d,	// (0x000123d4) level_2_battery_lsc

0x7796,	// (0x000123dd) level_3_battery_lsc

0x779f,	// (0x000123e6) level_4_battery_lsc

0x77a8,	// (0x000123ef) level_5_battery_lsc

0x77b1,	// (0x000123f8) level_6_battery_lsc

0x774e,	// (0x00012395) level_7_battery_lsc

0x77ba,	// (0x00012401) scroll_handle_focus_pane_g1

0x77c3,	// (0x0001240a) scroll_handle_focus_pane_g2

0x77cc,	// (0x00012413) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001a3b7) scroll_handle_focus_pane_g

0x0f94,	// (0x0000bbdb) list_single_2graphic_pane_g1_ParamLimits

0x0f94,	// (0x0000bbdb) list_single_2graphic_pane_g1

0x0927,	// (0x0000b56e) list_single_2graphic_pane_g2_ParamLimits

0x0927,	// (0x0000b56e) list_single_2graphic_pane_g2

0x68e7,	// (0x0001152e) list_single_2graphic_pane_g3_ParamLimits

0x68e7,	// (0x0001152e) list_single_2graphic_pane_g3

0x0fa0,	// (0x0000bbe7) list_single_2graphic_pane_g4_ParamLimits

0x0fa0,	// (0x0000bbe7) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001a3be) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001a3be) list_single_2graphic_pane_g

0x0fac,	// (0x0000bbf3) list_single_2graphic_pane_t1_ParamLimits

0x0fac,	// (0x0000bbf3) list_single_2graphic_pane_t1

0x0fda,	// (0x0000bc21) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0fda,	// (0x0000bc21) list_double2_graphic_large_graphic_pane_g1

0x0964,	// (0x0000b5ab) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0964,	// (0x0000b5ab) list_double2_graphic_large_graphic_pane_g2

0x0975,	// (0x0000b5bc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0975,	// (0x0000b5bc) list_double2_graphic_large_graphic_pane_g3

0x0fec,	// (0x0000bc33) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0fec,	// (0x0000bc33) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001a3c7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001a3c7) list_double2_graphic_large_graphic_pane_g

0x0ff8,	// (0x0000bc3f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0ff8,	// (0x0000bc3f) list_double2_graphic_large_graphic_pane_t1

0x100e,	// (0x0000bc55) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x100e,	// (0x0000bc55) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001a3d0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001a3d0) list_double2_graphic_large_graphic_pane_t

0x79a6,	// (0x000125ed) popup_fast_swap_window_ParamLimits

0x79a6,	// (0x000125ed) popup_fast_swap_window

0x79c2,	// (0x00012609) popup_side_volume_key_window

0x79dc,	// (0x00012623) stacon_top_pane

0x79e6,	// (0x0001262d) status_pane_ParamLimits

0x79e6,	// (0x0001262d) status_pane

0x79dc,	// (0x00012623) status_small_pane

0x5f26,	// (0x00010b6d) control_pane

0x5f26,	// (0x00010b6d) stacon_bottom_pane

0x6cfe,	// (0x00011945) scroll_pane_cp121

0x6cf5,	// (0x0001193c) set_content_pane

0x1029,	// (0x0000bc70) bg_active_tab_pane_g1_cp1

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp1

0x1020,	// (0x0000bc67) bg_active_tab_pane_g3_cp1

0x1029,	// (0x0000bc70) bg_passive_tab_pane_g1_cp1

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp1

0x1020,	// (0x0000bc67) bg_passive_tab_pane_g3_cp1

0x103b,	// (0x0000bc82) bg_active_tab_pane_g1_cp2

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp2

0x1032,	// (0x0000bc79) bg_active_tab_pane_g3_cp2

0x103b,	// (0x0000bc82) bg_passive_tab_pane_g1_cp2

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp2

0x1032,	// (0x0000bc79) bg_passive_tab_pane_g3_cp2

0x104d,	// (0x0000bc94) bg_active_tab_pane_g1_cp3

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp3

0x1044,	// (0x0000bc8b) bg_active_tab_pane_g3_cp3

0x104d,	// (0x0000bc94) bg_passive_tab_pane_g1_cp3

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp3

0x1044,	// (0x0000bc8b) bg_passive_tab_pane_g3_cp3

0x105f,	// (0x0000bca6) bg_active_tab_pane_g1_cp4

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp4

0x1056,	// (0x0000bc9d) bg_active_tab_pane_g3_cp4

0x105f,	// (0x0000bca6) bg_passive_tab_pane_g1_cp4

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp4

0x1056,	// (0x0000bc9d) bg_passive_tab_pane_g3_cp4

0x78f7,	// (0x0001253e) bg_active_tab_pane_g1_cp5

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp5

0x7900,	// (0x00012547) bg_active_tab_pane_g3_cp5

0x78f7,	// (0x0001253e) bg_passive_tab_pane_g1_cp5

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp5

0x7900,	// (0x00012547) bg_passive_tab_pane_g3_cp5

0xef11,	// (0x00019b58) list_set_graphic_pane_ParamLimits

0xef11,	// (0x00019b58) list_set_graphic_pane

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp4

0x7927,	// (0x0001256e) list_set_graphic_pane_g1_ParamLimits

0x7927,	// (0x0001256e) list_set_graphic_pane_g1

0x7933,	// (0x0001257a) list_set_graphic_pane_g2_ParamLimits

0x7933,	// (0x0001257a) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001a3d5) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001a3d5) list_set_graphic_pane_g

0x0009,

0xfaed,	// (0x0001a734) volume_small_pane_cp_g

0x7957,	// (0x0001259e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7957,	// (0x0001259e) list_double2_large_graphic_pane_g1_cp2

0x7965,	// (0x000125ac) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7965,	// (0x000125ac) list_double2_large_graphic_pane_g2_cp2

0x7976,	// (0x000125bd) list_double2_large_graphic_pane_g3_cp2

0x797e,	// (0x000125c5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x797e,	// (0x000125c5) list_double2_large_graphic_pane_t1_cp2

0x7994,	// (0x000125db) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7994,	// (0x000125db) list_double2_large_graphic_pane_t2_cp2

0x9bec,	// (0x00014833) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9bec,	// (0x00014833) list_double_large_graphic_pane_g1_cp2

0x9bff,	// (0x00014846) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9bff,	// (0x00014846) list_double_large_graphic_pane_g2_cp2

0x7b04,	// (0x0001274b) list_double_large_graphic_pane_g3_cp2

0x9c10,	// (0x00014857) list_double_large_graphic_pane_g4_cp

0x9c18,	// (0x0001485f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9c18,	// (0x0001485f) list_double_large_graphic_pane_t1_cp2

0x9c2f,	// (0x00014876) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9c2f,	// (0x00014876) list_double_large_graphic_pane_t2_cp2

0x79f4,	// (0x0001263b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x79f4,	// (0x0001263b) list_double2_graphic_pane_g1_cp2

0x7a02,	// (0x00012649) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7a02,	// (0x00012649) list_double2_graphic_pane_g2_cp2

0x7a13,	// (0x0001265a) list_double2_graphic_pane_g3_cp2

0x7a1d,	// (0x00012664) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7a1d,	// (0x00012664) list_double2_graphic_pane_t1_cp2

0x7a33,	// (0x0001267a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7a33,	// (0x0001267a) list_double2_graphic_pane_t2_cp2

0x7a45,	// (0x0001268c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7a45,	// (0x0001268c) list_single_number_heading_pane_g1_cp2

0x7a51,	// (0x00012698) list_single_number_heading_pane_g2_cp2

0x7a59,	// (0x000126a0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7a59,	// (0x000126a0) list_single_number_heading_pane_t1_cp2

0x7a6f,	// (0x000126b6) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7a6f,	// (0x000126b6) list_single_number_heading_pane_t2_cp2

0x7a83,	// (0x000126ca) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7a83,	// (0x000126ca) list_single_number_heading_pane_t3_cp2

0x7a45,	// (0x0001268c) list_single_heading_pane_g1_cp2_ParamLimits

0x7a45,	// (0x0001268c) list_single_heading_pane_g1_cp2

0x7a51,	// (0x00012698) list_single_heading_pane_g2_cp2

0x7a59,	// (0x000126a0) list_single_heading_pane_t1_cp2_ParamLimits

0x7a59,	// (0x000126a0) list_single_heading_pane_t1_cp2

0x99f4,	// (0x0001463b) list_single_heading_pane_t2_cp2_ParamLimits

0x99f4,	// (0x0001463b) list_single_heading_pane_t2_cp2

0x9936,	// (0x0001457d) list_double_graphic_pane_g1_cp2_ParamLimits

0x9936,	// (0x0001457d) list_double_graphic_pane_g1_cp2

0x9942,	// (0x00014589) list_double_graphic_pane_g2_cp2_ParamLimits

0x9942,	// (0x00014589) list_double_graphic_pane_g2_cp2

0x9951,	// (0x00014598) list_double_graphic_pane_g3_cp2

0x9959,	// (0x000145a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x9959,	// (0x000145a0) list_double_graphic_pane_t1_cp2

0x996f,	// (0x000145b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x996f,	// (0x000145b6) list_double_graphic_pane_t2_cp2

0x7af8,	// (0x0001273f) list_double_number_pane_g1_cp2_ParamLimits

0x7af8,	// (0x0001273f) list_double_number_pane_g1_cp2

0x7b04,	// (0x0001274b) list_double_number_pane_g2_cp2

0x98fa,	// (0x00014541) list_double_number_pane_t1_cp2_ParamLimits

0x98fa,	// (0x00014541) list_double_number_pane_t1_cp2

0x990e,	// (0x00014555) list_double_number_pane_t2_cp2_ParamLimits

0x990e,	// (0x00014555) list_double_number_pane_t2_cp2

0x9924,	// (0x0001456b) list_double_number_pane_t3_cp2_ParamLimits

0x9924,	// (0x0001456b) list_double_number_pane_t3_cp2

0x97e3,	// (0x0001442a) list_single_graphic_pane_g1_cp2_ParamLimits

0x97e3,	// (0x0001442a) list_single_graphic_pane_g1_cp2

0x7b5c,	// (0x000127a3) list_single_graphic_pane_g2_cp2_ParamLimits

0x7b5c,	// (0x000127a3) list_single_graphic_pane_g2_cp2

0x7b68,	// (0x000127af) list_single_graphic_pane_g3_cp2

0x97b9,	// (0x00014400) list_single_graphic_pane_t1_cp2_ParamLimits

0x97b9,	// (0x00014400) list_single_graphic_pane_t1_cp2

0x7b5c,	// (0x000127a3) list_single_number_pane_g1_cp2_ParamLimits

0x7b5c,	// (0x000127a3) list_single_number_pane_g1_cp2

0x7b68,	// (0x000127af) list_single_number_pane_g2_cp2

0x97b9,	// (0x00014400) list_single_number_pane_t1_cp2_ParamLimits

0x97b9,	// (0x00014400) list_single_number_pane_t1_cp2

0x97cf,	// (0x00014416) list_single_number_pane_t2_cp2_ParamLimits

0x97cf,	// (0x00014416) list_single_number_pane_t2_cp2

0x7965,	// (0x000125ac) list_double2_pane_g1_cp2_ParamLimits

0x7965,	// (0x000125ac) list_double2_pane_g1_cp2

0x7976,	// (0x000125bd) list_double2_pane_g2_cp2

0x7ad0,	// (0x00012717) list_double2_pane_t1_cp2_ParamLimits

0x7ad0,	// (0x00012717) list_double2_pane_t1_cp2

0x7ae6,	// (0x0001272d) list_double2_pane_t2_cp2_ParamLimits

0x7ae6,	// (0x0001272d) list_double2_pane_t2_cp2

0x7af8,	// (0x0001273f) list_double_pane_g1_cp2_ParamLimits

0x7af8,	// (0x0001273f) list_double_pane_g1_cp2

0x7b04,	// (0x0001274b) list_double_pane_g2_cp2

0x7b0c,	// (0x00012753) list_double_pane_t1_cp2_ParamLimits

0x7b0c,	// (0x00012753) list_double_pane_t1_cp2

0x7b22,	// (0x00012769) list_double_pane_t2_cp2_ParamLimits

0x7b22,	// (0x00012769) list_double_pane_t2_cp2

0x7b4c,	// (0x00012793) list_single_pane_cp2_g3

0x7b5c,	// (0x000127a3) list_single_pane_g1_cp2_ParamLimits

0x7b5c,	// (0x000127a3) list_single_pane_g1_cp2

0x7b68,	// (0x000127af) list_single_pane_g2_cp2

0x7b70,	// (0x000127b7) list_single_pane_t1_cp2_ParamLimits

0x7b70,	// (0x000127b7) list_single_pane_t1_cp2

0x7b88,	// (0x000127cf) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7b88,	// (0x000127cf) list_single_large_graphic_pane_g1_cp2

0x7b96,	// (0x000127dd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7b96,	// (0x000127dd) list_single_large_graphic_pane_g2_cp2

0x7ba2,	// (0x000127e9) list_single_large_graphic_pane_g3_cp2

0x7baa,	// (0x000127f1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7baa,	// (0x000127f1) list_single_large_graphic_pane_g4_cp1

0x7bc4,	// (0x0001280b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7bc4,	// (0x0001280b) list_single_large_graphic_pane_t1_cp2

0x9783,	// (0x000143ca) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9783,	// (0x000143ca) list_single_graphic_heading_pane_g1_cp2

0x9750,	// (0x00014397) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9750,	// (0x00014397) list_single_graphic_heading_pane_g4_cp2

0x7b68,	// (0x000127af) list_single_graphic_heading_pane_g5_cp2

0x978f,	// (0x000143d6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x978f,	// (0x000143d6) list_single_graphic_heading_pane_t1_cp2

0x97a5,	// (0x000143ec) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x97a5,	// (0x000143ec) list_single_graphic_heading_pane_t2_cp2

0x9744,	// (0x0001438b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9744,	// (0x0001438b) list_single_2graphic_pane_g1_cp2

0x9750,	// (0x00014397) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9750,	// (0x00014397) list_single_2graphic_pane_g2_cp2

0x7b68,	// (0x000127af) list_single_2graphic_pane_g3_cp2

0x9761,	// (0x000143a8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9761,	// (0x000143a8) list_single_2graphic_pane_g4_cp2

0x976d,	// (0x000143b4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x976d,	// (0x000143b4) list_single_2graphic_pane_t1_cp2

0x5f1c,	// (0x00010b63) list_highlight_pane_g10_cp1

0x932c,	// (0x00013f73) list_highlight_pane_g1_cp1

0x9334,	// (0x00013f7b) list_highlight_pane_g2_cp1

0x933c,	// (0x00013f83) list_highlight_pane_g3_cp1

0x9344,	// (0x00013f8b) list_highlight_pane_g4_cp1

0x934c,	// (0x00013f93) list_highlight_pane_g5_cp1

0x9354,	// (0x00013f9b) list_highlight_pane_g6_cp1

0x935c,	// (0x00013fa3) list_highlight_pane_g7_cp1

0x9364,	// (0x00013fab) list_highlight_pane_g8_cp1

0x936c,	// (0x00013fb3) list_highlight_pane_g9_cp1

0x1e97,	// (0x0000cade) form_field_slider_pane_t3

0x1ea7,	// (0x0000caee) form_field_slider_pane_t4

0x9260,	// (0x00013ea7) slider_form_pane_ParamLimits

0x9260,	// (0x00013ea7) slider_form_pane

0x5f26,	// (0x00010b6d) control_abbreviations

0x5f26,	// (0x00010b6d) control_conventions

0x5f26,	// (0x00010b6d) control_definitions

0x5f26,	// (0x00010b6d) format_table_attribute

0x9a40,	// (0x00014687) bg_popup_preview_window_pane_g9

0x5f26,	// (0x00010b6d) format_table_data2

0x5f26,	// (0x00010b6d) format_table_data3

0x5f26,	// (0x00010b6d) format_table_data_example

0x0008,

0x5f26,	// (0x00010b6d) intro_purpose

0xf91e,	// (0x0001a565) bg_popup_preview_window_pane_g

0x5f26,	// (0x00010b6d) texts_category

0x5f26,	// (0x00010b6d) texts_graphics

0x7bda,	// (0x00012821) text_digital

0x7be9,	// (0x00012830) text_primary

0x7bf8,	// (0x0001283f) text_primary_small

0x7c07,	// (0x0001284e) text_secondary

0x7c16,	// (0x0001285d) text_title

0xa278,	// (0x00014ebf) bg_passive_tab_pane_g1_cp3_srt

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp3_srt

0xa281,	// (0x00014ec8) bg_passive_tab_pane_g3_cp3_srt

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp3_srt_ParamLimits

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp3_srt

0xa28a,	// (0x00014ed1) tabs_4_active_pane_srt_g1

0x23f6,	// (0x0000d03d) tabs_4_active_pane_srt_t1_ParamLimits

0x23f6,	// (0x0000d03d) tabs_4_active_pane_srt_t1

0xa278,	// (0x00014ebf) bg_active_tab_pane_g1_cp3_copy1

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp3_copy1

0xa281,	// (0x00014ec8) bg_active_tab_pane_g3_cp3_copy1

0x6006,	// (0x00010c4d) tabs_2_long_active_pane_srt_ParamLimits

0x6006,	// (0x00010c4d) tabs_2_long_active_pane_srt

0x6006,	// (0x00010c4d) tabs_2_long_passive_pane_srt_ParamLimits

0x6006,	// (0x00010c4d) tabs_2_long_passive_pane_srt

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp4_srt

0x9ead,	// (0x00014af4) bg_passive_tab_pane_g1_cp4_srt

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp4_srt

0x9eb6,	// (0x00014afd) bg_passive_tab_pane_g3_cp4_srt

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp4_srt_ParamLimits

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp4_srt

0x21d2,	// (0x0000ce19) tabs_2_long_active_pane_srt_t1_ParamLimits

0x21d2,	// (0x0000ce19) tabs_2_long_active_pane_srt_t1

0x9ead,	// (0x00014af4) bg_active_tab_pane_g1_cp4_srt

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp4_srt

0x9eb6,	// (0x00014afd) bg_active_tab_pane_g3_cp4_srt

0x629b,	// (0x00010ee2) tabs_3_long_active_pane_srt_ParamLimits

0x629b,	// (0x00010ee2) tabs_3_long_active_pane_srt

0x629b,	// (0x00010ee2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x629b,	// (0x00010ee2) tabs_3_long_passive_pane_cp_srt

0x629b,	// (0x00010ee2) tabs_3_long_passive_pane_srt_ParamLimits

0x629b,	// (0x00010ee2) tabs_3_long_passive_pane_srt

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp5_srt

0x78f7,	// (0x0001253e) bg_passive_tab_pane_g1_cp5_srt

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp5_srt

0x7900,	// (0x00012547) bg_passive_tab_pane_g3_cp5_srt

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp5_srt_ParamLimits

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp5_srt

0x21bc,	// (0x0000ce03) tabs_3_long_active_pane_srt_t1_ParamLimits

0x21bc,	// (0x0000ce03) tabs_3_long_active_pane_srt_t1

0x78f7,	// (0x0001253e) bg_active_tab_pane_g1_cp5_srt

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp5_srt

0x7900,	// (0x00012547) bg_active_tab_pane_g3_cp5_srt

0x9e8d,	// (0x00014ad4) navi_text_pane_srt_t1

0x9e85,	// (0x00014acc) navi_icon_pane_srt_g1

0x7de5,	// (0x00012a2c) midp_editing_number_pane_srt

0x7c25,	// (0x0001286c) midp_ticker_pane_srt

0x7ded,	// (0x00012a34) midp_ticker_pane_srt_g1

0x7df5,	// (0x00012a3c) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001a3f4) midp_ticker_pane_srt_g

0x7dfd,	// (0x00012a44) midp_ticker_pane_srt_t1

0x9e76,	// (0x00014abd) midp_editing_number_pane_t1_copy1

0x1068,	// (0x0000bcaf) listscroll_midp_pane

0x1068,	// (0x0000bcaf) midp_form_pane

0x7c9d,	// (0x000128e4) midp_info_popup_window_ParamLimits

0x7c9d,	// (0x000128e4) midp_info_popup_window

0x7014,	// (0x00011c5b) bg_popup_sub_pane_cp50_ParamLimits

0x7014,	// (0x00011c5b) bg_popup_sub_pane_cp50

0x8f92,	// (0x00013bd9) listscroll_midp_info_pane_ParamLimits

0x8f92,	// (0x00013bd9) listscroll_midp_info_pane

0x8f7a,	// (0x00013bc1) listscroll_form_midp_pane_ParamLimits

0x8f7a,	// (0x00013bc1) listscroll_form_midp_pane

0x8f86,	// (0x00013bcd) scroll_bar_cp050

0x1e8b,	// (0x0000cad2) list_midp_pane

0xae29,	// (0x00015a70) signal_pane_g2_cp

0x8e94,	// (0x00013adb) listscroll_midp_info_pane_t1_ParamLimits

0x8e94,	// (0x00013adb) listscroll_midp_info_pane_t1

0x8eac,	// (0x00013af3) listscroll_midp_info_pane_t2_ParamLimits

0x8eac,	// (0x00013af3) listscroll_midp_info_pane_t2

0x8eea,	// (0x00013b31) listscroll_midp_info_pane_t3_ParamLimits

0x8eea,	// (0x00013b31) listscroll_midp_info_pane_t3

0x8f24,	// (0x00013b6b) listscroll_midp_info_pane_t4_ParamLimits

0x8f24,	// (0x00013b6b) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0001a4a0) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0001a4a0) listscroll_midp_info_pane_t

0x70d2,	// (0x00011d19) scroll_pane_cp21

0x8e38,	// (0x00013a7f) form_midp_field_choice_group_pane

0x8e41,	// (0x00013a88) form_midp_field_text_pane

0x8e7a,	// (0x00013ac1) form_midp_field_time_pane

0x8e82,	// (0x00013ac9) form_midp_gauge_slider_pane

0x8e8b,	// (0x00013ad2) form_midp_gauge_wait_pane

0x5f26,	// (0x00010b6d) form_midp_image_pane

0x1e6f,	// (0x0000cab6) list_single_midp_pane_ParamLimits

0x1e6f,	// (0x0000cab6) list_single_midp_pane

0x1e4b,	// (0x0000ca92) form_midp_field_text_pane_t1

0x8b77,	// (0x000137be) input_focus_pane_cp050

0x8deb,	// (0x00013a32) list_midp_form_text_pane

0x8d7b,	// (0x000139c2) form_midp_field_choice_group_pane_t1

0x8d89,	// (0x000139d0) input_focus_pane_cp051

0x8d9d,	// (0x000139e4) list_midp_choice_pane

0x5f26,	// (0x00010b6d) status_idle_pane

0x8d5f,	// (0x000139a6) form_midp_field_time_pane_t1

0x5f1c,	// (0x00010b63) wait_anim_pane_g2_copy1

0x8d6d,	// (0x000139b4) form_midp_field_time_pane_t2

0x0001,

0x7d4d,	// (0x00012994) aid_navinavi_width_2_pane

0xf854,	// (0x0001a49b) form_midp_field_time_pane_t

0x5f26,	// (0x00010b6d) input_focus_pane_cp052

0x5f26,	// (0x00010b6d) bg_input_focus_pane_cp040

0x8d1f,	// (0x00013966) form_midp_gauge_slider_pane_t1

0x8d2d,	// (0x00013974) form_midp_gauge_slider_pane_t2

0x1e2f,	// (0x0000ca76) form_midp_gauge_slider_pane_t3

0x1e3d,	// (0x0000ca84) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0001a492) form_midp_gauge_slider_pane_t

0x8d57,	// (0x0001399e) form_midp_slider_pane

0x6006,	// (0x00010c4d) bg_input_focus_pane_cp041_ParamLimits

0x6006,	// (0x00010c4d) bg_input_focus_pane_cp041

0x8cec,	// (0x00013933) form_midp_gauge_wait_pane_t1_ParamLimits

0x8cec,	// (0x00013933) form_midp_gauge_wait_pane_t1

0x8cfe,	// (0x00013945) form_midp_gauge_wait_pane_t2_ParamLimits

0x8cfe,	// (0x00013945) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0001a48d) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0001a48d) form_midp_gauge_wait_pane_t

0x8d10,	// (0x00013957) form_midp_wait_pane_ParamLimits

0x8d10,	// (0x00013957) form_midp_wait_pane

0x8cb6,	// (0x000138fd) form_midp_image_pane_g1

0x8cbf,	// (0x00013906) form_midp_image_pane_t1

0x8cce,	// (0x00013915) form_midp_image_pane_t2

0x8cdd,	// (0x00013924) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0001a486) form_midp_image_pane_t

0x8c9e,	// (0x000138e5) list_single_midp_pane_g1

0x8ca7,	// (0x000138ee) list_single_midp_pane_t1

0x1e18,	// (0x0000ca5f) list_midp_form_item_pane_ParamLimits

0x1e18,	// (0x0000ca5f) list_midp_form_item_pane

0x7cf5,	// (0x0001293c) list_midp_form_item_pane_t1

0x7d04,	// (0x0001294b) midp_ticker_pane_g1

0x7d10,	// (0x00012957) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001a3da) midp_ticker_pane_g

0x1114,	// (0x0000bd5b) midp_ticker_pane_t1

0x2357,	// (0x0000cf9e) midp_editing_number_pane_t1

0xa0ca,	// (0x00014d11) midp_editing_number_pane

0xa0d9,	// (0x00014d20) midp_ticker_pane

0x9e3e,	// (0x00014a85) ai_message_heading_pane

0x5f26,	// (0x00010b6d) bg_popup_window_pane_cp14

0x9e46,	// (0x00014a8d) listscroll_ai_message_pane

0x9dc8,	// (0x00014a0f) ai_message_heading_pane_g1_ParamLimits

0x9dc8,	// (0x00014a0f) ai_message_heading_pane_g1

0x9dd4,	// (0x00014a1b) ai_message_heading_pane_g2_ParamLimits

0x9dd4,	// (0x00014a1b) ai_message_heading_pane_g2

0x9de0,	// (0x00014a27) ai_message_heading_pane_g3_ParamLimits

0x9de0,	// (0x00014a27) ai_message_heading_pane_g3

0x9dec,	// (0x00014a33) ai_message_heading_pane_g4_ParamLimits

0x9dec,	// (0x00014a33) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0001a5c7) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0001a5c7) ai_message_heading_pane_g

0x9df8,	// (0x00014a3f) ai_message_heading_pane_t1_ParamLimits

0x9df8,	// (0x00014a3f) ai_message_heading_pane_t1

0x9e12,	// (0x00014a59) ai_message_heading_pane_t2_ParamLimits

0x9e12,	// (0x00014a59) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0001a5d0) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0001a5d0) ai_message_heading_pane_t

0x9e24,	// (0x00014a6b) bg_popup_heading_pane_cp1_ParamLimits

0x9e24,	// (0x00014a6b) bg_popup_heading_pane_cp1

0x9db6,	// (0x000149fd) list_ai_message_pane_ParamLimits

0x9db6,	// (0x000149fd) list_ai_message_pane

0x70d2,	// (0x00011d19) scroll_pane_cp10

0x9d52,	// (0x00014999) list_ai_message_pane_g1

0x9d5a,	// (0x000149a1) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0001a5a4) list_ai_message_pane_g

0x9d62,	// (0x000149a9) list_ai_message_pane_t1_ParamLimits

0x9d62,	// (0x000149a9) list_ai_message_pane_t1

0x9d77,	// (0x000149be) list_ai_message_pane_t2_ParamLimits

0x9d77,	// (0x000149be) list_ai_message_pane_t2

0x9d8c,	// (0x000149d3) list_ai_message_pane_t3_ParamLimits

0x9d8c,	// (0x000149d3) list_ai_message_pane_t3

0x9da1,	// (0x000149e8) list_ai_message_pane_t4_ParamLimits

0x9da1,	// (0x000149e8) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0001a5a9) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0001a5a9) list_ai_message_pane_t

0x2185,	// (0x0000cdcc) cell_ai_soft_ind_pane_ParamLimits

0x2185,	// (0x0000cdcc) cell_ai_soft_ind_pane

0x7d2e,	// (0x00012975) cell_ai_soft_ind_pane_g1_ParamLimits

0x7d2e,	// (0x00012975) cell_ai_soft_ind_pane_g1

0x5f26,	// (0x00010b6d) grid_highlight_cp1

0x7d3b,	// (0x00012982) text_secondary_cp56_ParamLimits

0x7d3b,	// (0x00012982) text_secondary_cp56

0x9d11,	// (0x00014958) example_general_pane_ParamLimits

0x9d11,	// (0x00014958) example_general_pane

0x9d1d,	// (0x00014964) example_parent_pane_g1_ParamLimits

0x9d1d,	// (0x00014964) example_parent_pane_g1

0x9d29,	// (0x00014970) example_parent_pane_t1_ParamLimits

0x9d29,	// (0x00014970) example_parent_pane_t1

0x1679,	// (0x0000c2c0) popup_preview_text_window_ParamLimits

0x1679,	// (0x0000c2c0) popup_preview_text_window

0x7b54,	// (0x0001279b) list_single_pane_cp2_g4

0x6345,	// (0x00010f8c) bg_popup_preview_window_pane_ParamLimits

0x6345,	// (0x00010f8c) bg_popup_preview_window_pane

0x9a48,	// (0x0001468f) popup_preview_text_window_t1_ParamLimits

0x9a48,	// (0x0001468f) popup_preview_text_window_t1

0x9a66,	// (0x000146ad) popup_preview_text_window_t2_ParamLimits

0x9a66,	// (0x000146ad) popup_preview_text_window_t2

0x9aaf,	// (0x000146f6) popup_preview_text_window_t3_ParamLimits

0x9aaf,	// (0x000146f6) popup_preview_text_window_t3

0x9af4,	// (0x0001473b) popup_preview_text_window_t4_ParamLimits

0x9af4,	// (0x0001473b) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0001a578) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0001a578) popup_preview_text_window_t

0x9b72,	// (0x000147b9) scroll_pane_cp11

0x8a5d,	// (0x000136a4) bg_popup_preview_window_pane_g1

0x9a08,	// (0x0001464f) bg_popup_preview_window_pane_g2

0x9a10,	// (0x00014657) bg_popup_preview_window_pane_g3

0x9a18,	// (0x0001465f) bg_popup_preview_window_pane_g4

0x9a20,	// (0x00014667) bg_popup_preview_window_pane_g5

0x9a28,	// (0x0001466f) bg_popup_preview_window_pane_g6

0x9a30,	// (0x00014677) bg_popup_preview_window_pane_g7

0x9a38,	// (0x0001467f) bg_popup_preview_window_pane_g8

0x42ac,	// (0x0000eef3) aid_popup_width_pane

0x15f5,	// (0x0000c23c) popup_midp_note_alarm_window_ParamLimits

0x15f5,	// (0x0000c23c) popup_midp_note_alarm_window

0x6daf,	// (0x000119f6) data_form_pane_ParamLimits

0x0ca1,	// (0x0000b8e8) form_field_data_pane_g1

0x0cab,	// (0x0000b8f2) form_field_data_pane_t1_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_ParamLimits

0x6ded,	// (0x00011a34) data_form_wide_pane_ParamLimits

0x6df9,	// (0x00011a40) form_field_data_wide_pane_g1

0x6e25,	// (0x00011a6c) form_field_data_wide_pane_t1_ParamLimits

0x65e4,	// (0x0001122b) input_focus_pane_cp6_ParamLimits

0x0e0d,	// (0x0000ba54) input_popup_find_pane_g1_ParamLimits

0x0e0d,	// (0x0000ba54) input_popup_find_pane_g1

0x4808,	// (0x0000f44f) aid_navi_side_left_pane

0x481d,	// (0x0000f464) aid_navi_side_right_pane

0x9427,	// (0x0001406e) bg_popup_window_pane_cp30_ParamLimits

0x9427,	// (0x0001406e) bg_popup_window_pane_cp30

0x94a1,	// (0x000140e8) popup_midp_note_alarm_window_g1_ParamLimits

0x94a1,	// (0x000140e8) popup_midp_note_alarm_window_g1

0x94d1,	// (0x00014118) popup_midp_note_alarm_window_t1_ParamLimits

0x94d1,	// (0x00014118) popup_midp_note_alarm_window_t1

0x9572,	// (0x000141b9) popup_midp_note_alarm_window_t2_ParamLimits

0x9572,	// (0x000141b9) popup_midp_note_alarm_window_t2

0x9620,	// (0x00014267) popup_midp_note_alarm_window_t3_ParamLimits

0x9620,	// (0x00014267) popup_midp_note_alarm_window_t3

0x9648,	// (0x0001428f) popup_midp_note_alarm_window_t4_ParamLimits

0x9648,	// (0x0001428f) popup_midp_note_alarm_window_t4

0x9668,	// (0x000142af) popup_midp_note_alarm_window_t5_ParamLimits

0x9668,	// (0x000142af) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0001a515) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0001a515) popup_midp_note_alarm_window_t

0x9714,	// (0x0001435b) wait_bar_pane_cp1_ParamLimits

0x9714,	// (0x0001435b) wait_bar_pane_cp1

0x5f26,	// (0x00010b6d) wait_anim_pane_copy1

0x5f26,	// (0x00010b6d) wait_border_pane_copy1

0x9105,	// (0x00013d4c) wait_border_pane_g1_copy1

0x6e3f,	// (0x00011a86) form_field_popup_pane_g1

0x0cc5,	// (0x0000b90c) form_field_popup_pane_t1_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_cp7_ParamLimits

0x6e61,	// (0x00011aa8) list_form_pane_ParamLimits

0x6e6d,	// (0x00011ab4) form_field_popup_wide_pane_g1

0x6e75,	// (0x00011abc) form_field_popup_wide_pane_t1_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_cp8_ParamLimits

0x6e8a,	// (0x00011ad1) list_form_wide_pane_ParamLimits

0xa302,	// (0x00014f49) aid_size_cell_graphic_pane

0x0d44,	// (0x0000b98b) data_form_pane_t1_ParamLimits

0x233b,	// (0x0000cf82) data_form_wide_pane_t1_ParamLimits

0x1a2e,	// (0x0000c675) bg_status_flat_pane

0x05c6,	// (0x0000b20d) title_pane_t1_ParamLimits

0x5fce,	// (0x00010c15) title_pane_t2_ParamLimits

0x5ff4,	// (0x00010c3b) title_pane_t3_ParamLimits

0xf59b,	// (0x0001a1e2) title_pane_t_ParamLimits

0x754d,	// (0x00012194) level_1_signal_ParamLimits

0x755a,	// (0x000121a1) level_2_signal_ParamLimits

0x7567,	// (0x000121ae) level_3_signal_ParamLimits

0x7574,	// (0x000121bb) level_4_signal_ParamLimits

0x7581,	// (0x000121c8) level_5_signal_ParamLimits

0x758e,	// (0x000121d5) level_6_signal_ParamLimits

0x759b,	// (0x000121e2) level_7_signal_ParamLimits

0x754d,	// (0x00012194) level_1_battery_ParamLimits

0x755a,	// (0x000121a1) level_2_battery_ParamLimits

0x7567,	// (0x000121ae) level_3_battery_ParamLimits

0x7574,	// (0x000121bb) level_4_battery_ParamLimits

0x7581,	// (0x000121c8) level_5_battery_ParamLimits

0x758e,	// (0x000121d5) level_6_battery_ParamLimits

0x759b,	// (0x000121e2) level_7_battery_ParamLimits

0x932c,	// (0x00013f73) bg_status_flat_pane_g1

0x9334,	// (0x00013f7b) bg_status_flat_pane_g2

0x933c,	// (0x00013f83) bg_status_flat_pane_g3

0x9344,	// (0x00013f8b) bg_status_flat_pane_g4

0x934c,	// (0x00013f93) bg_status_flat_pane_g5

0x9354,	// (0x00013f9b) bg_status_flat_pane_g6

0x935c,	// (0x00013fa3) bg_status_flat_pane_g7

0x065a,	// (0x0000b2a1) tabs_3_active_pane_t1_ParamLimits

0x065a,	// (0x0000b2a1) tabs_3_passive_pane_t1_ParamLimits

0x0674,	// (0x0000b2bb) tabs_4_active_pane_t1_ParamLimits

0x0674,	// (0x0000b2bb) tabs_4_1_passive_pane_t1_ParamLimits

0x0e23,	// (0x0000ba6a) tabs_2_active_pane_t1_ParamLimits

0x0e23,	// (0x0000ba6a) tabs_2_passive_pane_t1_ParamLimits

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp4_ParamLimits

0x0e35,	// (0x0000ba7c) tabs_2_long_active_pane_t1_ParamLimits

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp4_ParamLimits

0x4ddf,	// (0x0000fa26) list_single_midp_graphic_pane_t1_ParamLimits

0x6006,	// (0x00010c4d) bg_active_tab_pane_cp5_ParamLimits

0x0e48,	// (0x0000ba8f) tabs_3_long_active_pane_t1_ParamLimits

0x7fab,	// (0x00012bf2) bg_passive_tab_pane_cp5_ParamLimits

0x4ddf,	// (0x0000fa26) list_single_midp_graphic_pane_t1

0x1a2e,	// (0x0000c675) bg_status_flat_pane_ParamLimits

0x86d4,	// (0x0001331b) indicator_pane_cp2_ParamLimits

0x86d4,	// (0x0001331b) indicator_pane_cp2

0x1ba5,	// (0x0000c7ec) navi_pane_srt_ParamLimits

0x1ba5,	// (0x0000c7ec) navi_pane_srt

0x881c,	// (0x00013463) popup_clock_digital_analogue_window_cp1

0x60fd,	// (0x00010d44) indicator_pane_t1

0x7c25,	// (0x0001286c) copy_highlight_pane

0x7c25,	// (0x0001286c) cursor_graphics_pane

0x7c25,	// (0x0001286c) graphic_within_text_pane

0x7c25,	// (0x0001286c) link_highlight_pane

0x9b35,	// (0x0001477c) popup_preview_text_window_t5_ParamLimits

0x9b35,	// (0x0001477c) popup_preview_text_window_t5

0x7d55,	// (0x0001299c) cursor_digital_pane

0x7d55,	// (0x0001299c) cursor_primary_pane

0x7d66,	// (0x000129ad) cursor_primary_small_pane

0x7d6e,	// (0x000129b5) cursor_secondary_pane

0x7d76,	// (0x000129bd) cursor_title_pane

0x7d55,	// (0x0001299c) link_highlight_digital_pane

0x7d5d,	// (0x000129a4) link_highlight_primary_pane

0x7d66,	// (0x000129ad) link_highlight_primary_small_pane

0x7d6e,	// (0x000129b5) link_highlight_secondary_pane

0x7d76,	// (0x000129bd) link_highlight_title_pane

0x7d55,	// (0x0001299c) copy_highlight_digital_pane

0x7d55,	// (0x0001299c) copy_highlight_primary_pane

0x7d66,	// (0x000129ad) copy_highlight_primary_small_pane

0x7d6e,	// (0x000129b5) copy_highlight_secondary_pane

0x7d76,	// (0x000129bd) copy_highlight_title_pane

0x7d6e,	// (0x000129b5) graphic_text_digital_pane

0x93ca,	// (0x00014011) graphic_text_primary_pane

0x93d3,	// (0x0001401a) graphic_text_primary_small_pane

0x7d66,	// (0x000129ad) graphic_text_secondary_pane

0x7d55,	// (0x0001299c) graphic_text_title_pane

0x1126,	// (0x0000bd6d) cursor_primary_pane_g1

0x93bc,	// (0x00014003) cursor_text_primary_t1

0x1ecb,	// (0x0000cb12) cursor_primary_small_pane_g1

0x93ae,	// (0x00013ff5) cursor_text_primary_small_t1

0x1ec1,	// (0x0000cb08) cursor_primary_small_pane_g1_copy1

0x9396,	// (0x00013fdd) cursor_text_primary_small_t1_copy1

0x9374,	// (0x00013fbb) cursor_text_title_t1

0x1eb7,	// (0x0000cafe) cursor_title_pane_g1

0x1126,	// (0x0000bd6d) cursor_digital_pane_g1

0x7d88,	// (0x000129cf) cursor_text_digital_t1

0x9315,	// (0x00013f5c) link_highlight_primary_pane_g1

0x931d,	// (0x00013f64) link_highlight_primary_pane_t1

0x7d96,	// (0x000129dd) link_highlight_primary_small_pane_g1

0x7d9e,	// (0x000129e5) link_highlight_primary_small_pane_t1

0x7d96,	// (0x000129dd) link_highlight_secondary_pane_g1

0x7dad,	// (0x000129f4) link_highlight_secondary_pane_t1

0x9289,	// (0x00013ed0) link_highlight_title_pane_g1

0x9291,	// (0x00013ed8) link_highlight_title_pane_t1

0x9272,	// (0x00013eb9) link_highlight_digital_pane_g1

0x927a,	// (0x00013ec1) link_highlight_digital_pane_t1

0x914a,	// (0x00013d91) copy_highlight_primary_pane_g1

0x9152,	// (0x00013d99) copy_highlight_primary_pane_t1

0x9124,	// (0x00013d6b) copy_highlight_primary_small_pane_g1

0x913b,	// (0x00013d82) copy_highlight_primary_small_pane_t1

0x7dbc,	// (0x00012a03) copy_highlight_secondary_pane_g1

0x7dc4,	// (0x00012a0b) copy_highlight_secondary_pane_t1

0x9124,	// (0x00013d6b) copy_highlight_title_pane_g1

0x912c,	// (0x00013d73) copy_highlight_title_pane_t1

0x914a,	// (0x00013d91) copy_highlight_digital_pane_g1

0xa4d0,	// (0x00015117) copy_highlight_digital_pane_t1

0xa424,	// (0x0001506b) graphic_text_primary_pane_g1

0xa4b4,	// (0x000150fb) graphic_text_primary_pane_t1

0xa4c2,	// (0x00015109) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0001a644) graphic_text_primary_pane_t

0xa490,	// (0x000150d7) graphic_text_primary_small_pane_g1

0xa498,	// (0x000150df) graphic_text_primary_small_pane_t1

0xa4a6,	// (0x000150ed) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0001a63f) graphic_text_primary_small_pane_t

0xa46c,	// (0x000150b3) graphic_text_secondary_pane_g1

0xa474,	// (0x000150bb) graphic_text_secondary_pane_t1

0xa482,	// (0x000150c9) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0001a63a) graphic_text_secondary_pane_t

0xa448,	// (0x0001508f) graphic_text_title_pane_g1

0xa450,	// (0x00015097) graphic_text_title_pane_t1

0xa45e,	// (0x000150a5) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0001a635) graphic_text_title_pane_t

0xa424,	// (0x0001506b) graphic_text_digital_pane_g1

0xa42c,	// (0x00015073) graphic_text_digital_pane_t1

0xa43a,	// (0x00015081) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0001a630) graphic_text_digital_pane_t

0x6006,	// (0x00010c4d) navi_icon_pane_srt_ParamLimits

0x6006,	// (0x00010c4d) navi_icon_pane_srt

0x5f26,	// (0x00010b6d) navi_midp_pane_srt

0x5f26,	// (0x00010b6d) navi_navi_pane_srt

0x6006,	// (0x00010c4d) navi_text_pane_srt_ParamLimits

0x6006,	// (0x00010c4d) navi_text_pane_srt

0xa3ef,	// (0x00015036) navi_navi_icon_text_pane_srt

0xa3f7,	// (0x0001503e) navi_navi_pane_srt_g1_ParamLimits

0xa3f7,	// (0x0001503e) navi_navi_pane_srt_g1

0xa409,	// (0x00015050) navi_navi_pane_srt_g2_ParamLimits

0xa409,	// (0x00015050) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0001a62b) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0001a62b) navi_navi_pane_srt_g

0xa41b,	// (0x00015062) navi_navi_tabs_pane_srt

0xa3ef,	// (0x00015036) navi_navi_text_pane_srt

0xa3ef,	// (0x00015036) navi_navi_volume_pane_srt

0xa3e0,	// (0x00015027) navi_navi_text_pane_srt_t1

0x515f,	// (0x0000fda6) navi_navi_volume_pane_srt_g1

0x5167,	// (0x0000fdae) volume_small_pane_srt_ParamLimits

0x5167,	// (0x0000fdae) volume_small_pane_srt

0x4ae8,	// (0x0000f72f) volume_small_pane_srt_g1_ParamLimits

0x4ae8,	// (0x0000f72f) volume_small_pane_srt_g1

0x4af8,	// (0x0000f73f) volume_small_pane_srt_g2_ParamLimits

0x4af8,	// (0x0000f73f) volume_small_pane_srt_g2

0x4b09,	// (0x0000f750) volume_small_pane_srt_g3_ParamLimits

0x4b09,	// (0x0000f750) volume_small_pane_srt_g3

0x4b1a,	// (0x0000f761) volume_small_pane_srt_g4_ParamLimits

0x4b1a,	// (0x0000f761) volume_small_pane_srt_g4

0x4b2b,	// (0x0000f772) volume_small_pane_srt_g5_ParamLimits

0x4b2b,	// (0x0000f772) volume_small_pane_srt_g5

0x4b3c,	// (0x0000f783) volume_small_pane_srt_g6_ParamLimits

0x4b3c,	// (0x0000f783) volume_small_pane_srt_g6

0x4b4d,	// (0x0000f794) volume_small_pane_srt_g7_ParamLimits

0x4b4d,	// (0x0000f794) volume_small_pane_srt_g7

0x4b5e,	// (0x0000f7a5) volume_small_pane_srt_g8_ParamLimits

0x4b5e,	// (0x0000f7a5) volume_small_pane_srt_g8

0x4b6f,	// (0x0000f7b6) volume_small_pane_srt_g9_ParamLimits

0x4b6f,	// (0x0000f7b6) volume_small_pane_srt_g9

0x4b80,	// (0x0000f7c7) volume_small_pane_srt_g10_ParamLimits

0x4b80,	// (0x0000f7c7) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001a3df) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001a3df) volume_small_pane_srt_g

0x63ee,	// (0x00011035) query_popup_data_pane_cp2

0xa3c6,	// (0x0001500d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa3c6,	// (0x0001500d) navi_navi_icon_text_pane_srt_t1

0x93ca,	// (0x00014011) navi_tabs_2_long_pane_srt

0x93ca,	// (0x00014011) navi_tabs_2_pane_srt

0x93ca,	// (0x00014011) navi_tabs_3_long_pane_srt

0x93ca,	// (0x00014011) navi_tabs_3_pane_srt

0x93ca,	// (0x00014011) navi_tabs_4_pane_srt

0x513f,	// (0x0000fd86) tabs_2_active_pane_srt_ParamLimits

0x513f,	// (0x0000fd86) tabs_2_active_pane_srt

0x514f,	// (0x0000fd96) tabs_2_passive_pane_srt_ParamLimits

0x514f,	// (0x0000fd96) tabs_2_passive_pane_srt

0x8b77,	// (0x000137be) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b77,	// (0x000137be) bg_passive_tab_pane_cp1_srt

0xa392,	// (0x00014fd9) bg_passive_tab_pane_g1_cp1_srt

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp1_srt

0xa39b,	// (0x00014fe2) bg_passive_tab_pane_g3_cp1_srt

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp1_srt_ParamLimits

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp1_srt

0xa3a4,	// (0x00014feb) tabs_2_active_pane_srt_g1

0x2473,	// (0x0000d0ba) tabs_2_active_pane_srt_t1_ParamLimits

0x2473,	// (0x0000d0ba) tabs_2_active_pane_srt_t1

0xa392,	// (0x00014fd9) bg_active_tab_pane_g1_cp1_srt

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp1_srt

0xa39b,	// (0x00014fe2) bg_active_tab_pane_g3_cp1_srt

0x510c,	// (0x0000fd53) tabs_3_active_pane_srt_ParamLimits

0x510c,	// (0x0000fd53) tabs_3_active_pane_srt

0x511d,	// (0x0000fd64) tabs_3_passive_pane_cp_srt_ParamLimits

0x511d,	// (0x0000fd64) tabs_3_passive_pane_cp_srt

0x512e,	// (0x0000fd75) tabs_3_passive_pane_srt_ParamLimits

0x512e,	// (0x0000fd75) tabs_3_passive_pane_srt

0x8b77,	// (0x000137be) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b77,	// (0x000137be) bg_passive_tab_pane_cp2_srt

0x7dd3,	// (0x00012a1a) bg_passive_tab_pane_g1_cp2_srt

0x786d,	// (0x000124b4) bg_passive_tab_pane_g2_cp2_srt

0x7ddc,	// (0x00012a23) bg_passive_tab_pane_g3_cp2_srt

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp2_srt_ParamLimits

0x629b,	// (0x00010ee2) bg_active_tab_pane_cp2_srt

0xa378,	// (0x00014fbf) tabs_3_active_pane_srt_g1

0x245d,	// (0x0000d0a4) tabs_3_active_pane_srt_t1_ParamLimits

0x245d,	// (0x0000d0a4) tabs_3_active_pane_srt_t1

0x7dd3,	// (0x00012a1a) bg_active_tab_pane_g1_cp2_srt

0x786d,	// (0x000124b4) bg_active_tab_pane_g2_cp2_srt

0x7ddc,	// (0x00012a23) bg_active_tab_pane_g3_cp2_srt

0x50c4,	// (0x0000fd0b) tabs_4_active_pane_srt_ParamLimits

0x50c4,	// (0x0000fd0b) tabs_4_active_pane_srt

0x50d6,	// (0x0000fd1d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x50d6,	// (0x0000fd1d) tabs_4_passive_pane_cp2_srt

0x7f31,	// (0x00012b78) aid_size_cell_toolbar

0x9f18,	// (0x00014b5f) main_idle_act_pane_ParamLimits

0x814a,	// (0x00012d91) popup_large_graphic_colour_window_ParamLimits

0x18f9,	// (0x0000c540) popup_toolbar_window_ParamLimits

0x18f9,	// (0x0000c540) popup_toolbar_window

0xa11a,	// (0x00014d61) list_single_graphic_2heading_pane_ParamLimits

0xa11a,	// (0x00014d61) list_single_graphic_2heading_pane

0x7301,	// (0x00011f48) aid_size_cell_apps_grid_lsc_pane

0x7313,	// (0x00011f5a) aid_size_cell_apps_grid_prt_pane

0x7fab,	// (0x00012bf2) bg_wml_button_pane_cp1_ParamLimits

0x7fab,	// (0x00012bf2) bg_wml_button_pane_cp1

0x1e4b,	// (0x0000ca92) form_midp_field_text_pane_t1_ParamLimits

0x8b77,	// (0x000137be) input_focus_pane_cp050_ParamLimits

0x8deb,	// (0x00013a32) list_midp_form_text_pane_ParamLimits

0x8d89,	// (0x000139d0) input_focus_pane_cp051_ParamLimits

0x8d9d,	// (0x000139e4) list_midp_choice_pane_ParamLimits

0x1de0,	// (0x0000ca27) list_single_2graphic_pane_cp3_ParamLimits

0x1de0,	// (0x0000ca27) list_single_2graphic_pane_cp3

0x1df6,	// (0x0000ca3d) list_single_midp_graphic_pane_ParamLimits

0x1df6,	// (0x0000ca3d) list_single_midp_graphic_pane

0x4ce4,	// (0x0000f92b) list_single_graphic_2heading_pane_g1_ParamLimits

0x4ce4,	// (0x0000f92b) list_single_graphic_2heading_pane_g1

0x4cf0,	// (0x0000f937) list_single_graphic_2heading_pane_g4_ParamLimits

0x4cf0,	// (0x0000f937) list_single_graphic_2heading_pane_g4

0x4cfc,	// (0x0000f943) list_single_graphic_2heading_pane_g5_ParamLimits

0x4cfc,	// (0x0000f943) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001a432) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001a432) list_single_graphic_2heading_pane_g

0x4d08,	// (0x0000f94f) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d08,	// (0x0000f94f) list_single_graphic_2heading_pane_t1

0x4d1c,	// (0x0000f963) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d1c,	// (0x0000f963) list_single_graphic_2heading_pane_t2

0x4d38,	// (0x0000f97f) list_single_graphic_2heading_pane_t3_ParamLimits

0x4d38,	// (0x0000f97f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001a439) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001a439) list_single_graphic_2heading_pane_t

0x8979,	// (0x000135c0) bg_popup_sub_pane_cp2

0x89a3,	// (0x000135ea) grid_toobar_pane

0x4d50,	// (0x0000f997) cell_toolbar_pane_ParamLimits

0x4d50,	// (0x0000f997) cell_toolbar_pane

0x8a01,	// (0x00013648) cell_toolbar_pane_g1_ParamLimits

0x8a01,	// (0x00013648) cell_toolbar_pane_g1

0x8a15,	// (0x0001365c) cell_toolbar_pane_g2_ParamLimits

0x8a15,	// (0x0001365c) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001a447) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001a447) cell_toolbar_pane_g

0x8a37,	// (0x0001367e) grid_highlight_pane_cp2_ParamLimits

0x8a37,	// (0x0001367e) grid_highlight_pane_cp2

0x8a51,	// (0x00013698) toolbar_button_pane

0x8a5d,	// (0x000136a4) toolbar_button_pane_g1

0x8a65,	// (0x000136ac) toolbar_button_pane_g2

0x8a6d,	// (0x000136b4) toolbar_button_pane_g3

0x8a75,	// (0x000136bc) toolbar_button_pane_g4

0x8a7d,	// (0x000136c4) toolbar_button_pane_g5

0x8a85,	// (0x000136cc) toolbar_button_pane_g6

0x8a8d,	// (0x000136d4) toolbar_button_pane_g7

0x8a95,	// (0x000136dc) toolbar_button_pane_g8

0x8a9d,	// (0x000136e4) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001a44c) toolbar_button_pane_g

0x4d88,	// (0x0000f9cf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4d88,	// (0x0000f9cf) list_single_2graphic_pane_g1_cp3

0xe24d,	// (0x00018e94) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe24d,	// (0x00018e94) list_single_2graphic_pane_g2_cp3

0x4da5,	// (0x0000f9ec) list_single_2graphic_pane_g3_cp3

0x4dad,	// (0x0000f9f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4dad,	// (0x0000f9f4) list_single_2graphic_pane_g4_cp3

0x4db9,	// (0x0000fa00) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4db9,	// (0x0000fa00) list_single_2graphic_pane_t1_cp3

0x4dd3,	// (0x0000fa1a) list_single_midp_graphic_pane_g2_ParamLimits

0x4dd3,	// (0x0000fa1a) list_single_midp_graphic_pane_g2

0x7f39,	// (0x00012b80) aid_zoom_text_primary

0x7f41,	// (0x00012b88) aid_zoom_text_secondary

0x7e90,	// (0x00012ad7) status_small_pane_g7_ParamLimits

0x7e90,	// (0x00012ad7) status_small_pane_g7

0x7eb3,	// (0x00012afa) status_small_pane_t1_ParamLimits

0x05a2,	// (0x0000b1e9) title_pane_g2

0x0003,

0xf592,	// (0x0001a1d9) title_pane_g

0x082d,	// (0x0000b474) aid_size_cell_colour_1_pane_ParamLimits

0x082d,	// (0x0000b474) aid_size_cell_colour_1_pane

0x0841,	// (0x0000b488) aid_size_cell_colour_2_pane_ParamLimits

0x0841,	// (0x0000b488) aid_size_cell_colour_2_pane

0x0855,	// (0x0000b49c) aid_size_cell_colour_3_pane_ParamLimits

0x0855,	// (0x0000b49c) aid_size_cell_colour_3_pane

0x0869,	// (0x0000b4b0) aid_size_cell_colour_4_pane_ParamLimits

0x0869,	// (0x0000b4b0) aid_size_cell_colour_4_pane

0x4744,	// (0x0000f38b) title_pane_stacon_g1_ParamLimits

0x4744,	// (0x0000f38b) title_pane_stacon_g1

0x91a9,	// (0x00013df0) popup_note_wait_window_g3_ParamLimits

0x91a9,	// (0x00013df0) popup_note_wait_window_g3

0x921f,	// (0x00013e66) popup_note_wait_window_t5_ParamLimits

0x921f,	// (0x00013e66) popup_note_wait_window_t5

0x5f26,	// (0x00010b6d) main_feb_china_hwr_fs_writing_pane

0x1321,	// (0x0000bf68) popup_feb_china_hwr_fs_window_ParamLimits

0x1321,	// (0x0000bf68) popup_feb_china_hwr_fs_window

0xe25e,	// (0x00018ea5) aid_size_cell_hwr_fs_ParamLimits

0xe25e,	// (0x00018ea5) aid_size_cell_hwr_fs

0x8b77,	// (0x000137be) bg_popup_sub_pane_cp3_ParamLimits

0x8b77,	// (0x000137be) bg_popup_sub_pane_cp3

0xe273,	// (0x00018eba) grid_hwr_fs_pane_ParamLimits

0xe273,	// (0x00018eba) grid_hwr_fs_pane

0x4e22,	// (0x0000fa69) linegrid_hwr_fs_pane_ParamLimits

0x4e22,	// (0x0000fa69) linegrid_hwr_fs_pane

0xe28b,	// (0x00018ed2) cell_hwr_fs_pane_ParamLimits

0xe28b,	// (0x00018ed2) cell_hwr_fs_pane

0x8b83,	// (0x000137ca) linegrid_hwr_fs_pane_g1_ParamLimits

0x8b83,	// (0x000137ca) linegrid_hwr_fs_pane_g1

0x1da6,	// (0x0000c9ed) linegrid_hwr_fs_pane_g2_ParamLimits

0x1da6,	// (0x0000c9ed) linegrid_hwr_fs_pane_g2

0x8ba1,	// (0x000137e8) linegrid_hwr_fs_pane_g3_ParamLimits

0x8ba1,	// (0x000137e8) linegrid_hwr_fs_pane_g3

0x4e54,	// (0x0000fa9b) linegrid_hwr_fs_pane_g4_ParamLimits

0x4e54,	// (0x0000fa9b) linegrid_hwr_fs_pane_g4

0x4e6e,	// (0x0000fab5) linegrid_hwr_fs_pane_g5_ParamLimits

0x4e6e,	// (0x0000fab5) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0001a472) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0001a472) linegrid_hwr_fs_pane_g

0x8bad,	// (0x000137f4) cell_hwr_fs_pane_g1_ParamLimits

0x8bad,	// (0x000137f4) cell_hwr_fs_pane_g1

0x88b2,	// (0x000134f9) cell_hwr_fs_pane_g2_ParamLimits

0x88b2,	// (0x000134f9) cell_hwr_fs_pane_g2

0x1db8,	// (0x0000c9ff) cell_hwr_fs_pane_g3_ParamLimits

0x1db8,	// (0x0000c9ff) cell_hwr_fs_pane_g3

0x1dc5,	// (0x0000ca0c) cell_hwr_fs_pane_g4_ParamLimits

0x1dc5,	// (0x0000ca0c) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0001a47d) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0001a47d) cell_hwr_fs_pane_g

0xe2b1,	// (0x00018ef8) cell_hwr_fs_pane_t1

0x5f26,	// (0x00010b6d) grid_highlight_pane_cp6

0x5f26,	// (0x00010b6d) main_idle_act2_pane

0x70b9,	// (0x00011d00) aid_inside_area_popup_secondary

0x2027,	// (0x0000cc6e) aid_inside_area_window_primary_ParamLimits

0x2027,	// (0x0000cc6e) aid_inside_area_window_primary

0xa4df,	// (0x00015126) ai2_news_ticker_pane

0xa4e7,	// (0x0001512e) aid_size_cell_ai1_link_ParamLimits

0xa4e7,	// (0x0001512e) aid_size_cell_ai1_link

0xa501,	// (0x00015148) popup_ai2_data_window_ParamLimits

0xa501,	// (0x00015148) popup_ai2_data_window

0xa515,	// (0x0001515c) popup_ai2_link_window_ParamLimits

0xa515,	// (0x0001515c) popup_ai2_link_window

0x8b77,	// (0x000137be) bg_popup_sub_pane_cp4_ParamLimits

0x8b77,	// (0x000137be) bg_popup_sub_pane_cp4

0xa529,	// (0x00015170) grid_ai2_link_pane_ParamLimits

0xa529,	// (0x00015170) grid_ai2_link_pane

0xa540,	// (0x00015187) popup_ai2_link_window_g1_ParamLimits

0xa540,	// (0x00015187) popup_ai2_link_window_g1

0xa54c,	// (0x00015193) popup_ai2_link_window_g2_ParamLimits

0xa54c,	// (0x00015193) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0001a649) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0001a649) popup_ai2_link_window_g

0xa55b,	// (0x000151a2) ai2_mp_button_pane

0xa563,	// (0x000151aa) ai2_mp_volume_pane

0x8d89,	// (0x000139d0) bg_popup_sub_pane_cp5_ParamLimits

0x8d89,	// (0x000139d0) bg_popup_sub_pane_cp5

0xa56b,	// (0x000151b2) heading_ai2_gene_pane_ParamLimits

0xa56b,	// (0x000151b2) heading_ai2_gene_pane

0xa577,	// (0x000151be) list_ai2_gene_pane_ParamLimits

0xa577,	// (0x000151be) list_ai2_gene_pane

0xa5bf,	// (0x00015206) cell_ai2_link_pane_ParamLimits

0xa5bf,	// (0x00015206) cell_ai2_link_pane

0xa5d5,	// (0x0001521c) cell_ai2_link_pane_g1

0x5f26,	// (0x00010b6d) grid_highlight_pane_cp7

0x517c,	// (0x0000fdc3) ai2_mp_volume_pane_g1

0xa6a6,	// (0x000152ed) ai2_mp_volume_pane_g2

0xa61b,	// (0x00015262) list_ai2_gene_pane_t1

0xa6ae,	// (0x000152f5) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0001a662) ai2_mp_volume_pane_g

0x5184,	// (0x0000fdcb) volume_small_pane_cp3

0xa6b6,	// (0x000152fd) aid_size_cell_ai2_button

0xa6be,	// (0x00015305) grid_ai2_button_pane

0xa6c7,	// (0x0001530e) cell_ai2_button_pane_ParamLimits

0xa6c7,	// (0x0001530e) cell_ai2_button_pane

0x5f1c,	// (0x00010b63) cell_ai2_button_pane_g1

0x5f26,	// (0x00010b6d) grid_highlight_pane_cp8

0xa666,	// (0x000152ad) ai2_gene_pane_t1_ParamLimits

0xa666,	// (0x000152ad) ai2_gene_pane_t1

0x1297,	// (0x0000bede) aid_height_parent_landscape

0x21e9,	// (0x0000ce30) aid_height_set_list

0x9f18,	// (0x00014b5f) aid_size_parent

0xa302,	// (0x00014f49) aid_size_cell_graphic_pane_ParamLimits

0xa587,	// (0x000151ce) popup_ai2_data_window_g1_ParamLimits

0xa587,	// (0x000151ce) popup_ai2_data_window_g1

0xa593,	// (0x000151da) ai2_news_ticker_pane_g1

0xa59b,	// (0x000151e2) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0001a64e) ai2_news_ticker_pane_g

0xa5a3,	// (0x000151ea) ai2_news_ticker_pane_t1

0xa5b1,	// (0x000151f8) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0001a653) ai2_news_ticker_pane_t

0xa5de,	// (0x00015225) heading_ai2_gene_pane_g1

0xa5e6,	// (0x0001522d) heading_ai2_gene_pane_t1_ParamLimits

0xa5e6,	// (0x0001522d) heading_ai2_gene_pane_t1

0xa5fb,	// (0x00015242) list_highlight_pane_cp6

0xa603,	// (0x0001524a) ai2_gene_pane_ParamLimits

0xa603,	// (0x0001524a) ai2_gene_pane

0xa629,	// (0x00015270) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0001a658) list_ai2_gene_pane_t

0xa637,	// (0x0001527e) list_highlight_pane_cp8_ParamLimits

0xa637,	// (0x0001527e) list_highlight_pane_cp8

0xa648,	// (0x0001528f) ai2_gene_pane_g1_ParamLimits

0xa648,	// (0x0001528f) ai2_gene_pane_g1

0xa65a,	// (0x000152a1) ai2_gene_pane_g2_ParamLimits

0xa65a,	// (0x000152a1) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0001a65d) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0001a65d) ai2_gene_pane_g

0x6809,	// (0x00011450) scroll_pane_cp12

0xe20a,	// (0x00018e51) control_pane_t3_ParamLimits

0xe20a,	// (0x00018e51) control_pane_t3

0x7ea4,	// (0x00012aeb) status_small_pane_g8_ParamLimits

0x7ea4,	// (0x00012aeb) status_small_pane_g8

0x13b4,	// (0x0000bffb) popup_find_window_ParamLimits

0x162f,	// (0x0000c276) popup_note_image_window_ParamLimits

0x89df,	// (0x00013626) list_double2_graphic_pane_vc_g1_ParamLimits

0x89df,	// (0x00013626) list_double2_graphic_pane_vc_g1

0x68db,	// (0x00011522) list_double2_graphic_pane_vc_g2_ParamLimits

0x68db,	// (0x00011522) list_double2_graphic_pane_vc_g2

0x68e7,	// (0x0001152e) list_double2_graphic_pane_vc_g3_ParamLimits

0x68e7,	// (0x0001152e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a440) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a440) list_double2_graphic_pane_vc_g

0x89eb,	// (0x00013632) list_double2_graphic_pane_vc_t1_ParamLimits

0x89eb,	// (0x00013632) list_double2_graphic_pane_vc_t1

0x68db,	// (0x00011522) list_single_heading_pane_vc_g1_ParamLimits

0x68db,	// (0x00011522) list_single_heading_pane_vc_g1

0x68e7,	// (0x0001152e) list_single_heading_pane_vc_g2_ParamLimits

0x68e7,	// (0x0001152e) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a253) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a253) list_single_heading_pane_vc_g

0x8aa5,	// (0x000136ec) list_single_heading_pane_vc_t1_ParamLimits

0x8aa5,	// (0x000136ec) list_single_heading_pane_vc_t1

0x8abb,	// (0x00013702) list_single_heading_pane_vc_t2_ParamLimits

0x8abb,	// (0x00013702) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0001a461) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0001a461) list_single_heading_pane_vc_t

0x8acf,	// (0x00013716) list_setting_number_pane_vc_g1_ParamLimits

0x8acf,	// (0x00013716) list_setting_number_pane_vc_g1

0x8adb,	// (0x00013722) list_setting_number_pane_vc_g2_ParamLimits

0x8adb,	// (0x00013722) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a466) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a466) list_setting_number_pane_vc_g

0x8ae7,	// (0x0001372e) list_setting_number_pane_vc_t1_ParamLimits

0x8ae7,	// (0x0001372e) list_setting_number_pane_vc_t1

0x8afb,	// (0x00013742) list_setting_number_pane_vc_t2_ParamLimits

0x8afb,	// (0x00013742) list_setting_number_pane_vc_t2

0x8b17,	// (0x0001375e) list_setting_number_pane_vc_t3_ParamLimits

0x8b17,	// (0x0001375e) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0001a46b) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0001a46b) list_setting_number_pane_vc_t

0x8b3f,	// (0x00013786) set_value_pane_vc_ParamLimits

0x8b3f,	// (0x00013786) set_value_pane_vc

0xa11a,	// (0x00014d61) list_double2_graphic_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double2_graphic_pane_vc

0xa11a,	// (0x00014d61) list_double2_large_graphic_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double2_large_graphic_pane_vc

0xa11a,	// (0x00014d61) list_double2_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double2_pane_vc

0xa11a,	// (0x00014d61) list_double_graphic_heading_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_graphic_heading_pane_vc

0xa11a,	// (0x00014d61) list_double_graphic_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_graphic_pane_vc

0xa11a,	// (0x00014d61) list_double_heading_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_heading_pane_vc

0xa11a,	// (0x00014d61) list_double_large_graphic_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_large_graphic_pane_vc

0xa11a,	// (0x00014d61) list_double_number_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_number_pane_vc

0xa11a,	// (0x00014d61) list_double_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_pane_vc

0xa11a,	// (0x00014d61) list_double_time_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_double_time_pane_vc

0xa11a,	// (0x00014d61) list_setting_number_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_setting_number_pane_vc

0xa11a,	// (0x00014d61) list_setting_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_setting_pane_vc

0xa11a,	// (0x00014d61) list_single_graphic_heading_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_single_graphic_heading_pane_vc

0xa11a,	// (0x00014d61) list_single_heading_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_single_heading_pane_vc

0xa11a,	// (0x00014d61) list_single_number_heading_pane_vc_ParamLimits

0xa11a,	// (0x00014d61) list_single_number_heading_pane_vc

0x89df,	// (0x00013626) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x89df,	// (0x00013626) list_double_graphic_heading_pane_vc_g1

0x68db,	// (0x00011522) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x68db,	// (0x00011522) list_double_graphic_heading_pane_vc_g2

0x68e7,	// (0x0001152e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x68e7,	// (0x0001152e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001a440) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a440) list_double_graphic_heading_pane_vc_g

0xa6fb,	// (0x00015342) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa6fb,	// (0x00015342) list_double_graphic_heading_pane_vc_t1

0x8aa5,	// (0x000136ec) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8aa5,	// (0x000136ec) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x0001a669) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x0001a669) list_double_graphic_heading_pane_vc_t

0x8acf,	// (0x00013716) list_setting_pane_vc_g1_ParamLimits

0x8acf,	// (0x00013716) list_setting_pane_vc_g1

0x8adb,	// (0x00013722) list_setting_pane_vc_g2_ParamLimits

0x8adb,	// (0x00013722) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0001a466) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0001a466) list_setting_pane_vc_g

0xa8f3,	// (0x0001553a) list_setting_pane_vc_t1_ParamLimits

0xa8f3,	// (0x0001553a) list_setting_pane_vc_t1

0xa907,	// (0x0001554e) list_setting_pane_vc_t2_ParamLimits

0xa907,	// (0x0001554e) list_setting_pane_vc_t2

0x0001,

0xfa65,	// (0x0001a6ac) list_setting_pane_vc_t_ParamLimits

0xfa65,	// (0x0001a6ac) list_setting_pane_vc_t

0x8b3f,	// (0x00013786) set_value_pane_cp_vc_ParamLimits

0x8b3f,	// (0x00013786) set_value_pane_cp_vc

0x68db,	// (0x00011522) list_single_number_heading_pane_vc_g1_ParamLimits

0x68db,	// (0x00011522) list_single_number_heading_pane_vc_g1

0x68e7,	// (0x0001152e) list_single_number_heading_pane_vc_g2_ParamLimits

0x68e7,	// (0x0001152e) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a253) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a253) list_single_number_heading_pane_vc_g

0x8aa5,	// (0x000136ec) list_single_number_heading_pane_vc_t1_ParamLimits

0x8aa5,	// (0x000136ec) list_single_number_heading_pane_vc_t1

0xa929,	// (0x00015570) list_single_number_heading_pane_vc_t2_ParamLimits

0xa929,	// (0x00015570) list_single_number_heading_pane_vc_t2

0xa93d,	// (0x00015584) list_single_number_heading_pane_vc_t3_ParamLimits

0xa93d,	// (0x00015584) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6a,	// (0x0001a6b1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001a6b1) list_single_number_heading_pane_vc_t

0x89df,	// (0x00013626) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x89df,	// (0x00013626) list_single_graphic_heading_pane_vc_g1

0x68db,	// (0x00011522) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x68db,	// (0x00011522) list_single_graphic_heading_pane_vc_g4

0x68e7,	// (0x0001152e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x68e7,	// (0x0001152e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001a440) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001a440) list_single_graphic_heading_pane_vc_g

0x8aa5,	// (0x000136ec) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8aa5,	// (0x000136ec) list_single_graphic_heading_pane_vc_t1

0xa94f,	// (0x00015596) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa94f,	// (0x00015596) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001a6b8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001a6b8) list_single_graphic_heading_pane_vc_t

0x68db,	// (0x00011522) list_double2_pane_vc_g1_ParamLimits

0x68db,	// (0x00011522) list_double2_pane_vc_g1

0x68e7,	// (0x0001152e) list_double2_pane_vc_g2_ParamLimits

0x68e7,	// (0x0001152e) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a253) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a253) list_double2_pane_vc_g

0xa963,	// (0x000155aa) list_double2_pane_vc_t1_ParamLimits

0xa963,	// (0x000155aa) list_double2_pane_vc_t1

0xa979,	// (0x000155c0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa979,	// (0x000155c0) list_double2_large_graphic_pane_vc_g1

0x68db,	// (0x00011522) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x68db,	// (0x00011522) list_double2_large_graphic_pane_vc_g2

0x68e7,	// (0x0001152e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x68e7,	// (0x0001152e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0001a270) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0001a270) list_double2_large_graphic_pane_vc_g

0xa985,	// (0x000155cc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa985,	// (0x000155cc) list_double2_large_graphic_pane_vc_t1

0xa99b,	// (0x000155e2) list_double_time_pane_vc_g1_ParamLimits

0xa99b,	// (0x000155e2) list_double_time_pane_vc_g1

0xa9a7,	// (0x000155ee) list_double_time_pane_vc_g2_ParamLimits

0xa9a7,	// (0x000155ee) list_double_time_pane_vc_g2

0x0001,

0xfa76,	// (0x0001a6bd) list_double_time_pane_vc_g_ParamLimits

0xfa76,	// (0x0001a6bd) list_double_time_pane_vc_g

0xa9b3,	// (0x000155fa) list_double_time_pane_vc_t1_ParamLimits

0xa9b3,	// (0x000155fa) list_double_time_pane_vc_t1

0xa9cc,	// (0x00015613) list_double_time_pane_vc_t2_ParamLimits

0xa9cc,	// (0x00015613) list_double_time_pane_vc_t2

0xa9ec,	// (0x00015633) list_double_time_pane_vc_t3_ParamLimits

0xa9ec,	// (0x00015633) list_double_time_pane_vc_t3

0xaa04,	// (0x0001564b) list_double_time_pane_vc_t4_ParamLimits

0xaa04,	// (0x0001564b) list_double_time_pane_vc_t4

0x0003,

0xfa7b,	// (0x0001a6c2) list_double_time_pane_vc_t_ParamLimits

0xfa7b,	// (0x0001a6c2) list_double_time_pane_vc_t

0x68db,	// (0x00011522) list_double_pane_vc_g1_ParamLimits

0x68db,	// (0x00011522) list_double_pane_vc_g1

0x68e7,	// (0x0001152e) list_double_pane_vc_g2_ParamLimits

0x68e7,	// (0x0001152e) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a253) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a253) list_double_pane_vc_g

0xaa18,	// (0x0001565f) list_double_pane_vc_t1_ParamLimits

0xaa18,	// (0x0001565f) list_double_pane_vc_t1

0xaa2a,	// (0x00015671) list_double_pane_vc_t2_ParamLimits

0xaa2a,	// (0x00015671) list_double_pane_vc_t2

0x0001,

0xfa84,	// (0x0001a6cb) list_double_pane_vc_t_ParamLimits

0xfa84,	// (0x0001a6cb) list_double_pane_vc_t

0x68db,	// (0x00011522) list_double_number_pane_vc_g1_ParamLimits

0x68db,	// (0x00011522) list_double_number_pane_vc_g1

0x68e7,	// (0x0001152e) list_double_number_pane_vc_g2_ParamLimits

0x68e7,	// (0x0001152e) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a253) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a253) list_double_number_pane_vc_g

0xaa42,	// (0x00015689) list_double_number_pane_vc_t1_ParamLimits

0xaa42,	// (0x00015689) list_double_number_pane_vc_t1

0xaa56,	// (0x0001569d) list_double_number_pane_vc_t2_ParamLimits

0xaa56,	// (0x0001569d) list_double_number_pane_vc_t2

0xaa2a,	// (0x00015671) list_double_number_pane_vc_t3_ParamLimits

0xaa2a,	// (0x00015671) list_double_number_pane_vc_t3

0x0002,

0xfa89,	// (0x0001a6d0) list_double_number_pane_vc_t_ParamLimits

0xfa89,	// (0x0001a6d0) list_double_number_pane_vc_t

0xaa68,	// (0x000156af) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaa68,	// (0x000156af) list_double_large_graphic_pane_vc_g1

0xaa74,	// (0x000156bb) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaa74,	// (0x000156bb) list_double_large_graphic_pane_vc_g2

0x68e7,	// (0x0001152e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x68e7,	// (0x0001152e) list_double_large_graphic_pane_vc_g3

0xaa83,	// (0x000156ca) list_double_large_graphic_pane_vc_g4_ParamLimits

0xaa83,	// (0x000156ca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa90,	// (0x0001a6d7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa90,	// (0x0001a6d7) list_double_large_graphic_pane_vc_g

0xaa8f,	// (0x000156d6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xaa8f,	// (0x000156d6) list_double_large_graphic_pane_vc_t1

0xaaa1,	// (0x000156e8) list_double_large_graphic_pane_vc_t2_ParamLimits

0xaaa1,	// (0x000156e8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa99,	// (0x0001a6e0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa99,	// (0x0001a6e0) list_double_large_graphic_pane_vc_t

0x68db,	// (0x00011522) list_double_heading_pane_vc_g1_ParamLimits

0x68db,	// (0x00011522) list_double_heading_pane_vc_g1

0x68e7,	// (0x0001152e) list_double_heading_pane_vc_g2_ParamLimits

0x68e7,	// (0x0001152e) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001a253) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001a253) list_double_heading_pane_vc_g

0xaaba,	// (0x00015701) list_double_heading_pane_vc_t1_ParamLimits

0xaaba,	// (0x00015701) list_double_heading_pane_vc_t1

0x8aa5,	// (0x000136ec) list_double_heading_pane_vc_t2_ParamLimits

0x8aa5,	// (0x000136ec) list_double_heading_pane_vc_t2

0x0001,

0xfa9e,	// (0x0001a6e5) list_double_heading_pane_vc_t_ParamLimits

0xfa9e,	// (0x0001a6e5) list_double_heading_pane_vc_t

0x89df,	// (0x00013626) list_double_graphic_pane_vc_g1_ParamLimits

0x89df,	// (0x00013626) list_double_graphic_pane_vc_g1

0xaace,	// (0x00015715) list_double_graphic_pane_vc_g2_ParamLimits

0xaace,	// (0x00015715) list_double_graphic_pane_vc_g2

0xaadd,	// (0x00015724) list_double_graphic_pane_vc_g3_ParamLimits

0xaadd,	// (0x00015724) list_double_graphic_pane_vc_g3

0x0002,

0xfaa3,	// (0x0001a6ea) list_double_graphic_pane_vc_g_ParamLimits

0xfaa3,	// (0x0001a6ea) list_double_graphic_pane_vc_g

0xaae9,	// (0x00015730) list_double_graphic_pane_vc_t1_ParamLimits

0xaae9,	// (0x00015730) list_double_graphic_pane_vc_t1

0xaa2a,	// (0x00015671) list_double_graphic_pane_vc_t2_ParamLimits

0xaa2a,	// (0x00015671) list_double_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001a6f1) list_double_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001a6f1) list_double_graphic_pane_vc_t

0x42b8,	// (0x0000eeff) aid_size_cell_fastswap

0xdf63,	// (0x00018baa) aid_size_cell_touch_ParamLimits

0xdf63,	// (0x00018baa) aid_size_cell_touch

0x4525,	// (0x0000f16c) popup_fast_swap_wide_window_ParamLimits

0x4525,	// (0x0000f16c) popup_fast_swap_wide_window

0xe0ae,	// (0x00018cf5) touch_pane_ParamLimits

0xe0ae,	// (0x00018cf5) touch_pane

0x6d07,	// (0x0001194e) button_value_adjust_pane_cp2

0x6d07,	// (0x0001194e) button_value_adjust_pane_cp4

0x6d27,	// (0x0001196e) form_field_data_pane_cp2

0x0c62,	// (0x0000b8a9) form_field_data_wide_pane_cp2

0x73cf,	// (0x00012016) bg_scroll_pane_ParamLimits

0x48a7,	// (0x0000f4ee) scroll_handle_pane_ParamLimits

0x48bb,	// (0x0000f502) scroll_sc2_down_pane_ParamLimits

0x48bb,	// (0x0000f502) scroll_sc2_down_pane

0x7400,	// (0x00012047) scroll_sc2_up_pane_ParamLimits

0x7400,	// (0x00012047) scroll_sc2_up_pane

0x25aa,	// (0x0000d1f1) grid_wheel_folder_pane_g1_ParamLimits

0x25aa,	// (0x0000d1f1) grid_wheel_folder_pane_g1

0x4a80,	// (0x0000f6c7) clock_nsta_pane_cp2_ParamLimits

0x4a80,	// (0x0000f6c7) clock_nsta_pane_cp2

0x1068,	// (0x0000bcaf) listscroll_midp_pane_ParamLimits

0x1079,	// (0x0000bcc0) midp_canvas_pane

0x7f1f,	// (0x00012b66) nsta_clock_indic_pane

0x7f7d,	// (0x00012bc4) listscroll_form_pane_vc

0x7f99,	// (0x00012be0) listscroll_set_pane_vc_ParamLimits

0x7f99,	// (0x00012be0) listscroll_set_pane_vc

0x1a56,	// (0x0000c69d) clock_nsta_pane

0x1a80,	// (0x0000c6c7) indicator_nsta_pane

0x8979,	// (0x000135c0) bg_popup_sub_pane_cp2_ParamLimits

0x898d,	// (0x000135d4) find_pane_cp2_ParamLimits

0x898d,	// (0x000135d4) find_pane_cp2

0x89a3,	// (0x000135ea) grid_toobar_pane_ParamLimits

0x8b4b,	// (0x00013792) list_form_gen_pane_vc_ParamLimits

0x8b4b,	// (0x00013792) list_form_gen_pane_vc

0x8b61,	// (0x000137a8) scroll_pane_cp8_vc_ParamLimits

0x8b61,	// (0x000137a8) scroll_pane_cp8_vc

0x8bdd,	// (0x00013824) data_form_wide_pane_vc_ParamLimits

0x8bdd,	// (0x00013824) data_form_wide_pane_vc

0x8be9,	// (0x00013830) form_field_data_wide_pane_vc_g1

0x8bf1,	// (0x00013838) form_field_data_wide_pane_vc_t1_ParamLimits

0x8bf1,	// (0x00013838) form_field_data_wide_pane_vc_t1

0x6ddf,	// (0x00011a26) input_focus_pane_cp6_vc_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_cp6_vc

0x1e8b,	// (0x0000cad2) list_midp_pane_ParamLimits

0xa36c,	// (0x00014fb3) scroll_pane_cp16_ParamLimits

0xa36c,	// (0x00014fb3) scroll_pane_cp16

0x8fa6,	// (0x00013bed) button_value_adjust_pane_ParamLimits

0x8fa6,	// (0x00013bed) button_value_adjust_pane

0x21fa,	// (0x0000ce41) button_value_adjust_pane_cp6_ParamLimits

0x21fa,	// (0x0000ce41) button_value_adjust_pane_cp6

0x2310,	// (0x0000cf57) settings_code_pane_cp_ParamLimits

0x2310,	// (0x0000cf57) settings_code_pane_cp

0x5f1c,	// (0x00010b63) cell_touch_pane_g1

0x5f1c,	// (0x00010b63) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001a389) cell_touch_pane_g

0x2489,	// (0x0000d0d0) cell_touch_pane_cp_ParamLimits

0x2489,	// (0x0000d0d0) cell_touch_pane_cp

0x24a5,	// (0x0000d0ec) cell_touch_pane_ParamLimits

0x24a5,	// (0x0000d0ec) cell_touch_pane

0x5f1c,	// (0x00010b63) scroll_sc2_down_pane_g1

0x5f1c,	// (0x00010b63) scroll_sc2_up_pane_g1

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp4_vc

0xa70f,	// (0x00015356) list_set_graphic_pane_vc_g1_ParamLimits

0xa70f,	// (0x00015356) list_set_graphic_pane_vc_g1

0xa71b,	// (0x00015362) list_set_graphic_pane_vc_g2_ParamLimits

0xa71b,	// (0x00015362) list_set_graphic_pane_vc_g2

0x0001,

0xfa27,	// (0x0001a66e) list_set_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x0001a66e) list_set_graphic_pane_vc_g

0xa727,	// (0x0001536e) text_primary_small_cp13_vc_ParamLimits

0xa727,	// (0x0001536e) text_primary_small_cp13_vc

0xa73f,	// (0x00015386) list_set_graphic_pane_vc_ParamLimits

0xa73f,	// (0x00015386) list_set_graphic_pane_vc

0x5f26,	// (0x00010b6d) input_focus_pane_cp2_vc

0x5f1c,	// (0x00010b63) setting_code_pane_vc_g1

0xa753,	// (0x0001539a) setting_code_pane_vc_t1

0xa761,	// (0x000153a8) set_text_pane_vc_t1_ParamLimits

0xa761,	// (0x000153a8) set_text_pane_vc_t1

0x5f26,	// (0x00010b6d) input_focus_pane_cp1_vc

0xa780,	// (0x000153c7) list_set_text_pane_vc

0x5f1c,	// (0x00010b63) setting_text_pane_vc_g1

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp2_vc

0xa78a,	// (0x000153d1) setting_slider_graphic_pane_vc_g1

0xa792,	// (0x000153d9) setting_slider_graphic_pane_vc_t1

0xa7a0,	// (0x000153e7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001a673) setting_slider_graphic_pane_vc_t

0xa7ae,	// (0x000153f5) slider_set_pane_cp_vc

0xa7b6,	// (0x000153fd) slider_set_pane_vc_g1

0xa7bf,	// (0x00015406) slider_set_pane_vc_g2

0x0006,

0xfa31,	// (0x0001a678) slider_set_pane_vc_g

0x6f1b,	// (0x00011b62) set_opt_bg_pane_g1_copy1

0x6f23,	// (0x00011b6a) set_opt_bg_pane_g2_copy1

0xa7eb,	// (0x00015432) set_opt_bg_pane_g3_copy1

0x6f33,	// (0x00011b7a) set_opt_bg_pane_g4_copy1

0x6f3b,	// (0x00011b82) set_opt_bg_pane_g5_copy1

0x6f43,	// (0x00011b8a) set_opt_bg_pane_g6_copy1

0xa7f3,	// (0x0001543a) set_opt_bg_pane_g7_copy1

0xa7fd,	// (0x00015444) set_opt_bg_pane_g8_copy1

0xa805,	// (0x0001544c) set_opt_bg_pane_g9_copy1

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp_vc

0xa80d,	// (0x00015454) setting_slider_pane_vc_t1

0xa792,	// (0x000153d9) setting_slider_pane_vc_t2

0xa7a0,	// (0x000153e7) setting_slider_pane_vc_t3

0x0002,

0xfa40,	// (0x0001a687) setting_slider_pane_vc_t

0xa7ae,	// (0x000153f5) slider_set_pane_vc

0x4e92,	// (0x0000fad9) volume_set_pane_vc_g1

0x518d,	// (0x0000fdd4) volume_set_pane_vc_g2

0x5196,	// (0x0000fddd) volume_set_pane_vc_g3

0x519f,	// (0x0000fde6) volume_set_pane_vc_g4

0x51a8,	// (0x0000fdef) volume_set_pane_vc_g5

0x51b1,	// (0x0000fdf8) volume_set_pane_vc_g6

0x51ba,	// (0x0000fe01) volume_set_pane_vc_g7

0x51c3,	// (0x0000fe0a) volume_set_pane_vc_g8

0x51cc,	// (0x0000fe13) volume_set_pane_vc_g9

0x51d5,	// (0x0000fe1c) volume_set_pane_vc_g10

0x0009,

0xfa47,	// (0x0001a68e) volume_set_pane_vc_g

0xa81c,	// (0x00015463) volume_set_pane_vc

0xa824,	// (0x0001546b) button_value_adjust_pane_cp1_vc

0xa82e,	// (0x00015475) list_highlight_pane_cp2_vc

0xa837,	// (0x0001547e) list_set_pane_vc_ParamLimits

0xa837,	// (0x0001547e) list_set_pane_vc

0xa889,	// (0x000154d0) main_pane_set_vc_t1_ParamLimits

0xa889,	// (0x000154d0) main_pane_set_vc_t1

0xa89e,	// (0x000154e5) main_pane_set_vc_t2_ParamLimits

0xa89e,	// (0x000154e5) main_pane_set_vc_t2

0xa8b0,	// (0x000154f7) main_pane_set_vc_t3_ParamLimits

0xa8b0,	// (0x000154f7) main_pane_set_vc_t3

0xa8c2,	// (0x00015509) main_pane_set_vc_t4_ParamLimits

0xa8c2,	// (0x00015509) main_pane_set_vc_t4

0x0003,

0xfa5c,	// (0x0001a6a3) main_pane_set_vc_t_ParamLimits

0xfa5c,	// (0x0001a6a3) main_pane_set_vc_t

0xa8d4,	// (0x0001551b) setting_code_pane_vc_ParamLimits

0xa8d4,	// (0x0001551b) setting_code_pane_vc

0xa8e3,	// (0x0001552a) setting_slider_graphic_pane_vc

0xa8e3,	// (0x0001552a) setting_slider_pane_vc

0xa8e3,	// (0x0001552a) setting_text_pane_vc

0xa8e3,	// (0x0001552a) setting_volume_pane_vc

0xa8eb,	// (0x00015532) scroll_pane_cp121_vc

0x6cf5,	// (0x0001193c) set_content_pane_vc

0xaafb,	// (0x00015742) button_value_adjust_pane_g1

0xab04,	// (0x0001574b) button_value_adjust_pane_g2

0x0001,

0xfaaf,	// (0x0001a6f6) button_value_adjust_pane_g

0xab0d,	// (0x00015754) form_field_slider_wide_pane_vc_t1_ParamLimits

0xab0d,	// (0x00015754) form_field_slider_wide_pane_vc_t1

0xab21,	// (0x00015768) form_field_slider_wide_pane_vc_t2_ParamLimits

0xab21,	// (0x00015768) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab4,	// (0x0001a6fb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab4,	// (0x0001a6fb) form_field_slider_wide_pane_vc_t

0x629b,	// (0x00010ee2) input_focus_pane_cp10_vc_ParamLimits

0x629b,	// (0x00010ee2) input_focus_pane_cp10_vc

0xab33,	// (0x0001577a) slider_cont_pane_cp1_vc_ParamLimits

0xab33,	// (0x0001577a) slider_cont_pane_cp1_vc

0xa7b6,	// (0x000153fd) slider_form_pane_g1_cp2

0xa7bf,	// (0x00015406) slider_form_pane_g2_cp2

0xab4c,	// (0x00015793) form_field_slider_pane_vc_t3

0xab5a,	// (0x000157a1) form_field_slider_pane_vc_t4

0xab68,	// (0x000157af) slider_form_pane_vc_ParamLimits

0xab68,	// (0x000157af) slider_form_pane_vc

0xab75,	// (0x000157bc) form_field_slider_pane_vc_t1_ParamLimits

0xab75,	// (0x000157bc) form_field_slider_pane_vc_t1

0xab21,	// (0x00015768) form_field_slider_pane_vc_t2_ParamLimits

0xab21,	// (0x00015768) form_field_slider_pane_vc_t2

0x0001,

0xfac4,	// (0x0001a70b) form_field_slider_pane_vc_t_ParamLimits

0xfac4,	// (0x0001a70b) form_field_slider_pane_vc_t

0x629b,	// (0x00010ee2) input_focus_pane_cp9_vc_ParamLimits

0x629b,	// (0x00010ee2) input_focus_pane_cp9_vc

0xab91,	// (0x000157d8) slider_cont_pane_vc_ParamLimits

0xab91,	// (0x000157d8) slider_cont_pane_vc

0xaba3,	// (0x000157ea) list_form_graphic_pane_cp_vc_ParamLimits

0xaba3,	// (0x000157ea) list_form_graphic_pane_cp_vc

0x8be9,	// (0x00013830) form_field_popup_wide_pane_vc_g1

0xabb8,	// (0x000157ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0xabb8,	// (0x000157ff) form_field_popup_wide_pane_vc_t1

0x6ddf,	// (0x00011a26) input_focus_pane_cp8_vc_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_cp8_vc

0xabcf,	// (0x00015816) list_form_wide_pane_vc_ParamLimits

0xabcf,	// (0x00015816) list_form_wide_pane_vc

0xabdb,	// (0x00015822) list_form_graphic_pane_vc_g1

0xabe3,	// (0x0001582a) list_form_graphic_pane_vc_t1_ParamLimits

0xabe3,	// (0x0001582a) list_form_graphic_pane_vc_t1

0x6006,	// (0x00010c4d) list_highlight_pane_cp5_vc_ParamLimits

0x6006,	// (0x00010c4d) list_highlight_pane_cp5_vc

0xabff,	// (0x00015846) list_form_graphic_pane_vc_ParamLimits

0xabff,	// (0x00015846) list_form_graphic_pane_vc

0x8be9,	// (0x00013830) form_field_popup_pane_vc_g1

0xac15,	// (0x0001585c) form_field_popup_pane_vc_t1_ParamLimits

0xac15,	// (0x0001585c) form_field_popup_pane_vc_t1

0x6ddf,	// (0x00011a26) input_focus_pane_cp7_vc_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_cp7_vc

0xac2c,	// (0x00015873) list_form_pane_vc_ParamLimits

0xac2c,	// (0x00015873) list_form_pane_vc

0xac38,	// (0x0001587f) data_form_pane_vc_t1_ParamLimits

0xac38,	// (0x0001587f) data_form_pane_vc_t1

0x6f1b,	// (0x00011b62) input_focus_pane_vc_g1

0x6f23,	// (0x00011b6a) input_focus_pane_vc_g2

0x6f2b,	// (0x00011b72) input_focus_pane_vc_g3

0x6f33,	// (0x00011b7a) input_focus_pane_vc_g4

0x6f3b,	// (0x00011b82) input_focus_pane_vc_g5

0x6f43,	// (0x00011b8a) input_focus_pane_vc_g6

0x6f4b,	// (0x00011b92) input_focus_pane_vc_g7

0x6f53,	// (0x00011b9a) input_focus_pane_vc_g8

0x6f5b,	// (0x00011ba2) input_focus_pane_vc_g9

0x5f1c,	// (0x00010b63) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001a312) input_focus_pane_vc_g

0x8bdd,	// (0x00013824) data_form_pane_vc_ParamLimits

0x8bdd,	// (0x00013824) data_form_pane_vc

0x8be9,	// (0x00013830) form_field_data_pane_vc_g1

0xac53,	// (0x0001589a) form_field_data_pane_vc_t1_ParamLimits

0xac53,	// (0x0001589a) form_field_data_pane_vc_t1

0x6ddf,	// (0x00011a26) input_focus_pane_vc_ParamLimits

0x6ddf,	// (0x00011a26) input_focus_pane_vc

0xac6d,	// (0x000158b4) button_value_adjust_pane_cp3_vc

0xac75,	// (0x000158bc) button_value_adjust_pane_cp5_vc

0xac7d,	// (0x000158c4) form_field_data_pane_vc_ParamLimits

0xac7d,	// (0x000158c4) form_field_data_pane_vc

0xac94,	// (0x000158db) form_field_data_pane_vc_cp2

0xac9c,	// (0x000158e3) form_field_data_wide_pane_vc_ParamLimits

0xac9c,	// (0x000158e3) form_field_data_wide_pane_vc

0xacb2,	// (0x000158f9) form_field_data_wide_pane_vc_cp2

0xacba,	// (0x00015901) form_field_popup_pane_vc_ParamLimits

0xacba,	// (0x00015901) form_field_popup_pane_vc

0xacd1,	// (0x00015918) form_field_popup_wide_pane_vc_ParamLimits

0xacd1,	// (0x00015918) form_field_popup_wide_pane_vc

0xace7,	// (0x0001592e) form_field_slider_pane_vc_ParamLimits

0xace7,	// (0x0001592e) form_field_slider_pane_vc

0xacfa,	// (0x00015941) form_field_slider_wide_pane_vc_ParamLimits

0xacfa,	// (0x00015941) form_field_slider_wide_pane_vc

0x24c3,	// (0x0000d10a) grid_touch_1_pane_ParamLimits

0x24c3,	// (0x0000d10a) grid_touch_1_pane

0x24d7,	// (0x0000d11e) grid_touch_2_pane_ParamLimits

0x24d7,	// (0x0000d11e) grid_touch_2_pane

0xadcf,	// (0x00015a16) touch_pane_g1_ParamLimits

0xadcf,	// (0x00015a16) touch_pane_g1

0xad31,	// (0x00015978) cell_app_pane_cp_wide_ParamLimits

0xad31,	// (0x00015978) cell_app_pane_cp_wide

0xad42,	// (0x00015989) grid_popup_fast_wide_pane_ParamLimits

0xad42,	// (0x00015989) grid_popup_fast_wide_pane

0xad56,	// (0x0001599d) scroll_pane_cp19_ParamLimits

0xad56,	// (0x0001599d) scroll_pane_cp19

0x5f26,	// (0x00010b6d) bg_popup_window_pane_cp20

0xad6a,	// (0x000159b1) listscroll_popup_fast_wide_pane

0x7124,	// (0x00011d6b) grid_indicator_nsta_pane

0xad72,	// (0x000159b9) clock_nsta_pane_g1

0xad7b,	// (0x000159c2) clock_nsta_pane_t1

0x2501,	// (0x0000d148) cell_indicator_nsta_pane_ParamLimits

0x2501,	// (0x0000d148) cell_indicator_nsta_pane

0xadcf,	// (0x00015a16) cell_indicator_nsta_pane_g1

0x251e,	// (0x0000d165) cell_indicator_nsta_pane_g2

0x0001,

0xface,	// (0x0001a715) cell_indicator_nsta_pane_g

0xadf3,	// (0x00015a3a) clock_nsta_pane_cp

0xadfb,	// (0x00015a42) indicator_nsta_pane_cp

0xae03,	// (0x00015a4a) nsta_clock_indic_pane_g1

0x60e9,	// (0x00010d30) grid_indicator_pane

0x74f2,	// (0x00012139) scroll_pane_cp29

0x49cf,	// (0x0000f616) indicator_nsta_pane_cp2_ParamLimits

0x49cf,	// (0x0000f616) indicator_nsta_pane_cp2

0x6006,	// (0x00010c4d) main_apps_wheel_pane

0x8e41,	// (0x00013a88) form_midp_field_text_pane_ParamLimits

0x8f86,	// (0x00013bcd) scroll_bar_cp050_ParamLimits

0xae3b,	// (0x00015a82) cell_indicator_pane_ParamLimits

0xae3b,	// (0x00015a82) cell_indicator_pane

0xae58,	// (0x00015a9f) cell_indicator_pane_g1

0x2534,	// (0x0000d17b) grid_wheel_folder_pane_ParamLimits

0x2534,	// (0x0000d17b) grid_wheel_folder_pane

0x2542,	// (0x0000d189) list_wheel_apps_pane_ParamLimits

0x2542,	// (0x0000d189) list_wheel_apps_pane

0x2550,	// (0x0000d197) main_apps_wheel_pane_g1_ParamLimits

0x2550,	// (0x0000d197) main_apps_wheel_pane_g1

0x255c,	// (0x0000d1a3) main_apps_wheel_pane_g2_ParamLimits

0x255c,	// (0x0000d1a3) main_apps_wheel_pane_g2

0x0001,

0xfadd,	// (0x0001a724) main_apps_wheel_pane_g_ParamLimits

0xfadd,	// (0x0001a724) main_apps_wheel_pane_g

0x256a,	// (0x0000d1b1) main_apps_wheel_pane_t1_ParamLimits

0x256a,	// (0x0000d1b1) main_apps_wheel_pane_t1

0x257e,	// (0x0000d1c5) list_wheel_apps_pane_g1

0x2586,	// (0x0000d1cd) list_wheel_apps_pane_g2

0x258e,	// (0x0000d1d5) list_wheel_apps_pane_g3

0x2596,	// (0x0000d1dd) list_wheel_apps_pane_g4

0x25a0,	// (0x0000d1e7) list_wheel_apps_pane_g5

0x0004,

0xfae2,	// (0x0001a729) list_wheel_apps_pane_g

0x7aa3,	// (0x000126ea) navi_icon_text_pane

0x1951,	// (0x0000c598) aid_fill_nsta

0x25b7,	// (0x0000d1fe) navi_icon_text_pane_g1

0x25c3,	// (0x0000d20a) navi_icon_text_pane_t1

0x793f,	// (0x00012586) list_set_graphic_pane_t1_ParamLimits

0x793f,	// (0x00012586) list_set_graphic_pane_t1

0x9697,	// (0x000142de) popup_midp_note_alarm_window_t6_ParamLimits

0x9697,	// (0x000142de) popup_midp_note_alarm_window_t6

0x96a9,	// (0x000142f0) popup_midp_note_alarm_window_t7_ParamLimits

0x96a9,	// (0x000142f0) popup_midp_note_alarm_window_t7

0x96bb,	// (0x00014302) popup_midp_note_alarm_window_t8_ParamLimits

0x96bb,	// (0x00014302) popup_midp_note_alarm_window_t8

0x96cd,	// (0x00014314) popup_midp_note_alarm_window_t9_ParamLimits

0x96cd,	// (0x00014314) popup_midp_note_alarm_window_t9

0x96df,	// (0x00014326) popup_midp_note_alarm_window_t10_ParamLimits

0x96df,	// (0x00014326) popup_midp_note_alarm_window_t10

0x96f1,	// (0x00014338) popup_midp_note_alarm_window_t11_ParamLimits

0x96f1,	// (0x00014338) popup_midp_note_alarm_window_t11

0x9703,	// (0x0001434a) scroll_pane_cp17_ParamLimits

0x9703,	// (0x0001434a) scroll_pane_cp17

0x4e92,	// (0x0000fad9) volume_small_pane_cp_g1

0x51de,	// (0x0000fe25) volume_small_pane_cp_g2

0x51e7,	// (0x0000fe2e) volume_small_pane_cp_g3

0x51f0,	// (0x0000fe37) volume_small_pane_cp_g4

0x51f9,	// (0x0000fe40) volume_small_pane_cp_g5

0x5202,	// (0x0000fe49) volume_small_pane_cp_g6

0x520b,	// (0x0000fe52) volume_small_pane_cp_g7

0x5214,	// (0x0000fe5b) volume_small_pane_cp_g8

0x521d,	// (0x0000fe64) volume_small_pane_cp_g9

0x5226,	// (0x0000fe6d) volume_small_pane_cp_g10

0x7d04,	// (0x0001294b) midp_ticker_pane_g1_ParamLimits

0x7d10,	// (0x00012957) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001a3da) midp_ticker_pane_g_ParamLimits

0x1114,	// (0x0000bd5b) midp_ticker_pane_t1_ParamLimits

0x1971,	// (0x0000c5b8) aid_fill_nsta_2

0x8f72,	// (0x00013bb9) list_form2_midp_pane

0xa0ca,	// (0x00014d11) midp_editing_number_pane_ParamLimits

0xa0d9,	// (0x00014d20) midp_ticker_pane_ParamLimits

0xaf41,	// (0x00015b88) form2_midp_field_pane

0xaf65,	// (0x00015bac) scroll_pane_cp51

0xaf85,	// (0x00015bcc) form2_midp_button_pane_ParamLimits

0xaf85,	// (0x00015bcc) form2_midp_button_pane

0xaf97,	// (0x00015bde) form2_midp_content_pane_ParamLimits

0xaf97,	// (0x00015bde) form2_midp_content_pane

0xafb1,	// (0x00015bf8) form2_midp_field_choice_group_pane

0xafb9,	// (0x00015c00) form2_midp_field_pane_g1

0xafc1,	// (0x00015c08) form2_midp_field_pane_g2

0xafc9,	// (0x00015c10) form2_midp_field_pane_g3

0xafd1,	// (0x00015c18) form2_midp_field_pane_g4

0x0003,

0xfb07,	// (0x0001a74e) form2_midp_field_pane_g

0xafd9,	// (0x00015c20) form2_midp_gauge_slider_pane

0xafe1,	// (0x00015c28) form2_midp_gauge_wait_pane

0xafe9,	// (0x00015c30) form2_midp_image_pane_ParamLimits

0xafe9,	// (0x00015c30) form2_midp_image_pane

0xb004,	// (0x00015c4b) form2_midp_label_pane_ParamLimits

0xb004,	// (0x00015c4b) form2_midp_label_pane

0x25f1,	// (0x0000d238) form2_midp_label_pane_cp_ParamLimits

0x25f1,	// (0x0000d238) form2_midp_label_pane_cp

0xb03e,	// (0x00015c85) form2_midp_string_pane_ParamLimits

0xb03e,	// (0x00015c85) form2_midp_string_pane

0xb050,	// (0x00015c97) form2_midp_text_pane_ParamLimits

0xb050,	// (0x00015c97) form2_midp_text_pane

0xb069,	// (0x00015cb0) form2_midp_time_pane

0xb079,	// (0x00015cc0) input_focus_pane_cp51_ParamLimits

0xb079,	// (0x00015cc0) input_focus_pane_cp51

0xb091,	// (0x00015cd8) form2_midp_label_pane_t1_ParamLimits

0xb091,	// (0x00015cd8) form2_midp_label_pane_t1

0xb0d1,	// (0x00015d18) form2_mdip_text_pane_t1_ParamLimits

0xb0d1,	// (0x00015d18) form2_mdip_text_pane_t1

0xb0ed,	// (0x00015d34) form2_midp_time_pane_t1

0xb108,	// (0x00015d4f) form2_midp_gauge_slider_pane_t1

0x2612,	// (0x0000d259) form2_midp_gauge_slider_pane_t2

0x2624,	// (0x0000d26b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb10,	// (0x0001a757) form2_midp_gauge_slider_pane_t

0xb13e,	// (0x00015d85) form2_midp_slider_pane

0xb14a,	// (0x00015d91) form2_midp_gauge_wait_pane_t1

0xb158,	// (0x00015d9f) form2_midp_wait_pane_ParamLimits

0xb158,	// (0x00015d9f) form2_midp_wait_pane

0x2636,	// (0x0000d27d) list_single_2graphic_pane_cp4_ParamLimits

0x2636,	// (0x0000d27d) list_single_2graphic_pane_cp4

0x1df6,	// (0x0000ca3d) list_single_midp_graphic_pane_cp_ParamLimits

0x1df6,	// (0x0000ca3d) list_single_midp_graphic_pane_cp

0x5f26,	// (0x00010b6d) list_highlight_pane_cp20

0xb1b2,	// (0x00015df9) list_single_2graphic_pane_g1_cp4

0xa5de,	// (0x00015225) list_single_2graphic_pane_g2_cp4

0xb1ba,	// (0x00015e01) list_single_2graphic_pane_t1_cp4

0x6006,	// (0x00010c4d) list_highlight_pane_cp21

0xb1c9,	// (0x00015e10) list_single_midp_graphic_pane_g4_cp

0xb1d8,	// (0x00015e1f) list_single_midp_graphic_pane_t1_cp

0x264d,	// (0x0000d294) form2_mdip_string_pane_t1_ParamLimits

0x264d,	// (0x0000d294) form2_mdip_string_pane_t1

0x5f26,	// (0x00010b6d) bg_wml_button_pane_cp2

0x5f1c,	// (0x00010b63) form2_midp_image_pane_g1

0x6ab9,	// (0x00011700) list_double_large_graphic_pane_g5_ParamLimits

0x6ab9,	// (0x00011700) list_double_large_graphic_pane_g5

0x1068,	// (0x0000bcaf) midp_form_pane_ParamLimits

0x6006,	// (0x00010c4d) main_apps_wheel_pane_ParamLimits

0x16ad,	// (0x0000c2f4) popup_preview_window_ParamLimits

0x16ad,	// (0x0000c2f4) popup_preview_window

0x8501,	// (0x00013148) popup_touch_info_window_ParamLimits

0x8501,	// (0x00013148) popup_touch_info_window

0x851f,	// (0x00013166) popup_touch_menu_window_ParamLimits

0x851f,	// (0x00013166) popup_touch_menu_window

0x5f12,	// (0x00010b59) bg_popup_sub_pane_cp6

0xb327,	// (0x00015f6e) list_touch_menu_pane

0xb32f,	// (0x00015f76) list_single_touch_menu_pane_ParamLimits

0xb32f,	// (0x00015f76) list_single_touch_menu_pane

0xb344,	// (0x00015f8b) list_single_touch_menu_pane_t1

0x6006,	// (0x00010c4d) bg_popup_sub_pane_cp7_ParamLimits

0x6006,	// (0x00010c4d) bg_popup_sub_pane_cp7

0xb352,	// (0x00015f99) heading_sub_pane

0xb35a,	// (0x00015fa1) list_touch_info_pane_ParamLimits

0xb35a,	// (0x00015fa1) list_touch_info_pane

0xb369,	// (0x00015fb0) list_single_touch_info_pane_ParamLimits

0xb369,	// (0x00015fb0) list_single_touch_info_pane

0xb37b,	// (0x00015fc2) list_single_touch_info_pane_t1

0xb389,	// (0x00015fd0) list_single_touch_info_pane_t2

0x0001,

0xfb1e,	// (0x0001a765) list_single_touch_info_pane_t

0x7c25,	// (0x0001286c) bg_popup_heading_pane_cp

0xb397,	// (0x00015fde) heading_sub_pane_t1

0x8b77,	// (0x000137be) bg_popup_preview_window_pane_cp_ParamLimits

0x8b77,	// (0x000137be) bg_popup_preview_window_pane_cp

0xb352,	// (0x00015f99) heading_preview_pane

0xb35a,	// (0x00015fa1) list_preview_pane_ParamLimits

0xb35a,	// (0x00015fa1) list_preview_pane

0xb3a5,	// (0x00015fec) popup_preview_window_g1

0xb369,	// (0x00015fb0) list_single_preview_pane_ParamLimits

0xb369,	// (0x00015fb0) list_single_preview_pane

0xb3ad,	// (0x00015ff4) list_single_preview_pane_g1

0xb3b5,	// (0x00015ffc) list_single_preview_pane_t1

0xb37b,	// (0x00015fc2) list_single_preview_pane_t2

0x0001,

0xfb23,	// (0x0001a76a) list_single_preview_pane_t

0xb3c3,	// (0x0001600a) bg_popup_heading_pane_cp2_ParamLimits

0xb3c3,	// (0x0001600a) bg_popup_heading_pane_cp2

0xb3d9,	// (0x00016020) heading_preview_pane_g1

0xb3e1,	// (0x00016028) heading_preview_pane_t1_ParamLimits

0xb3e1,	// (0x00016028) heading_preview_pane_t1

0x610c,	// (0x00010d53) soft_indicator_pane_t1_ParamLimits

0x67e6,	// (0x0001142d) scroll_pane_ParamLimits

0x73ee,	// (0x00012035) scroll_sc2_left_pane

0x73f7,	// (0x0001203e) scroll_sc2_right_pane

0x7416,	// (0x0001205d) scroll_bg_pane_g1_ParamLimits

0x742b,	// (0x00012072) scroll_bg_pane_g2_ParamLimits

0x7443,	// (0x0001208a) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001a369) scroll_bg_pane_g_ParamLimits

0x7416,	// (0x0001205d) scroll_handle_pane_g1_ParamLimits

0x7465,	// (0x000120ac) scroll_handle_pane_g2_ParamLimits

0x7443,	// (0x0001208a) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001a370) scroll_handle_pane_g_ParamLimits

0x7fdb,	// (0x00012c22) popup_choice_list_window_ParamLimits

0x7fdb,	// (0x00012c22) popup_choice_list_window

0x8985,	// (0x000135cc) choice_list_pane

0x8a29,	// (0x00013670) cell_toolbar_pane_t1

0x8a51,	// (0x00013698) toolbar_button_pane_ParamLimits

0x9bc7,	// (0x0001480e) ai_gene_pane_1_t2_ParamLimits

0x9bc7,	// (0x0001480e) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0001a588) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0001a588) ai_gene_pane_1_t

0xb3fe,	// (0x00016045) scroll_sc2_left_pane_g1

0xb3fe,	// (0x00016045) scroll_sc2_right_pane_g1

0x7fab,	// (0x00012bf2) bg_popup_sub_pane_cp10

0xb408,	// (0x0001604f) list_choice_list_pane

0xb41f,	// (0x00016066) list_single_choice_list_pane_ParamLimits

0xb41f,	// (0x00016066) list_single_choice_list_pane

0xb433,	// (0x0001607a) list_single_choice_list_pane_g1

0xb43b,	// (0x00016082) list_single_choice_list_pane_t1_ParamLimits

0xb43b,	// (0x00016082) list_single_choice_list_pane_t1

0xb450,	// (0x00016097) choice_list_pane_g1

0xb458,	// (0x0001609f) choice_list_pane_t1

0x5f12,	// (0x00010b59) input_focus_pane_cp11

0x72cc,	// (0x00011f13) title_pane_stacon_g2_ParamLimits

0x72cc,	// (0x00011f13) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001a34f) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001a34f) title_pane_stacon_g

0x7c25,	// (0x0001286c) cursor_press_pane

0x136c,	// (0x0000bfb3) popup_fep_hwr_window_ParamLimits

0x136c,	// (0x0000bfb3) popup_fep_hwr_window

0x80f9,	// (0x00012d40) popup_fep_vkb_window_ParamLimits

0x80f9,	// (0x00012d40) popup_fep_vkb_window

0xb466,	// (0x000160ad) cursor_press_pane_g1

0x0002,

0xfb4c,	// (0x0001a793) fep_vkb_side_pane_g_ParamLimits

0x5268,	// (0x0000feaf) fep_hwr_candidate_pane_ParamLimits

0x5268,	// (0x0000feaf) fep_hwr_candidate_pane

0x5292,	// (0x0000fed9) fep_hwr_side_pane_ParamLimits

0x5292,	// (0x0000fed9) fep_hwr_side_pane

0x52b2,	// (0x0000fef9) fep_hwr_top_pane_ParamLimits

0x52b2,	// (0x0000fef9) fep_hwr_top_pane

0x52ca,	// (0x0000ff11) fep_hwr_write_pane_ParamLimits

0x52ca,	// (0x0000ff11) fep_hwr_write_pane

0xfb4c,	// (0x0001a793) fep_vkb_side_pane_g

0xb46e,	// (0x000160b5) fep_hwr_top_pane_g1

0xb480,	// (0x000160c7) fep_hwr_top_pane_g2

0x5304,	// (0x0000ff4b) fep_hwr_top_pane_g3

0x0002,

0xfb28,	// (0x0001a76f) fep_hwr_top_pane_g

0x5319,	// (0x0000ff60) fep_hwr_top_text_pane

0x75b8,	// (0x000121ff) fep_hwr_top_text_pane_g1

0xb4b6,	// (0x000160fd) fep_hwr_top_text_pane_t1

0x540f,	// (0x00010056) fep_hwr_candidate_pane_g1

0xb71e,	// (0x00016365) fep_vkb_keypad_pane_g3_ParamLimits

0xb71e,	// (0x00016365) fep_vkb_keypad_pane_g3

0xb746,	// (0x0001638d) fep_vkb_keypad_pane_g4_ParamLimits

0xb746,	// (0x0001638d) fep_vkb_keypad_pane_g4

0xb7b5,	// (0x000163fc) fep_vkb_bottom_pane_g2_ParamLimits

0xb7b5,	// (0x000163fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb53,	// (0x0001a79a) fep_vkb_bottom_pane_g_ParamLimits

0xfb53,	// (0x0001a79a) fep_vkb_bottom_pane_g

0xb3fe,	// (0x00016045) cell_vkb_side_pane_g2

0x0001,

0xfb5d,	// (0x0001a7a4) cell_vkb_side_pane_g

0xb840,	// (0x00016487) cell_vkb_side_pane_t1

0xb84e,	// (0x00016495) cell_vkb_side_pane_t1_copy1

0xb3fe,	// (0x00016045) bg_fep_vkb_candidate_pane_g2

0xb980,	// (0x000165c7) cell_vkb_candidate_pane_ParamLimits

0xb4d2,	// (0x00016119) aid_size_cell_vkb_ParamLimits

0xb4d2,	// (0x00016119) aid_size_cell_vkb

0xb980,	// (0x000165c7) cell_vkb_candidate_pane

0x5436,	// (0x0001007d) bg_popup_fep_shadow_pane_g1

0xb560,	// (0x000161a7) fep_vkb_bottom_pane_ParamLimits

0xb560,	// (0x000161a7) fep_vkb_bottom_pane

0xb59d,	// (0x000161e4) fep_vkb_candidate_pane_ParamLimits

0xb59d,	// (0x000161e4) fep_vkb_candidate_pane

0xb5b9,	// (0x00016200) fep_vkb_keypad_pane_ParamLimits

0xb5b9,	// (0x00016200) fep_vkb_keypad_pane

0xb5ff,	// (0x00016246) fep_vkb_side_pane_ParamLimits

0xb5ff,	// (0x00016246) fep_vkb_side_pane

0xb63b,	// (0x00016282) fep_vkb_top_pane_ParamLimits

0xb63b,	// (0x00016282) fep_vkb_top_pane

0xb677,	// (0x000162be) fep_vkb_top_pane_g1_ParamLimits

0xb677,	// (0x000162be) fep_vkb_top_pane_g1

0xb686,	// (0x000162cd) fep_vkb_top_pane_g2_ParamLimits

0xb686,	// (0x000162cd) fep_vkb_top_pane_g2

0xb695,	// (0x000162dc) fep_vkb_top_pane_g3_ParamLimits

0xb695,	// (0x000162dc) fep_vkb_top_pane_g3

0x0003,

0xfb43,	// (0x0001a78a) fep_vkb_top_pane_g_ParamLimits

0xfb43,	// (0x0001a78a) fep_vkb_top_pane_g

0xb6b3,	// (0x000162fa) fep_vkb_top_text_pane_ParamLimits

0xb6b3,	// (0x000162fa) fep_vkb_top_text_pane

0x2732,	// (0x0000d379) fep_vkb_side_pane_g1_ParamLimits

0x2732,	// (0x0000d379) fep_vkb_side_pane_g1

0xb70d,	// (0x00016354) grid_vkb_side_pane_ParamLimits

0xb70d,	// (0x00016354) grid_vkb_side_pane

0x543e,	// (0x00010085) bg_popup_fep_shadow_pane_g2

0x5447,	// (0x0001008e) bg_popup_fep_shadow_pane_g3

0x544f,	// (0x00010096) bg_popup_fep_shadow_pane_g4

0x5458,	// (0x0001009f) bg_popup_fep_shadow_pane_g5

0x5462,	// (0x000100a9) bg_popup_fep_shadow_pane_g6

0x546a,	// (0x000100b1) bg_popup_fep_shadow_pane_g7

0x6f33,	// (0x00011b7a) bg_popup_fep_shadow_pane_g8

0xb764,	// (0x000163ab) grid_vkb_keypad_number_pane_ParamLimits

0xb764,	// (0x000163ab) grid_vkb_keypad_number_pane

0xb774,	// (0x000163bb) grid_vkb_keypad_pane_ParamLimits

0xb774,	// (0x000163bb) grid_vkb_keypad_pane

0xb79a,	// (0x000163e1) fep_vkb_bottom_pane_g1_ParamLimits

0xb79a,	// (0x000163e1) fep_vkb_bottom_pane_g1

0xb7c3,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb7c3,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane

0xb7d8,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb7d8,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane

0xb7ed,	// (0x00016434) fep_vkb_top_text_pane_g1

0x2779,	// (0x0000d3c0) fep_vkb_top_text_pane_t1

0x278b,	// (0x0000d3d2) cell_vkb_side_pane_ParamLimits

0x278b,	// (0x0000d3d2) cell_vkb_side_pane

0xb3fe,	// (0x00016045) cell_vkb_side_pane_g1

0xb85c,	// (0x000164a3) cell_vkb_keypad_pane_ParamLimits

0xb85c,	// (0x000164a3) cell_vkb_keypad_pane

0xb8d7,	// (0x0001651e) cell_vkb_keypad_pane_g1

0x0008,

0xfb70,	// (0x0001a7b7) bg_popup_fep_shadow_pane_g

0x547c,	// (0x000100c3) cell_hwr_side_pane_g1

0x547c,	// (0x000100c3) cell_hwr_side_pane_g2

0xb8e1,	// (0x00016528) cell_vkb_keypad_pane_t1

0x27a1,	// (0x0000d3e8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x27a1,	// (0x0000d3e8) cell_vkb_keypad_bottom_left_pane

0x27b6,	// (0x0000d3fd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x27b6,	// (0x0000d3fd) cell_vkb_keypad_bottom_right_pane

0xb3fe,	// (0x00016045) cell_vkb_keypad_bottom_left_pane_g1

0xb3fe,	// (0x00016045) cell_vkb_keypad_bottom_right_pane_g1

0xb945,	// (0x0001658c) cell_vkb_keypad_number_pane_ParamLimits

0xb945,	// (0x0001658c) cell_vkb_keypad_number_pane

0xb964,	// (0x000165ab) cell_vkb_keypad_number_pane_g1

0xb96e,	// (0x000165b5) cell_vkb_keypad_number_pane_g2

0xb977,	// (0x000165be) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb62,	// (0x0001a7a9) cell_vkb_keypad_number_pane_g

0xb8e1,	// (0x00016528) cell_vkb_keypad_number_pane_t1

0xb99d,	// (0x000165e4) fep_vkb_candidate_pane_g1

0x0001,

0xfb83,	// (0x0001a7ca) cell_hwr_side_pane_g

0xb9b6,	// (0x000165fd) cell_hwr_side_pane_t1

0x5486,	// (0x000100cd) cell_hwr_side_pane_t1_copy1

0x5494,	// (0x000100db) cell_hwr_candidate_pane_g1

0x54c3,	// (0x0001010a) cell_hwr_candidate_pane_t1

0xb3fe,	// (0x00016045) cell_vkb_candidate_pane_g2

0xb9fa,	// (0x00016641) cell_vkb_candidate_pane_t1

0x522f,	// (0x0000fe76) bg_popup_fep_shadow_pane_ParamLimits

0x522f,	// (0x0000fe76) bg_popup_fep_shadow_pane

0x52e4,	// (0x0000ff2b) bg_fep_hwr_top_pane_g4

0xb492,	// (0x000160d9) bg_hwr_side_pane_g1_ParamLimits

0xb492,	// (0x000160d9) bg_hwr_side_pane_g1

0xe424,	// (0x0001906b) cell_hwr_side_pane_ParamLimits

0xe424,	// (0x0001906b) cell_hwr_side_pane

0x5390,	// (0x0000ffd7) fep_hwr_write_pane_g1_ParamLimits

0x5390,	// (0x0000ffd7) fep_hwr_write_pane_g1

0x539d,	// (0x0000ffe4) fep_hwr_write_pane_g2_ParamLimits

0x539d,	// (0x0000ffe4) fep_hwr_write_pane_g2

0x53aa,	// (0x0000fff1) fep_hwr_write_pane_g3_ParamLimits

0x53aa,	// (0x0000fff1) fep_hwr_write_pane_g3

0xe444,	// (0x0001908b) fep_hwr_write_pane_g4_ParamLimits

0xe444,	// (0x0001908b) fep_hwr_write_pane_g4

0x0005,

0xfb2f,	// (0x0001a776) fep_hwr_write_pane_g_ParamLimits

0xfb2f,	// (0x0001a776) fep_hwr_write_pane_g

0x52e4,	// (0x0000ff2b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x52e4,	// (0x0000ff2b) bg_fep_hwr_candidate_pane_g2

0x53cd,	// (0x00010014) cell_hwr_candidate_pane_ParamLimits

0x53cd,	// (0x00010014) cell_hwr_candidate_pane

0x540f,	// (0x00010056) fep_hwr_candidate_pane_g1_ParamLimits

0xb500,	// (0x00016147) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb500,	// (0x00016147) bg_popup_fep_shadow_pane_cp2

0xb6a5,	// (0x000162ec) fep_vkb_top_pane_g4_ParamLimits

0xb6a5,	// (0x000162ec) fep_vkb_top_pane_g4

0xb6eb,	// (0x00016332) fep_vkb_side_pane_g2_ParamLimits

0xb6eb,	// (0x00016332) fep_vkb_side_pane_g2

0x0b90,	// (0x0000b7d7) list_setting_pane_t4_ParamLimits

0x0b90,	// (0x0000b7d7) list_setting_pane_t4

0x0c0a,	// (0x0000b851) list_setting_number_pane_t5_ParamLimits

0x0c0a,	// (0x0000b851) list_setting_number_pane_t5

0x0f21,	// (0x0000bb68) list_double_heading_pane_cp2_ParamLimits

0x0f21,	// (0x0000bb68) list_double_heading_pane_cp2

0x6e05,	// (0x00011a4c) list_double_heading_pane_g1_cp2_ParamLimits

0x6e05,	// (0x00011a4c) list_double_heading_pane_g1_cp2

0x6e11,	// (0x00011a58) list_double_heading_pane_g2_cp2_ParamLimits

0x6e11,	// (0x00011a58) list_double_heading_pane_g2_cp2

0xba08,	// (0x0001664f) list_double_heading_pane_t1_cp2_ParamLimits

0xba08,	// (0x0001664f) list_double_heading_pane_t1_cp2

0xba1e,	// (0x00016665) list_double_heading_pane_t2_cp2_ParamLimits

0xba1e,	// (0x00016665) list_double_heading_pane_t2_cp2

0x5efa,	// (0x00010b41) aid_value_unit2

0x4571,	// (0x0000f1b8) popup_preview_fixed_window

0x62a9,	// (0x00010ef0) bg_popup_preview_window_pane_cp02

0xba30,	// (0x00016677) list_preview_fixed_pane

0xba76,	// (0x000166bd) list_empty_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_empty_pane_fp

0xba76,	// (0x000166bd) list_single_cale_day_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_single_cale_day_pane_fp

0xba76,	// (0x000166bd) list_single_graphic_heading_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_single_graphic_heading_pane_fp

0xba76,	// (0x000166bd) list_single_graphic_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_single_graphic_pane_fp

0xba76,	// (0x000166bd) list_single_heading_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_single_heading_pane_fp

0xba76,	// (0x000166bd) list_single_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_single_pane_fp

0xba8d,	// (0x000166d4) list_single_pane_fp_g1_ParamLimits

0xba8d,	// (0x000166d4) list_single_pane_fp_g1

0x6e05,	// (0x00011a4c) list_single_pane_fp_g2_ParamLimits

0x6e05,	// (0x00011a4c) list_single_pane_fp_g2

0x6e11,	// (0x00011a58) list_single_pane_fp_g3_ParamLimits

0x6e11,	// (0x00011a58) list_single_pane_fp_g3

0xba99,	// (0x000166e0) list_single_pane_fp_g4_ParamLimits

0xba99,	// (0x000166e0) list_single_pane_fp_g4

0x0003,

0xfb96,	// (0x0001a7dd) list_single_pane_fp_g_ParamLimits

0xfb96,	// (0x0001a7dd) list_single_pane_fp_g

0xbaa5,	// (0x000166ec) list_single_pane_fp_t1_ParamLimits

0xbaa5,	// (0x000166ec) list_single_pane_fp_t1

0xbabc,	// (0x00016703) list_single_graphic_pane_fp_g1_ParamLimits

0xbabc,	// (0x00016703) list_single_graphic_pane_fp_g1

0xba8d,	// (0x000166d4) list_single_graphic_pane_fp_g2_ParamLimits

0xba8d,	// (0x000166d4) list_single_graphic_pane_fp_g2

0x6e05,	// (0x00011a4c) list_single_graphic_pane_fp_g3_ParamLimits

0x6e05,	// (0x00011a4c) list_single_graphic_pane_fp_g3

0x6e11,	// (0x00011a58) list_single_graphic_pane_fp_g4_ParamLimits

0x6e11,	// (0x00011a58) list_single_graphic_pane_fp_g4

0xba99,	// (0x000166e0) list_single_graphic_pane_fp_g5_ParamLimits

0xba99,	// (0x000166e0) list_single_graphic_pane_fp_g5

0x0004,

0xfb9f,	// (0x0001a7e6) list_single_graphic_pane_fp_g_ParamLimits

0xfb9f,	// (0x0001a7e6) list_single_graphic_pane_fp_g

0xbac8,	// (0x0001670f) list_single_graphic_pane_fp_t1_ParamLimits

0xbac8,	// (0x0001670f) list_single_graphic_pane_fp_t1

0xbabc,	// (0x00016703) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbabc,	// (0x00016703) list_single_graphic_heading_pane_fp_g1

0xba8d,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xba8d,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2

0x6e05,	// (0x00011a4c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6e05,	// (0x00011a4c) list_single_graphic_heading_pane_fp_g3

0x6e11,	// (0x00011a58) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6e11,	// (0x00011a58) list_single_graphic_heading_pane_fp_g4

0xba99,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xba99,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0001a7e6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0001a7e6) list_single_graphic_heading_pane_fp_g

0xbade,	// (0x00016725) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbade,	// (0x00016725) list_single_graphic_heading_pane_fp_t1

0xbaf4,	// (0x0001673b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbaf4,	// (0x0001673b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x0001a7f1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x0001a7f1) list_single_graphic_heading_pane_fp_t

0xbb06,	// (0x0001674d) list_single_cale_day_pane_fp_g1_ParamLimits

0xbb06,	// (0x0001674d) list_single_cale_day_pane_fp_g1

0xbb3e,	// (0x00016785) list_single_cale_day_pane_fp_g2_ParamLimits

0xbb3e,	// (0x00016785) list_single_cale_day_pane_fp_g2

0xbb4a,	// (0x00016791) list_single_cale_day_pane_fp_g3_ParamLimits

0xbb4a,	// (0x00016791) list_single_cale_day_pane_fp_g3

0xbb72,	// (0x000167b9) list_single_cale_day_pane_fp_g4_ParamLimits

0xbb72,	// (0x000167b9) list_single_cale_day_pane_fp_g4

0xbb96,	// (0x000167dd) list_single_cale_day_pane_fp_g5_ParamLimits

0xbb96,	// (0x000167dd) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaf,	// (0x0001a7f6) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaf,	// (0x0001a7f6) list_single_cale_day_pane_fp_g

0xbbba,	// (0x00016801) list_single_cale_day_pane_fp_t1_ParamLimits

0xbbba,	// (0x00016801) list_single_cale_day_pane_fp_t1

0xbbe0,	// (0x00016827) list_single_cale_day_pane_fp_t2_ParamLimits

0xbbe0,	// (0x00016827) list_single_cale_day_pane_fp_t2

0xbbf9,	// (0x00016840) list_single_cale_day_pane_fp_t3_ParamLimits

0xbbf9,	// (0x00016840) list_single_cale_day_pane_fp_t3

0x0002,

0xfbba,	// (0x0001a801) list_single_cale_day_pane_fp_t_ParamLimits

0xfbba,	// (0x0001a801) list_single_cale_day_pane_fp_t

0xba8d,	// (0x000166d4) list_empty_pane_fp_g1_ParamLimits

0xba8d,	// (0x000166d4) list_empty_pane_fp_g1

0xbc12,	// (0x00016859) list_empty_pane_fp_t1

0xbc20,	// (0x00016867) list_empty_pane_fp_t2

0x0001,

0xfbc1,	// (0x0001a808) list_empty_pane_fp_t

0xba8d,	// (0x000166d4) list_single_heading_pane_fp_g1_ParamLimits

0xba8d,	// (0x000166d4) list_single_heading_pane_fp_g1

0x6e05,	// (0x00011a4c) list_single_heading_pane_fp_g2_ParamLimits

0x6e05,	// (0x00011a4c) list_single_heading_pane_fp_g2

0x6e11,	// (0x00011a58) list_single_heading_pane_fp_g3_ParamLimits

0x6e11,	// (0x00011a58) list_single_heading_pane_fp_g3

0x0002,

0xfbc6,	// (0x0001a80d) list_single_heading_pane_fp_g_ParamLimits

0xfbc6,	// (0x0001a80d) list_single_heading_pane_fp_g

0xbc2e,	// (0x00016875) list_single_heading_pane_fp_t1_ParamLimits

0xbc2e,	// (0x00016875) list_single_heading_pane_fp_t1

0xbc40,	// (0x00016887) list_single_heading_pane_fp_t2_ParamLimits

0xbc40,	// (0x00016887) list_single_heading_pane_fp_t2

0x0001,

0xfbcd,	// (0x0001a814) list_single_heading_pane_fp_t_ParamLimits

0xfbcd,	// (0x0001a814) list_single_heading_pane_fp_t

0x7163,	// (0x00011daa) aid_size_cell_fast

0x6219,	// (0x00010e60) soft_indicator_pane_cp1_t1

0x71a0,	// (0x00011de7) cell_app_pane_cp2_ParamLimits

0x71a0,	// (0x00011de7) cell_app_pane_cp2

0x5251,	// (0x0000fe98) fep_hwr_candidate_drop_down_list_pane

0x5429,	// (0x00010070) fep_hwr_candidate_pane_g3_ParamLimits

0x5429,	// (0x00010070) fep_hwr_candidate_pane_g3

0x39f2,	// (0x0000e639) fep_hwr_candidate_pane_g4_ParamLimits

0x39f2,	// (0x0000e639) fep_hwr_candidate_pane_g4

0x0002,

0xfb3c,	// (0x0001a783) fep_hwr_candidate_pane_g_ParamLimits

0xfb3c,	// (0x0001a783) fep_hwr_candidate_pane_g

0xb58c,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb58c,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane

0xb9a5,	// (0x000165ec) fep_vkb_candidate_pane_g3

0xb9ad,	// (0x000165f4) fep_vkb_candidate_pane_g4

0x0002,

0xfb69,	// (0x0001a7b0) fep_vkb_candidate_pane_g

0x5494,	// (0x000100db) cell_hwr_candidate_pane_g1_ParamLimits

0x54a2,	// (0x000100e9) cell_hwr_candidate_pane_g3_ParamLimits

0x54a2,	// (0x000100e9) cell_hwr_candidate_pane_g3

0xe881,	// (0x000194c8) cell_hwr_candidate_pane_g4_ParamLimits

0xe881,	// (0x000194c8) cell_hwr_candidate_pane_g4

0x0002,

0xfb88,	// (0x0001a7cf) cell_hwr_candidate_pane_g_ParamLimits

0xfb88,	// (0x0001a7cf) cell_hwr_candidate_pane_g

0xb9c4,	// (0x0001660b) cell_vkb_candidate_pane_g3_ParamLimits

0xb9c4,	// (0x0001660b) cell_vkb_candidate_pane_g3

0xb9df,	// (0x00016626) cell_vkb_candidate_pane_g4_ParamLimits

0xb9df,	// (0x00016626) cell_vkb_candidate_pane_g4

0xbc56,	// (0x0001689d) cell_app_pane_cp2_g1_ParamLimits

0xbc56,	// (0x0001689d) cell_app_pane_cp2_g1

0xbc74,	// (0x000168bb) cell_app_pane_cp2_g2_ParamLimits

0xbc74,	// (0x000168bb) cell_app_pane_cp2_g2

0x0001,

0xfbd2,	// (0x0001a819) cell_app_pane_cp2_g_ParamLimits

0xfbd2,	// (0x0001a819) cell_app_pane_cp2_g

0xbc80,	// (0x000168c7) cell_app_pane_cp2_t1_ParamLimits

0xbc80,	// (0x000168c7) cell_app_pane_cp2_t1

0x6ddf,	// (0x00011a26) grid_highlight_pane_cp1_ParamLimits

0x6ddf,	// (0x00011a26) grid_highlight_pane_cp1

0x54e1,	// (0x00010128) cell_hwr_candidate_pane_cp1_ParamLimits

0x54e1,	// (0x00010128) cell_hwr_candidate_pane_cp1

0x5494,	// (0x000100db) fep_hwr_candidate_drop_down_list_pane_g1

0x5500,	// (0x00010147) fep_hwr_candidate_drop_down_list_pane_g2

0x550d,	// (0x00010154) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0001a81e) fep_hwr_candidate_drop_down_list_pane_g

0x551a,	// (0x00010161) fep_hwr_candidate_drop_down_list_scroll_pane

0x5523,	// (0x0001016a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5523,	// (0x0001016a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5530,	// (0x00010177) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5530,	// (0x00010177) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x553d,	// (0x00010184) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x553d,	// (0x00010184) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x554a,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x554a,	// (0x00010191) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5565,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5565,	// (0x000101ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5580,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5580,	// (0x000101c7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x559b,	// (0x000101e2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x559b,	// (0x000101e2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x55b6,	// (0x000101fd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x55b6,	// (0x000101fd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0001a825) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0001a825) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbcee,	// (0x00016935) cell_vkb_candidate_pane_cp1_ParamLimits

0xbcee,	// (0x00016935) cell_vkb_candidate_pane_cp1

0xb6a5,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb6a5,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1

0xbc92,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbc92,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2

0xbc9f,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbc9f,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbef,	// (0x0001a836) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbef,	// (0x0001a836) fep_vkb_candidate_drop_down_list_pane_g

0xbd0e,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbd0e,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane

0xbd1b,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbd1b,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbd28,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbd28,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbd34,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbd34,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbcac,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbcac,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbccd,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbccd,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbd40,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbd40,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbd61,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbd61,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbd82,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbd82,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf6,	// (0x0001a83d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf6,	// (0x0001a83d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0591,	// (0x0000b1d8) title_pane_g1_ParamLimits

0x05a2,	// (0x0000b1e9) title_pane_g2_ParamLimits

0xf592,	// (0x0001a1d9) title_pane_g_ParamLimits

0x75a8,	// (0x000121ef) aid_call2_pane

0x75b0,	// (0x000121f7) aid_call_pane

0x75b8,	// (0x000121ff) popup_clock_analogue_window_g1

0x75b8,	// (0x000121ff) popup_clock_analogue_window_g2

0x48d0,	// (0x0000f517) popup_clock_analogue_window_g3

0x48d9,	// (0x0000f520) popup_clock_analogue_window_g4

0x5f1c,	// (0x00010b63) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001a37e) popup_clock_analogue_window_g

0x48e1,	// (0x0000f528) popup_clock_analogue_window_t1

0x48ef,	// (0x0000f536) clock_digital_number_pane_ParamLimits

0x48ef,	// (0x0000f536) clock_digital_number_pane

0x48fb,	// (0x0000f542) clock_digital_number_pane_cp02_ParamLimits

0x48fb,	// (0x0000f542) clock_digital_number_pane_cp02

0x4907,	// (0x0000f54e) clock_digital_number_pane_cp03_ParamLimits

0x4907,	// (0x0000f54e) clock_digital_number_pane_cp03

0x4913,	// (0x0000f55a) clock_digital_number_pane_cp04_ParamLimits

0x4913,	// (0x0000f55a) clock_digital_number_pane_cp04

0x491f,	// (0x0000f566) clock_digital_separator_pane_ParamLimits

0x491f,	// (0x0000f566) clock_digital_separator_pane

0x492b,	// (0x0000f572) popup_clock_digital_window_t1_ParamLimits

0x492b,	// (0x0000f572) popup_clock_digital_window_t1

0x5f1c,	// (0x00010b63) clock_digital_number_pane_g1

0x5f1c,	// (0x00010b63) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001a389) clock_digital_number_pane_g

0x5f1c,	// (0x00010b63) clock_digital_separator_pane_g1

0x5f1c,	// (0x00010b63) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001a389) clock_digital_separator_pane_g

0x1951,	// (0x0000c598) aid_fill_nsta_ParamLimits

0x1a80,	// (0x0000c6c7) indicator_nsta_pane_ParamLimits

0x8814,	// (0x0001345b) popup_clock_analogue_window

0x8814,	// (0x0001345b) popup_clock_digital_window

0x7124,	// (0x00011d6b) grid_indicator_nsta_pane_ParamLimits

0xad89,	// (0x000159d0) clock_nsta_pane_t2

0x0001,

0xfac9,	// (0x0001a710) clock_nsta_pane_t

0x4894,	// (0x0000f4db) aid_size_max_handle

0xe104,	// (0x00018d4b) aid_size_min_handle

0x7c25,	// (0x0001286c) editor_scroll_pane

0xbd9d,	// (0x000169e4) ex_editor_pane

0x70d2,	// (0x00011d19) scroll_pane_cp13

0x6812,	// (0x00011459) scroll_pane_cp14

0x75e2,	// (0x00012229) scroll_pane_cp36

0x0f32,	// (0x0000bb79) list_single_graphic_hl_pane_cp2_ParamLimits

0x0f32,	// (0x0000bb79) list_single_graphic_hl_pane_cp2

0x23a1,	// (0x0000cfe8) list_single_graphic_hl_pane_ParamLimits

0x23a1,	// (0x0000cfe8) list_single_graphic_hl_pane

0xbda5,	// (0x000169ec) aid_size_min_hl_cp1

0xbdae,	// (0x000169f5) list_highlight_pane_cp34_ParamLimits

0xbdae,	// (0x000169f5) list_highlight_pane_cp34

0xbdbf,	// (0x00016a06) list_single_graphic_hl_pane_g1_ParamLimits

0xbdbf,	// (0x00016a06) list_single_graphic_hl_pane_g1

0x681a,	// (0x00011461) list_single_graphic_hl_pane_g2_ParamLimits

0x681a,	// (0x00011461) list_single_graphic_hl_pane_g2

0x681a,	// (0x00011461) list_single_graphic_hl_pane_g3_ParamLimits

0x681a,	// (0x00011461) list_single_graphic_hl_pane_g3

0x6826,	// (0x0001146d) list_single_graphic_hl_pane_g4_ParamLimits

0x6826,	// (0x0001146d) list_single_graphic_hl_pane_g4

0x27d1,	// (0x0000d418) list_single_graphic_hl_pane_g5_ParamLimits

0x27d1,	// (0x0000d418) list_single_graphic_hl_pane_g5

0x0004,

0xfc07,	// (0x0001a84e) list_single_graphic_hl_pane_g_ParamLimits

0xfc07,	// (0x0001a84e) list_single_graphic_hl_pane_g

0x27e5,	// (0x0000d42c) list_single_graphic_hl_pane_t1_ParamLimits

0x27e5,	// (0x0000d42c) list_single_graphic_hl_pane_t1

0xbdec,	// (0x00016a33) aid_size_min_hl_cp2

0xbdf5,	// (0x00016a3c) list_highlight_pane_cp34_cp2_ParamLimits

0xbdf5,	// (0x00016a3c) list_highlight_pane_cp34_cp2

0xbdbf,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbdbf,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2

0xbe02,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbe02,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2

0xbe0e,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbe0e,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2

0x7b5c,	// (0x000127a3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7b5c,	// (0x000127a3) list_single_graphic_hl_pane_g4_cp2

0xbdd8,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbdd8,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2

0xe136,	// (0x00018d7d) control_pane_g4_ParamLimits

0xe136,	// (0x00018d7d) control_pane_g4

0x7fab,	// (0x00012bf2) bg_popup_sub_pane_cp10_ParamLimits

0xb408,	// (0x0001604f) list_choice_list_pane_ParamLimits

0xb417,	// (0x0001605e) scroll_pane_cp23

0x62a9,	// (0x00010ef0) bg_popup_preview_window_pane_cp02_ParamLimits

0xba30,	// (0x00016677) list_preview_fixed_pane_ParamLimits

0xba46,	// (0x0001668d) list_preview_fixed_pane_cp_ParamLimits

0xba46,	// (0x0001668d) list_preview_fixed_pane_cp

0xba52,	// (0x00016699) popup_preview_fixed_window_g1_ParamLimits

0xba52,	// (0x00016699) popup_preview_fixed_window_g1

0xba5e,	// (0x000166a5) popup_preview_fixed_window_g2_ParamLimits

0xba5e,	// (0x000166a5) popup_preview_fixed_window_g2

0x0002,

0xfb8f,	// (0x0001a7d6) popup_preview_fixed_window_g_ParamLimits

0xfb8f,	// (0x0001a7d6) popup_preview_fixed_window_g

0x4808,	// (0x0000f44f) aid_navi_side_left_pane_ParamLimits

0x481d,	// (0x0000f464) aid_navi_side_right_pane_ParamLimits

0x4835,	// (0x0000f47c) navi_icon_pane_stacon_ParamLimits

0x4849,	// (0x0000f490) navi_navi_pane_stacon_ParamLimits

0x4835,	// (0x0000f47c) navi_text_pane_stacon_ParamLimits

0x5f12,	// (0x00010b59) main_text_info_pane

0xbe32,	// (0x00016a79) listscroll_text_info_pane

0xbe3a,	// (0x00016a81) list_text_info_pane_ParamLimits

0xbe3a,	// (0x00016a81) list_text_info_pane

0xbe49,	// (0x00016a90) scroll_pane_cp24_ParamLimits

0xbe49,	// (0x00016a90) scroll_pane_cp24

0x27fb,	// (0x0000d442) list_text_info_pane_t1_ParamLimits

0x27fb,	// (0x0000d442) list_text_info_pane_t1

0x12e1,	// (0x0000bf28) popup_fast_swap2_window_ParamLimits

0x12e1,	// (0x0000bf28) popup_fast_swap2_window

0xbea0,	// (0x00016ae7) aid_size_cell_fast2

0x5f12,	// (0x00010b59) bg_popup_window_pane_cp17

0x8f9e,	// (0x00013be5) heading_pane_cp2

0x64e9,	// (0x00011130) listscroll_fast2_pane

0xbeaa,	// (0x00016af1) grid_fast2_pane

0xbeb4,	// (0x00016afb) listscroll_fast2_pane_g1

0xbebc,	// (0x00016b03) listscroll_fast2_pane_g2

0x0001,

0xfc12,	// (0x0001a859) listscroll_fast2_pane_g

0x70d2,	// (0x00011d19) scroll_pane_cp26

0xbec6,	// (0x00016b0d) cell_fast2_pane_ParamLimits

0xbec6,	// (0x00016b0d) cell_fast2_pane

0xbedb,	// (0x00016b22) cell_fast2_pane_g1

0xbee4,	// (0x00016b2b) cell_fast2_pane_g2

0xbeed,	// (0x00016b34) cell_fast2_pane_g3

0x0002,

0xfc17,	// (0x0001a85e) cell_fast2_pane_g

0x65cf,	// (0x00011216) grid_highlight_pane_cp9

0x65e4,	// (0x0001122b) main_eswt_pane_ParamLimits

0x65e4,	// (0x0001122b) main_eswt_pane

0xbe5e,	// (0x00016aa5) list_single_text_info_pane

0xbef5,	// (0x00016b3c) eswt_ctrl_button_pane

0xbef5,	// (0x00016b3c) eswt_ctrl_canvas_pane

0xbefd,	// (0x00016b44) eswt_ctrl_combo_pane

0xbef5,	// (0x00016b3c) eswt_ctrl_default_pane

0xbef5,	// (0x00016b3c) eswt_ctrl_label_pane

0xbf05,	// (0x00016b4c) eswt_ctrl_wait_pane

0xbf0d,	// (0x00016b54) eswt_shell_pane

0x5f12,	// (0x00010b59) listscroll_eswt_app_pane

0xbf2d,	// (0x00016b74) popup_eswt_tasktip_window_ParamLimits

0xbf2d,	// (0x00016b74) popup_eswt_tasktip_window

0x8b77,	// (0x000137be) bg_popup_window_pane_cp18

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_ParamLimits

0xbf3e,	// (0x00016b85) eswt_control_pane_g1

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_ParamLimits

0xbf4b,	// (0x00016b92) eswt_control_pane_g2

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_ParamLimits

0xbf58,	// (0x00016b9f) eswt_control_pane_g3

0xbf65,	// (0x00016bac) eswt_control_pane_g4_ParamLimits

0xbf65,	// (0x00016bac) eswt_control_pane_g4

0x0003,

0xfc1e,	// (0x0001a865) eswt_control_pane_g_ParamLimits

0xfc1e,	// (0x0001a865) eswt_control_pane_g

0x6ddf,	// (0x00011a26) bg_button_pane_ParamLimits

0x6ddf,	// (0x00011a26) bg_button_pane

0x65e4,	// (0x0001122b) common_borders_pane_copy2_ParamLimits

0x65e4,	// (0x0001122b) common_borders_pane_copy2

0xbf72,	// (0x00016bb9) control_button_pane_g1_ParamLimits

0xbf72,	// (0x00016bb9) control_button_pane_g1

0xbf7e,	// (0x00016bc5) control_button_pane_g2_ParamLimits

0xbf7e,	// (0x00016bc5) control_button_pane_g2

0xbf8a,	// (0x00016bd1) control_button_pane_g3_ParamLimits

0xbf8a,	// (0x00016bd1) control_button_pane_g3

0x0002,

0xfc27,	// (0x0001a86e) control_button_pane_g_ParamLimits

0xfc27,	// (0x0001a86e) control_button_pane_g

0xbf9e,	// (0x00016be5) control_button_pane_t1

0xbfac,	// (0x00016bf3) control_button_pane_t2

0x0001,

0xfc2e,	// (0x0001a875) control_button_pane_t

0x8a5d,	// (0x000136a4) bg_button_pane_g1

0x8a6d,	// (0x000136b4) bg_button_pane_g2

0x8a65,	// (0x000136ac) bg_button_pane_g3

0x8a7d,	// (0x000136c4) bg_button_pane_g4

0x8a75,	// (0x000136bc) bg_button_pane_g5

0x8a85,	// (0x000136cc) bg_button_pane_g6

0x8a8d,	// (0x000136d4) bg_button_pane_g7

0x8a9d,	// (0x000136e4) bg_button_pane_g8

0x8a95,	// (0x000136dc) bg_button_pane_g9

0x0008,

0xf895,	// (0x0001a4dc) bg_button_pane_g

0xb3c3,	// (0x0001600a) common_borders_pane_ParamLimits

0xb3c3,	// (0x0001600a) common_borders_pane

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy1_ParamLimits

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy1

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy1_ParamLimits

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy1

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy1_ParamLimits

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy1

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy1_ParamLimits

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy1

0xb3fe,	// (0x00016045) bg_eswt_ctrl_canvas_pane_g1

0xb3c3,	// (0x0001600a) common_borders_pane_cp2_ParamLimits

0xb3c3,	// (0x0001600a) common_borders_pane_cp2

0xb3c3,	// (0x0001600a) common_borders_pane_cp3_ParamLimits

0xb3c3,	// (0x0001600a) common_borders_pane_cp3

0xbfba,	// (0x00016c01) separator_horizontal_pane

0xbfc2,	// (0x00016c09) separator_vertical_pane

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy2_ParamLimits

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy2

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy2_ParamLimits

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy2

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy2_ParamLimits

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy2

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy2_ParamLimits

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy2

0x5f12,	// (0x00010b59) common_borders_pane_cp4

0xbfcb,	// (0x00016c12) separator_horizontal_pane_g1

0xbfd4,	// (0x00016c1b) separator_horizontal_pane_g2

0xbfdd,	// (0x00016c24) separator_horizontal_pane_g3

0x0002,

0xfc33,	// (0x0001a87a) separator_horizontal_pane_g

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy3_ParamLimits

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy3

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy3_ParamLimits

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy3

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy3_ParamLimits

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy3

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy3_ParamLimits

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy3

0x5f12,	// (0x00010b59) common_borders_pane_cp5

0xbfe6,	// (0x00016c2d) separator_vertical_pane_g1

0xbfef,	// (0x00016c36) separator_vertical_pane_g2

0xbff8,	// (0x00016c3f) separator_vertical_pane_g3

0x0002,

0xfc3a,	// (0x0001a881) separator_vertical_pane_g

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy4_ParamLimits

0xbf3e,	// (0x00016b85) eswt_control_pane_g1_copy4

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy4_ParamLimits

0xbf4b,	// (0x00016b92) eswt_control_pane_g2_copy4

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy4_ParamLimits

0xbf58,	// (0x00016b9f) eswt_control_pane_g3_copy4

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy4_ParamLimits

0xbf65,	// (0x00016bac) eswt_control_pane_g4_copy4

0x2819,	// (0x0000d460) eswt_ctrl_combo_button_pane

0x2821,	// (0x0000d468) eswt_ctrl_input_pane

0x2829,	// (0x0000d470) popup_choice_list_window_cp70

0x2831,	// (0x0000d478) eswt_ctrl_input_pane_t1

0x5f12,	// (0x00010b59) input_focus_pane_cp70

0xb3c3,	// (0x0001600a) bg_button_pane_cp70_ParamLimits

0xb3c3,	// (0x0001600a) bg_button_pane_cp70

0x283f,	// (0x0000d486) eswt_ctrl_combo_button_pane_g1

0xc02f,	// (0x00016c76) wait_bar_pane_cp70

0x8b77,	// (0x000137be) bg_popup_window_pane_cp70_ParamLimits

0x8b77,	// (0x000137be) bg_popup_window_pane_cp70

0xc037,	// (0x00016c7e) popup_eswt_tasktip_window_t1

0xc04d,	// (0x00016c94) wait_bar_pane_cp71_ParamLimits

0xc04d,	// (0x00016c94) wait_bar_pane_cp71

0xc059,	// (0x00016ca0) grid_eswt_app_pane

0x73ee,	// (0x00012035) scroll_pane_cp70

0x2847,	// (0x0000d48e) cell_eswt_app_pane_ParamLimits

0x2847,	// (0x0000d48e) cell_eswt_app_pane

0x2871,	// (0x0000d4b8) cell_eswt_app_pane_g1_ParamLimits

0x2871,	// (0x0000d4b8) cell_eswt_app_pane_g1

0x28a0,	// (0x0000d4e7) cell_eswt_app_pane_g2_ParamLimits

0x28a0,	// (0x0000d4e7) cell_eswt_app_pane_g2

0x0001,

0xfc41,	// (0x0001a888) cell_eswt_app_pane_g_ParamLimits

0xfc41,	// (0x0001a888) cell_eswt_app_pane_g

0x28c9,	// (0x0000d510) cell_eswt_app_pane_t1_ParamLimits

0x28c9,	// (0x0000d510) cell_eswt_app_pane_t1

0xc120,	// (0x00016d67) grid_highlight_pane_cp70_ParamLimits

0xc120,	// (0x00016d67) grid_highlight_pane_cp70

0x7af8,	// (0x0001273f) set_content_pane_g1

0x7ecd,	// (0x00012b14) status_small_volume_pane

0x55d1,	// (0x00010218) status_small_volume_pane_g1

0x55d9,	// (0x00010220) volume_small2_pane

0x55e2,	// (0x00010229) volume_small2_pane_g1

0x55eb,	// (0x00010232) volume_small2_pane_g2

0x55f4,	// (0x0001023b) volume_small2_pane_g3

0x55fd,	// (0x00010244) volume_small2_pane_g4

0x5606,	// (0x0001024d) volume_small2_pane_g5

0x560f,	// (0x00010256) volume_small2_pane_g6

0x5618,	// (0x0001025f) volume_small2_pane_g7

0x5621,	// (0x00010268) volume_small2_pane_g8

0x562a,	// (0x00010271) volume_small2_pane_g9

0x5633,	// (0x0001027a) volume_small2_pane_g10

0x0009,

0xfc46,	// (0x0001a88d) volume_small2_pane_g

0xb7ed,	// (0x00016434) fep_vkb_top_text_pane_g1_ParamLimits

0x2779,	// (0x0000d3c0) fep_vkb_top_text_pane_t1_ParamLimits

0xba6a,	// (0x000166b1) popup_preview_fixed_window_g3_ParamLimits

0xba6a,	// (0x000166b1) popup_preview_fixed_window_g3

0x18e4,	// (0x0000c52b) popup_toolbar_trans_pane

0x21e9,	// (0x0000ce30) aid_height_set_list_ParamLimits

0x9f18,	// (0x00014b5f) aid_size_parent_ParamLimits

0x7fab,	// (0x00012bf2) list_highlight_pane_cp2_ParamLimits

0x7af8,	// (0x0001273f) set_content_pane_g1_ParamLimits

0x23b4,	// (0x0000cffb) list_single_image_pane_ParamLimits

0x23b4,	// (0x0000cffb) list_single_image_pane

0x28fb,	// (0x0000d542) aid_size_cell_image_ParamLimits

0x28fb,	// (0x0000d542) aid_size_cell_image

0x2908,	// (0x0000d54f) grid_single_image_pane_ParamLimits

0x2908,	// (0x0000d54f) grid_single_image_pane

0x6e05,	// (0x00011a4c) list_single_image_pane_g1_ParamLimits

0x6e05,	// (0x00011a4c) list_single_image_pane_g1

0x6e11,	// (0x00011a58) list_single_image_pane_g2_ParamLimits

0x6e11,	// (0x00011a58) list_single_image_pane_g2

0x0001,

0xfc5b,	// (0x0001a8a2) list_single_image_pane_g_ParamLimits

0xfc5b,	// (0x0001a8a2) list_single_image_pane_g

0xc145,	// (0x00016d8c) list_single_image_pane_t1_ParamLimits

0xc145,	// (0x00016d8c) list_single_image_pane_t1

0x2914,	// (0x0000d55b) cell_image_list_pane_ParamLimits

0x2914,	// (0x0000d55b) cell_image_list_pane

0x2928,	// (0x0000d56f) cell_image_list_pane_g1

0x2931,	// (0x0000d578) cell_image_list_pane_g2

0x0001,

0xfc60,	// (0x0001a8a7) cell_image_list_pane_g

0xc181,	// (0x00016dc8) aid_size_cell_tb_trans_pane

0x6ddf,	// (0x00011a26) bg_tb_trans_pane

0xc193,	// (0x00016dda) grid_tb_trans_pane

0x8a5d,	// (0x000136a4) bg_tb_trans_pane_g1

0x8a6d,	// (0x000136b4) bg_tb_trans_pane_g2

0x8a65,	// (0x000136ac) bg_tb_trans_pane_g3

0x8a7d,	// (0x000136c4) bg_tb_trans_pane_g4

0x8a75,	// (0x000136bc) bg_tb_trans_pane_g5

0x8a9d,	// (0x000136e4) bg_tb_trans_pane_g6

0x8a95,	// (0x000136dc) bg_tb_trans_pane_g7

0x8a85,	// (0x000136cc) bg_tb_trans_pane_g8

0x8a8d,	// (0x000136d4) bg_tb_trans_pane_g9

0x0008,

0xfc65,	// (0x0001a8ac) bg_tb_trans_pane_g

0xc1a7,	// (0x00016dee) cell_toolbar_trans_pane_ParamLimits

0xc1a7,	// (0x00016dee) cell_toolbar_trans_pane

0xb3fe,	// (0x00016045) cell_toolbar_trans_pane_g1

0x25d5,	// (0x0000d21c) list_form2_midp_pane_t1

0x25e3,	// (0x0000d22a) list_form2_midp_pane_t2

0x0001,

0xfb02,	// (0x0001a749) list_form2_midp_pane_t

0xaf65,	// (0x00015bac) scroll_pane_cp51_ParamLimits

0xb168,	// (0x00015daf) form2_midp_wait_pane_g1

0xb171,	// (0x00015db8) form2_midp_wait_pane_g2

0xb17a,	// (0x00015dc1) form2_midp_wait_pane_g3

0x0002,

0xfb17,	// (0x0001a75e) form2_midp_wait_pane_g

0x6006,	// (0x00010c4d) list_highlight_pane_cp21_ParamLimits

0xb1c9,	// (0x00015e10) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb1d8,	// (0x00015e1f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa11a,	// (0x00014d61) list_single_2graphic_im_pane_ParamLimits

0xa11a,	// (0x00014d61) list_single_2graphic_im_pane

0x293a,	// (0x0000d581) list_single_2graphic_im_pane_g1_ParamLimits

0x293a,	// (0x0000d581) list_single_2graphic_im_pane_g1

0x294b,	// (0x0000d592) list_single_2graphic_im_pane_g2_ParamLimits

0x294b,	// (0x0000d592) list_single_2graphic_im_pane_g2

0x2957,	// (0x0000d59e) list_single_2graphic_im_pane_g3_ParamLimits

0x2957,	// (0x0000d59e) list_single_2graphic_im_pane_g3

0x0003,

0xfc78,	// (0x0001a8bf) list_single_2graphic_im_pane_g_ParamLimits

0xfc78,	// (0x0001a8bf) list_single_2graphic_im_pane_g

0x296b,	// (0x0000d5b2) list_single_2graphic_im_pane_t1_ParamLimits

0x296b,	// (0x0000d5b2) list_single_2graphic_im_pane_t1

0xba76,	// (0x000166bd) list_single_graphic_2heading_pane_fp_ParamLimits

0xba76,	// (0x000166bd) list_single_graphic_2heading_pane_fp

0xbabc,	// (0x00016703) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbabc,	// (0x00016703) list_single_graphic_2heading_pane_fp_g1

0xba8d,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xba8d,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2

0x6e05,	// (0x00011a4c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6e05,	// (0x00011a4c) list_single_graphic_2heading_pane_fp_g3

0x6e11,	// (0x00011a58) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6e11,	// (0x00011a58) list_single_graphic_2heading_pane_fp_g4

0xba99,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xba99,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0001a7e6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0001a7e6) list_single_graphic_2heading_pane_fp_g

0xc23b,	// (0x00016e82) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc23b,	// (0x00016e82) list_single_graphic_2heading_pane_fp_t1

0xbaf4,	// (0x0001673b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbaf4,	// (0x0001673b) list_single_graphic_2heading_pane_fp_t2

0xc251,	// (0x00016e98) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc251,	// (0x00016e98) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc81,	// (0x0001a8c8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc81,	// (0x0001a8c8) list_single_graphic_2heading_pane_fp_t

0xb49e,	// (0x000160e5) fep_hwr_write_pane_g5_ParamLimits

0xb49e,	// (0x000160e5) fep_hwr_write_pane_g5

0xb4aa,	// (0x000160f1) fep_hwr_write_pane_g6_ParamLimits

0xb4aa,	// (0x000160f1) fep_hwr_write_pane_g6

0xbf0d,	// (0x00016b54) eswt_shell_pane_ParamLimits

0x8b77,	// (0x000137be) bg_popup_window_pane_cp18_ParamLimits

0x9e3e,	// (0x00014a85) heading_pane_cp70

0xc037,	// (0x00016c7e) popup_eswt_tasktip_window_t1_ParamLimits

0x19a5,	// (0x0000c5ec) aid_touch_tab_arrow_left

0x19bb,	// (0x0000c602) aid_touch_tab_arrow_right

0x05ba,	// (0x0000b201) title_pane_g3_ParamLimits

0x05ba,	// (0x0000b201) title_pane_g3

0x6ccc,	// (0x00011913) set_value_pane_g1

0x18e4,	// (0x0000c52b) popup_toolbar_trans_pane_ParamLimits

0xc181,	// (0x00016dc8) aid_size_cell_tb_trans_pane_ParamLimits

0x6ddf,	// (0x00011a26) bg_tb_trans_pane_ParamLimits

0xc193,	// (0x00016dda) grid_tb_trans_pane_ParamLimits

0x62a9,	// (0x00010ef0) cont_note_pane_ParamLimits

0x62a9,	// (0x00010ef0) cont_note_pane

0x65e4,	// (0x0001122b) cont_snote2_single_text_pane_ParamLimits

0x65e4,	// (0x0001122b) cont_snote2_single_text_pane

0x65e4,	// (0x0001122b) cont_snote2_single_graphic_pane_ParamLimits

0x65e4,	// (0x0001122b) cont_snote2_single_graphic_pane

0x9183,	// (0x00013dca) cont_note_wait_pane_ParamLimits

0x9183,	// (0x00013dca) cont_note_wait_pane

0x9183,	// (0x00013dca) cont_note_image_pane_ParamLimits

0x9183,	// (0x00013dca) cont_note_image_pane

0xc267,	// (0x00016eae) popup_note2_window_g1_ParamLimits

0xc267,	// (0x00016eae) popup_note2_window_g1

0xc298,	// (0x00016edf) popup_note2_window_t1_ParamLimits

0xc298,	// (0x00016edf) popup_note2_window_t1

0xc2dd,	// (0x00016f24) popup_note2_window_t2_ParamLimits

0xc2dd,	// (0x00016f24) popup_note2_window_t2

0xc322,	// (0x00016f69) popup_note2_window_t3_ParamLimits

0xc322,	// (0x00016f69) popup_note2_window_t3

0xc367,	// (0x00016fae) popup_note2_window_t4_ParamLimits

0xc367,	// (0x00016fae) popup_note2_window_t4

0x6321,	// (0x00010f68) popup_note2_window_t5_ParamLimits

0x6321,	// (0x00010f68) popup_note2_window_t5

0x0004,

0xfc8d,	// (0x0001a8d4) popup_note2_window_t_ParamLimits

0xfc8d,	// (0x0001a8d4) popup_note2_window_t

0xc396,	// (0x00016fdd) popup_note2_image_window_g1_ParamLimits

0xc396,	// (0x00016fdd) popup_note2_image_window_g1

0xc3a2,	// (0x00016fe9) popup_note2_image_window_g2_ParamLimits

0xc3a2,	// (0x00016fe9) popup_note2_image_window_g2

0x0001,

0xfc98,	// (0x0001a8df) popup_note2_image_window_g_ParamLimits

0xfc98,	// (0x0001a8df) popup_note2_image_window_g

0xc3b4,	// (0x00016ffb) popup_note2_image_window_t1_ParamLimits

0xc3b4,	// (0x00016ffb) popup_note2_image_window_t1

0xc3cc,	// (0x00017013) popup_note2_image_window_t2_ParamLimits

0xc3cc,	// (0x00017013) popup_note2_image_window_t2

0xc3e4,	// (0x0001702b) popup_note2_image_window_t3_ParamLimits

0xc3e4,	// (0x0001702b) popup_note2_image_window_t3

0x0002,

0xfc9d,	// (0x0001a8e4) popup_note2_image_window_t_ParamLimits

0xfc9d,	// (0x0001a8e4) popup_note2_image_window_t

0x9191,	// (0x00013dd8) popup_note2_wait_window_g1_ParamLimits

0x9191,	// (0x00013dd8) popup_note2_wait_window_g1

0x919d,	// (0x00013de4) popup_note2_wait_window_g2_ParamLimits

0x919d,	// (0x00013de4) popup_note2_wait_window_g2

0x91a9,	// (0x00013df0) popup_note2_wait_window_g3_ParamLimits

0x91a9,	// (0x00013df0) popup_note2_wait_window_g3

0x0002,

0xf877,	// (0x0001a4be) popup_note2_wait_window_g_ParamLimits

0xf877,	// (0x0001a4be) popup_note2_wait_window_g

0xc400,	// (0x00017047) popup_note2_wait_window_t1_ParamLimits

0xc400,	// (0x00017047) popup_note2_wait_window_t1

0xc41e,	// (0x00017065) popup_note2_wait_window_t2_ParamLimits

0xc41e,	// (0x00017065) popup_note2_wait_window_t2

0xc43c,	// (0x00017083) popup_note2_wait_window_t3_ParamLimits

0xc43c,	// (0x00017083) popup_note2_wait_window_t3

0xc44e,	// (0x00017095) popup_note2_wait_window_t4_ParamLimits

0xc44e,	// (0x00017095) popup_note2_wait_window_t4

0x0003,

0xfca4,	// (0x0001a8eb) popup_note2_wait_window_t_ParamLimits

0xfca4,	// (0x0001a8eb) popup_note2_wait_window_t

0xc460,	// (0x000170a7) wait_bar2_pane_ParamLimits

0xc460,	// (0x000170a7) wait_bar2_pane

0xc478,	// (0x000170bf) popup_snote2_single_text_window_g1_ParamLimits

0xc478,	// (0x000170bf) popup_snote2_single_text_window_g1

0xc4a0,	// (0x000170e7) popup_snote2_single_text_window_t1_ParamLimits

0xc4a0,	// (0x000170e7) popup_snote2_single_text_window_t1

0xc4ec,	// (0x00017133) popup_snote2_single_text_window_t2_ParamLimits

0xc4ec,	// (0x00017133) popup_snote2_single_text_window_t2

0xc538,	// (0x0001717f) popup_snote2_single_text_window_t3_ParamLimits

0xc538,	// (0x0001717f) popup_snote2_single_text_window_t3

0xc579,	// (0x000171c0) popup_snote2_single_text_window_t4_ParamLimits

0xc579,	// (0x000171c0) popup_snote2_single_text_window_t4

0xc5af,	// (0x000171f6) popup_snote2_single_text_window_t5_ParamLimits

0xc5af,	// (0x000171f6) popup_snote2_single_text_window_t5

0x0004,

0xfcad,	// (0x0001a8f4) popup_snote2_single_text_window_t_ParamLimits

0xfcad,	// (0x0001a8f4) popup_snote2_single_text_window_t

0xc5da,	// (0x00017221) popup_snote2_single_graphic_window_g1_ParamLimits

0xc5da,	// (0x00017221) popup_snote2_single_graphic_window_g1

0xc602,	// (0x00017249) popup_snote2_single_graphic_window_g2_ParamLimits

0xc602,	// (0x00017249) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb8,	// (0x0001a8ff) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb8,	// (0x0001a8ff) popup_snote2_single_graphic_window_g

0xc62a,	// (0x00017271) popup_snote2_single_graphic_window_t1_ParamLimits

0xc62a,	// (0x00017271) popup_snote2_single_graphic_window_t1

0xc676,	// (0x000172bd) popup_snote2_single_graphic_window_t2_ParamLimits

0xc676,	// (0x000172bd) popup_snote2_single_graphic_window_t2

0xc538,	// (0x0001717f) popup_snote2_single_graphic_window_t3_ParamLimits

0xc538,	// (0x0001717f) popup_snote2_single_graphic_window_t3

0xc579,	// (0x000171c0) popup_snote2_single_graphic_window_t4_ParamLimits

0xc579,	// (0x000171c0) popup_snote2_single_graphic_window_t4

0xc5af,	// (0x000171f6) popup_snote2_single_graphic_window_t5_ParamLimits

0xc5af,	// (0x000171f6) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbd,	// (0x0001a904) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbd,	// (0x0001a904) popup_snote2_single_graphic_window_t

0xae1a,	// (0x00015a61) clock_nsta_pane_cp2_t1

0xae1a,	// (0x00015a61) clock_nsta_pane_cp2_t2

0x0001,

0xfad8,	// (0x0001a71f) clock_nsta_pane_cp2_t

0x6df9,	// (0x00011a40) form_field_data_wide_pane_g1_ParamLimits

0x6e05,	// (0x00011a4c) form_field_data_wide_pane_g2_ParamLimits

0x6e05,	// (0x00011a4c) form_field_data_wide_pane_g2

0x6e11,	// (0x00011a58) form_field_data_wide_pane_g3_ParamLimits

0x6e11,	// (0x00011a58) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001a301) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001a301) form_field_data_wide_pane_g

0x24eb,	// (0x0000d132) grid_touch_3_pane_ParamLimits

0x24eb,	// (0x0000d132) grid_touch_3_pane

0x299c,	// (0x0000d5e3) cell_touch_3_pane_ParamLimits

0x299c,	// (0x0000d5e3) cell_touch_3_pane

0xb3fe,	// (0x00016045) cell_touch_3_pane_g1

0xb3fe,	// (0x00016045) cell_touch_3_pane_g2

0x0001,

0xfb5d,	// (0x0001a7a4) cell_touch_3_pane_g

0x6353,	// (0x00010f9a) cont_query_data_pane

0x635b,	// (0x00010fa2) cont_query_data_pane_cp1

0xc6f1,	// (0x00017338) button_value_adjust_pane_cp7

0xc6f9,	// (0x00017340) query_popup_pane_cp3

0x7679,	// (0x000122c0) bg_popup_sub_pane_cp22_ParamLimits

0x494a,	// (0x0000f591) navi_navi_volume_pane_cp2

0x4965,	// (0x0000f5ac) popup_side_volume_key_window_g2

0x4974,	// (0x0000f5bb) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001a393) popup_side_volume_key_window_g

0x4991,	// (0x0000f5d8) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001a39a) popup_side_volume_key_window_t

0x79c2,	// (0x00012609) popup_side_volume_key_window_ParamLimits

0x09c0,	// (0x0000b607) list_double_graphic_pane_g4_ParamLimits

0x09c0,	// (0x0000b607) list_double_graphic_pane_g4

0x238d,	// (0x0000cfd4) list_single_2heading_msg_pane_ParamLimits

0x238d,	// (0x0000cfd4) list_single_2heading_msg_pane

0x29e5,	// (0x0000d62c) list_single_2heading_msg_pane_g1_ParamLimits

0x29e5,	// (0x0000d62c) list_single_2heading_msg_pane_g1

0x29f1,	// (0x0000d638) list_single_2heading_msg_pane_g2_ParamLimits

0x29f1,	// (0x0000d638) list_single_2heading_msg_pane_g2

0x2a04,	// (0x0000d64b) list_single_2heading_msg_pane_g3_ParamLimits

0x2a04,	// (0x0000d64b) list_single_2heading_msg_pane_g3

0x2a10,	// (0x0000d657) list_single_2heading_msg_pane_g4_ParamLimits

0x2a10,	// (0x0000d657) list_single_2heading_msg_pane_g4

0x0003,

0xfcc8,	// (0x0001a90f) list_single_2heading_msg_pane_g_ParamLimits

0xfcc8,	// (0x0001a90f) list_single_2heading_msg_pane_g

0x2a28,	// (0x0000d66f) list_single_2heading_msg_pane_t1_ParamLimits

0x2a28,	// (0x0000d66f) list_single_2heading_msg_pane_t1

0x2a50,	// (0x0000d697) list_single_2heading_msg_pane_t2_ParamLimits

0x2a50,	// (0x0000d697) list_single_2heading_msg_pane_t2

0x2abb,	// (0x0000d702) list_single_2heading_msg_pane_t3_ParamLimits

0x2abb,	// (0x0000d702) list_single_2heading_msg_pane_t3

0xc7ed,	// (0x00017434) list_single_2heading_msg_pane_t4_ParamLimits

0xc7ed,	// (0x00017434) list_single_2heading_msg_pane_t4

0x0003,

0xfcd1,	// (0x0001a918) list_single_2heading_msg_pane_t_ParamLimits

0xfcd1,	// (0x0001a918) list_single_2heading_msg_pane_t

0x5f5a,	// (0x00010ba1) title_pane_g4_ParamLimits

0x5f5a,	// (0x00010ba1) title_pane_g4

0x4758,	// (0x0000f39f) title_pane_stacon_g3_ParamLimits

0x4758,	// (0x0000f39f) title_pane_stacon_g3

0xc1fe,	// (0x00016e45) list_single_2graphic_im_pane_g4_ParamLimits

0xc1fe,	// (0x00016e45) list_single_2graphic_im_pane_g4

0x9be4,	// (0x0001482b) popup_side_volume_key_window_cp

0xa4f3,	// (0x0001513a) main_idle_act2_pane_t1

0x4d80,	// (0x0000f9c7) toolbar_button_pane_g10

0x08d7,	// (0x0000b51e) popup_toolbar_window_cp1

0xae0b,	// (0x00015a52) clock_nsta_pane_cp_t1

0xae0b,	// (0x00015a52) clock_nsta_pane_cp_t2

0x0001,

0xfad3,	// (0x0001a71a) clock_nsta_pane_cp_t

0x494a,	// (0x0000f591) navi_navi_volume_pane_cp2_ParamLimits

0x4959,	// (0x0000f5a0) popup_side_volume_key_window_g1_ParamLimits

0x4965,	// (0x0000f5ac) popup_side_volume_key_window_g2_ParamLimits

0x4974,	// (0x0000f5bb) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001a393) popup_side_volume_key_window_g_ParamLimits

0x523d,	// (0x0000fe84) fep_hwr_aid_pane

0x52e4,	// (0x0000ff2b) bg_fep_hwr_top_pane_g4_ParamLimits

0xb46e,	// (0x000160b5) fep_hwr_top_pane_g1_ParamLimits

0xb480,	// (0x000160c7) fep_hwr_top_pane_g2_ParamLimits

0x5304,	// (0x0000ff4b) fep_hwr_top_pane_g3_ParamLimits

0xfb28,	// (0x0001a76f) fep_hwr_top_pane_g_ParamLimits

0x5319,	// (0x0000ff60) fep_hwr_top_text_pane_ParamLimits

0x99a5,	// (0x000145ec) aid_touch_tab_arrow_arrow_2

0x99ae,	// (0x000145f5) aid_touch_tab_arrow_left_2

0x5251,	// (0x0000fe98) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5288,	// (0x0000fecf) fep_hwr_prediction_pane

0xb5f5,	// (0x0001623c) fep_vkb_prediction_pane

0x2759,	// (0x0000d3a0) fep_vkb_side_pane_g3_ParamLimits

0x2759,	// (0x0000d3a0) fep_vkb_side_pane_g3

0x5494,	// (0x000100db) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5500,	// (0x00010147) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x550d,	// (0x00010154) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd7,	// (0x0001a81e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x563c,	// (0x00010283) fep_hwr_prediction_pane_g1

0x5646,	// (0x0001028d) fep_hwr_prediction_pane_g2

0xb466,	// (0x000160ad) fep_hwr_prediction_pane_g3

0x564e,	// (0x00010295) fep_hwr_prediction_pane_g4

0x0003,

0xfcda,	// (0x0001a921) fep_hwr_prediction_pane_g

0xc812,	// (0x00017459) fep_vkb_prediction_pane_g1

0xc81c,	// (0x00017463) fep_vkb_prediction_pane_g2

0xc824,	// (0x0001746b) fep_vkb_prediction_pane_g3

0xc82c,	// (0x00017473) fep_vkb_prediction_pane_g4

0x0003,

0xfce3,	// (0x0001a92a) fep_vkb_prediction_pane_g

0x506c,	// (0x0000fcb3) slider_set_pane_g3

0x5080,	// (0x0000fcc7) slider_set_pane_g4

0x5098,	// (0x0000fcdf) slider_set_pane_g5

0x506c,	// (0x0000fcb3) slider_set_pane_g6

0x50ae,	// (0x0000fcf5) slider_set_pane_g7

0xa075,	// (0x00014cbc) slider_form_pane_g3

0xa07e,	// (0x00014cc5) slider_form_pane_g4

0xa086,	// (0x00014ccd) slider_form_pane_g5

0xa075,	// (0x00014cbc) slider_form_pane_g6

0x2330,	// (0x0000cf77) slider_form_pane_g7

0xa7c7,	// (0x0001540e) slider_set_pane_vc_g3

0xa7d0,	// (0x00015417) slider_set_pane_vc_g4

0xa7d9,	// (0x00015420) slider_set_pane_vc_g5

0xa7c7,	// (0x0001540e) slider_set_pane_vc_g6

0xa7e2,	// (0x00015429) slider_set_pane_vc_g7

0xa7c7,	// (0x0001540e) slider_form_pane_vc_g1

0xa7d0,	// (0x00015417) slider_form_pane_vc_g2

0xa7d9,	// (0x00015420) slider_form_pane_vc_g3

0xa7c7,	// (0x0001540e) slider_form_pane_vc_g4

0xab43,	// (0x0001578a) slider_form_pane_vc_g5

0x0004,

0xfab9,	// (0x0001a700) slider_form_pane_vc_g

0x5f12,	// (0x00010b59) main_idle_act3_pane

0xc834,	// (0x0001747b) ai3_links_pane

0x2b29,	// (0x0000d770) popup_ai3_data_window_ParamLimits

0x2b29,	// (0x0000d770) popup_ai3_data_window

0x5f12,	// (0x00010b59) grid_ai3_links_pane

0x2b41,	// (0x0000d788) cell_ai3_links_pane_ParamLimits

0x2b41,	// (0x0000d788) cell_ai3_links_pane

0xc86d,	// (0x000174b4) bg_popup_sub_pane_cp11

0xc87a,	// (0x000174c1) cell_ai3_links_pane_g1

0x5f12,	// (0x00010b59) bg_popup_sub_pane_cp12

0xc89f,	// (0x000174e6) heading_ai3_data_pane

0xc8a7,	// (0x000174ee) list_ai3_gene_pane

0xc8b3,	// (0x000174fa) popup_ai3_data_window_g1

0xc8bb,	// (0x00017502) heading_ai3_data_pane_g1

0xc8c3,	// (0x0001750a) heading_ai3_data_pane_t1

0xc8d1,	// (0x00017518) list_double_ai3_gene_pane_ParamLimits

0xc8d1,	// (0x00017518) list_double_ai3_gene_pane

0xc8de,	// (0x00017525) list_single_ai3_gene_pane_ParamLimits

0xc8de,	// (0x00017525) list_single_ai3_gene_pane

0xb3c3,	// (0x0001600a) list_highlight_pane_cp7_ParamLimits

0xb3c3,	// (0x0001600a) list_highlight_pane_cp7

0xc8eb,	// (0x00017532) list_single_a13_gene_pane_t1_ParamLimits

0xc8eb,	// (0x00017532) list_single_a13_gene_pane_t1

0xc902,	// (0x00017549) list_single_ai3_gene_pane_g1

0xc90b,	// (0x00017552) list_single_ai3_gene_pane_g2

0x0001,

0xfcec,	// (0x0001a933) list_single_ai3_gene_pane_g

0xc913,	// (0x0001755a) list_double_ai3_gene_pane_g1_ParamLimits

0xc913,	// (0x0001755a) list_double_ai3_gene_pane_g1

0xc91f,	// (0x00017566) list_double_ai3_gene_pane_t1_ParamLimits

0xc91f,	// (0x00017566) list_double_ai3_gene_pane_t1

0xc93b,	// (0x00017582) list_double_ai3_gene_pane_t2_ParamLimits

0xc93b,	// (0x00017582) list_double_ai3_gene_pane_t2

0xc950,	// (0x00017597) list_double_ai3_gene_pane_t3_ParamLimits

0xc950,	// (0x00017597) list_double_ai3_gene_pane_t3

0x0002,

0xfcf1,	// (0x0001a938) list_double_ai3_gene_pane_t_ParamLimits

0xfcf1,	// (0x0001a938) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc70a,	// (0x00017351) aid_size_min_col_2

0x29cf,	// (0x0000d616) aid_size_min_msg_ParamLimits

0x29cf,	// (0x0000d616) aid_size_min_msg

0x276d,	// (0x0000d3b4) fep_vkb_top_text_pane_g2_ParamLimits

0x276d,	// (0x0000d3b4) fep_vkb_top_text_pane_g2

0x0001,

0xfb58,	// (0x0001a79f) fep_vkb_top_text_pane_g_ParamLimits

0xfb58,	// (0x0001a79f) fep_vkb_top_text_pane_g

0x5f12,	// (0x00010b59) main_hc_apps_shell_pane

0xc96d,	// (0x000175b4) grid_hc_apps_pane_ParamLimits

0xc96d,	// (0x000175b4) grid_hc_apps_pane

0xc97c,	// (0x000175c3) list_hc_apps_pane

0xc984,	// (0x000175cb) scroll_pane_cp37_ParamLimits

0xc984,	// (0x000175cb) scroll_pane_cp37

0x2b5b,	// (0x0000d7a2) cell_hc_apps_pane_ParamLimits

0x2b5b,	// (0x0000d7a2) cell_hc_apps_pane

0x2c1b,	// (0x0000d862) cell_hc_apps_pane_g1_ParamLimits

0x2c1b,	// (0x0000d862) cell_hc_apps_pane_g1

0xca71,	// (0x000176b8) cell_hc_apps_pane_g2_ParamLimits

0xca71,	// (0x000176b8) cell_hc_apps_pane_g2

0xca8d,	// (0x000176d4) cell_hc_apps_pane_g3_ParamLimits

0xca8d,	// (0x000176d4) cell_hc_apps_pane_g3

0x0002,

0xfcf8,	// (0x0001a93f) cell_hc_apps_pane_g_ParamLimits

0xfcf8,	// (0x0001a93f) cell_hc_apps_pane_g

0x2c48,	// (0x0000d88f) cell_hc_apps_pane_t1_ParamLimits

0x2c48,	// (0x0000d88f) cell_hc_apps_pane_t1

0x62a9,	// (0x00010ef0) grid_highlight_pane_cp10_ParamLimits

0x62a9,	// (0x00010ef0) grid_highlight_pane_cp10

0x2c86,	// (0x0000d8cd) list_single_hc_apps_pane_ParamLimits

0x2c86,	// (0x0000d8cd) list_single_hc_apps_pane

0xcb62,	// (0x000177a9) list_single_hc_apps_pane_g1

0xcb7b,	// (0x000177c2) list_single_hc_apps_pane_g2

0x0001,

0xfcff,	// (0x0001a946) list_single_hc_apps_pane_g

0xcb94,	// (0x000177db) list_single_hc_apps_pane_g2_copy1

0xcbb0,	// (0x000177f7) list_single_hc_apps_pane_t1

0x6006,	// (0x00010c4d) bg_set_opt_pane_cp_ParamLimits

0x4683,	// (0x0000f2ca) setting_slider_pane_t1_ParamLimits

0x469c,	// (0x0000f2e3) setting_slider_pane_t2_ParamLimits

0x46b5,	// (0x0000f2fc) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001a1e9) setting_slider_pane_t_ParamLimits

0x46cc,	// (0x0000f313) slider_set_pane_ParamLimits

0x4bf2,	// (0x0000f839) control_pane_g5_ParamLimits

0x4bf2,	// (0x0000f839) control_pane_g5

0x9ed2,	// (0x00014b19) slider_set_pane_g1_ParamLimits

0x5060,	// (0x0000fca7) slider_set_pane_g2_ParamLimits

0x506c,	// (0x0000fcb3) slider_set_pane_g3_ParamLimits

0x5080,	// (0x0000fcc7) slider_set_pane_g4_ParamLimits

0x5098,	// (0x0000fcdf) slider_set_pane_g5_ParamLimits

0x506c,	// (0x0000fcb3) slider_set_pane_g6_ParamLimits

0x50ae,	// (0x0000fcf5) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0001a5da) slider_set_pane_g_ParamLimits

0x7aa3,	// (0x000126ea) navi_icon_text_pane_ParamLimits

0x1971,	// (0x0000c5b8) aid_fill_nsta_2_ParamLimits

0x19a5,	// (0x0000c5ec) aid_touch_tab_arrow_left_ParamLimits

0x19bb,	// (0x0000c602) aid_touch_tab_arrow_right_ParamLimits

0x1a56,	// (0x0000c69d) clock_nsta_pane_ParamLimits

0x20c6,	// (0x0000cd0d) navi_icon_pane_g1_ParamLimits

0x20d2,	// (0x0000cd19) navi_text_pane_t1_ParamLimits

0x25b7,	// (0x0000d1fe) navi_icon_text_pane_g1_ParamLimits

0x25c3,	// (0x0000d20a) navi_icon_text_pane_t1_ParamLimits

0xcb62,	// (0x000177a9) list_single_hc_apps_pane_g1_ParamLimits

0xcb7b,	// (0x000177c2) list_single_hc_apps_pane_g2_ParamLimits

0xfcff,	// (0x0001a946) list_single_hc_apps_pane_g_ParamLimits

0xcb94,	// (0x000177db) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcbb0,	// (0x000177f7) list_single_hc_apps_pane_t1_ParamLimits

0xe099,	// (0x00018ce0) popup_toolbar2_fixed_window_ParamLimits

0xe099,	// (0x00018ce0) popup_toolbar2_fixed_window

0x18da,	// (0x0000c521) popup_toolbar2_float_window

0x5f12,	// (0x00010b59) bg_popup_sub_pane_cp27

0xcbde,	// (0x00017825) grid_toolbar2_float_pane

0x5f12,	// (0x00010b59) bg_popup_sub_pane_cp26

0xcbde,	// (0x00017825) grid_toolbar2_fixed_pane

0x2cb9,	// (0x0000d900) cell_toolbar2_fixed_pane_ParamLimits

0x2cb9,	// (0x0000d900) cell_toolbar2_fixed_pane

0x2cd4,	// (0x0000d91b) cell_toolbar2_fixed_pane_g1

0xcc00,	// (0x00017847) toolbar2_fixed_button_pane

0x8a5d,	// (0x000136a4) toolbar2_fixed_button_pane_g1

0x8a6d,	// (0x000136b4) toolbar2_fixed_button_pane_g2

0x8a65,	// (0x000136ac) toolbar2_fixed_button_pane_g3

0x8a7d,	// (0x000136c4) toolbar2_fixed_button_pane_g4

0x8a75,	// (0x000136bc) toolbar2_fixed_button_pane_g5

0x8a85,	// (0x000136cc) toolbar2_fixed_button_pane_g6

0x8a8d,	// (0x000136d4) toolbar2_fixed_button_pane_g7

0x8a9d,	// (0x000136e4) toolbar2_fixed_button_pane_g8

0x8a95,	// (0x000136dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0001a4dc) toolbar2_fixed_button_pane_g

0xcc08,	// (0x0001784f) cell_toolbar2_float_pane_ParamLimits

0xcc08,	// (0x0001784f) cell_toolbar2_float_pane

0xcc19,	// (0x00017860) cell_toolbar2_float_pane_g1

0xcc00,	// (0x00017847) toolbar2_fixed_button_pane_cp

0x2720,	// (0x0000d367) fep_vkb_accented_list_pane_ParamLimits

0x2720,	// (0x0000d367) fep_vkb_accented_list_pane

0x5474,	// (0x000100bb) bg_popup_fep_shadow_pane_g9

0x7c25,	// (0x0001286c) bg_popup_fep_shadow_pane_cp3

0x70b9,	// (0x00011d00) list_accented_list_pane

0xcc22,	// (0x00017869) list_single_accented_list_pane_ParamLimits

0xcc22,	// (0x00017869) list_single_accented_list_pane

0x7c25,	// (0x0001286c) list_highlight_pane_cp10

0xcc33,	// (0x0001787a) list_single_accented_list_pane_t1

0x1804,	// (0x0000c44b) popup_slider_window_ParamLimits

0x1804,	// (0x0000c44b) popup_slider_window

0xc701,	// (0x00017348) aid_indentation_list_msg

0x2dcd,	// (0x0000da14) bg_popup_window_pane_cp19

0xcd57,	// (0x0001799e) popup_slider_window_g1

0xcd73,	// (0x000179ba) popup_slider_window_g2

0xcd8f,	// (0x000179d6) popup_slider_window_g3

0x0005,

0xfd04,	// (0x0001a94b) popup_slider_window_g

0xcdeb,	// (0x00017a32) popup_slider_window_t1

0xce5f,	// (0x00017aa6) small_volume_slider_vertical_pane

0xb3fe,	// (0x00016045) small_volume_slider_vertical_pane_g1

0xb3fe,	// (0x00016045) small_volume_slider_vertical_pane_g2

0xce7b,	// (0x00017ac2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd16,	// (0x0001a95d) small_volume_slider_vertical_pane_g

0xe007,	// (0x00018c4e) area_side_right_pane_ParamLimits

0xe007,	// (0x00018c4e) area_side_right_pane

0xe459,	// (0x000190a0) aid_size_side_button_ParamLimits

0xe459,	// (0x000190a0) aid_size_side_button

0xe472,	// (0x000190b9) grid_sctrl_middle_pane_ParamLimits

0xe472,	// (0x000190b9) grid_sctrl_middle_pane

0x568a,	// (0x000102d1) sctrl_sk_bottom_pane

0x569b,	// (0x000102e2) sctrl_sk_top_pane

0x56ad,	// (0x000102f4) aid_touch_sctrl_top

0x56ba,	// (0x00010301) bg_sctrl_sk_pane_ParamLimits

0x56ba,	// (0x00010301) bg_sctrl_sk_pane

0x56c8,	// (0x0001030f) sctrl_sk_top_pane_g1

0x56d5,	// (0x0001031c) sctrl_sk_top_pane_t1

0x56ad,	// (0x000102f4) aid_touch_sctrl_bottom

0x56ba,	// (0x00010301) bg_sctrl_sk_pane_cp_ParamLimits

0x56ba,	// (0x00010301) bg_sctrl_sk_pane_cp

0x56f0,	// (0x00010337) sctrl_sk_bottom_pane_g1

0x56d5,	// (0x0001031c) sctrl_sk_bottom_pane_t1

0xe48c,	// (0x000190d3) cell_sctrl_middle_pane_ParamLimits

0xe48c,	// (0x000190d3) cell_sctrl_middle_pane

0xe49d,	// (0x000190e4) aid_touch_sctrl_middle_ParamLimits

0xe49d,	// (0x000190e4) aid_touch_sctrl_middle

0xe4aa,	// (0x000190f1) bg_sctrl_middle_pane_ParamLimits

0xe4aa,	// (0x000190f1) bg_sctrl_middle_pane

0x5d5d,	// (0x000109a4) cell_sctrl_middle_pane_g1_ParamLimits

0x5d5d,	// (0x000109a4) cell_sctrl_middle_pane_g1

0xe4b8,	// (0x000190ff) cell_sctrl_middle_pane_g2_ParamLimits

0xe4b8,	// (0x000190ff) cell_sctrl_middle_pane_g2

0x0001,

0xfd22,	// (0x0001a969) cell_sctrl_middle_pane_g_ParamLimits

0xfd22,	// (0x0001a969) cell_sctrl_middle_pane_g

0x8a5d,	// (0x000136a4) bg_sctrl_middle_pane_g1

0x8a65,	// (0x000136ac) bg_sctrl_middle_pane_g2

0x8a6d,	// (0x000136b4) bg_sctrl_middle_pane_g3

0x8a75,	// (0x000136bc) bg_sctrl_middle_pane_g4

0x8a7d,	// (0x000136c4) bg_sctrl_middle_pane_g5

0x8a85,	// (0x000136cc) bg_sctrl_middle_pane_g6

0x8a8d,	// (0x000136d4) bg_sctrl_middle_pane_g7

0x8a95,	// (0x000136dc) bg_sctrl_middle_pane_g8

0x0007,

0xfd27,	// (0x0001a96e) bg_sctrl_middle_pane_g

0x8a9d,	// (0x000136e4) bg_sctrl_middle_pane_g8_copy1

0x8a5d,	// (0x000136a4) bg_sctrl_sk_pane_g1

0x8a6d,	// (0x000136b4) bg_sctrl_sk_pane_g2

0x8a65,	// (0x000136ac) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0001a4dc) bg_sctrl_sk_pane_g

0x67a2,	// (0x000113e9) aid_size_touch_scroll_bar

0x8a7d,	// (0x000136c4) bg_sctrl_sk_pane_g4

0x8a75,	// (0x000136bc) bg_sctrl_sk_pane_g5

0x8a85,	// (0x000136cc) bg_sctrl_sk_pane_g6

0x8a8d,	// (0x000136d4) bg_sctrl_sk_pane_g7

0x8a9d,	// (0x000136e4) bg_sctrl_sk_pane_g8

0x8a95,	// (0x000136dc) bg_sctrl_sk_pane_g9

0x8053,	// (0x00012c9a) popup_fep_china_hwr2_fs_candidate_window

0x133e,	// (0x0000bf85) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x133e,	// (0x0000bf85) popup_fep_china_hwr2_fs_control_window

0x5494,	// (0x000100db) sctrl_sk_top_pane_g2

0x0001,

0xfd1d,	// (0x0001a964) sctrl_sk_top_pane_g

0x2ef0,	// (0x0000db37) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2ef0,	// (0x0000db37) aid_fep_china_hwr2_fs_cell

0x2f04,	// (0x0000db4b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2f04,	// (0x0000db4b) bg_popup_fep_shadow_pane_cp4

0x2f1b,	// (0x0000db62) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2f1b,	// (0x0000db62) bg_popup_fep_shadow_pane_cp5

0x2f2d,	// (0x0000db74) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2f2d,	// (0x0000db74) popup_fep_china_hwr2_fs_control_bar_grid

0x2f41,	// (0x0000db88) popup_fep_china_hwr2_fs_control_funtion_grid

0xced7,	// (0x00017b1e) aid_fep_china_hwr2_fs_candi_cell

0x5f12,	// (0x00010b59) bg_popup_fep_shadow_pane_cp6

0xcee1,	// (0x00017b28) popup_fep_china_hwr2_fs_candidate_grid

0x2f49,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2f49,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid

0xb3fe,	// (0x00016045) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf03,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf03,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf11,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf11,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd38,	// (0x0001a97f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd38,	// (0x0001a97f) cell_fep_china_hwr2_fs_funtion_grid_g

0x2f61,	// (0x0000dba8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2f61,	// (0x0000dba8) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2f76,	// (0x0000dbbd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2f76,	// (0x0000dbbd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3d,	// (0x0001a984) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3d,	// (0x0001a984) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf58,	// (0x00017b9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf60,	// (0x00017ba7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf68,	// (0x00017baf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd42,	// (0x0001a989) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf70,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf70,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid

0xcf89,	// (0x00017bd0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf91,	// (0x00017bd8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb3fe,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb3fe,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5d,	// (0x0001a7a4) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf99,	// (0x00017be0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x863a,	// (0x00013281) clock_nsta_pane_cp_24_ParamLimits

0x863a,	// (0x00013281) clock_nsta_pane_cp_24

0x86b8,	// (0x000132ff) indicator_nsta_pane_cp_24_ParamLimits

0x86b8,	// (0x000132ff) indicator_nsta_pane_cp_24

0x97fd,	// (0x00014444) heading_pane_g1

0x0001,

0xf8fa,	// (0x0001a541) heading_pane_g

0xa33a,	// (0x00014f81) grid_sct_catagory_button_pane

0xa36c,	// (0x00014fb3) scroll_pane_cp5_ParamLimits

0xaf71,	// (0x00015bb8) button_value_adjust_pane_cp5_ParamLimits

0xaf71,	// (0x00015bb8) button_value_adjust_pane_cp5

0xb069,	// (0x00015cb0) form2_midp_time_pane_ParamLimits

0xcfa7,	// (0x00017bee) cell_sct_catagory_button_pane_ParamLimits

0xcfa7,	// (0x00017bee) cell_sct_catagory_button_pane

0xb3c3,	// (0x0001600a) bg_button_pane_cp01_ParamLimits

0xb3c3,	// (0x0001600a) bg_button_pane_cp01

0xb3fe,	// (0x00016045) cell_sct_catagory_button_pane_g1

0x187d,	// (0x0000c4c4) popup_tb_extension_window

0x2f92,	// (0x0000dbd9) aid_size_cell_ext_ParamLimits

0x2f92,	// (0x0000dbd9) aid_size_cell_ext

0x65e4,	// (0x0001122b) bg_tb_trans_pane_cp1_ParamLimits

0x65e4,	// (0x0001122b) bg_tb_trans_pane_cp1

0x2fb8,	// (0x0000dbff) grid_tb_ext_pane_ParamLimits

0x2fb8,	// (0x0000dbff) grid_tb_ext_pane

0x2ff8,	// (0x0000dc3f) cell_tb_ext_pane_ParamLimits

0x2ff8,	// (0x0000dc3f) cell_tb_ext_pane

0x3020,	// (0x0000dc67) cell_tb_ext_pane_g1_ParamLimits

0x3020,	// (0x0000dc67) cell_tb_ext_pane_g1

0xd03f,	// (0x00017c86) cell_tb_ext_pane_t1

0x62a9,	// (0x00010ef0) list_highlight_pane_cp11_ParamLimits

0x62a9,	// (0x00010ef0) list_highlight_pane_cp11

0x45bc,	// (0x0000f203) popup_uni_indicator_window_ParamLimits

0x45bc,	// (0x0000f203) popup_uni_indicator_window

0x6ddf,	// (0x00011a26) bg_popup_sub_pane_cp14

0xd05a,	// (0x00017ca1) list_uniindi_pane

0xd066,	// (0x00017cad) uniindi_top_pane

0x62a9,	// (0x00010ef0) bg_uniindi_top_pane

0xd085,	// (0x00017ccc) uniindi_top_pane_g1

0xd09b,	// (0x00017ce2) uniindi_top_pane_g2

0x0003,

0xfd49,	// (0x0001a990) uniindi_top_pane_g

0xd0c5,	// (0x00017d0c) uniindi_top_pane_t1

0xd0ef,	// (0x00017d36) list_single_uniindi_pane_ParamLimits

0xd0ef,	// (0x00017d36) list_single_uniindi_pane

0xb3fe,	// (0x00016045) bg_uniindi_top_pane_g1

0xd101,	// (0x00017d48) list_single_uniindi_pane_g1

0xd114,	// (0x00017d5b) list_single_uniindi_pane_t1

0x4440,	// (0x0000f087) control_bg_pane

0xd139,	// (0x00017d80) bg_sctrl_sk_pane_cp1

0xd142,	// (0x00017d89) bg_sctrl_sk_pane_cp2

0xd14b,	// (0x00017d92) control_bg_pane_g1

0xd154,	// (0x00017d9b) control_bg_pane_g2

0x0001,

0xfd52,	// (0x0001a999) control_bg_pane_g

0xadcf,	// (0x00015a16) cell_indicator_nsta_pane_g1_ParamLimits

0x251e,	// (0x0000d165) cell_indicator_nsta_pane_g2_ParamLimits

0xface,	// (0x0001a715) cell_indicator_nsta_pane_g_ParamLimits

0xb0ed,	// (0x00015d34) form2_midp_time_pane_t1_ParamLimits

0xb4c4,	// (0x0001610b) main_idle_act4_pane_ParamLimits

0xb4c4,	// (0x0001610b) main_idle_act4_pane

0x187d,	// (0x0000c4c4) popup_tb_extension_window_ParamLimits

0x2fdf,	// (0x0000dc26) tb_ext_find_pane_ParamLimits

0x2fdf,	// (0x0000dc26) tb_ext_find_pane

0xd15d,	// (0x00017da4) ai_gene_pane_1_cp1

0x7d6e,	// (0x000129b5) ai_gene_pane_2_cp1

0xd165,	// (0x00017dac) list_single_idle_plugin_calendar_pane

0xd16e,	// (0x00017db5) list_single_idle_plugin_notification_pane

0xd177,	// (0x00017dbe) list_single_idle_plugin_player_pane

0x303d,	// (0x0000dc84) list_single_idle_plugin_shortcut_pane_ParamLimits

0x303d,	// (0x0000dc84) list_single_idle_plugin_shortcut_pane

0x3065,	// (0x0000dcac) main_idle_act4_pane_t1

0x307b,	// (0x0000dcc2) main_idle_act4_pane_t2

0x0001,

0xfd57,	// (0x0001a99e) main_idle_act4_pane_t

0x3093,	// (0x0000dcda) middle_sk_idle_act4_pane_ParamLimits

0x3093,	// (0x0000dcda) middle_sk_idle_act4_pane

0x30af,	// (0x0000dcf6) popup_clock_digital_analogue_window_cp2

0x30d6,	// (0x0000dd1d) shortcut_wheel_idle_act4_pane_ParamLimits

0x30d6,	// (0x0000dd1d) shortcut_wheel_idle_act4_pane

0xb3fe,	// (0x00016045) shortcut_wheel_idle_act4_pane_g1

0xb3fe,	// (0x00016045) shortcut_wheel_idle_act4_pane_g2

0xb3fe,	// (0x00016045) shortcut_wheel_idle_act4_pane_g3

0xb3fe,	// (0x00016045) shortcut_wheel_idle_act4_pane_g4

0xb3fe,	// (0x00016045) shortcut_wheel_idle_act4_pane_g5

0xd20a,	// (0x00017e51) shortcut_wheel_idle_act4_pane_g6

0xd212,	// (0x00017e59) shortcut_wheel_idle_act4_pane_g7

0xd21a,	// (0x00017e61) shortcut_wheel_idle_act4_pane_g8

0xd222,	// (0x00017e69) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5c,	// (0x0001a9a3) shortcut_wheel_idle_act4_pane_g

0xe8a2,	// (0x000194e9) middle_sk_idle_act4_pane_g1_ParamLimits

0xe8a2,	// (0x000194e9) middle_sk_idle_act4_pane_g1

0x3153,	// (0x0000dd9a) middle_sk_idle_act4_pane_g2_ParamLimits

0x3153,	// (0x0000dd9a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7f,	// (0x0001a9c6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7f,	// (0x0001a9c6) middle_sk_idle_act4_pane_g

0x316b,	// (0x0000ddb2) middle_sk_idle_act4_pane_t1_ParamLimits

0x316b,	// (0x0000ddb2) middle_sk_idle_act4_pane_t1

0x319a,	// (0x0000dde1) grid_ai_shortcut_pane_ParamLimits

0x319a,	// (0x0000dde1) grid_ai_shortcut_pane

0x31b7,	// (0x0000ddfe) list_highlight_pane_cp16_ParamLimits

0x31b7,	// (0x0000ddfe) list_highlight_pane_cp16

0x31c4,	// (0x0000de0b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x31c4,	// (0x0000de0b) list_single_idle_plugin_shortcut_pane_g1

0x31d0,	// (0x0000de17) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x31d0,	// (0x0000de17) list_single_idle_plugin_shortcut_pane_g2

0x31ec,	// (0x0000de33) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x31ec,	// (0x0000de33) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd84,	// (0x0001a9cb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd84,	// (0x0001a9cb) list_single_idle_plugin_shortcut_pane_g

0x3201,	// (0x0000de48) cell_ai_shortcut_pane_ParamLimits

0x3201,	// (0x0000de48) cell_ai_shortcut_pane

0x3217,	// (0x0000de5e) cell_ai_shortcut_pane_g1_ParamLimits

0x3217,	// (0x0000de5e) cell_ai_shortcut_pane_g1

0xd15d,	// (0x00017da4) ai_gene_pane_1_cp2

0xd34f,	// (0x00017f96) ai_gene_pane_2_cp2

0xd357,	// (0x00017f9e) list_highlight_pane_cp15

0xd360,	// (0x00017fa7) list_single_idle_plugin_calendar_pane_g1

0xd357,	// (0x00017f9e) list_highlight_pane_cp17

0xd368,	// (0x00017faf) list_single_idle_plugin_calendar_pane_g1_copy1

0xd370,	// (0x00017fb7) list_single_idle_plugin_player_pane_g1

0xa593,	// (0x000151da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8b,	// (0x0001a9d2) list_single_idle_plugin_player_pane_g

0xd378,	// (0x00017fbf) list_single_idle_plugin_player_pane_t1

0xd386,	// (0x00017fcd) list_single_idle_plugin_player_pane_t2

0xd394,	// (0x00017fdb) list_single_idle_plugin_player_pane_t3

0xd3a2,	// (0x00017fe9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd90,	// (0x0001a9d7) list_single_idle_plugin_player_pane_t

0xd3b0,	// (0x00017ff7) wait_bar_pane_cp15

0xd3b8,	// (0x00017fff) grid_ai_notification_pane

0xa593,	// (0x000151da) list_single_idle_plugin_notification_pane_g1

0x3239,	// (0x0000de80) cell_ai_notification_pane_ParamLimits

0x3239,	// (0x0000de80) cell_ai_notification_pane

0xd3ce,	// (0x00018015) cell_ai_notification_pane_g1

0xd3d6,	// (0x0001801d) cell_ai_notification_pane_t1

0x3246,	// (0x0000de8d) tb_ext_find_button_pane

0x324e,	// (0x0000de95) tb_ext_find_pane_g1

0x3256,	// (0x0000de9d) tb_ext_find_pane_t1

0x75b8,	// (0x000121ff) tb_ext_find_button_pane_g1

0xd402,	// (0x00018049) tb_ext_find_button_pane_g2

0x0001,

0xfd99,	// (0x0001a9e0) tb_ext_find_button_pane_g

0x3065,	// (0x0000dcac) main_idle_act4_pane_t1_ParamLimits

0x307b,	// (0x0000dcc2) main_idle_act4_pane_t2_ParamLimits

0xfd57,	// (0x0001a99e) main_idle_act4_pane_t_ParamLimits

0x30af,	// (0x0000dcf6) popup_clock_digital_analogue_window_cp2_ParamLimits

0x30c6,	// (0x0000dd0d) sat_plugin_idle_act4_pane_ParamLimits

0x30c6,	// (0x0000dd0d) sat_plugin_idle_act4_pane

0x3264,	// (0x0000deab) sat_plugin_idle_act4_pane_t1_ParamLimits

0x3264,	// (0x0000deab) sat_plugin_idle_act4_pane_t1

0x327c,	// (0x0000dec3) sat_plugin_idle_act4_pane_t2_ParamLimits

0x327c,	// (0x0000dec3) sat_plugin_idle_act4_pane_t2

0x3294,	// (0x0000dedb) sat_plugin_idle_act4_pane_t3_ParamLimits

0x3294,	// (0x0000dedb) sat_plugin_idle_act4_pane_t3

0x32ac,	// (0x0000def3) sat_plugin_idle_act4_pane_t4_ParamLimits

0x32ac,	// (0x0000def3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9e,	// (0x0001a9e5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9e,	// (0x0001a9e5) sat_plugin_idle_act4_pane_t

0x4505,	// (0x0000f14c) popup_battery_window_ParamLimits

0x4505,	// (0x0000f14c) popup_battery_window

0x62a9,	// (0x00010ef0) bg_popup_sub_pane_cp25_ParamLimits

0x62a9,	// (0x00010ef0) bg_popup_sub_pane_cp25

0xd457,	// (0x0001809e) popup_battery_window_g1_ParamLimits

0xd457,	// (0x0001809e) popup_battery_window_g1

0xd463,	// (0x000180aa) popup_battery_window_t1_ParamLimits

0xd463,	// (0x000180aa) popup_battery_window_t1

0xd475,	// (0x000180bc) popup_battery_window_t2_ParamLimits

0xd475,	// (0x000180bc) popup_battery_window_t2

0x0001,

0xfda7,	// (0x0001a9ee) popup_battery_window_t_ParamLimits

0xfda7,	// (0x0001a9ee) popup_battery_window_t

0x1079,	// (0x0000bcc0) midp_canvas_pane_ParamLimits

0x10d6,	// (0x0000bd1d) midp_keypad_pane_ParamLimits

0x10d6,	// (0x0000bd1d) midp_keypad_pane

0x7fab,	// (0x00012bf2) main_midp_pane_ParamLimits

0xae29,	// (0x00015a70) signal_pane_g2_cp_ParamLimits

0x32c4,	// (0x0000df0b) aid_size_cell_midp_keypad_ParamLimits

0x32c4,	// (0x0000df0b) aid_size_cell_midp_keypad

0x32e2,	// (0x0000df29) midp_keyp_game_grid_pane_ParamLimits

0x32e2,	// (0x0000df29) midp_keyp_game_grid_pane

0x3309,	// (0x0000df50) midp_keyp_rocker_pane_ParamLimits

0x3309,	// (0x0000df50) midp_keyp_rocker_pane

0x3362,	// (0x0000dfa9) midp_keyp_sk_left_pane_ParamLimits

0x3362,	// (0x0000dfa9) midp_keyp_sk_left_pane

0x33b6,	// (0x0000dffd) midp_keyp_sk_right_pane_ParamLimits

0x33b6,	// (0x0000dffd) midp_keyp_sk_right_pane

0x5f12,	// (0x00010b59) bg_button_pane_cp03

0x340a,	// (0x0000e051) midp_keyp_sk_left_pane_g1

0x5f12,	// (0x00010b59) bg_button_pane_cp04

0x340a,	// (0x0000e051) midp_keyp_sk_right_pane_g1

0xb3fe,	// (0x00016045) midp_keyp_rocker_pane_g1

0x3413,	// (0x0000e05a) keyp_game_cell_pane_ParamLimits

0x3413,	// (0x0000e05a) keyp_game_cell_pane

0x5f12,	// (0x00010b59) bg_button_pane_cp02

0x3437,	// (0x0000e07e) keyp_game_cell_pane_g1

0xe049,	// (0x00018c90) popup_fep_vkb2_window_ParamLimits

0xe049,	// (0x00018c90) popup_fep_vkb2_window

0xe4c4,	// (0x0001910b) aid_size_cell_vkb2_ParamLimits

0xe4c4,	// (0x0001910b) aid_size_cell_vkb2

0xe4fa,	// (0x00019141) popup_fep_vkb2_window_g1_ParamLimits

0xe4fa,	// (0x00019141) popup_fep_vkb2_window_g1

0xe541,	// (0x00019188) vkb2_area_bottom_pane_ParamLimits

0xe541,	// (0x00019188) vkb2_area_bottom_pane

0xe595,	// (0x000191dc) vkb2_area_keypad_pane_ParamLimits

0xe595,	// (0x000191dc) vkb2_area_keypad_pane

0xe5dd,	// (0x00019224) vkb2_area_top_pane_ParamLimits

0xe5dd,	// (0x00019224) vkb2_area_top_pane

0xe663,	// (0x000192aa) vkb2_top_entry_pane_ParamLimits

0xe663,	// (0x000192aa) vkb2_top_entry_pane

0xe690,	// (0x000192d7) vkb2_top_grid_left_pane_ParamLimits

0xe690,	// (0x000192d7) vkb2_top_grid_left_pane

0xe6b0,	// (0x000192f7) vkb2_top_grid_right_pane_ParamLimits

0xe6b0,	// (0x000192f7) vkb2_top_grid_right_pane

0x5958,	// (0x0001059f) vkb2_cell_keypad_pane_ParamLimits

0x5958,	// (0x0001059f) vkb2_cell_keypad_pane

0xe6f6,	// (0x0001933d) vkb2_area_bottom_grid_pane_ParamLimits

0xe6f6,	// (0x0001933d) vkb2_area_bottom_grid_pane

0xe720,	// (0x00019367) vkb2_area_bottom_pane_g1_ParamLimits

0xe720,	// (0x00019367) vkb2_area_bottom_pane_g1

0xe746,	// (0x0001938d) vkb2_area_bottom_pane_g2_ParamLimits

0xe746,	// (0x0001938d) vkb2_area_bottom_pane_g2

0xe777,	// (0x000193be) vkb2_area_bottom_pane_g3_ParamLimits

0xe777,	// (0x000193be) vkb2_area_bottom_pane_g3

0x0002,

0xfdac,	// (0x0001a9f3) vkb2_area_bottom_pane_g_ParamLimits

0xfdac,	// (0x0001a9f3) vkb2_area_bottom_pane_g

0x5b02,	// (0x00010749) vkb2_top_cell_left_pane_ParamLimits

0x5b02,	// (0x00010749) vkb2_top_cell_left_pane

0x375d,	// (0x0000e3a4) vkb2_top_entry_pane_g1_ParamLimits

0x375d,	// (0x0000e3a4) vkb2_top_entry_pane_g1

0x376b,	// (0x0000e3b2) vkb2_top_entry_pane_t1_ParamLimits

0x376b,	// (0x0000e3b2) vkb2_top_entry_pane_t1

0xe8b8,	// (0x000194ff) vkb2_top_entry_pane_t2_ParamLimits

0xe8b8,	// (0x000194ff) vkb2_top_entry_pane_t2

0xe8ea,	// (0x00019531) vkb2_top_entry_pane_t3_ParamLimits

0xe8ea,	// (0x00019531) vkb2_top_entry_pane_t3

0x0002,

0xfdb3,	// (0x0001a9fa) vkb2_top_entry_pane_t_ParamLimits

0xfdb3,	// (0x0001a9fa) vkb2_top_entry_pane_t

0xe7e1,	// (0x00019428) vkb2_top_grid_right_pane_g1_ParamLimits

0xe7e1,	// (0x00019428) vkb2_top_grid_right_pane_g1

0x5b65,	// (0x000107ac) vkb2_top_grid_right_pane_g2_ParamLimits

0x5b65,	// (0x000107ac) vkb2_top_grid_right_pane_g2

0x5b7d,	// (0x000107c4) vkb2_top_grid_right_pane_g3_ParamLimits

0x5b7d,	// (0x000107c4) vkb2_top_grid_right_pane_g3

0xe7f7,	// (0x0001943e) vkb2_top_grid_right_pane_g4_ParamLimits

0xe7f7,	// (0x0001943e) vkb2_top_grid_right_pane_g4

0x0003,

0xfdba,	// (0x0001aa01) vkb2_top_grid_right_pane_g_ParamLimits

0xfdba,	// (0x0001aa01) vkb2_top_grid_right_pane_g

0x5bab,	// (0x000107f2) vkb2_top_cell_left_pane_g1

0x5bc2,	// (0x00010809) vkb2_cell_keypad_pane_g1_ParamLimits

0x5bc2,	// (0x00010809) vkb2_cell_keypad_pane_g1

0xe90e,	// (0x00019555) vkb2_cell_keypad_pane_t1_ParamLimits

0xe90e,	// (0x00019555) vkb2_cell_keypad_pane_t1

0x5bd0,	// (0x00010817) vkb2_cell_bottom_grid_pane_ParamLimits

0x5bd0,	// (0x00010817) vkb2_cell_bottom_grid_pane

0x5c09,	// (0x00010850) vkb2_cell_bottom_grid_pane_g1

0x30f7,	// (0x0000dd3e) aid_call2_pane_cp02

0x30ff,	// (0x0000dd46) aid_call_pane_cp02

0x3107,	// (0x0000dd4e) clock_digital_number_pane_cp10

0x310f,	// (0x0000dd56) clock_digital_number_pane_cp11

0x3117,	// (0x0000dd5e) clock_digital_number_pane_cp12

0x311f,	// (0x0000dd66) clock_digital_number_pane_cp13

0x3127,	// (0x0000dd6e) clock_digital_separator_pane_cp10

0x75b8,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g1

0x75b8,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g2

0x312f,	// (0x0000dd76) popup_clock_digital_analogue_window_cp2_g3

0x75b8,	// (0x000121ff) popup_clock_digital_analogue_window_cp2_g4

0x312f,	// (0x0000dd76) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6f,	// (0x0001a9b6) popup_clock_digital_analogue_window_cp2_g

0x3137,	// (0x0000dd7e) popup_clock_digital_analogue_window_cp2_t1

0x3145,	// (0x0000dd8c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7a,	// (0x0001a9c1) popup_clock_digital_analogue_window_cp2_t

0xb3fe,	// (0x00016045) clock_digital_number_pane_cp10_g1

0xb3fe,	// (0x00016045) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001a7a4) clock_digital_number_pane_cp10_g

0xb3fe,	// (0x00016045) clock_digital_separator_pane_cp10_g1

0xb3fe,	// (0x00016045) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5d,	// (0x0001a7a4) clock_digital_separator_pane_cp10_g

0xd0a7,	// (0x00017cee) uniindi_top_pane_g3

0xd0b8,	// (0x00017cff) uniindi_top_pane_g4

0x59e3,	// (0x0001062a) vkb2_row_keypad_pane_ParamLimits

0x59e3,	// (0x0001062a) vkb2_row_keypad_pane

0x5c29,	// (0x00010870) vkb2_cell_t_keypad_pane_ParamLimits

0x5c29,	// (0x00010870) vkb2_cell_t_keypad_pane

0x5c39,	// (0x00010880) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5c39,	// (0x00010880) vkb2_cell_t_keypad_pane_cp08

0x5c4c,	// (0x00010893) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5c4c,	// (0x00010893) vkb2_cell_t_keypad_pane_cp09

0x5c60,	// (0x000108a7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5c60,	// (0x000108a7) vkb2_cell_t_keypad_pane_cp01

0x5c71,	// (0x000108b8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5c71,	// (0x000108b8) vkb2_cell_t_keypad_pane_cp02

0x5c82,	// (0x000108c9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5c82,	// (0x000108c9) vkb2_cell_t_keypad_pane_cp03

0x5c93,	// (0x000108da) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5c93,	// (0x000108da) vkb2_cell_t_keypad_pane_cp04

0x5ca4,	// (0x000108eb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5ca4,	// (0x000108eb) vkb2_cell_t_keypad_pane_cp05

0x5cb5,	// (0x000108fc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5cb5,	// (0x000108fc) vkb2_cell_t_keypad_pane_cp06

0x5cc6,	// (0x0001090d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5cc6,	// (0x0001090d) vkb2_cell_t_keypad_pane_cp07

0x5cd7,	// (0x0001091e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5cd7,	// (0x0001091e) vkb2_cell_t_keypad_pane_cp10

0x5494,	// (0x000100db) vkb2_cell_t_keypad_pane_g1

0xe925,	// (0x0001956c) vkb2_cell_t_keypad_pane_t1

0x4440,	// (0x0000f087) popup_grid_graphic2_window

0x37d0,	// (0x0000e417) aid_size_cell_graphic2_ParamLimits

0x37d0,	// (0x0000e417) aid_size_cell_graphic2

0x9183,	// (0x00013dca) bg_popup_window_pane_cp21_ParamLimits

0x9183,	// (0x00013dca) bg_popup_window_pane_cp21

0x3802,	// (0x0000e449) graphic2_pages_pane_ParamLimits

0x3802,	// (0x0000e449) graphic2_pages_pane

0x3858,	// (0x0000e49f) grid_graphic2_control_pane_ParamLimits

0x3858,	// (0x0000e49f) grid_graphic2_control_pane

0x388c,	// (0x0000e4d3) grid_graphic2_pane_ParamLimits

0x388c,	// (0x0000e4d3) grid_graphic2_pane

0x38ff,	// (0x0000e546) cell_graphic2_pane

0x5f12,	// (0x00010b59) main_comp_mode_pane

0xc8a7,	// (0x000174ee) list_ai3_gene_pane_ParamLimits

0x2dcd,	// (0x0000da14) bg_popup_window_pane_cp19_ParamLimits

0xccf9,	// (0x00017940) bg_touch_area_indi_pane_ParamLimits

0xccf9,	// (0x00017940) bg_touch_area_indi_pane

0xcd0f,	// (0x00017956) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd0f,	// (0x00017956) bg_touch_area_indi_pane_cp01

0xcd25,	// (0x0001796c) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd25,	// (0x0001796c) bg_touch_area_indi_pane_cp02

0xcd3d,	// (0x00017984) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd3d,	// (0x00017984) bg_touch_area_indi_pane_cp03

0xcd57,	// (0x0001799e) popup_slider_window_g1_ParamLimits

0xcd73,	// (0x000179ba) popup_slider_window_g2_ParamLimits

0xcd8f,	// (0x000179d6) popup_slider_window_g3_ParamLimits

0xfd04,	// (0x0001a94b) popup_slider_window_g_ParamLimits

0xcdeb,	// (0x00017a32) popup_slider_window_t1_ParamLimits

0xce5f,	// (0x00017aa6) small_volume_slider_vertical_pane_ParamLimits

0x38ff,	// (0x0000e546) cell_graphic2_pane_ParamLimits

0x395a,	// (0x0000e5a1) bg_button_pane_cp10_ParamLimits

0x395a,	// (0x0000e5a1) bg_button_pane_cp10

0x396d,	// (0x0000e5b4) bg_button_pane_cp11_ParamLimits

0x396d,	// (0x0000e5b4) bg_button_pane_cp11

0x3980,	// (0x0000e5c7) graphic2_pages_pane_g1_ParamLimits

0x3980,	// (0x0000e5c7) graphic2_pages_pane_g1

0x399b,	// (0x0000e5e2) graphic2_pages_pane_g2_ParamLimits

0x399b,	// (0x0000e5e2) graphic2_pages_pane_g2

0x0001,

0xfdc8,	// (0x0001aa0f) graphic2_pages_pane_g_ParamLimits

0xfdc8,	// (0x0001aa0f) graphic2_pages_pane_g

0x39b3,	// (0x0000e5fa) graphic2_pages_pane_t1_ParamLimits

0x39b3,	// (0x0000e5fa) graphic2_pages_pane_t1

0x39cb,	// (0x0000e612) cell_graphic2_control_pane_ParamLimits

0x39cb,	// (0x0000e612) cell_graphic2_control_pane

0x39e5,	// (0x0000e62c) cell_graphic2_pane_g1_ParamLimits

0x39e5,	// (0x0000e62c) cell_graphic2_pane_g1

0xe937,	// (0x0001957e) cell_graphic2_pane_g2_ParamLimits

0xe937,	// (0x0001957e) cell_graphic2_pane_g2

0x39f2,	// (0x0000e639) cell_graphic2_pane_g3_ParamLimits

0x39f2,	// (0x0000e639) cell_graphic2_pane_g3

0xe944,	// (0x0001958b) cell_graphic2_pane_g4_ParamLimits

0xe944,	// (0x0001958b) cell_graphic2_pane_g4

0x39ff,	// (0x0000e646) cell_graphic2_pane_g5_ParamLimits

0x39ff,	// (0x0000e646) cell_graphic2_pane_g5

0x0004,

0xfdcd,	// (0x0001aa14) cell_graphic2_pane_g_ParamLimits

0xfdcd,	// (0x0001aa14) cell_graphic2_pane_g

0x3a1f,	// (0x0000e666) cell_graphic2_pane_t1_ParamLimits

0x3a1f,	// (0x0000e666) cell_graphic2_pane_t1

0x97f1,	// (0x00014438) grid_highlight_pane_cp11_ParamLimits

0x97f1,	// (0x00014438) grid_highlight_pane_cp11

0x6ddf,	// (0x00011a26) bg_button_pane_cp05

0x3a36,	// (0x0000e67d) cell_graphic2_control_pane_g1

0xb3fe,	// (0x00016045) bg_touch_area_indi_pane_g1

0xe951,	// (0x00019598) aid_cmod_rocker_key_size

0xe95b,	// (0x000195a2) aid_cmode_itu_key_size

0xe965,	// (0x000195ac) main_cmode_video_pane

0xe96f,	// (0x000195b6) main_comp_mode_itu_pane

0xe97b,	// (0x000195c2) main_comp_mode_rocker_pane

0xe987,	// (0x000195ce) cell_cmode_rocker_pane_ParamLimits

0xe987,	// (0x000195ce) cell_cmode_rocker_pane

0xe999,	// (0x000195e0) cell_cmode_itu_pane_ParamLimits

0xe999,	// (0x000195e0) cell_cmode_itu_pane

0x6ddf,	// (0x00011a26) bg_button_pane_cp06_ParamLimits

0x6ddf,	// (0x00011a26) bg_button_pane_cp06

0xb6a5,	// (0x000162ec) cell_cmode_rocker_pane_g1_ParamLimits

0xb6a5,	// (0x000162ec) cell_cmode_rocker_pane_g1

0xcf03,	// (0x00017b4a) cell_cmode_rocker_pane_g2_ParamLimits

0xcf03,	// (0x00017b4a) cell_cmode_rocker_pane_g2

0x0001,

0xfdd8,	// (0x0001aa1f) cell_cmode_rocker_pane_g_ParamLimits

0xfdd8,	// (0x0001aa1f) cell_cmode_rocker_pane_g

0x5f12,	// (0x00010b59) bg_button_pane_cp07

0xe9ae,	// (0x000195f5) cell_cmode_itu_pane_g1

0xe9b7,	// (0x000195fe) cell_cmode_itu_pane_t1

0xe9c5,	// (0x0001960c) cell_cmode_itu_pane_t2

0x0001,

0xfddd,	// (0x0001aa24) cell_cmode_itu_pane_t

0xd129,	// (0x00017d70) aid_touch_ctrl_left

0xd131,	// (0x00017d78) aid_touch_ctrl_right

0x5f12,	// (0x00010b59) compa_mode_pane

0x3a43,	// (0x0000e68a) aid_cmod_rocker_key_size_cp

0x3a4d,	// (0x0000e694) aid_cmode_itu_key_size_cp

0xe9d3,	// (0x0001961a) compa_mode_pane_g1

0xe9db,	// (0x00019622) compa_mode_pane_g2

0xe9e3,	// (0x0001962a) compa_mode_pane_g3

0x0002,

0xfde2,	// (0x0001aa29) compa_mode_pane_g

0x3a57,	// (0x0000e69e) main_comp_mode_itu_pane_cp

0x3a5f,	// (0x0000e6a6) main_comp_mode_rocker_pane_cp

0x3a67,	// (0x0000e6ae) cell_cmode_itu_pane_cp_ParamLimits

0x3a67,	// (0x0000e6ae) cell_cmode_itu_pane_cp

0x3a7c,	// (0x0000e6c3) cell_cmode_rocker_pane_cp_ParamLimits

0x3a7c,	// (0x0000e6c3) cell_cmode_rocker_pane_cp

0x6ddf,	// (0x00011a26) bg_button_pane_cp06_cp_ParamLimits

0x6ddf,	// (0x00011a26) bg_button_pane_cp06_cp

0xb6a5,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb6a5,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp

0xb3fe,	// (0x00016045) cell_cmode_rocker_pane_g2_cp

0x5f12,	// (0x00010b59) bg_button_pane_cp07_cp

0x3a8e,	// (0x0000e6d5) cell_cmode_itu_pane_g1_cp

0x3a97,	// (0x0000e6de) cell_cmode_itu_pane_t1_cp

0x3a97,	// (0x0000e6de) cell_cmode_itu_pane_t2_cp

0x2326,	// (0x0000cf6d) settings_code_pane_cp2

0x6006,	// (0x00010c4d) bg_popup_window_pane_cp3_ParamLimits

0x6477,	// (0x000110be) heading_pane_cp3_ParamLimits

0x6483,	// (0x000110ca) listscroll_popup_graphic_pane_ParamLimits

0x523d,	// (0x0000fe84) fep_hwr_aid_pane_ParamLimits

0x56ad,	// (0x000102f4) aid_touch_sctrl_top_ParamLimits

0x56c8,	// (0x0001030f) sctrl_sk_top_pane_g1_ParamLimits

0x5494,	// (0x000100db) sctrl_sk_top_pane_g2_ParamLimits

0xfd1d,	// (0x0001a964) sctrl_sk_top_pane_g_ParamLimits

0x56d5,	// (0x0001031c) sctrl_sk_top_pane_t1_ParamLimits

0x56ad,	// (0x000102f4) aid_touch_sctrl_bottom_ParamLimits

0x56d5,	// (0x0001031c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd073,	// (0x00017cba) aid_area_touch_clock

0xe625,	// (0x0001926c) aid_vkb2_area_top_pane_cell_ParamLimits

0xe625,	// (0x0001926c) aid_vkb2_area_top_pane_cell

0xe6d0,	// (0x00019317) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe6d0,	// (0x00019317) aid_vkb2_area_bottom_pane_cell

0xe8b0,	// (0x000194f7) popup_char_count_window

0xe9eb,	// (0x00019632) popup_char_count_window_g1

0xe9f4,	// (0x0001963b) popup_char_count_window_g2

0xe9fd,	// (0x00019644) popup_char_count_window_g3

0x0002,

0xfde9,	// (0x0001aa30) popup_char_count_window_g

0xea06,	// (0x0001964d) popup_char_count_window_t1

0x5788,	// (0x000103cf) popup_fep_char_preview_window_ParamLimits

0x5788,	// (0x000103cf) popup_fep_char_preview_window

0xe645,	// (0x0001928c) vkb2_top_candi_pane_ParamLimits

0xe645,	// (0x0001928c) vkb2_top_candi_pane

0x3aa5,	// (0x0000e6ec) cell_vkb2_top_candi_pane_ParamLimits

0x3aa5,	// (0x0000e6ec) cell_vkb2_top_candi_pane

0x5cec,	// (0x00010933) bg_popup_fep_char_preview_window_ParamLimits

0x5cec,	// (0x00010933) bg_popup_fep_char_preview_window

0x5cfa,	// (0x00010941) popup_fep_char_preview_window_t1_ParamLimits

0x5cfa,	// (0x00010941) popup_fep_char_preview_window_t1

0xea14,	// (0x0001965b) bg_popup_fep_char_preview_window_g1

0xea1c,	// (0x00019663) bg_popup_fep_char_preview_window_g2

0xea24,	// (0x0001966b) bg_popup_fep_char_preview_window_g3

0xea2c,	// (0x00019673) bg_popup_fep_char_preview_window_g4

0xea34,	// (0x0001967b) bg_popup_fep_char_preview_window_g5

0x5d34,	// (0x0001097b) bg_popup_fep_char_preview_window_g6

0xea3c,	// (0x00019683) bg_popup_fep_char_preview_window_g7

0xea44,	// (0x0001968b) bg_popup_fep_char_preview_window_g8

0xea4c,	// (0x00019693) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf0,	// (0x0001aa37) bg_popup_fep_char_preview_window_g

0x5494,	// (0x000100db) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5494,	// (0x000100db) cell_vkb2_top_candi_pane_g1

0x54a2,	// (0x000100e9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x54a2,	// (0x000100e9) cell_vkb2_top_candi_pane_g2

0xe881,	// (0x000194c8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe881,	// (0x000194c8) cell_vkb2_top_candi_pane_g3

0x5d3c,	// (0x00010983) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5d3c,	// (0x00010983) cell_vkb2_top_candi_pane_g4

0xbccd,	// (0x00016914) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbccd,	// (0x00016914) cell_vkb2_top_candi_pane_g5

0x5d5d,	// (0x000109a4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5d5d,	// (0x000109a4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe03,	// (0x0001aa4a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe03,	// (0x0001aa4a) cell_vkb2_top_candi_pane_g

0x5d6b,	// (0x000109b2) cell_vkb2_top_candi_pane_t1

0x504c,	// (0x0000fc93) aid_size_touch_slider_mark_ParamLimits

0x504c,	// (0x0000fc93) aid_size_touch_slider_mark

0x383e,	// (0x0000e485) grid_graphic2_catg_pane_ParamLimits

0x383e,	// (0x0000e485) grid_graphic2_catg_pane

0x38d2,	// (0x0000e519) popup_grid_graphic2_window_t1_ParamLimits

0x38d2,	// (0x0000e519) popup_grid_graphic2_window_t1

0x38e8,	// (0x0000e52f) popup_grid_graphic2_window_t2_ParamLimits

0x38e8,	// (0x0000e52f) popup_grid_graphic2_window_t2

0x0001,

0xfdc3,	// (0x0001aa0a) popup_grid_graphic2_window_t_ParamLimits

0xfdc3,	// (0x0001aa0a) popup_grid_graphic2_window_t

0x6ddf,	// (0x00011a26) bg_button_pane_cp05_ParamLimits

0x3a36,	// (0x0000e67d) cell_graphic2_control_pane_g1_ParamLimits

0x3b0b,	// (0x0000e752) cell_graphic2_catg_pane_ParamLimits

0x3b0b,	// (0x0000e752) cell_graphic2_catg_pane

0x5f12,	// (0x00010b59) bg_button_pane_cp12

0x3b1d,	// (0x0000e764) cell_graphic2_catg_pane_g1

0xd03f,	// (0x00017c86) cell_tb_ext_pane_t1_ParamLimits

0x5b22,	// (0x00010769) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5b22,	// (0x00010769) vkb2_top_cell_right_narrow_pane

0x5b3a,	// (0x00010781) vkb2_top_cell_right_wide_pane_ParamLimits

0x5b3a,	// (0x00010781) vkb2_top_cell_right_wide_pane

0x522f,	// (0x0000fe76) bg_vkb2_func_pane_ParamLimits

0x522f,	// (0x0000fe76) bg_vkb2_func_pane

0x5bab,	// (0x000107f2) vkb2_top_cell_left_pane_g1_ParamLimits

0x522f,	// (0x0000fe76) bg_vkb2_fuc_pane_cp03_ParamLimits

0x522f,	// (0x0000fe76) bg_vkb2_fuc_pane_cp03

0x5c09,	// (0x00010850) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8a65,	// (0x000136ac) bg_vkb2_func_pane_g1

0x8a6d,	// (0x000136b4) bg_vkb2_func_pane_g2

0x8a7d,	// (0x000136c4) bg_vkb2_func_pane_g3

0x8a75,	// (0x000136bc) bg_vkb2_func_pane_g4

0x8a85,	// (0x000136cc) bg_vkb2_func_pane_g5

0x8a8d,	// (0x000136d4) bg_vkb2_func_pane_g6

0x8a95,	// (0x000136dc) bg_vkb2_func_pane_g7

0x8a9d,	// (0x000136e4) bg_vkb2_func_pane_g8

0x8a5d,	// (0x000136a4) bg_vkb2_func_pane_g9

0x0008,

0xfe10,	// (0x0001aa57) bg_vkb2_func_pane_g

0x522f,	// (0x0000fe76) bg_vkb2_fuc_pane_cp01_ParamLimits

0x522f,	// (0x0000fe76) bg_vkb2_fuc_pane_cp01

0x5bab,	// (0x000107f2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5bab,	// (0x000107f2) vkb2_top_cell_right_wide_pane_g1

0x522f,	// (0x0000fe76) bg_vkb2_fuc_pane_cp02_ParamLimits

0x522f,	// (0x0000fe76) bg_vkb2_fuc_pane_cp02

0x5c09,	// (0x00010850) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5c09,	// (0x00010850) vkb2_top_cell_right_narrow_pane_g1

0x2d07,	// (0x0000d94e) aid_touch_area_decrease_ParamLimits

0x2d07,	// (0x0000d94e) aid_touch_area_decrease

0x2d41,	// (0x0000d988) aid_touch_area_increase_ParamLimits

0x2d41,	// (0x0000d988) aid_touch_area_increase

0x2d69,	// (0x0000d9b0) aid_touch_area_mute_ParamLimits

0x2d69,	// (0x0000d9b0) aid_touch_area_mute

0x2d99,	// (0x0000d9e0) aid_touch_area_slider_ParamLimits

0x2d99,	// (0x0000d9e0) aid_touch_area_slider

0x2dd9,	// (0x0000da20) popup_slider_window_g4_ParamLimits

0x2dd9,	// (0x0000da20) popup_slider_window_g4

0x2e01,	// (0x0000da48) popup_slider_window_g5_ParamLimits

0x2e01,	// (0x0000da48) popup_slider_window_g5

0x2e35,	// (0x0000da7c) popup_slider_window_g6_ParamLimits

0x2e35,	// (0x0000da7c) popup_slider_window_g6

0xce19,	// (0x00017a60) popup_slider_window_t2_ParamLimits

0xce19,	// (0x00017a60) popup_slider_window_t2

0x0001,

0xfd11,	// (0x0001a958) popup_slider_window_t_ParamLimits

0xfd11,	// (0x0001a958) popup_slider_window_t

0x2e51,	// (0x0000da98) slider_pane_ParamLimits

0x2e51,	// (0x0000da98) slider_pane

0xea54,	// (0x0001969b) slider_pane_g1_ParamLimits

0xea54,	// (0x0001969b) slider_pane_g1

0xea68,	// (0x000196af) slider_pane_g2_ParamLimits

0xea68,	// (0x000196af) slider_pane_g2

0xea7e,	// (0x000196c5) slider_pane_g3_ParamLimits

0xea7e,	// (0x000196c5) slider_pane_g3

0x0003,

0xfe23,	// (0x0001aa6a) slider_pane_g_ParamLimits

0xfe23,	// (0x0001aa6a) slider_pane_g

0x18c5,	// (0x0000c50c) popup_tb_float_extension_window_ParamLimits

0x18c5,	// (0x0000c50c) popup_tb_float_extension_window

0xeaaa,	// (0x000196f1) aid_size_cell_tb_float_ext

0x5f12,	// (0x00010b59) bg_popup_sub_window_cp28

0xeab6,	// (0x000196fd) grid_tb_float_ext_pane

0xeac0,	// (0x00019707) cell_tb_float_ext_pane_ParamLimits

0xeac0,	// (0x00019707) cell_tb_float_ext_pane

0xeada,	// (0x00019721) cell_tb_float_ext_pane_g1

0xeae3,	// (0x0001972a) grid_highlight_pane_cp12

0xe437,	// (0x0001907e) cell_last_hwr_side_pane_ParamLimits

0xe437,	// (0x0001907e) cell_last_hwr_side_pane

0xb3fe,	// (0x00016045) cell_last_hwr_side_pane_g1

0xeaec,	// (0x00019733) cell_last_hwr_side_pane_g2

0x0001,

0xfe2c,	// (0x0001aa73) cell_last_hwr_side_pane_g

0xe7ac,	// (0x000193f3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe7ac,	// (0x000193f3) vkb2_area_bottom_space_btn_pane

0x5494,	// (0x000100db) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe925,	// (0x0001956c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5d6b,	// (0x000109b2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5d8a,	// (0x000109d1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5d8a,	// (0x000109d1) vkb2_area_bottom_space_btn_pane_g1

0x5dc4,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5dc4,	// (0x00010a0b) vkb2_area_bottom_space_btn_pane_g2

0x5dfa,	// (0x00010a41) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5dfa,	// (0x00010a41) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe31,	// (0x0001aa78) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe31,	// (0x0001aa78) vkb2_area_bottom_space_btn_pane_g

0x52f2,	// (0x0000ff39) cel_fep_hwr_func_pane_ParamLimits

0x52f2,	// (0x0000ff39) cel_fep_hwr_func_pane

0xe40c,	// (0x00019053) cell_hwr_side_button_pane_ParamLimits

0xe40c,	// (0x00019053) cell_hwr_side_button_pane

0xd073,	// (0x00017cba) aid_area_touch_clock_ParamLimits

0x62a9,	// (0x00010ef0) bg_uniindi_top_pane_ParamLimits

0xd085,	// (0x00017ccc) uniindi_top_pane_g1_ParamLimits

0xd09b,	// (0x00017ce2) uniindi_top_pane_g2_ParamLimits

0xd0a7,	// (0x00017cee) uniindi_top_pane_g3_ParamLimits

0xd0b8,	// (0x00017cff) uniindi_top_pane_g4_ParamLimits

0xfd49,	// (0x0001a990) uniindi_top_pane_g_ParamLimits

0xd0c5,	// (0x00017d0c) uniindi_top_pane_t1_ParamLimits

0x62a9,	// (0x00010ef0) bg_vkb2_func_pane_cp01_ParamLimits

0x62a9,	// (0x00010ef0) bg_vkb2_func_pane_cp01

0xeaf5,	// (0x0001973c) cel_fep_hwr_func_pane_g1_ParamLimits

0xeaf5,	// (0x0001973c) cel_fep_hwr_func_pane_g1

0x62a9,	// (0x00010ef0) bg_vkb2_func_pane_cp02_ParamLimits

0x62a9,	// (0x00010ef0) bg_vkb2_func_pane_cp02

0xeaf5,	// (0x0001973c) cell_hwr_side_button_pane_g1_ParamLimits

0xeaf5,	// (0x0001973c) cell_hwr_side_button_pane_g1

0x88be,	// (0x00013505) status_pane_g4_ParamLimits

0x88be,	// (0x00013505) status_pane_g4

0x88d6,	// (0x0001351d) status_pane_t1

0xb100,	// (0x00015d47) form2_midp_gauge_slider_cont_pane

0xb108,	// (0x00015d4f) form2_midp_gauge_slider_pane_t1_ParamLimits

0x2612,	// (0x0000d259) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2624,	// (0x0000d26b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb10,	// (0x0001a757) form2_midp_gauge_slider_pane_t_ParamLimits

0xb13e,	// (0x00015d85) form2_midp_slider_pane_ParamLimits

0x5748,	// (0x0001038f) aid_size_cell_func_vkb2_ParamLimits

0x5748,	// (0x0001038f) aid_size_cell_func_vkb2

0xea96,	// (0x000196dd) slider_pane_g4_ParamLimits

0xea96,	// (0x000196dd) slider_pane_g4

0xe80d,	// (0x00019454) form2_midp_gauge_slider_pane_t2_cp01

0xe81b,	// (0x00019462) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe81b,	// (0x00019462) form2_midp_gauge_slider_pane_t3_cp01

0x5e6f,	// (0x00010ab6) form2_midp_slider_pane_cp01

0x5f12,	// (0x00010b59) navi_smil_pane

0xeb25,	// (0x0001976c) navi_smil_pane_g1

0xeb2d,	// (0x00019774) navi_smil_pane_t1

0xeb03,	// (0x0001974a) form2_midp_slider_pane_g1

0xeb0c,	// (0x00019753) form2_midp_slider_pane_g2

0xeb14,	// (0x0001975b) form2_midp_slider_pane_g3

0xeb03,	// (0x0001974a) form2_midp_slider_pane_g4

0x3b51,	// (0x0000e798) form2_midp_slider_pane_g5

0x0004,

0xfe3a,	// (0x0001aa81) form2_midp_slider_pane_g

0x5e34,	// (0x00010a7b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5e34,	// (0x00010a7b) vkb2_area_bottom_space_btn_pane_g4

0x1aa1,	// (0x0000c6e8) lc0_navi_pane_ParamLimits

0x1aa1,	// (0x0000c6e8) lc0_navi_pane

0x1b0b,	// (0x0000c752) lc0_stat_indi_pane_ParamLimits

0x1b0b,	// (0x0000c752) lc0_stat_indi_pane

0x1b20,	// (0x0000c767) ls0_title_pane_ParamLimits

0x1b20,	// (0x0000c767) ls0_title_pane

0x6ddf,	// (0x00011a26) bg_popup_sub_pane_cp14_ParamLimits

0xd05a,	// (0x00017ca1) list_uniindi_pane_ParamLimits

0xd066,	// (0x00017cad) uniindi_top_pane_ParamLimits

0xd101,	// (0x00017d48) list_single_uniindi_pane_g1_ParamLimits

0xd114,	// (0x00017d5b) list_single_uniindi_pane_t1_ParamLimits

0xe838,	// (0x0001947f) lc0_stat_clock_pane_ParamLimits

0xe838,	// (0x0001947f) lc0_stat_clock_pane

0x3b74,	// (0x0000e7bb) lc0_stat_indi_pane_g1_ParamLimits

0x3b74,	// (0x0000e7bb) lc0_stat_indi_pane_g1

0x3b67,	// (0x0000e7ae) lc0_stat_indi_pane_g2_ParamLimits

0x3b67,	// (0x0000e7ae) lc0_stat_indi_pane_g2

0x0001,

0xfe45,	// (0x0001aa8c) lc0_stat_indi_pane_g_ParamLimits

0xfe45,	// (0x0001aa8c) lc0_stat_indi_pane_g

0xe845,	// (0x0001948c) lc0_uni_indicator_pane_ParamLimits

0xe845,	// (0x0001948c) lc0_uni_indicator_pane

0x3b8e,	// (0x0000e7d5) ls0_title_pane_g1_ParamLimits

0x3b8e,	// (0x0000e7d5) ls0_title_pane_g1

0x3ba2,	// (0x0000e7e9) ls0_title_pane_t1_ParamLimits

0x3ba2,	// (0x0000e7e9) ls0_title_pane_t1

0xe852,	// (0x00019499) lc0_uni_indicator_pane_g1_ParamLimits

0xe852,	// (0x00019499) lc0_uni_indicator_pane_g1

0xeb3b,	// (0x00019782) lc0_stat_clock_pane_t1

0x5f12,	// (0x00010b59) main_ai5_pane

0xeb49,	// (0x00019790) ai5_sk_pane_ParamLimits

0xeb49,	// (0x00019790) ai5_sk_pane

0x3bff,	// (0x0000e846) cell_ai5_widget_pane_ParamLimits

0x3bff,	// (0x0000e846) cell_ai5_widget_pane

0xeb56,	// (0x0001979d) aid_size_cell_widget_grid

0xeb6a,	// (0x000197b1) bg_ai5_widget_pane_ParamLimits

0xeb6a,	// (0x000197b1) bg_ai5_widget_pane

0x3c88,	// (0x0000e8cf) cell_ai5_widget_pane_g2

0x3c98,	// (0x0000e8df) cell_ai5_widget_pane_g3

0x3cac,	// (0x0000e8f3) cell_ai5_widget_pane_g4

0x3cb8,	// (0x0000e8ff) cell_ai5_widget_pane_g5

0x3cc4,	// (0x0000e90b) cell_ai5_widget_pane_g6

0x3cd0,	// (0x0000e917) cell_ai5_widget_pane_g7

0x3d18,	// (0x0000e95f) cell_ai5_widget_pane_t1_ParamLimits

0x3d18,	// (0x0000e95f) cell_ai5_widget_pane_t1

0x3d35,	// (0x0000e97c) cell_ai5_widget_pane_t2_ParamLimits

0x3d35,	// (0x0000e97c) cell_ai5_widget_pane_t2

0x3d4d,	// (0x0000e994) cell_ai5_widget_pane_t3_ParamLimits

0x3d4d,	// (0x0000e994) cell_ai5_widget_pane_t3

0x3d65,	// (0x0000e9ac) cell_ai5_widget_pane_t4_ParamLimits

0x3d65,	// (0x0000e9ac) cell_ai5_widget_pane_t4

0x3d7f,	// (0x0000e9c6) cell_ai5_widget_pane_t5_ParamLimits

0x3d7f,	// (0x0000e9c6) cell_ai5_widget_pane_t5

0xeb76,	// (0x000197bd) cell_ai5_widget_pane_t6_ParamLimits

0xeb76,	// (0x000197bd) cell_ai5_widget_pane_t6

0xeb88,	// (0x000197cf) cell_ai5_widget_pane_t7_ParamLimits

0xeb88,	// (0x000197cf) cell_ai5_widget_pane_t7

0x3d9e,	// (0x0000e9e5) cell_ai5_widget_pane_t8_ParamLimits

0x3d9e,	// (0x0000e9e5) cell_ai5_widget_pane_t8

0x0009,

0xfe5f,	// (0x0001aaa6) cell_ai5_widget_pane_t_ParamLimits

0xfe5f,	// (0x0001aaa6) cell_ai5_widget_pane_t

0x3de6,	// (0x0000ea2d) grid_ai5_widget_pane

0x6ddf,	// (0x00011a26) highlight_cell_ai5_widget_pane_ParamLimits

0x6ddf,	// (0x00011a26) highlight_cell_ai5_widget_pane

0x3dfc,	// (0x0000ea43) ai5_sk_left_pane

0x3e06,	// (0x0000ea4d) ai5_sk_middle_pane

0x3e10,	// (0x0000ea57) ai5_sk_right_pane

0xeba1,	// (0x000197e8) bg_ai5_widget_pane_g1_ParamLimits

0xeba1,	// (0x000197e8) bg_ai5_widget_pane_g1

0xebad,	// (0x000197f4) bg_ai5_widget_pane_g2_ParamLimits

0xebad,	// (0x000197f4) bg_ai5_widget_pane_g2

0xebb9,	// (0x00019800) bg_ai5_widget_pane_g3_ParamLimits

0xebb9,	// (0x00019800) bg_ai5_widget_pane_g3

0xebc5,	// (0x0001980c) bg_ai5_widget_pane_g4_ParamLimits

0xebc5,	// (0x0001980c) bg_ai5_widget_pane_g4

0xebd1,	// (0x00019818) bg_ai5_widget_pane_g5_ParamLimits

0xebd1,	// (0x00019818) bg_ai5_widget_pane_g5

0xebdd,	// (0x00019824) bg_ai5_widget_pane_g6_ParamLimits

0xebdd,	// (0x00019824) bg_ai5_widget_pane_g6

0xebe9,	// (0x00019830) bg_ai5_widget_pane_g7_ParamLimits

0xebe9,	// (0x00019830) bg_ai5_widget_pane_g7

0xebf5,	// (0x0001983c) bg_ai5_widget_pane_g8_ParamLimits

0xebf5,	// (0x0001983c) bg_ai5_widget_pane_g8

0xec01,	// (0x00019848) bg_ai5_widget_pane_g9_ParamLimits

0xec01,	// (0x00019848) bg_ai5_widget_pane_g9

0x0008,

0xfe74,	// (0x0001aabb) bg_ai5_widget_pane_g_ParamLimits

0xfe74,	// (0x0001aabb) bg_ai5_widget_pane_g

0xec34,	// (0x0001987b) cell_shortcut_ai5_widget_pane_ParamLimits

0xec34,	// (0x0001987b) cell_shortcut_ai5_widget_pane

0x60e9,	// (0x00010d30) bg_cell_shortcut_ai5_widget_pane

0xec45,	// (0x0001988c) cell_grid_ai5_widget_pane_g1

0xec4e,	// (0x00019895) highlight_cell_shortcut_ai5_widget_pane

0x8a65,	// (0x000136ac) ai5_sk_left_pane_g1

0xec56,	// (0x0001989d) ai5_sk_left_pane_g2

0xec5e,	// (0x000198a5) ai5_sk_left_pane_g3

0xec66,	// (0x000198ad) ai5_sk_left_pane_g4

0x0003,

0xfe87,	// (0x0001aace) ai5_sk_left_pane_g

0xec6e,	// (0x000198b5) ai5_sk_left_pane_t1

0x8a6d,	// (0x000136b4) ai5_sk_right_pane_g1

0xec7c,	// (0x000198c3) ai5_sk_right_pane_g2

0xec84,	// (0x000198cb) ai5_sk_right_pane_g3

0xec8c,	// (0x000198d3) ai5_sk_right_pane_g4

0x0003,

0xfe90,	// (0x0001aad7) ai5_sk_right_pane_g

0xec94,	// (0x000198db) ai5_sk_right_pane_t1

0x8a6d,	// (0x000136b4) ai5_sk_middle_pane_g1

0x8a65,	// (0x000136ac) ai5_sk_middle_pane_g2

0x8a85,	// (0x000136cc) ai5_sk_middle_pane_g3

0xec84,	// (0x000198cb) ai5_sk_middle_pane_g4

0xec5e,	// (0x000198a5) ai5_sk_middle_pane_g5

0xeca2,	// (0x000198e9) ai5_sk_middle_pane_g6

0x3e1a,	// (0x0000ea61) ai5_sk_middle_pane_g7

0x0006,

0xfe99,	// (0x0001aae0) ai5_sk_middle_pane_g

0x198d,	// (0x0000c5d4) aid_touch_area_size_lc0_ParamLimits

0x198d,	// (0x0000c5d4) aid_touch_area_size_lc0

0x54c3,	// (0x0001010a) cell_hwr_candidate_pane_t1_ParamLimits

0x859c,	// (0x000131e3) aid_touch_navi_pane

0x1c12,	// (0x0000c859) status_dt_navi_pane_ParamLimits

0x1c12,	// (0x0000c859) status_dt_navi_pane

0x1c2a,	// (0x0000c871) status_dt_sta_pane_ParamLimits

0x1c2a,	// (0x0000c871) status_dt_sta_pane

0x3e22,	// (0x0000ea69) dt_sta_controll_pane

0x3e2f,	// (0x0000ea76) dt_sta_indi_pane

0x3e3c,	// (0x0000ea83) dt_sta_title_pane

0x62a9,	// (0x00010ef0) bg_dt_sta_indi_pane_ParamLimits

0x62a9,	// (0x00010ef0) bg_dt_sta_indi_pane

0x3e4e,	// (0x0000ea95) dt_sta_battery_pane

0x3e56,	// (0x0000ea9d) dt_sta_indi_pane_g1

0xecaa,	// (0x000198f1) dt_sta_indi_pane_g2

0xecb3,	// (0x000198fa) dt_sta_indi_pane_g3

0x0002,

0xfea8,	// (0x0001aaef) dt_sta_indi_pane_g

0xecbc,	// (0x00019903) dt_sta_signal_pane

0x6ddf,	// (0x00011a26) bg_dt_sta_title_pane_ParamLimits

0x6ddf,	// (0x00011a26) bg_dt_sta_title_pane

0x9951,	// (0x00014598) dt_sta_title_pane_g1

0x3e5f,	// (0x0000eaa6) dt_sta_title_pane_t1_ParamLimits

0x3e5f,	// (0x0000eaa6) dt_sta_title_pane_t1

0x5f12,	// (0x00010b59) bg_dt_sta_control_pane

0x3e74,	// (0x0000eabb) dt_sta_controll_pane_g1

0xecc5,	// (0x0001990c) bg_dt_sta_title_pane_g1

0xecce,	// (0x00019915) bg_dt_sta_title_pane_g2

0xecd7,	// (0x0001991e) bg_dt_sta_title_pane_g3

0x0002,

0xfeaf,	// (0x0001aaf6) bg_dt_sta_title_pane_g

0xb3fe,	// (0x00016045) bg_dt_sta_indi_pane_g1

0xece0,	// (0x00019927) dt_sta_signal_pane_g1

0xece8,	// (0x0001992f) dt_sta_signal_pane_g2

0x0001,

0xfeb6,	// (0x0001aafd) dt_sta_signal_pane_g

0xecf0,	// (0x00019937) dt_sta_battery_pane_g1

0xecf9,	// (0x00019940) dt_sta_battery_pane_t1

0xb3fe,	// (0x00016045) bg_dt_sta_control_pane_g1

0x769b,	// (0x000122e2) fep_china_uni_eep_pane

0x76a3,	// (0x000122ea) fep_china_uni_entry_pane_ParamLimits

0x76b3,	// (0x000122fa) popup_fep_china_uni_window_g1_ParamLimits

0x76c3,	// (0x0001230a) popup_fep_china_uni_window_g2_ParamLimits

0x76c3,	// (0x0001230a) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001a39f) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001a39f) popup_fep_china_uni_window_g

0xed08,	// (0x0001994f) fep_china_uni_eep_pane_g1

0xed10,	// (0x00019957) fep_china_uni_eep_pane_t1

0xeb1c,	// (0x00019763) aid_touch_area_size_smil_player

0x86ec,	// (0x00013333) lc0_clock_pane

0x88ca,	// (0x00013511) status_pane_g5_ParamLimits

0x88ca,	// (0x00013511) status_pane_g5

0x1459,	// (0x0000c0a0) popup_keymap_window

0x888a,	// (0x000134d1) status_icon_pane

0x3c98,	// (0x0000e8df) cell_ai5_widget_pane_g3_ParamLimits

0x3cac,	// (0x0000e8f3) cell_ai5_widget_pane_g4_ParamLimits

0x3cb8,	// (0x0000e8ff) cell_ai5_widget_pane_g5_ParamLimits

0x3cdc,	// (0x0000e923) cell_ai5_widget_pane_g8_ParamLimits

0x3cdc,	// (0x0000e923) cell_ai5_widget_pane_g8

0x3cf0,	// (0x0000e937) cell_ai5_widget_pane_g9_ParamLimits

0x3cf0,	// (0x0000e937) cell_ai5_widget_pane_g9

0x3d04,	// (0x0000e94b) cell_ai5_widget_pane_g10_ParamLimits

0x3d04,	// (0x0000e94b) cell_ai5_widget_pane_g10

0xed1f,	// (0x00019966) status_icon_pane_g1

0x5f12,	// (0x00010b59) bg_popup_sub_pane_cp13

0xed27,	// (0x0001996e) popup_keymap_window_t1

0x118b,	// (0x0000bdd2) control_pane_g6_ParamLimits

0x118b,	// (0x0000bdd2) control_pane_g6

0x117e,	// (0x0000bdc5) control_pane_g7_ParamLimits

0x117e,	// (0x0000bdc5) control_pane_g7

0x1171,	// (0x0000bdb8) control_pane_g8_ParamLimits

0x1171,	// (0x0000bdb8) control_pane_g8

0x3e22,	// (0x0000ea69) dt_sta_controll_pane_ParamLimits

0x3e2f,	// (0x0000ea76) dt_sta_indi_pane_ParamLimits

0x3e3c,	// (0x0000ea83) dt_sta_title_pane_ParamLimits

0x67ab,	// (0x000113f2) aid_size_touch_scroll_bar_cale

0x4519,	// (0x0000f160) popup_discreet_window_ParamLimits

0x4519,	// (0x0000f160) popup_discreet_window

0xe08f,	// (0x00018cd6) popup_sk_window

0x9183,	// (0x00013dca) bg_popup_sub_pane_cp28_ParamLimits

0x9183,	// (0x00013dca) bg_popup_sub_pane_cp28

0xed35,	// (0x0001997c) popup_discreet_window_g1_ParamLimits

0xed35,	// (0x0001997c) popup_discreet_window_g1

0xed55,	// (0x0001999c) popup_discreet_window_t1_ParamLimits

0xed55,	// (0x0001999c) popup_discreet_window_t1

0xed73,	// (0x000199ba) popup_discreet_window_t2_ParamLimits

0xed73,	// (0x000199ba) popup_discreet_window_t2

0x0002,

0xfebb,	// (0x0001ab02) popup_discreet_window_t_ParamLimits

0xfebb,	// (0x0001ab02) popup_discreet_window_t

0x5ea8,	// (0x00010aef) popup_sk_window_g1

0x5eb2,	// (0x00010af9) popup_sk_window_g2

0x0001,

0xfec2,	// (0x0001ab09) popup_sk_window_g

0xedc5,	// (0x00019a0c) popup_sk_window_t1

0xedd3,	// (0x00019a1a) popup_sk_window_t1_copy1

0x3c88,	// (0x0000e8cf) cell_ai5_widget_pane_g2_ParamLimits

0x3db0,	// (0x0000e9f7) cell_ai5_widget_pane_t9_ParamLimits

0x3db0,	// (0x0000e9f7) cell_ai5_widget_pane_t9

0x5f12,	// (0x00010b59) main_fep_fshwr2_pane

0x3e7d,	// (0x0000eac4) aid_fshwr2_btn_pane

0x3e85,	// (0x0000eacc) aid_fshwr2_syb_pane

0x3e8d,	// (0x0000ead4) aid_fshwr2_txt_pane

0x3e95,	// (0x0000eadc) fshwr2_func_candi_pane

0x3e9f,	// (0x0000eae6) fshwr2_hwr_syb_pane

0x3ead,	// (0x0000eaf4) fshwr2_icf_pane

0x5f12,	// (0x00010b59) fshwr2_icf_bg_pane

0x3eb7,	// (0x0000eafe) fshwr2_icf_pane_t1_ParamLimits

0x3eb7,	// (0x0000eafe) fshwr2_icf_pane_t1

0xb3fe,	// (0x00016045) fshwr2_func_candi_pane_g1

0xedf5,	// (0x00019a3c) fshwr2_func_candi_row_pane_ParamLimits

0xedf5,	// (0x00019a3c) fshwr2_func_candi_row_pane

0x3ed1,	// (0x0000eb18) cell_fshwr2_syb_pane_ParamLimits

0x3ed1,	// (0x0000eb18) cell_fshwr2_syb_pane

0xb6a5,	// (0x000162ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb6a5,	// (0x000162ec) fshwr2_hwr_syb_pane_g1

0x5f12,	// (0x00010b59) bg_popup_call_pane_cp01

0xee06,	// (0x00019a4d) fshwr2_func_candi_cell_pane_ParamLimits

0xee06,	// (0x00019a4d) fshwr2_func_candi_cell_pane

0xee37,	// (0x00019a7e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee37,	// (0x00019a7e) fshwr2_func_candi_cell_bg_pane

0xee51,	// (0x00019a98) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee51,	// (0x00019a98) fshwr2_func_candi_cell_pane_g1

0xee71,	// (0x00019ab8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee71,	// (0x00019ab8) fshwr2_func_candi_cell_pane_t1

0x5f12,	// (0x00010b59) bg_button_pane_cp08

0x7c25,	// (0x0001286c) cell_fshwr2_syb_bg_pane

0x3eeb,	// (0x0000eb32) cell_fshwr2_syb_bg_pane_g1

0xee84,	// (0x00019acb) cell_fshwr2_syb_bg_pane_t1

0x6ddf,	// (0x00011a26) main_tmo_pane

0x2145,	// (0x0000cd8c) uni_indicator_pane_g1_ParamLimits

0x215a,	// (0x0000cda1) uni_indicator_pane_g2_ParamLimits

0x216f,	// (0x0000cdb6) uni_indicator_pane_g3_ParamLimits

0x9cd5,	// (0x0001491c) uni_indicator_pane_g4_ParamLimits

0x9cd5,	// (0x0001491c) uni_indicator_pane_g4

0x9ce9,	// (0x00014930) uni_indicator_pane_g5_ParamLimits

0x9ce9,	// (0x00014930) uni_indicator_pane_g5

0x9cfd,	// (0x00014944) uni_indicator_pane_g6_ParamLimits

0x9cfd,	// (0x00014944) uni_indicator_pane_g6

0xf950,	// (0x0001a597) uni_indicator_pane_g_ParamLimits

0x2ce9,	// (0x0000d930) popup_tmo_note_window_ParamLimits

0x2ce9,	// (0x0000d930) popup_tmo_note_window

0x5f12,	// (0x00010b59) fshwr2_bg_pane

0xee62,	// (0x00019aa9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee62,	// (0x00019aa9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec7,	// (0x0001ab0e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec7,	// (0x0001ab0e) fshwr2_func_candi_cell_pane_g

0xb3fe,	// (0x00016045) bg_popup_window_pane_cp01

0xee93,	// (0x00019ada) bg_popup_window_pane_g1_cp01

0xee9c,	// (0x00019ae3) bg_popup_window_pane_cp22_ParamLimits

0xee9c,	// (0x00019ae3) bg_popup_window_pane_cp22

0xeeaa,	// (0x00019af1) listscroll_tmo_link_pane_ParamLimits

0xeeaa,	// (0x00019af1) listscroll_tmo_link_pane

0xeeea,	// (0x00019b31) popup_tmo_note_window_g1_ParamLimits

0xeeea,	// (0x00019b31) popup_tmo_note_window_g1

0xeef7,	// (0x00019b3e) tmo_note_info_pane_ParamLimits

0xeef7,	// (0x00019b3e) tmo_note_info_pane

0x3ef3,	// (0x0000eb3a) list_tmo_note_info_pane_g1_ParamLimits

0x3ef3,	// (0x0000eb3a) list_tmo_note_info_pane_g1

0xef25,	// (0x00019b6c) list_tmo_note_info_pane_g2_ParamLimits

0xef25,	// (0x00019b6c) list_tmo_note_info_pane_g2

0x0001,

0xfecc,	// (0x0001ab13) list_tmo_note_info_pane_g_ParamLimits

0xfecc,	// (0x0001ab13) list_tmo_note_info_pane_g

0xef41,	// (0x00019b88) list_tmo_note_info_text_pane_ParamLimits

0xef41,	// (0x00019b88) list_tmo_note_info_text_pane

0xef83,	// (0x00019bca) list_tmo_link_pane

0xef90,	// (0x00019bd7) scroll_pane_cp20

0xef9d,	// (0x00019be4) list_single_tmo_link_pane_ParamLimits

0xef9d,	// (0x00019be4) list_single_tmo_link_pane

0xefad,	// (0x00019bf4) list_single_tmo_link_pane_t1

0xefbb,	// (0x00019c02) list_tmo_note_info_text_pane_t1_ParamLimits

0xefbb,	// (0x00019c02) list_tmo_note_info_text_pane_t1

0x0dc4,	// (0x0000ba0b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0dc4,	// (0x0000ba0b) aid_size_touch_scroll_bar_cp01

0x0cdf,	// (0x0000b926) aid_size_touch_slider_marker

0xe07f,	// (0x00018cc6) popup_settings_window_ParamLimits

0xe07f,	// (0x00018cc6) popup_settings_window

0x7fd3,	// (0x00012c1a) popup_candi_list_indi_window

0x859c,	// (0x000131e3) aid_touch_navi_pane_ParamLimits

0x5681,	// (0x000102c8) rs_clock_indi_pane

0x568a,	// (0x000102d1) sctrl_sk_bottom_pane_ParamLimits

0x569b,	// (0x000102e2) sctrl_sk_top_pane_ParamLimits

0x57a2,	// (0x000103e9) popup_fep_tooltip_window

0xeb56,	// (0x0001979d) aid_size_cell_widget_grid_ParamLimits

0x3c7c,	// (0x0000e8c3) cell_ai5_widget_pane_g1_ParamLimits

0x3c7c,	// (0x0000e8c3) cell_ai5_widget_pane_g1

0x3cc4,	// (0x0000e90b) cell_ai5_widget_pane_g6_ParamLimits

0x3cd0,	// (0x0000e917) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4a,	// (0x0001aa91) cell_ai5_widget_pane_g_ParamLimits

0xfe4a,	// (0x0001aa91) cell_ai5_widget_pane_g

0x3dd4,	// (0x0000ea1b) cell_ai5_widget_pane_t10_ParamLimits

0x3dd4,	// (0x0000ea1b) cell_ai5_widget_pane_t10

0x3de6,	// (0x0000ea2d) grid_ai5_widget_pane_ParamLimits

0xec0d,	// (0x00019854) cell_contacts_ai5_widget_pane_ParamLimits

0xec0d,	// (0x00019854) cell_contacts_ai5_widget_pane

0xed88,	// (0x000199cf) popup_discreet_window_t3_ParamLimits

0xed88,	// (0x000199cf) popup_discreet_window_t3

0xede1,	// (0x00019a28) popup_fshwr2_char_preview_window_ParamLimits

0xede1,	// (0x00019a28) popup_fshwr2_char_preview_window

0x3f0a,	// (0x0000eb51) tmo_note_info_pane_t1

0x3f1f,	// (0x0000eb66) tmo_note_info_pane_t2

0x3f38,	// (0x0000eb7f) tmo_note_info_pane_t3

0xef5f,	// (0x00019ba6) tmo_note_info_pane_t4

0xef71,	// (0x00019bb8) tmo_note_info_pane_t5

0x0004,

0xfed1,	// (0x0001ab18) tmo_note_info_pane_t

0xef83,	// (0x00019bca) list_tmo_link_pane_ParamLimits

0xef90,	// (0x00019bd7) scroll_pane_cp20_ParamLimits

0x5f12,	// (0x00010b59) bg_popup_fep_char_preview_window_cp01

0xefd4,	// (0x00019c1b) popup_fshwr2_char_preview_window_t1

0xefe2,	// (0x00019c29) popup_candi_list_indi_window_g1

0xefeb,	// (0x00019c32) bg_cell_contacts_ai5_widget_pane

0xeff7,	// (0x00019c3e) cell_contacts_ai5_widget_pane_g1

0xf00b,	// (0x00019c52) cell_contacts_ai5_widget_pane_g2

0xf01a,	// (0x00019c61) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedc,	// (0x0001ab23) cell_contacts_ai5_widget_pane_g

0xf02d,	// (0x00019c74) cell_contacts_ai5_widget_pane_t1

0x6ddf,	// (0x00011a26) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0a7,	// (0x00019cee) settings_container_pane

0x7c25,	// (0x0001286c) listscroll_set_pane_copy1

0xa8eb,	// (0x00015532) scroll_pane_cp121_copy1

0xf0b3,	// (0x00019cfa) set_content_pane_copy1

0xf0bb,	// (0x00019d02) aid_height_set_list_copy1_ParamLimits

0xf0bb,	// (0x00019d02) aid_height_set_list_copy1

0x9f18,	// (0x00014b5f) aid_size_parent_copy1_ParamLimits

0x9f18,	// (0x00014b5f) aid_size_parent_copy1

0xf0c7,	// (0x00019d0e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0c7,	// (0x00019d0e) button_value_adjust_pane_cp6_copy1

0x7fab,	// (0x00012bf2) list_highlight_pane_cp2_copy1_ParamLimits

0x7fab,	// (0x00012bf2) list_highlight_pane_cp2_copy1

0xf0db,	// (0x00019d22) list_set_pane_copy1_ParamLimits

0xf0db,	// (0x00019d22) list_set_pane_copy1

0xf042,	// (0x00019c89) main_pane_set_t1_copy1_ParamLimits

0xf042,	// (0x00019c89) main_pane_set_t1_copy1

0xf07c,	// (0x00019cc3) main_pane_set_t2_copy1_ParamLimits

0xf07c,	// (0x00019cc3) main_pane_set_t2_copy1

0xf188,	// (0x00019dcf) main_pane_set_t3_copy1

0xf196,	// (0x00019ddd) main_pane_set_t4_copy1

0xf09b,	// (0x00019ce2) set_content_pane_g1_copy1_ParamLimits

0xf09b,	// (0x00019ce2) set_content_pane_g1_copy1

0xf1a4,	// (0x00019deb) setting_code_pane_copy1

0xf1ae,	// (0x00019df5) setting_slider_graphic_pane_copy1

0xf1ae,	// (0x00019df5) setting_slider_pane_copy1

0xf1b8,	// (0x00019dff) setting_text_pane_copy1

0xf1c2,	// (0x00019e09) setting_volume_pane_copy1

0xf1cb,	// (0x00019e12) settings_code_pane_cp2_copy1

0xf1d3,	// (0x00019e1a) settings_code_pane_cp_copy1_ParamLimits

0xf1d3,	// (0x00019e1a) settings_code_pane_cp_copy1

0xf1e7,	// (0x00019e2e) volume_set_pane_copy1

0xf1ef,	// (0x00019e36) volume_set_pane_g10_copy1

0xf1f7,	// (0x00019e3e) volume_set_pane_g1_copy1

0xf1ff,	// (0x00019e46) volume_set_pane_g2_copy1

0xf207,	// (0x00019e4e) volume_set_pane_g3_copy1

0xf20f,	// (0x00019e56) volume_set_pane_g4_copy1

0xf217,	// (0x00019e5e) volume_set_pane_g5_copy1

0xf21f,	// (0x00019e66) volume_set_pane_g6_copy1

0xf227,	// (0x00019e6e) volume_set_pane_g7_copy1

0xf22f,	// (0x00019e76) volume_set_pane_g8_copy1

0xf237,	// (0x00019e7e) volume_set_pane_g9_copy1

0x6006,	// (0x00010c4d) bg_set_opt_pane_cp_copy1_ParamLimits

0x6006,	// (0x00010c4d) bg_set_opt_pane_cp_copy1

0xf23f,	// (0x00019e86) setting_slider_pane_t1_copy1_ParamLimits

0xf23f,	// (0x00019e86) setting_slider_pane_t1_copy1

0xf25d,	// (0x00019ea4) setting_slider_pane_t2_copy1_ParamLimits

0xf25d,	// (0x00019ea4) setting_slider_pane_t2_copy1

0xf277,	// (0x00019ebe) setting_slider_pane_t3_copy1_ParamLimits

0xf277,	// (0x00019ebe) setting_slider_pane_t3_copy1

0xf28f,	// (0x00019ed6) slider_set_pane_copy1_ParamLimits

0xf28f,	// (0x00019ed6) slider_set_pane_copy1

0x6f1b,	// (0x00011b62) set_opt_bg_pane_g1_copy2

0x6f23,	// (0x00011b6a) set_opt_bg_pane_g2_copy2

0xf2a5,	// (0x00019eec) set_opt_bg_pane_g3_copy2

0x6f33,	// (0x00011b7a) set_opt_bg_pane_g4_copy2

0x6f3b,	// (0x00011b82) set_opt_bg_pane_g5_copy2

0x6f43,	// (0x00011b8a) set_opt_bg_pane_g6_copy2

0xf2af,	// (0x00019ef6) set_opt_bg_pane_g7_copy2

0xf2b7,	// (0x00019efe) set_opt_bg_pane_g8_copy2

0xf2c1,	// (0x00019f08) set_opt_bg_pane_g9_copy2

0x5ebc,	// (0x00010b03) aid_size_touch_slider_mark_copy1_ParamLimits

0x5ebc,	// (0x00010b03) aid_size_touch_slider_mark_copy1

0xf2cb,	// (0x00019f12) slider_set_pane_g1_copy1

0x5ed0,	// (0x00010b17) slider_set_pane_g2_copy1

0x506c,	// (0x0000fcb3) slider_set_pane_g3_copy1_ParamLimits

0x506c,	// (0x0000fcb3) slider_set_pane_g3_copy1

0x5080,	// (0x0000fcc7) slider_set_pane_g4_copy1_ParamLimits

0x5080,	// (0x0000fcc7) slider_set_pane_g4_copy1

0x5098,	// (0x0000fcdf) slider_set_pane_g5_copy1_ParamLimits

0x5098,	// (0x0000fcdf) slider_set_pane_g5_copy1

0x506c,	// (0x0000fcb3) slider_set_pane_g6_copy1_ParamLimits

0x506c,	// (0x0000fcb3) slider_set_pane_g6_copy1

0x5ed8,	// (0x00010b1f) slider_set_pane_g7_copy1_ParamLimits

0x5ed8,	// (0x00010b1f) slider_set_pane_g7_copy1

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp2_copy1

0xf2d4,	// (0x00019f1b) setting_slider_graphic_pane_g1_copy1

0xf2dd,	// (0x00019f24) setting_slider_graphic_pane_t1_copy1

0xf2ed,	// (0x00019f34) setting_slider_graphic_pane_t2_copy1

0xf2fd,	// (0x00019f44) slider_set_pane_cp_copy1

0xf30d,	// (0x00019f54) input_focus_pane_cp1_copy1

0xf316,	// (0x00019f5d) list_set_text_pane_copy1

0xf31e,	// (0x00019f65) setting_text_pane_g1_copy1

0xf327,	// (0x00019f6e) set_text_pane_t1_copy1

0xf30d,	// (0x00019f54) input_focus_pane_cp2_copy1

0xf31e,	// (0x00019f65) setting_code_pane_g1_copy1

0xf344,	// (0x00019f8b) setting_code_pane_t1_copy1

0xef11,	// (0x00019b58) list_set_graphic_pane_copy1

0x5f26,	// (0x00010b6d) bg_set_opt_pane_cp4_copy1

0x7927,	// (0x0001256e) list_set_graphic_pane_g1_copy1_ParamLimits

0x7927,	// (0x0001256e) list_set_graphic_pane_g1_copy1

0xf352,	// (0x00019f99) list_set_graphic_pane_g2_copy1

0x793f,	// (0x00012586) list_set_graphic_pane_t1_copy1_ParamLimits

0x793f,	// (0x00012586) list_set_graphic_pane_t1_copy1

0xb3fe,	// (0x00016045) rs_clock_indi_pane_g1

0xf35a,	// (0x00019fa1) rs_clock_indi_pane_t1

0xf368,	// (0x00019faf) rs_indi_pane

0xf370,	// (0x00019fb7) rs_indi_pane_g1

0xf379,	// (0x00019fc0) rs_indi_pane_g2

0xf382,	// (0x00019fc9) rs_indi_pane_g3

0x0002,

0xfee3,	// (0x0001ab2a) rs_indi_pane_g

0x7c25,	// (0x0001286c) bg_popup_preview_window_pane_cp03

0xf38b,	// (0x00019fd2) popup_fep_tooltip_window_t1

0xc28b,	// (0x00016ed2) popup_note2_window_g2_ParamLimits

0xc28b,	// (0x00016ed2) popup_note2_window_g2

0x0001,

0xfc88,	// (0x0001a8cf) popup_note2_window_g_ParamLimits

0xfc88,	// (0x0001a8cf) popup_note2_window_g

0xc86d,	// (0x000174b4) bg_popup_sub_pane_cp11_ParamLimits

0xc87a,	// (0x000174c1) cell_ai3_links_pane_g1_ParamLimits

0xc891,	// (0x000174d8) cell_ai3_links_pane_t1

0xf327,	// (0x00019f6e) set_text_pane_t1_copy1_ParamLimits

0x7b34,	// (0x0001277b) cell_graphic_popup_pane_cp2_ParamLimits

0x7b34,	// (0x0001277b) cell_graphic_popup_pane_cp2

0xf399,	// (0x00019fe0) cell_graphic_popup_pane_g1_cp2

0x65be,	// (0x00011205) cell_graphic_popup_pane_g2_cp2

0xf3a1,	// (0x00019fe8) cell_graphic_popup_pane_g3_cp2

0xf3a9,	// (0x00019ff0) cell_graphic_popup_pane_t2_cp2

0x65cf,	// (0x00011216) grid_highlight_pane_cp3_cp2

0x7301,	// (0x00011f48) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6ddf,	// (0x00011a26) main_tmo_pane_ParamLimits

0x2cdd,	// (0x0000d924) popup_tmo_big_image_note_window

0x3c6c,	// (0x0000e8b3) cell_ai5_widget_list_pane

0x3c74,	// (0x0000e8bb) cell_ai5_widget_lrg_icon_pane

0x3f0a,	// (0x0000eb51) tmo_note_info_pane_t1_ParamLimits

0x3f1f,	// (0x0000eb66) tmo_note_info_pane_t2_ParamLimits

0x3f38,	// (0x0000eb7f) tmo_note_info_pane_t3_ParamLimits

0xef5f,	// (0x00019ba6) tmo_note_info_pane_t4_ParamLimits

0xef71,	// (0x00019bb8) tmo_note_info_pane_t5_ParamLimits

0xfed1,	// (0x0001ab18) tmo_note_info_pane_t_ParamLimits

0xf0a7,	// (0x00019cee) settings_container_pane_ParamLimits

0xf305,	// (0x00019f4c) indicator_popup_pane_cp5

0xf305,	// (0x00019f4c) indicator_popup_pane_cp6

0xef11,	// (0x00019b58) list_set_graphic_pane_copy1_ParamLimits

0x5f12,	// (0x00010b59) bg_popup_window_pane_cp23

0xf3b7,	// (0x00019ffe) popup_tmo_big_image_note_window_g1

0xf3c2,	// (0x0001a009) popup_tmo_big_image_note_window_t1

0xf3d2,	// (0x0001a019) popup_tmo_big_image_note_window_t2

0xf3e2,	// (0x0001a029) popup_tmo_big_image_note_window_t3

0x0002,

0xfeea,	// (0x0001ab31) popup_tmo_big_image_note_window_t

0x3f4d,	// (0x0000eb94) cell_ai5_widget_lrg_icon_pane_g1

0x3f55,	// (0x0000eb9c) cell_ai5_widget_lrg_icon_pane_t1

0x3f63,	// (0x0000ebaa) cell_ai5_widget_list_row_pane_ParamLimits

0x3f63,	// (0x0000ebaa) cell_ai5_widget_list_row_pane

0x3f7c,	// (0x0000ebc3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3f7c,	// (0x0000ebc3) cell_ai5_widget_list_row_pane_g1

0x3f89,	// (0x0000ebd0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3f89,	// (0x0000ebd0) cell_ai5_widget_list_row_pane_t1

0x3fa1,	// (0x0000ebe8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3fa1,	// (0x0000ebe8) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef1,	// (0x0001ab38) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef1,	// (0x0001ab38) cell_ai5_widget_list_row_pane_t

0x4440,	// (0x0000f087) main_fep_vtchi_ss_pane

0xf3f2,	// (0x0001a039) popup_fep_char_pre_window

0xf3fa,	// (0x0001a041) popup_fep_ituss_window

0xf405,	// (0x0001a04c) popup_fep_vkbss_window

0xf40e,	// (0x0001a055) grid_vkbss_keypad_pane_ParamLimits

0xf40e,	// (0x0001a055) grid_vkbss_keypad_pane

0xf41e,	// (0x0001a065) ituss_keypad_pane

0xf426,	// (0x0001a06d) aid_vkbss_key_offset_ParamLimits

0xf426,	// (0x0001a06d) aid_vkbss_key_offset

0xf435,	// (0x0001a07c) cell_vkbss_key_pane_ParamLimits

0xf435,	// (0x0001a07c) cell_vkbss_key_pane

0xf44b,	// (0x0001a092) bg_cell_vkbss_key_g1_ParamLimits

0xf44b,	// (0x0001a092) bg_cell_vkbss_key_g1

0xf457,	// (0x0001a09e) cell_vkbss_key_3p_pane_ParamLimits

0xf457,	// (0x0001a09e) cell_vkbss_key_3p_pane

0xf471,	// (0x0001a0b8) cell_vkbss_key_g1_ParamLimits

0xf471,	// (0x0001a0b8) cell_vkbss_key_g1

0xf48b,	// (0x0001a0d2) cell_vkbss_key_t1_ParamLimits

0xf48b,	// (0x0001a0d2) cell_vkbss_key_t1

0xf4b6,	// (0x0001a0fd) cell_ituss_key_pane_ParamLimits

0xf4b6,	// (0x0001a0fd) cell_ituss_key_pane

0xf4c5,	// (0x0001a10c) bg_cell_ituss_key_g1_ParamLimits

0xf4c5,	// (0x0001a10c) bg_cell_ituss_key_g1

0xf4d1,	// (0x0001a118) cell_ituss_key_pane_g1_ParamLimits

0xf4d1,	// (0x0001a118) cell_ituss_key_pane_g1

0xf4dd,	// (0x0001a124) cell_ituss_key_pane_g2_ParamLimits

0xf4dd,	// (0x0001a124) cell_ituss_key_pane_g2

0x0001,

0xfef6,	// (0x0001ab3d) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x0001ab3d) cell_ituss_key_pane_g

0xf4f0,	// (0x0001a137) cell_ituss_key_t1_ParamLimits

0xf4f0,	// (0x0001a137) cell_ituss_key_t1

0xf50e,	// (0x0001a155) cell_ituss_key_t2_ParamLimits

0xf50e,	// (0x0001a155) cell_ituss_key_t2

0xf52d,	// (0x0001a174) cell_ituss_key_t3_ParamLimits

0xf52d,	// (0x0001a174) cell_ituss_key_t3

0xf54c,	// (0x0001a193) cell_ituss_key_t4_ParamLimits

0xf54c,	// (0x0001a193) cell_ituss_key_t4

0x0003,

0xfefb,	// (0x0001ab42) cell_ituss_key_t_ParamLimits

0xfefb,	// (0x0001ab42) cell_ituss_key_t

0xf56b,	// (0x0001a1b2) cell_vkbss_key_3p_pane_g1

0xf573,	// (0x0001a1ba) cell_vkbss_key_3p_pane_g2

0xf57b,	// (0x0001a1c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xff04,	// (0x0001ab4b) cell_vkbss_key_3p_pane_g

0x5f12,	// (0x00010b59) bg_popup_fep_char_preview_window_cp02

0xf583,	// (0x0001a1ca) popup_fep_char_pre_window_t1

0x3c62,	// (0x0000e8a9) main_ai5_sk_pane

0xefeb,	// (0x00019c32) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeff7,	// (0x00019c3e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf00b,	// (0x00019c52) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf01a,	// (0x00019c61) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedc,	// (0x0001ab23) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf02d,	// (0x00019c74) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6ddf,	// (0x00011a26) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3fb3,	// (0x0000ebfa) main_ai5_sk_pane_g1
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

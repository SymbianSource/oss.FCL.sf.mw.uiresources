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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000cea6 };

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
0x6f2a,	// (0x00013dd0) Screen

0x6f36,	// (0x00013ddc) application_window_ParamLimits

0x6f36,	// (0x00013ddc) application_window

0x33f3,	// (0x00010299) screen_g1

0x5182,	// (0x00012028) area_bottom_pane_ParamLimits

0x5182,	// (0x00012028) area_bottom_pane

0x5242,	// (0x000120e8) area_top_pane_ParamLimits

0x5242,	// (0x000120e8) area_top_pane

0x52e0,	// (0x00012186) main_pane_ParamLimits

0x52e0,	// (0x00012186) main_pane

0x356c,	// (0x00010412) misc_graphics

0x888a,	// (0x00015730) battery_pane_ParamLimits

0x888a,	// (0x00015730) battery_pane

0x9657,	// (0x000164fd) bg_status_flat_pane_g8

0x965f,	// (0x00016505) bg_status_flat_pane_g9

0x8952,	// (0x000157f8) context_pane_ParamLimits

0x8952,	// (0x000157f8) context_pane

0x8a76,	// (0x0001591c) navi_pane_ParamLimits

0x8a76,	// (0x0001591c) navi_pane

0x8b06,	// (0x000159ac) signal_pane_ParamLimits

0x8b06,	// (0x000159ac) signal_pane

0x0008,

0xf87a,	// (0x0001c720) bg_status_flat_pane_g

0x8b73,	// (0x00015a19) status_pane_g1_ParamLimits

0x8b73,	// (0x00015a19) status_pane_g1

0x8b87,	// (0x00015a2d) status_pane_g2_ParamLimits

0x8b87,	// (0x00015a2d) status_pane_g2

0x8b93,	// (0x00015a39) status_pane_g3_ParamLimits

0x8b93,	// (0x00015a39) status_pane_g3

0x0004,

0xf7a1,	// (0x0001c647) status_pane_g_ParamLimits

0xf7a1,	// (0x0001c647) status_pane_g

0x8bc7,	// (0x00015a6d) title_pane_ParamLimits

0x8bc7,	// (0x00015a6d) title_pane

0x8c04,	// (0x00015aaa) uni_indicator_pane_ParamLimits

0x8c04,	// (0x00015aaa) uni_indicator_pane

0x816b,	// (0x00015011) bg_list_pane_ParamLimits

0x816b,	// (0x00015011) bg_list_pane

0x818b,	// (0x00015031) find_pane

0x8193,	// (0x00015039) listscroll_app_pane_ParamLimits

0x8193,	// (0x00015039) listscroll_app_pane

0x819f,	// (0x00015045) listscroll_form_pane

0x81a7,	// (0x0001504d) listscroll_gen_pane_ParamLimits

0x81a7,	// (0x0001504d) listscroll_gen_pane

0x81bb,	// (0x00015061) listscroll_set_pane

0x786e,	// (0x00014714) main_idle_act_pane

0x7e4b,	// (0x00014cf1) main_idle_trad_pane

0x7e4b,	// (0x00014cf1) main_list_empty_pane

0x81d5,	// (0x0001507b) main_midp_pane

0x81e1,	// (0x00015087) main_pane_g1_ParamLimits

0x81e1,	// (0x00015087) main_pane_g1

0x81ef,	// (0x00015095) popup_ai_message_window_ParamLimits

0x81ef,	// (0x00015095) popup_ai_message_window

0x82ab,	// (0x00015151) popup_fep_china_uni_window_ParamLimits

0x82ab,	// (0x00015151) popup_fep_china_uni_window

0x830b,	// (0x000151b1) popup_fep_japan_candidate_window_ParamLimits

0x830b,	// (0x000151b1) popup_fep_japan_candidate_window

0x8335,	// (0x000151db) popup_fep_japan_predictive_window_ParamLimits

0x8335,	// (0x000151db) popup_fep_japan_predictive_window

0x836b,	// (0x00015211) popup_find_window

0x8378,	// (0x0001521e) popup_grid_graphic_window_ParamLimits

0x8378,	// (0x0001521e) popup_grid_graphic_window

0x83a6,	// (0x0001524c) popup_large_graphic_colour_window

0x83cc,	// (0x00015272) popup_menu_window_ParamLimits

0x83cc,	// (0x00015272) popup_menu_window

0x8596,	// (0x0001543c) popup_note_image_window

0x8580,	// (0x00015426) popup_note_wait_window_ParamLimits

0x8580,	// (0x00015426) popup_note_wait_window

0x8580,	// (0x00015426) popup_note_window_ParamLimits

0x8580,	// (0x00015426) popup_note_window

0x85fc,	// (0x000154a2) popup_query_code_window_ParamLimits

0x85fc,	// (0x000154a2) popup_query_code_window

0x8612,	// (0x000154b8) popup_query_data_code_window_ParamLimits

0x8612,	// (0x000154b8) popup_query_data_code_window

0x8635,	// (0x000154db) popup_query_data_window_ParamLimits

0x8635,	// (0x000154db) popup_query_data_window

0x8657,	// (0x000154fd) popup_query_sat_info_window_ParamLimits

0x8657,	// (0x000154fd) popup_query_sat_info_window

0x8696,	// (0x0001553c) popup_snote_single_graphic_window_ParamLimits

0x8696,	// (0x0001553c) popup_snote_single_graphic_window

0x8696,	// (0x0001553c) popup_snote_single_text_window_ParamLimits

0x8696,	// (0x0001553c) popup_snote_single_text_window

0x86ad,	// (0x00015553) popup_sub_window_general

0x87f3,	// (0x00015699) popup_window_general_ParamLimits

0x87f3,	// (0x00015699) popup_window_general

0x880c,	// (0x000156b2) power_save_pane

0x5a62,	// (0x00012908) control_pane_g1_ParamLimits

0x5a62,	// (0x00012908) control_pane_g1

0x5a8b,	// (0x00012931) control_pane_g2_ParamLimits

0x5a8b,	// (0x00012931) control_pane_g2

0x810c,	// (0x00014fb2) control_pane_g3_ParamLimits

0x810c,	// (0x00014fb2) control_pane_g3

0x0007,

0xf789,	// (0x0001c62f) control_pane_g_ParamLimits

0xf789,	// (0x0001c62f) control_pane_g

0x5ad3,	// (0x00012979) control_pane_t1_ParamLimits

0x5ad3,	// (0x00012979) control_pane_t1

0x5b1f,	// (0x000129c5) control_pane_t2_ParamLimits

0x5b1f,	// (0x000129c5) control_pane_t2

0x0002,

0xf79a,	// (0x0001c640) control_pane_t_ParamLimits

0xf79a,	// (0x0001c640) control_pane_t

0x802d,	// (0x00014ed3) navi_navi_volume_pane_cp1

0x8036,	// (0x00014edc) status_small_icon_pane

0x803e,	// (0x00014ee4) status_small_pane_g1_ParamLimits

0x803e,	// (0x00014ee4) status_small_pane_g1

0x8072,	// (0x00014f18) status_small_pane_g2_ParamLimits

0x8072,	// (0x00014f18) status_small_pane_g2

0x807e,	// (0x00014f24) status_small_pane_g3_ParamLimits

0x807e,	// (0x00014f24) status_small_pane_g3

0x808a,	// (0x00014f30) status_small_pane_g4_ParamLimits

0x808a,	// (0x00014f30) status_small_pane_g4

0x8096,	// (0x00014f3c) status_small_pane_g5_ParamLimits

0x8096,	// (0x00014f3c) status_small_pane_g5

0x80a5,	// (0x00014f4b) status_small_pane_g6_ParamLimits

0x80a5,	// (0x00014f4b) status_small_pane_g6

0x0007,

0xf778,	// (0x0001c61e) status_small_pane_g_ParamLimits

0xf778,	// (0x0001c61e) status_small_pane_g

0x80d5,	// (0x00014f7b) status_small_pane_t1

0x80f8,	// (0x00014f9e) status_small_wait_pane_ParamLimits

0x80f8,	// (0x00014f9e) status_small_wait_pane

0x799d,	// (0x00014843) aid_levels_signal_ParamLimits

0x799d,	// (0x00014843) aid_levels_signal

0x79af,	// (0x00014855) signal_pane_g1_ParamLimits

0x79af,	// (0x00014855) signal_pane_g1

0x79c4,	// (0x0001486a) signal_pane_g2_ParamLimits

0x79c4,	// (0x0001486a) signal_pane_g2

0x0003,

0xf709,	// (0x0001c5af) signal_pane_g_ParamLimits

0xf709,	// (0x0001c5af) signal_pane_g

0x45b3,	// (0x00011459) context_pane_g1

0x6f46,	// (0x00013dec) title_pane_g1

0x6f64,	// (0x00013e0a) title_pane_t1

0x35e2,	// (0x00010488) title_pane_t2

0x3608,	// (0x000104ae) title_pane_t3

0x0002,

0xf55d,	// (0x0001c403) title_pane_t

0x8c1c,	// (0x00015ac2) aid_levels_battery_ParamLimits

0x8c1c,	// (0x00015ac2) aid_levels_battery

0x8c30,	// (0x00015ad6) battery_pane_g1_ParamLimits

0x8c30,	// (0x00015ad6) battery_pane_g1

0x8c46,	// (0x00015aec) battery_pane_g2_ParamLimits

0x8c46,	// (0x00015aec) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001c652) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001c652) battery_pane_g

0x9fa1,	// (0x00016e47) uni_indicator_pane_g1

0x9fb8,	// (0x00016e5e) uni_indicator_pane_g2

0x9fce,	// (0x00016e74) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0001c7c8) uni_indicator_pane_g

0x7cb9,	// (0x00014b5f) navi_icon_pane_ParamLimits

0x7cb9,	// (0x00014b5f) navi_icon_pane

0x7c00,	// (0x00014aa6) navi_midp_pane

0x7cd5,	// (0x00014b7b) navi_navi_pane

0x7cdf,	// (0x00014b85) navi_text_pane_ParamLimits

0x7cdf,	// (0x00014b85) navi_text_pane

0x33f3,	// (0x00010299) status_small_wait_pane_g1

0x39b0,	// (0x00010856) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0001c7c3) status_small_wait_pane_g

0x9cb4,	// (0x00016b5a) navi_navi_icon_text_pane

0x9cbc,	// (0x00016b62) navi_navi_pane_g1_ParamLimits

0x9cbc,	// (0x00016b62) navi_navi_pane_g1

0x9cce,	// (0x00016b74) navi_navi_pane_g2_ParamLimits

0x9cce,	// (0x00016b74) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001c791) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001c791) navi_navi_pane_g

0x9ce0,	// (0x00016b86) navi_navi_tabs_pane

0x9ce9,	// (0x00016b8f) navi_navi_text_pane

0x9cb4,	// (0x00016b5a) navi_navi_volume_pane

0x9c90,	// (0x00016b36) navi_text_pane_t1

0x9c84,	// (0x00016b2a) navi_icon_pane_g1

0x9bd7,	// (0x00016a7d) navi_navi_text_pane_t1

0x5ebc,	// (0x00012d62) navi_navi_volume_pane_g1

0x5ec4,	// (0x00012d6a) volume_small_pane

0x9b3d,	// (0x000169e3) navi_navi_icon_text_pane_g1

0x9b45,	// (0x000169eb) navi_navi_icon_text_pane_t1

0x7cd5,	// (0x00014b7b) navi_tabs_2_long_pane

0x7cd5,	// (0x00014b7b) navi_tabs_2_pane

0x7cd5,	// (0x00014b7b) navi_tabs_3_long_pane

0x7cd5,	// (0x00014b7b) navi_tabs_3_pane

0x7cd5,	// (0x00014b7b) navi_tabs_4_pane

0x5e9c,	// (0x00012d42) tabs_2_active_pane_ParamLimits

0x5e9c,	// (0x00012d42) tabs_2_active_pane

0x5eac,	// (0x00012d52) tabs_2_passive_pane_ParamLimits

0x5eac,	// (0x00012d52) tabs_2_passive_pane

0x5e6a,	// (0x00012d10) tabs_3_active_pane_ParamLimits

0x5e6a,	// (0x00012d10) tabs_3_active_pane

0x5e7a,	// (0x00012d20) tabs_3_passive_pane_ParamLimits

0x5e7a,	// (0x00012d20) tabs_3_passive_pane

0x5e8b,	// (0x00012d31) tabs_3_passive_pane_cp_ParamLimits

0x5e8b,	// (0x00012d31) tabs_3_passive_pane_cp

0x5e1e,	// (0x00012cc4) tabs_4_active_pane_ParamLimits

0x5e1e,	// (0x00012cc4) tabs_4_active_pane

0x5e31,	// (0x00012cd7) tabs_4_passive_pane_ParamLimits

0x5e31,	// (0x00012cd7) tabs_4_passive_pane

0x5e42,	// (0x00012ce8) tabs_4_passive_pane_cp_ParamLimits

0x5e42,	// (0x00012ce8) tabs_4_passive_pane_cp

0x5e53,	// (0x00012cf9) tabs_4_passive_pane_cp2_ParamLimits

0x5e53,	// (0x00012cf9) tabs_4_passive_pane_cp2

0x5dfa,	// (0x00012ca0) tabs_2_long_active_pane_ParamLimits

0x5dfa,	// (0x00012ca0) tabs_2_long_active_pane

0x5e0c,	// (0x00012cb2) tabs_2_long_passive_pane_ParamLimits

0x5e0c,	// (0x00012cb2) tabs_2_long_passive_pane

0x5dbb,	// (0x00012c61) tabs_3_long_active_pane_ParamLimits

0x5dbb,	// (0x00012c61) tabs_3_long_active_pane

0x5dce,	// (0x00012c74) tabs_3_long_passive_pane_ParamLimits

0x5dce,	// (0x00012c74) tabs_3_long_passive_pane

0x5de7,	// (0x00012c8d) tabs_3_long_passive_pane_cp_ParamLimits

0x5de7,	// (0x00012c8d) tabs_3_long_passive_pane_cp

0x5d61,	// (0x00012c07) volume_small_pane_g1

0x5d6a,	// (0x00012c10) volume_small_pane_g2

0x5d73,	// (0x00012c19) volume_small_pane_g3

0x5d7c,	// (0x00012c22) volume_small_pane_g4

0x5d85,	// (0x00012c2b) volume_small_pane_g5

0x5d8e,	// (0x00012c34) volume_small_pane_g6

0x5d97,	// (0x00012c3d) volume_small_pane_g7

0x5da0,	// (0x00012c46) volume_small_pane_g8

0x5da9,	// (0x00012c4f) volume_small_pane_g9

0x5db2,	// (0x00012c58) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0001c75d) volume_small_pane_g

0x3632,	// (0x000104d8) bg_active_tab_pane_cp2_ParamLimits

0x3632,	// (0x000104d8) bg_active_tab_pane_cp2

0x6fcc,	// (0x00013e72) tabs_3_active_pane_g1

0x6fd4,	// (0x00013e7a) tabs_3_active_pane_t1

0x3632,	// (0x000104d8) bg_passive_tab_pane_cp2_ParamLimits

0x3632,	// (0x000104d8) bg_passive_tab_pane_cp2

0x6fcc,	// (0x00013e72) tabs_3_passive_pane_g1

0x6fd4,	// (0x00013e7a) tabs_3_passive_pane_t1

0x3632,	// (0x000104d8) bg_active_tab_pane_cp3_ParamLimits

0x3632,	// (0x000104d8) bg_active_tab_pane_cp3

0x6fe6,	// (0x00013e8c) tabs_4_active_pane_g1

0x6fee,	// (0x00013e94) tabs_4_active_pane_t1

0x3632,	// (0x000104d8) bg_passive_tab_pane_cp3_ParamLimits

0x3632,	// (0x000104d8) bg_passive_tab_pane_cp3

0x6fe6,	// (0x00013e8c) tabs_4_1_passive_pane_g1

0x6fee,	// (0x00013e94) tabs_4_1_passive_pane_t1

0x81d5,	// (0x0001507b) list_highlight_pane_cp2

0xa245,	// (0x000170eb) list_set_pane_ParamLimits

0xa245,	// (0x000170eb) list_set_pane

0xa30d,	// (0x000171b3) main_pane_set_t1_ParamLimits

0xa30d,	// (0x000171b3) main_pane_set_t1

0xa32d,	// (0x000171d3) main_pane_set_t2_ParamLimits

0xa32d,	// (0x000171d3) main_pane_set_t2

0xa341,	// (0x000171e7) main_pane_set_t3_ParamLimits

0xa341,	// (0x000171e7) main_pane_set_t3

0xa355,	// (0x000171fb) main_pane_set_t4_ParamLimits

0xa355,	// (0x000171fb) main_pane_set_t4

0x0003,

0xf987,	// (0x0001c82d) main_pane_set_t_ParamLimits

0xf987,	// (0x0001c82d) main_pane_set_t

0xa369,	// (0x0001720f) setting_code_pane

0xa373,	// (0x00017219) setting_slider_graphic_pane

0xa373,	// (0x00017219) setting_slider_pane

0xa373,	// (0x00017219) setting_text_pane

0xa373,	// (0x00017219) setting_volume_pane

0x553f,	// (0x000123e5) volume_set_pane

0x3632,	// (0x000104d8) bg_set_opt_pane_cp

0x5549,	// (0x000123ef) setting_slider_pane_t1

0x5562,	// (0x00012408) setting_slider_pane_t2

0x557c,	// (0x00012422) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001c40a) setting_slider_pane_t

0x5594,	// (0x0001243a) slider_set_pane

0x356c,	// (0x00010412) bg_set_opt_pane_cp2

0x36a1,	// (0x00010547) setting_slider_graphic_pane_g1

0x55aa,	// (0x00012450) setting_slider_graphic_pane_t1

0x55ba,	// (0x00012460) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001c411) setting_slider_graphic_pane_t

0x55ca,	// (0x00012470) slider_set_pane_cp

0x356c,	// (0x00010412) input_focus_pane_cp1

0xa206,	// (0x000170ac) list_set_text_pane

0x33f3,	// (0x00010299) setting_text_pane_g1

0x356c,	// (0x00010412) input_focus_pane_cp2

0x33f3,	// (0x00010299) setting_code_pane_g1

0x36d2,	// (0x00010578) setting_code_pane_t1

0x36e0,	// (0x00010586) set_text_pane_t1_ParamLimits

0x36e0,	// (0x00010586) set_text_pane_t1

0x3e39,	// (0x00010cdf) set_opt_bg_pane_g1

0x3e41,	// (0x00010ce7) set_opt_bg_pane_g2

0xa1de,	// (0x00017084) set_opt_bg_pane_g3

0x3e51,	// (0x00010cf7) set_opt_bg_pane_g4

0x3e7d,	// (0x00010d23) set_opt_bg_pane_g5

0x3e85,	// (0x00010d2b) set_opt_bg_pane_g6

0xa1e8,	// (0x0001708e) set_opt_bg_pane_g7

0xa1f2,	// (0x00017098) set_opt_bg_pane_g8

0xa1fc,	// (0x000170a2) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0001c81a) set_opt_bg_pane_g

0xa1d1,	// (0x00017077) slider_set_pane_g1

0x5f45,	// (0x00012deb) slider_set_pane_g2

0x0006,

0xf965,	// (0x0001c80b) slider_set_pane_g

0x5ecd,	// (0x00012d73) volume_set_pane_g1

0x5ed7,	// (0x00012d7d) volume_set_pane_g2

0x5ee1,	// (0x00012d87) volume_set_pane_g3

0x5eeb,	// (0x00012d91) volume_set_pane_g4

0x5ef5,	// (0x00012d9b) volume_set_pane_g5

0x5eff,	// (0x00012da5) volume_set_pane_g6

0x5f09,	// (0x00012daf) volume_set_pane_g7

0x5f13,	// (0x00012db9) volume_set_pane_g8

0x5f1d,	// (0x00012dc3) volume_set_pane_g9

0x5f27,	// (0x00012dcd) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0001c7e3) volume_set_pane_g

0x7000,	// (0x00013ea6) indicator_pane_ParamLimits

0x7000,	// (0x00013ea6) indicator_pane

0x700c,	// (0x00013eb2) main_idle_pane_g2_ParamLimits

0x700c,	// (0x00013eb2) main_idle_pane_g2

0x7034,	// (0x00013eda) main_pane_idle_g1_ParamLimits

0x7034,	// (0x00013eda) main_pane_idle_g1

0x36fa,	// (0x000105a0) popup_clock_digital_analogue_window_ParamLimits

0x36fa,	// (0x000105a0) popup_clock_digital_analogue_window

0x7042,	// (0x00013ee8) soft_indicator_pane_ParamLimits

0x7042,	// (0x00013ee8) soft_indicator_pane

0x7050,	// (0x00013ef6) wallpaper_pane_ParamLimits

0x7050,	// (0x00013ef6) wallpaper_pane

0x33f3,	// (0x00010299) wallpaper_pane_g1

0x705c,	// (0x00013f02) indicator_pane_g1_ParamLimits

0x705c,	// (0x00013f02) indicator_pane_g1

0xa6a2,	// (0x00017548) navi_navi_icon_text_pane_srt_g1

0x3728,	// (0x000105ce) soft_indicator_pane_t1

0x3742,	// (0x000105e8) aid_ps_area_pane

0x7068,	// (0x00013f0e) aid_ps_clock_pane

0x3753,	// (0x000105f9) aid_ps_indicator_pane

0x375f,	// (0x00010605) indicator_ps_pane_ParamLimits

0x375f,	// (0x00010605) indicator_ps_pane

0x376e,	// (0x00010614) power_save_pane_g1_ParamLimits

0x376e,	// (0x00010614) power_save_pane_g1

0x377a,	// (0x00010620) power_save_pane_g2_ParamLimits

0x377a,	// (0x00010620) power_save_pane_g2

0x5136,	// (0x00011fdc) aid_navinavi_width_pane

0x3742,	// (0x000105e8) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001c416) power_save_pane_g_ParamLimits

0xf570,	// (0x0001c416) power_save_pane_g

0x3788,	// (0x0001062e) power_save_pane_t1_ParamLimits

0x3788,	// (0x0001062e) power_save_pane_t1

0x7068,	// (0x00013f0e) aid_ps_clock_pane_ParamLimits

0x3753,	// (0x000105f9) aid_ps_indicator_pane_ParamLimits

0x379a,	// (0x00010640) power_save_pane_t4_ParamLimits

0x379a,	// (0x00010640) power_save_pane_t4

0x0001,

0xf575,	// (0x0001c41b) power_save_pane_t_ParamLimits

0xf575,	// (0x0001c41b) power_save_pane_t

0x37c4,	// (0x0001066a) power_save_t3_ParamLimits

0x37c4,	// (0x0001066a) power_save_t3

0x37af,	// (0x00010655) power_save_t2_ParamLimits

0x37af,	// (0x00010655) power_save_t2

0x37d9,	// (0x0001067f) indicator_ps_pane_g1

0x7076,	// (0x00013f1c) ai_gene_pane_ParamLimits

0x7076,	// (0x00013f1c) ai_gene_pane

0x7082,	// (0x00013f28) ai_links_pane_ParamLimits

0x7082,	// (0x00013f28) ai_links_pane

0x708e,	// (0x00013f34) indicator_pane_cp1_ParamLimits

0x708e,	// (0x00013f34) indicator_pane_cp1

0x709a,	// (0x00013f40) main_pane_idle_g1_cp_ParamLimits

0x709a,	// (0x00013f40) main_pane_idle_g1_cp

0x37e2,	// (0x00010688) popup_ai_links_title_window

0x70a6,	// (0x00013f4c) soft_indicator_pane_cp1_ParamLimits

0x70a6,	// (0x00013f4c) soft_indicator_pane_cp1

0x9f8f,	// (0x00016e35) ai_links_pane_g1

0x9f98,	// (0x00016e3e) grid_ai_links_pane

0x9f74,	// (0x00016e1a) ai_gene_pane_1

0x9f7d,	// (0x00016e23) ai_gene_pane_2

0x9f86,	// (0x00016e2c) list_highlight_pane_cp4

0x9f54,	// (0x00016dfa) cell_ai_link_pane_ParamLimits

0x9f54,	// (0x00016dfa) cell_ai_link_pane

0x9f4c,	// (0x00016df2) cell_ai_link_pane_g1

0x39b0,	// (0x00010856) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0001c7be) cell_ai_link_pane_g

0x356c,	// (0x00010412) grid_highlight_cp2

0x356c,	// (0x00010412) bg_popup_sub_pane_cp1

0x37f9,	// (0x0001069f) popup_ai_links_title_window_t1

0x9e98,	// (0x00016d3e) ai_gene_pane_1_g1_ParamLimits

0x9e98,	// (0x00016d3e) ai_gene_pane_1_g1

0x9ea4,	// (0x00016d4a) ai_gene_pane_1_g2_ParamLimits

0x9ea4,	// (0x00016d4a) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001c7b4) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001c7b4) ai_gene_pane_1_g

0x9eb1,	// (0x00016d57) ai_gene_pane_1_t1_ParamLimits

0x9eb1,	// (0x00016d57) ai_gene_pane_1_t1

0x9ee5,	// (0x00016d8b) grid_ai_soft_ind_pane

0x9e83,	// (0x00016d29) ai_gene_pane_2_t1_ParamLimits

0x9e83,	// (0x00016d29) ai_gene_pane_2_t1

0x70b2,	// (0x00013f58) main_pane_empty_t1_ParamLimits

0x70b2,	// (0x00013f58) main_pane_empty_t1

0x70ca,	// (0x00013f70) main_pane_empty_t2_ParamLimits

0x70ca,	// (0x00013f70) main_pane_empty_t2

0x70df,	// (0x00013f85) main_pane_empty_t3_ParamLimits

0x70df,	// (0x00013f85) main_pane_empty_t3

0x70f1,	// (0x00013f97) main_pane_empty_t4_ParamLimits

0x70f1,	// (0x00013f97) main_pane_empty_t4

0x7103,	// (0x00013fa9) main_pane_empty_t5_ParamLimits

0x7103,	// (0x00013fa9) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001c420) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001c420) main_pane_empty_t

0x3edd,	// (0x00010d83) bg_popup_window_pane_ParamLimits

0x3edd,	// (0x00010d83) bg_popup_window_pane

0x9be5,	// (0x00016a8b) find_popup_pane_cp2_ParamLimits

0x9be5,	// (0x00016a8b) find_popup_pane_cp2

0x9bf1,	// (0x00016a97) heading_pane_ParamLimits

0x9bf1,	// (0x00016a97) heading_pane

0x356c,	// (0x00010412) bg_popup_sub_pane

0x9b5f,	// (0x00016a05) bg_popup_window_pane_g1_ParamLimits

0x9b5f,	// (0x00016a05) bg_popup_window_pane_g1

0x9b6b,	// (0x00016a11) bg_popup_window_pane_g2_ParamLimits

0x9b6b,	// (0x00016a11) bg_popup_window_pane_g2

0x9b77,	// (0x00016a1d) bg_popup_window_pane_g3_ParamLimits

0x9b77,	// (0x00016a1d) bg_popup_window_pane_g3

0x9b83,	// (0x00016a29) bg_popup_window_pane_g4_ParamLimits

0x9b83,	// (0x00016a29) bg_popup_window_pane_g4

0x9b8f,	// (0x00016a35) bg_popup_window_pane_g5_ParamLimits

0x9b8f,	// (0x00016a35) bg_popup_window_pane_g5

0x9b9b,	// (0x00016a41) bg_popup_window_pane_g6_ParamLimits

0x9b9b,	// (0x00016a41) bg_popup_window_pane_g6

0x9ba7,	// (0x00016a4d) bg_popup_window_pane_g7_ParamLimits

0x9ba7,	// (0x00016a4d) bg_popup_window_pane_g7

0x9bb3,	// (0x00016a59) bg_popup_window_pane_g8_ParamLimits

0x9bb3,	// (0x00016a59) bg_popup_window_pane_g8

0x9bbf,	// (0x00016a65) bg_popup_window_pane_g9_ParamLimits

0x9bbf,	// (0x00016a65) bg_popup_window_pane_g9

0x9bcb,	// (0x00016a71) bg_popup_window_pane_g10_ParamLimits

0x9bcb,	// (0x00016a71) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0001c77c) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0001c77c) bg_popup_window_pane_g

0x9af4,	// (0x0001699a) bg_popup_heading_pane_ParamLimits

0x9af4,	// (0x0001699a) bg_popup_heading_pane

0x5fcd,	// (0x00012e73) tabs_4_passive_pane_cp_srt_ParamLimits

0x5fcd,	// (0x00012e73) tabs_4_passive_pane_cp_srt

0x5fdf,	// (0x00012e85) tabs_4_passive_pane_srt_ParamLimits

0x9b08,	// (0x000169ae) heading_pane_g2

0x5fdf,	// (0x00012e85) tabs_4_passive_pane_srt

0x81d5,	// (0x0001507b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x81d5,	// (0x0001507b) bg_passive_tab_pane_cp3_srt

0x9b10,	// (0x000169b6) heading_pane_t1_ParamLimits

0x9b10,	// (0x000169b6) heading_pane_t1

0x9b27,	// (0x000169cd) heading_pane_t2_ParamLimits

0x9b27,	// (0x000169cd) heading_pane_t2

0x0001,

0xf8d1,	// (0x0001c777) heading_pane_t_ParamLimits

0xf8d1,	// (0x0001c777) heading_pane_t

0x961f,	// (0x000164c5) bg_popup_heading_pane_g1

0x96ce,	// (0x00016574) bg_popup_heading_pane_g2

0x96d8,	// (0x0001657e) bg_popup_heading_pane_g3

0x96e2,	// (0x00016588) bg_popup_heading_pane_g4

0x96ec,	// (0x00016592) bg_popup_heading_pane_g5

0x96f6,	// (0x0001659c) bg_popup_heading_pane_g6

0x96fe,	// (0x000165a4) bg_popup_heading_pane_g7

0x9706,	// (0x000165ac) bg_popup_heading_pane_g8

0x9710,	// (0x000165b6) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001c733) bg_popup_heading_pane_g

0x8d4c,	// (0x00015bf2) bg_popup_sub_pane_g1

0x8d5c,	// (0x00015c02) bg_popup_sub_pane_g2

0x8d54,	// (0x00015bfa) bg_popup_sub_pane_g3

0x8d6c,	// (0x00015c12) bg_popup_sub_pane_g4

0x8d64,	// (0x00015c0a) bg_popup_sub_pane_g5

0x8d74,	// (0x00015c1a) bg_popup_sub_pane_g6

0x8d7c,	// (0x00015c22) bg_popup_sub_pane_g7

0x8d8c,	// (0x00015c32) bg_popup_sub_pane_g8

0x8d84,	// (0x00015c2a) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0001c70d) bg_popup_sub_pane_g

0x361a,	// (0x000104c0) bg_popup_window_pane_cp5_ParamLimits

0x361a,	// (0x000104c0) bg_popup_window_pane_cp5

0x3816,	// (0x000106bc) popup_note_window_g1_ParamLimits

0x3816,	// (0x000106bc) popup_note_window_g1

0x3822,	// (0x000106c8) popup_note_window_t1_ParamLimits

0x3822,	// (0x000106c8) popup_note_window_t1

0x3838,	// (0x000106de) popup_note_window_t2_ParamLimits

0x3838,	// (0x000106de) popup_note_window_t2

0x384e,	// (0x000106f4) popup_note_window_t3_ParamLimits

0x384e,	// (0x000106f4) popup_note_window_t3

0x3864,	// (0x0001070a) popup_note_window_t4_ParamLimits

0x3864,	// (0x0001070a) popup_note_window_t4

0x388c,	// (0x00010732) popup_note_window_t5_ParamLimits

0x388c,	// (0x00010732) popup_note_window_t5

0x0004,

0xf585,	// (0x0001c42b) popup_note_window_t_ParamLimits

0xf585,	// (0x0001c42b) popup_note_window_t

0x38b0,	// (0x00010756) bg_popup_window_pane_cp6_ParamLimits

0x38b0,	// (0x00010756) bg_popup_window_pane_cp6

0x959b,	// (0x00016441) popup_note_image_window_g1_ParamLimits

0x959b,	// (0x00016441) popup_note_image_window_g1

0x95a7,	// (0x0001644d) popup_note_image_window_g2_ParamLimits

0x95a7,	// (0x0001644d) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0001c701) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0001c701) popup_note_image_window_g

0x95c0,	// (0x00016466) popup_note_image_window_t1_ParamLimits

0x95c0,	// (0x00016466) popup_note_image_window_t1

0x95d9,	// (0x0001647f) popup_note_image_window_t2_ParamLimits

0x95d9,	// (0x0001647f) popup_note_image_window_t2

0x95f2,	// (0x00016498) popup_note_image_window_t3_ParamLimits

0x95f2,	// (0x00016498) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0001c706) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0001c706) popup_note_image_window_t

0x945b,	// (0x00016301) bg_popup_window_pane_cp7_ParamLimits

0x945b,	// (0x00016301) bg_popup_window_pane_cp7

0x948b,	// (0x00016331) popup_note_wait_window_g1_ParamLimits

0x948b,	// (0x00016331) popup_note_wait_window_g1

0x9497,	// (0x0001633d) popup_note_wait_window_g2_ParamLimits

0x9497,	// (0x0001633d) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0001c6ef) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0001c6ef) popup_note_wait_window_g

0x94af,	// (0x00016355) popup_note_wait_window_t1_ParamLimits

0x94af,	// (0x00016355) popup_note_wait_window_t1

0x94d6,	// (0x0001637c) popup_note_wait_window_t2_ParamLimits

0x94d6,	// (0x0001637c) popup_note_wait_window_t2

0x94f4,	// (0x0001639a) popup_note_wait_window_t3_ParamLimits

0x94f4,	// (0x0001639a) popup_note_wait_window_t3

0x9507,	// (0x000163ad) popup_note_wait_window_t4_ParamLimits

0x9507,	// (0x000163ad) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0001c6f6) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0001c6f6) popup_note_wait_window_t

0x952c,	// (0x000163d2) wait_bar_pane_ParamLimits

0x952c,	// (0x000163d2) wait_bar_pane

0x356c,	// (0x00010412) wait_anim_pane

0x356c,	// (0x00010412) wait_border_pane

0x33f3,	// (0x00010299) wait_anim_pane_g1

0x33f3,	// (0x00010299) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001c5aa) wait_anim_pane_g

0x93ff,	// (0x000162a5) wait_border_pane_g1

0x940a,	// (0x000162b0) wait_border_pane_g2

0x9413,	// (0x000162b9) wait_border_pane_g3

0x0002,

0xf842,	// (0x0001c6e8) wait_border_pane_g

0x9269,	// (0x0001610f) bg_popup_window_pane_cp16_ParamLimits

0x9269,	// (0x0001610f) bg_popup_window_pane_cp16

0x9369,	// (0x0001620f) indicator_popup_pane_cp4_ParamLimits

0x9369,	// (0x0001620f) indicator_popup_pane_cp4

0x937d,	// (0x00016223) popup_query_data_window_t1_ParamLimits

0x937d,	// (0x00016223) popup_query_data_window_t1

0x938f,	// (0x00016235) popup_query_data_window_t2_ParamLimits

0x938f,	// (0x00016235) popup_query_data_window_t2

0x93a8,	// (0x0001624e) popup_query_data_window_t3_ParamLimits

0x93a8,	// (0x0001624e) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0001c6e1) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0001c6e1) popup_query_data_window_t

0x93c2,	// (0x00016268) query_popup_data_pane_ParamLimits

0x93c2,	// (0x00016268) query_popup_data_pane

0x93d6,	// (0x0001627c) query_popup_data_pane_cp1_ParamLimits

0x93d6,	// (0x0001627c) query_popup_data_pane_cp1

0x9269,	// (0x0001610f) bg_popup_window_pane_cp10_ParamLimits

0x9269,	// (0x0001610f) bg_popup_window_pane_cp10

0x929b,	// (0x00016141) indicator_popup_pane_ParamLimits

0x929b,	// (0x00016141) indicator_popup_pane

0x92bd,	// (0x00016163) popup_query_code_window_t1_ParamLimits

0x92bd,	// (0x00016163) popup_query_code_window_t1

0x92d7,	// (0x0001617d) popup_query_code_window_t2_ParamLimits

0x92d7,	// (0x0001617d) popup_query_code_window_t2

0x9320,	// (0x000161c6) popup_query_code_window_t3_ParamLimits

0x9320,	// (0x000161c6) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0001c6da) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0001c6da) popup_query_code_window_t

0x934f,	// (0x000161f5) query_popup_pane_ParamLimits

0x934f,	// (0x000161f5) query_popup_pane

0x38b0,	// (0x00010756) bg_popup_window_pane_cp15_ParamLimits

0x38b0,	// (0x00010756) bg_popup_window_pane_cp15

0x38d0,	// (0x00010776) indicator_popup_pane_cp1_ParamLimits

0x38d0,	// (0x00010776) indicator_popup_pane_cp1

0x38e3,	// (0x00010789) indicator_popup_pane_cp2_ParamLimits

0x38e3,	// (0x00010789) indicator_popup_pane_cp2

0x38fe,	// (0x000107a4) popup_query_data_code_window_g1_ParamLimits

0x38fe,	// (0x000107a4) popup_query_data_code_window_g1

0x3911,	// (0x000107b7) popup_query_data_code_window_t1_ParamLimits

0x3911,	// (0x000107b7) popup_query_data_code_window_t1

0x3923,	// (0x000107c9) popup_query_data_code_window_t2_ParamLimits

0x3923,	// (0x000107c9) popup_query_data_code_window_t2

0x3935,	// (0x000107db) popup_query_data_code_window_t3_ParamLimits

0x3935,	// (0x000107db) popup_query_data_code_window_t3

0x394b,	// (0x000107f1) popup_query_data_code_window_t4_ParamLimits

0x394b,	// (0x000107f1) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001c436) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001c436) popup_query_data_code_window_t

0x5c6d,	// (0x00012b13) list_single_midp_graphic_pane_g3

0x3965,	// (0x0001080b) query_popup_data_pane_cp2_ParamLimits

0x3978,	// (0x0001081e) query_popup_pane_cp2_ParamLimits

0x3978,	// (0x0001081e) query_popup_pane_cp2

0x356c,	// (0x00010412) bg_popup_window_pane_cp11

0x9261,	// (0x00016107) heading_pane_cp5

0x3a0e,	// (0x000108b4) listscroll_popup_info_pane

0x356c,	// (0x00010412) input_focus_pane_cp3

0x3993,	// (0x00010839) query_popup_pane_t1

0x39a1,	// (0x00010847) list_popup_info_pane_ParamLimits

0x39a1,	// (0x00010847) list_popup_info_pane

0x39b0,	// (0x00010856) listscroll_popup_info_pane_g1

0x39b8,	// (0x0001085e) scroll_pane_cp7

0x39c2,	// (0x00010868) popup_info_list_pane_t1_ParamLimits

0x39c2,	// (0x00010868) popup_info_list_pane_t1

0x39dc,	// (0x00010882) popup_info_list_pane_t2_ParamLimits

0x39dc,	// (0x00010882) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001c43f) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001c43f) popup_info_list_pane_t

0x356c,	// (0x00010412) bg_popup_window_pane_cp12

0xa6bc,	// (0x00017562) find_popup_pane

0x3632,	// (0x000104d8) bg_popup_window_pane_cp3

0x39f6,	// (0x0001089c) heading_pane_cp3

0x3a02,	// (0x000108a8) listscroll_popup_graphic_pane

0x356c,	// (0x00010412) bg_popup_window_pane_cp4

0x7165,	// (0x0001400b) heading_pane_cp4

0x3a0e,	// (0x000108b4) listscroll_popup_colour_pane

0x716f,	// (0x00014015) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x716f,	// (0x00014015) cell_large_graphic_colour_none_popup_pane

0x7183,	// (0x00014029) grid_large_graphic_colour_popup_pane_ParamLimits

0x7183,	// (0x00014029) grid_large_graphic_colour_popup_pane

0x71af,	// (0x00014055) listscroll_popup_colour_pane_g1_ParamLimits

0x71af,	// (0x00014055) listscroll_popup_colour_pane_g1

0x71c6,	// (0x0001406c) listscroll_popup_colour_pane_g2_ParamLimits

0x71c6,	// (0x0001406c) listscroll_popup_colour_pane_g2

0x71dd,	// (0x00014083) listscroll_popup_colour_pane_g3_ParamLimits

0x71dd,	// (0x00014083) listscroll_popup_colour_pane_g3

0x71ed,	// (0x00014093) listscroll_popup_colour_pane_g4_ParamLimits

0x71ed,	// (0x00014093) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001c444) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001c444) listscroll_popup_colour_pane_g

0x3a16,	// (0x000108bc) scroll_pane_cp6_ParamLimits

0x3a16,	// (0x000108bc) scroll_pane_cp6

0x7201,	// (0x000140a7) cell_large_graphic_colour_popup_pane_ParamLimits

0x7201,	// (0x000140a7) cell_large_graphic_colour_popup_pane

0x3a28,	// (0x000108ce) cell_large_graphic_colour_none_popup_pane_t1

0x356c,	// (0x00010412) grid_highlight_pane_cp5

0x3a37,	// (0x000108dd) cell_large_graphic_colour_popup_pane_g1

0x3a3f,	// (0x000108e5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001c44d) cell_large_graphic_colour_popup_pane_g

0x3a47,	// (0x000108ed) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a50,	// (0x000108f6) grid_highlight_pane_cp4

0x3a58,	// (0x000108fe) bg_popup_window_pane_cp8_ParamLimits

0x3a58,	// (0x000108fe) bg_popup_window_pane_cp8

0x3a73,	// (0x00010919) popup_snote_single_text_window_g1_ParamLimits

0x3a73,	// (0x00010919) popup_snote_single_text_window_g1

0x3a85,	// (0x0001092b) popup_snote_single_text_window_t1_ParamLimits

0x3a85,	// (0x0001092b) popup_snote_single_text_window_t1

0x3a98,	// (0x0001093e) popup_snote_single_text_window_t2_ParamLimits

0x3a98,	// (0x0001093e) popup_snote_single_text_window_t2

0x3aab,	// (0x00010951) popup_snote_single_text_window_t3_ParamLimits

0x3aab,	// (0x00010951) popup_snote_single_text_window_t3

0x3ae4,	// (0x0001098a) popup_snote_single_text_window_t4_ParamLimits

0x3ae4,	// (0x0001098a) popup_snote_single_text_window_t4

0x3b18,	// (0x000109be) popup_snote_single_text_window_t5_ParamLimits

0x3b18,	// (0x000109be) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001c452) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001c452) popup_snote_single_text_window_t

0x3b47,	// (0x000109ed) bg_popup_window_pane_cp9_ParamLimits

0x3b47,	// (0x000109ed) bg_popup_window_pane_cp9

0x3a73,	// (0x00010919) popup_snote_single_graphic_window_g1_ParamLimits

0x3a73,	// (0x00010919) popup_snote_single_graphic_window_g1

0x3b55,	// (0x000109fb) popup_snote_single_graphic_window_g2_ParamLimits

0x3b55,	// (0x000109fb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001c45d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001c45d) popup_snote_single_graphic_window_g

0x3b61,	// (0x00010a07) popup_snote_single_graphic_window_t1_ParamLimits

0x3b61,	// (0x00010a07) popup_snote_single_graphic_window_t1

0x3b74,	// (0x00010a1a) popup_snote_single_graphic_window_t2_ParamLimits

0x3b74,	// (0x00010a1a) popup_snote_single_graphic_window_t2

0x3b87,	// (0x00010a2d) popup_snote_single_graphic_window_t3_ParamLimits

0x3b87,	// (0x00010a2d) popup_snote_single_graphic_window_t3

0x3bc0,	// (0x00010a66) popup_snote_single_graphic_window_t4_ParamLimits

0x3bc0,	// (0x00010a66) popup_snote_single_graphic_window_t4

0x3bf4,	// (0x00010a9a) popup_snote_single_graphic_window_t5_ParamLimits

0x3bf4,	// (0x00010a9a) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001c462) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001c462) popup_snote_single_graphic_window_t

0xa5fa,	// (0x000174a0) grid_graphic_popup_pane_ParamLimits

0xa5fa,	// (0x000174a0) grid_graphic_popup_pane

0xa628,	// (0x000174ce) listscroll_popup_graphic_pane_g1_ParamLimits

0xa628,	// (0x000174ce) listscroll_popup_graphic_pane_g1

0xa63c,	// (0x000174e2) listscroll_popup_graphic_pane_g2_ParamLimits

0xa63c,	// (0x000174e2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0001c857) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0001c857) listscroll_popup_graphic_pane_g

0xa650,	// (0x000174f6) scroll_pane_cp5

0xa5a2,	// (0x00017448) cell_graphic_popup_pane_ParamLimits

0xa5a2,	// (0x00017448) cell_graphic_popup_pane

0xa583,	// (0x00017429) cell_graphic_popup_pane_g1

0xa58b,	// (0x00017431) cell_graphic_popup_pane_g2

0x3a47,	// (0x000108ed) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001c850) cell_graphic_popup_pane_g

0xa594,	// (0x0001743a) cell_graphic_popup_pane_t2

0x3a50,	// (0x000108f6) grid_highlight_pane_cp3

0x3c35,	// (0x00010adb) list_gen_pane_ParamLimits

0x3c35,	// (0x00010adb) list_gen_pane

0x3c5d,	// (0x00010b03) scroll_pane

0xa4db,	// (0x00017381) bg_list_pane_g1_ParamLimits

0xa4db,	// (0x00017381) bg_list_pane_g1

0xa4f8,	// (0x0001739e) bg_list_pane_g2_ParamLimits

0xa4f8,	// (0x0001739e) bg_list_pane_g2

0xa50d,	// (0x000173b3) bg_list_pane_g3_ParamLimits

0xa50d,	// (0x000173b3) bg_list_pane_g3

0xa521,	// (0x000173c7) bg_list_pane_g4_ParamLimits

0xa521,	// (0x000173c7) bg_list_pane_g4

0xa535,	// (0x000173db) bg_list_pane_g5_ParamLimits

0xa535,	// (0x000173db) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001c845) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001c845) bg_list_pane_g

0xa42c,	// (0x000172d2) list_double2_graphic_large_graphic_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double2_graphic_large_graphic_pane

0xa42c,	// (0x000172d2) list_double2_graphic_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double2_graphic_pane

0xa42c,	// (0x000172d2) list_double2_large_graphic_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double2_large_graphic_pane

0xa42c,	// (0x000172d2) list_double2_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double2_pane

0xa42c,	// (0x000172d2) list_double_graphic_heading_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_graphic_heading_pane

0xa42c,	// (0x000172d2) list_double_graphic_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_graphic_pane

0xa42c,	// (0x000172d2) list_double_heading_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_heading_pane

0xa42c,	// (0x000172d2) list_double_large_graphic_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_large_graphic_pane

0xa42c,	// (0x000172d2) list_double_number_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_number_pane

0xa42c,	// (0x000172d2) list_double_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_pane

0xa42c,	// (0x000172d2) list_double_time_pane_ParamLimits

0xa42c,	// (0x000172d2) list_double_time_pane

0xa42c,	// (0x000172d2) list_setting_number_pane_ParamLimits

0xa42c,	// (0x000172d2) list_setting_number_pane

0xa42c,	// (0x000172d2) list_setting_pane_ParamLimits

0xa42c,	// (0x000172d2) list_setting_pane

0xa46b,	// (0x00017311) list_single_2graphic_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_2graphic_pane

0xa46b,	// (0x00017311) list_single_graphic_heading_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_graphic_heading_pane

0xa46b,	// (0x00017311) list_single_graphic_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_graphic_pane

0xa46b,	// (0x00017311) list_single_heading_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_heading_pane

0xa4c3,	// (0x00017369) list_single_large_graphic_pane_ParamLimits

0xa4c3,	// (0x00017369) list_single_large_graphic_pane

0xa46b,	// (0x00017311) list_single_number_heading_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_number_heading_pane

0xa46b,	// (0x00017311) list_single_number_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_number_pane

0xa46b,	// (0x00017311) list_single_pane_ParamLimits

0xa46b,	// (0x00017311) list_single_pane

0x356c,	// (0x00010412) list_highlight_pane_cp1

0x3e71,	// (0x00010d17) list_single_pane_g1_ParamLimits

0x3e71,	// (0x00010d17) list_single_pane_g1

0x7230,	// (0x000140d6) list_single_pane_g2_ParamLimits

0x7230,	// (0x000140d6) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001c474) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001c474) list_single_pane_g

0xa3e5,	// (0x0001728b) list_single_pane_t1_ParamLimits

0xa3e5,	// (0x0001728b) list_single_pane_t1

0x3e71,	// (0x00010d17) list_single_number_pane_g1_ParamLimits

0x3e71,	// (0x00010d17) list_single_number_pane_g1

0x7230,	// (0x000140d6) list_single_number_pane_g2_ParamLimits

0x7230,	// (0x000140d6) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001c474) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001c474) list_single_number_pane_g

0xa14d,	// (0x00016ff3) list_single_number_pane_t1_ParamLimits

0xa14d,	// (0x00016ff3) list_single_number_pane_t1

0xa163,	// (0x00017009) list_single_number_pane_t2_ParamLimits

0xa163,	// (0x00017009) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0001c806) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0001c806) list_single_number_pane_t

0x3e65,	// (0x00010d0b) list_single_graphic_pane_g1_ParamLimits

0x3e65,	// (0x00010d0b) list_single_graphic_pane_g1

0x3e71,	// (0x00010d17) list_single_graphic_pane_g2_ParamLimits

0x3e71,	// (0x00010d17) list_single_graphic_pane_g2

0x7230,	// (0x000140d6) list_single_graphic_pane_g3_ParamLimits

0x7230,	// (0x000140d6) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001c46d) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001c46d) list_single_graphic_pane_g

0x723c,	// (0x000140e2) list_single_graphic_pane_t1_ParamLimits

0x723c,	// (0x000140e2) list_single_graphic_pane_t1

0x3e71,	// (0x00010d17) list_single_heading_pane_g1_ParamLimits

0x3e71,	// (0x00010d17) list_single_heading_pane_g1

0x7230,	// (0x000140d6) list_single_heading_pane_g2_ParamLimits

0x7230,	// (0x000140d6) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c474) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c474) list_single_heading_pane_g

0x7252,	// (0x000140f8) list_single_heading_pane_t1_ParamLimits

0x7252,	// (0x000140f8) list_single_heading_pane_t1

0x7268,	// (0x0001410e) list_single_heading_pane_t2_ParamLimits

0x7268,	// (0x0001410e) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001c479) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001c479) list_single_heading_pane_t

0x3e71,	// (0x00010d17) list_single_number_heading_pane_g1_ParamLimits

0x3e71,	// (0x00010d17) list_single_number_heading_pane_g1

0x7230,	// (0x000140d6) list_single_number_heading_pane_g2_ParamLimits

0x7230,	// (0x000140d6) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001c474) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001c474) list_single_number_heading_pane_g

0x7252,	// (0x000140f8) list_single_number_heading_pane_t1_ParamLimits

0x7252,	// (0x000140f8) list_single_number_heading_pane_t1

0x727a,	// (0x00014120) list_single_number_heading_pane_t2_ParamLimits

0x727a,	// (0x00014120) list_single_number_heading_pane_t2

0x728c,	// (0x00014132) list_single_number_heading_pane_t3_ParamLimits

0x728c,	// (0x00014132) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001c47e) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001c47e) list_single_number_heading_pane_t

0x729e,	// (0x00014144) list_single_graphic_heading_pane_g1_ParamLimits

0x729e,	// (0x00014144) list_single_graphic_heading_pane_g1

0x72aa,	// (0x00014150) list_single_graphic_heading_pane_g4_ParamLimits

0x72aa,	// (0x00014150) list_single_graphic_heading_pane_g4

0x7230,	// (0x000140d6) list_single_graphic_heading_pane_g5_ParamLimits

0x7230,	// (0x000140d6) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001c485) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001c485) list_single_graphic_heading_pane_g

0x7252,	// (0x000140f8) list_single_graphic_heading_pane_t1_ParamLimits

0x7252,	// (0x000140f8) list_single_graphic_heading_pane_t1

0x72bb,	// (0x00014161) list_single_graphic_heading_pane_t2_ParamLimits

0x72bb,	// (0x00014161) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001c48c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001c48c) list_single_graphic_heading_pane_t

0x72cd,	// (0x00014173) list_single_large_graphic_pane_g1_ParamLimits

0x72cd,	// (0x00014173) list_single_large_graphic_pane_g1

0x72d9,	// (0x0001417f) list_single_large_graphic_pane_g2_ParamLimits

0x72d9,	// (0x0001417f) list_single_large_graphic_pane_g2

0x72e5,	// (0x0001418b) list_single_large_graphic_pane_g3_ParamLimits

0x72e5,	// (0x0001418b) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001c491) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001c491) list_single_large_graphic_pane_g

0x940a,	// (0x000162b0) wait_border_pane_g2_copy1

0x72f1,	// (0x00014197) list_single_large_graphic_pane_g4_cp2

0x72f9,	// (0x0001419f) list_single_large_graphic_pane_t1_ParamLimits

0x72f9,	// (0x0001419f) list_single_large_graphic_pane_t1

0x730f,	// (0x000141b5) list_double_pane_g1_ParamLimits

0x730f,	// (0x000141b5) list_double_pane_g1

0x731b,	// (0x000141c1) list_double_pane_g2_ParamLimits

0x731b,	// (0x000141c1) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001c498) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001c498) list_double_pane_g

0x7327,	// (0x000141cd) list_double_pane_t1_ParamLimits

0x7327,	// (0x000141cd) list_double_pane_t1

0x733d,	// (0x000141e3) list_double_pane_t2_ParamLimits

0x733d,	// (0x000141e3) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001c49d) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001c49d) list_double_pane_t

0x734f,	// (0x000141f5) list_double2_pane_g1_ParamLimits

0x734f,	// (0x000141f5) list_double2_pane_g1

0x7360,	// (0x00014206) list_double2_pane_g2_ParamLimits

0x7360,	// (0x00014206) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001c4a2) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001c4a2) list_double2_pane_g

0x736c,	// (0x00014212) list_double2_pane_t1_ParamLimits

0x736c,	// (0x00014212) list_double2_pane_t1

0x7382,	// (0x00014228) list_double2_pane_t2_ParamLimits

0x7382,	// (0x00014228) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001c4a7) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001c4a7) list_double2_pane_t

0x730f,	// (0x000141b5) list_double_number_pane_g1_ParamLimits

0x730f,	// (0x000141b5) list_double_number_pane_g1

0x731b,	// (0x000141c1) list_double_number_pane_g2_ParamLimits

0x731b,	// (0x000141c1) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001c498) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001c498) list_double_number_pane_g

0x7394,	// (0x0001423a) list_double_number_pane_t1_ParamLimits

0x7394,	// (0x0001423a) list_double_number_pane_t1

0x73a6,	// (0x0001424c) list_double_number_pane_t2_ParamLimits

0x73a6,	// (0x0001424c) list_double_number_pane_t2

0x73bc,	// (0x00014262) list_double_number_pane_t3_ParamLimits

0x73bc,	// (0x00014262) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001c4ac) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001c4ac) list_double_number_pane_t

0x73ce,	// (0x00014274) list_double_graphic_pane_g1_ParamLimits

0x73ce,	// (0x00014274) list_double_graphic_pane_g1

0x73da,	// (0x00014280) list_double_graphic_pane_g2_ParamLimits

0x73da,	// (0x00014280) list_double_graphic_pane_g2

0x3e59,	// (0x00010cff) list_double_graphic_pane_g3_ParamLimits

0x3e59,	// (0x00010cff) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001c4b3) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001c4b3) list_double_graphic_pane_g

0x73f5,	// (0x0001429b) list_double_graphic_pane_t1_ParamLimits

0x73f5,	// (0x0001429b) list_double_graphic_pane_t1

0x740b,	// (0x000142b1) list_double_graphic_pane_t2_ParamLimits

0x740b,	// (0x000142b1) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001c4bc) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001c4bc) list_double_graphic_pane_t

0x741d,	// (0x000142c3) list_double2_graphic_pane_g1_ParamLimits

0x741d,	// (0x000142c3) list_double2_graphic_pane_g1

0x7429,	// (0x000142cf) list_double2_graphic_pane_g2_ParamLimits

0x7429,	// (0x000142cf) list_double2_graphic_pane_g2

0x7360,	// (0x00014206) list_double2_graphic_pane_g3_ParamLimits

0x7360,	// (0x00014206) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001c4c1) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001c4c1) list_double2_graphic_pane_g

0x7435,	// (0x000142db) list_double2_graphic_pane_t1_ParamLimits

0x7435,	// (0x000142db) list_double2_graphic_pane_t1

0x744b,	// (0x000142f1) list_double2_graphic_pane_t2_ParamLimits

0x744b,	// (0x000142f1) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001c4c8) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001c4c8) list_double2_graphic_pane_t

0x745d,	// (0x00014303) list_double_large_graphic_pane_g1_ParamLimits

0x745d,	// (0x00014303) list_double_large_graphic_pane_g1

0x7488,	// (0x0001432e) list_double_large_graphic_pane_g2_ParamLimits

0x7488,	// (0x0001432e) list_double_large_graphic_pane_g2

0x731b,	// (0x000141c1) list_double_large_graphic_pane_g3_ParamLimits

0x731b,	// (0x000141c1) list_double_large_graphic_pane_g3

0x7499,	// (0x0001433f) list_double_large_graphic_pane_g4_ParamLimits

0x7499,	// (0x0001433f) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001c4cd) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001c4cd) list_double_large_graphic_pane_g

0x74ac,	// (0x00014352) list_double_large_graphic_pane_t1_ParamLimits

0x74ac,	// (0x00014352) list_double_large_graphic_pane_t1

0x74c5,	// (0x0001436b) list_double_large_graphic_pane_t2_ParamLimits

0x74c5,	// (0x0001436b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001c4d8) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001c4d8) list_double_large_graphic_pane_t

0x74d7,	// (0x0001437d) list_double2_large_graphic_pane_g1_ParamLimits

0x74d7,	// (0x0001437d) list_double2_large_graphic_pane_g1

0x734f,	// (0x000141f5) list_double2_large_graphic_pane_g2_ParamLimits

0x734f,	// (0x000141f5) list_double2_large_graphic_pane_g2

0x7360,	// (0x00014206) list_double2_large_graphic_pane_g3_ParamLimits

0x7360,	// (0x00014206) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001c4dd) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001c4dd) list_double2_large_graphic_pane_g

0x74e3,	// (0x00014389) list_double2_large_graphic_pane_t1_ParamLimits

0x74e3,	// (0x00014389) list_double2_large_graphic_pane_t1

0x74f9,	// (0x0001439f) list_double2_large_graphic_pane_t2_ParamLimits

0x74f9,	// (0x0001439f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001c4e4) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001c4e4) list_double2_large_graphic_pane_t

0x750b,	// (0x000143b1) list_double_heading_pane_g1_ParamLimits

0x750b,	// (0x000143b1) list_double_heading_pane_g1

0x751c,	// (0x000143c2) list_double_heading_pane_g2_ParamLimits

0x751c,	// (0x000143c2) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001c4e9) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001c4e9) list_double_heading_pane_g

0x7528,	// (0x000143ce) list_double_heading_pane_t1_ParamLimits

0x7528,	// (0x000143ce) list_double_heading_pane_t1

0x753e,	// (0x000143e4) list_double_heading_pane_t2_ParamLimits

0x753e,	// (0x000143e4) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001c4ee) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001c4ee) list_double_heading_pane_t

0x3c91,	// (0x00010b37) list_double_graphic_heading_pane_g1_ParamLimits

0x3c91,	// (0x00010b37) list_double_graphic_heading_pane_g1

0x750b,	// (0x000143b1) list_double_graphic_heading_pane_g2_ParamLimits

0x750b,	// (0x000143b1) list_double_graphic_heading_pane_g2

0x751c,	// (0x000143c2) list_double_graphic_heading_pane_g3_ParamLimits

0x751c,	// (0x000143c2) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001c4f3) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001c4f3) list_double_graphic_heading_pane_g

0x7550,	// (0x000143f6) list_double_graphic_heading_pane_t1_ParamLimits

0x7550,	// (0x000143f6) list_double_graphic_heading_pane_t1

0x7566,	// (0x0001440c) list_double_graphic_heading_pane_t2_ParamLimits

0x7566,	// (0x0001440c) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001c4fa) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001c4fa) list_double_graphic_heading_pane_t

0x7488,	// (0x0001432e) list_double_time_pane_g1_ParamLimits

0x7488,	// (0x0001432e) list_double_time_pane_g1

0x731b,	// (0x000141c1) list_double_time_pane_g2_ParamLimits

0x731b,	// (0x000141c1) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001c4ff) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001c4ff) list_double_time_pane_g

0x7578,	// (0x0001441e) list_double_time_pane_t1_ParamLimits

0x7578,	// (0x0001441e) list_double_time_pane_t1

0x758e,	// (0x00014434) list_double_time_pane_t2_ParamLimits

0x758e,	// (0x00014434) list_double_time_pane_t2

0x75a0,	// (0x00014446) list_double_time_pane_t3_ParamLimits

0x75a0,	// (0x00014446) list_double_time_pane_t3

0x75b2,	// (0x00014458) list_double_time_pane_t4_ParamLimits

0x75b2,	// (0x00014458) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001c504) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001c504) list_double_time_pane_t

0x7429,	// (0x000142cf) list_setting_pane_g1_ParamLimits

0x7429,	// (0x000142cf) list_setting_pane_g1

0x7360,	// (0x00014206) list_setting_pane_g2_ParamLimits

0x7360,	// (0x00014206) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001c50d) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001c50d) list_setting_pane_g

0x75c4,	// (0x0001446a) list_setting_pane_t1_ParamLimits

0x75c4,	// (0x0001446a) list_setting_pane_t1

0x75db,	// (0x00014481) list_setting_pane_t2_ParamLimits

0x75db,	// (0x00014481) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001c512) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001c512) list_setting_pane_t

0x761a,	// (0x000144c0) set_value_pane_cp_ParamLimits

0x761a,	// (0x000144c0) set_value_pane_cp

0x7429,	// (0x000142cf) list_setting_number_pane_g1_ParamLimits

0x7429,	// (0x000142cf) list_setting_number_pane_g1

0x7360,	// (0x00014206) list_setting_number_pane_g2_ParamLimits

0x7360,	// (0x00014206) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001c50d) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001c50d) list_setting_number_pane_g

0x7628,	// (0x000144ce) list_setting_number_pane_t1_ParamLimits

0x7628,	// (0x000144ce) list_setting_number_pane_t1

0x763c,	// (0x000144e2) list_setting_number_pane_t2_ParamLimits

0x763c,	// (0x000144e2) list_setting_number_pane_t2

0x7653,	// (0x000144f9) list_setting_number_pane_t3_ParamLimits

0x7653,	// (0x000144f9) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001c519) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001c519) list_setting_number_pane_t

0x761a,	// (0x000144c0) set_value_pane_ParamLimits

0x761a,	// (0x000144c0) set_value_pane

0x3cb2,	// (0x00010b58) bg_set_opt_pane_ParamLimits

0x3cb2,	// (0x00010b58) bg_set_opt_pane

0x3cd3,	// (0x00010b79) set_value_pane_t1

0x3ce1,	// (0x00010b87) slider_set_pane_cp3

0x3cea,	// (0x00010b90) volume_small_pane_cp

0x3cf3,	// (0x00010b99) list_form_gen_pane

0x3cfc,	// (0x00010ba2) scroll_pane_cp8

0x7696,	// (0x0001453c) form_field_data_pane_ParamLimits

0x7696,	// (0x0001453c) form_field_data_pane

0x76b4,	// (0x0001455a) form_field_data_wide_pane_ParamLimits

0x76b4,	// (0x0001455a) form_field_data_wide_pane

0x76db,	// (0x00014581) form_field_popup_pane_ParamLimits

0x76db,	// (0x00014581) form_field_popup_pane

0x3d1d,	// (0x00010bc3) form_field_popup_wide_pane_ParamLimits

0x3d1d,	// (0x00010bc3) form_field_popup_wide_pane

0x3d3e,	// (0x00010be4) form_field_slider_pane_ParamLimits

0x3d3e,	// (0x00010be4) form_field_slider_pane

0x3d51,	// (0x00010bf7) form_field_slider_wide_pane_ParamLimits

0x3d51,	// (0x00010bf7) form_field_slider_wide_pane

0x3d64,	// (0x00010c0a) data_form_pane

0x7707,	// (0x000145ad) form_field_data_pane_t1

0x3d70,	// (0x00010c16) input_focus_pane

0x3d7e,	// (0x00010c24) data_form_wide_pane

0x3dbb,	// (0x00010c61) form_field_data_wide_pane_t1

0x3a65,	// (0x0001090b) input_focus_pane_cp6

0x7721,	// (0x000145c7) form_field_popup_pane_t1

0x3d70,	// (0x00010c16) input_focus_pane_cp7

0x3ddd,	// (0x00010c83) list_form_pane

0x3df1,	// (0x00010c97) form_field_popup_wide_pane_t1

0x3d70,	// (0x00010c16) input_focus_pane_cp8

0x3e06,	// (0x00010cac) list_form_wide_pane

0x7743,	// (0x000145e9) form_field_slider_pane_t1_ParamLimits

0x7743,	// (0x000145e9) form_field_slider_pane_t1

0x7757,	// (0x000145fd) form_field_slider_pane_t2_ParamLimits

0x7757,	// (0x000145fd) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001c529) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001c529) form_field_slider_pane_t

0x361a,	// (0x000104c0) input_focus_pane_cp9_ParamLimits

0x361a,	// (0x000104c0) input_focus_pane_cp9

0x7769,	// (0x0001460f) slider_cont_pane_ParamLimits

0x7769,	// (0x0001460f) slider_cont_pane

0x3e15,	// (0x00010cbb) form_field_slider_wide_pane_t1_ParamLimits

0x3e15,	// (0x00010cbb) form_field_slider_wide_pane_t1

0x3e27,	// (0x00010ccd) form_field_slider_wide_pane_t2_ParamLimits

0x3e27,	// (0x00010ccd) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001c52e) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001c52e) form_field_slider_wide_pane_t

0x361a,	// (0x000104c0) input_focus_pane_cp10_ParamLimits

0x361a,	// (0x000104c0) input_focus_pane_cp10

0x777d,	// (0x00014623) slider_cont_pane_cp1_ParamLimits

0x777d,	// (0x00014623) slider_cont_pane_cp1

0x7791,	// (0x00014637) slider_form_pane_cp

0x3e39,	// (0x00010cdf) input_focus_pane_g1

0x3e41,	// (0x00010ce7) input_focus_pane_g2

0x3e49,	// (0x00010cef) input_focus_pane_g3

0x3e51,	// (0x00010cf7) input_focus_pane_g4

0x3e7d,	// (0x00010d23) input_focus_pane_g5

0x3e85,	// (0x00010d2b) input_focus_pane_g6

0x3e8d,	// (0x00010d33) input_focus_pane_g7

0x3e95,	// (0x00010d3b) input_focus_pane_g8

0x3e9d,	// (0x00010d43) input_focus_pane_g9

0x33f3,	// (0x00010299) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001c533) input_focus_pane_g

0x9413,	// (0x000162b9) wait_border_pane_g3_copy1

0x7799,	// (0x0001463f) data_form_pane_t1

0x33f3,	// (0x00010299) wait_anim_pane_g1_copy1

0xa3c6,	// (0x0001726c) data_form_wide_pane_t1

0x3ea5,	// (0x00010d4b) list_form_graphic_pane_cp_ParamLimits

0x3ea5,	// (0x00010d4b) list_form_graphic_pane_cp

0xa39b,	// (0x00017241) slider_form_pane_g1

0xa3a4,	// (0x0001724a) slider_form_pane_g2

0x0006,

0xf990,	// (0x0001c836) slider_form_pane_g

0x3ea5,	// (0x00010d4b) list_form_graphic_pane_ParamLimits

0x3ea5,	// (0x00010d4b) list_form_graphic_pane

0x3eb7,	// (0x00010d5d) list_form_graphic_pane_g1

0x3ebf,	// (0x00010d65) list_form_graphic_pane_t1_ParamLimits

0x3ebf,	// (0x00010d65) list_form_graphic_pane_t1

0x3632,	// (0x000104d8) list_highlight_pane_cp5_ParamLimits

0x3632,	// (0x000104d8) list_highlight_pane_cp5

0x77b8,	// (0x0001465e) find_pane_g1

0x3ed4,	// (0x00010d7a) input_find_pane

0x77c1,	// (0x00014667) input_find_pane_g1_ParamLimits

0x77c1,	// (0x00014667) input_find_pane_g1

0x77cd,	// (0x00014673) input_find_pane_t1_ParamLimits

0x77cd,	// (0x00014673) input_find_pane_t1

0x77e2,	// (0x00014688) input_find_pane_t2_ParamLimits

0x77e2,	// (0x00014688) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001c548) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001c548) input_find_pane_t

0x3edd,	// (0x00010d83) input_focus_pane_cp5_ParamLimits

0x3edd,	// (0x00010d83) input_focus_pane_cp5

0x3eeb,	// (0x00010d91) bg_popup_window_pane_cp2_ParamLimits

0x3eeb,	// (0x00010d91) bg_popup_window_pane_cp2

0x3ef8,	// (0x00010d9e) listscroll_menu_pane_ParamLimits

0x3ef8,	// (0x00010d9e) listscroll_menu_pane

0x7803,	// (0x000146a9) popup_submenu_window_ParamLimits

0x7803,	// (0x000146a9) popup_submenu_window

0x3f04,	// (0x00010daa) find_popup_pane_g1

0x3f0c,	// (0x00010db2) input_popup_find_pane_cp

0x3edd,	// (0x00010d83) input_focus_pane_cp4_ParamLimits

0x3edd,	// (0x00010d83) input_focus_pane_cp4

0x3f16,	// (0x00010dbc) input_popup_find_pane_t1_ParamLimits

0x3f16,	// (0x00010dbc) input_popup_find_pane_t1

0x356c,	// (0x00010412) bg_popup_sub_pane_cp

0x3f44,	// (0x00010dea) listscroll_popup_sub_pane

0x3f4c,	// (0x00010df2) list_submenu_pane_ParamLimits

0x3f4c,	// (0x00010df2) list_submenu_pane

0x3f5d,	// (0x00010e03) scroll_pane_cp4

0x3f65,	// (0x00010e0b) list_single_popup_submenu_pane_ParamLimits

0x3f65,	// (0x00010e0b) list_single_popup_submenu_pane

0x3f7a,	// (0x00010e20) list_single_popup_submenu_pane_g1

0x3f82,	// (0x00010e28) list_single_popup_submenu_pane_t1_ParamLimits

0x3f82,	// (0x00010e28) list_single_popup_submenu_pane_t1

0x3632,	// (0x000104d8) bg_active_tab_pane_cp1_ParamLimits

0x3632,	// (0x000104d8) bg_active_tab_pane_cp1

0x7841,	// (0x000146e7) tabs_2_active_pane_g1

0x7849,	// (0x000146ef) tabs_2_active_pane_t1

0x3632,	// (0x000104d8) bg_passive_tab_pane_cp1_ParamLimits

0x3632,	// (0x000104d8) bg_passive_tab_pane_cp1

0x7841,	// (0x000146e7) tabs_2_passive_pane_g1

0x7849,	// (0x000146ef) tabs_2_passive_pane_t1

0x4006,	// (0x00010eac) bg_active_tab_pane_cp4

0x785b,	// (0x00014701) tabs_2_long_active_pane_t1

0x786e,	// (0x00014714) bg_passive_tab_pane_cp4

0x5c75,	// (0x00012b1b) list_single_midp_graphic_pane_g4_ParamLimits

0x4006,	// (0x00010eac) bg_active_tab_pane_cp5

0x787a,	// (0x00014720) tabs_3_long_active_pane_t1

0x786e,	// (0x00014714) bg_passive_tab_pane_cp5

0x5c75,	// (0x00012b1b) list_single_midp_graphic_pane_g4

0x3632,	// (0x000104d8) bg_popup_window_pane_cp13_ParamLimits

0x3632,	// (0x000104d8) bg_popup_window_pane_cp13

0x3fa0,	// (0x00010e46) listscroll_popup_fast_pane_ParamLimits

0x3fa0,	// (0x00010e46) listscroll_popup_fast_pane

0x3faf,	// (0x00010e55) grid_popup_fast_pane_ParamLimits

0x3faf,	// (0x00010e55) grid_popup_fast_pane

0x3fc1,	// (0x00010e67) scroll_pane_cp9_ParamLimits

0x3fc1,	// (0x00010e67) scroll_pane_cp9

0xc264,	// (0x0001910a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc264,	// (0x0001910a) list_single_graphic_hl_pane_t1_cp2

0x3fe5,	// (0x00010e8b) input_focus_pane_cp20_ParamLimits

0x3fe5,	// (0x00010e8b) input_focus_pane_cp20

0x3ff3,	// (0x00010e99) query_popup_data_pane_t1_ParamLimits

0x3ff3,	// (0x00010e99) query_popup_data_pane_t1

0x4014,	// (0x00010eba) query_popup_data_pane_t2_ParamLimits

0x4014,	// (0x00010eba) query_popup_data_pane_t2

0x405a,	// (0x00010f00) query_popup_data_pane_t3_ParamLimits

0x405a,	// (0x00010f00) query_popup_data_pane_t3

0x409b,	// (0x00010f41) query_popup_data_pane_t4_ParamLimits

0x409b,	// (0x00010f41) query_popup_data_pane_t4

0x40d7,	// (0x00010f7d) query_popup_data_pane_t5_ParamLimits

0x40d7,	// (0x00010f7d) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001c54d) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001c54d) query_popup_data_pane_t

0x3e39,	// (0x00010cdf) bg_set_opt_pane_g1

0x3e41,	// (0x00010ce7) bg_set_opt_pane_g2

0x3e49,	// (0x00010cef) bg_set_opt_pane_g3

0x3e51,	// (0x00010cf7) bg_set_opt_pane_g4

0x3e7d,	// (0x00010d23) bg_set_opt_pane_g5

0x3e85,	// (0x00010d2b) bg_set_opt_pane_g6

0x3e8d,	// (0x00010d33) bg_set_opt_pane_g7

0x3e95,	// (0x00010d3b) bg_set_opt_pane_g8

0x3e9d,	// (0x00010d43) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001c558) bg_set_opt_pane_g

0x5875,	// (0x0001271b) control_top_pane_stacon_ParamLimits

0x5875,	// (0x0001271b) control_top_pane_stacon

0x58c8,	// (0x0001276e) signal_pane_stacon_ParamLimits

0x58c8,	// (0x0001276e) signal_pane_stacon

0x7ae0,	// (0x00014986) stacon_top_pane_g1_ParamLimits

0x7ae0,	// (0x00014986) stacon_top_pane_g1

0x58ed,	// (0x00012793) title_pane_stacon_ParamLimits

0x58ed,	// (0x00012793) title_pane_stacon

0x5917,	// (0x000127bd) uni_indicator_pane_stacon_ParamLimits

0x5917,	// (0x000127bd) uni_indicator_pane_stacon

0x592f,	// (0x000127d5) battery_pane_stacon_ParamLimits

0x592f,	// (0x000127d5) battery_pane_stacon

0x5973,	// (0x00012819) control_bottom_pane_stacon_ParamLimits

0x5973,	// (0x00012819) control_bottom_pane_stacon

0x5996,	// (0x0001283c) navi_pane_stacon_ParamLimits

0x5996,	// (0x0001283c) navi_pane_stacon

0x7b02,	// (0x000149a8) stacon_bottom_pane_g1_ParamLimits

0x7b02,	// (0x000149a8) stacon_bottom_pane_g1

0x55d2,	// (0x00012478) aid_levels_signal_lsc_ParamLimits

0x55d2,	// (0x00012478) aid_levels_signal_lsc

0x55e9,	// (0x0001248f) signal_pane_stacon_g1_ParamLimits

0x55e9,	// (0x0001248f) signal_pane_stacon_g1

0x55fd,	// (0x000124a3) signal_pane_stacon_g2_ParamLimits

0x55fd,	// (0x000124a3) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001c56b) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001c56b) signal_pane_stacon_g

0x5632,	// (0x000124d8) title_pane_stacon_t1_ParamLimits

0x5632,	// (0x000124d8) title_pane_stacon_t1

0x41b4,	// (0x0001105a) uni_indicator_pane_stacon_g1

0x41be,	// (0x00011064) uni_indicator_pane_stacon_g2

0x41a0,	// (0x00011046) uni_indicator_pane_stacon_g3

0x41aa,	// (0x00011050) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001c577) uni_indicator_pane_stacon_g

0x5657,	// (0x000124fd) control_top_pane_stacon_g1

0x565f,	// (0x00012505) control_top_pane_stacon_t1_ParamLimits

0x565f,	// (0x00012505) control_top_pane_stacon_t1

0x5696,	// (0x0001253c) aid_levels_battery_lsc_ParamLimits

0x5696,	// (0x0001253c) aid_levels_battery_lsc

0x56ae,	// (0x00012554) battery_pane_stacon_g1_ParamLimits

0x56ae,	// (0x00012554) battery_pane_stacon_g1

0x56c1,	// (0x00012567) battery_pane_stacon_g2_ParamLimits

0x56c1,	// (0x00012567) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001c580) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001c580) battery_pane_stacon_g

0x56ff,	// (0x000125a5) navi_icon_pane_stacon

0x5713,	// (0x000125b9) navi_navi_pane_stacon

0x56ff,	// (0x000125a5) navi_text_pane_stacon

0x5657,	// (0x000124fd) control_bottom_pane_stacon_g1

0x5729,	// (0x000125cf) control_bottom_pane_stacon_t1_ParamLimits

0x5729,	// (0x000125cf) control_bottom_pane_stacon_t1

0x788c,	// (0x00014732) grid_app_pane_ParamLimits

0x788c,	// (0x00014732) grid_app_pane

0x78b0,	// (0x00014756) scroll_pane_cp15_ParamLimits

0x78b0,	// (0x00014756) scroll_pane_cp15

0x78c3,	// (0x00014769) cell_app_pane_ParamLimits

0x78c3,	// (0x00014769) cell_app_pane

0x78ef,	// (0x00014795) cell_app_pane_g1_ParamLimits

0x78ef,	// (0x00014795) cell_app_pane_g1

0x42eb,	// (0x00011191) cell_app_pane_g2_ParamLimits

0x42eb,	// (0x00011191) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001c585) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001c585) cell_app_pane_g

0x42f7,	// (0x0001119d) cell_app_pane_t1_ParamLimits

0x42f7,	// (0x0001119d) cell_app_pane_t1

0x430e,	// (0x000111b4) grid_highlight_pane_ParamLimits

0x430e,	// (0x000111b4) grid_highlight_pane

0x3e39,	// (0x00010cdf) cell_highlight_pane_g1

0x3e41,	// (0x00010ce7) cell_highlight_pane_g2

0x3e49,	// (0x00010cef) cell_highlight_pane_g3

0x3e51,	// (0x00010cf7) cell_highlight_pane_g4

0x3e7d,	// (0x00010d23) cell_highlight_pane_g5

0x3e85,	// (0x00010d2b) cell_highlight_pane_g6

0x3e8d,	// (0x00010d33) cell_highlight_pane_g7

0x3e95,	// (0x00010d3b) cell_highlight_pane_g8

0x3e9d,	// (0x00010d43) cell_highlight_pane_g9

0x33f3,	// (0x00010299) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001c533) cell_highlight_pane_g

0x4329,	// (0x000111cf) bg_scroll_pane

0x5773,	// (0x00012619) scroll_handle_pane

0x4399,	// (0x0001123f) scroll_bg_pane_g1

0x43ae,	// (0x00011254) scroll_bg_pane_g2

0x43c6,	// (0x0001126c) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001c58a) scroll_bg_pane_g

0x43db,	// (0x00011281) scroll_handle_focus_pane_ParamLimits

0x43db,	// (0x00011281) scroll_handle_focus_pane

0x4399,	// (0x0001123f) scroll_handle_pane_g1

0x43e8,	// (0x0001128e) scroll_handle_pane_g2

0x43c6,	// (0x0001126c) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001c591) scroll_handle_pane_g

0x3edd,	// (0x00010d83) bg_popup_sub_pane_cp21_ParamLimits

0x3edd,	// (0x00010d83) bg_popup_sub_pane_cp21

0x43fc,	// (0x000112a2) popup_fep_japan_predictive_window_t1_ParamLimits

0x43fc,	// (0x000112a2) popup_fep_japan_predictive_window_t1

0x4413,	// (0x000112b9) popup_fep_japan_predictive_window_t2_ParamLimits

0x4413,	// (0x000112b9) popup_fep_japan_predictive_window_t2

0x4446,	// (0x000112ec) popup_fep_japan_predictive_window_t3_ParamLimits

0x4446,	// (0x000112ec) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001c598) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001c598) popup_fep_japan_predictive_window_t

0x356c,	// (0x00010412) bg_popup_sub_pane_cp23

0x447d,	// (0x00011323) listscroll_japin_cand_pane

0x4485,	// (0x0001132b) popup_fep_japan_candidate_window_t1

0x4493,	// (0x00011339) candidate_pane_ParamLimits

0x4493,	// (0x00011339) candidate_pane

0x44a5,	// (0x0001134b) scroll_pane_cp30

0x44af,	// (0x00011355) list_single_popup_jap_candidate_pane_ParamLimits

0x44af,	// (0x00011355) list_single_popup_jap_candidate_pane

0x356c,	// (0x00010412) list_highlight_pane_cp30

0x44c3,	// (0x00011369) list_single_popup_jap_candidate_pane_t1

0x790f,	// (0x000147b5) level_1_signal

0x791c,	// (0x000147c2) level_2_signal

0x7929,	// (0x000147cf) level_3_signal

0x7936,	// (0x000147dc) level_4_signal

0x7943,	// (0x000147e9) level_5_signal

0x7950,	// (0x000147f6) level_6_signal

0x795d,	// (0x00014803) level_7_signal

0x790f,	// (0x000147b5) level_1_battery

0x791c,	// (0x000147c2) level_2_battery

0x7929,	// (0x000147cf) level_3_battery

0x7936,	// (0x000147dc) level_4_battery

0x7943,	// (0x000147e9) level_5_battery

0x7950,	// (0x000147f6) level_6_battery

0x795d,	// (0x00014803) level_7_battery

0x4509,	// (0x000113af) list_menu_pane_ParamLimits

0x4509,	// (0x000113af) list_menu_pane

0x451f,	// (0x000113c5) scroll_pane_cp25_ParamLimits

0x451f,	// (0x000113c5) scroll_pane_cp25

0x4538,	// (0x000113de) list_double2_graphic_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double2_graphic_pane_cp2

0x4538,	// (0x000113de) list_double2_large_graphic_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double2_large_graphic_pane_cp2

0x4538,	// (0x000113de) list_double2_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double2_pane_cp2

0x4538,	// (0x000113de) list_double_graphic_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double_graphic_pane_cp2

0x4538,	// (0x000113de) list_double_large_graphic_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double_large_graphic_pane_cp2

0x4538,	// (0x000113de) list_double_number_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double_number_pane_cp2

0x4538,	// (0x000113de) list_double_pane_cp2_ParamLimits

0x4538,	// (0x000113de) list_double_pane_cp2

0x7980,	// (0x00014826) list_single_2graphic_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_2graphic_pane_cp2

0x7980,	// (0x00014826) list_single_graphic_heading_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_graphic_heading_pane_cp2

0x7980,	// (0x00014826) list_single_graphic_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_graphic_pane_cp2

0x7980,	// (0x00014826) list_single_heading_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_heading_pane_cp2

0x4548,	// (0x000113ee) list_single_large_graphic_pane_cp2_ParamLimits

0x4548,	// (0x000113ee) list_single_large_graphic_pane_cp2

0x7980,	// (0x00014826) list_single_number_heading_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_number_heading_pane_cp2

0x7980,	// (0x00014826) list_single_number_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_number_pane_cp2

0x7980,	// (0x00014826) list_single_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_pane_cp2

0x45bc,	// (0x00011462) bg_popup_sub_pane_cp22

0x5825,	// (0x000126cb) popup_side_volume_key_window_g1

0x584f,	// (0x000126f5) popup_side_volume_key_window_t1

0x586d,	// (0x00012713) volume_small_pane_cp1

0x361a,	// (0x000104c0) bg_popup_sub_pane_cp24_ParamLimits

0x361a,	// (0x000104c0) bg_popup_sub_pane_cp24

0x4631,	// (0x000114d7) fep_china_uni_candidate_pane_ParamLimits

0x4631,	// (0x000114d7) fep_china_uni_candidate_pane

0x4645,	// (0x000114eb) fep_china_uni_entry_pane

0x4655,	// (0x000114fb) popup_fep_china_uni_window_g1

0x4671,	// (0x00011517) fep_china_uni_entry_pane_g1

0x467b,	// (0x00011521) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001c5c9) fep_china_uni_entry_pane_g

0x4685,	// (0x0001152b) fep_entry_item_pane

0x468f,	// (0x00011535) fep_candidate_item_pane

0x4697,	// (0x0001153d) fep_china_uni_candidate_pane_g1

0x46a1,	// (0x00011547) fep_china_uni_candidate_pane_g2

0x46a9,	// (0x0001154f) fep_china_uni_candidate_pane_g3

0x46b1,	// (0x00011557) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001c5ce) fep_china_uni_candidate_pane_g

0x33f3,	// (0x00010299) fep_entry_item_pane_g1

0x46bb,	// (0x00011561) fep_entry_item_pane_t1_ParamLimits

0x46bb,	// (0x00011561) fep_entry_item_pane_t1

0x46d1,	// (0x00011577) fep_candidate_item_pane_t1_ParamLimits

0x46d1,	// (0x00011577) fep_candidate_item_pane_t1

0x46e6,	// (0x0001158c) fep_candidate_item_pane_t2_ParamLimits

0x46e6,	// (0x0001158c) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001c5d7) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001c5d7) fep_candidate_item_pane_t

0x3632,	// (0x000104d8) list_highlight_pane_cp31_ParamLimits

0x3632,	// (0x000104d8) list_highlight_pane_cp31

0x46f8,	// (0x0001159e) level_1_signal_lsc

0x4701,	// (0x000115a7) level_2_signal_lsc

0x470a,	// (0x000115b0) level_3_signal_lsc

0x4713,	// (0x000115b9) level_4_signal_lsc

0x471c,	// (0x000115c2) level_5_signal_lsc

0x4725,	// (0x000115cb) level_6_signal_lsc

0x472e,	// (0x000115d4) level_7_signal_lsc

0x472e,	// (0x000115d4) level_1_battery_lsc

0x4737,	// (0x000115dd) level_2_battery_lsc

0x4740,	// (0x000115e6) level_3_battery_lsc

0x4749,	// (0x000115ef) level_4_battery_lsc

0x4752,	// (0x000115f8) level_5_battery_lsc

0x475b,	// (0x00011601) level_6_battery_lsc

0x46f8,	// (0x0001159e) level_7_battery_lsc

0x4764,	// (0x0001160a) scroll_handle_focus_pane_g1

0x476d,	// (0x00011613) scroll_handle_focus_pane_g2

0x4776,	// (0x0001161c) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001c5dc) scroll_handle_focus_pane_g

0x79ff,	// (0x000148a5) list_single_2graphic_pane_g1_ParamLimits

0x79ff,	// (0x000148a5) list_single_2graphic_pane_g1

0x72aa,	// (0x00014150) list_single_2graphic_pane_g2_ParamLimits

0x72aa,	// (0x00014150) list_single_2graphic_pane_g2

0x7230,	// (0x000140d6) list_single_2graphic_pane_g3_ParamLimits

0x7230,	// (0x000140d6) list_single_2graphic_pane_g3

0x7a0b,	// (0x000148b1) list_single_2graphic_pane_g4_ParamLimits

0x7a0b,	// (0x000148b1) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001c5e3) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001c5e3) list_single_2graphic_pane_g

0x7a17,	// (0x000148bd) list_single_2graphic_pane_t1_ParamLimits

0x7a17,	// (0x000148bd) list_single_2graphic_pane_t1

0x7a45,	// (0x000148eb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7a45,	// (0x000148eb) list_double2_graphic_large_graphic_pane_g1

0x734f,	// (0x000141f5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x734f,	// (0x000141f5) list_double2_graphic_large_graphic_pane_g2

0x7360,	// (0x00014206) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7360,	// (0x00014206) list_double2_graphic_large_graphic_pane_g3

0x7a57,	// (0x000148fd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7a57,	// (0x000148fd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001c5ec) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001c5ec) list_double2_graphic_large_graphic_pane_g

0x7a63,	// (0x00014909) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7a63,	// (0x00014909) list_double2_graphic_large_graphic_pane_t1

0x7a79,	// (0x0001491f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7a79,	// (0x0001491f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001c5f5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001c5f5) list_double2_graphic_large_graphic_pane_t

0x7bc4,	// (0x00014a6a) popup_fast_swap_window_ParamLimits

0x7bc4,	// (0x00014a6a) popup_fast_swap_window

0x7be2,	// (0x00014a88) popup_side_volume_key_window

0x7c00,	// (0x00014aa6) stacon_top_pane

0x7c0a,	// (0x00014ab0) status_pane_ParamLimits

0x7c0a,	// (0x00014ab0) status_pane

0x7c00,	// (0x00014aa6) status_small_pane

0x356c,	// (0x00010412) control_pane

0x356c,	// (0x00010412) stacon_bottom_pane

0x3cfc,	// (0x00010ba2) scroll_pane_cp121

0x3cf3,	// (0x00010b99) set_content_pane

0x7a8b,	// (0x00014931) bg_active_tab_pane_g1_cp1

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp1

0x7a9d,	// (0x00014943) bg_active_tab_pane_g3_cp1

0x7a8b,	// (0x00014931) bg_passive_tab_pane_g1_cp1

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp1

0x7a9d,	// (0x00014943) bg_passive_tab_pane_g3_cp1

0x7aa6,	// (0x0001494c) bg_active_tab_pane_g1_cp2

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp2

0x7aaf,	// (0x00014955) bg_active_tab_pane_g3_cp2

0x7aa6,	// (0x0001494c) bg_passive_tab_pane_g1_cp2

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp2

0x7aaf,	// (0x00014955) bg_passive_tab_pane_g3_cp2

0x7ab8,	// (0x0001495e) bg_active_tab_pane_g1_cp3

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp3

0x7ac1,	// (0x00014967) bg_active_tab_pane_g3_cp3

0x7ab8,	// (0x0001495e) bg_passive_tab_pane_g1_cp3

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp3

0x7ac1,	// (0x00014967) bg_passive_tab_pane_g3_cp3

0x7aca,	// (0x00014970) bg_active_tab_pane_g1_cp4

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp4

0x7ad5,	// (0x0001497b) bg_active_tab_pane_g3_cp4

0x7aca,	// (0x00014970) bg_passive_tab_pane_g1_cp4

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp4

0x7ad5,	// (0x0001497b) bg_passive_tab_pane_g3_cp4

0x7b1e,	// (0x000149c4) bg_active_tab_pane_g1_cp5

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp5

0x7b27,	// (0x000149cd) bg_active_tab_pane_g3_cp5

0x7b1e,	// (0x000149c4) bg_passive_tab_pane_g1_cp5

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp5

0x7b27,	// (0x000149cd) bg_passive_tab_pane_g3_cp5

0x7b30,	// (0x000149d6) list_set_graphic_pane_ParamLimits

0x7b30,	// (0x000149d6) list_set_graphic_pane

0x356c,	// (0x00010412) bg_set_opt_pane_cp4

0x7b45,	// (0x000149eb) list_set_graphic_pane_g1_ParamLimits

0x7b45,	// (0x000149eb) list_set_graphic_pane_g1

0x7b51,	// (0x000149f7) list_set_graphic_pane_g2_ParamLimits

0x7b51,	// (0x000149f7) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001c5fa) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001c5fa) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001c979) volume_small_pane_cp_g

0x7b75,	// (0x00014a1b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7b75,	// (0x00014a1b) list_double2_large_graphic_pane_g1_cp2

0x7b83,	// (0x00014a29) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7b83,	// (0x00014a29) list_double2_large_graphic_pane_g2_cp2

0x7b94,	// (0x00014a3a) list_double2_large_graphic_pane_g3_cp2

0x7b9c,	// (0x00014a42) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7b9c,	// (0x00014a42) list_double2_large_graphic_pane_t1_cp2

0x7bb2,	// (0x00014a58) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7bb2,	// (0x00014a58) list_double2_large_graphic_pane_t2_cp2

0x9ef7,	// (0x00016d9d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9ef7,	// (0x00016d9d) list_double_large_graphic_pane_g1_cp2

0x9f0a,	// (0x00016db0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9f0a,	// (0x00016db0) list_double_large_graphic_pane_g2_cp2

0x7d28,	// (0x00014bce) list_double_large_graphic_pane_g3_cp2

0x9f1b,	// (0x00016dc1) list_double_large_graphic_pane_g4_cp

0x9f23,	// (0x00016dc9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9f23,	// (0x00016dc9) list_double_large_graphic_pane_t1_cp2

0x9f3a,	// (0x00016de0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9f3a,	// (0x00016de0) list_double_large_graphic_pane_t2_cp2

0x7c18,	// (0x00014abe) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7c18,	// (0x00014abe) list_double2_graphic_pane_g1_cp2

0x7c26,	// (0x00014acc) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7c26,	// (0x00014acc) list_double2_graphic_pane_g2_cp2

0x7c37,	// (0x00014add) list_double2_graphic_pane_g3_cp2

0x7c41,	// (0x00014ae7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7c41,	// (0x00014ae7) list_double2_graphic_pane_t1_cp2

0x7c57,	// (0x00014afd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7c57,	// (0x00014afd) list_double2_graphic_pane_t2_cp2

0x7c69,	// (0x00014b0f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x7c69,	// (0x00014b0f) list_single_number_heading_pane_g1_cp2

0x7c75,	// (0x00014b1b) list_single_number_heading_pane_g2_cp2

0x7c7d,	// (0x00014b23) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7c7d,	// (0x00014b23) list_single_number_heading_pane_t1_cp2

0x7c93,	// (0x00014b39) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7c93,	// (0x00014b39) list_single_number_heading_pane_t2_cp2

0x7ca7,	// (0x00014b4d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7ca7,	// (0x00014b4d) list_single_number_heading_pane_t3_cp2

0x7c69,	// (0x00014b0f) list_single_heading_pane_g1_cp2_ParamLimits

0x7c69,	// (0x00014b0f) list_single_heading_pane_g1_cp2

0x7c75,	// (0x00014b1b) list_single_heading_pane_g2_cp2

0x7c7d,	// (0x00014b23) list_single_heading_pane_t1_cp2_ParamLimits

0x7c7d,	// (0x00014b23) list_single_heading_pane_t1_cp2

0x9cf1,	// (0x00016b97) list_single_heading_pane_t2_cp2_ParamLimits

0x9cf1,	// (0x00016b97) list_single_heading_pane_t2_cp2

0x9c39,	// (0x00016adf) list_double_graphic_pane_g1_cp2_ParamLimits

0x9c39,	// (0x00016adf) list_double_graphic_pane_g1_cp2

0x9c45,	// (0x00016aeb) list_double_graphic_pane_g2_cp2_ParamLimits

0x9c45,	// (0x00016aeb) list_double_graphic_pane_g2_cp2

0x9c54,	// (0x00016afa) list_double_graphic_pane_g3_cp2

0x9c5c,	// (0x00016b02) list_double_graphic_pane_t1_cp2_ParamLimits

0x9c5c,	// (0x00016b02) list_double_graphic_pane_t1_cp2

0x9c72,	// (0x00016b18) list_double_graphic_pane_t2_cp2_ParamLimits

0x9c72,	// (0x00016b18) list_double_graphic_pane_t2_cp2

0x7d1c,	// (0x00014bc2) list_double_number_pane_g1_cp2_ParamLimits

0x7d1c,	// (0x00014bc2) list_double_number_pane_g1_cp2

0x7d28,	// (0x00014bce) list_double_number_pane_g2_cp2

0x9bfd,	// (0x00016aa3) list_double_number_pane_t1_cp2_ParamLimits

0x9bfd,	// (0x00016aa3) list_double_number_pane_t1_cp2

0x9c11,	// (0x00016ab7) list_double_number_pane_t2_cp2_ParamLimits

0x9c11,	// (0x00016ab7) list_double_number_pane_t2_cp2

0x9c27,	// (0x00016acd) list_double_number_pane_t3_cp2_ParamLimits

0x9c27,	// (0x00016acd) list_double_number_pane_t3_cp2

0x9ae6,	// (0x0001698c) list_single_graphic_pane_g1_cp2_ParamLimits

0x9ae6,	// (0x0001698c) list_single_graphic_pane_g1_cp2

0x7d82,	// (0x00014c28) list_single_graphic_pane_g2_cp2_ParamLimits

0x7d82,	// (0x00014c28) list_single_graphic_pane_g2_cp2

0x7d8e,	// (0x00014c34) list_single_graphic_pane_g3_cp2

0x9abc,	// (0x00016962) list_single_graphic_pane_t1_cp2_ParamLimits

0x9abc,	// (0x00016962) list_single_graphic_pane_t1_cp2

0x7d82,	// (0x00014c28) list_single_number_pane_g1_cp2_ParamLimits

0x7d82,	// (0x00014c28) list_single_number_pane_g1_cp2

0x7d8e,	// (0x00014c34) list_single_number_pane_g2_cp2

0x9abc,	// (0x00016962) list_single_number_pane_t1_cp2_ParamLimits

0x9abc,	// (0x00016962) list_single_number_pane_t1_cp2

0x9ad2,	// (0x00016978) list_single_number_pane_t2_cp2_ParamLimits

0x9ad2,	// (0x00016978) list_single_number_pane_t2_cp2

0x7b83,	// (0x00014a29) list_double2_pane_g1_cp2_ParamLimits

0x7b83,	// (0x00014a29) list_double2_pane_g1_cp2

0x7b94,	// (0x00014a3a) list_double2_pane_g2_cp2

0x7cf4,	// (0x00014b9a) list_double2_pane_t1_cp2_ParamLimits

0x7cf4,	// (0x00014b9a) list_double2_pane_t1_cp2

0x7d0a,	// (0x00014bb0) list_double2_pane_t2_cp2_ParamLimits

0x7d0a,	// (0x00014bb0) list_double2_pane_t2_cp2

0x7d1c,	// (0x00014bc2) list_double_pane_g1_cp2_ParamLimits

0x7d1c,	// (0x00014bc2) list_double_pane_g1_cp2

0x7d28,	// (0x00014bce) list_double_pane_g2_cp2

0x7d30,	// (0x00014bd6) list_double_pane_t1_cp2_ParamLimits

0x7d30,	// (0x00014bd6) list_double_pane_t1_cp2

0x7d46,	// (0x00014bec) list_double_pane_t2_cp2_ParamLimits

0x7d46,	// (0x00014bec) list_double_pane_t2_cp2

0x7d72,	// (0x00014c18) list_single_pane_cp2_g3

0x7d82,	// (0x00014c28) list_single_pane_g1_cp2_ParamLimits

0x7d82,	// (0x00014c28) list_single_pane_g1_cp2

0x7d8e,	// (0x00014c34) list_single_pane_g2_cp2

0x7d96,	// (0x00014c3c) list_single_pane_t1_cp2_ParamLimits

0x7d96,	// (0x00014c3c) list_single_pane_t1_cp2

0x7dae,	// (0x00014c54) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7dae,	// (0x00014c54) list_single_large_graphic_pane_g1_cp2

0x7dbc,	// (0x00014c62) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7dbc,	// (0x00014c62) list_single_large_graphic_pane_g2_cp2

0x7dc8,	// (0x00014c6e) list_single_large_graphic_pane_g3_cp2

0x7dd0,	// (0x00014c76) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7dd0,	// (0x00014c76) list_single_large_graphic_pane_g4_cp1

0x7dea,	// (0x00014c90) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7dea,	// (0x00014c90) list_single_large_graphic_pane_t1_cp2

0x9a86,	// (0x0001692c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9a86,	// (0x0001692c) list_single_graphic_heading_pane_g1_cp2

0x9a53,	// (0x000168f9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9a53,	// (0x000168f9) list_single_graphic_heading_pane_g4_cp2

0x7d8e,	// (0x00014c34) list_single_graphic_heading_pane_g5_cp2

0x9a92,	// (0x00016938) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9a92,	// (0x00016938) list_single_graphic_heading_pane_t1_cp2

0x9aa8,	// (0x0001694e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9aa8,	// (0x0001694e) list_single_graphic_heading_pane_t2_cp2

0x9a47,	// (0x000168ed) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9a47,	// (0x000168ed) list_single_2graphic_pane_g1_cp2

0x9a53,	// (0x000168f9) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9a53,	// (0x000168f9) list_single_2graphic_pane_g2_cp2

0x7d8e,	// (0x00014c34) list_single_2graphic_pane_g3_cp2

0x9a64,	// (0x0001690a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9a64,	// (0x0001690a) list_single_2graphic_pane_g4_cp2

0x9a70,	// (0x00016916) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9a70,	// (0x00016916) list_single_2graphic_pane_t1_cp2

0x33f3,	// (0x00010299) list_highlight_pane_g10_cp1

0x961f,	// (0x000164c5) list_highlight_pane_g1_cp1

0x9627,	// (0x000164cd) list_highlight_pane_g2_cp1

0x962f,	// (0x000164d5) list_highlight_pane_g3_cp1

0x9637,	// (0x000164dd) list_highlight_pane_g4_cp1

0x963f,	// (0x000164e5) list_highlight_pane_g5_cp1

0x9647,	// (0x000164ed) list_highlight_pane_g6_cp1

0x964f,	// (0x000164f5) list_highlight_pane_g7_cp1

0x9657,	// (0x000164fd) list_highlight_pane_g8_cp1

0x965f,	// (0x00016505) list_highlight_pane_g9_cp1

0x953f,	// (0x000163e5) form_field_slider_pane_t3

0x954d,	// (0x000163f3) form_field_slider_pane_t4

0x955b,	// (0x00016401) slider_form_pane_ParamLimits

0x955b,	// (0x00016401) slider_form_pane

0x356c,	// (0x00010412) control_abbreviations

0x356c,	// (0x00010412) control_conventions

0x356c,	// (0x00010412) control_definitions

0x356c,	// (0x00010412) format_table_attribute

0x9d47,	// (0x00016bed) bg_popup_preview_window_pane_g9

0x356c,	// (0x00010412) format_table_data2

0x356c,	// (0x00010412) format_table_data3

0x356c,	// (0x00010412) format_table_data_example

0x0008,

0x356c,	// (0x00010412) intro_purpose

0xf8f0,	// (0x0001c796) bg_popup_preview_window_pane_g

0x356c,	// (0x00010412) texts_category

0x356c,	// (0x00010412) texts_graphics

0x7e00,	// (0x00014ca6) text_digital

0x7e0f,	// (0x00014cb5) text_primary

0x7e1e,	// (0x00014cc4) text_primary_small

0x7e2d,	// (0x00014cd3) text_secondary

0x7e3c,	// (0x00014ce2) text_title

0xa557,	// (0x000173fd) bg_passive_tab_pane_g1_cp3_srt

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp3_srt

0xa560,	// (0x00017406) bg_passive_tab_pane_g3_cp3_srt

0x3632,	// (0x000104d8) bg_active_tab_pane_cp3_srt_ParamLimits

0x3632,	// (0x000104d8) bg_active_tab_pane_cp3_srt

0xa569,	// (0x0001740f) tabs_4_active_pane_srt_g1

0xa571,	// (0x00017417) tabs_4_active_pane_srt_t1_ParamLimits

0xa571,	// (0x00017417) tabs_4_active_pane_srt_t1

0xa557,	// (0x000173fd) bg_active_tab_pane_g1_cp3_copy1

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp3_copy1

0xa560,	// (0x00017406) bg_active_tab_pane_g3_cp3_copy1

0x3632,	// (0x000104d8) tabs_2_long_active_pane_srt_ParamLimits

0x3632,	// (0x000104d8) tabs_2_long_active_pane_srt

0x3632,	// (0x000104d8) tabs_2_long_passive_pane_srt_ParamLimits

0x3632,	// (0x000104d8) tabs_2_long_passive_pane_srt

0x786e,	// (0x00014714) bg_passive_tab_pane_cp4_srt_ParamLimits

0x786e,	// (0x00014714) bg_passive_tab_pane_cp4_srt

0xa1ac,	// (0x00017052) bg_passive_tab_pane_g1_cp4_srt

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp4_srt

0xa1b5,	// (0x0001705b) bg_passive_tab_pane_g3_cp4_srt

0x4006,	// (0x00010eac) bg_active_tab_pane_cp4_srt_ParamLimits

0x4006,	// (0x00010eac) bg_active_tab_pane_cp4_srt

0xa1be,	// (0x00017064) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa1be,	// (0x00017064) tabs_2_long_active_pane_srt_t1

0xa1ac,	// (0x00017052) bg_active_tab_pane_g1_cp4_srt

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp4_srt

0xa1b5,	// (0x0001705b) bg_active_tab_pane_g3_cp4_srt

0x361a,	// (0x000104c0) tabs_3_long_active_pane_srt_ParamLimits

0x361a,	// (0x000104c0) tabs_3_long_active_pane_srt

0x361a,	// (0x000104c0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x361a,	// (0x000104c0) tabs_3_long_passive_pane_cp_srt

0x361a,	// (0x000104c0) tabs_3_long_passive_pane_srt_ParamLimits

0x361a,	// (0x000104c0) tabs_3_long_passive_pane_srt

0x786e,	// (0x00014714) bg_passive_tab_pane_cp5_srt_ParamLimits

0x786e,	// (0x00014714) bg_passive_tab_pane_cp5_srt

0x7b1e,	// (0x000149c4) bg_passive_tab_pane_g1_cp5_srt

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp5_srt

0x7b27,	// (0x000149cd) bg_passive_tab_pane_g3_cp5_srt

0x4006,	// (0x00010eac) bg_active_tab_pane_cp5_srt_ParamLimits

0x4006,	// (0x00010eac) bg_active_tab_pane_cp5_srt

0xa19a,	// (0x00017040) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa19a,	// (0x00017040) tabs_3_long_active_pane_srt_t1

0x7b1e,	// (0x000149c4) bg_active_tab_pane_g1_cp5_srt

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp5_srt

0x7b27,	// (0x000149cd) bg_active_tab_pane_g3_cp5_srt

0xa18c,	// (0x00017032) navi_text_pane_srt_t1

0xa184,	// (0x0001702a) navi_icon_pane_srt_g1

0x8007,	// (0x00014ead) midp_editing_number_pane_srt

0x7e4b,	// (0x00014cf1) midp_ticker_pane_srt

0x800f,	// (0x00014eb5) midp_ticker_pane_srt_g1

0x8017,	// (0x00014ebd) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001c619) midp_ticker_pane_srt_g

0x801f,	// (0x00014ec5) midp_ticker_pane_srt_t1

0xa175,	// (0x0001701b) midp_editing_number_pane_t1_copy1

0x786e,	// (0x00014714) listscroll_midp_pane

0x786e,	// (0x00014714) midp_form_pane

0x7eb5,	// (0x00014d5b) midp_info_popup_window_ParamLimits

0x7eb5,	// (0x00014d5b) midp_info_popup_window

0x3edd,	// (0x00010d83) bg_popup_sub_pane_cp50_ParamLimits

0x3edd,	// (0x00010d83) bg_popup_sub_pane_cp50

0x9255,	// (0x000160fb) listscroll_midp_info_pane_ParamLimits

0x9255,	// (0x000160fb) listscroll_midp_info_pane

0x923d,	// (0x000160e3) listscroll_form_midp_pane_ParamLimits

0x923d,	// (0x000160e3) listscroll_form_midp_pane

0x9249,	// (0x000160ef) scroll_bar_cp050

0x921d,	// (0x000160c3) list_midp_pane

0xb2a7,	// (0x0001814d) signal_pane_g2_cp

0x9157,	// (0x00015ffd) listscroll_midp_info_pane_t1_ParamLimits

0x9157,	// (0x00015ffd) listscroll_midp_info_pane_t1

0x916f,	// (0x00016015) listscroll_midp_info_pane_t2_ParamLimits

0x916f,	// (0x00016015) listscroll_midp_info_pane_t2

0x91ad,	// (0x00016053) listscroll_midp_info_pane_t3_ParamLimits

0x91ad,	// (0x00016053) listscroll_midp_info_pane_t3

0x91e7,	// (0x0001608d) listscroll_midp_info_pane_t4_ParamLimits

0x91e7,	// (0x0001608d) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0001c6d1) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0001c6d1) listscroll_midp_info_pane_t

0x3f5d,	// (0x00010e03) scroll_pane_cp21

0x90f1,	// (0x00015f97) form_midp_field_choice_group_pane

0x90fa,	// (0x00015fa0) form_midp_field_text_pane

0x913d,	// (0x00015fe3) form_midp_field_time_pane

0x9145,	// (0x00015feb) form_midp_gauge_slider_pane

0x914e,	// (0x00015ff4) form_midp_gauge_wait_pane

0x356c,	// (0x00010412) form_midp_image_pane

0x90d1,	// (0x00015f77) list_single_midp_pane_ParamLimits

0x90d1,	// (0x00015f77) list_single_midp_pane

0x9095,	// (0x00015f3b) form_midp_field_text_pane_t1

0x8e72,	// (0x00015d18) input_focus_pane_cp050

0x90c0,	// (0x00015f66) list_midp_form_text_pane

0x9064,	// (0x00015f0a) form_midp_field_choice_group_pane_t1

0x9072,	// (0x00015f18) input_focus_pane_cp051

0x9086,	// (0x00015f2c) list_midp_choice_pane

0x356c,	// (0x00010412) status_idle_pane

0x9048,	// (0x00015eee) form_midp_field_time_pane_t1

0x33f3,	// (0x00010299) wait_anim_pane_g2_copy1

0x9056,	// (0x00015efc) form_midp_field_time_pane_t2

0x0001,

0x7f65,	// (0x00014e0b) aid_navinavi_width_2_pane

0xf826,	// (0x0001c6cc) form_midp_field_time_pane_t

0x356c,	// (0x00010412) input_focus_pane_cp052

0x356c,	// (0x00010412) bg_input_focus_pane_cp040

0x9008,	// (0x00015eae) form_midp_gauge_slider_pane_t1

0x9016,	// (0x00015ebc) form_midp_gauge_slider_pane_t2

0x9024,	// (0x00015eca) form_midp_gauge_slider_pane_t3

0x9032,	// (0x00015ed8) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0001c6c3) form_midp_gauge_slider_pane_t

0x9040,	// (0x00015ee6) form_midp_slider_pane

0x3632,	// (0x000104d8) bg_input_focus_pane_cp041_ParamLimits

0x3632,	// (0x000104d8) bg_input_focus_pane_cp041

0x8fd5,	// (0x00015e7b) form_midp_gauge_wait_pane_t1_ParamLimits

0x8fd5,	// (0x00015e7b) form_midp_gauge_wait_pane_t1

0x8fe7,	// (0x00015e8d) form_midp_gauge_wait_pane_t2_ParamLimits

0x8fe7,	// (0x00015e8d) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0001c6be) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0001c6be) form_midp_gauge_wait_pane_t

0x8ff9,	// (0x00015e9f) form_midp_wait_pane_ParamLimits

0x8ff9,	// (0x00015e9f) form_midp_wait_pane

0x8f9d,	// (0x00015e43) form_midp_image_pane_g1

0x8fa6,	// (0x00015e4c) form_midp_image_pane_t1

0x8fb5,	// (0x00015e5b) form_midp_image_pane_t2

0x8fc4,	// (0x00015e6a) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0001c6b7) form_midp_image_pane_t

0x8f85,	// (0x00015e2b) list_single_midp_pane_g1

0x8f8e,	// (0x00015e34) list_single_midp_pane_t1

0x8f6b,	// (0x00015e11) list_midp_form_item_pane_ParamLimits

0x8f6b,	// (0x00015e11) list_midp_form_item_pane

0x7f0d,	// (0x00014db3) list_midp_form_item_pane_t1

0x7f1c,	// (0x00014dc2) midp_ticker_pane_g1

0x7f28,	// (0x00014dce) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001c5ff) midp_ticker_pane_g

0x7f34,	// (0x00014dda) midp_ticker_pane_t1

0xa41d,	// (0x000172c3) midp_editing_number_pane_t1

0xa3fb,	// (0x000172a1) midp_editing_number_pane

0xa40a,	// (0x000172b0) midp_ticker_pane

0xa13d,	// (0x00016fe3) ai_message_heading_pane

0x356c,	// (0x00010412) bg_popup_window_pane_cp14

0xa145,	// (0x00016feb) listscroll_ai_message_pane

0xa0c3,	// (0x00016f69) ai_message_heading_pane_g1_ParamLimits

0xa0c3,	// (0x00016f69) ai_message_heading_pane_g1

0xa0cf,	// (0x00016f75) ai_message_heading_pane_g2_ParamLimits

0xa0cf,	// (0x00016f75) ai_message_heading_pane_g2

0xa0dd,	// (0x00016f83) ai_message_heading_pane_g3_ParamLimits

0xa0dd,	// (0x00016f83) ai_message_heading_pane_g3

0xa0e9,	// (0x00016f8f) ai_message_heading_pane_g4_ParamLimits

0xa0e9,	// (0x00016f8f) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0001c7f8) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0001c7f8) ai_message_heading_pane_g

0xa0f5,	// (0x00016f9b) ai_message_heading_pane_t1_ParamLimits

0xa0f5,	// (0x00016f9b) ai_message_heading_pane_t1

0xa10f,	// (0x00016fb5) ai_message_heading_pane_t2_ParamLimits

0xa10f,	// (0x00016fb5) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0001c801) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0001c801) ai_message_heading_pane_t

0xa123,	// (0x00016fc9) bg_popup_heading_pane_cp1_ParamLimits

0xa123,	// (0x00016fc9) bg_popup_heading_pane_cp1

0xa0b1,	// (0x00016f57) list_ai_message_pane_ParamLimits

0xa0b1,	// (0x00016f57) list_ai_message_pane

0x3f5d,	// (0x00010e03) scroll_pane_cp10

0xa04d,	// (0x00016ef3) list_ai_message_pane_g1

0xa055,	// (0x00016efb) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0001c7d5) list_ai_message_pane_g

0xa05d,	// (0x00016f03) list_ai_message_pane_t1_ParamLimits

0xa05d,	// (0x00016f03) list_ai_message_pane_t1

0xa072,	// (0x00016f18) list_ai_message_pane_t2_ParamLimits

0xa072,	// (0x00016f18) list_ai_message_pane_t2

0xa087,	// (0x00016f2d) list_ai_message_pane_t3_ParamLimits

0xa087,	// (0x00016f2d) list_ai_message_pane_t3

0xa09c,	// (0x00016f42) list_ai_message_pane_t4_ParamLimits

0xa09c,	// (0x00016f42) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0001c7da) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0001c7da) list_ai_message_pane_t

0xa036,	// (0x00016edc) cell_ai_soft_ind_pane_ParamLimits

0xa036,	// (0x00016edc) cell_ai_soft_ind_pane

0x7f46,	// (0x00014dec) cell_ai_soft_ind_pane_g1_ParamLimits

0x7f46,	// (0x00014dec) cell_ai_soft_ind_pane_g1

0x356c,	// (0x00010412) grid_highlight_cp1

0x7f53,	// (0x00014df9) text_secondary_cp56_ParamLimits

0x7f53,	// (0x00014df9) text_secondary_cp56

0xa00b,	// (0x00016eb1) example_general_pane_ParamLimits

0xa00b,	// (0x00016eb1) example_general_pane

0xa017,	// (0x00016ebd) example_parent_pane_g1_ParamLimits

0xa017,	// (0x00016ebd) example_parent_pane_g1

0xa023,	// (0x00016ec9) example_parent_pane_t1_ParamLimits

0xa023,	// (0x00016ec9) example_parent_pane_t1

0x85a4,	// (0x0001544a) popup_preview_text_window_ParamLimits

0x85a4,	// (0x0001544a) popup_preview_text_window

0x7d7a,	// (0x00014c20) list_single_pane_cp2_g4

0x38b0,	// (0x00010756) bg_popup_preview_window_pane_ParamLimits

0x38b0,	// (0x00010756) bg_popup_preview_window_pane

0x9d51,	// (0x00016bf7) popup_preview_text_window_t1_ParamLimits

0x9d51,	// (0x00016bf7) popup_preview_text_window_t1

0x9d6f,	// (0x00016c15) popup_preview_text_window_t2_ParamLimits

0x9d6f,	// (0x00016c15) popup_preview_text_window_t2

0x9db8,	// (0x00016c5e) popup_preview_text_window_t3_ParamLimits

0x9db8,	// (0x00016c5e) popup_preview_text_window_t3

0x9dfd,	// (0x00016ca3) popup_preview_text_window_t4_ParamLimits

0x9dfd,	// (0x00016ca3) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0001c7a9) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0001c7a9) popup_preview_text_window_t

0x9e7b,	// (0x00016d21) scroll_pane_cp11

0x8d4c,	// (0x00015bf2) bg_popup_preview_window_pane_g1

0x9d05,	// (0x00016bab) bg_popup_preview_window_pane_g2

0x9d0f,	// (0x00016bb5) bg_popup_preview_window_pane_g3

0x9d19,	// (0x00016bbf) bg_popup_preview_window_pane_g4

0x9d23,	// (0x00016bc9) bg_popup_preview_window_pane_g5

0x9d2d,	// (0x00016bd3) bg_popup_preview_window_pane_g6

0x9d35,	// (0x00016bdb) bg_popup_preview_window_pane_g7

0x9d3d,	// (0x00016be3) bg_popup_preview_window_pane_g8

0x5142,	// (0x00011fe8) aid_popup_width_pane

0x8580,	// (0x00015426) popup_midp_note_alarm_window_ParamLimits

0x8580,	// (0x00015426) popup_midp_note_alarm_window

0x3d64,	// (0x00010c0a) data_form_pane_ParamLimits

0x76fd,	// (0x000145a3) form_field_data_pane_g1

0x7707,	// (0x000145ad) form_field_data_pane_t1_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_ParamLimits

0x3d7e,	// (0x00010c24) data_form_wide_pane_ParamLimits

0x3d8f,	// (0x00010c35) form_field_data_wide_pane_g1

0x3dbb,	// (0x00010c61) form_field_data_wide_pane_t1_ParamLimits

0x3a65,	// (0x0001090b) input_focus_pane_cp6_ParamLimits

0x7833,	// (0x000146d9) input_popup_find_pane_g1_ParamLimits

0x7833,	// (0x000146d9) input_popup_find_pane_g1

0x56d2,	// (0x00012578) aid_navi_side_left_pane

0x56e7,	// (0x0001258d) aid_navi_side_right_pane

0x971a,	// (0x000165c0) bg_popup_window_pane_cp30_ParamLimits

0x971a,	// (0x000165c0) bg_popup_window_pane_cp30

0x9794,	// (0x0001663a) popup_midp_note_alarm_window_g1_ParamLimits

0x9794,	// (0x0001663a) popup_midp_note_alarm_window_g1

0x97c4,	// (0x0001666a) popup_midp_note_alarm_window_t1_ParamLimits

0x97c4,	// (0x0001666a) popup_midp_note_alarm_window_t1

0x9865,	// (0x0001670b) popup_midp_note_alarm_window_t2_ParamLimits

0x9865,	// (0x0001670b) popup_midp_note_alarm_window_t2

0x9913,	// (0x000167b9) popup_midp_note_alarm_window_t3_ParamLimits

0x9913,	// (0x000167b9) popup_midp_note_alarm_window_t3

0x9945,	// (0x000167eb) popup_midp_note_alarm_window_t4_ParamLimits

0x9945,	// (0x000167eb) popup_midp_note_alarm_window_t4

0x996b,	// (0x00016811) popup_midp_note_alarm_window_t5_ParamLimits

0x996b,	// (0x00016811) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0001c746) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0001c746) popup_midp_note_alarm_window_t

0x9a17,	// (0x000168bd) wait_bar_pane_cp1_ParamLimits

0x9a17,	// (0x000168bd) wait_bar_pane_cp1

0x356c,	// (0x00010412) wait_anim_pane_copy1

0x356c,	// (0x00010412) wait_border_pane_copy1

0x93ff,	// (0x000162a5) wait_border_pane_g1_copy1

0x3dd5,	// (0x00010c7b) form_field_popup_pane_g1

0x7721,	// (0x000145c7) form_field_popup_pane_t1_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_cp7_ParamLimits

0x3ddd,	// (0x00010c83) list_form_pane_ParamLimits

0x3de9,	// (0x00010c8f) form_field_popup_wide_pane_g1

0x3df1,	// (0x00010c97) form_field_popup_wide_pane_t1_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_cp8_ParamLimits

0x3e06,	// (0x00010cac) list_form_wide_pane_ParamLimits

0xa5e4,	// (0x0001748a) aid_size_cell_graphic_pane

0x7799,	// (0x0001463f) data_form_pane_t1_ParamLimits

0xa3c6,	// (0x0001726c) data_form_wide_pane_t1_ParamLimits

0x88cb,	// (0x00015771) bg_status_flat_pane

0x6f64,	// (0x00013e0a) title_pane_t1_ParamLimits

0x35e2,	// (0x00010488) title_pane_t2_ParamLimits

0x3608,	// (0x000104ae) title_pane_t3_ParamLimits

0xf55d,	// (0x0001c403) title_pane_t_ParamLimits

0x790f,	// (0x000147b5) level_1_signal_ParamLimits

0x791c,	// (0x000147c2) level_2_signal_ParamLimits

0x7929,	// (0x000147cf) level_3_signal_ParamLimits

0x7936,	// (0x000147dc) level_4_signal_ParamLimits

0x7943,	// (0x000147e9) level_5_signal_ParamLimits

0x7950,	// (0x000147f6) level_6_signal_ParamLimits

0x795d,	// (0x00014803) level_7_signal_ParamLimits

0x790f,	// (0x000147b5) level_1_battery_ParamLimits

0x791c,	// (0x000147c2) level_2_battery_ParamLimits

0x7929,	// (0x000147cf) level_3_battery_ParamLimits

0x7936,	// (0x000147dc) level_4_battery_ParamLimits

0x7943,	// (0x000147e9) level_5_battery_ParamLimits

0x7950,	// (0x000147f6) level_6_battery_ParamLimits

0x795d,	// (0x00014803) level_7_battery_ParamLimits

0x961f,	// (0x000164c5) bg_status_flat_pane_g1

0x9627,	// (0x000164cd) bg_status_flat_pane_g2

0x962f,	// (0x000164d5) bg_status_flat_pane_g3

0x9637,	// (0x000164dd) bg_status_flat_pane_g4

0x963f,	// (0x000164e5) bg_status_flat_pane_g5

0x9647,	// (0x000164ed) bg_status_flat_pane_g6

0x964f,	// (0x000164f5) bg_status_flat_pane_g7

0x6fd4,	// (0x00013e7a) tabs_3_active_pane_t1_ParamLimits

0x6fd4,	// (0x00013e7a) tabs_3_passive_pane_t1_ParamLimits

0x6fee,	// (0x00013e94) tabs_4_active_pane_t1_ParamLimits

0x6fee,	// (0x00013e94) tabs_4_1_passive_pane_t1_ParamLimits

0x7849,	// (0x000146ef) tabs_2_active_pane_t1_ParamLimits

0x7849,	// (0x000146ef) tabs_2_passive_pane_t1_ParamLimits

0x4006,	// (0x00010eac) bg_active_tab_pane_cp4_ParamLimits

0x785b,	// (0x00014701) tabs_2_long_active_pane_t1_ParamLimits

0x786e,	// (0x00014714) bg_passive_tab_pane_cp4_ParamLimits

0x5ca8,	// (0x00012b4e) list_single_midp_graphic_pane_t1_ParamLimits

0x4006,	// (0x00010eac) bg_active_tab_pane_cp5_ParamLimits

0x787a,	// (0x00014720) tabs_3_long_active_pane_t1_ParamLimits

0x786e,	// (0x00014714) bg_passive_tab_pane_cp5_ParamLimits

0x5ca8,	// (0x00012b4e) list_single_midp_graphic_pane_t1

0x88cb,	// (0x00015771) bg_status_flat_pane_ParamLimits

0x8996,	// (0x0001583c) indicator_pane_cp2_ParamLimits

0x8996,	// (0x0001583c) indicator_pane_cp2

0x8ad9,	// (0x0001597f) navi_pane_srt_ParamLimits

0x8ad9,	// (0x0001597f) navi_pane_srt

0x8afd,	// (0x000159a3) popup_clock_digital_analogue_window_cp1

0x3719,	// (0x000105bf) indicator_pane_t1

0x7e4b,	// (0x00014cf1) copy_highlight_pane

0x7e4b,	// (0x00014cf1) cursor_graphics_pane

0x7e4b,	// (0x00014cf1) graphic_within_text_pane

0x7e4b,	// (0x00014cf1) link_highlight_pane

0x9e3e,	// (0x00016ce4) popup_preview_text_window_t5_ParamLimits

0x9e3e,	// (0x00016ce4) popup_preview_text_window_t5

0x7f6f,	// (0x00014e15) cursor_digital_pane

0x7f6f,	// (0x00014e15) cursor_primary_pane

0x7f80,	// (0x00014e26) cursor_primary_small_pane

0x7f88,	// (0x00014e2e) cursor_secondary_pane

0x7f90,	// (0x00014e36) cursor_title_pane

0x7f6f,	// (0x00014e15) link_highlight_digital_pane

0x7f77,	// (0x00014e1d) link_highlight_primary_pane

0x7f80,	// (0x00014e26) link_highlight_primary_small_pane

0x7f88,	// (0x00014e2e) link_highlight_secondary_pane

0x7f90,	// (0x00014e36) link_highlight_title_pane

0x7f6f,	// (0x00014e15) copy_highlight_digital_pane

0x7f6f,	// (0x00014e15) copy_highlight_primary_pane

0x7f80,	// (0x00014e26) copy_highlight_primary_small_pane

0x7f88,	// (0x00014e2e) copy_highlight_secondary_pane

0x7f90,	// (0x00014e36) copy_highlight_title_pane

0x7f88,	// (0x00014e2e) graphic_text_digital_pane

0x96bd,	// (0x00016563) graphic_text_primary_pane

0x96c6,	// (0x0001656c) graphic_text_primary_small_pane

0x7f80,	// (0x00014e26) graphic_text_secondary_pane

0x7f6f,	// (0x00014e15) graphic_text_title_pane

0x7f98,	// (0x00014e3e) cursor_primary_pane_g1

0x96af,	// (0x00016555) cursor_text_primary_t1

0x9697,	// (0x0001653d) cursor_primary_small_pane_g1

0x96a1,	// (0x00016547) cursor_text_primary_small_t1

0x967f,	// (0x00016525) cursor_primary_small_pane_g1_copy1

0x9689,	// (0x0001652f) cursor_text_primary_small_t1_copy1

0x9667,	// (0x0001650d) cursor_text_title_t1

0x9675,	// (0x0001651b) cursor_title_pane_g1

0x7f98,	// (0x00014e3e) cursor_digital_pane_g1

0x7fa2,	// (0x00014e48) cursor_text_digital_t1

0x7fb0,	// (0x00014e56) link_highlight_primary_pane_g1

0x9610,	// (0x000164b6) link_highlight_primary_pane_t1

0x7fb0,	// (0x00014e56) link_highlight_primary_small_pane_g1

0x7fb8,	// (0x00014e5e) link_highlight_primary_small_pane_t1

0x7fc7,	// (0x00014e6d) link_highlight_secondary_pane_g1

0x7fcf,	// (0x00014e75) link_highlight_secondary_pane_t1

0x9584,	// (0x0001642a) link_highlight_title_pane_g1

0x958c,	// (0x00016432) link_highlight_title_pane_t1

0x956d,	// (0x00016413) link_highlight_digital_pane_g1

0x9575,	// (0x0001641b) link_highlight_digital_pane_t1

0x9435,	// (0x000162db) copy_highlight_primary_pane_g1

0x944c,	// (0x000162f2) copy_highlight_primary_pane_t1

0x9435,	// (0x000162db) copy_highlight_primary_small_pane_g1

0x943d,	// (0x000162e3) copy_highlight_primary_small_pane_t1

0x7fde,	// (0x00014e84) copy_highlight_secondary_pane_g1

0x7fe6,	// (0x00014e8c) copy_highlight_secondary_pane_t1

0x941e,	// (0x000162c4) copy_highlight_title_pane_g1

0x9426,	// (0x000162cc) copy_highlight_title_pane_t1

0x9435,	// (0x000162db) copy_highlight_digital_pane_g1

0xa7b4,	// (0x0001765a) copy_highlight_digital_pane_t1

0xa708,	// (0x000175ae) graphic_text_primary_pane_g1

0xa798,	// (0x0001763e) graphic_text_primary_pane_t1

0xa7a6,	// (0x0001764c) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001c875) graphic_text_primary_pane_t

0xa774,	// (0x0001761a) graphic_text_primary_small_pane_g1

0xa77c,	// (0x00017622) graphic_text_primary_small_pane_t1

0xa78a,	// (0x00017630) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001c870) graphic_text_primary_small_pane_t

0xa750,	// (0x000175f6) graphic_text_secondary_pane_g1

0xa758,	// (0x000175fe) graphic_text_secondary_pane_t1

0xa766,	// (0x0001760c) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0001c86b) graphic_text_secondary_pane_t

0xa72c,	// (0x000175d2) graphic_text_title_pane_g1

0xa734,	// (0x000175da) graphic_text_title_pane_t1

0xa742,	// (0x000175e8) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0001c866) graphic_text_title_pane_t

0xa708,	// (0x000175ae) graphic_text_digital_pane_g1

0xa710,	// (0x000175b6) graphic_text_digital_pane_t1

0xa71e,	// (0x000175c4) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001c861) graphic_text_digital_pane_t

0x3632,	// (0x000104d8) navi_icon_pane_srt_ParamLimits

0x3632,	// (0x000104d8) navi_icon_pane_srt

0x356c,	// (0x00010412) navi_midp_pane_srt

0x356c,	// (0x00010412) navi_navi_pane_srt

0x3632,	// (0x000104d8) navi_text_pane_srt_ParamLimits

0x3632,	// (0x000104d8) navi_text_pane_srt

0xa6d3,	// (0x00017579) navi_navi_icon_text_pane_srt

0xa6db,	// (0x00017581) navi_navi_pane_srt_g1_ParamLimits

0xa6db,	// (0x00017581) navi_navi_pane_srt_g1

0xa6ed,	// (0x00017593) navi_navi_pane_srt_g2_ParamLimits

0xa6ed,	// (0x00017593) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0001c85c) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0001c85c) navi_navi_pane_srt_g

0xa6ff,	// (0x000175a5) navi_navi_tabs_pane_srt

0xa6d3,	// (0x00017579) navi_navi_text_pane_srt

0xa6d3,	// (0x00017579) navi_navi_volume_pane_srt

0xa6c4,	// (0x0001756a) navi_navi_text_pane_srt_t1

0x6044,	// (0x00012eea) navi_navi_volume_pane_srt_g1

0x604c,	// (0x00012ef2) volume_small_pane_srt_ParamLimits

0x604c,	// (0x00012ef2) volume_small_pane_srt

0x59b9,	// (0x0001285f) volume_small_pane_srt_g1_ParamLimits

0x59b9,	// (0x0001285f) volume_small_pane_srt_g1

0x59c9,	// (0x0001286f) volume_small_pane_srt_g2_ParamLimits

0x59c9,	// (0x0001286f) volume_small_pane_srt_g2

0x59da,	// (0x00012880) volume_small_pane_srt_g3_ParamLimits

0x59da,	// (0x00012880) volume_small_pane_srt_g3

0x59eb,	// (0x00012891) volume_small_pane_srt_g4_ParamLimits

0x59eb,	// (0x00012891) volume_small_pane_srt_g4

0x59fc,	// (0x000128a2) volume_small_pane_srt_g5_ParamLimits

0x59fc,	// (0x000128a2) volume_small_pane_srt_g5

0x5a0d,	// (0x000128b3) volume_small_pane_srt_g6_ParamLimits

0x5a0d,	// (0x000128b3) volume_small_pane_srt_g6

0x5a1e,	// (0x000128c4) volume_small_pane_srt_g7_ParamLimits

0x5a1e,	// (0x000128c4) volume_small_pane_srt_g7

0x5a2f,	// (0x000128d5) volume_small_pane_srt_g8_ParamLimits

0x5a2f,	// (0x000128d5) volume_small_pane_srt_g8

0x5a40,	// (0x000128e6) volume_small_pane_srt_g9_ParamLimits

0x5a40,	// (0x000128e6) volume_small_pane_srt_g9

0x5a51,	// (0x000128f7) volume_small_pane_srt_g10_ParamLimits

0x5a51,	// (0x000128f7) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001c604) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001c604) volume_small_pane_srt_g

0x3965,	// (0x0001080b) query_popup_data_pane_cp2

0xa6aa,	// (0x00017550) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa6aa,	// (0x00017550) navi_navi_icon_text_pane_srt_t1

0x96bd,	// (0x00016563) navi_tabs_2_long_pane_srt

0x96bd,	// (0x00016563) navi_tabs_2_pane_srt

0x96bd,	// (0x00016563) navi_tabs_3_long_pane_srt

0x96bd,	// (0x00016563) navi_tabs_3_pane_srt

0x96bd,	// (0x00016563) navi_tabs_4_pane_srt

0x6024,	// (0x00012eca) tabs_2_active_pane_srt_ParamLimits

0x6024,	// (0x00012eca) tabs_2_active_pane_srt

0x6034,	// (0x00012eda) tabs_2_passive_pane_srt_ParamLimits

0x6034,	// (0x00012eda) tabs_2_passive_pane_srt

0x81d5,	// (0x0001507b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x81d5,	// (0x0001507b) bg_passive_tab_pane_cp1_srt

0xa676,	// (0x0001751c) bg_passive_tab_pane_g1_cp1_srt

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp1_srt

0xa67f,	// (0x00017525) bg_passive_tab_pane_g3_cp1_srt

0x3632,	// (0x000104d8) bg_active_tab_pane_cp1_srt_ParamLimits

0x3632,	// (0x000104d8) bg_active_tab_pane_cp1_srt

0xa688,	// (0x0001752e) tabs_2_active_pane_srt_g1

0xa690,	// (0x00017536) tabs_2_active_pane_srt_t1_ParamLimits

0xa690,	// (0x00017536) tabs_2_active_pane_srt_t1

0xa676,	// (0x0001751c) bg_active_tab_pane_g1_cp1_srt

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp1_srt

0xa67f,	// (0x00017525) bg_active_tab_pane_g3_cp1_srt

0x5ff1,	// (0x00012e97) tabs_3_active_pane_srt_ParamLimits

0x5ff1,	// (0x00012e97) tabs_3_active_pane_srt

0x6002,	// (0x00012ea8) tabs_3_passive_pane_cp_srt_ParamLimits

0x6002,	// (0x00012ea8) tabs_3_passive_pane_cp_srt

0x6013,	// (0x00012eb9) tabs_3_passive_pane_srt_ParamLimits

0x6013,	// (0x00012eb9) tabs_3_passive_pane_srt

0x81d5,	// (0x0001507b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x81d5,	// (0x0001507b) bg_passive_tab_pane_cp2_srt

0x7ff5,	// (0x00014e9b) bg_passive_tab_pane_g1_cp2_srt

0x7a94,	// (0x0001493a) bg_passive_tab_pane_g2_cp2_srt

0x7ffe,	// (0x00014ea4) bg_passive_tab_pane_g3_cp2_srt

0x3632,	// (0x000104d8) bg_active_tab_pane_cp2_srt_ParamLimits

0x3632,	// (0x000104d8) bg_active_tab_pane_cp2_srt

0xa65c,	// (0x00017502) tabs_3_active_pane_srt_g1

0xa664,	// (0x0001750a) tabs_3_active_pane_srt_t1_ParamLimits

0xa664,	// (0x0001750a) tabs_3_active_pane_srt_t1

0x7ff5,	// (0x00014e9b) bg_active_tab_pane_g1_cp2_srt

0x7a94,	// (0x0001493a) bg_active_tab_pane_g2_cp2_srt

0x7ffe,	// (0x00014ea4) bg_active_tab_pane_g3_cp2_srt

0x5fa9,	// (0x00012e4f) tabs_4_active_pane_srt_ParamLimits

0x5fa9,	// (0x00012e4f) tabs_4_active_pane_srt

0x5fbb,	// (0x00012e61) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5fbb,	// (0x00012e61) tabs_4_passive_pane_cp2_srt

0x8153,	// (0x00014ff9) aid_size_cell_toolbar

0x786e,	// (0x00014714) main_idle_act_pane_ParamLimits

0x83a6,	// (0x0001524c) popup_large_graphic_colour_window_ParamLimits

0x874d,	// (0x000155f3) popup_toolbar_window_ParamLimits

0x874d,	// (0x000155f3) popup_toolbar_window

0xa440,	// (0x000172e6) list_single_graphic_2heading_pane_ParamLimits

0xa440,	// (0x000172e6) list_single_graphic_2heading_pane

0x42d1,	// (0x00011177) aid_size_cell_apps_grid_lsc_pane

0x42e3,	// (0x00011189) aid_size_cell_apps_grid_prt_pane

0x81d5,	// (0x0001507b) bg_wml_button_pane_cp1_ParamLimits

0x81d5,	// (0x0001507b) bg_wml_button_pane_cp1

0x9095,	// (0x00015f3b) form_midp_field_text_pane_t1_ParamLimits

0x8e72,	// (0x00015d18) input_focus_pane_cp050_ParamLimits

0x90c0,	// (0x00015f66) list_midp_form_text_pane_ParamLimits

0x9072,	// (0x00015f18) input_focus_pane_cp051_ParamLimits

0x9086,	// (0x00015f2c) list_midp_choice_pane_ParamLimits

0x8f2b,	// (0x00015dd1) list_single_2graphic_pane_cp3_ParamLimits

0x8f2b,	// (0x00015dd1) list_single_2graphic_pane_cp3

0x8f44,	// (0x00015dea) list_single_midp_graphic_pane_ParamLimits

0x8f44,	// (0x00015dea) list_single_midp_graphic_pane

0x5bac,	// (0x00012a52) list_single_graphic_2heading_pane_g1_ParamLimits

0x5bac,	// (0x00012a52) list_single_graphic_2heading_pane_g1

0x5bb8,	// (0x00012a5e) list_single_graphic_2heading_pane_g4_ParamLimits

0x5bb8,	// (0x00012a5e) list_single_graphic_2heading_pane_g4

0x5bc4,	// (0x00012a6a) list_single_graphic_2heading_pane_g5_ParamLimits

0x5bc4,	// (0x00012a6a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001c657) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001c657) list_single_graphic_2heading_pane_g

0x5bd0,	// (0x00012a76) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bd0,	// (0x00012a76) list_single_graphic_2heading_pane_t1

0x5be4,	// (0x00012a8a) list_single_graphic_2heading_pane_t2_ParamLimits

0x5be4,	// (0x00012a8a) list_single_graphic_2heading_pane_t2

0x5c00,	// (0x00012aa6) list_single_graphic_2heading_pane_t3_ParamLimits

0x5c00,	// (0x00012aa6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001c65e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001c65e) list_single_graphic_2heading_pane_t

0x8c5c,	// (0x00015b02) bg_popup_sub_pane_cp2

0x8c86,	// (0x00015b2c) grid_toobar_pane

0x5c18,	// (0x00012abe) cell_toolbar_pane_ParamLimits

0x5c18,	// (0x00012abe) cell_toolbar_pane

0x8cf0,	// (0x00015b96) cell_toolbar_pane_g1_ParamLimits

0x8cf0,	// (0x00015b96) cell_toolbar_pane_g1

0x8d04,	// (0x00015baa) cell_toolbar_pane_g2_ParamLimits

0x8d04,	// (0x00015baa) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001c66c) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001c66c) cell_toolbar_pane_g

0x8d26,	// (0x00015bcc) grid_highlight_pane_cp2_ParamLimits

0x8d26,	// (0x00015bcc) grid_highlight_pane_cp2

0x8d40,	// (0x00015be6) toolbar_button_pane

0x8d4c,	// (0x00015bf2) toolbar_button_pane_g1

0x8d54,	// (0x00015bfa) toolbar_button_pane_g2

0x8d5c,	// (0x00015c02) toolbar_button_pane_g3

0x8d64,	// (0x00015c0a) toolbar_button_pane_g4

0x8d6c,	// (0x00015c12) toolbar_button_pane_g5

0x8d74,	// (0x00015c1a) toolbar_button_pane_g6

0x8d7c,	// (0x00015c22) toolbar_button_pane_g7

0x8d84,	// (0x00015c2a) toolbar_button_pane_g8

0x8d8c,	// (0x00015c32) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001c671) toolbar_button_pane_g

0x5c50,	// (0x00012af6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c50,	// (0x00012af6) list_single_2graphic_pane_g1_cp3

0x5c5c,	// (0x00012b02) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c5c,	// (0x00012b02) list_single_2graphic_pane_g2_cp3

0x5c6d,	// (0x00012b13) list_single_2graphic_pane_g3_cp3

0x5c75,	// (0x00012b1b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c75,	// (0x00012b1b) list_single_2graphic_pane_g4_cp3

0x5c81,	// (0x00012b27) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5c81,	// (0x00012b27) list_single_2graphic_pane_t1_cp3

0x5c9c,	// (0x00012b42) list_single_midp_graphic_pane_g2_ParamLimits

0x5c9c,	// (0x00012b42) list_single_midp_graphic_pane_g2

0x815b,	// (0x00015001) aid_zoom_text_primary

0x8163,	// (0x00015009) aid_zoom_text_secondary

0x80b2,	// (0x00014f58) status_small_pane_g7_ParamLimits

0x80b2,	// (0x00014f58) status_small_pane_g7

0x80d5,	// (0x00014f7b) status_small_pane_t1_ParamLimits

0x6f53,	// (0x00013df9) title_pane_g2

0x0003,

0xf554,	// (0x0001c3fa) title_pane_g

0x7115,	// (0x00013fbb) aid_size_cell_colour_1_pane_ParamLimits

0x7115,	// (0x00013fbb) aid_size_cell_colour_1_pane

0x7129,	// (0x00013fcf) aid_size_cell_colour_2_pane_ParamLimits

0x7129,	// (0x00013fcf) aid_size_cell_colour_2_pane

0x713d,	// (0x00013fe3) aid_size_cell_colour_3_pane_ParamLimits

0x713d,	// (0x00013fe3) aid_size_cell_colour_3_pane

0x7151,	// (0x00013ff7) aid_size_cell_colour_4_pane_ParamLimits

0x7151,	// (0x00013ff7) aid_size_cell_colour_4_pane

0x560e,	// (0x000124b4) title_pane_stacon_g1_ParamLimits

0x560e,	// (0x000124b4) title_pane_stacon_g1

0x94a3,	// (0x00016349) popup_note_wait_window_g3_ParamLimits

0x94a3,	// (0x00016349) popup_note_wait_window_g3

0x951a,	// (0x000163c0) popup_note_wait_window_t5_ParamLimits

0x951a,	// (0x000163c0) popup_note_wait_window_t5

0x356c,	// (0x00010412) main_feb_china_hwr_fs_writing_pane

0x826d,	// (0x00015113) popup_feb_china_hwr_fs_window_ParamLimits

0x826d,	// (0x00015113) popup_feb_china_hwr_fs_window

0x5cbe,	// (0x00012b64) aid_size_cell_hwr_fs_ParamLimits

0x5cbe,	// (0x00012b64) aid_size_cell_hwr_fs

0x8e72,	// (0x00015d18) bg_popup_sub_pane_cp3_ParamLimits

0x8e72,	// (0x00015d18) bg_popup_sub_pane_cp3

0x5cd3,	// (0x00012b79) grid_hwr_fs_pane_ParamLimits

0x5cd3,	// (0x00012b79) grid_hwr_fs_pane

0x5ceb,	// (0x00012b91) linegrid_hwr_fs_pane_ParamLimits

0x5ceb,	// (0x00012b91) linegrid_hwr_fs_pane

0x5cfb,	// (0x00012ba1) cell_hwr_fs_pane_ParamLimits

0x5cfb,	// (0x00012ba1) cell_hwr_fs_pane

0x8e7e,	// (0x00015d24) linegrid_hwr_fs_pane_g1_ParamLimits

0x8e7e,	// (0x00015d24) linegrid_hwr_fs_pane_g1

0x8e8a,	// (0x00015d30) linegrid_hwr_fs_pane_g2_ParamLimits

0x8e8a,	// (0x00015d30) linegrid_hwr_fs_pane_g2

0x8e9c,	// (0x00015d42) linegrid_hwr_fs_pane_g3_ParamLimits

0x8e9c,	// (0x00015d42) linegrid_hwr_fs_pane_g3

0x5d1f,	// (0x00012bc5) linegrid_hwr_fs_pane_g4_ParamLimits

0x5d1f,	// (0x00012bc5) linegrid_hwr_fs_pane_g4

0x5d3d,	// (0x00012be3) linegrid_hwr_fs_pane_g5_ParamLimits

0x5d3d,	// (0x00012be3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0001c69c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001c69c) linegrid_hwr_fs_pane_g

0x8ea8,	// (0x00015d4e) cell_hwr_fs_pane_g1_ParamLimits

0x8ea8,	// (0x00015d4e) cell_hwr_fs_pane_g1

0x8b93,	// (0x00015a39) cell_hwr_fs_pane_g2_ParamLimits

0x8b93,	// (0x00015a39) cell_hwr_fs_pane_g2

0x8ebe,	// (0x00015d64) cell_hwr_fs_pane_g3_ParamLimits

0x8ebe,	// (0x00015d64) cell_hwr_fs_pane_g3

0x8ecb,	// (0x00015d71) cell_hwr_fs_pane_g4_ParamLimits

0x8ecb,	// (0x00015d71) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0001c6a7) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001c6a7) cell_hwr_fs_pane_g

0x5d53,	// (0x00012bf9) cell_hwr_fs_pane_t1

0x356c,	// (0x00010412) grid_highlight_pane_cp6

0x356c,	// (0x00010412) main_idle_act2_pane

0x3f44,	// (0x00010dea) aid_inside_area_popup_secondary

0x9b53,	// (0x000169f9) aid_inside_area_window_primary_ParamLimits

0x9b53,	// (0x000169f9) aid_inside_area_window_primary

0xa7c3,	// (0x00017669) ai2_news_ticker_pane

0xa7cb,	// (0x00017671) aid_size_cell_ai1_link_ParamLimits

0xa7cb,	// (0x00017671) aid_size_cell_ai1_link

0xa7e5,	// (0x0001768b) popup_ai2_data_window_ParamLimits

0xa7e5,	// (0x0001768b) popup_ai2_data_window

0xa803,	// (0x000176a9) popup_ai2_link_window_ParamLimits

0xa803,	// (0x000176a9) popup_ai2_link_window

0x8e72,	// (0x00015d18) bg_popup_sub_pane_cp4_ParamLimits

0x8e72,	// (0x00015d18) bg_popup_sub_pane_cp4

0xa819,	// (0x000176bf) grid_ai2_link_pane_ParamLimits

0xa819,	// (0x000176bf) grid_ai2_link_pane

0xa830,	// (0x000176d6) popup_ai2_link_window_g1_ParamLimits

0xa830,	// (0x000176d6) popup_ai2_link_window_g1

0xa83c,	// (0x000176e2) popup_ai2_link_window_g2_ParamLimits

0xa83c,	// (0x000176e2) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0001c87a) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0001c87a) popup_ai2_link_window_g

0xa84d,	// (0x000176f3) ai2_mp_button_pane

0xa855,	// (0x000176fb) ai2_mp_volume_pane

0x9072,	// (0x00015f18) bg_popup_sub_pane_cp5_ParamLimits

0x9072,	// (0x00015f18) bg_popup_sub_pane_cp5

0xa85d,	// (0x00017703) heading_ai2_gene_pane_ParamLimits

0xa85d,	// (0x00017703) heading_ai2_gene_pane

0xa869,	// (0x0001770f) list_ai2_gene_pane_ParamLimits

0xa869,	// (0x0001770f) list_ai2_gene_pane

0xa8b1,	// (0x00017757) cell_ai2_link_pane_ParamLimits

0xa8b1,	// (0x00017757) cell_ai2_link_pane

0xa8c7,	// (0x0001776d) cell_ai2_link_pane_g1

0x356c,	// (0x00010412) grid_highlight_pane_cp7

0x6061,	// (0x00012f07) ai2_mp_volume_pane_g1

0xa99a,	// (0x00017840) ai2_mp_volume_pane_g2

0xa90f,	// (0x000177b5) list_ai2_gene_pane_t1

0xa9a2,	// (0x00017848) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001c893) ai2_mp_volume_pane_g

0x6069,	// (0x00012f0f) volume_small_pane_cp3

0xa9aa,	// (0x00017850) aid_size_cell_ai2_button

0xa9b2,	// (0x00017858) grid_ai2_button_pane

0xa9bb,	// (0x00017861) cell_ai2_button_pane_ParamLimits

0xa9bb,	// (0x00017861) cell_ai2_button_pane

0x33f3,	// (0x00010299) cell_ai2_button_pane_g1

0x356c,	// (0x00010412) grid_highlight_pane_cp8

0xa95a,	// (0x00017800) ai2_gene_pane_t1_ParamLimits

0xa95a,	// (0x00017800) ai2_gene_pane_t1

0x8149,	// (0x00014fef) aid_height_parent_landscape

0xa20e,	// (0x000170b4) aid_height_set_list

0xa21f,	// (0x000170c5) aid_size_parent

0xa5e4,	// (0x0001748a) aid_size_cell_graphic_pane_ParamLimits

0xa879,	// (0x0001771f) popup_ai2_data_window_g1_ParamLimits

0xa879,	// (0x0001771f) popup_ai2_data_window_g1

0xa885,	// (0x0001772b) ai2_news_ticker_pane_g1

0xa88d,	// (0x00017733) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0001c87f) ai2_news_ticker_pane_g

0xa895,	// (0x0001773b) ai2_news_ticker_pane_t1

0xa8a3,	// (0x00017749) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001c884) ai2_news_ticker_pane_t

0xa8d0,	// (0x00017776) heading_ai2_gene_pane_g1

0xa8d8,	// (0x0001777e) heading_ai2_gene_pane_t1_ParamLimits

0xa8d8,	// (0x0001777e) heading_ai2_gene_pane_t1

0xa8ed,	// (0x00017793) list_highlight_pane_cp6

0xa8f5,	// (0x0001779b) ai2_gene_pane_ParamLimits

0xa8f5,	// (0x0001779b) ai2_gene_pane

0xa91d,	// (0x000177c3) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0001c889) list_ai2_gene_pane_t

0xa92b,	// (0x000177d1) list_highlight_pane_cp8_ParamLimits

0xa92b,	// (0x000177d1) list_highlight_pane_cp8

0xa93c,	// (0x000177e2) ai2_gene_pane_g1_ParamLimits

0xa93c,	// (0x000177e2) ai2_gene_pane_g1

0xa94e,	// (0x000177f4) ai2_gene_pane_g2_ParamLimits

0xa94e,	// (0x000177f4) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0001c88e) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0001c88e) ai2_gene_pane_g

0x3c80,	// (0x00010b26) scroll_pane_cp12

0x5b6b,	// (0x00012a11) control_pane_t3_ParamLimits

0x5b6b,	// (0x00012a11) control_pane_t3

0x80c6,	// (0x00014f6c) status_small_pane_g8_ParamLimits

0x80c6,	// (0x00014f6c) status_small_pane_g8

0x836b,	// (0x00015211) popup_find_window_ParamLimits

0x8596,	// (0x0001543c) popup_note_image_window_ParamLimits

0x8cc2,	// (0x00015b68) list_double2_graphic_pane_vc_g1_ParamLimits

0x8cc2,	// (0x00015b68) list_double2_graphic_pane_vc_g1

0x7dbc,	// (0x00014c62) list_double2_graphic_pane_vc_g2_ParamLimits

0x7dbc,	// (0x00014c62) list_double2_graphic_pane_vc_g2

0x8cce,	// (0x00015b74) list_double2_graphic_pane_vc_g3_ParamLimits

0x8cce,	// (0x00015b74) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001c665) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c665) list_double2_graphic_pane_vc_g

0x8cda,	// (0x00015b80) list_double2_graphic_pane_vc_t1_ParamLimits

0x8cda,	// (0x00015b80) list_double2_graphic_pane_vc_t1

0x7dbc,	// (0x00014c62) list_single_heading_pane_vc_g1_ParamLimits

0x7dbc,	// (0x00014c62) list_single_heading_pane_vc_g1

0x8cce,	// (0x00015b74) list_single_heading_pane_vc_g2_ParamLimits

0x8cce,	// (0x00015b74) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c686) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c686) list_single_heading_pane_vc_g

0x8d94,	// (0x00015c3a) list_single_heading_pane_vc_t1_ParamLimits

0x8d94,	// (0x00015c3a) list_single_heading_pane_vc_t1

0x8dac,	// (0x00015c52) list_single_heading_pane_vc_t2_ParamLimits

0x8dac,	// (0x00015c52) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0001c68b) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001c68b) list_single_heading_pane_vc_t

0x8dbe,	// (0x00015c64) list_setting_number_pane_vc_g1_ParamLimits

0x8dbe,	// (0x00015c64) list_setting_number_pane_vc_g1

0x8dca,	// (0x00015c70) list_setting_number_pane_vc_g2_ParamLimits

0x8dca,	// (0x00015c70) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001c690) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001c690) list_setting_number_pane_vc_g

0x8dd6,	// (0x00015c7c) list_setting_number_pane_vc_t1_ParamLimits

0x8dd6,	// (0x00015c7c) list_setting_number_pane_vc_t1

0x8dea,	// (0x00015c90) list_setting_number_pane_vc_t2_ParamLimits

0x8dea,	// (0x00015c90) list_setting_number_pane_vc_t2

0x8e06,	// (0x00015cac) list_setting_number_pane_vc_t3_ParamLimits

0x8e06,	// (0x00015cac) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001c695) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001c695) list_setting_number_pane_vc_t

0x8e34,	// (0x00015cda) set_value_pane_vc_ParamLimits

0x8e34,	// (0x00015cda) set_value_pane_vc

0xa440,	// (0x000172e6) list_double2_graphic_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double2_graphic_pane_vc

0xa440,	// (0x000172e6) list_double2_large_graphic_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double2_large_graphic_pane_vc

0xa440,	// (0x000172e6) list_double2_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double2_pane_vc

0xa440,	// (0x000172e6) list_double_graphic_heading_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_graphic_heading_pane_vc

0xa440,	// (0x000172e6) list_double_graphic_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_graphic_pane_vc

0xa440,	// (0x000172e6) list_double_heading_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_heading_pane_vc

0xa440,	// (0x000172e6) list_double_large_graphic_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_large_graphic_pane_vc

0xa440,	// (0x000172e6) list_double_number_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_number_pane_vc

0xa440,	// (0x000172e6) list_double_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_pane_vc

0xa440,	// (0x000172e6) list_double_time_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_double_time_pane_vc

0xa440,	// (0x000172e6) list_setting_number_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_setting_number_pane_vc

0xa440,	// (0x000172e6) list_setting_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_setting_pane_vc

0xa440,	// (0x000172e6) list_single_graphic_heading_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_single_graphic_heading_pane_vc

0xa440,	// (0x000172e6) list_single_heading_pane_vc_ParamLimits

0xa440,	// (0x000172e6) list_single_heading_pane_vc

0xa454,	// (0x000172fa) list_single_number_heading_pane_vc_ParamLimits

0xa454,	// (0x000172fa) list_single_number_heading_pane_vc

0x8cc2,	// (0x00015b68) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8cc2,	// (0x00015b68) list_double_graphic_heading_pane_vc_g1

0xa9ee,	// (0x00017894) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa9ee,	// (0x00017894) list_double_graphic_heading_pane_vc_g2

0xa9fa,	// (0x000178a0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa9fa,	// (0x000178a0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0001c89a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0001c89a) list_double_graphic_heading_pane_vc_g

0xaa06,	// (0x000178ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xaa06,	// (0x000178ac) list_double_graphic_heading_pane_vc_t1

0xaa1c,	// (0x000178c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xaa1c,	// (0x000178c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001c8a1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001c8a1) list_double_graphic_heading_pane_vc_t

0x8dbe,	// (0x00015c64) list_setting_pane_vc_g1_ParamLimits

0x8dbe,	// (0x00015c64) list_setting_pane_vc_g1

0x8dca,	// (0x00015c70) list_setting_pane_vc_g2_ParamLimits

0x8dca,	// (0x00015c70) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001c690) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001c690) list_setting_pane_vc_g

0xac62,	// (0x00017b08) list_setting_pane_vc_t1_ParamLimits

0xac62,	// (0x00017b08) list_setting_pane_vc_t1

0xac7e,	// (0x00017b24) list_setting_pane_vc_t2_ParamLimits

0xac7e,	// (0x00017b24) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0001c8cf) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0001c8cf) list_setting_pane_vc_t

0x8e34,	// (0x00015cda) set_value_pane_cp_vc_ParamLimits

0x8e34,	// (0x00015cda) set_value_pane_cp_vc

0x7dbc,	// (0x00014c62) list_single_number_heading_pane_vc_g1_ParamLimits

0x7dbc,	// (0x00014c62) list_single_number_heading_pane_vc_g1

0x8cce,	// (0x00015b74) list_single_number_heading_pane_vc_g2_ParamLimits

0x8cce,	// (0x00015b74) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c686) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c686) list_single_number_heading_pane_vc_g

0x8d94,	// (0x00015c3a) list_single_number_heading_pane_vc_t1_ParamLimits

0x8d94,	// (0x00015c3a) list_single_number_heading_pane_vc_t1

0xac9a,	// (0x00017b40) list_single_number_heading_pane_vc_t2_ParamLimits

0xac9a,	// (0x00017b40) list_single_number_heading_pane_vc_t2

0xacac,	// (0x00017b52) list_single_number_heading_pane_vc_t3_ParamLimits

0xacac,	// (0x00017b52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0001c8d4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001c8d4) list_single_number_heading_pane_vc_t

0x8cc2,	// (0x00015b68) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8cc2,	// (0x00015b68) list_single_graphic_heading_pane_vc_g1

0x7dbc,	// (0x00014c62) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7dbc,	// (0x00014c62) list_single_graphic_heading_pane_vc_g4

0x8cce,	// (0x00015b74) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8cce,	// (0x00015b74) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001c665) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001c665) list_single_graphic_heading_pane_vc_g

0x8d94,	// (0x00015c3a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8d94,	// (0x00015c3a) list_single_graphic_heading_pane_vc_t1

0xacbe,	// (0x00017b64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xacbe,	// (0x00017b64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0001c8db) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0001c8db) list_single_graphic_heading_pane_vc_t

0x7dbc,	// (0x00014c62) list_double2_pane_vc_g1_ParamLimits

0x7dbc,	// (0x00014c62) list_double2_pane_vc_g1

0x8cce,	// (0x00015b74) list_double2_pane_vc_g2_ParamLimits

0x8cce,	// (0x00015b74) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c686) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c686) list_double2_pane_vc_g

0xacd0,	// (0x00017b76) list_double2_pane_vc_t1_ParamLimits

0xacd0,	// (0x00017b76) list_double2_pane_vc_t1

0xace6,	// (0x00017b8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xace6,	// (0x00017b8c) list_double2_large_graphic_pane_vc_g1

0x7dbc,	// (0x00014c62) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7dbc,	// (0x00014c62) list_double2_large_graphic_pane_vc_g2

0x8cce,	// (0x00015b74) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8cce,	// (0x00015b74) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0001c8e0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001c8e0) list_double2_large_graphic_pane_vc_g

0xacf2,	// (0x00017b98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xacf2,	// (0x00017b98) list_double2_large_graphic_pane_vc_t1

0xad08,	// (0x00017bae) list_double_time_pane_vc_g1_ParamLimits

0xad08,	// (0x00017bae) list_double_time_pane_vc_g1

0xad14,	// (0x00017bba) list_double_time_pane_vc_g2_ParamLimits

0xad14,	// (0x00017bba) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0001c8e7) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0001c8e7) list_double_time_pane_vc_g

0xad20,	// (0x00017bc6) list_double_time_pane_vc_t1_ParamLimits

0xad20,	// (0x00017bc6) list_double_time_pane_vc_t1

0xad50,	// (0x00017bf6) list_double_time_pane_vc_t2_ParamLimits

0xad50,	// (0x00017bf6) list_double_time_pane_vc_t2

0xad79,	// (0x00017c1f) list_double_time_pane_vc_t3_ParamLimits

0xad79,	// (0x00017c1f) list_double_time_pane_vc_t3

0xad8b,	// (0x00017c31) list_double_time_pane_vc_t4_ParamLimits

0xad8b,	// (0x00017c31) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0001c8ec) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0001c8ec) list_double_time_pane_vc_t

0x7dbc,	// (0x00014c62) list_double_pane_vc_g1_ParamLimits

0x7dbc,	// (0x00014c62) list_double_pane_vc_g1

0x8cce,	// (0x00015b74) list_double_pane_vc_g2_ParamLimits

0x8cce,	// (0x00015b74) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c686) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c686) list_double_pane_vc_g

0xadb0,	// (0x00017c56) list_double_pane_vc_t1_ParamLimits

0xadb0,	// (0x00017c56) list_double_pane_vc_t1

0xadc4,	// (0x00017c6a) list_double_pane_vc_t2_ParamLimits

0xadc4,	// (0x00017c6a) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001c8f5) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001c8f5) list_double_pane_vc_t

0x7dbc,	// (0x00014c62) list_double_number_pane_vc_g1_ParamLimits

0x7dbc,	// (0x00014c62) list_double_number_pane_vc_g1

0x8cce,	// (0x00015b74) list_double_number_pane_vc_g2_ParamLimits

0x8cce,	// (0x00015b74) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001c686) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001c686) list_double_number_pane_vc_g

0xadda,	// (0x00017c80) list_double_number_pane_vc_t1_ParamLimits

0xadda,	// (0x00017c80) list_double_number_pane_vc_t1

0xadee,	// (0x00017c94) list_double_number_pane_vc_t2_ParamLimits

0xadee,	// (0x00017c94) list_double_number_pane_vc_t2

0xae02,	// (0x00017ca8) list_double_number_pane_vc_t3_ParamLimits

0xae02,	// (0x00017ca8) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0001c8fa) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0001c8fa) list_double_number_pane_vc_t

0xae18,	// (0x00017cbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0xae18,	// (0x00017cbe) list_double_large_graphic_pane_vc_g1

0xae29,	// (0x00017ccf) list_double_large_graphic_pane_vc_g2_ParamLimits

0xae29,	// (0x00017ccf) list_double_large_graphic_pane_vc_g2

0x8cce,	// (0x00015b74) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8cce,	// (0x00015b74) list_double_large_graphic_pane_vc_g3

0xae38,	// (0x00017cde) list_double_large_graphic_pane_vc_g4_ParamLimits

0xae38,	// (0x00017cde) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0001c901) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0001c901) list_double_large_graphic_pane_vc_g

0xae44,	// (0x00017cea) list_double_large_graphic_pane_vc_t1_ParamLimits

0xae44,	// (0x00017cea) list_double_large_graphic_pane_vc_t1

0xae5d,	// (0x00017d03) list_double_large_graphic_pane_vc_t2_ParamLimits

0xae5d,	// (0x00017d03) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0001c90a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0001c90a) list_double_large_graphic_pane_vc_t

0xa9ee,	// (0x00017894) list_double_heading_pane_vc_g1_ParamLimits

0xa9ee,	// (0x00017894) list_double_heading_pane_vc_g1

0xa9fa,	// (0x000178a0) list_double_heading_pane_vc_g2_ParamLimits

0xa9fa,	// (0x000178a0) list_double_heading_pane_vc_g2

0x0001,

0xfa69,	// (0x0001c90f) list_double_heading_pane_vc_g_ParamLimits

0xfa69,	// (0x0001c90f) list_double_heading_pane_vc_g

0xae74,	// (0x00017d1a) list_double_heading_pane_vc_t1_ParamLimits

0xae74,	// (0x00017d1a) list_double_heading_pane_vc_t1

0x8d94,	// (0x00015c3a) list_double_heading_pane_vc_t2_ParamLimits

0x8d94,	// (0x00015c3a) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001c914) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001c914) list_double_heading_pane_vc_t

0x8cc2,	// (0x00015b68) list_double_graphic_pane_vc_g1_ParamLimits

0x8cc2,	// (0x00015b68) list_double_graphic_pane_vc_g1

0xae86,	// (0x00017d2c) list_double_graphic_pane_vc_g2_ParamLimits

0xae86,	// (0x00017d2c) list_double_graphic_pane_vc_g2

0xae95,	// (0x00017d3b) list_double_graphic_pane_vc_g3_ParamLimits

0xae95,	// (0x00017d3b) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0001c919) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0001c919) list_double_graphic_pane_vc_g

0xaea1,	// (0x00017d47) list_double_graphic_pane_vc_t1_ParamLimits

0xaea1,	// (0x00017d47) list_double_graphic_pane_vc_t1

0xaeb5,	// (0x00017d5b) list_double_graphic_pane_vc_t2_ParamLimits

0xaeb5,	// (0x00017d5b) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001c920) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001c920) list_double_graphic_pane_vc_t

0x514e,	// (0x00011ff4) aid_size_cell_fastswap

0x5156,	// (0x00011ffc) aid_size_cell_touch_ParamLimits

0x5156,	// (0x00011ffc) aid_size_cell_touch

0x53c1,	// (0x00012267) popup_fast_swap_wide_window_ParamLimits

0x53c1,	// (0x00012267) popup_fast_swap_wide_window

0x54df,	// (0x00012385) touch_pane_ParamLimits

0x54df,	// (0x00012385) touch_pane

0x3d05,	// (0x00010bab) button_value_adjust_pane_cp2

0x3d0d,	// (0x00010bb3) button_value_adjust_pane_cp4

0x3d15,	// (0x00010bbb) form_field_data_pane_cp2

0x76d1,	// (0x00014577) form_field_data_wide_pane_cp2

0x4329,	// (0x000111cf) bg_scroll_pane_ParamLimits

0x5773,	// (0x00012619) scroll_handle_pane_ParamLimits

0x5787,	// (0x0001262d) scroll_sc2_down_pane_ParamLimits

0x5787,	// (0x0001262d) scroll_sc2_down_pane

0x4383,	// (0x00011229) scroll_sc2_up_pane_ParamLimits

0x4383,	// (0x00011229) scroll_sc2_up_pane

0xb38f,	// (0x00018235) grid_wheel_folder_pane_g1_ParamLimits

0xb38f,	// (0x00018235) grid_wheel_folder_pane_g1

0x5951,	// (0x000127f7) clock_nsta_pane_cp2_ParamLimits

0x5951,	// (0x000127f7) clock_nsta_pane_cp2

0x786e,	// (0x00014714) listscroll_midp_pane_ParamLimits

0x7e53,	// (0x00014cf9) midp_canvas_pane

0x8141,	// (0x00014fe7) nsta_clock_indic_pane

0x819f,	// (0x00015045) listscroll_form_pane_vc

0x81c3,	// (0x00015069) listscroll_set_pane_vc_ParamLimits

0x81c3,	// (0x00015069) listscroll_set_pane_vc

0x88e7,	// (0x0001578d) clock_nsta_pane

0x8964,	// (0x0001580a) indicator_nsta_pane

0x8c5c,	// (0x00015b02) bg_popup_sub_pane_cp2_ParamLimits

0x8c70,	// (0x00015b16) find_pane_cp2_ParamLimits

0x8c70,	// (0x00015b16) find_pane_cp2

0x8c86,	// (0x00015b2c) grid_toobar_pane_ParamLimits

0x8e46,	// (0x00015cec) list_form_gen_pane_vc_ParamLimits

0x8e46,	// (0x00015cec) list_form_gen_pane_vc

0x8e5c,	// (0x00015d02) scroll_pane_cp8_vc_ParamLimits

0x8e5c,	// (0x00015d02) scroll_pane_cp8_vc

0x8ed8,	// (0x00015d7e) data_form_wide_pane_vc_ParamLimits

0x8ed8,	// (0x00015d7e) data_form_wide_pane_vc

0x8ee4,	// (0x00015d8a) form_field_data_wide_pane_vc_g1

0x8eec,	// (0x00015d92) form_field_data_wide_pane_vc_t1_ParamLimits

0x8eec,	// (0x00015d92) form_field_data_wide_pane_vc_t1

0x3d70,	// (0x00010c16) input_focus_pane_cp6_vc_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_cp6_vc

0x921d,	// (0x000160c3) list_midp_pane_ParamLimits

0x9229,	// (0x000160cf) scroll_pane_cp16_ParamLimits

0x9229,	// (0x000160cf) scroll_pane_cp16

0x9277,	// (0x0001611d) button_value_adjust_pane_ParamLimits

0x9277,	// (0x0001611d) button_value_adjust_pane

0xa231,	// (0x000170d7) button_value_adjust_pane_cp6_ParamLimits

0xa231,	// (0x000170d7) button_value_adjust_pane_cp6

0xa37f,	// (0x00017225) settings_code_pane_cp_ParamLimits

0xa37f,	// (0x00017225) settings_code_pane_cp

0x33f3,	// (0x00010299) cell_touch_pane_g1

0x33f3,	// (0x00010299) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001c5aa) cell_touch_pane_g

0xa9cd,	// (0x00017873) cell_touch_pane_cp_ParamLimits

0xa9cd,	// (0x00017873) cell_touch_pane_cp

0xa9dd,	// (0x00017883) cell_touch_pane_ParamLimits

0xa9dd,	// (0x00017883) cell_touch_pane

0x33f3,	// (0x00010299) scroll_sc2_down_pane_g1

0x33f3,	// (0x00010299) scroll_sc2_up_pane_g1

0x356c,	// (0x00010412) bg_set_opt_pane_cp4_vc

0xaa3a,	// (0x000178e0) list_set_graphic_pane_vc_g1_ParamLimits

0xaa3a,	// (0x000178e0) list_set_graphic_pane_vc_g1

0x3e59,	// (0x00010cff) list_set_graphic_pane_vc_g2_ParamLimits

0x3e59,	// (0x00010cff) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0001c8a6) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0001c8a6) list_set_graphic_pane_vc_g

0xaa46,	// (0x000178ec) text_primary_small_cp13_vc_ParamLimits

0xaa46,	// (0x000178ec) text_primary_small_cp13_vc

0xaa5e,	// (0x00017904) list_set_graphic_pane_vc_ParamLimits

0xaa5e,	// (0x00017904) list_set_graphic_pane_vc

0x356c,	// (0x00010412) input_focus_pane_cp2_vc

0x33f3,	// (0x00010299) setting_code_pane_vc_g1

0x36d2,	// (0x00010578) setting_code_pane_vc_t1

0xaa73,	// (0x00017919) set_text_pane_vc_t1_ParamLimits

0xaa73,	// (0x00017919) set_text_pane_vc_t1

0x356c,	// (0x00010412) input_focus_pane_cp1_vc

0xaa91,	// (0x00017937) list_set_text_pane_vc

0x33f3,	// (0x00010299) setting_text_pane_vc_g1

0x356c,	// (0x00010412) bg_set_opt_pane_cp2_vc

0x36a1,	// (0x00010547) setting_slider_graphic_pane_vc_g1

0xaa9b,	// (0x00017941) setting_slider_graphic_pane_vc_t1

0xaaad,	// (0x00017953) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0001c8ab) setting_slider_graphic_pane_vc_t

0xaabf,	// (0x00017965) slider_set_pane_cp_vc

0xaac9,	// (0x0001796f) slider_set_pane_vc_g1

0xaad2,	// (0x00017978) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001c8b0) slider_set_pane_vc_g

0x3e39,	// (0x00010cdf) set_opt_bg_pane_g1_copy1

0x3e41,	// (0x00010ce7) set_opt_bg_pane_g2_copy1

0xaafe,	// (0x000179a4) set_opt_bg_pane_g3_copy1

0x3e51,	// (0x00010cf7) set_opt_bg_pane_g4_copy1

0x3e7d,	// (0x00010d23) set_opt_bg_pane_g5_copy1

0x3e85,	// (0x00010d2b) set_opt_bg_pane_g6_copy1

0xab08,	// (0x000179ae) set_opt_bg_pane_g7_copy1

0xab12,	// (0x000179b8) set_opt_bg_pane_g8_copy1

0xab1c,	// (0x000179c2) set_opt_bg_pane_g9_copy1

0x356c,	// (0x00010412) bg_set_opt_pane_cp_vc

0xab26,	// (0x000179cc) setting_slider_pane_vc_t1

0xab35,	// (0x000179db) setting_slider_pane_vc_t2

0xab47,	// (0x000179ed) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0001c8bf) setting_slider_pane_vc_t

0xab59,	// (0x000179ff) slider_set_pane_vc

0x5d61,	// (0x00012c07) volume_set_pane_vc_g1

0x5d6a,	// (0x00012c10) volume_set_pane_vc_g2

0x5d73,	// (0x00012c19) volume_set_pane_vc_g3

0x5d7c,	// (0x00012c22) volume_set_pane_vc_g4

0x5d85,	// (0x00012c2b) volume_set_pane_vc_g5

0x5d8e,	// (0x00012c34) volume_set_pane_vc_g6

0x5d97,	// (0x00012c3d) volume_set_pane_vc_g7

0x5da0,	// (0x00012c46) volume_set_pane_vc_g8

0x5da9,	// (0x00012c4f) volume_set_pane_vc_g9

0x5db2,	// (0x00012c58) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0001c75d) volume_set_pane_vc_g

0xab63,	// (0x00017a09) volume_set_pane_vc

0xab6d,	// (0x00017a13) button_value_adjust_pane_cp1_vc

0xab77,	// (0x00017a1d) list_highlight_pane_cp2_vc

0xab80,	// (0x00017a26) list_set_pane_vc_ParamLimits

0xab80,	// (0x00017a26) list_set_pane_vc

0xabf0,	// (0x00017a96) main_pane_set_vc_t1_ParamLimits

0xabf0,	// (0x00017a96) main_pane_set_vc_t1

0xac05,	// (0x00017aab) main_pane_set_vc_t2_ParamLimits

0xac05,	// (0x00017aab) main_pane_set_vc_t2

0xac17,	// (0x00017abd) main_pane_set_vc_t3_ParamLimits

0xac17,	// (0x00017abd) main_pane_set_vc_t3

0xac2b,	// (0x00017ad1) main_pane_set_vc_t4_ParamLimits

0xac2b,	// (0x00017ad1) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0001c8c6) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0001c8c6) main_pane_set_vc_t

0xac3f,	// (0x00017ae5) setting_code_pane_vc_ParamLimits

0xac3f,	// (0x00017ae5) setting_code_pane_vc

0xac50,	// (0x00017af6) setting_slider_graphic_pane_vc

0xac50,	// (0x00017af6) setting_slider_pane_vc

0xac50,	// (0x00017af6) setting_text_pane_vc

0xac50,	// (0x00017af6) setting_volume_pane_vc

0xac5a,	// (0x00017b00) scroll_pane_cp121_vc

0x3cf3,	// (0x00010b99) set_content_pane_vc

0xaecb,	// (0x00017d71) button_value_adjust_pane_g1

0xaed4,	// (0x00017d7a) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001c925) button_value_adjust_pane_g

0xaedd,	// (0x00017d83) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaedd,	// (0x00017d83) form_field_slider_wide_pane_vc_t1

0xaeef,	// (0x00017d95) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaeef,	// (0x00017d95) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001c92a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001c92a) form_field_slider_wide_pane_vc_t

0x361a,	// (0x000104c0) input_focus_pane_cp10_vc_ParamLimits

0x361a,	// (0x000104c0) input_focus_pane_cp10_vc

0xaf1b,	// (0x00017dc1) slider_cont_pane_cp1_vc_ParamLimits

0xaf1b,	// (0x00017dc1) slider_cont_pane_cp1_vc

0xaf2d,	// (0x00017dd3) slider_form_pane_g1_cp2

0xaad2,	// (0x00017978) slider_form_pane_g2_cp2

0xaf5a,	// (0x00017e00) form_field_slider_pane_vc_t3

0xaf68,	// (0x00017e0e) form_field_slider_pane_vc_t4

0xaf76,	// (0x00017e1c) slider_form_pane_vc_ParamLimits

0xaf76,	// (0x00017e1c) slider_form_pane_vc

0xaf83,	// (0x00017e29) form_field_slider_pane_vc_t1_ParamLimits

0xaf83,	// (0x00017e29) form_field_slider_pane_vc_t1

0xaeef,	// (0x00017d95) form_field_slider_pane_vc_t2_ParamLimits

0xaeef,	// (0x00017d95) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001c93c) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001c93c) form_field_slider_pane_vc_t

0x361a,	// (0x000104c0) input_focus_pane_cp9_vc_ParamLimits

0x361a,	// (0x000104c0) input_focus_pane_cp9_vc

0xaf99,	// (0x00017e3f) slider_cont_pane_vc_ParamLimits

0xaf99,	// (0x00017e3f) slider_cont_pane_vc

0xafad,	// (0x00017e53) list_form_graphic_pane_cp_vc_ParamLimits

0xafad,	// (0x00017e53) list_form_graphic_pane_cp_vc

0x8ee4,	// (0x00015d8a) form_field_popup_wide_pane_vc_g1

0xafc2,	// (0x00017e68) form_field_popup_wide_pane_vc_t1_ParamLimits

0xafc2,	// (0x00017e68) form_field_popup_wide_pane_vc_t1

0x3d70,	// (0x00010c16) input_focus_pane_cp8_vc_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_cp8_vc

0xb007,	// (0x00017ead) list_form_wide_pane_vc_ParamLimits

0xb007,	// (0x00017ead) list_form_wide_pane_vc

0xb013,	// (0x00017eb9) list_form_graphic_pane_vc_g1

0xb01b,	// (0x00017ec1) list_form_graphic_pane_vc_t1_ParamLimits

0xb01b,	// (0x00017ec1) list_form_graphic_pane_vc_t1

0x3632,	// (0x000104d8) list_highlight_pane_cp5_vc_ParamLimits

0x3632,	// (0x000104d8) list_highlight_pane_cp5_vc

0xb037,	// (0x00017edd) list_form_graphic_pane_vc_ParamLimits

0xb037,	// (0x00017edd) list_form_graphic_pane_vc

0x8ee4,	// (0x00015d8a) form_field_popup_pane_vc_g1

0xb04d,	// (0x00017ef3) form_field_popup_pane_vc_t1_ParamLimits

0xb04d,	// (0x00017ef3) form_field_popup_pane_vc_t1

0x3d70,	// (0x00010c16) input_focus_pane_cp7_vc_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_cp7_vc

0xb064,	// (0x00017f0a) list_form_pane_vc_ParamLimits

0xb064,	// (0x00017f0a) list_form_pane_vc

0xb070,	// (0x00017f16) data_form_pane_vc_t1_ParamLimits

0xb070,	// (0x00017f16) data_form_pane_vc_t1

0x3e39,	// (0x00010cdf) input_focus_pane_vc_g1

0x3e41,	// (0x00010ce7) input_focus_pane_vc_g2

0x3e49,	// (0x00010cef) input_focus_pane_vc_g3

0x3e51,	// (0x00010cf7) input_focus_pane_vc_g4

0x3e7d,	// (0x00010d23) input_focus_pane_vc_g5

0x3e85,	// (0x00010d2b) input_focus_pane_vc_g6

0x3e8d,	// (0x00010d33) input_focus_pane_vc_g7

0x3e95,	// (0x00010d3b) input_focus_pane_vc_g8

0x3e9d,	// (0x00010d43) input_focus_pane_vc_g9

0x33f3,	// (0x00010299) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001c533) input_focus_pane_vc_g

0x8ed8,	// (0x00015d7e) data_form_pane_vc_ParamLimits

0x8ed8,	// (0x00015d7e) data_form_pane_vc

0x8ee4,	// (0x00015d8a) form_field_data_pane_vc_g1

0xb08d,	// (0x00017f33) form_field_data_pane_vc_t1_ParamLimits

0xb08d,	// (0x00017f33) form_field_data_pane_vc_t1

0x3d70,	// (0x00010c16) input_focus_pane_vc_ParamLimits

0x3d70,	// (0x00010c16) input_focus_pane_vc

0xb0a7,	// (0x00017f4d) button_value_adjust_pane_cp3_vc

0xb0af,	// (0x00017f55) button_value_adjust_pane_cp5_vc

0xb0b7,	// (0x00017f5d) form_field_data_pane_vc_ParamLimits

0xb0b7,	// (0x00017f5d) form_field_data_pane_vc

0xb0d2,	// (0x00017f78) form_field_data_pane_vc_cp2

0xb0da,	// (0x00017f80) form_field_data_wide_pane_vc_ParamLimits

0xb0da,	// (0x00017f80) form_field_data_wide_pane_vc

0xb0f4,	// (0x00017f9a) form_field_data_wide_pane_vc_cp2

0xb0fc,	// (0x00017fa2) form_field_popup_pane_vc_ParamLimits

0xb0fc,	// (0x00017fa2) form_field_popup_pane_vc

0xb117,	// (0x00017fbd) form_field_popup_wide_pane_vc_ParamLimits

0xb117,	// (0x00017fbd) form_field_popup_wide_pane_vc

0xb131,	// (0x00017fd7) form_field_slider_pane_vc_ParamLimits

0xb131,	// (0x00017fd7) form_field_slider_pane_vc

0xb144,	// (0x00017fea) form_field_slider_wide_pane_vc_ParamLimits

0xb144,	// (0x00017fea) form_field_slider_wide_pane_vc

0xb157,	// (0x00017ffd) grid_touch_1_pane_ParamLimits

0xb157,	// (0x00017ffd) grid_touch_1_pane

0xb163,	// (0x00018009) grid_touch_2_pane_ParamLimits

0xb163,	// (0x00018009) grid_touch_2_pane

0x810c,	// (0x00014fb2) touch_pane_g1_ParamLimits

0x810c,	// (0x00014fb2) touch_pane_g1

0xb17d,	// (0x00018023) cell_app_pane_cp_wide_ParamLimits

0xb17d,	// (0x00018023) cell_app_pane_cp_wide

0xb18e,	// (0x00018034) grid_popup_fast_wide_pane_ParamLimits

0xb18e,	// (0x00018034) grid_popup_fast_wide_pane

0xb1a2,	// (0x00018048) scroll_pane_cp19_ParamLimits

0xb1a2,	// (0x00018048) scroll_pane_cp19

0x356c,	// (0x00010412) bg_popup_window_pane_cp20

0xb1b6,	// (0x0001805c) listscroll_popup_fast_wide_pane

0x3632,	// (0x000104d8) grid_indicator_nsta_pane

0xb1be,	// (0x00018064) clock_nsta_pane_g1

0xb1c7,	// (0x0001806d) clock_nsta_pane_t1

0xb1e3,	// (0x00018089) cell_indicator_nsta_pane_ParamLimits

0xb1e3,	// (0x00018089) cell_indicator_nsta_pane

0xb21b,	// (0x000180c1) cell_indicator_nsta_pane_g1

0xb229,	// (0x000180cf) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001c94d) cell_indicator_nsta_pane_g

0xb23f,	// (0x000180e5) clock_nsta_pane_cp

0xb247,	// (0x000180ed) indicator_nsta_pane_cp

0xb250,	// (0x000180f6) nsta_clock_indic_pane_g1

0x3711,	// (0x000105b7) grid_indicator_pane

0x4475,	// (0x0001131b) scroll_pane_cp29

0x589d,	// (0x00012743) indicator_nsta_pane_cp2_ParamLimits

0x589d,	// (0x00012743) indicator_nsta_pane_cp2

0x3632,	// (0x000104d8) main_apps_wheel_pane

0x90fa,	// (0x00015fa0) form_midp_field_text_pane_ParamLimits

0x9249,	// (0x000160ef) scroll_bar_cp050_ParamLimits

0xb2b9,	// (0x0001815f) cell_indicator_pane_ParamLimits

0xb2b9,	// (0x0001815f) cell_indicator_pane

0xb2d1,	// (0x00018177) cell_indicator_pane_g1

0xb2db,	// (0x00018181) grid_wheel_folder_pane_ParamLimits

0xb2db,	// (0x00018181) grid_wheel_folder_pane

0xb2ef,	// (0x00018195) list_wheel_apps_pane_ParamLimits

0xb2ef,	// (0x00018195) list_wheel_apps_pane

0xb302,	// (0x000181a8) main_apps_wheel_pane_g1_ParamLimits

0xb302,	// (0x000181a8) main_apps_wheel_pane_g1

0xb31e,	// (0x000181c4) main_apps_wheel_pane_g2_ParamLimits

0xb31e,	// (0x000181c4) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001c969) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001c969) main_apps_wheel_pane_g

0xb33a,	// (0x000181e0) main_apps_wheel_pane_t1_ParamLimits

0xb33a,	// (0x000181e0) main_apps_wheel_pane_t1

0xb363,	// (0x00018209) list_wheel_apps_pane_g1

0xb36b,	// (0x00018211) list_wheel_apps_pane_g2

0xb373,	// (0x00018219) list_wheel_apps_pane_g3

0xb37b,	// (0x00018221) list_wheel_apps_pane_g4

0xb385,	// (0x0001822b) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001c96e) list_wheel_apps_pane_g

0x7cc7,	// (0x00014b6d) navi_icon_text_pane

0x8814,	// (0x000156ba) aid_fill_nsta

0xb3a6,	// (0x0001824c) navi_icon_text_pane_g1

0xb3b2,	// (0x00018258) navi_icon_text_pane_t1

0x7b5d,	// (0x00014a03) list_set_graphic_pane_t1_ParamLimits

0x7b5d,	// (0x00014a03) list_set_graphic_pane_t1

0x999a,	// (0x00016840) popup_midp_note_alarm_window_t6_ParamLimits

0x999a,	// (0x00016840) popup_midp_note_alarm_window_t6

0x99ac,	// (0x00016852) popup_midp_note_alarm_window_t7_ParamLimits

0x99ac,	// (0x00016852) popup_midp_note_alarm_window_t7

0x99be,	// (0x00016864) popup_midp_note_alarm_window_t8_ParamLimits

0x99be,	// (0x00016864) popup_midp_note_alarm_window_t8

0x99d0,	// (0x00016876) popup_midp_note_alarm_window_t9_ParamLimits

0x99d0,	// (0x00016876) popup_midp_note_alarm_window_t9

0x99e2,	// (0x00016888) popup_midp_note_alarm_window_t10_ParamLimits

0x99e2,	// (0x00016888) popup_midp_note_alarm_window_t10

0x99f4,	// (0x0001689a) popup_midp_note_alarm_window_t11_ParamLimits

0x99f4,	// (0x0001689a) popup_midp_note_alarm_window_t11

0x9a06,	// (0x000168ac) scroll_pane_cp17_ParamLimits

0x9a06,	// (0x000168ac) scroll_pane_cp17

0x5d61,	// (0x00012c07) volume_small_pane_cp_g1

0x6072,	// (0x00012f18) volume_small_pane_cp_g2

0x607b,	// (0x00012f21) volume_small_pane_cp_g3

0x6084,	// (0x00012f2a) volume_small_pane_cp_g4

0x608d,	// (0x00012f33) volume_small_pane_cp_g5

0x6096,	// (0x00012f3c) volume_small_pane_cp_g6

0x609f,	// (0x00012f45) volume_small_pane_cp_g7

0x60a8,	// (0x00012f4e) volume_small_pane_cp_g8

0x60b1,	// (0x00012f57) volume_small_pane_cp_g9

0x60ba,	// (0x00012f60) volume_small_pane_cp_g10

0x7f1c,	// (0x00014dc2) midp_ticker_pane_g1_ParamLimits

0x7f28,	// (0x00014dce) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001c5ff) midp_ticker_pane_g_ParamLimits

0x7f34,	// (0x00014dda) midp_ticker_pane_t1_ParamLimits

0x882a,	// (0x000156d0) aid_fill_nsta_2

0x9235,	// (0x000160db) list_form2_midp_pane

0xa3fb,	// (0x000172a1) midp_editing_number_pane_ParamLimits

0xa40a,	// (0x000172b0) midp_ticker_pane_ParamLimits

0xb3c4,	// (0x0001826a) form2_midp_field_pane

0xb3e8,	// (0x0001828e) scroll_pane_cp51

0xb408,	// (0x000182ae) form2_midp_button_pane_ParamLimits

0xb408,	// (0x000182ae) form2_midp_button_pane

0xb41a,	// (0x000182c0) form2_midp_content_pane_ParamLimits

0xb41a,	// (0x000182c0) form2_midp_content_pane

0xb434,	// (0x000182da) form2_midp_field_choice_group_pane

0xb43c,	// (0x000182e2) form2_midp_field_pane_g1

0xb444,	// (0x000182ea) form2_midp_field_pane_g2

0xb44c,	// (0x000182f2) form2_midp_field_pane_g3

0xb454,	// (0x000182fa) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001c993) form2_midp_field_pane_g

0xb45c,	// (0x00018302) form2_midp_gauge_slider_pane

0xb464,	// (0x0001830a) form2_midp_gauge_wait_pane

0xb46c,	// (0x00018312) form2_midp_image_pane_ParamLimits

0xb46c,	// (0x00018312) form2_midp_image_pane

0xb487,	// (0x0001832d) form2_midp_label_pane_ParamLimits

0xb487,	// (0x0001832d) form2_midp_label_pane

0xb4a6,	// (0x0001834c) form2_midp_label_pane_cp_ParamLimits

0xb4a6,	// (0x0001834c) form2_midp_label_pane_cp

0xb4c7,	// (0x0001836d) form2_midp_string_pane_ParamLimits

0xb4c7,	// (0x0001836d) form2_midp_string_pane

0xb4d9,	// (0x0001837f) form2_midp_text_pane_ParamLimits

0xb4d9,	// (0x0001837f) form2_midp_text_pane

0xb4fa,	// (0x000183a0) form2_midp_time_pane

0xb50a,	// (0x000183b0) input_focus_pane_cp51_ParamLimits

0xb50a,	// (0x000183b0) input_focus_pane_cp51

0xb522,	// (0x000183c8) form2_midp_label_pane_t1_ParamLimits

0xb522,	// (0x000183c8) form2_midp_label_pane_t1

0xb568,	// (0x0001840e) form2_mdip_text_pane_t1_ParamLimits

0xb568,	// (0x0001840e) form2_mdip_text_pane_t1

0xb58a,	// (0x00018430) form2_midp_time_pane_t1

0xb5a5,	// (0x0001844b) form2_midp_gauge_slider_pane_t1

0xb5b7,	// (0x0001845d) form2_midp_gauge_slider_pane_t2

0xb5c9,	// (0x0001846f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001c99c) form2_midp_gauge_slider_pane_t

0xb5db,	// (0x00018481) form2_midp_slider_pane

0xb5e7,	// (0x0001848d) form2_midp_gauge_wait_pane_t1

0xb5f5,	// (0x0001849b) form2_midp_wait_pane_ParamLimits

0xb5f5,	// (0x0001849b) form2_midp_wait_pane

0x8f2b,	// (0x00015dd1) list_single_2graphic_pane_cp4_ParamLimits

0x8f2b,	// (0x00015dd1) list_single_2graphic_pane_cp4

0xb620,	// (0x000184c6) list_single_midp_graphic_pane_cp_ParamLimits

0xb620,	// (0x000184c6) list_single_midp_graphic_pane_cp

0x356c,	// (0x00010412) list_highlight_pane_cp20

0xb644,	// (0x000184ea) list_single_2graphic_pane_g1_cp4

0xa8d0,	// (0x00017776) list_single_2graphic_pane_g2_cp4

0xb64c,	// (0x000184f2) list_single_2graphic_pane_t1_cp4

0x3632,	// (0x000104d8) list_highlight_pane_cp21

0xb65b,	// (0x00018501) list_single_midp_graphic_pane_g4_cp

0xb66a,	// (0x00018510) list_single_midp_graphic_pane_t1_cp

0xb67f,	// (0x00018525) form2_mdip_string_pane_t1_ParamLimits

0xb67f,	// (0x00018525) form2_mdip_string_pane_t1

0x356c,	// (0x00010412) bg_wml_button_pane_cp2

0x33f3,	// (0x00010299) form2_midp_image_pane_g1

0x3c9d,	// (0x00010b43) list_double_large_graphic_pane_g5_ParamLimits

0x3c9d,	// (0x00010b43) list_double_large_graphic_pane_g5

0x786e,	// (0x00014714) midp_form_pane_ParamLimits

0x3632,	// (0x000104d8) main_apps_wheel_pane_ParamLimits

0x85be,	// (0x00015464) popup_preview_window_ParamLimits

0x85be,	// (0x00015464) popup_preview_window

0x87a5,	// (0x0001564b) popup_touch_info_window_ParamLimits

0x87a5,	// (0x0001564b) popup_touch_info_window

0x87c7,	// (0x0001566d) popup_touch_menu_window_ParamLimits

0x87c7,	// (0x0001566d) popup_touch_menu_window

0x33e9,	// (0x0001028f) bg_popup_sub_pane_cp6

0xb724,	// (0x000185ca) list_touch_menu_pane

0xb72c,	// (0x000185d2) list_single_touch_menu_pane_ParamLimits

0xb72c,	// (0x000185d2) list_single_touch_menu_pane

0xb744,	// (0x000185ea) list_single_touch_menu_pane_t1

0x3632,	// (0x000104d8) bg_popup_sub_pane_cp7_ParamLimits

0x3632,	// (0x000104d8) bg_popup_sub_pane_cp7

0xb752,	// (0x000185f8) heading_sub_pane

0xb75a,	// (0x00018600) list_touch_info_pane_ParamLimits

0xb75a,	// (0x00018600) list_touch_info_pane

0xb769,	// (0x0001860f) list_single_touch_info_pane_ParamLimits

0xb769,	// (0x0001860f) list_single_touch_info_pane

0xb77b,	// (0x00018621) list_single_touch_info_pane_t1

0xb789,	// (0x0001862f) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001c9aa) list_single_touch_info_pane_t

0x7e4b,	// (0x00014cf1) bg_popup_heading_pane_cp

0xb797,	// (0x0001863d) heading_sub_pane_t1

0x8e72,	// (0x00015d18) bg_popup_preview_window_pane_cp_ParamLimits

0x8e72,	// (0x00015d18) bg_popup_preview_window_pane_cp

0xb752,	// (0x000185f8) heading_preview_pane

0xb75a,	// (0x00018600) list_preview_pane_ParamLimits

0xb75a,	// (0x00018600) list_preview_pane

0xb7a5,	// (0x0001864b) popup_preview_window_g1

0xb769,	// (0x0001860f) list_single_preview_pane_ParamLimits

0xb769,	// (0x0001860f) list_single_preview_pane

0xb7ad,	// (0x00018653) list_single_preview_pane_g1

0xb7b5,	// (0x0001865b) list_single_preview_pane_t1

0xb77b,	// (0x00018621) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001c9af) list_single_preview_pane_t

0xb7c3,	// (0x00018669) bg_popup_heading_pane_cp2_ParamLimits

0xb7c3,	// (0x00018669) bg_popup_heading_pane_cp2

0xb7d9,	// (0x0001867f) heading_preview_pane_g1

0xb7e1,	// (0x00018687) heading_preview_pane_t1_ParamLimits

0xb7e1,	// (0x00018687) heading_preview_pane_t1

0x3728,	// (0x000105ce) soft_indicator_pane_t1_ParamLimits

0x3c5d,	// (0x00010b03) scroll_pane_ParamLimits

0x437a,	// (0x00011220) scroll_sc2_left_pane

0x4371,	// (0x00011217) scroll_sc2_right_pane

0x4399,	// (0x0001123f) scroll_bg_pane_g1_ParamLimits

0x43ae,	// (0x00011254) scroll_bg_pane_g2_ParamLimits

0x43c6,	// (0x0001126c) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001c58a) scroll_bg_pane_g_ParamLimits

0x4399,	// (0x0001123f) scroll_handle_pane_g1_ParamLimits

0x43e8,	// (0x0001128e) scroll_handle_pane_g2_ParamLimits

0x43c6,	// (0x0001126c) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001c591) scroll_handle_pane_g_ParamLimits

0x8205,	// (0x000150ab) popup_choice_list_window_ParamLimits

0x8205,	// (0x000150ab) popup_choice_list_window

0x8c68,	// (0x00015b0e) choice_list_pane

0x8d18,	// (0x00015bbe) cell_toolbar_pane_t1

0x8d40,	// (0x00015be6) toolbar_button_pane_ParamLimits

0x9ed0,	// (0x00016d76) ai_gene_pane_1_t2_ParamLimits

0x9ed0,	// (0x00016d76) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0001c7b9) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0001c7b9) ai_gene_pane_1_t

0xb7fe,	// (0x000186a4) scroll_sc2_left_pane_g1

0xb7fe,	// (0x000186a4) scroll_sc2_right_pane_g1

0x81d5,	// (0x0001507b) bg_popup_sub_pane_cp10

0xb808,	// (0x000186ae) list_choice_list_pane

0xb821,	// (0x000186c7) list_single_choice_list_pane_ParamLimits

0xb821,	// (0x000186c7) list_single_choice_list_pane

0xb839,	// (0x000186df) list_single_choice_list_pane_g1

0x3f82,	// (0x00010e28) list_single_choice_list_pane_t1_ParamLimits

0x3f82,	// (0x00010e28) list_single_choice_list_pane_t1

0xb841,	// (0x000186e7) choice_list_pane_g1

0xb849,	// (0x000186ef) choice_list_pane_t1

0x33e9,	// (0x0001028f) input_focus_pane_cp11

0x415e,	// (0x00011004) title_pane_stacon_g2_ParamLimits

0x415e,	// (0x00011004) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001c570) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001c570) title_pane_stacon_g

0x7e4b,	// (0x00014cf1) cursor_press_pane

0x82bf,	// (0x00015165) popup_fep_hwr_window_ParamLimits

0x82bf,	// (0x00015165) popup_fep_hwr_window

0x8349,	// (0x000151ef) popup_fep_vkb_window_ParamLimits

0x8349,	// (0x000151ef) popup_fep_vkb_window

0xb857,	// (0x000186fd) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001c9d8) fep_vkb_side_pane_g_ParamLimits

0x60fc,	// (0x00012fa2) fep_hwr_candidate_pane_ParamLimits

0x60fc,	// (0x00012fa2) fep_hwr_candidate_pane

0x6126,	// (0x00012fcc) fep_hwr_side_pane_ParamLimits

0x6126,	// (0x00012fcc) fep_hwr_side_pane

0x6148,	// (0x00012fee) fep_hwr_top_pane_ParamLimits

0x6148,	// (0x00012fee) fep_hwr_top_pane

0x6160,	// (0x00013006) fep_hwr_write_pane_ParamLimits

0x6160,	// (0x00013006) fep_hwr_write_pane

0xfb32,	// (0x0001c9d8) fep_vkb_side_pane_g

0xb85f,	// (0x00018705) fep_hwr_top_pane_g1

0xb871,	// (0x00018717) fep_hwr_top_pane_g2

0x619a,	// (0x00013040) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001c9b4) fep_hwr_top_pane_g

0x61af,	// (0x00013055) fep_hwr_top_text_pane

0x44e2,	// (0x00011388) fep_hwr_top_text_pane_g1

0xb8a7,	// (0x0001874d) fep_hwr_top_text_pane_t1

0x62b9,	// (0x0001315f) fep_hwr_candidate_pane_g1

0xbaf2,	// (0x00018998) fep_vkb_keypad_pane_g3_ParamLimits

0xbaf2,	// (0x00018998) fep_vkb_keypad_pane_g3

0xbb1e,	// (0x000189c4) fep_vkb_keypad_pane_g4_ParamLimits

0xbb1e,	// (0x000189c4) fep_vkb_keypad_pane_g4

0xbb95,	// (0x00018a3b) fep_vkb_bottom_pane_g2_ParamLimits

0xbb95,	// (0x00018a3b) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001c9df) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001c9df) fep_vkb_bottom_pane_g

0xb7fe,	// (0x000186a4) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001c9e9) cell_vkb_side_pane_g

0xbc20,	// (0x00018ac6) cell_vkb_side_pane_t1

0xbc2e,	// (0x00018ad4) cell_vkb_side_pane_t1_copy1

0xb7fe,	// (0x000186a4) bg_fep_vkb_candidate_pane_g2

0xbd72,	// (0x00018c18) cell_vkb_candidate_pane_ParamLimits

0xb8b5,	// (0x0001875b) aid_size_cell_vkb_ParamLimits

0xb8b5,	// (0x0001875b) aid_size_cell_vkb

0xbd72,	// (0x00018c18) cell_vkb_candidate_pane

0x62e0,	// (0x00013186) bg_popup_fep_shadow_pane_g1

0xb947,	// (0x000187ed) fep_vkb_bottom_pane_ParamLimits

0xb947,	// (0x000187ed) fep_vkb_bottom_pane

0xb984,	// (0x0001882a) fep_vkb_candidate_pane_ParamLimits

0xb984,	// (0x0001882a) fep_vkb_candidate_pane

0xb9a0,	// (0x00018846) fep_vkb_keypad_pane_ParamLimits

0xb9a0,	// (0x00018846) fep_vkb_keypad_pane

0xb9d3,	// (0x00018879) fep_vkb_side_pane_ParamLimits

0xb9d3,	// (0x00018879) fep_vkb_side_pane

0xba0f,	// (0x000188b5) fep_vkb_top_pane_ParamLimits

0xba0f,	// (0x000188b5) fep_vkb_top_pane

0xba4b,	// (0x000188f1) fep_vkb_top_pane_g1_ParamLimits

0xba4b,	// (0x000188f1) fep_vkb_top_pane_g1

0xba5a,	// (0x00018900) fep_vkb_top_pane_g2_ParamLimits

0xba5a,	// (0x00018900) fep_vkb_top_pane_g2

0xba69,	// (0x0001890f) fep_vkb_top_pane_g3_ParamLimits

0xba69,	// (0x0001890f) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001c9cf) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001c9cf) fep_vkb_top_pane_g

0xba87,	// (0x0001892d) fep_vkb_top_text_pane_ParamLimits

0xba87,	// (0x0001892d) fep_vkb_top_text_pane

0xba98,	// (0x0001893e) fep_vkb_side_pane_g1_ParamLimits

0xba98,	// (0x0001893e) fep_vkb_side_pane_g1

0xbae1,	// (0x00018987) grid_vkb_side_pane_ParamLimits

0xbae1,	// (0x00018987) grid_vkb_side_pane

0x62e8,	// (0x0001318e) bg_popup_fep_shadow_pane_g2

0x62f1,	// (0x00013197) bg_popup_fep_shadow_pane_g3

0x62f9,	// (0x0001319f) bg_popup_fep_shadow_pane_g4

0x6302,	// (0x000131a8) bg_popup_fep_shadow_pane_g5

0x630c,	// (0x000131b2) bg_popup_fep_shadow_pane_g6

0x6314,	// (0x000131ba) bg_popup_fep_shadow_pane_g7

0x3e51,	// (0x00010cf7) bg_popup_fep_shadow_pane_g8

0xbb40,	// (0x000189e6) grid_vkb_keypad_number_pane_ParamLimits

0xbb40,	// (0x000189e6) grid_vkb_keypad_number_pane

0xbb54,	// (0x000189fa) grid_vkb_keypad_pane_ParamLimits

0xbb54,	// (0x000189fa) grid_vkb_keypad_pane

0xbb7a,	// (0x00018a20) fep_vkb_bottom_pane_g1_ParamLimits

0xbb7a,	// (0x00018a20) fep_vkb_bottom_pane_g1

0xbba3,	// (0x00018a49) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbba3,	// (0x00018a49) grid_vkb_keypad_bottom_left_pane

0xbbb8,	// (0x00018a5e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbbb8,	// (0x00018a5e) grid_vkb_keypad_bottom_right_pane

0xbbcd,	// (0x00018a73) fep_vkb_top_text_pane_g1

0xbbe8,	// (0x00018a8e) fep_vkb_top_text_pane_t1

0xbbfd,	// (0x00018aa3) cell_vkb_side_pane_ParamLimits

0xbbfd,	// (0x00018aa3) cell_vkb_side_pane

0xb7fe,	// (0x000186a4) cell_vkb_side_pane_g1

0xbc3c,	// (0x00018ae2) cell_vkb_keypad_pane_ParamLimits

0xbc3c,	// (0x00018ae2) cell_vkb_keypad_pane

0xbcc9,	// (0x00018b6f) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001c9fc) bg_popup_fep_shadow_pane_g

0x6326,	// (0x000131cc) cell_hwr_side_pane_g1

0x6326,	// (0x000131cc) cell_hwr_side_pane_g2

0xbcd3,	// (0x00018b79) cell_vkb_keypad_pane_t1

0xbce1,	// (0x00018b87) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbce1,	// (0x00018b87) cell_vkb_keypad_bottom_left_pane

0xbcfe,	// (0x00018ba4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbcfe,	// (0x00018ba4) cell_vkb_keypad_bottom_right_pane

0xb7fe,	// (0x000186a4) cell_vkb_keypad_bottom_left_pane_g1

0xb7fe,	// (0x000186a4) cell_vkb_keypad_bottom_right_pane_g1

0xbd37,	// (0x00018bdd) cell_vkb_keypad_number_pane_ParamLimits

0xbd37,	// (0x00018bdd) cell_vkb_keypad_number_pane

0xbd56,	// (0x00018bfc) cell_vkb_keypad_number_pane_g1

0xbd60,	// (0x00018c06) cell_vkb_keypad_number_pane_g2

0xbd69,	// (0x00018c0f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001c9ee) cell_vkb_keypad_number_pane_g

0xbcd3,	// (0x00018b79) cell_vkb_keypad_number_pane_t1

0xbd93,	// (0x00018c39) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0001ca0f) cell_hwr_side_pane_g

0xbdac,	// (0x00018c52) cell_hwr_side_pane_t1

0x6330,	// (0x000131d6) cell_hwr_side_pane_t1_copy1

0x633e,	// (0x000131e4) cell_hwr_candidate_pane_g1

0x636d,	// (0x00013213) cell_hwr_candidate_pane_t1

0xb7fe,	// (0x000186a4) cell_vkb_candidate_pane_g2

0xbdf0,	// (0x00018c96) cell_vkb_candidate_pane_t1

0x60c3,	// (0x00012f69) bg_popup_fep_shadow_pane_ParamLimits

0x60c3,	// (0x00012f69) bg_popup_fep_shadow_pane

0x617a,	// (0x00013020) bg_fep_hwr_top_pane_g4

0xb883,	// (0x00018729) bg_hwr_side_pane_g1_ParamLimits

0xb883,	// (0x00018729) bg_hwr_side_pane_g1

0x61ed,	// (0x00013093) cell_hwr_side_pane_ParamLimits

0x61ed,	// (0x00013093) cell_hwr_side_pane

0x622a,	// (0x000130d0) fep_hwr_write_pane_g1_ParamLimits

0x622a,	// (0x000130d0) fep_hwr_write_pane_g1

0x6237,	// (0x000130dd) fep_hwr_write_pane_g2_ParamLimits

0x6237,	// (0x000130dd) fep_hwr_write_pane_g2

0x6244,	// (0x000130ea) fep_hwr_write_pane_g3_ParamLimits

0x6244,	// (0x000130ea) fep_hwr_write_pane_g3

0x6252,	// (0x000130f8) fep_hwr_write_pane_g4_ParamLimits

0x6252,	// (0x000130f8) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001c9bb) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001c9bb) fep_hwr_write_pane_g

0x617a,	// (0x00013020) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x617a,	// (0x00013020) bg_fep_hwr_candidate_pane_g2

0x6267,	// (0x0001310d) cell_hwr_candidate_pane_ParamLimits

0x6267,	// (0x0001310d) cell_hwr_candidate_pane

0x62b9,	// (0x0001315f) fep_hwr_candidate_pane_g1_ParamLimits

0xb8e3,	// (0x00018789) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb8e3,	// (0x00018789) bg_popup_fep_shadow_pane_cp2

0xba79,	// (0x0001891f) fep_vkb_top_pane_g4_ParamLimits

0xba79,	// (0x0001891f) fep_vkb_top_pane_g4

0xbabf,	// (0x00018965) fep_vkb_side_pane_g2_ParamLimits

0xbabf,	// (0x00018965) fep_vkb_side_pane_g2

0x75ef,	// (0x00014495) list_setting_pane_t4_ParamLimits

0x75ef,	// (0x00014495) list_setting_pane_t4

0x766b,	// (0x00014511) list_setting_number_pane_t5_ParamLimits

0x766b,	// (0x00014511) list_setting_number_pane_t5

0x796a,	// (0x00014810) list_double_heading_pane_cp2_ParamLimits

0x796a,	// (0x00014810) list_double_heading_pane_cp2

0xbdfe,	// (0x00018ca4) list_double_heading_pane_g1_cp2_ParamLimits

0xbdfe,	// (0x00018ca4) list_double_heading_pane_g1_cp2

0xbe0a,	// (0x00018cb0) list_double_heading_pane_g2_cp2_ParamLimits

0xbe0a,	// (0x00018cb0) list_double_heading_pane_g2_cp2

0xbe1e,	// (0x00018cc4) list_double_heading_pane_t1_cp2_ParamLimits

0xbe1e,	// (0x00018cc4) list_double_heading_pane_t1_cp2

0xbe34,	// (0x00018cda) list_double_heading_pane_t2_cp2_ParamLimits

0xbe34,	// (0x00018cda) list_double_heading_pane_t2_cp2

0x33e1,	// (0x00010287) aid_value_unit2

0x541f,	// (0x000122c5) popup_preview_fixed_window

0x3808,	// (0x000106ae) bg_popup_preview_window_pane_cp02

0xbe46,	// (0x00018cec) list_preview_fixed_pane

0xbe8c,	// (0x00018d32) list_empty_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_empty_pane_fp

0xbe8c,	// (0x00018d32) list_single_cale_day_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_single_cale_day_pane_fp

0xbe8c,	// (0x00018d32) list_single_graphic_heading_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_single_graphic_heading_pane_fp

0xbe8c,	// (0x00018d32) list_single_graphic_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_single_graphic_pane_fp

0xbe8c,	// (0x00018d32) list_single_heading_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_single_heading_pane_fp

0xbe8c,	// (0x00018d32) list_single_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_single_pane_fp

0xbea5,	// (0x00018d4b) list_single_pane_fp_g1_ParamLimits

0xbea5,	// (0x00018d4b) list_single_pane_fp_g1

0xbdfe,	// (0x00018ca4) list_single_pane_fp_g2_ParamLimits

0xbdfe,	// (0x00018ca4) list_single_pane_fp_g2

0xbe0a,	// (0x00018cb0) list_single_pane_fp_g3_ParamLimits

0xbe0a,	// (0x00018cb0) list_single_pane_fp_g3

0xbeb1,	// (0x00018d57) list_single_pane_fp_g4_ParamLimits

0xbeb1,	// (0x00018d57) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0001ca22) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0001ca22) list_single_pane_fp_g

0xbebd,	// (0x00018d63) list_single_pane_fp_t1_ParamLimits

0xbebd,	// (0x00018d63) list_single_pane_fp_t1

0xbed4,	// (0x00018d7a) list_single_graphic_pane_fp_g1_ParamLimits

0xbed4,	// (0x00018d7a) list_single_graphic_pane_fp_g1

0xbea5,	// (0x00018d4b) list_single_graphic_pane_fp_g2_ParamLimits

0xbea5,	// (0x00018d4b) list_single_graphic_pane_fp_g2

0xbdfe,	// (0x00018ca4) list_single_graphic_pane_fp_g3_ParamLimits

0xbdfe,	// (0x00018ca4) list_single_graphic_pane_fp_g3

0xbe0a,	// (0x00018cb0) list_single_graphic_pane_fp_g4_ParamLimits

0xbe0a,	// (0x00018cb0) list_single_graphic_pane_fp_g4

0xbeb1,	// (0x00018d57) list_single_graphic_pane_fp_g5_ParamLimits

0xbeb1,	// (0x00018d57) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0001ca2b) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0001ca2b) list_single_graphic_pane_fp_g

0xbee0,	// (0x00018d86) list_single_graphic_pane_fp_t1_ParamLimits

0xbee0,	// (0x00018d86) list_single_graphic_pane_fp_t1

0xbed4,	// (0x00018d7a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbed4,	// (0x00018d7a) list_single_graphic_heading_pane_fp_g1

0xbea5,	// (0x00018d4b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbea5,	// (0x00018d4b) list_single_graphic_heading_pane_fp_g2

0xbdfe,	// (0x00018ca4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbdfe,	// (0x00018ca4) list_single_graphic_heading_pane_fp_g3

0xbe0a,	// (0x00018cb0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbe0a,	// (0x00018cb0) list_single_graphic_heading_pane_fp_g4

0xbeb1,	// (0x00018d57) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbeb1,	// (0x00018d57) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001ca2b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001ca2b) list_single_graphic_heading_pane_fp_g

0xbef6,	// (0x00018d9c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbef6,	// (0x00018d9c) list_single_graphic_heading_pane_fp_t1

0xbf0c,	// (0x00018db2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbf0c,	// (0x00018db2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0001ca36) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0001ca36) list_single_graphic_heading_pane_fp_t

0xbf1e,	// (0x00018dc4) list_single_cale_day_pane_fp_g1_ParamLimits

0xbf1e,	// (0x00018dc4) list_single_cale_day_pane_fp_g1

0xbf56,	// (0x00018dfc) list_single_cale_day_pane_fp_g2_ParamLimits

0xbf56,	// (0x00018dfc) list_single_cale_day_pane_fp_g2

0xbf62,	// (0x00018e08) list_single_cale_day_pane_fp_g3_ParamLimits

0xbf62,	// (0x00018e08) list_single_cale_day_pane_fp_g3

0xbf8a,	// (0x00018e30) list_single_cale_day_pane_fp_g4_ParamLimits

0xbf8a,	// (0x00018e30) list_single_cale_day_pane_fp_g4

0xbfae,	// (0x00018e54) list_single_cale_day_pane_fp_g5_ParamLimits

0xbfae,	// (0x00018e54) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0001ca3b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0001ca3b) list_single_cale_day_pane_fp_g

0xbfd2,	// (0x00018e78) list_single_cale_day_pane_fp_t1_ParamLimits

0xbfd2,	// (0x00018e78) list_single_cale_day_pane_fp_t1

0xbff8,	// (0x00018e9e) list_single_cale_day_pane_fp_t2_ParamLimits

0xbff8,	// (0x00018e9e) list_single_cale_day_pane_fp_t2

0xc011,	// (0x00018eb7) list_single_cale_day_pane_fp_t3_ParamLimits

0xc011,	// (0x00018eb7) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0001ca46) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0001ca46) list_single_cale_day_pane_fp_t

0xbea5,	// (0x00018d4b) list_empty_pane_fp_g1_ParamLimits

0xbea5,	// (0x00018d4b) list_empty_pane_fp_g1

0xc02a,	// (0x00018ed0) list_empty_pane_fp_t1

0xc038,	// (0x00018ede) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0001ca4d) list_empty_pane_fp_t

0xbea5,	// (0x00018d4b) list_single_heading_pane_fp_g1_ParamLimits

0xbea5,	// (0x00018d4b) list_single_heading_pane_fp_g1

0xbdfe,	// (0x00018ca4) list_single_heading_pane_fp_g2_ParamLimits

0xbdfe,	// (0x00018ca4) list_single_heading_pane_fp_g2

0xbe0a,	// (0x00018cb0) list_single_heading_pane_fp_g3_ParamLimits

0xbe0a,	// (0x00018cb0) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0001ca52) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0001ca52) list_single_heading_pane_fp_g

0xc046,	// (0x00018eec) list_single_heading_pane_fp_t1_ParamLimits

0xc046,	// (0x00018eec) list_single_heading_pane_fp_t1

0xc058,	// (0x00018efe) list_single_heading_pane_fp_t2_ParamLimits

0xc058,	// (0x00018efe) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001ca59) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0001ca59) list_single_heading_pane_fp_t

0x3f97,	// (0x00010e3d) aid_size_cell_fast

0x37eb,	// (0x00010691) soft_indicator_pane_cp1_t1

0x3fd4,	// (0x00010e7a) cell_app_pane_cp2_ParamLimits

0x3fd4,	// (0x00010e7a) cell_app_pane_cp2

0x60e5,	// (0x00012f8b) fep_hwr_candidate_drop_down_list_pane

0x62d3,	// (0x00013179) fep_hwr_candidate_pane_g3_ParamLimits

0x62d3,	// (0x00013179) fep_hwr_candidate_pane_g3

0x2931,	// (0x0000f7d7) fep_hwr_candidate_pane_g4_ParamLimits

0x2931,	// (0x0000f7d7) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001c9c8) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001c9c8) fep_hwr_candidate_pane_g

0xb973,	// (0x00018819) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb973,	// (0x00018819) fep_vkb_candidate_drop_down_list_pane

0xbd9b,	// (0x00018c41) fep_vkb_candidate_pane_g3

0xbda3,	// (0x00018c49) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001c9f5) fep_vkb_candidate_pane_g

0x633e,	// (0x000131e4) cell_hwr_candidate_pane_g1_ParamLimits

0x634c,	// (0x000131f2) cell_hwr_candidate_pane_g3_ParamLimits

0x634c,	// (0x000131f2) cell_hwr_candidate_pane_g3

0xc355,	// (0x000191fb) cell_hwr_candidate_pane_g4_ParamLimits

0xc355,	// (0x000191fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0001ca14) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0001ca14) cell_hwr_candidate_pane_g

0xbdba,	// (0x00018c60) cell_vkb_candidate_pane_g3_ParamLimits

0xbdba,	// (0x00018c60) cell_vkb_candidate_pane_g3

0xbdd5,	// (0x00018c7b) cell_vkb_candidate_pane_g4_ParamLimits

0xbdd5,	// (0x00018c7b) cell_vkb_candidate_pane_g4

0xc06e,	// (0x00018f14) cell_app_pane_cp2_g1_ParamLimits

0xc06e,	// (0x00018f14) cell_app_pane_cp2_g1

0xc08c,	// (0x00018f32) cell_app_pane_cp2_g2_ParamLimits

0xc08c,	// (0x00018f32) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0001ca5e) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0001ca5e) cell_app_pane_cp2_g

0xc098,	// (0x00018f3e) cell_app_pane_cp2_t1_ParamLimits

0xc098,	// (0x00018f3e) cell_app_pane_cp2_t1

0x3d70,	// (0x00010c16) grid_highlight_pane_cp1_ParamLimits

0x3d70,	// (0x00010c16) grid_highlight_pane_cp1

0x638b,	// (0x00013231) cell_hwr_candidate_pane_cp1_ParamLimits

0x638b,	// (0x00013231) cell_hwr_candidate_pane_cp1

0x633e,	// (0x000131e4) fep_hwr_candidate_drop_down_list_pane_g1

0x63af,	// (0x00013255) fep_hwr_candidate_drop_down_list_pane_g2

0x63bc,	// (0x00013262) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0001ca63) fep_hwr_candidate_drop_down_list_pane_g

0x63c9,	// (0x0001326f) fep_hwr_candidate_drop_down_list_scroll_pane

0x63d2,	// (0x00013278) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x63d2,	// (0x00013278) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x63df,	// (0x00013285) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x63df,	// (0x00013285) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x63ec,	// (0x00013292) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x63ec,	// (0x00013292) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x63f9,	// (0x0001329f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x63f9,	// (0x0001329f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6414,	// (0x000132ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6414,	// (0x000132ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x642f,	// (0x000132d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x642f,	// (0x000132d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x644a,	// (0x000132f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x644a,	// (0x000132f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6465,	// (0x0001330b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6465,	// (0x0001330b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0001ca6a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0001ca6a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc0aa,	// (0x00018f50) cell_vkb_candidate_pane_cp1_ParamLimits

0xc0aa,	// (0x00018f50) cell_vkb_candidate_pane_cp1

0xba79,	// (0x0001891f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xba79,	// (0x0001891f) fep_vkb_candidate_drop_down_list_pane_g1

0xc0d0,	// (0x00018f76) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc0d0,	// (0x00018f76) fep_vkb_candidate_drop_down_list_pane_g2

0xc0dd,	// (0x00018f83) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc0dd,	// (0x00018f83) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001ca7b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0001ca7b) fep_vkb_candidate_drop_down_list_pane_g

0xc0ea,	// (0x00018f90) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc0ea,	// (0x00018f90) fep_vkb_candidate_drop_down_list_scroll_pane

0xc0f7,	// (0x00018f9d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc0f7,	// (0x00018f9d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc104,	// (0x00018faa) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc104,	// (0x00018faa) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc110,	// (0x00018fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc110,	// (0x00018fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc11c,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc11c,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc13d,	// (0x00018fe3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc13d,	// (0x00018fe3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc15e,	// (0x00019004) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc15e,	// (0x00019004) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc17f,	// (0x00019025) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc17f,	// (0x00019025) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc1a0,	// (0x00019046) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc1a0,	// (0x00019046) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0001ca82) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0001ca82) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6f46,	// (0x00013dec) title_pane_g1_ParamLimits

0x6f53,	// (0x00013df9) title_pane_g2_ParamLimits

0xf554,	// (0x0001c3fa) title_pane_g_ParamLimits

0x44da,	// (0x00011380) aid_call2_pane

0x44d2,	// (0x00011378) aid_call_pane

0x44e2,	// (0x00011388) popup_clock_analogue_window_g1

0x44e2,	// (0x00011388) popup_clock_analogue_window_g2

0x579c,	// (0x00012642) popup_clock_analogue_window_g3

0x57a5,	// (0x0001264b) popup_clock_analogue_window_g4

0x33f3,	// (0x00010299) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001c59f) popup_clock_analogue_window_g

0x57ad,	// (0x00012653) popup_clock_analogue_window_t1

0x57bb,	// (0x00012661) clock_digital_number_pane_ParamLimits

0x57bb,	// (0x00012661) clock_digital_number_pane

0x57c7,	// (0x0001266d) clock_digital_number_pane_cp02_ParamLimits

0x57c7,	// (0x0001266d) clock_digital_number_pane_cp02

0x57d3,	// (0x00012679) clock_digital_number_pane_cp03_ParamLimits

0x57d3,	// (0x00012679) clock_digital_number_pane_cp03

0x57df,	// (0x00012685) clock_digital_number_pane_cp04_ParamLimits

0x57df,	// (0x00012685) clock_digital_number_pane_cp04

0x57eb,	// (0x00012691) clock_digital_separator_pane_ParamLimits

0x57eb,	// (0x00012691) clock_digital_separator_pane

0x57f7,	// (0x0001269d) popup_clock_digital_window_t1_ParamLimits

0x57f7,	// (0x0001269d) popup_clock_digital_window_t1

0x33f3,	// (0x00010299) clock_digital_number_pane_g1

0x33f3,	// (0x00010299) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001c5aa) clock_digital_number_pane_g

0x33f3,	// (0x00010299) clock_digital_separator_pane_g1

0x33f3,	// (0x00010299) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001c5aa) clock_digital_separator_pane_g

0x8814,	// (0x000156ba) aid_fill_nsta_ParamLimits

0x8964,	// (0x0001580a) indicator_nsta_pane_ParamLimits

0x8af5,	// (0x0001599b) popup_clock_analogue_window

0x8af5,	// (0x0001599b) popup_clock_digital_window

0x3632,	// (0x000104d8) grid_indicator_nsta_pane_ParamLimits

0xb1d5,	// (0x0001807b) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001c948) clock_nsta_pane_t

0x5760,	// (0x00012606) aid_size_max_handle

0x576a,	// (0x00012610) aid_size_min_handle

0x7e4b,	// (0x00014cf1) editor_scroll_pane

0xc1bb,	// (0x00019061) ex_editor_pane

0x3f5d,	// (0x00010e03) scroll_pane_cp13

0x3c89,	// (0x00010b2f) scroll_pane_cp14

0x4530,	// (0x000113d6) scroll_pane_cp36

0x7980,	// (0x00014826) list_single_graphic_hl_pane_cp2_ParamLimits

0x7980,	// (0x00014826) list_single_graphic_hl_pane_cp2

0xa49b,	// (0x00017341) list_single_graphic_hl_pane_ParamLimits

0xa49b,	// (0x00017341) list_single_graphic_hl_pane

0xc1c3,	// (0x00019069) aid_size_min_hl_cp1

0xc1cc,	// (0x00019072) list_highlight_pane_cp34_ParamLimits

0xc1cc,	// (0x00019072) list_highlight_pane_cp34

0xc1dd,	// (0x00019083) list_single_graphic_hl_pane_g1_ParamLimits

0xc1dd,	// (0x00019083) list_single_graphic_hl_pane_g1

0xc1ea,	// (0x00019090) list_single_graphic_hl_pane_g2_ParamLimits

0xc1ea,	// (0x00019090) list_single_graphic_hl_pane_g2

0xc1ea,	// (0x00019090) list_single_graphic_hl_pane_g3_ParamLimits

0xc1ea,	// (0x00019090) list_single_graphic_hl_pane_g3

0xa9ee,	// (0x00017894) list_single_graphic_hl_pane_g4_ParamLimits

0xa9ee,	// (0x00017894) list_single_graphic_hl_pane_g4

0xc1f6,	// (0x0001909c) list_single_graphic_hl_pane_g5_ParamLimits

0xc1f6,	// (0x0001909c) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0001ca93) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0001ca93) list_single_graphic_hl_pane_g

0xc20a,	// (0x000190b0) list_single_graphic_hl_pane_t1_ParamLimits

0xc20a,	// (0x000190b0) list_single_graphic_hl_pane_t1

0xc220,	// (0x000190c6) aid_size_min_hl_cp2

0xc229,	// (0x000190cf) list_highlight_pane_cp34_cp2_ParamLimits

0xc229,	// (0x000190cf) list_highlight_pane_cp34_cp2

0xc1dd,	// (0x00019083) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc1dd,	// (0x00019083) list_single_graphic_hl_pane_g1_cp2

0xc236,	// (0x000190dc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc236,	// (0x000190dc) list_single_graphic_hl_pane_g2_cp2

0xc242,	// (0x000190e8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc242,	// (0x000190e8) list_single_graphic_hl_pane_g3_cp2

0x3e71,	// (0x00010d17) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3e71,	// (0x00010d17) list_single_graphic_hl_pane_g4_cp2

0xc250,	// (0x000190f6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc250,	// (0x000190f6) list_single_graphic_hl_pane_g5_cp2

0x5ab0,	// (0x00012956) control_pane_g4_ParamLimits

0x5ab0,	// (0x00012956) control_pane_g4

0x81d5,	// (0x0001507b) bg_popup_sub_pane_cp10_ParamLimits

0xb808,	// (0x000186ae) list_choice_list_pane_ParamLimits

0xb817,	// (0x000186bd) scroll_pane_cp23

0x3808,	// (0x000106ae) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe46,	// (0x00018cec) list_preview_fixed_pane_ParamLimits

0xbe5c,	// (0x00018d02) list_preview_fixed_pane_cp_ParamLimits

0xbe5c,	// (0x00018d02) list_preview_fixed_pane_cp

0xbe68,	// (0x00018d0e) popup_preview_fixed_window_g1_ParamLimits

0xbe68,	// (0x00018d0e) popup_preview_fixed_window_g1

0xbe74,	// (0x00018d1a) popup_preview_fixed_window_g2_ParamLimits

0xbe74,	// (0x00018d1a) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0001ca1b) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0001ca1b) popup_preview_fixed_window_g

0x56d2,	// (0x00012578) aid_navi_side_left_pane_ParamLimits

0x56e7,	// (0x0001258d) aid_navi_side_right_pane_ParamLimits

0x56ff,	// (0x000125a5) navi_icon_pane_stacon_ParamLimits

0x5713,	// (0x000125b9) navi_navi_pane_stacon_ParamLimits

0x56ff,	// (0x000125a5) navi_text_pane_stacon_ParamLimits

0x33e9,	// (0x0001028f) main_text_info_pane

0xc27a,	// (0x00019120) listscroll_text_info_pane

0xc282,	// (0x00019128) list_text_info_pane_ParamLimits

0xc282,	// (0x00019128) list_text_info_pane

0xc291,	// (0x00019137) scroll_pane_cp24_ParamLimits

0xc291,	// (0x00019137) scroll_pane_cp24

0xc2af,	// (0x00019155) list_text_info_pane_t1_ParamLimits

0xc2af,	// (0x00019155) list_text_info_pane_t1

0x8227,	// (0x000150cd) popup_fast_swap2_window_ParamLimits

0x8227,	// (0x000150cd) popup_fast_swap2_window

0xc2d4,	// (0x0001917a) aid_size_cell_fast2

0x33e9,	// (0x0001028f) bg_popup_window_pane_cp17

0x9261,	// (0x00016107) heading_pane_cp2

0x3a0e,	// (0x000108b4) listscroll_fast2_pane

0xc2de,	// (0x00019184) grid_fast2_pane

0xc2e8,	// (0x0001918e) listscroll_fast2_pane_g1

0xc2f2,	// (0x00019198) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0001ca9e) listscroll_fast2_pane_g

0x3f5d,	// (0x00010e03) scroll_pane_cp26

0xc2fc,	// (0x000191a2) cell_fast2_pane_ParamLimits

0xc2fc,	// (0x000191a2) cell_fast2_pane

0xc376,	// (0x0001921c) cell_fast2_pane_g1

0xc37f,	// (0x00019225) cell_fast2_pane_g2

0xc388,	// (0x0001922e) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0001caa3) cell_fast2_pane_g

0x3a50,	// (0x000108f6) grid_highlight_pane_cp9

0x3a65,	// (0x0001090b) main_eswt_pane_ParamLimits

0x3a65,	// (0x0001090b) main_eswt_pane

0xc2a6,	// (0x0001914c) list_single_text_info_pane

0xc390,	// (0x00019236) eswt_ctrl_button_pane

0xc390,	// (0x00019236) eswt_ctrl_canvas_pane

0xc398,	// (0x0001923e) eswt_ctrl_combo_pane

0xc390,	// (0x00019236) eswt_ctrl_default_pane

0xc390,	// (0x00019236) eswt_ctrl_label_pane

0xc3a0,	// (0x00019246) eswt_ctrl_wait_pane

0xc3a8,	// (0x0001924e) eswt_shell_pane

0x33e9,	// (0x0001028f) listscroll_eswt_app_pane

0xc3c8,	// (0x0001926e) popup_eswt_tasktip_window_ParamLimits

0xc3c8,	// (0x0001926e) popup_eswt_tasktip_window

0x8e72,	// (0x00015d18) bg_popup_window_pane_cp18

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_ParamLimits

0xc3d9,	// (0x0001927f) eswt_control_pane_g1

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_ParamLimits

0xc3e6,	// (0x0001928c) eswt_control_pane_g2

0xc3f3,	// (0x00019299) eswt_control_pane_g3_ParamLimits

0xc3f3,	// (0x00019299) eswt_control_pane_g3

0xc400,	// (0x000192a6) eswt_control_pane_g4_ParamLimits

0xc400,	// (0x000192a6) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0001caaa) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0001caaa) eswt_control_pane_g

0x3d70,	// (0x00010c16) bg_button_pane_ParamLimits

0x3d70,	// (0x00010c16) bg_button_pane

0x3a65,	// (0x0001090b) common_borders_pane_copy2_ParamLimits

0x3a65,	// (0x0001090b) common_borders_pane_copy2

0xc40d,	// (0x000192b3) control_button_pane_g1_ParamLimits

0xc40d,	// (0x000192b3) control_button_pane_g1

0xc419,	// (0x000192bf) control_button_pane_g2_ParamLimits

0xc419,	// (0x000192bf) control_button_pane_g2

0xc425,	// (0x000192cb) control_button_pane_g3_ParamLimits

0xc425,	// (0x000192cb) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0001cab3) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0001cab3) control_button_pane_g

0xc439,	// (0x000192df) control_button_pane_t1

0xc447,	// (0x000192ed) control_button_pane_t2

0x0001,

0xfc14,	// (0x0001caba) control_button_pane_t

0x8d4c,	// (0x00015bf2) bg_button_pane_g1

0x8d5c,	// (0x00015c02) bg_button_pane_g2

0x8d54,	// (0x00015bfa) bg_button_pane_g3

0x8d6c,	// (0x00015c12) bg_button_pane_g4

0x8d64,	// (0x00015c0a) bg_button_pane_g5

0x8d74,	// (0x00015c1a) bg_button_pane_g6

0x8d7c,	// (0x00015c22) bg_button_pane_g7

0x8d8c,	// (0x00015c32) bg_button_pane_g8

0x8d84,	// (0x00015c2a) bg_button_pane_g9

0x0008,

0xf867,	// (0x0001c70d) bg_button_pane_g

0xb7c3,	// (0x00018669) common_borders_pane_ParamLimits

0xb7c3,	// (0x00018669) common_borders_pane

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy1_ParamLimits

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy1

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy1_ParamLimits

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy1

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy1_ParamLimits

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy1

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy1_ParamLimits

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy1

0xb7fe,	// (0x000186a4) bg_eswt_ctrl_canvas_pane_g1

0xb7c3,	// (0x00018669) common_borders_pane_cp2_ParamLimits

0xb7c3,	// (0x00018669) common_borders_pane_cp2

0xb7c3,	// (0x00018669) common_borders_pane_cp3_ParamLimits

0xb7c3,	// (0x00018669) common_borders_pane_cp3

0xc455,	// (0x000192fb) separator_horizontal_pane

0xc45d,	// (0x00019303) separator_vertical_pane

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy2_ParamLimits

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy2

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy2_ParamLimits

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy2

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy2_ParamLimits

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy2

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy2_ParamLimits

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy2

0x33e9,	// (0x0001028f) common_borders_pane_cp4

0xc466,	// (0x0001930c) separator_horizontal_pane_g1

0xc46f,	// (0x00019315) separator_horizontal_pane_g2

0xc478,	// (0x0001931e) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0001cabf) separator_horizontal_pane_g

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy3_ParamLimits

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy3

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy3_ParamLimits

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy3

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy3_ParamLimits

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy3

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy3_ParamLimits

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy3

0x33e9,	// (0x0001028f) common_borders_pane_cp5

0xc481,	// (0x00019327) separator_vertical_pane_g1

0xc48a,	// (0x00019330) separator_vertical_pane_g2

0xc493,	// (0x00019339) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0001cac6) separator_vertical_pane_g

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy4_ParamLimits

0xc3d9,	// (0x0001927f) eswt_control_pane_g1_copy4

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy4_ParamLimits

0xc3e6,	// (0x0001928c) eswt_control_pane_g2_copy4

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy4_ParamLimits

0xc3f3,	// (0x00019299) eswt_control_pane_g3_copy4

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy4_ParamLimits

0xc400,	// (0x000192a6) eswt_control_pane_g4_copy4

0xc49c,	// (0x00019342) eswt_ctrl_combo_button_pane

0xc4a4,	// (0x0001934a) eswt_ctrl_input_pane

0xc4ac,	// (0x00019352) popup_choice_list_window_cp70

0xc4b4,	// (0x0001935a) eswt_ctrl_input_pane_t1

0x33e9,	// (0x0001028f) input_focus_pane_cp70

0xb7c3,	// (0x00018669) bg_button_pane_cp70_ParamLimits

0xb7c3,	// (0x00018669) bg_button_pane_cp70

0xc4c2,	// (0x00019368) eswt_ctrl_combo_button_pane_g1

0xc4ca,	// (0x00019370) wait_bar_pane_cp70

0x8e72,	// (0x00015d18) bg_popup_window_pane_cp70_ParamLimits

0x8e72,	// (0x00015d18) bg_popup_window_pane_cp70

0xc4d2,	// (0x00019378) popup_eswt_tasktip_window_t1

0xc4e8,	// (0x0001938e) wait_bar_pane_cp71_ParamLimits

0xc4e8,	// (0x0001938e) wait_bar_pane_cp71

0xc4f4,	// (0x0001939a) grid_eswt_app_pane

0x437a,	// (0x00011220) scroll_pane_cp70

0xc4fd,	// (0x000193a3) cell_eswt_app_pane_ParamLimits

0xc4fd,	// (0x000193a3) cell_eswt_app_pane

0xc52f,	// (0x000193d5) cell_eswt_app_pane_g1_ParamLimits

0xc52f,	// (0x000193d5) cell_eswt_app_pane_g1

0xc55e,	// (0x00019404) cell_eswt_app_pane_g2_ParamLimits

0xc55e,	// (0x00019404) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0001cacd) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0001cacd) cell_eswt_app_pane_g

0xc587,	// (0x0001942d) cell_eswt_app_pane_t1_ParamLimits

0xc587,	// (0x0001942d) cell_eswt_app_pane_t1

0xc5b9,	// (0x0001945f) grid_highlight_pane_cp70_ParamLimits

0xc5b9,	// (0x0001945f) grid_highlight_pane_cp70

0x7d1c,	// (0x00014bc2) set_content_pane_g1

0x80ef,	// (0x00014f95) status_small_volume_pane

0x6480,	// (0x00013326) status_small_volume_pane_g1

0x6488,	// (0x0001332e) volume_small2_pane

0x6491,	// (0x00013337) volume_small2_pane_g1

0x649a,	// (0x00013340) volume_small2_pane_g2

0x64a3,	// (0x00013349) volume_small2_pane_g3

0x64ac,	// (0x00013352) volume_small2_pane_g4

0x64b5,	// (0x0001335b) volume_small2_pane_g5

0x64be,	// (0x00013364) volume_small2_pane_g6

0x64c7,	// (0x0001336d) volume_small2_pane_g7

0x64d0,	// (0x00013376) volume_small2_pane_g8

0x64d9,	// (0x0001337f) volume_small2_pane_g9

0x64e2,	// (0x00013388) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0001cad2) volume_small2_pane_g

0xbbcd,	// (0x00018a73) fep_vkb_top_text_pane_g1_ParamLimits

0xbbe8,	// (0x00018a8e) fep_vkb_top_text_pane_t1_ParamLimits

0xbe80,	// (0x00018d26) popup_preview_fixed_window_g3_ParamLimits

0xbe80,	// (0x00018d26) popup_preview_fixed_window_g3

0x8738,	// (0x000155de) popup_toolbar_trans_pane

0xa20e,	// (0x000170b4) aid_height_set_list_ParamLimits

0xa21f,	// (0x000170c5) aid_size_parent_ParamLimits

0x81d5,	// (0x0001507b) list_highlight_pane_cp2_ParamLimits

0x7d1c,	// (0x00014bc2) set_content_pane_g1_ParamLimits

0xa4af,	// (0x00017355) list_single_image_pane_ParamLimits

0xa4af,	// (0x00017355) list_single_image_pane

0xc5c5,	// (0x0001946b) aid_size_cell_image_ParamLimits

0xc5c5,	// (0x0001946b) aid_size_cell_image

0xc5d2,	// (0x00019478) grid_single_image_pane_ParamLimits

0xc5d2,	// (0x00019478) grid_single_image_pane

0x3d9b,	// (0x00010c41) list_single_image_pane_g1_ParamLimits

0x3d9b,	// (0x00010c41) list_single_image_pane_g1

0x3da7,	// (0x00010c4d) list_single_image_pane_g2_ParamLimits

0x3da7,	// (0x00010c4d) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0001cae7) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0001cae7) list_single_image_pane_g

0xc5e0,	// (0x00019486) list_single_image_pane_t1_ParamLimits

0xc5e0,	// (0x00019486) list_single_image_pane_t1

0xc5f6,	// (0x0001949c) cell_image_list_pane_ParamLimits

0xc5f6,	// (0x0001949c) cell_image_list_pane

0xc60c,	// (0x000194b2) cell_image_list_pane_g1

0xc615,	// (0x000194bb) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0001caec) cell_image_list_pane_g

0xc61e,	// (0x000194c4) aid_size_cell_tb_trans_pane

0x3d70,	// (0x00010c16) bg_tb_trans_pane

0xc630,	// (0x000194d6) grid_tb_trans_pane

0x8d4c,	// (0x00015bf2) bg_tb_trans_pane_g1

0x8d5c,	// (0x00015c02) bg_tb_trans_pane_g2

0x8d54,	// (0x00015bfa) bg_tb_trans_pane_g3

0x8d6c,	// (0x00015c12) bg_tb_trans_pane_g4

0x8d64,	// (0x00015c0a) bg_tb_trans_pane_g5

0x8d8c,	// (0x00015c32) bg_tb_trans_pane_g6

0x8d84,	// (0x00015c2a) bg_tb_trans_pane_g7

0x8d74,	// (0x00015c1a) bg_tb_trans_pane_g8

0x8d7c,	// (0x00015c22) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0001caf1) bg_tb_trans_pane_g

0xc644,	// (0x000194ea) cell_toolbar_trans_pane_ParamLimits

0xc644,	// (0x000194ea) cell_toolbar_trans_pane

0xb7fe,	// (0x000186a4) cell_toolbar_trans_pane_g1

0xb3cc,	// (0x00018272) list_form2_midp_pane_t1

0xb3da,	// (0x00018280) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001c98e) list_form2_midp_pane_t

0xb3e8,	// (0x0001828e) scroll_pane_cp51_ParamLimits

0xb605,	// (0x000184ab) form2_midp_wait_pane_g1

0xb60e,	// (0x000184b4) form2_midp_wait_pane_g2

0xb617,	// (0x000184bd) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001c9a3) form2_midp_wait_pane_g

0x3632,	// (0x000104d8) list_highlight_pane_cp21_ParamLimits

0xb65b,	// (0x00018501) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb66a,	// (0x00018510) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa454,	// (0x000172fa) list_single_2graphic_im_pane_ParamLimits

0xa454,	// (0x000172fa) list_single_2graphic_im_pane

0xc66a,	// (0x00019510) list_single_2graphic_im_pane_g1_ParamLimits

0xc66a,	// (0x00019510) list_single_2graphic_im_pane_g1

0xc67b,	// (0x00019521) list_single_2graphic_im_pane_g2_ParamLimits

0xc67b,	// (0x00019521) list_single_2graphic_im_pane_g2

0xc687,	// (0x0001952d) list_single_2graphic_im_pane_g3_ParamLimits

0xc687,	// (0x0001952d) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0001cb04) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0001cb04) list_single_2graphic_im_pane_g

0xc6a7,	// (0x0001954d) list_single_2graphic_im_pane_t1_ParamLimits

0xc6a7,	// (0x0001954d) list_single_2graphic_im_pane_t1

0xbe8c,	// (0x00018d32) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe8c,	// (0x00018d32) list_single_graphic_2heading_pane_fp

0xbed4,	// (0x00018d7a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbed4,	// (0x00018d7a) list_single_graphic_2heading_pane_fp_g1

0xbea5,	// (0x00018d4b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbea5,	// (0x00018d4b) list_single_graphic_2heading_pane_fp_g2

0xbdfe,	// (0x00018ca4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbdfe,	// (0x00018ca4) list_single_graphic_2heading_pane_fp_g3

0xbe0a,	// (0x00018cb0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbe0a,	// (0x00018cb0) list_single_graphic_2heading_pane_fp_g4

0xbeb1,	// (0x00018d57) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbeb1,	// (0x00018d57) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001ca2b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001ca2b) list_single_graphic_2heading_pane_fp_g

0xc6d8,	// (0x0001957e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc6d8,	// (0x0001957e) list_single_graphic_2heading_pane_fp_t1

0xbf0c,	// (0x00018db2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbf0c,	// (0x00018db2) list_single_graphic_2heading_pane_fp_t2

0xc6ee,	// (0x00019594) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc6ee,	// (0x00019594) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0001cb0d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0001cb0d) list_single_graphic_2heading_pane_fp_t

0xb88f,	// (0x00018735) fep_hwr_write_pane_g5_ParamLimits

0xb88f,	// (0x00018735) fep_hwr_write_pane_g5

0xb89b,	// (0x00018741) fep_hwr_write_pane_g6_ParamLimits

0xb89b,	// (0x00018741) fep_hwr_write_pane_g6

0xc3a8,	// (0x0001924e) eswt_shell_pane_ParamLimits

0x8e72,	// (0x00015d18) bg_popup_window_pane_cp18_ParamLimits

0xa13d,	// (0x00016fe3) heading_pane_cp70

0xc4d2,	// (0x00019378) popup_eswt_tasktip_window_t1_ParamLimits

0x886b,	// (0x00015711) aid_touch_tab_arrow_left

0x887a,	// (0x00015720) aid_touch_tab_arrow_right

0x35ca,	// (0x00010470) title_pane_g3_ParamLimits

0x35ca,	// (0x00010470) title_pane_g3

0x3cca,	// (0x00010b70) set_value_pane_g1

0x8738,	// (0x000155de) popup_toolbar_trans_pane_ParamLimits

0xc61e,	// (0x000194c4) aid_size_cell_tb_trans_pane_ParamLimits

0x3d70,	// (0x00010c16) bg_tb_trans_pane_ParamLimits

0xc630,	// (0x000194d6) grid_tb_trans_pane_ParamLimits

0x3808,	// (0x000106ae) cont_note_pane_ParamLimits

0x3808,	// (0x000106ae) cont_note_pane

0x3a65,	// (0x0001090b) cont_snote2_single_text_pane_ParamLimits

0x3a65,	// (0x0001090b) cont_snote2_single_text_pane

0x3a65,	// (0x0001090b) cont_snote2_single_graphic_pane_ParamLimits

0x3a65,	// (0x0001090b) cont_snote2_single_graphic_pane

0x947d,	// (0x00016323) cont_note_wait_pane_ParamLimits

0x947d,	// (0x00016323) cont_note_wait_pane

0x947d,	// (0x00016323) cont_note_image_pane_ParamLimits

0x947d,	// (0x00016323) cont_note_image_pane

0xc704,	// (0x000195aa) popup_note2_window_g1_ParamLimits

0xc704,	// (0x000195aa) popup_note2_window_g1

0xc735,	// (0x000195db) popup_note2_window_t1_ParamLimits

0xc735,	// (0x000195db) popup_note2_window_t1

0xc77a,	// (0x00019620) popup_note2_window_t2_ParamLimits

0xc77a,	// (0x00019620) popup_note2_window_t2

0xc7bf,	// (0x00019665) popup_note2_window_t3_ParamLimits

0xc7bf,	// (0x00019665) popup_note2_window_t3

0xc804,	// (0x000196aa) popup_note2_window_t4_ParamLimits

0xc804,	// (0x000196aa) popup_note2_window_t4

0x388c,	// (0x00010732) popup_note2_window_t5_ParamLimits

0x388c,	// (0x00010732) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0001cb19) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0001cb19) popup_note2_window_t

0xc833,	// (0x000196d9) popup_note2_image_window_g1_ParamLimits

0xc833,	// (0x000196d9) popup_note2_image_window_g1

0xc83f,	// (0x000196e5) popup_note2_image_window_g2_ParamLimits

0xc83f,	// (0x000196e5) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0001cb24) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0001cb24) popup_note2_image_window_g

0xc851,	// (0x000196f7) popup_note2_image_window_t1_ParamLimits

0xc851,	// (0x000196f7) popup_note2_image_window_t1

0xc869,	// (0x0001970f) popup_note2_image_window_t2_ParamLimits

0xc869,	// (0x0001970f) popup_note2_image_window_t2

0xc881,	// (0x00019727) popup_note2_image_window_t3_ParamLimits

0xc881,	// (0x00019727) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0001cb29) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0001cb29) popup_note2_image_window_t

0x948b,	// (0x00016331) popup_note2_wait_window_g1_ParamLimits

0x948b,	// (0x00016331) popup_note2_wait_window_g1

0xc89d,	// (0x00019743) popup_note2_wait_window_g2_ParamLimits

0xc89d,	// (0x00019743) popup_note2_wait_window_g2

0x94a3,	// (0x00016349) popup_note2_wait_window_g3_ParamLimits

0x94a3,	// (0x00016349) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0001cb30) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0001cb30) popup_note2_wait_window_g

0xc8a9,	// (0x0001974f) popup_note2_wait_window_t1_ParamLimits

0xc8a9,	// (0x0001974f) popup_note2_wait_window_t1

0xc8c7,	// (0x0001976d) popup_note2_wait_window_t2_ParamLimits

0xc8c7,	// (0x0001976d) popup_note2_wait_window_t2

0xc8e5,	// (0x0001978b) popup_note2_wait_window_t3_ParamLimits

0xc8e5,	// (0x0001978b) popup_note2_wait_window_t3

0xc8f7,	// (0x0001979d) popup_note2_wait_window_t4_ParamLimits

0xc8f7,	// (0x0001979d) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0001cb37) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0001cb37) popup_note2_wait_window_t

0xc909,	// (0x000197af) wait_bar2_pane_ParamLimits

0xc909,	// (0x000197af) wait_bar2_pane

0xc921,	// (0x000197c7) popup_snote2_single_text_window_g1_ParamLimits

0xc921,	// (0x000197c7) popup_snote2_single_text_window_g1

0xc949,	// (0x000197ef) popup_snote2_single_text_window_t1_ParamLimits

0xc949,	// (0x000197ef) popup_snote2_single_text_window_t1

0xc995,	// (0x0001983b) popup_snote2_single_text_window_t2_ParamLimits

0xc995,	// (0x0001983b) popup_snote2_single_text_window_t2

0xc9e1,	// (0x00019887) popup_snote2_single_text_window_t3_ParamLimits

0xc9e1,	// (0x00019887) popup_snote2_single_text_window_t3

0xca22,	// (0x000198c8) popup_snote2_single_text_window_t4_ParamLimits

0xca22,	// (0x000198c8) popup_snote2_single_text_window_t4

0xca58,	// (0x000198fe) popup_snote2_single_text_window_t5_ParamLimits

0xca58,	// (0x000198fe) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0001cb40) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0001cb40) popup_snote2_single_text_window_t

0xca83,	// (0x00019929) popup_snote2_single_graphic_window_g1_ParamLimits

0xca83,	// (0x00019929) popup_snote2_single_graphic_window_g1

0xcaab,	// (0x00019951) popup_snote2_single_graphic_window_g2_ParamLimits

0xcaab,	// (0x00019951) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0001cb4b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0001cb4b) popup_snote2_single_graphic_window_g

0xcad3,	// (0x00019979) popup_snote2_single_graphic_window_t1_ParamLimits

0xcad3,	// (0x00019979) popup_snote2_single_graphic_window_t1

0xcb1f,	// (0x000199c5) popup_snote2_single_graphic_window_t2_ParamLimits

0xcb1f,	// (0x000199c5) popup_snote2_single_graphic_window_t2

0xc9e1,	// (0x00019887) popup_snote2_single_graphic_window_t3_ParamLimits

0xc9e1,	// (0x00019887) popup_snote2_single_graphic_window_t3

0xca22,	// (0x000198c8) popup_snote2_single_graphic_window_t4_ParamLimits

0xca22,	// (0x000198c8) popup_snote2_single_graphic_window_t4

0xca58,	// (0x000198fe) popup_snote2_single_graphic_window_t5_ParamLimits

0xca58,	// (0x000198fe) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0001cb50) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0001cb50) popup_snote2_single_graphic_window_t

0xb298,	// (0x0001813e) clock_nsta_pane_cp2_t1

0xb298,	// (0x0001813e) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001c964) clock_nsta_pane_cp2_t

0x3d8f,	// (0x00010c35) form_field_data_wide_pane_g1_ParamLimits

0x3d9b,	// (0x00010c41) form_field_data_wide_pane_g2_ParamLimits

0x3d9b,	// (0x00010c41) form_field_data_wide_pane_g2

0x3da7,	// (0x00010c4d) form_field_data_wide_pane_g3_ParamLimits

0x3da7,	// (0x00010c4d) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001c522) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001c522) form_field_data_wide_pane_g

0xb171,	// (0x00018017) grid_touch_3_pane_ParamLimits

0xb171,	// (0x00018017) grid_touch_3_pane

0xcb6b,	// (0x00019a11) cell_touch_3_pane_ParamLimits

0xcb6b,	// (0x00019a11) cell_touch_3_pane

0xb7fe,	// (0x000186a4) cell_touch_3_pane_g1

0xb7fe,	// (0x000186a4) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001c9e9) cell_touch_3_pane_g

0x38be,	// (0x00010764) cont_query_data_pane

0x38c6,	// (0x0001076c) cont_query_data_pane_cp1

0xcb9e,	// (0x00019a44) button_value_adjust_pane_cp7

0xcba6,	// (0x00019a4c) query_popup_pane_cp3

0x45bc,	// (0x00011462) bg_popup_sub_pane_cp22_ParamLimits

0x5816,	// (0x000126bc) navi_navi_volume_pane_cp2

0x5831,	// (0x000126d7) popup_side_volume_key_window_g2

0x5840,	// (0x000126e6) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001c5b8) popup_side_volume_key_window_g

0x585d,	// (0x00012703) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001c5bf) popup_side_volume_key_window_t

0x7be2,	// (0x00014a88) popup_side_volume_key_window_ParamLimits

0x73e9,	// (0x0001428f) list_double_graphic_pane_g4_ParamLimits

0x73e9,	// (0x0001428f) list_double_graphic_pane_g4

0xa483,	// (0x00017329) list_single_2heading_msg_pane_ParamLimits

0xa483,	// (0x00017329) list_single_2heading_msg_pane

0xcbd7,	// (0x00019a7d) list_single_2heading_msg_pane_g1_ParamLimits

0xcbd7,	// (0x00019a7d) list_single_2heading_msg_pane_g1

0x3e71,	// (0x00010d17) list_single_2heading_msg_pane_g2_ParamLimits

0x3e71,	// (0x00010d17) list_single_2heading_msg_pane_g2

0xcbe3,	// (0x00019a89) list_single_2heading_msg_pane_g3_ParamLimits

0xcbe3,	// (0x00019a89) list_single_2heading_msg_pane_g3

0xcbef,	// (0x00019a95) list_single_2heading_msg_pane_g4_ParamLimits

0xcbef,	// (0x00019a95) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0001cb5b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0001cb5b) list_single_2heading_msg_pane_g

0xcc07,	// (0x00019aad) list_single_2heading_msg_pane_t1_ParamLimits

0xcc07,	// (0x00019aad) list_single_2heading_msg_pane_t1

0xcc2f,	// (0x00019ad5) list_single_2heading_msg_pane_t2_ParamLimits

0xcc2f,	// (0x00019ad5) list_single_2heading_msg_pane_t2

0xcc5e,	// (0x00019b04) list_single_2heading_msg_pane_t3_ParamLimits

0xcc5e,	// (0x00019b04) list_single_2heading_msg_pane_t3

0xcc97,	// (0x00019b3d) list_single_2heading_msg_pane_t4_ParamLimits

0xcc97,	// (0x00019b3d) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0001cb64) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0001cb64) list_single_2heading_msg_pane_t

0x35d6,	// (0x0001047c) title_pane_g4_ParamLimits

0x35d6,	// (0x0001047c) title_pane_g4

0x5622,	// (0x000124c8) title_pane_stacon_g3_ParamLimits

0x5622,	// (0x000124c8) title_pane_stacon_g3

0xc69b,	// (0x00019541) list_single_2graphic_im_pane_g4_ParamLimits

0xc69b,	// (0x00019541) list_single_2graphic_im_pane_g4

0x9eed,	// (0x00016d93) popup_side_volume_key_window_cp

0xa7d7,	// (0x0001767d) main_idle_act2_pane_t1

0x5c48,	// (0x00012aee) toolbar_button_pane_g10

0x7226,	// (0x000140cc) popup_toolbar_window_cp1

0xb289,	// (0x0001812f) clock_nsta_pane_cp_t1

0xb289,	// (0x0001812f) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001c95f) clock_nsta_pane_cp_t

0x5816,	// (0x000126bc) navi_navi_volume_pane_cp2_ParamLimits

0x5825,	// (0x000126cb) popup_side_volume_key_window_g1_ParamLimits

0x5831,	// (0x000126d7) popup_side_volume_key_window_g2_ParamLimits

0x5840,	// (0x000126e6) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001c5b8) popup_side_volume_key_window_g_ParamLimits

0x60d1,	// (0x00012f77) fep_hwr_aid_pane

0x617a,	// (0x00013020) bg_fep_hwr_top_pane_g4_ParamLimits

0xb85f,	// (0x00018705) fep_hwr_top_pane_g1_ParamLimits

0xb871,	// (0x00018717) fep_hwr_top_pane_g2_ParamLimits

0x619a,	// (0x00013040) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001c9b4) fep_hwr_top_pane_g_ParamLimits

0x61af,	// (0x00013055) fep_hwr_top_text_pane_ParamLimits

0x9ca2,	// (0x00016b48) aid_touch_tab_arrow_arrow_2

0x9cab,	// (0x00016b51) aid_touch_tab_arrow_left_2

0x60e5,	// (0x00012f8b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x611c,	// (0x00012fc2) fep_hwr_prediction_pane

0xb9c7,	// (0x0001886d) fep_vkb_prediction_pane

0xbacd,	// (0x00018973) fep_vkb_side_pane_g3_ParamLimits

0xbacd,	// (0x00018973) fep_vkb_side_pane_g3

0x633e,	// (0x000131e4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x63af,	// (0x00013255) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x63bc,	// (0x00013262) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0001ca63) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x64eb,	// (0x00013391) fep_hwr_prediction_pane_g1

0x64f5,	// (0x0001339b) fep_hwr_prediction_pane_g2

0x64fd,	// (0x000133a3) fep_hwr_prediction_pane_g3

0x6505,	// (0x000133ab) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0001cb6d) fep_hwr_prediction_pane_g

0xccbc,	// (0x00019b62) fep_vkb_prediction_pane_g1

0xccc6,	// (0x00019b6c) fep_vkb_prediction_pane_g2

0xccce,	// (0x00019b74) fep_vkb_prediction_pane_g3

0xccd6,	// (0x00019b7c) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001cb76) fep_vkb_prediction_pane_g

0x5f51,	// (0x00012df7) slider_set_pane_g3

0x5f65,	// (0x00012e0b) slider_set_pane_g4

0x5f7d,	// (0x00012e23) slider_set_pane_g5

0x5f51,	// (0x00012df7) slider_set_pane_g6

0x5f93,	// (0x00012e39) slider_set_pane_g7

0xa3a4,	// (0x0001724a) slider_form_pane_g3

0xa3ad,	// (0x00017253) slider_form_pane_g4

0xa3b5,	// (0x0001725b) slider_form_pane_g5

0xa3a4,	// (0x0001724a) slider_form_pane_g6

0xa3bd,	// (0x00017263) slider_form_pane_g7

0xaada,	// (0x00017980) slider_set_pane_vc_g3

0xaae3,	// (0x00017989) slider_set_pane_vc_g4

0xaaec,	// (0x00017992) slider_set_pane_vc_g5

0xaada,	// (0x00017980) slider_set_pane_vc_g6

0xaaf5,	// (0x0001799b) slider_set_pane_vc_g7

0xaf36,	// (0x00017ddc) slider_form_pane_vc_g1

0xaf3f,	// (0x00017de5) slider_form_pane_vc_g2

0xaf48,	// (0x00017dee) slider_form_pane_vc_g3

0xaf36,	// (0x00017ddc) slider_form_pane_vc_g4

0xaf51,	// (0x00017df7) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001c931) slider_form_pane_vc_g

0x33e9,	// (0x0001028f) main_idle_act3_pane

0xccde,	// (0x00019b84) ai3_links_pane

0xcce7,	// (0x00019b8d) popup_ai3_data_window_ParamLimits

0xcce7,	// (0x00019b8d) popup_ai3_data_window

0x33e9,	// (0x0001028f) grid_ai3_links_pane

0xcd05,	// (0x00019bab) cell_ai3_links_pane_ParamLimits

0xcd05,	// (0x00019bab) cell_ai3_links_pane

0xcd1f,	// (0x00019bc5) bg_popup_sub_pane_cp11

0xcd2c,	// (0x00019bd2) cell_ai3_links_pane_g1

0x33e9,	// (0x0001028f) bg_popup_sub_pane_cp12

0xcd51,	// (0x00019bf7) heading_ai3_data_pane

0xcd59,	// (0x00019bff) list_ai3_gene_pane

0xcd65,	// (0x00019c0b) popup_ai3_data_window_g1

0xcd6d,	// (0x00019c13) heading_ai3_data_pane_g1

0xcd75,	// (0x00019c1b) heading_ai3_data_pane_t1

0xcd83,	// (0x00019c29) list_double_ai3_gene_pane_ParamLimits

0xcd83,	// (0x00019c29) list_double_ai3_gene_pane

0xcd90,	// (0x00019c36) list_single_ai3_gene_pane_ParamLimits

0xcd90,	// (0x00019c36) list_single_ai3_gene_pane

0xb7c3,	// (0x00018669) list_highlight_pane_cp7_ParamLimits

0xb7c3,	// (0x00018669) list_highlight_pane_cp7

0xcd9d,	// (0x00019c43) list_single_a13_gene_pane_t1_ParamLimits

0xcd9d,	// (0x00019c43) list_single_a13_gene_pane_t1

0xcdb4,	// (0x00019c5a) list_single_ai3_gene_pane_g1

0xcdbd,	// (0x00019c63) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0001cb7f) list_single_ai3_gene_pane_g

0xcdc5,	// (0x00019c6b) list_double_ai3_gene_pane_g1_ParamLimits

0xcdc5,	// (0x00019c6b) list_double_ai3_gene_pane_g1

0xcdd1,	// (0x00019c77) list_double_ai3_gene_pane_t1_ParamLimits

0xcdd1,	// (0x00019c77) list_double_ai3_gene_pane_t1

0xcded,	// (0x00019c93) list_double_ai3_gene_pane_t2_ParamLimits

0xcded,	// (0x00019c93) list_double_ai3_gene_pane_t2

0xce02,	// (0x00019ca8) list_double_ai3_gene_pane_t3_ParamLimits

0xce02,	// (0x00019ca8) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0001cb84) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0001cb84) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcbb7,	// (0x00019a5d) aid_size_min_col_2

0xcbc1,	// (0x00019a67) aid_size_min_msg_ParamLimits

0xcbc1,	// (0x00019a67) aid_size_min_msg

0xbbd9,	// (0x00018a7f) fep_vkb_top_text_pane_g2_ParamLimits

0xbbd9,	// (0x00018a7f) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001c9e4) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001c9e4) fep_vkb_top_text_pane_g

0x33e9,	// (0x0001028f) main_hc_apps_shell_pane

0xce1f,	// (0x00019cc5) grid_hc_apps_pane_ParamLimits

0xce1f,	// (0x00019cc5) grid_hc_apps_pane

0xce2e,	// (0x00019cd4) list_hc_apps_pane

0xce36,	// (0x00019cdc) scroll_pane_cp37_ParamLimits

0xce36,	// (0x00019cdc) scroll_pane_cp37

0xce42,	// (0x00019ce8) cell_hc_apps_pane_ParamLimits

0xce42,	// (0x00019ce8) cell_hc_apps_pane

0xcefa,	// (0x00019da0) cell_hc_apps_pane_g1_ParamLimits

0xcefa,	// (0x00019da0) cell_hc_apps_pane_g1

0xcf2b,	// (0x00019dd1) cell_hc_apps_pane_g2_ParamLimits

0xcf2b,	// (0x00019dd1) cell_hc_apps_pane_g2

0xcf47,	// (0x00019ded) cell_hc_apps_pane_g3_ParamLimits

0xcf47,	// (0x00019ded) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0001cb8b) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0001cb8b) cell_hc_apps_pane_g

0xcf69,	// (0x00019e0f) cell_hc_apps_pane_t1_ParamLimits

0xcf69,	// (0x00019e0f) cell_hc_apps_pane_t1

0x3808,	// (0x000106ae) grid_highlight_pane_cp10_ParamLimits

0x3808,	// (0x000106ae) grid_highlight_pane_cp10

0xcfa9,	// (0x00019e4f) list_single_hc_apps_pane_ParamLimits

0xcfa9,	// (0x00019e4f) list_single_hc_apps_pane

0xcfe8,	// (0x00019e8e) list_single_hc_apps_pane_g1

0xd001,	// (0x00019ea7) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0001cb92) list_single_hc_apps_pane_g

0xd01a,	// (0x00019ec0) list_single_hc_apps_pane_g2_copy1

0xd036,	// (0x00019edc) list_single_hc_apps_pane_t1

0x3632,	// (0x000104d8) bg_set_opt_pane_cp_ParamLimits

0x5549,	// (0x000123ef) setting_slider_pane_t1_ParamLimits

0x5562,	// (0x00012408) setting_slider_pane_t2_ParamLimits

0x557c,	// (0x00012422) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001c40a) setting_slider_pane_t_ParamLimits

0x5594,	// (0x0001243a) slider_set_pane_ParamLimits

0x5ac4,	// (0x0001296a) control_pane_g5_ParamLimits

0x5ac4,	// (0x0001296a) control_pane_g5

0xa1d1,	// (0x00017077) slider_set_pane_g1_ParamLimits

0x5f45,	// (0x00012deb) slider_set_pane_g2_ParamLimits

0x5f51,	// (0x00012df7) slider_set_pane_g3_ParamLimits

0x5f65,	// (0x00012e0b) slider_set_pane_g4_ParamLimits

0x5f7d,	// (0x00012e23) slider_set_pane_g5_ParamLimits

0x5f51,	// (0x00012df7) slider_set_pane_g6_ParamLimits

0x5f93,	// (0x00012e39) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0001c80b) slider_set_pane_g_ParamLimits

0x7cc7,	// (0x00014b6d) navi_icon_text_pane_ParamLimits

0x882a,	// (0x000156d0) aid_fill_nsta_2_ParamLimits

0x886b,	// (0x00015711) aid_touch_tab_arrow_left_ParamLimits

0x887a,	// (0x00015720) aid_touch_tab_arrow_right_ParamLimits

0x88e7,	// (0x0001578d) clock_nsta_pane_ParamLimits

0x9c84,	// (0x00016b2a) navi_icon_pane_g1_ParamLimits

0x9c90,	// (0x00016b36) navi_text_pane_t1_ParamLimits

0xb3a6,	// (0x0001824c) navi_icon_text_pane_g1_ParamLimits

0xb3b2,	// (0x00018258) navi_icon_text_pane_t1_ParamLimits

0xcfe8,	// (0x00019e8e) list_single_hc_apps_pane_g1_ParamLimits

0xd001,	// (0x00019ea7) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0001cb92) list_single_hc_apps_pane_g_ParamLimits

0xd01a,	// (0x00019ec0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd036,	// (0x00019edc) list_single_hc_apps_pane_t1_ParamLimits

0x544b,	// (0x000122f1) popup_toolbar2_fixed_window_ParamLimits

0x544b,	// (0x000122f1) popup_toolbar2_fixed_window

0x872e,	// (0x000155d4) popup_toolbar2_float_window

0x33e9,	// (0x0001028f) bg_popup_sub_pane_cp27

0xd064,	// (0x00019f0a) grid_toolbar2_float_pane

0x33e9,	// (0x0001028f) bg_popup_sub_pane_cp26

0xd064,	// (0x00019f0a) grid_toolbar2_fixed_pane

0xd06c,	// (0x00019f12) cell_toolbar2_fixed_pane_ParamLimits

0xd06c,	// (0x00019f12) cell_toolbar2_fixed_pane

0xd07c,	// (0x00019f22) cell_toolbar2_fixed_pane_g1

0xd085,	// (0x00019f2b) toolbar2_fixed_button_pane

0x8d4c,	// (0x00015bf2) toolbar2_fixed_button_pane_g1

0x8d5c,	// (0x00015c02) toolbar2_fixed_button_pane_g2

0x8d54,	// (0x00015bfa) toolbar2_fixed_button_pane_g3

0x8d6c,	// (0x00015c12) toolbar2_fixed_button_pane_g4

0x8d64,	// (0x00015c0a) toolbar2_fixed_button_pane_g5

0x8d74,	// (0x00015c1a) toolbar2_fixed_button_pane_g6

0x8d7c,	// (0x00015c22) toolbar2_fixed_button_pane_g7

0x8d8c,	// (0x00015c32) toolbar2_fixed_button_pane_g8

0x8d84,	// (0x00015c2a) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0001c70d) toolbar2_fixed_button_pane_g

0xd08d,	// (0x00019f33) cell_toolbar2_float_pane_ParamLimits

0xd08d,	// (0x00019f33) cell_toolbar2_float_pane

0xd09e,	// (0x00019f44) cell_toolbar2_float_pane_g1

0xd085,	// (0x00019f2b) toolbar2_fixed_button_pane_cp

0xb935,	// (0x000187db) fep_vkb_accented_list_pane_ParamLimits

0xb935,	// (0x000187db) fep_vkb_accented_list_pane

0x631e,	// (0x000131c4) bg_popup_fep_shadow_pane_g9

0x7e4b,	// (0x00014cf1) bg_popup_fep_shadow_pane_cp3

0x3f44,	// (0x00010dea) list_accented_list_pane

0xd0a7,	// (0x00019f4d) list_single_accented_list_pane_ParamLimits

0xd0a7,	// (0x00019f4d) list_single_accented_list_pane

0x7e4b,	// (0x00014cf1) list_highlight_pane_cp10

0xd0b8,	// (0x00019f5e) list_single_accented_list_pane_t1

0x8674,	// (0x0001551a) popup_slider_window_ParamLimits

0x8674,	// (0x0001551a) popup_slider_window

0xcbae,	// (0x00019a54) aid_indentation_list_msg

0xd184,	// (0x0001a02a) bg_popup_window_pane_cp19

0xd1f2,	// (0x0001a098) popup_slider_window_g1

0xd20e,	// (0x0001a0b4) popup_slider_window_g2

0xd22a,	// (0x0001a0d0) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0001cb97) popup_slider_window_g

0xd286,	// (0x0001a12c) popup_slider_window_t1

0xd2fa,	// (0x0001a1a0) small_volume_slider_vertical_pane

0xb7fe,	// (0x000186a4) small_volume_slider_vertical_pane_g1

0xb7fe,	// (0x000186a4) small_volume_slider_vertical_pane_g2

0xd316,	// (0x0001a1bc) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0001cba9) small_volume_slider_vertical_pane_g

0x51f9,	// (0x0001209f) area_side_right_pane_ParamLimits

0x51f9,	// (0x0001209f) area_side_right_pane

0x650d,	// (0x000133b3) aid_size_side_button_ParamLimits

0x650d,	// (0x000133b3) aid_size_side_button

0x6521,	// (0x000133c7) grid_sctrl_middle_pane_ParamLimits

0x6521,	// (0x000133c7) grid_sctrl_middle_pane

0x6541,	// (0x000133e7) sctrl_sk_bottom_pane

0x6552,	// (0x000133f8) sctrl_sk_top_pane

0x6564,	// (0x0001340a) aid_touch_sctrl_top

0x6571,	// (0x00013417) bg_sctrl_sk_pane_ParamLimits

0x6571,	// (0x00013417) bg_sctrl_sk_pane

0x657f,	// (0x00013425) sctrl_sk_top_pane_g1

0x658c,	// (0x00013432) sctrl_sk_top_pane_t1

0x6564,	// (0x0001340a) aid_touch_sctrl_bottom

0x6571,	// (0x00013417) bg_sctrl_sk_pane_cp_ParamLimits

0x6571,	// (0x00013417) bg_sctrl_sk_pane_cp

0x65a7,	// (0x0001344d) sctrl_sk_bottom_pane_g1

0x658c,	// (0x00013432) sctrl_sk_bottom_pane_t1

0x65b0,	// (0x00013456) cell_sctrl_middle_pane_ParamLimits

0x65b0,	// (0x00013456) cell_sctrl_middle_pane

0x65cd,	// (0x00013473) aid_touch_sctrl_middle_ParamLimits

0x65cd,	// (0x00013473) aid_touch_sctrl_middle

0x65df,	// (0x00013485) bg_sctrl_middle_pane_ParamLimits

0x65df,	// (0x00013485) bg_sctrl_middle_pane

0x633e,	// (0x000131e4) cell_sctrl_middle_pane_g1_ParamLimits

0x633e,	// (0x000131e4) cell_sctrl_middle_pane_g1

0x65ed,	// (0x00013493) cell_sctrl_middle_pane_g2_ParamLimits

0x65ed,	// (0x00013493) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0001cbb5) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0001cbb5) cell_sctrl_middle_pane_g

0x8d4c,	// (0x00015bf2) bg_sctrl_middle_pane_g1

0x8d54,	// (0x00015bfa) bg_sctrl_middle_pane_g2

0x8d5c,	// (0x00015c02) bg_sctrl_middle_pane_g3

0x8d64,	// (0x00015c0a) bg_sctrl_middle_pane_g4

0x8d6c,	// (0x00015c12) bg_sctrl_middle_pane_g5

0x8d74,	// (0x00015c1a) bg_sctrl_middle_pane_g6

0x8d7c,	// (0x00015c22) bg_sctrl_middle_pane_g7

0x8d84,	// (0x00015c2a) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0001cbba) bg_sctrl_middle_pane_g

0x8d8c,	// (0x00015c32) bg_sctrl_middle_pane_g8_copy1

0x8d4c,	// (0x00015bf2) bg_sctrl_sk_pane_g1

0x8d5c,	// (0x00015c02) bg_sctrl_sk_pane_g2

0x8d54,	// (0x00015bfa) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0001c70d) bg_sctrl_sk_pane_g

0x3c23,	// (0x00010ac9) aid_size_touch_scroll_bar

0x8d6c,	// (0x00015c12) bg_sctrl_sk_pane_g4

0x8d64,	// (0x00015c0a) bg_sctrl_sk_pane_g5

0x8d74,	// (0x00015c1a) bg_sctrl_sk_pane_g6

0x8d7c,	// (0x00015c22) bg_sctrl_sk_pane_g7

0x8d8c,	// (0x00015c32) bg_sctrl_sk_pane_g8

0x8d84,	// (0x00015c2a) bg_sctrl_sk_pane_g9

0x828b,	// (0x00015131) popup_fep_china_hwr2_fs_candidate_window

0x8295,	// (0x0001513b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8295,	// (0x0001513b) popup_fep_china_hwr2_fs_control_window

0x633e,	// (0x000131e4) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0001cbb0) sctrl_sk_top_pane_g

0xd31f,	// (0x0001a1c5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd31f,	// (0x0001a1c5) aid_fep_china_hwr2_fs_cell

0xd332,	// (0x0001a1d8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd332,	// (0x0001a1d8) bg_popup_fep_shadow_pane_cp4

0xd34b,	// (0x0001a1f1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd34b,	// (0x0001a1f1) bg_popup_fep_shadow_pane_cp5

0xd35d,	// (0x0001a203) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd35d,	// (0x0001a203) popup_fep_china_hwr2_fs_control_bar_grid

0xd36d,	// (0x0001a213) popup_fep_china_hwr2_fs_control_funtion_grid

0xd375,	// (0x0001a21b) aid_fep_china_hwr2_fs_candi_cell

0x33e9,	// (0x0001028f) bg_popup_fep_shadow_pane_cp6

0xd37f,	// (0x0001a225) popup_fep_china_hwr2_fs_candidate_grid

0xd389,	// (0x0001a22f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd389,	// (0x0001a22f) cell_fep_china_hwr2_fs_funtion_grid

0xb7fe,	// (0x000186a4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd3a1,	// (0x0001a247) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd3a1,	// (0x0001a247) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd3af,	// (0x0001a255) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd3af,	// (0x0001a255) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0001cbcb) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0001cbcb) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3c5,	// (0x0001a26b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3c5,	// (0x0001a26b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3da,	// (0x0001a280) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3da,	// (0x0001a280) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0001cbd0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0001cbd0) cell_fep_china_hwr2_fs_funtion_grid_t

0xd3f6,	// (0x0001a29c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd3fe,	// (0x0001a2a4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd406,	// (0x0001a2ac) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0001cbd5) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd40e,	// (0x0001a2b4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd40e,	// (0x0001a2b4) cell_fep_china_hwr2_fs_candidate_grid

0xd42d,	// (0x0001a2d3) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd435,	// (0x0001a2db) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb7fe,	// (0x000186a4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb7fe,	// (0x000186a4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001c9e9) cell_fep_china_hwr2_fs_candidate_grid_g

0xd43d,	// (0x0001a2e3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x88fa,	// (0x000157a0) clock_nsta_pane_cp_24_ParamLimits

0x88fa,	// (0x000157a0) clock_nsta_pane_cp_24

0x897a,	// (0x00015820) indicator_nsta_pane_cp_24_ParamLimits

0x897a,	// (0x00015820) indicator_nsta_pane_cp_24

0x9b00,	// (0x000169a6) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001c772) heading_pane_g

0xa61e,	// (0x000174c4) grid_sct_catagory_button_pane

0xa650,	// (0x000174f6) scroll_pane_cp5_ParamLimits

0xb3f4,	// (0x0001829a) button_value_adjust_pane_cp5_ParamLimits

0xb3f4,	// (0x0001829a) button_value_adjust_pane_cp5

0xb4fa,	// (0x000183a0) form2_midp_time_pane_ParamLimits

0xd44b,	// (0x0001a2f1) cell_sct_catagory_button_pane_ParamLimits

0xd44b,	// (0x0001a2f1) cell_sct_catagory_button_pane

0xb7c3,	// (0x00018669) bg_button_pane_cp01_ParamLimits

0xb7c3,	// (0x00018669) bg_button_pane_cp01

0xb7fe,	// (0x000186a4) cell_sct_catagory_button_pane_g1

0x86b5,	// (0x0001555b) popup_tb_extension_window

0xd45d,	// (0x0001a303) aid_size_cell_ext_ParamLimits

0xd45d,	// (0x0001a303) aid_size_cell_ext

0x3808,	// (0x000106ae) bg_tb_trans_pane_cp1_ParamLimits

0x3808,	// (0x000106ae) bg_tb_trans_pane_cp1

0xd47d,	// (0x0001a323) grid_tb_ext_pane_ParamLimits

0xd47d,	// (0x0001a323) grid_tb_ext_pane

0xd4ad,	// (0x0001a353) cell_tb_ext_pane_ParamLimits

0xd4ad,	// (0x0001a353) cell_tb_ext_pane

0xd4c4,	// (0x0001a36a) cell_tb_ext_pane_g1_ParamLimits

0xd4c4,	// (0x0001a36a) cell_tb_ext_pane_g1

0xd4e1,	// (0x0001a387) cell_tb_ext_pane_t1

0x3808,	// (0x000106ae) list_highlight_pane_cp11_ParamLimits

0x3808,	// (0x000106ae) list_highlight_pane_cp11

0x546a,	// (0x00012310) popup_uni_indicator_window_ParamLimits

0x546a,	// (0x00012310) popup_uni_indicator_window

0x3d70,	// (0x00010c16) bg_popup_sub_pane_cp14

0xd4fc,	// (0x0001a3a2) list_uniindi_pane

0xd508,	// (0x0001a3ae) uniindi_top_pane

0x3808,	// (0x000106ae) bg_uniindi_top_pane

0xd529,	// (0x0001a3cf) uniindi_top_pane_g1

0xd53f,	// (0x0001a3e5) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0001cbdc) uniindi_top_pane_g

0xd569,	// (0x0001a40f) uniindi_top_pane_t1

0xd595,	// (0x0001a43b) list_single_uniindi_pane_ParamLimits

0xd595,	// (0x0001a43b) list_single_uniindi_pane

0xb7fe,	// (0x000186a4) bg_uniindi_top_pane_g1

0xd5a7,	// (0x0001a44d) list_single_uniindi_pane_g1

0xd5ba,	// (0x0001a460) list_single_uniindi_pane_t1

0x52d6,	// (0x0001217c) control_bg_pane

0xd5df,	// (0x0001a485) bg_sctrl_sk_pane_cp1

0xd5e8,	// (0x0001a48e) bg_sctrl_sk_pane_cp2

0xd5f1,	// (0x0001a497) control_bg_pane_g1

0xd5fa,	// (0x0001a4a0) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0001cbe5) control_bg_pane_g

0xb21b,	// (0x000180c1) cell_indicator_nsta_pane_g1_ParamLimits

0xb229,	// (0x000180cf) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001c94d) cell_indicator_nsta_pane_g_ParamLimits

0xb58a,	// (0x00018430) form2_midp_time_pane_t1_ParamLimits

0x3a65,	// (0x0001090b) main_idle_act4_pane_ParamLimits

0x3a65,	// (0x0001090b) main_idle_act4_pane

0x86b5,	// (0x0001555b) popup_tb_extension_window_ParamLimits

0xd49f,	// (0x0001a345) tb_ext_find_pane_ParamLimits

0xd49f,	// (0x0001a345) tb_ext_find_pane

0xd603,	// (0x0001a4a9) ai_gene_pane_1_cp1

0x7f88,	// (0x00014e2e) ai_gene_pane_2_cp1

0xd60b,	// (0x0001a4b1) list_single_idle_plugin_calendar_pane

0xd614,	// (0x0001a4ba) list_single_idle_plugin_notification_pane

0xd61d,	// (0x0001a4c3) list_single_idle_plugin_player_pane

0xd626,	// (0x0001a4cc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd626,	// (0x0001a4cc) list_single_idle_plugin_shortcut_pane

0xd648,	// (0x0001a4ee) main_idle_act4_pane_t1

0xd65a,	// (0x0001a500) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0001cbea) main_idle_act4_pane_t

0xd66c,	// (0x0001a512) middle_sk_idle_act4_pane_ParamLimits

0xd66c,	// (0x0001a512) middle_sk_idle_act4_pane

0xd682,	// (0x0001a528) popup_clock_digital_analogue_window_cp2

0xd69c,	// (0x0001a542) shortcut_wheel_idle_act4_pane_ParamLimits

0xd69c,	// (0x0001a542) shortcut_wheel_idle_act4_pane

0xb7fe,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g1

0xb7fe,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g2

0xb7fe,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g3

0xb7fe,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g4

0xb7fe,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g5

0xd6b0,	// (0x0001a556) shortcut_wheel_idle_act4_pane_g6

0xd6b8,	// (0x0001a55e) shortcut_wheel_idle_act4_pane_g7

0xd6c0,	// (0x0001a566) shortcut_wheel_idle_act4_pane_g8

0xd6c8,	// (0x0001a56e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0001cbef) shortcut_wheel_idle_act4_pane_g

0xba79,	// (0x0001891f) middle_sk_idle_act4_pane_g1_ParamLimits

0xba79,	// (0x0001891f) middle_sk_idle_act4_pane_g1

0xd72c,	// (0x0001a5d2) middle_sk_idle_act4_pane_g2_ParamLimits

0xd72c,	// (0x0001a5d2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0001cc12) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0001cc12) middle_sk_idle_act4_pane_g

0xd738,	// (0x0001a5de) middle_sk_idle_act4_pane_t1_ParamLimits

0xd738,	// (0x0001a5de) middle_sk_idle_act4_pane_t1

0xd755,	// (0x0001a5fb) grid_ai_shortcut_pane_ParamLimits

0xd755,	// (0x0001a5fb) grid_ai_shortcut_pane

0xd76e,	// (0x0001a614) list_highlight_pane_cp16_ParamLimits

0xd76e,	// (0x0001a614) list_highlight_pane_cp16

0xd77b,	// (0x0001a621) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd77b,	// (0x0001a621) list_single_idle_plugin_shortcut_pane_g1

0xd787,	// (0x0001a62d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd787,	// (0x0001a62d) list_single_idle_plugin_shortcut_pane_g2

0xd7a1,	// (0x0001a647) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd7a1,	// (0x0001a647) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0001cc17) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0001cc17) list_single_idle_plugin_shortcut_pane_g

0xd7b4,	// (0x0001a65a) cell_ai_shortcut_pane_ParamLimits

0xd7b4,	// (0x0001a65a) cell_ai_shortcut_pane

0xd7d7,	// (0x0001a67d) cell_ai_shortcut_pane_g1_ParamLimits

0xd7d7,	// (0x0001a67d) cell_ai_shortcut_pane_g1

0xd603,	// (0x0001a4a9) ai_gene_pane_1_cp2

0xd7f9,	// (0x0001a69f) ai_gene_pane_2_cp2

0xd801,	// (0x0001a6a7) list_highlight_pane_cp15

0xd80a,	// (0x0001a6b0) list_single_idle_plugin_calendar_pane_g1

0xd801,	// (0x0001a6a7) list_highlight_pane_cp17

0xd812,	// (0x0001a6b8) list_single_idle_plugin_calendar_pane_g1_copy1

0xd81a,	// (0x0001a6c0) list_single_idle_plugin_player_pane_g1

0xa885,	// (0x0001772b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0001cc1e) list_single_idle_plugin_player_pane_g

0xd822,	// (0x0001a6c8) list_single_idle_plugin_player_pane_t1

0xd830,	// (0x0001a6d6) list_single_idle_plugin_player_pane_t2

0xd83e,	// (0x0001a6e4) list_single_idle_plugin_player_pane_t3

0xd84c,	// (0x0001a6f2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0001cc23) list_single_idle_plugin_player_pane_t

0xd85a,	// (0x0001a700) wait_bar_pane_cp15

0xd862,	// (0x0001a708) grid_ai_notification_pane

0xa885,	// (0x0001772b) list_single_idle_plugin_notification_pane_g1

0xd86b,	// (0x0001a711) cell_ai_notification_pane_ParamLimits

0xd86b,	// (0x0001a711) cell_ai_notification_pane

0xd878,	// (0x0001a71e) cell_ai_notification_pane_g1

0xd880,	// (0x0001a726) cell_ai_notification_pane_t1

0xd88e,	// (0x0001a734) tb_ext_find_button_pane

0xd896,	// (0x0001a73c) tb_ext_find_pane_g1

0xd89e,	// (0x0001a744) tb_ext_find_pane_t1

0x44e2,	// (0x00011388) tb_ext_find_button_pane_g1

0xd8ac,	// (0x0001a752) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0001cc2c) tb_ext_find_button_pane_g

0xd648,	// (0x0001a4ee) main_idle_act4_pane_t1_ParamLimits

0xd65a,	// (0x0001a500) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0001cbea) main_idle_act4_pane_t_ParamLimits

0xd682,	// (0x0001a528) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd690,	// (0x0001a536) sat_plugin_idle_act4_pane_ParamLimits

0xd690,	// (0x0001a536) sat_plugin_idle_act4_pane

0xd8b5,	// (0x0001a75b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd8b5,	// (0x0001a75b) sat_plugin_idle_act4_pane_t1

0xd8c8,	// (0x0001a76e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8c8,	// (0x0001a76e) sat_plugin_idle_act4_pane_t2

0xd8db,	// (0x0001a781) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8db,	// (0x0001a781) sat_plugin_idle_act4_pane_t3

0xd8ee,	// (0x0001a794) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8ee,	// (0x0001a794) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0001cc31) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0001cc31) sat_plugin_idle_act4_pane_t

0x539b,	// (0x00012241) popup_battery_window_ParamLimits

0x539b,	// (0x00012241) popup_battery_window

0x3808,	// (0x000106ae) bg_popup_sub_pane_cp25_ParamLimits

0x3808,	// (0x000106ae) bg_popup_sub_pane_cp25

0xd901,	// (0x0001a7a7) popup_battery_window_g1_ParamLimits

0xd901,	// (0x0001a7a7) popup_battery_window_g1

0xd90d,	// (0x0001a7b3) popup_battery_window_t1_ParamLimits

0xd90d,	// (0x0001a7b3) popup_battery_window_t1

0xd91f,	// (0x0001a7c5) popup_battery_window_t2_ParamLimits

0xd91f,	// (0x0001a7c5) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0001cc3a) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0001cc3a) popup_battery_window_t

0x7e53,	// (0x00014cf9) midp_canvas_pane_ParamLimits

0x7eca,	// (0x00014d70) midp_keypad_pane_ParamLimits

0x7eca,	// (0x00014d70) midp_keypad_pane

0x81d5,	// (0x0001507b) main_midp_pane_ParamLimits

0xb2a7,	// (0x0001814d) signal_pane_g2_cp_ParamLimits

0xd93c,	// (0x0001a7e2) aid_size_cell_midp_keypad_ParamLimits

0xd93c,	// (0x0001a7e2) aid_size_cell_midp_keypad

0xd956,	// (0x0001a7fc) midp_keyp_game_grid_pane_ParamLimits

0xd956,	// (0x0001a7fc) midp_keyp_game_grid_pane

0xd976,	// (0x0001a81c) midp_keyp_rocker_pane_ParamLimits

0xd976,	// (0x0001a81c) midp_keyp_rocker_pane

0xd9a1,	// (0x0001a847) midp_keyp_sk_left_pane_ParamLimits

0xd9a1,	// (0x0001a847) midp_keyp_sk_left_pane

0xd9fb,	// (0x0001a8a1) midp_keyp_sk_right_pane_ParamLimits

0xd9fb,	// (0x0001a8a1) midp_keyp_sk_right_pane

0x33e9,	// (0x0001028f) bg_button_pane_cp03

0xda55,	// (0x0001a8fb) midp_keyp_sk_left_pane_g1

0x33e9,	// (0x0001028f) bg_button_pane_cp04

0xda55,	// (0x0001a8fb) midp_keyp_sk_right_pane_g1

0xb7fe,	// (0x000186a4) midp_keyp_rocker_pane_g1

0xda5e,	// (0x0001a904) keyp_game_cell_pane_ParamLimits

0xda5e,	// (0x0001a904) keyp_game_cell_pane

0x33e9,	// (0x0001028f) bg_button_pane_cp02

0xda71,	// (0x0001a917) keyp_game_cell_pane_g1

0x53e5,	// (0x0001228b) popup_fep_vkb2_window_ParamLimits

0x53e5,	// (0x0001228b) popup_fep_vkb2_window

0x660b,	// (0x000134b1) aid_size_cell_vkb2_ParamLimits

0x660b,	// (0x000134b1) aid_size_cell_vkb2

0x665f,	// (0x00013505) popup_fep_vkb2_window_g1_ParamLimits

0x665f,	// (0x00013505) popup_fep_vkb2_window_g1

0x66a7,	// (0x0001354d) vkb2_area_bottom_pane_ParamLimits

0x66a7,	// (0x0001354d) vkb2_area_bottom_pane

0x66fb,	// (0x000135a1) vkb2_area_keypad_pane_ParamLimits

0x66fb,	// (0x000135a1) vkb2_area_keypad_pane

0x6741,	// (0x000135e7) vkb2_area_top_pane_ParamLimits

0x6741,	// (0x000135e7) vkb2_area_top_pane

0x67bb,	// (0x00013661) vkb2_top_entry_pane_ParamLimits

0x67bb,	// (0x00013661) vkb2_top_entry_pane

0x67e5,	// (0x0001368b) vkb2_top_grid_left_pane_ParamLimits

0x67e5,	// (0x0001368b) vkb2_top_grid_left_pane

0x6803,	// (0x000136a9) vkb2_top_grid_right_pane_ParamLimits

0x6803,	// (0x000136a9) vkb2_top_grid_right_pane

0x6821,	// (0x000136c7) vkb2_cell_keypad_pane_ParamLimits

0x6821,	// (0x000136c7) vkb2_cell_keypad_pane

0x68f2,	// (0x00013798) vkb2_area_bottom_grid_pane_ParamLimits

0x68f2,	// (0x00013798) vkb2_area_bottom_grid_pane

0x6918,	// (0x000137be) vkb2_area_bottom_pane_g1_ParamLimits

0x6918,	// (0x000137be) vkb2_area_bottom_pane_g1

0x693c,	// (0x000137e2) vkb2_area_bottom_pane_g2_ParamLimits

0x693c,	// (0x000137e2) vkb2_area_bottom_pane_g2

0x696a,	// (0x00013810) vkb2_area_bottom_pane_g3_ParamLimits

0x696a,	// (0x00013810) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0001cc3f) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0001cc3f) vkb2_area_bottom_pane_g

0x69cb,	// (0x00013871) vkb2_top_cell_left_pane_ParamLimits

0x69cb,	// (0x00013871) vkb2_top_cell_left_pane

0xda82,	// (0x0001a928) vkb2_top_entry_pane_g1_ParamLimits

0xda82,	// (0x0001a928) vkb2_top_entry_pane_g1

0xda90,	// (0x0001a936) vkb2_top_entry_pane_t1_ParamLimits

0xda90,	// (0x0001a936) vkb2_top_entry_pane_t1

0xdac2,	// (0x0001a968) vkb2_top_entry_pane_t2_ParamLimits

0xdac2,	// (0x0001a968) vkb2_top_entry_pane_t2

0xdaf4,	// (0x0001a99a) vkb2_top_entry_pane_t3_ParamLimits

0xdaf4,	// (0x0001a99a) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0001cc46) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0001cc46) vkb2_top_entry_pane_t

0x6a18,	// (0x000138be) vkb2_top_grid_right_pane_g1_ParamLimits

0x6a18,	// (0x000138be) vkb2_top_grid_right_pane_g1

0x6a2e,	// (0x000138d4) vkb2_top_grid_right_pane_g2_ParamLimits

0x6a2e,	// (0x000138d4) vkb2_top_grid_right_pane_g2

0x6a46,	// (0x000138ec) vkb2_top_grid_right_pane_g3_ParamLimits

0x6a46,	// (0x000138ec) vkb2_top_grid_right_pane_g3

0x6a5e,	// (0x00013904) vkb2_top_grid_right_pane_g4_ParamLimits

0x6a5e,	// (0x00013904) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0001cc4d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0001cc4d) vkb2_top_grid_right_pane_g

0x6a74,	// (0x0001391a) vkb2_top_cell_left_pane_g1

0x6a8b,	// (0x00013931) vkb2_cell_keypad_pane_g1_ParamLimits

0x6a8b,	// (0x00013931) vkb2_cell_keypad_pane_g1

0xdb18,	// (0x0001a9be) vkb2_cell_keypad_pane_t1_ParamLimits

0xdb18,	// (0x0001a9be) vkb2_cell_keypad_pane_t1

0x6a99,	// (0x0001393f) vkb2_cell_bottom_grid_pane_ParamLimits

0x6a99,	// (0x0001393f) vkb2_cell_bottom_grid_pane

0x6ad2,	// (0x00013978) vkb2_cell_bottom_grid_pane_g1

0xd6d0,	// (0x0001a576) aid_call2_pane_cp02

0xd6d8,	// (0x0001a57e) aid_call_pane_cp02

0xd6e0,	// (0x0001a586) clock_digital_number_pane_cp10

0xd6e8,	// (0x0001a58e) clock_digital_number_pane_cp11

0xd6f0,	// (0x0001a596) clock_digital_number_pane_cp12

0xd6f8,	// (0x0001a59e) clock_digital_number_pane_cp13

0xd700,	// (0x0001a5a6) clock_digital_separator_pane_cp10

0x44e2,	// (0x00011388) popup_clock_digital_analogue_window_cp2_g1

0x44e2,	// (0x00011388) popup_clock_digital_analogue_window_cp2_g2

0xd708,	// (0x0001a5ae) popup_clock_digital_analogue_window_cp2_g3

0x44e2,	// (0x00011388) popup_clock_digital_analogue_window_cp2_g4

0xd708,	// (0x0001a5ae) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0001cc02) popup_clock_digital_analogue_window_cp2_g

0xd710,	// (0x0001a5b6) popup_clock_digital_analogue_window_cp2_t1

0xd71e,	// (0x0001a5c4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0001cc0d) popup_clock_digital_analogue_window_cp2_t

0xb7fe,	// (0x000186a4) clock_digital_number_pane_cp10_g1

0xb7fe,	// (0x000186a4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001c9e9) clock_digital_number_pane_cp10_g

0xb7fe,	// (0x000186a4) clock_digital_separator_pane_cp10_g1

0xb7fe,	// (0x000186a4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001c9e9) clock_digital_separator_pane_cp10_g

0xd54b,	// (0x0001a3f1) uniindi_top_pane_g3

0xd55c,	// (0x0001a402) uniindi_top_pane_g4

0x68ac,	// (0x00013752) vkb2_row_keypad_pane_ParamLimits

0x68ac,	// (0x00013752) vkb2_row_keypad_pane

0x6aee,	// (0x00013994) vkb2_cell_t_keypad_pane_ParamLimits

0x6aee,	// (0x00013994) vkb2_cell_t_keypad_pane

0x6afe,	// (0x000139a4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6afe,	// (0x000139a4) vkb2_cell_t_keypad_pane_cp08

0x6b13,	// (0x000139b9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6b13,	// (0x000139b9) vkb2_cell_t_keypad_pane_cp09

0x6b27,	// (0x000139cd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6b27,	// (0x000139cd) vkb2_cell_t_keypad_pane_cp01

0x6b38,	// (0x000139de) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6b38,	// (0x000139de) vkb2_cell_t_keypad_pane_cp02

0x6b49,	// (0x000139ef) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6b49,	// (0x000139ef) vkb2_cell_t_keypad_pane_cp03

0x6b5a,	// (0x00013a00) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6b5a,	// (0x00013a00) vkb2_cell_t_keypad_pane_cp04

0x6b6b,	// (0x00013a11) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6b6b,	// (0x00013a11) vkb2_cell_t_keypad_pane_cp05

0x6b7c,	// (0x00013a22) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6b7c,	// (0x00013a22) vkb2_cell_t_keypad_pane_cp06

0x6b8f,	// (0x00013a35) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6b8f,	// (0x00013a35) vkb2_cell_t_keypad_pane_cp07

0x6ba4,	// (0x00013a4a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6ba4,	// (0x00013a4a) vkb2_cell_t_keypad_pane_cp10

0x633e,	// (0x000131e4) vkb2_cell_t_keypad_pane_g1

0xdb2f,	// (0x0001a9d5) vkb2_cell_t_keypad_pane_t1

0x52d6,	// (0x0001217c) popup_grid_graphic2_window

0xdb41,	// (0x0001a9e7) aid_size_cell_graphic2_ParamLimits

0xdb41,	// (0x0001a9e7) aid_size_cell_graphic2

0xdb79,	// (0x0001aa1f) bg_popup_window_pane_cp21_ParamLimits

0xdb79,	// (0x0001aa1f) bg_popup_window_pane_cp21

0xdb87,	// (0x0001aa2d) graphic2_pages_pane_ParamLimits

0xdb87,	// (0x0001aa2d) graphic2_pages_pane

0xdbcd,	// (0x0001aa73) grid_graphic2_control_pane_ParamLimits

0xdbcd,	// (0x0001aa73) grid_graphic2_control_pane

0xdc0b,	// (0x0001aab1) grid_graphic2_pane_ParamLimits

0xdc0b,	// (0x0001aab1) grid_graphic2_pane

0xdc81,	// (0x0001ab27) cell_graphic2_pane

0x33e9,	// (0x0001028f) main_comp_mode_pane

0xcd59,	// (0x00019bff) list_ai3_gene_pane_ParamLimits

0xd184,	// (0x0001a02a) bg_popup_window_pane_cp19_ParamLimits

0xd190,	// (0x0001a036) bg_touch_area_indi_pane_ParamLimits

0xd190,	// (0x0001a036) bg_touch_area_indi_pane

0xd1a6,	// (0x0001a04c) bg_touch_area_indi_pane_cp01_ParamLimits

0xd1a6,	// (0x0001a04c) bg_touch_area_indi_pane_cp01

0xd1be,	// (0x0001a064) bg_touch_area_indi_pane_cp02_ParamLimits

0xd1be,	// (0x0001a064) bg_touch_area_indi_pane_cp02

0xd1d8,	// (0x0001a07e) bg_touch_area_indi_pane_cp03_ParamLimits

0xd1d8,	// (0x0001a07e) bg_touch_area_indi_pane_cp03

0xd1f2,	// (0x0001a098) popup_slider_window_g1_ParamLimits

0xd20e,	// (0x0001a0b4) popup_slider_window_g2_ParamLimits

0xd22a,	// (0x0001a0d0) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0001cb97) popup_slider_window_g_ParamLimits

0xd286,	// (0x0001a12c) popup_slider_window_t1_ParamLimits

0xd2fa,	// (0x0001a1a0) small_volume_slider_vertical_pane_ParamLimits

0xdc81,	// (0x0001ab27) cell_graphic2_pane_ParamLimits

0xdcd3,	// (0x0001ab79) bg_button_pane_cp10_ParamLimits

0xdcd3,	// (0x0001ab79) bg_button_pane_cp10

0xdce8,	// (0x0001ab8e) bg_button_pane_cp11_ParamLimits

0xdce8,	// (0x0001ab8e) bg_button_pane_cp11

0xdcfd,	// (0x0001aba3) graphic2_pages_pane_g1_ParamLimits

0xdcfd,	// (0x0001aba3) graphic2_pages_pane_g1

0xdd18,	// (0x0001abbe) graphic2_pages_pane_g2_ParamLimits

0xdd18,	// (0x0001abbe) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0001cc5b) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0001cc5b) graphic2_pages_pane_g

0xdd30,	// (0x0001abd6) graphic2_pages_pane_t1_ParamLimits

0xdd30,	// (0x0001abd6) graphic2_pages_pane_t1

0xdd46,	// (0x0001abec) cell_graphic2_control_pane_ParamLimits

0xdd46,	// (0x0001abec) cell_graphic2_control_pane

0xdd69,	// (0x0001ac0f) cell_graphic2_pane_g1_ParamLimits

0xdd69,	// (0x0001ac0f) cell_graphic2_pane_g1

0xdd76,	// (0x0001ac1c) cell_graphic2_pane_g2_ParamLimits

0xdd76,	// (0x0001ac1c) cell_graphic2_pane_g2

0xdd83,	// (0x0001ac29) cell_graphic2_pane_g3_ParamLimits

0xdd83,	// (0x0001ac29) cell_graphic2_pane_g3

0xdd90,	// (0x0001ac36) cell_graphic2_pane_g4_ParamLimits

0xdd90,	// (0x0001ac36) cell_graphic2_pane_g4

0xdd9d,	// (0x0001ac43) cell_graphic2_pane_g5_ParamLimits

0xdd9d,	// (0x0001ac43) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0001cc60) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0001cc60) cell_graphic2_pane_g

0xddb8,	// (0x0001ac5e) cell_graphic2_pane_t1_ParamLimits

0xddb8,	// (0x0001ac5e) cell_graphic2_pane_t1

0x8e72,	// (0x00015d18) grid_highlight_pane_cp11_ParamLimits

0x8e72,	// (0x00015d18) grid_highlight_pane_cp11

0x3808,	// (0x000106ae) bg_button_pane_cp05

0xdde1,	// (0x0001ac87) cell_graphic2_control_pane_g1

0xb7fe,	// (0x000186a4) bg_touch_area_indi_pane_g1

0xde09,	// (0x0001acaf) aid_cmod_rocker_key_size

0xde13,	// (0x0001acb9) aid_cmode_itu_key_size

0xde1d,	// (0x0001acc3) main_cmode_video_pane

0xde27,	// (0x0001accd) main_comp_mode_itu_pane

0xde33,	// (0x0001acd9) main_comp_mode_rocker_pane

0xde3f,	// (0x0001ace5) cell_cmode_rocker_pane_ParamLimits

0xde3f,	// (0x0001ace5) cell_cmode_rocker_pane

0xde53,	// (0x0001acf9) cell_cmode_itu_pane_ParamLimits

0xde53,	// (0x0001acf9) cell_cmode_itu_pane

0x3d70,	// (0x00010c16) bg_button_pane_cp06_ParamLimits

0x3d70,	// (0x00010c16) bg_button_pane_cp06

0xba79,	// (0x0001891f) cell_cmode_rocker_pane_g1_ParamLimits

0xba79,	// (0x0001891f) cell_cmode_rocker_pane_g1

0xd3a1,	// (0x0001a247) cell_cmode_rocker_pane_g2_ParamLimits

0xd3a1,	// (0x0001a247) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0001cc70) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0001cc70) cell_cmode_rocker_pane_g

0x33e9,	// (0x0001028f) bg_button_pane_cp07

0xde6a,	// (0x0001ad10) cell_cmode_itu_pane_g1

0xde73,	// (0x0001ad19) cell_cmode_itu_pane_t1

0xde81,	// (0x0001ad27) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0001cc75) cell_cmode_itu_pane_t

0xd5cf,	// (0x0001a475) aid_touch_ctrl_left

0xd5d7,	// (0x0001a47d) aid_touch_ctrl_right

0x33e9,	// (0x0001028f) compa_mode_pane

0xde8f,	// (0x0001ad35) aid_cmod_rocker_key_size_cp

0xde99,	// (0x0001ad3f) aid_cmode_itu_key_size_cp

0xdea3,	// (0x0001ad49) compa_mode_pane_g1

0xdeab,	// (0x0001ad51) compa_mode_pane_g2

0xdeb3,	// (0x0001ad59) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0001cc7a) compa_mode_pane_g

0xdebb,	// (0x0001ad61) main_comp_mode_itu_pane_cp

0xdec3,	// (0x0001ad69) main_comp_mode_rocker_pane_cp

0xdecb,	// (0x0001ad71) cell_cmode_itu_pane_cp_ParamLimits

0xdecb,	// (0x0001ad71) cell_cmode_itu_pane_cp

0xdee0,	// (0x0001ad86) cell_cmode_rocker_pane_cp_ParamLimits

0xdee0,	// (0x0001ad86) cell_cmode_rocker_pane_cp

0x3d70,	// (0x00010c16) bg_button_pane_cp06_cp_ParamLimits

0x3d70,	// (0x00010c16) bg_button_pane_cp06_cp

0xba79,	// (0x0001891f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xba79,	// (0x0001891f) cell_cmode_rocker_pane_g1_cp

0xb7fe,	// (0x000186a4) cell_cmode_rocker_pane_g2_cp

0x33e9,	// (0x0001028f) bg_button_pane_cp07_cp

0xdef2,	// (0x0001ad98) cell_cmode_itu_pane_g1_cp

0xdefb,	// (0x0001ada1) cell_cmode_itu_pane_t1_cp

0xdefb,	// (0x0001ada1) cell_cmode_itu_pane_t2_cp

0xa393,	// (0x00017239) settings_code_pane_cp2

0x3632,	// (0x000104d8) bg_popup_window_pane_cp3_ParamLimits

0x39f6,	// (0x0001089c) heading_pane_cp3_ParamLimits

0x3a02,	// (0x000108a8) listscroll_popup_graphic_pane_ParamLimits

0x60d1,	// (0x00012f77) fep_hwr_aid_pane_ParamLimits

0x6564,	// (0x0001340a) aid_touch_sctrl_top_ParamLimits

0x657f,	// (0x00013425) sctrl_sk_top_pane_g1_ParamLimits

0x633e,	// (0x000131e4) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0001cbb0) sctrl_sk_top_pane_g_ParamLimits

0x658c,	// (0x00013432) sctrl_sk_top_pane_t1_ParamLimits

0x6564,	// (0x0001340a) aid_touch_sctrl_bottom_ParamLimits

0x658c,	// (0x00013432) sctrl_sk_bottom_pane_t1_ParamLimits

0xd515,	// (0x0001a3bb) aid_area_touch_clock

0x6783,	// (0x00013629) aid_vkb2_area_top_pane_cell_ParamLimits

0x6783,	// (0x00013629) aid_vkb2_area_top_pane_cell

0x68ce,	// (0x00013774) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x68ce,	// (0x00013774) aid_vkb2_area_bottom_pane_cell

0xda7a,	// (0x0001a920) popup_char_count_window

0xdf09,	// (0x0001adaf) popup_char_count_window_g1

0xdf12,	// (0x0001adb8) popup_char_count_window_g2

0xdf1b,	// (0x0001adc1) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0001cc81) popup_char_count_window_g

0xdf24,	// (0x0001adca) popup_char_count_window_t1

0x663d,	// (0x000134e3) popup_fep_char_preview_window_ParamLimits

0x663d,	// (0x000134e3) popup_fep_char_preview_window

0x67a1,	// (0x00013647) vkb2_top_candi_pane_ParamLimits

0x67a1,	// (0x00013647) vkb2_top_candi_pane

0xdf32,	// (0x0001add8) cell_vkb2_top_candi_pane_ParamLimits

0xdf32,	// (0x0001add8) cell_vkb2_top_candi_pane

0x6bb9,	// (0x00013a5f) bg_popup_fep_char_preview_window_ParamLimits

0x6bb9,	// (0x00013a5f) bg_popup_fep_char_preview_window

0x6bc7,	// (0x00013a6d) popup_fep_char_preview_window_t1_ParamLimits

0x6bc7,	// (0x00013a6d) popup_fep_char_preview_window_t1

0xdf83,	// (0x0001ae29) bg_popup_fep_char_preview_window_g1

0xdf8b,	// (0x0001ae31) bg_popup_fep_char_preview_window_g2

0xdf93,	// (0x0001ae39) bg_popup_fep_char_preview_window_g3

0xdf9b,	// (0x0001ae41) bg_popup_fep_char_preview_window_g4

0xdfa3,	// (0x0001ae49) bg_popup_fep_char_preview_window_g5

0x6c01,	// (0x00013aa7) bg_popup_fep_char_preview_window_g6

0xdfab,	// (0x0001ae51) bg_popup_fep_char_preview_window_g7

0xdfb3,	// (0x0001ae59) bg_popup_fep_char_preview_window_g8

0xdfbb,	// (0x0001ae61) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0001cc88) bg_popup_fep_char_preview_window_g

0x633e,	// (0x000131e4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x633e,	// (0x000131e4) cell_vkb2_top_candi_pane_g1

0x634c,	// (0x000131f2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x634c,	// (0x000131f2) cell_vkb2_top_candi_pane_g2

0xc355,	// (0x000191fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc355,	// (0x000191fb) cell_vkb2_top_candi_pane_g3

0x6c09,	// (0x00013aaf) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c09,	// (0x00013aaf) cell_vkb2_top_candi_pane_g4

0xc13d,	// (0x00018fe3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc13d,	// (0x00018fe3) cell_vkb2_top_candi_pane_g5

0x6c2a,	// (0x00013ad0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6c2a,	// (0x00013ad0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0001cc9b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0001cc9b) cell_vkb2_top_candi_pane_g

0x6c38,	// (0x00013ade) cell_vkb2_top_candi_pane_t1

0x5f31,	// (0x00012dd7) aid_size_touch_slider_mark_ParamLimits

0x5f31,	// (0x00012dd7) aid_size_touch_slider_mark

0xdbbd,	// (0x0001aa63) grid_graphic2_catg_pane_ParamLimits

0xdbbd,	// (0x0001aa63) grid_graphic2_catg_pane

0xdc5b,	// (0x0001ab01) popup_grid_graphic2_window_t1_ParamLimits

0xdc5b,	// (0x0001ab01) popup_grid_graphic2_window_t1

0xdc6d,	// (0x0001ab13) popup_grid_graphic2_window_t2_ParamLimits

0xdc6d,	// (0x0001ab13) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0001cc56) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0001cc56) popup_grid_graphic2_window_t

0x3808,	// (0x000106ae) bg_button_pane_cp05_ParamLimits

0xdde1,	// (0x0001ac87) cell_graphic2_control_pane_g1_ParamLimits

0xdfc3,	// (0x0001ae69) cell_graphic2_catg_pane_ParamLimits

0xdfc3,	// (0x0001ae69) cell_graphic2_catg_pane

0x33e9,	// (0x0001028f) bg_button_pane_cp12

0xdfd5,	// (0x0001ae7b) cell_graphic2_catg_pane_g1

0xd4e1,	// (0x0001a387) cell_tb_ext_pane_t1_ParamLimits

0x69eb,	// (0x00013891) vkb2_top_cell_right_narrow_pane_ParamLimits

0x69eb,	// (0x00013891) vkb2_top_cell_right_narrow_pane

0x6a03,	// (0x000138a9) vkb2_top_cell_right_wide_pane_ParamLimits

0x6a03,	// (0x000138a9) vkb2_top_cell_right_wide_pane

0x60c3,	// (0x00012f69) bg_vkb2_func_pane_ParamLimits

0x60c3,	// (0x00012f69) bg_vkb2_func_pane

0x6a74,	// (0x0001391a) vkb2_top_cell_left_pane_g1_ParamLimits

0x60c3,	// (0x00012f69) bg_vkb2_fuc_pane_cp03_ParamLimits

0x60c3,	// (0x00012f69) bg_vkb2_fuc_pane_cp03

0x6ad2,	// (0x00013978) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8d54,	// (0x00015bfa) bg_vkb2_func_pane_g1

0x8d5c,	// (0x00015c02) bg_vkb2_func_pane_g2

0x8d6c,	// (0x00015c12) bg_vkb2_func_pane_g3

0x8d64,	// (0x00015c0a) bg_vkb2_func_pane_g4

0x8d74,	// (0x00015c1a) bg_vkb2_func_pane_g5

0x8d7c,	// (0x00015c22) bg_vkb2_func_pane_g6

0x8d84,	// (0x00015c2a) bg_vkb2_func_pane_g7

0x8d8c,	// (0x00015c32) bg_vkb2_func_pane_g8

0x8d4c,	// (0x00015bf2) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0001cca8) bg_vkb2_func_pane_g

0x60c3,	// (0x00012f69) bg_vkb2_fuc_pane_cp01_ParamLimits

0x60c3,	// (0x00012f69) bg_vkb2_fuc_pane_cp01

0x6a74,	// (0x0001391a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6a74,	// (0x0001391a) vkb2_top_cell_right_wide_pane_g1

0x60c3,	// (0x00012f69) bg_vkb2_fuc_pane_cp02_ParamLimits

0x60c3,	// (0x00012f69) bg_vkb2_fuc_pane_cp02

0x6ad2,	// (0x00013978) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ad2,	// (0x00013978) vkb2_top_cell_right_narrow_pane_g1

0xd102,	// (0x00019fa8) aid_touch_area_decrease_ParamLimits

0xd102,	// (0x00019fa8) aid_touch_area_decrease

0xd126,	// (0x00019fcc) aid_touch_area_increase_ParamLimits

0xd126,	// (0x00019fcc) aid_touch_area_increase

0xd132,	// (0x00019fd8) aid_touch_area_mute_ParamLimits

0xd132,	// (0x00019fd8) aid_touch_area_mute

0xd156,	// (0x00019ffc) aid_touch_area_slider_ParamLimits

0xd156,	// (0x00019ffc) aid_touch_area_slider

0xd246,	// (0x0001a0ec) popup_slider_window_g4_ParamLimits

0xd246,	// (0x0001a0ec) popup_slider_window_g4

0xd252,	// (0x0001a0f8) popup_slider_window_g5_ParamLimits

0xd252,	// (0x0001a0f8) popup_slider_window_g5

0xd274,	// (0x0001a11a) popup_slider_window_g6_ParamLimits

0xd274,	// (0x0001a11a) popup_slider_window_g6

0xd2b4,	// (0x0001a15a) popup_slider_window_t2_ParamLimits

0xd2b4,	// (0x0001a15a) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0001cba4) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0001cba4) popup_slider_window_t

0xd2cc,	// (0x0001a172) slider_pane_ParamLimits

0xd2cc,	// (0x0001a172) slider_pane

0xdfde,	// (0x0001ae84) slider_pane_g1_ParamLimits

0xdfde,	// (0x0001ae84) slider_pane_g1

0xdff2,	// (0x0001ae98) slider_pane_g2_ParamLimits

0xdff2,	// (0x0001ae98) slider_pane_g2

0xe008,	// (0x0001aeae) slider_pane_g3_ParamLimits

0xe008,	// (0x0001aeae) slider_pane_g3

0x0003,

0xfe15,	// (0x0001ccbb) slider_pane_g_ParamLimits

0xfe15,	// (0x0001ccbb) slider_pane_g

0x8717,	// (0x000155bd) popup_tb_float_extension_window_ParamLimits

0x8717,	// (0x000155bd) popup_tb_float_extension_window

0xe034,	// (0x0001aeda) aid_size_cell_tb_float_ext

0x33e9,	// (0x0001028f) bg_popup_sub_window_cp28

0xe040,	// (0x0001aee6) grid_tb_float_ext_pane

0xe04c,	// (0x0001aef2) cell_tb_float_ext_pane_ParamLimits

0xe04c,	// (0x0001aef2) cell_tb_float_ext_pane

0xe068,	// (0x0001af0e) cell_tb_float_ext_pane_g1

0xe071,	// (0x0001af17) grid_highlight_pane_cp12

0x6218,	// (0x000130be) cell_last_hwr_side_pane_ParamLimits

0x6218,	// (0x000130be) cell_last_hwr_side_pane

0xb7fe,	// (0x000186a4) cell_last_hwr_side_pane_g1

0xe07a,	// (0x0001af20) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0001ccc4) cell_last_hwr_side_pane_g

0x699a,	// (0x00013840) vkb2_area_bottom_space_btn_pane_ParamLimits

0x699a,	// (0x00013840) vkb2_area_bottom_space_btn_pane

0x633e,	// (0x000131e4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdb2f,	// (0x0001a9d5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c38,	// (0x00013ade) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6c56,	// (0x00013afc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6c56,	// (0x00013afc) vkb2_area_bottom_space_btn_pane_g1

0x6c90,	// (0x00013b36) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6c90,	// (0x00013b36) vkb2_area_bottom_space_btn_pane_g2

0x6cc6,	// (0x00013b6c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6cc6,	// (0x00013b6c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0001ccc9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0001ccc9) vkb2_area_bottom_space_btn_pane_g

0x6188,	// (0x0001302e) cel_fep_hwr_func_pane_ParamLimits

0x6188,	// (0x0001302e) cel_fep_hwr_func_pane

0x61c4,	// (0x0001306a) cell_hwr_side_button_pane_ParamLimits

0x61c4,	// (0x0001306a) cell_hwr_side_button_pane

0xd515,	// (0x0001a3bb) aid_area_touch_clock_ParamLimits

0x3808,	// (0x000106ae) bg_uniindi_top_pane_ParamLimits

0xd529,	// (0x0001a3cf) uniindi_top_pane_g1_ParamLimits

0xd53f,	// (0x0001a3e5) uniindi_top_pane_g2_ParamLimits

0xd54b,	// (0x0001a3f1) uniindi_top_pane_g3_ParamLimits

0xd55c,	// (0x0001a402) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0001cbdc) uniindi_top_pane_g_ParamLimits

0xd569,	// (0x0001a40f) uniindi_top_pane_t1_ParamLimits

0x3808,	// (0x000106ae) bg_vkb2_func_pane_cp01_ParamLimits

0x3808,	// (0x000106ae) bg_vkb2_func_pane_cp01

0xe083,	// (0x0001af29) cel_fep_hwr_func_pane_g1_ParamLimits

0xe083,	// (0x0001af29) cel_fep_hwr_func_pane_g1

0x3808,	// (0x000106ae) bg_vkb2_func_pane_cp02_ParamLimits

0x3808,	// (0x000106ae) bg_vkb2_func_pane_cp02

0xe083,	// (0x0001af29) cell_hwr_side_button_pane_g1_ParamLimits

0xe083,	// (0x0001af29) cell_hwr_side_button_pane_g1

0x8b9f,	// (0x00015a45) status_pane_g4_ParamLimits

0x8b9f,	// (0x00015a45) status_pane_g4

0x8bb9,	// (0x00015a5f) status_pane_t1

0xb59d,	// (0x00018443) form2_midp_gauge_slider_cont_pane

0xb5a5,	// (0x0001844b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb5b7,	// (0x0001845d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb5c9,	// (0x0001846f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001c99c) form2_midp_gauge_slider_pane_t_ParamLimits

0xb5db,	// (0x00018481) form2_midp_slider_pane_ParamLimits

0x65fd,	// (0x000134a3) aid_size_cell_func_vkb2_ParamLimits

0x65fd,	// (0x000134a3) aid_size_cell_func_vkb2

0xe020,	// (0x0001aec6) slider_pane_g4_ParamLimits

0xe020,	// (0x0001aec6) slider_pane_g4

0x6d10,	// (0x00013bb6) form2_midp_gauge_slider_pane_t2_cp01

0x6d1e,	// (0x00013bc4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6d1e,	// (0x00013bc4) form2_midp_gauge_slider_pane_t3_cp01

0x6d3b,	// (0x00013be1) form2_midp_slider_pane_cp01

0x33e9,	// (0x0001028f) navi_smil_pane

0xe0bc,	// (0x0001af62) navi_smil_pane_g1

0xe0c4,	// (0x0001af6a) navi_smil_pane_t1

0xe091,	// (0x0001af37) form2_midp_slider_pane_g1

0xe09a,	// (0x0001af40) form2_midp_slider_pane_g2

0xe0a2,	// (0x0001af48) form2_midp_slider_pane_g3

0xe091,	// (0x0001af37) form2_midp_slider_pane_g4

0xe0aa,	// (0x0001af50) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0001ccd2) form2_midp_slider_pane_g

0x6d00,	// (0x00013ba6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6d00,	// (0x00013ba6) vkb2_area_bottom_space_btn_pane_g4

0x89b6,	// (0x0001585c) lc0_navi_pane_ParamLimits

0x89b6,	// (0x0001585c) lc0_navi_pane

0x8a32,	// (0x000158d8) lc0_stat_indi_pane_ParamLimits

0x8a32,	// (0x000158d8) lc0_stat_indi_pane

0x8a49,	// (0x000158ef) ls0_title_pane_ParamLimits

0x8a49,	// (0x000158ef) ls0_title_pane

0x3d70,	// (0x00010c16) bg_popup_sub_pane_cp14_ParamLimits

0xd4fc,	// (0x0001a3a2) list_uniindi_pane_ParamLimits

0xd508,	// (0x0001a3ae) uniindi_top_pane_ParamLimits

0xd5a7,	// (0x0001a44d) list_single_uniindi_pane_g1_ParamLimits

0xd5ba,	// (0x0001a460) list_single_uniindi_pane_t1_ParamLimits

0x6d44,	// (0x00013bea) lc0_stat_clock_pane_ParamLimits

0x6d44,	// (0x00013bea) lc0_stat_clock_pane

0xe0d2,	// (0x0001af78) lc0_stat_indi_pane_g1_ParamLimits

0xe0d2,	// (0x0001af78) lc0_stat_indi_pane_g1

0xe0df,	// (0x0001af85) lc0_stat_indi_pane_g2_ParamLimits

0xe0df,	// (0x0001af85) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0001ccdd) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0001ccdd) lc0_stat_indi_pane_g

0x6d51,	// (0x00013bf7) lc0_uni_indicator_pane_ParamLimits

0x6d51,	// (0x00013bf7) lc0_uni_indicator_pane

0xe0ec,	// (0x0001af92) ls0_title_pane_g1_ParamLimits

0xe0ec,	// (0x0001af92) ls0_title_pane_g1

0xe100,	// (0x0001afa6) ls0_title_pane_t1_ParamLimits

0xe100,	// (0x0001afa6) ls0_title_pane_t1

0x6d5e,	// (0x00013c04) lc0_uni_indicator_pane_g1_ParamLimits

0x6d5e,	// (0x00013c04) lc0_uni_indicator_pane_g1

0xe136,	// (0x0001afdc) lc0_stat_clock_pane_t1

0x33e9,	// (0x0001028f) main_ai5_pane

0xe144,	// (0x0001afea) ai5_sk_pane_ParamLimits

0xe144,	// (0x0001afea) ai5_sk_pane

0xe151,	// (0x0001aff7) cell_ai5_widget_pane_ParamLimits

0xe151,	// (0x0001aff7) cell_ai5_widget_pane

0xe6ed,	// (0x0001b593) aid_size_cell_widget_grid

0xe6fb,	// (0x0001b5a1) bg_ai5_widget_pane_ParamLimits

0xe6fb,	// (0x0001b5a1) bg_ai5_widget_pane

0xe76f,	// (0x0001b615) cell_ai5_widget_pane_g2

0xe77f,	// (0x0001b625) cell_ai5_widget_pane_g3

0xe796,	// (0x0001b63c) cell_ai5_widget_pane_g4

0xe7a2,	// (0x0001b648) cell_ai5_widget_pane_g5

0xe7ae,	// (0x0001b654) cell_ai5_widget_pane_g6

0xe7ba,	// (0x0001b660) cell_ai5_widget_pane_g7

0xe802,	// (0x0001b6a8) cell_ai5_widget_pane_t1_ParamLimits

0xe802,	// (0x0001b6a8) cell_ai5_widget_pane_t1

0xe81f,	// (0x0001b6c5) cell_ai5_widget_pane_t2_ParamLimits

0xe81f,	// (0x0001b6c5) cell_ai5_widget_pane_t2

0xe837,	// (0x0001b6dd) cell_ai5_widget_pane_t3_ParamLimits

0xe837,	// (0x0001b6dd) cell_ai5_widget_pane_t3

0xe84f,	// (0x0001b6f5) cell_ai5_widget_pane_t4_ParamLimits

0xe84f,	// (0x0001b6f5) cell_ai5_widget_pane_t4

0xe86c,	// (0x0001b712) cell_ai5_widget_pane_t5_ParamLimits

0xe86c,	// (0x0001b712) cell_ai5_widget_pane_t5

0xe88b,	// (0x0001b731) cell_ai5_widget_pane_t6_ParamLimits

0xe88b,	// (0x0001b731) cell_ai5_widget_pane_t6

0xe89d,	// (0x0001b743) cell_ai5_widget_pane_t7_ParamLimits

0xe89d,	// (0x0001b743) cell_ai5_widget_pane_t7

0xe8b6,	// (0x0001b75c) cell_ai5_widget_pane_t8_ParamLimits

0xe8b6,	// (0x0001b75c) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0001ccf7) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0001ccf7) cell_ai5_widget_pane_t

0xe90a,	// (0x0001b7b0) grid_ai5_widget_pane

0x3d70,	// (0x00010c16) highlight_cell_ai5_widget_pane_ParamLimits

0x3d70,	// (0x00010c16) highlight_cell_ai5_widget_pane

0xe91e,	// (0x0001b7c4) ai5_sk_left_pane

0xe928,	// (0x0001b7ce) ai5_sk_middle_pane

0xe932,	// (0x0001b7d8) ai5_sk_right_pane

0xe93c,	// (0x0001b7e2) bg_ai5_widget_pane_g1_ParamLimits

0xe93c,	// (0x0001b7e2) bg_ai5_widget_pane_g1

0xe948,	// (0x0001b7ee) bg_ai5_widget_pane_g2_ParamLimits

0xe948,	// (0x0001b7ee) bg_ai5_widget_pane_g2

0xe954,	// (0x0001b7fa) bg_ai5_widget_pane_g3_ParamLimits

0xe954,	// (0x0001b7fa) bg_ai5_widget_pane_g3

0xe960,	// (0x0001b806) bg_ai5_widget_pane_g4_ParamLimits

0xe960,	// (0x0001b806) bg_ai5_widget_pane_g4

0xe96c,	// (0x0001b812) bg_ai5_widget_pane_g5_ParamLimits

0xe96c,	// (0x0001b812) bg_ai5_widget_pane_g5

0xe978,	// (0x0001b81e) bg_ai5_widget_pane_g6_ParamLimits

0xe978,	// (0x0001b81e) bg_ai5_widget_pane_g6

0xe984,	// (0x0001b82a) bg_ai5_widget_pane_g7_ParamLimits

0xe984,	// (0x0001b82a) bg_ai5_widget_pane_g7

0xe990,	// (0x0001b836) bg_ai5_widget_pane_g8_ParamLimits

0xe990,	// (0x0001b836) bg_ai5_widget_pane_g8

0xe99c,	// (0x0001b842) bg_ai5_widget_pane_g9_ParamLimits

0xe99c,	// (0x0001b842) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0001cd0c) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0001cd0c) bg_ai5_widget_pane_g

0xe9d2,	// (0x0001b878) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9d2,	// (0x0001b878) cell_shortcut_ai5_widget_pane

0x7e4b,	// (0x00014cf1) bg_cell_shortcut_ai5_widget_pane

0xe9e5,	// (0x0001b88b) cell_grid_ai5_widget_pane_g1

0xe9ee,	// (0x0001b894) highlight_cell_shortcut_ai5_widget_pane

0x8d54,	// (0x00015bfa) ai5_sk_left_pane_g1

0xe9f6,	// (0x0001b89c) ai5_sk_left_pane_g2

0xe9fe,	// (0x0001b8a4) ai5_sk_left_pane_g3

0xea06,	// (0x0001b8ac) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0001cd1f) ai5_sk_left_pane_g

0xea0e,	// (0x0001b8b4) ai5_sk_left_pane_t1

0x8d5c,	// (0x00015c02) ai5_sk_right_pane_g1

0xea1c,	// (0x0001b8c2) ai5_sk_right_pane_g2

0xea24,	// (0x0001b8ca) ai5_sk_right_pane_g3

0xea2c,	// (0x0001b8d2) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0001cd28) ai5_sk_right_pane_g

0xea34,	// (0x0001b8da) ai5_sk_right_pane_t1

0x8d5c,	// (0x00015c02) ai5_sk_middle_pane_g1

0x8d54,	// (0x00015bfa) ai5_sk_middle_pane_g2

0x8d74,	// (0x00015c1a) ai5_sk_middle_pane_g3

0xea24,	// (0x0001b8ca) ai5_sk_middle_pane_g4

0xe9fe,	// (0x0001b8a4) ai5_sk_middle_pane_g5

0xea42,	// (0x0001b8e8) ai5_sk_middle_pane_g6

0xea4a,	// (0x0001b8f0) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0001cd31) ai5_sk_middle_pane_g

0x8838,	// (0x000156de) aid_touch_area_size_lc0_ParamLimits

0x8838,	// (0x000156de) aid_touch_area_size_lc0

0x636d,	// (0x00013213) cell_hwr_candidate_pane_t1_ParamLimits

0x8856,	// (0x000156fc) aid_touch_navi_pane

0x8b49,	// (0x000159ef) status_dt_navi_pane_ParamLimits

0x8b49,	// (0x000159ef) status_dt_navi_pane

0x8b56,	// (0x000159fc) status_dt_sta_pane_ParamLimits

0x8b56,	// (0x000159fc) status_dt_sta_pane

0xea52,	// (0x0001b8f8) dt_sta_controll_pane

0xea5f,	// (0x0001b905) dt_sta_indi_pane

0xea70,	// (0x0001b916) dt_sta_title_pane

0x3808,	// (0x000106ae) bg_dt_sta_indi_pane_ParamLimits

0x3808,	// (0x000106ae) bg_dt_sta_indi_pane

0xea83,	// (0x0001b929) dt_sta_battery_pane

0xea8b,	// (0x0001b931) dt_sta_indi_pane_g1

0xea94,	// (0x0001b93a) dt_sta_indi_pane_g2

0xea9d,	// (0x0001b943) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0001cd40) dt_sta_indi_pane_g

0xeaa6,	// (0x0001b94c) dt_sta_signal_pane

0x3d70,	// (0x00010c16) bg_dt_sta_title_pane_ParamLimits

0x3d70,	// (0x00010c16) bg_dt_sta_title_pane

0xeaaf,	// (0x0001b955) dt_sta_title_pane_g1

0xeab7,	// (0x0001b95d) dt_sta_title_pane_t1_ParamLimits

0xeab7,	// (0x0001b95d) dt_sta_title_pane_t1

0x33e9,	// (0x0001028f) bg_dt_sta_control_pane

0xeacc,	// (0x0001b972) dt_sta_controll_pane_g1

0xead5,	// (0x0001b97b) bg_dt_sta_title_pane_g1

0xeade,	// (0x0001b984) bg_dt_sta_title_pane_g2

0xeae7,	// (0x0001b98d) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0001cd47) bg_dt_sta_title_pane_g

0xb7fe,	// (0x000186a4) bg_dt_sta_indi_pane_g1

0xeaf0,	// (0x0001b996) dt_sta_signal_pane_g1

0xeaf8,	// (0x0001b99e) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0001cd4e) dt_sta_signal_pane_g

0xeb00,	// (0x0001b9a6) dt_sta_battery_pane_g1

0xeb09,	// (0x0001b9af) dt_sta_battery_pane_t1

0xb7fe,	// (0x000186a4) bg_dt_sta_control_pane_g1

0x463d,	// (0x000114e3) fep_china_uni_eep_pane

0x4645,	// (0x000114eb) fep_china_uni_entry_pane_ParamLimits

0x4655,	// (0x000114fb) popup_fep_china_uni_window_g1_ParamLimits

0x4665,	// (0x0001150b) popup_fep_china_uni_window_g2_ParamLimits

0x4665,	// (0x0001150b) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001c5c4) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001c5c4) popup_fep_china_uni_window_g

0xeb18,	// (0x0001b9be) fep_china_uni_eep_pane_g1

0xeb20,	// (0x0001b9c6) fep_china_uni_eep_pane_t1

0xe0b3,	// (0x0001af59) aid_touch_area_size_smil_player

0x89ae,	// (0x00015854) lc0_clock_pane

0x8bad,	// (0x00015a53) status_pane_g5_ParamLimits

0x8bad,	// (0x00015a53) status_pane_g5

0x839c,	// (0x00015242) popup_keymap_window

0x8b6b,	// (0x00015a11) status_icon_pane

0xe77f,	// (0x0001b625) cell_ai5_widget_pane_g3_ParamLimits

0xe796,	// (0x0001b63c) cell_ai5_widget_pane_g4_ParamLimits

0xe7a2,	// (0x0001b648) cell_ai5_widget_pane_g5_ParamLimits

0xe7c6,	// (0x0001b66c) cell_ai5_widget_pane_g8_ParamLimits

0xe7c6,	// (0x0001b66c) cell_ai5_widget_pane_g8

0xe7da,	// (0x0001b680) cell_ai5_widget_pane_g9_ParamLimits

0xe7da,	// (0x0001b680) cell_ai5_widget_pane_g9

0xe7ee,	// (0x0001b694) cell_ai5_widget_pane_g10_ParamLimits

0xe7ee,	// (0x0001b694) cell_ai5_widget_pane_g10

0xeb2f,	// (0x0001b9d5) status_icon_pane_g1

0x33e9,	// (0x0001028f) bg_popup_sub_pane_cp13

0xeb37,	// (0x0001b9dd) popup_keymap_window_t1

0x811a,	// (0x00014fc0) control_pane_g6_ParamLimits

0x811a,	// (0x00014fc0) control_pane_g6

0x8127,	// (0x00014fcd) control_pane_g7_ParamLimits

0x8127,	// (0x00014fcd) control_pane_g7

0x8134,	// (0x00014fda) control_pane_g8_ParamLimits

0x8134,	// (0x00014fda) control_pane_g8

0xea52,	// (0x0001b8f8) dt_sta_controll_pane_ParamLimits

0xea5f,	// (0x0001b905) dt_sta_indi_pane_ParamLimits

0xea70,	// (0x0001b916) dt_sta_title_pane_ParamLimits

0x3c2c,	// (0x00010ad2) aid_size_touch_scroll_bar_cale

0x53b3,	// (0x00012259) popup_discreet_window_ParamLimits

0x53b3,	// (0x00012259) popup_discreet_window

0x5441,	// (0x000122e7) popup_sk_window

0x947d,	// (0x00016323) bg_popup_sub_pane_cp28_ParamLimits

0x947d,	// (0x00016323) bg_popup_sub_pane_cp28

0xeb45,	// (0x0001b9eb) popup_discreet_window_g1_ParamLimits

0xeb45,	// (0x0001b9eb) popup_discreet_window_g1

0xeb65,	// (0x0001ba0b) popup_discreet_window_t1_ParamLimits

0xeb65,	// (0x0001ba0b) popup_discreet_window_t1

0xeb83,	// (0x0001ba29) popup_discreet_window_t2_ParamLimits

0xeb83,	// (0x0001ba29) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0001cd53) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0001cd53) popup_discreet_window_t

0x6d71,	// (0x00013c17) popup_sk_window_g1

0x6d7b,	// (0x00013c21) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0001cd5a) popup_sk_window_g

0x6d85,	// (0x00013c2b) popup_sk_window_t1

0x6d95,	// (0x00013c3b) popup_sk_window_t1_copy1

0xe76f,	// (0x0001b615) cell_ai5_widget_pane_g2_ParamLimits

0xe8c8,	// (0x0001b76e) cell_ai5_widget_pane_t9_ParamLimits

0xe8c8,	// (0x0001b76e) cell_ai5_widget_pane_t9

0x33e9,	// (0x0001028f) main_fep_fshwr2_pane

0x6da3,	// (0x00013c49) aid_fshwr2_btn_pane

0x6daf,	// (0x00013c55) aid_fshwr2_syb_pane

0x6dc0,	// (0x00013c66) aid_fshwr2_txt_pane

0x6dcc,	// (0x00013c72) fshwr2_func_candi_pane

0x6de0,	// (0x00013c86) fshwr2_hwr_syb_pane

0x6df3,	// (0x00013c99) fshwr2_icf_pane

0x33e9,	// (0x0001028f) fshwr2_icf_bg_pane

0xebd5,	// (0x0001ba7b) fshwr2_icf_pane_t1_ParamLimits

0xebd5,	// (0x0001ba7b) fshwr2_icf_pane_t1

0x44e2,	// (0x00011388) fshwr2_func_candi_pane_g1

0xebed,	// (0x0001ba93) fshwr2_func_candi_row_pane_ParamLimits

0xebed,	// (0x0001ba93) fshwr2_func_candi_row_pane

0xebfd,	// (0x0001baa3) cell_fshwr2_syb_pane_ParamLimits

0xebfd,	// (0x0001baa3) cell_fshwr2_syb_pane

0xba79,	// (0x0001891f) fshwr2_hwr_syb_pane_g1_ParamLimits

0xba79,	// (0x0001891f) fshwr2_hwr_syb_pane_g1

0x33e9,	// (0x0001028f) bg_popup_call_pane_cp01

0xec17,	// (0x0001babd) fshwr2_func_candi_cell_pane_ParamLimits

0xec17,	// (0x0001babd) fshwr2_func_candi_cell_pane

0xec3f,	// (0x0001bae5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec3f,	// (0x0001bae5) fshwr2_func_candi_cell_bg_pane

0xec4b,	// (0x0001baf1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec4b,	// (0x0001baf1) fshwr2_func_candi_cell_pane_g1

0xec6b,	// (0x0001bb11) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec6b,	// (0x0001bb11) fshwr2_func_candi_cell_pane_t1

0x33e9,	// (0x0001028f) bg_button_pane_cp08

0x7e4b,	// (0x00014cf1) cell_fshwr2_syb_bg_pane

0xec7e,	// (0x0001bb24) cell_fshwr2_syb_bg_pane_g1

0xec86,	// (0x0001bb2c) cell_fshwr2_syb_bg_pane_t1

0x3d70,	// (0x00010c16) main_tmo_pane

0x9fa1,	// (0x00016e47) uni_indicator_pane_g1_ParamLimits

0x9fb8,	// (0x00016e5e) uni_indicator_pane_g2_ParamLimits

0x9fce,	// (0x00016e74) uni_indicator_pane_g3_ParamLimits

0x9fe3,	// (0x00016e89) uni_indicator_pane_g4_ParamLimits

0x9fe3,	// (0x00016e89) uni_indicator_pane_g4

0x9ff7,	// (0x00016e9d) uni_indicator_pane_g5_ParamLimits

0x9ff7,	// (0x00016e9d) uni_indicator_pane_g5

0x9ff7,	// (0x00016e9d) uni_indicator_pane_g6_ParamLimits

0x9ff7,	// (0x00016e9d) uni_indicator_pane_g6

0xf922,	// (0x0001c7c8) uni_indicator_pane_g_ParamLimits

0xd0d2,	// (0x00019f78) popup_tmo_note_window_ParamLimits

0xd0d2,	// (0x00019f78) popup_tmo_note_window

0x65df,	// (0x00013485) fshwr2_bg_pane

0xec5c,	// (0x0001bb02) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec5c,	// (0x0001bb02) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0001cd5f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0001cd5f) fshwr2_func_candi_cell_pane_g

0xb7fe,	// (0x000186a4) bg_popup_window_pane_cp01

0xec95,	// (0x0001bb3b) bg_popup_window_pane_g1_cp01

0xec9e,	// (0x0001bb44) bg_popup_window_pane_cp22_ParamLimits

0xec9e,	// (0x0001bb44) bg_popup_window_pane_cp22

0xecac,	// (0x0001bb52) listscroll_tmo_link_pane_ParamLimits

0xecac,	// (0x0001bb52) listscroll_tmo_link_pane

0xecec,	// (0x0001bb92) popup_tmo_note_window_g1_ParamLimits

0xecec,	// (0x0001bb92) popup_tmo_note_window_g1

0xecf9,	// (0x0001bb9f) tmo_note_info_pane_ParamLimits

0xecf9,	// (0x0001bb9f) tmo_note_info_pane

0xed13,	// (0x0001bbb9) list_tmo_note_info_pane_g1_ParamLimits

0xed13,	// (0x0001bbb9) list_tmo_note_info_pane_g1

0xed2a,	// (0x0001bbd0) list_tmo_note_info_pane_g2_ParamLimits

0xed2a,	// (0x0001bbd0) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0001cd64) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0001cd64) list_tmo_note_info_pane_g

0xed46,	// (0x0001bbec) list_tmo_note_info_text_pane_ParamLimits

0xed46,	// (0x0001bbec) list_tmo_note_info_text_pane

0xedcb,	// (0x0001bc71) list_tmo_link_pane

0xedd8,	// (0x0001bc7e) scroll_pane_cp20

0xede5,	// (0x0001bc8b) list_single_tmo_link_pane_ParamLimits

0xede5,	// (0x0001bc8b) list_single_tmo_link_pane

0xedf5,	// (0x0001bc9b) list_single_tmo_link_pane_t1

0xee03,	// (0x0001bca9) list_tmo_note_info_text_pane_t1_ParamLimits

0xee03,	// (0x0001bca9) list_tmo_note_info_text_pane_t1

0x77f7,	// (0x0001469d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x77f7,	// (0x0001469d) aid_size_touch_scroll_bar_cp01

0x773b,	// (0x000145e1) aid_size_touch_slider_marker

0x5429,	// (0x000122cf) popup_settings_window_ParamLimits

0x5429,	// (0x000122cf) popup_settings_window

0x81fd,	// (0x000150a3) popup_candi_list_indi_window

0x8856,	// (0x000156fc) aid_touch_navi_pane_ParamLimits

0x6538,	// (0x000133de) rs_clock_indi_pane

0x6541,	// (0x000133e7) sctrl_sk_bottom_pane_ParamLimits

0x6552,	// (0x000133f8) sctrl_sk_top_pane_ParamLimits

0x6657,	// (0x000134fd) popup_fep_tooltip_window

0xe6ed,	// (0x0001b593) aid_size_cell_widget_grid_ParamLimits

0xe75a,	// (0x0001b600) cell_ai5_widget_pane_g1_ParamLimits

0xe75a,	// (0x0001b600) cell_ai5_widget_pane_g1

0xe7ae,	// (0x0001b654) cell_ai5_widget_pane_g6_ParamLimits

0xe7ba,	// (0x0001b660) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0001cce2) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0001cce2) cell_ai5_widget_pane_g

0xe8ec,	// (0x0001b792) cell_ai5_widget_pane_t10_ParamLimits

0xe8ec,	// (0x0001b792) cell_ai5_widget_pane_t10

0xe90a,	// (0x0001b7b0) grid_ai5_widget_pane_ParamLimits

0xe9a8,	// (0x0001b84e) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a8,	// (0x0001b84e) cell_contacts_ai5_widget_pane

0xeb98,	// (0x0001ba3e) popup_discreet_window_t3_ParamLimits

0xeb98,	// (0x0001ba3e) popup_discreet_window_t3

0x6e08,	// (0x00013cae) popup_fshwr2_char_preview_window_ParamLimits

0x6e08,	// (0x00013cae) popup_fshwr2_char_preview_window

0xed64,	// (0x0001bc0a) tmo_note_info_pane_t1

0xed79,	// (0x0001bc1f) tmo_note_info_pane_t2

0xed92,	// (0x0001bc38) tmo_note_info_pane_t3

0xeda7,	// (0x0001bc4d) tmo_note_info_pane_t4

0xedb9,	// (0x0001bc5f) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0001cd69) tmo_note_info_pane_t

0xedcb,	// (0x0001bc71) list_tmo_link_pane_ParamLimits

0xedd8,	// (0x0001bc7e) scroll_pane_cp20_ParamLimits

0x33e9,	// (0x0001028f) bg_popup_fep_char_preview_window_cp01

0xee1c,	// (0x0001bcc2) popup_fshwr2_char_preview_window_t1

0xee2a,	// (0x0001bcd0) popup_candi_list_indi_window_g1

0xee33,	// (0x0001bcd9) bg_cell_contacts_ai5_widget_pane

0xee3f,	// (0x0001bce5) cell_contacts_ai5_widget_pane_g1

0xee53,	// (0x0001bcf9) cell_contacts_ai5_widget_pane_g2

0xee5f,	// (0x0001bd05) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0001cd74) cell_contacts_ai5_widget_pane_g

0xee72,	// (0x0001bd18) cell_contacts_ai5_widget_pane_t1

0x3d70,	// (0x00010c16) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeeec,	// (0x0001bd92) settings_container_pane

0x7e4b,	// (0x00014cf1) listscroll_set_pane_copy1

0xac5a,	// (0x00017b00) scroll_pane_cp121_copy1

0xeef8,	// (0x0001bd9e) set_content_pane_copy1

0xef00,	// (0x0001bda6) aid_height_set_list_copy1_ParamLimits

0xef00,	// (0x0001bda6) aid_height_set_list_copy1

0xa21f,	// (0x000170c5) aid_size_parent_copy1_ParamLimits

0xa21f,	// (0x000170c5) aid_size_parent_copy1

0xef0c,	// (0x0001bdb2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef0c,	// (0x0001bdb2) button_value_adjust_pane_cp6_copy1

0x81d5,	// (0x0001507b) list_highlight_pane_cp2_copy1_ParamLimits

0x81d5,	// (0x0001507b) list_highlight_pane_cp2_copy1

0xef20,	// (0x0001bdc6) list_set_pane_copy1_ParamLimits

0xef20,	// (0x0001bdc6) list_set_pane_copy1

0xee87,	// (0x0001bd2d) main_pane_set_t1_copy1_ParamLimits

0xee87,	// (0x0001bd2d) main_pane_set_t1_copy1

0xeec1,	// (0x0001bd67) main_pane_set_t2_copy1_ParamLimits

0xeec1,	// (0x0001bd67) main_pane_set_t2_copy1

0xefe7,	// (0x0001be8d) main_pane_set_t3_copy1

0xeff5,	// (0x0001be9b) main_pane_set_t4_copy1

0xeee0,	// (0x0001bd86) set_content_pane_g1_copy1_ParamLimits

0xeee0,	// (0x0001bd86) set_content_pane_g1_copy1

0xf003,	// (0x0001bea9) setting_code_pane_copy1

0xf00b,	// (0x0001beb1) setting_slider_graphic_pane_copy1

0xf00b,	// (0x0001beb1) setting_slider_pane_copy1

0xf00b,	// (0x0001beb1) setting_text_pane_copy1

0xf00b,	// (0x0001beb1) setting_volume_pane_copy1

0xf003,	// (0x0001bea9) settings_code_pane_cp2_copy1

0xf013,	// (0x0001beb9) settings_code_pane_cp_copy1_ParamLimits

0xf013,	// (0x0001beb9) settings_code_pane_cp_copy1

0x6e20,	// (0x00013cc6) volume_set_pane_copy1

0xf027,	// (0x0001becd) volume_set_pane_g10_copy1

0xf033,	// (0x0001bed9) volume_set_pane_g1_copy1

0xf03d,	// (0x0001bee3) volume_set_pane_g2_copy1

0xf047,	// (0x0001beed) volume_set_pane_g3_copy1

0xf051,	// (0x0001bef7) volume_set_pane_g4_copy1

0xf05b,	// (0x0001bf01) volume_set_pane_g5_copy1

0xf065,	// (0x0001bf0b) volume_set_pane_g6_copy1

0xf06f,	// (0x0001bf15) volume_set_pane_g7_copy1

0xf079,	// (0x0001bf1f) volume_set_pane_g8_copy1

0xf083,	// (0x0001bf29) volume_set_pane_g9_copy1

0x3632,	// (0x000104d8) bg_set_opt_pane_cp_copy1_ParamLimits

0x3632,	// (0x000104d8) bg_set_opt_pane_cp_copy1

0x6e2c,	// (0x00013cd2) setting_slider_pane_t1_copy1_ParamLimits

0x6e2c,	// (0x00013cd2) setting_slider_pane_t1_copy1

0x6e4a,	// (0x00013cf0) setting_slider_pane_t2_copy1_ParamLimits

0x6e4a,	// (0x00013cf0) setting_slider_pane_t2_copy1

0x6e64,	// (0x00013d0a) setting_slider_pane_t3_copy1_ParamLimits

0x6e64,	// (0x00013d0a) setting_slider_pane_t3_copy1

0x6e7c,	// (0x00013d22) slider_set_pane_copy1_ParamLimits

0x6e7c,	// (0x00013d22) slider_set_pane_copy1

0x3e39,	// (0x00010cdf) set_opt_bg_pane_g1_copy2

0x3e41,	// (0x00010ce7) set_opt_bg_pane_g2_copy2

0xf08d,	// (0x0001bf33) set_opt_bg_pane_g3_copy2

0x3e51,	// (0x00010cf7) set_opt_bg_pane_g4_copy2

0x3e7d,	// (0x00010d23) set_opt_bg_pane_g5_copy2

0x3e85,	// (0x00010d2b) set_opt_bg_pane_g6_copy2

0xf097,	// (0x0001bf3d) set_opt_bg_pane_g7_copy2

0xf0a1,	// (0x0001bf47) set_opt_bg_pane_g8_copy2

0xf0ab,	// (0x0001bf51) set_opt_bg_pane_g9_copy2

0xf0b5,	// (0x0001bf5b) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0b5,	// (0x0001bf5b) aid_size_touch_slider_mark_copy1

0xf0c9,	// (0x0001bf6f) slider_set_pane_g1_copy1

0xf0d2,	// (0x0001bf78) slider_set_pane_g2_copy1

0xc313,	// (0x000191b9) slider_set_pane_g3_copy1_ParamLimits

0xc313,	// (0x000191b9) slider_set_pane_g3_copy1

0xc327,	// (0x000191cd) slider_set_pane_g4_copy1_ParamLimits

0xc327,	// (0x000191cd) slider_set_pane_g4_copy1

0xc33f,	// (0x000191e5) slider_set_pane_g5_copy1_ParamLimits

0xc33f,	// (0x000191e5) slider_set_pane_g5_copy1

0xc313,	// (0x000191b9) slider_set_pane_g6_copy1_ParamLimits

0xc313,	// (0x000191b9) slider_set_pane_g6_copy1

0xf0da,	// (0x0001bf80) slider_set_pane_g7_copy1_ParamLimits

0xf0da,	// (0x0001bf80) slider_set_pane_g7_copy1

0x356c,	// (0x00010412) bg_set_opt_pane_cp2_copy1

0xf0f0,	// (0x0001bf96) setting_slider_graphic_pane_g1_copy1

0xf0f9,	// (0x0001bf9f) setting_slider_graphic_pane_t1_copy1

0xf109,	// (0x0001bfaf) setting_slider_graphic_pane_t2_copy1

0xf119,	// (0x0001bfbf) slider_set_pane_cp_copy1

0xf129,	// (0x0001bfcf) input_focus_pane_cp1_copy1

0xf132,	// (0x0001bfd8) list_set_text_pane_copy1

0xf13a,	// (0x0001bfe0) setting_text_pane_g1_copy1

0xf143,	// (0x0001bfe9) set_text_pane_t1_copy1

0xf129,	// (0x0001bfcf) input_focus_pane_cp2_copy1

0xf13a,	// (0x0001bfe0) setting_code_pane_g1_copy1

0xf15c,	// (0x0001c002) setting_code_pane_t1_copy1

0xf16a,	// (0x0001c010) list_set_graphic_pane_copy1

0x356c,	// (0x00010412) bg_set_opt_pane_cp4_copy1

0x7b45,	// (0x000149eb) list_set_graphic_pane_g1_copy1_ParamLimits

0x7b45,	// (0x000149eb) list_set_graphic_pane_g1_copy1

0xf17c,	// (0x0001c022) list_set_graphic_pane_g2_copy1

0x7b5d,	// (0x00014a03) list_set_graphic_pane_t1_copy1_ParamLimits

0x7b5d,	// (0x00014a03) list_set_graphic_pane_t1_copy1

0xb7fe,	// (0x000186a4) rs_clock_indi_pane_g1

0xf184,	// (0x0001c02a) rs_clock_indi_pane_t1

0xf192,	// (0x0001c038) rs_indi_pane

0xf19a,	// (0x0001c040) rs_indi_pane_g1

0xf1a3,	// (0x0001c049) rs_indi_pane_g2

0xf1ac,	// (0x0001c052) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0001cd7b) rs_indi_pane_g

0x7e4b,	// (0x00014cf1) bg_popup_preview_window_pane_cp03

0xf1b5,	// (0x0001c05b) popup_fep_tooltip_window_t1

0xc728,	// (0x000195ce) popup_note2_window_g2_ParamLimits

0xc728,	// (0x000195ce) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0001cb14) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0001cb14) popup_note2_window_g

0xcd1f,	// (0x00019bc5) bg_popup_sub_pane_cp11_ParamLimits

0xcd2c,	// (0x00019bd2) cell_ai3_links_pane_g1_ParamLimits

0xcd43,	// (0x00019be9) cell_ai3_links_pane_t1

0xf143,	// (0x0001bfe9) set_text_pane_t1_copy1_ParamLimits

0x7d58,	// (0x00014bfe) cell_graphic_popup_pane_cp2_ParamLimits

0x7d58,	// (0x00014bfe) cell_graphic_popup_pane_cp2

0xf1c3,	// (0x0001c069) cell_graphic_popup_pane_g1_cp2

0x3a3f,	// (0x000108e5) cell_graphic_popup_pane_g2_cp2

0xf1cb,	// (0x0001c071) cell_graphic_popup_pane_g3_cp2

0xf1d3,	// (0x0001c079) cell_graphic_popup_pane_t2_cp2

0x3a50,	// (0x000108f6) grid_highlight_pane_cp3_cp2

0x42d1,	// (0x00011177) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3d70,	// (0x00010c16) main_tmo_pane_ParamLimits

0xd0c6,	// (0x00019f6c) popup_tmo_big_image_note_window

0xe749,	// (0x0001b5ef) cell_ai5_widget_list_pane

0xe751,	// (0x0001b5f7) cell_ai5_widget_lrg_icon_pane

0xed64,	// (0x0001bc0a) tmo_note_info_pane_t1_ParamLimits

0xed79,	// (0x0001bc1f) tmo_note_info_pane_t2_ParamLimits

0xed92,	// (0x0001bc38) tmo_note_info_pane_t3_ParamLimits

0xeda7,	// (0x0001bc4d) tmo_note_info_pane_t4_ParamLimits

0xedb9,	// (0x0001bc5f) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0001cd69) tmo_note_info_pane_t_ParamLimits

0xeeec,	// (0x0001bd92) settings_container_pane_ParamLimits

0xf121,	// (0x0001bfc7) indicator_popup_pane_cp5

0xf121,	// (0x0001bfc7) indicator_popup_pane_cp6

0xf16a,	// (0x0001c010) list_set_graphic_pane_copy1_ParamLimits

0x33e9,	// (0x0001028f) bg_popup_window_pane_cp23

0xf1e1,	// (0x0001c087) popup_tmo_big_image_note_window_g1

0xf1ed,	// (0x0001c093) popup_tmo_big_image_note_window_t1

0xf1fd,	// (0x0001c0a3) popup_tmo_big_image_note_window_t2

0xf20d,	// (0x0001c0b3) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0001cd82) popup_tmo_big_image_note_window_t

0xb7fe,	// (0x000186a4) cell_ai5_widget_lrg_icon_pane_g1

0xf21d,	// (0x0001c0c3) cell_ai5_widget_lrg_icon_pane_t1

0xf22b,	// (0x0001c0d1) cell_ai5_widget_list_row_pane_ParamLimits

0xf22b,	// (0x0001c0d1) cell_ai5_widget_list_row_pane

0xf244,	// (0x0001c0ea) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf244,	// (0x0001c0ea) cell_ai5_widget_list_row_pane_g1

0xf251,	// (0x0001c0f7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf251,	// (0x0001c0f7) cell_ai5_widget_list_row_pane_t1

0xf27c,	// (0x0001c122) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf27c,	// (0x0001c122) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0001cd89) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0001cd89) cell_ai5_widget_list_row_pane_t

0x52d6,	// (0x0001217c) main_fep_vtchi_ss_pane

0x6ea1,	// (0x00013d47) popup_fep_char_pre_window

0x6ea9,	// (0x00013d4f) popup_fep_ituss_window

0x6eca,	// (0x00013d70) popup_fep_vkbss_window

0xf2a4,	// (0x0001c14a) grid_vkbss_keypad_pane_ParamLimits

0xf2a4,	// (0x0001c14a) grid_vkbss_keypad_pane

0xf2b4,	// (0x0001c15a) ituss_keypad_pane

0x6ef7,	// (0x00013d9d) aid_vkbss_key_offset_ParamLimits

0x6ef7,	// (0x00013d9d) aid_vkbss_key_offset

0x6f03,	// (0x00013da9) cell_vkbss_key_pane_ParamLimits

0x6f03,	// (0x00013da9) cell_vkbss_key_pane

0xf2c4,	// (0x0001c16a) bg_cell_vkbss_key_g1_ParamLimits

0xf2c4,	// (0x0001c16a) bg_cell_vkbss_key_g1

0xf2d0,	// (0x0001c176) cell_vkbss_key_3p_pane_ParamLimits

0xf2d0,	// (0x0001c176) cell_vkbss_key_3p_pane

0xf2ea,	// (0x0001c190) cell_vkbss_key_g1_ParamLimits

0xf2ea,	// (0x0001c190) cell_vkbss_key_g1

0xf304,	// (0x0001c1aa) cell_vkbss_key_t1_ParamLimits

0xf304,	// (0x0001c1aa) cell_vkbss_key_t1

0x6f19,	// (0x00013dbf) cell_ituss_key_pane_ParamLimits

0x6f19,	// (0x00013dbf) cell_ituss_key_pane

0xf32f,	// (0x0001c1d5) bg_cell_ituss_key_g1_ParamLimits

0xf32f,	// (0x0001c1d5) bg_cell_ituss_key_g1

0xf33b,	// (0x0001c1e1) cell_ituss_key_pane_g1_ParamLimits

0xf33b,	// (0x0001c1e1) cell_ituss_key_pane_g1

0xf34f,	// (0x0001c1f5) cell_ituss_key_pane_g2_ParamLimits

0xf34f,	// (0x0001c1f5) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001cd90) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001cd90) cell_ituss_key_pane_g

0xf381,	// (0x0001c227) cell_ituss_key_t1_ParamLimits

0xf381,	// (0x0001c227) cell_ituss_key_t1

0xf3bf,	// (0x0001c265) cell_ituss_key_t2_ParamLimits

0xf3bf,	// (0x0001c265) cell_ituss_key_t2

0xf3f0,	// (0x0001c296) cell_ituss_key_t3_ParamLimits

0xf3f0,	// (0x0001c296) cell_ituss_key_t3

0xf421,	// (0x0001c2c7) cell_ituss_key_t4_ParamLimits

0xf421,	// (0x0001c2c7) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001cd95) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001cd95) cell_ituss_key_t

0xf452,	// (0x0001c2f8) cell_vkbss_key_3p_pane_g1

0xf45a,	// (0x0001c300) cell_vkbss_key_3p_pane_g2

0xf462,	// (0x0001c308) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001cd9e) cell_vkbss_key_3p_pane_g

0x33e9,	// (0x0001028f) bg_popup_fep_char_preview_window_cp02

0xf46a,	// (0x0001c310) popup_fep_char_pre_window_t1

0xe6e3,	// (0x0001b589) main_ai5_sk_pane

0xee33,	// (0x0001bcd9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee3f,	// (0x0001bce5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee53,	// (0x0001bcf9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee5f,	// (0x0001bd05) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0001cd74) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee72,	// (0x0001bd18) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3d70,	// (0x00010c16) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf479,	// (0x0001c31f) main_ai5_sk_pane_g1

0x92b5,	// (0x0001615b) popup_query_code_window_g1

0x6ebf,	// (0x00013d65) popup_fep_vkb_icf_pane

0x6ed5,	// (0x00013d7b) popup_fep_vtchi_icf_pane

0x3d70,	// (0x00010c16) bg_icf_pane

0xf482,	// (0x0001c328) list_vkb_icf_pane

0x3d70,	// (0x00010c16) bg_icf_pane_cp01

0xf48e,	// (0x0001c334) vtchi_icf_list_pane

0xf49f,	// (0x0001c345) list_vkb_icf_pane_t1_ParamLimits

0xf49f,	// (0x0001c345) list_vkb_icf_pane_t1

0xf4b5,	// (0x0001c35b) vtchi_icf_list_pane_t1_ParamLimits

0xf4b5,	// (0x0001c35b) vtchi_icf_list_pane_t1

0x6ea9,	// (0x00013d4f) popup_fep_ituss_window_ParamLimits

0x6ed5,	// (0x00013d7b) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b4,	// (0x0001c15a) ituss_keypad_pane_ParamLimits

0x6eeb,	// (0x00013d91) ituss_sks_pane

0x3d70,	// (0x00010c16) bg_icf_pane_ParamLimits

0x6e92,	// (0x00013d38) icf_edit_indi_pane_ParamLimits

0x6e92,	// (0x00013d38) icf_edit_indi_pane

0xf482,	// (0x0001c328) list_vkb_icf_pane_ParamLimits

0x3d70,	// (0x00010c16) bg_icf_pane_cp01_ParamLimits

0x6e92,	// (0x00013d38) icf_edit_indi_pane_cp01_ParamLimits

0x6e92,	// (0x00013d38) icf_edit_indi_pane_cp01

0xf496,	// (0x0001c33c) vtchi_query_pane

0xba79,	// (0x0001891f) icf_edit_indi_pane_g1_ParamLimits

0xba79,	// (0x0001891f) icf_edit_indi_pane_g1

0xf537,	// (0x0001c3dd) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0001c3dd) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cdb6) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cdb6) icf_edit_indi_pane_g

0xf546,	// (0x0001c3ec) icf_edit_indi_pane_t1

0xf4cd,	// (0x0001c373) bg_input_focus_pane_cp042

0x3c23,	// (0x00010ac9) vtchi_button_pane

0xf4d6,	// (0x0001c37c) vtchi_query_pane_t1

0xf4e4,	// (0x0001c38a) vtchi_query_pane_t2

0xf4f2,	// (0x0001c398) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001cda5) vtchi_query_pane_t

0x33e9,	// (0x0001028f) bg_button_pane_cp13

0xf500,	// (0x0001c3a6) vtchi_button_pane_g1

0xf508,	// (0x0001c3ae) ituss_sks_pane_g1

0xf513,	// (0x0001c3b9) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001cdac) ituss_sks_pane_g

0xf51b,	// (0x0001c3c1) ituss_sks_pane_t1

0xf529,	// (0x0001c3cf) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001cdb1) ituss_sks_pane_t

0xb258,	// (0x000180fe) indicator_nsta_pane_cp_g1

0xb261,	// (0x00018107) indicator_nsta_pane_cp_g2

0xb269,	// (0x0001810f) indicator_nsta_pane_cp_g3

0xb271,	// (0x00018117) indicator_nsta_pane_cp_g4

0xb279,	// (0x0001811f) indicator_nsta_pane_cp_g5

0xb281,	// (0x00018127) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001c952) indicator_nsta_pane_cp_g

0xddce,	// (0x0001ac74) cell_graphic2_pane_t2_ParamLimits

0xddce,	// (0x0001ac74) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0001cc6b) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0001cc6b) cell_graphic2_pane_t

0xddfb,	// (0x0001aca1) cell_graphic2_control_pane_t1

0x79d9,	// (0x0001487f) signal_pane_g3_ParamLimits

0x79d9,	// (0x0001487f) signal_pane_g3

0x79eb,	// (0x00014891) signal_pane_g4_ParamLimits

0x79eb,	// (0x00014891) signal_pane_g4

0xf28e,	// (0x0001c134) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf28e,	// (0x0001c134) cell_ai5_widget_list_row_pane_t3

0xf36f,	// (0x0001c215) cell_ituss_key_pane_t1_ParamLimits

0xf36f,	// (0x0001c215) cell_ituss_key_pane_t1

0x8f03,	// (0x00015da9) form_field_data_wide_pane_vc_t2_ParamLimits

0x8f03,	// (0x00015da9) form_field_data_wide_pane_vc_t2

0x8f17,	// (0x00015dbd) form_field_data_wide_pane_vc_t3_ParamLimits

0x8f17,	// (0x00015dbd) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001c6b0) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001c6b0) form_field_data_wide_pane_vc_t

0xaf03,	// (0x00017da9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaf03,	// (0x00017da9) form_field_slider_wide_pane_vc_t3

0xafd9,	// (0x00017e7f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafd9,	// (0x00017e7f) form_field_popup_wide_pane_vc_t2

0xaff0,	// (0x00017e96) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaff0,	// (0x00017e96) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001c941) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001c941) form_field_popup_wide_pane_vc_t

0x6da3,	// (0x00013c49) aid_fshwr2_btn_pane_ParamLimits

0x6daf,	// (0x00013c55) aid_fshwr2_syb_pane_ParamLimits

0x6dc0,	// (0x00013c66) aid_fshwr2_txt_pane_ParamLimits

0x65df,	// (0x00013485) fshwr2_bg_pane_ParamLimits

0x6dcc,	// (0x00013c72) fshwr2_func_candi_pane_ParamLimits

0x6de0,	// (0x00013c86) fshwr2_hwr_syb_pane_ParamLimits

0x6df3,	// (0x00013c99) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
